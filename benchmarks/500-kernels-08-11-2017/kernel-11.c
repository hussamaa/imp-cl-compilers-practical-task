// --atomics 18 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 7,52,21 -l 1,13,7
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

__constant uint32_t permutations[10][91] = {
{32,0,37,1,19,36,48,47,22,8,45,62,87,67,41,52,69,13,55,56,59,4,53,29,2,74,42,72,46,68,61,21,85,84,75,64,83,27,81,44,24,39,50,15,34,49,58,76,35,33,82,12,71,86,18,65,38,90,9,80,10,79,60,89,28,30,20,57,43,63,73,25,5,16,78,77,3,11,51,7,26,66,23,54,40,17,70,88,6,31,14}, // permutation 0
{54,28,64,32,65,11,13,34,70,61,16,78,10,56,86,46,48,4,79,84,90,74,52,5,18,76,27,0,44,40,37,39,9,50,49,73,87,41,15,57,82,25,7,85,53,88,83,43,47,51,45,3,36,77,23,22,12,19,80,24,81,59,89,29,55,1,31,63,17,33,14,69,67,6,30,68,38,66,58,8,42,60,35,72,26,2,62,75,21,20,71}, // permutation 1
{33,26,57,13,72,54,62,22,37,43,59,86,28,67,21,84,75,45,36,24,83,16,70,60,87,55,48,41,61,20,64,40,46,1,5,82,10,85,3,81,63,42,27,90,51,69,4,71,74,12,32,52,8,25,79,34,7,35,73,89,53,47,23,11,6,17,78,30,15,2,65,76,18,68,0,56,9,80,49,50,39,77,58,29,66,19,38,88,14,44,31}, // permutation 2
{22,80,67,44,11,35,54,6,63,40,60,25,81,57,58,89,53,61,23,38,52,0,33,2,79,48,8,13,19,84,18,85,88,26,3,7,10,41,75,43,37,14,39,86,49,76,77,20,78,45,1,9,82,90,65,12,27,83,56,51,15,34,47,4,17,64,55,59,30,50,28,16,46,69,36,87,73,70,32,29,68,62,5,42,24,66,74,31,72,21,71}, // permutation 3
{2,19,59,22,23,20,8,67,85,11,48,57,71,88,17,84,76,75,36,58,64,13,55,21,12,56,32,63,31,26,43,89,79,15,69,39,30,53,87,51,52,3,5,18,38,47,16,41,6,10,86,80,90,25,14,40,0,44,60,72,83,27,35,29,34,7,78,66,70,65,33,9,61,28,50,1,73,46,49,42,24,54,68,4,81,74,82,77,45,37,62}, // permutation 4
{20,61,33,84,68,60,51,87,5,28,85,26,4,32,47,10,75,11,31,29,8,73,22,48,43,88,52,70,13,34,53,0,40,46,16,37,58,80,44,78,21,56,30,64,3,72,17,66,27,23,54,25,49,59,55,24,36,81,18,89,6,57,12,39,1,9,63,14,77,15,82,7,35,62,38,41,69,71,65,79,45,42,90,67,19,86,76,2,50,74,83}, // permutation 5
{90,18,50,32,17,24,77,64,58,69,78,33,30,22,83,7,51,36,13,48,55,29,41,62,59,4,80,16,66,88,14,86,84,79,81,27,34,89,15,71,75,49,60,47,5,67,35,53,31,43,38,2,10,6,76,73,57,44,8,28,20,39,1,40,45,56,9,0,74,21,85,72,11,3,70,26,61,37,54,87,46,12,25,19,65,63,68,52,42,82,23}, // permutation 6
{44,15,10,64,53,71,17,52,76,16,84,38,67,0,41,89,27,60,56,57,45,7,40,32,35,9,3,1,31,30,68,55,20,5,4,85,26,36,11,50,86,29,19,83,74,61,78,37,75,6,49,79,80,65,47,43,21,69,88,14,12,70,33,58,24,8,34,82,51,54,25,73,13,46,39,23,72,48,90,62,18,66,2,28,87,22,42,63,59,81,77}, // permutation 7
{81,79,13,20,65,46,39,47,53,30,26,86,52,18,5,23,35,85,36,71,80,57,21,16,88,24,50,45,84,75,11,8,4,63,40,28,56,51,55,44,43,48,22,54,10,73,38,74,15,41,58,82,3,61,66,42,32,12,67,77,14,7,49,9,19,68,25,72,31,62,27,34,89,0,2,59,76,90,69,60,70,83,78,29,1,33,6,17,64,87,37}, // permutation 8
{1,36,75,19,40,59,43,3,72,7,14,22,26,42,60,87,10,50,13,78,83,65,86,5,67,31,37,21,29,88,30,15,49,61,85,28,32,66,11,9,12,23,47,74,84,52,56,18,46,73,79,58,71,16,81,82,63,76,89,20,80,27,34,90,6,57,48,77,45,41,53,70,2,0,39,54,33,69,51,17,4,35,68,55,64,25,44,24,8,38,62} // permutation 9
};

// Seed: 2243027885

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int64_t  f0;
   int32_t  f1;
   uint32_t  f2;
   volatile uint32_t  f3;
   uint8_t  f4;
   uint64_t  f5;
   int32_t  f6;
};

union U1 {
   volatile int32_t  f0;
   uint8_t  f1;
   volatile int8_t * f2;
};

union U2 {
   volatile int8_t  f0;
   volatile struct S0  f1;
   int8_t * f2;
   int8_t * f3;
   int8_t  f4;
};

struct S3 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    int32_t g_9;
    uint8_t g_31;
    uint32_t g_39[6];
    int32_t g_51;
    uint64_t g_56;
    volatile union U2 g_83;
    VECTOR(int8_t, 16) g_92;
    uint32_t g_102;
    VECTOR(int8_t, 16) g_115;
    volatile int8_t g_124[3];
    uint8_t g_126[1];
    uint16_t g_128;
    VECTOR(uint8_t, 8) g_145;
    uint32_t g_147[5][7][7];
    int32_t g_150[4][5];
    int32_t *g_153;
    int32_t ** volatile g_152;
    uint8_t g_160;
    volatile int8_t g_165;
    struct S0 g_172[10];
    struct S0 *g_173;
    int32_t ** volatile g_174;
    VECTOR(uint8_t, 2) g_177;
    volatile uint32_t g_193;
    VECTOR(int8_t, 4) g_224;
    uint64_t g_229;
    uint64_t *g_228;
    int64_t g_239;
    volatile uint16_t g_244[4][4];
    volatile union U1 g_253;
    volatile int64_t g_265;
    volatile int64_t * volatile g_264;
    VECTOR(uint8_t, 16) g_307;
    int16_t g_312;
    int32_t g_320;
    uint32_t g_348;
    int16_t g_393;
    VECTOR(int16_t, 16) g_406;
    volatile struct S0 g_494;
    int32_t **g_519;
    int32_t ***g_518;
    uint32_t g_523;
    int32_t *g_534[4];
    uint16_t g_564;
    volatile VECTOR(int16_t, 8) g_577;
    VECTOR(int16_t, 2) g_579;
    uint32_t g_599;
    uint64_t g_602;
    union U2 g_629;
    int8_t *g_639;
    union U1 g_644;
    VECTOR(uint8_t, 4) g_652;
    VECTOR(uint64_t, 2) g_661;
    int32_t g_685;
    volatile VECTOR(int64_t, 16) g_689;
    volatile struct S0 g_708;
    int32_t *g_737[2][9];
    volatile VECTOR(uint64_t, 8) g_863;
    int32_t g_872[7][1][8];
    volatile struct S0 g_899;
    volatile struct S0 g_900[8][3][2];
    VECTOR(int16_t, 16) g_903;
    volatile VECTOR(int8_t, 2) g_904;
    VECTOR(int32_t, 8) g_917;
    uint16_t *g_924;
    volatile union U2 g_925;
    union U1 g_937;
    VECTOR(uint8_t, 16) g_951;
    volatile union U2 *g_957[1][1][1];
    volatile int16_t g_1011[2][2];
    uint32_t g_1025;
    union U2 g_1031;
    struct S0 g_1039;
    int32_t * volatile g_1042[7];
    volatile struct S0 g_1045;
    volatile struct S0 g_1046[9];
    volatile struct S0 g_1076;
    volatile struct S0 * volatile g_1077;
    struct S0 g_1081;
    struct S0 g_1087;
    volatile union U2 g_1098;
    volatile struct S0 g_1101[5][4][3];
    volatile uint32_t * volatile g_1107;
    volatile uint32_t * volatile *g_1106[1];
    struct S0 g_1109;
    VECTOR(int64_t, 4) g_1122;
    int64_t g_1135;
    int32_t * volatile g_1139;
    volatile VECTOR(uint16_t, 2) g_1150;
    VECTOR(int16_t, 8) g_1163;
    int8_t *g_1167;
    uint8_t *g_1180[8][6][2];
    uint8_t **g_1179;
    struct S0 g_1295[9];
    volatile VECTOR(int8_t, 4) g_1308;
    int32_t * volatile g_1318;
    int64_t g_1342;
    VECTOR(int16_t, 16) g_1343;
    uint64_t g_1362;
    uint32_t g_1376;
    volatile VECTOR(uint32_t, 8) g_1383;
    VECTOR(uint32_t, 8) g_1428;
    volatile VECTOR(int32_t, 16) g_1434;
    int32_t g_1447;
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
uint32_t  func_1(struct S3 * p_1492);
int32_t  func_15(int32_t  p_16, int32_t  p_17, struct S3 * p_1492);
int32_t  func_18(int32_t * p_19, uint16_t  p_20, uint32_t  p_21, int32_t * p_22, struct S3 * p_1492);
struct S0  func_25(uint32_t  p_26, int32_t * p_27, struct S3 * p_1492);
int8_t  func_34(uint64_t  p_35, int8_t * p_36, int8_t * p_37, uint8_t * p_38, struct S3 * p_1492);
int8_t * func_42(uint8_t * p_43, int32_t  p_44, int8_t * p_45, int8_t * p_46, int32_t * p_47, struct S3 * p_1492);
uint8_t * func_48(uint8_t * p_49, struct S3 * p_1492);
int32_t * func_63(uint16_t  p_64, int32_t  p_65, struct S3 * p_1492);
uint16_t  func_66(uint64_t  p_67, int32_t  p_68, int32_t * p_69, int8_t * p_70, uint32_t  p_71, struct S3 * p_1492);
int32_t * func_72(uint64_t  p_73, uint64_t  p_74, struct S3 * p_1492);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1492->g_4 p_1492->g_3 p_1492->g_9 p_1492->g_31 p_1492->g_39 p_1492->g_56 p_1492->g_comm_values p_1492->g_2 p_1492->g_83 p_1492->g_92 p_1492->g_145 p_1492->g_51 p_1492->g_152 p_1492->g_160 p_1492->g_165 p_1492->g_174 p_1492->g_172.f2 p_1492->g_172.f4 p_1492->g_153 p_1492->g_193 p_1492->g_172 p_1492->g_244 p_1492->g_253 p_1492->g_228 p_1492->g_229 p_1492->g_264 p_1492->g_224 p_1492->g_102 p_1492->g_150 p_1492->g_128 p_1492->g_126 p_1492->g_348 p_1492->g_320 p_1492->g_312 p_1492->g_124 p_1492->g_239 p_1492->g_147 p_1492->l_comm_values p_1492->g_494 p_1492->g_83.f0 p_1492->g_564 p_1492->g_579 p_1492->g_599 p_1492->g_602 p_1492->g_519 p_1492->g_639 p_1492->g_899 p_1492->g_652 p_1492->g_1025 p_1492->g_1031 p_1492->g_924 p_1492->g_1039 p_1492->g_177 p_1492->g_1045 p_1492->g_1076 p_1492->g_1081 p_1492->g_1087 p_1492->g_644 p_1492->g_1098 p_1492->g_1101 p_1492->g_265 p_1492->g_1106 p_1492->g_1109 p_1492->g_406 p_1492->g_1139 p_1492->g_903 p_1492->g_1295 p_1492->g_872 p_1492->g_1342 p_1492->g_1343 p_1492->g_1362 p_1492->g_1135 p_1492->g_1376 p_1492->g_1383 p_1492->g_1428 p_1492->g_1434 p_1492->g_1447 p_1492->g_685 p_1492->g_917 p_1492->g_708.f5
 * writes: p_1492->g_4 p_1492->g_9 p_1492->g_31 p_1492->g_39 p_1492->g_56 p_1492->g_51 p_1492->g_153 p_1492->g_160 p_1492->g_173 p_1492->g_172.f4 p_1492->g_2 p_1492->g_193 p_1492->g_172 p_1492->g_244 p_1492->g_128 p_1492->g_312 p_1492->g_102 p_1492->g_348 p_1492->g_393 p_1492->g_126 p_1492->g_320 p_1492->g_239 p_1492->g_564 p_1492->g_599 p_1492->g_602 p_1492->g_900 p_1492->g_1025 p_1492->g_872 p_1492->g_1046 p_1492->g_925.f1 p_1492->g_1039.f4 p_1492->g_661 p_1492->g_1135 p_1492->g_1179 p_1492->g_1039.f2 p_1492->g_1039 p_1492->g_629.f4 p_1492->g_1081.f2 p_1492->g_1087.f4 p_1492->g_1087.f1 p_1492->g_1376 p_1492->g_1087.f5 p_1492->g_685 p_1492->g_924
 */
uint32_t  func_1(struct S3 * p_1492)
{ /* block id: 4 */
    uint8_t l_10 = 254UL;
    int32_t l_1449 = 0x51B88F8FL;
    int32_t l_1450 = (-1L);
    int32_t *l_1451 = &p_1492->g_872[6][0][6];
    int32_t *l_1452 = &p_1492->g_51;
    int32_t *l_1453 = &p_1492->g_1447;
    int32_t l_1454 = (-1L);
    int32_t *l_1455 = &p_1492->g_1447;
    int32_t *l_1456 = &p_1492->g_4;
    int32_t *l_1457 = &p_1492->g_872[3][0][4];
    int32_t *l_1458 = &p_1492->g_9;
    int32_t *l_1459 = (void*)0;
    int32_t *l_1460 = &p_1492->g_320;
    int32_t *l_1461 = (void*)0;
    int32_t l_1462[9] = {0x4B4DA31FL,0x4B4DA31FL,0x4B4DA31FL,0x4B4DA31FL,0x4B4DA31FL,0x4B4DA31FL,0x4B4DA31FL,0x4B4DA31FL,0x4B4DA31FL};
    int32_t *l_1463[2];
    uint64_t l_1464 = 0xFF083AD498E533EBL;
    uint16_t *l_1485[9] = {&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128};
    VECTOR(int16_t, 8) l_1488 = (VECTOR(int16_t, 8))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x3720L), 0x3720L), 0x3720L, 5L, 0x3720L);
    uint32_t l_1489[6][8][5] = {{{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL}},{{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL}},{{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL}},{{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL}},{{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL}},{{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL},{3UL,1UL,1UL,0UL,2UL}}};
    int8_t *l_1490 = &p_1492->g_629.f4;
    int64_t l_1491 = 0x1BDC3B068212DCE7L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1463[i] = (void*)0;
    for (p_1492->g_4 = 0; (p_1492->g_4 <= 4); ++p_1492->g_4)
    { /* block id: 7 */
        uint32_t l_7 = 0xD188047DL;
        int32_t *l_8 = &p_1492->g_9;
        if (l_7)
            break;
        l_10++;
        for (p_1492->g_9 = 21; (p_1492->g_9 == 23); p_1492->g_9 = safe_add_func_uint8_t_u_u(p_1492->g_9, 9))
        { /* block id: 12 */
            uint64_t *l_1116 = (void*)0;
            uint64_t *l_1117[4][10] = {{&p_1492->g_229,&p_1492->g_229,&p_1492->g_229,(void*)0,(void*)0,(void*)0,&p_1492->g_229,&p_1492->g_229,&p_1492->g_229,&p_1492->g_229},{&p_1492->g_229,&p_1492->g_229,&p_1492->g_229,(void*)0,(void*)0,(void*)0,&p_1492->g_229,&p_1492->g_229,&p_1492->g_229,&p_1492->g_229},{&p_1492->g_229,&p_1492->g_229,&p_1492->g_229,(void*)0,(void*)0,(void*)0,&p_1492->g_229,&p_1492->g_229,&p_1492->g_229,&p_1492->g_229},{&p_1492->g_229,&p_1492->g_229,&p_1492->g_229,(void*)0,(void*)0,(void*)0,&p_1492->g_229,&p_1492->g_229,&p_1492->g_229,&p_1492->g_229}};
            int32_t *l_1448 = &p_1492->g_685;
            int i, j;
            if (p_1492->g_3)
                break;
            (*l_1448) |= func_15(func_18(&p_1492->g_9, p_1492->g_9, ((safe_mod_func_int64_t_s_s(((func_25((*l_8), &p_1492->g_9, p_1492) , 0x54DC3670C88692AAL) != (safe_rshift_func_uint8_t_u_u(246UL, 2))), (p_1492->g_661.y = ((*l_8) , ((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((p_1492->g_406.sb || (*l_8)), l_10)), l_10)) , 0x8D67F91EA34AB4DAL))))) != l_10), &p_1492->g_9, p_1492), (*l_8), p_1492);
        }
    }
    l_1449 ^= l_10;
    l_1464++;
    (*l_1460) |= (p_1492->g_917.s1 , (safe_sub_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((((VECTOR(int64_t, 16))(0x0C6DFCDEC5DFA070L, 1L, ((p_1492->g_924 = &p_1492->g_564) != (((*l_1458) &= ((*l_1452) = ((l_1489[3][3][0] = (safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((*l_1455), (*l_1456))), (*l_1457))), (safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((p_1492->g_564++), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_1492->g_708.f5, ((VECTOR(int16_t, 4))(l_1488.s5404)), ((VECTOR(int16_t, 2))((-1L), 0x25C1L)), (-1L))).s51)), 1L, 0x2114L)).yxxzyzyyxywzyxxx)).sf)), p_1492->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1492->tid, 91))]))))) && (*l_1455)))) , &p_1492->g_244[1][3])), ((VECTOR(int64_t, 8))(0x0A74254471436BE8L)), ((VECTOR(int64_t, 2))(6L)), (-9L), (-6L), 0x301CE9291441A00BL)).s8 , 0x3DL), (*l_1451))) != 255UL), 3)) & 2UL), p_1492->g_145.s2)), l_1491)));
    return (*l_1456);
}


/* ------------------------------------------ */
/* 
 * reads : p_1492->g_1295 p_1492->g_1308 p_1492->g_228 p_1492->g_229 p_1492->g_56 p_1492->g_1139 p_1492->g_872 p_1492->g_1081.f2 p_1492->g_1342 p_1492->g_1343 p_1492->g_924 p_1492->g_128 p_1492->g_1362 p_1492->g_1087.f4 p_1492->g_1135 p_1492->g_1087.f1 p_1492->g_174 p_1492->g_153 p_1492->g_519 p_1492->g_1376 p_1492->g_1383 p_1492->g_239 p_1492->g_160 p_1492->g_1087.f5 p_1492->g_406 p_1492->g_1428 p_1492->g_1434 p_1492->g_903 p_1492->g_1447
 * writes: p_1492->g_1039 p_1492->g_629.f4 p_1492->g_1081.f2 p_1492->g_172.f2 p_1492->g_1087.f4 p_1492->g_1135 p_1492->g_1087.f1 p_1492->g_153 p_1492->g_1376 p_1492->g_239 p_1492->g_160 p_1492->g_1087.f5 p_1492->g_599
 */
int32_t  func_15(int32_t  p_16, int32_t  p_17, struct S3 * p_1492)
{ /* block id: 550 */
    struct S0 *l_1296 = &p_1492->g_1039;
    int32_t l_1299 = (-5L);
    int16_t *l_1300 = (void*)0;
    int16_t *l_1301[7];
    int32_t l_1302[7] = {0L,0L,0L,0L,0L,0L,0L};
    uint16_t l_1307[4] = {0x997BL,0x997BL,0x997BL,0x997BL};
    int32_t ***l_1313 = &p_1492->g_519;
    int8_t *l_1314 = (void*)0;
    int8_t *l_1315 = &p_1492->g_629.f4;
    int8_t *l_1316 = (void*)0;
    int32_t l_1317 = (-2L);
    int32_t *l_1319[4][2] = {{&p_1492->g_685,&p_1492->g_685},{&p_1492->g_685,&p_1492->g_685},{&p_1492->g_685,&p_1492->g_685},{&p_1492->g_685,&p_1492->g_685}};
    int16_t l_1320[7][6] = {{0x6E2CL,0x780BL,0x6E2CL,0x6E2CL,0x780BL,0x6E2CL},{0x6E2CL,0x780BL,0x6E2CL,0x6E2CL,0x780BL,0x6E2CL},{0x6E2CL,0x780BL,0x6E2CL,0x6E2CL,0x780BL,0x6E2CL},{0x6E2CL,0x780BL,0x6E2CL,0x6E2CL,0x780BL,0x6E2CL},{0x6E2CL,0x780BL,0x6E2CL,0x6E2CL,0x780BL,0x6E2CL},{0x6E2CL,0x780BL,0x6E2CL,0x6E2CL,0x780BL,0x6E2CL},{0x6E2CL,0x780BL,0x6E2CL,0x6E2CL,0x780BL,0x6E2CL}};
    uint8_t *l_1329[2][1];
    int64_t l_1330[2][4][8] = {{{7L,7L,7L,7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L,7L,7L,7L}},{{7L,7L,7L,7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L,7L,7L,7L}}};
    uint16_t l_1331 = 0x992CL;
    int8_t l_1334[3][2][2] = {{{(-9L),0x0EL},{(-9L),0x0EL}},{{(-9L),0x0EL},{(-9L),0x0EL}},{{(-9L),0x0EL},{(-9L),0x0EL}}};
    uint16_t l_1335 = 0x8BBFL;
    int32_t l_1363[2][10][3] = {{{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)}},{{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)},{1L,(-9L),(-5L)}}};
    int64_t l_1364 = 0x67B04B28FCEF3CDFL;
    VECTOR(int8_t, 4) l_1381 = (VECTOR(int8_t, 4))(0x0AL, (VECTOR(int8_t, 2))(0x0AL, (-8L)), (-8L));
    int16_t l_1396 = (-1L);
    uint8_t l_1444 = 1UL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1301[i] = (void*)0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1329[i][j] = &p_1492->g_126[0];
    }
    (*l_1296) = p_1492->g_1295[0];
    l_1320[0][4] = (((+(p_17 ^ (safe_mul_func_int16_t_s_s((l_1302[1] ^= l_1299), (!(safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(p_17, (((p_16 && l_1307[2]) && l_1299) , ((VECTOR(int8_t, 16))(p_1492->g_1308.ywxzxwwwyzzwywwz)).s9))) || (safe_add_func_int8_t_s_s(l_1299, (((l_1317 = ((*l_1315) = (safe_mul_func_uint32_t_u_u(FAKE_DIVERGE(p_1492->global_1_offset, get_global_id(1), 10), (l_1313 == (void*)0))))) < 1UL) , p_16)))), 0x81C8L))))))) > p_17) & p_17);
    p_16 = (safe_rshift_func_uint8_t_u_u(((*p_1492->g_228) >= (safe_div_func_int32_t_s_s((*p_1492->g_1139), (safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((--l_1331), (--l_1335))), p_17))))), 6));
    for (p_1492->g_1081.f2 = 0; (p_1492->g_1081.f2 < 5); p_1492->g_1081.f2 = safe_add_func_uint32_t_u_u(p_1492->g_1081.f2, 1))
    { /* block id: 561 */
        VECTOR(int8_t, 4) l_1346 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-5L)), (-5L));
        uint32_t *l_1361[5];
        int32_t l_1365 = 7L;
        VECTOR(uint32_t, 16) l_1382 = (VECTOR(uint32_t, 16))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0xFBFC5B77L), 0xFBFC5B77L), 0xFBFC5B77L, 4UL, 0xFBFC5B77L, (VECTOR(uint32_t, 2))(4UL, 0xFBFC5B77L), (VECTOR(uint32_t, 2))(4UL, 0xFBFC5B77L), 4UL, 0xFBFC5B77L, 4UL, 0xFBFC5B77L);
        int64_t *l_1403 = (void*)0;
        int64_t *l_1404 = &l_1330[0][3][4];
        uint8_t l_1405[8][4][4] = {{{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L}},{{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L}},{{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L}},{{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L}},{{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L}},{{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L}},{{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L}},{{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L},{0UL,0xCEL,0x32L,0x47L}}};
        VECTOR(int32_t, 8) l_1433 = (VECTOR(int32_t, 8))(0x6F3886C4L, (VECTOR(int32_t, 4))(0x6F3886C4L, (VECTOR(int32_t, 2))(0x6F3886C4L, 0x7345FCC6L), 0x7345FCC6L), 0x7345FCC6L, 0x6F3886C4L, 0x7345FCC6L);
        uint64_t l_1437[9][8][3] = {{{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L}},{{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L}},{{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L}},{{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L}},{{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L}},{{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L}},{{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L}},{{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L}},{{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L},{0xE93020E88CCC5225L,0xF8E29F8FCDD1D115L,0xF8E29F8FCDD1D115L}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1361[i] = (void*)0;
        l_1365 |= (p_17 != (p_1492->g_1342 | (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(p_1492->g_1343.s62fdfe304e6b7b93)).s29)), ((safe_mod_func_uint64_t_u_u(((*p_1492->g_924) != 65535UL), ((((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))(0x0AL, 6L, 0x73L, ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(l_1346.zyzzxyxy)).odd, ((VECTOR(int8_t, 16))(((safe_div_func_uint32_t_u_u((p_1492->g_1039.f2 = (((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(0x71L, (safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s(p_17, l_1346.y)), (p_1492->g_172[3].f2 = 0x352D50EDL))))), GROUP_DIVERGE(0, 1))), 3)) >= p_1492->g_1362), p_16)) == 1UL) & p_17)), 0x7D2079A5L)) < p_17), ((VECTOR(int8_t, 2))(0x59L)), 1L, p_17, ((VECTOR(int8_t, 8))(4L)), 1L, (-1L), (-1L))).s2d4e, ((VECTOR(int8_t, 4))(1L))))).zzxxwwww, ((VECTOR(int8_t, 8))(5L))))), (-1L), 0x63L, 0x22L, 1L, 0x78L)), ((VECTOR(uint8_t, 16))(252UL))))).sc1, (int16_t)0x349BL))).even != GROUP_DIVERGE(1, 1)) && GROUP_DIVERGE(0, 1)))) == l_1363[0][3][1]), ((VECTOR(int16_t, 2))(0x3157L)), ((VECTOR(int16_t, 2))((-1L))), 5L)))).s6 >= l_1364)));
        for (p_1492->g_1087.f4 = 0; (p_1492->g_1087.f4 < 43); ++p_1492->g_1087.f4)
        { /* block id: 567 */
            int16_t l_1374 = 0x12ABL;
            for (p_1492->g_1135 = 0; (p_1492->g_1135 != 14); p_1492->g_1135 = safe_add_func_int16_t_s_s(p_1492->g_1135, 6))
            { /* block id: 570 */
                VECTOR(int16_t, 16) l_1372 = (VECTOR(int16_t, 16))(0x17BEL, (VECTOR(int16_t, 4))(0x17BEL, (VECTOR(int16_t, 2))(0x17BEL, 0x32D7L), 0x32D7L), 0x32D7L, 0x17BEL, 0x32D7L, (VECTOR(int16_t, 2))(0x17BEL, 0x32D7L), (VECTOR(int16_t, 2))(0x17BEL, 0x32D7L), 0x17BEL, 0x32D7L, 0x17BEL, 0x32D7L);
                int i;
                for (p_1492->g_1087.f1 = 16; (p_1492->g_1087.f1 >= 12); --p_1492->g_1087.f1)
                { /* block id: 573 */
                    int64_t *l_1373 = &l_1364;
                    int32_t l_1375 = 8L;
                    (*p_1492->g_519) = (*p_1492->g_174);
                    l_1374 = (1L || ((*l_1373) |= l_1372.s9));
                    --p_1492->g_1376;
                }
            }
        }
        if ((safe_sub_func_uint8_t_u_u(l_1346.w, (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0L, 0x10F6L)), 0x6881L, 8L)).w , ((((VECTOR(int8_t, 16))(l_1381.xywzwyyyyxwxyxxy)).s4 == 0UL) || ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 8))(l_1382.s33df1958)).s6501547753507421, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_1492->g_1383.s51675732)).s3, 4294967295UL, 4294967295UL, 4294967295UL)), 0xC6EBDC4EL, (safe_mod_func_uint64_t_u_u((((safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s(((((*p_1492->g_228) < l_1346.z) >= ((*l_1404) = (GROUP_DIVERGE(1, 1) != (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s((+l_1396), 0L)) , (safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((0x3F2A8272L <= (p_16 == p_17)), p_17)), l_1346.z))), 4)) ^ p_17), 0x3E78L))))) || 7L), p_16)), p_16)) != l_1382.se) | (*p_1492->g_924)), l_1405[4][0][3])), 4294967295UL, 4294967291UL)).odd)).wyyyxwxzzwxzywzw, ((VECTOR(uint32_t, 16))(4294967293UL)))))))))).odd)).s0)))))
        { /* block id: 582 */
            uint16_t l_1406 = 0x138AL;
            l_1406--;
        }
        else
        { /* block id: 584 */
            VECTOR(int16_t, 4) l_1413 = (VECTOR(int16_t, 4))(0x7FF3L, (VECTOR(int16_t, 2))(0x7FF3L, (-1L)), (-1L));
            int32_t ***l_1423 = &p_1492->g_519;
            int32_t l_1440 = (-5L);
            int32_t l_1441 = 0x2A295158L;
            int32_t l_1442 = 0x5BA28ECCL;
            int32_t l_1443 = (-1L);
            int i;
            for (p_1492->g_239 = 0; (p_1492->g_239 == 16); ++p_1492->g_239)
            { /* block id: 587 */
                l_1365 = (safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_1492->local_1_offset, get_local_id(1), 10), l_1413.z));
                for (p_1492->g_160 = 0; (p_1492->g_160 < 50); p_1492->g_160 = safe_add_func_int64_t_s_s(p_1492->g_160, 1))
                { /* block id: 591 */
                    int8_t l_1416 = 0L;
                    return l_1416;
                }
            }
            for (p_1492->g_1087.f5 = (-18); (p_1492->g_1087.f5 > 6); ++p_1492->g_1087.f5)
            { /* block id: 597 */
                int32_t ****l_1424 = &p_1492->g_518;
                VECTOR(int64_t, 8) l_1425 = (VECTOR(int64_t, 8))(0x6D2BC2170B39D751L, (VECTOR(int64_t, 4))(0x6D2BC2170B39D751L, (VECTOR(int64_t, 2))(0x6D2BC2170B39D751L, 0x61BD3C9FBA9A1502L), 0x61BD3C9FBA9A1502L), 0x61BD3C9FBA9A1502L, 0x6D2BC2170B39D751L, 0x61BD3C9FBA9A1502L);
                VECTOR(uint32_t, 4) l_1435 = (VECTOR(uint32_t, 4))(0x9CF096EEL, (VECTOR(uint32_t, 2))(0x9CF096EEL, 0xDD2DA5C9L), 0xDD2DA5C9L);
                int8_t l_1436 = 0x09L;
                int i;
                l_1365 = (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((((p_17 < (((p_1492->g_406.sc , l_1423) == (l_1313 = l_1423)) <= 1UL)) != ((((VECTOR(int64_t, 2))(l_1425.s03)).lo <= (safe_div_func_uint8_t_u_u((l_1433.s7 = (255UL >= (((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_1492->g_1428.s4073115764317165)).sc9)).xxyxyxxyyxyyyxxx)).s62, ((VECTOR(uint32_t, 4))((l_1346.y < (((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 8))((p_1492->g_599 = (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1433.s4525)).ywwzyxxy)).s0, (((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 2))(0UL, 0UL))))).hi , ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(p_1492->g_1434.s139d8d94)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-1L), 0x67D3B39AL)))), (p_16 | ((VECTOR(uint32_t, 16))(abs(((VECTOR(uint32_t, 8))(l_1435.zwzyyyxw)).s0715725410734102))).s2), ((p_16 & p_17) , 0x3E98B9DDL), 6L, 0x0D981911L, 5L, 0x5CBF86E0L)), ((VECTOR(int32_t, 8))(0x5CAA962CL))))).s3)))), 7UL, ((VECTOR(uint32_t, 2))(0x53045976L)), 0xA2D77944L, p_17, 0UL, 0x3407D0EFL)).odd, ((VECTOR(uint32_t, 4))(4294967292UL))))).w != p_17)), ((VECTOR(uint32_t, 2))(0UL)), 0x067F098EL)).even, ((VECTOR(uint32_t, 2))(0x5A0162C5L))))).lo , p_16))), 0x70L))) < p_16)) & 7L), 12)) == l_1436), p_1492->g_903.sd));
                ++l_1437[5][7][1];
                if (l_1440)
                    continue;
            }
            l_1444++;
        }
        l_1433.s2 &= (-1L);
    }
    return p_1492->g_1447;
}


/* ------------------------------------------ */
/* 
 * reads : p_1492->g_1122 p_1492->g_1045.f0 p_1492->g_172.f4 p_1492->g_228 p_1492->g_229 p_1492->g_56 p_1492->g_1139 p_1492->g_519 p_1492->g_1150 p_1492->g_924 p_1492->g_128 p_1492->g_1163 p_1492->g_639 p_1492->g_903 p_1492->g_1025 p_1492->g_160 p_1492->g_320 p_1492->g_1081.f5 p_1492->g_153 p_1492->g_1039.f2 p_1492->g_9
 * writes: p_1492->g_1135 p_1492->g_872 p_1492->g_153 p_1492->g_160 p_1492->g_1167 p_1492->g_393 p_1492->g_1179 p_1492->g_1039.f2
 */
int32_t  func_18(int32_t * p_19, uint16_t  p_20, uint32_t  p_21, int32_t * p_22, struct S3 * p_1492)
{ /* block id: 473 */
    int64_t l_1123 = 0x39BEEBFB82A693EEL;
    uint64_t l_1126 = 0xBEDACB68E7BCBD71L;
    int8_t **l_1127[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t *l_1134 = &p_1492->g_1135;
    struct S0 *l_1136 = &p_1492->g_172[0];
    int32_t l_1137 = 2L;
    int32_t *l_1138 = (void*)0;
    int64_t *l_1147[10][8] = {{(void*)0,(void*)0,&l_1123,(void*)0,(void*)0,(void*)0,(void*)0,&l_1123},{(void*)0,(void*)0,&l_1123,(void*)0,(void*)0,(void*)0,(void*)0,&l_1123},{(void*)0,(void*)0,&l_1123,(void*)0,(void*)0,(void*)0,(void*)0,&l_1123},{(void*)0,(void*)0,&l_1123,(void*)0,(void*)0,(void*)0,(void*)0,&l_1123},{(void*)0,(void*)0,&l_1123,(void*)0,(void*)0,(void*)0,(void*)0,&l_1123},{(void*)0,(void*)0,&l_1123,(void*)0,(void*)0,(void*)0,(void*)0,&l_1123},{(void*)0,(void*)0,&l_1123,(void*)0,(void*)0,(void*)0,(void*)0,&l_1123},{(void*)0,(void*)0,&l_1123,(void*)0,(void*)0,(void*)0,(void*)0,&l_1123},{(void*)0,(void*)0,&l_1123,(void*)0,(void*)0,(void*)0,(void*)0,&l_1123},{(void*)0,(void*)0,&l_1123,(void*)0,(void*)0,(void*)0,(void*)0,&l_1123}};
    int64_t **l_1146 = &l_1147[9][4];
    VECTOR(int16_t, 16) l_1157 = (VECTOR(int16_t, 16))(0x46C1L, (VECTOR(int16_t, 4))(0x46C1L, (VECTOR(int16_t, 2))(0x46C1L, 0x0C1BL), 0x0C1BL), 0x0C1BL, 0x46C1L, 0x0C1BL, (VECTOR(int16_t, 2))(0x46C1L, 0x0C1BL), (VECTOR(int16_t, 2))(0x46C1L, 0x0C1BL), 0x46C1L, 0x0C1BL, 0x46C1L, 0x0C1BL);
    VECTOR(uint64_t, 2) l_1162 = (VECTOR(uint64_t, 2))(0x0EFE1CAC1FEF3A2BL, 0UL);
    uint8_t *l_1166 = &p_1492->g_160;
    int16_t *l_1168 = (void*)0;
    int16_t *l_1169 = (void*)0;
    int16_t *l_1170 = (void*)0;
    int16_t *l_1171 = (void*)0;
    int16_t *l_1172 = &p_1492->g_393;
    VECTOR(int16_t, 8) l_1173 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-10L)), (-10L)), (-10L), 0L, (-10L));
    int8_t l_1192[8][3][6] = {{{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL}},{{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL}},{{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL}},{{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL}},{{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL}},{{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL}},{{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL}},{{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL},{0x1EL,0x7DL,0x7DL,0x1EL,0x40L,0x5FL}}};
    int32_t l_1193 = 0x7A111DC1L;
    int32_t l_1194 = 0x549AE05FL;
    int32_t l_1195 = 0L;
    int32_t l_1197 = 0x1BFB5973L;
    int32_t l_1198 = 0x7866998DL;
    int32_t l_1199[5][4][7] = {{{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L},{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L},{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L},{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L}},{{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L},{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L},{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L},{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L}},{{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L},{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L},{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L},{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L}},{{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L},{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L},{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L},{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L}},{{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L},{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L},{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L},{3L,(-1L),0x05DD6531L,0x29AC951AL,(-1L),0x29AC951AL,0x05DD6531L}}};
    int i, j, k;
    l_1137 ^= (((safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 2))(p_1492->g_1122.wz)).yyxyxyyx))).lo)).y == l_1123), ((((*l_1134) = ((((safe_mod_func_int64_t_s_s(l_1123, (l_1126 | ((l_1127[1] == (((safe_div_func_uint16_t_u_u((((((safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((0x1A03L != (((void*)0 == p_22) > (1L & 0x5EA6L))) && (-1L)), p_20)), 246UL)) >= l_1126) ^ 1UL) == p_20) < p_1492->g_1045.f0), p_21)) == l_1123) , l_1127[1])) ^ l_1126)))) < l_1123) , l_1126) & p_21)) , l_1136) == (void*)0))), l_1126)) <= p_1492->g_172[3].f4) < (-8L));
    (*p_1492->g_1139) = ((*p_1492->g_228) <= l_1123);
    (*p_1492->g_519) = (void*)0;
    if ((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((~(((*l_1146) = (void*)0) == &p_1492->g_239)), 3)) ^ (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(p_1492->g_1150.xx)).even, (safe_mod_func_uint16_t_u_u((!(safe_rshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_1157.sf9)).yyxx)).lo, ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(7L, 0x7F77L)).xyxxyxyxxyyxyxyx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(0L, ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(0x632EL, ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))((safe_lshift_func_int8_t_s_s(((*p_1492->g_924) && (safe_add_func_int64_t_s_s(p_21, ((VECTOR(uint64_t, 8))(l_1162.xxxxxxyx)).s1))), 5)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_1492->g_1163.s71)).yxxyxyxx)).s6, 0x011CL, 0x614FL)), ((VECTOR(int16_t, 16))(((*l_1172) = (((*l_1166) = l_1157.s7) > (p_1492->g_639 == (p_1492->g_1167 = p_1492->g_639)))), 0x7516L, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_1173.s0632334167333560)).s44fd)).even, (int16_t)p_1492->g_903.s8, (int16_t)(safe_div_func_uint8_t_u_u(((*l_1166) &= p_1492->g_1025), p_20))))).hi, (-1L), 9L, 0x104CL, ((VECTOR(int16_t, 8))((-2L))), 1L, 0x4695L)).s1fd8))).y, 0x4BF3L, 0x5A73L, l_1137, ((VECTOR(int16_t, 2))(1L)), 0x7123L)).hi, ((VECTOR(int16_t, 4))(0x6E1FL))))), ((VECTOR(int16_t, 2))(5L)), 1L)).s4775177316513205))))).s40))), 0x0EAEL, 1L)).y, (*p_1492->g_924))) > p_1492->g_903.s9) , p_1492->g_320), 6))), (*p_1492->g_924)))))), p_1492->g_1081.f5)), 4L)))
    { /* block id: 483 */
        int8_t l_1181 = 3L;
        int32_t *l_1182 = &l_1137;
        int32_t *l_1183 = (void*)0;
        int32_t *l_1184 = &p_1492->g_320;
        int32_t *l_1185 = &p_1492->g_872[6][0][4];
        int32_t *l_1186 = &l_1137;
        int32_t *l_1187 = &p_1492->g_51;
        int32_t *l_1188 = &p_1492->g_872[6][0][4];
        int32_t l_1189 = (-1L);
        int32_t *l_1190 = &p_1492->g_51;
        int32_t *l_1191[4];
        int32_t l_1196 = 0L;
        int32_t l_1200 = (-7L);
        uint32_t l_1201 = 0x2801BB92L;
        int i;
        for (i = 0; i < 4; i++)
            l_1191[i] = &p_1492->g_872[6][0][4];
        for (l_1126 = 15; (l_1126 <= 60); l_1126 = safe_add_func_int8_t_s_s(l_1126, 8))
        { /* block id: 486 */
            uint8_t **l_1178[3][10] = {{&l_1166,&l_1166,&l_1166,&l_1166,&l_1166,&l_1166,&l_1166,&l_1166,&l_1166,&l_1166},{&l_1166,&l_1166,&l_1166,&l_1166,&l_1166,&l_1166,&l_1166,&l_1166,&l_1166,&l_1166},{&l_1166,&l_1166,&l_1166,&l_1166,&l_1166,&l_1166,&l_1166,&l_1166,&l_1166,&l_1166}};
            int i, j;
            p_1492->g_1179 = l_1178[2][5];
            (*p_1492->g_519) = (*p_1492->g_519);
        }
        l_1201--;
        if ((atomic_inc(&p_1492->l_atomic_input[4]) == 4))
        { /* block id: 492 */
            int32_t l_1204 = 0x202F0067L;
            union U2 l_1288[7] = {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}};
            int32_t *l_1289 = &l_1204;
            uint32_t l_1290[4][8] = {{0x1924466EL,0x20318674L,0x1924466EL,0x1924466EL,0x20318674L,0x1924466EL,0x1924466EL,0x20318674L},{0x1924466EL,0x20318674L,0x1924466EL,0x1924466EL,0x20318674L,0x1924466EL,0x1924466EL,0x20318674L},{0x1924466EL,0x20318674L,0x1924466EL,0x1924466EL,0x20318674L,0x1924466EL,0x1924466EL,0x20318674L},{0x1924466EL,0x20318674L,0x1924466EL,0x1924466EL,0x20318674L,0x1924466EL,0x1924466EL,0x20318674L}};
            int32_t l_1291 = 0x3B7DCE1DL;
            int i, j;
            for (l_1204 = 0; (l_1204 > 4); l_1204 = safe_add_func_int16_t_s_s(l_1204, 6))
            { /* block id: 495 */
                VECTOR(int32_t, 16) l_1207 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L, (VECTOR(int32_t, 2))((-5L), 0L), (VECTOR(int32_t, 2))((-5L), 0L), (-5L), 0L, (-5L), 0L);
                VECTOR(int32_t, 8) l_1208 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0L), 0L), 0L, 5L, 0L);
                uint16_t l_1209 = 0UL;
                int16_t l_1210 = (-1L);
                VECTOR(int32_t, 8) l_1211 = (VECTOR(int32_t, 8))(0x55137F3FL, (VECTOR(int32_t, 4))(0x55137F3FL, (VECTOR(int32_t, 2))(0x55137F3FL, 1L), 1L), 1L, 0x55137F3FL, 1L);
                VECTOR(int32_t, 8) l_1212 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 1L), 1L), 1L, (-6L), 1L);
                int i;
                if (((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1207.s02)).yxxy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1208.s27)), 0L, 0L)), 0x6B20A1C0L, 0x3737F9B7L, (l_1210 = l_1209), ((VECTOR(int32_t, 4))(l_1211.s4757)), 0x288323E2L)).sf6f3, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1212.s17355312)).s64)).yyyx))).x)
                { /* block id: 497 */
                    int32_t l_1213 = 1L;
                    uint32_t l_1214 = 0xE1BA41D0L;
                    int32_t *l_1217 = &l_1213;
                    l_1214--;
                    l_1217 = (void*)0;
                }
                else
                { /* block id: 500 */
                    VECTOR(int32_t, 16) l_1218 = (VECTOR(int32_t, 16))(0x457DC249L, (VECTOR(int32_t, 4))(0x457DC249L, (VECTOR(int32_t, 2))(0x457DC249L, 0x16809173L), 0x16809173L), 0x16809173L, 0x457DC249L, 0x16809173L, (VECTOR(int32_t, 2))(0x457DC249L, 0x16809173L), (VECTOR(int32_t, 2))(0x457DC249L, 0x16809173L), 0x457DC249L, 0x16809173L, 0x457DC249L, 0x16809173L);
                    int32_t l_1219 = 0x2C25F45AL;
                    int32_t l_1220 = (-6L);
                    int32_t *l_1221 = (void*)0;
                    int32_t *l_1222 = (void*)0;
                    int16_t l_1255 = 0x199AL;
                    struct S0 l_1256 = {4L,8L,0x90F8B12DL,4294967293UL,0x5AL,0x6C5634FB279008ECL,0L};/* VOLATILE GLOBAL l_1256 */
                    struct S0 l_1257 = {-1L,-1L,4294967295UL,4294967294UL,255UL,0UL,-5L};/* VOLATILE GLOBAL l_1257 */
                    int i;
                    l_1211.s4 = ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(l_1218.sed)).xyxx))).x;
                    l_1222 = ((l_1220 = l_1219) , (l_1221 = l_1221));
                    for (l_1218.s7 = 20; (l_1218.s7 <= 19); --l_1218.s7)
                    { /* block id: 507 */
                        uint64_t l_1225 = 0x1CA0E3BB85F85989L;
                        int32_t l_1227 = 0x6ABEC0B6L;
                        int32_t *l_1226 = &l_1227;
                        uint8_t l_1228 = 1UL;
                        VECTOR(int64_t, 2) l_1229 = (VECTOR(int64_t, 2))(0x202FE8D2FFD58799L, 0x66B7B8D666EBA3E6L);
                        int32_t l_1230 = 0L;
                        VECTOR(int64_t, 4) l_1231 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 3L), 3L);
                        VECTOR(int64_t, 16) l_1232 = (VECTOR(int64_t, 16))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x799C6526A8C4EBC9L), 0x799C6526A8C4EBC9L), 0x799C6526A8C4EBC9L, 7L, 0x799C6526A8C4EBC9L, (VECTOR(int64_t, 2))(7L, 0x799C6526A8C4EBC9L), (VECTOR(int64_t, 2))(7L, 0x799C6526A8C4EBC9L), 7L, 0x799C6526A8C4EBC9L, 7L, 0x799C6526A8C4EBC9L);
                        VECTOR(int64_t, 16) l_1233 = (VECTOR(int64_t, 16))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 7L), 7L), 7L, 7L, 7L, (VECTOR(int64_t, 2))(7L, 7L), (VECTOR(int64_t, 2))(7L, 7L), 7L, 7L, 7L, 7L);
                        VECTOR(int64_t, 2) l_1234 = (VECTOR(int64_t, 2))((-1L), 0x6C618E4701D5D28FL);
                        uint8_t l_1235[9][6] = {{0x4CL,0x4CL,0xE5L,0x1FL,255UL,0x1FL},{0x4CL,0x4CL,0xE5L,0x1FL,255UL,0x1FL},{0x4CL,0x4CL,0xE5L,0x1FL,255UL,0x1FL},{0x4CL,0x4CL,0xE5L,0x1FL,255UL,0x1FL},{0x4CL,0x4CL,0xE5L,0x1FL,255UL,0x1FL},{0x4CL,0x4CL,0xE5L,0x1FL,255UL,0x1FL},{0x4CL,0x4CL,0xE5L,0x1FL,255UL,0x1FL},{0x4CL,0x4CL,0xE5L,0x1FL,255UL,0x1FL},{0x4CL,0x4CL,0xE5L,0x1FL,255UL,0x1FL}};
                        VECTOR(int64_t, 4) l_1236 = (VECTOR(int64_t, 4))(0x77E53A807412D198L, (VECTOR(int64_t, 2))(0x77E53A807412D198L, 0x364EA06463EAEEF6L), 0x364EA06463EAEEF6L);
                        VECTOR(int64_t, 8) l_1237 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L);
                        uint16_t l_1238 = 0x1481L;
                        struct S0 l_1239 = {1L,0x3AFA27E3L,0x74ECFBDFL,4294967290UL,0x82L,0x9BF43DB2A778A9A1L,0x6EA0BAD7L};/* VOLATILE GLOBAL l_1239 */
                        VECTOR(int64_t, 4) l_1240 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x11FED3B9D287C0E1L), 0x11FED3B9D287C0E1L);
                        int8_t l_1241 = 0x3CL;
                        int32_t l_1242[1];
                        VECTOR(uint16_t, 2) l_1243 = (VECTOR(uint16_t, 2))(0UL, 7UL);
                        int64_t l_1244 = (-1L);
                        int32_t l_1245 = 0x46801096L;
                        int8_t l_1246 = 0x61L;
                        VECTOR(int64_t, 2) l_1247 = (VECTOR(int64_t, 2))((-9L), 0x6793272887E268D9L);
                        uint32_t l_1248 = 0x814735FAL;
                        int16_t l_1249 = 1L;
                        uint16_t l_1250[7];
                        int32_t l_1251 = 0x33DAE8C7L;
                        int16_t l_1252 = 0x4D85L;
                        uint8_t l_1253[5][3][5] = {{{0x95L,0x95L,0x95L,0x95L,0x95L},{0x95L,0x95L,0x95L,0x95L,0x95L},{0x95L,0x95L,0x95L,0x95L,0x95L}},{{0x95L,0x95L,0x95L,0x95L,0x95L},{0x95L,0x95L,0x95L,0x95L,0x95L},{0x95L,0x95L,0x95L,0x95L,0x95L}},{{0x95L,0x95L,0x95L,0x95L,0x95L},{0x95L,0x95L,0x95L,0x95L,0x95L},{0x95L,0x95L,0x95L,0x95L,0x95L}},{{0x95L,0x95L,0x95L,0x95L,0x95L},{0x95L,0x95L,0x95L,0x95L,0x95L},{0x95L,0x95L,0x95L,0x95L,0x95L}},{{0x95L,0x95L,0x95L,0x95L,0x95L},{0x95L,0x95L,0x95L,0x95L,0x95L},{0x95L,0x95L,0x95L,0x95L,0x95L}}};
                        VECTOR(int32_t, 8) l_1254 = (VECTOR(int32_t, 8))(0x6E8E8FC4L, (VECTOR(int32_t, 4))(0x6E8E8FC4L, (VECTOR(int32_t, 2))(0x6E8E8FC4L, 6L), 6L), 6L, 0x6E8E8FC4L, 6L);
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_1242[i] = (-7L);
                        for (i = 0; i < 7; i++)
                            l_1250[i] = 1UL;
                        l_1226 = (l_1225 , (void*)0);
                        l_1253[1][0][1] ^= ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(0x3F22EA1BL, ((VECTOR(int32_t, 4))((-10L), (-2L), 1L, (-1L))).x, ((VECTOR(int32_t, 4))(5L, (-1L), 0x0D67E1F0L, 0x2FB08833L)), l_1228, ((VECTOR(int32_t, 4))(0x0BD8D884L, 0x55743A95L, 0x6DD6888CL, (-2L))).z, (((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 2))(l_1229.xy)).yyxyxyxx, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_1230, 3L, 0x574D4DF80F35CC7CL, 0x4C639FC2B97CCA66L)).zwyxyyzxzyyzxwwy)).odd, ((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_1231.wy)), ((VECTOR(int64_t, 4))(l_1232.s905c)), 0x488D80969F992EA2L, 4L)).s76, ((VECTOR(int64_t, 16))(l_1233.sd4b100682e05cc0f)).s0e))))).yyyx)).xxxxxzxx, ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_1234.yxyxxyyyxyxyxxyx)).s9324)).zxxwwwxw, ((VECTOR(int64_t, 2))(9L, 0x36D0442D4E056FD8L)).xxxxyyxx))).s23, (int64_t)((l_1235[6][5] = 0x30860B8C4A34BF5EL) , ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_1236.xxwy)), 0x0572BDACC9A61537L, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 16))(l_1237.s6122461543442766)).s50, (int64_t)(l_1245 = (l_1244 = (l_1243.y |= ((l_1238 , l_1239) , (l_1242[0] = (l_1241 = ((VECTOR(int64_t, 16))(l_1240.xzzxxzyzyywzxwzx)).s2))))))))).yxxxyxxy)).s3, l_1246, ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 8))(l_1247.xyyyxyxx)).s74, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))((-1L), 0x15FD4333L, ((VECTOR(int32_t, 4))(3L)), 0x488CF9FDL, (-1L))).s01, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(0x28E69C4CL))))), ((VECTOR(int32_t, 2))(0x5B4BF01FL))))).xyxy, ((VECTOR(uint32_t, 4))(0xF2817E88L))))), ((VECTOR(int64_t, 8))(0x024C1DD35C534FD5L)), (-1L), l_1248, (-8L), 0x1C6D4D8426458649L)), ((VECTOR(int64_t, 16))(0x12D6E34370C39395L))))).s4a, ((VECTOR(int64_t, 2))(2L))))).yyyy)).even))), 0L, 2L, l_1249, 3L, 0x7325D759CBA05F95L, 0x00DD7CA6E60424B0L, 1L)).se)))).xyxyxxyy, ((VECTOR(int64_t, 8))(0x4B0173890F33938BL))))).s5, l_1250[2], l_1251, (-10L), 0x76A1F2DB6A292C3EL, 0x4441D07751C0958EL, 0x4499E559ADF45B94L, 0x07DA6E4F1E66D6B0L)).s45, ((VECTOR(int64_t, 2))((-4L)))))).xxyxxyyy)))))), ((VECTOR(int64_t, 8))(0x3F360311BE44F38DL)))).lo, ((VECTOR(int64_t, 8))((-9L)))))), ((VECTOR(int64_t, 8))(0L)), ((VECTOR(int64_t, 8))(0L))))).s3 , l_1252), ((VECTOR(int32_t, 4))(0x17B71DD6L)), ((VECTOR(int32_t, 2))((-1L))), 0x302279F5L)).lo))).s6;
                        l_1212.s5 &= ((VECTOR(int32_t, 2))(l_1254.s10)).odd;
                    }
                    l_1257 = (l_1255 , (((VECTOR(int8_t, 2))(0L, 0x15L)).hi , l_1256));
                }
                for (l_1211.s1 = 0; (l_1211.s1 < 4); l_1211.s1++)
                { /* block id: 522 */
                    int32_t l_1260 = 0x092ED09DL;
                    for (l_1260 = 0; (l_1260 > 2); ++l_1260)
                    { /* block id: 525 */
                        uint64_t l_1263 = 0x416B30E980E867D8L;
                        uint64_t l_1266 = 0UL;
                        int64_t l_1267 = (-1L);
                        int8_t l_1268 = (-1L);
                        int32_t l_1269 = (-3L);
                        uint16_t l_1270 = 0x9D06L;
                        VECTOR(int32_t, 16) l_1271 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int32_t, 2))(1L, (-1L)), (VECTOR(int32_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
                        VECTOR(int32_t, 4) l_1272 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5BBEC1ECL), 0x5BBEC1ECL);
                        VECTOR(int8_t, 4) l_1273 = (VECTOR(int8_t, 4))(0x5FL, (VECTOR(int8_t, 2))(0x5FL, 0x2AL), 0x2AL);
                        VECTOR(int8_t, 2) l_1274 = (VECTOR(int8_t, 2))(0x65L, 0x47L);
                        VECTOR(int8_t, 16) l_1275 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 6L), 6L), 6L, 0L, 6L, (VECTOR(int8_t, 2))(0L, 6L), (VECTOR(int8_t, 2))(0L, 6L), 0L, 6L, 0L, 6L);
                        VECTOR(int64_t, 8) l_1276 = (VECTOR(int64_t, 8))(0x20C16E1791CF8A5DL, (VECTOR(int64_t, 4))(0x20C16E1791CF8A5DL, (VECTOR(int64_t, 2))(0x20C16E1791CF8A5DL, 0x6FE3FA016F6BFD9AL), 0x6FE3FA016F6BFD9AL), 0x6FE3FA016F6BFD9AL, 0x20C16E1791CF8A5DL, 0x6FE3FA016F6BFD9AL);
                        int64_t l_1277 = 0L;
                        VECTOR(int32_t, 4) l_1278 = (VECTOR(int32_t, 4))(0x56F9EC49L, (VECTOR(int32_t, 2))(0x56F9EC49L, 0x7E3B854DL), 0x7E3B854DL);
                        VECTOR(int32_t, 2) l_1279 = (VECTOR(int32_t, 2))((-1L), 1L);
                        VECTOR(int32_t, 8) l_1280 = (VECTOR(int32_t, 8))(0x6734C612L, (VECTOR(int32_t, 4))(0x6734C612L, (VECTOR(int32_t, 2))(0x6734C612L, (-1L)), (-1L)), (-1L), 0x6734C612L, (-1L));
                        int16_t l_1281 = 0x3B7FL;
                        int32_t l_1282 = (-1L);
                        VECTOR(int32_t, 4) l_1283 = (VECTOR(int32_t, 4))(0x2B912CFCL, (VECTOR(int32_t, 2))(0x2B912CFCL, 4L), 4L);
                        int16_t l_1284 = 0x3E65L;
                        int64_t l_1285 = 0x6EE1621691B2F8C4L;
                        int16_t l_1286[1][2][6] = {{{0x7504L,0x7504L,0x7504L,0x7504L,0x7504L,0x7504L},{0x7504L,0x7504L,0x7504L,0x7504L,0x7504L,0x7504L}}};
                        VECTOR(int32_t, 16) l_1287 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                        int i, j, k;
                        --l_1263;
                        l_1285 ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(l_1266, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(l_1267, 9L, ((VECTOR(int32_t, 4))(((l_1269 = l_1268) , l_1270), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(l_1271.s3d07)).hi, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 4))(l_1272.zyzz)).yzxwzzyx, (int32_t)(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_1273.yy)), ((VECTOR(int8_t, 2))(l_1274.xx)), 0L, ((VECTOR(int8_t, 2))(l_1275.s1b)), 0L)))).s2 , 0x2F1BAFDCL), (int32_t)(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_1276.s3053005254520522)).sef)).lo , l_1277)))).s60))))), 4L)), 0L, (-1L))).s4771716607500063, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(l_1278.wz)).yxyx, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1279.xxxyxyyy)).s3444703703674302)).odd, ((VECTOR(int32_t, 2))((-1L), (-10L))).yxyyyyyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1280.s1660122516535565)).scaac)).ywxyyywz))).lo))).wzyzyyzxxzyxwwyz))).s483c)).z, 0x27E90C1CL, ((VECTOR(int32_t, 8))((l_1282 = (l_1208.s2 ^= l_1281)), 1L, 1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1283.yxwzyxyx)).odd)), 0x5D96346DL)), l_1284, 0x5443B21EL, 0x5DB81CA1L, 0x3012E18EL, 0x48C65785L)).lo, ((VECTOR(int32_t, 8))(1L))))).s24)).xxxx)).y, 1L, 0x56B234C2L, 0L)).yxzzxxyxwzwxyxxy)).sf;
                        l_1207.s6 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x4F0A3F6CL, (l_1212.s5 = 0x18C0C48BL), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x77D73A7FL)))), 1L, (l_1286[0][0][1] , (l_1212.s2 = 0x163193D4L)), 1L, ((VECTOR(int32_t, 8))(l_1287.s56e25245)), 1L)))))).s4;
                    }
                }
            }
            l_1289 = (l_1288[4] , (void*)0);
            l_1291 |= l_1290[2][5];
            unsigned int result = 0;
            result += l_1204;
            int l_1288_i0;
            for (l_1288_i0 = 0; l_1288_i0 < 7; l_1288_i0++) {
                result += l_1288[l_1288_i0].f0;
                result += l_1288[l_1288_i0].f1.f0;
                result += l_1288[l_1288_i0].f1.f1;
                result += l_1288[l_1288_i0].f1.f2;
                result += l_1288[l_1288_i0].f1.f3;
                result += l_1288[l_1288_i0].f1.f4;
                result += l_1288[l_1288_i0].f1.f5;
                result += l_1288[l_1288_i0].f1.f6;
                result += l_1288[l_1288_i0].f2;
                result += l_1288[l_1288_i0].f3;
                result += l_1288[l_1288_i0].f4;
            }
            int l_1290_i0, l_1290_i1;
            for (l_1290_i0 = 0; l_1290_i0 < 4; l_1290_i0++) {
                for (l_1290_i1 = 0; l_1290_i1 < 8; l_1290_i1++) {
                    result += l_1290[l_1290_i0][l_1290_i1];
                }
            }
            result += l_1291;
            atomic_add(&p_1492->l_special_values[4], result);
        }
        else
        { /* block id: 539 */
            (1 + 1);
        }
    }
    else
    { /* block id: 542 */
        for (p_1492->g_1039.f2 = 2; (p_1492->g_1039.f2 > 56); ++p_1492->g_1039.f2)
        { /* block id: 545 */
            int64_t l_1294 = (-9L);
            return l_1294;
        }
    }
    return (*p_22);
}


/* ------------------------------------------ */
/* 
 * reads : p_1492->g_31 p_1492->g_39 p_1492->g_56 p_1492->g_comm_values p_1492->g_2 p_1492->g_83 p_1492->g_92 p_1492->g_145 p_1492->g_51 p_1492->g_152 p_1492->g_160 p_1492->g_165 p_1492->g_174 p_1492->g_172.f2 p_1492->g_172.f4 p_1492->g_153 p_1492->g_193 p_1492->g_3 p_1492->g_172 p_1492->g_244 p_1492->g_253 p_1492->g_228 p_1492->g_229 p_1492->g_264 p_1492->g_9 p_1492->g_224 p_1492->g_102 p_1492->g_150 p_1492->g_128 p_1492->g_126 p_1492->g_348 p_1492->g_320 p_1492->g_312 p_1492->g_124 p_1492->g_239 p_1492->g_147 p_1492->l_comm_values p_1492->g_494 p_1492->g_83.f0 p_1492->g_564 p_1492->g_579 p_1492->g_599 p_1492->g_602 p_1492->g_519 p_1492->g_629 p_1492->g_177 p_1492->g_4 p_1492->g_639 p_1492->g_863 p_1492->g_265 p_1492->g_708.f4 p_1492->g_708.f1 p_1492->g_652 p_1492->g_899 p_1492->g_1025 p_1492->g_1031 p_1492->g_924 p_1492->g_1039 p_1492->g_1045 p_1492->g_1076 p_1492->g_1081 p_1492->g_1087 p_1492->g_644 p_1492->g_1098 p_1492->g_1101 p_1492->g_1106 p_1492->g_1109
 * writes: p_1492->g_31 p_1492->g_39 p_1492->g_56 p_1492->g_51 p_1492->g_153 p_1492->g_160 p_1492->g_173 p_1492->g_172.f4 p_1492->g_2 p_1492->g_193 p_1492->g_172 p_1492->g_244 p_1492->g_128 p_1492->g_312 p_1492->g_102 p_1492->g_348 p_1492->g_393 p_1492->g_126 p_1492->g_320 p_1492->g_239 p_1492->g_564 p_1492->g_599 p_1492->g_602 p_1492->g_519 p_1492->l_comm_values p_1492->g_900 p_1492->g_1025 p_1492->g_872 p_1492->g_1046 p_1492->g_925.f1 p_1492->g_1039.f4
 */
struct S0  func_25(uint32_t  p_26, int32_t * p_27, struct S3 * p_1492)
{ /* block id: 14 */
    uint8_t *l_30 = &p_1492->g_31;
    int32_t l_613[2][7] = {{0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L}};
    int32_t *l_1058[8] = {&p_1492->g_51,(void*)0,&p_1492->g_51,&p_1492->g_51,(void*)0,&p_1492->g_51,&p_1492->g_51,(void*)0};
    VECTOR(int32_t, 2) l_1090 = (VECTOR(int32_t, 2))(0x48231F5FL, 9L);
    VECTOR(uint16_t, 8) l_1097 = (VECTOR(uint16_t, 8))(0x66C7L, (VECTOR(uint16_t, 4))(0x66C7L, (VECTOR(uint16_t, 2))(0x66C7L, 0UL), 0UL), 0UL, 0x66C7L, 0UL);
    VECTOR(int64_t, 16) l_1099 = (VECTOR(int64_t, 16))(0x27EEAA6E0185B506L, (VECTOR(int64_t, 4))(0x27EEAA6E0185B506L, (VECTOR(int64_t, 2))(0x27EEAA6E0185B506L, 0L), 0L), 0L, 0x27EEAA6E0185B506L, 0L, (VECTOR(int64_t, 2))(0x27EEAA6E0185B506L, 0L), (VECTOR(int64_t, 2))(0x27EEAA6E0185B506L, 0L), 0x27EEAA6E0185B506L, 0L, 0x27EEAA6E0185B506L, 0L);
    int64_t *l_1100 = &p_1492->g_239;
    uint16_t l_1102 = 0xF6B7L;
    int64_t l_1103[3];
    uint32_t *l_1105 = &p_1492->g_1081.f2;
    uint32_t **l_1104 = &l_1105;
    uint16_t l_1108 = 0UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1103[i] = 1L;
    if ((safe_mul_func_uint8_t_u_u((++(*l_30)), func_34((++p_1492->g_39[2]), func_42(func_48(l_30, p_1492), l_613[1][3], l_30, ((safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_1492->group_1_offset, get_group_id(1), 10), (((VECTOR(int32_t, 4))(0x05580BDEL, 1L, 0x3B1BBBA6L, (-1L))).y < (*p_27)))) , l_30), p_27, p_1492), p_1492->g_639, l_30, p_1492))))
    { /* block id: 419 */
        int32_t l_1032 = 0x322D1A49L;
        VECTOR(int8_t, 2) l_1053 = (VECTOR(int8_t, 2))(0x0AL, 0x1AL);
        int32_t l_1072 = 0x1476AF73L;
        int32_t l_1074 = 0x279CF64CL;
        uint16_t l_1075[10][10] = {{1UL,1UL,65533UL,1UL,0x1880L,1UL,65533UL,1UL,1UL,65533UL},{1UL,1UL,65533UL,1UL,0x1880L,1UL,65533UL,1UL,1UL,65533UL},{1UL,1UL,65533UL,1UL,0x1880L,1UL,65533UL,1UL,1UL,65533UL},{1UL,1UL,65533UL,1UL,0x1880L,1UL,65533UL,1UL,1UL,65533UL},{1UL,1UL,65533UL,1UL,0x1880L,1UL,65533UL,1UL,1UL,65533UL},{1UL,1UL,65533UL,1UL,0x1880L,1UL,65533UL,1UL,1UL,65533UL},{1UL,1UL,65533UL,1UL,0x1880L,1UL,65533UL,1UL,1UL,65533UL},{1UL,1UL,65533UL,1UL,0x1880L,1UL,65533UL,1UL,1UL,65533UL},{1UL,1UL,65533UL,1UL,0x1880L,1UL,65533UL,1UL,1UL,65533UL},{1UL,1UL,65533UL,1UL,0x1880L,1UL,65533UL,1UL,1UL,65533UL}};
        uint64_t *l_1086 = &p_1492->g_1039.f5;
        int i, j;
        for (p_1492->g_320 = (-17); (p_1492->g_320 <= (-23)); p_1492->g_320 = safe_sub_func_int8_t_s_s(p_1492->g_320, 7))
        { /* block id: 422 */
            int32_t *l_1030 = &p_1492->g_872[6][0][4];
            (*l_1030) = (-1L);
        }
        if ((p_1492->g_1031 , ((l_1032 | ((*p_1492->g_924)--)) > (-10L))))
        { /* block id: 426 */
            int64_t l_1044 = 0x1CE41B6033CEECEEL;
            for (p_1492->g_564 = (-2); (p_1492->g_564 > 44); p_1492->g_564++)
            { /* block id: 429 */
                for (p_1492->g_320 = 0; (p_1492->g_320 != 14); p_1492->g_320 = safe_add_func_uint16_t_u_u(p_1492->g_320, 3))
                { /* block id: 432 */
                    if ((*p_1492->g_153))
                    { /* block id: 433 */
                        (*p_1492->g_519) = (void*)0;
                        return p_1492->g_1039;
                    }
                    else
                    { /* block id: 436 */
                        int64_t *l_1040[2][1][10] = {{{&p_1492->g_239,(void*)0,(void*)0,&p_1492->g_239,&p_1492->g_239,(void*)0,(void*)0,&p_1492->g_239,&p_1492->g_239,(void*)0}},{{&p_1492->g_239,(void*)0,(void*)0,&p_1492->g_239,&p_1492->g_239,(void*)0,(void*)0,&p_1492->g_239,&p_1492->g_239,(void*)0}}};
                        int32_t l_1041 = 0x085796FEL;
                        int32_t *l_1043 = &p_1492->g_51;
                        int i, j, k;
                        (*p_1492->g_519) = (void*)0;
                        (*l_1043) = (((l_1041 = (0x02816D94L >= (*p_27))) , l_1041) <= (*p_27));
                    }
                    (*p_1492->g_519) = func_72(p_1492->g_177.x, l_1044, p_1492);
                }
                if ((*p_27))
                    continue;
            }
            p_1492->g_1046[0] = p_1492->g_1045;
        }
        else
        { /* block id: 446 */
            int64_t l_1073 = 0x2032ECD9F64935ADL;
            volatile struct S0 *l_1078 = &p_1492->g_925.f1;
            (*l_1078) = (((0x49896A16334E525BL <= 0x88A299B7426FD4EDL) , ((safe_mod_func_uint64_t_u_u(p_26, (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(l_1053.yyyyxyyxyyyyyxxy)).lo, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))((-1L), (l_1074 = ((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((p_27 != ((*p_1492->g_519) = (l_1058[0] = (*p_1492->g_174)))), 6)) || (safe_unary_minus_func_uint16_t_u((((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((*p_1492->g_924), (safe_sub_func_uint64_t_u_u(18446744073709551615UL, ((((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((((safe_div_func_int64_t_s_s((l_1032 <= (l_1072 ^= (*p_1492->g_924))), 0x36CBDE0664DEF2D8L)) || p_26) > 2L), l_1073)), 4)) , 0x02B79A69L) != 0x645349B2L) > GROUP_DIVERGE(0, 1)))))) < 18446744073709551606UL), p_1492->g_2)) > p_26) <= GROUP_DIVERGE(0, 1))))), (*p_27))) | 255UL)), p_26, ((VECTOR(int8_t, 4))(0x4EL)), 0x5CL, (-1L), ((VECTOR(int8_t, 4))((-8L))), ((VECTOR(int8_t, 2))(0x7BL)), 0x7AL)))).even, ((VECTOR(int8_t, 8))(1L))))).s05)).xxxyyyxx))).s53, ((VECTOR(int8_t, 2))(0x6BL)), ((VECTOR(int8_t, 2))(8L))))).xyxyyxxxxyxxxxyx, ((VECTOR(int8_t, 16))(0x41L))))).sd, 255UL)), l_1075[1][8])))) && (*p_27))) , p_1492->g_1076);
            for (l_1074 = 0; (l_1074 >= 16); ++l_1074)
            { /* block id: 454 */
                return p_1492->g_1081;
            }
            for (p_1492->g_1039.f4 = 8; (p_1492->g_1039.f4 == 27); p_1492->g_1039.f4 = safe_add_func_uint16_t_u_u(p_1492->g_1039.f4, 5))
            { /* block id: 459 */
                uint64_t *l_1085 = &p_1492->g_1039.f5;
                uint64_t **l_1084 = &l_1085;
                (*p_1492->g_519) = func_63((((*l_1084) = p_1492->g_228) != l_1086), p_26, p_1492);
            }
        }
    }
    else
    { /* block id: 464 */
        return p_1492->g_1087;
    }
    l_1108 ^= ((((safe_rshift_func_uint8_t_u_u((p_1492->g_644 , (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1090.xxyy)).even)).hi > (((((safe_mul_func_int16_t_s_s(p_1492->g_564, p_1492->g_1045.f5)) , (safe_mod_func_int32_t_s_s(0L, (safe_add_func_uint8_t_u_u(((!(*p_1492->g_924)) > ((VECTOR(uint16_t, 16))(l_1097.s6634400245464316)).sb), (~(((p_1492->g_1098 , p_1492->g_1039.f0) || (l_1103[2] = ((((*l_1100) = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_1099.s33ec8074)).hi)).z) | (p_1492->g_1101[0][1][0] , (l_1102 = (*p_1492->g_264)))) || p_26))) || p_26))))))) | p_1492->g_1039.f1) && 3UL) | 4L))), 6)) , l_1104) != p_1492->g_1106[0]) > 0x11B0L);
    return p_1492->g_1109;
}


/* ------------------------------------------ */
/* 
 * reads : p_1492->g_320 p_1492->g_172.f3 p_1492->g_519 p_1492->g_153 p_1492->g_9 p_1492->g_863 p_1492->g_264 p_1492->g_265 p_1492->g_708.f4 p_1492->l_comm_values p_1492->g_147 p_1492->g_126 p_1492->g_253 p_1492->g_708.f1 p_1492->g_39 p_1492->g_51 p_1492->g_652 p_1492->g_899 p_1492->g_1025 p_1492->g_244
 * writes: p_1492->g_320 p_1492->g_519 p_1492->l_comm_values p_1492->g_128 p_1492->g_900 p_1492->g_126 p_1492->g_1025
 */
int8_t  func_34(uint64_t  p_35, int8_t * p_36, int8_t * p_37, uint8_t * p_38, struct S3 * p_1492)
{ /* block id: 242 */
    VECTOR(int32_t, 2) l_664 = (VECTOR(int32_t, 2))(0x12E1E4C4L, 0x666AA1F0L);
    VECTOR(int32_t, 2) l_666 = (VECTOR(int32_t, 2))((-6L), (-1L));
    int64_t l_669[8][1] = {{3L},{3L},{3L},{3L},{3L},{3L},{3L},{3L}};
    int16_t l_681 = 1L;
    int32_t *l_683 = (void*)0;
    int32_t ***l_702 = &p_1492->g_519;
    uint32_t l_719 = 1UL;
    uint16_t *l_720 = &p_1492->g_128;
    uint32_t l_727[3];
    struct S0 *l_759[8][5][6] = {{{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]}},{{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]}},{{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]}},{{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]}},{{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]}},{{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]}},{{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]}},{{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]},{(void*)0,&p_1492->g_172[1],&p_1492->g_172[9],&p_1492->g_172[9],&p_1492->g_172[3],&p_1492->g_172[6]}}};
    int64_t l_839 = 0L;
    uint64_t l_840 = 1UL;
    VECTOR(int16_t, 8) l_847 = (VECTOR(int16_t, 8))(0x06E5L, (VECTOR(int16_t, 4))(0x06E5L, (VECTOR(int16_t, 2))(0x06E5L, 1L), 1L), 1L, 0x06E5L, 1L);
    VECTOR(int16_t, 4) l_848 = (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, (-9L)), (-9L));
    VECTOR(int16_t, 16) l_849 = (VECTOR(int16_t, 16))(0x3FEFL, (VECTOR(int16_t, 4))(0x3FEFL, (VECTOR(int16_t, 2))(0x3FEFL, 8L), 8L), 8L, 0x3FEFL, 8L, (VECTOR(int16_t, 2))(0x3FEFL, 8L), (VECTOR(int16_t, 2))(0x3FEFL, 8L), 0x3FEFL, 8L, 0x3FEFL, 8L);
    VECTOR(int16_t, 16) l_850 = (VECTOR(int16_t, 16))(0x482FL, (VECTOR(int16_t, 4))(0x482FL, (VECTOR(int16_t, 2))(0x482FL, 5L), 5L), 5L, 0x482FL, 5L, (VECTOR(int16_t, 2))(0x482FL, 5L), (VECTOR(int16_t, 2))(0x482FL, 5L), 0x482FL, 5L, 0x482FL, 5L);
    VECTOR(int8_t, 4) l_857 = (VECTOR(int8_t, 4))(0x1EL, (VECTOR(int8_t, 2))(0x1EL, 3L), 3L);
    VECTOR(uint16_t, 8) l_860 = (VECTOR(uint16_t, 8))(0x854BL, (VECTOR(uint16_t, 4))(0x854BL, (VECTOR(uint16_t, 2))(0x854BL, 0UL), 0UL), 0UL, 0x854BL, 0UL);
    int8_t **l_864 = &p_1492->g_639;
    int8_t l_865 = 0x7DL;
    uint8_t l_866 = 0xCBL;
    uint8_t l_873 = 1UL;
    VECTOR(uint16_t, 4) l_882 = (VECTOR(uint16_t, 4))(0xC920L, (VECTOR(uint16_t, 2))(0xC920L, 0x48A0L), 0x48A0L);
    uint16_t l_952 = 65526UL;
    uint16_t l_1005 = 8UL;
    int16_t l_1009 = 0x4E45L;
    int32_t l_1012[7][3][7] = {{{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L},{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L},{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L}},{{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L},{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L},{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L}},{{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L},{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L},{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L}},{{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L},{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L},{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L}},{{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L},{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L},{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L}},{{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L},{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L},{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L}},{{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L},{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L},{0L,0x2F3A1DE6L,0x62BD1703L,(-8L),0L,0x72B7C8C7L,0x2F3A1DE6L}}};
    uint32_t l_1014 = 4294967295UL;
    int32_t *l_1022 = &l_1012[4][1][1];
    int32_t *l_1023 = &p_1492->g_685;
    int32_t *l_1024[9][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_727[i] = 0UL;
    for (p_1492->g_320 = 8; (p_1492->g_320 > 23); p_1492->g_320 = safe_add_func_uint64_t_u_u(p_1492->g_320, 3))
    { /* block id: 245 */
        uint64_t l_670 = 0x6F65CD3D7BB8E5BEL;
        VECTOR(int64_t, 8) l_680 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
        VECTOR(int64_t, 16) l_690 = (VECTOR(int64_t, 16))(6L, (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 0x58AA4036BB113EA1L), 0x58AA4036BB113EA1L), 0x58AA4036BB113EA1L, 6L, 0x58AA4036BB113EA1L, (VECTOR(int64_t, 2))(6L, 0x58AA4036BB113EA1L), (VECTOR(int64_t, 2))(6L, 0x58AA4036BB113EA1L), 6L, 0x58AA4036BB113EA1L, 6L, 0x58AA4036BB113EA1L);
        int32_t *l_693 = (void*)0;
        int32_t ***l_703 = &p_1492->g_519;
        VECTOR(uint32_t, 8) l_704 = (VECTOR(uint32_t, 8))(6UL, (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 4294967293UL), 4294967293UL), 4294967293UL, 6UL, 4294967293UL);
        struct S0 *l_709 = &p_1492->g_172[3];
        int8_t l_726[1][7][3] = {{{6L,0x2AL,0x2AL},{6L,0x2AL,0x2AL},{6L,0x2AL,0x2AL},{6L,0x2AL,0x2AL},{6L,0x2AL,0x2AL},{6L,0x2AL,0x2AL},{6L,0x2AL,0x2AL}}};
        int32_t *l_836 = &p_1492->g_685;
        int32_t *l_837 = (void*)0;
        int32_t *l_838[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j, k;
        (1 + 1);
    }
    if ((safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 8))(l_847.s42372103)), ((VECTOR(int16_t, 8))((-9L), 0L, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(1L, (-1L))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(l_848.yzzx)), ((VECTOR(int16_t, 16))(l_849.se4b3772f18766384)).s353c))).even)), p_1492->g_172[3].f3, 0x468AL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), (-4L))).yyxy)).wxwwzyxx, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_850.sb906)), (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((***l_702) , (((((VECTOR(int8_t, 4))(l_857.wwww)).w < ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 8))((p_35 <= (&p_1492->g_602 == &p_1492->g_56)), ((&p_35 == ((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(l_860.s13104205)).s1, (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(p_1492->g_863.s5143074474767572)).s1abc)).w, FAKE_DIVERGE(p_1492->local_1_offset, get_local_id(1), 10))))) , p_1492->g_264)) || ((((VECTOR(uint16_t, 16))((l_864 != ((((void*)0 == &l_702) > (*p_1492->g_264)) , l_864)), p_1492->g_708.f4, ((VECTOR(uint16_t, 8))(1UL)), ((VECTOR(uint16_t, 2))(0x37C8L)), p_35, 0x6CDCL, 7UL, 0x306DL)).sd & l_865) & GROUP_DIVERGE(1, 1))), 0x3DL, ((VECTOR(uint8_t, 2))(0x30L)), ((VECTOR(uint8_t, 2))(0x87L)), 0x93L)), ((VECTOR(uint8_t, 8))(1UL))))).s7) ^ (***l_702)) || 0L)), l_866)), 5)) ^ 0xAC2022A8L), 10)), ((VECTOR(int16_t, 2))(0x5051L)), 1L))))).even)))).s5060105204060233, ((VECTOR(int16_t, 16))((-1L)))))).s23)).xyxy)), (-5L), 0x331EL)).s13, ((VECTOR(int16_t, 2))((-1L)))))), 0L, 0x60FFL, 0L, (-8L)))))).s0 & 0x45A6L), 1)), p_1492->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1492->tid, 91))])))
    { /* block id: 356 */
        int16_t l_867[4];
        int32_t *l_868 = &p_1492->g_320;
        int32_t *l_869 = (void*)0;
        int32_t *l_870[10] = {&p_1492->g_9,&p_1492->g_9,&p_1492->g_9,&p_1492->g_9,&p_1492->g_9,&p_1492->g_9,&p_1492->g_9,&p_1492->g_9,&p_1492->g_9,&p_1492->g_9};
        int64_t l_871 = 5L;
        int i;
        for (i = 0; i < 4; i++)
            l_867[i] = 0x50DFL;
        --l_873;
    }
    else
    { /* block id: 358 */
        VECTOR(uint16_t, 8) l_876 = (VECTOR(uint16_t, 8))(0x3AAFL, (VECTOR(uint16_t, 4))(0x3AAFL, (VECTOR(uint16_t, 2))(0x3AAFL, 3UL), 3UL), 3UL, 0x3AAFL, 3UL);
        VECTOR(uint16_t, 16) l_877 = (VECTOR(uint16_t, 16))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0xD808L), 0xD808L), 0xD808L, 65533UL, 0xD808L, (VECTOR(uint16_t, 2))(65533UL, 0xD808L), (VECTOR(uint16_t, 2))(65533UL, 0xD808L), 65533UL, 0xD808L, 65533UL, 0xD808L);
        int32_t **l_883 = &p_1492->g_737[1][1];
        int8_t *l_890 = (void*)0;
        int8_t *l_891[3];
        int32_t l_892 = 0x192A600CL;
        int64_t *l_893[6];
        VECTOR(int32_t, 16) l_955 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
        uint8_t l_995 = 255UL;
        int8_t l_1013 = 0L;
        int i;
        for (i = 0; i < 3; i++)
            l_891[i] = &l_865;
        for (i = 0; i < 6; i++)
            l_893[i] = &l_839;
        l_664.x = ((p_1492->g_147[2][0][6] <= p_1492->g_126[0]) < ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_876.s2056227123154604)).sfa)), 0xE205L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_877.s8840)).wzyyzwwx)).lo)).odd)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(65535UL, 0UL)).yyxx, ((VECTOR(uint16_t, 4))((l_877.sb < 1L), 0x23C7L, 65527UL, 1UL))))).hi)), 0UL, (~((p_1492->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1492->tid, 91))] = ((safe_lshift_func_int8_t_s_u(((safe_div_func_int64_t_s_s(((!((((+((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 8))(l_882.wzywyyxw)).s5252206257164441))), (uint16_t)((+(((*l_702) = (*l_702)) != l_883)) < p_35)))))).s9) >= (((((((p_1492->g_253 , (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))((-3L), ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 2))(0x68L, 0x48L)).xxxxyyyx, (int8_t)(l_892 = p_35)))).s17, ((VECTOR(int8_t, 2))(0x4DL))))), p_1492->g_708.f1, ((VECTOR(int8_t, 8))(1L)), ((VECTOR(int8_t, 4))(0x17L)))).sa, p_1492->g_39[2])) , p_35), GROUP_DIVERGE(0, 1))) || (*p_1492->g_153)), p_35)), ((VECTOR(uint16_t, 4))(65535UL)), ((VECTOR(uint16_t, 2))(0xE560L)), 0x170DL)).s2507241202514117)).s3 , 0x20D841F5L)) , FAKE_DIVERGE(p_1492->global_0_offset, get_global_id(0), 10)) <= l_877.sb) , p_35) >= 0x6977L) , p_1492->g_51) != p_35)) | 0L) , (*p_1492->g_153))) != p_35), p_1492->g_147[2][0][6])) <= 0xEC12L), 0)) <= p_1492->g_652.z)) <= GROUP_DIVERGE(0, 1))), ((VECTOR(uint16_t, 4))(65535UL)), ((VECTOR(uint16_t, 2))(1UL)), 2UL)).s2, 0x197AL, ((VECTOR(uint16_t, 8))(0x209DL)), p_35, ((VECTOR(uint16_t, 4))(0UL)), 0xC7F6L)))))).s4);
        if ((***l_702))
        { /* block id: 363 */
            uint32_t l_920 = 1UL;
            uint16_t *l_934 = &p_1492->g_564;
            uint32_t l_971 = 1UL;
            int32_t l_999 = 0x18E4164AL;
            uint64_t l_1004 = 0x6E3491EA3F8038EEL;
            int32_t *l_1008[4][2][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
            int8_t l_1010 = (-1L);
            int i, j, k;
            for (l_866 = 0; (l_866 != 13); l_866 = safe_add_func_int32_t_s_s(l_866, 1))
            { /* block id: 366 */
                uint32_t l_898[2];
                int8_t *l_911 = (void*)0;
                int8_t *l_912 = (void*)0;
                int32_t *l_918 = (void*)0;
                int32_t *l_919 = (void*)0;
                struct S0 **l_963 = &l_759[1][4][5];
                int32_t l_998 = 0L;
                int32_t l_1002[6];
                int32_t *l_1003[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_898[i] = 0x943322C5L;
                for (i = 0; i < 6; i++)
                    l_1002[i] = (-1L);
                for (i = 0; i < 2; i++)
                    l_1003[i] = &p_1492->g_320;
                for (p_1492->g_128 = (-16); (p_1492->g_128 >= 59); p_1492->g_128 = safe_add_func_int16_t_s_s(p_1492->g_128, 7))
                { /* block id: 369 */
                    l_898[1] = 0L;
                    p_1492->g_900[6][1][1] = p_1492->g_899;
                }
            }
            --l_1014;
            return p_1492->g_652.y;
        }
        else
        { /* block id: 404 */
            for (l_952 = 0; (l_952 < 40); l_952 = safe_add_func_uint64_t_u_u(l_952, 7))
            { /* block id: 407 */
                uint8_t *l_1019 = &p_1492->g_126[0];
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1492->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 91)), permutations[(safe_mod_func_uint32_t_u_u((((*l_1019)++) < 0x7EL), 10))][(safe_mod_func_uint32_t_u_u(p_1492->tid, 91))]));
                if (p_35)
                    continue;
            }
        }
    }
    (*l_1022) ^= p_35;
    ++p_1492->g_1025;
    return p_1492->g_244[1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1492->g_152 p_1492->g_153 p_1492->g_519 p_1492->g_2 p_1492->g_92 p_1492->g_51 p_1492->g_9 p_1492->g_629 p_1492->g_126 p_1492->g_177 p_1492->g_4 p_1492->g_320 p_1492->g_639
 * writes: p_1492->g_153 p_1492->g_51 p_1492->g_320
 */
int8_t * func_42(uint8_t * p_43, int32_t  p_44, int8_t * p_45, int8_t * p_46, int32_t * p_47, struct S3 * p_1492)
{ /* block id: 233 */
    uint16_t l_616 = 0x32B9L;
    int32_t *l_623 = (void*)0;
    int32_t *l_624[7][10] = {{&p_1492->g_4,(void*)0,&p_1492->g_4,&p_1492->g_4,(void*)0,&p_1492->g_4,&p_1492->g_4,&p_1492->g_4,&p_1492->g_320,(void*)0},{&p_1492->g_4,(void*)0,&p_1492->g_4,&p_1492->g_4,(void*)0,&p_1492->g_4,&p_1492->g_4,&p_1492->g_4,&p_1492->g_320,(void*)0},{&p_1492->g_4,(void*)0,&p_1492->g_4,&p_1492->g_4,(void*)0,&p_1492->g_4,&p_1492->g_4,&p_1492->g_4,&p_1492->g_320,(void*)0},{&p_1492->g_4,(void*)0,&p_1492->g_4,&p_1492->g_4,(void*)0,&p_1492->g_4,&p_1492->g_4,&p_1492->g_4,&p_1492->g_320,(void*)0},{&p_1492->g_4,(void*)0,&p_1492->g_4,&p_1492->g_4,(void*)0,&p_1492->g_4,&p_1492->g_4,&p_1492->g_4,&p_1492->g_320,(void*)0},{&p_1492->g_4,(void*)0,&p_1492->g_4,&p_1492->g_4,(void*)0,&p_1492->g_4,&p_1492->g_4,&p_1492->g_4,&p_1492->g_320,(void*)0},{&p_1492->g_4,(void*)0,&p_1492->g_4,&p_1492->g_4,(void*)0,&p_1492->g_4,&p_1492->g_4,&p_1492->g_4,&p_1492->g_320,(void*)0}};
    uint32_t l_625 = 0xEACEE6F1L;
    VECTOR(int32_t, 8) l_626 = (VECTOR(int32_t, 8))(0x34062AE0L, (VECTOR(int32_t, 4))(0x34062AE0L, (VECTOR(int32_t, 2))(0x34062AE0L, 0x4F565B7FL), 0x4F565B7FL), 0x4F565B7FL, 0x34062AE0L, 0x4F565B7FL);
    uint32_t l_630 = 0xDF6EB651L;
    uint32_t l_631 = 0xEEA2E3D8L;
    VECTOR(int32_t, 4) l_636 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x57C54310L), 0x57C54310L);
    int8_t *l_638 = (void*)0;
    int8_t **l_637 = &l_638;
    int i, j;
    (*p_1492->g_519) = (*p_1492->g_152);
    p_1492->g_51 |= (l_625 = ((~((VECTOR(int64_t, 8))(l_616, ((safe_mul_func_uint8_t_u_u(0xBDL, ((p_44 & l_616) , ((safe_div_func_int8_t_s_s((((((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x32L, (-1L), 0x5AL, 0x33L, 8L, ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x28L, 0x6AL)).xxxyyyyxyyyyxxxy)).hi, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))(0L, 1L, p_1492->g_2, ((VECTOR(int8_t, 2))((-1L))), 0x3AL, 0L, l_616, 0x68L, 0L, ((VECTOR(int8_t, 2))(0x70L)), ((VECTOR(int8_t, 4))(0x1CL))))))).s1c, ((VECTOR(int8_t, 2))((-6L)))))).yyxyyxyx))), 2L, 0x23L, (-6L))))).hi)).s3, l_616)) > l_616) < (-1L)) && l_616) , p_1492->g_92.s7), (-8L))) , 1UL)))) < 0x1549L), 1L, 0x045049153BC1156AL, ((VECTOR(int64_t, 4))(0x23E42E8939649B50L)))).s5) >= l_616));
    p_1492->g_320 &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0x2FA66DD6L, (-1L))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))((-2L), 0x0677C8B0L)).yyyxyxyy))).odd)).odd, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(0x4CFEE243L, ((VECTOR(int32_t, 8))(l_626.s31411706)), (safe_rshift_func_uint16_t_u_s(((p_44 & ((*p_47) >= (l_630 = (p_1492->g_629 , 0x168D88BDL)))) & (l_631 = (p_44 != p_44))), (((p_44 ^ (safe_mod_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(p_1492->g_126[0], ((((*l_637) = (((((VECTOR(int32_t, 2))((-7L), 0x76734378L)).hi == ((VECTOR(int32_t, 4))(l_636.yyzx)).z) , (p_1492->g_126[0] & p_1492->g_177.x)) , p_46)) == (void*)0) != p_44))) > p_1492->g_4), GROUP_DIVERGE(1, 1)))) , 0x45737D0A5A8583FCL) || p_1492->g_9))), 9L, 9L, ((VECTOR(int32_t, 2))((-2L))), 0x321676A3L, (-1L))).even, (int32_t)(*p_47), (int32_t)0x23F61AA2L))).s06))))).xyyy)))).lo)).even;
    return p_1492->g_639;
}


/* ------------------------------------------ */
/* 
 * reads : p_1492->g_56 p_1492->g_comm_values p_1492->g_2 p_1492->g_83 p_1492->g_92 p_1492->g_145 p_1492->g_51 p_1492->g_152 p_1492->g_160 p_1492->g_165 p_1492->g_174 p_1492->g_172.f2 p_1492->g_172.f4 p_1492->g_153 p_1492->g_193 p_1492->g_3 p_1492->g_172 p_1492->g_244 p_1492->g_253 p_1492->g_228 p_1492->g_229 p_1492->g_264 p_1492->g_9 p_1492->g_224 p_1492->g_102 p_1492->g_150 p_1492->g_128 p_1492->g_126 p_1492->g_348 p_1492->g_320 p_1492->g_312 p_1492->g_124 p_1492->g_239 p_1492->g_147 p_1492->l_comm_values p_1492->g_494 p_1492->g_83.f0 p_1492->g_564 p_1492->g_579 p_1492->g_599 p_1492->g_602 p_1492->g_519
 * writes: p_1492->g_56 p_1492->g_51 p_1492->g_153 p_1492->g_160 p_1492->g_173 p_1492->g_172.f4 p_1492->g_2 p_1492->g_193 p_1492->g_172 p_1492->g_244 p_1492->g_128 p_1492->g_312 p_1492->g_102 p_1492->g_348 p_1492->g_393 p_1492->g_126 p_1492->g_320 p_1492->g_239 p_1492->g_564 p_1492->g_599 p_1492->g_602
 */
uint8_t * func_48(uint8_t * p_49, struct S3 * p_1492)
{ /* block id: 17 */
    int32_t *l_50 = &p_1492->g_51;
    int32_t *l_52 = &p_1492->g_51;
    int32_t *l_53 = &p_1492->g_51;
    int32_t *l_54 = &p_1492->g_51;
    int32_t *l_55[2];
    VECTOR(int16_t, 4) l_77 = (VECTOR(int16_t, 4))(0x0A2CL, (VECTOR(int16_t, 2))(0x0A2CL, 0L), 0L);
    int8_t *l_321 = (void*)0;
    uint16_t l_607 = 0x676EL;
    uint16_t *l_612[9][6] = {{&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128},{&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128},{&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128},{&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128},{&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128},{&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128},{&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128},{&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128},{&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_55[i] = &p_1492->g_51;
    --p_1492->g_56;
    for (p_1492->g_56 = 0; (p_1492->g_56 == 10); p_1492->g_56 = safe_add_func_uint32_t_u_u(p_1492->g_56, 5))
    { /* block id: 21 */
        VECTOR(int16_t, 2) l_76 = (VECTOR(int16_t, 2))(0x4213L, 0x6C3AL);
        int32_t *l_319 = &p_1492->g_320;
        int i;
        for (p_1492->g_51 = 0; (p_1492->g_51 > (-27)); p_1492->g_51 = safe_sub_func_uint8_t_u_u(p_1492->g_51, 9))
        { /* block id: 24 */
            int64_t l_75 = 0x5184BF4D80A99235L;
            VECTOR(int16_t, 4) l_78 = (VECTOR(int16_t, 4))(0x7151L, (VECTOR(int16_t, 2))(0x7151L, 0L), 0L);
            int32_t **l_318[8] = {&l_50,&l_55[1],&l_50,&l_50,&l_55[1],&l_50,&l_50,&l_55[1]};
            int i;
            (*p_1492->g_519) = func_63(func_66((+p_1492->g_comm_values[p_1492->tid]), p_1492->g_comm_values[p_1492->tid], (l_319 = func_72((p_1492->g_2 > l_75), (l_75 < ((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_76.xyyyxyyx)).s0717024772567705)))), ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))(l_77.ywyw)).zyzyywyx, ((VECTOR(int16_t, 4))(l_78.yxxx)).yxwxxyww))).s7041645144535571))).sc), p_1492)), l_321, (safe_mul_func_int8_t_s_s(2L, l_76.y)), p_1492), l_76.x, p_1492);
            for (l_75 = 0; (l_75 != 2); l_75 = safe_add_func_uint16_t_u_u(l_75, 1))
            { /* block id: 224 */
                l_607++;
            }
        }
    }
    (*p_1492->g_519) = func_63((p_1492->g_128 |= (p_1492->g_564--)), ((*l_53) || 0x6BB257D9L), p_1492);
    return l_321;
}


/* ------------------------------------------ */
/* 
 * reads : p_1492->g_320 p_1492->g_577 p_1492->g_579 p_1492->g_393 p_1492->g_172.f0 p_1492->g_224 p_1492->g_9 p_1492->g_599 p_1492->g_602
 * writes: p_1492->g_320 p_1492->g_393 p_1492->g_312 p_1492->g_599 p_1492->g_602
 */
int32_t * func_63(uint16_t  p_64, int32_t  p_65, struct S3 * p_1492)
{ /* block id: 210 */
    VECTOR(uint8_t, 16) l_573 = (VECTOR(uint8_t, 16))(0x22L, (VECTOR(uint8_t, 4))(0x22L, (VECTOR(uint8_t, 2))(0x22L, 0x3EL), 0x3EL), 0x3EL, 0x22L, 0x3EL, (VECTOR(uint8_t, 2))(0x22L, 0x3EL), (VECTOR(uint8_t, 2))(0x22L, 0x3EL), 0x22L, 0x3EL, 0x22L, 0x3EL);
    VECTOR(int16_t, 8) l_576 = (VECTOR(int16_t, 8))(0x7E71L, (VECTOR(int16_t, 4))(0x7E71L, (VECTOR(int16_t, 2))(0x7E71L, 0x606CL), 0x606CL), 0x606CL, 0x7E71L, 0x606CL);
    int32_t ***l_580[1][9][4] = {{{(void*)0,&p_1492->g_519,&p_1492->g_519,&p_1492->g_519},{(void*)0,&p_1492->g_519,&p_1492->g_519,&p_1492->g_519},{(void*)0,&p_1492->g_519,&p_1492->g_519,&p_1492->g_519},{(void*)0,&p_1492->g_519,&p_1492->g_519,&p_1492->g_519},{(void*)0,&p_1492->g_519,&p_1492->g_519,&p_1492->g_519},{(void*)0,&p_1492->g_519,&p_1492->g_519,&p_1492->g_519},{(void*)0,&p_1492->g_519,&p_1492->g_519,&p_1492->g_519},{(void*)0,&p_1492->g_519,&p_1492->g_519,&p_1492->g_519},{(void*)0,&p_1492->g_519,&p_1492->g_519,&p_1492->g_519}}};
    int32_t ***l_581 = &p_1492->g_519;
    VECTOR(int16_t, 16) l_583 = (VECTOR(int16_t, 16))(0x5E58L, (VECTOR(int16_t, 4))(0x5E58L, (VECTOR(int16_t, 2))(0x5E58L, 0x1C1AL), 0x1C1AL), 0x1C1AL, 0x5E58L, 0x1C1AL, (VECTOR(int16_t, 2))(0x5E58L, 0x1C1AL), (VECTOR(int16_t, 2))(0x5E58L, 0x1C1AL), 0x5E58L, 0x1C1AL, 0x5E58L, 0x1C1AL);
    VECTOR(int16_t, 4) l_590 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 9L), 9L);
    VECTOR(uint64_t, 2) l_592 = (VECTOR(uint64_t, 2))(5UL, 0x08D656E2CD68C35CL);
    int64_t l_600 = 7L;
    VECTOR(int8_t, 2) l_601 = (VECTOR(int8_t, 2))(0x62L, (-10L));
    int i, j, k;
    for (p_1492->g_320 = (-12); (p_1492->g_320 == 22); p_1492->g_320 = safe_add_func_int16_t_s_s(p_1492->g_320, 5))
    { /* block id: 213 */
        uint32_t l_578 = 0UL;
        int32_t ****l_582 = &l_581;
        int16_t *l_584 = (void*)0;
        int16_t *l_585 = (void*)0;
        int16_t *l_586 = (void*)0;
        int16_t *l_587 = (void*)0;
        int16_t *l_588 = (void*)0;
        int16_t *l_589 = &p_1492->g_393;
        VECTOR(uint64_t, 16) l_591 = (VECTOR(uint64_t, 16))(0x09B3BBBB0B33ED25L, (VECTOR(uint64_t, 4))(0x09B3BBBB0B33ED25L, (VECTOR(uint64_t, 2))(0x09B3BBBB0B33ED25L, 0x48794066C48FBAFEL), 0x48794066C48FBAFEL), 0x48794066C48FBAFEL, 0x09B3BBBB0B33ED25L, 0x48794066C48FBAFEL, (VECTOR(uint64_t, 2))(0x09B3BBBB0B33ED25L, 0x48794066C48FBAFEL), (VECTOR(uint64_t, 2))(0x09B3BBBB0B33ED25L, 0x48794066C48FBAFEL), 0x09B3BBBB0B33ED25L, 0x48794066C48FBAFEL, 0x09B3BBBB0B33ED25L, 0x48794066C48FBAFEL);
        int32_t l_593 = 0x736D27ADL;
        int16_t *l_594 = (void*)0;
        int16_t *l_595 = (void*)0;
        int16_t *l_596 = (void*)0;
        int16_t *l_597 = (void*)0;
        int16_t *l_598 = &p_1492->g_312;
        int i;
        p_1492->g_599 ^= (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))((safe_mul_func_int16_t_s_s(((((VECTOR(uint8_t, 2))(l_573.sfb)).even ^ p_64) == (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 2))(l_576.s66)).xxxxyxxxxxyyxyyy))), ((VECTOR(int16_t, 8))(p_1492->g_577.s30201010)).s5467473664113230))).s8, l_578))), ((VECTOR(int16_t, 8))(p_1492->g_579.xyxyxxxx)).s3)), (l_580[0][2][0] == ((*l_582) = l_581)), (-1L), 0x207AL, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_583.s534825d755bfacab)))).sc, (((*l_589) ^= p_65) ^ ((*l_598) = ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((-2L), p_1492->g_172[3].f0, 0x67ACL, ((VECTOR(int16_t, 8))(l_590.wyzxxyzw)), 0x10B4L, (p_65 < (((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 2))(0x658EB01B168D2764L, 0x0E1AE52B988724AAL)).yyyxxxyxxxxxyxyy, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 2))(4UL, 18446744073709551613UL)).xyyyyxxxyyxyxyxy, ((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 2))(0x7C5653EC302EDCC4L, 1UL)).yyyxyxxyxxyyxyxx, ((VECTOR(uint64_t, 8))(l_591.s1fc0a3f5)).s4010747514523056, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 8))(l_592.xxxxxyyy)).s70, ((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 16))(abs(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0x5D8D73CA545B2873L, 0x12B3E6F98E227741L)))), (uint64_t)(p_1492->g_224.x , p_64)))).yyyyxxxyxxyyxxyx, ((VECTOR(uint64_t, 16))(18446744073709551608UL)))))))).s8991, ((VECTOR(uint64_t, 4))(18446744073709551614UL)), ((VECTOR(uint64_t, 4))(1UL))))).lo))), ((VECTOR(uint64_t, 4))(0UL)), ((VECTOR(uint64_t, 8))(0xA0BB51D52C0BCEEFL)), 0xCB8C0EA4C4FE8095L, 18446744073709551613UL))))).even, ((VECTOR(uint64_t, 8))(18446744073709551609UL))))).s3605600564110513))))).s24, ((VECTOR(uint64_t, 2))(0xA321071777816519L))))).xxxyyxxxxxyyyxxy)).s7f)).xxxyyxxxyxyxyxxx))).s2 , p_1492->g_9)), l_593, 1L, 3L)))).s1)), l_578, 5L, ((VECTOR(int16_t, 4))((-1L))), 0x100EL, 0x108AL, 6L, 0x225BL)).s5, p_1492->g_579.x));
    }
    p_1492->g_602--;
    return &p_1492->g_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_1492->g_348 p_1492->g_320 p_1492->g_312 p_1492->g_172.f2 p_1492->g_224 p_1492->g_124 p_1492->g_239 p_1492->g_147 p_1492->g_172.f0 p_1492->g_126 p_1492->l_comm_values p_1492->g_145 p_1492->g_494 p_1492->g_150 p_1492->g_172.f6 p_1492->g_83.f0 p_1492->g_564
 * writes: p_1492->g_102 p_1492->g_348 p_1492->g_312 p_1492->g_172.f2 p_1492->g_393 p_1492->g_126 p_1492->g_320 p_1492->g_172 p_1492->g_239 p_1492->g_564
 */
uint16_t  func_66(uint64_t  p_67, int32_t  p_68, int32_t * p_69, int8_t * p_70, uint32_t  p_71, struct S3 * p_1492)
{ /* block id: 116 */
    int32_t l_328 = (-9L);
    int32_t l_340 = 0L;
    int32_t l_342 = 0x6D556F37L;
    int32_t l_347[8][10] = {{0x47C2ADE9L,(-10L),0L,0x785DDD06L,0x1228AD69L,0x47C2ADE9L,0x785DDD06L,0x322AB5E9L,0x785DDD06L,0x47C2ADE9L},{0x47C2ADE9L,(-10L),0L,0x785DDD06L,0x1228AD69L,0x47C2ADE9L,0x785DDD06L,0x322AB5E9L,0x785DDD06L,0x47C2ADE9L},{0x47C2ADE9L,(-10L),0L,0x785DDD06L,0x1228AD69L,0x47C2ADE9L,0x785DDD06L,0x322AB5E9L,0x785DDD06L,0x47C2ADE9L},{0x47C2ADE9L,(-10L),0L,0x785DDD06L,0x1228AD69L,0x47C2ADE9L,0x785DDD06L,0x322AB5E9L,0x785DDD06L,0x47C2ADE9L},{0x47C2ADE9L,(-10L),0L,0x785DDD06L,0x1228AD69L,0x47C2ADE9L,0x785DDD06L,0x322AB5E9L,0x785DDD06L,0x47C2ADE9L},{0x47C2ADE9L,(-10L),0L,0x785DDD06L,0x1228AD69L,0x47C2ADE9L,0x785DDD06L,0x322AB5E9L,0x785DDD06L,0x47C2ADE9L},{0x47C2ADE9L,(-10L),0L,0x785DDD06L,0x1228AD69L,0x47C2ADE9L,0x785DDD06L,0x322AB5E9L,0x785DDD06L,0x47C2ADE9L},{0x47C2ADE9L,(-10L),0L,0x785DDD06L,0x1228AD69L,0x47C2ADE9L,0x785DDD06L,0x322AB5E9L,0x785DDD06L,0x47C2ADE9L}};
    int32_t l_391[8] = {0x6146903EL,0x5AD5285AL,0x6146903EL,0x6146903EL,0x5AD5285AL,0x6146903EL,0x6146903EL,0x5AD5285AL};
    int32_t **l_414 = &p_1492->g_153;
    uint64_t *l_417 = &p_1492->g_229;
    uint8_t *l_504 = &p_1492->g_126[0];
    int i, j;
    for (p_67 = 0; (p_67 == 48); p_67 = safe_add_func_uint16_t_u_u(p_67, 6))
    { /* block id: 119 */
        uint8_t l_369[8][2][8] = {{{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL},{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL}},{{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL},{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL}},{{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL},{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL}},{{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL},{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL}},{{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL},{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL}},{{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL},{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL}},{{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL},{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL}},{{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL},{0x77L,7UL,1UL,0xD2L,1UL,7UL,0x77L,0x1FL}}};
        uint16_t *l_389 = &p_1492->g_128;
        int32_t l_400 = 0L;
        VECTOR(int16_t, 16) l_527 = (VECTOR(int16_t, 16))(0x738BL, (VECTOR(int16_t, 4))(0x738BL, (VECTOR(int16_t, 2))(0x738BL, 0L), 0L), 0L, 0x738BL, 0L, (VECTOR(int16_t, 2))(0x738BL, 0L), (VECTOR(int16_t, 2))(0x738BL, 0L), 0x738BL, 0L, 0x738BL, 0L);
        int32_t *l_545 = (void*)0;
        int32_t *l_546 = &l_347[6][0];
        int32_t *l_547 = &l_342;
        int32_t *l_548 = &l_342;
        int32_t *l_549 = &l_347[6][0];
        int32_t *l_550 = &l_342;
        int32_t *l_551 = &p_1492->g_320;
        int32_t l_552 = 0x46E65CF4L;
        int32_t *l_553 = &l_347[0][9];
        int32_t *l_554 = &l_342;
        int32_t *l_555 = &l_340;
        int32_t *l_556 = &l_400;
        int32_t *l_557 = &p_1492->g_320;
        int32_t *l_558 = &p_1492->g_320;
        int32_t *l_559 = &l_347[6][0];
        int32_t *l_560 = &l_342;
        int32_t *l_561 = &l_552;
        int32_t *l_562 = &l_400;
        int32_t *l_563[7] = {&p_1492->g_320,&l_342,&p_1492->g_320,&p_1492->g_320,&l_342,&p_1492->g_320,&p_1492->g_320};
        int i, j, k;
        for (p_1492->g_102 = 3; (p_1492->g_102 > 26); p_1492->g_102++)
        { /* block id: 122 */
            int32_t *l_329 = &p_1492->g_320;
            int32_t *l_330 = &p_1492->g_320;
            int32_t l_331 = 0x65642EEFL;
            int32_t *l_332 = &p_1492->g_320;
            int32_t *l_333 = &l_331;
            int32_t l_334 = 0x44F9A4B6L;
            int32_t *l_335 = &p_1492->g_320;
            int32_t *l_336 = &l_334;
            int32_t *l_337 = &l_334;
            int32_t *l_338 = &l_331;
            int32_t *l_339 = &l_334;
            int32_t *l_341 = (void*)0;
            int32_t *l_343 = &p_1492->g_320;
            int32_t l_344 = (-10L);
            int32_t *l_345 = &l_331;
            int32_t *l_346[7][1];
            int64_t l_496 = 0x2A64BFA430EAFAA5L;
            int16_t l_498 = (-5L);
            VECTOR(int32_t, 8) l_505 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x0D1D5D50L), 0x0D1D5D50L), 0x0D1D5D50L, 4L, 0x0D1D5D50L);
            int64_t l_540 = 0L;
            uint64_t *l_541[6] = {&p_1492->g_229,&p_1492->g_229,&p_1492->g_229,&p_1492->g_229,&p_1492->g_229,&p_1492->g_229};
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_346[i][j] = &p_1492->g_320;
            }
            --p_1492->g_348;
            if ((*l_335))
            { /* block id: 124 */
                VECTOR(uint8_t, 8) l_351 = (VECTOR(uint8_t, 8))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 1UL), 1UL), 1UL, 7UL, 1UL);
                int32_t l_362 = 0x7B2FF83FL;
                int32_t l_374 = 0x21CFF75EL;
                VECTOR(uint32_t, 4) l_401 = (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 0xD583302DL), 0xD583302DL);
                int64_t l_413 = 0x6B220C77411E9B50L;
                int32_t **l_416[3][10] = {{&l_337,&l_337,&l_332,&l_346[1][0],&l_329,&l_346[1][0],&l_332,&l_337,&l_337,&l_332},{&l_337,&l_337,&l_332,&l_346[1][0],&l_329,&l_346[1][0],&l_332,&l_337,&l_337,&l_332},{&l_337,&l_337,&l_332,&l_346[1][0],&l_329,&l_346[1][0],&l_332,&l_337,&l_337,&l_332}};
                int32_t ***l_415 = &l_416[0][9];
                uint8_t *l_418 = &p_1492->g_126[0];
                uint32_t l_501[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_501[i] = 0UL;
                if (l_351.s0)
                { /* block id: 125 */
                    int16_t *l_356 = &p_1492->g_312;
                    int8_t *l_359 = (void*)0;
                    int8_t *l_360 = (void*)0;
                    int8_t *l_361[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    uint32_t *l_370 = &p_1492->g_172[3].f2;
                    VECTOR(int32_t, 8) l_373 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x12E4BD75L), 0x12E4BD75L), 0x12E4BD75L, (-1L), 0x12E4BD75L);
                    int i;
                    atomic_max(&p_1492->g_atomic_reduction[get_linear_group_id()], ((FAKE_DIVERGE(p_1492->local_0_offset, get_local_id(0), 10) <= ((safe_div_func_int16_t_s_s(((*l_356) ^= 0x0F93L), p_71)) <= (safe_sub_func_uint8_t_u_u((((0x06L == (l_362 = (-7L))) || l_351.s1) < (((safe_mul_func_int16_t_s_s((l_374 = (((safe_mul_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s(l_369[7][0][1], l_351.s5)) | ((*l_370) |= 0x14CC09B5L)) < ((safe_lshift_func_uint8_t_u_u(((0xB515L | p_1492->g_224.y) | l_373.s7), l_347[6][0])) >= 4UL)) <= p_1492->g_124[0]), l_373.s3)) == p_1492->g_239) > p_1492->g_147[2][0][6])), FAKE_DIVERGE(p_1492->global_1_offset, get_global_id(1), 10))) & GROUP_DIVERGE(0, 1)) | 8L)), p_67)))) , 0x3326C4E5L));
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1492->v_collective += p_1492->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                }
                else
                { /* block id: 131 */
                    int16_t *l_379 = (void*)0;
                    int16_t *l_380 = &p_1492->g_312;
                    int32_t l_390 = 0x121A94D5L;
                    int16_t *l_392 = &p_1492->g_393;
                    l_342 |= (safe_lshift_func_int16_t_s_u(((*l_392) = (FAKE_DIVERGE(p_1492->local_2_offset, get_local_id(2), 10) | ((((-1L) || p_1492->g_172[3].f0) > 4UL) < (((*l_380) = 0x73F8L) <= (safe_sub_func_int16_t_s_s((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))((((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 4))(0x28L, (+(+(safe_lshift_func_int8_t_s_u((l_389 != (void*)0), 1)))), (-4L), 0L)).zzwwxyxxxxwywxxx))).s9ef5, (int8_t)((((((FAKE_DIVERGE(p_1492->group_1_offset, get_group_id(1), 10) & l_328) || p_67) <= 1UL) | l_347[6][0]) >= p_67) & 0x0B2D8139E0D04261L), (int8_t)0x68L))).y == p_1492->g_172[3].f6) & l_390), (*p_69))), p_68)) , GROUP_DIVERGE(1, 1)) < 0xACL), p_1492->g_224.x, p_1492->g_177.y, 0x0EL, 2L, ((VECTOR(int8_t, 2))(0x69L)), 0L)).s4751166476235670, ((VECTOR(int8_t, 16))(0x78L))))).even)).s36)).odd >= l_391[3]), p_1492->g_126[0])))))), p_71));
                }
                (*l_333) = (safe_mul_func_uint16_t_u_u(1UL, (p_1492->g_124[1] && ((*l_418) &= (((safe_sub_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((l_400 &= ((void*)0 != l_389)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 4))(l_401.wzyx)).zyyzzzzyzxxyyywx, ((VECTOR(uint32_t, 16))(((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))(p_1492->g_406.s8e)), ((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-1L), 0x24F1L)).yyyyyxxyxyxxyxxy)), ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 8))(((*l_345) != ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(l_413, ((((*l_415) = (l_414 = &p_69)) != &p_1492->g_153) , (l_417 == &p_1492->g_229)))), GROUP_DIVERGE(2, 1))) <= l_391[7])), 7L, 1L, ((VECTOR(int16_t, 4))(0x6E45L)), 0L))))).s7063723311372466))).s9a))).odd & l_369[1][0][3]) , (*l_336)), (-10L))), p_1492->g_393)) || (*p_1492->g_264)), p_71, ((VECTOR(uint32_t, 8))(0xFB7852BEL)), 4294967290UL, 4294967295UL, 0UL, p_71, 0xC447BCDDL, 4294967288UL))))).s26be)).y)) , 0x40L), p_1492->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1492->tid, 91))])) , p_1492->g_145.s5) , p_68)))));
                if ((atomic_inc(&p_1492->g_atomic_input[18 * get_linear_group_id() + 9]) == 3))
                { /* block id: 142 */
                    int8_t l_419 = 0x49L;
                    int32_t l_420 = 0x7F34079BL;
                    VECTOR(int32_t, 2) l_421 = (VECTOR(int32_t, 2))(0x274BA769L, (-1L));
                    int64_t l_422[4][3] = {{0x32B6E4F0F1AD99F7L,0x32B6E4F0F1AD99F7L,0x32B6E4F0F1AD99F7L},{0x32B6E4F0F1AD99F7L,0x32B6E4F0F1AD99F7L,0x32B6E4F0F1AD99F7L},{0x32B6E4F0F1AD99F7L,0x32B6E4F0F1AD99F7L,0x32B6E4F0F1AD99F7L},{0x32B6E4F0F1AD99F7L,0x32B6E4F0F1AD99F7L,0x32B6E4F0F1AD99F7L}};
                    int64_t l_489 = 0x6F2204D6BC1C69B5L;
                    int64_t l_490 = 0x2DB915AE766D7A8BL;
                    uint8_t l_491[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_491[i] = 1UL;
                    if ((l_422[2][0] = ((l_420 ^= l_419) , ((VECTOR(int32_t, 16))(l_421.yyyyxxxyyyxxyxyy)).sd)))
                    { /* block id: 145 */
                        uint64_t l_423 = 0UL;
                        int16_t l_424 = (-8L);
                        int8_t l_425 = (-1L);
                        uint32_t l_426[3];
                        uint32_t l_427 = 0xCF930278L;
                        VECTOR(int32_t, 4) l_428 = (VECTOR(int32_t, 4))(0x20877215L, (VECTOR(int32_t, 2))(0x20877215L, 0x1D292805L), 0x1D292805L);
                        union U2 l_429 = {0L};/* VOLATILE GLOBAL l_429 */
                        struct S0 l_430 = {-1L,0x6A7D3F9BL,0xF220D847L,0x5D5C67ABL,0xC6L,1UL,8L};/* VOLATILE GLOBAL l_430 */
                        VECTOR(uint32_t, 4) l_431 = (VECTOR(uint32_t, 4))(0x43FF0C3EL, (VECTOR(uint32_t, 2))(0x43FF0C3EL, 0xAD57ED52L), 0xAD57ED52L);
                        int8_t l_432 = 8L;
                        VECTOR(uint32_t, 16) l_433 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xF354BF82L), 0xF354BF82L), 0xF354BF82L, 4294967295UL, 0xF354BF82L, (VECTOR(uint32_t, 2))(4294967295UL, 0xF354BF82L), (VECTOR(uint32_t, 2))(4294967295UL, 0xF354BF82L), 4294967295UL, 0xF354BF82L, 4294967295UL, 0xF354BF82L);
                        VECTOR(uint32_t, 16) l_434 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x522FB15AL), 0x522FB15AL), 0x522FB15AL, 1UL, 0x522FB15AL, (VECTOR(uint32_t, 2))(1UL, 0x522FB15AL), (VECTOR(uint32_t, 2))(1UL, 0x522FB15AL), 1UL, 0x522FB15AL, 1UL, 0x522FB15AL);
                        VECTOR(uint32_t, 16) l_435 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL);
                        int16_t l_436 = (-6L);
                        int8_t l_437 = (-3L);
                        int32_t l_438 = (-9L);
                        int32_t l_439 = (-1L);
                        int32_t l_440 = 0x7564847AL;
                        union U1 l_441 = {-4L};/* VOLATILE GLOBAL l_441 */
                        uint32_t l_442 = 4294967295UL;
                        int8_t l_443 = (-6L);
                        uint16_t l_444 = 8UL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_426[i] = 0x1D3CA244L;
                        l_423 &= (-1L);
                        l_444 = ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))((l_421.x &= l_424), l_425, (l_426[1] , (l_421.y = (l_420 = ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_427, ((VECTOR(int32_t, 2))(l_428.yz)).lo, ((((l_429 , l_430) , (((VECTOR(uint32_t, 16))((l_439 = (FAKE_DIVERGE(p_1492->local_2_offset, get_local_id(2), 10) , ((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 16))(l_431.xyzxywxxwwyxxywx)).s9d43, (uint32_t)(l_432 ^= 0xD69A8D45L)))).zyzywwww, ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 2))(0x4A6525F3L, 7UL)).yyxx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 8))(l_433.s385be57b)).s6113245614742345, ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(0x3EA2A0ABL, 5UL)), ((VECTOR(uint32_t, 16))(l_434.s638de7727de0ae3e)).s09))).xxyy, (uint32_t)FAKE_DIVERGE(p_1492->local_2_offset, get_local_id(2), 10)))).xyzxwyywzyyxzzxw))).lo)).even))).wzzxxzxz, ((VECTOR(uint32_t, 16))(l_435.s74d8dbaa1da9dd24)).even))).odd, ((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(0x797CD504L, 0x3C0A804CL, 4294967295UL, 0x8A1B861DL)).wxzxxxzwwzxxwwzw)).s19)).yxxyxyyy, ((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 8))(0xB5351A61L, 0x432EC6BDL, (l_437 = l_436), ((VECTOR(uint32_t, 2))(0x059E1873L, 0UL)), l_438, 0x110BC2D0L, 0x753EB783L)), ((VECTOR(uint32_t, 8))(4294967289UL)))))))).lo))).y)), 0xA1995E71L, l_440, ((VECTOR(uint32_t, 2))(0x702B05BAL)), 0xFA46E389L, 5UL, ((VECTOR(uint32_t, 4))(0x2C445097L)), 0x6F7F8E90L, 4294967288UL, ((VECTOR(uint32_t, 2))(1UL)), 8UL)).s5 , l_441)) , FAKE_DIVERGE(p_1492->group_0_offset, get_group_id(0), 10)) , l_442), 0x44C46212L, ((VECTOR(int32_t, 4))(0L)), (-1L), ((VECTOR(int32_t, 4))(0x3AB7EF2FL)), 0x672C5735L, 0x6B7875D7L, 0L)).s22)), ((VECTOR(int32_t, 2))(0L))))).odd))), ((VECTOR(int32_t, 2))(0x26926560L)), 0x61534C3AL, 0x4E599353L, l_443, ((VECTOR(int32_t, 8))((-1L))))).s8766))).w;
                    }
                    else
                    { /* block id: 154 */
                        VECTOR(int32_t, 2) l_446 = (VECTOR(int32_t, 2))(0x3251D2F6L, 0x26227AADL);
                        int32_t *l_445 = (void*)0;
                        int32_t *l_447 = (void*)0;
                        VECTOR(int32_t, 2) l_448 = (VECTOR(int32_t, 2))(0L, 0x42DD43ADL);
                        VECTOR(uint64_t, 8) l_449 = (VECTOR(uint64_t, 8))(0xB8B8B2C49F178DF0L, (VECTOR(uint64_t, 4))(0xB8B8B2C49F178DF0L, (VECTOR(uint64_t, 2))(0xB8B8B2C49F178DF0L, 0xE6C9771F1304D4EBL), 0xE6C9771F1304D4EBL), 0xE6C9771F1304D4EBL, 0xB8B8B2C49F178DF0L, 0xE6C9771F1304D4EBL);
                        uint32_t l_452[1];
                        VECTOR(uint32_t, 8) l_453 = (VECTOR(uint32_t, 8))(0x3FF78F45L, (VECTOR(uint32_t, 4))(0x3FF78F45L, (VECTOR(uint32_t, 2))(0x3FF78F45L, 0xDA41F62FL), 0xDA41F62FL), 0xDA41F62FL, 0x3FF78F45L, 0xDA41F62FL);
                        VECTOR(uint32_t, 4) l_454 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x79E02B04L), 0x79E02B04L);
                        VECTOR(uint32_t, 2) l_455 = (VECTOR(uint32_t, 2))(0UL, 2UL);
                        int16_t l_456 = 0x1BF7L;
                        VECTOR(uint16_t, 2) l_457 = (VECTOR(uint16_t, 2))(0x3CF1L, 0x7319L);
                        VECTOR(uint16_t, 2) l_458 = (VECTOR(uint16_t, 2))(8UL, 0xC331L);
                        uint64_t l_459 = 1UL;
                        VECTOR(uint16_t, 16) l_462 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xA0B9L), 0xA0B9L), 0xA0B9L, 1UL, 0xA0B9L, (VECTOR(uint16_t, 2))(1UL, 0xA0B9L), (VECTOR(uint16_t, 2))(1UL, 0xA0B9L), 1UL, 0xA0B9L, 1UL, 0xA0B9L);
                        VECTOR(uint16_t, 4) l_463 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xC9B0L), 0xC9B0L);
                        int32_t l_464[9][6] = {{1L,(-1L),0x34F69CCAL,0x7CFC2366L,0x0EE89652L,1L},{1L,(-1L),0x34F69CCAL,0x7CFC2366L,0x0EE89652L,1L},{1L,(-1L),0x34F69CCAL,0x7CFC2366L,0x0EE89652L,1L},{1L,(-1L),0x34F69CCAL,0x7CFC2366L,0x0EE89652L,1L},{1L,(-1L),0x34F69CCAL,0x7CFC2366L,0x0EE89652L,1L},{1L,(-1L),0x34F69CCAL,0x7CFC2366L,0x0EE89652L,1L},{1L,(-1L),0x34F69CCAL,0x7CFC2366L,0x0EE89652L,1L},{1L,(-1L),0x34F69CCAL,0x7CFC2366L,0x0EE89652L,1L},{1L,(-1L),0x34F69CCAL,0x7CFC2366L,0x0EE89652L,1L}};
                        VECTOR(uint16_t, 16) l_465 = (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 65532UL), 65532UL), 65532UL, 6UL, 65532UL, (VECTOR(uint16_t, 2))(6UL, 65532UL), (VECTOR(uint16_t, 2))(6UL, 65532UL), 6UL, 65532UL, 6UL, 65532UL);
                        VECTOR(uint8_t, 16) l_466 = (VECTOR(uint8_t, 16))(0x71L, (VECTOR(uint8_t, 4))(0x71L, (VECTOR(uint8_t, 2))(0x71L, 0x67L), 0x67L), 0x67L, 0x71L, 0x67L, (VECTOR(uint8_t, 2))(0x71L, 0x67L), (VECTOR(uint8_t, 2))(0x71L, 0x67L), 0x71L, 0x67L, 0x71L, 0x67L);
                        int8_t l_467 = (-9L);
                        VECTOR(int32_t, 4) l_468 = (VECTOR(int32_t, 4))(0x54CAE85BL, (VECTOR(int32_t, 2))(0x54CAE85BL, 1L), 1L);
                        VECTOR(int32_t, 2) l_469 = (VECTOR(int32_t, 2))((-6L), 0x0812FFE4L);
                        VECTOR(int32_t, 16) l_470 = (VECTOR(int32_t, 16))(0x0897EA1DL, (VECTOR(int32_t, 4))(0x0897EA1DL, (VECTOR(int32_t, 2))(0x0897EA1DL, 0x081BB9AAL), 0x081BB9AAL), 0x081BB9AAL, 0x0897EA1DL, 0x081BB9AAL, (VECTOR(int32_t, 2))(0x0897EA1DL, 0x081BB9AAL), (VECTOR(int32_t, 2))(0x0897EA1DL, 0x081BB9AAL), 0x0897EA1DL, 0x081BB9AAL, 0x0897EA1DL, 0x081BB9AAL);
                        int16_t l_471 = 0x15E7L;
                        int32_t l_472 = 2L;
                        uint32_t l_473 = 0x9551AABFL;
                        int32_t l_474 = (-1L);
                        uint32_t l_475[2];
                        int64_t l_476 = 0x50FC2AB59CE29AAEL;
                        int32_t l_477 = 0x7494AF36L;
                        uint16_t l_478 = 65535UL;
                        uint8_t l_479 = 0xA1L;
                        int8_t l_480 = 0x52L;
                        int32_t l_481 = 0x25F6F314L;
                        int32_t l_482 = (-1L);
                        VECTOR(int64_t, 8) l_483 = (VECTOR(int64_t, 8))(0x0D48908148308D4FL, (VECTOR(int64_t, 4))(0x0D48908148308D4FL, (VECTOR(int64_t, 2))(0x0D48908148308D4FL, 0x281E2DC8B5D00663L), 0x281E2DC8B5D00663L), 0x281E2DC8B5D00663L, 0x0D48908148308D4FL, 0x281E2DC8B5D00663L);
                        uint64_t l_484 = 0UL;
                        int8_t l_485 = 0x48L;
                        int32_t l_486 = 0x531EE301L;
                        uint32_t l_487 = 0xDECAFDB8L;
                        int16_t l_488 = (-1L);
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_452[i] = 0x211D7790L;
                        for (i = 0; i < 2; i++)
                            l_475[i] = 0x7FBBE3DEL;
                        l_447 = l_445;
                        l_421.y &= ((VECTOR(int32_t, 16))(l_448.xyxxyxyyxxyxxyxy)).s0;
                        l_488 ^= (l_421.y = ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 2))(0xDB7039A3L, 0x2C8E1978L)), (uint32_t)(l_449.s3--), (uint32_t)l_452[0]))).xxyx)), 1UL, ((VECTOR(uint32_t, 2))(l_453.s64)), 0x2819FACDL)).s3 , ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 8))(0x321F1388L, ((VECTOR(uint32_t, 4))(0xB5F89812L, ((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4UL, 0xD02DF21EL)), 4294967292UL, 0xBD2C4DF9L)).xwzxzzyw, ((VECTOR(uint32_t, 8))(l_454.yxyywwyw))))).s5, 0UL, 5UL)), 0x5E0F970FL, 4294967295UL, 4294967291UL)).odd, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 2))(l_455.xx)).yyyx, ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 2))(0x293B7DF9L, 4294967295UL)).yxxy, ((VECTOR(uint32_t, 16))(0xFA23DED7L, l_456, ((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 16))(65529UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(l_457.yyxx)).even, ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 16))(l_458.yxxxxyyxxyxyyyyx)).hi, ((VECTOR(uint16_t, 4))((l_459++), 1UL, 65532UL, 1UL)).zzwzyzxz, ((VECTOR(uint16_t, 8))(l_462.s2a343060))))).s37))).yxyxyxxx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_463.yzzyyyxyzxwxyyxx)).sd6)).xxxxyxxx))))).odd)), l_464[1][0], 0x916FL, ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(l_465.s524e)).even, ((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 4))(0x53L, 1UL, 0xCCL, 0xA4L)).zzwywywx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 4))(1UL, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(248UL, 0x30L)).xxxxyyxxyxyxyxyy)))))).s0, 5UL, 0xD7L)).wwwzyzzw, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 4))(249UL, 0x71L, 0x1DL, 7UL)).lo, ((VECTOR(uint8_t, 8))(l_466.sc42ec9f6)).s67))), ((VECTOR(uint8_t, 2))(5UL, 0x4DL)), ((((VECTOR(int32_t, 16))(l_467, 0x209C80CAL, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_468.wzwzzwxxzyyxyyyy)).s3a)), ((VECTOR(int32_t, 16))(l_469.yyyyxyyxxxyyxxyx)).s50, ((VECTOR(int32_t, 8))(l_470.s9e102d2c)).s34))), (l_471 , (l_473 = l_472)), (-4L), ((VECTOR(int32_t, 2))(0x76E006D0L, (-7L))).even, ((l_419 ^= (l_474 , l_475[1])) , l_476), ((VECTOR(int32_t, 8))(0x6F707963L)))).sa , 1UL) , l_477), l_478, 2UL, 254UL))))).s3275267725352061)).even))).s32))), l_479, ((VECTOR(uint16_t, 4))(0UL)), 0xBA16L, 0xCA27L)).sdcee, ((VECTOR(uint16_t, 4))(0x0DDCL))))), l_480, ((VECTOR(uint32_t, 4))(0xF30E0827L)), 0x147F8A6DL, l_481, 4294967287UL, 0UL, 4294967290UL)).s570a))), ((VECTOR(uint32_t, 4))(0UL))))), ((VECTOR(uint32_t, 4))(0xC0A76985L)))).lo))).xwywzzwzzwwzwzwx)).s0) , l_482), 0L, l_483.s7, ((VECTOR(int32_t, 4))(1L)), (-5L))), l_484, l_485, l_486, l_487, 0x2C51EF69L, ((VECTOR(int32_t, 2))(0x246531FBL)), 0x595A1654L)).even)).s23, ((VECTOR(int32_t, 2))(1L))))).lo);
                    }
                    l_491[0] = (l_490 &= l_489);
                    unsigned int result = 0;
                    result += l_419;
                    result += l_420;
                    result += l_421.y;
                    result += l_421.x;
                    int l_422_i0, l_422_i1;
                    for (l_422_i0 = 0; l_422_i0 < 4; l_422_i0++) {
                        for (l_422_i1 = 0; l_422_i1 < 3; l_422_i1++) {
                            result += l_422[l_422_i0][l_422_i1];
                        }
                    }
                    result += l_489;
                    result += l_490;
                    int l_491_i0;
                    for (l_491_i0 = 0; l_491_i0 < 1; l_491_i0++) {
                        result += l_491[l_491_i0];
                    }
                    atomic_add(&p_1492->g_special_values[18 * get_linear_group_id() + 9], result);
                }
                else
                { /* block id: 166 */
                    (1 + 1);
                }
                for (p_1492->g_320 = (-21); (p_1492->g_320 < 14); p_1492->g_320++)
                { /* block id: 171 */
                    volatile struct S0 *l_495[3];
                    int32_t l_497 = (-10L);
                    int32_t l_499 = 0x39ADA88EL;
                    int32_t l_500 = 5L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_495[i] = &p_1492->g_494;
                    p_1492->g_172[9] = p_1492->g_494;
                    if (l_496)
                        continue;
                    ++l_501[1];
                }
            }
            else
            { /* block id: 176 */
                uint8_t l_508 = 0x7FL;
                int64_t *l_513 = (void*)0;
                uint32_t *l_520 = (void*)0;
                uint32_t *l_521 = &p_1492->g_172[3].f2;
                uint32_t *l_522 = &p_1492->g_523;
                int64_t *l_526 = &p_1492->g_239;
                int8_t l_535 = 0L;
                int8_t l_544[3][9] = {{8L,(-5L),8L,8L,(-5L),8L,8L,(-5L),8L},{8L,(-5L),8L,8L,(-5L),8L,8L,(-5L),8L},{8L,(-5L),8L,8L,(-5L),8L,8L,(-5L),8L}};
                int i, j;
                (*l_338) &= (l_504 != (p_68 , l_504));
                (*l_333) ^= ((*l_329) = ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_505.s70516644)).s10)).xyyyyxxxxyyxyxxy)))).s7e03, (int32_t)l_347[6][0]))), ((VECTOR(int32_t, 16))((-1L), ((safe_mul_func_uint8_t_u_u((&p_1492->g_153 == (void*)0), (((((*l_522) = ((*l_521) = ((l_508 = p_1492->g_115.sa) , (safe_mod_func_uint16_t_u_u((5L ^ (safe_mul_func_uint8_t_u_u(((p_1492->g_comm_values[p_1492->tid] = (*p_1492->g_264)) , (safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((p_1492->g_518 = &l_414) != &p_1492->g_152), GROUP_DIVERGE(2, 1))), ((((((VECTOR(uint8_t, 16))(253UL, ((*l_504) &= p_68), 248UL, ((VECTOR(uint8_t, 8))(0xF6L)), 0x38L, 253UL, 0x3BL, 0x7DL, 1UL)).sa < l_508) , p_1492->g_224.y) && (*p_69)) < p_1492->g_406.s8)))), p_71))), p_1492->g_224.x))))) > p_1492->g_147[1][6][5]) <= (*p_69)) ^ GROUP_DIVERGE(0, 1)))) != 0x5EE7571CL), (*p_69), 0x0B78CDA6L, 0x3EF62B4AL, ((VECTOR(int32_t, 2))((-1L))), 0x506EF295L, ((VECTOR(int32_t, 2))(0x1CB68E91L)), (*p_69), 0x6D924F21L, 5L, (-1L), 0x5A4C0ACDL, 1L)).sc624))).w);
                if ((((safe_sub_func_uint8_t_u_u(((((*l_526) = p_71) > (FAKE_DIVERGE(p_1492->group_0_offset, get_group_id(0), 10) == l_527.sb)) < 0xBED2329A7D32B441L), (safe_mul_func_uint8_t_u_u((((&p_67 != &p_1492->g_229) , (safe_sub_func_int32_t_s_s(((((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))((safe_mul_func_int16_t_s_s(l_527.s8, ((*p_1492->g_264) < (p_69 != (p_1492->g_534[1] = (void*)0))))), 0L, ((VECTOR(int16_t, 2))((-5L))), 9L, ((VECTOR(int16_t, 2))(0x604CL)), p_71, l_508, ((VECTOR(int16_t, 2))(0x14A5L)), ((VECTOR(int16_t, 2))(1L)), l_508, 0x75A9L, (-2L))).sb8)).odd > p_1492->g_150[0][1]) , 1UL) < 0x46ACA578C479AD8AL) != 0x5EL), p_67))) > l_527.s2), p_68)))) < p_1492->g_172[3].f6) & l_535))
                { /* block id: 188 */
                    return p_1492->g_83.f0;
                }
                else
                { /* block id: 190 */
                    for (l_340 = 20; (l_340 <= (-17)); l_340 = safe_sub_func_int8_t_s_s(l_340, 8))
                    { /* block id: 193 */
                        atomic_and(&p_1492->g_atomic_reduction[get_linear_group_id()], (safe_mul_func_int8_t_s_s((-3L), GROUP_DIVERGE(2, 1))) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1492->v_collective += p_1492->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        return p_67;
                    }
                    if (l_540)
                        continue;
                    (*l_335) |= (&p_1492->g_229 != l_541[3]);
                    for (l_540 = (-8); (l_540 > (-25)); l_540 = safe_sub_func_int64_t_s_s(l_540, 5))
                    { /* block id: 201 */
                        if (l_544[0][4])
                            break;
                    }
                }
            }
        }
        p_1492->g_564--;
    }
    return p_1492->g_494.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1492->g_83 p_1492->g_92 p_1492->g_145 p_1492->g_51 p_1492->g_152 p_1492->g_160 p_1492->g_165 p_1492->g_174 p_1492->g_172.f2 p_1492->g_172.f4 p_1492->g_2 p_1492->g_153 p_1492->g_193 p_1492->g_3 p_1492->g_172 p_1492->g_244 p_1492->g_253 p_1492->g_228 p_1492->g_229 p_1492->g_264 p_1492->g_4 p_1492->g_126 p_1492->g_9 p_1492->g_224 p_1492->g_102 p_1492->g_150 p_1492->g_128 p_1492->g_307 p_1492->g_56
 * writes: p_1492->g_153 p_1492->g_160 p_1492->g_173 p_1492->g_172.f4 p_1492->g_2 p_1492->g_193 p_1492->g_172 p_1492->g_244 p_1492->g_128 p_1492->g_312
 */
int32_t * func_72(uint64_t  p_73, uint64_t  p_74, struct S3 * p_1492)
{ /* block id: 25 */
    uint32_t l_93 = 4294967294UL;
    int32_t l_97 = 0x091F15DEL;
    struct S0 *l_171 = &p_1492->g_172[3];
    VECTOR(uint8_t, 2) l_181 = (VECTOR(uint8_t, 2))(9UL, 0x08L);
    int32_t *l_186 = &l_97;
    int32_t *l_187 = &l_97;
    int32_t *l_188 = &l_97;
    int32_t *l_189 = &l_97;
    int32_t *l_190[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_191 = 1L;
    int32_t l_192 = 5L;
    VECTOR(int32_t, 2) l_196 = (VECTOR(int32_t, 2))(0x2ABE0106L, 0x1F256F7BL);
    uint64_t *l_230 = &p_1492->g_229;
    int32_t l_243 = (-4L);
    int32_t l_273 = 0x40BE0AE2L;
    VECTOR(uint8_t, 4) l_308 = (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 1UL), 1UL);
    int32_t *l_315 = &l_97;
    int32_t *l_316[4][10] = {{&l_97,&l_243,&l_97,&l_97,&l_243,&l_97,&l_97,&l_243,&l_97,&l_97},{&l_97,&l_243,&l_97,&l_97,&l_243,&l_97,&l_97,&l_243,&l_97,&l_97},{&l_97,&l_243,&l_97,&l_97,&l_243,&l_97,&l_97,&l_243,&l_97,&l_97},{&l_97,&l_243,&l_97,&l_97,&l_243,&l_97,&l_97,&l_243,&l_97,&l_97}};
    int32_t *l_317 = &p_1492->g_51;
    int i, j;
    for (p_73 = 0; (p_73 > 39); p_73 = safe_add_func_uint32_t_u_u(p_73, 7))
    { /* block id: 28 */
        int16_t l_84 = 0x1D45L;
        int32_t *l_85 = (void*)0;
        VECTOR(int8_t, 4) l_90 = (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, 0x05L), 0x05L);
        VECTOR(int8_t, 8) l_91 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
        int8_t *l_94 = (void*)0;
        int8_t *l_95 = (void*)0;
        int8_t *l_96[5][1][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int64_t l_114 = 0x073F28D20E956D33L;
        int32_t l_159 = 1L;
        int32_t **l_180[9];
        uint32_t l_183 = 0xF24A4C6BL;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_180[i] = &p_1492->g_153;
        if ((safe_rshift_func_int16_t_s_s((p_1492->g_83 , (p_74 , ((l_84 , ((l_85 == l_85) && (+(0x42L <= (p_73 ^ (safe_add_func_int8_t_s_s((l_97 = (((GROUP_DIVERGE(1, 1) , ((((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(0x4CL, 0x74L, 1L, 0L, ((VECTOR(int8_t, 2))(0x7AL, 1L)), 1L, (-5L))).s61)), ((VECTOR(int8_t, 4))(p_73, ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(0x6EL, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(l_90.xxwwyzwz)).s36, ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_91.s2602)).lo)), ((VECTOR(int8_t, 2))(p_1492->g_92.sd8)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x5CL, 0L)).xyxx)), 0x6EL, ((VECTOR(int8_t, 2))(4L)), ((VECTOR(int8_t, 4))((-9L))), (-6L))).odd, ((VECTOR(int8_t, 8))(0x1DL))))).s76))), 0x60L)).odd)), ((VECTOR(int8_t, 2))(0x51L))))), 1L)).odd, ((VECTOR(int8_t, 2))(8L))))).hi, l_93)) == p_73) , p_74) , (void*)0)) == &p_1492->g_3) || (-6L))), 0x6CL))))))) | l_93))), 15)))
        { /* block id: 30 */
            VECTOR(int8_t, 8) l_100 = (VECTOR(int8_t, 8))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0x0DL), 0x0DL), 0x0DL, 3L, 0x0DL);
            VECTOR(int8_t, 8) l_101 = (VECTOR(int8_t, 8))(0x1EL, (VECTOR(int8_t, 4))(0x1EL, (VECTOR(int8_t, 2))(0x1EL, 0L), 0L), 0L, 0x1EL, 0L);
            int16_t l_103 = 0x5CEDL;
            uint8_t *l_125 = &p_1492->g_126[0];
            uint16_t *l_127[8] = {&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128,&p_1492->g_128};
            int32_t l_129 = 0x0C123E8BL;
            VECTOR(int64_t, 8) l_134 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x5ACA0B5372051206L), 0x5ACA0B5372051206L), 0x5ACA0B5372051206L, (-1L), 0x5ACA0B5372051206L);
            int32_t l_151[6];
            int i;
            for (i = 0; i < 6; i++)
                l_151[i] = 0L;
            if (((l_129 = ((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(l_100.s2347)).wxzwwwzxyyyxxxzw, ((VECTOR(int8_t, 16))((-10L), 1L, 0x65L, 0x5FL, ((VECTOR(int8_t, 2))(1L, (-10L))), ((VECTOR(int8_t, 2))(l_101.s20)), ((l_103 = p_1492->g_102) & 0xC0B5FFC7L), (-3L), p_73, ((safe_sub_func_int8_t_s_s(((((*l_125) = (safe_add_func_int64_t_s_s((p_74 , (safe_lshift_func_int8_t_s_s((+(safe_lshift_func_int16_t_s_s(0L, ((l_97 &= (l_114 & p_1492->g_9)) <= l_101.s4)))), 2))), (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_1492->g_115.s4136)))).y || (safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((((VECTOR(int64_t, 16))(0L, l_93, l_100.s4, (-1L), p_73, p_1492->g_124[1], p_1492->g_3, l_103, ((VECTOR(int64_t, 2))((-1L))), ((VECTOR(int64_t, 2))(1L)), ((VECTOR(int64_t, 4))(0x1C078458067933A9L)))).s2 , FAKE_DIVERGE(p_1492->global_2_offset, get_global_id(2), 10)), 2)) == p_74) & l_101.s2), p_1492->g_102)), p_73)), p_1492->g_115.sb)))))) || 0UL) != 0x29FEL), p_1492->g_51)) == l_100.s2), 0L, ((VECTOR(int8_t, 2))(0x55L)), (-1L))), ((VECTOR(int8_t, 16))(0x5CL))))).sf, l_101.s1)) && 0x01F13292L)) ^ p_1492->g_92.sa))
            { /* block id: 35 */
                VECTOR(int32_t, 8) l_139 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                uint8_t *l_142 = &p_1492->g_126[0];
                uint64_t *l_146 = (void*)0;
                int32_t l_148[9][5] = {{0L,0x162A1803L,0L,0L,0x162A1803L},{0L,0x162A1803L,0L,0L,0x162A1803L},{0L,0x162A1803L,0L,0L,0x162A1803L},{0L,0x162A1803L,0L,0L,0x162A1803L},{0L,0x162A1803L,0L,0L,0x162A1803L},{0L,0x162A1803L,0L,0L,0x162A1803L},{0L,0x162A1803L,0L,0L,0x162A1803L},{0L,0x162A1803L,0L,0L,0x162A1803L},{0L,0x162A1803L,0L,0L,0x162A1803L}};
                int32_t *l_149[3];
                int32_t *l_154 = (void*)0;
                int32_t *l_155 = &l_151[0];
                int32_t *l_156 = &l_148[7][0];
                int32_t *l_157 = (void*)0;
                int32_t *l_158[8][9][3] = {{{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9}},{{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9}},{{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9}},{{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9}},{{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9}},{{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9}},{{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9}},{{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9},{&l_129,&l_129,&p_1492->g_9}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_149[i] = &p_1492->g_150[0][1];
                l_151[0] |= (safe_add_func_uint64_t_u_u((((l_97 = (l_129 = ((l_148[2][4] = ((safe_add_func_int16_t_s_s((((VECTOR(int64_t, 4))(l_134.s3320)).z , ((safe_sub_func_uint32_t_u_u(0x0AB68978L, (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(l_139.s3626153453012626)).even, (int32_t)((((l_139.s6 , (p_1492->g_147[2][0][6] |= (((FAKE_DIVERGE(p_1492->group_2_offset, get_group_id(2), 10) , 0xFF3C4299L) < (+((safe_sub_func_uint64_t_u_u((&p_1492->g_126[0] == l_142), p_1492->g_126[0])) <= 0xF3L))) , ((l_139.s4 = 0xE445A64CL) >= (((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 4))(p_1492->g_145.s0024)).hi, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(0x6BL, 0x51L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(0x7BL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 16))(0x55L, 0x8FL, (&l_129 != &p_1492->g_51), ((VECTOR(uint8_t, 2))(0x62L)), 1UL, ((VECTOR(uint8_t, 4))(0x99L)), 0x64L, ((VECTOR(uint8_t, 2))(0xE9L)), 0xE1L, 0x95L, 0x0AL)), ((VECTOR(uint8_t, 16))(5UL))))))).s38)), ((VECTOR(uint8_t, 2))(0x18L))))).even, ((VECTOR(uint8_t, 2))(0xB6L)), p_1492->g_145.s6, ((VECTOR(uint8_t, 4))(0x17L)), 0x79L, ((VECTOR(uint8_t, 2))(0x87L)), p_74, p_1492->g_124[1], 0x3DL, 0x62L, 0xE2L)), ((VECTOR(uint8_t, 16))(0xDBL))))).se8)).yyxy, (uint8_t)FAKE_DIVERGE(p_1492->local_1_offset, get_local_id(1), 10), (uint8_t)1UL))).lo)), 246UL, 4UL)), 0x31L, 249UL, 1UL)).even)), 255UL, 2UL)))))))).s75))).even, GROUP_DIVERGE(1, 1))) , p_73) & 0x51L))))) >= l_103) < l_148[4][4]) == l_148[4][4])))).s3, p_1492->g_145.s7)))) | p_73)), p_1492->g_51)) == l_93)) || p_74))) , 0x6E241189190030C7L) >= (-1L)), 18446744073709551609UL));
                (*p_1492->g_152) = &p_1492->g_4;
                ++p_1492->g_160;
            }
            else
            { /* block id: 44 */
                int32_t **l_166 = &l_85;
                for (l_114 = 0; (l_114 > 22); ++l_114)
                { /* block id: 47 */
                    if (p_1492->g_165)
                        break;
                }
                (*l_166) = &l_151[0];
                if (p_74)
                    break;
                if ((atomic_inc(&p_1492->l_atomic_input[3]) == 8))
                { /* block id: 53 */
                    uint8_t l_167 = 255UL;
                    int8_t l_170 = 0x00L;
                    --l_167;
                    l_170 &= ((VECTOR(int32_t, 2))(0x31FE12C4L, (-1L))).lo;
                    unsigned int result = 0;
                    result += l_167;
                    result += l_170;
                    atomic_add(&p_1492->l_special_values[3], result);
                }
                else
                { /* block id: 56 */
                    (1 + 1);
                }
            }
            if (p_74)
                continue;
            p_1492->g_173 = l_171;
            (*p_1492->g_174) = &l_97;
        }
        else
        { /* block id: 63 */
            int32_t **l_178 = &l_85;
            int32_t ***l_179[10][3][7] = {{{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178}},{{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178}},{{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178}},{{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178}},{{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178}},{{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178}},{{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178}},{{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178}},{{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178}},{{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178},{&l_178,&l_178,&l_178,(void*)0,&l_178,&l_178,&l_178}}};
            uint8_t *l_182[5];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_182[i] = (void*)0;
            if (p_73)
                break;
            p_1492->g_2 |= (((safe_div_func_int64_t_s_s(p_1492->g_160, p_1492->g_172[3].f2)) || ((VECTOR(uint16_t, 2))(0xBC6CL, 0x8326L)).even) > (p_1492->g_172[3].f4 &= ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 4))(p_1492->g_177.yyyx))))).ywxzzyzw)).s64, (uint8_t)((l_180[2] = l_178) != &l_85)))).xyxyxyxxxyxyyxxx, ((VECTOR(uint8_t, 4))(l_181.yxxx)).xyxwywywzwwwwxzy))).sec, ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 2))(0x7DL, 0x4DL)).xxyyxxyyyyxyyxyx))).s5b79)).even, (uint8_t)(FAKE_DIVERGE(p_1492->local_1_offset, get_local_id(1), 10) , 0UL))))))).even));
            if (l_93)
                break;
        }
        ++l_183;
        (*p_1492->g_152) = (*p_1492->g_174);
    }
    p_1492->g_193++;
    if (((VECTOR(int32_t, 8))(l_196.yxxxxyyy)).s6)
    { /* block id: 74 */
        VECTOR(int32_t, 2) l_225 = (VECTOR(int32_t, 2))(0x6558FA1BL, 0x4D20151EL);
        int32_t l_242 = (-1L);
        int i;
        for (l_93 = 7; (l_93 != 45); l_93++)
        { /* block id: 77 */
            int64_t *l_217 = (void*)0;
            int64_t *l_218 = (void*)0;
            int64_t *l_219 = (void*)0;
            int64_t *l_220[3];
            int32_t l_221 = 0x72542F08L;
            uint64_t *l_227 = &p_1492->g_56;
            uint64_t **l_226[5][5] = {{&l_227,&l_227,&l_227,&l_227,&l_227},{&l_227,&l_227,&l_227,&l_227,&l_227},{&l_227,&l_227,&l_227,&l_227,&l_227},{&l_227,&l_227,&l_227,&l_227,&l_227},{&l_227,&l_227,&l_227,&l_227,&l_227}};
            uint32_t *l_238 = &p_1492->g_102;
            uint8_t *l_240[3][5][6] = {{{&p_1492->g_160,&p_1492->g_126[0],(void*)0,(void*)0,&p_1492->g_126[0],&p_1492->g_160},{&p_1492->g_160,&p_1492->g_126[0],(void*)0,(void*)0,&p_1492->g_126[0],&p_1492->g_160},{&p_1492->g_160,&p_1492->g_126[0],(void*)0,(void*)0,&p_1492->g_126[0],&p_1492->g_160},{&p_1492->g_160,&p_1492->g_126[0],(void*)0,(void*)0,&p_1492->g_126[0],&p_1492->g_160},{&p_1492->g_160,&p_1492->g_126[0],(void*)0,(void*)0,&p_1492->g_126[0],&p_1492->g_160}},{{&p_1492->g_160,&p_1492->g_126[0],(void*)0,(void*)0,&p_1492->g_126[0],&p_1492->g_160},{&p_1492->g_160,&p_1492->g_126[0],(void*)0,(void*)0,&p_1492->g_126[0],&p_1492->g_160},{&p_1492->g_160,&p_1492->g_126[0],(void*)0,(void*)0,&p_1492->g_126[0],&p_1492->g_160},{&p_1492->g_160,&p_1492->g_126[0],(void*)0,(void*)0,&p_1492->g_126[0],&p_1492->g_160},{&p_1492->g_160,&p_1492->g_126[0],(void*)0,(void*)0,&p_1492->g_126[0],&p_1492->g_160}},{{&p_1492->g_160,&p_1492->g_126[0],(void*)0,(void*)0,&p_1492->g_126[0],&p_1492->g_160},{&p_1492->g_160,&p_1492->g_126[0],(void*)0,(void*)0,&p_1492->g_126[0],&p_1492->g_160},{&p_1492->g_160,&p_1492->g_126[0],(void*)0,(void*)0,&p_1492->g_126[0],&p_1492->g_160},{&p_1492->g_160,&p_1492->g_126[0],(void*)0,(void*)0,&p_1492->g_126[0],&p_1492->g_160},{&p_1492->g_160,&p_1492->g_126[0],(void*)0,(void*)0,&p_1492->g_126[0],&p_1492->g_160}}};
            int32_t l_241 = 0x04AF5CDDL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_220[i] = (void*)0;
            if ((atomic_inc(&p_1492->g_atomic_input[18 * get_linear_group_id() + 0]) == 6))
            { /* block id: 79 */
                VECTOR(int32_t, 16) l_199 = (VECTOR(int32_t, 16))(0x1A52B7B2L, (VECTOR(int32_t, 4))(0x1A52B7B2L, (VECTOR(int32_t, 2))(0x1A52B7B2L, (-2L)), (-2L)), (-2L), 0x1A52B7B2L, (-2L), (VECTOR(int32_t, 2))(0x1A52B7B2L, (-2L)), (VECTOR(int32_t, 2))(0x1A52B7B2L, (-2L)), 0x1A52B7B2L, (-2L), 0x1A52B7B2L, (-2L));
                VECTOR(int32_t, 2) l_200 = (VECTOR(int32_t, 2))(0L, 0x7E1010FDL);
                uint8_t l_201 = 249UL;
                uint8_t l_202 = 0UL;
                uint32_t l_205 = 5UL;
                VECTOR(int32_t, 2) l_206 = (VECTOR(int32_t, 2))(0x0C19A545L, 5L);
                VECTOR(int32_t, 8) l_207 = (VECTOR(int32_t, 8))(0x1A609B37L, (VECTOR(int32_t, 4))(0x1A609B37L, (VECTOR(int32_t, 2))(0x1A609B37L, 0L), 0L), 0L, 0x1A609B37L, 0L);
                VECTOR(int32_t, 8) l_208 = (VECTOR(int32_t, 8))(0x516BA491L, (VECTOR(int32_t, 4))(0x516BA491L, (VECTOR(int32_t, 2))(0x516BA491L, 5L), 5L), 5L, 0x516BA491L, 5L);
                VECTOR(int32_t, 16) l_209 = (VECTOR(int32_t, 16))(0x4B431719L, (VECTOR(int32_t, 4))(0x4B431719L, (VECTOR(int32_t, 2))(0x4B431719L, 1L), 1L), 1L, 0x4B431719L, 1L, (VECTOR(int32_t, 2))(0x4B431719L, 1L), (VECTOR(int32_t, 2))(0x4B431719L, 1L), 0x4B431719L, 1L, 0x4B431719L, 1L);
                VECTOR(int32_t, 8) l_210 = (VECTOR(int32_t, 8))(0x34B8ED67L, (VECTOR(int32_t, 4))(0x34B8ED67L, (VECTOR(int32_t, 2))(0x34B8ED67L, 0x0208D1ECL), 0x0208D1ECL), 0x0208D1ECL, 0x34B8ED67L, 0x0208D1ECL);
                uint32_t l_211 = 1UL;
                int32_t l_212 = 0x1AED80D3L;
                int64_t l_213 = 1L;
                int32_t l_214 = (-1L);
                struct S0 l_215 = {-8L,-1L,8UL,0xA2BE541FL,1UL,0xBA468E9773BB5358L,0x03E51691L};/* VOLATILE GLOBAL l_215 */
                struct S0 l_216[9] = {{0x5AA2104996D6FC5DL,5L,4294967294UL,4294967295UL,6UL,18446744073709551615UL,-1L},{0x5AA2104996D6FC5DL,5L,4294967294UL,4294967295UL,6UL,18446744073709551615UL,-1L},{0x5AA2104996D6FC5DL,5L,4294967294UL,4294967295UL,6UL,18446744073709551615UL,-1L},{0x5AA2104996D6FC5DL,5L,4294967294UL,4294967295UL,6UL,18446744073709551615UL,-1L},{0x5AA2104996D6FC5DL,5L,4294967294UL,4294967295UL,6UL,18446744073709551615UL,-1L},{0x5AA2104996D6FC5DL,5L,4294967294UL,4294967295UL,6UL,18446744073709551615UL,-1L},{0x5AA2104996D6FC5DL,5L,4294967294UL,4294967295UL,6UL,18446744073709551615UL,-1L},{0x5AA2104996D6FC5DL,5L,4294967294UL,4294967295UL,6UL,18446744073709551615UL,-1L},{0x5AA2104996D6FC5DL,5L,4294967294UL,4294967295UL,6UL,18446744073709551615UL,-1L}};
                int i;
                l_211 &= (l_210.s2 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(9L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(0x490589B7L, 0x3054497DL, 2L, ((VECTOR(int32_t, 4))(l_199.s1fad)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_200.yx)), 0L, 0x5108B6CDL, ((VECTOR(int32_t, 2))(1L, 0x3A87524CL)), 0x5030C1CFL, (l_201 , ((l_205 &= (l_202++)) , 1L)), 2L, 0x2E25D2D7L, ((VECTOR(int32_t, 2))(l_206.xx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_207.s2323052403276746)).s4d31)).z, (-1L), 1L, 1L)).s25ec, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(l_208.s1560)).ywywxyyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_209.s7fbbc769e7b83f1a)).s1f)).yxyxyyxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x45FBC21BL, 0x5622A883L)), 0x79D063AEL, 0x59460910L)).zzyyzzyw))).s0173455421003045))).s74a2, ((VECTOR(int32_t, 2))(l_210.s60)).yyyx))).wxyyyyxz)), 0x77AC0CD2L)).s7e))))), 0x3FBE3BD5L)).yzwwwyyw)).s3);
                l_214 |= (l_213 = l_212);
                l_216[6] = l_215;
                unsigned int result = 0;
                result += l_199.sf;
                result += l_199.se;
                result += l_199.sd;
                result += l_199.sc;
                result += l_199.sb;
                result += l_199.sa;
                result += l_199.s9;
                result += l_199.s8;
                result += l_199.s7;
                result += l_199.s6;
                result += l_199.s5;
                result += l_199.s4;
                result += l_199.s3;
                result += l_199.s2;
                result += l_199.s1;
                result += l_199.s0;
                result += l_200.y;
                result += l_200.x;
                result += l_201;
                result += l_202;
                result += l_205;
                result += l_206.y;
                result += l_206.x;
                result += l_207.s7;
                result += l_207.s6;
                result += l_207.s5;
                result += l_207.s4;
                result += l_207.s3;
                result += l_207.s2;
                result += l_207.s1;
                result += l_207.s0;
                result += l_208.s7;
                result += l_208.s6;
                result += l_208.s5;
                result += l_208.s4;
                result += l_208.s3;
                result += l_208.s2;
                result += l_208.s1;
                result += l_208.s0;
                result += l_209.sf;
                result += l_209.se;
                result += l_209.sd;
                result += l_209.sc;
                result += l_209.sb;
                result += l_209.sa;
                result += l_209.s9;
                result += l_209.s8;
                result += l_209.s7;
                result += l_209.s6;
                result += l_209.s5;
                result += l_209.s4;
                result += l_209.s3;
                result += l_209.s2;
                result += l_209.s1;
                result += l_209.s0;
                result += l_210.s7;
                result += l_210.s6;
                result += l_210.s5;
                result += l_210.s4;
                result += l_210.s3;
                result += l_210.s2;
                result += l_210.s1;
                result += l_210.s0;
                result += l_211;
                result += l_212;
                result += l_213;
                result += l_214;
                result += l_215.f0;
                result += l_215.f1;
                result += l_215.f2;
                result += l_215.f3;
                result += l_215.f4;
                result += l_215.f5;
                result += l_215.f6;
                int l_216_i0;
                for (l_216_i0 = 0; l_216_i0 < 9; l_216_i0++) {
                    result += l_216[l_216_i0].f0;
                    result += l_216[l_216_i0].f1;
                    result += l_216[l_216_i0].f2;
                    result += l_216[l_216_i0].f3;
                    result += l_216[l_216_i0].f4;
                    result += l_216[l_216_i0].f5;
                    result += l_216[l_216_i0].f6;
                }
                atomic_add(&p_1492->g_special_values[18 * get_linear_group_id() + 0], result);
            }
            else
            { /* block id: 87 */
                (1 + 1);
            }
            l_242 |= ((((*l_188) = p_1492->g_3) <= l_221) == ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(3L, 1L, ((VECTOR(int8_t, 2))(p_1492->g_224.yy)), ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 2))(1L, (-1L))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(1L, 0x75L, 0x0AL, 0x73L, (((VECTOR(int32_t, 16))(l_225.xyyxyyxyyyyxyxxy)).s8 ^ (-7L)), ((GROUP_DIVERGE(2, 1) && ((p_1492->g_228 = &p_1492->g_56) != (l_230 = (void*)0))) | (l_241 = (65535UL && (p_1492->g_239 = ((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint32_t_u(((*l_238) |= ((safe_div_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((void*)0 == &p_1492->g_153) < p_73), p_74)), p_1492->g_9)) > p_1492->g_9)))), 18446744073709551609UL)) && l_225.y))))), 0x33L, ((VECTOR(int8_t, 2))(0x1FL)), ((VECTOR(int8_t, 2))(1L)), 0x63L, ((VECTOR(int8_t, 2))(0x6AL)), 5L, 0x2FL)).sf862, ((VECTOR(int8_t, 4))(1L))))).zwxzxyzx)).s5352653760520374)).odd)))).s31, ((VECTOR(int8_t, 2))(0x75L))))).xxyyxxxxyxyxyyyx)).sf3)).xxxy, ((VECTOR(int8_t, 4))(0x40L)), ((VECTOR(int8_t, 4))(3L))))), p_1492->g_126[0], ((VECTOR(int8_t, 2))((-1L))), 0x60L, ((VECTOR(int8_t, 2))(0x6FL)), 0x5AL, 0x31L)).s1, GROUP_DIVERGE(0, 1))) , l_221));
            if (l_241)
                continue;
        }
        (*l_171) = (*l_171);
        ++p_1492->g_244[1][3];
    }
    else
    { /* block id: 101 */
        uint8_t l_254 = 0UL;
        int64_t *l_259 = (void*)0;
        int8_t l_262 = 1L;
        uint64_t l_274 = 0x6D88AE0489AC199AL;
        VECTOR(int32_t, 2) l_275 = (VECTOR(int32_t, 2))(0x5B0812FAL, (-3L));
        int16_t *l_311 = &p_1492->g_312;
        uint16_t l_313 = 0x7B59L;
        int32_t *l_314 = &p_1492->g_9;
        int i;
        for (l_93 = (-3); (l_93 >= 10); l_93 = safe_add_func_int16_t_s_s(l_93, 5))
        { /* block id: 104 */
            VECTOR(uint8_t, 4) l_268 = (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 1UL), 1UL);
            VECTOR(int8_t, 8) l_284 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x05L), 0x05L), 0x05L, 1L, 0x05L);
            VECTOR(int64_t, 2) l_299 = (VECTOR(int64_t, 2))((-8L), 1L);
            uint32_t *l_304 = (void*)0;
            int i;
            l_275.y ^= (safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((p_1492->g_253 , ((l_254 > ((safe_rshift_func_int8_t_s_u(((((safe_add_func_uint32_t_u_u((~(l_259 != ((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 4))(l_262, (*l_188), 0L, 0x1D345928L)).w, (safe_unary_minus_func_uint64_t_u((*p_1492->g_228))))) , p_1492->g_264))), ((VECTOR(int32_t, 16))(0x334DFD42L, (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 4))((((VECTOR(uint8_t, 2))(l_268.xy)).hi < (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(p_1492->g_4, 3)), 0x6F2A4D9EL))), 0xC106F210D6E8F570L, 18446744073709551615UL, 0xFD20E97D85CEA285L)).x, p_1492->g_126[0])), p_73, 0x14E5B8C3L, l_254, l_254, l_273, 0x087DD8F9L, ((VECTOR(int32_t, 4))(0x1BA95E03L)), ((VECTOR(int32_t, 2))((-9L))), 2L, (-6L))).s4)) ^ p_1492->g_9) == 0x367C9178L) == l_268.y), 0)) != p_1492->g_224.x)) || p_1492->g_102)), p_73)) > l_274), p_1492->g_172[3].f2));
            (*l_189) ^= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((p_74 < (*p_1492->g_228)), 1)), (safe_mod_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u((((VECTOR(int8_t, 2))(l_284.s53)).even >= (((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(p_1492->g_150[3][1], (safe_lshift_func_int16_t_s_u(l_268.w, (p_1492->g_128++))))), (safe_lshift_func_uint16_t_u_s(p_74, ((p_1492->g_224.x , ((safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u((8UL | ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))((-7L), 0x7AE02E8F3FBB26B3L)))), 0x1DB1555A82EA14B8L, 0x4E6059952D4A4537L)).wyyxzxxx)).s25, ((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 2))(0x55A5E065A7BD12EBL, 0x4A89532E70326C02L)).yxyyxxyy, ((VECTOR(int64_t, 16))(l_299.xxxxyyxyxxyxyxyx)).even))).s60))).xxyyyyxxyyyxyyyx)).sa), (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((p_74 < (l_275.y = ((p_74 & 0xCDL) | 1UL))) | l_284.s2) , p_74), 7)), (-10L))))), l_284.s4)) && p_74)) || p_73))))) & l_268.y) >= l_299.x)), FAKE_DIVERGE(p_1492->local_1_offset, get_local_id(1), 10))) >= p_73) ^ 0L), 1L))));
        }
        l_313 = (safe_rshift_func_int8_t_s_u((((void*)0 != &p_1492->g_174) <= ((*l_311) = (((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 4))(p_1492->g_307.sded4)).xxyxyxzy, ((VECTOR(uint8_t, 16))(l_308.wwywwxywzzxxwzxx)).odd))).s7 , (safe_mod_func_uint32_t_u_u(p_1492->g_126[0], p_73))))), 7));
        return l_314;
    }
    return l_317;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[18];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 18; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[18];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 18; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[91];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 91; i++)
            l_comm_values[i] = 1;
    struct S3 c_1493;
    struct S3* p_1492 = &c_1493;
    struct S3 c_1494 = {
        0x0836B16BL, // p_1492->g_2
        0x5FD94759L, // p_1492->g_3
        0x1EEFB6F6L, // p_1492->g_4
        0x051AF7F3L, // p_1492->g_9
        251UL, // p_1492->g_31
        {1UL,1UL,1UL,1UL,1UL,1UL}, // p_1492->g_39
        0x5BC98072L, // p_1492->g_51
        2UL, // p_1492->g_56
        {0x3AL}, // p_1492->g_83
        (VECTOR(int8_t, 16))(0x17L, (VECTOR(int8_t, 4))(0x17L, (VECTOR(int8_t, 2))(0x17L, 0x4FL), 0x4FL), 0x4FL, 0x17L, 0x4FL, (VECTOR(int8_t, 2))(0x17L, 0x4FL), (VECTOR(int8_t, 2))(0x17L, 0x4FL), 0x17L, 0x4FL, 0x17L, 0x4FL), // p_1492->g_92
        0x2F892C2DL, // p_1492->g_102
        (VECTOR(int8_t, 16))(0x67L, (VECTOR(int8_t, 4))(0x67L, (VECTOR(int8_t, 2))(0x67L, 0x75L), 0x75L), 0x75L, 0x67L, 0x75L, (VECTOR(int8_t, 2))(0x67L, 0x75L), (VECTOR(int8_t, 2))(0x67L, 0x75L), 0x67L, 0x75L, 0x67L, 0x75L), // p_1492->g_115
        {6L,6L,6L}, // p_1492->g_124
        {0x08L}, // p_1492->g_126
        2UL, // p_1492->g_128
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xFCL), 0xFCL), 0xFCL, 255UL, 0xFCL), // p_1492->g_145
        {{{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L}},{{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L}},{{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L}},{{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L}},{{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L},{0xC546E72FL,7UL,7UL,1UL,0UL,0x27D2885BL,0xCC6CAB48L}}}, // p_1492->g_147
        {{0x5A5E883FL,0x5A5E883FL,0x5A5E883FL,0x5A5E883FL,0x5A5E883FL},{0x5A5E883FL,0x5A5E883FL,0x5A5E883FL,0x5A5E883FL,0x5A5E883FL},{0x5A5E883FL,0x5A5E883FL,0x5A5E883FL,0x5A5E883FL,0x5A5E883FL},{0x5A5E883FL,0x5A5E883FL,0x5A5E883FL,0x5A5E883FL,0x5A5E883FL}}, // p_1492->g_150
        (void*)0, // p_1492->g_153
        &p_1492->g_153, // p_1492->g_152
        246UL, // p_1492->g_160
        0x5CL, // p_1492->g_165
        {{-4L,0x4DD60A0AL,1UL,9UL,0xC9L,2UL,0L},{-10L,0x1502270FL,0UL,1UL,0xC8L,18446744073709551615UL,0x47A503FBL},{-4L,0x4DD60A0AL,1UL,9UL,0xC9L,2UL,0L},{-4L,0x4DD60A0AL,1UL,9UL,0xC9L,2UL,0L},{-10L,0x1502270FL,0UL,1UL,0xC8L,18446744073709551615UL,0x47A503FBL},{-4L,0x4DD60A0AL,1UL,9UL,0xC9L,2UL,0L},{-4L,0x4DD60A0AL,1UL,9UL,0xC9L,2UL,0L},{-10L,0x1502270FL,0UL,1UL,0xC8L,18446744073709551615UL,0x47A503FBL},{-4L,0x4DD60A0AL,1UL,9UL,0xC9L,2UL,0L},{-4L,0x4DD60A0AL,1UL,9UL,0xC9L,2UL,0L}}, // p_1492->g_172
        (void*)0, // p_1492->g_173
        &p_1492->g_153, // p_1492->g_174
        (VECTOR(uint8_t, 2))(255UL, 0x88L), // p_1492->g_177
        0x740F9075L, // p_1492->g_193
        (VECTOR(int8_t, 4))(0x67L, (VECTOR(int8_t, 2))(0x67L, (-3L)), (-3L)), // p_1492->g_224
        0UL, // p_1492->g_229
        &p_1492->g_229, // p_1492->g_228
        0x034B15233EBA5CBCL, // p_1492->g_239
        {{0x0AE0L,0x4D52L,0x0AE0L,0x0AE0L},{0x0AE0L,0x4D52L,0x0AE0L,0x0AE0L},{0x0AE0L,0x4D52L,0x0AE0L,0x0AE0L},{0x0AE0L,0x4D52L,0x0AE0L,0x0AE0L}}, // p_1492->g_244
        {0x58FC9CD9L}, // p_1492->g_253
        0x33F5A924A7ADA459L, // p_1492->g_265
        &p_1492->g_265, // p_1492->g_264
        (VECTOR(uint8_t, 16))(0xFEL, (VECTOR(uint8_t, 4))(0xFEL, (VECTOR(uint8_t, 2))(0xFEL, 2UL), 2UL), 2UL, 0xFEL, 2UL, (VECTOR(uint8_t, 2))(0xFEL, 2UL), (VECTOR(uint8_t, 2))(0xFEL, 2UL), 0xFEL, 2UL, 0xFEL, 2UL), // p_1492->g_307
        0x7B69L, // p_1492->g_312
        1L, // p_1492->g_320
        1UL, // p_1492->g_348
        0x6006L, // p_1492->g_393
        (VECTOR(int16_t, 16))(0x6F4AL, (VECTOR(int16_t, 4))(0x6F4AL, (VECTOR(int16_t, 2))(0x6F4AL, 0x03D7L), 0x03D7L), 0x03D7L, 0x6F4AL, 0x03D7L, (VECTOR(int16_t, 2))(0x6F4AL, 0x03D7L), (VECTOR(int16_t, 2))(0x6F4AL, 0x03D7L), 0x6F4AL, 0x03D7L, 0x6F4AL, 0x03D7L), // p_1492->g_406
        {0x1DAA9DDF6788C261L,-10L,1UL,0UL,4UL,18446744073709551615UL,0x249B33C7L}, // p_1492->g_494
        &p_1492->g_153, // p_1492->g_519
        &p_1492->g_519, // p_1492->g_518
        0x50E27130L, // p_1492->g_523
        {&p_1492->g_150[1][1],&p_1492->g_150[1][1],&p_1492->g_150[1][1],&p_1492->g_150[1][1]}, // p_1492->g_534
        0UL, // p_1492->g_564
        (VECTOR(int16_t, 8))(0x33B0L, (VECTOR(int16_t, 4))(0x33B0L, (VECTOR(int16_t, 2))(0x33B0L, 4L), 4L), 4L, 0x33B0L, 4L), // p_1492->g_577
        (VECTOR(int16_t, 2))(1L, 0x7035L), // p_1492->g_579
        0UL, // p_1492->g_599
        0x34493D5D782D130FL, // p_1492->g_602
        {0x14L}, // p_1492->g_629
        (void*)0, // p_1492->g_639
        {0x480DF6B7L}, // p_1492->g_644
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x13L), 0x13L), // p_1492->g_652
        (VECTOR(uint64_t, 2))(0x617F788755577B8FL, 18446744073709551610UL), // p_1492->g_661
        9L, // p_1492->g_685
        (VECTOR(int64_t, 16))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 1L), 1L), 1L, (-9L), 1L, (VECTOR(int64_t, 2))((-9L), 1L), (VECTOR(int64_t, 2))((-9L), 1L), (-9L), 1L, (-9L), 1L), // p_1492->g_689
        {0L,1L,4294967293UL,0x5938432BL,255UL,18446744073709551612UL,0L}, // p_1492->g_708
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_1492->g_737
        (VECTOR(uint64_t, 8))(0x04A3BFD859316278L, (VECTOR(uint64_t, 4))(0x04A3BFD859316278L, (VECTOR(uint64_t, 2))(0x04A3BFD859316278L, 0x175941960F727568L), 0x175941960F727568L), 0x175941960F727568L, 0x04A3BFD859316278L, 0x175941960F727568L), // p_1492->g_863
        {{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}}}, // p_1492->g_872
        {0x1E96FD8C91902D2CL,0x26D947F5L,4294967295UL,0x9D813807L,0x2CL,0x7BECE03DD8658B4BL,0x2FC8FC3CL}, // p_1492->g_899
        {{{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}}},{{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}}},{{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}}},{{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}}},{{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}}},{{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}}},{{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}}},{{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}},{{0x691F183D125DE4B7L,0x004D3E62L,0xD2D42BD7L,8UL,4UL,1UL,4L},{1L,-9L,0xF75FB7AFL,0UL,0xC1L,18446744073709551606UL,-4L}}}}, // p_1492->g_900
        (VECTOR(int16_t, 16))(0x1A5CL, (VECTOR(int16_t, 4))(0x1A5CL, (VECTOR(int16_t, 2))(0x1A5CL, 1L), 1L), 1L, 0x1A5CL, 1L, (VECTOR(int16_t, 2))(0x1A5CL, 1L), (VECTOR(int16_t, 2))(0x1A5CL, 1L), 0x1A5CL, 1L, 0x1A5CL, 1L), // p_1492->g_903
        (VECTOR(int8_t, 2))(0x73L, 0x16L), // p_1492->g_904
        (VECTOR(int32_t, 8))(0x3204E695L, (VECTOR(int32_t, 4))(0x3204E695L, (VECTOR(int32_t, 2))(0x3204E695L, 6L), 6L), 6L, 0x3204E695L, 6L), // p_1492->g_917
        &p_1492->g_128, // p_1492->g_924
        {0x0DL}, // p_1492->g_925
        {0x22292CE4L}, // p_1492->g_937
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 248UL), 248UL), 248UL, 0UL, 248UL, (VECTOR(uint8_t, 2))(0UL, 248UL), (VECTOR(uint8_t, 2))(0UL, 248UL), 0UL, 248UL, 0UL, 248UL), // p_1492->g_951
        {{{&p_1492->g_925}}}, // p_1492->g_957
        {{0x558EL,0x558EL},{0x558EL,0x558EL}}, // p_1492->g_1011
        0x4C6574A3L, // p_1492->g_1025
        {-3L}, // p_1492->g_1031
        {0x12620D2A8BA22D15L,0L,0x523F77B6L,0x9EED82A9L,0x95L,0xF6A62CE162E93310L,0x2A59BD65L}, // p_1492->g_1039
        {&p_1492->g_51,(void*)0,&p_1492->g_51,&p_1492->g_51,(void*)0,&p_1492->g_51,&p_1492->g_51}, // p_1492->g_1042
        {-2L,-1L,0x7AECCFEDL,1UL,0x4EL,0UL,1L}, // p_1492->g_1045
        {{0L,0x3A8F93E1L,0UL,7UL,255UL,0UL,0x2A974110L},{-1L,0x1B882DB5L,0x1F7ED31BL,0xCDD6E135L,1UL,0xD18E3CF79FF600DFL,0x29EC1902L},{0L,0x3A8F93E1L,0UL,7UL,255UL,0UL,0x2A974110L},{0L,0x3A8F93E1L,0UL,7UL,255UL,0UL,0x2A974110L},{-1L,0x1B882DB5L,0x1F7ED31BL,0xCDD6E135L,1UL,0xD18E3CF79FF600DFL,0x29EC1902L},{0L,0x3A8F93E1L,0UL,7UL,255UL,0UL,0x2A974110L},{0L,0x3A8F93E1L,0UL,7UL,255UL,0UL,0x2A974110L},{-1L,0x1B882DB5L,0x1F7ED31BL,0xCDD6E135L,1UL,0xD18E3CF79FF600DFL,0x29EC1902L},{0L,0x3A8F93E1L,0UL,7UL,255UL,0UL,0x2A974110L}}, // p_1492->g_1046
        {-1L,0x7F5F89CCL,0x7E65B639L,8UL,0x20L,0x3E2A08F5A48A3C36L,1L}, // p_1492->g_1076
        (void*)0, // p_1492->g_1077
        {-9L,0x6A1CAF54L,0x72569421L,0x19D91411L,255UL,18446744073709551615UL,-1L}, // p_1492->g_1081
        {0x66A701F2AFBEFD1FL,0x4115CA5BL,0x989F02E3L,1UL,1UL,7UL,0x295EB2C1L}, // p_1492->g_1087
        {0x69L}, // p_1492->g_1098
        {{{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}},{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}},{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}},{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}}},{{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}},{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}},{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}},{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}}},{{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}},{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}},{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}},{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}}},{{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}},{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}},{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}},{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}}},{{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}},{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}},{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}},{{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L},{0L,-6L,1UL,4294967288UL,1UL,0xB568E2A6B3398CEEL,-8L},{0x0D352FCBA4CF681CL,-1L,0xE5390DA5L,0x8EC6189AL,0xA2L,18446744073709551615UL,0x699BA035L}}}}, // p_1492->g_1101
        (void*)0, // p_1492->g_1107
        {&p_1492->g_1107}, // p_1492->g_1106
        {0x32B0DA1226FEB8F0L,-10L,1UL,8UL,255UL,0x28544AEB7B080C0BL,0x2273BC52L}, // p_1492->g_1109
        (VECTOR(int64_t, 4))(0x7AC566925B385FFFL, (VECTOR(int64_t, 2))(0x7AC566925B385FFFL, (-7L)), (-7L)), // p_1492->g_1122
        0x0EFBADD312B53B60L, // p_1492->g_1135
        &p_1492->g_872[6][0][4], // p_1492->g_1139
        (VECTOR(uint16_t, 2))(65535UL, 65535UL), // p_1492->g_1150
        (VECTOR(int16_t, 8))(0x4A80L, (VECTOR(int16_t, 4))(0x4A80L, (VECTOR(int16_t, 2))(0x4A80L, 0x107EL), 0x107EL), 0x107EL, 0x4A80L, 0x107EL), // p_1492->g_1163
        (void*)0, // p_1492->g_1167
        {{{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4}},{{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4}},{{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4}},{{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4}},{{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4}},{{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4}},{{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4}},{{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4},{(void*)0,&p_1492->g_172[3].f4}}}, // p_1492->g_1180
        &p_1492->g_1180[2][4][1], // p_1492->g_1179
        {{1L,0x164E3B97L,0x96C7C1FEL,1UL,0xBDL,0xE8260DE658D3E307L,0x6DE15622L},{1L,0x164E3B97L,0x96C7C1FEL,1UL,0xBDL,0xE8260DE658D3E307L,0x6DE15622L},{1L,0x164E3B97L,0x96C7C1FEL,1UL,0xBDL,0xE8260DE658D3E307L,0x6DE15622L},{1L,0x164E3B97L,0x96C7C1FEL,1UL,0xBDL,0xE8260DE658D3E307L,0x6DE15622L},{1L,0x164E3B97L,0x96C7C1FEL,1UL,0xBDL,0xE8260DE658D3E307L,0x6DE15622L},{1L,0x164E3B97L,0x96C7C1FEL,1UL,0xBDL,0xE8260DE658D3E307L,0x6DE15622L},{1L,0x164E3B97L,0x96C7C1FEL,1UL,0xBDL,0xE8260DE658D3E307L,0x6DE15622L},{1L,0x164E3B97L,0x96C7C1FEL,1UL,0xBDL,0xE8260DE658D3E307L,0x6DE15622L},{1L,0x164E3B97L,0x96C7C1FEL,1UL,0xBDL,0xE8260DE658D3E307L,0x6DE15622L}}, // p_1492->g_1295
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), // p_1492->g_1308
        (void*)0, // p_1492->g_1318
        (-7L), // p_1492->g_1342
        (VECTOR(int16_t, 16))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x539DL), 0x539DL), 0x539DL, 7L, 0x539DL, (VECTOR(int16_t, 2))(7L, 0x539DL), (VECTOR(int16_t, 2))(7L, 0x539DL), 7L, 0x539DL, 7L, 0x539DL), // p_1492->g_1343
        0x1CE37011DB9F5DA8L, // p_1492->g_1362
        4294967288UL, // p_1492->g_1376
        (VECTOR(uint32_t, 8))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 4294967292UL), 4294967292UL), 4294967292UL, 4294967286UL, 4294967292UL), // p_1492->g_1383
        (VECTOR(uint32_t, 8))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0xB30AC83FL), 0xB30AC83FL), 0xB30AC83FL, 4294967286UL, 0xB30AC83FL), // p_1492->g_1428
        (VECTOR(int32_t, 16))(0x5D4D5151L, (VECTOR(int32_t, 4))(0x5D4D5151L, (VECTOR(int32_t, 2))(0x5D4D5151L, (-2L)), (-2L)), (-2L), 0x5D4D5151L, (-2L), (VECTOR(int32_t, 2))(0x5D4D5151L, (-2L)), (VECTOR(int32_t, 2))(0x5D4D5151L, (-2L)), 0x5D4D5151L, (-2L), 0x5D4D5151L, (-2L)), // p_1492->g_1434
        0x272781DDL, // p_1492->g_1447
        0, // p_1492->v_collective
        sequence_input[get_global_id(0)], // p_1492->global_0_offset
        sequence_input[get_global_id(1)], // p_1492->global_1_offset
        sequence_input[get_global_id(2)], // p_1492->global_2_offset
        sequence_input[get_local_id(0)], // p_1492->local_0_offset
        sequence_input[get_local_id(1)], // p_1492->local_1_offset
        sequence_input[get_local_id(2)], // p_1492->local_2_offset
        sequence_input[get_group_id(0)], // p_1492->group_0_offset
        sequence_input[get_group_id(1)], // p_1492->group_1_offset
        sequence_input[get_group_id(2)], // p_1492->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 91)), permutations[0][get_linear_local_id()])), // p_1492->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1493 = c_1494;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1492);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1492->g_2, "p_1492->g_2", print_hash_value);
    transparent_crc(p_1492->g_3, "p_1492->g_3", print_hash_value);
    transparent_crc(p_1492->g_4, "p_1492->g_4", print_hash_value);
    transparent_crc(p_1492->g_9, "p_1492->g_9", print_hash_value);
    transparent_crc(p_1492->g_31, "p_1492->g_31", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1492->g_39[i], "p_1492->g_39[i]", print_hash_value);

    }
    transparent_crc(p_1492->g_51, "p_1492->g_51", print_hash_value);
    transparent_crc(p_1492->g_56, "p_1492->g_56", print_hash_value);
    transparent_crc(p_1492->g_83.f0, "p_1492->g_83.f0", print_hash_value);
    transparent_crc(p_1492->g_92.s0, "p_1492->g_92.s0", print_hash_value);
    transparent_crc(p_1492->g_92.s1, "p_1492->g_92.s1", print_hash_value);
    transparent_crc(p_1492->g_92.s2, "p_1492->g_92.s2", print_hash_value);
    transparent_crc(p_1492->g_92.s3, "p_1492->g_92.s3", print_hash_value);
    transparent_crc(p_1492->g_92.s4, "p_1492->g_92.s4", print_hash_value);
    transparent_crc(p_1492->g_92.s5, "p_1492->g_92.s5", print_hash_value);
    transparent_crc(p_1492->g_92.s6, "p_1492->g_92.s6", print_hash_value);
    transparent_crc(p_1492->g_92.s7, "p_1492->g_92.s7", print_hash_value);
    transparent_crc(p_1492->g_92.s8, "p_1492->g_92.s8", print_hash_value);
    transparent_crc(p_1492->g_92.s9, "p_1492->g_92.s9", print_hash_value);
    transparent_crc(p_1492->g_92.sa, "p_1492->g_92.sa", print_hash_value);
    transparent_crc(p_1492->g_92.sb, "p_1492->g_92.sb", print_hash_value);
    transparent_crc(p_1492->g_92.sc, "p_1492->g_92.sc", print_hash_value);
    transparent_crc(p_1492->g_92.sd, "p_1492->g_92.sd", print_hash_value);
    transparent_crc(p_1492->g_92.se, "p_1492->g_92.se", print_hash_value);
    transparent_crc(p_1492->g_92.sf, "p_1492->g_92.sf", print_hash_value);
    transparent_crc(p_1492->g_102, "p_1492->g_102", print_hash_value);
    transparent_crc(p_1492->g_115.s0, "p_1492->g_115.s0", print_hash_value);
    transparent_crc(p_1492->g_115.s1, "p_1492->g_115.s1", print_hash_value);
    transparent_crc(p_1492->g_115.s2, "p_1492->g_115.s2", print_hash_value);
    transparent_crc(p_1492->g_115.s3, "p_1492->g_115.s3", print_hash_value);
    transparent_crc(p_1492->g_115.s4, "p_1492->g_115.s4", print_hash_value);
    transparent_crc(p_1492->g_115.s5, "p_1492->g_115.s5", print_hash_value);
    transparent_crc(p_1492->g_115.s6, "p_1492->g_115.s6", print_hash_value);
    transparent_crc(p_1492->g_115.s7, "p_1492->g_115.s7", print_hash_value);
    transparent_crc(p_1492->g_115.s8, "p_1492->g_115.s8", print_hash_value);
    transparent_crc(p_1492->g_115.s9, "p_1492->g_115.s9", print_hash_value);
    transparent_crc(p_1492->g_115.sa, "p_1492->g_115.sa", print_hash_value);
    transparent_crc(p_1492->g_115.sb, "p_1492->g_115.sb", print_hash_value);
    transparent_crc(p_1492->g_115.sc, "p_1492->g_115.sc", print_hash_value);
    transparent_crc(p_1492->g_115.sd, "p_1492->g_115.sd", print_hash_value);
    transparent_crc(p_1492->g_115.se, "p_1492->g_115.se", print_hash_value);
    transparent_crc(p_1492->g_115.sf, "p_1492->g_115.sf", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1492->g_124[i], "p_1492->g_124[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1492->g_126[i], "p_1492->g_126[i]", print_hash_value);

    }
    transparent_crc(p_1492->g_128, "p_1492->g_128", print_hash_value);
    transparent_crc(p_1492->g_145.s0, "p_1492->g_145.s0", print_hash_value);
    transparent_crc(p_1492->g_145.s1, "p_1492->g_145.s1", print_hash_value);
    transparent_crc(p_1492->g_145.s2, "p_1492->g_145.s2", print_hash_value);
    transparent_crc(p_1492->g_145.s3, "p_1492->g_145.s3", print_hash_value);
    transparent_crc(p_1492->g_145.s4, "p_1492->g_145.s4", print_hash_value);
    transparent_crc(p_1492->g_145.s5, "p_1492->g_145.s5", print_hash_value);
    transparent_crc(p_1492->g_145.s6, "p_1492->g_145.s6", print_hash_value);
    transparent_crc(p_1492->g_145.s7, "p_1492->g_145.s7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1492->g_147[i][j][k], "p_1492->g_147[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1492->g_150[i][j], "p_1492->g_150[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1492->g_160, "p_1492->g_160", print_hash_value);
    transparent_crc(p_1492->g_165, "p_1492->g_165", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1492->g_172[i].f0, "p_1492->g_172[i].f0", print_hash_value);
        transparent_crc(p_1492->g_172[i].f1, "p_1492->g_172[i].f1", print_hash_value);
        transparent_crc(p_1492->g_172[i].f2, "p_1492->g_172[i].f2", print_hash_value);
        transparent_crc(p_1492->g_172[i].f3, "p_1492->g_172[i].f3", print_hash_value);
        transparent_crc(p_1492->g_172[i].f4, "p_1492->g_172[i].f4", print_hash_value);
        transparent_crc(p_1492->g_172[i].f5, "p_1492->g_172[i].f5", print_hash_value);
        transparent_crc(p_1492->g_172[i].f6, "p_1492->g_172[i].f6", print_hash_value);

    }
    transparent_crc(p_1492->g_177.x, "p_1492->g_177.x", print_hash_value);
    transparent_crc(p_1492->g_177.y, "p_1492->g_177.y", print_hash_value);
    transparent_crc(p_1492->g_193, "p_1492->g_193", print_hash_value);
    transparent_crc(p_1492->g_224.x, "p_1492->g_224.x", print_hash_value);
    transparent_crc(p_1492->g_224.y, "p_1492->g_224.y", print_hash_value);
    transparent_crc(p_1492->g_224.z, "p_1492->g_224.z", print_hash_value);
    transparent_crc(p_1492->g_224.w, "p_1492->g_224.w", print_hash_value);
    transparent_crc(p_1492->g_229, "p_1492->g_229", print_hash_value);
    transparent_crc(p_1492->g_239, "p_1492->g_239", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1492->g_244[i][j], "p_1492->g_244[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1492->g_253.f0, "p_1492->g_253.f0", print_hash_value);
    transparent_crc(p_1492->g_265, "p_1492->g_265", print_hash_value);
    transparent_crc(p_1492->g_307.s0, "p_1492->g_307.s0", print_hash_value);
    transparent_crc(p_1492->g_307.s1, "p_1492->g_307.s1", print_hash_value);
    transparent_crc(p_1492->g_307.s2, "p_1492->g_307.s2", print_hash_value);
    transparent_crc(p_1492->g_307.s3, "p_1492->g_307.s3", print_hash_value);
    transparent_crc(p_1492->g_307.s4, "p_1492->g_307.s4", print_hash_value);
    transparent_crc(p_1492->g_307.s5, "p_1492->g_307.s5", print_hash_value);
    transparent_crc(p_1492->g_307.s6, "p_1492->g_307.s6", print_hash_value);
    transparent_crc(p_1492->g_307.s7, "p_1492->g_307.s7", print_hash_value);
    transparent_crc(p_1492->g_307.s8, "p_1492->g_307.s8", print_hash_value);
    transparent_crc(p_1492->g_307.s9, "p_1492->g_307.s9", print_hash_value);
    transparent_crc(p_1492->g_307.sa, "p_1492->g_307.sa", print_hash_value);
    transparent_crc(p_1492->g_307.sb, "p_1492->g_307.sb", print_hash_value);
    transparent_crc(p_1492->g_307.sc, "p_1492->g_307.sc", print_hash_value);
    transparent_crc(p_1492->g_307.sd, "p_1492->g_307.sd", print_hash_value);
    transparent_crc(p_1492->g_307.se, "p_1492->g_307.se", print_hash_value);
    transparent_crc(p_1492->g_307.sf, "p_1492->g_307.sf", print_hash_value);
    transparent_crc(p_1492->g_312, "p_1492->g_312", print_hash_value);
    transparent_crc(p_1492->g_320, "p_1492->g_320", print_hash_value);
    transparent_crc(p_1492->g_348, "p_1492->g_348", print_hash_value);
    transparent_crc(p_1492->g_393, "p_1492->g_393", print_hash_value);
    transparent_crc(p_1492->g_406.s0, "p_1492->g_406.s0", print_hash_value);
    transparent_crc(p_1492->g_406.s1, "p_1492->g_406.s1", print_hash_value);
    transparent_crc(p_1492->g_406.s2, "p_1492->g_406.s2", print_hash_value);
    transparent_crc(p_1492->g_406.s3, "p_1492->g_406.s3", print_hash_value);
    transparent_crc(p_1492->g_406.s4, "p_1492->g_406.s4", print_hash_value);
    transparent_crc(p_1492->g_406.s5, "p_1492->g_406.s5", print_hash_value);
    transparent_crc(p_1492->g_406.s6, "p_1492->g_406.s6", print_hash_value);
    transparent_crc(p_1492->g_406.s7, "p_1492->g_406.s7", print_hash_value);
    transparent_crc(p_1492->g_406.s8, "p_1492->g_406.s8", print_hash_value);
    transparent_crc(p_1492->g_406.s9, "p_1492->g_406.s9", print_hash_value);
    transparent_crc(p_1492->g_406.sa, "p_1492->g_406.sa", print_hash_value);
    transparent_crc(p_1492->g_406.sb, "p_1492->g_406.sb", print_hash_value);
    transparent_crc(p_1492->g_406.sc, "p_1492->g_406.sc", print_hash_value);
    transparent_crc(p_1492->g_406.sd, "p_1492->g_406.sd", print_hash_value);
    transparent_crc(p_1492->g_406.se, "p_1492->g_406.se", print_hash_value);
    transparent_crc(p_1492->g_406.sf, "p_1492->g_406.sf", print_hash_value);
    transparent_crc(p_1492->g_494.f0, "p_1492->g_494.f0", print_hash_value);
    transparent_crc(p_1492->g_494.f1, "p_1492->g_494.f1", print_hash_value);
    transparent_crc(p_1492->g_494.f2, "p_1492->g_494.f2", print_hash_value);
    transparent_crc(p_1492->g_494.f3, "p_1492->g_494.f3", print_hash_value);
    transparent_crc(p_1492->g_494.f4, "p_1492->g_494.f4", print_hash_value);
    transparent_crc(p_1492->g_494.f5, "p_1492->g_494.f5", print_hash_value);
    transparent_crc(p_1492->g_494.f6, "p_1492->g_494.f6", print_hash_value);
    transparent_crc(p_1492->g_523, "p_1492->g_523", print_hash_value);
    transparent_crc(p_1492->g_564, "p_1492->g_564", print_hash_value);
    transparent_crc(p_1492->g_577.s0, "p_1492->g_577.s0", print_hash_value);
    transparent_crc(p_1492->g_577.s1, "p_1492->g_577.s1", print_hash_value);
    transparent_crc(p_1492->g_577.s2, "p_1492->g_577.s2", print_hash_value);
    transparent_crc(p_1492->g_577.s3, "p_1492->g_577.s3", print_hash_value);
    transparent_crc(p_1492->g_577.s4, "p_1492->g_577.s4", print_hash_value);
    transparent_crc(p_1492->g_577.s5, "p_1492->g_577.s5", print_hash_value);
    transparent_crc(p_1492->g_577.s6, "p_1492->g_577.s6", print_hash_value);
    transparent_crc(p_1492->g_577.s7, "p_1492->g_577.s7", print_hash_value);
    transparent_crc(p_1492->g_579.x, "p_1492->g_579.x", print_hash_value);
    transparent_crc(p_1492->g_579.y, "p_1492->g_579.y", print_hash_value);
    transparent_crc(p_1492->g_599, "p_1492->g_599", print_hash_value);
    transparent_crc(p_1492->g_602, "p_1492->g_602", print_hash_value);
    transparent_crc(p_1492->g_644.f0, "p_1492->g_644.f0", print_hash_value);
    transparent_crc(p_1492->g_652.x, "p_1492->g_652.x", print_hash_value);
    transparent_crc(p_1492->g_652.y, "p_1492->g_652.y", print_hash_value);
    transparent_crc(p_1492->g_652.z, "p_1492->g_652.z", print_hash_value);
    transparent_crc(p_1492->g_652.w, "p_1492->g_652.w", print_hash_value);
    transparent_crc(p_1492->g_661.x, "p_1492->g_661.x", print_hash_value);
    transparent_crc(p_1492->g_661.y, "p_1492->g_661.y", print_hash_value);
    transparent_crc(p_1492->g_685, "p_1492->g_685", print_hash_value);
    transparent_crc(p_1492->g_689.s0, "p_1492->g_689.s0", print_hash_value);
    transparent_crc(p_1492->g_689.s1, "p_1492->g_689.s1", print_hash_value);
    transparent_crc(p_1492->g_689.s2, "p_1492->g_689.s2", print_hash_value);
    transparent_crc(p_1492->g_689.s3, "p_1492->g_689.s3", print_hash_value);
    transparent_crc(p_1492->g_689.s4, "p_1492->g_689.s4", print_hash_value);
    transparent_crc(p_1492->g_689.s5, "p_1492->g_689.s5", print_hash_value);
    transparent_crc(p_1492->g_689.s6, "p_1492->g_689.s6", print_hash_value);
    transparent_crc(p_1492->g_689.s7, "p_1492->g_689.s7", print_hash_value);
    transparent_crc(p_1492->g_689.s8, "p_1492->g_689.s8", print_hash_value);
    transparent_crc(p_1492->g_689.s9, "p_1492->g_689.s9", print_hash_value);
    transparent_crc(p_1492->g_689.sa, "p_1492->g_689.sa", print_hash_value);
    transparent_crc(p_1492->g_689.sb, "p_1492->g_689.sb", print_hash_value);
    transparent_crc(p_1492->g_689.sc, "p_1492->g_689.sc", print_hash_value);
    transparent_crc(p_1492->g_689.sd, "p_1492->g_689.sd", print_hash_value);
    transparent_crc(p_1492->g_689.se, "p_1492->g_689.se", print_hash_value);
    transparent_crc(p_1492->g_689.sf, "p_1492->g_689.sf", print_hash_value);
    transparent_crc(p_1492->g_708.f0, "p_1492->g_708.f0", print_hash_value);
    transparent_crc(p_1492->g_708.f1, "p_1492->g_708.f1", print_hash_value);
    transparent_crc(p_1492->g_708.f2, "p_1492->g_708.f2", print_hash_value);
    transparent_crc(p_1492->g_708.f3, "p_1492->g_708.f3", print_hash_value);
    transparent_crc(p_1492->g_708.f4, "p_1492->g_708.f4", print_hash_value);
    transparent_crc(p_1492->g_708.f5, "p_1492->g_708.f5", print_hash_value);
    transparent_crc(p_1492->g_708.f6, "p_1492->g_708.f6", print_hash_value);
    transparent_crc(p_1492->g_863.s0, "p_1492->g_863.s0", print_hash_value);
    transparent_crc(p_1492->g_863.s1, "p_1492->g_863.s1", print_hash_value);
    transparent_crc(p_1492->g_863.s2, "p_1492->g_863.s2", print_hash_value);
    transparent_crc(p_1492->g_863.s3, "p_1492->g_863.s3", print_hash_value);
    transparent_crc(p_1492->g_863.s4, "p_1492->g_863.s4", print_hash_value);
    transparent_crc(p_1492->g_863.s5, "p_1492->g_863.s5", print_hash_value);
    transparent_crc(p_1492->g_863.s6, "p_1492->g_863.s6", print_hash_value);
    transparent_crc(p_1492->g_863.s7, "p_1492->g_863.s7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1492->g_872[i][j][k], "p_1492->g_872[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1492->g_899.f0, "p_1492->g_899.f0", print_hash_value);
    transparent_crc(p_1492->g_899.f1, "p_1492->g_899.f1", print_hash_value);
    transparent_crc(p_1492->g_899.f2, "p_1492->g_899.f2", print_hash_value);
    transparent_crc(p_1492->g_899.f3, "p_1492->g_899.f3", print_hash_value);
    transparent_crc(p_1492->g_899.f4, "p_1492->g_899.f4", print_hash_value);
    transparent_crc(p_1492->g_899.f5, "p_1492->g_899.f5", print_hash_value);
    transparent_crc(p_1492->g_899.f6, "p_1492->g_899.f6", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1492->g_900[i][j][k].f0, "p_1492->g_900[i][j][k].f0", print_hash_value);
                transparent_crc(p_1492->g_900[i][j][k].f1, "p_1492->g_900[i][j][k].f1", print_hash_value);
                transparent_crc(p_1492->g_900[i][j][k].f2, "p_1492->g_900[i][j][k].f2", print_hash_value);
                transparent_crc(p_1492->g_900[i][j][k].f3, "p_1492->g_900[i][j][k].f3", print_hash_value);
                transparent_crc(p_1492->g_900[i][j][k].f4, "p_1492->g_900[i][j][k].f4", print_hash_value);
                transparent_crc(p_1492->g_900[i][j][k].f5, "p_1492->g_900[i][j][k].f5", print_hash_value);
                transparent_crc(p_1492->g_900[i][j][k].f6, "p_1492->g_900[i][j][k].f6", print_hash_value);

            }
        }
    }
    transparent_crc(p_1492->g_903.s0, "p_1492->g_903.s0", print_hash_value);
    transparent_crc(p_1492->g_903.s1, "p_1492->g_903.s1", print_hash_value);
    transparent_crc(p_1492->g_903.s2, "p_1492->g_903.s2", print_hash_value);
    transparent_crc(p_1492->g_903.s3, "p_1492->g_903.s3", print_hash_value);
    transparent_crc(p_1492->g_903.s4, "p_1492->g_903.s4", print_hash_value);
    transparent_crc(p_1492->g_903.s5, "p_1492->g_903.s5", print_hash_value);
    transparent_crc(p_1492->g_903.s6, "p_1492->g_903.s6", print_hash_value);
    transparent_crc(p_1492->g_903.s7, "p_1492->g_903.s7", print_hash_value);
    transparent_crc(p_1492->g_903.s8, "p_1492->g_903.s8", print_hash_value);
    transparent_crc(p_1492->g_903.s9, "p_1492->g_903.s9", print_hash_value);
    transparent_crc(p_1492->g_903.sa, "p_1492->g_903.sa", print_hash_value);
    transparent_crc(p_1492->g_903.sb, "p_1492->g_903.sb", print_hash_value);
    transparent_crc(p_1492->g_903.sc, "p_1492->g_903.sc", print_hash_value);
    transparent_crc(p_1492->g_903.sd, "p_1492->g_903.sd", print_hash_value);
    transparent_crc(p_1492->g_903.se, "p_1492->g_903.se", print_hash_value);
    transparent_crc(p_1492->g_903.sf, "p_1492->g_903.sf", print_hash_value);
    transparent_crc(p_1492->g_904.x, "p_1492->g_904.x", print_hash_value);
    transparent_crc(p_1492->g_904.y, "p_1492->g_904.y", print_hash_value);
    transparent_crc(p_1492->g_917.s0, "p_1492->g_917.s0", print_hash_value);
    transparent_crc(p_1492->g_917.s1, "p_1492->g_917.s1", print_hash_value);
    transparent_crc(p_1492->g_917.s2, "p_1492->g_917.s2", print_hash_value);
    transparent_crc(p_1492->g_917.s3, "p_1492->g_917.s3", print_hash_value);
    transparent_crc(p_1492->g_917.s4, "p_1492->g_917.s4", print_hash_value);
    transparent_crc(p_1492->g_917.s5, "p_1492->g_917.s5", print_hash_value);
    transparent_crc(p_1492->g_917.s6, "p_1492->g_917.s6", print_hash_value);
    transparent_crc(p_1492->g_917.s7, "p_1492->g_917.s7", print_hash_value);
    transparent_crc(p_1492->g_937.f0, "p_1492->g_937.f0", print_hash_value);
    transparent_crc(p_1492->g_951.s0, "p_1492->g_951.s0", print_hash_value);
    transparent_crc(p_1492->g_951.s1, "p_1492->g_951.s1", print_hash_value);
    transparent_crc(p_1492->g_951.s2, "p_1492->g_951.s2", print_hash_value);
    transparent_crc(p_1492->g_951.s3, "p_1492->g_951.s3", print_hash_value);
    transparent_crc(p_1492->g_951.s4, "p_1492->g_951.s4", print_hash_value);
    transparent_crc(p_1492->g_951.s5, "p_1492->g_951.s5", print_hash_value);
    transparent_crc(p_1492->g_951.s6, "p_1492->g_951.s6", print_hash_value);
    transparent_crc(p_1492->g_951.s7, "p_1492->g_951.s7", print_hash_value);
    transparent_crc(p_1492->g_951.s8, "p_1492->g_951.s8", print_hash_value);
    transparent_crc(p_1492->g_951.s9, "p_1492->g_951.s9", print_hash_value);
    transparent_crc(p_1492->g_951.sa, "p_1492->g_951.sa", print_hash_value);
    transparent_crc(p_1492->g_951.sb, "p_1492->g_951.sb", print_hash_value);
    transparent_crc(p_1492->g_951.sc, "p_1492->g_951.sc", print_hash_value);
    transparent_crc(p_1492->g_951.sd, "p_1492->g_951.sd", print_hash_value);
    transparent_crc(p_1492->g_951.se, "p_1492->g_951.se", print_hash_value);
    transparent_crc(p_1492->g_951.sf, "p_1492->g_951.sf", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1492->g_1011[i][j], "p_1492->g_1011[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1492->g_1025, "p_1492->g_1025", print_hash_value);
    transparent_crc(p_1492->g_1031.f0, "p_1492->g_1031.f0", print_hash_value);
    transparent_crc(p_1492->g_1039.f0, "p_1492->g_1039.f0", print_hash_value);
    transparent_crc(p_1492->g_1039.f1, "p_1492->g_1039.f1", print_hash_value);
    transparent_crc(p_1492->g_1039.f2, "p_1492->g_1039.f2", print_hash_value);
    transparent_crc(p_1492->g_1039.f3, "p_1492->g_1039.f3", print_hash_value);
    transparent_crc(p_1492->g_1039.f4, "p_1492->g_1039.f4", print_hash_value);
    transparent_crc(p_1492->g_1039.f5, "p_1492->g_1039.f5", print_hash_value);
    transparent_crc(p_1492->g_1039.f6, "p_1492->g_1039.f6", print_hash_value);
    transparent_crc(p_1492->g_1045.f0, "p_1492->g_1045.f0", print_hash_value);
    transparent_crc(p_1492->g_1045.f1, "p_1492->g_1045.f1", print_hash_value);
    transparent_crc(p_1492->g_1045.f2, "p_1492->g_1045.f2", print_hash_value);
    transparent_crc(p_1492->g_1045.f3, "p_1492->g_1045.f3", print_hash_value);
    transparent_crc(p_1492->g_1045.f4, "p_1492->g_1045.f4", print_hash_value);
    transparent_crc(p_1492->g_1045.f5, "p_1492->g_1045.f5", print_hash_value);
    transparent_crc(p_1492->g_1045.f6, "p_1492->g_1045.f6", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1492->g_1046[i].f0, "p_1492->g_1046[i].f0", print_hash_value);
        transparent_crc(p_1492->g_1046[i].f1, "p_1492->g_1046[i].f1", print_hash_value);
        transparent_crc(p_1492->g_1046[i].f2, "p_1492->g_1046[i].f2", print_hash_value);
        transparent_crc(p_1492->g_1046[i].f3, "p_1492->g_1046[i].f3", print_hash_value);
        transparent_crc(p_1492->g_1046[i].f4, "p_1492->g_1046[i].f4", print_hash_value);
        transparent_crc(p_1492->g_1046[i].f5, "p_1492->g_1046[i].f5", print_hash_value);
        transparent_crc(p_1492->g_1046[i].f6, "p_1492->g_1046[i].f6", print_hash_value);

    }
    transparent_crc(p_1492->g_1076.f0, "p_1492->g_1076.f0", print_hash_value);
    transparent_crc(p_1492->g_1076.f1, "p_1492->g_1076.f1", print_hash_value);
    transparent_crc(p_1492->g_1076.f2, "p_1492->g_1076.f2", print_hash_value);
    transparent_crc(p_1492->g_1076.f3, "p_1492->g_1076.f3", print_hash_value);
    transparent_crc(p_1492->g_1076.f4, "p_1492->g_1076.f4", print_hash_value);
    transparent_crc(p_1492->g_1076.f5, "p_1492->g_1076.f5", print_hash_value);
    transparent_crc(p_1492->g_1076.f6, "p_1492->g_1076.f6", print_hash_value);
    transparent_crc(p_1492->g_1081.f0, "p_1492->g_1081.f0", print_hash_value);
    transparent_crc(p_1492->g_1081.f1, "p_1492->g_1081.f1", print_hash_value);
    transparent_crc(p_1492->g_1081.f2, "p_1492->g_1081.f2", print_hash_value);
    transparent_crc(p_1492->g_1081.f3, "p_1492->g_1081.f3", print_hash_value);
    transparent_crc(p_1492->g_1081.f4, "p_1492->g_1081.f4", print_hash_value);
    transparent_crc(p_1492->g_1081.f5, "p_1492->g_1081.f5", print_hash_value);
    transparent_crc(p_1492->g_1081.f6, "p_1492->g_1081.f6", print_hash_value);
    transparent_crc(p_1492->g_1087.f0, "p_1492->g_1087.f0", print_hash_value);
    transparent_crc(p_1492->g_1087.f1, "p_1492->g_1087.f1", print_hash_value);
    transparent_crc(p_1492->g_1087.f2, "p_1492->g_1087.f2", print_hash_value);
    transparent_crc(p_1492->g_1087.f3, "p_1492->g_1087.f3", print_hash_value);
    transparent_crc(p_1492->g_1087.f4, "p_1492->g_1087.f4", print_hash_value);
    transparent_crc(p_1492->g_1087.f5, "p_1492->g_1087.f5", print_hash_value);
    transparent_crc(p_1492->g_1087.f6, "p_1492->g_1087.f6", print_hash_value);
    transparent_crc(p_1492->g_1098.f0, "p_1492->g_1098.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1492->g_1101[i][j][k].f0, "p_1492->g_1101[i][j][k].f0", print_hash_value);
                transparent_crc(p_1492->g_1101[i][j][k].f1, "p_1492->g_1101[i][j][k].f1", print_hash_value);
                transparent_crc(p_1492->g_1101[i][j][k].f2, "p_1492->g_1101[i][j][k].f2", print_hash_value);
                transparent_crc(p_1492->g_1101[i][j][k].f3, "p_1492->g_1101[i][j][k].f3", print_hash_value);
                transparent_crc(p_1492->g_1101[i][j][k].f4, "p_1492->g_1101[i][j][k].f4", print_hash_value);
                transparent_crc(p_1492->g_1101[i][j][k].f5, "p_1492->g_1101[i][j][k].f5", print_hash_value);
                transparent_crc(p_1492->g_1101[i][j][k].f6, "p_1492->g_1101[i][j][k].f6", print_hash_value);

            }
        }
    }
    transparent_crc(p_1492->g_1109.f0, "p_1492->g_1109.f0", print_hash_value);
    transparent_crc(p_1492->g_1109.f1, "p_1492->g_1109.f1", print_hash_value);
    transparent_crc(p_1492->g_1109.f2, "p_1492->g_1109.f2", print_hash_value);
    transparent_crc(p_1492->g_1109.f3, "p_1492->g_1109.f3", print_hash_value);
    transparent_crc(p_1492->g_1109.f4, "p_1492->g_1109.f4", print_hash_value);
    transparent_crc(p_1492->g_1109.f5, "p_1492->g_1109.f5", print_hash_value);
    transparent_crc(p_1492->g_1109.f6, "p_1492->g_1109.f6", print_hash_value);
    transparent_crc(p_1492->g_1122.x, "p_1492->g_1122.x", print_hash_value);
    transparent_crc(p_1492->g_1122.y, "p_1492->g_1122.y", print_hash_value);
    transparent_crc(p_1492->g_1122.z, "p_1492->g_1122.z", print_hash_value);
    transparent_crc(p_1492->g_1122.w, "p_1492->g_1122.w", print_hash_value);
    transparent_crc(p_1492->g_1135, "p_1492->g_1135", print_hash_value);
    transparent_crc(p_1492->g_1150.x, "p_1492->g_1150.x", print_hash_value);
    transparent_crc(p_1492->g_1150.y, "p_1492->g_1150.y", print_hash_value);
    transparent_crc(p_1492->g_1163.s0, "p_1492->g_1163.s0", print_hash_value);
    transparent_crc(p_1492->g_1163.s1, "p_1492->g_1163.s1", print_hash_value);
    transparent_crc(p_1492->g_1163.s2, "p_1492->g_1163.s2", print_hash_value);
    transparent_crc(p_1492->g_1163.s3, "p_1492->g_1163.s3", print_hash_value);
    transparent_crc(p_1492->g_1163.s4, "p_1492->g_1163.s4", print_hash_value);
    transparent_crc(p_1492->g_1163.s5, "p_1492->g_1163.s5", print_hash_value);
    transparent_crc(p_1492->g_1163.s6, "p_1492->g_1163.s6", print_hash_value);
    transparent_crc(p_1492->g_1163.s7, "p_1492->g_1163.s7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1492->g_1295[i].f0, "p_1492->g_1295[i].f0", print_hash_value);
        transparent_crc(p_1492->g_1295[i].f1, "p_1492->g_1295[i].f1", print_hash_value);
        transparent_crc(p_1492->g_1295[i].f2, "p_1492->g_1295[i].f2", print_hash_value);
        transparent_crc(p_1492->g_1295[i].f3, "p_1492->g_1295[i].f3", print_hash_value);
        transparent_crc(p_1492->g_1295[i].f4, "p_1492->g_1295[i].f4", print_hash_value);
        transparent_crc(p_1492->g_1295[i].f5, "p_1492->g_1295[i].f5", print_hash_value);
        transparent_crc(p_1492->g_1295[i].f6, "p_1492->g_1295[i].f6", print_hash_value);

    }
    transparent_crc(p_1492->g_1308.x, "p_1492->g_1308.x", print_hash_value);
    transparent_crc(p_1492->g_1308.y, "p_1492->g_1308.y", print_hash_value);
    transparent_crc(p_1492->g_1308.z, "p_1492->g_1308.z", print_hash_value);
    transparent_crc(p_1492->g_1308.w, "p_1492->g_1308.w", print_hash_value);
    transparent_crc(p_1492->g_1342, "p_1492->g_1342", print_hash_value);
    transparent_crc(p_1492->g_1343.s0, "p_1492->g_1343.s0", print_hash_value);
    transparent_crc(p_1492->g_1343.s1, "p_1492->g_1343.s1", print_hash_value);
    transparent_crc(p_1492->g_1343.s2, "p_1492->g_1343.s2", print_hash_value);
    transparent_crc(p_1492->g_1343.s3, "p_1492->g_1343.s3", print_hash_value);
    transparent_crc(p_1492->g_1343.s4, "p_1492->g_1343.s4", print_hash_value);
    transparent_crc(p_1492->g_1343.s5, "p_1492->g_1343.s5", print_hash_value);
    transparent_crc(p_1492->g_1343.s6, "p_1492->g_1343.s6", print_hash_value);
    transparent_crc(p_1492->g_1343.s7, "p_1492->g_1343.s7", print_hash_value);
    transparent_crc(p_1492->g_1343.s8, "p_1492->g_1343.s8", print_hash_value);
    transparent_crc(p_1492->g_1343.s9, "p_1492->g_1343.s9", print_hash_value);
    transparent_crc(p_1492->g_1343.sa, "p_1492->g_1343.sa", print_hash_value);
    transparent_crc(p_1492->g_1343.sb, "p_1492->g_1343.sb", print_hash_value);
    transparent_crc(p_1492->g_1343.sc, "p_1492->g_1343.sc", print_hash_value);
    transparent_crc(p_1492->g_1343.sd, "p_1492->g_1343.sd", print_hash_value);
    transparent_crc(p_1492->g_1343.se, "p_1492->g_1343.se", print_hash_value);
    transparent_crc(p_1492->g_1343.sf, "p_1492->g_1343.sf", print_hash_value);
    transparent_crc(p_1492->g_1362, "p_1492->g_1362", print_hash_value);
    transparent_crc(p_1492->g_1376, "p_1492->g_1376", print_hash_value);
    transparent_crc(p_1492->g_1383.s0, "p_1492->g_1383.s0", print_hash_value);
    transparent_crc(p_1492->g_1383.s1, "p_1492->g_1383.s1", print_hash_value);
    transparent_crc(p_1492->g_1383.s2, "p_1492->g_1383.s2", print_hash_value);
    transparent_crc(p_1492->g_1383.s3, "p_1492->g_1383.s3", print_hash_value);
    transparent_crc(p_1492->g_1383.s4, "p_1492->g_1383.s4", print_hash_value);
    transparent_crc(p_1492->g_1383.s5, "p_1492->g_1383.s5", print_hash_value);
    transparent_crc(p_1492->g_1383.s6, "p_1492->g_1383.s6", print_hash_value);
    transparent_crc(p_1492->g_1383.s7, "p_1492->g_1383.s7", print_hash_value);
    transparent_crc(p_1492->g_1428.s0, "p_1492->g_1428.s0", print_hash_value);
    transparent_crc(p_1492->g_1428.s1, "p_1492->g_1428.s1", print_hash_value);
    transparent_crc(p_1492->g_1428.s2, "p_1492->g_1428.s2", print_hash_value);
    transparent_crc(p_1492->g_1428.s3, "p_1492->g_1428.s3", print_hash_value);
    transparent_crc(p_1492->g_1428.s4, "p_1492->g_1428.s4", print_hash_value);
    transparent_crc(p_1492->g_1428.s5, "p_1492->g_1428.s5", print_hash_value);
    transparent_crc(p_1492->g_1428.s6, "p_1492->g_1428.s6", print_hash_value);
    transparent_crc(p_1492->g_1428.s7, "p_1492->g_1428.s7", print_hash_value);
    transparent_crc(p_1492->g_1434.s0, "p_1492->g_1434.s0", print_hash_value);
    transparent_crc(p_1492->g_1434.s1, "p_1492->g_1434.s1", print_hash_value);
    transparent_crc(p_1492->g_1434.s2, "p_1492->g_1434.s2", print_hash_value);
    transparent_crc(p_1492->g_1434.s3, "p_1492->g_1434.s3", print_hash_value);
    transparent_crc(p_1492->g_1434.s4, "p_1492->g_1434.s4", print_hash_value);
    transparent_crc(p_1492->g_1434.s5, "p_1492->g_1434.s5", print_hash_value);
    transparent_crc(p_1492->g_1434.s6, "p_1492->g_1434.s6", print_hash_value);
    transparent_crc(p_1492->g_1434.s7, "p_1492->g_1434.s7", print_hash_value);
    transparent_crc(p_1492->g_1434.s8, "p_1492->g_1434.s8", print_hash_value);
    transparent_crc(p_1492->g_1434.s9, "p_1492->g_1434.s9", print_hash_value);
    transparent_crc(p_1492->g_1434.sa, "p_1492->g_1434.sa", print_hash_value);
    transparent_crc(p_1492->g_1434.sb, "p_1492->g_1434.sb", print_hash_value);
    transparent_crc(p_1492->g_1434.sc, "p_1492->g_1434.sc", print_hash_value);
    transparent_crc(p_1492->g_1434.sd, "p_1492->g_1434.sd", print_hash_value);
    transparent_crc(p_1492->g_1434.se, "p_1492->g_1434.se", print_hash_value);
    transparent_crc(p_1492->g_1434.sf, "p_1492->g_1434.sf", print_hash_value);
    transparent_crc(p_1492->g_1447, "p_1492->g_1447", print_hash_value);
    transparent_crc(p_1492->v_collective, "p_1492->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 18; i++)
            transparent_crc(p_1492->g_special_values[i + 18 * get_linear_group_id()], "p_1492->g_special_values[i + 18 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 18; i++)
            transparent_crc(p_1492->l_special_values[i], "p_1492->l_special_values[i]", print_hash_value);
    transparent_crc(p_1492->l_comm_values[get_linear_local_id()], "p_1492->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1492->g_comm_values[get_linear_group_id() * 91 + get_linear_local_id()], "p_1492->g_comm_values[get_linear_group_id() * 91 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
