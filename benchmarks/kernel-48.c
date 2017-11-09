// --atomics 42 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 54,44,2 -l 1,44,2
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

__constant uint32_t permutations[10][88] = {
{57,22,59,53,72,80,12,5,4,33,29,65,69,82,28,73,47,35,26,3,10,25,21,6,74,60,14,27,37,83,50,23,19,13,55,52,44,2,8,70,77,71,58,9,81,87,54,17,68,49,51,15,39,34,85,36,61,63,24,62,41,79,18,1,0,86,40,67,64,43,42,46,66,45,78,31,48,11,56,84,20,38,16,76,75,7,32,30}, // permutation 0
{28,29,27,21,71,74,3,7,85,41,55,49,61,26,57,38,25,77,8,33,34,2,35,73,16,31,52,36,48,65,68,79,72,12,39,13,58,6,56,60,83,11,4,0,23,75,86,5,87,81,54,22,45,53,40,20,47,37,51,10,32,70,1,59,46,69,42,15,30,80,76,44,84,64,66,63,19,78,24,17,18,50,14,62,67,43,82,9}, // permutation 1
{79,43,60,0,33,80,71,42,68,83,78,75,39,53,19,10,77,40,22,15,20,76,32,87,55,37,57,28,16,21,48,82,66,70,85,8,17,35,26,84,7,13,2,29,41,14,64,25,44,5,58,49,61,65,23,11,52,36,47,56,54,62,4,30,69,45,73,63,1,46,38,18,27,34,31,9,24,86,67,12,72,51,74,3,6,59,81,50}, // permutation 2
{68,86,24,46,75,58,8,83,2,87,66,72,27,41,23,16,3,69,37,64,25,53,56,20,70,11,9,1,5,81,32,59,74,85,71,76,63,50,17,52,39,43,38,30,18,78,22,77,57,47,14,73,54,40,35,36,7,0,48,15,61,80,84,13,82,49,29,34,31,4,55,12,26,19,10,51,42,62,21,45,65,67,44,33,6,60,79,28}, // permutation 3
{25,10,46,36,55,78,50,51,3,66,62,54,70,38,71,32,56,58,85,6,0,60,20,2,80,87,67,37,22,12,79,40,8,23,63,68,27,11,65,84,75,24,64,53,33,57,81,4,19,16,15,47,43,35,31,73,1,17,14,49,28,26,45,48,76,82,21,34,83,69,30,42,86,59,41,13,9,5,7,18,44,29,74,39,77,72,52,61}, // permutation 4
{11,24,62,70,43,8,84,82,18,78,29,57,72,19,22,16,0,14,56,76,33,55,2,85,77,59,51,5,27,23,65,3,58,26,21,71,41,20,47,79,38,15,68,53,83,6,10,30,61,50,4,32,63,64,45,34,12,40,80,48,74,36,67,81,44,35,54,42,66,28,73,86,60,39,69,1,75,49,52,9,46,31,37,7,17,25,13,87}, // permutation 5
{76,82,56,86,79,43,34,62,81,18,78,26,33,5,6,19,64,48,12,39,24,46,25,9,70,36,67,49,52,14,55,8,42,75,87,0,28,11,38,69,85,73,50,54,32,31,59,44,29,15,74,20,72,35,60,58,1,83,51,45,10,61,16,17,53,65,66,63,2,77,57,23,37,3,21,13,68,4,84,47,27,7,41,40,80,71,30,22}, // permutation 6
{28,35,85,71,39,16,66,0,2,31,15,11,27,56,63,79,60,42,74,77,57,19,38,25,22,52,59,58,21,46,61,6,53,10,4,26,24,30,68,76,37,36,54,50,5,47,44,67,18,17,7,41,3,51,72,14,82,43,1,78,45,9,20,32,29,33,83,48,34,40,86,75,62,70,84,69,65,87,55,13,12,73,81,80,8,49,64,23}, // permutation 7
{69,67,23,25,4,62,52,2,31,11,68,14,5,22,49,46,20,27,24,81,41,70,1,30,0,18,43,36,33,82,77,59,9,12,85,74,19,50,61,17,51,37,84,60,47,40,55,21,44,32,78,87,75,64,13,45,7,26,38,34,10,72,76,73,63,28,35,58,54,53,79,16,56,71,57,6,83,15,42,39,80,66,3,8,65,48,86,29}, // permutation 8
{34,21,47,24,67,77,55,9,72,61,28,79,13,78,45,49,68,41,42,71,15,46,80,30,4,23,35,53,73,82,69,75,32,51,43,87,6,1,56,59,8,31,16,10,76,17,11,58,33,5,20,52,57,63,39,60,62,64,84,12,25,19,66,85,81,50,26,29,86,54,2,18,83,27,38,14,44,40,74,0,36,37,70,3,22,7,65,48} // permutation 9
};

// Seed: 27737262

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   uint64_t  f1;
   uint16_t  f2;
};

struct S1 {
    volatile VECTOR(uint8_t, 2) g_12;
    uint64_t g_22;
    VECTOR(uint16_t, 2) g_33;
    uint64_t *g_41;
    volatile VECTOR(uint32_t, 8) g_44;
    int32_t g_80[8][9];
    int32_t g_85[1][7];
    union U0 g_96;
    VECTOR(int16_t, 4) g_99;
    VECTOR(uint16_t, 8) g_127;
    VECTOR(uint64_t, 8) g_130;
    uint16_t g_132;
    int32_t g_145;
    volatile union U0 g_176;
    volatile union U0 *g_175;
    volatile union U0 **g_174;
    uint64_t g_189;
    uint64_t *g_192;
    uint64_t * volatile *g_191;
    VECTOR(int32_t, 2) g_194;
    VECTOR(int32_t, 16) g_195;
    int8_t g_201;
    uint32_t g_211;
    VECTOR(uint32_t, 16) g_215;
    VECTOR(uint16_t, 16) g_216;
    VECTOR(int32_t, 16) g_220;
    VECTOR(int32_t, 2) g_223;
    VECTOR(int8_t, 8) g_226;
    int32_t **g_234;
    int64_t g_239;
    int32_t g_353;
    VECTOR(uint8_t, 4) g_383;
    volatile uint32_t g_391[4];
    volatile uint32_t *g_390;
    VECTOR(int16_t, 8) g_397;
    int32_t g_428[1];
    VECTOR(int8_t, 8) g_437;
    VECTOR(int8_t, 8) g_442;
    int32_t *g_456;
    VECTOR(int8_t, 4) g_504;
    VECTOR(uint32_t, 16) g_531;
    VECTOR(int32_t, 4) g_538;
    VECTOR(int8_t, 2) g_564;
    uint16_t g_575;
    VECTOR(int32_t, 16) g_584;
    VECTOR(int32_t, 4) g_586;
    VECTOR(uint32_t, 16) g_607;
    int32_t g_694;
    VECTOR(uint16_t, 8) g_733;
    VECTOR(uint64_t, 2) g_743;
    VECTOR(uint64_t, 16) g_745;
    uint32_t g_752;
    VECTOR(int8_t, 2) g_765;
    int32_t g_780[10];
    uint64_t **g_786;
    uint64_t ***g_785;
    VECTOR(int16_t, 2) g_792;
    VECTOR(int32_t, 8) g_793;
    VECTOR(uint64_t, 16) g_813;
    VECTOR(uint64_t, 4) g_815;
    int32_t * volatile g_861;
    int32_t * volatile g_863;
    int64_t *g_919;
    int64_t **g_918;
    int32_t ** volatile g_943[9];
    int32_t ** volatile g_944;
    int32_t ***g_997;
    int32_t g_1002;
    volatile VECTOR(uint32_t, 4) g_1013;
    VECTOR(int8_t, 2) g_1054;
    volatile VECTOR(int32_t, 2) g_1077;
    volatile VECTOR(int32_t, 2) g_1080;
    VECTOR(int32_t, 4) g_1082;
    VECTOR(int32_t, 4) g_1083;
    uint8_t g_1089;
    int32_t *g_1132[3][1][3];
    volatile VECTOR(int8_t, 16) g_1148;
    VECTOR(uint16_t, 8) g_1157;
    VECTOR(uint16_t, 8) g_1162;
    int32_t * volatile g_1174;
    union U0 ** volatile g_1185;
    uint32_t *g_1197;
    uint32_t **g_1196;
    uint32_t ***g_1195[6];
    volatile VECTOR(uint64_t, 2) g_1206;
    VECTOR(int16_t, 4) g_1224;
    int16_t *g_1225[10];
    int32_t * volatile g_1255;
    volatile VECTOR(int32_t, 2) g_1346;
    volatile VECTOR(uint8_t, 8) g_1364;
    volatile VECTOR(uint8_t, 8) g_1387;
    int32_t g_1418;
    int32_t ** volatile g_1422;
    int32_t * volatile * volatile * volatile * volatile * volatile g_1541;
    volatile VECTOR(uint16_t, 4) g_1551;
    VECTOR(uint16_t, 2) g_1553;
    int32_t ** volatile g_1589;
    union U0 ** volatile g_1607;
    union U0 *g_1609;
    union U0 ** volatile g_1608;
    uint8_t g_1616;
    int32_t * volatile g_1627;
    int32_t ** volatile g_1828[3];
    int32_t ** volatile g_1829[10][9];
    volatile VECTOR(int8_t, 2) g_1881;
    uint16_t *g_1907[3][8];
    VECTOR(int8_t, 2) g_1908;
    uint64_t g_1916[9];
    volatile int32_t g_1933;
    volatile VECTOR(int8_t, 16) g_1996;
    VECTOR(int16_t, 16) g_2005;
    volatile int32_t g_2023[7][2];
    volatile int32_t *g_2022;
    volatile int32_t * volatile * volatile g_2021;
    VECTOR(int64_t, 4) g_2035;
    VECTOR(uint8_t, 8) g_2040;
    VECTOR(uint8_t, 8) g_2044;
    volatile VECTOR(uint8_t, 4) g_2045;
    volatile VECTOR(int32_t, 4) g_2067;
    VECTOR(int64_t, 16) g_2073;
    VECTOR(int32_t, 2) g_2079;
    volatile VECTOR(uint32_t, 8) g_2080;
    VECTOR(uint16_t, 16) g_2091;
    VECTOR(uint16_t, 16) g_2092;
    VECTOR(uint16_t, 2) g_2093;
    VECTOR(uint8_t, 4) g_2114;
    VECTOR(int16_t, 16) g_2116;
    union U0 *g_2127[1];
    volatile int32_t g_2176;
    int8_t g_2207;
    volatile VECTOR(int64_t, 2) g_2232;
    int64_t ***g_2239;
    volatile VECTOR(int8_t, 4) g_2249;
    int32_t *g_2256[8][7][4];
    int32_t *g_2257;
    VECTOR(int16_t, 2) g_2271;
    volatile VECTOR(int64_t, 8) g_2316;
    volatile VECTOR(int64_t, 16) g_2317;
    VECTOR(int64_t, 16) g_2320;
    volatile VECTOR(int64_t, 4) g_2321;
    volatile VECTOR(int64_t, 2) g_2322;
    uint16_t g_2326;
    uint64_t g_2333;
    VECTOR(int32_t, 4) g_2365;
    int32_t **g_2368;
    int32_t *** volatile g_2367;
    volatile VECTOR(int32_t, 8) g_2376;
    uint64_t g_2394;
    VECTOR(int16_t, 4) g_2399;
    VECTOR(int64_t, 4) g_2400;
    int32_t ** volatile g_2450[7];
    int32_t ** volatile g_2451;
    int32_t g_2459;
    volatile uint8_t *g_2477;
    volatile uint8_t * volatile * volatile g_2476[5];
    volatile uint8_t * volatile * volatile * volatile g_2478;
    volatile VECTOR(uint8_t, 2) g_2483;
    int32_t **g_2512;
    uint8_t g_2518[10][8];
    volatile uint64_t g_2531[8][1];
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
uint64_t  func_1(struct S1 * p_2547);
uint64_t  func_2(uint32_t  p_3, uint64_t  p_4, int16_t  p_5, int64_t  p_6, struct S1 * p_2547);
int8_t  func_18(int64_t  p_19, int64_t  p_20, struct S1 * p_2547);
int8_t  func_30(int64_t  p_31, uint64_t * p_32, struct S1 * p_2547);
union U0  func_35(uint8_t  p_36, struct S1 * p_2547);
uint8_t  func_37(uint64_t  p_38, struct S1 * p_2547);
uint32_t * func_49(uint32_t  p_50, uint32_t  p_51, int32_t  p_52, uint32_t * p_53, struct S1 * p_2547);
uint8_t  func_58(uint32_t * p_59, int32_t  p_60, struct S1 * p_2547);
int64_t  func_61(uint64_t ** p_62, uint64_t * p_63, int16_t  p_64, uint8_t  p_65, struct S1 * p_2547);
uint64_t * func_66(uint16_t  p_67, uint64_t  p_68, uint32_t * p_69, int16_t  p_70, struct S1 * p_2547);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2547->l_comm_values p_2547->g_12 p_2547->g_22 p_2547->g_33 p_2547->g_44 p_2547->g_96 p_2547->g_99 p_2547->g_145 p_2547->g_85 p_2547->g_211 p_2547->g_215 p_2547->g_216 p_2547->g_220 p_2547->g_223 p_2547->g_226 p_2547->g_234 p_2547->g_195 p_2547->g_194 p_2547->g_239 p_2547->g_80 p_2547->g_383 p_2547->g_390 p_2547->g_397 p_2547->g_353 p_2547->g_437 p_2547->g_442 p_2547->g_comm_values p_2547->g_428 p_2547->g_130 p_2547->g_575 p_2547->g_456 p_2547->g_694 p_2547->g_564 p_2547->g_189 p_2547->g_538 p_2547->g_584 p_2547->g_733 p_2547->g_743 p_2547->g_745 p_2547->g_127 p_2547->g_607 p_2547->g_752 p_2547->g_96.f2 p_2547->g_765 p_2547->g_780 p_2547->g_785 p_2547->g_792 p_2547->g_793 p_2547->g_813 p_2547->g_815 p_2547->g_586 p_2547->g_201 p_2547->g_504 p_2547->g_174 p_2547->g_175 p_2547->g_176 p_2547->g_176.f0 p_2547->g_944 p_2547->g_997 p_2547->g_1002 p_2547->g_132 p_2547->g_96.f0 p_2547->g_1054 p_2547->g_1077 p_2547->g_1080 p_2547->g_1082 p_2547->g_1083 p_2547->g_1089 p_2547->g_1174 p_2547->g_1195 p_2547->g_1206 p_2547->g_1224 p_2547->g_1162 p_2547->g_1225 p_2547->g_1196 p_2547->g_1197 p_2547->g_96.f1 p_2547->g_1541 p_2547->g_1551 p_2547->g_1013 p_2547->g_1553 p_2547->g_1346 p_2547->g_391 p_2547->g_1418 p_2547->g_1589 p_2547->g_531 p_2547->g_1608 p_2547->g_1616 p_2547->g_1387 p_2547->g_1627 p_2547->g_1916 p_2547->g_1933 p_2547->g_2005 p_2547->g_1881 p_2547->g_2067 p_2547->g_2073 p_2547->g_2079 p_2547->g_2080 p_2547->g_2091 p_2547->g_2092 p_2547->g_2093 p_2547->g_1908 p_2547->g_2114 p_2547->g_2116 p_2547->g_2333 p_2547->g_2367 p_2547->g_2394 p_2547->g_919 p_2547->g_2451 p_2547->g_2459 p_2547->g_2316 p_2547->g_2476 p_2547->g_2478 p_2547->g_1422 p_2547->g_2531 p_2547->g_2376 p_2547->g_1996
 * writes: p_2547->g_22 p_2547->g_41 p_2547->g_80 p_2547->g_99 p_2547->g_96.f2 p_2547->g_211 p_2547->g_145 p_2547->g_201 p_2547->g_239 p_2547->g_85 p_2547->g_194 p_2547->g_353 p_2547->g_189 p_2547->g_428 p_2547->g_456 p_2547->g_127 p_2547->g_130 p_2547->g_comm_values p_2547->g_564 p_2547->g_437 p_2547->g_780 p_2547->g_785 p_2547->g_575 p_2547->g_752 p_2547->g_216 p_2547->g_96.f0 p_2547->g_918 p_2547->g_861 p_2547->g_997 p_2547->g_383 p_2547->g_733 p_2547->g_792 p_2547->g_397 p_2547->g_765 p_2547->g_1132 p_2547->g_1002 p_2547->g_786 p_2547->g_1195 p_2547->g_96.f1 p_2547->g_1197 p_2547->g_132 p_2547->g_1418 p_2547->g_1609 p_2547->g_1907 p_2547->g_1916 p_2547->g_745 p_2547->g_1908 p_2547->g_2040 p_2547->g_2044 p_2547->g_2127 p_2547->g_442 p_2547->g_2257 p_2547->g_2368 p_2547->g_1616 p_2547->g_2394 p_2547->g_2476 p_2547->g_2320 p_2547->g_2035 p_2547->g_175 p_2547->g_2531
 */
uint64_t  func_1(struct S1 * p_2547)
{ /* block id: 4 */
    VECTOR(int8_t, 16) l_11 = (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), (-1L)), (-1L)), (-1L), (-3L), (-1L), (VECTOR(int8_t, 2))((-3L), (-1L)), (VECTOR(int8_t, 2))((-3L), (-1L)), (-3L), (-1L), (-3L), (-1L));
    VECTOR(int16_t, 2) l_13 = (VECTOR(int16_t, 2))((-1L), 0L);
    uint64_t *l_21 = &p_2547->g_22;
    int16_t l_25 = 0L;
    int16_t *l_1831 = (void*)0;
    int16_t *l_1832 = (void*)0;
    int16_t *l_1833 = &l_25;
    int32_t l_1859 = (-1L);
    int32_t l_1861 = 1L;
    int32_t l_1863 = 0x120F6FD1L;
    int32_t l_1864 = 0x4BCD6995L;
    VECTOR(int32_t, 8) l_1865 = (VECTOR(int32_t, 8))(0x57FBB02AL, (VECTOR(int32_t, 4))(0x57FBB02AL, (VECTOR(int32_t, 2))(0x57FBB02AL, 0x5F0E1702L), 0x5F0E1702L), 0x5F0E1702L, 0x57FBB02AL, 0x5F0E1702L);
    int32_t l_1866 = 0L;
    int32_t l_1868[4];
    int32_t l_1869 = 0x635C934EL;
    int8_t l_1870 = 0x5DL;
    uint32_t l_1871 = 9UL;
    int8_t l_1876 = 0x2EL;
    VECTOR(int8_t, 16) l_1882 = (VECTOR(int8_t, 16))(0x5DL, (VECTOR(int8_t, 4))(0x5DL, (VECTOR(int8_t, 2))(0x5DL, 1L), 1L), 1L, 0x5DL, 1L, (VECTOR(int8_t, 2))(0x5DL, 1L), (VECTOR(int8_t, 2))(0x5DL, 1L), 0x5DL, 1L, 0x5DL, 1L);
    int8_t l_1890 = 0x26L;
    uint32_t **l_1894 = &p_2547->g_1197;
    uint32_t **l_1896[1][8] = {{&p_2547->g_1197,&p_2547->g_1197,&p_2547->g_1197,&p_2547->g_1197,&p_2547->g_1197,&p_2547->g_1197,&p_2547->g_1197,&p_2547->g_1197}};
    int64_t **l_1932 = &p_2547->g_919;
    int8_t l_1971 = (-1L);
    int32_t ****l_1980 = &p_2547->g_997;
    uint32_t l_1982 = 4UL;
    VECTOR(int16_t, 2) l_2015 = (VECTOR(int16_t, 2))(3L, 0x283EL);
    int32_t l_2046 = 5L;
    uint64_t *l_2103[6][9][4] = {{{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189}},{{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189}},{{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189}},{{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189}},{{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189}},{{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189},{&p_2547->g_189,(void*)0,&p_2547->g_189,&p_2547->g_189}}};
    VECTOR(int16_t, 2) l_2118 = (VECTOR(int16_t, 2))(0x49DEL, 0x5252L);
    VECTOR(int32_t, 2) l_2177 = (VECTOR(int32_t, 2))((-10L), (-9L));
    uint32_t l_2246[7][4][3] = {{{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL}},{{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL}},{{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL}},{{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL}},{{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL}},{{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL}},{{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL},{0x5BA0E6B7L,0xE4EB0A79L,4294967287UL}}};
    int32_t *l_2266 = &p_2547->g_85[0][0];
    int8_t l_2278 = (-7L);
    int32_t l_2302 = (-1L);
    int64_t l_2304 = 6L;
    uint8_t l_2336 = 0x85L;
    VECTOR(uint32_t, 16) l_2341 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967286UL), 4294967286UL), 4294967286UL, 4294967295UL, 4294967286UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967286UL), (VECTOR(uint32_t, 2))(4294967295UL, 4294967286UL), 4294967295UL, 4294967286UL, 4294967295UL, 4294967286UL);
    int32_t l_2350[6];
    uint8_t l_2357 = 252UL;
    uint64_t l_2383 = 0x8DA541F25F94E9AEL;
    uint32_t l_2405 = 0x9E99E090L;
    uint8_t l_2428 = 0UL;
    uint16_t l_2446 = 0xCA79L;
    VECTOR(int64_t, 8) l_2460 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
    int16_t l_2472[5][4][2] = {{{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L}}};
    uint64_t l_2473 = 8UL;
    union U0 **l_2495 = &p_2547->g_1609;
    union U0 *l_2502[2][10] = {{&p_2547->g_96,&p_2547->g_96,&p_2547->g_96,&p_2547->g_96,&p_2547->g_96,&p_2547->g_96,&p_2547->g_96,&p_2547->g_96,&p_2547->g_96,&p_2547->g_96},{&p_2547->g_96,&p_2547->g_96,&p_2547->g_96,&p_2547->g_96,&p_2547->g_96,&p_2547->g_96,&p_2547->g_96,&p_2547->g_96,&p_2547->g_96,&p_2547->g_96}};
    uint16_t l_2519 = 0UL;
    int32_t *l_2525[1][5][9] = {{{&l_1866,(void*)0,&l_1868[0],&p_2547->g_1002,(void*)0,&p_2547->g_1002,&l_1868[0],(void*)0,&l_1866},{&l_1866,(void*)0,&l_1868[0],&p_2547->g_1002,(void*)0,&p_2547->g_1002,&l_1868[0],(void*)0,&l_1866},{&l_1866,(void*)0,&l_1868[0],&p_2547->g_1002,(void*)0,&p_2547->g_1002,&l_1868[0],(void*)0,&l_1866},{&l_1866,(void*)0,&l_1868[0],&p_2547->g_1002,(void*)0,&p_2547->g_1002,&l_1868[0],(void*)0,&l_1866},{&l_1866,(void*)0,&l_1868[0],&p_2547->g_1002,(void*)0,&p_2547->g_1002,&l_1868[0],(void*)0,&l_1866}}};
    uint64_t l_2528[9][1] = {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}};
    VECTOR(uint16_t, 16) l_2540 = (VECTOR(uint16_t, 16))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0UL), 0UL), 0UL, 65534UL, 0UL, (VECTOR(uint16_t, 2))(65534UL, 0UL), (VECTOR(uint16_t, 2))(65534UL, 0UL), 65534UL, 0UL, 65534UL, 0UL);
    uint32_t l_2541 = 0UL;
    uint32_t l_2544 = 0x7C9C8D6CL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1868[i] = 1L;
    for (i = 0; i < 6; i++)
        l_2350[i] = 0x75D768D6L;
    if ((((*l_1833) = (func_2(p_2547->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2547->tid, 88))], (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((0x4E94L <= ((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(l_11.sfa8f90a3)).odd, ((VECTOR(uint8_t, 16))(p_2547->g_12.yyyyxyxyyyxyyxxx)).sb6fe))).wyzyyzxzzzyyzyzz, ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_13.xyxy)).zwxzxxzzzwzxywzx)).even, ((VECTOR(int16_t, 16))(1L, (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(func_18(p_2547->g_12.x, ((p_2547->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2547->tid, 88))] ^ (((VECTOR(uint64_t, 8))(((*l_21)--), 0x5ECCE35A12A2EF7EL, ((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(0xF992DB756FD8C658L, 0x90707E294B58FE4DL, 0xA82A6F944DCD6A9BL, (p_2547->g_22 , ((*l_21) &= l_25)), (safe_mod_func_uint32_t_u_u(l_11.se, l_25)), 0x503B5B0D69B45C76L, 0x8CE22955D4826422L, 0xDC70E74BB9CEC02DL)).s74)).xyyx, ((VECTOR(uint64_t, 4))(18446744073709551615UL))))), 0x83FAA058A13C444CL, 1UL)).s4 <= 2L)) , 0x48F438361CD5CCFDL), p_2547), 3)) < l_25), p_2547->g_1553.x)), (-1L), ((VECTOR(int16_t, 8))(0x4BF9L)), 0x22E6L, ((VECTOR(int16_t, 4))((-1L))))).hi, ((VECTOR(int16_t, 8))(1L))))).s0040027673000405))).s6), l_11.sc)), l_13.x)), l_11.sa, l_13.y, p_2547) == 0x5EB65597267FD047L)) >= 5UL))
    { /* block id: 829 */
        int64_t l_1834 = 1L;
        int32_t *l_1835 = &p_2547->g_96.f0;
        int32_t *l_1836 = (void*)0;
        int32_t *l_1837 = &p_2547->g_85[0][1];
        int32_t *l_1838 = &p_2547->g_80[0][6];
        int32_t *l_1839 = (void*)0;
        int32_t *l_1840 = &p_2547->g_428[0];
        int32_t *l_1841 = &p_2547->g_85[0][6];
        int32_t *l_1842 = &p_2547->g_1002;
        int32_t *l_1843 = (void*)0;
        int32_t *l_1844 = (void*)0;
        int32_t l_1845 = 0x639B249FL;
        int32_t *l_1846 = &p_2547->g_80[6][6];
        int32_t *l_1847 = (void*)0;
        int32_t l_1848 = (-8L);
        int32_t *l_1849 = (void*)0;
        int32_t *l_1850 = (void*)0;
        int32_t *l_1851 = (void*)0;
        int32_t *l_1852 = (void*)0;
        int32_t *l_1853 = &p_2547->g_80[6][8];
        int32_t *l_1854 = &p_2547->g_80[0][6];
        int32_t *l_1855 = &p_2547->g_428[0];
        int32_t *l_1856 = &p_2547->g_1002;
        int32_t *l_1857 = (void*)0;
        int32_t *l_1858 = &p_2547->g_1002;
        int32_t *l_1860 = &p_2547->g_85[0][1];
        int32_t *l_1862[5];
        int64_t l_1867 = 0L;
        int64_t **l_1886 = &p_2547->g_919;
        uint32_t **l_1897 = &p_2547->g_1197;
        VECTOR(int8_t, 8) l_1909 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-2L)), (-2L)), (-2L), 1L, (-2L));
        uint64_t *l_2101[4];
        VECTOR(int16_t, 8) l_2115 = (VECTOR(int16_t, 8))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 4L), 4L), 4L, 5L, 4L);
        VECTOR(int16_t, 16) l_2117 = (VECTOR(int16_t, 16))(0x7E1DL, (VECTOR(int16_t, 4))(0x7E1DL, (VECTOR(int16_t, 2))(0x7E1DL, 0x33F3L), 0x33F3L), 0x33F3L, 0x7E1DL, 0x33F3L, (VECTOR(int16_t, 2))(0x7E1DL, 0x33F3L), (VECTOR(int16_t, 2))(0x7E1DL, 0x33F3L), 0x7E1DL, 0x33F3L, 0x7E1DL, 0x33F3L);
        int32_t **l_2128 = &l_1837;
        int i;
        for (i = 0; i < 5; i++)
            l_1862[i] = &l_1848;
        for (i = 0; i < 4; i++)
            l_2101[i] = &p_2547->g_189;
        l_1871++;
        for (p_2547->g_96.f1 = 0; (p_2547->g_96.f1 > 34); ++p_2547->g_96.f1)
        { /* block id: 833 */
            uint8_t l_1885 = 0xD1L;
            int64_t l_1888 = 1L;
            int32_t l_1899 = 0x0DCFB84FL;
            VECTOR(uint8_t, 16) l_1924 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x9AL), 0x9AL), 0x9AL, 1UL, 0x9AL, (VECTOR(uint8_t, 2))(1UL, 0x9AL), (VECTOR(uint8_t, 2))(1UL, 0x9AL), 1UL, 0x9AL, 1UL, 0x9AL);
            int64_t **l_1929 = &p_2547->g_919;
            int8_t l_1947 = 0x09L;
            uint8_t l_1984 = 1UL;
            VECTOR(uint16_t, 2) l_2016 = (VECTOR(uint16_t, 2))(65533UL, 65535UL);
            uint64_t ***l_2024 = &p_2547->g_786;
            int32_t l_2051 = 0x75AF060DL;
            int32_t **l_2066 = &l_1851;
            VECTOR(uint16_t, 4) l_2090 = (VECTOR(uint16_t, 4))(0x0396L, (VECTOR(uint16_t, 2))(0x0396L, 7UL), 7UL);
            int i;
            if (l_1876)
            { /* block id: 834 */
                int64_t **l_1887 = &p_2547->g_919;
                int32_t l_1891 = (-9L);
                uint32_t *l_1892[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1892[i] = &l_1871;
                for (p_2547->g_132 = 0; (p_2547->g_132 <= 19); p_2547->g_132 = safe_add_func_int16_t_s_s(p_2547->g_132, 8))
                { /* block id: 837 */
                    int8_t *l_1879 = (void*)0;
                    int8_t *l_1880 = &l_1876;
                    uint32_t *l_1889 = (void*)0;
                    int32_t l_1893 = 4L;
                    (*l_1860) = ((((*l_1880) = 0L) == ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(p_2547->g_1881.xxyx)).yxyxwwzw, ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_1882.s575664da)).s3220226014500474)).sd9, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x5FL, (((((*p_2547->g_1197) | (l_1868[0] = (safe_mul_func_int16_t_s_s(((((((*p_2547->g_175) , func_49((*p_2547->g_390), l_1885, (0x439F2745L < GROUP_DIVERGE(0, 1)), func_49((l_1890 ^= ((l_1886 != l_1887) > l_1888)), l_1888, l_1891, l_1892[0], p_2547), p_2547)) == (void*)0) == 0xBADB8ECAL) & l_1868[2]) > FAKE_DIVERGE(p_2547->group_1_offset, get_group_id(1), 10)), p_2547->g_792.y)))) , 1L) <= l_1891) | 0x7DB854CE0AEB5C81L), 1L, p_2547->g_12.y, l_1885, (-10L), p_2547->g_743.y, p_2547->g_1013.x, ((VECTOR(int8_t, 2))(0x34L)), ((VECTOR(int8_t, 4))((-1L))), 0x10L, 1L)))).s5c))).yxxxxyxx))).even, ((VECTOR(int8_t, 4))(0x0BL))))).xzxzxxzxyxwyyxzz, ((VECTOR(int8_t, 16))(2L))))).s7) || l_1893);
                }
                return p_2547->g_12.y;
            }
            else
            { /* block id: 844 */
                uint32_t ***l_1895 = &l_1894;
                (*l_1854) |= (((*l_1895) = l_1894) == (l_1897 = l_1896[0][4]));
            }
            if ((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x3179F2A6L, (-8L))), 0x0BD2F6D1L, 0L)))).ywwxyxzwyzwxwyyz)).s9d)).lo | (-1L)))
            { /* block id: 849 */
                uint16_t l_1898 = 0xFEC6L;
                return l_1898;
            }
            else
            { /* block id: 851 */
                uint32_t l_1900 = 4294967295UL;
                uint16_t *l_1906 = (void*)0;
                uint16_t **l_1905[1][4][7] = {{{&l_1906,&l_1906,&l_1906,&l_1906,&l_1906,&l_1906,&l_1906},{&l_1906,&l_1906,&l_1906,&l_1906,&l_1906,&l_1906,&l_1906},{&l_1906,&l_1906,&l_1906,&l_1906,&l_1906,&l_1906,&l_1906},{&l_1906,&l_1906,&l_1906,&l_1906,&l_1906,&l_1906,&l_1906}}};
                int8_t *l_1910 = &l_1890;
                uint64_t *l_1915 = &p_2547->g_1916[5];
                uint32_t l_1921 = 0xB9247CF0L;
                int64_t ***l_1930 = &l_1886;
                int64_t ***l_1931 = &p_2547->g_918;
                uint8_t *l_1934[3];
                int32_t *l_1985 = &p_2547->g_80[0][6];
                VECTOR(int64_t, 16) l_2074 = (VECTOR(int64_t, 16))(0x2765E58F154A1520L, (VECTOR(int64_t, 4))(0x2765E58F154A1520L, (VECTOR(int64_t, 2))(0x2765E58F154A1520L, (-2L)), (-2L)), (-2L), 0x2765E58F154A1520L, (-2L), (VECTOR(int64_t, 2))(0x2765E58F154A1520L, (-2L)), (VECTOR(int64_t, 2))(0x2765E58F154A1520L, (-2L)), 0x2765E58F154A1520L, (-2L), 0x2765E58F154A1520L, (-2L));
                VECTOR(int64_t, 16) l_2078 = (VECTOR(int64_t, 16))(0x60D9BFE809754E80L, (VECTOR(int64_t, 4))(0x60D9BFE809754E80L, (VECTOR(int64_t, 2))(0x60D9BFE809754E80L, 0x60E1A0F9E0533C85L), 0x60E1A0F9E0533C85L), 0x60E1A0F9E0533C85L, 0x60D9BFE809754E80L, 0x60E1A0F9E0533C85L, (VECTOR(int64_t, 2))(0x60D9BFE809754E80L, 0x60E1A0F9E0533C85L), (VECTOR(int64_t, 2))(0x60D9BFE809754E80L, 0x60E1A0F9E0533C85L), 0x60D9BFE809754E80L, 0x60E1A0F9E0533C85L, 0x60D9BFE809754E80L, 0x60E1A0F9E0533C85L);
                uint32_t l_2100 = 0x68F7BDA1L;
                uint64_t **l_2102[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1934[i] = (void*)0;
                l_1900--;
                (*l_1858) = ((p_2547->g_745.sb &= ((((safe_add_func_int64_t_s_s(((p_2547->g_1907[0][3] = (void*)0) == (void*)0), ((void*)0 != l_1906))) , ((*l_1910) = ((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(p_2547->g_1908.yxyyyyxy)).odd)).wyzyxzxzxwxxxxyw, ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_1909.s6601637443164447)).sa852)).yzxxzxwz, ((VECTOR(int8_t, 2))(3L, 9L)).yyyyxxyy))).s3332607716037652))).s4)) | (safe_div_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((((*l_1915) &= p_2547->g_85[0][3]) , (((safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(l_1921, FAKE_DIVERGE(p_2547->group_1_offset, get_group_id(1), 10))), (((safe_lshift_func_int8_t_s_u(((p_2547->g_85[0][4] ^ (((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 8))(l_1924.s6c5e243c)).s7661570435646063))).s3 < (p_2547->g_383.x ^= (((((((-1L) || ((*l_1833) = (safe_mul_func_uint16_t_u_u((((((*l_21) = ((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 4))((((*l_1931) = ((*l_1930) = l_1929)) == l_1932), ((VECTOR(uint8_t, 2))(252UL)), 0x1DL)).w, p_2547->g_1418)) , l_1921)) != l_11.sf) >= 0x4321L) , 0xD076L), 0x6671L)))) || l_1888) , 0x5AADL) >= p_2547->g_1933) < (-5L)) ^ 255UL)))) != GROUP_DIVERGE(2, 1)), l_1900)) <= 0UL) ^ l_11.sf))) < l_1921) == l_1900)), 0x805BL)), 0xDEL))) > l_1882.sa)) , l_1900);
                for (l_1888 = 0; (l_1888 > (-21)); l_1888 = safe_sub_func_uint32_t_u_u(l_1888, 7))
                { /* block id: 865 */
                    uint32_t l_1983 = 0UL;
                    VECTOR(int8_t, 8) l_1995 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x78L), 0x78L), 0x78L, 0L, 0x78L);
                    VECTOR(uint8_t, 8) l_2010 = (VECTOR(uint8_t, 8))(0x17L, (VECTOR(uint8_t, 4))(0x17L, (VECTOR(uint8_t, 2))(0x17L, 9UL), 9UL), 9UL, 0x17L, 9UL);
                    VECTOR(uint64_t, 8) l_2011 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xC0902CA02D78D56AL), 0xC0902CA02D78D56AL), 0xC0902CA02D78D56AL, 18446744073709551615UL, 0xC0902CA02D78D56AL);
                    int8_t *l_2012 = &l_1971;
                    int16_t *l_2025 = (void*)0;
                    int16_t *l_2026 = (void*)0;
                    int16_t *l_2027 = (void*)0;
                    int16_t *l_2028[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    uint16_t l_2047 = 0x5A77L;
                    int32_t *l_2048 = &p_2547->g_428[0];
                    uint64_t l_2064 = 1UL;
                    int32_t l_2065 = (-5L);
                    VECTOR(int64_t, 16) l_2072 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x2ECB31FE9B5135A2L), 0x2ECB31FE9B5135A2L), 0x2ECB31FE9B5135A2L, 0L, 0x2ECB31FE9B5135A2L, (VECTOR(int64_t, 2))(0L, 0x2ECB31FE9B5135A2L), (VECTOR(int64_t, 2))(0L, 0x2ECB31FE9B5135A2L), 0L, 0x2ECB31FE9B5135A2L, 0L, 0x2ECB31FE9B5135A2L);
                    VECTOR(int64_t, 4) l_2075 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L);
                    int16_t l_2094 = 0x2CA3L;
                    int i;
                    for (l_1885 = 0; (l_1885 == 6); l_1885++)
                    { /* block id: 868 */
                        uint16_t l_1956 = 0x940EL;
                        int64_t *l_1981[1];
                        int32_t **l_1986 = (void*)0;
                        int32_t **l_1987 = &l_1843;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1981[i] = &l_1834;
                        l_1866 = (safe_mul_func_uint8_t_u_u((&p_2547->g_132 == (void*)0), (safe_sub_func_int64_t_s_s(((((((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))((safe_mod_func_uint64_t_u_u(((((safe_sub_func_uint32_t_u_u(l_1947, (safe_div_func_int8_t_s_s((((*l_1833) = (safe_sub_func_int32_t_s_s(((*l_1856) = (+l_1869)), (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((safe_sub_func_int8_t_s_s((((*l_1910) = (+(((*l_1841) = ((l_1956 ^ (l_1885 >= (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((l_1924.s2 && (safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(l_1971, ((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), (((VECTOR(int64_t, 8))((l_1865.s2 &= (p_2547->g_comm_values[p_2547->tid] = (((l_1980 != &p_2547->g_997) , l_1956) | l_1956))), ((VECTOR(int64_t, 4))((-1L))), 0L, 0x231BE3F04877228CL, 0x0CB6F3BFE32FE1A1L)).s1 >= l_1956))), 13)) , 0UL), 0xDF3AL)), p_2547->g_1157.s7)) | l_1888))), 1)) >= p_2547->g_765.x), l_1982)), 5))), p_2547->g_195.s6)) || l_1921), p_2547->g_1157.s4)), 7)))) <= GROUP_DIVERGE(2, 1))) | l_1983))) & p_2547->g_1916[8]), p_2547->g_44.s0)) > l_1924.s9), l_1956, ((VECTOR(uint16_t, 4))(0x4D3BL)), 0x406BL, 0xE6C1L)).s6, l_1947))))) != 0x344EL), 0x14L)))) <= 1L) <= 0x6DB65A2F4C333C1AL) >= 1UL), p_2547->g_780[7])), ((VECTOR(uint64_t, 8))(0x83DCE4DB0985CDAEL)), 0UL, 0xADF5A984FCC0D0A2L, 18446744073709551613UL, 0UL, l_1956, 1UL, 5UL)).sf0)).hi > 18446744073709551615UL) == (**p_2547->g_1196)) | p_2547->g_792.y) <= 0x0E17L) && 0xA30C3C7EL) == l_1984), 0x4BD10398B69F1DDAL))));
                        (*l_1987) = l_1985;
                    }
                    if ((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 8))((-9L), (-1L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x015FL, 0x3153L)).yyyy)), 0x612BL, (-9L))).hi))).lo)).hi == ((safe_unary_minus_func_int16_t_s((((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((*l_1910) = ((VECTOR(int8_t, 4))(l_1995.s4133)).w), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_2547->g_1996.s4fd6f1001c8258af)).sf4)).odd)), (p_2547->g_1908.y = p_2547->g_85[0][1]))), 0)) , ((VECTOR(int32_t, 16))((-3L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((*l_1842) = (safe_mod_func_int64_t_s_s((((+(safe_div_func_int16_t_s_s((*l_1985), ((0x0FL < (((VECTOR(int16_t, 4))(p_2547->g_2005.s749b)).z && (safe_add_func_int32_t_s_s((*l_1840), ((safe_mul_func_uint8_t_u_u((*l_1985), (p_2547->g_1616 &= ((VECTOR(uint8_t, 8))(255UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_2010.s40)))).xxyy)), 8UL, 255UL, 4UL)).s5))) & ((VECTOR(uint64_t, 16))(l_2011.s6546712263405144)).sf))))) | ((GROUP_DIVERGE(0, 1) | (l_2012 != (((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 4))((l_1924.s5 || (((*l_1833) = ((((((*l_21) |= 0xC0912D41C49DF705L) > (safe_div_func_int32_t_s_s((~(+((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_2015.yyyxyyyy)).odd)).lo)), 0x5DA4L, 1L)).zwywxwzwyzzxxxyy))), ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(l_2016.yxxy)).odd, ((VECTOR(uint16_t, 16))(6UL, (safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((((((VECTOR(int64_t, 2))(5L, 0L)).even && (l_1899 = (((void*)0 != p_2547->g_2021) , l_1899))) != l_2010.s7) , 0x2190L) != (*l_1985)), (*l_1840))), 0)), ((VECTOR(uint16_t, 4))(0UL)), 0xDD94L, 2UL, ((VECTOR(uint16_t, 2))(0x4F32L)), 65529UL, 0xD195L, l_2016.y, 65532UL, 0x5D53L, 65526UL)).sc5))).yyxyyyyyyyxyyxxx))).sb)), l_2011.s1))) == 1UL) , l_2024) == &p_2547->g_191)) | 0x4280L)), 1L, 0L, 0x5943DF4CL)), ((VECTOR(uint32_t, 4))(4294967288UL))))).y , (void*)0))) <= l_2010.s6))))) < 1UL) , p_2547->g_1080.y), p_2547->g_220.sc))) < 2L), 6)), 0)), ((VECTOR(int32_t, 4))((-1L))), 0x4778C19EL, 1L, (-1L))))), (-1L), (-3L), 1L, ((VECTOR(int32_t, 2))((-1L))), 1L, 1L)).s8) , (*l_1985)))) ^ l_1924.s5)))
                    { /* block id: 885 */
                        VECTOR(uint8_t, 16) l_2041 = (VECTOR(uint8_t, 16))(0x07L, (VECTOR(uint8_t, 4))(0x07L, (VECTOR(uint8_t, 2))(0x07L, 1UL), 1UL), 1UL, 0x07L, 1UL, (VECTOR(uint8_t, 2))(0x07L, 1UL), (VECTOR(uint8_t, 2))(0x07L, 1UL), 0x07L, 1UL, 0x07L, 1UL);
                        uint32_t *l_2049 = (void*)0;
                        uint32_t *l_2050[2];
                        int32_t **l_2052 = &l_1841;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_2050[i] = (void*)0;
                        (*l_1856) = (safe_sub_func_int16_t_s_s(((*l_1833) = (safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((((l_2051 &= ((((((((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),VECTOR(int64_t, 8),((VECTOR(int64_t, 4))(1L, (-4L), 0x70E9A398A80562B3L, 5L)).zzzwxwwz, ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 2))(p_2547->g_2035.yx)).xxyy, (int64_t)(((((safe_mod_func_int8_t_s_s((((l_2016.x , (*p_2547->g_390)) , (!(safe_add_func_int64_t_s_s((l_1885 , (l_1899 = (((VECTOR(int8_t, 2))(1L, 0x58L)).lo , ((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(0x0BL, p_2547->g_201, ((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 8))(p_2547->g_2040.s72373075)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(9UL, 0UL)), ((VECTOR(uint8_t, 4))(l_2041.s6e1c)), 248UL, 4UL)).s0375507515015571, ((VECTOR(uint8_t, 4))(0x2EL, (safe_div_func_uint8_t_u_u(l_2041.sa, (*l_1985))), 0UL, 0x64L)).xzzwzwyxzyxzzxwx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_2547->g_2044.s6332)))).yyxzxwxyzzyyxzzw))))).hi, ((VECTOR(uint8_t, 16))(253UL, l_1983, 1UL, 0x1EL, ((VECTOR(uint8_t, 2))(p_2547->g_2045.xz)), 0x03L, (p_2547->g_2044.s0 = (l_2046 > (*l_1837))), ((VECTOR(uint8_t, 8))(0x70L)))).odd))).even)).xzzzyxyy)), ((VECTOR(uint8_t, 8))(253UL))))), ((VECTOR(uint8_t, 4))(0xB6L)), 0x95L, 0xCBL)))).s7 <= p_2547->g_1157.s1) & 0x67F5A0BEL)))), (-1L))))) ^ l_2016.x), p_2547->g_792.y)) < (*l_1853)) <= 0L) != (-4L)) , l_2047)))).zzyxxzyz, ((VECTOR(int64_t, 8))(1L))))).s62, ((VECTOR(int64_t, 2))(8L))))).xxxxyxxyxxxyxxxy, (int64_t)l_2041.s6))).s1 | l_2016.x) || 5L) , l_2048) == &p_2547->g_80[0][3]) == 0xB7C4L) , p_2547->g_2005.s4)) , p_2547->g_1387.s5) , 0x5343C9068DF9AE75L) != p_2547->g_comm_values[p_2547->tid]) > (*l_1985)), (*l_1846))), p_2547->g_1162.s3))), (*l_1846)));
                        (*l_2052) = l_2049;
                        l_2065 ^= (safe_unary_minus_func_int8_t_s((p_2547->g_792.y && (((((*l_1985) | ((0x58L > (p_2547->g_2040.s1 = 0UL)) != (p_2547->g_1881.x < ((*l_1985) , (p_2547->g_2044.s1 = (safe_mod_func_uint32_t_u_u((*p_2547->g_1197), (((safe_mul_func_int16_t_s_s((((*l_1985) != (((safe_lshift_func_int16_t_s_u(((*l_1833) = 0x518CL), (*l_1853))) && l_1984) ^ l_2064)) & 0x52332297L), (*l_2048))) && 1L) & (*l_2048))))))))) & 2UL) ^ l_2016.y) != p_2547->g_813.sd))));
                    }
                    else
                    { /* block id: 896 */
                        VECTOR(int64_t, 4) l_2076 = (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 0x236AFFF2BE411DA3L), 0x236AFFF2BE411DA3L);
                        uint16_t l_2077 = 65535UL;
                        VECTOR(int64_t, 4) l_2081 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x505272729E20510CL), 0x505272729E20510CL);
                        int64_t *l_2095 = (void*)0;
                        int64_t *l_2096 = (void*)0;
                        int64_t *l_2097 = (void*)0;
                        int32_t l_2098 = (-1L);
                        int8_t l_2099 = (-6L);
                        int i;
                        l_2048 = ((*l_2066) = (((*p_2547->g_175) , (l_2066 != (p_2547->g_765.y , &l_2048))) , &l_1845));
                        atomic_xor(&p_2547->g_atomic_reduction[get_linear_group_id()], ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(p_2547->g_2067.xz)).yxyx, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(1L, ((*l_1856) ^= (+(*l_2048))), (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 8))((safe_mul_func_uint8_t_u_u((0x7AL < p_2547->g_145), ((((l_2098 = ((*l_1858) = ((((VECTOR(int64_t, 8))(3L, 0x5DF3E5404E3BB2D7L, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 2))(l_2072.s52)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))((-1L), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 8))(p_2547->g_2073.sc6a5ad9b)).lo, ((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 8))(l_2074.seb63b4b6)).even, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_2075.zy)).xxyx)))))))).ywzwxxyxzzyyzyxw)).s7c))), (-1L), 0L)), ((VECTOR(int64_t, 2))(l_2076.wz)), 0x3F337585A87557A6L)).odd)).lo))), l_2077, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(l_2078.sa9d1dce0155ab8a1)).scc, ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_2547->g_2079.yy)).yyyyxyyy)).s71)).xyxyxxyy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 4))((*p_2547->g_390), (~(*l_1985)), 0xF66C01BCL, 5UL)).zxwzwzzz, ((VECTOR(uint32_t, 4))(p_2547->g_2080.s5655)).wwzxwwxw))).odd)).xxzxyywx))).s13, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_2081.yx)).xyxy)).yzyyxwzyywxwwyyy)).s2e)).yyyy)).lo))))), 0x22909AFDC0B5CB70L)).s5 < (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 4))(l_2090.xyzw)), ((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 8))(p_2547->g_2091.s19a53776))))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_2547->g_2092.se9a9)).ywwyxzyyxyzzyzyx)).sc490)).zxyyzxzw))).s77, ((VECTOR(uint16_t, 2))(p_2547->g_2093.yy))))).xxyxyxyxyyxxxxxy))).odd))).hi)))))).y, ((*l_1985) != ((((void*)0 == p_2547->g_390) != p_2547->g_226.s6) ^ p_2547->g_538.w)))), (*l_2048))), (*l_2048))), FAKE_DIVERGE(p_2547->local_0_offset, get_local_id(0), 10)))) , l_2094))) < l_2099) < (*l_1985)) , p_2547->g_1908.x))), 0xA9E9D3494672FE38L, 0UL, 18446744073709551615UL, l_2100, (**l_2066), 0x327E58C0A7166938L, 0xB72C1985A28A2CF3L)).s43))).even, 0x30EF40D5FFFDDE3FL)), ((VECTOR(int32_t, 2))(0x2F73F0B1L)), ((VECTOR(int32_t, 2))((-1L))), 1L)).lo)).xzxzyyxy, ((VECTOR(int32_t, 8))(0x11696472L))))).odd, ((VECTOR(int32_t, 4))(0x282B4F59L))))).yyxxyzzyyzwwwxwz)).s7);
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_2547->v_collective += p_2547->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                    return p_2547->g_2073.se;
                }
                (*l_1985) = ((p_2547->g_41 = l_2101[3]) != (GROUP_DIVERGE(1, 1) , l_2103[2][4][2]));
            }
        }
        for (p_2547->g_239 = 5; (p_2547->g_239 >= 17); ++p_2547->g_239)
        { /* block id: 912 */
            uint32_t l_2119 = 8UL;
            int32_t l_2123 = 0x04E7ED14L;
            union U0 **l_2126[10] = {&p_2547->g_1609,&p_2547->g_1609,&p_2547->g_1609,&p_2547->g_1609,&p_2547->g_1609,&p_2547->g_1609,&p_2547->g_1609,&p_2547->g_1609,&p_2547->g_1609,&p_2547->g_1609};
            int i;
            (*l_1858) ^= 0x0EB043C0L;
            (*l_1840) = (safe_rshift_func_uint8_t_u_u((((safe_div_func_int8_t_s_s((0xBAL && ((**p_2547->g_1196) == ((0xAAE3007EC2C2CA27L & (((*l_21)++) ^ (safe_rshift_func_int16_t_s_s((((VECTOR(uint8_t, 4))(p_2547->g_2114.wzzz)).y && 255UL), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_2115.s62)), 0x4A6BL, 0x76FCL)))).wyzywwzxxxzwyyyx, ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 4))(p_2547->g_2116.scdaa)).xxxwyxwyyyzyzxzx, ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(l_2117.s35b223bc)).s0237647741701403, ((VECTOR(int16_t, 2))(l_2118.yy)).xxxxxyyyyyyxyyyx, ((VECTOR(int16_t, 2))(0x1A70L, 0x308BL)).xyxyxyxyyxxxxyxy))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 8))(l_2119, 0x3776L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0L, (-10L))), (-1L), (-4L))), (-1L), (-1L))).even, ((VECTOR(int16_t, 2))(0x70BDL, (-1L))).yxxy, ((VECTOR(int16_t, 4))((safe_add_func_int64_t_s_s((safe_unary_minus_func_uint8_t_u((l_2123 = p_2547->g_44.s7))), ((*l_1897) == (void*)0))), ((VECTOR(int16_t, 2))(0x3F0FL, 0x284AL)), 0x643DL))))).lo)).yxxxxyyyxxyyyyyx)))))).hi)).s7)))) != (safe_mul_func_uint16_t_u_u(((p_2547->g_2127[0] = &p_2547->g_96) != (void*)0), l_2119))))), p_2547->g_743.x)) , l_2119) > (*l_1860)), p_2547->g_33.x));
        }
        (*l_2128) = (l_1857 = &l_1845);
    }
    else
    { /* block id: 921 */
        int32_t *l_2129 = &l_1868[2];
        int32_t *l_2130[10][6] = {{&l_1859,&p_2547->g_80[3][0],(void*)0,&p_2547->g_85[0][4],&l_1861,(void*)0},{&l_1859,&p_2547->g_80[3][0],(void*)0,&p_2547->g_85[0][4],&l_1861,(void*)0},{&l_1859,&p_2547->g_80[3][0],(void*)0,&p_2547->g_85[0][4],&l_1861,(void*)0},{&l_1859,&p_2547->g_80[3][0],(void*)0,&p_2547->g_85[0][4],&l_1861,(void*)0},{&l_1859,&p_2547->g_80[3][0],(void*)0,&p_2547->g_85[0][4],&l_1861,(void*)0},{&l_1859,&p_2547->g_80[3][0],(void*)0,&p_2547->g_85[0][4],&l_1861,(void*)0},{&l_1859,&p_2547->g_80[3][0],(void*)0,&p_2547->g_85[0][4],&l_1861,(void*)0},{&l_1859,&p_2547->g_80[3][0],(void*)0,&p_2547->g_85[0][4],&l_1861,(void*)0},{&l_1859,&p_2547->g_80[3][0],(void*)0,&p_2547->g_85[0][4],&l_1861,(void*)0},{&l_1859,&p_2547->g_80[3][0],(void*)0,&p_2547->g_85[0][4],&l_1861,(void*)0}};
        uint16_t l_2131 = 2UL;
        int32_t l_2202 = 9L;
        int32_t *l_2254 = &p_2547->g_780[5];
        int32_t *l_2255[2];
        int16_t l_2272 = 0x71EFL;
        int16_t l_2298[1];
        uint32_t l_2299 = 0x8D15B3E7L;
        uint32_t l_2303 = 0xB8AAC31FL;
        uint64_t l_2315[10][2][9] = {{{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL},{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL}},{{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL},{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL}},{{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL},{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL}},{{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL},{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL}},{{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL},{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL}},{{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL},{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL}},{{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL},{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL}},{{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL},{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL}},{{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL},{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL}},{{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL},{0UL,0UL,0xA55D8DC9EDC7BE29L,0xEB74FCFE3E45A50AL,0xA8CBE89B60C87BC3L,0x1F75F5DC1B845DCDL,1UL,0UL,1UL}}};
        int8_t *l_2325[4][2];
        int32_t *****l_2392 = &l_1980;
        int32_t ******l_2391 = &l_2392;
        uint8_t l_2425 = 255UL;
        uint16_t l_2427 = 0x4737L;
        VECTOR(uint64_t, 16) l_2494 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xD22956C94136476BL), 0xD22956C94136476BL), 0xD22956C94136476BL, 18446744073709551615UL, 0xD22956C94136476BL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xD22956C94136476BL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xD22956C94136476BL), 18446744073709551615UL, 0xD22956C94136476BL, 18446744073709551615UL, 0xD22956C94136476BL);
        union U0 *l_2501[2][8] = {{&p_2547->g_96,(void*)0,&p_2547->g_96,(void*)0,&p_2547->g_96,&p_2547->g_96,(void*)0,&p_2547->g_96},{&p_2547->g_96,(void*)0,&p_2547->g_96,(void*)0,&p_2547->g_96,&p_2547->g_96,(void*)0,&p_2547->g_96}};
        int32_t l_2522 = (-7L);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2255[i] = &p_2547->g_780[5];
        for (i = 0; i < 1; i++)
            l_2298[i] = (-7L);
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_2325[i][j] = &l_1876;
        }
        l_2131--;
        for (p_2547->g_201 = 0; (p_2547->g_201 >= 11); ++p_2547->g_201)
        { /* block id: 925 */
            int32_t l_2170 = 0x54AD5061L;
            uint32_t l_2188 = 0xDCF11DCEL;
            int32_t l_2203 = (-10L);
            uint32_t l_2204 = 4294967295UL;
            VECTOR(int8_t, 16) l_2206 = (VECTOR(int8_t, 16))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x1AL), 0x1AL), 0x1AL, (-10L), 0x1AL, (VECTOR(int8_t, 2))((-10L), 0x1AL), (VECTOR(int8_t, 2))((-10L), 0x1AL), (-10L), 0x1AL, (-10L), 0x1AL);
            uint32_t l_2211 = 0xA6328E51L;
            int64_t ***l_2237 = &p_2547->g_918;
            int32_t ***l_2240[9] = {&p_2547->g_234,&p_2547->g_234,&p_2547->g_234,&p_2547->g_234,&p_2547->g_234,&p_2547->g_234,&p_2547->g_234,&p_2547->g_234,&p_2547->g_234};
            uint8_t l_2242 = 255UL;
            VECTOR(int8_t, 8) l_2267 = (VECTOR(int8_t, 8))(0x59L, (VECTOR(int8_t, 4))(0x59L, (VECTOR(int8_t, 2))(0x59L, 0L), 0L), 0L, 0x59L, 0L);
            uint32_t l_2268[3];
            VECTOR(uint32_t, 4) l_2275 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xEB43BFF8L), 0xEB43BFF8L);
            uint16_t l_2279 = 0x09E0L;
            int64_t l_2301 = 0L;
            int32_t l_2305 = 0x56801C85L;
            int i;
            for (i = 0; i < 3; i++)
                l_2268[i] = 0x99B50DF9L;
            for (l_1871 = (-18); (l_1871 < 4); l_1871 = safe_add_func_uint64_t_u_u(l_1871, 3))
            { /* block id: 928 */
                int32_t l_2169[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int32_t *l_2175 = &p_2547->g_780[7];
                uint8_t *l_2205 = &p_2547->g_1616;
                int32_t ***l_2241 = &p_2547->g_234;
                int32_t l_2245 = (-7L);
                uint32_t l_2260 = 0x08D7E968L;
                int32_t *l_2261 = (void*)0;
                uint16_t l_2300 = 65528UL;
                int i;
                if ((atomic_inc(&p_2547->g_atomic_input[42 * get_linear_group_id() + 5]) == 5))
                { /* block id: 930 */
                    VECTOR(int32_t, 8) l_2138 = (VECTOR(int32_t, 8))(0x17039B3CL, (VECTOR(int32_t, 4))(0x17039B3CL, (VECTOR(int32_t, 2))(0x17039B3CL, 0L), 0L), 0L, 0x17039B3CL, 0L);
                    VECTOR(int32_t, 16) l_2139 = (VECTOR(int32_t, 16))(0x4A094353L, (VECTOR(int32_t, 4))(0x4A094353L, (VECTOR(int32_t, 2))(0x4A094353L, 1L), 1L), 1L, 0x4A094353L, 1L, (VECTOR(int32_t, 2))(0x4A094353L, 1L), (VECTOR(int32_t, 2))(0x4A094353L, 1L), 0x4A094353L, 1L, 0x4A094353L, 1L);
                    VECTOR(int32_t, 2) l_2140 = (VECTOR(int32_t, 2))(0x2BCA97DCL, 0x1A0C4472L);
                    uint32_t l_2141 = 4294967295UL;
                    int32_t l_2142 = (-1L);
                    uint64_t l_2152 = 2UL;
                    int8_t l_2153 = 0x51L;
                    int64_t l_2154 = (-5L);
                    VECTOR(uint16_t, 8) l_2155 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
                    uint8_t l_2156 = 255UL;
                    VECTOR(int32_t, 4) l_2157 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L);
                    uint64_t l_2158 = 18446744073709551615UL;
                    VECTOR(int32_t, 16) l_2159 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4FFDCA0DL), 0x4FFDCA0DL), 0x4FFDCA0DL, (-1L), 0x4FFDCA0DL, (VECTOR(int32_t, 2))((-1L), 0x4FFDCA0DL), (VECTOR(int32_t, 2))((-1L), 0x4FFDCA0DL), (-1L), 0x4FFDCA0DL, (-1L), 0x4FFDCA0DL);
                    VECTOR(int32_t, 16) l_2160 = (VECTOR(int32_t, 16))(0x30B98E63L, (VECTOR(int32_t, 4))(0x30B98E63L, (VECTOR(int32_t, 2))(0x30B98E63L, 0L), 0L), 0L, 0x30B98E63L, 0L, (VECTOR(int32_t, 2))(0x30B98E63L, 0L), (VECTOR(int32_t, 2))(0x30B98E63L, 0L), 0x30B98E63L, 0L, 0x30B98E63L, 0L);
                    uint16_t l_2161 = 0x71BFL;
                    uint32_t l_2162 = 0xABB25CC4L;
                    VECTOR(int32_t, 8) l_2163 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
                    VECTOR(int32_t, 4) l_2164 = (VECTOR(int32_t, 4))(0x381DE11EL, (VECTOR(int32_t, 2))(0x381DE11EL, 0x29909DE1L), 0x29909DE1L);
                    VECTOR(int32_t, 4) l_2165 = (VECTOR(int32_t, 4))(0x3B2D54AEL, (VECTOR(int32_t, 2))(0x3B2D54AEL, 9L), 9L);
                    VECTOR(int32_t, 16) l_2166 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3CE682B7L), 0x3CE682B7L), 0x3CE682B7L, (-1L), 0x3CE682B7L, (VECTOR(int32_t, 2))((-1L), 0x3CE682B7L), (VECTOR(int32_t, 2))((-1L), 0x3CE682B7L), (-1L), 0x3CE682B7L, (-1L), 0x3CE682B7L);
                    int64_t l_2167 = 1L;
                    int32_t l_2168[1][4];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_2168[i][j] = 5L;
                    }
                    l_2142 = (l_2141 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_2138.s10775562)).s02, ((VECTOR(int32_t, 4))(l_2139.s944d)).lo))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_2140.yy)), 0x21735952L, 0x2AC0FC27L)).xzzwzwzz)).even)), 0x5FC28FB8L, 5L)).s1);
                    for (l_2140.x = 0; (l_2140.x >= 0); l_2140.x = safe_add_func_int32_t_s_s(l_2140.x, 5))
                    { /* block id: 935 */
                        uint32_t l_2145 = 7UL;
                        int32_t l_2148 = 0x30834554L;
                        int32_t *l_2149[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t *l_2150 = &l_2148;
                        int32_t *l_2151 = (void*)0;
                        int i;
                        --l_2145;
                        l_2148 &= 0x33BDE1C3L;
                        l_2150 = l_2149[4];
                        l_2151 = (void*)0;
                    }
                    l_2167 ^= ((VECTOR(int32_t, 16))(1L, 0x048384B9L, l_2152, (-1L), 0L, 6L, (l_2153 ^= 0x3A53AB1CL), (l_2154 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-4L), 0x00D73766L)).xyxyyyxx)).s6), 0x363832A6L, 0x7CCA68B8L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0L, (l_2156 = l_2155.s0), 0x2E498C40L, 9L)), 0x4D6524E6L, 0x63819C3EL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(8L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(l_2157.xwyyyzwwxyzzzyxx)).sb0, (int32_t)l_2158))), 1L)), ((VECTOR(int32_t, 2))(l_2159.sc7)).xxyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_2160.se819)), 0x7D5A5D85L, 0x5931E9AAL, l_2161, ((VECTOR(int32_t, 4))(l_2162, 0x709BCC5FL, (-10L), (-1L))), ((VECTOR(int32_t, 2))((-2L), 1L)), 0x0A93BE6DL, (-1L), 4L)).s49)).yyyy))).xzxyywxwzyzwyxzx)).even)), 1L, 6L)).s7c95)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_2163.s16420156)).s34, ((VECTOR(int32_t, 2))(l_2164.xw)), ((VECTOR(int32_t, 16))(l_2165.xxzzywyxxyzwyzxz)).s46))).yyxy)).even))).yxxxyyyy)).s4, 0x5753BC5EL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_2166.s81e0)).hi)), 0x3289E33AL, 0x037AB378L)).sa;
                    l_2168[0][2] ^= 0x172C6083L;
                    unsigned int result = 0;
                    result += l_2138.s7;
                    result += l_2138.s6;
                    result += l_2138.s5;
                    result += l_2138.s4;
                    result += l_2138.s3;
                    result += l_2138.s2;
                    result += l_2138.s1;
                    result += l_2138.s0;
                    result += l_2139.sf;
                    result += l_2139.se;
                    result += l_2139.sd;
                    result += l_2139.sc;
                    result += l_2139.sb;
                    result += l_2139.sa;
                    result += l_2139.s9;
                    result += l_2139.s8;
                    result += l_2139.s7;
                    result += l_2139.s6;
                    result += l_2139.s5;
                    result += l_2139.s4;
                    result += l_2139.s3;
                    result += l_2139.s2;
                    result += l_2139.s1;
                    result += l_2139.s0;
                    result += l_2140.y;
                    result += l_2140.x;
                    result += l_2141;
                    result += l_2142;
                    result += l_2152;
                    result += l_2153;
                    result += l_2154;
                    result += l_2155.s7;
                    result += l_2155.s6;
                    result += l_2155.s5;
                    result += l_2155.s4;
                    result += l_2155.s3;
                    result += l_2155.s2;
                    result += l_2155.s1;
                    result += l_2155.s0;
                    result += l_2156;
                    result += l_2157.w;
                    result += l_2157.z;
                    result += l_2157.y;
                    result += l_2157.x;
                    result += l_2158;
                    result += l_2159.sf;
                    result += l_2159.se;
                    result += l_2159.sd;
                    result += l_2159.sc;
                    result += l_2159.sb;
                    result += l_2159.sa;
                    result += l_2159.s9;
                    result += l_2159.s8;
                    result += l_2159.s7;
                    result += l_2159.s6;
                    result += l_2159.s5;
                    result += l_2159.s4;
                    result += l_2159.s3;
                    result += l_2159.s2;
                    result += l_2159.s1;
                    result += l_2159.s0;
                    result += l_2160.sf;
                    result += l_2160.se;
                    result += l_2160.sd;
                    result += l_2160.sc;
                    result += l_2160.sb;
                    result += l_2160.sa;
                    result += l_2160.s9;
                    result += l_2160.s8;
                    result += l_2160.s7;
                    result += l_2160.s6;
                    result += l_2160.s5;
                    result += l_2160.s4;
                    result += l_2160.s3;
                    result += l_2160.s2;
                    result += l_2160.s1;
                    result += l_2160.s0;
                    result += l_2161;
                    result += l_2162;
                    result += l_2163.s7;
                    result += l_2163.s6;
                    result += l_2163.s5;
                    result += l_2163.s4;
                    result += l_2163.s3;
                    result += l_2163.s2;
                    result += l_2163.s1;
                    result += l_2163.s0;
                    result += l_2164.w;
                    result += l_2164.z;
                    result += l_2164.y;
                    result += l_2164.x;
                    result += l_2165.w;
                    result += l_2165.z;
                    result += l_2165.y;
                    result += l_2165.x;
                    result += l_2166.sf;
                    result += l_2166.se;
                    result += l_2166.sd;
                    result += l_2166.sc;
                    result += l_2166.sb;
                    result += l_2166.sa;
                    result += l_2166.s9;
                    result += l_2166.s8;
                    result += l_2166.s7;
                    result += l_2166.s6;
                    result += l_2166.s5;
                    result += l_2166.s4;
                    result += l_2166.s3;
                    result += l_2166.s2;
                    result += l_2166.s1;
                    result += l_2166.s0;
                    result += l_2167;
                    int l_2168_i0, l_2168_i1;
                    for (l_2168_i0 = 0; l_2168_i0 < 1; l_2168_i0++) {
                        for (l_2168_i1 = 0; l_2168_i1 < 4; l_2168_i1++) {
                            result += l_2168[l_2168_i0][l_2168_i1];
                        }
                    }
                    atomic_add(&p_2547->g_special_values[42 * get_linear_group_id() + 5], result);
                }
                else
                { /* block id: 946 */
                    (1 + 1);
                }
                l_2170 = ((*l_2129) = (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))((((-1L) <= ((((VECTOR(int16_t, 16))(7L, 1L, ((*l_1833) = l_2169[4]), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))((l_2170 == (safe_sub_func_int64_t_s_s((l_2169[4] < (safe_div_func_uint64_t_u_u((&l_21 == (void*)0), ((*l_21) = ((((((*l_1833) |= ((void*)0 != &p_2547->g_1196)) , (*p_2547->g_2021)) != l_2175) == 0x3CFD16796F2A707AL) || l_2169[2]))))), 0x4C4DEDE8C5322E21L))), 0x7721L, (-8L), (-1L))).even)))).hi, l_2169[7], ((VECTOR(int16_t, 8))(0x309FL)), 0x30BBL, 1L, (-1L))).s4 , 0x59B48B559934A11FL) || p_2547->g_2176)) | 0x72E5L), ((VECTOR(uint32_t, 2))(4294967295UL)), 2UL)), 1UL, ((VECTOR(uint32_t, 2))(0x46BCBFE4L)), 7UL)).s2154001004435127)).s2 && l_2177.y));
                if (((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 0x02A09EC2L)).yyxyxyyyxxxyyxyx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(8L, ((((safe_sub_func_int16_t_s_s(l_2170, (safe_rshift_func_uint8_t_u_u((!p_2547->g_1077.x), (((p_2547->g_586.x , (safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((*l_1833) ^= (((safe_lshift_func_int16_t_s_s((GROUP_DIVERGE(1, 1) != (*l_2129)), 8)) ^ (l_2188 & (safe_unary_minus_func_int64_t_s((safe_lshift_func_uint16_t_u_s(GROUP_DIVERGE(1, 1), (safe_div_func_uint8_t_u_u(255UL, (safe_mod_func_uint64_t_u_u((((*l_2205) &= (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))((0x67L == (((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_2547->local_1_offset, get_local_id(1), 10), 8)), p_2547->g_694)) <= (l_2203 |= (((l_2202 || l_1861) | l_2169[2]) > (-1L)))) || l_2169[5])), 0xFD45L, ((VECTOR(uint16_t, 2))(0x3FD8L)), 0x6B90L, ((VECTOR(uint16_t, 2))(0UL)), 8UL)).s0, 0x239DL, 0x1E82L, 0x9F75L)).xwzzyyxz, ((VECTOR(uint16_t, 8))(6UL))))).s1, l_2204))) < l_2169[2]), 0x3BEAAEC5CD81A29EL)))))))))) , l_2169[4])), 0xF2F8L)), l_2170))) & l_2206.sf) & l_2169[4]))))) == 0x21A4L) && 0x7023L) & (*l_2129)), l_2204, ((VECTOR(int32_t, 2))(1L)), p_2547->g_2207, (-3L), 0x38B52516L, l_2169[4], l_2170, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 4))(1L)))))), ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))((-3L)))))).s7349)).wwzywzzwwxwzxxwx))).s9)
                { /* block id: 957 */
                    uint16_t l_2210 = 65532UL;
                    union U0 l_2214[9] = {{0x5876FF13L},{0x5876FF13L},{0x5876FF13L},{0x5876FF13L},{0x5876FF13L},{0x5876FF13L},{0x5876FF13L},{0x5876FF13L},{0x5876FF13L}};
                    union U0 *l_2215 = &l_2214[8];
                    int32_t *****l_2225 = &l_1980;
                    int32_t ******l_2224 = &l_2225;
                    int8_t *l_2226 = (void*)0;
                    int8_t *l_2227[1];
                    int64_t ****l_2238 = &l_2237;
                    int32_t **l_2250 = (void*)0;
                    int32_t **l_2251 = &l_2175;
                    int32_t *l_2253 = &p_2547->g_780[7];
                    int32_t **l_2252[7][4] = {{&l_2253,(void*)0,&l_2253,&l_2253},{&l_2253,(void*)0,&l_2253,&l_2253},{&l_2253,(void*)0,&l_2253,&l_2253},{&l_2253,(void*)0,&l_2253,&l_2253},{&l_2253,(void*)0,&l_2253,&l_2253},{&l_2253,(void*)0,&l_2253,&l_2253},{&l_2253,(void*)0,&l_2253,&l_2253}};
                    uint16_t *l_2258 = (void*)0;
                    uint16_t *l_2259[3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_2227[i] = &l_1870;
                    for (i = 0; i < 3; i++)
                        l_2259[i] = &p_2547->g_575;
                    (*p_2547->g_1627) = (((safe_sub_func_uint64_t_u_u(l_2210, l_2211)) , l_2210) == (p_2547->g_442.s3 = (((!0x8901484DL) , ((*l_21)--)) , (2L == (((*l_2215) = func_35((l_2210 == ((((*l_2215) = l_2214[7]) , (((*l_2224) = ((safe_sub_func_int64_t_s_s((+(safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_2547->g_1224.z, ((safe_mod_func_uint32_t_u_u((((l_2170 != p_2547->g_223.x) == (-1L)) || l_2211), 5UL)) == 1UL))), 10))), l_2203)) , (void*)0)) == (void*)0)) == 0x0DL)), p_2547)) , 0x00L)))));
                    (*l_2129) = ((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))((safe_rshift_func_int8_t_s_s(((((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),VECTOR(int64_t, 8),((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(p_2547->g_2232.xx)))).xyyy)).xyxwywzzxxwzwzzz, (int64_t)(safe_mul_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((((*l_2238) = l_2237) == (p_2547->g_2239 = &p_2547->g_918)), ((VECTOR(int8_t, 2))((-1L), 7L)).even)) | (((*l_1833) &= ((l_2241 = l_2240[4]) != (*l_1980))) < l_2242)), ((l_1864 = (l_2260 = (safe_mul_func_uint8_t_u_u((l_2245 & (l_2246[0][2][2] && ((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(p_2547->g_2249.xwwy)).z, 5)) <= ((l_2254 = ((*l_2251) = (void*)0)) == (p_2547->g_2257 = (p_2547->g_2256[7][2][1] = l_2255[0])))))), 1L)))) && FAKE_DIVERGE(p_2547->group_0_offset, get_group_id(0), 10))))))).hi, ((VECTOR(int64_t, 8))((-1L))), ((VECTOR(int64_t, 8))(0L))))).s3 , (void*)0) != &p_2547->g_234), p_2547->g_80[0][6])), 18446744073709551615UL, GROUP_DIVERGE(2, 1), 0xB11853FCE0D8111BL, 0xD1839D2AF6540B6CL, ((VECTOR(uint64_t, 2))(0xAF592F1A61AA831EL)), 0xFA58E0C85AB6E29DL)).s5647715144413440)).s1d)).even, p_2547->g_792.x)) || p_2547->g_1881.y);
                    l_2130[4][5] = (l_2261 = &l_2202);
                }
                else
                { /* block id: 977 */
                    int32_t *l_2264[9] = {&l_2046,&l_2046,&l_2046,&l_2046,&l_2046,&l_2046,&l_2046,&l_2046,&l_2046};
                    int i;
                    for (l_2046 = (-5); (l_2046 > 1); l_2046++)
                    { /* block id: 980 */
                        int32_t *l_2265 = (void*)0;
                        l_2266 = (l_2265 = l_2264[6]);
                    }
                }
                l_2305 = ((((*l_2129) | ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0x45L, p_2547->g_1206.y, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x5DL, 0x3AL)), (-1L), (-1L), ((VECTOR(int8_t, 4))(l_2267.s1154)))).s6105653367647412)).s16)), (l_2268[2] , (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 2))(9L, 0x2E64L)).xyyyxxyy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(p_2547->g_2271.xxxyxyyy)).hi, (int16_t)l_2272))).odd)).yyyyxxxy))).s1741251331630041)).s2 < (safe_lshift_func_int8_t_s_s((((VECTOR(uint32_t, 16))(0UL, ((VECTOR(uint32_t, 2))(l_2275.zx)), ((safe_lshift_func_int16_t_s_u(l_2278, l_2279)) | (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(p_2547->g_780[7], ((*l_21)++))) != (safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s((((*l_1833) = (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((l_2177.x <= 0UL) < (*l_2129)), (*l_2129))), p_2547->g_2249.z))) > l_2169[4]), 1UL)) , (*p_2547->g_1197)) >= (**p_2547->g_1196)), l_2298[0])), l_2299)) & (**p_2547->g_1196)), p_2547->g_1916[7]))), p_2547->g_1162.s2))), 7UL, 0x174C5E53L, ((VECTOR(uint32_t, 2))(4294967294UL)), ((VECTOR(uint32_t, 2))(0x98AF5071L)), 0xCD0783F2L, ((VECTOR(uint32_t, 4))(0UL)), 4294967295UL)).s4 , 1L), 3))) >= l_2300), l_2301, ((VECTOR(int64_t, 2))((-1L))), ((VECTOR(int64_t, 8))(8L)), l_2302, (-1L), 0x200BEC78FD245C46L, 0L)).even)).s4, l_2303))), ((VECTOR(int8_t, 2))(0x76L)), (-2L))), p_2547->g_1013.w, p_2547->g_1616, ((VECTOR(int8_t, 4))((-6L))), 0x49L, 0x43L)).s2 || 0x52L) | (*p_2547->g_1197))) | p_2547->g_1553.y) && l_2304);
            }
        }
        for (l_2278 = 0; (l_2278 != 3); l_2278++)
        { /* block id: 992 */
            int8_t l_2313 = 0x79L;
            VECTOR(int64_t, 2) l_2323 = (VECTOR(int64_t, 2))(0x77C5CE53D25351D2L, (-1L));
            VECTOR(int64_t, 16) l_2324 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x7B4C36D2DF4143F0L), 0x7B4C36D2DF4143F0L), 0x7B4C36D2DF4143F0L, 1L, 0x7B4C36D2DF4143F0L, (VECTOR(int64_t, 2))(1L, 0x7B4C36D2DF4143F0L), (VECTOR(int64_t, 2))(1L, 0x7B4C36D2DF4143F0L), 1L, 0x7B4C36D2DF4143F0L, 1L, 0x7B4C36D2DF4143F0L);
            uint32_t *l_2327 = &l_1871;
            uint16_t l_2348 = 0x6610L;
            int32_t l_2349 = 0L;
            int32_t l_2351 = 0L;
            int32_t l_2352 = 0x0A124ACEL;
            int32_t l_2353 = 0x441ED088L;
            int32_t l_2354 = 1L;
            int32_t l_2355 = 0L;
            VECTOR(int32_t, 4) l_2356 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-10L)), (-10L));
            VECTOR(int32_t, 8) l_2375 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x5936DFB9L), 0x5936DFB9L), 0x5936DFB9L, (-10L), 0x5936DFB9L);
            uint16_t l_2426 = 65533UL;
            int32_t **l_2440 = (void*)0;
            int32_t l_2520[6] = {0L,0L,0L,0L,0L,0L};
            int64_t l_2523 = 0x11F559B0BFDE897DL;
            int i;
            for (l_1859 = (-14); (l_1859 == (-19)); --l_1859)
            { /* block id: 995 */
                int32_t **l_2311[1];
                int32_t ***l_2310 = &l_2311[0];
                int32_t l_2314[4][1][7] = {{{0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L}},{{0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L}},{{0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L}},{{0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L,0x5E73E0F7L}}};
                VECTOR(int64_t, 16) l_2318 = (VECTOR(int64_t, 16))(0x06807F23836165D9L, (VECTOR(int64_t, 4))(0x06807F23836165D9L, (VECTOR(int64_t, 2))(0x06807F23836165D9L, 0x18A2E49BD5E221AEL), 0x18A2E49BD5E221AEL), 0x18A2E49BD5E221AEL, 0x06807F23836165D9L, 0x18A2E49BD5E221AEL, (VECTOR(int64_t, 2))(0x06807F23836165D9L, 0x18A2E49BD5E221AEL), (VECTOR(int64_t, 2))(0x06807F23836165D9L, 0x18A2E49BD5E221AEL), 0x06807F23836165D9L, 0x18A2E49BD5E221AEL, 0x06807F23836165D9L, 0x18A2E49BD5E221AEL);
                VECTOR(int64_t, 16) l_2319 = (VECTOR(int64_t, 16))(0x3904BA5EB19805B7L, (VECTOR(int64_t, 4))(0x3904BA5EB19805B7L, (VECTOR(int64_t, 2))(0x3904BA5EB19805B7L, (-10L)), (-10L)), (-10L), 0x3904BA5EB19805B7L, (-10L), (VECTOR(int64_t, 2))(0x3904BA5EB19805B7L, (-10L)), (VECTOR(int64_t, 2))(0x3904BA5EB19805B7L, (-10L)), 0x3904BA5EB19805B7L, (-10L), 0x3904BA5EB19805B7L, (-10L));
                int32_t **l_2328 = &l_2130[4][5];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_2311[i] = (void*)0;
                (*l_2328) = func_49((((*l_2310) = &p_2547->g_2256[7][2][1]) == ((safe_unary_minus_func_uint16_t_u(FAKE_DIVERGE(p_2547->group_0_offset, get_group_id(0), 10))) , &p_2547->g_2256[1][0][1])), (l_2313 > ((VECTOR(uint16_t, 2))(65528UL, 8UL)).even), l_2314[2][0][2], func_49((l_2315[3][0][0] > ((~(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 16))(p_2547->g_2316.s5323565445305001)).se266, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_2547->g_2317.sc95a)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_2318.s32)).xyyyyxyxxxyyyyxx)))).sf4, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_2319.s2d1406aa8feb24f7)).s2035)).hi)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(p_2547->g_2320.s064f217653734104)))).s80))), (-6L), 0x0015C0067EEBB403L, (p_2547->g_1013.x && 0x28L), ((VECTOR(int64_t, 2))(5L, (-8L))), ((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x70F3AF7CC6D2BB8BL, (-2L))).yxxxxyxy)).odd, ((VECTOR(int64_t, 16))(p_2547->g_2321.yyxwwyxyxyzxxxyz)).sb208, ((VECTOR(int64_t, 2))(p_2547->g_2322.yy)).xyyy))), 0x7287E1DEE07BB626L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))((-8L), 0x46F5D5DDF56A5AE7L, ((VECTOR(int64_t, 2))(l_2323.yx)), 7L, ((VECTOR(int64_t, 2))(l_2324.sf6)), 0x0D94EA64009C529DL)).s1447253110573531)).sf1b6, ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(4L, 6L)).xyyxyxyxyyxyyyyy)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((void*)0 == l_2325[3][0]), (*l_2129), p_2547->g_2326, 0x6DCD2C9AL, ((VECTOR(int32_t, 4))(1L)))), ((VECTOR(int32_t, 4))((-4L))), 1L, ((VECTOR(int32_t, 2))(0x7805167FL)), 4L)).lo))), ((VECTOR(uint32_t, 8))(0UL))))).hi))))))).sc1))), 6L, l_2314[2][0][2], ((VECTOR(int64_t, 2))(0x56CC8EA6CF5F9AE1L)), 0x1F6469857E639CDDL, 0x4F472524A00C57ACL)), (-2L), ((VECTOR(int64_t, 2))(0x51A3EB0AF50D6B71L)), (-1L))).sd290))).x , 1UL)) ^ 1UL)), (**p_2547->g_1196), l_2319.sc, l_2327, p_2547), p_2547);
                (*l_2129) = (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((p_2547->g_2333 != (safe_rshift_func_uint8_t_u_s(1UL, 6))), l_2336)) && ((safe_sub_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_2341.s2f84)).wwzzzwxwyywzxwwy))))))).s9 || GROUP_DIVERGE(1, 1)) == l_2324.se), ((safe_rshift_func_int8_t_s_u((l_2349 ^= (+(safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(l_2348, (+((*l_2129) != ((l_2314[1][0][5] , l_2327) == (p_2547->g_2257 = l_2327)))))), (*l_2129))))), 0)) ^ 1L))), p_2547->g_145)) ^ l_2324.s4)), 6));
            }
            l_2357++;
            if ((atomic_inc(&p_2547->l_atomic_input[28]) == 2))
            { /* block id: 1004 */
                int32_t l_2360 = 0L;
                for (l_2360 = 29; (l_2360 < 17); l_2360 = safe_sub_func_uint32_t_u_u(l_2360, 5))
                { /* block id: 1007 */
                    uint32_t l_2363 = 0x98B515BEL;
                    int32_t *l_2364 = (void*)0;
                    l_2364 = (l_2363 , (void*)0);
                }
                unsigned int result = 0;
                result += l_2360;
                atomic_add(&p_2547->l_special_values[28], result);
            }
            else
            { /* block id: 1010 */
                (1 + 1);
            }
            if (((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(p_2547->g_2365.yzwywzwxywxxwxyy)).s88)).odd , (*l_1894)) == (void*)0))
            { /* block id: 1013 */
                int32_t **l_2366 = &p_2547->g_2256[7][0][2];
                int32_t l_2374[8][5] = {{1L,0x551E505AL,0x7668C36AL,0x40045C2EL,0x551E505AL},{1L,0x551E505AL,0x7668C36AL,0x40045C2EL,0x551E505AL},{1L,0x551E505AL,0x7668C36AL,0x40045C2EL,0x551E505AL},{1L,0x551E505AL,0x7668C36AL,0x40045C2EL,0x551E505AL},{1L,0x551E505AL,0x7668C36AL,0x40045C2EL,0x551E505AL},{1L,0x551E505AL,0x7668C36AL,0x40045C2EL,0x551E505AL},{1L,0x551E505AL,0x7668C36AL,0x40045C2EL,0x551E505AL},{1L,0x551E505AL,0x7668C36AL,0x40045C2EL,0x551E505AL}};
                uint64_t *l_2390 = &p_2547->g_1916[5];
                uint64_t *l_2393 = &p_2547->g_2394;
                int i, j;
                (*p_2547->g_2367) = l_2366;
                for (p_2547->g_1616 = (-17); (p_2547->g_1616 >= 6); p_2547->g_1616 = safe_add_func_uint16_t_u_u(p_2547->g_1616, 3))
                { /* block id: 1017 */
                    uint32_t l_2373 = 0UL;
                    int32_t l_2379 = 0x155D9E8BL;
                    for (l_2046 = 0; (l_2046 == (-7)); l_2046 = safe_sub_func_int16_t_s_s(l_2046, 8))
                    { /* block id: 1020 */
                        return l_2373;
                    }
                    if (l_2374[6][3])
                        break;
                    if (((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(l_2375.s5224506230520650)).s39a8, ((VECTOR(int32_t, 2))(p_2547->g_2376.s45)).yyyy))).w)
                    { /* block id: 1024 */
                        int32_t l_2377[3][10][8] = {{{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL}},{{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL}},{{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL},{0L,0L,0L,0L,0x261A38ACL,0L,0L,0x261A38ACL}}};
                        int32_t l_2378 = 0L;
                        int32_t l_2380 = 4L;
                        int32_t l_2381 = 0x5D948BB1L;
                        int32_t l_2382 = 0x3EEA0C71L;
                        int i, j, k;
                        if (l_2377[2][8][5])
                            break;
                        --l_2383;
                    }
                    else
                    { /* block id: 1027 */
                        if (l_2373)
                            break;
                        return l_2374[6][1];
                    }
                    return p_2547->g_607.sa;
                }
                (*l_2129) |= (safe_sub_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s((-4L), (~((((*l_2390) = FAKE_DIVERGE(p_2547->group_2_offset, get_group_id(2), 10)) , l_2391) == (((*l_2393)++) , &p_2547->g_1541))))) >= (+GROUP_DIVERGE(1, 1))), (!4L)));
            }
            else
            { /* block id: 1036 */
                VECTOR(int32_t, 2) l_2410 = (VECTOR(int32_t, 2))(0x4E66CD12L, 0x0DE59537L);
                int32_t l_2424 = 0x23D5A480L;
                uint64_t ****l_2429 = (void*)0;
                int32_t **l_2461[10][5][3] = {{{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0}},{{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0}},{{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0}},{{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0}},{{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0}},{{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0}},{{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0}},{{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0}},{{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0}},{{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0},{&p_2547->g_456,&p_2547->g_456,(void*)0}}};
                int8_t l_2470 = 0L;
                int64_t **l_2493 = &p_2547->g_919;
                int64_t l_2497 = (-2L);
                int32_t l_2498[6];
                int32_t ***l_2509 = &p_2547->g_2368;
                int32_t **l_2511 = &p_2547->g_2256[7][2][1];
                int32_t ***l_2510[1][10] = {{&l_2511,&l_2511,&l_2511,&l_2511,&l_2511,&l_2511,&l_2511,&l_2511,&l_2511,&l_2511}};
                uint8_t *l_2515 = (void*)0;
                uint8_t *l_2516 = (void*)0;
                uint8_t *l_2517[7] = {&p_2547->g_1616,&p_2547->g_1616,&p_2547->g_1616,&p_2547->g_1616,&p_2547->g_1616,&p_2547->g_1616,&p_2547->g_1616};
                uint16_t *l_2521[9][3][8] = {{{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131}},{{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131}},{{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131}},{{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131}},{{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131}},{{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131}},{{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131}},{{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131}},{{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131},{(void*)0,(void*)0,&l_2131,&p_2547->g_132,(void*)0,(void*)0,&l_2131,&l_2131}}};
                uint32_t *l_2524[3][8] = {{&p_2547->g_211,&p_2547->g_211,&p_2547->g_211,&p_2547->g_211,&p_2547->g_211,&p_2547->g_211,&p_2547->g_211,&p_2547->g_211},{&p_2547->g_211,&p_2547->g_211,&p_2547->g_211,&p_2547->g_211,&p_2547->g_211,&p_2547->g_211,&p_2547->g_211,&p_2547->g_211},{&p_2547->g_211,&p_2547->g_211,&p_2547->g_211,&p_2547->g_211,&p_2547->g_211,&p_2547->g_211,&p_2547->g_211,&p_2547->g_211}};
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_2498[i] = 1L;
                if ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(p_2547->g_2399.xwzz)).z, ((~(((VECTOR(int64_t, 4))(p_2547->g_2400.wxzx)).y ^ p_2547->g_2073.s5)) | ((void*)0 != &p_2547->g_2239)))))
                { /* block id: 1037 */
                    uint16_t l_2423 = 65535UL;
                    l_2428 |= (!((*l_2129) = (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x77127787E0A89082L, 1L)), 0x6FA0F8E9DC1FC044L, 0L)).x >= (~(-3L))), (l_2405 < ((safe_lshift_func_int8_t_s_s(((void*)0 != (*l_1932)), 7)) <= (((safe_lshift_func_uint8_t_u_u((((*p_2547->g_1197) ^ ((VECTOR(int32_t, 16))(l_2410.xyxxxxyyxyxxxxyx)).sc) , l_2313), (((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((safe_add_func_uint16_t_u_u(l_2356.w, 65527UL)) > (safe_mod_func_uint64_t_u_u(l_2423, l_2424))) , 0x6FL), l_2348)), 0x7B4BL)), 12)), p_2547->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2547->tid, 88))])) , l_2425) & l_2424))) != l_2355) , l_2426))))), l_2427))));
                    (*l_2129) &= (p_2547->g_428[0] < (&p_2547->g_785 != l_2429));
                }
                else
                { /* block id: 1041 */
                    uint8_t l_2432 = 255UL;
                    int32_t *l_2449 = (void*)0;
                    VECTOR(uint8_t, 16) l_2484 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 6UL), 6UL), 6UL, 0UL, 6UL, (VECTOR(uint8_t, 2))(0UL, 6UL), (VECTOR(uint8_t, 2))(0UL, 6UL), 0UL, 6UL, 0UL, 6UL);
                    int64_t *l_2491 = (void*)0;
                    int64_t *l_2492[4];
                    union U0 ***l_2496 = &l_2495;
                    uint8_t l_2499 = 0x07L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2492[i] = (void*)0;
                    if ((GROUP_DIVERGE(0, 1) <= (-8L)))
                    { /* block id: 1042 */
                        VECTOR(uint32_t, 4) l_2433 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL);
                        int64_t *l_2443 = &l_2304;
                        uint8_t *l_2444 = &l_2425;
                        uint8_t *l_2445 = &l_2336;
                        int i;
                        if (l_2354)
                            break;
                        (*l_2129) = (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))((l_2432 , ((((+l_2433.w) ^ (GROUP_DIVERGE(2, 1) , (safe_div_func_uint8_t_u_u(2UL, ((*l_2445) ^= ((*l_2444) = (safe_rshift_func_uint8_t_u_u((l_2424 != ((0x5695F3E1L ^ (1UL == ((*l_2443) ^= ((safe_mul_func_uint8_t_u_u((((VECTOR(uint32_t, 2))(5UL, 0xE6925434L)).lo >= (l_2440 == ((safe_lshift_func_int8_t_s_s((-1L), (l_2375.s6 <= l_2432))) , (*p_2547->g_997)))), 0x29L)) > GROUP_DIVERGE(0, 1))))) | FAKE_DIVERGE(p_2547->global_0_offset, get_global_id(0), 10))), l_2433.y)))))))) , &p_2547->g_391[1]) == &l_2405)), ((VECTOR(int16_t, 4))(0x7BBEL)), ((VECTOR(int16_t, 2))(0L)), 0L)).s2317023377006120, ((VECTOR(int16_t, 16))(0x19AFL)), ((VECTOR(int16_t, 16))(0x597BL))))).s4bca)).lo, ((VECTOR(int16_t, 2))(0x2684L))))).lo, l_2410.y));
                        l_2446--;
                        (*p_2547->g_2451) = l_2449;
                    }
                    else
                    { /* block id: 1050 */
                        uint8_t l_2452[5];
                        int32_t l_2471 = 0L;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_2452[i] = 255UL;
                        ++l_2452[2];
                        atomic_max(&p_2547->g_atomic_reduction[get_linear_group_id()], (((safe_mod_func_uint8_t_u_u(l_2452[0], ((*l_2129) & ((((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x1662L, 0L)))).yyxyyxxy)).s7 ^ p_2547->g_2459) & ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_2460.s06473473)).s07)).even) , l_2461[2][4][1]) != ((safe_mul_func_int8_t_s_s(p_2547->g_1002, (((((((safe_mul_func_int16_t_s_s((((-4L) || (safe_div_func_uint64_t_u_u(0xA0683424CC81029BL, ((*l_21) &= ((safe_rshift_func_int8_t_s_u(0x28L, l_2426)) & 0x1B82B49F38A1D402L))))) <= l_2452[2]), 0x0F11L)) < 255UL) && (*p_2547->g_1197)) , l_2470) , p_2547->g_792.x) || (*l_2129)) == p_2547->g_2316.s2))) , l_2440))))) , FAKE_DIVERGE(p_2547->local_0_offset, get_local_id(0), 10)) <= 0x47A73654L));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_2547->v_collective += p_2547->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        l_2473++;
                        (*p_2547->g_2478) = p_2547->g_2476[3];
                    }
                    l_2499 |= (((p_2547->g_383.x && ((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_2547->g_2483.xyyy)).wwwyyxxzwyyxzxwx)).even, ((VECTOR(uint8_t, 2))(l_2484.sab)).xyyxyyyx))).even))).z ^ (safe_mul_func_int8_t_s_s(p_2547->g_211, (safe_add_func_int64_t_s_s(((safe_add_func_int16_t_s_s((((0x7A61C9BB777ADC41L <= (p_2547->g_2035.w = (p_2547->g_2320.s8 = (*l_2129)))) <= (~(((void*)0 != l_2493) != p_2547->g_743.y))) && (((*l_21) = ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_2494.s2a)))).hi) , (((*l_2496) = l_2495) == &p_2547->g_2127[0]))), 0L)) != 6L), l_2497))))), p_2547->g_1082.z)) >= p_2547->g_99.z), l_2356.x)) , 252UL)) ^ l_2498[0]) ^ (*p_2547->g_1197));
                }
                (*p_2547->g_1422) = l_2525[0][2][1];
                for (l_2357 = 0; (l_2357 > 14); ++l_2357)
                { /* block id: 1075 */
                    union U0 *l_2529 = &p_2547->g_96;
                    int32_t l_2530 = 1L;
                    VECTOR(uint8_t, 2) l_2535 = (VECTOR(uint8_t, 2))(0xEEL, 0UL);
                    uint32_t *l_2539 = &l_2405;
                    uint32_t **l_2538 = &l_2539;
                    int i;
                    if (l_2528[6][0])
                    { /* block id: 1076 */
                        (*p_2547->g_174) = (*p_2547->g_174);
                        (*l_2495) = l_2529;
                        (*l_2129) = (*p_2547->g_1627);
                        if (l_2530)
                            continue;
                    }
                    else
                    { /* block id: 1081 */
                        int32_t l_2534[1][10];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 10; j++)
                                l_2534[i][j] = 0x65E2B1C0L;
                        }
                        --p_2547->g_2531[1][0];
                        l_2534[0][8] ^= 0x34899B04L;
                    }
                    (*l_2129) = (((VECTOR(uint8_t, 16))(l_2535.xxxxyyxxyyxxyyyx)).s3 >= (p_2547->g_2376.s3 && ((safe_add_func_int16_t_s_s((l_2530 ^= l_2535.x), (*l_2129))) < (l_2540.sf = (((*l_2538) = (void*)0) != l_2327)))));
                    return p_2547->g_1996.sb;
                }
            }
        }
    }
    --l_2541;
    --l_2544;
    return p_2547->g_2067.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_2547->g_1627 p_2547->g_80 p_2547->g_538 p_2547->g_130 p_2547->g_211
 * writes: p_2547->g_80
 */
uint64_t  func_2(uint32_t  p_3, uint64_t  p_4, int16_t  p_5, int64_t  p_6, struct S1 * p_2547)
{ /* block id: 723 */
    int32_t ***l_1626 = &p_2547->g_234;
    int32_t l_1628 = (-1L);
    int32_t l_1640[4] = {0x419619FBL,0x419619FBL,0x419619FBL,0x419619FBL};
    int32_t ****l_1647 = &l_1626;
    int32_t *****l_1646 = &l_1647;
    VECTOR(uint64_t, 4) l_1652 = (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0UL), 0UL);
    int32_t l_1653[8][7] = {{0x4C5098DAL,0L,(-2L),0L,0x4C5098DAL,0x4C5098DAL,0L},{0x4C5098DAL,0L,(-2L),0L,0x4C5098DAL,0x4C5098DAL,0L},{0x4C5098DAL,0L,(-2L),0L,0x4C5098DAL,0x4C5098DAL,0L},{0x4C5098DAL,0L,(-2L),0L,0x4C5098DAL,0x4C5098DAL,0L},{0x4C5098DAL,0L,(-2L),0L,0x4C5098DAL,0x4C5098DAL,0L},{0x4C5098DAL,0L,(-2L),0L,0x4C5098DAL,0x4C5098DAL,0L},{0x4C5098DAL,0L,(-2L),0L,0x4C5098DAL,0x4C5098DAL,0L},{0x4C5098DAL,0L,(-2L),0L,0x4C5098DAL,0x4C5098DAL,0L}};
    int32_t l_1821 = 0x48B421DDL;
    uint32_t l_1824 = 0UL;
    int32_t *l_1827[1][5][1];
    int32_t **l_1830 = &l_1827[0][2][0];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
                l_1827[i][j][k] = (void*)0;
        }
    }
    (*p_2547->g_1627) ^= ((void*)0 != l_1626);
    if (l_1628)
    { /* block id: 725 */
        uint64_t l_1629 = 18446744073709551611UL;
        l_1629++;
    }
    else
    { /* block id: 727 */
        int16_t *l_1638 = (void*)0;
        int16_t *l_1639[1][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        VECTOR(int64_t, 4) l_1643 = (VECTOR(int64_t, 4))(0x538072E2B170CB22L, (VECTOR(int64_t, 2))(0x538072E2B170CB22L, 0x0A7FD6BC585B3F12L), 0x0A7FD6BC585B3F12L);
        uint32_t l_1658 = 0x6B755F1AL;
        int32_t l_1659 = 1L;
        int32_t l_1660[8][10][3] = {{{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L}},{{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L}},{{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L}},{{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L}},{{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L}},{{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L}},{{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L}},{{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L},{0x798830D0L,3L,0L}}};
        int32_t *l_1818 = &p_2547->g_85[0][1];
        int32_t *l_1819 = (void*)0;
        int32_t *l_1820[8] = {&p_2547->g_85[0][6],&p_2547->g_85[0][6],&p_2547->g_85[0][6],&p_2547->g_85[0][6],&p_2547->g_85[0][6],&p_2547->g_85[0][6],&p_2547->g_85[0][6],&p_2547->g_85[0][6]};
        int16_t l_1822[9];
        int32_t l_1823[10] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_1822[i] = 0x5F32L;
        l_1660[1][5][0] = ((((safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((l_1640[0] |= (l_1628 ^= p_5)), (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 16))(l_1643.yzwzwyzzzxwyzyyy)).sc, (++p_4))))), ((l_1646 != &l_1647) , (safe_lshift_func_int8_t_s_s(((l_1659 = ((!(((0x791430B7L == ((safe_add_func_uint64_t_u_u(l_1643.x, ((VECTOR(uint64_t, 8))(l_1652.wxzzwyyx)).s6)) ^ (l_1653[5][4] == ((VECTOR(uint8_t, 4))((0x42B78A2E3C74A054L ^ (safe_div_func_uint16_t_u_u(p_2547->g_538.x, (safe_add_func_uint16_t_u_u((+0x9540L), p_6))))), ((VECTOR(uint8_t, 2))(1UL)), 0UL)).z))) || l_1658) || 8UL)) ^ l_1658)) | 0xCBC63402L), 0))))), p_2547->g_130.s2)) & p_2547->g_211) && FAKE_DIVERGE(p_2547->group_1_offset, get_group_id(1), 10)) == p_3);
        if ((atomic_inc(&p_2547->g_atomic_input[42 * get_linear_group_id() + 38]) == 7))
        { /* block id: 734 */
            VECTOR(int32_t, 4) l_1661 = (VECTOR(int32_t, 4))(0x2920B8BCL, (VECTOR(int32_t, 2))(0x2920B8BCL, (-1L)), (-1L));
            uint32_t l_1759 = 4294967295UL;
            uint8_t l_1760[2][1][4] = {{{0xFCL,0x29L,0xFCL,0xFCL}},{{0xFCL,0x29L,0xFCL,0xFCL}}};
            int32_t l_1761 = 0x6237EABCL;
            uint8_t l_1817 = 0xD3L;
            int i, j, k;
            for (l_1661.x = (-20); (l_1661.x <= 19); l_1661.x = safe_add_func_int16_t_s_s(l_1661.x, 1))
            { /* block id: 737 */
                int32_t l_1664 = 0x33989CB6L;
                uint32_t l_1684 = 4294967290UL;
                for (l_1664 = 8; (l_1664 == 3); l_1664 = safe_sub_func_int64_t_s_s(l_1664, 6))
                { /* block id: 740 */
                    int64_t l_1667 = 0L;
                    if (l_1667)
                    { /* block id: 741 */
                        uint32_t l_1668 = 4294967293UL;
                        uint16_t l_1671 = 0x9618L;
                        int32_t l_1673[10][2] = {{0x3D371F7FL,0x3D371F7FL},{0x3D371F7FL,0x3D371F7FL},{0x3D371F7FL,0x3D371F7FL},{0x3D371F7FL,0x3D371F7FL},{0x3D371F7FL,0x3D371F7FL},{0x3D371F7FL,0x3D371F7FL},{0x3D371F7FL,0x3D371F7FL},{0x3D371F7FL,0x3D371F7FL},{0x3D371F7FL,0x3D371F7FL},{0x3D371F7FL,0x3D371F7FL}};
                        int32_t *l_1672 = &l_1673[1][0];
                        int32_t *l_1674 = &l_1673[1][0];
                        int32_t *l_1675 = &l_1673[1][0];
                        int32_t *l_1676 = &l_1673[1][0];
                        int i, j;
                        l_1668++;
                        l_1671 = 0x6E3E69D2L;
                        l_1674 = l_1672;
                        l_1676 = l_1675;
                    }
                    else
                    { /* block id: 746 */
                        int32_t l_1678 = 0x1D8897A4L;
                        int32_t *l_1677 = &l_1678;
                        int32_t *l_1679 = &l_1678;
                        int32_t l_1680 = (-1L);
                        uint8_t l_1681 = 0x31L;
                        l_1679 = l_1677;
                        l_1681++;
                    }
                }
                if (l_1684)
                { /* block id: 751 */
                    uint8_t l_1685 = 0xC5L;
                    uint32_t l_1697[1][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1697[i][j] = 0xF03647B6L;
                    }
                    ++l_1685;
                    for (l_1685 = 14; (l_1685 > 9); l_1685 = safe_sub_func_uint16_t_u_u(l_1685, 4))
                    { /* block id: 755 */
                        int64_t l_1690 = 0x30E0C4B7072679DBL;
                        int64_t l_1691 = 0x4BA117D5DC5F2C1FL;
                        int32_t l_1692 = 0x2792803EL;
                        int8_t l_1693 = 2L;
                        uint32_t l_1694 = 9UL;
                        l_1664 &= l_1690;
                        --l_1694;
                    }
                    l_1664 = l_1697[0][0];
                }
                else
                { /* block id: 760 */
                    VECTOR(int32_t, 16) l_1698 = (VECTOR(int32_t, 16))(0x45F3491BL, (VECTOR(int32_t, 4))(0x45F3491BL, (VECTOR(int32_t, 2))(0x45F3491BL, 0x010E2A28L), 0x010E2A28L), 0x010E2A28L, 0x45F3491BL, 0x010E2A28L, (VECTOR(int32_t, 2))(0x45F3491BL, 0x010E2A28L), (VECTOR(int32_t, 2))(0x45F3491BL, 0x010E2A28L), 0x45F3491BL, 0x010E2A28L, 0x45F3491BL, 0x010E2A28L);
                    uint32_t l_1699 = 0x9C518800L;
                    int32_t l_1700 = 0x0DAF82C0L;
                    VECTOR(int32_t, 4) l_1701 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x314071DCL), 0x314071DCL);
                    VECTOR(int32_t, 4) l_1702 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x15CD8C2EL), 0x15CD8C2EL);
                    int i;
                    if (((((l_1664 = ((((VECTOR(int64_t, 2))(0x69126A6B6C88ACF4L, 0x2E051FB419E150A2L)).odd , l_1698.s5) , l_1699)) , 0x1EEF17E7L) , l_1700) , ((VECTOR(int32_t, 16))(0x6D7523DCL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x467E08D6L, 0x2308A5A4L)))), ((VECTOR(int32_t, 4))(l_1701.zzzz)), 0x31622379L, (-7L), ((VECTOR(int32_t, 2))(1L, (-1L))), (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1702.zwywxzxwwwwxzyxy)).s7fb4)))).s1))
                    { /* block id: 762 */
                        uint32_t l_1703 = 0x64CA9DD0L;
                        uint16_t l_1706 = 0x99C0L;
                        l_1703++;
                        l_1701.z = l_1706;
                    }
                    else
                    { /* block id: 765 */
                        VECTOR(int32_t, 8) l_1707 = (VECTOR(int32_t, 8))(0x4F5D7152L, (VECTOR(int32_t, 4))(0x4F5D7152L, (VECTOR(int32_t, 2))(0x4F5D7152L, 0x309701ABL), 0x309701ABL), 0x309701ABL, 0x4F5D7152L, 0x309701ABL);
                        uint32_t l_1708 = 1UL;
                        int32_t l_1709 = 0x03618C75L;
                        uint64_t l_1710 = 0xCACFBA24486D88DCL;
                        VECTOR(uint32_t, 16) l_1711 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967294UL), 4294967294UL), 4294967294UL, 4294967295UL, 4294967294UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967294UL), (VECTOR(uint32_t, 2))(4294967295UL, 4294967294UL), 4294967295UL, 4294967294UL, 4294967295UL, 4294967294UL);
                        VECTOR(uint32_t, 2) l_1712 = (VECTOR(uint32_t, 2))(0x0D5C82CBL, 0x73306C4CL);
                        VECTOR(uint32_t, 16) l_1713 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xBAABC393L), 0xBAABC393L), 0xBAABC393L, 0UL, 0xBAABC393L, (VECTOR(uint32_t, 2))(0UL, 0xBAABC393L), (VECTOR(uint32_t, 2))(0UL, 0xBAABC393L), 0UL, 0xBAABC393L, 0UL, 0xBAABC393L);
                        VECTOR(uint32_t, 8) l_1714 = (VECTOR(uint32_t, 8))(0x2FDC9FB7L, (VECTOR(uint32_t, 4))(0x2FDC9FB7L, (VECTOR(uint32_t, 2))(0x2FDC9FB7L, 8UL), 8UL), 8UL, 0x2FDC9FB7L, 8UL);
                        uint8_t l_1715 = 254UL;
                        VECTOR(uint32_t, 2) l_1716 = (VECTOR(uint32_t, 2))(0x1351E800L, 0xD630BF0EL);
                        VECTOR(uint32_t, 2) l_1717 = (VECTOR(uint32_t, 2))(0xE5AF7437L, 0x8FC9FC52L);
                        VECTOR(uint32_t, 4) l_1718 = (VECTOR(uint32_t, 4))(0x894695C5L, (VECTOR(uint32_t, 2))(0x894695C5L, 4294967294UL), 4294967294UL);
                        int16_t l_1719 = (-7L);
                        int16_t l_1720 = 6L;
                        uint16_t l_1721 = 65529UL;
                        VECTOR(uint16_t, 8) l_1722 = (VECTOR(uint16_t, 8))(0x5F9BL, (VECTOR(uint16_t, 4))(0x5F9BL, (VECTOR(uint16_t, 2))(0x5F9BL, 65526UL), 65526UL), 65526UL, 0x5F9BL, 65526UL);
                        VECTOR(uint16_t, 4) l_1723 = (VECTOR(uint16_t, 4))(0xCF66L, (VECTOR(uint16_t, 2))(0xCF66L, 1UL), 1UL);
                        VECTOR(int64_t, 2) l_1724 = (VECTOR(int64_t, 2))(0x421C7646AC3832CDL, 0x2306B33E09FFDF01L);
                        int16_t l_1725[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                        uint16_t l_1726 = 65535UL;
                        uint32_t l_1727[1][4][5] = {{{6UL,0x013D1A4EL,1UL,0xA85B7C1FL,0x013D1A4EL},{6UL,0x013D1A4EL,1UL,0xA85B7C1FL,0x013D1A4EL},{6UL,0x013D1A4EL,1UL,0xA85B7C1FL,0x013D1A4EL},{6UL,0x013D1A4EL,1UL,0xA85B7C1FL,0x013D1A4EL}}};
                        int16_t l_1728 = (-1L);
                        int16_t l_1729 = 0L;
                        uint16_t l_1730 = 0x9F6DL;
                        int i, j, k;
                        l_1730 &= (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 2))(l_1707.s76)).yxxyyyyxxxxyxxyx, ((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 4))(((l_1708 &= 8UL) , l_1709), l_1710, 1UL, 3UL)).xwzwxxxx, ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(l_1711.s68bce9b6)).s25, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_1712.yx)).xyxyyxyy)).odd, ((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(l_1713.s9a)).yxyyxyyy, ((VECTOR(uint32_t, 8))(l_1714.s16453724))))), (uint32_t)(l_1715 , ((VECTOR(uint32_t, 2))(l_1716.yy)).even)))).s65, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_1717.yyxyxyxy)).s50)), 0UL, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_1718.ww)).yyxx)).ywzxxyxzzzwwxzzw)).s1, ((l_1720 = (l_1719 = (-6L))) , (l_1699 = l_1721)), ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_1722.s17)).yyxxyyxxyxyyyyxx)).s49d9, (uint16_t)((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(0x1DB3L, 0x2EB5L, ((((VECTOR(uint16_t, 2))(l_1723.zx)).lo , (l_1725[5] = ((VECTOR(int64_t, 16))(l_1724.xxyxxxxyyyxyxyyy)).sa)) , GROUP_DIVERGE(0, 1)), 0xD4FBL, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 16))(((l_1726 = ((VECTOR(int64_t, 8))(0x66777BD15D3F6D1EL, 0x1A88ADBBB55D1462L, (-7L), ((VECTOR(int64_t, 4))((-1L))), 8L)).s6) , l_1727[0][2][1]), l_1728, FAKE_DIVERGE(p_2547->global_0_offset, get_global_id(0), 10), ((VECTOR(uint8_t, 2))(0x66L)), ((VECTOR(uint8_t, 2))(255UL)), 0x57L, 0x5DL, 0x48L, ((VECTOR(uint8_t, 2))(0xA8L)), 1UL, ((VECTOR(uint8_t, 2))(0xAAL)), 0xBAL)).even, ((VECTOR(uint8_t, 8))(255UL))))).s45, ((VECTOR(uint16_t, 2))(0xEC1EL))))), 1UL, 1UL)).xyywyxzw, ((VECTOR(uint16_t, 8))(65526UL))))).even)).wzxzxxzzzwwwxzyx)).s71, ((VECTOR(uint16_t, 2))(0x5714L))))), 0x0F59L, 0x80FCL)), ((VECTOR(uint16_t, 4))(0x8C76L)), ((VECTOR(uint16_t, 4))(0x070CL)))).se5ed)).yyywwyywyywwxyxz, ((VECTOR(uint16_t, 16))(1UL)), ((VECTOR(uint16_t, 16))(6UL))))).s9))).zwzzwxzyxxyxzxwz)).sb8, ((VECTOR(uint16_t, 2))(0x63D3L))))), 4294967295UL)).s40))).yxyx))), ((VECTOR(uint32_t, 2))(1UL)), 4294967295UL, 0xA46ECDE1L)))).s54, ((VECTOR(uint32_t, 2))(2UL))))).xyyxyyxx))).s6715407167061251))).sa4)), ((VECTOR(int64_t, 2))(0L))))))).hi , l_1729);
                    }
                }
                for (l_1684 = 0; (l_1684 > 11); l_1684 = safe_add_func_uint32_t_u_u(l_1684, 5))
                { /* block id: 777 */
                    int64_t l_1752[1];
                    int32_t l_1753 = 0x29E80E53L;
                    int32_t l_1754[5];
                    int16_t l_1755 = 0x7F64L;
                    int8_t l_1756 = (-6L);
                    uint32_t l_1757 = 0x07710D80L;
                    int32_t *l_1758 = &l_1754[2];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1752[i] = 0x24C886E871809C21L;
                    for (i = 0; i < 5; i++)
                        l_1754[i] = (-3L);
                    if ((l_1664 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x44AB6811L, 2L)).yxxyyxyyxyxyxxxy)).s47f6)).x))
                    { /* block id: 779 */
                        int32_t l_1733 = (-10L);
                        l_1664 = l_1733;
                    }
                    else
                    { /* block id: 781 */
                        VECTOR(uint64_t, 4) l_1734 = (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0UL), 0UL);
                        int8_t l_1735 = 0x2BL;
                        int64_t l_1736[9] = {0x58A793158250169EL,1L,0x58A793158250169EL,0x58A793158250169EL,1L,0x58A793158250169EL,0x58A793158250169EL,1L,0x58A793158250169EL};
                        VECTOR(int16_t, 8) l_1737 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x6C55L), 0x6C55L), 0x6C55L, 1L, 0x6C55L);
                        VECTOR(int16_t, 8) l_1738 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-8L)), (-8L)), (-8L), (-1L), (-8L));
                        uint32_t l_1739 = 0xDAE4F924L;
                        union U0 l_1740 = {-3L};
                        uint32_t l_1741 = 4294967286UL;
                        int64_t l_1742[6] = {0x019BA002B0F12E44L,0x3B85F0F44E422659L,0x019BA002B0F12E44L,0x019BA002B0F12E44L,0x3B85F0F44E422659L,0x019BA002B0F12E44L};
                        int8_t l_1743 = 1L;
                        VECTOR(int16_t, 16) l_1744 = (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), (-1L)), (-1L)), (-1L), (-3L), (-1L), (VECTOR(int16_t, 2))((-3L), (-1L)), (VECTOR(int16_t, 2))((-3L), (-1L)), (-3L), (-1L), (-3L), (-1L));
                        int8_t l_1745 = (-1L);
                        int64_t l_1746 = 0x0E5DA0507564AC98L;
                        int8_t l_1747 = 0x58L;
                        VECTOR(uint64_t, 16) l_1748 = (VECTOR(uint64_t, 16))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 0x6B0AB4668219B410L), 0x6B0AB4668219B410L), 0x6B0AB4668219B410L, 3UL, 0x6B0AB4668219B410L, (VECTOR(uint64_t, 2))(3UL, 0x6B0AB4668219B410L), (VECTOR(uint64_t, 2))(3UL, 0x6B0AB4668219B410L), 3UL, 0x6B0AB4668219B410L, 3UL, 0x6B0AB4668219B410L);
                        int16_t l_1749 = 0x5D24L;
                        uint32_t l_1750 = 1UL;
                        uint64_t l_1751 = 0x470399BFD7264151L;
                        int i;
                        l_1751 ^= ((((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 2))(1UL, 0xC37DF8ADAC3728B6L)).xyyx, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0UL, 0x056B91D57D03FF91L)))).yyyy, ((VECTOR(uint64_t, 4))(l_1734.wzzz))))).y , (l_1749 = (l_1748.sd = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_1735, 1L, l_1736[5], ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(l_1737.s66002517)).hi, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 8))(l_1738.s45631717)).s27, (int16_t)(((l_1739 , l_1740) , l_1741) , (l_1745 = ((l_1742[0] , (l_1743 = 5L)) , ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_1744.s562721568c22436f)).sae)).xyxxxyyxyxxyyyxx, ((VECTOR(int16_t, 2))(0x785DL, 1L)).yyyyyyxxxxxyxyxx))).lo, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0x7E5FL, 0x51FAL, 0x7DD0L, 0x1A06L)).lo)).xyyyyyyy))).s4))), (int16_t)l_1746))).xxxx))).zyxyzzyy, (int16_t)l_1747, (int16_t)1L))))).s72, ((VECTOR(uint16_t, 2))(0UL))))), ((VECTOR(int32_t, 8))((-1L))), (-7L), 1L, (-5L))))).s4aee, ((VECTOR(int32_t, 4))(0x051D27E3L))))).yzyzyzzzyyzwyyxy)).s62ba)).y))) , l_1750);
                        l_1664 = 0x103CFA4DL;
                    }
                    l_1758 = ((l_1753 = l_1752[0]) , (((VECTOR(int64_t, 2))(0x0D0FA5FFB6B0E32DL, 1L)).odd , (l_1754[2] , ((l_1757 = (l_1755 , l_1756)) , (void*)0))));
                }
            }
            l_1760[1][0][0] = l_1759;
            if (l_1761)
            { /* block id: 795 */
                VECTOR(uint32_t, 16) l_1762 = (VECTOR(uint32_t, 16))(0xCA630ABDL, (VECTOR(uint32_t, 4))(0xCA630ABDL, (VECTOR(uint32_t, 2))(0xCA630ABDL, 0xFB711B3FL), 0xFB711B3FL), 0xFB711B3FL, 0xCA630ABDL, 0xFB711B3FL, (VECTOR(uint32_t, 2))(0xCA630ABDL, 0xFB711B3FL), (VECTOR(uint32_t, 2))(0xCA630ABDL, 0xFB711B3FL), 0xCA630ABDL, 0xFB711B3FL, 0xCA630ABDL, 0xFB711B3FL);
                VECTOR(int32_t, 4) l_1763 = (VECTOR(int32_t, 4))(0x4B05D612L, (VECTOR(int32_t, 2))(0x4B05D612L, 0L), 0L);
                int8_t l_1764 = 1L;
                uint32_t l_1765 = 0x45DD87F1L;
                VECTOR(int32_t, 2) l_1766 = (VECTOR(int32_t, 2))(0x68F7CC45L, 0x27B83857L);
                VECTOR(int32_t, 2) l_1767 = (VECTOR(int32_t, 2))(0x4140A57FL, 0x088A17F4L);
                VECTOR(int32_t, 4) l_1768 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x152D0A79L), 0x152D0A79L);
                VECTOR(int32_t, 4) l_1769 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5027DFEBL), 0x5027DFEBL);
                VECTOR(int32_t, 16) l_1770 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x7603150CL), 0x7603150CL), 0x7603150CL, 5L, 0x7603150CL, (VECTOR(int32_t, 2))(5L, 0x7603150CL), (VECTOR(int32_t, 2))(5L, 0x7603150CL), 5L, 0x7603150CL, 5L, 0x7603150CL);
                VECTOR(int32_t, 8) l_1771 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
                int32_t l_1772 = 0x4D4221E4L;
                VECTOR(int32_t, 4) l_1773 = (VECTOR(int32_t, 4))(0x12D87C0BL, (VECTOR(int32_t, 2))(0x12D87C0BL, 0x2D935003L), 0x2D935003L);
                VECTOR(int32_t, 2) l_1774 = (VECTOR(int32_t, 2))(0x756BD650L, 1L);
                int32_t l_1775 = (-4L);
                VECTOR(int32_t, 2) l_1776 = (VECTOR(int32_t, 2))(7L, 1L);
                uint32_t l_1777 = 7UL;
                VECTOR(int32_t, 8) l_1778 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x0CD5771AL), 0x0CD5771AL), 0x0CD5771AL, (-5L), 0x0CD5771AL);
                VECTOR(uint64_t, 4) l_1779 = (VECTOR(uint64_t, 4))(0xDD82E6DBC8FB2EF5L, (VECTOR(uint64_t, 2))(0xDD82E6DBC8FB2EF5L, 0UL), 0UL);
                int8_t l_1780[10][10] = {{0x4BL,(-8L),0x37L,(-1L),0x37L,(-8L),0x4BL,0x51L,0x05L,0x05L},{0x4BL,(-8L),0x37L,(-1L),0x37L,(-8L),0x4BL,0x51L,0x05L,0x05L},{0x4BL,(-8L),0x37L,(-1L),0x37L,(-8L),0x4BL,0x51L,0x05L,0x05L},{0x4BL,(-8L),0x37L,(-1L),0x37L,(-8L),0x4BL,0x51L,0x05L,0x05L},{0x4BL,(-8L),0x37L,(-1L),0x37L,(-8L),0x4BL,0x51L,0x05L,0x05L},{0x4BL,(-8L),0x37L,(-1L),0x37L,(-8L),0x4BL,0x51L,0x05L,0x05L},{0x4BL,(-8L),0x37L,(-1L),0x37L,(-8L),0x4BL,0x51L,0x05L,0x05L},{0x4BL,(-8L),0x37L,(-1L),0x37L,(-8L),0x4BL,0x51L,0x05L,0x05L},{0x4BL,(-8L),0x37L,(-1L),0x37L,(-8L),0x4BL,0x51L,0x05L,0x05L},{0x4BL,(-8L),0x37L,(-1L),0x37L,(-8L),0x4BL,0x51L,0x05L,0x05L}};
                int32_t l_1781 = 0x0B23D335L;
                int32_t l_1782 = 0x5143A7F1L;
                int8_t l_1783 = 0x3BL;
                int32_t *l_1784 = (void*)0;
                int32_t *l_1785[6][5][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                int32_t *l_1786[3][2][6] = {{{(void*)0,(void*)0,(void*)0,&l_1782,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1782,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&l_1782,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1782,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&l_1782,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1782,(void*)0,(void*)0}}};
                int32_t *l_1787 = &l_1772;
                int8_t l_1788[9] = {0x09L,0x09L,0x09L,0x09L,0x09L,0x09L,0x09L,0x09L,0x09L};
                VECTOR(int32_t, 4) l_1789 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x5A20FEB1L), 0x5A20FEB1L);
                uint16_t l_1790 = 0xE7CCL;
                int32_t l_1791 = 0x02784275L;
                VECTOR(int16_t, 2) l_1792 = (VECTOR(int16_t, 2))(0x0C20L, 0x1DF6L);
                uint32_t l_1793 = 4294967289UL;
                uint32_t l_1794[9][5] = {{0x71EF8364L,0xF9D60067L,4294967291UL,0xB326E83CL,0x5E687907L},{0x71EF8364L,0xF9D60067L,4294967291UL,0xB326E83CL,0x5E687907L},{0x71EF8364L,0xF9D60067L,4294967291UL,0xB326E83CL,0x5E687907L},{0x71EF8364L,0xF9D60067L,4294967291UL,0xB326E83CL,0x5E687907L},{0x71EF8364L,0xF9D60067L,4294967291UL,0xB326E83CL,0x5E687907L},{0x71EF8364L,0xF9D60067L,4294967291UL,0xB326E83CL,0x5E687907L},{0x71EF8364L,0xF9D60067L,4294967291UL,0xB326E83CL,0x5E687907L},{0x71EF8364L,0xF9D60067L,4294967291UL,0xB326E83CL,0x5E687907L},{0x71EF8364L,0xF9D60067L,4294967291UL,0xB326E83CL,0x5E687907L}};
                int8_t l_1795 = 0x18L;
                int32_t l_1796 = 0x38688EBFL;
                int16_t l_1797 = 0x6C66L;
                VECTOR(int32_t, 4) l_1798 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-7L)), (-7L));
                VECTOR(int32_t, 16) l_1799 = (VECTOR(int32_t, 16))(0x56086219L, (VECTOR(int32_t, 4))(0x56086219L, (VECTOR(int32_t, 2))(0x56086219L, 0x48959B8BL), 0x48959B8BL), 0x48959B8BL, 0x56086219L, 0x48959B8BL, (VECTOR(int32_t, 2))(0x56086219L, 0x48959B8BL), (VECTOR(int32_t, 2))(0x56086219L, 0x48959B8BL), 0x56086219L, 0x48959B8BL, 0x56086219L, 0x48959B8BL);
                uint32_t l_1800 = 4294967287UL;
                int16_t l_1801 = 3L;
                int32_t l_1802 = 0x6F97BCB1L;
                uint64_t l_1803 = 0x138849321B3AFD09L;
                uint64_t l_1804 = 18446744073709551607UL;
                uint32_t l_1805 = 4294967295UL;
                int i, j, k;
                l_1785[5][4][0] = (l_1784 = ((((VECTOR(uint32_t, 8))(l_1762.s0197780f)).s0 , (l_1783 = (((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(l_1763.xyzxywyz)), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 0x3698A9A1L)), (-2L), (l_1661.z = (l_1764 , (((l_1760[1][0][3] ^= FAKE_DIVERGE(p_2547->global_2_offset, get_global_id(2), 10)) , FAKE_DIVERGE(p_2547->local_0_offset, get_local_id(0), 10)) , l_1765))), (-7L), (l_1661.x |= 0x6E0FF5B8L), 0x517AC5AAL, (-2L))).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1766.xyxyxxxy)).s7744163113742066)).even, ((VECTOR(int32_t, 16))(l_1767.yyxxxyxyyxxyxyxx)).hi))).s0440500455621755, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(0x64970AFCL, 1L, 1L, 7L)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(l_1768.zwxyzyzz)).lo))), ((VECTOR(int32_t, 4))(l_1769.yxzy)), 0L, 0x76C398B1L, 0x28CB8752L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1770.sd67e)).wywzxzwwzxxwyzyx)).s7a, ((VECTOR(int32_t, 8))(l_1771.s16734701)).s52))), l_1772, 5L, ((VECTOR(int32_t, 2))(l_1773.zw)), 0L, 0x3CCD065FL)).s15)), ((VECTOR(int32_t, 2))(l_1774.yy)), 0x783FD931L)).s3a6a))), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(l_1775, (-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1776.yxxy)).xzwyzxzx)).s14)), l_1777, ((VECTOR(int32_t, 8))(l_1778.s27006540)), (-1L), 0x57D39814L, (-6L))).sd9a0, ((VECTOR(int32_t, 4))(0x7B15FF64L))))))).hi)), l_1779.w, l_1780[8][7], 0x774FC3E5L, 0x36A1C83DL, l_1781, l_1782, ((VECTOR(int32_t, 2))((-9L))), ((VECTOR(int32_t, 4))(1L)))).sfbe7)).zwzzywwxywxxwzzw))).even)).hi))))).zxzwwyxx))).s3 , GROUP_DIVERGE(0, 1)))) , l_1784));
                l_1787 = l_1786[0][1][5];
                l_1805 |= (l_1804 = ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 2))(0x713D3916L, 0L)).yyxxyyyx, (int32_t)l_1788[0], (int32_t)(l_1791 ^= (l_1661.z = (l_1790 = (l_1761 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1789.zwxxwxyx)).lo)).z))))))).hi, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(0x1A208069L, 0x3FF26910L, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(l_1792.xxxxyxxxyxyxyxxx)).sf001, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 2))(0xDBBDL, 65535UL)).yyxx, ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 2))(0x2DB9L, 1UL)).yyxyyyyx, ((VECTOR(uint16_t, 2))(2UL, 2UL)).yxxxxyxx))).even, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 8))(0x041EL, 0x7EBEL, 0x78C9L, l_1793, 0x334CL, 0UL, 5UL, 0xD050L)).s6075724460511311))).even)).hi))).wxzxywwy)).lo)).lo)).xxxxyxxyxyxyxyyx))))).s3cf5))))), 0x0F80520FL, (-1L))), ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(7L, 0x202C5D79L)).xyxxxxyyyxyxxyyy)))).lo, ((VECTOR(int32_t, 16))((l_1661.y = l_1794[6][1]), (l_1796 = l_1795), 0x164F1DC7L, l_1797, (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x5AE6AE97L, 0x60342BC9L)), 0x0856B2FCL, (-8L))), 0x1FE078F6L, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_1798.wxyy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 4L)).yyyxxyyyxyxyyyyx)))).sa88c))).odd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(l_1799.sbec660ac)), (int32_t)((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1800, l_1801, 0x6415DDE2L, 0x65ADAEEBL, ((VECTOR(int32_t, 4))(1L)), (-9L), 0x1B05AF1EL, ((VECTOR(int32_t, 2))(0x56B4A62AL)), ((VECTOR(int32_t, 2))(0x4359638BL)), (-6L), 0x17655BADL)).even)).s3))), ((VECTOR(int32_t, 8))(4L)), ((VECTOR(int32_t, 8))(0x3E60CD7EL))))), l_1802, 5L, 0x5F85B02AL, l_1803, 1L, 0L, 8L, 0x2871F846L)).sd4fe)).hi, ((VECTOR(int32_t, 2))((-8L)))))), ((VECTOR(int32_t, 4))(0L)))).odd)))))).even))).z);
            }
            else
            { /* block id: 811 */
                VECTOR(int16_t, 16) l_1806 = (VECTOR(int16_t, 16))(0x39F3L, (VECTOR(int16_t, 4))(0x39F3L, (VECTOR(int16_t, 2))(0x39F3L, 0x73B6L), 0x73B6L), 0x73B6L, 0x39F3L, 0x73B6L, (VECTOR(int16_t, 2))(0x39F3L, 0x73B6L), (VECTOR(int16_t, 2))(0x39F3L, 0x73B6L), 0x39F3L, 0x73B6L, 0x39F3L, 0x73B6L);
                uint32_t l_1807 = 0x8B23BD73L;
                int8_t l_1808 = 0x78L;
                int32_t l_1814 = 0x4A53C26FL;
                uint32_t l_1815 = 7UL;
                int32_t *l_1816 = (void*)0;
                int i;
                l_1761 = ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(l_1806.s74)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_1807, 0UL, 0x34A7L, 6UL)).zxzwzyyxywyyyyyw)).s53))).yyyxxyyx, (int32_t)l_1808))).s2;
                for (l_1806.s2 = 23; (l_1806.s2 != 21); --l_1806.s2)
                { /* block id: 815 */
                    int8_t l_1811 = 0x33L;
                    VECTOR(int32_t, 4) l_1812 = (VECTOR(int32_t, 4))(0x52D8A067L, (VECTOR(int32_t, 2))(0x52D8A067L, (-1L)), (-1L));
                    uint64_t l_1813 = 0x18834B82D8C24571L;
                    int i;
                    l_1813 |= (l_1811 , ((VECTOR(int32_t, 2))(l_1812.wz)).odd);
                }
                l_1816 = ((l_1814 , l_1815) , (void*)0);
            }
            l_1817 = 0L;
            unsigned int result = 0;
            result += l_1661.w;
            result += l_1661.z;
            result += l_1661.y;
            result += l_1661.x;
            result += l_1759;
            int l_1760_i0, l_1760_i1, l_1760_i2;
            for (l_1760_i0 = 0; l_1760_i0 < 2; l_1760_i0++) {
                for (l_1760_i1 = 0; l_1760_i1 < 1; l_1760_i1++) {
                    for (l_1760_i2 = 0; l_1760_i2 < 4; l_1760_i2++) {
                        result += l_1760[l_1760_i0][l_1760_i1][l_1760_i2];
                    }
                }
            }
            result += l_1761;
            result += l_1817;
            atomic_add(&p_2547->g_special_values[42 * get_linear_group_id() + 38], result);
        }
        else
        { /* block id: 821 */
            (1 + 1);
        }
        l_1824--;
    }
    (*l_1830) = l_1827[0][0][0];
    return p_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_2547->g_33 p_2547->g_44 p_2547->g_22 p_2547->g_96 p_2547->g_99 p_2547->g_145 p_2547->g_85 p_2547->g_211 p_2547->g_215 p_2547->g_216 p_2547->g_220 p_2547->g_223 p_2547->g_226 p_2547->g_234 p_2547->g_195 p_2547->g_194 p_2547->g_239 p_2547->g_80 p_2547->g_383 p_2547->g_390 p_2547->g_397 p_2547->g_353 p_2547->g_437 p_2547->g_442 p_2547->g_comm_values p_2547->g_428 p_2547->g_130 p_2547->g_575 p_2547->g_456 p_2547->g_694 p_2547->g_564 p_2547->g_189 p_2547->g_538 p_2547->g_584 p_2547->g_733 p_2547->g_743 p_2547->g_745 p_2547->g_127 p_2547->g_607 p_2547->g_752 p_2547->g_96.f2 p_2547->g_765 p_2547->g_780 p_2547->g_785 p_2547->l_comm_values p_2547->g_792 p_2547->g_793 p_2547->g_813 p_2547->g_815 p_2547->g_586 p_2547->g_201 p_2547->g_504 p_2547->g_174 p_2547->g_175 p_2547->g_176 p_2547->g_176.f0 p_2547->g_944 p_2547->g_997 p_2547->g_1002 p_2547->g_132 p_2547->g_96.f0 p_2547->g_1054 p_2547->g_1077 p_2547->g_1080 p_2547->g_1082 p_2547->g_1083 p_2547->g_1089 p_2547->g_1174 p_2547->g_1195 p_2547->g_1206 p_2547->g_1224 p_2547->g_1162 p_2547->g_1225 p_2547->g_1196 p_2547->g_1197 p_2547->g_96.f1 p_2547->g_1541 p_2547->g_1551 p_2547->g_1013 p_2547->g_1553 p_2547->g_1346 p_2547->g_391 p_2547->g_1418 p_2547->g_1589 p_2547->g_531 p_2547->g_1608 p_2547->g_1616 p_2547->g_1387
 * writes: p_2547->g_41 p_2547->g_22 p_2547->g_80 p_2547->g_99 p_2547->g_96.f2 p_2547->g_211 p_2547->g_145 p_2547->g_201 p_2547->g_239 p_2547->g_85 p_2547->g_194 p_2547->g_353 p_2547->g_189 p_2547->g_428 p_2547->g_456 p_2547->g_127 p_2547->g_130 p_2547->g_comm_values p_2547->g_564 p_2547->g_437 p_2547->g_780 p_2547->g_785 p_2547->g_575 p_2547->g_752 p_2547->g_216 p_2547->g_96.f0 p_2547->g_918 p_2547->g_861 p_2547->g_997 p_2547->g_383 p_2547->g_733 p_2547->g_792 p_2547->g_397 p_2547->g_765 p_2547->g_1132 p_2547->g_1002 p_2547->g_786 p_2547->g_1195 p_2547->g_96.f1 p_2547->g_1197 p_2547->g_132 p_2547->g_1418 p_2547->g_1609
 */
int8_t  func_18(int64_t  p_19, int64_t  p_20, struct S1 * p_2547)
{ /* block id: 7 */
    VECTOR(uint16_t, 2) l_34 = (VECTOR(uint16_t, 2))(65535UL, 0UL);
    uint64_t ****l_1069 = (void*)0;
    uint64_t *l_1076 = (void*)0;
    int32_t l_1613 = 1L;
    uint32_t l_1625 = 4294967291UL;
    int i;
    l_1613 = (p_20 >= (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(0x06L, (-9L), ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(func_30((((((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(p_2547->g_33.yxyy)), ((VECTOR(uint16_t, 8))(l_34.xxxxxyyy)).hi))).y >= (((func_35(func_37(l_34.y, p_2547), p_2547) , ((l_34.x <= ((void*)0 == l_1069)) && (safe_add_func_uint64_t_u_u(l_34.y, ((safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(65531UL, p_19)), p_19)) <= p_20))))) | p_2547->g_1054.x) || 1L)) , p_2547->g_33.x) ^ p_19), l_1076, p_2547), ((VECTOR(int8_t, 2))(0x12L)), ((VECTOR(int8_t, 4))(0L)), 0x26L)).s7724050226452701)).s95)), ((VECTOR(int8_t, 2))(0x0BL))))), l_34.x, ((VECTOR(int8_t, 2))(0x5DL)), 0L)).s5, p_2547->g_607.s2)));
    if ((&l_1613 != (void*)0))
    { /* block id: 695 */
        for (p_2547->g_132 = 5; (p_2547->g_132 >= 33); p_2547->g_132 = safe_add_func_uint8_t_u_u(p_2547->g_132, 2))
        { /* block id: 698 */
            return p_2547->g_1616;
        }
        return p_2547->g_531.s3;
    }
    else
    { /* block id: 702 */
        for (p_19 = 0; (p_19 < (-8)); p_19 = safe_sub_func_int64_t_s_s(p_19, 8))
        { /* block id: 705 */
            int32_t l_1624 = 0x1D5DB1E1L;
            for (p_2547->g_353 = (-20); (p_2547->g_353 >= (-5)); p_2547->g_353 = safe_add_func_uint8_t_u_u(p_2547->g_353, 7))
            { /* block id: 708 */
                if ((atomic_inc(&p_2547->l_atomic_input[27]) == 2))
                { /* block id: 710 */
                    int32_t l_1622[1][8][7] = {{{1L,(-10L),1L,1L,(-10L),1L,1L},{1L,(-10L),1L,1L,(-10L),1L,1L},{1L,(-10L),1L,1L,(-10L),1L,1L},{1L,(-10L),1L,1L,(-10L),1L,1L},{1L,(-10L),1L,1L,(-10L),1L,1L},{1L,(-10L),1L,1L,(-10L),1L,1L},{1L,(-10L),1L,1L,(-10L),1L,1L},{1L,(-10L),1L,1L,(-10L),1L,1L}}};
                    int32_t *l_1621 = &l_1622[0][5][0];
                    int32_t *l_1623 = &l_1622[0][2][4];
                    int i, j, k;
                    l_1621 = (l_1623 = l_1621);
                    unsigned int result = 0;
                    int l_1622_i0, l_1622_i1, l_1622_i2;
                    for (l_1622_i0 = 0; l_1622_i0 < 1; l_1622_i0++) {
                        for (l_1622_i1 = 0; l_1622_i1 < 8; l_1622_i1++) {
                            for (l_1622_i2 = 0; l_1622_i2 < 7; l_1622_i2++) {
                                result += l_1622[l_1622_i0][l_1622_i1][l_1622_i2];
                            }
                        }
                    }
                    atomic_add(&p_2547->l_special_values[27], result);
                }
                else
                { /* block id: 713 */
                    (1 + 1);
                }
                return l_1624;
            }
        }
        (*p_2547->g_785) = (void*)0;
    }
    l_1625 &= 1L;
    return p_2547->g_1387.s0;
}


/* ------------------------------------------ */
/* 
 * reads : p_2547->g_1077 p_2547->g_22 p_2547->g_1080 p_2547->g_1082 p_2547->g_1083 p_2547->g_813 p_2547->g_1089 p_2547->g_397 p_2547->g_80 p_2547->g_85 p_2547->g_575 p_2547->g_239 p_2547->g_792 p_2547->g_428 p_2547->g_211 p_2547->g_127 p_2547->g_1174 p_2547->g_785 p_2547->g_1195 p_2547->g_997 p_2547->g_234 p_2547->g_1206 p_2547->g_1054 p_2547->g_33 p_2547->g_1224 p_2547->g_1162 p_2547->g_1225 p_2547->g_1196 p_2547->g_1197 p_2547->g_752 p_2547->g_733 p_2547->g_442 p_2547->g_220 p_2547->g_1002 p_2547->g_96.f1 p_2547->g_765 p_2547->g_96.f0 p_2547->g_564 p_2547->g_223 p_2547->g_132 p_2547->g_1541 p_2547->g_1551 p_2547->g_1013 p_2547->g_1553 p_2547->g_1346 p_2547->g_145 p_2547->g_391 p_2547->g_1418 p_2547->g_1589 p_2547->g_743 p_2547->g_531 p_2547->g_1608
 * writes: p_2547->g_397 p_2547->g_80 p_2547->g_85 p_2547->g_575 p_2547->g_792 p_2547->g_765 p_2547->g_428 p_2547->g_437 p_2547->g_1132 p_2547->g_201 p_2547->g_1002 p_2547->g_786 p_2547->g_1195 p_2547->g_96.f1 p_2547->g_752 p_2547->g_96.f0 p_2547->g_22 p_2547->g_211 p_2547->g_1197 p_2547->g_132 p_2547->g_239 p_2547->g_780 p_2547->g_1418 p_2547->g_456 p_2547->g_1609
 */
int8_t  func_30(int64_t  p_31, uint64_t * p_32, struct S1 * p_2547)
{ /* block id: 435 */
    VECTOR(uint8_t, 16) l_1081 = (VECTOR(uint8_t, 16))(0x98L, (VECTOR(uint8_t, 4))(0x98L, (VECTOR(uint8_t, 2))(0x98L, 0x6FL), 0x6FL), 0x6FL, 0x98L, 0x6FL, (VECTOR(uint8_t, 2))(0x98L, 0x6FL), (VECTOR(uint8_t, 2))(0x98L, 0x6FL), 0x98L, 0x6FL, 0x98L, 0x6FL);
    VECTOR(int32_t, 4) l_1084 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x3B660436L), 0x3B660436L);
    VECTOR(int32_t, 2) l_1085 = (VECTOR(int32_t, 2))((-1L), 0x69E27DCAL);
    VECTOR(int64_t, 16) l_1086 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x0D60084511CB019AL), 0x0D60084511CB019AL), 0x0D60084511CB019AL, 0L, 0x0D60084511CB019AL, (VECTOR(int64_t, 2))(0L, 0x0D60084511CB019AL), (VECTOR(int64_t, 2))(0L, 0x0D60084511CB019AL), 0L, 0x0D60084511CB019AL, 0L, 0x0D60084511CB019AL);
    int16_t *l_1090 = (void*)0;
    int16_t *l_1091 = (void*)0;
    int16_t *l_1092 = (void*)0;
    int16_t *l_1093 = (void*)0;
    int16_t *l_1094 = (void*)0;
    int16_t *l_1095[10][7][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    VECTOR(uint64_t, 16) l_1104 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4795986C36C40E05L), 0x4795986C36C40E05L), 0x4795986C36C40E05L, 18446744073709551615UL, 0x4795986C36C40E05L, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4795986C36C40E05L), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4795986C36C40E05L), 18446744073709551615UL, 0x4795986C36C40E05L, 18446744073709551615UL, 0x4795986C36C40E05L);
    int32_t *l_1105 = &p_2547->g_80[0][6];
    uint8_t *l_1106 = (void*)0;
    uint8_t *l_1107 = (void*)0;
    int32_t l_1108[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    VECTOR(int16_t, 2) l_1109 = (VECTOR(int16_t, 2))((-9L), 0x630BL);
    int32_t *l_1110 = &p_2547->g_85[0][1];
    VECTOR(uint64_t, 16) l_1121 = (VECTOR(uint64_t, 16))(8UL, (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 0xAFCEB47B9B715C5DL), 0xAFCEB47B9B715C5DL), 0xAFCEB47B9B715C5DL, 8UL, 0xAFCEB47B9B715C5DL, (VECTOR(uint64_t, 2))(8UL, 0xAFCEB47B9B715C5DL), (VECTOR(uint64_t, 2))(8UL, 0xAFCEB47B9B715C5DL), 8UL, 0xAFCEB47B9B715C5DL, 8UL, 0xAFCEB47B9B715C5DL);
    uint8_t l_1124 = 1UL;
    VECTOR(uint64_t, 8) l_1125 = (VECTOR(uint64_t, 8))(7UL, (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 1UL), 1UL), 1UL, 7UL, 1UL);
    int16_t l_1131 = 0x0697L;
    int32_t ****l_1150 = &p_2547->g_997;
    int32_t *****l_1149 = &l_1150;
    VECTOR(uint64_t, 4) l_1151 = (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0xF55FC3E2E45DCE1CL), 0xF55FC3E2E45DCE1CL);
    VECTOR(int8_t, 8) l_1154 = (VECTOR(int8_t, 8))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 9L), 9L), 9L, (-6L), 9L);
    VECTOR(int8_t, 16) l_1155 = (VECTOR(int8_t, 16))(0x03L, (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, (-10L)), (-10L)), (-10L), 0x03L, (-10L), (VECTOR(int8_t, 2))(0x03L, (-10L)), (VECTOR(int8_t, 2))(0x03L, (-10L)), 0x03L, (-10L), 0x03L, (-10L));
    union U0 l_1177 = {0L};
    VECTOR(uint32_t, 16) l_1205 = (VECTOR(uint32_t, 16))(0x6F663D7DL, (VECTOR(uint32_t, 4))(0x6F663D7DL, (VECTOR(uint32_t, 2))(0x6F663D7DL, 6UL), 6UL), 6UL, 0x6F663D7DL, 6UL, (VECTOR(uint32_t, 2))(0x6F663D7DL, 6UL), (VECTOR(uint32_t, 2))(0x6F663D7DL, 6UL), 0x6F663D7DL, 6UL, 0x6F663D7DL, 6UL);
    VECTOR(uint64_t, 4) l_1230 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xA0E93B47CF18E693L), 0xA0E93B47CF18E693L);
    VECTOR(uint32_t, 16) l_1246 = (VECTOR(uint32_t, 16))(0xAB2AA2A9L, (VECTOR(uint32_t, 4))(0xAB2AA2A9L, (VECTOR(uint32_t, 2))(0xAB2AA2A9L, 2UL), 2UL), 2UL, 0xAB2AA2A9L, 2UL, (VECTOR(uint32_t, 2))(0xAB2AA2A9L, 2UL), (VECTOR(uint32_t, 2))(0xAB2AA2A9L, 2UL), 0xAB2AA2A9L, 2UL, 0xAB2AA2A9L, 2UL);
    VECTOR(int16_t, 16) l_1247 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x6BCBL), 0x6BCBL), 0x6BCBL, 0L, 0x6BCBL, (VECTOR(int16_t, 2))(0L, 0x6BCBL), (VECTOR(int16_t, 2))(0L, 0x6BCBL), 0L, 0x6BCBL, 0L, 0x6BCBL);
    int64_t ***l_1250 = &p_2547->g_918;
    uint32_t *l_1253 = (void*)0;
    VECTOR(int8_t, 16) l_1258 = (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x5DL), 0x5DL), 0x5DL, (-9L), 0x5DL, (VECTOR(int8_t, 2))((-9L), 0x5DL), (VECTOR(int8_t, 2))((-9L), 0x5DL), (-9L), 0x5DL, (-9L), 0x5DL);
    VECTOR(uint32_t, 2) l_1261 = (VECTOR(uint32_t, 2))(0x333C54B1L, 0UL);
    VECTOR(uint32_t, 16) l_1262 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xEF73BF2CL), 0xEF73BF2CL), 0xEF73BF2CL, 1UL, 0xEF73BF2CL, (VECTOR(uint32_t, 2))(1UL, 0xEF73BF2CL), (VECTOR(uint32_t, 2))(1UL, 0xEF73BF2CL), 1UL, 0xEF73BF2CL, 1UL, 0xEF73BF2CL);
    uint32_t ****l_1265 = &p_2547->g_1195[1];
    int8_t l_1266 = 0x2DL;
    int8_t *l_1275 = (void*)0;
    int8_t *l_1276 = &l_1266;
    uint64_t ***l_1277[10];
    VECTOR(uint8_t, 8) l_1385 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x40L), 0x40L), 0x40L, 1UL, 0x40L);
    VECTOR(uint8_t, 2) l_1390 = (VECTOR(uint8_t, 2))(0x2CL, 0UL);
    uint64_t l_1522 = 18446744073709551615UL;
    VECTOR(uint32_t, 4) l_1529 = (VECTOR(uint32_t, 4))(0x9E594345L, (VECTOR(uint32_t, 2))(0x9E594345L, 4294967295UL), 4294967295UL);
    int32_t l_1566 = 0L;
    uint8_t l_1567[9][4][4] = {{{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL}},{{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL}},{{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL}},{{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL}},{{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL}},{{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL}},{{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL}},{{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL}},{{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL},{253UL,0xBFL,9UL,0x4BL}}};
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_1277[i] = &p_2547->g_786;
    (*l_1110) &= ((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 2))(p_2547->g_1077.xx)), (safe_sub_func_uint8_t_u_u((l_1108[6] |= ((9UL > (FAKE_DIVERGE(p_2547->group_2_offset, get_group_id(2), 10) == p_2547->g_22)) || ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(p_2547->g_1080.xy)).xyxxyyyyyxyyxxxy, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(l_1081.sc, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(p_2547->g_1082.yxzywyzxzwzzwzxx)).s26)), 1L)).lo, ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_2547->g_1083.zyxxzwyw)))).s7320700271017267, ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(l_1084.wy)), ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1085.yy)), (-7L), 0x491D81E5L)), (int32_t)((*l_1105) = ((p_31 = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_1086.se3b6)))).w) ^ (&p_2547->g_943[7] != (((~0x78B1L) >= (safe_mul_func_int8_t_s_s(p_2547->g_813.s4, ((p_2547->g_397.s6 &= p_2547->g_1089) != (safe_div_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(l_1081.s1, (safe_lshift_func_int16_t_s_u((((safe_sub_func_uint8_t_u_u(((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_1104.s4174)))).odd, ((VECTOR(uint64_t, 16))(((0xE560L <= 0UL) || l_1084.y), ((VECTOR(uint64_t, 4))(18446744073709551615UL)), ((VECTOR(uint64_t, 4))(1UL)), 0x54D7293313F4F577L, ((VECTOR(uint64_t, 4))(18446744073709551615UL)), 2UL, 18446744073709551615UL)).s62))).xyyxyxyxxyxyxyxy)).sc <= l_1081.s5) >= 0x10FB6C71L), l_1084.w)) , l_1086.s1) ^ 0x4A651A34674C0684L), 2)))) ^ 0xB111A2D1L), l_1104.s2)))))) , &p_2547->g_234))))))).hi))), (-4L), 0x03857920L)).zywwxyzyyxzzywwx, ((VECTOR(int32_t, 16))(0x67382EC7L)))))))).s23))), 1L, 0x463604CBL)).wzwwxwzyzxwzzxxz)))))).sd935)), ((VECTOR(int32_t, 2))(1L)), 0x57214B0FL, 0x4161F7F4L)).s4 & l_1085.x) >= FAKE_DIVERGE(p_2547->group_0_offset, get_group_id(0), 10)))), l_1109.x)), ((VECTOR(int32_t, 4))(0x009A9BB3L)), 0x78546B2AL, 0L, (*l_1105), 7L, ((VECTOR(int32_t, 2))((-7L))), 0x32A92160L, 0x110A2EE8L)).s8;
    (*l_1110) = (safe_div_func_int64_t_s_s((((safe_mul_func_int16_t_s_s(p_31, 0x7152L)) , 0x2199F1E2399B09ACL) || (-1L)), (*l_1110)));
    for (p_2547->g_575 = (-22); (p_2547->g_575 != 35); p_2547->g_575 = safe_add_func_int64_t_s_s(p_2547->g_575, 1))
    { /* block id: 444 */
        int32_t *l_1117 = &p_2547->g_85[0][5];
        int8_t *l_1130 = (void*)0;
        VECTOR(int8_t, 2) l_1137 = (VECTOR(int8_t, 2))(1L, 0L);
        int8_t *l_1156 = &p_2547->g_201;
        VECTOR(uint16_t, 16) l_1159 = (VECTOR(uint16_t, 16))(0x2F38L, (VECTOR(uint16_t, 4))(0x2F38L, (VECTOR(uint16_t, 2))(0x2F38L, 0x12C5L), 0x12C5L), 0x12C5L, 0x2F38L, 0x12C5L, (VECTOR(uint16_t, 2))(0x2F38L, 0x12C5L), (VECTOR(uint16_t, 2))(0x2F38L, 0x12C5L), 0x2F38L, 0x12C5L, 0x2F38L, 0x12C5L);
        VECTOR(uint16_t, 8) l_1160 = (VECTOR(uint16_t, 8))(0x475FL, (VECTOR(uint16_t, 4))(0x475FL, (VECTOR(uint16_t, 2))(0x475FL, 0x5DEDL), 0x5DEDL), 0x5DEDL, 0x475FL, 0x5DEDL);
        uint64_t l_1165 = 1UL;
        union U0 *l_1181[8][5][6] = {{{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96}},{{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96}},{{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96}},{{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96}},{{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96}},{{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96}},{{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96}},{{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96},{&p_2547->g_96,&l_1177,&p_2547->g_96,&p_2547->g_96,&l_1177,&p_2547->g_96}}};
        int16_t *l_1226 = &l_1131;
        int32_t l_1229 = 7L;
        VECTOR(uint64_t, 16) l_1233 = (VECTOR(uint64_t, 16))(4UL, (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0x00C871C9666746BCL), 0x00C871C9666746BCL), 0x00C871C9666746BCL, 4UL, 0x00C871C9666746BCL, (VECTOR(uint64_t, 2))(4UL, 0x00C871C9666746BCL), (VECTOR(uint64_t, 2))(4UL, 0x00C871C9666746BCL), 4UL, 0x00C871C9666746BCL, 4UL, 0x00C871C9666746BCL);
        int64_t ***l_1249 = &p_2547->g_918;
        int i, j, k;
        l_1105 = l_1117;
        p_2547->g_1132[2][0][1] = func_49(((p_2547->g_239 | (safe_unary_minus_func_uint16_t_u(((safe_mul_func_int16_t_s_s((l_1085.y &= (p_2547->g_792.x ^= (p_31 >= (*l_1105)))), (-7L))) < ((*l_1105) && (l_1124 = ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_1121.sdc4de03d)).even)).even, (uint64_t)(p_2547->g_33.x != ((*p_2547->g_997) != &l_1117))))), 0x01B51753F06E4075L, 0xE672819E3AF85DC0L)).y)))))) == ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_1125.s0715)).zxyzxwyy)).s21)).lo), ((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((p_2547->g_765.x = (-1L)), l_1131)), (*l_1105))) > (*l_1110)), (*l_1105), &p_2547->g_211, p_2547);
        if (((((*l_1156) = (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(l_1137.xyyyxyyxyyyyxyyy)).s2bef, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 2))(2L, (-5L))).xxxxyxyxxyyyxxyy, ((VECTOR(int8_t, 2))((-1L), 0L)).xyyyyxxxyxxyxyyy))), ((VECTOR(int8_t, 4))(((*l_1105) != (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((*l_1110) != (((safe_mod_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), (((((safe_sub_func_int64_t_s_s((((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_2547->g_1148.s1e)))))), ((p_31 && (l_1149 != (void*)0)) ^ ((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(0x8207CFF00F735798L, 18446744073709551613UL, 0x7253954F3C909A5FL, ((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_1151.wz)).xxxyyyxyxyxyyxxx)).s5c24, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL)))).yyyyyyxx)).s04, ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))((((safe_rshift_func_int8_t_s_s(7L, (!((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(0x47L, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(l_1154.s37)), ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(l_1155.scbf16285)).s67)))))), (-1L), 0x0CL, ((VECTOR(int8_t, 8))((-1L))), ((VECTOR(int8_t, 2))((-10L))), 0x74L)).sf2, ((VECTOR(int8_t, 2))(0x48L)), ((VECTOR(int8_t, 2))(0L))))).lo))) || p_31) | 0x6A24FED7C2DD852DL), ((VECTOR(uint64_t, 2))(18446744073709551613UL)), GROUP_DIVERGE(2, 1), 1UL, ((VECTOR(uint64_t, 2))(0x5A5D2BAB8B2CA174L)), 7UL)).s52)), (*l_1117), 18446744073709551615UL, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(18446744073709551612UL)), 18446744073709551615UL)), ((VECTOR(uint64_t, 8))(0x3D6FD7AE05EF0100L)), ((VECTOR(uint64_t, 8))(0xBA396A2F0DE1C932L))))).s62)).yyxxxyyy)).odd, ((VECTOR(uint64_t, 4))(18446744073709551615UL))))).lo, ((VECTOR(uint64_t, 2))(18446744073709551611UL))))).yxxy)), ((VECTOR(uint64_t, 4))(0UL))))), 7UL)))).s7752404614647027, ((VECTOR(uint64_t, 16))(0x528FD44552CE69D3L))))).s9), p_2547->g_99.x, (-10L), 0x58L, ((VECTOR(int8_t, 8))(0x63L)), 6L, 0x7CL)).hi, (int8_t)p_31, (int8_t)p_2547->g_12.y))), (-3L), ((VECTOR(int8_t, 4))(0x10L)), 0x3BL, 1L, 0x31L)).s21, ((VECTOR(int8_t, 2))(0x51L))))), ((VECTOR(int8_t, 2))(4L))))), (-1L), 0x70L, (-7L), (*l_1110), (-1L), 0L)).s6104206432243350, ((VECTOR(int8_t, 16))(0x3AL))))).s3 < (*l_1110)), 0x75A9388B117DCAFBL)) > (*l_1117)) != (*l_1117)) ^ (*l_1117)) ^ (*l_1117)))) > 0x6262L) != p_2547->g_215.s0)), 4)), 0x188B4F73L))), p_31, 0L, (-4L))).wyywwywzxzxwyxwx))).sc1, ((VECTOR(int8_t, 2))(0x69L))))).yxyx))).x, (-8L)))) , GROUP_DIVERGE(2, 1)) ^ 0UL))
        { /* block id: 452 */
            int16_t l_1158 = 0x311EL;
            VECTOR(uint16_t, 2) l_1161 = (VECTOR(uint16_t, 2))(1UL, 0xA840L);
            int32_t **l_1178 = &p_2547->g_1132[2][0][1];
            uint64_t **l_1182 = (void*)0;
            union U0 **l_1186 = &l_1181[7][0][4];
            uint32_t ****l_1198 = &p_2547->g_1195[0];
            uint32_t ***l_1200 = &p_2547->g_1196;
            uint32_t ****l_1199 = &l_1200;
            union U0 l_1223 = {-9L};
            int i;
            (*p_2547->g_1174) = ((l_1158 = ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_2547->g_1157.s7174266556102725)).s7d)))).lo) & ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 8))(l_1159.s56842e52)).s4434410414102035, ((VECTOR(uint16_t, 2))(l_1160.s51)).xxyyyyyxxyxyyxxx))).s3, ((VECTOR(uint16_t, 2))(65535UL, 0x36F7L)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(65530UL, ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 16))(l_1161.xyxxyxyxyxxxyxxy)), (uint16_t)(*l_1110), (uint16_t)FAKE_DIVERGE(p_2547->local_1_offset, get_local_id(1), 10)))).s31, ((VECTOR(uint16_t, 8))(p_2547->g_1162.s51643762)).s62))), ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 4))((safe_rshift_func_int16_t_s_u((~(18446744073709551608UL > 0L)), 8)), ((l_1165 == p_2547->g_239) < (((*l_1105) = (((safe_lshift_func_uint8_t_u_u(((p_2547->g_99.z |= (safe_mul_func_int8_t_s_s((*l_1110), p_2547->g_189))) , ((VECTOR(uint8_t, 2))(255UL, 0UL)).hi), 5)) & (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(p_2547->g_397.s3, (*l_1117))), 0x79ADL))) < p_2547->g_743.y)) > l_1161.y)), 2UL, 0xE21FL)), ((VECTOR(uint16_t, 4))(0xE184L))))), 0xF564L)))), ((VECTOR(uint16_t, 4))(6UL)), 65528UL)).even)).s32, ((VECTOR(uint16_t, 2))(0x80D7L))))).yyxxxyyxxyyxyyxx, ((VECTOR(uint16_t, 16))(0x915BL))))).odd)).s5);
            (*l_1110) = ((safe_mod_func_uint64_t_u_u(((l_1177 , (((*l_1178) = l_1117) == (void*)0)) > (safe_mul_func_uint8_t_u_u(((void*)0 != l_1181[7][4][5]), (((*p_2547->g_785) = l_1182) != &p_2547->g_192)))), ((safe_mul_func_int16_t_s_s((p_2547->g_397.s5 = (((*l_1105) && (((p_31 < 0x14L) , p_31) | 9UL)) , p_2547->g_792.y)), p_31)) , FAKE_DIVERGE(p_2547->global_2_offset, get_global_id(2), 10)))) , p_31);
            (*l_1186) = l_1181[1][3][5];
            if ((safe_sub_func_int32_t_s_s(((*l_1105) = (safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(0L, ((safe_add_func_uint32_t_u_u((((*l_1198) = p_2547->g_1195[0]) != ((*l_1199) = &p_2547->g_1196)), ((*p_2547->g_997) == &l_1117))) != (&p_2547->g_997 == &p_2547->g_997)))), 6))), ((p_31 || (safe_div_func_uint8_t_u_u(p_31, (-2L)))) && p_31))))
            { /* block id: 465 */
                uint64_t *l_1222 = &p_2547->g_96.f1;
                int32_t l_1227 = 7L;
                int32_t *l_1228[2][5][3] = {{{&p_2547->g_85[0][1],(void*)0,&p_2547->g_80[0][6]},{&p_2547->g_85[0][1],(void*)0,&p_2547->g_80[0][6]},{&p_2547->g_85[0][1],(void*)0,&p_2547->g_80[0][6]},{&p_2547->g_85[0][1],(void*)0,&p_2547->g_80[0][6]},{&p_2547->g_85[0][1],(void*)0,&p_2547->g_80[0][6]}},{{&p_2547->g_85[0][1],(void*)0,&p_2547->g_80[0][6]},{&p_2547->g_85[0][1],(void*)0,&p_2547->g_80[0][6]},{&p_2547->g_85[0][1],(void*)0,&p_2547->g_80[0][6]},{&p_2547->g_85[0][1],(void*)0,&p_2547->g_80[0][6]},{&p_2547->g_85[0][1],(void*)0,&p_2547->g_80[0][6]}}};
                int i, j, k;
                l_1229 |= (+(safe_sub_func_int8_t_s_s(((((VECTOR(uint32_t, 16))(l_1205.s275c6ebf18e2708a)).s9 <= 0x7C15A1ECL) != ((VECTOR(uint64_t, 8))(p_2547->g_1206.xxxxyxxx)).s4), (safe_add_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(((p_2547->g_1054.y & (((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((((*l_1222) = (((0x4A58A8B6L != p_31) == p_31) != p_2547->g_33.x)) != (l_1223 , ((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(1L, p_31, (-1L), 0x087AL)))).xyywywzy, ((VECTOR(int16_t, 4))((p_2547->g_792.y ^= ((VECTOR(int16_t, 8))(p_2547->g_1224.xyzwywzw)).s1), ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(1L, ((~p_31) != 0x5756486487B181EBL), ((VECTOR(int16_t, 2))(0x1EFAL)), ((VECTOR(int16_t, 4))(0x3C95L)))).s24, ((VECTOR(int16_t, 2))(5L))))), 0x6F52L)).ywxxwwwz))).odd)).w > p_31) <= 1UL))) , p_2547->g_1162.s1), ((VECTOR(int16_t, 2))(0x1698L)), 5L)).yyzzwwyx)).even))).even, ((VECTOR(int16_t, 2))(3L))))).yyyyxyyy)).s1, p_31)) , (void*)0) != (void*)0), 14)), 0x50L)) , p_2547->g_1225[4]) == l_1226)) == l_1227))), 0)), 0x47L)) != p_31), (*l_1105))), p_31)))));
            }
            else
            { /* block id: 469 */
                uint16_t *l_1244 = (void*)0;
                uint16_t *l_1245[4][7][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_2547->g_575,&p_2547->g_132,(void*)0,&p_2547->g_575}}};
                int32_t l_1248 = (-1L);
                uint32_t *l_1252 = (void*)0;
                uint32_t **l_1251[6][10] = {{&l_1252,&l_1252,&l_1252,&l_1252,(void*)0,&l_1252,(void*)0,&l_1252,&l_1252,(void*)0},{&l_1252,&l_1252,&l_1252,&l_1252,(void*)0,&l_1252,(void*)0,&l_1252,&l_1252,(void*)0},{&l_1252,&l_1252,&l_1252,&l_1252,(void*)0,&l_1252,(void*)0,&l_1252,&l_1252,(void*)0},{&l_1252,&l_1252,&l_1252,&l_1252,(void*)0,&l_1252,(void*)0,&l_1252,&l_1252,(void*)0},{&l_1252,&l_1252,&l_1252,&l_1252,(void*)0,&l_1252,(void*)0,&l_1252,&l_1252,(void*)0},{&l_1252,&l_1252,&l_1252,&l_1252,(void*)0,&l_1252,(void*)0,&l_1252,&l_1252,(void*)0}};
                int32_t l_1254[4][1];
                int32_t *l_1256 = (void*)0;
                int32_t *l_1257 = &l_1223.f0;
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1254[i][j] = 0x541D3E88L;
                }
                l_1254[0][0] ^= (((VECTOR(uint64_t, 4))(0x0BF4A175E42DD2D7L, ((VECTOR(uint64_t, 2))(l_1230.xz)), 18446744073709551606UL)).y , (l_1110 != (l_1253 = ((safe_lshift_func_int8_t_s_u((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_1233.sb4)), 1UL, 0xF76B795D474625A9L)))).w <= p_31), (safe_sub_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((**p_2547->g_1196), (safe_lshift_func_uint16_t_u_u(((*l_1105) ^= p_31), 13)))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_1246.s8953cd8f3a3cc6df)).sba3b)).z)) > p_31) != 0xB51BL), (((**p_2547->g_1196) == (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 2))(0x5DDFL, 0x49BFL)), ((VECTOR(int16_t, 16))(l_1247.s066999bda9196810)).s60))).xyxxxxxy)).s4 || (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x636A5A63L, 0x2EDA76C7L)), 0x5CC79E5AL, l_1248, 0L, (-1L), 0x3E09C198L, 1L)), (int32_t)(-1L)))), ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))(0x4B57BCAEL))))).s7, 0x600F7957L, 0L, l_1248, ((VECTOR(int32_t, 8))(0x6E69A186L)), 8L, ((VECTOR(int32_t, 2))(0x71F0236CL)), 0x23CD1C30L)).s1 , l_1248))) , p_31))) , l_1249) != l_1250), FAKE_DIVERGE(p_2547->local_0_offset, get_local_id(0), 10))))) , (void*)0))));
                (*l_1257) &= (*l_1117);
            }
        }
        else
        { /* block id: 475 */
            (*l_1105) &= ((p_2547->g_733.s1 , ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(l_1258.sc7)).yyxy))).y) && p_2547->g_442.s7);
            return p_31;
        }
        l_1117 = &l_1108[6];
    }
    if ((safe_sub_func_int32_t_s_s((*l_1105), ((*p_2547->g_1197) = (((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 16))(l_1261.yyxxxyxxxxxyxyxx)).s2e, ((VECTOR(uint32_t, 16))(l_1262.s96ca9428fa0081f1)).s7a))).yxxxxyyy, ((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 2))(2L, 0x3E1C2430L)).xyxyyyyx, (int32_t)(l_1266 = ((safe_lshift_func_uint16_t_u_u((&p_2547->g_1195[5] == l_1265), 10)) < 253UL)), (int32_t)(((safe_sub_func_uint32_t_u_u((((((+p_31) != (((safe_div_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 2))(3L, 5L)).lo, 15)) & (*l_1110)), 10)) || p_31) >= 2L), ((*l_1276) = p_2547->g_220.sd))) , l_1277[5]) != (void*)0)) >= (*l_1105)) > p_31) & (*l_1105)), 6UL)) , 0x4BL) & p_31)))).s4715337343156226)).sa3, ((VECTOR(int32_t, 2))(0L))))))).xyyx, ((VECTOR(int32_t, 4))(5L))))), p_31, ((VECTOR(int32_t, 2))((-1L))), 0x64848F42L)).hi)).hi, ((VECTOR(int32_t, 2))(1L))))).xyyxyxxx))).s3 && (**p_2547->g_1196))))))
    { /* block id: 484 */
        uint32_t ***l_1319 = (void*)0;
        int32_t l_1327 = (-1L);
        int32_t l_1334 = 0x38C45841L;
        VECTOR(uint8_t, 8) l_1358 = (VECTOR(uint8_t, 8))(0x20L, (VECTOR(uint8_t, 4))(0x20L, (VECTOR(uint8_t, 2))(0x20L, 251UL), 251UL), 251UL, 0x20L, 251UL);
        int32_t *l_1399 = &p_2547->g_780[7];
        union U0 l_1409 = {1L};
        uint8_t l_1419 = 0x85L;
        uint32_t *l_1437 = (void*)0;
        int32_t *l_1518 = &p_2547->g_96.f0;
        int32_t *l_1519 = &l_1327;
        int32_t *l_1520 = &p_2547->g_85[0][1];
        int32_t *l_1521[7];
        int i;
        for (i = 0; i < 7; i++)
            l_1521[i] = &p_2547->g_428[0];
        for (p_2547->g_1002 = 0; (p_2547->g_1002 == (-13)); p_2547->g_1002--)
        { /* block id: 487 */
            uint32_t l_1280 = 1UL;
            l_1280 = (-7L);
            if ((atomic_inc(&p_2547->g_atomic_input[42 * get_linear_group_id() + 20]) == 2))
            { /* block id: 490 */
                int32_t l_1282 = 1L;
                int32_t *l_1281 = &l_1282;
                int32_t *l_1283 = &l_1282;
                union U0 l_1284 = {0x174D5D23L};
                uint32_t l_1285 = 0x5644E678L;
                union U0 l_1286 = {0x47A328B4L};
                int32_t l_1287 = (-10L);
                uint16_t l_1288 = 0xD5C7L;
                VECTOR(uint16_t, 4) l_1289 = (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0xFF15L), 0xFF15L);
                union U0 l_1290[1][2][2] = {{{{6L},{6L}},{{6L},{6L}}}};
                union U0 l_1291 = {0x29CD50BEL};
                int16_t l_1292 = (-3L);
                int32_t l_1293 = 0x7A8F20DCL;
                uint32_t l_1294 = 0x7B044500L;
                int16_t l_1295[7][7] = {{0x2B6EL,1L,1L,0x2DF6L,0x477AL,0x2B6EL,0x2DF6L},{0x2B6EL,1L,1L,0x2DF6L,0x477AL,0x2B6EL,0x2DF6L},{0x2B6EL,1L,1L,0x2DF6L,0x477AL,0x2B6EL,0x2DF6L},{0x2B6EL,1L,1L,0x2DF6L,0x477AL,0x2B6EL,0x2DF6L},{0x2B6EL,1L,1L,0x2DF6L,0x477AL,0x2B6EL,0x2DF6L},{0x2B6EL,1L,1L,0x2DF6L,0x477AL,0x2B6EL,0x2DF6L},{0x2B6EL,1L,1L,0x2DF6L,0x477AL,0x2B6EL,0x2DF6L}};
                VECTOR(int8_t, 16) l_1296 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x16L), 0x16L), 0x16L, 1L, 0x16L, (VECTOR(int8_t, 2))(1L, 0x16L), (VECTOR(int8_t, 2))(1L, 0x16L), 1L, 0x16L, 1L, 0x16L);
                int8_t l_1297 = 0x4BL;
                int32_t l_1298 = (-1L);
                uint32_t l_1299 = 0x3B3445D8L;
                int i, j, k;
                l_1283 = l_1281;
                l_1297 = (((l_1284 , (l_1285 , (((l_1286 , (l_1287 , ((l_1288 = 0x26B1L) , l_1289.z))) , (l_1291 = l_1290[0][1][1])) , ((*l_1283) = (l_1294 = (l_1292 , l_1293)))))) , l_1295[4][5]) , l_1296.s0);
                l_1299 ^= l_1298;
                for (l_1298 = (-20); (l_1298 <= 14); l_1298++)
                { /* block id: 500 */
                    uint8_t l_1302 = 0x6CL;
                    (1 + 1);
                }
                unsigned int result = 0;
                result += l_1282;
                result += l_1284.f0;
                result += l_1284.f1;
                result += l_1284.f2;
                result += l_1285;
                result += l_1286.f0;
                result += l_1286.f1;
                result += l_1286.f2;
                result += l_1287;
                result += l_1288;
                result += l_1289.w;
                result += l_1289.z;
                result += l_1289.y;
                result += l_1289.x;
                int l_1290_i0, l_1290_i1, l_1290_i2;
                for (l_1290_i0 = 0; l_1290_i0 < 1; l_1290_i0++) {
                    for (l_1290_i1 = 0; l_1290_i1 < 2; l_1290_i1++) {
                        for (l_1290_i2 = 0; l_1290_i2 < 2; l_1290_i2++) {
                            result += l_1290[l_1290_i0][l_1290_i1][l_1290_i2].f0;
                            result += l_1290[l_1290_i0][l_1290_i1][l_1290_i2].f1;
                            result += l_1290[l_1290_i0][l_1290_i1][l_1290_i2].f2;
                        }
                    }
                }
                result += l_1291.f0;
                result += l_1291.f1;
                result += l_1291.f2;
                result += l_1292;
                result += l_1293;
                result += l_1294;
                int l_1295_i0, l_1295_i1;
                for (l_1295_i0 = 0; l_1295_i0 < 7; l_1295_i0++) {
                    for (l_1295_i1 = 0; l_1295_i1 < 7; l_1295_i1++) {
                        result += l_1295[l_1295_i0][l_1295_i1];
                    }
                }
                result += l_1296.sf;
                result += l_1296.se;
                result += l_1296.sd;
                result += l_1296.sc;
                result += l_1296.sb;
                result += l_1296.sa;
                result += l_1296.s9;
                result += l_1296.s8;
                result += l_1296.s7;
                result += l_1296.s6;
                result += l_1296.s5;
                result += l_1296.s4;
                result += l_1296.s3;
                result += l_1296.s2;
                result += l_1296.s1;
                result += l_1296.s0;
                result += l_1297;
                result += l_1298;
                result += l_1299;
                atomic_add(&p_2547->g_special_values[42 * get_linear_group_id() + 20], result);
            }
            else
            { /* block id: 513 */
                (1 + 1);
            }
            for (p_2547->g_96.f1 = 0; (p_2547->g_96.f1 >= 29); ++p_2547->g_96.f1)
            { /* block id: 518 */
                return p_2547->g_765.y;
            }
            if (p_31)
                break;
        }
        for (p_2547->g_96.f0 = 20; (p_2547->g_96.f0 < (-24)); p_2547->g_96.f0--)
        { /* block id: 525 */
            int16_t l_1333 = 4L;
            uint64_t l_1335 = 0x2F22C0CF6E7AF678L;
            VECTOR(int32_t, 2) l_1352 = (VECTOR(int32_t, 2))((-10L), (-1L));
            VECTOR(int32_t, 16) l_1353 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x75392964L), 0x75392964L), 0x75392964L, 0L, 0x75392964L, (VECTOR(int32_t, 2))(0L, 0x75392964L), (VECTOR(int32_t, 2))(0L, 0x75392964L), 0L, 0x75392964L, 0L, 0x75392964L);
            VECTOR(uint8_t, 8) l_1365 = (VECTOR(uint8_t, 8))(0xABL, (VECTOR(uint8_t, 4))(0xABL, (VECTOR(uint8_t, 2))(0xABL, 1UL), 1UL), 1UL, 0xABL, 1UL);
            VECTOR(uint8_t, 4) l_1388 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 3UL), 3UL);
            uint32_t *l_1421 = &p_2547->g_752;
            uint32_t l_1430[6];
            int i;
            for (i = 0; i < 6; i++)
                l_1430[i] = 0x847160CFL;
            if (p_31)
            { /* block id: 526 */
                uint64_t l_1320[5];
                int32_t *l_1328 = (void*)0;
                int32_t *l_1329 = (void*)0;
                int32_t *l_1330 = &l_1108[2];
                int32_t *l_1331 = (void*)0;
                int32_t *l_1332[2];
                int i;
                for (i = 0; i < 5; i++)
                    l_1320[i] = 6UL;
                for (i = 0; i < 2; i++)
                    l_1332[i] = &p_2547->g_80[3][7];
                if ((atomic_inc(&p_2547->l_atomic_input[35]) == 4))
                { /* block id: 528 */
                    union U0 l_1314 = {1L};
                    int32_t l_1315 = 1L;
                    VECTOR(int32_t, 4) l_1316 = (VECTOR(int32_t, 4))(0x05AB8F36L, (VECTOR(int32_t, 2))(0x05AB8F36L, 0L), 0L);
                    int32_t l_1317[9] = {0x0D25F5B6L,0x28E3A548L,0x0D25F5B6L,0x0D25F5B6L,0x28E3A548L,0x0D25F5B6L,0x0D25F5B6L,0x28E3A548L,0x0D25F5B6L};
                    uint8_t l_1318 = 255UL;
                    int i;
                    l_1318 |= (l_1317[2] ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-5L), (l_1315 &= (l_1314 , 1L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1316.wwwy)).odd)).yyyy)).xwwwwyxyzyzwwzyy)))).s65)), (-8L), 0x2566CE64L, 0x537F24DCL, (-6L))).s6732467175235637)).sd);
                    unsigned int result = 0;
                    result += l_1314.f0;
                    result += l_1314.f1;
                    result += l_1314.f2;
                    result += l_1315;
                    result += l_1316.w;
                    result += l_1316.z;
                    result += l_1316.y;
                    result += l_1316.x;
                    int l_1317_i0;
                    for (l_1317_i0 = 0; l_1317_i0 < 9; l_1317_i0++) {
                        result += l_1317[l_1317_i0];
                    }
                    result += l_1318;
                    atomic_add(&p_2547->l_special_values[35], result);
                }
                else
                { /* block id: 532 */
                    (1 + 1);
                }
                l_1320[0] = (l_1319 != (*l_1265));
                if ((atomic_inc(&p_2547->g_atomic_input[42 * get_linear_group_id() + 33]) == 8))
                { /* block id: 537 */
                    int32_t l_1321 = 0x3042568BL;
                    uint64_t l_1322 = 0xA07975CB596EA353L;
                    VECTOR(int32_t, 4) l_1323 = (VECTOR(int32_t, 4))(0x51AF0FA9L, (VECTOR(int32_t, 2))(0x51AF0FA9L, 0x560C90ADL), 0x560C90ADL);
                    int32_t l_1324 = 0x3187269CL;
                    int32_t *l_1325 = &l_1321;
                    int32_t *l_1326 = &l_1324;
                    int i;
                    l_1322 = (l_1321 = 0x7E7BD727L);
                    l_1324 = ((VECTOR(int32_t, 16))(l_1323.xwywwzyyyxxxxxzz)).s8;
                    l_1326 = (l_1325 = (void*)0);
                    unsigned int result = 0;
                    result += l_1321;
                    result += l_1322;
                    result += l_1323.w;
                    result += l_1323.z;
                    result += l_1323.y;
                    result += l_1323.x;
                    result += l_1324;
                    atomic_add(&p_2547->g_special_values[42 * get_linear_group_id() + 33], result);
                }
                else
                { /* block id: 543 */
                    (1 + 1);
                }
                l_1335++;
            }
            else
            { /* block id: 547 */
                uint32_t l_1347 = 0x6620A1FDL;
                VECTOR(int32_t, 4) l_1351 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x1C60B397L), 0x1C60B397L);
                VECTOR(int16_t, 16) l_1373 = (VECTOR(int16_t, 16))(0x1B90L, (VECTOR(int16_t, 4))(0x1B90L, (VECTOR(int16_t, 2))(0x1B90L, 0x69F4L), 0x69F4L), 0x69F4L, 0x1B90L, 0x69F4L, (VECTOR(int16_t, 2))(0x1B90L, 0x69F4L), (VECTOR(int16_t, 2))(0x1B90L, 0x69F4L), 0x1B90L, 0x69F4L, 0x1B90L, 0x69F4L);
                VECTOR(int16_t, 2) l_1374 = (VECTOR(int16_t, 2))((-1L), 0x3BB6L);
                VECTOR(uint8_t, 8) l_1389 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xDDL), 0xDDL), 0xDDL, 255UL, 0xDDL);
                int64_t ***l_1404 = &p_2547->g_918;
                VECTOR(int16_t, 8) l_1414 = (VECTOR(int16_t, 8))(0x27CEL, (VECTOR(int16_t, 4))(0x27CEL, (VECTOR(int16_t, 2))(0x27CEL, 0L), 0L), 0L, 0x27CEL, 0L);
                int32_t *l_1433 = &l_1409.f0;
                VECTOR(int32_t, 4) l_1438 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 4L), 4L);
                int i;
                for (l_1124 = 23; (l_1124 != 47); l_1124 = safe_add_func_uint32_t_u_u(l_1124, 5))
                { /* block id: 550 */
                    int64_t *l_1348 = (void*)0;
                    int64_t *l_1349[8];
                    VECTOR(uint64_t, 8) l_1350 = (VECTOR(uint64_t, 8))(4UL, (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0x084BD80A74DCE8C8L), 0x084BD80A74DCE8C8L), 0x084BD80A74DCE8C8L, 4UL, 0x084BD80A74DCE8C8L);
                    VECTOR(uint8_t, 4) l_1359 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x42L), 0x42L);
                    int32_t *l_1370 = (void*)0;
                    int32_t *l_1371 = (void*)0;
                    int32_t *l_1372 = &p_2547->g_80[0][6];
                    VECTOR(uint8_t, 16) l_1386 = (VECTOR(uint8_t, 16))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 0x5CL), 0x5CL), 0x5CL, 6UL, 0x5CL, (VECTOR(uint8_t, 2))(6UL, 0x5CL), (VECTOR(uint8_t, 2))(6UL, 0x5CL), 6UL, 0x5CL, 6UL, 0x5CL);
                    VECTOR(uint16_t, 16) l_1393 = (VECTOR(uint16_t, 16))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0xBF70L), 0xBF70L), 0xBF70L, 65526UL, 0xBF70L, (VECTOR(uint16_t, 2))(65526UL, 0xBF70L), (VECTOR(uint16_t, 2))(65526UL, 0xBF70L), 65526UL, 0xBF70L, 65526UL, 0xBF70L);
                    union U0 l_1405 = {7L};
                    uint32_t **l_1411[4][6][5];
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                        l_1349[i] = &p_2547->g_239;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 6; j++)
                        {
                            for (k = 0; k < 5; k++)
                                l_1411[i][j][k] = &p_2547->g_1197;
                        }
                    }
                    (1 + 1);
                }
                (*l_1105) = (+0x4162F255L);
                for (p_2547->g_22 = 0; (p_2547->g_22 >= 3); ++p_2547->g_22)
                { /* block id: 580 */
                    if (p_31)
                        break;
                    if (p_31)
                        break;
                }
            }
            if ((*p_2547->g_1174))
                break;
        }
        if ((atomic_inc(&p_2547->l_atomic_input[9]) == 5))
        { /* block id: 588 */
            VECTOR(int32_t, 16) l_1441 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x50190244L), 0x50190244L), 0x50190244L, 1L, 0x50190244L, (VECTOR(int32_t, 2))(1L, 0x50190244L), (VECTOR(int32_t, 2))(1L, 0x50190244L), 1L, 0x50190244L, 1L, 0x50190244L);
            uint16_t l_1442[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
            VECTOR(uint8_t, 4) l_1443 = (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 255UL), 255UL);
            uint32_t l_1517 = 0x4DF3E11EL;
            int i;
            l_1442[2] ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1441.s718c9721)).odd)))).even)).hi;
            if ((l_1443.z , 9L))
            { /* block id: 590 */
                int32_t l_1444 = 0x5D72668BL;
                if (l_1444)
                { /* block id: 591 */
                    int32_t l_1446[5];
                    int32_t *l_1445 = &l_1446[2];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1446[i] = (-1L);
                    l_1445 = (void*)0;
                    for (l_1446[1] = 0; (l_1446[1] >= (-13)); l_1446[1] = safe_sub_func_uint16_t_u_u(l_1446[1], 4))
                    { /* block id: 595 */
                        union U0 l_1449[8] = {{0x1382375BL},{0x71407E5CL},{0x1382375BL},{0x1382375BL},{0x71407E5CL},{0x1382375BL},{0x1382375BL},{0x71407E5CL}};
                        int16_t l_1450 = 0x60CCL;
                        int64_t l_1451[6] = {1L,1L,1L,1L,1L,1L};
                        uint32_t l_1452 = 0xC5F85AB4L;
                        VECTOR(int32_t, 8) l_1453 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                        int64_t l_1454 = 1L;
                        uint32_t l_1455 = 4294967288UL;
                        int i;
                        l_1452 ^= (l_1449[6] , (l_1450 , l_1451[3]));
                        l_1441.s5 &= ((VECTOR(int32_t, 2))(l_1453.s12)).lo;
                        ++l_1455;
                    }
                    for (l_1446[2] = 25; (l_1446[2] <= 18); l_1446[2]--)
                    { /* block id: 602 */
                        uint32_t l_1460[1][8] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
                        uint32_t l_1461[2];
                        uint32_t l_1462 = 1UL;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_1461[i] = 0xAF305CA9L;
                        l_1441.s7 ^= l_1460[0][1];
                        l_1444 &= l_1461[1];
                        l_1462 = (-2L);
                    }
                    l_1444 = (l_1441.s2 = 0L);
                }
                else
                { /* block id: 609 */
                    VECTOR(int64_t, 4) l_1463 = (VECTOR(int64_t, 4))(0x57697F4BF060A309L, (VECTOR(int64_t, 2))(0x57697F4BF060A309L, 0x0691A5E5C8FFB2ADL), 0x0691A5E5C8FFB2ADL);
                    int32_t l_1465 = 0x5E2CC979L;
                    int32_t *l_1464 = &l_1465;
                    int32_t *l_1466 = &l_1465;
                    uint32_t l_1480 = 4294967295UL;
                    int i;
                    l_1466 = (((VECTOR(int64_t, 8))(l_1463.xzxzwwww)).s5 , (l_1464 = (void*)0));
                    for (l_1463.z = (-11); (l_1463.z < (-22)); l_1463.z = safe_sub_func_int16_t_s_s(l_1463.z, 1))
                    { /* block id: 614 */
                        int16_t l_1469 = (-9L);
                        uint16_t l_1470 = 0x0BABL;
                        VECTOR(int32_t, 4) l_1471 = (VECTOR(int32_t, 4))(0x005E3A1FL, (VECTOR(int32_t, 2))(0x005E3A1FL, 0x7B60C803L), 0x7B60C803L);
                        int i;
                        l_1470 = l_1469;
                        l_1444 &= ((VECTOR(int32_t, 8))(l_1471.yyxxzzxx)).s3;
                    }
                    for (l_1465 = 0; (l_1465 != (-8)); l_1465--)
                    { /* block id: 620 */
                        VECTOR(int32_t, 16) l_1474 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3992A665L), 0x3992A665L), 0x3992A665L, 0L, 0x3992A665L, (VECTOR(int32_t, 2))(0L, 0x3992A665L), (VECTOR(int32_t, 2))(0L, 0x3992A665L), 0L, 0x3992A665L, 0L, 0x3992A665L);
                        VECTOR(int32_t, 2) l_1475 = (VECTOR(int32_t, 2))(0x0756B0DCL, 0x30177873L);
                        VECTOR(int32_t, 4) l_1476 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x640E2AF9L), 0x640E2AF9L);
                        int16_t l_1477 = 0x7766L;
                        int32_t l_1478 = 1L;
                        int64_t l_1479 = 3L;
                        int i;
                        l_1479 |= ((l_1477 = ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1474.s80)).xyyyxyxy))))).odd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x6DC586B9L, 0x4AFCC079L)), 4L, 0L)), ((VECTOR(int32_t, 4))(l_1475.xyxx))))).xxyyzxxy)).s27, ((VECTOR(int32_t, 4))(l_1476.ywzw)).hi))).odd) , l_1478);
                    }
                    l_1441.sb &= l_1480;
                }
                for (l_1444 = 0; (l_1444 >= (-7)); l_1444 = safe_sub_func_uint16_t_u_u(l_1444, 8))
                { /* block id: 628 */
                    VECTOR(int32_t, 2) l_1483 = (VECTOR(int32_t, 2))(0x3ADF780CL, 0L);
                    VECTOR(int32_t, 4) l_1484 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
                    VECTOR(int32_t, 8) l_1485 = (VECTOR(int32_t, 8))(0x047F8A83L, (VECTOR(int32_t, 4))(0x047F8A83L, (VECTOR(int32_t, 2))(0x047F8A83L, 0x3047936BL), 0x3047936BL), 0x3047936BL, 0x047F8A83L, 0x3047936BL);
                    uint32_t l_1486 = 0x01824CBBL;
                    VECTOR(uint64_t, 2) l_1487 = (VECTOR(uint64_t, 2))(18446744073709551612UL, 18446744073709551606UL);
                    int16_t l_1490 = 0x6874L;
                    int i;
                    l_1441.sd ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(l_1483.yxyyxxyx)).s7361722636205437, ((VECTOR(int32_t, 16))(l_1484.xwzyyyywzyxyzxwz)), ((VECTOR(int32_t, 4))(l_1485.s1140)).xwyyyyxwzyzzyzwx))).hi)).s66)).odd;
                    l_1441.s5 |= l_1486;
                    l_1487.y--;
                    l_1441.s6 = l_1490;
                }
            }
            else
            { /* block id: 634 */
                int32_t l_1491 = 0x1742B247L;
                for (l_1491 = (-30); (l_1491 == (-21)); ++l_1491)
                { /* block id: 637 */
                    int32_t l_1494 = 0x27B3BDB1L;
                    int8_t l_1507 = 0x52L;
                    int32_t l_1508 = 0x0CE02AC7L;
                    int32_t l_1509 = 0L;
                    int8_t l_1510 = 0x24L;
                    int32_t l_1511 = 0L;
                    uint8_t l_1512 = 247UL;
                    int32_t *l_1515 = &l_1494;
                    int32_t *l_1516[10][8][3] = {{{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494}},{{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494}},{{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494}},{{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494}},{{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494}},{{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494}},{{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494}},{{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494}},{{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494}},{{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494},{(void*)0,(void*)0,&l_1494}}};
                    int i, j, k;
                    for (l_1494 = 0; (l_1494 >= (-10)); l_1494 = safe_sub_func_int8_t_s_s(l_1494, 2))
                    { /* block id: 640 */
                        int16_t l_1497 = 0x214BL;
                        int32_t l_1499 = 0x55F42B25L;
                        int32_t *l_1498[6][5] = {{&l_1499,(void*)0,&l_1499,&l_1499,(void*)0},{&l_1499,(void*)0,&l_1499,&l_1499,(void*)0},{&l_1499,(void*)0,&l_1499,&l_1499,(void*)0},{&l_1499,(void*)0,&l_1499,&l_1499,(void*)0},{&l_1499,(void*)0,&l_1499,&l_1499,(void*)0},{&l_1499,(void*)0,&l_1499,&l_1499,(void*)0}};
                        int32_t *l_1500 = &l_1499;
                        int32_t l_1501 = 0x3ADD2396L;
                        uint64_t l_1502[3];
                        int32_t l_1505 = 0x18F1E275L;
                        int32_t l_1506 = 0x1B5AA8E9L;
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_1502[i] = 18446744073709551612UL;
                        l_1500 = (l_1497 , l_1498[3][0]);
                        --l_1502[1];
                        l_1506 = (l_1441.s2 = l_1505);
                    }
                    l_1515 = ((++l_1512) , (void*)0);
                    l_1516[6][7][2] = (void*)0;
                }
            }
            l_1517 ^= (l_1441.sb = 0x0D96BD8DL);
            unsigned int result = 0;
            result += l_1441.sf;
            result += l_1441.se;
            result += l_1441.sd;
            result += l_1441.sc;
            result += l_1441.sb;
            result += l_1441.sa;
            result += l_1441.s9;
            result += l_1441.s8;
            result += l_1441.s7;
            result += l_1441.s6;
            result += l_1441.s5;
            result += l_1441.s4;
            result += l_1441.s3;
            result += l_1441.s2;
            result += l_1441.s1;
            result += l_1441.s0;
            int l_1442_i0;
            for (l_1442_i0 = 0; l_1442_i0 < 8; l_1442_i0++) {
                result += l_1442[l_1442_i0];
            }
            result += l_1443.w;
            result += l_1443.z;
            result += l_1443.y;
            result += l_1443.x;
            result += l_1517;
            atomic_add(&p_2547->l_special_values[9], result);
        }
        else
        { /* block id: 653 */
            (1 + 1);
        }
        l_1522++;
    }
    else
    { /* block id: 657 */
        uint32_t *l_1527 = &p_2547->g_211;
        VECTOR(uint32_t, 8) l_1528 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x1C0DD5E9L), 0x1C0DD5E9L), 0x1C0DD5E9L, 0UL, 0x1C0DD5E9L);
        uint8_t l_1534 = 252UL;
        int32_t l_1535 = 0x0F72544AL;
        uint64_t *l_1536 = &p_2547->g_22;
        uint32_t ****l_1596 = &p_2547->g_1195[5];
        union U0 *l_1606 = &l_1177;
        int32_t **l_1612 = &p_2547->g_1132[0][0][2];
        int i;
        if (((safe_div_func_uint64_t_u_u(FAKE_DIVERGE(p_2547->local_2_offset, get_local_id(2), 10), (-1L))) >= (((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(1L, ((((((0x0CC5EBB2L ^ 0x7A3D8C78L) && (((((*l_1527) |= ((**p_2547->g_1196) = GROUP_DIVERGE(0, 1))) , (((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 8))(0xFE7DDD3CL, 0UL, ((VECTOR(uint32_t, 4))(l_1528.s2044)), 4294967288UL, 0UL)).s25, (uint32_t)p_31))).xyxxxyyyyyyyxyyx, ((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 8))(l_1529.zzzwzxxz)).s0226042525536775, ((VECTOR(uint32_t, 4))(4294967288UL, (p_31 ^ ((safe_mul_func_uint8_t_u_u((l_1535 ^= (safe_rshift_func_int8_t_s_s((p_2547->g_564.x != ((*l_1105) ^ (((((((((*p_2547->g_1196) = l_1527) == (void*)0) , l_1105) != l_1527) & p_2547->g_1083.y) ^ 1L) == l_1528.s6) >= l_1534))), 6))), p_31)) <= l_1528.s0)), 4294967295UL, 4294967295UL)).xxwwwyyxwwwxyxyx))), ((VECTOR(uint32_t, 16))(1UL))))).se , l_1536)) != p_32) <= l_1534)) , p_31) , p_2547->g_223.y) , (void*)0) != (void*)0), ((VECTOR(int32_t, 4))(0x3A39FD3EL)), p_31, ((VECTOR(int32_t, 4))((-7L))), 0x74824F5AL, (-10L), ((VECTOR(int32_t, 2))(0x2ABFE1DBL)), 0L)).lo, ((VECTOR(int32_t, 8))(0x4CBEF26AL))))).s4 , 0x37D73122L)))
        { /* block id: 662 */
            uint32_t l_1568 = 4294967290UL;
            int32_t l_1603 = (-2L);
            for (p_2547->g_132 = (-28); (p_2547->g_132 > 28); p_2547->g_132++)
            { /* block id: 665 */
                VECTOR(uint16_t, 4) l_1552 = (VECTOR(uint16_t, 4))(0xE124L, (VECTOR(uint16_t, 2))(0xE124L, 65533UL), 65533UL);
                int32_t l_1575[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i;
                for (p_2547->g_239 = (-23); (p_2547->g_239 > 1); p_2547->g_239++)
                { /* block id: 668 */
                    int32_t *****l_1542 = &l_1150;
                    int32_t *l_1554[1];
                    uint32_t ***l_1565 = &p_2547->g_1196;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1554[i] = &p_2547->g_780[7];
                    (*l_1110) ^= ((p_2547->g_1541 != l_1542) < ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x2D006E02L, (-1L))).yyxyxyxxyyyyxyxx)))).s8 , l_1105) != l_1527));
                    l_1535 = ((0xC53DBBAE1AA8B743L || 0xC8CD21ACDD65E1A4L) == ((((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(4294967289UL, ((*l_1110) = (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0xA624L, 9UL, 0xA69EL, 0x3A5CL)), 0x3B80L, ((VECTOR(uint16_t, 2))(0UL, 65531UL)), 0xF40AL)).lo, ((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 8))(p_2547->g_1551.xyxxxxxz)).s2275667004373262, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(1UL, 2UL)).xxyxyyyx)).s2242105357115552, ((VECTOR(uint16_t, 16))(l_1552.wwywwzwyxywxyyyy))))).sa7d3, ((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(p_2547->g_1013.z, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 2))(p_2547->g_1553.yx)).xyxx, (uint16_t)((~(((p_2547->g_780[9] = p_2547->g_1346.x) , (safe_mod_func_int16_t_s_s((((safe_add_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(p_2547->g_1013.w, (p_31 || (safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((p_2547->g_211 , (void*)0) != l_1565), l_1566)), l_1552.w))))) && (*l_1110)), p_2547->g_145)) , l_1552.z) <= 1L), 0x6B4FL))) ^ 0x279438BFFABF3418L)) , GROUP_DIVERGE(2, 1))))).even)), 65535UL, p_2547->g_239, ((VECTOR(uint16_t, 2))(65535UL)), 8UL, 0x73CEL)), p_31, ((VECTOR(uint16_t, 4))(65533UL)), 0x4952L, 0x571FL)))).odd, ((VECTOR(uint16_t, 8))(0x2AC1L))))), 1UL, 1UL, p_2547->g_391[2], ((VECTOR(uint16_t, 2))(65527UL)), l_1567[7][0][2], 0xE475L, 7UL)), ((VECTOR(uint16_t, 16))(1UL))))).sbc01))).y, p_31)), 7))))), 0)) >= p_31) , p_31) < p_31));
                }
                l_1568--;
                for (p_2547->g_1418 = 0; (p_2547->g_1418 == (-9)); p_2547->g_1418 = safe_sub_func_int16_t_s_s(p_2547->g_1418, 3))
                { /* block id: 677 */
                    uint64_t l_1584 = 0x9693A12010AAC28FL;
                    uint8_t *l_1585 = (void*)0;
                    uint8_t *l_1586 = &l_1124;
                    union U0 *l_1587 = &p_2547->g_96;
                    uint32_t *l_1588 = (void*)0;
                    (*p_2547->g_1589) = l_1588;
                }
            }
            (*l_1105) = ((safe_unary_minus_func_uint8_t_u(l_1528.s4)) , (l_1603 = ((~(safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((1L >= (safe_unary_minus_func_int64_t_s(p_31))) ^ ((-1L) & (&p_31 == (void*)0))), (p_2547->g_765.x ^= (l_1596 != ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(l_1528.s6, ((safe_rshift_func_int8_t_s_s((p_2547->g_1013.y <= l_1568), p_2547->g_743.y)) ^ 0xD01CL))), p_2547->g_531.sa)) , &p_2547->g_1195[0]))))), 1UL))) >= p_31)));
        }
        else
        { /* block id: 687 */
            union U0 *l_1605 = &l_1177;
            union U0 **l_1604 = &l_1605;
            (*l_1604) = &l_1177;
        }
        (*p_2547->g_1608) = l_1606;
        (*l_1612) = (((*l_1110) || ((void*)0 == &p_2547->g_785)) , &l_1535);
    }
    return p_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_2547->g_145 p_2547->g_944 p_2547->g_189 p_2547->g_194 p_2547->g_226 p_2547->g_442 p_2547->g_586 p_2547->g_997 p_2547->g_1002 p_2547->g_132 p_2547->g_383 p_2547->g_127 p_2547->g_733 p_2547->g_96.f0 p_2547->g_175 p_2547->g_176 p_2547->g_813 p_2547->g_234 p_2547->g_743 p_2547->g_174
 * writes: p_2547->g_145 p_2547->g_456 p_2547->g_189 p_2547->g_997 p_2547->g_437 p_2547->g_780 p_2547->g_383 p_2547->g_575 p_2547->g_733 p_2547->g_96.f0 p_2547->g_127 p_2547->g_792 p_2547->g_99
 */
union U0  func_35(uint8_t  p_36, struct S1 * p_2547)
{ /* block id: 378 */
    int32_t *l_942 = (void*)0;
    int32_t l_954[8][10] = {{8L,0x06F3EBECL,0x15CAEAF2L,(-1L),1L,0x159EC363L,(-1L),0x3FC2C711L,(-1L),0x159EC363L},{8L,0x06F3EBECL,0x15CAEAF2L,(-1L),1L,0x159EC363L,(-1L),0x3FC2C711L,(-1L),0x159EC363L},{8L,0x06F3EBECL,0x15CAEAF2L,(-1L),1L,0x159EC363L,(-1L),0x3FC2C711L,(-1L),0x159EC363L},{8L,0x06F3EBECL,0x15CAEAF2L,(-1L),1L,0x159EC363L,(-1L),0x3FC2C711L,(-1L),0x159EC363L},{8L,0x06F3EBECL,0x15CAEAF2L,(-1L),1L,0x159EC363L,(-1L),0x3FC2C711L,(-1L),0x159EC363L},{8L,0x06F3EBECL,0x15CAEAF2L,(-1L),1L,0x159EC363L,(-1L),0x3FC2C711L,(-1L),0x159EC363L},{8L,0x06F3EBECL,0x15CAEAF2L,(-1L),1L,0x159EC363L,(-1L),0x3FC2C711L,(-1L),0x159EC363L},{8L,0x06F3EBECL,0x15CAEAF2L,(-1L),1L,0x159EC363L,(-1L),0x3FC2C711L,(-1L),0x159EC363L}};
    int32_t l_962[9][7] = {{1L,(-1L),0x75B4008FL,(-1L),1L,1L,(-1L)},{1L,(-1L),0x75B4008FL,(-1L),1L,1L,(-1L)},{1L,(-1L),0x75B4008FL,(-1L),1L,1L,(-1L)},{1L,(-1L),0x75B4008FL,(-1L),1L,1L,(-1L)},{1L,(-1L),0x75B4008FL,(-1L),1L,1L,(-1L)},{1L,(-1L),0x75B4008FL,(-1L),1L,1L,(-1L)},{1L,(-1L),0x75B4008FL,(-1L),1L,1L,(-1L)},{1L,(-1L),0x75B4008FL,(-1L),1L,1L,(-1L)},{1L,(-1L),0x75B4008FL,(-1L),1L,1L,(-1L)}};
    int32_t l_988 = (-2L);
    int32_t l_991[7];
    VECTOR(uint16_t, 4) l_1033 = (VECTOR(uint16_t, 4))(0x86F8L, (VECTOR(uint16_t, 2))(0x86F8L, 65528UL), 65528UL);
    VECTOR(uint16_t, 16) l_1034 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65531UL), 65531UL), 65531UL, 1UL, 65531UL, (VECTOR(uint16_t, 2))(1UL, 65531UL), (VECTOR(uint16_t, 2))(1UL, 65531UL), 1UL, 65531UL, 1UL, 65531UL);
    int32_t ****l_1060 = &p_2547->g_997;
    int i, j;
    for (i = 0; i < 7; i++)
        l_991[i] = 3L;
    for (p_2547->g_145 = 0; (p_2547->g_145 <= 1); ++p_2547->g_145)
    { /* block id: 381 */
        VECTOR(int32_t, 4) l_951 = (VECTOR(int32_t, 4))(0x41D6BFCEL, (VECTOR(int32_t, 2))(0x41D6BFCEL, 0x269705DEL), 0x269705DEL);
        int32_t l_952 = 1L;
        int32_t l_955 = 0x3E2FB432L;
        int64_t l_989 = 4L;
        uint16_t l_1055 = 65535UL;
        int32_t ****l_1059 = &p_2547->g_997;
        int32_t *****l_1058 = &l_1059;
        int32_t *****l_1061 = &l_1060;
        int16_t *l_1062 = (void*)0;
        int16_t *l_1063 = (void*)0;
        int16_t *l_1064 = (void*)0;
        int16_t *l_1065 = (void*)0;
        int16_t *l_1066 = (void*)0;
        int16_t *l_1067[3];
        int32_t *l_1068[1];
        int i;
        for (i = 0; i < 3; i++)
            l_1067[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_1068[i] = (void*)0;
        (*p_2547->g_944) = l_942;
        for (p_2547->g_189 = 0; (p_2547->g_189 != 13); ++p_2547->g_189)
        { /* block id: 385 */
            int32_t *l_953[6][2][9] = {{{(void*)0,&p_2547->g_428[0],&p_2547->g_85[0][6],(void*)0,&p_2547->g_428[0],(void*)0,&p_2547->g_85[0][6],&p_2547->g_428[0],(void*)0},{(void*)0,&p_2547->g_428[0],&p_2547->g_85[0][6],(void*)0,&p_2547->g_428[0],(void*)0,&p_2547->g_85[0][6],&p_2547->g_428[0],(void*)0}},{{(void*)0,&p_2547->g_428[0],&p_2547->g_85[0][6],(void*)0,&p_2547->g_428[0],(void*)0,&p_2547->g_85[0][6],&p_2547->g_428[0],(void*)0},{(void*)0,&p_2547->g_428[0],&p_2547->g_85[0][6],(void*)0,&p_2547->g_428[0],(void*)0,&p_2547->g_85[0][6],&p_2547->g_428[0],(void*)0}},{{(void*)0,&p_2547->g_428[0],&p_2547->g_85[0][6],(void*)0,&p_2547->g_428[0],(void*)0,&p_2547->g_85[0][6],&p_2547->g_428[0],(void*)0},{(void*)0,&p_2547->g_428[0],&p_2547->g_85[0][6],(void*)0,&p_2547->g_428[0],(void*)0,&p_2547->g_85[0][6],&p_2547->g_428[0],(void*)0}},{{(void*)0,&p_2547->g_428[0],&p_2547->g_85[0][6],(void*)0,&p_2547->g_428[0],(void*)0,&p_2547->g_85[0][6],&p_2547->g_428[0],(void*)0},{(void*)0,&p_2547->g_428[0],&p_2547->g_85[0][6],(void*)0,&p_2547->g_428[0],(void*)0,&p_2547->g_85[0][6],&p_2547->g_428[0],(void*)0}},{{(void*)0,&p_2547->g_428[0],&p_2547->g_85[0][6],(void*)0,&p_2547->g_428[0],(void*)0,&p_2547->g_85[0][6],&p_2547->g_428[0],(void*)0},{(void*)0,&p_2547->g_428[0],&p_2547->g_85[0][6],(void*)0,&p_2547->g_428[0],(void*)0,&p_2547->g_85[0][6],&p_2547->g_428[0],(void*)0}},{{(void*)0,&p_2547->g_428[0],&p_2547->g_85[0][6],(void*)0,&p_2547->g_428[0],(void*)0,&p_2547->g_85[0][6],&p_2547->g_428[0],(void*)0},{(void*)0,&p_2547->g_428[0],&p_2547->g_85[0][6],(void*)0,&p_2547->g_428[0],(void*)0,&p_2547->g_85[0][6],&p_2547->g_428[0],(void*)0}}};
            int32_t l_973[4][7] = {{(-1L),(-1L),0x3A4C24C8L,(-10L),0x728634E5L,1L,(-9L)},{(-1L),(-1L),0x3A4C24C8L,(-10L),0x728634E5L,1L,(-9L)},{(-1L),(-1L),0x3A4C24C8L,(-10L),0x728634E5L,1L,(-9L)},{(-1L),(-1L),0x3A4C24C8L,(-10L),0x728634E5L,1L,(-9L)}};
            uint8_t *l_976 = (void*)0;
            uint8_t *l_977[8];
            uint64_t *l_982[4][8][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int16_t *l_983 = (void*)0;
            int16_t *l_984 = (void*)0;
            int16_t *l_985 = (void*)0;
            int16_t *l_986 = (void*)0;
            int16_t *l_987[4][2][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
            uint64_t l_990[7][1][1];
            int8_t l_996 = (-5L);
            int32_t ***l_1000[9];
            VECTOR(uint32_t, 8) l_1045 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_977[i] = (void*)0;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_990[i][j][k] = 0x34CAA67A313382B5L;
                }
            }
            for (i = 0; i < 9; i++)
                l_1000[i] = &p_2547->g_234;
            l_991[6] &= ((safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s((((((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_951.yxywzxww)).s0464225566406664)).s3 == (l_955 = (l_954[4][2] = (l_952 = p_36)))) != 2UL) & ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((l_962[3][4] = (safe_add_func_int32_t_s_s(l_962[8][2], (0x5FL < ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 8))(((((p_2547->g_80[5][4] , 0x1FDCC6D6L) , (safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((l_973[0][5] >= (safe_mul_func_int16_t_s_s((l_988 = (p_36 <= ((((++p_2547->g_383.x) , (((p_2547->g_22 = (safe_mul_func_int8_t_s_s((0x35L | 0x17L), GROUP_DIVERGE(1, 1)))) <= p_36) < 4294967289UL)) | GROUP_DIVERGE(1, 1)) >= p_2547->g_33.y))), l_989))), p_36)), l_951.x))) , l_951.x) > p_36), 255UL, ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 4))(1UL)))).s24))).xyxxyxyy, ((VECTOR(uint8_t, 8))(0x10L)), ((VECTOR(uint8_t, 8))(0x44L))))).s12, ((VECTOR(uint8_t, 2))(1UL))))).xyyx, ((VECTOR(uint8_t, 4))(0x29L))))), ((VECTOR(uint8_t, 4))(0x1FL)))).s5, p_36)) , p_2547->g_194.y), 9)), p_2547->g_226.s3)) , p_2547->g_442.s2))))), p_2547->g_586.w)) < p_36), 1)) < p_36)) ^ 0x49L) | GROUP_DIVERGE(0, 1)), l_990[2][0][0])), l_989)) == 0x7CC6L);
            for (l_955 = 0; (l_955 != 5); l_955 = safe_add_func_int32_t_s_s(l_955, 1))
            { /* block id: 396 */
                int32_t ****l_998 = &p_2547->g_997;
                VECTOR(int32_t, 8) l_999 = (VECTOR(int32_t, 8))(0x304AC2BDL, (VECTOR(int32_t, 4))(0x304AC2BDL, (VECTOR(int32_t, 2))(0x304AC2BDL, 0x1CCCB964L), 0x1CCCB964L), 0x1CCCB964L, 0x304AC2BDL, 0x1CCCB964L);
                int8_t *l_1001[5][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t *l_1014 = &p_2547->g_780[7];
                uint16_t *l_1025[4];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_1025[i] = &p_2547->g_132;
                l_952 ^= (safe_rshift_func_int16_t_s_u(((l_996 >= (((*l_998) = p_2547->g_997) != (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_999.s35)).xxxyyxyx)).s0 , l_1000[6]))) || (p_2547->g_437.s7 = (-9L))), (p_2547->g_733.s5 &= (FAKE_DIVERGE(p_2547->local_0_offset, get_local_id(0), 10) >= ((p_2547->g_1002 || (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((p_2547->g_575 = ((safe_sub_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u((p_36 >= (&l_955 != (((*l_1014) = (((VECTOR(uint32_t, 2))(p_2547->g_1013.zy)).hi != p_2547->g_132)) , ((safe_add_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((p_2547->g_383.z &= GROUP_DIVERGE(1, 1)), (safe_sub_func_int32_t_s_s(l_951.w, 0x05E0EF6AL)))) ^ l_989), p_36)), p_36)) & 248UL), p_36)) , &l_955)))), 0x15L)) == p_2547->g_127.s1) > 1L), p_36)) | p_36)), 0x2FA2L)), 1)), 0x7EFDL))) < 0x69A68EE5L)))));
                (*p_2547->g_944) = &l_962[8][2];
                for (p_2547->g_96.f0 = (-27); (p_2547->g_96.f0 >= (-14)); p_2547->g_96.f0 = safe_add_func_uint8_t_u_u(p_2547->g_96.f0, 1))
                { /* block id: 407 */
                    uint16_t l_1046 = 0x6B31L;
                    VECTOR(int32_t, 16) l_1053 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                    int i;
                    if ((atomic_inc(&p_2547->l_atomic_input[30]) == 5))
                    { /* block id: 409 */
                        uint8_t l_1028[2][7][5] = {{{255UL,0x5FL,7UL,7UL,0x5FL},{255UL,0x5FL,7UL,7UL,0x5FL},{255UL,0x5FL,7UL,7UL,0x5FL},{255UL,0x5FL,7UL,7UL,0x5FL},{255UL,0x5FL,7UL,7UL,0x5FL},{255UL,0x5FL,7UL,7UL,0x5FL},{255UL,0x5FL,7UL,7UL,0x5FL}},{{255UL,0x5FL,7UL,7UL,0x5FL},{255UL,0x5FL,7UL,7UL,0x5FL},{255UL,0x5FL,7UL,7UL,0x5FL},{255UL,0x5FL,7UL,7UL,0x5FL},{255UL,0x5FL,7UL,7UL,0x5FL},{255UL,0x5FL,7UL,7UL,0x5FL},{255UL,0x5FL,7UL,7UL,0x5FL}}};
                        uint16_t l_1029[6][5][4] = {{{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL}},{{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL}},{{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL}},{{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL}},{{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL}},{{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL},{65531UL,65531UL,0xF2BFL,65535UL}}};
                        int i, j, k;
                        l_1029[5][3][0] |= (l_1028[0][0][0] , (GROUP_DIVERGE(0, 1) , 1L));
                        unsigned int result = 0;
                        int l_1028_i0, l_1028_i1, l_1028_i2;
                        for (l_1028_i0 = 0; l_1028_i0 < 2; l_1028_i0++) {
                            for (l_1028_i1 = 0; l_1028_i1 < 7; l_1028_i1++) {
                                for (l_1028_i2 = 0; l_1028_i2 < 5; l_1028_i2++) {
                                    result += l_1028[l_1028_i0][l_1028_i1][l_1028_i2];
                                }
                            }
                        }
                        int l_1029_i0, l_1029_i1, l_1029_i2;
                        for (l_1029_i0 = 0; l_1029_i0 < 6; l_1029_i0++) {
                            for (l_1029_i1 = 0; l_1029_i1 < 5; l_1029_i1++) {
                                for (l_1029_i2 = 0; l_1029_i2 < 4; l_1029_i2++) {
                                    result += l_1029[l_1029_i0][l_1029_i1][l_1029_i2];
                                }
                            }
                        }
                        atomic_add(&p_2547->l_special_values[30], result);
                    }
                    else
                    { /* block id: 411 */
                        (1 + 1);
                    }
                    if (p_36)
                    { /* block id: 414 */
                        int64_t l_1030 = 0L;
                        l_1030 |= (l_999.s4 & p_36);
                        return (*p_2547->g_175);
                    }
                    else
                    { /* block id: 417 */
                        int8_t *l_1037 = (void*)0;
                        int32_t l_1040 = 0x45E7548EL;
                        l_1046 = (safe_mul_func_int8_t_s_s((!(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_1033.yyww)).ywzzyyzzwywwzywy)).odd)).lo, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_1034.s4d2e777b87174839)))).s74)).yxyy))))).x <= 0x3815L)), ((safe_lshift_func_uint8_t_u_u((((p_2547->g_813.s1 , l_1037) == ((safe_sub_func_uint8_t_u_u(p_36, ((((l_1040 > ((void*)0 == (**l_998))) | (p_2547->g_792.x = (((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((p_2547->g_127.s1 = ((((VECTOR(uint32_t, 2))(l_1045.s14)).lo , p_36) & (p_36 , p_36))), l_1040)) <= p_36), p_36)) <= l_999.s2) == l_1040))) < 2L) | l_1040))) , (void*)0)) ^ p_2547->g_743.x), 1)) > p_36)));
                        l_999.s3 = (safe_mul_func_int8_t_s_s((p_36 > (safe_sub_func_int16_t_s_s((l_951.w >= p_2547->g_813.s6), (p_36 == (safe_mul_func_uint8_t_u_u(l_1053.s2, 0x7FL)))))), (0x0FL == ((VECTOR(int8_t, 16))(p_2547->g_1054.yxxxyxyxyxxxyxyx)).sf)));
                    }
                    (*p_2547->g_944) = l_1014;
                    if (l_1055)
                        break;
                }
            }
        }
        l_962[0][5] = (safe_mul_func_uint16_t_u_u(((((*l_1058) = &p_2547->g_997) != ((*l_1061) = l_1060)) ^ p_36), (p_2547->g_99.x = (l_954[3][6] = 0x35C5L))));
    }
    return (**p_2547->g_174);
}


/* ------------------------------------------ */
/* 
 * reads : p_2547->g_44 p_2547->g_22 p_2547->g_96 p_2547->g_99 p_2547->g_145 p_2547->g_85 p_2547->g_211 p_2547->g_215 p_2547->g_216 p_2547->g_220 p_2547->g_223 p_2547->g_226 p_2547->g_234 p_2547->g_195 p_2547->g_194 p_2547->g_239 p_2547->g_80 p_2547->g_383 p_2547->g_390 p_2547->g_397 p_2547->g_353 p_2547->g_437 p_2547->g_442 p_2547->g_comm_values p_2547->g_428 p_2547->g_130 p_2547->g_575 p_2547->g_456 p_2547->g_694 p_2547->g_564 p_2547->g_189 p_2547->g_538 p_2547->g_584 p_2547->g_733 p_2547->g_743 p_2547->g_745 p_2547->g_127 p_2547->g_607 p_2547->g_752 p_2547->g_96.f2 p_2547->g_765 p_2547->g_780 p_2547->g_785 p_2547->l_comm_values p_2547->g_792 p_2547->g_793 p_2547->g_813 p_2547->g_815 p_2547->g_586 p_2547->g_201 p_2547->g_504 p_2547->g_174 p_2547->g_175 p_2547->g_176 p_2547->g_176.f0
 * writes: p_2547->g_41 p_2547->g_22 p_2547->g_80 p_2547->g_99 p_2547->g_96.f2 p_2547->g_211 p_2547->g_145 p_2547->g_201 p_2547->g_239 p_2547->g_85 p_2547->g_194 p_2547->g_353 p_2547->g_189 p_2547->g_428 p_2547->g_456 p_2547->g_127 p_2547->g_130 p_2547->g_comm_values p_2547->g_564 p_2547->g_437 p_2547->g_780 p_2547->g_785 p_2547->g_575 p_2547->g_752 p_2547->g_216 p_2547->g_96.f0 p_2547->g_918 p_2547->g_861
 */
uint8_t  func_37(uint64_t  p_38, struct S1 * p_2547)
{ /* block id: 8 */
    uint64_t *l_40[6] = {&p_2547->g_22,(void*)0,&p_2547->g_22,&p_2547->g_22,(void*)0,&p_2547->g_22};
    uint64_t **l_39[10][10] = {{&l_40[5],&l_40[5],&l_40[5],&l_40[5],(void*)0,&l_40[5],&l_40[5],&l_40[5],&l_40[5],&l_40[5]},{&l_40[5],&l_40[5],&l_40[5],&l_40[5],(void*)0,&l_40[5],&l_40[5],&l_40[5],&l_40[5],&l_40[5]},{&l_40[5],&l_40[5],&l_40[5],&l_40[5],(void*)0,&l_40[5],&l_40[5],&l_40[5],&l_40[5],&l_40[5]},{&l_40[5],&l_40[5],&l_40[5],&l_40[5],(void*)0,&l_40[5],&l_40[5],&l_40[5],&l_40[5],&l_40[5]},{&l_40[5],&l_40[5],&l_40[5],&l_40[5],(void*)0,&l_40[5],&l_40[5],&l_40[5],&l_40[5],&l_40[5]},{&l_40[5],&l_40[5],&l_40[5],&l_40[5],(void*)0,&l_40[5],&l_40[5],&l_40[5],&l_40[5],&l_40[5]},{&l_40[5],&l_40[5],&l_40[5],&l_40[5],(void*)0,&l_40[5],&l_40[5],&l_40[5],&l_40[5],&l_40[5]},{&l_40[5],&l_40[5],&l_40[5],&l_40[5],(void*)0,&l_40[5],&l_40[5],&l_40[5],&l_40[5],&l_40[5]},{&l_40[5],&l_40[5],&l_40[5],&l_40[5],(void*)0,&l_40[5],&l_40[5],&l_40[5],&l_40[5],&l_40[5]},{&l_40[5],&l_40[5],&l_40[5],&l_40[5],(void*)0,&l_40[5],&l_40[5],&l_40[5],&l_40[5],&l_40[5]}};
    VECTOR(uint32_t, 8) l_42 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x496125B6L), 0x496125B6L), 0x496125B6L, 4294967295UL, 0x496125B6L);
    VECTOR(uint32_t, 4) l_43 = (VECTOR(uint32_t, 4))(0x63E3B667L, (VECTOR(uint32_t, 2))(0x63E3B667L, 0x5778C4B1L), 0x5778C4B1L);
    uint32_t *l_45 = (void*)0;
    uint32_t *l_46 = (void*)0;
    uint32_t *l_47[4][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_48[3][4][10] = {{{0x32349D53L,0x32349D53L,0L,3L,0L,0L,0x12D94B84L,0x179BC938L,0x12D94B84L,0L},{0x32349D53L,0x32349D53L,0L,3L,0L,0L,0x12D94B84L,0x179BC938L,0x12D94B84L,0L},{0x32349D53L,0x32349D53L,0L,3L,0L,0L,0x12D94B84L,0x179BC938L,0x12D94B84L,0L},{0x32349D53L,0x32349D53L,0L,3L,0L,0L,0x12D94B84L,0x179BC938L,0x12D94B84L,0L}},{{0x32349D53L,0x32349D53L,0L,3L,0L,0L,0x12D94B84L,0x179BC938L,0x12D94B84L,0L},{0x32349D53L,0x32349D53L,0L,3L,0L,0L,0x12D94B84L,0x179BC938L,0x12D94B84L,0L},{0x32349D53L,0x32349D53L,0L,3L,0L,0L,0x12D94B84L,0x179BC938L,0x12D94B84L,0L},{0x32349D53L,0x32349D53L,0L,3L,0L,0L,0x12D94B84L,0x179BC938L,0x12D94B84L,0L}},{{0x32349D53L,0x32349D53L,0L,3L,0L,0L,0x12D94B84L,0x179BC938L,0x12D94B84L,0L},{0x32349D53L,0x32349D53L,0L,3L,0L,0L,0x12D94B84L,0x179BC938L,0x12D94B84L,0L},{0x32349D53L,0x32349D53L,0L,3L,0L,0L,0x12D94B84L,0x179BC938L,0x12D94B84L,0L},{0x32349D53L,0x32349D53L,0L,3L,0L,0L,0x12D94B84L,0x179BC938L,0x12D94B84L,0L}}};
    int32_t *l_778 = (void*)0;
    int32_t *l_779 = &p_2547->g_780[7];
    uint32_t *l_850 = (void*)0;
    int64_t **l_920 = (void*)0;
    int32_t *l_922 = &p_2547->g_85[0][1];
    int32_t ***l_935 = (void*)0;
    int32_t ***l_936 = &p_2547->g_234;
    int i, j, k;
    if (((p_2547->g_41 = (void*)0) != ((((l_48[0][3][5] = ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(l_42.s67732242)).s73, ((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(8UL, 4294967294UL)).yyxx, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_43.zx)))).yyyy, ((VECTOR(uint32_t, 4))(p_2547->g_44.s4535))))).odd))).even) | ((l_850 = (l_45 = func_49(l_42.s4, p_38, ((*l_779) |= (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(func_58((((((func_61(&l_40[0], func_66(p_38, (safe_rshift_func_int16_t_s_u(l_43.y, 15)), l_46, p_38, p_2547), l_42.s1, p_38, p_2547) >= (-10L)) , FAKE_DIVERGE(p_2547->global_2_offset, get_global_id(2), 10)) >= 0x06L) , p_38) , (void*)0), p_2547->g_538.y, p_2547), 7)), 12))), &p_2547->g_752, p_2547))) == (void*)0)) < 1L) , (void*)0)))
    { /* block id: 336 */
        uint32_t l_875 = 0x02B4DC14L;
        int32_t l_895 = 0x6AEF8E9EL;
        int32_t l_896 = 1L;
        int32_t l_898 = 5L;
        int32_t **l_923 = &p_2547->g_456;
        uint16_t *l_924 = (void*)0;
        uint16_t *l_925 = &p_2547->g_575;
        uint32_t l_934 = 4294967295UL;
        for (p_2547->g_575 = 0; (p_2547->g_575 != 20); ++p_2547->g_575)
        { /* block id: 339 */
            int8_t l_873 = 1L;
            int32_t l_897 = (-1L);
            if ((safe_mul_func_int16_t_s_s((1UL || (-6L)), p_2547->g_504.y)))
            { /* block id: 340 */
                VECTOR(int32_t, 8) l_860 = (VECTOR(int32_t, 8))(0x5218310AL, (VECTOR(int32_t, 4))(0x5218310AL, (VECTOR(int32_t, 2))(0x5218310AL, (-9L)), (-9L)), (-9L), 0x5218310AL, (-9L));
                int32_t l_886 = 7L;
                int32_t *l_888 = (void*)0;
                int32_t *l_889 = &l_48[2][1][0];
                int32_t *l_890 = (void*)0;
                int32_t *l_891 = &p_2547->g_80[0][6];
                int32_t *l_892 = (void*)0;
                int32_t *l_893 = (void*)0;
                int32_t *l_894[7];
                uint16_t l_899[3];
                int i;
                for (i = 0; i < 7; i++)
                    l_894[i] = &p_2547->g_96.f0;
                for (i = 0; i < 3; i++)
                    l_899[i] = 0x6B8BL;
                for (p_2547->g_752 = 0; (p_2547->g_752 == 32); p_2547->g_752 = safe_add_func_int16_t_s_s(p_2547->g_752, 2))
                { /* block id: 343 */
                    VECTOR(int32_t, 4) l_859 = (VECTOR(int32_t, 4))(0x675C0788L, (VECTOR(int32_t, 2))(0x675C0788L, 0L), 0L);
                    int32_t *l_862 = &p_2547->g_96.f0;
                    int32_t *l_864 = &p_2547->g_80[2][7];
                    int32_t *l_865 = &p_2547->g_80[2][3];
                    int32_t *l_866 = &p_2547->g_85[0][1];
                    int32_t *l_867 = &p_2547->g_428[0];
                    int32_t *l_868 = (void*)0;
                    int32_t *l_869 = &p_2547->g_96.f0;
                    int32_t *l_870 = (void*)0;
                    int32_t *l_871 = &p_2547->g_428[0];
                    int32_t *l_872 = (void*)0;
                    int32_t *l_874 = (void*)0;
                    uint16_t *l_887[7][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    (*l_864) |= (l_48[0][3][5] = (safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 4))(l_859.yzxx)).w, ((VECTOR(int32_t, 2))(l_860.s55)).odd)));
                    if (l_43.y)
                        continue;
                    l_875++;
                    (*l_869) = ((safe_add_func_uint32_t_u_u(((p_2547->g_216.sd = (safe_mod_func_int16_t_s_s(((**p_2547->g_174) , (l_42.s1 && ((!p_38) <= (FAKE_DIVERGE(p_2547->local_1_offset, get_local_id(1), 10) , l_860.s6)))), (l_860.s3 , (safe_sub_func_int16_t_s_s(((l_873 , (l_860.s3 | (safe_lshift_func_int8_t_s_s(((1L <= (((l_886 = p_2547->g_813.s1) <= p_38) , 7L)) > p_2547->g_comm_values[p_2547->tid]), 1)))) ^ p_38), p_2547->g_745.sf)))))) && l_48[2][3][7]), 4294967295UL)) , 0L);
                }
                ++l_899[2];
                l_897 ^= (p_38 , l_48[0][3][5]);
            }
            else
            { /* block id: 354 */
                int64_t *l_917[8];
                int64_t **l_916 = &l_917[0];
                int64_t ***l_915[1][4] = {{&l_916,&l_916,&l_916,&l_916}};
                VECTOR(int32_t, 4) l_921 = (VECTOR(int32_t, 4))(0x6B2FA1F0L, (VECTOR(int32_t, 2))(0x6B2FA1F0L, 1L), 1L);
                int i, j;
                for (i = 0; i < 8; i++)
                    l_917[i] = (void*)0;
                l_896 |= (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(18446744073709551615UL, 8UL, 4UL, 5UL)).hi)).hi, (safe_mul_func_uint8_t_u_u(p_38, (l_895 = (safe_unary_minus_func_int64_t_s((safe_add_func_int64_t_s_s((((l_42.s5 < ((p_38 ^ 0x530A89EDL) ^ (&l_48[0][3][5] == &l_896))) > ((l_921.x = ((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(7L, 5)) , (p_38 >= GROUP_DIVERGE(1, 1))), ((p_2547->g_918 = (void*)0) != l_920))), FAKE_DIVERGE(p_2547->global_0_offset, get_global_id(0), 10))) & 0x8B59L)) <= p_38)) & p_38), 0L)))))))));
            }
        }
        (*l_923) = l_922;
        p_2547->g_861 = ((((++(*l_925)) || ((safe_mul_func_uint16_t_u_u(((*l_925) = p_38), ((*l_922) = ((safe_unary_minus_func_int32_t_s((safe_unary_minus_func_int16_t_s((((l_934 | (**l_923)) < ((l_935 = (void*)0) == (l_936 = (void*)0))) <= 0UL))))) & FAKE_DIVERGE(p_2547->local_2_offset, get_local_id(2), 10))))) < (p_2547->g_733.s7 || (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0UL, 0x6B15663AL)).yxxxxyyx)).s1 | ((l_48[0][3][5] ^= ((p_38 || (0x1C72L < p_2547->g_216.sc)) | 0x33BFL)) == 1L))))) <= p_38) , (*l_923));
    }
    else
    { /* block id: 369 */
        return p_38;
    }
    for (p_2547->g_239 = (-9); (p_2547->g_239 > (-16)); p_2547->g_239--)
    { /* block id: 374 */
        int32_t l_939 = 0x638875EAL;
        if (l_939)
            break;
    }
    return p_2547->g_176.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_2547->g_785 p_2547->l_comm_values p_2547->g_127 p_2547->g_792 p_2547->g_793 p_2547->g_437 p_2547->g_428 p_2547->g_80 p_2547->g_813 p_2547->g_815 p_2547->g_383 p_2547->g_586 p_2547->g_239 p_2547->g_189 p_2547->g_201 p_2547->g_194 p_2547->g_397 p_2547->g_752 p_2547->g_211
 * writes: p_2547->g_785 p_2547->g_428 p_2547->g_80 p_2547->g_239 p_2547->g_comm_values p_2547->g_189 p_2547->g_201 p_2547->g_437
 */
uint32_t * func_49(uint32_t  p_50, uint32_t  p_51, int32_t  p_52, uint32_t * p_53, struct S1 * p_2547)
{ /* block id: 319 */
    VECTOR(int16_t, 4) l_781 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L);
    VECTOR(int16_t, 8) l_782 = (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0x4076L), 0x4076L), 0x4076L, 9L, 0x4076L);
    uint64_t ****l_787 = &p_2547->g_785;
    uint32_t *l_789 = (void*)0;
    uint32_t **l_788 = &l_789;
    uint32_t *l_790 = (void*)0;
    int32_t l_791[5];
    int32_t *l_798 = &p_2547->g_428[0];
    int32_t *l_799 = (void*)0;
    int32_t *l_800 = &p_2547->g_80[0][6];
    VECTOR(uint64_t, 2) l_807 = (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x6D9934843E337798L);
    VECTOR(uint64_t, 2) l_808 = (VECTOR(uint64_t, 2))(0UL, 0x8376156E3CCF62B3L);
    VECTOR(uint64_t, 8) l_809 = (VECTOR(uint64_t, 8))(0xC83F27F026BA6EC6L, (VECTOR(uint64_t, 4))(0xC83F27F026BA6EC6L, (VECTOR(uint64_t, 2))(0xC83F27F026BA6EC6L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xC83F27F026BA6EC6L, 18446744073709551615UL);
    VECTOR(uint64_t, 4) l_810 = (VECTOR(uint64_t, 4))(0xECA60A714F3AD0F0L, (VECTOR(uint64_t, 2))(0xECA60A714F3AD0F0L, 8UL), 8UL);
    VECTOR(uint64_t, 2) l_811 = (VECTOR(uint64_t, 2))(1UL, 18446744073709551612UL);
    VECTOR(uint64_t, 8) l_812 = (VECTOR(uint64_t, 8))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0xDF512018DED9B064L), 0xDF512018DED9B064L), 0xDF512018DED9B064L, 18446744073709551606UL, 0xDF512018DED9B064L);
    VECTOR(uint64_t, 2) l_814 = (VECTOR(uint64_t, 2))(18446744073709551609UL, 1UL);
    int64_t *l_820 = &p_2547->g_239;
    int64_t **l_823 = &l_820;
    int8_t *l_830 = &p_2547->g_201;
    int8_t *l_831 = (void*)0;
    int8_t *l_832 = (void*)0;
    VECTOR(int32_t, 2) l_837 = (VECTOR(int32_t, 2))(0x0887B721L, (-8L));
    union U0 *l_847 = &p_2547->g_96;
    union U0 **l_846 = &l_847;
    uint32_t l_848 = 0x7196CD4FL;
    uint32_t *l_849 = &l_848;
    int i;
    for (i = 0; i < 5; i++)
        l_791[i] = 0x16CB223CL;
    (*l_800) |= ((*l_798) |= ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(0x60AA9D4FL, 0x67E017BBL)).xyxyyyyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 16))(l_781.xzyzwxzwyzwxwyxx)), ((VECTOR(int16_t, 8))(l_782.s40675500)).s3273465310124257, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((l_781.x && (safe_sub_func_int8_t_s_s((((*l_788) = ((&p_2547->g_191 != ((*l_787) = p_2547->g_785)) , &p_2547->g_211)) != l_790), p_2547->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2547->tid, 88))]))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(0x6953L, 0x0681L)), (int16_t)(l_791[1] = p_2547->g_127.s2)))).xxyyyxyyyyxxyyyy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(p_2547->g_792.yyxyyxxyyxxyyxxy)).lo)).s0066517722461740))).s46f1)).even)), 0x06EAL)).wwyzzxxxwyyzxxxw)).sab09)).wzyxwzwyzyzxywzx))).even)).s4305127026171621, ((VECTOR(uint16_t, 2))(65534UL, 0UL)).xyyyyxyyxxyxyxxx))).s7a0e)).zwxwzyzx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(p_2547->g_793.s47456213)).s36, (int32_t)((-1L) != (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((3UL < FAKE_DIVERGE(p_2547->group_2_offset, get_group_id(2), 10)), p_50)), p_2547->g_437.s2)))))).yxxyxyxx, ((VECTOR(int32_t, 8))(0x7239A95CL)))))))))).s2);
    atomic_add(&p_2547->l_atomic_reduction[0], (safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), (GROUP_DIVERGE(0, 1) > ((VECTOR(uint8_t, 2))(255UL, 0UL)).lo))) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_2547->v_collective += p_2547->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    (*l_800) = (((safe_lshift_func_int8_t_s_s(((p_2547->g_437.s7 = ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(0x14L, 2L)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(((safe_rshift_func_int8_t_s_u(((((VECTOR(uint64_t, 8))(1UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 16))(l_807.yxxxxxyyyxxxyxxx))))).se509)))).yxxwyxwx)).even)).even, ((VECTOR(uint64_t, 8))(l_808.xxxxxxyy)).s32))).xyxxyxxx, ((VECTOR(uint64_t, 16))(l_809.s3722273173433376)).odd))), ((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 8))(l_810.yzxxwwzx)))))))).even, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_811.yyxyxxyx)).even))))).yyyxwyyzyzzxxxzy, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 4))(l_812.s6562)).zzzxzyxx, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 2))(p_2547->g_813.s55)), ((VECTOR(uint64_t, 2))(l_814.xx))))))))))).yyyyyyyx, ((VECTOR(uint64_t, 2))(p_2547->g_815.xw)).yxxxxxxx))).hi)).wyzwyxyywwyyzzyw))).scc19)), 0x0C2AECBF6663A6C4L, 0UL, 1UL)).s7 ^ (safe_div_func_int16_t_s_s((FAKE_DIVERGE(p_2547->group_1_offset, get_group_id(1), 10) != p_2547->g_383.y), p_2547->g_383.x))) > (((safe_div_func_int64_t_s_s(p_52, 18446744073709551615UL)) , ((p_2547->g_comm_values[p_2547->tid] = ((*l_820) ^= p_2547->g_586.z)) <= (p_2547->g_189++))) < ((l_823 != (((*l_830) &= (safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint64_t_u_u(0x585982E71BF2B904L, (*l_800))) , (safe_mod_func_int32_t_s_s(0x1F04F845L, 4294967287UL))), 5))) , (void*)0)) > (*l_798)))), GROUP_DIVERGE(0, 1))) || GROUP_DIVERGE(1, 1)), ((VECTOR(int8_t, 2))((-10L))), ((VECTOR(int8_t, 4))((-1L))), 0L)).hi, ((VECTOR(int8_t, 4))(0x0DL)), ((VECTOR(int8_t, 4))(0x1BL))))), ((VECTOR(int8_t, 2))(0x20L)), 0x61L, 9L, p_2547->g_194.x, ((VECTOR(int8_t, 4))(0x10L)), ((VECTOR(int8_t, 2))(0x60L)), 0L)).hi)).s57))).yxxx, (int8_t)0x14L))).z) || 1UL), 3)) ^ 4UL) & (*l_798));
    (*l_800) = (safe_sub_func_int8_t_s_s(((p_2547->g_397.s2 == ((safe_div_func_int8_t_s_s((((5UL > 0x59L) && ((VECTOR(int32_t, 16))(l_837.yyyxxyxyxxyxyyyx)).sb) | (safe_div_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((*p_53) > ((void*)0 == &l_791[1])) > (safe_sub_func_int32_t_s_s((*l_798), (safe_mul_func_uint16_t_u_u(((*l_800) < (&p_2547->g_175 == l_846)), p_2547->g_428[0]))))), p_51)), l_848))), p_50)) ^ p_2547->g_127.s5)) < 0xC70EL), 0xF6L));
    return &p_2547->g_211;
}


/* ------------------------------------------ */
/* 
 * reads : p_2547->g_575 p_2547->g_584 p_2547->g_733 p_2547->g_743 p_2547->g_745 p_2547->g_694 p_2547->g_127 p_2547->g_211 p_2547->g_564 p_2547->g_607 p_2547->g_752 p_2547->g_130 p_2547->g_85 p_2547->g_96.f2 p_2547->g_226 p_2547->g_765 p_2547->g_194 p_2547->g_22 p_2547->g_437 p_2547->g_80
 * writes: p_2547->g_564 p_2547->g_85 p_2547->g_96.f2 p_2547->g_437 p_2547->g_80
 */
uint8_t  func_58(uint32_t * p_59, int32_t  p_60, struct S1 * p_2547)
{ /* block id: 305 */
    uint64_t l_719 = 0x6580AA9E128845CDL;
    int32_t l_720 = (-6L);
    VECTOR(uint16_t, 8) l_734 = (VECTOR(uint16_t, 8))(0x74EFL, (VECTOR(uint16_t, 4))(0x74EFL, (VECTOR(uint16_t, 2))(0x74EFL, 0x6BB7L), 0x6BB7L), 0x6BB7L, 0x74EFL, 0x6BB7L);
    VECTOR(uint16_t, 4) l_740 = (VECTOR(uint16_t, 4))(0x0BDEL, (VECTOR(uint16_t, 2))(0x0BDEL, 0UL), 0UL);
    VECTOR(uint64_t, 4) l_744 = (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 2UL), 2UL);
    int32_t l_746 = 0x1D8A7CABL;
    int8_t *l_747 = (void*)0;
    int8_t *l_748 = (void*)0;
    int8_t *l_749 = (void*)0;
    int8_t *l_750 = (void*)0;
    int32_t *l_751 = &p_2547->g_85[0][2];
    uint32_t *l_754 = &p_2547->g_211;
    uint32_t **l_753 = &l_754;
    VECTOR(int8_t, 2) l_759 = (VECTOR(int8_t, 2))((-5L), 0x52L);
    VECTOR(int16_t, 2) l_762 = (VECTOR(int16_t, 2))(0x213DL, 1L);
    VECTOR(int8_t, 16) l_766 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 5L), 5L), 5L, 0L, 5L, (VECTOR(int8_t, 2))(0L, 5L), (VECTOR(int8_t, 2))(0L, 5L), 0L, 5L, 0L, 5L);
    VECTOR(int8_t, 4) l_767 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L);
    VECTOR(int8_t, 16) l_768 = (VECTOR(int8_t, 16))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 1L), 1L), 1L, 2L, 1L, (VECTOR(int8_t, 2))(2L, 1L), (VECTOR(int8_t, 2))(2L, 1L), 2L, 1L, 2L, 1L);
    int64_t *l_773[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t *l_775 = (void*)0;
    int64_t **l_774 = &l_775;
    int64_t *l_776 = (void*)0;
    int32_t *l_777 = &p_2547->g_80[0][6];
    int i;
    l_720 ^= l_719;
    (*l_751) = (((p_60 | l_719) | ((safe_mul_func_uint16_t_u_u(p_2547->g_575, ((safe_div_func_uint32_t_u_u((((VECTOR(uint64_t, 16))((((((VECTOR(int64_t, 16))(0x09EAEE96AB13A44BL, ((safe_div_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_s((p_2547->g_564.x |= (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_746 = (p_2547->g_584.s8 || ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_2547->g_733.s5413)).xwzwzxzy)).s10)).yyxyxxxyxyyxyxyx)), ((VECTOR(uint16_t, 8))(0x53BDL, ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_734.s3262)).yxxxyzyy)).lo)).odd, (uint16_t)(safe_unary_minus_func_uint32_t_u((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_740.xxwyxxwy)))).s1 >= ((0x00L > (((l_720 = (-6L)) , (safe_sub_func_int16_t_s_s(1L, (l_720 ^ (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_2547->g_743.yx)), 18446744073709551614UL, 18446744073709551609UL)))).xxzxyyzw, ((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 8))(l_744.xwyxwxxx)), ((VECTOR(uint64_t, 2))(0xD8BBD777149F52CDL, 2UL)).yxyyxxxy)))))), ((VECTOR(uint64_t, 8))(p_2547->g_745.s3222d676))))).odd)).zxwxzyxzwxwwzyyx)).s6 | p_2547->g_694))))) & FAKE_DIVERGE(p_2547->group_2_offset, get_group_id(2), 10))) != p_60)), l_744.y)), p_2547->g_127.s7))))))), ((VECTOR(uint16_t, 4))(1UL)), 65534UL)).s4065753036374750))).sec8a, ((VECTOR(uint16_t, 4))(0x75F9L))))).x)), 11)), p_2547->g_211))), 3)) & p_60) , &l_720) == l_751), p_2547->g_733.s4)) , p_2547->g_607.s8), ((VECTOR(int64_t, 8))(1L)), 0x06D926478DB9B7D4L, p_2547->g_752, ((VECTOR(int64_t, 4))(0x19AA9BE2682E39A8L)))).s4 | 3UL) , l_753) == &p_59), GROUP_DIVERGE(2, 1), 1UL, 0x69368AEB46415555L, 0x33D0D0AED4EAB507L, 0x04BEC61D804AD5AFL, 0xB525243C60CC7895L, ((VECTOR(uint64_t, 2))(0x48581C729C326921L)), 18446744073709551613UL, p_2547->g_130.s0, ((VECTOR(uint64_t, 4))(6UL)), 0xAEE52EDAFC0FB014L)).s6 , (*l_751)), p_60)) , 65535UL))) , (*l_751))) > (*l_751));
    (*l_751) = ((*l_777) ^= ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0L, ((VECTOR(int8_t, 2))(l_759.yy)), (safe_mod_func_int32_t_s_s(p_60, ((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_762.xy)).yyyy)).y == (p_2547->g_96.f2++)) , ((-1L) ^ p_2547->g_226.s2)))), 0x22L, 0x6BL, 0x5FL, 0x55L)).s4262110211036417)).hi, ((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(p_2547->g_765.yxxxyxxyyxyyxyxy)).s9136, ((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x21L, (-1L))).yyyyxxyxxxxyxyxy)).hi)).s6731170244465314, (int8_t)(~0L)))).se478, ((VECTOR(int8_t, 4))(l_766.scc74))))).zyzyzxwx, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))(l_767.wx)).xyxx, ((VECTOR(int8_t, 16))(l_768.s1668f8194c527d89)).sce96, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x32L, 1L)).xyyx)).odd)).xxyx))).zwwwwxyy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(0x3DL, 0x6BL, 0x06L, 0x6BL)).hi)).yxxxxyxy))))))))).s7, (safe_mul_func_int8_t_s_s((p_2547->g_437.s6 = (l_747 != l_750)), ((safe_lshift_func_uint16_t_u_u((l_773[1] != (l_776 = ((*l_774) = (void*)0))), 6)) != ((((((p_2547->g_194.y && p_60) < FAKE_DIVERGE(p_2547->global_2_offset, get_global_id(2), 10)) | 0x0C12L) > p_60) && p_2547->g_22) | p_60)))))) , p_2547->g_437.s5), (*l_751))) & 0x667F10D8868738AEL));
    return (*l_777);
}


/* ------------------------------------------ */
/* 
 * reads : p_2547->g_383 p_2547->g_390 p_2547->g_22 p_2547->g_397 p_2547->g_223 p_2547->g_211 p_2547->g_145 p_2547->g_194 p_2547->g_353 p_2547->g_437 p_2547->g_442 p_2547->g_216 p_2547->g_99 p_2547->g_80 p_2547->g_comm_values p_2547->g_428 p_2547->g_130 p_2547->g_575 p_2547->g_456 p_2547->g_96 p_2547->g_694 p_2547->g_564 p_2547->g_189 p_2547->g_215
 * writes: p_2547->g_211 p_2547->g_201 p_2547->g_189 p_2547->g_99 p_2547->g_428 p_2547->g_456 p_2547->g_127 p_2547->g_130 p_2547->g_145 p_2547->g_comm_values
 */
int64_t  func_61(uint64_t ** p_62, uint64_t * p_63, int16_t  p_64, uint8_t  p_65, struct S1 * p_2547)
{ /* block id: 160 */
    int64_t l_378 = 0x3BB021688951C26EL;
    VECTOR(uint8_t, 2) l_381 = (VECTOR(uint8_t, 2))(2UL, 0xE0L);
    VECTOR(uint8_t, 2) l_382 = (VECTOR(uint8_t, 2))(0x0EL, 1UL);
    VECTOR(uint8_t, 16) l_384 = (VECTOR(uint8_t, 16))(0x71L, (VECTOR(uint8_t, 4))(0x71L, (VECTOR(uint8_t, 2))(0x71L, 5UL), 5UL), 5UL, 0x71L, 5UL, (VECTOR(uint8_t, 2))(0x71L, 5UL), (VECTOR(uint8_t, 2))(0x71L, 5UL), 0x71L, 5UL, 0x71L, 5UL);
    VECTOR(uint8_t, 4) l_385 = (VECTOR(uint8_t, 4))(0xEAL, (VECTOR(uint8_t, 2))(0xEAL, 0xD0L), 0xD0L);
    VECTOR(uint8_t, 4) l_386 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x3FL), 0x3FL);
    VECTOR(uint8_t, 8) l_387 = (VECTOR(uint8_t, 8))(0x43L, (VECTOR(uint8_t, 4))(0x43L, (VECTOR(uint8_t, 2))(0x43L, 247UL), 247UL), 247UL, 0x43L, 247UL);
    VECTOR(uint8_t, 2) l_388 = (VECTOR(uint8_t, 2))(0UL, 1UL);
    VECTOR(int8_t, 16) l_389 = (VECTOR(int8_t, 16))(0x40L, (VECTOR(int8_t, 4))(0x40L, (VECTOR(int8_t, 2))(0x40L, 0L), 0L), 0L, 0x40L, 0L, (VECTOR(int8_t, 2))(0x40L, 0L), (VECTOR(int8_t, 2))(0x40L, 0L), 0x40L, 0L, 0x40L, 0L);
    VECTOR(int8_t, 8) l_392 = (VECTOR(int8_t, 8))(0x37L, (VECTOR(int8_t, 4))(0x37L, (VECTOR(int8_t, 2))(0x37L, 0x0AL), 0x0AL), 0x0AL, 0x37L, 0x0AL);
    int16_t *l_398 = (void*)0;
    int16_t *l_399 = (void*)0;
    int16_t *l_400[3][1];
    int64_t *l_405 = (void*)0;
    int64_t *l_406 = (void*)0;
    int32_t l_407 = (-7L);
    uint32_t *l_408 = &p_2547->g_211;
    union U0 l_409[3] = {{0x486807B4L},{0x486807B4L},{0x486807B4L}};
    int32_t l_426 = 0x69197E97L;
    VECTOR(int32_t, 16) l_427 = (VECTOR(int32_t, 16))(0x33A03D13L, (VECTOR(int32_t, 4))(0x33A03D13L, (VECTOR(int32_t, 2))(0x33A03D13L, (-2L)), (-2L)), (-2L), 0x33A03D13L, (-2L), (VECTOR(int32_t, 2))(0x33A03D13L, (-2L)), (VECTOR(int32_t, 2))(0x33A03D13L, (-2L)), 0x33A03D13L, (-2L), 0x33A03D13L, (-2L));
    VECTOR(int8_t, 4) l_441 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x08L), 0x08L);
    uint64_t **l_457 = &p_2547->g_192;
    VECTOR(uint16_t, 2) l_499 = (VECTOR(uint16_t, 2))(0xB625L, 0xCF7AL);
    uint32_t l_512 = 7UL;
    int64_t l_558 = 0x1A4E290ABD0F4A2EL;
    uint8_t l_560[5];
    uint16_t l_697 = 1UL;
    VECTOR(uint32_t, 2) l_706 = (VECTOR(uint32_t, 2))(0xFD77654BL, 2UL);
    int32_t **l_708 = &p_2547->g_456;
    int32_t **l_710 = &p_2547->g_456;
    uint32_t *l_715 = &l_512;
    VECTOR(uint8_t, 16) l_716 = (VECTOR(uint8_t, 16))(0xBDL, (VECTOR(uint8_t, 4))(0xBDL, (VECTOR(uint8_t, 2))(0xBDL, 255UL), 255UL), 255UL, 0xBDL, 255UL, (VECTOR(uint8_t, 2))(0xBDL, 255UL), (VECTOR(uint8_t, 2))(0xBDL, 255UL), 0xBDL, 255UL, 0xBDL, 255UL);
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_400[i][j] = (void*)0;
    }
    for (i = 0; i < 5; i++)
        l_560[i] = 0xA8L;
    l_378 = 1L;
    if (((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(2UL, 0xBBL)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_381.xxxyxyyyyyyxxyxx)).sf1)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(0xC6L, ((VECTOR(uint8_t, 2))(l_382.xx)), 255UL)).lo, ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 16))(p_2547->g_383.wxxzzzywywwyxxzx)).lo, ((VECTOR(uint8_t, 2))(l_384.s1d)).xxyyxxyx, ((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))((p_65 | 0x07D8L), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(l_385.wxxy)).even, ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(l_386.zxwwywxxwxywywzz)).s3fba, ((VECTOR(uint8_t, 4))(l_387.s7617)), ((VECTOR(uint8_t, 4))(l_388.yyxy))))))).zwzwwwzxzwxwzwxz)).sc01f))).hi, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 2))(l_389.seb)), ((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))((p_2547->g_390 != (void*)0), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 2))(0x57L, 2L)).yyxxyxxx))).s6433414225656536, ((VECTOR(int8_t, 8))(l_392.s51302115)).s1366363007222421))).s71, ((VECTOR(int8_t, 4))((((safe_mul_func_uint8_t_u_u((p_2547->g_22 == (safe_mul_func_int16_t_s_s((p_64 = ((VECTOR(int16_t, 2))(p_2547->g_397.s02)).even), (((((*l_408) ^= ((safe_add_func_int64_t_s_s((l_407 = (safe_lshift_func_uint16_t_u_u(p_2547->g_223.y, 7))), l_388.x)) && (-1L))) , ((&p_2547->g_132 != l_400[0][0]) >= l_392.s0)) , l_409[2]) , l_381.y)))), GROUP_DIVERGE(0, 1))) , p_2547->g_145) || p_64), p_2547->g_194.x, 0L, 0x34L)).odd, ((VECTOR(int8_t, 2))(3L))))))), 0x48L)), ((VECTOR(int8_t, 4))(0x67L))))), ((VECTOR(int8_t, 4))((-1L)))))).odd))), ((VECTOR(uint8_t, 2))(0x23L)))))))), 0UL, 254UL)).z, 0xE8L, 0x4CL)).odd, ((VECTOR(uint8_t, 2))(0xDAL))))))).xyyxxyxxyyxxyyyx, ((VECTOR(uint8_t, 16))(0UL))))).even))).s31, ((VECTOR(uint8_t, 2))(0xBFL))))), ((VECTOR(uint8_t, 2))(0x72L))))))), 0UL, 0x5AL)).even))).yxyxyyyx)).s0, p_2547->g_194.y)) < l_387.s2))
    { /* block id: 165 */
        uint32_t **l_412 = &l_408;
        VECTOR(uint16_t, 4) l_415 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL);
        uint64_t **l_419 = &p_2547->g_192;
        uint64_t ***l_418 = &l_419;
        uint64_t *l_420 = (void*)0;
        uint64_t *l_421[4];
        int32_t l_422 = 6L;
        int32_t l_423 = 0x2A21D33FL;
        int32_t *l_424[8][4][6] = {{{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0}},{{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0}},{{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0}},{{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0}},{{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0}},{{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0}},{{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0}},{{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0},{(void*)0,&l_422,&l_407,&l_407,(void*)0,(void*)0}}};
        int64_t l_425 = 0L;
        int64_t l_429 = 0x0E9EE20F9F944C41L;
        uint64_t l_430 = 18446744073709551612UL;
        int8_t *l_440 = &p_2547->g_201;
        uint16_t *l_453[2][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        union U0 *l_506 = &l_409[2];
        union U0 **l_505 = &l_506;
        VECTOR(int32_t, 2) l_585 = (VECTOR(int32_t, 2))(0x5E0B35A6L, 0x45F9F324L);
        uint32_t **l_593 = &l_408;
        int64_t l_613 = (-1L);
        int8_t l_628 = 5L;
        VECTOR(int32_t, 16) l_635 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x693484ECL), 0x693484ECL), 0x693484ECL, (-1L), 0x693484ECL, (VECTOR(int32_t, 2))((-1L), 0x693484ECL), (VECTOR(int32_t, 2))((-1L), 0x693484ECL), (-1L), 0x693484ECL, (-1L), 0x693484ECL);
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_421[i] = (void*)0;
        l_423 = (safe_div_func_uint16_t_u_u(((l_422 &= (((((*l_412) = &p_2547->g_211) != (void*)0) == FAKE_DIVERGE(p_2547->local_2_offset, get_local_id(2), 10)) < ((safe_mul_func_uint16_t_u_u(((((VECTOR(uint16_t, 8))(l_415.wwwzywwy)).s2 & p_65) & FAKE_DIVERGE(p_2547->group_2_offset, get_group_id(2), 10)), l_386.z)) >= (safe_mul_func_uint16_t_u_u((((((l_384.s6 < (l_400[0][0] == (((l_418 == &l_419) , ((p_2547->g_353 | (-8L)) == l_392.s3)) , (void*)0))) , FAKE_DIVERGE(p_2547->global_1_offset, get_global_id(1), 10)) ^ l_415.z) , 0x40A61C01L) , p_2547->g_145), p_64))))) != l_415.z), p_64));
        l_430++;
        p_2547->g_428[0] &= ((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), (-7L))), (p_64 , ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 4))(p_2547->g_437.s6400)), (int8_t)(safe_rshift_func_int8_t_s_s(((*l_440) = p_64), (!((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(l_441.wy)).yyxyyxxy, ((VECTOR(int8_t, 2))(0x5DL, 0x15L)).yxxyyyyx, ((VECTOR(int8_t, 8))(p_2547->g_442.s23533347))))).s1330272102606233, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 4))(0x55L, 0x4EL, 0x2FL, 3L)).xzwxzwwz, ((VECTOR(int8_t, 16))((-5L), (-1L), p_64, ((VECTOR(int8_t, 2))(0L, 0x13L)), ((((VECTOR(int8_t, 4))((((p_2547->g_189 = l_385.x) , p_64) <= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(((((p_2547->g_99.y |= (safe_lshift_func_uint8_t_u_u(((p_64 >= (((-1L) == (safe_sub_func_uint16_t_u_u((l_409[2].f0 &= (((safe_div_func_int16_t_s_s((&l_425 != p_63), p_64)) , p_2547->g_216.sf) > 0x3B46L)), p_65))) | p_2547->g_397.s4)) , l_387.s7), l_382.y))) , p_64) != l_384.s5) == p_65), 3)), 2))), 0x49L, 0x7BL, 4L)).y != l_392.s0) != p_64), 0x7AL, 0x77L, p_2547->g_223.x, 1L, 1L, 0x07L, p_2547->g_80[4][2], p_2547->g_383.x, 0x57L, 0x74L)).lo))), ((VECTOR(int8_t, 8))(0x4DL))))).s5346675477307660, ((VECTOR(int8_t, 16))(0x2EL))))).sf7ce)).xzzzywxz, ((VECTOR(int8_t, 8))(0L)), ((VECTOR(int8_t, 8))(0x50L))))), ((VECTOR(int8_t, 8))(0x19L)), ((VECTOR(int8_t, 8))((-5L)))))).even, ((VECTOR(int8_t, 4))(0L))))), (-1L), p_65, 1L, 0x47L)).s5))), (int8_t)p_2547->g_comm_values[p_2547->tid]))).lo, ((VECTOR(int8_t, 2))((-6L)))))))).lo))) ^ p_64);
        for (l_429 = 0; (l_429 > 20); l_429 = safe_add_func_int32_t_s_s(l_429, 4))
        { /* block id: 177 */
            int32_t l_460 = 0x0D9AD324L;
            int32_t l_461 = (-1L);
            int32_t l_462 = 0L;
            int32_t l_463 = 0x770B79DBL;
            int8_t *l_480[4][10][3] = {{{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0}},{{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0}},{{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0}},{{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0},{&p_2547->g_201,(void*)0,(void*)0}}};
            int32_t l_516 = 6L;
            uint8_t l_518 = 0x5AL;
            union U0 *l_523 = (void*)0;
            VECTOR(int32_t, 8) l_559 = (VECTOR(int32_t, 8))(0x24EAD01DL, (VECTOR(int32_t, 4))(0x24EAD01DL, (VECTOR(int32_t, 2))(0x24EAD01DL, 0x1F84E77AL), 0x1F84E77AL), 0x1F84E77AL, 0x24EAD01DL, 0x1F84E77AL);
            union U0 l_573[9][8][3] = {{{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}}},{{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}}},{{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}}},{{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}}},{{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}}},{{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}}},{{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}}},{{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}}},{{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}},{{1L},{0x2DECC74AL},{0x50E528D2L}}}};
            int8_t *l_574 = (void*)0;
            int32_t l_577 = (-1L);
            uint32_t **l_591 = &l_408;
            uint64_t l_612 = 1UL;
            int8_t l_664 = 4L;
            int i, j, k;
            p_2547->g_456 = &l_423;
            l_457 = &p_2547->g_192;
            for (l_430 = 0; (l_430 <= 20); ++l_430)
            { /* block id: 182 */
                uint16_t l_464 = 0UL;
                VECTOR(uint16_t, 2) l_471 = (VECTOR(uint16_t, 2))(0x3BF4L, 1UL);
                int32_t l_517[3][4] = {{0x0452A9AFL,(-3L),0x0452A9AFL,0x0452A9AFL},{0x0452A9AFL,(-3L),0x0452A9AFL,0x0452A9AFL},{0x0452A9AFL,(-3L),0x0452A9AFL,0x0452A9AFL}};
                VECTOR(uint16_t, 2) l_553 = (VECTOR(uint16_t, 2))(1UL, 1UL);
                int32_t **l_563 = &p_2547->g_456;
                int i, j;
                --l_464;
            }
            if (((((p_2547->g_127.s3 = l_382.x) <= l_559.s6) != 0xA1L) & p_2547->g_216.s5))
            { /* block id: 233 */
                int32_t *l_565 = (void*)0;
                int32_t **l_566 = &l_424[2][2][5];
                uint8_t *l_576[4][4] = {{&l_518,&l_518,&l_518,&l_518},{&l_518,&l_518,&l_518,&l_518},{&l_518,&l_518,&l_518,&l_518},{&l_518,&l_518,&l_518,&l_518}};
                VECTOR(int32_t, 8) l_620 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7A89FA19L), 0x7A89FA19L), 0x7A89FA19L, 1L, 0x7A89FA19L);
                VECTOR(uint64_t, 8) l_623 = (VECTOR(uint64_t, 8))(0xF8E38B8E277A9AD2L, (VECTOR(uint64_t, 4))(0xF8E38B8E277A9AD2L, (VECTOR(uint64_t, 2))(0xF8E38B8E277A9AD2L, 0xB8ACD705140E235DL), 0xB8ACD705140E235DL), 0xB8ACD705140E235DL, 0xF8E38B8E277A9AD2L, 0xB8ACD705140E235DL);
                VECTOR(uint64_t, 4) l_630 = (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 9UL), 9UL);
                int32_t l_663 = 0x2B9A7439L;
                int i, j;
                (*l_566) = ((**l_505) , l_565);
                if ((safe_add_func_int64_t_s_s(9L, (((p_2547->g_130.s4--) ^ (p_2547->g_397.s2 && (p_2547->g_201 = ((7UL < l_382.y) , (0x6AL == (l_577 = ((((safe_sub_func_uint16_t_u_u(((-2L) || p_2547->g_383.y), (((l_573[3][6][0] , &p_2547->g_201) == l_574) != p_2547->g_575))) < p_65) , p_64) , l_499.y))))))) != 0x72F8FA8CC9069C8EL))))
                { /* block id: 238 */
                    uint16_t l_611 = 1UL;
                    int32_t l_614 = 1L;
                    uint8_t l_615 = 2UL;
                    uint32_t l_632 = 4294967295UL;
                    for (l_518 = (-5); (l_518 < 1); ++l_518)
                    { /* block id: 241 */
                        uint32_t ***l_592 = &l_412;
                        uint64_t *l_602 = &l_409[2].f1;
                        int32_t l_605 = 0x4061C36AL;
                        uint32_t *l_606 = (void*)0;
                        uint32_t *l_608 = (void*)0;
                        uint32_t *l_609 = (void*)0;
                        uint32_t *l_610 = (void*)0;
                        l_614 |= ((4294967292UL & (((safe_add_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(((*p_2547->g_456) = p_65), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(p_2547->g_584.s476686024e2dd879)).s86, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_585.yyyxyxxxyyyyxxxy)).sf6)).yyyxyxxyyyxxyyyx, ((VECTOR(int32_t, 2))(p_2547->g_586.wz)).xxxxyyyxxxyxxxyx))).sdc5c, ((VECTOR(int32_t, 4))(((((((safe_mod_func_uint32_t_u_u(((*l_408) = (safe_add_func_uint64_t_u_u((((*l_592) = l_591) != l_593), (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((((((GROUP_DIVERGE(2, 1) > (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x12C5L, 0x5D81L)), ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((((p_2547->g_607.s5 = ((safe_mul_func_uint16_t_u_u(((*p_62) != (l_602 = ((*l_419) = (*p_62)))), p_2547->g_96.f2)) | (((safe_div_func_int16_t_s_s(l_605, 65535UL)) , p_2547->g_33.x) < p_65))) , p_2547->g_383.x) < l_611) , p_64), p_65, 0x4720L, 0x43C8L)).zxzzxxzz)), (int16_t)p_64, (int16_t)l_612))).s4, 5L, ((VECTOR(int16_t, 4))((-8L))))))).s4 | p_2547->g_comm_values[p_2547->tid])) , &p_2547->g_239) != &p_2547->g_239) , l_461) && l_559.s4) < 0UL), (-4L))), 2L)), p_2547->g_383.z))))), l_613)) >= p_64) | p_64) | p_2547->g_130.s7) | GROUP_DIVERGE(2, 1)) || p_64), 7L, 0x18466093L, 1L))))).ywxyxywzzwxxyzyx)).s0e, ((VECTOR(int32_t, 2))(1L))))), 0x1F9C72A7L, 1L)).odd)).yxxxxxyy)).s7164006753337727)).sb)), p_2547->g_216.s0)) || p_65) | p_64)) < 0x1CL);
                    }
                    l_615--;
                    for (l_462 = 0; (l_462 != (-13)); --l_462)
                    { /* block id: 253 */
                        uint32_t l_631 = 4294967295UL;
                        l_427.sb ^= (((p_2547->g_96 , ((*p_2547->g_456) = ((l_620.s7 = ((VECTOR(int32_t, 4))(l_620.s2465)).w) <= ((p_2547->g_130.s2 , ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((safe_sub_func_uint8_t_u_u((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((-7L), (-1L), p_64, (-8L), ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))((-1L), (-1L), 0x2916555AL, 1L, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x3C489FC2L, 0x6CA390CBL)).xxxyyxyy)).hi, ((VECTOR(int32_t, 4))(0x7A757792L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))((-1L), (((p_65 & ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_623.s56)).xxyx)).z) , (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(l_628, 7)), p_64))) | ((VECTOR(int64_t, 8))(0x469FE93C86727D8DL, 1L, ((((safe_unary_minus_func_int8_t_s(p_2547->g_226.s1)) , ((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_630.yy)).yyyy)).z < 1L) , l_631)) && p_2547->g_130.s6) && 0L), 0x2D3E1F394628FF64L, ((VECTOR(int64_t, 4))((-1L))))).s1), 0x16923206L, 0x2CB4A83FL)).odd, (int32_t)0L))), 0L, 0x4AF79FE9L)).y, (-1L), 0x461B9603L))))), 0x10029A19L, ((VECTOR(int32_t, 2))(0L)), 0x7A24D5D5L, l_577, p_65, 0x262884D9L, 0x687E478CL)).s8221, (int32_t)l_381.x))))).s72)).hi ^ 0x5D15F46CL), p_2547->g_80[0][6])) & p_65), p_2547->g_85[0][6], 4294967295UL, 0x99FE8617L, ((VECTOR(uint32_t, 2))(4294967292UL)), 0x0BCE0707L, 0x89A0DC26L, 1UL, ((VECTOR(uint32_t, 2))(0xC6DF8C2FL)), ((VECTOR(uint32_t, 4))(4294967287UL)), 0xB4430F35L)).lo)).s10)).lo) , l_632)))) > p_65) || p_65);
                    }
                    for (p_2547->g_145 = 14; (p_2547->g_145 <= (-18)); --p_2547->g_145)
                    { /* block id: 260 */
                        (*p_2547->g_456) ^= ((VECTOR(int32_t, 8))(l_635.s732b6b16)).s5;
                    }
                }
                else
                { /* block id: 263 */
                    int32_t l_646 = 8L;
                    int32_t l_695 = (-1L);
                    int32_t l_696[10][3] = {{0x2087F129L,1L,6L},{0x2087F129L,1L,6L},{0x2087F129L,1L,6L},{0x2087F129L,1L,6L},{0x2087F129L,1L,6L},{0x2087F129L,1L,6L},{0x2087F129L,1L,6L},{0x2087F129L,1L,6L},{0x2087F129L,1L,6L},{0x2087F129L,1L,6L}};
                    int i, j;
                    for (l_628 = (-10); (l_628 < (-4)); l_628 = safe_add_func_uint64_t_u_u(l_628, 1))
                    { /* block id: 266 */
                        int16_t l_651 = 1L;
                        if (l_573[3][6][0].f0)
                            break;
                        (*p_2547->g_456) = (safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((p_63 != (void*)0) | (p_65 , ((safe_mod_func_int32_t_s_s((l_646 != (((safe_mul_func_uint8_t_u_u((p_2547->g_390 != l_565), ((safe_lshift_func_int8_t_s_s(p_2547->g_575, 2)) || (l_651 <= (safe_unary_minus_func_uint32_t_u(((**l_591)--))))))) ^ (safe_rshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(0x6D51L, 0L, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x340BL, 0x4749L)))), (int16_t)(p_64 = (safe_lshift_func_uint16_t_u_u(l_385.y, l_663))), (int16_t)0x63C8L))), 8L, l_382.x, 0x7B14L, 0x16D3L)).s5, p_65)), p_65)), p_65))) <= p_65)), p_65)) > p_2547->g_397.s3))), 0x8450L)), p_65)), 0x613AL));
                        (*p_2547->g_456) = l_664;
                        if (p_64)
                            continue;
                    }
                    if ((atomic_inc(&p_2547->l_atomic_input[13]) == 5))
                    { /* block id: 275 */
                        uint64_t l_665 = 1UL;
                        int64_t l_666 = (-1L);
                        uint8_t l_667 = 0x4EL;
                        int32_t l_668 = 2L;
                        uint16_t l_669 = 0xD735L;
                        int16_t l_670 = 0x50A9L;
                        VECTOR(int32_t, 16) l_671 = (VECTOR(int32_t, 16))(0x0662FABEL, (VECTOR(int32_t, 4))(0x0662FABEL, (VECTOR(int32_t, 2))(0x0662FABEL, 0x28A29C58L), 0x28A29C58L), 0x28A29C58L, 0x0662FABEL, 0x28A29C58L, (VECTOR(int32_t, 2))(0x0662FABEL, 0x28A29C58L), (VECTOR(int32_t, 2))(0x0662FABEL, 0x28A29C58L), 0x0662FABEL, 0x28A29C58L, 0x0662FABEL, 0x28A29C58L);
                        uint32_t l_672[5][2];
                        uint8_t l_673 = 0xC3L;
                        int16_t l_674 = 0L;
                        int8_t l_675 = 1L;
                        VECTOR(int32_t, 8) l_676 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x01788C58L), 0x01788C58L), 0x01788C58L, (-10L), 0x01788C58L);
                        int32_t l_677 = (-4L);
                        VECTOR(uint16_t, 16) l_678 = (VECTOR(uint16_t, 16))(0x7261L, (VECTOR(uint16_t, 4))(0x7261L, (VECTOR(uint16_t, 2))(0x7261L, 0xD428L), 0xD428L), 0xD428L, 0x7261L, 0xD428L, (VECTOR(uint16_t, 2))(0x7261L, 0xD428L), (VECTOR(uint16_t, 2))(0x7261L, 0xD428L), 0x7261L, 0xD428L, 0x7261L, 0xD428L);
                        uint32_t l_679 = 0x9E406412L;
                        uint32_t l_680[7];
                        VECTOR(int32_t, 8) l_681 = (VECTOR(int32_t, 8))(0x6129DE61L, (VECTOR(int32_t, 4))(0x6129DE61L, (VECTOR(int32_t, 2))(0x6129DE61L, 0L), 0L), 0L, 0x6129DE61L, 0L);
                        VECTOR(int32_t, 16) l_682 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-8L)), (-8L)), (-8L), (-2L), (-8L), (VECTOR(int32_t, 2))((-2L), (-8L)), (VECTOR(int32_t, 2))((-2L), (-8L)), (-2L), (-8L), (-2L), (-8L));
                        uint32_t l_683 = 0UL;
                        int16_t l_684 = (-1L);
                        VECTOR(int32_t, 8) l_685 = (VECTOR(int32_t, 8))(0x71B0817DL, (VECTOR(int32_t, 4))(0x71B0817DL, (VECTOR(int32_t, 2))(0x71B0817DL, (-10L)), (-10L)), (-10L), 0x71B0817DL, (-10L));
                        int64_t l_686 = 1L;
                        uint8_t l_687[9][9] = {{255UL,0x25L,0x45L,0x45L,0x25L,255UL,0UL,0x12L,1UL},{255UL,0x25L,0x45L,0x45L,0x25L,255UL,0UL,0x12L,1UL},{255UL,0x25L,0x45L,0x45L,0x25L,255UL,0UL,0x12L,1UL},{255UL,0x25L,0x45L,0x45L,0x25L,255UL,0UL,0x12L,1UL},{255UL,0x25L,0x45L,0x45L,0x25L,255UL,0UL,0x12L,1UL},{255UL,0x25L,0x45L,0x45L,0x25L,255UL,0UL,0x12L,1UL},{255UL,0x25L,0x45L,0x45L,0x25L,255UL,0UL,0x12L,1UL},{255UL,0x25L,0x45L,0x45L,0x25L,255UL,0UL,0x12L,1UL},{255UL,0x25L,0x45L,0x45L,0x25L,255UL,0UL,0x12L,1UL}};
                        uint32_t l_688 = 0xCBD4D5C1L;
                        uint64_t l_689 = 0xE1BDAEF2A6EAC5B7L;
                        uint32_t l_690 = 1UL;
                        int16_t l_691 = 8L;
                        uint8_t l_692 = 1UL;
                        uint16_t l_693 = 0x0BC2L;
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_672[i][j] = 4294967295UL;
                        }
                        for (i = 0; i < 7; i++)
                            l_680[i] = 1UL;
                        l_667 = (l_666 = l_665);
                        l_677 |= (l_668 , ((l_670 = l_669) , ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(0x249EB6EDL, 1L, 0x0C754025L, ((VECTOR(int32_t, 4))(l_671.sfb8e)), (-10L), l_672[0][1], ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-3L), 4L)), 0x65C27629L, 0L)), 0L, 1L, 0x60046D64L)).scc4e, (int32_t)l_673, (int32_t)((l_675 = l_674) , ((VECTOR(int32_t, 4))(l_676.s1067)).y)))).w));
                        l_693 = (l_692 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(0x07D4L, 1L, 7L, 1L)), ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 2))(l_678.se2)).xxyyyyyy, (uint16_t)0x8917L, (uint16_t)(l_680[1] = l_679)))).hi))), 0x3D3D230EL, ((VECTOR(int32_t, 2))((-10L), 7L)), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_681.s4213522033607567)))).s46, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(l_682.s64))))).xyxyxyxyxyxxyxyy, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(((l_683 , l_684) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_685.s14)))).even), (-9L), 0x30A281EEL, 0x0F220550L, ((VECTOR(int32_t, 4))(1L, l_686, 0x560C265CL, 6L)))).s61, (int32_t)l_687[2][6], (int32_t)((l_689 = l_688) , ((VECTOR(int32_t, 4))(0x494C6F85L, l_690, (-1L), (-1L))).y)))).yxxy)))).xzxyzyxz, ((VECTOR(int32_t, 8))(0x4E381C13L))))).s5725611133733224))).s29))), ((VECTOR(int32_t, 2))(1L)), l_691, ((VECTOR(int32_t, 2))(0L)), 0x329C5EF0L, 0L)).sc);
                        unsigned int result = 0;
                        result += l_665;
                        result += l_666;
                        result += l_667;
                        result += l_668;
                        result += l_669;
                        result += l_670;
                        result += l_671.sf;
                        result += l_671.se;
                        result += l_671.sd;
                        result += l_671.sc;
                        result += l_671.sb;
                        result += l_671.sa;
                        result += l_671.s9;
                        result += l_671.s8;
                        result += l_671.s7;
                        result += l_671.s6;
                        result += l_671.s5;
                        result += l_671.s4;
                        result += l_671.s3;
                        result += l_671.s2;
                        result += l_671.s1;
                        result += l_671.s0;
                        int l_672_i0, l_672_i1;
                        for (l_672_i0 = 0; l_672_i0 < 5; l_672_i0++) {
                            for (l_672_i1 = 0; l_672_i1 < 2; l_672_i1++) {
                                result += l_672[l_672_i0][l_672_i1];
                            }
                        }
                        result += l_673;
                        result += l_674;
                        result += l_675;
                        result += l_676.s7;
                        result += l_676.s6;
                        result += l_676.s5;
                        result += l_676.s4;
                        result += l_676.s3;
                        result += l_676.s2;
                        result += l_676.s1;
                        result += l_676.s0;
                        result += l_677;
                        result += l_678.sf;
                        result += l_678.se;
                        result += l_678.sd;
                        result += l_678.sc;
                        result += l_678.sb;
                        result += l_678.sa;
                        result += l_678.s9;
                        result += l_678.s8;
                        result += l_678.s7;
                        result += l_678.s6;
                        result += l_678.s5;
                        result += l_678.s4;
                        result += l_678.s3;
                        result += l_678.s2;
                        result += l_678.s1;
                        result += l_678.s0;
                        result += l_679;
                        int l_680_i0;
                        for (l_680_i0 = 0; l_680_i0 < 7; l_680_i0++) {
                            result += l_680[l_680_i0];
                        }
                        result += l_681.s7;
                        result += l_681.s6;
                        result += l_681.s5;
                        result += l_681.s4;
                        result += l_681.s3;
                        result += l_681.s2;
                        result += l_681.s1;
                        result += l_681.s0;
                        result += l_682.sf;
                        result += l_682.se;
                        result += l_682.sd;
                        result += l_682.sc;
                        result += l_682.sb;
                        result += l_682.sa;
                        result += l_682.s9;
                        result += l_682.s8;
                        result += l_682.s7;
                        result += l_682.s6;
                        result += l_682.s5;
                        result += l_682.s4;
                        result += l_682.s3;
                        result += l_682.s2;
                        result += l_682.s1;
                        result += l_682.s0;
                        result += l_683;
                        result += l_684;
                        result += l_685.s7;
                        result += l_685.s6;
                        result += l_685.s5;
                        result += l_685.s4;
                        result += l_685.s3;
                        result += l_685.s2;
                        result += l_685.s1;
                        result += l_685.s0;
                        result += l_686;
                        int l_687_i0, l_687_i1;
                        for (l_687_i0 = 0; l_687_i0 < 9; l_687_i0++) {
                            for (l_687_i1 = 0; l_687_i1 < 9; l_687_i1++) {
                                result += l_687[l_687_i0][l_687_i1];
                            }
                        }
                        result += l_688;
                        result += l_689;
                        result += l_690;
                        result += l_691;
                        result += l_692;
                        result += l_693;
                        atomic_add(&p_2547->l_special_values[13], result);
                    }
                    else
                    { /* block id: 285 */
                        (1 + 1);
                    }
                    if (p_2547->g_694)
                        continue;
                    --l_697;
                }
            }
            else
            { /* block id: 291 */
                int32_t **l_700 = &l_424[2][2][5];
                uint32_t *l_701 = &p_2547->g_211;
                (*l_700) = &p_2547->g_428[0];
                (*p_2547->g_456) = (((*l_412) = l_408) == l_701);
            }
        }
    }
    else
    { /* block id: 297 */
        int32_t **l_707 = &p_2547->g_456;
        int32_t ***l_709[1];
        int32_t l_717 = (-4L);
        int64_t *l_718[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        for (i = 0; i < 1; i++)
            l_709[i] = &p_2547->g_234;
        l_407 = ((((-6L) <= (p_2547->g_comm_values[p_2547->tid] = ((0x43L || ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))((((*p_2547->g_456) = (safe_lshift_func_int8_t_s_s((((safe_mod_func_int32_t_s_s(p_65, ((VECTOR(uint32_t, 4))(l_706.yyyy)).z)) , l_707) == (l_710 = (l_708 = l_708))), ((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (l_715 == (void*)0))) & FAKE_DIVERGE(p_2547->local_2_offset, get_local_id(2), 10)), ((VECTOR(uint8_t, 8))(l_716.s452a333c)).s2)) >= ((&p_2547->g_192 != (void*)0) == p_2547->g_564.y))))) | l_717), 6L, ((VECTOR(int8_t, 8))(0x07L)), 1L, 0x51L, ((VECTOR(int8_t, 4))(0x03L)))).sc8)).odd) , p_2547->g_189))) < l_389.s3) ^ p_2547->g_215.s6);
    }
    return p_2547->g_211;
}


/* ------------------------------------------ */
/* 
 * reads : p_2547->g_22 p_2547->g_96 p_2547->g_99 p_2547->g_145 p_2547->g_85 p_2547->g_211 p_2547->g_215 p_2547->g_216 p_2547->g_220 p_2547->g_223 p_2547->g_226 p_2547->g_234 p_2547->g_195 p_2547->g_194 p_2547->g_239 p_2547->g_80
 * writes: p_2547->g_22 p_2547->g_80 p_2547->g_99 p_2547->g_96.f2 p_2547->g_211 p_2547->g_145 p_2547->g_201 p_2547->g_239 p_2547->g_85 p_2547->g_194 p_2547->g_353
 */
uint64_t * func_66(uint16_t  p_67, uint64_t  p_68, uint32_t * p_69, int16_t  p_70, struct S1 * p_2547)
{ /* block id: 11 */
    uint32_t l_81 = 0x60F7E9ACL;
    int32_t *l_88 = &p_2547->g_80[0][6];
    int16_t *l_100 = (void*)0;
    int16_t *l_101[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_104 = 0x4E3F75E0L;
    uint16_t *l_107 = &p_2547->g_96.f2;
    VECTOR(uint32_t, 16) l_110 = (VECTOR(uint32_t, 16))(0x53DE48FBL, (VECTOR(uint32_t, 4))(0x53DE48FBL, (VECTOR(uint32_t, 2))(0x53DE48FBL, 4294967295UL), 4294967295UL), 4294967295UL, 0x53DE48FBL, 4294967295UL, (VECTOR(uint32_t, 2))(0x53DE48FBL, 4294967295UL), (VECTOR(uint32_t, 2))(0x53DE48FBL, 4294967295UL), 0x53DE48FBL, 4294967295UL, 0x53DE48FBL, 4294967295UL);
    union U0 *l_149 = &p_2547->g_96;
    VECTOR(uint64_t, 4) l_151 = (VECTOR(uint64_t, 4))(0xC605374556D828C4L, (VECTOR(uint64_t, 2))(0xC605374556D828C4L, 0xBF86FAEEADD40DFCL), 0xBF86FAEEADD40DFCL);
    VECTOR(int32_t, 8) l_193 = (VECTOR(int32_t, 8))(0x4F67ABC4L, (VECTOR(int32_t, 4))(0x4F67ABC4L, (VECTOR(int32_t, 2))(0x4F67ABC4L, 0L), 0L), 0L, 0x4F67ABC4L, 0L);
    VECTOR(int32_t, 4) l_196 = (VECTOR(int32_t, 4))(0x5A0D80B1L, (VECTOR(int32_t, 2))(0x5A0D80B1L, 0x131B42E5L), 0x131B42E5L);
    VECTOR(int32_t, 4) l_218 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
    int8_t l_363 = 0x0CL;
    uint64_t *l_377 = (void*)0;
    int i;
    for (p_70 = 0; (p_70 > (-27)); p_70--)
    { /* block id: 14 */
        if (p_68)
            break;
    }
    for (p_68 = 0; (p_68 < 52); p_68 = safe_add_func_uint16_t_u_u(p_68, 9))
    { /* block id: 19 */
        uint32_t l_93 = 0x021A1DB4L;
        for (p_2547->g_22 = 0; (p_2547->g_22 > 30); p_2547->g_22 = safe_add_func_int64_t_s_s(p_2547->g_22, 1))
        { /* block id: 22 */
            int32_t *l_79 = &p_2547->g_80[0][6];
            int32_t *l_84[4][7] = {{&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1]},{&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1]},{&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1]},{&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1]}};
            int8_t l_86 = 0x42L;
            int32_t **l_87[10][5][5] = {{{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]}},{{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]}},{{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]}},{{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]}},{{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]}},{{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]}},{{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]}},{{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]}},{{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]}},{{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]},{&l_84[2][2],&l_84[3][4],(void*)0,&l_79,&l_84[2][0]}}};
            int i, j, k;
            ++l_81;
            l_86 = ((*l_79) = 0x2208E2B0L);
            l_88 = p_69;
        }
        for (p_70 = (-7); (p_70 <= (-23)); --p_70)
        { /* block id: 30 */
            for (p_2547->g_22 = 0; (p_2547->g_22 == 23); p_2547->g_22 = safe_add_func_uint8_t_u_u(p_2547->g_22, 1))
            { /* block id: 33 */
                l_93++;
            }
            if (p_2547->g_22)
                break;
        }
    }
    atomic_xor(&p_2547->l_atomic_reduction[0], (p_2547->g_96 , p_67) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_2547->v_collective += p_2547->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (((safe_div_func_int8_t_s_s((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))((-9L), ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_2547->g_99.xxxxxwyxxxyyywyz)))).s8b, (int16_t)((FAKE_DIVERGE(p_2547->local_2_offset, get_local_id(2), 10) , (((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xD112L, 65531UL)).xxxx))))).y < 5L)) && (p_2547->g_99.w = p_2547->g_99.z)), (int16_t)p_70))), 0L)).odd)).hi == (safe_mul_func_int16_t_s_s((l_104 ^= p_70), (((*l_107) = (safe_lshift_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), 10))) ^ p_68)))), ((safe_lshift_func_int8_t_s_u((((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_110.sab)), 0x01A4E0C3L, 1UL)).hi, ((VECTOR(uint32_t, 2))(5UL, 0xEEF0C4AFL))))).odd , ((void*)0 != &p_2547->g_22)), 1)) , 0x76L))) > p_2547->g_22))
    { /* block id: 43 */
        uint8_t l_140 = 250UL;
        int32_t l_146 = 0x427BCE40L;
        VECTOR(uint64_t, 16) l_159 = (VECTOR(uint64_t, 16))(0x5330C45750431255L, (VECTOR(uint64_t, 4))(0x5330C45750431255L, (VECTOR(uint64_t, 2))(0x5330C45750431255L, 0xFF747F28776ED50CL), 0xFF747F28776ED50CL), 0xFF747F28776ED50CL, 0x5330C45750431255L, 0xFF747F28776ED50CL, (VECTOR(uint64_t, 2))(0x5330C45750431255L, 0xFF747F28776ED50CL), (VECTOR(uint64_t, 2))(0x5330C45750431255L, 0xFF747F28776ED50CL), 0x5330C45750431255L, 0xFF747F28776ED50CL, 0x5330C45750431255L, 0xFF747F28776ED50CL);
        VECTOR(uint64_t, 16) l_160 = (VECTOR(uint64_t, 16))(0xCDB2E776E5D696A6L, (VECTOR(uint64_t, 4))(0xCDB2E776E5D696A6L, (VECTOR(uint64_t, 2))(0xCDB2E776E5D696A6L, 2UL), 2UL), 2UL, 0xCDB2E776E5D696A6L, 2UL, (VECTOR(uint64_t, 2))(0xCDB2E776E5D696A6L, 2UL), (VECTOR(uint64_t, 2))(0xCDB2E776E5D696A6L, 2UL), 0xCDB2E776E5D696A6L, 2UL, 0xCDB2E776E5D696A6L, 2UL);
        union U0 *l_182 = &p_2547->g_96;
        int32_t l_204 = 0x67083642L;
        VECTOR(int32_t, 8) l_222 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x598337A8L), 0x598337A8L), 0x598337A8L, 2L, 0x598337A8L);
        int32_t l_358[4][10];
        uint64_t **l_368 = &p_2547->g_192;
        uint64_t ***l_367 = &l_368;
        VECTOR(int8_t, 4) l_369 = (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, 0x4CL), 0x4CL);
        int32_t *l_370 = (void*)0;
        int32_t *l_371 = (void*)0;
        int32_t *l_372 = &l_146;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 10; j++)
                l_358[i][j] = 0x533F1D31L;
        }
        for (p_2547->g_22 = 4; (p_2547->g_22 >= 4); p_2547->g_22++)
        { /* block id: 46 */
            VECTOR(uint8_t, 4) l_137 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x2DL), 0x2DL);
            int32_t l_143 = 0x6C1354E1L;
            VECTOR(uint8_t, 16) l_152 = (VECTOR(uint8_t, 16))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 2UL), 2UL), 2UL, 254UL, 2UL, (VECTOR(uint8_t, 2))(254UL, 2UL), (VECTOR(uint8_t, 2))(254UL, 2UL), 254UL, 2UL, 254UL, 2UL);
            union U0 *l_181 = &p_2547->g_96;
            int32_t l_203 = 0x4646C511L;
            uint32_t *l_233[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint8_t *l_253 = &l_140;
            VECTOR(int8_t, 4) l_256 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x41L), 0x41L);
            int8_t *l_259 = (void*)0;
            int8_t *l_260 = &p_2547->g_201;
            int32_t **l_261 = &l_88;
            int32_t l_359 = (-4L);
            int32_t l_360 = 5L;
            int32_t l_361[3][9] = {{(-1L),1L,(-5L),1L,(-1L),(-1L),1L,(-5L),1L},{(-1L),1L,(-5L),1L,(-1L),(-1L),1L,(-5L),1L},{(-1L),1L,(-5L),1L,(-1L),(-1L),1L,(-5L),1L}};
            int i, j;
            for (l_104 = (-28); (l_104 < 18); l_104 = safe_add_func_uint16_t_u_u(l_104, 1))
            { /* block id: 49 */
                VECTOR(uint16_t, 2) l_131 = (VECTOR(uint16_t, 2))(65532UL, 65532UL);
                int32_t l_169 = 0x4F6DD3D4L;
                uint32_t l_197 = 0x685AF8ADL;
                VECTOR(int32_t, 8) l_199 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x798AFAD7L), 0x798AFAD7L), 0x798AFAD7L, 9L, 0x798AFAD7L);
                uint16_t l_205 = 0UL;
                uint8_t *l_210 = (void*)0;
                VECTOR(uint32_t, 2) l_214 = (VECTOR(uint32_t, 2))(0xCD65DFEDL, 4294967295UL);
                VECTOR(int16_t, 16) l_217 = (VECTOR(int16_t, 16))(0x13D5L, (VECTOR(int16_t, 4))(0x13D5L, (VECTOR(int16_t, 2))(0x13D5L, 0L), 0L), 0L, 0x13D5L, 0L, (VECTOR(int16_t, 2))(0x13D5L, 0L), (VECTOR(int16_t, 2))(0x13D5L, 0L), 0x13D5L, 0L, 0x13D5L, 0L);
                VECTOR(int32_t, 4) l_219 = (VECTOR(int32_t, 4))(0x1D664D86L, (VECTOR(int32_t, 2))(0x1D664D86L, 0x36964168L), 0x36964168L);
                int32_t l_221 = 0x48C5682BL;
                int32_t **l_230 = &l_88;
                int32_t ***l_229 = &l_230;
                int8_t *l_235 = (void*)0;
                uint64_t l_236 = 0x7BF970419DD807ABL;
                int8_t *l_237 = &p_2547->g_201;
                uint32_t *l_238[4][6][7] = {{{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81}},{{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81}},{{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81}},{{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0,&l_81,&l_81,&l_81}}};
                int i, j, k;
                if (p_67)
                    break;
                for (l_81 = (-18); (l_81 != 60); l_81 = safe_add_func_int8_t_s_s(l_81, 3))
                { /* block id: 53 */
                    uint64_t *l_141[8][3][1] = {{{&p_2547->g_22},{&p_2547->g_22},{&p_2547->g_22}},{{&p_2547->g_22},{&p_2547->g_22},{&p_2547->g_22}},{{&p_2547->g_22},{&p_2547->g_22},{&p_2547->g_22}},{{&p_2547->g_22},{&p_2547->g_22},{&p_2547->g_22}},{{&p_2547->g_22},{&p_2547->g_22},{&p_2547->g_22}},{{&p_2547->g_22},{&p_2547->g_22},{&p_2547->g_22}},{{&p_2547->g_22},{&p_2547->g_22},{&p_2547->g_22}},{{&p_2547->g_22},{&p_2547->g_22},{&p_2547->g_22}}};
                    int8_t *l_142 = (void*)0;
                    int32_t l_144 = 0L;
                    int32_t *l_202[10] = {&l_104,&p_2547->g_85[0][4],&l_104,&l_104,&p_2547->g_85[0][4],&l_104,&l_104,&p_2547->g_85[0][4],&l_104,&l_104};
                    int i, j, k;
                    l_146 = ((safe_mod_func_uint64_t_u_u((0x7EL || (GROUP_DIVERGE(2, 1) && (safe_div_func_int64_t_s_s((safe_mod_func_int8_t_s_s((&p_70 == &p_70), (safe_mod_func_int64_t_s_s(((((VECTOR(uint32_t, 16))(0x304A0B4BL, (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 4))(p_2547->g_127.s2510)).xzxwyywxxxwxxzxw))).sa, (safe_div_func_int16_t_s_s((((VECTOR(uint64_t, 4))(p_2547->g_130.s5056)).y & (((p_2547->g_130.s6 & ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))((!l_131.x), 0x5070L, 65530UL, (p_2547->g_33.x , ((((p_2547->g_132 ^= FAKE_DIVERGE(p_2547->local_2_offset, get_local_id(2), 10)) < (((((safe_div_func_int8_t_s_s((((l_143 ^= ((p_70 & ((p_2547->g_96.f1 = (p_68 |= (((FAKE_DIVERGE(p_2547->global_0_offset, get_global_id(0), 10) || (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_137.xxzz)))).xywyzwzw)).s4, ((safe_lshift_func_uint8_t_u_s((+((((p_70 & 0x061D4BFAL) && 0x3D024A6BL) && l_140) , 0xCFL)), 0)) == 0x2FBF4AD52605C497L)))) < 1L) || 1L))) == p_67)) >= l_131.x)) == p_67) , 0x32L), 1L)) && p_2547->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2547->tid, 88))]) != 0x45L) || p_2547->g_85[0][2]) == p_67)) ^ 1L) , l_144)), 0xC2F5L, p_2547->g_145, 0x4FB8L, 0x2FC4L)), ((VECTOR(uint16_t, 2))(65526UL)), 0x761CL, ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 2))(65535UL)), 0UL)).odd)).s6) ^ p_67) == p_2547->g_80[2][3])), p_67)))), ((VECTOR(uint32_t, 8))(0xCE6E74F6L)), 0x18996114L, ((VECTOR(uint32_t, 4))(7UL)), 0x602CC8EEL)).sd < p_2547->g_145) > l_131.x), p_67)))), p_67)))), p_67)) < p_67);
                }
                l_204 = ((((((p_2547->g_239 |= (l_203 ^= ((p_2547->g_85[0][2] && l_131.y) , ((safe_div_func_uint8_t_u_u((p_2547->g_211--), p_67)) , ((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 4))(l_214.xxxy)).odd, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(4UL, 0x92BA8E14L)))).xyxxyyxx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(p_2547->g_215.sc854347f)).s6204615546031144)).even))))).s71)), ((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 16))(0x5E803D2FL, 0xF9F8DC62L, l_140, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 2))(p_2547->g_216.sc9)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 8))(l_217.sdc2f3845)).s37))), 3UL, 1UL)).even))), 3UL, 4294967292UL)), ((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x1B8584F7L, 0x6BBB2773L)).xyyy)), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(l_218.yzxwwxxz)).s00, ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_219.wyxzxxzzxzwxwxzz)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_2547->g_220.s8e37)).zzwywzyy)).s2675246273265363, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x0E486C57L, 2L)).even, (p_2547->g_145 = l_221), ((VECTOR(int32_t, 4))(l_222.s1540)), 0x495829EEL, 0L, 0x177D834BL, ((VECTOR(int32_t, 4))(p_2547->g_223.xxxx)), (((safe_add_func_int16_t_s_s(((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(p_2547->g_226.s71445423)), ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 4))((-1L), 0x63L, 0x07L, 0x05L)).odd, (int8_t)((*l_237) = (!(l_236 = (safe_mod_func_uint64_t_u_u((((((*l_229) = &l_88) == (((safe_add_func_uint64_t_u_u(((p_68 , p_69) == l_233[1]), 1UL)) == 0xB6L) , p_2547->g_234)) <= l_152.se) < l_159.s5), p_2547->g_195.sd)))))))).yyyyyyyx, ((VECTOR(int8_t, 8))(0L))))).s4465664406756206, ((VECTOR(int8_t, 16))(0x53L))))).even)))).s2 | 0xE4L) , 0x78C6L), p_2547->g_99.x)) , l_140) , p_2547->g_226.s6), 0x530F2090L, 0x54182CB1L)).s0e, ((VECTOR(int32_t, 2))(0x1985A4F5L))))).xyxxxxyyyxxxxxyy))).s11))).odd, p_2547->g_223.y, 0x60A35705L, 1L)).s1631153537354430)).odd, ((VECTOR(int32_t, 8))(7L))))), 0x9653B595L)), ((VECTOR(uint32_t, 16))(0x7453D5FFL)), ((VECTOR(uint32_t, 16))(8UL))))).s2d))).yyyy)).lo, ((VECTOR(uint32_t, 2))(1UL))))), 0UL, 4294967291UL)).odd))).xyxyyyyx, (uint32_t)p_67, (uint32_t)p_2547->g_194.x))).s3)))) , p_67) <= p_2547->g_195.se) , p_70) & p_2547->g_226.s5) > 0x267DB47F5A99FCA5L);
                return &p_2547->g_22;
            }
            for (l_81 = 19; (l_81 > 28); ++l_81)
            { /* block id: 95 */
                int32_t **l_242 = &l_88;
                (*l_242) = ((*l_149) , &p_2547->g_80[1][0]);
            }
            if ((p_2547->g_85[0][6] &= (0x28340461L | ((((p_67 , (((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((p_2547->g_99.z = p_2547->g_220.sd) & (safe_rshift_func_uint16_t_u_u(((((p_2547->g_220.s1 , (safe_mul_func_uint16_t_u_u(((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))((safe_div_func_uint8_t_u_u((--(*l_253)), (p_2547->g_22 , 0x58L))), ((VECTOR(int8_t, 2))(l_256.wx)), (-7L), ((*l_260) = ((l_203 = ((safe_lshift_func_int8_t_s_s(p_67, (p_68 <= 1L))) == 1UL)) & p_68)), ((VECTOR(int8_t, 2))(0x38L)), 1L)).s35)), (-1L), 7L, p_2547->g_215.s4, ((VECTOR(int8_t, 2))(0x6AL)), (-7L))).s5 & 1L) || GROUP_DIVERGE(2, 1)), l_146))) , (void*)0) != (void*)0) <= l_222.s5), 14))), 0xD1D0L)), 5)) , p_68) , p_2547->g_234)) != l_261) , p_2547->g_220.sf) || p_68))))
            { /* block id: 103 */
                return &p_2547->g_22;
            }
            else
            { /* block id: 105 */
                int32_t *l_330 = &p_2547->g_80[0][6];
                int32_t *l_331[10][2][9] = {{{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0},{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0}},{{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0},{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0}},{{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0},{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0}},{{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0},{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0}},{{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0},{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0}},{{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0},{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0}},{{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0},{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0}},{{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0},{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0}},{{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0},{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0}},{{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0},{(void*)0,&p_2547->g_85[0][1],&l_203,&p_2547->g_85[0][6],&l_204,&p_2547->g_85[0][6],&l_203,&p_2547->g_85[0][1],(void*)0}}};
                int64_t *l_354 = &p_2547->g_239;
                int64_t *l_355 = (void*)0;
                int64_t *l_356 = (void*)0;
                int64_t *l_357[10][6][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                int64_t l_362 = 0x286EC372F684E155L;
                uint64_t l_364 = 18446744073709551610UL;
                int i, j, k;
                if ((atomic_inc(&p_2547->g_atomic_input[42 * get_linear_group_id() + 22]) == 5))
                { /* block id: 107 */
                    int32_t l_262 = 1L;
                    int16_t l_263 = 0x69F4L;
                    int16_t l_264 = 0x6713L;
                    uint8_t l_265[2][8] = {{0xCEL,0xCEL,0x94L,247UL,4UL,247UL,0x94L,0xCEL},{0xCEL,0xCEL,0x94L,247UL,4UL,247UL,0x94L,0xCEL}};
                    int32_t l_286[6][10];
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 10; j++)
                            l_286[i][j] = (-1L);
                    }
                    if ((l_262 , (l_265[1][6] = (l_264 = l_263))))
                    { /* block id: 110 */
                        VECTOR(int64_t, 16) l_266 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x3562EA41423176A2L), 0x3562EA41423176A2L), 0x3562EA41423176A2L, 1L, 0x3562EA41423176A2L, (VECTOR(int64_t, 2))(1L, 0x3562EA41423176A2L), (VECTOR(int64_t, 2))(1L, 0x3562EA41423176A2L), 1L, 0x3562EA41423176A2L, 1L, 0x3562EA41423176A2L);
                        VECTOR(int64_t, 8) l_267 = (VECTOR(int64_t, 8))(0x16FCF3309E014EA2L, (VECTOR(int64_t, 4))(0x16FCF3309E014EA2L, (VECTOR(int64_t, 2))(0x16FCF3309E014EA2L, 0L), 0L), 0L, 0x16FCF3309E014EA2L, 0L);
                        uint16_t l_268 = 0xFFF7L;
                        VECTOR(int32_t, 16) l_269 = (VECTOR(int32_t, 16))(0x56936928L, (VECTOR(int32_t, 4))(0x56936928L, (VECTOR(int32_t, 2))(0x56936928L, 1L), 1L), 1L, 0x56936928L, 1L, (VECTOR(int32_t, 2))(0x56936928L, 1L), (VECTOR(int32_t, 2))(0x56936928L, 1L), 0x56936928L, 1L, 0x56936928L, 1L);
                        uint32_t l_270[9][1][5] = {{{0x86CF4F7BL,0xBCFE45B5L,0x84DD9A3FL,0xBCFE45B5L,0x86CF4F7BL}},{{0x86CF4F7BL,0xBCFE45B5L,0x84DD9A3FL,0xBCFE45B5L,0x86CF4F7BL}},{{0x86CF4F7BL,0xBCFE45B5L,0x84DD9A3FL,0xBCFE45B5L,0x86CF4F7BL}},{{0x86CF4F7BL,0xBCFE45B5L,0x84DD9A3FL,0xBCFE45B5L,0x86CF4F7BL}},{{0x86CF4F7BL,0xBCFE45B5L,0x84DD9A3FL,0xBCFE45B5L,0x86CF4F7BL}},{{0x86CF4F7BL,0xBCFE45B5L,0x84DD9A3FL,0xBCFE45B5L,0x86CF4F7BL}},{{0x86CF4F7BL,0xBCFE45B5L,0x84DD9A3FL,0xBCFE45B5L,0x86CF4F7BL}},{{0x86CF4F7BL,0xBCFE45B5L,0x84DD9A3FL,0xBCFE45B5L,0x86CF4F7BL}},{{0x86CF4F7BL,0xBCFE45B5L,0x84DD9A3FL,0xBCFE45B5L,0x86CF4F7BL}}};
                        uint64_t l_271 = 0x9285EEF710C32767L;
                        VECTOR(int32_t, 4) l_272 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0B6CA54EL), 0x0B6CA54EL);
                        int64_t l_273 = 0x35ECD944AB20935CL;
                        int8_t l_274 = 7L;
                        uint32_t l_275 = 0x2599863AL;
                        int i, j, k;
                        l_270[5][0][1] ^= ((l_268 |= ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 2))(l_266.sd4)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_267.s54075214)).s1231235021574517)).s54))).odd) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_269.sd077db204a989218)).s2e4b)).x);
                        l_273 = (l_271 , ((VECTOR(int32_t, 2))(l_272.zz)).lo);
                        l_275 ^= l_274;
                    }
                    else
                    { /* block id: 115 */
                        int8_t l_276 = 0x24L;
                        VECTOR(uint16_t, 8) l_277 = (VECTOR(uint16_t, 8))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0xC8D7L), 0xC8D7L), 0xC8D7L, 65528UL, 0xC8D7L);
                        uint16_t *l_281 = (void*)0;
                        uint16_t **l_280 = &l_281;
                        uint16_t **l_282 = &l_281;
                        int32_t l_284 = 0x2BE97FAFL;
                        int32_t *l_283[9] = {&l_284,&l_284,&l_284,&l_284,&l_284,&l_284,&l_284,&l_284,&l_284};
                        int32_t *l_285 = &l_284;
                        int i;
                        --l_277.s6;
                        l_282 = l_280;
                        l_285 = l_283[1];
                    }
                    if (l_286[1][3])
                    { /* block id: 120 */
                        int32_t l_288 = 0x27A934EFL;
                        int32_t *l_287[2][7][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                        int32_t l_289 = 0x2153D074L;
                        int32_t *l_290 = &l_288;
                        int32_t *l_291 = &l_288;
                        int i, j, k;
                        l_286[4][6] |= 0x75233384L;
                        l_287[1][5][2] = l_287[1][5][2];
                        l_286[3][3] &= l_289;
                        l_291 = l_290;
                    }
                    else
                    { /* block id: 125 */
                        uint8_t l_292 = 0x41L;
                        uint16_t l_295 = 1UL;
                        uint16_t l_298 = 0xA47AL;
                        uint32_t l_299 = 0x4DFE6B94L;
                        VECTOR(int32_t, 8) l_300 = (VECTOR(int32_t, 8))(0x621AACA1L, (VECTOR(int32_t, 4))(0x621AACA1L, (VECTOR(int32_t, 2))(0x621AACA1L, 0L), 0L), 0L, 0x621AACA1L, 0L);
                        int64_t l_301 = 0x4D1D9BDEC7DB3D32L;
                        int i;
                        l_292--;
                        --l_295;
                        l_286[1][3] = (l_298 , (l_299 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_300.s0420)).hi)).xxyyxyxxyyxxyyxy)).se));
                        l_286[5][7] &= l_301;
                    }
                    for (l_286[1][3] = 0; (l_286[1][3] > 15); l_286[1][3] = safe_add_func_int16_t_s_s(l_286[1][3], 4))
                    { /* block id: 133 */
                        VECTOR(uint16_t, 16) l_304 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xB9AFL), 0xB9AFL), 0xB9AFL, 1UL, 0xB9AFL, (VECTOR(uint16_t, 2))(1UL, 0xB9AFL), (VECTOR(uint16_t, 2))(1UL, 0xB9AFL), 1UL, 0xB9AFL, 1UL, 0xB9AFL);
                        int64_t l_305 = 5L;
                        uint16_t l_306 = 5UL;
                        uint32_t l_307 = 0x613865ADL;
                        VECTOR(int32_t, 8) l_308 = (VECTOR(int32_t, 8))(0x6F7AD864L, (VECTOR(int32_t, 4))(0x6F7AD864L, (VECTOR(int32_t, 2))(0x6F7AD864L, (-1L)), (-1L)), (-1L), 0x6F7AD864L, (-1L));
                        VECTOR(int16_t, 8) l_309 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 4L), 4L), 4L, 1L, 4L);
                        VECTOR(uint16_t, 4) l_310 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x946AL), 0x946AL);
                        VECTOR(uint16_t, 2) l_311 = (VECTOR(uint16_t, 2))(0xF75FL, 0x0312L);
                        VECTOR(int32_t, 2) l_312 = (VECTOR(int32_t, 2))((-9L), 0x27BDD854L);
                        VECTOR(int32_t, 8) l_313 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                        VECTOR(int32_t, 2) l_314 = (VECTOR(int32_t, 2))((-4L), 0x3BF0B189L);
                        uint32_t l_315[9];
                        uint32_t l_316 = 0UL;
                        int32_t l_317 = 0x0029F27BL;
                        uint32_t l_318 = 4294967295UL;
                        int64_t l_319 = 1L;
                        uint16_t l_320 = 1UL;
                        VECTOR(int32_t, 8) l_321 = (VECTOR(int32_t, 8))(0x3B2F9CEBL, (VECTOR(int32_t, 4))(0x3B2F9CEBL, (VECTOR(int32_t, 2))(0x3B2F9CEBL, 9L), 9L), 9L, 0x3B2F9CEBL, 9L);
                        VECTOR(int32_t, 16) l_322 = (VECTOR(int32_t, 16))(0x69C9AC9FL, (VECTOR(int32_t, 4))(0x69C9AC9FL, (VECTOR(int32_t, 2))(0x69C9AC9FL, 0x799A8B86L), 0x799A8B86L), 0x799A8B86L, 0x69C9AC9FL, 0x799A8B86L, (VECTOR(int32_t, 2))(0x69C9AC9FL, 0x799A8B86L), (VECTOR(int32_t, 2))(0x69C9AC9FL, 0x799A8B86L), 0x69C9AC9FL, 0x799A8B86L, 0x69C9AC9FL, 0x799A8B86L);
                        union U0 l_323 = {-8L};
                        int8_t l_324 = 8L;
                        int32_t l_325 = 0x3CD70492L;
                        uint16_t l_326 = 0x3591L;
                        uint32_t l_327 = 1UL;
                        int32_t l_328 = 0x7D56F73BL;
                        uint8_t l_329[6] = {8UL,8UL,8UL,8UL,8UL,8UL};
                        int i;
                        for (i = 0; i < 9; i++)
                            l_315[i] = 0x228E72DAL;
                        l_327 = (((VECTOR(uint16_t, 8))(l_304.s5e4e2523)).s0 , (l_305 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x342A7E81L, 0x61C764DCL)), (-1L), 0x42B3C5BAL)), (l_306 |= 0x7D9DF517L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((l_307 , 0x7CB4E697L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(l_308.s60)).xxyx))).hi)), (-2L))).lo)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(4L, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(l_309.s6652)).wxxyyywywxxwxxwx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0UL, 7UL)).xxyx)).even)).yxyx))), 65529UL, ((VECTOR(uint16_t, 8))(l_310.yxxxwwyx)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_311.yxxyyxxxxyxyyyyy)).se5)), 0UL))))).sad))).lo, 1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_312.xy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(l_313.s73))))).yyxxyxyxxyxyxxxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_314.xy)), (l_317 = (l_315[8] , l_316)), 3L, (l_319 = l_318), l_320, (-1L), 0x012C856CL)).s1446053763232033, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_321.s1021)).z, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))((-10L), 0x16F129DDL)).xxxxyxxxyxxxyyxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((-6L), ((VECTOR(int32_t, 4))(l_322.sce1c)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(1L, ((VECTOR(int16_t, 2))(0x1587L, 0x670AL)), (-1L))), ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))((l_323 , 0x4FF2L), 0x5A5FL, 0x203DL, 5L)).hi, ((VECTOR(int16_t, 2))(0x6D82L))))), 0x2FCDL, 0x6F0EL)), ((VECTOR(uint16_t, 8))(0x25FCL))))).odd)))), ((VECTOR(int32_t, 2))(4L)), l_324, l_325, ((VECTOR(int32_t, 2))(5L)), 0x1908866DL)).lo)).s6722047646477524))).lo)), ((VECTOR(int32_t, 2))(0x5AB4ACBCL)), ((VECTOR(int32_t, 4))((-3L))), 0x6E3FB1D8L)).sf5)).yyyxxxxxyxxxyxxy))))).scb)), ((VECTOR(int32_t, 2))(1L)), 0L, 0L)).lo)), 0x2B6B0734L)).even, (int32_t)l_326))))))), 0L, 0x5D6895FEL, 1L, 0x70DC6865L)))).even)).s7));
                        l_308.s0 = l_328;
                        l_329[4] = 0x3957F123L;
                    }
                    unsigned int result = 0;
                    result += l_262;
                    result += l_263;
                    result += l_264;
                    int l_265_i0, l_265_i1;
                    for (l_265_i0 = 0; l_265_i0 < 2; l_265_i0++) {
                        for (l_265_i1 = 0; l_265_i1 < 8; l_265_i1++) {
                            result += l_265[l_265_i0][l_265_i1];
                        }
                    }
                    int l_286_i0, l_286_i1;
                    for (l_286_i0 = 0; l_286_i0 < 6; l_286_i0++) {
                        for (l_286_i1 = 0; l_286_i1 < 10; l_286_i1++) {
                            result += l_286[l_286_i0][l_286_i1];
                        }
                    }
                    atomic_add(&p_2547->g_special_values[42 * get_linear_group_id() + 22], result);
                }
                else
                { /* block id: 141 */
                    (1 + 1);
                }
                p_2547->g_194.x = ((*l_330) |= p_70);
                l_204 = ((l_146 >= (safe_div_func_int64_t_s_s((safe_sub_func_int16_t_s_s((0UL ^ GROUP_DIVERGE(1, 1)), (safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(p_2547->g_215.s9, (safe_lshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(0x41L, p_2547->g_223.x)), (l_196.w &= (safe_sub_func_uint8_t_u_u((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((p_67 ^ 1L) <= ((safe_unary_minus_func_int64_t_s(((*l_354) &= (safe_sub_func_int16_t_s_s((p_2547->g_353 = (p_2547->g_99.w ^= (safe_rshift_func_int8_t_s_u(0x6BL, 0)))), p_67))))) , 1L)), 6L, 0x28L, 2L, ((VECTOR(int8_t, 2))(0L)), 0L, 0x44L)), ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(0L)), p_67, ((VECTOR(int8_t, 2))((-1L))), (-1L))).s8 , 0x4DL), p_68))))), 9)))) == p_70), 0x59B7L)))), 0x32A09D366E8A3A94L))) | p_68);
                --l_364;
            }
        }
        (*l_372) ^= ((((*l_367) = &p_2547->g_192) != (void*)0) > ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_369.xzwzzxzz)))).s1);
    }
    else
    { /* block id: 156 */
        int32_t *l_375 = (void*)0;
        int32_t *l_376[7] = {&p_2547->g_80[0][6],&p_2547->g_85[0][1],&p_2547->g_80[0][6],&p_2547->g_80[0][6],&p_2547->g_85[0][1],&p_2547->g_80[0][6],&p_2547->g_80[0][6]};
        int i;
        l_193.s1 &= (safe_sub_func_int8_t_s_s((&p_2547->g_192 == &p_2547->g_192), p_2547->g_195.s3));
    }
    return l_377;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[42];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 42; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[42];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 42; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[88];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 88; i++)
            l_comm_values[i] = 1;
    struct S1 c_2548;
    struct S1* p_2547 = &c_2548;
    struct S1 c_2549 = {
        (VECTOR(uint8_t, 2))(1UL, 0xFCL), // p_2547->g_12
        0x26C4F32B7B88CDF8L, // p_2547->g_22
        (VECTOR(uint16_t, 2))(4UL, 0x8F49L), // p_2547->g_33
        &p_2547->g_22, // p_2547->g_41
        (VECTOR(uint32_t, 8))(0x54743E03L, (VECTOR(uint32_t, 4))(0x54743E03L, (VECTOR(uint32_t, 2))(0x54743E03L, 0x41E2253EL), 0x41E2253EL), 0x41E2253EL, 0x54743E03L, 0x41E2253EL), // p_2547->g_44
        {{6L,0x2349BDABL,2L,0x017FF2A7L,1L,1L,0x017FF2A7L,2L,0x2349BDABL},{6L,0x2349BDABL,2L,0x017FF2A7L,1L,1L,0x017FF2A7L,2L,0x2349BDABL},{6L,0x2349BDABL,2L,0x017FF2A7L,1L,1L,0x017FF2A7L,2L,0x2349BDABL},{6L,0x2349BDABL,2L,0x017FF2A7L,1L,1L,0x017FF2A7L,2L,0x2349BDABL},{6L,0x2349BDABL,2L,0x017FF2A7L,1L,1L,0x017FF2A7L,2L,0x2349BDABL},{6L,0x2349BDABL,2L,0x017FF2A7L,1L,1L,0x017FF2A7L,2L,0x2349BDABL},{6L,0x2349BDABL,2L,0x017FF2A7L,1L,1L,0x017FF2A7L,2L,0x2349BDABL},{6L,0x2349BDABL,2L,0x017FF2A7L,1L,1L,0x017FF2A7L,2L,0x2349BDABL}}, // p_2547->g_80
        {{0L,0L,0L,0L,0L,0L,0L}}, // p_2547->g_85
        {8L}, // p_2547->g_96
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x5104L), 0x5104L), // p_2547->g_99
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL), // p_2547->g_127
        (VECTOR(uint64_t, 8))(0x47C869DD9846AC96L, (VECTOR(uint64_t, 4))(0x47C869DD9846AC96L, (VECTOR(uint64_t, 2))(0x47C869DD9846AC96L, 1UL), 1UL), 1UL, 0x47C869DD9846AC96L, 1UL), // p_2547->g_130
        0x5279L, // p_2547->g_132
        (-1L), // p_2547->g_145
        {1L}, // p_2547->g_176
        &p_2547->g_176, // p_2547->g_175
        &p_2547->g_175, // p_2547->g_174
        1UL, // p_2547->g_189
        (void*)0, // p_2547->g_192
        &p_2547->g_192, // p_2547->g_191
        (VECTOR(int32_t, 2))((-3L), 0x5FB43AF6L), // p_2547->g_194
        (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-9L)), (-9L)), (-9L), 5L, (-9L), (VECTOR(int32_t, 2))(5L, (-9L)), (VECTOR(int32_t, 2))(5L, (-9L)), 5L, (-9L), 5L, (-9L)), // p_2547->g_195
        0x0AL, // p_2547->g_201
        4294967293UL, // p_2547->g_211
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x56220542L), 0x56220542L), 0x56220542L, 0UL, 0x56220542L, (VECTOR(uint32_t, 2))(0UL, 0x56220542L), (VECTOR(uint32_t, 2))(0UL, 0x56220542L), 0UL, 0x56220542L, 0UL, 0x56220542L), // p_2547->g_215
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), (VECTOR(uint16_t, 2))(65535UL, 1UL), 65535UL, 1UL, 65535UL, 1UL), // p_2547->g_216
        (VECTOR(int32_t, 16))(0x2089002FL, (VECTOR(int32_t, 4))(0x2089002FL, (VECTOR(int32_t, 2))(0x2089002FL, 0x3C50D106L), 0x3C50D106L), 0x3C50D106L, 0x2089002FL, 0x3C50D106L, (VECTOR(int32_t, 2))(0x2089002FL, 0x3C50D106L), (VECTOR(int32_t, 2))(0x2089002FL, 0x3C50D106L), 0x2089002FL, 0x3C50D106L, 0x2089002FL, 0x3C50D106L), // p_2547->g_220
        (VECTOR(int32_t, 2))(0x09AB5F58L, 0x7B11ED50L), // p_2547->g_223
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x79L), 0x79L), 0x79L, 1L, 0x79L), // p_2547->g_226
        (void*)0, // p_2547->g_234
        (-3L), // p_2547->g_239
        0x34AA0815L, // p_2547->g_353
        (VECTOR(uint8_t, 4))(0xD5L, (VECTOR(uint8_t, 2))(0xD5L, 0UL), 0UL), // p_2547->g_383
        {0xDA2C012FL,0xDA2C012FL,0xDA2C012FL,0xDA2C012FL}, // p_2547->g_391
        &p_2547->g_391[1], // p_2547->g_390
        (VECTOR(int16_t, 8))(0x33C3L, (VECTOR(int16_t, 4))(0x33C3L, (VECTOR(int16_t, 2))(0x33C3L, 0L), 0L), 0L, 0x33C3L, 0L), // p_2547->g_397
        {0x63A4807AL}, // p_2547->g_428
        (VECTOR(int8_t, 8))(0x2AL, (VECTOR(int8_t, 4))(0x2AL, (VECTOR(int8_t, 2))(0x2AL, 0L), 0L), 0L, 0x2AL, 0L), // p_2547->g_437
        (VECTOR(int8_t, 8))(0x6BL, (VECTOR(int8_t, 4))(0x6BL, (VECTOR(int8_t, 2))(0x6BL, (-10L)), (-10L)), (-10L), 0x6BL, (-10L)), // p_2547->g_442
        &p_2547->g_428[0], // p_2547->g_456
        (VECTOR(int8_t, 4))(0x3AL, (VECTOR(int8_t, 2))(0x3AL, 2L), 2L), // p_2547->g_504
        (VECTOR(uint32_t, 16))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 1UL), 1UL), 1UL, 4294967293UL, 1UL, (VECTOR(uint32_t, 2))(4294967293UL, 1UL), (VECTOR(uint32_t, 2))(4294967293UL, 1UL), 4294967293UL, 1UL, 4294967293UL, 1UL), // p_2547->g_531
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x67D80D37L), 0x67D80D37L), // p_2547->g_538
        (VECTOR(int8_t, 2))((-1L), (-8L)), // p_2547->g_564
        1UL, // p_2547->g_575
        (VECTOR(int32_t, 16))(0x14A5AEBAL, (VECTOR(int32_t, 4))(0x14A5AEBAL, (VECTOR(int32_t, 2))(0x14A5AEBAL, 1L), 1L), 1L, 0x14A5AEBAL, 1L, (VECTOR(int32_t, 2))(0x14A5AEBAL, 1L), (VECTOR(int32_t, 2))(0x14A5AEBAL, 1L), 0x14A5AEBAL, 1L, 0x14A5AEBAL, 1L), // p_2547->g_584
        (VECTOR(int32_t, 4))(0x396FFC64L, (VECTOR(int32_t, 2))(0x396FFC64L, 0x2EE5C0E0L), 0x2EE5C0E0L), // p_2547->g_586
        (VECTOR(uint32_t, 16))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 0UL), 0UL), 0UL, 7UL, 0UL, (VECTOR(uint32_t, 2))(7UL, 0UL), (VECTOR(uint32_t, 2))(7UL, 0UL), 7UL, 0UL, 7UL, 0UL), // p_2547->g_607
        0L, // p_2547->g_694
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL), // p_2547->g_733
        (VECTOR(uint64_t, 2))(0x0FA8EDAE9B6F2B39L, 0x73691B792A14C855L), // p_2547->g_743
        (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4E5A42A8AD1FD51AL), 0x4E5A42A8AD1FD51AL), 0x4E5A42A8AD1FD51AL, 18446744073709551615UL, 0x4E5A42A8AD1FD51AL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4E5A42A8AD1FD51AL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4E5A42A8AD1FD51AL), 18446744073709551615UL, 0x4E5A42A8AD1FD51AL, 18446744073709551615UL, 0x4E5A42A8AD1FD51AL), // p_2547->g_745
        8UL, // p_2547->g_752
        (VECTOR(int8_t, 2))((-8L), 0x1AL), // p_2547->g_765
        {6L,0x72E4C770L,0x149E0CDAL,0x72E4C770L,6L,6L,0x72E4C770L,0x149E0CDAL,0x72E4C770L,6L}, // p_2547->g_780
        &p_2547->g_192, // p_2547->g_786
        &p_2547->g_786, // p_2547->g_785
        (VECTOR(int16_t, 2))(0x14B4L, 1L), // p_2547->g_792
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-5L)), (-5L)), (-5L), 1L, (-5L)), // p_2547->g_793
        (VECTOR(uint64_t, 16))(0x0B47BD41F2D4E88AL, (VECTOR(uint64_t, 4))(0x0B47BD41F2D4E88AL, (VECTOR(uint64_t, 2))(0x0B47BD41F2D4E88AL, 0xAB33E85BE7DFE812L), 0xAB33E85BE7DFE812L), 0xAB33E85BE7DFE812L, 0x0B47BD41F2D4E88AL, 0xAB33E85BE7DFE812L, (VECTOR(uint64_t, 2))(0x0B47BD41F2D4E88AL, 0xAB33E85BE7DFE812L), (VECTOR(uint64_t, 2))(0x0B47BD41F2D4E88AL, 0xAB33E85BE7DFE812L), 0x0B47BD41F2D4E88AL, 0xAB33E85BE7DFE812L, 0x0B47BD41F2D4E88AL, 0xAB33E85BE7DFE812L), // p_2547->g_813
        (VECTOR(uint64_t, 4))(0x5611F4A78BED75B9L, (VECTOR(uint64_t, 2))(0x5611F4A78BED75B9L, 0UL), 0UL), // p_2547->g_815
        (void*)0, // p_2547->g_861
        (void*)0, // p_2547->g_863
        (void*)0, // p_2547->g_919
        &p_2547->g_919, // p_2547->g_918
        {&p_2547->g_456,&p_2547->g_456,&p_2547->g_456,&p_2547->g_456,&p_2547->g_456,&p_2547->g_456,&p_2547->g_456,&p_2547->g_456,&p_2547->g_456}, // p_2547->g_943
        &p_2547->g_456, // p_2547->g_944
        &p_2547->g_234, // p_2547->g_997
        0x7AE05D85L, // p_2547->g_1002
        (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0x27E52A19L), 0x27E52A19L), // p_2547->g_1013
        (VECTOR(int8_t, 2))(2L, 0x11L), // p_2547->g_1054
        (VECTOR(int32_t, 2))(0x003EE584L, (-4L)), // p_2547->g_1077
        (VECTOR(int32_t, 2))(0x55FF5FA8L, 0L), // p_2547->g_1080
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 4L), 4L), // p_2547->g_1082
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x42E22CDBL), 0x42E22CDBL), // p_2547->g_1083
        0xE9L, // p_2547->g_1089
        {{{&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1]}},{{&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1]}},{{&p_2547->g_85[0][1],&p_2547->g_85[0][1],&p_2547->g_85[0][1]}}}, // p_2547->g_1132
        (VECTOR(int8_t, 16))(0x47L, (VECTOR(int8_t, 4))(0x47L, (VECTOR(int8_t, 2))(0x47L, 0x4FL), 0x4FL), 0x4FL, 0x47L, 0x4FL, (VECTOR(int8_t, 2))(0x47L, 0x4FL), (VECTOR(int8_t, 2))(0x47L, 0x4FL), 0x47L, 0x4FL, 0x47L, 0x4FL), // p_2547->g_1148
        (VECTOR(uint16_t, 8))(0x756BL, (VECTOR(uint16_t, 4))(0x756BL, (VECTOR(uint16_t, 2))(0x756BL, 0xF4EBL), 0xF4EBL), 0xF4EBL, 0x756BL, 0xF4EBL), // p_2547->g_1157
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65527UL), 65527UL), 65527UL, 1UL, 65527UL), // p_2547->g_1162
        &p_2547->g_1002, // p_2547->g_1174
        (void*)0, // p_2547->g_1185
        &p_2547->g_752, // p_2547->g_1197
        &p_2547->g_1197, // p_2547->g_1196
        {(void*)0,&p_2547->g_1196,(void*)0,(void*)0,&p_2547->g_1196,(void*)0}, // p_2547->g_1195
        (VECTOR(uint64_t, 2))(18446744073709551610UL, 0x93CD833B9CA230DDL), // p_2547->g_1206
        (VECTOR(int16_t, 4))(0x059FL, (VECTOR(int16_t, 2))(0x059FL, 0L), 0L), // p_2547->g_1224
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_2547->g_1225
        (void*)0, // p_2547->g_1255
        (VECTOR(int32_t, 2))(0x1BE822D9L, (-3L)), // p_2547->g_1346
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 9UL), 9UL), 9UL, 255UL, 9UL), // p_2547->g_1364
        (VECTOR(uint8_t, 8))(0x8DL, (VECTOR(uint8_t, 4))(0x8DL, (VECTOR(uint8_t, 2))(0x8DL, 0x83L), 0x83L), 0x83L, 0x8DL, 0x83L), // p_2547->g_1387
        0x4B4E41BCL, // p_2547->g_1418
        &p_2547->g_1132[2][0][1], // p_2547->g_1422
        (void*)0, // p_2547->g_1541
        (VECTOR(uint16_t, 4))(0xA4F3L, (VECTOR(uint16_t, 2))(0xA4F3L, 0x6976L), 0x6976L), // p_2547->g_1551
        (VECTOR(uint16_t, 2))(65532UL, 1UL), // p_2547->g_1553
        &p_2547->g_456, // p_2547->g_1589
        (void*)0, // p_2547->g_1607
        &p_2547->g_96, // p_2547->g_1609
        &p_2547->g_1609, // p_2547->g_1608
        0x47L, // p_2547->g_1616
        &p_2547->g_80[2][4], // p_2547->g_1627
        {&p_2547->g_1132[2][0][1],&p_2547->g_1132[2][0][1],&p_2547->g_1132[2][0][1]}, // p_2547->g_1828
        {{&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2]},{&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2]},{&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2]},{&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2]},{&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2]},{&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2]},{&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2]},{&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2]},{&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2]},{&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2],&p_2547->g_1132[0][0][2],&p_2547->g_456,&p_2547->g_1132[0][0][2]}}, // p_2547->g_1829
        (VECTOR(int8_t, 2))(4L, 0x5CL), // p_2547->g_1881
        {{&p_2547->g_575,&p_2547->g_575,&p_2547->g_575,&p_2547->g_575,&p_2547->g_575,&p_2547->g_575,&p_2547->g_575,&p_2547->g_575},{&p_2547->g_575,&p_2547->g_575,&p_2547->g_575,&p_2547->g_575,&p_2547->g_575,&p_2547->g_575,&p_2547->g_575,&p_2547->g_575},{&p_2547->g_575,&p_2547->g_575,&p_2547->g_575,&p_2547->g_575,&p_2547->g_575,&p_2547->g_575,&p_2547->g_575,&p_2547->g_575}}, // p_2547->g_1907
        (VECTOR(int8_t, 2))(0L, 0x64L), // p_2547->g_1908
        {0x5B51B4E17504899DL,0x5B51B4E17504899DL,0x5B51B4E17504899DL,0x5B51B4E17504899DL,0x5B51B4E17504899DL,0x5B51B4E17504899DL,0x5B51B4E17504899DL,0x5B51B4E17504899DL,0x5B51B4E17504899DL}, // p_2547->g_1916
        0x7D46F371L, // p_2547->g_1933
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 6L), 6L), 6L, 1L, 6L, (VECTOR(int8_t, 2))(1L, 6L), (VECTOR(int8_t, 2))(1L, 6L), 1L, 6L, 1L, 6L), // p_2547->g_1996
        (VECTOR(int16_t, 16))(0x5623L, (VECTOR(int16_t, 4))(0x5623L, (VECTOR(int16_t, 2))(0x5623L, (-1L)), (-1L)), (-1L), 0x5623L, (-1L), (VECTOR(int16_t, 2))(0x5623L, (-1L)), (VECTOR(int16_t, 2))(0x5623L, (-1L)), 0x5623L, (-1L), 0x5623L, (-1L)), // p_2547->g_2005
        {{0x32D35336L,0x554F02DBL},{0x32D35336L,0x554F02DBL},{0x32D35336L,0x554F02DBL},{0x32D35336L,0x554F02DBL},{0x32D35336L,0x554F02DBL},{0x32D35336L,0x554F02DBL},{0x32D35336L,0x554F02DBL}}, // p_2547->g_2023
        &p_2547->g_2023[4][1], // p_2547->g_2022
        &p_2547->g_2022, // p_2547->g_2021
        (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), (-3L)), (-3L)), // p_2547->g_2035
        (VECTOR(uint8_t, 8))(0x5AL, (VECTOR(uint8_t, 4))(0x5AL, (VECTOR(uint8_t, 2))(0x5AL, 249UL), 249UL), 249UL, 0x5AL, 249UL), // p_2547->g_2040
        (VECTOR(uint8_t, 8))(0x6BL, (VECTOR(uint8_t, 4))(0x6BL, (VECTOR(uint8_t, 2))(0x6BL, 0xE0L), 0xE0L), 0xE0L, 0x6BL, 0xE0L), // p_2547->g_2044
        (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 0x80L), 0x80L), // p_2547->g_2045
        (VECTOR(int32_t, 4))(0x5CD12C4DL, (VECTOR(int32_t, 2))(0x5CD12C4DL, (-1L)), (-1L)), // p_2547->g_2067
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x4656EEAAE4F3D36BL), 0x4656EEAAE4F3D36BL), 0x4656EEAAE4F3D36BL, 0L, 0x4656EEAAE4F3D36BL, (VECTOR(int64_t, 2))(0L, 0x4656EEAAE4F3D36BL), (VECTOR(int64_t, 2))(0L, 0x4656EEAAE4F3D36BL), 0L, 0x4656EEAAE4F3D36BL, 0L, 0x4656EEAAE4F3D36BL), // p_2547->g_2073
        (VECTOR(int32_t, 2))(0x61902373L, 0L), // p_2547->g_2079
        (VECTOR(uint32_t, 8))(0x588576CCL, (VECTOR(uint32_t, 4))(0x588576CCL, (VECTOR(uint32_t, 2))(0x588576CCL, 0x8B29ECEFL), 0x8B29ECEFL), 0x8B29ECEFL, 0x588576CCL, 0x8B29ECEFL), // p_2547->g_2080
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x0744L), 0x0744L), 0x0744L, 1UL, 0x0744L, (VECTOR(uint16_t, 2))(1UL, 0x0744L), (VECTOR(uint16_t, 2))(1UL, 0x0744L), 1UL, 0x0744L, 1UL, 0x0744L), // p_2547->g_2091
        (VECTOR(uint16_t, 16))(0x13B9L, (VECTOR(uint16_t, 4))(0x13B9L, (VECTOR(uint16_t, 2))(0x13B9L, 5UL), 5UL), 5UL, 0x13B9L, 5UL, (VECTOR(uint16_t, 2))(0x13B9L, 5UL), (VECTOR(uint16_t, 2))(0x13B9L, 5UL), 0x13B9L, 5UL, 0x13B9L, 5UL), // p_2547->g_2092
        (VECTOR(uint16_t, 2))(1UL, 0xF761L), // p_2547->g_2093
        (VECTOR(uint8_t, 4))(0x70L, (VECTOR(uint8_t, 2))(0x70L, 0xF2L), 0xF2L), // p_2547->g_2114
        (VECTOR(int16_t, 16))(0x3BCCL, (VECTOR(int16_t, 4))(0x3BCCL, (VECTOR(int16_t, 2))(0x3BCCL, 1L), 1L), 1L, 0x3BCCL, 1L, (VECTOR(int16_t, 2))(0x3BCCL, 1L), (VECTOR(int16_t, 2))(0x3BCCL, 1L), 0x3BCCL, 1L, 0x3BCCL, 1L), // p_2547->g_2116
        {&p_2547->g_96}, // p_2547->g_2127
        0L, // p_2547->g_2176
        0x56L, // p_2547->g_2207
        (VECTOR(int64_t, 2))(0x611B936DC8B9D256L, (-8L)), // p_2547->g_2232
        (void*)0, // p_2547->g_2239
        (VECTOR(int8_t, 4))(0x74L, (VECTOR(int8_t, 2))(0x74L, 0L), 0L), // p_2547->g_2249
        {{{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0}},{{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0}},{{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0}},{{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0}},{{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0}},{{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0}},{{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0}},{{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0},{&p_2547->g_780[7],(void*)0,&p_2547->g_780[7],(void*)0}}}, // p_2547->g_2256
        &p_2547->g_780[2], // p_2547->g_2257
        (VECTOR(int16_t, 2))(0x230BL, 0L), // p_2547->g_2271
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x46536C5E1C1EC446L), 0x46536C5E1C1EC446L), 0x46536C5E1C1EC446L, 0L, 0x46536C5E1C1EC446L), // p_2547->g_2316
        (VECTOR(int64_t, 16))(0x0E0092C9D047230BL, (VECTOR(int64_t, 4))(0x0E0092C9D047230BL, (VECTOR(int64_t, 2))(0x0E0092C9D047230BL, 0L), 0L), 0L, 0x0E0092C9D047230BL, 0L, (VECTOR(int64_t, 2))(0x0E0092C9D047230BL, 0L), (VECTOR(int64_t, 2))(0x0E0092C9D047230BL, 0L), 0x0E0092C9D047230BL, 0L, 0x0E0092C9D047230BL, 0L), // p_2547->g_2317
        (VECTOR(int64_t, 16))(0x1E6D8C258317C50FL, (VECTOR(int64_t, 4))(0x1E6D8C258317C50FL, (VECTOR(int64_t, 2))(0x1E6D8C258317C50FL, 1L), 1L), 1L, 0x1E6D8C258317C50FL, 1L, (VECTOR(int64_t, 2))(0x1E6D8C258317C50FL, 1L), (VECTOR(int64_t, 2))(0x1E6D8C258317C50FL, 1L), 0x1E6D8C258317C50FL, 1L, 0x1E6D8C258317C50FL, 1L), // p_2547->g_2320
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x1EE1653F93206345L), 0x1EE1653F93206345L), // p_2547->g_2321
        (VECTOR(int64_t, 2))((-4L), 0x478047E7A8390AE3L), // p_2547->g_2322
        65535UL, // p_2547->g_2326
        0x54C8689A6789B0CBL, // p_2547->g_2333
        (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x7FA538F8L), 0x7FA538F8L), // p_2547->g_2365
        (void*)0, // p_2547->g_2368
        &p_2547->g_2368, // p_2547->g_2367
        (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x66DE68D2L), 0x66DE68D2L), 0x66DE68D2L, (-5L), 0x66DE68D2L), // p_2547->g_2376
        18446744073709551615UL, // p_2547->g_2394
        (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 1L), 1L), // p_2547->g_2399
        (VECTOR(int64_t, 4))(0x4E0E340A98E4912BL, (VECTOR(int64_t, 2))(0x4E0E340A98E4912BL, (-1L)), (-1L)), // p_2547->g_2400
        {&p_2547->g_1132[0][0][1],&p_2547->g_1132[0][0][1],&p_2547->g_1132[0][0][1],&p_2547->g_1132[0][0][1],&p_2547->g_1132[0][0][1],&p_2547->g_1132[0][0][1],&p_2547->g_1132[0][0][1]}, // p_2547->g_2450
        &p_2547->g_1132[2][0][1], // p_2547->g_2451
        1L, // p_2547->g_2459
        (void*)0, // p_2547->g_2477
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_2547->g_2476
        &p_2547->g_2476[1], // p_2547->g_2478
        (VECTOR(uint8_t, 2))(255UL, 0xF8L), // p_2547->g_2483
        &p_2547->g_2256[4][6][0], // p_2547->g_2512
        {{255UL,1UL,255UL,2UL,1UL,2UL,255UL,1UL},{255UL,1UL,255UL,2UL,1UL,2UL,255UL,1UL},{255UL,1UL,255UL,2UL,1UL,2UL,255UL,1UL},{255UL,1UL,255UL,2UL,1UL,2UL,255UL,1UL},{255UL,1UL,255UL,2UL,1UL,2UL,255UL,1UL},{255UL,1UL,255UL,2UL,1UL,2UL,255UL,1UL},{255UL,1UL,255UL,2UL,1UL,2UL,255UL,1UL},{255UL,1UL,255UL,2UL,1UL,2UL,255UL,1UL},{255UL,1UL,255UL,2UL,1UL,2UL,255UL,1UL},{255UL,1UL,255UL,2UL,1UL,2UL,255UL,1UL}}, // p_2547->g_2518
        {{0xCB611CBC5E9C3714L},{0xCB611CBC5E9C3714L},{0xCB611CBC5E9C3714L},{0xCB611CBC5E9C3714L},{0xCB611CBC5E9C3714L},{0xCB611CBC5E9C3714L},{0xCB611CBC5E9C3714L},{0xCB611CBC5E9C3714L}}, // p_2547->g_2531
        0, // p_2547->v_collective
        sequence_input[get_global_id(0)], // p_2547->global_0_offset
        sequence_input[get_global_id(1)], // p_2547->global_1_offset
        sequence_input[get_global_id(2)], // p_2547->global_2_offset
        sequence_input[get_local_id(0)], // p_2547->local_0_offset
        sequence_input[get_local_id(1)], // p_2547->local_1_offset
        sequence_input[get_local_id(2)], // p_2547->local_2_offset
        sequence_input[get_group_id(0)], // p_2547->group_0_offset
        sequence_input[get_group_id(1)], // p_2547->group_1_offset
        sequence_input[get_group_id(2)], // p_2547->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 88)), permutations[0][get_linear_local_id()])), // p_2547->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_2548 = c_2549;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2547);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2547->g_12.x, "p_2547->g_12.x", print_hash_value);
    transparent_crc(p_2547->g_12.y, "p_2547->g_12.y", print_hash_value);
    transparent_crc(p_2547->g_22, "p_2547->g_22", print_hash_value);
    transparent_crc(p_2547->g_33.x, "p_2547->g_33.x", print_hash_value);
    transparent_crc(p_2547->g_33.y, "p_2547->g_33.y", print_hash_value);
    transparent_crc(p_2547->g_44.s0, "p_2547->g_44.s0", print_hash_value);
    transparent_crc(p_2547->g_44.s1, "p_2547->g_44.s1", print_hash_value);
    transparent_crc(p_2547->g_44.s2, "p_2547->g_44.s2", print_hash_value);
    transparent_crc(p_2547->g_44.s3, "p_2547->g_44.s3", print_hash_value);
    transparent_crc(p_2547->g_44.s4, "p_2547->g_44.s4", print_hash_value);
    transparent_crc(p_2547->g_44.s5, "p_2547->g_44.s5", print_hash_value);
    transparent_crc(p_2547->g_44.s6, "p_2547->g_44.s6", print_hash_value);
    transparent_crc(p_2547->g_44.s7, "p_2547->g_44.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_2547->g_80[i][j], "p_2547->g_80[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_2547->g_85[i][j], "p_2547->g_85[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2547->g_99.x, "p_2547->g_99.x", print_hash_value);
    transparent_crc(p_2547->g_99.y, "p_2547->g_99.y", print_hash_value);
    transparent_crc(p_2547->g_99.z, "p_2547->g_99.z", print_hash_value);
    transparent_crc(p_2547->g_99.w, "p_2547->g_99.w", print_hash_value);
    transparent_crc(p_2547->g_127.s0, "p_2547->g_127.s0", print_hash_value);
    transparent_crc(p_2547->g_127.s1, "p_2547->g_127.s1", print_hash_value);
    transparent_crc(p_2547->g_127.s2, "p_2547->g_127.s2", print_hash_value);
    transparent_crc(p_2547->g_127.s3, "p_2547->g_127.s3", print_hash_value);
    transparent_crc(p_2547->g_127.s4, "p_2547->g_127.s4", print_hash_value);
    transparent_crc(p_2547->g_127.s5, "p_2547->g_127.s5", print_hash_value);
    transparent_crc(p_2547->g_127.s6, "p_2547->g_127.s6", print_hash_value);
    transparent_crc(p_2547->g_127.s7, "p_2547->g_127.s7", print_hash_value);
    transparent_crc(p_2547->g_130.s0, "p_2547->g_130.s0", print_hash_value);
    transparent_crc(p_2547->g_130.s1, "p_2547->g_130.s1", print_hash_value);
    transparent_crc(p_2547->g_130.s2, "p_2547->g_130.s2", print_hash_value);
    transparent_crc(p_2547->g_130.s3, "p_2547->g_130.s3", print_hash_value);
    transparent_crc(p_2547->g_130.s4, "p_2547->g_130.s4", print_hash_value);
    transparent_crc(p_2547->g_130.s5, "p_2547->g_130.s5", print_hash_value);
    transparent_crc(p_2547->g_130.s6, "p_2547->g_130.s6", print_hash_value);
    transparent_crc(p_2547->g_130.s7, "p_2547->g_130.s7", print_hash_value);
    transparent_crc(p_2547->g_132, "p_2547->g_132", print_hash_value);
    transparent_crc(p_2547->g_145, "p_2547->g_145", print_hash_value);
    transparent_crc(p_2547->g_176.f0, "p_2547->g_176.f0", print_hash_value);
    transparent_crc(p_2547->g_189, "p_2547->g_189", print_hash_value);
    transparent_crc(p_2547->g_194.x, "p_2547->g_194.x", print_hash_value);
    transparent_crc(p_2547->g_194.y, "p_2547->g_194.y", print_hash_value);
    transparent_crc(p_2547->g_195.s0, "p_2547->g_195.s0", print_hash_value);
    transparent_crc(p_2547->g_195.s1, "p_2547->g_195.s1", print_hash_value);
    transparent_crc(p_2547->g_195.s2, "p_2547->g_195.s2", print_hash_value);
    transparent_crc(p_2547->g_195.s3, "p_2547->g_195.s3", print_hash_value);
    transparent_crc(p_2547->g_195.s4, "p_2547->g_195.s4", print_hash_value);
    transparent_crc(p_2547->g_195.s5, "p_2547->g_195.s5", print_hash_value);
    transparent_crc(p_2547->g_195.s6, "p_2547->g_195.s6", print_hash_value);
    transparent_crc(p_2547->g_195.s7, "p_2547->g_195.s7", print_hash_value);
    transparent_crc(p_2547->g_195.s8, "p_2547->g_195.s8", print_hash_value);
    transparent_crc(p_2547->g_195.s9, "p_2547->g_195.s9", print_hash_value);
    transparent_crc(p_2547->g_195.sa, "p_2547->g_195.sa", print_hash_value);
    transparent_crc(p_2547->g_195.sb, "p_2547->g_195.sb", print_hash_value);
    transparent_crc(p_2547->g_195.sc, "p_2547->g_195.sc", print_hash_value);
    transparent_crc(p_2547->g_195.sd, "p_2547->g_195.sd", print_hash_value);
    transparent_crc(p_2547->g_195.se, "p_2547->g_195.se", print_hash_value);
    transparent_crc(p_2547->g_195.sf, "p_2547->g_195.sf", print_hash_value);
    transparent_crc(p_2547->g_201, "p_2547->g_201", print_hash_value);
    transparent_crc(p_2547->g_211, "p_2547->g_211", print_hash_value);
    transparent_crc(p_2547->g_215.s0, "p_2547->g_215.s0", print_hash_value);
    transparent_crc(p_2547->g_215.s1, "p_2547->g_215.s1", print_hash_value);
    transparent_crc(p_2547->g_215.s2, "p_2547->g_215.s2", print_hash_value);
    transparent_crc(p_2547->g_215.s3, "p_2547->g_215.s3", print_hash_value);
    transparent_crc(p_2547->g_215.s4, "p_2547->g_215.s4", print_hash_value);
    transparent_crc(p_2547->g_215.s5, "p_2547->g_215.s5", print_hash_value);
    transparent_crc(p_2547->g_215.s6, "p_2547->g_215.s6", print_hash_value);
    transparent_crc(p_2547->g_215.s7, "p_2547->g_215.s7", print_hash_value);
    transparent_crc(p_2547->g_215.s8, "p_2547->g_215.s8", print_hash_value);
    transparent_crc(p_2547->g_215.s9, "p_2547->g_215.s9", print_hash_value);
    transparent_crc(p_2547->g_215.sa, "p_2547->g_215.sa", print_hash_value);
    transparent_crc(p_2547->g_215.sb, "p_2547->g_215.sb", print_hash_value);
    transparent_crc(p_2547->g_215.sc, "p_2547->g_215.sc", print_hash_value);
    transparent_crc(p_2547->g_215.sd, "p_2547->g_215.sd", print_hash_value);
    transparent_crc(p_2547->g_215.se, "p_2547->g_215.se", print_hash_value);
    transparent_crc(p_2547->g_215.sf, "p_2547->g_215.sf", print_hash_value);
    transparent_crc(p_2547->g_216.s0, "p_2547->g_216.s0", print_hash_value);
    transparent_crc(p_2547->g_216.s1, "p_2547->g_216.s1", print_hash_value);
    transparent_crc(p_2547->g_216.s2, "p_2547->g_216.s2", print_hash_value);
    transparent_crc(p_2547->g_216.s3, "p_2547->g_216.s3", print_hash_value);
    transparent_crc(p_2547->g_216.s4, "p_2547->g_216.s4", print_hash_value);
    transparent_crc(p_2547->g_216.s5, "p_2547->g_216.s5", print_hash_value);
    transparent_crc(p_2547->g_216.s6, "p_2547->g_216.s6", print_hash_value);
    transparent_crc(p_2547->g_216.s7, "p_2547->g_216.s7", print_hash_value);
    transparent_crc(p_2547->g_216.s8, "p_2547->g_216.s8", print_hash_value);
    transparent_crc(p_2547->g_216.s9, "p_2547->g_216.s9", print_hash_value);
    transparent_crc(p_2547->g_216.sa, "p_2547->g_216.sa", print_hash_value);
    transparent_crc(p_2547->g_216.sb, "p_2547->g_216.sb", print_hash_value);
    transparent_crc(p_2547->g_216.sc, "p_2547->g_216.sc", print_hash_value);
    transparent_crc(p_2547->g_216.sd, "p_2547->g_216.sd", print_hash_value);
    transparent_crc(p_2547->g_216.se, "p_2547->g_216.se", print_hash_value);
    transparent_crc(p_2547->g_216.sf, "p_2547->g_216.sf", print_hash_value);
    transparent_crc(p_2547->g_220.s0, "p_2547->g_220.s0", print_hash_value);
    transparent_crc(p_2547->g_220.s1, "p_2547->g_220.s1", print_hash_value);
    transparent_crc(p_2547->g_220.s2, "p_2547->g_220.s2", print_hash_value);
    transparent_crc(p_2547->g_220.s3, "p_2547->g_220.s3", print_hash_value);
    transparent_crc(p_2547->g_220.s4, "p_2547->g_220.s4", print_hash_value);
    transparent_crc(p_2547->g_220.s5, "p_2547->g_220.s5", print_hash_value);
    transparent_crc(p_2547->g_220.s6, "p_2547->g_220.s6", print_hash_value);
    transparent_crc(p_2547->g_220.s7, "p_2547->g_220.s7", print_hash_value);
    transparent_crc(p_2547->g_220.s8, "p_2547->g_220.s8", print_hash_value);
    transparent_crc(p_2547->g_220.s9, "p_2547->g_220.s9", print_hash_value);
    transparent_crc(p_2547->g_220.sa, "p_2547->g_220.sa", print_hash_value);
    transparent_crc(p_2547->g_220.sb, "p_2547->g_220.sb", print_hash_value);
    transparent_crc(p_2547->g_220.sc, "p_2547->g_220.sc", print_hash_value);
    transparent_crc(p_2547->g_220.sd, "p_2547->g_220.sd", print_hash_value);
    transparent_crc(p_2547->g_220.se, "p_2547->g_220.se", print_hash_value);
    transparent_crc(p_2547->g_220.sf, "p_2547->g_220.sf", print_hash_value);
    transparent_crc(p_2547->g_223.x, "p_2547->g_223.x", print_hash_value);
    transparent_crc(p_2547->g_223.y, "p_2547->g_223.y", print_hash_value);
    transparent_crc(p_2547->g_226.s0, "p_2547->g_226.s0", print_hash_value);
    transparent_crc(p_2547->g_226.s1, "p_2547->g_226.s1", print_hash_value);
    transparent_crc(p_2547->g_226.s2, "p_2547->g_226.s2", print_hash_value);
    transparent_crc(p_2547->g_226.s3, "p_2547->g_226.s3", print_hash_value);
    transparent_crc(p_2547->g_226.s4, "p_2547->g_226.s4", print_hash_value);
    transparent_crc(p_2547->g_226.s5, "p_2547->g_226.s5", print_hash_value);
    transparent_crc(p_2547->g_226.s6, "p_2547->g_226.s6", print_hash_value);
    transparent_crc(p_2547->g_226.s7, "p_2547->g_226.s7", print_hash_value);
    transparent_crc(p_2547->g_239, "p_2547->g_239", print_hash_value);
    transparent_crc(p_2547->g_353, "p_2547->g_353", print_hash_value);
    transparent_crc(p_2547->g_383.x, "p_2547->g_383.x", print_hash_value);
    transparent_crc(p_2547->g_383.y, "p_2547->g_383.y", print_hash_value);
    transparent_crc(p_2547->g_383.z, "p_2547->g_383.z", print_hash_value);
    transparent_crc(p_2547->g_383.w, "p_2547->g_383.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_2547->g_391[i], "p_2547->g_391[i]", print_hash_value);

    }
    transparent_crc(p_2547->g_397.s0, "p_2547->g_397.s0", print_hash_value);
    transparent_crc(p_2547->g_397.s1, "p_2547->g_397.s1", print_hash_value);
    transparent_crc(p_2547->g_397.s2, "p_2547->g_397.s2", print_hash_value);
    transparent_crc(p_2547->g_397.s3, "p_2547->g_397.s3", print_hash_value);
    transparent_crc(p_2547->g_397.s4, "p_2547->g_397.s4", print_hash_value);
    transparent_crc(p_2547->g_397.s5, "p_2547->g_397.s5", print_hash_value);
    transparent_crc(p_2547->g_397.s6, "p_2547->g_397.s6", print_hash_value);
    transparent_crc(p_2547->g_397.s7, "p_2547->g_397.s7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_2547->g_428[i], "p_2547->g_428[i]", print_hash_value);

    }
    transparent_crc(p_2547->g_437.s0, "p_2547->g_437.s0", print_hash_value);
    transparent_crc(p_2547->g_437.s1, "p_2547->g_437.s1", print_hash_value);
    transparent_crc(p_2547->g_437.s2, "p_2547->g_437.s2", print_hash_value);
    transparent_crc(p_2547->g_437.s3, "p_2547->g_437.s3", print_hash_value);
    transparent_crc(p_2547->g_437.s4, "p_2547->g_437.s4", print_hash_value);
    transparent_crc(p_2547->g_437.s5, "p_2547->g_437.s5", print_hash_value);
    transparent_crc(p_2547->g_437.s6, "p_2547->g_437.s6", print_hash_value);
    transparent_crc(p_2547->g_437.s7, "p_2547->g_437.s7", print_hash_value);
    transparent_crc(p_2547->g_442.s0, "p_2547->g_442.s0", print_hash_value);
    transparent_crc(p_2547->g_442.s1, "p_2547->g_442.s1", print_hash_value);
    transparent_crc(p_2547->g_442.s2, "p_2547->g_442.s2", print_hash_value);
    transparent_crc(p_2547->g_442.s3, "p_2547->g_442.s3", print_hash_value);
    transparent_crc(p_2547->g_442.s4, "p_2547->g_442.s4", print_hash_value);
    transparent_crc(p_2547->g_442.s5, "p_2547->g_442.s5", print_hash_value);
    transparent_crc(p_2547->g_442.s6, "p_2547->g_442.s6", print_hash_value);
    transparent_crc(p_2547->g_442.s7, "p_2547->g_442.s7", print_hash_value);
    transparent_crc(p_2547->g_504.x, "p_2547->g_504.x", print_hash_value);
    transparent_crc(p_2547->g_504.y, "p_2547->g_504.y", print_hash_value);
    transparent_crc(p_2547->g_504.z, "p_2547->g_504.z", print_hash_value);
    transparent_crc(p_2547->g_504.w, "p_2547->g_504.w", print_hash_value);
    transparent_crc(p_2547->g_531.s0, "p_2547->g_531.s0", print_hash_value);
    transparent_crc(p_2547->g_531.s1, "p_2547->g_531.s1", print_hash_value);
    transparent_crc(p_2547->g_531.s2, "p_2547->g_531.s2", print_hash_value);
    transparent_crc(p_2547->g_531.s3, "p_2547->g_531.s3", print_hash_value);
    transparent_crc(p_2547->g_531.s4, "p_2547->g_531.s4", print_hash_value);
    transparent_crc(p_2547->g_531.s5, "p_2547->g_531.s5", print_hash_value);
    transparent_crc(p_2547->g_531.s6, "p_2547->g_531.s6", print_hash_value);
    transparent_crc(p_2547->g_531.s7, "p_2547->g_531.s7", print_hash_value);
    transparent_crc(p_2547->g_531.s8, "p_2547->g_531.s8", print_hash_value);
    transparent_crc(p_2547->g_531.s9, "p_2547->g_531.s9", print_hash_value);
    transparent_crc(p_2547->g_531.sa, "p_2547->g_531.sa", print_hash_value);
    transparent_crc(p_2547->g_531.sb, "p_2547->g_531.sb", print_hash_value);
    transparent_crc(p_2547->g_531.sc, "p_2547->g_531.sc", print_hash_value);
    transparent_crc(p_2547->g_531.sd, "p_2547->g_531.sd", print_hash_value);
    transparent_crc(p_2547->g_531.se, "p_2547->g_531.se", print_hash_value);
    transparent_crc(p_2547->g_531.sf, "p_2547->g_531.sf", print_hash_value);
    transparent_crc(p_2547->g_538.x, "p_2547->g_538.x", print_hash_value);
    transparent_crc(p_2547->g_538.y, "p_2547->g_538.y", print_hash_value);
    transparent_crc(p_2547->g_538.z, "p_2547->g_538.z", print_hash_value);
    transparent_crc(p_2547->g_538.w, "p_2547->g_538.w", print_hash_value);
    transparent_crc(p_2547->g_564.x, "p_2547->g_564.x", print_hash_value);
    transparent_crc(p_2547->g_564.y, "p_2547->g_564.y", print_hash_value);
    transparent_crc(p_2547->g_575, "p_2547->g_575", print_hash_value);
    transparent_crc(p_2547->g_584.s0, "p_2547->g_584.s0", print_hash_value);
    transparent_crc(p_2547->g_584.s1, "p_2547->g_584.s1", print_hash_value);
    transparent_crc(p_2547->g_584.s2, "p_2547->g_584.s2", print_hash_value);
    transparent_crc(p_2547->g_584.s3, "p_2547->g_584.s3", print_hash_value);
    transparent_crc(p_2547->g_584.s4, "p_2547->g_584.s4", print_hash_value);
    transparent_crc(p_2547->g_584.s5, "p_2547->g_584.s5", print_hash_value);
    transparent_crc(p_2547->g_584.s6, "p_2547->g_584.s6", print_hash_value);
    transparent_crc(p_2547->g_584.s7, "p_2547->g_584.s7", print_hash_value);
    transparent_crc(p_2547->g_584.s8, "p_2547->g_584.s8", print_hash_value);
    transparent_crc(p_2547->g_584.s9, "p_2547->g_584.s9", print_hash_value);
    transparent_crc(p_2547->g_584.sa, "p_2547->g_584.sa", print_hash_value);
    transparent_crc(p_2547->g_584.sb, "p_2547->g_584.sb", print_hash_value);
    transparent_crc(p_2547->g_584.sc, "p_2547->g_584.sc", print_hash_value);
    transparent_crc(p_2547->g_584.sd, "p_2547->g_584.sd", print_hash_value);
    transparent_crc(p_2547->g_584.se, "p_2547->g_584.se", print_hash_value);
    transparent_crc(p_2547->g_584.sf, "p_2547->g_584.sf", print_hash_value);
    transparent_crc(p_2547->g_586.x, "p_2547->g_586.x", print_hash_value);
    transparent_crc(p_2547->g_586.y, "p_2547->g_586.y", print_hash_value);
    transparent_crc(p_2547->g_586.z, "p_2547->g_586.z", print_hash_value);
    transparent_crc(p_2547->g_586.w, "p_2547->g_586.w", print_hash_value);
    transparent_crc(p_2547->g_607.s0, "p_2547->g_607.s0", print_hash_value);
    transparent_crc(p_2547->g_607.s1, "p_2547->g_607.s1", print_hash_value);
    transparent_crc(p_2547->g_607.s2, "p_2547->g_607.s2", print_hash_value);
    transparent_crc(p_2547->g_607.s3, "p_2547->g_607.s3", print_hash_value);
    transparent_crc(p_2547->g_607.s4, "p_2547->g_607.s4", print_hash_value);
    transparent_crc(p_2547->g_607.s5, "p_2547->g_607.s5", print_hash_value);
    transparent_crc(p_2547->g_607.s6, "p_2547->g_607.s6", print_hash_value);
    transparent_crc(p_2547->g_607.s7, "p_2547->g_607.s7", print_hash_value);
    transparent_crc(p_2547->g_607.s8, "p_2547->g_607.s8", print_hash_value);
    transparent_crc(p_2547->g_607.s9, "p_2547->g_607.s9", print_hash_value);
    transparent_crc(p_2547->g_607.sa, "p_2547->g_607.sa", print_hash_value);
    transparent_crc(p_2547->g_607.sb, "p_2547->g_607.sb", print_hash_value);
    transparent_crc(p_2547->g_607.sc, "p_2547->g_607.sc", print_hash_value);
    transparent_crc(p_2547->g_607.sd, "p_2547->g_607.sd", print_hash_value);
    transparent_crc(p_2547->g_607.se, "p_2547->g_607.se", print_hash_value);
    transparent_crc(p_2547->g_607.sf, "p_2547->g_607.sf", print_hash_value);
    transparent_crc(p_2547->g_694, "p_2547->g_694", print_hash_value);
    transparent_crc(p_2547->g_733.s0, "p_2547->g_733.s0", print_hash_value);
    transparent_crc(p_2547->g_733.s1, "p_2547->g_733.s1", print_hash_value);
    transparent_crc(p_2547->g_733.s2, "p_2547->g_733.s2", print_hash_value);
    transparent_crc(p_2547->g_733.s3, "p_2547->g_733.s3", print_hash_value);
    transparent_crc(p_2547->g_733.s4, "p_2547->g_733.s4", print_hash_value);
    transparent_crc(p_2547->g_733.s5, "p_2547->g_733.s5", print_hash_value);
    transparent_crc(p_2547->g_733.s6, "p_2547->g_733.s6", print_hash_value);
    transparent_crc(p_2547->g_733.s7, "p_2547->g_733.s7", print_hash_value);
    transparent_crc(p_2547->g_743.x, "p_2547->g_743.x", print_hash_value);
    transparent_crc(p_2547->g_743.y, "p_2547->g_743.y", print_hash_value);
    transparent_crc(p_2547->g_745.s0, "p_2547->g_745.s0", print_hash_value);
    transparent_crc(p_2547->g_745.s1, "p_2547->g_745.s1", print_hash_value);
    transparent_crc(p_2547->g_745.s2, "p_2547->g_745.s2", print_hash_value);
    transparent_crc(p_2547->g_745.s3, "p_2547->g_745.s3", print_hash_value);
    transparent_crc(p_2547->g_745.s4, "p_2547->g_745.s4", print_hash_value);
    transparent_crc(p_2547->g_745.s5, "p_2547->g_745.s5", print_hash_value);
    transparent_crc(p_2547->g_745.s6, "p_2547->g_745.s6", print_hash_value);
    transparent_crc(p_2547->g_745.s7, "p_2547->g_745.s7", print_hash_value);
    transparent_crc(p_2547->g_745.s8, "p_2547->g_745.s8", print_hash_value);
    transparent_crc(p_2547->g_745.s9, "p_2547->g_745.s9", print_hash_value);
    transparent_crc(p_2547->g_745.sa, "p_2547->g_745.sa", print_hash_value);
    transparent_crc(p_2547->g_745.sb, "p_2547->g_745.sb", print_hash_value);
    transparent_crc(p_2547->g_745.sc, "p_2547->g_745.sc", print_hash_value);
    transparent_crc(p_2547->g_745.sd, "p_2547->g_745.sd", print_hash_value);
    transparent_crc(p_2547->g_745.se, "p_2547->g_745.se", print_hash_value);
    transparent_crc(p_2547->g_745.sf, "p_2547->g_745.sf", print_hash_value);
    transparent_crc(p_2547->g_752, "p_2547->g_752", print_hash_value);
    transparent_crc(p_2547->g_765.x, "p_2547->g_765.x", print_hash_value);
    transparent_crc(p_2547->g_765.y, "p_2547->g_765.y", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2547->g_780[i], "p_2547->g_780[i]", print_hash_value);

    }
    transparent_crc(p_2547->g_792.x, "p_2547->g_792.x", print_hash_value);
    transparent_crc(p_2547->g_792.y, "p_2547->g_792.y", print_hash_value);
    transparent_crc(p_2547->g_793.s0, "p_2547->g_793.s0", print_hash_value);
    transparent_crc(p_2547->g_793.s1, "p_2547->g_793.s1", print_hash_value);
    transparent_crc(p_2547->g_793.s2, "p_2547->g_793.s2", print_hash_value);
    transparent_crc(p_2547->g_793.s3, "p_2547->g_793.s3", print_hash_value);
    transparent_crc(p_2547->g_793.s4, "p_2547->g_793.s4", print_hash_value);
    transparent_crc(p_2547->g_793.s5, "p_2547->g_793.s5", print_hash_value);
    transparent_crc(p_2547->g_793.s6, "p_2547->g_793.s6", print_hash_value);
    transparent_crc(p_2547->g_793.s7, "p_2547->g_793.s7", print_hash_value);
    transparent_crc(p_2547->g_813.s0, "p_2547->g_813.s0", print_hash_value);
    transparent_crc(p_2547->g_813.s1, "p_2547->g_813.s1", print_hash_value);
    transparent_crc(p_2547->g_813.s2, "p_2547->g_813.s2", print_hash_value);
    transparent_crc(p_2547->g_813.s3, "p_2547->g_813.s3", print_hash_value);
    transparent_crc(p_2547->g_813.s4, "p_2547->g_813.s4", print_hash_value);
    transparent_crc(p_2547->g_813.s5, "p_2547->g_813.s5", print_hash_value);
    transparent_crc(p_2547->g_813.s6, "p_2547->g_813.s6", print_hash_value);
    transparent_crc(p_2547->g_813.s7, "p_2547->g_813.s7", print_hash_value);
    transparent_crc(p_2547->g_813.s8, "p_2547->g_813.s8", print_hash_value);
    transparent_crc(p_2547->g_813.s9, "p_2547->g_813.s9", print_hash_value);
    transparent_crc(p_2547->g_813.sa, "p_2547->g_813.sa", print_hash_value);
    transparent_crc(p_2547->g_813.sb, "p_2547->g_813.sb", print_hash_value);
    transparent_crc(p_2547->g_813.sc, "p_2547->g_813.sc", print_hash_value);
    transparent_crc(p_2547->g_813.sd, "p_2547->g_813.sd", print_hash_value);
    transparent_crc(p_2547->g_813.se, "p_2547->g_813.se", print_hash_value);
    transparent_crc(p_2547->g_813.sf, "p_2547->g_813.sf", print_hash_value);
    transparent_crc(p_2547->g_815.x, "p_2547->g_815.x", print_hash_value);
    transparent_crc(p_2547->g_815.y, "p_2547->g_815.y", print_hash_value);
    transparent_crc(p_2547->g_815.z, "p_2547->g_815.z", print_hash_value);
    transparent_crc(p_2547->g_815.w, "p_2547->g_815.w", print_hash_value);
    transparent_crc(p_2547->g_1002, "p_2547->g_1002", print_hash_value);
    transparent_crc(p_2547->g_1013.x, "p_2547->g_1013.x", print_hash_value);
    transparent_crc(p_2547->g_1013.y, "p_2547->g_1013.y", print_hash_value);
    transparent_crc(p_2547->g_1013.z, "p_2547->g_1013.z", print_hash_value);
    transparent_crc(p_2547->g_1013.w, "p_2547->g_1013.w", print_hash_value);
    transparent_crc(p_2547->g_1054.x, "p_2547->g_1054.x", print_hash_value);
    transparent_crc(p_2547->g_1054.y, "p_2547->g_1054.y", print_hash_value);
    transparent_crc(p_2547->g_1077.x, "p_2547->g_1077.x", print_hash_value);
    transparent_crc(p_2547->g_1077.y, "p_2547->g_1077.y", print_hash_value);
    transparent_crc(p_2547->g_1080.x, "p_2547->g_1080.x", print_hash_value);
    transparent_crc(p_2547->g_1080.y, "p_2547->g_1080.y", print_hash_value);
    transparent_crc(p_2547->g_1082.x, "p_2547->g_1082.x", print_hash_value);
    transparent_crc(p_2547->g_1082.y, "p_2547->g_1082.y", print_hash_value);
    transparent_crc(p_2547->g_1082.z, "p_2547->g_1082.z", print_hash_value);
    transparent_crc(p_2547->g_1082.w, "p_2547->g_1082.w", print_hash_value);
    transparent_crc(p_2547->g_1083.x, "p_2547->g_1083.x", print_hash_value);
    transparent_crc(p_2547->g_1083.y, "p_2547->g_1083.y", print_hash_value);
    transparent_crc(p_2547->g_1083.z, "p_2547->g_1083.z", print_hash_value);
    transparent_crc(p_2547->g_1083.w, "p_2547->g_1083.w", print_hash_value);
    transparent_crc(p_2547->g_1089, "p_2547->g_1089", print_hash_value);
    transparent_crc(p_2547->g_1148.s0, "p_2547->g_1148.s0", print_hash_value);
    transparent_crc(p_2547->g_1148.s1, "p_2547->g_1148.s1", print_hash_value);
    transparent_crc(p_2547->g_1148.s2, "p_2547->g_1148.s2", print_hash_value);
    transparent_crc(p_2547->g_1148.s3, "p_2547->g_1148.s3", print_hash_value);
    transparent_crc(p_2547->g_1148.s4, "p_2547->g_1148.s4", print_hash_value);
    transparent_crc(p_2547->g_1148.s5, "p_2547->g_1148.s5", print_hash_value);
    transparent_crc(p_2547->g_1148.s6, "p_2547->g_1148.s6", print_hash_value);
    transparent_crc(p_2547->g_1148.s7, "p_2547->g_1148.s7", print_hash_value);
    transparent_crc(p_2547->g_1148.s8, "p_2547->g_1148.s8", print_hash_value);
    transparent_crc(p_2547->g_1148.s9, "p_2547->g_1148.s9", print_hash_value);
    transparent_crc(p_2547->g_1148.sa, "p_2547->g_1148.sa", print_hash_value);
    transparent_crc(p_2547->g_1148.sb, "p_2547->g_1148.sb", print_hash_value);
    transparent_crc(p_2547->g_1148.sc, "p_2547->g_1148.sc", print_hash_value);
    transparent_crc(p_2547->g_1148.sd, "p_2547->g_1148.sd", print_hash_value);
    transparent_crc(p_2547->g_1148.se, "p_2547->g_1148.se", print_hash_value);
    transparent_crc(p_2547->g_1148.sf, "p_2547->g_1148.sf", print_hash_value);
    transparent_crc(p_2547->g_1157.s0, "p_2547->g_1157.s0", print_hash_value);
    transparent_crc(p_2547->g_1157.s1, "p_2547->g_1157.s1", print_hash_value);
    transparent_crc(p_2547->g_1157.s2, "p_2547->g_1157.s2", print_hash_value);
    transparent_crc(p_2547->g_1157.s3, "p_2547->g_1157.s3", print_hash_value);
    transparent_crc(p_2547->g_1157.s4, "p_2547->g_1157.s4", print_hash_value);
    transparent_crc(p_2547->g_1157.s5, "p_2547->g_1157.s5", print_hash_value);
    transparent_crc(p_2547->g_1157.s6, "p_2547->g_1157.s6", print_hash_value);
    transparent_crc(p_2547->g_1157.s7, "p_2547->g_1157.s7", print_hash_value);
    transparent_crc(p_2547->g_1162.s0, "p_2547->g_1162.s0", print_hash_value);
    transparent_crc(p_2547->g_1162.s1, "p_2547->g_1162.s1", print_hash_value);
    transparent_crc(p_2547->g_1162.s2, "p_2547->g_1162.s2", print_hash_value);
    transparent_crc(p_2547->g_1162.s3, "p_2547->g_1162.s3", print_hash_value);
    transparent_crc(p_2547->g_1162.s4, "p_2547->g_1162.s4", print_hash_value);
    transparent_crc(p_2547->g_1162.s5, "p_2547->g_1162.s5", print_hash_value);
    transparent_crc(p_2547->g_1162.s6, "p_2547->g_1162.s6", print_hash_value);
    transparent_crc(p_2547->g_1162.s7, "p_2547->g_1162.s7", print_hash_value);
    transparent_crc(p_2547->g_1206.x, "p_2547->g_1206.x", print_hash_value);
    transparent_crc(p_2547->g_1206.y, "p_2547->g_1206.y", print_hash_value);
    transparent_crc(p_2547->g_1224.x, "p_2547->g_1224.x", print_hash_value);
    transparent_crc(p_2547->g_1224.y, "p_2547->g_1224.y", print_hash_value);
    transparent_crc(p_2547->g_1224.z, "p_2547->g_1224.z", print_hash_value);
    transparent_crc(p_2547->g_1224.w, "p_2547->g_1224.w", print_hash_value);
    transparent_crc(p_2547->g_1346.x, "p_2547->g_1346.x", print_hash_value);
    transparent_crc(p_2547->g_1346.y, "p_2547->g_1346.y", print_hash_value);
    transparent_crc(p_2547->g_1364.s0, "p_2547->g_1364.s0", print_hash_value);
    transparent_crc(p_2547->g_1364.s1, "p_2547->g_1364.s1", print_hash_value);
    transparent_crc(p_2547->g_1364.s2, "p_2547->g_1364.s2", print_hash_value);
    transparent_crc(p_2547->g_1364.s3, "p_2547->g_1364.s3", print_hash_value);
    transparent_crc(p_2547->g_1364.s4, "p_2547->g_1364.s4", print_hash_value);
    transparent_crc(p_2547->g_1364.s5, "p_2547->g_1364.s5", print_hash_value);
    transparent_crc(p_2547->g_1364.s6, "p_2547->g_1364.s6", print_hash_value);
    transparent_crc(p_2547->g_1364.s7, "p_2547->g_1364.s7", print_hash_value);
    transparent_crc(p_2547->g_1387.s0, "p_2547->g_1387.s0", print_hash_value);
    transparent_crc(p_2547->g_1387.s1, "p_2547->g_1387.s1", print_hash_value);
    transparent_crc(p_2547->g_1387.s2, "p_2547->g_1387.s2", print_hash_value);
    transparent_crc(p_2547->g_1387.s3, "p_2547->g_1387.s3", print_hash_value);
    transparent_crc(p_2547->g_1387.s4, "p_2547->g_1387.s4", print_hash_value);
    transparent_crc(p_2547->g_1387.s5, "p_2547->g_1387.s5", print_hash_value);
    transparent_crc(p_2547->g_1387.s6, "p_2547->g_1387.s6", print_hash_value);
    transparent_crc(p_2547->g_1387.s7, "p_2547->g_1387.s7", print_hash_value);
    transparent_crc(p_2547->g_1418, "p_2547->g_1418", print_hash_value);
    transparent_crc(p_2547->g_1551.x, "p_2547->g_1551.x", print_hash_value);
    transparent_crc(p_2547->g_1551.y, "p_2547->g_1551.y", print_hash_value);
    transparent_crc(p_2547->g_1551.z, "p_2547->g_1551.z", print_hash_value);
    transparent_crc(p_2547->g_1551.w, "p_2547->g_1551.w", print_hash_value);
    transparent_crc(p_2547->g_1553.x, "p_2547->g_1553.x", print_hash_value);
    transparent_crc(p_2547->g_1553.y, "p_2547->g_1553.y", print_hash_value);
    transparent_crc(p_2547->g_1616, "p_2547->g_1616", print_hash_value);
    transparent_crc(p_2547->g_1881.x, "p_2547->g_1881.x", print_hash_value);
    transparent_crc(p_2547->g_1881.y, "p_2547->g_1881.y", print_hash_value);
    transparent_crc(p_2547->g_1908.x, "p_2547->g_1908.x", print_hash_value);
    transparent_crc(p_2547->g_1908.y, "p_2547->g_1908.y", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2547->g_1916[i], "p_2547->g_1916[i]", print_hash_value);

    }
    transparent_crc(p_2547->g_1933, "p_2547->g_1933", print_hash_value);
    transparent_crc(p_2547->g_1996.s0, "p_2547->g_1996.s0", print_hash_value);
    transparent_crc(p_2547->g_1996.s1, "p_2547->g_1996.s1", print_hash_value);
    transparent_crc(p_2547->g_1996.s2, "p_2547->g_1996.s2", print_hash_value);
    transparent_crc(p_2547->g_1996.s3, "p_2547->g_1996.s3", print_hash_value);
    transparent_crc(p_2547->g_1996.s4, "p_2547->g_1996.s4", print_hash_value);
    transparent_crc(p_2547->g_1996.s5, "p_2547->g_1996.s5", print_hash_value);
    transparent_crc(p_2547->g_1996.s6, "p_2547->g_1996.s6", print_hash_value);
    transparent_crc(p_2547->g_1996.s7, "p_2547->g_1996.s7", print_hash_value);
    transparent_crc(p_2547->g_1996.s8, "p_2547->g_1996.s8", print_hash_value);
    transparent_crc(p_2547->g_1996.s9, "p_2547->g_1996.s9", print_hash_value);
    transparent_crc(p_2547->g_1996.sa, "p_2547->g_1996.sa", print_hash_value);
    transparent_crc(p_2547->g_1996.sb, "p_2547->g_1996.sb", print_hash_value);
    transparent_crc(p_2547->g_1996.sc, "p_2547->g_1996.sc", print_hash_value);
    transparent_crc(p_2547->g_1996.sd, "p_2547->g_1996.sd", print_hash_value);
    transparent_crc(p_2547->g_1996.se, "p_2547->g_1996.se", print_hash_value);
    transparent_crc(p_2547->g_1996.sf, "p_2547->g_1996.sf", print_hash_value);
    transparent_crc(p_2547->g_2005.s0, "p_2547->g_2005.s0", print_hash_value);
    transparent_crc(p_2547->g_2005.s1, "p_2547->g_2005.s1", print_hash_value);
    transparent_crc(p_2547->g_2005.s2, "p_2547->g_2005.s2", print_hash_value);
    transparent_crc(p_2547->g_2005.s3, "p_2547->g_2005.s3", print_hash_value);
    transparent_crc(p_2547->g_2005.s4, "p_2547->g_2005.s4", print_hash_value);
    transparent_crc(p_2547->g_2005.s5, "p_2547->g_2005.s5", print_hash_value);
    transparent_crc(p_2547->g_2005.s6, "p_2547->g_2005.s6", print_hash_value);
    transparent_crc(p_2547->g_2005.s7, "p_2547->g_2005.s7", print_hash_value);
    transparent_crc(p_2547->g_2005.s8, "p_2547->g_2005.s8", print_hash_value);
    transparent_crc(p_2547->g_2005.s9, "p_2547->g_2005.s9", print_hash_value);
    transparent_crc(p_2547->g_2005.sa, "p_2547->g_2005.sa", print_hash_value);
    transparent_crc(p_2547->g_2005.sb, "p_2547->g_2005.sb", print_hash_value);
    transparent_crc(p_2547->g_2005.sc, "p_2547->g_2005.sc", print_hash_value);
    transparent_crc(p_2547->g_2005.sd, "p_2547->g_2005.sd", print_hash_value);
    transparent_crc(p_2547->g_2005.se, "p_2547->g_2005.se", print_hash_value);
    transparent_crc(p_2547->g_2005.sf, "p_2547->g_2005.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_2547->g_2023[i][j], "p_2547->g_2023[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2547->g_2035.x, "p_2547->g_2035.x", print_hash_value);
    transparent_crc(p_2547->g_2035.y, "p_2547->g_2035.y", print_hash_value);
    transparent_crc(p_2547->g_2035.z, "p_2547->g_2035.z", print_hash_value);
    transparent_crc(p_2547->g_2035.w, "p_2547->g_2035.w", print_hash_value);
    transparent_crc(p_2547->g_2040.s0, "p_2547->g_2040.s0", print_hash_value);
    transparent_crc(p_2547->g_2040.s1, "p_2547->g_2040.s1", print_hash_value);
    transparent_crc(p_2547->g_2040.s2, "p_2547->g_2040.s2", print_hash_value);
    transparent_crc(p_2547->g_2040.s3, "p_2547->g_2040.s3", print_hash_value);
    transparent_crc(p_2547->g_2040.s4, "p_2547->g_2040.s4", print_hash_value);
    transparent_crc(p_2547->g_2040.s5, "p_2547->g_2040.s5", print_hash_value);
    transparent_crc(p_2547->g_2040.s6, "p_2547->g_2040.s6", print_hash_value);
    transparent_crc(p_2547->g_2040.s7, "p_2547->g_2040.s7", print_hash_value);
    transparent_crc(p_2547->g_2044.s0, "p_2547->g_2044.s0", print_hash_value);
    transparent_crc(p_2547->g_2044.s1, "p_2547->g_2044.s1", print_hash_value);
    transparent_crc(p_2547->g_2044.s2, "p_2547->g_2044.s2", print_hash_value);
    transparent_crc(p_2547->g_2044.s3, "p_2547->g_2044.s3", print_hash_value);
    transparent_crc(p_2547->g_2044.s4, "p_2547->g_2044.s4", print_hash_value);
    transparent_crc(p_2547->g_2044.s5, "p_2547->g_2044.s5", print_hash_value);
    transparent_crc(p_2547->g_2044.s6, "p_2547->g_2044.s6", print_hash_value);
    transparent_crc(p_2547->g_2044.s7, "p_2547->g_2044.s7", print_hash_value);
    transparent_crc(p_2547->g_2045.x, "p_2547->g_2045.x", print_hash_value);
    transparent_crc(p_2547->g_2045.y, "p_2547->g_2045.y", print_hash_value);
    transparent_crc(p_2547->g_2045.z, "p_2547->g_2045.z", print_hash_value);
    transparent_crc(p_2547->g_2045.w, "p_2547->g_2045.w", print_hash_value);
    transparent_crc(p_2547->g_2067.x, "p_2547->g_2067.x", print_hash_value);
    transparent_crc(p_2547->g_2067.y, "p_2547->g_2067.y", print_hash_value);
    transparent_crc(p_2547->g_2067.z, "p_2547->g_2067.z", print_hash_value);
    transparent_crc(p_2547->g_2067.w, "p_2547->g_2067.w", print_hash_value);
    transparent_crc(p_2547->g_2073.s0, "p_2547->g_2073.s0", print_hash_value);
    transparent_crc(p_2547->g_2073.s1, "p_2547->g_2073.s1", print_hash_value);
    transparent_crc(p_2547->g_2073.s2, "p_2547->g_2073.s2", print_hash_value);
    transparent_crc(p_2547->g_2073.s3, "p_2547->g_2073.s3", print_hash_value);
    transparent_crc(p_2547->g_2073.s4, "p_2547->g_2073.s4", print_hash_value);
    transparent_crc(p_2547->g_2073.s5, "p_2547->g_2073.s5", print_hash_value);
    transparent_crc(p_2547->g_2073.s6, "p_2547->g_2073.s6", print_hash_value);
    transparent_crc(p_2547->g_2073.s7, "p_2547->g_2073.s7", print_hash_value);
    transparent_crc(p_2547->g_2073.s8, "p_2547->g_2073.s8", print_hash_value);
    transparent_crc(p_2547->g_2073.s9, "p_2547->g_2073.s9", print_hash_value);
    transparent_crc(p_2547->g_2073.sa, "p_2547->g_2073.sa", print_hash_value);
    transparent_crc(p_2547->g_2073.sb, "p_2547->g_2073.sb", print_hash_value);
    transparent_crc(p_2547->g_2073.sc, "p_2547->g_2073.sc", print_hash_value);
    transparent_crc(p_2547->g_2073.sd, "p_2547->g_2073.sd", print_hash_value);
    transparent_crc(p_2547->g_2073.se, "p_2547->g_2073.se", print_hash_value);
    transparent_crc(p_2547->g_2073.sf, "p_2547->g_2073.sf", print_hash_value);
    transparent_crc(p_2547->g_2079.x, "p_2547->g_2079.x", print_hash_value);
    transparent_crc(p_2547->g_2079.y, "p_2547->g_2079.y", print_hash_value);
    transparent_crc(p_2547->g_2080.s0, "p_2547->g_2080.s0", print_hash_value);
    transparent_crc(p_2547->g_2080.s1, "p_2547->g_2080.s1", print_hash_value);
    transparent_crc(p_2547->g_2080.s2, "p_2547->g_2080.s2", print_hash_value);
    transparent_crc(p_2547->g_2080.s3, "p_2547->g_2080.s3", print_hash_value);
    transparent_crc(p_2547->g_2080.s4, "p_2547->g_2080.s4", print_hash_value);
    transparent_crc(p_2547->g_2080.s5, "p_2547->g_2080.s5", print_hash_value);
    transparent_crc(p_2547->g_2080.s6, "p_2547->g_2080.s6", print_hash_value);
    transparent_crc(p_2547->g_2080.s7, "p_2547->g_2080.s7", print_hash_value);
    transparent_crc(p_2547->g_2091.s0, "p_2547->g_2091.s0", print_hash_value);
    transparent_crc(p_2547->g_2091.s1, "p_2547->g_2091.s1", print_hash_value);
    transparent_crc(p_2547->g_2091.s2, "p_2547->g_2091.s2", print_hash_value);
    transparent_crc(p_2547->g_2091.s3, "p_2547->g_2091.s3", print_hash_value);
    transparent_crc(p_2547->g_2091.s4, "p_2547->g_2091.s4", print_hash_value);
    transparent_crc(p_2547->g_2091.s5, "p_2547->g_2091.s5", print_hash_value);
    transparent_crc(p_2547->g_2091.s6, "p_2547->g_2091.s6", print_hash_value);
    transparent_crc(p_2547->g_2091.s7, "p_2547->g_2091.s7", print_hash_value);
    transparent_crc(p_2547->g_2091.s8, "p_2547->g_2091.s8", print_hash_value);
    transparent_crc(p_2547->g_2091.s9, "p_2547->g_2091.s9", print_hash_value);
    transparent_crc(p_2547->g_2091.sa, "p_2547->g_2091.sa", print_hash_value);
    transparent_crc(p_2547->g_2091.sb, "p_2547->g_2091.sb", print_hash_value);
    transparent_crc(p_2547->g_2091.sc, "p_2547->g_2091.sc", print_hash_value);
    transparent_crc(p_2547->g_2091.sd, "p_2547->g_2091.sd", print_hash_value);
    transparent_crc(p_2547->g_2091.se, "p_2547->g_2091.se", print_hash_value);
    transparent_crc(p_2547->g_2091.sf, "p_2547->g_2091.sf", print_hash_value);
    transparent_crc(p_2547->g_2092.s0, "p_2547->g_2092.s0", print_hash_value);
    transparent_crc(p_2547->g_2092.s1, "p_2547->g_2092.s1", print_hash_value);
    transparent_crc(p_2547->g_2092.s2, "p_2547->g_2092.s2", print_hash_value);
    transparent_crc(p_2547->g_2092.s3, "p_2547->g_2092.s3", print_hash_value);
    transparent_crc(p_2547->g_2092.s4, "p_2547->g_2092.s4", print_hash_value);
    transparent_crc(p_2547->g_2092.s5, "p_2547->g_2092.s5", print_hash_value);
    transparent_crc(p_2547->g_2092.s6, "p_2547->g_2092.s6", print_hash_value);
    transparent_crc(p_2547->g_2092.s7, "p_2547->g_2092.s7", print_hash_value);
    transparent_crc(p_2547->g_2092.s8, "p_2547->g_2092.s8", print_hash_value);
    transparent_crc(p_2547->g_2092.s9, "p_2547->g_2092.s9", print_hash_value);
    transparent_crc(p_2547->g_2092.sa, "p_2547->g_2092.sa", print_hash_value);
    transparent_crc(p_2547->g_2092.sb, "p_2547->g_2092.sb", print_hash_value);
    transparent_crc(p_2547->g_2092.sc, "p_2547->g_2092.sc", print_hash_value);
    transparent_crc(p_2547->g_2092.sd, "p_2547->g_2092.sd", print_hash_value);
    transparent_crc(p_2547->g_2092.se, "p_2547->g_2092.se", print_hash_value);
    transparent_crc(p_2547->g_2092.sf, "p_2547->g_2092.sf", print_hash_value);
    transparent_crc(p_2547->g_2093.x, "p_2547->g_2093.x", print_hash_value);
    transparent_crc(p_2547->g_2093.y, "p_2547->g_2093.y", print_hash_value);
    transparent_crc(p_2547->g_2114.x, "p_2547->g_2114.x", print_hash_value);
    transparent_crc(p_2547->g_2114.y, "p_2547->g_2114.y", print_hash_value);
    transparent_crc(p_2547->g_2114.z, "p_2547->g_2114.z", print_hash_value);
    transparent_crc(p_2547->g_2114.w, "p_2547->g_2114.w", print_hash_value);
    transparent_crc(p_2547->g_2116.s0, "p_2547->g_2116.s0", print_hash_value);
    transparent_crc(p_2547->g_2116.s1, "p_2547->g_2116.s1", print_hash_value);
    transparent_crc(p_2547->g_2116.s2, "p_2547->g_2116.s2", print_hash_value);
    transparent_crc(p_2547->g_2116.s3, "p_2547->g_2116.s3", print_hash_value);
    transparent_crc(p_2547->g_2116.s4, "p_2547->g_2116.s4", print_hash_value);
    transparent_crc(p_2547->g_2116.s5, "p_2547->g_2116.s5", print_hash_value);
    transparent_crc(p_2547->g_2116.s6, "p_2547->g_2116.s6", print_hash_value);
    transparent_crc(p_2547->g_2116.s7, "p_2547->g_2116.s7", print_hash_value);
    transparent_crc(p_2547->g_2116.s8, "p_2547->g_2116.s8", print_hash_value);
    transparent_crc(p_2547->g_2116.s9, "p_2547->g_2116.s9", print_hash_value);
    transparent_crc(p_2547->g_2116.sa, "p_2547->g_2116.sa", print_hash_value);
    transparent_crc(p_2547->g_2116.sb, "p_2547->g_2116.sb", print_hash_value);
    transparent_crc(p_2547->g_2116.sc, "p_2547->g_2116.sc", print_hash_value);
    transparent_crc(p_2547->g_2116.sd, "p_2547->g_2116.sd", print_hash_value);
    transparent_crc(p_2547->g_2116.se, "p_2547->g_2116.se", print_hash_value);
    transparent_crc(p_2547->g_2116.sf, "p_2547->g_2116.sf", print_hash_value);
    transparent_crc(p_2547->g_2176, "p_2547->g_2176", print_hash_value);
    transparent_crc(p_2547->g_2207, "p_2547->g_2207", print_hash_value);
    transparent_crc(p_2547->g_2232.x, "p_2547->g_2232.x", print_hash_value);
    transparent_crc(p_2547->g_2232.y, "p_2547->g_2232.y", print_hash_value);
    transparent_crc(p_2547->g_2249.x, "p_2547->g_2249.x", print_hash_value);
    transparent_crc(p_2547->g_2249.y, "p_2547->g_2249.y", print_hash_value);
    transparent_crc(p_2547->g_2249.z, "p_2547->g_2249.z", print_hash_value);
    transparent_crc(p_2547->g_2249.w, "p_2547->g_2249.w", print_hash_value);
    transparent_crc(p_2547->g_2271.x, "p_2547->g_2271.x", print_hash_value);
    transparent_crc(p_2547->g_2271.y, "p_2547->g_2271.y", print_hash_value);
    transparent_crc(p_2547->g_2316.s0, "p_2547->g_2316.s0", print_hash_value);
    transparent_crc(p_2547->g_2316.s1, "p_2547->g_2316.s1", print_hash_value);
    transparent_crc(p_2547->g_2316.s2, "p_2547->g_2316.s2", print_hash_value);
    transparent_crc(p_2547->g_2316.s3, "p_2547->g_2316.s3", print_hash_value);
    transparent_crc(p_2547->g_2316.s4, "p_2547->g_2316.s4", print_hash_value);
    transparent_crc(p_2547->g_2316.s5, "p_2547->g_2316.s5", print_hash_value);
    transparent_crc(p_2547->g_2316.s6, "p_2547->g_2316.s6", print_hash_value);
    transparent_crc(p_2547->g_2316.s7, "p_2547->g_2316.s7", print_hash_value);
    transparent_crc(p_2547->g_2317.s0, "p_2547->g_2317.s0", print_hash_value);
    transparent_crc(p_2547->g_2317.s1, "p_2547->g_2317.s1", print_hash_value);
    transparent_crc(p_2547->g_2317.s2, "p_2547->g_2317.s2", print_hash_value);
    transparent_crc(p_2547->g_2317.s3, "p_2547->g_2317.s3", print_hash_value);
    transparent_crc(p_2547->g_2317.s4, "p_2547->g_2317.s4", print_hash_value);
    transparent_crc(p_2547->g_2317.s5, "p_2547->g_2317.s5", print_hash_value);
    transparent_crc(p_2547->g_2317.s6, "p_2547->g_2317.s6", print_hash_value);
    transparent_crc(p_2547->g_2317.s7, "p_2547->g_2317.s7", print_hash_value);
    transparent_crc(p_2547->g_2317.s8, "p_2547->g_2317.s8", print_hash_value);
    transparent_crc(p_2547->g_2317.s9, "p_2547->g_2317.s9", print_hash_value);
    transparent_crc(p_2547->g_2317.sa, "p_2547->g_2317.sa", print_hash_value);
    transparent_crc(p_2547->g_2317.sb, "p_2547->g_2317.sb", print_hash_value);
    transparent_crc(p_2547->g_2317.sc, "p_2547->g_2317.sc", print_hash_value);
    transparent_crc(p_2547->g_2317.sd, "p_2547->g_2317.sd", print_hash_value);
    transparent_crc(p_2547->g_2317.se, "p_2547->g_2317.se", print_hash_value);
    transparent_crc(p_2547->g_2317.sf, "p_2547->g_2317.sf", print_hash_value);
    transparent_crc(p_2547->g_2320.s0, "p_2547->g_2320.s0", print_hash_value);
    transparent_crc(p_2547->g_2320.s1, "p_2547->g_2320.s1", print_hash_value);
    transparent_crc(p_2547->g_2320.s2, "p_2547->g_2320.s2", print_hash_value);
    transparent_crc(p_2547->g_2320.s3, "p_2547->g_2320.s3", print_hash_value);
    transparent_crc(p_2547->g_2320.s4, "p_2547->g_2320.s4", print_hash_value);
    transparent_crc(p_2547->g_2320.s5, "p_2547->g_2320.s5", print_hash_value);
    transparent_crc(p_2547->g_2320.s6, "p_2547->g_2320.s6", print_hash_value);
    transparent_crc(p_2547->g_2320.s7, "p_2547->g_2320.s7", print_hash_value);
    transparent_crc(p_2547->g_2320.s8, "p_2547->g_2320.s8", print_hash_value);
    transparent_crc(p_2547->g_2320.s9, "p_2547->g_2320.s9", print_hash_value);
    transparent_crc(p_2547->g_2320.sa, "p_2547->g_2320.sa", print_hash_value);
    transparent_crc(p_2547->g_2320.sb, "p_2547->g_2320.sb", print_hash_value);
    transparent_crc(p_2547->g_2320.sc, "p_2547->g_2320.sc", print_hash_value);
    transparent_crc(p_2547->g_2320.sd, "p_2547->g_2320.sd", print_hash_value);
    transparent_crc(p_2547->g_2320.se, "p_2547->g_2320.se", print_hash_value);
    transparent_crc(p_2547->g_2320.sf, "p_2547->g_2320.sf", print_hash_value);
    transparent_crc(p_2547->g_2321.x, "p_2547->g_2321.x", print_hash_value);
    transparent_crc(p_2547->g_2321.y, "p_2547->g_2321.y", print_hash_value);
    transparent_crc(p_2547->g_2321.z, "p_2547->g_2321.z", print_hash_value);
    transparent_crc(p_2547->g_2321.w, "p_2547->g_2321.w", print_hash_value);
    transparent_crc(p_2547->g_2322.x, "p_2547->g_2322.x", print_hash_value);
    transparent_crc(p_2547->g_2322.y, "p_2547->g_2322.y", print_hash_value);
    transparent_crc(p_2547->g_2326, "p_2547->g_2326", print_hash_value);
    transparent_crc(p_2547->g_2333, "p_2547->g_2333", print_hash_value);
    transparent_crc(p_2547->g_2365.x, "p_2547->g_2365.x", print_hash_value);
    transparent_crc(p_2547->g_2365.y, "p_2547->g_2365.y", print_hash_value);
    transparent_crc(p_2547->g_2365.z, "p_2547->g_2365.z", print_hash_value);
    transparent_crc(p_2547->g_2365.w, "p_2547->g_2365.w", print_hash_value);
    transparent_crc(p_2547->g_2376.s0, "p_2547->g_2376.s0", print_hash_value);
    transparent_crc(p_2547->g_2376.s1, "p_2547->g_2376.s1", print_hash_value);
    transparent_crc(p_2547->g_2376.s2, "p_2547->g_2376.s2", print_hash_value);
    transparent_crc(p_2547->g_2376.s3, "p_2547->g_2376.s3", print_hash_value);
    transparent_crc(p_2547->g_2376.s4, "p_2547->g_2376.s4", print_hash_value);
    transparent_crc(p_2547->g_2376.s5, "p_2547->g_2376.s5", print_hash_value);
    transparent_crc(p_2547->g_2376.s6, "p_2547->g_2376.s6", print_hash_value);
    transparent_crc(p_2547->g_2376.s7, "p_2547->g_2376.s7", print_hash_value);
    transparent_crc(p_2547->g_2394, "p_2547->g_2394", print_hash_value);
    transparent_crc(p_2547->g_2399.x, "p_2547->g_2399.x", print_hash_value);
    transparent_crc(p_2547->g_2399.y, "p_2547->g_2399.y", print_hash_value);
    transparent_crc(p_2547->g_2399.z, "p_2547->g_2399.z", print_hash_value);
    transparent_crc(p_2547->g_2399.w, "p_2547->g_2399.w", print_hash_value);
    transparent_crc(p_2547->g_2400.x, "p_2547->g_2400.x", print_hash_value);
    transparent_crc(p_2547->g_2400.y, "p_2547->g_2400.y", print_hash_value);
    transparent_crc(p_2547->g_2400.z, "p_2547->g_2400.z", print_hash_value);
    transparent_crc(p_2547->g_2400.w, "p_2547->g_2400.w", print_hash_value);
    transparent_crc(p_2547->g_2459, "p_2547->g_2459", print_hash_value);
    transparent_crc(p_2547->g_2483.x, "p_2547->g_2483.x", print_hash_value);
    transparent_crc(p_2547->g_2483.y, "p_2547->g_2483.y", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_2547->g_2518[i][j], "p_2547->g_2518[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_2547->g_2531[i][j], "p_2547->g_2531[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2547->v_collective, "p_2547->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 42; i++)
            transparent_crc(p_2547->g_special_values[i + 42 * get_linear_group_id()], "p_2547->g_special_values[i + 42 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 42; i++)
            transparent_crc(p_2547->l_special_values[i], "p_2547->l_special_values[i]", print_hash_value);
    transparent_crc(p_2547->l_comm_values[get_linear_local_id()], "p_2547->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_2547->g_comm_values[get_linear_group_id() * 88 + get_linear_local_id()], "p_2547->g_comm_values[get_linear_group_id() * 88 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
