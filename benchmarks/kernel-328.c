// --atomics 41 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 16,38,8 -l 1,1,2
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

__constant uint32_t permutations[10][2] = {
{1,0}, // permutation 0
{1,0}, // permutation 1
{1,0}, // permutation 2
{1,0}, // permutation 3
{1,0}, // permutation 4
{1,0}, // permutation 5
{1,0}, // permutation 6
{1,0}, // permutation 7
{1,0}, // permutation 8
{1,0} // permutation 9
};

// Seed: 2099517042

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint32_t  f0;
   int32_t  f1;
   volatile uint32_t  f2;
};

union U1 {
   volatile int32_t  f0;
   uint16_t  f1;
   uint16_t  f2;
   volatile uint64_t  f3;
};

union U2 {
   int8_t * volatile  f0;
   volatile uint64_t  f1;
   volatile uint16_t  f2;
   int16_t  f3;
   int8_t * f4;
};

union U3 {
   uint64_t  f0;
};

struct S4 {
    volatile int16_t g_15;
    volatile VECTOR(uint64_t, 2) g_16;
    VECTOR(uint32_t, 8) g_32;
    uint16_t g_35;
    int32_t g_46;
    int32_t g_49;
    int32_t g_53;
    uint32_t g_70[7][8];
    uint32_t *g_69;
    int32_t g_79;
    uint16_t g_81;
    int32_t g_85;
    uint32_t g_86;
    uint64_t g_89;
    VECTOR(int64_t, 2) g_102;
    volatile int8_t g_106;
    volatile int8_t *g_105;
    int8_t g_108;
    uint32_t g_112[1];
    uint8_t g_117;
    union U3 g_149;
    volatile uint16_t * volatile *g_162;
    uint16_t g_194;
    VECTOR(int64_t, 16) g_202;
    volatile uint32_t g_215;
    volatile uint32_t *g_214;
    volatile uint32_t **g_213;
    int32_t *g_219;
    int32_t g_221[10][4][2];
    union U2 g_232;
    union U2 g_233[3][3][5];
    union U2 g_234;
    union U2 g_235;
    union U2 g_236;
    union U2 g_237;
    union U2 g_238;
    union U2 g_239[2];
    union U2 g_240;
    union U2 g_241;
    union U2 g_242;
    union U2 g_243;
    union U2 g_244;
    union U2 g_245[1];
    union U2 g_246[7];
    union U2 g_247;
    union U2 g_248;
    union U2 g_250;
    union U2 *g_249;
    union U3 *g_258;
    union U3 **g_257;
    uint8_t g_262;
    VECTOR(int16_t, 2) g_284;
    uint32_t g_302[4][2][6];
    int8_t g_304;
    VECTOR(uint16_t, 8) g_316;
    VECTOR(uint32_t, 16) g_358;
    VECTOR(int16_t, 16) g_371;
    union U2 g_373;
    VECTOR(uint8_t, 16) g_381;
    VECTOR(int8_t, 2) g_448;
    VECTOR(uint64_t, 4) g_477;
    VECTOR(uint8_t, 4) g_501;
    VECTOR(int32_t, 16) g_504;
    VECTOR(uint64_t, 8) g_526;
    VECTOR(uint64_t, 2) g_527;
    VECTOR(uint64_t, 16) g_530;
    VECTOR(int64_t, 4) g_535;
    union U0 g_599[10][8][3];
    union U0 *g_598;
    VECTOR(uint8_t, 8) g_602;
    VECTOR(uint8_t, 16) g_603;
    volatile int16_t g_702;
    volatile int16_t *g_701;
    VECTOR(uint8_t, 16) g_725;
    VECTOR(int8_t, 16) g_738;
    VECTOR(int8_t, 16) g_739;
    VECTOR(int8_t, 8) g_740;
    union U0 g_775;
    volatile VECTOR(uint64_t, 8) g_777;
    volatile VECTOR(uint16_t, 16) g_799;
    union U3 *** volatile g_810[5];
    volatile uint64_t g_812;
    VECTOR(uint16_t, 16) g_1280;
    VECTOR(int32_t, 2) g_1296;
    VECTOR(int32_t, 2) g_1316;
    int8_t g_1319[5];
    VECTOR(int8_t, 8) g_1338;
    union U2 g_1339;
    volatile union U0 g_1396;
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
uint64_t  func_1(struct S4 * p_1405);
int32_t  func_2(int16_t  p_3, union U3  p_4, int64_t  p_5, int64_t  p_6, struct S4 * p_1405);
union U3  func_7(uint16_t  p_8, int32_t  p_9, struct S4 * p_1405);
int8_t  func_19(uint32_t  p_20, int8_t * p_21, uint32_t  p_22, int32_t  p_23, int32_t * p_24, struct S4 * p_1405);
int8_t * func_25(int64_t  p_26, int64_t  p_27, union U3  p_28, int8_t * p_29, int64_t  p_30, struct S4 * p_1405);
union U3  func_41(int32_t * p_42, int32_t * p_43, struct S4 * p_1405);
uint32_t * func_60(uint32_t  p_61, uint64_t  p_62, uint32_t  p_63, int8_t * p_64, int8_t * p_65, struct S4 * p_1405);
uint32_t  func_73(uint32_t  p_74, struct S4 * p_1405);
int16_t  func_93(uint16_t  p_94, int32_t  p_95, uint32_t  p_96, struct S4 * p_1405);
int32_t  func_98(int64_t  p_99, int8_t  p_100, int64_t  p_101, struct S4 * p_1405);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1405->l_comm_values p_1405->g_16 p_1405->g_32 p_1405->g_35 p_1405->g_258 p_1405->g_149 p_1405->g_108 p_1405->g_69 p_1405->g_70 p_1405->g_112 p_1405->g_117 p_1405->g_535 p_1405->g_448 p_1405->g_477 p_1405->g_527 p_1405->g_530 p_1405->g_102 p_1405->g_358 p_1405->g_86 p_1405->g_53 p_1405->g_194 p_1405->g_49 p_1405->g_219 p_1405->g_46 p_1405->g_371 p_1405->g_162 p_1405->g_381 p_1405->g_202 p_1405->g_89 p_1405->g_149.f0 p_1405->g_221 p_1405->g_79 p_1405->g_284 p_1405->g_504 p_1405->g_526 p_1405->g_598 p_1405->g_213 p_1405->g_214 p_1405->g_501 p_1405->g_85 p_1405->g_775 p_1405->g_777 p_1405->g_738 p_1405->g_799 p_1405->g_812 p_1405->g_739 p_1405->g_740 p_1405->g_1280 p_1405->g_1296 p_1405->g_701 p_1405->g_702 p_1405->g_81 p_1405->g_1316 p_1405->g_602 p_1405->g_1319 p_1405->g_1338 p_1405->g_1339 p_1405->g_725 p_1405->g_603 p_1405->g_1396 p_1405->g_302
 * writes: p_1405->g_16 p_1405->g_32 p_1405->g_35 p_1405->g_117 p_1405->g_219 p_1405->g_70 p_1405->g_86 p_1405->g_46 p_1405->g_49 p_1405->g_53 p_1405->g_81 p_1405->g_comm_values p_1405->g_304 p_1405->g_202 p_1405->g_85 p_1405->g_244.f3 p_1405->g_284 p_1405->g_504 p_1405->g_448 p_1405->g_194 p_1405->g_221 p_1405->g_89 p_1405->g_725 p_1405->g_812 p_1405->g_1280 p_1405->g_79 p_1405->g_1319 p_1405->g_477 p_1405->g_599.f1 p_1405->g_527 p_1405->g_262 p_1405->g_381
 */
uint64_t  func_1(struct S4 * p_1405)
{ /* block id: 4 */
    uint64_t l_10 = 0x0357257EA0D018D3L;
    VECTOR(uint64_t, 8) l_978 = (VECTOR(uint64_t, 8))(0x309ADD2C3544079AL, (VECTOR(uint64_t, 4))(0x309ADD2C3544079AL, (VECTOR(uint64_t, 2))(0x309ADD2C3544079AL, 0x10EE12D859201CB5L), 0x10EE12D859201CB5L), 0x10EE12D859201CB5L, 0x309ADD2C3544079AL, 0x10EE12D859201CB5L);
    uint32_t **l_981 = (void*)0;
    uint32_t ***l_982[5];
    uint32_t **l_983 = (void*)0;
    VECTOR(uint32_t, 2) l_989 = (VECTOR(uint32_t, 2))(1UL, 4294967295UL);
    VECTOR(uint32_t, 16) l_990 = (VECTOR(uint32_t, 16))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0x3665458CL), 0x3665458CL), 0x3665458CL, 4294967289UL, 0x3665458CL, (VECTOR(uint32_t, 2))(4294967289UL, 0x3665458CL), (VECTOR(uint32_t, 2))(4294967289UL, 0x3665458CL), 4294967289UL, 0x3665458CL, 4294967289UL, 0x3665458CL);
    uint16_t l_991 = 0xD24AL;
    int32_t *l_1289 = &p_1405->g_599[0][0][2].f1;
    int32_t *l_1290 = &p_1405->g_599[0][0][2].f1;
    int32_t *l_1291[5][6][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    uint64_t l_1292 = 0xB380AA4A02542631L;
    VECTOR(int32_t, 8) l_1295 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 6L), 6L), 6L, 1L, 6L);
    VECTOR(int32_t, 2) l_1297 = (VECTOR(int32_t, 2))(0x4DE68715L, 0x504E9726L);
    uint16_t l_1298 = 0UL;
    int32_t l_1309 = 0x7A2E7CB0L;
    VECTOR(int8_t, 8) l_1312 = (VECTOR(int8_t, 8))(0x1DL, (VECTOR(int8_t, 4))(0x1DL, (VECTOR(int8_t, 2))(0x1DL, 0x01L), 0x01L), 0x01L, 0x1DL, 0x01L);
    VECTOR(int32_t, 4) l_1313 = (VECTOR(int32_t, 4))(0x14CDE736L, (VECTOR(int32_t, 2))(0x14CDE736L, 4L), 4L);
    int64_t l_1317 = 0x32ED2FF85CB7646FL;
    int8_t l_1318 = (-7L);
    int8_t l_1333 = 0x0CL;
    VECTOR(int32_t, 16) l_1347 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x792DFA92L), 0x792DFA92L), 0x792DFA92L, 0L, 0x792DFA92L, (VECTOR(int32_t, 2))(0L, 0x792DFA92L), (VECTOR(int32_t, 2))(0L, 0x792DFA92L), 0L, 0x792DFA92L, 0L, 0x792DFA92L);
    uint64_t l_1354 = 0xDD6999BF054289A7L;
    int32_t l_1355 = 0L;
    uint16_t l_1356 = 0xEDD7L;
    int16_t l_1357 = 0x7670L;
    int32_t l_1358 = 3L;
    uint8_t *l_1359 = (void*)0;
    uint8_t *l_1360 = (void*)0;
    uint8_t *l_1361 = (void*)0;
    uint8_t *l_1362 = (void*)0;
    uint8_t *l_1363 = (void*)0;
    uint8_t *l_1364[10][6][4] = {{{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0}},{{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0}},{{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0}},{{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0}},{{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0}},{{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0}},{{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0}},{{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0}},{{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0}},{{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0},{&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0}}};
    int32_t **l_1379 = &l_1291[1][2][0];
    uint32_t l_1404 = 0xDF1DCCC4L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_982[i] = (void*)0;
    l_1292 |= ((func_2(p_1405->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1405->tid, 2))], func_7(l_10, l_10, p_1405), ((((VECTOR(uint64_t, 8))(l_978.s53076272)).s1 >= ((safe_mul_func_int16_t_s_s(0x50A1L, ((l_981 != (l_983 = (void*)0)) == (((safe_unary_minus_func_uint32_t_u((((safe_sub_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s((((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 8))(abs(((VECTOR(uint32_t, 2))(4294967287UL, 4294967293UL)).yxxyxxyy))).s25, ((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 2))(0x153E1B9CL, 0x08CC01A3L)).yyxyxyxy, ((VECTOR(uint32_t, 16))(abs(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))(abs(((VECTOR(uint32_t, 8))(l_989.yxxxxxyx))))).s45, ((VECTOR(uint32_t, 8))(l_990.s5d984c44)).s15))).yyxxxxyx)).s23)).xxxy)).zwxzyxzzywwxyxyz))).lo))).s53))).even || ((p_1405->g_739.s1 && GROUP_DIVERGE(2, 1)) != ((p_1405->g_501.y >= 255UL) , GROUP_DIVERGE(0, 1)))), l_990.s8)) , GROUP_DIVERGE(0, 1)) != 0x2F56199D27B3EB09L), p_1405->g_740.s1)) , p_1405->g_535.z) != p_1405->g_530.s5))) ^ l_991) > l_10)))) & p_1405->g_108)) < l_990.sa), p_1405->g_358.s7, p_1405) > 0x1E635D8BL) < 0x1313C7BC215A62A4L);
    p_1405->g_1319[4] &= (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 2))(l_1295.s74)).xyxxyxxx, ((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 16))(0x50D2A977L, ((VECTOR(int32_t, 2))(p_1405->g_1296.xx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1297.yyyyxyyxyyxyxxxx)).s0a7a)), ((VECTOR(int32_t, 8))(((l_1298 >= (l_1318 = (safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((p_1405->g_477.z > l_1309), (*p_1405->g_701))), p_1405->g_740.s4)), (safe_mul_func_int8_t_s_s(p_1405->g_739.sa, ((VECTOR(int8_t, 16))(l_1312.s5702211371763514)).s2)))) || (!p_1405->g_81)), (((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1313.wy)), 1L, 0x4A9F614BL)).odd)), ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((((*p_1405->g_69) = ((safe_lshift_func_uint8_t_u_s((((VECTOR(int32_t, 16))(p_1405->g_1316.xyxxxyxyxxxxyxyy)).s1 , (2L <= p_1405->g_738.s3)), p_1405->g_112[0])) | 3UL)) , l_1317) ^ 0x5035C9BCL), ((VECTOR(int32_t, 2))((-1L))), 1L)).ywwzxyywzzyzxzxx, ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))(0L))))).sd1))).even , p_1405->g_49))), 0x1BEBBC3256F90D57L)))) | p_1405->g_602.s1), 0x76F1704CL, 0x00A3871FL, (-1L), ((VECTOR(int32_t, 4))(0L)))), (-1L))).s83))).xxyyxyyy))).s6, p_1405->g_740.s6));
    p_1405->g_53 = (safe_unary_minus_func_int8_t_s((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (((safe_mod_func_uint64_t_u_u((p_1405->g_527.x = (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(255UL, 8UL)).hi, ((*l_1290) = (((safe_rshift_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(l_1333, (0x70L && ((safe_rshift_func_uint16_t_u_s((p_1405->g_32.s0 > (&p_1405->g_219 == &l_1291[2][4][0])), ((((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_1405->g_1338.s53452223)).s1776216514457574)))).sf >= (p_1405->g_1339 , (((safe_unary_minus_func_uint8_t_u((safe_sub_func_uint64_t_u_u((p_1405->g_477.x = (((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))(l_1347.s86be15865c31b7db)).sc, p_1405->g_108)), (safe_mod_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s(l_1354, p_1405->g_284.x)) >= l_1355), p_1405->g_725.sb)) == GROUP_DIVERGE(1, 1)), 0x33L)))) || l_1356) <= p_1405->g_477.x)), 0x19181B4A0E0C706EL)))) && l_1357) >= p_1405->g_1338.s5))) , l_1358) | p_1405->g_603.s5) > p_1405->g_530.s7))) | p_1405->g_112[0])))) < 1L) || 0x52BC0D29L), 10)) <= 0L) && (*p_1405->g_69)))))), p_1405->g_738.s2)) || p_1405->g_530.s6) > FAKE_DIVERGE(p_1405->local_1_offset, get_local_id(1), 10)))), 250UL))));
    for (l_1355 = 0; (l_1355 >= 25); l_1355 = safe_add_func_int16_t_s_s(l_1355, 5))
    { /* block id: 592 */
        uint16_t l_1367 = 65535UL;
        int32_t l_1372 = 0L;
        uint32_t l_1380[4];
        VECTOR(int8_t, 16) l_1391 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-10L)), (-10L)), (-10L), 1L, (-10L), (VECTOR(int8_t, 2))(1L, (-10L)), (VECTOR(int8_t, 2))(1L, (-10L)), 1L, (-10L), 1L, (-10L));
        int i;
        for (i = 0; i < 4; i++)
            l_1380[i] = 0xEF602E2AL;
        l_1367++;
        for (l_991 = 0; (l_991 == 14); l_991 = safe_add_func_int16_t_s_s(l_991, 8))
        { /* block id: 596 */
            uint32_t l_1373[1][5] = {{0xECB0E447L,0xECB0E447L,0xECB0E447L,0xECB0E447L,0xECB0E447L}};
            uint16_t *l_1376 = &p_1405->g_194;
            int32_t l_1399 = 0x569BA7B8L;
            uint16_t l_1400 = 0x05EBL;
            int32_t l_1401 = (-1L);
            uint16_t *l_1402 = &p_1405->g_35;
            int32_t l_1403 = 0L;
            int i, j;
            l_1373[0][1]++;
            p_1405->g_219 = (void*)0;
            l_1403 |= ((++(*l_1376)) > ((*l_1402) = ((1UL != (((VECTOR(uint64_t, 4))(0xCF86D75E909B29D3L, (&l_1291[0][0][0] == l_1379), 0x439FB9C3CE143207L, 0x93C3C5285E8E371AL)).x && FAKE_DIVERGE(p_1405->local_2_offset, get_local_id(2), 10))) == (l_1380[2] | (l_1401 |= (p_1405->g_381.sc = (p_1405->g_262 = ((safe_mod_func_int64_t_s_s(0x025539E2EE64A040L, p_1405->g_358.sf)) != (safe_lshift_func_int8_t_s_s((l_1400 ^= (safe_sub_func_uint8_t_u_u((l_1399 |= (safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_1391.se00a)).x, (safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(l_1380[2], (p_1405->g_1396 , ((((safe_mod_func_uint64_t_u_u(((0UL >= l_1373[0][1]) < 0L), p_1405->g_221[8][0][0])) & l_1373[0][4]) || (*p_1405->g_701)) && p_1405->g_302[0][0][4])))), p_1405->g_302[1][0][1])))), p_1405->g_202.s4))), GROUP_DIVERGE(1, 1)))), 6))))))))));
        }
    }
    return l_1404;
}


/* ------------------------------------------ */
/* 
 * reads : p_1405->g_1280 p_1405->g_79 p_1405->g_527
 * writes: p_1405->g_1280 p_1405->g_79
 */
int32_t  func_2(int16_t  p_3, union U3  p_4, int64_t  p_5, int64_t  p_6, struct S4 * p_1405)
{ /* block id: 427 */
    int32_t *l_1279[8][8][4] = {{{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0}},{{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0}},{{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0}},{{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0}},{{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0}},{{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0}},{{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0}},{{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0},{(void*)0,&p_1405->g_53,(void*)0,(void*)0}}};
    int32_t **l_1288 = (void*)0;
    int i, j, k;
    if ((atomic_inc(&p_1405->l_atomic_input[32]) == 8))
    { /* block id: 429 */
        int32_t l_992 = 3L;
        int32_t l_1274 = (-6L);
        uint8_t l_1275 = 2UL;
        int32_t l_1276 = 0x36076BB8L;
        uint32_t l_1277 = 1UL;
        uint8_t l_1278[3][10] = {{0xDEL,0xB0L,7UL,0xB0L,0xDEL,0xDEL,0xB0L,7UL,0xB0L,0xDEL},{0xDEL,0xB0L,7UL,0xB0L,0xDEL,0xDEL,0xB0L,7UL,0xB0L,0xDEL},{0xDEL,0xB0L,7UL,0xB0L,0xDEL,0xDEL,0xB0L,7UL,0xB0L,0xDEL}};
        int i, j;
        for (l_992 = 0; (l_992 <= (-2)); l_992 = safe_sub_func_int16_t_s_s(l_992, 6))
        { /* block id: 432 */
            VECTOR(uint16_t, 2) l_995 = (VECTOR(uint16_t, 2))(0xBBCDL, 0x89D4L);
            VECTOR(int32_t, 16) l_996 = (VECTOR(int32_t, 16))(0x0549CB1AL, (VECTOR(int32_t, 4))(0x0549CB1AL, (VECTOR(int32_t, 2))(0x0549CB1AL, 0x32AAA757L), 0x32AAA757L), 0x32AAA757L, 0x0549CB1AL, 0x32AAA757L, (VECTOR(int32_t, 2))(0x0549CB1AL, 0x32AAA757L), (VECTOR(int32_t, 2))(0x0549CB1AL, 0x32AAA757L), 0x0549CB1AL, 0x32AAA757L, 0x0549CB1AL, 0x32AAA757L);
            int16_t l_997 = 7L;
            uint32_t l_998[8] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
            uint8_t l_999 = 0x77L;
            union U0 l_1000[6][1][10] = {{{{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL}}},{{{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL}}},{{{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL}}},{{{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL}}},{{{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL}}},{{{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL}}}};
            VECTOR(int32_t, 16) l_1001 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x13F33987L), 0x13F33987L), 0x13F33987L, 0L, 0x13F33987L, (VECTOR(int32_t, 2))(0L, 0x13F33987L), (VECTOR(int32_t, 2))(0L, 0x13F33987L), 0L, 0x13F33987L, 0L, 0x13F33987L);
            int8_t l_1002 = 0x3CL;
            VECTOR(int32_t, 2) l_1003 = (VECTOR(int32_t, 2))(0x142AC48EL, 0x46AEA021L);
            VECTOR(int32_t, 2) l_1004 = (VECTOR(int32_t, 2))((-5L), 0L);
            VECTOR(int32_t, 16) l_1005 = (VECTOR(int32_t, 16))(0x02425D7FL, (VECTOR(int32_t, 4))(0x02425D7FL, (VECTOR(int32_t, 2))(0x02425D7FL, 9L), 9L), 9L, 0x02425D7FL, 9L, (VECTOR(int32_t, 2))(0x02425D7FL, 9L), (VECTOR(int32_t, 2))(0x02425D7FL, 9L), 0x02425D7FL, 9L, 0x02425D7FL, 9L);
            VECTOR(int32_t, 4) l_1006 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 3L), 3L);
            uint16_t l_1007 = 0x8CF6L;
            VECTOR(int32_t, 4) l_1008 = (VECTOR(int32_t, 4))(0x1061B990L, (VECTOR(int32_t, 2))(0x1061B990L, 0x5A29D65BL), 0x5A29D65BL);
            uint8_t l_1009 = 0x84L;
            VECTOR(int32_t, 8) l_1010 = (VECTOR(int32_t, 8))(0x65938C87L, (VECTOR(int32_t, 4))(0x65938C87L, (VECTOR(int32_t, 2))(0x65938C87L, (-4L)), (-4L)), (-4L), 0x65938C87L, (-4L));
            VECTOR(int32_t, 2) l_1011 = (VECTOR(int32_t, 2))(0x68EC4F70L, (-1L));
            uint8_t l_1012 = 0x7EL;
            VECTOR(int32_t, 8) l_1013 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-5L)), (-5L)), (-5L), (-5L), (-5L));
            VECTOR(int32_t, 8) l_1014 = (VECTOR(int32_t, 8))(0x3FB8ED8DL, (VECTOR(int32_t, 4))(0x3FB8ED8DL, (VECTOR(int32_t, 2))(0x3FB8ED8DL, 0x7BE3FC4CL), 0x7BE3FC4CL), 0x7BE3FC4CL, 0x3FB8ED8DL, 0x7BE3FC4CL);
            VECTOR(int32_t, 4) l_1015 = (VECTOR(int32_t, 4))(0x5BB6B0A8L, (VECTOR(int32_t, 2))(0x5BB6B0A8L, 0x0D8E640AL), 0x0D8E640AL);
            VECTOR(int32_t, 16) l_1016 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x202BB824L), 0x202BB824L), 0x202BB824L, (-8L), 0x202BB824L, (VECTOR(int32_t, 2))((-8L), 0x202BB824L), (VECTOR(int32_t, 2))((-8L), 0x202BB824L), (-8L), 0x202BB824L, (-8L), 0x202BB824L);
            VECTOR(int32_t, 16) l_1017 = (VECTOR(int32_t, 16))(0x6373DCC0L, (VECTOR(int32_t, 4))(0x6373DCC0L, (VECTOR(int32_t, 2))(0x6373DCC0L, 0L), 0L), 0L, 0x6373DCC0L, 0L, (VECTOR(int32_t, 2))(0x6373DCC0L, 0L), (VECTOR(int32_t, 2))(0x6373DCC0L, 0L), 0x6373DCC0L, 0L, 0x6373DCC0L, 0L);
            int16_t l_1018 = 0x13DDL;
            uint16_t l_1019 = 0xCC67L;
            uint8_t l_1020 = 0xDEL;
            uint64_t l_1021 = 0UL;
            int i, j, k;
            l_1021 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(0x20F265B8L, (-1L))).yyxxyxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(5L, (-1L))), 0x1341L, 3L)), ((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_995.xyyxxyxx)))).s4760231757574257, (uint16_t)GROUP_DIVERGE(1, 1)))).s6a6f))).xzyzxwww, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(l_996.s20)).yyyyxyxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((l_998[6] |= l_997), ((VECTOR(int32_t, 2))(1L, 1L)), 8L)).yzyzxwxxyxxwxxzz)).lo, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(0x7BC1DE62L, l_999, (l_1000[3][0][0] , (l_1002 &= ((VECTOR(int32_t, 8))(l_1001.s1f76c878)).s7)), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(0x7E7C2516L, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1003.xxxx)).zyyxwxwyxyzwywxx)), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(l_1004.yyxxyxyx)).s64, ((VECTOR(int32_t, 2))(0x35F72DD8L, 0x5DEA0D4DL)), ((VECTOR(int32_t, 8))(l_1005.s9ae79165)).s23))).yxyyxyxxxyxxyxxy))).s24, ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, (-5L))), (-9L), 0x3E1B6C63L)))).wwwwzxyw)), ((VECTOR(int32_t, 16))(l_1006.zzxwxzzxyxwzzyzz)).hi, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(l_1007, ((VECTOR(int32_t, 2))(0x5FB6300CL, (-10L))), 0x368B26C6L)).zxwxzywx, ((VECTOR(int32_t, 8))(l_1008.zzxwywxx)))))))).s03))), ((VECTOR(int32_t, 4))(0x3C819C26L, l_1009, 0x5CBD04C3L, 0x690CA3C2L)), 0x0985EFBCL)).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_1010.s37051607)))).odd))), 0x312FF8FEL)), (int32_t)((VECTOR(int32_t, 2))(l_1011.xx)).lo))).even, (int32_t)l_1012))).wxzyxyzw))), ((VECTOR(int32_t, 2))(0x2458F18AL, 0x7D9DC55EL)).yyyxxyxx))).s4442110714546321)), ((VECTOR(int32_t, 8))((-1L), 0x34658D0DL, 0x5D064944L, 0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1013.s3360757272746266)).s8d63)))).s0730675203037251, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(l_1014.s2572157425345164)), ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(l_1015.zy)).xxyxyyxyyyxyxxyx, ((VECTOR(int32_t, 4))(l_1016.s606e)).yyxzzwwwzxxxyxzx))).odd, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(l_1017.s5e0c)).zxwyzzyxwwxwyzzx))).even))).s2601750213021006)))))).s78b1)), (l_1018 , l_1019), l_1020, 1L, (-1L)))))).s21)))).xyxyxyyy)).s3;
            for (l_1021 = 0; (l_1021 == 12); l_1021 = safe_add_func_uint64_t_u_u(l_1021, 5))
            { /* block id: 438 */
                VECTOR(int32_t, 4) l_1024 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0L), 0L);
                int32_t l_1117 = 0x0BDF5C36L;
                int i;
                if (((VECTOR(int32_t, 4))(l_1024.xwwz)).y)
                { /* block id: 439 */
                    int32_t l_1025 = 0x00D184FAL;
                    uint16_t l_1026 = 0x7F6CL;
                    VECTOR(int32_t, 4) l_1027 = (VECTOR(int32_t, 4))(0x2D7F984DL, (VECTOR(int32_t, 2))(0x2D7F984DL, 2L), 2L);
                    VECTOR(int16_t, 16) l_1028 = (VECTOR(int16_t, 16))(0x55FFL, (VECTOR(int16_t, 4))(0x55FFL, (VECTOR(int16_t, 2))(0x55FFL, 0x46C7L), 0x46C7L), 0x46C7L, 0x55FFL, 0x46C7L, (VECTOR(int16_t, 2))(0x55FFL, 0x46C7L), (VECTOR(int16_t, 2))(0x55FFL, 0x46C7L), 0x55FFL, 0x46C7L, 0x55FFL, 0x46C7L);
                    uint16_t l_1029 = 65533UL;
                    VECTOR(int16_t, 16) l_1030 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x7E68L), 0x7E68L), 0x7E68L, 1L, 0x7E68L, (VECTOR(int16_t, 2))(1L, 0x7E68L), (VECTOR(int16_t, 2))(1L, 0x7E68L), 1L, 0x7E68L, 1L, 0x7E68L);
                    VECTOR(int16_t, 2) l_1031 = (VECTOR(int16_t, 2))(3L, (-6L));
                    union U3 l_1032 = {0x044DCEEC66A55E8BL};
                    VECTOR(int16_t, 2) l_1033 = (VECTOR(int16_t, 2))((-1L), 0L);
                    uint32_t l_1034 = 0x73006272L;
                    uint32_t l_1035 = 0x988DA752L;
                    VECTOR(uint8_t, 8) l_1036 = (VECTOR(uint8_t, 8))(0x79L, (VECTOR(uint8_t, 4))(0x79L, (VECTOR(uint8_t, 2))(0x79L, 0UL), 0UL), 0UL, 0x79L, 0UL);
                    int16_t l_1037 = (-1L);
                    int64_t l_1038 = 0L;
                    uint32_t l_1039 = 4294967295UL;
                    uint8_t l_1040 = 255UL;
                    int8_t l_1041[6] = {0x31L,0x31L,0x31L,0x31L,0x31L,0x31L};
                    int16_t l_1042 = (-1L);
                    VECTOR(int32_t, 16) l_1043 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5468D9BEL), 0x5468D9BEL), 0x5468D9BEL, 0L, 0x5468D9BEL, (VECTOR(int32_t, 2))(0L, 0x5468D9BEL), (VECTOR(int32_t, 2))(0L, 0x5468D9BEL), 0L, 0x5468D9BEL, 0L, 0x5468D9BEL);
                    VECTOR(int32_t, 2) l_1044 = (VECTOR(int32_t, 2))(0x0791E0BFL, (-1L));
                    int8_t l_1045 = 0x0BL;
                    int32_t l_1046 = (-7L);
                    int16_t l_1047 = 0x692DL;
                    int64_t l_1048 = 0x790B7AD13AFB4359L;
                    uint16_t l_1049 = 4UL;
                    int32_t l_1059 = 0x291CBA4DL;
                    int32_t *l_1087 = &l_1025;
                    int32_t *l_1088[2][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    if (((l_1025 , (l_1013.s1 = (l_1024.x = (l_1026 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(0x790F1031L, 0x21FDE2AAL)), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(l_1027.zy)).xxyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(l_1028.s29)).xxxy, ((VECTOR(uint16_t, 16))(l_1029, ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(int16_t, 16))(0x7035L, ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_1030.s78)), (-2L), 1L)).zxwxxwxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_1031.yxxyyxxxxxxyxyyy)).s2, ((l_1032 , ((VECTOR(int16_t, 4))(l_1033.yxxx)).z) , l_1034), (l_1045 = (((VECTOR(int32_t, 8))((l_1042 = (l_1041[2] = (l_1040 |= (l_1035 , (l_1036.s7 , (l_1039 = (l_1038 = (l_1037 = 0x547677EEL)))))))), ((VECTOR(int32_t, 4))(l_1043.sf89d)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(l_1044.xx)).yyxy, ((VECTOR(int32_t, 2))(0x58F27220L, 0L)).xyxy))).even)), 0L)).s2 , (-1L))), l_1046, l_1047, 0x62F7L, (-1L), ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 4))(1L)), 0x384BL)).hi))), l_1048, l_1049, ((VECTOR(int16_t, 4))(0x35DFL)), 0L)).odd, ((VECTOR(int16_t, 8))(1L))))), 65535UL, 65535UL, 0x97E0L, ((VECTOR(uint16_t, 2))(0x802EL)), 65531UL, 0xA832L)).s4c2c))).wywxyyzxzyyxxwwy)))).s24ef))).xzxyxzzyxwzyywwx, ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))(0x1B5A81DBL))))).s4a53, ((VECTOR(int32_t, 4))(0x75965F9AL))))).lo))).xyxxxxyx)).s5)))) , 0x48520D62L))
                    { /* block id: 449 */
                        uint8_t l_1050 = 251UL;
                        int64_t l_1051 = 0x7C7CC32F5B01B69BL;
                        l_1051 ^= ((l_1032.f0 = l_1050) , (-10L));
                    }
                    else
                    { /* block id: 452 */
                        int16_t l_1052 = 0x0D02L;
                        uint32_t l_1053[6][5] = {{0x85F90156L,0x85F90156L,0xD21CF81CL,4294967295UL,0xA9CA9D5DL},{0x85F90156L,0x85F90156L,0xD21CF81CL,4294967295UL,0xA9CA9D5DL},{0x85F90156L,0x85F90156L,0xD21CF81CL,4294967295UL,0xA9CA9D5DL},{0x85F90156L,0x85F90156L,0xD21CF81CL,4294967295UL,0xA9CA9D5DL},{0x85F90156L,0x85F90156L,0xD21CF81CL,4294967295UL,0xA9CA9D5DL},{0x85F90156L,0x85F90156L,0xD21CF81CL,4294967295UL,0xA9CA9D5DL}};
                        int i, j;
                        l_1014.s5 = l_1052;
                        l_1053[1][0] = (FAKE_DIVERGE(p_1405->global_0_offset, get_global_id(0), 10) , (-1L));
                    }
                    for (l_1030.sc = 0; (l_1030.sc >= 26); l_1030.sc++)
                    { /* block id: 458 */
                        uint64_t l_1056 = 18446744073709551614UL;
                        l_1056++;
                    }
                    if (l_1059)
                    { /* block id: 461 */
                        union U2 l_1061 = {0};/* VOLATILE GLOBAL l_1061 */
                        union U2 *l_1060 = &l_1061;
                        union U2 *l_1062 = (void*)0;
                        uint32_t l_1063 = 1UL;
                        int32_t l_1064[5];
                        uint64_t l_1065 = 18446744073709551613UL;
                        uint32_t l_1068 = 0x6AAE3B58L;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1064[i] = 0x3BDBE1D0L;
                        l_1062 = l_1060;
                        l_1011.x = l_1063;
                        ++l_1065;
                        --l_1068;
                    }
                    else
                    { /* block id: 466 */
                        VECTOR(int32_t, 4) l_1071 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x31D22CA9L), 0x31D22CA9L);
                        VECTOR(int32_t, 16) l_1072 = (VECTOR(int32_t, 16))(0x6782F438L, (VECTOR(int32_t, 4))(0x6782F438L, (VECTOR(int32_t, 2))(0x6782F438L, 7L), 7L), 7L, 0x6782F438L, 7L, (VECTOR(int32_t, 2))(0x6782F438L, 7L), (VECTOR(int32_t, 2))(0x6782F438L, 7L), 0x6782F438L, 7L, 0x6782F438L, 7L);
                        VECTOR(int32_t, 2) l_1073 = (VECTOR(int32_t, 2))(0x70B659FCL, (-2L));
                        uint64_t l_1074 = 0x2CD8B6DEB68A86A4L;
                        uint32_t l_1075 = 1UL;
                        VECTOR(int8_t, 2) l_1076 = (VECTOR(int8_t, 2))(0x50L, (-1L));
                        uint32_t l_1077 = 4294967294UL;
                        VECTOR(int16_t, 8) l_1078 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3829L), 0x3829L), 0x3829L, 1L, 0x3829L);
                        VECTOR(int16_t, 4) l_1079 = (VECTOR(int16_t, 4))(0x3192L, (VECTOR(int16_t, 2))(0x3192L, 9L), 9L);
                        VECTOR(int16_t, 4) l_1080 = (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0L), 0L);
                        VECTOR(int16_t, 4) l_1081 = (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0x5034L), 0x5034L);
                        VECTOR(int8_t, 4) l_1082 = (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 1L), 1L);
                        int8_t l_1083[10][8][3] = {{{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L}},{{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L}},{{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L}},{{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L}},{{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L}},{{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L}},{{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L}},{{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L}},{{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L}},{{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L},{0x20L,6L,0x00L}}};
                        union U2 l_1084[6][10] = {{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}};
                        int16_t l_1085[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                        VECTOR(int64_t, 4) l_1086 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x6B54CDB3158CAD1EL), 0x6B54CDB3158CAD1EL);
                        int i, j, k;
                        l_1005.sb |= ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x78F22800L, 7L, (-9L), 0x556431E6L)).xzwyyyzwxzwzxxyx)).sb2e2, ((VECTOR(int32_t, 2))(0L, 0L)).yxxx, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))((-5L), 1L)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1071.wy)), 0x124DECB4L, (-2L))), 0x4FFED5DBL, 0L, ((VECTOR(int32_t, 2))(l_1072.sf8)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1073.xx)).yyxxyxxy)))).sff))).yyxx))).w;
                        l_1011.y = l_1074;
                        l_1024.z = (l_1075 , ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_1076.y, l_1077, 1L, ((VECTOR(int16_t, 2))(0L, 1L)), ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_1078.s17)))).xxxxyxxy))).s1, 0x0CC3L, 0x42BEL, ((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(l_1079.zy)).xyxyyyxx, ((VECTOR(int16_t, 16))(l_1080.zyzxyxxxyywzyzyx)).lo, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(0x6D1FL, 0x2FF2L, 0x195CL, 0x377AL)), ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(9L, 0x798FL)))).yxyy)), ((VECTOR(int16_t, 2))(l_1081.yw)), 0L, 9L)).s6012352363316755, (int16_t)5L))).saf52))).hi, ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 16))(l_1082.zyxxzwzxzxxzxywx)).sf9a6, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(1UL, 0xF9L, ((l_1083[9][2][1] , l_1084[0][6]) , l_1085[3]), l_1086.y, ((VECTOR(uint8_t, 4))(0x9EL)))).odd))))).lo))).yxyyxxyy))))).s92ca))))), 0L, 5L, 1L, 0x33DBL)).s54, ((VECTOR(uint16_t, 2))(0UL))))).lo);
                    }
                    l_1088[0][5] = l_1087;
                }
                else
                { /* block id: 472 */
                    VECTOR(int32_t, 4) l_1089 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x59AD947DL), 0x59AD947DL);
                    int64_t l_1115 = 0x123B680291F5CFC7L;
                    uint64_t l_1116 = 3UL;
                    int i;
                    if ((l_1000[3][0][0].f1 = ((VECTOR(int32_t, 16))(l_1089.ywwyxwzxxyxwzwyz)).s8))
                    { /* block id: 474 */
                        int8_t l_1090 = (-1L);
                        uint16_t l_1091 = 0xDF1EL;
                        l_1091++;
                    }
                    else
                    { /* block id: 476 */
                        int32_t l_1094 = 0x71C01CDBL;
                        uint32_t l_1095 = 6UL;
                        int32_t l_1097 = 1L;
                        int32_t *l_1096[8][1][1] = {{{&l_1097}},{{&l_1097}},{{&l_1097}},{{&l_1097}},{{&l_1097}},{{&l_1097}},{{&l_1097}},{{&l_1097}}};
                        int32_t *l_1098[1][9] = {{&l_1097,&l_1097,&l_1097,&l_1097,&l_1097,&l_1097,&l_1097,&l_1097,&l_1097}};
                        VECTOR(uint16_t, 2) l_1099 = (VECTOR(uint16_t, 2))(0x9451L, 65531UL);
                        int32_t *l_1100[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t *l_1101 = &l_1097;
                        int32_t *l_1102 = (void*)0;
                        VECTOR(int8_t, 16) l_1103 = (VECTOR(int8_t, 16))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, 0L), 0L), 0L, 0x64L, 0L, (VECTOR(int8_t, 2))(0x64L, 0L), (VECTOR(int8_t, 2))(0x64L, 0L), 0x64L, 0L, 0x64L, 0L);
                        VECTOR(int32_t, 4) l_1104 = (VECTOR(int32_t, 4))(0x21316253L, (VECTOR(int32_t, 2))(0x21316253L, 0x3E516BE5L), 0x3E516BE5L);
                        int32_t l_1105 = 0x32C17F6AL;
                        VECTOR(int32_t, 16) l_1106 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-3L)), (-3L)), (-3L), 0L, (-3L), (VECTOR(int32_t, 2))(0L, (-3L)), (VECTOR(int32_t, 2))(0L, (-3L)), 0L, (-3L), 0L, (-3L));
                        VECTOR(int32_t, 16) l_1107 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1C67BC27L), 0x1C67BC27L), 0x1C67BC27L, 1L, 0x1C67BC27L, (VECTOR(int32_t, 2))(1L, 0x1C67BC27L), (VECTOR(int32_t, 2))(1L, 0x1C67BC27L), 1L, 0x1C67BC27L, 1L, 0x1C67BC27L);
                        VECTOR(int32_t, 16) l_1108 = (VECTOR(int32_t, 16))(0x3597A6A7L, (VECTOR(int32_t, 4))(0x3597A6A7L, (VECTOR(int32_t, 2))(0x3597A6A7L, (-10L)), (-10L)), (-10L), 0x3597A6A7L, (-10L), (VECTOR(int32_t, 2))(0x3597A6A7L, (-10L)), (VECTOR(int32_t, 2))(0x3597A6A7L, (-10L)), 0x3597A6A7L, (-10L), 0x3597A6A7L, (-10L));
                        int32_t l_1109 = 0x34BD0C5CL;
                        union U3 l_1110 = {0xC02F27EC7B377AE3L};
                        int32_t l_1111 = (-8L);
                        int32_t *l_1112 = &l_1097;
                        int32_t *l_1113 = (void*)0;
                        int32_t *l_1114 = (void*)0;
                        int i, j, k;
                        l_1095 = l_1094;
                        l_1098[0][1] = (l_1096[3][0][0] = (void*)0);
                        l_1102 = (l_1101 = (((VECTOR(uint16_t, 16))(l_1099.yyyyyyxxyxyyyyyx)).s2 , l_1100[3]));
                        l_1114 = (l_1113 = ((((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((((l_1002 = ((VECTOR(int8_t, 8))(l_1103.sf1c0f784)).s1) , 0x79B2E949L) , (-1L)), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(l_1104.yz)).yyyxyxyyyyyyxyyx))).s4ad8, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1105, ((VECTOR(int32_t, 8))(l_1106.saf695c77)), 1L, ((VECTOR(int32_t, 2))(l_1107.s69)), 0x269ECBFAL, 0x358ADAA8L, 0x75A3FED4L, 1L)).s238b))))).y, (-1L), (l_1003.y = 0x31E5606DL), ((VECTOR(int32_t, 4))(l_1108.s9eca)))).s54)).lo , ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xACL, 0UL)).yxxyyyxyyxxyxxxy)).sf) , l_1109) , l_1110) , (((VECTOR(int32_t, 4))(0x32D4273CL, l_1111, 0x1CC46178L, (-3L))).x , l_1112)));
                    }
                    l_1013.s5 ^= (l_1017.s4 ^= l_1115);
                    l_1015.y |= l_1116;
                }
                if (l_1117)
                { /* block id: 491 */
                    VECTOR(int32_t, 4) l_1118 = (VECTOR(int32_t, 4))(0x1D0E21AFL, (VECTOR(int32_t, 2))(0x1D0E21AFL, 0x291C11CCL), 0x291C11CCL);
                    VECTOR(int32_t, 8) l_1119 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-5L)), (-5L)), (-5L), (-4L), (-5L));
                    VECTOR(int16_t, 4) l_1120 = (VECTOR(int16_t, 4))(0x4BF0L, (VECTOR(int16_t, 2))(0x4BF0L, 0x31EAL), 0x31EAL);
                    VECTOR(int16_t, 2) l_1121 = (VECTOR(int16_t, 2))(0x0F87L, (-1L));
                    VECTOR(int16_t, 16) l_1122 = (VECTOR(int16_t, 16))(0x7A56L, (VECTOR(int16_t, 4))(0x7A56L, (VECTOR(int16_t, 2))(0x7A56L, 0x4AC5L), 0x4AC5L), 0x4AC5L, 0x7A56L, 0x4AC5L, (VECTOR(int16_t, 2))(0x7A56L, 0x4AC5L), (VECTOR(int16_t, 2))(0x7A56L, 0x4AC5L), 0x7A56L, 0x4AC5L, 0x7A56L, 0x4AC5L);
                    VECTOR(int16_t, 2) l_1123 = (VECTOR(int16_t, 2))(0x6231L, (-1L));
                    union U1 l_1124 = {0x664ED6A4L};/* VOLATILE GLOBAL l_1124 */
                    VECTOR(int8_t, 16) l_1125 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L), (VECTOR(int8_t, 2))(1L, (-4L)), (VECTOR(int8_t, 2))(1L, (-4L)), 1L, (-4L), 1L, (-4L));
                    VECTOR(uint8_t, 8) l_1126 = (VECTOR(uint8_t, 8))(246UL, (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 246UL), 246UL), 246UL, 246UL, 246UL);
                    int32_t l_1127 = 9L;
                    VECTOR(int16_t, 2) l_1128 = (VECTOR(int16_t, 2))(0x1C36L, 0x50ECL);
                    VECTOR(int16_t, 4) l_1129 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4EB1L), 0x4EB1L);
                    VECTOR(int16_t, 4) l_1130 = (VECTOR(int16_t, 4))(0x1E2EL, (VECTOR(int16_t, 2))(0x1E2EL, (-8L)), (-8L));
                    VECTOR(int16_t, 8) l_1131 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x2715L), 0x2715L), 0x2715L, 0L, 0x2715L);
                    VECTOR(uint16_t, 2) l_1132 = (VECTOR(uint16_t, 2))(0xAFC7L, 1UL);
                    int16_t l_1133 = 0L;
                    VECTOR(int32_t, 8) l_1134 = (VECTOR(int32_t, 8))(0x1B224F72L, (VECTOR(int32_t, 4))(0x1B224F72L, (VECTOR(int32_t, 2))(0x1B224F72L, 0x040E84A7L), 0x040E84A7L), 0x040E84A7L, 0x1B224F72L, 0x040E84A7L);
                    uint32_t l_1145[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1145[i] = 0xEDC030D2L;
                    if (((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(l_1118.zzzz)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1119.s7446754065570150)).lo)), ((VECTOR(int32_t, 4))(0x0B9480E5L, (l_1015.w = ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))(l_1120.yzzzxxww)), ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_1121.xyyy)))).yxwwxzwz, ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(0x705DL, ((VECTOR(int16_t, 16))(l_1122.s56a875ba35127a4a)).sd, 1L, 0x6FB3L))))).zzywzzyy, ((VECTOR(int16_t, 2))(0L, 0L)).yyyyxxxy, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(0L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(l_1123.yy)).xxxy, (int16_t)(l_1124 , 9L)))).even, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))(l_1125.s596a97ed)).s01, ((VECTOR(uint8_t, 4))(l_1126.s5220)).hi))).xyxyxyxx)).s3270031401736062)).s26e2)).lo))).xxxyyxxyxyxyxxxx)).even)).s5, 9L, l_1127, ((VECTOR(int16_t, 8))(l_1128.xyyxxyxy)), ((VECTOR(int16_t, 8))(l_1129.zywxxywz)).s3, 0x563AL, 0x374AL, 0L)).s09, ((VECTOR(int16_t, 8))(l_1130.zyyywxyx)).s17))).xxyyyxxx))), ((VECTOR(int16_t, 16))(l_1131.s2014166636160722)).lo))).hi)).odd, ((VECTOR(int16_t, 4))(0x0137L, 0x2094L, 0x1843L, 4L)).odd))).xyyxxxyx))).s53, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_1132.xyxy)).wxzyyyxwwyxzwxyz)).s7e6a)).even))).lo), 0x1C1D7E53L, 0x322EF1D0L)).zzyxxzyw))).lo))))).lo, (int32_t)l_1133))).xxyyxxyyyyyxxyyx, ((VECTOR(int32_t, 4))(l_1134.s3023)).ywzzyyxxzyzxzxzx))).s7)
                    { /* block id: 493 */
                        int32_t l_1136[7][2][4] = {{{(-1L),1L,2L,(-8L)},{(-1L),1L,2L,(-8L)}},{{(-1L),1L,2L,(-8L)},{(-1L),1L,2L,(-8L)}},{{(-1L),1L,2L,(-8L)},{(-1L),1L,2L,(-8L)}},{{(-1L),1L,2L,(-8L)},{(-1L),1L,2L,(-8L)}},{{(-1L),1L,2L,(-8L)},{(-1L),1L,2L,(-8L)}},{{(-1L),1L,2L,(-8L)},{(-1L),1L,2L,(-8L)}},{{(-1L),1L,2L,(-8L)},{(-1L),1L,2L,(-8L)}}};
                        int32_t *l_1135[9];
                        int32_t *l_1137 = &l_1136[6][1][3];
                        uint8_t l_1138 = 0x19L;
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_1135[i] = &l_1136[6][0][3];
                        l_1137 = l_1135[8];
                        (*l_1137) = l_1138;
                    }
                    else
                    { /* block id: 496 */
                        int32_t l_1139 = 0x7978FF2AL;
                        union U1 l_1141 = {-1L};/* VOLATILE GLOBAL l_1141 */
                        union U1 *l_1140[9][10][2] = {{{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141}},{{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141}},{{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141}},{{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141}},{{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141}},{{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141}},{{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141}},{{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141}},{{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141},{(void*)0,&l_1141}}};
                        uint8_t l_1142[9][7][4] = {{{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL}},{{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL}},{{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL}},{{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL}},{{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL}},{{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL}},{{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL}},{{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL}},{{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL},{0xDBL,0x48L,0UL,0xDDL}}};
                        int i, j, k;
                        l_1005.sd = l_1139;
                        l_1140[6][8][1] = (void*)0;
                        ++l_1142[5][4][2];
                    }
                    l_1145[1]++;
                    for (l_1145[1] = 0; (l_1145[1] > 41); l_1145[1]++)
                    { /* block id: 504 */
                        int32_t l_1150 = 0L;
                        l_1008.x &= l_1150;
                    }
                }
                else
                { /* block id: 507 */
                    VECTOR(int32_t, 8) l_1151 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4F4FDC92L), 0x4F4FDC92L), 0x4F4FDC92L, (-1L), 0x4F4FDC92L);
                    VECTOR(int32_t, 16) l_1152 = (VECTOR(int32_t, 16))(0x4D379938L, (VECTOR(int32_t, 4))(0x4D379938L, (VECTOR(int32_t, 2))(0x4D379938L, 0x7F18F8F7L), 0x7F18F8F7L), 0x7F18F8F7L, 0x4D379938L, 0x7F18F8F7L, (VECTOR(int32_t, 2))(0x4D379938L, 0x7F18F8F7L), (VECTOR(int32_t, 2))(0x4D379938L, 0x7F18F8F7L), 0x4D379938L, 0x7F18F8F7L, 0x4D379938L, 0x7F18F8F7L);
                    VECTOR(int32_t, 4) l_1153 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 5L), 5L);
                    VECTOR(int32_t, 8) l_1154 = (VECTOR(int32_t, 8))(0x2EB466E3L, (VECTOR(int32_t, 4))(0x2EB466E3L, (VECTOR(int32_t, 2))(0x2EB466E3L, 8L), 8L), 8L, 0x2EB466E3L, 8L);
                    VECTOR(int32_t, 16) l_1155 = (VECTOR(int32_t, 16))(0x2283832BL, (VECTOR(int32_t, 4))(0x2283832BL, (VECTOR(int32_t, 2))(0x2283832BL, 0x5BBA83A1L), 0x5BBA83A1L), 0x5BBA83A1L, 0x2283832BL, 0x5BBA83A1L, (VECTOR(int32_t, 2))(0x2283832BL, 0x5BBA83A1L), (VECTOR(int32_t, 2))(0x2283832BL, 0x5BBA83A1L), 0x2283832BL, 0x5BBA83A1L, 0x2283832BL, 0x5BBA83A1L);
                    VECTOR(int16_t, 4) l_1156 = (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 1L), 1L);
                    VECTOR(int32_t, 4) l_1157 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
                    int64_t l_1158 = 0x34F2FC45E12BA9E0L;
                    VECTOR(int32_t, 16) l_1159 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 9L), 9L), 9L, 1L, 9L, (VECTOR(int32_t, 2))(1L, 9L), (VECTOR(int32_t, 2))(1L, 9L), 1L, 9L, 1L, 9L);
                    VECTOR(int32_t, 4) l_1160 = (VECTOR(int32_t, 4))(0x7AC1EDDFL, (VECTOR(int32_t, 2))(0x7AC1EDDFL, 0x0FEBE4D2L), 0x0FEBE4D2L);
                    VECTOR(int32_t, 2) l_1161 = (VECTOR(int32_t, 2))(0L, (-1L));
                    VECTOR(int32_t, 2) l_1162 = (VECTOR(int32_t, 2))(1L, 0x0A66DD49L);
                    VECTOR(uint32_t, 8) l_1163 = (VECTOR(uint32_t, 8))(0x48355CF4L, (VECTOR(uint32_t, 4))(0x48355CF4L, (VECTOR(uint32_t, 2))(0x48355CF4L, 0x05AD4959L), 0x05AD4959L), 0x05AD4959L, 0x48355CF4L, 0x05AD4959L);
                    VECTOR(uint32_t, 2) l_1164 = (VECTOR(uint32_t, 2))(0xD1AF60DCL, 4294967293UL);
                    uint32_t l_1165 = 0UL;
                    uint64_t l_1166 = 1UL;
                    VECTOR(int32_t, 16) l_1167 = (VECTOR(int32_t, 16))(0x1DB8BA43L, (VECTOR(int32_t, 4))(0x1DB8BA43L, (VECTOR(int32_t, 2))(0x1DB8BA43L, 0x199A60D4L), 0x199A60D4L), 0x199A60D4L, 0x1DB8BA43L, 0x199A60D4L, (VECTOR(int32_t, 2))(0x1DB8BA43L, 0x199A60D4L), (VECTOR(int32_t, 2))(0x1DB8BA43L, 0x199A60D4L), 0x1DB8BA43L, 0x199A60D4L, 0x1DB8BA43L, 0x199A60D4L);
                    VECTOR(int32_t, 2) l_1168 = (VECTOR(int32_t, 2))(0x2D433B93L, 0x5B3DAB4EL);
                    VECTOR(int32_t, 4) l_1169 = (VECTOR(int32_t, 4))(0x60C6148BL, (VECTOR(int32_t, 2))(0x60C6148BL, 0x214A5109L), 0x214A5109L);
                    VECTOR(int32_t, 4) l_1170 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7F96F84BL), 0x7F96F84BL);
                    VECTOR(int32_t, 4) l_1171 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x628692F5L), 0x628692F5L);
                    VECTOR(int32_t, 16) l_1172 = (VECTOR(int32_t, 16))(0x4BBB6EF8L, (VECTOR(int32_t, 4))(0x4BBB6EF8L, (VECTOR(int32_t, 2))(0x4BBB6EF8L, (-8L)), (-8L)), (-8L), 0x4BBB6EF8L, (-8L), (VECTOR(int32_t, 2))(0x4BBB6EF8L, (-8L)), (VECTOR(int32_t, 2))(0x4BBB6EF8L, (-8L)), 0x4BBB6EF8L, (-8L), 0x4BBB6EF8L, (-8L));
                    VECTOR(int32_t, 16) l_1173 = (VECTOR(int32_t, 16))(0x56A6B775L, (VECTOR(int32_t, 4))(0x56A6B775L, (VECTOR(int32_t, 2))(0x56A6B775L, 0x2C28EA64L), 0x2C28EA64L), 0x2C28EA64L, 0x56A6B775L, 0x2C28EA64L, (VECTOR(int32_t, 2))(0x56A6B775L, 0x2C28EA64L), (VECTOR(int32_t, 2))(0x56A6B775L, 0x2C28EA64L), 0x56A6B775L, 0x2C28EA64L, 0x56A6B775L, 0x2C28EA64L);
                    union U1 l_1174 = {0x6E67B905L};/* VOLATILE GLOBAL l_1174 */
                    uint8_t l_1175 = 255UL;
                    VECTOR(int32_t, 8) l_1176 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x7FCBFD5BL), 0x7FCBFD5BL), 0x7FCBFD5BL, (-2L), 0x7FCBFD5BL);
                    VECTOR(int32_t, 2) l_1177 = (VECTOR(int32_t, 2))(0x7805D6B2L, 9L);
                    VECTOR(int32_t, 4) l_1178 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
                    VECTOR(int32_t, 4) l_1179 = (VECTOR(int32_t, 4))(0x33CF9310L, (VECTOR(int32_t, 2))(0x33CF9310L, 0x7E6D79AAL), 0x7E6D79AAL);
                    VECTOR(int32_t, 2) l_1180 = (VECTOR(int32_t, 2))((-1L), 0x3E009376L);
                    VECTOR(int32_t, 4) l_1181 = (VECTOR(int32_t, 4))(0x167A64F3L, (VECTOR(int32_t, 2))(0x167A64F3L, (-9L)), (-9L));
                    uint8_t l_1182 = 255UL;
                    VECTOR(int32_t, 8) l_1183 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-1L)), (-1L)), (-1L), (-2L), (-1L));
                    VECTOR(int32_t, 8) l_1184 = (VECTOR(int32_t, 8))(0x2F32DF57L, (VECTOR(int32_t, 4))(0x2F32DF57L, (VECTOR(int32_t, 2))(0x2F32DF57L, 0x2E4159A5L), 0x2E4159A5L), 0x2E4159A5L, 0x2F32DF57L, 0x2E4159A5L);
                    VECTOR(int32_t, 8) l_1185 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x6A42D9E1L), 0x6A42D9E1L), 0x6A42D9E1L, (-8L), 0x6A42D9E1L);
                    VECTOR(int32_t, 2) l_1186 = (VECTOR(int32_t, 2))((-6L), 0x109F7865L);
                    int32_t l_1187[4] = {(-1L),(-1L),(-1L),(-1L)};
                    uint8_t l_1188 = 0xFDL;
                    uint32_t l_1189 = 4294967293UL;
                    uint32_t l_1190 = 8UL;
                    int i;
                    l_1004.y = ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(4L, 1L)).yxxxyxxyxyyyyxxy, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_1151.s66)).yxyxxxxy, ((VECTOR(int32_t, 2))(l_1152.s0d)).yxxyyyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_1153.zz)).yyyyxxxxyyyxyyyx)).sb068, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(l_1154.s06335202)).odd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), 0x1FDC24D6L)), 0x42615FAEL, 0L))))).yxxwzzzz, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(l_1155.s81)), ((VECTOR(int32_t, 4))(0x40EDB59BL, 0L, 0x2EFDAA39L, 0x1B4B6B80L)).lo))).xyxx, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(l_1156.yzzy)).wzyywywzzyywzyxy, ((VECTOR(uint16_t, 2))(0xFB28L, 65528UL)).xxxxyxyyxxyyyyxy))).sd009))).wyyyzyzy))).hi))).w, ((VECTOR(int32_t, 4))(l_1157.zzzx)), ((VECTOR(int32_t, 2))(0x5CC2ED79L, 0L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((l_1006.y = l_1158), (-1L), 0x372643A1L, 3L)))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x564504B5L, 0x66B9FC23L)).xxxyyxyxxyxxxxxx)))).sc4b3))), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(l_1159.s8f5c)).odd, ((VECTOR(int32_t, 4))(l_1160.zzzw)).lo))).xyxy))).lo, ((VECTOR(int32_t, 16))(l_1161.xyxyyyxxxyyyxyxy)).sfa))), (-5L), 0x289DAC06L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_1162.yxyxyxxyxxxxxyyy)).s73)), ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(1L, 0x2967EB8BL)), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-7L), 0x01D705A0L)))), 0x407E289EL, (-1L))).wzwxzxxx, (int32_t)(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 2))(l_1163.s22)).yxyyyyyx, ((VECTOR(uint32_t, 4))(l_1164.yyxy)).zyyxwzyy, ((VECTOR(uint32_t, 2))(0UL, 4294967288UL)).yxxyxyxx))).s1 , l_1165), (int32_t)l_1166))).lo, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(l_1167.sbe)).xyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1168.xxxy)).hi)).yyxyyxxxxyxxyxyx)).s354f))))).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(0L, 0x57A7D276L)), ((VECTOR(int32_t, 2))(l_1169.xx)), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_1170.zz)).yxxyxxyxxyxyyyxx)).s80)))))), ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(l_1171.wxxxxyywwyzzwyxw)).even, ((VECTOR(int32_t, 2))(0x6464226DL, 0x7CD71091L)).yyxyyxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(l_1172.s54)).xxxxxyxxxyyyyxxy, ((VECTOR(int32_t, 4))(0x650C1698L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(4L, 0x7160666FL)))), 5L)).zwywzywzxywxxwyx))).odd)).even)).ywxyzxyzyywyywwz)).hi))).s77, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1173.s7bcf1a7591efdf7c)).odd)), (int32_t)(-4L)))).s35))).yyyy, ((VECTOR(int32_t, 4))((l_1017.s8 = (l_1011.y = (l_1174 , l_1175))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(l_1176.s1530)).odd, ((VECTOR(int32_t, 2))(l_1177.yx))))).yyxxyyyxyxyxxyxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1178.yywzwzyyyxxywwxz)).s20b1)).yywyzwxxwzzywxzx, ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1179.yx)))).xxyxyyxxyxyxxxxy, ((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1180.yy)), (-1L), (-1L))), ((VECTOR(int32_t, 8))(0x22067FECL, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_1181.zywy)))).wzyywxyx)).s1600143330107204)).s2, 0x64E8FCDEL, l_1182, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x10283061L, 0x39306934L)).yxyxyxxy)).s04, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(0x57E3891DL, 0L)), ((VECTOR(int32_t, 2))(l_1183.s14)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1184.s70443704)).lo)).lo))), 0x7300C44DL, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(l_1185.s1413035641540065)).s215e, ((VECTOR(int32_t, 8))(0x561069C5L, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1186.xyyy)).ywxxxzyw)).s56))).yyyyxxxy, ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(0x53FB27C6L, 0x6ABFFD92L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((-1L), 8L, ((VECTOR(int32_t, 4))(l_1187[3], 1L, 1L, 0x4925A3BBL)), (-9L), 0x0486FF60L)).s3, (-3L), (-1L), 0x594E6FECL)), (-8L), 0x4CC28AB5L)), ((VECTOR(int32_t, 8))(0x4024EFF7L))))).s3577062635345664, ((VECTOR(int32_t, 16))(0x74E16C84L))))).even, ((VECTOR(int32_t, 8))(0L))))).s71))), ((VECTOR(int32_t, 4))((-1L))), 1L)).hi))), 1L)).s20)))))), 0x625183C5L, 0L)).odd, ((VECTOR(int32_t, 4))(0x21B1D6BDL))))).lo)), l_1188, ((VECTOR(int32_t, 8))(0x1A6839E9L)), 1L, 0x04278991L, 1L, 1L)))))))).sc8)), 0x281DCE27L))))))).even))).xyxyxxyy, ((VECTOR(int32_t, 8))((-10L)))))).hi))).odd, ((VECTOR(int32_t, 2))(1L))))), 0x24DA19B0L)).lo))), (int32_t)l_1189))).lo, ((VECTOR(int32_t, 4))(0x4F48A31EL)), ((VECTOR(int32_t, 4))(0x7281CEF3L))))).xxwxwwxy, (int32_t)4L))).s6647743656174470, ((VECTOR(int32_t, 16))(2L))))).s0;
                    if (l_1190)
                    { /* block id: 512 */
                        union U1 l_1192 = {0x1AF836BDL};/* VOLATILE GLOBAL l_1192 */
                        union U1 *l_1191[7] = {&l_1192,&l_1192,&l_1192,&l_1192,&l_1192,&l_1192,&l_1192};
                        int i;
                        l_1162.y = 1L;
                        l_1191[1] = (void*)0;
                    }
                    else
                    { /* block id: 515 */
                        int32_t l_1194 = 0x5C47ECB9L;
                        int32_t *l_1193 = &l_1194;
                        union U0 **l_1195 = (void*)0;
                        union U0 l_1198 = {4294967295UL};/* VOLATILE GLOBAL l_1198 */
                        union U0 *l_1197 = &l_1198;
                        union U0 **l_1196[2];
                        uint32_t l_1199[1][10] = {{0x63E3EE6FL,0x5F285ACDL,0x63E3EE6FL,0x63E3EE6FL,0x5F285ACDL,0x63E3EE6FL,0x63E3EE6FL,0x5F285ACDL,0x63E3EE6FL,0x63E3EE6FL}};
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_1196[i] = &l_1197;
                        l_1193 = (void*)0;
                        l_1196[0] = (l_1195 = (void*)0);
                        l_996.se = l_1199[0][6];
                    }
                }
                for (l_1024.y = (-27); (l_1024.y > (-25)); l_1024.y = safe_add_func_int8_t_s_s(l_1024.y, 9))
                { /* block id: 524 */
                    uint32_t l_1202 = 0UL;
                    int64_t l_1203 = (-1L);
                    int8_t l_1204[9][5] = {{(-1L),0x7EL,0x7EL,(-1L),(-1L)},{(-1L),0x7EL,0x7EL,(-1L),(-1L)},{(-1L),0x7EL,0x7EL,(-1L),(-1L)},{(-1L),0x7EL,0x7EL,(-1L),(-1L)},{(-1L),0x7EL,0x7EL,(-1L),(-1L)},{(-1L),0x7EL,0x7EL,(-1L),(-1L)},{(-1L),0x7EL,0x7EL,(-1L),(-1L)},{(-1L),0x7EL,0x7EL,(-1L),(-1L)},{(-1L),0x7EL,0x7EL,(-1L),(-1L)}};
                    VECTOR(uint8_t, 8) l_1205 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL);
                    VECTOR(uint8_t, 16) l_1206 = (VECTOR(uint8_t, 16))(0x05L, (VECTOR(uint8_t, 4))(0x05L, (VECTOR(uint8_t, 2))(0x05L, 0x91L), 0x91L), 0x91L, 0x05L, 0x91L, (VECTOR(uint8_t, 2))(0x05L, 0x91L), (VECTOR(uint8_t, 2))(0x05L, 0x91L), 0x05L, 0x91L, 0x05L, 0x91L);
                    VECTOR(uint8_t, 8) l_1207 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x88L), 0x88L), 0x88L, 1UL, 0x88L);
                    VECTOR(int16_t, 4) l_1208 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L);
                    int64_t l_1209 = 0x0C45D5DB38800D14L;
                    uint32_t l_1210 = 2UL;
                    uint32_t l_1211 = 4294967289UL;
                    VECTOR(int16_t, 16) l_1212 = (VECTOR(int16_t, 16))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x49FFL), 0x49FFL), 0x49FFL, 7L, 0x49FFL, (VECTOR(int16_t, 2))(7L, 0x49FFL), (VECTOR(int16_t, 2))(7L, 0x49FFL), 7L, 0x49FFL, 7L, 0x49FFL);
                    VECTOR(int16_t, 8) l_1213 = (VECTOR(int16_t, 8))(0x5F0AL, (VECTOR(int16_t, 4))(0x5F0AL, (VECTOR(int16_t, 2))(0x5F0AL, 0L), 0L), 0L, 0x5F0AL, 0L);
                    VECTOR(int16_t, 8) l_1214 = (VECTOR(int16_t, 8))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x59ABL), 0x59ABL), 0x59ABL, (-9L), 0x59ABL);
                    uint8_t l_1215 = 3UL;
                    uint16_t l_1216[10] = {0x7DB3L,0x7DB3L,0x7DB3L,0x7DB3L,0x7DB3L,0x7DB3L,0x7DB3L,0x7DB3L,0x7DB3L,0x7DB3L};
                    VECTOR(int32_t, 16) l_1217 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x669FE14FL), 0x669FE14FL), 0x669FE14FL, (-1L), 0x669FE14FL, (VECTOR(int32_t, 2))((-1L), 0x669FE14FL), (VECTOR(int32_t, 2))((-1L), 0x669FE14FL), (-1L), 0x669FE14FL, (-1L), 0x669FE14FL);
                    VECTOR(int32_t, 16) l_1218 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x36E80E91L), 0x36E80E91L), 0x36E80E91L, 8L, 0x36E80E91L, (VECTOR(int32_t, 2))(8L, 0x36E80E91L), (VECTOR(int32_t, 2))(8L, 0x36E80E91L), 8L, 0x36E80E91L, 8L, 0x36E80E91L);
                    VECTOR(int32_t, 16) l_1219 = (VECTOR(int32_t, 16))(0x5FF4FBFAL, (VECTOR(int32_t, 4))(0x5FF4FBFAL, (VECTOR(int32_t, 2))(0x5FF4FBFAL, 0L), 0L), 0L, 0x5FF4FBFAL, 0L, (VECTOR(int32_t, 2))(0x5FF4FBFAL, 0L), (VECTOR(int32_t, 2))(0x5FF4FBFAL, 0L), 0x5FF4FBFAL, 0L, 0x5FF4FBFAL, 0L);
                    VECTOR(int32_t, 2) l_1220 = (VECTOR(int32_t, 2))((-2L), 0L);
                    VECTOR(int32_t, 16) l_1221 = (VECTOR(int32_t, 16))(0x3D513C77L, (VECTOR(int32_t, 4))(0x3D513C77L, (VECTOR(int32_t, 2))(0x3D513C77L, 1L), 1L), 1L, 0x3D513C77L, 1L, (VECTOR(int32_t, 2))(0x3D513C77L, 1L), (VECTOR(int32_t, 2))(0x3D513C77L, 1L), 0x3D513C77L, 1L, 0x3D513C77L, 1L);
                    VECTOR(int32_t, 16) l_1222 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7D973BB8L), 0x7D973BB8L), 0x7D973BB8L, 0L, 0x7D973BB8L, (VECTOR(int32_t, 2))(0L, 0x7D973BB8L), (VECTOR(int32_t, 2))(0L, 0x7D973BB8L), 0L, 0x7D973BB8L, 0L, 0x7D973BB8L);
                    VECTOR(int32_t, 2) l_1223 = (VECTOR(int32_t, 2))(0x59A48091L, (-1L));
                    VECTOR(int32_t, 4) l_1224 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x1EDA9601L), 0x1EDA9601L);
                    VECTOR(int32_t, 8) l_1225 = (VECTOR(int32_t, 8))(0x71E3BB76L, (VECTOR(int32_t, 4))(0x71E3BB76L, (VECTOR(int32_t, 2))(0x71E3BB76L, 0x5C680151L), 0x5C680151L), 0x5C680151L, 0x71E3BB76L, 0x5C680151L);
                    VECTOR(int32_t, 8) l_1226 = (VECTOR(int32_t, 8))(0x619FE3C0L, (VECTOR(int32_t, 4))(0x619FE3C0L, (VECTOR(int32_t, 2))(0x619FE3C0L, 0x43D5E245L), 0x43D5E245L), 0x43D5E245L, 0x619FE3C0L, 0x43D5E245L);
                    VECTOR(int32_t, 16) l_1227 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L, (VECTOR(int32_t, 2))((-4L), 0L), (VECTOR(int32_t, 2))((-4L), 0L), (-4L), 0L, (-4L), 0L);
                    VECTOR(int32_t, 16) l_1228 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x378B65C2L), 0x378B65C2L), 0x378B65C2L, 0L, 0x378B65C2L, (VECTOR(int32_t, 2))(0L, 0x378B65C2L), (VECTOR(int32_t, 2))(0L, 0x378B65C2L), 0L, 0x378B65C2L, 0L, 0x378B65C2L);
                    uint32_t l_1229 = 0xDCD0D0D3L;
                    int32_t l_1230 = 0x31F1370FL;
                    uint16_t l_1231 = 0x58ADL;
                    int32_t l_1232 = 1L;
                    union U1 l_1246 = {0x1B99C859L};/* VOLATILE GLOBAL l_1246 */
                    int64_t l_1247 = 1L;
                    int i, j;
                    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_1202 , (l_996.sc = ((l_1216[5] |= (((VECTOR(int16_t, 8))(0x1D6AL, l_1203, (l_997 |= (l_1018 = ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(9L, 0x63L)).xxyxxyyy)).odd, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(0x31L, FAKE_DIVERGE(p_1405->local_2_offset, get_local_id(2), 10), l_1204[3][2], 0xBBL, ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 2))(l_1205.s11)).yyyyxxxy, ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 2))(l_1206.s3d)).xxxxyyxy)))))).s66, ((VECTOR(uint8_t, 16))(l_1207.s3002504636240323)).sac))).lo, 0x40L, 0xF9L, 0UL)).s1051256603017311)).scfa4))).x)), ((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(l_1208.wwzzzxyw)).even, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))((l_1209 , (l_1210 , (l_1208.z = (l_997 = l_1211)))), ((VECTOR(int16_t, 2))(l_1212.s8f)), 0x26D3L)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_1213.s7547467501166604)))).sd2aa))), ((VECTOR(int16_t, 16))(l_1214.s0420636642626124)).sfe34))).yzxzyzzwzzxxxyzx)))).s90dd, ((VECTOR(int16_t, 2))(0x6C56L, 0x7C4DL)).yyyx))), 0L)).s4 , l_1215)) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1217.sbe3a530f)).even)), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0x45059039L, 0x3116713EL)).xxyx, ((VECTOR(int32_t, 8))(l_1218.sfa5ae6dd)).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1219.s22)).xxxyxyxy)).even))), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x6EADD455L, 0x085BD95CL)), 0x1D3F7927L, 5L)).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1220.yx)).yxyxyyyx)).s16, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(0x36876253L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1221.sd04950ac)).odd)), ((VECTOR(int32_t, 2))(0x16A4EA93L, 0x5A4589E3L)), 1L)).s5327604043110326))).s6d))).yyxx, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x3DCBAAF1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1222.s1b59344700abc8fc)).hi)).lo)).even, ((VECTOR(int32_t, 8))(l_1223.xxyxyxxy)).s24))).xxxy)), (-1L), 0x38E246DDL, 0x341F4711L)).even)).zyxwxyzwxzxxyyyx, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(l_1224.zzwyzwwy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1225.s42)), 0x20A303D4L, 0x055249DEL)).xwxzwywx))))).s1571630524170030, ((VECTOR(int32_t, 2))(l_1226.s75)).xxxxxxyyxyxxyyyy)))))).s8dec)))))).z, 1L, 0x62DBF81CL, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(l_1227.s8968a97fff44b395)).s0e, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(l_1228.s201dfff6)).hi, (int32_t)(l_1229 , l_1230)))).odd))), 0x205B37ABL, (-1L), 0x4EF6399DL, l_1231, 1L, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0x2464A087L)), 7L, 9L)).sf))), 0x78D6F531L, 0x2E2F84A6L, 0x78F94316L)).wxwywzzw)), l_1232, ((VECTOR(int32_t, 4))(1L)), (-7L), 0L, (-1L))).s8)
                    { /* block id: 531 */
                        int16_t l_1233 = 0x6081L;
                        uint32_t l_1234 = 0xA4429F06L;
                        union U3 l_1236 = {0xC410A58F79BB929AL};
                        union U3 *l_1235 = &l_1236;
                        union U3 *l_1237[8][5] = {{&l_1236,&l_1236,&l_1236,&l_1236,&l_1236},{&l_1236,&l_1236,&l_1236,&l_1236,&l_1236},{&l_1236,&l_1236,&l_1236,&l_1236,&l_1236},{&l_1236,&l_1236,&l_1236,&l_1236,&l_1236},{&l_1236,&l_1236,&l_1236,&l_1236,&l_1236},{&l_1236,&l_1236,&l_1236,&l_1236,&l_1236},{&l_1236,&l_1236,&l_1236,&l_1236,&l_1236},{&l_1236,&l_1236,&l_1236,&l_1236,&l_1236}};
                        uint64_t l_1238 = 0x9805797527E41768L;
                        int32_t l_1241 = (-4L);
                        int i, j;
                        l_1234 |= l_1233;
                        l_1237[7][0] = l_1235;
                        ++l_1238;
                        l_1226.s2 ^= l_1241;
                    }
                    else
                    { /* block id: 536 */
                        VECTOR(uint64_t, 16) l_1242 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4A7035B0064D5F5DL), 0x4A7035B0064D5F5DL), 0x4A7035B0064D5F5DL, 18446744073709551615UL, 0x4A7035B0064D5F5DL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4A7035B0064D5F5DL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4A7035B0064D5F5DL), 18446744073709551615UL, 0x4A7035B0064D5F5DL, 18446744073709551615UL, 0x4A7035B0064D5F5DL);
                        union U1 *l_1243[1];
                        union U3 *l_1245 = (void*)0;
                        union U3 **l_1244 = &l_1245;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1243[i] = (void*)0;
                        l_1243[0] = (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(0x3E44D27F6C02F66AL, 0x0ECE444C114958CAL, ((VECTOR(uint64_t, 2))(18446744073709551613UL, 18446744073709551612UL)), ((VECTOR(uint64_t, 4))(l_1242.s0ec4)))).s7631202017174730)).sa9f2)).x , (void*)0);
                        l_1244 = (void*)0;
                    }
                    if ((l_1016.sc |= (l_1246 , (l_1223.x &= l_1247))))
                    { /* block id: 542 */
                        int32_t l_1248 = 0x2CF285D9L;
                        int64_t l_1249 = (-1L);
                        uint32_t l_1250[9][6] = {{4294967290UL,0x937FAE8EL,4294967290UL,4294967290UL,0x937FAE8EL,4294967290UL},{4294967290UL,0x937FAE8EL,4294967290UL,4294967290UL,0x937FAE8EL,4294967290UL},{4294967290UL,0x937FAE8EL,4294967290UL,4294967290UL,0x937FAE8EL,4294967290UL},{4294967290UL,0x937FAE8EL,4294967290UL,4294967290UL,0x937FAE8EL,4294967290UL},{4294967290UL,0x937FAE8EL,4294967290UL,4294967290UL,0x937FAE8EL,4294967290UL},{4294967290UL,0x937FAE8EL,4294967290UL,4294967290UL,0x937FAE8EL,4294967290UL},{4294967290UL,0x937FAE8EL,4294967290UL,4294967290UL,0x937FAE8EL,4294967290UL},{4294967290UL,0x937FAE8EL,4294967290UL,4294967290UL,0x937FAE8EL,4294967290UL},{4294967290UL,0x937FAE8EL,4294967290UL,4294967290UL,0x937FAE8EL,4294967290UL}};
                        union U1 l_1251 = {0x19432AF8L};/* VOLATILE GLOBAL l_1251 */
                        union U1 l_1252 = {0L};/* VOLATILE GLOBAL l_1252 */
                        uint32_t l_1253 = 0xC1A7629EL;
                        int8_t l_1254 = 1L;
                        int i, j;
                        l_1250[4][0] = (l_1223.y = (l_1248 , l_1249));
                        l_1220.y = ((((GROUP_DIVERGE(2, 1) , (l_1251 , l_1252)) , l_1253) , l_1254) , 1L);
                    }
                    else
                    { /* block id: 546 */
                        int32_t l_1256 = 0x07F71706L;
                        int32_t *l_1255 = &l_1256;
                        int32_t *l_1257 = &l_1256;
                        l_1257 = l_1255;
                    }
                    for (l_1212.sd = 0; (l_1212.sd >= 4); l_1212.sd = safe_add_func_int8_t_s_s(l_1212.sd, 5))
                    { /* block id: 551 */
                        int32_t l_1261[4][4] = {{(-8L),0x405B4133L,(-8L),(-8L)},{(-8L),0x405B4133L,(-8L),(-8L)},{(-8L),0x405B4133L,(-8L),(-8L)},{(-8L),0x405B4133L,(-8L),(-8L)}};
                        int32_t *l_1260 = &l_1261[0][3];
                        int32_t l_1262 = 0x3163D933L;
                        int8_t l_1263 = 0L;
                        int i, j;
                        l_1260 = l_1260;
                        l_1006.y &= (l_1262 , l_1263);
                    }
                    for (l_1217.s2 = 0; (l_1217.s2 >= 24); l_1217.s2 = safe_add_func_uint8_t_u_u(l_1217.s2, 9))
                    { /* block id: 557 */
                        int8_t l_1266 = (-1L);
                        uint32_t l_1267 = 0x24DCFA2CL;
                        uint16_t l_1268 = 0xF002L;
                        int32_t l_1269 = 0x678E6C08L;
                        int8_t l_1270[4][5][1] = {{{0x12L},{0x12L},{0x12L},{0x12L},{0x12L}},{{0x12L},{0x12L},{0x12L},{0x12L},{0x12L}},{{0x12L},{0x12L},{0x12L},{0x12L},{0x12L}},{{0x12L},{0x12L},{0x12L},{0x12L},{0x12L}}};
                        uint32_t l_1271 = 7UL;
                        int i, j, k;
                        l_1010.s1 = l_1266;
                        l_1268 &= l_1267;
                        --l_1271;
                        l_1228.sb = 0x70D9CD0BL;
                    }
                }
            }
        }
        l_1278[2][8] ^= (l_1277 = (l_1276 = (l_1275 &= (l_1274 = ((VECTOR(int32_t, 2))((-1L), (-8L))).lo))));
        unsigned int result = 0;
        result += l_992;
        result += l_1274;
        result += l_1275;
        result += l_1276;
        result += l_1277;
        int l_1278_i0, l_1278_i1;
        for (l_1278_i0 = 0; l_1278_i0 < 3; l_1278_i0++) {
            for (l_1278_i1 = 0; l_1278_i1 < 10; l_1278_i1++) {
                result += l_1278[l_1278_i0][l_1278_i1];
            }
        }
        atomic_add(&p_1405->l_special_values[32], result);
    }
    else
    { /* block id: 571 */
        (1 + 1);
    }
    --p_1405->g_1280.se;
    for (p_1405->g_79 = (-15); (p_1405->g_79 < 24); ++p_1405->g_79)
    { /* block id: 577 */
        int32_t l_1285 = 0L;
        int32_t **l_1286 = (void*)0;
        int32_t ***l_1287[5];
        int i;
        for (i = 0; i < 5; i++)
            l_1287[i] = &l_1286;
        l_1285 |= 0x6A1A4DB4L;
        l_1288 = l_1286;
    }
    return p_1405->g_527.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1405->g_16 p_1405->g_32 p_1405->g_35 p_1405->g_258 p_1405->g_149 p_1405->g_108 p_1405->g_69 p_1405->g_70 p_1405->g_112 p_1405->g_117 p_1405->g_535 p_1405->g_448 p_1405->g_477 p_1405->g_527 p_1405->g_530 p_1405->g_102 p_1405->g_358 p_1405->g_86 p_1405->g_53 p_1405->g_194 p_1405->g_49 p_1405->g_219 p_1405->g_46 p_1405->g_371 p_1405->g_162 p_1405->g_381 p_1405->g_202 p_1405->g_89 p_1405->g_149.f0 p_1405->g_221 p_1405->g_79 p_1405->g_284 p_1405->l_comm_values p_1405->g_504 p_1405->g_526 p_1405->g_598 p_1405->g_213 p_1405->g_214 p_1405->g_501 p_1405->g_85 p_1405->g_775 p_1405->g_777 p_1405->g_738 p_1405->g_799 p_1405->g_812
 * writes: p_1405->g_16 p_1405->g_32 p_1405->g_35 p_1405->g_117 p_1405->g_219 p_1405->g_70 p_1405->g_86 p_1405->g_46 p_1405->g_49 p_1405->g_53 p_1405->g_81 p_1405->g_comm_values p_1405->g_304 p_1405->g_202 p_1405->g_85 p_1405->g_244.f3 p_1405->g_284 p_1405->g_504 p_1405->g_448 p_1405->g_194 p_1405->g_221 p_1405->g_89 p_1405->g_725 p_1405->g_812
 */
union U3  func_7(uint16_t  p_8, int32_t  p_9, struct S4 * p_1405)
{ /* block id: 5 */
    int32_t l_13[5] = {0L,0L,0L,0L,0L};
    int32_t l_38 = (-3L);
    int8_t *l_545 = &p_1405->g_108;
    int32_t *l_618 = &p_1405->g_221[8][0][0];
    uint32_t *l_716[8][1][2] = {{{&p_1405->g_112[0],&p_1405->g_112[0]}},{{&p_1405->g_112[0],&p_1405->g_112[0]}},{{&p_1405->g_112[0],&p_1405->g_112[0]}},{{&p_1405->g_112[0],&p_1405->g_112[0]}},{{&p_1405->g_112[0],&p_1405->g_112[0]}},{{&p_1405->g_112[0],&p_1405->g_112[0]}},{{&p_1405->g_112[0],&p_1405->g_112[0]}},{{&p_1405->g_112[0],&p_1405->g_112[0]}}};
    uint32_t **l_715 = &l_716[4][0][1];
    VECTOR(int8_t, 2) l_718 = (VECTOR(int8_t, 2))(0x51L, 0x11L);
    VECTOR(int8_t, 8) l_732 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x32L), 0x32L), 0x32L, (-1L), 0x32L);
    VECTOR(int8_t, 8) l_735 = (VECTOR(int8_t, 8))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0L), 0L), 0L, (-7L), 0L);
    VECTOR(int8_t, 2) l_736 = (VECTOR(int8_t, 2))(0x42L, 0x1AL);
    union U3 l_977 = {0x91B0BCD367E4EEF0L};
    int i, j, k;
    for (p_8 = 0; (p_8 != 44); p_8 = safe_add_func_uint32_t_u_u(p_8, 3))
    { /* block id: 8 */
        int32_t *l_14[5][3] = {{&l_13[3],&l_13[3],&l_13[3]},{&l_13[3],&l_13[3],&l_13[3]},{&l_13[3],&l_13[3],&l_13[3]},{&l_13[3],&l_13[3],&l_13[3]},{&l_13[3],&l_13[3],&l_13[3]}};
        uint32_t *l_31[9][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
        uint16_t *l_33 = (void*)0;
        uint16_t *l_34 = &p_1405->g_35;
        uint32_t **l_717 = &l_716[5][0][0];
        uint16_t l_728 = 0xC26FL;
        uint16_t **l_734 = &l_33;
        uint16_t ***l_733 = &l_734;
        uint8_t l_776[7];
        union U3 **l_804 = &p_1405->g_258;
        int i, j;
        for (i = 0; i < 7; i++)
            l_776[i] = 0x6DL;
        --p_1405->g_16.y;
        if ((((p_9 ^ ((((l_13[2] = p_1405->g_16.y) == (func_19(p_9, func_25(p_8, (((*l_34) &= ((p_1405->g_32.s4 ^= p_8) , p_1405->g_32.s5)) ^ (safe_lshift_func_int16_t_s_u(((p_8 , (l_38 ^= p_8)) && ((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(246UL, 0x93L, (func_41(((safe_rshift_func_int16_t_s_u(((FAKE_DIVERGE(p_1405->local_0_offset, get_local_id(0), 10) == p_1405->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1405->tid, 2))]) == 0x3735CA71L), 11)) , l_14[2][2]), &l_38, p_1405) , 0x15L), ((VECTOR(uint8_t, 2))(0x3EL)), ((VECTOR(uint8_t, 2))(0xA9L)), 0xC4L)).s1, 7)) <= p_9)), FAKE_DIVERGE(p_1405->local_2_offset, get_local_id(2), 10)))), (*p_1405->g_258), l_545, p_8, p_1405), p_1405->g_79, p_9, l_618, p_1405) != (*l_618))) >= 0x2DC2F53C582C0462L) | p_1405->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1405->tid, 2))])) >= p_1405->g_501.x) == 0x32132F59L))
        { /* block id: 277 */
            uint8_t *l_726 = (void*)0;
            uint8_t *l_727 = (void*)0;
            uint8_t *l_730 = (void*)0;
            uint8_t *l_731 = (void*)0;
            VECTOR(int8_t, 2) l_737 = (VECTOR(int8_t, 2))(1L, 0x7CL);
            int32_t l_744[7] = {0L,0L,0L,0L,0L,0L,0L};
            int16_t l_765 = 0L;
            int32_t l_770 = 0x206FE427L;
            uint16_t l_771 = 0x7CE2L;
            int32_t l_795 = 1L;
            int32_t l_796 = 5L;
            int i;
            if ((((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((l_715 == l_717), p_9)), p_9)) , ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_718.xxyxyxyx)).s6043735361353762)).s2) != ((safe_rshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u((((*l_618) = (safe_mul_func_uint8_t_u_u((l_728 = ((VECTOR(uint8_t, 16))(p_1405->g_725.s2796bdd994d23c3f)).s0), (+(safe_unary_minus_func_int16_t_s(p_9)))))) , (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(l_732.s5543)).odd, ((VECTOR(int8_t, 8))(p_9, (l_733 == (void*)0), 0x03L, (-1L), 0x1DL, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_735.s5700021154235323)))).hi)).s5764003426247410, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 2))(0x17L, 0x0DL))))).yyyx)).even)).xxyxxxxy)), ((VECTOR(int8_t, 4))(l_736.yyyy)).ywwxzyxw))), ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(l_737.xyxx)).odd))).xxxxyxxy))).s0020235644237144, ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(p_1405->g_738.sc23b)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(p_1405->g_739.s7c87e8c1)).s50, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(0x20L, ((VECTOR(int8_t, 8))(p_1405->g_740.s15573552)), (safe_mul_func_uint8_t_u_u(((p_1405->g_371.s1 <= p_1405->g_221[8][3][1]) , 246UL), 1UL)), 2L, ((VECTOR(int8_t, 2))(0x1DL)), (-6L), 0x35L, 0x78L)).s81ce)).hi, ((VECTOR(int8_t, 2))(0x37L))))), 0x42L, ((VECTOR(int8_t, 2))((-1L))), 1L, 0x28L, 1L)).hi))).zywywywywyyywyyy))).s2d51, ((VECTOR(int8_t, 4))(0x57L))))).wwyzwyxywyyyzxwz))).s08)), (-1L))).s42))).yxxxyyxy)).s21)).even >= p_8)), 0x490C8A6A14200F0FL)), p_8)) , 0UL)))
            { /* block id: 280 */
                int32_t l_743 = 0x7786CEA1L;
                int32_t l_745 = 4L;
                int32_t l_746 = (-1L);
                int32_t l_747 = 3L;
                int32_t l_748 = 0x4015717AL;
                int32_t l_749 = 0x15CCCFD3L;
                int32_t l_750 = 0x37FB94E1L;
                int32_t l_751[10][10] = {{0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L},{0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L},{0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L},{0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L},{0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L},{0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L},{0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L},{0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L},{0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L},{0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L,3L,0x580D64D6L,0x580D64D6L}};
                uint64_t l_752 = 18446744073709551613UL;
                int i, j;
                (*l_618) = 4L;
                ++l_752;
            }
            else
            { /* block id: 283 */
                uint32_t l_755 = 0x92165693L;
                int32_t l_758 = 0x7694D3B0L;
                int32_t l_759 = 0L;
                int32_t l_760 = 0x48832A3CL;
                int32_t l_764 = 0x4B7AB7ACL;
                int32_t l_767 = (-1L);
                int32_t l_769 = 0x0D4FBF92L;
                VECTOR(int8_t, 16) l_784 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 5L), 5L), 5L, 1L, 5L, (VECTOR(int8_t, 2))(1L, 5L), (VECTOR(int8_t, 2))(1L, 5L), 1L, 5L, 1L, 5L);
                int16_t l_794 = (-10L);
                int i;
                l_755 = (-1L);
                (*l_618) = (-1L);
                for (p_1405->g_85 = 0; (p_1405->g_85 < (-21)); p_1405->g_85 = safe_sub_func_uint64_t_u_u(p_1405->g_85, 9))
                { /* block id: 288 */
                    int8_t l_761[6] = {0x48L,0x48L,0x48L,0x48L,0x48L,0x48L};
                    int32_t l_762 = 0x518C0562L;
                    int32_t l_763 = 0x6C05C3FBL;
                    int32_t l_766 = 0x3362A98EL;
                    int32_t l_768[6];
                    VECTOR(int32_t, 4) l_774 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L);
                    uint64_t *l_791 = (void*)0;
                    uint64_t *l_792 = (void*)0;
                    uint64_t *l_793 = (void*)0;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_768[i] = 0x6F1A0CB8L;
                    ++l_771;
                    l_763 &= ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))((-1L), 9L, ((VECTOR(int32_t, 8))(l_774.xywwyzxy)), ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(5L, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((*p_1405->g_69) & (((void*)0 != &p_1405->g_214) < ((p_1405->g_775 , l_776[0]) && ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 4))(p_1405->g_777.s4252)), ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 8))((~(safe_add_func_uint32_t_u_u(FAKE_DIVERGE(p_1405->group_0_offset, get_group_id(0), 10), ((l_796 = ((p_8 | ((((safe_lshift_func_uint8_t_u_s((p_1405->g_725.s7 = (safe_rshift_func_uint16_t_u_s((((*l_34) = (l_795 = (((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_784.s8def1404)).odd)).wwzywxyy)).s30)).xxxy, (int8_t)((safe_div_func_int64_t_s_s((safe_mod_func_int32_t_s_s((l_744[1] = (+(l_774.w || (3UL & (p_1405->g_89 |= ((*l_618) = (safe_sub_func_int64_t_s_s((0xC6AFE6FEL ^ l_764), l_744[2])))))))), p_8)), p_9)) & p_1405->g_530.sf)))).yzyyxzyy, ((VECTOR(int8_t, 8))(0x5AL)), ((VECTOR(int8_t, 8))(0x64L))))).s0016453525667556))).s3660, ((VECTOR(uint8_t, 4))(1UL)), ((VECTOR(uint8_t, 4))(0xBCL))))).w >= l_794))) > p_9), l_770))), l_735.s1)) == p_8) > 0x2919702D1A0BFCB2L) , (*l_618))) >= 0x1010L)) == l_771)))), 18446744073709551615UL, ((VECTOR(uint64_t, 2))(18446744073709551611UL)), ((VECTOR(uint64_t, 2))(0xD690C36443D8F797L)), 4UL, 18446744073709551615UL)), ((VECTOR(uint64_t, 8))(0xEB79085DD5973647L))))).s40)).yxyx, ((VECTOR(uint64_t, 4))(0UL)))))))).yxxzxzxz, ((VECTOR(uint64_t, 8))(1UL)), ((VECTOR(uint64_t, 8))(0xA1B2813B619126B1L))))), ((VECTOR(uint64_t, 8))(18446744073709551611UL))))).s65)).odd))), l_769, 0x395C6F9FL, p_8, ((VECTOR(int32_t, 8))(0L)), 0x1E831162L, (-10L), 0x47153891L, 0L)).s2c)))).xxyxxxxyxxxxxyyy)).se, 2L, 0x5EF6767AL)).ywyxxxzxzxzxyyxy, ((VECTOR(int32_t, 16))(0x764BBBBAL))))).s5, 1L, 4L, 0x08442E24L, (-1L), (-4L))).scc, (int32_t)p_1405->g_738.se))).even;
                }
            }
            (*l_618) = ((p_1405->g_162 != (void*)0) ^ ((safe_mul_func_uint8_t_u_u((((VECTOR(uint16_t, 2))(p_1405->g_799.sfc)).even > ((*l_34) |= l_771)), p_1405->g_89)) < (safe_rshift_func_int8_t_s_u((l_795 = (l_744[5] &= (safe_mod_func_int8_t_s_s((p_1405->g_284.x | p_1405->g_371.s8), (p_8 | (((p_8 , &p_1405->g_258) == l_804) , 4L)))))), p_9))));
        }
        else
        { /* block id: 304 */
            uint64_t l_807 = 0x614A4DEDE24E046AL;
            union U3 ***l_811 = &l_804;
            for (l_728 = 0; (l_728 > 47); l_728 = safe_add_func_int8_t_s_s(l_728, 1))
            { /* block id: 307 */
                p_1405->g_504.s5 = ((*l_618) = (0x8333L || 0xB067L));
                return (**l_804);
            }
            if (l_807)
                break;
            if ((atomic_inc(&p_1405->l_atomic_input[1]) == 0))
            { /* block id: 314 */
                uint16_t l_808 = 0xFC3BL;
                int32_t l_809 = (-4L);
                l_809 ^= l_808;
                unsigned int result = 0;
                result += l_808;
                result += l_809;
                atomic_add(&p_1405->l_special_values[1], result);
            }
            else
            { /* block id: 316 */
                (1 + 1);
            }
            (*l_811) = l_804;
        }
        --p_1405->g_812;
        if (p_8)
        { /* block id: 322 */
            return (**l_804);
        }
        else
        { /* block id: 324 */
            int32_t **l_815 = &l_14[0][1];
            (*l_815) = &p_1405->g_221[3][3][1];
        }
    }
    if ((atomic_inc(&p_1405->g_atomic_input[41 * get_linear_group_id() + 8]) == 2))
    { /* block id: 329 */
        uint16_t l_816 = 1UL;
        uint64_t l_897 = 0xE9FAA3FDBE49BE48L;
        if ((l_816 = (-10L)))
        { /* block id: 331 */
            int32_t l_817 = 0x2AD5935DL;
            int64_t l_858 = 0L;
            int32_t l_859 = 0x287564DFL;
            int8_t l_860 = 1L;
            uint64_t l_861 = 0x0264076C6EE0B449L;
            int16_t l_864 = (-8L);
            uint32_t l_865 = 0x193CC097L;
            uint32_t l_868[1][5][8] = {{{0x526D36A3L,4294967295UL,3UL,0UL,3UL,4294967295UL,0x526D36A3L,0x0D08646AL},{0x526D36A3L,4294967295UL,3UL,0UL,3UL,4294967295UL,0x526D36A3L,0x0D08646AL},{0x526D36A3L,4294967295UL,3UL,0UL,3UL,4294967295UL,0x526D36A3L,0x0D08646AL},{0x526D36A3L,4294967295UL,3UL,0UL,3UL,4294967295UL,0x526D36A3L,0x0D08646AL},{0x526D36A3L,4294967295UL,3UL,0UL,3UL,4294967295UL,0x526D36A3L,0x0D08646AL}}};
            int32_t l_869[7] = {0x3ADF0835L,0x3ADF0835L,0x3ADF0835L,0x3ADF0835L,0x3ADF0835L,0x3ADF0835L,0x3ADF0835L};
            uint64_t l_870 = 0x91AFB98EBEE0127AL;
            uint32_t l_871 = 0UL;
            int i, j, k;
            for (l_817 = 0; (l_817 <= (-27)); --l_817)
            { /* block id: 334 */
                uint32_t l_820 = 0x669B318AL;
                int32_t l_821 = (-1L);
                uint8_t l_855 = 1UL;
                l_821 &= l_820;
                for (l_821 = 0; (l_821 <= (-20)); --l_821)
                { /* block id: 338 */
                    VECTOR(int32_t, 8) l_824 = (VECTOR(int32_t, 8))(0x531C32E5L, (VECTOR(int32_t, 4))(0x531C32E5L, (VECTOR(int32_t, 2))(0x531C32E5L, 0L), 0L), 0L, 0x531C32E5L, 0L);
                    int16_t l_825 = (-9L);
                    uint32_t l_826 = 0x5D7E7165L;
                    VECTOR(int32_t, 16) l_827 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-5L)), (-5L)), (-5L), (-1L), (-5L), (VECTOR(int32_t, 2))((-1L), (-5L)), (VECTOR(int32_t, 2))((-1L), (-5L)), (-1L), (-5L), (-1L), (-5L));
                    VECTOR(int32_t, 8) l_828 = (VECTOR(int32_t, 8))(0x04D8DC7DL, (VECTOR(int32_t, 4))(0x04D8DC7DL, (VECTOR(int32_t, 2))(0x04D8DC7DL, 0x07BA4AD3L), 0x07BA4AD3L), 0x07BA4AD3L, 0x04D8DC7DL, 0x07BA4AD3L);
                    uint8_t l_829[9][1][2];
                    VECTOR(int32_t, 16) l_830 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L), (VECTOR(int32_t, 2))((-1L), (-3L)), (VECTOR(int32_t, 2))((-1L), (-3L)), (-1L), (-3L), (-1L), (-3L));
                    VECTOR(uint64_t, 16) l_831 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x2D3EB9D45F77D3DBL), 0x2D3EB9D45F77D3DBL), 0x2D3EB9D45F77D3DBL, 0UL, 0x2D3EB9D45F77D3DBL, (VECTOR(uint64_t, 2))(0UL, 0x2D3EB9D45F77D3DBL), (VECTOR(uint64_t, 2))(0UL, 0x2D3EB9D45F77D3DBL), 0UL, 0x2D3EB9D45F77D3DBL, 0UL, 0x2D3EB9D45F77D3DBL);
                    uint8_t l_832 = 0xAEL;
                    VECTOR(uint8_t, 4) l_833 = (VECTOR(uint8_t, 4))(0xF5L, (VECTOR(uint8_t, 2))(0xF5L, 255UL), 255UL);
                    uint32_t l_834[8] = {0xB4301AD3L,0xB4301AD3L,0xB4301AD3L,0xB4301AD3L,0xB4301AD3L,0xB4301AD3L,0xB4301AD3L,0xB4301AD3L};
                    uint8_t l_835 = 0xB5L;
                    VECTOR(int32_t, 8) l_836 = (VECTOR(int32_t, 8))(0x7F190FDAL, (VECTOR(int32_t, 4))(0x7F190FDAL, (VECTOR(int32_t, 2))(0x7F190FDAL, 9L), 9L), 9L, 0x7F190FDAL, 9L);
                    VECTOR(int16_t, 16) l_837 = (VECTOR(int16_t, 16))(0x15EDL, (VECTOR(int16_t, 4))(0x15EDL, (VECTOR(int16_t, 2))(0x15EDL, 0L), 0L), 0L, 0x15EDL, 0L, (VECTOR(int16_t, 2))(0x15EDL, 0L), (VECTOR(int16_t, 2))(0x15EDL, 0L), 0x15EDL, 0L, 0x15EDL, 0L);
                    uint16_t l_838 = 0UL;
                    VECTOR(int16_t, 8) l_839 = (VECTOR(int16_t, 8))(0x7D6BL, (VECTOR(int16_t, 4))(0x7D6BL, (VECTOR(int16_t, 2))(0x7D6BL, 0x5322L), 0x5322L), 0x5322L, 0x7D6BL, 0x5322L);
                    VECTOR(int16_t, 8) l_840 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x06EDL), 0x06EDL), 0x06EDL, (-1L), 0x06EDL);
                    VECTOR(int16_t, 4) l_841 = (VECTOR(int16_t, 4))(0x70ACL, (VECTOR(int16_t, 2))(0x70ACL, 1L), 1L);
                    VECTOR(int16_t, 2) l_842 = (VECTOR(int16_t, 2))(0x2B27L, 0x088EL);
                    uint32_t l_843[7] = {0x9D7F3A6DL,0x9D7F3A6DL,0x9D7F3A6DL,0x9D7F3A6DL,0x9D7F3A6DL,0x9D7F3A6DL,0x9D7F3A6DL};
                    uint64_t l_844 = 5UL;
                    int32_t l_845 = 2L;
                    VECTOR(int32_t, 2) l_846 = (VECTOR(int32_t, 2))(0x72487828L, (-5L));
                    int64_t l_847 = 0x3A6EE2A5386EBEC3L;
                    uint64_t l_848[3];
                    uint64_t l_849[1];
                    int16_t l_850 = (-8L);
                    int64_t l_851 = 1L;
                    uint16_t l_852 = 9UL;
                    int32_t l_853 = (-6L);
                    int32_t l_854 = 0x52231F81L;
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_829[i][j][k] = 4UL;
                        }
                    }
                    for (i = 0; i < 3; i++)
                        l_848[i] = 0xA8033A346A7BCA82L;
                    for (i = 0; i < 1; i++)
                        l_849[i] = 18446744073709551611UL;
                    l_825 = ((VECTOR(int32_t, 4))(l_824.s1574)).w;
                    l_826 &= 0x04AF4171L;
                    l_829[0][0][0] = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_827.sa060)), 0x3C48B835L, ((VECTOR(int32_t, 2))(l_828.s13)).lo, 0L, 0L)).s03, (int32_t)0x5B074B25L))))).lo;
                    l_854 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_830.s83)).yyyyxyxxxxxxyxyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x4ABEB4C9L, 0x5156D815L, (((VECTOR(uint64_t, 2))(l_831.s1f)).hi , 0x79E4CB21L), 0L, (l_832 , (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_833.wxzw)).zzyxzzxyyxxzxwyx)).s0 , 0x108BD19CL)), 0x2B02E0D0L, (-1L), 0L)).odd)).wyzwxwyxxywwzxxw, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_834[4], 0x0C3C6077L, 1L, l_835, 0x50AE9EB5L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_836.s7040)).wwzyywzw)))), 0L, (-1L), (-6L))).s34)), ((VECTOR(int32_t, 2))(0x4121C2FBL, 0x230A1DF6L))))).yxxyxyxxxyyxxyyx))).s422b, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(l_837.s1e)).xyxyxxxxxxxyyyxy, ((VECTOR(int16_t, 8))(0L, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 16))(0x49CEL, (-9L), 1L, 0x70AEL, ((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 4))(l_838, 8L, (-5L), 0x3B91L)).wzwywyyw, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_839.s60)).yyxx)).zywyyxxyzzzyzxxy)).s4d33)).wwxxwzxy, ((VECTOR(int16_t, 16))(0x7ACEL, 0x5AE7L, ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(l_840.s57)).xxyyxxxyyxyxxyyx, ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(l_841.zywxxxwx)), ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(0x0FF8L, 7L)).xyxx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(0x51D5L, ((VECTOR(int16_t, 8))((l_845 = (l_844 = (GROUP_DIVERGE(2, 1) , (l_843[0] = ((VECTOR(int16_t, 8))(l_842.xxyyyyxx)).s7)))), (l_846.x , (l_847 = 0x06FAL)), 0x1986L, 0L, 0x4904L, l_848[1], 0L, 0x63A8L)), 0x5776L, l_849[0], 2L, 0x7CBDL, 7L, 8L, (-4L))).sefa3, ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 4))(0x5B76L)))))))))))).wwxxyzxz))).s4074610407333120, ((VECTOR(int16_t, 16))((-1L)))))).s7, ((VECTOR(int16_t, 4))(0x7649L)), l_850, (-5L), 0L, ((VECTOR(int16_t, 2))(0x7333L)), 1L, 0x0E20L, 1L, 0x3093L)).odd))).odd, ((VECTOR(int16_t, 4))((-1L)))))).wzywywxy, (int16_t)l_851))), 0x38B4L, ((VECTOR(int16_t, 2))(1L)), 0x37ECL)).sb5, ((VECTOR(int16_t, 2))(0L)), ((VECTOR(int16_t, 2))(0x5582L))))).yyxy, ((VECTOR(int16_t, 4))(0x01B1L))))), l_852, 0x6C3EL, 1L)).s5014074570377370))).lo, (int16_t)l_853))).s33, ((VECTOR(uint16_t, 2))(65535UL))))).yxxxxxxx, ((VECTOR(int32_t, 8))(0x7B4D10EFL))))))).even))).yyzxxzzz)).s6;
                }
                --l_855;
            }
            --l_861;
            l_865--;
            l_871 = (l_870 = (l_869[6] = l_868[0][2][7]));
        }
        else
        { /* block id: 355 */
            uint8_t l_872 = 0x37L;
            VECTOR(int16_t, 16) l_873 = (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 1L), 1L), 1L, 5L, 1L, (VECTOR(int16_t, 2))(5L, 1L), (VECTOR(int16_t, 2))(5L, 1L), 5L, 1L, 5L, 1L);
            int8_t l_874 = 0x78L;
            int32_t l_875 = (-1L);
            int i;
            l_873.s6 &= l_872;
            l_875 |= l_874;
        }
        for (l_816 = (-22); (l_816 == 25); l_816 = safe_add_func_int8_t_s_s(l_816, 5))
        { /* block id: 361 */
            int32_t l_878 = (-2L);
            uint32_t l_879 = 0xD43EF092L;
            int32_t *l_880 = (void*)0;
            int32_t *l_881 = (void*)0;
            VECTOR(int64_t, 2) l_882 = (VECTOR(int64_t, 2))(0x5185F1355CC1DEAFL, 0x2C73915E6EE466D1L);
            VECTOR(int64_t, 4) l_883 = (VECTOR(int64_t, 4))(0x333D944EFB4F9758L, (VECTOR(int64_t, 2))(0x333D944EFB4F9758L, 0x5C3044A4084129ABL), 0x5C3044A4084129ABL);
            VECTOR(int32_t, 4) l_884 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-4L)), (-4L));
            int32_t l_885 = 0L;
            uint16_t l_886[4];
            int32_t *l_887 = &l_885;
            int32_t *l_888 = (void*)0;
            int i;
            for (i = 0; i < 4; i++)
                l_886[i] = 4UL;
            l_879 &= l_878;
            l_881 = l_880;
            l_888 = (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_882.yxxx)), (-1L), ((VECTOR(int64_t, 4))(l_883.yzzw)), 0x4D64483DAEEC674DL, (-1L), ((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 4))((-1L), 0x24C1AF299DEF2550L, (-1L), 1L)).yzywxzyz))).s4, 1L, 0x37E88714583F5BC5L, (-1L), 0x33471C37D96BCA40L)).s7 , ((l_885 = ((VECTOR(int32_t, 4))(l_884.yyww)).y) , (l_886[2] , l_887)));
        }
        for (l_816 = 0; (l_816 > 52); l_816++)
        { /* block id: 369 */
            int32_t l_891 = (-6L);
            int64_t l_892 = (-2L);
            int32_t l_893 = 0x6B231DD2L;
            uint8_t l_894 = 0x43L;
            l_894++;
        }
        --l_897;
        unsigned int result = 0;
        result += l_816;
        result += l_897;
        atomic_add(&p_1405->g_special_values[41 * get_linear_group_id() + 8], result);
    }
    else
    { /* block id: 373 */
        (1 + 1);
    }
    if ((atomic_inc(&p_1405->g_atomic_input[41 * get_linear_group_id() + 9]) == 3))
    { /* block id: 377 */
        int8_t l_900 = 4L;
        int16_t l_901 = (-7L);
        int64_t l_902 = 0x3EDC3E7E328C30C3L;
        int32_t l_903[7] = {1L,1L,1L,1L,1L,1L,1L};
        uint16_t l_904 = 65528UL;
        int32_t l_907 = 0x36B4DD5FL;
        int64_t l_908 = 0x55944A2D82102169L;
        uint16_t l_909 = 65535UL;
        VECTOR(int32_t, 8) l_912 = (VECTOR(int32_t, 8))(0x64D89C63L, (VECTOR(int32_t, 4))(0x64D89C63L, (VECTOR(int32_t, 2))(0x64D89C63L, 6L), 6L), 6L, 0x64D89C63L, 6L);
        int64_t l_913 = 1L;
        VECTOR(int32_t, 8) l_914 = (VECTOR(int32_t, 8))(0x07684D95L, (VECTOR(int32_t, 4))(0x07684D95L, (VECTOR(int32_t, 2))(0x07684D95L, 0x04A27FF5L), 0x04A27FF5L), 0x04A27FF5L, 0x07684D95L, 0x04A27FF5L);
        VECTOR(int32_t, 8) l_915 = (VECTOR(int32_t, 8))(0x5AF4B81AL, (VECTOR(int32_t, 4))(0x5AF4B81AL, (VECTOR(int32_t, 2))(0x5AF4B81AL, 0x7D8C5FDFL), 0x7D8C5FDFL), 0x7D8C5FDFL, 0x5AF4B81AL, 0x7D8C5FDFL);
        VECTOR(int32_t, 4) l_916 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0L), 0L);
        uint32_t l_917 = 4294967287UL;
        int32_t *l_918 = (void*)0;
        int32_t *l_919 = &l_907;
        uint64_t l_920[8][2] = {{0xAC685E9E6228FF4AL,0xAC685E9E6228FF4AL},{0xAC685E9E6228FF4AL,0xAC685E9E6228FF4AL},{0xAC685E9E6228FF4AL,0xAC685E9E6228FF4AL},{0xAC685E9E6228FF4AL,0xAC685E9E6228FF4AL},{0xAC685E9E6228FF4AL,0xAC685E9E6228FF4AL},{0xAC685E9E6228FF4AL,0xAC685E9E6228FF4AL},{0xAC685E9E6228FF4AL,0xAC685E9E6228FF4AL},{0xAC685E9E6228FF4AL,0xAC685E9E6228FF4AL}};
        int64_t l_921[10] = {7L,7L,7L,7L,7L,7L,7L,7L,7L,7L};
        int i, j;
        --l_904;
        --l_909;
        l_919 = (((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(l_912.s47603237)).lo, ((VECTOR(int32_t, 4))((l_913 , 0x7CBA4AA1L), 0x4343B448L, 0x32466E27L, 3L))))).wxxxwxwx)).s37, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_914.s0330515574334200)).even)).odd)).lo, ((VECTOR(int32_t, 8))(l_915.s52701206)).s10))).yyxyxxxxxxyyyxyx, ((VECTOR(int32_t, 16))(l_916.yywxxwxxywxxwzwx)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_917, ((VECTOR(int32_t, 2))(0x1D9C9DD4L, 0L)), 0x5770D683L)).zxzzzxxz)).s7737474057506553))).sb , l_918);
        if ((l_921[2] |= l_920[6][0]))
        { /* block id: 382 */
            int16_t l_922 = 0L;
            uint8_t l_923 = 255UL;
            VECTOR(uint64_t, 16) l_926 = (VECTOR(uint64_t, 16))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 18446744073709551609UL), 18446744073709551609UL), 18446744073709551609UL, 3UL, 18446744073709551609UL, (VECTOR(uint64_t, 2))(3UL, 18446744073709551609UL), (VECTOR(uint64_t, 2))(3UL, 18446744073709551609UL), 3UL, 18446744073709551609UL, 3UL, 18446744073709551609UL);
            union U3 l_927 = {0x959E88E2AE0EF13EL};
            uint16_t l_928[3][4] = {{0x31C6L,65533UL,65531UL,65533UL},{0x31C6L,65533UL,65531UL,65533UL},{0x31C6L,65533UL,65531UL,65533UL}};
            int32_t l_929 = (-1L);
            int i, j;
            l_923--;
            if (((((VECTOR(uint64_t, 8))(l_926.sbb863038)).s1 , l_927) , (l_929 = l_928[2][3])))
            { /* block id: 385 */
                int16_t l_930 = 0x1987L;
                l_929 &= (l_912.s1 = l_930);
            }
            else
            { /* block id: 388 */
                int32_t l_931 = 0x0021804FL;
                VECTOR(int32_t, 2) l_932 = (VECTOR(int32_t, 2))(9L, 0L);
                uint8_t l_933 = 0x23L;
                union U0 l_934[6][3] = {{{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL}}};
                VECTOR(int32_t, 16) l_935 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3EB63645L), 0x3EB63645L), 0x3EB63645L, (-1L), 0x3EB63645L, (VECTOR(int32_t, 2))((-1L), 0x3EB63645L), (VECTOR(int32_t, 2))((-1L), 0x3EB63645L), (-1L), 0x3EB63645L, (-1L), 0x3EB63645L);
                uint32_t l_936 = 4294967295UL;
                union U2 l_937 = {0};/* VOLATILE GLOBAL l_937 */
                VECTOR(int16_t, 2) l_938 = (VECTOR(int16_t, 2))(0x33DFL, 0x7FBEL);
                VECTOR(uint16_t, 2) l_939 = (VECTOR(uint16_t, 2))(0x8888L, 0x8D71L);
                int32_t l_940 = (-1L);
                int8_t l_941 = (-5L);
                uint64_t l_942 = 0x9A880FEEE5BA597FL;
                int16_t l_943 = 0x3EF8L;
                int16_t l_944 = 1L;
                uint32_t l_945[7][8][4] = {{{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L}},{{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L}},{{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L}},{{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L}},{{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L}},{{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L}},{{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L},{0xCFFCBB7FL,4294967295UL,8UL,0xC06F1681L}}};
                uint64_t l_946 = 0UL;
                uint8_t l_947 = 0x4DL;
                int64_t l_948[2][1][5];
                int32_t l_949 = 1L;
                int32_t l_950 = 0x154497B3L;
                int32_t l_951[7][10][3] = {{{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L}},{{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L}},{{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L}},{{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L}},{{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L}},{{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L}},{{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L},{3L,(-1L),5L}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_948[i][j][k] = (-7L);
                    }
                }
                l_951[2][4][2] ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((l_935.sb = (l_915.s0 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((-1L), l_931, (-1L), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(l_932.xx))))).even, 0x2CDE8676L, l_933, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((l_934[5][1] , 0x7422FE01L), ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(l_935.s1a218162)), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_936, (-8L), ((VECTOR(int32_t, 4))(0x1A3D66E1L, 0x52894E83L, (-8L), 0x16D89AD9L)), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))((l_937 , (((VECTOR(uint32_t, 2))(0x12929F19L, 0UL)).hi , ((VECTOR(int32_t, 4))(0x02A91963L, 0x52C90290L, 0x6C168E83L, (-8L))).x)), ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))((-3L), 0x3E1EL)).yyxyyxyy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_938.xy)).xxxxxyxx)).s3554676327131716)).odd))))).odd, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 2))(0x9C0AL, 0xB9DCL)), ((VECTOR(uint16_t, 4))(l_939.xyxx)).lo))).xxyy))).yzxzzzyw, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(2L, ((VECTOR(int32_t, 2))(0x765E90B1L)), 0x510360F5L)).even, ((VECTOR(int32_t, 2))(1L))))).xyxyxxxy, ((VECTOR(int32_t, 8))(0x30BC29CCL))))), 0x0D0A8F3DL, 1L, l_940, 0L, l_941, 5L, 0L)).s39, ((VECTOR(int32_t, 2))(8L)), ((VECTOR(int32_t, 2))((-1L)))))), 0x5472B061L, 0x724FE42FL)), l_942, ((VECTOR(int32_t, 2))(0x4CFB841CL)), (-1L))).hi, ((VECTOR(int32_t, 4))(0x5DE8D92CL))))), ((VECTOR(int32_t, 2))(0x3FD7818AL)), 0x67F11BEDL, l_943, 0x639DFBEBL, (-6L))).s79fa, ((VECTOR(int32_t, 4))(0x291E16D1L)), ((VECTOR(int32_t, 4))(6L))))).yyxyzzwx))).s7, 0x6B2D6B2EL, ((VECTOR(int32_t, 8))((-6L))), 0x2C4B83CAL, (-1L), 0L, (-1L), (-1L))).even)).s00))).xyyx)).odd)), ((VECTOR(int32_t, 2))(1L)), l_944, ((VECTOR(int32_t, 4))(0x7C1A1292L)), 2L)))).s7)), l_945[4][5][1], l_946, 0x76184A62L, (-7L), ((VECTOR(int32_t, 2))(1L)), 1L)), l_947, (-1L), (-2L), l_948[1][0][2], l_949, l_950, (-9L), 0x024853C2L)).s6;
            }
        }
        else
        { /* block id: 393 */
            VECTOR(int32_t, 2) l_952 = (VECTOR(int32_t, 2))(0L, 0x6091B755L);
            uint32_t l_953[5][10][5] = {{{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L}},{{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L}},{{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L}},{{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L}},{{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L},{0x2A585CCAL,0x50FDCB9BL,0x50FDCB9BL,0x2A585CCAL,0x7B44F0F0L}}};
            int32_t l_954 = 0x406D8256L;
            int64_t l_976[9][6][4] = {{{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L}},{{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L}},{{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L}},{{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L}},{{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L}},{{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L}},{{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L}},{{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L}},{{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L},{0x7E5A479ECCCD4B90L,9L,1L,0x2691163E33EC4471L}}};
            int i, j, k;
            l_953[2][4][2] &= ((VECTOR(int32_t, 8))(l_952.yyyxyxyy)).s4;
            l_916.z ^= l_954;
            for (l_952.x = (-7); (l_952.x <= 4); l_952.x++)
            { /* block id: 398 */
                int16_t l_957 = 0x59E1L;
                uint32_t l_958 = 4294967295UL;
                uint8_t l_959[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_959[i] = 0xE8L;
                if ((l_959[0] = (l_958 |= l_957)))
                { /* block id: 401 */
                    int16_t l_962 = 0x7AA5L;
                    int16_t *l_961 = &l_962;
                    int16_t **l_960 = &l_961;
                    int16_t **l_963[1];
                    VECTOR(int32_t, 2) l_964 = (VECTOR(int32_t, 2))((-1L), 1L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_963[i] = &l_961;
                    l_963[0] = (l_960 = (void*)0);
                    l_915.s0 = (l_903[2] = ((VECTOR(int32_t, 4))(l_964.xxyx)).x);
                }
                else
                { /* block id: 406 */
                    VECTOR(uint8_t, 8) l_965 = (VECTOR(uint8_t, 8))(0x3AL, (VECTOR(uint8_t, 4))(0x3AL, (VECTOR(uint8_t, 2))(0x3AL, 0xB8L), 0xB8L), 0xB8L, 0x3AL, 0xB8L);
                    int64_t l_968[5][5][10] = {{{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L}},{{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L}},{{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L}},{{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L}},{{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L},{(-1L),0x0249B6954FA1A316L,(-1L),0x2657A56F702257ECL,0x0E6E9119396485AEL,(-1L),1L,(-10L),(-3L),0x500C2E8F1548BA07L}}};
                    uint8_t l_969 = 0x29L;
                    int i, j, k;
                    ++l_965.s3;
                    l_969 = l_968[0][3][8];
                }
                for (l_958 = 0; (l_958 != 55); l_958 = safe_add_func_int32_t_s_s(l_958, 2))
                { /* block id: 412 */
                    VECTOR(int32_t, 16) l_972 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4AEB8B7BL), 0x4AEB8B7BL), 0x4AEB8B7BL, 0L, 0x4AEB8B7BL, (VECTOR(int32_t, 2))(0L, 0x4AEB8B7BL), (VECTOR(int32_t, 2))(0L, 0x4AEB8B7BL), 0L, 0x4AEB8B7BL, 0L, 0x4AEB8B7BL);
                    int32_t l_973 = 1L;
                    uint64_t l_974[8] = {0xC1ED1D0064906E43L,0xC1ED1D0064906E43L,0xC1ED1D0064906E43L,0xC1ED1D0064906E43L,0xC1ED1D0064906E43L,0xC1ED1D0064906E43L,0xC1ED1D0064906E43L,0xC1ED1D0064906E43L};
                    VECTOR(int32_t, 16) l_975 = (VECTOR(int32_t, 16))(0x3C31B617L, (VECTOR(int32_t, 4))(0x3C31B617L, (VECTOR(int32_t, 2))(0x3C31B617L, (-2L)), (-2L)), (-2L), 0x3C31B617L, (-2L), (VECTOR(int32_t, 2))(0x3C31B617L, (-2L)), (VECTOR(int32_t, 2))(0x3C31B617L, (-2L)), 0x3C31B617L, (-2L), 0x3C31B617L, (-2L));
                    int i;
                    l_954 = ((VECTOR(int32_t, 2))(l_972.se1)).hi;
                    l_915.s3 &= (l_907 = (l_973 , l_974[5]));
                    l_915.s4 &= ((VECTOR(int32_t, 2))(l_975.s28)).hi;
                }
            }
            l_952.x ^= (l_916.y |= l_976[4][4][0]);
        }
        unsigned int result = 0;
        result += l_900;
        result += l_901;
        result += l_902;
        int l_903_i0;
        for (l_903_i0 = 0; l_903_i0 < 7; l_903_i0++) {
            result += l_903[l_903_i0];
        }
        result += l_904;
        result += l_907;
        result += l_908;
        result += l_909;
        result += l_912.s7;
        result += l_912.s6;
        result += l_912.s5;
        result += l_912.s4;
        result += l_912.s3;
        result += l_912.s2;
        result += l_912.s1;
        result += l_912.s0;
        result += l_913;
        result += l_914.s7;
        result += l_914.s6;
        result += l_914.s5;
        result += l_914.s4;
        result += l_914.s3;
        result += l_914.s2;
        result += l_914.s1;
        result += l_914.s0;
        result += l_915.s7;
        result += l_915.s6;
        result += l_915.s5;
        result += l_915.s4;
        result += l_915.s3;
        result += l_915.s2;
        result += l_915.s1;
        result += l_915.s0;
        result += l_916.w;
        result += l_916.z;
        result += l_916.y;
        result += l_916.x;
        result += l_917;
        int l_920_i0, l_920_i1;
        for (l_920_i0 = 0; l_920_i0 < 8; l_920_i0++) {
            for (l_920_i1 = 0; l_920_i1 < 2; l_920_i1++) {
                result += l_920[l_920_i0][l_920_i1];
            }
        }
        int l_921_i0;
        for (l_921_i0 = 0; l_921_i0 < 10; l_921_i0++) {
            result += l_921[l_921_i0];
        }
        atomic_add(&p_1405->g_special_values[41 * get_linear_group_id() + 9], result);
    }
    else
    { /* block id: 422 */
        (1 + 1);
    }
    return l_977;
}


/* ------------------------------------------ */
/* 
 * reads : p_1405->g_102 p_1405->g_79 p_1405->g_701 p_1405->g_53 p_1405->g_46 p_1405->g_108 p_1405->g_530
 * writes: p_1405->g_53 p_1405->g_194 p_1405->g_219
 */
int8_t  func_19(uint32_t  p_20, int8_t * p_21, uint32_t  p_22, int32_t  p_23, int32_t * p_24, struct S4 * p_1405)
{ /* block id: 220 */
    int32_t *l_685 = (void*)0;
    int32_t *l_686 = &p_1405->g_46;
    int32_t *l_687 = &p_1405->g_46;
    int32_t *l_688 = (void*)0;
    int32_t *l_689 = &p_1405->g_53;
    int32_t *l_690 = &p_1405->g_79;
    int32_t *l_691 = (void*)0;
    int32_t *l_692[2];
    uint32_t l_693 = 0xBA8E2179L;
    uint64_t l_700 = 1UL;
    uint64_t *l_703 = (void*)0;
    uint64_t *l_704[9];
    int16_t *l_705 = (void*)0;
    uint16_t *l_706 = (void*)0;
    uint16_t *l_707 = &p_1405->g_194;
    int32_t **l_708 = (void*)0;
    int32_t **l_709 = (void*)0;
    int32_t **l_710 = &p_1405->g_219;
    int i;
    for (i = 0; i < 2; i++)
        l_692[i] = &p_1405->g_221[8][0][0];
    for (i = 0; i < 9; i++)
        l_704[i] = (void*)0;
    if ((atomic_inc(&p_1405->l_atomic_input[12]) == 2))
    { /* block id: 222 */
        int32_t l_619 = 0L;
        int16_t l_620 = 0x7F40L;
        uint16_t l_621 = 65535UL;
        int8_t l_622 = 0x1FL;
        int64_t l_681 = 0x053F4E2C7F53B32DL;
        uint32_t l_682 = 0x6600C550L;
        l_620 = l_619;
        l_622 = l_621;
        for (l_619 = 17; (l_619 <= (-30)); l_619 = safe_sub_func_int64_t_s_s(l_619, 5))
        { /* block id: 227 */
            int32_t l_625 = 0x166979F4L;
            int32_t l_679 = 0x212F51E3L;
            int64_t l_680 = 0x754E2D9ABFA0CD9AL;
            for (l_625 = (-4); (l_625 != 25); l_625++)
            { /* block id: 230 */
                VECTOR(int16_t, 16) l_628 = (VECTOR(int16_t, 16))(0x2E69L, (VECTOR(int16_t, 4))(0x2E69L, (VECTOR(int16_t, 2))(0x2E69L, (-2L)), (-2L)), (-2L), 0x2E69L, (-2L), (VECTOR(int16_t, 2))(0x2E69L, (-2L)), (VECTOR(int16_t, 2))(0x2E69L, (-2L)), 0x2E69L, (-2L), 0x2E69L, (-2L));
                int64_t l_629 = 0x15BA93DBE8FD8D45L;
                union U3 l_665 = {0x9EB9262A3562DADFL};
                union U3 *l_664 = &l_665;
                union U3 *l_666 = &l_665;
                union U3 *l_667 = &l_665;
                uint32_t l_668[6];
                uint8_t l_671 = 0xCEL;
                int32_t l_672[4];
                int i;
                for (i = 0; i < 6; i++)
                    l_668[i] = 1UL;
                for (i = 0; i < 4; i++)
                    l_672[i] = 0x353BFB04L;
                if (((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(l_628.s4c)).yxxyyxxx, ((VECTOR(uint16_t, 4))(0x7808L, (l_629 , 0xF552L), 0UL, 0x837FL)).xwywyyxw))).s4)
                { /* block id: 231 */
                    uint32_t l_630 = 3UL;
                    l_630 &= (-5L);
                    for (l_630 = 22; (l_630 != 1); l_630--)
                    { /* block id: 235 */
                        int32_t l_633 = 1L;
                        uint32_t l_634[9] = {0x70A188DBL,0UL,0x70A188DBL,0x70A188DBL,0UL,0x70A188DBL,0x70A188DBL,0UL,0x70A188DBL};
                        int i;
                        l_634[4]++;
                    }
                }
                else
                { /* block id: 238 */
                    int32_t l_637 = 0x388E9524L;
                    int8_t l_638 = (-1L);
                    uint8_t l_639 = 1UL;
                    uint16_t l_640 = 0UL;
                    union U3 l_641 = {0x374F200614C695C2L};
                    VECTOR(int16_t, 8) l_642 = (VECTOR(int16_t, 8))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 1L), 1L), 1L, 4L, 1L);
                    int32_t l_643[6][8][5] = {{{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L}},{{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L}},{{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L}},{{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L}},{{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L}},{{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L},{(-5L),0x1934F174L,(-7L),0x4252B139L,0x18B97B95L}}};
                    uint64_t l_644 = 1UL;
                    int32_t l_661 = (-1L);
                    int32_t *l_660 = &l_661;
                    uint16_t l_662[8][8][4] = {{{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL}},{{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL}},{{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL}},{{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL}},{{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL}},{{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL}},{{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL}},{{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL},{0x2CBBL,65526UL,0x6D0BL,0x2CBBL}}};
                    int8_t l_663 = 0L;
                    int i, j, k;
                    l_638 = ((l_629 = 1L) , l_637);
                    if ((l_639 , ((l_640 , (l_641 , ((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_642.s6670455503535252)).sf971)).yzyxzwwy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x19D2L, 1L)).yxxyyxxx)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))((-10L), 0x67A7L)))).yyyxyxyx))).s0)) , (l_644 = l_643[0][3][4]))))
                    { /* block id: 242 */
                        int32_t l_645 = (-1L);
                        int32_t l_646 = (-1L);
                        uint16_t l_647 = 0xBD1EL;
                        int32_t l_648 = 7L;
                        l_646 &= l_645;
                        l_648 = l_647;
                    }
                    else
                    { /* block id: 245 */
                        VECTOR(int32_t, 8) l_649 = (VECTOR(int32_t, 8))(0x2FD3F3F9L, (VECTOR(int32_t, 4))(0x2FD3F3F9L, (VECTOR(int32_t, 2))(0x2FD3F3F9L, 1L), 1L), 1L, 0x2FD3F3F9L, 1L);
                        uint32_t l_650 = 0x90956B0CL;
                        int32_t l_651 = 1L;
                        VECTOR(int32_t, 4) l_652 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
                        int16_t l_653 = 0x65C5L;
                        VECTOR(uint32_t, 8) l_654 = (VECTOR(uint32_t, 8))(0x11CF3663L, (VECTOR(uint32_t, 4))(0x11CF3663L, (VECTOR(uint32_t, 2))(0x11CF3663L, 4294967295UL), 4294967295UL), 4294967295UL, 0x11CF3663L, 4294967295UL);
                        int32_t l_655 = 0L;
                        uint32_t l_656 = 0xD147266CL;
                        VECTOR(uint64_t, 8) l_657 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
                        int i;
                        l_651 = (l_650 |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_649.s36)))))).odd);
                        l_653 &= ((VECTOR(int32_t, 4))(l_652.yzwx)).y;
                        l_656 &= (l_655 = l_654.s0);
                        l_657.s0++;
                    }
                    l_660 = (void*)0;
                    l_663 = ((VECTOR(int32_t, 4))(0x3B886939L, l_662[6][0][2], 0x58AAE6BEL, (-7L))).x;
                }
                l_667 = (l_666 = l_664);
                l_672[1] = ((++l_668[0]) , l_671);
                for (l_628.s9 = 20; (l_628.s9 != (-10)); --l_628.s9)
                { /* block id: 262 */
                    VECTOR(int16_t, 8) l_675 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-10L)), (-10L)), (-10L), 1L, (-10L));
                    int32_t l_677 = (-1L);
                    int32_t *l_676[10][1][9] = {{{&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677}},{{&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677}},{{&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677}},{{&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677}},{{&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677}},{{&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677}},{{&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677}},{{&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677}},{{&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677}},{{&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677}}};
                    int32_t *l_678 = &l_677;
                    int i, j, k;
                    l_678 = (((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(l_675.s4613)).odd, ((VECTOR(int16_t, 2))(5L, 3L))))).hi , l_676[3][0][4]);
                }
            }
            l_680 ^= l_679;
        }
        l_682++;
        unsigned int result = 0;
        result += l_619;
        result += l_620;
        result += l_621;
        result += l_622;
        result += l_681;
        result += l_682;
        atomic_add(&p_1405->l_special_values[12], result);
    }
    else
    { /* block id: 269 */
        (1 + 1);
    }
    l_693--;
    (*l_710) = ((((safe_mul_func_int8_t_s_s((&p_1405->g_219 == (void*)0), p_1405->g_102.y)) , (void*)0) != (void*)0) , ((((*l_707) = (((safe_add_func_int8_t_s_s((((((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 4))((((((*l_690) > (l_700 >= (p_1405->g_701 != (((*l_689) ^= GROUP_DIVERGE(0, 1)) , l_705)))) , 4L) , p_22) ^ (*l_686)), 0x7ADFL, 0xA26DL, 0UL)).wwwzyywwwzzxyyyz))).s0 , (*p_21)) & (*l_687)) > 0x54L), (*l_687))) <= 65528UL) < GROUP_DIVERGE(1, 1))) && p_23) , (void*)0));
    return p_1405->g_530.s6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1405->g_108 p_1405->g_69 p_1405->g_70 p_1405->g_112 p_1405->g_117 p_1405->g_535 p_1405->g_448 p_1405->g_477 p_1405->g_527 p_1405->g_302 p_1405->g_381 p_1405->g_530 p_1405->g_102 p_1405->g_358 p_1405->g_86 p_1405->g_53 p_1405->g_194 p_1405->g_49 p_1405->g_219 p_1405->g_46 p_1405->g_371 p_1405->g_162 p_1405->g_202 p_1405->g_89 p_1405->g_149.f0 p_1405->g_258 p_1405->g_149 p_1405->g_221 p_1405->g_79 p_1405->g_284 p_1405->l_comm_values p_1405->g_504 p_1405->g_526 p_1405->g_598 p_1405->g_602 p_1405->g_603 p_1405->g_213 p_1405->g_214 p_1405->g_501
 * writes: p_1405->g_117 p_1405->g_219 p_1405->g_70 p_1405->g_86 p_1405->g_46 p_1405->g_49 p_1405->g_53 p_1405->g_81 p_1405->g_comm_values p_1405->g_304 p_1405->g_202 p_1405->g_85 p_1405->g_244.f3 p_1405->g_284 p_1405->g_504 p_1405->g_448
 */
int8_t * func_25(int64_t  p_26, int64_t  p_27, union U3  p_28, int8_t * p_29, int64_t  p_30, struct S4 * p_1405)
{ /* block id: 202 */
    int16_t l_554[1][9];
    uint32_t *l_557 = &p_1405->g_112[0];
    int8_t *l_558 = (void*)0;
    uint32_t *l_559 = &p_1405->g_112[0];
    uint8_t *l_560 = (void*)0;
    uint8_t *l_561 = &p_1405->g_117;
    union U3 *l_577[3];
    int32_t l_580 = 0x22DD845AL;
    uint8_t l_581 = 0xFDL;
    int32_t l_616 = 1L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
            l_554[i][j] = (-1L);
    }
    for (i = 0; i < 3; i++)
        l_577[i] = &p_1405->g_149;
    if (((((((safe_sub_func_int64_t_s_s((safe_add_func_int8_t_s_s((*p_29), (((safe_add_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(0x32L, ((*l_561) = (l_554[0][4] & (~((p_30 <= (((((safe_add_func_int32_t_s_s(l_554[0][4], (*p_1405->g_69))) , l_557) == (l_559 = func_60(p_28.f0, p_1405->g_112[0], l_554[0][1], l_558, &p_1405->g_304, p_1405))) & (*p_1405->g_69)) >= l_554[0][4])) , GROUP_DIVERGE(1, 1))))))) && p_1405->g_117), l_554[0][4])) <= l_554[0][8]) <= 65528UL))), p_1405->g_535.x)) && l_554[0][3]) & 18446744073709551615UL) || p_1405->g_448.x) > p_1405->g_477.x) != p_1405->g_527.y))
    { /* block id: 205 */
        VECTOR(uint32_t, 16) l_564 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xB4B37FD4L), 0xB4B37FD4L), 0xB4B37FD4L, 4294967295UL, 0xB4B37FD4L, (VECTOR(uint32_t, 2))(4294967295UL, 0xB4B37FD4L), (VECTOR(uint32_t, 2))(4294967295UL, 0xB4B37FD4L), 4294967295UL, 0xB4B37FD4L, 4294967295UL, 0xB4B37FD4L);
        int32_t **l_567 = &p_1405->g_219;
        int32_t l_576 = 0x6FAB2E5AL;
        uint16_t *l_578[8][8] = {{(void*)0,(void*)0,&p_1405->g_81,&p_1405->g_194,&p_1405->g_35,&p_1405->g_81,(void*)0,&p_1405->g_35},{(void*)0,(void*)0,&p_1405->g_81,&p_1405->g_194,&p_1405->g_35,&p_1405->g_81,(void*)0,&p_1405->g_35},{(void*)0,(void*)0,&p_1405->g_81,&p_1405->g_194,&p_1405->g_35,&p_1405->g_81,(void*)0,&p_1405->g_35},{(void*)0,(void*)0,&p_1405->g_81,&p_1405->g_194,&p_1405->g_35,&p_1405->g_81,(void*)0,&p_1405->g_35},{(void*)0,(void*)0,&p_1405->g_81,&p_1405->g_194,&p_1405->g_35,&p_1405->g_81,(void*)0,&p_1405->g_35},{(void*)0,(void*)0,&p_1405->g_81,&p_1405->g_194,&p_1405->g_35,&p_1405->g_81,(void*)0,&p_1405->g_35},{(void*)0,(void*)0,&p_1405->g_81,&p_1405->g_194,&p_1405->g_35,&p_1405->g_81,(void*)0,&p_1405->g_35},{(void*)0,(void*)0,&p_1405->g_81,&p_1405->g_194,&p_1405->g_35,&p_1405->g_81,(void*)0,&p_1405->g_35}};
        uint64_t l_579 = 0xFF1681735BC7431EL;
        int8_t *l_582 = &p_1405->g_304;
        int32_t *l_583 = (void*)0;
        int32_t *l_584[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_584[i] = (void*)0;
        p_1405->g_504.s3 &= (p_28.f0 <= (func_41(&p_1405->g_49, func_60((((((safe_lshift_func_uint16_t_u_s(((((VECTOR(uint32_t, 4))(l_564.s5fc4)).z & (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(4UL, 0x84L)).yxxxxxyy)).s1, 0UL, 255UL, 0xC3L)).even)).yyyyxxyy)).s5, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(246UL, 1UL)), 0x76L, 0x96L)).z))) == (((*l_567) = l_557) == &p_1405->g_79)), 14)) | (safe_mul_func_uint8_t_u_u(((p_1405->g_86 = ((*p_1405->g_69) = (*p_1405->g_69))) > (safe_lshift_func_int8_t_s_u(((((l_579 = ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((safe_sub_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s(l_576, ((*l_561) = ((void*)0 == l_577[1])))) > 0L) | p_1405->g_477.z), p_1405->g_302[0][0][4])) == p_1405->g_381.s2), ((VECTOR(uint16_t, 4))(0UL)), FAKE_DIVERGE(p_1405->local_2_offset, get_local_id(2), 10), 65534UL, 1UL)).s4103707147654620)))).even)))).s7) | p_30) | l_580) ^ p_1405->g_530.s3), GROUP_DIVERGE(2, 1)))), l_564.s0))) | p_1405->g_102.y) == 0UL) ^ l_581), p_27, p_1405->g_358.s9, l_582, p_29, p_1405), p_1405) , p_26));
    }
    else
    { /* block id: 212 */
        int32_t *l_585 = (void*)0;
        uint32_t **l_614 = &l_557;
        int8_t *l_615 = (void*)0;
        int32_t **l_617 = &p_1405->g_219;
        l_585 = (void*)0;
        (*l_617) = func_60((((!(safe_mul_func_uint8_t_u_u((l_616 = ((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(p_1405->g_526.s0, 7)), p_26)) <= ((+(&p_1405->g_214 != (void*)0)) | (p_1405->g_598 != (void*)0))), 11)) & p_1405->g_358.s9), ((p_27 && ((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(0xA69DL, 0x2E47L, ((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_1405->g_602.s7044)).hi)).yxxxyxxx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 16))(p_1405->g_603.s43af38e1bc562197)).s2812))).ywzzyxzzwxywwzxx)).odd))), ((VECTOR(uint16_t, 4))(0xB892L, 0x8C8FL, 0x5469L, 0x949DL)), 1UL, 0x5AE3L)).s9, ((p_1405->g_448.x |= (((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((((((*l_614) = ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((void*)0 != &p_1405->g_162), (*p_29))), FAKE_DIVERGE(p_1405->group_1_offset, get_group_id(1), 10))), p_1405->g_202.sd)) , l_557)) != (*p_1405->g_213)) ^ FAKE_DIVERGE(p_1405->global_0_offset, get_global_id(0), 10)) , (-10L)) >= p_1405->g_504.sf), p_1405->g_501.y)), p_28.f0)) , p_1405->g_162) != (void*)0)) & l_581))) & 0x01AA8C37DAEDA5E2L)) == 0x0B40L))) <= 1UL)), 0x2EL))) && 0x290FDB99L) , GROUP_DIVERGE(1, 1)), p_1405->g_501.x, p_1405->g_526.s0, &p_1405->g_108, l_615, p_1405);
    }
    return &p_1405->g_108;
}


/* ------------------------------------------ */
/* 
 * reads : p_1405->g_46 p_1405->g_86 p_1405->g_53 p_1405->g_194 p_1405->g_49 p_1405->g_219 p_1405->g_371 p_1405->g_162 p_1405->g_69 p_1405->g_70 p_1405->g_381 p_1405->g_202 p_1405->g_89 p_1405->g_149.f0 p_1405->g_358 p_1405->g_258 p_1405->g_149 p_1405->g_221 p_1405->g_79 p_1405->g_284 p_1405->g_477 p_1405->g_448 p_1405->l_comm_values p_1405->g_526 p_1405->g_527 p_1405->g_530 p_1405->g_535
 * writes: p_1405->g_46 p_1405->g_49 p_1405->g_86 p_1405->g_117 p_1405->g_53 p_1405->g_81 p_1405->g_219 p_1405->g_comm_values p_1405->g_304 p_1405->g_202 p_1405->g_70 p_1405->g_85 p_1405->g_244.f3 p_1405->g_284
 */
union U3  func_41(int32_t * p_42, int32_t * p_43, struct S4 * p_1405)
{ /* block id: 14 */
    uint32_t *l_71 = &p_1405->g_70[1][4];
    int32_t l_97 = 9L;
    int64_t *l_324 = (void*)0;
    union U2 *l_370 = (void*)0;
    union U3 *l_383 = &p_1405->g_149;
    int32_t l_384 = 0x18768DE7L;
    int32_t l_396 = 0x3B52E2A7L;
    uint16_t *l_403 = &p_1405->g_81;
    uint16_t **l_402 = &l_403;
    uint8_t *l_408 = &p_1405->g_262;
    uint64_t l_449 = 0x598A1C8D3CF32B17L;
    int32_t l_483 = 1L;
    uint32_t *l_538 = &p_1405->g_112[0];
    uint32_t **l_537 = &l_538;
    uint32_t ***l_536 = &l_537;
    for (p_1405->g_46 = 0; (p_1405->g_46 == (-13)); p_1405->g_46 = safe_sub_func_int64_t_s_s(p_1405->g_46, 5))
    { /* block id: 17 */
        uint32_t l_55 = 0x0F05BA84L;
        VECTOR(uint8_t, 2) l_72 = (VECTOR(uint8_t, 2))(0x44L, 0x8BL);
        VECTOR(int32_t, 2) l_310 = (VECTOR(int32_t, 2))(4L, 0x219E3A60L);
        VECTOR(int32_t, 16) l_311 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x1D70BD93L), 0x1D70BD93L), 0x1D70BD93L, 0L, 0x1D70BD93L, (VECTOR(int32_t, 2))(0L, 0x1D70BD93L), (VECTOR(int32_t, 2))(0L, 0x1D70BD93L), 0L, 0x1D70BD93L, 0L, 0x1D70BD93L);
        uint16_t l_328[5] = {65533UL,65533UL,65533UL,65533UL,65533UL};
        VECTOR(uint32_t, 2) l_359 = (VECTOR(uint32_t, 2))(0x7607ED46L, 0x9F1E4A5BL);
        int8_t *l_406[8];
        int32_t *l_407 = &l_97;
        VECTOR(uint8_t, 8) l_503 = (VECTOR(uint8_t, 8))(0x81L, (VECTOR(uint8_t, 4))(0x81L, (VECTOR(uint8_t, 2))(0x81L, 255UL), 255UL), 255UL, 0x81L, 255UL);
        int i;
        for (i = 0; i < 8; i++)
            l_406[i] = &p_1405->g_304;
        for (p_1405->g_49 = 0; (p_1405->g_49 == 3); ++p_1405->g_49)
        { /* block id: 20 */
            int32_t *l_52 = &p_1405->g_53;
            int32_t *l_54[9][10][2] = {{{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49}},{{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49}},{{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49}},{{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49}},{{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49}},{{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49}},{{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49}},{{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49}},{{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49},{&p_1405->g_46,&p_1405->g_49}}};
            uint64_t *l_90 = &p_1405->g_89;
            int32_t l_300 = (-8L);
            uint32_t *l_301 = &p_1405->g_302[0][0][4];
            int8_t *l_303[6][2] = {{&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304}};
            int8_t *l_305[7][9][4] = {{{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304}},{{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304}},{{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304}},{{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304}},{{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304}},{{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304}},{{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304},{&p_1405->g_304,&p_1405->g_304,&p_1405->g_304,&p_1405->g_304}}};
            uint32_t **l_307 = &p_1405->g_69;
            int i, j, k;
            ++l_55;
        }
        (*p_43) = l_72.y;
        for (p_1405->g_49 = (-15); (p_1405->g_49 > (-4)); p_1405->g_49 = safe_add_func_uint64_t_u_u(p_1405->g_49, 9))
        { /* block id: 83 */
            uint64_t *l_323 = &p_1405->g_89;
            int32_t l_327 = 0L;
            uint8_t *l_331[7] = {&p_1405->g_262,(void*)0,&p_1405->g_262,&p_1405->g_262,(void*)0,&p_1405->g_262,&p_1405->g_262};
            uint64_t l_332 = 0xB66098E4881454B1L;
            VECTOR(int16_t, 2) l_339 = (VECTOR(int16_t, 2))(0L, 0x16EEL);
            uint32_t *l_363 = &p_1405->g_112[0];
            uint32_t **l_362 = &l_363;
            int32_t l_397 = 5L;
            uint32_t l_450 = 4294967295UL;
            VECTOR(int16_t, 16) l_481 = (VECTOR(int16_t, 16))(0x0AC4L, (VECTOR(int16_t, 4))(0x0AC4L, (VECTOR(int16_t, 2))(0x0AC4L, (-9L)), (-9L)), (-9L), 0x0AC4L, (-9L), (VECTOR(int16_t, 2))(0x0AC4L, (-9L)), (VECTOR(int16_t, 2))(0x0AC4L, (-9L)), 0x0AC4L, (-9L), 0x0AC4L, (-9L));
            VECTOR(uint8_t, 2) l_502 = (VECTOR(uint8_t, 2))(0x5BL, 0UL);
            int i;
            (*p_43) ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_310.xxyy)).yzzzwyzw)).s2376017346362773, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_311.sb5)).yxxxxxyyyyxyxyxx)).s6e, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x38CD7117L, ((VECTOR(int32_t, 2))(0x42908748L, 0x6BDDEA60L)), 0x2F453972L)).wxyzxxyxwyzxxwxw)).s67))).yxyyxxyxyxyyxxxx))).s07, ((VECTOR(int32_t, 8))((safe_sub_func_int16_t_s_s(((~8UL) , (safe_add_func_uint8_t_u_u(((((((VECTOR(uint16_t, 8))(p_1405->g_316.s05760301)).s5 , ((VECTOR(uint8_t, 2))(0xF9L, 253UL)).even) | l_311.s7) , (((safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s(l_97, (l_97 ^ ((safe_div_func_int64_t_s_s(9L, ((*l_323) = l_97))) ^ (((((void*)0 != l_324) ^ ((((VECTOR(uint32_t, 16))(4294967290UL, ((safe_sub_func_int64_t_s_s(p_1405->g_79, l_97)) > l_97), 0x3A34BAC0L, 0xAEEF2665L, ((VECTOR(uint32_t, 4))(0x7AAC8604L)), 0x6186FDFCL, (*p_1405->g_69), 0x14508803L, 4294967286UL, l_327, 8UL, 4294967295UL, 0xE0C890D8L)).s5 != 0L) > l_328[4])) || l_97) != GROUP_DIVERGE(0, 1)))))), 18446744073709551615UL)) , p_1405->g_262) && l_327)) , 4UL), 0x64L))), l_327)), 2L, (-5L), 0x150097CFL, 4L, 0x25CA2178L, 0x1EDC90E1L, 0x5E2C9F4DL)).s55))).xxxxxxyyxxyyxyxx, ((VECTOR(int32_t, 16))(0x54F19F90L)), ((VECTOR(int32_t, 16))(0L))))).sc, ((VECTOR(int32_t, 2))(0x09FF4784L)), 1L)))).w;
            p_1405->g_53 |= (safe_lshift_func_uint8_t_u_s((p_1405->g_117 = l_328[4]), 7));
            if ((*p_43))
            { /* block id: 88 */
                union U2 *l_372 = &p_1405->g_373;
                int32_t *l_374 = &p_1405->g_46;
                VECTOR(int64_t, 16) l_382 = (VECTOR(int64_t, 16))(0x0DF8503DEE2ECEE6L, (VECTOR(int64_t, 4))(0x0DF8503DEE2ECEE6L, (VECTOR(int64_t, 2))(0x0DF8503DEE2ECEE6L, 1L), 1L), 1L, 0x0DF8503DEE2ECEE6L, 1L, (VECTOR(int64_t, 2))(0x0DF8503DEE2ECEE6L, 1L), (VECTOR(int64_t, 2))(0x0DF8503DEE2ECEE6L, 1L), 0x0DF8503DEE2ECEE6L, 1L, 0x0DF8503DEE2ECEE6L, 1L);
                int32_t l_395 = 0x440A77AAL;
                union U3 *l_422[10][8][3] = {{{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149}},{{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149}},{{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149}},{{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149}},{{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149}},{{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149}},{{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149}},{{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149}},{{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149}},{{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149},{&p_1405->g_149,&p_1405->g_149,&p_1405->g_149}}};
                int i, j, k;
                if (l_332)
                { /* block id: 89 */
                    int16_t *l_340 = &p_1405->g_246[5].f3;
                    int16_t *l_341 = &p_1405->g_247.f3;
                    int16_t *l_342 = &p_1405->g_244.f3;
                    int16_t *l_343 = (void*)0;
                    int16_t *l_344 = &p_1405->g_250.f3;
                    int16_t *l_345 = &p_1405->g_248.f3;
                    int16_t *l_346 = &p_1405->g_237.f3;
                    int16_t *l_347[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_348 = 0x70BE18EFL;
                    int32_t l_349[1][7] = {{0x6FD442B1L,0x6FD442B1L,0x6FD442B1L,0x6FD442B1L,0x6FD442B1L,0x6FD442B1L,0x6FD442B1L}};
                    int16_t l_364 = 0x4A5DL;
                    int64_t *l_365 = (void*)0;
                    int64_t *l_366 = (void*)0;
                    uint16_t *l_367 = &p_1405->g_81;
                    int32_t *l_368 = &p_1405->g_53;
                    int32_t **l_375 = (void*)0;
                    int32_t **l_385 = &p_1405->g_219;
                    int i, j;
                    if (((*l_368) |= ((*p_43) = (((*l_367) = (safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(l_327, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_72.x, (l_349[0][1] = (safe_add_func_int16_t_s_s((l_348 ^= ((*l_340) = ((VECTOR(int16_t, 4))(l_339.yyyy)).y)), 1L))), 65529UL, 9UL)), ((VECTOR(uint16_t, 4))(65535UL, 0x2FC5L, 65531UL, 0UL)), 0xC36EL, (safe_rshift_func_uint16_t_u_s(((p_1405->g_202.s1 = ((GROUP_DIVERGE(1, 1) , FAKE_DIVERGE(p_1405->group_1_offset, get_group_id(1), 10)) == ((safe_mul_func_uint8_t_u_u((0x5A6CL < (((safe_sub_func_uint64_t_u_u(l_97, l_97)) <= (safe_mod_func_uint32_t_u_u((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_1405->g_358.s9431)).xwyyzwzw)).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_359.xyxxyyxxxxyxyyyy)).sd8)).yyyxxxyyxxyyyyyx)).saa2a))).odd))), ((VECTOR(uint32_t, 4))(GROUP_DIVERGE(2, 1), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(0x9F0B17DDL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(0xD29416D9L, 0xDCA90D64L, 0x104A5C38L, 0UL)).odd)), ((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(4UL, ((*l_71) = (safe_mul_func_uint16_t_u_u(65535UL, (l_362 != &p_1405->g_214)))), 0UL, 0x9F9BF1DCL)).odd, ((VECTOR(uint32_t, 2))(0UL))))), ((VECTOR(uint32_t, 2))(3UL)), 1UL)).s46)), 0x9139DE40L)).even))).yxxyxxxx)))).s1 >= l_364), l_310.y))) > p_1405->g_221[2][3][0])), l_97)) > 0L))) <= l_332), l_349[0][1])), ((VECTOR(uint16_t, 4))(0UL)), 0xECA0L, 3UL)).sa1, ((VECTOR(uint16_t, 2))(65535UL))))), ((VECTOR(uint16_t, 2))(65527UL))))).yyyyxyyy)).s0)), p_1405->g_194))) & l_364))))
                    { /* block id: 98 */
                        int32_t **l_369 = &l_368;
                        (*l_369) = &p_1405->g_49;
                    }
                    else
                    { /* block id: 100 */
                        (*l_368) = (l_370 != ((((VECTOR(int16_t, 4))(p_1405->g_371.se79a)).z | l_97) , l_372));
                    }
                    p_1405->g_219 = l_374;
                    (*l_385) = func_60(((((0x17BEL & ((safe_unary_minus_func_int16_t_s(l_339.x)) <= (FAKE_DIVERGE(p_1405->group_1_offset, get_group_id(1), 10) == (~(((((*l_368) && (p_1405->g_comm_values[p_1405->tid] = 0x2BB8B37F66250D24L)) , (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((VECTOR(uint16_t, 16))((((l_339.y && ((*l_367) &= GROUP_DIVERGE(0, 1))) == (GROUP_DIVERGE(2, 1) | ((VECTOR(uint8_t, 2))(p_1405->g_381.s2f)).even)) > (l_97 = (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_382.s4a7e3d98)))).s3 && (((VECTOR(uint64_t, 16))(((((((void*)0 != l_383) && 0x011CL) , &p_1405->g_219) == (void*)0) > 0x4B82A1ADL), 1UL, ((VECTOR(uint64_t, 2))(0x64A46979E7A444E4L)), 0xD7B9B8B6387E986DL, ((VECTOR(uint64_t, 8))(18446744073709551615UL)), FAKE_DIVERGE(p_1405->local_2_offset, get_local_id(2), 10), 0x1A3FABE55FBF8F3BL, 0x0DDE93039616E07FL)).se | p_1405->g_381.sa)))), ((VECTOR(uint16_t, 4))(0x1647L)), 0x667EL, ((VECTOR(uint16_t, 2))(0x1231L)), p_1405->g_302[3][0][4], l_97, p_1405->g_81, p_1405->g_316.s3, 0xE745L, ((VECTOR(uint16_t, 2))(1UL)), 65529UL)).s4 > l_339.x), l_328[4])), (*l_368)))) >= (-5L)) & (*p_1405->g_219)))))) & l_339.y) , 0x7ED051A042DA64D2L) | p_1405->g_371.s7), l_384, l_339.y, &p_1405->g_304, l_331[4], p_1405);
                    if ((*p_1405->g_219))
                        break;
                }
                else
                { /* block id: 109 */
                    uint32_t l_398 = 0UL;
                    VECTOR(int16_t, 16) l_401 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-3L)), (-3L)), (-3L), 1L, (-3L), (VECTOR(int16_t, 2))(1L, (-3L)), (VECTOR(int16_t, 2))(1L, (-3L)), 1L, (-3L), 1L, (-3L));
                    int32_t l_405 = (-1L);
                    VECTOR(int16_t, 16) l_409 = (VECTOR(int16_t, 16))(0x4423L, (VECTOR(int16_t, 4))(0x4423L, (VECTOR(int16_t, 2))(0x4423L, 0x0002L), 0x0002L), 0x0002L, 0x4423L, 0x0002L, (VECTOR(int16_t, 2))(0x4423L, 0x0002L), (VECTOR(int16_t, 2))(0x4423L, 0x0002L), 0x4423L, 0x0002L, 0x4423L, 0x0002L);
                    int i;
                    for (p_1405->g_304 = 22; (p_1405->g_304 < (-23)); p_1405->g_304 = safe_sub_func_uint32_t_u_u(p_1405->g_304, 7))
                    { /* block id: 112 */
                        int32_t *l_388 = (void*)0;
                        int32_t *l_389 = &l_97;
                        int32_t *l_390 = (void*)0;
                        int32_t *l_391 = (void*)0;
                        int32_t *l_392 = &l_97;
                        int32_t *l_393 = &p_1405->g_79;
                        int32_t *l_394[4];
                        uint16_t ***l_404 = &l_402;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_394[i] = &p_1405->g_53;
                        l_398--;
                        l_407 = func_60(l_401.s2, l_339.x, ((((l_405 = (((*l_404) = l_402) == p_1405->g_162)) , &p_1405->g_162) != (void*)0) == l_332), l_406[3], &p_1405->g_304, p_1405);
                        if ((*p_43))
                            continue;
                    }
                    if ((((void*)0 == l_408) , (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_409.scd)).xyxxxyyy)).s4 > (((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(l_97, 13)), ((*l_402) != ((safe_mul_func_uint8_t_u_u((*l_374), ((p_1405->g_202.se ^= (!((l_398 & ((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(0L, (((((0xC9B88717L < 0x95768192L) == (*l_407)) , (void*)0) != l_422[7][5][1]) && (*p_1405->g_69)))), l_401.s1)) != l_327)) ^ p_1405->g_381.s4))) , 0UL))) , (void*)0)))) && FAKE_DIVERGE(p_1405->global_1_offset, get_global_id(1), 10)), (*l_407))) != (*l_374)) == 0x5B7661AFL))))
                    { /* block id: 120 */
                        if (l_339.x)
                            break;
                        if ((*p_43))
                            continue;
                    }
                    else
                    { /* block id: 123 */
                        int16_t *l_431 = &p_1405->g_246[5].f3;
                        int16_t *l_432[1][6][6] = {{{(void*)0,(void*)0,(void*)0,&p_1405->g_232.f3,(void*)0,&p_1405->g_232.f3},{(void*)0,(void*)0,(void*)0,&p_1405->g_232.f3,(void*)0,&p_1405->g_232.f3},{(void*)0,(void*)0,(void*)0,&p_1405->g_232.f3,(void*)0,&p_1405->g_232.f3},{(void*)0,(void*)0,(void*)0,&p_1405->g_232.f3,(void*)0,&p_1405->g_232.f3},{(void*)0,(void*)0,(void*)0,&p_1405->g_232.f3,(void*)0,&p_1405->g_232.f3},{(void*)0,(void*)0,(void*)0,&p_1405->g_232.f3,(void*)0,&p_1405->g_232.f3}}};
                        int32_t l_433 = (-3L);
                        int32_t l_436 = (-1L);
                        uint64_t *l_437 = &l_332;
                        int i, j, k;
                        (*l_407) = (l_409.sb <= (safe_sub_func_int8_t_s_s(0L, (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(0x4C36L, (safe_mul_func_int16_t_s_s((l_433 |= l_327), (safe_lshift_func_int8_t_s_s((l_436 &= p_1405->g_89), ((((*l_437)--) , ((safe_lshift_func_uint16_t_u_s(((((safe_lshift_func_int8_t_s_u(((l_339.x ^ (safe_mul_func_uint8_t_u_u((l_409.sf , (FAKE_DIVERGE(p_1405->local_1_offset, get_local_id(1), 10) < (safe_add_func_uint16_t_u_u((((*l_71) = (((VECTOR(int8_t, 4))(p_1405->g_448.yxxy)).y , (l_409.s0 , (((l_97 == p_1405->g_149.f0) >= (-2L)) , GROUP_DIVERGE(2, 1))))) , 0x140FL), l_332)))), l_396))) >= (*l_374)), p_1405->g_46)) ^ l_332) ^ l_449) && 0x3E35576D8273B4D8L), p_1405->g_358.sf)) == l_450)) | 2L))))))), p_1405->g_149.f0)))));
                        return (*p_1405->g_258);
                    }
                    (*p_43) = 0x0E3D9EB1L;
                }
            }
            else
            { /* block id: 133 */
                union U3 l_473 = {0x23B82901C6B96EB7L};
                VECTOR(int32_t, 16) l_480 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L), (VECTOR(int32_t, 2))((-1L), (-3L)), (VECTOR(int32_t, 2))((-1L), (-3L)), (-1L), (-3L), (-1L), (-3L));
                int i;
                if ((atomic_inc(&p_1405->g_atomic_input[41 * get_linear_group_id() + 7]) == 6))
                { /* block id: 135 */
                    int32_t l_451[6][2][2] = {{{0x0D616DDCL,0x0D616DDCL},{0x0D616DDCL,0x0D616DDCL}},{{0x0D616DDCL,0x0D616DDCL},{0x0D616DDCL,0x0D616DDCL}},{{0x0D616DDCL,0x0D616DDCL},{0x0D616DDCL,0x0D616DDCL}},{{0x0D616DDCL,0x0D616DDCL},{0x0D616DDCL,0x0D616DDCL}},{{0x0D616DDCL,0x0D616DDCL},{0x0D616DDCL,0x0D616DDCL}},{{0x0D616DDCL,0x0D616DDCL},{0x0D616DDCL,0x0D616DDCL}}};
                    int i, j, k;
                    for (l_451[4][0][0] = 0; (l_451[4][0][0] > 27); l_451[4][0][0] = safe_add_func_int16_t_s_s(l_451[4][0][0], 9))
                    { /* block id: 138 */
                        uint64_t l_454 = 0xE887E1C5DA31A8DDL;
                        VECTOR(int32_t, 2) l_455 = (VECTOR(int32_t, 2))(7L, 1L);
                        uint8_t l_456 = 7UL;
                        int32_t *l_457 = (void*)0;
                        int32_t *l_458 = (void*)0;
                        int32_t *l_459 = (void*)0;
                        union U0 l_461 = {4294967295UL};/* VOLATILE GLOBAL l_461 */
                        union U0 *l_460 = &l_461;
                        int64_t l_462 = (-2L);
                        uint16_t l_463 = 0xE89BL;
                        int i;
                        l_456 = (l_454 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_455.yyxyxxxx)).s1660450367653757)).hi)).s1);
                        l_459 = (l_458 = l_457);
                        l_460 = (void*)0;
                        l_463 ^= l_462;
                    }
                    unsigned int result = 0;
                    int l_451_i0, l_451_i1, l_451_i2;
                    for (l_451_i0 = 0; l_451_i0 < 6; l_451_i0++) {
                        for (l_451_i1 = 0; l_451_i1 < 2; l_451_i1++) {
                            for (l_451_i2 = 0; l_451_i2 < 2; l_451_i2++) {
                                result += l_451[l_451_i0][l_451_i1][l_451_i2];
                            }
                        }
                    }
                    atomic_add(&p_1405->g_special_values[41 * get_linear_group_id() + 7], result);
                }
                else
                { /* block id: 145 */
                    (1 + 1);
                }
                for (p_1405->g_85 = (-14); (p_1405->g_85 <= (-5)); p_1405->g_85++)
                { /* block id: 150 */
                    int32_t l_470 = 0x6194E922L;
                    VECTOR(int32_t, 4) l_479 = (VECTOR(int32_t, 4))(0x3EFEC8FDL, (VECTOR(int32_t, 2))(0x3EFEC8FDL, 0x0D26F967L), 0x0D26F967L);
                    int i;
                    if ((safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((l_470 ^ ((l_470 | ((safe_lshift_func_uint8_t_u_u((l_396 , (l_327 != (l_473 , (safe_rshift_func_int16_t_s_s(p_1405->g_221[9][1][1], ((void*)0 != &l_328[0])))))), l_473.f0)) == 18446744073709551613UL)) == p_1405->g_79)) | l_327), p_1405->g_284.x)), 0xA5L)))
                    { /* block id: 151 */
                        uint32_t l_476 = 7UL;
                        int16_t *l_482 = &p_1405->g_244.f3;
                        int i, j;
                        p_1405->g_53 = l_476;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1405->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u(((*p_1405->g_69) = ((((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 2))(0x61A48D71EEB2332DL, 0x46BF8DA135201015L)).yxxyxxyxyxxyxyyy, ((VECTOR(uint64_t, 2))(p_1405->g_477.yz)).xxxxxxyyyxxyyyxx, ((VECTOR(uint64_t, 2))(18446744073709551615UL, 0x94B76B97F644E1A3L)).yxyyyxxxyyyyyyyy))).s9 , (0L == (safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_479.yzwy)))), ((VECTOR(int32_t, 8))(l_480.se9f5bdee)).odd))).x)))) == ((*l_482) = ((VECTOR(int16_t, 16))(l_481.s663be08a6ca8bc8d)).s5))), 10))][(safe_mod_func_uint32_t_u_u(p_1405->tid, 2))]));
                        if (p_1405->g_381.s5)
                            continue;
                    }
                    else
                    { /* block id: 159 */
                        int16_t *l_490 = &p_1405->g_373.f3;
                        int16_t *l_491 = (void*)0;
                        int16_t *l_492 = (void*)0;
                        int32_t **l_505[10][4];
                        int i, j;
                        for (i = 0; i < 10; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_505[i][j] = &l_407;
                        }
                        if (l_483)
                            break;
                        if (l_480.sa)
                            break;
                        p_1405->g_219 = (p_43 = func_60(l_332, (((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((*p_43) = (safe_rshift_func_int16_t_s_u(p_1405->g_448.y, 2))) , (((l_339.y && ((p_1405->g_284.x |= (-3L)) == (safe_rshift_func_uint8_t_u_u((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(2L, 0x0FF366F8B3315F5FL)).xyxxxxyyyyxyxxxy)).hi)).s77, (int64_t)(+(safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(p_1405->g_501.yywyyywy)).s5, ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(l_502.yyxxyxyx)).hi, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_503.s64)), 0xA5L, 0x8BL)).hi)).xyyy))).w)), GROUP_DIVERGE(2, 1))), (((*p_1405->g_213) == p_42) , (*l_407))))), (int64_t)(l_473.f0 ^ ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))((-1L), (-5L))).yxyyxyyy, ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(p_1405->g_504.s60e901a9)), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(p_1405->g_85, ((VECTOR(int32_t, 2))(0x0E84D580L)), 1L)), ((VECTOR(int32_t, 4))(1L))))).yzwyzzzx, ((VECTOR(int32_t, 8))((-6L))))))))).s2)))).xxyxxyyx, ((VECTOR(int64_t, 8))((-10L)))))))).hi)).x | p_1405->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1405->tid, 2))]), 6)))) & 0L) & l_502.x)), (*p_1405->g_69))), l_502.y)) == (-1L)) ^ l_470), l_480.sa, &p_1405->g_304, l_331[3], p_1405));
                        if ((*p_1405->g_219))
                            break;
                    }
                }
                if ((atomic_inc(&p_1405->l_atomic_input[14]) == 5))
                { /* block id: 170 */
                    VECTOR(int32_t, 16) l_506 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
                    VECTOR(int32_t, 8) l_507 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x1263C01EL), 0x1263C01EL), 0x1263C01EL, (-9L), 0x1263C01EL);
                    uint64_t l_508 = 0x3D5E6A82CC0347B3L;
                    VECTOR(int32_t, 16) l_509 = (VECTOR(int32_t, 16))(0x2367E9A7L, (VECTOR(int32_t, 4))(0x2367E9A7L, (VECTOR(int32_t, 2))(0x2367E9A7L, 0x68F13899L), 0x68F13899L), 0x68F13899L, 0x2367E9A7L, 0x68F13899L, (VECTOR(int32_t, 2))(0x2367E9A7L, 0x68F13899L), (VECTOR(int32_t, 2))(0x2367E9A7L, 0x68F13899L), 0x2367E9A7L, 0x68F13899L, 0x2367E9A7L, 0x68F13899L);
                    uint16_t l_524[6][6] = {{9UL,0x3C16L,9UL,9UL,0x3C16L,9UL},{9UL,0x3C16L,9UL,9UL,0x3C16L,9UL},{9UL,0x3C16L,9UL,9UL,0x3C16L,9UL},{9UL,0x3C16L,9UL,9UL,0x3C16L,9UL},{9UL,0x3C16L,9UL,9UL,0x3C16L,9UL},{9UL,0x3C16L,9UL,9UL,0x3C16L,9UL}};
                    uint64_t l_525 = 4UL;
                    int i, j;
                    l_508 &= ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(l_506.s8cb0c1f3de2645fc)).s40bd, ((VECTOR(int32_t, 4))(l_507.s4355))))).z;
                    if (l_509.s7)
                    { /* block id: 172 */
                        int32_t l_511 = 0x6D49D877L;
                        int32_t *l_510 = &l_511;
                        uint32_t l_512 = 0UL;
                        int32_t *l_515 = &l_511;
                        int32_t *l_516[9] = {&l_511,&l_511,&l_511,&l_511,&l_511,&l_511,&l_511,&l_511,&l_511};
                        int i;
                        l_510 = (void*)0;
                        l_512++;
                        l_516[0] = l_515;
                    }
                    else
                    { /* block id: 176 */
                        uint32_t l_517 = 4294967294UL;
                        int8_t l_518 = 0x6AL;
                        VECTOR(int32_t, 2) l_519 = (VECTOR(int32_t, 2))(1L, 0x37FA1A6BL);
                        int8_t l_520 = 0x45L;
                        uint32_t l_521 = 0xECA2E8FDL;
                        int i;
                        l_518 = l_517;
                        l_507.s7 = ((VECTOR(int32_t, 16))(l_519.xyxyyxyyyxyyyyyy)).se;
                        ++l_521;
                    }
                    l_525 &= l_524[0][1];
                    unsigned int result = 0;
                    result += l_506.sf;
                    result += l_506.se;
                    result += l_506.sd;
                    result += l_506.sc;
                    result += l_506.sb;
                    result += l_506.sa;
                    result += l_506.s9;
                    result += l_506.s8;
                    result += l_506.s7;
                    result += l_506.s6;
                    result += l_506.s5;
                    result += l_506.s4;
                    result += l_506.s3;
                    result += l_506.s2;
                    result += l_506.s1;
                    result += l_506.s0;
                    result += l_507.s7;
                    result += l_507.s6;
                    result += l_507.s5;
                    result += l_507.s4;
                    result += l_507.s3;
                    result += l_507.s2;
                    result += l_507.s1;
                    result += l_507.s0;
                    result += l_508;
                    result += l_509.sf;
                    result += l_509.se;
                    result += l_509.sd;
                    result += l_509.sc;
                    result += l_509.sb;
                    result += l_509.sa;
                    result += l_509.s9;
                    result += l_509.s8;
                    result += l_509.s7;
                    result += l_509.s6;
                    result += l_509.s5;
                    result += l_509.s4;
                    result += l_509.s3;
                    result += l_509.s2;
                    result += l_509.s1;
                    result += l_509.s0;
                    int l_524_i0, l_524_i1;
                    for (l_524_i0 = 0; l_524_i0 < 6; l_524_i0++) {
                        for (l_524_i1 = 0; l_524_i1 < 6; l_524_i1++) {
                            result += l_524[l_524_i0][l_524_i1];
                        }
                    }
                    result += l_525;
                    atomic_add(&p_1405->l_special_values[14], result);
                }
                else
                { /* block id: 182 */
                    (1 + 1);
                }
                if ((*p_43))
                    continue;
            }
        }
    }
    if ((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 8))(p_1405->g_526.s55636447)), ((VECTOR(uint64_t, 2))(p_1405->g_527.xy)).yxyxxyyy))).s2433735005052214)).sc > (safe_div_func_int8_t_s_s((0UL & (l_396 = (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(p_1405->g_530.sbb60fe3d)).s6525556546362465)).sc | (safe_lshift_func_int16_t_s_s(((*p_43) , l_384), 6))))), (safe_add_func_uint32_t_u_u((p_1405->g_381.s6 <= ((VECTOR(int64_t, 4))(p_1405->g_535.zzzw)).z), ((void*)0 != l_536)))))))
    { /* block id: 190 */
        if ((atomic_inc(&p_1405->l_atomic_input[31]) == 5))
        { /* block id: 192 */
            int32_t l_541 = (-1L);
            int32_t *l_540 = &l_541;
            int32_t **l_539 = &l_540;
            VECTOR(int32_t, 8) l_542 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 2L), 2L), 2L, (-7L), 2L);
            uint64_t l_543 = 18446744073709551615UL;
            int i;
            l_539 = (void*)0;
            l_543 = ((VECTOR(int32_t, 4))(l_542.s6334)).w;
            unsigned int result = 0;
            result += l_541;
            result += l_542.s7;
            result += l_542.s6;
            result += l_542.s5;
            result += l_542.s4;
            result += l_542.s3;
            result += l_542.s2;
            result += l_542.s1;
            result += l_542.s0;
            result += l_543;
            atomic_add(&p_1405->l_special_values[31], result);
        }
        else
        { /* block id: 195 */
            (1 + 1);
        }
        return (*l_383);
    }
    else
    { /* block id: 199 */
        union U3 l_544 = {1UL};
        return l_544;
    }
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t * func_60(uint32_t  p_61, uint64_t  p_62, uint32_t  p_63, int8_t * p_64, int8_t * p_65, struct S4 * p_1405)
{ /* block id: 74 */
    uint32_t *l_306 = &p_1405->g_86;
    return l_306;
}


/* ------------------------------------------ */
/* 
 * reads : p_1405->g_81 p_1405->g_86 p_1405->g_89
 * writes: p_1405->g_81 p_1405->g_86 p_1405->g_79 p_1405->g_89
 */
uint32_t  func_73(uint32_t  p_74, struct S4 * p_1405)
{ /* block id: 22 */
    uint16_t l_77[10] = {0xE796L,65535UL,0xE796L,0xE796L,65535UL,0xE796L,0xE796L,65535UL,0xE796L,0xE796L};
    int32_t *l_78[2];
    VECTOR(int32_t, 8) l_80 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x14644A74L), 0x14644A74L), 0x14644A74L, 1L, 0x14644A74L);
    int16_t l_84 = 0x18B4L;
    int i;
    for (i = 0; i < 2; i++)
        l_78[i] = &p_1405->g_79;
    l_77[9] = (safe_sub_func_uint16_t_u_u(0xB072L, 0x366CL));
    ++p_1405->g_81;
    p_1405->g_86++;
    p_1405->g_89 &= (p_1405->g_79 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x34458F42L, (-4L))).xyyx)).y);
    return p_74;
}


/* ------------------------------------------ */
/* 
 * reads : p_1405->g_102 p_1405->g_105 p_1405->g_49 p_1405->g_117 p_1405->g_149.f0 p_1405->g_69 p_1405->g_70 p_1405->g_162 p_1405->g_comm_values p_1405->g_194 p_1405->g_202 p_1405->g_213 p_1405->g_221 p_1405->g_53 p_1405->g_249 p_1405->g_108 p_1405->g_257 p_1405->g_284 p_1405->g_262 p_1405->g_46 p_1405->g_112
 * writes: p_1405->g_comm_values p_1405->g_112 p_1405->g_194 p_1405->g_213 p_1405->g_219 p_1405->g_221 p_1405->g_232.f3 p_1405->g_108 p_1405->g_262
 */
int16_t  func_93(uint16_t  p_94, int32_t  p_95, uint32_t  p_96, struct S4 * p_1405)
{ /* block id: 30 */
    int8_t *l_107 = &p_1405->g_108;
    int8_t **l_109 = &l_107;
    int64_t *l_110 = (void*)0;
    int64_t *l_111 = (void*)0;
    int32_t l_115 = 0x27960817L;
    uint8_t *l_116[2][8] = {{(void*)0,&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0,&p_1405->g_117,&p_1405->g_117,(void*)0},{(void*)0,&p_1405->g_117,&p_1405->g_117,(void*)0,(void*)0,&p_1405->g_117,&p_1405->g_117,(void*)0}};
    int32_t l_118 = 0x53E6A3F3L;
    int32_t l_119 = 0x047FBB04L;
    int32_t *l_220[9][8][3] = {{{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0}},{{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0}},{{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0}},{{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0}},{{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0}},{{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0}},{{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0}},{{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0}},{{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0},{&p_1405->g_221[4][1][1],(void*)0,(void*)0}}};
    VECTOR(uint64_t, 2) l_224 = (VECTOR(uint64_t, 2))(1UL, 0xB5DD464BD90867E6L);
    union U3 l_228 = {18446744073709551606UL};
    union U2 *l_231[7][9] = {{&p_1405->g_234,&p_1405->g_238,(void*)0,&p_1405->g_234,(void*)0,(void*)0,(void*)0,(void*)0,&p_1405->g_234},{&p_1405->g_234,&p_1405->g_238,(void*)0,&p_1405->g_234,(void*)0,(void*)0,(void*)0,(void*)0,&p_1405->g_234},{&p_1405->g_234,&p_1405->g_238,(void*)0,&p_1405->g_234,(void*)0,(void*)0,(void*)0,(void*)0,&p_1405->g_234},{&p_1405->g_234,&p_1405->g_238,(void*)0,&p_1405->g_234,(void*)0,(void*)0,(void*)0,(void*)0,&p_1405->g_234},{&p_1405->g_234,&p_1405->g_238,(void*)0,&p_1405->g_234,(void*)0,(void*)0,(void*)0,(void*)0,&p_1405->g_234},{&p_1405->g_234,&p_1405->g_238,(void*)0,&p_1405->g_234,(void*)0,(void*)0,(void*)0,(void*)0,&p_1405->g_234},{&p_1405->g_234,&p_1405->g_238,(void*)0,&p_1405->g_234,(void*)0,(void*)0,(void*)0,(void*)0,&p_1405->g_234}};
    int16_t *l_251 = &p_1405->g_232.f3;
    uint16_t l_252 = 65527UL;
    union U3 **l_259 = &p_1405->g_258;
    uint16_t *l_267 = (void*)0;
    uint16_t *l_268 = &p_1405->g_194;
    VECTOR(int16_t, 4) l_283 = (VECTOR(int16_t, 4))(0x7E82L, (VECTOR(int16_t, 2))(0x7E82L, 0x36EBL), 0x36EBL);
    VECTOR(int16_t, 2) l_285 = (VECTOR(int16_t, 2))((-9L), (-8L));
    VECTOR(int16_t, 4) l_286 = (VECTOR(int16_t, 4))(0x7649L, (VECTOR(int16_t, 2))(0x7649L, 1L), 1L);
    VECTOR(int16_t, 8) l_287 = (VECTOR(int16_t, 8))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, (-8L)), (-8L)), (-8L), 3L, (-8L));
    VECTOR(int16_t, 2) l_288 = (VECTOR(int16_t, 2))(0x68EAL, 0x3987L);
    int32_t l_293[9];
    int64_t *l_294 = (void*)0;
    int64_t *l_295 = (void*)0;
    int64_t *l_296 = (void*)0;
    int64_t *l_297[4][6][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint8_t l_298 = 0x2FL;
    uint32_t l_299 = 0x655CE3A5L;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_293[i] = 0x3E7ED0B2L;
    p_1405->g_221[4][0][0] |= func_98((+((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 4))(p_1405->g_102.xxxx)).xyxzwxywwyxwxzwx))).sa), (safe_div_func_int64_t_s_s(((p_1405->g_112[0] = (p_1405->g_comm_values[p_1405->tid] = (p_1405->g_105 == ((*l_109) = l_107)))) ^ (safe_mod_func_uint8_t_u_u((l_118 = (l_115 = l_115)), l_119))), (safe_rshift_func_uint16_t_u_s(p_94, 7)))), p_1405->g_49, p_1405);
    l_231[5][3] = (((safe_sub_func_int32_t_s_s((p_95 != (((*l_251) = ((((((((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0UL, 0x0B0982D6L)), (*p_1405->g_69), (p_96 < p_1405->g_102.x), (((((VECTOR(uint64_t, 2))(l_224.xy)).lo < (!(safe_unary_minus_func_int8_t_s((l_220[3][2][2] == (void*)0))))) == ((safe_mod_func_uint64_t_u_u((l_228 , (safe_rshift_func_int16_t_s_u(p_94, 14))), ((VECTOR(int64_t, 4))((p_95 > p_1405->g_194), ((VECTOR(int64_t, 2))(0x45A14F6FAD5A6DD6L)), (-1L))).z)) == (*p_1405->g_69))) || p_1405->g_53), p_95, p_96, 4294967295UL, (*p_1405->g_69), 1UL, ((VECTOR(uint32_t, 4))(6UL)), 4294967295UL, 0x09D507F3L)).s6a)))).xyxyxyyxyxxyxyxx, ((VECTOR(uint32_t, 16))(0x4599E6F7L))))).hi, ((VECTOR(uint32_t, 8))(0x530DF6F8L)), ((VECTOR(uint32_t, 8))(0xD04E9992L))))))), ((VECTOR(uint32_t, 8))(0x746F0742L))))).s7 > p_95) , l_231[5][3]) != p_1405->g_249) == p_1405->g_117) || 0x18L) , p_1405->g_49)) , p_1405->g_108)), l_252)) , 9L) , l_231[5][5]);
    p_1405->g_262 = ((p_1405->g_221[6][1][1] = (((safe_sub_func_int8_t_s_s(p_96, ((*l_107) |= (p_94 , (!(safe_lshift_func_int16_t_s_u(0x48D3L, 15))))))) || (((((l_228 , (p_1405->g_257 != l_259)) & ((GROUP_DIVERGE(2, 1) , ((safe_add_func_uint32_t_u_u(p_94, ((void*)0 != &l_252))) , p_94)) < GROUP_DIVERGE(1, 1))) || FAKE_DIVERGE(p_1405->global_2_offset, get_global_id(2), 10)) != p_94) | p_95)) , p_94)) != 0x91FE3648L);
    l_299 &= (safe_mul_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(((p_96 || ((*l_268) = (&p_1405->g_105 != &p_1405->g_105))) >= (safe_add_func_int16_t_s_s(p_94, ((((((safe_mul_func_uint16_t_u_u(((safe_div_func_int64_t_s_s(((p_94 || (18446744073709551612UL == (safe_sub_func_int64_t_s_s((l_298 = (safe_lshift_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s((~(safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(((void*)0 == &l_267), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_283.yw)).yxxy)).w, ((VECTOR(int16_t, 8))(p_1405->g_284.yxyyyxyx)), ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(l_285.yxyxyyxxxyyyyyyy)).s28, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_286.yyyy)), 0x229AL, ((VECTOR(int16_t, 2))(0x1160L, 0L)), 1L)).lo)).even))))), ((VECTOR(int16_t, 16))(l_287.s1162055541154531)).s9d, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_288.xxyyxxxxxyyyyxxy)).even)).s53))), (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(((-8L) || p_96), p_95)), 13)), ((VECTOR(int16_t, 2))(0x481FL)), 0x0C9DL)).sc0, ((VECTOR(int16_t, 2))((-6L)))))).yxxx, ((VECTOR(int16_t, 4))(0x137EL))))).xzxyxzxzzxzwyzwx, ((VECTOR(int16_t, 16))((-9L)))))).lo)).lo)).w, p_95))), l_293[5])) >= (*p_1405->g_69)) , p_1405->g_202.s8), 1))), p_1405->g_262)))) < p_1405->g_comm_values[p_1405->tid]), p_94)) & p_1405->g_46), p_1405->g_46)) >= p_96) | p_95) <= FAKE_DIVERGE(p_1405->global_2_offset, get_global_id(2), 10)) <= 0x1A17L) & 0x8735869CL)))), 0xC9A2DE6CL)) & p_1405->g_284.x) , p_95), p_96));
    return p_1405->g_112[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1405->g_117 p_1405->g_102 p_1405->g_149.f0 p_1405->g_69 p_1405->g_70 p_1405->g_162 p_1405->g_comm_values p_1405->g_194 p_1405->g_202 p_1405->g_49 p_1405->g_213
 * writes: p_1405->g_112 p_1405->g_194 p_1405->g_213 p_1405->g_219
 */
int32_t  func_98(int64_t  p_99, int8_t  p_100, int64_t  p_101, struct S4 * p_1405)
{ /* block id: 36 */
    uint16_t l_134[8][10][1] = {{{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL}},{{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL}},{{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL}},{{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL}},{{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL}},{{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL}},{{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL}},{{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL}}};
    uint16_t *l_137[3];
    uint16_t **l_136[6];
    uint16_t l_139 = 4UL;
    int8_t *l_145[4][2][3] = {{{&p_1405->g_108,&p_1405->g_108,&p_1405->g_108},{&p_1405->g_108,&p_1405->g_108,&p_1405->g_108}},{{&p_1405->g_108,&p_1405->g_108,&p_1405->g_108},{&p_1405->g_108,&p_1405->g_108,&p_1405->g_108}},{{&p_1405->g_108,&p_1405->g_108,&p_1405->g_108},{&p_1405->g_108,&p_1405->g_108,&p_1405->g_108}},{{&p_1405->g_108,&p_1405->g_108,&p_1405->g_108},{&p_1405->g_108,&p_1405->g_108,&p_1405->g_108}}};
    union U3 *l_148[4] = {&p_1405->g_149,&p_1405->g_149,&p_1405->g_149,&p_1405->g_149};
    VECTOR(uint16_t, 2) l_161 = (VECTOR(uint16_t, 2))(65529UL, 0UL);
    VECTOR(uint8_t, 16) l_170 = (VECTOR(uint8_t, 16))(0xD5L, (VECTOR(uint8_t, 4))(0xD5L, (VECTOR(uint8_t, 2))(0xD5L, 0x2CL), 0x2CL), 0x2CL, 0xD5L, 0x2CL, (VECTOR(uint8_t, 2))(0xD5L, 0x2CL), (VECTOR(uint8_t, 2))(0xD5L, 0x2CL), 0xD5L, 0x2CL, 0xD5L, 0x2CL);
    int32_t l_182 = (-5L);
    uint16_t l_212 = 8UL;
    int32_t *l_218[4] = {&p_1405->g_53,&p_1405->g_53,&p_1405->g_53,&p_1405->g_53};
    int32_t **l_217[6] = {&l_218[2],(void*)0,&l_218[2],&l_218[2],(void*)0,&l_218[2]};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_137[i] = &l_134[5][6][0];
    for (i = 0; i < 6; i++)
        l_136[i] = &l_137[2];
    for (p_101 = 0; (p_101 < 8); ++p_101)
    { /* block id: 39 */
        VECTOR(int32_t, 2) l_128 = (VECTOR(int32_t, 2))(0x4A90243FL, (-3L));
        VECTOR(int8_t, 4) l_133 = (VECTOR(int8_t, 4))(0x28L, (VECTOR(int8_t, 2))(0x28L, 1L), 1L);
        uint32_t *l_135 = &p_1405->g_112[0];
        uint16_t ***l_138 = &l_136[3];
        int32_t l_143 = 0x1A244BBCL;
        VECTOR(int16_t, 4) l_144 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x0135L), 0x0135L);
        int8_t *l_146 = &p_1405->g_108;
        int8_t *l_147 = &p_1405->g_108;
        union U3 *l_211 = &p_1405->g_149;
        volatile uint32_t ***l_216 = &p_1405->g_213;
        int i;
        (*l_138) = (((*l_135) = (safe_mod_func_uint64_t_u_u(((1L ^ (safe_add_func_int16_t_s_s((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_128.yyxyxyyyyyyyxxxy)).odd)).s0 >= 0x7E3690D5L), p_100))) , (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(0x4AL, 0x3CL, ((VECTOR(int8_t, 4))(l_133.xxxw)), 0L, 2L)).s2, 0UL)), l_134[5][6][0]))), p_1405->g_117))) , l_136[3]);
        if (l_139)
            continue;
        if ((&p_1405->g_117 != (void*)0))
        { /* block id: 43 */
            union U3 l_140 = {18446744073709551614UL};
            int32_t *l_188 = &l_143;
            int32_t l_189 = 6L;
            int32_t *l_190 = &l_143;
            int32_t *l_191 = (void*)0;
            int32_t *l_192 = (void*)0;
            int32_t *l_193[10] = {&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143};
            VECTOR(int64_t, 2) l_201 = (VECTOR(int64_t, 2))(0x6C95E86A8CA0577EL, 0x2D83BFFE39278E08L);
            int64_t *l_205 = (void*)0;
            int64_t *l_206 = (void*)0;
            int64_t *l_207 = (void*)0;
            int64_t *l_208 = (void*)0;
            int i;
            if (((l_140 , (safe_sub_func_uint16_t_u_u((((p_1405->g_102.x == 0x6DE7L) & l_140.f0) || l_143), ((VECTOR(int16_t, 16))(l_144.yzwxxywxzyzxwzwy)).s0))) >= ((l_146 = l_145[1][0][1]) != l_147)))
            { /* block id: 45 */
                union U3 **l_150 = &l_148[0];
                (*l_150) = l_148[2];
            }
            else
            { /* block id: 47 */
                union U3 **l_167 = (void*)0;
                int32_t l_168 = (-7L);
                int32_t l_169 = 0L;
                int8_t **l_179 = &l_145[2][1][2];
                int64_t *l_180 = (void*)0;
                int64_t *l_181[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t *l_185 = (void*)0;
                int32_t *l_186 = (void*)0;
                int32_t *l_187 = &l_168;
                int i;
                l_169 ^= (safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(p_1405->g_149.f0, 4)), (((p_101 > 4294967291UL) >= (safe_mod_func_uint32_t_u_u((*p_1405->g_69), (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(l_161.yxyyxyyxyyyyxxxx)).sf, ((void*)0 != p_1405->g_162)))))) && ((((VECTOR(int32_t, 16))(0x7535E818L, 0x62C77FF3L, ((safe_rshift_func_uint16_t_u_u((&l_148[0] != l_167), 11)) || (l_168 == 0x7A68L)), ((VECTOR(int32_t, 4))((-10L))), p_1405->g_102.y, p_99, 0x00F08327L, ((VECTOR(int32_t, 2))(4L)), ((VECTOR(int32_t, 2))(0x0F40BAC0L)), 0x48A62483L, 0x0376514BL)).s0 == p_101) , 0x5FA4L)))), l_168));
                (*l_187) |= ((l_182 = (((VECTOR(uint8_t, 4))(l_170.sd461)).w == ((((safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s((-1L), l_161.y)), 4)), 0x499DL)), p_101)) , &p_100) != ((*l_179) = l_145[2][1][0])) , p_1405->g_comm_values[p_1405->tid]))) == (safe_lshift_func_uint16_t_u_u(FAKE_DIVERGE(p_1405->group_0_offset, get_group_id(0), 10), 10)));
            }
            --p_1405->g_194;
            l_128.x = ((((((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(65535UL, 9UL, 0xDD69L, 0xFF77L)).yyxzywxx)), 1UL, ((safe_div_func_int64_t_s_s(p_100, p_1405->g_149.f0)) | (((VECTOR(int8_t, 4))(((0x2A6EB984L && (safe_mul_func_uint8_t_u_u((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 4))(l_201.xyxy)), ((VECTOR(int64_t, 2))(p_1405->g_202.s1a)).xxyx))).lo)).lo > 1L), (safe_add_func_uint64_t_u_u((((((*l_188) = (-1L)) > ((safe_add_func_int8_t_s_s(((&l_136[3] == ((l_148[2] == l_211) , (void*)0)) , p_101), (-1L))) == p_1405->g_70[2][5])) , (*l_188)) < l_128.y), 0UL))))) , p_1405->g_102.x), ((VECTOR(int8_t, 2))(0x08L)), (-3L))).x != p_1405->g_49)), 0xD36AL, 0x6726L, ((VECTOR(uint16_t, 4))(0xE231L)))))).se1))).odd <= p_101) , (void*)0) == (void*)0) > l_212);
        }
        else
        { /* block id: 56 */
            return p_99;
        }
        (*l_216) = p_1405->g_213;
    }
    p_1405->g_219 = (void*)0;
    return p_100;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[41];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 41; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[41];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 41; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S4 c_1406;
    struct S4* p_1405 = &c_1406;
    struct S4 c_1407 = {
        0x5C8AL, // p_1405->g_15
        (VECTOR(uint64_t, 2))(0UL, 0xCA69919C44D4E2B7L), // p_1405->g_16
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967292UL), 4294967292UL), 4294967292UL, 1UL, 4294967292UL), // p_1405->g_32
        5UL, // p_1405->g_35
        0L, // p_1405->g_46
        (-1L), // p_1405->g_49
        0x6C63F78CL, // p_1405->g_53
        {{0x962F93B9L,4294967295UL,4294967295UL,0x962F93B9L,0x5A50E62FL,1UL,0UL,0xD4EB3E5EL},{0x962F93B9L,4294967295UL,4294967295UL,0x962F93B9L,0x5A50E62FL,1UL,0UL,0xD4EB3E5EL},{0x962F93B9L,4294967295UL,4294967295UL,0x962F93B9L,0x5A50E62FL,1UL,0UL,0xD4EB3E5EL},{0x962F93B9L,4294967295UL,4294967295UL,0x962F93B9L,0x5A50E62FL,1UL,0UL,0xD4EB3E5EL},{0x962F93B9L,4294967295UL,4294967295UL,0x962F93B9L,0x5A50E62FL,1UL,0UL,0xD4EB3E5EL},{0x962F93B9L,4294967295UL,4294967295UL,0x962F93B9L,0x5A50E62FL,1UL,0UL,0xD4EB3E5EL},{0x962F93B9L,4294967295UL,4294967295UL,0x962F93B9L,0x5A50E62FL,1UL,0UL,0xD4EB3E5EL}}, // p_1405->g_70
        &p_1405->g_70[2][5], // p_1405->g_69
        0x00BB484BL, // p_1405->g_79
        0xEC61L, // p_1405->g_81
        (-1L), // p_1405->g_85
        0x3BB7457EL, // p_1405->g_86
        18446744073709551615UL, // p_1405->g_89
        (VECTOR(int64_t, 2))(1L, 0x3A4418BAE6B99266L), // p_1405->g_102
        0L, // p_1405->g_106
        &p_1405->g_106, // p_1405->g_105
        (-1L), // p_1405->g_108
        {1UL}, // p_1405->g_112
        0xB3L, // p_1405->g_117
        {0UL}, // p_1405->g_149
        (void*)0, // p_1405->g_162
        0x195CL, // p_1405->g_194
        (VECTOR(int64_t, 16))(0x6418E54D311D30B9L, (VECTOR(int64_t, 4))(0x6418E54D311D30B9L, (VECTOR(int64_t, 2))(0x6418E54D311D30B9L, (-8L)), (-8L)), (-8L), 0x6418E54D311D30B9L, (-8L), (VECTOR(int64_t, 2))(0x6418E54D311D30B9L, (-8L)), (VECTOR(int64_t, 2))(0x6418E54D311D30B9L, (-8L)), 0x6418E54D311D30B9L, (-8L), 0x6418E54D311D30B9L, (-8L)), // p_1405->g_202
        4294967289UL, // p_1405->g_215
        &p_1405->g_215, // p_1405->g_214
        &p_1405->g_214, // p_1405->g_213
        (void*)0, // p_1405->g_219
        {{{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L}},{{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L}},{{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L}},{{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L}},{{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L}},{{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L}},{{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L}},{{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L}},{{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L}},{{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L},{0x760097F2L,0x1707A4C4L}}}, // p_1405->g_221
        {0}, // p_1405->g_232
        {{{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}}}}, // p_1405->g_233
        {0}, // p_1405->g_234
        {0}, // p_1405->g_235
        {0}, // p_1405->g_236
        {0}, // p_1405->g_237
        {0}, // p_1405->g_238
        {{0},{0}}, // p_1405->g_239
        {0}, // p_1405->g_240
        {0}, // p_1405->g_241
        {0}, // p_1405->g_242
        {0}, // p_1405->g_243
        {0}, // p_1405->g_244
        {{0}}, // p_1405->g_245
        {{0},{0},{0},{0},{0},{0},{0}}, // p_1405->g_246
        {0}, // p_1405->g_247
        {0}, // p_1405->g_248
        {0}, // p_1405->g_250
        &p_1405->g_250, // p_1405->g_249
        &p_1405->g_149, // p_1405->g_258
        &p_1405->g_258, // p_1405->g_257
        249UL, // p_1405->g_262
        (VECTOR(int16_t, 2))(5L, 9L), // p_1405->g_284
        {{{0x0D0107AFL,5UL,5UL,0x0D0107AFL,0UL,4294967295UL},{0x0D0107AFL,5UL,5UL,0x0D0107AFL,0UL,4294967295UL}},{{0x0D0107AFL,5UL,5UL,0x0D0107AFL,0UL,4294967295UL},{0x0D0107AFL,5UL,5UL,0x0D0107AFL,0UL,4294967295UL}},{{0x0D0107AFL,5UL,5UL,0x0D0107AFL,0UL,4294967295UL},{0x0D0107AFL,5UL,5UL,0x0D0107AFL,0UL,4294967295UL}},{{0x0D0107AFL,5UL,5UL,0x0D0107AFL,0UL,4294967295UL},{0x0D0107AFL,5UL,5UL,0x0D0107AFL,0UL,4294967295UL}}}, // p_1405->g_302
        1L, // p_1405->g_304
        (VECTOR(uint16_t, 8))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0xD5F2L), 0xD5F2L), 0xD5F2L, 7UL, 0xD5F2L), // p_1405->g_316
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x23C73E7EL), 0x23C73E7EL), 0x23C73E7EL, 0UL, 0x23C73E7EL, (VECTOR(uint32_t, 2))(0UL, 0x23C73E7EL), (VECTOR(uint32_t, 2))(0UL, 0x23C73E7EL), 0UL, 0x23C73E7EL, 0UL, 0x23C73E7EL), // p_1405->g_358
        (VECTOR(int16_t, 16))(0x5777L, (VECTOR(int16_t, 4))(0x5777L, (VECTOR(int16_t, 2))(0x5777L, 7L), 7L), 7L, 0x5777L, 7L, (VECTOR(int16_t, 2))(0x5777L, 7L), (VECTOR(int16_t, 2))(0x5777L, 7L), 0x5777L, 7L, 0x5777L, 7L), // p_1405->g_371
        {0}, // p_1405->g_373
        (VECTOR(uint8_t, 16))(0x1AL, (VECTOR(uint8_t, 4))(0x1AL, (VECTOR(uint8_t, 2))(0x1AL, 1UL), 1UL), 1UL, 0x1AL, 1UL, (VECTOR(uint8_t, 2))(0x1AL, 1UL), (VECTOR(uint8_t, 2))(0x1AL, 1UL), 0x1AL, 1UL, 0x1AL, 1UL), // p_1405->g_381
        (VECTOR(int8_t, 2))(0L, 0x09L), // p_1405->g_448
        (VECTOR(uint64_t, 4))(0x99B50B8E3C5E1EABL, (VECTOR(uint64_t, 2))(0x99B50B8E3C5E1EABL, 18446744073709551615UL), 18446744073709551615UL), // p_1405->g_477
        (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x1EL), 0x1EL), // p_1405->g_501
        (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, (-5L)), (-5L)), (-5L), 7L, (-5L), (VECTOR(int32_t, 2))(7L, (-5L)), (VECTOR(int32_t, 2))(7L, (-5L)), 7L, (-5L), 7L, (-5L)), // p_1405->g_504
        (VECTOR(uint64_t, 8))(18446744073709551612UL, (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 4UL), 4UL), 4UL, 18446744073709551612UL, 4UL), // p_1405->g_526
        (VECTOR(uint64_t, 2))(2UL, 18446744073709551615UL), // p_1405->g_527
        (VECTOR(uint64_t, 16))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0UL), 0UL), 0UL, 18446744073709551609UL, 0UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0UL), (VECTOR(uint64_t, 2))(18446744073709551609UL, 0UL), 18446744073709551609UL, 0UL, 18446744073709551609UL, 0UL), // p_1405->g_530
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 3L), 3L), // p_1405->g_535
        {{{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}}},{{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}}},{{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}}},{{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}}},{{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}}},{{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}}},{{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}}},{{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}}},{{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}}},{{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}},{{4294967295UL},{0x489ACD77L},{8UL}}}}, // p_1405->g_599
        &p_1405->g_599[0][0][2], // p_1405->g_598
        (VECTOR(uint8_t, 8))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 254UL), 254UL), 254UL, 254UL, 254UL), // p_1405->g_602
        (VECTOR(uint8_t, 16))(0x9AL, (VECTOR(uint8_t, 4))(0x9AL, (VECTOR(uint8_t, 2))(0x9AL, 251UL), 251UL), 251UL, 0x9AL, 251UL, (VECTOR(uint8_t, 2))(0x9AL, 251UL), (VECTOR(uint8_t, 2))(0x9AL, 251UL), 0x9AL, 251UL, 0x9AL, 251UL), // p_1405->g_603
        (-6L), // p_1405->g_702
        &p_1405->g_702, // p_1405->g_701
        (VECTOR(uint8_t, 16))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 252UL), 252UL), 252UL, 4UL, 252UL, (VECTOR(uint8_t, 2))(4UL, 252UL), (VECTOR(uint8_t, 2))(4UL, 252UL), 4UL, 252UL, 4UL, 252UL), // p_1405->g_725
        (VECTOR(int8_t, 16))(0x11L, (VECTOR(int8_t, 4))(0x11L, (VECTOR(int8_t, 2))(0x11L, 0x3EL), 0x3EL), 0x3EL, 0x11L, 0x3EL, (VECTOR(int8_t, 2))(0x11L, 0x3EL), (VECTOR(int8_t, 2))(0x11L, 0x3EL), 0x11L, 0x3EL, 0x11L, 0x3EL), // p_1405->g_738
        (VECTOR(int8_t, 16))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0x5AL), 0x5AL), 0x5AL, 9L, 0x5AL, (VECTOR(int8_t, 2))(9L, 0x5AL), (VECTOR(int8_t, 2))(9L, 0x5AL), 9L, 0x5AL, 9L, 0x5AL), // p_1405->g_739
        (VECTOR(int8_t, 8))(0x2AL, (VECTOR(int8_t, 4))(0x2AL, (VECTOR(int8_t, 2))(0x2AL, 0x0AL), 0x0AL), 0x0AL, 0x2AL, 0x0AL), // p_1405->g_740
        {4294967295UL}, // p_1405->g_775
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 5UL), 5UL), 5UL, 18446744073709551615UL, 5UL), // p_1405->g_777
        (VECTOR(uint16_t, 16))(0x0FF6L, (VECTOR(uint16_t, 4))(0x0FF6L, (VECTOR(uint16_t, 2))(0x0FF6L, 0xA025L), 0xA025L), 0xA025L, 0x0FF6L, 0xA025L, (VECTOR(uint16_t, 2))(0x0FF6L, 0xA025L), (VECTOR(uint16_t, 2))(0x0FF6L, 0xA025L), 0x0FF6L, 0xA025L, 0x0FF6L, 0xA025L), // p_1405->g_799
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1405->g_810
        0xA1944EFFFF730B86L, // p_1405->g_812
        (VECTOR(uint16_t, 16))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 4UL), 4UL), 4UL, 65532UL, 4UL, (VECTOR(uint16_t, 2))(65532UL, 4UL), (VECTOR(uint16_t, 2))(65532UL, 4UL), 65532UL, 4UL, 65532UL, 4UL), // p_1405->g_1280
        (VECTOR(int32_t, 2))(0x3894DCC4L, 7L), // p_1405->g_1296
        (VECTOR(int32_t, 2))(6L, 0x7629C951L), // p_1405->g_1316
        {0x4CL,0x4CL,0x4CL,0x4CL,0x4CL}, // p_1405->g_1319
        (VECTOR(int8_t, 8))(5L, (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0x14L), 0x14L), 0x14L, 5L, 0x14L), // p_1405->g_1338
        {0}, // p_1405->g_1339
        {0x6E4E8AE0L}, // p_1405->g_1396
        0, // p_1405->v_collective
        sequence_input[get_global_id(0)], // p_1405->global_0_offset
        sequence_input[get_global_id(1)], // p_1405->global_1_offset
        sequence_input[get_global_id(2)], // p_1405->global_2_offset
        sequence_input[get_local_id(0)], // p_1405->local_0_offset
        sequence_input[get_local_id(1)], // p_1405->local_1_offset
        sequence_input[get_local_id(2)], // p_1405->local_2_offset
        sequence_input[get_group_id(0)], // p_1405->group_0_offset
        sequence_input[get_group_id(1)], // p_1405->group_1_offset
        sequence_input[get_group_id(2)], // p_1405->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_1405->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1406 = c_1407;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1405);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1405->g_15, "p_1405->g_15", print_hash_value);
    transparent_crc(p_1405->g_16.x, "p_1405->g_16.x", print_hash_value);
    transparent_crc(p_1405->g_16.y, "p_1405->g_16.y", print_hash_value);
    transparent_crc(p_1405->g_32.s0, "p_1405->g_32.s0", print_hash_value);
    transparent_crc(p_1405->g_32.s1, "p_1405->g_32.s1", print_hash_value);
    transparent_crc(p_1405->g_32.s2, "p_1405->g_32.s2", print_hash_value);
    transparent_crc(p_1405->g_32.s3, "p_1405->g_32.s3", print_hash_value);
    transparent_crc(p_1405->g_32.s4, "p_1405->g_32.s4", print_hash_value);
    transparent_crc(p_1405->g_32.s5, "p_1405->g_32.s5", print_hash_value);
    transparent_crc(p_1405->g_32.s6, "p_1405->g_32.s6", print_hash_value);
    transparent_crc(p_1405->g_32.s7, "p_1405->g_32.s7", print_hash_value);
    transparent_crc(p_1405->g_35, "p_1405->g_35", print_hash_value);
    transparent_crc(p_1405->g_46, "p_1405->g_46", print_hash_value);
    transparent_crc(p_1405->g_49, "p_1405->g_49", print_hash_value);
    transparent_crc(p_1405->g_53, "p_1405->g_53", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1405->g_70[i][j], "p_1405->g_70[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1405->g_79, "p_1405->g_79", print_hash_value);
    transparent_crc(p_1405->g_81, "p_1405->g_81", print_hash_value);
    transparent_crc(p_1405->g_85, "p_1405->g_85", print_hash_value);
    transparent_crc(p_1405->g_86, "p_1405->g_86", print_hash_value);
    transparent_crc(p_1405->g_89, "p_1405->g_89", print_hash_value);
    transparent_crc(p_1405->g_102.x, "p_1405->g_102.x", print_hash_value);
    transparent_crc(p_1405->g_102.y, "p_1405->g_102.y", print_hash_value);
    transparent_crc(p_1405->g_106, "p_1405->g_106", print_hash_value);
    transparent_crc(p_1405->g_108, "p_1405->g_108", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1405->g_112[i], "p_1405->g_112[i]", print_hash_value);

    }
    transparent_crc(p_1405->g_117, "p_1405->g_117", print_hash_value);
    transparent_crc(p_1405->g_149.f0, "p_1405->g_149.f0", print_hash_value);
    transparent_crc(p_1405->g_194, "p_1405->g_194", print_hash_value);
    transparent_crc(p_1405->g_202.s0, "p_1405->g_202.s0", print_hash_value);
    transparent_crc(p_1405->g_202.s1, "p_1405->g_202.s1", print_hash_value);
    transparent_crc(p_1405->g_202.s2, "p_1405->g_202.s2", print_hash_value);
    transparent_crc(p_1405->g_202.s3, "p_1405->g_202.s3", print_hash_value);
    transparent_crc(p_1405->g_202.s4, "p_1405->g_202.s4", print_hash_value);
    transparent_crc(p_1405->g_202.s5, "p_1405->g_202.s5", print_hash_value);
    transparent_crc(p_1405->g_202.s6, "p_1405->g_202.s6", print_hash_value);
    transparent_crc(p_1405->g_202.s7, "p_1405->g_202.s7", print_hash_value);
    transparent_crc(p_1405->g_202.s8, "p_1405->g_202.s8", print_hash_value);
    transparent_crc(p_1405->g_202.s9, "p_1405->g_202.s9", print_hash_value);
    transparent_crc(p_1405->g_202.sa, "p_1405->g_202.sa", print_hash_value);
    transparent_crc(p_1405->g_202.sb, "p_1405->g_202.sb", print_hash_value);
    transparent_crc(p_1405->g_202.sc, "p_1405->g_202.sc", print_hash_value);
    transparent_crc(p_1405->g_202.sd, "p_1405->g_202.sd", print_hash_value);
    transparent_crc(p_1405->g_202.se, "p_1405->g_202.se", print_hash_value);
    transparent_crc(p_1405->g_202.sf, "p_1405->g_202.sf", print_hash_value);
    transparent_crc(p_1405->g_215, "p_1405->g_215", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1405->g_221[i][j][k], "p_1405->g_221[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1405->g_262, "p_1405->g_262", print_hash_value);
    transparent_crc(p_1405->g_284.x, "p_1405->g_284.x", print_hash_value);
    transparent_crc(p_1405->g_284.y, "p_1405->g_284.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1405->g_302[i][j][k], "p_1405->g_302[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1405->g_304, "p_1405->g_304", print_hash_value);
    transparent_crc(p_1405->g_316.s0, "p_1405->g_316.s0", print_hash_value);
    transparent_crc(p_1405->g_316.s1, "p_1405->g_316.s1", print_hash_value);
    transparent_crc(p_1405->g_316.s2, "p_1405->g_316.s2", print_hash_value);
    transparent_crc(p_1405->g_316.s3, "p_1405->g_316.s3", print_hash_value);
    transparent_crc(p_1405->g_316.s4, "p_1405->g_316.s4", print_hash_value);
    transparent_crc(p_1405->g_316.s5, "p_1405->g_316.s5", print_hash_value);
    transparent_crc(p_1405->g_316.s6, "p_1405->g_316.s6", print_hash_value);
    transparent_crc(p_1405->g_316.s7, "p_1405->g_316.s7", print_hash_value);
    transparent_crc(p_1405->g_358.s0, "p_1405->g_358.s0", print_hash_value);
    transparent_crc(p_1405->g_358.s1, "p_1405->g_358.s1", print_hash_value);
    transparent_crc(p_1405->g_358.s2, "p_1405->g_358.s2", print_hash_value);
    transparent_crc(p_1405->g_358.s3, "p_1405->g_358.s3", print_hash_value);
    transparent_crc(p_1405->g_358.s4, "p_1405->g_358.s4", print_hash_value);
    transparent_crc(p_1405->g_358.s5, "p_1405->g_358.s5", print_hash_value);
    transparent_crc(p_1405->g_358.s6, "p_1405->g_358.s6", print_hash_value);
    transparent_crc(p_1405->g_358.s7, "p_1405->g_358.s7", print_hash_value);
    transparent_crc(p_1405->g_358.s8, "p_1405->g_358.s8", print_hash_value);
    transparent_crc(p_1405->g_358.s9, "p_1405->g_358.s9", print_hash_value);
    transparent_crc(p_1405->g_358.sa, "p_1405->g_358.sa", print_hash_value);
    transparent_crc(p_1405->g_358.sb, "p_1405->g_358.sb", print_hash_value);
    transparent_crc(p_1405->g_358.sc, "p_1405->g_358.sc", print_hash_value);
    transparent_crc(p_1405->g_358.sd, "p_1405->g_358.sd", print_hash_value);
    transparent_crc(p_1405->g_358.se, "p_1405->g_358.se", print_hash_value);
    transparent_crc(p_1405->g_358.sf, "p_1405->g_358.sf", print_hash_value);
    transparent_crc(p_1405->g_371.s0, "p_1405->g_371.s0", print_hash_value);
    transparent_crc(p_1405->g_371.s1, "p_1405->g_371.s1", print_hash_value);
    transparent_crc(p_1405->g_371.s2, "p_1405->g_371.s2", print_hash_value);
    transparent_crc(p_1405->g_371.s3, "p_1405->g_371.s3", print_hash_value);
    transparent_crc(p_1405->g_371.s4, "p_1405->g_371.s4", print_hash_value);
    transparent_crc(p_1405->g_371.s5, "p_1405->g_371.s5", print_hash_value);
    transparent_crc(p_1405->g_371.s6, "p_1405->g_371.s6", print_hash_value);
    transparent_crc(p_1405->g_371.s7, "p_1405->g_371.s7", print_hash_value);
    transparent_crc(p_1405->g_371.s8, "p_1405->g_371.s8", print_hash_value);
    transparent_crc(p_1405->g_371.s9, "p_1405->g_371.s9", print_hash_value);
    transparent_crc(p_1405->g_371.sa, "p_1405->g_371.sa", print_hash_value);
    transparent_crc(p_1405->g_371.sb, "p_1405->g_371.sb", print_hash_value);
    transparent_crc(p_1405->g_371.sc, "p_1405->g_371.sc", print_hash_value);
    transparent_crc(p_1405->g_371.sd, "p_1405->g_371.sd", print_hash_value);
    transparent_crc(p_1405->g_371.se, "p_1405->g_371.se", print_hash_value);
    transparent_crc(p_1405->g_371.sf, "p_1405->g_371.sf", print_hash_value);
    transparent_crc(p_1405->g_381.s0, "p_1405->g_381.s0", print_hash_value);
    transparent_crc(p_1405->g_381.s1, "p_1405->g_381.s1", print_hash_value);
    transparent_crc(p_1405->g_381.s2, "p_1405->g_381.s2", print_hash_value);
    transparent_crc(p_1405->g_381.s3, "p_1405->g_381.s3", print_hash_value);
    transparent_crc(p_1405->g_381.s4, "p_1405->g_381.s4", print_hash_value);
    transparent_crc(p_1405->g_381.s5, "p_1405->g_381.s5", print_hash_value);
    transparent_crc(p_1405->g_381.s6, "p_1405->g_381.s6", print_hash_value);
    transparent_crc(p_1405->g_381.s7, "p_1405->g_381.s7", print_hash_value);
    transparent_crc(p_1405->g_381.s8, "p_1405->g_381.s8", print_hash_value);
    transparent_crc(p_1405->g_381.s9, "p_1405->g_381.s9", print_hash_value);
    transparent_crc(p_1405->g_381.sa, "p_1405->g_381.sa", print_hash_value);
    transparent_crc(p_1405->g_381.sb, "p_1405->g_381.sb", print_hash_value);
    transparent_crc(p_1405->g_381.sc, "p_1405->g_381.sc", print_hash_value);
    transparent_crc(p_1405->g_381.sd, "p_1405->g_381.sd", print_hash_value);
    transparent_crc(p_1405->g_381.se, "p_1405->g_381.se", print_hash_value);
    transparent_crc(p_1405->g_381.sf, "p_1405->g_381.sf", print_hash_value);
    transparent_crc(p_1405->g_448.x, "p_1405->g_448.x", print_hash_value);
    transparent_crc(p_1405->g_448.y, "p_1405->g_448.y", print_hash_value);
    transparent_crc(p_1405->g_477.x, "p_1405->g_477.x", print_hash_value);
    transparent_crc(p_1405->g_477.y, "p_1405->g_477.y", print_hash_value);
    transparent_crc(p_1405->g_477.z, "p_1405->g_477.z", print_hash_value);
    transparent_crc(p_1405->g_477.w, "p_1405->g_477.w", print_hash_value);
    transparent_crc(p_1405->g_501.x, "p_1405->g_501.x", print_hash_value);
    transparent_crc(p_1405->g_501.y, "p_1405->g_501.y", print_hash_value);
    transparent_crc(p_1405->g_501.z, "p_1405->g_501.z", print_hash_value);
    transparent_crc(p_1405->g_501.w, "p_1405->g_501.w", print_hash_value);
    transparent_crc(p_1405->g_504.s0, "p_1405->g_504.s0", print_hash_value);
    transparent_crc(p_1405->g_504.s1, "p_1405->g_504.s1", print_hash_value);
    transparent_crc(p_1405->g_504.s2, "p_1405->g_504.s2", print_hash_value);
    transparent_crc(p_1405->g_504.s3, "p_1405->g_504.s3", print_hash_value);
    transparent_crc(p_1405->g_504.s4, "p_1405->g_504.s4", print_hash_value);
    transparent_crc(p_1405->g_504.s5, "p_1405->g_504.s5", print_hash_value);
    transparent_crc(p_1405->g_504.s6, "p_1405->g_504.s6", print_hash_value);
    transparent_crc(p_1405->g_504.s7, "p_1405->g_504.s7", print_hash_value);
    transparent_crc(p_1405->g_504.s8, "p_1405->g_504.s8", print_hash_value);
    transparent_crc(p_1405->g_504.s9, "p_1405->g_504.s9", print_hash_value);
    transparent_crc(p_1405->g_504.sa, "p_1405->g_504.sa", print_hash_value);
    transparent_crc(p_1405->g_504.sb, "p_1405->g_504.sb", print_hash_value);
    transparent_crc(p_1405->g_504.sc, "p_1405->g_504.sc", print_hash_value);
    transparent_crc(p_1405->g_504.sd, "p_1405->g_504.sd", print_hash_value);
    transparent_crc(p_1405->g_504.se, "p_1405->g_504.se", print_hash_value);
    transparent_crc(p_1405->g_504.sf, "p_1405->g_504.sf", print_hash_value);
    transparent_crc(p_1405->g_526.s0, "p_1405->g_526.s0", print_hash_value);
    transparent_crc(p_1405->g_526.s1, "p_1405->g_526.s1", print_hash_value);
    transparent_crc(p_1405->g_526.s2, "p_1405->g_526.s2", print_hash_value);
    transparent_crc(p_1405->g_526.s3, "p_1405->g_526.s3", print_hash_value);
    transparent_crc(p_1405->g_526.s4, "p_1405->g_526.s4", print_hash_value);
    transparent_crc(p_1405->g_526.s5, "p_1405->g_526.s5", print_hash_value);
    transparent_crc(p_1405->g_526.s6, "p_1405->g_526.s6", print_hash_value);
    transparent_crc(p_1405->g_526.s7, "p_1405->g_526.s7", print_hash_value);
    transparent_crc(p_1405->g_527.x, "p_1405->g_527.x", print_hash_value);
    transparent_crc(p_1405->g_527.y, "p_1405->g_527.y", print_hash_value);
    transparent_crc(p_1405->g_530.s0, "p_1405->g_530.s0", print_hash_value);
    transparent_crc(p_1405->g_530.s1, "p_1405->g_530.s1", print_hash_value);
    transparent_crc(p_1405->g_530.s2, "p_1405->g_530.s2", print_hash_value);
    transparent_crc(p_1405->g_530.s3, "p_1405->g_530.s3", print_hash_value);
    transparent_crc(p_1405->g_530.s4, "p_1405->g_530.s4", print_hash_value);
    transparent_crc(p_1405->g_530.s5, "p_1405->g_530.s5", print_hash_value);
    transparent_crc(p_1405->g_530.s6, "p_1405->g_530.s6", print_hash_value);
    transparent_crc(p_1405->g_530.s7, "p_1405->g_530.s7", print_hash_value);
    transparent_crc(p_1405->g_530.s8, "p_1405->g_530.s8", print_hash_value);
    transparent_crc(p_1405->g_530.s9, "p_1405->g_530.s9", print_hash_value);
    transparent_crc(p_1405->g_530.sa, "p_1405->g_530.sa", print_hash_value);
    transparent_crc(p_1405->g_530.sb, "p_1405->g_530.sb", print_hash_value);
    transparent_crc(p_1405->g_530.sc, "p_1405->g_530.sc", print_hash_value);
    transparent_crc(p_1405->g_530.sd, "p_1405->g_530.sd", print_hash_value);
    transparent_crc(p_1405->g_530.se, "p_1405->g_530.se", print_hash_value);
    transparent_crc(p_1405->g_530.sf, "p_1405->g_530.sf", print_hash_value);
    transparent_crc(p_1405->g_535.x, "p_1405->g_535.x", print_hash_value);
    transparent_crc(p_1405->g_535.y, "p_1405->g_535.y", print_hash_value);
    transparent_crc(p_1405->g_535.z, "p_1405->g_535.z", print_hash_value);
    transparent_crc(p_1405->g_535.w, "p_1405->g_535.w", print_hash_value);
    transparent_crc(p_1405->g_602.s0, "p_1405->g_602.s0", print_hash_value);
    transparent_crc(p_1405->g_602.s1, "p_1405->g_602.s1", print_hash_value);
    transparent_crc(p_1405->g_602.s2, "p_1405->g_602.s2", print_hash_value);
    transparent_crc(p_1405->g_602.s3, "p_1405->g_602.s3", print_hash_value);
    transparent_crc(p_1405->g_602.s4, "p_1405->g_602.s4", print_hash_value);
    transparent_crc(p_1405->g_602.s5, "p_1405->g_602.s5", print_hash_value);
    transparent_crc(p_1405->g_602.s6, "p_1405->g_602.s6", print_hash_value);
    transparent_crc(p_1405->g_602.s7, "p_1405->g_602.s7", print_hash_value);
    transparent_crc(p_1405->g_603.s0, "p_1405->g_603.s0", print_hash_value);
    transparent_crc(p_1405->g_603.s1, "p_1405->g_603.s1", print_hash_value);
    transparent_crc(p_1405->g_603.s2, "p_1405->g_603.s2", print_hash_value);
    transparent_crc(p_1405->g_603.s3, "p_1405->g_603.s3", print_hash_value);
    transparent_crc(p_1405->g_603.s4, "p_1405->g_603.s4", print_hash_value);
    transparent_crc(p_1405->g_603.s5, "p_1405->g_603.s5", print_hash_value);
    transparent_crc(p_1405->g_603.s6, "p_1405->g_603.s6", print_hash_value);
    transparent_crc(p_1405->g_603.s7, "p_1405->g_603.s7", print_hash_value);
    transparent_crc(p_1405->g_603.s8, "p_1405->g_603.s8", print_hash_value);
    transparent_crc(p_1405->g_603.s9, "p_1405->g_603.s9", print_hash_value);
    transparent_crc(p_1405->g_603.sa, "p_1405->g_603.sa", print_hash_value);
    transparent_crc(p_1405->g_603.sb, "p_1405->g_603.sb", print_hash_value);
    transparent_crc(p_1405->g_603.sc, "p_1405->g_603.sc", print_hash_value);
    transparent_crc(p_1405->g_603.sd, "p_1405->g_603.sd", print_hash_value);
    transparent_crc(p_1405->g_603.se, "p_1405->g_603.se", print_hash_value);
    transparent_crc(p_1405->g_603.sf, "p_1405->g_603.sf", print_hash_value);
    transparent_crc(p_1405->g_702, "p_1405->g_702", print_hash_value);
    transparent_crc(p_1405->g_725.s0, "p_1405->g_725.s0", print_hash_value);
    transparent_crc(p_1405->g_725.s1, "p_1405->g_725.s1", print_hash_value);
    transparent_crc(p_1405->g_725.s2, "p_1405->g_725.s2", print_hash_value);
    transparent_crc(p_1405->g_725.s3, "p_1405->g_725.s3", print_hash_value);
    transparent_crc(p_1405->g_725.s4, "p_1405->g_725.s4", print_hash_value);
    transparent_crc(p_1405->g_725.s5, "p_1405->g_725.s5", print_hash_value);
    transparent_crc(p_1405->g_725.s6, "p_1405->g_725.s6", print_hash_value);
    transparent_crc(p_1405->g_725.s7, "p_1405->g_725.s7", print_hash_value);
    transparent_crc(p_1405->g_725.s8, "p_1405->g_725.s8", print_hash_value);
    transparent_crc(p_1405->g_725.s9, "p_1405->g_725.s9", print_hash_value);
    transparent_crc(p_1405->g_725.sa, "p_1405->g_725.sa", print_hash_value);
    transparent_crc(p_1405->g_725.sb, "p_1405->g_725.sb", print_hash_value);
    transparent_crc(p_1405->g_725.sc, "p_1405->g_725.sc", print_hash_value);
    transparent_crc(p_1405->g_725.sd, "p_1405->g_725.sd", print_hash_value);
    transparent_crc(p_1405->g_725.se, "p_1405->g_725.se", print_hash_value);
    transparent_crc(p_1405->g_725.sf, "p_1405->g_725.sf", print_hash_value);
    transparent_crc(p_1405->g_738.s0, "p_1405->g_738.s0", print_hash_value);
    transparent_crc(p_1405->g_738.s1, "p_1405->g_738.s1", print_hash_value);
    transparent_crc(p_1405->g_738.s2, "p_1405->g_738.s2", print_hash_value);
    transparent_crc(p_1405->g_738.s3, "p_1405->g_738.s3", print_hash_value);
    transparent_crc(p_1405->g_738.s4, "p_1405->g_738.s4", print_hash_value);
    transparent_crc(p_1405->g_738.s5, "p_1405->g_738.s5", print_hash_value);
    transparent_crc(p_1405->g_738.s6, "p_1405->g_738.s6", print_hash_value);
    transparent_crc(p_1405->g_738.s7, "p_1405->g_738.s7", print_hash_value);
    transparent_crc(p_1405->g_738.s8, "p_1405->g_738.s8", print_hash_value);
    transparent_crc(p_1405->g_738.s9, "p_1405->g_738.s9", print_hash_value);
    transparent_crc(p_1405->g_738.sa, "p_1405->g_738.sa", print_hash_value);
    transparent_crc(p_1405->g_738.sb, "p_1405->g_738.sb", print_hash_value);
    transparent_crc(p_1405->g_738.sc, "p_1405->g_738.sc", print_hash_value);
    transparent_crc(p_1405->g_738.sd, "p_1405->g_738.sd", print_hash_value);
    transparent_crc(p_1405->g_738.se, "p_1405->g_738.se", print_hash_value);
    transparent_crc(p_1405->g_738.sf, "p_1405->g_738.sf", print_hash_value);
    transparent_crc(p_1405->g_739.s0, "p_1405->g_739.s0", print_hash_value);
    transparent_crc(p_1405->g_739.s1, "p_1405->g_739.s1", print_hash_value);
    transparent_crc(p_1405->g_739.s2, "p_1405->g_739.s2", print_hash_value);
    transparent_crc(p_1405->g_739.s3, "p_1405->g_739.s3", print_hash_value);
    transparent_crc(p_1405->g_739.s4, "p_1405->g_739.s4", print_hash_value);
    transparent_crc(p_1405->g_739.s5, "p_1405->g_739.s5", print_hash_value);
    transparent_crc(p_1405->g_739.s6, "p_1405->g_739.s6", print_hash_value);
    transparent_crc(p_1405->g_739.s7, "p_1405->g_739.s7", print_hash_value);
    transparent_crc(p_1405->g_739.s8, "p_1405->g_739.s8", print_hash_value);
    transparent_crc(p_1405->g_739.s9, "p_1405->g_739.s9", print_hash_value);
    transparent_crc(p_1405->g_739.sa, "p_1405->g_739.sa", print_hash_value);
    transparent_crc(p_1405->g_739.sb, "p_1405->g_739.sb", print_hash_value);
    transparent_crc(p_1405->g_739.sc, "p_1405->g_739.sc", print_hash_value);
    transparent_crc(p_1405->g_739.sd, "p_1405->g_739.sd", print_hash_value);
    transparent_crc(p_1405->g_739.se, "p_1405->g_739.se", print_hash_value);
    transparent_crc(p_1405->g_739.sf, "p_1405->g_739.sf", print_hash_value);
    transparent_crc(p_1405->g_740.s0, "p_1405->g_740.s0", print_hash_value);
    transparent_crc(p_1405->g_740.s1, "p_1405->g_740.s1", print_hash_value);
    transparent_crc(p_1405->g_740.s2, "p_1405->g_740.s2", print_hash_value);
    transparent_crc(p_1405->g_740.s3, "p_1405->g_740.s3", print_hash_value);
    transparent_crc(p_1405->g_740.s4, "p_1405->g_740.s4", print_hash_value);
    transparent_crc(p_1405->g_740.s5, "p_1405->g_740.s5", print_hash_value);
    transparent_crc(p_1405->g_740.s6, "p_1405->g_740.s6", print_hash_value);
    transparent_crc(p_1405->g_740.s7, "p_1405->g_740.s7", print_hash_value);
    transparent_crc(p_1405->g_775.f0, "p_1405->g_775.f0", print_hash_value);
    transparent_crc(p_1405->g_777.s0, "p_1405->g_777.s0", print_hash_value);
    transparent_crc(p_1405->g_777.s1, "p_1405->g_777.s1", print_hash_value);
    transparent_crc(p_1405->g_777.s2, "p_1405->g_777.s2", print_hash_value);
    transparent_crc(p_1405->g_777.s3, "p_1405->g_777.s3", print_hash_value);
    transparent_crc(p_1405->g_777.s4, "p_1405->g_777.s4", print_hash_value);
    transparent_crc(p_1405->g_777.s5, "p_1405->g_777.s5", print_hash_value);
    transparent_crc(p_1405->g_777.s6, "p_1405->g_777.s6", print_hash_value);
    transparent_crc(p_1405->g_777.s7, "p_1405->g_777.s7", print_hash_value);
    transparent_crc(p_1405->g_799.s0, "p_1405->g_799.s0", print_hash_value);
    transparent_crc(p_1405->g_799.s1, "p_1405->g_799.s1", print_hash_value);
    transparent_crc(p_1405->g_799.s2, "p_1405->g_799.s2", print_hash_value);
    transparent_crc(p_1405->g_799.s3, "p_1405->g_799.s3", print_hash_value);
    transparent_crc(p_1405->g_799.s4, "p_1405->g_799.s4", print_hash_value);
    transparent_crc(p_1405->g_799.s5, "p_1405->g_799.s5", print_hash_value);
    transparent_crc(p_1405->g_799.s6, "p_1405->g_799.s6", print_hash_value);
    transparent_crc(p_1405->g_799.s7, "p_1405->g_799.s7", print_hash_value);
    transparent_crc(p_1405->g_799.s8, "p_1405->g_799.s8", print_hash_value);
    transparent_crc(p_1405->g_799.s9, "p_1405->g_799.s9", print_hash_value);
    transparent_crc(p_1405->g_799.sa, "p_1405->g_799.sa", print_hash_value);
    transparent_crc(p_1405->g_799.sb, "p_1405->g_799.sb", print_hash_value);
    transparent_crc(p_1405->g_799.sc, "p_1405->g_799.sc", print_hash_value);
    transparent_crc(p_1405->g_799.sd, "p_1405->g_799.sd", print_hash_value);
    transparent_crc(p_1405->g_799.se, "p_1405->g_799.se", print_hash_value);
    transparent_crc(p_1405->g_799.sf, "p_1405->g_799.sf", print_hash_value);
    transparent_crc(p_1405->g_812, "p_1405->g_812", print_hash_value);
    transparent_crc(p_1405->g_1280.s0, "p_1405->g_1280.s0", print_hash_value);
    transparent_crc(p_1405->g_1280.s1, "p_1405->g_1280.s1", print_hash_value);
    transparent_crc(p_1405->g_1280.s2, "p_1405->g_1280.s2", print_hash_value);
    transparent_crc(p_1405->g_1280.s3, "p_1405->g_1280.s3", print_hash_value);
    transparent_crc(p_1405->g_1280.s4, "p_1405->g_1280.s4", print_hash_value);
    transparent_crc(p_1405->g_1280.s5, "p_1405->g_1280.s5", print_hash_value);
    transparent_crc(p_1405->g_1280.s6, "p_1405->g_1280.s6", print_hash_value);
    transparent_crc(p_1405->g_1280.s7, "p_1405->g_1280.s7", print_hash_value);
    transparent_crc(p_1405->g_1280.s8, "p_1405->g_1280.s8", print_hash_value);
    transparent_crc(p_1405->g_1280.s9, "p_1405->g_1280.s9", print_hash_value);
    transparent_crc(p_1405->g_1280.sa, "p_1405->g_1280.sa", print_hash_value);
    transparent_crc(p_1405->g_1280.sb, "p_1405->g_1280.sb", print_hash_value);
    transparent_crc(p_1405->g_1280.sc, "p_1405->g_1280.sc", print_hash_value);
    transparent_crc(p_1405->g_1280.sd, "p_1405->g_1280.sd", print_hash_value);
    transparent_crc(p_1405->g_1280.se, "p_1405->g_1280.se", print_hash_value);
    transparent_crc(p_1405->g_1280.sf, "p_1405->g_1280.sf", print_hash_value);
    transparent_crc(p_1405->g_1296.x, "p_1405->g_1296.x", print_hash_value);
    transparent_crc(p_1405->g_1296.y, "p_1405->g_1296.y", print_hash_value);
    transparent_crc(p_1405->g_1316.x, "p_1405->g_1316.x", print_hash_value);
    transparent_crc(p_1405->g_1316.y, "p_1405->g_1316.y", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1405->g_1319[i], "p_1405->g_1319[i]", print_hash_value);

    }
    transparent_crc(p_1405->g_1338.s0, "p_1405->g_1338.s0", print_hash_value);
    transparent_crc(p_1405->g_1338.s1, "p_1405->g_1338.s1", print_hash_value);
    transparent_crc(p_1405->g_1338.s2, "p_1405->g_1338.s2", print_hash_value);
    transparent_crc(p_1405->g_1338.s3, "p_1405->g_1338.s3", print_hash_value);
    transparent_crc(p_1405->g_1338.s4, "p_1405->g_1338.s4", print_hash_value);
    transparent_crc(p_1405->g_1338.s5, "p_1405->g_1338.s5", print_hash_value);
    transparent_crc(p_1405->g_1338.s6, "p_1405->g_1338.s6", print_hash_value);
    transparent_crc(p_1405->g_1338.s7, "p_1405->g_1338.s7", print_hash_value);
    transparent_crc(p_1405->g_1396.f0, "p_1405->g_1396.f0", print_hash_value);
    transparent_crc(p_1405->v_collective, "p_1405->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 41; i++)
            transparent_crc(p_1405->g_special_values[i + 41 * get_linear_group_id()], "p_1405->g_special_values[i + 41 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 41; i++)
            transparent_crc(p_1405->l_special_values[i], "p_1405->l_special_values[i]", print_hash_value);
    transparent_crc(p_1405->l_comm_values[get_linear_local_id()], "p_1405->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1405->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_1405->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
