// --atomics 96 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 5,95,8 -l 5,5,1
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

__constant uint32_t permutations[10][25] = {
{15,24,0,17,23,14,9,8,4,22,6,13,16,7,1,5,2,18,20,21,10,12,11,19,3}, // permutation 0
{16,20,6,22,17,19,0,5,3,24,11,7,14,21,8,18,10,13,1,23,4,2,12,9,15}, // permutation 1
{1,11,17,20,19,2,6,22,12,10,21,0,15,24,16,14,13,9,18,5,3,7,4,23,8}, // permutation 2
{5,9,8,11,21,20,10,14,16,6,22,1,24,2,19,17,4,18,23,7,3,12,15,13,0}, // permutation 3
{1,5,6,18,11,24,9,0,7,13,4,12,3,23,21,2,15,10,19,8,17,14,20,22,16}, // permutation 4
{24,6,14,9,8,1,21,18,5,16,13,19,17,20,4,2,22,10,7,23,0,11,3,12,15}, // permutation 5
{12,22,18,21,9,0,13,19,23,14,3,7,1,6,24,4,11,20,5,15,16,17,2,8,10}, // permutation 6
{11,24,19,15,18,0,22,8,17,10,12,16,14,3,6,9,21,23,13,20,4,1,2,5,7}, // permutation 7
{1,14,22,10,7,20,19,24,4,18,16,13,9,0,15,12,23,3,6,17,11,2,8,21,5}, // permutation 8
{16,15,17,23,7,5,3,14,1,19,6,0,12,10,4,20,24,2,18,13,9,21,8,11,22} // permutation 9
};

// Seed: 1788174684

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int16_t  f0;
   uint32_t  f1;
   int8_t * f2;
   int32_t  f3;
};

union U1 {
   uint32_t  f0;
   volatile int64_t  f1;
   volatile uint16_t  f2;
};

union U2 {
   uint32_t  f0;
};

union U3 {
   volatile int8_t  f0;
   uint32_t  f1;
   uint64_t  f2;
};

struct S4 {
    VECTOR(int64_t, 2) g_2;
    volatile VECTOR(int64_t, 4) g_3;
    volatile VECTOR(uint8_t, 16) g_4;
    int8_t g_13;
    int8_t *g_12[4];
    VECTOR(int32_t, 2) g_40;
    int32_t *g_323[3];
    VECTOR(int16_t, 16) g_352;
    int64_t g_360;
    union U3 g_367[10][8][3];
    union U3 g_368;
    union U3 g_369[3][10][8];
    union U3 g_370;
    union U3 g_371;
    union U3 g_372[8][3][2];
    union U3 g_373;
    union U3 g_374;
    union U3 g_375;
    union U3 g_376;
    union U3 g_377;
    union U3 g_378;
    union U3 g_379;
    union U3 g_380;
    union U3 g_381;
    union U3 g_382;
    union U3 g_383;
    union U3 g_384;
    union U3 g_385;
    union U3 g_386;
    union U3 g_387[3][7][4];
    union U3 g_388;
    union U3 g_389;
    union U3 g_391;
    union U3 *g_390;
    uint8_t g_418;
    int64_t *g_457;
    union U0 g_472;
    union U3 **g_475[2];
    union U2 g_483;
    union U3 g_498;
    int32_t g_510;
    union U3 g_519;
    union U3 g_521;
    union U3 ***g_535;
    uint16_t g_540;
    VECTOR(int16_t, 4) g_569;
    VECTOR(uint64_t, 16) g_577;
    VECTOR(uint64_t, 2) g_590;
    int64_t g_603;
    VECTOR(uint8_t, 4) g_609;
    int32_t g_617[1];
    int32_t g_619[3];
    int32_t g_621[9][9][3];
    union U1 g_645;
    volatile union U0 g_661;
    volatile union U0 *g_660[2];
    volatile union U0 **g_659;
    VECTOR(uint16_t, 4) g_667;
    uint32_t g_671;
    int32_t g_674;
    VECTOR(uint8_t, 16) g_678;
    union U1 *g_824;
    union U1 g_827;
    volatile union U2 *g_828[7][1];
    union U1 * volatile *g_850;
    VECTOR(int32_t, 8) g_854;
    VECTOR(uint16_t, 4) g_870;
    uint32_t g_881[2][7];
    int32_t g_916;
    uint32_t g_920;
    VECTOR(uint8_t, 2) g_1247;
    VECTOR(uint8_t, 4) g_1248;
    VECTOR(int32_t, 16) g_1308;
    uint32_t v_collective;
    uint64_t global_0_offset;
    uint64_t global_1_offset;
    uint64_t global_2_offset;
    uint64_t local_0_offset;
    uint64_t local_1_offset;
    uint64_t local_2_offset;
    uint64_t group_0_offset;
    uint64_t group_1_offset;
    uint64_t group_2_offset;
    uint32_t tid;
    __local volatile uint32_t *l_atomic_input;
    __local volatile uint32_t *l_special_values;
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int8_t  func_1(struct S4 * p_1316);
int16_t  func_9(int8_t * p_10, int8_t * p_11, struct S4 * p_1316);
int8_t  func_26(int16_t  p_27, uint16_t  p_28, uint32_t  p_29, struct S4 * p_1316);
uint64_t  func_30(int32_t  p_31, struct S4 * p_1316);
int32_t * func_35(int64_t  p_36, int32_t * p_37, struct S4 * p_1316);
int32_t  func_61(int64_t * p_62, union U2  p_63, union U2  p_64, int32_t * p_65, int8_t  p_66, struct S4 * p_1316);
uint16_t  func_69(int64_t * p_70, int64_t * p_71, struct S4 * p_1316);
int64_t * func_72(uint8_t  p_73, struct S4 * p_1316);
int64_t * func_328(int64_t  p_329, uint64_t  p_330, int64_t * p_331, struct S4 * p_1316);
int64_t  func_333(uint64_t  p_334, uint32_t  p_335, uint16_t  p_336, uint64_t  p_337, int8_t  p_338, struct S4 * p_1316);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1316->g_2 p_1316->g_3 p_1316->g_4 p_1316->g_12 p_1316->g_13 p_1316->g_40 p_1316->l_comm_values p_1316->g_352 p_1316->g_360 p_1316->g_472 p_1316->g_577 p_1316->g_590 p_1316->g_603 p_1316->g_comm_values p_1316->g_617 p_1316->g_619 p_1316->g_659 p_1316->g_667 p_1316->g_540 p_1316->g_671 p_1316->g_645.f0 p_1316->g_569 p_1316->g_510 p_1316->g_521.f2 p_1316->g_621 p_1316->g_609 p_1316->g_674 p_1316->g_472.f3 p_1316->g_483.f0 p_1316->g_824 p_1316->g_827.f0 p_1316->g_850 p_1316->g_472.f0 p_1316->g_870 p_1316->g_370.f1 p_1316->g_389.f2 p_1316->g_483 p_1316->g_920 p_1316->g_854 p_1316->g_1247 p_1316->g_1248 p_1316->g_384.f0 p_1316->g_373.f0 p_1316->g_380.f0 p_1316->g_678 p_1316->g_916 p_1316->g_1308
 * writes: p_1316->g_13 p_1316->g_comm_values p_1316->g_418 p_1316->g_535 p_1316->g_540 p_1316->g_391.f2 p_1316->g_603 p_1316->g_617 p_1316->g_619 p_1316->g_621 p_1316->g_519.f1 p_1316->g_323 p_1316->g_368.f1 p_1316->g_674 p_1316->g_510 p_1316->g_521.f2 p_1316->g_379.f1 p_1316->g_472.f3 p_1316->g_660 p_1316->g_483.f0 p_1316->g_828 p_1316->g_827.f0 p_1316->g_370.f1 p_1316->g_389.f2 p_1316->g_920 p_1316->g_569 p_1316->g_916
 */
int8_t  func_1(struct S4 * p_1316)
{ /* block id: 4 */
    int8_t *l_14 = &p_1316->g_13;
    int32_t l_1243 = 0x0166BBCAL;
    int32_t *l_1244 = (void*)0;
    int32_t *l_1245 = (void*)0;
    int32_t *l_1246 = &p_1316->g_617[0];
    VECTOR(uint8_t, 2) l_1249 = (VECTOR(uint8_t, 2))(0x3FL, 249UL);
    uint32_t l_1254 = 0UL;
    int16_t *l_1255[5][3][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    uint32_t *l_1256 = &p_1316->g_483.f0;
    int32_t *l_1257 = &l_1243;
    int32_t *l_1258 = &l_1243;
    int32_t *l_1259 = &p_1316->g_916;
    int32_t *l_1260 = &l_1243;
    int32_t *l_1261 = &p_1316->g_916;
    int32_t *l_1262 = (void*)0;
    int32_t *l_1263 = (void*)0;
    int32_t *l_1264 = (void*)0;
    int32_t *l_1265 = &l_1243;
    int32_t *l_1266 = (void*)0;
    int32_t *l_1267 = (void*)0;
    int32_t l_1268 = 4L;
    int32_t *l_1269 = &p_1316->g_510;
    int32_t *l_1270 = (void*)0;
    int32_t *l_1271 = &p_1316->g_916;
    int32_t *l_1272 = (void*)0;
    int32_t *l_1273 = (void*)0;
    int32_t *l_1274 = &l_1243;
    int32_t *l_1275 = (void*)0;
    int32_t *l_1276 = &p_1316->g_916;
    int32_t l_1277[1];
    int32_t *l_1278 = &p_1316->g_916;
    int32_t *l_1279 = (void*)0;
    int32_t *l_1280 = &l_1243;
    int32_t *l_1281 = &p_1316->g_510;
    int32_t *l_1282[1];
    uint8_t l_1283 = 1UL;
    union U0 *l_1297 = &p_1316->g_472;
    union U0 **l_1296[10] = {(void*)0,(void*)0,&l_1297,(void*)0,(void*)0,(void*)0,(void*)0,&l_1297,(void*)0,(void*)0};
    VECTOR(int8_t, 16) l_1300 = (VECTOR(int8_t, 16))(0x62L, (VECTOR(int8_t, 4))(0x62L, (VECTOR(int8_t, 2))(0x62L, 1L), 1L), 1L, 0x62L, 1L, (VECTOR(int8_t, 2))(0x62L, 1L), (VECTOR(int8_t, 2))(0x62L, 1L), 0x62L, 1L, 0x62L, 1L);
    int64_t l_1301[3][3];
    int32_t l_1302[10] = {0L,0x192BB235L,0x0A77738BL,0x192BB235L,0L,0L,0x192BB235L,0x0A77738BL,0x192BB235L,0L};
    uint8_t l_1303 = 0UL;
    int64_t *l_1304 = &l_1301[1][1];
    uint32_t l_1305 = 4294967295UL;
    union U1 **l_1309[4][10][6] = {{{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824}},{{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824}},{{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824}},{{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,&p_1316->g_824,(void*)0,&p_1316->g_824}}};
    VECTOR(int16_t, 16) l_1310 = (VECTOR(int16_t, 16))(0x5717L, (VECTOR(int16_t, 4))(0x5717L, (VECTOR(int16_t, 2))(0x5717L, 9L), 9L), 9L, 0x5717L, 9L, (VECTOR(int16_t, 2))(0x5717L, 9L), (VECTOR(int16_t, 2))(0x5717L, 9L), 0x5717L, 9L, 0x5717L, 9L);
    VECTOR(uint32_t, 8) l_1311 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967287UL), 4294967287UL), 4294967287UL, 0UL, 4294967287UL);
    uint16_t *l_1314 = &p_1316->g_540;
    int64_t l_1315 = 0x1D4809EE63F5C23AL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1277[i] = 5L;
    for (i = 0; i < 1; i++)
        l_1282[i] = &p_1316->g_617[0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_1301[i][j] = 0x116ACB68C10A2C67L;
    }
    l_1243 = (((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(int64_t, 8))(p_1316->g_2.xyyxxxyy)).s7400631076427603, ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 4))(p_1316->g_3.zxwz)).lo, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 2))(0x1DCEE34EL, 0x6B3E713EL)).yyyx, ((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 4))(FAKE_DIVERGE(p_1316->group_2_offset, get_group_id(2), 10), ((*l_1256) = (((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 8))(p_1316->g_4.sd228d5fe)).s27, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 16))(p_1316->g_4.sf, 0UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0xE8L, 247UL)), 0xAAL, 6UL)), (safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s(p_1316->g_4.s3, ((*l_1246) = (func_9(p_1316->g_12[2], l_14, p_1316) & (l_1243 ^ l_1243))))), l_1243)), ((VECTOR(uint8_t, 4))(p_1316->g_1247.yxxy)), ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 2))(p_1316->g_1248.wx)), ((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 4))(l_1249.yyyy)).zzxwzwww, ((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(254UL, 3UL)), ((VECTOR(uint8_t, 16))(255UL, ((p_1316->g_569.w = ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(p_1316->g_827.f0, 5)), l_1254)) | p_1316->g_384.f0)) != (*l_1246)), ((VECTOR(uint8_t, 4))(1UL)), ((VECTOR(uint8_t, 8))(0x81L)), 8UL, 0x9AL)).s39, ((VECTOR(uint8_t, 2))(1UL))))), 251UL, 0x98L)).wzzxwxyy, ((VECTOR(uint8_t, 8))(0x81L)))))))), ((VECTOR(uint8_t, 8))(0x26L))))).s33))), 0xCEL, 0xDDL, 0x02L)), ((VECTOR(uint8_t, 16))(255UL)), ((VECTOR(uint8_t, 16))(0x26L))))).s88))))).even > l_1243)), 0x293A3B33L, 6UL)).xzxwxxyx, ((VECTOR(uint32_t, 8))(0xE13F96ECL))))).s0476155270665466))).sca6a))).wwxxxxzxzyzyzyzx)).sb0, ((VECTOR(int64_t, 2))(1L))))).yxyx, (int64_t)p_1316->g_373.f0))), (int64_t)(*l_1246)))).xzzzzywyzzyyzwyz)).s45, ((VECTOR(int64_t, 2))((-7L)))))).xyxxyxyyyxxyxyyy))).s9 || 18446744073709551609UL);
    --l_1283;
    (*l_1265) = (safe_rshift_func_uint16_t_u_u(0xA026L, (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((safe_add_func_uint64_t_u_u(p_1316->g_380.f0, ((*l_1304) = (((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((VECTOR(int16_t, 2))(0x3DA8L, 0L)).odd & (&p_1316->g_535 != (void*)0)), (&p_1316->g_660[1] == l_1296[2]))), p_1316->g_678.sf)) && (p_1316->g_1248.y != (safe_add_func_int64_t_s_s(((((*l_14) = (((((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(l_1300.sef)).yxyy, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x58L, 0x78L)).xxxxxyyx)).s56)), ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x0BL, (-1L))).yxxxyyxx)).s51, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-1L), 1L)), 0L, ((&p_1316->g_660[0] != &p_1316->g_660[0]) == (*l_1269)), 0x71L, 0x3CL, l_1301[2][0], (-9L), (-1L), (*l_1276), 0x7BL, l_1302[1], l_1303, ((VECTOR(int8_t, 2))(0x33L)), 0x18L)).s90)))))).xxyx))).y == (*l_1278)) != 255UL) || 0x00D96FFB59164AB7L)) == (*l_1258)) , p_1316->g_2.y), 7UL)))) >= p_1316->g_1248.w)))) ^ p_1316->g_870.z), l_1305, 0x53808B6A84BC664BL, (-3L))).zwzzwyxz)).even, ((VECTOR(int64_t, 4))(0x3DC09866B4B34D54L))))).w, (*l_1280)))));
    (*l_1259) = (((safe_lshift_func_uint8_t_u_u((&l_1305 == (void*)0), 1)) , (!0UL)) | ((*l_1314) = ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1316->g_1308.sa, (((((void*)0 == l_1309[0][5][2]) || ((VECTOR(int16_t, 4))(l_1310.s9051)).x) >= ((+l_1311.s6) != ((*l_1257) = 2L))) , ((safe_rshift_func_uint8_t_u_u((0x70L < (*l_1260)), p_1316->g_1247.x)) || p_1316->g_510)), 65535UL, 6UL)), 65534UL, 0x30ECL, 65527UL, 0xE6E5L)).s1));
    return l_1315;
}


/* ------------------------------------------ */
/* 
 * reads : p_1316->g_13 p_1316->g_40 p_1316->l_comm_values p_1316->g_352 p_1316->g_360 p_1316->g_472 p_1316->g_577 p_1316->g_590 p_1316->g_603 p_1316->g_comm_values p_1316->g_617 p_1316->g_619 p_1316->g_659 p_1316->g_667 p_1316->g_540 p_1316->g_671 p_1316->g_645.f0 p_1316->g_569 p_1316->g_510 p_1316->g_521.f2 p_1316->g_621 p_1316->g_609 p_1316->g_674 p_1316->g_472.f3 p_1316->g_2 p_1316->g_483.f0 p_1316->g_824 p_1316->g_827.f0 p_1316->g_850 p_1316->g_472.f0 p_1316->g_870 p_1316->g_370.f1 p_1316->g_389.f2 p_1316->g_483 p_1316->g_920 p_1316->g_854
 * writes: p_1316->g_13 p_1316->g_comm_values p_1316->g_418 p_1316->g_535 p_1316->g_540 p_1316->g_391.f2 p_1316->g_603 p_1316->g_617 p_1316->g_619 p_1316->g_621 p_1316->g_519.f1 p_1316->g_323 p_1316->g_368.f1 p_1316->g_674 p_1316->g_510 p_1316->g_521.f2 p_1316->g_379.f1 p_1316->g_472.f3 p_1316->g_660 p_1316->g_483.f0 p_1316->g_828 p_1316->g_827.f0 p_1316->g_370.f1 p_1316->g_389.f2 p_1316->g_920
 */
int16_t  func_9(int8_t * p_10, int8_t * p_11, struct S4 * p_1316)
{ /* block id: 5 */
    int8_t *l_19 = &p_1316->g_13;
    int32_t l_32 = 0L;
    int32_t l_729 = 0x5F9CE718L;
    int32_t l_731 = (-1L);
    int32_t l_732 = (-8L);
    int32_t l_733 = (-3L);
    int32_t l_734 = 4L;
    int32_t l_735 = 0x2F8C6A47L;
    int32_t l_736 = 0x34827833L;
    int32_t l_737 = 0x3B145025L;
    int32_t l_738 = (-1L);
    int32_t *l_814 = &p_1316->g_621[5][2][0];
    union U1 *l_826[7] = {&p_1316->g_827,&p_1316->g_827,&p_1316->g_827,&p_1316->g_827,&p_1316->g_827,&p_1316->g_827,&p_1316->g_827};
    VECTOR(int32_t, 2) l_902 = (VECTOR(int32_t, 2))(0x006EF2D7L, 3L);
    int64_t l_903 = 0x0709FF4519BE5BA7L;
    int32_t **l_924 = (void*)0;
    int32_t *l_925[4][8] = {{&l_729,(void*)0,&p_1316->g_510,(void*)0,&l_729,&l_729,(void*)0,&p_1316->g_510},{&l_729,(void*)0,&p_1316->g_510,(void*)0,&l_729,&l_729,(void*)0,&p_1316->g_510},{&l_729,(void*)0,&p_1316->g_510,(void*)0,&l_729,&l_729,(void*)0,&p_1316->g_510},{&l_729,(void*)0,&p_1316->g_510,(void*)0,&l_729,&l_729,(void*)0,&p_1316->g_510}};
    int i, j;
    if (((safe_sub_func_uint16_t_u_u(1UL, (safe_mul_func_uint16_t_u_u((l_19 == p_11), (safe_mul_func_int8_t_s_s(((*l_19) = (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(func_26(((-1L) & func_30(l_32, p_1316)), p_1316->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1316->tid, 25))], l_32, p_1316), 5)) <= p_1316->g_352.s2), p_1316->g_569.z))), GROUP_DIVERGE(2, 1))))))) < 0xB8EFL))
    { /* block id: 336 */
        int32_t *l_697 = (void*)0;
        int32_t *l_698 = &p_1316->g_472.f3;
        int32_t *l_699 = &p_1316->g_510;
        int64_t l_718[10][10] = {{1L,0x3BE3AD129181F6C8L,0x0523B9C19EE97320L,1L,7L,0x1CFE05ED5427FFDFL,1L,0x7236E450B9B4F5A5L,0x397DBD0D44182A6CL,1L},{1L,0x3BE3AD129181F6C8L,0x0523B9C19EE97320L,1L,7L,0x1CFE05ED5427FFDFL,1L,0x7236E450B9B4F5A5L,0x397DBD0D44182A6CL,1L},{1L,0x3BE3AD129181F6C8L,0x0523B9C19EE97320L,1L,7L,0x1CFE05ED5427FFDFL,1L,0x7236E450B9B4F5A5L,0x397DBD0D44182A6CL,1L},{1L,0x3BE3AD129181F6C8L,0x0523B9C19EE97320L,1L,7L,0x1CFE05ED5427FFDFL,1L,0x7236E450B9B4F5A5L,0x397DBD0D44182A6CL,1L},{1L,0x3BE3AD129181F6C8L,0x0523B9C19EE97320L,1L,7L,0x1CFE05ED5427FFDFL,1L,0x7236E450B9B4F5A5L,0x397DBD0D44182A6CL,1L},{1L,0x3BE3AD129181F6C8L,0x0523B9C19EE97320L,1L,7L,0x1CFE05ED5427FFDFL,1L,0x7236E450B9B4F5A5L,0x397DBD0D44182A6CL,1L},{1L,0x3BE3AD129181F6C8L,0x0523B9C19EE97320L,1L,7L,0x1CFE05ED5427FFDFL,1L,0x7236E450B9B4F5A5L,0x397DBD0D44182A6CL,1L},{1L,0x3BE3AD129181F6C8L,0x0523B9C19EE97320L,1L,7L,0x1CFE05ED5427FFDFL,1L,0x7236E450B9B4F5A5L,0x397DBD0D44182A6CL,1L},{1L,0x3BE3AD129181F6C8L,0x0523B9C19EE97320L,1L,7L,0x1CFE05ED5427FFDFL,1L,0x7236E450B9B4F5A5L,0x397DBD0D44182A6CL,1L},{1L,0x3BE3AD129181F6C8L,0x0523B9C19EE97320L,1L,7L,0x1CFE05ED5427FFDFL,1L,0x7236E450B9B4F5A5L,0x397DBD0D44182A6CL,1L}};
        int32_t l_728[1];
        int32_t l_730 = 0x557BA66BL;
        int32_t **l_816[5];
        int32_t ***l_815 = &l_816[4];
        int32_t l_857 = (-1L);
        uint32_t *l_880 = &p_1316->g_881[0][3];
        uint32_t **l_879[9][8][3] = {{{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880}},{{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880}},{{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880}},{{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880}},{{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880}},{{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880}},{{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880}},{{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880}},{{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880},{&l_880,&l_880,&l_880}}};
        VECTOR(uint16_t, 4) l_892 = (VECTOR(uint16_t, 4))(0xA414L, (VECTOR(uint16_t, 2))(0xA414L, 65535UL), 65535UL);
        union U3 ***l_899 = &p_1316->g_475[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_728[i] = 0L;
        for (i = 0; i < 5; i++)
            l_816[i] = &p_1316->g_323[1];
        if (((*l_699) ^= (p_1316->g_617[0] , 0x3E129EFDL)))
        { /* block id: 338 */
            int16_t l_704 = 1L;
            int64_t *l_716 = &p_1316->g_360;
            int32_t l_719 = 0x1BBA5CC3L;
            int32_t *l_721 = (void*)0;
            int32_t *l_722 = &p_1316->g_617[0];
            int32_t *l_723 = &p_1316->g_510;
            int32_t *l_724 = &p_1316->g_510;
            int32_t *l_725 = &p_1316->g_510;
            int32_t *l_726 = &l_32;
            int32_t *l_727[4] = {&p_1316->g_472.f3,&p_1316->g_472.f3,&p_1316->g_472.f3,&p_1316->g_472.f3};
            uint16_t l_739 = 5UL;
            int i;
            for (p_1316->g_521.f2 = 0; (p_1316->g_521.f2 > 8); ++p_1316->g_521.f2)
            { /* block id: 341 */
                VECTOR(uint32_t, 8) l_717 = (VECTOR(uint32_t, 8))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 0xB5805BEBL), 0xB5805BEBL), 0xB5805BEBL, 2UL, 0xB5805BEBL);
                uint32_t *l_720 = &p_1316->g_379.f1;
                int i;
                (*l_699) = ((FAKE_DIVERGE(p_1316->group_2_offset, get_group_id(2), 10) || (safe_lshift_func_int8_t_s_s((~0x2AL), 6))) , (l_704 | ((l_32 >= l_32) , ((*l_720) = (safe_mul_func_int8_t_s_s((((-1L) <= ((VECTOR(uint32_t, 2))(1UL, 4294967295UL)).even) && ((safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_s((((((p_1316->g_619[2] , ((safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((65535UL ^ ((VECTOR(int16_t, 2))(0x0A2BL, 0x008CL)).odd) ^ (p_1316->g_621[5][2][0] >= ((void*)0 == l_716))), 1)), l_717.s5)), l_717.s1)) <= l_32)) != l_704) != l_718[4][6]) || l_32) == l_719), p_1316->g_609.y)))) & (*l_699))), 0x53L))))));
            }
            l_739++;
        }
        else
        { /* block id: 346 */
            int32_t *l_799 = &l_32;
            for (l_729 = 2; (l_729 != (-29)); --l_729)
            { /* block id: 349 */
                int32_t **l_800[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1316->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 25)), permutations[(safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(l_734, 13)), 10))][(safe_mod_func_uint32_t_u_u(p_1316->tid, 25))]));
                if ((atomic_inc(&p_1316->l_atomic_input[68]) == 5))
                { /* block id: 354 */
                    VECTOR(int32_t, 8) l_746 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x357C3F81L), 0x357C3F81L), 0x357C3F81L, 1L, 0x357C3F81L);
                    uint16_t l_769[1];
                    uint32_t l_770 = 4294967295UL;
                    VECTOR(int32_t, 2) l_771 = (VECTOR(int32_t, 2))(0x597A25FCL, 8L);
                    VECTOR(int8_t, 2) l_772 = (VECTOR(int8_t, 2))(0x5CL, 0x0BL);
                    uint32_t l_773[4];
                    int64_t l_774 = (-8L);
                    int32_t l_775[7][9] = {{0x025811DFL,(-8L),0x219E3D99L,(-1L),0L,(-1L),0x219E3D99L,(-8L),0x025811DFL},{0x025811DFL,(-8L),0x219E3D99L,(-1L),0L,(-1L),0x219E3D99L,(-8L),0x025811DFL},{0x025811DFL,(-8L),0x219E3D99L,(-1L),0L,(-1L),0x219E3D99L,(-8L),0x025811DFL},{0x025811DFL,(-8L),0x219E3D99L,(-1L),0L,(-1L),0x219E3D99L,(-8L),0x025811DFL},{0x025811DFL,(-8L),0x219E3D99L,(-1L),0L,(-1L),0x219E3D99L,(-8L),0x025811DFL},{0x025811DFL,(-8L),0x219E3D99L,(-1L),0L,(-1L),0x219E3D99L,(-8L),0x025811DFL},{0x025811DFL,(-8L),0x219E3D99L,(-1L),0L,(-1L),0x219E3D99L,(-8L),0x025811DFL}};
                    uint8_t l_776 = 0xD0L;
                    int32_t l_777 = 7L;
                    uint16_t l_778 = 0xE2C3L;
                    VECTOR(int32_t, 4) l_779 = (VECTOR(int32_t, 4))(0x1C925D11L, (VECTOR(int32_t, 2))(0x1C925D11L, 1L), 1L);
                    VECTOR(int32_t, 8) l_780 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2F78D550L), 0x2F78D550L), 0x2F78D550L, (-1L), 0x2F78D550L);
                    uint8_t l_781 = 0x37L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_769[i] = 0xB2EFL;
                    for (i = 0; i < 4; i++)
                        l_773[i] = 4294967295UL;
                    if (((VECTOR(int32_t, 4))(l_746.s1033)).w)
                    { /* block id: 355 */
                        int64_t l_747 = (-1L);
                        uint32_t l_748 = 4294967287UL;
                        int32_t *l_751 = (void*)0;
                        int32_t l_753[6][10] = {{4L,4L,0x3307C796L,0x717B3941L,0x7BED33C1L,0x717B3941L,0x3307C796L,4L,4L,0x3307C796L},{4L,4L,0x3307C796L,0x717B3941L,0x7BED33C1L,0x717B3941L,0x3307C796L,4L,4L,0x3307C796L},{4L,4L,0x3307C796L,0x717B3941L,0x7BED33C1L,0x717B3941L,0x3307C796L,4L,4L,0x3307C796L},{4L,4L,0x3307C796L,0x717B3941L,0x7BED33C1L,0x717B3941L,0x3307C796L,4L,4L,0x3307C796L},{4L,4L,0x3307C796L,0x717B3941L,0x7BED33C1L,0x717B3941L,0x3307C796L,4L,4L,0x3307C796L},{4L,4L,0x3307C796L,0x717B3941L,0x7BED33C1L,0x717B3941L,0x3307C796L,4L,4L,0x3307C796L}};
                        int32_t *l_752 = &l_753[5][0];
                        int32_t *l_754 = &l_753[5][5];
                        int16_t l_755[5] = {0x4D77L,0x4D77L,0x4D77L,0x4D77L,0x4D77L};
                        int64_t l_756 = 0x3E7841676BA5ECDCL;
                        VECTOR(int32_t, 4) l_757 = (VECTOR(int32_t, 4))(0x4003D8E4L, (VECTOR(int32_t, 2))(0x4003D8E4L, 0x3A65B605L), 0x3A65B605L);
                        int64_t l_758 = 0L;
                        int8_t l_759 = 0L;
                        int64_t l_760 = 0x3B7F3A3A0E730A49L;
                        int32_t l_761 = 0x2FA15704L;
                        int32_t *l_762 = &l_753[1][6];
                        int32_t *l_763[9][2] = {{(void*)0,&l_753[2][8]},{(void*)0,&l_753[2][8]},{(void*)0,&l_753[2][8]},{(void*)0,&l_753[2][8]},{(void*)0,&l_753[2][8]},{(void*)0,&l_753[2][8]},{(void*)0,&l_753[2][8]},{(void*)0,&l_753[2][8]},{(void*)0,&l_753[2][8]}};
                        int i, j;
                        l_748++;
                        l_754 = (l_752 = l_751);
                        l_759 ^= (l_746.s6 = ((l_758 = ((l_755[1] = ((VECTOR(uint32_t, 2))(1UL, 0xC8282727L)).lo) , (l_756 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_757.zwyz)).even)).even))) , 5L));
                        l_763[7][1] = ((l_760 = 0x375B18CC1661B82EL) , (l_762 = (l_761 , (void*)0)));
                    }
                    else
                    { /* block id: 366 */
                        uint16_t l_764 = 0x091DL;
                        VECTOR(int16_t, 2) l_765 = (VECTOR(int16_t, 2))(0L, (-4L));
                        int16_t l_766 = 0x7F40L;
                        uint32_t l_767 = 0xD186CD5AL;
                        int8_t l_768 = 0L;
                        int i;
                        l_746.s7 &= l_764;
                        l_766 = ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(l_765.xy)).yyyxyyxyyxxxyxxx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(65531UL, 1UL)))).xyyyxyxyyyyyyyyy))).s5;
                        l_768 |= (l_746.s5 |= l_767);
                    }
                    l_770 = l_769[0];
                    if ((l_781 = ((VECTOR(int32_t, 16))(4L, 0x78EC2185L, 0x42666259L, ((VECTOR(int32_t, 8))(l_771.xyyxyxyx)), (-5L), (l_775[5][5] = ((l_773[1] = ((VECTOR(int8_t, 2))(l_772.xy)).hi) , l_774)), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((l_777 = l_776) , l_778), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_779.wxxzyzwz)).s24)), 0L)))).even, ((VECTOR(int32_t, 2))(0L, (-8L))), ((VECTOR(int32_t, 2))(l_780.s65))))), 0x460FCA55L)).sb))
                    { /* block id: 377 */
                        int64_t **l_782 = (void*)0;
                        int64_t l_785 = 0x7D7669E0946B6D35L;
                        int64_t *l_784 = &l_785;
                        int64_t **l_783 = &l_784;
                        int32_t l_787[1];
                        int32_t *l_786 = &l_787[0];
                        int32_t *l_788 = (void*)0;
                        int32_t *l_789 = (void*)0;
                        int32_t *l_790 = &l_787[0];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_787[i] = (-10L);
                        l_783 = l_782;
                        l_788 = l_786;
                        l_780.s5 = (l_779.z = 6L);
                        l_790 = l_789;
                    }
                    else
                    { /* block id: 383 */
                        uint32_t l_791 = 8UL;
                        uint64_t l_792 = 0xE0BA9A06C6064E49L;
                        VECTOR(int32_t, 16) l_793 = (VECTOR(int32_t, 16))(0x64C3C997L, (VECTOR(int32_t, 4))(0x64C3C997L, (VECTOR(int32_t, 2))(0x64C3C997L, 7L), 7L), 7L, 0x64C3C997L, 7L, (VECTOR(int32_t, 2))(0x64C3C997L, 7L), (VECTOR(int32_t, 2))(0x64C3C997L, 7L), 0x64C3C997L, 7L, 0x64C3C997L, 7L);
                        uint32_t l_794[5][3][8] = {{{0x0AA781E4L,0x13F2E494L,0x8B8BCF43L,0UL,0x6BE4AA62L,2UL,0x881891A8L,0UL},{0x0AA781E4L,0x13F2E494L,0x8B8BCF43L,0UL,0x6BE4AA62L,2UL,0x881891A8L,0UL},{0x0AA781E4L,0x13F2E494L,0x8B8BCF43L,0UL,0x6BE4AA62L,2UL,0x881891A8L,0UL}},{{0x0AA781E4L,0x13F2E494L,0x8B8BCF43L,0UL,0x6BE4AA62L,2UL,0x881891A8L,0UL},{0x0AA781E4L,0x13F2E494L,0x8B8BCF43L,0UL,0x6BE4AA62L,2UL,0x881891A8L,0UL},{0x0AA781E4L,0x13F2E494L,0x8B8BCF43L,0UL,0x6BE4AA62L,2UL,0x881891A8L,0UL}},{{0x0AA781E4L,0x13F2E494L,0x8B8BCF43L,0UL,0x6BE4AA62L,2UL,0x881891A8L,0UL},{0x0AA781E4L,0x13F2E494L,0x8B8BCF43L,0UL,0x6BE4AA62L,2UL,0x881891A8L,0UL},{0x0AA781E4L,0x13F2E494L,0x8B8BCF43L,0UL,0x6BE4AA62L,2UL,0x881891A8L,0UL}},{{0x0AA781E4L,0x13F2E494L,0x8B8BCF43L,0UL,0x6BE4AA62L,2UL,0x881891A8L,0UL},{0x0AA781E4L,0x13F2E494L,0x8B8BCF43L,0UL,0x6BE4AA62L,2UL,0x881891A8L,0UL},{0x0AA781E4L,0x13F2E494L,0x8B8BCF43L,0UL,0x6BE4AA62L,2UL,0x881891A8L,0UL}},{{0x0AA781E4L,0x13F2E494L,0x8B8BCF43L,0UL,0x6BE4AA62L,2UL,0x881891A8L,0UL},{0x0AA781E4L,0x13F2E494L,0x8B8BCF43L,0UL,0x6BE4AA62L,2UL,0x881891A8L,0UL},{0x0AA781E4L,0x13F2E494L,0x8B8BCF43L,0UL,0x6BE4AA62L,2UL,0x881891A8L,0UL}}};
                        int32_t l_795 = 0L;
                        uint8_t l_796 = 0UL;
                        int i, j, k;
                        l_791 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x55819C4BL, 0x5A333769L)), 0x050FADDAL, (-8L))).y;
                        l_795 ^= (l_792 , (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_793.s2170)).wywyyxwyxwxxxzzz)).s6 , l_794[0][0][6]));
                        --l_796;
                    }
                    unsigned int result = 0;
                    result += l_746.s7;
                    result += l_746.s6;
                    result += l_746.s5;
                    result += l_746.s4;
                    result += l_746.s3;
                    result += l_746.s2;
                    result += l_746.s1;
                    result += l_746.s0;
                    int l_769_i0;
                    for (l_769_i0 = 0; l_769_i0 < 1; l_769_i0++) {
                        result += l_769[l_769_i0];
                    }
                    result += l_770;
                    result += l_771.y;
                    result += l_771.x;
                    result += l_772.y;
                    result += l_772.x;
                    int l_773_i0;
                    for (l_773_i0 = 0; l_773_i0 < 4; l_773_i0++) {
                        result += l_773[l_773_i0];
                    }
                    result += l_774;
                    int l_775_i0, l_775_i1;
                    for (l_775_i0 = 0; l_775_i0 < 7; l_775_i0++) {
                        for (l_775_i1 = 0; l_775_i1 < 9; l_775_i1++) {
                            result += l_775[l_775_i0][l_775_i1];
                        }
                    }
                    result += l_776;
                    result += l_777;
                    result += l_778;
                    result += l_779.w;
                    result += l_779.z;
                    result += l_779.y;
                    result += l_779.x;
                    result += l_780.s7;
                    result += l_780.s6;
                    result += l_780.s5;
                    result += l_780.s4;
                    result += l_780.s3;
                    result += l_780.s2;
                    result += l_780.s1;
                    result += l_780.s0;
                    result += l_781;
                    atomic_add(&p_1316->l_special_values[68], result);
                }
                else
                { /* block id: 388 */
                    (1 + 1);
                }
                p_1316->g_323[1] = l_799;
                if ((*l_799))
                    break;
            }
        }
        if (l_732)
        { /* block id: 395 */
            int32_t **l_801 = &l_699;
            VECTOR(int16_t, 2) l_808 = (VECTOR(int16_t, 2))(0x0803L, 0x1CE0L);
            VECTOR(int16_t, 8) l_809 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3A5DL), 0x3A5DL), 0x3A5DL, 1L, 0x3A5DL);
            union U1 **l_849 = &p_1316->g_824;
            int32_t l_856 = (-1L);
            int32_t l_858 = 0x724207E5L;
            int32_t l_859[3][7][8] = {{{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L}},{{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L}},{{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L},{2L,(-5L),0x3AD57F78L,(-5L),2L,0x7EEE06EEL,0x296554A0L,0x7D9E0323L}}};
            int i, j, k;
            (*l_801) = (void*)0;
            (*p_1316->g_659) = (((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 16))(l_808.xxxyxxyyyyyyxyyx)).even, ((VECTOR(int16_t, 2))(l_809.s17)).xyyyxyyx))).even)), ((VECTOR(int16_t, 2))(0x55A3L, 0x2E81L)).xyxx, ((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(0x2F5FL, (safe_rshift_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((((*l_698) = ((void*)0 == l_814)) >= 0UL) > (l_815 != (void*)0)), 0x49L)) >= (safe_add_func_int64_t_s_s(p_1316->g_674, l_732))) | (((l_736 , p_1316->g_671) | p_1316->g_609.w) | 0x2D6062F2L)), 10)), 7L, p_1316->g_472.f3, 0x69F3L, 1L, 9L, 0x1F25L)).s7171231310553310, ((VECTOR(int16_t, 16))(7L))))).sa7a1))).w, p_1316->g_621[5][2][0])) != 0x40F8L), 7)), l_809.s7)) < p_1316->g_2.x) , (void*)0);
            for (p_1316->g_483.f0 = 24; (p_1316->g_483.f0 > 17); p_1316->g_483.f0 = safe_sub_func_uint16_t_u_u(p_1316->g_483.f0, 3))
            { /* block id: 401 */
                union U1 **l_825[8][3] = {{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824},{&p_1316->g_824,&p_1316->g_824,&p_1316->g_824}};
                int32_t l_836 = 0x000A0D25L;
                int64_t l_851 = 0x3CABE9E1798C7E85L;
                uint32_t l_852 = 4UL;
                int32_t *l_855 = &l_729;
                int i, j;
                (*l_698) &= (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u((1UL ^ 1L))), l_736));
                l_826[2] = p_1316->g_824;
                if (l_729)
                { /* block id: 404 */
                    union U1 **l_846 = &l_826[2];
                    union U1 **l_848 = &l_826[3];
                    p_1316->g_828[5][0] = (void*)0;
                    for (p_1316->g_827.f0 = 0; (p_1316->g_827.f0 <= 57); ++p_1316->g_827.f0)
                    { /* block id: 408 */
                        uint64_t l_835 = 2UL;
                        union U1 ***l_845 = &l_825[5][2];
                        union U1 ***l_847[2][10][10];
                        int32_t l_853[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 10; j++)
                            {
                                for (k = 0; k < 10; k++)
                                    l_847[i][j][k] = (void*)0;
                            }
                        }
                        for (i = 0; i < 2; i++)
                            l_853[i] = (-5L);
                        l_853[1] ^= (p_1316->g_472.f3 >= ((safe_div_func_int16_t_s_s(p_1316->g_827.f0, (l_835 || l_836))) || ((safe_add_func_int32_t_s_s((l_729 = ((!p_1316->g_13) && (safe_add_func_uint64_t_u_u((l_836 > (0x54L | (p_1316->g_667.w >= ((((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 2))((-9L), (-1L))).lo, ((l_849 = (l_848 = (l_846 = ((*l_845) = (void*)0)))) != p_1316->g_850))), 1L)) || (*p_11)) , p_1316->g_603) & l_851)))), l_835)))), 0x94A131BDL)) < l_852)));
                    }
                    if (l_852)
                        break;
                }
                else
                { /* block id: 417 */
                    uint32_t l_860[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_860[i] = 4294967295UL;
                    (*l_698) ^= ((VECTOR(int32_t, 8))(p_1316->g_854.s17373740)).s5;
                    p_1316->g_323[0] = &p_1316->g_617[0];
                    l_855 = &p_1316->g_510;
                    l_860[0]--;
                }
            }
        }
        else
        { /* block id: 424 */
            int8_t l_865[5][10] = {{1L,0x77L,1L,1L,0x77L,1L,1L,0x77L,1L,1L},{1L,0x77L,1L,1L,0x77L,1L,1L,0x77L,1L,1L},{1L,0x77L,1L,1L,0x77L,1L,1L,0x77L,1L,1L},{1L,0x77L,1L,1L,0x77L,1L,1L,0x77L,1L,1L},{1L,0x77L,1L,1L,0x77L,1L,1L,0x77L,1L,1L}};
            uint16_t *l_875 = (void*)0;
            uint16_t *l_876 = &p_1316->g_540;
            uint32_t **l_883 = (void*)0;
            int32_t l_904 = (-1L);
            int32_t l_908 = 9L;
            int32_t l_913 = 1L;
            int32_t l_914 = 0x0603D080L;
            int32_t l_915 = 0x68E874EDL;
            int32_t l_917 = 3L;
            int32_t l_918 = 0x137B2626L;
            int i, j;
            l_738 = (65530UL | ((safe_add_func_uint16_t_u_u(l_865[4][6], ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 4))(p_1316->g_472.f0, ((*l_876) = (l_736 < ((safe_lshift_func_int8_t_s_u((((VECTOR(int16_t, 4))((safe_add_func_int64_t_s_s(l_735, l_735)), ((((VECTOR(uint16_t, 4))(p_1316->g_870.xxxx)).y ^ 0x4EFFL) , (FAKE_DIVERGE(p_1316->global_1_offset, get_global_id(1), 10) && l_32)), 8L, 0x49BBL)).x > ((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((p_1316->g_472 , FAKE_DIVERGE(p_1316->global_0_offset, get_global_id(0), 10)), p_1316->g_590.x)), 7L)) , l_32)), p_1316->g_590.x)) > l_865[4][6]))), 0UL, 0x2F74L)), ((VECTOR(uint16_t, 4))(0xBD5DL))))).x)) , 0L));
            for (p_1316->g_370.f1 = 0; (p_1316->g_370.f1 < 34); p_1316->g_370.f1++)
            { /* block id: 429 */
                uint32_t ***l_882[5][10] = {{&l_879[6][3][1],&l_879[6][4][1],&l_879[6][4][1],&l_879[6][3][1],&l_879[6][4][1],&l_879[6][4][1],&l_879[5][4][0],&l_879[1][1][1],&l_879[6][4][1],&l_879[6][4][1]},{&l_879[6][3][1],&l_879[6][4][1],&l_879[6][4][1],&l_879[6][3][1],&l_879[6][4][1],&l_879[6][4][1],&l_879[5][4][0],&l_879[1][1][1],&l_879[6][4][1],&l_879[6][4][1]},{&l_879[6][3][1],&l_879[6][4][1],&l_879[6][4][1],&l_879[6][3][1],&l_879[6][4][1],&l_879[6][4][1],&l_879[5][4][0],&l_879[1][1][1],&l_879[6][4][1],&l_879[6][4][1]},{&l_879[6][3][1],&l_879[6][4][1],&l_879[6][4][1],&l_879[6][3][1],&l_879[6][4][1],&l_879[6][4][1],&l_879[5][4][0],&l_879[1][1][1],&l_879[6][4][1],&l_879[6][4][1]},{&l_879[6][3][1],&l_879[6][4][1],&l_879[6][4][1],&l_879[6][3][1],&l_879[6][4][1],&l_879[6][4][1],&l_879[5][4][0],&l_879[1][1][1],&l_879[6][4][1],&l_879[6][4][1]}};
                int i, j;
                l_883 = l_879[6][4][1];
            }
            for (p_1316->g_13 = 8; (p_1316->g_13 <= 5); p_1316->g_13 = safe_sub_func_uint8_t_u_u(p_1316->g_13, 2))
            { /* block id: 434 */
                int16_t l_905 = (-1L);
                int32_t l_909 = (-1L);
                int32_t l_910 = 0x25D9D9C8L;
                int32_t l_911 = 1L;
                int32_t l_912[4][8][7] = {{{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L}},{{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L}},{{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L}},{{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L},{3L,(-10L),(-8L),(-5L),(-8L),(-10L),3L}}};
                int64_t l_919 = 6L;
                int i, j, k;
                for (p_1316->g_389.f2 = (-11); (p_1316->g_389.f2 > 29); p_1316->g_389.f2 = safe_add_func_int32_t_s_s(p_1316->g_389.f2, 4))
                { /* block id: 437 */
                    (**l_815) = &p_1316->g_510;
                }
                for (p_1316->g_483.f0 = 3; (p_1316->g_483.f0 >= 9); p_1316->g_483.f0 = safe_add_func_int16_t_s_s(p_1316->g_483.f0, 1))
                { /* block id: 442 */
                    VECTOR(uint8_t, 2) l_895 = (VECTOR(uint8_t, 2))(251UL, 255UL);
                    union U3 ***l_898 = &p_1316->g_475[1];
                    int i;
                    l_734 = (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_892.xxxxzwyx)).s43)).even, ((safe_mul_func_uint8_t_u_u((p_1316->g_483 , ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 8))(l_895.xyxyxxyx)).s20))).odd), (safe_add_func_uint8_t_u_u(l_733, l_732)))) , (l_731 != ((*l_699) = (l_898 != l_899))))));
                }
                for (l_32 = 0; (l_32 >= (-29)); --l_32)
                { /* block id: 448 */
                    int8_t l_906 = (-1L);
                    int32_t l_907[9][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
                    int i, j;
                    (*l_699) ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_902.xyxxxxxyyxyxxyyx)).odd)).s1;
                    if (l_903)
                        break;
                    --p_1316->g_920;
                }
            }
        }
    }
    else
    { /* block id: 455 */
        int32_t l_923 = 0x1422DDC7L;
        return l_923;
    }
    l_925[2][6] = &l_735;
    if ((atomic_inc(&p_1316->l_atomic_input[12]) == 8))
    { /* block id: 460 */
        uint16_t l_926 = 7UL;
        int32_t l_927 = 0x2B49F2BDL;
        int32_t l_928 = 0x24C50157L;
        int32_t l_1068 = 0x31A3E9DBL;
        if ((l_928 |= ((l_926 = (-4L)) , l_927)))
        { /* block id: 463 */
            int32_t l_929 = 0x0091BCA6L;
            VECTOR(int32_t, 16) l_934 = (VECTOR(int32_t, 16))(0x0A8BF654L, (VECTOR(int32_t, 4))(0x0A8BF654L, (VECTOR(int32_t, 2))(0x0A8BF654L, 0x1046F9AFL), 0x1046F9AFL), 0x1046F9AFL, 0x0A8BF654L, 0x1046F9AFL, (VECTOR(int32_t, 2))(0x0A8BF654L, 0x1046F9AFL), (VECTOR(int32_t, 2))(0x0A8BF654L, 0x1046F9AFL), 0x0A8BF654L, 0x1046F9AFL, 0x0A8BF654L, 0x1046F9AFL);
            VECTOR(int32_t, 16) l_935 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x1F7D7564L), 0x1F7D7564L), 0x1F7D7564L, (-10L), 0x1F7D7564L, (VECTOR(int32_t, 2))((-10L), 0x1F7D7564L), (VECTOR(int32_t, 2))((-10L), 0x1F7D7564L), (-10L), 0x1F7D7564L, (-10L), 0x1F7D7564L);
            VECTOR(int32_t, 4) l_936 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 1L), 1L);
            int32_t *l_962[9][10] = {{(void*)0,(void*)0,(void*)0,&l_929,(void*)0,&l_929,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_929,(void*)0,&l_929,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_929,(void*)0,&l_929,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_929,(void*)0,&l_929,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_929,(void*)0,&l_929,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_929,(void*)0,&l_929,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_929,(void*)0,&l_929,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_929,(void*)0,&l_929,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_929,(void*)0,&l_929,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t *l_963 = &l_929;
            int i, j;
            for (l_929 = (-2); (l_929 >= (-25)); l_929--)
            { /* block id: 466 */
                int32_t l_932 = 0x66C78A10L;
                uint8_t l_933[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                int i;
                l_933[3] = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x73B8B6BAL, l_932, (-1L), 0x3D2E21F0L)))))))))).z;
            }
            l_927 = ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(l_934.s6d0e0acc)), ((VECTOR(int32_t, 4))(l_935.sda0f)).xxzzxxyy))).s0;
            if (((VECTOR(int32_t, 2))(l_936.zy)).even)
            { /* block id: 470 */
                uint16_t l_937 = 0xF049L;
                int32_t l_939 = 0x048E4D3FL;
                int32_t *l_938 = &l_939;
                int32_t *l_940 = &l_939;
                l_937 |= 0x0452C212L;
                l_940 = l_938;
            }
            else
            { /* block id: 473 */
                VECTOR(uint64_t, 2) l_941 = (VECTOR(uint64_t, 2))(0UL, 8UL);
                int32_t l_942 = 3L;
                union U2 l_958 = {0x749EDBF2L};
                union U2 l_959 = {0xADD338F5L};
                int32_t *l_960 = (void*)0;
                int32_t *l_961 = &l_942;
                int i;
                l_942 &= l_941.y;
                for (l_942 = 0; (l_942 != (-22)); l_942 = safe_sub_func_uint64_t_u_u(l_942, 2))
                { /* block id: 477 */
                    int64_t l_945 = 0x67E4D8E69F54F712L;
                    uint32_t l_946 = 0x401D6358L;
                    union U2 l_950 = {0UL};
                    union U2 *l_949 = &l_950;
                    uint64_t l_951 = 0x7B2F33D6DE9A72A6L;
                    ++l_946;
                    l_949 = l_949;
                    l_927 |= l_951;
                    for (l_951 = 0; (l_951 != 27); ++l_951)
                    { /* block id: 483 */
                        uint32_t l_954 = 0x82356D5FL;
                        VECTOR(int32_t, 2) l_955 = (VECTOR(int32_t, 2))(0x1D6740D4L, 7L);
                        int64_t l_956 = 0x330C62AFC20FF7AFL;
                        uint8_t l_957 = 0x14L;
                        int i;
                        l_954 = 0x5AC7F29DL;
                        l_934.s4 |= ((VECTOR(int32_t, 8))(l_955.yyyxyxxx)).s3;
                        l_936.w &= l_956;
                        l_927 |= (l_936.x ^= l_957);
                    }
                }
                l_961 = ((l_959 = (l_958 = l_958)) , l_960);
            }
            l_963 = l_962[3][6];
        }
        else
        { /* block id: 496 */
            int32_t l_964[6][7] = {{3L,(-10L),3L,3L,(-10L),3L,3L},{3L,(-10L),3L,3L,(-10L),3L,3L},{3L,(-10L),3L,3L,(-10L),3L,3L},{3L,(-10L),3L,3L,(-10L),3L,3L},{3L,(-10L),3L,3L,(-10L),3L,3L},{3L,(-10L),3L,3L,(-10L),3L,3L}};
            int64_t l_1064 = (-1L);
            union U2 l_1065 = {0x373F4FDBL};
            int64_t l_1066 = (-1L);
            int8_t l_1067 = (-4L);
            int i, j;
            for (l_964[3][1] = 0; (l_964[3][1] < (-11)); l_964[3][1] = safe_sub_func_uint32_t_u_u(l_964[3][1], 7))
            { /* block id: 499 */
                int32_t l_967 = 0x65B4D02EL;
                uint8_t l_984 = 0UL;
                VECTOR(int64_t, 2) l_985 = (VECTOR(int64_t, 2))(0x5F1C31F8600084B3L, 0x3849EAB29D179B35L);
                VECTOR(int64_t, 2) l_986 = (VECTOR(int64_t, 2))(0x0EF724001D0CC854L, 0x524F727BC549C177L);
                int32_t l_987[3];
                VECTOR(int64_t, 4) l_988 = (VECTOR(int64_t, 4))(0x53D1CE70CA515CDAL, (VECTOR(int64_t, 2))(0x53D1CE70CA515CDAL, 1L), 1L);
                VECTOR(int64_t, 16) l_989 = (VECTOR(int64_t, 16))(0x7A8166AE51116DE7L, (VECTOR(int64_t, 4))(0x7A8166AE51116DE7L, (VECTOR(int64_t, 2))(0x7A8166AE51116DE7L, 0x4E9C3A74C45C4F91L), 0x4E9C3A74C45C4F91L), 0x4E9C3A74C45C4F91L, 0x7A8166AE51116DE7L, 0x4E9C3A74C45C4F91L, (VECTOR(int64_t, 2))(0x7A8166AE51116DE7L, 0x4E9C3A74C45C4F91L), (VECTOR(int64_t, 2))(0x7A8166AE51116DE7L, 0x4E9C3A74C45C4F91L), 0x7A8166AE51116DE7L, 0x4E9C3A74C45C4F91L, 0x7A8166AE51116DE7L, 0x4E9C3A74C45C4F91L);
                VECTOR(int64_t, 2) l_990 = (VECTOR(int64_t, 2))(0x0EF951E14E1E8AB5L, 0x7BED0B99C60464A9L);
                uint32_t l_991 = 7UL;
                VECTOR(int64_t, 4) l_992 = (VECTOR(int64_t, 4))(0x672361AD01381599L, (VECTOR(int64_t, 2))(0x672361AD01381599L, 0x19C936D9848F10CBL), 0x19C936D9848F10CBL);
                int32_t l_993 = 0x3E8056CFL;
                VECTOR(int32_t, 4) l_994 = (VECTOR(int32_t, 4))(0x625B013CL, (VECTOR(int32_t, 2))(0x625B013CL, 0x0AD33255L), 0x0AD33255L);
                int32_t l_995 = 0x3D3D3E70L;
                VECTOR(int64_t, 8) l_996 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 7L), 7L), 7L, 0L, 7L);
                uint32_t l_997 = 0UL;
                VECTOR(int32_t, 2) l_998 = (VECTOR(int32_t, 2))(0x27AF1691L, 0x1B038FFFL);
                int8_t l_999 = 0x63L;
                uint16_t l_1000[9] = {0x3481L,0UL,0x3481L,0x3481L,0UL,0x3481L,0x3481L,0UL,0x3481L};
                uint8_t l_1001 = 2UL;
                uint8_t l_1002 = 0xBFL;
                uint32_t l_1003 = 0UL;
                uint8_t l_1004 = 249UL;
                int32_t l_1005 = (-1L);
                int i;
                for (i = 0; i < 3; i++)
                    l_987[i] = (-5L);
                for (l_967 = (-14); (l_967 >= 18); ++l_967)
                { /* block id: 502 */
                    uint16_t l_970 = 0UL;
                    if ((l_927 &= l_970))
                    { /* block id: 504 */
                        uint32_t l_971[9] = {0xA31F109BL,4294967295UL,0xA31F109BL,0xA31F109BL,4294967295UL,0xA31F109BL,0xA31F109BL,4294967295UL,0xA31F109BL};
                        int i;
                        l_971[8]++;
                    }
                    else
                    { /* block id: 506 */
                        VECTOR(int32_t, 2) l_974 = (VECTOR(int32_t, 2))(0x26FCC03EL, 0x1065C9AAL);
                        int64_t l_975[1][4] = {{0x0B3E52F6C07C5C79L,0x0B3E52F6C07C5C79L,0x0B3E52F6C07C5C79L,0x0B3E52F6C07C5C79L}};
                        int8_t l_976 = 0L;
                        int32_t l_977 = (-1L);
                        int32_t l_978 = 0x57AE1E37L;
                        uint16_t l_979 = 1UL;
                        uint32_t l_982 = 1UL;
                        union U0 *l_983 = (void*)0;
                        int i, j;
                        l_975[0][0] &= l_974.x;
                        --l_979;
                        l_927 = l_982;
                        l_983 = (void*)0;
                    }
                }
                l_967 = (l_927 = l_984);
                l_927 = (((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 4))(l_985.xxxx)), ((VECTOR(int64_t, 8))(l_986.xxxyyxyx)).lo))).zxyxwzxwyywyxxxx)).sb, 0x42304A68D95C0794L, 0x1424561D83EB7ECEL, ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(5L, 0x0223242E30967CFFL)).yyxxyxxyxyyxxyyx)).s79, ((VECTOR(int64_t, 4))(l_987[0], ((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 4))(l_988.xxwy)).wyxxxwwzwxzwxyxx, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x6FF942F7ABBE9B31L, 1L)), (-10L), 4L)).wwxzzxyywwzzywyz))).s30)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_989.s494fca3c8c21a6c6)))).s77))), (-1L))).hi, ((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 16))(l_990.yxyyxxxxxxyyxxxy)), (int64_t)l_991, (int64_t)((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_992.wx)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))((-1L), 0x4AF320983497F898L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(0x408CAC5B54A9507DL, ((VECTOR(int64_t, 4))(l_993, (((VECTOR(int32_t, 4))(l_994.xzxw)).z , l_995), (-1L), 2L)), ((VECTOR(int64_t, 2))(l_996.s41)), 0L)).s71)), 0x0D8F490CAB8846D7L, 0x632A40C09EBA67D0L, 0L, 0x33D61B763A1AAF96L)).lo)), ((VECTOR(int64_t, 2))((-1L), 0x3E0BF895825340D4L)), l_997, 7L, (((VECTOR(int32_t, 8))(l_998.xxxxyyyx)).s3 , ((l_928 = l_999) , l_1000[5])), l_1001, 4L, 0x71DE8F22C3282123L, (-1L), 0x308CF45CD44C6C72L)).s1))).sd5))), 6L, l_1002, 0x50C70FB61EDD26E9L, (-1L), l_1003, l_1004, 0x596AFCF1058AFE7DL, ((VECTOR(int64_t, 4))((-1L))))).s42, ((VECTOR(int64_t, 2))(0x2C27C21143917A51L)), ((VECTOR(int64_t, 2))((-9L)))))).hi , l_1005);
            }
            if ((l_927 = 0x4DD55AE8L))
            { /* block id: 519 */
                int8_t l_1006 = 0x17L;
                union U0 l_1007[4][9] = {{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}}};
                union U0 l_1008 = {1L};
                union U2 l_1009[10] = {{0UL},{4294967295UL},{0UL},{0UL},{4294967295UL},{0UL},{0UL},{4294967295UL},{0UL},{0UL}};
                union U2 l_1010 = {0x0022BEADL};
                VECTOR(uint64_t, 2) l_1011 = (VECTOR(uint64_t, 2))(0xDE609671E5BEB4A2L, 18446744073709551615UL);
                union U0 l_1012[7][10][3] = {{{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}}},{{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}}},{{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}}},{{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}}},{{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}}},{{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}}},{{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}},{{-1L},{0x20BBL},{0x5B98L}}}};
                union U0 l_1013 = {1L};
                uint16_t l_1014[10][6] = {{0x2646L,65535UL,0UL,65535UL,0x2646L,0x2646L},{0x2646L,65535UL,0UL,65535UL,0x2646L,0x2646L},{0x2646L,65535UL,0UL,65535UL,0x2646L,0x2646L},{0x2646L,65535UL,0UL,65535UL,0x2646L,0x2646L},{0x2646L,65535UL,0UL,65535UL,0x2646L,0x2646L},{0x2646L,65535UL,0UL,65535UL,0x2646L,0x2646L},{0x2646L,65535UL,0UL,65535UL,0x2646L,0x2646L},{0x2646L,65535UL,0UL,65535UL,0x2646L,0x2646L},{0x2646L,65535UL,0UL,65535UL,0x2646L,0x2646L},{0x2646L,65535UL,0UL,65535UL,0x2646L,0x2646L}};
                VECTOR(uint64_t, 16) l_1015 = (VECTOR(uint64_t, 16))(0x21BFD1131E5BBB35L, (VECTOR(uint64_t, 4))(0x21BFD1131E5BBB35L, (VECTOR(uint64_t, 2))(0x21BFD1131E5BBB35L, 0x3D9F7EE905CED238L), 0x3D9F7EE905CED238L), 0x3D9F7EE905CED238L, 0x21BFD1131E5BBB35L, 0x3D9F7EE905CED238L, (VECTOR(uint64_t, 2))(0x21BFD1131E5BBB35L, 0x3D9F7EE905CED238L), (VECTOR(uint64_t, 2))(0x21BFD1131E5BBB35L, 0x3D9F7EE905CED238L), 0x21BFD1131E5BBB35L, 0x3D9F7EE905CED238L, 0x21BFD1131E5BBB35L, 0x3D9F7EE905CED238L);
                uint32_t l_1016 = 0UL;
                int64_t l_1017 = 1L;
                int16_t l_1018[10][7][3] = {{{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)}},{{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)}},{{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)}},{{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)}},{{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)}},{{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)}},{{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)}},{{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)}},{{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)}},{{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)},{5L,8L,(-6L)}}};
                int8_t l_1019 = 0x26L;
                VECTOR(int32_t, 8) l_1020 = (VECTOR(int32_t, 8))(0x181291CDL, (VECTOR(int32_t, 4))(0x181291CDL, (VECTOR(int32_t, 2))(0x181291CDL, 0x42115875L), 0x42115875L), 0x42115875L, 0x181291CDL, 0x42115875L);
                VECTOR(int16_t, 16) l_1021 = (VECTOR(int16_t, 16))(0x1902L, (VECTOR(int16_t, 4))(0x1902L, (VECTOR(int16_t, 2))(0x1902L, 3L), 3L), 3L, 0x1902L, 3L, (VECTOR(int16_t, 2))(0x1902L, 3L), (VECTOR(int16_t, 2))(0x1902L, 3L), 0x1902L, 3L, 0x1902L, 3L);
                VECTOR(int16_t, 16) l_1022 = (VECTOR(int16_t, 16))(0x5F25L, (VECTOR(int16_t, 4))(0x5F25L, (VECTOR(int16_t, 2))(0x5F25L, 0x7726L), 0x7726L), 0x7726L, 0x5F25L, 0x7726L, (VECTOR(int16_t, 2))(0x5F25L, 0x7726L), (VECTOR(int16_t, 2))(0x5F25L, 0x7726L), 0x5F25L, 0x7726L, 0x5F25L, 0x7726L);
                VECTOR(uint16_t, 4) l_1023 = (VECTOR(uint16_t, 4))(0xA9CAL, (VECTOR(uint16_t, 2))(0xA9CAL, 0x07CEL), 0x07CEL);
                VECTOR(int32_t, 8) l_1024 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                VECTOR(int32_t, 8) l_1025 = (VECTOR(int32_t, 8))(0x6DED6002L, (VECTOR(int32_t, 4))(0x6DED6002L, (VECTOR(int32_t, 2))(0x6DED6002L, 0x71295676L), 0x71295676L), 0x71295676L, 0x6DED6002L, 0x71295676L);
                VECTOR(int32_t, 8) l_1026 = (VECTOR(int32_t, 8))(0x5DE84314L, (VECTOR(int32_t, 4))(0x5DE84314L, (VECTOR(int32_t, 2))(0x5DE84314L, 2L), 2L), 2L, 0x5DE84314L, 2L);
                VECTOR(int32_t, 2) l_1027 = (VECTOR(int32_t, 2))((-9L), 9L);
                VECTOR(int32_t, 2) l_1028 = (VECTOR(int32_t, 2))(0x6DE3FCCBL, 0x515F6CB6L);
                VECTOR(int32_t, 16) l_1029 = (VECTOR(int32_t, 16))(0x1A13719FL, (VECTOR(int32_t, 4))(0x1A13719FL, (VECTOR(int32_t, 2))(0x1A13719FL, 0x3BE78818L), 0x3BE78818L), 0x3BE78818L, 0x1A13719FL, 0x3BE78818L, (VECTOR(int32_t, 2))(0x1A13719FL, 0x3BE78818L), (VECTOR(int32_t, 2))(0x1A13719FL, 0x3BE78818L), 0x1A13719FL, 0x3BE78818L, 0x1A13719FL, 0x3BE78818L);
                VECTOR(int32_t, 4) l_1030 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7A613FC8L), 0x7A613FC8L);
                int32_t l_1031 = 0x01E64A69L;
                union U0 l_1032 = {6L};
                int32_t *l_1033 = (void*)0;
                int32_t *l_1034 = &l_1012[6][2][2].f3;
                uint32_t l_1035[9] = {0x57EEB3A0L,0xA5D2279DL,0x57EEB3A0L,0x57EEB3A0L,0xA5D2279DL,0x57EEB3A0L,0x57EEB3A0L,0xA5D2279DL,0x57EEB3A0L};
                VECTOR(uint64_t, 16) l_1054 = (VECTOR(uint64_t, 16))(0x1ADBC878ED93EEFEL, (VECTOR(uint64_t, 4))(0x1ADBC878ED93EEFEL, (VECTOR(uint64_t, 2))(0x1ADBC878ED93EEFEL, 0x652829A44E9AF5A5L), 0x652829A44E9AF5A5L), 0x652829A44E9AF5A5L, 0x1ADBC878ED93EEFEL, 0x652829A44E9AF5A5L, (VECTOR(uint64_t, 2))(0x1ADBC878ED93EEFEL, 0x652829A44E9AF5A5L), (VECTOR(uint64_t, 2))(0x1ADBC878ED93EEFEL, 0x652829A44E9AF5A5L), 0x1ADBC878ED93EEFEL, 0x652829A44E9AF5A5L, 0x1ADBC878ED93EEFEL, 0x652829A44E9AF5A5L);
                uint32_t l_1055 = 4294967295UL;
                int32_t l_1056 = (-1L);
                int i, j, k;
                l_1034 = ((((l_1006 , (l_1008 = l_1007[0][7])) , (l_1010 = l_1009[6])) , (((VECTOR(uint64_t, 4))(l_1011.xxyy)).y , (((l_1013 = l_1012[6][2][2]) , 0x16FB4B1BL) , ((FAKE_DIVERGE(p_1316->global_0_offset, get_global_id(0), 10) , (((VECTOR(int32_t, 8))((-8L), (l_1018[3][0][2] = ((l_1016 = (l_1011.y &= (l_1014[2][2] , ((VECTOR(uint64_t, 4))(l_1015.s2819)).y))) , l_1017)), l_1019, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_1020.s76113057)).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0x7228991CL, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(l_1021.sc7025bea7fdf9d48)).sd9, ((VECTOR(int16_t, 16))(l_1022.scfcdf6cf4d36d274)).s5d))), ((VECTOR(uint16_t, 16))(l_1023.zzyzzwxxxwwzyyyy)).s9b))), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(l_1024.s0313)).hi, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_1025.s65)).xxxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1026.s34)))).yyyy, ((VECTOR(int32_t, 16))(l_1027.xxyyxyxxyxxxxxxx)).sc825))).hi))), ((VECTOR(int32_t, 2))(l_1028.xx)), 0x6052AB53L)))).odd)).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_1029.sc696bfe160b29234)).s47)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1030.xw)).yyyx)).even))).yyxxxyxyyxyyxxxx, ((VECTOR(int32_t, 4))(0x5E56B917L, 1L, (-1L), 0x42FBDA77L)).yzxzywzxywzyywxy))).s026c)).even))))).hi, l_1031, 0x6B954DD9L, (-1L), (-1L), ((VECTOR(int32_t, 4))((-10L))), 4L, 0x6F30AD91L, ((VECTOR(int32_t, 4))(0x5F2A4742L)), 0x3B3A19AAL)).s7ad4, ((VECTOR(int32_t, 4))((-1L)))))), 0L)).s4 , 0L)) , l_1032)))) , l_1033);
                l_964[3][1] = l_1035[2];
                for (l_1008.f0 = 0; (l_1008.f0 != 10); l_1008.f0++)
                { /* block id: 530 */
                    uint32_t l_1038 = 4UL;
                    int64_t l_1039 = 0x603750DD9DD54C9FL;
                    int32_t *l_1040 = (void*)0;
                    uint32_t l_1041 = 1UL;
                    l_1033 = (l_1038 , (l_1040 = (l_1039 , l_1040)));
                    if (l_1041)
                    { /* block id: 533 */
                        uint32_t l_1042 = 1UL;
                        int16_t l_1043 = (-1L);
                        uint8_t l_1044 = 246UL;
                        l_1044 = (l_1043 &= l_1042);
                    }
                    else
                    { /* block id: 536 */
                        union U1 l_1046 = {0xDC3CD6A0L};/* VOLATILE GLOBAL l_1046 */
                        union U1 *l_1045 = &l_1046;
                        union U1 l_1048 = {0x12750771L};/* VOLATILE GLOBAL l_1048 */
                        union U1 *l_1047 = &l_1048;
                        int32_t l_1050 = 0x334BA233L;
                        int32_t *l_1049[6] = {&l_1050,&l_1050,&l_1050,&l_1050,&l_1050,&l_1050};
                        uint8_t l_1051 = 255UL;
                        int i;
                        l_1047 = l_1045;
                        l_1034 = l_1049[4];
                        (*l_1034) = l_1051;
                    }
                    for (l_1041 = 1; (l_1041 <= 57); ++l_1041)
                    { /* block id: 543 */
                        l_1032.f3 = (-1L);
                    }
                }
                l_1056 ^= ((VECTOR(int32_t, 8))((l_964[3][5] ^= 0x7037057DL), (l_927 = l_1054.s6), (l_964[3][1] = l_1055), 0x2274EDFEL, (-4L), 0x001A6175L, (-10L), 8L)).s2;
            }
            else
            { /* block id: 551 */
                union U1 l_1058 = {6UL};/* VOLATILE GLOBAL l_1058 */
                union U1 *l_1057 = &l_1058;
                union U1 l_1060 = {4294967294UL};/* VOLATILE GLOBAL l_1060 */
                union U1 *l_1059 = &l_1060;
                union U1 *l_1061 = (void*)0;
                int8_t l_1062[10] = {9L,0x0AL,9L,9L,0x0AL,9L,9L,0x0AL,9L,9L};
                int32_t l_1063[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1063[i] = (-5L);
                l_1061 = (l_1059 = l_1057);
                l_1063[0] = l_1062[8];
            }
            l_1067 = (l_1066 = (l_927 = (((l_1064 ^= 6L) , l_1065) , 1L)));
        }
        if (l_1068)
        { /* block id: 561 */
            int32_t l_1069 = 0L;
            int32_t *l_1147 = &l_1069;
            for (l_1069 = 0; (l_1069 <= 17); l_1069 = safe_add_func_int8_t_s_s(l_1069, 5))
            { /* block id: 564 */
                VECTOR(int32_t, 2) l_1072 = (VECTOR(int32_t, 2))((-1L), 0L);
                uint64_t l_1073[5][8][6] = {{{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL}},{{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL}},{{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL}},{{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL}},{{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL},{1UL,0x7474879786E082ABL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x7474879786E082ABL}}};
                int i, j, k;
                l_927 &= ((VECTOR(int32_t, 16))(l_1072.yxyyyxyyyxyxyxxx)).s4;
                if (l_1073[0][5][2])
                { /* block id: 566 */
                    int32_t l_1074 = 0x34D6316BL;
                    VECTOR(uint16_t, 8) l_1081 = (VECTOR(uint16_t, 8))(0x4E27L, (VECTOR(uint16_t, 4))(0x4E27L, (VECTOR(uint16_t, 2))(0x4E27L, 65530UL), 65530UL), 65530UL, 0x4E27L, 65530UL);
                    int32_t l_1082 = 0x22A722C6L;
                    VECTOR(uint8_t, 4) l_1083 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 251UL), 251UL);
                    VECTOR(uint8_t, 4) l_1084 = (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0xC1L), 0xC1L);
                    VECTOR(uint8_t, 4) l_1085 = (VECTOR(uint8_t, 4))(0xE5L, (VECTOR(uint8_t, 2))(0xE5L, 0x04L), 0x04L);
                    int8_t l_1086 = 0x16L;
                    int16_t l_1087 = 9L;
                    VECTOR(uint16_t, 8) l_1090 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
                    VECTOR(uint16_t, 8) l_1091 = (VECTOR(uint16_t, 8))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 65535UL), 65535UL), 65535UL, 3UL, 65535UL);
                    uint8_t l_1092 = 1UL;
                    uint32_t l_1093 = 0UL;
                    uint8_t l_1094 = 0UL;
                    VECTOR(uint16_t, 16) l_1095 = (VECTOR(uint16_t, 16))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 1UL), 1UL), 1UL, 5UL, 1UL, (VECTOR(uint16_t, 2))(5UL, 1UL), (VECTOR(uint16_t, 2))(5UL, 1UL), 5UL, 1UL, 5UL, 1UL);
                    VECTOR(uint16_t, 16) l_1096 = (VECTOR(uint16_t, 16))(0x6B74L, (VECTOR(uint16_t, 4))(0x6B74L, (VECTOR(uint16_t, 2))(0x6B74L, 1UL), 1UL), 1UL, 0x6B74L, 1UL, (VECTOR(uint16_t, 2))(0x6B74L, 1UL), (VECTOR(uint16_t, 2))(0x6B74L, 1UL), 0x6B74L, 1UL, 0x6B74L, 1UL);
                    VECTOR(uint8_t, 4) l_1097 = (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0xD8L), 0xD8L);
                    int16_t l_1098[4][7][4] = {{{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL}},{{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL}},{{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL}},{{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL},{0x206DL,0x05CDL,1L,0x05CDL}}};
                    VECTOR(uint8_t, 16) l_1099 = (VECTOR(uint8_t, 16))(0x85L, (VECTOR(uint8_t, 4))(0x85L, (VECTOR(uint8_t, 2))(0x85L, 6UL), 6UL), 6UL, 0x85L, 6UL, (VECTOR(uint8_t, 2))(0x85L, 6UL), (VECTOR(uint8_t, 2))(0x85L, 6UL), 0x85L, 6UL, 0x85L, 6UL);
                    VECTOR(uint8_t, 4) l_1100 = (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 1UL), 1UL);
                    uint8_t l_1101 = 0x99L;
                    VECTOR(uint8_t, 8) l_1102 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL);
                    VECTOR(uint16_t, 8) l_1103 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
                    VECTOR(uint8_t, 16) l_1106 = (VECTOR(uint8_t, 16))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 255UL), 255UL), 255UL, 248UL, 255UL, (VECTOR(uint8_t, 2))(248UL, 255UL), (VECTOR(uint8_t, 2))(248UL, 255UL), 248UL, 255UL, 248UL, 255UL);
                    VECTOR(uint16_t, 2) l_1107 = (VECTOR(uint16_t, 2))(0x4B03L, 1UL);
                    uint8_t l_1108[4][4] = {{251UL,251UL,251UL,251UL},{251UL,251UL,251UL,251UL},{251UL,251UL,251UL,251UL},{251UL,251UL,251UL,251UL}};
                    int32_t l_1109 = 1L;
                    uint8_t l_1110 = 0x49L;
                    uint32_t l_1111[1][4][4] = {{{0x6712B135L,0x63AA62E1L,0x6712B135L,0x6712B135L},{0x6712B135L,0x63AA62E1L,0x6712B135L,0x6712B135L},{0x6712B135L,0x63AA62E1L,0x6712B135L,0x6712B135L},{0x6712B135L,0x63AA62E1L,0x6712B135L,0x6712B135L}}};
                    int32_t l_1112 = (-6L);
                    int i, j, k;
                    for (l_1074 = 21; (l_1074 > (-11)); l_1074 = safe_sub_func_uint8_t_u_u(l_1074, 5))
                    { /* block id: 569 */
                        int64_t l_1077 = 1L;
                        int32_t l_1079 = 0x5FBC5BEAL;
                        int32_t *l_1078 = &l_1079;
                        int32_t *l_1080 = (void*)0;
                        l_1080 = (l_1077 , l_1078);
                    }
                    l_1074 |= (l_927 |= ((l_1112 = (((VECTOR(uint16_t, 16))(l_1081.s3670162271053136)).se , ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 8))(1UL, 249UL, l_1082, ((VECTOR(uint8_t, 2))(0x0CL, 252UL)), 255UL, 0x84L, 0UL)), ((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_1083.xzyz)).zxywyzyx)), ((VECTOR(uint8_t, 16))(l_1084.xyyxzxxwyzwxzwxw)).odd))))))))))))).s4674622635204707, ((VECTOR(uint8_t, 2))(l_1085.ww)).xyxxxxyxyyyxyyyy))).lo))), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(0x885EL, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0xEAF3L, 2UL)))), (uint16_t)l_1086, (uint16_t)(l_1108[2][1] |= ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 4))((l_1087 , GROUP_DIVERGE(2, 1)), (--l_926), 0x733BL, 0xEB12L)).even, ((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 8))(5UL, GROUP_DIVERGE(0, 1), 1UL, ((VECTOR(uint16_t, 2))(l_1090.s15)), ((VECTOR(uint16_t, 2))(l_1091.s24)), 1UL)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(2UL, 0x9E31L, 65533UL, 0xD4DDL, l_1092, (l_1093 , (l_926 = l_1094)), 0x6996L, 0x64C0L)).s7506050124145625)).odd, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 8))(l_1095.sc32ca7a8)).s2400472250747702, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_1096.sbcb7)).zzxyzyyy)).s0633105274137252))).sc54a, ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 2))(l_1097.zy)).xxxy, (uint8_t)((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(l_1098[1][3][3], ((VECTOR(uint8_t, 4))(l_1099.s6be5)), ((VECTOR(uint8_t, 2))(l_1100.yx)), 248UL)).s77, (uint8_t)l_1101))).yxxyxxxy)).s2))), ((VECTOR(uint8_t, 16))(l_1102.s2275742531204156)).saa4c))), ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(l_1103.s2703)).even, (uint16_t)(++l_926)))).xxxy))).hi, (uint16_t)GROUP_DIVERGE(1, 1)))), ((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 2))(247UL, 0UL)).xxyy, ((VECTOR(uint8_t, 8))(l_1106.s8a60cad4)).lo))).hi)), 0x1C78L, 0x18F9L)).zwyzzwzwwxyxxzwy))).s94))).xxxxyxyx))).s05, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_1107.xyxxyxxy)).s36)))).yxyyyxxy)).s00))), (uint16_t)((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 2))(0xFFAEL, 0x44FDL)).yxxyxxxyyxyxyxyx))).sa))).xxxy)).y)))), l_1109, ((VECTOR(uint16_t, 2))(0xBEA1L)), 0x5866L, 0UL)), l_1110, l_1111[0][1][3], 0x90E9L, ((VECTOR(uint16_t, 4))(0xB681L)), 0UL)).s4d, ((VECTOR(uint16_t, 2))(0x9086L)), ((VECTOR(uint16_t, 2))(0x0E55L))))), 0UL, ((VECTOR(uint16_t, 2))(0x2D8AL)), ((VECTOR(uint16_t, 2))(9UL)), 8UL)).s7742633267430116)).lo))).s6672023324670722)).s3)) , 0x7A02C287L));
                }
                else
                { /* block id: 579 */
                    uint64_t l_1113 = 18446744073709551614UL;
                    uint16_t l_1133 = 0xD30AL;
                    if (l_1113)
                    { /* block id: 580 */
                        uint64_t l_1114 = 0UL;
                        int8_t *l_1118 = (void*)0;
                        int8_t **l_1117 = &l_1118;
                        int8_t **l_1119 = &l_1118;
                        int32_t l_1120[10][5][2] = {{{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L}},{{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L}},{{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L}},{{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L}},{{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L}},{{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L}},{{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L}},{{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L}},{{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L}},{{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L},{(-3L),0x09148DB9L}}};
                        union U2 l_1122 = {4294967295UL};
                        union U2 *l_1121[3];
                        union U2 *l_1123 = &l_1122;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_1121[i] = &l_1122;
                        l_1114--;
                        l_1119 = l_1117;
                        l_1072.y = 0x38857832L;
                        l_1121[2] = (l_1123 = ((l_1120[2][0][1] , 0L) , l_1121[2]));
                    }
                    else
                    { /* block id: 586 */
                        uint64_t l_1124 = 1UL;
                        int32_t l_1126 = (-7L);
                        int32_t *l_1125 = &l_1126;
                        int32_t *l_1127 = (void*)0;
                        VECTOR(int32_t, 4) l_1128 = (VECTOR(int32_t, 4))(0x0B739A48L, (VECTOR(int32_t, 2))(0x0B739A48L, 0x359DB44CL), 0x359DB44CL);
                        VECTOR(int32_t, 2) l_1129 = (VECTOR(int32_t, 2))(0x24698183L, (-9L));
                        VECTOR(int32_t, 16) l_1130 = (VECTOR(int32_t, 16))(0x7A473262L, (VECTOR(int32_t, 4))(0x7A473262L, (VECTOR(int32_t, 2))(0x7A473262L, 8L), 8L), 8L, 0x7A473262L, 8L, (VECTOR(int32_t, 2))(0x7A473262L, 8L), (VECTOR(int32_t, 2))(0x7A473262L, 8L), 0x7A473262L, 8L, 0x7A473262L, 8L);
                        int8_t l_1131 = 0x26L;
                        uint32_t l_1132 = 0x7BB32AF3L;
                        int i;
                        l_1072.y |= l_1124;
                        l_1127 = l_1125;
                        l_1131 = (l_927 = ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_1128.xzxyzyzy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x3578EB8CL, ((VECTOR(int32_t, 2))(l_1129.xx)), (-1L))).ywxyywwx)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1130.sedca8ad0f3df4003)).s5c90)).zxyzxxwz))))))).s2);
                        l_1072.x |= l_1132;
                    }
                    l_1072.y = l_1133;
                    for (l_1113 = 0; (l_1113 == 50); l_1113 = safe_add_func_int16_t_s_s(l_1113, 3))
                    { /* block id: 596 */
                        union U0 l_1136 = {0x58D8L};
                        union U0 l_1137 = {9L};
                        int32_t l_1139 = 6L;
                        int32_t *l_1138[4][5];
                        int32_t *l_1140 = &l_1136.f3;
                        int32_t *l_1141[9][2][8] = {{{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139},{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139}},{{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139},{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139}},{{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139},{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139}},{{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139},{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139}},{{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139},{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139}},{{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139},{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139}},{{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139},{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139}},{{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139},{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139}},{{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139},{(void*)0,&l_1136.f3,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139,&l_1139}}};
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_1138[i][j] = &l_1139;
                        }
                        l_927 &= ((VECTOR(int32_t, 2))(0x17F92C99L, (-4L))).lo;
                        l_1138[2][0] = (l_1141[3][1][4] = (l_1140 = ((l_1137 = l_1136) , l_1138[2][0])));
                        l_1072.y ^= (-2L);
                    }
                    for (l_1133 = 0; (l_1133 > 18); l_1133 = safe_add_func_uint16_t_u_u(l_1133, 4))
                    { /* block id: 606 */
                        int32_t l_1145 = 0L;
                        int32_t *l_1144 = &l_1145;
                        int32_t *l_1146[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1146[i] = &l_1145;
                        l_1146[2] = l_1144;
                    }
                }
            }
            l_927 = (-7L);
            l_1147 = ((l_927 = (-1L)) , (void*)0);
            for (l_1069 = (-11); (l_1069 != (-28)); l_1069 = safe_sub_func_uint64_t_u_u(l_1069, 2))
            { /* block id: 616 */
                VECTOR(int32_t, 4) l_1150 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
                VECTOR(uint64_t, 4) l_1151 = (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0xEB0F286BC68ADF06L), 0xEB0F286BC68ADF06L);
                VECTOR(uint64_t, 2) l_1152 = (VECTOR(uint64_t, 2))(0UL, 0x99ED27347082B7F2L);
                VECTOR(uint64_t, 4) l_1153 = (VECTOR(uint64_t, 4))(0x16D87F647318C3F2L, (VECTOR(uint64_t, 2))(0x16D87F647318C3F2L, 18446744073709551615UL), 18446744073709551615UL);
                int8_t l_1154 = 0L;
                VECTOR(uint32_t, 8) l_1155 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x6D2EF779L), 0x6D2EF779L), 0x6D2EF779L, 4294967295UL, 0x6D2EF779L);
                VECTOR(uint32_t, 8) l_1156 = (VECTOR(uint32_t, 8))(0x34C04DE7L, (VECTOR(uint32_t, 4))(0x34C04DE7L, (VECTOR(uint32_t, 2))(0x34C04DE7L, 4UL), 4UL), 4UL, 0x34C04DE7L, 4UL);
                VECTOR(uint32_t, 8) l_1157 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL);
                uint16_t l_1158 = 8UL;
                uint32_t l_1228 = 4294967292UL;
                int i;
                l_927 = ((VECTOR(int32_t, 4))(l_1150.xwxy)).y;
                if (((l_1154 = ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 2))(l_1151.yx)), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_1152.yyyxxyxxyyxxyxxy)))).s63))).xyyyxxyyyyyyyxyx)))).s0afe, ((VECTOR(uint64_t, 16))(18446744073709551615UL, 0UL, FAKE_DIVERGE(p_1316->local_1_offset, get_local_id(1), 10), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(GROUP_DIVERGE(1, 1), 18446744073709551615UL, 0x234AABD212BFB432L, 0x4BFBD8EFB8D20091L, 18446744073709551611UL, GROUP_DIVERGE(2, 1), 0x7A9289F74BE8EF0EL, 0UL)).odd)), 18446744073709551614UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(0xA41F22E14C2D7056L, (l_1152.y = 0x212A0360EDCFB30EL), 18446744073709551609UL, 0UL)))), 0x3ADBCDB9E0D5E6C0L, ((VECTOR(uint64_t, 2))(l_1153.yy)), 0UL)).s74a0))))).w) , (((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 2))(l_1155.s51)).xyyyyxxxyxyxxyxy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(4294967295UL, 4294967293UL, ((VECTOR(uint32_t, 4))(0xF6594BB7L, 4294967295UL, 0x33E32317L, 0x45CB8958L)), ((VECTOR(uint32_t, 2))(l_1156.s11)), 0xE3FE0D89L, ((VECTOR(uint32_t, 4))(l_1157.s1551)), 0x19885E0DL, 0x54B8486AL, 4294967289UL)).s78)).xyyxyxyyxxxxxyxx))).s7 , l_1158)))
                { /* block id: 620 */
                    uint16_t l_1159 = 65526UL;
                    if (l_1159)
                    { /* block id: 621 */
                        union U3 **l_1160 = (void*)0;
                        int32_t l_1162 = 0L;
                        int32_t *l_1161 = &l_1162;
                        int16_t l_1163 = (-1L);
                        uint8_t l_1164 = 0x7AL;
                        int64_t l_1167[6] = {0x34FF79091A479ACBL,(-1L),0x34FF79091A479ACBL,0x34FF79091A479ACBL,(-1L),0x34FF79091A479ACBL};
                        union U2 l_1168 = {4UL};
                        union U0 l_1169 = {-1L};
                        union U0 l_1170 = {0L};
                        union U2 l_1171 = {0xC570A110L};
                        int i;
                        l_1160 = (void*)0;
                        l_1161 = l_1161;
                        --l_1164;
                        l_927 = (((l_1167[2] , l_1168) , (l_1170 = l_1169)) , ((FAKE_DIVERGE(p_1316->group_2_offset, get_group_id(2), 10) , l_1171) , (-3L)));
                    }
                    else
                    { /* block id: 627 */
                        int32_t l_1172[5];
                        int32_t l_1173 = 0L;
                        int32_t l_1174 = 0x33EA8E98L;
                        uint16_t l_1175[5] = {65535UL,65535UL,65535UL,65535UL,65535UL};
                        int32_t l_1178 = (-3L);
                        int64_t l_1179 = 0x2DD2BC660730FB84L;
                        uint32_t l_1180 = 0UL;
                        int64_t l_1181 = 0x6C339E00EA014848L;
                        union U2 l_1182 = {0x39340671L};
                        union U2 l_1183 = {0UL};
                        uint32_t l_1184 = 4294967295UL;
                        uint32_t l_1185[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                        int8_t l_1186 = 0L;
                        uint32_t l_1187 = 0xA8B624A4L;
                        uint8_t l_1188[7];
                        int32_t l_1189 = 0x238E8B86L;
                        int32_t l_1190 = 0L;
                        VECTOR(int32_t, 16) l_1191 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x05CB4D1EL), 0x05CB4D1EL), 0x05CB4D1EL, 3L, 0x05CB4D1EL, (VECTOR(int32_t, 2))(3L, 0x05CB4D1EL), (VECTOR(int32_t, 2))(3L, 0x05CB4D1EL), 3L, 0x05CB4D1EL, 3L, 0x05CB4D1EL);
                        int16_t l_1192[3];
                        VECTOR(int16_t, 16) l_1193 = (VECTOR(int16_t, 16))(0x7B3DL, (VECTOR(int16_t, 4))(0x7B3DL, (VECTOR(int16_t, 2))(0x7B3DL, (-9L)), (-9L)), (-9L), 0x7B3DL, (-9L), (VECTOR(int16_t, 2))(0x7B3DL, (-9L)), (VECTOR(int16_t, 2))(0x7B3DL, (-9L)), 0x7B3DL, (-9L), 0x7B3DL, (-9L));
                        VECTOR(int16_t, 4) l_1194 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x638AL), 0x638AL);
                        int64_t l_1195[10][9] = {{(-1L),0x7A18D3ED977D00E4L,(-1L),0x414DB6D0CFD99DBFL,1L,0x414DB6D0CFD99DBFL,(-1L),0x7A18D3ED977D00E4L,(-1L)},{(-1L),0x7A18D3ED977D00E4L,(-1L),0x414DB6D0CFD99DBFL,1L,0x414DB6D0CFD99DBFL,(-1L),0x7A18D3ED977D00E4L,(-1L)},{(-1L),0x7A18D3ED977D00E4L,(-1L),0x414DB6D0CFD99DBFL,1L,0x414DB6D0CFD99DBFL,(-1L),0x7A18D3ED977D00E4L,(-1L)},{(-1L),0x7A18D3ED977D00E4L,(-1L),0x414DB6D0CFD99DBFL,1L,0x414DB6D0CFD99DBFL,(-1L),0x7A18D3ED977D00E4L,(-1L)},{(-1L),0x7A18D3ED977D00E4L,(-1L),0x414DB6D0CFD99DBFL,1L,0x414DB6D0CFD99DBFL,(-1L),0x7A18D3ED977D00E4L,(-1L)},{(-1L),0x7A18D3ED977D00E4L,(-1L),0x414DB6D0CFD99DBFL,1L,0x414DB6D0CFD99DBFL,(-1L),0x7A18D3ED977D00E4L,(-1L)},{(-1L),0x7A18D3ED977D00E4L,(-1L),0x414DB6D0CFD99DBFL,1L,0x414DB6D0CFD99DBFL,(-1L),0x7A18D3ED977D00E4L,(-1L)},{(-1L),0x7A18D3ED977D00E4L,(-1L),0x414DB6D0CFD99DBFL,1L,0x414DB6D0CFD99DBFL,(-1L),0x7A18D3ED977D00E4L,(-1L)},{(-1L),0x7A18D3ED977D00E4L,(-1L),0x414DB6D0CFD99DBFL,1L,0x414DB6D0CFD99DBFL,(-1L),0x7A18D3ED977D00E4L,(-1L)},{(-1L),0x7A18D3ED977D00E4L,(-1L),0x414DB6D0CFD99DBFL,1L,0x414DB6D0CFD99DBFL,(-1L),0x7A18D3ED977D00E4L,(-1L)}};
                        uint32_t l_1196 = 7UL;
                        VECTOR(int16_t, 4) l_1197 = (VECTOR(int16_t, 4))(0x09E9L, (VECTOR(int16_t, 2))(0x09E9L, 1L), 1L);
                        VECTOR(int16_t, 4) l_1198 = (VECTOR(int16_t, 4))(0x29D5L, (VECTOR(int16_t, 2))(0x29D5L, 0x0715L), 0x0715L);
                        VECTOR(int16_t, 4) l_1199 = (VECTOR(int16_t, 4))(0x6332L, (VECTOR(int16_t, 2))(0x6332L, 0x4B66L), 0x4B66L);
                        VECTOR(int16_t, 4) l_1200 = (VECTOR(int16_t, 4))(0x60B7L, (VECTOR(int16_t, 2))(0x60B7L, 0L), 0L);
                        VECTOR(int16_t, 16) l_1201 = (VECTOR(int16_t, 16))(0x219AL, (VECTOR(int16_t, 4))(0x219AL, (VECTOR(int16_t, 2))(0x219AL, 0x5E2EL), 0x5E2EL), 0x5E2EL, 0x219AL, 0x5E2EL, (VECTOR(int16_t, 2))(0x219AL, 0x5E2EL), (VECTOR(int16_t, 2))(0x219AL, 0x5E2EL), 0x219AL, 0x5E2EL, 0x219AL, 0x5E2EL);
                        VECTOR(int8_t, 2) l_1202 = (VECTOR(int8_t, 2))(0x36L, 0L);
                        VECTOR(int16_t, 2) l_1203 = (VECTOR(int16_t, 2))((-5L), 2L);
                        int32_t l_1204 = 0x577245E9L;
                        VECTOR(int8_t, 16) l_1205 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x30L), 0x30L), 0x30L, 1L, 0x30L, (VECTOR(int8_t, 2))(1L, 0x30L), (VECTOR(int8_t, 2))(1L, 0x30L), 1L, 0x30L, 1L, 0x30L);
                        int16_t l_1206 = 0x26BCL;
                        int8_t l_1207 = 0L;
                        uint8_t l_1208[6][8] = {{0xADL,0x58L,0x1CL,251UL,9UL,251UL,0x1CL,0x58L},{0xADL,0x58L,0x1CL,251UL,9UL,251UL,0x1CL,0x58L},{0xADL,0x58L,0x1CL,251UL,9UL,251UL,0x1CL,0x58L},{0xADL,0x58L,0x1CL,251UL,9UL,251UL,0x1CL,0x58L},{0xADL,0x58L,0x1CL,251UL,9UL,251UL,0x1CL,0x58L},{0xADL,0x58L,0x1CL,251UL,9UL,251UL,0x1CL,0x58L}};
                        int8_t l_1209 = 1L;
                        VECTOR(uint64_t, 8) l_1210 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xB77ED4AB2C57FEC2L), 0xB77ED4AB2C57FEC2L), 0xB77ED4AB2C57FEC2L, 1UL, 0xB77ED4AB2C57FEC2L);
                        uint64_t l_1211 = 0x8D5D67244D91516FL;
                        uint64_t l_1212 = 18446744073709551615UL;
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_1172[i] = (-3L);
                        for (i = 0; i < 7; i++)
                            l_1188[i] = 0x10L;
                        for (i = 0; i < 3; i++)
                            l_1192[i] = 0x29DFL;
                        l_1175[3]++;
                        l_1178 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_1178, (-1L), l_1179, ((VECTOR(int32_t, 8))(0x4ADCF01CL, 3L, 5L, l_1180, (-1L), l_1181, 0x4148D64DL, (-8L))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(0x1DD3427EL, 5L)).yxxxxyyyyxxxyxxx, (int32_t)(((l_1183 = l_1182) , (l_1185[4] = l_1184)) , (l_1150.x &= l_1186))))).lo)).s25)), 0x2DD993E8L, 0x401B3067L, 0x6FB0230EL)))).s4;
                        l_1150.z ^= (((VECTOR(int32_t, 4))(l_1187, ((VECTOR(int32_t, 8))((((VECTOR(int64_t, 2))((-1L), (-1L))).hi , 1L), (l_1190 = (l_928 = (l_1188[4] , l_1189))), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1191.s32f4fab9)), ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(l_1192[2], ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(l_1193.sc09b8a48)).s41, ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(l_1194.xxwy)), ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((l_1196 = l_1195[0][6]), 0x3C71L, 5L, 1L)), ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(l_1197.xyww)).odd, ((VECTOR(int16_t, 2))(0L, 0x2CC8L))))), 1L, 0x5C28L)), ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(l_1198.ywyzzzxxxzwxyyxw)), ((VECTOR(int16_t, 16))(l_1199.xwwyywxyxwwwxxxz))))).even))).lo))).lo))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x1A28L, 0x7BC2L)))).yxxyxxyy)).even)).hi))), 0x7F2FL)).lo, ((VECTOR(int16_t, 2))(0x25AEL, 0x32E1L)), ((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(l_1200.xyxxxwwx)).hi, ((VECTOR(int16_t, 2))(0x6179L, 0x5A5DL)).yxxx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(l_1201.s1a)).xxxy, ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(l_1202.xyyxxyyyxxyxyyxy)).se6, ((VECTOR(int8_t, 2))(0x4FL, 0x4FL)), ((VECTOR(int8_t, 16))(0x28L, 1L, (((VECTOR(int16_t, 16))(l_1203.xxxyxxxxyxyxxyyy)).s3 , l_1204), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_1205.s0a)).yxyyxxyxyyyyxxyy)).s5e25)))).odd)), 0x5AL, (-1L))), 0x4DL, (-2L), 1L, (l_1202.y = l_1206), 0L, 0x62L, l_1207, 0x0BL, 0x6EL)).s29))).yxxxyyyyxxxxxxyx)).s9183, ((VECTOR(int8_t, 4))(0x60L))))).ywyxwzyz)), ((VECTOR(uint8_t, 8))(5UL))))).hi))).even)).xxyx))).hi))).xxyxxxyy, ((VECTOR(int16_t, 8))((-8L)))))).s7365534722332327)), ((VECTOR(int16_t, 16))(0x13ECL))))).sa7, ((VECTOR(int16_t, 2))(0x01EAL))))).xxxyxxyx, ((VECTOR(uint16_t, 8))(65534UL))))).s6, 0x6FFB5748L, 4L, (-1L), l_1208[0][7], l_1209, 0x7E41218FL, 0x3499DD37L)).s653c, (int32_t)l_1210.s1))).hi, ((VECTOR(int32_t, 2))((-4L)))))), 0x2F883A8AL, l_1211, (-10L), 0x4CC73977L)).s5, 0x676A9A09L, 0x3DEE91DFL)).z , l_1212);
                    }
                }
                else
                { /* block id: 639 */
                    int32_t *l_1213 = (void*)0;
                    VECTOR(int16_t, 16) l_1214 = (VECTOR(int16_t, 16))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, (-1L)), (-1L)), (-1L), 7L, (-1L), (VECTOR(int16_t, 2))(7L, (-1L)), (VECTOR(int16_t, 2))(7L, (-1L)), 7L, (-1L), 7L, (-1L));
                    int8_t l_1215 = 0x5CL;
                    uint8_t l_1216 = 255UL;
                    VECTOR(int16_t, 2) l_1217 = (VECTOR(int16_t, 2))(0x66C2L, 6L);
                    uint32_t l_1218 = 4294967295UL;
                    int8_t l_1227 = (-8L);
                    int i;
                    l_1147 = l_1213;
                    l_927 = (-1L);
                    if ((((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(l_1214.s3f25)).wzxxxwxy, (int16_t)(l_1215 , l_1216)))), ((VECTOR(int16_t, 8))(l_1217.xxxyxyxx))))).s0 , (l_1150.z = (l_927 = l_1218))))
                    { /* block id: 644 */
                        VECTOR(int32_t, 4) l_1219 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x30B5B0FFL), 0x30B5B0FFL);
                        int16_t l_1220 = 0x424CL;
                        int32_t *l_1221 = (void*)0;
                        int i;
                        l_1220 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1219.zx)).yyyyyyxx)).s15))), 0x17404428L, (-7L))).wxzxyzwwywxywzwy)).s5;
                        l_1221 = (void*)0;
                    }
                    else
                    { /* block id: 647 */
                        uint16_t l_1222[1];
                        int32_t l_1226 = 1L;
                        int32_t *l_1225 = &l_1226;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1222[i] = 65535UL;
                        l_1222[0]--;
                        l_1213 = l_1225;
                    }
                    l_927 |= (l_1150.x = l_1227);
                }
                l_927 &= l_1228;
                for (l_1157.s1 = (-19); (l_1157.s1 <= 23); l_1157.s1 = safe_add_func_int16_t_s_s(l_1157.s1, 1))
                { /* block id: 657 */
                    union U2 l_1231 = {0x9794EF37L};
                    union U2 l_1232 = {4294967295UL};
                    uint32_t l_1233 = 0x6F8B5EE3L;
                    l_1233 ^= ((l_1232 = l_1231) , 0L);
                }
            }
        }
        else
        { /* block id: 662 */
            uint32_t l_1234[10][3][2] = {{{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L}},{{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L}},{{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L}},{{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L}},{{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L}},{{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L}},{{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L}},{{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L}},{{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L}},{{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L},{0x07DF6392L,0x180A4D77L}}};
            int32_t l_1235 = 1L;
            int16_t l_1236 = 0x7DA2L;
            uint32_t l_1237[3][6][1] = {{{0x40D63E90L},{0x40D63E90L},{0x40D63E90L},{0x40D63E90L},{0x40D63E90L},{0x40D63E90L}},{{0x40D63E90L},{0x40D63E90L},{0x40D63E90L},{0x40D63E90L},{0x40D63E90L},{0x40D63E90L}},{{0x40D63E90L},{0x40D63E90L},{0x40D63E90L},{0x40D63E90L},{0x40D63E90L},{0x40D63E90L}}};
            int32_t l_1238 = 0L;
            int32_t l_1239[5][9][5] = {{{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L}},{{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L}},{{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L}},{{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L}},{{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L},{0x07BB9E44L,0x75EDCA45L,1L,0x3C3108D8L,0x75EDCA45L}}};
            uint64_t l_1240 = 0xA2BA8053049FF11CL;
            int8_t l_1241 = 0x0FL;
            int64_t l_1242[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
            int i, j, k;
            l_1242[0] &= ((VECTOR(int32_t, 8))(0x1AAFC420L, (l_1234[8][1][1] , (-5L)), l_1235, l_1236, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(0x48A0B356L, (l_927 = ((l_1237[2][4][0] , l_1238) , l_1239[2][4][2])), l_1240, 0L, (l_1235 = l_1241), 2L, (-1L), 0x3A0D37E9L)).s74, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))((-1L)))))).xyxxyyyyyxyyyxyy, ((VECTOR(int32_t, 16))(1L))))), ((VECTOR(int32_t, 16))(0x7E663099L)), ((VECTOR(int32_t, 16))(0x5F8FB577L))))).s7, ((VECTOR(int32_t, 2))(6L)), (-1L))).s3;
        }
        unsigned int result = 0;
        result += l_926;
        result += l_927;
        result += l_928;
        result += l_1068;
        atomic_add(&p_1316->l_special_values[12], result);
    }
    else
    { /* block id: 667 */
        (1 + 1);
    }
    return p_1316->g_854.s2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1316->g_352 p_1316->g_360 p_1316->g_472 p_1316->g_13 p_1316->g_577 p_1316->g_590 p_1316->l_comm_values p_1316->g_603 p_1316->g_comm_values p_1316->g_40 p_1316->g_617 p_1316->g_619 p_1316->g_659 p_1316->g_667 p_1316->g_540 p_1316->g_671 p_1316->g_645.f0
 * writes: p_1316->g_13 p_1316->g_418 p_1316->g_535 p_1316->g_540 p_1316->g_391.f2 p_1316->g_603 p_1316->g_617 p_1316->g_619 p_1316->g_621 p_1316->g_519.f1 p_1316->g_323 p_1316->g_368.f1 p_1316->g_674
 */
int8_t  func_26(int16_t  p_27, uint16_t  p_28, uint32_t  p_29, struct S4 * p_1316)
{ /* block id: 27 */
    uint32_t l_74 = 1UL;
    union U2 l_346 = {0x51BC157BL};
    int32_t l_359 = 0L;
    int32_t l_361 = 0x0EEAB6CAL;
    int32_t l_511[3][8][10] = {{{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L}},{{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L}},{{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L},{3L,1L,0x7AEB30D9L,0x1A9C7DD3L,(-1L),0x5EE3FB3AL,0x590251D6L,1L,3L,0x7AEB30D9L}}};
    int16_t l_538 = 0x7CE9L;
    int8_t l_545 = 0x42L;
    int8_t l_553 = 0x6AL;
    int32_t l_556 = 8L;
    uint8_t l_561 = 249UL;
    VECTOR(uint8_t, 8) l_608 = (VECTOR(uint8_t, 8))(0x77L, (VECTOR(uint8_t, 4))(0x77L, (VECTOR(uint8_t, 2))(0x77L, 0x6FL), 0x6FL), 0x6FL, 0x77L, 0x6FL);
    uint8_t l_685 = 0x2AL;
    uint16_t l_688 = 0x191DL;
    int i, j, k;
    for (p_28 = (-21); (p_28 != 32); p_28++)
    { /* block id: 30 */
        uint8_t l_332 = 251UL;
        union U0 l_345 = {7L};
        VECTOR(int16_t, 16) l_354 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int16_t, 2))(0L, (-1L)), (VECTOR(int16_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
        VECTOR(int16_t, 4) l_357 = (VECTOR(int16_t, 4))(0x4E82L, (VECTOR(int16_t, 2))(0x4E82L, 0x108FL), 0x108FL);
        int32_t *l_484 = (void*)0;
        union U3 ***l_533[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_546 = 1L;
        int32_t l_547 = 0x2BC26D76L;
        int32_t l_548 = 0x6E1754E3L;
        int32_t l_550 = 7L;
        int32_t l_551 = (-4L);
        int32_t l_552 = (-10L);
        int32_t l_554 = 6L;
        int32_t l_555 = (-5L);
        int32_t l_557 = 0x7BDDA5F5L;
        int32_t l_558 = (-10L);
        int32_t l_559 = 0x4BDBC0ACL;
        int32_t l_560 = 5L;
        uint32_t l_564 = 0xB354BDECL;
        uint16_t l_633 = 0x691BL;
        int32_t *l_689 = &l_559;
        int32_t *l_690 = &l_551;
        int32_t *l_691 = &l_559;
        int32_t *l_692 = &l_556;
        int32_t *l_693[7] = {&l_558,(void*)0,&l_558,&l_558,(void*)0,&l_558,&l_558};
        uint64_t l_694[2];
        int i;
        for (i = 0; i < 2; i++)
            l_694[i] = 0x5EAFBC485F529693L;
        for (p_1316->g_13 = (-27); (p_1316->g_13 < 27); p_1316->g_13 = safe_add_func_uint8_t_u_u(p_1316->g_13, 5))
        { /* block id: 33 */
            VECTOR(int16_t, 8) l_353 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x738EL), 0x738EL), 0x738EL, (-1L), 0x738EL);
            VECTOR(int16_t, 16) l_355 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int16_t, 2))((-1L), 1L), (VECTOR(int16_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
            VECTOR(int32_t, 2) l_515 = (VECTOR(int32_t, 2))(1L, (-9L));
            int32_t *l_527 = &l_359;
            uint8_t *l_528 = &p_1316->g_418;
            union U3 ****l_534 = &l_533[9];
            uint8_t *l_536 = (void*)0;
            uint8_t *l_537 = &l_332;
            uint16_t *l_539 = &p_1316->g_540;
            int16_t l_549 = 0x1CB7L;
            int64_t *l_597[9][8][3] = {{{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0}},{{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0}},{{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0}},{{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0}},{{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0}},{{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0}},{{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0}},{{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0}},{{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0},{(void*)0,&p_1316->g_360,(void*)0}}};
            VECTOR(int64_t, 2) l_630 = (VECTOR(int64_t, 2))(0x2BFA65B37F74538BL, 0x09F8EEC1C35699EAL);
            int i, j, k;
            for (p_29 = 28; (p_29 >= 28); p_29 = safe_add_func_int16_t_s_s(p_29, 1))
            { /* block id: 36 */
                uint32_t l_347 = 0x47481913L;
                VECTOR(int16_t, 16) l_356 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x07FCL), 0x07FCL), 0x07FCL, 0L, 0x07FCL, (VECTOR(int16_t, 2))(0L, 0x07FCL), (VECTOR(int16_t, 2))(0L, 0x07FCL), 0L, 0x07FCL, 0L, 0x07FCL);
                union U2 l_482 = {0UL};
                union U3 *l_518 = &p_1316->g_519;
                int32_t l_524 = 0L;
                int i;
                for (p_27 = 0; (p_27 < 18); p_27 = safe_add_func_int8_t_s_s(p_27, 1))
                { /* block id: 39 */
                    return p_28;
                }
                if (p_28)
                    break;
                for (p_27 = 0; (p_27 <= (-13)); p_27 = safe_sub_func_uint16_t_u_u(p_27, 1))
                { /* block id: 45 */
                    int64_t *l_327 = (void*)0;
                    int64_t **l_326 = &l_327;
                    int16_t *l_358 = (void*)0;
                    int32_t *l_509[7][10] = {{&p_1316->g_510,&p_1316->g_510,&p_1316->g_510,(void*)0,&p_1316->g_510,&p_1316->g_510,&p_1316->g_510,(void*)0,&p_1316->g_510,&p_1316->g_510},{&p_1316->g_510,&p_1316->g_510,&p_1316->g_510,(void*)0,&p_1316->g_510,&p_1316->g_510,&p_1316->g_510,(void*)0,&p_1316->g_510,&p_1316->g_510},{&p_1316->g_510,&p_1316->g_510,&p_1316->g_510,(void*)0,&p_1316->g_510,&p_1316->g_510,&p_1316->g_510,(void*)0,&p_1316->g_510,&p_1316->g_510},{&p_1316->g_510,&p_1316->g_510,&p_1316->g_510,(void*)0,&p_1316->g_510,&p_1316->g_510,&p_1316->g_510,(void*)0,&p_1316->g_510,&p_1316->g_510},{&p_1316->g_510,&p_1316->g_510,&p_1316->g_510,(void*)0,&p_1316->g_510,&p_1316->g_510,&p_1316->g_510,(void*)0,&p_1316->g_510,&p_1316->g_510},{&p_1316->g_510,&p_1316->g_510,&p_1316->g_510,(void*)0,&p_1316->g_510,&p_1316->g_510,&p_1316->g_510,(void*)0,&p_1316->g_510,&p_1316->g_510},{&p_1316->g_510,&p_1316->g_510,&p_1316->g_510,(void*)0,&p_1316->g_510,&p_1316->g_510,&p_1316->g_510,(void*)0,&p_1316->g_510,&p_1316->g_510}};
                    int8_t l_514 = 1L;
                    union U3 *l_520 = &p_1316->g_521;
                    int i, j;
                    (1 + 1);
                }
                if (p_29)
                    break;
            }
            (*l_527) = 1L;
            (*l_527) = 0L;
            if (((1L < (((*l_539) = ((((((((*l_528) = (*l_527)) ^ 0x28L) <= (safe_rshift_func_int16_t_s_s(p_1316->g_352.s4, (safe_rshift_func_uint16_t_u_u(((((*l_534) = l_533[7]) == (p_1316->g_535 = &p_1316->g_475[0])) != (*l_527)), (p_29 && (FAKE_DIVERGE(p_1316->group_2_offset, get_group_id(2), 10) >= ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 8))(((((*l_537) = (p_29 | p_27)) && l_538) && p_28), FAKE_DIVERGE(p_1316->global_1_offset, get_global_id(1), 10), 65535UL, p_1316->g_483.f0, 65535UL, ((VECTOR(uint16_t, 2))(0x27F8L)), 0x0F06L)), ((VECTOR(uint16_t, 8))(0x5054L))))).s0))))))) > GROUP_DIVERGE(1, 1)) != (*l_527)) == p_1316->g_360) || 0xD2F7F6E290F47EC4L)) & l_346.f0)) < p_28))
            { /* block id: 285 */
                int32_t *l_541 = &l_361;
                int32_t *l_542 = &l_361;
                int32_t *l_543 = &l_345.f3;
                int32_t *l_544[8] = {&l_361,&l_361,&l_361,&l_361,&l_361,&l_361,&l_361,&l_361};
                int64_t *l_612[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
                int16_t l_631 = 4L;
                int i, j;
                l_561--;
                if (l_564)
                    break;
                for (p_1316->g_391.f2 = (-3); (p_1316->g_391.f2 <= 22); ++p_1316->g_391.f2)
                { /* block id: 290 */
                    uint64_t l_598 = 0x78C89D4641A96584L;
                    int16_t *l_599 = (void*)0;
                    int16_t *l_600[5];
                    uint32_t l_601[4][1][4] = {{{4UL,0xDECFD95EL,4UL,4UL}},{{4UL,0xDECFD95EL,4UL,4UL}},{{4UL,0xDECFD95EL,4UL,4UL}},{{4UL,0xDECFD95EL,4UL,4UL}}};
                    int64_t *l_602 = &p_1316->g_603;
                    int32_t *l_618 = &p_1316->g_619[1];
                    int32_t *l_620 = &p_1316->g_621[5][2][0];
                    int8_t *l_628[4];
                    int32_t l_629 = 0x3E76D1DCL;
                    int32_t l_632 = (-6L);
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_600[i] = (void*)0;
                    for (i = 0; i < 4; i++)
                        l_628[i] = &l_545;
                    (*l_527) = ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_1316->g_569.yxyyzwyzwzyxwxyx)).sfc5f)).even)), (-7L), (-7L))).w, (safe_unary_minus_func_int8_t_s(((safe_lshift_func_int16_t_s_s((((*l_602) &= (!(safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))((-1L), (-1L))).lo, ((p_1316->g_472 , p_28) ^ ((VECTOR(uint64_t, 8))(p_1316->g_577.s461337c8)).s4))), (p_28 >= (((safe_lshift_func_uint8_t_u_s(((p_27 > (((((safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(p_28, (+GROUP_DIVERGE(0, 1)))) != (l_601[1][0][2] = (safe_rshift_func_int16_t_s_s((((safe_div_func_int16_t_s_s(((p_1316->g_13 ^ (((VECTOR(uint64_t, 4))(p_1316->g_590.xxxx)).x >= (safe_div_func_uint64_t_u_u((p_1316->g_577.s4 ^ (safe_add_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u((&p_1316->g_360 != l_597[6][5][1]), p_28)) | l_598), p_29))), p_29)))) , p_1316->g_590.x), p_1316->g_360)) > p_29) || l_74), 9)))), 0x3254L)), 8L)) <= p_27) && (*l_527)) != p_1316->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1316->tid, 25))]) && (-1L))) , l_598), 6)) , 0x3C71L) < p_28)))))) , p_1316->g_comm_values[p_1316->tid]), 8)) ^ p_29))))) , p_27);
                    if (p_28)
                        break;
                    (*l_541) ^= ((safe_mul_func_int16_t_s_s(0x4248L, (18446744073709551609UL <= (((*l_620) = ((*l_618) |= (p_1316->g_617[0] ^= ((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(2UL, 7UL, ((VECTOR(uint8_t, 2))(0x87L, 248UL)), 0xBDL, 2UL, 0xCFL, 6UL)).odd)), ((VECTOR(uint8_t, 4))(l_608.s7515)))), ((VECTOR(uint8_t, 2))(p_1316->g_609.xz)).xxxxyxxy))).s1023115173341330)).s6, 6UL)) < (safe_rshift_func_uint16_t_u_s(((void*)0 == l_612[0][0]), (+(safe_add_func_uint16_t_u_u(p_1316->g_40.y, (safe_mod_func_int32_t_s_s(p_27, 4294967295UL))))))))))) , (safe_add_func_int32_t_s_s(((safe_add_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s(((*l_527) = p_27), 3)) < p_29) , l_359), p_29)) ^ p_27), p_1316->g_352.s1)))))) || p_28);
                    --l_633;
                }
            }
            else
            { /* block id: 302 */
                uint64_t l_641 = 0x3CE7C2D14FC7A977L;
                int32_t l_675 = 0x5130409EL;
                for (p_1316->g_519.f1 = 16; (p_1316->g_519.f1 == 57); p_1316->g_519.f1 = safe_add_func_uint64_t_u_u(p_1316->g_519.f1, 1))
                { /* block id: 305 */
                    int32_t l_640 = (-7L);
                    union U1 *l_644 = &p_1316->g_645;
                    if (p_29)
                        break;
                    if ((*l_527))
                        continue;
                    if (p_27)
                        break;
                    if (p_27)
                    { /* block id: 309 */
                        int32_t *l_638 = (void*)0;
                        int32_t *l_639[8] = {(void*)0,&l_558,(void*)0,(void*)0,&l_558,(void*)0,(void*)0,&l_558};
                        int i;
                        if (p_29)
                            break;
                        --l_641;
                    }
                    else
                    { /* block id: 312 */
                        union U1 **l_646 = (void*)0;
                        union U1 **l_647 = (void*)0;
                        union U1 **l_648 = &l_644;
                        int32_t **l_649 = (void*)0;
                        int32_t **l_650 = &p_1316->g_323[1];
                        int32_t *l_666[3][7][4] = {{{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556}},{{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556}},{{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556},{&l_557,(void*)0,&l_555,&l_556}}};
                        uint32_t *l_672 = &p_1316->g_368.f1;
                        int32_t *l_673[3][9][3] = {{{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674}},{{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674}},{{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674},{(void*)0,(void*)0,&p_1316->g_674}}};
                        int i, j, k;
                        (*l_648) = l_644;
                        (*l_650) = &p_1316->g_510;
                        atomic_xor(&p_1316->l_atomic_reduction[0], (((safe_div_func_uint64_t_u_u(((*l_527) && ((safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((*l_527) < ((p_1316->g_674 = (l_675 ^= ((l_515.x = (((void*)0 != p_1316->g_659) ^ (!(safe_add_func_uint32_t_u_u((0x26L <= (0x2A4BD484EA0D91F7L != p_27)), p_27))))) ^ (((*l_672) = ((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_1316->g_667.xwwy)), 0x01FFL, (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(((0x00A35A33L <= p_28) ^ l_359))), (-1L))), p_28, l_641, 65526UL, 0xF576L, 1UL, p_1316->g_540, ((VECTOR(uint16_t, 4))(0xA258L)))).sf094, ((VECTOR(uint16_t, 4))(0x650CL))))).xzywwzzywyyyxyyw)).sc8)), 2UL, 0xADB2L)).x < p_1316->g_671) == p_27)) ^ p_27)))) , (*l_527))), 0x06L)), p_1316->g_645.f0)) && p_29)), p_28)) & 0UL) && p_27) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1316->v_collective += p_1316->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        (*l_527) = (safe_add_func_int8_t_s_s(p_28, ((VECTOR(uint8_t, 16))(p_1316->g_678.se331f20b1c32b1db)).sf));
                    }
                }
            }
        }
        if (l_359)
        { /* block id: 325 */
            int32_t *l_679 = (void*)0;
            int32_t *l_680 = &p_1316->g_472.f3;
            int32_t *l_681 = &l_560;
            int32_t *l_682 = &l_359;
            int32_t *l_683[6][6] = {{&l_558,(void*)0,(void*)0,&l_557,(void*)0,&l_557},{&l_558,(void*)0,(void*)0,&l_557,(void*)0,&l_557},{&l_558,(void*)0,(void*)0,&l_557,(void*)0,&l_557},{&l_558,(void*)0,(void*)0,&l_557,(void*)0,&l_557},{&l_558,(void*)0,(void*)0,&l_557,(void*)0,&l_557},{&l_558,(void*)0,(void*)0,&l_557,(void*)0,&l_557}};
            int32_t l_684 = 1L;
            int i, j;
            ++l_685;
            if (l_545)
                continue;
        }
        else
        { /* block id: 328 */
            l_688 = p_29;
        }
        if (p_29)
            break;
        ++l_694[1];
    }
    return p_28;
}


/* ------------------------------------------ */
/* 
 * reads : p_1316->g_13 p_1316->g_40
 * writes: p_1316->g_13 p_1316->g_comm_values
 */
uint64_t  func_30(int32_t  p_31, struct S4 * p_1316)
{ /* block id: 6 */
    int32_t *l_39 = (void*)0;
    int32_t **l_38 = &l_39;
    int64_t *l_41 = (void*)0;
    int64_t *l_42[10][1];
    int32_t *l_43 = (void*)0;
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
            l_42[i][j] = (void*)0;
    }
    for (p_1316->g_13 = 0; (p_1316->g_13 <= 23); p_1316->g_13 = safe_add_func_int64_t_s_s(p_1316->g_13, 2))
    { /* block id: 9 */
        return p_31;
    }
    (*l_38) = func_35((p_1316->g_comm_values[p_1316->tid] = (((*l_38) = (void*)0) == (void*)0)), l_43, p_1316);
    return p_1316->g_40.x;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_35(int64_t  p_36, int32_t * p_37, struct S4 * p_1316)
{ /* block id: 14 */
    if ((atomic_inc(&p_1316->l_atomic_input[42]) == 3))
    { /* block id: 16 */
        int64_t l_44 = (-1L);
        uint64_t l_45 = 0x17BB5C02AC6AA04DL;
        int32_t *l_46 = (void*)0;
        int32_t l_48 = 0x606C0838L;
        int32_t *l_47 = &l_48;
        union U0 *l_49 = (void*)0;
        int32_t *l_50 = &l_48;
        l_45 |= l_44;
        l_47 = l_46;
        l_49 = (void*)0;
        l_50 = (void*)0;
        unsigned int result = 0;
        result += l_44;
        result += l_45;
        result += l_48;
        atomic_add(&p_1316->l_special_values[42], result);
    }
    else
    { /* block id: 21 */
        (1 + 1);
    }
    return p_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_1316->g_418 p_1316->g_13 p_1316->g_360 p_1316->g_40 p_1316->g_389.f2
 * writes: p_1316->g_418 p_1316->g_352 p_1316->g_472.f0 p_1316->l_comm_values p_1316->g_374.f1 p_1316->g_389.f2
 */
int32_t  func_61(int64_t * p_62, union U2  p_63, union U2  p_64, int32_t * p_65, int8_t  p_66, struct S4 * p_1316)
{ /* block id: 245 */
    int32_t *l_485 = (void*)0;
    int32_t **l_486[5][9] = {{&l_485,&l_485,&l_485,&p_1316->g_323[1],&p_1316->g_323[1],&p_1316->g_323[1],&l_485,&l_485,&l_485},{&l_485,&l_485,&l_485,&p_1316->g_323[1],&p_1316->g_323[1],&p_1316->g_323[1],&l_485,&l_485,&l_485},{&l_485,&l_485,&l_485,&p_1316->g_323[1],&p_1316->g_323[1],&p_1316->g_323[1],&l_485,&l_485,&l_485},{&l_485,&l_485,&l_485,&p_1316->g_323[1],&p_1316->g_323[1],&p_1316->g_323[1],&l_485,&l_485,&l_485},{&l_485,&l_485,&l_485,&p_1316->g_323[1],&p_1316->g_323[1],&p_1316->g_323[1],&l_485,&l_485,&l_485}};
    uint8_t *l_489 = &p_1316->g_418;
    int16_t *l_492[3];
    union U3 *l_497 = &p_1316->g_498;
    union U3 **l_499 = &l_497;
    VECTOR(int8_t, 2) l_502 = (VECTOR(int8_t, 2))(0x0FL, 0x15L);
    union U0 l_503[6] = {{0L},{0L},{0L},{0L},{0L},{0L}};
    int8_t *l_504[7];
    uint32_t *l_505 = &p_1316->g_374.f1;
    int i, j;
    for (i = 0; i < 3; i++)
        l_492[i] = &p_1316->g_472.f0;
    for (i = 0; i < 7; i++)
        l_504[i] = &p_1316->g_13;
    p_65 = l_485;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1316->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 25)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(4294967293UL, (safe_rshift_func_uint8_t_u_s((--(*l_489)), 7)), 0UL, (((p_1316->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1316->tid, 25))] = (((p_1316->g_352.s2 = 0x3229L) && p_1316->g_13) != (safe_div_func_int16_t_s_s((p_1316->g_472.f0 = p_64.f0), 65529UL)))) < (((safe_add_func_uint32_t_u_u((&p_1316->g_323[1] != &l_485), (((*l_499) = l_497) != (void*)0))) | (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_502.yxxx)).z, 1))) <= (((*l_505) = (((l_503[0] , l_504[6]) == (void*)0) & p_1316->g_360)) <= p_1316->g_40.y))) >= 4294967295UL), 0x655D077AL, ((VECTOR(uint32_t, 2))(0UL)), 4294967292UL)).s6, 10))][(safe_mod_func_uint32_t_u_u(p_1316->tid, 25))]));
    for (p_1316->g_389.f2 = 0; (p_1316->g_389.f2 < 31); ++p_1316->g_389.f2)
    { /* block id: 258 */
        uint16_t l_508 = 3UL;
        return l_508;
    }
    return p_64.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1316->g_352 p_1316->g_472 p_1316->g_381.f2 p_1316->g_13
 * writes: p_1316->g_475 p_1316->g_381.f2 p_1316->g_323
 */
uint16_t  func_69(int64_t * p_70, int64_t * p_71, struct S4 * p_1316)
{ /* block id: 234 */
    int32_t *l_463[9][2];
    int16_t l_464 = 7L;
    uint16_t l_465 = 0UL;
    uint32_t l_470 = 0x1B1F102CL;
    VECTOR(int8_t, 2) l_471 = (VECTOR(int8_t, 2))(0x1FL, 0x6CL);
    union U3 **l_474 = &p_1316->g_390;
    union U3 ***l_473[9][7][4] = {{{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0}},{{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0}},{{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0}},{{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0}},{{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0}},{{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0}},{{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0}},{{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0}},{{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0},{&l_474,(void*)0,&l_474,(void*)0}}};
    union U0 **l_476 = (void*)0;
    int32_t l_477 = 5L;
    int32_t **l_481 = &p_1316->g_323[1];
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
            l_463[i][j] = (void*)0;
    }
    ++l_465;
    l_477 = (p_1316->g_352.s6 , ((safe_sub_func_int32_t_s_s((l_470 == ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0x38L, (-7L), 0x04L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_471.xxxxyxyxyyxyxxyy)).saf)), ((VECTOR(int8_t, 2))(0x19L, 0x01L)), 8L)).s4056204341154015)).s8 <= (p_1316->g_472 , ((p_1316->g_475[1] = &p_1316->g_390) != &p_1316->g_390))) >= p_1316->g_352.s6)), ((void*)0 == l_476))) ^ 0x1C43C892L));
    for (p_1316->g_381.f2 = (-6); (p_1316->g_381.f2 < 47); p_1316->g_381.f2 = safe_add_func_uint8_t_u_u(p_1316->g_381.f2, 7))
    { /* block id: 240 */
        int64_t l_480 = 0x6B88867232F6F129L;
        return l_480;
    }
    (*l_481) = &l_477;
    return p_1316->g_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_1316->g_2 p_1316->g_323
 * writes:
 */
int64_t * func_72(uint8_t  p_73, struct S4 * p_1316)
{ /* block id: 46 */
    int32_t *l_75 = (void*)0;
    int32_t *l_76[5][6][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint64_t l_77 = 0x6EA00FD19F2AA79DL;
    int64_t *l_325[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_325[i] = (void*)0;
    l_77--;
    if ((atomic_inc(&p_1316->g_atomic_input[96 * get_linear_group_id() + 74]) == 3))
    { /* block id: 49 */
        int32_t l_80 = 0x149CD5C7L;
        int32_t *l_317 = (void*)0;
        int32_t *l_318 = &l_80;
        int32_t *l_319[9][2][10] = {{{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80},{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80}},{{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80},{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80}},{{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80},{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80}},{{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80},{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80}},{{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80},{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80}},{{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80},{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80}},{{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80},{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80}},{{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80},{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80}},{{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80},{&l_80,(void*)0,&l_80,(void*)0,&l_80,&l_80,(void*)0,&l_80,&l_80,&l_80}}};
        int32_t *l_320 = &l_80;
        int i, j, k;
        for (l_80 = 7; (l_80 == 4); l_80--)
        { /* block id: 52 */
            uint32_t l_83 = 6UL;
            uint16_t l_84 = 0x47A0L;
            int8_t *l_86 = (void*)0;
            int8_t **l_85[2][6][2] = {{{&l_86,&l_86},{&l_86,&l_86},{&l_86,&l_86},{&l_86,&l_86},{&l_86,&l_86},{&l_86,&l_86}},{{&l_86,&l_86},{&l_86,&l_86},{&l_86,&l_86},{&l_86,&l_86},{&l_86,&l_86},{&l_86,&l_86}}};
            int8_t **l_87[4] = {&l_86,&l_86,&l_86,&l_86};
            int64_t l_88[9][8][3] = {{{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L}},{{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L}},{{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L}},{{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L}},{{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L}},{{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L}},{{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L}},{{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L}},{{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L},{7L,(-7L),3L}}};
            int32_t l_315 = 0x746F59F7L;
            int32_t *l_314[2];
            int32_t *l_316 = (void*)0;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_314[i] = &l_315;
            l_84 = l_83;
            l_87[3] = l_85[1][0][1];
            if (l_88[7][7][0])
            { /* block id: 55 */
                uint32_t l_89 = 0xAC0B4975L;
                int16_t l_159 = 0x0F8AL;
                VECTOR(int32_t, 4) l_179 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x47E96668L), 0x47E96668L);
                int32_t *l_178 = (void*)0;
                int32_t *l_180 = (void*)0;
                int i;
                if (l_89)
                { /* block id: 56 */
                    int64_t l_90 = 0x585D5F9AD4D96096L;
                    int64_t l_91 = (-3L);
                    int64_t l_92 = 0L;
                    uint16_t l_93 = 0xD1FFL;
                    uint16_t l_94 = 0x8635L;
                    VECTOR(int32_t, 2) l_108 = (VECTOR(int32_t, 2))(0x4A95D42BL, 0x22CCF1A2L);
                    int i;
                    l_91 = l_90;
                    l_93 = l_92;
                    if (l_94)
                    { /* block id: 59 */
                        int64_t l_97 = 0x1D6E29E21D3D7B66L;
                        int64_t *l_96[7] = {&l_97,&l_97,&l_97,&l_97,&l_97,&l_97,&l_97};
                        int64_t **l_95 = &l_96[3];
                        int i;
                        l_95 = (void*)0;
                    }
                    else
                    { /* block id: 61 */
                        int32_t l_98 = 0x6C017CA1L;
                        int8_t l_99 = (-1L);
                        uint32_t l_100 = 0x7667E6DEL;
                        uint16_t l_103 = 0x1B30L;
                        int32_t l_106[7][3] = {{4L,4L,1L},{4L,4L,1L},{4L,4L,1L},{4L,4L,1L},{4L,4L,1L},{4L,4L,1L},{4L,4L,1L}};
                        int32_t *l_105 = &l_106[2][0];
                        int32_t **l_104[8][3] = {{(void*)0,&l_105,&l_105},{(void*)0,&l_105,&l_105},{(void*)0,&l_105,&l_105},{(void*)0,&l_105,&l_105},{(void*)0,&l_105,&l_105},{(void*)0,&l_105,&l_105},{(void*)0,&l_105,&l_105},{(void*)0,&l_105,&l_105}};
                        int32_t **l_107 = &l_105;
                        int i, j;
                        l_99 = l_98;
                        ++l_100;
                        l_107 = (l_103 , l_104[1][1]);
                    }
                    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_108.yyyyxxyyxxyxyxxy)))))).s3)
                    { /* block id: 66 */
                        int16_t l_109[2][3][1] = {{{0x7027L},{0x7027L},{0x7027L}},{{0x7027L},{0x7027L},{0x7027L}}};
                        uint32_t l_110 = 0x5AC62AC5L;
                        int i, j, k;
                        ++l_110;
                    }
                    else
                    { /* block id: 68 */
                        int32_t l_114 = 0x5B025984L;
                        int32_t *l_113[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_113[i] = &l_114;
                        l_113[2] = l_113[2];
                    }
                }
                else
                { /* block id: 71 */
                    int8_t l_115 = 0L;
                    int16_t l_125 = 0x44E8L;
                    int16_t l_126 = (-1L);
                    int32_t l_127[5] = {6L,6L,6L,6L,6L};
                    uint64_t l_157 = 0x866361A52F8CB5B8L;
                    int16_t l_158[4][6] = {{0x7C7DL,0x7C7DL,0x7C7DL,0x7C7DL,0x7C7DL,0x7C7DL},{0x7C7DL,0x7C7DL,0x7C7DL,0x7C7DL,0x7C7DL,0x7C7DL},{0x7C7DL,0x7C7DL,0x7C7DL,0x7C7DL,0x7C7DL,0x7C7DL},{0x7C7DL,0x7C7DL,0x7C7DL,0x7C7DL,0x7C7DL,0x7C7DL}};
                    int i, j;
                    if (l_115)
                    { /* block id: 72 */
                        int16_t l_116[4][4] = {{0x3C71L,(-1L),0x3C71L,0x3C71L},{0x3C71L,(-1L),0x3C71L,0x3C71L},{0x3C71L,(-1L),0x3C71L,0x3C71L},{0x3C71L,(-1L),0x3C71L,0x3C71L}};
                        uint64_t l_117 = 0xB9A50AF277E6723FL;
                        int32_t *l_120[3];
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_120[i] = (void*)0;
                        --l_117;
                        l_120[2] = (void*)0;
                    }
                    else
                    { /* block id: 75 */
                        uint64_t l_121[2];
                        int32_t l_122 = (-4L);
                        int32_t *l_123 = &l_122;
                        int32_t *l_124[8] = {&l_122,&l_122,&l_122,&l_122,&l_122,&l_122,&l_122,&l_122};
                        int i;
                        for (i = 0; i < 2; i++)
                            l_121[i] = 0UL;
                        l_122 = l_121[0];
                        l_124[0] = (l_123 = (void*)0);
                    }
                    if ((l_125 , (l_127[1] ^= l_126)))
                    { /* block id: 81 */
                        uint16_t l_128[5] = {0x1E25L,0x1E25L,0x1E25L,0x1E25L,0x1E25L};
                        uint32_t l_129 = 4294967295UL;
                        VECTOR(uint32_t, 16) l_130 = (VECTOR(uint32_t, 16))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 4294967286UL), 4294967286UL), 4294967286UL, 4294967292UL, 4294967286UL, (VECTOR(uint32_t, 2))(4294967292UL, 4294967286UL), (VECTOR(uint32_t, 2))(4294967292UL, 4294967286UL), 4294967292UL, 4294967286UL, 4294967292UL, 4294967286UL);
                        VECTOR(int32_t, 8) l_131 = (VECTOR(int32_t, 8))(0x122D4D56L, (VECTOR(int32_t, 4))(0x122D4D56L, (VECTOR(int32_t, 2))(0x122D4D56L, 0x13F941D6L), 0x13F941D6L), 0x13F941D6L, 0x122D4D56L, 0x13F941D6L);
                        VECTOR(int32_t, 16) l_132 = (VECTOR(int32_t, 16))(0x05D3D94BL, (VECTOR(int32_t, 4))(0x05D3D94BL, (VECTOR(int32_t, 2))(0x05D3D94BL, 0x447B7A4DL), 0x447B7A4DL), 0x447B7A4DL, 0x05D3D94BL, 0x447B7A4DL, (VECTOR(int32_t, 2))(0x05D3D94BL, 0x447B7A4DL), (VECTOR(int32_t, 2))(0x05D3D94BL, 0x447B7A4DL), 0x05D3D94BL, 0x447B7A4DL, 0x05D3D94BL, 0x447B7A4DL);
                        union U0 l_134[1] = {{1L}};
                        union U0 *l_133 = &l_134[0];
                        union U0 *l_135 = &l_134[0];
                        union U0 *l_136 = &l_134[0];
                        union U0 *l_137 = &l_134[0];
                        int i;
                        l_128[4] &= (l_127[1] &= (-9L));
                        l_127[0] = l_129;
                        l_137 = (l_136 = (((VECTOR(uint32_t, 16))(l_130.s9114784355638069)).sd , (l_135 = (((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(l_131.s1276)).zxxzwzwx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_132.s68258ffc12b63eb4)).hi))))).s7 , l_133))));
                    }
                    else
                    { /* block id: 88 */
                        VECTOR(int16_t, 8) l_138 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x7B72L), 0x7B72L), 0x7B72L, (-1L), 0x7B72L);
                        VECTOR(uint16_t, 4) l_139 = (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0xEC82L), 0xEC82L);
                        int8_t l_140 = (-5L);
                        uint32_t l_141 = 8UL;
                        VECTOR(uint8_t, 4) l_142 = (VECTOR(uint8_t, 4))(0xB9L, (VECTOR(uint8_t, 2))(0xB9L, 0xE9L), 0xE9L);
                        VECTOR(uint8_t, 16) l_143 = (VECTOR(uint8_t, 16))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0x37L), 0x37L), 0x37L, 250UL, 0x37L, (VECTOR(uint8_t, 2))(250UL, 0x37L), (VECTOR(uint8_t, 2))(250UL, 0x37L), 250UL, 0x37L, 250UL, 0x37L);
                        int8_t l_144 = 1L;
                        uint32_t l_145 = 0x0FFF6AF4L;
                        VECTOR(uint8_t, 4) l_146 = (VECTOR(uint8_t, 4))(0x14L, (VECTOR(uint8_t, 2))(0x14L, 0x20L), 0x20L);
                        VECTOR(int32_t, 2) l_147 = (VECTOR(int32_t, 2))(0x0C0F79CBL, 0x7E52BEC0L);
                        uint32_t l_148 = 0x5721BE78L;
                        VECTOR(int16_t, 8) l_149 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x7834L), 0x7834L), 0x7834L, (-1L), 0x7834L);
                        int64_t l_150 = (-4L);
                        int32_t l_151 = 0x7AE64170L;
                        union U2 l_152 = {0xDCF2520FL};
                        uint64_t l_153 = 0x3CEDB52015B945AAL;
                        union U2 l_154 = {0xBA4CF426L};
                        int32_t l_155 = 0x56E04B88L;
                        int32_t l_156 = 0L;
                        int i;
                        l_127[3] ^= (((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(l_138.s2334)).lo, ((VECTOR(uint16_t, 8))(0xCFBFL, ((VECTOR(uint16_t, 4))(l_139.yxwy)), ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))((l_141 ^= (l_140 , 3UL)), 0xF3L, 0xCEL, 0x9EL)).wyxwxxxzyxzxzzwy)).s9e, ((VECTOR(uint8_t, 4))(1UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 4))(l_142.zyzw)).xxzxxwxwwzyyyxww, ((VECTOR(uint8_t, 16))(0xEEL, ((VECTOR(uint8_t, 4))(l_143.s7192)), 0x03L, l_144, 1UL, l_145, 0UL, 0x63L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_146.xx)).xxxyxxxx)).even)), 4UL))))).sfa)), 0x91L)).lo))), 0xBF4AL)).s14))).yxyy, ((VECTOR(int32_t, 16))(0x3C65306BL, 0x55E538C6L, 1L, (-1L), ((VECTOR(int32_t, 2))(l_147.yx)), l_148, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 8))(l_149.s13450336)).even, ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(l_150, (l_125 = (l_126 = ((l_151 , ((l_152 , l_153) , l_154)) , (-1L)))), 0x3164L, 0L)).even, ((VECTOR(int16_t, 2))(4L))))).xyyy)).odd, ((VECTOR(int16_t, 2))((-9L)))))).xyxy, ((VECTOR(int16_t, 4))((-2L)))))).zwzxyxwwwzxwywzy)).sb0)).xyyyyyyx)).s3016544151116643, ((VECTOR(int16_t, 16))((-5L)))))).s05, ((VECTOR(uint16_t, 2))(0x0458L))))), ((VECTOR(int32_t, 2))(0x02243241L))))), ((VECTOR(int32_t, 4))((-6L))), l_155, 0L, 7L)).s47f8))).odd, ((VECTOR(int32_t, 2))(1L))))).even , l_156);
                    }
                    l_158[2][5] = l_157;
                }
                if (l_159)
                { /* block id: 96 */
                    int32_t l_160[10][3] = {{0x1BDAA67BL,(-1L),0x1BDAA67BL},{0x1BDAA67BL,(-1L),0x1BDAA67BL},{0x1BDAA67BL,(-1L),0x1BDAA67BL},{0x1BDAA67BL,(-1L),0x1BDAA67BL},{0x1BDAA67BL,(-1L),0x1BDAA67BL},{0x1BDAA67BL,(-1L),0x1BDAA67BL},{0x1BDAA67BL,(-1L),0x1BDAA67BL},{0x1BDAA67BL,(-1L),0x1BDAA67BL},{0x1BDAA67BL,(-1L),0x1BDAA67BL},{0x1BDAA67BL,(-1L),0x1BDAA67BL}};
                    int32_t l_161 = 0x62E3C097L;
                    int32_t l_162[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_162[i] = 0x70FBA44BL;
                    l_162[2] = (l_161 |= l_160[5][1]);
                }
                else
                { /* block id: 99 */
                    VECTOR(int32_t, 2) l_163 = (VECTOR(int32_t, 2))((-1L), 1L);
                    uint32_t l_164 = 0x612C4D34L;
                    int i;
                    l_164 |= ((VECTOR(int32_t, 4))(l_163.xxyx)).w;
                    for (l_163.y = 0; (l_163.y == (-14)); l_163.y--)
                    { /* block id: 103 */
                        int32_t l_169 = 0x209A28C4L;
                        int32_t *l_168 = &l_169;
                        int32_t **l_167 = &l_168;
                        int32_t **l_170 = &l_168;
                        uint16_t l_171 = 65535UL;
                        int32_t l_174 = 0x3D86430DL;
                        uint8_t l_175 = 250UL;
                        l_170 = l_167;
                        ++l_171;
                        (**l_170) = (l_174 = ((VECTOR(int32_t, 4))(5L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x45C37739L, 1L)))), 0x2A5A2039L)).z);
                        --l_175;
                    }
                }
                l_180 = l_178;
                for (l_89 = (-25); (l_89 > 50); l_89++)
                { /* block id: 114 */
                    uint64_t l_183 = 1UL;
                    int8_t l_184 = 0x61L;
                    VECTOR(int16_t, 8) l_185 = (VECTOR(int16_t, 8))(0x7484L, (VECTOR(int16_t, 4))(0x7484L, (VECTOR(int16_t, 2))(0x7484L, 0x758BL), 0x758BL), 0x758BL, 0x7484L, 0x758BL);
                    VECTOR(int16_t, 8) l_186 = (VECTOR(int16_t, 8))(0x6042L, (VECTOR(int16_t, 4))(0x6042L, (VECTOR(int16_t, 2))(0x6042L, 1L), 1L), 1L, 0x6042L, 1L);
                    VECTOR(int16_t, 8) l_187 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x3876L), 0x3876L), 0x3876L, (-1L), 0x3876L);
                    VECTOR(int16_t, 2) l_188 = (VECTOR(int16_t, 2))(0x18FDL, 0x57DAL);
                    VECTOR(int16_t, 2) l_189 = (VECTOR(int16_t, 2))(5L, 0L);
                    VECTOR(int16_t, 8) l_190 = (VECTOR(int16_t, 8))(0x0492L, (VECTOR(int16_t, 4))(0x0492L, (VECTOR(int16_t, 2))(0x0492L, 1L), 1L), 1L, 0x0492L, 1L);
                    uint32_t l_191 = 0x7D963FE5L;
                    int32_t l_192[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    VECTOR(int8_t, 8) l_193 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x7FL), 0x7FL), 0x7FL, 0L, 0x7FL);
                    VECTOR(int8_t, 16) l_194 = (VECTOR(int8_t, 16))(0x41L, (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, 0x1EL), 0x1EL), 0x1EL, 0x41L, 0x1EL, (VECTOR(int8_t, 2))(0x41L, 0x1EL), (VECTOR(int8_t, 2))(0x41L, 0x1EL), 0x41L, 0x1EL, 0x41L, 0x1EL);
                    VECTOR(int8_t, 4) l_195 = (VECTOR(int8_t, 4))(0x38L, (VECTOR(int8_t, 2))(0x38L, (-1L)), (-1L));
                    VECTOR(int8_t, 4) l_196 = (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), (-9L)), (-9L));
                    uint32_t l_197 = 0x7354803BL;
                    int32_t l_198 = 0x4F363A3BL;
                    VECTOR(int8_t, 16) l_199 = (VECTOR(int8_t, 16))(0x56L, (VECTOR(int8_t, 4))(0x56L, (VECTOR(int8_t, 2))(0x56L, (-1L)), (-1L)), (-1L), 0x56L, (-1L), (VECTOR(int8_t, 2))(0x56L, (-1L)), (VECTOR(int8_t, 2))(0x56L, (-1L)), 0x56L, (-1L), 0x56L, (-1L));
                    VECTOR(int8_t, 2) l_200 = (VECTOR(int8_t, 2))(1L, (-1L));
                    VECTOR(int8_t, 4) l_201 = (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, (-6L)), (-6L));
                    VECTOR(int8_t, 4) l_202 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 2L), 2L);
                    VECTOR(int8_t, 2) l_203 = (VECTOR(int8_t, 2))(0L, 0L);
                    uint32_t l_204 = 0UL;
                    uint32_t l_205[9][1] = {{0xB83DA78BL},{0xB83DA78BL},{0xB83DA78BL},{0xB83DA78BL},{0xB83DA78BL},{0xB83DA78BL},{0xB83DA78BL},{0xB83DA78BL},{0xB83DA78BL}};
                    int16_t l_206 = 0x5E32L;
                    int8_t l_207 = (-4L);
                    int32_t l_208 = 0x75524799L;
                    int32_t l_209 = 0x6847FF5AL;
                    uint8_t l_210[1];
                    uint32_t l_211 = 4294967287UL;
                    uint16_t l_212 = 1UL;
                    int32_t l_213 = 4L;
                    uint32_t l_214 = 0x7F55DE8AL;
                    int32_t l_215 = 0x1BAB79FDL;
                    uint32_t l_216 = 0xC5E8C4E4L;
                    VECTOR(uint32_t, 4) l_217 = (VECTOR(uint32_t, 4))(0x4640E203L, (VECTOR(uint32_t, 2))(0x4640E203L, 0UL), 0UL);
                    uint32_t l_218[2][3][3] = {{{0xCEE5B47AL,0x792C0A51L,0xCEE5B47AL},{0xCEE5B47AL,0x792C0A51L,0xCEE5B47AL},{0xCEE5B47AL,0x792C0A51L,0xCEE5B47AL}},{{0xCEE5B47AL,0x792C0A51L,0xCEE5B47AL},{0xCEE5B47AL,0x792C0A51L,0xCEE5B47AL},{0xCEE5B47AL,0x792C0A51L,0xCEE5B47AL}}};
                    int16_t l_219 = (-1L);
                    uint32_t l_220[7] = {1UL,0x8CB42AACL,1UL,1UL,0x8CB42AACL,1UL,1UL};
                    uint32_t l_242 = 0UL;
                    int32_t l_264 = (-8L);
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_210[i] = 0x55L;
                    if ((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))((l_184 = (l_159 = l_183)), ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(l_185.s47676467)).s35, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 4))(l_186.s5573)).wywzywwwwzzwywwy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_187.s71)))), 0x0FF8L, 0x1FB5L)).xwyzzxwxyxyyxwwx, ((VECTOR(int16_t, 2))(l_188.xy)).xxyxxxxyxyyxxyxx, ((VECTOR(int16_t, 2))(0x1931L, (-1L))).yxxyxxxxyxyyyyxy))).sac96)).wzxwxxwzzwxzzxzz))))).s8f49)).even))), ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(l_189.xx)), ((VECTOR(int16_t, 4))(0x5DB3L, ((VECTOR(int16_t, 2))(l_190.s37)), 0x5FCCL)).hi, ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 16))((l_192[5] = l_191), ((VECTOR(int8_t, 8))(l_193.s25366711)), 0x13L, ((VECTOR(int8_t, 2))(0x3DL, 1L)), 0x21L, ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_194.s83ef5591)).even)).yzzzwyyx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 2))(6L, 0x14L)).yyxxyyyx, ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(l_195.xwwx)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(0x35L, 0x76L)), ((VECTOR(int8_t, 4))(0x62L, 0x34L, 0x5FL, 0x5BL)).odd))), ((VECTOR(int8_t, 4))(l_196.xxxw)), 0x60L, ((VECTOR(int8_t, 2))(0x0AL, 0L)), ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))(l_197, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(9L, 0x0CL, 0x62L, 0x51L)).wzzwxzxxzzxxxwyz)).s2, l_198, ((VECTOR(int8_t, 2))(l_199.s20)), ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 2))(0L, 0x77L)).yxxxyxxxyxxxxxyy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x75L, 1L)))).xxyxyyxxyyyyyxxx, ((VECTOR(int8_t, 8))(l_200.yxyyxxxy)).s4570176071375131))).s2f, ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(l_201.ww)).yxxyxyxy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_202.zyxxyyzxywyyzzyy)).s46)).yxyyyyxx, ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 16))(l_203.xyxxxyxxxxxxyyyy)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x66L, 0x44L, 0x07L, 0x1DL, (l_204 = 0x43L), ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((l_194.s6 = (l_184 |= l_205[8][0])), ((VECTOR(int8_t, 2))(1L)), 0x18L)).yyxzwyzz)).s3042275250667463)).s9d6a, ((VECTOR(int8_t, 4))(0x6EL))))), 0L, l_206, ((VECTOR(int8_t, 4))(0x47L)), (-1L))))), (int8_t)0x28L))).sd, 0x75L, l_207, l_208, ((VECTOR(int8_t, 2))(0L)), l_209, 1L, ((VECTOR(int8_t, 2))(0x33L)), l_210[0], l_211, ((VECTOR(int8_t, 4))(0x76L)))).s4a)).xyxxyyyyyyxyyyyx))).s1840, ((VECTOR(int8_t, 4))(0x08L)), ((VECTOR(int8_t, 4))(0x37L))))).odd, ((VECTOR(int8_t, 2))((-6L)))))).xxxxyyyx))).s11))), (-1L))).s61, ((VECTOR(int8_t, 2))(1L))))), ((VECTOR(int8_t, 2))(0x6AL)), ((VECTOR(int8_t, 2))(0x22L)), (-8L), (-8L))).s7704407365252247)).sc1, ((VECTOR(int8_t, 2))(0x34L))))), ((VECTOR(int8_t, 2))(0x0EL)), l_212, 0x37L, 0x59L)).sbf79))))).zxyywywxzzyyzxxz, ((VECTOR(int8_t, 16))(0x6DL))))).lo, ((VECTOR(int8_t, 8))((-3L)))))).s2676063316741064, (int8_t)l_213))), (int8_t)l_214, (int8_t)0x6EL))).s83)).xyyy))), (-1L), 1L, 0L, 0x0FL)), ((VECTOR(int8_t, 8))(4L)))).odd, ((VECTOR(int8_t, 8))(9L))))).s13, (int8_t)l_215, (int8_t)l_216))), 0x64L)).sfb6f, ((VECTOR(uint8_t, 4))(0xA1L))))).odd))), l_217.x, l_218[1][1][0], 0x3A91L, l_219, (-2L), 1L, 6L, 0x64B2L, 0x41A9L, 1L, 1L)), ((VECTOR(uint16_t, 16))(0x1B22L))))).s7e)).lo , l_220[2]))
                    { /* block id: 121 */
                        uint32_t l_221[4] = {0xADCB5EDFL,0xADCB5EDFL,0xADCB5EDFL,0xADCB5EDFL};
                        int32_t l_222 = 0x0D723600L;
                        uint8_t l_223 = 0x51L;
                        int8_t l_224 = 1L;
                        int32_t l_225 = 8L;
                        int64_t l_226 = 6L;
                        int32_t l_227 = (-7L);
                        int16_t l_228 = 1L;
                        int16_t l_229 = 0x0C08L;
                        int32_t l_230 = (-1L);
                        int32_t l_231 = 3L;
                        int64_t l_232[10] = {0x33BDA3BE19D1D845L,0x575E7D12CE1CFEF0L,(-4L),0x575E7D12CE1CFEF0L,0x33BDA3BE19D1D845L,0x33BDA3BE19D1D845L,0x575E7D12CE1CFEF0L,(-4L),0x575E7D12CE1CFEF0L,0x33BDA3BE19D1D845L};
                        uint32_t l_233 = 0xEF1719A4L;
                        uint32_t l_234 = 2UL;
                        int i;
                        l_179.z &= ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))((l_221[3] , (l_233 ^= ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(0x6C3AEF19L, 0L)).xyyyxyxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x1BA9FA5BL, l_222, (l_209 = (l_223 |= 0x029F15E4L)), (l_225 = l_224), 8L, l_226, 0x0B653837L, 1L)).hi)).hi, ((VECTOR(int32_t, 16))((l_227 , ((l_231 ^= (l_230 = (l_229 &= l_228))) , 2L)), ((VECTOR(int32_t, 4))(0x6161DA27L)), 0x33B70A78L, ((VECTOR(int32_t, 4))(0L)), l_232[8], 0L, 1L, 3L, 0x1A51A2D8L, 0x095A344AL)).s1a))), ((VECTOR(int32_t, 4))(0L)), 0x4355310FL, (-1L)))))).s5)), ((VECTOR(int32_t, 2))(3L)), 0x5786877DL))))).even, ((VECTOR(int32_t, 2))(1L))))).xxxy, (int32_t)l_234))).x;
                    }
                    else
                    { /* block id: 130 */
                        uint64_t l_235[4];
                        union U0 l_240 = {0x1A04L};
                        union U0 *l_239 = &l_240;
                        union U0 **l_238 = &l_239;
                        union U0 **l_241 = &l_239;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_235[i] = 9UL;
                        --l_235[1];
                        l_241 = l_238;
                    }
                    if ((l_242 , 0L))
                    { /* block id: 134 */
                        int64_t l_243 = (-6L);
                        int64_t l_244 = 0x3692279F36ABCF7DL;
                        int32_t l_245 = 0x3C30839EL;
                        int8_t l_246 = 0x08L;
                        int32_t l_247 = 1L;
                        uint32_t l_248 = 0xFC02F5E8L;
                        l_248++;
                    }
                    else
                    { /* block id: 136 */
                        uint16_t l_251 = 0UL;
                        VECTOR(int32_t, 2) l_252 = (VECTOR(int32_t, 2))(0x191B9CB3L, 0x0F5452E4L);
                        int16_t l_253[1][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                        union U0 l_255[2] = {{0L},{0L}};
                        union U0 *l_254 = &l_255[1];
                        union U0 *l_256 = (void*)0;
                        union U0 *l_257 = &l_255[0];
                        union U0 *l_258[4][10][2] = {{{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]}},{{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]}},{{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]}},{{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]},{&l_255[0],&l_255[0]}}};
                        union U0 *l_259 = &l_255[0];
                        int32_t l_260 = 0x79585D14L;
                        uint32_t l_261 = 0x09F4B995L;
                        int i, j, k;
                        l_179.w |= l_251;
                        l_259 = (l_258[2][6][1] = (l_254 = (l_257 = (l_256 = (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_252.yxyxxxxx)).s07)).hi, l_253[0][3], 0x37212277L, 0x07928398L)).y , l_254)))));
                        ++l_261;
                    }
                    if (l_264)
                    { /* block id: 145 */
                        uint64_t l_265 = 0x68CAE07E1C385CA1L;
                        l_208 ^= (l_179.x = l_265);
                    }
                    else
                    { /* block id: 148 */
                        int32_t l_267 = (-1L);
                        int32_t *l_266[6][9] = {{&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267},{&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267},{&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267},{&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267},{&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267},{&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267}};
                        int32_t *l_268 = &l_267;
                        int32_t **l_269 = &l_268;
                        VECTOR(uint8_t, 4) l_270 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x75L), 0x75L);
                        int32_t l_271 = (-7L);
                        int32_t l_272 = 0x1AA43047L;
                        int i, j;
                        l_178 = l_266[1][4];
                        l_180 = l_268;
                        l_269 = l_269;
                        l_272 = ((l_210[0] = ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_270.yyzyzyzzxywxxwwy)).even)).s1) , ((*l_180) &= l_271));
                    }
                }
            }
            else
            { /* block id: 157 */
                int32_t l_273 = 0x597AFF50L;
                for (l_273 = 0; (l_273 >= 0); l_273++)
                { /* block id: 160 */
                    uint8_t l_276 = 9UL;
                    uint16_t l_277 = 1UL;
                    if ((l_277 = (l_276 &= 0x62FFBBDEL)))
                    { /* block id: 163 */
                        union U2 l_278 = {4294967288UL};
                        int32_t l_280 = 0x5A454E62L;
                        int32_t *l_279 = &l_280;
                        VECTOR(int32_t, 8) l_281 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2D6932EEL), 0x2D6932EEL), 0x2D6932EEL, 1L, 0x2D6932EEL);
                        VECTOR(uint16_t, 4) l_282 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL);
                        int32_t l_283[10][7] = {{0x6582651CL,(-1L),0x60DA8BD9L,(-1L),0x6582651CL,0x6582651CL,(-1L)},{0x6582651CL,(-1L),0x60DA8BD9L,(-1L),0x6582651CL,0x6582651CL,(-1L)},{0x6582651CL,(-1L),0x60DA8BD9L,(-1L),0x6582651CL,0x6582651CL,(-1L)},{0x6582651CL,(-1L),0x60DA8BD9L,(-1L),0x6582651CL,0x6582651CL,(-1L)},{0x6582651CL,(-1L),0x60DA8BD9L,(-1L),0x6582651CL,0x6582651CL,(-1L)},{0x6582651CL,(-1L),0x60DA8BD9L,(-1L),0x6582651CL,0x6582651CL,(-1L)},{0x6582651CL,(-1L),0x60DA8BD9L,(-1L),0x6582651CL,0x6582651CL,(-1L)},{0x6582651CL,(-1L),0x60DA8BD9L,(-1L),0x6582651CL,0x6582651CL,(-1L)},{0x6582651CL,(-1L),0x60DA8BD9L,(-1L),0x6582651CL,0x6582651CL,(-1L)},{0x6582651CL,(-1L),0x60DA8BD9L,(-1L),0x6582651CL,0x6582651CL,(-1L)}};
                        uint32_t l_284[6][10] = {{0x006B5090L,4294967295UL,4UL,4294967295UL,0x006B5090L,0x006B5090L,4294967295UL,4UL,4294967295UL,0x006B5090L},{0x006B5090L,4294967295UL,4UL,4294967295UL,0x006B5090L,0x006B5090L,4294967295UL,4UL,4294967295UL,0x006B5090L},{0x006B5090L,4294967295UL,4UL,4294967295UL,0x006B5090L,0x006B5090L,4294967295UL,4UL,4294967295UL,0x006B5090L},{0x006B5090L,4294967295UL,4UL,4294967295UL,0x006B5090L,0x006B5090L,4294967295UL,4UL,4294967295UL,0x006B5090L},{0x006B5090L,4294967295UL,4UL,4294967295UL,0x006B5090L,0x006B5090L,4294967295UL,4UL,4294967295UL,0x006B5090L},{0x006B5090L,4294967295UL,4UL,4294967295UL,0x006B5090L,0x006B5090L,4294967295UL,4UL,4294967295UL,0x006B5090L}};
                        VECTOR(int8_t, 2) l_287 = (VECTOR(int8_t, 2))(3L, 0L);
                        uint32_t l_288 = 0xA1526149L;
                        VECTOR(int8_t, 16) l_289 = (VECTOR(int8_t, 16))(0x0DL, (VECTOR(int8_t, 4))(0x0DL, (VECTOR(int8_t, 2))(0x0DL, 2L), 2L), 2L, 0x0DL, 2L, (VECTOR(int8_t, 2))(0x0DL, 2L), (VECTOR(int8_t, 2))(0x0DL, 2L), 0x0DL, 2L, 0x0DL, 2L);
                        VECTOR(int8_t, 2) l_290 = (VECTOR(int8_t, 2))(0L, 0x1DL);
                        VECTOR(int8_t, 16) l_291 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L), (VECTOR(int8_t, 2))((-1L), (-3L)), (VECTOR(int8_t, 2))((-1L), (-3L)), (-1L), (-3L), (-1L), (-3L));
                        VECTOR(int8_t, 2) l_292 = (VECTOR(int8_t, 2))(0x25L, 0x4AL);
                        VECTOR(int8_t, 16) l_293 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x0BL), 0x0BL), 0x0BL, 1L, 0x0BL, (VECTOR(int8_t, 2))(1L, 0x0BL), (VECTOR(int8_t, 2))(1L, 0x0BL), 1L, 0x0BL, 1L, 0x0BL);
                        VECTOR(int8_t, 4) l_294 = (VECTOR(int8_t, 4))(0x0FL, (VECTOR(int8_t, 2))(0x0FL, (-1L)), (-1L));
                        VECTOR(int8_t, 16) l_295 = (VECTOR(int8_t, 16))(0x1AL, (VECTOR(int8_t, 4))(0x1AL, (VECTOR(int8_t, 2))(0x1AL, 1L), 1L), 1L, 0x1AL, 1L, (VECTOR(int8_t, 2))(0x1AL, 1L), (VECTOR(int8_t, 2))(0x1AL, 1L), 0x1AL, 1L, 0x1AL, 1L);
                        int64_t l_296 = 0x4A294E479D4E9384L;
                        VECTOR(int8_t, 4) l_297 = (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 2L), 2L);
                        VECTOR(int8_t, 8) l_298 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x1DL), 0x1DL), 0x1DL, (-1L), 0x1DL);
                        int32_t l_299 = 1L;
                        int32_t l_300 = 0x1AE06442L;
                        int64_t l_301 = 0x17A130FDB2BAECEEL;
                        VECTOR(int8_t, 4) l_302 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-7L)), (-7L));
                        VECTOR(int8_t, 2) l_303 = (VECTOR(int8_t, 2))(0x6EL, 0L);
                        int16_t l_304 = 0x58F9L;
                        int8_t l_305 = (-1L);
                        uint32_t l_306[9][9] = {{4294967290UL,4294967295UL,4294967295UL,4294967290UL,0x322FB90FL,4UL,4294967295UL,0xC96593BAL,0x311864CAL},{4294967290UL,4294967295UL,4294967295UL,4294967290UL,0x322FB90FL,4UL,4294967295UL,0xC96593BAL,0x311864CAL},{4294967290UL,4294967295UL,4294967295UL,4294967290UL,0x322FB90FL,4UL,4294967295UL,0xC96593BAL,0x311864CAL},{4294967290UL,4294967295UL,4294967295UL,4294967290UL,0x322FB90FL,4UL,4294967295UL,0xC96593BAL,0x311864CAL},{4294967290UL,4294967295UL,4294967295UL,4294967290UL,0x322FB90FL,4UL,4294967295UL,0xC96593BAL,0x311864CAL},{4294967290UL,4294967295UL,4294967295UL,4294967290UL,0x322FB90FL,4UL,4294967295UL,0xC96593BAL,0x311864CAL},{4294967290UL,4294967295UL,4294967295UL,4294967290UL,0x322FB90FL,4UL,4294967295UL,0xC96593BAL,0x311864CAL},{4294967290UL,4294967295UL,4294967295UL,4294967290UL,0x322FB90FL,4UL,4294967295UL,0xC96593BAL,0x311864CAL},{4294967290UL,4294967295UL,4294967295UL,4294967290UL,0x322FB90FL,4UL,4294967295UL,0xC96593BAL,0x311864CAL}};
                        int8_t l_307 = 0x5EL;
                        uint32_t l_308 = 6UL;
                        uint32_t l_309 = 4294967295UL;
                        int64_t l_310 = 1L;
                        int i, j;
                        l_279 = (l_278 , l_279);
                        l_282.x &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_281.s2775601626771317)).seabb)).z;
                        l_284[4][6]--;
                        (*l_279) ^= ((l_309 &= (((VECTOR(int8_t, 8))(1L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_287.yyyy)))), (l_288 , (l_294.w = ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 2))(0x5FL, 0x26L)).xxyyyxxxxyxyyyyy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 8))(l_289.s5a3c4206)).even, ((VECTOR(int8_t, 8))(l_290.xyxxyyxy)).even))), 7L, ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_291.s52eb8251b02fe9bc)).hi)).s44, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_292.yyyxyxyy)).s02)).yyxxxyyx)).s73, ((VECTOR(int8_t, 2))(l_293.sc2)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x42L, (-1L))), 1L, 0x49L)).even)))))), 0x6BL)).s15, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-1L), 0x38L)))), ((VECTOR(int8_t, 4))(l_294.zxyw)).odd))), 0x3BL, 1L)).ywwyxwxxywyxxwyy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(l_295.s0759589a)).s7344420233637236))).s51)).yyyyyxxyyyxxyyyy))))).sb0, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-10L), 0L)).xyxx)).lo))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((-1L), 0x17L, (l_296 , ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(l_297.zzzwyzwwxzwzyzwz)).even, ((VECTOR(int8_t, 8))((l_297.z = 0x3AL), ((VECTOR(int8_t, 2))(l_298.s71)).hi, l_299, (l_300 , l_301), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_302.xywwxywxwwywxzzy)).s69)).xyyx))))))).s67, ((VECTOR(int8_t, 8))(l_303.xxyxxyyx)).s51))).yxxyyxyxyxxyyyyx, ((VECTOR(int8_t, 2))(0x68L, 7L)).xxxyyyyxyyyxyyyx))))).sa), 0x18L, ((VECTOR(int8_t, 4))((((l_305 = l_304) , (-4L)) , 0x31L), l_306[8][2], 0x6AL, 0x31L)))).s3100163536354502)).s62d9))).zzzxxwzxzzzywyyy)), ((VECTOR(int8_t, 16))(0x13L))))))).sb6))).yyxy)).zzwwzxxw, (int8_t)l_307))).s7227543353510231))))).sa0, ((VECTOR(int8_t, 2))(1L))))).even)), 7L, 0x4FL)).s0 , l_308)) , l_310);
                    }
                    else
                    { /* block id: 172 */
                        int32_t l_312 = 0x7F009544L;
                        int32_t *l_311 = &l_312;
                        int32_t *l_313 = (void*)0;
                        l_313 = l_311;
                    }
                }
            }
            l_316 = l_314[0];
        }
        l_320 = (l_319[2][1][2] = (l_318 = l_317));
        unsigned int result = 0;
        result += l_80;
        atomic_add(&p_1316->g_special_values[96 * get_linear_group_id() + 74], result);
    }
    else
    { /* block id: 182 */
        (1 + 1);
    }
    for (p_73 = 0; (p_73 != 42); p_73 = safe_add_func_uint8_t_u_u(p_73, 9))
    { /* block id: 187 */
        int32_t **l_324 = &l_75;
        int i, j;
        if (p_73)
            break;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1316->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 25)), permutations[(safe_mod_func_uint32_t_u_u(((p_1316->g_2.y , p_1316->g_323[1]) != ((*l_324) = l_75)), 10))][(safe_mod_func_uint32_t_u_u(p_1316->tid, 25))]));
    }
    return l_325[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1316->g_323
 * writes:
 */
int64_t * func_328(int64_t  p_329, uint64_t  p_330, int64_t * p_331, struct S4 * p_1316)
{ /* block id: 230 */
    uint16_t l_458 = 0x9C13L;
    int32_t *l_460 = (void*)0;
    int32_t **l_459 = &l_460;
    int32_t ***l_461 = &l_459;
    int64_t *l_462[3];
    int i;
    for (i = 0; i < 3; i++)
        l_462[i] = &p_1316->g_360;
    (*l_459) = func_35((l_458 <= l_458), p_1316->g_323[2], p_1316);
    (*l_461) = &l_460;
    return l_462[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1316->g_390 p_1316->g_2 p_1316->g_352 p_1316->g_360 p_1316->g_323
 * writes: p_1316->g_390 p_1316->g_418 p_1316->g_360
 */
int64_t  func_333(uint64_t  p_334, uint32_t  p_335, uint16_t  p_336, uint64_t  p_337, int8_t  p_338, struct S4 * p_1316)
{ /* block id: 198 */
    int64_t l_415 = 0x417AEE23EC0D33F4L;
    int32_t l_438 = 0x2B0E710EL;
    int32_t l_439 = 3L;
    int32_t l_440 = 0L;
    int32_t l_441[8][1][2] = {{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}}};
    int32_t *l_448 = &l_439;
    int32_t *l_449 = (void*)0;
    int32_t *l_450[2];
    int8_t l_451 = 0L;
    int32_t l_452 = 0x0E68A2BBL;
    uint8_t l_453 = 0xDDL;
    uint8_t l_456 = 253UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_450[i] = &l_441[3][0][1];
    for (p_335 = 24; (p_335 > 29); ++p_335)
    { /* block id: 201 */
        VECTOR(uint32_t, 16) l_412 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967286UL), 4294967286UL), 4294967286UL, 0UL, 4294967286UL, (VECTOR(uint32_t, 2))(0UL, 4294967286UL), (VECTOR(uint32_t, 2))(0UL, 4294967286UL), 0UL, 4294967286UL, 0UL, 4294967286UL);
        int32_t l_429 = 0x4E6BDEFFL;
        int32_t *l_436 = (void*)0;
        int32_t *l_437[6];
        uint32_t l_442[1];
        int i;
        for (i = 0; i < 6; i++)
            l_437[i] = &l_429;
        for (i = 0; i < 1; i++)
            l_442[i] = 0x5C3B75EFL;
        for (p_338 = (-9); (p_338 < 12); p_338 = safe_add_func_int16_t_s_s(p_338, 9))
        { /* block id: 204 */
            union U3 *l_366[1][10][6] = {{{&p_1316->g_376,&p_1316->g_386,&p_1316->g_378,(void*)0,&p_1316->g_372[3][1][0],(void*)0},{&p_1316->g_376,&p_1316->g_386,&p_1316->g_378,(void*)0,&p_1316->g_372[3][1][0],(void*)0},{&p_1316->g_376,&p_1316->g_386,&p_1316->g_378,(void*)0,&p_1316->g_372[3][1][0],(void*)0},{&p_1316->g_376,&p_1316->g_386,&p_1316->g_378,(void*)0,&p_1316->g_372[3][1][0],(void*)0},{&p_1316->g_376,&p_1316->g_386,&p_1316->g_378,(void*)0,&p_1316->g_372[3][1][0],(void*)0},{&p_1316->g_376,&p_1316->g_386,&p_1316->g_378,(void*)0,&p_1316->g_372[3][1][0],(void*)0},{&p_1316->g_376,&p_1316->g_386,&p_1316->g_378,(void*)0,&p_1316->g_372[3][1][0],(void*)0},{&p_1316->g_376,&p_1316->g_386,&p_1316->g_378,(void*)0,&p_1316->g_372[3][1][0],(void*)0},{&p_1316->g_376,&p_1316->g_386,&p_1316->g_378,(void*)0,&p_1316->g_372[3][1][0],(void*)0},{&p_1316->g_376,&p_1316->g_386,&p_1316->g_378,(void*)0,&p_1316->g_372[3][1][0],(void*)0}}};
            int32_t l_394 = 0x61E32194L;
            union U3 **l_407 = &l_366[0][2][3];
            uint8_t *l_416 = (void*)0;
            uint8_t *l_417 = &p_1316->g_418;
            int16_t l_419 = 9L;
            int32_t *l_420 = (void*)0;
            int32_t *l_421 = (void*)0;
            int32_t *l_422 = (void*)0;
            int32_t *l_423 = (void*)0;
            int32_t *l_424 = (void*)0;
            int32_t *l_425 = (void*)0;
            int32_t *l_426 = (void*)0;
            int32_t *l_427 = (void*)0;
            int32_t *l_428[3][1];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_428[i][j] = (void*)0;
            }
            p_1316->g_390 = l_366[0][9][3];
            l_429 |= ((((safe_add_func_uint32_t_u_u((((l_394 >= (~((((safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0x3EL, (((safe_mul_func_int8_t_s_s((-10L), (((safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(0x5249L, (((*l_407) = p_1316->g_390) != (void*)0))) < (((safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_412.sb4066393b35133e9)).s9c))))).hi, ((((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL)).yxxy)).y != (FAKE_DIVERGE(p_1316->group_0_offset, get_group_id(0), 10) , (((((safe_rshift_func_uint8_t_u_s(((*l_417) = l_415), l_415)) || l_412.s1) ^ p_338) , FAKE_DIVERGE(p_1316->global_1_offset, get_global_id(1), 10)) ^ 0x4DL))) <= p_1316->g_2.y) && 0x54L) , p_334))), 5UL)) | l_394) , l_412.s2)), 3)) != FAKE_DIVERGE(p_1316->group_1_offset, get_group_id(1), 10)) == 0x49E1L))) != GROUP_DIVERGE(1, 1)) & GROUP_DIVERGE(2, 1)))), p_1316->g_352.s7)), 6)) == FAKE_DIVERGE(p_1316->local_0_offset, get_local_id(0), 10)) > l_394) && 0xBBA304D3L))) > p_337) < p_336), l_412.s6)) < l_394) & l_419) , (-1L));
            if ((atomic_inc(&p_1316->g_atomic_input[96 * get_linear_group_id() + 81]) == 9))
            { /* block id: 210 */
                int32_t l_430 = 0x43895015L;
                for (l_430 = 0; (l_430 < 29); l_430++)
                { /* block id: 213 */
                    int32_t l_433 = 0x153BD710L;
                    int32_t l_434[10][3][8] = {{{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L}},{{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L}},{{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L}},{{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L}},{{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L}},{{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L}},{{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L}},{{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L}},{{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L}},{{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L},{0x70661C48L,4L,0x4C8EF0D5L,0x7194AE8BL,8L,(-1L),0x15501400L,0x6EAC8E63L}}};
                    uint32_t l_435[4];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_435[i] = 4294967292UL;
                    l_435[3] = (l_434[0][1][3] = l_433);
                }
                unsigned int result = 0;
                result += l_430;
                atomic_add(&p_1316->g_special_values[96 * get_linear_group_id() + 81], result);
            }
            else
            { /* block id: 217 */
                (1 + 1);
            }
        }
        --l_442[0];
        for (p_1316->g_360 = 3; (p_1316->g_360 <= (-30)); p_1316->g_360--)
        { /* block id: 224 */
            int32_t **l_447 = &l_437[4];
            (*l_447) = p_1316->g_323[2];
        }
    }
    --l_453;
    return l_456;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[96];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 96; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[96];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 96; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[25];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 25; i++)
            l_comm_values[i] = 1;
    struct S4 c_1317;
    struct S4* p_1316 = &c_1317;
    struct S4 c_1318 = {
        (VECTOR(int64_t, 2))(1L, (-3L)), // p_1316->g_2
        (VECTOR(int64_t, 4))(0x621AFA9B64FDA7EFL, (VECTOR(int64_t, 2))(0x621AFA9B64FDA7EFL, 0x070A3267E6AA1654L), 0x070A3267E6AA1654L), // p_1316->g_3
        (VECTOR(uint8_t, 16))(0x5BL, (VECTOR(uint8_t, 4))(0x5BL, (VECTOR(uint8_t, 2))(0x5BL, 0x47L), 0x47L), 0x47L, 0x5BL, 0x47L, (VECTOR(uint8_t, 2))(0x5BL, 0x47L), (VECTOR(uint8_t, 2))(0x5BL, 0x47L), 0x5BL, 0x47L, 0x5BL, 0x47L), // p_1316->g_4
        0x40L, // p_1316->g_13
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_1316->g_12
        (VECTOR(int32_t, 2))((-1L), 0x2EAE2646L), // p_1316->g_40
        {(void*)0,(void*)0,(void*)0}, // p_1316->g_323
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-4L)), (-4L)), (-4L), 0L, (-4L), (VECTOR(int16_t, 2))(0L, (-4L)), (VECTOR(int16_t, 2))(0L, (-4L)), 0L, (-4L), 0L, (-4L)), // p_1316->g_352
        5L, // p_1316->g_360
        {{{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}}},{{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}}},{{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}}},{{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}}},{{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}}},{{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}}},{{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}}},{{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}}},{{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}}},{{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}},{{6L},{0L},{0x09L}}}}, // p_1316->g_367
        {0x07L}, // p_1316->g_368
        {{{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}}},{{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}}},{{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}},{{0x1BL},{0x46L},{5L},{0L},{0x47L},{0x1EL},{-5L},{0x02L}}}}, // p_1316->g_369
        {0x74L}, // p_1316->g_370
        {0x52L}, // p_1316->g_371
        {{{{1L},{0x02L}},{{1L},{0x02L}},{{1L},{0x02L}}},{{{1L},{0x02L}},{{1L},{0x02L}},{{1L},{0x02L}}},{{{1L},{0x02L}},{{1L},{0x02L}},{{1L},{0x02L}}},{{{1L},{0x02L}},{{1L},{0x02L}},{{1L},{0x02L}}},{{{1L},{0x02L}},{{1L},{0x02L}},{{1L},{0x02L}}},{{{1L},{0x02L}},{{1L},{0x02L}},{{1L},{0x02L}}},{{{1L},{0x02L}},{{1L},{0x02L}},{{1L},{0x02L}}},{{{1L},{0x02L}},{{1L},{0x02L}},{{1L},{0x02L}}}}, // p_1316->g_372
        {0x5EL}, // p_1316->g_373
        {7L}, // p_1316->g_374
        {0x2CL}, // p_1316->g_375
        {0x07L}, // p_1316->g_376
        {0x15L}, // p_1316->g_377
        {0x6BL}, // p_1316->g_378
        {1L}, // p_1316->g_379
        {0x12L}, // p_1316->g_380
        {0x53L}, // p_1316->g_381
        {1L}, // p_1316->g_382
        {0x58L}, // p_1316->g_383
        {0x1BL}, // p_1316->g_384
        {0x56L}, // p_1316->g_385
        {0x71L}, // p_1316->g_386
        {{{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}}},{{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}}},{{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}},{{1L},{-1L},{1L},{1L}}}}, // p_1316->g_387
        {0x0AL}, // p_1316->g_388
        {-1L}, // p_1316->g_389
        {2L}, // p_1316->g_391
        &p_1316->g_391, // p_1316->g_390
        0xE8L, // p_1316->g_418
        (void*)0, // p_1316->g_457
        {-5L}, // p_1316->g_472
        {&p_1316->g_390,&p_1316->g_390}, // p_1316->g_475
        {4294967295UL}, // p_1316->g_483
        {1L}, // p_1316->g_498
        0x7E7F809DL, // p_1316->g_510
        {0x3CL}, // p_1316->g_519
        {-1L}, // p_1316->g_521
        &p_1316->g_475[1], // p_1316->g_535
        0x3943L, // p_1316->g_540
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), // p_1316->g_569
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL), // p_1316->g_577
        (VECTOR(uint64_t, 2))(18446744073709551614UL, 0xA463316D4587BC40L), // p_1316->g_590
        0x4C68474454EBD81FL, // p_1316->g_603
        (VECTOR(uint8_t, 4))(0xA2L, (VECTOR(uint8_t, 2))(0xA2L, 0UL), 0UL), // p_1316->g_609
        {0x137A0A6EL}, // p_1316->g_617
        {0L,0L,0L}, // p_1316->g_619
        {{{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL}},{{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL}},{{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL}},{{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL}},{{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL}},{{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL}},{{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL}},{{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL}},{{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL},{(-1L),0L,0x7B3EA5ABL}}}, // p_1316->g_621
        {0xB9333E41L}, // p_1316->g_645
        {-9L}, // p_1316->g_661
        {&p_1316->g_661,&p_1316->g_661}, // p_1316->g_660
        &p_1316->g_660[0], // p_1316->g_659
        (VECTOR(uint16_t, 4))(0xFCDFL, (VECTOR(uint16_t, 2))(0xFCDFL, 0x0BD9L), 0x0BD9L), // p_1316->g_667
        0x32325CCDL, // p_1316->g_671
        (-4L), // p_1316->g_674
        (VECTOR(uint8_t, 16))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x83L), 0x83L), 0x83L, 253UL, 0x83L, (VECTOR(uint8_t, 2))(253UL, 0x83L), (VECTOR(uint8_t, 2))(253UL, 0x83L), 253UL, 0x83L, 253UL, 0x83L), // p_1316->g_678
        (void*)0, // p_1316->g_824
        {0xD110D387L}, // p_1316->g_827
        {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}, // p_1316->g_828
        &p_1316->g_824, // p_1316->g_850
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0FE0DD3AL), 0x0FE0DD3AL), 0x0FE0DD3AL, 1L, 0x0FE0DD3AL), // p_1316->g_854
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x8BA2L), 0x8BA2L), // p_1316->g_870
        {{4294967289UL,0xF1CF1E36L,0x4A73891DL,0xF1CF1E36L,4294967289UL,4294967289UL,0xF1CF1E36L},{4294967289UL,0xF1CF1E36L,0x4A73891DL,0xF1CF1E36L,4294967289UL,4294967289UL,0xF1CF1E36L}}, // p_1316->g_881
        0x76572906L, // p_1316->g_916
        9UL, // p_1316->g_920
        (VECTOR(uint8_t, 2))(0x65L, 246UL), // p_1316->g_1247
        (VECTOR(uint8_t, 4))(0x22L, (VECTOR(uint8_t, 2))(0x22L, 255UL), 255UL), // p_1316->g_1248
        (VECTOR(int32_t, 16))(0x3459D239L, (VECTOR(int32_t, 4))(0x3459D239L, (VECTOR(int32_t, 2))(0x3459D239L, 0x77BB618EL), 0x77BB618EL), 0x77BB618EL, 0x3459D239L, 0x77BB618EL, (VECTOR(int32_t, 2))(0x3459D239L, 0x77BB618EL), (VECTOR(int32_t, 2))(0x3459D239L, 0x77BB618EL), 0x3459D239L, 0x77BB618EL, 0x3459D239L, 0x77BB618EL), // p_1316->g_1308
        0, // p_1316->v_collective
        sequence_input[get_global_id(0)], // p_1316->global_0_offset
        sequence_input[get_global_id(1)], // p_1316->global_1_offset
        sequence_input[get_global_id(2)], // p_1316->global_2_offset
        sequence_input[get_local_id(0)], // p_1316->local_0_offset
        sequence_input[get_local_id(1)], // p_1316->local_1_offset
        sequence_input[get_local_id(2)], // p_1316->local_2_offset
        sequence_input[get_group_id(0)], // p_1316->group_0_offset
        sequence_input[get_group_id(1)], // p_1316->group_1_offset
        sequence_input[get_group_id(2)], // p_1316->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 25)), permutations[0][get_linear_local_id()])), // p_1316->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1317 = c_1318;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1316);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1316->g_2.x, "p_1316->g_2.x", print_hash_value);
    transparent_crc(p_1316->g_2.y, "p_1316->g_2.y", print_hash_value);
    transparent_crc(p_1316->g_3.x, "p_1316->g_3.x", print_hash_value);
    transparent_crc(p_1316->g_3.y, "p_1316->g_3.y", print_hash_value);
    transparent_crc(p_1316->g_3.z, "p_1316->g_3.z", print_hash_value);
    transparent_crc(p_1316->g_3.w, "p_1316->g_3.w", print_hash_value);
    transparent_crc(p_1316->g_4.s0, "p_1316->g_4.s0", print_hash_value);
    transparent_crc(p_1316->g_4.s1, "p_1316->g_4.s1", print_hash_value);
    transparent_crc(p_1316->g_4.s2, "p_1316->g_4.s2", print_hash_value);
    transparent_crc(p_1316->g_4.s3, "p_1316->g_4.s3", print_hash_value);
    transparent_crc(p_1316->g_4.s4, "p_1316->g_4.s4", print_hash_value);
    transparent_crc(p_1316->g_4.s5, "p_1316->g_4.s5", print_hash_value);
    transparent_crc(p_1316->g_4.s6, "p_1316->g_4.s6", print_hash_value);
    transparent_crc(p_1316->g_4.s7, "p_1316->g_4.s7", print_hash_value);
    transparent_crc(p_1316->g_4.s8, "p_1316->g_4.s8", print_hash_value);
    transparent_crc(p_1316->g_4.s9, "p_1316->g_4.s9", print_hash_value);
    transparent_crc(p_1316->g_4.sa, "p_1316->g_4.sa", print_hash_value);
    transparent_crc(p_1316->g_4.sb, "p_1316->g_4.sb", print_hash_value);
    transparent_crc(p_1316->g_4.sc, "p_1316->g_4.sc", print_hash_value);
    transparent_crc(p_1316->g_4.sd, "p_1316->g_4.sd", print_hash_value);
    transparent_crc(p_1316->g_4.se, "p_1316->g_4.se", print_hash_value);
    transparent_crc(p_1316->g_4.sf, "p_1316->g_4.sf", print_hash_value);
    transparent_crc(p_1316->g_13, "p_1316->g_13", print_hash_value);
    transparent_crc(p_1316->g_40.x, "p_1316->g_40.x", print_hash_value);
    transparent_crc(p_1316->g_40.y, "p_1316->g_40.y", print_hash_value);
    transparent_crc(p_1316->g_352.s0, "p_1316->g_352.s0", print_hash_value);
    transparent_crc(p_1316->g_352.s1, "p_1316->g_352.s1", print_hash_value);
    transparent_crc(p_1316->g_352.s2, "p_1316->g_352.s2", print_hash_value);
    transparent_crc(p_1316->g_352.s3, "p_1316->g_352.s3", print_hash_value);
    transparent_crc(p_1316->g_352.s4, "p_1316->g_352.s4", print_hash_value);
    transparent_crc(p_1316->g_352.s5, "p_1316->g_352.s5", print_hash_value);
    transparent_crc(p_1316->g_352.s6, "p_1316->g_352.s6", print_hash_value);
    transparent_crc(p_1316->g_352.s7, "p_1316->g_352.s7", print_hash_value);
    transparent_crc(p_1316->g_352.s8, "p_1316->g_352.s8", print_hash_value);
    transparent_crc(p_1316->g_352.s9, "p_1316->g_352.s9", print_hash_value);
    transparent_crc(p_1316->g_352.sa, "p_1316->g_352.sa", print_hash_value);
    transparent_crc(p_1316->g_352.sb, "p_1316->g_352.sb", print_hash_value);
    transparent_crc(p_1316->g_352.sc, "p_1316->g_352.sc", print_hash_value);
    transparent_crc(p_1316->g_352.sd, "p_1316->g_352.sd", print_hash_value);
    transparent_crc(p_1316->g_352.se, "p_1316->g_352.se", print_hash_value);
    transparent_crc(p_1316->g_352.sf, "p_1316->g_352.sf", print_hash_value);
    transparent_crc(p_1316->g_360, "p_1316->g_360", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1316->g_367[i][j][k].f0, "p_1316->g_367[i][j][k].f0", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1316->g_369[i][j][k].f0, "p_1316->g_369[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1316->g_370.f0, "p_1316->g_370.f0", print_hash_value);
    transparent_crc(p_1316->g_371.f0, "p_1316->g_371.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1316->g_372[i][j][k].f0, "p_1316->g_372[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1316->g_373.f0, "p_1316->g_373.f0", print_hash_value);
    transparent_crc(p_1316->g_374.f0, "p_1316->g_374.f0", print_hash_value);
    transparent_crc(p_1316->g_375.f0, "p_1316->g_375.f0", print_hash_value);
    transparent_crc(p_1316->g_376.f0, "p_1316->g_376.f0", print_hash_value);
    transparent_crc(p_1316->g_377.f0, "p_1316->g_377.f0", print_hash_value);
    transparent_crc(p_1316->g_378.f0, "p_1316->g_378.f0", print_hash_value);
    transparent_crc(p_1316->g_380.f0, "p_1316->g_380.f0", print_hash_value);
    transparent_crc(p_1316->g_381.f0, "p_1316->g_381.f0", print_hash_value);
    transparent_crc(p_1316->g_382.f0, "p_1316->g_382.f0", print_hash_value);
    transparent_crc(p_1316->g_383.f0, "p_1316->g_383.f0", print_hash_value);
    transparent_crc(p_1316->g_384.f0, "p_1316->g_384.f0", print_hash_value);
    transparent_crc(p_1316->g_385.f0, "p_1316->g_385.f0", print_hash_value);
    transparent_crc(p_1316->g_386.f0, "p_1316->g_386.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1316->g_387[i][j][k].f0, "p_1316->g_387[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1316->g_388.f0, "p_1316->g_388.f0", print_hash_value);
    transparent_crc(p_1316->g_389.f0, "p_1316->g_389.f0", print_hash_value);
    transparent_crc(p_1316->g_418, "p_1316->g_418", print_hash_value);
    transparent_crc(p_1316->g_483.f0, "p_1316->g_483.f0", print_hash_value);
    transparent_crc(p_1316->g_498.f0, "p_1316->g_498.f0", print_hash_value);
    transparent_crc(p_1316->g_510, "p_1316->g_510", print_hash_value);
    transparent_crc(p_1316->g_521.f0, "p_1316->g_521.f0", print_hash_value);
    transparent_crc(p_1316->g_540, "p_1316->g_540", print_hash_value);
    transparent_crc(p_1316->g_569.x, "p_1316->g_569.x", print_hash_value);
    transparent_crc(p_1316->g_569.y, "p_1316->g_569.y", print_hash_value);
    transparent_crc(p_1316->g_569.z, "p_1316->g_569.z", print_hash_value);
    transparent_crc(p_1316->g_569.w, "p_1316->g_569.w", print_hash_value);
    transparent_crc(p_1316->g_577.s0, "p_1316->g_577.s0", print_hash_value);
    transparent_crc(p_1316->g_577.s1, "p_1316->g_577.s1", print_hash_value);
    transparent_crc(p_1316->g_577.s2, "p_1316->g_577.s2", print_hash_value);
    transparent_crc(p_1316->g_577.s3, "p_1316->g_577.s3", print_hash_value);
    transparent_crc(p_1316->g_577.s4, "p_1316->g_577.s4", print_hash_value);
    transparent_crc(p_1316->g_577.s5, "p_1316->g_577.s5", print_hash_value);
    transparent_crc(p_1316->g_577.s6, "p_1316->g_577.s6", print_hash_value);
    transparent_crc(p_1316->g_577.s7, "p_1316->g_577.s7", print_hash_value);
    transparent_crc(p_1316->g_577.s8, "p_1316->g_577.s8", print_hash_value);
    transparent_crc(p_1316->g_577.s9, "p_1316->g_577.s9", print_hash_value);
    transparent_crc(p_1316->g_577.sa, "p_1316->g_577.sa", print_hash_value);
    transparent_crc(p_1316->g_577.sb, "p_1316->g_577.sb", print_hash_value);
    transparent_crc(p_1316->g_577.sc, "p_1316->g_577.sc", print_hash_value);
    transparent_crc(p_1316->g_577.sd, "p_1316->g_577.sd", print_hash_value);
    transparent_crc(p_1316->g_577.se, "p_1316->g_577.se", print_hash_value);
    transparent_crc(p_1316->g_577.sf, "p_1316->g_577.sf", print_hash_value);
    transparent_crc(p_1316->g_590.x, "p_1316->g_590.x", print_hash_value);
    transparent_crc(p_1316->g_590.y, "p_1316->g_590.y", print_hash_value);
    transparent_crc(p_1316->g_603, "p_1316->g_603", print_hash_value);
    transparent_crc(p_1316->g_609.x, "p_1316->g_609.x", print_hash_value);
    transparent_crc(p_1316->g_609.y, "p_1316->g_609.y", print_hash_value);
    transparent_crc(p_1316->g_609.z, "p_1316->g_609.z", print_hash_value);
    transparent_crc(p_1316->g_609.w, "p_1316->g_609.w", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1316->g_617[i], "p_1316->g_617[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1316->g_619[i], "p_1316->g_619[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1316->g_621[i][j][k], "p_1316->g_621[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1316->g_645.f0, "p_1316->g_645.f0", print_hash_value);
    transparent_crc(p_1316->g_661.f0, "p_1316->g_661.f0", print_hash_value);
    transparent_crc(p_1316->g_667.x, "p_1316->g_667.x", print_hash_value);
    transparent_crc(p_1316->g_667.y, "p_1316->g_667.y", print_hash_value);
    transparent_crc(p_1316->g_667.z, "p_1316->g_667.z", print_hash_value);
    transparent_crc(p_1316->g_667.w, "p_1316->g_667.w", print_hash_value);
    transparent_crc(p_1316->g_671, "p_1316->g_671", print_hash_value);
    transparent_crc(p_1316->g_674, "p_1316->g_674", print_hash_value);
    transparent_crc(p_1316->g_678.s0, "p_1316->g_678.s0", print_hash_value);
    transparent_crc(p_1316->g_678.s1, "p_1316->g_678.s1", print_hash_value);
    transparent_crc(p_1316->g_678.s2, "p_1316->g_678.s2", print_hash_value);
    transparent_crc(p_1316->g_678.s3, "p_1316->g_678.s3", print_hash_value);
    transparent_crc(p_1316->g_678.s4, "p_1316->g_678.s4", print_hash_value);
    transparent_crc(p_1316->g_678.s5, "p_1316->g_678.s5", print_hash_value);
    transparent_crc(p_1316->g_678.s6, "p_1316->g_678.s6", print_hash_value);
    transparent_crc(p_1316->g_678.s7, "p_1316->g_678.s7", print_hash_value);
    transparent_crc(p_1316->g_678.s8, "p_1316->g_678.s8", print_hash_value);
    transparent_crc(p_1316->g_678.s9, "p_1316->g_678.s9", print_hash_value);
    transparent_crc(p_1316->g_678.sa, "p_1316->g_678.sa", print_hash_value);
    transparent_crc(p_1316->g_678.sb, "p_1316->g_678.sb", print_hash_value);
    transparent_crc(p_1316->g_678.sc, "p_1316->g_678.sc", print_hash_value);
    transparent_crc(p_1316->g_678.sd, "p_1316->g_678.sd", print_hash_value);
    transparent_crc(p_1316->g_678.se, "p_1316->g_678.se", print_hash_value);
    transparent_crc(p_1316->g_678.sf, "p_1316->g_678.sf", print_hash_value);
    transparent_crc(p_1316->g_827.f0, "p_1316->g_827.f0", print_hash_value);
    transparent_crc(p_1316->g_854.s0, "p_1316->g_854.s0", print_hash_value);
    transparent_crc(p_1316->g_854.s1, "p_1316->g_854.s1", print_hash_value);
    transparent_crc(p_1316->g_854.s2, "p_1316->g_854.s2", print_hash_value);
    transparent_crc(p_1316->g_854.s3, "p_1316->g_854.s3", print_hash_value);
    transparent_crc(p_1316->g_854.s4, "p_1316->g_854.s4", print_hash_value);
    transparent_crc(p_1316->g_854.s5, "p_1316->g_854.s5", print_hash_value);
    transparent_crc(p_1316->g_854.s6, "p_1316->g_854.s6", print_hash_value);
    transparent_crc(p_1316->g_854.s7, "p_1316->g_854.s7", print_hash_value);
    transparent_crc(p_1316->g_870.x, "p_1316->g_870.x", print_hash_value);
    transparent_crc(p_1316->g_870.y, "p_1316->g_870.y", print_hash_value);
    transparent_crc(p_1316->g_870.z, "p_1316->g_870.z", print_hash_value);
    transparent_crc(p_1316->g_870.w, "p_1316->g_870.w", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1316->g_881[i][j], "p_1316->g_881[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1316->g_916, "p_1316->g_916", print_hash_value);
    transparent_crc(p_1316->g_920, "p_1316->g_920", print_hash_value);
    transparent_crc(p_1316->g_1247.x, "p_1316->g_1247.x", print_hash_value);
    transparent_crc(p_1316->g_1247.y, "p_1316->g_1247.y", print_hash_value);
    transparent_crc(p_1316->g_1248.x, "p_1316->g_1248.x", print_hash_value);
    transparent_crc(p_1316->g_1248.y, "p_1316->g_1248.y", print_hash_value);
    transparent_crc(p_1316->g_1248.z, "p_1316->g_1248.z", print_hash_value);
    transparent_crc(p_1316->g_1248.w, "p_1316->g_1248.w", print_hash_value);
    transparent_crc(p_1316->g_1308.s0, "p_1316->g_1308.s0", print_hash_value);
    transparent_crc(p_1316->g_1308.s1, "p_1316->g_1308.s1", print_hash_value);
    transparent_crc(p_1316->g_1308.s2, "p_1316->g_1308.s2", print_hash_value);
    transparent_crc(p_1316->g_1308.s3, "p_1316->g_1308.s3", print_hash_value);
    transparent_crc(p_1316->g_1308.s4, "p_1316->g_1308.s4", print_hash_value);
    transparent_crc(p_1316->g_1308.s5, "p_1316->g_1308.s5", print_hash_value);
    transparent_crc(p_1316->g_1308.s6, "p_1316->g_1308.s6", print_hash_value);
    transparent_crc(p_1316->g_1308.s7, "p_1316->g_1308.s7", print_hash_value);
    transparent_crc(p_1316->g_1308.s8, "p_1316->g_1308.s8", print_hash_value);
    transparent_crc(p_1316->g_1308.s9, "p_1316->g_1308.s9", print_hash_value);
    transparent_crc(p_1316->g_1308.sa, "p_1316->g_1308.sa", print_hash_value);
    transparent_crc(p_1316->g_1308.sb, "p_1316->g_1308.sb", print_hash_value);
    transparent_crc(p_1316->g_1308.sc, "p_1316->g_1308.sc", print_hash_value);
    transparent_crc(p_1316->g_1308.sd, "p_1316->g_1308.sd", print_hash_value);
    transparent_crc(p_1316->g_1308.se, "p_1316->g_1308.se", print_hash_value);
    transparent_crc(p_1316->g_1308.sf, "p_1316->g_1308.sf", print_hash_value);
    transparent_crc(p_1316->v_collective, "p_1316->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 96; i++)
            transparent_crc(p_1316->g_special_values[i + 96 * get_linear_group_id()], "p_1316->g_special_values[i + 96 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 96; i++)
            transparent_crc(p_1316->l_special_values[i], "p_1316->l_special_values[i]", print_hash_value);
    transparent_crc(p_1316->l_comm_values[get_linear_local_id()], "p_1316->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1316->g_comm_values[get_linear_group_id() * 25 + get_linear_local_id()], "p_1316->g_comm_values[get_linear_group_id() * 25 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
