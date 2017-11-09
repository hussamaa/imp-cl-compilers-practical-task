// --atomics 46 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 67,81,1 -l 67,1,1
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

__constant uint32_t permutations[10][67] = {
{61,63,24,37,50,20,59,9,14,36,7,57,17,18,12,2,16,29,26,64,46,34,28,0,54,55,62,4,13,25,60,66,19,10,53,1,41,48,45,35,47,23,32,8,42,65,22,58,5,3,49,44,43,21,40,15,6,30,52,33,51,31,38,56,39,27,11}, // permutation 0
{28,64,36,43,25,2,22,52,66,42,60,20,63,11,37,13,61,9,34,30,15,33,7,24,26,1,23,6,50,17,8,58,49,57,62,48,21,59,40,46,4,16,54,55,38,51,31,41,47,29,65,0,10,44,27,32,14,56,45,19,53,5,35,18,39,12,3}, // permutation 1
{55,7,36,48,39,11,25,27,63,16,28,52,9,14,2,61,12,38,10,65,8,30,37,34,44,64,51,43,6,53,5,60,42,26,47,57,40,33,21,59,22,46,62,20,56,41,54,4,1,49,58,45,50,18,35,66,19,23,31,0,3,24,32,13,15,17,29}, // permutation 2
{1,31,54,56,40,11,32,21,47,7,24,22,35,29,26,38,63,62,5,30,6,61,65,20,34,43,2,17,58,16,19,36,10,23,52,39,18,8,64,66,59,12,9,37,28,46,48,44,4,50,13,60,3,25,51,53,42,49,41,33,15,27,55,0,14,45,57}, // permutation 3
{61,18,53,35,27,19,30,46,22,51,10,39,44,58,41,34,6,5,47,0,65,40,48,25,50,45,64,21,59,60,15,66,20,4,57,17,32,36,38,52,23,42,13,26,49,2,1,54,63,12,55,16,37,7,11,31,29,8,14,28,3,43,56,62,24,9,33}, // permutation 4
{12,25,30,35,14,46,39,56,33,19,1,28,42,5,65,54,52,43,51,55,36,62,47,26,9,66,60,22,58,3,13,44,40,61,10,0,34,15,29,20,53,49,21,17,37,8,64,63,38,18,6,59,2,32,4,23,57,31,48,7,45,27,50,41,11,16,24}, // permutation 5
{66,39,19,40,26,15,20,49,17,53,8,64,43,21,65,41,57,33,11,35,32,6,28,1,18,60,22,42,25,58,54,14,5,36,52,34,3,51,45,55,31,38,30,4,63,46,56,61,27,62,50,48,0,24,37,10,29,9,23,16,44,59,2,13,7,47,12}, // permutation 6
{54,47,17,55,39,2,42,48,21,0,4,7,15,14,52,58,3,35,5,45,43,26,8,12,23,6,37,46,63,32,64,40,16,60,57,66,22,53,28,33,50,24,25,29,31,11,49,56,34,30,36,44,38,18,41,13,9,51,19,65,27,1,10,61,20,59,62}, // permutation 7
{2,64,34,65,20,16,59,46,32,29,0,44,14,57,55,7,62,24,30,45,43,61,26,53,8,18,15,17,21,9,58,56,48,19,31,10,38,11,6,50,12,5,40,66,25,52,41,23,1,54,51,42,27,4,39,49,47,35,60,33,36,13,28,63,3,22,37}, // permutation 8
{46,21,51,62,35,47,0,20,11,1,39,25,10,64,4,57,15,43,27,22,65,41,52,32,31,66,7,30,14,33,45,36,26,59,60,16,5,38,17,3,49,37,54,23,40,53,63,50,13,55,19,24,29,28,44,2,34,9,12,6,61,8,56,18,42,48,58} // permutation 9
};

// Seed: 1904066312

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint8_t  f0;
   int32_t  f1;
   volatile uint32_t  f2;
   int8_t  f3;
};

struct S1 {
   uint32_t  f0;
};

struct S2 {
    int32_t g_2[8][7];
    int32_t g_7;
    int32_t *g_6[5][6][5];
    struct S1 g_20;
    VECTOR(int8_t, 8) g_51;
    VECTOR(int8_t, 4) g_53;
    VECTOR(int8_t, 2) g_116;
    VECTOR(uint16_t, 8) g_119;
    volatile VECTOR(int16_t, 8) g_122;
    uint64_t g_143;
    int32_t g_144[5][9];
    int32_t g_145;
    uint16_t g_148;
    int32_t ** volatile g_150[6][7];
    uint32_t g_171;
    volatile struct S0 g_173;
    VECTOR(uint64_t, 4) g_192;
    struct S0 g_210;
    volatile VECTOR(int16_t, 2) g_215;
    uint8_t g_228;
    volatile int8_t g_236;
    volatile VECTOR(int8_t, 4) g_237;
    volatile int8_t g_238;
    volatile int8_t g_239;
    volatile int8_t g_240;
    volatile int8_t g_241;
    volatile int8_t g_242;
    volatile int8_t g_243;
    volatile int8_t g_244;
    volatile int8_t g_245;
    volatile VECTOR(int8_t, 8) g_246;
    volatile int8_t g_247;
    volatile int8_t g_248;
    volatile int8_t g_249;
    volatile int8_t g_250;
    volatile int8_t g_251;
    volatile int8_t g_252;
    volatile int8_t g_253;
    volatile int8_t g_254;
    volatile int8_t g_255;
    volatile int8_t g_256;
    volatile int8_t g_257;
    volatile int8_t g_258;
    volatile int8_t g_259;
    volatile int8_t g_260;
    volatile int8_t g_261;
    volatile int8_t g_262[4][1];
    volatile int8_t g_263;
    volatile int8_t g_264[10][5];
    volatile int8_t g_265;
    volatile int8_t g_266;
    volatile int8_t g_267;
    volatile int8_t g_268;
    volatile int8_t g_269;
    volatile int8_t g_270;
    volatile int8_t g_271;
    volatile int8_t g_272;
    volatile int8_t g_273;
    volatile int8_t g_274;
    volatile int8_t g_275[9][9];
    volatile int8_t g_276;
    volatile int8_t g_277;
    volatile int8_t g_278;
    volatile int8_t g_279;
    volatile int8_t g_280;
    volatile int8_t g_281;
    volatile int8_t g_282;
    volatile int8_t g_283;
    volatile int8_t g_284;
    volatile int8_t g_285;
    volatile int8_t g_286;
    volatile int8_t g_287;
    volatile int8_t g_288;
    volatile int8_t g_289;
    volatile int8_t g_290[1];
    volatile int8_t g_291[2];
    volatile int8_t g_292;
    volatile int8_t g_293;
    volatile int8_t g_294;
    volatile int8_t g_295;
    volatile VECTOR(int8_t, 2) g_296;
    volatile int8_t g_297;
    volatile int8_t g_298[10];
    volatile VECTOR(int8_t, 8) g_299;
    volatile int8_t g_300;
    volatile int8_t g_301;
    volatile int8_t g_302;
    volatile int8_t g_303;
    volatile int8_t *g_235[9][10][2];
    VECTOR(uint64_t, 4) g_315;
    int32_t g_317;
    VECTOR(uint8_t, 8) g_333;
    volatile int64_t g_342;
    volatile int64_t *g_341;
    VECTOR(uint64_t, 4) g_343;
    volatile uint16_t g_346;
    volatile uint16_t *g_345[3][4][10];
    int16_t g_348;
    VECTOR(uint32_t, 4) g_379;
    volatile VECTOR(uint64_t, 2) g_384;
    VECTOR(int64_t, 16) g_387;
    VECTOR(int64_t, 8) g_388;
    VECTOR(int8_t, 16) g_391;
    VECTOR(int8_t, 16) g_392;
    VECTOR(uint16_t, 4) g_394;
    VECTOR(uint16_t, 16) g_397;
    VECTOR(int64_t, 4) g_409;
    int32_t g_423;
    struct S0 * volatile g_426;
    struct S0 *g_472[3][9];
    volatile VECTOR(uint16_t, 16) g_487;
    VECTOR(uint32_t, 4) g_489;
    VECTOR(uint32_t, 2) g_500;
    VECTOR(uint32_t, 16) g_512;
    volatile struct S0 g_515;
    volatile struct S0 g_517[4][5];
    int32_t *g_520;
    int32_t **g_519;
    volatile struct S0 g_530;
    volatile VECTOR(int32_t, 16) g_534;
    int64_t g_598[4][8][2];
    volatile int32_t g_610[7];
    struct S0 g_692[8][2];
    uint8_t g_694;
    int32_t * volatile g_702;
    int32_t * volatile * volatile g_703;
    uint16_t g_748;
    struct S1 g_755[9];
    struct S1 *g_761;
    VECTOR(int8_t, 4) g_786;
    VECTOR(int8_t, 16) g_788;
    int64_t g_797;
    volatile struct S0 g_820;
    volatile struct S0 * volatile g_821;
    VECTOR(int16_t, 2) g_875;
    VECTOR(int32_t, 16) g_918;
    VECTOR(int32_t, 2) g_919;
    uint8_t *g_961;
    uint8_t **g_960;
    uint8_t ** volatile *g_959;
    volatile int64_t g_967;
    volatile VECTOR(uint8_t, 2) g_1003;
    VECTOR(uint32_t, 2) g_1035;
    VECTOR(uint16_t, 8) g_1038;
    struct S0 g_1040;
    volatile VECTOR(uint8_t, 4) g_1047;
    volatile VECTOR(uint8_t, 8) g_1049;
    VECTOR(uint8_t, 4) g_1053;
    VECTOR(uint8_t, 16) g_1054;
    volatile VECTOR(uint8_t, 8) g_1055;
    volatile VECTOR(uint8_t, 2) g_1056;
    uint64_t g_1067;
    volatile VECTOR(int32_t, 2) g_1088;
    volatile struct S0 g_1100;
    struct S1 * volatile g_1101;
    volatile struct S0 g_1102;
    volatile VECTOR(int16_t, 8) g_1138;
    volatile VECTOR(int32_t, 8) g_1159;
    VECTOR(uint16_t, 16) g_1180;
    struct S0 **g_1199;
    uint32_t g_1201;
    VECTOR(uint64_t, 4) g_1227;
    volatile VECTOR(int8_t, 16) g_1244;
    VECTOR(int16_t, 2) g_1297;
    volatile struct S0 g_1306;
    volatile uint8_t g_1337[6][5];
    VECTOR(int16_t, 8) g_1387;
    struct S0 g_1391[10];
    VECTOR(int8_t, 4) g_1394;
    VECTOR(int8_t, 16) g_1395;
    int16_t g_1402;
    int32_t * volatile g_1404;
    VECTOR(uint8_t, 8) g_1428;
    VECTOR(int32_t, 4) g_1429;
    VECTOR(int32_t, 4) g_1430;
    VECTOR(int32_t, 2) g_1432;
    VECTOR(int32_t, 16) g_1433;
    VECTOR(int32_t, 2) g_1434;
    int16_t g_1435[10];
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
int64_t  func_1(struct S2 * p_1440);
struct S0  func_15(int32_t  p_16, struct S2 * p_1440);
int32_t * func_17(struct S1  p_18, int32_t  p_19, struct S2 * p_1440);
uint64_t  func_21(int32_t  p_22, int32_t ** p_23, uint32_t  p_24, int64_t  p_25, struct S2 * p_1440);
uint64_t  func_32(int32_t  p_33, int32_t * p_34, int32_t * p_35, int32_t  p_36, int32_t * p_37, struct S2 * p_1440);
int32_t * func_41(int32_t ** p_42, int8_t  p_43, uint8_t  p_44, int32_t ** p_45, struct S2 * p_1440);
int32_t ** func_46(int32_t  p_47, struct S2 * p_1440);
uint8_t  func_64(uint16_t  p_65, int32_t ** p_66, int8_t * p_67, int32_t * p_68, int32_t * p_69, struct S2 * p_1440);
int8_t  func_117(int32_t  p_118, struct S2 * p_1440);
int32_t  func_133(int32_t * p_134, int32_t ** p_135, int8_t * p_136, struct S2 * p_1440);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1440->g_2 p_1440->g_7 p_1440->g_20 p_1440->l_comm_values p_1440->g_51 p_1440->g_53 p_1440->g_6 p_1440->g_116 p_1440->g_119 p_1440->g_122 p_1440->g_143 p_1440->g_144 p_1440->g_148 p_1440->g_173 p_1440->g_192 p_1440->g_215 p_1440->g_235 p_1440->g_210.f1 p_1440->g_240 p_1440->g_210.f3 p_1440->g_210 p_1440->g_315 p_1440->g_comm_values p_1440->g_317 p_1440->g_333 p_1440->g_341 p_1440->g_343 p_1440->g_345 p_1440->g_293 p_1440->g_145 p_1440->g_228 p_1440->g_409 p_1440->g_379 p_1440->g_391 p_1440->g_348 p_1440->g_423 p_1440->g_426 p_1440->g_342 p_1440->g_487 p_1440->g_291 p_1440->g_387 p_1440->g_515 p_1440->g_519 p_1440->g_530 p_1440->g_534 p_1440->g_279 p_1440->g_520 p_1440->g_243 p_1440->g_241 p_1440->g_500 p_1440->g_692 p_1440->g_694 p_1440->g_267 p_1440->g_702 p_1440->g_703 p_1440->g_748 p_1440->g_297 p_1440->g_598 p_1440->g_512 p_1440->g_786 p_1440->g_788 p_1440->g_256 p_1440->g_171 p_1440->g_820 p_1440->g_821 p_1440->g_875 p_1440->g_392 p_1440->g_918 p_1440->g_919 p_1440->g_517.f1 p_1440->g_959 p_1440->g_967 p_1440->g_961 p_1440->g_960 p_1440->g_272 p_1440->g_1003 p_1440->g_1035 p_1440->g_1038 p_1440->g_472 p_1440->g_1047 p_1440->g_1049 p_1440->g_1053 p_1440->g_1054 p_1440->g_1055 p_1440->g_1056 p_1440->g_1067 p_1440->g_1101 p_1440->g_1102 p_1440->g_755 p_1440->g_1159 p_1440->g_1180 p_1440->g_1201 p_1440->g_1227 p_1440->g_384 p_1440->g_270 p_1440->g_1244 p_1440->g_394 p_1440->g_1297 p_1440->g_1306 p_1440->g_489 p_1440->g_1337 p_1440->g_261 p_1440->g_1040 p_1440->g_1199 p_1440->g_388 p_1440->g_1387 p_1440->g_517.f0 p_1440->g_1391 p_1440->g_1394 p_1440->g_1395 p_1440->g_1402
 * writes: p_1440->g_2 p_1440->g_6 p_1440->g_51 p_1440->g_143 p_1440->g_145 p_1440->g_148 p_1440->g_171 p_1440->g_173 p_1440->g_228 p_1440->g_53 p_1440->g_116 p_1440->g_210 p_1440->g_317 p_1440->g_348 p_1440->g_423 p_1440->g_333 p_1440->l_comm_values p_1440->g_472 p_1440->g_comm_values p_1440->g_517 p_1440->g_409 p_1440->g_520 p_1440->g_119 p_1440->g_748 p_1440->g_755 p_1440->g_761 p_1440->g_598 p_1440->g_343 p_1440->g_797 p_1440->g_788 p_1440->g_397 p_1440->g_515 p_1440->g_875 p_1440->g_392 p_1440->g_694 p_1440->g_391 p_1440->g_1067 p_1440->g_1100 p_1440->g_1040 p_1440->g_315 p_1440->g_1038 p_1440->g_1199 p_1440->g_786 p_1440->g_379 p_1440->g_20.f0 p_1440->g_20 p_1440->g_1227 p_1440->g_1297 p_1440->g_387 p_1440->g_1402
 */
int64_t  func_1(struct S2 * p_1440)
{ /* block id: 4 */
    uint16_t l_12 = 0x6CD8L;
    int32_t *l_13[4];
    int32_t **l_14 = &l_13[3];
    VECTOR(int8_t, 16) l_1396 = (VECTOR(int8_t, 16))(0x31L, (VECTOR(int8_t, 4))(0x31L, (VECTOR(int8_t, 2))(0x31L, (-1L)), (-1L)), (-1L), 0x31L, (-1L), (VECTOR(int8_t, 2))(0x31L, (-1L)), (VECTOR(int8_t, 2))(0x31L, (-1L)), 0x31L, (-1L), 0x31L, (-1L));
    int64_t *l_1399 = (void*)0;
    int64_t *l_1400[2];
    int16_t *l_1401 = &p_1440->g_1402;
    uint32_t l_1403 = 0UL;
    int32_t *l_1405[9];
    int64_t l_1406 = (-9L);
    VECTOR(int16_t, 4) l_1413 = (VECTOR(int16_t, 4))(0x0376L, (VECTOR(int16_t, 2))(0x0376L, (-3L)), (-3L));
    uint32_t l_1420 = 3UL;
    uint16_t *l_1427[1][4][7] = {{{&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748},{&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748},{&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748},{&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748,&p_1440->g_748}}};
    uint8_t l_1431 = 0x08L;
    int64_t l_1436 = 0x15184D484F9A268EL;
    int8_t l_1437 = 0x06L;
    int8_t l_1438[7][4];
    int8_t l_1439 = (-6L);
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_13[i] = &p_1440->g_2[5][6];
    for (i = 0; i < 2; i++)
        l_1400[i] = &p_1440->g_598[3][1][1];
    for (i = 0; i < 9; i++)
        l_1405[i] = &p_1440->g_423;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
            l_1438[i][j] = 0x6DL;
    }
    for (p_1440->g_2[5][6] = 19; (p_1440->g_2[5][6] == (-12)); --p_1440->g_2[5][6])
    { /* block id: 7 */
        int32_t *l_5 = (void*)0;
        p_1440->g_6[0][5][0] = l_5;
    }
    l_1406 = (((((((p_1440->g_2[5][6] , (safe_sub_func_uint8_t_u_u(((p_1440->g_7 > ((*l_1401) ^= (safe_mul_func_int8_t_s_s((((*l_14) = (l_12 , l_13[3])) != (func_15(l_12, p_1440) , ((p_1440->g_392.s9 , ((safe_add_func_uint8_t_u_u(((8UL != ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(p_1440->g_1394.xywyxwywxwyxyxzx)).lo, ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(p_1440->g_1395.s833e7b05)).s33, ((VECTOR(int8_t, 8))(l_1396.sba4f4a86)).s32))).xxyyxxxx))).s5) && (p_1440->g_387.s8 = (safe_lshift_func_int16_t_s_s(p_1440->g_1306.f2, 13)))), (***p_1440->g_959))) ^ l_12)) , (*p_1440->g_519)))), p_1440->g_1394.z)))) > p_1440->g_1180.sb), 0x00L))) > 18446744073709551608UL) ^ 0x7186L) , l_1403) || 6L) , 249UL) && (**l_14));
    (*p_1440->g_519) = (*l_14);
    return p_1440->g_1040.f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1440->g_20 p_1440->g_7 p_1440->l_comm_values p_1440->g_2 p_1440->g_51 p_1440->g_53 p_1440->g_6 p_1440->g_116 p_1440->g_119 p_1440->g_122 p_1440->g_143 p_1440->g_144 p_1440->g_148 p_1440->g_173 p_1440->g_192 p_1440->g_215 p_1440->g_235 p_1440->g_210.f1 p_1440->g_240 p_1440->g_210.f3 p_1440->g_210 p_1440->g_315 p_1440->g_comm_values p_1440->g_317 p_1440->g_333 p_1440->g_341 p_1440->g_343 p_1440->g_345 p_1440->g_293 p_1440->g_145 p_1440->g_228 p_1440->g_409 p_1440->g_379 p_1440->g_391 p_1440->g_348 p_1440->g_423 p_1440->g_426 p_1440->g_342 p_1440->g_487 p_1440->g_291 p_1440->g_387 p_1440->g_515 p_1440->g_519 p_1440->g_530 p_1440->g_534 p_1440->g_279 p_1440->g_520 p_1440->g_243 p_1440->g_241 p_1440->g_500 p_1440->g_692 p_1440->g_694 p_1440->g_267 p_1440->g_702 p_1440->g_703 p_1440->g_748 p_1440->g_297 p_1440->g_598 p_1440->g_512 p_1440->g_786 p_1440->g_788 p_1440->g_256 p_1440->g_171 p_1440->g_820 p_1440->g_821 p_1440->g_875 p_1440->g_392 p_1440->g_918 p_1440->g_919 p_1440->g_517.f1 p_1440->g_959 p_1440->g_967 p_1440->g_961 p_1440->g_960 p_1440->g_272 p_1440->g_1003 p_1440->g_1035 p_1440->g_1038 p_1440->g_472 p_1440->g_1047 p_1440->g_1049 p_1440->g_1053 p_1440->g_1054 p_1440->g_1055 p_1440->g_1056 p_1440->g_1067 p_1440->g_1101 p_1440->g_1102 p_1440->g_755 p_1440->g_1159 p_1440->g_1180 p_1440->g_1201 p_1440->g_1227 p_1440->g_384 p_1440->g_270 p_1440->g_1244 p_1440->g_394 p_1440->g_1297 p_1440->g_1306 p_1440->g_489 p_1440->g_1337 p_1440->g_261 p_1440->g_1040 p_1440->g_1199 p_1440->g_388 p_1440->g_1387 p_1440->g_517.f0 p_1440->g_1391
 * writes: p_1440->g_51 p_1440->g_143 p_1440->g_145 p_1440->g_148 p_1440->g_6 p_1440->g_2 p_1440->g_171 p_1440->g_173 p_1440->g_228 p_1440->g_53 p_1440->g_116 p_1440->g_210 p_1440->g_317 p_1440->g_348 p_1440->g_423 p_1440->g_333 p_1440->l_comm_values p_1440->g_472 p_1440->g_comm_values p_1440->g_517 p_1440->g_409 p_1440->g_520 p_1440->g_119 p_1440->g_748 p_1440->g_755 p_1440->g_761 p_1440->g_598 p_1440->g_343 p_1440->g_797 p_1440->g_788 p_1440->g_397 p_1440->g_515 p_1440->g_875 p_1440->g_392 p_1440->g_694 p_1440->g_391 p_1440->g_1067 p_1440->g_1100 p_1440->g_1040 p_1440->g_315 p_1440->g_1038 p_1440->g_1199 p_1440->g_786 p_1440->g_379 p_1440->g_20.f0 p_1440->g_20 p_1440->g_1227 p_1440->g_1297
 */
struct S0  func_15(int32_t  p_16, struct S2 * p_1440)
{ /* block id: 11 */
    int32_t **l_26[2][10] = {{&p_1440->g_6[0][5][0],(void*)0,&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],(void*)0,&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],(void*)0,&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0]},{&p_1440->g_6[0][5][0],(void*)0,&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],(void*)0,&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],(void*)0,&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0]}};
    uint32_t l_31 = 0xF6C5533FL;
    uint32_t *l_991 = (void*)0;
    uint32_t *l_992[7];
    int i, j;
    for (i = 0; i < 7; i++)
        l_992[i] = (void*)0;
    (*p_1440->g_519) = func_17(p_1440->g_20, (FAKE_DIVERGE(p_1440->group_0_offset, get_group_id(0), 10) , (func_21(p_16, l_26[1][8], p_1440->g_7, (safe_lshift_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(p_16, p_1440->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1440->tid, 67))])) && l_31), 2)), p_1440) , ((safe_sub_func_uint32_t_u_u((p_1440->g_171 ^= (((p_1440->g_272 , 65535UL) == 0x09DBL) == (-1L))), p_16)) != p_1440->g_500.x))), p_1440);
    return p_1440->g_1391[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1440->g_1003 p_1440->g_256 p_1440->g_116 p_1440->g_960 p_1440->g_961 p_1440->g_426 p_1440->g_210 p_1440->g_1035 p_1440->g_1038 p_1440->g_472 p_1440->g_144 p_1440->g_1047 p_1440->g_1049 p_1440->g_228 p_1440->g_1053 p_1440->g_1054 p_1440->g_702 p_1440->g_2 p_1440->g_1055 p_1440->g_1056 p_1440->g_1067 p_1440->g_530.f0 p_1440->g_519 p_1440->g_520 p_1440->g_171 p_1440->g_243 p_1440->g_918 p_1440->g_959 p_1440->g_423 p_1440->g_821 p_1440->g_515 p_1440->g_1101 p_1440->g_1102 p_1440->g_53 p_1440->g_755 p_1440->g_1159 p_1440->g_119 p_1440->g_1180 p_1440->g_786 p_1440->g_875 p_1440->g_392 p_1440->g_173.f0 p_1440->g_315 p_1440->g_1201 p_1440->g_51 p_1440->g_235 p_1440->g_1227 p_1440->g_384 p_1440->g_391 p_1440->g_270 p_1440->g_341 p_1440->g_342 p_1440->g_1244 p_1440->g_820.f1 p_1440->g_394 p_1440->g_333 p_1440->g_20.f0 p_1440->g_148 p_1440->g_1297 p_1440->g_1306 p_1440->g_489 p_1440->g_1337 p_1440->g_261 p_1440->g_1040 p_1440->g_1199 p_1440->g_388 p_1440->g_1387 p_1440->g_517.f0
 * writes: p_1440->g_228 p_1440->g_1067 p_1440->g_171 p_1440->g_520 p_1440->g_423 p_1440->g_2 p_1440->g_1100 p_1440->g_755 p_1440->g_1040 p_1440->g_317 p_1440->g_343 p_1440->g_875 p_1440->g_315 p_1440->g_210.f3 p_1440->g_119 p_1440->g_1038 p_1440->g_1199 p_1440->g_409 p_1440->g_598 p_1440->g_786 p_1440->g_379 p_1440->g_20.f0 p_1440->g_148 p_1440->g_20 p_1440->g_1227 p_1440->g_1297
 */
int32_t * func_17(struct S1  p_18, int32_t  p_19, struct S2 * p_1440)
{ /* block id: 383 */
    int8_t l_995 = 0x48L;
    VECTOR(uint8_t, 16) l_998 = (VECTOR(uint8_t, 16))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0UL), 0UL), 0UL, 248UL, 0UL, (VECTOR(uint8_t, 2))(248UL, 0UL), (VECTOR(uint8_t, 2))(248UL, 0UL), 248UL, 0UL, 248UL, 0UL);
    VECTOR(uint32_t, 16) l_1010 = (VECTOR(uint32_t, 16))(0x4BA856C0L, (VECTOR(uint32_t, 4))(0x4BA856C0L, (VECTOR(uint32_t, 2))(0x4BA856C0L, 0xD4FD1994L), 0xD4FD1994L), 0xD4FD1994L, 0x4BA856C0L, 0xD4FD1994L, (VECTOR(uint32_t, 2))(0x4BA856C0L, 0xD4FD1994L), (VECTOR(uint32_t, 2))(0x4BA856C0L, 0xD4FD1994L), 0x4BA856C0L, 0xD4FD1994L, 0x4BA856C0L, 0xD4FD1994L);
    uint32_t *l_1011 = (void*)0;
    uint32_t *l_1012 = (void*)0;
    uint32_t *l_1013 = (void*)0;
    uint32_t *l_1014 = (void*)0;
    int32_t l_1015 = 0x307978FAL;
    uint64_t l_1018[10] = {0UL,0x1C88D19D7C6218A0L,0UL,0UL,0x1C88D19D7C6218A0L,0UL,0UL,0x1C88D19D7C6218A0L,0UL,0UL};
    uint32_t l_1019 = 1UL;
    int32_t l_1020[7][3][1] = {{{0x07CE06C1L},{0x07CE06C1L},{0x07CE06C1L}},{{0x07CE06C1L},{0x07CE06C1L},{0x07CE06C1L}},{{0x07CE06C1L},{0x07CE06C1L},{0x07CE06C1L}},{{0x07CE06C1L},{0x07CE06C1L},{0x07CE06C1L}},{{0x07CE06C1L},{0x07CE06C1L},{0x07CE06C1L}},{{0x07CE06C1L},{0x07CE06C1L},{0x07CE06C1L}},{{0x07CE06C1L},{0x07CE06C1L},{0x07CE06C1L}}};
    int8_t *l_1021[5][5] = {{(void*)0,&p_1440->g_210.f3,&l_995,&p_1440->g_210.f3,(void*)0},{(void*)0,&p_1440->g_210.f3,&l_995,&p_1440->g_210.f3,(void*)0},{(void*)0,&p_1440->g_210.f3,&l_995,&p_1440->g_210.f3,(void*)0},{(void*)0,&p_1440->g_210.f3,&l_995,&p_1440->g_210.f3,(void*)0},{(void*)0,&p_1440->g_210.f3,&l_995,&p_1440->g_210.f3,(void*)0}};
    int32_t l_1022 = 0x612A7CCCL;
    struct S1 **l_1028 = &p_1440->g_761;
    VECTOR(uint32_t, 4) l_1032 = (VECTOR(uint32_t, 4))(0x068118A4L, (VECTOR(uint32_t, 2))(0x068118A4L, 4294967286UL), 4294967286UL);
    VECTOR(int32_t, 16) l_1034 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x6E3D6902L), 0x6E3D6902L), 0x6E3D6902L, (-6L), 0x6E3D6902L, (VECTOR(int32_t, 2))((-6L), 0x6E3D6902L), (VECTOR(int32_t, 2))((-6L), 0x6E3D6902L), (-6L), 0x6E3D6902L, (-6L), 0x6E3D6902L);
    struct S0 *l_1039 = &p_1440->g_1040;
    int64_t l_1041 = 0x051D4C3A060B6D9BL;
    VECTOR(uint8_t, 2) l_1052 = (VECTOR(uint8_t, 2))(0UL, 5UL);
    uint8_t ***l_1057 = (void*)0;
    uint8_t **l_1060[7][8][4] = {{{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961}},{{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961}},{{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961}},{{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961}},{{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961}},{{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961}},{{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961},{&p_1440->g_961,&p_1440->g_961,&p_1440->g_961,&p_1440->g_961}}};
    uint8_t ***l_1059 = &l_1060[0][5][3];
    VECTOR(uint64_t, 8) l_1061 = (VECTOR(uint64_t, 8))(0xC6BBCCA6C7766743L, (VECTOR(uint64_t, 4))(0xC6BBCCA6C7766743L, (VECTOR(uint64_t, 2))(0xC6BBCCA6C7766743L, 1UL), 1UL), 1UL, 0xC6BBCCA6C7766743L, 1UL);
    VECTOR(int64_t, 4) l_1114 = (VECTOR(int64_t, 4))(0x703767A00D490C36L, (VECTOR(int64_t, 2))(0x703767A00D490C36L, 0x4BB2232A0DD03727L), 0x4BB2232A0DD03727L);
    VECTOR(int16_t, 16) l_1130 = (VECTOR(int16_t, 16))(0x3FE2L, (VECTOR(int16_t, 4))(0x3FE2L, (VECTOR(int16_t, 2))(0x3FE2L, 0x4247L), 0x4247L), 0x4247L, 0x3FE2L, 0x4247L, (VECTOR(int16_t, 2))(0x3FE2L, 0x4247L), (VECTOR(int16_t, 2))(0x3FE2L, 0x4247L), 0x3FE2L, 0x4247L, 0x3FE2L, 0x4247L);
    VECTOR(uint64_t, 2) l_1133 = (VECTOR(uint64_t, 2))(0x8EF484C21825436AL, 0x7F2ED3742AD68DAAL);
    int32_t l_1150 = 6L;
    struct S0 **l_1200 = &p_1440->g_472[2][3];
    VECTOR(int16_t, 8) l_1223 = (VECTOR(int16_t, 8))(0x50C2L, (VECTOR(int16_t, 4))(0x50C2L, (VECTOR(int16_t, 2))(0x50C2L, 0x6FDFL), 0x6FDFL), 0x6FDFL, 0x50C2L, 0x6FDFL);
    VECTOR(int32_t, 4) l_1323 = (VECTOR(int32_t, 4))(0x6882EEACL, (VECTOR(int32_t, 2))(0x6882EEACL, 0L), 0L);
    int8_t l_1356 = (-3L);
    VECTOR(int64_t, 2) l_1372 = (VECTOR(int64_t, 2))(7L, 0L);
    VECTOR(int64_t, 4) l_1373 = (VECTOR(int64_t, 4))(0x5B0870E4C26D6E68L, (VECTOR(int64_t, 2))(0x5B0870E4C26D6E68L, 0x59DB9B903CDB840CL), 0x59DB9B903CDB840CL);
    VECTOR(int64_t, 4) l_1375 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-10L)), (-10L));
    int32_t *l_1390 = &p_1440->g_423;
    int i, j, k;
    if ((safe_mod_func_uint16_t_u_u(l_995, (l_995 | (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(l_998.s4c12349fc9add085)).s0, ((l_1022 &= ((safe_lshift_func_int8_t_s_s((((&p_1440->g_280 == ((0x0888F1D46240DC28L != (safe_div_func_uint8_t_u_u((l_1020[2][1][0] &= ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 16))(0UL, ((VECTOR(uint8_t, 2))(p_1440->g_1003.xy)), ((VECTOR(uint8_t, 4))((safe_lshift_func_int16_t_s_u(0x0580L, GROUP_DIVERGE(0, 1))), 4UL, 0x8CL, 0xB8L)), ((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 4))(0xCDL, ((VECTOR(uint8_t, 2))(9UL, 0x62L)), 0xBEL)).xwzxwxxz, ((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 2))(0x05L, 1UL)).xxyxyyxxxxyyxyxx, ((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(248UL, 0x5EL)))).xyxxyyxx)), (uint8_t)((**p_1440->g_960) = ((safe_div_func_uint64_t_u_u(((((p_19 || (p_18.f0 != (GROUP_DIVERGE(0, 1) || (safe_sub_func_uint32_t_u_u(((l_1015 ^= ((VECTOR(uint32_t, 8))(l_1010.sb4970288)).s7) > (p_19 , ((safe_lshift_func_int8_t_s_s(((l_998.s1 <= 0x7F44L) ^ p_18.f0), l_1018[3])) , p_18.f0))), p_1440->g_256))))) ^ l_998.s2) ^ l_998.s1) >= p_1440->g_116.y), 18446744073709551606UL)) & 18446744073709551611UL)), (uint8_t)l_1019))).even, ((VECTOR(uint8_t, 4))(0x29L))))).zxxwxyyxzxzxwxwy))).odd))), 253UL)), (uint8_t)l_1019))).s06)), ((VECTOR(uint8_t, 2))(1UL))))))).yxyx)).z), p_19))) , &l_995)) < l_1018[8]) ^ 250UL), 0)) | l_998.s0)) == l_998.s2)))))))
    { /* block id: 388 */
        struct S1 **l_1027 = (void*)0;
        int64_t *l_1030[7][10][3] = {{{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797}},{{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797}},{{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797}},{{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797}},{{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797}},{{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797}},{{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,&p_1440->g_797,&p_1440->g_797}}};
        int64_t **l_1029 = &l_1030[6][8][2];
        VECTOR(uint32_t, 8) l_1031 = (VECTOR(uint32_t, 8))(0xAFF8608BL, (VECTOR(uint32_t, 4))(0xAFF8608BL, (VECTOR(uint32_t, 2))(0xAFF8608BL, 0x28E99870L), 0x28E99870L), 0x28E99870L, 0xAFF8608BL, 0x28E99870L);
        VECTOR(uint32_t, 8) l_1033 = (VECTOR(uint32_t, 8))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0x5E5A12DFL), 0x5E5A12DFL), 0x5E5A12DFL, 5UL, 0x5E5A12DFL);
        VECTOR(uint32_t, 2) l_1036 = (VECTOR(uint32_t, 2))(0x3AA9A764L, 7UL);
        VECTOR(uint16_t, 8) l_1037 = (VECTOR(uint16_t, 8))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 0UL), 0UL), 0UL, 3UL, 0UL);
        VECTOR(uint8_t, 4) l_1042 = (VECTOR(uint8_t, 4))(0x1CL, (VECTOR(uint8_t, 2))(0x1CL, 0x24L), 0x24L);
        VECTOR(uint8_t, 8) l_1048 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x63L), 0x63L), 0x63L, 0UL, 0x63L);
        int32_t l_1090 = 0x47986EE9L;
        int i, j, k;
        if ((((safe_rshift_func_int16_t_s_u((FAKE_DIVERGE(p_1440->global_0_offset, get_global_id(0), 10) , (+(safe_sub_func_uint8_t_u_u((~(l_1027 == (p_19 , ((*p_1440->g_426) , l_1028)))), ((void*)0 == l_1021[2][2]))))), (+((((((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(0x0DBAE73EL, (((*l_1029) = &p_1440->g_797) == &p_1440->g_797), ((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_1031.s45)).yxxxyyxx)).even, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_1032.xyzyxxyzzzwzyxzx)).lo)))).even, ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 2))(l_1033.s61)).yxxxyyxy, ((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 8))(0x2A5E900BL, (-3L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1034.s25d4df2a)).even)))), 0x5269E4B1L, (-1L))).s53))).xxyxxyxy, ((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 8))(p_1440->g_1035.yxyxxxxy)).s05, ((VECTOR(uint32_t, 16))(l_1036.yxxyyyxyyyxyxxyy)).s76))).yyxxyyyy))).even))), 0x8B32E27CL, 8UL)).s3576606310711112, ((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 2))(l_1037.s26)).xxyy, ((VECTOR(uint16_t, 8))(p_1440->g_1038.s61035663)).even))).zwzzxzzyxwywzzzy, (uint32_t)(p_1440->g_472[2][3] == l_1039), (uint32_t)p_1440->g_144[2][3]))).hi, ((VECTOR(uint32_t, 8))(0x1C8A4F67L))))).s6124276442177167))).s3 != p_18.f0) ^ l_1041) >= 0L) < p_18.f0)))) , p_18.f0) , p_18.f0))
        { /* block id: 390 */
            uint8_t ***l_1058 = (void*)0;
            uint64_t *l_1066[10];
            uint32_t l_1072 = 0UL;
            int32_t l_1073 = 0x5A3DAAA0L;
            int32_t *l_1074 = &l_1022;
            int i;
            for (i = 0; i < 10; i++)
                l_1066[i] = &p_1440->g_1067;
            (*l_1074) ^= (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 8))(l_1042.ywwyywxz)).s77, ((VECTOR(uint8_t, 16))(((safe_div_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(p_1440->g_1047.xwzzwyzyyzxxyxwx)).sb616)).wxxywwzw)).s7265612105277174)).s8d)), ((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(0x41L, 0x22L)).xyyx, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 2))(0xBAL, 247UL)).yyxxxxyy, ((VECTOR(uint8_t, 4))(l_1048.s4005)).xywzzwzz))).hi, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_1440->g_1049.s46)), 0x11L, 0xFFL))))))).odd)), (uint8_t)(--(**p_1440->g_960))))).yyyy, ((VECTOR(uint8_t, 4))(0x72L, ((VECTOR(uint8_t, 2))(l_1052.yy)), 250UL))))).even, ((VECTOR(uint8_t, 2))(p_1440->g_1053.yx))))), 251UL, 0x88L)).wyyxwxyy)).s7750323257256376, ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 4))(p_1440->g_1054.sda99)), (uint8_t)((*p_1440->g_702) , 9UL)))).xyzyxzxyzxzxwyzx)).sb6, ((VECTOR(uint8_t, 4))(p_1440->g_1055.s4305)).even))), ((VECTOR(uint8_t, 8))(p_1440->g_1056.xxyxxyyx)).s61, ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(0xF2L, 1UL, 1UL, 0x2EL)).xyxyyyxy))).s55))).yxxxxyxyxxyyxxxy))).s5, (l_1057 == (l_1059 = l_1058)))), l_1032.w)) , (0x9E44B5107394E742L || ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_1061.s25)).yyxxyyxyyyyyyyxx)).s7)), 0x0EL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0UL, 253UL)).yyxxyyxyyxxxyxxy)).s5d)).yyyxyyyy)), 255UL, (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))((safe_sub_func_uint16_t_u_u(((p_1440->g_1067 |= ((VECTOR(uint64_t, 2))(3UL, 18446744073709551615UL)).even) , (l_1073 = ((p_1440->g_116.y ^ (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(l_1072, 1)), p_19))) <= (*p_1440->g_961)))), p_1440->g_530.f0)), p_19, 65535UL, 65535UL, 0xC50AL, 0xF9EBL, 0x07E9L, 0x4AB5L)).s3073435177242600)).s21a3, ((VECTOR(uint16_t, 4))(0xB240L)), ((VECTOR(uint16_t, 4))(65528UL))))).wzzywwww)).even)), ((VECTOR(uint16_t, 4))(0x8FE9L))))).y, 0x080BL)), 0x70L, 250UL, 0xC0L, 1UL)).scc))))), ((VECTOR(uint8_t, 2))(6UL))))).yyyyxxyyxxyxxyyy)).s50)).yxxx)).x && (*p_1440->g_961));
            return (*p_1440->g_519);
        }
        else
        { /* block id: 397 */
            int64_t *l_1082[4];
            int64_t *l_1083[6];
            int32_t l_1089 = 0L;
            int i;
            for (i = 0; i < 4; i++)
                l_1082[i] = &p_1440->g_797;
            for (i = 0; i < 6; i++)
                l_1083[i] = (void*)0;
            for (p_1440->g_171 = (-17); (p_1440->g_171 >= 46); p_1440->g_171++)
            { /* block id: 400 */
                int64_t *l_1081[9][7][4] = {{{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797}},{{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797}},{{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797}},{{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797}},{{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797}},{{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797}},{{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797}},{{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797}},{{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797},{(void*)0,(void*)0,&p_1440->g_797,&p_1440->g_797}}};
                int i, j, k;
                l_1090 &= (((void*)0 != (*l_1029)) != (((!(safe_sub_func_int8_t_s_s((((l_1082[2] = l_1081[2][2][3]) == (l_1034.sb , l_1083[4])) & 0x498E671F03B8924CL), ((safe_rshift_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s((p_1440->g_243 || ((!((VECTOR(int32_t, 8))(p_1440->g_1088.xxxxxxyy)).s3) == p_18.f0)), ((VECTOR(uint64_t, 4))(((((0UL != 0x264DL) == 0x7FBCL) && l_1020[2][1][0]) || (-2L)), ((VECTOR(uint64_t, 2))(7UL)), 0xBADA688AE132D830L)).x)) > p_1440->g_918.s4) < 0x1164DD2459609E42L), p_18.f0)) , l_1089)))) | p_1440->g_1035.y) == (***p_1440->g_959)));
                for (p_1440->g_228 = 11; (p_1440->g_228 >= 10); p_1440->g_228--)
                { /* block id: 405 */
                    int32_t *l_1095 = &p_1440->g_2[6][6];
                    (*p_1440->g_519) = &l_1020[2][1][0];
                    for (p_18.f0 = 0; (p_18.f0 <= 34); ++p_18.f0)
                    { /* block id: 409 */
                        return l_1095;
                    }
                    for (p_1440->g_423 = (-6); (p_1440->g_423 < (-29)); p_1440->g_423 = safe_sub_func_int64_t_s_s(p_1440->g_423, 8))
                    { /* block id: 414 */
                        (*p_1440->g_519) = &l_1090;
                        (*l_1095) = 2L;
                    }
                }
            }
        }
        for (p_1440->g_1067 = (-22); (p_1440->g_1067 >= 51); ++p_1440->g_1067)
        { /* block id: 423 */
            p_1440->g_1100 = (*p_1440->g_821);
            (*p_1440->g_1101) = p_18;
        }
        (*l_1039) = p_1440->g_1102;
    }
    else
    { /* block id: 428 */
        uint64_t l_1115 = 0xCC0499783E5BAFCEL;
        uint8_t ***l_1125[5];
        int32_t l_1127[8][5] = {{0x30EAB957L,0x7FBF81E8L,0x069A14C8L,0x7FBF81E8L,0x30EAB957L},{0x30EAB957L,0x7FBF81E8L,0x069A14C8L,0x7FBF81E8L,0x30EAB957L},{0x30EAB957L,0x7FBF81E8L,0x069A14C8L,0x7FBF81E8L,0x30EAB957L},{0x30EAB957L,0x7FBF81E8L,0x069A14C8L,0x7FBF81E8L,0x30EAB957L},{0x30EAB957L,0x7FBF81E8L,0x069A14C8L,0x7FBF81E8L,0x30EAB957L},{0x30EAB957L,0x7FBF81E8L,0x069A14C8L,0x7FBF81E8L,0x30EAB957L},{0x30EAB957L,0x7FBF81E8L,0x069A14C8L,0x7FBF81E8L,0x30EAB957L},{0x30EAB957L,0x7FBF81E8L,0x069A14C8L,0x7FBF81E8L,0x30EAB957L}};
        VECTOR(int64_t, 8) l_1156 = (VECTOR(int64_t, 8))(6L, (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 0x33F40C8A6F3F34C3L), 0x33F40C8A6F3F34C3L), 0x33F40C8A6F3F34C3L, 6L, 0x33F40C8A6F3F34C3L);
        VECTOR(uint32_t, 4) l_1158 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL);
        int32_t ***l_1183[9] = {&p_1440->g_519,(void*)0,&p_1440->g_519,&p_1440->g_519,(void*)0,&p_1440->g_519,&p_1440->g_519,(void*)0,&p_1440->g_519};
        int32_t l_1184 = 6L;
        uint64_t *l_1196[5][9] = {{(void*)0,&l_1018[1],(void*)0,(void*)0,&l_1018[1],(void*)0,(void*)0,&l_1018[1],(void*)0},{(void*)0,&l_1018[1],(void*)0,(void*)0,&l_1018[1],(void*)0,(void*)0,&l_1018[1],(void*)0},{(void*)0,&l_1018[1],(void*)0,(void*)0,&l_1018[1],(void*)0,(void*)0,&l_1018[1],(void*)0},{(void*)0,&l_1018[1],(void*)0,(void*)0,&l_1018[1],(void*)0,(void*)0,&l_1018[1],(void*)0},{(void*)0,&l_1018[1],(void*)0,(void*)0,&l_1018[1],(void*)0,(void*)0,&l_1018[1],(void*)0}};
        struct S0 **l_1197 = &l_1039;
        struct S0 ***l_1198[1];
        VECTOR(uint16_t, 8) l_1202 = (VECTOR(uint16_t, 8))(0xE536L, (VECTOR(uint16_t, 4))(0xE536L, (VECTOR(uint16_t, 2))(0xE536L, 0x93DAL), 0x93DAL), 0x93DAL, 0xE536L, 0x93DAL);
        int8_t **l_1209 = &l_1021[2][2];
        int8_t *l_1210[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(int64_t, 16) l_1217 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x5B3B4FFAFBCE7521L), 0x5B3B4FFAFBCE7521L), 0x5B3B4FFAFBCE7521L, 0L, 0x5B3B4FFAFBCE7521L, (VECTOR(int64_t, 2))(0L, 0x5B3B4FFAFBCE7521L), (VECTOR(int64_t, 2))(0L, 0x5B3B4FFAFBCE7521L), 0L, 0x5B3B4FFAFBCE7521L, 0L, 0x5B3B4FFAFBCE7521L);
        int8_t l_1241 = (-1L);
        VECTOR(int8_t, 8) l_1249 = (VECTOR(int8_t, 8))(0x05L, (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, (-1L)), (-1L)), (-1L), 0x05L, (-1L));
        VECTOR(int8_t, 8) l_1258 = (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 7L), 7L), 7L, (-4L), 7L);
        VECTOR(int8_t, 2) l_1261 = (VECTOR(int8_t, 2))(6L, 1L);
        int16_t l_1313 = (-1L);
        uint64_t l_1336 = 18446744073709551615UL;
        VECTOR(int32_t, 8) l_1351 = (VECTOR(int32_t, 8))(0x7EDDE949L, (VECTOR(int32_t, 4))(0x7EDDE949L, (VECTOR(int32_t, 2))(0x7EDDE949L, 1L), 1L), 1L, 0x7EDDE949L, 1L);
        uint32_t l_1353 = 0xE5F4173AL;
        uint32_t l_1357 = 1UL;
        int64_t *l_1374 = &l_1041;
        uint16_t *l_1382 = &p_1440->g_148;
        int i, j;
        for (i = 0; i < 5; i++)
            l_1125[i] = &p_1440->g_960;
        for (i = 0; i < 1; i++)
            l_1198[i] = &l_1197;
        for (l_1022 = 0; (l_1022 <= 1); ++l_1022)
        { /* block id: 431 */
            uint32_t l_1121[8][8] = {{0x2328FB91L,0x2328FB91L,1UL,0xEE24AADBL,4294967295UL,4294967295UL,0UL,4294967291UL},{0x2328FB91L,0x2328FB91L,1UL,0xEE24AADBL,4294967295UL,4294967295UL,0UL,4294967291UL},{0x2328FB91L,0x2328FB91L,1UL,0xEE24AADBL,4294967295UL,4294967295UL,0UL,4294967291UL},{0x2328FB91L,0x2328FB91L,1UL,0xEE24AADBL,4294967295UL,4294967295UL,0UL,4294967291UL},{0x2328FB91L,0x2328FB91L,1UL,0xEE24AADBL,4294967295UL,4294967295UL,0UL,4294967291UL},{0x2328FB91L,0x2328FB91L,1UL,0xEE24AADBL,4294967295UL,4294967295UL,0UL,4294967291UL},{0x2328FB91L,0x2328FB91L,1UL,0xEE24AADBL,4294967295UL,4294967295UL,0UL,4294967291UL},{0x2328FB91L,0x2328FB91L,1UL,0xEE24AADBL,4294967295UL,4294967295UL,0UL,4294967291UL}};
            uint8_t ***l_1124[7] = {&l_1060[0][5][3],&l_1060[0][5][3],&l_1060[0][5][3],&l_1060[0][5][3],&l_1060[0][5][3],&l_1060[0][5][3],&l_1060[0][5][3]};
            int32_t *l_1144 = &l_1020[4][1][0];
            int32_t *l_1145 = &l_1127[6][2];
            int32_t *l_1146 = (void*)0;
            int32_t *l_1147 = &l_1127[6][0];
            int32_t *l_1148[7][2] = {{&p_1440->g_2[0][4],(void*)0},{&p_1440->g_2[0][4],(void*)0},{&p_1440->g_2[0][4],(void*)0},{&p_1440->g_2[0][4],(void*)0},{&p_1440->g_2[0][4],(void*)0},{&p_1440->g_2[0][4],(void*)0},{&p_1440->g_2[0][4],(void*)0}};
            int32_t l_1149[10] = {9L,9L,9L,9L,9L,9L,9L,9L,9L,9L};
            uint16_t l_1151 = 0x1592L;
            VECTOR(uint32_t, 2) l_1157 = (VECTOR(uint32_t, 2))(9UL, 0UL);
            int i, j;
            for (p_1440->g_423 = 3; (p_1440->g_423 > 19); p_1440->g_423 = safe_add_func_uint64_t_u_u(p_1440->g_423, 5))
            { /* block id: 434 */
                uint8_t l_1111 = 0xF0L;
                uint64_t *l_1120[4][7][2] = {{{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143}},{{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143}},{{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143}},{{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143},{(void*)0,&p_1440->g_143}}};
                uint8_t ****l_1126 = &l_1059;
                struct S1 ***l_1139 = &l_1028;
                int16_t *l_1140 = (void*)0;
                int16_t *l_1141 = (void*)0;
                int16_t *l_1142 = (void*)0;
                int32_t *l_1143 = &l_1020[2][1][0];
                int i, j, k;
                for (p_1440->g_317 = 0; (p_1440->g_317 < 22); p_1440->g_317++)
                { /* block id: 437 */
                    int32_t *l_1109 = &p_1440->g_2[5][6];
                    int32_t *l_1110[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1110[i] = &p_1440->g_2[4][4];
                    l_1111++;
                }
                (*l_1143) = (((~((VECTOR(int64_t, 4))(0x183CC415A720C0CDL, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_1114.zwyxwzzy)).s37)), 0x1537F9E16AF3D7D4L)).w) & (((l_1115--) ^ (((safe_sub_func_uint32_t_u_u((p_1440->g_1102.f2 == (((l_1121[2][4]++) > FAKE_DIVERGE(p_1440->group_2_offset, get_group_id(2), 10)) > p_1440->g_53.w)), (p_1440->g_755[6] , GROUP_DIVERGE(1, 1)))) , (l_1124[3] != ((*l_1126) = l_1125[4]))) && l_1127[6][0])) , (p_1440->g_315.z = (safe_add_func_uint8_t_u_u((((VECTOR(int16_t, 4))(l_1130.scca5)).y , (safe_sub_func_uint64_t_u_u((p_18.f0 , (p_1440->g_343.y = ((VECTOR(uint64_t, 4))(l_1133.xxxx)).w)), (safe_mod_func_int64_t_s_s(((((0x30FCL <= (p_1440->g_875.x = ((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_1440->g_1138.s7517)).xxzxwywzwyxyxzxz)))).s3, 4)) < (((*l_1139) = &p_1440->g_761) != (void*)0)))) & p_1440->g_228) & 0UL) ^ (-1L)), p_18.f0))))), FAKE_DIVERGE(p_1440->global_0_offset, get_global_id(0), 10)))))) <= l_1015);
            }
            --l_1151;
            for (p_1440->g_210.f3 = 0; (p_1440->g_210.f3 > 7); p_1440->g_210.f3 = safe_add_func_int32_t_s_s(p_1440->g_210.f3, 8))
            { /* block id: 452 */
                VECTOR(uint16_t, 8) l_1160 = (VECTOR(uint16_t, 8))(0x9A48L, (VECTOR(uint16_t, 4))(0x9A48L, (VECTOR(uint16_t, 2))(0x9A48L, 0xA9B7L), 0xA9B7L), 0xA9B7L, 0x9A48L, 0xA9B7L);
                uint16_t *l_1177[8][4] = {{&p_1440->g_148,&p_1440->g_748,&p_1440->g_148,&p_1440->g_148},{&p_1440->g_148,&p_1440->g_748,&p_1440->g_148,&p_1440->g_148},{&p_1440->g_148,&p_1440->g_748,&p_1440->g_148,&p_1440->g_148},{&p_1440->g_148,&p_1440->g_748,&p_1440->g_148,&p_1440->g_148},{&p_1440->g_148,&p_1440->g_748,&p_1440->g_148,&p_1440->g_148},{&p_1440->g_148,&p_1440->g_748,&p_1440->g_148,&p_1440->g_148},{&p_1440->g_148,&p_1440->g_748,&p_1440->g_148,&p_1440->g_148},{&p_1440->g_148,&p_1440->g_748,&p_1440->g_148,&p_1440->g_148}};
                int16_t *l_1185 = (void*)0;
                int16_t *l_1186 = (void*)0;
                int16_t *l_1187 = (void*)0;
                int i, j;
                if (p_18.f0)
                    break;
                l_1160.s2 = (((VECTOR(int64_t, 8))(l_1156.s55650360)).s6 < (+(((VECTOR(int32_t, 2))(0x6639EA75L, 4L)).lo == ((*l_1145) ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 4))(l_1157.yyyx)).wyzxwzwy, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_1158.yyzxyxyxxxyzwwyw)).lo))))).s6 & ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1440->g_1159.s33)), 0x38348B82L, 0x7C158E73L)).xzzzwyxxwwwwzzwy)).s6) ^ ((VECTOR(int32_t, 2))(1L, 1L)).even), ((VECTOR(int32_t, 2))(0L, 0x469A3DF0L)), ((VECTOR(int32_t, 2))(7L, 0x5C120518L)), 0x432292DCL, 0x2CC04C99L, (-9L))))).odd)).w))));
                l_1034.s9 = ((VECTOR(int32_t, 4))((safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((l_1160.s7 | p_1440->g_530.f0), (safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(0L, (***p_1440->g_959))), 6)))), (safe_rshift_func_int16_t_s_s((l_1020[1][2][0] = (safe_mul_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((((safe_sub_func_uint16_t_u_u(((void*)0 != (*p_1440->g_960)), (*l_1144))) , ((~((safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(65535UL, (p_1440->g_1038.s4 = (p_1440->g_119.s5++)), (*l_1147), 0x4FD3L, ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 4))(0x31EFL, 0xFCE7L, 0x5B4CL, 0x6B56L)).xzwxxzxy, ((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 4))(p_1440->g_1180.s90c6)).yzwwyzwz, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 16))(((safe_mul_func_int8_t_s_s(((+(l_1183[8] != l_1183[7])) > p_1440->g_786.z), 0xBAL)) == l_1184), ((VECTOR(int16_t, 4))((-7L))), 8L, 0x3529L, ((VECTOR(int16_t, 2))(8L)), p_1440->g_875.x, ((VECTOR(int16_t, 4))((-7L))), (-1L), 0x4F28L)).se2, ((VECTOR(int16_t, 2))(1L))))).yyyyxyxx, ((VECTOR(uint16_t, 8))(0x08B5L))))), ((VECTOR(uint16_t, 8))(0x48BFL))))), ((VECTOR(uint16_t, 4))(0x42B4L)))).sb1)).xyxxyxyy, ((VECTOR(uint16_t, 8))(65535UL))))).s3)) , l_1160.s3)) >= p_19)) && p_1440->g_392.sd))), 0xD3L))), 0)))), 0x3C7EAD3BL, 7L, (-6L))).w;
            }
            return (*p_1440->g_519);
        }
        if ((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_1034.sc &= ((VECTOR(int8_t, 16))(0x20L, 1L, ((VECTOR(int8_t, 8))(((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((l_1200 = ((p_1440->g_315.x &= p_1440->g_173.f0) , (p_1440->g_1199 = l_1197))) != (((p_1440->g_1201 < ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 16))(l_1202.s7161706244711622))))).s7f))))).lo) | ((((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(p_1440->g_51.s2, 9)), p_18.f0)) == l_1061.s0) == ((***p_1440->g_959)--)) || (p_1440->g_235[4][4][1] != ((*l_1209) = &l_995)))) , &l_1039)) != GROUP_DIVERGE(0, 1)), 5)), 248UL)) != p_18.f0), ((VECTOR(int8_t, 4))(0x34L)), (-8L), 0x45L, (-6L))), ((VECTOR(int8_t, 4))((-3L))), 0x14L, 8L)).s8), 0x82L)), p_1440->g_1067)))
        { /* block id: 469 */
            VECTOR(int64_t, 2) l_1218 = (VECTOR(int64_t, 2))((-2L), 0x22CD4B5F9F33A1AEL);
            VECTOR(int64_t, 2) l_1229 = (VECTOR(int64_t, 2))(0x41211ABB2965BD7EL, 0x5CDCADF3281BF24DL);
            VECTOR(int8_t, 16) l_1245 = (VECTOR(int8_t, 16))(0x1DL, (VECTOR(int8_t, 4))(0x1DL, (VECTOR(int8_t, 2))(0x1DL, 0x75L), 0x75L), 0x75L, 0x1DL, 0x75L, (VECTOR(int8_t, 2))(0x1DL, 0x75L), (VECTOR(int8_t, 2))(0x1DL, 0x75L), 0x1DL, 0x75L, 0x1DL, 0x75L);
            VECTOR(int8_t, 8) l_1259 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x07L), 0x07L), 0x07L, 0L, 0x07L);
            VECTOR(int8_t, 4) l_1260 = (VECTOR(int8_t, 4))(0x4BL, (VECTOR(int8_t, 2))(0x4BL, (-5L)), (-5L));
            VECTOR(int8_t, 8) l_1262 = (VECTOR(int8_t, 8))(0x36L, (VECTOR(int8_t, 4))(0x36L, (VECTOR(int8_t, 2))(0x36L, 0x5BL), 0x5BL), 0x5BL, 0x36L, 0x5BL);
            int32_t *l_1268[5][5];
            int64_t *l_1280 = (void*)0;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1268[i][j] = &p_1440->g_7;
            }
            for (p_1440->g_1067 = 0; (p_1440->g_1067 != 41); ++p_1440->g_1067)
            { /* block id: 472 */
                int64_t *l_1226 = (void*)0;
                int32_t l_1228[9][1] = {{4L},{4L},{4L},{4L},{4L},{4L},{4L},{4L},{4L}};
                int64_t *l_1242 = (void*)0;
                int64_t l_1243 = 0x182A59C67C850275L;
                int16_t *l_1247 = &p_1440->g_348;
                int16_t **l_1246 = &l_1247;
                VECTOR(int8_t, 16) l_1248 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x34L), 0x34L), 0x34L, 1L, 0x34L, (VECTOR(int8_t, 2))(1L, 0x34L), (VECTOR(int8_t, 2))(1L, 0x34L), 1L, 0x34L, 1L, 0x34L);
                uint32_t *l_1263 = (void*)0;
                uint32_t *l_1264[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_1265 = 0L;
                int i, j;
                l_1228[0][0] = (((safe_rshift_func_int8_t_s_u(((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 2))(l_1217.sa4)).xxxyyyxy, ((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 4))(l_1218.yxxy)).zywxwzyy, ((VECTOR(int64_t, 16))(((safe_sub_func_uint16_t_u_u((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 8))(0L, (safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_1223.s7444)).x, (((safe_div_func_int64_t_s_s((l_1034.sb = ((VECTOR(int64_t, 2))((-4L), 0x266BF45D13FFC209L)).hi), (p_1440->g_409.x = ((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(p_1440->g_1227.yywz)).wyyyywzyxywxywww)).s6 , l_1228[0][0]) ^ p_19)))) || (p_1440->g_598[3][1][1] = ((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(0L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_1229.xyyx)).hi)), 6L)).hi, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 8))(0x4D4C42452BF0160CL, ((VECTOR(int64_t, 4))(0x14559E0821B03519L, (GROUP_DIVERGE(1, 1) ^ (safe_unary_minus_func_int8_t_s((p_19 ^ ((((((**p_1440->g_960) || ((0x632DF49C8C652E07L > (l_1218.y != (safe_div_func_int16_t_s_s(p_19, ((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((((safe_add_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(l_1241, (p_1440->g_384.y <= p_18.f0))) ^ l_1218.x) >= 1UL), l_1114.x)) || p_1440->g_391.s2) && p_1440->g_270) < 0x49E4AEE836244437L), 0x37L)), 0x19CEL)) && (***p_1440->g_959)))))) || p_19)) > p_19) < 0x28L) >= 0x5CL) >= p_1440->g_228))))), 0x634AD7DCB536122EL, 0L)), p_18.f0, 0x176F5729569C4FBCL, 0x6241AA77D905FE9BL)).s73, (int64_t)p_19))).yxxy)).lo, ((VECTOR(int64_t, 2))(1L)), ((VECTOR(int64_t, 2))(0L))))), 0x4812D39FC064064AL, 6L)).hi))).yyyyxyxy))).s6)) && 9L))), ((VECTOR(int16_t, 2))(0L)), 1L, ((VECTOR(int16_t, 2))((-10L))), 0x7BB8L)), ((VECTOR(int16_t, 8))(0x2291L))))))).s1601547110074477, ((VECTOR(int16_t, 16))(0x2F0CL))))).sf4db, ((VECTOR(int16_t, 4))(0x051DL))))).ywzxwyzywxyywzyz)).s3 ^ FAKE_DIVERGE(p_1440->global_0_offset, get_global_id(0), 10)), 0x0637L)) < 0x751EL), ((VECTOR(int64_t, 2))(0x1769841B5D9D0F12L)), (-4L), (*p_1440->g_341), 2L, (-1L), l_1243, 0x3E8D51EDBE0CE822L, ((VECTOR(int64_t, 4))(0x4EBA6BF8EBBB7834L)), 0x5C3424E6B20B0956L, 0x7E9B5A8E04AC2FE6L, (-10L))).odd)))))), ((VECTOR(int64_t, 8))(0x153C1A2BE0D5F3FAL))))).s1, p_18.f0)) != p_18.f0), 2)) | 7L) || 0x26L);
                if (p_18.f0)
                    continue;
                l_1265 = (((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_1440->g_1244.sde)).xxyyxyyx)).hi, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_1245.scf19)), (((*l_1246) = &p_1440->g_348) != &p_1440->g_348), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_1248.sbc)))), 0x46L)).s20)).xxxx, ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_1249.s74)))), (-1L), (-2L))), 7L, 0L, (((safe_sub_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u(((p_1440->g_379.y = ((p_1440->g_786.w |= l_1243) | ((**p_1440->g_960) = (safe_sub_func_int8_t_s_s(((p_18.f0 != ((safe_lshift_func_int8_t_s_u((p_1440->g_820.f1 < ((((**p_1440->g_960) == ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_1258.s20071545)), ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(l_1259.s3704241743543741)).s66, ((VECTOR(int8_t, 4))(l_1260.xwyx)).odd, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_1261.yxxxyyyx)).even)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(0x6BL, ((VECTOR(int8_t, 2))(l_1262.s77)), ((p_1440->g_394.w != 0UL) <= p_1440->g_333.s3), l_1228[4][0], ((VECTOR(int8_t, 2))(0x1BL)), 0x33L)), ((VECTOR(int8_t, 8))(0x69L))))).s27)), (-7L), (-7L))).s0534100472566075)).s1e1a)).lo))), ((VECTOR(int8_t, 2))(0x12L)), ((VECTOR(int8_t, 2))(0x00L))))), ((VECTOR(int8_t, 2))(0x58L)), ((VECTOR(int8_t, 2))(0x34L)), 0x25L, 0x26L)).sa8)).xyxxyxxy)).s3) && p_18.f0) == (-1L))), 3)) < 4294967287UL)) , l_1245.s8), p_1440->g_1180.s7))))) < p_19), 0x4655CD0E5B7AF1B1L)) > (-1L)), 0UL)) ^ l_1020[2][1][0]) >= p_1440->g_1180.s5), l_1229.x, ((VECTOR(int8_t, 2))(0x16L)), (-8L), 0x11L, ((VECTOR(int8_t, 4))((-10L))))))).s3bf2, ((VECTOR(int8_t, 4))(0L)), ((VECTOR(int8_t, 4))(1L)))))))), p_19, 0x65L, ((VECTOR(int8_t, 2))(0x29L)), 0x27L, l_1248.s2, 0x4DL, p_19, l_1248.s4, 0L, 0x7EL, 9L)).sd75a, ((VECTOR(int8_t, 4))(0x38L))))).wzywwyww, ((VECTOR(int8_t, 8))(1L))))))).lo))).even, ((VECTOR(int8_t, 2))(0x3BL))))).even , l_1010.se);
                if (p_19)
                    continue;
            }
            (*p_1440->g_519) = &l_1020[2][1][0];
            (*p_1440->g_520) &= (safe_mul_func_uint16_t_u_u((0x0B44L != l_1262.s0), 0x52CEL));
            if (p_19)
            { /* block id: 487 */
                return l_1268[0][4];
            }
            else
            { /* block id: 489 */
                VECTOR(uint64_t, 2) l_1283 = (VECTOR(uint64_t, 2))(0UL, 1UL);
                int32_t l_1296 = 0x3BAE2E8CL;
                int8_t l_1314 = (-1L);
                int i;
                for (p_1440->g_20.f0 = 0; (p_1440->g_20.f0 != 35); p_1440->g_20.f0++)
                { /* block id: 492 */
                    int64_t *l_1279 = &l_1041;
                    int32_t l_1281 = 0x578B6795L;
                    int64_t l_1304 = 0x07941A40CCC31175L;
                    int32_t l_1305 = 0x4A54CBADL;
                    if ((atomic_inc(&p_1440->g_atomic_input[46 * get_linear_group_id() + 31]) == 5))
                    { /* block id: 494 */
                        int32_t l_1271[10] = {(-9L),1L,(-9L),(-9L),1L,(-9L),(-9L),1L,(-9L),(-9L)};
                        VECTOR(uint16_t, 8) l_1272 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 65535UL), 65535UL), 65535UL, 65526UL, 65535UL);
                        VECTOR(int16_t, 2) l_1273 = (VECTOR(int16_t, 2))((-6L), 0x6ECBL);
                        VECTOR(int16_t, 4) l_1274 = (VECTOR(int16_t, 4))(0x1DF6L, (VECTOR(int16_t, 2))(0x1DF6L, 1L), 1L);
                        VECTOR(int16_t, 2) l_1275 = (VECTOR(int16_t, 2))((-1L), 0x40D4L);
                        int32_t l_1276 = 0L;
                        int i;
                        l_1272.s0 = l_1271[7];
                        l_1276 |= (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_1273.yxyyxyxx)))), ((VECTOR(int16_t, 4))(l_1274.xxyz)).yxzzxxxx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_1275.xxxxyxyyyxyxxyyx)).sf1)), (-1L), 7L)).yyyxywzx))))).s60)).yyxxyxyyyxxyyxyy)).se , (-4L));
                        unsigned int result = 0;
                        int l_1271_i0;
                        for (l_1271_i0 = 0; l_1271_i0 < 10; l_1271_i0++) {
                            result += l_1271[l_1271_i0];
                        }
                        result += l_1272.s7;
                        result += l_1272.s6;
                        result += l_1272.s5;
                        result += l_1272.s4;
                        result += l_1272.s3;
                        result += l_1272.s2;
                        result += l_1272.s1;
                        result += l_1272.s0;
                        result += l_1273.y;
                        result += l_1273.x;
                        result += l_1274.w;
                        result += l_1274.z;
                        result += l_1274.y;
                        result += l_1274.x;
                        result += l_1275.y;
                        result += l_1275.x;
                        result += l_1276;
                        atomic_add(&p_1440->g_special_values[46 * get_linear_group_id() + 31], result);
                    }
                    else
                    { /* block id: 497 */
                        (1 + 1);
                    }
                    for (p_1440->g_148 = 0; (p_1440->g_148 >= 41); p_1440->g_148 = safe_add_func_int8_t_s_s(p_1440->g_148, 2))
                    { /* block id: 502 */
                        int32_t l_1282 = 7L;
                        l_1305 &= (((((*l_1279) = (l_1279 == l_1280)) < ((l_1114.y == (FAKE_DIVERGE(p_1440->global_2_offset, get_global_id(2), 10) < (l_1283.y--))) < (safe_sub_func_int64_t_s_s((p_1440->g_1049.s5 & (safe_mul_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((((((~((**p_1440->g_960) != l_1296)) | ((VECTOR(int32_t, 2))(1L, 5L)).hi) , ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_1440->g_1297.yy)))).yxyy))))).x) , 0x51L) < (FAKE_DIVERGE(p_1440->local_2_offset, get_local_id(2), 10) != (safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(p_18.f0, p_18.f0)) & 0x53D41302L) <= p_18.f0), p_18.f0)) != p_19), l_1296)))), p_1440->g_51.s4)), 6UL)) & l_1304) , 0UL), GROUP_DIVERGE(1, 1)))), p_19)))) < p_1440->g_918.sf) && l_1281);
                    }
                    (*l_1039) = p_1440->g_1306;
                    (*p_1440->g_702) &= ((safe_lshift_func_int8_t_s_s(p_19, 2)) <= ((~((safe_lshift_func_int16_t_s_s(((&p_1440->g_143 != &p_1440->g_143) , (-8L)), (+l_1032.y))) != (4L == p_19))) < (4294967286UL && (safe_rshift_func_uint8_t_u_s((((l_1313 , p_18.f0) == l_1314) & p_18.f0), 7)))));
                }
            }
        }
        else
        { /* block id: 511 */
            int64_t l_1317 = 0x653073F50F004C18L;
            int32_t l_1318 = 0x51DDB791L;
            VECTOR(int32_t, 8) l_1324 = (VECTOR(int32_t, 8))(0x26225343L, (VECTOR(int32_t, 4))(0x26225343L, (VECTOR(int32_t, 2))(0x26225343L, 0x71CDD1EDL), 0x71CDD1EDL), 0x71CDD1EDL, 0x26225343L, 0x71CDD1EDL);
            VECTOR(uint16_t, 2) l_1334 = (VECTOR(uint16_t, 2))(0x30A9L, 0x77C5L);
            uint8_t *l_1335 = (void*)0;
            struct S0 **l_1338 = (void*)0;
            int32_t *l_1348 = (void*)0;
            int i;
            for (l_1184 = (-19); (l_1184 >= (-22)); l_1184--)
            { /* block id: 514 */
                VECTOR(uint8_t, 16) l_1319 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x15L), 0x15L), 0x15L, 255UL, 0x15L, (VECTOR(uint8_t, 2))(255UL, 0x15L), (VECTOR(uint8_t, 2))(255UL, 0x15L), 255UL, 0x15L, 255UL, 0x15L);
                struct S1 *l_1322 = &p_1440->g_20;
                int32_t l_1325 = 0x356225D8L;
                int32_t l_1326[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
                int i;
                --l_1319.sf;
                (*l_1322) = p_18;
                if (((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(l_1323.zywxwwwzywxxxyyw)).odd, ((VECTOR(int32_t, 16))(1L, 2L, ((VECTOR(int32_t, 2))(l_1324.s56)), ((-7L) > ((++p_1440->g_1227.z) > (safe_add_func_uint16_t_u_u(0xFCBAL, (GROUP_DIVERGE(1, 1) <= (safe_unary_minus_func_int64_t_s((safe_add_func_int16_t_s_s(((*p_1440->g_960) != ((((VECTOR(uint16_t, 2))(l_1334.xy)).even == ((*p_1440->g_702) | (&p_1440->g_171 == (void*)0))) , l_1335)), p_1440->g_489.x))))))))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_1336, p_18.f0, l_1319.s0, p_18.f0, ((VECTOR(int32_t, 8))(0x24D55957L)), 0x33E9DCC2L, ((VECTOR(int32_t, 2))(0x06763FC8L)), 0x29DBC86BL)))).odd)), p_1440->g_1337[2][4], 7L, 0x5AAA9739L)).odd))).s3)
                { /* block id: 518 */
                    int16_t *l_1341 = (void*)0;
                    int16_t *l_1342 = (void*)0;
                    int16_t *l_1343 = (void*)0;
                    int16_t *l_1344[8][5] = {{&p_1440->g_348,(void*)0,&l_1313,(void*)0,&l_1313},{&p_1440->g_348,(void*)0,&l_1313,(void*)0,&l_1313},{&p_1440->g_348,(void*)0,&l_1313,(void*)0,&l_1313},{&p_1440->g_348,(void*)0,&l_1313,(void*)0,&l_1313},{&p_1440->g_348,(void*)0,&l_1313,(void*)0,&l_1313},{&p_1440->g_348,(void*)0,&l_1313,(void*)0,&l_1313},{&p_1440->g_348,(void*)0,&l_1313,(void*)0,&l_1313},{&p_1440->g_348,(void*)0,&l_1313,(void*)0,&l_1313}};
                    int32_t l_1346 = 0x24155BDCL;
                    int i, j;
                    (*p_1440->g_519) = (*p_1440->g_519);
                    l_1325 ^= (((p_1440->g_261 ^ p_1440->g_2[5][6]) , (l_1130.sa , ((&l_1039 != l_1338) <= (l_1326[6] = p_19)))) & (((safe_mul_func_int16_t_s_s((p_1440->g_1297.x = p_19), (safe_unary_minus_func_uint16_t_u(0x1D08L)))) <= ((((p_19 >= l_1346) , 0x1E5DL) <= 0x0BE8L) , p_18.f0)) && p_18.f0));
                }
                else
                { /* block id: 523 */
                    int32_t *l_1347 = (void*)0;
                    int32_t l_1349 = (-1L);
                    int32_t l_1350 = 0x0C8F406BL;
                    int32_t l_1352 = (-3L);
                    (**p_1440->g_1199) = (**l_1197);
                    l_1348 = l_1347;
                    l_1353--;
                    l_1357++;
                }
            }
        }
        l_1015 = p_18.f0;
        l_1015 &= (((*p_1440->g_961) = ((((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 16))(0x0BA38B0C418623C5L, (safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((p_19 >= 0x6A5AL), ((safe_mul_func_int16_t_s_s((~(safe_sub_func_int32_t_s_s((l_1020[6][1][0] = (((*l_1382) |= (!(safe_lshift_func_int8_t_s_s(((((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(int64_t, 8))(l_1372.yxxyyyxy)).odd, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))((-7L), ((VECTOR(int64_t, 2))((-2L), (-7L))), ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 16))(0x021E388DCD0AE520L, ((*l_1374) = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_1373.xzzxyzxwywzyyzww)))).sc), (-1L), 0x0073E8F676537E25L, (-1L), ((VECTOR(int64_t, 4))(l_1375.xxyz)), (safe_mul_func_uint16_t_u_u(((l_1034.sf = l_1052.y) | 0x80L), (safe_mod_func_uint32_t_u_u((((0x03L && l_1130.sa) | ((safe_rshift_func_int16_t_s_s((((((GROUP_DIVERGE(2, 1) , (void*)0) == (void*)0) >= (p_1440->g_1040.f3 < 0x6DF2E353L)) >= p_19) != p_19), p_1440->g_391.s4)) , 0x76L)) && l_1010.se), 0x0BF99794L)))), ((VECTOR(int64_t, 2))(0x359B46C4EDD15D4CL)), l_1018[0], (-10L), 0x7ECE3CDD646FC97DL, 0L)).s59, (int64_t)(*p_1440->g_341), (int64_t)p_19))), ((VECTOR(int64_t, 2))(0x718705FF51656EDFL)), 1L)).s60)).yyyx))).z , (void*)0) == &l_1060[1][1][1]), 0)))) || p_19)), 4294967295UL))), (-1L))) || l_1052.x))), p_1440->g_388.s4)), 0L)), 0x7C2AF794BEC2EBCAL, ((VECTOR(int64_t, 2))(4L)), ((VECTOR(int64_t, 8))(0x704E27C6EEA5EFA0L)), ((VECTOR(int64_t, 2))((-1L))), (-1L))).sbb, ((VECTOR(int64_t, 2))(0x25E713A5EE14A1F4L))))), 5UL, 4UL)).even, ((VECTOR(uint64_t, 2))(0x9645FDC298F4C60AL))))), 0xFB5DF3433A484664L, 0xDC40D1D6F2E0E11EL)).y && p_1440->g_384.x) , 0x3D3F5FC6F93F9506L) != p_1440->g_875.y) , (***p_1440->g_959))) , (*p_1440->g_702));
    }
    l_1034.sc ^= ((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 8))(p_1440->g_1387.s67031703)).s1, p_1440->g_517[0][2].f0)), (~0x29E4C809L))) ^ ((l_1052.y || (safe_div_func_int64_t_s_s(l_1020[4][1][0], p_19))) , l_1010.s4));
    (*p_1440->g_519) = &l_1015;
    return l_1390;
}


/* ------------------------------------------ */
/* 
 * reads : p_1440->g_2 p_1440->l_comm_values p_1440->g_51 p_1440->g_53 p_1440->g_7 p_1440->g_6 p_1440->g_20.f0 p_1440->g_116 p_1440->g_119 p_1440->g_122 p_1440->g_143 p_1440->g_144 p_1440->g_148 p_1440->g_173 p_1440->g_192 p_1440->g_215 p_1440->g_235 p_1440->g_210.f1 p_1440->g_240 p_1440->g_210.f3 p_1440->g_210 p_1440->g_315 p_1440->g_comm_values p_1440->g_317 p_1440->g_333 p_1440->g_341 p_1440->g_343 p_1440->g_345 p_1440->g_293 p_1440->g_145 p_1440->g_228 p_1440->g_409 p_1440->g_379 p_1440->g_391 p_1440->g_348 p_1440->g_423 p_1440->g_426 p_1440->g_342 p_1440->g_487 p_1440->g_291 p_1440->g_387 p_1440->g_515 p_1440->g_519 p_1440->g_530 p_1440->g_534 p_1440->g_279 p_1440->g_520 p_1440->g_243 p_1440->g_241 p_1440->g_500 p_1440->g_692 p_1440->g_694 p_1440->g_267 p_1440->g_702 p_1440->g_703 p_1440->g_748 p_1440->g_297 p_1440->g_598 p_1440->g_512 p_1440->g_786 p_1440->g_788 p_1440->g_256 p_1440->g_171 p_1440->g_820 p_1440->g_821 p_1440->g_875 p_1440->g_392 p_1440->g_918 p_1440->g_919 p_1440->g_517.f1 p_1440->g_959 p_1440->g_967 p_1440->g_961 p_1440->g_960
 * writes: p_1440->g_51 p_1440->g_143 p_1440->g_145 p_1440->g_148 p_1440->g_6 p_1440->g_2 p_1440->g_171 p_1440->g_173 p_1440->g_228 p_1440->g_53 p_1440->g_116 p_1440->g_210 p_1440->g_317 p_1440->g_348 p_1440->g_423 p_1440->g_333 p_1440->l_comm_values p_1440->g_472 p_1440->g_comm_values p_1440->g_517 p_1440->g_409 p_1440->g_520 p_1440->g_119 p_1440->g_748 p_1440->g_755 p_1440->g_761 p_1440->g_598 p_1440->g_343 p_1440->g_797 p_1440->g_788 p_1440->g_397 p_1440->g_515 p_1440->g_875 p_1440->g_392 p_1440->g_694 p_1440->g_391
 */
uint64_t  func_21(int32_t  p_22, int32_t ** p_23, uint32_t  p_24, int64_t  p_25, struct S2 * p_1440)
{ /* block id: 12 */
    VECTOR(int16_t, 8) l_48 = (VECTOR(int16_t, 8))(0x11B1L, (VECTOR(int16_t, 4))(0x11B1L, (VECTOR(int16_t, 2))(0x11B1L, 0x519BL), 0x519BL), 0x519BL, 0x11B1L, 0x519BL);
    VECTOR(int8_t, 4) l_52 = (VECTOR(int8_t, 4))(0x32L, (VECTOR(int8_t, 2))(0x32L, 6L), 6L);
    int32_t *l_54 = &p_1440->g_7;
    int8_t *l_55 = (void*)0;
    int8_t *l_56 = (void*)0;
    int8_t *l_57 = (void*)0;
    int8_t *l_58 = (void*)0;
    int8_t *l_59 = (void*)0;
    int8_t *l_60 = (void*)0;
    int8_t *l_61[1][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int16_t l_518 = (-5L);
    int32_t *l_736 = &p_1440->g_7;
    int32_t l_751 = 0x045C508AL;
    struct S1 l_757 = {4294967289UL};
    struct S1 *l_759[8] = {&l_757,&l_757,&l_757,&l_757,&l_757,&l_757,&l_757,&l_757};
    struct S1 **l_758 = &l_759[1];
    VECTOR(uint32_t, 4) l_760 = (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0x140A5591L), 0x140A5591L);
    VECTOR(uint64_t, 2) l_763 = (VECTOR(uint64_t, 2))(0x722F524F459EFDD5L, 0x1C91DDA11A10CA0CL);
    VECTOR(uint32_t, 4) l_776 = (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0x1E13AE7FL), 0x1E13AE7FL);
    uint64_t *l_777 = &p_1440->g_143;
    int64_t *l_780 = (void*)0;
    int64_t *l_781 = &p_1440->g_598[3][1][1];
    int64_t *l_782[1][2];
    uint64_t *l_783[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(int8_t, 16) l_789 = (VECTOR(int8_t, 16))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, (-1L)), (-1L)), (-1L), 9L, (-1L), (VECTOR(int8_t, 2))(9L, (-1L)), (VECTOR(int8_t, 2))(9L, (-1L)), 9L, (-1L), 9L, (-1L));
    VECTOR(int8_t, 4) l_791 = (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x61L), 0x61L);
    uint64_t l_794 = 0UL;
    uint64_t l_802[2][6][2] = {{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}}};
    uint8_t *l_808 = &p_1440->g_694;
    uint8_t **l_807 = &l_808;
    VECTOR(int32_t, 16) l_917 = (VECTOR(int32_t, 16))(0x5A49D46EL, (VECTOR(int32_t, 4))(0x5A49D46EL, (VECTOR(int32_t, 2))(0x5A49D46EL, 0x78396F4DL), 0x78396F4DL), 0x78396F4DL, 0x5A49D46EL, 0x78396F4DL, (VECTOR(int32_t, 2))(0x5A49D46EL, 0x78396F4DL), (VECTOR(int32_t, 2))(0x5A49D46EL, 0x78396F4DL), 0x5A49D46EL, 0x78396F4DL, 0x5A49D46EL, 0x78396F4DL);
    VECTOR(uint32_t, 8) l_930 = (VECTOR(uint32_t, 8))(0xDF6D421BL, (VECTOR(uint32_t, 4))(0xDF6D421BL, (VECTOR(uint32_t, 2))(0xDF6D421BL, 0xE6E13CEEL), 0xE6E13CEEL), 0xE6E13CEEL, 0xDF6D421BL, 0xE6E13CEEL);
    struct S0 **l_972 = &p_1440->g_472[2][3];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_782[i][j] = (void*)0;
    }
    (*p_1440->g_519) = (((VECTOR(int64_t, 8))(0x38140A9711F64DB2L, (0L | ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((((func_32((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint8_t_u(0xA9L)), 10)), func_41(func_46((((((VECTOR(int16_t, 16))(l_48.s2600240062375544)).s6 >= p_1440->g_2[5][6]) ^ ((p_1440->g_51.s0 = (((VECTOR(int8_t, 8))(0x41L, p_1440->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1440->tid, 67))], ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 8))(0x0FL, 3L, 0x28L, (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(p_1440->g_51.s3351)).w, (0xCC99CF48L & l_48.s0))), ((VECTOR(int8_t, 2))(l_52.wy)), 0L, 0L)).hi, ((VECTOR(int8_t, 4))(p_1440->g_53.xzyz))))), 0L, 4L)).s0 , (&p_1440->g_2[5][6] == l_54))) == 6UL)) , (*l_54)), p_1440), p_24, l_518, p_1440->g_519, p_1440), l_736, (*l_54), l_54, p_1440) >= (-2L)) <= (*l_54)) <= p_1440->g_500.y) && 0x40L), (*l_736), 9UL, ((VECTOR(uint64_t, 2))(18446744073709551606UL)), l_751, 0xCCF419E3E6D92DC9L, 18446744073709551615UL)).s32)), 0x659FB67635196968L, 1UL)).z), ((VECTOR(int64_t, 2))(0L)), 3L, (-1L), (-1L), 0x020B71627EFAB579L)).s1 , (void*)0);
    for (p_1440->g_145 = 17; (p_1440->g_145 <= (-10)); p_1440->g_145 = safe_sub_func_int32_t_s_s(p_1440->g_145, 5))
    { /* block id: 271 */
        struct S1 l_754 = {0UL};
        struct S1 *l_756[8][6][5] = {{{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20}},{{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20}},{{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20}},{{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20}},{{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20}},{{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20}},{{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20}},{{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20},{&l_754,&l_754,&l_754,&l_754,&p_1440->g_20}}};
        int i, j, k;
        l_757 = (p_1440->g_755[7] = l_754);
        return p_25;
    }
    if ((((p_1440->g_343.x |= ((((*l_758) = &p_1440->g_20) != (p_1440->g_761 = (((VECTOR(uint32_t, 8))(0UL, 4294967288UL, (p_22 != 1L), 0x310FD1D1L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_760.ywzwxzzwzwwzwyzw)).scf)), 1UL, 6UL)).s0 , (void*)0))) >= (l_751 &= (safe_unary_minus_func_int64_t_s(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(18446744073709551606UL, 0x37A9D5EA69BF999DL)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_763.xxyx)).hi)), ((VECTOR(uint64_t, 4))(0x115E9E877F673330L, 0x4AD367D7B5322C6AL, 0UL, 0x6B838BD49BAD3810L)))).s07)))))).lo >= 0x794C6422489884DEL), (safe_add_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_div_func_int32_t_s_s(((*l_736) <= (((((p_1440->g_116.x &= (~8L)) != p_24) || ((*l_781) ^= ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(1L, (safe_sub_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((*l_777) = (((VECTOR(uint32_t, 4))(l_776.wxyw)).w , FAKE_DIVERGE(p_1440->local_2_offset, get_local_id(2), 10))), (safe_sub_func_uint64_t_u_u(p_24, (*l_736))))), p_1440->g_297)) , (*l_54)), (*l_54))), 1L, ((VECTOR(int64_t, 2))((-1L))), 0x4897E79DF34E5BEBL, 0x080E795A88181644L, 0x5ACCDD89908FE431L)).s7705356626265406)).s5e)).odd)) == 65531UL) | p_24)), (-1L))), (*l_736))), p_1440->g_512.sf)), p_1440->g_293, ((VECTOR(int32_t, 4))(0x6DB0C9C2L)), p_1440->g_487.s6, (-10L), ((VECTOR(int32_t, 4))(0L)), 0x78E84143L, 0x1886A6AFL, 0L)).odd, ((VECTOR(int32_t, 8))(0x50797DFFL))))), ((VECTOR(uint32_t, 8))(0x08FDCE3EL))))).s6))))) || 6L) == 0x4E08L))
    { /* block id: 283 */
        VECTOR(int8_t, 2) l_787 = (VECTOR(int8_t, 2))(1L, (-6L));
        VECTOR(int8_t, 16) l_790 = (VECTOR(int8_t, 16))(0x68L, (VECTOR(int8_t, 4))(0x68L, (VECTOR(int8_t, 2))(0x68L, 0L), 0L), 0L, 0x68L, 0L, (VECTOR(int8_t, 2))(0x68L, 0L), (VECTOR(int8_t, 2))(0x68L, 0L), 0x68L, 0L, 0x68L, 0L);
        VECTOR(int16_t, 8) l_795 = (VECTOR(int16_t, 8))(0x5FC9L, (VECTOR(int16_t, 4))(0x5FC9L, (VECTOR(int16_t, 2))(0x5FC9L, 0x501FL), 0x501FL), 0x501FL, 0x5FC9L, 0x501FL);
        int64_t *l_796 = &p_1440->g_797;
        int32_t l_809 = 0x14716D70L;
        int32_t l_810 = (-1L);
        uint16_t *l_811 = (void*)0;
        int32_t *l_812 = (void*)0;
        int32_t *l_813 = &p_1440->g_317;
        int32_t l_842 = 0x493A25DDL;
        int32_t l_843[6][3][3] = {{{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L}},{{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L}},{{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L}},{{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L}},{{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L}},{{(-1L),(-1L),1L},{(-1L),(-1L),1L},{(-1L),(-1L),1L}}};
        uint16_t l_850 = 2UL;
        VECTOR(int32_t, 8) l_882 = (VECTOR(int32_t, 8))(0x10CA327CL, (VECTOR(int32_t, 4))(0x10CA327CL, (VECTOR(int32_t, 2))(0x10CA327CL, 0x2D759E36L), 0x2D759E36L), 0x2D759E36L, 0x10CA327CL, 0x2D759E36L);
        VECTOR(int64_t, 2) l_924 = (VECTOR(int64_t, 2))(1L, 0x3253F8AD7AB602D0L);
        int i, j, k;
        p_22 &= (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(0x27L, ((VECTOR(int8_t, 2))(p_1440->g_786.ww)), 0L, 0x2DL, ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(l_787.yxyxxyyyxyxyyyxy)).odd, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1440->g_788.scb)).xxyy)).even)).yyyxyyxy, ((VECTOR(int8_t, 2))(l_789.s8d)).xxyxxxxx))).s1, 0x1DL, 0x0AL)).even, ((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_790.s24a5895c57a36758)).s5f7d)).hi)).xxxyxyyyyyyyxyyx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_791.wzww)))).even)).xyxxyyxyxxyxyyxy))).s9928))).yyxwxwwy)).hi)).y, (((*l_796) = (safe_mul_func_int16_t_s_s(l_794, ((VECTOR(int16_t, 4))(l_795.s3214)).x))) , (l_795.s2 | 0x56L))));
        if (((*l_813) &= (l_55 == ((((p_1440->g_397.se = ((((safe_mul_func_int8_t_s_s((p_1440->g_192.w & (l_795.s2 > (l_810 ^= (safe_mul_func_int8_t_s_s((p_1440->g_788.s1 &= (l_809 = ((((p_1440->g_256 , (l_802[1][3][1] && ((safe_lshift_func_uint8_t_u_s((p_24 < ((safe_mul_func_int16_t_s_s(((((&p_1440->g_348 != (void*)0) , l_807) != (void*)0) & (*l_54)), 0xD472L)) < 0x976BC13CA3050A51L)), 3)) > (*l_736)))) > p_22) && (-9L)) == (*l_736)))), (-7L)))))), p_25)) & 0xBCF42F49L) < p_25) < (-1L))) , l_809) && 4UL) , l_56))))
        { /* block id: 291 */
            int32_t l_828 = 0x471F5573L;
            int32_t l_835[8];
            int32_t *l_847 = (void*)0;
            int32_t *l_848 = &l_810;
            int32_t *l_849[8] = {&l_835[4],&l_828,&l_835[4],&l_835[4],&l_828,&l_835[4],&l_835[4],&l_828};
            int64_t *l_855 = &p_1440->g_598[3][4][1];
            uint16_t l_860 = 0xCB1CL;
            int i, j;
            for (i = 0; i < 8; i++)
                l_835[i] = (-1L);
            for (p_1440->g_423 = 0; (p_1440->g_423 < 20); p_1440->g_423++)
            { /* block id: 294 */
                VECTOR(uint32_t, 16) l_836 = (VECTOR(uint32_t, 16))(0x52EB15C2L, (VECTOR(uint32_t, 4))(0x52EB15C2L, (VECTOR(uint32_t, 2))(0x52EB15C2L, 4294967295UL), 4294967295UL), 4294967295UL, 0x52EB15C2L, 4294967295UL, (VECTOR(uint32_t, 2))(0x52EB15C2L, 4294967295UL), (VECTOR(uint32_t, 2))(0x52EB15C2L, 4294967295UL), 0x52EB15C2L, 4294967295UL, 0x52EB15C2L, 4294967295UL);
                int32_t l_839 = 0x2188BA94L;
                int32_t l_840[6][4] = {{(-9L),0x4CFB703BL,(-9L),(-9L)},{(-9L),0x4CFB703BL,(-9L),(-9L)},{(-9L),0x4CFB703BL,(-9L),(-9L)},{(-9L),0x4CFB703BL,(-9L),(-9L)},{(-9L),0x4CFB703BL,(-9L),(-9L)},{(-9L),0x4CFB703BL,(-9L),(-9L)}};
                uint16_t l_844 = 0x68E2L;
                int i, j;
                for (p_1440->g_348 = 0; (p_1440->g_348 != 3); p_1440->g_348 = safe_add_func_uint16_t_u_u(p_1440->g_348, 1))
                { /* block id: 297 */
                    int8_t l_822[9][2][8] = {{{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L},{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L}},{{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L},{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L}},{{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L},{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L}},{{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L},{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L}},{{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L},{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L}},{{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L},{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L}},{{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L},{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L}},{{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L},{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L}},{{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L},{(-6L),(-1L),0x3DL,0x6DL,0x77L,(-1L),(-1L),0x77L}}};
                    int32_t l_823 = 0x73DEE15BL;
                    int32_t l_841[1][10][10] = {{{3L,3L,3L,3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L,3L,3L,3L,3L,3L}}};
                    int i, j, k;
                    if (p_22)
                        break;
                    if ((*l_54))
                        break;
                    for (p_1440->g_171 = 0; (p_1440->g_171 <= 8); p_1440->g_171++)
                    { /* block id: 302 */
                        (*p_1440->g_821) = p_1440->g_820;
                    }
                    if ((FAKE_DIVERGE(p_1440->group_0_offset, get_group_id(0), 10) != l_822[0][0][4]))
                    { /* block id: 305 */
                        int32_t *l_824 = &l_823;
                        int32_t *l_825 = &p_1440->g_2[5][6];
                        int32_t *l_826 = &p_1440->g_2[5][6];
                        int32_t *l_827 = (void*)0;
                        int32_t *l_829 = &l_810;
                        int32_t *l_830 = &p_1440->g_317;
                        int32_t *l_831 = (void*)0;
                        int32_t *l_832 = &l_823;
                        int32_t *l_833 = &l_810;
                        int32_t *l_834[8][3][2] = {{{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423}},{{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423}},{{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423}},{{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423}},{{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423}},{{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423}},{{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423}},{{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423}}};
                        int i, j, k;
                        l_836.sd++;
                        l_844++;
                        (*l_825) = (-10L);
                    }
                    else
                    { /* block id: 309 */
                        if ((*p_1440->g_702))
                            break;
                        if (p_22)
                            break;
                        if ((*p_1440->g_702))
                            break;
                    }
                }
            }
            --l_850;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1440->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 67)), permutations[(safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((((((*p_1440->g_702) , p_24) > p_1440->g_315.y) & (((void*)0 != l_855) , p_1440->g_500.y)) < (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(l_860, 15)), (safe_mod_func_uint16_t_u_u((((((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x61L, 0x38L)).even, (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((((*l_848) |= (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x2654L, 0UL)), 65535UL, 65526UL)), ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x0FL, 0UL)), 0xD0L, 0x49L, 0x92L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0UL, 251UL)).yxyy)).even)), 5UL, ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 8))(p_22, (FAKE_DIVERGE(p_1440->group_0_offset, get_group_id(0), 10) != (safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(0x7481L, ((VECTOR(uint16_t, 8))(0xF993L, 6UL, (safe_mul_func_int8_t_s_s((p_1440->g_51.s1 = ((((VECTOR(int16_t, 16))(p_1440->g_875.xxxyxyxxyyyyyxxx)).s2 > (((~(safe_mul_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s((p_1440->g_748 == 0x7CL), 2)) , (*l_813)) != p_22), p_22))) , &l_860) == (void*)0)) < 4294967289UL)), 0UL)), FAKE_DIVERGE(p_1440->local_0_offset, get_local_id(0), 10), ((VECTOR(uint16_t, 4))(3UL)))), FAKE_DIVERGE(p_1440->global_2_offset, get_global_id(2), 10), 0x5E5CL, 0UL, GROUP_DIVERGE(0, 1), 0x7751L, 65535UL, 0x9E9AL)).s9, 0x3F7FL)), 18446744073709551615UL))), ((VECTOR(uint8_t, 4))(0xADL)), 0xA7L, 2UL)), ((VECTOR(uint8_t, 8))(1UL))))).s20, ((VECTOR(uint8_t, 2))(1UL)), ((VECTOR(uint8_t, 2))(0x4DL))))), ((VECTOR(uint8_t, 4))(0x4AL)), 0x9CL, 0x09L)).s7e, ((VECTOR(uint8_t, 2))(0xDFL))))))).yyxyxxyx, (uint16_t)p_25))).s51, (uint16_t)p_25))), 0xED1EL, p_1440->g_20.f0, 0xB313L, ((VECTOR(uint16_t, 2))(3UL)), 7UL, (*l_736), FAKE_DIVERGE(p_1440->local_0_offset, get_local_id(0), 10), 0UL, 0x65F6L)).hi)).s1 < 6L)) < FAKE_DIVERGE(p_1440->group_0_offset, get_group_id(0), 10)) || p_1440->g_343.x), p_25)), GROUP_DIVERGE(0, 1))))) <= FAKE_DIVERGE(p_1440->global_0_offset, get_global_id(0), 10)) <= p_1440->g_144[4][5]) ^ 0x92A9L) != 0x509EL), p_1440->g_392.sd))))) <= GROUP_DIVERGE(2, 1)), 248UL)) , 4294967291UL), 10))][(safe_mod_func_uint32_t_u_u(p_1440->tid, 67))]));
            for (p_1440->g_423 = (-20); (p_1440->g_423 > (-8)); ++p_1440->g_423)
            { /* block id: 324 */
                if (((VECTOR(int32_t, 8))(l_882.s52762016)).s6)
                { /* block id: 325 */
                    uint8_t ***l_883 = &l_807;
                    int32_t l_884 = 0x33E499BCL;
                    (*l_883) = (void*)0;
                    return l_884;
                }
                else
                { /* block id: 328 */
                    return p_1440->g_119.s0;
                }
            }
        }
        else
        { /* block id: 332 */
            int32_t l_923 = 0x6959DE06L;
            int32_t l_935 = (-5L);
            int32_t l_939 = 1L;
            int32_t l_940 = (-1L);
            int32_t l_942 = (-5L);
            struct S1 *l_949 = (void*)0;
            int8_t *l_950 = (void*)0;
            (*l_813) = (-1L);
            for (l_842 = (-23); (l_842 == (-12)); l_842++)
            { /* block id: 336 */
                uint16_t l_887 = 0x67BAL;
                l_887--;
                (*p_1440->g_519) = (*p_1440->g_519);
            }
            for (p_22 = (-17); (p_22 != 8); p_22++)
            { /* block id: 342 */
                uint64_t l_900 = 18446744073709551607UL;
                uint32_t *l_901 = (void*)0;
                uint32_t *l_902 = &p_1440->g_171;
                int16_t *l_903 = (void*)0;
                int16_t *l_904 = &p_1440->g_348;
                int16_t *l_905 = (void*)0;
                int16_t *l_906 = (void*)0;
                int16_t *l_907[10][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                VECTOR(int32_t, 2) l_920 = (VECTOR(int32_t, 2))(0x2E82915FL, 0x63D73108L);
                int32_t l_933 = 1L;
                int32_t l_936 = 0x48BE430BL;
                int32_t l_937 = 0L;
                int32_t l_938 = (-6L);
                int32_t l_941[5] = {0x6AC7C95CL,0x6AC7C95CL,0x6AC7C95CL,0x6AC7C95CL,0x6AC7C95CL};
                int32_t *l_948 = &l_843[5][0][0];
                int i, j;
                if ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((p_1440->g_875.y |= (safe_add_func_int16_t_s_s(((*l_904) = (safe_div_func_uint32_t_u_u(((*l_902) ^= l_900), (p_25 && 9L)))), (-5L)))), 3)), 3)))
                { /* block id: 346 */
                    uint16_t l_910 = 0UL;
                    struct S0 **l_929 = (void*)0;
                    int32_t l_931 = 0x4A78597AL;
                    int i, j;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1440->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 67)), permutations[(safe_mod_func_uint32_t_u_u(((-9L) >= (safe_div_func_int8_t_s_s((p_1440->g_392.s5 = l_910), (p_1440->g_391.s0 = (((*l_808) = ((safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(255UL, (l_931 &= (l_930.s6 ^= (safe_sub_func_uint64_t_u_u(((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x47C30045L)))).yyyxxyyy, ((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(l_917.s24)), ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(p_1440->g_918.s844d97de60894836)).sd0e2, ((VECTOR(int32_t, 2))(p_1440->g_919.yx)).xxxy, ((VECTOR(int32_t, 2))(0x5BFCB732L, 1L)).yyxy))), 1L))))).s14)).yyxyyxxy)), ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(l_920.xy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(7L, 0L)), 0x27CBB380L, 0L, (safe_add_func_int16_t_s_s((+((((l_923 || ((VECTOR(int64_t, 8))(l_924.xxyxxxyy)).s6) & (safe_lshift_func_int16_t_s_s(p_1440->g_517[0][2].f1, ((((safe_sub_func_int8_t_s_s(((void*)0 == l_929), p_24)) , p_24) | l_923) , p_25)))) ^ GROUP_DIVERGE(2, 1)) | GROUP_DIVERGE(2, 1))), p_1440->g_116.y)), 0x2A3E3A67L, 0x2D95DE75L, 2L)).s01))))), (-1L), ((VECTOR(int32_t, 4))(0x2417111EL)), 1L, ((VECTOR(int32_t, 2))(1L)), p_25, 0x65435696L, 0L, (-2L), 0x16A104B9L, 0x795B7F9FL)).s43, ((VECTOR(int32_t, 2))(0x111B1413L))))))).yyyx)).xwzwzxwxyzxzwwwz, ((VECTOR(int32_t, 16))((-1L)))))), ((VECTOR(int32_t, 16))(0x7A30F078L))))).hi))), ((VECTOR(int32_t, 8))((-1L)))))).s4727573427206210)).scb09, ((VECTOR(int32_t, 4))(7L))))).ywxwxyxz)))).s2 , 0x0AC196C8145AC582L) , p_22), p_1440->g_315.w)))))), p_1440->g_51.s0)) & 0x0511E866L)) & l_920.y))))), 10))][(safe_mod_func_uint32_t_u_u(p_1440->tid, 67))]));
                }
                else
                { /* block id: 355 */
                    int64_t l_932 = 0x53A4273FE340FFE3L;
                    int32_t *l_934[2][4];
                    uint32_t l_943 = 4294967293UL;
                    int32_t ***l_947[5][3] = {{&p_1440->g_519,(void*)0,&p_1440->g_519},{&p_1440->g_519,(void*)0,&p_1440->g_519},{&p_1440->g_519,(void*)0,&p_1440->g_519},{&p_1440->g_519,(void*)0,&p_1440->g_519},{&p_1440->g_519,(void*)0,&p_1440->g_519}};
                    int32_t ****l_946 = &l_947[3][0];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_934[i][j] = &p_1440->g_2[3][3];
                    }
                    --l_943;
                    (*l_813) &= (((*l_946) = &p_1440->g_519) == (void*)0);
                    return p_22;
                }
                l_948 = (*p_1440->g_519);
                l_948 = (*p_1440->g_519);
            }
            (*l_813) ^= (18446744073709551615UL == (((l_949 = (*l_758)) != (void*)0) & (l_950 == l_59)));
        }
        (*l_813) &= (safe_rshift_func_int8_t_s_s(((7UL == (safe_rshift_func_uint8_t_u_u(0x15L, 0))) != ((safe_sub_func_int8_t_s_s(p_24, ((**l_807) ^= 0xCFL))) != (safe_mul_func_int16_t_s_s((p_22 & (0x23711A90L >= 1UL)), ((void*)0 == p_1440->g_959))))), p_22));
    }
    else
    { /* block id: 369 */
        int32_t l_964 = 8L;
        int32_t ***l_980 = &p_1440->g_519;
        int32_t ****l_979 = &l_980;
        uint16_t *l_986 = (void*)0;
        uint16_t *l_987 = (void*)0;
        uint16_t *l_988 = &p_1440->g_748;
        for (p_1440->g_748 = 2; (p_1440->g_748 == 30); p_1440->g_748 = safe_add_func_uint8_t_u_u(p_1440->g_748, 5))
        { /* block id: 372 */
            l_964 ^= p_22;
            p_22 = (safe_add_func_uint32_t_u_u((p_1440->g_967 > (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(0xBE70B170L, (safe_mod_func_int32_t_s_s((0x64L < (!(((((safe_mul_func_uint8_t_u_u((&p_23 != (void*)0), ((p_1440->g_409.z , l_972) == (void*)0))) != ((**l_807) = (*p_1440->g_961))) ^ 0x76772B6588821A8AL) >= 4UL) ^ 0x7A08CAECL))), p_24)), l_964, 1UL, 4294967295UL, 7UL, 0xC45E1325L, 1UL)).hi)).x , GROUP_DIVERGE(1, 1))), p_1440->g_144[4][5]));
            if (l_964)
                break;
        }
        (*p_1440->g_702) |= (7L ^ ((safe_lshift_func_uint8_t_u_u((+p_25), 7)) == (8L && ((((safe_mul_func_int8_t_s_s(((safe_mul_func_uint32_t_u_u(((((void*)0 == l_979) & (((~((*l_736) ^ ((*l_988) &= (((safe_unary_minus_func_int64_t_s(((p_22 == (*l_736)) >= (((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((**p_1440->g_960), 0)), p_25)) && (-7L)) , p_24)))) ^ (*l_54)) | 0L)))) <= FAKE_DIVERGE(p_1440->global_2_offset, get_global_id(2), 10)) || (*l_54))) >= (*l_54)), 0L)) > 1L), (*l_54))) , (***p_1440->g_959)) ^ p_24) >= p_1440->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1440->tid, 67))]))));
    }
    return p_1440->g_333.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1440->g_748
 * writes: p_1440->g_748
 */
uint64_t  func_32(int32_t  p_33, int32_t * p_34, int32_t * p_35, int32_t  p_36, int32_t * p_37, struct S2 * p_1440)
{ /* block id: 257 */
    int32_t *l_745 = &p_1440->g_423;
    int32_t *l_746[6][8][4] = {{{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317}},{{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317}},{{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317}},{{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317}},{{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317}},{{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317},{&p_1440->g_7,&p_1440->g_2[7][6],&p_1440->g_2[2][5],&p_1440->g_317}}};
    int32_t l_747 = 0x36B6C708L;
    int i, j, k;
    if ((atomic_inc(&p_1440->l_atomic_input[20]) == 4))
    { /* block id: 259 */
        VECTOR(uint8_t, 8) l_737 = (VECTOR(uint8_t, 8))(0xE0L, (VECTOR(uint8_t, 4))(0xE0L, (VECTOR(uint8_t, 2))(0xE0L, 251UL), 251UL), 251UL, 0xE0L, 251UL);
        struct S0 l_738 = {0x2BL,1L,0x19B2482DL,0x6AL};/* VOLATILE GLOBAL l_738 */
        struct S0 l_739 = {0UL,0x6FFFDEF8L,0x3EBD34A9L,-6L};/* VOLATILE GLOBAL l_739 */
        int16_t l_740 = 0x1591L;
        uint8_t l_741 = 0x95L;
        struct S1 l_742 = {0xEF99B7E2L};
        struct S0 l_743 = {0x81L,-3L,0x30E25865L,0L};/* VOLATILE GLOBAL l_743 */
        struct S0 l_744[3][2] = {{{0x19L,0x76067A00L,4294967295UL,0x42L},{0x19L,0x76067A00L,4294967295UL,0x42L}},{{0x19L,0x76067A00L,4294967295UL,0x42L},{0x19L,0x76067A00L,4294967295UL,0x42L}},{{0x19L,0x76067A00L,4294967295UL,0x42L},{0x19L,0x76067A00L,4294967295UL,0x42L}}};
        int i, j;
        l_739 = (((VECTOR(uint8_t, 8))(l_737.s07721433)).s1 , l_738);
        l_741 ^= l_740;
        l_744[0][0] = (l_742 , (FAKE_DIVERGE(p_1440->local_0_offset, get_local_id(0), 10) , l_743));
        unsigned int result = 0;
        result += l_737.s7;
        result += l_737.s6;
        result += l_737.s5;
        result += l_737.s4;
        result += l_737.s3;
        result += l_737.s2;
        result += l_737.s1;
        result += l_737.s0;
        result += l_738.f0;
        result += l_738.f1;
        result += l_738.f2;
        result += l_738.f3;
        result += l_739.f0;
        result += l_739.f1;
        result += l_739.f2;
        result += l_739.f3;
        result += l_740;
        result += l_741;
        result += l_742.f0;
        result += l_743.f0;
        result += l_743.f1;
        result += l_743.f2;
        result += l_743.f3;
        int l_744_i0, l_744_i1;
        for (l_744_i0 = 0; l_744_i0 < 3; l_744_i0++) {
            for (l_744_i1 = 0; l_744_i1 < 2; l_744_i1++) {
                result += l_744[l_744_i0][l_744_i1].f0;
                result += l_744[l_744_i0][l_744_i1].f1;
                result += l_744[l_744_i0][l_744_i1].f2;
                result += l_744[l_744_i0][l_744_i1].f3;
            }
        }
        atomic_add(&p_1440->l_special_values[20], result);
    }
    else
    { /* block id: 263 */
        (1 + 1);
    }
    ++p_1440->g_748;
    return p_36;
}


/* ------------------------------------------ */
/* 
 * reads : p_1440->g_530 p_1440->g_534 p_1440->g_122 p_1440->g_341 p_1440->g_342 p_1440->g_379 p_1440->g_279 p_1440->g_519 p_1440->g_520 p_1440->g_243 p_1440->g_333 p_1440->g_2 p_1440->g_210.f3 p_1440->g_241 p_1440->g_387 p_1440->g_500 p_1440->g_7 p_1440->g_116 p_1440->g_692 p_1440->g_343 p_1440->g_694 p_1440->g_53 p_1440->g_267 p_1440->g_228 p_1440->g_702 p_1440->g_703
 * writes: p_1440->g_409 p_1440->g_6 p_1440->g_520 p_1440->g_333 p_1440->g_210.f3 p_1440->g_119 p_1440->g_348 p_1440->g_228 p_1440->g_2
 */
int32_t * func_41(int32_t ** p_42, int8_t  p_43, uint8_t  p_44, int32_t ** p_45, struct S2 * p_1440)
{ /* block id: 164 */
    VECTOR(uint64_t, 8) l_523 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xAF320F0A7633EE55L), 0xAF320F0A7633EE55L), 0xAF320F0A7633EE55L, 1UL, 0xAF320F0A7633EE55L);
    VECTOR(uint64_t, 16) l_524 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 5UL), 5UL), 5UL, 18446744073709551615UL, 5UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 5UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 5UL), 18446744073709551615UL, 5UL, 18446744073709551615UL, 5UL);
    uint8_t *l_525 = (void*)0;
    uint8_t *l_527[8][9][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    uint8_t **l_526 = &l_527[3][7][0];
    int64_t *l_528[5][7][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_529 = 0x03675D97L;
    int32_t l_531 = 1L;
    int32_t l_555 = 0x77D8D29AL;
    VECTOR(int8_t, 8) l_562 = (VECTOR(int8_t, 8))(0x5EL, (VECTOR(int8_t, 4))(0x5EL, (VECTOR(int8_t, 2))(0x5EL, 0x70L), 0x70L), 0x70L, 0x5EL, 0x70L);
    int32_t l_600 = 0x4A563222L;
    int32_t l_604 = 0x5F5D18B4L;
    int32_t l_605 = 0x48D5C547L;
    VECTOR(int32_t, 2) l_607 = (VECTOR(int32_t, 2))(0x744B560CL, 8L);
    int64_t l_612 = 0x551471120F2EFA00L;
    uint16_t l_613 = 65533UL;
    VECTOR(uint32_t, 8) l_653 = (VECTOR(uint32_t, 8))(0x8F995E13L, (VECTOR(uint32_t, 4))(0x8F995E13L, (VECTOR(uint32_t, 2))(0x8F995E13L, 4294967289UL), 4294967289UL), 4294967289UL, 0x8F995E13L, 4294967289UL);
    uint32_t *l_693 = (void*)0;
    int32_t *l_735 = &p_1440->g_2[5][6];
    int i, j, k;
    l_531 ^= ((safe_rshift_func_int8_t_s_u((((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 2))(l_523.s55)).xxyxxyyyyxxxxyxx, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_524.sce418ce9)).s22)))).xxxx)).wwxzyxxxxxyzzwxz))))).s4 & (l_529 = (l_525 == ((*l_526) = &p_44)))), (p_1440->g_530 , p_44))) >= 0x93L);
    for (l_529 = 17; (l_529 <= 19); l_529++)
    { /* block id: 170 */
        int32_t l_548 = 0x2D9F0D7AL;
        int32_t l_599 = (-4L);
        int32_t l_601 = 0x79E82ECAL;
        int32_t l_602[5] = {0x645EE446L,0x645EE446L,0x645EE446L,0x645EE446L,0x645EE446L};
        VECTOR(uint32_t, 2) l_652 = (VECTOR(uint32_t, 2))(0UL, 0x946A6A84L);
        VECTOR(int32_t, 16) l_668 = (VECTOR(int32_t, 16))(0x40C2F705L, (VECTOR(int32_t, 4))(0x40C2F705L, (VECTOR(int32_t, 2))(0x40C2F705L, 8L), 8L), 8L, 0x40C2F705L, 8L, (VECTOR(int32_t, 2))(0x40C2F705L, 8L), (VECTOR(int32_t, 2))(0x40C2F705L, 8L), 0x40C2F705L, 8L, 0x40C2F705L, 8L);
        VECTOR(int64_t, 8) l_675 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x6AC9DDF6D0FFF365L), 0x6AC9DDF6D0FFF365L), 0x6AC9DDF6D0FFF365L, (-1L), 0x6AC9DDF6D0FFF365L);
        int32_t l_695 = 0x71711348L;
        uint32_t l_714 = 4294967295UL;
        int i;
        if (((VECTOR(int32_t, 16))(p_1440->g_534.s15a22e7760b8827b)).s0)
        { /* block id: 171 */
            uint8_t **l_541[10][6][4] = {{{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525}},{{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525}},{{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525}},{{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525}},{{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525}},{{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525}},{{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525}},{{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525}},{{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525}},{{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525},{&l_527[3][7][0],(void*)0,&l_527[2][5][0],&l_525}}};
            int32_t l_556 = 0x2B1E54A4L;
            int64_t *l_580 = (void*)0;
            int32_t l_594 = 8L;
            int32_t l_595 = (-1L);
            int32_t l_596 = (-1L);
            int32_t l_597[2][2] = {{(-6L),(-6L)},{(-6L),(-6L)}};
            int64_t l_606 = 0x7BE5C5E8575505EBL;
            int32_t l_609 = 6L;
            int i, j, k;
            if ((p_1440->g_122.s3 , (safe_div_func_uint64_t_u_u(((((safe_add_func_int8_t_s_s(0x20L, (!0L))) < (safe_mod_func_int8_t_s_s((((void*)0 != l_541[5][0][1]) >= ((0x1827617718B12E78L < (*p_1440->g_341)) , (safe_mod_func_int64_t_s_s(((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(l_548, ((safe_rshift_func_int8_t_s_u((GROUP_DIVERGE(2, 1) , (safe_mul_func_uint8_t_u_u((((VECTOR(int64_t, 2))(0x36E31AED640507C8L, 0x41A68CC9C67680B0L)).even ^ (p_1440->g_409.x = (((safe_rshift_func_uint16_t_u_s((l_523.s0 && l_548), l_548)) >= 1UL) , p_44))), l_555))), 6)) < l_548))), l_556)) == 4294967295UL), p_43)))), p_1440->g_379.y))) , p_43) , p_1440->g_279), p_44))))
            { /* block id: 173 */
                int32_t *l_557[10][5][5] = {{{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529}},{{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529}},{{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529}},{{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529}},{{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529}},{{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529}},{{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529}},{{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529}},{{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529}},{{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529},{(void*)0,&p_1440->g_2[5][6],&p_1440->g_7,(void*)0,&l_529}}};
                int32_t l_571 = 0x6E813979L;
                int i, j, k;
                l_557[3][0][0] = ((*p_45) = ((*p_42) = (*p_1440->g_519)));
                if ((((((((safe_sub_func_int64_t_s_s((p_43 || (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_562.s7327)).z, 0))), (safe_sub_func_int32_t_s_s(((void*)0 == &p_1440->g_228), (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((p_1440->g_243 , l_571), (l_531 = (p_1440->g_333.s7++)))), p_1440->g_2[7][3])), ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 2))(0x89L, 0xA4L)).yyxy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 2))(255UL, 0x53L)).yyyyxyxx, (uint8_t)(safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(0x3402L, ((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 4))(7UL, (0x4D14F299L && (l_580 == l_528[3][1][6])), 65535UL, 0xE664L))))).y)), l_556)), p_43))))))).s03)).xxyx))).odd, ((VECTOR(uint8_t, 2))(0x2BL))))).even)))))) < 0x01FDL) || 0x9AC2E085L) , p_43) >= 0L) , 0xDA1487E6L) && p_44))
                { /* block id: 179 */
                    return (*p_1440->g_519);
                }
                else
                { /* block id: 181 */
                    uint32_t l_581 = 0xD445FD07L;
                    --l_581;
                }
            }
            else
            { /* block id: 184 */
                int32_t *l_584 = &l_531;
                int32_t *l_585 = &p_1440->g_2[5][6];
                int32_t *l_586 = &p_1440->g_2[5][6];
                int32_t *l_587 = &p_1440->g_2[1][2];
                int32_t *l_588 = &p_1440->g_423;
                int32_t *l_589 = &p_1440->g_2[4][2];
                int32_t *l_590 = (void*)0;
                int32_t *l_591 = &p_1440->g_423;
                int32_t *l_592 = &p_1440->g_2[7][6];
                int32_t *l_593[6][2] = {{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423},{&p_1440->g_423,&p_1440->g_423}};
                int32_t l_603[9] = {0x534DCB29L,0x534DCB29L,0x534DCB29L,0x534DCB29L,0x534DCB29L,0x534DCB29L,0x534DCB29L,0x534DCB29L,0x534DCB29L};
                VECTOR(int8_t, 16) l_608 = (VECTOR(int8_t, 16))(0x00L, (VECTOR(int8_t, 4))(0x00L, (VECTOR(int8_t, 2))(0x00L, 0x61L), 0x61L), 0x61L, 0x00L, 0x61L, (VECTOR(int8_t, 2))(0x00L, 0x61L), (VECTOR(int8_t, 2))(0x00L, 0x61L), 0x00L, 0x61L, 0x00L, 0x61L);
                int32_t l_611 = 0L;
                int i, j;
                --l_613;
            }
            if (l_601)
                continue;
            for (p_1440->g_210.f3 = 15; (p_1440->g_210.f3 != 20); ++p_1440->g_210.f3)
            { /* block id: 190 */
                uint64_t l_618[7] = {18446744073709551611UL,0x4E1BF295BDCE7D52L,18446744073709551611UL,18446744073709551611UL,0x4E1BF295BDCE7D52L,18446744073709551611UL,18446744073709551611UL};
                struct S0 **l_658 = &p_1440->g_472[2][3];
                int8_t *l_659[3];
                uint16_t *l_660 = (void*)0;
                uint16_t *l_661 = (void*)0;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_659[i] = (void*)0;
                l_607.x ^= l_618[1];
                if ((atomic_inc(&p_1440->l_atomic_input[7]) == 0))
                { /* block id: 193 */
                    uint32_t l_619[2];
                    int16_t l_636 = 0x3609L;
                    VECTOR(int16_t, 16) l_637 = (VECTOR(int16_t, 16))(0x247CL, (VECTOR(int16_t, 4))(0x247CL, (VECTOR(int16_t, 2))(0x247CL, 0x4306L), 0x4306L), 0x4306L, 0x247CL, 0x4306L, (VECTOR(int16_t, 2))(0x247CL, 0x4306L), (VECTOR(int16_t, 2))(0x247CL, 0x4306L), 0x247CL, 0x4306L, 0x247CL, 0x4306L);
                    VECTOR(int32_t, 2) l_638 = (VECTOR(int32_t, 2))(0x6BC3A520L, 1L);
                    VECTOR(int32_t, 4) l_639 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0L), 0L);
                    VECTOR(int32_t, 8) l_640 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x5E85E53FL), 0x5E85E53FL), 0x5E85E53FL, 6L, 0x5E85E53FL);
                    uint16_t l_641 = 3UL;
                    int32_t l_643 = 0x3A71D4DFL;
                    int32_t *l_642 = &l_643;
                    int32_t *l_644[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    struct S1 l_646 = {4UL};
                    struct S1 *l_645[8] = {&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646};
                    struct S1 *l_647[9][2][9] = {{{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0},{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0}},{{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0},{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0}},{{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0},{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0}},{{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0},{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0}},{{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0},{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0}},{{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0},{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0}},{{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0},{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0}},{{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0},{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0}},{{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0},{(void*)0,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,(void*)0}}};
                    struct S1 *l_648 = &l_646;
                    int16_t l_649[2][7][6] = {{{0x3903L,4L,0x4188L,(-4L),0x4188L,4L},{0x3903L,4L,0x4188L,(-4L),0x4188L,4L},{0x3903L,4L,0x4188L,(-4L),0x4188L,4L},{0x3903L,4L,0x4188L,(-4L),0x4188L,4L},{0x3903L,4L,0x4188L,(-4L),0x4188L,4L},{0x3903L,4L,0x4188L,(-4L),0x4188L,4L},{0x3903L,4L,0x4188L,(-4L),0x4188L,4L}},{{0x3903L,4L,0x4188L,(-4L),0x4188L,4L},{0x3903L,4L,0x4188L,(-4L),0x4188L,4L},{0x3903L,4L,0x4188L,(-4L),0x4188L,4L},{0x3903L,4L,0x4188L,(-4L),0x4188L,4L},{0x3903L,4L,0x4188L,(-4L),0x4188L,4L},{0x3903L,4L,0x4188L,(-4L),0x4188L,4L},{0x3903L,4L,0x4188L,(-4L),0x4188L,4L}}};
                    uint8_t l_650 = 1UL;
                    uint64_t l_651 = 18446744073709551615UL;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_619[i] = 0UL;
                    if (l_619[0])
                    { /* block id: 194 */
                        struct S0 l_620 = {253UL,0x605594B7L,4294967295UL,4L};/* VOLATILE GLOBAL l_620 */
                        struct S0 l_621 = {254UL,1L,4294967295UL,0L};/* VOLATILE GLOBAL l_621 */
                        int32_t l_622[5] = {0x7D504797L,0x7D504797L,0x7D504797L,0x7D504797L,0x7D504797L};
                        uint16_t l_623[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_623[i] = 0x0083L;
                        l_621 = l_620;
                        l_623[0] |= l_622[4];
                    }
                    else
                    { /* block id: 197 */
                        uint64_t l_624 = 1UL;
                        uint16_t l_625 = 1UL;
                        int32_t l_626 = 1L;
                        uint32_t l_627 = 0x43147C52L;
                        int8_t l_630 = (-4L);
                        int16_t l_631 = 6L;
                        uint16_t l_632 = 0x6AEDL;
                        uint16_t l_635 = 0UL;
                        l_625 |= l_624;
                        --l_627;
                        l_632--;
                        l_635 |= (-5L);
                    }
                    l_644[3] = (((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(((l_637.s6 = l_636) , ((VECTOR(int32_t, 8))(l_638.xyyxxxxx)).s0), ((VECTOR(int32_t, 2))(l_639.xx)).hi, 1L, (-6L))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_640.s10124624)).s63)).yyyy))).wyzzzwxwzxzwzzxy)), (int32_t)l_641))).s8 , l_642);
                    l_648 = (l_647[1][1][1] = l_645[4]);
                    l_651 ^= (l_650 = l_649[1][0][0]);
                    unsigned int result = 0;
                    int l_619_i0;
                    for (l_619_i0 = 0; l_619_i0 < 2; l_619_i0++) {
                        result += l_619[l_619_i0];
                    }
                    result += l_636;
                    result += l_637.sf;
                    result += l_637.se;
                    result += l_637.sd;
                    result += l_637.sc;
                    result += l_637.sb;
                    result += l_637.sa;
                    result += l_637.s9;
                    result += l_637.s8;
                    result += l_637.s7;
                    result += l_637.s6;
                    result += l_637.s5;
                    result += l_637.s4;
                    result += l_637.s3;
                    result += l_637.s2;
                    result += l_637.s1;
                    result += l_637.s0;
                    result += l_638.y;
                    result += l_638.x;
                    result += l_639.w;
                    result += l_639.z;
                    result += l_639.y;
                    result += l_639.x;
                    result += l_640.s7;
                    result += l_640.s6;
                    result += l_640.s5;
                    result += l_640.s4;
                    result += l_640.s3;
                    result += l_640.s2;
                    result += l_640.s1;
                    result += l_640.s0;
                    result += l_641;
                    result += l_643;
                    result += l_646.f0;
                    int l_649_i0, l_649_i1, l_649_i2;
                    for (l_649_i0 = 0; l_649_i0 < 2; l_649_i0++) {
                        for (l_649_i1 = 0; l_649_i1 < 7; l_649_i1++) {
                            for (l_649_i2 = 0; l_649_i2 < 6; l_649_i2++) {
                                result += l_649[l_649_i0][l_649_i1][l_649_i2];
                            }
                        }
                    }
                    result += l_650;
                    result += l_651;
                    atomic_add(&p_1440->l_special_values[7], result);
                }
                else
                { /* block id: 209 */
                    (1 + 1);
                }
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1440->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 67)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 4))((&l_602[0] == (void*)0), ((VECTOR(uint32_t, 2))(l_652.yx)), 4294967292UL)).wzzxzzzyzyzxywyx, ((VECTOR(uint32_t, 8))(l_653.s02712171)).s6714046310057667, ((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((safe_lshift_func_uint8_t_u_u(p_1440->g_241, ((VECTOR(uint8_t, 4))((l_613 ^ ((safe_lshift_func_int8_t_s_u((p_43 = ((void*)0 != l_658)), 2)) > (p_1440->g_119.s3 = ((p_1440->g_387.s0 <= p_1440->g_500.y) ^ ((void*)0 == &l_618[1]))))), ((VECTOR(uint8_t, 2))(251UL)), 0x87L)).x)), 0x13E26ADCL, 0x2D23456EL, 0L)).xwxzwxwwywywywww)).lo, ((VECTOR(int32_t, 8))(7L))))).s7234471153756640))).s0, 10))][(safe_mod_func_uint32_t_u_u(p_1440->tid, 67))]));
                (*p_1440->g_519) = (*p_1440->g_519);
            }
        }
        else
        { /* block id: 219 */
            int16_t *l_682 = &p_1440->g_348;
            uint8_t l_696 = 0xF0L;
            int32_t l_697 = 1L;
            int32_t *l_698 = (void*)0;
            int32_t *l_699 = &l_602[1];
            int32_t l_706 = (-7L);
            int32_t l_713 = 0x6156D35AL;
            (*l_699) |= (safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(p_1440->g_7, (safe_add_func_int16_t_s_s((((VECTOR(int32_t, 4))(7L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(l_668.sa5ec5f5cab675df0)).sc5c8, (int32_t)(l_697 = ((~((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_s(((((((VECTOR(uint64_t, 16))(abs(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))((-1L), ((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_675.s16654360)).s44)).xyxxxyxx)).even, (int64_t)((p_44 , ((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((l_599 < ((safe_add_func_uint64_t_u_u((((((*l_682) = 0x3930L) || ((safe_unary_minus_func_int64_t_s((safe_sub_func_int16_t_s_s((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0L, 3L)), ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 4))((safe_add_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(p_1440->g_116.x, ((&p_1440->g_228 == (p_43 , &p_44)) & ((safe_mul_func_uint8_t_u_u((((((p_1440->g_692[2][0] , &p_1440->g_171) != l_693) <= p_44) , &p_44) != &p_44), p_1440->g_343.w)) && l_599)))), p_43)), 0x36L, 0L, 0L)), ((VECTOR(uint8_t, 4))(255UL))))), ((VECTOR(int16_t, 4))(1L))))), 1L, 0x3CCEL)).s1 < p_43), p_1440->g_694)))) , GROUP_DIVERGE(1, 1))) || 0x6A7DB60FL) <= p_43), l_695)) != l_696)), 15)) != p_1440->g_692[2][0].f3), p_1440->g_53.y)) , 0x6BC6L)) & p_1440->g_387.s1), (int64_t)0x4E8164DB37CCBE23L))), 1L, ((VECTOR(int64_t, 8))(0x4F874D3B3C9DDAC5L)), 0L, 0L)).s5d)).xyyyxxyxxyxyxyxy, (int64_t)p_43))).s0e33)).zzzzxzyyzzxxyxyw))).se && p_1440->g_267) , 1UL) >= 0UL) | 4294967295UL), l_653.s7)) == FAKE_DIVERGE(p_1440->local_0_offset, get_local_id(0), 10)) == l_652.y) , 0x59L), 4)), p_43)) , l_668.s2)) | 0xE1B6L)), (int32_t)l_675.s4))).xxzxzyywyzxzwwzz)).se0, (int32_t)l_555))), 0x438ED6AFL)).y < p_43), p_43)))), 0x4666250FL));
            for (p_1440->g_228 = 7; (p_1440->g_228 <= 43); p_1440->g_228++)
            { /* block id: 225 */
                int16_t l_712 = 0x427EL;
                (*p_1440->g_703) = p_1440->g_702;
                for (l_600 = 0; (l_600 == 27); l_600 = safe_add_func_int64_t_s_s(l_600, 7))
                { /* block id: 229 */
                    int32_t *l_707 = &l_548;
                    int32_t *l_708 = &l_697;
                    int32_t *l_709 = &l_605;
                    int32_t *l_710 = &l_605;
                    int32_t *l_711[9][8][1] = {{{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]}},{{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]}},{{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]}},{{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]}},{{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]}},{{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]}},{{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]}},{{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]}},{{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]},{&l_602[0]}}};
                    int i, j, k;
                    l_607.y |= p_44;
                    l_714++;
                    if ((atomic_inc(&p_1440->l_atomic_input[6]) == 6))
                    { /* block id: 233 */
                        struct S0 l_717 = {0xC3L,-1L,0xB1178F61L,5L};/* VOLATILE GLOBAL l_717 */
                        struct S0 l_718 = {0x6DL,0x323BDB12L,0UL,0L};/* VOLATILE GLOBAL l_718 */
                        uint16_t l_719 = 0UL;
                        uint32_t l_720 = 4294967288UL;
                        int32_t l_722 = 1L;
                        int32_t *l_721 = &l_722;
                        int32_t *l_723[2][2][3] = {{{&l_722,(void*)0,&l_722},{&l_722,(void*)0,&l_722}},{{&l_722,(void*)0,&l_722},{&l_722,(void*)0,&l_722}}};
                        uint8_t l_724 = 0x7DL;
                        int32_t l_725 = 5L;
                        uint32_t l_726 = 1UL;
                        int32_t l_727 = 8L;
                        VECTOR(int32_t, 16) l_728 = (VECTOR(int32_t, 16))(0x55157460L, (VECTOR(int32_t, 4))(0x55157460L, (VECTOR(int32_t, 2))(0x55157460L, 0x10BC1924L), 0x10BC1924L), 0x10BC1924L, 0x55157460L, 0x10BC1924L, (VECTOR(int32_t, 2))(0x55157460L, 0x10BC1924L), (VECTOR(int32_t, 2))(0x55157460L, 0x10BC1924L), 0x55157460L, 0x10BC1924L, 0x55157460L, 0x10BC1924L);
                        VECTOR(int16_t, 4) l_729 = (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x4014L), 0x4014L);
                        int32_t *l_730 = &l_727;
                        int i, j, k;
                        l_718 = l_717;
                        l_720 = l_719;
                        l_723[0][1][0] = l_721;
                        l_730 = ((l_724 = 0x4ADAC774EB4D8A7FL) , ((l_729.x = ((l_725 , l_726) , (l_727 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_728.sabdf6bae)).s57)).yxyy)).wyzxxzyy)).s5))) , (void*)0));
                        unsigned int result = 0;
                        result += l_717.f0;
                        result += l_717.f1;
                        result += l_717.f2;
                        result += l_717.f3;
                        result += l_718.f0;
                        result += l_718.f1;
                        result += l_718.f2;
                        result += l_718.f3;
                        result += l_719;
                        result += l_720;
                        result += l_722;
                        result += l_724;
                        result += l_725;
                        result += l_726;
                        result += l_727;
                        result += l_728.sf;
                        result += l_728.se;
                        result += l_728.sd;
                        result += l_728.sc;
                        result += l_728.sb;
                        result += l_728.sa;
                        result += l_728.s9;
                        result += l_728.s8;
                        result += l_728.s7;
                        result += l_728.s6;
                        result += l_728.s5;
                        result += l_728.s4;
                        result += l_728.s3;
                        result += l_728.s2;
                        result += l_728.s1;
                        result += l_728.s0;
                        result += l_729.w;
                        result += l_729.z;
                        result += l_729.y;
                        result += l_729.x;
                        atomic_add(&p_1440->l_special_values[6], result);
                    }
                    else
                    { /* block id: 240 */
                        (1 + 1);
                    }
                }
                if (p_44)
                    continue;
                return (*p_1440->g_519);
            }
        }
        for (l_600 = 0; (l_600 < 4); ++l_600)
        { /* block id: 250 */
            (*p_1440->g_702) |= (safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1440->global_1_offset, get_global_id(1), 10), 1));
        }
        (*p_1440->g_702) = (0x11DCD529F8D786A4L & (!18446744073709551611UL));
        (*p_45) = (*p_1440->g_519);
    }
    return l_735;
}


/* ------------------------------------------ */
/* 
 * reads : p_1440->g_6 p_1440->g_20.f0 p_1440->g_51 p_1440->g_2 p_1440->g_116 p_1440->g_119 p_1440->g_122 p_1440->g_7 p_1440->g_143 p_1440->g_144 p_1440->l_comm_values p_1440->g_148 p_1440->g_53 p_1440->g_173 p_1440->g_192 p_1440->g_215 p_1440->g_235 p_1440->g_210.f1 p_1440->g_240 p_1440->g_210.f3 p_1440->g_210 p_1440->g_315 p_1440->g_comm_values p_1440->g_317 p_1440->g_333 p_1440->g_341 p_1440->g_343 p_1440->g_345 p_1440->g_293 p_1440->g_145 p_1440->g_228 p_1440->g_409 p_1440->g_379 p_1440->g_391 p_1440->g_348 p_1440->g_423 p_1440->g_426 p_1440->g_342 p_1440->g_487 p_1440->g_291 p_1440->g_387 p_1440->g_515
 * writes: p_1440->g_143 p_1440->g_145 p_1440->g_148 p_1440->g_6 p_1440->g_2 p_1440->g_171 p_1440->g_173 p_1440->g_228 p_1440->g_53 p_1440->g_116 p_1440->g_210 p_1440->g_317 p_1440->g_348 p_1440->g_423 p_1440->g_333 p_1440->l_comm_values p_1440->g_472 p_1440->g_comm_values p_1440->g_517
 */
int32_t ** func_46(int32_t  p_47, struct S2 * p_1440)
{ /* block id: 14 */
    VECTOR(uint32_t, 2) l_70 = (VECTOR(uint32_t, 2))(0x57D2A19DL, 0x7774CA6AL);
    int32_t **l_73 = &p_1440->g_6[1][5][2];
    int8_t *l_74 = (void*)0;
    int32_t *l_316 = &p_1440->g_317;
    VECTOR(int64_t, 16) l_320 = (VECTOR(int64_t, 16))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x30F185DDB280B6D5L), 0x30F185DDB280B6D5L), 0x30F185DDB280B6D5L, 7L, 0x30F185DDB280B6D5L, (VECTOR(int64_t, 2))(7L, 0x30F185DDB280B6D5L), (VECTOR(int64_t, 2))(7L, 0x30F185DDB280B6D5L), 7L, 0x30F185DDB280B6D5L, 7L, 0x30F185DDB280B6D5L);
    VECTOR(uint8_t, 8) l_334 = (VECTOR(uint8_t, 8))(0x6DL, (VECTOR(uint8_t, 4))(0x6DL, (VECTOR(uint8_t, 2))(0x6DL, 249UL), 249UL), 249UL, 0x6DL, 249UL);
    VECTOR(int64_t, 2) l_339 = (VECTOR(int64_t, 2))(1L, (-6L));
    int32_t l_351[1][9] = {{0x0D30AE7EL,0x0D30AE7EL,0x0D30AE7EL,0x0D30AE7EL,0x0D30AE7EL,0x0D30AE7EL,0x0D30AE7EL,0x0D30AE7EL,0x0D30AE7EL}};
    uint32_t l_356 = 5UL;
    VECTOR(uint64_t, 16) l_385 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL);
    VECTOR(uint16_t, 16) l_396 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xDC9BL), 0xDC9BL), 0xDC9BL, 1UL, 0xDC9BL, (VECTOR(uint16_t, 2))(1UL, 0xDC9BL), (VECTOR(uint16_t, 2))(1UL, 0xDC9BL), 1UL, 0xDC9BL, 1UL, 0xDC9BL);
    uint64_t l_425 = 18446744073709551606UL;
    int32_t l_488[4][7][5] = {{{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL}},{{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL}},{{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL}},{{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL},{0x2C4ACEC4L,(-1L),0x2C4ACEC4L,8L,0x376D250BL}}};
    VECTOR(uint16_t, 2) l_509 = (VECTOR(uint16_t, 2))(65535UL, 0x5588L);
    int i, j, k;
    (*l_316) ^= (safe_lshift_func_int16_t_s_u((func_64((((VECTOR(uint32_t, 8))(l_70.xxxyyxxx)).s1 , (safe_rshift_func_int16_t_s_s(l_70.y, 0))), l_73, l_74, (*l_73), &p_1440->g_2[0][2], p_1440) || p_47), (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((((safe_mod_func_uint64_t_u_u((p_1440->g_20.f0 >= (safe_sub_func_uint64_t_u_u((((VECTOR(uint64_t, 4))(p_1440->g_315.xxxz)).y && (-1L)), l_70.x))), p_1440->g_315.z)) & 65535UL) == 0x14E8A97BL) , (-1L)) >= 0xC1L), p_1440->g_comm_values[p_1440->tid])), 9UL))));
    for (p_1440->g_210.f3 = 0; (p_1440->g_210.f3 == (-11)); --p_1440->g_210.f3)
    { /* block id: 86 */
        (*l_73) = (((VECTOR(int64_t, 16))(l_320.s13d3453f8a4f2d4d)).s6 , &p_47);
    }
    if (((void*)0 != &l_73))
    { /* block id: 89 */
        uint16_t *l_327 = (void*)0;
        VECTOR(uint8_t, 2) l_332 = (VECTOR(uint8_t, 2))(7UL, 1UL);
        int64_t *l_340[3];
        VECTOR(uint64_t, 16) l_344 = (VECTOR(uint64_t, 16))(0x921B824FF3AD8DB4L, (VECTOR(uint64_t, 4))(0x921B824FF3AD8DB4L, (VECTOR(uint64_t, 2))(0x921B824FF3AD8DB4L, 0xEF4DCC81675217F3L), 0xEF4DCC81675217F3L), 0xEF4DCC81675217F3L, 0x921B824FF3AD8DB4L, 0xEF4DCC81675217F3L, (VECTOR(uint64_t, 2))(0x921B824FF3AD8DB4L, 0xEF4DCC81675217F3L), (VECTOR(uint64_t, 2))(0x921B824FF3AD8DB4L, 0xEF4DCC81675217F3L), 0x921B824FF3AD8DB4L, 0xEF4DCC81675217F3L, 0x921B824FF3AD8DB4L, 0xEF4DCC81675217F3L);
        int16_t *l_347 = &p_1440->g_348;
        int32_t l_349[5] = {0L,0L,0L,0L,0L};
        int32_t *l_350[4] = {&p_1440->g_2[0][2],&p_1440->g_2[0][2],&p_1440->g_2[0][2],&p_1440->g_2[0][2]};
        int i;
        for (i = 0; i < 3; i++)
            l_340[i] = (void*)0;
        l_351[0][3] &= (l_349[4] &= (safe_mod_func_int32_t_s_s((-3L), (safe_rshift_func_uint8_t_u_u((((safe_add_func_uint64_t_u_u(18446744073709551615UL, (*l_316))) , ((*l_347) = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))((l_327 == ((((*l_316) , (safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 2))(l_332.xy)).yxxx, ((VECTOR(uint8_t, 4))(p_1440->g_333.s6210)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_334.s5465))))))).yyzxwyxw)).lo, (uint8_t)((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-4L), (-8L))), 0x12L, (-4L))).z, 2)) | ((((((safe_div_func_int32_t_s_s(((0x3F356C05553CE12BL >= ((VECTOR(int64_t, 2))(l_339.yy)).hi) < (l_340[2] == p_1440->g_341)), (((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 8))(0x33E579819D07085DL, 0x6D78697EFC4D0B0BL, 18446744073709551615UL, ((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 8))(p_1440->g_343.xzxxwyyz)).hi, ((VECTOR(uint64_t, 4))(0UL, ((VECTOR(uint64_t, 2))(0x46D64D6B0D7B6BB7L, 0x1D153DDF38A954B9L)), 0UL))))), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_344.sf56ba5d0a36d6b82)).s7429))))), 18446744073709551606UL)), (uint64_t)0UL))).s5 , p_47))) , (void*)0) != &p_1440->g_150[5][0]) <= p_1440->g_215.x) == p_47) ^ l_344.s9)), (uint8_t)p_1440->g_119.s1))).x, p_47)), p_47))) , p_1440->g_143) , p_1440->g_345[1][0][6])), p_47, 4L, 0x3BL)).xwxwxxzw, ((VECTOR(int8_t, 8))(0L)), ((VECTOR(int8_t, 8))(0x57L))))).even)).wyzxzywy, ((VECTOR(int8_t, 8))(0x70L))))).even, ((VECTOR(uint8_t, 4))(0x74L))))), ((VECTOR(int16_t, 4))(0x21D9L))))).zwzzzywx, (int16_t)p_1440->g_293, (int16_t)p_47))).s5437505536343655)).se4)).yxyy)), 1L, ((VECTOR(int16_t, 2))((-6L))), 0x2E53L)).s1)) <= p_47), p_47)))));
    }
    else
    { /* block id: 93 */
        int32_t *l_352 = &p_1440->g_2[3][5];
        int32_t *l_353 = (void*)0;
        int32_t *l_354 = &l_351[0][3];
        int32_t *l_355[4][5] = {{&p_1440->g_317,&p_1440->g_317,&p_1440->g_317,&p_1440->g_317,&p_1440->g_317},{&p_1440->g_317,&p_1440->g_317,&p_1440->g_317,&p_1440->g_317,&p_1440->g_317},{&p_1440->g_317,&p_1440->g_317,&p_1440->g_317,&p_1440->g_317,&p_1440->g_317},{&p_1440->g_317,&p_1440->g_317,&p_1440->g_317,&p_1440->g_317,&p_1440->g_317}};
        int8_t l_424 = 0x49L;
        uint16_t *l_497 = &p_1440->g_148;
        int i, j;
        l_356--;
        for (p_1440->g_145 = 1; (p_1440->g_145 >= (-4)); p_1440->g_145--)
        { /* block id: 97 */
            int32_t **l_361 = &p_1440->g_6[0][5][0];
            return &p_1440->g_6[0][5][0];
        }
        for (p_1440->g_228 = 29; (p_1440->g_228 <= 53); p_1440->g_228 = safe_add_func_int16_t_s_s(p_1440->g_228, 2))
        { /* block id: 102 */
            uint64_t l_364[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
            struct S1 l_365 = {0x5B7B6F85L};
            int32_t l_370 = 1L;
            int32_t ***l_378 = &l_73;
            VECTOR(int16_t, 8) l_393 = (VECTOR(int16_t, 8))(0x7D60L, (VECTOR(int16_t, 4))(0x7D60L, (VECTOR(int16_t, 2))(0x7D60L, 0x1DB5L), 0x1DB5L), 0x1DB5L, 0x7D60L, 0x1DB5L);
            VECTOR(uint16_t, 2) l_395 = (VECTOR(uint16_t, 2))(0xA89DL, 0x2244L);
            uint32_t l_464 = 0xC5DA89E0L;
            uint16_t *l_492 = (void*)0;
            VECTOR(int64_t, 8) l_504 = (VECTOR(int64_t, 8))(0x4414BB0CB3A239AFL, (VECTOR(int64_t, 4))(0x4414BB0CB3A239AFL, (VECTOR(int64_t, 2))(0x4414BB0CB3A239AFL, 0x06619627AFC88108L), 0x06619627AFC88108L), 0x06619627AFC88108L, 0x4414BB0CB3A239AFL, 0x06619627AFC88108L);
            volatile struct S0 *l_516[3];
            int i;
            for (i = 0; i < 3; i++)
                l_516[i] = &p_1440->g_173;
            l_364[2] |= ((VECTOR(int32_t, 2))(0x561A87ECL, 0L)).lo;
            l_365 = l_365;
            for (l_365.f0 = 0; (l_365.f0 >= 12); ++l_365.f0)
            { /* block id: 107 */
                int16_t l_400 = (-1L);
                uint8_t *l_435 = (void*)0;
                uint16_t **l_493 = &l_492;
                uint16_t **l_494 = (void*)0;
                uint16_t *l_496 = (void*)0;
                uint16_t **l_495[8];
                uint32_t *l_501 = (void*)0;
                uint32_t *l_502[4];
                VECTOR(int32_t, 16) l_503 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x164FA4ADL), 0x164FA4ADL), 0x164FA4ADL, (-8L), 0x164FA4ADL, (VECTOR(int32_t, 2))((-8L), 0x164FA4ADL), (VECTOR(int32_t, 2))((-8L), 0x164FA4ADL), (-8L), 0x164FA4ADL, (-8L), 0x164FA4ADL);
                int64_t *l_505 = (void*)0;
                int64_t *l_506 = (void*)0;
                int64_t *l_507 = (void*)0;
                int64_t *l_508[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                for (i = 0; i < 8; i++)
                    l_495[i] = &l_496;
                for (i = 0; i < 4; i++)
                    l_502[i] = (void*)0;
                for (p_1440->g_317 = 19; (p_1440->g_317 <= (-8)); --p_1440->g_317)
                { /* block id: 110 */
                    uint32_t l_371[2][6][4] = {{{0x996BEDF1L,0UL,0xC1255270L,0x62C4057CL},{0x996BEDF1L,0UL,0xC1255270L,0x62C4057CL},{0x996BEDF1L,0UL,0xC1255270L,0x62C4057CL},{0x996BEDF1L,0UL,0xC1255270L,0x62C4057CL},{0x996BEDF1L,0UL,0xC1255270L,0x62C4057CL},{0x996BEDF1L,0UL,0xC1255270L,0x62C4057CL}},{{0x996BEDF1L,0UL,0xC1255270L,0x62C4057CL},{0x996BEDF1L,0UL,0xC1255270L,0x62C4057CL},{0x996BEDF1L,0UL,0xC1255270L,0x62C4057CL},{0x996BEDF1L,0UL,0xC1255270L,0x62C4057CL},{0x996BEDF1L,0UL,0xC1255270L,0x62C4057CL},{0x996BEDF1L,0UL,0xC1255270L,0x62C4057CL}}};
                    int i, j, k;
                    (*l_352) = (&p_1440->g_6[0][5][0] == &p_1440->g_6[0][5][0]);
                    l_371[1][1][3]++;
                    (*l_352) ^= ((l_370 = p_47) | p_47);
                }
                for (p_1440->g_317 = (-1); (p_1440->g_317 <= 26); p_1440->g_317 = safe_add_func_uint64_t_u_u(p_1440->g_317, 6))
                { /* block id: 118 */
                    VECTOR(uint64_t, 8) l_386 = (VECTOR(uint64_t, 8))(0xCA12C75C99B3F84FL, (VECTOR(uint64_t, 4))(0xCA12C75C99B3F84FL, (VECTOR(uint64_t, 2))(0xCA12C75C99B3F84FL, 0xD9399E39DB4A787EL), 0xD9399E39DB4A787EL), 0xD9399E39DB4A787EL, 0xCA12C75C99B3F84FL, 0xD9399E39DB4A787EL);
                    int8_t l_401 = 0x28L;
                    uint8_t *l_429[6];
                    uint16_t *l_440 = (void*)0;
                    uint16_t *l_441 = &p_1440->g_148;
                    int16_t l_442 = (-1L);
                    int32_t l_463 = 0x2ACE0465L;
                    struct S0 *l_471 = &p_1440->g_210;
                    VECTOR(int64_t, 4) l_473 = (VECTOR(int64_t, 4))(0x51EB2E24CA425A75L, (VECTOR(int64_t, 2))(0x51EB2E24CA425A75L, 0x424016D57432EABEL), 0x424016D57432EABEL);
                    int i;
                    for (i = 0; i < 6; i++)
                        l_429[i] = (void*)0;
                    if ((safe_add_func_uint8_t_u_u((((((((void*)0 != l_378) && (((VECTOR(uint32_t, 2))(p_1440->g_379.xx)).lo == p_47)) , (((safe_rshift_func_uint8_t_u_u(254UL, 0)) >= (safe_lshift_func_int16_t_s_u(0L, 0))) >= (((*l_378) = &p_1440->g_6[3][0][1]) == (void*)0))) == ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((l_400 = ((18446744073709551615UL || ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 8))(1UL, ((VECTOR(uint64_t, 2))(p_1440->g_384.xy)), FAKE_DIVERGE(p_1440->global_2_offset, get_global_id(2), 10), ((VECTOR(uint64_t, 2))(l_385.s31)), 0x68D2CDB755E30A02L, 0UL)).even, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_386.s4155575156012712)))).lo)).even)).xxwzzxzx)).hi))).xzzxzzxwzwzxxwyy)).even)).hi))).x) == ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(1L, (-1L))), 8L, 0x14259A3E50D7487AL)).xyyzwyxw)).s4755172773444273, ((VECTOR(int64_t, 8))(0x418C2A2A2713DB18L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 16))(p_1440->g_387.sf2dcf1c28f168778)).lo, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_1440->g_388.s05)), (-1L), 0x45172E1B9E65F1AFL)).wyzyyyxw))).s05)), 0x42B7958AED1166AEL, (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_1440->g_391.sd1)), 0x33L, ((VECTOR(int8_t, 2))(0x06L, 0x13L)), ((VECTOR(int8_t, 2))(p_1440->g_392.s26)), 0x52L)).s6 == (((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(l_393.s0220753435123371)).sc2, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_1440->g_394.zz)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 4))(l_395.xyyy)).even, ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(0x3605L, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_396.s79)).yxxxxxyxxyxyyxyx)).lo)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 2))(0xA718L, 65531UL)).xyyyyyxyyyxyxxyy, ((VECTOR(uint16_t, 2))(p_1440->g_397.s64)).yyyxyxyxxxxxyyxx))).even)).lo)), (safe_mod_func_int32_t_s_s(((p_1440->g_192.y ^ 0xA03DL) == p_47), p_1440->g_387.sa)), 6UL, 0xAA86L)).lo)))).s02)).yxxxyyyy)).hi, ((VECTOR(uint16_t, 4))(0x690CL))))).even, ((VECTOR(uint16_t, 2))(1UL))))).yxyx)).x, 0xA98BL, ((VECTOR(uint16_t, 4))(0x86B1L)))).s66))).yyxxyxxx)).s1537756215665523)).s03, ((VECTOR(int32_t, 2))(0x09A934FBL))))).even <= (*l_316))), (-1L), (-2L), 0x3FDDC9924687C766L)).s5733562053366201))).hi)).s1565303300362367, (int64_t)(*l_354)))))).sc)) && 0x35E4292961265EFDL), l_400, 9UL, ((VECTOR(uint16_t, 4))(0UL)), ((VECTOR(uint16_t, 2))(0x8770L)), ((VECTOR(uint16_t, 2))(3UL)), 0xB401L, ((VECTOR(uint16_t, 4))(0xA4F7L)))).sb, 0xD270L, l_401, ((VECTOR(uint16_t, 4))(0UL)), ((VECTOR(uint16_t, 4))(1UL)), 65535UL, ((VECTOR(uint16_t, 4))(65530UL)))).sbc54)).zxzyyyzz)).s42, ((VECTOR(uint16_t, 2))(3UL))))).hi) ^ p_1440->g_333.s2) == l_386.s4), l_386.s7)))
                    { /* block id: 121 */
                        VECTOR(int64_t, 16) l_408 = (VECTOR(int64_t, 16))(0x67A8B4A64203FD31L, (VECTOR(int64_t, 4))(0x67A8B4A64203FD31L, (VECTOR(int64_t, 2))(0x67A8B4A64203FD31L, (-10L)), (-10L)), (-10L), 0x67A8B4A64203FD31L, (-10L), (VECTOR(int64_t, 2))(0x67A8B4A64203FD31L, (-10L)), (VECTOR(int64_t, 2))(0x67A8B4A64203FD31L, (-10L)), 0x67A8B4A64203FD31L, (-10L), 0x67A8B4A64203FD31L, (-10L));
                        uint64_t *l_412 = &l_364[2];
                        int16_t *l_421 = &p_1440->g_348;
                        int16_t *l_422 = (void*)0;
                        int i;
                        atomic_or(&p_1440->g_atomic_reduction[get_linear_group_id()], (((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((((GROUP_DIVERGE(0, 1) > (((safe_add_func_uint64_t_u_u((((((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(int64_t, 4))(l_408.s0fcc)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(p_1440->g_409.zwywzzyxxzzwwzyx)).s3df1))))).odd, (uint64_t)((safe_rshift_func_int8_t_s_u(((void*)0 != l_412), ((0x52CB634654585D67L || 0x6F364E87EB44AD30L) , (((*l_352) = ((p_47 ^ ((VECTOR(int8_t, 2))(0x4AL, 0L)).lo) >= (p_1440->g_379.w == ((safe_sub_func_int16_t_s_s((p_1440->g_423 |= ((*l_421) &= (((safe_mul_func_int8_t_s_s((((safe_mod_func_int32_t_s_s(((*l_354) = ((((l_408.sa & (p_1440->g_391.s6 >= (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(0x5AL, 0xEEL, 0UL, ((VECTOR(uint8_t, 4))(p_1440->g_116.y, ((VECTOR(uint8_t, 2))(0x04L)), 0xE6L)), 255UL)).even)).x, l_408.s4)))) & 0xB3B975298B4E3347L) && 254UL) || p_47)), p_1440->g_343.z)) || l_400) < 0x2FL), p_1440->g_210.f3)) | l_386.s7) , l_400))), l_424)) <= p_1440->g_173.f0)))) & p_1440->g_315.w)))) >= FAKE_DIVERGE(p_1440->global_0_offset, get_global_id(0), 10))))).odd >= FAKE_DIVERGE(p_1440->group_2_offset, get_group_id(2), 10)) & GROUP_DIVERGE(0, 1)) | p_47), l_400)) | 0x6929953DL) && p_47)) > p_47) > l_425) == p_47), (-4L))), l_400)) != p_47) && l_408.s6));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1440->v_collective += p_1440->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_47 ^= l_400;
                        (**l_378) = &p_47;
                        if ((*l_316))
                            break;
                    }
                    else
                    { /* block id: 130 */
                        (*p_1440->g_426) = p_1440->g_210;
                    }
                    (*l_354) = (((0UL ^ (7L < (((p_47 , (safe_sub_func_int8_t_s_s(0x62L, (++p_1440->g_333.s6)))) < (safe_unary_minus_func_int32_t_s(((*p_1440->g_341) < (p_47 || ((((safe_div_func_int32_t_s_s((l_435 == (void*)0), ((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((*l_441) = GROUP_DIVERGE(1, 1)), ((p_1440->g_391.s2 >= p_47) && 6UL))), p_47)) && 0x598BFD52L))) , p_47) , 3L) , 4294967295UL)))))) || l_400))) == l_442) | (-5L));
                    for (l_370 = 0; (l_370 > (-8)); l_370 = safe_sub_func_uint8_t_u_u(l_370, 2))
                    { /* block id: 138 */
                        int16_t *l_451 = &p_1440->g_348;
                        VECTOR(uint16_t, 8) l_452 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 9UL), 9UL), 9UL, 1UL, 9UL);
                        int64_t *l_455 = (void*)0;
                        int8_t *l_462[9][9] = {{&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0},{&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0},{&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0},{&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0},{&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0},{&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0},{&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0},{&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0},{&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0,&l_401,(void*)0,(void*)0}};
                        struct S0 *l_470[9][5] = {{&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210},{&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210},{&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210},{&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210},{&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210},{&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210},{&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210},{&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210},{&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210}};
                        struct S0 **l_469 = &l_470[8][0];
                        int64_t *l_474 = (void*)0;
                        int64_t *l_475 = (void*)0;
                        uint64_t l_476 = 0x81E457E4930D67B9L;
                        int i, j;
                        (*l_352) |= (~(((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(((*l_451) = (safe_add_func_int64_t_s_s((*p_1440->g_341), p_47))), ((VECTOR(uint16_t, 16))(l_452.s6462174236313304)).sb)), (safe_lshift_func_uint8_t_u_u(((p_47 , (p_1440->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1440->tid, 67))] &= p_1440->g_315.x)) < (safe_add_func_uint16_t_u_u((&p_1440->g_6[2][4][3] != (((safe_add_func_uint32_t_u_u((l_452.s3 ^ ((*l_441) |= p_1440->g_116.y)), (safe_add_func_uint16_t_u_u(((((l_463 = (p_1440->g_345[1][0][6] != p_1440->g_345[0][0][7])) || l_464) , p_47) >= p_1440->g_379.y), 0x1FB2L)))) < p_47) , &l_352)), (-4L)))), 4)))) != 0x0A015477A54CFC56L) <= p_1440->g_379.z));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1440->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 67)), permutations[(safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(p_47, (((*l_469) = &p_1440->g_210) != (p_1440->g_472[2][3] = l_471)))) ^ (((((*l_352) = ((VECTOR(int64_t, 8))(l_473.wzwzyxzz)).s1) < (+0x08898CA08C6C41D8L)) , ((l_476 && p_1440->g_20.f0) == FAKE_DIVERGE(p_1440->global_2_offset, get_global_id(2), 10))) < (!((void*)0 == l_451)))), ((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((((l_488[2][2][4] = (((safe_mod_func_int16_t_s_s(p_1440->g_487.s0, p_47)) || p_47) > 0x8339L)) < 0x55L) , p_47) & 0UL), 2)), 2L)), 1L)) && 0x02D3L))) >= p_1440->g_53.w), 10))][(safe_mod_func_uint32_t_u_u(p_1440->tid, 67))]));
                        (*l_352) = (-1L);
                    }
                }
                (*l_316) = (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_1440->g_489.xyzy)).wwzwzwzx)).s7 < ((safe_rshift_func_uint16_t_u_u((((((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(1UL, 4UL)).xxxxxxyxyxxyyxyx)))).s0 == p_47) > p_47) < ((l_497 = ((*l_493) = l_492)) != ((*l_316) , ((safe_add_func_uint32_t_u_u((p_1440->g_171 = ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_1440->g_500.xxxy)).xzzyzywy)).s2), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_503.sdcb0dfdf)).s73)).even)) , &p_1440->g_346)))) && (~(((p_1440->g_comm_values[p_1440->tid] ^= ((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_504.s6747432313316162)).lo)).s0525274360057271, (int64_t)(-6L), (int64_t)0x04AD1BB957E9151EL))).s3) ^ 0x11382418B4F719F1L) > (((VECTOR(uint16_t, 4))(l_509.xyxy)).z ^ ((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_1440->g_512.s41)).xxyy)).x, (safe_mod_func_uint8_t_u_u(0xBAL, (*l_316))))) , p_1440->g_291[0]))))) <= p_47), 3)) != p_1440->g_387.s0));
            }
            p_1440->g_517[0][2] = p_1440->g_515;
        }
    }
    return &p_1440->g_6[4][5][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_1440->g_20.f0 p_1440->g_51 p_1440->g_2 p_1440->g_116 p_1440->g_119 p_1440->g_122 p_1440->g_7 p_1440->g_143 p_1440->g_144 p_1440->l_comm_values p_1440->g_148 p_1440->g_53 p_1440->g_173 p_1440->g_192 p_1440->g_6 p_1440->g_215 p_1440->g_235 p_1440->g_210.f1 p_1440->g_240 p_1440->g_210.f3 p_1440->g_210
 * writes: p_1440->g_143 p_1440->g_145 p_1440->g_148 p_1440->g_6 p_1440->g_2 p_1440->g_171 p_1440->g_173 p_1440->g_228 p_1440->g_53 p_1440->g_116 p_1440->g_210
 */
uint8_t  func_64(uint16_t  p_65, int32_t ** p_66, int8_t * p_67, int32_t * p_68, int32_t * p_69, struct S2 * p_1440)
{ /* block id: 15 */
    int16_t l_77[3];
    int32_t l_92 = 0x479296E5L;
    int32_t l_104 = 1L;
    int32_t l_105 = 0x2A3FF9C5L;
    int32_t l_106 = 0x53FEA8E8L;
    int32_t l_109 = 8L;
    VECTOR(int16_t, 16) l_120 = (VECTOR(int16_t, 16))(0x2E02L, (VECTOR(int16_t, 4))(0x2E02L, (VECTOR(int16_t, 2))(0x2E02L, 0x754EL), 0x754EL), 0x754EL, 0x2E02L, 0x754EL, (VECTOR(int16_t, 2))(0x2E02L, 0x754EL), (VECTOR(int16_t, 2))(0x2E02L, 0x754EL), 0x2E02L, 0x754EL, 0x2E02L, 0x754EL);
    VECTOR(int16_t, 4) l_121 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L);
    int32_t **l_137 = &p_1440->g_6[3][0][2];
    int8_t l_168[8];
    VECTOR(uint64_t, 8) l_197 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xDDB5E15BD49030FCL), 0xDDB5E15BD49030FCL), 0xDDB5E15BD49030FCL, 18446744073709551615UL, 0xDDB5E15BD49030FCL);
    int16_t l_207 = (-7L);
    struct S1 l_208[9] = {{0xC696D4DFL},{0xC696D4DFL},{0xC696D4DFL},{0xC696D4DFL},{0xC696D4DFL},{0xC696D4DFL},{0xC696D4DFL},{0xC696D4DFL},{0xC696D4DFL}};
    struct S0 *l_209 = &p_1440->g_210;
    VECTOR(int16_t, 4) l_216 = (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 1L), 1L);
    VECTOR(int16_t, 8) l_217 = (VECTOR(int16_t, 8))(0x225BL, (VECTOR(int16_t, 4))(0x225BL, (VECTOR(int16_t, 2))(0x225BL, 1L), 1L), 1L, 0x225BL, 1L);
    int64_t *l_218 = (void*)0;
    int64_t *l_219 = (void*)0;
    int64_t *l_220 = (void*)0;
    int64_t *l_221 = (void*)0;
    int64_t *l_222[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint8_t *l_227 = &p_1440->g_228;
    int8_t *l_304[6][2] = {{&l_168[7],(void*)0},{&l_168[7],(void*)0},{&l_168[7],(void*)0},{&l_168[7],(void*)0},{&l_168[7],(void*)0},{&l_168[7],(void*)0}};
    uint32_t l_305 = 0x69C0ACD7L;
    uint32_t l_306 = 4294967293UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_77[i] = (-4L);
    for (i = 0; i < 8; i++)
        l_168[i] = 0x5AL;
    if ((safe_lshift_func_uint8_t_u_s(p_1440->g_20.f0, l_77[0])))
    { /* block id: 16 */
        return p_1440->g_51.s6;
    }
    else
    { /* block id: 18 */
        int16_t l_93 = 0x5C5DL;
        int32_t l_94 = 0x4E93F460L;
        uint32_t l_95[3][7] = {{0x0CD8B2F8L,5UL,5UL,0x0CD8B2F8L,0x0CD8B2F8L,5UL,5UL},{0x0CD8B2F8L,5UL,5UL,0x0CD8B2F8L,0x0CD8B2F8L,5UL,5UL},{0x0CD8B2F8L,5UL,5UL,0x0CD8B2F8L,0x0CD8B2F8L,5UL,5UL}};
        int32_t l_107 = (-1L);
        VECTOR(int32_t, 4) l_110 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x394F6C93L), 0x394F6C93L);
        int16_t *l_140 = (void*)0;
        int16_t *l_141 = (void*)0;
        int16_t *l_142[6] = {&l_93,&l_93,&l_93,&l_93,&l_93,&l_93};
        uint16_t *l_146 = (void*)0;
        uint16_t *l_147 = &p_1440->g_148;
        int32_t *l_154 = &l_109;
        int i, j;
        for (p_65 = 0; (p_65 < 2); p_65 = safe_add_func_int32_t_s_s(p_65, 4))
        { /* block id: 21 */
            int32_t l_90 = 1L;
            int32_t *l_91[5] = {&p_1440->g_2[3][5],&p_1440->g_2[3][5],&p_1440->g_2[3][5],&p_1440->g_2[3][5],&p_1440->g_2[3][5]};
            uint32_t l_112 = 0x8190269BL;
            int i;
            if ((atomic_inc(&p_1440->g_atomic_input[46 * get_linear_group_id() + 27]) == 5))
            { /* block id: 23 */
                int16_t l_80 = (-6L);
                int32_t l_81[3];
                int8_t l_82[1];
                int64_t l_83[4][5] = {{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}};
                int8_t l_84[2];
                int32_t l_85[2];
                int32_t l_86[8][2][10] = {{{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL},{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL}},{{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL},{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL}},{{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL},{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL}},{{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL},{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL}},{{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL},{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL}},{{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL},{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL}},{{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL},{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL}},{{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL},{0x79F6C923L,(-1L),0x3DFE816DL,(-1L),0x3DFE816DL,(-1L),0x79F6C923L,7L,0x0ED0E11BL,0x0ED0E11BL}}};
                uint64_t l_87 = 0x8C46E721FB129D73L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_81[i] = (-1L);
                for (i = 0; i < 1; i++)
                    l_82[i] = 0x71L;
                for (i = 0; i < 2; i++)
                    l_84[i] = 1L;
                for (i = 0; i < 2; i++)
                    l_85[i] = 0x341A2416L;
                ++l_87;
                unsigned int result = 0;
                result += l_80;
                int l_81_i0;
                for (l_81_i0 = 0; l_81_i0 < 3; l_81_i0++) {
                    result += l_81[l_81_i0];
                }
                int l_82_i0;
                for (l_82_i0 = 0; l_82_i0 < 1; l_82_i0++) {
                    result += l_82[l_82_i0];
                }
                int l_83_i0, l_83_i1;
                for (l_83_i0 = 0; l_83_i0 < 4; l_83_i0++) {
                    for (l_83_i1 = 0; l_83_i1 < 5; l_83_i1++) {
                        result += l_83[l_83_i0][l_83_i1];
                    }
                }
                int l_84_i0;
                for (l_84_i0 = 0; l_84_i0 < 2; l_84_i0++) {
                    result += l_84[l_84_i0];
                }
                int l_85_i0;
                for (l_85_i0 = 0; l_85_i0 < 2; l_85_i0++) {
                    result += l_85[l_85_i0];
                }
                int l_86_i0, l_86_i1, l_86_i2;
                for (l_86_i0 = 0; l_86_i0 < 8; l_86_i0++) {
                    for (l_86_i1 = 0; l_86_i1 < 2; l_86_i1++) {
                        for (l_86_i2 = 0; l_86_i2 < 10; l_86_i2++) {
                            result += l_86[l_86_i0][l_86_i1][l_86_i2];
                        }
                    }
                }
                result += l_87;
                atomic_add(&p_1440->g_special_values[46 * get_linear_group_id() + 27], result);
            }
            else
            { /* block id: 25 */
                (1 + 1);
            }
            ++l_95[1][6];
            for (l_93 = 1; (l_93 != 26); l_93++)
            { /* block id: 31 */
                int8_t l_100 = 1L;
                int32_t l_101 = 1L;
                int32_t l_102 = 0x660D347FL;
                int32_t l_103 = 0x53D223BFL;
                int32_t l_108 = 0L;
                int32_t l_111 = 0x5522D6D4L;
                int64_t l_115 = 0x004E31C676211E33L;
                --l_112;
                if (l_115)
                    break;
                return p_1440->g_2[6][2];
            }
        }
        (*l_154) ^= ((((VECTOR(int8_t, 4))(p_1440->g_116.yyyy)).x && (0x7CL | func_117((!(((*l_147) ^= ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 8))(3UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_1440->g_119.s76)))), 0x7ECAL, 0UL, l_77[0], 0x1270L, 1UL)).lo, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(65534UL, ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(int16_t, 16))((-1L), (-2L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(l_120.sd0)).xyxy, ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 4))(l_121.xxyy)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 4))(p_1440->g_122.s7340)).yywwzzwzwzzxyyyx, ((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 2))(0x5A3BL, (-1L))).xyyxyxxyyyxxxyxy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(0x5E42L, 0x2794L, 0x2B23L, 0x4BE0L)))).xwzzyywyxzzxyyyx)))))).sd9)))).yyxy)))))).even)).hi, 0L, (p_1440->g_145 = (safe_mod_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(func_133(&p_1440->g_2[3][2], l_137, p_67, p_1440), p_65)), ((p_1440->g_143 ^= ((safe_mul_func_uint16_t_u_u((p_65 != FAKE_DIVERGE(p_1440->group_1_offset, get_group_id(1), 10)), p_1440->g_7)) < 0x5C81AE9100010583L)) >= GROUP_DIVERGE(1, 1)))), p_1440->g_51.s4)), p_1440->g_144[4][5])), 0x4F54AD9CL))), 0L, p_1440->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1440->tid, 67))], 0x662CL, 0x1D4BL, 0x07A9L, 0x04C1L, p_1440->g_116.y, ((VECTOR(int16_t, 2))(0x569DL)), 0x753BL, 0x1365L)).lo, ((VECTOR(int16_t, 8))(0L))))).even, ((VECTOR(uint16_t, 4))(65533UL))))).yzywwwxw)).s42, ((VECTOR(uint16_t, 2))(1UL))))).odd, 65535UL, 0x2F5BL)).yzxzywzz)).even))).x) >= p_1440->g_144[1][7])), p_1440))) >= 0xCB30L);
        (*p_69) = (*l_154);
    }
    if (((*p_69) = (*p_69)))
    { /* block id: 49 */
        int32_t l_155 = 0x5F1167A4L;
        int32_t **l_165[2][8][1];
        VECTOR(uint64_t, 4) l_193 = (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 0UL), 0UL);
        uint64_t *l_194 = (void*)0;
        uint64_t *l_195 = (void*)0;
        uint64_t *l_196[6][9] = {{(void*)0,(void*)0,(void*)0,&p_1440->g_143,&p_1440->g_143,(void*)0,&p_1440->g_143,(void*)0,&p_1440->g_143},{(void*)0,(void*)0,(void*)0,&p_1440->g_143,&p_1440->g_143,(void*)0,&p_1440->g_143,(void*)0,&p_1440->g_143},{(void*)0,(void*)0,(void*)0,&p_1440->g_143,&p_1440->g_143,(void*)0,&p_1440->g_143,(void*)0,&p_1440->g_143},{(void*)0,(void*)0,(void*)0,&p_1440->g_143,&p_1440->g_143,(void*)0,&p_1440->g_143,(void*)0,&p_1440->g_143},{(void*)0,(void*)0,(void*)0,&p_1440->g_143,&p_1440->g_143,(void*)0,&p_1440->g_143,(void*)0,&p_1440->g_143},{(void*)0,(void*)0,(void*)0,&p_1440->g_143,&p_1440->g_143,(void*)0,&p_1440->g_143,(void*)0,&p_1440->g_143}};
        int16_t *l_198 = &l_77[2];
        VECTOR(uint64_t, 4) l_201 = (VECTOR(uint64_t, 4))(0x70FD25321BD9B326L, (VECTOR(uint64_t, 2))(0x70FD25321BD9B326L, 18446744073709551613UL), 18446744073709551613UL);
        int8_t l_206[5][9] = {{1L,0x2DL,0L,0x2DL,1L,1L,0x2DL,0L,0x2DL},{1L,0x2DL,0L,0x2DL,1L,1L,0x2DL,0L,0x2DL},{1L,0x2DL,0L,0x2DL,1L,1L,0x2DL,0L,0x2DL},{1L,0x2DL,0L,0x2DL,1L,1L,0x2DL,0L,0x2DL},{1L,0x2DL,0L,0x2DL,1L,1L,0x2DL,0L,0x2DL}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 8; j++)
            {
                for (k = 0; k < 1; k++)
                    l_165[i][j][k] = &p_1440->g_6[0][3][4];
            }
        }
        if (l_155)
        { /* block id: 50 */
            int32_t l_160 = 0x2A5F0051L;
            int32_t ***l_166 = &l_165[0][3][0];
            int32_t ***l_167 = &l_137;
            int32_t l_169 = 1L;
            uint32_t *l_170 = (void*)0;
            int32_t l_172 = 0x0952E1ABL;
            l_172 |= (safe_rshift_func_uint8_t_u_u(((p_1440->g_171 = (safe_rshift_func_uint8_t_u_u(((((l_160 < l_160) > (((l_160 , (safe_div_func_uint32_t_u_u(0xCC97913BL, ((safe_add_func_uint32_t_u_u(((&p_69 == ((*l_166) = l_165[0][3][0])) , (((*l_166) = &p_1440->g_6[1][1][0]) != ((*l_167) = &p_68))), ((VECTOR(int32_t, 16))(((p_1440->g_119.s3 , p_1440->g_116.y) != l_168[7]), ((VECTOR(int32_t, 4))(0L)), 1L, ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 4))(0x079E5195L)), 0x70758AC6L, 0L)).sb)) | p_1440->g_2[5][6])))) == l_169) && p_1440->g_53.z)) , p_65) && p_65), l_155))) <= l_104), p_65));
        }
        else
        { /* block id: 56 */
            volatile struct S0 *l_174 = &p_1440->g_173;
            (*l_174) = p_1440->g_173;
            (*p_69) &= ((-5L) || 18446744073709551615UL);
            if ((atomic_inc(&p_1440->g_atomic_input[46 * get_linear_group_id() + 21]) == 4))
            { /* block id: 60 */
                VECTOR(int32_t, 4) l_175 = (VECTOR(int32_t, 4))(0x6EBB9BF2L, (VECTOR(int32_t, 2))(0x6EBB9BF2L, 0x2A515023L), 0x2A515023L);
                uint32_t l_176 = 0xD2F89C14L;
                int32_t *l_179 = (void*)0;
                int32_t *l_180 = (void*)0;
                int32_t *l_181 = (void*)0;
                int i;
                ++l_176;
                l_181 = (l_180 = l_179);
                unsigned int result = 0;
                result += l_175.w;
                result += l_175.z;
                result += l_175.y;
                result += l_175.x;
                result += l_176;
                atomic_add(&p_1440->g_special_values[46 * get_linear_group_id() + 21], result);
            }
            else
            { /* block id: 64 */
                (1 + 1);
            }
        }
        l_207 ^= (((p_65 , ((safe_lshift_func_int8_t_s_s(p_1440->g_173.f0, (((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_1440->g_119.s1, (safe_add_func_int16_t_s_s(p_1440->g_143, (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 8))(p_1440->g_192.wwzyyywz)).s14))))).lo || p_65))))), (p_1440->g_119.s6 >= ((*l_198) = (0xF18198E80C9BE5D5L == (((VECTOR(uint64_t, 2))(0x40E685772B18EEE2L, 0x14262232ECD07D77L)).lo || ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(18446744073709551615UL, 18446744073709551609UL, ((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 2))(l_193.wx)), (uint64_t)(l_105 ^= p_65)))).yxxy, ((VECTOR(uint64_t, 8))(l_197.s15344621)).hi))), 18446744073709551615UL, 0x5BBA556991D4868CL)).even)).z)))))), (safe_rshift_func_int16_t_s_u(((((VECTOR(uint64_t, 8))(l_201.yxyxyzzw)).s0 || ((safe_mod_func_int64_t_s_s(((+((((safe_lshift_func_uint8_t_u_u(0UL, 5)) < (-2L)) == 0x65L) < p_1440->g_2[5][6])) || p_1440->g_2[5][6]), 0x702231ABC1FECEB4L)) < GROUP_DIVERGE(0, 1))) < l_206[0][0]), 6)))) && p_1440->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1440->tid, 67))]) >= p_65))) || 0x11FA8A99E674F9F1L)) == p_1440->g_20.f0) , (*p_69));
    }
    else
    { /* block id: 71 */
        (*p_69) = (5UL >= ((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x45933C5350917B79L, 0x20C1213BD95B1CF1L)).yyyxxyyy)).s1 , &p_1440->g_173) == (l_208[8] , l_209)));
        (*p_69) = (*p_69);
        (*l_137) = (*l_137);
    }
    (*p_69) = ((safe_lshift_func_int16_t_s_u(p_65, 6)) == (((p_1440->g_116.y ^= (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 2))((-1L), 0x03ADL)).xyxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 4))(p_1440->g_215.yyyx)).wyyyyxyxwyyxwyxx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_216.zzxwwwwzyxwywwyx)).s32)), 0L, 0x4E14L)).ywwwwxwxxxywwzyy, ((VECTOR(int16_t, 16))(l_217.s3544360202752726))))))).s4fa5, ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(1L, 5L, 1L, ((l_104 = l_168[7]) , ((((safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), (((safe_mod_func_uint8_t_u_u(((*l_227) = FAKE_DIVERGE(p_1440->global_2_offset, get_global_id(2), 10)), ((+(safe_add_func_uint8_t_u_u(((((safe_sub_func_uint64_t_u_u(((*p_69) | p_65), ((safe_div_func_uint8_t_u_u(p_1440->g_215.x, (p_1440->g_53.x &= (p_1440->g_235[4][4][1] == p_67)))) <= p_65))) & p_65) == 0x1AL) < p_65), p_1440->g_119.s2))) , 0x4CL))) || 0x8A3E8C22AD4DA4AEL) & l_305))) | p_1440->g_20.f0) , 0x8C0CL) == p_1440->g_210.f1)), ((VECTOR(int16_t, 2))(1L)), p_1440->g_240, p_1440->g_215.y, p_1440->g_148, 0x1A00L, (-1L), ((VECTOR(int16_t, 4))((-1L))), (-5L))).sd218, ((VECTOR(int16_t, 4))(0x2B45L)))))))))).y | p_1440->g_210.f3)) < l_306) >= p_65));
    p_1440->g_210 = (*l_209);
    return p_65;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1440->g_6
 */
int8_t  func_117(int32_t  p_118, struct S2 * p_1440)
{ /* block id: 42 */
    int32_t *l_149 = &p_1440->g_7;
    int32_t **l_151 = (void*)0;
    int32_t **l_152 = (void*)0;
    int32_t **l_153 = &p_1440->g_6[0][5][0];
    (*l_153) = l_149;
    return p_118;
}


/* ------------------------------------------ */
/* 
 * reads : p_1440->g_2
 * writes:
 */
int32_t  func_133(int32_t * p_134, int32_t ** p_135, int8_t * p_136, struct S2 * p_1440)
{ /* block id: 37 */
    return (*p_134);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[46];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 46; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[46];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 46; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[67];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 67; i++)
            l_comm_values[i] = 1;
    struct S2 c_1441;
    struct S2* p_1440 = &c_1441;
    struct S2 c_1442 = {
        {{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L}}, // p_1440->g_2
        0x6EC17E5CL, // p_1440->g_7
        {{{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7}},{{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7}},{{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7}},{{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7}},{{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7},{&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7,&p_1440->g_7}}}, // p_1440->g_6
        {1UL}, // p_1440->g_20
        (VECTOR(int8_t, 8))(0x67L, (VECTOR(int8_t, 4))(0x67L, (VECTOR(int8_t, 2))(0x67L, 0L), 0L), 0L, 0x67L, 0L), // p_1440->g_51
        (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x09L), 0x09L), // p_1440->g_53
        (VECTOR(int8_t, 2))((-1L), 0x67L), // p_1440->g_116
        (VECTOR(uint16_t, 8))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 65531UL), 65531UL), 65531UL, 65534UL, 65531UL), // p_1440->g_119
        (VECTOR(int16_t, 8))(0x51B7L, (VECTOR(int16_t, 4))(0x51B7L, (VECTOR(int16_t, 2))(0x51B7L, 0x24E8L), 0x24E8L), 0x24E8L, 0x51B7L, 0x24E8L), // p_1440->g_122
        0x4A21752400A8503DL, // p_1440->g_143
        {{7L,(-2L),0x5B775008L,0x5DD7FD48L,0x646BD1A6L,0x5DD7FD48L,0x5B775008L,(-2L),7L},{7L,(-2L),0x5B775008L,0x5DD7FD48L,0x646BD1A6L,0x5DD7FD48L,0x5B775008L,(-2L),7L},{7L,(-2L),0x5B775008L,0x5DD7FD48L,0x646BD1A6L,0x5DD7FD48L,0x5B775008L,(-2L),7L},{7L,(-2L),0x5B775008L,0x5DD7FD48L,0x646BD1A6L,0x5DD7FD48L,0x5B775008L,(-2L),7L},{7L,(-2L),0x5B775008L,0x5DD7FD48L,0x646BD1A6L,0x5DD7FD48L,0x5B775008L,(-2L),7L}}, // p_1440->g_144
        (-9L), // p_1440->g_145
        65535UL, // p_1440->g_148
        {{&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0]},{&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0]},{&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0]},{&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0]},{&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0]},{&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0],&p_1440->g_6[0][5][0]}}, // p_1440->g_150
        0UL, // p_1440->g_171
        {255UL,0x7FA5E293L,0x49664FB1L,0x54L}, // p_1440->g_173
        (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 18446744073709551615UL), 18446744073709551615UL), // p_1440->g_192
        {0x69L,-4L,0x29779F3CL,0x57L}, // p_1440->g_210
        (VECTOR(int16_t, 2))(1L, 3L), // p_1440->g_215
        8UL, // p_1440->g_228
        0x35L, // p_1440->g_236
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-9L)), (-9L)), // p_1440->g_237
        7L, // p_1440->g_238
        1L, // p_1440->g_239
        0L, // p_1440->g_240
        (-8L), // p_1440->g_241
        0x58L, // p_1440->g_242
        0x19L, // p_1440->g_243
        0x6EL, // p_1440->g_244
        0x35L, // p_1440->g_245
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x53L), 0x53L), 0x53L, 1L, 0x53L), // p_1440->g_246
        0x7EL, // p_1440->g_247
        (-10L), // p_1440->g_248
        1L, // p_1440->g_249
        0x70L, // p_1440->g_250
        0x30L, // p_1440->g_251
        0L, // p_1440->g_252
        0x72L, // p_1440->g_253
        1L, // p_1440->g_254
        0x36L, // p_1440->g_255
        0x32L, // p_1440->g_256
        0L, // p_1440->g_257
        0x42L, // p_1440->g_258
        (-3L), // p_1440->g_259
        (-1L), // p_1440->g_260
        (-10L), // p_1440->g_261
        {{0x4BL},{0x4BL},{0x4BL},{0x4BL}}, // p_1440->g_262
        2L, // p_1440->g_263
        {{(-5L),0x7EL,0x60L,1L,0x74L},{(-5L),0x7EL,0x60L,1L,0x74L},{(-5L),0x7EL,0x60L,1L,0x74L},{(-5L),0x7EL,0x60L,1L,0x74L},{(-5L),0x7EL,0x60L,1L,0x74L},{(-5L),0x7EL,0x60L,1L,0x74L},{(-5L),0x7EL,0x60L,1L,0x74L},{(-5L),0x7EL,0x60L,1L,0x74L},{(-5L),0x7EL,0x60L,1L,0x74L},{(-5L),0x7EL,0x60L,1L,0x74L}}, // p_1440->g_264
        (-9L), // p_1440->g_265
        (-6L), // p_1440->g_266
        0x41L, // p_1440->g_267
        0x02L, // p_1440->g_268
        0x0CL, // p_1440->g_269
        (-10L), // p_1440->g_270
        0x14L, // p_1440->g_271
        0x52L, // p_1440->g_272
        (-1L), // p_1440->g_273
        (-1L), // p_1440->g_274
        {{(-3L),0x3BL,0x3BL,(-3L),5L,(-1L),0x57L,0x19L,0L},{(-3L),0x3BL,0x3BL,(-3L),5L,(-1L),0x57L,0x19L,0L},{(-3L),0x3BL,0x3BL,(-3L),5L,(-1L),0x57L,0x19L,0L},{(-3L),0x3BL,0x3BL,(-3L),5L,(-1L),0x57L,0x19L,0L},{(-3L),0x3BL,0x3BL,(-3L),5L,(-1L),0x57L,0x19L,0L},{(-3L),0x3BL,0x3BL,(-3L),5L,(-1L),0x57L,0x19L,0L},{(-3L),0x3BL,0x3BL,(-3L),5L,(-1L),0x57L,0x19L,0L},{(-3L),0x3BL,0x3BL,(-3L),5L,(-1L),0x57L,0x19L,0L},{(-3L),0x3BL,0x3BL,(-3L),5L,(-1L),0x57L,0x19L,0L}}, // p_1440->g_275
        0L, // p_1440->g_276
        (-1L), // p_1440->g_277
        (-2L), // p_1440->g_278
        0x0FL, // p_1440->g_279
        8L, // p_1440->g_280
        1L, // p_1440->g_281
        (-9L), // p_1440->g_282
        0x7DL, // p_1440->g_283
        4L, // p_1440->g_284
        0x21L, // p_1440->g_285
        0x72L, // p_1440->g_286
        1L, // p_1440->g_287
        1L, // p_1440->g_288
        (-6L), // p_1440->g_289
        {0L}, // p_1440->g_290
        {1L,1L}, // p_1440->g_291
        0L, // p_1440->g_292
        0x6DL, // p_1440->g_293
        1L, // p_1440->g_294
        0x7BL, // p_1440->g_295
        (VECTOR(int8_t, 2))(0x46L, 4L), // p_1440->g_296
        (-7L), // p_1440->g_297
        {0x59L,0x36L,0x59L,0x59L,0x36L,0x59L,0x59L,0x36L,0x59L,0x59L}, // p_1440->g_298
        (VECTOR(int8_t, 8))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x35L), 0x35L), 0x35L, (-7L), 0x35L), // p_1440->g_299
        0L, // p_1440->g_300
        6L, // p_1440->g_301
        0x50L, // p_1440->g_302
        (-5L), // p_1440->g_303
        {{{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261}},{{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261}},{{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261}},{{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261}},{{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261}},{{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261}},{{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261}},{{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261}},{{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261},{(void*)0,&p_1440->g_261}}}, // p_1440->g_235
        (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0xD7C328C494CCD08AL), 0xD7C328C494CCD08AL), // p_1440->g_315
        0x438B6D6AL, // p_1440->g_317
        (VECTOR(uint8_t, 8))(0x0AL, (VECTOR(uint8_t, 4))(0x0AL, (VECTOR(uint8_t, 2))(0x0AL, 246UL), 246UL), 246UL, 0x0AL, 246UL), // p_1440->g_333
        (-6L), // p_1440->g_342
        &p_1440->g_342, // p_1440->g_341
        (VECTOR(uint64_t, 4))(0x0E4E1D57944C8F22L, (VECTOR(uint64_t, 2))(0x0E4E1D57944C8F22L, 0x8C950F7E01795FE3L), 0x8C950F7E01795FE3L), // p_1440->g_343
        0x8737L, // p_1440->g_346
        {{{&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346},{&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346},{&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346},{&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346}},{{&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346},{&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346},{&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346},{&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346}},{{&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346},{&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346},{&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346},{&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,(void*)0,(void*)0,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346,&p_1440->g_346}}}, // p_1440->g_345
        (-5L), // p_1440->g_348
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 6UL), 6UL), // p_1440->g_379
        (VECTOR(uint64_t, 2))(0UL, 18446744073709551609UL), // p_1440->g_384
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int64_t, 2))((-1L), 0L), (VECTOR(int64_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L), // p_1440->g_387
        (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x5A1C0EE63E62D634L), 0x5A1C0EE63E62D634L), 0x5A1C0EE63E62D634L, 1L, 0x5A1C0EE63E62D634L), // p_1440->g_388
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x1BL), 0x1BL), 0x1BL, 1L, 0x1BL, (VECTOR(int8_t, 2))(1L, 0x1BL), (VECTOR(int8_t, 2))(1L, 0x1BL), 1L, 0x1BL, 1L, 0x1BL), // p_1440->g_391
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 2L), 2L), 2L, 0L, 2L, (VECTOR(int8_t, 2))(0L, 2L), (VECTOR(int8_t, 2))(0L, 2L), 0L, 2L, 0L, 2L), // p_1440->g_392
        (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 1UL), 1UL), // p_1440->g_394
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x1679L), 0x1679L), 0x1679L, 1UL, 0x1679L, (VECTOR(uint16_t, 2))(1UL, 0x1679L), (VECTOR(uint16_t, 2))(1UL, 0x1679L), 1UL, 0x1679L, 1UL, 0x1679L), // p_1440->g_397
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 7L), 7L), // p_1440->g_409
        5L, // p_1440->g_423
        &p_1440->g_210, // p_1440->g_426
        {{&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210},{&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210},{&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210,&p_1440->g_210}}, // p_1440->g_472
        (VECTOR(uint16_t, 16))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 65526UL), 65526UL), 65526UL, 7UL, 65526UL, (VECTOR(uint16_t, 2))(7UL, 65526UL), (VECTOR(uint16_t, 2))(7UL, 65526UL), 7UL, 65526UL, 7UL, 65526UL), // p_1440->g_487
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 6UL), 6UL), // p_1440->g_489
        (VECTOR(uint32_t, 2))(0xD06E3CABL, 1UL), // p_1440->g_500
        (VECTOR(uint32_t, 16))(0x5F364F09L, (VECTOR(uint32_t, 4))(0x5F364F09L, (VECTOR(uint32_t, 2))(0x5F364F09L, 0xE65D76E7L), 0xE65D76E7L), 0xE65D76E7L, 0x5F364F09L, 0xE65D76E7L, (VECTOR(uint32_t, 2))(0x5F364F09L, 0xE65D76E7L), (VECTOR(uint32_t, 2))(0x5F364F09L, 0xE65D76E7L), 0x5F364F09L, 0xE65D76E7L, 0x5F364F09L, 0xE65D76E7L), // p_1440->g_512
        {0x0BL,-1L,0xD0BE629DL,1L}, // p_1440->g_515
        {{{255UL,-10L,0x8EC63F4DL,-1L},{0UL,0x48739C90L,0xC057098EL,-7L},{1UL,0x697AE72CL,0UL,0L},{0UL,1L,3UL,-6L},{0UL,0x48739C90L,0xC057098EL,-7L}},{{255UL,-10L,0x8EC63F4DL,-1L},{0UL,0x48739C90L,0xC057098EL,-7L},{1UL,0x697AE72CL,0UL,0L},{0UL,1L,3UL,-6L},{0UL,0x48739C90L,0xC057098EL,-7L}},{{255UL,-10L,0x8EC63F4DL,-1L},{0UL,0x48739C90L,0xC057098EL,-7L},{1UL,0x697AE72CL,0UL,0L},{0UL,1L,3UL,-6L},{0UL,0x48739C90L,0xC057098EL,-7L}},{{255UL,-10L,0x8EC63F4DL,-1L},{0UL,0x48739C90L,0xC057098EL,-7L},{1UL,0x697AE72CL,0UL,0L},{0UL,1L,3UL,-6L},{0UL,0x48739C90L,0xC057098EL,-7L}}}, // p_1440->g_517
        (void*)0, // p_1440->g_520
        &p_1440->g_520, // p_1440->g_519
        {250UL,5L,0UL,8L}, // p_1440->g_530
        (VECTOR(int32_t, 16))(0x18CE9ED9L, (VECTOR(int32_t, 4))(0x18CE9ED9L, (VECTOR(int32_t, 2))(0x18CE9ED9L, 0x25D23F22L), 0x25D23F22L), 0x25D23F22L, 0x18CE9ED9L, 0x25D23F22L, (VECTOR(int32_t, 2))(0x18CE9ED9L, 0x25D23F22L), (VECTOR(int32_t, 2))(0x18CE9ED9L, 0x25D23F22L), 0x18CE9ED9L, 0x25D23F22L, 0x18CE9ED9L, 0x25D23F22L), // p_1440->g_534
        {{{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L}},{{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L}},{{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L}},{{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L},{0x4E442C6E30C32DB8L,0x21E954C0FE5593B0L}}}, // p_1440->g_598
        {0x359E066EL,0x359E066EL,0x359E066EL,0x359E066EL,0x359E066EL,0x359E066EL,0x359E066EL}, // p_1440->g_610
        {{{1UL,0x167F2D53L,4294967288UL,0x36L},{0UL,0x1ADA8770L,0x16BA193CL,0L}},{{1UL,0x167F2D53L,4294967288UL,0x36L},{0UL,0x1ADA8770L,0x16BA193CL,0L}},{{1UL,0x167F2D53L,4294967288UL,0x36L},{0UL,0x1ADA8770L,0x16BA193CL,0L}},{{1UL,0x167F2D53L,4294967288UL,0x36L},{0UL,0x1ADA8770L,0x16BA193CL,0L}},{{1UL,0x167F2D53L,4294967288UL,0x36L},{0UL,0x1ADA8770L,0x16BA193CL,0L}},{{1UL,0x167F2D53L,4294967288UL,0x36L},{0UL,0x1ADA8770L,0x16BA193CL,0L}},{{1UL,0x167F2D53L,4294967288UL,0x36L},{0UL,0x1ADA8770L,0x16BA193CL,0L}},{{1UL,0x167F2D53L,4294967288UL,0x36L},{0UL,0x1ADA8770L,0x16BA193CL,0L}}}, // p_1440->g_692
        0UL, // p_1440->g_694
        &p_1440->g_2[4][5], // p_1440->g_702
        &p_1440->g_6[0][5][0], // p_1440->g_703
        0x96F9L, // p_1440->g_748
        {{0xC9629202L},{0xC9629202L},{0xC9629202L},{0xC9629202L},{0xC9629202L},{0xC9629202L},{0xC9629202L},{0xC9629202L},{0xC9629202L}}, // p_1440->g_755
        (void*)0, // p_1440->g_761
        (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x61L), 0x61L), // p_1440->g_786
        (VECTOR(int8_t, 16))(0x28L, (VECTOR(int8_t, 4))(0x28L, (VECTOR(int8_t, 2))(0x28L, 1L), 1L), 1L, 0x28L, 1L, (VECTOR(int8_t, 2))(0x28L, 1L), (VECTOR(int8_t, 2))(0x28L, 1L), 0x28L, 1L, 0x28L, 1L), // p_1440->g_788
        0x3185C4FC16E4D9F4L, // p_1440->g_797
        {0UL,-1L,0xCAA71D5CL,1L}, // p_1440->g_820
        &p_1440->g_515, // p_1440->g_821
        (VECTOR(int16_t, 2))(0x5586L, 0x70F0L), // p_1440->g_875
        (VECTOR(int32_t, 16))(0x369CC395L, (VECTOR(int32_t, 4))(0x369CC395L, (VECTOR(int32_t, 2))(0x369CC395L, 7L), 7L), 7L, 0x369CC395L, 7L, (VECTOR(int32_t, 2))(0x369CC395L, 7L), (VECTOR(int32_t, 2))(0x369CC395L, 7L), 0x369CC395L, 7L, 0x369CC395L, 7L), // p_1440->g_918
        (VECTOR(int32_t, 2))((-2L), 0x74DF431CL), // p_1440->g_919
        &p_1440->g_228, // p_1440->g_961
        &p_1440->g_961, // p_1440->g_960
        &p_1440->g_960, // p_1440->g_959
        0x2194B0E0F8A2470DL, // p_1440->g_967
        (VECTOR(uint8_t, 2))(0x8DL, 255UL), // p_1440->g_1003
        (VECTOR(uint32_t, 2))(4294967293UL, 0x9527C611L), // p_1440->g_1035
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x84F3L), 0x84F3L), 0x84F3L, 65535UL, 0x84F3L), // p_1440->g_1038
        {255UL,-1L,0x3FB12AAAL,-1L}, // p_1440->g_1040
        (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 0UL), 0UL), // p_1440->g_1047
        (VECTOR(uint8_t, 8))(0x91L, (VECTOR(uint8_t, 4))(0x91L, (VECTOR(uint8_t, 2))(0x91L, 1UL), 1UL), 1UL, 0x91L, 1UL), // p_1440->g_1049
        (VECTOR(uint8_t, 4))(0xC4L, (VECTOR(uint8_t, 2))(0xC4L, 0x02L), 0x02L), // p_1440->g_1053
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 2UL), 2UL), 2UL, 0UL, 2UL, (VECTOR(uint8_t, 2))(0UL, 2UL), (VECTOR(uint8_t, 2))(0UL, 2UL), 0UL, 2UL, 0UL, 2UL), // p_1440->g_1054
        (VECTOR(uint8_t, 8))(0xB9L, (VECTOR(uint8_t, 4))(0xB9L, (VECTOR(uint8_t, 2))(0xB9L, 0x7FL), 0x7FL), 0x7FL, 0xB9L, 0x7FL), // p_1440->g_1055
        (VECTOR(uint8_t, 2))(1UL, 255UL), // p_1440->g_1056
        18446744073709551611UL, // p_1440->g_1067
        (VECTOR(int32_t, 2))(0x7A634AB1L, 0x4D4A07DEL), // p_1440->g_1088
        {0xB0L,0x72073D1AL,4294967295UL,1L}, // p_1440->g_1100
        &p_1440->g_755[7], // p_1440->g_1101
        {1UL,0x17256D74L,4294967295UL,0x20L}, // p_1440->g_1102
        (VECTOR(int16_t, 8))(0x5681L, (VECTOR(int16_t, 4))(0x5681L, (VECTOR(int16_t, 2))(0x5681L, 0x1A52L), 0x1A52L), 0x1A52L, 0x5681L, 0x1A52L), // p_1440->g_1138
        (VECTOR(int32_t, 8))(0x701FD0D5L, (VECTOR(int32_t, 4))(0x701FD0D5L, (VECTOR(int32_t, 2))(0x701FD0D5L, (-1L)), (-1L)), (-1L), 0x701FD0D5L, (-1L)), // p_1440->g_1159
        (VECTOR(uint16_t, 16))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0x6EF6L), 0x6EF6L), 0x6EF6L, 65532UL, 0x6EF6L, (VECTOR(uint16_t, 2))(65532UL, 0x6EF6L), (VECTOR(uint16_t, 2))(65532UL, 0x6EF6L), 65532UL, 0x6EF6L, 65532UL, 0x6EF6L), // p_1440->g_1180
        &p_1440->g_472[2][3], // p_1440->g_1199
        0xADED5FD7L, // p_1440->g_1201
        (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xDEBAABF726FF7000L), 0xDEBAABF726FF7000L), // p_1440->g_1227
        (VECTOR(int8_t, 16))(0x41L, (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, 0x40L), 0x40L), 0x40L, 0x41L, 0x40L, (VECTOR(int8_t, 2))(0x41L, 0x40L), (VECTOR(int8_t, 2))(0x41L, 0x40L), 0x41L, 0x40L, 0x41L, 0x40L), // p_1440->g_1244
        (VECTOR(int16_t, 2))(0x51B6L, 5L), // p_1440->g_1297
        {255UL,1L,4294967288UL,1L}, // p_1440->g_1306
        {{0xA6L,0xA6L,0xA6L,0xA6L,0xA6L},{0xA6L,0xA6L,0xA6L,0xA6L,0xA6L},{0xA6L,0xA6L,0xA6L,0xA6L,0xA6L},{0xA6L,0xA6L,0xA6L,0xA6L,0xA6L},{0xA6L,0xA6L,0xA6L,0xA6L,0xA6L},{0xA6L,0xA6L,0xA6L,0xA6L,0xA6L}}, // p_1440->g_1337
        (VECTOR(int16_t, 8))(0x56B6L, (VECTOR(int16_t, 4))(0x56B6L, (VECTOR(int16_t, 2))(0x56B6L, 1L), 1L), 1L, 0x56B6L, 1L), // p_1440->g_1387
        {{255UL,0x56D89630L,0x9F9AD67FL,-1L},{255UL,0x56D89630L,0x9F9AD67FL,-1L},{255UL,0x56D89630L,0x9F9AD67FL,-1L},{255UL,0x56D89630L,0x9F9AD67FL,-1L},{255UL,0x56D89630L,0x9F9AD67FL,-1L},{255UL,0x56D89630L,0x9F9AD67FL,-1L},{255UL,0x56D89630L,0x9F9AD67FL,-1L},{255UL,0x56D89630L,0x9F9AD67FL,-1L},{255UL,0x56D89630L,0x9F9AD67FL,-1L},{255UL,0x56D89630L,0x9F9AD67FL,-1L}}, // p_1440->g_1391
        (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x6AL), 0x6AL), // p_1440->g_1394
        (VECTOR(int8_t, 16))(0x6EL, (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, 8L), 8L), 8L, 0x6EL, 8L, (VECTOR(int8_t, 2))(0x6EL, 8L), (VECTOR(int8_t, 2))(0x6EL, 8L), 0x6EL, 8L, 0x6EL, 8L), // p_1440->g_1395
        (-1L), // p_1440->g_1402
        (void*)0, // p_1440->g_1404
        (VECTOR(uint8_t, 8))(0x12L, (VECTOR(uint8_t, 4))(0x12L, (VECTOR(uint8_t, 2))(0x12L, 0xD9L), 0xD9L), 0xD9L, 0x12L, 0xD9L), // p_1440->g_1428
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x677B4EF6L), 0x677B4EF6L), // p_1440->g_1429
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), // p_1440->g_1430
        (VECTOR(int32_t, 2))((-1L), (-8L)), // p_1440->g_1432
        (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-1L)), (-1L)), (-1L), (-2L), (-1L), (VECTOR(int32_t, 2))((-2L), (-1L)), (VECTOR(int32_t, 2))((-2L), (-1L)), (-2L), (-1L), (-2L), (-1L)), // p_1440->g_1433
        (VECTOR(int32_t, 2))(1L, (-3L)), // p_1440->g_1434
        {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L}, // p_1440->g_1435
        0, // p_1440->v_collective
        sequence_input[get_global_id(0)], // p_1440->global_0_offset
        sequence_input[get_global_id(1)], // p_1440->global_1_offset
        sequence_input[get_global_id(2)], // p_1440->global_2_offset
        sequence_input[get_local_id(0)], // p_1440->local_0_offset
        sequence_input[get_local_id(1)], // p_1440->local_1_offset
        sequence_input[get_local_id(2)], // p_1440->local_2_offset
        sequence_input[get_group_id(0)], // p_1440->group_0_offset
        sequence_input[get_group_id(1)], // p_1440->group_1_offset
        sequence_input[get_group_id(2)], // p_1440->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 67)), permutations[0][get_linear_local_id()])), // p_1440->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1441 = c_1442;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1440);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1440->g_2[i][j], "p_1440->g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1440->g_7, "p_1440->g_7", print_hash_value);
    transparent_crc(p_1440->g_20.f0, "p_1440->g_20.f0", print_hash_value);
    transparent_crc(p_1440->g_51.s0, "p_1440->g_51.s0", print_hash_value);
    transparent_crc(p_1440->g_51.s1, "p_1440->g_51.s1", print_hash_value);
    transparent_crc(p_1440->g_51.s2, "p_1440->g_51.s2", print_hash_value);
    transparent_crc(p_1440->g_51.s3, "p_1440->g_51.s3", print_hash_value);
    transparent_crc(p_1440->g_51.s4, "p_1440->g_51.s4", print_hash_value);
    transparent_crc(p_1440->g_51.s5, "p_1440->g_51.s5", print_hash_value);
    transparent_crc(p_1440->g_51.s6, "p_1440->g_51.s6", print_hash_value);
    transparent_crc(p_1440->g_51.s7, "p_1440->g_51.s7", print_hash_value);
    transparent_crc(p_1440->g_53.x, "p_1440->g_53.x", print_hash_value);
    transparent_crc(p_1440->g_53.y, "p_1440->g_53.y", print_hash_value);
    transparent_crc(p_1440->g_53.z, "p_1440->g_53.z", print_hash_value);
    transparent_crc(p_1440->g_53.w, "p_1440->g_53.w", print_hash_value);
    transparent_crc(p_1440->g_116.x, "p_1440->g_116.x", print_hash_value);
    transparent_crc(p_1440->g_116.y, "p_1440->g_116.y", print_hash_value);
    transparent_crc(p_1440->g_119.s0, "p_1440->g_119.s0", print_hash_value);
    transparent_crc(p_1440->g_119.s1, "p_1440->g_119.s1", print_hash_value);
    transparent_crc(p_1440->g_119.s2, "p_1440->g_119.s2", print_hash_value);
    transparent_crc(p_1440->g_119.s3, "p_1440->g_119.s3", print_hash_value);
    transparent_crc(p_1440->g_119.s4, "p_1440->g_119.s4", print_hash_value);
    transparent_crc(p_1440->g_119.s5, "p_1440->g_119.s5", print_hash_value);
    transparent_crc(p_1440->g_119.s6, "p_1440->g_119.s6", print_hash_value);
    transparent_crc(p_1440->g_119.s7, "p_1440->g_119.s7", print_hash_value);
    transparent_crc(p_1440->g_122.s0, "p_1440->g_122.s0", print_hash_value);
    transparent_crc(p_1440->g_122.s1, "p_1440->g_122.s1", print_hash_value);
    transparent_crc(p_1440->g_122.s2, "p_1440->g_122.s2", print_hash_value);
    transparent_crc(p_1440->g_122.s3, "p_1440->g_122.s3", print_hash_value);
    transparent_crc(p_1440->g_122.s4, "p_1440->g_122.s4", print_hash_value);
    transparent_crc(p_1440->g_122.s5, "p_1440->g_122.s5", print_hash_value);
    transparent_crc(p_1440->g_122.s6, "p_1440->g_122.s6", print_hash_value);
    transparent_crc(p_1440->g_122.s7, "p_1440->g_122.s7", print_hash_value);
    transparent_crc(p_1440->g_143, "p_1440->g_143", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1440->g_144[i][j], "p_1440->g_144[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1440->g_145, "p_1440->g_145", print_hash_value);
    transparent_crc(p_1440->g_148, "p_1440->g_148", print_hash_value);
    transparent_crc(p_1440->g_171, "p_1440->g_171", print_hash_value);
    transparent_crc(p_1440->g_173.f0, "p_1440->g_173.f0", print_hash_value);
    transparent_crc(p_1440->g_173.f1, "p_1440->g_173.f1", print_hash_value);
    transparent_crc(p_1440->g_173.f2, "p_1440->g_173.f2", print_hash_value);
    transparent_crc(p_1440->g_173.f3, "p_1440->g_173.f3", print_hash_value);
    transparent_crc(p_1440->g_192.x, "p_1440->g_192.x", print_hash_value);
    transparent_crc(p_1440->g_192.y, "p_1440->g_192.y", print_hash_value);
    transparent_crc(p_1440->g_192.z, "p_1440->g_192.z", print_hash_value);
    transparent_crc(p_1440->g_192.w, "p_1440->g_192.w", print_hash_value);
    transparent_crc(p_1440->g_210.f0, "p_1440->g_210.f0", print_hash_value);
    transparent_crc(p_1440->g_210.f1, "p_1440->g_210.f1", print_hash_value);
    transparent_crc(p_1440->g_210.f2, "p_1440->g_210.f2", print_hash_value);
    transparent_crc(p_1440->g_210.f3, "p_1440->g_210.f3", print_hash_value);
    transparent_crc(p_1440->g_215.x, "p_1440->g_215.x", print_hash_value);
    transparent_crc(p_1440->g_215.y, "p_1440->g_215.y", print_hash_value);
    transparent_crc(p_1440->g_228, "p_1440->g_228", print_hash_value);
    transparent_crc(p_1440->g_236, "p_1440->g_236", print_hash_value);
    transparent_crc(p_1440->g_237.x, "p_1440->g_237.x", print_hash_value);
    transparent_crc(p_1440->g_237.y, "p_1440->g_237.y", print_hash_value);
    transparent_crc(p_1440->g_237.z, "p_1440->g_237.z", print_hash_value);
    transparent_crc(p_1440->g_237.w, "p_1440->g_237.w", print_hash_value);
    transparent_crc(p_1440->g_238, "p_1440->g_238", print_hash_value);
    transparent_crc(p_1440->g_239, "p_1440->g_239", print_hash_value);
    transparent_crc(p_1440->g_240, "p_1440->g_240", print_hash_value);
    transparent_crc(p_1440->g_241, "p_1440->g_241", print_hash_value);
    transparent_crc(p_1440->g_242, "p_1440->g_242", print_hash_value);
    transparent_crc(p_1440->g_243, "p_1440->g_243", print_hash_value);
    transparent_crc(p_1440->g_244, "p_1440->g_244", print_hash_value);
    transparent_crc(p_1440->g_245, "p_1440->g_245", print_hash_value);
    transparent_crc(p_1440->g_246.s0, "p_1440->g_246.s0", print_hash_value);
    transparent_crc(p_1440->g_246.s1, "p_1440->g_246.s1", print_hash_value);
    transparent_crc(p_1440->g_246.s2, "p_1440->g_246.s2", print_hash_value);
    transparent_crc(p_1440->g_246.s3, "p_1440->g_246.s3", print_hash_value);
    transparent_crc(p_1440->g_246.s4, "p_1440->g_246.s4", print_hash_value);
    transparent_crc(p_1440->g_246.s5, "p_1440->g_246.s5", print_hash_value);
    transparent_crc(p_1440->g_246.s6, "p_1440->g_246.s6", print_hash_value);
    transparent_crc(p_1440->g_246.s7, "p_1440->g_246.s7", print_hash_value);
    transparent_crc(p_1440->g_247, "p_1440->g_247", print_hash_value);
    transparent_crc(p_1440->g_248, "p_1440->g_248", print_hash_value);
    transparent_crc(p_1440->g_249, "p_1440->g_249", print_hash_value);
    transparent_crc(p_1440->g_250, "p_1440->g_250", print_hash_value);
    transparent_crc(p_1440->g_251, "p_1440->g_251", print_hash_value);
    transparent_crc(p_1440->g_252, "p_1440->g_252", print_hash_value);
    transparent_crc(p_1440->g_253, "p_1440->g_253", print_hash_value);
    transparent_crc(p_1440->g_254, "p_1440->g_254", print_hash_value);
    transparent_crc(p_1440->g_255, "p_1440->g_255", print_hash_value);
    transparent_crc(p_1440->g_256, "p_1440->g_256", print_hash_value);
    transparent_crc(p_1440->g_257, "p_1440->g_257", print_hash_value);
    transparent_crc(p_1440->g_258, "p_1440->g_258", print_hash_value);
    transparent_crc(p_1440->g_259, "p_1440->g_259", print_hash_value);
    transparent_crc(p_1440->g_260, "p_1440->g_260", print_hash_value);
    transparent_crc(p_1440->g_261, "p_1440->g_261", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1440->g_262[i][j], "p_1440->g_262[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1440->g_263, "p_1440->g_263", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1440->g_264[i][j], "p_1440->g_264[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1440->g_265, "p_1440->g_265", print_hash_value);
    transparent_crc(p_1440->g_266, "p_1440->g_266", print_hash_value);
    transparent_crc(p_1440->g_267, "p_1440->g_267", print_hash_value);
    transparent_crc(p_1440->g_268, "p_1440->g_268", print_hash_value);
    transparent_crc(p_1440->g_269, "p_1440->g_269", print_hash_value);
    transparent_crc(p_1440->g_270, "p_1440->g_270", print_hash_value);
    transparent_crc(p_1440->g_271, "p_1440->g_271", print_hash_value);
    transparent_crc(p_1440->g_272, "p_1440->g_272", print_hash_value);
    transparent_crc(p_1440->g_273, "p_1440->g_273", print_hash_value);
    transparent_crc(p_1440->g_274, "p_1440->g_274", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1440->g_275[i][j], "p_1440->g_275[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1440->g_276, "p_1440->g_276", print_hash_value);
    transparent_crc(p_1440->g_277, "p_1440->g_277", print_hash_value);
    transparent_crc(p_1440->g_278, "p_1440->g_278", print_hash_value);
    transparent_crc(p_1440->g_279, "p_1440->g_279", print_hash_value);
    transparent_crc(p_1440->g_280, "p_1440->g_280", print_hash_value);
    transparent_crc(p_1440->g_281, "p_1440->g_281", print_hash_value);
    transparent_crc(p_1440->g_282, "p_1440->g_282", print_hash_value);
    transparent_crc(p_1440->g_283, "p_1440->g_283", print_hash_value);
    transparent_crc(p_1440->g_284, "p_1440->g_284", print_hash_value);
    transparent_crc(p_1440->g_285, "p_1440->g_285", print_hash_value);
    transparent_crc(p_1440->g_286, "p_1440->g_286", print_hash_value);
    transparent_crc(p_1440->g_287, "p_1440->g_287", print_hash_value);
    transparent_crc(p_1440->g_288, "p_1440->g_288", print_hash_value);
    transparent_crc(p_1440->g_289, "p_1440->g_289", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1440->g_290[i], "p_1440->g_290[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1440->g_291[i], "p_1440->g_291[i]", print_hash_value);

    }
    transparent_crc(p_1440->g_292, "p_1440->g_292", print_hash_value);
    transparent_crc(p_1440->g_293, "p_1440->g_293", print_hash_value);
    transparent_crc(p_1440->g_294, "p_1440->g_294", print_hash_value);
    transparent_crc(p_1440->g_295, "p_1440->g_295", print_hash_value);
    transparent_crc(p_1440->g_296.x, "p_1440->g_296.x", print_hash_value);
    transparent_crc(p_1440->g_296.y, "p_1440->g_296.y", print_hash_value);
    transparent_crc(p_1440->g_297, "p_1440->g_297", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1440->g_298[i], "p_1440->g_298[i]", print_hash_value);

    }
    transparent_crc(p_1440->g_299.s0, "p_1440->g_299.s0", print_hash_value);
    transparent_crc(p_1440->g_299.s1, "p_1440->g_299.s1", print_hash_value);
    transparent_crc(p_1440->g_299.s2, "p_1440->g_299.s2", print_hash_value);
    transparent_crc(p_1440->g_299.s3, "p_1440->g_299.s3", print_hash_value);
    transparent_crc(p_1440->g_299.s4, "p_1440->g_299.s4", print_hash_value);
    transparent_crc(p_1440->g_299.s5, "p_1440->g_299.s5", print_hash_value);
    transparent_crc(p_1440->g_299.s6, "p_1440->g_299.s6", print_hash_value);
    transparent_crc(p_1440->g_299.s7, "p_1440->g_299.s7", print_hash_value);
    transparent_crc(p_1440->g_300, "p_1440->g_300", print_hash_value);
    transparent_crc(p_1440->g_301, "p_1440->g_301", print_hash_value);
    transparent_crc(p_1440->g_302, "p_1440->g_302", print_hash_value);
    transparent_crc(p_1440->g_303, "p_1440->g_303", print_hash_value);
    transparent_crc(p_1440->g_315.x, "p_1440->g_315.x", print_hash_value);
    transparent_crc(p_1440->g_315.y, "p_1440->g_315.y", print_hash_value);
    transparent_crc(p_1440->g_315.z, "p_1440->g_315.z", print_hash_value);
    transparent_crc(p_1440->g_315.w, "p_1440->g_315.w", print_hash_value);
    transparent_crc(p_1440->g_317, "p_1440->g_317", print_hash_value);
    transparent_crc(p_1440->g_333.s0, "p_1440->g_333.s0", print_hash_value);
    transparent_crc(p_1440->g_333.s1, "p_1440->g_333.s1", print_hash_value);
    transparent_crc(p_1440->g_333.s2, "p_1440->g_333.s2", print_hash_value);
    transparent_crc(p_1440->g_333.s3, "p_1440->g_333.s3", print_hash_value);
    transparent_crc(p_1440->g_333.s4, "p_1440->g_333.s4", print_hash_value);
    transparent_crc(p_1440->g_333.s5, "p_1440->g_333.s5", print_hash_value);
    transparent_crc(p_1440->g_333.s6, "p_1440->g_333.s6", print_hash_value);
    transparent_crc(p_1440->g_333.s7, "p_1440->g_333.s7", print_hash_value);
    transparent_crc(p_1440->g_342, "p_1440->g_342", print_hash_value);
    transparent_crc(p_1440->g_343.x, "p_1440->g_343.x", print_hash_value);
    transparent_crc(p_1440->g_343.y, "p_1440->g_343.y", print_hash_value);
    transparent_crc(p_1440->g_343.z, "p_1440->g_343.z", print_hash_value);
    transparent_crc(p_1440->g_343.w, "p_1440->g_343.w", print_hash_value);
    transparent_crc(p_1440->g_346, "p_1440->g_346", print_hash_value);
    transparent_crc(p_1440->g_348, "p_1440->g_348", print_hash_value);
    transparent_crc(p_1440->g_379.x, "p_1440->g_379.x", print_hash_value);
    transparent_crc(p_1440->g_379.y, "p_1440->g_379.y", print_hash_value);
    transparent_crc(p_1440->g_379.z, "p_1440->g_379.z", print_hash_value);
    transparent_crc(p_1440->g_379.w, "p_1440->g_379.w", print_hash_value);
    transparent_crc(p_1440->g_384.x, "p_1440->g_384.x", print_hash_value);
    transparent_crc(p_1440->g_384.y, "p_1440->g_384.y", print_hash_value);
    transparent_crc(p_1440->g_387.s0, "p_1440->g_387.s0", print_hash_value);
    transparent_crc(p_1440->g_387.s1, "p_1440->g_387.s1", print_hash_value);
    transparent_crc(p_1440->g_387.s2, "p_1440->g_387.s2", print_hash_value);
    transparent_crc(p_1440->g_387.s3, "p_1440->g_387.s3", print_hash_value);
    transparent_crc(p_1440->g_387.s4, "p_1440->g_387.s4", print_hash_value);
    transparent_crc(p_1440->g_387.s5, "p_1440->g_387.s5", print_hash_value);
    transparent_crc(p_1440->g_387.s6, "p_1440->g_387.s6", print_hash_value);
    transparent_crc(p_1440->g_387.s7, "p_1440->g_387.s7", print_hash_value);
    transparent_crc(p_1440->g_387.s8, "p_1440->g_387.s8", print_hash_value);
    transparent_crc(p_1440->g_387.s9, "p_1440->g_387.s9", print_hash_value);
    transparent_crc(p_1440->g_387.sa, "p_1440->g_387.sa", print_hash_value);
    transparent_crc(p_1440->g_387.sb, "p_1440->g_387.sb", print_hash_value);
    transparent_crc(p_1440->g_387.sc, "p_1440->g_387.sc", print_hash_value);
    transparent_crc(p_1440->g_387.sd, "p_1440->g_387.sd", print_hash_value);
    transparent_crc(p_1440->g_387.se, "p_1440->g_387.se", print_hash_value);
    transparent_crc(p_1440->g_387.sf, "p_1440->g_387.sf", print_hash_value);
    transparent_crc(p_1440->g_388.s0, "p_1440->g_388.s0", print_hash_value);
    transparent_crc(p_1440->g_388.s1, "p_1440->g_388.s1", print_hash_value);
    transparent_crc(p_1440->g_388.s2, "p_1440->g_388.s2", print_hash_value);
    transparent_crc(p_1440->g_388.s3, "p_1440->g_388.s3", print_hash_value);
    transparent_crc(p_1440->g_388.s4, "p_1440->g_388.s4", print_hash_value);
    transparent_crc(p_1440->g_388.s5, "p_1440->g_388.s5", print_hash_value);
    transparent_crc(p_1440->g_388.s6, "p_1440->g_388.s6", print_hash_value);
    transparent_crc(p_1440->g_388.s7, "p_1440->g_388.s7", print_hash_value);
    transparent_crc(p_1440->g_391.s0, "p_1440->g_391.s0", print_hash_value);
    transparent_crc(p_1440->g_391.s1, "p_1440->g_391.s1", print_hash_value);
    transparent_crc(p_1440->g_391.s2, "p_1440->g_391.s2", print_hash_value);
    transparent_crc(p_1440->g_391.s3, "p_1440->g_391.s3", print_hash_value);
    transparent_crc(p_1440->g_391.s4, "p_1440->g_391.s4", print_hash_value);
    transparent_crc(p_1440->g_391.s5, "p_1440->g_391.s5", print_hash_value);
    transparent_crc(p_1440->g_391.s6, "p_1440->g_391.s6", print_hash_value);
    transparent_crc(p_1440->g_391.s7, "p_1440->g_391.s7", print_hash_value);
    transparent_crc(p_1440->g_391.s8, "p_1440->g_391.s8", print_hash_value);
    transparent_crc(p_1440->g_391.s9, "p_1440->g_391.s9", print_hash_value);
    transparent_crc(p_1440->g_391.sa, "p_1440->g_391.sa", print_hash_value);
    transparent_crc(p_1440->g_391.sb, "p_1440->g_391.sb", print_hash_value);
    transparent_crc(p_1440->g_391.sc, "p_1440->g_391.sc", print_hash_value);
    transparent_crc(p_1440->g_391.sd, "p_1440->g_391.sd", print_hash_value);
    transparent_crc(p_1440->g_391.se, "p_1440->g_391.se", print_hash_value);
    transparent_crc(p_1440->g_391.sf, "p_1440->g_391.sf", print_hash_value);
    transparent_crc(p_1440->g_392.s0, "p_1440->g_392.s0", print_hash_value);
    transparent_crc(p_1440->g_392.s1, "p_1440->g_392.s1", print_hash_value);
    transparent_crc(p_1440->g_392.s2, "p_1440->g_392.s2", print_hash_value);
    transparent_crc(p_1440->g_392.s3, "p_1440->g_392.s3", print_hash_value);
    transparent_crc(p_1440->g_392.s4, "p_1440->g_392.s4", print_hash_value);
    transparent_crc(p_1440->g_392.s5, "p_1440->g_392.s5", print_hash_value);
    transparent_crc(p_1440->g_392.s6, "p_1440->g_392.s6", print_hash_value);
    transparent_crc(p_1440->g_392.s7, "p_1440->g_392.s7", print_hash_value);
    transparent_crc(p_1440->g_392.s8, "p_1440->g_392.s8", print_hash_value);
    transparent_crc(p_1440->g_392.s9, "p_1440->g_392.s9", print_hash_value);
    transparent_crc(p_1440->g_392.sa, "p_1440->g_392.sa", print_hash_value);
    transparent_crc(p_1440->g_392.sb, "p_1440->g_392.sb", print_hash_value);
    transparent_crc(p_1440->g_392.sc, "p_1440->g_392.sc", print_hash_value);
    transparent_crc(p_1440->g_392.sd, "p_1440->g_392.sd", print_hash_value);
    transparent_crc(p_1440->g_392.se, "p_1440->g_392.se", print_hash_value);
    transparent_crc(p_1440->g_392.sf, "p_1440->g_392.sf", print_hash_value);
    transparent_crc(p_1440->g_394.x, "p_1440->g_394.x", print_hash_value);
    transparent_crc(p_1440->g_394.y, "p_1440->g_394.y", print_hash_value);
    transparent_crc(p_1440->g_394.z, "p_1440->g_394.z", print_hash_value);
    transparent_crc(p_1440->g_394.w, "p_1440->g_394.w", print_hash_value);
    transparent_crc(p_1440->g_397.s0, "p_1440->g_397.s0", print_hash_value);
    transparent_crc(p_1440->g_397.s1, "p_1440->g_397.s1", print_hash_value);
    transparent_crc(p_1440->g_397.s2, "p_1440->g_397.s2", print_hash_value);
    transparent_crc(p_1440->g_397.s3, "p_1440->g_397.s3", print_hash_value);
    transparent_crc(p_1440->g_397.s4, "p_1440->g_397.s4", print_hash_value);
    transparent_crc(p_1440->g_397.s5, "p_1440->g_397.s5", print_hash_value);
    transparent_crc(p_1440->g_397.s6, "p_1440->g_397.s6", print_hash_value);
    transparent_crc(p_1440->g_397.s7, "p_1440->g_397.s7", print_hash_value);
    transparent_crc(p_1440->g_397.s8, "p_1440->g_397.s8", print_hash_value);
    transparent_crc(p_1440->g_397.s9, "p_1440->g_397.s9", print_hash_value);
    transparent_crc(p_1440->g_397.sa, "p_1440->g_397.sa", print_hash_value);
    transparent_crc(p_1440->g_397.sb, "p_1440->g_397.sb", print_hash_value);
    transparent_crc(p_1440->g_397.sc, "p_1440->g_397.sc", print_hash_value);
    transparent_crc(p_1440->g_397.sd, "p_1440->g_397.sd", print_hash_value);
    transparent_crc(p_1440->g_397.se, "p_1440->g_397.se", print_hash_value);
    transparent_crc(p_1440->g_397.sf, "p_1440->g_397.sf", print_hash_value);
    transparent_crc(p_1440->g_409.x, "p_1440->g_409.x", print_hash_value);
    transparent_crc(p_1440->g_409.y, "p_1440->g_409.y", print_hash_value);
    transparent_crc(p_1440->g_409.z, "p_1440->g_409.z", print_hash_value);
    transparent_crc(p_1440->g_409.w, "p_1440->g_409.w", print_hash_value);
    transparent_crc(p_1440->g_423, "p_1440->g_423", print_hash_value);
    transparent_crc(p_1440->g_487.s0, "p_1440->g_487.s0", print_hash_value);
    transparent_crc(p_1440->g_487.s1, "p_1440->g_487.s1", print_hash_value);
    transparent_crc(p_1440->g_487.s2, "p_1440->g_487.s2", print_hash_value);
    transparent_crc(p_1440->g_487.s3, "p_1440->g_487.s3", print_hash_value);
    transparent_crc(p_1440->g_487.s4, "p_1440->g_487.s4", print_hash_value);
    transparent_crc(p_1440->g_487.s5, "p_1440->g_487.s5", print_hash_value);
    transparent_crc(p_1440->g_487.s6, "p_1440->g_487.s6", print_hash_value);
    transparent_crc(p_1440->g_487.s7, "p_1440->g_487.s7", print_hash_value);
    transparent_crc(p_1440->g_487.s8, "p_1440->g_487.s8", print_hash_value);
    transparent_crc(p_1440->g_487.s9, "p_1440->g_487.s9", print_hash_value);
    transparent_crc(p_1440->g_487.sa, "p_1440->g_487.sa", print_hash_value);
    transparent_crc(p_1440->g_487.sb, "p_1440->g_487.sb", print_hash_value);
    transparent_crc(p_1440->g_487.sc, "p_1440->g_487.sc", print_hash_value);
    transparent_crc(p_1440->g_487.sd, "p_1440->g_487.sd", print_hash_value);
    transparent_crc(p_1440->g_487.se, "p_1440->g_487.se", print_hash_value);
    transparent_crc(p_1440->g_487.sf, "p_1440->g_487.sf", print_hash_value);
    transparent_crc(p_1440->g_489.x, "p_1440->g_489.x", print_hash_value);
    transparent_crc(p_1440->g_489.y, "p_1440->g_489.y", print_hash_value);
    transparent_crc(p_1440->g_489.z, "p_1440->g_489.z", print_hash_value);
    transparent_crc(p_1440->g_489.w, "p_1440->g_489.w", print_hash_value);
    transparent_crc(p_1440->g_500.x, "p_1440->g_500.x", print_hash_value);
    transparent_crc(p_1440->g_500.y, "p_1440->g_500.y", print_hash_value);
    transparent_crc(p_1440->g_512.s0, "p_1440->g_512.s0", print_hash_value);
    transparent_crc(p_1440->g_512.s1, "p_1440->g_512.s1", print_hash_value);
    transparent_crc(p_1440->g_512.s2, "p_1440->g_512.s2", print_hash_value);
    transparent_crc(p_1440->g_512.s3, "p_1440->g_512.s3", print_hash_value);
    transparent_crc(p_1440->g_512.s4, "p_1440->g_512.s4", print_hash_value);
    transparent_crc(p_1440->g_512.s5, "p_1440->g_512.s5", print_hash_value);
    transparent_crc(p_1440->g_512.s6, "p_1440->g_512.s6", print_hash_value);
    transparent_crc(p_1440->g_512.s7, "p_1440->g_512.s7", print_hash_value);
    transparent_crc(p_1440->g_512.s8, "p_1440->g_512.s8", print_hash_value);
    transparent_crc(p_1440->g_512.s9, "p_1440->g_512.s9", print_hash_value);
    transparent_crc(p_1440->g_512.sa, "p_1440->g_512.sa", print_hash_value);
    transparent_crc(p_1440->g_512.sb, "p_1440->g_512.sb", print_hash_value);
    transparent_crc(p_1440->g_512.sc, "p_1440->g_512.sc", print_hash_value);
    transparent_crc(p_1440->g_512.sd, "p_1440->g_512.sd", print_hash_value);
    transparent_crc(p_1440->g_512.se, "p_1440->g_512.se", print_hash_value);
    transparent_crc(p_1440->g_512.sf, "p_1440->g_512.sf", print_hash_value);
    transparent_crc(p_1440->g_515.f0, "p_1440->g_515.f0", print_hash_value);
    transparent_crc(p_1440->g_515.f1, "p_1440->g_515.f1", print_hash_value);
    transparent_crc(p_1440->g_515.f2, "p_1440->g_515.f2", print_hash_value);
    transparent_crc(p_1440->g_515.f3, "p_1440->g_515.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1440->g_517[i][j].f0, "p_1440->g_517[i][j].f0", print_hash_value);
            transparent_crc(p_1440->g_517[i][j].f1, "p_1440->g_517[i][j].f1", print_hash_value);
            transparent_crc(p_1440->g_517[i][j].f2, "p_1440->g_517[i][j].f2", print_hash_value);
            transparent_crc(p_1440->g_517[i][j].f3, "p_1440->g_517[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(p_1440->g_530.f0, "p_1440->g_530.f0", print_hash_value);
    transparent_crc(p_1440->g_530.f1, "p_1440->g_530.f1", print_hash_value);
    transparent_crc(p_1440->g_530.f2, "p_1440->g_530.f2", print_hash_value);
    transparent_crc(p_1440->g_530.f3, "p_1440->g_530.f3", print_hash_value);
    transparent_crc(p_1440->g_534.s0, "p_1440->g_534.s0", print_hash_value);
    transparent_crc(p_1440->g_534.s1, "p_1440->g_534.s1", print_hash_value);
    transparent_crc(p_1440->g_534.s2, "p_1440->g_534.s2", print_hash_value);
    transparent_crc(p_1440->g_534.s3, "p_1440->g_534.s3", print_hash_value);
    transparent_crc(p_1440->g_534.s4, "p_1440->g_534.s4", print_hash_value);
    transparent_crc(p_1440->g_534.s5, "p_1440->g_534.s5", print_hash_value);
    transparent_crc(p_1440->g_534.s6, "p_1440->g_534.s6", print_hash_value);
    transparent_crc(p_1440->g_534.s7, "p_1440->g_534.s7", print_hash_value);
    transparent_crc(p_1440->g_534.s8, "p_1440->g_534.s8", print_hash_value);
    transparent_crc(p_1440->g_534.s9, "p_1440->g_534.s9", print_hash_value);
    transparent_crc(p_1440->g_534.sa, "p_1440->g_534.sa", print_hash_value);
    transparent_crc(p_1440->g_534.sb, "p_1440->g_534.sb", print_hash_value);
    transparent_crc(p_1440->g_534.sc, "p_1440->g_534.sc", print_hash_value);
    transparent_crc(p_1440->g_534.sd, "p_1440->g_534.sd", print_hash_value);
    transparent_crc(p_1440->g_534.se, "p_1440->g_534.se", print_hash_value);
    transparent_crc(p_1440->g_534.sf, "p_1440->g_534.sf", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1440->g_598[i][j][k], "p_1440->g_598[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1440->g_610[i], "p_1440->g_610[i]", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1440->g_692[i][j].f0, "p_1440->g_692[i][j].f0", print_hash_value);
            transparent_crc(p_1440->g_692[i][j].f1, "p_1440->g_692[i][j].f1", print_hash_value);
            transparent_crc(p_1440->g_692[i][j].f2, "p_1440->g_692[i][j].f2", print_hash_value);
            transparent_crc(p_1440->g_692[i][j].f3, "p_1440->g_692[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(p_1440->g_694, "p_1440->g_694", print_hash_value);
    transparent_crc(p_1440->g_748, "p_1440->g_748", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1440->g_755[i].f0, "p_1440->g_755[i].f0", print_hash_value);

    }
    transparent_crc(p_1440->g_786.x, "p_1440->g_786.x", print_hash_value);
    transparent_crc(p_1440->g_786.y, "p_1440->g_786.y", print_hash_value);
    transparent_crc(p_1440->g_786.z, "p_1440->g_786.z", print_hash_value);
    transparent_crc(p_1440->g_786.w, "p_1440->g_786.w", print_hash_value);
    transparent_crc(p_1440->g_788.s0, "p_1440->g_788.s0", print_hash_value);
    transparent_crc(p_1440->g_788.s1, "p_1440->g_788.s1", print_hash_value);
    transparent_crc(p_1440->g_788.s2, "p_1440->g_788.s2", print_hash_value);
    transparent_crc(p_1440->g_788.s3, "p_1440->g_788.s3", print_hash_value);
    transparent_crc(p_1440->g_788.s4, "p_1440->g_788.s4", print_hash_value);
    transparent_crc(p_1440->g_788.s5, "p_1440->g_788.s5", print_hash_value);
    transparent_crc(p_1440->g_788.s6, "p_1440->g_788.s6", print_hash_value);
    transparent_crc(p_1440->g_788.s7, "p_1440->g_788.s7", print_hash_value);
    transparent_crc(p_1440->g_788.s8, "p_1440->g_788.s8", print_hash_value);
    transparent_crc(p_1440->g_788.s9, "p_1440->g_788.s9", print_hash_value);
    transparent_crc(p_1440->g_788.sa, "p_1440->g_788.sa", print_hash_value);
    transparent_crc(p_1440->g_788.sb, "p_1440->g_788.sb", print_hash_value);
    transparent_crc(p_1440->g_788.sc, "p_1440->g_788.sc", print_hash_value);
    transparent_crc(p_1440->g_788.sd, "p_1440->g_788.sd", print_hash_value);
    transparent_crc(p_1440->g_788.se, "p_1440->g_788.se", print_hash_value);
    transparent_crc(p_1440->g_788.sf, "p_1440->g_788.sf", print_hash_value);
    transparent_crc(p_1440->g_797, "p_1440->g_797", print_hash_value);
    transparent_crc(p_1440->g_820.f0, "p_1440->g_820.f0", print_hash_value);
    transparent_crc(p_1440->g_820.f1, "p_1440->g_820.f1", print_hash_value);
    transparent_crc(p_1440->g_820.f2, "p_1440->g_820.f2", print_hash_value);
    transparent_crc(p_1440->g_820.f3, "p_1440->g_820.f3", print_hash_value);
    transparent_crc(p_1440->g_875.x, "p_1440->g_875.x", print_hash_value);
    transparent_crc(p_1440->g_875.y, "p_1440->g_875.y", print_hash_value);
    transparent_crc(p_1440->g_918.s0, "p_1440->g_918.s0", print_hash_value);
    transparent_crc(p_1440->g_918.s1, "p_1440->g_918.s1", print_hash_value);
    transparent_crc(p_1440->g_918.s2, "p_1440->g_918.s2", print_hash_value);
    transparent_crc(p_1440->g_918.s3, "p_1440->g_918.s3", print_hash_value);
    transparent_crc(p_1440->g_918.s4, "p_1440->g_918.s4", print_hash_value);
    transparent_crc(p_1440->g_918.s5, "p_1440->g_918.s5", print_hash_value);
    transparent_crc(p_1440->g_918.s6, "p_1440->g_918.s6", print_hash_value);
    transparent_crc(p_1440->g_918.s7, "p_1440->g_918.s7", print_hash_value);
    transparent_crc(p_1440->g_918.s8, "p_1440->g_918.s8", print_hash_value);
    transparent_crc(p_1440->g_918.s9, "p_1440->g_918.s9", print_hash_value);
    transparent_crc(p_1440->g_918.sa, "p_1440->g_918.sa", print_hash_value);
    transparent_crc(p_1440->g_918.sb, "p_1440->g_918.sb", print_hash_value);
    transparent_crc(p_1440->g_918.sc, "p_1440->g_918.sc", print_hash_value);
    transparent_crc(p_1440->g_918.sd, "p_1440->g_918.sd", print_hash_value);
    transparent_crc(p_1440->g_918.se, "p_1440->g_918.se", print_hash_value);
    transparent_crc(p_1440->g_918.sf, "p_1440->g_918.sf", print_hash_value);
    transparent_crc(p_1440->g_919.x, "p_1440->g_919.x", print_hash_value);
    transparent_crc(p_1440->g_919.y, "p_1440->g_919.y", print_hash_value);
    transparent_crc(p_1440->g_967, "p_1440->g_967", print_hash_value);
    transparent_crc(p_1440->g_1003.x, "p_1440->g_1003.x", print_hash_value);
    transparent_crc(p_1440->g_1003.y, "p_1440->g_1003.y", print_hash_value);
    transparent_crc(p_1440->g_1035.x, "p_1440->g_1035.x", print_hash_value);
    transparent_crc(p_1440->g_1035.y, "p_1440->g_1035.y", print_hash_value);
    transparent_crc(p_1440->g_1038.s0, "p_1440->g_1038.s0", print_hash_value);
    transparent_crc(p_1440->g_1038.s1, "p_1440->g_1038.s1", print_hash_value);
    transparent_crc(p_1440->g_1038.s2, "p_1440->g_1038.s2", print_hash_value);
    transparent_crc(p_1440->g_1038.s3, "p_1440->g_1038.s3", print_hash_value);
    transparent_crc(p_1440->g_1038.s4, "p_1440->g_1038.s4", print_hash_value);
    transparent_crc(p_1440->g_1038.s5, "p_1440->g_1038.s5", print_hash_value);
    transparent_crc(p_1440->g_1038.s6, "p_1440->g_1038.s6", print_hash_value);
    transparent_crc(p_1440->g_1038.s7, "p_1440->g_1038.s7", print_hash_value);
    transparent_crc(p_1440->g_1040.f0, "p_1440->g_1040.f0", print_hash_value);
    transparent_crc(p_1440->g_1040.f1, "p_1440->g_1040.f1", print_hash_value);
    transparent_crc(p_1440->g_1040.f2, "p_1440->g_1040.f2", print_hash_value);
    transparent_crc(p_1440->g_1040.f3, "p_1440->g_1040.f3", print_hash_value);
    transparent_crc(p_1440->g_1047.x, "p_1440->g_1047.x", print_hash_value);
    transparent_crc(p_1440->g_1047.y, "p_1440->g_1047.y", print_hash_value);
    transparent_crc(p_1440->g_1047.z, "p_1440->g_1047.z", print_hash_value);
    transparent_crc(p_1440->g_1047.w, "p_1440->g_1047.w", print_hash_value);
    transparent_crc(p_1440->g_1049.s0, "p_1440->g_1049.s0", print_hash_value);
    transparent_crc(p_1440->g_1049.s1, "p_1440->g_1049.s1", print_hash_value);
    transparent_crc(p_1440->g_1049.s2, "p_1440->g_1049.s2", print_hash_value);
    transparent_crc(p_1440->g_1049.s3, "p_1440->g_1049.s3", print_hash_value);
    transparent_crc(p_1440->g_1049.s4, "p_1440->g_1049.s4", print_hash_value);
    transparent_crc(p_1440->g_1049.s5, "p_1440->g_1049.s5", print_hash_value);
    transparent_crc(p_1440->g_1049.s6, "p_1440->g_1049.s6", print_hash_value);
    transparent_crc(p_1440->g_1049.s7, "p_1440->g_1049.s7", print_hash_value);
    transparent_crc(p_1440->g_1053.x, "p_1440->g_1053.x", print_hash_value);
    transparent_crc(p_1440->g_1053.y, "p_1440->g_1053.y", print_hash_value);
    transparent_crc(p_1440->g_1053.z, "p_1440->g_1053.z", print_hash_value);
    transparent_crc(p_1440->g_1053.w, "p_1440->g_1053.w", print_hash_value);
    transparent_crc(p_1440->g_1054.s0, "p_1440->g_1054.s0", print_hash_value);
    transparent_crc(p_1440->g_1054.s1, "p_1440->g_1054.s1", print_hash_value);
    transparent_crc(p_1440->g_1054.s2, "p_1440->g_1054.s2", print_hash_value);
    transparent_crc(p_1440->g_1054.s3, "p_1440->g_1054.s3", print_hash_value);
    transparent_crc(p_1440->g_1054.s4, "p_1440->g_1054.s4", print_hash_value);
    transparent_crc(p_1440->g_1054.s5, "p_1440->g_1054.s5", print_hash_value);
    transparent_crc(p_1440->g_1054.s6, "p_1440->g_1054.s6", print_hash_value);
    transparent_crc(p_1440->g_1054.s7, "p_1440->g_1054.s7", print_hash_value);
    transparent_crc(p_1440->g_1054.s8, "p_1440->g_1054.s8", print_hash_value);
    transparent_crc(p_1440->g_1054.s9, "p_1440->g_1054.s9", print_hash_value);
    transparent_crc(p_1440->g_1054.sa, "p_1440->g_1054.sa", print_hash_value);
    transparent_crc(p_1440->g_1054.sb, "p_1440->g_1054.sb", print_hash_value);
    transparent_crc(p_1440->g_1054.sc, "p_1440->g_1054.sc", print_hash_value);
    transparent_crc(p_1440->g_1054.sd, "p_1440->g_1054.sd", print_hash_value);
    transparent_crc(p_1440->g_1054.se, "p_1440->g_1054.se", print_hash_value);
    transparent_crc(p_1440->g_1054.sf, "p_1440->g_1054.sf", print_hash_value);
    transparent_crc(p_1440->g_1055.s0, "p_1440->g_1055.s0", print_hash_value);
    transparent_crc(p_1440->g_1055.s1, "p_1440->g_1055.s1", print_hash_value);
    transparent_crc(p_1440->g_1055.s2, "p_1440->g_1055.s2", print_hash_value);
    transparent_crc(p_1440->g_1055.s3, "p_1440->g_1055.s3", print_hash_value);
    transparent_crc(p_1440->g_1055.s4, "p_1440->g_1055.s4", print_hash_value);
    transparent_crc(p_1440->g_1055.s5, "p_1440->g_1055.s5", print_hash_value);
    transparent_crc(p_1440->g_1055.s6, "p_1440->g_1055.s6", print_hash_value);
    transparent_crc(p_1440->g_1055.s7, "p_1440->g_1055.s7", print_hash_value);
    transparent_crc(p_1440->g_1056.x, "p_1440->g_1056.x", print_hash_value);
    transparent_crc(p_1440->g_1056.y, "p_1440->g_1056.y", print_hash_value);
    transparent_crc(p_1440->g_1067, "p_1440->g_1067", print_hash_value);
    transparent_crc(p_1440->g_1088.x, "p_1440->g_1088.x", print_hash_value);
    transparent_crc(p_1440->g_1088.y, "p_1440->g_1088.y", print_hash_value);
    transparent_crc(p_1440->g_1100.f0, "p_1440->g_1100.f0", print_hash_value);
    transparent_crc(p_1440->g_1100.f1, "p_1440->g_1100.f1", print_hash_value);
    transparent_crc(p_1440->g_1100.f2, "p_1440->g_1100.f2", print_hash_value);
    transparent_crc(p_1440->g_1100.f3, "p_1440->g_1100.f3", print_hash_value);
    transparent_crc(p_1440->g_1102.f0, "p_1440->g_1102.f0", print_hash_value);
    transparent_crc(p_1440->g_1102.f1, "p_1440->g_1102.f1", print_hash_value);
    transparent_crc(p_1440->g_1102.f2, "p_1440->g_1102.f2", print_hash_value);
    transparent_crc(p_1440->g_1102.f3, "p_1440->g_1102.f3", print_hash_value);
    transparent_crc(p_1440->g_1138.s0, "p_1440->g_1138.s0", print_hash_value);
    transparent_crc(p_1440->g_1138.s1, "p_1440->g_1138.s1", print_hash_value);
    transparent_crc(p_1440->g_1138.s2, "p_1440->g_1138.s2", print_hash_value);
    transparent_crc(p_1440->g_1138.s3, "p_1440->g_1138.s3", print_hash_value);
    transparent_crc(p_1440->g_1138.s4, "p_1440->g_1138.s4", print_hash_value);
    transparent_crc(p_1440->g_1138.s5, "p_1440->g_1138.s5", print_hash_value);
    transparent_crc(p_1440->g_1138.s6, "p_1440->g_1138.s6", print_hash_value);
    transparent_crc(p_1440->g_1138.s7, "p_1440->g_1138.s7", print_hash_value);
    transparent_crc(p_1440->g_1159.s0, "p_1440->g_1159.s0", print_hash_value);
    transparent_crc(p_1440->g_1159.s1, "p_1440->g_1159.s1", print_hash_value);
    transparent_crc(p_1440->g_1159.s2, "p_1440->g_1159.s2", print_hash_value);
    transparent_crc(p_1440->g_1159.s3, "p_1440->g_1159.s3", print_hash_value);
    transparent_crc(p_1440->g_1159.s4, "p_1440->g_1159.s4", print_hash_value);
    transparent_crc(p_1440->g_1159.s5, "p_1440->g_1159.s5", print_hash_value);
    transparent_crc(p_1440->g_1159.s6, "p_1440->g_1159.s6", print_hash_value);
    transparent_crc(p_1440->g_1159.s7, "p_1440->g_1159.s7", print_hash_value);
    transparent_crc(p_1440->g_1180.s0, "p_1440->g_1180.s0", print_hash_value);
    transparent_crc(p_1440->g_1180.s1, "p_1440->g_1180.s1", print_hash_value);
    transparent_crc(p_1440->g_1180.s2, "p_1440->g_1180.s2", print_hash_value);
    transparent_crc(p_1440->g_1180.s3, "p_1440->g_1180.s3", print_hash_value);
    transparent_crc(p_1440->g_1180.s4, "p_1440->g_1180.s4", print_hash_value);
    transparent_crc(p_1440->g_1180.s5, "p_1440->g_1180.s5", print_hash_value);
    transparent_crc(p_1440->g_1180.s6, "p_1440->g_1180.s6", print_hash_value);
    transparent_crc(p_1440->g_1180.s7, "p_1440->g_1180.s7", print_hash_value);
    transparent_crc(p_1440->g_1180.s8, "p_1440->g_1180.s8", print_hash_value);
    transparent_crc(p_1440->g_1180.s9, "p_1440->g_1180.s9", print_hash_value);
    transparent_crc(p_1440->g_1180.sa, "p_1440->g_1180.sa", print_hash_value);
    transparent_crc(p_1440->g_1180.sb, "p_1440->g_1180.sb", print_hash_value);
    transparent_crc(p_1440->g_1180.sc, "p_1440->g_1180.sc", print_hash_value);
    transparent_crc(p_1440->g_1180.sd, "p_1440->g_1180.sd", print_hash_value);
    transparent_crc(p_1440->g_1180.se, "p_1440->g_1180.se", print_hash_value);
    transparent_crc(p_1440->g_1180.sf, "p_1440->g_1180.sf", print_hash_value);
    transparent_crc(p_1440->g_1201, "p_1440->g_1201", print_hash_value);
    transparent_crc(p_1440->g_1227.x, "p_1440->g_1227.x", print_hash_value);
    transparent_crc(p_1440->g_1227.y, "p_1440->g_1227.y", print_hash_value);
    transparent_crc(p_1440->g_1227.z, "p_1440->g_1227.z", print_hash_value);
    transparent_crc(p_1440->g_1227.w, "p_1440->g_1227.w", print_hash_value);
    transparent_crc(p_1440->g_1244.s0, "p_1440->g_1244.s0", print_hash_value);
    transparent_crc(p_1440->g_1244.s1, "p_1440->g_1244.s1", print_hash_value);
    transparent_crc(p_1440->g_1244.s2, "p_1440->g_1244.s2", print_hash_value);
    transparent_crc(p_1440->g_1244.s3, "p_1440->g_1244.s3", print_hash_value);
    transparent_crc(p_1440->g_1244.s4, "p_1440->g_1244.s4", print_hash_value);
    transparent_crc(p_1440->g_1244.s5, "p_1440->g_1244.s5", print_hash_value);
    transparent_crc(p_1440->g_1244.s6, "p_1440->g_1244.s6", print_hash_value);
    transparent_crc(p_1440->g_1244.s7, "p_1440->g_1244.s7", print_hash_value);
    transparent_crc(p_1440->g_1244.s8, "p_1440->g_1244.s8", print_hash_value);
    transparent_crc(p_1440->g_1244.s9, "p_1440->g_1244.s9", print_hash_value);
    transparent_crc(p_1440->g_1244.sa, "p_1440->g_1244.sa", print_hash_value);
    transparent_crc(p_1440->g_1244.sb, "p_1440->g_1244.sb", print_hash_value);
    transparent_crc(p_1440->g_1244.sc, "p_1440->g_1244.sc", print_hash_value);
    transparent_crc(p_1440->g_1244.sd, "p_1440->g_1244.sd", print_hash_value);
    transparent_crc(p_1440->g_1244.se, "p_1440->g_1244.se", print_hash_value);
    transparent_crc(p_1440->g_1244.sf, "p_1440->g_1244.sf", print_hash_value);
    transparent_crc(p_1440->g_1297.x, "p_1440->g_1297.x", print_hash_value);
    transparent_crc(p_1440->g_1297.y, "p_1440->g_1297.y", print_hash_value);
    transparent_crc(p_1440->g_1306.f0, "p_1440->g_1306.f0", print_hash_value);
    transparent_crc(p_1440->g_1306.f1, "p_1440->g_1306.f1", print_hash_value);
    transparent_crc(p_1440->g_1306.f2, "p_1440->g_1306.f2", print_hash_value);
    transparent_crc(p_1440->g_1306.f3, "p_1440->g_1306.f3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1440->g_1337[i][j], "p_1440->g_1337[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1440->g_1387.s0, "p_1440->g_1387.s0", print_hash_value);
    transparent_crc(p_1440->g_1387.s1, "p_1440->g_1387.s1", print_hash_value);
    transparent_crc(p_1440->g_1387.s2, "p_1440->g_1387.s2", print_hash_value);
    transparent_crc(p_1440->g_1387.s3, "p_1440->g_1387.s3", print_hash_value);
    transparent_crc(p_1440->g_1387.s4, "p_1440->g_1387.s4", print_hash_value);
    transparent_crc(p_1440->g_1387.s5, "p_1440->g_1387.s5", print_hash_value);
    transparent_crc(p_1440->g_1387.s6, "p_1440->g_1387.s6", print_hash_value);
    transparent_crc(p_1440->g_1387.s7, "p_1440->g_1387.s7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1440->g_1391[i].f0, "p_1440->g_1391[i].f0", print_hash_value);
        transparent_crc(p_1440->g_1391[i].f1, "p_1440->g_1391[i].f1", print_hash_value);
        transparent_crc(p_1440->g_1391[i].f2, "p_1440->g_1391[i].f2", print_hash_value);
        transparent_crc(p_1440->g_1391[i].f3, "p_1440->g_1391[i].f3", print_hash_value);

    }
    transparent_crc(p_1440->g_1394.x, "p_1440->g_1394.x", print_hash_value);
    transparent_crc(p_1440->g_1394.y, "p_1440->g_1394.y", print_hash_value);
    transparent_crc(p_1440->g_1394.z, "p_1440->g_1394.z", print_hash_value);
    transparent_crc(p_1440->g_1394.w, "p_1440->g_1394.w", print_hash_value);
    transparent_crc(p_1440->g_1395.s0, "p_1440->g_1395.s0", print_hash_value);
    transparent_crc(p_1440->g_1395.s1, "p_1440->g_1395.s1", print_hash_value);
    transparent_crc(p_1440->g_1395.s2, "p_1440->g_1395.s2", print_hash_value);
    transparent_crc(p_1440->g_1395.s3, "p_1440->g_1395.s3", print_hash_value);
    transparent_crc(p_1440->g_1395.s4, "p_1440->g_1395.s4", print_hash_value);
    transparent_crc(p_1440->g_1395.s5, "p_1440->g_1395.s5", print_hash_value);
    transparent_crc(p_1440->g_1395.s6, "p_1440->g_1395.s6", print_hash_value);
    transparent_crc(p_1440->g_1395.s7, "p_1440->g_1395.s7", print_hash_value);
    transparent_crc(p_1440->g_1395.s8, "p_1440->g_1395.s8", print_hash_value);
    transparent_crc(p_1440->g_1395.s9, "p_1440->g_1395.s9", print_hash_value);
    transparent_crc(p_1440->g_1395.sa, "p_1440->g_1395.sa", print_hash_value);
    transparent_crc(p_1440->g_1395.sb, "p_1440->g_1395.sb", print_hash_value);
    transparent_crc(p_1440->g_1395.sc, "p_1440->g_1395.sc", print_hash_value);
    transparent_crc(p_1440->g_1395.sd, "p_1440->g_1395.sd", print_hash_value);
    transparent_crc(p_1440->g_1395.se, "p_1440->g_1395.se", print_hash_value);
    transparent_crc(p_1440->g_1395.sf, "p_1440->g_1395.sf", print_hash_value);
    transparent_crc(p_1440->g_1402, "p_1440->g_1402", print_hash_value);
    transparent_crc(p_1440->g_1428.s0, "p_1440->g_1428.s0", print_hash_value);
    transparent_crc(p_1440->g_1428.s1, "p_1440->g_1428.s1", print_hash_value);
    transparent_crc(p_1440->g_1428.s2, "p_1440->g_1428.s2", print_hash_value);
    transparent_crc(p_1440->g_1428.s3, "p_1440->g_1428.s3", print_hash_value);
    transparent_crc(p_1440->g_1428.s4, "p_1440->g_1428.s4", print_hash_value);
    transparent_crc(p_1440->g_1428.s5, "p_1440->g_1428.s5", print_hash_value);
    transparent_crc(p_1440->g_1428.s6, "p_1440->g_1428.s6", print_hash_value);
    transparent_crc(p_1440->g_1428.s7, "p_1440->g_1428.s7", print_hash_value);
    transparent_crc(p_1440->g_1429.x, "p_1440->g_1429.x", print_hash_value);
    transparent_crc(p_1440->g_1429.y, "p_1440->g_1429.y", print_hash_value);
    transparent_crc(p_1440->g_1429.z, "p_1440->g_1429.z", print_hash_value);
    transparent_crc(p_1440->g_1429.w, "p_1440->g_1429.w", print_hash_value);
    transparent_crc(p_1440->g_1430.x, "p_1440->g_1430.x", print_hash_value);
    transparent_crc(p_1440->g_1430.y, "p_1440->g_1430.y", print_hash_value);
    transparent_crc(p_1440->g_1430.z, "p_1440->g_1430.z", print_hash_value);
    transparent_crc(p_1440->g_1430.w, "p_1440->g_1430.w", print_hash_value);
    transparent_crc(p_1440->g_1432.x, "p_1440->g_1432.x", print_hash_value);
    transparent_crc(p_1440->g_1432.y, "p_1440->g_1432.y", print_hash_value);
    transparent_crc(p_1440->g_1433.s0, "p_1440->g_1433.s0", print_hash_value);
    transparent_crc(p_1440->g_1433.s1, "p_1440->g_1433.s1", print_hash_value);
    transparent_crc(p_1440->g_1433.s2, "p_1440->g_1433.s2", print_hash_value);
    transparent_crc(p_1440->g_1433.s3, "p_1440->g_1433.s3", print_hash_value);
    transparent_crc(p_1440->g_1433.s4, "p_1440->g_1433.s4", print_hash_value);
    transparent_crc(p_1440->g_1433.s5, "p_1440->g_1433.s5", print_hash_value);
    transparent_crc(p_1440->g_1433.s6, "p_1440->g_1433.s6", print_hash_value);
    transparent_crc(p_1440->g_1433.s7, "p_1440->g_1433.s7", print_hash_value);
    transparent_crc(p_1440->g_1433.s8, "p_1440->g_1433.s8", print_hash_value);
    transparent_crc(p_1440->g_1433.s9, "p_1440->g_1433.s9", print_hash_value);
    transparent_crc(p_1440->g_1433.sa, "p_1440->g_1433.sa", print_hash_value);
    transparent_crc(p_1440->g_1433.sb, "p_1440->g_1433.sb", print_hash_value);
    transparent_crc(p_1440->g_1433.sc, "p_1440->g_1433.sc", print_hash_value);
    transparent_crc(p_1440->g_1433.sd, "p_1440->g_1433.sd", print_hash_value);
    transparent_crc(p_1440->g_1433.se, "p_1440->g_1433.se", print_hash_value);
    transparent_crc(p_1440->g_1433.sf, "p_1440->g_1433.sf", print_hash_value);
    transparent_crc(p_1440->g_1434.x, "p_1440->g_1434.x", print_hash_value);
    transparent_crc(p_1440->g_1434.y, "p_1440->g_1434.y", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1440->g_1435[i], "p_1440->g_1435[i]", print_hash_value);

    }
    transparent_crc(p_1440->v_collective, "p_1440->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 46; i++)
            transparent_crc(p_1440->g_special_values[i + 46 * get_linear_group_id()], "p_1440->g_special_values[i + 46 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 46; i++)
            transparent_crc(p_1440->l_special_values[i], "p_1440->l_special_values[i]", print_hash_value);
    transparent_crc(p_1440->l_comm_values[get_linear_local_id()], "p_1440->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1440->g_comm_values[get_linear_group_id() * 67 + get_linear_local_id()], "p_1440->g_comm_values[get_linear_group_id() * 67 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
