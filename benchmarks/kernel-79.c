// --atomics 41 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 7,61,18 -l 7,1,1
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

__constant uint32_t permutations[10][7] = {
{1,0,4,3,5,2,6}, // permutation 0
{4,0,3,2,6,5,1}, // permutation 1
{4,2,0,1,5,6,3}, // permutation 2
{4,6,2,3,1,5,0}, // permutation 3
{6,2,4,0,3,5,1}, // permutation 4
{5,6,1,3,2,4,0}, // permutation 5
{4,0,5,2,1,3,6}, // permutation 6
{4,5,0,3,6,2,1}, // permutation 7
{2,3,1,6,5,4,0}, // permutation 8
{1,2,3,0,6,5,4} // permutation 9
};

// Seed: 1008185128

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int16_t  f0;
   int32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   volatile uint32_t  f4;
   int32_t  f5;
   int64_t  f6;
};

struct S1 {
    volatile int32_t g_2;
    int32_t g_3;
    VECTOR(int32_t, 2) g_12;
    volatile VECTOR(uint32_t, 4) g_14;
    VECTOR(int8_t, 2) g_17;
    VECTOR(int32_t, 2) g_20;
    VECTOR(uint32_t, 2) g_21;
    volatile VECTOR(int32_t, 16) g_29;
    volatile int32_t g_53;
    int32_t g_54;
    int64_t g_84;
    uint64_t g_123;
    volatile VECTOR(int16_t, 4) g_131;
    int8_t g_149[3][3][7];
    uint8_t g_152;
    volatile struct S0 g_167;
    uint8_t g_185;
    int64_t g_188;
    uint64_t *g_196;
    uint64_t **g_195;
    int32_t *g_200;
    int32_t ** volatile g_199;
    volatile struct S0 g_204;
    struct S0 g_209;
    uint32_t g_233[5];
    VECTOR(int16_t, 8) g_247;
    VECTOR(int16_t, 16) g_248;
    uint16_t g_274;
    VECTOR(uint32_t, 2) g_275;
    volatile VECTOR(uint16_t, 2) g_279;
    int32_t ** volatile g_283;
    int32_t ** volatile g_287;
    volatile int32_t g_305[8][10];
    volatile int32_t g_306;
    volatile int32_t g_307;
    volatile int32_t g_308;
    volatile int32_t g_309;
    volatile int32_t g_310;
    volatile int32_t g_311;
    volatile int32_t g_312;
    volatile int32_t *g_304[7][7];
    VECTOR(uint32_t, 8) g_327;
    volatile struct S0 * volatile g_358;
    int32_t * volatile g_363;
    VECTOR(int32_t, 16) g_368;
    volatile VECTOR(int32_t, 4) g_370;
    VECTOR(int32_t, 2) g_371;
    volatile struct S0 g_391;
    volatile struct S0 * volatile g_392;
    int32_t ** volatile g_423;
    int16_t *g_466;
    int16_t **g_465;
    int16_t *** volatile g_467;
    volatile VECTOR(int32_t, 8) g_472;
    uint64_t g_506[1][8];
    volatile VECTOR(int64_t, 8) g_509;
    int32_t * volatile g_517[9][9];
    int32_t * volatile * volatile g_516[5][10];
    int32_t *g_524[8][3];
    int32_t **g_523;
    int32_t *** volatile g_522;
    int8_t *g_573;
    int8_t **g_572;
    int32_t g_635;
    struct S0 g_666;
    int8_t ***g_695;
    int8_t ***g_696;
    int8_t ***g_697[2][8][5];
    int8_t ***g_698[6][4][10];
    struct S0 g_709[5][5];
    volatile VECTOR(uint8_t, 16) g_715;
    volatile VECTOR(uint8_t, 2) g_716;
    volatile VECTOR(uint8_t, 8) g_717;
    VECTOR(uint8_t, 4) g_718;
    VECTOR(uint8_t, 8) g_720;
    struct S0 *g_722[4];
    struct S0 **g_721[1];
    volatile struct S0 g_724;
    int32_t * volatile g_731;
    uint64_t g_743;
    struct S0 g_749;
    VECTOR(int32_t, 2) g_752;
    volatile struct S0 * volatile g_773;
    volatile VECTOR(int32_t, 2) g_777;
    volatile VECTOR(int32_t, 2) g_809;
    VECTOR(int32_t, 2) g_810;
    VECTOR(int8_t, 2) g_820;
    VECTOR(int8_t, 2) g_829;
    struct S0 g_847;
    int32_t ** volatile g_849;
    int32_t * volatile g_865;
    struct S0 g_866[3];
    struct S0 * volatile g_867;
    int32_t ** volatile g_872;
    VECTOR(uint64_t, 16) g_897;
    int32_t * volatile g_943;
    volatile VECTOR(uint32_t, 2) g_969;
    uint64_t g_991[6][10][4];
    int32_t * volatile g_994;
    int64_t g_996;
    uint8_t g_999;
    int32_t **g_1014;
    VECTOR(int16_t, 8) g_1022;
    VECTOR(uint8_t, 16) g_1028;
    struct S0 g_1055[9];
    int32_t g_1063[7][1][3];
    int32_t *** volatile g_1064[2][6][5];
    int32_t *** volatile g_1065;
    volatile VECTOR(uint32_t, 4) g_1078;
    uint32_t g_1088;
    volatile VECTOR(int8_t, 4) g_1102;
    int32_t ** volatile g_1123;
    int32_t * volatile g_1125;
    int32_t * volatile g_1126[1][5][9];
    int64_t g_1130;
    volatile struct S0 * volatile g_1145;
    volatile struct S0 g_1149;
    int32_t ** volatile g_1169;
    volatile VECTOR(uint16_t, 8) g_1182;
    volatile VECTOR(uint16_t, 2) g_1183;
    VECTOR(uint16_t, 16) g_1184;
    VECTOR(int8_t, 8) g_1202;
    volatile VECTOR(uint8_t, 2) g_1205;
    VECTOR(int16_t, 4) g_1208;
    VECTOR(int16_t, 8) g_1209;
    VECTOR(int8_t, 8) g_1210;
    VECTOR(uint8_t, 16) g_1211;
    VECTOR(uint32_t, 16) g_1228;
    VECTOR(int32_t, 8) g_1232;
    uint8_t g_1236;
    struct S0 g_1344;
    int64_t g_1350;
    volatile VECTOR(int32_t, 8) g_1357;
    VECTOR(int32_t, 16) g_1366;
    int32_t ** volatile g_1390[2];
    int32_t ** volatile g_1391;
    VECTOR(int16_t, 8) g_1421;
    int32_t ** volatile g_1442;
    volatile struct S0 g_1455;
    volatile struct S0 g_1456;
    uint64_t g_1473;
    volatile VECTOR(uint64_t, 2) g_1535;
    uint8_t g_1576;
    volatile struct S0 g_1592[4];
    volatile struct S0 g_1593[7][1];
    VECTOR(int8_t, 8) g_1604;
    VECTOR(int8_t, 2) g_1605;
    VECTOR(uint16_t, 16) g_1609;
    int32_t **g_1646[1][2];
    int32_t ***g_1645[2];
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
uint32_t  func_1(struct S1 * p_1664);
int32_t * func_33(uint32_t  p_34, int8_t * p_35, int32_t  p_36, int16_t  p_37, struct S1 * p_1664);
int16_t  func_40(int8_t * p_41, int32_t * p_42, uint32_t  p_43, struct S1 * p_1664);
int8_t * func_44(uint32_t  p_45, int32_t  p_46, struct S1 * p_1664);
int32_t  func_48(int32_t * p_49, uint32_t  p_50, struct S1 * p_1664);
int32_t * func_51(int32_t * p_52, struct S1 * p_1664);
int8_t * func_59(int8_t * p_60, uint16_t  p_61, struct S1 * p_1664);
int32_t  func_63(uint32_t  p_64, int8_t  p_65, struct S1 * p_1664);
int32_t * func_73(uint64_t  p_74, int8_t  p_75, struct S1 * p_1664);
uint16_t  func_85(int32_t * p_86, struct S1 * p_1664);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1664->g_3 p_1664->g_274 p_1664->g_572 p_1664->g_573 p_1664->g_149 p_1664->g_392 p_1664->g_204 p_1664->g_867 p_1664->g_209 p_1664->g_1149 p_1664->g_200 p_1664->g_749.f5 p_1664->g_1169 p_1664->g_749.f6 p_1664->g_1182 p_1664->g_1183 p_1664->g_1184 p_1664->g_715 p_1664->g_1202 p_1664->g_718 p_1664->g_991 p_1664->g_749.f1 p_1664->g_54 p_1664->g_1205 p_1664->g_1208 p_1664->g_1209 p_1664->g_1210 p_1664->g_1211 p_1664->g_866.f0 p_1664->g_152 p_1664->g_327 p_1664->g_1228 p_1664->g_709.f2 p_1664->g_1232 p_1664->g_195 p_1664->g_196 p_1664->g_123 p_1664->g_1236 p_1664->g_1344 p_1664->g_1350 p_1664->g_749.f0 p_1664->g_865 p_1664->g_709.f5 p_1664->g_1357 p_1664->g_363 p_1664->g_1366 p_1664->g_696 p_1664->g_749.f2 p_1664->g_1391 p_1664->g_472 p_1664->g_370 p_1664->g_777 p_1664->g_709.f4 p_1664->g_666 p_1664->g_199 p_1664->g_1421 p_1664->g_391.f0 p_1664->g_275 p_1664->g_897 p_1664->g_872 p_1664->g_287 p_1664->g_1102 p_1664->g_248 p_1664->g_716 p_1664->g_1455 p_1664->g_1456.f6 p_1664->g_391.f5 p_1664->g_247 p_1664->g_21 p_1664->g_1473 p_1664->g_847.f5 p_1664->g_84 p_1664->l_comm_values p_1664->g_996 p_1664->g_167.f4 p_1664->g_820 p_1664->g_20 p_1664->g_1130 p_1664->g_809 p_1664->g_1645 p_1664->g_522 p_1664->g_523 p_1664->g_810 p_1664->g_509 p_1664->g_717 p_1664->g_1576
 * writes: p_1664->g_3 p_1664->g_1130 p_1664->g_274 p_1664->g_391 p_1664->g_209.f0 p_1664->g_54 p_1664->g_743 p_1664->g_749.f5 p_1664->g_200 p_1664->g_1184 p_1664->g_149 p_1664->g_698 p_1664->g_185 p_1664->g_1055.f6 p_1664->g_123 p_1664->g_991 p_1664->g_718 p_1664->g_572 p_1664->g_847.f0 p_1664->g_1350 p_1664->g_1236 p_1664->g_209.f6 p_1664->g_1456 p_1664->g_1473 p_1664->g_196 p_1664->g_1344.f5 p_1664->g_20 p_1664->g_1645 p_1664->g_523 p_1664->g_1014 p_1664->g_516 p_1664->g_209.f5
 */
uint32_t  func_1(struct S1 * p_1664)
{ /* block id: 4 */
    VECTOR(int32_t, 4) l_10 = (VECTOR(int32_t, 4))(0x7858F9C2L, (VECTOR(int32_t, 2))(0x7858F9C2L, 0x054DBBE5L), 0x054DBBE5L);
    int32_t l_19 = 1L;
    VECTOR(uint32_t, 16) l_30 = (VECTOR(uint32_t, 16))(0x108F9809L, (VECTOR(uint32_t, 4))(0x108F9809L, (VECTOR(uint32_t, 2))(0x108F9809L, 0xF8EF5D3CL), 0xF8EF5D3CL), 0xF8EF5D3CL, 0x108F9809L, 0xF8EF5D3CL, (VECTOR(uint32_t, 2))(0x108F9809L, 0xF8EF5D3CL), (VECTOR(uint32_t, 2))(0x108F9809L, 0xF8EF5D3CL), 0x108F9809L, 0xF8EF5D3CL, 0x108F9809L, 0xF8EF5D3CL);
    int8_t *l_1135 = &p_1664->g_149[0][0][5];
    struct S0 ***l_1168[4][2] = {{&p_1664->g_721[0],&p_1664->g_721[0]},{&p_1664->g_721[0],&p_1664->g_721[0]},{&p_1664->g_721[0],&p_1664->g_721[0]},{&p_1664->g_721[0],&p_1664->g_721[0]}};
    int32_t *l_1171[9][4][3] = {{{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5}},{{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5}},{{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5}},{{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5}},{{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5}},{{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5}},{{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5}},{{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5}},{{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5},{(void*)0,&p_1664->g_666.f5,&p_1664->g_709[4][3].f5}}};
    int16_t ***l_1212 = (void*)0;
    uint32_t l_1215 = 4294967290UL;
    int64_t *l_1229 = &p_1664->g_1055[6].f6;
    int32_t l_1233 = 9L;
    uint32_t l_1234 = 1UL;
    uint8_t l_1235 = 1UL;
    VECTOR(int32_t, 8) l_1358 = (VECTOR(int32_t, 8))(0x146A8620L, (VECTOR(int32_t, 4))(0x146A8620L, (VECTOR(int32_t, 2))(0x146A8620L, (-8L)), (-8L)), (-8L), 0x146A8620L, (-8L));
    int8_t l_1375[2];
    uint8_t l_1395 = 0x82L;
    int8_t l_1414 = 0x49L;
    uint16_t l_1481 = 65533UL;
    struct S0 *l_1545 = &p_1664->g_847;
    uint32_t l_1553 = 5UL;
    VECTOR(uint16_t, 16) l_1625 = (VECTOR(uint16_t, 16))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 1UL), 1UL), 1UL, 7UL, 1UL, (VECTOR(uint16_t, 2))(7UL, 1UL), (VECTOR(uint16_t, 2))(7UL, 1UL), 7UL, 1UL, 7UL, 1UL);
    uint32_t l_1650 = 4294967293UL;
    VECTOR(int8_t, 4) l_1660 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x0AL), 0x0AL);
    VECTOR(int32_t, 16) l_1663 = (VECTOR(int32_t, 16))(0x7B8CD2C1L, (VECTOR(int32_t, 4))(0x7B8CD2C1L, (VECTOR(int32_t, 2))(0x7B8CD2C1L, 0x03C17CAAL), 0x03C17CAAL), 0x03C17CAAL, 0x7B8CD2C1L, 0x03C17CAAL, (VECTOR(int32_t, 2))(0x7B8CD2C1L, 0x03C17CAAL), (VECTOR(int32_t, 2))(0x7B8CD2C1L, 0x03C17CAAL), 0x7B8CD2C1L, 0x03C17CAAL, 0x7B8CD2C1L, 0x03C17CAAL);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1375[i] = 0x10L;
    for (p_1664->g_3 = 12; (p_1664->g_3 <= 28); p_1664->g_3 = safe_add_func_int16_t_s_s(p_1664->g_3, 4))
    { /* block id: 7 */
        int32_t *l_11 = (void*)0;
        int32_t l_13 = 0x3EE76373L;
        int8_t *l_18[9][3];
        int32_t l_28 = (-1L);
        VECTOR(uint8_t, 16) l_1033 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xF5L), 0xF5L), 0xF5L, 1UL, 0xF5L, (VECTOR(uint8_t, 2))(1UL, 0xF5L), (VECTOR(uint8_t, 2))(1UL, 0xF5L), 1UL, 0xF5L, 1UL, 0xF5L);
        VECTOR(uint16_t, 2) l_1131 = (VECTOR(uint16_t, 2))(7UL, 0x7A3AL);
        int32_t l_1138[4][9] = {{0L,1L,1L,0L,0x1DE7C181L,0x4D16306EL,0x4D16306EL,0x1DE7C181L,0L},{0L,1L,1L,0L,0x1DE7C181L,0x4D16306EL,0x4D16306EL,0x1DE7C181L,0L},{0L,1L,1L,0L,0x1DE7C181L,0x4D16306EL,0x4D16306EL,0x1DE7C181L,0L},{0L,1L,1L,0L,0x1DE7C181L,0x4D16306EL,0x4D16306EL,0x1DE7C181L,0L}};
        uint32_t l_1142 = 0x3A51D655L;
        VECTOR(uint64_t, 4) l_1174 = (VECTOR(uint64_t, 4))(0x28C7E7DDF8183CC4L, (VECTOR(uint64_t, 2))(0x28C7E7DDF8183CC4L, 18446744073709551612UL), 18446744073709551612UL);
        uint16_t l_1177 = 5UL;
        int8_t ***l_1195 = &p_1664->g_572;
        int8_t ****l_1196 = &p_1664->g_698[5][3][5];
        int8_t ***l_1197[7][6][6] = {{{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572}},{{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572}},{{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572}},{{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572}},{{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572}},{{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572}},{{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572}}};
        uint8_t *l_1203 = (void*)0;
        uint8_t *l_1204 = &p_1664->g_185;
        int i, j, k;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 3; j++)
                l_18[i][j] = (void*)0;
        }
        if ((atomic_inc(&p_1664->l_atomic_input[17]) == 8))
        { /* block id: 9 */
            VECTOR(int32_t, 4) l_6 = (VECTOR(int32_t, 4))(0x34B13281L, (VECTOR(int32_t, 2))(0x34B13281L, 1L), 1L);
            uint16_t l_7 = 8UL;
            int i;
            l_7 |= ((VECTOR(int32_t, 4))(l_6.yzww)).z;
            unsigned int result = 0;
            result += l_6.w;
            result += l_6.z;
            result += l_6.y;
            result += l_6.x;
            result += l_7;
            atomic_add(&p_1664->l_special_values[17], result);
        }
        else
        { /* block id: 11 */
            (1 + 1);
        }
        if ((safe_mod_func_int32_t_s_s((l_13 ^= ((VECTOR(int32_t, 8))(l_10.zxyxxyxx)).s0), ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_1664->g_14.ywyy)), 0x3C7D24B5L, (FAKE_DIVERGE(p_1664->local_0_offset, get_local_id(0), 10) >= p_1664->g_comm_values[p_1664->tid]), 1UL, 0xEBBD4856L, (safe_mul_func_int8_t_s_s((l_19 = ((VECTOR(int8_t, 2))(p_1664->g_17.xy)).even), (l_11 != l_11))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 4))(p_1664->g_20.yxyx)).wxyzyxyx))).s77, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0UL, 4294967287UL)), 0x38E5161EL, ((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(9UL, 0xF63EEDA7L, 0xB5F7A0D7L, 0xA36A77D7L)), ((VECTOR(uint32_t, 16))(p_1664->g_21.yxyxxyxyxyxxyyyy)).sf2a6))), 1UL)).s35))).yyxy)), (safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((0UL | GROUP_DIVERGE(1, 1)), FAKE_DIVERGE(p_1664->global_2_offset, get_global_id(2), 10))), l_28)), ((VECTOR(int32_t, 2))(p_1664->g_29.s76)).odd)), 4294967288UL, 0UL)).sc8, ((VECTOR(uint32_t, 2))(l_30.sc1))))).lo)))
        { /* block id: 16 */
            int8_t l_1023 = (-1L);
            uint64_t l_1035 = 0xCC82B54C110EA8BBL;
            uint32_t *l_1038[6] = {&p_1664->g_233[4],&p_1664->g_666.f3,&p_1664->g_233[4],&p_1664->g_233[4],&p_1664->g_666.f3,&p_1664->g_233[4]};
            uint16_t l_1124 = 0x71B0L;
            int i;
            for (l_19 = (-4); (l_19 != (-5)); l_19--)
            { /* block id: 19 */
                uint16_t l_47 = 0xC62BL;
                int16_t *l_1034 = &p_1664->g_209.f0;
                uint32_t *l_1037 = &p_1664->g_749.f3;
                uint32_t **l_1036 = &l_1037;
                int32_t *l_1127 = &p_1664->g_209.f5;
                (1 + 1);
            }
        }
        else
        { /* block id: 457 */
            int64_t l_1128 = (-1L);
            int64_t *l_1129 = &p_1664->g_1130;
            uint16_t *l_1132[6][8][5] = {{{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274}},{{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274}},{{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274}},{{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274}},{{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274}},{{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274},{(void*)0,(void*)0,&p_1664->g_274,(void*)0,&p_1664->g_274}}};
            int32_t l_1136 = 0L;
            int32_t l_1139 = (-10L);
            int32_t l_1140 = 0x564B5EDAL;
            int32_t l_1141[8][1] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
            int8_t **l_1150 = &p_1664->g_573;
            uint64_t l_1161[2][8] = {{18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL}};
            struct S0 ***l_1167[5];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1167[i] = (void*)0;
            if ((l_1128 < (((*l_1129) = (0x25D4DF2AL & 0x5269E4B1L)) , (252UL == ((p_1664->g_274 |= ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_1131.xy)), 0x64CEL, 8UL)).zwywxywyxwxxwywz)).sf) < (safe_rshift_func_int8_t_s_s((((0x63L <= ((l_10.y |= ((l_1128 , ((**p_1664->g_572) , l_18[3][0])) != l_1135)) & l_1128)) <= 0x563408505FE6BEE4L) < l_19), 1)))))))
            { /* block id: 461 */
                int32_t *l_1137[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                volatile struct S0 *l_1146 = &p_1664->g_391;
                int i;
                l_1142--;
                (*l_1146) = (*p_1664->g_392);
                (*l_1146) = (*p_1664->g_867);
            }
            else
            { /* block id: 465 */
                int32_t l_1160 = (-3L);
                uint32_t l_1164 = 0x4BB6FC9BL;
                int32_t **l_1170 = &l_11;
                for (p_1664->g_209.f0 = 23; (p_1664->g_209.f0 < (-20)); --p_1664->g_209.f0)
                { /* block id: 468 */
                    if (l_1141[5][0])
                        break;
                    (*p_1664->g_200) = (p_1664->g_1149 , (&l_18[1][0] != l_1150));
                    for (p_1664->g_743 = (-27); (p_1664->g_743 <= 60); p_1664->g_743++)
                    { /* block id: 473 */
                        int32_t *l_1153 = &p_1664->g_209.f5;
                        int32_t *l_1154 = (void*)0;
                        int32_t *l_1155 = (void*)0;
                        int32_t *l_1156 = &l_28;
                        int32_t *l_1157 = &p_1664->g_749.f5;
                        int32_t *l_1158 = &p_1664->g_54;
                        int32_t *l_1159[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1159[i] = (void*)0;
                        l_1161[0][0]--;
                        ++l_1164;
                        (*l_1157) ^= ((*l_1156) &= 0x71657FA2L);
                    }
                }
                (*p_1664->g_200) = (l_1167[3] == l_1168[2][0]);
                (*p_1664->g_1169) = func_73(p_1664->g_204.f4, l_1161[0][0], p_1664);
                (*l_1170) = (void*)0;
            }
            l_1171[8][1][0] = &l_1136;
        }
        (*p_1664->g_200) |= (safe_sub_func_uint64_t_u_u(l_1174.x, ((!(((*l_1135) = (safe_lshift_func_int16_t_s_u(l_1177, (safe_rshift_func_uint16_t_u_u((p_1664->g_1184.sf = (safe_lshift_func_uint16_t_u_u((p_1664->g_749.f6 , ((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 16))(p_1664->g_1182.s0411703653274613)), ((VECTOR(uint16_t, 2))(0x3410L, 0x2E0EL)).yyxxxxyxyyyyyxyx, ((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(p_1664->g_1183.xx)).yxxxxxyy, ((VECTOR(uint16_t, 8))(p_1664->g_1184.sa12c5e17))))).s0226177543320650))).s7), 0))), 11))))) || FAKE_DIVERGE(p_1664->group_0_offset, get_group_id(0), 10))) , (p_1664->g_715.s7 != (safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(0UL, 0x7886L)).odd, ((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((((*l_1196) = l_1195) != l_1197[2][2][0]) || ((void*)0 == &p_1664->g_721[0])), (safe_mul_func_int8_t_s_s((!(safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 2))(p_1664->g_1202.s25)).even, ((*l_1204) = p_1664->g_718.x)))), (**p_1664->g_572))))) | 1UL), FAKE_DIVERGE(p_1664->group_1_offset, get_group_id(1), 10))) , p_1664->g_991[3][8][1]))) , 1UL) > p_1664->g_749.f1), 1UL)), 0x1E25L))))));
    }
    if ((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(p_1664->g_1205.xyxxxyyxxxyyyyxx)).lo)).s4 != ((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x4A51L, 0x059CL)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(p_1664->g_1208.yx)).xyxxxxxy, ((VECTOR(int16_t, 2))(p_1664->g_1209.s74)).xxyxxyxx, ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1664->g_1210.s44)).xyyx)).xxxzyzzx, ((VECTOR(uint8_t, 4))(p_1664->g_1211.sc682)).yxxzwxwx)))))).even)), ((((l_1212 == (void*)0) , (l_1234 = ((safe_mod_func_int8_t_s_s(l_1215, (safe_rshift_func_uint16_t_u_s((~((safe_rshift_func_int8_t_s_s(8L, (safe_mul_func_int16_t_s_s(((safe_add_func_int64_t_s_s(((p_1664->g_866[2].f0 ^ (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_1664->g_152, (p_1664->g_327.s1 && ((*l_1229) = (((VECTOR(uint32_t, 2))(p_1664->g_1228.s15)).even , p_1664->g_709[4][3].f2))))), (safe_rshift_func_int8_t_s_s(((((VECTOR(int32_t, 2))(p_1664->g_1232.s65)).hi , &p_1664->g_743) != l_1229), 6))))) && (-2L)), (**p_1664->g_195))) , 7L), 0x0F91L)))) & p_1664->g_1210.s2)), 8)))) || l_1233))) ^ l_1235) < 0x6CL), ((VECTOR(int16_t, 2))((-2L))), 0x0D17L, p_1664->g_1236, ((VECTOR(int16_t, 4))((-1L))), 0x04CFL))))).s67))).odd, 0x3081L)) > 3L)))
    { /* block id: 494 */
        uint32_t l_1324 = 4294967290UL;
        int16_t *l_1364 = (void*)0;
        VECTOR(int32_t, 4) l_1367 = (VECTOR(int32_t, 4))(0x3F8CAA46L, (VECTOR(int32_t, 2))(0x3F8CAA46L, 0x0A2CA6B0L), 0x0A2CA6B0L);
        int32_t l_1394 = (-1L);
        struct S0 *l_1398 = &p_1664->g_666;
        int32_t *l_1417 = (void*)0;
        uint64_t l_1471 = 0x1817E259397E3ED8L;
        VECTOR(int16_t, 16) l_1478 = (VECTOR(int16_t, 16))(0x0EA9L, (VECTOR(int16_t, 4))(0x0EA9L, (VECTOR(int16_t, 2))(0x0EA9L, 0x4F31L), 0x4F31L), 0x4F31L, 0x0EA9L, 0x4F31L, (VECTOR(int16_t, 2))(0x0EA9L, 0x4F31L), (VECTOR(int16_t, 2))(0x0EA9L, 0x4F31L), 0x0EA9L, 0x4F31L, 0x0EA9L, 0x4F31L);
        int i;
        if ((atomic_inc(&p_1664->l_atomic_input[35]) == 8))
        { /* block id: 496 */
            VECTOR(int32_t, 16) l_1237 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x183E457EL), 0x183E457EL), 0x183E457EL, 9L, 0x183E457EL, (VECTOR(int32_t, 2))(9L, 0x183E457EL), (VECTOR(int32_t, 2))(9L, 0x183E457EL), 9L, 0x183E457EL, 9L, 0x183E457EL);
            uint8_t l_1322[5][6] = {{255UL,255UL,0x48L,6UL,7UL,6UL},{255UL,255UL,0x48L,6UL,7UL,6UL},{255UL,255UL,0x48L,6UL,7UL,6UL},{255UL,255UL,0x48L,6UL,7UL,6UL},{255UL,255UL,0x48L,6UL,7UL,6UL}};
            uint64_t l_1323[4] = {0x586FE72CC8A43369L,0x586FE72CC8A43369L,0x586FE72CC8A43369L,0x586FE72CC8A43369L};
            int i, j;
            if (((VECTOR(int32_t, 16))(l_1237.sa1a3a3b1e01621b8)).s7)
            { /* block id: 497 */
                int16_t l_1238[2][7] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                VECTOR(int8_t, 4) l_1239 = (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 1L), 1L);
                int16_t l_1240 = (-10L);
                int16_t l_1241 = 4L;
                uint16_t l_1242 = 0UL;
                int i, j;
                l_1237.sc ^= l_1238[1][1];
                ++l_1242;
            }
            else
            { /* block id: 500 */
                int16_t l_1245[10] = {0x6952L,0x6952L,0x6952L,0x6952L,0x6952L,0x6952L,0x6952L,0x6952L,0x6952L,0x6952L};
                uint64_t l_1246 = 0x04857F632A3565EDL;
                VECTOR(uint8_t, 4) l_1290 = (VECTOR(uint8_t, 4))(0x97L, (VECTOR(uint8_t, 2))(0x97L, 0x93L), 0x93L);
                VECTOR(uint8_t, 2) l_1291 = (VECTOR(uint8_t, 2))(247UL, 0x43L);
                VECTOR(uint8_t, 16) l_1292 = (VECTOR(uint8_t, 16))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0x04L), 0x04L), 0x04L, 248UL, 0x04L, (VECTOR(uint8_t, 2))(248UL, 0x04L), (VECTOR(uint8_t, 2))(248UL, 0x04L), 248UL, 0x04L, 248UL, 0x04L);
                VECTOR(uint8_t, 16) l_1293 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL, 255UL, 255UL, 255UL);
                VECTOR(uint8_t, 16) l_1294 = (VECTOR(uint8_t, 16))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 0xF0L), 0xF0L), 0xF0L, 6UL, 0xF0L, (VECTOR(uint8_t, 2))(6UL, 0xF0L), (VECTOR(uint8_t, 2))(6UL, 0xF0L), 6UL, 0xF0L, 6UL, 0xF0L);
                VECTOR(uint8_t, 2) l_1295 = (VECTOR(uint8_t, 2))(0UL, 0UL);
                VECTOR(uint8_t, 8) l_1296 = (VECTOR(uint8_t, 8))(0x55L, (VECTOR(uint8_t, 4))(0x55L, (VECTOR(uint8_t, 2))(0x55L, 0xB5L), 0xB5L), 0xB5L, 0x55L, 0xB5L);
                uint16_t l_1297 = 0x4829L;
                int i;
                if ((l_1245[0] , l_1246))
                { /* block id: 501 */
                    int32_t l_1247 = 0x06D7817CL;
                    int32_t *l_1262 = &l_1247;
                    int32_t *l_1263 = &l_1247;
                    for (l_1247 = 5; (l_1247 < 10); l_1247 = safe_add_func_uint16_t_u_u(l_1247, 6))
                    { /* block id: 504 */
                        uint8_t l_1250[5];
                        uint32_t l_1253 = 1UL;
                        uint64_t l_1254 = 0x56DCCE880D5B6FDAL;
                        VECTOR(int32_t, 2) l_1255 = (VECTOR(int32_t, 2))((-1L), 0x3948E5D8L);
                        VECTOR(int32_t, 8) l_1256 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2071E510L), 0x2071E510L), 0x2071E510L, 1L, 0x2071E510L);
                        VECTOR(int32_t, 2) l_1257 = (VECTOR(int32_t, 2))(0x3E2589BBL, (-1L));
                        uint32_t l_1258 = 4UL;
                        int8_t l_1259 = 1L;
                        int32_t *l_1260[4];
                        int32_t *l_1261 = (void*)0;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1250[i] = 0xD0L;
                        for (i = 0; i < 4; i++)
                            l_1260[i] = (void*)0;
                        l_1250[3]++;
                        l_1237.s2 = l_1253;
                        l_1258 = ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(l_1254, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1255.yxyxyxxy)).s56)).yyxyyxxxyxxyyxxx, ((VECTOR(int32_t, 2))(l_1256.s25)).xyyyxxyyyxyyxxyy))).s4e)), 1L)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1257.yyyxyxxx)).s1541044440513217)).sebf4))).x;
                        l_1261 = (l_1259 , l_1260[1]);
                    }
                    l_1263 = (((VECTOR(uint32_t, 2))(0x7A159251L, 0xC5D2AE51L)).lo , l_1262);
                }
                else
                { /* block id: 511 */
                    int32_t l_1264 = (-1L);
                    VECTOR(int32_t, 4) l_1265 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4EA8E730L), 0x4EA8E730L);
                    VECTOR(int32_t, 16) l_1266 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-1L)), (-1L)), (-1L), 6L, (-1L), (VECTOR(int32_t, 2))(6L, (-1L)), (VECTOR(int32_t, 2))(6L, (-1L)), 6L, (-1L), 6L, (-1L));
                    uint32_t l_1267 = 0xC167F1BDL;
                    int64_t l_1268 = 1L;
                    int16_t l_1269 = 0x5FC1L;
                    uint32_t l_1270 = 0xA3580BBBL;
                    uint64_t l_1271 = 4UL;
                    uint32_t l_1272 = 0x1D8C150BL;
                    uint8_t l_1273 = 255UL;
                    int i;
                    if (((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(1L, 0x3F34C3DDL, 0x0B60ED44L, 0x3FBB88E6L, 7L, 9L, l_1264, 0x51A55EDEL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(l_1265.yx)).xyyyxyyx, ((VECTOR(int32_t, 2))(l_1266.s1d)).yyxyyyxy))), (int32_t)l_1267, (int32_t)(l_1268 , ((l_1269 , l_1270) , (l_1265.w = l_1271)))))).s1570054612357052, ((VECTOR(int32_t, 2))(0L, 0x41205182L)).yxyxxyxyxxyxxxxx))).sc9)), 6L, 0x30F80B2CL)), ((l_1273 = (l_1272 = 6L)) , (-5L)), 0L, 0x777872F6L, 0x537447C8L)), ((VECTOR(int32_t, 16))((-5L)))))), ((VECTOR(int32_t, 16))((-1L)))))).s8)
                    { /* block id: 515 */
                        int16_t l_1274 = (-1L);
                        int32_t l_1276 = (-1L);
                        int32_t *l_1275 = &l_1276;
                        uint16_t l_1277 = 0xFE26L;
                        int64_t l_1278 = 1L;
                        uint16_t l_1279[5][6][2] = {{{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL}},{{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL}},{{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL}},{{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL}},{{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL},{0xD44FL,65535UL}}};
                        int32_t *l_1280 = &l_1276;
                        int32_t *l_1281 = &l_1276;
                        uint32_t l_1282 = 0x8AA6AB86L;
                        int32_t l_1283 = (-7L);
                        int i, j, k;
                        l_1274 = 0x000B164CL;
                        l_1275 = (void*)0;
                        l_1281 = ((l_1279[4][2][0] = (l_1278 = (l_1277 = 0x3AL))) , l_1280);
                        l_1266.s3 = ((l_1283 ^= l_1282) , 1L);
                    }
                    else
                    { /* block id: 524 */
                        VECTOR(int32_t, 16) l_1284 = (VECTOR(int32_t, 16))(0x1F1D5ACEL, (VECTOR(int32_t, 4))(0x1F1D5ACEL, (VECTOR(int32_t, 2))(0x1F1D5ACEL, 1L), 1L), 1L, 0x1F1D5ACEL, 1L, (VECTOR(int32_t, 2))(0x1F1D5ACEL, 1L), (VECTOR(int32_t, 2))(0x1F1D5ACEL, 1L), 0x1F1D5ACEL, 1L, 0x1F1D5ACEL, 1L);
                        VECTOR(int32_t, 2) l_1285 = (VECTOR(int32_t, 2))(0x5E35F3C4L, 0x22B9131DL);
                        uint8_t l_1286 = 0x69L;
                        struct S0 l_1287 = {0x5131L,0x764FCE70L,4294967295UL,0xC1B6B56CL,2UL,0x6C5E701FL,0x2F3AB36EF690C692L};/* VOLATILE GLOBAL l_1287 */
                        struct S0 l_1288 = {-1L,6L,0xB14626A3L,0x2E887989L,4294967291UL,1L,1L};/* VOLATILE GLOBAL l_1288 */
                        uint32_t l_1289 = 4294967295UL;
                        int i;
                        l_1288 = (((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(l_1284.sa3d5)).wyxxxxzwxzwzxxzy, ((VECTOR(int32_t, 2))(l_1285.xy)).xyyxxxyxyxyyxyyx))).s0 , (l_1286 , l_1287));
                        l_1237.sf ^= l_1289;
                    }
                }
                if ((((VECTOR(uint8_t, 8))(255UL, ((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 2))(7UL, 0x2BL)).xyyx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_1290.wzzw)).wxwyyzzwzwxyzwxy)).s60)), 0xD3L, 8UL)), ((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(l_1291.xy))))).xxyyxyxx, ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(0x8EL, ((VECTOR(uint8_t, 4))(l_1292.s592d)), ((VECTOR(uint8_t, 2))(0UL, 0xBEL)), 8UL)).s17)).yxyy))).zwxywwyx))), ((VECTOR(uint8_t, 8))(l_1293.s48fbd4ef)), ((VECTOR(uint8_t, 16))(l_1294.s31072e4ae0d8d9d4)).even))).s0505657115750222, ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 4))(l_1295.xxyy)), ((VECTOR(uint8_t, 8))(l_1296.s60041237)).lo))).xwwxzxzx)).s1257025370061334)).s9d, (uint8_t)0x22L, (uint8_t)l_1297))).yyxxyxyxxxxyyyxy))).sea5f))), ((VECTOR(uint8_t, 4))(0x77L, 0UL, 1UL, 1UL)).w, 9UL, 0xDCL)).s2 , 0x16996E4FL))
                { /* block id: 529 */
                    int32_t l_1298 = 0x4E7B5740L;
                    struct S0 l_1303 = {-1L,0x707E2E67L,0xDB21BF39L,8UL,4294967291UL,0x19D84D95L,0x26C66766F75BC929L};/* VOLATILE GLOBAL l_1303 */
                    struct S0 l_1304[8] = {{0x2566L,0x6A45523CL,0xC746A70DL,0x11C5E5EEL,0x9B683F15L,-1L,0x607130CC52B8FA6DL},{0x2566L,0x6A45523CL,0xC746A70DL,0x11C5E5EEL,0x9B683F15L,-1L,0x607130CC52B8FA6DL},{0x2566L,0x6A45523CL,0xC746A70DL,0x11C5E5EEL,0x9B683F15L,-1L,0x607130CC52B8FA6DL},{0x2566L,0x6A45523CL,0xC746A70DL,0x11C5E5EEL,0x9B683F15L,-1L,0x607130CC52B8FA6DL},{0x2566L,0x6A45523CL,0xC746A70DL,0x11C5E5EEL,0x9B683F15L,-1L,0x607130CC52B8FA6DL},{0x2566L,0x6A45523CL,0xC746A70DL,0x11C5E5EEL,0x9B683F15L,-1L,0x607130CC52B8FA6DL},{0x2566L,0x6A45523CL,0xC746A70DL,0x11C5E5EEL,0x9B683F15L,-1L,0x607130CC52B8FA6DL},{0x2566L,0x6A45523CL,0xC746A70DL,0x11C5E5EEL,0x9B683F15L,-1L,0x607130CC52B8FA6DL}};
                    int i;
                    for (l_1298 = (-18); (l_1298 >= 18); l_1298 = safe_add_func_int64_t_s_s(l_1298, 9))
                    { /* block id: 532 */
                        uint32_t l_1301[3][4][3] = {{{0x27F7D274L,0UL,0x6F300332L},{0x27F7D274L,0UL,0x6F300332L},{0x27F7D274L,0UL,0x6F300332L},{0x27F7D274L,0UL,0x6F300332L}},{{0x27F7D274L,0UL,0x6F300332L},{0x27F7D274L,0UL,0x6F300332L},{0x27F7D274L,0UL,0x6F300332L},{0x27F7D274L,0UL,0x6F300332L}},{{0x27F7D274L,0UL,0x6F300332L},{0x27F7D274L,0UL,0x6F300332L},{0x27F7D274L,0UL,0x6F300332L},{0x27F7D274L,0UL,0x6F300332L}}};
                        uint16_t l_1302 = 0x1F6DL;
                        int i, j, k;
                        l_1237.sa &= l_1301[2][2][2];
                        l_1237.s4 = l_1302;
                    }
                    l_1304[5] = l_1303;
                }
                else
                { /* block id: 537 */
                    int32_t *l_1305 = (void*)0;
                    int32_t l_1307 = 1L;
                    int32_t *l_1306 = &l_1307;
                    uint64_t l_1310 = 0xACE3193A194C80DAL;
                    uint64_t *l_1309 = &l_1310;
                    uint64_t **l_1308 = &l_1309;
                    uint64_t **l_1311[2];
                    uint64_t **l_1312 = &l_1309;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1311[i] = &l_1309;
                    l_1306 = l_1305;
                    l_1312 = (l_1311[1] = l_1308);
                    for (l_1310 = (-20); (l_1310 == 6); ++l_1310)
                    { /* block id: 543 */
                        struct S0 l_1315 = {7L,0x7731E976L,0UL,8UL,0xD27F0198L,0x30E8D5D1L,1L};/* VOLATILE GLOBAL l_1315 */
                        struct S0 l_1316 = {-1L,1L,1UL,4294967292UL,0xBF45D13FL,-1L,-9L};/* VOLATILE GLOBAL l_1316 */
                        VECTOR(uint8_t, 2) l_1317 = (VECTOR(uint8_t, 2))(0x61L, 0x3CL);
                        VECTOR(uint8_t, 16) l_1318 = (VECTOR(uint8_t, 16))(0xEBL, (VECTOR(uint8_t, 4))(0xEBL, (VECTOR(uint8_t, 2))(0xEBL, 0xACL), 0xACL), 0xACL, 0xEBL, 0xACL, (VECTOR(uint8_t, 2))(0xEBL, 0xACL), (VECTOR(uint8_t, 2))(0xEBL, 0xACL), 0xEBL, 0xACL, 0xEBL, 0xACL);
                        VECTOR(uint8_t, 8) l_1319 = (VECTOR(uint8_t, 8))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0x1EL), 0x1EL), 0x1EL, 3UL, 0x1EL);
                        VECTOR(uint8_t, 16) l_1320 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x96L), 0x96L), 0x96L, 1UL, 0x96L, (VECTOR(uint8_t, 2))(1UL, 0x96L), (VECTOR(uint8_t, 2))(1UL, 0x96L), 1UL, 0x96L, 1UL, 0x96L);
                        int32_t *l_1321 = &l_1315.f5;
                        int i;
                        l_1316 = l_1315;
                        l_1305 = (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(l_1317.yyyy)), (uint8_t)((VECTOR(uint8_t, 8))(l_1318.s08ecaa89)).s5))).odd, ((VECTOR(uint8_t, 2))(l_1319.s66))))).yxxxxyxxxxyyxxyx)).hi, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 2))(0UL, 0x6CL)), ((VECTOR(uint8_t, 2))(l_1320.s5b))))).yyxxxyxy))).s4257320137245653)).se , l_1321);
                    }
                }
                l_1237.s6 &= ((VECTOR(int32_t, 2))((-1L), 5L)).odd;
            }
            l_1323[1] = (FAKE_DIVERGE(p_1664->group_2_offset, get_group_id(2), 10) , l_1322[3][5]);
            unsigned int result = 0;
            result += l_1237.sf;
            result += l_1237.se;
            result += l_1237.sd;
            result += l_1237.sc;
            result += l_1237.sb;
            result += l_1237.sa;
            result += l_1237.s9;
            result += l_1237.s8;
            result += l_1237.s7;
            result += l_1237.s6;
            result += l_1237.s5;
            result += l_1237.s4;
            result += l_1237.s3;
            result += l_1237.s2;
            result += l_1237.s1;
            result += l_1237.s0;
            int l_1322_i0, l_1322_i1;
            for (l_1322_i0 = 0; l_1322_i0 < 5; l_1322_i0++) {
                for (l_1322_i1 = 0; l_1322_i1 < 6; l_1322_i1++) {
                    result += l_1322[l_1322_i0][l_1322_i1];
                }
            }
            int l_1323_i0;
            for (l_1323_i0 = 0; l_1323_i0 < 4; l_1323_i0++) {
                result += l_1323[l_1323_i0];
            }
            atomic_add(&p_1664->l_special_values[35], result);
        }
        else
        { /* block id: 551 */
            (1 + 1);
        }
        if ((+((*p_1664->g_200) = l_1324)))
        { /* block id: 555 */
            int32_t l_1329 = 0x7D898ED9L;
            uint16_t *l_1345 = &p_1664->g_274;
            int32_t l_1351 = 0x597687D2L;
            int32_t l_1352 = (-3L);
            uint64_t *l_1353 = &p_1664->g_991[0][4][2];
            (*p_1664->g_200) = (((*p_1664->g_196)++) | ((safe_mul_func_int8_t_s_s(l_1329, 0x70L)) < (!((safe_mod_func_uint64_t_u_u(((*l_1353) = (safe_mod_func_int64_t_s_s(((safe_add_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((((safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s(0x72A041CCL, (safe_rshift_func_int16_t_s_u((p_1664->g_1344 , (l_1324 , (((*l_1345) = 0x13FFL) || l_1324))), 12)))), (5L || ((p_1664->g_1184.se = ((VECTOR(uint16_t, 16))(65533UL, (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((p_1664->g_1350 ^ (-1L)), p_1664->g_1344.f6)), p_1664->g_749.f0)), ((VECTOR(uint16_t, 8))(1UL)), 0x38FEL, p_1664->g_1344.f0, FAKE_DIVERGE(p_1664->group_2_offset, get_group_id(2), 10), ((VECTOR(uint16_t, 2))(65535UL)), 65535UL)).s2) | l_1351)))) >= 4294967294UL) , l_1352), 6)) || l_1351), 0x1B5D9D0F12F17CE9L)) ^ (-1L)), p_1664->g_1232.s4))), l_1324)) , (*p_1664->g_865)))));
            (*p_1664->g_200) = (0L < (-2L));
        }
        else
        { /* block id: 562 */
            int16_t l_1356[3][10][7] = {{{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L}},{{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L}},{{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L},{0L,0L,0x6841L,0x7956L,1L,(-8L),5L}}};
            VECTOR(int32_t, 16) l_1359 = (VECTOR(int32_t, 16))(0x4BABEB19L, (VECTOR(int32_t, 4))(0x4BABEB19L, (VECTOR(int32_t, 2))(0x4BABEB19L, 0x5D2D2EA8L), 0x5D2D2EA8L), 0x5D2D2EA8L, 0x4BABEB19L, 0x5D2D2EA8L, (VECTOR(int32_t, 2))(0x4BABEB19L, 0x5D2D2EA8L), (VECTOR(int32_t, 2))(0x4BABEB19L, 0x5D2D2EA8L), 0x4BABEB19L, 0x5D2D2EA8L, 0x4BABEB19L, 0x5D2D2EA8L);
            int16_t *l_1365 = &p_1664->g_847.f0;
            uint8_t *l_1374[4];
            int32_t l_1376 = 0x06AAD4FBL;
            int8_t **l_1387 = &p_1664->g_573;
            int64_t l_1393 = 0x1619F9ED7A6B5622L;
            int8_t l_1440[7] = {0L,0L,0L,0L,0L,0L,0L};
            int32_t *l_1472 = (void*)0;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_1374[i] = &p_1664->g_999;
            if (((((safe_mul_func_int16_t_s_s((l_1356[2][5][0] || ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_1664->g_1357.s34130353)).odd)).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1358.s74303737)).s3605351660521447)).s49, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 8L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_1359.s3812)))))).hi)), (GROUP_DIVERGE(1, 1) != (safe_sub_func_uint32_t_u_u(((((((+((&p_1664->g_195 != (void*)0) , ((safe_mod_func_uint8_t_u_u((p_1664->g_718.w = (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((*p_1664->g_363) <= (l_1364 != l_1365)), ((VECTOR(int32_t, 4))(p_1664->g_1366.s07bf)).x, 0x41FCBD43L, 1L)), l_1324, 0L, 2L, 0x072E29BCL)).even, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_1367.xy)), ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(0x25B7FADDL, (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s(l_1324, 6)), ((safe_add_func_int32_t_s_s(((*p_1664->g_200) = (0x03L && (***p_1664->g_696))), 0L)) ^ FAKE_DIVERGE(p_1664->global_2_offset, get_global_id(2), 10)))), (-3L), 0x2B803A55L)).xyzzwxwzzywyzzzx, ((VECTOR(int32_t, 16))(0x76C78E33L))))).s3d, ((VECTOR(int32_t, 2))(0L))))).yyxxxxyyxxxyyxyy, ((VECTOR(int32_t, 16))(0x33DF7FFDL)), ((VECTOR(int32_t, 16))(0L))))).sbc21))).xxzzyyyz)).s5 != 0x41EC784AL)), 0x46L)) >= 0xF73BBB75L))) == p_1664->g_209.f6) && 0x4A40C1614655CD0EL) ^ 0x761ED33B87356BDEL) == (**p_1664->g_195)) < 0x358F1D160E0F0D75L), l_1375[1]))), 0x1F60FE57L, 0x19810A0EL, 0L)).lo)).lo)), ((VECTOR(int32_t, 2))(3L)), (-1L), ((VECTOR(int32_t, 2))((-2L))), l_1367.z, (*p_1664->g_200), 0x6FD75AB3L, ((VECTOR(int32_t, 4))(0x57B9BBEFL)), (-6L), 0x3B5B501EL)).sbf)).xxxy, ((VECTOR(int32_t, 4))(1L))))).hi))))), ((VECTOR(int32_t, 2))(0x786E38DDL)), ((VECTOR(int32_t, 2))(0L))))).odd), 0x2979L)) , (void*)0) != (void*)0) & l_1376))
            { /* block id: 565 */
                uint32_t l_1388 = 4294967293UL;
                int8_t *l_1389 = &l_1375[1];
                int32_t l_1392[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1392[i] = 0L;
                (*p_1664->g_1391) = func_33((((((safe_mul_func_uint8_t_u_u(((((-7L) <= ((l_1359.s8 = (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((*p_1664->g_573) = (((*l_1365) = (safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((((+(l_1359.s0 , 0x39B4L)) < l_1324) <= (((*p_1664->g_696) = l_1387) == (void*)0)) || 0x40L), (**p_1664->g_1169))), (-6L)))) || p_1664->g_991[3][7][0])), p_1664->g_209.f6)), (**p_1664->g_195)))) , p_1664->g_1357.s2)) >= (*p_1664->g_200)) , p_1664->g_749.f2), l_1367.z)) <= l_1388) >= (*p_1664->g_196)) & p_1664->g_709[4][3].f5) , 0x2A840C74L), l_1389, (*p_1664->g_200), l_1367.x, p_1664);
                l_1395--;
            }
            else
            { /* block id: 572 */
                struct S0 *l_1399[10][8][3] = {{{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749}},{{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749}},{{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749}},{{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749}},{{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749}},{{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749}},{{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749}},{{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749}},{{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749}},{{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749},{&p_1664->g_866[0],&p_1664->g_1055[6],&p_1664->g_749}}};
                int32_t l_1415 = 9L;
                uint16_t *l_1416 = &p_1664->g_274;
                int32_t **l_1418 = &l_1171[0][2][2];
                int i, j, k;
                l_1399[9][7][0] = l_1398;
                (*l_1418) = ((((((((*l_1416) = (l_1359.sc >= (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint16_t_u_u(p_1664->g_472.s3, p_1664->g_1344.f3)) && ((((p_1664->g_370.y < (safe_add_func_int8_t_s_s((**p_1664->g_572), ((void*)0 == &p_1664->g_1350)))) || ((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_1414, l_1415)), p_1664->g_777.y)) , 0x1751AD11B1BC5A1DL)) , 0x9FD4C4401054CE9BL) , p_1664->g_709[4][3].f4)) == 0L), 5)), p_1664->g_709[4][3].f2)))) , p_1664->g_715.s3) , (*l_1398)) , (**p_1664->g_199)) == l_1359.se) <= 0L) , l_1417);
                for (p_1664->g_1350 = 23; (p_1664->g_1350 <= (-17)); --p_1664->g_1350)
                { /* block id: 578 */
                    return p_1664->g_204.f5;
                }
            }
            if (((((VECTOR(int16_t, 16))(p_1664->g_1421.s7135417720552713)).s5 && p_1664->g_391.f0) ^ FAKE_DIVERGE(p_1664->local_2_offset, get_local_id(2), 10)))
            { /* block id: 582 */
                int32_t l_1434 = (-7L);
                struct S0 ****l_1435 = &l_1168[1][1];
                int32_t **l_1470 = (void*)0;
                int32_t ***l_1469 = &l_1470;
                if (((p_1664->g_666.f0 & ((safe_lshift_func_int8_t_s_s((~(safe_sub_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_s((--p_1664->g_1236), (safe_lshift_func_uint16_t_u_u(((0L | ((VECTOR(uint8_t, 2))(0x20L, 0UL)).lo) || ((safe_lshift_func_int16_t_s_s((0x414FL == (-1L)), 0)) != ((((*l_1435) = (l_1434 , &p_1664->g_721[0])) != (void*)0) , (safe_sub_func_uint64_t_u_u(l_1434, (GROUP_DIVERGE(2, 1) > (safe_div_func_uint8_t_u_u(l_1356[0][1][3], 255UL)))))))), p_1664->g_1149.f6)))) >= (*p_1664->g_196)) > (***p_1664->g_696)) > p_1664->g_275.y), p_1664->g_897.s5))), l_1367.y)) & l_1440[4])) && GROUP_DIVERGE(0, 1)))
                { /* block id: 585 */
                    int64_t l_1441 = (-9L);
                    return l_1441;
                }
                else
                { /* block id: 587 */
                    int32_t **l_1443[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1443[i] = &l_1171[6][2][0];
                    (*p_1664->g_287) = (FAKE_DIVERGE(p_1664->group_0_offset, get_group_id(0), 10) , (*p_1664->g_872));
                    for (l_1233 = 14; (l_1233 > 13); l_1233 = safe_sub_func_int16_t_s_s(l_1233, 3))
                    { /* block id: 591 */
                        int16_t *l_1450 = &p_1664->g_847.f0;
                        l_1359.sf = (safe_sub_func_int16_t_s_s(((0x596ED3C4B6DF2E35L < (p_1664->g_1102.y & (safe_rshift_func_uint16_t_u_s(p_1664->g_248.s4, 9)))) == (9L > ((void*)0 == l_1450))), GROUP_DIVERGE(0, 1)));
                        l_1434 = (safe_div_func_int16_t_s_s(((VECTOR(int16_t, 2))((-1L), 0x46C4L)).even, l_1356[2][5][0]));
                        return p_1664->g_716.x;
                    }
                    for (p_1664->g_209.f6 = 0; (p_1664->g_209.f6 > (-12)); p_1664->g_209.f6 = safe_sub_func_int64_t_s_s(p_1664->g_209.f6, 2))
                    { /* block id: 598 */
                        p_1664->g_1456 = p_1664->g_1455;
                    }
                }
                l_1359.s3 = (safe_rshift_func_uint16_t_u_s((((18446744073709551615UL | ((safe_sub_func_uint32_t_u_u((((VECTOR(uint16_t, 4))(1UL, 0x3461L, 0x26FAL, 0xD217L)).z | ((safe_add_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((p_1664->g_1202.s6 & (safe_sub_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(0x0184L, ((((((l_1393 && p_1664->g_1456.f6) , ((((*l_1469) = (p_1664->g_391.f5 , &l_1417)) != (void*)0) , l_1367.z)) , &p_1664->g_274) == (void*)0) && p_1664->g_1102.z) & (-2L)))) == l_1440[5]) , l_1367.x), l_1471))), p_1664->g_247.s0)) & l_1356[2][5][0]), 0x64BB754033576A89L)) | p_1664->g_21.y)), 4294967295UL)) | 0xBEED67AEEF7EA833L)) & (**p_1664->g_572)) , p_1664->g_209.f2), 4));
                l_1367.x &= (*p_1664->g_363);
            }
            else
            { /* block id: 605 */
                return p_1664->g_749.f1;
            }
            l_1417 = l_1472;
            --p_1664->g_1473;
        }
        l_1367.z = (safe_mod_func_int16_t_s_s(((*p_1664->g_867) , ((VECTOR(int16_t, 8))(l_1478.s844ee416)).s2), p_1664->g_991[0][4][3]));
    }
    else
    { /* block id: 612 */
        uint64_t *l_1482 = &p_1664->g_506[0][7];
        int32_t l_1483 = 0x493A8745L;
        struct S0 *l_1546 = &p_1664->g_866[1];
        int8_t ***l_1569[7] = {&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572};
        int32_t l_1581 = 0x0363DA5BL;
        int8_t l_1582 = 0L;
        int32_t l_1584 = (-5L);
        int32_t l_1587 = 0x55A05ABBL;
        int8_t l_1588 = 0x38L;
        uint64_t l_1589 = 0x974A942AB19EB532L;
        uint16_t *l_1643[9];
        int i;
        for (i = 0; i < 9; i++)
            l_1643[i] = &p_1664->g_274;
        (**p_1664->g_872) &= (safe_mul_func_uint8_t_u_u(0x69L, 254UL));
        if ((((*p_1664->g_200) = (**p_1664->g_1391)) > ((l_1481 != ((l_1482 != (((*p_1664->g_573) = (l_1483 ^ p_1664->g_327.s0)) , ((*p_1664->g_195) = (*p_1664->g_195)))) >= ((VECTOR(uint16_t, 16))(((void*)0 != l_1229), ((safe_sub_func_int8_t_s_s((+(safe_sub_func_int64_t_s_s(((l_1483 > GROUP_DIVERGE(2, 1)) ^ 0x94C1A9B9L), l_1483))), 246UL)) < 9UL), 2UL, l_1483, p_1664->g_847.f5, ((VECTOR(uint16_t, 8))(65526UL)), 1UL, 0xE033L, 1UL)).s7)) , p_1664->g_84)))
        { /* block id: 617 */
            if ((atomic_inc(&p_1664->l_atomic_input[40]) == 4))
            { /* block id: 619 */
                int32_t l_1488 = 5L;
                VECTOR(int32_t, 16) l_1526 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x55F6F62CL), 0x55F6F62CL), 0x55F6F62CL, 9L, 0x55F6F62CL, (VECTOR(int32_t, 2))(9L, 0x55F6F62CL), (VECTOR(int32_t, 2))(9L, 0x55F6F62CL), 9L, 0x55F6F62CL, 9L, 0x55F6F62CL);
                uint16_t l_1527 = 0xC56BL;
                int32_t *l_1528[5] = {&l_1488,&l_1488,&l_1488,&l_1488,&l_1488};
                struct S0 l_1529 = {3L,0L,4294967289UL,0x7478C80CL,1UL,0x27746B5FL,-1L};/* VOLATILE GLOBAL l_1529 */
                struct S0 l_1530 = {0x20CEL,0x0A801F2FL,0x98CB21C7L,4294967292UL,0xC6FCFB1CL,1L,0x643EBD505BB2DDE1L};/* VOLATILE GLOBAL l_1530 */
                int i;
                for (l_1488 = 0; (l_1488 >= (-24)); --l_1488)
                { /* block id: 622 */
                    VECTOR(int32_t, 16) l_1491 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
                    VECTOR(int32_t, 16) l_1492 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int32_t, 2))(1L, (-1L)), (VECTOR(int32_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
                    uint32_t l_1493 = 0xC6C33B53L;
                    uint32_t l_1494 = 4294967295UL;
                    int16_t l_1520 = 0x6B2FL;
                    uint64_t l_1521 = 0x5F75483F6547163FL;
                    int32_t l_1522 = 0x2C344FFBL;
                    uint64_t l_1523 = 18446744073709551607UL;
                    int i;
                    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1491.s2aa7f910)), 0x718F9455L, 0L, 0x6D5D862AL, 5L, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(l_1492.s62b4e63525b9d847)).sf2aa, (int32_t)((l_1491.sc = 1L) , (l_1493 , l_1494))))))).s8a71)).w)
                    { /* block id: 624 */
                        int32_t l_1496[1][6][10] = {{{1L,1L,4L,5L,0x64AA6F73L,1L,0x30E5F9B8L,1L,0x30E5F9B8L,1L},{1L,1L,4L,5L,0x64AA6F73L,1L,0x30E5F9B8L,1L,0x30E5F9B8L,1L},{1L,1L,4L,5L,0x64AA6F73L,1L,0x30E5F9B8L,1L,0x30E5F9B8L,1L},{1L,1L,4L,5L,0x64AA6F73L,1L,0x30E5F9B8L,1L,0x30E5F9B8L,1L},{1L,1L,4L,5L,0x64AA6F73L,1L,0x30E5F9B8L,1L,0x30E5F9B8L,1L},{1L,1L,4L,5L,0x64AA6F73L,1L,0x30E5F9B8L,1L,0x30E5F9B8L,1L}}};
                        int32_t *l_1495 = &l_1496[0][3][3];
                        int32_t *l_1497 = &l_1496[0][3][3];
                        int64_t l_1498 = 0x67B104B45140225AL;
                        uint8_t l_1499 = 0UL;
                        VECTOR(uint16_t, 8) l_1500 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
                        VECTOR(uint32_t, 16) l_1501 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x84A8F069L), 0x84A8F069L), 0x84A8F069L, 0UL, 0x84A8F069L, (VECTOR(uint32_t, 2))(0UL, 0x84A8F069L), (VECTOR(uint32_t, 2))(0UL, 0x84A8F069L), 0UL, 0x84A8F069L, 0UL, 0x84A8F069L);
                        VECTOR(uint32_t, 8) l_1502 = (VECTOR(uint32_t, 8))(0x157AB9A4L, (VECTOR(uint32_t, 4))(0x157AB9A4L, (VECTOR(uint32_t, 2))(0x157AB9A4L, 0xB28EFB57L), 0xB28EFB57L), 0xB28EFB57L, 0x157AB9A4L, 0xB28EFB57L);
                        int32_t l_1503 = 1L;
                        uint32_t l_1504[1][4];
                        VECTOR(uint32_t, 16) l_1505 = (VECTOR(uint32_t, 16))(0x429AEA68L, (VECTOR(uint32_t, 4))(0x429AEA68L, (VECTOR(uint32_t, 2))(0x429AEA68L, 3UL), 3UL), 3UL, 0x429AEA68L, 3UL, (VECTOR(uint32_t, 2))(0x429AEA68L, 3UL), (VECTOR(uint32_t, 2))(0x429AEA68L, 3UL), 0x429AEA68L, 3UL, 0x429AEA68L, 3UL);
                        int64_t l_1506[5];
                        VECTOR(int64_t, 8) l_1507 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x3E050CCC22CA5986L), 0x3E050CCC22CA5986L), 0x3E050CCC22CA5986L, 0L, 0x3E050CCC22CA5986L);
                        int64_t l_1508 = (-1L);
                        uint16_t l_1509[2][1];
                        int32_t l_1510 = (-3L);
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_1504[i][j] = 4294967288UL;
                        }
                        for (i = 0; i < 5; i++)
                            l_1506[i] = 0x53722FA5E4409DF2L;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1509[i][j] = 65535UL;
                        }
                        l_1497 = l_1495;
                        l_1492.s3 ^= (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(0xAA78567EL, 0x15184D48L, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_1498, l_1499, 6UL, 0x71F5L)).wzzwwwyxwxyzzyyw)).s2f, ((VECTOR(uint16_t, 2))(l_1500.s30))))).yyxx)).odd, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_1501.sa7fa)).wxwyywxx)).s72))))).xxxxxxyy)).s0, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_1502.s60)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x480E5861L, 0xAAFB6754L)))), ((l_1494 = 4294967295UL) , l_1503), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_1504[0][2], ((VECTOR(uint32_t, 8))(0xD100B853L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_1505.s99)))))), 0xC32E71B4L, l_1506[3], (l_1494 = l_1507.s6), 1UL, 0UL)), 0xCF58FCFCL, 4UL, (l_1494 = l_1508), l_1509[0][0], 0x147991ADL, 0x1681124EL, 7UL)).odd)), 0x1BDB4324L, ((VECTOR(uint32_t, 2))(4294967295UL)), FAKE_DIVERGE(p_1664->local_1_offset, get_local_id(1), 10), 0xC65D767FL, 4294967295UL, 4294967287UL, 0x2328C911L)).lo)).odd, ((VECTOR(uint32_t, 4))(0UL))))).even, ((VECTOR(uint32_t, 2))(1UL)), ((VECTOR(uint32_t, 2))(9UL))))))), 0x12A3463FL)).s31)), ((VECTOR(uint32_t, 2))(0UL)), 0x7103146AL, 0xB722F503L, ((VECTOR(uint32_t, 4))(5UL)), 0x00453421L, 0xD1CC82D2L, 1UL)).lo)).s47)).lo , l_1510);
                    }
                    else
                    { /* block id: 630 */
                        int32_t l_1512 = 0L;
                        int32_t *l_1511 = &l_1512;
                        int32_t *l_1513 = &l_1512;
                        uint64_t l_1514[6];
                        int16_t l_1515 = 6L;
                        uint64_t l_1516 = 18446744073709551615UL;
                        int32_t *l_1519 = &l_1512;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1514[i] = 18446744073709551606UL;
                        l_1513 = l_1511;
                        l_1491.s4 ^= l_1514[4];
                        l_1516++;
                        l_1519 = (void*)0;
                    }
                    l_1521 |= l_1520;
                    l_1523++;
                }
                l_1527 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_1526.s30)).xxxyxyxyxxyyyxyx)).s8;
                l_1528[4] = (void*)0;
                l_1530 = l_1529;
                unsigned int result = 0;
                result += l_1488;
                result += l_1526.sf;
                result += l_1526.se;
                result += l_1526.sd;
                result += l_1526.sc;
                result += l_1526.sb;
                result += l_1526.sa;
                result += l_1526.s9;
                result += l_1526.s8;
                result += l_1526.s7;
                result += l_1526.s6;
                result += l_1526.s5;
                result += l_1526.s4;
                result += l_1526.s3;
                result += l_1526.s2;
                result += l_1526.s1;
                result += l_1526.s0;
                result += l_1527;
                result += l_1529.f0;
                result += l_1529.f1;
                result += l_1529.f2;
                result += l_1529.f3;
                result += l_1529.f4;
                result += l_1529.f5;
                result += l_1529.f6;
                result += l_1530.f0;
                result += l_1530.f1;
                result += l_1530.f2;
                result += l_1530.f3;
                result += l_1530.f4;
                result += l_1530.f5;
                result += l_1530.f6;
                atomic_add(&p_1664->l_special_values[40], result);
            }
            else
            { /* block id: 642 */
                (1 + 1);
            }
        }
        else
        { /* block id: 645 */
            uint64_t l_1542 = 18446744073709551611UL;
            int32_t l_1544 = 0x731F13FAL;
            int32_t l_1586 = 0x02EA4C7DL;
            int8_t **l_1597 = (void*)0;
            uint8_t l_1606 = 254UL;
            VECTOR(uint16_t, 16) l_1624 = (VECTOR(uint16_t, 16))(0x30F2L, (VECTOR(uint16_t, 4))(0x30F2L, (VECTOR(uint16_t, 2))(0x30F2L, 1UL), 1UL), 1UL, 0x30F2L, 1UL, (VECTOR(uint16_t, 2))(0x30F2L, 1UL), (VECTOR(uint16_t, 2))(0x30F2L, 1UL), 0x30F2L, 1UL, 0x30F2L, 1UL);
            int32_t **l_1653 = &l_1171[8][1][0];
            int i;
            if (((*p_1664->g_200) = l_1483))
            { /* block id: 647 */
                VECTOR(uint8_t, 8) l_1536 = (VECTOR(uint8_t, 8))(0xE0L, (VECTOR(uint8_t, 4))(0xE0L, (VECTOR(uint8_t, 2))(0xE0L, 0xDDL), 0xDDL), 0xDDL, 0xE0L, 0xDDL);
                int32_t l_1579[4];
                int8_t **l_1596[10] = {(void*)0,&p_1664->g_573,&p_1664->g_573,&p_1664->g_573,(void*)0,(void*)0,&p_1664->g_573,&p_1664->g_573,&p_1664->g_573,(void*)0};
                int i;
                for (i = 0; i < 4; i++)
                    l_1579[i] = 0L;
                for (p_1664->g_54 = 0; (p_1664->g_54 >= (-5)); p_1664->g_54 = safe_sub_func_int32_t_s_s(p_1664->g_54, 5))
                { /* block id: 650 */
                    uint8_t *l_1541 = &l_1235;
                    int64_t *l_1543 = (void*)0;
                    int8_t ****l_1568[9][3][4] = {{{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]}},{{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]}},{{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]}},{{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]}},{{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]}},{{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]}},{{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]}},{{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]}},{{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]},{(void*)0,&p_1664->g_697[0][5][3],&p_1664->g_696,&p_1664->g_697[0][5][3]}}};
                    int32_t l_1578 = 0x154F6E45L;
                    int32_t l_1580 = 0x2D803C29L;
                    int i, j, k;
                    (1 + 1);
                }
            }
            else
            { /* block id: 673 */
                int64_t l_1622 = 0x7C6ADFB6AC6FA55EL;
                VECTOR(uint16_t, 4) l_1628 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65531UL), 65531UL);
                int32_t l_1649 = 0x5CFDF4C3L;
                int i;
                for (p_1664->g_1344.f5 = (-28); (p_1664->g_1344.f5 != (-10)); p_1664->g_1344.f5++)
                { /* block id: 676 */
                    VECTOR(uint32_t, 4) l_1623 = (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 4294967293UL), 4294967293UL);
                    int32_t l_1631 = (-1L);
                    int32_t ***l_1632 = &p_1664->g_1014;
                    int64_t *l_1644 = &p_1664->g_1130;
                    int32_t ****l_1647 = &p_1664->g_1645[0];
                    int i;
                    for (l_1544 = (-10); (l_1544 > (-8)); l_1544++)
                    { /* block id: 679 */
                        int32_t ***l_1634[6][1];
                        int32_t ****l_1633 = &l_1634[1][0];
                        int32_t l_1639 = 0L;
                        uint32_t *l_1640 = (void*)0;
                        uint32_t *l_1641[4] = {&p_1664->g_666.f3,&p_1664->g_666.f3,&p_1664->g_666.f3,&p_1664->g_666.f3};
                        int32_t l_1642 = (-8L);
                        int i, j;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1634[i][j] = &p_1664->g_523;
                        }
                        p_1664->g_20.x |= ((*p_1664->g_200) = (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 16))((safe_sub_func_uint64_t_u_u(l_1622, ((l_1584 <= GROUP_DIVERGE(0, 1)) | ((*p_1664->g_196) = (((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(abs(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_1623.xx)), 1UL, 0x813561DDL)).yxzwxzyx))).odd, ((VECTOR(uint32_t, 4))((l_1639 = (((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 4))(p_1664->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1664->tid, 7))], ((VECTOR(uint16_t, 2))(l_1624.s20)), 0x6EC9L)).yywyyzzz, ((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 8))(l_1625.sbb0142fd)).lo, (uint16_t)(safe_add_func_int32_t_s_s(((((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_1628.xz)), 0x3E63L, 0x4E1FL)).w || l_1628.x) || (safe_lshift_func_uint16_t_u_u((l_1631 < (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 2))(0L, 0L)).xyyx, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(p_1664->g_996, 0x7C927B58EB264A3BL, 0x149BF6EB072C5CE9L, 0x4DD565B62079B313L, (l_1632 != ((*l_1633) = &p_1664->g_523)), (safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(p_1664->g_204.f6, p_1664->g_209.f6)) >= l_1581), FAKE_DIVERGE(p_1664->group_0_offset, get_group_id(0), 10))), 1L, (-7L))).s34)), ((VECTOR(int64_t, 2))(0x156D11CC5FD2104CL))))).yyxx))).even, ((VECTOR(int64_t, 2))((-8L)))))).yxyyyxxyyyyyyyxx)).sb & l_1639)), 2))) != (*p_1664->g_200)) , l_1483), (*p_1664->g_200))), (uint16_t)p_1664->g_167.f4))).zxwwywyx, ((VECTOR(uint16_t, 8))(0x4B0FL))))), ((VECTOR(uint16_t, 8))(65532UL))))).s5 >= p_1664->g_820.y)), 0x5B0C2959L, 0xAC8E700EL, 4294967292UL))))).x , l_1623.z))))), (-6L), 0x0956L, l_1628.w, ((VECTOR(int16_t, 8))(0x1584L)), l_1542, 0x3929L, 0x7BEBL, (-1L))).sc, l_1642)));
                    }
                    l_1544 |= ((&p_1664->g_274 != l_1643[3]) > (((*l_1644) ^= l_1586) , (((p_1664->g_809.x , ((*l_1647) = p_1664->g_1645[1])) != (void*)0) & (safe_unary_minus_func_int32_t_s((l_1649 = ((*p_1664->g_200) = 1L)))))));
                }
                ++l_1650;
            }
            (*l_1653) = func_51(&l_1586, p_1664);
        }
        for (l_1483 = 0; (l_1483 < 27); l_1483 = safe_add_func_uint32_t_u_u(l_1483, 7))
        { /* block id: 698 */
            int32_t l_1656[1];
            uint32_t l_1657 = 4294967295UL;
            int i;
            for (i = 0; i < 1; i++)
                l_1656[i] = 0x2EA3A638L;
            l_1657--;
            if ((**p_1664->g_199))
                continue;
        }
    }
    (*p_1664->g_363) = (((VECTOR(int8_t, 8))(l_1660.zyxyzzzx)).s2 <= (((safe_add_func_int16_t_s_s(p_1664->g_810.x, (p_1664->g_509.s5 > (**p_1664->g_195)))) , p_1664->g_717.s4) >= (((void*)0 == l_1229) < l_1663.s2)));
    return p_1664->g_1576;
}


/* ------------------------------------------ */
/* 
 * reads : p_1664->g_200
 * writes: p_1664->g_200
 */
int32_t * func_33(uint32_t  p_34, int8_t * p_35, int32_t  p_36, int16_t  p_37, struct S1 * p_1664)
{ /* block id: 450 */
    int32_t **l_1122 = &p_1664->g_200;
    (*l_1122) = (void*)0;
    return (*l_1122);
}


/* ------------------------------------------ */
/* 
 * reads : p_1664->g_752 p_1664->g_1102 p_1664->g_573 p_1664->g_149 p_1664->g_123 p_1664->g_1055.f6 p_1664->g_635 p_1664->g_696 p_1664->g_572 p_1664->g_20 p_1664->g_847.f6 p_1664->g_275 p_1664->g_196 p_1664->g_200 p_1664->g_54
 * writes: p_1664->g_149 p_1664->g_123 p_1664->g_54
 */
int16_t  func_40(int8_t * p_41, int32_t * p_42, uint32_t  p_43, struct S1 * p_1664)
{ /* block id: 445 */
    int32_t **l_1093 = &p_1664->g_524[2][0];
    VECTOR(int8_t, 4) l_1103 = (VECTOR(int8_t, 4))(0x52L, (VECTOR(int8_t, 2))(0x52L, (-1L)), (-1L));
    uint16_t l_1120 = 0UL;
    uint16_t l_1121 = 0x73E3L;
    int i;
    (*p_1664->g_200) &= ((safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1664->global_0_offset, get_global_id(0), 10), 7)) && ((*p_1664->g_196) = (safe_sub_func_uint64_t_u_u(((void*)0 == l_1093), (safe_div_func_int64_t_s_s(p_1664->g_752.y, (((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_1664->g_1102.wwwyywxw)))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))((*p_1664->g_573), ((VECTOR(int8_t, 2))(l_1103.xz)), ((safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((p_1664->g_123 || (l_1103.z & (safe_mul_func_uint8_t_u_u((p_1664->g_1055[6].f6 == ((((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((***p_1664->g_696) = (safe_sub_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s((((-1L) || (l_1103.y | p_43)) , l_1103.w), 7)) , l_1103.x) == (*p_42)), l_1120))), 9L)), 3)) , l_1103.w), p_1664->g_20.y)) | p_1664->g_847.f6) <= FAKE_DIVERGE(p_1664->local_0_offset, get_local_id(0), 10)) == l_1103.z)), p_1664->g_275.x)))), l_1120)), 2)) == 2L), 0x0FL, 0x7EL, (-6L), 1L)).lo, (int8_t)l_1103.y))).hi)), (-1L), 0x55L)).xxyzzzyw))).s5, 6)), p_43)), l_1121)) && (-5L)) | 0x1487L)))))));
    return l_1103.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1664->g_1078 p_1664->g_635 p_1664->g_749.f1 p_1664->g_188 p_1664->g_200
 * writes: p_1664->g_1014 p_1664->g_188 p_1664->g_54
 */
int8_t * func_44(uint32_t  p_45, int32_t  p_46, struct S1 * p_1664)
{ /* block id: 440 */
    VECTOR(uint32_t, 8) l_1079 = (VECTOR(uint32_t, 8))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 4294967295UL), 4294967295UL), 4294967295UL, 5UL, 4294967295UL);
    int32_t ***l_1080[10] = {&p_1664->g_1014,&p_1664->g_523,&p_1664->g_1014,&p_1664->g_1014,&p_1664->g_523,&p_1664->g_1014,&p_1664->g_1014,&p_1664->g_523,&p_1664->g_1014,&p_1664->g_1014};
    int64_t l_1085 = 0x3E4728B8CAF17CB6L;
    int64_t *l_1086 = &p_1664->g_188;
    int8_t *l_1087 = (void*)0;
    int i;
    (*p_1664->g_200) = ((safe_sub_func_int8_t_s_s((p_46 ^ (safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 4))(p_1664->g_1078.wxyw)), ((VECTOR(uint32_t, 8))(l_1079.s40204061)).even))).wwzwyzwy)).s2, ((p_1664->g_1014 = &p_1664->g_524[5][0]) != ((((p_1664->g_635 , (p_46 , (void*)0)) == (void*)0) , (safe_div_func_int64_t_s_s(((((safe_lshift_func_uint16_t_u_u(l_1079.s1, 4)) <= l_1079.s4) > ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0xE3585B47L, 0x8CA1CD8BL)), 0x808D4514L, 4294967295UL)).wywwwywy)).s7 , ((*l_1086) |= (((((l_1085 ^ p_46) , (void*)0) == (void*)0) | p_1664->g_749.f1) || l_1079.s4))) != p_46)) == l_1079.s6), 0xAE76CB648513EE22L))) , &p_1664->g_524[1][1]))))), l_1079.s6)) == 1L);
    return l_1087;
}


/* ------------------------------------------ */
/* 
 * reads : p_1664->g_666.f1 p_1664->g_1055 p_1664->g_195 p_1664->g_196 p_1664->g_3 p_1664->g_1063 p_1664->g_185 p_1664->g_200 p_1664->g_20 p_1664->g_522 p_1664->g_523 p_1664->g_1065
 * writes: p_1664->g_666.f1 p_1664->g_196 p_1664->g_274 p_1664->g_54 p_1664->g_1014
 */
int32_t  func_48(int32_t * p_49, uint32_t  p_50, struct S1 * p_1664)
{ /* block id: 427 */
    VECTOR(int64_t, 2) l_1062 = (VECTOR(int64_t, 2))(0L, (-1L));
    int32_t *l_1066 = (void*)0;
    int32_t *l_1067 = &p_1664->g_709[4][3].f5;
    int32_t *l_1068 = &p_1664->g_1055[6].f5;
    int32_t *l_1069 = &p_1664->g_847.f5;
    int32_t *l_1070[2];
    uint16_t l_1071[8] = {0xC272L,0xC272L,0xC272L,0xC272L,0xC272L,0xC272L,0xC272L,0xC272L};
    int i;
    for (i = 0; i < 2; i++)
        l_1070[i] = &p_1664->g_666.f5;
    for (p_1664->g_666.f1 = (-24); (p_1664->g_666.f1 >= 26); p_1664->g_666.f1++)
    { /* block id: 430 */
        int16_t *l_1043 = (void*)0;
        int32_t l_1044 = 0x53A9A340L;
        uint64_t *l_1056[6][10] = {{&p_1664->g_991[0][1][2],(void*)0,&p_1664->g_123,&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_123,(void*)0,&p_1664->g_991[0][1][2]},{&p_1664->g_991[0][1][2],(void*)0,&p_1664->g_123,&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_123,(void*)0,&p_1664->g_991[0][1][2]},{&p_1664->g_991[0][1][2],(void*)0,&p_1664->g_123,&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_123,(void*)0,&p_1664->g_991[0][1][2]},{&p_1664->g_991[0][1][2],(void*)0,&p_1664->g_123,&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_123,(void*)0,&p_1664->g_991[0][1][2]},{&p_1664->g_991[0][1][2],(void*)0,&p_1664->g_123,&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_123,(void*)0,&p_1664->g_991[0][1][2]},{&p_1664->g_991[0][1][2],(void*)0,&p_1664->g_123,&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_506[0][0],&p_1664->g_123,(void*)0,&p_1664->g_991[0][1][2]}};
        int32_t l_1059 = 0x7550E5F5L;
        int i, j;
        (*p_1664->g_200) = (((safe_rshift_func_int16_t_s_u((l_1044 = 7L), 15)) == (safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(p_50, 3)), p_50))) ^ (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0xB1CCCFB9BF9779B5L, 18446744073709551615UL)).yxyyyxxx)).s6 ^ ((~(((p_1664->g_274 = (safe_sub_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u((p_1664->g_1055[6] , (((*p_1664->g_195) = (*p_1664->g_195)) != l_1056[2][8])), (((safe_rshift_func_uint8_t_u_u(l_1059, ((0x40L && ((safe_div_func_uint8_t_u_u(p_50, l_1062.x)) ^ l_1059)) == p_50))) < l_1062.x) ^ p_50))) , (*p_49)), p_1664->g_1063[0][0][0])) > p_1664->g_185), l_1062.x))) && 0x0BCAL) && GROUP_DIVERGE(1, 1))) <= 0x1DL)));
        l_1059 &= (p_50 , (p_1664->g_20.y || l_1062.x));
    }
    (*p_1664->g_1065) = (*p_1664->g_522);
    --l_1071[1];
    return (*l_1068);
}


/* ------------------------------------------ */
/* 
 * reads : p_1664->g_54 p_1664->g_991 p_1664->g_696 p_1664->g_572 p_1664->g_573 p_1664->g_522 p_1664->g_523
 * writes: p_1664->g_54 p_1664->g_149 p_1664->g_523 p_1664->g_1014 p_1664->g_516
 */
int32_t * func_51(int32_t * p_52, struct S1 * p_1664)
{ /* block id: 20 */
    int64_t l_66 = 4L;
    int32_t l_673[6] = {0x18AF1D55L,0x18AF1D55L,0x18AF1D55L,0x18AF1D55L,0x18AF1D55L,0x18AF1D55L};
    int8_t *l_733 = &p_1664->g_149[0][1][0];
    VECTOR(int16_t, 16) l_736 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-10L)), (-10L)), (-10L), 1L, (-10L), (VECTOR(int16_t, 2))(1L, (-10L)), (VECTOR(int16_t, 2))(1L, (-10L)), 1L, (-10L), 1L, (-10L));
    int64_t l_758 = 0x53627B1A52758AF9L;
    VECTOR(int8_t, 8) l_827 = (VECTOR(int8_t, 8))(0x00L, (VECTOR(int8_t, 4))(0x00L, (VECTOR(int8_t, 2))(0x00L, 0L), 0L), 0L, 0x00L, 0L);
    int32_t **l_894[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t **l_936 = (void*)0;
    VECTOR(int16_t, 16) l_937 = (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x7E49L), 0x7E49L), 0x7E49L, 8L, 0x7E49L, (VECTOR(int16_t, 2))(8L, 0x7E49L), (VECTOR(int16_t, 2))(8L, 0x7E49L), 8L, 0x7E49L, 8L, 0x7E49L);
    VECTOR(uint32_t, 16) l_965 = (VECTOR(uint32_t, 16))(0xA206D675L, (VECTOR(uint32_t, 4))(0xA206D675L, (VECTOR(uint32_t, 2))(0xA206D675L, 0UL), 0UL), 0UL, 0xA206D675L, 0UL, (VECTOR(uint32_t, 2))(0xA206D675L, 0UL), (VECTOR(uint32_t, 2))(0xA206D675L, 0UL), 0xA206D675L, 0UL, 0xA206D675L, 0UL);
    int16_t l_997[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int64_t l_1009 = (-1L);
    int32_t l_1012 = 0x5A0621FEL;
    int32_t ***l_1013[7] = {&l_894[3],&l_894[3],&l_894[3],&l_894[3],&l_894[3],&l_894[3],&l_894[3]};
    int32_t **l_1015 = &p_1664->g_524[6][2];
    int i;
    for (p_1664->g_54 = 0; (p_1664->g_54 == 20); ++p_1664->g_54)
    { /* block id: 23 */
        int8_t *l_62 = (void*)0;
        int32_t l_67 = 0x61D86E6AL;
        int32_t l_674 = 0x304F564EL;
        uint16_t *l_675[6] = {&p_1664->g_274,&p_1664->g_274,&p_1664->g_274,&p_1664->g_274,&p_1664->g_274,&p_1664->g_274};
        int64_t *l_682 = (void*)0;
        int64_t *l_683 = &p_1664->g_84;
        int16_t *l_684 = (void*)0;
        int16_t *l_685[8][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int32_t l_686 = 0x11EB4C31L;
        VECTOR(uint8_t, 4) l_748 = (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 1UL), 1UL);
        VECTOR(int32_t, 16) l_776 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0L), 0L), 0L, 9L, 0L, (VECTOR(int32_t, 2))(9L, 0L), (VECTOR(int32_t, 2))(9L, 0L), 9L, 0L, 9L, 0L);
        int16_t ***l_811[7] = {&p_1664->g_465,&p_1664->g_465,&p_1664->g_465,&p_1664->g_465,&p_1664->g_465,&p_1664->g_465,&p_1664->g_465};
        VECTOR(int8_t, 8) l_819 = (VECTOR(int8_t, 8))(0x0EL, (VECTOR(int8_t, 4))(0x0EL, (VECTOR(int8_t, 2))(0x0EL, (-7L)), (-7L)), (-7L), 0x0EL, (-7L));
        int32_t l_826 = 0L;
        VECTOR(uint16_t, 2) l_831 = (VECTOR(uint16_t, 2))(0x5C63L, 0UL);
        struct S0 **l_834 = (void*)0;
        VECTOR(uint16_t, 8) l_836 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x193FL), 0x193FL), 0x193FL, 65535UL, 0x193FL);
        VECTOR(int32_t, 2) l_850 = (VECTOR(int32_t, 2))((-4L), 1L);
        uint64_t ***l_881 = (void*)0;
        VECTOR(int32_t, 4) l_970 = (VECTOR(int32_t, 4))(0x46FFE159L, (VECTOR(int32_t, 2))(0x46FFE159L, (-1L)), (-1L));
        int32_t l_998[1][2];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_998[i][j] = 0x0EA98CB0L;
        }
        (1 + 1);
    }
    p_1664->g_516[2][6] = (l_1015 = (p_1664->g_1014 = ((*p_1664->g_522) = (((l_673[0] = 1UL) & (safe_lshift_func_int8_t_s_s(l_937.s5, (safe_sub_func_uint32_t_u_u(l_1009, (safe_rshift_func_uint8_t_u_s((l_937.s7 > p_1664->g_991[5][1][3]), ((***p_1664->g_696) = l_1012)))))))) , (*p_1664->g_522)))));
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_1664->g_305 p_1664->g_233 p_1664->g_209.f3 p_1664->g_209.f2 p_1664->g_635 p_1664->g_573 p_1664->g_149 p_1664->g_666.f5 p_1664->g_715 p_1664->g_716 p_1664->g_717 p_1664->g_718 p_1664->g_720 p_1664->g_721 p_1664->g_724 p_1664->g_196 p_1664->g_123 p_1664->g_363 p_1664->g_209.f5
 * writes: p_1664->g_209.f3 p_1664->g_695 p_1664->g_696 p_1664->g_697 p_1664->g_698 p_1664->g_200 p_1664->g_666.f5 p_1664->g_721 p_1664->g_123 p_1664->g_506 p_1664->g_209.f5
 */
int8_t * func_59(int8_t * p_60, uint16_t  p_61, struct S1 * p_1664)
{ /* block id: 287 */
    int8_t l_689 = 0L;
    uint32_t *l_690 = &p_1664->g_209.f3;
    int8_t ***l_693 = &p_1664->g_572;
    int8_t ****l_694[8];
    int32_t ***l_703 = &p_1664->g_523;
    int64_t *l_704 = (void*)0;
    int64_t *l_705[8][1][10] = {{{(void*)0,&p_1664->g_209.f6,&p_1664->g_209.f6,&p_1664->g_209.f6,(void*)0,&p_1664->g_666.f6,&p_1664->g_188,&p_1664->g_84,&p_1664->g_188,&p_1664->g_666.f6}},{{(void*)0,&p_1664->g_209.f6,&p_1664->g_209.f6,&p_1664->g_209.f6,(void*)0,&p_1664->g_666.f6,&p_1664->g_188,&p_1664->g_84,&p_1664->g_188,&p_1664->g_666.f6}},{{(void*)0,&p_1664->g_209.f6,&p_1664->g_209.f6,&p_1664->g_209.f6,(void*)0,&p_1664->g_666.f6,&p_1664->g_188,&p_1664->g_84,&p_1664->g_188,&p_1664->g_666.f6}},{{(void*)0,&p_1664->g_209.f6,&p_1664->g_209.f6,&p_1664->g_209.f6,(void*)0,&p_1664->g_666.f6,&p_1664->g_188,&p_1664->g_84,&p_1664->g_188,&p_1664->g_666.f6}},{{(void*)0,&p_1664->g_209.f6,&p_1664->g_209.f6,&p_1664->g_209.f6,(void*)0,&p_1664->g_666.f6,&p_1664->g_188,&p_1664->g_84,&p_1664->g_188,&p_1664->g_666.f6}},{{(void*)0,&p_1664->g_209.f6,&p_1664->g_209.f6,&p_1664->g_209.f6,(void*)0,&p_1664->g_666.f6,&p_1664->g_188,&p_1664->g_84,&p_1664->g_188,&p_1664->g_666.f6}},{{(void*)0,&p_1664->g_209.f6,&p_1664->g_209.f6,&p_1664->g_209.f6,(void*)0,&p_1664->g_666.f6,&p_1664->g_188,&p_1664->g_84,&p_1664->g_188,&p_1664->g_666.f6}},{{(void*)0,&p_1664->g_209.f6,&p_1664->g_209.f6,&p_1664->g_209.f6,(void*)0,&p_1664->g_666.f6,&p_1664->g_188,&p_1664->g_84,&p_1664->g_188,&p_1664->g_666.f6}}};
    int32_t l_706 = 0x7C9FE1FFL;
    uint16_t l_707 = 0x1B70L;
    struct S0 *l_708 = &p_1664->g_709[4][3];
    int32_t **l_710 = (void*)0;
    int32_t **l_711 = &p_1664->g_200;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_694[i] = &l_693;
    (*l_711) = func_73(p_1664->g_305[0][5], (((VECTOR(uint8_t, 2))(5UL, 0x94L)).even != (safe_div_func_uint8_t_u_u((((l_689 & (p_1664->g_233[4] , ((*l_690) |= ((l_689 , &p_1664->g_466) == &p_1664->g_466)))) , (safe_sub_func_int16_t_s_s((((p_1664->g_698[5][0][2] = (p_1664->g_697[0][5][3] = (p_1664->g_696 = (p_1664->g_695 = l_693)))) == (void*)0) == (((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((((l_706 &= (&p_1664->g_523 != l_703)) || l_707) > p_1664->g_209.f2), p_61)), 7)) , l_708) == (void*)0)), p_1664->g_635))) < (*p_1664->g_573)), 1L))), p_1664);
    for (p_1664->g_666.f5 = 0; (p_1664->g_666.f5 == (-10)); --p_1664->g_666.f5)
    { /* block id: 297 */
        VECTOR(uint8_t, 8) l_714 = (VECTOR(uint8_t, 8))(0x73L, (VECTOR(uint8_t, 4))(0x73L, (VECTOR(uint8_t, 2))(0x73L, 0x05L), 0x05L), 0x05L, 0x73L, 0x05L);
        VECTOR(uint8_t, 4) l_719 = (VECTOR(uint8_t, 4))(0xC3L, (VECTOR(uint8_t, 2))(0xC3L, 0x4BL), 0x4BL);
        struct S0 ***l_723 = &p_1664->g_721[0];
        int32_t l_725 = 0x0E0D2884L;
        uint64_t *l_730 = &p_1664->g_506[0][0];
        int32_t *l_732[2];
        int i;
        for (i = 0; i < 2; i++)
            l_732[i] = (void*)0;
        l_725 |= (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_714.s5010243731772660)).saee8)), ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_1664->g_715.s3d)), 1UL, 1UL)))).xwwxyyyz)).hi, ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(255UL, ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x89L, 1UL)).yxxy)).xxwzwyxxxzwxxwzy, ((VECTOR(uint8_t, 4))(p_1664->g_716.xxyy)).xzyzywyyxxwzzwwz))).s38, ((VECTOR(uint8_t, 4))(0xC7L, 0x8FL, 246UL, 0xECL)).lo, ((VECTOR(uint8_t, 16))(p_1664->g_717.s5006512642320060)).sd7))).even, 0x4AL, 0x7AL)).hi)), ((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 2))(1UL, 1UL)).xyyyxyyyyyxyyxyy, ((VECTOR(uint8_t, 16))(p_1664->g_718.yyyxxwxzwwyyzxww))))).sed, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_719.zw)).yxyx)).hi))).xyyx))), p_61, ((VECTOR(uint8_t, 4))(p_1664->g_720.s6710)).y, ((VECTOR(uint8_t, 2))(0x3AL, 1UL)).hi, 0x21L, 0x5CL, GROUP_DIVERGE(1, 1), 0x6CL, 0x15L)).s4306)).y , (((*l_723) = p_1664->g_721[0]) == (p_1664->g_724 , &l_708)));
        (*p_1664->g_363) |= (safe_div_func_uint64_t_u_u(((*l_730) = (++(*p_1664->g_196))), l_719.x));
    }
    return p_60;
}


/* ------------------------------------------ */
/* 
 * reads : p_1664->g_635 p_1664->g_188 p_1664->g_666
 * writes: p_1664->g_635 p_1664->g_188 p_1664->g_666
 */
int32_t  func_63(uint32_t  p_64, int8_t  p_65, struct S1 * p_1664)
{ /* block id: 24 */
    VECTOR(int8_t, 8) l_76 = (VECTOR(int8_t, 8))(5L, (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0x35L), 0x35L), 0x35L, 5L, 0x35L);
    int32_t l_80 = 0L;
    int32_t *l_633 = (void*)0;
    int32_t l_636 = 0x753ED125L;
    int32_t l_645 = 0x10472F52L;
    int32_t l_646 = 0x22FA4544L;
    int32_t l_647 = 0x68575505L;
    int32_t *l_651 = &l_645;
    int32_t *l_652 = &p_1664->g_209.f5;
    int32_t *l_653 = &l_636;
    int32_t *l_654 = &l_636;
    int32_t *l_655[5];
    uint16_t l_656[8][4] = {{0x1E13L,65535UL,65531UL,65535UL},{0x1E13L,65535UL,65531UL,65535UL},{0x1E13L,65535UL,65531UL,65535UL},{0x1E13L,65535UL,65531UL,65535UL},{0x1E13L,65535UL,65531UL,65535UL},{0x1E13L,65535UL,65531UL,65535UL},{0x1E13L,65535UL,65531UL,65535UL},{0x1E13L,65535UL,65531UL,65535UL}};
    struct S0 *l_667 = &p_1664->g_666;
    int i, j;
    for (i = 0; i < 5; i++)
        l_655[i] = &l_636;
    for (p_65 = 0; (p_65 > 0); ++p_65)
    { /* block id: 27 */
        VECTOR(int32_t, 16) l_70 = (VECTOR(int32_t, 16))(0x45039A24L, (VECTOR(int32_t, 4))(0x45039A24L, (VECTOR(int32_t, 2))(0x45039A24L, 8L), 8L), 8L, 0x45039A24L, 8L, (VECTOR(int32_t, 2))(0x45039A24L, 8L), (VECTOR(int32_t, 2))(0x45039A24L, 8L), 0x45039A24L, 8L, 0x45039A24L, 8L);
        int64_t *l_79 = (void*)0;
        uint8_t *l_83 = (void*)0;
        int32_t *l_87 = &p_1664->g_54;
        int32_t *l_634 = &p_1664->g_635;
        int32_t *l_637 = &l_80;
        int32_t *l_638 = (void*)0;
        int32_t *l_639 = &p_1664->g_635;
        int32_t *l_640 = &l_80;
        int32_t *l_641 = (void*)0;
        int32_t *l_642 = &l_80;
        int32_t *l_643 = &p_1664->g_209.f5;
        int32_t *l_644[5];
        uint16_t l_648 = 65531UL;
        int i;
        for (i = 0; i < 5; i++)
            l_644[i] = &l_636;
        (*l_634) ^= ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_70.s13c53d1739c36de1)).sf29a)), (int32_t)(safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 16))(((((l_633 = func_73(((p_1664->g_comm_values[p_1664->tid] && ((VECTOR(int8_t, 4))(l_76.s2423)).y) , ((safe_sub_func_int64_t_s_s((l_80 = 0x5701FB03350090E7L), (GROUP_DIVERGE(2, 1) , ((p_1664->g_84 = ((safe_mul_func_int16_t_s_s(p_65, p_64)) & p_1664->g_17.x)) && (func_85(l_87, p_1664) < (safe_rshift_func_int8_t_s_u((p_65 == (l_76.s7 >= 0x7263C7F5L)), 5))))))) | p_1664->g_3)), p_64, p_1664)) == (void*)0) == p_64) , (*l_87)), ((VECTOR(uint8_t, 2))(0x27L)), ((VECTOR(uint8_t, 8))(0x0BL)), 0xF4L, p_65, ((VECTOR(uint8_t, 2))(0UL)), 0xAAL)).s84, ((VECTOR(uint8_t, 2))(2UL))))).xyyxxyxyyxxxyxxy, ((VECTOR(uint8_t, 16))(0x0DL))))).se, (*l_87)))))), (*l_87), 0x547451FFL, 0x28210E46L, 0x1DE9DA47L)).s11)).yxxxxyyy, ((VECTOR(int32_t, 8))(0x53C1365AL)), ((VECTOR(int32_t, 8))(0x4756166DL))))).s0;
        --l_648;
    }
    l_656[2][1]--;
    for (p_64 = 0; (p_64 == 35); p_64++)
    { /* block id: 272 */
        uint8_t l_661 = 9UL;
        if (l_661)
            break;
        for (p_1664->g_188 = 21; (p_1664->g_188 >= (-28)); p_1664->g_188 = safe_sub_func_int16_t_s_s(p_1664->g_188, 4))
        { /* block id: 276 */
            (*l_653) |= (safe_mod_func_int8_t_s_s(0x49L, p_64));
        }
    }
    (*l_667) = p_1664->g_666;
    return p_64;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_73(uint64_t  p_74, int8_t  p_75, struct S1 * p_1664)
{ /* block id: 217 */
    int32_t l_586 = 0x4C01A843L;
    int32_t l_587 = 0x425D9154L;
    uint32_t l_588 = 0xB958BB45L;
    int32_t *l_632 = &l_587;
    --l_588;
    if ((atomic_inc(&p_1664->l_atomic_input[39]) == 5))
    { /* block id: 220 */
        struct S0 l_591 = {1L,0L,0x751CA857L,0x445FD071L,0UL,0x4199528DL,1L};/* VOLATILE GLOBAL l_591 */
        struct S0 l_592 = {0x0263L,0x12C05A8AL,4294967295UL,0xFD5ADCAFL,0UL,0L,8L};/* VOLATILE GLOBAL l_592 */
        VECTOR(int32_t, 2) l_630 = (VECTOR(int32_t, 2))(0x2918BD7BL, 0x2DCD47BAL);
        VECTOR(uint64_t, 2) l_631 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL);
        int i;
        l_592 = l_591;
        for (l_592.f1 = 0; (l_592.f1 <= 11); l_592.f1 = safe_add_func_int64_t_s_s(l_592.f1, 3))
        { /* block id: 224 */
            int32_t *l_595 = (void*)0;
            int32_t l_596[5][6] = {{(-1L),1L,1L,(-1L),(-1L),1L},{(-1L),1L,1L,(-1L),(-1L),1L},{(-1L),1L,1L,(-1L),(-1L),1L},{(-1L),1L,1L,(-1L),(-1L),1L},{(-1L),1L,1L,(-1L),(-1L),1L}};
            int i, j;
            l_595 = (void*)0;
            for (l_596[4][5] = 0; (l_596[4][5] != (-29)); l_596[4][5] = safe_sub_func_int32_t_s_s(l_596[4][5], 6))
            { /* block id: 228 */
                int32_t l_599 = (-10L);
                for (l_599 = 0; (l_599 < 29); ++l_599)
                { /* block id: 231 */
                    uint16_t l_602 = 65535UL;
                    int16_t l_603 = 1L;
                    int32_t l_618 = 5L;
                    if ((l_603 |= l_602))
                    { /* block id: 233 */
                        int32_t l_604[7][10] = {{(-5L),(-5L),0x4502FC87L,0x6AC55433L,0L,4L,0x18307DFDL,0x2E0F6F29L,0x18307DFDL,4L},{(-5L),(-5L),0x4502FC87L,0x6AC55433L,0L,4L,0x18307DFDL,0x2E0F6F29L,0x18307DFDL,4L},{(-5L),(-5L),0x4502FC87L,0x6AC55433L,0L,4L,0x18307DFDL,0x2E0F6F29L,0x18307DFDL,4L},{(-5L),(-5L),0x4502FC87L,0x6AC55433L,0L,4L,0x18307DFDL,0x2E0F6F29L,0x18307DFDL,4L},{(-5L),(-5L),0x4502FC87L,0x6AC55433L,0L,4L,0x18307DFDL,0x2E0F6F29L,0x18307DFDL,4L},{(-5L),(-5L),0x4502FC87L,0x6AC55433L,0L,4L,0x18307DFDL,0x2E0F6F29L,0x18307DFDL,4L},{(-5L),(-5L),0x4502FC87L,0x6AC55433L,0L,4L,0x18307DFDL,0x2E0F6F29L,0x18307DFDL,4L}};
                        int32_t l_605 = 8L;
                        int8_t l_606 = (-1L);
                        uint8_t l_607 = 255UL;
                        struct S0 l_610 = {7L,0L,0x3D22D596L,0x8848A2ABL,0x06D5A035L,0x4A37A0F6L,0x0AE35E17FB814086L};/* VOLATILE GLOBAL l_610 */
                        VECTOR(int32_t, 4) l_611 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), (-1L)), (-1L));
                        uint64_t l_612 = 0xAEC8BB798D1A84AFL;
                        int32_t *l_613 = &l_604[6][8];
                        int i, j;
                        l_612 = (((++l_607) , l_610) , (l_592.f5 = ((VECTOR(int32_t, 8))(l_611.zzyzywzy)).s1));
                        l_613 = l_613;
                    }
                    else
                    { /* block id: 238 */
                        VECTOR(uint32_t, 4) l_614 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x93B03536L), 0x93B03536L);
                        uint8_t l_615 = 0xEEL;
                        VECTOR(uint8_t, 2) l_616 = (VECTOR(uint8_t, 2))(3UL, 0UL);
                        int32_t *l_617[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_617[i] = (void*)0;
                        l_617[0] = (((VECTOR(uint32_t, 4))(l_614.xyyw)).x , ((l_615 , ((l_592.f5 = 0x47A252E0L) , ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_616.yyxyyxxy)))).s0)) , (l_595 = (void*)0)));
                    }
                    if ((((VECTOR(int64_t, 2))((-3L), (-9L))).lo , l_618))
                    { /* block id: 243 */
                        uint32_t l_619 = 4294967293UL;
                        l_595 = (void*)0;
                        l_619++;
                    }
                    else
                    { /* block id: 246 */
                        uint64_t l_622 = 18446744073709551614UL;
                        --l_622;
                    }
                    for (l_603 = 0; (l_603 > 12); l_603 = safe_add_func_int32_t_s_s(l_603, 5))
                    { /* block id: 251 */
                        VECTOR(int32_t, 2) l_627 = (VECTOR(int32_t, 2))((-1L), 0x1E82ECA4L);
                        int32_t l_628 = 0x4F4C7182L;
                        uint16_t l_629 = 0x3689L;
                        int i;
                        l_595 = (void*)0;
                        l_628 &= ((VECTOR(int32_t, 16))(l_627.yyxyyyyxyyxyxyyx)).sc;
                        l_592.f5 = 0x4EBB9195L;
                        l_592.f5 = l_629;
                    }
                }
            }
        }
        l_631.y |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_630.xy)).xyxyyxyyxyyxyxyx)).s0;
        unsigned int result = 0;
        result += l_591.f0;
        result += l_591.f1;
        result += l_591.f2;
        result += l_591.f3;
        result += l_591.f4;
        result += l_591.f5;
        result += l_591.f6;
        result += l_592.f0;
        result += l_592.f1;
        result += l_592.f2;
        result += l_592.f3;
        result += l_592.f4;
        result += l_592.f5;
        result += l_592.f6;
        result += l_630.y;
        result += l_630.x;
        result += l_631.y;
        result += l_631.x;
        atomic_add(&p_1664->l_special_values[39], result);
    }
    else
    { /* block id: 261 */
        (1 + 1);
    }
    return &p_1664->g_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_1664->g_84 p_1664->g_123 p_1664->g_131 p_1664->g_54 p_1664->g_29 p_1664->g_53 p_1664->l_comm_values p_1664->g_12 p_1664->g_149 p_1664->g_152 p_1664->g_167 p_1664->g_2 p_1664->g_188 p_1664->g_199 p_1664->g_200 p_1664->g_3 p_1664->g_204 p_1664->g_209 p_1664->g_233 p_1664->g_247 p_1664->g_248 p_1664->g_274 p_1664->g_275 p_1664->g_279 p_1664->g_283 p_1664->g_287 p_1664->g_304 p_1664->g_196 p_1664->g_327 p_1664->g_17 p_1664->g_21 p_1664->g_358 p_1664->g_14 p_1664->g_363 p_1664->g_368 p_1664->g_370 p_1664->g_371 p_1664->g_185 p_1664->g_391 p_1664->g_392 p_1664->g_310 p_1664->g_465 p_1664->g_467 p_1664->g_506 p_1664->g_516 p_1664->g_522 p_1664->g_509
 * writes: p_1664->g_84 p_1664->g_17 p_1664->g_123 p_1664->g_20 p_1664->g_149 p_1664->g_152 p_1664->g_185 p_1664->g_53 p_1664->g_195 p_1664->g_200 p_1664->g_233 p_1664->g_248 p_1664->g_209.f1 p_1664->g_12 p_1664->g_274 p_1664->g_209.f3 p_1664->g_209.f0 p_1664->g_167 p_1664->g_209.f5 p_1664->g_275 p_1664->g_204 p_1664->g_209 p_1664->g_465 p_1664->g_188 p_1664->g_506 p_1664->g_523 p_1664->g_572
 */
uint16_t  func_85(int32_t * p_86, struct S1 * p_1664)
{ /* block id: 30 */
    int64_t l_124 = 1L;
    int32_t *l_127 = &p_1664->g_54;
    VECTOR(uint32_t, 4) l_144 = (VECTOR(uint32_t, 4))(0xEEBB8701L, (VECTOR(uint32_t, 2))(0xEEBB8701L, 0x6254A217L), 0x6254A217L);
    int16_t l_145 = 7L;
    int32_t l_161 = 0x5F00511DL;
    int32_t l_162 = 0x4CE7B010L;
    int32_t l_163[10][9] = {{1L,1L,1L,1L,4L,1L,1L,4L,1L},{1L,1L,1L,1L,4L,1L,1L,4L,1L},{1L,1L,1L,1L,4L,1L,1L,4L,1L},{1L,1L,1L,1L,4L,1L,1L,4L,1L},{1L,1L,1L,1L,4L,1L,1L,4L,1L},{1L,1L,1L,1L,4L,1L,1L,4L,1L},{1L,1L,1L,1L,4L,1L,1L,4L,1L},{1L,1L,1L,1L,4L,1L,1L,4L,1L},{1L,1L,1L,1L,4L,1L,1L,4L,1L},{1L,1L,1L,1L,4L,1L,1L,4L,1L}};
    uint8_t *l_170 = &p_1664->g_152;
    uint64_t l_171 = 0UL;
    int64_t *l_176[10][9][2] = {{{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124}},{{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124}},{{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124}},{{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124}},{{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124}},{{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124}},{{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124}},{{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124}},{{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124}},{{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124},{(void*)0,&l_124}}};
    VECTOR(int32_t, 4) l_179 = (VECTOR(int32_t, 4))(0x7D77FA01L, (VECTOR(int32_t, 2))(0x7D77FA01L, 0x0FA583B5L), 0x0FA583B5L);
    uint64_t *l_181 = (void*)0;
    uint64_t **l_180 = &l_181;
    uint8_t *l_184 = &p_1664->g_185;
    VECTOR(uint8_t, 4) l_338 = (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 1UL), 1UL);
    uint64_t l_386 = 0x34E7CA7AA63157CBL;
    struct S0 *l_421 = &p_1664->g_209;
    struct S0 **l_420 = &l_421;
    VECTOR(int32_t, 2) l_422 = (VECTOR(int32_t, 2))(0x7A8B4A64L, (-1L));
    uint16_t l_460 = 1UL;
    int32_t l_498 = (-9L);
    VECTOR(int8_t, 16) l_511 = (VECTOR(int8_t, 16))(0x46L, (VECTOR(int8_t, 4))(0x46L, (VECTOR(int8_t, 2))(0x46L, 0x4DL), 0x4DL), 0x4DL, 0x46L, 0x4DL, (VECTOR(int8_t, 2))(0x46L, 0x4DL), (VECTOR(int8_t, 2))(0x46L, 0x4DL), 0x46L, 0x4DL, 0x46L, 0x4DL);
    int8_t l_544 = 1L;
    int32_t l_547 = 0L;
    uint16_t l_556 = 0xC775L;
    uint16_t *l_557 = &l_460;
    int8_t *l_571 = &p_1664->g_149[2][1][4];
    int8_t **l_570 = &l_571;
    int8_t ***l_574 = &l_570;
    VECTOR(uint32_t, 2) l_577 = (VECTOR(uint32_t, 2))(6UL, 4294967291UL);
    VECTOR(int32_t, 8) l_578 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-1L)), (-1L)), (-1L), (-4L), (-1L));
    int8_t l_579 = (-1L);
    uint32_t l_580[5] = {0x9AF4DBDBL,0x9AF4DBDBL,0x9AF4DBDBL,0x9AF4DBDBL,0x9AF4DBDBL};
    int32_t *l_581 = (void*)0;
    int32_t *l_582[5];
    uint64_t l_583 = 0x047F6265E684214EL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_582[i] = &l_162;
    for (p_1664->g_84 = 13; (p_1664->g_84 > 5); p_1664->g_84 = safe_sub_func_int8_t_s_s(p_1664->g_84, 4))
    { /* block id: 33 */
        int8_t *l_117 = (void*)0;
        int8_t *l_118 = (void*)0;
        int8_t *l_119 = (void*)0;
        uint64_t *l_122[5][4][2] = {{{&p_1664->g_123,&p_1664->g_123},{&p_1664->g_123,&p_1664->g_123},{&p_1664->g_123,&p_1664->g_123},{&p_1664->g_123,&p_1664->g_123}},{{&p_1664->g_123,&p_1664->g_123},{&p_1664->g_123,&p_1664->g_123},{&p_1664->g_123,&p_1664->g_123},{&p_1664->g_123,&p_1664->g_123}},{{&p_1664->g_123,&p_1664->g_123},{&p_1664->g_123,&p_1664->g_123},{&p_1664->g_123,&p_1664->g_123},{&p_1664->g_123,&p_1664->g_123}},{{&p_1664->g_123,&p_1664->g_123},{&p_1664->g_123,&p_1664->g_123},{&p_1664->g_123,&p_1664->g_123},{&p_1664->g_123,&p_1664->g_123}},{{&p_1664->g_123,&p_1664->g_123},{&p_1664->g_123,&p_1664->g_123},{&p_1664->g_123,&p_1664->g_123},{&p_1664->g_123,&p_1664->g_123}}};
        int32_t **l_128 = &l_127;
        uint16_t l_146 = 0xE5B7L;
        int8_t l_147 = (-5L);
        int8_t *l_148 = &p_1664->g_149[2][1][4];
        uint8_t *l_150 = (void*)0;
        uint8_t *l_151 = &p_1664->g_152;
        int32_t l_153 = 0x59A4FA59L;
        int32_t *l_154 = (void*)0;
        int32_t *l_155 = (void*)0;
        int32_t *l_156 = (void*)0;
        int32_t *l_157 = (void*)0;
        int32_t *l_158 = (void*)0;
        int32_t *l_159 = &l_153;
        int32_t *l_160[10][2][5] = {{{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54},{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54}},{{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54},{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54}},{{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54},{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54}},{{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54},{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54}},{{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54},{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54}},{{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54},{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54}},{{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54},{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54}},{{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54},{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54}},{{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54},{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54}},{{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54},{&l_153,&p_1664->g_54,&p_1664->g_3,&l_153,&p_1664->g_54}}};
        uint8_t l_164 = 0UL;
        int i, j, k;
        if ((atomic_inc(&p_1664->l_atomic_input[26]) == 3))
        { /* block id: 35 */
            VECTOR(uint64_t, 2) l_90 = (VECTOR(uint64_t, 2))(0x7178D33F623BA0E3L, 0x9A8624A7E6D0914BL);
            VECTOR(int32_t, 2) l_91 = (VECTOR(int32_t, 2))(0x079556C6L, 0x454CFDD0L);
            VECTOR(uint32_t, 2) l_92 = (VECTOR(uint32_t, 2))(0xB50B9A65L, 0xEC7D6112L);
            int16_t l_93 = 1L;
            uint8_t l_94[3][2] = {{0x36L,251UL},{0x36L,251UL},{0x36L,251UL}};
            VECTOR(uint32_t, 2) l_95 = (VECTOR(uint32_t, 2))(0xFE2F772BL, 4294967289UL);
            int64_t l_96[5][7][7] = {{{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)}},{{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)}},{{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)}},{{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)}},{{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)},{0x100EB00D6BF4B6F1L,0x6FB93DB6BE6058BBL,4L,0x783AD51AC0D59BB7L,7L,(-1L),(-8L)}}};
            uint32_t l_97 = 7UL;
            VECTOR(int32_t, 4) l_98 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x4AB2B09BL), 0x4AB2B09BL);
            VECTOR(int32_t, 4) l_99 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-1L)), (-1L));
            VECTOR(int32_t, 2) l_100 = (VECTOR(int32_t, 2))((-10L), 0x1CAF8AA5L);
            VECTOR(uint32_t, 16) l_101 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), 1UL, 4294967295UL, 1UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 4294967295UL, 1UL, 4294967295UL, 1UL);
            int64_t l_102[9] = {0x269B8F49FF72C978L,0x269B8F49FF72C978L,0x269B8F49FF72C978L,0x269B8F49FF72C978L,0x269B8F49FF72C978L,0x269B8F49FF72C978L,0x269B8F49FF72C978L,0x269B8F49FF72C978L,0x269B8F49FF72C978L};
            int16_t l_103 = (-1L);
            uint16_t l_104 = 0xEA4AL;
            int32_t l_105 = 0x40DF3FCBL;
            int64_t l_106 = 0x17568C23FB85D134L;
            uint8_t l_107 = 0x18L;
            uint64_t l_108 = 0xC70086F9DF61D7ECL;
            uint8_t l_109 = 255UL;
            int16_t l_110 = 0x189EL;
            int32_t *l_111 = (void*)0;
            int32_t l_113 = 0x18ECCF47L;
            int32_t *l_112 = &l_113;
            int32_t *l_114 = &l_113;
            int i, j, k;
            l_106 &= ((l_103 &= ((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 8))(0x285E45CFL, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))((-1L), 0x2F93L)).xyxx, ((VECTOR(uint16_t, 4))(l_90.y, 1UL, 0x4168L, 0xA474L))))), ((VECTOR(int32_t, 2))(l_91.yy)), 0x795C78EDL)).s06))).yyyx, ((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_92.yy)).xxyxyyyy)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4UL, 0UL)).hi, l_93, 0xFE548C15L, 8UL)), 0xA0A77380L, l_94[0][1], 0xAD294528L, 4294967295UL)), (uint32_t)((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_95.xxxxxxxyyxyyxxyx)).s90)).hi, (uint32_t)0x137123A7L))).s432c))).w, 2UL, 3UL, 0x56265DC7L)).ywzwyxwwzxywyxyy, ((VECTOR(uint32_t, 2))(0x89FA4E93L, 4294967290UL)).xyyxyxxxxyxyyyyx))).s96, ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 16))(abs(((VECTOR(int32_t, 16))((l_97 &= (l_96[1][4][0] = ((VECTOR(int32_t, 2))(0L, (-1L))).odd)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(l_98.zxyxxywz)).s16, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x4350B5FEL, 0x69995DD1L)).xxyyyxxxxxyyxxxy)).sf6))), ((VECTOR(int32_t, 16))(l_99.yzyzxwzxwzwywzwz)).sa, (-1L), 1L, ((VECTOR(int32_t, 8))(l_100.yyyxyxxy)), 0x4D75B283L, 0x14D0E7C8L))))).s8235, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_101.sa0)), 0x24337CDBL, 8UL)).hi)).xyxy))).even, ((VECTOR(uint32_t, 2))(0UL, 0xEDF114FAL))))), 4294967292UL, 7UL)).zyzwywyz, (uint32_t)l_102[5]))).s0) , ((l_105 &= l_104) , 0L));
            l_108 = l_107;
            l_114 = ((l_110 = l_109) , (l_112 = l_111));
            unsigned int result = 0;
            result += l_90.y;
            result += l_90.x;
            result += l_91.y;
            result += l_91.x;
            result += l_92.y;
            result += l_92.x;
            result += l_93;
            int l_94_i0, l_94_i1;
            for (l_94_i0 = 0; l_94_i0 < 3; l_94_i0++) {
                for (l_94_i1 = 0; l_94_i1 < 2; l_94_i1++) {
                    result += l_94[l_94_i0][l_94_i1];
                }
            }
            result += l_95.y;
            result += l_95.x;
            int l_96_i0, l_96_i1, l_96_i2;
            for (l_96_i0 = 0; l_96_i0 < 5; l_96_i0++) {
                for (l_96_i1 = 0; l_96_i1 < 7; l_96_i1++) {
                    for (l_96_i2 = 0; l_96_i2 < 7; l_96_i2++) {
                        result += l_96[l_96_i0][l_96_i1][l_96_i2];
                    }
                }
            }
            result += l_97;
            result += l_98.w;
            result += l_98.z;
            result += l_98.y;
            result += l_98.x;
            result += l_99.w;
            result += l_99.z;
            result += l_99.y;
            result += l_99.x;
            result += l_100.y;
            result += l_100.x;
            result += l_101.sf;
            result += l_101.se;
            result += l_101.sd;
            result += l_101.sc;
            result += l_101.sb;
            result += l_101.sa;
            result += l_101.s9;
            result += l_101.s8;
            result += l_101.s7;
            result += l_101.s6;
            result += l_101.s5;
            result += l_101.s4;
            result += l_101.s3;
            result += l_101.s2;
            result += l_101.s1;
            result += l_101.s0;
            int l_102_i0;
            for (l_102_i0 = 0; l_102_i0 < 9; l_102_i0++) {
                result += l_102[l_102_i0];
            }
            result += l_103;
            result += l_104;
            result += l_105;
            result += l_106;
            result += l_107;
            result += l_108;
            result += l_109;
            result += l_110;
            result += l_113;
            atomic_add(&p_1664->l_special_values[26], result);
        }
        else
        { /* block id: 45 */
            (1 + 1);
        }
        l_153 &= (safe_rshift_func_int8_t_s_u((p_1664->g_17.x = 1L), ((*l_151) |= (((*l_148) |= (safe_sub_func_uint8_t_u_u(((p_1664->g_123--) > (((*l_128) = l_127) != p_86)), ((safe_sub_func_uint64_t_u_u((((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 2))(p_1664->g_131.zw)).xxxxxyxy, (int16_t)(safe_add_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((GROUP_DIVERGE(0, 1) != 65531UL), (p_1664->g_20.y = (*p_86)))), ((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((((((safe_sub_func_int8_t_s_s(0x28L, l_124)) && l_144.y) && (p_1664->g_29.s0 , p_1664->g_53)) || p_1664->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1664->tid, 7))]) ^ GROUP_DIVERGE(2, 1)), l_144.y)), l_124)) & l_145))) , l_146), l_147)), (int16_t)l_144.w))).s3 ^ p_1664->g_12.y), l_145)) <= 0x8A50E592CA9757F0L)))) < p_1664->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1664->tid, 7))]))));
        --l_164;
    }
    if ((((*l_184) = (((p_1664->g_167 , (safe_lshift_func_uint8_t_u_s((l_171 = ((*l_170) = GROUP_DIVERGE(0, 1))), 4))) || ((safe_mod_func_uint64_t_u_u((18446744073709551615UL != (safe_div_func_int8_t_s_s(p_1664->g_2, (~((l_163[3][2] |= ((VECTOR(int64_t, 2))(0x2D3D6EBB9BF21D4AL, 7L)).odd) , (safe_rshift_func_int16_t_s_s(p_1664->g_149[1][2][6], ((-8L) == (((VECTOR(int32_t, 16))(l_179.wzwyzxwyzxywywwx)).s3 == (&l_171 != ((*l_180) = &l_171))))))))))), (safe_mod_func_uint32_t_u_u((&p_1664->g_152 != l_170), (*p_86))))) ^ (*p_86))) || 0x6D5BL)) & (*l_127)))
    { /* block id: 62 */
        int16_t l_193 = (-8L);
        VECTOR(uint32_t, 16) l_203 = (VECTOR(uint32_t, 16))(0x4EA9E6CEL, (VECTOR(uint32_t, 4))(0x4EA9E6CEL, (VECTOR(uint32_t, 2))(0x4EA9E6CEL, 4294967287UL), 4294967287UL), 4294967287UL, 0x4EA9E6CEL, 4294967287UL, (VECTOR(uint32_t, 2))(0x4EA9E6CEL, 4294967287UL), (VECTOR(uint32_t, 2))(0x4EA9E6CEL, 4294967287UL), 0x4EA9E6CEL, 4294967287UL, 0x4EA9E6CEL, 4294967287UL);
        int32_t *l_210 = &p_1664->g_3;
        int64_t *l_215 = &l_124;
        int8_t *l_223 = &p_1664->g_149[2][1][4];
        uint8_t l_224[2];
        int32_t l_229[2];
        VECTOR(int32_t, 8) l_265 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
        uint64_t l_354[9] = {0xDDF15BD04D2FD40FL,0xDDF15BD04D2FD40FL,0xDDF15BD04D2FD40FL,0xDDF15BD04D2FD40FL,0xDDF15BD04D2FD40FL,0xDDF15BD04D2FD40FL,0xDDF15BD04D2FD40FL,0xDDF15BD04D2FD40FL,0xDDF15BD04D2FD40FL};
        int16_t l_390 = 0x23A7L;
        int16_t l_411[4] = {0x24B5L,0x24B5L,0x24B5L,0x24B5L};
        uint64_t **l_450 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_224[i] = 0x41L;
        for (i = 0; i < 2; i++)
            l_229[i] = 0x5B75832FL;
        for (p_1664->g_152 = 0; (p_1664->g_152 < 14); p_1664->g_152++)
        { /* block id: 65 */
            uint64_t ***l_194 = (void*)0;
            uint64_t **l_197 = &p_1664->g_196;
            int32_t *l_198 = &l_163[3][2];
            p_1664->g_53 = (p_1664->g_188 , 0x3EB70EFDL);
            (*l_198) |= (safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(l_193, (+(p_1664->g_167.f1 | p_1664->g_123)))), ((p_1664->g_195 = (void*)0) == l_197)));
            (*p_1664->g_199) = &p_1664->g_3;
            if ((**p_1664->g_199))
                break;
        }
        l_161 = ((&p_1664->g_195 == &l_180) > (safe_rshift_func_uint16_t_u_u((((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_203.sbb)))).xyyxyyyyxxxxxxxx))).sd > ((((p_1664->g_204 , l_203.s0) , (safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u((p_1664->g_209 , GROUP_DIVERGE(1, 1)), ((((void*)0 != l_210) , p_86) == ((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_215 != &p_1664->g_84), p_1664->g_149[2][1][4])), 4)) , l_210)))), (*l_210)))) < p_1664->g_12.y) & (*l_210))), (*l_210))));
        if ((*l_210))
        { /* block id: 73 */
            int8_t **l_220 = (void*)0;
            int8_t *l_222 = &p_1664->g_149[0][2][3];
            int8_t **l_221 = &l_222;
            VECTOR(int32_t, 8) l_225 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
            uint64_t **l_226[4];
            VECTOR(uint16_t, 16) l_280 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x9963L), 0x9963L), 0x9963L, 65535UL, 0x9963L, (VECTOR(uint16_t, 2))(65535UL, 0x9963L), (VECTOR(uint16_t, 2))(65535UL, 0x9963L), 65535UL, 0x9963L, 65535UL, 0x9963L);
            uint32_t l_387 = 4294967294UL;
            struct S0 *l_419 = &p_1664->g_209;
            struct S0 **l_418 = &l_419;
            int8_t l_444 = 5L;
            int32_t *l_463 = &p_1664->g_54;
            int32_t **l_464 = &l_463;
            uint32_t l_499 = 2UL;
            int32_t *l_521[1];
            int32_t **l_520[9][3][8] = {{{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]}},{{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]}},{{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]}},{{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]}},{{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]}},{{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]}},{{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]}},{{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]}},{{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]},{&l_521[0],(void*)0,&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0],&l_521[0]}}};
            uint8_t l_525 = 0x3BL;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_226[i] = &p_1664->g_196;
            for (i = 0; i < 1; i++)
                l_521[i] = (void*)0;
            if ((((+((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((-1L), p_1664->g_167.f6, 0x3BD95B1CF1519C01L, 5L)).odd)).xyyyyyyyxxxxxxyx)).s6 ^ (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((((*l_221) = l_184) != l_223), (GROUP_DIVERGE(1, 1) & l_224[0]))) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_225.s35160707)).s52)).lo), (*l_127)))) && 1UL)) >= (*l_210)) > ((-5L) <= ((void*)0 == l_226[1]))))
            { /* block id: 75 */
                VECTOR(int16_t, 2) l_227 = (VECTOR(int16_t, 2))((-8L), 3L);
                int32_t l_230 = 0x4AD1ED15L;
                int32_t l_231 = 0x58AB34EFL;
                int32_t l_232 = 0x1FD4621DL;
                uint32_t l_238 = 0xECD05820L;
                VECTOR(int16_t, 4) l_249 = (VECTOR(int16_t, 4))(0x2A5BL, (VECTOR(int16_t, 2))(0x2A5BL, 0x0713L), 0x0713L);
                uint32_t l_272[5];
                uint64_t ***l_364[3];
                int i;
                for (i = 0; i < 5; i++)
                    l_272[i] = 0xB1A346ECL;
                for (i = 0; i < 3; i++)
                    l_364[i] = &l_180;
                if ((l_227.y == 0UL))
                { /* block id: 76 */
                    int32_t *l_228[4] = {&l_163[6][3],&l_163[6][3],&l_163[6][3],&l_163[6][3]};
                    int32_t *l_254 = &p_1664->g_209.f1;
                    uint16_t *l_273 = &p_1664->g_274;
                    uint32_t *l_276[7][2] = {{(void*)0,&p_1664->g_233[4]},{(void*)0,&p_1664->g_233[4]},{(void*)0,&p_1664->g_233[4]},{(void*)0,&p_1664->g_233[4]},{(void*)0,&p_1664->g_233[4]},{(void*)0,&p_1664->g_233[4]},{(void*)0,&p_1664->g_233[4]}};
                    int i, j;
                    p_1664->g_233[4]--;
                    p_1664->g_12.y &= ((p_1664->g_29.sc < (safe_mul_func_int16_t_s_s((((GROUP_DIVERGE(1, 1) & (+250UL)) >= (&p_1664->g_200 == &p_1664->g_200)) == l_238), (((*l_254) = ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_1664->g_247.s53)), 0x705CL, 0x3B26L, 0x73F1L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(p_1664->g_248.s8b)).yxxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x334CL, (-2L))))), ((VECTOR(int16_t, 2))(l_249.yy)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 2))(1L, 0x68C0L)).xyyy, (int16_t)(p_1664->g_248.s3 = ((safe_lshift_func_int16_t_s_u(l_225.s3, 2)) , l_225.s5)), (int16_t)(~(safe_mod_func_int32_t_s_s((*p_1664->g_200), (*p_86))))))), 1L, p_1664->g_247.s1, 0x02E7L, (-3L))), (*l_210), ((VECTOR(int16_t, 2))(0x456AL)), 0x5E44L)).s2c58))).even)), 0x1144L)).s3470044574335722)).se, 3)) || (*l_210)), GROUP_DIVERGE(0, 1))), l_225.s1)), p_1664->g_233[4])) != p_1664->g_247.s6)) , l_231)))) == (*l_127));
                    l_231 = (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((((*l_127) , p_1664->g_209.f5) != ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(p_1664->g_12.x, 2)), 9)) && (*p_86))), 2)), ((VECTOR(int32_t, 2))(l_265.s35)).even)), (safe_div_func_uint32_t_u_u(((safe_add_func_int16_t_s_s((*l_127), ((p_1664->g_167.f5 , (safe_rshift_func_int8_t_s_s(((*l_223) ^= (l_272[0] != (((*l_273) &= l_249.y) & ((l_230 &= ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(p_1664->g_275.xx)))).xyyx)).odd)).even) == GROUP_DIVERGE(1, 1))))), 0))) && (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 2))(p_1664->g_279.xx)).xyxxxxxx, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_280.s32)), 0UL, 0xE697L)).odd, ((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))((p_1664->g_247.s7 | 0x0C0C089D6F41877CL), 0UL, 65534UL, (*l_127), 65529UL, 0x6FF9L, FAKE_DIVERGE(p_1664->global_1_offset, get_global_id(1), 10), ((VECTOR(uint16_t, 2))(65527UL)), l_225.s2, ((VECTOR(uint16_t, 2))(65534UL)), 0x37EDL, 0x68B0L, 65527UL, 9UL)).s85)), 0x737BL, 0xB29BL)).xwyxywwywyyxwwxw))).lo, ((VECTOR(uint16_t, 8))(65535UL))))), 0x1C42L, 0xC5FFL, (*l_127), (*l_127), ((VECTOR(uint16_t, 2))(0UL)), 0UL, 0xF1C9L)).se3)).yxyxxxyx, (uint16_t)0x648EL))).s51))).yyyxyyyx)).s57)), 1UL, 65535UL)).wxzxwwxw))).s7533714031254427)).s8f, ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 2))(0xC328L))))).xxyxxxyx)).s02)), ((VECTOR(uint16_t, 2))(0x6136L)), ((VECTOR(uint16_t, 4))(65535UL)), l_227.x, ((VECTOR(uint16_t, 4))(65535UL)), p_1664->g_54, 1UL, 0UL)).s8, GROUP_DIVERGE(2, 1)))))) || l_272[0]), (*l_210)))));
                    for (p_1664->g_123 = 0; (p_1664->g_123 > 47); p_1664->g_123 = safe_add_func_uint64_t_u_u(p_1664->g_123, 1))
                    { /* block id: 87 */
                        uint8_t l_284 = 2UL;
                        (*p_1664->g_283) = &l_229[1];
                        if ((*l_210))
                            continue;
                        ++l_284;
                    }
                }
                else
                { /* block id: 92 */
                    int16_t l_301 = 1L;
                    uint16_t l_339 = 0xFC2DL;
                    (*p_1664->g_287) = p_86;
                    for (p_1664->g_209.f3 = 0; (p_1664->g_209.f3 >= 51); ++p_1664->g_209.f3)
                    { /* block id: 96 */
                        int8_t l_298 = 0x01L;
                        uint16_t *l_299 = (void*)0;
                        uint16_t *l_300[10] = {(void*)0,&p_1664->g_274,(void*)0,(void*)0,&p_1664->g_274,(void*)0,(void*)0,&p_1664->g_274,(void*)0,(void*)0};
                        uint32_t *l_314 = &p_1664->g_233[4];
                        int32_t l_315 = 0L;
                        int32_t *l_316 = &l_231;
                        int16_t *l_348 = &p_1664->g_209.f0;
                        int16_t *l_349 = &l_145;
                        int16_t *l_350 = (void*)0;
                        int16_t *l_351 = (void*)0;
                        int16_t *l_352 = (void*)0;
                        int16_t *l_353 = &l_193;
                        int32_t *l_355[7][6][1];
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 6; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_355[i][j][k] = &l_230;
                            }
                        }
                        (*l_316) &= (safe_lshift_func_uint8_t_u_u((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 4))(1L, 0x3548E30274D75770L, 0x231F853D6C6D53B5L, (-4L))).zyxzzzyyzwxwzzxw, (int64_t)(l_315 ^= ((*l_215) = (((*l_210) != (*l_210)) == (((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u(((*l_314) = (((safe_sub_func_int64_t_s_s(((**p_1664->g_199) == (((~(p_1664->g_274++)) && ((void*)0 == p_1664->g_304[3][3])) < 1UL)), (safe_unary_minus_func_uint32_t_u(0xA38CAB49L)))) != 0x6CEDDF625D81B11DL) != l_298)), (*p_1664->g_200))) < 6L), l_298)) , l_301) | l_298))))))).se38e)).x ^ (*p_1664->g_196)), 4));
                        l_229[1] &= (safe_div_func_uint32_t_u_u((((((*l_316) ^= (*p_86)) && (safe_mul_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((*l_210), ((VECTOR(uint32_t, 2))(p_1664->g_327.s32)).hi)), ((safe_sub_func_int8_t_s_s((l_301 , p_1664->g_17.y), (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s(l_301, (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_338.xwwy)).y, FAKE_DIVERGE(p_1664->local_2_offset, get_local_id(2), 10))))) , (l_339 | (FAKE_DIVERGE(p_1664->local_0_offset, get_local_id(0), 10) < ((*l_353) = (l_339 , (((*l_349) = (((safe_lshift_func_int16_t_s_u(((!((((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((*l_127) == (safe_lshift_func_int16_t_s_s(((*l_348) = p_1664->g_167.f6), l_339))) , (*l_210)), (*l_210))), 65526UL)) || (-1L)) != 18446744073709551615UL) != l_225.s0)) != l_225.s3), p_1664->g_248.s6)) , l_280.s7) , (-2L))) == p_1664->g_21.x)))))), 11)), (-1L))))) , p_1664->g_2))) && l_354[5]), 65527UL)) != p_1664->g_123) && (*p_1664->g_196)), p_1664->g_233[0]))) == l_301) < 0x3CDCL), FAKE_DIVERGE(p_1664->group_1_offset, get_group_id(1), 10)));
                    }
                }
                for (l_231 = 26; (l_231 >= 10); l_231 = safe_sub_func_int8_t_s_s(l_231, 2))
                { /* block id: 111 */
                    (*p_1664->g_358) = p_1664->g_204;
                    if ((atomic_inc(&p_1664->g_atomic_input[41 * get_linear_group_id() + 38]) == 0))
                    { /* block id: 114 */
                        int32_t l_359 = (-9L);
                        uint8_t l_360 = 0x8BL;
                        l_360--;
                        unsigned int result = 0;
                        result += l_359;
                        result += l_360;
                        atomic_add(&p_1664->g_special_values[41 * get_linear_group_id() + 38], result);
                    }
                    else
                    { /* block id: 116 */
                        (1 + 1);
                    }
                    return p_1664->g_14.z;
                }
                (*p_1664->g_363) |= (*l_127);
                p_1664->g_195 = l_226[1];
            }
            else
            { /* block id: 123 */
                uint32_t l_369 = 4294967295UL;
                uint64_t *l_381 = &l_171;
                int32_t l_412 = 0x6E59FCD1L;
                int32_t l_414 = 0x48770B63L;
                int32_t l_445 = 0x48E1CB92L;
                int32_t l_449 = (-6L);
                int32_t *l_458[5][5];
                int8_t l_459 = 1L;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_458[i][j] = &l_161;
                }
                if ((p_1664->g_304[1][2] == p_1664->g_304[3][3]))
                { /* block id: 124 */
                    int32_t **l_365 = &l_127;
                    int16_t *l_374 = &l_193;
                    int16_t *l_388[1];
                    uint16_t *l_389 = (void*)0;
                    uint16_t *l_405 = &p_1664->g_274;
                    int32_t l_413[1];
                    uint16_t l_446 = 1UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_388[i] = &l_145;
                    for (i = 0; i < 1; i++)
                        l_413[i] = (-1L);
                    (*l_365) = p_86;
                    (*p_1664->g_392) = (((*p_1664->g_196) &= (p_1664->g_209.f4 , ((((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(p_1664->g_368.s1580adb614f5b04e)).hi, ((VECTOR(int32_t, 4))(l_369, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1664->g_370.xz)))), 3L)).yyxwzyzw, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_1664->g_371.yyxxyxyx)).s50)).xxxxyyxy))).s4, (p_1664->g_275.x = ((-1L) > ((safe_mul_func_int16_t_s_s(((*l_374) = (-2L)), (p_1664->g_209.f6 , (safe_mul_func_uint16_t_u_u((l_390 = (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s((~(p_1664->g_209.f0 &= (((l_381 == (((((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(1L, l_369)), ((*l_184) &= (l_386 , (*l_127))))) <= l_387) == (*p_1664->g_200)) && (*p_1664->g_200)) , (void*)0)) & (*l_127)) & (*l_127)))), l_225.s6)), 4294967289UL))), l_369))))) , p_1664->g_149[2][1][2]))))) , p_1664->g_279.x) , (**l_365)) , (*l_127)))) , p_1664->g_391);
                    if ((safe_rshift_func_uint16_t_u_s((((*l_222) &= (-1L)) || (1L || p_1664->g_204.f4)), ((*l_210) >= ((*l_127) > (((*l_210) >= (safe_add_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u((GROUP_DIVERGE(2, 1) && (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((*l_210) == (((*l_405) &= ((*l_127) & (*l_127))) < GROUP_DIVERGE(2, 1))), (**l_365))), FAKE_DIVERGE(p_1664->global_1_offset, get_global_id(1), 10)))), 6)) > (**l_365)), 6)) ^ 18446744073709551615UL) <= 0L) <= GROUP_DIVERGE(0, 1)), (*l_127)))) && FAKE_DIVERGE(p_1664->group_2_offset, get_group_id(2), 10)))))))
                    { /* block id: 135 */
                        int32_t *l_406 = (void*)0;
                        int32_t *l_407 = (void*)0;
                        int32_t *l_408 = &l_163[3][2];
                        int32_t *l_409 = (void*)0;
                        int32_t *l_410[6][1][7] = {{{&l_163[4][4],&l_163[4][4],(void*)0,&l_229[0],(void*)0,&l_229[0],(void*)0}},{{&l_163[4][4],&l_163[4][4],(void*)0,&l_229[0],(void*)0,&l_229[0],(void*)0}},{{&l_163[4][4],&l_163[4][4],(void*)0,&l_229[0],(void*)0,&l_229[0],(void*)0}},{{&l_163[4][4],&l_163[4][4],(void*)0,&l_229[0],(void*)0,&l_229[0],(void*)0}},{{&l_163[4][4],&l_163[4][4],(void*)0,&l_229[0],(void*)0,&l_229[0],(void*)0}},{{&l_163[4][4],&l_163[4][4],(void*)0,&l_229[0],(void*)0,&l_229[0],(void*)0}}};
                        uint32_t l_415 = 4UL;
                        int i, j, k;
                        ++l_415;
                        (*l_365) = (void*)0;
                        l_420 = l_418;
                        l_422.y ^= (**p_1664->g_199);
                    }
                    else
                    { /* block id: 140 */
                        int32_t **l_424 = &p_1664->g_200;
                        (*l_424) = ((*l_365) = (void*)0);
                        l_229[0] ^= ((*l_210) && 0x2F62L);
                    }
                    for (p_1664->g_185 = 0; (p_1664->g_185 > 13); ++p_1664->g_185)
                    { /* block id: 147 */
                        int32_t *l_427 = &l_162;
                        int32_t *l_428 = &l_161;
                        int32_t *l_429 = &p_1664->g_209.f5;
                        int32_t *l_430 = &l_162;
                        int32_t *l_431 = &l_413[0];
                        int32_t *l_432 = &l_229[1];
                        int32_t *l_433 = (void*)0;
                        int32_t *l_434 = (void*)0;
                        int32_t *l_435 = &l_229[1];
                        int32_t *l_436 = (void*)0;
                        int32_t *l_437 = &l_413[0];
                        int32_t l_438 = 0x13EC8E45L;
                        int32_t *l_439 = (void*)0;
                        int32_t *l_440[3][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                        uint32_t l_441[8][5][1] = {{{7UL},{7UL},{7UL},{7UL},{7UL}},{{7UL},{7UL},{7UL},{7UL},{7UL}},{{7UL},{7UL},{7UL},{7UL},{7UL}},{{7UL},{7UL},{7UL},{7UL},{7UL}},{{7UL},{7UL},{7UL},{7UL},{7UL}},{{7UL},{7UL},{7UL},{7UL},{7UL}},{{7UL},{7UL},{7UL},{7UL},{7UL}},{{7UL},{7UL},{7UL},{7UL},{7UL}}};
                        int i, j, k;
                        --l_441[6][1][0];
                        l_446--;
                        (**l_420) = ((((((*l_428) ^= l_449) >= 4294967295UL) < p_1664->g_310) != ((((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x7FL, 0x3BL)), 0xECL, 0xBEL)).zxwxwxxwwzzxzzxw)).sda)).yyyxyxyx))).s4 , (void*)0) == (p_1664->g_195 = l_450))) , (**l_418));
                    }
                }
                else
                { /* block id: 154 */
                    uint16_t l_455 = 2UL;
                    if ((atomic_inc(&p_1664->l_atomic_input[18]) == 9))
                    { /* block id: 156 */
                        int32_t l_453 = 0L;
                        int32_t *l_452[10][5][3] = {{{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453}},{{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453}},{{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453}},{{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453}},{{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453}},{{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453}},{{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453}},{{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453}},{{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453}},{{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453},{&l_453,(void*)0,&l_453}}};
                        int32_t **l_451 = &l_452[8][3][2];
                        int32_t **l_454 = &l_452[8][3][2];
                        int i, j, k;
                        l_454 = (l_451 = (void*)0);
                        unsigned int result = 0;
                        result += l_453;
                        atomic_add(&p_1664->l_special_values[18], result);
                    }
                    else
                    { /* block id: 159 */
                        (1 + 1);
                    }
                    --l_455;
                }
                --l_460;
            }
            p_86 = ((*l_464) = l_463);
            (*p_1664->g_467) = p_1664->g_465;
            for (l_162 = 0; (l_162 < 18); l_162++)
            { /* block id: 171 */
                VECTOR(uint16_t, 16) l_482 = (VECTOR(uint16_t, 16))(0x85A6L, (VECTOR(uint16_t, 4))(0x85A6L, (VECTOR(uint16_t, 2))(0x85A6L, 0UL), 0UL), 0UL, 0x85A6L, 0UL, (VECTOR(uint16_t, 2))(0x85A6L, 0UL), (VECTOR(uint16_t, 2))(0x85A6L, 0UL), 0x85A6L, 0UL, 0x85A6L, 0UL);
                int32_t l_497[9][9][3] = {{{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L}},{{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L}},{{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L}},{{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L}},{{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L}},{{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L}},{{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L}},{{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L}},{{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L},{0x654C7940L,5L,0x6BA643E9L}}};
                uint64_t **l_533[2][7];
                int8_t l_538 = 5L;
                int32_t **l_539 = &l_463;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_533[i][j] = (void*)0;
                }
                (*l_464) = (*p_1664->g_283);
                if ((*p_86))
                    continue;
                if ((*p_86))
                { /* block id: 174 */
                    int32_t *l_477 = &l_229[0];
                    int32_t **l_478 = (void*)0;
                    int32_t *l_480[8] = {&p_1664->g_209.f1,(void*)0,&p_1664->g_209.f1,&p_1664->g_209.f1,(void*)0,&p_1664->g_209.f1,&p_1664->g_209.f1,(void*)0};
                    int32_t **l_479 = &l_480[3];
                    uint16_t *l_481 = &l_460;
                    int i;
                    l_482.sf &= (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 4))(p_1664->g_472.s6736)).w, (safe_rshift_func_uint16_t_u_s(((*l_481) = (p_1664->g_209.f1 < ((safe_add_func_uint64_t_u_u((((p_86 == &p_1664->g_3) | ((*l_477) |= 0L)) && ((*l_215) = (l_210 == ((*l_479) = p_1664->g_200)))), 0L)) , ((VECTOR(int32_t, 4))(0x3602E002L, 0L, 0x65E9A273L, 0x1D77A846L)).y))), 10))));
                }
                else
                { /* block id: 180 */
                    int32_t *l_483 = &p_1664->g_209.f5;
                    int32_t *l_484 = (void*)0;
                    int32_t *l_485 = &l_229[1];
                    int32_t l_486 = 3L;
                    int32_t *l_487 = &l_486;
                    int32_t *l_488 = &l_229[1];
                    int32_t *l_489 = (void*)0;
                    int32_t *l_490 = (void*)0;
                    int32_t *l_491 = &l_163[8][5];
                    int32_t *l_492 = (void*)0;
                    int32_t *l_493 = &l_229[1];
                    int32_t *l_494 = (void*)0;
                    int32_t *l_495 = (void*)0;
                    int32_t *l_496[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_496[i] = (void*)0;
                    ++l_499;
                    for (p_1664->g_188 = 0; (p_1664->g_188 == (-27)); p_1664->g_188 = safe_sub_func_int8_t_s_s(p_1664->g_188, 1))
                    { /* block id: 184 */
                        (*l_464) = p_86;
                    }
                    for (p_1664->g_123 = 0; (p_1664->g_123 < 45); ++p_1664->g_123)
                    { /* block id: 189 */
                        VECTOR(int8_t, 8) l_510 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
                        uint32_t *l_518 = (void*)0;
                        uint32_t *l_519 = &p_1664->g_233[3];
                        int i;
                        (*l_485) = (((((*l_487) = l_338.w) , (p_1664->g_327.s4 | ((p_1664->g_506[0][0]--) > ((VECTOR(int64_t, 8))(p_1664->g_509.s52703233)).s5))) , p_1664->g_310) , ((((GROUP_DIVERGE(2, 1) || ((!p_1664->g_21.y) ^ (*p_86))) , (p_1664->g_209.f2 == ((*l_519) = ((((18446744073709551615UL | (((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_510.s02)).xyyxyyyx)).s6566121011370300, ((VECTOR(int8_t, 4))(l_511.sbc30)).zwywzwywyzzwzyzw, ((VECTOR(int8_t, 16))(((safe_div_func_int64_t_s_s((safe_add_func_uint32_t_u_u((((*p_1664->g_358) , ((**l_221) &= p_1664->g_391.f5)) ^ 0x5CL), (*p_86))), p_1664->g_247.s6)) , p_1664->g_84), ((VECTOR(int8_t, 8))(0x5FL)), l_510.s0, (-1L), 0x14L, ((VECTOR(int8_t, 4))(6L))))))).s7 <= 0xC8L)) , p_1664->g_516[2][0]) != (void*)0) >= l_510.s5)))) < (*l_210)) , l_225.s6));
                        if ((*p_86))
                            break;
                        (*p_1664->g_522) = l_520[4][1][0];
                    }
                    --l_525;
                }
                (*p_1664->g_363) ^= (safe_mul_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((p_1664->g_17.y = ((*l_223) = (safe_sub_func_uint8_t_u_u((l_450 != l_533[1][6]), (safe_add_func_int8_t_s_s(l_482.sc, (safe_add_func_uint16_t_u_u((((l_538 | (0x74323FA8L || (l_539 != (void*)0))) , GROUP_DIVERGE(1, 1)) ^ ((((*l_222) = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((*l_210), 5)), (l_544 , 0xB2L)))) == 255UL) == (*l_210))), l_497[4][2][2])))))))))), 0x2AA1L));
            }
        }
        else
        { /* block id: 205 */
            int32_t *l_545 = (void*)0;
            int32_t *l_546[2][7][10] = {{{(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162},{(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162},{(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162},{(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162},{(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162},{(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162},{(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162}},{{(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162},{(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162},{(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162},{(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162},{(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162},{(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162},{(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162,&l_162,(void*)0,(void*)0,&l_162}}};
            uint8_t l_548 = 0x67L;
            int i, j, k;
            --l_548;
        }
    }
    else
    { /* block id: 208 */
        return p_1664->g_167.f4;
    }
    l_583 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(((safe_unary_minus_func_int8_t_s((l_547 &= (safe_rshift_func_uint8_t_u_u(((((l_124 ^ l_163[3][2]) , (*p_86)) | ((safe_mul_func_int16_t_s_s(l_556, ((((++(*l_557)) <= 1UL) , (safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((+((((*l_574) = (p_1664->g_572 = l_570)) == &p_1664->g_573) || (safe_div_func_uint32_t_u_u(0UL, ((VECTOR(uint32_t, 8))(l_577.xxyxyxxy)).s3)))), (((VECTOR(int32_t, 16))((-6L), ((VECTOR(int32_t, 4))(l_578.s7416)), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(((void*)0 != &l_124), 0x3010L, 0L, 6L)).lo, ((VECTOR(uint16_t, 2))(65531UL))))), 0x1DC574EDL, 0x6FF5CD14L, (*p_86), 8L, ((VECTOR(int32_t, 4))(0x4CDE16D7L)), 0L)).s4 , l_422.y))) == p_1664->g_509.s6), 14)))), p_1664->g_275.y))) <= l_171))) , l_579)) ^ l_422.x), 2))))) > l_171), (-6L), ((VECTOR(int16_t, 2))(2L)), l_580[1], ((VECTOR(int16_t, 2))(1L)), 0x3842L)), ((VECTOR(uint16_t, 8))(8UL))))).s23)).odd;
    return p_1664->g_14.w;
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
    __local int64_t l_comm_values[7];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 7; i++)
            l_comm_values[i] = 1;
    struct S1 c_1665;
    struct S1* p_1664 = &c_1665;
    struct S1 c_1666 = {
        (-5L), // p_1664->g_2
        0x6801FC3EL, // p_1664->g_3
        (VECTOR(int32_t, 2))((-4L), 0x55F07C70L), // p_1664->g_12
        (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0x14383674L), 0x14383674L), // p_1664->g_14
        (VECTOR(int8_t, 2))(3L, (-4L)), // p_1664->g_17
        (VECTOR(int32_t, 2))(0x26B2C4EBL, 1L), // p_1664->g_20
        (VECTOR(uint32_t, 2))(1UL, 0xA4A104ACL), // p_1664->g_21
        (VECTOR(int32_t, 16))(0x182FC9AEL, (VECTOR(int32_t, 4))(0x182FC9AEL, (VECTOR(int32_t, 2))(0x182FC9AEL, (-1L)), (-1L)), (-1L), 0x182FC9AEL, (-1L), (VECTOR(int32_t, 2))(0x182FC9AEL, (-1L)), (VECTOR(int32_t, 2))(0x182FC9AEL, (-1L)), 0x182FC9AEL, (-1L), 0x182FC9AEL, (-1L)), // p_1664->g_29
        0x7ACAEC2BL, // p_1664->g_53
        0x7302D78BL, // p_1664->g_54
        0x2BB1342F27840302L, // p_1664->g_84
        0x6B9C5361ACFDDCECL, // p_1664->g_123
        (VECTOR(int16_t, 4))(0x148AL, (VECTOR(int16_t, 2))(0x148AL, 0x1F3FL), 0x1F3FL), // p_1664->g_131
        {{{0L,0L,0x77L,0x15L,(-1L),0x15L,0x77L},{0L,0L,0x77L,0x15L,(-1L),0x15L,0x77L},{0L,0L,0x77L,0x15L,(-1L),0x15L,0x77L}},{{0L,0L,0x77L,0x15L,(-1L),0x15L,0x77L},{0L,0L,0x77L,0x15L,(-1L),0x15L,0x77L},{0L,0L,0x77L,0x15L,(-1L),0x15L,0x77L}},{{0L,0L,0x77L,0x15L,(-1L),0x15L,0x77L},{0L,0L,0x77L,0x15L,(-1L),0x15L,0x77L},{0L,0L,0x77L,0x15L,(-1L),0x15L,0x77L}}}, // p_1664->g_149
        0xCCL, // p_1664->g_152
        {-3L,0x65DCDF2AL,0x1FC436A3L,4294967288UL,0x7F40BF26L,-1L,2L}, // p_1664->g_167
        255UL, // p_1664->g_185
        0x358E442EAC8DC0C5L, // p_1664->g_188
        &p_1664->g_123, // p_1664->g_196
        &p_1664->g_196, // p_1664->g_195
        &p_1664->g_54, // p_1664->g_200
        &p_1664->g_200, // p_1664->g_199
        {1L,8L,4294967295UL,0UL,0x321BD9B3L,0L,0x4B941C5EEF02D27CL}, // p_1664->g_204
        {0x5272L,1L,0x902A964EL,4294967289UL,4294967294UL,4L,0x47552E8AB1B66BC5L}, // p_1664->g_209
        {0xE1627D10L,0xE1627D10L,0xE1627D10L,0xE1627D10L,0xE1627D10L}, // p_1664->g_233
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-5L)), (-5L)), (-5L), 1L, (-5L)), // p_1664->g_247
        (VECTOR(int16_t, 16))(0x1AA5L, (VECTOR(int16_t, 4))(0x1AA5L, (VECTOR(int16_t, 2))(0x1AA5L, 0L), 0L), 0L, 0x1AA5L, 0L, (VECTOR(int16_t, 2))(0x1AA5L, 0L), (VECTOR(int16_t, 2))(0x1AA5L, 0L), 0x1AA5L, 0L, 0x1AA5L, 0L), // p_1664->g_248
        0xB35FL, // p_1664->g_274
        (VECTOR(uint32_t, 2))(1UL, 4294967293UL), // p_1664->g_275
        (VECTOR(uint16_t, 2))(0xD145L, 1UL), // p_1664->g_279
        &p_1664->g_200, // p_1664->g_283
        &p_1664->g_200, // p_1664->g_287
        {{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)}}, // p_1664->g_305
        0x04E5148EL, // p_1664->g_306
        0x37AB3F35L, // p_1664->g_307
        0x5553CE12L, // p_1664->g_308
        0x4EDE38DBL, // p_1664->g_309
        6L, // p_1664->g_310
        (-1L), // p_1664->g_311
        0x27A8972BL, // p_1664->g_312
        {{&p_1664->g_309,&p_1664->g_305[0][5],&p_1664->g_305[0][5],&p_1664->g_309,&p_1664->g_309,&p_1664->g_305[0][5],&p_1664->g_305[0][5]},{&p_1664->g_309,&p_1664->g_305[0][5],&p_1664->g_305[0][5],&p_1664->g_309,&p_1664->g_309,&p_1664->g_305[0][5],&p_1664->g_305[0][5]},{&p_1664->g_309,&p_1664->g_305[0][5],&p_1664->g_305[0][5],&p_1664->g_309,&p_1664->g_309,&p_1664->g_305[0][5],&p_1664->g_305[0][5]},{&p_1664->g_309,&p_1664->g_305[0][5],&p_1664->g_305[0][5],&p_1664->g_309,&p_1664->g_309,&p_1664->g_305[0][5],&p_1664->g_305[0][5]},{&p_1664->g_309,&p_1664->g_305[0][5],&p_1664->g_305[0][5],&p_1664->g_309,&p_1664->g_309,&p_1664->g_305[0][5],&p_1664->g_305[0][5]},{&p_1664->g_309,&p_1664->g_305[0][5],&p_1664->g_305[0][5],&p_1664->g_309,&p_1664->g_309,&p_1664->g_305[0][5],&p_1664->g_305[0][5]},{&p_1664->g_309,&p_1664->g_305[0][5],&p_1664->g_305[0][5],&p_1664->g_309,&p_1664->g_309,&p_1664->g_305[0][5],&p_1664->g_305[0][5]}}, // p_1664->g_304
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x4EDC7A96L), 0x4EDC7A96L), 0x4EDC7A96L, 0UL, 0x4EDC7A96L), // p_1664->g_327
        &p_1664->g_167, // p_1664->g_358
        &p_1664->g_209.f5, // p_1664->g_363
        (VECTOR(int32_t, 16))(0x45A12C6DL, (VECTOR(int32_t, 4))(0x45A12C6DL, (VECTOR(int32_t, 2))(0x45A12C6DL, (-1L)), (-1L)), (-1L), 0x45A12C6DL, (-1L), (VECTOR(int32_t, 2))(0x45A12C6DL, (-1L)), (VECTOR(int32_t, 2))(0x45A12C6DL, (-1L)), 0x45A12C6DL, (-1L), 0x45A12C6DL, (-1L)), // p_1664->g_368
        (VECTOR(int32_t, 4))(0x4A5FBACFL, (VECTOR(int32_t, 2))(0x4A5FBACFL, 0L), 0L), // p_1664->g_370
        (VECTOR(int32_t, 2))(0x02760A48L, 6L), // p_1664->g_371
        {0x03D3L,-1L,0UL,4294967295UL,4294967295UL,0x131C93ABL,0x0C037808A29CE088L}, // p_1664->g_391
        &p_1664->g_204, // p_1664->g_392
        (void*)0, // p_1664->g_423
        (void*)0, // p_1664->g_466
        &p_1664->g_466, // p_1664->g_465
        &p_1664->g_465, // p_1664->g_467
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5681FB29L), 0x5681FB29L), 0x5681FB29L, (-1L), 0x5681FB29L), // p_1664->g_472
        {{0x5C349DB5F364F09BL,0x5C349DB5F364F09BL,0x5C349DB5F364F09BL,0x5C349DB5F364F09BL,0x5C349DB5F364F09BL,0x5C349DB5F364F09BL,0x5C349DB5F364F09BL,0x5C349DB5F364F09BL}}, // p_1664->g_506
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x070690EF11A4B0FAL), 0x070690EF11A4B0FAL), 0x070690EF11A4B0FAL, (-1L), 0x070690EF11A4B0FAL), // p_1664->g_509
        {{(void*)0,(void*)0,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1},{(void*)0,(void*)0,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1},{(void*)0,(void*)0,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1},{(void*)0,(void*)0,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1},{(void*)0,(void*)0,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1},{(void*)0,(void*)0,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1},{(void*)0,(void*)0,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1},{(void*)0,(void*)0,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1},{(void*)0,(void*)0,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1,&p_1664->g_209.f1}}, // p_1664->g_517
        {{&p_1664->g_517[5][6],&p_1664->g_517[0][6],(void*)0,&p_1664->g_517[0][6],&p_1664->g_517[5][6],&p_1664->g_517[5][6],&p_1664->g_517[0][6],(void*)0,&p_1664->g_517[0][6],&p_1664->g_517[5][6]},{&p_1664->g_517[5][6],&p_1664->g_517[0][6],(void*)0,&p_1664->g_517[0][6],&p_1664->g_517[5][6],&p_1664->g_517[5][6],&p_1664->g_517[0][6],(void*)0,&p_1664->g_517[0][6],&p_1664->g_517[5][6]},{&p_1664->g_517[5][6],&p_1664->g_517[0][6],(void*)0,&p_1664->g_517[0][6],&p_1664->g_517[5][6],&p_1664->g_517[5][6],&p_1664->g_517[0][6],(void*)0,&p_1664->g_517[0][6],&p_1664->g_517[5][6]},{&p_1664->g_517[5][6],&p_1664->g_517[0][6],(void*)0,&p_1664->g_517[0][6],&p_1664->g_517[5][6],&p_1664->g_517[5][6],&p_1664->g_517[0][6],(void*)0,&p_1664->g_517[0][6],&p_1664->g_517[5][6]},{&p_1664->g_517[5][6],&p_1664->g_517[0][6],(void*)0,&p_1664->g_517[0][6],&p_1664->g_517[5][6],&p_1664->g_517[5][6],&p_1664->g_517[0][6],(void*)0,&p_1664->g_517[0][6],&p_1664->g_517[5][6]}}, // p_1664->g_516
        {{&p_1664->g_209.f1,(void*)0,&p_1664->g_209.f1},{&p_1664->g_209.f1,(void*)0,&p_1664->g_209.f1},{&p_1664->g_209.f1,(void*)0,&p_1664->g_209.f1},{&p_1664->g_209.f1,(void*)0,&p_1664->g_209.f1},{&p_1664->g_209.f1,(void*)0,&p_1664->g_209.f1},{&p_1664->g_209.f1,(void*)0,&p_1664->g_209.f1},{&p_1664->g_209.f1,(void*)0,&p_1664->g_209.f1},{&p_1664->g_209.f1,(void*)0,&p_1664->g_209.f1}}, // p_1664->g_524
        &p_1664->g_524[6][2], // p_1664->g_523
        &p_1664->g_523, // p_1664->g_522
        &p_1664->g_149[2][1][2], // p_1664->g_573
        &p_1664->g_573, // p_1664->g_572
        0x716A4DFCL, // p_1664->g_635
        {9L,-1L,4294967295UL,0UL,0UL,0x7513CA28L,1L}, // p_1664->g_666
        (void*)0, // p_1664->g_695
        &p_1664->g_572, // p_1664->g_696
        {{{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572}},{{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,(void*)0,(void*)0,&p_1664->g_572,&p_1664->g_572}}}, // p_1664->g_697
        {{{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572}},{{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572}},{{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572}},{{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572}},{{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572}},{{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572},{&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572,&p_1664->g_572}}}, // p_1664->g_698
        {{{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L}},{{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L}},{{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L}},{{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L}},{{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L},{0x0535L,-9L,0x228DF719L,8UL,0x617AD944L,-1L,-1L}}}, // p_1664->g_709
        (VECTOR(uint8_t, 16))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 250UL), 250UL), 250UL, 6UL, 250UL, (VECTOR(uint8_t, 2))(6UL, 250UL), (VECTOR(uint8_t, 2))(6UL, 250UL), 6UL, 250UL, 6UL, 250UL), // p_1664->g_715
        (VECTOR(uint8_t, 2))(0UL, 0x14L), // p_1664->g_716
        (VECTOR(uint8_t, 8))(0xF2L, (VECTOR(uint8_t, 4))(0xF2L, (VECTOR(uint8_t, 2))(0xF2L, 0xC6L), 0xC6L), 0xC6L, 0xF2L, 0xC6L), // p_1664->g_717
        (VECTOR(uint8_t, 4))(0x8BL, (VECTOR(uint8_t, 2))(0x8BL, 0xEAL), 0xEAL), // p_1664->g_718
        (VECTOR(uint8_t, 8))(251UL, (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 251UL), 251UL), 251UL, 251UL, 251UL), // p_1664->g_720
        {&p_1664->g_209,&p_1664->g_209,&p_1664->g_209,&p_1664->g_209}, // p_1664->g_722
        {&p_1664->g_722[2]}, // p_1664->g_721
        {-1L,1L,0xB4F748CAL,9UL,0x4B56CE2EL,1L,0x25056D58302CF578L}, // p_1664->g_724
        (void*)0, // p_1664->g_731
        0x4E8E6CE3D4C48035L, // p_1664->g_743
        {8L,-1L,0xB31B9E39L,8UL,1UL,0x50137F87L,0L}, // p_1664->g_749
        (VECTOR(int32_t, 2))(0x56152F22L, 2L), // p_1664->g_752
        &p_1664->g_204, // p_1664->g_773
        (VECTOR(int32_t, 2))(0L, 3L), // p_1664->g_777
        (VECTOR(int32_t, 2))(0x1658E63CL, 5L), // p_1664->g_809
        (VECTOR(int32_t, 2))(0x6EF1752DL, 8L), // p_1664->g_810
        (VECTOR(int8_t, 2))(0x4DL, 8L), // p_1664->g_820
        (VECTOR(int8_t, 2))(1L, 0x31L), // p_1664->g_829
        {-3L,0x3ABDFA45L,4294967286UL,7UL,0xA90DD7EFL,0x5D94A21BL,0L}, // p_1664->g_847
        &p_1664->g_200, // p_1664->g_849
        &p_1664->g_709[4][3].f5, // p_1664->g_865
        {{0x0BD2L,0x740C3F47L,4294967295UL,4294967295UL,0xC7A9E30DL,1L,1L},{0x0BD2L,0x740C3F47L,4294967295UL,4294967295UL,0xC7A9E30DL,1L,1L},{0x0BD2L,0x740C3F47L,4294967295UL,4294967295UL,0xC7A9E30DL,1L,1L}}, // p_1664->g_866
        &p_1664->g_209, // p_1664->g_867
        &p_1664->g_200, // p_1664->g_872
        (VECTOR(uint64_t, 16))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 1UL), 1UL), 1UL, 2UL, 1UL, (VECTOR(uint64_t, 2))(2UL, 1UL), (VECTOR(uint64_t, 2))(2UL, 1UL), 2UL, 1UL, 2UL, 1UL), // p_1664->g_897
        (void*)0, // p_1664->g_943
        (VECTOR(uint32_t, 2))(0x2D22C134L, 4294967295UL), // p_1664->g_969
        {{{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL}},{{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL}},{{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL}},{{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL}},{{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL}},{{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL},{1UL,0UL,0x510C0CA457F091BDL,18446744073709551611UL}}}, // p_1664->g_991
        (void*)0, // p_1664->g_994
        0x2CD9832D2FC3950FL, // p_1664->g_996
        1UL, // p_1664->g_999
        &p_1664->g_524[3][0], // p_1664->g_1014
        (VECTOR(int16_t, 8))(0x5F52L, (VECTOR(int16_t, 4))(0x5F52L, (VECTOR(int16_t, 2))(0x5F52L, 1L), 1L), 1L, 0x5F52L, 1L), // p_1664->g_1022
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x0CL), 0x0CL), 0x0CL, 0UL, 0x0CL, (VECTOR(uint8_t, 2))(0UL, 0x0CL), (VECTOR(uint8_t, 2))(0UL, 0x0CL), 0UL, 0x0CL, 0UL, 0x0CL), // p_1664->g_1028
        {{0L,8L,0x64BF14C5L,4294967287UL,4294967293UL,-10L,0x0A2470DB8B40D7A8L},{0L,8L,0x64BF14C5L,4294967287UL,4294967293UL,-10L,0x0A2470DB8B40D7A8L},{0L,8L,0x64BF14C5L,4294967287UL,4294967293UL,-10L,0x0A2470DB8B40D7A8L},{0L,8L,0x64BF14C5L,4294967287UL,4294967293UL,-10L,0x0A2470DB8B40D7A8L},{0L,8L,0x64BF14C5L,4294967287UL,4294967293UL,-10L,0x0A2470DB8B40D7A8L},{0L,8L,0x64BF14C5L,4294967287UL,4294967293UL,-10L,0x0A2470DB8B40D7A8L},{0L,8L,0x64BF14C5L,4294967287UL,4294967293UL,-10L,0x0A2470DB8B40D7A8L},{0L,8L,0x64BF14C5L,4294967287UL,4294967293UL,-10L,0x0A2470DB8B40D7A8L},{0L,8L,0x64BF14C5L,4294967287UL,4294967293UL,-10L,0x0A2470DB8B40D7A8L}}, // p_1664->g_1055
        {{{5L,5L,0L}},{{5L,5L,0L}},{{5L,5L,0L}},{{5L,5L,0L}},{{5L,5L,0L}},{{5L,5L,0L}},{{5L,5L,0L}}}, // p_1664->g_1063
        {{{&p_1664->g_1014,(void*)0,&p_1664->g_523,&p_1664->g_523,&p_1664->g_523},{&p_1664->g_1014,(void*)0,&p_1664->g_523,&p_1664->g_523,&p_1664->g_523},{&p_1664->g_1014,(void*)0,&p_1664->g_523,&p_1664->g_523,&p_1664->g_523},{&p_1664->g_1014,(void*)0,&p_1664->g_523,&p_1664->g_523,&p_1664->g_523},{&p_1664->g_1014,(void*)0,&p_1664->g_523,&p_1664->g_523,&p_1664->g_523},{&p_1664->g_1014,(void*)0,&p_1664->g_523,&p_1664->g_523,&p_1664->g_523}},{{&p_1664->g_1014,(void*)0,&p_1664->g_523,&p_1664->g_523,&p_1664->g_523},{&p_1664->g_1014,(void*)0,&p_1664->g_523,&p_1664->g_523,&p_1664->g_523},{&p_1664->g_1014,(void*)0,&p_1664->g_523,&p_1664->g_523,&p_1664->g_523},{&p_1664->g_1014,(void*)0,&p_1664->g_523,&p_1664->g_523,&p_1664->g_523},{&p_1664->g_1014,(void*)0,&p_1664->g_523,&p_1664->g_523,&p_1664->g_523},{&p_1664->g_1014,(void*)0,&p_1664->g_523,&p_1664->g_523,&p_1664->g_523}}}, // p_1664->g_1064
        &p_1664->g_1014, // p_1664->g_1065
        (VECTOR(uint32_t, 4))(0xE44EE009L, (VECTOR(uint32_t, 2))(0xE44EE009L, 0xD0E07A41L), 0xD0E07A41L), // p_1664->g_1078
        4294967290UL, // p_1664->g_1088
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x67L), 0x67L), // p_1664->g_1102
        (void*)0, // p_1664->g_1123
        (void*)0, // p_1664->g_1125
        {{{&p_1664->g_709[4][3].f5,&p_1664->g_635,&p_1664->g_3,&p_1664->g_54,(void*)0,&p_1664->g_54,&p_1664->g_3,&p_1664->g_635,&p_1664->g_709[4][3].f5},{&p_1664->g_709[4][3].f5,&p_1664->g_635,&p_1664->g_3,&p_1664->g_54,(void*)0,&p_1664->g_54,&p_1664->g_3,&p_1664->g_635,&p_1664->g_709[4][3].f5},{&p_1664->g_709[4][3].f5,&p_1664->g_635,&p_1664->g_3,&p_1664->g_54,(void*)0,&p_1664->g_54,&p_1664->g_3,&p_1664->g_635,&p_1664->g_709[4][3].f5},{&p_1664->g_709[4][3].f5,&p_1664->g_635,&p_1664->g_3,&p_1664->g_54,(void*)0,&p_1664->g_54,&p_1664->g_3,&p_1664->g_635,&p_1664->g_709[4][3].f5},{&p_1664->g_709[4][3].f5,&p_1664->g_635,&p_1664->g_3,&p_1664->g_54,(void*)0,&p_1664->g_54,&p_1664->g_3,&p_1664->g_635,&p_1664->g_709[4][3].f5}}}, // p_1664->g_1126
        (-8L), // p_1664->g_1130
        (void*)0, // p_1664->g_1145
        {1L,0x1C0647EEL,4294967292UL,4294967295UL,0x71B058B3L,1L,0x2E7C33910D76B3B3L}, // p_1664->g_1149
        &p_1664->g_200, // p_1664->g_1169
        (VECTOR(uint16_t, 8))(0xF697L, (VECTOR(uint16_t, 4))(0xF697L, (VECTOR(uint16_t, 2))(0xF697L, 2UL), 2UL), 2UL, 0xF697L, 2UL), // p_1664->g_1182
        (VECTOR(uint16_t, 2))(1UL, 65535UL), // p_1664->g_1183
        (VECTOR(uint16_t, 16))(0x4C92L, (VECTOR(uint16_t, 4))(0x4C92L, (VECTOR(uint16_t, 2))(0x4C92L, 1UL), 1UL), 1UL, 0x4C92L, 1UL, (VECTOR(uint16_t, 2))(0x4C92L, 1UL), (VECTOR(uint16_t, 2))(0x4C92L, 1UL), 0x4C92L, 1UL, 0x4C92L, 1UL), // p_1664->g_1184
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), 0L, 0L, 0L), // p_1664->g_1202
        (VECTOR(uint8_t, 2))(0xE8L, 0x69L), // p_1664->g_1205
        (VECTOR(int16_t, 4))(0x0D5FL, (VECTOR(int16_t, 2))(0x0D5FL, 0L), 0L), // p_1664->g_1208
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-7L)), (-7L)), (-7L), 1L, (-7L)), // p_1664->g_1209
        (VECTOR(int8_t, 8))(0x5AL, (VECTOR(int8_t, 4))(0x5AL, (VECTOR(int8_t, 2))(0x5AL, 3L), 3L), 3L, 0x5AL, 3L), // p_1664->g_1210
        (VECTOR(uint8_t, 16))(0xA0L, (VECTOR(uint8_t, 4))(0xA0L, (VECTOR(uint8_t, 2))(0xA0L, 255UL), 255UL), 255UL, 0xA0L, 255UL, (VECTOR(uint8_t, 2))(0xA0L, 255UL), (VECTOR(uint8_t, 2))(0xA0L, 255UL), 0xA0L, 255UL, 0xA0L, 255UL), // p_1664->g_1211
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 9UL), 9UL), 9UL, 0UL, 9UL, (VECTOR(uint32_t, 2))(0UL, 9UL), (VECTOR(uint32_t, 2))(0UL, 9UL), 0UL, 9UL, 0UL, 9UL), // p_1664->g_1228
        (VECTOR(int32_t, 8))(0x6753D19EL, (VECTOR(int32_t, 4))(0x6753D19EL, (VECTOR(int32_t, 2))(0x6753D19EL, 0x4C9B4BA1L), 0x4C9B4BA1L), 0x4C9B4BA1L, 0x6753D19EL, 0x4C9B4BA1L), // p_1664->g_1232
        0x88L, // p_1664->g_1236
        {-4L,1L,4294967295UL,1UL,4294967291UL,-1L,-1L}, // p_1664->g_1344
        0x1AA77D905FE9BF34L, // p_1664->g_1350
        (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x6FD6F7EFL), 0x6FD6F7EFL), 0x6FD6F7EFL, 5L, 0x6FD6F7EFL), // p_1664->g_1357
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x76369321L), 0x76369321L), 0x76369321L, (-1L), 0x76369321L, (VECTOR(int32_t, 2))((-1L), 0x76369321L), (VECTOR(int32_t, 2))((-1L), 0x76369321L), (-1L), 0x76369321L, (-1L), 0x76369321L), // p_1664->g_1366
        {(void*)0,(void*)0}, // p_1664->g_1390
        &p_1664->g_200, // p_1664->g_1391
        (VECTOR(int16_t, 8))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), (-1L)), (-1L)), (-1L), (-3L), (-1L)), // p_1664->g_1421
        (void*)0, // p_1664->g_1442
        {0L,0x37D657A9L,4294967291UL,0UL,4294967295UL,9L,8L}, // p_1664->g_1455
        {0x1645L,0x5C298F4CL,0x0A06FB5DL,0x3433A484L,0x6417DC40L,0x1D6F2E0EL,1L}, // p_1664->g_1456
        18446744073709551606UL, // p_1664->g_1473
        (VECTOR(uint64_t, 2))(0x91A85E144F1A8CD0L, 18446744073709551606UL), // p_1664->g_1535
        255UL, // p_1664->g_1576
        {{0x457FL,0x5DA76920L,5UL,4UL,0xECADA073L,1L,0x489B6C3D42B2F77BL},{0x457FL,0x5DA76920L,5UL,4UL,0xECADA073L,1L,0x489B6C3D42B2F77BL},{0x457FL,0x5DA76920L,5UL,4UL,0xECADA073L,1L,0x489B6C3D42B2F77BL},{0x457FL,0x5DA76920L,5UL,4UL,0xECADA073L,1L,0x489B6C3D42B2F77BL}}, // p_1664->g_1592
        {{{0x43A3L,0L,0UL,0UL,0UL,8L,9L}},{{0x43A3L,0L,0UL,0UL,0UL,8L,9L}},{{0x43A3L,0L,0UL,0UL,0UL,8L,9L}},{{0x43A3L,0L,0UL,0UL,0UL,8L,9L}},{{0x43A3L,0L,0UL,0UL,0UL,8L,9L}},{{0x43A3L,0L,0UL,0UL,0UL,8L,9L}},{{0x43A3L,0L,0UL,0UL,0UL,8L,9L}}}, // p_1664->g_1593
        (VECTOR(int8_t, 8))(0x20L, (VECTOR(int8_t, 4))(0x20L, (VECTOR(int8_t, 2))(0x20L, 0x35L), 0x35L), 0x35L, 0x20L, 0x35L), // p_1664->g_1604
        (VECTOR(int8_t, 2))(1L, 0x5FL), // p_1664->g_1605
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x3960L), 0x3960L), 0x3960L, 65535UL, 0x3960L, (VECTOR(uint16_t, 2))(65535UL, 0x3960L), (VECTOR(uint16_t, 2))(65535UL, 0x3960L), 65535UL, 0x3960L, 65535UL, 0x3960L), // p_1664->g_1609
        {{(void*)0,(void*)0}}, // p_1664->g_1646
        {&p_1664->g_1646[0][0],&p_1664->g_1646[0][0]}, // p_1664->g_1645
        0, // p_1664->v_collective
        sequence_input[get_global_id(0)], // p_1664->global_0_offset
        sequence_input[get_global_id(1)], // p_1664->global_1_offset
        sequence_input[get_global_id(2)], // p_1664->global_2_offset
        sequence_input[get_local_id(0)], // p_1664->local_0_offset
        sequence_input[get_local_id(1)], // p_1664->local_1_offset
        sequence_input[get_local_id(2)], // p_1664->local_2_offset
        sequence_input[get_group_id(0)], // p_1664->group_0_offset
        sequence_input[get_group_id(1)], // p_1664->group_1_offset
        sequence_input[get_group_id(2)], // p_1664->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[0][get_linear_local_id()])), // p_1664->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1665 = c_1666;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1664);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1664->g_2, "p_1664->g_2", print_hash_value);
    transparent_crc(p_1664->g_3, "p_1664->g_3", print_hash_value);
    transparent_crc(p_1664->g_12.x, "p_1664->g_12.x", print_hash_value);
    transparent_crc(p_1664->g_12.y, "p_1664->g_12.y", print_hash_value);
    transparent_crc(p_1664->g_14.x, "p_1664->g_14.x", print_hash_value);
    transparent_crc(p_1664->g_14.y, "p_1664->g_14.y", print_hash_value);
    transparent_crc(p_1664->g_14.z, "p_1664->g_14.z", print_hash_value);
    transparent_crc(p_1664->g_14.w, "p_1664->g_14.w", print_hash_value);
    transparent_crc(p_1664->g_17.x, "p_1664->g_17.x", print_hash_value);
    transparent_crc(p_1664->g_17.y, "p_1664->g_17.y", print_hash_value);
    transparent_crc(p_1664->g_20.x, "p_1664->g_20.x", print_hash_value);
    transparent_crc(p_1664->g_20.y, "p_1664->g_20.y", print_hash_value);
    transparent_crc(p_1664->g_21.x, "p_1664->g_21.x", print_hash_value);
    transparent_crc(p_1664->g_21.y, "p_1664->g_21.y", print_hash_value);
    transparent_crc(p_1664->g_29.s0, "p_1664->g_29.s0", print_hash_value);
    transparent_crc(p_1664->g_29.s1, "p_1664->g_29.s1", print_hash_value);
    transparent_crc(p_1664->g_29.s2, "p_1664->g_29.s2", print_hash_value);
    transparent_crc(p_1664->g_29.s3, "p_1664->g_29.s3", print_hash_value);
    transparent_crc(p_1664->g_29.s4, "p_1664->g_29.s4", print_hash_value);
    transparent_crc(p_1664->g_29.s5, "p_1664->g_29.s5", print_hash_value);
    transparent_crc(p_1664->g_29.s6, "p_1664->g_29.s6", print_hash_value);
    transparent_crc(p_1664->g_29.s7, "p_1664->g_29.s7", print_hash_value);
    transparent_crc(p_1664->g_29.s8, "p_1664->g_29.s8", print_hash_value);
    transparent_crc(p_1664->g_29.s9, "p_1664->g_29.s9", print_hash_value);
    transparent_crc(p_1664->g_29.sa, "p_1664->g_29.sa", print_hash_value);
    transparent_crc(p_1664->g_29.sb, "p_1664->g_29.sb", print_hash_value);
    transparent_crc(p_1664->g_29.sc, "p_1664->g_29.sc", print_hash_value);
    transparent_crc(p_1664->g_29.sd, "p_1664->g_29.sd", print_hash_value);
    transparent_crc(p_1664->g_29.se, "p_1664->g_29.se", print_hash_value);
    transparent_crc(p_1664->g_29.sf, "p_1664->g_29.sf", print_hash_value);
    transparent_crc(p_1664->g_53, "p_1664->g_53", print_hash_value);
    transparent_crc(p_1664->g_54, "p_1664->g_54", print_hash_value);
    transparent_crc(p_1664->g_84, "p_1664->g_84", print_hash_value);
    transparent_crc(p_1664->g_123, "p_1664->g_123", print_hash_value);
    transparent_crc(p_1664->g_131.x, "p_1664->g_131.x", print_hash_value);
    transparent_crc(p_1664->g_131.y, "p_1664->g_131.y", print_hash_value);
    transparent_crc(p_1664->g_131.z, "p_1664->g_131.z", print_hash_value);
    transparent_crc(p_1664->g_131.w, "p_1664->g_131.w", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1664->g_149[i][j][k], "p_1664->g_149[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1664->g_152, "p_1664->g_152", print_hash_value);
    transparent_crc(p_1664->g_167.f0, "p_1664->g_167.f0", print_hash_value);
    transparent_crc(p_1664->g_167.f1, "p_1664->g_167.f1", print_hash_value);
    transparent_crc(p_1664->g_167.f2, "p_1664->g_167.f2", print_hash_value);
    transparent_crc(p_1664->g_167.f3, "p_1664->g_167.f3", print_hash_value);
    transparent_crc(p_1664->g_167.f4, "p_1664->g_167.f4", print_hash_value);
    transparent_crc(p_1664->g_167.f5, "p_1664->g_167.f5", print_hash_value);
    transparent_crc(p_1664->g_167.f6, "p_1664->g_167.f6", print_hash_value);
    transparent_crc(p_1664->g_185, "p_1664->g_185", print_hash_value);
    transparent_crc(p_1664->g_188, "p_1664->g_188", print_hash_value);
    transparent_crc(p_1664->g_204.f0, "p_1664->g_204.f0", print_hash_value);
    transparent_crc(p_1664->g_204.f1, "p_1664->g_204.f1", print_hash_value);
    transparent_crc(p_1664->g_204.f2, "p_1664->g_204.f2", print_hash_value);
    transparent_crc(p_1664->g_204.f3, "p_1664->g_204.f3", print_hash_value);
    transparent_crc(p_1664->g_204.f4, "p_1664->g_204.f4", print_hash_value);
    transparent_crc(p_1664->g_204.f5, "p_1664->g_204.f5", print_hash_value);
    transparent_crc(p_1664->g_204.f6, "p_1664->g_204.f6", print_hash_value);
    transparent_crc(p_1664->g_209.f0, "p_1664->g_209.f0", print_hash_value);
    transparent_crc(p_1664->g_209.f1, "p_1664->g_209.f1", print_hash_value);
    transparent_crc(p_1664->g_209.f2, "p_1664->g_209.f2", print_hash_value);
    transparent_crc(p_1664->g_209.f3, "p_1664->g_209.f3", print_hash_value);
    transparent_crc(p_1664->g_209.f4, "p_1664->g_209.f4", print_hash_value);
    transparent_crc(p_1664->g_209.f5, "p_1664->g_209.f5", print_hash_value);
    transparent_crc(p_1664->g_209.f6, "p_1664->g_209.f6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1664->g_233[i], "p_1664->g_233[i]", print_hash_value);

    }
    transparent_crc(p_1664->g_247.s0, "p_1664->g_247.s0", print_hash_value);
    transparent_crc(p_1664->g_247.s1, "p_1664->g_247.s1", print_hash_value);
    transparent_crc(p_1664->g_247.s2, "p_1664->g_247.s2", print_hash_value);
    transparent_crc(p_1664->g_247.s3, "p_1664->g_247.s3", print_hash_value);
    transparent_crc(p_1664->g_247.s4, "p_1664->g_247.s4", print_hash_value);
    transparent_crc(p_1664->g_247.s5, "p_1664->g_247.s5", print_hash_value);
    transparent_crc(p_1664->g_247.s6, "p_1664->g_247.s6", print_hash_value);
    transparent_crc(p_1664->g_247.s7, "p_1664->g_247.s7", print_hash_value);
    transparent_crc(p_1664->g_248.s0, "p_1664->g_248.s0", print_hash_value);
    transparent_crc(p_1664->g_248.s1, "p_1664->g_248.s1", print_hash_value);
    transparent_crc(p_1664->g_248.s2, "p_1664->g_248.s2", print_hash_value);
    transparent_crc(p_1664->g_248.s3, "p_1664->g_248.s3", print_hash_value);
    transparent_crc(p_1664->g_248.s4, "p_1664->g_248.s4", print_hash_value);
    transparent_crc(p_1664->g_248.s5, "p_1664->g_248.s5", print_hash_value);
    transparent_crc(p_1664->g_248.s6, "p_1664->g_248.s6", print_hash_value);
    transparent_crc(p_1664->g_248.s7, "p_1664->g_248.s7", print_hash_value);
    transparent_crc(p_1664->g_248.s8, "p_1664->g_248.s8", print_hash_value);
    transparent_crc(p_1664->g_248.s9, "p_1664->g_248.s9", print_hash_value);
    transparent_crc(p_1664->g_248.sa, "p_1664->g_248.sa", print_hash_value);
    transparent_crc(p_1664->g_248.sb, "p_1664->g_248.sb", print_hash_value);
    transparent_crc(p_1664->g_248.sc, "p_1664->g_248.sc", print_hash_value);
    transparent_crc(p_1664->g_248.sd, "p_1664->g_248.sd", print_hash_value);
    transparent_crc(p_1664->g_248.se, "p_1664->g_248.se", print_hash_value);
    transparent_crc(p_1664->g_248.sf, "p_1664->g_248.sf", print_hash_value);
    transparent_crc(p_1664->g_274, "p_1664->g_274", print_hash_value);
    transparent_crc(p_1664->g_275.x, "p_1664->g_275.x", print_hash_value);
    transparent_crc(p_1664->g_275.y, "p_1664->g_275.y", print_hash_value);
    transparent_crc(p_1664->g_279.x, "p_1664->g_279.x", print_hash_value);
    transparent_crc(p_1664->g_279.y, "p_1664->g_279.y", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1664->g_305[i][j], "p_1664->g_305[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1664->g_306, "p_1664->g_306", print_hash_value);
    transparent_crc(p_1664->g_307, "p_1664->g_307", print_hash_value);
    transparent_crc(p_1664->g_308, "p_1664->g_308", print_hash_value);
    transparent_crc(p_1664->g_309, "p_1664->g_309", print_hash_value);
    transparent_crc(p_1664->g_310, "p_1664->g_310", print_hash_value);
    transparent_crc(p_1664->g_311, "p_1664->g_311", print_hash_value);
    transparent_crc(p_1664->g_312, "p_1664->g_312", print_hash_value);
    transparent_crc(p_1664->g_327.s0, "p_1664->g_327.s0", print_hash_value);
    transparent_crc(p_1664->g_327.s1, "p_1664->g_327.s1", print_hash_value);
    transparent_crc(p_1664->g_327.s2, "p_1664->g_327.s2", print_hash_value);
    transparent_crc(p_1664->g_327.s3, "p_1664->g_327.s3", print_hash_value);
    transparent_crc(p_1664->g_327.s4, "p_1664->g_327.s4", print_hash_value);
    transparent_crc(p_1664->g_327.s5, "p_1664->g_327.s5", print_hash_value);
    transparent_crc(p_1664->g_327.s6, "p_1664->g_327.s6", print_hash_value);
    transparent_crc(p_1664->g_327.s7, "p_1664->g_327.s7", print_hash_value);
    transparent_crc(p_1664->g_368.s0, "p_1664->g_368.s0", print_hash_value);
    transparent_crc(p_1664->g_368.s1, "p_1664->g_368.s1", print_hash_value);
    transparent_crc(p_1664->g_368.s2, "p_1664->g_368.s2", print_hash_value);
    transparent_crc(p_1664->g_368.s3, "p_1664->g_368.s3", print_hash_value);
    transparent_crc(p_1664->g_368.s4, "p_1664->g_368.s4", print_hash_value);
    transparent_crc(p_1664->g_368.s5, "p_1664->g_368.s5", print_hash_value);
    transparent_crc(p_1664->g_368.s6, "p_1664->g_368.s6", print_hash_value);
    transparent_crc(p_1664->g_368.s7, "p_1664->g_368.s7", print_hash_value);
    transparent_crc(p_1664->g_368.s8, "p_1664->g_368.s8", print_hash_value);
    transparent_crc(p_1664->g_368.s9, "p_1664->g_368.s9", print_hash_value);
    transparent_crc(p_1664->g_368.sa, "p_1664->g_368.sa", print_hash_value);
    transparent_crc(p_1664->g_368.sb, "p_1664->g_368.sb", print_hash_value);
    transparent_crc(p_1664->g_368.sc, "p_1664->g_368.sc", print_hash_value);
    transparent_crc(p_1664->g_368.sd, "p_1664->g_368.sd", print_hash_value);
    transparent_crc(p_1664->g_368.se, "p_1664->g_368.se", print_hash_value);
    transparent_crc(p_1664->g_368.sf, "p_1664->g_368.sf", print_hash_value);
    transparent_crc(p_1664->g_370.x, "p_1664->g_370.x", print_hash_value);
    transparent_crc(p_1664->g_370.y, "p_1664->g_370.y", print_hash_value);
    transparent_crc(p_1664->g_370.z, "p_1664->g_370.z", print_hash_value);
    transparent_crc(p_1664->g_370.w, "p_1664->g_370.w", print_hash_value);
    transparent_crc(p_1664->g_371.x, "p_1664->g_371.x", print_hash_value);
    transparent_crc(p_1664->g_371.y, "p_1664->g_371.y", print_hash_value);
    transparent_crc(p_1664->g_391.f0, "p_1664->g_391.f0", print_hash_value);
    transparent_crc(p_1664->g_391.f1, "p_1664->g_391.f1", print_hash_value);
    transparent_crc(p_1664->g_391.f2, "p_1664->g_391.f2", print_hash_value);
    transparent_crc(p_1664->g_391.f3, "p_1664->g_391.f3", print_hash_value);
    transparent_crc(p_1664->g_391.f4, "p_1664->g_391.f4", print_hash_value);
    transparent_crc(p_1664->g_391.f5, "p_1664->g_391.f5", print_hash_value);
    transparent_crc(p_1664->g_391.f6, "p_1664->g_391.f6", print_hash_value);
    transparent_crc(p_1664->g_472.s0, "p_1664->g_472.s0", print_hash_value);
    transparent_crc(p_1664->g_472.s1, "p_1664->g_472.s1", print_hash_value);
    transparent_crc(p_1664->g_472.s2, "p_1664->g_472.s2", print_hash_value);
    transparent_crc(p_1664->g_472.s3, "p_1664->g_472.s3", print_hash_value);
    transparent_crc(p_1664->g_472.s4, "p_1664->g_472.s4", print_hash_value);
    transparent_crc(p_1664->g_472.s5, "p_1664->g_472.s5", print_hash_value);
    transparent_crc(p_1664->g_472.s6, "p_1664->g_472.s6", print_hash_value);
    transparent_crc(p_1664->g_472.s7, "p_1664->g_472.s7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1664->g_506[i][j], "p_1664->g_506[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1664->g_509.s0, "p_1664->g_509.s0", print_hash_value);
    transparent_crc(p_1664->g_509.s1, "p_1664->g_509.s1", print_hash_value);
    transparent_crc(p_1664->g_509.s2, "p_1664->g_509.s2", print_hash_value);
    transparent_crc(p_1664->g_509.s3, "p_1664->g_509.s3", print_hash_value);
    transparent_crc(p_1664->g_509.s4, "p_1664->g_509.s4", print_hash_value);
    transparent_crc(p_1664->g_509.s5, "p_1664->g_509.s5", print_hash_value);
    transparent_crc(p_1664->g_509.s6, "p_1664->g_509.s6", print_hash_value);
    transparent_crc(p_1664->g_509.s7, "p_1664->g_509.s7", print_hash_value);
    transparent_crc(p_1664->g_635, "p_1664->g_635", print_hash_value);
    transparent_crc(p_1664->g_666.f0, "p_1664->g_666.f0", print_hash_value);
    transparent_crc(p_1664->g_666.f1, "p_1664->g_666.f1", print_hash_value);
    transparent_crc(p_1664->g_666.f2, "p_1664->g_666.f2", print_hash_value);
    transparent_crc(p_1664->g_666.f3, "p_1664->g_666.f3", print_hash_value);
    transparent_crc(p_1664->g_666.f4, "p_1664->g_666.f4", print_hash_value);
    transparent_crc(p_1664->g_666.f5, "p_1664->g_666.f5", print_hash_value);
    transparent_crc(p_1664->g_666.f6, "p_1664->g_666.f6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1664->g_709[i][j].f0, "p_1664->g_709[i][j].f0", print_hash_value);
            transparent_crc(p_1664->g_709[i][j].f1, "p_1664->g_709[i][j].f1", print_hash_value);
            transparent_crc(p_1664->g_709[i][j].f2, "p_1664->g_709[i][j].f2", print_hash_value);
            transparent_crc(p_1664->g_709[i][j].f3, "p_1664->g_709[i][j].f3", print_hash_value);
            transparent_crc(p_1664->g_709[i][j].f4, "p_1664->g_709[i][j].f4", print_hash_value);
            transparent_crc(p_1664->g_709[i][j].f5, "p_1664->g_709[i][j].f5", print_hash_value);
            transparent_crc(p_1664->g_709[i][j].f6, "p_1664->g_709[i][j].f6", print_hash_value);

        }
    }
    transparent_crc(p_1664->g_715.s0, "p_1664->g_715.s0", print_hash_value);
    transparent_crc(p_1664->g_715.s1, "p_1664->g_715.s1", print_hash_value);
    transparent_crc(p_1664->g_715.s2, "p_1664->g_715.s2", print_hash_value);
    transparent_crc(p_1664->g_715.s3, "p_1664->g_715.s3", print_hash_value);
    transparent_crc(p_1664->g_715.s4, "p_1664->g_715.s4", print_hash_value);
    transparent_crc(p_1664->g_715.s5, "p_1664->g_715.s5", print_hash_value);
    transparent_crc(p_1664->g_715.s6, "p_1664->g_715.s6", print_hash_value);
    transparent_crc(p_1664->g_715.s7, "p_1664->g_715.s7", print_hash_value);
    transparent_crc(p_1664->g_715.s8, "p_1664->g_715.s8", print_hash_value);
    transparent_crc(p_1664->g_715.s9, "p_1664->g_715.s9", print_hash_value);
    transparent_crc(p_1664->g_715.sa, "p_1664->g_715.sa", print_hash_value);
    transparent_crc(p_1664->g_715.sb, "p_1664->g_715.sb", print_hash_value);
    transparent_crc(p_1664->g_715.sc, "p_1664->g_715.sc", print_hash_value);
    transparent_crc(p_1664->g_715.sd, "p_1664->g_715.sd", print_hash_value);
    transparent_crc(p_1664->g_715.se, "p_1664->g_715.se", print_hash_value);
    transparent_crc(p_1664->g_715.sf, "p_1664->g_715.sf", print_hash_value);
    transparent_crc(p_1664->g_716.x, "p_1664->g_716.x", print_hash_value);
    transparent_crc(p_1664->g_716.y, "p_1664->g_716.y", print_hash_value);
    transparent_crc(p_1664->g_717.s0, "p_1664->g_717.s0", print_hash_value);
    transparent_crc(p_1664->g_717.s1, "p_1664->g_717.s1", print_hash_value);
    transparent_crc(p_1664->g_717.s2, "p_1664->g_717.s2", print_hash_value);
    transparent_crc(p_1664->g_717.s3, "p_1664->g_717.s3", print_hash_value);
    transparent_crc(p_1664->g_717.s4, "p_1664->g_717.s4", print_hash_value);
    transparent_crc(p_1664->g_717.s5, "p_1664->g_717.s5", print_hash_value);
    transparent_crc(p_1664->g_717.s6, "p_1664->g_717.s6", print_hash_value);
    transparent_crc(p_1664->g_717.s7, "p_1664->g_717.s7", print_hash_value);
    transparent_crc(p_1664->g_718.x, "p_1664->g_718.x", print_hash_value);
    transparent_crc(p_1664->g_718.y, "p_1664->g_718.y", print_hash_value);
    transparent_crc(p_1664->g_718.z, "p_1664->g_718.z", print_hash_value);
    transparent_crc(p_1664->g_718.w, "p_1664->g_718.w", print_hash_value);
    transparent_crc(p_1664->g_720.s0, "p_1664->g_720.s0", print_hash_value);
    transparent_crc(p_1664->g_720.s1, "p_1664->g_720.s1", print_hash_value);
    transparent_crc(p_1664->g_720.s2, "p_1664->g_720.s2", print_hash_value);
    transparent_crc(p_1664->g_720.s3, "p_1664->g_720.s3", print_hash_value);
    transparent_crc(p_1664->g_720.s4, "p_1664->g_720.s4", print_hash_value);
    transparent_crc(p_1664->g_720.s5, "p_1664->g_720.s5", print_hash_value);
    transparent_crc(p_1664->g_720.s6, "p_1664->g_720.s6", print_hash_value);
    transparent_crc(p_1664->g_720.s7, "p_1664->g_720.s7", print_hash_value);
    transparent_crc(p_1664->g_724.f0, "p_1664->g_724.f0", print_hash_value);
    transparent_crc(p_1664->g_724.f1, "p_1664->g_724.f1", print_hash_value);
    transparent_crc(p_1664->g_724.f2, "p_1664->g_724.f2", print_hash_value);
    transparent_crc(p_1664->g_724.f3, "p_1664->g_724.f3", print_hash_value);
    transparent_crc(p_1664->g_724.f4, "p_1664->g_724.f4", print_hash_value);
    transparent_crc(p_1664->g_724.f5, "p_1664->g_724.f5", print_hash_value);
    transparent_crc(p_1664->g_724.f6, "p_1664->g_724.f6", print_hash_value);
    transparent_crc(p_1664->g_743, "p_1664->g_743", print_hash_value);
    transparent_crc(p_1664->g_749.f0, "p_1664->g_749.f0", print_hash_value);
    transparent_crc(p_1664->g_749.f1, "p_1664->g_749.f1", print_hash_value);
    transparent_crc(p_1664->g_749.f2, "p_1664->g_749.f2", print_hash_value);
    transparent_crc(p_1664->g_749.f3, "p_1664->g_749.f3", print_hash_value);
    transparent_crc(p_1664->g_749.f4, "p_1664->g_749.f4", print_hash_value);
    transparent_crc(p_1664->g_749.f5, "p_1664->g_749.f5", print_hash_value);
    transparent_crc(p_1664->g_749.f6, "p_1664->g_749.f6", print_hash_value);
    transparent_crc(p_1664->g_752.x, "p_1664->g_752.x", print_hash_value);
    transparent_crc(p_1664->g_752.y, "p_1664->g_752.y", print_hash_value);
    transparent_crc(p_1664->g_777.x, "p_1664->g_777.x", print_hash_value);
    transparent_crc(p_1664->g_777.y, "p_1664->g_777.y", print_hash_value);
    transparent_crc(p_1664->g_809.x, "p_1664->g_809.x", print_hash_value);
    transparent_crc(p_1664->g_809.y, "p_1664->g_809.y", print_hash_value);
    transparent_crc(p_1664->g_810.x, "p_1664->g_810.x", print_hash_value);
    transparent_crc(p_1664->g_810.y, "p_1664->g_810.y", print_hash_value);
    transparent_crc(p_1664->g_820.x, "p_1664->g_820.x", print_hash_value);
    transparent_crc(p_1664->g_820.y, "p_1664->g_820.y", print_hash_value);
    transparent_crc(p_1664->g_829.x, "p_1664->g_829.x", print_hash_value);
    transparent_crc(p_1664->g_829.y, "p_1664->g_829.y", print_hash_value);
    transparent_crc(p_1664->g_847.f0, "p_1664->g_847.f0", print_hash_value);
    transparent_crc(p_1664->g_847.f1, "p_1664->g_847.f1", print_hash_value);
    transparent_crc(p_1664->g_847.f2, "p_1664->g_847.f2", print_hash_value);
    transparent_crc(p_1664->g_847.f3, "p_1664->g_847.f3", print_hash_value);
    transparent_crc(p_1664->g_847.f4, "p_1664->g_847.f4", print_hash_value);
    transparent_crc(p_1664->g_847.f5, "p_1664->g_847.f5", print_hash_value);
    transparent_crc(p_1664->g_847.f6, "p_1664->g_847.f6", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1664->g_866[i].f0, "p_1664->g_866[i].f0", print_hash_value);
        transparent_crc(p_1664->g_866[i].f1, "p_1664->g_866[i].f1", print_hash_value);
        transparent_crc(p_1664->g_866[i].f2, "p_1664->g_866[i].f2", print_hash_value);
        transparent_crc(p_1664->g_866[i].f3, "p_1664->g_866[i].f3", print_hash_value);
        transparent_crc(p_1664->g_866[i].f4, "p_1664->g_866[i].f4", print_hash_value);
        transparent_crc(p_1664->g_866[i].f5, "p_1664->g_866[i].f5", print_hash_value);
        transparent_crc(p_1664->g_866[i].f6, "p_1664->g_866[i].f6", print_hash_value);

    }
    transparent_crc(p_1664->g_897.s0, "p_1664->g_897.s0", print_hash_value);
    transparent_crc(p_1664->g_897.s1, "p_1664->g_897.s1", print_hash_value);
    transparent_crc(p_1664->g_897.s2, "p_1664->g_897.s2", print_hash_value);
    transparent_crc(p_1664->g_897.s3, "p_1664->g_897.s3", print_hash_value);
    transparent_crc(p_1664->g_897.s4, "p_1664->g_897.s4", print_hash_value);
    transparent_crc(p_1664->g_897.s5, "p_1664->g_897.s5", print_hash_value);
    transparent_crc(p_1664->g_897.s6, "p_1664->g_897.s6", print_hash_value);
    transparent_crc(p_1664->g_897.s7, "p_1664->g_897.s7", print_hash_value);
    transparent_crc(p_1664->g_897.s8, "p_1664->g_897.s8", print_hash_value);
    transparent_crc(p_1664->g_897.s9, "p_1664->g_897.s9", print_hash_value);
    transparent_crc(p_1664->g_897.sa, "p_1664->g_897.sa", print_hash_value);
    transparent_crc(p_1664->g_897.sb, "p_1664->g_897.sb", print_hash_value);
    transparent_crc(p_1664->g_897.sc, "p_1664->g_897.sc", print_hash_value);
    transparent_crc(p_1664->g_897.sd, "p_1664->g_897.sd", print_hash_value);
    transparent_crc(p_1664->g_897.se, "p_1664->g_897.se", print_hash_value);
    transparent_crc(p_1664->g_897.sf, "p_1664->g_897.sf", print_hash_value);
    transparent_crc(p_1664->g_969.x, "p_1664->g_969.x", print_hash_value);
    transparent_crc(p_1664->g_969.y, "p_1664->g_969.y", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1664->g_991[i][j][k], "p_1664->g_991[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1664->g_996, "p_1664->g_996", print_hash_value);
    transparent_crc(p_1664->g_999, "p_1664->g_999", print_hash_value);
    transparent_crc(p_1664->g_1022.s0, "p_1664->g_1022.s0", print_hash_value);
    transparent_crc(p_1664->g_1022.s1, "p_1664->g_1022.s1", print_hash_value);
    transparent_crc(p_1664->g_1022.s2, "p_1664->g_1022.s2", print_hash_value);
    transparent_crc(p_1664->g_1022.s3, "p_1664->g_1022.s3", print_hash_value);
    transparent_crc(p_1664->g_1022.s4, "p_1664->g_1022.s4", print_hash_value);
    transparent_crc(p_1664->g_1022.s5, "p_1664->g_1022.s5", print_hash_value);
    transparent_crc(p_1664->g_1022.s6, "p_1664->g_1022.s6", print_hash_value);
    transparent_crc(p_1664->g_1022.s7, "p_1664->g_1022.s7", print_hash_value);
    transparent_crc(p_1664->g_1028.s0, "p_1664->g_1028.s0", print_hash_value);
    transparent_crc(p_1664->g_1028.s1, "p_1664->g_1028.s1", print_hash_value);
    transparent_crc(p_1664->g_1028.s2, "p_1664->g_1028.s2", print_hash_value);
    transparent_crc(p_1664->g_1028.s3, "p_1664->g_1028.s3", print_hash_value);
    transparent_crc(p_1664->g_1028.s4, "p_1664->g_1028.s4", print_hash_value);
    transparent_crc(p_1664->g_1028.s5, "p_1664->g_1028.s5", print_hash_value);
    transparent_crc(p_1664->g_1028.s6, "p_1664->g_1028.s6", print_hash_value);
    transparent_crc(p_1664->g_1028.s7, "p_1664->g_1028.s7", print_hash_value);
    transparent_crc(p_1664->g_1028.s8, "p_1664->g_1028.s8", print_hash_value);
    transparent_crc(p_1664->g_1028.s9, "p_1664->g_1028.s9", print_hash_value);
    transparent_crc(p_1664->g_1028.sa, "p_1664->g_1028.sa", print_hash_value);
    transparent_crc(p_1664->g_1028.sb, "p_1664->g_1028.sb", print_hash_value);
    transparent_crc(p_1664->g_1028.sc, "p_1664->g_1028.sc", print_hash_value);
    transparent_crc(p_1664->g_1028.sd, "p_1664->g_1028.sd", print_hash_value);
    transparent_crc(p_1664->g_1028.se, "p_1664->g_1028.se", print_hash_value);
    transparent_crc(p_1664->g_1028.sf, "p_1664->g_1028.sf", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1664->g_1055[i].f0, "p_1664->g_1055[i].f0", print_hash_value);
        transparent_crc(p_1664->g_1055[i].f1, "p_1664->g_1055[i].f1", print_hash_value);
        transparent_crc(p_1664->g_1055[i].f2, "p_1664->g_1055[i].f2", print_hash_value);
        transparent_crc(p_1664->g_1055[i].f3, "p_1664->g_1055[i].f3", print_hash_value);
        transparent_crc(p_1664->g_1055[i].f4, "p_1664->g_1055[i].f4", print_hash_value);
        transparent_crc(p_1664->g_1055[i].f5, "p_1664->g_1055[i].f5", print_hash_value);
        transparent_crc(p_1664->g_1055[i].f6, "p_1664->g_1055[i].f6", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1664->g_1063[i][j][k], "p_1664->g_1063[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1664->g_1078.x, "p_1664->g_1078.x", print_hash_value);
    transparent_crc(p_1664->g_1078.y, "p_1664->g_1078.y", print_hash_value);
    transparent_crc(p_1664->g_1078.z, "p_1664->g_1078.z", print_hash_value);
    transparent_crc(p_1664->g_1078.w, "p_1664->g_1078.w", print_hash_value);
    transparent_crc(p_1664->g_1088, "p_1664->g_1088", print_hash_value);
    transparent_crc(p_1664->g_1102.x, "p_1664->g_1102.x", print_hash_value);
    transparent_crc(p_1664->g_1102.y, "p_1664->g_1102.y", print_hash_value);
    transparent_crc(p_1664->g_1102.z, "p_1664->g_1102.z", print_hash_value);
    transparent_crc(p_1664->g_1102.w, "p_1664->g_1102.w", print_hash_value);
    transparent_crc(p_1664->g_1130, "p_1664->g_1130", print_hash_value);
    transparent_crc(p_1664->g_1149.f0, "p_1664->g_1149.f0", print_hash_value);
    transparent_crc(p_1664->g_1149.f1, "p_1664->g_1149.f1", print_hash_value);
    transparent_crc(p_1664->g_1149.f2, "p_1664->g_1149.f2", print_hash_value);
    transparent_crc(p_1664->g_1149.f3, "p_1664->g_1149.f3", print_hash_value);
    transparent_crc(p_1664->g_1149.f4, "p_1664->g_1149.f4", print_hash_value);
    transparent_crc(p_1664->g_1149.f5, "p_1664->g_1149.f5", print_hash_value);
    transparent_crc(p_1664->g_1149.f6, "p_1664->g_1149.f6", print_hash_value);
    transparent_crc(p_1664->g_1182.s0, "p_1664->g_1182.s0", print_hash_value);
    transparent_crc(p_1664->g_1182.s1, "p_1664->g_1182.s1", print_hash_value);
    transparent_crc(p_1664->g_1182.s2, "p_1664->g_1182.s2", print_hash_value);
    transparent_crc(p_1664->g_1182.s3, "p_1664->g_1182.s3", print_hash_value);
    transparent_crc(p_1664->g_1182.s4, "p_1664->g_1182.s4", print_hash_value);
    transparent_crc(p_1664->g_1182.s5, "p_1664->g_1182.s5", print_hash_value);
    transparent_crc(p_1664->g_1182.s6, "p_1664->g_1182.s6", print_hash_value);
    transparent_crc(p_1664->g_1182.s7, "p_1664->g_1182.s7", print_hash_value);
    transparent_crc(p_1664->g_1183.x, "p_1664->g_1183.x", print_hash_value);
    transparent_crc(p_1664->g_1183.y, "p_1664->g_1183.y", print_hash_value);
    transparent_crc(p_1664->g_1184.s0, "p_1664->g_1184.s0", print_hash_value);
    transparent_crc(p_1664->g_1184.s1, "p_1664->g_1184.s1", print_hash_value);
    transparent_crc(p_1664->g_1184.s2, "p_1664->g_1184.s2", print_hash_value);
    transparent_crc(p_1664->g_1184.s3, "p_1664->g_1184.s3", print_hash_value);
    transparent_crc(p_1664->g_1184.s4, "p_1664->g_1184.s4", print_hash_value);
    transparent_crc(p_1664->g_1184.s5, "p_1664->g_1184.s5", print_hash_value);
    transparent_crc(p_1664->g_1184.s6, "p_1664->g_1184.s6", print_hash_value);
    transparent_crc(p_1664->g_1184.s7, "p_1664->g_1184.s7", print_hash_value);
    transparent_crc(p_1664->g_1184.s8, "p_1664->g_1184.s8", print_hash_value);
    transparent_crc(p_1664->g_1184.s9, "p_1664->g_1184.s9", print_hash_value);
    transparent_crc(p_1664->g_1184.sa, "p_1664->g_1184.sa", print_hash_value);
    transparent_crc(p_1664->g_1184.sb, "p_1664->g_1184.sb", print_hash_value);
    transparent_crc(p_1664->g_1184.sc, "p_1664->g_1184.sc", print_hash_value);
    transparent_crc(p_1664->g_1184.sd, "p_1664->g_1184.sd", print_hash_value);
    transparent_crc(p_1664->g_1184.se, "p_1664->g_1184.se", print_hash_value);
    transparent_crc(p_1664->g_1184.sf, "p_1664->g_1184.sf", print_hash_value);
    transparent_crc(p_1664->g_1202.s0, "p_1664->g_1202.s0", print_hash_value);
    transparent_crc(p_1664->g_1202.s1, "p_1664->g_1202.s1", print_hash_value);
    transparent_crc(p_1664->g_1202.s2, "p_1664->g_1202.s2", print_hash_value);
    transparent_crc(p_1664->g_1202.s3, "p_1664->g_1202.s3", print_hash_value);
    transparent_crc(p_1664->g_1202.s4, "p_1664->g_1202.s4", print_hash_value);
    transparent_crc(p_1664->g_1202.s5, "p_1664->g_1202.s5", print_hash_value);
    transparent_crc(p_1664->g_1202.s6, "p_1664->g_1202.s6", print_hash_value);
    transparent_crc(p_1664->g_1202.s7, "p_1664->g_1202.s7", print_hash_value);
    transparent_crc(p_1664->g_1205.x, "p_1664->g_1205.x", print_hash_value);
    transparent_crc(p_1664->g_1205.y, "p_1664->g_1205.y", print_hash_value);
    transparent_crc(p_1664->g_1208.x, "p_1664->g_1208.x", print_hash_value);
    transparent_crc(p_1664->g_1208.y, "p_1664->g_1208.y", print_hash_value);
    transparent_crc(p_1664->g_1208.z, "p_1664->g_1208.z", print_hash_value);
    transparent_crc(p_1664->g_1208.w, "p_1664->g_1208.w", print_hash_value);
    transparent_crc(p_1664->g_1209.s0, "p_1664->g_1209.s0", print_hash_value);
    transparent_crc(p_1664->g_1209.s1, "p_1664->g_1209.s1", print_hash_value);
    transparent_crc(p_1664->g_1209.s2, "p_1664->g_1209.s2", print_hash_value);
    transparent_crc(p_1664->g_1209.s3, "p_1664->g_1209.s3", print_hash_value);
    transparent_crc(p_1664->g_1209.s4, "p_1664->g_1209.s4", print_hash_value);
    transparent_crc(p_1664->g_1209.s5, "p_1664->g_1209.s5", print_hash_value);
    transparent_crc(p_1664->g_1209.s6, "p_1664->g_1209.s6", print_hash_value);
    transparent_crc(p_1664->g_1209.s7, "p_1664->g_1209.s7", print_hash_value);
    transparent_crc(p_1664->g_1210.s0, "p_1664->g_1210.s0", print_hash_value);
    transparent_crc(p_1664->g_1210.s1, "p_1664->g_1210.s1", print_hash_value);
    transparent_crc(p_1664->g_1210.s2, "p_1664->g_1210.s2", print_hash_value);
    transparent_crc(p_1664->g_1210.s3, "p_1664->g_1210.s3", print_hash_value);
    transparent_crc(p_1664->g_1210.s4, "p_1664->g_1210.s4", print_hash_value);
    transparent_crc(p_1664->g_1210.s5, "p_1664->g_1210.s5", print_hash_value);
    transparent_crc(p_1664->g_1210.s6, "p_1664->g_1210.s6", print_hash_value);
    transparent_crc(p_1664->g_1210.s7, "p_1664->g_1210.s7", print_hash_value);
    transparent_crc(p_1664->g_1211.s0, "p_1664->g_1211.s0", print_hash_value);
    transparent_crc(p_1664->g_1211.s1, "p_1664->g_1211.s1", print_hash_value);
    transparent_crc(p_1664->g_1211.s2, "p_1664->g_1211.s2", print_hash_value);
    transparent_crc(p_1664->g_1211.s3, "p_1664->g_1211.s3", print_hash_value);
    transparent_crc(p_1664->g_1211.s4, "p_1664->g_1211.s4", print_hash_value);
    transparent_crc(p_1664->g_1211.s5, "p_1664->g_1211.s5", print_hash_value);
    transparent_crc(p_1664->g_1211.s6, "p_1664->g_1211.s6", print_hash_value);
    transparent_crc(p_1664->g_1211.s7, "p_1664->g_1211.s7", print_hash_value);
    transparent_crc(p_1664->g_1211.s8, "p_1664->g_1211.s8", print_hash_value);
    transparent_crc(p_1664->g_1211.s9, "p_1664->g_1211.s9", print_hash_value);
    transparent_crc(p_1664->g_1211.sa, "p_1664->g_1211.sa", print_hash_value);
    transparent_crc(p_1664->g_1211.sb, "p_1664->g_1211.sb", print_hash_value);
    transparent_crc(p_1664->g_1211.sc, "p_1664->g_1211.sc", print_hash_value);
    transparent_crc(p_1664->g_1211.sd, "p_1664->g_1211.sd", print_hash_value);
    transparent_crc(p_1664->g_1211.se, "p_1664->g_1211.se", print_hash_value);
    transparent_crc(p_1664->g_1211.sf, "p_1664->g_1211.sf", print_hash_value);
    transparent_crc(p_1664->g_1228.s0, "p_1664->g_1228.s0", print_hash_value);
    transparent_crc(p_1664->g_1228.s1, "p_1664->g_1228.s1", print_hash_value);
    transparent_crc(p_1664->g_1228.s2, "p_1664->g_1228.s2", print_hash_value);
    transparent_crc(p_1664->g_1228.s3, "p_1664->g_1228.s3", print_hash_value);
    transparent_crc(p_1664->g_1228.s4, "p_1664->g_1228.s4", print_hash_value);
    transparent_crc(p_1664->g_1228.s5, "p_1664->g_1228.s5", print_hash_value);
    transparent_crc(p_1664->g_1228.s6, "p_1664->g_1228.s6", print_hash_value);
    transparent_crc(p_1664->g_1228.s7, "p_1664->g_1228.s7", print_hash_value);
    transparent_crc(p_1664->g_1228.s8, "p_1664->g_1228.s8", print_hash_value);
    transparent_crc(p_1664->g_1228.s9, "p_1664->g_1228.s9", print_hash_value);
    transparent_crc(p_1664->g_1228.sa, "p_1664->g_1228.sa", print_hash_value);
    transparent_crc(p_1664->g_1228.sb, "p_1664->g_1228.sb", print_hash_value);
    transparent_crc(p_1664->g_1228.sc, "p_1664->g_1228.sc", print_hash_value);
    transparent_crc(p_1664->g_1228.sd, "p_1664->g_1228.sd", print_hash_value);
    transparent_crc(p_1664->g_1228.se, "p_1664->g_1228.se", print_hash_value);
    transparent_crc(p_1664->g_1228.sf, "p_1664->g_1228.sf", print_hash_value);
    transparent_crc(p_1664->g_1232.s0, "p_1664->g_1232.s0", print_hash_value);
    transparent_crc(p_1664->g_1232.s1, "p_1664->g_1232.s1", print_hash_value);
    transparent_crc(p_1664->g_1232.s2, "p_1664->g_1232.s2", print_hash_value);
    transparent_crc(p_1664->g_1232.s3, "p_1664->g_1232.s3", print_hash_value);
    transparent_crc(p_1664->g_1232.s4, "p_1664->g_1232.s4", print_hash_value);
    transparent_crc(p_1664->g_1232.s5, "p_1664->g_1232.s5", print_hash_value);
    transparent_crc(p_1664->g_1232.s6, "p_1664->g_1232.s6", print_hash_value);
    transparent_crc(p_1664->g_1232.s7, "p_1664->g_1232.s7", print_hash_value);
    transparent_crc(p_1664->g_1236, "p_1664->g_1236", print_hash_value);
    transparent_crc(p_1664->g_1344.f0, "p_1664->g_1344.f0", print_hash_value);
    transparent_crc(p_1664->g_1344.f1, "p_1664->g_1344.f1", print_hash_value);
    transparent_crc(p_1664->g_1344.f2, "p_1664->g_1344.f2", print_hash_value);
    transparent_crc(p_1664->g_1344.f3, "p_1664->g_1344.f3", print_hash_value);
    transparent_crc(p_1664->g_1344.f4, "p_1664->g_1344.f4", print_hash_value);
    transparent_crc(p_1664->g_1344.f5, "p_1664->g_1344.f5", print_hash_value);
    transparent_crc(p_1664->g_1344.f6, "p_1664->g_1344.f6", print_hash_value);
    transparent_crc(p_1664->g_1350, "p_1664->g_1350", print_hash_value);
    transparent_crc(p_1664->g_1357.s0, "p_1664->g_1357.s0", print_hash_value);
    transparent_crc(p_1664->g_1357.s1, "p_1664->g_1357.s1", print_hash_value);
    transparent_crc(p_1664->g_1357.s2, "p_1664->g_1357.s2", print_hash_value);
    transparent_crc(p_1664->g_1357.s3, "p_1664->g_1357.s3", print_hash_value);
    transparent_crc(p_1664->g_1357.s4, "p_1664->g_1357.s4", print_hash_value);
    transparent_crc(p_1664->g_1357.s5, "p_1664->g_1357.s5", print_hash_value);
    transparent_crc(p_1664->g_1357.s6, "p_1664->g_1357.s6", print_hash_value);
    transparent_crc(p_1664->g_1357.s7, "p_1664->g_1357.s7", print_hash_value);
    transparent_crc(p_1664->g_1366.s0, "p_1664->g_1366.s0", print_hash_value);
    transparent_crc(p_1664->g_1366.s1, "p_1664->g_1366.s1", print_hash_value);
    transparent_crc(p_1664->g_1366.s2, "p_1664->g_1366.s2", print_hash_value);
    transparent_crc(p_1664->g_1366.s3, "p_1664->g_1366.s3", print_hash_value);
    transparent_crc(p_1664->g_1366.s4, "p_1664->g_1366.s4", print_hash_value);
    transparent_crc(p_1664->g_1366.s5, "p_1664->g_1366.s5", print_hash_value);
    transparent_crc(p_1664->g_1366.s6, "p_1664->g_1366.s6", print_hash_value);
    transparent_crc(p_1664->g_1366.s7, "p_1664->g_1366.s7", print_hash_value);
    transparent_crc(p_1664->g_1366.s8, "p_1664->g_1366.s8", print_hash_value);
    transparent_crc(p_1664->g_1366.s9, "p_1664->g_1366.s9", print_hash_value);
    transparent_crc(p_1664->g_1366.sa, "p_1664->g_1366.sa", print_hash_value);
    transparent_crc(p_1664->g_1366.sb, "p_1664->g_1366.sb", print_hash_value);
    transparent_crc(p_1664->g_1366.sc, "p_1664->g_1366.sc", print_hash_value);
    transparent_crc(p_1664->g_1366.sd, "p_1664->g_1366.sd", print_hash_value);
    transparent_crc(p_1664->g_1366.se, "p_1664->g_1366.se", print_hash_value);
    transparent_crc(p_1664->g_1366.sf, "p_1664->g_1366.sf", print_hash_value);
    transparent_crc(p_1664->g_1421.s0, "p_1664->g_1421.s0", print_hash_value);
    transparent_crc(p_1664->g_1421.s1, "p_1664->g_1421.s1", print_hash_value);
    transparent_crc(p_1664->g_1421.s2, "p_1664->g_1421.s2", print_hash_value);
    transparent_crc(p_1664->g_1421.s3, "p_1664->g_1421.s3", print_hash_value);
    transparent_crc(p_1664->g_1421.s4, "p_1664->g_1421.s4", print_hash_value);
    transparent_crc(p_1664->g_1421.s5, "p_1664->g_1421.s5", print_hash_value);
    transparent_crc(p_1664->g_1421.s6, "p_1664->g_1421.s6", print_hash_value);
    transparent_crc(p_1664->g_1421.s7, "p_1664->g_1421.s7", print_hash_value);
    transparent_crc(p_1664->g_1455.f0, "p_1664->g_1455.f0", print_hash_value);
    transparent_crc(p_1664->g_1455.f1, "p_1664->g_1455.f1", print_hash_value);
    transparent_crc(p_1664->g_1455.f2, "p_1664->g_1455.f2", print_hash_value);
    transparent_crc(p_1664->g_1455.f3, "p_1664->g_1455.f3", print_hash_value);
    transparent_crc(p_1664->g_1455.f4, "p_1664->g_1455.f4", print_hash_value);
    transparent_crc(p_1664->g_1455.f5, "p_1664->g_1455.f5", print_hash_value);
    transparent_crc(p_1664->g_1455.f6, "p_1664->g_1455.f6", print_hash_value);
    transparent_crc(p_1664->g_1456.f0, "p_1664->g_1456.f0", print_hash_value);
    transparent_crc(p_1664->g_1456.f1, "p_1664->g_1456.f1", print_hash_value);
    transparent_crc(p_1664->g_1456.f2, "p_1664->g_1456.f2", print_hash_value);
    transparent_crc(p_1664->g_1456.f3, "p_1664->g_1456.f3", print_hash_value);
    transparent_crc(p_1664->g_1456.f4, "p_1664->g_1456.f4", print_hash_value);
    transparent_crc(p_1664->g_1456.f5, "p_1664->g_1456.f5", print_hash_value);
    transparent_crc(p_1664->g_1456.f6, "p_1664->g_1456.f6", print_hash_value);
    transparent_crc(p_1664->g_1473, "p_1664->g_1473", print_hash_value);
    transparent_crc(p_1664->g_1535.x, "p_1664->g_1535.x", print_hash_value);
    transparent_crc(p_1664->g_1535.y, "p_1664->g_1535.y", print_hash_value);
    transparent_crc(p_1664->g_1576, "p_1664->g_1576", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1664->g_1592[i].f0, "p_1664->g_1592[i].f0", print_hash_value);
        transparent_crc(p_1664->g_1592[i].f1, "p_1664->g_1592[i].f1", print_hash_value);
        transparent_crc(p_1664->g_1592[i].f2, "p_1664->g_1592[i].f2", print_hash_value);
        transparent_crc(p_1664->g_1592[i].f3, "p_1664->g_1592[i].f3", print_hash_value);
        transparent_crc(p_1664->g_1592[i].f4, "p_1664->g_1592[i].f4", print_hash_value);
        transparent_crc(p_1664->g_1592[i].f5, "p_1664->g_1592[i].f5", print_hash_value);
        transparent_crc(p_1664->g_1592[i].f6, "p_1664->g_1592[i].f6", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1664->g_1593[i][j].f0, "p_1664->g_1593[i][j].f0", print_hash_value);
            transparent_crc(p_1664->g_1593[i][j].f1, "p_1664->g_1593[i][j].f1", print_hash_value);
            transparent_crc(p_1664->g_1593[i][j].f2, "p_1664->g_1593[i][j].f2", print_hash_value);
            transparent_crc(p_1664->g_1593[i][j].f3, "p_1664->g_1593[i][j].f3", print_hash_value);
            transparent_crc(p_1664->g_1593[i][j].f4, "p_1664->g_1593[i][j].f4", print_hash_value);
            transparent_crc(p_1664->g_1593[i][j].f5, "p_1664->g_1593[i][j].f5", print_hash_value);
            transparent_crc(p_1664->g_1593[i][j].f6, "p_1664->g_1593[i][j].f6", print_hash_value);

        }
    }
    transparent_crc(p_1664->g_1604.s0, "p_1664->g_1604.s0", print_hash_value);
    transparent_crc(p_1664->g_1604.s1, "p_1664->g_1604.s1", print_hash_value);
    transparent_crc(p_1664->g_1604.s2, "p_1664->g_1604.s2", print_hash_value);
    transparent_crc(p_1664->g_1604.s3, "p_1664->g_1604.s3", print_hash_value);
    transparent_crc(p_1664->g_1604.s4, "p_1664->g_1604.s4", print_hash_value);
    transparent_crc(p_1664->g_1604.s5, "p_1664->g_1604.s5", print_hash_value);
    transparent_crc(p_1664->g_1604.s6, "p_1664->g_1604.s6", print_hash_value);
    transparent_crc(p_1664->g_1604.s7, "p_1664->g_1604.s7", print_hash_value);
    transparent_crc(p_1664->g_1605.x, "p_1664->g_1605.x", print_hash_value);
    transparent_crc(p_1664->g_1605.y, "p_1664->g_1605.y", print_hash_value);
    transparent_crc(p_1664->g_1609.s0, "p_1664->g_1609.s0", print_hash_value);
    transparent_crc(p_1664->g_1609.s1, "p_1664->g_1609.s1", print_hash_value);
    transparent_crc(p_1664->g_1609.s2, "p_1664->g_1609.s2", print_hash_value);
    transparent_crc(p_1664->g_1609.s3, "p_1664->g_1609.s3", print_hash_value);
    transparent_crc(p_1664->g_1609.s4, "p_1664->g_1609.s4", print_hash_value);
    transparent_crc(p_1664->g_1609.s5, "p_1664->g_1609.s5", print_hash_value);
    transparent_crc(p_1664->g_1609.s6, "p_1664->g_1609.s6", print_hash_value);
    transparent_crc(p_1664->g_1609.s7, "p_1664->g_1609.s7", print_hash_value);
    transparent_crc(p_1664->g_1609.s8, "p_1664->g_1609.s8", print_hash_value);
    transparent_crc(p_1664->g_1609.s9, "p_1664->g_1609.s9", print_hash_value);
    transparent_crc(p_1664->g_1609.sa, "p_1664->g_1609.sa", print_hash_value);
    transparent_crc(p_1664->g_1609.sb, "p_1664->g_1609.sb", print_hash_value);
    transparent_crc(p_1664->g_1609.sc, "p_1664->g_1609.sc", print_hash_value);
    transparent_crc(p_1664->g_1609.sd, "p_1664->g_1609.sd", print_hash_value);
    transparent_crc(p_1664->g_1609.se, "p_1664->g_1609.se", print_hash_value);
    transparent_crc(p_1664->g_1609.sf, "p_1664->g_1609.sf", print_hash_value);
    transparent_crc(p_1664->v_collective, "p_1664->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 41; i++)
            transparent_crc(p_1664->g_special_values[i + 41 * get_linear_group_id()], "p_1664->g_special_values[i + 41 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 41; i++)
            transparent_crc(p_1664->l_special_values[i], "p_1664->l_special_values[i]", print_hash_value);
    transparent_crc(p_1664->l_comm_values[get_linear_local_id()], "p_1664->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1664->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()], "p_1664->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
