// -g 28,21,12 -l 4,3,1
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


// Seed: 3195750119

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint64_t  f1;
   volatile int64_t  f2;
   int8_t  f3;
   volatile int64_t  f4;
};

struct S1 {
   volatile uint32_t  f0;
   volatile uint32_t  f1;
   volatile uint32_t  f2;
};

struct S2 {
    uint32_t g_2[6];
    volatile int32_t g_3;
    int32_t g_4;
    int32_t g_5;
    int16_t g_32;
    int32_t g_35;
    int32_t g_75;
    int32_t *g_74;
    struct S0 g_80;
    uint64_t g_99;
    struct S0 * volatile g_102;
    uint8_t g_109;
    struct S0 g_138;
    uint16_t g_145;
    uint16_t g_155;
    struct S0 g_160;
    struct S0 *g_161;
    struct S0 g_167;
    int16_t g_171;
    uint8_t g_172;
    uint32_t g_180;
    uint32_t g_184;
    int16_t g_186;
    int32_t * volatile * volatile g_202;
    int32_t * volatile * volatile * volatile g_201;
    volatile int32_t g_206;
    volatile int32_t *g_205;
    volatile int32_t * volatile *g_204;
    volatile int32_t * volatile **g_203;
    uint16_t *g_210;
    uint16_t **g_209;
    struct S0 g_213;
    int64_t g_229;
    int64_t * volatile g_228;
    int32_t g_266;
    volatile int32_t g_270;
    volatile uint32_t g_272[4][7][9];
    struct S1 g_277;
    volatile uint16_t g_279;
    struct S0 g_326;
    uint64_t *g_381;
    uint64_t *g_384;
    uint32_t g_387[7];
    uint8_t g_409;
    int32_t ** volatile g_413;
    volatile struct S1 g_414[2];
    volatile uint8_t g_437;
    int8_t g_463;
    uint16_t ***g_492;
    struct S0 g_497[10][3];
    struct S0 ** volatile g_501;
    struct S1 g_530;
    struct S0 g_548[4][8][4];
    volatile uint32_t * volatile *g_582;
    volatile struct S1 g_610[10];
    struct S1 g_623;
    struct S1 g_624;
    volatile struct S0 g_625;
    volatile struct S0 g_679;
    int64_t g_697;
    volatile int16_t g_705;
    int16_t g_706;
    int16_t g_708;
    int32_t g_718;
    int16_t g_719;
    volatile struct S0 g_735[9];
    int64_t *g_738;
    uint16_t ****g_748;
    volatile struct S1 g_750;
    volatile struct S1 *g_749;
    volatile uint8_t g_762;
    volatile struct S1 g_774[1][8];
    volatile struct S0 g_775;
    uint64_t g_780;
    struct S1 g_781;
    struct S0 g_783;
    int32_t ** volatile g_806;
    struct S1 *g_824;
    struct S1 ** volatile g_823[6][5][5];
    struct S1 ** volatile g_825;
    volatile uint32_t g_838;
    int64_t g_845;
    uint8_t g_846;
    int32_t ** volatile g_934[10][1];
    int32_t ** volatile g_935;
    volatile struct S1 g_936;
    struct S0 g_943;
    struct S0 g_944[9][8];
    struct S0 *g_942[5];
    struct S0 **g_941;
    volatile int64_t g_955;
    int32_t *g_980[5];
    int32_t ** volatile g_979;
    int32_t ** volatile g_981;
    struct S1 g_1039;
    struct S0 g_1043;
    struct S0 g_1044;
    struct S1 ** volatile g_1071;
    struct S1 g_1073;
    volatile struct S0 g_1086;
    struct S1 g_1087;
    struct S1 g_1105;
    volatile uint32_t g_1120;
    volatile struct S0 g_1123;
    uint32_t g_1166;
    uint32_t *g_1193;
    uint32_t **g_1192;
    volatile struct S1 g_1216[9][5][5];
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S2 * p_1244);
struct S1  func_6(int32_t  p_7, int64_t  p_8, struct S2 * p_1244);
int64_t  func_19(int64_t  p_20, uint32_t  p_21, int32_t  p_22, uint8_t  p_23, int8_t  p_24, struct S2 * p_1244);
int32_t  func_38(int32_t  p_39, uint64_t  p_40, struct S2 * p_1244);
int8_t  func_43(int16_t * p_44, int8_t  p_45, uint16_t  p_46, int16_t * p_47, int64_t  p_48, struct S2 * p_1244);
int64_t  func_50(int32_t  p_51, struct S2 * p_1244);
struct S1  func_55(int64_t  p_56, int32_t * p_57, uint64_t  p_58, struct S2 * p_1244);
uint64_t  func_60(int32_t * p_61, int16_t  p_62, int16_t  p_63, int16_t * p_64, int32_t  p_65, struct S2 * p_1244);
int32_t * func_66(int32_t  p_67, int32_t * p_68, struct S2 * p_1244);
int32_t  func_70(int64_t  p_71, int64_t  p_72, struct S2 * p_1244);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1244->g_4 p_1244->g_5 p_1244->g_74 p_1244->g_75 p_1244->g_213.f2 p_1244->g_205 p_1244->g_206 p_1244->g_155 p_1244->g_750.f0 p_1244->g_1105 p_1244->g_228 p_1244->g_229 p_1244->g_1166 p_1244->g_381 p_1244->g_99 p_1244->g_203 p_1244->g_204 p_1244->g_935 p_1244->g_806 p_1244->g_943.f1 p_1244->g_1039.f2 p_1244->g_171 p_1244->g_326.f0 p_1244->g_944.f3 p_1244->g_936.f2 p_1244->g_210 p_1244->g_384 p_1244->g_979 p_1244->g_748 p_1244->g_1192 p_1244->g_414.f1 p_1244->g_186 p_1244->g_548.f0 p_1244->g_213.f1 p_1244->g_1216 p_1244->g_749 p_1244->g_781.f2 p_1244->g_783.f3 p_1244->g_610.f2 p_1244->g_492 p_1244->g_209 p_1244->g_35 p_1244->g_160.f4 p_1244->g_1044.f3 p_1244->g_783.f1 p_1244->g_1193 p_1244->g_80.f0 p_1244->g_409 p_1244->g_706 p_1244->g_981
 * writes: p_1244->g_4 p_1244->g_5 p_1244->g_206 p_1244->g_155 p_1244->g_229 p_1244->g_326.f0 p_1244->g_171 p_1244->g_409 p_1244->g_980 p_1244->g_463 p_1244->g_943.f3 p_1244->g_719 p_1244->g_492 p_1244->g_1192 p_1244->g_138.f0 p_1244->g_180 p_1244->g_750 p_1244->g_186 p_1244->g_35 p_1244->g_75 p_1244->g_209 p_1244->g_32 p_1244->g_706
 */
int32_t  func_1(struct S2 * p_1244)
{ /* block id: 4 */
    uint64_t l_25[6][7][6] = {{{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L}},{{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L}},{{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L}},{{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L}},{{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L}},{{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L},{0xE903ADFE1DB4DBDFL,0xB75DA2CA335C22C9L,0x00D3B51AD5B481D3L,0x016FEFD52276C1F5L,0x6DE45221BA827CF5L,0x9495E0E2BF35DD75L}}};
    int32_t l_1112 = 1L;
    int32_t l_1113 = (-1L);
    int32_t l_1114 = (-1L);
    int32_t l_1115 = 2L;
    int32_t l_1116 = 0x4AE9B4ADL;
    int32_t l_1117 = 9L;
    int32_t l_1118 = (-1L);
    int32_t l_1119[8][7] = {{0x75FA4264L,0x4697AC1FL,0x173DBDAFL,(-6L),0L,0x75FA4264L,(-6L)},{0x75FA4264L,0x4697AC1FL,0x173DBDAFL,(-6L),0L,0x75FA4264L,(-6L)},{0x75FA4264L,0x4697AC1FL,0x173DBDAFL,(-6L),0L,0x75FA4264L,(-6L)},{0x75FA4264L,0x4697AC1FL,0x173DBDAFL,(-6L),0L,0x75FA4264L,(-6L)},{0x75FA4264L,0x4697AC1FL,0x173DBDAFL,(-6L),0L,0x75FA4264L,(-6L)},{0x75FA4264L,0x4697AC1FL,0x173DBDAFL,(-6L),0L,0x75FA4264L,(-6L)},{0x75FA4264L,0x4697AC1FL,0x173DBDAFL,(-6L),0L,0x75FA4264L,(-6L)},{0x75FA4264L,0x4697AC1FL,0x173DBDAFL,(-6L),0L,0x75FA4264L,(-6L)}};
    int64_t l_1155[9];
    int64_t **l_1181 = &p_1244->g_738;
    uint16_t *****l_1186 = &p_1244->g_748;
    int64_t l_1215 = 0x3F6889D1A4705EE2L;
    uint16_t l_1232 = 65535UL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_1155[i] = 0x42D90AFF88477281L;
    for (p_1244->g_4 = 5; (p_1244->g_4 >= 0); p_1244->g_4 -= 1)
    { /* block id: 7 */
        uint32_t l_28 = 0x6B6A42DAL;
        int32_t l_1106 = 1L;
        for (p_1244->g_5 = 5; (p_1244->g_5 >= 0); p_1244->g_5 -= 1)
        { /* block id: 10 */
            int16_t *l_31 = &p_1244->g_32;
            int64_t *l_1104 = &p_1244->g_229;
            int32_t *l_1107 = &l_1106;
            int32_t *l_1108 = &p_1244->g_75;
            int32_t *l_1109 = &p_1244->g_718;
            int32_t *l_1110 = &l_1106;
            int32_t *l_1111[6][8] = {{&p_1244->g_35,&p_1244->g_75,(void*)0,&l_1106,(void*)0,&p_1244->g_75,&p_1244->g_35,(void*)0},{&p_1244->g_35,&p_1244->g_75,(void*)0,&l_1106,(void*)0,&p_1244->g_75,&p_1244->g_35,(void*)0},{&p_1244->g_35,&p_1244->g_75,(void*)0,&l_1106,(void*)0,&p_1244->g_75,&p_1244->g_35,(void*)0},{&p_1244->g_35,&p_1244->g_75,(void*)0,&l_1106,(void*)0,&p_1244->g_75,&p_1244->g_35,(void*)0},{&p_1244->g_35,&p_1244->g_75,(void*)0,&l_1106,(void*)0,&p_1244->g_75,&p_1244->g_35,(void*)0},{&p_1244->g_35,&p_1244->g_75,(void*)0,&l_1106,(void*)0,&p_1244->g_75,&p_1244->g_35,(void*)0}};
            int i, j;
            (1 + 1);
        }
        if ((*p_1244->g_74))
            break;
        return p_1244->g_213.f2;
    }
    (*p_1244->g_205) |= (*p_1244->g_74);
    for (p_1244->g_155 = (-3); (p_1244->g_155 != 23); p_1244->g_155 = safe_add_func_uint16_t_u_u(p_1244->g_155, 2))
    { /* block id: 603 */
        int64_t l_1134 = 9L;
        int32_t l_1146 = 9L;
        int32_t l_1147[9][3][8] = {{{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L}},{{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L}},{{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L}},{{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L}},{{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L}},{{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L}},{{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L}},{{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L}},{{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L},{0L,0x745B3414L,0x29D77211L,0x1B5FF271L,(-6L),0x460507EBL,0x37F6C696L,0x6515F0F6L}}};
        uint32_t l_1148 = 0x0731E882L;
        uint32_t *l_1203 = (void*)0;
        int i, j, k;
        for (p_1244->g_229 = 0; (p_1244->g_229 != 25); p_1244->g_229 = safe_add_func_uint64_t_u_u(p_1244->g_229, 4))
        { /* block id: 606 */
            uint32_t l_1135 = 4294967295UL;
            int8_t l_1140 = 4L;
            uint8_t *l_1141 = &p_1244->g_409;
            (1 + 1);
        }
        if ((safe_div_func_int8_t_s_s(4L, l_1134)))
        { /* block id: 612 */
            int32_t *l_1144 = &l_1114;
            int32_t *l_1145[7] = {&l_1113,&l_1113,&l_1113,&l_1113,&l_1113,&l_1113,&l_1113};
            int i;
            ++l_1148;
        }
        else
        { /* block id: 614 */
            uint8_t l_1161[1];
            uint16_t **l_1239 = &p_1244->g_210;
            int16_t *l_1240 = &p_1244->g_32;
            int16_t *l_1241 = &p_1244->g_719;
            int32_t *l_1242 = (void*)0;
            int32_t *l_1243 = &p_1244->g_4;
            int i;
            for (i = 0; i < 1; i++)
                l_1161[i] = 0xA0L;
            for (p_1244->g_326.f0 = 3; (p_1244->g_326.f0 == 29); p_1244->g_326.f0 = safe_add_func_uint32_t_u_u(p_1244->g_326.f0, 8))
            { /* block id: 617 */
                int32_t l_1165 = 9L;
                struct S1 **l_1228[2][6] = {{&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824},{&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824}};
                int i, j;
                for (p_1244->g_171 = 0; (p_1244->g_171 <= 10); p_1244->g_171 = safe_add_func_uint64_t_u_u(p_1244->g_171, 9))
                { /* block id: 620 */
                    int32_t **l_1156 = &p_1244->g_980[4];
                    uint16_t ***l_1191 = &p_1244->g_209;
                    if (((func_6(((l_1155[7] | ((void*)0 != l_1156)) <= p_1244->g_750.f0), l_1113, p_1244) , (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(l_1161[0], (p_1244->g_409 = (safe_mod_func_int32_t_s_s((l_1161[0] < (((((safe_unary_minus_func_uint32_t_u(l_1165)) ^ 7UL) > 0x3ECABACCL) , (*p_1244->g_228)) ^ 0xB6F0A7D1B1862170L)), (*p_1244->g_74)))))), p_1244->g_1166))) & (*p_1244->g_74)))
                    { /* block id: 622 */
                        (***p_1244->g_203) = (((*p_1244->g_381) & 1L) && l_1161[0]);
                        (*l_1156) = &l_1147[5][2][7];
                        if ((**p_1244->g_935))
                            break;
                    }
                    else
                    { /* block id: 626 */
                        int32_t l_1173[2][4][1];
                        int8_t *l_1182 = (void*)0;
                        uint16_t l_1185 = 0x5758L;
                        int32_t l_1187 = 0x518DFD44L;
                        int8_t *l_1188 = &p_1244->g_943.f3;
                        int16_t *l_1189 = &p_1244->g_719;
                        int32_t *l_1190 = &l_1112;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 4; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_1173[i][j][k] = 1L;
                            }
                        }
                        (*l_1156) = (*p_1244->g_806);
                        (*l_1190) &= (safe_div_func_int64_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(1L, ((((l_1173[0][0][0] | 0x24411164011F9857L) <= (((safe_add_func_int16_t_s_s(((*l_1189) = (safe_mul_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_s(p_1244->g_943.f1, 9)))), (((p_1244->g_463 = (l_1181 != &p_1244->g_738)) < ((*l_1188) = ((safe_lshift_func_int8_t_s_s(((l_1185 || (l_1187 = ((((p_1244->g_1039.f2 , &p_1244->g_748) != l_1186) <= p_1244->g_171) || (**p_1244->g_806)))) || 0xCCAB8D2534604F33L), p_1244->g_326.f0)) < p_1244->g_944[7][6].f3))) || p_1244->g_936.f2)))), (*p_1244->g_210))) , l_1165) && 0L)) , l_1173[0][0][0]) || l_1165))), (-7L))), (*p_1244->g_384)));
                        (*p_1244->g_979) = &l_1113;
                        (**p_1244->g_204) ^= (l_1191 == ((**l_1186) = l_1191));
                    }
                    p_1244->g_1192 = p_1244->g_1192;
                    for (p_1244->g_138.f0 = 0; (p_1244->g_138.f0 > 21); ++p_1244->g_138.f0)
                    { /* block id: 640 */
                        uint32_t *l_1214 = &p_1244->g_180;
                        int16_t *l_1225[5][6] = {{&p_1244->g_706,&p_1244->g_706,&p_1244->g_719,&p_1244->g_706,&p_1244->g_706,&p_1244->g_706},{&p_1244->g_706,&p_1244->g_706,&p_1244->g_719,&p_1244->g_706,&p_1244->g_706,&p_1244->g_706},{&p_1244->g_706,&p_1244->g_706,&p_1244->g_719,&p_1244->g_706,&p_1244->g_706,&p_1244->g_706},{&p_1244->g_706,&p_1244->g_706,&p_1244->g_719,&p_1244->g_706,&p_1244->g_706,&p_1244->g_706},{&p_1244->g_706,&p_1244->g_706,&p_1244->g_719,&p_1244->g_706,&p_1244->g_706,&p_1244->g_706}};
                        int32_t l_1229 = (-5L);
                        int32_t *l_1230 = (void*)0;
                        int32_t *l_1231 = &p_1244->g_35;
                        int i, j;
                        (*p_1244->g_749) = (((((((l_1118 = ((safe_rshift_func_int16_t_s_u(((-1L) | l_1134), 13)) || ((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(p_1244->g_414[1].f1, 1)) > ((safe_unary_minus_func_int16_t_s(((0x2903E844L & (l_1203 == &p_1244->g_387[1])) < (~(~((0x5FE25B4B42594C14L ^ (safe_sub_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((((*l_1214) = (l_1146 = p_1244->g_186)) | p_1244->g_548[0][0][1].f0), l_1165)), 1L)) , (*p_1244->g_381)) || l_1161[0]), 1L)), l_1148)) , l_1118), 0x3BF533A1461944C5L))) > l_1215)))))) ^ p_1244->g_213.f1)), (-1L))) < 0UL))) , 0x9CL) && 0x93L) && l_1148) && p_1244->g_1105.f1) <= l_1134) , p_1244->g_1216[8][3][4]);
                        (*l_1231) ^= (65535UL > (((((l_1146 = ((*l_1214) = (((safe_add_func_uint32_t_u_u(((((1UL ^ (((((safe_mul_func_int16_t_s_s((p_1244->g_186 = (safe_div_func_uint32_t_u_u(0x95481CD2L, 1L))), p_1244->g_781.f2)) > 0x57EDD546D6A2C1E4L) < (*p_1244->g_210)) != (((((*p_1244->g_74) ^ (safe_mod_func_uint64_t_u_u((*p_1244->g_384), p_1244->g_783.f3))) , &p_1244->g_824) != l_1228[0][5]) , l_1161[0])) >= l_1161[0])) , p_1244->g_610[3].f2) < l_25[3][5][2]) & l_1112), l_1229)) <= (*p_1244->g_381)) || (***p_1244->g_492)))) && 1L) , (void*)0) != (*l_1191)) > p_1244->g_213.f1));
                        (*l_1156) = &l_1229;
                        if (l_1161[0])
                            break;
                    }
                }
            }
            l_1116 |= (l_1232 ^ (((*l_1243) |= (((((p_1244->g_706 &= ((safe_sub_func_uint32_t_u_u((((p_1244->g_160.f4 ^ (l_1148 != (0x45L & p_1244->g_1044.f3))) >= (safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(p_1244->g_783.f1, ((*p_1244->g_74) |= ((**p_1244->g_1192) , 0x5E150843L)))), ((*l_1241) = ((*l_1240) = ((((**p_1244->g_748) = (***l_1186)) == l_1239) < 2UL)))))) < (*p_1244->g_384)), 0x47CB22D6L)) != p_1244->g_409)) != l_1134) && 2UL) <= l_1147[5][2][7]) , (**p_1244->g_981))) && (**p_1244->g_806)));
            if ((**p_1244->g_204))
                break;
        }
    }
    return p_1244->g_171;
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_1105
 * writes:
 */
struct S1  func_6(int32_t  p_7, int64_t  p_8, struct S2 * p_1244)
{ /* block id: 589 */
    return p_1244->g_1105;
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_35 p_1244->g_74 p_1244->g_75 p_1244->g_203 p_1244->g_204 p_1244->g_205 p_1244->g_206 p_1244->g_209 p_1244->g_210 p_1244->g_155 p_1244->g_623.f2 p_1244->g_384 p_1244->g_99 p_1244->g_202 p_1244->g_748 p_1244->g_492 p_1244->g_326.f4 p_1244->g_738 p_1244->g_697 p_1244->g_1039 p_1244->g_749 p_1244->g_1043 p_1244->g_935 p_1244->g_1073 p_1244->g_783.f1 p_1244->g_1086 p_1244->g_1087 p_1244->g_1044.f0 p_1244->g_228 p_1244->g_229 p_1244->g_160.f3 p_1244->g_171 p_1244->g_180 p_1244->g_213.f1 p_1244->g_109 p_1244->g_167.f1
 * writes: p_1244->g_35 p_1244->g_160.f3 p_1244->g_171 p_1244->g_75 p_1244->g_206 p_1244->g_99 p_1244->g_180 p_1244->g_750 p_1244->g_213.f1 p_1244->g_1044 p_1244->g_74 p_1244->g_109 p_1244->g_167.f1 p_1244->g_229
 */
int64_t  func_19(int64_t  p_20, uint32_t  p_21, int32_t  p_22, uint8_t  p_23, int8_t  p_24, struct S2 * p_1244)
{ /* block id: 12 */
    int64_t l_33 = 0x52E7865D4863FCCFL;
    int32_t *l_34 = &p_1244->g_35;
    int32_t **l_802 = &p_1244->g_74;
    int16_t *l_804 = &p_1244->g_186;
    uint16_t l_1005 = 0x3FB4L;
    uint64_t *l_1006 = &p_1244->g_780;
    int32_t l_1027 = 0x63979B1EL;
    uint8_t l_1040[2][4][8] = {{{3UL,0xB7L,0x02L,0xB1L,1UL,0xB1L,0x02L,0xB7L},{3UL,0xB7L,0x02L,0xB1L,1UL,0xB1L,0x02L,0xB7L},{3UL,0xB7L,0x02L,0xB1L,1UL,0xB1L,0x02L,0xB7L},{3UL,0xB7L,0x02L,0xB1L,1UL,0xB1L,0x02L,0xB7L}},{{3UL,0xB7L,0x02L,0xB1L,1UL,0xB1L,0x02L,0xB7L},{3UL,0xB7L,0x02L,0xB1L,1UL,0xB1L,0x02L,0xB7L},{3UL,0xB7L,0x02L,0xB1L,1UL,0xB1L,0x02L,0xB7L},{3UL,0xB7L,0x02L,0xB1L,1UL,0xB1L,0x02L,0xB7L}}};
    int32_t l_1051 = (-1L);
    int32_t l_1053 = 1L;
    int32_t l_1054 = 0x39B65D95L;
    int32_t l_1055 = 0x63597FBAL;
    struct S1 **l_1074 = &p_1244->g_824;
    int32_t l_1099 = 0x7F997BC9L;
    int32_t l_1100 = 0x2610DD36L;
    uint64_t l_1101[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1101[i] = 0x61D6F67A1B303160L;
lbl_1059:
    (*l_34) ^= l_33;
    for (p_21 = (-20); (p_21 < 35); ++p_21)
    { /* block id: 16 */
        int16_t *l_49 = (void*)0;
        int32_t l_784 = 0L;
        int8_t *l_785[4] = {&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3};
        int32_t **l_801 = &p_1244->g_74;
        int32_t ***l_800[8] = {&l_801,&l_801,&l_801,&l_801,&l_801,&l_801,&l_801,&l_801};
        int32_t l_803[2][10][4] = {{{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L}},{{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L},{1L,0x0D92B163L,1L,0x0D92B163L}}};
        int i, j, k;
        (1 + 1);
    }
    for (p_1244->g_160.f3 = 0; (p_1244->g_160.f3 <= (-9)); --p_1244->g_160.f3)
    { /* block id: 503 */
        int32_t l_1019 = 0x62B2BC9DL;
        int32_t l_1079 = 0x7943F466L;
        uint32_t l_1082[6];
        uint32_t l_1094 = 0xB5853AFDL;
        int32_t *l_1097 = &p_1244->g_75;
        int32_t *l_1098[3];
        int i;
        for (i = 0; i < 6; i++)
            l_1082[i] = 0x67E290A8L;
        for (i = 0; i < 3; i++)
            l_1098[i] = (void*)0;
        for (p_1244->g_171 = 0; (p_1244->g_171 >= 18); p_1244->g_171 = safe_add_func_int8_t_s_s(p_1244->g_171, 6))
        { /* block id: 506 */
            uint8_t *l_1016 = &p_1244->g_409;
            uint8_t **l_1015 = &l_1016;
            uint8_t **l_1023 = &l_1016;
            uint8_t ***l_1022 = &l_1023;
            int32_t l_1026 = (-5L);
            uint16_t *l_1028 = &l_1005;
            int32_t l_1033 = 0x59CFFBDBL;
            uint64_t **l_1067 = &l_1006;
            (***p_1244->g_203) |= ((**l_802) ^= 1L);
            (***p_1244->g_203) = (safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((**p_1244->g_209), (l_1015 != ((safe_mul_func_uint8_t_u_u((l_1019 || p_1244->g_623.f2), (((*p_1244->g_384)++) != 1UL))) , ((*l_1022) = (void*)0))))) , ((*l_1028) ^= ((safe_mul_func_uint16_t_u_u(((((l_1026 , 1UL) == ((p_23 > 0x31B9L) , l_1026)) | (**p_1244->g_202)) ^ l_1026), l_1027)) , (****p_1244->g_748)))), 1UL));
            if (((0x0DL <= (((*l_1028) &= ((safe_mul_func_uint8_t_u_u(p_1244->g_326.f4, ((+((-4L) == ((((**l_802) = p_23) != (safe_lshift_func_uint8_t_u_s(0x43L, 3))) && 0x547E36AE7A49DCE9L))) , l_1033))) || ((((safe_mul_func_uint8_t_u_u(p_20, 1L)) , (*p_1244->g_738)) , 0x15C4L) ^ p_20))) != p_20)) && l_1026))
            { /* block id: 515 */
                int8_t l_1036[2][6] = {{0x79L,0x79L,0x79L,0x79L,0x79L,0x79L},{0x79L,0x79L,0x79L,0x79L,0x79L,0x79L}};
                int i, j;
                if (l_1036[1][3])
                { /* block id: 516 */
                    (**l_802) = 1L;
                }
                else
                { /* block id: 518 */
                    for (p_1244->g_180 = 0; (p_1244->g_180 != 50); p_1244->g_180 = safe_add_func_int32_t_s_s(p_1244->g_180, 2))
                    { /* block id: 521 */
                        (*p_1244->g_749) = p_1244->g_1039;
                        return p_20;
                    }
                    return l_1040[1][2][5];
                }
            }
            else
            { /* block id: 527 */
                uint8_t l_1056 = 251UL;
                for (p_1244->g_213.f1 = 21; (p_1244->g_213.f1 == 17); p_1244->g_213.f1 = safe_sub_func_int32_t_s_s(p_1244->g_213.f1, 8))
                { /* block id: 530 */
                    int32_t l_1047 = 0x384BA807L;
                    int32_t l_1050 = (-1L);
                    int32_t l_1052 = (-1L);
                    uint64_t **l_1064 = &l_1006;
                    p_1244->g_1044 = p_1244->g_1043;
                    (*l_802) = (*l_802);
                    for (p_1244->g_109 = (-17); (p_1244->g_109 != 6); ++p_1244->g_109)
                    { /* block id: 535 */
                        int32_t *l_1048 = &p_1244->g_35;
                        int32_t *l_1049[10] = {&p_1244->g_35,&p_1244->g_35,&p_1244->g_35,&p_1244->g_35,&p_1244->g_35,&p_1244->g_35,&p_1244->g_35,&p_1244->g_35,&p_1244->g_35,&p_1244->g_35};
                        int i;
                        (*p_1244->g_205) |= l_1047;
                        l_1056--;
                        (*p_1244->g_74) &= ((void*)0 != l_1006);
                        if (p_1244->g_1043.f3)
                            goto lbl_1059;
                    }
                    (*p_1244->g_74) |= (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((p_23 ^= (*l_34)), ((void*)0 == l_1064))), p_22));
                }
                if ((*l_34))
                    break;
                l_1019 &= 1L;
            }
            if ((**p_1244->g_935))
            { /* block id: 547 */
                int32_t l_1083 = 0x6AE21C8DL;
                for (p_1244->g_167.f1 = 0; (p_1244->g_167.f1 == 8); p_1244->g_167.f1++)
                { /* block id: 550 */
                    uint64_t ***l_1068 = &l_1067;
                    uint64_t **l_1069 = &l_1006;
                    struct S1 *l_1070 = &p_1244->g_781;
                    struct S1 **l_1072 = &l_1070;
                    l_1069 = ((*l_1068) = l_1067);
                    (***p_1244->g_203) ^= 0x657B5585L;
                    if (l_1026)
                        break;
                    (*l_1072) = l_1070;
                }
                if ((p_1244->g_1073 , 0x13C00677L))
                { /* block id: 557 */
                    (*l_34) = ((*p_1244->g_384) == (((l_1074 != &p_1244->g_749) == (((l_1019 ^ ((*p_1244->g_74) = 0x49D5ED97L)) & (safe_rshift_func_uint8_t_u_s(p_1244->g_783.f1, 3))) == (safe_add_func_uint16_t_u_u(((*l_1028)--), (~p_24))))) || l_1082[5]));
                    if ((*l_34))
                        break;
                    return l_1083;
                }
                else
                { /* block id: 563 */
                    return p_20;
                }
            }
            else
            { /* block id: 566 */
                int64_t **l_1084[7] = {&p_1244->g_738,&p_1244->g_738,&p_1244->g_738,&p_1244->g_738,&p_1244->g_738,&p_1244->g_738,&p_1244->g_738};
                int64_t ***l_1085 = &l_1084[4];
                int32_t *l_1090 = &l_1051;
                int i;
                (***p_1244->g_203) = (((*l_1085) = l_1084[4]) == &p_1244->g_738);
                (*p_1244->g_749) = (p_1244->g_1086 , p_1244->g_1087);
                if (p_21)
                    continue;
                for (p_1244->g_229 = (-12); (p_1244->g_229 == (-3)); p_1244->g_229 = safe_add_func_int64_t_s_s(p_1244->g_229, 2))
                { /* block id: 573 */
                    (*l_802) = l_1090;
                    for (p_1244->g_1044.f0 = 8; (p_1244->g_1044.f0 >= 58); p_1244->g_1044.f0 = safe_add_func_uint8_t_u_u(p_1244->g_1044.f0, 2))
                    { /* block id: 577 */
                        int8_t l_1093 = (-1L);
                        if (p_1244->g_1044.f0)
                            goto lbl_1059;
                        l_1093 = 4L;
                    }
                }
            }
        }
        ++l_1094;
        l_1101[0]--;
    }
    return (*p_1244->g_228);
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_167.f0 p_1244->g_74 p_1244->g_203 p_1244->g_204 p_1244->g_205 p_1244->g_825 p_1244->g_80.f0 p_1244->g_838 p_1244->g_718 p_1244->g_206 p_1244->g_846 p_1244->g_99 p_1244->g_824 p_1244->g_492 p_1244->g_209 p_1244->g_210 p_1244->g_155 p_1244->g_384 p_1244->g_186 p_1244->g_138.f3 p_1244->g_326.f2 p_1244->g_381 p_1244->g_35 p_1244->g_955 p_1244->g_80.f1 p_1244->g_944.f1 p_1244->g_845 p_1244->g_806 p_1244->g_979 p_1244->g_981 p_1244->g_943.f1 p_1244->g_735
 * writes: p_1244->g_167.f0 p_1244->g_718 p_1244->g_206 p_1244->g_824 p_1244->g_80.f0 p_1244->g_838 p_1244->g_846 p_1244->g_99 p_1244->g_205 p_1244->g_2 p_1244->g_719 p_1244->g_35 p_1244->g_497.f3 p_1244->g_845 p_1244->g_74 p_1244->g_980 p_1244->g_943.f1 p_1244->g_735
 */
int32_t  func_38(int32_t  p_39, uint64_t  p_40, struct S2 * p_1244)
{ /* block id: 392 */
    struct S1 *l_822 = &p_1244->g_781;
    int32_t l_835[4][4][7] = {{{1L,6L,1L,1L,6L,1L,1L},{1L,6L,1L,1L,6L,1L,1L},{1L,6L,1L,1L,6L,1L,1L},{1L,6L,1L,1L,6L,1L,1L}},{{1L,6L,1L,1L,6L,1L,1L},{1L,6L,1L,1L,6L,1L,1L},{1L,6L,1L,1L,6L,1L,1L},{1L,6L,1L,1L,6L,1L,1L}},{{1L,6L,1L,1L,6L,1L,1L},{1L,6L,1L,1L,6L,1L,1L},{1L,6L,1L,1L,6L,1L,1L},{1L,6L,1L,1L,6L,1L,1L}},{{1L,6L,1L,1L,6L,1L,1L},{1L,6L,1L,1L,6L,1L,1L},{1L,6L,1L,1L,6L,1L,1L},{1L,6L,1L,1L,6L,1L,1L}}};
    uint16_t *l_931 = &p_1244->g_155;
    int8_t *l_952 = (void*)0;
    uint64_t *l_953 = &p_1244->g_944[7][6].f1;
    uint16_t ****l_963 = &p_1244->g_492;
    int32_t *l_982 = &l_835[3][2][5];
    int32_t *l_983 = &l_835[0][2][0];
    int32_t *l_984 = &p_1244->g_75;
    int32_t *l_985 = (void*)0;
    int32_t *l_986 = &p_1244->g_718;
    int32_t *l_987 = &p_1244->g_35;
    int32_t *l_988[7];
    uint8_t l_989 = 0x96L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_988[i] = &l_835[3][2][5];
    for (p_1244->g_167.f0 = 0; (p_1244->g_167.f0 < 6); p_1244->g_167.f0 = safe_add_func_int32_t_s_s(p_1244->g_167.f0, 5))
    { /* block id: 395 */
        int64_t *l_821 = &p_1244->g_697;
        int32_t l_836 = 0x3F2A31B1L;
        int32_t l_837[7][1][10] = {{{0x04C46C9BL,0x357B9CA8L,0x357B9CA8L,0x04C46C9BL,(-7L),0L,0L,(-7L),0x04C46C9BL,0x357B9CA8L}},{{0x04C46C9BL,0x357B9CA8L,0x357B9CA8L,0x04C46C9BL,(-7L),0L,0L,(-7L),0x04C46C9BL,0x357B9CA8L}},{{0x04C46C9BL,0x357B9CA8L,0x357B9CA8L,0x04C46C9BL,(-7L),0L,0L,(-7L),0x04C46C9BL,0x357B9CA8L}},{{0x04C46C9BL,0x357B9CA8L,0x357B9CA8L,0x04C46C9BL,(-7L),0L,0L,(-7L),0x04C46C9BL,0x357B9CA8L}},{{0x04C46C9BL,0x357B9CA8L,0x357B9CA8L,0x04C46C9BL,(-7L),0L,0L,(-7L),0x04C46C9BL,0x357B9CA8L}},{{0x04C46C9BL,0x357B9CA8L,0x357B9CA8L,0x04C46C9BL,(-7L),0L,0L,(-7L),0x04C46C9BL,0x357B9CA8L}},{{0x04C46C9BL,0x357B9CA8L,0x357B9CA8L,0x04C46C9BL,(-7L),0L,0L,(-7L),0x04C46C9BL,0x357B9CA8L}}};
        int32_t *l_841 = &p_1244->g_75;
        int32_t *l_842 = &l_835[3][0][3];
        int32_t *l_843 = (void*)0;
        int32_t *l_844[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_844[i] = &l_835[3][2][5];
        (***p_1244->g_203) = ((&p_1244->g_697 == l_821) , ((*p_1244->g_74) = p_40));
        (*p_1244->g_825) = l_822;
        for (p_1244->g_80.f0 = (-28); (p_1244->g_80.f0 <= 18); ++p_1244->g_80.f0)
        { /* block id: 401 */
            int64_t l_828 = 0L;
            int32_t *l_829 = &p_1244->g_718;
            int32_t *l_830 = &p_1244->g_75;
            int32_t *l_831 = &p_1244->g_35;
            int32_t *l_832 = (void*)0;
            int32_t *l_833 = &p_1244->g_75;
            int32_t *l_834[7][2][10] = {{{&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_75,&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_4,&p_1244->g_4,&p_1244->g_4},{&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_75,&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_4,&p_1244->g_4,&p_1244->g_4}},{{&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_75,&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_4,&p_1244->g_4,&p_1244->g_4},{&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_75,&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_4,&p_1244->g_4,&p_1244->g_4}},{{&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_75,&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_4,&p_1244->g_4,&p_1244->g_4},{&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_75,&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_4,&p_1244->g_4,&p_1244->g_4}},{{&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_75,&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_4,&p_1244->g_4,&p_1244->g_4},{&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_75,&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_4,&p_1244->g_4,&p_1244->g_4}},{{&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_75,&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_4,&p_1244->g_4,&p_1244->g_4},{&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_75,&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_4,&p_1244->g_4,&p_1244->g_4}},{{&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_75,&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_4,&p_1244->g_4,&p_1244->g_4},{&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_75,&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_4,&p_1244->g_4,&p_1244->g_4}},{{&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_75,&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_4,&p_1244->g_4,&p_1244->g_4},{&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_75,&p_1244->g_718,&p_1244->g_4,&p_1244->g_718,&p_1244->g_4,&p_1244->g_4,&p_1244->g_4}}};
            int i, j, k;
            ++p_1244->g_838;
            (**p_1244->g_204) |= (*l_829);
        }
        p_1244->g_846++;
    }
    for (p_1244->g_99 = 0; (p_1244->g_99 <= 8); p_1244->g_99 += 1)
    { /* block id: 409 */
        struct S1 *l_854 = (void*)0;
        int32_t l_861[7] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
        uint32_t l_886 = 0x8593B52BL;
        int16_t l_902[3][6] = {{0x02B2L,0x3940L,0L,0x3B55L,0x3940L,0x3B55L},{0x02B2L,0x3940L,0L,0x3B55L,0x3940L,0x3B55L},{0x02B2L,0x3940L,0L,0x3B55L,0x3940L,0x3B55L}};
        uint32_t l_915[5] = {0x038EBDAEL,0x038EBDAEL,0x038EBDAEL,0x038EBDAEL,0x038EBDAEL};
        uint16_t ****l_964 = (void*)0;
        uint16_t *****l_969 = &p_1244->g_748;
        int8_t l_970[10] = {0x13L,0x13L,0x13L,0x13L,0x13L,0x13L,0x13L,0x13L,0x13L,0x13L};
        int i, j;
        (*p_1244->g_204) = (void*)0;
        for (p_1244->g_846 = 0; (p_1244->g_846 <= 8); p_1244->g_846 += 1)
        { /* block id: 413 */
            uint32_t l_851 = 0x656DDC7CL;
            int8_t l_855 = 0L;
            int32_t l_856[9][7][4] = {{{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L}},{{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L}},{{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L}},{{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L}},{{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L}},{{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L}},{{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L}},{{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L}},{{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L},{1L,1L,0x55552784L,8L}}};
            uint32_t *l_857[8][10][1] = {{{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184}},{{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184}},{{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184}},{{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184}},{{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184}},{{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184}},{{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184}},{{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184},{&p_1244->g_184}}};
            int16_t *l_858 = &p_1244->g_719;
            uint64_t l_962 = 18446744073709551615UL;
            int16_t l_971 = 0x35A9L;
            int i, j, k;
            if ((safe_lshift_func_int16_t_s_u((l_851 >= ((((*l_858) = (0x90113A5CL ^ (p_1244->g_2[2] = (safe_add_func_uint64_t_u_u(((*p_1244->g_825) != l_854), ((((l_856[8][0][0] = l_855) , (***p_1244->g_492)) | 0x2D07L) < (*p_1244->g_384))))))) == (safe_rshift_func_int16_t_s_u(((l_861[2] >= p_1244->g_186) , p_1244->g_138.f3), 15))) < 0x499FF3EEL)), (*p_1244->g_210))))
            { /* block id: 417 */
                uint32_t *l_876 = (void*)0;
                int32_t l_887 = 0x2C617664L;
                uint16_t **l_933 = &p_1244->g_210;
                for (p_40 = 1; (p_40 <= 5); p_40 += 1)
                { /* block id: 420 */
                    uint32_t **l_877 = &l_876;
                    uint8_t *l_888[6] = {&p_1244->g_409,&p_1244->g_409,&p_1244->g_409,&p_1244->g_409,&p_1244->g_409,&p_1244->g_409};
                    int32_t l_889 = 0x2823BC9BL;
                    int32_t *l_890 = &l_856[8][0][0];
                    int8_t *l_899 = &p_1244->g_548[0][0][1].f3;
                    int32_t *l_945 = &p_1244->g_718;
                    int i;
                    (1 + 1);
                }
                return p_40;
            }
            else
            { /* block id: 447 */
                int64_t **l_949 = &p_1244->g_738;
                int64_t ***l_948 = &l_949;
                struct S0 **l_950 = &p_1244->g_161;
                int8_t *l_951 = (void*)0;
                int32_t *l_954 = &p_1244->g_35;
                (*l_954) &= (((((l_835[1][1][1] = ((((safe_lshift_func_uint8_t_u_s((p_39 < ((p_1244->g_326.f2 || (((((p_40 = (*p_1244->g_381)) , ((*l_948) = &p_1244->g_738)) == (((void*)0 != l_950) , &p_1244->g_738)) < (l_951 == l_952)) , (-5L))) <= (*p_1244->g_74))), p_39)) <= p_1244->g_80.f0) | (-1L)) & p_39)) == (***p_1244->g_492)) ^ p_39) , (void*)0) == l_953);
                (*p_1244->g_74) &= (-1L);
            }
            for (l_855 = 0; (l_855 <= 0); l_855 += 1)
            { /* block id: 456 */
                return l_835[3][3][0];
            }
            if (p_39)
                continue;
            if (p_1244->g_955)
            { /* block id: 460 */
                uint16_t l_967 = 0xDF34L;
                int8_t *l_968 = &p_1244->g_497[2][2].f3;
                (*p_1244->g_74) ^= (0x5B49L & (safe_add_func_uint32_t_u_u(((((0xFE26L && (((l_969 = ((safe_lshift_func_int8_t_s_u((l_962 && (p_39 < (((l_963 == l_964) == ((safe_mul_func_int8_t_s_s(((*l_968) = (l_967 || (p_1244->g_80.f1 >= (l_886 <= 0x7D32L)))), p_39)) , 0x370FL)) >= p_1244->g_944[7][6].f1))), p_40)) , &p_1244->g_748)) == &p_1244->g_748) != l_970[8])) != 0x36724206L) != p_39) && p_39), 0x6EBAEBD0L)));
                if (l_835[3][2][5])
                    break;
                return p_40;
            }
            else
            { /* block id: 466 */
                for (p_1244->g_845 = 1; (p_1244->g_845 <= 5); p_1244->g_845 += 1)
                { /* block id: 469 */
                    uint16_t l_975 = 0UL;
                    l_971 = p_39;
                    if ((*p_1244->g_74))
                    { /* block id: 471 */
                        int32_t *l_972 = &l_856[6][2][0];
                        int32_t *l_973 = &p_1244->g_35;
                        int32_t *l_974[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_974[i] = &l_856[8][0][0];
                        (*p_1244->g_74) = ((void*)0 != &p_1244->g_387[4]);
                        l_975--;
                    }
                    else
                    { /* block id: 474 */
                        int32_t **l_978 = &p_1244->g_74;
                        p_39 = (-1L);
                        (*p_1244->g_979) = ((*l_978) = (*p_1244->g_806));
                    }
                }
                (*p_1244->g_981) = &p_39;
                for (p_1244->g_943.f1 = 0; (p_1244->g_943.f1 <= 0); p_1244->g_943.f1 += 1)
                { /* block id: 483 */
                    int i;
                    p_1244->g_735[p_1244->g_99] = p_1244->g_735[p_1244->g_99];
                }
                return p_39;
            }
        }
    }
    l_989--;
    return p_40;
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_806 p_1244->g_80.f3 p_1244->g_205 p_1244->g_206 p_1244->g_783.f1 p_1244->g_204 p_1244->g_35 p_1244->g_74 p_1244->g_718
 * writes: p_1244->g_74 p_1244->g_80.f3 p_1244->g_206 p_1244->g_783.f1 p_1244->g_718 p_1244->g_229 p_1244->g_35
 */
int8_t  func_43(int16_t * p_44, int8_t  p_45, uint16_t  p_46, int16_t * p_47, int64_t  p_48, struct S2 * p_1244)
{ /* block id: 375 */
    int32_t *l_805 = &p_1244->g_718;
    (*p_1244->g_806) = l_805;
    for (p_1244->g_80.f3 = 0; (p_1244->g_80.f3 >= (-15)); p_1244->g_80.f3 = safe_sub_func_uint64_t_u_u(p_1244->g_80.f3, 7))
    { /* block id: 379 */
        uint8_t l_809 = 0UL;
        (*p_1244->g_205) |= ((-4L) <= l_809);
        if (p_45)
            break;
        for (p_1244->g_783.f1 = 15; (p_1244->g_783.f1 < 15); p_1244->g_783.f1 = safe_add_func_int16_t_s_s(p_1244->g_783.f1, 6))
        { /* block id: 384 */
            uint32_t l_814 = 4294967295UL;
            int64_t *l_815 = (void*)0;
            int64_t *l_816 = &p_1244->g_229;
            int32_t *l_817 = &p_1244->g_35;
            int8_t l_818 = 0x12L;
            (*l_817) &= (safe_lshift_func_uint8_t_u_u((l_814 || (0x3F5065A05CA7A825L != ((*l_816) = (l_814 <= ((*l_805) = (**p_1244->g_204)))))), 5));
            (*p_1244->g_74) &= l_818;
        }
    }
    return p_48;
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_35 p_1244->g_610.f0 p_1244->g_213.f0 p_1244->g_749 p_1244->g_172 p_1244->g_384 p_1244->g_99 p_1244->g_74 p_1244->g_75 p_1244->g_738 p_1244->g_697 p_1244->g_32 p_1244->g_762 p_1244->g_2 p_1244->g_774 p_1244->g_228 p_1244->g_229 p_1244->g_160.f1 p_1244->g_381 p_1244->g_80.f0 p_1244->g_204 p_1244->g_205 p_1244->g_206 p_1244->g_184 p_1244->g_209 p_1244->g_210 p_1244->g_155 p_1244->g_387 p_1244->g_272 p_1244->g_409 p_1244->g_413 p_1244->g_414 p_1244->g_437 p_1244->g_213.f3 p_1244->g_463 p_1244->g_138.f0 p_1244->g_326.f0 p_1244->g_80.f1 p_1244->g_109 p_1244->g_213.f4 p_1244->g_326.f3 p_1244->g_160.f0 p_1244->g_497 p_1244->g_171 p_1244->g_501 p_1244->g_138.f4 p_1244->g_138.f3 p_1244->g_530 p_1244->g_102 p_1244->g_80 p_1244->g_492 p_1244->g_548 p_1244->g_186 p_1244->g_326.f1 p_1244->g_582 p_1244->g_160.f3 p_1244->g_180 p_1244->g_623 p_1244->g_624 p_1244->g_610 p_1244->g_775
 * writes: p_1244->g_35 p_1244->g_748 p_1244->g_32 p_1244->g_762 p_1244->g_2 p_1244->g_750 p_1244->g_229 p_1244->g_155 p_1244->g_145 p_1244->g_74 p_1244->g_277 p_1244->g_326.f3 p_1244->g_437 p_1244->g_138.f0 p_1244->g_184 p_1244->g_75 p_1244->g_206 p_1244->g_167.f0 p_1244->g_492 p_1244->g_171 p_1244->g_161 p_1244->g_213.f0 p_1244->g_160.f0 p_1244->g_109 p_1244->g_167.f3 p_1244->g_172 p_1244->g_99 p_1244->g_160.f3 p_1244->g_610 p_1244->g_780
 */
int64_t  func_50(int32_t  p_51, struct S2 * p_1244)
{ /* block id: 17 */
    int32_t *l_59[1];
    uint32_t l_632 = 4294967295UL;
    int16_t l_635 = (-1L);
    uint16_t l_677[3];
    int32_t l_694 = 0x1F367A4EL;
    uint8_t l_711[5][9][5] = {{{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L}},{{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L}},{{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L}},{{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L}},{{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L},{0x60L,1UL,0x99L,0UL,0xC9L}}};
    int64_t *l_739[3];
    uint16_t ****l_746 = (void*)0;
    uint16_t *****l_747[9][1][7] = {{{&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,(void*)0}},{{&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,(void*)0}},{{&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,(void*)0}},{{&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,(void*)0}},{{&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,(void*)0}},{{&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,(void*)0}},{{&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,(void*)0}},{{&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,(void*)0}},{{&l_746,&l_746,&l_746,&l_746,&l_746,&l_746,(void*)0}}};
    uint16_t l_757 = 3UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_59[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_677[i] = 0x1238L;
    for (i = 0; i < 3; i++)
        l_739[i] = &p_1244->g_697;
    for (p_1244->g_35 = 3; (p_1244->g_35 == 19); ++p_1244->g_35)
    { /* block id: 20 */
        int32_t *l_69 = &p_1244->g_5;
        uint32_t *l_179 = &p_1244->g_180;
        uint32_t *l_183 = &p_1244->g_184;
        int16_t *l_185 = &p_1244->g_186;
        volatile struct S0 *l_626 = &p_1244->g_625;
        int32_t l_636 = 0x10297169L;
        uint64_t *l_641 = (void*)0;
        uint64_t *l_642 = &p_1244->g_99;
        int32_t l_703 = (-4L);
        int32_t l_707[8][4];
        int32_t l_743 = 0x79BCB8DAL;
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 4; j++)
                l_707[i][j] = 0x698E2A12L;
        }
        (1 + 1);
    }
    if (((((safe_mul_func_int8_t_s_s(p_1244->g_610[3].f0, ((p_1244->g_213.f0 & ((p_1244->g_748 = l_746) == (void*)0)) >= ((void*)0 == p_1244->g_749)))) | p_51) <= (safe_div_func_int32_t_s_s((((safe_div_func_int8_t_s_s((+(0xCA56DD80L >= ((safe_rshift_func_int16_t_s_s(p_51, p_1244->g_172)) || (*p_1244->g_384)))), 0x3CL)) < p_51) < (*p_1244->g_74)), l_757))) && p_51))
    { /* block id: 346 */
        return (*p_1244->g_738);
    }
    else
    { /* block id: 348 */
        int16_t l_759 = 1L;
        int32_t l_760 = 0L;
        int32_t l_761[3];
        int64_t l_770[9][3] = {{0x415486752195E2E7L,0x415486752195E2E7L,0x415486752195E2E7L},{0x415486752195E2E7L,0x415486752195E2E7L,0x415486752195E2E7L},{0x415486752195E2E7L,0x415486752195E2E7L,0x415486752195E2E7L},{0x415486752195E2E7L,0x415486752195E2E7L,0x415486752195E2E7L},{0x415486752195E2E7L,0x415486752195E2E7L,0x415486752195E2E7L},{0x415486752195E2E7L,0x415486752195E2E7L,0x415486752195E2E7L},{0x415486752195E2E7L,0x415486752195E2E7L,0x415486752195E2E7L},{0x415486752195E2E7L,0x415486752195E2E7L,0x415486752195E2E7L},{0x415486752195E2E7L,0x415486752195E2E7L,0x415486752195E2E7L}};
        uint32_t *l_771 = (void*)0;
        uint32_t *l_772 = &p_1244->g_2[5];
        uint8_t *l_773[9][7] = {{&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172},{&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172},{&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172},{&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172},{&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172},{&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172},{&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172},{&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172},{&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172}};
        uint64_t *l_779[8] = {&p_1244->g_780,&p_1244->g_780,&p_1244->g_780,&p_1244->g_780,&p_1244->g_780,&p_1244->g_780,&p_1244->g_780,&p_1244->g_780};
        int i, j;
        for (i = 0; i < 3; i++)
            l_761[i] = 0x0466FD01L;
        for (p_1244->g_32 = 0; (p_1244->g_32 <= 0); p_1244->g_32 += 1)
        { /* block id: 351 */
            int32_t l_758[4] = {0x4EADEC83L,0x4EADEC83L,0x4EADEC83L,0x4EADEC83L};
            int32_t **l_765 = &l_59[0];
            int i;
            p_1244->g_762++;
            (*l_765) = l_59[p_1244->g_32];
        }
        (*p_1244->g_749) = (((&p_1244->g_109 != (l_773[6][6] = ((4UL != ((0x2A6D8115L || 4294967290UL) || ((*l_772) &= l_770[7][2]))) , &p_1244->g_172))) & p_51) , p_1244->g_774[0][1]);
        l_760 |= (p_51 & (l_761[2] = (((*p_1244->g_210) = ((((((func_55((*p_1244->g_228), &l_761[2], p_1244->g_160.f1, p_1244) , p_1244->g_775) , (void*)0) == (void*)0) != ((p_1244->g_780 = (safe_add_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s((p_1244->g_738 == (void*)0))), p_1244->g_180))) == 0x3A3A6FCDEC373786L)) && (-9L)) && 0x0CD5L)) > l_770[1][2])));
    }
    return (*p_1244->g_738);
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_381 p_1244->g_99 p_1244->g_229 p_1244->g_80.f0 p_1244->g_204 p_1244->g_205 p_1244->g_206 p_1244->g_184 p_1244->g_209 p_1244->g_210 p_1244->g_155 p_1244->g_387 p_1244->g_272 p_1244->g_409 p_1244->g_145 p_1244->g_413 p_1244->g_414 p_1244->g_326.f3 p_1244->g_437 p_1244->g_138.f0 p_1244->g_228 p_1244->g_75 p_1244->g_213.f3 p_1244->g_384 p_1244->g_463 p_1244->g_326.f0 p_1244->g_80.f1 p_1244->g_109 p_1244->g_167.f0 p_1244->g_213.f4 p_1244->g_160.f0 p_1244->g_497 p_1244->g_171 p_1244->g_501 p_1244->g_213.f0 p_1244->g_138.f4 p_1244->g_138.f3 p_1244->g_530 p_1244->g_102 p_1244->g_80 p_1244->g_492 p_1244->g_548 p_1244->g_186 p_1244->g_326.f1 p_1244->g_582 p_1244->g_160.f3 p_1244->g_180 p_1244->g_32 p_1244->g_623 p_1244->g_624 p_1244->g_610
 * writes: p_1244->g_229 p_1244->g_155 p_1244->g_145 p_1244->g_74 p_1244->g_277 p_1244->g_326.f3 p_1244->g_437 p_1244->g_138.f0 p_1244->g_184 p_1244->g_75 p_1244->g_206 p_1244->g_167.f0 p_1244->g_492 p_1244->g_171 p_1244->g_161 p_1244->g_213.f0 p_1244->g_160.f0 p_1244->g_109 p_1244->g_167.f3 p_1244->g_172 p_1244->g_99 p_1244->g_160.f3 p_1244->g_610
 */
struct S1  func_55(int64_t  p_56, int32_t * p_57, uint64_t  p_58, struct S2 * p_1244)
{ /* block id: 180 */
    int64_t *l_400 = &p_1244->g_229;
    int32_t l_405 = 0x301ACBECL;
    int8_t l_406 = (-1L);
    uint8_t *l_407 = (void*)0;
    uint8_t *l_408[3][2][10] = {{{&p_1244->g_172,&p_1244->g_172,(void*)0,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,(void*)0,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172},{&p_1244->g_172,&p_1244->g_172,(void*)0,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,(void*)0,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172}},{{&p_1244->g_172,&p_1244->g_172,(void*)0,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,(void*)0,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172},{&p_1244->g_172,&p_1244->g_172,(void*)0,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,(void*)0,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172}},{{&p_1244->g_172,&p_1244->g_172,(void*)0,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,(void*)0,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172},{&p_1244->g_172,&p_1244->g_172,(void*)0,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172,(void*)0,&p_1244->g_172,&p_1244->g_172,&p_1244->g_172}}};
    int32_t l_435[8];
    int64_t l_444 = 0x5133554188E9C54DL;
    uint64_t l_446 = 0xCD515E7FF9B10BBFL;
    uint8_t **l_459 = &l_408[0][1][3];
    uint8_t ***l_458 = &l_459;
    uint16_t **l_480 = &p_1244->g_210;
    int32_t l_482 = 1L;
    int16_t l_561 = 8L;
    uint32_t l_596 = 1UL;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_435[i] = (-3L);
    if (((((p_58 & (safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(((*p_1244->g_210) &= (((l_405 = (safe_mul_func_int8_t_s_s((((*p_1244->g_381) & ((*l_400) |= p_56)) >= (safe_lshift_func_int16_t_s_s(p_1244->g_80.f0, (((l_405 || ((**p_1244->g_204) != p_1244->g_184)) > l_405) != (((void*)0 != (*p_1244->g_209)) >= l_406))))), l_406))) > 0x4FL) || 0xAA67L)), p_1244->g_387[4])) || p_1244->g_272[2][2][1]), 0x1F281B2AL)), 5))) != p_1244->g_409) == p_58) > l_406))
    { /* block id: 184 */
        int16_t l_428 = 0L;
        int32_t l_433 = 0x20F1700FL;
        int32_t l_445 = (-2L);
        for (p_1244->g_145 = 0; (p_1244->g_145 > 37); p_1244->g_145 = safe_add_func_int8_t_s_s(p_1244->g_145, 8))
        { /* block id: 187 */
            int32_t **l_412 = (void*)0;
            int32_t l_427 = 0x59CFC3D3L;
            int32_t l_430[1][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_430[i][j] = 0x187F7343L;
            }
            (*p_1244->g_413) = &l_405;
            p_1244->g_277 = p_1244->g_414[1];
            for (p_1244->g_326.f3 = 21; (p_1244->g_326.f3 == 22); p_1244->g_326.f3 = safe_add_func_int64_t_s_s(p_1244->g_326.f3, 1))
            { /* block id: 192 */
                int32_t l_429 = 0x565C0A1CL;
                int32_t l_431 = 6L;
                int32_t l_432 = 1L;
                int32_t l_434 = 0x455AD3C0L;
                int32_t *l_441 = (void*)0;
                int32_t *l_442[10][8][2] = {{{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]}},{{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]}},{{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]}},{{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]}},{{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]}},{{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]}},{{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]}},{{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]}},{{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]}},{{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]},{(void*)0,&l_435[1]}}};
                int32_t l_443 = 0L;
                int i, j, k;
                for (p_1244->g_155 = 0; (p_1244->g_155 <= 1); p_1244->g_155 += 1)
                { /* block id: 195 */
                    int32_t *l_417 = &p_1244->g_75;
                    int32_t *l_418 = &l_405;
                    int32_t *l_419 = &l_405;
                    int32_t *l_420 = (void*)0;
                    int32_t *l_421 = &p_1244->g_75;
                    int32_t *l_422 = &l_405;
                    int32_t *l_423 = &p_1244->g_75;
                    int32_t *l_424 = &p_1244->g_75;
                    int32_t *l_425 = (void*)0;
                    int32_t *l_426[8][4] = {{&p_1244->g_35,&l_405,&p_1244->g_35,&p_1244->g_35},{&p_1244->g_35,&l_405,&p_1244->g_35,&p_1244->g_35},{&p_1244->g_35,&l_405,&p_1244->g_35,&p_1244->g_35},{&p_1244->g_35,&l_405,&p_1244->g_35,&p_1244->g_35},{&p_1244->g_35,&l_405,&p_1244->g_35,&p_1244->g_35},{&p_1244->g_35,&l_405,&p_1244->g_35,&p_1244->g_35},{&p_1244->g_35,&l_405,&p_1244->g_35,&p_1244->g_35},{&p_1244->g_35,&l_405,&p_1244->g_35,&p_1244->g_35}};
                    int64_t l_436 = 0x0C0D01EB2A392CF7L;
                    int i, j;
                    ++p_1244->g_437;
                    for (p_1244->g_138.f0 = 0; (p_1244->g_138.f0 <= 3); p_1244->g_138.f0 += 1)
                    { /* block id: 199 */
                        int32_t **l_440 = &l_417;
                        int i, j, k;
                        (*l_440) = p_57;
                        if (p_1244->g_272[(p_1244->g_155 + 1)][(p_1244->g_155 + 3)][(p_1244->g_155 + 4)])
                            break;
                        if (l_433)
                            continue;
                    }
                }
                ++l_446;
            }
            if ((*p_1244->g_205))
                continue;
        }
    }
    else
    { /* block id: 209 */
        uint16_t ***l_455 = (void*)0;
        uint32_t *l_456 = &p_1244->g_184;
        int32_t l_457 = (-1L);
        int32_t *l_460[2][9][3] = {{{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5}},{{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5},{&p_1244->g_35,(void*)0,&p_1244->g_5}}};
        struct S0 *l_500 = &p_1244->g_213;
        uint8_t *l_516[6];
        int16_t l_545 = (-7L);
        int32_t **l_550[7][7] = {{&l_460[0][7][0],&l_460[0][7][0],&l_460[0][8][0],&l_460[0][7][0],&l_460[0][7][0],&l_460[0][7][0],&l_460[0][7][0]},{&l_460[0][7][0],&l_460[0][7][0],&l_460[0][8][0],&l_460[0][7][0],&l_460[0][7][0],&l_460[0][7][0],&l_460[0][7][0]},{&l_460[0][7][0],&l_460[0][7][0],&l_460[0][8][0],&l_460[0][7][0],&l_460[0][7][0],&l_460[0][7][0],&l_460[0][7][0]},{&l_460[0][7][0],&l_460[0][7][0],&l_460[0][8][0],&l_460[0][7][0],&l_460[0][7][0],&l_460[0][7][0],&l_460[0][7][0]},{&l_460[0][7][0],&l_460[0][7][0],&l_460[0][8][0],&l_460[0][7][0],&l_460[0][7][0],&l_460[0][7][0],&l_460[0][7][0]},{&l_460[0][7][0],&l_460[0][7][0],&l_460[0][8][0],&l_460[0][7][0],&l_460[0][7][0],&l_460[0][7][0],&l_460[0][7][0]},{&l_460[0][7][0],&l_460[0][7][0],&l_460[0][8][0],&l_460[0][7][0],&l_460[0][7][0],&l_460[0][7][0],&l_460[0][7][0]}};
        int32_t ***l_549 = &l_550[0][0];
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_516[i] = &p_1244->g_109;
        (*p_1244->g_205) = (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((*l_456) |= ((*p_1244->g_228) || ((void*)0 != l_455))), l_457)), ((l_458 != &l_459) != (p_1244->g_75 |= l_457)))) & (safe_add_func_int8_t_s_s((p_1244->g_213.f3 , ((((void*)0 != &l_457) >= (*p_1244->g_384)) == p_1244->g_463)), 0x6FL))), 0x15L));
        for (p_1244->g_138.f0 = 2; (p_1244->g_138.f0 <= 7); p_1244->g_138.f0 += 1)
        { /* block id: 215 */
            uint16_t l_527 = 0x0275L;
            uint8_t **l_558 = (void*)0;
            uint32_t *l_572 = (void*)0;
            uint64_t l_585 = 0x139F8440585128E2L;
            struct S0 *l_587 = &p_1244->g_80;
            int32_t l_603 = (-6L);
            int i;
            if (l_435[p_1244->g_138.f0])
            { /* block id: 216 */
                uint16_t l_476 = 0xEFF0L;
                uint16_t **l_481 = (void*)0;
                uint8_t **l_483[6] = {&l_408[1][0][9],&l_408[0][0][3],&l_408[1][0][9],&l_408[1][0][9],&l_408[0][0][3],&l_408[1][0][9]};
                int i;
                l_435[p_1244->g_138.f0] = ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u(l_435[p_1244->g_138.f0], (((((((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((safe_add_func_uint32_t_u_u(((((((l_476 , ((~(safe_unary_minus_func_uint16_t_u((p_56 , p_58)))) , l_405)) > (((safe_mod_func_uint16_t_u_u(((!((void*)0 == &p_1244->g_210)) , ((l_480 = &p_1244->g_210) == l_481)), 0xCA34L)) || l_476) | 4294967295UL)) <= 0x44ED7F2A1B3A78B5L) > p_1244->g_326.f0) , 0x50L) != 0x84L), p_1244->g_80.f1)) & p_58) < p_1244->g_414[1].f0), 0x98E21DFBL)), l_482)) && 0x1131L) , l_476) , p_56) , (*l_458)) == l_483[5]) && (-5L)))), p_1244->g_155)), l_435[p_1244->g_138.f0])) & p_1244->g_109);
                for (p_1244->g_145 = 2; (p_1244->g_145 <= 7); p_1244->g_145 += 1)
                { /* block id: 221 */
                    uint16_t l_484[5] = {0xA0E5L,0xA0E5L,0xA0E5L,0xA0E5L,0xA0E5L};
                    uint8_t *l_515 = &p_1244->g_409;
                    int i;
                    for (p_1244->g_167.f0 = 0; (p_1244->g_167.f0 <= 7); p_1244->g_167.f0 += 1)
                    { /* block id: 224 */
                        int i;
                        if (l_435[p_1244->g_138.f0])
                            break;
                        (**p_1244->g_204) = ((7UL >= (*p_1244->g_228)) && (l_484[1] , ((safe_sub_func_uint8_t_u_u(l_476, ((safe_lshift_func_uint16_t_u_s(p_58, (safe_div_func_int8_t_s_s(((((l_476 , (~(((l_435[p_1244->g_138.f0] > 1L) && 0x12L) | p_1244->g_213.f4))) > p_1244->g_99) >= p_1244->g_326.f3) || p_58), p_58)))) != p_1244->g_160.f0))) , p_56)));
                        if (l_435[p_1244->g_138.f0])
                            continue;
                    }
                    for (l_457 = 6; (l_457 >= 0); l_457 -= 1)
                    { /* block id: 231 */
                        uint16_t ****l_491[1];
                        int16_t *l_498 = &p_1244->g_171;
                        int32_t **l_499 = &l_460[0][7][0];
                        uint32_t *l_528[5][4][2] = {{{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0},{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0},{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0},{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0}},{{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0},{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0},{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0},{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0}},{{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0},{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0},{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0},{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0}},{{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0},{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0},{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0},{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0}},{{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0},{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0},{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0},{&p_1244->g_213.f0,&p_1244->g_497[2][2].f0}}};
                        int64_t l_529 = (-10L);
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_491[i] = &l_455;
                        (*p_1244->g_501) = ((((l_435[p_1244->g_138.f0] = (((p_1244->g_492 = &p_1244->g_209) == ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_435[p_1244->g_138.f0] | ((*l_498) |= (((p_1244->g_497[2][2] , (-1L)) < p_56) < l_435[1]))), (((*l_499) = &p_1244->g_4) != (void*)0))), 1)) , (void*)0)) || p_1244->g_138.f0)) < 0xAEL) , (-5L)) , l_500);
                        (**p_1244->g_204) = (((((p_56 < 0x7DL) == ((safe_div_func_uint64_t_u_u((!(safe_sub_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(p_58)), l_435[p_1244->g_138.f0]))), ((*l_400) = ((--(**p_1244->g_209)) | ((l_476 , ((safe_sub_func_int64_t_s_s((((safe_lshift_func_int8_t_s_s(l_446, ((safe_mul_func_uint8_t_u_u(((l_516[2] = l_515) == ((p_1244->g_160.f0 = (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(p_58, (((((((p_1244->g_213.f0 &= (safe_mod_func_uint8_t_u_u((((void*)0 != l_455) ^ l_527), 255UL))) , p_1244->g_138.f4) ^ 1UL) != l_529) ^ 0xB097L) < 0x47E5CAB9L) != 0x08CFB0E0FCBE4BC1L))), 6)) , l_484[1]), p_1244->g_497[2][2].f1)), (-10L)))) , (void*)0)), l_435[2])) || l_484[1]))) || 0x695ADBCCL) && 0x2C1E5AE63E284FD3L), p_58)) != p_1244->g_138.f3)) | p_56))))) == 0x2003L)) != 0x02L) == l_406) || p_58);
                    }
                    return p_1244->g_530;
                }
                return p_1244->g_414[0];
            }
            else
            { /* block id: 247 */
                uint16_t l_535 = 0x505AL;
                int64_t *l_544 = &l_444;
                int32_t ***l_551 = (void*)0;
                int32_t l_605 = 1L;
                uint8_t l_607[10][10] = {{0x83L,0x7DL,0UL,0xEBL,0xEBL,0UL,0x7DL,0x83L,255UL,0xA2L},{0x83L,0x7DL,0UL,0xEBL,0xEBL,0UL,0x7DL,0x83L,255UL,0xA2L},{0x83L,0x7DL,0UL,0xEBL,0xEBL,0UL,0x7DL,0x83L,255UL,0xA2L},{0x83L,0x7DL,0UL,0xEBL,0xEBL,0UL,0x7DL,0x83L,255UL,0xA2L},{0x83L,0x7DL,0UL,0xEBL,0xEBL,0UL,0x7DL,0x83L,255UL,0xA2L},{0x83L,0x7DL,0UL,0xEBL,0xEBL,0UL,0x7DL,0x83L,255UL,0xA2L},{0x83L,0x7DL,0UL,0xEBL,0xEBL,0UL,0x7DL,0x83L,255UL,0xA2L},{0x83L,0x7DL,0UL,0xEBL,0xEBL,0UL,0x7DL,0x83L,255UL,0xA2L},{0x83L,0x7DL,0UL,0xEBL,0xEBL,0UL,0x7DL,0x83L,255UL,0xA2L},{0x83L,0x7DL,0UL,0xEBL,0xEBL,0UL,0x7DL,0x83L,255UL,0xA2L}};
                int i, j;
                (**p_1244->g_204) = (((*p_1244->g_102) , p_58) , (((p_1244->g_171 == l_435[p_1244->g_138.f0]) , (safe_mod_func_uint16_t_u_u(((***p_1244->g_492) |= (((!(*p_1244->g_228)) <= ((*l_544) ^= (p_56 == (safe_sub_func_int32_t_s_s((p_1244->g_80.f1 , (((l_535 == ((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((safe_div_func_uint8_t_u_u((p_1244->g_109 = ((((-4L) ^ 0x17L) & p_56) ^ l_527)), p_1244->g_80.f0)) > 0x2CL), l_535)), l_535)), 5)) , p_56)) , 8L) || 18446744073709551615UL)), l_535))))) && (*p_1244->g_205))), l_545))) , l_535));
                if ((p_56 >= (***p_1244->g_492)))
                { /* block id: 252 */
                    uint32_t l_562 = 4294967290UL;
                    int32_t l_573 = 0x1F8862A8L;
                    for (p_1244->g_109 = (-19); (p_1244->g_109 != 29); p_1244->g_109++)
                    { /* block id: 255 */
                        struct S1 *l_552 = &p_1244->g_530;
                        int8_t *l_555 = &p_1244->g_167.f3;
                        uint32_t **l_571[5][4] = {{&l_456,&l_456,&l_456,&l_456},{&l_456,&l_456,&l_456,&l_456},{&l_456,&l_456,&l_456,&l_456},{&l_456,&l_456,&l_456,&l_456},{&l_456,&l_456,&l_456,&l_456}};
                        int32_t l_574 = 1L;
                        int i, j;
                        (**p_1244->g_204) = ((((p_1244->g_548[0][0][1] , (&p_1244->g_277 != ((l_549 == l_551) , l_552))) , (safe_mod_func_int64_t_s_s(((*l_400) &= (l_446 == ((*l_555) = p_1244->g_138.f0))), (safe_mod_func_uint8_t_u_u((l_558 != (void*)0), p_58))))) , p_58) == p_58);
                        l_435[p_1244->g_138.f0] &= ((((((~((((safe_add_func_uint8_t_u_u((p_1244->g_186 | (l_562 = (p_1244->g_172 = l_561))), (((*p_1244->g_381) = 0x4A30F026EA3782CEL) < p_56))) > ((((safe_sub_func_int32_t_s_s(l_444, (safe_mod_func_uint8_t_u_u(((2UL == (safe_lshift_func_uint16_t_u_u(0x7615L, 11))) && 0xE408L), (safe_mul_func_uint16_t_u_u((((l_572 = p_57) != (void*)0) , p_58), 0x6DF1L)))))) , 0x3EL) != p_1244->g_80.f4) >= p_56)) && 0xF944F639L) | 0x13D98A3EL)) ^ p_1244->g_326.f1) > l_573) , l_574) == p_56) > (-2L));
                    }
                }
                else
                { /* block id: 265 */
                    uint32_t l_577[6] = {1UL,4294967291UL,1UL,1UL,4294967291UL,1UL};
                    int8_t *l_583 = (void*)0;
                    int8_t *l_584[9][1] = {{&p_1244->g_160.f3},{&p_1244->g_160.f3},{&p_1244->g_160.f3},{&p_1244->g_160.f3},{&p_1244->g_160.f3},{&p_1244->g_160.f3},{&p_1244->g_160.f3},{&p_1244->g_160.f3},{&p_1244->g_160.f3}};
                    int32_t l_586 = 1L;
                    int32_t ***l_601 = &l_550[2][2];
                    int32_t l_602[5][8][2] = {{{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)}},{{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)}},{{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)}},{{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)}},{{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)},{0x135BE4E4L,(-1L)}}};
                    int i, j, k;
                    (*p_1244->g_501) = ((p_56 <= ((((*p_1244->g_384) = (safe_mod_func_int32_t_s_s((l_586 = ((l_577[0] != (0x418DD2F87F33C68DL >= (p_56 > ((+((((*p_1244->g_210) ^= (safe_mul_func_int8_t_s_s(l_435[p_1244->g_138.f0], (safe_add_func_int8_t_s_s((p_1244->g_160.f3 &= (0x0D5330D0L & ((void*)0 != p_1244->g_582))), (0L >= p_58)))))) > 0xEC0CL) , l_535)) | l_585)))) , p_56)), 0x1080DC3AL))) | 18446744073709551615UL) >= 255UL)) , l_587);
                    for (p_1244->g_160.f3 = 0; (p_1244->g_160.f3 > (-8)); p_1244->g_160.f3--)
                    { /* block id: 273 */
                        int8_t l_604 = 0x09L;
                        int32_t l_606 = 1L;
                        l_603 ^= ((safe_sub_func_int32_t_s_s((*p_1244->g_205), (((((((void*)0 != &l_535) || 18446744073709551606UL) != (((((p_1244->g_180 , (safe_add_func_int8_t_s_s(0x30L, (safe_mod_func_int8_t_s_s(((l_596 , (safe_sub_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u(((p_58 , &p_1244->g_204) == l_601), p_1244->g_32)) == p_1244->g_99), l_435[p_1244->g_138.f0]))) > 0x23L), p_1244->g_138.f0))))) | p_56) >= l_602[2][6][0]) <= p_58) | 0x14F1EB53L)) != l_585) != (*p_1244->g_210)) == 0x02569676L))) < p_1244->g_213.f0);
                        --l_607[4][4];
                        p_1244->g_610[3] = p_1244->g_414[1];
                        p_57 = ((**l_549) = p_57);
                    }
                    (**l_601) = p_57;
                    return p_1244->g_623;
                }
            }
        }
        return p_1244->g_624;
    }
    (*p_1244->g_205) |= p_58;
    return p_1244->g_610[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_160.f1 p_1244->g_2 p_1244->g_32 p_1244->g_109 p_1244->g_201 p_1244->g_203 p_1244->g_205 p_1244->g_206 p_1244->g_167.f0 p_1244->g_171 p_1244->g_186 p_1244->g_204 p_1244->g_209 p_1244->g_138.f0 p_1244->g_213 p_1244->g_99 p_1244->g_228 p_1244->g_381
 * writes: p_1244->g_160.f1 p_1244->g_155 p_1244->g_206 p_1244->g_209 p_1244->g_138.f0 p_1244->g_80 p_1244->g_167.f3
 */
uint64_t  func_60(int32_t * p_61, int16_t  p_62, int16_t  p_63, int16_t * p_64, int32_t  p_65, struct S2 * p_1244)
{ /* block id: 96 */
    int32_t **l_198 = (void*)0;
    int32_t **l_200 = (void*)0;
    int32_t l_207 = 1L;
    uint16_t **l_224 = (void*)0;
    int32_t l_291 = 6L;
    struct S0 *l_325 = &p_1244->g_326;
    uint8_t *l_369 = (void*)0;
    uint64_t *l_378 = &p_1244->g_99;
    for (p_1244->g_160.f1 = 1; (p_1244->g_160.f1 <= 5); p_1244->g_160.f1 += 1)
    { /* block id: 99 */
        int32_t **l_197 = (void*)0;
        int32_t *l_232 = &l_207;
        int32_t l_249 = 0x7C415D9AL;
        int32_t l_267 = 1L;
        int32_t l_269 = 1L;
        uint32_t l_318 = 0UL;
        int32_t l_342 = 1L;
        int32_t l_343 = 0x79D980DCL;
        uint8_t *l_370[3];
        int i;
        for (i = 0; i < 3; i++)
            l_370[i] = &p_1244->g_172;
        if (p_1244->g_2[p_1244->g_160.f1])
        { /* block id: 100 */
            uint8_t *l_190 = &p_1244->g_109;
            int32_t ***l_199[2];
            uint16_t *l_208 = &p_1244->g_155;
            int i;
            for (i = 0; i < 2; i++)
                l_199[i] = &l_198;
            (***p_1244->g_203) = ((safe_sub_func_uint16_t_u_u(((*l_208) = (p_1244->g_32 && ((safe_unary_minus_func_int64_t_s(((void*)0 == l_190))) >= ((0x7D4BL <= ((safe_mul_func_int8_t_s_s((((((safe_add_func_uint32_t_u_u((((l_197 != (l_200 = (l_198 = l_198))) || p_1244->g_109) , p_63), (((p_63 , p_1244->g_201) != p_1244->g_203) , (*p_1244->g_205)))) && 4L) != l_207) >= l_207) >= p_65), p_1244->g_167.f0)) != p_1244->g_171)) >= l_207)))), (*p_64))) , 0x4DB673B3L);
        }
        else
        { /* block id: 105 */
            uint16_t **l_223 = (void*)0;
            uint16_t ***l_225 = &l_224;
            int8_t *l_226[2][4][9] = {{{&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3},{&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3},{&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3},{&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3}},{{&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3},{&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3},{&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3},{&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3,&p_1244->g_160.f3}}};
            int32_t l_227 = 0x451E9E2BL;
            int i, j, k;
            p_1244->g_209 = p_1244->g_209;
            for (p_1244->g_138.f0 = 0; (p_1244->g_138.f0 == 16); p_1244->g_138.f0 = safe_add_func_int64_t_s_s(p_1244->g_138.f0, 5))
            { /* block id: 109 */
                struct S0 *l_214 = &p_1244->g_80;
                (*l_214) = p_1244->g_213;
            }
            (**p_1244->g_204) = ((((p_1244->g_99 ^ p_1244->g_186) & ((((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(6UL, 1UL)), ((safe_sub_func_uint16_t_u_u(0xE030L, ((p_1244->g_167.f3 = (((safe_sub_func_uint64_t_u_u((l_223 != &p_1244->g_210), (((((*l_225) = l_224) != (void*)0) & 0x543B7BEBL) , 0x67431AA0B9C9FA5DL))) <= p_63) != p_63)) ^ 0x0AL))) >= p_65))) , (void*)0) == &p_1244->g_99) < l_227)) , p_1244->g_228) == &p_1244->g_229);
        }
        for (p_62 = 0; (p_62 > (-26)); p_62 = safe_sub_func_uint64_t_u_u(p_62, 3))
        { /* block id: 118 */
            int8_t l_235 = (-1L);
            int16_t *l_248[2][1][4] = {{{&p_1244->g_171,&p_1244->g_171,&p_1244->g_171,&p_1244->g_171}},{{&p_1244->g_171,&p_1244->g_171,&p_1244->g_171,&p_1244->g_171}}};
            int32_t l_265 = 0L;
            int8_t l_288 = (-5L);
            int32_t l_289 = (-1L);
            uint64_t *l_385 = (void*)0;
            int i, j, k;
            l_232 = p_61;
        }
        return (*p_1244->g_381);
    }
    return p_62;
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_32 p_1244->g_2 p_1244->g_3 p_1244->g_5 p_1244->g_99 p_1244->g_80.f1 p_1244->g_80.f2 p_1244->g_80.f4 p_1244->g_138.f3 p_1244->g_4 p_1244->g_74 p_1244->g_35 p_1244->g_75 p_1244->g_80.f0 p_1244->g_138.f2 p_1244->g_145 p_1244->g_138.f1 p_1244->g_167 p_1244->g_109 p_1244->g_138.f0 p_1244->g_171 p_1244->g_80.f3 p_1244->g_172 p_1244->g_160
 * writes: p_1244->g_32 p_1244->g_2 p_1244->g_74 p_1244->g_80.f0 p_1244->g_145 p_1244->g_75 p_1244->g_155 p_1244->g_161 p_1244->g_138.f1 p_1244->g_109 p_1244->g_171 p_1244->g_172 p_1244->g_160
 */
int32_t * func_66(int32_t  p_67, int32_t * p_68, struct S2 * p_1244)
{ /* block id: 21 */
    uint64_t l_121[10][10] = {{18446744073709551606UL,18446744073709551611UL,0xA9B552DC146C1EB2L,18446744073709551613UL,0UL,18446744073709551607UL,0xF944FCB04331347AL,0xA9B552DC146C1EB2L,0xBD7F02351AC1E00DL,0x269BC1C916487279L},{18446744073709551606UL,18446744073709551611UL,0xA9B552DC146C1EB2L,18446744073709551613UL,0UL,18446744073709551607UL,0xF944FCB04331347AL,0xA9B552DC146C1EB2L,0xBD7F02351AC1E00DL,0x269BC1C916487279L},{18446744073709551606UL,18446744073709551611UL,0xA9B552DC146C1EB2L,18446744073709551613UL,0UL,18446744073709551607UL,0xF944FCB04331347AL,0xA9B552DC146C1EB2L,0xBD7F02351AC1E00DL,0x269BC1C916487279L},{18446744073709551606UL,18446744073709551611UL,0xA9B552DC146C1EB2L,18446744073709551613UL,0UL,18446744073709551607UL,0xF944FCB04331347AL,0xA9B552DC146C1EB2L,0xBD7F02351AC1E00DL,0x269BC1C916487279L},{18446744073709551606UL,18446744073709551611UL,0xA9B552DC146C1EB2L,18446744073709551613UL,0UL,18446744073709551607UL,0xF944FCB04331347AL,0xA9B552DC146C1EB2L,0xBD7F02351AC1E00DL,0x269BC1C916487279L},{18446744073709551606UL,18446744073709551611UL,0xA9B552DC146C1EB2L,18446744073709551613UL,0UL,18446744073709551607UL,0xF944FCB04331347AL,0xA9B552DC146C1EB2L,0xBD7F02351AC1E00DL,0x269BC1C916487279L},{18446744073709551606UL,18446744073709551611UL,0xA9B552DC146C1EB2L,18446744073709551613UL,0UL,18446744073709551607UL,0xF944FCB04331347AL,0xA9B552DC146C1EB2L,0xBD7F02351AC1E00DL,0x269BC1C916487279L},{18446744073709551606UL,18446744073709551611UL,0xA9B552DC146C1EB2L,18446744073709551613UL,0UL,18446744073709551607UL,0xF944FCB04331347AL,0xA9B552DC146C1EB2L,0xBD7F02351AC1E00DL,0x269BC1C916487279L},{18446744073709551606UL,18446744073709551611UL,0xA9B552DC146C1EB2L,18446744073709551613UL,0UL,18446744073709551607UL,0xF944FCB04331347AL,0xA9B552DC146C1EB2L,0xBD7F02351AC1E00DL,0x269BC1C916487279L},{18446744073709551606UL,18446744073709551611UL,0xA9B552DC146C1EB2L,18446744073709551613UL,0UL,18446744073709551607UL,0xF944FCB04331347AL,0xA9B552DC146C1EB2L,0xBD7F02351AC1E00DL,0x269BC1C916487279L}};
    int32_t l_126[6][10][4] = {{{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL}},{{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL}},{{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL}},{{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL}},{{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL}},{{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL},{0x10806AD6L,0L,(-2L),0x2AD6DE6BL}}};
    int32_t *l_173 = &l_126[3][7][1];
    int32_t **l_174[7][8][4] = {{{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0}},{{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0}},{{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0}},{{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0}},{{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0}},{{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0}},{{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0},{&l_173,&p_1244->g_74,&p_1244->g_74,(void*)0}}};
    int i, j, k;
    for (p_67 = 0; (p_67 <= 5); p_67 += 1)
    { /* block id: 24 */
        int32_t l_114[5][3] = {{0x3A683201L,0x3A683201L,0x3A683201L},{0x3A683201L,0x3A683201L,0x3A683201L},{0x3A683201L,0x3A683201L,0x3A683201L},{0x3A683201L,0x3A683201L,0x3A683201L},{0x3A683201L,0x3A683201L,0x3A683201L}};
        uint8_t *l_119 = (void*)0;
        uint8_t *l_120[2];
        struct S0 *l_137 = &p_1244->g_138;
        int32_t **l_141[6][8][5] = {{{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74}},{{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74}},{{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74}},{{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74}},{{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74}},{{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74},{&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,&p_1244->g_74}}};
        int32_t **l_146[9][10] = {{(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0},{(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0},{(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0},{(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0},{(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0},{(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0},{(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0},{(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0},{(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0,(void*)0,&p_1244->g_74,&p_1244->g_74,&p_1244->g_74,(void*)0}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_120[i] = &p_1244->g_109;
        for (p_1244->g_32 = 0; p_1244->g_32 < 6; p_1244->g_32 += 1)
        {
            p_1244->g_2[p_1244->g_32] = 0x80B3897EL;
        }
        for (p_1244->g_32 = 0; (p_1244->g_32 <= 5); p_1244->g_32 += 1)
        { /* block id: 28 */
            int32_t *l_113[1][6][1] = {{{&p_1244->g_75},{&p_1244->g_75},{&p_1244->g_75},{&p_1244->g_75},{&p_1244->g_75},{&p_1244->g_75}}};
            int i, j, k;
            l_114[0][2] = func_70(p_1244->g_2[p_1244->g_32], p_1244->g_32, p_1244);
        }
        l_126[3][7][1] &= (safe_add_func_int32_t_s_s((((l_121[0][5] = (65535UL < ((p_1244->g_5 <= (~l_114[0][2])) , (safe_add_func_uint32_t_u_u((+p_67), (0L <= l_114[0][2])))))) > (((safe_mod_func_int16_t_s_s((((safe_add_func_uint64_t_u_u(((((p_67 <= p_1244->g_2[0]) ^ (&p_1244->g_74 != &p_68)) <= 0x5C7AL) ^ 0x0092AB72L), p_1244->g_99)) && p_1244->g_80.f1) >= p_1244->g_80.f2), l_114[1][0])) == p_1244->g_2[5]) & 0x06291552L)) || p_1244->g_80.f4), 5UL));
        for (p_1244->g_32 = 9; (p_1244->g_32 >= 0); p_1244->g_32 -= 1)
        { /* block id: 54 */
            if (l_114[3][0])
                break;
        }
        for (p_1244->g_80.f0 = 0; (p_1244->g_80.f0 <= 5); p_1244->g_80.f0 += 1)
        { /* block id: 59 */
            int32_t **l_140 = (void*)0;
            int32_t ***l_139[10][3] = {{&l_140,&l_140,&l_140},{&l_140,&l_140,&l_140},{&l_140,&l_140,&l_140},{&l_140,&l_140,&l_140},{&l_140,&l_140,&l_140},{&l_140,&l_140,&l_140},{&l_140,&l_140,&l_140},{&l_140,&l_140,&l_140},{&l_140,&l_140,&l_140},{&l_140,&l_140,&l_140}};
            uint16_t *l_144 = &p_1244->g_145;
            struct S0 *l_159 = &p_1244->g_160;
            int i, j;
            l_126[3][7][1] |= ((((safe_sub_func_int32_t_s_s(((~p_67) ^ (((safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s((((safe_div_func_uint16_t_u_u(p_1244->g_80.f2, (((l_141[1][7][0] = ((l_137 == l_137) , &p_1244->g_74)) == ((0x07E5L == ((*l_144) = (safe_mod_func_int8_t_s_s(p_1244->g_5, p_1244->g_138.f3)))) , l_146[7][9])) , 0xD2F0L))) < p_1244->g_4) , 8L), (*p_1244->g_74))) >= l_121[0][5]) , p_67), 0x718DL)), 0x3EF8793AF6F3C17AL)) | p_67) != 18446744073709551607UL)), 2UL)) > p_1244->g_5) < p_1244->g_80.f0) | p_67);
            for (p_1244->g_32 = 5; (p_1244->g_32 >= 1); p_1244->g_32 -= 1)
            { /* block id: 65 */
                uint16_t l_147 = 65530UL;
                int32_t l_165[10] = {0x23251F7BL,(-1L),0x182FD5FEL,(-1L),0x23251F7BL,0x23251F7BL,(-1L),0x182FD5FEL,(-1L),0x23251F7BL};
                int32_t l_166 = (-5L);
                int i;
                l_147 = (*p_1244->g_74);
                for (p_1244->g_75 = 5; (p_1244->g_75 >= 0); p_1244->g_75 -= 1)
                { /* block id: 69 */
                    uint16_t *l_154 = &l_147;
                    int64_t *l_164 = (void*)0;
                    l_126[3][5][1] = (l_166 = (safe_add_func_int64_t_s_s(p_1244->g_138.f2, ((((p_1244->g_155 = ((*l_154) = (safe_add_func_uint16_t_u_u(p_67, ((*l_144)--))))) > 0x7AF2L) < (safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_uint32_t_u(0xB2A593C8L)) , ((((0x159EL <= ((((p_1244->g_161 = l_159) == l_159) != (l_165[6] = (safe_rshift_func_int16_t_s_s(p_1244->g_138.f1, 13)))) && 0xCDL)) <= l_166) && l_165[6]) || p_1244->g_80.f0)), p_67))) != 0xAA6F8F6959912A8FL))));
                    for (p_1244->g_138.f1 = 0; (p_1244->g_138.f1 <= 9); p_1244->g_138.f1 += 1)
                    { /* block id: 79 */
                        int16_t *l_170 = &p_1244->g_171;
                        int i, j;
                        p_1244->g_172 ^= (p_1244->g_167 , (l_126[3][7][1] = ((l_121[(p_67 + 4)][(p_1244->g_32 + 4)] , p_1244->g_80.f4) && (((((((*l_170) ^= (safe_mul_func_uint8_t_u_u(((!(l_121[(p_67 + 4)][(p_1244->g_32 + 4)] ^ (l_166 &= (((0UL ^ (p_1244->g_109 ^= 0xDCL)) & p_1244->g_3) && p_1244->g_138.f0)))) & p_67), 0L))) <= p_1244->g_80.f0) > l_126[1][9][3]) ^ 0x1F9FFFE23A00BB90L) >= p_1244->g_80.f3) , 0x247C74D67DD47830L))));
                        l_173 = &p_67;
                    }
                }
                (*l_159) = (*l_159);
            }
        }
    }
    p_1244->g_74 = &p_67;
    return &p_1244->g_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_3
 * writes: p_1244->g_74
 */
int32_t  func_70(int64_t  p_71, int64_t  p_72, struct S2 * p_1244)
{ /* block id: 29 */
    int32_t *l_73 = &p_1244->g_35;
    int32_t l_110 = 4L;
    volatile int32_t *l_112 = &p_1244->g_3;
    volatile int32_t **l_111 = &l_112;
    p_1244->g_74 = l_73;
    return (**l_111);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1245;
    struct S2* p_1244 = &c_1245;
    struct S2 c_1246 = {
        {1UL,1UL,1UL,1UL,1UL,1UL}, // p_1244->g_2
        1L, // p_1244->g_3
        0x0E1B61BAL, // p_1244->g_4
        (-1L), // p_1244->g_5
        0x19ABL, // p_1244->g_32
        1L, // p_1244->g_35
        0x08EA9DD3L, // p_1244->g_75
        &p_1244->g_75, // p_1244->g_74
        {0x38F1CEF1L,0xF0EF7C86B8A71A37L,0x4EAFE12C2F3D1A1AL,0x1BL,0x411C9306A2EEAF0CL}, // p_1244->g_80
        0xE49794E54854C362L, // p_1244->g_99
        &p_1244->g_80, // p_1244->g_102
        0x6EL, // p_1244->g_109
        {4294967295UL,18446744073709551608UL,-5L,0x63L,0x7E984A78F789EDA7L}, // p_1244->g_138
        0x4103L, // p_1244->g_145
        4UL, // p_1244->g_155
        {0x1721C394L,18446744073709551614UL,-1L,0x14L,0x604AD4DC7898049FL}, // p_1244->g_160
        (void*)0, // p_1244->g_161
        {4294967295UL,7UL,0x70D93D81F4D0AC22L,0x55L,0x70488194AD0A1E72L}, // p_1244->g_167
        (-1L), // p_1244->g_171
        5UL, // p_1244->g_172
        8UL, // p_1244->g_180
        4294967287UL, // p_1244->g_184
        0x426FL, // p_1244->g_186
        &p_1244->g_74, // p_1244->g_202
        &p_1244->g_202, // p_1244->g_201
        0x15512F6BL, // p_1244->g_206
        &p_1244->g_206, // p_1244->g_205
        &p_1244->g_205, // p_1244->g_204
        &p_1244->g_204, // p_1244->g_203
        &p_1244->g_155, // p_1244->g_210
        &p_1244->g_210, // p_1244->g_209
        {0x71DC9CEEL,0x4070B250DB7EAFB5L,-1L,0x15L,0x7672607A46C01070L}, // p_1244->g_213
        0x04D460E461BC19AEL, // p_1244->g_229
        &p_1244->g_229, // p_1244->g_228
        (-1L), // p_1244->g_266
        0x58D018AFL, // p_1244->g_270
        {{{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL}},{{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL}},{{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL}},{{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL},{3UL,0UL,0xE6579434L,4294967292UL,0xDD9ADE97L,0x9CF8A400L,0x42CD6622L,0xC29EBB6EL,1UL}}}, // p_1244->g_272
        {4294967295UL,0x4B4C8367L,1UL}, // p_1244->g_277
        0x3F75L, // p_1244->g_279
        {0xE8C7C855L,18446744073709551615UL,0L,0x4CL,0x5AF79CA0A0CFE9FEL}, // p_1244->g_326
        &p_1244->g_99, // p_1244->g_381
        &p_1244->g_99, // p_1244->g_384
        {0x2B5435C8L,4294967295UL,0x2B5435C8L,0x2B5435C8L,4294967295UL,0x2B5435C8L,0x2B5435C8L}, // p_1244->g_387
        0UL, // p_1244->g_409
        &p_1244->g_74, // p_1244->g_413
        {{8UL,0x25088D05L,4294967295UL},{8UL,0x25088D05L,4294967295UL}}, // p_1244->g_414
        1UL, // p_1244->g_437
        0x1EL, // p_1244->g_463
        &p_1244->g_209, // p_1244->g_492
        {{{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L}},{{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L}},{{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L}},{{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L}},{{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L}},{{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L}},{{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L}},{{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L}},{{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L}},{{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L},{0xB629235FL,1UL,0x4629497943608AF0L,0L,0L}}}, // p_1244->g_497
        &p_1244->g_161, // p_1244->g_501
        {1UL,4294967295UL,0xC5331B20L}, // p_1244->g_530
        {{{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}}},{{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}}},{{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}}},{{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}},{{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{4294967295UL,0x80FABEAE2730C61CL,0x1B4B16973888FC42L,0x7BL,0x2784D3506CBC6B84L},{0xAE8556C3L,0UL,0x7B65701E46756783L,-1L,1L}}}}, // p_1244->g_548
        (void*)0, // p_1244->g_582
        {{3UL,0x7883F2BEL,1UL},{3UL,0x7883F2BEL,1UL},{3UL,0x7883F2BEL,1UL},{3UL,0x7883F2BEL,1UL},{3UL,0x7883F2BEL,1UL},{3UL,0x7883F2BEL,1UL},{3UL,0x7883F2BEL,1UL},{3UL,0x7883F2BEL,1UL},{3UL,0x7883F2BEL,1UL},{3UL,0x7883F2BEL,1UL}}, // p_1244->g_610
        {0x052088A9L,0x671A9081L,4294967287UL}, // p_1244->g_623
        {1UL,4294967290UL,0xF47B0D9EL}, // p_1244->g_624
        {4294967295UL,0xC838F96032574494L,0L,1L,0x7D48FE92F5DC49FBL}, // p_1244->g_625
        {0UL,0xC1A7A5CAAA05D246L,-3L,0x6FL,0x5A349DCE7C372B36L}, // p_1244->g_679
        (-1L), // p_1244->g_697
        1L, // p_1244->g_705
        0x0448L, // p_1244->g_706
        0x7A20L, // p_1244->g_708
        0x014FA3D3L, // p_1244->g_718
        0x64A7L, // p_1244->g_719
        {{0UL,0x81B6141F12BBF19DL,0x29E52AA4C752858CL,0x0CL,0x6F27B0CA7EB0A77DL},{0UL,0x81B6141F12BBF19DL,0x29E52AA4C752858CL,0x0CL,0x6F27B0CA7EB0A77DL},{0UL,0x81B6141F12BBF19DL,0x29E52AA4C752858CL,0x0CL,0x6F27B0CA7EB0A77DL},{0UL,0x81B6141F12BBF19DL,0x29E52AA4C752858CL,0x0CL,0x6F27B0CA7EB0A77DL},{0UL,0x81B6141F12BBF19DL,0x29E52AA4C752858CL,0x0CL,0x6F27B0CA7EB0A77DL},{0UL,0x81B6141F12BBF19DL,0x29E52AA4C752858CL,0x0CL,0x6F27B0CA7EB0A77DL},{0UL,0x81B6141F12BBF19DL,0x29E52AA4C752858CL,0x0CL,0x6F27B0CA7EB0A77DL},{0UL,0x81B6141F12BBF19DL,0x29E52AA4C752858CL,0x0CL,0x6F27B0CA7EB0A77DL},{0UL,0x81B6141F12BBF19DL,0x29E52AA4C752858CL,0x0CL,0x6F27B0CA7EB0A77DL}}, // p_1244->g_735
        &p_1244->g_697, // p_1244->g_738
        &p_1244->g_492, // p_1244->g_748
        {0xF7350272L,4294967286UL,0x308477DEL}, // p_1244->g_750
        &p_1244->g_750, // p_1244->g_749
        0x66L, // p_1244->g_762
        {{{2UL,0x9C43CBCBL,4294967294UL},{2UL,0x9C43CBCBL,4294967294UL},{2UL,0x9C43CBCBL,4294967294UL},{2UL,0x9C43CBCBL,4294967294UL},{2UL,0x9C43CBCBL,4294967294UL},{2UL,0x9C43CBCBL,4294967294UL},{2UL,0x9C43CBCBL,4294967294UL},{2UL,0x9C43CBCBL,4294967294UL}}}, // p_1244->g_774
        {0x39B04546L,1UL,0L,0x53L,0x4E5184640F1983C3L}, // p_1244->g_775
        18446744073709551613UL, // p_1244->g_780
        {0x934CB6CCL,0xA2E2963BL,4294967291UL}, // p_1244->g_781
        {4294967295UL,18446744073709551609UL,0x4E3376161B262C36L,0x46L,8L}, // p_1244->g_783
        &p_1244->g_74, // p_1244->g_806
        (void*)0, // p_1244->g_824
        {{{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0}},{{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0}},{{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0}},{{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0}},{{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0}},{{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0},{(void*)0,&p_1244->g_824,&p_1244->g_824,&p_1244->g_824,(void*)0}}}, // p_1244->g_823
        &p_1244->g_824, // p_1244->g_825
        8UL, // p_1244->g_838
        0x5C0308FEDAF50662L, // p_1244->g_845
        0x22L, // p_1244->g_846
        {{&p_1244->g_74},{&p_1244->g_74},{&p_1244->g_74},{&p_1244->g_74},{&p_1244->g_74},{&p_1244->g_74},{&p_1244->g_74},{&p_1244->g_74},{&p_1244->g_74},{&p_1244->g_74}}, // p_1244->g_934
        &p_1244->g_74, // p_1244->g_935
        {4294967295UL,0xD4CC42A6L,1UL}, // p_1244->g_936
        {4294967293UL,0UL,0x5161E50CDB01FCF0L,0x45L,4L}, // p_1244->g_943
        {{{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L}},{{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L}},{{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L}},{{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L}},{{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L}},{{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L}},{{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L}},{{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L}},{{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xA481733EL,18446744073709551611UL,-1L,0x34L,0x3C65A84099CB98DFL},{0xCD07C9DBL,1UL,0x4FC2FD51E0DBCC8FL,0x54L,2L}}}, // p_1244->g_944
        {&p_1244->g_943,&p_1244->g_943,&p_1244->g_943,&p_1244->g_943,&p_1244->g_943}, // p_1244->g_942
        &p_1244->g_942[1], // p_1244->g_941
        (-1L), // p_1244->g_955
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1244->g_980
        &p_1244->g_980[0], // p_1244->g_979
        &p_1244->g_74, // p_1244->g_981
        {0x7E6CAEA3L,4294967294UL,4294967295UL}, // p_1244->g_1039
        {0xD5ADB0C3L,0x50673D474AD6FC98L,0x0992481DFE3112F6L,0x07L,1L}, // p_1244->g_1043
        {4294967291UL,18446744073709551612UL,1L,9L,8L}, // p_1244->g_1044
        (void*)0, // p_1244->g_1071
        {0x9064529EL,4294967295UL,4294967295UL}, // p_1244->g_1073
        {0x06FA80EEL,0UL,-1L,0x77L,0x43CD01A703EB7A85L}, // p_1244->g_1086
        {4294967290UL,0x16FB24B1L,7UL}, // p_1244->g_1087
        {4294967288UL,0xE932F89FL,4UL}, // p_1244->g_1105
        4294967295UL, // p_1244->g_1120
        {9UL,18446744073709551612UL,-1L,0x10L,0x1A0CAAC1E4A7349FL}, // p_1244->g_1123
        0x03BE9028L, // p_1244->g_1166
        &p_1244->g_80.f0, // p_1244->g_1193
        &p_1244->g_1193, // p_1244->g_1192
        {{{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}}},{{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}}},{{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}}},{{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}}},{{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}}},{{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}}},{{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}}},{{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}}},{{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}},{{0xF304B859L,4294967292UL,4294967295UL},{0xB131412FL,0xA86031A2L,0xDB320771L},{0x409522D9L,0x640AD725L,0x82DBFE0BL},{4294967295UL,0xBA0DF568L,0xD9A59EBDL},{0xF91C56B6L,4294967288UL,0xBAEBF46FL}}}}, // p_1244->g_1216
    };
    c_1245 = c_1246;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1244);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1244->g_2[i], "p_1244->g_2[i]", print_hash_value);

    }
    transparent_crc(p_1244->g_3, "p_1244->g_3", print_hash_value);
    transparent_crc(p_1244->g_4, "p_1244->g_4", print_hash_value);
    transparent_crc(p_1244->g_5, "p_1244->g_5", print_hash_value);
    transparent_crc(p_1244->g_32, "p_1244->g_32", print_hash_value);
    transparent_crc(p_1244->g_35, "p_1244->g_35", print_hash_value);
    transparent_crc(p_1244->g_75, "p_1244->g_75", print_hash_value);
    transparent_crc(p_1244->g_80.f0, "p_1244->g_80.f0", print_hash_value);
    transparent_crc(p_1244->g_80.f1, "p_1244->g_80.f1", print_hash_value);
    transparent_crc(p_1244->g_80.f2, "p_1244->g_80.f2", print_hash_value);
    transparent_crc(p_1244->g_80.f3, "p_1244->g_80.f3", print_hash_value);
    transparent_crc(p_1244->g_80.f4, "p_1244->g_80.f4", print_hash_value);
    transparent_crc(p_1244->g_99, "p_1244->g_99", print_hash_value);
    transparent_crc(p_1244->g_109, "p_1244->g_109", print_hash_value);
    transparent_crc(p_1244->g_138.f0, "p_1244->g_138.f0", print_hash_value);
    transparent_crc(p_1244->g_138.f1, "p_1244->g_138.f1", print_hash_value);
    transparent_crc(p_1244->g_138.f2, "p_1244->g_138.f2", print_hash_value);
    transparent_crc(p_1244->g_138.f3, "p_1244->g_138.f3", print_hash_value);
    transparent_crc(p_1244->g_138.f4, "p_1244->g_138.f4", print_hash_value);
    transparent_crc(p_1244->g_145, "p_1244->g_145", print_hash_value);
    transparent_crc(p_1244->g_155, "p_1244->g_155", print_hash_value);
    transparent_crc(p_1244->g_160.f0, "p_1244->g_160.f0", print_hash_value);
    transparent_crc(p_1244->g_160.f1, "p_1244->g_160.f1", print_hash_value);
    transparent_crc(p_1244->g_160.f2, "p_1244->g_160.f2", print_hash_value);
    transparent_crc(p_1244->g_160.f3, "p_1244->g_160.f3", print_hash_value);
    transparent_crc(p_1244->g_160.f4, "p_1244->g_160.f4", print_hash_value);
    transparent_crc(p_1244->g_167.f0, "p_1244->g_167.f0", print_hash_value);
    transparent_crc(p_1244->g_167.f1, "p_1244->g_167.f1", print_hash_value);
    transparent_crc(p_1244->g_167.f2, "p_1244->g_167.f2", print_hash_value);
    transparent_crc(p_1244->g_167.f3, "p_1244->g_167.f3", print_hash_value);
    transparent_crc(p_1244->g_167.f4, "p_1244->g_167.f4", print_hash_value);
    transparent_crc(p_1244->g_171, "p_1244->g_171", print_hash_value);
    transparent_crc(p_1244->g_172, "p_1244->g_172", print_hash_value);
    transparent_crc(p_1244->g_180, "p_1244->g_180", print_hash_value);
    transparent_crc(p_1244->g_184, "p_1244->g_184", print_hash_value);
    transparent_crc(p_1244->g_186, "p_1244->g_186", print_hash_value);
    transparent_crc(p_1244->g_206, "p_1244->g_206", print_hash_value);
    transparent_crc(p_1244->g_213.f0, "p_1244->g_213.f0", print_hash_value);
    transparent_crc(p_1244->g_213.f1, "p_1244->g_213.f1", print_hash_value);
    transparent_crc(p_1244->g_213.f2, "p_1244->g_213.f2", print_hash_value);
    transparent_crc(p_1244->g_213.f3, "p_1244->g_213.f3", print_hash_value);
    transparent_crc(p_1244->g_213.f4, "p_1244->g_213.f4", print_hash_value);
    transparent_crc(p_1244->g_229, "p_1244->g_229", print_hash_value);
    transparent_crc(p_1244->g_266, "p_1244->g_266", print_hash_value);
    transparent_crc(p_1244->g_270, "p_1244->g_270", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1244->g_272[i][j][k], "p_1244->g_272[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1244->g_277.f0, "p_1244->g_277.f0", print_hash_value);
    transparent_crc(p_1244->g_277.f1, "p_1244->g_277.f1", print_hash_value);
    transparent_crc(p_1244->g_277.f2, "p_1244->g_277.f2", print_hash_value);
    transparent_crc(p_1244->g_279, "p_1244->g_279", print_hash_value);
    transparent_crc(p_1244->g_326.f0, "p_1244->g_326.f0", print_hash_value);
    transparent_crc(p_1244->g_326.f1, "p_1244->g_326.f1", print_hash_value);
    transparent_crc(p_1244->g_326.f2, "p_1244->g_326.f2", print_hash_value);
    transparent_crc(p_1244->g_326.f3, "p_1244->g_326.f3", print_hash_value);
    transparent_crc(p_1244->g_326.f4, "p_1244->g_326.f4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1244->g_387[i], "p_1244->g_387[i]", print_hash_value);

    }
    transparent_crc(p_1244->g_409, "p_1244->g_409", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1244->g_414[i].f0, "p_1244->g_414[i].f0", print_hash_value);
        transparent_crc(p_1244->g_414[i].f1, "p_1244->g_414[i].f1", print_hash_value);
        transparent_crc(p_1244->g_414[i].f2, "p_1244->g_414[i].f2", print_hash_value);

    }
    transparent_crc(p_1244->g_437, "p_1244->g_437", print_hash_value);
    transparent_crc(p_1244->g_463, "p_1244->g_463", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1244->g_497[i][j].f0, "p_1244->g_497[i][j].f0", print_hash_value);
            transparent_crc(p_1244->g_497[i][j].f1, "p_1244->g_497[i][j].f1", print_hash_value);
            transparent_crc(p_1244->g_497[i][j].f2, "p_1244->g_497[i][j].f2", print_hash_value);
            transparent_crc(p_1244->g_497[i][j].f3, "p_1244->g_497[i][j].f3", print_hash_value);
            transparent_crc(p_1244->g_497[i][j].f4, "p_1244->g_497[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(p_1244->g_530.f0, "p_1244->g_530.f0", print_hash_value);
    transparent_crc(p_1244->g_530.f1, "p_1244->g_530.f1", print_hash_value);
    transparent_crc(p_1244->g_530.f2, "p_1244->g_530.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1244->g_548[i][j][k].f0, "p_1244->g_548[i][j][k].f0", print_hash_value);
                transparent_crc(p_1244->g_548[i][j][k].f1, "p_1244->g_548[i][j][k].f1", print_hash_value);
                transparent_crc(p_1244->g_548[i][j][k].f2, "p_1244->g_548[i][j][k].f2", print_hash_value);
                transparent_crc(p_1244->g_548[i][j][k].f3, "p_1244->g_548[i][j][k].f3", print_hash_value);
                transparent_crc(p_1244->g_548[i][j][k].f4, "p_1244->g_548[i][j][k].f4", print_hash_value);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1244->g_610[i].f0, "p_1244->g_610[i].f0", print_hash_value);
        transparent_crc(p_1244->g_610[i].f1, "p_1244->g_610[i].f1", print_hash_value);
        transparent_crc(p_1244->g_610[i].f2, "p_1244->g_610[i].f2", print_hash_value);

    }
    transparent_crc(p_1244->g_623.f0, "p_1244->g_623.f0", print_hash_value);
    transparent_crc(p_1244->g_623.f1, "p_1244->g_623.f1", print_hash_value);
    transparent_crc(p_1244->g_623.f2, "p_1244->g_623.f2", print_hash_value);
    transparent_crc(p_1244->g_624.f0, "p_1244->g_624.f0", print_hash_value);
    transparent_crc(p_1244->g_624.f1, "p_1244->g_624.f1", print_hash_value);
    transparent_crc(p_1244->g_624.f2, "p_1244->g_624.f2", print_hash_value);
    transparent_crc(p_1244->g_625.f0, "p_1244->g_625.f0", print_hash_value);
    transparent_crc(p_1244->g_625.f1, "p_1244->g_625.f1", print_hash_value);
    transparent_crc(p_1244->g_625.f2, "p_1244->g_625.f2", print_hash_value);
    transparent_crc(p_1244->g_625.f3, "p_1244->g_625.f3", print_hash_value);
    transparent_crc(p_1244->g_625.f4, "p_1244->g_625.f4", print_hash_value);
    transparent_crc(p_1244->g_679.f0, "p_1244->g_679.f0", print_hash_value);
    transparent_crc(p_1244->g_679.f1, "p_1244->g_679.f1", print_hash_value);
    transparent_crc(p_1244->g_679.f2, "p_1244->g_679.f2", print_hash_value);
    transparent_crc(p_1244->g_679.f3, "p_1244->g_679.f3", print_hash_value);
    transparent_crc(p_1244->g_679.f4, "p_1244->g_679.f4", print_hash_value);
    transparent_crc(p_1244->g_697, "p_1244->g_697", print_hash_value);
    transparent_crc(p_1244->g_705, "p_1244->g_705", print_hash_value);
    transparent_crc(p_1244->g_706, "p_1244->g_706", print_hash_value);
    transparent_crc(p_1244->g_708, "p_1244->g_708", print_hash_value);
    transparent_crc(p_1244->g_718, "p_1244->g_718", print_hash_value);
    transparent_crc(p_1244->g_719, "p_1244->g_719", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1244->g_735[i].f0, "p_1244->g_735[i].f0", print_hash_value);
        transparent_crc(p_1244->g_735[i].f1, "p_1244->g_735[i].f1", print_hash_value);
        transparent_crc(p_1244->g_735[i].f2, "p_1244->g_735[i].f2", print_hash_value);
        transparent_crc(p_1244->g_735[i].f3, "p_1244->g_735[i].f3", print_hash_value);
        transparent_crc(p_1244->g_735[i].f4, "p_1244->g_735[i].f4", print_hash_value);

    }
    transparent_crc(p_1244->g_750.f0, "p_1244->g_750.f0", print_hash_value);
    transparent_crc(p_1244->g_750.f1, "p_1244->g_750.f1", print_hash_value);
    transparent_crc(p_1244->g_750.f2, "p_1244->g_750.f2", print_hash_value);
    transparent_crc(p_1244->g_762, "p_1244->g_762", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1244->g_774[i][j].f0, "p_1244->g_774[i][j].f0", print_hash_value);
            transparent_crc(p_1244->g_774[i][j].f1, "p_1244->g_774[i][j].f1", print_hash_value);
            transparent_crc(p_1244->g_774[i][j].f2, "p_1244->g_774[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(p_1244->g_775.f0, "p_1244->g_775.f0", print_hash_value);
    transparent_crc(p_1244->g_775.f1, "p_1244->g_775.f1", print_hash_value);
    transparent_crc(p_1244->g_775.f2, "p_1244->g_775.f2", print_hash_value);
    transparent_crc(p_1244->g_775.f3, "p_1244->g_775.f3", print_hash_value);
    transparent_crc(p_1244->g_775.f4, "p_1244->g_775.f4", print_hash_value);
    transparent_crc(p_1244->g_780, "p_1244->g_780", print_hash_value);
    transparent_crc(p_1244->g_781.f0, "p_1244->g_781.f0", print_hash_value);
    transparent_crc(p_1244->g_781.f1, "p_1244->g_781.f1", print_hash_value);
    transparent_crc(p_1244->g_781.f2, "p_1244->g_781.f2", print_hash_value);
    transparent_crc(p_1244->g_783.f0, "p_1244->g_783.f0", print_hash_value);
    transparent_crc(p_1244->g_783.f1, "p_1244->g_783.f1", print_hash_value);
    transparent_crc(p_1244->g_783.f2, "p_1244->g_783.f2", print_hash_value);
    transparent_crc(p_1244->g_783.f3, "p_1244->g_783.f3", print_hash_value);
    transparent_crc(p_1244->g_783.f4, "p_1244->g_783.f4", print_hash_value);
    transparent_crc(p_1244->g_838, "p_1244->g_838", print_hash_value);
    transparent_crc(p_1244->g_845, "p_1244->g_845", print_hash_value);
    transparent_crc(p_1244->g_846, "p_1244->g_846", print_hash_value);
    transparent_crc(p_1244->g_936.f0, "p_1244->g_936.f0", print_hash_value);
    transparent_crc(p_1244->g_936.f1, "p_1244->g_936.f1", print_hash_value);
    transparent_crc(p_1244->g_936.f2, "p_1244->g_936.f2", print_hash_value);
    transparent_crc(p_1244->g_943.f0, "p_1244->g_943.f0", print_hash_value);
    transparent_crc(p_1244->g_943.f1, "p_1244->g_943.f1", print_hash_value);
    transparent_crc(p_1244->g_943.f2, "p_1244->g_943.f2", print_hash_value);
    transparent_crc(p_1244->g_943.f3, "p_1244->g_943.f3", print_hash_value);
    transparent_crc(p_1244->g_943.f4, "p_1244->g_943.f4", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1244->g_944[i][j].f0, "p_1244->g_944[i][j].f0", print_hash_value);
            transparent_crc(p_1244->g_944[i][j].f1, "p_1244->g_944[i][j].f1", print_hash_value);
            transparent_crc(p_1244->g_944[i][j].f2, "p_1244->g_944[i][j].f2", print_hash_value);
            transparent_crc(p_1244->g_944[i][j].f3, "p_1244->g_944[i][j].f3", print_hash_value);
            transparent_crc(p_1244->g_944[i][j].f4, "p_1244->g_944[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(p_1244->g_955, "p_1244->g_955", print_hash_value);
    transparent_crc(p_1244->g_1039.f0, "p_1244->g_1039.f0", print_hash_value);
    transparent_crc(p_1244->g_1039.f1, "p_1244->g_1039.f1", print_hash_value);
    transparent_crc(p_1244->g_1039.f2, "p_1244->g_1039.f2", print_hash_value);
    transparent_crc(p_1244->g_1043.f0, "p_1244->g_1043.f0", print_hash_value);
    transparent_crc(p_1244->g_1043.f1, "p_1244->g_1043.f1", print_hash_value);
    transparent_crc(p_1244->g_1043.f2, "p_1244->g_1043.f2", print_hash_value);
    transparent_crc(p_1244->g_1043.f3, "p_1244->g_1043.f3", print_hash_value);
    transparent_crc(p_1244->g_1043.f4, "p_1244->g_1043.f4", print_hash_value);
    transparent_crc(p_1244->g_1044.f0, "p_1244->g_1044.f0", print_hash_value);
    transparent_crc(p_1244->g_1044.f1, "p_1244->g_1044.f1", print_hash_value);
    transparent_crc(p_1244->g_1044.f2, "p_1244->g_1044.f2", print_hash_value);
    transparent_crc(p_1244->g_1044.f3, "p_1244->g_1044.f3", print_hash_value);
    transparent_crc(p_1244->g_1044.f4, "p_1244->g_1044.f4", print_hash_value);
    transparent_crc(p_1244->g_1073.f0, "p_1244->g_1073.f0", print_hash_value);
    transparent_crc(p_1244->g_1073.f1, "p_1244->g_1073.f1", print_hash_value);
    transparent_crc(p_1244->g_1073.f2, "p_1244->g_1073.f2", print_hash_value);
    transparent_crc(p_1244->g_1086.f0, "p_1244->g_1086.f0", print_hash_value);
    transparent_crc(p_1244->g_1086.f1, "p_1244->g_1086.f1", print_hash_value);
    transparent_crc(p_1244->g_1086.f2, "p_1244->g_1086.f2", print_hash_value);
    transparent_crc(p_1244->g_1086.f3, "p_1244->g_1086.f3", print_hash_value);
    transparent_crc(p_1244->g_1086.f4, "p_1244->g_1086.f4", print_hash_value);
    transparent_crc(p_1244->g_1087.f0, "p_1244->g_1087.f0", print_hash_value);
    transparent_crc(p_1244->g_1087.f1, "p_1244->g_1087.f1", print_hash_value);
    transparent_crc(p_1244->g_1087.f2, "p_1244->g_1087.f2", print_hash_value);
    transparent_crc(p_1244->g_1105.f0, "p_1244->g_1105.f0", print_hash_value);
    transparent_crc(p_1244->g_1105.f1, "p_1244->g_1105.f1", print_hash_value);
    transparent_crc(p_1244->g_1105.f2, "p_1244->g_1105.f2", print_hash_value);
    transparent_crc(p_1244->g_1120, "p_1244->g_1120", print_hash_value);
    transparent_crc(p_1244->g_1123.f0, "p_1244->g_1123.f0", print_hash_value);
    transparent_crc(p_1244->g_1123.f1, "p_1244->g_1123.f1", print_hash_value);
    transparent_crc(p_1244->g_1123.f2, "p_1244->g_1123.f2", print_hash_value);
    transparent_crc(p_1244->g_1123.f3, "p_1244->g_1123.f3", print_hash_value);
    transparent_crc(p_1244->g_1123.f4, "p_1244->g_1123.f4", print_hash_value);
    transparent_crc(p_1244->g_1166, "p_1244->g_1166", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1244->g_1216[i][j][k].f0, "p_1244->g_1216[i][j][k].f0", print_hash_value);
                transparent_crc(p_1244->g_1216[i][j][k].f1, "p_1244->g_1216[i][j][k].f1", print_hash_value);
                transparent_crc(p_1244->g_1216[i][j][k].f2, "p_1244->g_1216[i][j][k].f2", print_hash_value);

            }
        }
    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
