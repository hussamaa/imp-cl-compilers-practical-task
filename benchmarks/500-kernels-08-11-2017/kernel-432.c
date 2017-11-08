// --atomics 5 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 99,89,1 -l 99,1,1
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

__constant uint32_t permutations[10][99] = {
{75,38,82,61,23,34,52,36,27,2,86,11,26,47,84,16,31,92,3,74,35,55,94,64,28,41,88,46,62,79,48,39,56,72,22,71,95,40,19,85,60,67,8,63,42,44,32,66,29,54,43,53,81,12,9,0,98,73,15,50,37,7,13,45,58,83,78,25,96,1,30,90,20,24,10,65,89,51,70,68,87,33,49,4,21,18,93,5,97,57,17,76,6,77,69,80,14,91,59}, // permutation 0
{85,45,10,98,64,28,37,25,62,29,70,76,73,1,2,52,19,88,33,94,89,91,22,84,68,4,67,36,42,41,7,60,57,13,11,3,59,32,49,43,80,79,14,44,78,83,54,63,26,34,12,27,61,16,6,39,75,5,97,66,58,46,15,20,82,81,93,35,65,31,30,71,72,50,77,23,18,21,92,38,0,17,69,90,55,96,51,40,74,24,53,8,9,56,47,48,86,87,95}, // permutation 1
{98,24,35,61,21,75,96,85,76,33,22,36,8,34,19,63,87,10,38,37,41,62,64,52,40,84,1,56,27,16,20,97,73,66,72,13,88,18,4,90,83,49,29,82,30,39,6,5,92,11,9,31,68,81,2,67,70,48,60,45,17,94,25,57,59,7,86,77,71,23,28,79,14,53,26,12,3,44,69,0,51,15,50,65,95,78,43,54,74,93,58,80,55,89,46,91,42,47,32}, // permutation 2
{6,59,65,4,87,51,37,31,83,25,19,43,7,1,50,57,18,22,76,16,66,68,79,58,89,53,64,90,28,36,46,63,27,41,44,60,84,77,88,75,61,12,48,15,0,38,45,9,30,78,29,26,73,14,91,86,74,17,34,23,82,40,92,8,32,20,42,21,98,94,97,80,11,72,10,52,39,49,85,96,71,2,47,55,69,35,70,56,5,93,3,33,54,13,24,95,62,81,67}, // permutation 3
{75,53,38,42,61,83,15,52,8,55,44,39,7,48,3,27,32,11,23,2,78,96,60,69,24,84,34,35,6,66,71,68,18,72,56,87,95,91,40,49,10,98,88,41,74,19,58,50,86,51,20,90,16,92,47,45,54,17,21,33,59,25,5,57,37,79,93,1,36,46,0,13,26,63,80,9,29,28,73,22,82,67,81,89,14,70,12,77,76,62,43,85,31,97,30,65,64,4,94}, // permutation 4
{62,39,11,18,84,16,29,63,82,81,12,30,79,35,34,10,65,24,36,37,25,59,47,86,26,98,40,91,67,38,87,78,83,41,95,72,32,22,20,71,46,1,7,31,66,89,76,55,75,42,3,58,68,48,8,23,64,6,70,44,94,45,33,15,28,85,93,92,19,21,14,96,97,4,9,61,27,13,69,49,52,57,0,60,53,73,43,88,90,74,56,51,2,80,54,50,5,77,17}, // permutation 5
{49,34,75,48,9,97,22,90,33,29,59,84,11,54,7,40,18,53,50,78,23,88,58,63,56,47,2,73,6,94,66,70,12,35,24,62,85,68,1,8,25,57,89,32,10,21,38,64,74,14,92,69,87,44,30,45,26,71,4,39,61,0,28,93,15,19,16,51,86,72,42,96,17,5,3,83,13,31,95,67,27,77,80,60,81,20,82,65,36,52,98,37,43,46,79,41,76,55,91}, // permutation 6
{61,29,89,73,68,90,12,58,79,80,92,14,36,70,13,41,6,97,43,65,23,56,11,16,15,66,30,50,86,42,47,71,93,21,98,8,26,38,85,18,34,1,81,9,46,20,27,48,10,33,96,76,54,88,52,74,69,4,59,49,63,22,3,24,32,95,84,75,17,78,60,82,53,19,83,39,35,7,62,51,57,55,0,87,64,67,45,94,25,40,28,31,5,44,77,2,91,72,37}, // permutation 7
{59,4,63,6,3,98,93,5,87,24,25,19,18,68,10,64,27,46,56,76,36,58,22,78,95,33,69,55,37,52,29,0,81,31,77,40,75,92,82,20,94,28,17,54,66,80,72,42,89,62,48,44,12,9,13,90,2,50,91,16,73,79,51,11,43,53,1,35,86,97,61,60,70,23,96,41,30,65,88,32,21,38,45,67,49,83,57,8,7,47,85,15,39,14,34,26,71,74,84}, // permutation 8
{51,31,88,92,83,21,60,6,78,67,9,69,86,64,66,4,89,7,72,12,53,8,73,27,98,44,14,45,87,85,43,26,59,15,91,76,49,48,42,2,17,95,0,68,79,55,46,54,82,24,81,28,57,36,47,13,90,5,94,35,50,97,25,18,63,40,71,10,70,38,34,19,61,56,20,74,75,58,1,32,23,65,29,37,84,11,96,41,39,62,33,16,93,80,22,30,3,77,52} // permutation 9
};

// Seed: 2749755992

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    VECTOR(int32_t, 8) g_4;
    uint8_t g_10;
    VECTOR(uint16_t, 8) g_12;
    volatile VECTOR(int8_t, 16) g_22;
    int32_t g_31;
    volatile int64_t g_40;
    uint64_t g_41;
    uint8_t *g_47[5];
    VECTOR(uint32_t, 16) g_98;
    int16_t g_105;
    int16_t *g_104;
    int32_t *g_108;
    int32_t ** volatile g_107;
    VECTOR(int32_t, 8) g_115;
    int32_t * volatile g_114[1];
    int32_t * volatile g_117;
    uint16_t g_125;
    volatile VECTOR(int32_t, 4) g_130;
    volatile VECTOR(uint16_t, 2) g_139;
    VECTOR(int32_t, 16) g_146;
    VECTOR(int32_t, 16) g_147;
    uint32_t g_156;
    volatile int64_t g_160;
    int16_t *g_163;
    int16_t * volatile *g_162;
    int8_t g_166;
    int32_t g_168[7];
    uint64_t g_196;
    int32_t ** volatile g_200;
    VECTOR(int64_t, 4) g_213;
    int32_t ** volatile g_225;
    volatile VECTOR(uint8_t, 16) g_235;
    volatile VECTOR(uint64_t, 8) g_266;
    VECTOR(int32_t, 2) g_295;
    uint64_t g_313;
    VECTOR(uint16_t, 4) g_316;
    VECTOR(uint16_t, 4) g_338;
    uint16_t * volatile g_341;
    uint16_t * volatile * volatile g_340[10][4][1];
    uint16_t * volatile * volatile * volatile g_342[2][7][3];
    int32_t *g_346;
    uint16_t *g_349;
    uint16_t **g_348[10];
    uint16_t ***g_347;
    volatile VECTOR(uint64_t, 16) g_372;
    uint16_t ****g_398;
    volatile VECTOR(int8_t, 2) g_425;
    volatile VECTOR(int32_t, 8) g_456;
    int32_t g_484;
    volatile VECTOR(uint16_t, 16) g_487;
    uint8_t g_488;
    int32_t *g_508;
    VECTOR(uint8_t, 8) g_523;
    int8_t g_524;
    volatile VECTOR(int16_t, 4) g_541;
    int32_t * volatile *g_591;
    int32_t * volatile * volatile *g_590;
    int32_t * volatile * volatile ** volatile g_589;
    int16_t g_594;
    uint64_t g_605;
    int32_t **g_664[8];
    volatile int32_t *** volatile **g_681;
    VECTOR(int32_t, 2) g_689;
    VECTOR(int32_t, 16) g_690;
    VECTOR(int32_t, 4) g_691;
    VECTOR(int32_t, 8) g_692;
    volatile VECTOR(int8_t, 4) g_705;
    VECTOR(uint16_t, 4) g_757;
    VECTOR(int64_t, 4) g_758;
    volatile VECTOR(uint8_t, 2) g_772;
    volatile uint32_t g_836;
    VECTOR(int32_t, 4) g_866;
    int32_t g_869[8];
    VECTOR(uint32_t, 8) g_883;
    volatile VECTOR(int32_t, 4) g_895;
    volatile VECTOR(int32_t, 16) g_896;
    volatile VECTOR(uint32_t, 2) g_910;
    VECTOR(uint8_t, 8) g_915;
    volatile VECTOR(int32_t, 2) g_921;
    VECTOR(int16_t, 2) g_933;
    VECTOR(int32_t, 8) g_974;
    int64_t g_986;
    VECTOR(int16_t, 4) g_1024;
    volatile VECTOR(uint32_t, 4) g_1040;
    int64_t *g_1047;
    volatile VECTOR(int32_t, 16) g_1191;
    VECTOR(int8_t, 16) g_1209;
    volatile uint32_t * volatile g_1214;
    uint16_t **g_1227;
    int16_t g_1242;
    int16_t g_1243;
    volatile int32_t g_1244[2][5][7];
    VECTOR(int64_t, 4) g_1264;
    volatile VECTOR(int64_t, 16) g_1265;
    volatile VECTOR(int64_t, 8) g_1267;
    VECTOR(int8_t, 2) g_1296;
    VECTOR(int32_t, 8) g_1303;
    uint32_t g_1309;
    VECTOR(int32_t, 8) g_1334;
    volatile VECTOR(uint64_t, 2) g_1341;
    volatile VECTOR(uint16_t, 8) g_1399;
    volatile uint32_t * volatile *g_1409;
    volatile VECTOR(int32_t, 4) g_1416;
    VECTOR(uint8_t, 16) g_1421;
    VECTOR(int32_t, 2) g_1424;
    uint64_t *g_1436;
    VECTOR(int64_t, 8) g_1443;
    uint32_t g_1450;
    uint32_t g_1459;
    VECTOR(uint8_t, 16) g_1489;
    int32_t g_1496;
    int32_t * volatile g_1505;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S0 * p_1508);
uint8_t * func_25(int16_t  p_26, int32_t  p_27, uint8_t * p_28, struct S0 * p_1508);
uint16_t  func_52(int32_t * p_53, int32_t  p_54, uint8_t  p_55, struct S0 * p_1508);
uint32_t  func_56(int32_t * p_57, uint32_t  p_58, uint8_t * p_59, int32_t  p_60, uint8_t * p_61, struct S0 * p_1508);
int32_t * func_62(uint16_t  p_63, int64_t  p_64, int32_t * p_65, uint64_t  p_66, struct S0 * p_1508);
int32_t * func_68(uint32_t  p_69, int32_t * p_70, uint32_t  p_71, uint8_t  p_72, int64_t * p_73, struct S0 * p_1508);
int32_t  func_84(uint8_t ** p_85, int32_t * p_86, uint8_t * p_87, uint32_t  p_88, uint32_t  p_89, struct S0 * p_1508);
int32_t * func_91(int64_t  p_92, int8_t  p_93, struct S0 * p_1508);
int8_t  func_95(int32_t * p_96, struct S0 * p_1508);
int64_t  func_100(int64_t  p_101, int16_t * p_102, uint16_t  p_103, struct S0 * p_1508);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1508->g_4 p_1508->g_12 p_1508->l_comm_values p_1508->g_10 p_1508->g_22 p_1508->g_comm_values p_1508->g_41 p_1508->g_31 p_1508->g_98 p_1508->g_104 p_1508->g_107 p_1508->g_108 p_1508->g_125 p_1508->g_130 p_1508->g_139 p_1508->g_146 p_1508->g_147 p_1508->g_105 p_1508->g_156 p_1508->g_115 p_1508->g_160 p_1508->g_3 p_1508->g_162 p_1508->g_166 p_1508->g_168 p_1508->g_196 p_1508->g_163 p_1508->g_200 p_1508->g_213 p_1508->g_225 p_1508->g_235 p_1508->g_47 p_1508->g_456 p_1508->g_295 p_1508->g_590 p_1508->g_591 p_1508->g_681 p_1508->g_689 p_1508->g_690 p_1508->g_691 p_1508->g_692 p_1508->g_316 p_1508->g_705 p_1508->g_589 p_1508->g_488 p_1508->g_866 p_1508->g_883 p_1508->g_895 p_1508->g_896 p_1508->g_910 p_1508->g_915 p_1508->g_921 p_1508->g_605 p_1508->g_933 p_1508->g_594 p_1508->g_869 p_1508->g_974 p_1508->g_114 p_1508->g_757 p_1508->g_1024 p_1508->g_425 p_1508->g_398 p_1508->g_347 p_1508->g_1040 p_1508->g_1047 p_1508->g_487 p_1508->g_313 p_1508->g_524 p_1508->g_1191 p_1508->g_1209 p_1508->g_1214 p_1508->g_1227 p_1508->g_508 p_1508->g_484 p_1508->g_1264 p_1508->g_1265 p_1508->g_1267 permutations p_1508->g_1296 p_1508->g_1303 p_1508->g_1341 p_1508->g_986 p_1508->g_1309
 * writes: p_1508->g_4 p_1508->g_10 p_1508->g_41 p_1508->g_47 p_1508->l_comm_values p_1508->g_108 p_1508->g_31 p_1508->g_104 p_1508->g_125 p_1508->g_105 p_1508->g_156 p_1508->g_98 p_1508->g_166 p_1508->g_168 p_1508->g_196 p_1508->g_147 p_1508->g_114 p_1508->g_295 p_1508->g_213 p_1508->g_605 p_1508->g_488 p_1508->g_594 p_1508->g_986 p_1508->g_758 p_1508->g_524 p_1508->g_348 p_1508->g_313 p_1508->g_869 p_1508->g_1309
 */
int64_t  func_1(struct S0 * p_1508)
{ /* block id: 4 */
    int32_t l_11[8] = {6L,2L,6L,6L,2L,6L,6L,2L};
    VECTOR(int16_t, 16) l_13 = (VECTOR(int16_t, 16))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 8L), 8L), 8L, 3L, 8L, (VECTOR(int16_t, 2))(3L, 8L), (VECTOR(int16_t, 2))(3L, 8L), 3L, 8L, 3L, 8L);
    VECTOR(int16_t, 16) l_14 = (VECTOR(int16_t, 16))(0x6081L, (VECTOR(int16_t, 4))(0x6081L, (VECTOR(int16_t, 2))(0x6081L, (-1L)), (-1L)), (-1L), 0x6081L, (-1L), (VECTOR(int16_t, 2))(0x6081L, (-1L)), (VECTOR(int16_t, 2))(0x6081L, (-1L)), 0x6081L, (-1L), 0x6081L, (-1L));
    int8_t l_29 = 0x01L;
    int64_t *l_76 = (void*)0;
    int32_t *l_83 = &p_1508->g_31;
    uint32_t l_1305 = 4294967294UL;
    int32_t l_1323 = (-1L);
    int32_t l_1324 = 0x7C44BD5DL;
    int8_t l_1327 = 0x44L;
    int32_t l_1328 = 0x6BDA1496L;
    int32_t l_1329[9];
    int32_t l_1333[10][10][2] = {{{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L}},{{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L}},{{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L}},{{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L}},{{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L}},{{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L}},{{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L}},{{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L}},{{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L}},{{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L},{0x40A14EA7L,1L}}};
    int32_t *l_1340 = &l_11[5];
    VECTOR(int8_t, 2) l_1342 = (VECTOR(int8_t, 2))(0x0CL, (-1L));
    VECTOR(int16_t, 8) l_1355 = (VECTOR(int16_t, 8))(0x3913L, (VECTOR(int16_t, 4))(0x3913L, (VECTOR(int16_t, 2))(0x3913L, 0L), 0L), 0L, 0x3913L, 0L);
    uint64_t l_1370 = 0xE4F06BBB5C42B168L;
    int32_t **l_1379 = &p_1508->g_108;
    int32_t ***l_1378 = &l_1379;
    int32_t ****l_1377 = &l_1378;
    int32_t *****l_1376 = &l_1377;
    uint64_t l_1389 = 0x871B6EC60A9ED06BL;
    uint16_t ***l_1412 = (void*)0;
    int32_t l_1461[3];
    uint32_t l_1471 = 0x19A23516L;
    int32_t ****l_1478 = &l_1378;
    uint16_t l_1492 = 0xE2C7L;
    uint32_t l_1503 = 0x262E032FL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_1329[i] = 0x1054278FL;
    for (i = 0; i < 3; i++)
        l_1461[i] = (-4L);
    for (p_1508->g_4.s0 = (-7); (p_1508->g_4.s0 != (-26)); --p_1508->g_4.s0)
    { /* block id: 7 */
        uint8_t *l_9[5] = {&p_1508->g_10,&p_1508->g_10,&p_1508->g_10,&p_1508->g_10,&p_1508->g_10};
        uint8_t *l_19 = &p_1508->g_10;
        uint8_t **l_45 = &l_9[2];
        uint8_t **l_46 = &l_19;
        int64_t *l_67[9][10];
        int32_t l_79 = 1L;
        int16_t *l_80 = (void*)0;
        int16_t *l_81 = (void*)0;
        int16_t *l_82[7];
        int32_t l_1192 = 7L;
        int16_t l_1232 = (-10L);
        uint32_t *l_1275 = &p_1508->g_156;
        uint32_t *l_1276 = (void*)0;
        uint32_t *l_1277 = (void*)0;
        int32_t l_1304 = (-10L);
        int32_t l_1320 = 0L;
        int32_t l_1322 = 0x2046D87AL;
        int32_t l_1326 = 0x1B393E89L;
        int32_t l_1330 = 0x1912FF99L;
        int32_t l_1331 = 0x14BCB4B8L;
        int32_t l_1332[10][10] = {{(-5L),(-7L),0x5BEC5DEDL,0x7176771DL,0L,0L,0L,0L,0x7176771DL,0x5BEC5DEDL},{(-5L),(-7L),0x5BEC5DEDL,0x7176771DL,0L,0L,0L,0L,0x7176771DL,0x5BEC5DEDL},{(-5L),(-7L),0x5BEC5DEDL,0x7176771DL,0L,0L,0L,0L,0x7176771DL,0x5BEC5DEDL},{(-5L),(-7L),0x5BEC5DEDL,0x7176771DL,0L,0L,0L,0L,0x7176771DL,0x5BEC5DEDL},{(-5L),(-7L),0x5BEC5DEDL,0x7176771DL,0L,0L,0L,0L,0x7176771DL,0x5BEC5DEDL},{(-5L),(-7L),0x5BEC5DEDL,0x7176771DL,0L,0L,0L,0L,0x7176771DL,0x5BEC5DEDL},{(-5L),(-7L),0x5BEC5DEDL,0x7176771DL,0L,0L,0L,0L,0x7176771DL,0x5BEC5DEDL},{(-5L),(-7L),0x5BEC5DEDL,0x7176771DL,0L,0L,0L,0L,0x7176771DL,0x5BEC5DEDL},{(-5L),(-7L),0x5BEC5DEDL,0x7176771DL,0L,0L,0L,0L,0x7176771DL,0x5BEC5DEDL},{(-5L),(-7L),0x5BEC5DEDL,0x7176771DL,0L,0L,0L,0L,0x7176771DL,0x5BEC5DEDL}};
        uint64_t l_1336 = 18446744073709551615UL;
        uint16_t l_1356 = 0x8F0DL;
        uint16_t *l_1365[6];
        int8_t *l_1366 = &l_29;
        uint32_t *l_1367 = (void*)0;
        uint32_t *l_1368 = &l_1305;
        uint32_t l_1369 = 0UL;
        int8_t *l_1371 = &l_1327;
        int32_t **l_1375 = &l_83;
        int32_t ***l_1374 = &l_1375;
        int32_t ****l_1373 = &l_1374;
        int32_t *****l_1372 = &l_1373;
        int i, j;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 10; j++)
                l_67[i][j] = (void*)0;
        }
        for (i = 0; i < 7; i++)
            l_82[i] = (void*)0;
        for (i = 0; i < 6; i++)
            l_1365[i] = &p_1508->g_125;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1508->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 99)), permutations[(safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((p_1508->g_4.s0 > (((l_11[5] = p_1508->g_4.s4) & 2L) > (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(p_1508->g_12.s3244124354114571)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_13.s856d)).hi)).xyyy, ((VECTOR(int16_t, 4))(0x3086L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x450BL, 0x01EBL)))), (-10L)))))).odd, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_14.sf355c0c8fbfc75da)))).sa0)).xyyyyxxyxxxyyyxx)).s5300)).hi))).xyyyyxxy)).s27))))).yyyxxyyxxxyyxyyx)).s6c)).xxyxxxxyxxyyyxyx))))).sf <= p_1508->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1508->tid, 99))]))), ((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))((((((safe_add_func_uint8_t_u_u(((void*)0 != l_19), (p_1508->g_10--))) , ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1508->g_22.s49)), 1L, (-10L))).hi)).xyyy)), 6L, 0x22L, 6L, 0x10L)).s07)).odd) , 0x3EC151D1L) , (safe_mul_func_int16_t_s_s(p_1508->g_comm_values[p_1508->tid], ((p_1508->g_47[4] = ((*l_46) = ((*l_45) = func_25(l_14.sf, l_29, &p_1508->g_10, p_1508)))) == &p_1508->g_10)))) ^ l_13.s2), ((VECTOR(int16_t, 4))((-1L))), (-1L), ((VECTOR(int16_t, 8))((-5L))), 0x000BL, 0L)).sc2e3, (int16_t)0x4D59L))).yxxyxwyzzxwyyzyw, ((VECTOR(int16_t, 16))((-1L)))))).s5, 15)) <= p_1508->g_comm_values[p_1508->tid]))), 10))][(safe_mod_func_uint32_t_u_u(p_1508->tid, 99))]));
        if ((((p_1508->g_12.s5 < ((l_1192 = ((*l_1275) = ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 4))(0x6F18880AL, (safe_div_func_int8_t_s_s((((((l_14.sd >= (safe_div_func_uint64_t_u_u((((func_52(&p_1508->g_31, (func_56(func_62(p_1508->g_comm_values[p_1508->tid], (p_1508->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1508->tid, 99))] = ((VECTOR(int64_t, 8))(1L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))((-10L), 0L)))).xxyyyxxy)).s52)), 0x6B76AF746A6ECCD2L, 0x19FDEE13218558EFL, ((VECTOR(int64_t, 2))(0x6C2A3D91D694BF01L, 0x2F9DBC330632420DL)), 0x547B9DA0115B503AL)).s7), func_68((safe_add_func_uint32_t_u_u((l_76 != l_67[7][6]), (safe_add_func_int16_t_s_s((l_79 = ((l_79 , l_79) < 0x6D85L)), 0x2B87L)))), l_83, p_1508->g_31, (*l_83), l_67[7][6], p_1508), l_1192, p_1508), l_1192, p_1508->g_47[0], p_1508->g_1024.y, p_1508->g_47[0], p_1508) , (*p_1508->g_508)), l_1232, p_1508) , GROUP_DIVERGE(0, 1)) , 1UL) , l_1192), 0x48A8B1BAB54182CAL))) < l_1192) , 1UL) | (-9L)) , 0x55L), 2L)), 4294967291UL, 4294967286UL)).yzzyxzxz, ((VECTOR(uint32_t, 8))(0xCD5F0805L))))).s42, ((VECTOR(uint32_t, 2))(0xFBEEBBBCL)), ((VECTOR(uint32_t, 2))(0x82ABFFBFL))))).xyxyxxyxxxxyyyyy)).s3)) ^ l_1232)) , GROUP_DIVERGE(1, 1)) || l_1232))
        { /* block id: 499 */
            VECTOR(int8_t, 4) l_1295 = (VECTOR(int8_t, 4))(0x77L, (VECTOR(int8_t, 2))(0x77L, 1L), 1L);
            int8_t *l_1306[7];
            int32_t l_1307 = 0x217EEBE5L;
            int i;
            for (i = 0; i < 7; i++)
                l_1306[i] = &p_1508->g_166;
            atomic_or(&p_1508->l_atomic_reduction[0], (safe_lshift_func_uint8_t_u_s(1UL, 3)) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1508->v_collective += p_1508->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            (**p_1508->g_590) = ((+((l_1307 &= (safe_sub_func_int16_t_s_s((l_1305 &= ((((((VECTOR(uint8_t, 8))((p_1508->g_915.s6 | permutations[(safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((p_1508->g_4.s0 > (((l_11[5] = p_1508->g_4.s4) & 2L) > (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(p_1508->g_12.s3244124354114571)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_13.s856d)).hi)).xyyy, ((VECTOR(int16_t, 4))(0x3086L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x450BL, 0x01EBL)))), (-10L)))))).odd, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_14.sf355c0c8fbfc75da)))).sa0)).xyyyyxxyxxxyyyxx)).s5300)).hi))).xyyyyxxy)).s27))))).yyyxxyyxxxyyxyyx)).s6c)).xxyxxxxyxxyyyxyx))))).sf <= p_1508->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1508->tid, 99))]))), ((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))((((((safe_add_func_uint8_t_u_u(((void*)0 != l_19), (p_1508->g_10--))) , ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1508->g_22.s49)), 1L, (-10L))).hi)).xyyy)), 6L, 0x22L, 6L, 0x10L)).s07)).odd) , 0x3EC151D1L) , (safe_mul_func_int16_t_s_s(p_1508->g_comm_values[p_1508->tid], ((p_1508->g_47[4] = ((*l_46) = ((*l_45) = func_25(l_14.sf, l_29, &p_1508->g_10, p_1508)))) == &p_1508->g_10)))) ^ l_13.s2), ((VECTOR(int16_t, 4))((-1L))), (-1L), ((VECTOR(int16_t, 8))((-5L))), 0x000BL, 0L)).sc2e3, (int16_t)0x4D59L))).yxxyxwyzzxwyyzyw, ((VECTOR(int16_t, 16))((-1L)))))).s5, 15)) <= p_1508->g_comm_values[p_1508->tid]))), 10))][(safe_mod_func_uint32_t_u_u(p_1508->tid, 99))]), ((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_s((*p_1508->g_104), 9)))) == (~((((safe_div_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_1508->local_1_offset, get_local_id(1), 10), 0x09333778D28220F4L)) <= ((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))(l_1295.xxxw)), ((VECTOR(int8_t, 8))(p_1508->g_1296.xxyyyxxy)).hi))).w || ((safe_sub_func_uint16_t_u_u((((((*l_83) && (safe_mod_func_int64_t_s_s((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(252UL, 247UL)).xyxxyyxyyyyyxyxy)))).s3, (*l_83))), 0x57085AA06B0A0FFDL))) == (0x7F3CL & ((((VECTOR(int32_t, 2))(p_1508->g_1303.s24)).odd > ((*l_83) ^ GROUP_DIVERGE(0, 1))) && 0x5A6F537668ABD501L))) ^ GROUP_DIVERGE(1, 1)) , 0xA2BDL), l_1295.w)) || GROUP_DIVERGE(1, 1))), (*l_83))), 2)) <= 0x7AL) , (void*)0) == (void*)0), l_1295.x, 1UL, 0xEAL)).z, l_1192)) , 0UL)), l_79)) , (*p_1508->g_590)) != (**p_1508->g_589)) <= l_1304))), 0x23L, ((VECTOR(uint8_t, 4))(0xE1L)), 1UL)).s7 >= FAKE_DIVERGE(p_1508->group_1_offset, get_group_id(1), 10)) , l_79) | FAKE_DIVERGE(p_1508->global_0_offset, get_global_id(0), 10)) , l_1295.z)), (*l_83)))) && 0x77L)) , &l_11[5]);
        }
        else
        { /* block id: 504 */
            uint32_t *l_1308 = &p_1508->g_1309;
            int32_t l_1312[8][7][4] = {{{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L}},{{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L}},{{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L}},{{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L}},{{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L}},{{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L}},{{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L}},{{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L},{0x2CB04595L,0x5D5549F6L,1L,0x2CB04595L}}};
            uint16_t *l_1317 = &p_1508->g_125;
            int32_t l_1321[5];
            VECTOR(int64_t, 2) l_1325 = (VECTOR(int64_t, 2))((-2L), 0x6F8978A7B23BE67EL);
            int8_t l_1335 = 0x5DL;
            int16_t **l_1339 = &l_80;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1321[i] = (-2L);
            (*p_1508->g_591) = l_1340;
        }
        (*l_83) = (((VECTOR(uint64_t, 16))(p_1508->g_1341.xyyxxyyyyyxyxxyx)).s8 & ((+((VECTOR(int8_t, 8))(0x56L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_1342.yyxyxyxyyyxxxyxx)).s4223)), (((((safe_add_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((*l_83), (*l_1340))) == ((safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((0xDCL >= ((*l_1371) = ((*l_1340) != (safe_sub_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(((((((((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_1355.s52)).xxxyxyxx)))).s0 ^ l_1356) && (l_1326 = (safe_add_func_int32_t_s_s(l_1332[7][5], ((*l_1275) &= FAKE_DIVERGE(p_1508->global_1_offset, get_global_id(1), 10)))))) != FAKE_DIVERGE(p_1508->local_0_offset, get_local_id(0), 10)) < l_1332[7][5]) <= (safe_mod_func_uint32_t_u_u(((*l_1368) = (((((*l_1366) &= (safe_rshift_func_int8_t_s_s(((l_1331 = ((((safe_sub_func_uint16_t_u_u((*l_83), (*l_83))) , (*l_83)) || p_1508->g_986) | (*l_1340))) , p_1508->g_1303.s6), 0))) != 0UL) || (*l_83)) != 0x682A42E384132E93L)), (*l_83)))) > l_1369) == 0x188C72D6E07D9692L) > (*l_83)), l_1370)) > (**p_1508->g_162)) , 65533UL), l_1332[6][6]))))) > (*p_1508->g_104)), 2)) <= l_1232), p_1508->g_1303.s1)) != 0x37D4L)), p_1508->g_915.s5)) | 1UL) , l_1372) == l_1376) , p_1508->g_1303.s6), 1L, 0x53L)).s7) ^ (*l_83)));
        return p_1508->g_295.y;
    }
    for (p_1508->g_1309 = 0; (p_1508->g_1309 != 26); p_1508->g_1309 = safe_add_func_uint16_t_u_u(p_1508->g_1309, 1))
    { /* block id: 525 */
        uint16_t l_1392 = 0x748BL;
        int64_t *l_1406[2];
        VECTOR(int32_t, 16) l_1417 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x26A604B2L), 0x26A604B2L), 0x26A604B2L, 0L, 0x26A604B2L, (VECTOR(int32_t, 2))(0L, 0x26A604B2L), (VECTOR(int32_t, 2))(0L, 0x26A604B2L), 0L, 0x26A604B2L, 0L, 0x26A604B2L);
        VECTOR(int32_t, 8) l_1418 = (VECTOR(int32_t, 8))(0x6902F79CL, (VECTOR(int32_t, 4))(0x6902F79CL, (VECTOR(int32_t, 2))(0x6902F79CL, 7L), 7L), 7L, 0x6902F79CL, 7L);
        int32_t l_1451 = 0x65C3B821L;
        uint16_t l_1452 = 0x202FL;
        int8_t l_1469[6][9] = {{1L,1L,4L,(-9L),0x3EL,(-1L),(-4L),0x0FL,(-4L)},{1L,1L,4L,(-9L),0x3EL,(-1L),(-4L),0x0FL,(-4L)},{1L,1L,4L,(-9L),0x3EL,(-1L),(-4L),0x0FL,(-4L)},{1L,1L,4L,(-9L),0x3EL,(-1L),(-4L),0x0FL,(-4L)},{1L,1L,4L,(-9L),0x3EL,(-1L),(-4L),0x0FL,(-4L)},{1L,1L,4L,(-9L),0x3EL,(-1L),(-4L),0x0FL,(-4L)}};
        int64_t l_1470 = 0L;
        int32_t ****l_1477 = &l_1378;
        int64_t **l_1486 = &l_76;
        int64_t ***l_1485 = &l_1486;
        uint16_t *l_1493 = (void*)0;
        uint16_t *l_1494 = &p_1508->g_125;
        int32_t *l_1495 = &p_1508->g_1496;
        int16_t *l_1501 = (void*)0;
        uint8_t l_1502 = 0x64L;
        uint16_t *l_1504 = &l_1452;
        int32_t *l_1506 = &l_1329[7];
        uint64_t l_1507 = 0xCBACB4B468B0269CL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1406[i] = (void*)0;
        (1 + 1);
    }
    return p_1508->g_98.sd;
}


/* ------------------------------------------ */
/* 
 * reads : p_1508->g_41
 * writes: p_1508->g_41
 */
uint8_t * func_25(int16_t  p_26, int32_t  p_27, uint8_t * p_28, struct S0 * p_1508)
{ /* block id: 10 */
    int32_t *l_30 = &p_1508->g_31;
    int32_t *l_32 = &p_1508->g_31;
    int32_t *l_33 = &p_1508->g_31;
    int32_t *l_34 = &p_1508->g_31;
    int32_t l_35[8];
    int32_t *l_36 = &p_1508->g_31;
    int32_t *l_37 = &p_1508->g_31;
    int32_t *l_38 = &l_35[1];
    int32_t *l_39[3][8][2] = {{{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]}},{{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]}},{{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]},{&p_1508->g_31,&l_35[1]}}};
    uint8_t *l_44[9][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_35[i] = (-1L);
    p_1508->g_41--;
    return l_44[7][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1508->g_488 p_1508->g_41 p_1508->g_869 p_1508->g_1264 p_1508->g_1265 p_1508->g_1267 p_1508->g_31
 * writes: p_1508->g_488 p_1508->g_41 p_1508->g_31 p_1508->g_869
 */
uint16_t  func_52(int32_t * p_53, int32_t  p_54, uint8_t  p_55, struct S0 * p_1508)
{ /* block id: 483 */
    int32_t l_1235 = 0x192CDB71L;
    int32_t l_1239[2][7] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
    VECTOR(uint64_t, 4) l_1245 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x7C52ED92963D3374L), 0x7C52ED92963D3374L);
    VECTOR(int64_t, 2) l_1266 = (VECTOR(int64_t, 2))((-4L), (-3L));
    int i, j;
    for (p_1508->g_488 = 11; (p_1508->g_488 < 41); ++p_1508->g_488)
    { /* block id: 486 */
        int32_t *l_1236 = &p_1508->g_869[0];
        int32_t *l_1237 = &p_1508->g_31;
        int32_t *l_1238 = (void*)0;
        int32_t *l_1240 = (void*)0;
        int32_t *l_1241[4];
        int64_t *l_1259 = &p_1508->g_986;
        VECTOR(int64_t, 8) l_1263 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x1FFDC3B20E58F988L), 0x1FFDC3B20E58F988L), 0x1FFDC3B20E58F988L, 1L, 0x1FFDC3B20E58F988L);
        VECTOR(int64_t, 2) l_1268 = (VECTOR(int64_t, 2))(0x3ABA073196C2AC60L, 0x7BD582BCF3079E23L);
        VECTOR(uint32_t, 2) l_1272 = (VECTOR(uint32_t, 2))(0x129C40F3L, 0x231DFE84L);
        int i;
        for (i = 0; i < 4; i++)
            l_1241[i] = &l_1239[0][0];
        --l_1245.y;
        for (p_1508->g_41 = 0; (p_1508->g_41 >= 25); ++p_1508->g_41)
        { /* block id: 490 */
            int8_t l_1250 = (-8L);
            VECTOR(int64_t, 8) l_1262 = (VECTOR(int64_t, 8))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0x6CFEC848DBAB9E74L), 0x6CFEC848DBAB9E74L), 0x6CFEC848DBAB9E74L, (-9L), 0x6CFEC848DBAB9E74L);
            VECTOR(int64_t, 16) l_1269 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x4EABE684E082B5F6L), 0x4EABE684E082B5F6L), 0x4EABE684E082B5F6L, (-1L), 0x4EABE684E082B5F6L, (VECTOR(int64_t, 2))((-1L), 0x4EABE684E082B5F6L), (VECTOR(int64_t, 2))((-1L), 0x4EABE684E082B5F6L), (-1L), 0x4EABE684E082B5F6L, (-1L), 0x4EABE684E082B5F6L);
            int16_t **l_1273 = &p_1508->g_163;
            VECTOR(int32_t, 8) l_1274 = (VECTOR(int32_t, 8))(0x3A283A05L, (VECTOR(int32_t, 4))(0x3A283A05L, (VECTOR(int32_t, 2))(0x3A283A05L, 0x298CE387L), 0x298CE387L), 0x298CE387L, 0x3A283A05L, 0x298CE387L);
            int i;
            (*p_53) = (l_1250 | (safe_mod_func_int8_t_s_s(((safe_div_func_int64_t_s_s((+(((safe_mul_func_uint16_t_u_u(((l_1239[0][0] ^ ((*l_1236) > ((void*)0 == l_1259))) ^ (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 8))(0x6A89EB9B7F07E65CL, ((VECTOR(int64_t, 4))(l_1262.s7744)), ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 4))(l_1263.s3073)), ((VECTOR(int64_t, 16))(p_1508->g_1264.wwyzwzyyyzzzxwyy)).s35c9, ((VECTOR(int64_t, 8))(p_1508->g_1265.scc6104f7)).odd))).odd, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(0x1D3811636AED9EBEL, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 16))(l_1266.yxxxxxyxyyxyxyxx)).s4f, ((VECTOR(int64_t, 2))(0L, 0x0971596AC86DA061L))))))), 0L)).even))))), 0L)).s4333067017054464, ((VECTOR(int64_t, 2))(p_1508->g_1267.s22)).yyyyyyyyxxyxxyxx, ((VECTOR(int64_t, 2))(l_1268.xy)).xyxxyyxyxyyyxxxy))).s415e)).zwxyywyzzywwxxwz)).sb6, ((VECTOR(int64_t, 16))(l_1269.s45beb70c92d3b1ee)).s96))).xyyx)).x, (safe_mod_func_uint32_t_u_u((~l_1245.w), ((VECTOR(uint32_t, 4))(l_1272.xxxy)).z))))), p_54)) , &p_1508->g_163) != l_1273)), p_1508->g_488)) , (-1L)), p_54)));
            l_1274.s4 &= ((*l_1237) == ((void*)0 == &p_1508->g_166));
            (*l_1236) ^= 0x26747A9BL;
        }
    }
    return p_55;
}


/* ------------------------------------------ */
/* 
 * reads : p_1508->g_347 p_1508->g_1209 p_1508->g_1214 p_1508->g_168 p_1508->g_895 p_1508->g_162 p_1508->g_163 p_1508->g_196 p_1508->g_1227 p_1508->g_398 p_1508->g_107 p_1508->g_108 p_1508->g_225 p_1508->g_31
 * writes: p_1508->g_348 p_1508->g_313 p_1508->g_108 p_1508->g_31
 */
uint32_t  func_56(int32_t * p_57, uint32_t  p_58, uint8_t * p_59, int32_t  p_60, uint8_t * p_61, struct S0 * p_1508)
{ /* block id: 462 */
    uint64_t *l_1202 = &p_1508->g_313;
    uint16_t **l_1205 = &p_1508->g_349;
    int32_t l_1208[2];
    VECTOR(uint32_t, 8) l_1211 = (VECTOR(uint32_t, 8))(0xCFB6B576L, (VECTOR(uint32_t, 4))(0xCFB6B576L, (VECTOR(uint32_t, 2))(0xCFB6B576L, 0UL), 0UL), 0UL, 0xCFB6B576L, 0UL);
    int8_t *l_1212 = &p_1508->g_524;
    int8_t l_1213 = 0x5BL;
    int8_t *l_1215 = (void*)0;
    int8_t *l_1216 = &l_1213;
    int16_t *l_1217 = &p_1508->g_594;
    int32_t *l_1230 = (void*)0;
    int32_t l_1231 = (-7L);
    int i;
    for (i = 0; i < 2; i++)
        l_1208[i] = 0x0A619814L;
    if (((((((safe_rshift_func_uint8_t_u_s((FAKE_DIVERGE(p_1508->local_0_offset, get_local_id(0), 10) != ((safe_mod_func_uint32_t_u_u((((((safe_div_func_uint64_t_u_u((((((safe_div_func_int64_t_s_s(((l_1202 != &p_1508->g_41) , (((*l_1216) = ((safe_mod_func_uint16_t_u_u((((*p_1508->g_347) = l_1205) == l_1205), (safe_mod_func_uint8_t_u_u((l_1208[1] , (0x63L && ((VECTOR(int8_t, 16))(p_1508->g_1209.sb9e6b5e18aad5c57)).sa)), p_60)))) >= (+(&p_1508->g_836 == ((FAKE_DIVERGE(p_1508->group_0_offset, get_group_id(0), 10) < (safe_unary_minus_func_uint8_t_u((((*l_1202) = (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(1UL, 4294967295UL, 9UL, 0xEB17957AL)), ((VECTOR(uint32_t, 4))(l_1211.s1071)))).hi, ((VECTOR(uint32_t, 4))(8UL, 0xFC7294F8L, 4294967289UL, 0xD6132A6EL))))).zyyzyywy)).s1 > ((l_1212 = p_59) == &p_1508->g_166))) | l_1213)))) , p_1508->g_1214))))) && 0x39L)), p_1508->g_168[5])) , (void*)0) != &l_1205) == 0x1CCAD8A590C0D95CL) , p_1508->g_895.z), p_60)) , l_1208[1]) , (*p_1508->g_162)) == l_1217) > l_1208[1]), 4294967293UL)) == GROUP_DIVERGE(1, 1))), p_1508->g_196)) <= p_58) , FAKE_DIVERGE(p_1508->global_1_offset, get_global_id(1), 10)) , p_58) == p_58) || l_1208[1]))
    { /* block id: 467 */
        int32_t *l_1218 = &p_1508->g_31;
        int32_t *l_1219 = &l_1208[1];
        int32_t *l_1220 = &p_1508->g_869[1];
        int32_t *l_1221[2][7][3] = {{{&p_1508->g_869[1],(void*)0,&p_1508->g_168[5]},{&p_1508->g_869[1],(void*)0,&p_1508->g_168[5]},{&p_1508->g_869[1],(void*)0,&p_1508->g_168[5]},{&p_1508->g_869[1],(void*)0,&p_1508->g_168[5]},{&p_1508->g_869[1],(void*)0,&p_1508->g_168[5]},{&p_1508->g_869[1],(void*)0,&p_1508->g_168[5]},{&p_1508->g_869[1],(void*)0,&p_1508->g_168[5]}},{{&p_1508->g_869[1],(void*)0,&p_1508->g_168[5]},{&p_1508->g_869[1],(void*)0,&p_1508->g_168[5]},{&p_1508->g_869[1],(void*)0,&p_1508->g_168[5]},{&p_1508->g_869[1],(void*)0,&p_1508->g_168[5]},{&p_1508->g_869[1],(void*)0,&p_1508->g_168[5]},{&p_1508->g_869[1],(void*)0,&p_1508->g_168[5]},{&p_1508->g_869[1],(void*)0,&p_1508->g_168[5]}}};
        uint16_t l_1222[6];
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_1222[i] = 0UL;
        ++l_1222[5];
    }
    else
    { /* block id: 469 */
        for (l_1213 = 0; (l_1213 <= 5); l_1213++)
        { /* block id: 472 */
            uint16_t ***l_1228 = &l_1205;
            int32_t **l_1229[6][9] = {{&p_1508->g_108,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_108},{&p_1508->g_108,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_108},{&p_1508->g_108,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_108},{&p_1508->g_108,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_108},{&p_1508->g_108,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_108},{&p_1508->g_108,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_346,&p_1508->g_108}};
            int i, j;
            (*l_1228) = ((**p_1508->g_398) = p_1508->g_1227);
            (*p_1508->g_107) = (p_57 = &l_1208[1]);
            (*p_57) ^= (-1L);
        }
        (*p_1508->g_108) = (((VECTOR(uint32_t, 2))(0x2D607B09L, 0UL)).hi != (GROUP_DIVERGE(1, 1) , 0UL));
    }
    l_1231 |= (**p_1508->g_225);
    return p_60;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_62(uint16_t  p_63, int64_t  p_64, int32_t * p_65, uint64_t  p_66, struct S0 * p_1508)
{ /* block id: 460 */
    int32_t *l_1193[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    return l_1193[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1508->g_comm_values p_1508->g_4 p_1508->g_98 p_1508->g_104 p_1508->g_107 p_1508->g_31 p_1508->g_108 p_1508->g_125 p_1508->g_130 p_1508->g_139 p_1508->g_146 p_1508->g_147 p_1508->g_105 p_1508->g_156 p_1508->g_12 p_1508->g_115 p_1508->g_160 p_1508->g_3 p_1508->g_162 p_1508->g_166 p_1508->g_168 p_1508->g_10 p_1508->g_41 p_1508->g_196 p_1508->g_163 p_1508->g_200 p_1508->g_213 p_1508->g_225 p_1508->g_235 p_1508->g_47 p_1508->g_456 p_1508->g_295 p_1508->g_590 p_1508->g_591 p_1508->g_681 p_1508->g_689 p_1508->g_690 p_1508->g_691 p_1508->g_692 p_1508->g_316 p_1508->g_705 p_1508->g_589 p_1508->g_488 p_1508->g_866 p_1508->g_883 p_1508->g_895 p_1508->g_896 p_1508->g_910 p_1508->g_915 p_1508->g_921 p_1508->g_605 p_1508->g_933 p_1508->g_594 p_1508->g_869 p_1508->g_974 p_1508->g_114 p_1508->g_757 p_1508->g_1024 p_1508->g_425 p_1508->g_398 p_1508->g_347 p_1508->g_1040 p_1508->g_1047 p_1508->g_487 p_1508->g_313 p_1508->g_524 p_1508->g_1191
 * writes: p_1508->g_108 p_1508->g_31 p_1508->g_104 p_1508->g_125 p_1508->g_105 p_1508->g_156 p_1508->g_98 p_1508->g_166 p_1508->g_168 p_1508->g_41 p_1508->g_196 p_1508->g_10 p_1508->g_147 p_1508->g_114 p_1508->g_295 p_1508->g_213 p_1508->g_605 p_1508->g_488 p_1508->g_594 p_1508->g_986 p_1508->g_758 p_1508->g_524
 */
int32_t * func_68(uint32_t  p_69, int32_t * p_70, uint32_t  p_71, uint8_t  p_72, int64_t * p_73, struct S0 * p_1508)
{ /* block id: 21 */
    uint8_t **l_90 = &p_1508->g_47[4];
    int32_t l_94 = (-1L);
    VECTOR(int32_t, 8) l_753 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
    VECTOR(int64_t, 8) l_762 = (VECTOR(int64_t, 8))(0x72FBE34746FB0663L, (VECTOR(int64_t, 4))(0x72FBE34746FB0663L, (VECTOR(int64_t, 2))(0x72FBE34746FB0663L, 1L), 1L), 1L, 0x72FBE34746FB0663L, 1L);
    int32_t **l_769[3][1][8] = {{{&p_1508->g_108,&p_1508->g_108,(void*)0,&p_1508->g_108,&p_1508->g_108,&p_1508->g_108,&p_1508->g_108,(void*)0}},{{&p_1508->g_108,&p_1508->g_108,(void*)0,&p_1508->g_108,&p_1508->g_108,&p_1508->g_108,&p_1508->g_108,(void*)0}},{{&p_1508->g_108,&p_1508->g_108,(void*)0,&p_1508->g_108,&p_1508->g_108,&p_1508->g_108,&p_1508->g_108,(void*)0}}};
    int32_t ***l_768 = &l_769[0][0][3];
    VECTOR(uint32_t, 2) l_882 = (VECTOR(uint32_t, 2))(0xB44968E3L, 0x0FF21C3BL);
    VECTOR(int32_t, 2) l_919 = (VECTOR(int32_t, 2))(0x20F25BB8L, (-10L));
    VECTOR(int32_t, 16) l_920 = (VECTOR(int32_t, 16))(0x742CD6FAL, (VECTOR(int32_t, 4))(0x742CD6FAL, (VECTOR(int32_t, 2))(0x742CD6FAL, (-5L)), (-5L)), (-5L), 0x742CD6FAL, (-5L), (VECTOR(int32_t, 2))(0x742CD6FAL, (-5L)), (VECTOR(int32_t, 2))(0x742CD6FAL, (-5L)), 0x742CD6FAL, (-5L), 0x742CD6FAL, (-5L));
    int32_t ****l_927[7];
    int32_t *****l_926 = &l_927[2];
    VECTOR(int16_t, 4) l_932 = (VECTOR(int16_t, 4))(0x51E2L, (VECTOR(int16_t, 2))(0x51E2L, (-1L)), (-1L));
    int32_t l_934 = 1L;
    VECTOR(int8_t, 16) l_944 = (VECTOR(int8_t, 16))(0x6EL, (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, (-7L)), (-7L)), (-7L), 0x6EL, (-7L), (VECTOR(int8_t, 2))(0x6EL, (-7L)), (VECTOR(int8_t, 2))(0x6EL, (-7L)), 0x6EL, (-7L), 0x6EL, (-7L));
    VECTOR(uint32_t, 2) l_949 = (VECTOR(uint32_t, 2))(4294967295UL, 0x273DEE2FL);
    int32_t *l_955 = &p_1508->g_484;
    uint32_t l_956 = 0xF3B5F864L;
    VECTOR(int64_t, 8) l_1017 = (VECTOR(int64_t, 8))(0x4FFA8B5F48A30844L, (VECTOR(int64_t, 4))(0x4FFA8B5F48A30844L, (VECTOR(int64_t, 2))(0x4FFA8B5F48A30844L, 0x0272B2F5EE62493EL), 0x0272B2F5EE62493EL), 0x0272B2F5EE62493EL, 0x4FFA8B5F48A30844L, 0x0272B2F5EE62493EL);
    uint8_t l_1027 = 0x42L;
    uint32_t l_1028[10][2] = {{0xC948F2FBL,0x8159F068L},{0xC948F2FBL,0x8159F068L},{0xC948F2FBL,0x8159F068L},{0xC948F2FBL,0x8159F068L},{0xC948F2FBL,0x8159F068L},{0xC948F2FBL,0x8159F068L},{0xC948F2FBL,0x8159F068L},{0xC948F2FBL,0x8159F068L},{0xC948F2FBL,0x8159F068L},{0xC948F2FBL,0x8159F068L}};
    VECTOR(uint64_t, 4) l_1101 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xAE6F3E2AE3AE4B82L), 0xAE6F3E2AE3AE4B82L);
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_927[i] = &l_768;
    if (func_84(l_90, func_91(p_1508->g_comm_values[p_1508->tid], (p_71 , (p_71 > ((l_94 != ((((void*)0 == p_70) , p_71) ^ func_95(&p_1508->g_31, p_1508))) & 7UL))), p_1508), (*l_90), l_94, p_71, p_1508))
    { /* block id: 282 */
        VECTOR(int64_t, 8) l_763 = (VECTOR(int64_t, 8))(0x59D84B0E7B91AC3BL, (VECTOR(int64_t, 4))(0x59D84B0E7B91AC3BL, (VECTOR(int64_t, 2))(0x59D84B0E7B91AC3BL, 0x1D40DBC154B10C36L), 0x1D40DBC154B10C36L), 0x1D40DBC154B10C36L, 0x59D84B0E7B91AC3BL, 0x1D40DBC154B10C36L);
        VECTOR(int16_t, 2) l_812 = (VECTOR(int16_t, 2))(0x7CE0L, 0x0CBCL);
        VECTOR(uint64_t, 8) l_825 = (VECTOR(uint64_t, 8))(0xD74BCE5693E62A3BL, (VECTOR(uint64_t, 4))(0xD74BCE5693E62A3BL, (VECTOR(uint64_t, 2))(0xD74BCE5693E62A3BL, 0x601D51E20A818D49L), 0x601D51E20A818D49L), 0x601D51E20A818D49L, 0xD74BCE5693E62A3BL, 0x601D51E20A818D49L);
        VECTOR(int16_t, 16) l_837 = (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x6522L), 0x6522L), 0x6522L, 5L, 0x6522L, (VECTOR(int16_t, 2))(5L, 0x6522L), (VECTOR(int16_t, 2))(5L, 0x6522L), 5L, 0x6522L, 5L, 0x6522L);
        int32_t l_864 = 0x2E40BE01L;
        VECTOR(int32_t, 16) l_868 = (VECTOR(int32_t, 16))(0x68021952L, (VECTOR(int32_t, 4))(0x68021952L, (VECTOR(int32_t, 2))(0x68021952L, 1L), 1L), 1L, 0x68021952L, 1L, (VECTOR(int32_t, 2))(0x68021952L, 1L), (VECTOR(int32_t, 2))(0x68021952L, 1L), 0x68021952L, 1L, 0x68021952L, 1L);
        VECTOR(int32_t, 8) l_873 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-1L)), (-1L)), (-1L), 2L, (-1L));
        int32_t ****l_879 = &l_768;
        int32_t *****l_878[10] = {&l_879,&l_879,&l_879,&l_879,&l_879,&l_879,&l_879,&l_879,&l_879,&l_879};
        VECTOR(int32_t, 2) l_884 = (VECTOR(int32_t, 2))(0x3BE31B7FL, 9L);
        int i;
        for (p_1508->g_196 = 25; (p_1508->g_196 != 17); --p_1508->g_196)
        { /* block id: 285 */
            int32_t l_756 = 0L;
            int32_t *l_775 = &p_1508->g_484;
            uint32_t l_813 = 2UL;
            VECTOR(int16_t, 2) l_821 = (VECTOR(int16_t, 2))(0L, (-1L));
            VECTOR(int32_t, 4) l_867 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4C9C6336L), 0x4C9C6336L);
            uint32_t *l_870 = &l_813;
            VECTOR(int32_t, 4) l_885 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2A8F8D13L), 0x2A8F8D13L);
            VECTOR(int32_t, 2) l_886 = (VECTOR(int32_t, 2))(0L, 0x21616711L);
            int i;
            (*p_1508->g_108) ^= 0L;
            for (p_69 = (-6); (p_69 != 49); p_69 = safe_add_func_int64_t_s_s(p_69, 4))
            { /* block id: 289 */
                VECTOR(int64_t, 4) l_759 = (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 9L), 9L);
                uint32_t *l_770[1];
                int32_t l_771 = 0x6692EDDBL;
                int32_t ****l_784 = &l_768;
                int32_t *****l_783[3];
                int32_t l_823 = 9L;
                uint8_t l_838 = 0xEBL;
                int i;
                for (i = 0; i < 1; i++)
                    l_770[i] = (void*)0;
                for (i = 0; i < 3; i++)
                    l_783[i] = &l_784;
                (1 + 1);
            }
            l_756 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(p_1508->g_866.xy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(l_867.xy)).yxyx, ((VECTOR(int32_t, 16))(0x1DFCE87EL, (-10L), 0x2C2357E3L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_868.sb912c89c4c1990fe)).hi)), 0x3822F713L, (((--(*l_870)) , &p_1508->g_508) != &p_1508->g_508), ((VECTOR(int32_t, 2))(l_873.s70)), 0x58973030L)).saeee))).wwzywxzz, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(((safe_div_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(p_71, ((VECTOR(uint32_t, 8))((((void*)0 != l_878[8]) , l_813), (safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 2))(l_882.yy)).yyxxyxyxyxyyyyyy, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 4))(p_1508->g_883.s4406)).odd, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_884.xy)).yyyy)).lo, ((VECTOR(int32_t, 4))(0x013DA9DEL, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_885.xwxx)))).odd, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(l_886.yyxxyxyyyxxyyyyy)).s1f27))).lo))), (-7L))).lo, ((VECTOR(int32_t, 4))(l_867.z, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(0L, (18446744073709551615UL && 0xADCD7B9685116525L), ((VECTOR(int32_t, 2))(0x02252A33L)), ((VECTOR(int32_t, 4))((-7L))))).s72, ((VECTOR(int32_t, 2))(0x10B33E6AL))))), 0x5731469DL)).lo))).xyyxxxyxxyyxxyyy, ((VECTOR(int32_t, 16))(0x68FF6876L)), ((VECTOR(int32_t, 16))(0x35773B6AL))))), ((VECTOR(int32_t, 16))(0x62E1FF41L))))).s5268))).zxyxywzzxwwzwyyw)).s1a))).yyyxxyxx)).s5531561424230131, ((VECTOR(uint32_t, 16))(0x8AA7D945L))))).se2, ((VECTOR(uint32_t, 2))(0x4D418BC2L))))), 0xF22F3ABAL, ((VECTOR(uint32_t, 2))(1UL)), 4294967294UL, 7UL, 0xA46DC9D5L)).s5, (*p_70))), 4294967292UL, GROUP_DIVERGE(0, 1), 0x433EFCAFL, 0UL, 0x59907D5EL, 1UL)).s4)) == 0x4CEB39D31FEA2FC4L), (*p_70))) == 0x010EL), ((VECTOR(int32_t, 2))((-1L))), (-1L))).yzyyxzzz, ((VECTOR(int32_t, 8))((-1L))))))))).hi)).odd, ((VECTOR(int32_t, 2))(0x5A3F28D0L))))).yyyx, ((VECTOR(int32_t, 4))(0L))))).zxywxzyz)).s3;
        }
    }
    else
    { /* block id: 328 */
        uint32_t l_887 = 0x434E89F7L;
        int16_t *l_890 = &p_1508->g_105;
        int16_t **l_891 = &p_1508->g_104;
        VECTOR(int32_t, 2) l_892 = (VECTOR(int32_t, 2))(0L, 0x60E28BA2L);
        VECTOR(int32_t, 4) l_893 = (VECTOR(int32_t, 4))(0x7E1B6178L, (VECTOR(int32_t, 2))(0x7E1B6178L, (-1L)), (-1L));
        VECTOR(int32_t, 2) l_894 = (VECTOR(int32_t, 2))(0x035AEFC8L, 2L);
        uint64_t *l_911 = (void*)0;
        uint64_t *l_912 = &p_1508->g_196;
        uint16_t *l_916[10][4] = {{&p_1508->g_125,(void*)0,&p_1508->g_125,&p_1508->g_125},{&p_1508->g_125,(void*)0,&p_1508->g_125,&p_1508->g_125},{&p_1508->g_125,(void*)0,&p_1508->g_125,&p_1508->g_125},{&p_1508->g_125,(void*)0,&p_1508->g_125,&p_1508->g_125},{&p_1508->g_125,(void*)0,&p_1508->g_125,&p_1508->g_125},{&p_1508->g_125,(void*)0,&p_1508->g_125,&p_1508->g_125},{&p_1508->g_125,(void*)0,&p_1508->g_125,&p_1508->g_125},{&p_1508->g_125,(void*)0,&p_1508->g_125,&p_1508->g_125},{&p_1508->g_125,(void*)0,&p_1508->g_125,&p_1508->g_125},{&p_1508->g_125,(void*)0,&p_1508->g_125,&p_1508->g_125}};
        int32_t l_917[5] = {0x38FDE1F9L,0x38FDE1F9L,0x38FDE1F9L,0x38FDE1F9L,0x38FDE1F9L};
        int32_t l_918 = 0x3617D1D5L;
        int i, j;
        p_70 = p_70;
        --l_887;
        (*p_70) ^= (p_1508->g_691.z && ((((*l_891) = l_890) != (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(l_892.yyyy)), ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(l_893.xzxwzwzzzxxxxxww)).odd, ((VECTOR(int32_t, 16))(l_894.yxyxyyyyxyxyxyxy)).even))).even))), 6L, ((VECTOR(int32_t, 2))((-10L), 0x0578571BL)), (-1L))).s63, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1508->g_895.xzxz)).xxwwxxyy)).s6325322400515131, ((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(p_1508->g_896.s22)), 0x4E07860BL)).zwwwywwwwxyxyzxy))))).sde))))).odd , (*p_1508->g_162))) , p_1508->g_316.x));
        l_918 = ((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(0x5A18L, (l_917[0] = (((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u((safe_lshift_func_int8_t_s_u(l_892.x, 0)))), ((VECTOR(uint32_t, 16))(p_1508->g_910.xxxxxyxxxxyyxxxy)).sc)) || (p_1508->g_125 != ((-1L) <= ((l_892.x , p_1508->g_213.w) , ((p_71 <= (--(*l_912))) ^ ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_1508->g_915.s52124272)).s75)).lo))))), 1)) , p_69), p_72)) , (*p_1508->g_163)) | (*p_1508->g_163))))), (*p_70))) ^ (*p_1508->g_104));
    }
    if (((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(l_919.yy)).yyxxxxyxxyxxxxxy))))), ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(l_920.s9687fcac24de3057)).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1508->g_921.yyxy)), 9L, ((VECTOR(int32_t, 2))(0x5DCF9B94L, (-5L))), 0x41CA8048L))))).s02)).xxxyxxxy))).s7755540627053213))).s1)
    { /* block id: 337 */
        uint16_t ****l_924 = &p_1508->g_347;
        (*p_70) = (p_1508->g_41 <= (((safe_sub_func_int32_t_s_s((p_72 && (l_924 == (void*)0)), (-10L))) , (safe_unary_minus_func_int64_t_s((&p_1508->g_589 != l_926)))) <= 0x31L));
        for (p_1508->g_605 = 0; (p_1508->g_605 < 50); p_1508->g_605 = safe_add_func_int64_t_s_s(p_1508->g_605, 1))
        { /* block id: 341 */
            VECTOR(int32_t, 16) l_930 = (VECTOR(int32_t, 16))(0x4FE2679AL, (VECTOR(int32_t, 4))(0x4FE2679AL, (VECTOR(int32_t, 2))(0x4FE2679AL, (-1L)), (-1L)), (-1L), 0x4FE2679AL, (-1L), (VECTOR(int32_t, 2))(0x4FE2679AL, (-1L)), (VECTOR(int32_t, 2))(0x4FE2679AL, (-1L)), 0x4FE2679AL, (-1L), 0x4FE2679AL, (-1L));
            int i;
            (*p_1508->g_108) = ((VECTOR(int32_t, 4))(l_930.s27e1)).x;
        }
    }
    else
    { /* block id: 344 */
        uint16_t l_931 = 0xC520L;
        uint8_t *l_943 = &p_1508->g_488;
        int32_t *l_952 = &p_1508->g_869[1];
        int16_t *l_957 = (void*)0;
        int16_t *l_958 = &p_1508->g_594;
        int32_t l_967 = 0x41FDF6E6L;
        int32_t l_968[1];
        uint32_t l_981 = 0x65833272L;
        uint16_t *****l_989 = &p_1508->g_398;
        VECTOR(int64_t, 8) l_1006 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-6L)), (-6L)), (-6L), (-1L), (-6L));
        uint16_t l_1029 = 0x45E3L;
        VECTOR(uint8_t, 2) l_1109 = (VECTOR(uint8_t, 2))(0xF2L, 0UL);
        int i;
        for (i = 0; i < 1; i++)
            l_968[i] = 2L;
        l_931 = (GROUP_DIVERGE(2, 1) || GROUP_DIVERGE(2, 1));
        if ((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(l_932.zzxxyzzz)).lo, (int16_t)((VECTOR(int16_t, 2))(p_1508->g_933.yx)).hi))).wwzwwzxwwyzyxzwz)).se , (l_934 >= ((safe_rshift_func_uint16_t_u_u((0x49EEDFBB89B98467L && p_1508->g_456.s1), 1)) >= ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((((((safe_lshift_func_uint8_t_u_u(((*l_943) = l_931), 5)) < (((VECTOR(int8_t, 4))(l_944.sec9d)).x <= (p_72--))) | (safe_mod_func_int16_t_s_s(((*l_958) ^= (((((VECTOR(uint32_t, 2))(l_949.yy)).lo || 0x8A220254L) | (safe_rshift_func_uint8_t_u_u((p_70 != (l_952 = p_70)), (((*p_1508->g_163) || ((safe_mod_func_uint16_t_u_u(((l_955 = p_70) != p_70), (*p_1508->g_163))) , p_69)) & p_1508->g_115.s0)))) , l_956)), 0x74E0L))) < (*p_1508->g_104)) & p_69) >= p_69), p_1508->g_869[4])), p_69)) && p_1508->g_31)))))
        { /* block id: 351 */
            uint32_t l_969 = 0x541A559BL;
            int64_t *l_975[1];
            int32_t l_979[6] = {0x0AB09286L,0x0AB09286L,0x0AB09286L,0x0AB09286L,0x0AB09286L,0x0AB09286L};
            int8_t *l_992 = &p_1508->g_166;
            int32_t *l_993 = (void*)0;
            int32_t l_1070[10][7] = {{(-1L),0x16AC00D2L,(-8L),(-1L),0x16AC00D2L,(-1L),(-8L)},{(-1L),0x16AC00D2L,(-8L),(-1L),0x16AC00D2L,(-1L),(-8L)},{(-1L),0x16AC00D2L,(-8L),(-1L),0x16AC00D2L,(-1L),(-8L)},{(-1L),0x16AC00D2L,(-8L),(-1L),0x16AC00D2L,(-1L),(-8L)},{(-1L),0x16AC00D2L,(-8L),(-1L),0x16AC00D2L,(-1L),(-8L)},{(-1L),0x16AC00D2L,(-8L),(-1L),0x16AC00D2L,(-1L),(-8L)},{(-1L),0x16AC00D2L,(-8L),(-1L),0x16AC00D2L,(-1L),(-8L)},{(-1L),0x16AC00D2L,(-8L),(-1L),0x16AC00D2L,(-1L),(-8L)},{(-1L),0x16AC00D2L,(-8L),(-1L),0x16AC00D2L,(-1L),(-8L)},{(-1L),0x16AC00D2L,(-8L),(-1L),0x16AC00D2L,(-1L),(-8L)}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_975[i] = (void*)0;
            for (p_1508->g_105 = (-21); (p_1508->g_105 > (-7)); p_1508->g_105 = safe_add_func_uint32_t_u_u(p_1508->g_105, 1))
            { /* block id: 354 */
                uint16_t *l_963 = (void*)0;
                uint16_t *l_964[5];
                int32_t l_965 = (-1L);
                int32_t l_966 = 1L;
                int64_t *l_976 = (void*)0;
                int32_t l_980[9][10][2] = {{{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L}},{{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L}},{{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L}},{{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L}},{{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L}},{{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L}},{{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L}},{{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L}},{{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L},{0x267AEEA5L,0x4AAC0100L}}};
                uint64_t l_984 = 0xC550896538414A07L;
                int64_t *l_985[1];
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_964[i] = &l_931;
                for (i = 0; i < 1; i++)
                    l_985[i] = &p_1508->g_986;
                (*p_70) &= (safe_lshift_func_uint16_t_u_s(((++l_969) <= p_69), (safe_sub_func_int32_t_s_s((((VECTOR(int32_t, 8))(p_1508->g_974.s20371627)).s6 < ((l_975[0] == l_976) , p_71)), (0x9030L | ((safe_rshift_func_int8_t_s_s(((void*)0 != (***p_1508->g_589)), 2)) , ((void*)0 != &p_1508->g_605)))))));
                ++l_981;
                p_70 = (l_952 = func_91((l_979[1] |= (p_1508->g_986 = l_984)), (safe_rshift_func_int16_t_s_u(((p_1508->g_757.w , ((*p_1508->g_225) = ((&p_1508->g_398 == l_989) , func_91(((*l_952) , (safe_sub_func_int16_t_s_s((l_992 != (void*)0), (((void*)0 == p_73) , 0x351BL)))), p_1508->g_691.w, p_1508)))) != l_993), 11)), p_1508));
                l_1029 |= (p_1508->g_156 , (safe_div_func_int32_t_s_s(((0x37L | (safe_add_func_int64_t_s_s((((((((l_966 &= (safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((((p_1508->g_758.z = (*l_952)) | 0x346DA97E711A0D98L) <= ((((VECTOR(int64_t, 2))(l_1006.s25)).even == (((l_965 | (safe_rshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((l_979[1] = ((safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(p_1508->g_12.s1, (safe_add_func_uint32_t_u_u(((l_980[7][9][0] = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_1017.s2175253635610024)).lo)).s0256322633455122)).sf) == (safe_add_func_uint8_t_u_u(((*l_952) , (8UL | (((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 4))(0x64L, 0x7FL, 0x42L, 1L)).wyxxywww, (int8_t)((VECTOR(int8_t, 2))(0x53L, 0x34L)).odd))).s7, (safe_div_func_uint32_t_u_u((((VECTOR(int16_t, 8))(p_1508->g_1024.yxwwxyzx)).s5 >= (safe_mul_func_uint16_t_u_u((p_70 != (void*)0), 0x6303L))), 4294967290UL)))) , l_1027) >= (*p_70)))), p_69))), (*l_952))))), l_1028[0][0])) >= 9UL)), 0xA3503FC1L)), l_965))) | p_71) , (-9L))) ^ (*l_952))), (-1L))) || (*l_952)) >= (*l_952)), p_71)), p_1508->g_115.s6)), p_1508->g_425.y))) , 1UL) ^ 1UL) < (*l_952)) >= 0L) || (*l_952)) , p_1508->g_691.x), p_69))) || (-8L)), 0x495FF6B5L)));
            }
            for (p_1508->g_166 = 0; (p_1508->g_166 < 3); ++p_1508->g_166)
            { /* block id: 371 */
                return (*p_1508->g_107);
            }
            for (p_1508->g_488 = 0; (p_1508->g_488 == 40); p_1508->g_488 = safe_add_func_uint16_t_u_u(p_1508->g_488, 2))
            { /* block id: 376 */
                uint8_t *l_1041[3];
                int32_t l_1042 = 0x33717708L;
                int64_t **l_1048 = (void*)0;
                int64_t **l_1049 = &l_975[0];
                uint32_t *l_1058[1][3][8] = {{{&l_969,&l_981,&l_981,&l_969,&l_969,&l_981,&l_981,&l_969},{&l_969,&l_981,&l_981,&l_969,&l_969,&l_981,&l_981,&l_969},{&l_969,&l_981,&l_981,&l_969,&l_969,&l_981,&l_981,&l_969}}};
                int32_t l_1059[9][1];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1041[i] = (void*)0;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1059[i][j] = 0x74212CD1L;
                }
                l_1042 ^= (p_71 && (~(safe_sub_func_int16_t_s_s((p_1508->g_933.y , (-1L)), (p_71 , (((((*l_952) = (safe_mul_func_int8_t_s_s(((void*)0 != (**l_989)), (safe_add_func_uint16_t_u_u(((((VECTOR(uint32_t, 16))(p_1508->g_1040.ywzyzyyyyywyxyww)).s8 > (~p_1508->g_866.w)) , (((*p_1508->g_163) |= p_71) >= p_72)), p_71))))) && p_1508->g_139.x) && (**p_1508->g_162)) == GROUP_DIVERGE(1, 1)))))));
                l_979[3] |= (safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((((*l_1049) = p_1508->g_1047) == p_73), ((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((*l_952), (1UL && (((VECTOR(uint32_t, 4))(p_1508->g_487.s5, ((VECTOR(uint32_t, 2))(0xE618DCCAL, 0x0F69F51FL)), 1UL)).x , p_1508->g_146.se)))) == (p_72 == ((l_1042 |= 1UL) , 65533UL))), 0x2C8EL)), p_71)) && (-7L)), l_1059[8][0])) , (*p_70)))), l_969));
                if ((*l_952))
                    continue;
            }
            for (p_1508->g_105 = 9; (p_1508->g_105 != (-1)); p_1508->g_105 = safe_sub_func_int16_t_s_s(p_1508->g_105, 6))
            { /* block id: 387 */
                uint32_t l_1071 = 0xAB22A18EL;
                for (l_956 = 5; (l_956 < 6); ++l_956)
                { /* block id: 390 */
                    int64_t *l_1085 = (void*)0;
                    int32_t l_1092 = (-1L);
                    uint64_t *l_1093 = &p_1508->g_196;
                    for (p_1508->g_156 = 0; (p_1508->g_156 >= 14); p_1508->g_156++)
                    { /* block id: 393 */
                        (*p_70) &= (safe_lshift_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(l_1070[0][1], 0x19972F5EL)) , l_1071), 7));
                    }
                    (*p_70) = ((((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_mul_func_uint8_t_u_u((+((p_70 != ((safe_rshift_func_uint16_t_u_s((0x4FA1677CB05E3F3AL ^ p_1508->g_692.s7), 1)) , &l_969)) > (((safe_mod_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((((*l_1093) = (((p_73 != l_1085) >= p_72) < (1L || (safe_mod_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(6L, 7)), (*p_1508->g_163))) > 0x2508CD2AL) < l_1092), p_71))))) == 1UL) < p_72), 0x5AD4L)), FAKE_DIVERGE(p_1508->global_1_offset, get_global_id(1), 10))) , &p_1508->g_196) != p_73))), l_1071)))), (*p_1508->g_163))) , p_71) > p_69) , (*l_952));
                    for (l_969 = 0; (l_969 >= 47); l_969 = safe_add_func_uint32_t_u_u(l_969, 5))
                    { /* block id: 400 */
                        uint32_t *l_1096 = &l_1071;
                        uint32_t *l_1102 = &p_1508->g_156;
                        uint32_t *l_1103 = (void*)0;
                        int32_t l_1104 = 1L;
                        (*p_70) = (*p_70);
                        (*l_952) ^= ((++(*l_1096)) ^ (l_1104 = ((*l_1102) = (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(l_1101.yy)).hi, p_1508->g_313)))));
                        if (l_1092)
                            break;
                    }
                    if ((*p_1508->g_108))
                        break;
                }
            }
        }
        else
        { /* block id: 411 */
            for (p_1508->g_524 = 0; (p_1508->g_524 <= (-28)); p_1508->g_524 = safe_sub_func_uint8_t_u_u(p_1508->g_524, 9))
            { /* block id: 414 */
                (**p_1508->g_590) = (void*)0;
                (*p_70) = (-6L);
                (*p_70) = (p_71 > (safe_add_func_int8_t_s_s(1L, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_1109.xyyyxyxyyyyxxyyy)))).s3)));
            }
            (*p_1508->g_591) = (*p_1508->g_107);
        }
        l_968[0] &= (**p_1508->g_107);
        if ((atomic_inc(&p_1508->g_atomic_input[5 * get_linear_group_id() + 2]) == 7))
        { /* block id: 423 */
            uint16_t l_1110 = 0x437FL;
            uint32_t l_1111[9][9][3] = {{{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL}},{{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL}},{{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL}},{{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL}},{{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL}},{{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL}},{{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL}},{{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL}},{{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL},{4UL,0x1868F81FL,0x191D5C4CL}}};
            uint32_t l_1112 = 4294967295UL;
            int32_t l_1113[1][8] = {{0x7CA01020L,0x7CA01020L,0x7CA01020L,0x7CA01020L,0x7CA01020L,0x7CA01020L,0x7CA01020L,0x7CA01020L}};
            int32_t l_1114 = 5L;
            int16_t l_1115[7][3] = {{0x12C1L,1L,1L},{0x12C1L,1L,1L},{0x12C1L,1L,1L},{0x12C1L,1L,1L},{0x12C1L,1L,1L},{0x12C1L,1L,1L},{0x12C1L,1L,1L}};
            VECTOR(int64_t, 4) l_1116 = (VECTOR(int64_t, 4))(0x4E67D70B1E7C5AC5L, (VECTOR(int64_t, 2))(0x4E67D70B1E7C5AC5L, (-1L)), (-1L));
            uint16_t l_1117 = 5UL;
            int8_t l_1118 = 8L;
            int32_t *l_1119[2][8] = {{(void*)0,&l_1113[0][3],(void*)0,(void*)0,&l_1113[0][3],(void*)0,(void*)0,&l_1113[0][3]},{(void*)0,&l_1113[0][3],(void*)0,(void*)0,&l_1113[0][3],(void*)0,(void*)0,&l_1113[0][3]}};
            int32_t *l_1120 = &l_1114;
            int i, j, k;
            l_1120 = (l_1110 , (l_1111[0][5][2] , ((l_1112 , ((l_1110 &= (l_1113[0][3] , (l_1114 , l_1115[4][2]))) , ((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(l_1116.w, l_1117, l_1118, ((VECTOR(int8_t, 2))(5L)), ((VECTOR(int8_t, 2))(0x7CL)), 0x4BL)).hi, ((VECTOR(int8_t, 4))(0x1AL)), ((VECTOR(int8_t, 4))(1L))))))).yxxzxyww)).s4373201735721267, ((VECTOR(int8_t, 16))((-6L))), ((VECTOR(int8_t, 16))(0x7AL))))).s1)) , l_1119[0][2])));
            for (l_1114 = 10; (l_1114 <= 16); ++l_1114)
            { /* block id: 428 */
                uint8_t l_1123 = 0x16L;
                uint32_t l_1124 = 4294967294UL;
                int64_t l_1125 = (-9L);
                VECTOR(int32_t, 2) l_1126 = (VECTOR(int32_t, 2))(1L, 1L);
                VECTOR(int32_t, 4) l_1127 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L));
                VECTOR(int32_t, 4) l_1128 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0L), 0L);
                VECTOR(int32_t, 8) l_1129 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x4AA26036L), 0x4AA26036L), 0x4AA26036L, 1L, 0x4AA26036L);
                VECTOR(uint16_t, 16) l_1130 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x22FBL), 0x22FBL), 0x22FBL, 1UL, 0x22FBL, (VECTOR(uint16_t, 2))(1UL, 0x22FBL), (VECTOR(uint16_t, 2))(1UL, 0x22FBL), 1UL, 0x22FBL, 1UL, 0x22FBL);
                VECTOR(int32_t, 2) l_1131 = (VECTOR(int32_t, 2))((-1L), 0x7833A5B9L);
                VECTOR(int32_t, 4) l_1132 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), (-1L)), (-1L));
                VECTOR(int32_t, 4) l_1133 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-5L)), (-5L));
                uint32_t l_1134 = 1UL;
                VECTOR(uint8_t, 2) l_1135 = (VECTOR(uint8_t, 2))(0x48L, 247UL);
                uint16_t l_1136 = 65526UL;
                VECTOR(int32_t, 16) l_1137 = (VECTOR(int32_t, 16))(0x7F2B47A0L, (VECTOR(int32_t, 4))(0x7F2B47A0L, (VECTOR(int32_t, 2))(0x7F2B47A0L, 0x36D35C77L), 0x36D35C77L), 0x36D35C77L, 0x7F2B47A0L, 0x36D35C77L, (VECTOR(int32_t, 2))(0x7F2B47A0L, 0x36D35C77L), (VECTOR(int32_t, 2))(0x7F2B47A0L, 0x36D35C77L), 0x7F2B47A0L, 0x36D35C77L, 0x7F2B47A0L, 0x36D35C77L);
                uint32_t l_1138 = 4294967294UL;
                uint64_t l_1139[1][6][8] = {{{0x77B71C036CB8312DL,18446744073709551610UL,0x2C2929231195B412L,0UL,0x1DFFD1C1945E6762L,0UL,0x2C2929231195B412L,18446744073709551610UL},{0x77B71C036CB8312DL,18446744073709551610UL,0x2C2929231195B412L,0UL,0x1DFFD1C1945E6762L,0UL,0x2C2929231195B412L,18446744073709551610UL},{0x77B71C036CB8312DL,18446744073709551610UL,0x2C2929231195B412L,0UL,0x1DFFD1C1945E6762L,0UL,0x2C2929231195B412L,18446744073709551610UL},{0x77B71C036CB8312DL,18446744073709551610UL,0x2C2929231195B412L,0UL,0x1DFFD1C1945E6762L,0UL,0x2C2929231195B412L,18446744073709551610UL},{0x77B71C036CB8312DL,18446744073709551610UL,0x2C2929231195B412L,0UL,0x1DFFD1C1945E6762L,0UL,0x2C2929231195B412L,18446744073709551610UL},{0x77B71C036CB8312DL,18446744073709551610UL,0x2C2929231195B412L,0UL,0x1DFFD1C1945E6762L,0UL,0x2C2929231195B412L,18446744073709551610UL}}};
                VECTOR(int32_t, 16) l_1140 = (VECTOR(int32_t, 16))(0x66494FBEL, (VECTOR(int32_t, 4))(0x66494FBEL, (VECTOR(int32_t, 2))(0x66494FBEL, 0x66647B3EL), 0x66647B3EL), 0x66647B3EL, 0x66494FBEL, 0x66647B3EL, (VECTOR(int32_t, 2))(0x66494FBEL, 0x66647B3EL), (VECTOR(int32_t, 2))(0x66494FBEL, 0x66647B3EL), 0x66494FBEL, 0x66647B3EL, 0x66494FBEL, 0x66647B3EL);
                uint32_t l_1141 = 4294967295UL;
                int16_t l_1142 = (-7L);
                int i, j, k;
                l_1123 = 0x74E0E215L;
                l_1125 = l_1124;
                if (((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(l_1126.xxyxxxyy)), ((VECTOR(int32_t, 4))(0x6DF2CCC7L, 0x7E04BADBL, 0x25F23E8AL, 0x621CC035L)).zxwxzyyw))).s2177745040515414, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(l_1127.ww)).yyyxyyyyyxxyxxxy, ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))((-2L), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_1128.zz)).yxyyxxxxyxyxxyxy, ((VECTOR(int32_t, 8))(0x7D1A7489L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(l_1129.s46)), 0x7F272F10L)))), 8L, 1L, 0x5E1E7188L)).s1454121621043100, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(0x1199L, (-1L), 3L, 8L)).wzxwxyzxzwwwzwyy, ((VECTOR(uint16_t, 2))(l_1130.s47)).xyyyyxxyxxxxyxxy))), ((VECTOR(int32_t, 2))(3L, 0x309C6A33L)).yyyxxxxxyxxxyyxx)))))).s09, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_1131.xx)).yyxxxxxx, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-8L), 0x2931226EL)), 0L, (-2L))))).odd)), ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(l_1132.wzyyxyyzyzxxwxyw)).even, ((VECTOR(int32_t, 4))(l_1133.yzxz)).zyzwwwwx))).s23))).yxxyyxyy))).s75))))), l_1134, l_1135.y, l_1136, 1L, (-10L))).s7763304355052062, ((VECTOR(int32_t, 4))(l_1137.s963d)).xywxwxyzzwwyxyxx)))))).s07, (int32_t)(l_1128.w = (l_1131.y = ((VECTOR(int32_t, 8))(l_1138, 0x3F113F35L, 7L, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1139[0][3][4], 0x4FCE10F0L, 0x257DAEFDL, (-1L))).lo)).xxyyyxxx))))).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_1140.s343c9ffdb689507a)))).s2728))), 0x305D30ACL)).s3)), (int32_t)(GROUP_DIVERGE(2, 1) , l_1141)))).xxyyyyxyxyyxyxxy, (int32_t)l_1142))).s2cca)).xyyzxwwwwyzwyxxz))))).s5, ((VECTOR(int32_t, 2))(0x29998770L)), 0x03294E55L)).wzzyxzwywzwyyyzz))).s4)
                { /* block id: 433 */
                    VECTOR(int32_t, 16) l_1144 = (VECTOR(int32_t, 16))(0x62329FFBL, (VECTOR(int32_t, 4))(0x62329FFBL, (VECTOR(int32_t, 2))(0x62329FFBL, 0x561C8ECFL), 0x561C8ECFL), 0x561C8ECFL, 0x62329FFBL, 0x561C8ECFL, (VECTOR(int32_t, 2))(0x62329FFBL, 0x561C8ECFL), (VECTOR(int32_t, 2))(0x62329FFBL, 0x561C8ECFL), 0x62329FFBL, 0x561C8ECFL, 0x62329FFBL, 0x561C8ECFL);
                    int32_t *l_1143 = (void*)0;
                    uint32_t l_1145 = 4294967295UL;
                    int i;
                    l_1120 = l_1143;
                    if (l_1145)
                    { /* block id: 435 */
                        VECTOR(int32_t, 4) l_1146 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x32BE5877L), 0x32BE5877L);
                        VECTOR(int16_t, 16) l_1147 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x62DCL), 0x62DCL), 0x62DCL, 0L, 0x62DCL, (VECTOR(int16_t, 2))(0L, 0x62DCL), (VECTOR(int16_t, 2))(0L, 0x62DCL), 0L, 0x62DCL, 0L, 0x62DCL);
                        int16_t l_1148 = 0x536BL;
                        VECTOR(int32_t, 16) l_1149 = (VECTOR(int32_t, 16))(0x2E295BAAL, (VECTOR(int32_t, 4))(0x2E295BAAL, (VECTOR(int32_t, 2))(0x2E295BAAL, 7L), 7L), 7L, 0x2E295BAAL, 7L, (VECTOR(int32_t, 2))(0x2E295BAAL, 7L), (VECTOR(int32_t, 2))(0x2E295BAAL, 7L), 0x2E295BAAL, 7L, 0x2E295BAAL, 7L);
                        VECTOR(int32_t, 4) l_1150 = (VECTOR(int32_t, 4))(0x713DE12CL, (VECTOR(int32_t, 2))(0x713DE12CL, 5L), 5L);
                        VECTOR(int32_t, 2) l_1151 = (VECTOR(int32_t, 2))(0x0BF89ACDL, 1L);
                        VECTOR(int32_t, 8) l_1152 = (VECTOR(int32_t, 8))(0x77E8B25AL, (VECTOR(int32_t, 4))(0x77E8B25AL, (VECTOR(int32_t, 2))(0x77E8B25AL, 0L), 0L), 0L, 0x77E8B25AL, 0L);
                        VECTOR(int32_t, 8) l_1153 = (VECTOR(int32_t, 8))(0x1C386870L, (VECTOR(int32_t, 4))(0x1C386870L, (VECTOR(int32_t, 2))(0x1C386870L, 1L), 1L), 1L, 0x1C386870L, 1L);
                        VECTOR(int32_t, 2) l_1154 = (VECTOR(int32_t, 2))(7L, (-1L));
                        int8_t l_1155 = 0x21L;
                        int8_t l_1156 = (-1L);
                        VECTOR(int32_t, 16) l_1157 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2908E922L), 0x2908E922L), 0x2908E922L, 1L, 0x2908E922L, (VECTOR(int32_t, 2))(1L, 0x2908E922L), (VECTOR(int32_t, 2))(1L, 0x2908E922L), 1L, 0x2908E922L, 1L, 0x2908E922L);
                        VECTOR(uint8_t, 16) l_1158 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x06L), 0x06L), 0x06L, 255UL, 0x06L, (VECTOR(uint8_t, 2))(255UL, 0x06L), (VECTOR(uint8_t, 2))(255UL, 0x06L), 255UL, 0x06L, 255UL, 0x06L);
                        VECTOR(int32_t, 2) l_1159 = (VECTOR(int32_t, 2))(0x512F98D1L, 0x403A4546L);
                        uint16_t l_1160 = 2UL;
                        VECTOR(uint8_t, 8) l_1161 = (VECTOR(uint8_t, 8))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x5EL), 0x5EL), 0x5EL, 253UL, 0x5EL);
                        VECTOR(uint8_t, 2) l_1162 = (VECTOR(uint8_t, 2))(0xE7L, 0x90L);
                        VECTOR(uint8_t, 4) l_1163 = (VECTOR(uint8_t, 4))(0xC3L, (VECTOR(uint8_t, 2))(0xC3L, 255UL), 255UL);
                        uint16_t l_1164 = 65534UL;
                        VECTOR(int32_t, 4) l_1165 = (VECTOR(int32_t, 4))(0x343DFDECL, (VECTOR(int32_t, 2))(0x343DFDECL, 0x4256BF66L), 0x4256BF66L);
                        VECTOR(int64_t, 16) l_1166 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-4L)), (-4L)), (-4L), (-1L), (-4L), (VECTOR(int64_t, 2))((-1L), (-4L)), (VECTOR(int64_t, 2))((-1L), (-4L)), (-1L), (-4L), (-1L), (-4L));
                        VECTOR(int64_t, 4) l_1167 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-1L)), (-1L));
                        VECTOR(int64_t, 16) l_1168 = (VECTOR(int64_t, 16))(0x3EA720E51465D29EL, (VECTOR(int64_t, 4))(0x3EA720E51465D29EL, (VECTOR(int64_t, 2))(0x3EA720E51465D29EL, 0x1F43A949A9F5791FL), 0x1F43A949A9F5791FL), 0x1F43A949A9F5791FL, 0x3EA720E51465D29EL, 0x1F43A949A9F5791FL, (VECTOR(int64_t, 2))(0x3EA720E51465D29EL, 0x1F43A949A9F5791FL), (VECTOR(int64_t, 2))(0x3EA720E51465D29EL, 0x1F43A949A9F5791FL), 0x3EA720E51465D29EL, 0x1F43A949A9F5791FL, 0x3EA720E51465D29EL, 0x1F43A949A9F5791FL);
                        VECTOR(int64_t, 8) l_1169 = (VECTOR(int64_t, 8))(0x7BE51D82B586BFDEL, (VECTOR(int64_t, 4))(0x7BE51D82B586BFDEL, (VECTOR(int64_t, 2))(0x7BE51D82B586BFDEL, 9L), 9L), 9L, 0x7BE51D82B586BFDEL, 9L);
                        VECTOR(int64_t, 2) l_1170 = (VECTOR(int64_t, 2))(0L, 5L);
                        VECTOR(int32_t, 2) l_1171 = (VECTOR(int32_t, 2))(0x433B737AL, (-7L));
                        VECTOR(int32_t, 4) l_1172 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 6L), 6L);
                        VECTOR(uint64_t, 4) l_1173 = (VECTOR(uint64_t, 4))(0x779A888D08ACB877L, (VECTOR(uint64_t, 2))(0x779A888D08ACB877L, 18446744073709551607UL), 18446744073709551607UL);
                        int8_t l_1174 = (-1L);
                        int32_t l_1175 = (-1L);
                        VECTOR(int16_t, 2) l_1176 = (VECTOR(int16_t, 2))(0L, 1L);
                        VECTOR(int32_t, 8) l_1177 = (VECTOR(int32_t, 8))(0x66BCF2BFL, (VECTOR(int32_t, 4))(0x66BCF2BFL, (VECTOR(int32_t, 2))(0x66BCF2BFL, (-8L)), (-8L)), (-8L), 0x66BCF2BFL, (-8L));
                        VECTOR(int32_t, 2) l_1178 = (VECTOR(int32_t, 2))(0x528E9336L, 0x1613FB9EL);
                        VECTOR(int32_t, 8) l_1179 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x60D81444L), 0x60D81444L), 0x60D81444L, 9L, 0x60D81444L);
                        VECTOR(int32_t, 16) l_1180 = (VECTOR(int32_t, 16))(0x33102638L, (VECTOR(int32_t, 4))(0x33102638L, (VECTOR(int32_t, 2))(0x33102638L, 0x707296E4L), 0x707296E4L), 0x707296E4L, 0x33102638L, 0x707296E4L, (VECTOR(int32_t, 2))(0x33102638L, 0x707296E4L), (VECTOR(int32_t, 2))(0x33102638L, 0x707296E4L), 0x33102638L, 0x707296E4L, 0x33102638L, 0x707296E4L);
                        int32_t l_1181 = 0x5D64BBF1L;
                        uint64_t l_1182 = 0x2E33064F7CCB4AA6L;
                        uint32_t l_1183 = 0x313F2B00L;
                        int32_t l_1184[3][6] = {{0L,0x7468E498L,0L,0L,0x7468E498L,0L},{0L,0x7468E498L,0L,0L,0x7468E498L,0L},{0L,0x7468E498L,0L,0L,0x7468E498L,0L}};
                        int i, j;
                        l_1146.w = (l_1157.s6 = (l_1159.y = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(l_1146.wx)).xyxx, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(l_1147.s78e4b5af)).s64, ((VECTOR(uint16_t, 8))(0xFC4FL, l_1148, 0x3BB2L, 0x576BL, 65529UL, 0x284CL, 0x2259L, 0UL)).s33))), 0x1CA393D3L, (-8L))).xxyzyyzxzyyyzyzy)).s4d67)).wyzxzzwxwzxwywww, ((VECTOR(int32_t, 2))((-5L), 0x40DB212BL)).xxxyxxyyyxyyxyyy, ((VECTOR(int32_t, 4))(l_1149.s2188)).yywwyxzyxzzwwyxx))).lo)).s73, ((VECTOR(int32_t, 4))(l_1150.yxxx)).odd))).xyyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(l_1151.xyxx)).yyyxwzxyywxyzyyz, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(l_1152.s0775470312656437)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1153.s05)).yxyx)).xywzxyxxwwzwxwyw)))))))).s88, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1154.xx)).xyyxxyxx)).s75)).yxxyxyyy)))).s40))), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), (-1L))), l_1155, ((VECTOR(int32_t, 4))(0x3BAE673BL, ((VECTOR(int32_t, 2))((-4L), 0x255EAF5EL)), 8L)), (l_1156 = (-4L)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1157.sf2)))), l_1158.sf, ((VECTOR(int32_t, 2))(l_1159.yy)), 0x117E4CD6L, (l_1152.s4 = ((GROUP_DIVERGE(1, 1) , (FAKE_DIVERGE(p_1508->global_0_offset, get_global_id(0), 10) , 0L)) , l_1160)), 0x0649B143L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))((-1L), 0x5A7FL)).xyyxyyyx, ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 16))((l_1135.x = 0x92L), 0xC8L, ((VECTOR(uint8_t, 2))(l_1161.s70)).odd, 8UL, ((VECTOR(uint8_t, 4))(l_1162.xxxx)), ((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_1163.zzwz)), 0x82L, 0x29L, 0x44L, 7UL)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(0x48L, 0x46L, ((VECTOR(uint8_t, 8))(0x4BL)), 0x75L, 0x9BL, 0x2DL, FAKE_DIVERGE(p_1508->global_2_offset, get_global_id(2), 10), 0xC4L, 0x20L)))).odd))))).hi))), ((VECTOR(uint8_t, 4))(0x55L)))).s83, ((VECTOR(uint8_t, 2))(250UL))))).yxxyyyyyxyyyxyxy, ((VECTOR(uint16_t, 16))(0xB2FCL))))).hi))).odd)), 0x15A95688L, 0x397A71CDL, 0x0613D9A7L, 0x494C7CBEL)), ((VECTOR(int32_t, 16))(1L)), ((VECTOR(int32_t, 16))(0x02BBBBB9L))))).odd)))).s391f)).hi, ((VECTOR(int32_t, 2))((-1L)))))), ((VECTOR(int32_t, 4))(0L)))).odd))), ((VECTOR(int32_t, 4))(0x4E0CCE85L)))).odd)).z));
                        l_1149.se &= (l_1164 , (((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(l_1165.xy)).xyyxyxxyyyxxyxyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x12C32B70L, ((VECTOR(int32_t, 4))(1L, 0x5EEB415FL, 1L, (-10L))), 0L, 0x15FBF027L, 0x11057849L)).s3601535640452712))))).sd774, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x04BA5578L, (((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 16))(0L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 2))(l_1166.s8f)).xxyy, ((VECTOR(int64_t, 2))(0x360FB587E2584020L, 0x615332B1E312BE7AL)).xxxx))).hi)), (-1L), (-2L))).z, ((VECTOR(int64_t, 8))(l_1167.yzxyyxyy)), ((VECTOR(int64_t, 2))(l_1168.s9c)), ((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_1169.s5232374412341741)).s2558)), ((VECTOR(int64_t, 2))(5L, 0L)).xxxy))))).hi, ((VECTOR(int64_t, 8))(l_1170.xyxyxxyy))))).s2 , ((VECTOR(int32_t, 2))(l_1171.yy)).hi), 1L, 0x19589348L)))).xywwwzzywyzyxxxx)).s795c))).zzxxyxzx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(0x7EB9F1C4L, 1L)).yxyy, ((VECTOR(int32_t, 2))(l_1172.wx)).yxxx))), (((VECTOR(uint64_t, 16))(l_1173.zxxxxwxwzzzyzxyx)).s5 , l_1174), l_1175, 0x4B270A7EL, 0x20EADB0DL))))).even)).xyzyzzxyzxxxxywx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((((VECTOR(int16_t, 4))(l_1176.yyxy)).w , ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(l_1177.s4364051366220144)).s1374, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_1178.xyxyyxxx)))).hi, ((VECTOR(int32_t, 4))(0x2EB9A3C3L, 0L, 0L, 0x75911C3CL))))).ywxzxxwx)).s06, ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(l_1179.s77)), ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 8))(l_1180.s9fc9ff90)).s5133233062121543, (int32_t)(l_1181 , l_1182), (int32_t)2L))).s03))).xxyyxxyyyyyyyxyy, ((VECTOR(int32_t, 2))(0x115F4EA9L, 1L)).xxxxxxxyxxyxyxyy))).se0))).odd), (l_1151.y = 0x5A929D08L), l_1183, 0x7EBE436EL, 0x6A1A8CFCL, ((VECTOR(int32_t, 2))((-2L))), 0L)).s31)), 0x7EF7305FL, l_1184[2][2], 0x0B2C943AL, 0L, 0x3465B244L, 0x55ECFB02L)).s6007710010647012))).s2850))).x , 0x35203978L));
                    }
                    else
                    { /* block id: 444 */
                        int8_t l_1185[3];
                        uint16_t l_1186 = 0x576FL;
                        int8_t l_1187 = 0L;
                        uint32_t l_1188[1];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1185[i] = 2L;
                        for (i = 0; i < 1; i++)
                            l_1188[i] = 4UL;
                        l_1188[0] = (l_1187 = (l_1186 = l_1185[0]));
                    }
                }
                else
                { /* block id: 449 */
                    int32_t l_1190 = 0L;
                    int32_t *l_1189 = &l_1190;
                    l_1120 = l_1189;
                }
                l_1119[1][1] = (void*)0;
            }
            unsigned int result = 0;
            result += l_1110;
            int l_1111_i0, l_1111_i1, l_1111_i2;
            for (l_1111_i0 = 0; l_1111_i0 < 9; l_1111_i0++) {
                for (l_1111_i1 = 0; l_1111_i1 < 9; l_1111_i1++) {
                    for (l_1111_i2 = 0; l_1111_i2 < 3; l_1111_i2++) {
                        result += l_1111[l_1111_i0][l_1111_i1][l_1111_i2];
                    }
                }
            }
            result += l_1112;
            int l_1113_i0, l_1113_i1;
            for (l_1113_i0 = 0; l_1113_i0 < 1; l_1113_i0++) {
                for (l_1113_i1 = 0; l_1113_i1 < 8; l_1113_i1++) {
                    result += l_1113[l_1113_i0][l_1113_i1];
                }
            }
            result += l_1114;
            int l_1115_i0, l_1115_i1;
            for (l_1115_i0 = 0; l_1115_i0 < 7; l_1115_i0++) {
                for (l_1115_i1 = 0; l_1115_i1 < 3; l_1115_i1++) {
                    result += l_1115[l_1115_i0][l_1115_i1];
                }
            }
            result += l_1116.w;
            result += l_1116.z;
            result += l_1116.y;
            result += l_1116.x;
            result += l_1117;
            result += l_1118;
            atomic_add(&p_1508->g_special_values[5 * get_linear_group_id() + 2], result);
        }
        else
        { /* block id: 454 */
            (1 + 1);
        }
    }
    (*p_1508->g_108) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_1508->g_1191.sb2)).xxyxyxyx)).s1;
    return (*p_1508->g_107);
}


/* ------------------------------------------ */
/* 
 * reads : p_1508->g_41 p_1508->g_31 p_1508->g_456 p_1508->g_108 p_1508->g_107 p_1508->g_162 p_1508->g_163 p_1508->g_295 p_1508->g_125 p_1508->g_200 p_1508->g_590 p_1508->g_591 p_1508->g_225 p_1508->g_681 p_1508->g_689 p_1508->g_690 p_1508->g_691 p_1508->g_692 p_1508->g_comm_values p_1508->g_316 p_1508->g_705 p_1508->g_589 p_1508->g_115 p_1508->g_213 p_1508->g_147 p_1508->g_168 p_1508->g_146 p_1508->g_488 p_1508->g_98 p_1508->g_156 p_1508->g_105
 * writes: p_1508->g_108 p_1508->g_114 p_1508->g_41 p_1508->g_31 p_1508->g_125 p_1508->g_295 p_1508->g_213 p_1508->g_10 p_1508->g_196 p_1508->g_168 p_1508->g_147
 */
int32_t  func_84(uint8_t ** p_85, int32_t * p_86, uint8_t * p_87, uint32_t  p_88, uint32_t  p_89, struct S0 * p_1508)
{ /* block id: 65 */
    int32_t **l_257 = &p_1508->g_108;
    int32_t *l_259 = (void*)0;
    int32_t **l_258[2];
    uint16_t l_294 = 65535UL;
    int32_t l_309 = 7L;
    VECTOR(int32_t, 16) l_319 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
    VECTOR(uint16_t, 2) l_320 = (VECTOR(uint16_t, 2))(0x4F18L, 0x85DBL);
    uint16_t ***l_352 = &p_1508->g_348[0];
    VECTOR(uint64_t, 2) l_355 = (VECTOR(uint64_t, 2))(8UL, 0x933A01B0531F4C52L);
    VECTOR(int8_t, 16) l_393 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 5L), 5L), 5L, 0L, 5L, (VECTOR(int8_t, 2))(0L, 5L), (VECTOR(int8_t, 2))(0L, 5L), 0L, 5L, 0L, 5L);
    int64_t l_400 = 0x35AACB7B1F47291FL;
    VECTOR(uint8_t, 8) l_469 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
    uint32_t l_472 = 0x945DA000L;
    int8_t l_489 = 0x49L;
    int16_t **l_552 = &p_1508->g_104;
    VECTOR(int64_t, 4) l_596 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x44467C411803811BL), 0x44467C411803811BL);
    uint32_t l_657 = 0xA9C65076L;
    int16_t l_671 = (-2L);
    int8_t *l_738 = &l_489;
    uint32_t l_739 = 0UL;
    uint16_t l_740 = 0x4CB7L;
    int32_t l_741 = 0x42CB07BBL;
    int i;
    for (i = 0; i < 2; i++)
        l_258[i] = &l_259;
    p_1508->g_114[0] = (p_86 = ((*l_257) = p_86));
    for (p_1508->g_41 = (-7); (p_1508->g_41 != 58); p_1508->g_41++)
    { /* block id: 71 */
        uint64_t l_289 = 0xC7D19381F1477639L;
        VECTOR(int32_t, 16) l_296 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 9L), 9L), 9L, 0L, 9L, (VECTOR(int32_t, 2))(0L, 9L), (VECTOR(int32_t, 2))(0L, 9L), 0L, 9L, 0L, 9L);
        int32_t l_310[3][2][9] = {{{0x02BE5E30L,1L,0x02BE5E30L,0x02BE5E30L,1L,0x02BE5E30L,0x02BE5E30L,1L,0x02BE5E30L},{0x02BE5E30L,1L,0x02BE5E30L,0x02BE5E30L,1L,0x02BE5E30L,0x02BE5E30L,1L,0x02BE5E30L}},{{0x02BE5E30L,1L,0x02BE5E30L,0x02BE5E30L,1L,0x02BE5E30L,0x02BE5E30L,1L,0x02BE5E30L},{0x02BE5E30L,1L,0x02BE5E30L,0x02BE5E30L,1L,0x02BE5E30L,0x02BE5E30L,1L,0x02BE5E30L}},{{0x02BE5E30L,1L,0x02BE5E30L,0x02BE5E30L,1L,0x02BE5E30L,0x02BE5E30L,1L,0x02BE5E30L},{0x02BE5E30L,1L,0x02BE5E30L,0x02BE5E30L,1L,0x02BE5E30L,0x02BE5E30L,1L,0x02BE5E30L}}};
        int16_t l_339 = 8L;
        VECTOR(uint64_t, 2) l_356 = (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL);
        int8_t l_359[4];
        VECTOR(int32_t, 8) l_369 = (VECTOR(int32_t, 8))(0x2A455267L, (VECTOR(int32_t, 4))(0x2A455267L, (VECTOR(int32_t, 2))(0x2A455267L, 0L), 0L), 0L, 0x2A455267L, 0L);
        VECTOR(int32_t, 8) l_370 = (VECTOR(int32_t, 8))(0x04C0E27DL, (VECTOR(int32_t, 4))(0x04C0E27DL, (VECTOR(int32_t, 2))(0x04C0E27DL, 0x2E9FB76EL), 0x2E9FB76EL), 0x2E9FB76EL, 0x04C0E27DL, 0x2E9FB76EL);
        VECTOR(int8_t, 4) l_407 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x71L), 0x71L);
        VECTOR(uint16_t, 2) l_433 = (VECTOR(uint16_t, 2))(7UL, 0x36B1L);
        uint16_t *****l_466 = (void*)0;
        int16_t l_470 = 0L;
        int64_t l_471 = 0x2C42CAD2FD9D4AC8L;
        int32_t *l_497 = (void*)0;
        int32_t *l_506 = &p_1508->g_484;
        int32_t l_642 = (-6L);
        VECTOR(uint8_t, 2) l_686 = (VECTOR(uint8_t, 2))(0x5BL, 0UL);
        VECTOR(int32_t, 2) l_693 = (VECTOR(int32_t, 2))(1L, 0L);
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_359[i] = (-2L);
        for (p_1508->g_31 = 0; (p_1508->g_31 != (-2)); --p_1508->g_31)
        { /* block id: 74 */
            int32_t l_264 = 0x41DC1D72L;
            VECTOR(int64_t, 16) l_265 = (VECTOR(int64_t, 16))((-10L), (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 0x4F75B379C0B1A54CL), 0x4F75B379C0B1A54CL), 0x4F75B379C0B1A54CL, (-10L), 0x4F75B379C0B1A54CL, (VECTOR(int64_t, 2))((-10L), 0x4F75B379C0B1A54CL), (VECTOR(int64_t, 2))((-10L), 0x4F75B379C0B1A54CL), (-10L), 0x4F75B379C0B1A54CL, (-10L), 0x4F75B379C0B1A54CL);
            uint64_t *l_267 = &p_1508->g_196;
            VECTOR(int64_t, 8) l_270 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x62BCA4747B00D799L), 0x62BCA4747B00D799L), 0x62BCA4747B00D799L, 1L, 0x62BCA4747B00D799L);
            VECTOR(int16_t, 4) l_297 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x09A9L), 0x09A9L);
            VECTOR(uint16_t, 2) l_298 = (VECTOR(uint16_t, 2))(65530UL, 0x1254L);
            uint32_t *l_311 = &p_1508->g_156;
            uint8_t *l_312 = &p_1508->g_10;
            int8_t l_333 = 0x06L;
            uint16_t * volatile * volatile *l_343 = &p_1508->g_340[5][0][0];
            uint16_t ***l_351 = &p_1508->g_348[1];
            int16_t **l_357[6] = {&p_1508->g_104,&p_1508->g_163,&p_1508->g_104,&p_1508->g_104,&p_1508->g_163,&p_1508->g_104};
            VECTOR(uint8_t, 16) l_367 = (VECTOR(uint8_t, 16))(0x4DL, (VECTOR(uint8_t, 4))(0x4DL, (VECTOR(uint8_t, 2))(0x4DL, 0x94L), 0x94L), 0x94L, 0x4DL, 0x94L, (VECTOR(uint8_t, 2))(0x4DL, 0x94L), (VECTOR(uint8_t, 2))(0x4DL, 0x94L), 0x4DL, 0x94L, 0x4DL, 0x94L);
            uint64_t l_375[3][10];
            uint64_t l_416[4][4] = {{0xC754253CF6CDC54BL,0xC754253CF6CDC54BL,0x65345CDBFF98F1A5L,0x44594A08369C14DFL},{0xC754253CF6CDC54BL,0xC754253CF6CDC54BL,0x65345CDBFF98F1A5L,0x44594A08369C14DFL},{0xC754253CF6CDC54BL,0xC754253CF6CDC54BL,0x65345CDBFF98F1A5L,0x44594A08369C14DFL},{0xC754253CF6CDC54BL,0xC754253CF6CDC54BL,0x65345CDBFF98F1A5L,0x44594A08369C14DFL}};
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 10; j++)
                    l_375[i][j] = 0xA69316ED79273565L;
            }
            l_264 = 0x38F403BAL;
        }
        for (l_289 = 21; (l_289 > 5); l_289--)
        { /* block id: 145 */
            int32_t l_432 = 0x6724AF6CL;
            uint64_t l_440[7][3] = {{5UL,5UL,0x59D793312371C1B6L},{5UL,5UL,0x59D793312371C1B6L},{5UL,5UL,0x59D793312371C1B6L},{5UL,5UL,0x59D793312371C1B6L},{5UL,5UL,0x59D793312371C1B6L},{5UL,5UL,0x59D793312371C1B6L},{5UL,5UL,0x59D793312371C1B6L}};
            int i, j;
            ++l_433.y;
            for (p_88 = 4; (p_88 < 38); p_88 = safe_add_func_int8_t_s_s(p_88, 3))
            { /* block id: 149 */
                int32_t l_438 = 0x045A9651L;
                int32_t l_439 = 0L;
                uint16_t *****l_449 = &p_1508->g_398;
                VECTOR(int32_t, 4) l_457 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x4072C97FL), 0x4072C97FL);
                int i;
                --l_440[4][2];
                (*p_1508->g_108) = (safe_add_func_uint64_t_u_u(p_89, (safe_mul_func_int64_t_s_s(p_88, (((!(&p_1508->g_166 != (void*)0)) != (safe_mod_func_int64_t_s_s((l_449 != l_449), ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*p_86), ((VECTOR(int32_t, 8))(p_1508->g_456.s14201303)).s0)), (~(((((VECTOR(int32_t, 16))(l_457.wwwwxxxywzxxwywy)).s6 , ((*p_86) & 0x03284939L)) , (void*)0) == (void*)0)))), 1L)) || p_89)))) != p_89)))));
            }
            if ((**p_1508->g_107))
                continue;
        }
        (*p_86) = ((((p_88 , (safe_sub_func_int32_t_s_s(0x1DEA1739L, (safe_mul_func_uint8_t_u_u((((void*)0 != (*p_1508->g_162)) & p_1508->g_295.x), (safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((l_466 == l_466) , (((((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(l_469.s02)).odd, ((*p_86) , 248UL))) || l_470) , p_89) < 0x50D2E737L) , FAKE_DIVERGE(p_1508->local_0_offset, get_local_id(0), 10))), l_471)), 0UL))))))) <= p_88) > (-7L)) | l_472);
        for (p_1508->g_125 = 0; (p_1508->g_125 < 25); p_1508->g_125 = safe_add_func_uint32_t_u_u(p_1508->g_125, 2))
        { /* block id: 158 */
            uint32_t l_490 = 0xD3E4A38CL;
            int32_t l_491 = (-1L);
            int32_t l_492 = (-1L);
            int8_t *l_538 = &p_1508->g_524;
            int8_t **l_537 = &l_538;
            uint16_t **l_544 = (void*)0;
            int32_t ***l_551 = (void*)0;
            uint8_t l_593 = 0UL;
            int32_t *l_639 = (void*)0;
            int32_t l_672 = 0x73BE9CC1L;
            for (l_470 = 7; (l_470 < 14); l_470++)
            { /* block id: 161 */
                uint64_t l_477 = 18446744073709551615UL;
                VECTOR(uint8_t, 16) l_480 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x8DL), 0x8DL), 0x8DL, 0UL, 0x8DL, (VECTOR(uint8_t, 2))(0UL, 0x8DL), (VECTOR(uint8_t, 2))(0UL, 0x8DL), 0UL, 0x8DL, 0UL, 0x8DL);
                int32_t *l_483 = &p_1508->g_484;
                int32_t l_493 = 0x44F1C860L;
                int32_t l_534 = (-1L);
                int i;
                (1 + 1);
            }
            if ((((*l_537) = &p_1508->g_166) == &p_1508->g_524))
            { /* block id: 188 */
                int32_t ***l_550 = &l_258[0];
                int16_t *l_640[3];
                int32_t l_668 = 3L;
                uint8_t l_669 = 255UL;
                int32_t l_670 = (-4L);
                uint16_t l_673 = 65527UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_640[i] = &l_470;
                for (l_491 = 0; (l_491 < (-28)); --l_491)
                { /* block id: 191 */
                    int32_t ***l_545 = &l_258[1];
                    int32_t l_567 = 1L;
                    int32_t l_586 = (-3L);
                    VECTOR(int64_t, 16) l_597 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-3L)), (-3L)), (-3L), 1L, (-3L), (VECTOR(int64_t, 2))(1L, (-3L)), (VECTOR(int64_t, 2))(1L, (-3L)), 1L, (-3L), 1L, (-3L));
                    uint64_t *l_604[3][4][9] = {{{&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0,&p_1508->g_605,&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0},{&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0,&p_1508->g_605,&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0},{&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0,&p_1508->g_605,&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0},{&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0,&p_1508->g_605,&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0}},{{&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0,&p_1508->g_605,&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0},{&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0,&p_1508->g_605,&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0},{&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0,&p_1508->g_605,&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0},{&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0,&p_1508->g_605,&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0}},{{&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0,&p_1508->g_605,&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0},{&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0,&p_1508->g_605,&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0},{&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0,&p_1508->g_605,&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0},{&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0,&p_1508->g_605,&p_1508->g_605,(void*)0,&p_1508->g_605,(void*)0}}};
                    uint16_t *l_608 = &l_294;
                    uint8_t *l_618 = &l_593;
                    int8_t *l_619 = &p_1508->g_524;
                    int64_t l_620 = 0x51741CA647AFC7F9L;
                    VECTOR(uint32_t, 16) l_625 = (VECTOR(uint32_t, 16))(0xA6F006BFL, (VECTOR(uint32_t, 4))(0xA6F006BFL, (VECTOR(uint32_t, 2))(0xA6F006BFL, 0x63E82378L), 0x63E82378L), 0x63E82378L, 0xA6F006BFL, 0x63E82378L, (VECTOR(uint32_t, 2))(0xA6F006BFL, 0x63E82378L), (VECTOR(uint32_t, 2))(0xA6F006BFL, 0x63E82378L), 0xA6F006BFL, 0x63E82378L, 0xA6F006BFL, 0x63E82378L);
                    int32_t **l_636 = &l_506;
                    int32_t **l_637 = (void*)0;
                    int32_t **l_638[1][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                    int16_t **l_641 = &l_640[1];
                    uint16_t l_655[6] = {0x2DC2L,0UL,0x2DC2L,0x2DC2L,0UL,0x2DC2L};
                    int i, j, k;
                    (1 + 1);
                }
                for (l_673 = 20; (l_673 <= 17); l_673 = safe_sub_func_uint8_t_u_u(l_673, 4))
                { /* block id: 239 */
                    int16_t l_680 = 4L;
                    int8_t l_694 = 0x1BL;
                    int32_t l_695[2][5][4] = {{{(-7L),0x272CDCC0L,0L,1L},{(-7L),0x272CDCC0L,0L,1L},{(-7L),0x272CDCC0L,0L,1L},{(-7L),0x272CDCC0L,0L,1L},{(-7L),0x272CDCC0L,0L,1L}},{{(-7L),0x272CDCC0L,0L,1L},{(-7L),0x272CDCC0L,0L,1L},{(-7L),0x272CDCC0L,0L,1L},{(-7L),0x272CDCC0L,0L,1L},{(-7L),0x272CDCC0L,0L,1L}}};
                    int i, j, k;
                    (**p_1508->g_590) = (*p_1508->g_200);
                    (**p_1508->g_590) = p_86;
                    p_86 = p_86;
                    p_1508->g_295.x &= (l_695[0][3][3] |= ((safe_div_func_int64_t_s_s((GROUP_DIVERGE(1, 1) >= (((0L && ((l_680 , ((*l_257) = (*p_1508->g_225))) != ((((void*)0 == p_1508->g_681) & (safe_mul_func_int16_t_s_s((l_680 , (0x06D54502L ^ (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_686.yx)))).lo > ((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-9L), 0x3A5CA28BL)).yyyyyyyyxyxxyxxx)).s9093, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1508->g_689.xxyx)).hi)), 0L, 0x659F9E9AL)))).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(p_1508->g_690.s01)), ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(p_1508->g_691.xz)).yyyyxxyyyxyxyxxy, ((VECTOR(int32_t, 2))(p_1508->g_692.s65)).yyxxxyyxxyyxxxxx))), ((VECTOR(int32_t, 8))(1L, 2L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((*p_86), (-1L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_693.xy)), 1L, 0x1ABBBE2BL)).odd)), 5L, 4L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x3022545CL, (-10L))).yxyx))))))), 0x453C3BA1L, 1L, 5L, 0x79A46307L)).odd)), ((*p_86) = ((0xFFL >= p_89) || p_89)), ((VECTOR(int32_t, 2))(0x7F8DBC54L)), (-1L))).s72, ((VECTOR(int32_t, 2))(0x2BDA1F29L))))).yxyyyxxy)), p_1508->g_comm_values[p_1508->tid], l_680, ((VECTOR(int32_t, 2))(0x20C45C0FL)), 0L, 0x38029C41L)).se856)))), (-1L), 0x5200B640L)).s5545474517722202))).s98))))), (*p_86), ((VECTOR(int32_t, 4))((-1L))), l_694, (*p_86), 0x3DFFC1F9L, ((VECTOR(int32_t, 2))(5L)), ((VECTOR(int32_t, 4))(0x39592892L)))))).s8c))).xxyx, ((VECTOR(int32_t, 4))(0x27227DB6L))))), ((VECTOR(int32_t, 4))(0x1AD61918L)), ((VECTOR(int32_t, 4))(0x55004E2CL))))))))), ((VECTOR(int32_t, 4))(1L))))).z, l_680)) > 9L)))), GROUP_DIVERGE(0, 1)))) , p_86))) < p_1508->g_316.x) > 3L)), p_89)) , (-6L)));
                }
            }
            else
            { /* block id: 248 */
                uint64_t l_698 = 0UL;
                int32_t *l_718 = (void*)0;
                int32_t l_721 = 0x6A2832E1L;
                for (l_642 = 25; (l_642 == 15); l_642--)
                { /* block id: 251 */
                    int16_t l_714 = 3L;
                    int64_t *l_715[1][7];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_715[i][j] = (void*)0;
                    }
                    (*l_257) = func_91(l_698, (p_88 > ((safe_mul_func_int8_t_s_s((p_89 & (safe_lshift_func_uint8_t_u_s(p_89, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_1508->g_705.yxxx)), (safe_add_func_int8_t_s_s(((p_1508->g_213.y |= ((safe_sub_func_uint32_t_u_u((((void*)0 == (**p_1508->g_589)) | (+(safe_sub_func_uint64_t_u_u((((safe_mod_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), l_714)) , ((p_88 , &p_1508->g_104) == &p_1508->g_104)) >= 0x066E01247C24805BL), p_88)))), p_1508->g_115.s4)) >= (*p_86))) >= p_1508->g_147.sb), p_88)), ((VECTOR(int8_t, 2))(7L)), 8L)).s60)).hi))), p_89)) != p_88)), p_1508);
                    if ((*p_86))
                        break;
                }
                (**p_1508->g_590) = (*p_1508->g_200);
                for (l_400 = (-10); (l_400 < (-25)); --l_400)
                { /* block id: 259 */
                    uint16_t l_725[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_725[i] = 9UL;
                    l_718 = p_86;
                    for (l_309 = 0; (l_309 == (-18)); l_309 = safe_sub_func_uint8_t_u_u(l_309, 2))
                    { /* block id: 263 */
                        VECTOR(int32_t, 4) l_722 = (VECTOR(int32_t, 4))(0x28BBB251L, (VECTOR(int32_t, 2))(0x28BBB251L, (-8L)), (-8L));
                        int i;
                        l_721 &= (*l_718);
                        (*p_86) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_722.wwzyxwxwyywwzzwy)))).s5;
                    }
                    (*l_257) = p_86;
                    for (l_672 = 0; (l_672 >= (-15)); l_672 = safe_sub_func_uint8_t_u_u(l_672, 7))
                    { /* block id: 270 */
                        if (l_725[1])
                            break;
                    }
                }
            }
        }
    }
    l_741 |= (p_1508->g_488 == (((p_89 , (safe_lshift_func_uint16_t_u_u(0x0B2FL, 11))) == ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((l_739 = ((*p_86) = (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0xA2B2L, 8UL)).yyxyxxxy)).s26)), (uint16_t)(((((safe_mul_func_uint8_t_u_u(p_88, (**l_257))) >= ((*l_738) ^= p_1508->g_98.s8)) , func_91((**l_257), p_89, p_1508)) == p_86) & p_89)))), 65535UL, 0x1085L)).y < 0x7D0EL))) <= p_1508->g_156) >= 3L), (*p_1508->g_163))), 6)), p_88)) <= p_88)) != l_740));
    return (*p_86);
}


/* ------------------------------------------ */
/* 
 * reads : p_1508->g_200 p_1508->g_10 p_1508->g_196 p_1508->g_108 p_1508->g_31 p_1508->g_107 p_1508->g_213 p_1508->g_168 p_1508->g_comm_values p_1508->g_147 p_1508->g_146 p_1508->g_115 p_1508->g_225 p_1508->g_235 p_1508->g_130 p_1508->g_156 p_1508->g_163 p_1508->g_105
 * writes: p_1508->g_108 p_1508->g_10 p_1508->g_196 p_1508->g_31 p_1508->g_168 p_1508->g_147
 */
int32_t * func_91(int64_t  p_92, int8_t  p_93, struct S0 * p_1508)
{ /* block id: 43 */
    int32_t *l_199 = &p_1508->g_31;
    int8_t *l_221 = &p_1508->g_166;
    int32_t *l_232 = &p_1508->g_168[5];
    VECTOR(uint8_t, 4) l_236 = (VECTOR(uint8_t, 4))(0xD7L, (VECTOR(uint8_t, 2))(0xD7L, 255UL), 255UL);
    VECTOR(int8_t, 4) l_237 = (VECTOR(int8_t, 4))(0x11L, (VECTOR(int8_t, 2))(0x11L, 1L), 1L);
    int32_t *l_254 = (void*)0;
    int32_t *l_255 = (void*)0;
    int32_t *l_256[2][8] = {{(void*)0,&p_1508->g_31,(void*)0,(void*)0,&p_1508->g_31,(void*)0,(void*)0,&p_1508->g_31},{(void*)0,&p_1508->g_31,(void*)0,(void*)0,&p_1508->g_31,(void*)0,(void*)0,&p_1508->g_31}};
    int i, j;
    for (p_92 = 0; (p_92 >= 21); p_92 = safe_add_func_uint32_t_u_u(p_92, 1))
    { /* block id: 46 */
        int32_t l_206 = (-2L);
        VECTOR(uint16_t, 4) l_207 = (VECTOR(uint16_t, 4))(0xF7C5L, (VECTOR(uint16_t, 2))(0xF7C5L, 0xF7B9L), 0xF7B9L);
        VECTOR(uint8_t, 16) l_208 = (VECTOR(uint8_t, 16))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0xEDL), 0xEDL), 0xEDL, 5UL, 0xEDL, (VECTOR(uint8_t, 2))(5UL, 0xEDL), (VECTOR(uint8_t, 2))(5UL, 0xEDL), 5UL, 0xEDL, 5UL, 0xEDL);
        uint16_t *l_214 = (void*)0;
        int16_t **l_222 = (void*)0;
        int32_t *l_223 = (void*)0;
        int32_t *l_224 = &p_1508->g_168[2];
        int i;
        (*p_1508->g_200) = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, 0x0FE40136L)).xxyxyxxyyyyyyyyx)).s0 , l_199);
        for (p_1508->g_10 = 0; (p_1508->g_10 == 26); p_1508->g_10 = safe_add_func_int8_t_s_s(p_1508->g_10, 2))
        { /* block id: 50 */
            for (p_1508->g_196 = 0; (p_1508->g_196 <= 36); ++p_1508->g_196)
            { /* block id: 53 */
                int32_t l_205 = 0x5C52C778L;
                if (l_205)
                    break;
            }
        }
        (*p_1508->g_108) |= (-1L);
        (*p_1508->g_108) = (((((**p_1508->g_107) >= ((*l_224) = (((((l_206 == (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_207.xz)), 0x0AF4L, 0xE5C5L)).wzzzyyzzzwyywzyw)).s80a1)).z && (((&p_1508->g_104 != (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_208.sf2)), 0x20L, 0x1AL)).y , (((safe_add_func_uint8_t_u_u(248UL, (safe_lshift_func_int8_t_s_s(0x52L, (((((VECTOR(int64_t, 8))(p_1508->g_213.zxywwxyy)).s4 ^ (l_214 == (void*)0)) , (safe_add_func_uint8_t_u_u(((((((safe_div_func_uint64_t_u_u((p_92 != ((p_1508->g_168[4] , p_1508->g_168[1]) < p_1508->g_comm_values[p_1508->tid])), GROUP_DIVERGE(2, 1))) , &p_1508->g_105) == (void*)0) , l_221) != (void*)0) >= 0x51DFF827C71321D4L), l_207.x))) , p_1508->g_147.se))))) && p_93) , l_222))) , p_1508->g_146.s8) < (*p_1508->g_108)))) || l_206) && 0xE99AL) == (*p_1508->g_108)) & p_1508->g_115.s4))) & 6L) && p_92) != (*p_1508->g_108));
    }
    (*p_1508->g_225) = (*p_1508->g_107);
    p_1508->g_147.sa |= (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((~FAKE_DIVERGE(p_1508->local_1_offset, get_local_id(1), 10)) >= (*l_199)), (0x75C65715L & ((*l_232) |= (*l_199))))), (safe_rshift_func_int8_t_s_u((*l_199), ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 8))(p_1508->g_235.s7f2c3c59)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 4))(l_236.zwyx)).xwxzzyxz, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 8))(l_237.zzyxxxwy)).odd, (int8_t)(safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0x8A6FL, p_93)), 1)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 16))((((p_92 , ((safe_mod_func_int64_t_s_s(((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((&p_1508->g_166 != (void*)0) , (*l_199)), 0x38L)) ^ FAKE_DIVERGE(p_1508->global_2_offset, get_global_id(2), 10)), (*l_199))), 1)) == p_92), p_1508->g_130.w)) ^ 5L)) != 0x27760F319DCE2DD5L) | p_92), 0x2CL, (-1L), 1L, 0x28L, 0x28L, ((VECTOR(int8_t, 4))(0x51L)), ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(8L)), 1L, 0x59L)).lo, ((VECTOR(int8_t, 8))(0x28L))))), 0x41L, ((VECTOR(int8_t, 4))(1L)), 0L, (-5L), (-6L))).sc)) < p_1508->g_156), (*p_1508->g_163))), (int8_t)p_1508->g_115.s1))).even))))).yxyxxxyx))).s73)).yxyx)).zzxzyzzz))).lo, ((VECTOR(uint8_t, 4))(0x7BL))))), 0xE8L, ((VECTOR(uint8_t, 2))(248UL)), 255UL, 0xD7L, ((VECTOR(uint8_t, 2))(5UL)), ((VECTOR(uint8_t, 2))(2UL)), 0xBDL, 255UL, 0x46L)).sc99f, ((VECTOR(uint8_t, 4))(8UL))))).w)))), (*l_199)));
    return (*p_1508->g_200);
}


/* ------------------------------------------ */
/* 
 * reads : p_1508->g_4 p_1508->g_98 p_1508->g_104 p_1508->g_107 p_1508->g_31 p_1508->g_108 p_1508->g_125 p_1508->g_130 p_1508->g_139 p_1508->g_146 p_1508->g_147 p_1508->g_105 p_1508->g_156 p_1508->g_12 p_1508->g_115 p_1508->g_160 p_1508->g_3 p_1508->g_162 p_1508->g_166 p_1508->g_168 p_1508->g_10 p_1508->g_41 p_1508->g_196 p_1508->g_163
 * writes: p_1508->g_108 p_1508->g_31 p_1508->g_104 p_1508->g_125 p_1508->g_105 p_1508->g_156 p_1508->g_98 p_1508->g_166 p_1508->g_168 p_1508->g_41 p_1508->g_196
 */
int8_t  func_95(int32_t * p_96, struct S0 * p_1508)
{ /* block id: 22 */
    int16_t l_97 = 1L;
    VECTOR(int32_t, 4) l_109 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x7FD266E8L), 0x7FD266E8L);
    VECTOR(int32_t, 2) l_110 = (VECTOR(int32_t, 2))(7L, 0x1A10FB8DL);
    int64_t l_113 = 9L;
    int32_t *l_116 = (void*)0;
    uint8_t l_118 = 253UL;
    int16_t **l_119 = &p_1508->g_104;
    uint16_t *l_124 = &p_1508->g_125;
    VECTOR(int32_t, 2) l_128 = (VECTOR(int32_t, 2))(0x27C64346L, (-1L));
    VECTOR(int32_t, 2) l_129 = (VECTOR(int32_t, 2))(1L, 0L);
    VECTOR(int32_t, 2) l_131 = (VECTOR(int32_t, 2))(0x10F8BFC2L, 0x52B34E31L);
    int32_t *l_132 = (void*)0;
    int32_t *l_133 = (void*)0;
    int32_t *l_134 = (void*)0;
    int32_t *l_135 = (void*)0;
    int32_t *l_136 = (void*)0;
    int32_t *l_137 = (void*)0;
    int32_t *l_138 = (void*)0;
    VECTOR(int32_t, 16) l_148 = (VECTOR(int32_t, 16))(0x46BB1117L, (VECTOR(int32_t, 4))(0x46BB1117L, (VECTOR(int32_t, 2))(0x46BB1117L, 0x557E69CCL), 0x557E69CCL), 0x557E69CCL, 0x46BB1117L, 0x557E69CCL, (VECTOR(int32_t, 2))(0x46BB1117L, 0x557E69CCL), (VECTOR(int32_t, 2))(0x46BB1117L, 0x557E69CCL), 0x46BB1117L, 0x557E69CCL, 0x46BB1117L, 0x557E69CCL);
    VECTOR(int16_t, 8) l_151 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-2L)), (-2L)), (-2L), 0L, (-2L));
    VECTOR(int16_t, 2) l_152 = (VECTOR(int16_t, 2))(0L, 0L);
    int64_t l_153 = (-5L);
    int16_t *l_154 = &p_1508->g_105;
    int16_t *l_155[4];
    int16_t l_157[7] = {(-7L),(-1L),(-7L),(-7L),(-1L),(-7L),(-7L)};
    uint32_t *l_158 = (void*)0;
    uint32_t *l_159 = (void*)0;
    uint8_t l_161 = 251UL;
    int8_t *l_164 = (void*)0;
    int8_t *l_165 = &p_1508->g_166;
    int32_t *l_167 = &p_1508->g_168[5];
    int16_t l_173[10][4] = {{0x785CL,0x772DL,0x772DL,0x785CL},{0x785CL,0x772DL,0x772DL,0x785CL},{0x785CL,0x772DL,0x772DL,0x785CL},{0x785CL,0x772DL,0x772DL,0x785CL},{0x785CL,0x772DL,0x772DL,0x785CL},{0x785CL,0x772DL,0x772DL,0x785CL},{0x785CL,0x772DL,0x772DL,0x785CL},{0x785CL,0x772DL,0x772DL,0x785CL},{0x785CL,0x772DL,0x772DL,0x785CL},{0x785CL,0x772DL,0x772DL,0x785CL}};
    int32_t l_174 = (-6L);
    VECTOR(int16_t, 4) l_175 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L);
    VECTOR(uint32_t, 16) l_178 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x7C3E9936L), 0x7C3E9936L), 0x7C3E9936L, 1UL, 0x7C3E9936L, (VECTOR(uint32_t, 2))(1UL, 0x7C3E9936L), (VECTOR(uint32_t, 2))(1UL, 0x7C3E9936L), 1UL, 0x7C3E9936L, 1UL, 0x7C3E9936L);
    VECTOR(uint32_t, 16) l_179 = (VECTOR(uint32_t, 16))(0x212550B3L, (VECTOR(uint32_t, 4))(0x212550B3L, (VECTOR(uint32_t, 2))(0x212550B3L, 4294967295UL), 4294967295UL), 4294967295UL, 0x212550B3L, 4294967295UL, (VECTOR(uint32_t, 2))(0x212550B3L, 4294967295UL), (VECTOR(uint32_t, 2))(0x212550B3L, 4294967295UL), 0x212550B3L, 4294967295UL, 0x212550B3L, 4294967295UL);
    uint8_t l_186 = 251UL;
    uint64_t l_187 = 0xF7CC21393EBF62B6L;
    uint8_t l_188 = 1UL;
    uint64_t *l_189 = &p_1508->g_41;
    uint8_t l_190[9][3] = {{0x38L,1UL,4UL},{0x38L,1UL,4UL},{0x38L,1UL,4UL},{0x38L,1UL,4UL},{0x38L,1UL,4UL},{0x38L,1UL,4UL},{0x38L,1UL,4UL},{0x38L,1UL,4UL},{0x38L,1UL,4UL}};
    uint64_t *l_191 = (void*)0;
    uint64_t *l_192 = (void*)0;
    uint64_t *l_193 = (void*)0;
    uint64_t *l_194 = (void*)0;
    uint64_t *l_195 = &p_1508->g_196;
    int i, j;
    for (i = 0; i < 4; i++)
        l_155[i] = &l_97;
    l_118 = (p_1508->g_4.s1 <= ((l_97 >= (((VECTOR(uint32_t, 2))(p_1508->g_98.s93)).even && ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_97, 0x54D2AC32L, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x10BACEAEL, (safe_unary_minus_func_int64_t_s(func_100(p_1508->g_4.s1, p_1508->g_104, l_97, p_1508))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_109.ywxw)))).wzyyyzyyyxwzywzw)).s7d)), ((VECTOR(int32_t, 4))(l_110.xyyy)), (*p_96), 0x17BD2F3BL, ((*p_1508->g_108) &= ((safe_mod_func_int16_t_s_s((((l_109.w <= l_109.z) , l_109.x) > 3UL), l_110.x)) && l_97)), (**p_1508->g_107), ((VECTOR(int32_t, 2))(0x7F22B771L)), 0x777CBFDDL, 0x1878E731L)).sb53e)).wzzxyxww, ((VECTOR(int32_t, 8))(0x754D72C3L))))).s2220116371201730, ((VECTOR(int32_t, 16))(0x75DB7620L))))).s6065, ((VECTOR(int32_t, 4))((-7L))), ((VECTOR(int32_t, 4))(0x68FFD6E9L))))).wxzwzwxywzxyxxyw)).s616b, ((VECTOR(int32_t, 4))(0x4986CBD8L))))).wywzxzzy)).s11))).even, 0x18A95DAAL, l_113, 1L, ((VECTOR(int32_t, 2))(1L)), (*p_1508->g_108), ((VECTOR(int32_t, 4))(0x79916B1FL)), (-7L), (-1L), 0x01942702L)).s2d)).even)) , l_110.y));
    (*l_167) ^= (((l_109.x ^= ((((*l_119) = &p_1508->g_105) != (void*)0) >= (((l_110.y & ((*l_165) ^= (safe_lshift_func_uint8_t_u_u(((((safe_mul_func_uint16_t_u_u((+((*l_124)++)), (GROUP_DIVERGE(2, 1) , (((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 0x0EDDB30EL)), 3L, 0L)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_128.xyxyxxyxyyyyyxyx)).even)).even, ((VECTOR(int32_t, 2))((-5L), (-2L))).xxxy))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(l_129.yy)), (int32_t)((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(p_1508->g_130.zxww)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(l_131.xyyxyxxy)).s5546470113541444, (int32_t)(l_131.x = ((**p_1508->g_107) = 0x32A3AB48L))))).s6e00)).even)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(0x508C1DB4L, 0L)).xxxxyyyxxyyyxxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x517D95D1L, ((((VECTOR(uint16_t, 2))(p_1508->g_139.yy)).even != 65535UL) >= ((safe_rshift_func_int16_t_s_s(0x0926L, (safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 16))(p_1508->g_146.s6330f89493eadc2a)).s9, (*p_1508->g_108))), 0)))) ^ ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))((-8L), (-8L))))).hi)), 0x5AD63A6EL, (-10L))))))).xyxxzxzwzzxzxxyz))).even)).s71))).xyxy)).hi)).xxyy, ((VECTOR(int32_t, 16))(p_1508->g_147.s6787cd55f75c09cc)).sc0e6))).y))).yyyyxxxyyyxyyxyx)).sb333)), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(l_148.s3e7f264c)).s02, ((VECTOR(int32_t, 4))((!((!(safe_rshift_func_uint16_t_u_u((((FAKE_DIVERGE(p_1508->group_1_offset, get_group_id(1), 10) >= ((p_1508->g_98.sd = (((p_1508->g_156 |= ((*l_154) |= (0x92E0L == ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(l_151.s13)).yyxy, ((VECTOR(int16_t, 4))(l_152.xyxy))))), l_153, 0x605EL, ((VECTOR(int16_t, 2))(1L)), 0x33BDL, 0x3370L, ((VECTOR(int16_t, 2))(1L)), 0x2E0AL, 1L, 0L, 0x532AL)).sf))) <= p_1508->g_146.sb) != l_157[6])) , 0x05L)) < p_1508->g_130.z) & p_1508->g_147.sa), p_1508->g_12.s5))) ^ p_1508->g_115.s5)), (*p_96), 0L, 1L)).even, ((VECTOR(int32_t, 2))(0x446F3898L))))), (-1L), 7L)).s71)), p_1508->g_160, 0x26E25E85L, l_161, (*p_96), ((VECTOR(int32_t, 4))(0x3459E8EBL)), 7L, 1L)).s6a, ((VECTOR(int32_t, 2))(0x3E87FF4EL))))), ((VECTOR(int32_t, 2))(0x39A44DA6L))))).hi , p_1508->g_3)))) , p_1508->g_162) == &l_155[0]) > p_1508->g_147.se), 3)))) & p_1508->g_4.s7) & FAKE_DIVERGE(p_1508->local_0_offset, get_local_id(0), 10)))) && (-1L)) >= p_1508->g_12.s4);
    (*p_96) = (4L == 0L);
    atomic_sub(&p_1508->g_atomic_reduction[get_linear_group_id()], (safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_1508->group_1_offset, get_group_id(1), 10), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((l_173[1][1] <= l_174), ((VECTOR(int16_t, 8))(l_175.yzyyxyxx)).s3, (safe_div_func_uint8_t_u_u((&p_96 == ((((*l_195) ^= (((((*p_1508->g_108) | (((((*l_189) = (((-1L) != GROUP_DIVERGE(0, 1)) <= ((((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 2))(l_178.s6d))))), 4294967295UL, 1UL)).odd, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_179.s17e9c42605a821b9)).s5, 0UL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))((safe_sub_func_int64_t_s_s((((*p_1508->g_104) != (FAKE_DIVERGE(p_1508->local_0_offset, get_local_id(0), 10) != (safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((VECTOR(uint32_t, 16))(p_1508->g_3, 1UL, 4294967293UL, 0x4B1641BDL, (p_1508->g_115.s5 <= (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0xFAL, l_186, 0UL, 4UL)))).yyxzzyww, ((VECTOR(uint8_t, 8))(0xA6L))))))).s6 == 0x02L)), p_1508->g_146.s4, 0x84363F86L, ((VECTOR(uint32_t, 2))(0x44AFDE6BL)), p_1508->g_10, ((VECTOR(uint32_t, 2))(1UL)), ((VECTOR(uint32_t, 2))(0xFDBBE093L)), 4294967295UL, 4294967293UL)).se , p_1508->g_125), p_1508->g_146.s1)), GROUP_DIVERGE(2, 1))))) , 1L), 18446744073709551615UL)), ((VECTOR(uint32_t, 2))(1UL)), 0x39B6CC73L)).y, 0x13612929L, p_1508->g_115.s6, l_187, ((VECTOR(uint32_t, 2))(0x0A182755L)), 1UL, 0x5C18B874L)), p_1508->g_41, ((VECTOR(uint32_t, 2))(0x6E46704DL)), 0UL, 0x1195C0E0L, 4294967295UL)).s59))).lo ^ (*p_96)) >= l_188))) == p_1508->g_125) > p_1508->g_166) | FAKE_DIVERGE(p_1508->group_2_offset, get_group_id(2), 10))) == l_190[1][1]) >= p_1508->g_105) & (*l_167))) , p_1508->g_3) , (void*)0)), p_1508->g_98.s4)), 8L, 0x18F4L, (*p_1508->g_163), 1L, 0x4865L)))).s7)) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1508->v_collective += p_1508->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return p_1508->g_146.sc;
}


/* ------------------------------------------ */
/* 
 * reads : p_1508->g_107 p_1508->g_31
 * writes: p_1508->g_108
 */
int64_t  func_100(int64_t  p_101, int16_t * p_102, uint16_t  p_103, struct S0 * p_1508)
{ /* block id: 23 */
    int32_t *l_106 = &p_1508->g_31;
    (*p_1508->g_107) = l_106;
    return (*l_106);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[99];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 99; i++)
            l_comm_values[i] = 1;
    struct S0 c_1509;
    struct S0* p_1508 = &c_1509;
    struct S0 c_1510 = {
        (-5L), // p_1508->g_2
        0x42039807L, // p_1508->g_3
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7A5C62E0L), 0x7A5C62E0L), 0x7A5C62E0L, 0L, 0x7A5C62E0L), // p_1508->g_4
        0xF1L, // p_1508->g_10
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xFEBFL), 0xFEBFL), 0xFEBFL, 65535UL, 0xFEBFL), // p_1508->g_12
        (VECTOR(int8_t, 16))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 1L), 1L), 1L, (-7L), 1L, (VECTOR(int8_t, 2))((-7L), 1L), (VECTOR(int8_t, 2))((-7L), 1L), (-7L), 1L, (-7L), 1L), // p_1508->g_22
        1L, // p_1508->g_31
        (-8L), // p_1508->g_40
        0xF5B6EF3BB579AB67L, // p_1508->g_41
        {&p_1508->g_10,&p_1508->g_10,&p_1508->g_10,&p_1508->g_10,&p_1508->g_10}, // p_1508->g_47
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 3UL), 3UL), 3UL, 1UL, 3UL, (VECTOR(uint32_t, 2))(1UL, 3UL), (VECTOR(uint32_t, 2))(1UL, 3UL), 1UL, 3UL, 1UL, 3UL), // p_1508->g_98
        1L, // p_1508->g_105
        &p_1508->g_105, // p_1508->g_104
        &p_1508->g_31, // p_1508->g_108
        &p_1508->g_108, // p_1508->g_107
        (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x7E8A4A7EL), 0x7E8A4A7EL), 0x7E8A4A7EL, 3L, 0x7E8A4A7EL), // p_1508->g_115
        {(void*)0}, // p_1508->g_114
        (void*)0, // p_1508->g_117
        65534UL, // p_1508->g_125
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x593F2D2CL), 0x593F2D2CL), // p_1508->g_130
        (VECTOR(uint16_t, 2))(0xC92AL, 9UL), // p_1508->g_139
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x6AE63DA6L), 0x6AE63DA6L), 0x6AE63DA6L, 1L, 0x6AE63DA6L, (VECTOR(int32_t, 2))(1L, 0x6AE63DA6L), (VECTOR(int32_t, 2))(1L, 0x6AE63DA6L), 1L, 0x6AE63DA6L, 1L, 0x6AE63DA6L), // p_1508->g_146
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L), (VECTOR(int32_t, 2))((-1L), (-2L)), (VECTOR(int32_t, 2))((-1L), (-2L)), (-1L), (-2L), (-1L), (-2L)), // p_1508->g_147
        4294967295UL, // p_1508->g_156
        (-1L), // p_1508->g_160
        &p_1508->g_105, // p_1508->g_163
        &p_1508->g_163, // p_1508->g_162
        (-2L), // p_1508->g_166
        {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)}, // p_1508->g_168
        4UL, // p_1508->g_196
        &p_1508->g_108, // p_1508->g_200
        (VECTOR(int64_t, 4))(0x7511DB535A2EF250L, (VECTOR(int64_t, 2))(0x7511DB535A2EF250L, 0x05D671C78C1057D3L), 0x05D671C78C1057D3L), // p_1508->g_213
        &p_1508->g_108, // p_1508->g_225
        (VECTOR(uint8_t, 16))(0x75L, (VECTOR(uint8_t, 4))(0x75L, (VECTOR(uint8_t, 2))(0x75L, 0xC4L), 0xC4L), 0xC4L, 0x75L, 0xC4L, (VECTOR(uint8_t, 2))(0x75L, 0xC4L), (VECTOR(uint8_t, 2))(0x75L, 0xC4L), 0x75L, 0xC4L, 0x75L, 0xC4L), // p_1508->g_235
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x1A939F94B34C819DL), 0x1A939F94B34C819DL), 0x1A939F94B34C819DL, 1UL, 0x1A939F94B34C819DL), // p_1508->g_266
        (VECTOR(int32_t, 2))(0x10149B8AL, 1L), // p_1508->g_295
        18446744073709551608UL, // p_1508->g_313
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL), // p_1508->g_316
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65531UL), 65531UL), // p_1508->g_338
        (void*)0, // p_1508->g_341
        {{{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341}},{{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341}},{{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341}},{{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341}},{{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341}},{{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341}},{{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341}},{{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341}},{{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341}},{{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341},{&p_1508->g_341}}}, // p_1508->g_340
        {{{&p_1508->g_340[5][0][0],(void*)0,&p_1508->g_340[5][0][0]},{&p_1508->g_340[5][0][0],(void*)0,&p_1508->g_340[5][0][0]},{&p_1508->g_340[5][0][0],(void*)0,&p_1508->g_340[5][0][0]},{&p_1508->g_340[5][0][0],(void*)0,&p_1508->g_340[5][0][0]},{&p_1508->g_340[5][0][0],(void*)0,&p_1508->g_340[5][0][0]},{&p_1508->g_340[5][0][0],(void*)0,&p_1508->g_340[5][0][0]},{&p_1508->g_340[5][0][0],(void*)0,&p_1508->g_340[5][0][0]}},{{&p_1508->g_340[5][0][0],(void*)0,&p_1508->g_340[5][0][0]},{&p_1508->g_340[5][0][0],(void*)0,&p_1508->g_340[5][0][0]},{&p_1508->g_340[5][0][0],(void*)0,&p_1508->g_340[5][0][0]},{&p_1508->g_340[5][0][0],(void*)0,&p_1508->g_340[5][0][0]},{&p_1508->g_340[5][0][0],(void*)0,&p_1508->g_340[5][0][0]},{&p_1508->g_340[5][0][0],(void*)0,&p_1508->g_340[5][0][0]},{&p_1508->g_340[5][0][0],(void*)0,&p_1508->g_340[5][0][0]}}}, // p_1508->g_342
        (void*)0, // p_1508->g_346
        (void*)0, // p_1508->g_349
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1508->g_348
        &p_1508->g_348[1], // p_1508->g_347
        (VECTOR(uint64_t, 16))(0x6B153C2F0F649D55L, (VECTOR(uint64_t, 4))(0x6B153C2F0F649D55L, (VECTOR(uint64_t, 2))(0x6B153C2F0F649D55L, 1UL), 1UL), 1UL, 0x6B153C2F0F649D55L, 1UL, (VECTOR(uint64_t, 2))(0x6B153C2F0F649D55L, 1UL), (VECTOR(uint64_t, 2))(0x6B153C2F0F649D55L, 1UL), 0x6B153C2F0F649D55L, 1UL, 0x6B153C2F0F649D55L, 1UL), // p_1508->g_372
        &p_1508->g_347, // p_1508->g_398
        (VECTOR(int8_t, 2))(0x27L, 0x43L), // p_1508->g_425
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L), // p_1508->g_456
        (-1L), // p_1508->g_484
        (VECTOR(uint16_t, 16))(0xC978L, (VECTOR(uint16_t, 4))(0xC978L, (VECTOR(uint16_t, 2))(0xC978L, 0x946FL), 0x946FL), 0x946FL, 0xC978L, 0x946FL, (VECTOR(uint16_t, 2))(0xC978L, 0x946FL), (VECTOR(uint16_t, 2))(0xC978L, 0x946FL), 0xC978L, 0x946FL, 0xC978L, 0x946FL), // p_1508->g_487
        3UL, // p_1508->g_488
        &p_1508->g_484, // p_1508->g_508
        (VECTOR(uint8_t, 8))(0x3BL, (VECTOR(uint8_t, 4))(0x3BL, (VECTOR(uint8_t, 2))(0x3BL, 0xB1L), 0xB1L), 0xB1L, 0x3BL, 0xB1L), // p_1508->g_523
        (-10L), // p_1508->g_524
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), // p_1508->g_541
        &p_1508->g_114[0], // p_1508->g_591
        &p_1508->g_591, // p_1508->g_590
        &p_1508->g_590, // p_1508->g_589
        0x26BBL, // p_1508->g_594
        0xDAD45566737CBAB7L, // p_1508->g_605
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1508->g_664
        (void*)0, // p_1508->g_681
        (VECTOR(int32_t, 2))(0x7761388FL, 1L), // p_1508->g_689
        (VECTOR(int32_t, 16))(0x18D3937BL, (VECTOR(int32_t, 4))(0x18D3937BL, (VECTOR(int32_t, 2))(0x18D3937BL, 0x3D9A90E7L), 0x3D9A90E7L), 0x3D9A90E7L, 0x18D3937BL, 0x3D9A90E7L, (VECTOR(int32_t, 2))(0x18D3937BL, 0x3D9A90E7L), (VECTOR(int32_t, 2))(0x18D3937BL, 0x3D9A90E7L), 0x18D3937BL, 0x3D9A90E7L, 0x18D3937BL, 0x3D9A90E7L), // p_1508->g_690
        (VECTOR(int32_t, 4))(0x72800AA4L, (VECTOR(int32_t, 2))(0x72800AA4L, 0x39A87D3DL), 0x39A87D3DL), // p_1508->g_691
        (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x2AA9C0EEL), 0x2AA9C0EEL), 0x2AA9C0EEL, 7L, 0x2AA9C0EEL), // p_1508->g_692
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x33L), 0x33L), // p_1508->g_705
        (VECTOR(uint16_t, 4))(0x7245L, (VECTOR(uint16_t, 2))(0x7245L, 0UL), 0UL), // p_1508->g_757
        (VECTOR(int64_t, 4))(0x18FCBF8AC64FFB0BL, (VECTOR(int64_t, 2))(0x18FCBF8AC64FFB0BL, 0x5D03425C3B055921L), 0x5D03425C3B055921L), // p_1508->g_758
        (VECTOR(uint8_t, 2))(255UL, 2UL), // p_1508->g_772
        5UL, // p_1508->g_836
        (VECTOR(int32_t, 4))(0x2CDFE89FL, (VECTOR(int32_t, 2))(0x2CDFE89FL, (-5L)), (-5L)), // p_1508->g_866
        {0L,0L,0L,0L,0L,0L,0L,0L}, // p_1508->g_869
        (VECTOR(uint32_t, 8))(0xC42E611CL, (VECTOR(uint32_t, 4))(0xC42E611CL, (VECTOR(uint32_t, 2))(0xC42E611CL, 0x721937E9L), 0x721937E9L), 0x721937E9L, 0xC42E611CL, 0x721937E9L), // p_1508->g_883
        (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), (-1L)), (-1L)), // p_1508->g_895
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6AECCBFDL), 0x6AECCBFDL), 0x6AECCBFDL, (-1L), 0x6AECCBFDL, (VECTOR(int32_t, 2))((-1L), 0x6AECCBFDL), (VECTOR(int32_t, 2))((-1L), 0x6AECCBFDL), (-1L), 0x6AECCBFDL, (-1L), 0x6AECCBFDL), // p_1508->g_896
        (VECTOR(uint32_t, 2))(0xD6A0B010L, 4294967286UL), // p_1508->g_910
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL), // p_1508->g_915
        (VECTOR(int32_t, 2))(0x69E92DA1L, 0x007CD4CAL), // p_1508->g_921
        (VECTOR(int16_t, 2))(0x2CE4L, 2L), // p_1508->g_933
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x04BD1E18L), 0x04BD1E18L), 0x04BD1E18L, 1L, 0x04BD1E18L), // p_1508->g_974
        6L, // p_1508->g_986
        (VECTOR(int16_t, 4))(0x01F0L, (VECTOR(int16_t, 2))(0x01F0L, (-5L)), (-5L)), // p_1508->g_1024
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x2ABEF9E9L), 0x2ABEF9E9L), // p_1508->g_1040
        (void*)0, // p_1508->g_1047
        (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0L), 0L), 0L, (-8L), 0L, (VECTOR(int32_t, 2))((-8L), 0L), (VECTOR(int32_t, 2))((-8L), 0L), (-8L), 0L, (-8L), 0L), // p_1508->g_1191
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int8_t, 2))(1L, 0L), (VECTOR(int8_t, 2))(1L, 0L), 1L, 0L, 1L, 0L), // p_1508->g_1209
        (void*)0, // p_1508->g_1214
        &p_1508->g_349, // p_1508->g_1227
        0L, // p_1508->g_1242
        0x363CL, // p_1508->g_1243
        {{{0x6E69A4BFL,7L,(-1L),1L,6L,0x0D5C599FL,0x6E69A4BFL},{0x6E69A4BFL,7L,(-1L),1L,6L,0x0D5C599FL,0x6E69A4BFL},{0x6E69A4BFL,7L,(-1L),1L,6L,0x0D5C599FL,0x6E69A4BFL},{0x6E69A4BFL,7L,(-1L),1L,6L,0x0D5C599FL,0x6E69A4BFL},{0x6E69A4BFL,7L,(-1L),1L,6L,0x0D5C599FL,0x6E69A4BFL}},{{0x6E69A4BFL,7L,(-1L),1L,6L,0x0D5C599FL,0x6E69A4BFL},{0x6E69A4BFL,7L,(-1L),1L,6L,0x0D5C599FL,0x6E69A4BFL},{0x6E69A4BFL,7L,(-1L),1L,6L,0x0D5C599FL,0x6E69A4BFL},{0x6E69A4BFL,7L,(-1L),1L,6L,0x0D5C599FL,0x6E69A4BFL},{0x6E69A4BFL,7L,(-1L),1L,6L,0x0D5C599FL,0x6E69A4BFL}}}, // p_1508->g_1244
        (VECTOR(int64_t, 4))(0x3BDBC0C2A6452FFAL, (VECTOR(int64_t, 2))(0x3BDBC0C2A6452FFAL, 0x0D5C1903B29C4295L), 0x0D5C1903B29C4295L), // p_1508->g_1264
        (VECTOR(int64_t, 16))(0x700EE0D1A87E8B4AL, (VECTOR(int64_t, 4))(0x700EE0D1A87E8B4AL, (VECTOR(int64_t, 2))(0x700EE0D1A87E8B4AL, 0x7579D505AEF42030L), 0x7579D505AEF42030L), 0x7579D505AEF42030L, 0x700EE0D1A87E8B4AL, 0x7579D505AEF42030L, (VECTOR(int64_t, 2))(0x700EE0D1A87E8B4AL, 0x7579D505AEF42030L), (VECTOR(int64_t, 2))(0x700EE0D1A87E8B4AL, 0x7579D505AEF42030L), 0x700EE0D1A87E8B4AL, 0x7579D505AEF42030L, 0x700EE0D1A87E8B4AL, 0x7579D505AEF42030L), // p_1508->g_1265
        (VECTOR(int64_t, 8))(0x259EB98E050285DDL, (VECTOR(int64_t, 4))(0x259EB98E050285DDL, (VECTOR(int64_t, 2))(0x259EB98E050285DDL, 6L), 6L), 6L, 0x259EB98E050285DDL, 6L), // p_1508->g_1267
        (VECTOR(int8_t, 2))(0x3BL, 1L), // p_1508->g_1296
        (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x5EC73A57L), 0x5EC73A57L), 0x5EC73A57L, (-4L), 0x5EC73A57L), // p_1508->g_1303
        4294967291UL, // p_1508->g_1309
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-2L)), (-2L)), (-2L), 1L, (-2L)), // p_1508->g_1334
        (VECTOR(uint64_t, 2))(1UL, 1UL), // p_1508->g_1341
        (VECTOR(uint16_t, 8))(0x24E8L, (VECTOR(uint16_t, 4))(0x24E8L, (VECTOR(uint16_t, 2))(0x24E8L, 0x25C7L), 0x25C7L), 0x25C7L, 0x24E8L, 0x25C7L), // p_1508->g_1399
        (void*)0, // p_1508->g_1409
        (VECTOR(int32_t, 4))(0x040EDE7AL, (VECTOR(int32_t, 2))(0x040EDE7AL, 0L), 0L), // p_1508->g_1416
        (VECTOR(uint8_t, 16))(0x68L, (VECTOR(uint8_t, 4))(0x68L, (VECTOR(uint8_t, 2))(0x68L, 0x65L), 0x65L), 0x65L, 0x68L, 0x65L, (VECTOR(uint8_t, 2))(0x68L, 0x65L), (VECTOR(uint8_t, 2))(0x68L, 0x65L), 0x68L, 0x65L, 0x68L, 0x65L), // p_1508->g_1421
        (VECTOR(int32_t, 2))((-1L), 0x399FDE20L), // p_1508->g_1424
        (void*)0, // p_1508->g_1436
        (VECTOR(int64_t, 8))(0x78676F21E917165FL, (VECTOR(int64_t, 4))(0x78676F21E917165FL, (VECTOR(int64_t, 2))(0x78676F21E917165FL, (-5L)), (-5L)), (-5L), 0x78676F21E917165FL, (-5L)), // p_1508->g_1443
        1UL, // p_1508->g_1450
        2UL, // p_1508->g_1459
        (VECTOR(uint8_t, 16))(0xA5L, (VECTOR(uint8_t, 4))(0xA5L, (VECTOR(uint8_t, 2))(0xA5L, 0x81L), 0x81L), 0x81L, 0xA5L, 0x81L, (VECTOR(uint8_t, 2))(0xA5L, 0x81L), (VECTOR(uint8_t, 2))(0xA5L, 0x81L), 0xA5L, 0x81L, 0xA5L, 0x81L), // p_1508->g_1489
        0x2AE06E31L, // p_1508->g_1496
        (void*)0, // p_1508->g_1505
        0, // p_1508->v_collective
        sequence_input[get_global_id(0)], // p_1508->global_0_offset
        sequence_input[get_global_id(1)], // p_1508->global_1_offset
        sequence_input[get_global_id(2)], // p_1508->global_2_offset
        sequence_input[get_local_id(0)], // p_1508->local_0_offset
        sequence_input[get_local_id(1)], // p_1508->local_1_offset
        sequence_input[get_local_id(2)], // p_1508->local_2_offset
        sequence_input[get_group_id(0)], // p_1508->group_0_offset
        sequence_input[get_group_id(1)], // p_1508->group_1_offset
        sequence_input[get_group_id(2)], // p_1508->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 99)), permutations[0][get_linear_local_id()])), // p_1508->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1509 = c_1510;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1508);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1508->g_2, "p_1508->g_2", print_hash_value);
    transparent_crc(p_1508->g_3, "p_1508->g_3", print_hash_value);
    transparent_crc(p_1508->g_4.s0, "p_1508->g_4.s0", print_hash_value);
    transparent_crc(p_1508->g_4.s1, "p_1508->g_4.s1", print_hash_value);
    transparent_crc(p_1508->g_4.s2, "p_1508->g_4.s2", print_hash_value);
    transparent_crc(p_1508->g_4.s3, "p_1508->g_4.s3", print_hash_value);
    transparent_crc(p_1508->g_4.s4, "p_1508->g_4.s4", print_hash_value);
    transparent_crc(p_1508->g_4.s5, "p_1508->g_4.s5", print_hash_value);
    transparent_crc(p_1508->g_4.s6, "p_1508->g_4.s6", print_hash_value);
    transparent_crc(p_1508->g_4.s7, "p_1508->g_4.s7", print_hash_value);
    transparent_crc(p_1508->g_10, "p_1508->g_10", print_hash_value);
    transparent_crc(p_1508->g_12.s0, "p_1508->g_12.s0", print_hash_value);
    transparent_crc(p_1508->g_12.s1, "p_1508->g_12.s1", print_hash_value);
    transparent_crc(p_1508->g_12.s2, "p_1508->g_12.s2", print_hash_value);
    transparent_crc(p_1508->g_12.s3, "p_1508->g_12.s3", print_hash_value);
    transparent_crc(p_1508->g_12.s4, "p_1508->g_12.s4", print_hash_value);
    transparent_crc(p_1508->g_12.s5, "p_1508->g_12.s5", print_hash_value);
    transparent_crc(p_1508->g_12.s6, "p_1508->g_12.s6", print_hash_value);
    transparent_crc(p_1508->g_12.s7, "p_1508->g_12.s7", print_hash_value);
    transparent_crc(p_1508->g_22.s0, "p_1508->g_22.s0", print_hash_value);
    transparent_crc(p_1508->g_22.s1, "p_1508->g_22.s1", print_hash_value);
    transparent_crc(p_1508->g_22.s2, "p_1508->g_22.s2", print_hash_value);
    transparent_crc(p_1508->g_22.s3, "p_1508->g_22.s3", print_hash_value);
    transparent_crc(p_1508->g_22.s4, "p_1508->g_22.s4", print_hash_value);
    transparent_crc(p_1508->g_22.s5, "p_1508->g_22.s5", print_hash_value);
    transparent_crc(p_1508->g_22.s6, "p_1508->g_22.s6", print_hash_value);
    transparent_crc(p_1508->g_22.s7, "p_1508->g_22.s7", print_hash_value);
    transparent_crc(p_1508->g_22.s8, "p_1508->g_22.s8", print_hash_value);
    transparent_crc(p_1508->g_22.s9, "p_1508->g_22.s9", print_hash_value);
    transparent_crc(p_1508->g_22.sa, "p_1508->g_22.sa", print_hash_value);
    transparent_crc(p_1508->g_22.sb, "p_1508->g_22.sb", print_hash_value);
    transparent_crc(p_1508->g_22.sc, "p_1508->g_22.sc", print_hash_value);
    transparent_crc(p_1508->g_22.sd, "p_1508->g_22.sd", print_hash_value);
    transparent_crc(p_1508->g_22.se, "p_1508->g_22.se", print_hash_value);
    transparent_crc(p_1508->g_22.sf, "p_1508->g_22.sf", print_hash_value);
    transparent_crc(p_1508->g_31, "p_1508->g_31", print_hash_value);
    transparent_crc(p_1508->g_40, "p_1508->g_40", print_hash_value);
    transparent_crc(p_1508->g_41, "p_1508->g_41", print_hash_value);
    transparent_crc(p_1508->g_98.s0, "p_1508->g_98.s0", print_hash_value);
    transparent_crc(p_1508->g_98.s1, "p_1508->g_98.s1", print_hash_value);
    transparent_crc(p_1508->g_98.s2, "p_1508->g_98.s2", print_hash_value);
    transparent_crc(p_1508->g_98.s3, "p_1508->g_98.s3", print_hash_value);
    transparent_crc(p_1508->g_98.s4, "p_1508->g_98.s4", print_hash_value);
    transparent_crc(p_1508->g_98.s5, "p_1508->g_98.s5", print_hash_value);
    transparent_crc(p_1508->g_98.s6, "p_1508->g_98.s6", print_hash_value);
    transparent_crc(p_1508->g_98.s7, "p_1508->g_98.s7", print_hash_value);
    transparent_crc(p_1508->g_98.s8, "p_1508->g_98.s8", print_hash_value);
    transparent_crc(p_1508->g_98.s9, "p_1508->g_98.s9", print_hash_value);
    transparent_crc(p_1508->g_98.sa, "p_1508->g_98.sa", print_hash_value);
    transparent_crc(p_1508->g_98.sb, "p_1508->g_98.sb", print_hash_value);
    transparent_crc(p_1508->g_98.sc, "p_1508->g_98.sc", print_hash_value);
    transparent_crc(p_1508->g_98.sd, "p_1508->g_98.sd", print_hash_value);
    transparent_crc(p_1508->g_98.se, "p_1508->g_98.se", print_hash_value);
    transparent_crc(p_1508->g_98.sf, "p_1508->g_98.sf", print_hash_value);
    transparent_crc(p_1508->g_105, "p_1508->g_105", print_hash_value);
    transparent_crc(p_1508->g_115.s0, "p_1508->g_115.s0", print_hash_value);
    transparent_crc(p_1508->g_115.s1, "p_1508->g_115.s1", print_hash_value);
    transparent_crc(p_1508->g_115.s2, "p_1508->g_115.s2", print_hash_value);
    transparent_crc(p_1508->g_115.s3, "p_1508->g_115.s3", print_hash_value);
    transparent_crc(p_1508->g_115.s4, "p_1508->g_115.s4", print_hash_value);
    transparent_crc(p_1508->g_115.s5, "p_1508->g_115.s5", print_hash_value);
    transparent_crc(p_1508->g_115.s6, "p_1508->g_115.s6", print_hash_value);
    transparent_crc(p_1508->g_115.s7, "p_1508->g_115.s7", print_hash_value);
    transparent_crc(p_1508->g_125, "p_1508->g_125", print_hash_value);
    transparent_crc(p_1508->g_130.x, "p_1508->g_130.x", print_hash_value);
    transparent_crc(p_1508->g_130.y, "p_1508->g_130.y", print_hash_value);
    transparent_crc(p_1508->g_130.z, "p_1508->g_130.z", print_hash_value);
    transparent_crc(p_1508->g_130.w, "p_1508->g_130.w", print_hash_value);
    transparent_crc(p_1508->g_139.x, "p_1508->g_139.x", print_hash_value);
    transparent_crc(p_1508->g_139.y, "p_1508->g_139.y", print_hash_value);
    transparent_crc(p_1508->g_146.s0, "p_1508->g_146.s0", print_hash_value);
    transparent_crc(p_1508->g_146.s1, "p_1508->g_146.s1", print_hash_value);
    transparent_crc(p_1508->g_146.s2, "p_1508->g_146.s2", print_hash_value);
    transparent_crc(p_1508->g_146.s3, "p_1508->g_146.s3", print_hash_value);
    transparent_crc(p_1508->g_146.s4, "p_1508->g_146.s4", print_hash_value);
    transparent_crc(p_1508->g_146.s5, "p_1508->g_146.s5", print_hash_value);
    transparent_crc(p_1508->g_146.s6, "p_1508->g_146.s6", print_hash_value);
    transparent_crc(p_1508->g_146.s7, "p_1508->g_146.s7", print_hash_value);
    transparent_crc(p_1508->g_146.s8, "p_1508->g_146.s8", print_hash_value);
    transparent_crc(p_1508->g_146.s9, "p_1508->g_146.s9", print_hash_value);
    transparent_crc(p_1508->g_146.sa, "p_1508->g_146.sa", print_hash_value);
    transparent_crc(p_1508->g_146.sb, "p_1508->g_146.sb", print_hash_value);
    transparent_crc(p_1508->g_146.sc, "p_1508->g_146.sc", print_hash_value);
    transparent_crc(p_1508->g_146.sd, "p_1508->g_146.sd", print_hash_value);
    transparent_crc(p_1508->g_146.se, "p_1508->g_146.se", print_hash_value);
    transparent_crc(p_1508->g_146.sf, "p_1508->g_146.sf", print_hash_value);
    transparent_crc(p_1508->g_147.s0, "p_1508->g_147.s0", print_hash_value);
    transparent_crc(p_1508->g_147.s1, "p_1508->g_147.s1", print_hash_value);
    transparent_crc(p_1508->g_147.s2, "p_1508->g_147.s2", print_hash_value);
    transparent_crc(p_1508->g_147.s3, "p_1508->g_147.s3", print_hash_value);
    transparent_crc(p_1508->g_147.s4, "p_1508->g_147.s4", print_hash_value);
    transparent_crc(p_1508->g_147.s5, "p_1508->g_147.s5", print_hash_value);
    transparent_crc(p_1508->g_147.s6, "p_1508->g_147.s6", print_hash_value);
    transparent_crc(p_1508->g_147.s7, "p_1508->g_147.s7", print_hash_value);
    transparent_crc(p_1508->g_147.s8, "p_1508->g_147.s8", print_hash_value);
    transparent_crc(p_1508->g_147.s9, "p_1508->g_147.s9", print_hash_value);
    transparent_crc(p_1508->g_147.sa, "p_1508->g_147.sa", print_hash_value);
    transparent_crc(p_1508->g_147.sb, "p_1508->g_147.sb", print_hash_value);
    transparent_crc(p_1508->g_147.sc, "p_1508->g_147.sc", print_hash_value);
    transparent_crc(p_1508->g_147.sd, "p_1508->g_147.sd", print_hash_value);
    transparent_crc(p_1508->g_147.se, "p_1508->g_147.se", print_hash_value);
    transparent_crc(p_1508->g_147.sf, "p_1508->g_147.sf", print_hash_value);
    transparent_crc(p_1508->g_156, "p_1508->g_156", print_hash_value);
    transparent_crc(p_1508->g_160, "p_1508->g_160", print_hash_value);
    transparent_crc(p_1508->g_166, "p_1508->g_166", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1508->g_168[i], "p_1508->g_168[i]", print_hash_value);

    }
    transparent_crc(p_1508->g_196, "p_1508->g_196", print_hash_value);
    transparent_crc(p_1508->g_213.x, "p_1508->g_213.x", print_hash_value);
    transparent_crc(p_1508->g_213.y, "p_1508->g_213.y", print_hash_value);
    transparent_crc(p_1508->g_213.z, "p_1508->g_213.z", print_hash_value);
    transparent_crc(p_1508->g_213.w, "p_1508->g_213.w", print_hash_value);
    transparent_crc(p_1508->g_235.s0, "p_1508->g_235.s0", print_hash_value);
    transparent_crc(p_1508->g_235.s1, "p_1508->g_235.s1", print_hash_value);
    transparent_crc(p_1508->g_235.s2, "p_1508->g_235.s2", print_hash_value);
    transparent_crc(p_1508->g_235.s3, "p_1508->g_235.s3", print_hash_value);
    transparent_crc(p_1508->g_235.s4, "p_1508->g_235.s4", print_hash_value);
    transparent_crc(p_1508->g_235.s5, "p_1508->g_235.s5", print_hash_value);
    transparent_crc(p_1508->g_235.s6, "p_1508->g_235.s6", print_hash_value);
    transparent_crc(p_1508->g_235.s7, "p_1508->g_235.s7", print_hash_value);
    transparent_crc(p_1508->g_235.s8, "p_1508->g_235.s8", print_hash_value);
    transparent_crc(p_1508->g_235.s9, "p_1508->g_235.s9", print_hash_value);
    transparent_crc(p_1508->g_235.sa, "p_1508->g_235.sa", print_hash_value);
    transparent_crc(p_1508->g_235.sb, "p_1508->g_235.sb", print_hash_value);
    transparent_crc(p_1508->g_235.sc, "p_1508->g_235.sc", print_hash_value);
    transparent_crc(p_1508->g_235.sd, "p_1508->g_235.sd", print_hash_value);
    transparent_crc(p_1508->g_235.se, "p_1508->g_235.se", print_hash_value);
    transparent_crc(p_1508->g_235.sf, "p_1508->g_235.sf", print_hash_value);
    transparent_crc(p_1508->g_266.s0, "p_1508->g_266.s0", print_hash_value);
    transparent_crc(p_1508->g_266.s1, "p_1508->g_266.s1", print_hash_value);
    transparent_crc(p_1508->g_266.s2, "p_1508->g_266.s2", print_hash_value);
    transparent_crc(p_1508->g_266.s3, "p_1508->g_266.s3", print_hash_value);
    transparent_crc(p_1508->g_266.s4, "p_1508->g_266.s4", print_hash_value);
    transparent_crc(p_1508->g_266.s5, "p_1508->g_266.s5", print_hash_value);
    transparent_crc(p_1508->g_266.s6, "p_1508->g_266.s6", print_hash_value);
    transparent_crc(p_1508->g_266.s7, "p_1508->g_266.s7", print_hash_value);
    transparent_crc(p_1508->g_295.x, "p_1508->g_295.x", print_hash_value);
    transparent_crc(p_1508->g_295.y, "p_1508->g_295.y", print_hash_value);
    transparent_crc(p_1508->g_313, "p_1508->g_313", print_hash_value);
    transparent_crc(p_1508->g_316.x, "p_1508->g_316.x", print_hash_value);
    transparent_crc(p_1508->g_316.y, "p_1508->g_316.y", print_hash_value);
    transparent_crc(p_1508->g_316.z, "p_1508->g_316.z", print_hash_value);
    transparent_crc(p_1508->g_316.w, "p_1508->g_316.w", print_hash_value);
    transparent_crc(p_1508->g_338.x, "p_1508->g_338.x", print_hash_value);
    transparent_crc(p_1508->g_338.y, "p_1508->g_338.y", print_hash_value);
    transparent_crc(p_1508->g_338.z, "p_1508->g_338.z", print_hash_value);
    transparent_crc(p_1508->g_338.w, "p_1508->g_338.w", print_hash_value);
    transparent_crc(p_1508->g_372.s0, "p_1508->g_372.s0", print_hash_value);
    transparent_crc(p_1508->g_372.s1, "p_1508->g_372.s1", print_hash_value);
    transparent_crc(p_1508->g_372.s2, "p_1508->g_372.s2", print_hash_value);
    transparent_crc(p_1508->g_372.s3, "p_1508->g_372.s3", print_hash_value);
    transparent_crc(p_1508->g_372.s4, "p_1508->g_372.s4", print_hash_value);
    transparent_crc(p_1508->g_372.s5, "p_1508->g_372.s5", print_hash_value);
    transparent_crc(p_1508->g_372.s6, "p_1508->g_372.s6", print_hash_value);
    transparent_crc(p_1508->g_372.s7, "p_1508->g_372.s7", print_hash_value);
    transparent_crc(p_1508->g_372.s8, "p_1508->g_372.s8", print_hash_value);
    transparent_crc(p_1508->g_372.s9, "p_1508->g_372.s9", print_hash_value);
    transparent_crc(p_1508->g_372.sa, "p_1508->g_372.sa", print_hash_value);
    transparent_crc(p_1508->g_372.sb, "p_1508->g_372.sb", print_hash_value);
    transparent_crc(p_1508->g_372.sc, "p_1508->g_372.sc", print_hash_value);
    transparent_crc(p_1508->g_372.sd, "p_1508->g_372.sd", print_hash_value);
    transparent_crc(p_1508->g_372.se, "p_1508->g_372.se", print_hash_value);
    transparent_crc(p_1508->g_372.sf, "p_1508->g_372.sf", print_hash_value);
    transparent_crc(p_1508->g_425.x, "p_1508->g_425.x", print_hash_value);
    transparent_crc(p_1508->g_425.y, "p_1508->g_425.y", print_hash_value);
    transparent_crc(p_1508->g_456.s0, "p_1508->g_456.s0", print_hash_value);
    transparent_crc(p_1508->g_456.s1, "p_1508->g_456.s1", print_hash_value);
    transparent_crc(p_1508->g_456.s2, "p_1508->g_456.s2", print_hash_value);
    transparent_crc(p_1508->g_456.s3, "p_1508->g_456.s3", print_hash_value);
    transparent_crc(p_1508->g_456.s4, "p_1508->g_456.s4", print_hash_value);
    transparent_crc(p_1508->g_456.s5, "p_1508->g_456.s5", print_hash_value);
    transparent_crc(p_1508->g_456.s6, "p_1508->g_456.s6", print_hash_value);
    transparent_crc(p_1508->g_456.s7, "p_1508->g_456.s7", print_hash_value);
    transparent_crc(p_1508->g_484, "p_1508->g_484", print_hash_value);
    transparent_crc(p_1508->g_487.s0, "p_1508->g_487.s0", print_hash_value);
    transparent_crc(p_1508->g_487.s1, "p_1508->g_487.s1", print_hash_value);
    transparent_crc(p_1508->g_487.s2, "p_1508->g_487.s2", print_hash_value);
    transparent_crc(p_1508->g_487.s3, "p_1508->g_487.s3", print_hash_value);
    transparent_crc(p_1508->g_487.s4, "p_1508->g_487.s4", print_hash_value);
    transparent_crc(p_1508->g_487.s5, "p_1508->g_487.s5", print_hash_value);
    transparent_crc(p_1508->g_487.s6, "p_1508->g_487.s6", print_hash_value);
    transparent_crc(p_1508->g_487.s7, "p_1508->g_487.s7", print_hash_value);
    transparent_crc(p_1508->g_487.s8, "p_1508->g_487.s8", print_hash_value);
    transparent_crc(p_1508->g_487.s9, "p_1508->g_487.s9", print_hash_value);
    transparent_crc(p_1508->g_487.sa, "p_1508->g_487.sa", print_hash_value);
    transparent_crc(p_1508->g_487.sb, "p_1508->g_487.sb", print_hash_value);
    transparent_crc(p_1508->g_487.sc, "p_1508->g_487.sc", print_hash_value);
    transparent_crc(p_1508->g_487.sd, "p_1508->g_487.sd", print_hash_value);
    transparent_crc(p_1508->g_487.se, "p_1508->g_487.se", print_hash_value);
    transparent_crc(p_1508->g_487.sf, "p_1508->g_487.sf", print_hash_value);
    transparent_crc(p_1508->g_488, "p_1508->g_488", print_hash_value);
    transparent_crc(p_1508->g_523.s0, "p_1508->g_523.s0", print_hash_value);
    transparent_crc(p_1508->g_523.s1, "p_1508->g_523.s1", print_hash_value);
    transparent_crc(p_1508->g_523.s2, "p_1508->g_523.s2", print_hash_value);
    transparent_crc(p_1508->g_523.s3, "p_1508->g_523.s3", print_hash_value);
    transparent_crc(p_1508->g_523.s4, "p_1508->g_523.s4", print_hash_value);
    transparent_crc(p_1508->g_523.s5, "p_1508->g_523.s5", print_hash_value);
    transparent_crc(p_1508->g_523.s6, "p_1508->g_523.s6", print_hash_value);
    transparent_crc(p_1508->g_523.s7, "p_1508->g_523.s7", print_hash_value);
    transparent_crc(p_1508->g_524, "p_1508->g_524", print_hash_value);
    transparent_crc(p_1508->g_541.x, "p_1508->g_541.x", print_hash_value);
    transparent_crc(p_1508->g_541.y, "p_1508->g_541.y", print_hash_value);
    transparent_crc(p_1508->g_541.z, "p_1508->g_541.z", print_hash_value);
    transparent_crc(p_1508->g_541.w, "p_1508->g_541.w", print_hash_value);
    transparent_crc(p_1508->g_594, "p_1508->g_594", print_hash_value);
    transparent_crc(p_1508->g_605, "p_1508->g_605", print_hash_value);
    transparent_crc(p_1508->g_689.x, "p_1508->g_689.x", print_hash_value);
    transparent_crc(p_1508->g_689.y, "p_1508->g_689.y", print_hash_value);
    transparent_crc(p_1508->g_690.s0, "p_1508->g_690.s0", print_hash_value);
    transparent_crc(p_1508->g_690.s1, "p_1508->g_690.s1", print_hash_value);
    transparent_crc(p_1508->g_690.s2, "p_1508->g_690.s2", print_hash_value);
    transparent_crc(p_1508->g_690.s3, "p_1508->g_690.s3", print_hash_value);
    transparent_crc(p_1508->g_690.s4, "p_1508->g_690.s4", print_hash_value);
    transparent_crc(p_1508->g_690.s5, "p_1508->g_690.s5", print_hash_value);
    transparent_crc(p_1508->g_690.s6, "p_1508->g_690.s6", print_hash_value);
    transparent_crc(p_1508->g_690.s7, "p_1508->g_690.s7", print_hash_value);
    transparent_crc(p_1508->g_690.s8, "p_1508->g_690.s8", print_hash_value);
    transparent_crc(p_1508->g_690.s9, "p_1508->g_690.s9", print_hash_value);
    transparent_crc(p_1508->g_690.sa, "p_1508->g_690.sa", print_hash_value);
    transparent_crc(p_1508->g_690.sb, "p_1508->g_690.sb", print_hash_value);
    transparent_crc(p_1508->g_690.sc, "p_1508->g_690.sc", print_hash_value);
    transparent_crc(p_1508->g_690.sd, "p_1508->g_690.sd", print_hash_value);
    transparent_crc(p_1508->g_690.se, "p_1508->g_690.se", print_hash_value);
    transparent_crc(p_1508->g_690.sf, "p_1508->g_690.sf", print_hash_value);
    transparent_crc(p_1508->g_691.x, "p_1508->g_691.x", print_hash_value);
    transparent_crc(p_1508->g_691.y, "p_1508->g_691.y", print_hash_value);
    transparent_crc(p_1508->g_691.z, "p_1508->g_691.z", print_hash_value);
    transparent_crc(p_1508->g_691.w, "p_1508->g_691.w", print_hash_value);
    transparent_crc(p_1508->g_692.s0, "p_1508->g_692.s0", print_hash_value);
    transparent_crc(p_1508->g_692.s1, "p_1508->g_692.s1", print_hash_value);
    transparent_crc(p_1508->g_692.s2, "p_1508->g_692.s2", print_hash_value);
    transparent_crc(p_1508->g_692.s3, "p_1508->g_692.s3", print_hash_value);
    transparent_crc(p_1508->g_692.s4, "p_1508->g_692.s4", print_hash_value);
    transparent_crc(p_1508->g_692.s5, "p_1508->g_692.s5", print_hash_value);
    transparent_crc(p_1508->g_692.s6, "p_1508->g_692.s6", print_hash_value);
    transparent_crc(p_1508->g_692.s7, "p_1508->g_692.s7", print_hash_value);
    transparent_crc(p_1508->g_705.x, "p_1508->g_705.x", print_hash_value);
    transparent_crc(p_1508->g_705.y, "p_1508->g_705.y", print_hash_value);
    transparent_crc(p_1508->g_705.z, "p_1508->g_705.z", print_hash_value);
    transparent_crc(p_1508->g_705.w, "p_1508->g_705.w", print_hash_value);
    transparent_crc(p_1508->g_757.x, "p_1508->g_757.x", print_hash_value);
    transparent_crc(p_1508->g_757.y, "p_1508->g_757.y", print_hash_value);
    transparent_crc(p_1508->g_757.z, "p_1508->g_757.z", print_hash_value);
    transparent_crc(p_1508->g_757.w, "p_1508->g_757.w", print_hash_value);
    transparent_crc(p_1508->g_758.x, "p_1508->g_758.x", print_hash_value);
    transparent_crc(p_1508->g_758.y, "p_1508->g_758.y", print_hash_value);
    transparent_crc(p_1508->g_758.z, "p_1508->g_758.z", print_hash_value);
    transparent_crc(p_1508->g_758.w, "p_1508->g_758.w", print_hash_value);
    transparent_crc(p_1508->g_772.x, "p_1508->g_772.x", print_hash_value);
    transparent_crc(p_1508->g_772.y, "p_1508->g_772.y", print_hash_value);
    transparent_crc(p_1508->g_836, "p_1508->g_836", print_hash_value);
    transparent_crc(p_1508->g_866.x, "p_1508->g_866.x", print_hash_value);
    transparent_crc(p_1508->g_866.y, "p_1508->g_866.y", print_hash_value);
    transparent_crc(p_1508->g_866.z, "p_1508->g_866.z", print_hash_value);
    transparent_crc(p_1508->g_866.w, "p_1508->g_866.w", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1508->g_869[i], "p_1508->g_869[i]", print_hash_value);

    }
    transparent_crc(p_1508->g_883.s0, "p_1508->g_883.s0", print_hash_value);
    transparent_crc(p_1508->g_883.s1, "p_1508->g_883.s1", print_hash_value);
    transparent_crc(p_1508->g_883.s2, "p_1508->g_883.s2", print_hash_value);
    transparent_crc(p_1508->g_883.s3, "p_1508->g_883.s3", print_hash_value);
    transparent_crc(p_1508->g_883.s4, "p_1508->g_883.s4", print_hash_value);
    transparent_crc(p_1508->g_883.s5, "p_1508->g_883.s5", print_hash_value);
    transparent_crc(p_1508->g_883.s6, "p_1508->g_883.s6", print_hash_value);
    transparent_crc(p_1508->g_883.s7, "p_1508->g_883.s7", print_hash_value);
    transparent_crc(p_1508->g_895.x, "p_1508->g_895.x", print_hash_value);
    transparent_crc(p_1508->g_895.y, "p_1508->g_895.y", print_hash_value);
    transparent_crc(p_1508->g_895.z, "p_1508->g_895.z", print_hash_value);
    transparent_crc(p_1508->g_895.w, "p_1508->g_895.w", print_hash_value);
    transparent_crc(p_1508->g_896.s0, "p_1508->g_896.s0", print_hash_value);
    transparent_crc(p_1508->g_896.s1, "p_1508->g_896.s1", print_hash_value);
    transparent_crc(p_1508->g_896.s2, "p_1508->g_896.s2", print_hash_value);
    transparent_crc(p_1508->g_896.s3, "p_1508->g_896.s3", print_hash_value);
    transparent_crc(p_1508->g_896.s4, "p_1508->g_896.s4", print_hash_value);
    transparent_crc(p_1508->g_896.s5, "p_1508->g_896.s5", print_hash_value);
    transparent_crc(p_1508->g_896.s6, "p_1508->g_896.s6", print_hash_value);
    transparent_crc(p_1508->g_896.s7, "p_1508->g_896.s7", print_hash_value);
    transparent_crc(p_1508->g_896.s8, "p_1508->g_896.s8", print_hash_value);
    transparent_crc(p_1508->g_896.s9, "p_1508->g_896.s9", print_hash_value);
    transparent_crc(p_1508->g_896.sa, "p_1508->g_896.sa", print_hash_value);
    transparent_crc(p_1508->g_896.sb, "p_1508->g_896.sb", print_hash_value);
    transparent_crc(p_1508->g_896.sc, "p_1508->g_896.sc", print_hash_value);
    transparent_crc(p_1508->g_896.sd, "p_1508->g_896.sd", print_hash_value);
    transparent_crc(p_1508->g_896.se, "p_1508->g_896.se", print_hash_value);
    transparent_crc(p_1508->g_896.sf, "p_1508->g_896.sf", print_hash_value);
    transparent_crc(p_1508->g_910.x, "p_1508->g_910.x", print_hash_value);
    transparent_crc(p_1508->g_910.y, "p_1508->g_910.y", print_hash_value);
    transparent_crc(p_1508->g_915.s0, "p_1508->g_915.s0", print_hash_value);
    transparent_crc(p_1508->g_915.s1, "p_1508->g_915.s1", print_hash_value);
    transparent_crc(p_1508->g_915.s2, "p_1508->g_915.s2", print_hash_value);
    transparent_crc(p_1508->g_915.s3, "p_1508->g_915.s3", print_hash_value);
    transparent_crc(p_1508->g_915.s4, "p_1508->g_915.s4", print_hash_value);
    transparent_crc(p_1508->g_915.s5, "p_1508->g_915.s5", print_hash_value);
    transparent_crc(p_1508->g_915.s6, "p_1508->g_915.s6", print_hash_value);
    transparent_crc(p_1508->g_915.s7, "p_1508->g_915.s7", print_hash_value);
    transparent_crc(p_1508->g_921.x, "p_1508->g_921.x", print_hash_value);
    transparent_crc(p_1508->g_921.y, "p_1508->g_921.y", print_hash_value);
    transparent_crc(p_1508->g_933.x, "p_1508->g_933.x", print_hash_value);
    transparent_crc(p_1508->g_933.y, "p_1508->g_933.y", print_hash_value);
    transparent_crc(p_1508->g_974.s0, "p_1508->g_974.s0", print_hash_value);
    transparent_crc(p_1508->g_974.s1, "p_1508->g_974.s1", print_hash_value);
    transparent_crc(p_1508->g_974.s2, "p_1508->g_974.s2", print_hash_value);
    transparent_crc(p_1508->g_974.s3, "p_1508->g_974.s3", print_hash_value);
    transparent_crc(p_1508->g_974.s4, "p_1508->g_974.s4", print_hash_value);
    transparent_crc(p_1508->g_974.s5, "p_1508->g_974.s5", print_hash_value);
    transparent_crc(p_1508->g_974.s6, "p_1508->g_974.s6", print_hash_value);
    transparent_crc(p_1508->g_974.s7, "p_1508->g_974.s7", print_hash_value);
    transparent_crc(p_1508->g_986, "p_1508->g_986", print_hash_value);
    transparent_crc(p_1508->g_1024.x, "p_1508->g_1024.x", print_hash_value);
    transparent_crc(p_1508->g_1024.y, "p_1508->g_1024.y", print_hash_value);
    transparent_crc(p_1508->g_1024.z, "p_1508->g_1024.z", print_hash_value);
    transparent_crc(p_1508->g_1024.w, "p_1508->g_1024.w", print_hash_value);
    transparent_crc(p_1508->g_1040.x, "p_1508->g_1040.x", print_hash_value);
    transparent_crc(p_1508->g_1040.y, "p_1508->g_1040.y", print_hash_value);
    transparent_crc(p_1508->g_1040.z, "p_1508->g_1040.z", print_hash_value);
    transparent_crc(p_1508->g_1040.w, "p_1508->g_1040.w", print_hash_value);
    transparent_crc(p_1508->g_1191.s0, "p_1508->g_1191.s0", print_hash_value);
    transparent_crc(p_1508->g_1191.s1, "p_1508->g_1191.s1", print_hash_value);
    transparent_crc(p_1508->g_1191.s2, "p_1508->g_1191.s2", print_hash_value);
    transparent_crc(p_1508->g_1191.s3, "p_1508->g_1191.s3", print_hash_value);
    transparent_crc(p_1508->g_1191.s4, "p_1508->g_1191.s4", print_hash_value);
    transparent_crc(p_1508->g_1191.s5, "p_1508->g_1191.s5", print_hash_value);
    transparent_crc(p_1508->g_1191.s6, "p_1508->g_1191.s6", print_hash_value);
    transparent_crc(p_1508->g_1191.s7, "p_1508->g_1191.s7", print_hash_value);
    transparent_crc(p_1508->g_1191.s8, "p_1508->g_1191.s8", print_hash_value);
    transparent_crc(p_1508->g_1191.s9, "p_1508->g_1191.s9", print_hash_value);
    transparent_crc(p_1508->g_1191.sa, "p_1508->g_1191.sa", print_hash_value);
    transparent_crc(p_1508->g_1191.sb, "p_1508->g_1191.sb", print_hash_value);
    transparent_crc(p_1508->g_1191.sc, "p_1508->g_1191.sc", print_hash_value);
    transparent_crc(p_1508->g_1191.sd, "p_1508->g_1191.sd", print_hash_value);
    transparent_crc(p_1508->g_1191.se, "p_1508->g_1191.se", print_hash_value);
    transparent_crc(p_1508->g_1191.sf, "p_1508->g_1191.sf", print_hash_value);
    transparent_crc(p_1508->g_1209.s0, "p_1508->g_1209.s0", print_hash_value);
    transparent_crc(p_1508->g_1209.s1, "p_1508->g_1209.s1", print_hash_value);
    transparent_crc(p_1508->g_1209.s2, "p_1508->g_1209.s2", print_hash_value);
    transparent_crc(p_1508->g_1209.s3, "p_1508->g_1209.s3", print_hash_value);
    transparent_crc(p_1508->g_1209.s4, "p_1508->g_1209.s4", print_hash_value);
    transparent_crc(p_1508->g_1209.s5, "p_1508->g_1209.s5", print_hash_value);
    transparent_crc(p_1508->g_1209.s6, "p_1508->g_1209.s6", print_hash_value);
    transparent_crc(p_1508->g_1209.s7, "p_1508->g_1209.s7", print_hash_value);
    transparent_crc(p_1508->g_1209.s8, "p_1508->g_1209.s8", print_hash_value);
    transparent_crc(p_1508->g_1209.s9, "p_1508->g_1209.s9", print_hash_value);
    transparent_crc(p_1508->g_1209.sa, "p_1508->g_1209.sa", print_hash_value);
    transparent_crc(p_1508->g_1209.sb, "p_1508->g_1209.sb", print_hash_value);
    transparent_crc(p_1508->g_1209.sc, "p_1508->g_1209.sc", print_hash_value);
    transparent_crc(p_1508->g_1209.sd, "p_1508->g_1209.sd", print_hash_value);
    transparent_crc(p_1508->g_1209.se, "p_1508->g_1209.se", print_hash_value);
    transparent_crc(p_1508->g_1209.sf, "p_1508->g_1209.sf", print_hash_value);
    transparent_crc(p_1508->g_1242, "p_1508->g_1242", print_hash_value);
    transparent_crc(p_1508->g_1243, "p_1508->g_1243", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1508->g_1244[i][j][k], "p_1508->g_1244[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1508->g_1264.x, "p_1508->g_1264.x", print_hash_value);
    transparent_crc(p_1508->g_1264.y, "p_1508->g_1264.y", print_hash_value);
    transparent_crc(p_1508->g_1264.z, "p_1508->g_1264.z", print_hash_value);
    transparent_crc(p_1508->g_1264.w, "p_1508->g_1264.w", print_hash_value);
    transparent_crc(p_1508->g_1265.s0, "p_1508->g_1265.s0", print_hash_value);
    transparent_crc(p_1508->g_1265.s1, "p_1508->g_1265.s1", print_hash_value);
    transparent_crc(p_1508->g_1265.s2, "p_1508->g_1265.s2", print_hash_value);
    transparent_crc(p_1508->g_1265.s3, "p_1508->g_1265.s3", print_hash_value);
    transparent_crc(p_1508->g_1265.s4, "p_1508->g_1265.s4", print_hash_value);
    transparent_crc(p_1508->g_1265.s5, "p_1508->g_1265.s5", print_hash_value);
    transparent_crc(p_1508->g_1265.s6, "p_1508->g_1265.s6", print_hash_value);
    transparent_crc(p_1508->g_1265.s7, "p_1508->g_1265.s7", print_hash_value);
    transparent_crc(p_1508->g_1265.s8, "p_1508->g_1265.s8", print_hash_value);
    transparent_crc(p_1508->g_1265.s9, "p_1508->g_1265.s9", print_hash_value);
    transparent_crc(p_1508->g_1265.sa, "p_1508->g_1265.sa", print_hash_value);
    transparent_crc(p_1508->g_1265.sb, "p_1508->g_1265.sb", print_hash_value);
    transparent_crc(p_1508->g_1265.sc, "p_1508->g_1265.sc", print_hash_value);
    transparent_crc(p_1508->g_1265.sd, "p_1508->g_1265.sd", print_hash_value);
    transparent_crc(p_1508->g_1265.se, "p_1508->g_1265.se", print_hash_value);
    transparent_crc(p_1508->g_1265.sf, "p_1508->g_1265.sf", print_hash_value);
    transparent_crc(p_1508->g_1267.s0, "p_1508->g_1267.s0", print_hash_value);
    transparent_crc(p_1508->g_1267.s1, "p_1508->g_1267.s1", print_hash_value);
    transparent_crc(p_1508->g_1267.s2, "p_1508->g_1267.s2", print_hash_value);
    transparent_crc(p_1508->g_1267.s3, "p_1508->g_1267.s3", print_hash_value);
    transparent_crc(p_1508->g_1267.s4, "p_1508->g_1267.s4", print_hash_value);
    transparent_crc(p_1508->g_1267.s5, "p_1508->g_1267.s5", print_hash_value);
    transparent_crc(p_1508->g_1267.s6, "p_1508->g_1267.s6", print_hash_value);
    transparent_crc(p_1508->g_1267.s7, "p_1508->g_1267.s7", print_hash_value);
    transparent_crc(p_1508->g_1296.x, "p_1508->g_1296.x", print_hash_value);
    transparent_crc(p_1508->g_1296.y, "p_1508->g_1296.y", print_hash_value);
    transparent_crc(p_1508->g_1303.s0, "p_1508->g_1303.s0", print_hash_value);
    transparent_crc(p_1508->g_1303.s1, "p_1508->g_1303.s1", print_hash_value);
    transparent_crc(p_1508->g_1303.s2, "p_1508->g_1303.s2", print_hash_value);
    transparent_crc(p_1508->g_1303.s3, "p_1508->g_1303.s3", print_hash_value);
    transparent_crc(p_1508->g_1303.s4, "p_1508->g_1303.s4", print_hash_value);
    transparent_crc(p_1508->g_1303.s5, "p_1508->g_1303.s5", print_hash_value);
    transparent_crc(p_1508->g_1303.s6, "p_1508->g_1303.s6", print_hash_value);
    transparent_crc(p_1508->g_1303.s7, "p_1508->g_1303.s7", print_hash_value);
    transparent_crc(p_1508->g_1309, "p_1508->g_1309", print_hash_value);
    transparent_crc(p_1508->g_1334.s0, "p_1508->g_1334.s0", print_hash_value);
    transparent_crc(p_1508->g_1334.s1, "p_1508->g_1334.s1", print_hash_value);
    transparent_crc(p_1508->g_1334.s2, "p_1508->g_1334.s2", print_hash_value);
    transparent_crc(p_1508->g_1334.s3, "p_1508->g_1334.s3", print_hash_value);
    transparent_crc(p_1508->g_1334.s4, "p_1508->g_1334.s4", print_hash_value);
    transparent_crc(p_1508->g_1334.s5, "p_1508->g_1334.s5", print_hash_value);
    transparent_crc(p_1508->g_1334.s6, "p_1508->g_1334.s6", print_hash_value);
    transparent_crc(p_1508->g_1334.s7, "p_1508->g_1334.s7", print_hash_value);
    transparent_crc(p_1508->g_1341.x, "p_1508->g_1341.x", print_hash_value);
    transparent_crc(p_1508->g_1341.y, "p_1508->g_1341.y", print_hash_value);
    transparent_crc(p_1508->g_1399.s0, "p_1508->g_1399.s0", print_hash_value);
    transparent_crc(p_1508->g_1399.s1, "p_1508->g_1399.s1", print_hash_value);
    transparent_crc(p_1508->g_1399.s2, "p_1508->g_1399.s2", print_hash_value);
    transparent_crc(p_1508->g_1399.s3, "p_1508->g_1399.s3", print_hash_value);
    transparent_crc(p_1508->g_1399.s4, "p_1508->g_1399.s4", print_hash_value);
    transparent_crc(p_1508->g_1399.s5, "p_1508->g_1399.s5", print_hash_value);
    transparent_crc(p_1508->g_1399.s6, "p_1508->g_1399.s6", print_hash_value);
    transparent_crc(p_1508->g_1399.s7, "p_1508->g_1399.s7", print_hash_value);
    transparent_crc(p_1508->g_1416.x, "p_1508->g_1416.x", print_hash_value);
    transparent_crc(p_1508->g_1416.y, "p_1508->g_1416.y", print_hash_value);
    transparent_crc(p_1508->g_1416.z, "p_1508->g_1416.z", print_hash_value);
    transparent_crc(p_1508->g_1416.w, "p_1508->g_1416.w", print_hash_value);
    transparent_crc(p_1508->g_1421.s0, "p_1508->g_1421.s0", print_hash_value);
    transparent_crc(p_1508->g_1421.s1, "p_1508->g_1421.s1", print_hash_value);
    transparent_crc(p_1508->g_1421.s2, "p_1508->g_1421.s2", print_hash_value);
    transparent_crc(p_1508->g_1421.s3, "p_1508->g_1421.s3", print_hash_value);
    transparent_crc(p_1508->g_1421.s4, "p_1508->g_1421.s4", print_hash_value);
    transparent_crc(p_1508->g_1421.s5, "p_1508->g_1421.s5", print_hash_value);
    transparent_crc(p_1508->g_1421.s6, "p_1508->g_1421.s6", print_hash_value);
    transparent_crc(p_1508->g_1421.s7, "p_1508->g_1421.s7", print_hash_value);
    transparent_crc(p_1508->g_1421.s8, "p_1508->g_1421.s8", print_hash_value);
    transparent_crc(p_1508->g_1421.s9, "p_1508->g_1421.s9", print_hash_value);
    transparent_crc(p_1508->g_1421.sa, "p_1508->g_1421.sa", print_hash_value);
    transparent_crc(p_1508->g_1421.sb, "p_1508->g_1421.sb", print_hash_value);
    transparent_crc(p_1508->g_1421.sc, "p_1508->g_1421.sc", print_hash_value);
    transparent_crc(p_1508->g_1421.sd, "p_1508->g_1421.sd", print_hash_value);
    transparent_crc(p_1508->g_1421.se, "p_1508->g_1421.se", print_hash_value);
    transparent_crc(p_1508->g_1421.sf, "p_1508->g_1421.sf", print_hash_value);
    transparent_crc(p_1508->g_1424.x, "p_1508->g_1424.x", print_hash_value);
    transparent_crc(p_1508->g_1424.y, "p_1508->g_1424.y", print_hash_value);
    transparent_crc(p_1508->g_1443.s0, "p_1508->g_1443.s0", print_hash_value);
    transparent_crc(p_1508->g_1443.s1, "p_1508->g_1443.s1", print_hash_value);
    transparent_crc(p_1508->g_1443.s2, "p_1508->g_1443.s2", print_hash_value);
    transparent_crc(p_1508->g_1443.s3, "p_1508->g_1443.s3", print_hash_value);
    transparent_crc(p_1508->g_1443.s4, "p_1508->g_1443.s4", print_hash_value);
    transparent_crc(p_1508->g_1443.s5, "p_1508->g_1443.s5", print_hash_value);
    transparent_crc(p_1508->g_1443.s6, "p_1508->g_1443.s6", print_hash_value);
    transparent_crc(p_1508->g_1443.s7, "p_1508->g_1443.s7", print_hash_value);
    transparent_crc(p_1508->g_1450, "p_1508->g_1450", print_hash_value);
    transparent_crc(p_1508->g_1459, "p_1508->g_1459", print_hash_value);
    transparent_crc(p_1508->g_1489.s0, "p_1508->g_1489.s0", print_hash_value);
    transparent_crc(p_1508->g_1489.s1, "p_1508->g_1489.s1", print_hash_value);
    transparent_crc(p_1508->g_1489.s2, "p_1508->g_1489.s2", print_hash_value);
    transparent_crc(p_1508->g_1489.s3, "p_1508->g_1489.s3", print_hash_value);
    transparent_crc(p_1508->g_1489.s4, "p_1508->g_1489.s4", print_hash_value);
    transparent_crc(p_1508->g_1489.s5, "p_1508->g_1489.s5", print_hash_value);
    transparent_crc(p_1508->g_1489.s6, "p_1508->g_1489.s6", print_hash_value);
    transparent_crc(p_1508->g_1489.s7, "p_1508->g_1489.s7", print_hash_value);
    transparent_crc(p_1508->g_1489.s8, "p_1508->g_1489.s8", print_hash_value);
    transparent_crc(p_1508->g_1489.s9, "p_1508->g_1489.s9", print_hash_value);
    transparent_crc(p_1508->g_1489.sa, "p_1508->g_1489.sa", print_hash_value);
    transparent_crc(p_1508->g_1489.sb, "p_1508->g_1489.sb", print_hash_value);
    transparent_crc(p_1508->g_1489.sc, "p_1508->g_1489.sc", print_hash_value);
    transparent_crc(p_1508->g_1489.sd, "p_1508->g_1489.sd", print_hash_value);
    transparent_crc(p_1508->g_1489.se, "p_1508->g_1489.se", print_hash_value);
    transparent_crc(p_1508->g_1489.sf, "p_1508->g_1489.sf", print_hash_value);
    transparent_crc(p_1508->g_1496, "p_1508->g_1496", print_hash_value);
    transparent_crc(p_1508->v_collective, "p_1508->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 5; i++)
            transparent_crc(p_1508->g_special_values[i + 5 * get_linear_group_id()], "p_1508->g_special_values[i + 5 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_1508->l_comm_values[get_linear_local_id()], "p_1508->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1508->g_comm_values[get_linear_group_id() * 99 + get_linear_local_id()], "p_1508->g_comm_values[get_linear_group_id() * 99 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
