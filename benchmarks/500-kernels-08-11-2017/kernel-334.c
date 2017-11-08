// --atomics 19 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 23,52,8 -l 1,26,4
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

__constant uint32_t permutations[10][104] = {
{24,48,51,71,95,40,80,87,83,58,50,43,37,49,45,85,32,34,94,53,63,88,46,14,38,22,4,3,23,20,15,89,0,103,42,5,7,31,74,11,101,36,28,97,44,12,75,77,30,99,16,65,18,81,93,76,60,54,56,17,10,26,67,70,57,13,72,25,19,6,96,73,84,79,82,78,47,39,33,27,1,66,102,69,59,9,86,98,41,62,91,52,8,100,55,64,2,68,21,90,35,29,92,61}, // permutation 0
{35,75,32,90,101,73,52,8,103,74,24,15,9,37,95,96,65,83,3,13,6,94,19,61,10,38,2,70,31,78,17,43,12,68,92,64,46,56,87,27,85,30,67,57,26,29,98,79,22,60,0,42,81,5,40,69,82,11,23,63,72,100,28,45,20,25,62,50,14,84,86,49,58,59,102,7,47,97,77,18,34,36,54,41,89,93,66,71,91,4,44,88,55,1,21,53,16,51,48,39,33,99,80,76}, // permutation 1
{1,31,99,36,8,14,96,45,20,75,48,86,72,68,40,71,66,73,58,49,70,92,98,23,42,35,57,80,41,79,55,10,43,19,91,52,47,53,22,21,90,27,97,81,83,61,25,24,82,74,11,67,6,0,34,89,77,15,4,51,62,30,37,28,54,88,65,7,17,63,78,5,16,60,59,33,12,29,93,87,84,13,39,100,46,101,44,69,95,32,3,26,38,102,94,85,2,76,50,103,56,18,64,9}, // permutation 2
{1,98,10,51,37,80,63,86,38,57,40,103,32,20,2,95,46,55,49,53,34,77,0,93,65,44,9,8,87,12,43,22,68,35,19,88,66,7,54,96,85,27,33,60,56,99,70,50,52,47,92,74,72,18,26,6,62,59,79,73,23,4,71,36,90,84,89,17,15,102,61,29,13,48,16,76,94,11,39,64,25,97,83,67,91,30,69,42,5,21,28,31,75,24,58,45,3,41,78,100,82,101,14,81}, // permutation 3
{100,32,101,34,91,24,57,98,10,87,60,12,9,74,0,30,59,63,6,46,97,49,70,3,45,78,61,66,48,40,58,41,55,7,83,76,52,64,79,56,102,81,20,72,33,8,68,95,89,53,21,47,4,15,28,5,50,99,29,54,69,44,16,84,2,35,80,42,94,67,37,31,103,18,36,43,90,82,92,26,19,22,96,86,39,38,88,77,14,75,51,1,11,85,27,65,73,62,71,93,25,17,13,23}, // permutation 4
{103,20,88,79,2,42,24,46,52,13,65,61,3,93,54,51,45,76,47,53,12,73,0,31,60,14,39,6,8,11,77,43,37,10,26,74,36,69,5,4,23,16,48,15,66,33,22,7,96,80,50,75,89,34,90,84,100,95,82,85,70,102,71,21,55,56,87,25,58,81,9,1,97,94,101,72,28,68,91,86,38,19,62,41,78,30,49,92,98,27,67,40,64,18,59,44,99,57,83,32,17,63,29,35}, // permutation 5
{74,58,15,103,49,41,98,99,59,61,21,27,86,69,30,3,36,77,10,62,37,84,22,14,8,50,44,0,48,39,33,52,88,38,101,73,76,11,46,23,67,47,64,70,94,1,29,81,83,89,26,80,79,63,9,2,34,31,53,45,20,87,54,96,102,92,32,91,72,40,95,78,93,55,24,66,100,42,65,85,51,6,56,17,13,68,97,25,57,60,19,12,35,18,4,43,5,7,16,71,82,90,75,28}, // permutation 6
{8,70,32,7,24,37,78,22,16,101,27,10,84,90,72,93,42,6,0,35,44,39,74,17,99,91,58,53,15,83,95,56,34,81,40,18,59,85,55,31,98,66,48,25,64,43,79,61,2,100,82,11,26,94,63,21,45,76,86,47,71,89,29,69,19,97,50,77,46,92,20,103,49,41,62,1,23,14,9,33,12,88,51,36,38,3,52,13,68,5,57,4,80,75,96,28,54,87,67,73,60,102,65,30}, // permutation 7
{16,42,44,65,4,12,31,63,25,86,29,71,72,78,26,49,24,35,8,90,91,45,15,56,28,52,32,50,48,46,5,22,27,37,80,92,39,103,88,54,98,13,93,59,40,30,61,89,79,1,11,19,9,73,74,38,47,33,0,18,2,85,23,57,84,7,43,97,14,100,76,70,96,62,64,66,10,82,99,20,81,60,34,67,6,17,68,77,21,101,69,87,83,55,3,95,75,53,102,94,36,41,51,58}, // permutation 8
{23,26,10,91,19,53,9,45,89,68,27,32,42,51,0,100,102,6,74,13,76,15,71,43,97,93,103,82,79,59,55,40,96,47,88,37,65,2,8,17,22,48,86,83,4,63,98,31,101,12,1,62,92,20,75,7,52,73,58,80,84,14,94,5,50,87,54,30,64,60,70,35,29,81,46,34,67,21,78,28,95,16,49,66,36,77,3,18,25,41,24,39,61,57,44,33,56,69,72,38,90,85,99,11} // permutation 9
};

// Seed: 3056958837

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   int32_t  f1;
   volatile uint8_t  f2;
   int16_t  f3;
   int32_t  f4;
   int32_t  f5;
   uint16_t  f6;
   volatile int32_t  f7;
   volatile int16_t  f8;
};

struct S1 {
   uint32_t  f0;
   volatile uint64_t  f1;
   int32_t  f2;
   uint8_t  f3;
   int32_t  f4;
   int64_t  f5;
   uint16_t  f6;
   int64_t  f7;
};

struct S2 {
   int32_t  f0;
   volatile int32_t  f1;
};

struct S3 {
    int32_t g_58[9][1];
    volatile VECTOR(int32_t, 8) g_61;
    struct S1 g_72;
    volatile VECTOR(int64_t, 2) g_86;
    volatile VECTOR(int64_t, 16) g_87;
    struct S1 g_108;
    struct S1 *g_107;
    VECTOR(uint8_t, 4) g_120;
    volatile VECTOR(uint8_t, 4) g_121;
    uint64_t g_137;
    int16_t g_143;
    uint32_t g_165[2];
    uint64_t g_177[9];
    VECTOR(int8_t, 8) g_185;
    volatile VECTOR(int8_t, 16) g_186;
    volatile VECTOR(int8_t, 2) g_187;
    int16_t *g_194;
    int32_t *g_195;
    int32_t *g_199;
    int32_t ** volatile g_198;
    uint32_t g_240;
    int32_t ** volatile g_262;
    volatile VECTOR(int16_t, 8) g_272;
    volatile VECTOR(int16_t, 16) g_273;
    volatile VECTOR(int64_t, 8) g_284;
    int64_t g_313[4];
    int32_t g_314;
    struct S2 g_317;
    VECTOR(uint64_t, 4) g_326;
    struct S1 ** volatile g_334;
    volatile uint32_t * volatile g_336;
    volatile uint32_t * volatile * volatile g_335;
    volatile struct S0 g_349;
    volatile struct S0 * volatile g_350;
    int32_t g_352;
    int32_t g_353;
    volatile struct S1 g_354[10][5];
    VECTOR(int16_t, 16) g_359;
    struct S0 g_368;
    struct S0 *g_367;
    int8_t *g_380[3][7];
    volatile VECTOR(uint32_t, 2) g_391;
    int16_t **g_397;
    volatile struct S1 g_404[9][2];
    uint8_t *g_439;
    VECTOR(int16_t, 4) g_440;
    uint64_t g_466;
    uint32_t **g_471;
    volatile struct S2 g_480;
    struct S1 **g_484;
    struct S0 g_504[2];
    volatile VECTOR(int32_t, 16) g_520;
    VECTOR(int64_t, 16) g_525;
    VECTOR(int8_t, 8) g_526;
    volatile struct S0 g_528[10][1][6];
    VECTOR(int64_t, 8) g_532;
    struct S2 g_690;
    VECTOR(int16_t, 16) g_748;
    int16_t ***g_750;
    int32_t ** volatile g_763;
    struct S0 g_768;
    struct S0 g_769;
    volatile struct S0 g_776;
    volatile struct S0 g_779;
    uint64_t *g_780;
    struct S2 g_782;
    struct S2 *g_781[3];
    volatile struct S1 g_785;
    struct S2 g_799[2][1][6];
    VECTOR(int16_t, 16) g_801;
    volatile uint64_t g_827;
    int32_t ** volatile g_831;
    int32_t ** volatile g_844;
    struct S1 g_858;
    int32_t ** volatile g_862[4];
    int32_t ** volatile g_863;
    int8_t **g_880;
    int8_t *** volatile g_879;
    struct S0 g_901;
    int32_t ** volatile g_980;
    volatile VECTOR(int16_t, 16) g_1009;
    VECTOR(uint8_t, 2) g_1070;
    VECTOR(int16_t, 8) g_1077;
    struct S0 g_1098[8];
    VECTOR(uint8_t, 8) g_1101;
    VECTOR(uint8_t, 8) g_1106;
    VECTOR(uint64_t, 2) g_1125;
    volatile VECTOR(uint64_t, 4) g_1126;
    VECTOR(int32_t, 4) g_1139;
    volatile VECTOR(int32_t, 2) g_1140;
    volatile VECTOR(int32_t, 16) g_1141;
    struct S2 g_1149[9];
    struct S2 g_1281;
    VECTOR(int8_t, 8) g_1294;
    VECTOR(int8_t, 8) g_1298;
    VECTOR(int8_t, 2) g_1299;
    VECTOR(int32_t, 16) g_1303;
    volatile VECTOR(int32_t, 2) g_1304;
    struct S0 g_1315;
    int16_t ** volatile * volatile g_1321;
    int16_t ** volatile * volatile *g_1320;
    struct S2 g_1330;
    struct S2 g_1331;
    VECTOR(uint8_t, 16) g_1344;
    volatile VECTOR(int16_t, 4) g_1350;
    volatile VECTOR(int16_t, 2) g_1351;
    volatile VECTOR(int16_t, 8) g_1352;
    volatile VECTOR(int16_t, 8) g_1353;
    int32_t ** volatile g_1354;
    int32_t ** volatile g_1355[6][4][8];
    uint32_t g_1377[5][2][1];
    int16_t g_1394;
    int32_t ** volatile g_1401;
    volatile VECTOR(int32_t, 2) g_1402;
    VECTOR(uint32_t, 16) g_1407;
    VECTOR(uint64_t, 16) g_1410;
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
uint64_t  func_1(struct S3 * p_1413);
uint8_t  func_2(uint64_t  p_3, struct S3 * p_1413);
int32_t  func_63(int32_t * p_64, struct S3 * p_1413);
int32_t * func_65(uint8_t  p_66, int32_t * p_67, struct S3 * p_1413);
int32_t * func_68(uint32_t  p_69, struct S3 * p_1413);
struct S2  func_84(uint32_t  p_85, struct S3 * p_1413);
int64_t  func_88(int32_t * p_89, int64_t  p_90, int32_t  p_91, int64_t  p_92, struct S3 * p_1413);
int32_t  func_93(uint64_t  p_94, uint64_t  p_95, int32_t  p_96, struct S1 * p_97, struct S3 * p_1413);
uint64_t  func_98(uint32_t  p_99, int32_t * p_100, int32_t  p_101, struct S3 * p_1413);
int64_t  func_102(int32_t  p_103, uint8_t  p_104, struct S1 * p_105, uint8_t  p_106, struct S3 * p_1413);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1413->g_comm_values p_1413->g_107 p_1413->g_108 p_1413->g_768.f0 p_1413->g_72.f4 p_1413->g_768.f5 p_1413->g_504.f0 p_1413->g_504.f3 p_1413->g_397 p_1413->g_194 p_1413->g_143 p_1413->g_120 p_1413->l_comm_values p_1413->g_750 p_1413->g_195 p_1413->g_844 p_1413->g_334 p_1413->g_58 p_1413->g_863 p_1413->g_199 p_1413->g_769.f2 p_1413->g_879 p_1413->g_901 p_1413->g_367 p_1413->g_404.f2 p_1413->g_780 p_1413->g_335 p_1413->g_336 p_1413->g_262 p_1413->g_349.f3 p_1413->g_484 p_1413->g_165 p_1413->g_980 p_1413->g_1009 p_1413->g_177 p_1413->g_769.f5 p_1413->g_72.f2 p_1413->g_1070 p_1413->g_1077 p_1413->g_185 p_1413->g_326 p_1413->g_763 p_1413->g_1098 p_1413->g_1101 p_1413->g_1106 p_1413->g_1125 p_1413->g_187 p_1413->g_1126 p_1413->g_831 p_1413->g_858.f2 p_1413->g_1139 p_1413->g_1140 p_1413->g_1141 p_1413->g_137 p_1413->g_1149 p_1413->g_781 p_1413->g_690.f0 p_1413->g_528.f1 p_1413->g_313 p_1413->g_368.f5 p_1413->g_1281 p_1413->g_1294 p_1413->g_1298 p_1413->g_1299 p_1413->g_1303 p_1413->g_1304 p_1413->g_1315 p_1413->g_1320 p_1413->g_353 p_1413->g_1330 p_1413->g_1344 p_1413->g_1350 p_1413->g_1351 p_1413->g_1352 p_1413->g_1353 p_1413->g_1377 p_1413->g_1401 p_1413->g_1402 p_1413->g_198 p_1413->g_1407 p_1413->g_1410
 * writes: p_1413->g_58 p_1413->g_61 p_1413->g_143 p_1413->g_108.f2 p_1413->g_195 p_1413->g_108.f3 p_1413->g_72.f4 p_1413->g_313 p_1413->g_199 p_1413->g_532 p_1413->g_880 p_1413->g_368 p_1413->g_137 p_1413->g_177 p_1413->g_769.f5 p_1413->g_768.f0 p_1413->g_901.f1 p_1413->g_504.f1 p_1413->g_108.f5 p_1413->g_901.f5 p_1413->g_72.f2 p_1413->g_768.f6 p_1413->g_782 p_1413->g_108.f4 p_1413->g_194 p_1413->g_750 p_1413->g_1331 p_1413->g_1377 p_1413->g_240
 */
uint64_t  func_1(struct S3 * p_1413)
{ /* block id: 4 */
    VECTOR(int8_t, 4) l_1057 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L);
    VECTOR(int8_t, 16) l_1058 = (VECTOR(int8_t, 16))(0x0AL, (VECTOR(int8_t, 4))(0x0AL, (VECTOR(int8_t, 2))(0x0AL, 0x36L), 0x36L), 0x36L, 0x0AL, 0x36L, (VECTOR(int8_t, 2))(0x0AL, 0x36L), (VECTOR(int8_t, 2))(0x0AL, 0x36L), 0x0AL, 0x36L, 0x0AL, 0x36L);
    int32_t l_1061 = 0x7058A15DL;
    int32_t l_1078 = 0x623B98C6L;
    int32_t l_1114 = 0x63765F1CL;
    int32_t l_1115 = 0x5E5FD639L;
    int32_t l_1116 = (-8L);
    int32_t l_1117 = 0x5B5CFFF6L;
    uint8_t l_1121 = 0x2AL;
    struct S2 **l_1138 = &p_1413->g_781[1];
    int8_t ***l_1142[8][3] = {{&p_1413->g_880,&p_1413->g_880,&p_1413->g_880},{&p_1413->g_880,&p_1413->g_880,&p_1413->g_880},{&p_1413->g_880,&p_1413->g_880,&p_1413->g_880},{&p_1413->g_880,&p_1413->g_880,&p_1413->g_880},{&p_1413->g_880,&p_1413->g_880,&p_1413->g_880},{&p_1413->g_880,&p_1413->g_880,&p_1413->g_880},{&p_1413->g_880,&p_1413->g_880,&p_1413->g_880},{&p_1413->g_880,&p_1413->g_880,&p_1413->g_880}};
    uint32_t l_1170 = 0UL;
    VECTOR(int32_t, 2) l_1175 = (VECTOR(int32_t, 2))((-1L), 8L);
    int16_t *l_1282 = (void*)0;
    VECTOR(int32_t, 16) l_1302 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1218D941L), 0x1218D941L), 0x1218D941L, 1L, 0x1218D941L, (VECTOR(int32_t, 2))(1L, 0x1218D941L), (VECTOR(int32_t, 2))(1L, 0x1218D941L), 1L, 0x1218D941L, 1L, 0x1218D941L);
    int16_t l_1375 = 0x7A50L;
    int8_t l_1396 = 1L;
    uint64_t l_1397 = 0xA49052ACDEE15A1FL;
    VECTOR(uint16_t, 8) l_1405 = (VECTOR(uint16_t, 8))(0xE11DL, (VECTOR(uint16_t, 4))(0xE11DL, (VECTOR(uint16_t, 2))(0xE11DL, 65528UL), 65528UL), 65528UL, 0xE11DL, 65528UL);
    uint32_t *l_1406[6][4][1] = {{{&p_1413->g_240},{&p_1413->g_240},{&p_1413->g_240},{&p_1413->g_240}},{{&p_1413->g_240},{&p_1413->g_240},{&p_1413->g_240},{&p_1413->g_240}},{{&p_1413->g_240},{&p_1413->g_240},{&p_1413->g_240},{&p_1413->g_240}},{{&p_1413->g_240},{&p_1413->g_240},{&p_1413->g_240},{&p_1413->g_240}},{{&p_1413->g_240},{&p_1413->g_240},{&p_1413->g_240},{&p_1413->g_240}},{{&p_1413->g_240},{&p_1413->g_240},{&p_1413->g_240},{&p_1413->g_240}}};
    int16_t *l_1408 = (void*)0;
    int16_t *l_1409[3];
    uint64_t *l_1411 = &p_1413->g_137;
    uint32_t l_1412 = 0UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1409[i] = (void*)0;
    if ((func_2(p_1413->g_comm_values[p_1413->tid], p_1413) == ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 2))(l_1057.yz)).yxyxxyyyyxxxyyxy, ((VECTOR(int8_t, 4))(l_1057.x, ((VECTOR(int8_t, 2))(l_1058.s71)), (-4L))).zwwwyywxwwxwxwyw))).s9c, ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))((-9L), (safe_sub_func_int16_t_s_s((l_1061 = l_1057.w), (safe_rshift_func_uint16_t_u_u(l_1058.s4, 3)))), 0x57L, (safe_lshift_func_int8_t_s_s((((((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((safe_div_func_int8_t_s_s((1L >= ((safe_add_func_int16_t_s_s(((((VECTOR(uint8_t, 4))(p_1413->g_1070.xxyy)).x == (!((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 4))((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((+l_1058.s0), (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(p_1413->g_1077.s4400305006066223)).sac, ((VECTOR(uint16_t, 2))(0xC4A3L, 0xF02FL))))).yyyxyyyyxyyxyxyx)).s1 , (p_1413->g_194 != (void*)0)))), GROUP_DIVERGE(0, 1))), l_1078, 0x7FA4L, 5L)).w, p_1413->g_185.s4)) && l_1078))) , 0L), p_1413->g_326.y)) != l_1058.se)), 0xF0L)) ^ l_1057.x), 0xD857L, 65531UL, 0xE810L, 0x548AL, 1UL, 0x2FDBL, 1UL)).s1046404747771254)).s1f15, ((VECTOR(uint16_t, 4))(65535UL))))).x || l_1078) , 0x184D9CEDE2A46A50L) , 0x26L), l_1057.z)), l_1078, 0x55L, 0L, 2L)), ((VECTOR(int8_t, 8))(0L))))).s10))).yyxyxxyx)).hi))))).hi, ((VECTOR(uint8_t, 2))(0xCAL)))))))), ((VECTOR(uint8_t, 2))(0UL))))).lo))
    { /* block id: 570 */
        int32_t l_1079 = 0x7362BA61L;
        int32_t l_1092 = 9L;
        int32_t *l_1093 = (void*)0;
        uint64_t *l_1107 = (void*)0;
        uint16_t *l_1108 = &p_1413->g_768.f6;
        uint16_t *l_1109 = &p_1413->g_368.f6;
        int32_t l_1113[7][4] = {{6L,7L,0x77BBB3A1L,0x71621C2FL},{6L,7L,0x77BBB3A1L,0x71621C2FL},{6L,7L,0x77BBB3A1L,0x71621C2FL},{6L,7L,0x77BBB3A1L,0x71621C2FL},{6L,7L,0x77BBB3A1L,0x71621C2FL},{6L,7L,0x77BBB3A1L,0x71621C2FL},{6L,7L,0x77BBB3A1L,0x71621C2FL}};
        int8_t l_1118 = 0x1AL;
        int8_t l_1119 = 0L;
        uint8_t *l_1133 = (void*)0;
        VECTOR(uint64_t, 4) l_1145 = (VECTOR(uint64_t, 4))(0x53744D4FD8623859L, (VECTOR(uint64_t, 2))(0x53744D4FD8623859L, 2UL), 2UL);
        int i, j;
        l_1092 |= ((*p_1413->g_199) = (l_1058.s0 & ((0UL == ((l_1079 >= (safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s((-1L), (**p_1413->g_980))), 0xDB367C53A810CAFFL))) , (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(((4UL < (safe_mod_func_int8_t_s_s(l_1079, 0x79L))) ^ 0x7E582C32L), 0x6232616BL)), 4)), 3)))) | l_1078)));
        l_1079 ^= (**p_1413->g_763);
        if (((((safe_lshift_func_uint16_t_u_u(((*l_1109) = (l_1061 , (safe_add_func_uint16_t_u_u(((p_1413->g_1098[5] , p_1413->g_195) != p_1413->g_199), (((*p_1413->g_194) = (FAKE_DIVERGE(p_1413->group_0_offset, get_group_id(0), 10) > p_1413->g_177[5])) && (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(p_1413->g_1101.s4454031007256062)).sa, (l_1058.s1 != (((((*l_1108) = (safe_div_func_int32_t_s_s((6UL || (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(p_1413->g_1106.s1374114753011032)).s3d)).xyxxxyxxyyyyyyyy)).odd, (uint8_t)5UL))).s5, 3))), ((*p_1413->g_199) &= ((p_1413->g_177[6] = ((+p_1413->g_185.s1) , p_1413->g_1098[5].f1)) > 0x0C2BCF7B1033286AL))))) | (*p_1413->g_194)) ^ l_1078) > (*p_1413->g_194)))))))))), l_1057.x)) & FAKE_DIVERGE(p_1413->group_0_offset, get_group_id(0), 10)) , (void*)0) == &p_1413->g_367))
        { /* block id: 579 */
            int32_t *l_1110 = (void*)0;
            int32_t *l_1111 = (void*)0;
            int32_t *l_1112[7];
            int8_t l_1120 = 0L;
            int8_t *l_1134 = (void*)0;
            int8_t *l_1135 = &l_1120;
            uint8_t *l_1146 = &l_1121;
            int i;
            for (i = 0; i < 7; i++)
                l_1112[i] = &p_1413->g_108.f4;
            l_1121--;
            (*p_1413->g_199) = (safe_unary_minus_func_uint64_t_u(((VECTOR(uint64_t, 16))(18446744073709551608UL, ((VECTOR(uint64_t, 4))(p_1413->g_1125.xyxx)), p_1413->g_187.x, ((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 2))(p_1413->g_1126.yw)), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))((safe_sub_func_int32_t_s_s((**p_1413->g_831), ((((l_1058.s7 , (*p_1413->g_750)) != ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((((*l_1135) = (l_1133 != (void*)0)) != (safe_mod_func_uint16_t_u_u((l_1138 == (void*)0), (*p_1413->g_194)))) , p_1413->g_858.f2), 1UL)), GROUP_DIVERGE(1, 1))) , (*p_1413->g_750))) > l_1078) , (-6L)))), 9UL, 0xCAF46024D8AD9E3AL, 1UL, p_1413->g_1098[5].f5, 18446744073709551606UL, 0x486F4AD1C3B328BBL, 18446744073709551614UL)).s5423516603202143)).sd6c2)).xzxzxwxyzywzyzzx)).sca))).yyyxxyyx, ((VECTOR(uint64_t, 8))(0x74BCF293FC40751AL))))), 18446744073709551606UL, 18446744073709551614UL)).sd));
            l_1061 = ((VECTOR(int32_t, 16))(0x158683CDL, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_1413->g_1139.xzxzwxzw)))).s2513250045755447, ((VECTOR(int32_t, 4))(p_1413->g_1140.xyyy)).wzzzxzxxywyyxwzz))).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1413->g_1141.sdb)).yxyy)).xyzwwxzz))), 9L, (((void*)0 == l_1142[5][2]) | (((FAKE_DIVERGE(p_1413->global_1_offset, get_global_id(1), 10) , &p_1413->g_769) == &p_1413->g_901) | (safe_add_func_int8_t_s_s((-1L), ((*l_1146) = ((GROUP_DIVERGE(0, 1) && l_1118) > (((*p_1413->g_780) = ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_1145.wwwz)).xwyyzxxz)).s4) , (((l_1116 , &p_1413->g_397) != ((*p_1413->g_780) , &p_1413->g_397)) < 0x4BBDL)))))))), (**p_1413->g_863), 0x4C1C91A7L, ((VECTOR(int32_t, 2))(8L)), 1L)).s5;
        }
        else
        { /* block id: 586 */
            (*p_1413->g_199) = 0L;
            return (*p_1413->g_780);
        }
        return (*p_1413->g_780);
    }
    else
    { /* block id: 591 */
        for (p_1413->g_72.f4 = (-2); (p_1413->g_72.f4 != (-9)); p_1413->g_72.f4 = safe_sub_func_int64_t_s_s(p_1413->g_72.f4, 3))
        { /* block id: 594 */
            int8_t l_1156[7][6][6] = {{{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL}},{{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL}},{{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL}},{{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL}},{{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL}},{{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL}},{{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL},{0x6DL,0L,0x45L,0x18L,0x19L,0x6DL}}};
            int32_t l_1161 = (-10L);
            uint64_t l_1167 = 0x90E145CF0EE8D1C3L;
            int i, j, k;
            (**l_1138) = p_1413->g_1149[6];
            for (p_1413->g_72.f2 = (-26); (p_1413->g_72.f2 != (-26)); p_1413->g_72.f2++)
            { /* block id: 598 */
                for (p_1413->g_901.f1 = 0; (p_1413->g_901.f1 < (-15)); --p_1413->g_901.f1)
                { /* block id: 601 */
                    int32_t l_1166 = (-1L);
                    for (p_1413->g_901.f5 = 0; (p_1413->g_901.f5 <= (-3)); p_1413->g_901.f5--)
                    { /* block id: 604 */
                        int32_t *l_1157 = (void*)0;
                        int32_t *l_1158 = &l_1115;
                        int32_t *l_1159 = &p_1413->g_58[6][0];
                        int32_t *l_1160 = &p_1413->g_353;
                        int32_t *l_1162 = (void*)0;
                        int32_t *l_1163 = &p_1413->g_769.f1;
                        int32_t *l_1164 = &p_1413->g_858.f2;
                        int32_t *l_1165[7] = {&p_1413->g_108.f4,&p_1413->g_72.f4,&p_1413->g_108.f4,&p_1413->g_108.f4,&p_1413->g_72.f4,&p_1413->g_108.f4,&p_1413->g_108.f4};
                        int i;
                        if (l_1156[0][1][4])
                            break;
                        l_1167--;
                        l_1170++;
                    }
                }
                if (l_1061)
                    break;
            }
        }
    }
    for (p_1413->g_768.f0 = 0; (p_1413->g_768.f0 == 3); ++p_1413->g_768.f0)
    { /* block id: 616 */
        int32_t l_1184 = 0L;
        uint32_t *l_1192 = &p_1413->g_240;
        VECTOR(int8_t, 2) l_1291 = (VECTOR(int8_t, 2))((-1L), 0x4CL);
        int32_t l_1329 = 7L;
        struct S2 *l_1339 = &p_1413->g_1149[4];
        int32_t l_1370 = 0x78C5DCB3L;
        int32_t l_1372 = 0x6AAA71C9L;
        int32_t l_1373 = 0x4337F02FL;
        int16_t l_1374 = (-8L);
        int32_t l_1376 = 0x452CA9B1L;
        int32_t *l_1383 = &l_1115;
        int32_t *l_1384 = &p_1413->g_858.f2;
        int32_t *l_1385 = &p_1413->g_108.f2;
        int32_t *l_1386 = &p_1413->g_769.f1;
        int32_t *l_1387 = &p_1413->g_72.f2;
        int32_t *l_1388 = (void*)0;
        int32_t *l_1389 = &p_1413->g_901.f1;
        int32_t *l_1390 = &p_1413->g_353;
        int32_t *l_1391 = &l_1114;
        int32_t *l_1392 = (void*)0;
        int32_t *l_1393[10][7] = {{&p_1413->g_858.f2,&p_1413->g_858.f2,(void*)0,&p_1413->g_504[0].f1,&p_1413->g_858.f2,&p_1413->g_504[0].f1,(void*)0},{&p_1413->g_858.f2,&p_1413->g_858.f2,(void*)0,&p_1413->g_504[0].f1,&p_1413->g_858.f2,&p_1413->g_504[0].f1,(void*)0},{&p_1413->g_858.f2,&p_1413->g_858.f2,(void*)0,&p_1413->g_504[0].f1,&p_1413->g_858.f2,&p_1413->g_504[0].f1,(void*)0},{&p_1413->g_858.f2,&p_1413->g_858.f2,(void*)0,&p_1413->g_504[0].f1,&p_1413->g_858.f2,&p_1413->g_504[0].f1,(void*)0},{&p_1413->g_858.f2,&p_1413->g_858.f2,(void*)0,&p_1413->g_504[0].f1,&p_1413->g_858.f2,&p_1413->g_504[0].f1,(void*)0},{&p_1413->g_858.f2,&p_1413->g_858.f2,(void*)0,&p_1413->g_504[0].f1,&p_1413->g_858.f2,&p_1413->g_504[0].f1,(void*)0},{&p_1413->g_858.f2,&p_1413->g_858.f2,(void*)0,&p_1413->g_504[0].f1,&p_1413->g_858.f2,&p_1413->g_504[0].f1,(void*)0},{&p_1413->g_858.f2,&p_1413->g_858.f2,(void*)0,&p_1413->g_504[0].f1,&p_1413->g_858.f2,&p_1413->g_504[0].f1,(void*)0},{&p_1413->g_858.f2,&p_1413->g_858.f2,(void*)0,&p_1413->g_504[0].f1,&p_1413->g_858.f2,&p_1413->g_504[0].f1,(void*)0},{&p_1413->g_858.f2,&p_1413->g_858.f2,(void*)0,&p_1413->g_504[0].f1,&p_1413->g_858.f2,&p_1413->g_504[0].f1,(void*)0}};
        int32_t l_1395 = (-1L);
        int32_t *l_1400 = &l_1061;
        int i, j;
        if (((*p_1413->g_199) ^= ((VECTOR(int32_t, 16))(l_1175.yxyyxxyxxxyxyxxy)).s7))
        { /* block id: 618 */
            int32_t *l_1176 = &p_1413->g_769.f1;
            int32_t *l_1177 = &p_1413->g_1098[5].f1;
            int32_t *l_1178 = (void*)0;
            int32_t *l_1179 = &p_1413->g_108.f4;
            int32_t *l_1180 = &p_1413->g_769.f1;
            int32_t *l_1181 = &p_1413->g_72.f2;
            int32_t *l_1182[1][10] = {{&p_1413->g_72.f2,&p_1413->g_72.f2,&p_1413->g_72.f2,&p_1413->g_72.f2,&p_1413->g_72.f2,&p_1413->g_72.f2,&p_1413->g_72.f2,&p_1413->g_72.f2,&p_1413->g_72.f2,&p_1413->g_72.f2}};
            int32_t l_1183 = 0x5500005CL;
            uint16_t l_1185 = 65530UL;
            uint32_t *l_1191[10][10][2] = {{{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240}},{{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240}},{{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240}},{{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240}},{{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240}},{{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240}},{{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240}},{{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240}},{{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240}},{{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240}}};
            uint32_t **l_1190 = &l_1191[4][8][0];
            int64_t *l_1193 = (void*)0;
            int64_t *l_1194 = &p_1413->g_313[3];
            int i, j, k;
            ++l_1185;
            (*l_1179) = (safe_mul_func_uint8_t_u_u(((((((+p_1413->g_690.f0) , (l_1184 , ((*l_1190) = l_1176))) == l_1192) , ((*l_1194) &= p_1413->g_528[5][0][1].f1)) && (l_1184 ^ p_1413->g_368.f5)) || ((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((+l_1184), FAKE_DIVERGE(p_1413->group_0_offset, get_group_id(0), 10))) <= l_1184), l_1184)) & l_1121)), 0x4EL));
        }
        else
        { /* block id: 623 */
            int32_t *l_1283 = (void*)0;
            int32_t *l_1284 = (void*)0;
            int32_t *l_1285 = (void*)0;
            int32_t *l_1286 = &l_1115;
            VECTOR(int8_t, 4) l_1293 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L);
            VECTOR(int8_t, 8) l_1296 = (VECTOR(int8_t, 8))(0x14L, (VECTOR(int8_t, 4))(0x14L, (VECTOR(int8_t, 2))(0x14L, 0x09L), 0x09L), 0x09L, 0x14L, 0x09L);
            VECTOR(int8_t, 8) l_1297 = (VECTOR(int8_t, 8))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 1L), 1L), 1L, 4L, 1L);
            uint32_t l_1306 = 0xC6ADBC55L;
            VECTOR(uint64_t, 8) l_1312 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xF391676E6DE20128L), 0xF391676E6DE20128L), 0xF391676E6DE20128L, 18446744073709551615UL, 0xF391676E6DE20128L);
            VECTOR(int16_t, 4) l_1349 = (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0x3700L), 0x3700L);
            int32_t l_1368 = 0x396E9557L;
            int32_t l_1369 = (-6L);
            int i;
            if ((atomic_inc(&p_1413->g_atomic_input[19 * get_linear_group_id() + 7]) == 1))
            { /* block id: 625 */
                int16_t l_1201 = 0x1891L;
                int16_t *l_1200 = &l_1201;
                int16_t **l_1199[1];
                int16_t **l_1202 = &l_1200;
                int32_t l_1248 = (-10L);
                int32_t l_1249 = 0x3F4C404FL;
                int i;
                for (i = 0; i < 1; i++)
                    l_1199[i] = &l_1200;
                l_1202 = l_1199[0];
                for (l_1201 = (-1); (l_1201 != 23); l_1201 = safe_add_func_int16_t_s_s(l_1201, 5))
                { /* block id: 629 */
                    int64_t l_1205[5][6][6] = {{{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L}},{{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L}},{{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L}},{{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L}},{{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L},{(-9L),0x538F63D52541CD91L,(-7L),0x784BA06163AD40D8L,(-8L),0x2A812361C8DFCEE2L}}};
                    int8_t l_1206 = 1L;
                    VECTOR(int32_t, 8) l_1229 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), (-1L)), (-1L)), (-1L), (-7L), (-1L));
                    int32_t l_1230 = 0x541E98C2L;
                    uint64_t l_1231 = 0xE479979B8CA54D8EL;
                    int16_t l_1232 = 0x79ACL;
                    int i, j, k;
                    if ((l_1206 = l_1205[1][5][2]))
                    { /* block id: 631 */
                        int32_t l_1207 = 0x6398EB69L;
                        int16_t l_1208[4] = {0L,0L,0L,0L};
                        VECTOR(int16_t, 8) l_1209 = (VECTOR(int16_t, 8))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x7763L), 0x7763L), 0x7763L, 7L, 0x7763L);
                        VECTOR(uint32_t, 16) l_1210 = (VECTOR(uint32_t, 16))(0xB442AC3FL, (VECTOR(uint32_t, 4))(0xB442AC3FL, (VECTOR(uint32_t, 2))(0xB442AC3FL, 7UL), 7UL), 7UL, 0xB442AC3FL, 7UL, (VECTOR(uint32_t, 2))(0xB442AC3FL, 7UL), (VECTOR(uint32_t, 2))(0xB442AC3FL, 7UL), 0xB442AC3FL, 7UL, 0xB442AC3FL, 7UL);
                        uint32_t l_1213 = 0xEA552086L;
                        struct S1 l_1214 = {4294967295UL,3UL,0L,0xF6L,0x1DC18491L,1L,0x2AEBL,0x536E3F2315308559L};/* VOLATILE GLOBAL l_1214 */
                        uint64_t l_1215 = 0x0811336614BCD5D6L;
                        int32_t *l_1216 = &l_1207;
                        int32_t *l_1217 = &l_1207;
                        int32_t *l_1218[5][2] = {{&l_1214.f4,&l_1214.f4},{&l_1214.f4,&l_1214.f4},{&l_1214.f4,&l_1214.f4},{&l_1214.f4,&l_1214.f4},{&l_1214.f4,&l_1214.f4}};
                        int32_t *l_1219 = &l_1214.f2;
                        int i, j;
                        ++l_1210.sd;
                        l_1219 = (l_1218[4][1] = (l_1213 , (l_1217 = (l_1214 , (l_1215 , (l_1216 = (void*)0))))));
                    }
                    else
                    { /* block id: 637 */
                        struct S1 l_1220 = {0x86177CCCL,0x9BE54276C16D55ADL,0x7D025E86L,248UL,0x6D665552L,0L,65528UL,0x260BDA91BD339718L};/* VOLATILE GLOBAL l_1220 */
                        struct S1 l_1221 = {0UL,8UL,0x46D40C11L,1UL,-4L,-1L,65535UL,0x1989BCF7B27F6B97L};/* VOLATILE GLOBAL l_1221 */
                        int32_t *l_1222 = &l_1220.f4;
                        int32_t *l_1223 = &l_1220.f2;
                        int32_t *l_1224[1][4][6] = {{{&l_1221.f4,&l_1221.f4,&l_1221.f4,&l_1221.f4,&l_1221.f4,&l_1221.f4},{&l_1221.f4,&l_1221.f4,&l_1221.f4,&l_1221.f4,&l_1221.f4,&l_1221.f4},{&l_1221.f4,&l_1221.f4,&l_1221.f4,&l_1221.f4,&l_1221.f4,&l_1221.f4},{&l_1221.f4,&l_1221.f4,&l_1221.f4,&l_1221.f4,&l_1221.f4,&l_1221.f4}}};
                        int32_t *l_1225 = &l_1221.f2;
                        int32_t *l_1226 = &l_1221.f4;
                        VECTOR(int32_t, 16) l_1227 = (VECTOR(int32_t, 16))(0x53F99A9FL, (VECTOR(int32_t, 4))(0x53F99A9FL, (VECTOR(int32_t, 2))(0x53F99A9FL, 2L), 2L), 2L, 0x53F99A9FL, 2L, (VECTOR(int32_t, 2))(0x53F99A9FL, 2L), (VECTOR(int32_t, 2))(0x53F99A9FL, 2L), 0x53F99A9FL, 2L, 0x53F99A9FL, 2L);
                        VECTOR(int16_t, 2) l_1228 = (VECTOR(int16_t, 2))(0L, 9L);
                        int i, j, k;
                        l_1221 = l_1220;
                        l_1224[0][0][5] = (l_1223 = l_1222);
                        l_1226 = l_1225;
                        l_1228.x ^= ((VECTOR(int32_t, 4))(l_1227.sa385)).z;
                    }
                    l_1230 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1229.s2450)).odd)).hi;
                    if ((l_1232 |= l_1231))
                    { /* block id: 646 */
                        VECTOR(int8_t, 8) l_1233 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x6FL), 0x6FL), 0x6FL, (-1L), 0x6FL);
                        uint32_t l_1234 = 1UL;
                        VECTOR(uint16_t, 2) l_1235 = (VECTOR(uint16_t, 2))(65535UL, 0UL);
                        int i;
                        l_1229.s5 &= 0x72918450L;
                        l_1234 ^= l_1233.s7;
                        l_1229.s5 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(0x11BBL, 5L)).xxxxxyxyyyyyyxyx, ((VECTOR(uint16_t, 4))(l_1235.yxxx)).zwwywxzyyywzzxwy))))).s24, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x51005CC8L, 1L)).yxyx)).lo))).yxyxxxyy)).s1;
                    }
                    else
                    { /* block id: 650 */
                        int32_t l_1237 = 0x0CEC5C0BL;
                        int32_t *l_1236 = &l_1237;
                        uint64_t l_1238 = 0x860EAD221F34BC09L;
                        uint64_t l_1241 = 4UL;
                        struct S2 l_1244[8][7] = {{{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L},{0x282B4292L,-5L},{9L,0x425C00E0L},{0x7D23140EL,0x07216C6BL},{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L}},{{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L},{0x282B4292L,-5L},{9L,0x425C00E0L},{0x7D23140EL,0x07216C6BL},{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L}},{{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L},{0x282B4292L,-5L},{9L,0x425C00E0L},{0x7D23140EL,0x07216C6BL},{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L}},{{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L},{0x282B4292L,-5L},{9L,0x425C00E0L},{0x7D23140EL,0x07216C6BL},{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L}},{{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L},{0x282B4292L,-5L},{9L,0x425C00E0L},{0x7D23140EL,0x07216C6BL},{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L}},{{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L},{0x282B4292L,-5L},{9L,0x425C00E0L},{0x7D23140EL,0x07216C6BL},{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L}},{{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L},{0x282B4292L,-5L},{9L,0x425C00E0L},{0x7D23140EL,0x07216C6BL},{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L}},{{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L},{0x282B4292L,-5L},{9L,0x425C00E0L},{0x7D23140EL,0x07216C6BL},{0x7D23140EL,0x07216C6BL},{9L,0x425C00E0L}}};
                        VECTOR(int32_t, 2) l_1245 = (VECTOR(int32_t, 2))(0x405499BCL, 0L);
                        VECTOR(int32_t, 16) l_1246 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x0FBF59DAL), 0x0FBF59DAL), 0x0FBF59DAL, (-3L), 0x0FBF59DAL, (VECTOR(int32_t, 2))((-3L), 0x0FBF59DAL), (VECTOR(int32_t, 2))((-3L), 0x0FBF59DAL), (-3L), 0x0FBF59DAL, (-3L), 0x0FBF59DAL);
                        uint8_t l_1247 = 0UL;
                        int i, j;
                        l_1236 = (void*)0;
                        ++l_1238;
                        l_1229.s3 &= (((l_1241++) , l_1244[3][0]) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(l_1245.xyxyyxyy))))).lo)).x);
                        l_1247 = ((VECTOR(int32_t, 8))(l_1246.s0a3d8bf6)).s7;
                    }
                }
                if ((l_1249 |= l_1248))
                { /* block id: 659 */
                    int32_t l_1250 = 0x4374D7DAL;
                    int32_t l_1251[6][8] = {{0L,5L,(-2L),0L,(-2L),5L,0L,0x62799872L},{0L,5L,(-2L),0L,(-2L),5L,0L,0x62799872L},{0L,5L,(-2L),0L,(-2L),5L,0L,0x62799872L},{0L,5L,(-2L),0L,(-2L),5L,0L,0x62799872L},{0L,5L,(-2L),0L,(-2L),5L,0L,0x62799872L},{0L,5L,(-2L),0L,(-2L),5L,0L,0x62799872L}};
                    int32_t l_1252 = 0L;
                    uint32_t l_1253 = 0UL;
                    int16_t l_1265 = 0x635AL;
                    int i, j;
                    if ((l_1250 , ((l_1251[5][7] , l_1252) , l_1253)))
                    { /* block id: 660 */
                        uint8_t l_1254 = 0xF1L;
                        l_1251[5][7] |= (-1L);
                        l_1254--;
                    }
                    else
                    { /* block id: 663 */
                        int8_t l_1257 = 0x41L;
                        uint8_t l_1258 = 6UL;
                        int16_t l_1261[9] = {0x6A42L,0x6A42L,0x6A42L,0x6A42L,0x6A42L,0x6A42L,0x6A42L,0x6A42L,0x6A42L};
                        int32_t l_1263 = 0x4FE17C7AL;
                        int32_t *l_1262[10][7] = {{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263}};
                        int32_t *l_1264[5][7][6] = {{{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263}},{{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263}},{{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263}},{{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263}},{{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263},{&l_1263,&l_1263,&l_1263,&l_1263,&l_1263,&l_1263}}};
                        int i, j, k;
                        l_1258++;
                        l_1261[1] ^= (l_1251[5][0] = 0L);
                        l_1264[2][6][4] = l_1262[4][3];
                    }
                    if (l_1265)
                    { /* block id: 669 */
                        uint64_t l_1266 = 18446744073709551613UL;
                        VECTOR(int32_t, 2) l_1269 = (VECTOR(int32_t, 2))(0x1C06CC18L, 0x2AD406B3L);
                        VECTOR(int32_t, 16) l_1270 = (VECTOR(int32_t, 16))(0x1B5B7A19L, (VECTOR(int32_t, 4))(0x1B5B7A19L, (VECTOR(int32_t, 2))(0x1B5B7A19L, 0L), 0L), 0L, 0x1B5B7A19L, 0L, (VECTOR(int32_t, 2))(0x1B5B7A19L, 0L), (VECTOR(int32_t, 2))(0x1B5B7A19L, 0L), 0x1B5B7A19L, 0L, 0x1B5B7A19L, 0L);
                        int i;
                        ++l_1266;
                        l_1251[5][7] |= ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(l_1269.yyxxxxyx)), ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x24F63B8BL, 0x4359CB35L)).yxxy)).zwxwwyxzzxwzwzyz, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_1270.sb9d01390)))).s15)).yxyxxxxxxyxyxyxy))).odd))).s7;
                    }
                    else
                    { /* block id: 672 */
                        int32_t *l_1271 = (void*)0;
                        struct S0 l_1273 = {4L,6L,0xC2L,0x3F1FL,0L,1L,0xA8B3L,0x391185B0L,0x02F4L};/* VOLATILE GLOBAL l_1273 */
                        struct S0 *l_1272 = &l_1273;
                        l_1271 = (void*)0;
                        l_1272 = l_1272;
                    }
                }
                else
                { /* block id: 676 */
                    int32_t l_1274[8] = {0x14EA4FB9L,0x14EA4FB9L,0x14EA4FB9L,0x14EA4FB9L,0x14EA4FB9L,0x14EA4FB9L,0x14EA4FB9L,0x14EA4FB9L};
                    int i;
                    for (l_1274[3] = 0; (l_1274[3] > 12); l_1274[3] = safe_add_func_uint16_t_u_u(l_1274[3], 3))
                    { /* block id: 679 */
                        int32_t l_1278 = (-7L);
                        int32_t *l_1277 = &l_1278;
                        int32_t *l_1279 = &l_1278;
                        int32_t *l_1280 = &l_1278;
                        l_1280 = (l_1279 = (GROUP_DIVERGE(2, 1) , l_1277));
                    }
                }
                unsigned int result = 0;
                result += l_1201;
                result += l_1248;
                result += l_1249;
                atomic_add(&p_1413->g_special_values[19 * get_linear_group_id() + 7], result);
            }
            else
            { /* block id: 684 */
                (1 + 1);
            }
            (*l_1286) |= (p_1413->g_1281 , ((*p_1413->g_199) &= (((**p_1413->g_750) = (void*)0) == l_1282)));
            for (l_1121 = 19; (l_1121 <= 30); ++l_1121)
            { /* block id: 692 */
                uint64_t l_1292 = 0xD6CA7E18688DEC0AL;
                VECTOR(int8_t, 4) l_1295 = (VECTOR(int8_t, 4))(0x0AL, (VECTOR(int8_t, 2))(0x0AL, 0x70L), 0x70L);
                uint8_t *l_1305 = (void*)0;
                int16_t ****l_1309 = (void*)0;
                int16_t ****l_1310 = (void*)0;
                int16_t ****l_1311 = &p_1413->g_750;
                int16_t *****l_1322 = (void*)0;
                int16_t *****l_1323 = &l_1310;
                VECTOR(int16_t, 2) l_1324 = (VECTOR(int16_t, 2))(0x11A8L, 1L);
                int i;
                p_1413->g_1331 = ((safe_add_func_int64_t_s_s((((l_1184 = (((((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 8))(l_1291.yyyyxxyy)).s3734530221510026, ((VECTOR(int8_t, 8))(l_1292, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(l_1293.ww)).xyxx, ((VECTOR(int8_t, 16))(p_1413->g_1294.s0456216311612627)).s8fe9))), ((VECTOR(int8_t, 2))(l_1295.wz)), (-9L))).s5117132505632461))).s83, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_1296.s5015)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_1297.s5733653662116514)).s866b)).w, ((VECTOR(int8_t, 2))((-1L), 1L)), 1L)))).s45, ((VECTOR(int8_t, 4))(p_1413->g_1298.s4527)).hi)))))).yxxx)).wxwxyxwy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(1L, (-1L))).yxyyyyxxxxxyyxyy)).even, ((VECTOR(int8_t, 2))(p_1413->g_1299.yx)).yyxxxxxx))).s6 , ((((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(l_1302.s8abf)).xyyzxxxwwwxzxyww, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1413->g_1303.sf6)).xyyxyxyxyxxxyxxy)).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1413->g_1304.yx)).yyyyxyxxyxyyxxyx)).even, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 7L)).xxyxyxxx)).s53))).xyyxxyxxyxxxxxxx)).s5e, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((--l_1306) || (((*l_1311) = &p_1413->g_397) != ((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_1312.s1250250630454141)).s87ca)).z || (safe_add_func_uint64_t_u_u((p_1413->g_1315 , ((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((p_1413->g_1320 != ((*l_1323) = l_1309)), ((VECTOR(int16_t, 2))(l_1324.yx)).odd)), (safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(l_1291.y, l_1175.x)), l_1170)))) == (p_1413->g_326.x , l_1291.y))), p_1413->g_353))) , (void*)0))), ((VECTOR(int32_t, 4))(0x0C45DAF7L)), 0x34CB1296L, 0x1F3C02AFL, 0x191378EFL)).lo, ((VECTOR(int32_t, 4))(0x15E0D32AL)), ((VECTOR(int32_t, 4))(0L))))).even))).xxyxyxxy))).lo, ((VECTOR(int32_t, 4))(0x4A915B68L))))).wywyyywyzyzzzyzw)).s0640)).hi)).yyxxxxxxxyyxyxyy))).s4, l_1329)) , (void*)0) != &p_1413->g_194) | l_1184)) , l_1324.x) > l_1324.y)) ^ l_1058.se) >= p_1413->g_1098[5].f0), 2UL)) , p_1413->g_1330);
                if ((**p_1413->g_763))
                    break;
                (*l_1286) ^= (!(*p_1413->g_199));
            }
            if ((((safe_unary_minus_func_int8_t_s(0x4EL)) && ((safe_mul_func_int16_t_s_s(0x42DAL, (~(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))((safe_div_func_int64_t_s_s((((0x93BBDF8FL | ((l_1339 != ((safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(l_1175.y, ((VECTOR(uint8_t, 16))(p_1413->g_1344.sd3775255b91a4e0a)).sc)) , 3UL), ((safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_1349.zzxzzzxxyzyyyzzz)).sc2)).yyyx, ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(p_1413->g_1350.wywzwxxy)), ((VECTOR(int16_t, 2))(p_1413->g_1351.yx)).yyyyyyyy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(p_1413->g_1352.s3454256745260562)).sd1, ((VECTOR(int16_t, 16))(p_1413->g_1353.s0717332530645067)).sd9))), 1L, 0x11D9L)).yyxwxxxz))))).hi))).z, (((0x22807CC0EA931777L != ((void*)0 != &p_1413->g_199)) >= l_1302.sf) & 0x57L))), l_1184)) > l_1057.y))) , &p_1413->g_690)) , l_1184)) , l_1057.w) != p_1413->g_108.f3), l_1291.x)), l_1116, 255UL, 2UL)))), 0x3AL, 255UL, ((VECTOR(uint8_t, 2))(255UL)), 1UL, FAKE_DIVERGE(p_1413->local_2_offset, get_local_id(2), 10), (*l_1286), 0x9BL, 0xFEL, 0UL, 2UL, 0UL)).se5))))), ((VECTOR(uint8_t, 2))(0x0BL))))).odd <= l_1058.se)))) < l_1116)) > l_1121))
            { /* block id: 701 */
                int32_t **l_1356 = &l_1285;
                int32_t *l_1357 = &l_1061;
                int32_t *l_1358 = (void*)0;
                int32_t *l_1359 = &p_1413->g_1315.f1;
                int32_t *l_1360 = &l_1117;
                int32_t *l_1361 = &p_1413->g_768.f1;
                int32_t *l_1362 = (void*)0;
                int32_t *l_1363 = &p_1413->g_858.f2;
                int32_t *l_1364 = &l_1061;
                int32_t *l_1365 = (void*)0;
                int32_t *l_1366 = &p_1413->g_58[7][0];
                int32_t *l_1367[10][2][4] = {{{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329},{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329}},{{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329},{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329}},{{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329},{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329}},{{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329},{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329}},{{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329},{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329}},{{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329},{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329}},{{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329},{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329}},{{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329},{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329}},{{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329},{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329}},{{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329},{(void*)0,&p_1413->g_58[0][0],&p_1413->g_858.f4,&l_1329}}};
                int32_t l_1371 = 0L;
                int i, j, k;
                (*l_1356) = (*p_1413->g_831);
                p_1413->g_1377[3][1][0]--;
            }
            else
            { /* block id: 704 */
                int64_t l_1382 = (-9L);
                (*l_1286) = (safe_lshift_func_uint8_t_u_s(l_1382, 2));
            }
        }
        l_1397--;
        (*p_1413->g_1401) = l_1400;
        return (*l_1385);
    }
    l_1114 |= ((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(p_1413->g_1402.yyxx)).wzyxwwyw, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((safe_mod_func_int32_t_s_s((~((p_1413->g_240 = (((VECTOR(uint16_t, 8))(l_1405.s11763360)).s7 < (**p_1413->g_397))) >= (((**p_1413->g_198) & (*p_1413->g_199)) | (6L > ((VECTOR(uint32_t, 16))(p_1413->g_1407.s06eeaf98ea44d8b6)).s7)))), (l_1170 && ((p_1413->g_1315.f5 , (l_1115 ^= 0x6D3DL)) , ((((VECTOR(uint64_t, 16))(p_1413->g_1410.se24a11afc7394850)).s8 , (void*)0) != l_1411))))) , (*p_1413->g_199)), ((VECTOR(int32_t, 2))(0L)), 0L)).zwyywyxzwzyzwyzy)))).lo))).s20)), ((VECTOR(int32_t, 4))(0x3E869A26L)), 0x095FB78BL, 0x749A50C4L, 0L, 1L, ((VECTOR(int32_t, 2))(1L)), l_1412, (-10L), 0x328E8539L)).s8;
    return (*p_1413->g_780);
}


/* ------------------------------------------ */
/* 
 * reads : p_1413->g_107 p_1413->g_108 p_1413->g_768.f0 p_1413->g_72.f4 p_1413->g_768.f5 p_1413->g_504.f0 p_1413->g_504.f3 p_1413->g_397 p_1413->g_194 p_1413->g_143 p_1413->g_120 p_1413->l_comm_values p_1413->g_750 p_1413->g_195 p_1413->g_844 p_1413->g_334 p_1413->g_58 p_1413->g_863 p_1413->g_199 p_1413->g_769.f2 p_1413->g_879 p_1413->g_901 p_1413->g_367 p_1413->g_404.f2 p_1413->g_780 p_1413->g_335 p_1413->g_336 p_1413->g_262 p_1413->g_349.f3 p_1413->g_484 p_1413->g_165 p_1413->g_980 p_1413->g_1009 p_1413->g_177 p_1413->g_769.f5 p_1413->g_72.f2
 * writes: p_1413->g_58 p_1413->g_61 p_1413->g_143 p_1413->g_108.f2 p_1413->g_195 p_1413->g_108.f3 p_1413->g_72.f4 p_1413->g_313 p_1413->g_199 p_1413->g_532 p_1413->g_880 p_1413->g_368 p_1413->g_137 p_1413->g_177 p_1413->g_769.f5 p_1413->g_768.f0 p_1413->g_901.f1 p_1413->g_504.f1 p_1413->g_108.f5 p_1413->g_901.f5 p_1413->g_72.f2
 */
uint8_t  func_2(uint64_t  p_3, struct S3 * p_1413)
{ /* block id: 5 */
    VECTOR(int32_t, 8) l_793 = (VECTOR(int32_t, 8))(0x62226494L, (VECTOR(int32_t, 4))(0x62226494L, (VECTOR(int32_t, 2))(0x62226494L, 0L), 0L), 0L, 0x62226494L, 0L);
    int32_t *l_830 = &p_1413->g_72.f4;
    struct S2 **l_843 = &p_1413->g_781[1];
    uint8_t l_861 = 0xD6L;
    int16_t l_864[8] = {1L,0L,1L,1L,0L,1L,1L,0L};
    struct S0 **l_938[7][4] = {{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367}};
    VECTOR(int16_t, 16) l_1007 = (VECTOR(int16_t, 16))(0x30EDL, (VECTOR(int16_t, 4))(0x30EDL, (VECTOR(int16_t, 2))(0x30EDL, (-7L)), (-7L)), (-7L), 0x30EDL, (-7L), (VECTOR(int16_t, 2))(0x30EDL, (-7L)), (VECTOR(int16_t, 2))(0x30EDL, (-7L)), 0x30EDL, (-7L), 0x30EDL, (-7L));
    int64_t *l_1052[3];
    int64_t **l_1051 = &l_1052[0];
    int16_t **l_1056 = &p_1413->g_194;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1052[i] = &p_1413->g_313[3];
    if ((atomic_inc(&p_1413->l_atomic_input[17]) == 7))
    { /* block id: 7 */
        uint32_t l_4[3];
        VECTOR(int32_t, 8) l_56 = (VECTOR(int32_t, 8))(0x31F8626BL, (VECTOR(int32_t, 4))(0x31F8626BL, (VECTOR(int32_t, 2))(0x31F8626BL, 0x449480DDL), 0x449480DDL), 0x449480DDL, 0x31F8626BL, 0x449480DDL);
        VECTOR(int32_t, 2) l_57 = (VECTOR(int32_t, 2))(0x34615933L, (-1L));
        int i;
        for (i = 0; i < 3; i++)
            l_4[i] = 0x3A92BD42L;
        ++l_4[1];
        for (l_4[1] = 0; (l_4[1] > 40); l_4[1] = safe_add_func_int64_t_s_s(l_4[1], 3))
        { /* block id: 11 */
            int32_t l_9 = (-1L);
            int8_t l_51 = 0x59L;
            int64_t l_52 = 1L;
            uint8_t l_53[10][5] = {{3UL,248UL,0xCAL,253UL,0xF4L},{3UL,248UL,0xCAL,253UL,0xF4L},{3UL,248UL,0xCAL,253UL,0xF4L},{3UL,248UL,0xCAL,253UL,0xF4L},{3UL,248UL,0xCAL,253UL,0xF4L},{3UL,248UL,0xCAL,253UL,0xF4L},{3UL,248UL,0xCAL,253UL,0xF4L},{3UL,248UL,0xCAL,253UL,0xF4L},{3UL,248UL,0xCAL,253UL,0xF4L},{3UL,248UL,0xCAL,253UL,0xF4L}};
            int i, j;
            for (l_9 = 0; (l_9 > (-17)); l_9 = safe_sub_func_int64_t_s_s(l_9, 7))
            { /* block id: 14 */
                struct S2 l_12 = {0x099A5671L,0x65034859L};/* VOLATILE GLOBAL l_12 */
                uint64_t l_13 = 0UL;
                VECTOR(uint32_t, 2) l_14 = (VECTOR(uint32_t, 2))(1UL, 0x153413F0L);
                uint32_t l_45[8] = {0xC84D8BC8L,0xC84D8BC8L,0xC84D8BC8L,0xC84D8BC8L,0xC84D8BC8L,0xC84D8BC8L,0xC84D8BC8L,0xC84D8BC8L};
                uint32_t l_46 = 0x6E91F131L;
                int i;
                l_14.x = ((((VECTOR(int32_t, 2))(0x55F8D9A2L, 0x2C4475EEL)).even , l_12) , l_13);
                for (l_13 = 0; (l_13 >= 4); l_13 = safe_add_func_int8_t_s_s(l_13, 8))
                { /* block id: 18 */
                    VECTOR(int32_t, 2) l_17 = (VECTOR(int32_t, 2))(0x421B07FBL, 0x50D1D847L);
                    int32_t l_18 = 0x5E8CC195L;
                    uint16_t l_29 = 0xFDAFL;
                    uint16_t l_30 = 0x2629L;
                    int32_t *l_31 = (void*)0;
                    int i;
                    if ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_17.yy)).xyxxyxyx)).s3 , l_18))
                    { /* block id: 19 */
                        int64_t l_19 = 0x3D77DFCC86F80366L;
                        uint16_t l_20 = 0UL;
                        --l_20;
                    }
                    else
                    { /* block id: 21 */
                        VECTOR(int32_t, 2) l_23 = (VECTOR(int32_t, 2))(0x665DD4D1L, 0x71808ADCL);
                        uint32_t l_24[1][8] = {{4UL,0x4F9AF392L,4UL,4UL,0x4F9AF392L,4UL,4UL,0x4F9AF392L}};
                        int64_t l_27 = (-1L);
                        VECTOR(int32_t, 4) l_28 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4DB9BEC7L), 0x4DB9BEC7L);
                        int i, j;
                        l_17.x = ((VECTOR(int32_t, 8))(l_23.yxyyxyyx)).s6;
                        ++l_24[0][4];
                        l_17.x = (l_27 , (-10L));
                        l_17.y = ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_28.zxzyzywywywxzzxw)).s4584)).even, ((VECTOR(int32_t, 2))((-1L), 0x4DAD2401L))))).even;
                    }
                    l_30 &= l_29;
                    l_31 = l_31;
                    for (l_30 = 0; (l_30 >= 42); l_30++)
                    { /* block id: 31 */
                        struct S2 l_34 = {-1L,0x49FC22F7L};/* VOLATILE GLOBAL l_34 */
                        uint8_t l_35 = 1UL;
                        int8_t l_36 = 0L;
                        uint64_t l_37 = 0xCD142575E7E8EE72L;
                        int16_t l_38 = 7L;
                        int8_t l_39 = (-5L);
                        int64_t l_40 = 0x7FAEF1792F5726B0L;
                        int32_t l_41 = (-9L);
                        uint64_t l_42 = 9UL;
                        l_34 = l_34;
                        l_36 |= l_35;
                        l_18 |= l_37;
                        ++l_42;
                    }
                }
                l_46 |= l_45[0];
                for (l_14.y = (-24); (l_14.y > 43); l_14.y = safe_add_func_int16_t_s_s(l_14.y, 8))
                { /* block id: 41 */
                    int16_t l_49 = 0x3DC1L;
                    int8_t l_50 = 1L;
                    l_50 &= l_49;
                }
            }
            l_53[2][1]--;
        }
        l_57.x ^= ((VECTOR(int32_t, 16))(l_56.s0043353257754165)).s7;
        unsigned int result = 0;
        int l_4_i0;
        for (l_4_i0 = 0; l_4_i0 < 3; l_4_i0++) {
            result += l_4[l_4_i0];
        }
        result += l_56.s7;
        result += l_56.s6;
        result += l_56.s5;
        result += l_56.s4;
        result += l_56.s3;
        result += l_56.s2;
        result += l_56.s1;
        result += l_56.s0;
        result += l_57.y;
        result += l_57.x;
        atomic_add(&p_1413->l_special_values[17], result);
    }
    else
    { /* block id: 48 */
        (1 + 1);
    }
    if ((p_1413->g_58[7][0] = (0x67L || p_3)))
    { /* block id: 52 */
        uint32_t l_800 = 0UL;
        uint8_t l_819 = 0xDCL;
        int32_t l_821 = 0x379CBCAEL;
        struct S2 **l_842[1];
        int i;
        for (i = 0; i < 1; i++)
            l_842[i] = &p_1413->g_781[0];
        for (p_3 = (-25); (p_3 > 20); p_3 = safe_add_func_uint32_t_u_u(p_3, 6))
        { /* block id: 55 */
            int32_t *l_62[6][3] = {{&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_58[7][0]},{&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_58[7][0]},{&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_58[7][0]},{&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_58[7][0]},{&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_58[7][0]},{&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_58[7][0]}};
            int16_t **l_796[4][5][5] = {{{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0}},{{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0}},{{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0}},{{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0},{(void*)0,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,(void*)0}}};
            uint8_t *l_804 = &p_1413->g_108.f3;
            struct S1 ***l_820[1][7][9] = {{{&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484},{&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484},{&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484},{&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484},{&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484},{&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484},{&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484,&p_1413->g_484}}};
            int i, j, k;
            p_1413->g_61.s5 = ((VECTOR(int32_t, 8))(p_1413->g_61.s14541554)).s1;
        }
        (*p_1413->g_195) = (((((VECTOR(uint8_t, 16))(1UL, (((((*p_1413->g_107) , p_1413->g_768.f0) | ((*p_1413->g_194) = (((((safe_sub_func_uint8_t_u_u((((*l_830) > p_1413->g_768.f5) < (safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int8_t_s_u((65535UL < ((safe_mul_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_s((((p_1413->g_504[0].f0 == 1L) , l_842[0]) == l_843), 2)) | (*l_830)) <= 0x3D3EC878L) == l_819), l_819)) > p_1413->g_504[0].f3)), p_3)) , p_3) > 0x1EL), (**p_1413->g_397)))), 0x26L)) != 0x3D021263L) & p_1413->g_120.w) >= p_1413->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1413->tid, 104))]) >= (***p_1413->g_750)))) | 3L) & 1UL), 0x1CL, ((VECTOR(uint8_t, 8))(0xF8L)), (*l_830), 1UL, p_3, 253UL, 9UL)).se > 0x55L) > (*l_830)) , l_819);
    }
    else
    { /* block id: 456 */
        (*p_1413->g_844) = l_830;
    }
    for (p_1413->g_108.f3 = 0; (p_1413->g_108.f3 == 36); p_1413->g_108.f3 = safe_add_func_uint32_t_u_u(p_1413->g_108.f3, 1))
    { /* block id: 461 */
        struct S0 **l_847 = (void*)0;
        uint64_t l_854[1][3];
        int64_t *l_855 = &p_1413->g_313[1];
        struct S1 *l_857 = &p_1413->g_858;
        struct S1 **l_856 = &l_857;
        uint32_t *l_860 = &p_1413->g_165[0];
        uint32_t **l_859 = &l_860;
        VECTOR(int64_t, 2) l_867 = (VECTOR(int64_t, 2))((-1L), 0x271F909C8B627E2BL);
        int8_t **l_878 = &p_1413->g_380[1][4];
        VECTOR(int32_t, 4) l_889 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L));
        uint64_t l_898 = 0x8DC83E9E79721D77L;
        int16_t l_978 = 0x20D4L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_854[i][j] = 0xA3521A0856FD7D29L;
        }
        (*p_1413->g_863) = func_68(((l_847 != &p_1413->g_350) , (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((p_3 == (((*l_830) &= (-7L)) <= (safe_sub_func_int64_t_s_s((((*l_855) = l_854[0][0]) < (((*l_859) = func_68(((*p_1413->g_334) != ((*l_856) = (void*)0)), p_1413)) == l_830)), l_854[0][0])))) , l_861) < 0x2BL), FAKE_DIVERGE(p_1413->global_2_offset, get_global_id(2), 10))), (-5L)))), p_1413);
        if (((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_864[7], ((VECTOR(int32_t, 2))((-1L), 6L)), 1L)))).xxwzywyzyzywxwxy, ((VECTOR(int32_t, 4))(0x4E38F144L, ((VECTOR(int32_t, 2))((-9L), (-5L))), 0x59EA19C5L)).yzzzxwwzzywzzwyz))).sb)
        { /* block id: 467 */
            VECTOR(int64_t, 16) l_868 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int64_t, 2))(1L, 0L), (VECTOR(int64_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
            int32_t l_873 = 0x680E3940L;
            int32_t *l_881 = &p_1413->g_72.f2;
            int32_t *l_882 = &p_1413->g_72.f4;
            int32_t *l_883 = &p_1413->g_108.f4;
            int32_t *l_884 = (void*)0;
            int32_t *l_885 = &p_1413->g_72.f4;
            int32_t *l_886 = &p_1413->g_108.f4;
            int32_t *l_887 = &p_1413->g_108.f2;
            int32_t *l_888 = &p_1413->g_858.f2;
            int32_t *l_890 = &p_1413->g_768.f1;
            int32_t *l_891 = &p_1413->g_108.f2;
            int32_t *l_892 = (void*)0;
            int32_t *l_893 = &p_1413->g_58[7][0];
            int32_t *l_894 = &p_1413->g_368.f1;
            int32_t *l_895 = &p_1413->g_368.f1;
            int32_t *l_896 = &p_1413->g_858.f2;
            int32_t *l_897[9][10][2] = {{{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1}},{{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1}},{{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1}},{{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1}},{{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1}},{{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1}},{{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1}},{{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1}},{{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1},{&p_1413->g_768.f1,&p_1413->g_768.f1}}};
            int i, j, k;
            if ((**p_1413->g_863))
            { /* block id: 468 */
                return l_854[0][0];
            }
            else
            { /* block id: 470 */
                int64_t *l_874 = (void*)0;
                int64_t *l_875 = (void*)0;
                int64_t *l_876 = (void*)0;
                int64_t *l_877[10][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                if ((((safe_add_func_int32_t_s_s(((p_1413->g_532.s1 = ((*l_855) = (((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_867.yx)), ((VECTOR(int64_t, 4))(l_868.s49d1)), 0x21B6E629E2712839L, 0x3A23A95500187904L, 0x593FB114F831B74EL, ((safe_lshift_func_int8_t_s_u(p_3, ((p_1413->g_769.f2 | p_1413->g_58[7][0]) > (FAKE_DIVERGE(p_1413->local_0_offset, get_local_id(0), 10) <= (l_854[0][2] > (0xDF1F25354014DF6FL < p_3)))))) > (0x2095EFDEL <= ((*p_1413->g_195) | (l_873 |= l_854[0][1])))), 0x3229B4FFA0630D84L, l_867.y, 0x44EA2F68EB1F4640L, ((VECTOR(int64_t, 2))(0x7701CCB1D3286CD3L)), (-1L))).sc >= FAKE_DIVERGE(p_1413->group_1_offset, get_group_id(1), 10)) != p_3) ^ 0x2411317FL))) >= p_3), 0x3773E83AL)) | FAKE_DIVERGE(p_1413->group_0_offset, get_group_id(0), 10)) || p_3))
                { /* block id: 474 */
                    return p_3;
                }
                else
                { /* block id: 476 */
                    (*p_1413->g_879) = l_878;
                }
            }
            if (p_3)
                continue;
            l_898--;
            (*p_1413->g_367) = p_1413->g_901;
        }
        else
        { /* block id: 483 */
            int32_t *l_902 = (void*)0;
            int32_t **l_903 = &l_830;
            VECTOR(uint64_t, 16) l_949 = (VECTOR(uint64_t, 16))(0xBC194BF576A7F8D5L, (VECTOR(uint64_t, 4))(0xBC194BF576A7F8D5L, (VECTOR(uint64_t, 2))(0xBC194BF576A7F8D5L, 1UL), 1UL), 1UL, 0xBC194BF576A7F8D5L, 1UL, (VECTOR(uint64_t, 2))(0xBC194BF576A7F8D5L, 1UL), (VECTOR(uint64_t, 2))(0xBC194BF576A7F8D5L, 1UL), 0xBC194BF576A7F8D5L, 1UL, 0xBC194BF576A7F8D5L, 1UL);
            uint32_t l_954 = 8UL;
            uint16_t l_977 = 0x25D5L;
            int32_t l_993 = 0x54B727C8L;
            int32_t l_997[7] = {1L,0x7C9413EBL,1L,1L,0x7C9413EBL,1L,1L};
            VECTOR(int16_t, 2) l_1008 = (VECTOR(int16_t, 2))(0x699AL, 1L);
            struct S0 **l_1011[4][7] = {{(void*)0,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,(void*)0},{(void*)0,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,(void*)0},{(void*)0,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,(void*)0},{(void*)0,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,(void*)0}};
            uint32_t l_1016 = 4294967287UL;
            int i, j;
            (*l_903) = (l_902 = func_68(p_3, p_1413));
            if (p_3)
            { /* block id: 486 */
                uint64_t *l_921 = &l_898;
                struct S0 ***l_936[1][7] = {{&l_847,(void*)0,&l_847,&l_847,(void*)0,&l_847,&l_847}};
                struct S0 **l_937 = &p_1413->g_367;
                int8_t *l_939 = (void*)0;
                int8_t *l_940[9][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int32_t l_941[3][6][9] = {{{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L},{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L},{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L},{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L},{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L},{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L}},{{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L},{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L},{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L},{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L},{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L},{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L}},{{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L},{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L},{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L},{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L},{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L},{0x2CCF40BCL,0x2204BC19L,(-5L),0L,0x4DF4B95EL,0L,0L,0x4DF4B95EL,0L}}};
                uint16_t *l_942 = &p_1413->g_368.f6;
                uint8_t *l_943 = &l_861;
                int32_t l_944 = (-10L);
                volatile struct S0 *l_1001 = &p_1413->g_779;
                int i, j, k;
                if (((*p_1413->g_195) &= ((safe_mul_func_uint8_t_u_u(((*l_943) = ((safe_rshift_func_uint16_t_u_u((~((*l_942) = (safe_mul_func_int8_t_s_s(((*l_830) = (l_889.x = ((safe_unary_minus_func_uint16_t_u((safe_sub_func_uint32_t_u_u(((0x18A33E5871664F67L == (safe_sub_func_int32_t_s_s(0x5B300692L, (0x6FAADC3EL && ((((safe_mod_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_u(p_1413->g_404[3][0].f2, (((*l_921)++) || ((safe_div_func_uint64_t_u_u(18446744073709551611UL, (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((VECTOR(int8_t, 8))(((safe_sub_func_uint16_t_u_u((((*p_1413->g_780) = (((*l_830) ^ (safe_lshift_func_int8_t_s_u((-1L), 2))) && (((l_937 = l_847) == (l_938[2][3] = (l_867.x , (void*)0))) <= 1L))) , p_3), 1UL)) <= p_3), ((VECTOR(int8_t, 2))(1L)), p_3, 0L, 0x1AL, 5L, 1L)).s2 | p_3), 2UL)), l_854[0][0])))) && 4294967289UL)))) <= 0x4622L), (*l_830))) , l_830) == &p_1413->g_352), 0xECL)) != 0UL) < p_3) < l_867.y))))) && l_854[0][0]), 1UL)))) , 0L))), l_941[2][3][8])))), l_854[0][0])) < 0x9BL)), p_3)) || l_944)))
                { /* block id: 496 */
                    uint32_t *l_953 = &p_1413->g_240;
                    uint32_t **l_952 = &l_953;
                    (*p_1413->g_195) = ((*p_1413->g_199) = ((*p_1413->g_335) != ((65535UL && (safe_rshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_949.saba254d799c9f303)).saa27)).y, ((**l_903) , p_3))), 1))) , ((*l_952) = func_68((--(**l_859)), p_1413)))));
                    (*p_1413->g_195) = 0x34FDFF48L;
                    (*p_1413->g_262) = (void*)0;
                }
                else
                { /* block id: 503 */
                    int32_t *l_957 = (void*)0;
                    uint32_t *l_974[7][6];
                    uint32_t **l_973 = &l_974[1][2];
                    int32_t l_981 = 0x545348D8L;
                    int32_t l_983 = 0x5637A15EL;
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_974[i][j] = &p_1413->g_240;
                    }
                    l_954--;
                    (*l_903) = l_957;
                    if ((((*l_921) = 0x7E9FE73155E913BDL) | p_1413->g_349.f3))
                    { /* block id: 507 */
                        int64_t *l_966 = &p_1413->g_313[2];
                        (*l_902) &= (safe_lshift_func_uint8_t_u_u((((((**p_1413->g_484) , (((safe_rshift_func_int8_t_s_s((((p_3 , (safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s((((void*)0 != l_966) | (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(p_3, (++(*l_943)))), p_3))), ((void*)0 == l_973))) >= (((((safe_mod_func_int16_t_s_s(p_3, l_977)) <= p_3) | FAKE_DIVERGE(p_1413->global_1_offset, get_global_id(1), 10)) , 0x52D2942EL) == p_3)), l_978))) ^ 1L) >= l_941[2][3][8]), p_3)) == 0x6D91L) | p_3)) | p_1413->g_165[0]) >= p_3) , FAKE_DIVERGE(p_1413->global_1_offset, get_global_id(1), 10)), l_978));
                    }
                    else
                    { /* block id: 510 */
                        int32_t *l_979 = &p_1413->g_108.f2;
                        int32_t *l_982 = &l_981;
                        int32_t *l_984 = &l_941[2][3][8];
                        int32_t *l_985 = &l_941[0][3][3];
                        int32_t *l_986 = (void*)0;
                        int32_t *l_987 = (void*)0;
                        int32_t l_988 = 0x264F4E47L;
                        int32_t *l_989 = &l_983;
                        int32_t *l_990 = &p_1413->g_504[0].f1;
                        int32_t *l_991 = &p_1413->g_72.f2;
                        int32_t *l_992 = (void*)0;
                        int32_t *l_994 = (void*)0;
                        int32_t *l_995 = &l_983;
                        int32_t *l_996[3][8][10] = {{{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988}},{{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988}},{{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988},{&p_1413->g_901.f1,&p_1413->g_858.f4,&p_1413->g_58[7][0],&p_1413->g_58[7][0],&p_1413->g_504[0].f1,&l_988,&p_1413->g_858.f2,(void*)0,(void*)0,&l_988}}};
                        uint8_t l_998 = 0x5AL;
                        int i, j, k;
                        (*p_1413->g_980) = ((*l_903) = l_979);
                        l_998--;
                        l_1001 = &p_1413->g_776;
                    }
                }
            }
            else
            { /* block id: 517 */
                struct S0 **l_1010[8][3][9] = {{{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367}},{{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367}},{{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367}},{{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367}},{{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367}},{{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367}},{{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367}},{{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367},{&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,&p_1413->g_367,(void*)0,(void*)0,&p_1413->g_367,(void*)0,&p_1413->g_367}}};
                uint16_t *l_1012[5][2][1] = {{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}}};
                uint64_t *l_1013 = &p_1413->g_177[2];
                int32_t l_1014[9][8][2] = {{{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L}},{{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L}},{{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L}},{{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L}},{{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L}},{{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L}},{{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L}},{{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L}},{{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L},{1L,0x5B974732L}}};
                int32_t *l_1015[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1015[i] = &p_1413->g_58[7][0];
                (*p_1413->g_195) |= (safe_sub_func_uint64_t_u_u(((safe_unary_minus_func_int16_t_s(p_3)) & ((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(l_1007.se8b8)).yxxyzzyx, ((VECTOR(int16_t, 8))(l_1008.xyxxyyxy)), ((VECTOR(int16_t, 2))(p_1413->g_1009.s53)).yxxyxyxy))).s2, 8)) , (l_889.z = ((l_1010[5][1][1] = &p_1413->g_367) == l_1011[1][6])))), ((*l_1013) &= ((*l_830) = p_3))));
                l_1016--;
                return l_889.x;
            }
            return l_889.w;
        }
        if (p_3)
            break;
    }
    if ((*l_830))
    { /* block id: 530 */
        int64_t l_1032 = 4L;
        int32_t *l_1050 = &p_1413->g_58[7][0];
        int16_t **l_1055[8] = {&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194,&p_1413->g_194};
        int i;
        for (p_1413->g_769.f5 = 0; (p_1413->g_769.f5 > (-4)); p_1413->g_769.f5--)
        { /* block id: 533 */
            uint32_t l_1033 = 4294967286UL;
            int32_t *l_1047 = &p_1413->g_72.f2;
            int64_t ***l_1053 = &l_1051;
            struct S0 ***l_1054 = &l_938[2][3];
            int i, j;
            for (p_1413->g_768.f0 = (-18); (p_1413->g_768.f0 >= 6); p_1413->g_768.f0++)
            { /* block id: 536 */
                int32_t *l_1023 = &p_1413->g_504[0].f1;
                int32_t *l_1024 = &p_1413->g_353;
                int32_t *l_1025 = &p_1413->g_858.f2;
                int32_t *l_1026 = &p_1413->g_768.f1;
                int32_t *l_1027 = &p_1413->g_108.f2;
                int32_t *l_1028 = &p_1413->g_901.f1;
                int32_t *l_1029 = &p_1413->g_504[0].f1;
                int32_t *l_1030[9] = {&p_1413->g_58[8][0],&p_1413->g_58[8][0],&p_1413->g_58[8][0],&p_1413->g_58[8][0],&p_1413->g_58[8][0],&p_1413->g_58[8][0],&p_1413->g_58[8][0],&p_1413->g_58[8][0],&p_1413->g_58[8][0]};
                int8_t l_1031 = 0x3FL;
                int i;
                l_1033++;
                for (p_1413->g_901.f1 = 0; (p_1413->g_901.f1 != 19); ++p_1413->g_901.f1)
                { /* block id: 540 */
                    uint8_t l_1040[9];
                    int8_t *l_1041 = (void*)0;
                    int8_t *l_1042 = &l_1031;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1040[i] = 0xDFL;
                    (*l_1023) = (safe_div_func_int8_t_s_s((0x4DE5E63F37DC4A7BL ^ (0x2E6EL & p_3)), ((*l_1042) = l_1040[6])));
                    return p_3;
                }
                for (p_1413->g_108.f5 = 0; (p_1413->g_108.f5 != (-18)); --p_1413->g_108.f5)
                { /* block id: 547 */
                    for (p_1413->g_901.f5 = 0; (p_1413->g_901.f5 != (-21)); p_1413->g_901.f5--)
                    { /* block id: 550 */
                        int32_t **l_1048 = &l_830;
                        int32_t **l_1049 = &l_1023;
                        (*l_1049) = (p_3 , ((*l_1048) = l_1047));
                        (*l_1049) = l_1050;
                        (*l_1048) = (*p_1413->g_262);
                    }
                    (*l_1047) |= (*l_1050);
                    (*l_1028) = p_3;
                }
            }
            (*l_1053) = l_1051;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1413->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 104)), permutations[(safe_mod_func_uint32_t_u_u((((l_1054 != (void*)0) , l_1055[7]) == l_1056), 10))][(safe_mod_func_uint32_t_u_u(p_1413->tid, 104))]));
        }
    }
    else
    { /* block id: 565 */
        return p_3;
    }
    return (*l_830);
}


/* ------------------------------------------ */
/* 
 * reads : p_1413->g_198 p_1413->g_199 p_1413->g_58
 * writes:
 */
int32_t  func_63(int32_t * p_64, struct S3 * p_1413)
{ /* block id: 436 */
    return (**p_1413->g_198);
}


/* ------------------------------------------ */
/* 
 * reads : p_1413->g_72 p_1413->g_86 p_1413->g_87 p_1413->g_61 p_1413->g_107 p_1413->g_108.f0 p_1413->g_120 p_1413->g_121 p_1413->g_137 p_1413->g_108.f7 p_1413->l_comm_values p_1413->g_108.f2 p_1413->g_108.f5 p_1413->g_108 p_1413->g_58 p_1413->g_177 p_1413->g_165 p_1413->g_185 p_1413->g_186 p_1413->g_187 p_1413->g_198 p_1413->g_199 p_1413->g_195 p_1413->g_194 p_1413->g_143 p_1413->g_262 p_1413->g_317 p_1413->g_334 p_1413->g_335 p_1413->g_349 p_1413->g_350 p_1413->g_352 p_1413->g_353 p_1413->g_354 p_1413->g_359 p_1413->g_367 p_1413->g_313 p_1413->g_240 p_1413->g_380 p_1413->g_391 p_1413->g_273 p_1413->g_404 p_1413->g_314 p_1413->g_690 p_1413->g_439 p_1413->g_748 p_1413->g_504.f1 p_1413->g_504.f0 p_1413->g_368.f3 p_1413->g_763 p_1413->g_768 p_1413->g_769.f1 p_1413->g_776 p_1413->g_471 p_1413->g_779 p_1413->g_781 p_1413->g_785
 * writes: p_1413->g_72 p_1413->g_137 p_1413->g_143 p_1413->g_165 p_1413->g_58 p_1413->g_177 p_1413->g_194 p_1413->g_185 p_1413->g_195 p_1413->g_199 p_1413->g_108.f6 p_1413->g_108.f0 p_1413->g_314 p_1413->g_107 p_1413->g_349 p_1413->g_352 p_1413->g_367 p_1413->g_313 p_1413->g_240 p_1413->g_397 p_1413->g_404 p_1413->g_108.f3 p_1413->g_690 p_1413->g_317.f0 p_1413->g_380 p_1413->g_750 p_1413->g_368.f3 p_1413->g_769 p_1413->g_780 p_1413->g_768.f5
 */
int32_t * func_65(uint8_t  p_66, int32_t * p_67, struct S3 * p_1413)
{ /* block id: 60 */
    struct S1 *l_73 = &p_1413->g_72;
    int32_t *l_74 = (void*)0;
    int32_t *l_75 = &p_1413->g_58[7][0];
    int32_t *l_76 = &p_1413->g_72.f2;
    int32_t *l_77 = &p_1413->g_72.f4;
    int32_t *l_78 = &p_1413->g_58[0][0];
    int32_t *l_79[2];
    int16_t l_80 = 1L;
    uint8_t l_81 = 5UL;
    int32_t *l_351 = &p_1413->g_352;
    struct S2 *l_691 = &p_1413->g_690;
    int16_t ***l_744 = &p_1413->g_397;
    int8_t *l_745 = (void*)0;
    VECTOR(int32_t, 4) l_758 = (VECTOR(int32_t, 4))(0x15570ACEL, (VECTOR(int32_t, 2))(0x15570ACEL, 0x36BF1081L), 0x36BF1081L);
    int i;
    for (i = 0; i < 2; i++)
        l_79[i] = &p_1413->g_58[7][0];
    (*l_73) = p_1413->g_72;
    --l_81;
    (*l_691) = func_84(((((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 16))(0x4318FB60584B49FCL, ((VECTOR(int64_t, 4))(p_1413->g_86.xxyx)), (-10L), 0x5E64651C7936A651L, ((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(p_1413->g_87.sc5cf0baf)).lo)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(func_88(p_67, ((void*)0 == &p_1413->g_58[0][0]), ((*l_351) &= func_93(p_66, ((-10L) > func_98(p_66, &p_1413->g_58[7][0], (func_102((*l_77), ((FAKE_DIVERGE(p_1413->local_2_offset, get_local_id(2), 10) <= (p_1413->g_61.s1 >= p_1413->g_72.f6)) && 0xC9940E3EL), p_1413->g_107, p_1413->g_108.f0, p_1413) <= 0L), p_1413)), p_1413->g_72.f0, p_1413->g_107, p_1413)), p_1413->g_353, p_1413), p_1413->g_72.f1, 0x1AF4E2DF13E55DE0L, 7L)))).wxzwxxyxwywxywyy)).s5a54))), 0x4DBDD3507B414263L, p_66, ((VECTOR(int64_t, 2))((-2L))), 0x24282931BFE576B6L)).s81, ((VECTOR(int64_t, 2))(0L))))).yyxyxxxyyyyyyxxx, ((VECTOR(int64_t, 16))(0x4D32C556EC912E82L))))).s8 == 0x164ADB37717FACC4L) , 1UL), p_1413);
    for (p_1413->g_317.f0 = 0; (p_1413->g_317.f0 > (-10)); --p_1413->g_317.f0)
    { /* block id: 360 */
        VECTOR(uint8_t, 16) l_741 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
        int8_t **l_746 = (void*)0;
        int8_t **l_747 = &p_1413->g_380[1][6];
        int16_t ***l_749 = &p_1413->g_397;
        uint64_t *l_751[2][10][7] = {{{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466}},{{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466},{(void*)0,&p_1413->g_466,&p_1413->g_177[8],&p_1413->g_466,(void*)0,(void*)0,&p_1413->g_466}}};
        uint32_t *l_753 = (void*)0;
        uint32_t **l_752 = &l_753;
        struct S0 **l_759 = (void*)0;
        VECTOR(uint32_t, 4) l_770 = (VECTOR(uint32_t, 4))(0x5F2E309BL, (VECTOR(uint32_t, 2))(0x5F2E309BL, 0x0352C43BL), 0x0352C43BL);
        int32_t l_792 = 0x367E0958L;
        int i, j, k;
        (*l_691) = (*l_691);
        if ((~((*l_76) = ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x1891A288L, (-9L))).yyyxyxyxxyyxxyyx)).sd8))).even)))
        { /* block id: 363 */
            uint16_t l_694 = 65535UL;
            if (l_694)
                break;
            for (p_1413->g_72.f5 = (-21); (p_1413->g_72.f5 > (-6)); p_1413->g_72.f5 = safe_add_func_int8_t_s_s(p_1413->g_72.f5, 7))
            { /* block id: 367 */
                if ((atomic_inc(&p_1413->g_atomic_input[19 * get_linear_group_id() + 12]) == 7))
                { /* block id: 369 */
                    uint32_t l_697 = 0xF3B5C4D1L;
                    int16_t l_698[5][4][9] = {{{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL},{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL},{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL},{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL}},{{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL},{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL},{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL},{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL}},{{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL},{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL},{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL},{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL}},{{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL},{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL},{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL},{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL}},{{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL},{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL},{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL},{0x3B7AL,0x35B7L,0L,0L,0L,0L,0L,0x35B7L,0x3B7AL}}};
                    uint64_t l_699 = 0x9CEB3C3CD293C625L;
                    struct S1 l_701 = {0x81E1B64BL,0x4245BE7D7530FFC0L,-4L,9UL,1L,-4L,3UL,0x0E68F1337D6EDB02L};/* VOLATILE GLOBAL l_701 */
                    struct S1 *l_700 = &l_701;
                    struct S1 *l_702[2][8][2] = {{{&l_701,&l_701},{&l_701,&l_701},{&l_701,&l_701},{&l_701,&l_701},{&l_701,&l_701},{&l_701,&l_701},{&l_701,&l_701},{&l_701,&l_701}},{{&l_701,&l_701},{&l_701,&l_701},{&l_701,&l_701},{&l_701,&l_701},{&l_701,&l_701},{&l_701,&l_701},{&l_701,&l_701},{&l_701,&l_701}}};
                    struct S1 *l_703 = &l_701;
                    int i, j, k;
                    l_698[0][3][3] ^= l_697;
                    l_703 = (l_702[0][1][0] = (l_699 , l_700));
                    for (l_698[0][3][3] = 0; (l_698[0][3][3] > 17); l_698[0][3][3]++)
                    { /* block id: 375 */
                        uint16_t l_706 = 0UL;
                        uint64_t l_707[8][5];
                        struct S0 l_711 = {0L,0L,0UL,-1L,0x4447568EL,9L,0x1492L,0x255744E4L,-7L};/* VOLATILE GLOBAL l_711 */
                        struct S0 *l_710 = &l_711;
                        struct S0 *l_712 = &l_711;
                        int32_t l_713 = 0x6741A597L;
                        VECTOR(int32_t, 16) l_714 = (VECTOR(int32_t, 16))(0x56F7A43CL, (VECTOR(int32_t, 4))(0x56F7A43CL, (VECTOR(int32_t, 2))(0x56F7A43CL, 0x20FB6EC5L), 0x20FB6EC5L), 0x20FB6EC5L, 0x56F7A43CL, 0x20FB6EC5L, (VECTOR(int32_t, 2))(0x56F7A43CL, 0x20FB6EC5L), (VECTOR(int32_t, 2))(0x56F7A43CL, 0x20FB6EC5L), 0x56F7A43CL, 0x20FB6EC5L, 0x56F7A43CL, 0x20FB6EC5L);
                        VECTOR(int32_t, 4) l_715 = (VECTOR(int32_t, 4))(0x1EDCAD1AL, (VECTOR(int32_t, 2))(0x1EDCAD1AL, 6L), 6L);
                        VECTOR(int32_t, 2) l_716 = (VECTOR(int32_t, 2))(0x6415DC87L, (-1L));
                        int32_t l_717[1][2][5] = {{{(-1L),(-2L),(-1L),(-2L),(-1L)},{(-1L),(-2L),(-1L),(-2L),(-1L)}}};
                        int64_t l_718[9][9] = {{0x3F93DEE53155E39CL,0x68D4305BBB832836L,0L,0x05EF892B8A3DD40CL,0x68D4305BBB832836L,0x05EF892B8A3DD40CL,0L,0x68D4305BBB832836L,0x3F93DEE53155E39CL},{0x3F93DEE53155E39CL,0x68D4305BBB832836L,0L,0x05EF892B8A3DD40CL,0x68D4305BBB832836L,0x05EF892B8A3DD40CL,0L,0x68D4305BBB832836L,0x3F93DEE53155E39CL},{0x3F93DEE53155E39CL,0x68D4305BBB832836L,0L,0x05EF892B8A3DD40CL,0x68D4305BBB832836L,0x05EF892B8A3DD40CL,0L,0x68D4305BBB832836L,0x3F93DEE53155E39CL},{0x3F93DEE53155E39CL,0x68D4305BBB832836L,0L,0x05EF892B8A3DD40CL,0x68D4305BBB832836L,0x05EF892B8A3DD40CL,0L,0x68D4305BBB832836L,0x3F93DEE53155E39CL},{0x3F93DEE53155E39CL,0x68D4305BBB832836L,0L,0x05EF892B8A3DD40CL,0x68D4305BBB832836L,0x05EF892B8A3DD40CL,0L,0x68D4305BBB832836L,0x3F93DEE53155E39CL},{0x3F93DEE53155E39CL,0x68D4305BBB832836L,0L,0x05EF892B8A3DD40CL,0x68D4305BBB832836L,0x05EF892B8A3DD40CL,0L,0x68D4305BBB832836L,0x3F93DEE53155E39CL},{0x3F93DEE53155E39CL,0x68D4305BBB832836L,0L,0x05EF892B8A3DD40CL,0x68D4305BBB832836L,0x05EF892B8A3DD40CL,0L,0x68D4305BBB832836L,0x3F93DEE53155E39CL},{0x3F93DEE53155E39CL,0x68D4305BBB832836L,0L,0x05EF892B8A3DD40CL,0x68D4305BBB832836L,0x05EF892B8A3DD40CL,0L,0x68D4305BBB832836L,0x3F93DEE53155E39CL},{0x3F93DEE53155E39CL,0x68D4305BBB832836L,0L,0x05EF892B8A3DD40CL,0x68D4305BBB832836L,0x05EF892B8A3DD40CL,0L,0x68D4305BBB832836L,0x3F93DEE53155E39CL}};
                        VECTOR(int32_t, 2) l_719 = (VECTOR(int32_t, 2))(9L, 0x2E210F0EL);
                        int32_t l_720 = 0x1B702665L;
                        int8_t l_721[5] = {0x66L,0x66L,0x66L,0x66L,0x66L};
                        int64_t l_722 = 0x5E2952A31D8A1CD3L;
                        VECTOR(int32_t, 16) l_723 = (VECTOR(int32_t, 16))(0x1709E2F6L, (VECTOR(int32_t, 4))(0x1709E2F6L, (VECTOR(int32_t, 2))(0x1709E2F6L, (-3L)), (-3L)), (-3L), 0x1709E2F6L, (-3L), (VECTOR(int32_t, 2))(0x1709E2F6L, (-3L)), (VECTOR(int32_t, 2))(0x1709E2F6L, (-3L)), 0x1709E2F6L, (-3L), 0x1709E2F6L, (-3L));
                        uint64_t l_724 = 0xB0B2475B26EF22BDL;
                        int64_t l_725 = 0x2BD287DC1AF90A58L;
                        VECTOR(int32_t, 2) l_726 = (VECTOR(int32_t, 2))((-9L), 0x379D6200L);
                        VECTOR(int32_t, 2) l_727 = (VECTOR(int32_t, 2))(0x0E2C33EAL, 1L);
                        VECTOR(int32_t, 16) l_728 = (VECTOR(int32_t, 16))(0x4383C64FL, (VECTOR(int32_t, 4))(0x4383C64FL, (VECTOR(int32_t, 2))(0x4383C64FL, 8L), 8L), 8L, 0x4383C64FL, 8L, (VECTOR(int32_t, 2))(0x4383C64FL, 8L), (VECTOR(int32_t, 2))(0x4383C64FL, 8L), 0x4383C64FL, 8L, 0x4383C64FL, 8L);
                        VECTOR(int32_t, 16) l_729 = (VECTOR(int32_t, 16))(0x0860DD82L, (VECTOR(int32_t, 4))(0x0860DD82L, (VECTOR(int32_t, 2))(0x0860DD82L, 1L), 1L), 1L, 0x0860DD82L, 1L, (VECTOR(int32_t, 2))(0x0860DD82L, 1L), (VECTOR(int32_t, 2))(0x0860DD82L, 1L), 0x0860DD82L, 1L, 0x0860DD82L, 1L);
                        VECTOR(int32_t, 16) l_730 = (VECTOR(int32_t, 16))(0x7FF8D391L, (VECTOR(int32_t, 4))(0x7FF8D391L, (VECTOR(int32_t, 2))(0x7FF8D391L, 0L), 0L), 0L, 0x7FF8D391L, 0L, (VECTOR(int32_t, 2))(0x7FF8D391L, 0L), (VECTOR(int32_t, 2))(0x7FF8D391L, 0L), 0x7FF8D391L, 0L, 0x7FF8D391L, 0L);
                        uint32_t l_731 = 1UL;
                        uint16_t l_732 = 0UL;
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_707[i][j] = 0x89FC27D7A4071EBFL;
                        }
                        l_701.f2 ^= l_706;
                        l_707[1][3]--;
                        l_712 = l_710;
                        l_732 &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_701.f2 ^= l_713), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x6F78DF88L, ((VECTOR(int32_t, 16))(l_714.s37f2f38e651b594c)).s0, (-10L), (-1L))).wxyxwwywxyyzyxzz)).s5cd3)))).zxywyzzz, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_715.wwzwyxyy))))))).s04)), (-9L), ((VECTOR(int32_t, 4))(l_716.xxyx)), (l_717[0][0][0] , l_718[5][3]), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_719.yx)).hi, (l_701.f4 = l_720), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0L, (l_721[0] , l_722), 8L, 0x153131A1L)))))).odd)).yyyyxyyxyxyyyxxy)).s1, ((VECTOR(int32_t, 4))(l_723.s7fda)), (l_724 , l_725), (-1L), (-1L))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_726.xyyxyyyx)).hi)), 0x737A92ECL, 0x7C28C25EL)))).seb)), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_727.yyxx)).odd)).yxxy, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_728.se616bc42)).lo, ((VECTOR(int32_t, 2))(l_729.s6f)).yxxx))).xxxwxxwz, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_730.s3f)), 0x12567FB4L, 0x0F53175DL))))).xyyzzwxy))).hi))), (-1L), 0x551FF333L)).sf6, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_731, ((VECTOR(int32_t, 8))(0x4ABD7F98L)), ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 4))(0x34FFE611L)), 0x7223CD6DL)))).s63))), (-1L))), ((VECTOR(int32_t, 4))(0x60FB5D8AL)))).hi, ((VECTOR(int32_t, 4))(0x48C01AFFL))))), 0x0EE03D37L, (-5L), 0x6D4B6ACAL, ((VECTOR(int32_t, 8))(0x760AB6F7L)), 0x1336F4C8L)).s2;
                    }
                    unsigned int result = 0;
                    result += l_697;
                    int l_698_i0, l_698_i1, l_698_i2;
                    for (l_698_i0 = 0; l_698_i0 < 5; l_698_i0++) {
                        for (l_698_i1 = 0; l_698_i1 < 4; l_698_i1++) {
                            for (l_698_i2 = 0; l_698_i2 < 9; l_698_i2++) {
                                result += l_698[l_698_i0][l_698_i1][l_698_i2];
                            }
                        }
                    }
                    result += l_699;
                    result += l_701.f0;
                    result += l_701.f1;
                    result += l_701.f2;
                    result += l_701.f3;
                    result += l_701.f4;
                    result += l_701.f5;
                    result += l_701.f6;
                    result += l_701.f7;
                    atomic_add(&p_1413->g_special_values[19 * get_linear_group_id() + 12], result);
                }
                else
                { /* block id: 383 */
                    (1 + 1);
                }
            }
        }
        else
        { /* block id: 387 */
            return (*p_1413->g_262);
        }
        if ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((p_66 , ((VECTOR(uint8_t, 2))(l_741.s6d)).even) & (safe_sub_func_uint64_t_u_u(((*l_78) = (l_744 == (((((*l_747) = l_745) != p_1413->g_439) || ((*l_73) , ((VECTOR(int16_t, 4))(p_1413->g_748.s2848)).x)) , (p_1413->g_750 = l_749)))), p_1413->g_504[0].f1))), 251UL)), ((void*)0 != l_752))) != p_1413->g_504[0].f0), 7)), 5)))
        { /* block id: 393 */
            uint8_t l_760 = 5UL;
            if ((((((*l_75) <= (p_66 && ((GROUP_DIVERGE(1, 1) != 4294967286UL) & ((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((*l_76) = l_741.s2), l_741.s3)), 0x28F7L)) > (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_758.wxxzzxyzwyzwwxww)).sad)).hi ^ (l_759 == &p_1413->g_367)))))) && (*l_78)) <= p_66) ^ l_760))
            { /* block id: 395 */
                if ((*p_1413->g_199))
                    break;
                for (p_1413->g_368.f3 = 0; (p_1413->g_368.f3 < 2); ++p_1413->g_368.f3)
                { /* block id: 399 */
                    (*p_1413->g_763) = (*p_1413->g_198);
                }
                (*p_1413->g_199) = (*p_1413->g_199);
            }
            else
            { /* block id: 403 */
                uint32_t l_775 = 0x963EF87BL;
                for (l_80 = 9; (l_80 < 9); ++l_80)
                { /* block id: 406 */
                    for (p_1413->g_72.f2 = (-26); (p_1413->g_72.f2 >= 23); p_1413->g_72.f2 = safe_add_func_uint32_t_u_u(p_1413->g_72.f2, 3))
                    { /* block id: 409 */
                        uint32_t l_773 = 1UL;
                        VECTOR(int32_t, 16) l_774 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 7L), 7L), 7L, 2L, 7L, (VECTOR(int32_t, 2))(2L, 7L), (VECTOR(int32_t, 2))(2L, 7L), 2L, 7L, 2L, 7L);
                        int i;
                        if (l_760)
                            break;
                        if ((*p_1413->g_195))
                            continue;
                        p_1413->g_769 = p_1413->g_768;
                        p_1413->g_769.f1 ^= (((VECTOR(uint32_t, 16))(l_770.xyxyyyxzyzxxwxxw)).s7 , ((**p_1413->g_198) < ((safe_mod_func_int32_t_s_s(((*l_77) ^= (l_773 = (*p_1413->g_195))), ((VECTOR(int32_t, 4))(l_774.s13b1)).w)) < 0x22L)));
                    }
                }
                if (l_775)
                    continue;
            }
        }
        else
        { /* block id: 420 */
            struct S2 **l_783 = &l_691;
            int16_t l_784[2];
            int32_t l_788 = (-1L);
            int i;
            for (i = 0; i < 2; i++)
                l_784[i] = 0x3804L;
            (*l_76) |= ((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(1L, (((*l_78) = (p_1413->g_776 , ((p_1413->g_108.f4 < ((void*)0 == p_1413->g_471)) | ((safe_mod_func_int64_t_s_s(((p_1413->g_779 , ((p_1413->g_780 = &p_1413->g_137) == (void*)0)) >= (0x59957E7DL ^ ((((*l_783) = p_1413->g_781[1]) != (void*)0) & p_66))), p_66)) <= 1UL)))) || p_66), 0x74CF7EF5L, 0x20BA3B53L)))).x , 0x0F148C47L) < l_784[1]);
            (*l_73) = p_1413->g_785;
            for (p_1413->g_768.f5 = (-5); (p_1413->g_768.f5 > (-7)); p_1413->g_768.f5 = safe_sub_func_uint64_t_u_u(p_1413->g_768.f5, 7))
            { /* block id: 428 */
                uint64_t l_789 = 0UL;
                l_789--;
                l_792 &= (**p_1413->g_198);
            }
        }
        return (*p_1413->g_262);
    }
    return p_67;
}


/* ------------------------------------------ */
/* 
 * reads : p_1413->g_58
 * writes: p_1413->g_58
 */
int32_t * func_68(uint32_t  p_69, struct S3 * p_1413)
{ /* block id: 57 */
    uint16_t l_70 = 0x9C48L;
    int32_t *l_71 = &p_1413->g_58[7][0];
    (*l_71) |= l_70;
    return l_71;
}


/* ------------------------------------------ */
/* 
 * reads : p_1413->g_195 p_1413->g_58 p_1413->g_143 p_1413->g_690 p_1413->g_108.f2
 * writes: p_1413->g_58 p_1413->g_143 p_1413->g_108.f2
 */
struct S2  func_84(uint32_t  p_85, struct S3 * p_1413)
{ /* block id: 191 */
    int32_t l_415 = (-2L);
    VECTOR(int16_t, 2) l_432 = (VECTOR(int16_t, 2))((-2L), 4L);
    VECTOR(int16_t, 16) l_433 = (VECTOR(int16_t, 16))(0x5AD8L, (VECTOR(int16_t, 4))(0x5AD8L, (VECTOR(int16_t, 2))(0x5AD8L, 0L), 0L), 0L, 0x5AD8L, 0L, (VECTOR(int16_t, 2))(0x5AD8L, 0L), (VECTOR(int16_t, 2))(0x5AD8L, 0L), 0x5AD8L, 0L, 0x5AD8L, 0L);
    VECTOR(int16_t, 2) l_434 = (VECTOR(int16_t, 2))(0x4B4BL, (-1L));
    int32_t l_463 = (-4L);
    int32_t l_465[6][8] = {{0x1EC9C730L,1L,1L,0x7F65ABAEL,0L,0x7F65ABAEL,1L,1L},{0x1EC9C730L,1L,1L,0x7F65ABAEL,0L,0x7F65ABAEL,1L,1L},{0x1EC9C730L,1L,1L,0x7F65ABAEL,0L,0x7F65ABAEL,1L,1L},{0x1EC9C730L,1L,1L,0x7F65ABAEL,0L,0x7F65ABAEL,1L,1L},{0x1EC9C730L,1L,1L,0x7F65ABAEL,0L,0x7F65ABAEL,1L,1L},{0x1EC9C730L,1L,1L,0x7F65ABAEL,0L,0x7F65ABAEL,1L,1L}};
    VECTOR(int32_t, 4) l_476 = (VECTOR(int32_t, 4))(0x6E347F73L, (VECTOR(int32_t, 2))(0x6E347F73L, 0x1BE207FBL), 0x1BE207FBL);
    int16_t *l_479 = (void*)0;
    struct S1 **l_483 = &p_1413->g_107;
    uint32_t **l_491 = (void*)0;
    int16_t l_531 = 1L;
    int8_t *l_554[3];
    int32_t *l_559[10][2];
    int i, j;
    for (i = 0; i < 3; i++)
        l_554[i] = (void*)0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
            l_559[i][j] = &l_465[2][1];
    }
    l_415 = ((*p_1413->g_195) &= p_85);
    for (p_1413->g_143 = (-27); (p_1413->g_143 >= 18); ++p_1413->g_143)
    { /* block id: 196 */
        int8_t l_461 = 0x79L;
        int32_t l_509 = 0x2A64B422L;
        VECTOR(int8_t, 4) l_527 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x17L), 0x17L);
        uint32_t *l_540 = &p_1413->g_240;
        uint32_t **l_539 = &l_540;
        VECTOR(uint32_t, 8) l_549 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xE44F7A02L), 0xE44F7A02L), 0xE44F7A02L, 4294967295UL, 0xE44F7A02L);
        int i;
        (1 + 1);
    }
    if ((atomic_inc(&p_1413->g_atomic_input[19 * get_linear_group_id() + 0]) == 1))
    { /* block id: 262 */
        int16_t l_561 = 0x1CA4L;
        if (l_561)
        { /* block id: 263 */
            struct S1 *l_562 = (void*)0;
            struct S1 l_564 = {4294967295UL,1UL,0x42E1F5CDL,3UL,0L,0L,65535UL,0x43B4CAD62C4AC92FL};/* VOLATILE GLOBAL l_564 */
            struct S1 *l_563 = &l_564;
            struct S1 *l_565 = (void*)0;
            struct S1 *l_566 = &l_564;
            l_565 = (l_563 = (l_562 = (void*)0));
            l_565 = l_566;
        }
        else
        { /* block id: 268 */
            int32_t l_568 = 3L;
            int32_t *l_567 = &l_568;
            int32_t *l_569 = &l_568;
            l_569 = l_567;
            for (l_568 = 0; (l_568 < (-29)); l_568 = safe_sub_func_uint8_t_u_u(l_568, 4))
            { /* block id: 272 */
                int32_t l_572 = 0x7CA1CD91L;
                for (l_572 = 0; (l_572 > 7); l_572++)
                { /* block id: 275 */
                    int8_t l_575 = 5L;
                    int64_t l_576 = 0L;
                    uint64_t l_577[5];
                    struct S2 l_578 = {0x073CDCF0L,0x10ECB98DL};/* VOLATILE GLOBAL l_578 */
                    int32_t l_580 = 0L;
                    int32_t *l_579 = &l_580;
                    VECTOR(int16_t, 16) l_581 = (VECTOR(int16_t, 16))(0x30BFL, (VECTOR(int16_t, 4))(0x30BFL, (VECTOR(int16_t, 2))(0x30BFL, 0x16DCL), 0x16DCL), 0x16DCL, 0x30BFL, 0x16DCL, (VECTOR(int16_t, 2))(0x30BFL, 0x16DCL), (VECTOR(int16_t, 2))(0x30BFL, 0x16DCL), 0x30BFL, 0x16DCL, 0x30BFL, 0x16DCL);
                    VECTOR(int16_t, 16) l_582 = (VECTOR(int16_t, 16))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x2107L), 0x2107L), 0x2107L, (-8L), 0x2107L, (VECTOR(int16_t, 2))((-8L), 0x2107L), (VECTOR(int16_t, 2))((-8L), 0x2107L), (-8L), 0x2107L, (-8L), 0x2107L);
                    VECTOR(int16_t, 16) l_583 = (VECTOR(int16_t, 16))(0x3C3BL, (VECTOR(int16_t, 4))(0x3C3BL, (VECTOR(int16_t, 2))(0x3C3BL, 0x7716L), 0x7716L), 0x7716L, 0x3C3BL, 0x7716L, (VECTOR(int16_t, 2))(0x3C3BL, 0x7716L), (VECTOR(int16_t, 2))(0x3C3BL, 0x7716L), 0x3C3BL, 0x7716L, 0x3C3BL, 0x7716L);
                    VECTOR(int16_t, 8) l_584 = (VECTOR(int16_t, 8))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x1DACL), 0x1DACL), 0x1DACL, (-7L), 0x1DACL);
                    int32_t l_585 = 0x5EB974E9L;
                    uint32_t l_586 = 0xC247BD42L;
                    uint8_t l_587[7][4] = {{255UL,255UL,253UL,0xC0L},{255UL,255UL,253UL,0xC0L},{255UL,255UL,253UL,0xC0L},{255UL,255UL,253UL,0xC0L},{255UL,255UL,253UL,0xC0L},{255UL,255UL,253UL,0xC0L},{255UL,255UL,253UL,0xC0L}};
                    uint8_t l_588 = 0x9EL;
                    int32_t l_589 = 1L;
                    VECTOR(int16_t, 8) l_590 = (VECTOR(int16_t, 8))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), (-9L)), (-9L)), (-9L), (-7L), (-9L));
                    VECTOR(int16_t, 8) l_591 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x7337L), 0x7337L), 0x7337L, 1L, 0x7337L);
                    VECTOR(int32_t, 2) l_592 = (VECTOR(int32_t, 2))(0x38BE8F14L, 0L);
                    uint32_t l_593 = 0x6C235640L;
                    VECTOR(int32_t, 2) l_596 = (VECTOR(int32_t, 2))((-4L), 1L);
                    int32_t l_597 = 8L;
                    uint32_t l_598 = 4294967293UL;
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_577[i] = 0xDC59B987E768C24BL;
                    l_576 &= l_575;
                    l_577[0] = (-1L);
                    l_567 = (l_579 = (l_578 , l_579));
                    l_598 ^= (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(l_581.s7d91)).odd, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0L, 0x0CD0L)), (-10L), ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 16))(l_582.s8a0526e408250945)).s15, ((VECTOR(int16_t, 16))(l_583.sd6e779a56fde2c51)).sf6, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_584.s00707017)))).s12))).odd, 0L, 0x70E7L, (-10L))), ((VECTOR(int16_t, 16))(0x78C1L, ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-3L), 0L)).yxyx)).xzyzyyzx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))((l_585 , l_586), 0x7DF9L, 6L, (-5L))))).wyxwyyyw))), (-7L), (-7L), 0x3B8BL, 0x1140L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x30BEL, 0x56AFL)), 0x3138L, 1L, (l_561 |= 0x5C47L), ((VECTOR(int16_t, 2))(0L, (-1L))), 1L)).s2, 0x6955L, (-7L))).s29ea))), 0x26E2L)))), 0x2F2AL, l_587[3][2], (l_589 = (l_561 = l_588)), ((VECTOR(int16_t, 4))(l_590.s5130)), 0L)).s78, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 2))(0x3C41L, 5L)).yxyyyyxy, ((VECTOR(int16_t, 2))(l_591.s77)).xyyyxxyy))).s51)).yyyy)).lo))), 0L, 0x1DE8L)).zywyzyyxxxxyyyzx)).sf , (l_597 = (((VECTOR(int32_t, 4))(l_592.xyyx)).z , ((*l_567) &= ((++l_593) , ((VECTOR(int32_t, 16))(l_596.xyyyyxyxyxyxxxxy)).s3)))));
                }
            }
            for (l_568 = (-1); (l_568 >= 18); ++l_568)
            { /* block id: 291 */
                VECTOR(int32_t, 8) l_602 = (VECTOR(int32_t, 8))(0x2D025E65L, (VECTOR(int32_t, 4))(0x2D025E65L, (VECTOR(int32_t, 2))(0x2D025E65L, 1L), 1L), 1L, 0x2D025E65L, 1L);
                int32_t *l_601 = (void*)0;
                int i;
                l_567 = l_601;
                for (l_602.s4 = (-30); (l_602.s4 != 2); l_602.s4++)
                { /* block id: 295 */
                    struct S0 l_605 = {0L,-5L,0x51L,1L,-1L,1L,65535UL,0x7AB450EAL,-1L};/* VOLATILE GLOBAL l_605 */
                    struct S0 l_606 = {-1L,0x1C0819ACL,1UL,-7L,-4L,-1L,0xB795L,1L,-8L};/* VOLATILE GLOBAL l_606 */
                    int16_t l_607 = 0x2AB6L;
                    VECTOR(int64_t, 16) l_608 = (VECTOR(int64_t, 16))(0x5E92300B28035AE7L, (VECTOR(int64_t, 4))(0x5E92300B28035AE7L, (VECTOR(int64_t, 2))(0x5E92300B28035AE7L, 0x00678E561E0928BFL), 0x00678E561E0928BFL), 0x00678E561E0928BFL, 0x5E92300B28035AE7L, 0x00678E561E0928BFL, (VECTOR(int64_t, 2))(0x5E92300B28035AE7L, 0x00678E561E0928BFL), (VECTOR(int64_t, 2))(0x5E92300B28035AE7L, 0x00678E561E0928BFL), 0x5E92300B28035AE7L, 0x00678E561E0928BFL, 0x5E92300B28035AE7L, 0x00678E561E0928BFL);
                    VECTOR(int32_t, 8) l_609 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x68F308EBL), 0x68F308EBL), 0x68F308EBL, 1L, 0x68F308EBL);
                    int32_t l_610 = 0x198C8F58L;
                    VECTOR(uint32_t, 4) l_611 = (VECTOR(uint32_t, 4))(0xCF272A2AL, (VECTOR(uint32_t, 2))(0xCF272A2AL, 1UL), 1UL);
                    uint32_t l_612 = 4294967295UL;
                    uint32_t l_613 = 0x58968FE3L;
                    uint32_t l_614 = 0xD6DEBFC9L;
                    VECTOR(uint16_t, 8) l_615 = (VECTOR(uint16_t, 8))(0x3C5AL, (VECTOR(uint16_t, 4))(0x3C5AL, (VECTOR(uint16_t, 2))(0x3C5AL, 1UL), 1UL), 1UL, 0x3C5AL, 1UL);
                    struct S0 l_616 = {0x53F4FAD4AF55463DL,0L,0UL,-8L,0x743C56F2L,0x41E7CBA2L,1UL,-1L,0x1D3BL};/* VOLATILE GLOBAL l_616 */
                    uint32_t l_617 = 1UL;
                    int32_t l_618 = 0x424199A4L;
                    uint8_t l_619 = 0xBAL;
                    VECTOR(int32_t, 4) l_620 = (VECTOR(int32_t, 4))(0x7B5F0F42L, (VECTOR(int32_t, 2))(0x7B5F0F42L, 1L), 1L);
                    int8_t l_621 = (-1L);
                    VECTOR(int32_t, 8) l_622 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x1667A14DL), 0x1667A14DL), 0x1667A14DL, 0L, 0x1667A14DL);
                    uint16_t l_623 = 0xF11EL;
                    int8_t l_624 = 0x0BL;
                    int64_t l_625[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_625[i] = 0x311B9EEA9D3BD10DL;
                    l_606 = l_605;
                    l_625[0] = (l_607 , ((((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 8))(l_608.s073f1569)).hi, ((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(l_609.s22125333)).s64, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))((l_610 , ((((l_612 &= ((VECTOR(uint32_t, 4))(l_611.wwzw)).y) , (l_613 , l_614)) , ((VECTOR(uint16_t, 8))(l_615.s54575121)).s1) , ((l_616 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x48D6BCCE63E35789L, 0L)).yxyxyxxyyyyxxyxy)).s4 , (l_610 = l_617)), l_618, (-6L), (-1L))).wzywyzzyzzzzzxyy)).s0, 0x0EAB916AL, 5L, l_619, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_620.yzyzzywy)).s50)), 0x2A82F6FCL, 0x3CE3E040L)).s5) , l_621))), l_622.s7, ((VECTOR(int32_t, 2))((-1L))), 0x4A1E551EL, ((VECTOR(int32_t, 2))((-8L))), (-1L))).odd, ((VECTOR(int32_t, 4))(0L))))).hi))).xxyy)).xwywxyxzxwywxyzz, ((VECTOR(uint32_t, 16))(0UL))))).s1d89))).x , l_623) , l_624));
                }
            }
        }
        for (l_561 = 0; (l_561 >= (-6)); l_561--)
        { /* block id: 305 */
            int32_t l_629 = 0x44ABB227L;
            int32_t *l_628 = &l_629;
            struct S2 l_630 = {0x6C50AB23L,1L};/* VOLATILE GLOBAL l_630 */
            struct S2 l_631 = {0x2EEFDB36L,1L};/* VOLATILE GLOBAL l_631 */
            l_628 = (void*)0;
            l_631 = l_630;
            for (l_629 = 3; (l_629 <= (-8)); --l_629)
            { /* block id: 310 */
                int32_t l_634 = 0x22EB65D6L;
                int32_t *l_668 = (void*)0;
                int32_t *l_669 = &l_634;
                for (l_634 = 0; (l_634 < 27); l_634 = safe_add_func_int16_t_s_s(l_634, 6))
                { /* block id: 313 */
                    int32_t l_637 = (-4L);
                    uint32_t l_646 = 0xF0018695L;
                    VECTOR(int64_t, 4) l_647 = (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 0x78A1F81E66FB0736L), 0x78A1F81E66FB0736L);
                    int8_t l_648 = 0x42L;
                    int i;
                    for (l_637 = 0; (l_637 == 27); l_637 = safe_add_func_uint64_t_u_u(l_637, 9))
                    { /* block id: 316 */
                        int32_t *l_640 = (void*)0;
                        uint16_t l_641 = 0UL;
                        uint32_t l_642[3];
                        uint32_t l_643 = 0x63DC6C59L;
                        int32_t l_645 = 0x1650E8C2L;
                        int32_t *l_644 = &l_645;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_642[i] = 4294967289UL;
                        l_640 = (l_628 = (void*)0);
                        l_643 = (l_642[0] = l_641);
                        l_628 = l_644;
                    }
                    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((-1L), ((l_646 , ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_647.wzwzzxww)))).s7) , l_648), 1L, 0L)).wwxxzxwz)).s3627463737215407)).sc)
                    { /* block id: 323 */
                        VECTOR(int32_t, 16) l_649 = (VECTOR(int32_t, 16))(0x31269139L, (VECTOR(int32_t, 4))(0x31269139L, (VECTOR(int32_t, 2))(0x31269139L, 0x1EA31F2DL), 0x1EA31F2DL), 0x1EA31F2DL, 0x31269139L, 0x1EA31F2DL, (VECTOR(int32_t, 2))(0x31269139L, 0x1EA31F2DL), (VECTOR(int32_t, 2))(0x31269139L, 0x1EA31F2DL), 0x31269139L, 0x1EA31F2DL, 0x31269139L, 0x1EA31F2DL);
                        VECTOR(int32_t, 16) l_650 = (VECTOR(int32_t, 16))(0x64B2BEADL, (VECTOR(int32_t, 4))(0x64B2BEADL, (VECTOR(int32_t, 2))(0x64B2BEADL, 8L), 8L), 8L, 0x64B2BEADL, 8L, (VECTOR(int32_t, 2))(0x64B2BEADL, 8L), (VECTOR(int32_t, 2))(0x64B2BEADL, 8L), 0x64B2BEADL, 8L, 0x64B2BEADL, 8L);
                        VECTOR(int32_t, 8) l_651 = (VECTOR(int32_t, 8))(0x7D2A0CAEL, (VECTOR(int32_t, 4))(0x7D2A0CAEL, (VECTOR(int32_t, 2))(0x7D2A0CAEL, 0x197A46DFL), 0x197A46DFL), 0x197A46DFL, 0x7D2A0CAEL, 0x197A46DFL);
                        VECTOR(int32_t, 4) l_652 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x34E6F500L), 0x34E6F500L);
                        VECTOR(int32_t, 2) l_653 = (VECTOR(int32_t, 2))(0L, 0x0D6CAA50L);
                        VECTOR(int32_t, 8) l_654 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x23E48C99L), 0x23E48C99L), 0x23E48C99L, 8L, 0x23E48C99L);
                        int16_t l_655 = (-1L);
                        VECTOR(int32_t, 2) l_656 = (VECTOR(int32_t, 2))(1L, 0x0E4F5C16L);
                        VECTOR(int32_t, 2) l_657 = (VECTOR(int32_t, 2))(0x29649B77L, 0x32642B9EL);
                        int8_t l_658[5] = {0x33L,0x33L,0x33L,0x33L,0x33L};
                        int32_t l_659 = 0x2A6AC165L;
                        VECTOR(uint32_t, 4) l_660 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL);
                        VECTOR(uint32_t, 8) l_661 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x5C2E1844L), 0x5C2E1844L), 0x5C2E1844L, 0UL, 0x5C2E1844L);
                        int16_t l_662 = 0x2E69L;
                        int32_t l_663 = 1L;
                        int64_t l_664 = (-1L);
                        int i;
                        l_664 = ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(l_649.sc5)).yyyyxxyyxxyyyxyx, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(l_650.sbd3f)).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_651.s25)).yyyx)).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_652.ww)), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_653.xy)).xyxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_654.s6507)))).odd, (int32_t)l_655, (int32_t)0x31E0B2ECL))), 0x4D51815BL, (-1L))), ((VECTOR(int32_t, 2))(0x43BC9C02L, 1L)).xxyx))), 5L, (-1L))).s66, ((VECTOR(int32_t, 8))(l_656.yxyxxyxy)).s74))).xyxyxyyxyxyxxyxx)))).sd4))).xyxxxyxyxxxyxyxx))).se5)).yyxyxxyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_657.xyyy)), l_658[3], ((((VECTOR(uint32_t, 16))(l_659, ((VECTOR(uint32_t, 2))(l_660.wz)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_661.s6365)), 0x5DBB425EL, 0UL, 0x9EB3171AL, 4294967295UL)), 0x6B0C775FL, 4294967292UL, 0x064C9A0DL, 4294967290UL, 4294967295UL)).s1 , l_662) , (l_637 = l_663)), 7L, 0x6F4F3206L))))).s1107366225406062, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 0x0E9E1480L)).yyyyxxxx)).even)).yyxzwwyxyywywzxy))))).s5;
                    }
                    else
                    { /* block id: 326 */
                        int32_t l_665 = 4L;
                        struct S1 l_666[4] = {{0xB6BC303EL,0xDF89ADAF2A3C9542L,9L,0xDEL,0L,0x0EA60C3B5244717AL,5UL,4L},{0xB6BC303EL,0xDF89ADAF2A3C9542L,9L,0xDEL,0L,0x0EA60C3B5244717AL,5UL,4L},{0xB6BC303EL,0xDF89ADAF2A3C9542L,9L,0xDEL,0L,0x0EA60C3B5244717AL,5UL,4L},{0xB6BC303EL,0xDF89ADAF2A3C9542L,9L,0xDEL,0L,0x0EA60C3B5244717AL,5UL,4L}};
                        int8_t l_667 = (-5L);
                        int i;
                        l_637 = 0x7FB5F12CL;
                        l_666[1].f2 = (((l_646 = l_665) , l_666[1]) , l_667);
                        l_666[1].f2 &= 0x6DCB09A4L;
                    }
                }
                l_628 = l_668;
                l_628 = (void*)0;
                l_669 = (l_628 = (void*)0);
            }
            for (l_629 = 0; (l_629 <= 10); l_629++)
            { /* block id: 340 */
                int32_t l_672 = 1L;
                l_628 = (void*)0;
                for (l_672 = (-17); (l_672 > 2); ++l_672)
                { /* block id: 344 */
                    uint8_t l_675 = 5UL;
                    VECTOR(int16_t, 16) l_676 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 9L), 9L), 9L, 0L, 9L, (VECTOR(int16_t, 2))(0L, 9L), (VECTOR(int16_t, 2))(0L, 9L), 0L, 9L, 0L, 9L);
                    int16_t l_677 = 0x30D5L;
                    uint32_t l_678 = 5UL;
                    uint8_t l_679 = 0x96L;
                    VECTOR(int16_t, 8) l_680 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x1610L), 0x1610L), 0x1610L, 1L, 0x1610L);
                    VECTOR(int16_t, 16) l_681 = (VECTOR(int16_t, 16))(0x6206L, (VECTOR(int16_t, 4))(0x6206L, (VECTOR(int16_t, 2))(0x6206L, (-1L)), (-1L)), (-1L), 0x6206L, (-1L), (VECTOR(int16_t, 2))(0x6206L, (-1L)), (VECTOR(int16_t, 2))(0x6206L, (-1L)), 0x6206L, (-1L), 0x6206L, (-1L));
                    int64_t l_682 = (-1L);
                    VECTOR(int16_t, 16) l_683 = (VECTOR(int16_t, 16))(0x5F86L, (VECTOR(int16_t, 4))(0x5F86L, (VECTOR(int16_t, 2))(0x5F86L, 0x3138L), 0x3138L), 0x3138L, 0x5F86L, 0x3138L, (VECTOR(int16_t, 2))(0x5F86L, 0x3138L), (VECTOR(int16_t, 2))(0x5F86L, 0x3138L), 0x5F86L, 0x3138L, 0x5F86L, 0x3138L);
                    uint16_t l_684 = 0xC1EEL;
                    uint16_t l_685 = 9UL;
                    VECTOR(int32_t, 4) l_686 = (VECTOR(int32_t, 4))(0x7D71D2FAL, (VECTOR(int32_t, 2))(0x7D71D2FAL, 0x71E23BF6L), 0x71E23BF6L);
                    uint8_t l_687 = 0x04L;
                    uint32_t l_688 = 2UL;
                    uint8_t l_689 = 0x8EL;
                    int i;
                    l_685 &= ((l_675 , ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(l_676.s60b4182bee7353bb)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_677, ((VECTOR(int16_t, 2))(1L, 8L)), 0x2089L)).y, (l_679 = l_678), ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(l_680.s70)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_681.s0e)), 0x4096L, 1L)).hi)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_682, ((VECTOR(int16_t, 2))((-1L), (-2L))), 0L)).zzywyxzy)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_683.sc2ea1238)).s2504370314073011)).hi))))).s51))), (-1L), (-2L), 0L, 0x3355L)).s47)).yxxyyyyyyxxyyyxx))))).s0) , l_684);
                    l_689 ^= (l_688 = (l_687 = ((VECTOR(int32_t, 16))(l_686.wzxywywwxzwzxxyw)).sf));
                }
            }
        }
        unsigned int result = 0;
        result += l_561;
        atomic_add(&p_1413->g_special_values[19 * get_linear_group_id() + 0], result);
    }
    else
    { /* block id: 353 */
        (1 + 1);
    }
    return p_1413->g_690;
}


/* ------------------------------------------ */
/* 
 * reads : p_1413->g_354 p_1413->g_108.f2 p_1413->g_72.f6 p_1413->g_359 p_1413->g_367 p_1413->g_61 p_1413->g_58 p_1413->g_313 p_1413->g_185 p_1413->g_194 p_1413->g_143 p_1413->g_199 p_1413->g_240 p_1413->g_380 p_1413->g_349.f5 p_1413->g_108.f0 p_1413->g_391 p_1413->g_273 p_1413->g_404 p_1413->g_317 p_1413->g_195 p_1413->g_108.f3 p_1413->g_314
 * writes: p_1413->g_72.f6 p_1413->g_367 p_1413->g_313 p_1413->g_240 p_1413->g_397 p_1413->g_58 p_1413->g_404 p_1413->g_108.f3 p_1413->g_143
 */
int64_t  func_88(int32_t * p_89, int64_t  p_90, int32_t  p_91, int64_t  p_92, struct S3 * p_1413)
{ /* block id: 166 */
    uint16_t *l_357 = (void*)0;
    uint16_t *l_358 = &p_1413->g_72.f6;
    VECTOR(int64_t, 8) l_360 = (VECTOR(int64_t, 8))(0x4E11C32D835AC4FAL, (VECTOR(int64_t, 4))(0x4E11C32D835AC4FAL, (VECTOR(int64_t, 2))(0x4E11C32D835AC4FAL, 0x2FB3AA35BEF293E3L), 0x2FB3AA35BEF293E3L), 0x2FB3AA35BEF293E3L, 0x4E11C32D835AC4FAL, 0x2FB3AA35BEF293E3L);
    uint32_t ***l_363 = (void*)0;
    uint32_t *l_365 = &p_1413->g_240;
    uint32_t **l_364[5][2][1] = {{{&l_365},{&l_365}},{{&l_365},{&l_365}},{{&l_365},{&l_365}},{{&l_365},{&l_365}},{{&l_365},{&l_365}}};
    struct S0 *l_366 = (void*)0;
    struct S0 **l_369 = (void*)0;
    struct S0 **l_370[10];
    VECTOR(int8_t, 16) l_371 = (VECTOR(int8_t, 16))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x08L), 0x08L), 0x08L, (-5L), 0x08L, (VECTOR(int8_t, 2))((-5L), 0x08L), (VECTOR(int8_t, 2))((-5L), 0x08L), (-5L), 0x08L, (-5L), 0x08L);
    int64_t *l_376 = &p_1413->g_313[0];
    uint32_t l_377 = 3UL;
    int32_t l_387[8][5] = {{0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L},{0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L},{0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L},{0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L},{0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L},{0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L},{0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L},{0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L,0x0B5D4C59L}};
    int16_t **l_396 = &p_1413->g_194;
    uint32_t l_402 = 8UL;
    volatile struct S1 *l_405 = &p_1413->g_404[3][0];
    struct S2 *l_407 = &p_1413->g_317;
    struct S2 **l_406 = &l_407;
    uint8_t *l_412 = (void*)0;
    uint8_t *l_413[1][2];
    int32_t l_414 = 0x476FD700L;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_370[i] = &p_1413->g_367;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_413[i][j] = &p_1413->g_108.f3;
    }
    if (((p_1413->g_354[4][4] , ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))((safe_mul_func_uint16_t_u_u(((*l_358) &= p_1413->g_108.f2), ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(p_1413->g_359.s65e792fba3cce24f)).s441d, ((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 16))(((p_1413->g_240 ^= (((((VECTOR(int64_t, 8))(l_360.s47126711)).s2 > (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 4))((&p_1413->g_336 != (l_364[4][1][0] = (void*)0)), (l_366 != (p_1413->g_367 = p_1413->g_367)), 0xE99EL, 0x6DF3L)).z, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0L, 0L)), ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))((p_1413->g_61.s3 , ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_371.sbde1)).hi)).lo), ((VECTOR(int8_t, 4))(0L, 6L, 0x10L, 0x33L)), ((((*p_89) && ((safe_mul_func_uint16_t_u_u((((safe_div_func_int64_t_s_s((((*l_376) ^= (p_91 | 1L)) <= p_91), p_1413->g_185.s0)) <= FAKE_DIVERGE(p_1413->group_2_offset, get_group_id(2), 10)) == 0x351133F6L), FAKE_DIVERGE(p_1413->group_0_offset, get_group_id(0), 10))) < 4294967295UL)) | l_371.sb) ^ (*p_89)), l_360.s1, 0x51L, 0x13L, ((VECTOR(int8_t, 2))(4L)), 0x44L, l_377, ((VECTOR(int8_t, 2))(0L)), 0x34L)).se9, ((VECTOR(uint8_t, 2))(0xA2L))))), (-7L), (-8L), 0L, 0x1DDCL)).hi, (int16_t)(*p_1413->g_194), (int16_t)p_91))))).z))) & 0x2C57L) && (*p_1413->g_199))) , (*p_1413->g_194)), 0x5433L, 0x2974L, ((VECTOR(int16_t, 4))(3L)), 0x3AAAL, 0L, 0x5A31L, 0x0682L, ((VECTOR(int16_t, 2))(0x17A1L)), ((VECTOR(int16_t, 2))((-3L))), 0x0FACL)).hi, ((VECTOR(int16_t, 8))(0x230AL))))).even, ((VECTOR(int16_t, 4))(0x54BDL))))).xwzwwwzw)), ((VECTOR(int16_t, 8))(4L))))).lo))).xzzyxyzz, ((VECTOR(int16_t, 8))(0x52C1L)), ((VECTOR(int16_t, 8))(0x7CA7L))))).s1447360556020576, ((VECTOR(int16_t, 16))((-2L)))))), (int16_t)p_92, (int16_t)(*p_1413->g_194)))).s36, ((VECTOR(int16_t, 2))((-2L)))))).yyyyxxxy, ((VECTOR(int16_t, 8))(0x7278L))))).hi, ((VECTOR(int16_t, 4))(0x69E6L))))).w)), 9UL, 0x2BA6L, 0xE1F6L)), ((VECTOR(uint16_t, 2))(0UL)), 0UL, 0xC273L)).s1042421477600105, ((VECTOR(uint16_t, 16))(9UL))))))).lo)).s1) >= 0x7872L))
    { /* block id: 172 */
        uint64_t *l_381[9][2] = {{&p_1413->g_177[1],&p_1413->g_177[5]},{&p_1413->g_177[1],&p_1413->g_177[5]},{&p_1413->g_177[1],&p_1413->g_177[5]},{&p_1413->g_177[1],&p_1413->g_177[5]},{&p_1413->g_177[1],&p_1413->g_177[5]},{&p_1413->g_177[1],&p_1413->g_177[5]},{&p_1413->g_177[1],&p_1413->g_177[5]},{&p_1413->g_177[1],&p_1413->g_177[5]},{&p_1413->g_177[1],&p_1413->g_177[5]}};
        int8_t **l_382 = (void*)0;
        int8_t *l_384 = (void*)0;
        int8_t **l_383 = &l_384;
        int32_t l_385 = 0x56FDE4D8L;
        int32_t *l_386[8][9][3] = {{{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]}},{{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]}},{{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]}},{{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]}},{{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]}},{{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]}},{{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]}},{{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]},{&p_1413->g_368.f1,(void*)0,&p_1413->g_58[2][0]}}};
        int i, j, k;
        l_387[7][4] ^= (0L && ((safe_add_func_int64_t_s_s(((((p_1413->g_380[1][6] == ((*l_383) = ((((248UL >= (((((*p_89) , l_371.sd) , (void*)0) != l_381[0][1]) <= p_1413->g_349.f5)) | p_1413->g_108.f0) < 0xB66EL) , (void*)0))) , p_90) | l_385) == 4294967295UL), p_90)) && l_371.s8));
    }
    else
    { /* block id: 175 */
        int16_t *l_390[2][2];
        int16_t **l_395 = &l_390[0][0];
        int16_t ***l_394[5] = {&l_395,&l_395,&l_395,&l_395,&l_395};
        int8_t *l_398 = (void*)0;
        int8_t *l_399 = (void*)0;
        int8_t *l_400[2];
        int32_t l_401 = 9L;
        struct S0 *l_403 = &p_1413->g_368;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_390[i][j] = (void*)0;
        }
        for (i = 0; i < 2; i++)
            l_400[i] = (void*)0;
        (*p_1413->g_199) |= (safe_rshift_func_int16_t_s_s((l_387[6][2] = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0L, 0x3C4DL, (-7L), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))((((l_358 == l_390[0][0]) || 0x13987024C1A9A260L) <= ((l_401 |= (FAKE_DIVERGE(p_1413->group_1_offset, get_group_id(1), 10) , (!(p_1413->g_313[1] , ((1UL > (((VECTOR(uint32_t, 4))(p_1413->g_391.xxxx)).z != ((safe_div_func_uint8_t_u_u((((&p_1413->g_194 == (p_1413->g_143 , (p_1413->g_397 = (l_396 = &l_390[0][0])))) || p_91) , 255UL), l_377)) , p_1413->g_185.s3))) & 4294967294UL))))) > p_91)), 4L, ((VECTOR(int16_t, 2))(0x18E6L)), (*p_1413->g_194), 0x177FL, 0x5576L, (-7L))).s2037167275511663))).lo)), l_402, ((VECTOR(int16_t, 4))(0x4219L)))).hi)).s4), 8));
        l_403 = &p_1413->g_368;
        return p_1413->g_273.sc;
    }
    (*l_405) = p_1413->g_404[3][0];
    l_406 = l_406;
    l_414 = ((safe_mod_func_uint32_t_u_u((((*p_1413->g_194) = ((p_1413->g_108.f3 &= (p_91 , (safe_div_func_uint8_t_u_u(((((*l_407) , 0x7490L) & p_92) & (*p_1413->g_195)), p_92)))) < ((l_387[7][4] = FAKE_DIVERGE(p_1413->global_2_offset, get_global_id(2), 10)) && (p_1413->g_314 < (*p_1413->g_195))))) || (-7L)), FAKE_DIVERGE(p_1413->global_1_offset, get_global_id(1), 10))) , (*p_89));
    return p_92;
}


/* ------------------------------------------ */
/* 
 * reads : p_1413->g_107 p_1413->g_108 p_1413->g_195 p_1413->g_72.f6 p_1413->g_58 p_1413->g_194 p_1413->g_143 p_1413->g_187 p_1413->g_262 p_1413->g_185 p_1413->g_198 p_1413->g_120 p_1413->g_317 p_1413->g_199 p_1413->g_334 p_1413->g_335 p_1413->g_349 p_1413->g_350
 * writes: p_1413->g_108.f6 p_1413->g_72.f3 p_1413->g_72.f6 p_1413->g_58 p_1413->g_195 p_1413->g_199 p_1413->g_108.f0 p_1413->g_177 p_1413->g_314 p_1413->g_107 p_1413->g_349
 */
int32_t  func_93(uint64_t  p_94, uint64_t  p_95, int32_t  p_96, struct S1 * p_97, struct S3 * p_1413)
{ /* block id: 127 */
    uint32_t *l_239[5][7] = {{&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240},{&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240,&p_1413->g_240}};
    uint32_t **l_238 = &l_239[2][0];
    uint32_t *l_241 = &p_1413->g_240;
    uint16_t *l_250[2][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_251 = 0x71EF87ADL;
    uint8_t *l_259 = (void*)0;
    uint8_t *l_260 = &p_1413->g_72.f3;
    int32_t l_261[7] = {(-8L),0x3C73B1EAL,(-8L),(-8L),0x3C73B1EAL,(-8L),(-8L)};
    VECTOR(int16_t, 2) l_274 = (VECTOR(int16_t, 2))((-1L), 0x095CL);
    VECTOR(int64_t, 16) l_286 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x180915C839E66F8DL), 0x180915C839E66F8DL), 0x180915C839E66F8DL, 1L, 0x180915C839E66F8DL, (VECTOR(int64_t, 2))(1L, 0x180915C839E66F8DL), (VECTOR(int64_t, 2))(1L, 0x180915C839E66F8DL), 1L, 0x180915C839E66F8DL, 1L, 0x180915C839E66F8DL);
    VECTOR(uint64_t, 8) l_328 = (VECTOR(uint64_t, 8))(0xBC72882171461365L, (VECTOR(uint64_t, 4))(0xBC72882171461365L, (VECTOR(uint64_t, 2))(0xBC72882171461365L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xBC72882171461365L, 18446744073709551615UL);
    volatile uint32_t * volatile * volatile l_338 = &p_1413->g_336;/* VOLATILE GLOBAL l_338 */
    int i, j;
    (*p_1413->g_262) = func_68(((*p_1413->g_107) , ((((l_261[0] |= ((((*l_238) = p_1413->g_195) == l_241) <= (p_95 <= (((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(p_96, ((((safe_mod_func_uint16_t_u_u(65535UL, (p_1413->g_108.f6++))) == l_251) || ((safe_unary_minus_func_int16_t_s((safe_add_func_uint32_t_u_u(((p_1413->g_72.f6 ^= (~(((((*l_260) = (((((VECTOR(uint32_t, 8))((safe_mod_func_uint32_t_u_u((p_94 != 2L), p_95)), l_251, 0x7813B1EEL, p_95, ((VECTOR(uint32_t, 4))(0xD70E6E54L)))).s3 == p_96) < 0x4DB52F411E67CD38L) & 1L)) & 7L) >= p_1413->g_108.f5) ^ p_94))) >= p_94), l_251)))) != (*p_1413->g_195))) | (*p_1413->g_194)))), p_96)) == p_1413->g_187.x) > p_94)))) <= p_1413->g_108.f0) ^ 0x638B6359L) , p_1413->g_58[7][0])), p_1413);
    (*p_1413->g_198) = func_68(p_1413->g_185.s6, p_1413);
    for (p_1413->g_108.f0 = 0; (p_1413->g_108.f0 < 33); p_1413->g_108.f0 = safe_add_func_int8_t_s_s(p_1413->g_108.f0, 2))
    { /* block id: 137 */
        VECTOR(uint64_t, 8) l_265 = (VECTOR(uint64_t, 8))(0x3489422A714BF167L, (VECTOR(uint64_t, 4))(0x3489422A714BF167L, (VECTOR(uint64_t, 2))(0x3489422A714BF167L, 0x3651EB783A40949BL), 0x3651EB783A40949BL), 0x3651EB783A40949BL, 0x3489422A714BF167L, 0x3651EB783A40949BL);
        uint64_t *l_266 = &p_1413->g_177[6];
        uint64_t *l_267 = (void*)0;
        VECTOR(int64_t, 8) l_283 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
        VECTOR(int64_t, 4) l_285 = (VECTOR(int64_t, 4))(0x5BD41BEC5B46A778L, (VECTOR(int64_t, 2))(0x5BD41BEC5B46A778L, (-2L)), (-2L));
        int64_t *l_287 = (void*)0;
        int64_t *l_288 = (void*)0;
        int64_t *l_289 = (void*)0;
        int64_t *l_290 = (void*)0;
        int64_t *l_291 = (void*)0;
        int64_t *l_292[9][9][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        int32_t **l_301 = &p_1413->g_199;
        int32_t ***l_302 = &l_301;
        int8_t *l_307 = (void*)0;
        int8_t *l_308 = (void*)0;
        int8_t *l_309 = (void*)0;
        int8_t *l_310 = (void*)0;
        int8_t *l_311[1][7][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int8_t l_312 = 1L;
        struct S1 *l_332 = (void*)0;
        int32_t l_341 = (-1L);
        int32_t l_342 = (-1L);
        int32_t l_343 = (-10L);
        int32_t l_344 = 0L;
        int32_t l_345[8][4] = {{0x2D00EBC2L,0x2D00EBC2L,0x76D5A384L,0x1E4C26C0L},{0x2D00EBC2L,0x2D00EBC2L,0x76D5A384L,0x1E4C26C0L},{0x2D00EBC2L,0x2D00EBC2L,0x76D5A384L,0x1E4C26C0L},{0x2D00EBC2L,0x2D00EBC2L,0x76D5A384L,0x1E4C26C0L},{0x2D00EBC2L,0x2D00EBC2L,0x76D5A384L,0x1E4C26C0L},{0x2D00EBC2L,0x2D00EBC2L,0x76D5A384L,0x1E4C26C0L},{0x2D00EBC2L,0x2D00EBC2L,0x76D5A384L,0x1E4C26C0L},{0x2D00EBC2L,0x2D00EBC2L,0x76D5A384L,0x1E4C26C0L}};
        uint64_t l_346[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_346[i] = 0x26DEE293B23B4BDAL;
        if (((((*l_260) = (((((l_261[6] ^= ((*l_266) = ((VECTOR(uint64_t, 8))(l_265.s30725000)).s4)) <= ((safe_lshift_func_uint8_t_u_u(((p_1413->g_314 = ((!((((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))((-8L), 1L)).yyyyyxxxyyyxxxyx, ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_1413->g_272.s6620434066503331)))).s2e2d, ((VECTOR(int16_t, 2))(p_1413->g_273.s9a)).xyyy, ((VECTOR(int16_t, 16))(l_274.yxxyxxyyyxxxxxyx)).sad8d))).yyxxxwxyyzwwyxyy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 4))(1L, (((-4L) >= ((l_251 = (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s((p_1413->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1413->tid, 104))] = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 4))(0L, ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 2))(l_283.s01)), ((VECTOR(int64_t, 16))(p_1413->g_284.s6607013604211506)).seb))), 0x170AEC4473471554L)).hi, ((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 2))((-2L), (-9L))).yyxx, ((VECTOR(int64_t, 2))(l_285.xw)).yyxx))), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_286.se00e42c1a0aec7c1)).s2b1e)).zxwyzxxx)).s36)).xyyx))).lo))).xyxxyyxxyyxyyyyx)).sa), (safe_mul_func_uint16_t_u_u(p_94, l_286.s9)))), (safe_lshift_func_int8_t_s_s((p_1413->g_313[3] = (((safe_mod_func_uint32_t_u_u((p_95 <= (safe_lshift_func_int8_t_s_s((p_1413->g_185.s1 = (((((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65527UL, 65535UL)), 0UL, 65527UL)).y && (((-7L) >= 0x4DL) , (((*l_302) = l_301) != (((safe_rshift_func_int8_t_s_s(((~((safe_add_func_int32_t_s_s(((((VECTOR(uint32_t, 2))(1UL, 4294967293UL)).lo >= 4294967293UL) || 0x197CL), GROUP_DIVERGE(1, 1))) ^ 1UL)) , p_1413->g_137), 6)) < p_96) , (void*)0)))) < GROUP_DIVERGE(2, 1)) , p_1413->g_240) && (**l_301)) ^ 0UL)), 3))), p_94)) || l_312) > l_251)), p_95)))), p_1413->g_143))) <= p_1413->g_72.f0)) && (***l_302)), (-1L), 0x0889L)).xywywzwy, ((VECTOR(int16_t, 8))(0L)), ((VECTOR(int16_t, 8))(0x23B3L))))).s4254466622264615)).sa6bb)))).yzzywzzwxzwxwwzw))).sa02a, ((VECTOR(int16_t, 4))(0L)), ((VECTOR(int16_t, 4))((-10L)))))).y, (*p_1413->g_194))) ^ 2UL) <= p_1413->g_143) >= p_94)) ^ 0xBCB91B29C366B717L)) != 2UL), p_1413->g_120.w)) <= l_286.s2)) <= GROUP_DIVERGE(2, 1)) || p_94) ^ p_1413->g_108.f3)) > l_286.sa) | p_95))
        { /* block id: 147 */
            VECTOR(int32_t, 8) l_318 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x47DFB6F5L), 0x47DFB6F5L), 0x47DFB6F5L, (-1L), 0x47DFB6F5L);
            VECTOR(uint64_t, 4) l_325 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551609UL), 18446744073709551609UL);
            struct S1 **l_333 = (void*)0;
            volatile uint32_t * volatile * volatile *l_337[4][8] = {{&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335},{&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335},{&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335},{&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335,&p_1413->g_335}};
            int i, j;
            for (p_1413->g_72.f3 = 0; (p_1413->g_72.f3 == 36); p_1413->g_72.f3 = safe_add_func_uint64_t_u_u(p_1413->g_72.f3, 2))
            { /* block id: 150 */
                uint32_t l_327 = 4294967293UL;
                int32_t l_331 = 0x5FA7BE36L;
                (*p_1413->g_199) = ((p_1413->g_317 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_318.s13662121)).s2211726610707624)).hi)).s7) <= (((*l_266) = ((safe_lshift_func_int8_t_s_s(0x11L, (((0x54L && ((~((safe_lshift_func_uint8_t_u_s((((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 8))(p_1413->g_58[7][0], ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 8))(l_325.xzyzwxwx)).s7600535341340672, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(p_1413->g_326.zyyy)).wwyxzyzw)).s0056264760140573))).s3bc3)), (**l_301), 0x3A63A8E26C5D3E01L, 18446744073709551613UL)).s5556670176535744, ((VECTOR(uint64_t, 4))(l_327, ((VECTOR(uint64_t, 2))(l_328.s67)), 18446744073709551615UL)).xxywyxwzxzzywzwy))).s0 > 0x50BD246F481451BFL), 3)) > (safe_sub_func_int8_t_s_s((**l_301), 0x34L)))) > l_261[5])) != p_94) , (**l_301)))) >= l_325.y)) < 1L));
                l_331 ^= 0x77DF3B9AL;
                return l_251;
            }
            (*p_1413->g_334) = l_332;
            l_338 = p_1413->g_335;
        }
        else
        { /* block id: 158 */
            int32_t *l_339 = &p_1413->g_108.f4;
            int32_t *l_340[6] = {&p_1413->g_72.f4,&p_1413->g_108.f4,&p_1413->g_72.f4,&p_1413->g_72.f4,&p_1413->g_108.f4,&p_1413->g_72.f4};
            int i;
            --l_346[2];
            return p_1413->g_108.f6;
        }
    }
    (*p_1413->g_350) = p_1413->g_349;
    return p_95;
}


/* ------------------------------------------ */
/* 
 * reads : p_1413->g_198 p_1413->g_58 p_1413->g_199 p_1413->g_72.f5 p_1413->g_72.f3
 * writes: p_1413->g_195 p_1413->g_199 p_1413->g_58 p_1413->g_72.f5
 */
uint64_t  func_98(uint32_t  p_99, int32_t * p_100, int32_t  p_101, struct S3 * p_1413)
{ /* block id: 80 */
    int32_t **l_196 = &p_1413->g_195;
    int32_t **l_197 = (void*)0;
    (*p_1413->g_198) = ((*l_196) = &p_1413->g_58[8][0]);
    (*p_1413->g_199) = (*p_100);
    for (p_1413->g_72.f5 = (-5); (p_1413->g_72.f5 < 12); ++p_1413->g_72.f5)
    { /* block id: 86 */
        if ((atomic_inc(&p_1413->l_atomic_input[4]) == 1))
        { /* block id: 88 */
            uint16_t l_202[7];
            int64_t l_203 = (-2L);
            int i;
            for (i = 0; i < 7; i++)
                l_202[i] = 0x7C41L;
            if ((l_203 = l_202[6]))
            { /* block id: 90 */
                int32_t *l_204 = (void*)0;
                int32_t l_206[8][3][6] = {{{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L}},{{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L}},{{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L}},{{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L}},{{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L}},{{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L}},{{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L}},{{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L},{0L,(-3L),0L,0L,(-3L),0L}}};
                int32_t *l_205 = &l_206[6][2][3];
                int i, j, k;
                l_205 = l_204;
                for (l_206[5][1][5] = 0; (l_206[5][1][5] == 29); ++l_206[5][1][5])
                { /* block id: 94 */
                    int32_t l_209 = 0x64489FD1L;
                    for (l_209 = (-18); (l_209 != 26); l_209++)
                    { /* block id: 97 */
                        struct S0 l_212 = {0x323ECE2656E1108FL,-2L,0x13L,0L,0L,0x7CAC46ECL,0x2FE5L,4L,0x51C9L};/* VOLATILE GLOBAL l_212 */
                        struct S1 l_213 = {0xC3926FFAL,0x6EF8F0513237AC65L,0L,0x11L,0L,0x6FB705ECD1E0242EL,1UL,0x59E98F55981E6126L};/* VOLATILE GLOBAL l_213 */
                        int32_t *l_214 = (void*)0;
                        int32_t *l_215 = (void*)0;
                        int32_t *l_216[1][2];
                        struct S2 l_217[4][7][9] = {{{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}}},{{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}}},{{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}}},{{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}},{{0x3B74E24AL,-1L},{-10L,6L},{0x483A19E9L,1L},{0x07A738FAL,0x0D5BCDC4L},{0x405B7851L,0x25829FC0L},{0x5793FFD5L,0x22716C08L},{0L,0L},{1L,0x28A2CC0BL},{0x07A738FAL,0x0D5BCDC4L}}}};
                        struct S0 l_218 = {0L,8L,0UL,-5L,0x6E53F263L,1L,0xBD52L,0x7FD259BFL,0L};/* VOLATILE GLOBAL l_218 */
                        struct S0 l_219 = {0L,6L,0x2CL,-1L,0x4B35EA06L,0x1CD436E5L,0UL,0x0573BD24L,5L};/* VOLATILE GLOBAL l_219 */
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_216[i][j] = &l_213.f4;
                        }
                        l_204 = (void*)0;
                        l_216[0][1] = (l_212 , (l_205 = (l_215 = (l_204 = (l_213 , l_214)))));
                        l_219 = (l_217[1][2][6] , l_218);
                    }
                }
            }
            else
            { /* block id: 106 */
                int32_t l_220[9][9][3] = {{{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL}},{{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL}},{{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL}},{{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL}},{{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL}},{{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL}},{{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL}},{{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL}},{{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL},{0L,0x6F88D4BEL,0x6F88D4BEL}}};
                int i, j, k;
                for (l_220[0][5][2] = 0; (l_220[0][5][2] == (-16)); l_220[0][5][2]--)
                { /* block id: 109 */
                    struct S2 l_224 = {0x7E348761L,0x4549DC45L};/* VOLATILE GLOBAL l_224 */
                    struct S2 *l_223 = &l_224;
                    uint32_t l_225 = 6UL;
                    int64_t l_226 = (-9L);
                    uint8_t l_227[6] = {3UL,5UL,3UL,3UL,5UL,3UL};
                    int i;
                    l_223 = l_223;
                    l_225 &= (-1L);
                    --l_227[3];
                }
            }
            for (l_203 = 0; (l_203 == 27); l_203 = safe_add_func_uint8_t_u_u(l_203, 9))
            { /* block id: 117 */
                uint64_t l_232 = 8UL;
                int8_t l_235 = 0x1EL;
                int32_t l_237 = 0x7B345426L;
                int32_t *l_236 = &l_237;
                l_232++;
                l_235 ^= 0x23CCDCFFL;
                l_236 = (void*)0;
            }
            unsigned int result = 0;
            int l_202_i0;
            for (l_202_i0 = 0; l_202_i0 < 7; l_202_i0++) {
                result += l_202[l_202_i0];
            }
            result += l_203;
            atomic_add(&p_1413->l_special_values[4], result);
        }
        else
        { /* block id: 122 */
            (1 + 1);
        }
    }
    return p_1413->g_72.f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1413->g_120 p_1413->g_121 p_1413->g_137 p_1413->g_108.f7 p_1413->l_comm_values p_1413->g_108.f2 p_1413->g_108.f5 p_1413->g_72.f5 p_1413->g_72.f2 p_1413->g_108 p_1413->g_61 p_1413->g_58 p_1413->g_177 p_1413->g_107 p_1413->g_165 p_1413->g_72.f6 p_1413->g_87 p_1413->g_72.f3 p_1413->g_185 p_1413->g_186 p_1413->g_187
 * writes: p_1413->g_137 p_1413->g_143 p_1413->g_72.f2 p_1413->g_165 p_1413->g_58 p_1413->g_177 p_1413->g_72.f4 p_1413->g_72.f6 p_1413->g_194 p_1413->g_185 p_1413->g_195
 */
int64_t  func_102(int32_t  p_103, uint8_t  p_104, struct S1 * p_105, uint8_t  p_106, struct S3 * p_1413)
{ /* block id: 63 */
    VECTOR(int32_t, 2) l_109 = (VECTOR(int32_t, 2))(0x5D4AF878L, 9L);
    VECTOR(int8_t, 16) l_112 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x16L), 0x16L), 0x16L, (-1L), 0x16L, (VECTOR(int8_t, 2))((-1L), 0x16L), (VECTOR(int8_t, 2))((-1L), 0x16L), (-1L), 0x16L, (-1L), 0x16L);
    VECTOR(int8_t, 2) l_113 = (VECTOR(int8_t, 2))(0x3BL, 0x68L);
    VECTOR(uint8_t, 16) l_128 = (VECTOR(uint8_t, 16))(0x25L, (VECTOR(uint8_t, 4))(0x25L, (VECTOR(uint8_t, 2))(0x25L, 255UL), 255UL), 255UL, 0x25L, 255UL, (VECTOR(uint8_t, 2))(0x25L, 255UL), (VECTOR(uint8_t, 2))(0x25L, 255UL), 0x25L, 255UL, 0x25L, 255UL);
    VECTOR(int32_t, 2) l_131 = (VECTOR(int32_t, 2))((-9L), (-9L));
    uint64_t *l_136 = &p_1413->g_137;
    uint16_t l_140 = 0xE160L;
    int32_t *l_141 = (void*)0;
    int16_t *l_142 = &p_1413->g_143;
    int8_t *l_144[4][9][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t *l_145 = &p_1413->g_72.f2;
    int32_t l_152 = (-1L);
    uint32_t l_163 = 0xC154CFA0L;
    uint32_t *l_164 = &p_1413->g_165[1];
    uint32_t *l_166 = &l_163;
    int8_t *l_175[1][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint64_t *l_176 = &p_1413->g_177[6];
    VECTOR(int8_t, 2) l_182 = (VECTOR(int8_t, 2))((-1L), 0L);
    int16_t **l_193[7] = {&l_142,&l_142,&l_142,&l_142,&l_142,&l_142,&l_142};
    int i, j, k;
    (*l_145) ^= ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(l_109.xyxxyxyxxxyxyyyx)).lo, (int32_t)(safe_div_func_uint16_t_u_u((((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(l_112.sda0f4ba2)).even, ((VECTOR(int8_t, 4))(l_113.xxyy))))).w || ((l_109.y |= ((!(safe_lshift_func_int16_t_s_s(((*l_142) = (safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(0x35L, ((VECTOR(uint8_t, 4))(p_1413->g_120.zwyz)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_1413->g_121.yz)), 255UL, 0UL)), (uint8_t)(safe_div_func_int64_t_s_s(l_112.s7, (safe_mul_func_uint8_t_u_u(((((((safe_lshift_func_uint8_t_u_u(0x34L, ((VECTOR(uint8_t, 2))(l_128.s51)).hi)) || (0x6473L != (safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 8))(l_131.yxxxxxxy)).s4, 0x5745251BL)))) | (safe_mod_func_int64_t_s_s(((safe_div_func_int8_t_s_s((((l_112.s2 , ((((((((((((*l_136)--) , p_105) == &p_1413->g_72) || ((0xB5A8EEEFL | p_1413->g_120.w) >= l_140)) < p_103) , &p_1413->g_58[7][0]) != l_141) , p_1413->g_108.f7) , 0xCD90D8D9L) >= l_112.s5) < 0x72L)) > p_106) >= 0x612CB44BL), p_1413->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1413->tid, 104))])) , 0L), p_106))) , (-2L)) || p_1413->g_108.f2) <= p_106), p_103))))))).y, ((VECTOR(uint8_t, 4))(0xE6L)), 255UL, 0x14L, 255UL)).s1, 255UL, 0UL)).lo, (uint8_t)p_103))).y, (-10L))), p_1413->g_108.f5))), p_1413->g_72.f5))) ^ 0xCEF03F5B9120BB8AL)) ^ p_104)), FAKE_DIVERGE(p_1413->global_0_offset, get_global_id(0), 10)))))).s0004051366704451, ((VECTOR(int32_t, 16))(0x44186BEDL)), ((VECTOR(int32_t, 16))(0L))))).s7;
    l_145 = func_68(((*l_164) = ((safe_mul_func_uint8_t_u_u((((VECTOR(uint32_t, 2))(0x3E30AF52L, 4294967295UL)).odd , p_104), (safe_mul_func_uint8_t_u_u((+p_104), (safe_sub_func_int16_t_s_s(p_1413->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1413->tid, 104))], (l_152 && (*l_145)))))))) , ((((safe_mod_func_uint8_t_u_u((p_103 & (((*p_105) , p_106) || ((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u(0x34L, p_1413->g_61.s2)), p_1413->g_137)), p_103)), l_163)) == 4UL))), (*l_145))) & p_104) && 4294967295UL) || p_1413->g_72.f2))), p_1413);
    (*l_145) = ((((((*l_166) = 0x24F2C05DL) & ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((((VECTOR(uint16_t, 2))(0xAB0AL, 0x752CL)).lo || ((void*)0 != l_144[1][3][4])), (((safe_lshift_func_int8_t_s_s(((((safe_div_func_uint64_t_u_u(((*l_176) |= ((l_175[0][1] = l_175[0][1]) != l_144[3][8][4])), ((*p_1413->g_107) , (*l_145)))) == ((p_1413->g_72.f4 = p_1413->g_165[0]) , (*l_145))) < (*l_145)) & p_103), p_106)) == 0x1DL) <= p_106))), 5)) | 0L)) ^ p_1413->g_108.f0) && FAKE_DIVERGE(p_1413->global_0_offset, get_global_id(0), 10)) != p_1413->g_108.f3);
    p_1413->g_195 = func_68((safe_lshift_func_int8_t_s_u((((p_1413->g_185.s0 = ((safe_rshift_func_uint16_t_u_u(p_1413->g_108.f6, p_1413->g_108.f7)) , ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 16))(l_182.yxyxyxxyxxxyyxxy)).hi, (int8_t)((((p_104 | (--p_1413->g_72.f6)) != p_1413->g_87.s8) > ((void*)0 != &l_152)) & p_1413->g_72.f3), (int8_t)((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(p_1413->g_185.s06)).xyxxxyyyyyxyyxyx, ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1413->g_186.se7)), (-8L), 0L)).yxywxzzz, ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 16))(p_1413->g_187.xyyxyyxxyxxxyxyy)).lo, (int8_t)((+(safe_unary_minus_func_uint32_t_u(p_106))) && (safe_lshift_func_int16_t_s_u((((p_1413->g_194 = ((safe_rshift_func_int8_t_s_u(((0x1536F953021139FEL > p_104) , p_106), p_1413->g_108.f5)) , l_142)) == &p_1413->g_143) > p_1413->g_165[1]), 4))), (int8_t)p_106)))))), ((VECTOR(int8_t, 8))(0x67L))))), ((VECTOR(int8_t, 8))((-1L)))))).s4412561715021451))), ((VECTOR(int8_t, 16))(0x3FL))))).sa))).s62, ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))(0L))))).odd)) == p_1413->g_108.f4) ^ p_1413->g_108.f7), 0)), p_1413);
    return p_1413->g_108.f4;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[19];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 19; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[19];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 19; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[104];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 104; i++)
            l_comm_values[i] = 1;
    struct S3 c_1414;
    struct S3* p_1413 = &c_1414;
    struct S3 c_1415 = {
        {{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}, // p_1413->g_58
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L), // p_1413->g_61
        {0x3D984916L,0x8D46EB95E9947D74L,0L,3UL,-9L,0x21D1A269FD2B101DL,65534UL,0x18E72CC6491A587DL}, // p_1413->g_72
        (VECTOR(int64_t, 2))(0x19FFC3C19AB705B5L, (-1L)), // p_1413->g_86
        (VECTOR(int64_t, 16))(0x42DD3257CD9934E4L, (VECTOR(int64_t, 4))(0x42DD3257CD9934E4L, (VECTOR(int64_t, 2))(0x42DD3257CD9934E4L, (-10L)), (-10L)), (-10L), 0x42DD3257CD9934E4L, (-10L), (VECTOR(int64_t, 2))(0x42DD3257CD9934E4L, (-10L)), (VECTOR(int64_t, 2))(0x42DD3257CD9934E4L, (-10L)), 0x42DD3257CD9934E4L, (-10L), 0x42DD3257CD9934E4L, (-10L)), // p_1413->g_87
        {5UL,1UL,0L,7UL,0x3C96CF12L,-2L,6UL,5L}, // p_1413->g_108
        &p_1413->g_108, // p_1413->g_107
        (VECTOR(uint8_t, 4))(0xC9L, (VECTOR(uint8_t, 2))(0xC9L, 0xA9L), 0xA9L), // p_1413->g_120
        (VECTOR(uint8_t, 4))(0x11L, (VECTOR(uint8_t, 2))(0x11L, 0x43L), 0x43L), // p_1413->g_121
        7UL, // p_1413->g_137
        (-4L), // p_1413->g_143
        {0x9C18B398L,0x9C18B398L}, // p_1413->g_165
        {0x4FD7878FC21AB6ACL,0x4FD7878FC21AB6ACL,0x4FD7878FC21AB6ACL,0x4FD7878FC21AB6ACL,0x4FD7878FC21AB6ACL,0x4FD7878FC21AB6ACL,0x4FD7878FC21AB6ACL,0x4FD7878FC21AB6ACL,0x4FD7878FC21AB6ACL}, // p_1413->g_177
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x45L), 0x45L), 0x45L, (-1L), 0x45L), // p_1413->g_185
        (VECTOR(int8_t, 16))(0x3CL, (VECTOR(int8_t, 4))(0x3CL, (VECTOR(int8_t, 2))(0x3CL, (-1L)), (-1L)), (-1L), 0x3CL, (-1L), (VECTOR(int8_t, 2))(0x3CL, (-1L)), (VECTOR(int8_t, 2))(0x3CL, (-1L)), 0x3CL, (-1L), 0x3CL, (-1L)), // p_1413->g_186
        (VECTOR(int8_t, 2))(0x00L, 4L), // p_1413->g_187
        &p_1413->g_143, // p_1413->g_194
        &p_1413->g_108.f2, // p_1413->g_195
        &p_1413->g_108.f2, // p_1413->g_199
        &p_1413->g_199, // p_1413->g_198
        4294967288UL, // p_1413->g_240
        &p_1413->g_195, // p_1413->g_262
        (VECTOR(int16_t, 8))(0x6B57L, (VECTOR(int16_t, 4))(0x6B57L, (VECTOR(int16_t, 2))(0x6B57L, 0x701CL), 0x701CL), 0x701CL, 0x6B57L, 0x701CL), // p_1413->g_272
        (VECTOR(int16_t, 16))(0x3665L, (VECTOR(int16_t, 4))(0x3665L, (VECTOR(int16_t, 2))(0x3665L, 0L), 0L), 0L, 0x3665L, 0L, (VECTOR(int16_t, 2))(0x3665L, 0L), (VECTOR(int16_t, 2))(0x3665L, 0L), 0x3665L, 0L, 0x3665L, 0L), // p_1413->g_273
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x529348896E94AAA2L), 0x529348896E94AAA2L), 0x529348896E94AAA2L, 0L, 0x529348896E94AAA2L), // p_1413->g_284
        {0x7CA51F46808EF368L,0x7CA51F46808EF368L,0x7CA51F46808EF368L,0x7CA51F46808EF368L}, // p_1413->g_313
        (-8L), // p_1413->g_314
        {-5L,2L}, // p_1413->g_317
        (VECTOR(uint64_t, 4))(0x5748182F7C1ADC3DL, (VECTOR(uint64_t, 2))(0x5748182F7C1ADC3DL, 18446744073709551611UL), 18446744073709551611UL), // p_1413->g_326
        &p_1413->g_107, // p_1413->g_334
        (void*)0, // p_1413->g_336
        &p_1413->g_336, // p_1413->g_335
        {-1L,0x40E10BB4L,0x57L,8L,0x7E247934L,0x631EABBEL,65531UL,0x4AD6FE03L,0x1AABL}, // p_1413->g_349
        &p_1413->g_349, // p_1413->g_350
        0x589E2D4FL, // p_1413->g_352
        (-8L), // p_1413->g_353
        {{{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{4UL,18446744073709551615UL,-6L,0x6FL,0x5714A399L,-1L,65533UL,4L}},{{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{4UL,18446744073709551615UL,-6L,0x6FL,0x5714A399L,-1L,65533UL,4L}},{{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{4UL,18446744073709551615UL,-6L,0x6FL,0x5714A399L,-1L,65533UL,4L}},{{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{4UL,18446744073709551615UL,-6L,0x6FL,0x5714A399L,-1L,65533UL,4L}},{{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{4UL,18446744073709551615UL,-6L,0x6FL,0x5714A399L,-1L,65533UL,4L}},{{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{4UL,18446744073709551615UL,-6L,0x6FL,0x5714A399L,-1L,65533UL,4L}},{{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{4UL,18446744073709551615UL,-6L,0x6FL,0x5714A399L,-1L,65533UL,4L}},{{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{4UL,18446744073709551615UL,-6L,0x6FL,0x5714A399L,-1L,65533UL,4L}},{{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{4UL,18446744073709551615UL,-6L,0x6FL,0x5714A399L,-1L,65533UL,4L}},{{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{0x520E3392L,18446744073709551613UL,0x5F7EA75AL,0UL,1L,0x32F4B9943CE436DBL,0xD6BEL,-1L},{1UL,0x2BAA1BECF4C80277L,0L,0x9DL,-2L,0x1BD8A7EDADFDC2CCL,0x72B2L,0L},{4UL,18446744073709551615UL,-6L,0x6FL,0x5714A399L,-1L,65533UL,4L}}}, // p_1413->g_354
        (VECTOR(int16_t, 16))(0x42D5L, (VECTOR(int16_t, 4))(0x42D5L, (VECTOR(int16_t, 2))(0x42D5L, 1L), 1L), 1L, 0x42D5L, 1L, (VECTOR(int16_t, 2))(0x42D5L, 1L), (VECTOR(int16_t, 2))(0x42D5L, 1L), 0x42D5L, 1L, 0x42D5L, 1L), // p_1413->g_359
        {0x41FBD551AEB1615AL,-1L,0x58L,0x66BEL,7L,-1L,0x2C9AL,-1L,0x5BC4L}, // p_1413->g_368
        &p_1413->g_368, // p_1413->g_367
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_1413->g_380
        (VECTOR(uint32_t, 2))(0xB85A99FAL, 4294967295UL), // p_1413->g_391
        &p_1413->g_194, // p_1413->g_397
        {{{0x0010F0C0L,0x310B41CEA1613AB4L,-1L,0x32L,0L,0x287BA560C4948ECBL,0x2003L,-1L},{1UL,0xA263170451AE443BL,0x314FAE41L,0xD8L,-1L,0x3F6E59EC6E3C19B8L,1UL,0x322DBA714309F89FL}},{{0x0010F0C0L,0x310B41CEA1613AB4L,-1L,0x32L,0L,0x287BA560C4948ECBL,0x2003L,-1L},{1UL,0xA263170451AE443BL,0x314FAE41L,0xD8L,-1L,0x3F6E59EC6E3C19B8L,1UL,0x322DBA714309F89FL}},{{0x0010F0C0L,0x310B41CEA1613AB4L,-1L,0x32L,0L,0x287BA560C4948ECBL,0x2003L,-1L},{1UL,0xA263170451AE443BL,0x314FAE41L,0xD8L,-1L,0x3F6E59EC6E3C19B8L,1UL,0x322DBA714309F89FL}},{{0x0010F0C0L,0x310B41CEA1613AB4L,-1L,0x32L,0L,0x287BA560C4948ECBL,0x2003L,-1L},{1UL,0xA263170451AE443BL,0x314FAE41L,0xD8L,-1L,0x3F6E59EC6E3C19B8L,1UL,0x322DBA714309F89FL}},{{0x0010F0C0L,0x310B41CEA1613AB4L,-1L,0x32L,0L,0x287BA560C4948ECBL,0x2003L,-1L},{1UL,0xA263170451AE443BL,0x314FAE41L,0xD8L,-1L,0x3F6E59EC6E3C19B8L,1UL,0x322DBA714309F89FL}},{{0x0010F0C0L,0x310B41CEA1613AB4L,-1L,0x32L,0L,0x287BA560C4948ECBL,0x2003L,-1L},{1UL,0xA263170451AE443BL,0x314FAE41L,0xD8L,-1L,0x3F6E59EC6E3C19B8L,1UL,0x322DBA714309F89FL}},{{0x0010F0C0L,0x310B41CEA1613AB4L,-1L,0x32L,0L,0x287BA560C4948ECBL,0x2003L,-1L},{1UL,0xA263170451AE443BL,0x314FAE41L,0xD8L,-1L,0x3F6E59EC6E3C19B8L,1UL,0x322DBA714309F89FL}},{{0x0010F0C0L,0x310B41CEA1613AB4L,-1L,0x32L,0L,0x287BA560C4948ECBL,0x2003L,-1L},{1UL,0xA263170451AE443BL,0x314FAE41L,0xD8L,-1L,0x3F6E59EC6E3C19B8L,1UL,0x322DBA714309F89FL}},{{0x0010F0C0L,0x310B41CEA1613AB4L,-1L,0x32L,0L,0x287BA560C4948ECBL,0x2003L,-1L},{1UL,0xA263170451AE443BL,0x314FAE41L,0xD8L,-1L,0x3F6E59EC6E3C19B8L,1UL,0x322DBA714309F89FL}}}, // p_1413->g_404
        (void*)0, // p_1413->g_439
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), // p_1413->g_440
        18446744073709551612UL, // p_1413->g_466
        (void*)0, // p_1413->g_471
        {-7L,0x57BFC1E9L}, // p_1413->g_480
        &p_1413->g_107, // p_1413->g_484
        {{0x39A772E1512BA806L,0x36200B89L,0UL,0x54D2L,-1L,-1L,0x28B8L,0x472938C7L,-4L},{0x39A772E1512BA806L,0x36200B89L,0UL,0x54D2L,-1L,-1L,0x28B8L,0x472938C7L,-4L}}, // p_1413->g_504
        (VECTOR(int32_t, 16))(0x3311018FL, (VECTOR(int32_t, 4))(0x3311018FL, (VECTOR(int32_t, 2))(0x3311018FL, 0x594ABAA3L), 0x594ABAA3L), 0x594ABAA3L, 0x3311018FL, 0x594ABAA3L, (VECTOR(int32_t, 2))(0x3311018FL, 0x594ABAA3L), (VECTOR(int32_t, 2))(0x3311018FL, 0x594ABAA3L), 0x3311018FL, 0x594ABAA3L, 0x3311018FL, 0x594ABAA3L), // p_1413->g_520
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L, (VECTOR(int64_t, 2))((-1L), 3L), (VECTOR(int64_t, 2))((-1L), 3L), (-1L), 3L, (-1L), 3L), // p_1413->g_525
        (VECTOR(int8_t, 8))(0x6EL, (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, (-8L)), (-8L)), (-8L), 0x6EL, (-8L)), // p_1413->g_526
        {{{{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L}}},{{{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L}}},{{{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L}}},{{{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L}}},{{{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L}}},{{{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L}}},{{{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L}}},{{{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L}}},{{{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L}}},{{{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L},{0x2FE874EE19EBDD91L,-4L,0xD8L,1L,0x083DC7ECL,0x5540070EL,0x3ACBL,-9L,1L}}}}, // p_1413->g_528
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x63B684D2856B3A96L), 0x63B684D2856B3A96L), 0x63B684D2856B3A96L, (-1L), 0x63B684D2856B3A96L), // p_1413->g_532
        {0x01D18A3DL,1L}, // p_1413->g_690
        (VECTOR(int16_t, 16))(0x544FL, (VECTOR(int16_t, 4))(0x544FL, (VECTOR(int16_t, 2))(0x544FL, (-1L)), (-1L)), (-1L), 0x544FL, (-1L), (VECTOR(int16_t, 2))(0x544FL, (-1L)), (VECTOR(int16_t, 2))(0x544FL, (-1L)), 0x544FL, (-1L), 0x544FL, (-1L)), // p_1413->g_748
        &p_1413->g_397, // p_1413->g_750
        &p_1413->g_199, // p_1413->g_763
        {0x0801AC3A8B4FD1E4L,-5L,9UL,0L,-8L,-1L,0xFA20L,0L,-10L}, // p_1413->g_768
        {1L,0L,0xB6L,0x1AC1L,0x07C380B0L,0x239B65EFL,0xB985L,-3L,7L}, // p_1413->g_769
        {1L,0x15E837F9L,0xA4L,1L,0x40CA4EF7L,0x35674DEFL,3UL,2L,0x752DL}, // p_1413->g_776
        {-1L,0x1F6EEDE6L,0xA6L,6L,0L,9L,0xF20BL,-1L,0x6221L}, // p_1413->g_779
        &p_1413->g_137, // p_1413->g_780
        {0x56853F71L,-7L}, // p_1413->g_782
        {&p_1413->g_782,&p_1413->g_782,&p_1413->g_782}, // p_1413->g_781
        {0UL,0UL,0L,0xF2L,0L,0L,0x2891L,0L}, // p_1413->g_785
        {{{{0x01E30D10L,0x5083F73DL},{-1L,0x3795586DL},{0x01E30D10L,0x5083F73DL},{0x01E30D10L,0x5083F73DL},{-1L,0x3795586DL},{0x01E30D10L,0x5083F73DL}}},{{{0x01E30D10L,0x5083F73DL},{-1L,0x3795586DL},{0x01E30D10L,0x5083F73DL},{0x01E30D10L,0x5083F73DL},{-1L,0x3795586DL},{0x01E30D10L,0x5083F73DL}}}}, // p_1413->g_799
        (VECTOR(int16_t, 16))(0x6441L, (VECTOR(int16_t, 4))(0x6441L, (VECTOR(int16_t, 2))(0x6441L, 1L), 1L), 1L, 0x6441L, 1L, (VECTOR(int16_t, 2))(0x6441L, 1L), (VECTOR(int16_t, 2))(0x6441L, 1L), 0x6441L, 1L, 0x6441L, 1L), // p_1413->g_801
        0xED701359A86E482FL, // p_1413->g_827
        &p_1413->g_199, // p_1413->g_831
        &p_1413->g_195, // p_1413->g_844
        {0UL,0x7AC535113561B7EEL,-1L,1UL,0x0C90F3ECL,8L,0xB521L,-5L}, // p_1413->g_858
        {&p_1413->g_199,&p_1413->g_199,&p_1413->g_199,&p_1413->g_199}, // p_1413->g_862
        &p_1413->g_199, // p_1413->g_863
        &p_1413->g_380[1][6], // p_1413->g_880
        &p_1413->g_880, // p_1413->g_879
        {4L,0x2B42F7F3L,250UL,8L,0L,0x1F023CC7L,65534UL,0x33354007L,-1L}, // p_1413->g_901
        &p_1413->g_199, // p_1413->g_980
        (VECTOR(int16_t, 16))(0x667FL, (VECTOR(int16_t, 4))(0x667FL, (VECTOR(int16_t, 2))(0x667FL, 0L), 0L), 0L, 0x667FL, 0L, (VECTOR(int16_t, 2))(0x667FL, 0L), (VECTOR(int16_t, 2))(0x667FL, 0L), 0x667FL, 0L, 0x667FL, 0L), // p_1413->g_1009
        (VECTOR(uint8_t, 2))(255UL, 0x2DL), // p_1413->g_1070
        (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x17F2L), 0x17F2L), 0x17F2L, 6L, 0x17F2L), // p_1413->g_1077
        {{7L,0L,0xBAL,0x0927L,0x74FF392BL,-1L,65535UL,-2L,4L},{7L,0L,0xBAL,0x0927L,0x74FF392BL,-1L,65535UL,-2L,4L},{7L,0L,0xBAL,0x0927L,0x74FF392BL,-1L,65535UL,-2L,4L},{7L,0L,0xBAL,0x0927L,0x74FF392BL,-1L,65535UL,-2L,4L},{7L,0L,0xBAL,0x0927L,0x74FF392BL,-1L,65535UL,-2L,4L},{7L,0L,0xBAL,0x0927L,0x74FF392BL,-1L,65535UL,-2L,4L},{7L,0L,0xBAL,0x0927L,0x74FF392BL,-1L,65535UL,-2L,4L},{7L,0L,0xBAL,0x0927L,0x74FF392BL,-1L,65535UL,-2L,4L}}, // p_1413->g_1098
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 8UL), 8UL), 8UL, 255UL, 8UL), // p_1413->g_1101
        (VECTOR(uint8_t, 8))(0x3BL, (VECTOR(uint8_t, 4))(0x3BL, (VECTOR(uint8_t, 2))(0x3BL, 0x97L), 0x97L), 0x97L, 0x3BL, 0x97L), // p_1413->g_1106
        (VECTOR(uint64_t, 2))(1UL, 0x659675EB727F85C3L), // p_1413->g_1125
        (VECTOR(uint64_t, 4))(0xDDE43F5B2D2B4698L, (VECTOR(uint64_t, 2))(0xDDE43F5B2D2B4698L, 18446744073709551615UL), 18446744073709551615UL), // p_1413->g_1126
        (VECTOR(int32_t, 4))(0x1C201429L, (VECTOR(int32_t, 2))(0x1C201429L, (-6L)), (-6L)), // p_1413->g_1139
        (VECTOR(int32_t, 2))(0x3B0867F3L, (-5L)), // p_1413->g_1140
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x4BCC9D81L), 0x4BCC9D81L), 0x4BCC9D81L, 1L, 0x4BCC9D81L, (VECTOR(int32_t, 2))(1L, 0x4BCC9D81L), (VECTOR(int32_t, 2))(1L, 0x4BCC9D81L), 1L, 0x4BCC9D81L, 1L, 0x4BCC9D81L), // p_1413->g_1141
        {{0L,0x19530B85L},{0L,0x19530B85L},{0L,0x19530B85L},{0L,0x19530B85L},{0L,0x19530B85L},{0L,0x19530B85L},{0L,0x19530B85L},{0L,0x19530B85L},{0L,0x19530B85L}}, // p_1413->g_1149
        {0x21A4553EL,0x45C03D29L}, // p_1413->g_1281
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x24L), 0x24L), 0x24L, 1L, 0x24L), // p_1413->g_1294
        (VECTOR(int8_t, 8))(0x46L, (VECTOR(int8_t, 4))(0x46L, (VECTOR(int8_t, 2))(0x46L, 5L), 5L), 5L, 0x46L, 5L), // p_1413->g_1298
        (VECTOR(int8_t, 2))(0x79L, 1L), // p_1413->g_1299
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3B6DAA38L), 0x3B6DAA38L), 0x3B6DAA38L, (-1L), 0x3B6DAA38L, (VECTOR(int32_t, 2))((-1L), 0x3B6DAA38L), (VECTOR(int32_t, 2))((-1L), 0x3B6DAA38L), (-1L), 0x3B6DAA38L, (-1L), 0x3B6DAA38L), // p_1413->g_1303
        (VECTOR(int32_t, 2))(0x76250652L, (-10L)), // p_1413->g_1304
        {0x10EB043E641E715EL,0x24B88C28L,0x6FL,0x4837L,0x71C89536L,0x1E036DBEL,1UL,-1L,5L}, // p_1413->g_1315
        &p_1413->g_397, // p_1413->g_1321
        &p_1413->g_1321, // p_1413->g_1320
        {0x327624BAL,0x6EDDA3FFL}, // p_1413->g_1330
        {-1L,1L}, // p_1413->g_1331
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x28L), 0x28L), 0x28L, 1UL, 0x28L, (VECTOR(uint8_t, 2))(1UL, 0x28L), (VECTOR(uint8_t, 2))(1UL, 0x28L), 1UL, 0x28L, 1UL, 0x28L), // p_1413->g_1344
        (VECTOR(int16_t, 4))(0x0FC9L, (VECTOR(int16_t, 2))(0x0FC9L, 0x2975L), 0x2975L), // p_1413->g_1350
        (VECTOR(int16_t, 2))(0x4464L, 0x2C1AL), // p_1413->g_1351
        (VECTOR(int16_t, 8))(0x620CL, (VECTOR(int16_t, 4))(0x620CL, (VECTOR(int16_t, 2))(0x620CL, 7L), 7L), 7L, 0x620CL, 7L), // p_1413->g_1352
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x5D90L), 0x5D90L), 0x5D90L, 1L, 0x5D90L), // p_1413->g_1353
        (void*)0, // p_1413->g_1354
        {{{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0}},{{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0}},{{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0}},{{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0}},{{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0}},{{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0},{(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_195,(void*)0,&p_1413->g_199,(void*)0,(void*)0}}}, // p_1413->g_1355
        {{{4294967287UL},{4294967287UL}},{{4294967287UL},{4294967287UL}},{{4294967287UL},{4294967287UL}},{{4294967287UL},{4294967287UL}},{{4294967287UL},{4294967287UL}}}, // p_1413->g_1377
        1L, // p_1413->g_1394
        &p_1413->g_195, // p_1413->g_1401
        (VECTOR(int32_t, 2))(9L, 0x412811BEL), // p_1413->g_1402
        (VECTOR(uint32_t, 16))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 0x6E9AF678L), 0x6E9AF678L), 0x6E9AF678L, 8UL, 0x6E9AF678L, (VECTOR(uint32_t, 2))(8UL, 0x6E9AF678L), (VECTOR(uint32_t, 2))(8UL, 0x6E9AF678L), 8UL, 0x6E9AF678L, 8UL, 0x6E9AF678L), // p_1413->g_1407
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551612UL), 18446744073709551612UL), 18446744073709551612UL, 1UL, 18446744073709551612UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551612UL), (VECTOR(uint64_t, 2))(1UL, 18446744073709551612UL), 1UL, 18446744073709551612UL, 1UL, 18446744073709551612UL), // p_1413->g_1410
        0, // p_1413->v_collective
        sequence_input[get_global_id(0)], // p_1413->global_0_offset
        sequence_input[get_global_id(1)], // p_1413->global_1_offset
        sequence_input[get_global_id(2)], // p_1413->global_2_offset
        sequence_input[get_local_id(0)], // p_1413->local_0_offset
        sequence_input[get_local_id(1)], // p_1413->local_1_offset
        sequence_input[get_local_id(2)], // p_1413->local_2_offset
        sequence_input[get_group_id(0)], // p_1413->group_0_offset
        sequence_input[get_group_id(1)], // p_1413->group_1_offset
        sequence_input[get_group_id(2)], // p_1413->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 104)), permutations[0][get_linear_local_id()])), // p_1413->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1414 = c_1415;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1413);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1413->g_58[i][j], "p_1413->g_58[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1413->g_61.s0, "p_1413->g_61.s0", print_hash_value);
    transparent_crc(p_1413->g_61.s1, "p_1413->g_61.s1", print_hash_value);
    transparent_crc(p_1413->g_61.s2, "p_1413->g_61.s2", print_hash_value);
    transparent_crc(p_1413->g_61.s3, "p_1413->g_61.s3", print_hash_value);
    transparent_crc(p_1413->g_61.s4, "p_1413->g_61.s4", print_hash_value);
    transparent_crc(p_1413->g_61.s5, "p_1413->g_61.s5", print_hash_value);
    transparent_crc(p_1413->g_61.s6, "p_1413->g_61.s6", print_hash_value);
    transparent_crc(p_1413->g_61.s7, "p_1413->g_61.s7", print_hash_value);
    transparent_crc(p_1413->g_72.f0, "p_1413->g_72.f0", print_hash_value);
    transparent_crc(p_1413->g_72.f1, "p_1413->g_72.f1", print_hash_value);
    transparent_crc(p_1413->g_72.f2, "p_1413->g_72.f2", print_hash_value);
    transparent_crc(p_1413->g_72.f3, "p_1413->g_72.f3", print_hash_value);
    transparent_crc(p_1413->g_72.f4, "p_1413->g_72.f4", print_hash_value);
    transparent_crc(p_1413->g_72.f5, "p_1413->g_72.f5", print_hash_value);
    transparent_crc(p_1413->g_72.f6, "p_1413->g_72.f6", print_hash_value);
    transparent_crc(p_1413->g_72.f7, "p_1413->g_72.f7", print_hash_value);
    transparent_crc(p_1413->g_86.x, "p_1413->g_86.x", print_hash_value);
    transparent_crc(p_1413->g_86.y, "p_1413->g_86.y", print_hash_value);
    transparent_crc(p_1413->g_87.s0, "p_1413->g_87.s0", print_hash_value);
    transparent_crc(p_1413->g_87.s1, "p_1413->g_87.s1", print_hash_value);
    transparent_crc(p_1413->g_87.s2, "p_1413->g_87.s2", print_hash_value);
    transparent_crc(p_1413->g_87.s3, "p_1413->g_87.s3", print_hash_value);
    transparent_crc(p_1413->g_87.s4, "p_1413->g_87.s4", print_hash_value);
    transparent_crc(p_1413->g_87.s5, "p_1413->g_87.s5", print_hash_value);
    transparent_crc(p_1413->g_87.s6, "p_1413->g_87.s6", print_hash_value);
    transparent_crc(p_1413->g_87.s7, "p_1413->g_87.s7", print_hash_value);
    transparent_crc(p_1413->g_87.s8, "p_1413->g_87.s8", print_hash_value);
    transparent_crc(p_1413->g_87.s9, "p_1413->g_87.s9", print_hash_value);
    transparent_crc(p_1413->g_87.sa, "p_1413->g_87.sa", print_hash_value);
    transparent_crc(p_1413->g_87.sb, "p_1413->g_87.sb", print_hash_value);
    transparent_crc(p_1413->g_87.sc, "p_1413->g_87.sc", print_hash_value);
    transparent_crc(p_1413->g_87.sd, "p_1413->g_87.sd", print_hash_value);
    transparent_crc(p_1413->g_87.se, "p_1413->g_87.se", print_hash_value);
    transparent_crc(p_1413->g_87.sf, "p_1413->g_87.sf", print_hash_value);
    transparent_crc(p_1413->g_108.f0, "p_1413->g_108.f0", print_hash_value);
    transparent_crc(p_1413->g_108.f1, "p_1413->g_108.f1", print_hash_value);
    transparent_crc(p_1413->g_108.f2, "p_1413->g_108.f2", print_hash_value);
    transparent_crc(p_1413->g_108.f3, "p_1413->g_108.f3", print_hash_value);
    transparent_crc(p_1413->g_108.f4, "p_1413->g_108.f4", print_hash_value);
    transparent_crc(p_1413->g_108.f5, "p_1413->g_108.f5", print_hash_value);
    transparent_crc(p_1413->g_108.f6, "p_1413->g_108.f6", print_hash_value);
    transparent_crc(p_1413->g_108.f7, "p_1413->g_108.f7", print_hash_value);
    transparent_crc(p_1413->g_120.x, "p_1413->g_120.x", print_hash_value);
    transparent_crc(p_1413->g_120.y, "p_1413->g_120.y", print_hash_value);
    transparent_crc(p_1413->g_120.z, "p_1413->g_120.z", print_hash_value);
    transparent_crc(p_1413->g_120.w, "p_1413->g_120.w", print_hash_value);
    transparent_crc(p_1413->g_121.x, "p_1413->g_121.x", print_hash_value);
    transparent_crc(p_1413->g_121.y, "p_1413->g_121.y", print_hash_value);
    transparent_crc(p_1413->g_121.z, "p_1413->g_121.z", print_hash_value);
    transparent_crc(p_1413->g_121.w, "p_1413->g_121.w", print_hash_value);
    transparent_crc(p_1413->g_137, "p_1413->g_137", print_hash_value);
    transparent_crc(p_1413->g_143, "p_1413->g_143", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1413->g_165[i], "p_1413->g_165[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1413->g_177[i], "p_1413->g_177[i]", print_hash_value);

    }
    transparent_crc(p_1413->g_185.s0, "p_1413->g_185.s0", print_hash_value);
    transparent_crc(p_1413->g_185.s1, "p_1413->g_185.s1", print_hash_value);
    transparent_crc(p_1413->g_185.s2, "p_1413->g_185.s2", print_hash_value);
    transparent_crc(p_1413->g_185.s3, "p_1413->g_185.s3", print_hash_value);
    transparent_crc(p_1413->g_185.s4, "p_1413->g_185.s4", print_hash_value);
    transparent_crc(p_1413->g_185.s5, "p_1413->g_185.s5", print_hash_value);
    transparent_crc(p_1413->g_185.s6, "p_1413->g_185.s6", print_hash_value);
    transparent_crc(p_1413->g_185.s7, "p_1413->g_185.s7", print_hash_value);
    transparent_crc(p_1413->g_186.s0, "p_1413->g_186.s0", print_hash_value);
    transparent_crc(p_1413->g_186.s1, "p_1413->g_186.s1", print_hash_value);
    transparent_crc(p_1413->g_186.s2, "p_1413->g_186.s2", print_hash_value);
    transparent_crc(p_1413->g_186.s3, "p_1413->g_186.s3", print_hash_value);
    transparent_crc(p_1413->g_186.s4, "p_1413->g_186.s4", print_hash_value);
    transparent_crc(p_1413->g_186.s5, "p_1413->g_186.s5", print_hash_value);
    transparent_crc(p_1413->g_186.s6, "p_1413->g_186.s6", print_hash_value);
    transparent_crc(p_1413->g_186.s7, "p_1413->g_186.s7", print_hash_value);
    transparent_crc(p_1413->g_186.s8, "p_1413->g_186.s8", print_hash_value);
    transparent_crc(p_1413->g_186.s9, "p_1413->g_186.s9", print_hash_value);
    transparent_crc(p_1413->g_186.sa, "p_1413->g_186.sa", print_hash_value);
    transparent_crc(p_1413->g_186.sb, "p_1413->g_186.sb", print_hash_value);
    transparent_crc(p_1413->g_186.sc, "p_1413->g_186.sc", print_hash_value);
    transparent_crc(p_1413->g_186.sd, "p_1413->g_186.sd", print_hash_value);
    transparent_crc(p_1413->g_186.se, "p_1413->g_186.se", print_hash_value);
    transparent_crc(p_1413->g_186.sf, "p_1413->g_186.sf", print_hash_value);
    transparent_crc(p_1413->g_187.x, "p_1413->g_187.x", print_hash_value);
    transparent_crc(p_1413->g_187.y, "p_1413->g_187.y", print_hash_value);
    transparent_crc(p_1413->g_240, "p_1413->g_240", print_hash_value);
    transparent_crc(p_1413->g_272.s0, "p_1413->g_272.s0", print_hash_value);
    transparent_crc(p_1413->g_272.s1, "p_1413->g_272.s1", print_hash_value);
    transparent_crc(p_1413->g_272.s2, "p_1413->g_272.s2", print_hash_value);
    transparent_crc(p_1413->g_272.s3, "p_1413->g_272.s3", print_hash_value);
    transparent_crc(p_1413->g_272.s4, "p_1413->g_272.s4", print_hash_value);
    transparent_crc(p_1413->g_272.s5, "p_1413->g_272.s5", print_hash_value);
    transparent_crc(p_1413->g_272.s6, "p_1413->g_272.s6", print_hash_value);
    transparent_crc(p_1413->g_272.s7, "p_1413->g_272.s7", print_hash_value);
    transparent_crc(p_1413->g_273.s0, "p_1413->g_273.s0", print_hash_value);
    transparent_crc(p_1413->g_273.s1, "p_1413->g_273.s1", print_hash_value);
    transparent_crc(p_1413->g_273.s2, "p_1413->g_273.s2", print_hash_value);
    transparent_crc(p_1413->g_273.s3, "p_1413->g_273.s3", print_hash_value);
    transparent_crc(p_1413->g_273.s4, "p_1413->g_273.s4", print_hash_value);
    transparent_crc(p_1413->g_273.s5, "p_1413->g_273.s5", print_hash_value);
    transparent_crc(p_1413->g_273.s6, "p_1413->g_273.s6", print_hash_value);
    transparent_crc(p_1413->g_273.s7, "p_1413->g_273.s7", print_hash_value);
    transparent_crc(p_1413->g_273.s8, "p_1413->g_273.s8", print_hash_value);
    transparent_crc(p_1413->g_273.s9, "p_1413->g_273.s9", print_hash_value);
    transparent_crc(p_1413->g_273.sa, "p_1413->g_273.sa", print_hash_value);
    transparent_crc(p_1413->g_273.sb, "p_1413->g_273.sb", print_hash_value);
    transparent_crc(p_1413->g_273.sc, "p_1413->g_273.sc", print_hash_value);
    transparent_crc(p_1413->g_273.sd, "p_1413->g_273.sd", print_hash_value);
    transparent_crc(p_1413->g_273.se, "p_1413->g_273.se", print_hash_value);
    transparent_crc(p_1413->g_273.sf, "p_1413->g_273.sf", print_hash_value);
    transparent_crc(p_1413->g_284.s0, "p_1413->g_284.s0", print_hash_value);
    transparent_crc(p_1413->g_284.s1, "p_1413->g_284.s1", print_hash_value);
    transparent_crc(p_1413->g_284.s2, "p_1413->g_284.s2", print_hash_value);
    transparent_crc(p_1413->g_284.s3, "p_1413->g_284.s3", print_hash_value);
    transparent_crc(p_1413->g_284.s4, "p_1413->g_284.s4", print_hash_value);
    transparent_crc(p_1413->g_284.s5, "p_1413->g_284.s5", print_hash_value);
    transparent_crc(p_1413->g_284.s6, "p_1413->g_284.s6", print_hash_value);
    transparent_crc(p_1413->g_284.s7, "p_1413->g_284.s7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1413->g_313[i], "p_1413->g_313[i]", print_hash_value);

    }
    transparent_crc(p_1413->g_314, "p_1413->g_314", print_hash_value);
    transparent_crc(p_1413->g_317.f0, "p_1413->g_317.f0", print_hash_value);
    transparent_crc(p_1413->g_317.f1, "p_1413->g_317.f1", print_hash_value);
    transparent_crc(p_1413->g_326.x, "p_1413->g_326.x", print_hash_value);
    transparent_crc(p_1413->g_326.y, "p_1413->g_326.y", print_hash_value);
    transparent_crc(p_1413->g_326.z, "p_1413->g_326.z", print_hash_value);
    transparent_crc(p_1413->g_326.w, "p_1413->g_326.w", print_hash_value);
    transparent_crc(p_1413->g_349.f0, "p_1413->g_349.f0", print_hash_value);
    transparent_crc(p_1413->g_349.f1, "p_1413->g_349.f1", print_hash_value);
    transparent_crc(p_1413->g_349.f2, "p_1413->g_349.f2", print_hash_value);
    transparent_crc(p_1413->g_349.f3, "p_1413->g_349.f3", print_hash_value);
    transparent_crc(p_1413->g_349.f4, "p_1413->g_349.f4", print_hash_value);
    transparent_crc(p_1413->g_349.f5, "p_1413->g_349.f5", print_hash_value);
    transparent_crc(p_1413->g_349.f6, "p_1413->g_349.f6", print_hash_value);
    transparent_crc(p_1413->g_349.f7, "p_1413->g_349.f7", print_hash_value);
    transparent_crc(p_1413->g_349.f8, "p_1413->g_349.f8", print_hash_value);
    transparent_crc(p_1413->g_352, "p_1413->g_352", print_hash_value);
    transparent_crc(p_1413->g_353, "p_1413->g_353", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1413->g_354[i][j].f0, "p_1413->g_354[i][j].f0", print_hash_value);
            transparent_crc(p_1413->g_354[i][j].f1, "p_1413->g_354[i][j].f1", print_hash_value);
            transparent_crc(p_1413->g_354[i][j].f2, "p_1413->g_354[i][j].f2", print_hash_value);
            transparent_crc(p_1413->g_354[i][j].f3, "p_1413->g_354[i][j].f3", print_hash_value);
            transparent_crc(p_1413->g_354[i][j].f4, "p_1413->g_354[i][j].f4", print_hash_value);
            transparent_crc(p_1413->g_354[i][j].f5, "p_1413->g_354[i][j].f5", print_hash_value);
            transparent_crc(p_1413->g_354[i][j].f6, "p_1413->g_354[i][j].f6", print_hash_value);
            transparent_crc(p_1413->g_354[i][j].f7, "p_1413->g_354[i][j].f7", print_hash_value);

        }
    }
    transparent_crc(p_1413->g_359.s0, "p_1413->g_359.s0", print_hash_value);
    transparent_crc(p_1413->g_359.s1, "p_1413->g_359.s1", print_hash_value);
    transparent_crc(p_1413->g_359.s2, "p_1413->g_359.s2", print_hash_value);
    transparent_crc(p_1413->g_359.s3, "p_1413->g_359.s3", print_hash_value);
    transparent_crc(p_1413->g_359.s4, "p_1413->g_359.s4", print_hash_value);
    transparent_crc(p_1413->g_359.s5, "p_1413->g_359.s5", print_hash_value);
    transparent_crc(p_1413->g_359.s6, "p_1413->g_359.s6", print_hash_value);
    transparent_crc(p_1413->g_359.s7, "p_1413->g_359.s7", print_hash_value);
    transparent_crc(p_1413->g_359.s8, "p_1413->g_359.s8", print_hash_value);
    transparent_crc(p_1413->g_359.s9, "p_1413->g_359.s9", print_hash_value);
    transparent_crc(p_1413->g_359.sa, "p_1413->g_359.sa", print_hash_value);
    transparent_crc(p_1413->g_359.sb, "p_1413->g_359.sb", print_hash_value);
    transparent_crc(p_1413->g_359.sc, "p_1413->g_359.sc", print_hash_value);
    transparent_crc(p_1413->g_359.sd, "p_1413->g_359.sd", print_hash_value);
    transparent_crc(p_1413->g_359.se, "p_1413->g_359.se", print_hash_value);
    transparent_crc(p_1413->g_359.sf, "p_1413->g_359.sf", print_hash_value);
    transparent_crc(p_1413->g_368.f0, "p_1413->g_368.f0", print_hash_value);
    transparent_crc(p_1413->g_368.f1, "p_1413->g_368.f1", print_hash_value);
    transparent_crc(p_1413->g_368.f2, "p_1413->g_368.f2", print_hash_value);
    transparent_crc(p_1413->g_368.f3, "p_1413->g_368.f3", print_hash_value);
    transparent_crc(p_1413->g_368.f4, "p_1413->g_368.f4", print_hash_value);
    transparent_crc(p_1413->g_368.f5, "p_1413->g_368.f5", print_hash_value);
    transparent_crc(p_1413->g_368.f6, "p_1413->g_368.f6", print_hash_value);
    transparent_crc(p_1413->g_368.f7, "p_1413->g_368.f7", print_hash_value);
    transparent_crc(p_1413->g_368.f8, "p_1413->g_368.f8", print_hash_value);
    transparent_crc(p_1413->g_391.x, "p_1413->g_391.x", print_hash_value);
    transparent_crc(p_1413->g_391.y, "p_1413->g_391.y", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1413->g_404[i][j].f0, "p_1413->g_404[i][j].f0", print_hash_value);
            transparent_crc(p_1413->g_404[i][j].f1, "p_1413->g_404[i][j].f1", print_hash_value);
            transparent_crc(p_1413->g_404[i][j].f2, "p_1413->g_404[i][j].f2", print_hash_value);
            transparent_crc(p_1413->g_404[i][j].f3, "p_1413->g_404[i][j].f3", print_hash_value);
            transparent_crc(p_1413->g_404[i][j].f4, "p_1413->g_404[i][j].f4", print_hash_value);
            transparent_crc(p_1413->g_404[i][j].f5, "p_1413->g_404[i][j].f5", print_hash_value);
            transparent_crc(p_1413->g_404[i][j].f6, "p_1413->g_404[i][j].f6", print_hash_value);
            transparent_crc(p_1413->g_404[i][j].f7, "p_1413->g_404[i][j].f7", print_hash_value);

        }
    }
    transparent_crc(p_1413->g_440.x, "p_1413->g_440.x", print_hash_value);
    transparent_crc(p_1413->g_440.y, "p_1413->g_440.y", print_hash_value);
    transparent_crc(p_1413->g_440.z, "p_1413->g_440.z", print_hash_value);
    transparent_crc(p_1413->g_440.w, "p_1413->g_440.w", print_hash_value);
    transparent_crc(p_1413->g_466, "p_1413->g_466", print_hash_value);
    transparent_crc(p_1413->g_480.f0, "p_1413->g_480.f0", print_hash_value);
    transparent_crc(p_1413->g_480.f1, "p_1413->g_480.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1413->g_504[i].f0, "p_1413->g_504[i].f0", print_hash_value);
        transparent_crc(p_1413->g_504[i].f1, "p_1413->g_504[i].f1", print_hash_value);
        transparent_crc(p_1413->g_504[i].f2, "p_1413->g_504[i].f2", print_hash_value);
        transparent_crc(p_1413->g_504[i].f3, "p_1413->g_504[i].f3", print_hash_value);
        transparent_crc(p_1413->g_504[i].f4, "p_1413->g_504[i].f4", print_hash_value);
        transparent_crc(p_1413->g_504[i].f5, "p_1413->g_504[i].f5", print_hash_value);
        transparent_crc(p_1413->g_504[i].f6, "p_1413->g_504[i].f6", print_hash_value);
        transparent_crc(p_1413->g_504[i].f7, "p_1413->g_504[i].f7", print_hash_value);
        transparent_crc(p_1413->g_504[i].f8, "p_1413->g_504[i].f8", print_hash_value);

    }
    transparent_crc(p_1413->g_520.s0, "p_1413->g_520.s0", print_hash_value);
    transparent_crc(p_1413->g_520.s1, "p_1413->g_520.s1", print_hash_value);
    transparent_crc(p_1413->g_520.s2, "p_1413->g_520.s2", print_hash_value);
    transparent_crc(p_1413->g_520.s3, "p_1413->g_520.s3", print_hash_value);
    transparent_crc(p_1413->g_520.s4, "p_1413->g_520.s4", print_hash_value);
    transparent_crc(p_1413->g_520.s5, "p_1413->g_520.s5", print_hash_value);
    transparent_crc(p_1413->g_520.s6, "p_1413->g_520.s6", print_hash_value);
    transparent_crc(p_1413->g_520.s7, "p_1413->g_520.s7", print_hash_value);
    transparent_crc(p_1413->g_520.s8, "p_1413->g_520.s8", print_hash_value);
    transparent_crc(p_1413->g_520.s9, "p_1413->g_520.s9", print_hash_value);
    transparent_crc(p_1413->g_520.sa, "p_1413->g_520.sa", print_hash_value);
    transparent_crc(p_1413->g_520.sb, "p_1413->g_520.sb", print_hash_value);
    transparent_crc(p_1413->g_520.sc, "p_1413->g_520.sc", print_hash_value);
    transparent_crc(p_1413->g_520.sd, "p_1413->g_520.sd", print_hash_value);
    transparent_crc(p_1413->g_520.se, "p_1413->g_520.se", print_hash_value);
    transparent_crc(p_1413->g_520.sf, "p_1413->g_520.sf", print_hash_value);
    transparent_crc(p_1413->g_525.s0, "p_1413->g_525.s0", print_hash_value);
    transparent_crc(p_1413->g_525.s1, "p_1413->g_525.s1", print_hash_value);
    transparent_crc(p_1413->g_525.s2, "p_1413->g_525.s2", print_hash_value);
    transparent_crc(p_1413->g_525.s3, "p_1413->g_525.s3", print_hash_value);
    transparent_crc(p_1413->g_525.s4, "p_1413->g_525.s4", print_hash_value);
    transparent_crc(p_1413->g_525.s5, "p_1413->g_525.s5", print_hash_value);
    transparent_crc(p_1413->g_525.s6, "p_1413->g_525.s6", print_hash_value);
    transparent_crc(p_1413->g_525.s7, "p_1413->g_525.s7", print_hash_value);
    transparent_crc(p_1413->g_525.s8, "p_1413->g_525.s8", print_hash_value);
    transparent_crc(p_1413->g_525.s9, "p_1413->g_525.s9", print_hash_value);
    transparent_crc(p_1413->g_525.sa, "p_1413->g_525.sa", print_hash_value);
    transparent_crc(p_1413->g_525.sb, "p_1413->g_525.sb", print_hash_value);
    transparent_crc(p_1413->g_525.sc, "p_1413->g_525.sc", print_hash_value);
    transparent_crc(p_1413->g_525.sd, "p_1413->g_525.sd", print_hash_value);
    transparent_crc(p_1413->g_525.se, "p_1413->g_525.se", print_hash_value);
    transparent_crc(p_1413->g_525.sf, "p_1413->g_525.sf", print_hash_value);
    transparent_crc(p_1413->g_526.s0, "p_1413->g_526.s0", print_hash_value);
    transparent_crc(p_1413->g_526.s1, "p_1413->g_526.s1", print_hash_value);
    transparent_crc(p_1413->g_526.s2, "p_1413->g_526.s2", print_hash_value);
    transparent_crc(p_1413->g_526.s3, "p_1413->g_526.s3", print_hash_value);
    transparent_crc(p_1413->g_526.s4, "p_1413->g_526.s4", print_hash_value);
    transparent_crc(p_1413->g_526.s5, "p_1413->g_526.s5", print_hash_value);
    transparent_crc(p_1413->g_526.s6, "p_1413->g_526.s6", print_hash_value);
    transparent_crc(p_1413->g_526.s7, "p_1413->g_526.s7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1413->g_528[i][j][k].f0, "p_1413->g_528[i][j][k].f0", print_hash_value);
                transparent_crc(p_1413->g_528[i][j][k].f1, "p_1413->g_528[i][j][k].f1", print_hash_value);
                transparent_crc(p_1413->g_528[i][j][k].f2, "p_1413->g_528[i][j][k].f2", print_hash_value);
                transparent_crc(p_1413->g_528[i][j][k].f3, "p_1413->g_528[i][j][k].f3", print_hash_value);
                transparent_crc(p_1413->g_528[i][j][k].f4, "p_1413->g_528[i][j][k].f4", print_hash_value);
                transparent_crc(p_1413->g_528[i][j][k].f5, "p_1413->g_528[i][j][k].f5", print_hash_value);
                transparent_crc(p_1413->g_528[i][j][k].f6, "p_1413->g_528[i][j][k].f6", print_hash_value);
                transparent_crc(p_1413->g_528[i][j][k].f7, "p_1413->g_528[i][j][k].f7", print_hash_value);
                transparent_crc(p_1413->g_528[i][j][k].f8, "p_1413->g_528[i][j][k].f8", print_hash_value);

            }
        }
    }
    transparent_crc(p_1413->g_532.s0, "p_1413->g_532.s0", print_hash_value);
    transparent_crc(p_1413->g_532.s1, "p_1413->g_532.s1", print_hash_value);
    transparent_crc(p_1413->g_532.s2, "p_1413->g_532.s2", print_hash_value);
    transparent_crc(p_1413->g_532.s3, "p_1413->g_532.s3", print_hash_value);
    transparent_crc(p_1413->g_532.s4, "p_1413->g_532.s4", print_hash_value);
    transparent_crc(p_1413->g_532.s5, "p_1413->g_532.s5", print_hash_value);
    transparent_crc(p_1413->g_532.s6, "p_1413->g_532.s6", print_hash_value);
    transparent_crc(p_1413->g_532.s7, "p_1413->g_532.s7", print_hash_value);
    transparent_crc(p_1413->g_690.f0, "p_1413->g_690.f0", print_hash_value);
    transparent_crc(p_1413->g_690.f1, "p_1413->g_690.f1", print_hash_value);
    transparent_crc(p_1413->g_748.s0, "p_1413->g_748.s0", print_hash_value);
    transparent_crc(p_1413->g_748.s1, "p_1413->g_748.s1", print_hash_value);
    transparent_crc(p_1413->g_748.s2, "p_1413->g_748.s2", print_hash_value);
    transparent_crc(p_1413->g_748.s3, "p_1413->g_748.s3", print_hash_value);
    transparent_crc(p_1413->g_748.s4, "p_1413->g_748.s4", print_hash_value);
    transparent_crc(p_1413->g_748.s5, "p_1413->g_748.s5", print_hash_value);
    transparent_crc(p_1413->g_748.s6, "p_1413->g_748.s6", print_hash_value);
    transparent_crc(p_1413->g_748.s7, "p_1413->g_748.s7", print_hash_value);
    transparent_crc(p_1413->g_748.s8, "p_1413->g_748.s8", print_hash_value);
    transparent_crc(p_1413->g_748.s9, "p_1413->g_748.s9", print_hash_value);
    transparent_crc(p_1413->g_748.sa, "p_1413->g_748.sa", print_hash_value);
    transparent_crc(p_1413->g_748.sb, "p_1413->g_748.sb", print_hash_value);
    transparent_crc(p_1413->g_748.sc, "p_1413->g_748.sc", print_hash_value);
    transparent_crc(p_1413->g_748.sd, "p_1413->g_748.sd", print_hash_value);
    transparent_crc(p_1413->g_748.se, "p_1413->g_748.se", print_hash_value);
    transparent_crc(p_1413->g_748.sf, "p_1413->g_748.sf", print_hash_value);
    transparent_crc(p_1413->g_768.f0, "p_1413->g_768.f0", print_hash_value);
    transparent_crc(p_1413->g_768.f1, "p_1413->g_768.f1", print_hash_value);
    transparent_crc(p_1413->g_768.f2, "p_1413->g_768.f2", print_hash_value);
    transparent_crc(p_1413->g_768.f3, "p_1413->g_768.f3", print_hash_value);
    transparent_crc(p_1413->g_768.f4, "p_1413->g_768.f4", print_hash_value);
    transparent_crc(p_1413->g_768.f5, "p_1413->g_768.f5", print_hash_value);
    transparent_crc(p_1413->g_768.f6, "p_1413->g_768.f6", print_hash_value);
    transparent_crc(p_1413->g_768.f7, "p_1413->g_768.f7", print_hash_value);
    transparent_crc(p_1413->g_768.f8, "p_1413->g_768.f8", print_hash_value);
    transparent_crc(p_1413->g_769.f0, "p_1413->g_769.f0", print_hash_value);
    transparent_crc(p_1413->g_769.f1, "p_1413->g_769.f1", print_hash_value);
    transparent_crc(p_1413->g_769.f2, "p_1413->g_769.f2", print_hash_value);
    transparent_crc(p_1413->g_769.f3, "p_1413->g_769.f3", print_hash_value);
    transparent_crc(p_1413->g_769.f4, "p_1413->g_769.f4", print_hash_value);
    transparent_crc(p_1413->g_769.f5, "p_1413->g_769.f5", print_hash_value);
    transparent_crc(p_1413->g_769.f6, "p_1413->g_769.f6", print_hash_value);
    transparent_crc(p_1413->g_769.f7, "p_1413->g_769.f7", print_hash_value);
    transparent_crc(p_1413->g_769.f8, "p_1413->g_769.f8", print_hash_value);
    transparent_crc(p_1413->g_776.f0, "p_1413->g_776.f0", print_hash_value);
    transparent_crc(p_1413->g_776.f1, "p_1413->g_776.f1", print_hash_value);
    transparent_crc(p_1413->g_776.f2, "p_1413->g_776.f2", print_hash_value);
    transparent_crc(p_1413->g_776.f3, "p_1413->g_776.f3", print_hash_value);
    transparent_crc(p_1413->g_776.f4, "p_1413->g_776.f4", print_hash_value);
    transparent_crc(p_1413->g_776.f5, "p_1413->g_776.f5", print_hash_value);
    transparent_crc(p_1413->g_776.f6, "p_1413->g_776.f6", print_hash_value);
    transparent_crc(p_1413->g_776.f7, "p_1413->g_776.f7", print_hash_value);
    transparent_crc(p_1413->g_776.f8, "p_1413->g_776.f8", print_hash_value);
    transparent_crc(p_1413->g_779.f0, "p_1413->g_779.f0", print_hash_value);
    transparent_crc(p_1413->g_779.f1, "p_1413->g_779.f1", print_hash_value);
    transparent_crc(p_1413->g_779.f2, "p_1413->g_779.f2", print_hash_value);
    transparent_crc(p_1413->g_779.f3, "p_1413->g_779.f3", print_hash_value);
    transparent_crc(p_1413->g_779.f4, "p_1413->g_779.f4", print_hash_value);
    transparent_crc(p_1413->g_779.f5, "p_1413->g_779.f5", print_hash_value);
    transparent_crc(p_1413->g_779.f6, "p_1413->g_779.f6", print_hash_value);
    transparent_crc(p_1413->g_779.f7, "p_1413->g_779.f7", print_hash_value);
    transparent_crc(p_1413->g_779.f8, "p_1413->g_779.f8", print_hash_value);
    transparent_crc(p_1413->g_782.f0, "p_1413->g_782.f0", print_hash_value);
    transparent_crc(p_1413->g_782.f1, "p_1413->g_782.f1", print_hash_value);
    transparent_crc(p_1413->g_785.f0, "p_1413->g_785.f0", print_hash_value);
    transparent_crc(p_1413->g_785.f1, "p_1413->g_785.f1", print_hash_value);
    transparent_crc(p_1413->g_785.f2, "p_1413->g_785.f2", print_hash_value);
    transparent_crc(p_1413->g_785.f3, "p_1413->g_785.f3", print_hash_value);
    transparent_crc(p_1413->g_785.f4, "p_1413->g_785.f4", print_hash_value);
    transparent_crc(p_1413->g_785.f5, "p_1413->g_785.f5", print_hash_value);
    transparent_crc(p_1413->g_785.f6, "p_1413->g_785.f6", print_hash_value);
    transparent_crc(p_1413->g_785.f7, "p_1413->g_785.f7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1413->g_799[i][j][k].f0, "p_1413->g_799[i][j][k].f0", print_hash_value);
                transparent_crc(p_1413->g_799[i][j][k].f1, "p_1413->g_799[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(p_1413->g_801.s0, "p_1413->g_801.s0", print_hash_value);
    transparent_crc(p_1413->g_801.s1, "p_1413->g_801.s1", print_hash_value);
    transparent_crc(p_1413->g_801.s2, "p_1413->g_801.s2", print_hash_value);
    transparent_crc(p_1413->g_801.s3, "p_1413->g_801.s3", print_hash_value);
    transparent_crc(p_1413->g_801.s4, "p_1413->g_801.s4", print_hash_value);
    transparent_crc(p_1413->g_801.s5, "p_1413->g_801.s5", print_hash_value);
    transparent_crc(p_1413->g_801.s6, "p_1413->g_801.s6", print_hash_value);
    transparent_crc(p_1413->g_801.s7, "p_1413->g_801.s7", print_hash_value);
    transparent_crc(p_1413->g_801.s8, "p_1413->g_801.s8", print_hash_value);
    transparent_crc(p_1413->g_801.s9, "p_1413->g_801.s9", print_hash_value);
    transparent_crc(p_1413->g_801.sa, "p_1413->g_801.sa", print_hash_value);
    transparent_crc(p_1413->g_801.sb, "p_1413->g_801.sb", print_hash_value);
    transparent_crc(p_1413->g_801.sc, "p_1413->g_801.sc", print_hash_value);
    transparent_crc(p_1413->g_801.sd, "p_1413->g_801.sd", print_hash_value);
    transparent_crc(p_1413->g_801.se, "p_1413->g_801.se", print_hash_value);
    transparent_crc(p_1413->g_801.sf, "p_1413->g_801.sf", print_hash_value);
    transparent_crc(p_1413->g_827, "p_1413->g_827", print_hash_value);
    transparent_crc(p_1413->g_858.f0, "p_1413->g_858.f0", print_hash_value);
    transparent_crc(p_1413->g_858.f1, "p_1413->g_858.f1", print_hash_value);
    transparent_crc(p_1413->g_858.f2, "p_1413->g_858.f2", print_hash_value);
    transparent_crc(p_1413->g_858.f3, "p_1413->g_858.f3", print_hash_value);
    transparent_crc(p_1413->g_858.f4, "p_1413->g_858.f4", print_hash_value);
    transparent_crc(p_1413->g_858.f5, "p_1413->g_858.f5", print_hash_value);
    transparent_crc(p_1413->g_858.f6, "p_1413->g_858.f6", print_hash_value);
    transparent_crc(p_1413->g_858.f7, "p_1413->g_858.f7", print_hash_value);
    transparent_crc(p_1413->g_901.f0, "p_1413->g_901.f0", print_hash_value);
    transparent_crc(p_1413->g_901.f1, "p_1413->g_901.f1", print_hash_value);
    transparent_crc(p_1413->g_901.f2, "p_1413->g_901.f2", print_hash_value);
    transparent_crc(p_1413->g_901.f3, "p_1413->g_901.f3", print_hash_value);
    transparent_crc(p_1413->g_901.f4, "p_1413->g_901.f4", print_hash_value);
    transparent_crc(p_1413->g_901.f5, "p_1413->g_901.f5", print_hash_value);
    transparent_crc(p_1413->g_901.f6, "p_1413->g_901.f6", print_hash_value);
    transparent_crc(p_1413->g_901.f7, "p_1413->g_901.f7", print_hash_value);
    transparent_crc(p_1413->g_901.f8, "p_1413->g_901.f8", print_hash_value);
    transparent_crc(p_1413->g_1009.s0, "p_1413->g_1009.s0", print_hash_value);
    transparent_crc(p_1413->g_1009.s1, "p_1413->g_1009.s1", print_hash_value);
    transparent_crc(p_1413->g_1009.s2, "p_1413->g_1009.s2", print_hash_value);
    transparent_crc(p_1413->g_1009.s3, "p_1413->g_1009.s3", print_hash_value);
    transparent_crc(p_1413->g_1009.s4, "p_1413->g_1009.s4", print_hash_value);
    transparent_crc(p_1413->g_1009.s5, "p_1413->g_1009.s5", print_hash_value);
    transparent_crc(p_1413->g_1009.s6, "p_1413->g_1009.s6", print_hash_value);
    transparent_crc(p_1413->g_1009.s7, "p_1413->g_1009.s7", print_hash_value);
    transparent_crc(p_1413->g_1009.s8, "p_1413->g_1009.s8", print_hash_value);
    transparent_crc(p_1413->g_1009.s9, "p_1413->g_1009.s9", print_hash_value);
    transparent_crc(p_1413->g_1009.sa, "p_1413->g_1009.sa", print_hash_value);
    transparent_crc(p_1413->g_1009.sb, "p_1413->g_1009.sb", print_hash_value);
    transparent_crc(p_1413->g_1009.sc, "p_1413->g_1009.sc", print_hash_value);
    transparent_crc(p_1413->g_1009.sd, "p_1413->g_1009.sd", print_hash_value);
    transparent_crc(p_1413->g_1009.se, "p_1413->g_1009.se", print_hash_value);
    transparent_crc(p_1413->g_1009.sf, "p_1413->g_1009.sf", print_hash_value);
    transparent_crc(p_1413->g_1070.x, "p_1413->g_1070.x", print_hash_value);
    transparent_crc(p_1413->g_1070.y, "p_1413->g_1070.y", print_hash_value);
    transparent_crc(p_1413->g_1077.s0, "p_1413->g_1077.s0", print_hash_value);
    transparent_crc(p_1413->g_1077.s1, "p_1413->g_1077.s1", print_hash_value);
    transparent_crc(p_1413->g_1077.s2, "p_1413->g_1077.s2", print_hash_value);
    transparent_crc(p_1413->g_1077.s3, "p_1413->g_1077.s3", print_hash_value);
    transparent_crc(p_1413->g_1077.s4, "p_1413->g_1077.s4", print_hash_value);
    transparent_crc(p_1413->g_1077.s5, "p_1413->g_1077.s5", print_hash_value);
    transparent_crc(p_1413->g_1077.s6, "p_1413->g_1077.s6", print_hash_value);
    transparent_crc(p_1413->g_1077.s7, "p_1413->g_1077.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1413->g_1098[i].f0, "p_1413->g_1098[i].f0", print_hash_value);
        transparent_crc(p_1413->g_1098[i].f1, "p_1413->g_1098[i].f1", print_hash_value);
        transparent_crc(p_1413->g_1098[i].f2, "p_1413->g_1098[i].f2", print_hash_value);
        transparent_crc(p_1413->g_1098[i].f3, "p_1413->g_1098[i].f3", print_hash_value);
        transparent_crc(p_1413->g_1098[i].f4, "p_1413->g_1098[i].f4", print_hash_value);
        transparent_crc(p_1413->g_1098[i].f5, "p_1413->g_1098[i].f5", print_hash_value);
        transparent_crc(p_1413->g_1098[i].f6, "p_1413->g_1098[i].f6", print_hash_value);
        transparent_crc(p_1413->g_1098[i].f7, "p_1413->g_1098[i].f7", print_hash_value);
        transparent_crc(p_1413->g_1098[i].f8, "p_1413->g_1098[i].f8", print_hash_value);

    }
    transparent_crc(p_1413->g_1101.s0, "p_1413->g_1101.s0", print_hash_value);
    transparent_crc(p_1413->g_1101.s1, "p_1413->g_1101.s1", print_hash_value);
    transparent_crc(p_1413->g_1101.s2, "p_1413->g_1101.s2", print_hash_value);
    transparent_crc(p_1413->g_1101.s3, "p_1413->g_1101.s3", print_hash_value);
    transparent_crc(p_1413->g_1101.s4, "p_1413->g_1101.s4", print_hash_value);
    transparent_crc(p_1413->g_1101.s5, "p_1413->g_1101.s5", print_hash_value);
    transparent_crc(p_1413->g_1101.s6, "p_1413->g_1101.s6", print_hash_value);
    transparent_crc(p_1413->g_1101.s7, "p_1413->g_1101.s7", print_hash_value);
    transparent_crc(p_1413->g_1106.s0, "p_1413->g_1106.s0", print_hash_value);
    transparent_crc(p_1413->g_1106.s1, "p_1413->g_1106.s1", print_hash_value);
    transparent_crc(p_1413->g_1106.s2, "p_1413->g_1106.s2", print_hash_value);
    transparent_crc(p_1413->g_1106.s3, "p_1413->g_1106.s3", print_hash_value);
    transparent_crc(p_1413->g_1106.s4, "p_1413->g_1106.s4", print_hash_value);
    transparent_crc(p_1413->g_1106.s5, "p_1413->g_1106.s5", print_hash_value);
    transparent_crc(p_1413->g_1106.s6, "p_1413->g_1106.s6", print_hash_value);
    transparent_crc(p_1413->g_1106.s7, "p_1413->g_1106.s7", print_hash_value);
    transparent_crc(p_1413->g_1125.x, "p_1413->g_1125.x", print_hash_value);
    transparent_crc(p_1413->g_1125.y, "p_1413->g_1125.y", print_hash_value);
    transparent_crc(p_1413->g_1126.x, "p_1413->g_1126.x", print_hash_value);
    transparent_crc(p_1413->g_1126.y, "p_1413->g_1126.y", print_hash_value);
    transparent_crc(p_1413->g_1126.z, "p_1413->g_1126.z", print_hash_value);
    transparent_crc(p_1413->g_1126.w, "p_1413->g_1126.w", print_hash_value);
    transparent_crc(p_1413->g_1139.x, "p_1413->g_1139.x", print_hash_value);
    transparent_crc(p_1413->g_1139.y, "p_1413->g_1139.y", print_hash_value);
    transparent_crc(p_1413->g_1139.z, "p_1413->g_1139.z", print_hash_value);
    transparent_crc(p_1413->g_1139.w, "p_1413->g_1139.w", print_hash_value);
    transparent_crc(p_1413->g_1140.x, "p_1413->g_1140.x", print_hash_value);
    transparent_crc(p_1413->g_1140.y, "p_1413->g_1140.y", print_hash_value);
    transparent_crc(p_1413->g_1141.s0, "p_1413->g_1141.s0", print_hash_value);
    transparent_crc(p_1413->g_1141.s1, "p_1413->g_1141.s1", print_hash_value);
    transparent_crc(p_1413->g_1141.s2, "p_1413->g_1141.s2", print_hash_value);
    transparent_crc(p_1413->g_1141.s3, "p_1413->g_1141.s3", print_hash_value);
    transparent_crc(p_1413->g_1141.s4, "p_1413->g_1141.s4", print_hash_value);
    transparent_crc(p_1413->g_1141.s5, "p_1413->g_1141.s5", print_hash_value);
    transparent_crc(p_1413->g_1141.s6, "p_1413->g_1141.s6", print_hash_value);
    transparent_crc(p_1413->g_1141.s7, "p_1413->g_1141.s7", print_hash_value);
    transparent_crc(p_1413->g_1141.s8, "p_1413->g_1141.s8", print_hash_value);
    transparent_crc(p_1413->g_1141.s9, "p_1413->g_1141.s9", print_hash_value);
    transparent_crc(p_1413->g_1141.sa, "p_1413->g_1141.sa", print_hash_value);
    transparent_crc(p_1413->g_1141.sb, "p_1413->g_1141.sb", print_hash_value);
    transparent_crc(p_1413->g_1141.sc, "p_1413->g_1141.sc", print_hash_value);
    transparent_crc(p_1413->g_1141.sd, "p_1413->g_1141.sd", print_hash_value);
    transparent_crc(p_1413->g_1141.se, "p_1413->g_1141.se", print_hash_value);
    transparent_crc(p_1413->g_1141.sf, "p_1413->g_1141.sf", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1413->g_1149[i].f0, "p_1413->g_1149[i].f0", print_hash_value);
        transparent_crc(p_1413->g_1149[i].f1, "p_1413->g_1149[i].f1", print_hash_value);

    }
    transparent_crc(p_1413->g_1281.f0, "p_1413->g_1281.f0", print_hash_value);
    transparent_crc(p_1413->g_1281.f1, "p_1413->g_1281.f1", print_hash_value);
    transparent_crc(p_1413->g_1294.s0, "p_1413->g_1294.s0", print_hash_value);
    transparent_crc(p_1413->g_1294.s1, "p_1413->g_1294.s1", print_hash_value);
    transparent_crc(p_1413->g_1294.s2, "p_1413->g_1294.s2", print_hash_value);
    transparent_crc(p_1413->g_1294.s3, "p_1413->g_1294.s3", print_hash_value);
    transparent_crc(p_1413->g_1294.s4, "p_1413->g_1294.s4", print_hash_value);
    transparent_crc(p_1413->g_1294.s5, "p_1413->g_1294.s5", print_hash_value);
    transparent_crc(p_1413->g_1294.s6, "p_1413->g_1294.s6", print_hash_value);
    transparent_crc(p_1413->g_1294.s7, "p_1413->g_1294.s7", print_hash_value);
    transparent_crc(p_1413->g_1298.s0, "p_1413->g_1298.s0", print_hash_value);
    transparent_crc(p_1413->g_1298.s1, "p_1413->g_1298.s1", print_hash_value);
    transparent_crc(p_1413->g_1298.s2, "p_1413->g_1298.s2", print_hash_value);
    transparent_crc(p_1413->g_1298.s3, "p_1413->g_1298.s3", print_hash_value);
    transparent_crc(p_1413->g_1298.s4, "p_1413->g_1298.s4", print_hash_value);
    transparent_crc(p_1413->g_1298.s5, "p_1413->g_1298.s5", print_hash_value);
    transparent_crc(p_1413->g_1298.s6, "p_1413->g_1298.s6", print_hash_value);
    transparent_crc(p_1413->g_1298.s7, "p_1413->g_1298.s7", print_hash_value);
    transparent_crc(p_1413->g_1299.x, "p_1413->g_1299.x", print_hash_value);
    transparent_crc(p_1413->g_1299.y, "p_1413->g_1299.y", print_hash_value);
    transparent_crc(p_1413->g_1303.s0, "p_1413->g_1303.s0", print_hash_value);
    transparent_crc(p_1413->g_1303.s1, "p_1413->g_1303.s1", print_hash_value);
    transparent_crc(p_1413->g_1303.s2, "p_1413->g_1303.s2", print_hash_value);
    transparent_crc(p_1413->g_1303.s3, "p_1413->g_1303.s3", print_hash_value);
    transparent_crc(p_1413->g_1303.s4, "p_1413->g_1303.s4", print_hash_value);
    transparent_crc(p_1413->g_1303.s5, "p_1413->g_1303.s5", print_hash_value);
    transparent_crc(p_1413->g_1303.s6, "p_1413->g_1303.s6", print_hash_value);
    transparent_crc(p_1413->g_1303.s7, "p_1413->g_1303.s7", print_hash_value);
    transparent_crc(p_1413->g_1303.s8, "p_1413->g_1303.s8", print_hash_value);
    transparent_crc(p_1413->g_1303.s9, "p_1413->g_1303.s9", print_hash_value);
    transparent_crc(p_1413->g_1303.sa, "p_1413->g_1303.sa", print_hash_value);
    transparent_crc(p_1413->g_1303.sb, "p_1413->g_1303.sb", print_hash_value);
    transparent_crc(p_1413->g_1303.sc, "p_1413->g_1303.sc", print_hash_value);
    transparent_crc(p_1413->g_1303.sd, "p_1413->g_1303.sd", print_hash_value);
    transparent_crc(p_1413->g_1303.se, "p_1413->g_1303.se", print_hash_value);
    transparent_crc(p_1413->g_1303.sf, "p_1413->g_1303.sf", print_hash_value);
    transparent_crc(p_1413->g_1304.x, "p_1413->g_1304.x", print_hash_value);
    transparent_crc(p_1413->g_1304.y, "p_1413->g_1304.y", print_hash_value);
    transparent_crc(p_1413->g_1315.f0, "p_1413->g_1315.f0", print_hash_value);
    transparent_crc(p_1413->g_1315.f1, "p_1413->g_1315.f1", print_hash_value);
    transparent_crc(p_1413->g_1315.f2, "p_1413->g_1315.f2", print_hash_value);
    transparent_crc(p_1413->g_1315.f3, "p_1413->g_1315.f3", print_hash_value);
    transparent_crc(p_1413->g_1315.f4, "p_1413->g_1315.f4", print_hash_value);
    transparent_crc(p_1413->g_1315.f5, "p_1413->g_1315.f5", print_hash_value);
    transparent_crc(p_1413->g_1315.f6, "p_1413->g_1315.f6", print_hash_value);
    transparent_crc(p_1413->g_1315.f7, "p_1413->g_1315.f7", print_hash_value);
    transparent_crc(p_1413->g_1315.f8, "p_1413->g_1315.f8", print_hash_value);
    transparent_crc(p_1413->g_1330.f0, "p_1413->g_1330.f0", print_hash_value);
    transparent_crc(p_1413->g_1330.f1, "p_1413->g_1330.f1", print_hash_value);
    transparent_crc(p_1413->g_1331.f0, "p_1413->g_1331.f0", print_hash_value);
    transparent_crc(p_1413->g_1331.f1, "p_1413->g_1331.f1", print_hash_value);
    transparent_crc(p_1413->g_1344.s0, "p_1413->g_1344.s0", print_hash_value);
    transparent_crc(p_1413->g_1344.s1, "p_1413->g_1344.s1", print_hash_value);
    transparent_crc(p_1413->g_1344.s2, "p_1413->g_1344.s2", print_hash_value);
    transparent_crc(p_1413->g_1344.s3, "p_1413->g_1344.s3", print_hash_value);
    transparent_crc(p_1413->g_1344.s4, "p_1413->g_1344.s4", print_hash_value);
    transparent_crc(p_1413->g_1344.s5, "p_1413->g_1344.s5", print_hash_value);
    transparent_crc(p_1413->g_1344.s6, "p_1413->g_1344.s6", print_hash_value);
    transparent_crc(p_1413->g_1344.s7, "p_1413->g_1344.s7", print_hash_value);
    transparent_crc(p_1413->g_1344.s8, "p_1413->g_1344.s8", print_hash_value);
    transparent_crc(p_1413->g_1344.s9, "p_1413->g_1344.s9", print_hash_value);
    transparent_crc(p_1413->g_1344.sa, "p_1413->g_1344.sa", print_hash_value);
    transparent_crc(p_1413->g_1344.sb, "p_1413->g_1344.sb", print_hash_value);
    transparent_crc(p_1413->g_1344.sc, "p_1413->g_1344.sc", print_hash_value);
    transparent_crc(p_1413->g_1344.sd, "p_1413->g_1344.sd", print_hash_value);
    transparent_crc(p_1413->g_1344.se, "p_1413->g_1344.se", print_hash_value);
    transparent_crc(p_1413->g_1344.sf, "p_1413->g_1344.sf", print_hash_value);
    transparent_crc(p_1413->g_1350.x, "p_1413->g_1350.x", print_hash_value);
    transparent_crc(p_1413->g_1350.y, "p_1413->g_1350.y", print_hash_value);
    transparent_crc(p_1413->g_1350.z, "p_1413->g_1350.z", print_hash_value);
    transparent_crc(p_1413->g_1350.w, "p_1413->g_1350.w", print_hash_value);
    transparent_crc(p_1413->g_1351.x, "p_1413->g_1351.x", print_hash_value);
    transparent_crc(p_1413->g_1351.y, "p_1413->g_1351.y", print_hash_value);
    transparent_crc(p_1413->g_1352.s0, "p_1413->g_1352.s0", print_hash_value);
    transparent_crc(p_1413->g_1352.s1, "p_1413->g_1352.s1", print_hash_value);
    transparent_crc(p_1413->g_1352.s2, "p_1413->g_1352.s2", print_hash_value);
    transparent_crc(p_1413->g_1352.s3, "p_1413->g_1352.s3", print_hash_value);
    transparent_crc(p_1413->g_1352.s4, "p_1413->g_1352.s4", print_hash_value);
    transparent_crc(p_1413->g_1352.s5, "p_1413->g_1352.s5", print_hash_value);
    transparent_crc(p_1413->g_1352.s6, "p_1413->g_1352.s6", print_hash_value);
    transparent_crc(p_1413->g_1352.s7, "p_1413->g_1352.s7", print_hash_value);
    transparent_crc(p_1413->g_1353.s0, "p_1413->g_1353.s0", print_hash_value);
    transparent_crc(p_1413->g_1353.s1, "p_1413->g_1353.s1", print_hash_value);
    transparent_crc(p_1413->g_1353.s2, "p_1413->g_1353.s2", print_hash_value);
    transparent_crc(p_1413->g_1353.s3, "p_1413->g_1353.s3", print_hash_value);
    transparent_crc(p_1413->g_1353.s4, "p_1413->g_1353.s4", print_hash_value);
    transparent_crc(p_1413->g_1353.s5, "p_1413->g_1353.s5", print_hash_value);
    transparent_crc(p_1413->g_1353.s6, "p_1413->g_1353.s6", print_hash_value);
    transparent_crc(p_1413->g_1353.s7, "p_1413->g_1353.s7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1413->g_1377[i][j][k], "p_1413->g_1377[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1413->g_1394, "p_1413->g_1394", print_hash_value);
    transparent_crc(p_1413->g_1402.x, "p_1413->g_1402.x", print_hash_value);
    transparent_crc(p_1413->g_1402.y, "p_1413->g_1402.y", print_hash_value);
    transparent_crc(p_1413->g_1407.s0, "p_1413->g_1407.s0", print_hash_value);
    transparent_crc(p_1413->g_1407.s1, "p_1413->g_1407.s1", print_hash_value);
    transparent_crc(p_1413->g_1407.s2, "p_1413->g_1407.s2", print_hash_value);
    transparent_crc(p_1413->g_1407.s3, "p_1413->g_1407.s3", print_hash_value);
    transparent_crc(p_1413->g_1407.s4, "p_1413->g_1407.s4", print_hash_value);
    transparent_crc(p_1413->g_1407.s5, "p_1413->g_1407.s5", print_hash_value);
    transparent_crc(p_1413->g_1407.s6, "p_1413->g_1407.s6", print_hash_value);
    transparent_crc(p_1413->g_1407.s7, "p_1413->g_1407.s7", print_hash_value);
    transparent_crc(p_1413->g_1407.s8, "p_1413->g_1407.s8", print_hash_value);
    transparent_crc(p_1413->g_1407.s9, "p_1413->g_1407.s9", print_hash_value);
    transparent_crc(p_1413->g_1407.sa, "p_1413->g_1407.sa", print_hash_value);
    transparent_crc(p_1413->g_1407.sb, "p_1413->g_1407.sb", print_hash_value);
    transparent_crc(p_1413->g_1407.sc, "p_1413->g_1407.sc", print_hash_value);
    transparent_crc(p_1413->g_1407.sd, "p_1413->g_1407.sd", print_hash_value);
    transparent_crc(p_1413->g_1407.se, "p_1413->g_1407.se", print_hash_value);
    transparent_crc(p_1413->g_1407.sf, "p_1413->g_1407.sf", print_hash_value);
    transparent_crc(p_1413->g_1410.s0, "p_1413->g_1410.s0", print_hash_value);
    transparent_crc(p_1413->g_1410.s1, "p_1413->g_1410.s1", print_hash_value);
    transparent_crc(p_1413->g_1410.s2, "p_1413->g_1410.s2", print_hash_value);
    transparent_crc(p_1413->g_1410.s3, "p_1413->g_1410.s3", print_hash_value);
    transparent_crc(p_1413->g_1410.s4, "p_1413->g_1410.s4", print_hash_value);
    transparent_crc(p_1413->g_1410.s5, "p_1413->g_1410.s5", print_hash_value);
    transparent_crc(p_1413->g_1410.s6, "p_1413->g_1410.s6", print_hash_value);
    transparent_crc(p_1413->g_1410.s7, "p_1413->g_1410.s7", print_hash_value);
    transparent_crc(p_1413->g_1410.s8, "p_1413->g_1410.s8", print_hash_value);
    transparent_crc(p_1413->g_1410.s9, "p_1413->g_1410.s9", print_hash_value);
    transparent_crc(p_1413->g_1410.sa, "p_1413->g_1410.sa", print_hash_value);
    transparent_crc(p_1413->g_1410.sb, "p_1413->g_1410.sb", print_hash_value);
    transparent_crc(p_1413->g_1410.sc, "p_1413->g_1410.sc", print_hash_value);
    transparent_crc(p_1413->g_1410.sd, "p_1413->g_1410.sd", print_hash_value);
    transparent_crc(p_1413->g_1410.se, "p_1413->g_1410.se", print_hash_value);
    transparent_crc(p_1413->g_1410.sf, "p_1413->g_1410.sf", print_hash_value);
    transparent_crc(p_1413->v_collective, "p_1413->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 19; i++)
            transparent_crc(p_1413->g_special_values[i + 19 * get_linear_group_id()], "p_1413->g_special_values[i + 19 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 19; i++)
            transparent_crc(p_1413->l_special_values[i], "p_1413->l_special_values[i]", print_hash_value);
    transparent_crc(p_1413->l_comm_values[get_linear_local_id()], "p_1413->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1413->g_comm_values[get_linear_group_id() * 104 + get_linear_local_id()], "p_1413->g_comm_values[get_linear_group_id() * 104 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
