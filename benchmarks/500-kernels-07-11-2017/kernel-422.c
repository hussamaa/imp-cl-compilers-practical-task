// -g 60,86,1 -l 2,43,1
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


// Seed: 2897974106

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_3;
    volatile int32_t g_4;
    int32_t g_5;
    uint32_t g_23[10];
    int32_t g_29;
    int32_t g_38;
    int32_t g_39;
    int32_t g_74[6];
    int32_t g_95;
    int32_t g_109[7][9];
    uint8_t g_115;
    uint16_t g_158;
    uint32_t *g_161;
    int64_t g_162;
    int64_t g_164;
    int16_t g_183;
    uint32_t g_185;
    uint64_t g_236;
    int32_t *g_240;
    int64_t g_252;
    int16_t g_257;
    int32_t g_286;
    uint8_t g_287[3];
    uint32_t g_302;
    uint32_t *g_339;
    uint16_t g_406;
    int16_t *g_454;
    int16_t **g_453[10][5][1];
    int16_t ***g_452;
    uint32_t g_477;
    int8_t g_627;
    uint32_t g_744[5];
    int32_t g_745;
    uint32_t g_746;
    uint8_t g_758;
    uint64_t g_792[10][3];
    int32_t g_799;
    uint64_t g_808;
    int32_t g_900;
    uint32_t g_954;
    int16_t ***g_978;
    uint8_t *g_984[4][9][7];
    uint8_t **g_983;
    int32_t **g_999;
    int32_t *g_1014;
    int32_t **g_1013[8];
    uint64_t g_1027;
    int32_t g_1036;
    volatile int64_t **g_1109;
    volatile int64_t ***g_1108[1];
    int32_t * volatile *g_1217;
    int32_t * volatile **g_1216;
    int32_t ***g_1218;
    uint8_t * volatile *g_1311[8][10];
    uint8_t * volatile ** volatile g_1310;
    uint8_t * volatile ** volatile *g_1309;
    int64_t **g_1388;
    int64_t ***g_1387;
    int64_t g_1545;
    int32_t *g_1577;
    uint64_t g_1636;
    uint16_t *g_1753;
    int32_t ***g_1803;
    uint64_t *g_1847[8][9];
    int32_t g_1867;
    int32_t * volatile g_2024;
    uint8_t ***g_2139;
    uint8_t ****g_2138;
    int8_t g_2170[5];
    volatile uint32_t g_2213;
    volatile uint32_t *g_2212[6][4];
    volatile uint32_t **g_2211;
    volatile uint32_t ** volatile * volatile g_2210;
    int32_t * volatile g_2215[8];
    int32_t * volatile g_2216;
    int32_t * volatile g_2224;
    uint32_t g_2258;
    uint32_t **g_2270[3][5][6];
    volatile int32_t g_2329;
    int64_t g_2336;
    int32_t g_2365[3];
    int64_t *****g_2419;
    volatile uint16_t g_2489;
    volatile uint16_t *g_2488[2];
    volatile uint16_t * volatile *g_2487[2];
    volatile uint16_t * volatile **g_2486;
    volatile int8_t g_2494[3];
    volatile int8_t *g_2493;
    volatile int8_t ** volatile g_2492;
    int16_t g_2523;
    volatile uint64_t g_2534;
    volatile int32_t g_2596;
    volatile uint8_t *g_2750;
    volatile uint8_t **g_2749;
    volatile uint8_t ** volatile *g_2748;
    volatile uint8_t ** volatile **g_2747;
    volatile uint8_t ** volatile ** volatile *g_2746;
    volatile uint8_t ** volatile ** volatile **g_2745[9][3][2];
    uint32_t g_2751[10];
    int8_t g_2783;
    uint64_t g_2797;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S0 * p_2820);
int16_t  func_8(uint32_t  p_9, int32_t  p_10, uint8_t  p_11, int32_t  p_12, uint64_t  p_13, struct S0 * p_2820);
uint32_t  func_19(uint32_t  p_20, int16_t  p_21, struct S0 * p_2820);
int32_t * func_40(uint32_t  p_41, uint32_t * p_42, uint8_t  p_43, uint8_t  p_44, uint32_t * p_45, struct S0 * p_2820);
uint32_t  func_47(uint32_t  p_48, uint16_t  p_49, int32_t * p_50, struct S0 * p_2820);
int32_t  func_53(int32_t * p_54, struct S0 * p_2820);
uint32_t  func_56(uint64_t  p_57, int16_t  p_58, int16_t  p_59, uint32_t * p_60, struct S0 * p_2820);
uint32_t  func_64(uint64_t  p_65, uint8_t  p_66, struct S0 * p_2820);
uint64_t  func_67(uint32_t * p_68, int32_t  p_69, struct S0 * p_2820);
uint32_t * func_70(int64_t  p_71, struct S0 * p_2820);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2820->g_3 p_2820->g_5 p_2820->g_23 p_2820->g_74 p_2820->g_29 p_2820->g_95 p_2820->g_39 p_2820->g_109 p_2820->g_164 p_2820->g_158 p_2820->g_183 p_2820->g_185 p_2820->g_240 p_2820->g_2365 p_2820->g_115 p_2820->g_236 p_2820->g_162 p_2820->g_286 p_2820->g_302 p_2820->g_38 p_2820->g_252 p_2820->g_287 p_2820->g_257 p_2820->g_477 p_2820->g_745 p_2820->g_792 p_2820->g_799 p_2820->g_808 p_2820->g_746 p_2820->g_1218 p_2820->g_999 p_2820->g_406 p_2820->g_954 p_2820->g_983 p_2820->g_984 p_2820->g_1217 p_2820->g_454 p_2820->g_978 p_2820->g_453 p_2820->g_1027 p_2820->g_161 p_2820->g_627 p_2820->g_1216 p_2820->g_2024 p_2820->g_1753 p_2820->g_1847 p_2820->g_2138 p_2820->g_758 p_2820->g_1545 p_2820->g_1636 p_2820->g_744 p_2820->g_2170 p_2820->g_1867 p_2820->g_2210 p_2820->g_2216 p_2820->g_2139 p_2820->g_2224 p_2820->g_2258 p_2820->g_339 p_2820->g_1036 p_2820->g_1803 p_2820->g_1013 p_2820->g_1014 p_2820->g_4 p_2820->g_2419 p_2820->g_2486 p_2820->g_2492 p_2820->g_2493 p_2820->g_2494 p_2820->g_2523 p_2820->g_2534 p_2820->g_2596 p_2820->g_900 p_2820->g_2487 p_2820->g_2488 p_2820->g_2489 p_2820->g_2745 p_2820->g_1577 p_2820->g_2751 p_2820->g_2797
 * writes: p_2820->g_5 p_2820->g_23 p_2820->g_29 p_2820->g_38 p_2820->g_39 p_2820->g_74 p_2820->g_95 p_2820->g_109 p_2820->g_115 p_2820->g_158 p_2820->g_161 p_2820->g_162 p_2820->g_164 p_2820->g_183 p_2820->g_185 p_2820->g_236 p_2820->g_240 p_2820->g_2365 p_2820->g_252 p_2820->g_257 p_2820->g_287 p_2820->g_302 p_2820->g_339 p_2820->g_406 p_2820->g_286 p_2820->g_452 p_2820->g_477 p_2820->g_744 p_2820->g_745 p_2820->g_792 p_2820->g_799 p_2820->g_808 p_2820->g_454 p_2820->g_954 p_2820->g_1013 p_2820->g_1387 p_2820->g_453 p_2820->g_999 p_2820->g_1577 p_2820->g_1027 p_2820->g_758 p_2820->g_746 p_2820->g_1636 p_2820->g_1545 p_2820->g_2138 p_2820->g_627 p_2820->g_2170 p_2820->g_2139 p_2820->g_2258 p_2820->g_2270 p_2820->g_1388 p_2820->g_2534 p_2820->g_1867 p_2820->g_2523 p_2820->g_1014 p_2820->g_984 p_2820->g_2797
 */
uint32_t  func_1(struct S0 * p_2820)
{ /* block id: 4 */
    int64_t l_2[5][6][8] = {{{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL}},{{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL}},{{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL}},{{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL}},{{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL},{0x16F8F9ED02E889ECL,0x0657689A5A40F2FDL,0x519D81479B69B2E4L,(-1L),0x434392F20920A6FFL,(-1L),0x519D81479B69B2E4L,0x0657689A5A40F2FDL}}};
    int32_t l_2090 = 0x74961B48L;
    int32_t l_2126[1][6] = {{0L,0x7C8CEAAFL,0L,0L,0x7C8CEAAFL,0L}};
    int8_t l_2214 = (-9L);
    uint32_t l_2225[10][7][3] = {{{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL}},{{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL}},{{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL}},{{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL}},{{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL}},{{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL}},{{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL}},{{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL}},{{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL}},{{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL},{4294967293UL,0x7E1CA6CFL,0x756C3DFAL}}};
    int8_t l_2245 = (-2L);
    int32_t l_2252 = 1L;
    uint32_t l_2277[2];
    uint64_t l_2317 = 0x32C85794574DB81CL;
    uint32_t *l_2318 = &l_2225[5][4][1];
    int32_t l_2333 = 0L;
    int64_t ****l_2343 = &p_2820->g_1387;
    int32_t l_2363 = 0x38E5B3D8L;
    int64_t *l_2364 = (void*)0;
    uint64_t l_2418 = 0x546D3699B928ACADL;
    int64_t *****l_2420 = &l_2343;
    int16_t l_2441 = 0L;
    uint64_t l_2458 = 18446744073709551608UL;
    int32_t l_2504 = 1L;
    uint32_t ***l_2512 = &p_2820->g_2270[0][4][3];
    int32_t l_2599 = 0L;
    int32_t ***l_2632 = &p_2820->g_1013[1];
    uint32_t l_2754 = 0xC0C02105L;
    int16_t l_2761[6][10][4] = {{{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL}},{{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL}},{{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL}},{{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL}},{{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL}},{{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL},{0x266CL,(-10L),(-10L),0x266CL}}};
    int8_t *l_2819 = &p_2820->g_2783;
    int8_t **l_2818 = &l_2819;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2277[i] = 1UL;
lbl_2812:
    for (p_2820->g_5 = 0; (p_2820->g_5 <= 4); p_2820->g_5 += 1)
    { /* block id: 7 */
        int32_t l_14 = 0x11919B17L;
        uint32_t *l_22[1];
        uint64_t l_2079[1][4][10] = {{{7UL,0x4BAE65D07BC8B68CL,0x59C4CA90A1FE990CL,0x6C6EC1D04D207C25L,0x59C4CA90A1FE990CL,0x4BAE65D07BC8B68CL,7UL,0x9ABCC6D765F06CE7L,0xE12D57346EC54697L,0x47F0CDB0045DA016L},{7UL,0x4BAE65D07BC8B68CL,0x59C4CA90A1FE990CL,0x6C6EC1D04D207C25L,0x59C4CA90A1FE990CL,0x4BAE65D07BC8B68CL,7UL,0x9ABCC6D765F06CE7L,0xE12D57346EC54697L,0x47F0CDB0045DA016L},{7UL,0x4BAE65D07BC8B68CL,0x59C4CA90A1FE990CL,0x6C6EC1D04D207C25L,0x59C4CA90A1FE990CL,0x4BAE65D07BC8B68CL,7UL,0x9ABCC6D765F06CE7L,0xE12D57346EC54697L,0x47F0CDB0045DA016L},{7UL,0x4BAE65D07BC8B68CL,0x59C4CA90A1FE990CL,0x6C6EC1D04D207C25L,0x59C4CA90A1FE990CL,0x4BAE65D07BC8B68CL,7UL,0x9ABCC6D765F06CE7L,0xE12D57346EC54697L,0x47F0CDB0045DA016L}}};
        int32_t l_2083 = 0x697F4D03L;
        int8_t l_2097[1][7][10] = {{{8L,8L,8L,8L,8L,8L,8L,8L,8L,8L},{8L,8L,8L,8L,8L,8L,8L,8L,8L,8L},{8L,8L,8L,8L,8L,8L,8L,8L,8L,8L},{8L,8L,8L,8L,8L,8L,8L,8L,8L,8L},{8L,8L,8L,8L,8L,8L,8L,8L,8L,8L},{8L,8L,8L,8L,8L,8L,8L,8L,8L,8L},{8L,8L,8L,8L,8L,8L,8L,8L,8L,8L}}};
        uint8_t l_2130 = 249UL;
        uint32_t l_2239 = 0xDB03F721L;
        uint32_t l_2246 = 6UL;
        int32_t l_2253 = 6L;
        int32_t l_2257 = 0x59010A9EL;
        int32_t l_2289[10][10] = {{0x63C9B089L,0x63C9B089L,0x65B9C977L,0x3CD7E6F2L,0x531944FEL,0L,0x05DAED51L,0x2C7C001AL,0x05DAED51L,0L},{0x63C9B089L,0x63C9B089L,0x65B9C977L,0x3CD7E6F2L,0x531944FEL,0L,0x05DAED51L,0x2C7C001AL,0x05DAED51L,0L},{0x63C9B089L,0x63C9B089L,0x65B9C977L,0x3CD7E6F2L,0x531944FEL,0L,0x05DAED51L,0x2C7C001AL,0x05DAED51L,0L},{0x63C9B089L,0x63C9B089L,0x65B9C977L,0x3CD7E6F2L,0x531944FEL,0L,0x05DAED51L,0x2C7C001AL,0x05DAED51L,0L},{0x63C9B089L,0x63C9B089L,0x65B9C977L,0x3CD7E6F2L,0x531944FEL,0L,0x05DAED51L,0x2C7C001AL,0x05DAED51L,0L},{0x63C9B089L,0x63C9B089L,0x65B9C977L,0x3CD7E6F2L,0x531944FEL,0L,0x05DAED51L,0x2C7C001AL,0x05DAED51L,0L},{0x63C9B089L,0x63C9B089L,0x65B9C977L,0x3CD7E6F2L,0x531944FEL,0L,0x05DAED51L,0x2C7C001AL,0x05DAED51L,0L},{0x63C9B089L,0x63C9B089L,0x65B9C977L,0x3CD7E6F2L,0x531944FEL,0L,0x05DAED51L,0x2C7C001AL,0x05DAED51L,0L},{0x63C9B089L,0x63C9B089L,0x65B9C977L,0x3CD7E6F2L,0x531944FEL,0L,0x05DAED51L,0x2C7C001AL,0x05DAED51L,0L},{0x63C9B089L,0x63C9B089L,0x65B9C977L,0x3CD7E6F2L,0x531944FEL,0L,0x05DAED51L,0x2C7C001AL,0x05DAED51L,0L}};
        uint32_t l_2292 = 0UL;
        int16_t ***l_2314 = &p_2820->g_453[5][4][0];
        int32_t *l_2337[6][4] = {{&p_2820->g_74[5],&l_2253,&p_2820->g_74[5],&p_2820->g_74[5]},{&p_2820->g_74[5],&l_2253,&p_2820->g_74[5],&p_2820->g_74[5]},{&p_2820->g_74[5],&l_2253,&p_2820->g_74[5],&p_2820->g_74[5]},{&p_2820->g_74[5],&l_2253,&p_2820->g_74[5],&p_2820->g_74[5]},{&p_2820->g_74[5],&l_2253,&p_2820->g_74[5],&p_2820->g_74[5]},{&p_2820->g_74[5],&l_2253,&p_2820->g_74[5],&p_2820->g_74[5]}};
        uint16_t l_2367 = 0x10FCL;
        int64_t *l_2372 = &l_2[0][3][1];
        int64_t **l_2371[8];
        int32_t l_2415 = 8L;
        uint32_t l_2416 = 0xB5A29FBAL;
        int64_t *****l_2421 = &l_2343;
        uint64_t l_2467 = 1UL;
        uint8_t *****l_2485 = &p_2820->g_2138;
        int64_t l_2532 = (-9L);
        uint8_t l_2564 = 0xB1L;
        uint64_t l_2597 = 0xEA1BBE75F0072FBAL;
        uint32_t l_2684 = 0UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_22[i] = &p_2820->g_23[7];
        for (i = 0; i < 8; i++)
            l_2371[i] = &l_2372;
        if ((l_2[1][3][1] != (((safe_lshift_func_int16_t_s_s(func_8(l_14, p_2820->g_3, (4294967289UL != (safe_sub_func_int16_t_s_s(l_14, p_2820->g_5))), (((safe_sub_func_uint64_t_u_u((func_19((!(p_2820->g_23[7]++)), l_14, p_2820) ^ (-7L)), p_2820->g_5)) & (-6L)) , l_2[2][5][2]), p_2820->g_627, p_2820), 5)) < l_2079[0][2][6]) && 1UL)))
        { /* block id: 1088 */
            uint32_t l_2084 = 0x16194AC4L;
            int32_t l_2098 = 0L;
            int32_t l_2127 = 0x3B62B766L;
            int32_t *l_2142 = &p_2820->g_38;
            int64_t *l_2166 = (void*)0;
            int32_t l_2286 = 0x0EFE6FD8L;
            int32_t l_2288 = (-1L);
            int64_t l_2299 = 0x1F9C56E4C1123FF1L;
            int8_t l_2334 = (-1L);
            int16_t l_2413 = 1L;
            uint8_t l_2434[8][8][1] = {{{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L}},{{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L}},{{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L}},{{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L}},{{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L}},{{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L}},{{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L}},{{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L},{0xA0L}}};
            int32_t l_2453 = 0x72C215E9L;
            int32_t l_2455 = 0x167B4F7CL;
            uint64_t l_2461[9] = {0xD3E29ED271ECDF1AL,0xD3E29ED271ECDF1AL,0xD3E29ED271ECDF1AL,0xD3E29ED271ECDF1AL,0xD3E29ED271ECDF1AL,0xD3E29ED271ECDF1AL,0xD3E29ED271ECDF1AL,0xD3E29ED271ECDF1AL,0xD3E29ED271ECDF1AL};
            int i, j, k;
            for (p_2820->g_39 = 0; (p_2820->g_39 <= 0); p_2820->g_39 += 1)
            { /* block id: 1091 */
                int32_t *l_2080 = (void*)0;
                int32_t *l_2081 = &p_2820->g_74[5];
                int32_t *l_2082[1];
                int32_t l_2087 = 6L;
                uint32_t l_2091 = 4294967290UL;
                int64_t ****l_2096 = &p_2820->g_1387;
                int i;
                for (i = 0; i < 1; i++)
                    l_2082[i] = &p_2820->g_74[5];
                l_2084++;
                l_2098 ^= (((*p_2820->g_1753) > ((l_2087 | (l_2091 = (safe_div_func_int16_t_s_s(l_2079[0][2][6], (l_2090 = 1L))))) , l_2084)) , ((safe_rshift_func_int16_t_s_s(0x6326L, ((((((((p_2820->g_23[7] ^ (l_2090 , ((safe_div_func_uint8_t_u_u((l_2096 != &p_2820->g_1108[0]), l_2[4][0][2])) , l_2079[0][2][6]))) , p_2820->g_236) >= 0x18L) && (*l_2081)) , l_2097[0][1][1]) && 1UL) == p_2820->g_29) == p_2820->g_302))) <= 0x21946ACDL));
                for (p_2820->g_183 = 0; (p_2820->g_183 <= 4); p_2820->g_183 += 1)
                { /* block id: 1098 */
                    uint32_t l_2119 = 4294967286UL;
                    int32_t l_2120 = 0L;
                    int32_t l_2124 = 0x3B64E317L;
                    int32_t l_2125 = (-9L);
                    int32_t l_2129 = 0x7697C72FL;
                    for (p_2820->g_257 = 0; (p_2820->g_257 <= 4); p_2820->g_257 += 1)
                    { /* block id: 1101 */
                        int32_t l_2121 = 0L;
                        int32_t l_2122 = (-5L);
                        int32_t l_2123 = 1L;
                        int32_t l_2128[6];
                        int i, j;
                        for (i = 0; i < 6; i++)
                            l_2128[i] = 0x7E6C8CEEL;
                        (*l_2081) |= (0xE6EEDA45L < ((((safe_mul_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(l_2084, (((((safe_mul_func_int8_t_s_s((p_2820->g_1847[(p_2820->g_257 + 2)][(p_2820->g_257 + 3)] != &p_2820->g_1545), 0x4DL)) > (safe_add_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(((l_2084 > ((*p_2820->g_1753) = ((((((((safe_add_func_uint8_t_u_u(((((l_2119 &= (!(l_2083 && (l_2[0][3][5] == (safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(248UL, l_2[2][1][2])), l_2090)))))) ^ l_14) , l_2090) , 0xD7L), l_2[3][1][0])) == l_2090) > (*p_2820->g_2024)) >= l_2120) , l_2079[0][3][4]) <= l_2121) == 0x00L) <= (*p_2820->g_1753)))) && l_2120), l_2084)), 0xA7C3387DD7D552B8L)), 0L))) ^ l_2121) || 0x3CL) >= 0x7183L))), 0xF5F9BA4AL)) & 1L), l_2090)) == l_2120) != 0x6DL) ^ l_2[0][1][0]));
                        l_2130++;
                        if (l_2079[0][2][6])
                            continue;
                    }
                    for (l_2119 = 0; (l_2119 <= 4); l_2119 += 1)
                    { /* block id: 1110 */
                        uint32_t l_2135 = 0xC5EFF0D5L;
                        uint8_t ***l_2137 = &p_2820->g_983;
                        uint8_t ****l_2136 = &l_2137;
                        uint8_t *****l_2140 = (void*)0;
                        uint8_t *****l_2141 = &p_2820->g_2138;
                        (*l_2081) = (p_2820->g_808 == (safe_rshift_func_int8_t_s_u((l_2135 || (l_2136 == ((*l_2141) = p_2820->g_2138))), 4)));
                        if (l_2084)
                            continue;
                    }
                    return p_2820->g_758;
                }
                for (p_2820->g_799 = 0; (p_2820->g_799 >= 0); p_2820->g_799 -= 1)
                { /* block id: 1119 */
                    uint16_t l_2165 = 1UL;
                    for (p_2820->g_1545 = 4; (p_2820->g_1545 >= 0); p_2820->g_1545 -= 1)
                    { /* block id: 1122 */
                        uint16_t l_2149 = 65535UL;
                        int16_t *l_2163 = &p_2820->g_257;
                        int32_t **l_2164 = &p_2820->g_1577;
                        int8_t *l_2167 = (void*)0;
                        int8_t *l_2168 = &l_2097[0][5][6];
                        int8_t *l_2169 = &p_2820->g_2170[4];
                        (*p_2820->g_1217) = (l_2142 = &l_2098);
                        if ((***p_2820->g_1216))
                            continue;
                        (***p_2820->g_1216) = (safe_lshift_func_int8_t_s_u(((*l_2169) |= ((*l_2168) = (p_2820->g_627 = (safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(l_2149, 8)) >= ((safe_add_func_int32_t_s_s(((*l_2081) = (safe_div_func_uint64_t_u_u(((((safe_div_func_int16_t_s_s(l_2149, ((l_2097[0][0][6] ^ (safe_mul_func_int8_t_s_s(p_2820->g_1545, (((((void*)0 == &p_2820->g_161) ^ (((*p_2820->g_1216) == ((((safe_mod_func_int64_t_s_s((((((safe_div_func_int16_t_s_s(((*l_2163) |= (((safe_unary_minus_func_uint32_t_u(p_2820->g_1636)) , l_2081) == (void*)0)), 0x68C5L)) , 0x5CL) , (*p_2820->g_1753)) , (void*)0) != &p_2820->g_339), p_2820->g_1027)) && 5L) && 0x15FD1089L) , l_2164)) != p_2820->g_109[0][0])) && l_2090) < l_2165)))) ^ 0x486AL))) , 0x102D4306L) , &l_2[2][2][0]) != l_2166), p_2820->g_744[4]))), p_2820->g_109[1][4])) & 0x429DL)), 0UL))))), 6));
                        return p_2820->g_5;
                    }
                    for (l_2083 = 0; (l_2083 <= 0); l_2083 += 1)
                    { /* block id: 1136 */
                        return p_2820->g_185;
                    }
                    for (p_2820->g_257 = 0; (p_2820->g_257 <= 0); p_2820->g_257 += 1)
                    { /* block id: 1141 */
                        uint32_t l_2173 = 4294967295UL;
                        int32_t *l_2187 = &p_2820->g_1867;
                        int32_t **l_2186 = &l_2187;
                        int32_t *l_2189 = &p_2820->g_1867;
                        int32_t **l_2188 = &l_2189;
                        int16_t l_2190 = 0L;
                        if ((*l_2142))
                            break;
                        (*l_2142) = (((safe_rshift_func_int16_t_s_u(l_2173, ((void*)0 == &p_2820->g_1753))) , (safe_mul_func_int8_t_s_s(((0xE4L || 0x0EL) || 0x2E47L), l_2173))) , ((((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((((safe_sub_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(l_2173, (((*l_2188) = ((*l_2186) = func_70(((safe_rshift_func_int16_t_s_u((p_2820->g_758 != p_2820->g_792[7][1]), 0)) > p_2820->g_5), p_2820))) == l_2142))) < l_2165) | l_2083), (*p_2820->g_1753))) , (*p_2820->g_1753)) >= (*p_2820->g_1753)) || p_2820->g_236), l_2165)), (*p_2820->g_2024))) == p_2820->g_1867) , l_2190) , l_2090));
                    }
                }
            }
            for (p_2820->g_746 = 0; (p_2820->g_746 <= 4); p_2820->g_746 += 1)
            { /* block id: 1151 */
                int16_t *l_2195 = (void*)0;
                int16_t *l_2196 = (void*)0;
                int16_t *l_2197 = &p_2820->g_257;
                int32_t l_2204 = 0x232F7DB7L;
                int32_t *l_2242 = &p_2820->g_74[5];
                int32_t *l_2243 = &p_2820->g_109[0][0];
                int32_t *l_2244[6][7] = {{&l_2083,&p_2820->g_900,(void*)0,&l_2126[0][1],&p_2820->g_900,&l_2083,&l_2126[0][1]},{&l_2083,&p_2820->g_900,(void*)0,&l_2126[0][1],&p_2820->g_900,&l_2083,&l_2126[0][1]},{&l_2083,&p_2820->g_900,(void*)0,&l_2126[0][1],&p_2820->g_900,&l_2083,&l_2126[0][1]},{&l_2083,&p_2820->g_900,(void*)0,&l_2126[0][1],&p_2820->g_900,&l_2083,&l_2126[0][1]},{&l_2083,&p_2820->g_900,(void*)0,&l_2126[0][1],&p_2820->g_900,&l_2083,&l_2126[0][1]},{&l_2083,&p_2820->g_900,(void*)0,&l_2126[0][1],&p_2820->g_900,&l_2083,&l_2126[0][1]}};
                uint32_t **l_2276[3];
                int16_t l_2291 = 1L;
                int64_t l_2338[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
                int64_t l_2339 = 0x3BA38D604015D47BL;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_2276[i] = &p_2820->g_161;
                if (((4L || (((safe_mod_func_int16_t_s_s(0x1910L, ((*l_2142) = (safe_div_func_uint64_t_u_u((((*l_2197) = l_2126[0][2]) <= ((((safe_lshift_func_int16_t_s_s((((safe_add_func_uint64_t_u_u(((0x09L >= (l_2126[0][0] != (+(safe_mul_func_uint8_t_u_u((((*p_2820->g_1753) = l_2204) ^ 0L), (*l_2142)))))) || (safe_unary_minus_func_uint32_t_u(((safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(0UL, (-3L))), (*l_2142))) > (*l_2142))))), 1L)) , 1L) == p_2820->g_1636), 6)) < (*l_2142)) , p_2820->g_2210) != &p_2820->g_2211)), 18446744073709551612UL))))) , l_2214) && l_2204)) <= (-1L)))
                { /* block id: 1155 */
                    uint8_t ***l_2221[3][5][6] = {{{&p_2820->g_983,&p_2820->g_983,(void*)0,&p_2820->g_983,&p_2820->g_983,&p_2820->g_983},{&p_2820->g_983,&p_2820->g_983,(void*)0,&p_2820->g_983,&p_2820->g_983,&p_2820->g_983},{&p_2820->g_983,&p_2820->g_983,(void*)0,&p_2820->g_983,&p_2820->g_983,&p_2820->g_983},{&p_2820->g_983,&p_2820->g_983,(void*)0,&p_2820->g_983,&p_2820->g_983,&p_2820->g_983},{&p_2820->g_983,&p_2820->g_983,(void*)0,&p_2820->g_983,&p_2820->g_983,&p_2820->g_983}},{{&p_2820->g_983,&p_2820->g_983,(void*)0,&p_2820->g_983,&p_2820->g_983,&p_2820->g_983},{&p_2820->g_983,&p_2820->g_983,(void*)0,&p_2820->g_983,&p_2820->g_983,&p_2820->g_983},{&p_2820->g_983,&p_2820->g_983,(void*)0,&p_2820->g_983,&p_2820->g_983,&p_2820->g_983},{&p_2820->g_983,&p_2820->g_983,(void*)0,&p_2820->g_983,&p_2820->g_983,&p_2820->g_983},{&p_2820->g_983,&p_2820->g_983,(void*)0,&p_2820->g_983,&p_2820->g_983,&p_2820->g_983}},{{&p_2820->g_983,&p_2820->g_983,(void*)0,&p_2820->g_983,&p_2820->g_983,&p_2820->g_983},{&p_2820->g_983,&p_2820->g_983,(void*)0,&p_2820->g_983,&p_2820->g_983,&p_2820->g_983},{&p_2820->g_983,&p_2820->g_983,(void*)0,&p_2820->g_983,&p_2820->g_983,&p_2820->g_983},{&p_2820->g_983,&p_2820->g_983,(void*)0,&p_2820->g_983,&p_2820->g_983,&p_2820->g_983},{&p_2820->g_983,&p_2820->g_983,(void*)0,&p_2820->g_983,&p_2820->g_983,&p_2820->g_983}}};
                    int8_t *l_2223 = &p_2820->g_2170[4];
                    int8_t **l_2222 = &l_2223;
                    int i, j, k;
                    for (p_2820->g_115 = 0; (p_2820->g_115 <= 4); p_2820->g_115 += 1)
                    { /* block id: 1158 */
                        (*p_2820->g_2216) = ((*l_2142) = (-8L));
                        if ((*l_2142))
                            continue;
                        if ((*p_2820->g_2216))
                            break;
                    }
                    (*p_2820->g_2224) ^= (safe_mul_func_int8_t_s_s(((void*)0 == &p_2820->g_1217), (safe_mul_func_int8_t_s_s(((0x0A23L || (l_2221[2][2][2] != ((*p_2820->g_2138) = ((p_2820->g_115 == ((((*l_2142) = (l_2079[0][2][6] <= ((((*l_2142) && l_14) , ((*l_2222) = &p_2820->g_627)) != &p_2820->g_627))) < p_2820->g_744[2]) , p_2820->g_109[0][0])) , (*p_2820->g_2138))))) > 0xB6L), p_2820->g_95))));
                    l_2225[3][5][2]++;
                    (*l_2142) = l_2204;
                }
                else
                { /* block id: 1170 */
                    for (p_2820->g_183 = 7; (p_2820->g_183 >= 0); p_2820->g_183 -= 1)
                    { /* block id: 1173 */
                        uint16_t *l_2232 = &p_2820->g_158;
                        int i;
                        (*l_2142) &= (l_2225[3][5][2] & (l_2126[0][1] != (0x01L && (safe_mul_func_uint16_t_u_u(((*p_2820->g_1753)--), ((*l_2232)--))))));
                        (*p_2820->g_2216) = (*p_2820->g_2224);
                    }
                }
                for (p_2820->g_745 = 4; (p_2820->g_745 >= 0); p_2820->g_745 -= 1)
                { /* block id: 1182 */
                    int32_t *l_2235 = &l_2083;
                    int32_t *l_2236 = &p_2820->g_74[0];
                    int32_t *l_2237 = &p_2820->g_74[1];
                    int32_t *l_2238[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_2238[i] = &l_2083;
                    ++l_2239;
                    if ((*l_2142))
                        break;
                    (*l_2235) = (*l_2237);
                }
                l_2246++;
                for (p_2820->g_406 = 1; (p_2820->g_406 <= 4); p_2820->g_406 += 1)
                { /* block id: 1190 */
                    int32_t l_2254 = 0x222506B0L;
                    int32_t l_2255 = (-1L);
                    uint64_t l_2263[1][8][5] = {{{0x53E802EC767E1A3AL,0UL,1UL,0UL,0x53E802EC767E1A3AL},{0x53E802EC767E1A3AL,0UL,1UL,0UL,0x53E802EC767E1A3AL},{0x53E802EC767E1A3AL,0UL,1UL,0UL,0x53E802EC767E1A3AL},{0x53E802EC767E1A3AL,0UL,1UL,0UL,0x53E802EC767E1A3AL},{0x53E802EC767E1A3AL,0UL,1UL,0UL,0x53E802EC767E1A3AL},{0x53E802EC767E1A3AL,0UL,1UL,0UL,0x53E802EC767E1A3AL},{0x53E802EC767E1A3AL,0UL,1UL,0UL,0x53E802EC767E1A3AL},{0x53E802EC767E1A3AL,0UL,1UL,0UL,0x53E802EC767E1A3AL}}};
                    int64_t *l_2273[8] = {&p_2820->g_1545,&p_2820->g_162,&p_2820->g_1545,&p_2820->g_1545,&p_2820->g_162,&p_2820->g_1545,&p_2820->g_1545,&p_2820->g_162};
                    uint32_t **l_2275 = (void*)0;
                    uint32_t ***l_2274[1];
                    int32_t l_2287 = 1L;
                    int32_t l_2290 = 0L;
                    int16_t ***l_2316 = &p_2820->g_453[3][1][0];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_2274[i] = &l_2275;
                    for (p_2820->g_1545 = 4; (p_2820->g_1545 >= 0); p_2820->g_1545 -= 1)
                    { /* block id: 1193 */
                        uint64_t l_2251 = 0xAB0565C9528583CFL;
                        int32_t l_2256 = 0x3F60D9F0L;
                        int i, j;
                        if ((*p_2820->g_2216))
                            break;
                        (*p_2820->g_2224) &= (safe_rshift_func_uint16_t_u_u(l_2251, l_2[4][0][3]));
                        p_2820->g_2258--;
                        return p_2820->g_2258;
                    }
                    l_2277[0] ^= (l_2257 , ((*l_2242) |= (safe_add_func_int32_t_s_s(((l_2097[0][3][8] | l_2263[0][7][1]) , (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_u(((p_2820->g_2270[2][1][0] = &p_2820->g_161) == (((--(*p_2820->g_339)) , (((*l_2243) = l_2[0][5][1]) , l_2239)) , (l_2276[0] = ((p_2820->g_162 &= (0x7BDF2396724EC487L ^ p_2820->g_95)) , &p_2820->g_161)))), l_2263[0][7][1])) < l_2263[0][5][3]) & 6UL), (*l_2142))), 0))), l_2246))));
                    for (l_14 = 0; (l_14 <= 4); l_14 += 1)
                    { /* block id: 1208 */
                        uint8_t *l_2284[5][6][3] = {{{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758}},{{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758}},{{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758}},{{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758}},{{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758},{(void*)0,(void*)0,&p_2820->g_758}}};
                        int32_t l_2285[7] = {0L,0L,0L,0L,0L,0L,0L};
                        int16_t ****l_2315[5];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_2315[i] = (void*)0;
                        (*l_2242) |= (safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((--l_2292), ((l_2285[2] ^ l_2254) && 7UL))), 0L)), ((*l_2197) = (safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(l_2285[2], (p_2820->g_164 |= (((l_2299 > ((safe_add_func_int32_t_s_s(((l_2285[5] && (safe_mod_func_int16_t_s_s(((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_2126[0][2] = ((safe_sub_func_int64_t_s_s(((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_2090, ((l_2316 = l_2314) == (void*)0))), 1)) || 0x89L), 0x62B1D4597B526554L)) != 0x4E7D540C0A9890DAL)), 0x23L)), 65530UL)) , l_2245), l_2263[0][6][0]))) , l_2285[1]), (*p_2820->g_2216))) ^ (-9L))) || (*l_2142)) , p_2820->g_5)))), 8L)))));
                    }
                    return l_2097[0][6][6];
                }
                for (p_2820->g_38 = 0; (p_2820->g_38 <= 4); p_2820->g_38 += 1)
                { /* block id: 1220 */
                    int64_t *l_2319 = &l_2299;
                    int64_t *l_2331 = (void*)0;
                    int64_t *l_2332 = &p_2820->g_162;
                    int32_t l_2335[8][2] = {{0x2622E38BL,1L},{0x2622E38BL,1L},{0x2622E38BL,1L},{0x2622E38BL,1L},{0x2622E38BL,1L},{0x2622E38BL,1L},{0x2622E38BL,1L},{0x2622E38BL,1L}};
                    int i, j;
                    (**p_2820->g_1218) = l_2337[1][0];
                    for (l_2090 = 4; (l_2090 >= 1); l_2090 -= 1)
                    { /* block id: 1229 */
                        uint32_t l_2340[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_2340[i] = 0xA2A6BD14L;
                        l_2340[0]--;
                        (**p_2820->g_1216) = (**p_2820->g_1216);
                        (***p_2820->g_1218) = (-1L);
                    }
                }
            }
            for (p_2820->g_162 = 3; (p_2820->g_162 >= 0); p_2820->g_162 -= 1)
            { /* block id: 1238 */
                int8_t l_2345 = 0x12L;
                int32_t l_2368 = 0x157F704DL;
                int64_t **l_2375 = &l_2166;
                int64_t ****l_2412 = (void*)0;
                uint64_t **l_2431 = (void*)0;
                uint64_t ***l_2430 = &l_2431;
                int32_t l_2449 = 1L;
                int32_t l_2450[7][8] = {{0x16D169DCL,0x16D169DCL,0x715702E9L,0x4778557BL,0x45FB5D7FL,0x4778557BL,0x715702E9L,0x16D169DCL},{0x16D169DCL,0x16D169DCL,0x715702E9L,0x4778557BL,0x45FB5D7FL,0x4778557BL,0x715702E9L,0x16D169DCL},{0x16D169DCL,0x16D169DCL,0x715702E9L,0x4778557BL,0x45FB5D7FL,0x4778557BL,0x715702E9L,0x16D169DCL},{0x16D169DCL,0x16D169DCL,0x715702E9L,0x4778557BL,0x45FB5D7FL,0x4778557BL,0x715702E9L,0x16D169DCL},{0x16D169DCL,0x16D169DCL,0x715702E9L,0x4778557BL,0x45FB5D7FL,0x4778557BL,0x715702E9L,0x16D169DCL},{0x16D169DCL,0x16D169DCL,0x715702E9L,0x4778557BL,0x45FB5D7FL,0x4778557BL,0x715702E9L,0x16D169DCL},{0x16D169DCL,0x16D169DCL,0x715702E9L,0x4778557BL,0x45FB5D7FL,0x4778557BL,0x715702E9L,0x16D169DCL}};
                int i, j;
                for (p_2820->g_39 = 1; (p_2820->g_39 <= 4); p_2820->g_39 += 1)
                { /* block id: 1241 */
                    int64_t *****l_2344 = &l_2343;
                    int32_t l_2346[4];
                    int32_t ***l_2348 = &p_2820->g_999;
                    uint64_t **l_2362 = &p_2820->g_1847[2][7];
                    uint64_t ***l_2361 = &l_2362;
                    int16_t *l_2366 = &p_2820->g_183;
                    int64_t **l_2376 = &l_2372;
                    uint32_t l_2404 = 0x70858F38L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2346[i] = (-1L);
                    (*p_2820->g_2024) = (((2UL < (l_2126[0][2] || ((*l_2142) &= (((*l_2344) = l_2343) != &p_2820->g_1387)))) < l_2345) , l_2345);
                    if (l_2346[2])
                        break;
                    if (((*l_2142) = ((((safe_unary_minus_func_uint64_t_u((l_2348 != l_2348))) <= l_2317) != ((safe_mul_func_uint16_t_u_u(((*p_2820->g_1753) = ((safe_sub_func_int64_t_s_s(p_2820->g_257, ((l_2345 , ((*l_2366) ^= ((((safe_sub_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((*l_2361) = &p_2820->g_1847[2][7]) == (void*)0), (0x5AL <= ((((*l_2142) >= 7L) , (-1L)) != l_2245)))), l_2363)) , (*l_2142)), 1L)), p_2820->g_1036)) , l_2364) == &l_2299) ^ p_2820->g_2365[1]))) | l_2345))) > p_2820->g_109[0][0])), l_2367)) < 65535UL)) <= 4UL)))
                    { /* block id: 1250 */
                        int64_t ***l_2373 = (void*)0;
                        int64_t ***l_2374[8] = {&l_2371[4],&l_2371[4],&l_2371[4],&l_2371[4],&l_2371[4],&l_2371[4],&l_2371[4],&l_2371[4]};
                        int32_t l_2384 = 1L;
                        uint8_t *l_2387 = &p_2820->g_287[0];
                        int i;
                        (**p_2820->g_1216) = func_70((l_2368 ^= 0x40637E2FAA7E7F07L), p_2820);
                        (**p_2820->g_999) = ((*p_2820->g_240) > (((+(((((p_2820->g_1388 = l_2371[4]) != (l_2376 = l_2375)) | (safe_sub_func_uint8_t_u_u((+0xB4L), (safe_sub_func_uint64_t_u_u(((+((-3L) == (((safe_mod_func_int32_t_s_s(((((((safe_unary_minus_func_uint16_t_u(((((((*l_2142) = l_2384) | ((safe_add_func_uint8_t_u_u(255UL, (p_2820->g_627 = (((++(*l_2387)) ^ 0x13L) && ((safe_add_func_uint32_t_u_u((((*p_2820->g_1014) = ((safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(((*l_2318) = (l_2384 || 1UL)), (**p_2820->g_999))) && l_2345) ^ p_2820->g_23[7]), 7)) , (***p_2820->g_1803))) , l_2126[0][2]), 0x97D10596L)) == 0x5CB62E0574C796D2L))))) , 0x0E88A51AL)) || 1L) ^ l_2345) , l_2225[3][5][2]))) || p_2820->g_185) < p_2820->g_746) | 255UL) == l_2368) , (*p_2820->g_2024)), 4294967293UL)) & l_2384) < p_2820->g_1027))) ^ l_2384), (***l_2348)))))) > l_2345) < 0xE5L)) ^ l_2384) > p_2820->g_39));
                        (*p_2820->g_240) ^= (-1L);
                    }
                    else
                    { /* block id: 1262 */
                        uint32_t l_2407 = 0UL;
                        uint64_t *l_2414 = &l_2317;
                        int32_t l_2417[3];
                        int64_t ******l_2422 = &l_2344;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_2417[i] = (-1L);
                        l_2417[1] = (l_2416 = ((1UL > (safe_lshift_func_uint16_t_u_u((p_2820->g_744[2] <= (((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((l_2346[3] <= (p_2820->g_115 <= ((safe_lshift_func_uint16_t_u_s(l_2404, 11)) != (((safe_lshift_func_uint8_t_u_s(((((*l_2142) = ((((((*l_2414) |= (l_2407 , (safe_sub_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((p_2820->g_792[7][0] && ((void*)0 != l_2412)), 8)) <= 0x0AL) , l_2413), 65535UL)))) >= 18446744073709551615UL) || (*p_2820->g_1753)) | 0x18L) ^ 2L)) | l_2415) == 0x6BL), p_2820->g_744[2])) & 0x01L) >= (*p_2820->g_1753))))) , l_2368), p_2820->g_1545)), 2)) != 0x5BE86AD9FF1312A6L) != l_2252)), 14))) && p_2820->g_4));
                        if (l_2418)
                            continue;
                        l_2126[0][4] = ((l_2420 = p_2820->g_2419) != ((*l_2422) = l_2421));
                        l_2346[2] = (*l_2142);
                    }
                }
                (**p_2820->g_1216) = func_70(p_2820->g_74[1], p_2820);
                for (p_2820->g_257 = 4; (p_2820->g_257 >= 0); p_2820->g_257 -= 1)
                { /* block id: 1277 */
                    uint16_t l_2440 = 0xADB4L;
                    int32_t l_2446 = 0x218CC2E8L;
                    int32_t l_2447 = 0x0FF22400L;
                    int32_t l_2452[2][8][10] = {{{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L},{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L},{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L},{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L},{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L},{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L},{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L},{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L}},{{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L},{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L},{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L},{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L},{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L},{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L},{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L},{0x086BF30EL,4L,0x65EC10DAL,0x7884B7B5L,(-1L),(-1L),0x58B3AFE8L,1L,0x3D21A556L,1L}}};
                    int i, j, k;
                    for (p_2820->g_1636 = 0; (p_2820->g_1636 <= 4); p_2820->g_1636 += 1)
                    { /* block id: 1280 */
                        int32_t l_2437 = 0x10009A50L;
                        uint16_t **l_2443[4];
                        uint16_t ***l_2442 = &l_2443[2];
                        int32_t l_2444 = 0L;
                        int32_t l_2445 = 0x07CCA20EL;
                        int32_t l_2448 = (-5L);
                        int32_t l_2451 = (-1L);
                        int32_t l_2454 = (-3L);
                        int32_t l_2456 = 2L;
                        int32_t l_2457 = (-7L);
                        int i;
                        for (i = 0; i < 4; i++)
                            l_2443[i] = (void*)0;
                        (**p_2820->g_1217) |= ((safe_unary_minus_func_int32_t_s(((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_s((((void*)0 == l_2430) >= (*l_2142)), (safe_div_func_int32_t_s_s(((l_2434[4][5][0] && (safe_sub_func_uint32_t_u_u(((0x19E2L ^ l_2437) , (((safe_rshift_func_uint16_t_u_u((((l_2437 > l_2277[1]) , &p_2820->g_236) != &p_2820->g_236), l_2440)) , l_2440) | l_2277[0])), (*l_2142)))) != 1L), (*l_2142))))) >= l_2441) , l_2442) == (void*)0), 2L)), 1L)) | l_2437))) >= l_2440);
                        l_2458--;
                        if ((***p_2820->g_1218))
                            break;
                    }
                    for (l_2367 = 0; (l_2367 <= 4); l_2367 += 1)
                    { /* block id: 1287 */
                        (*l_2142) &= ((***p_2820->g_1216) &= (p_2820->g_4 & p_2820->g_74[1]));
                        return p_2820->g_185;
                    }
                    ++l_2461[6];
                }
            }
        }
        else
        { /* block id: 1295 */
            uint32_t l_2465 = 6UL;
            int64_t l_2482 = 0x3F98A702B2D7F3A4L;
            uint8_t l_2526[3][7] = {{1UL,1UL,0x21L,8UL,0x4DL,8UL,0x21L},{1UL,1UL,0x21L,8UL,0x4DL,8UL,0x21L},{1UL,1UL,0x21L,8UL,0x4DL,8UL,0x21L}};
            int8_t l_2527[8] = {0x57L,(-9L),0x57L,0x57L,(-9L),0x57L,0x57L,(-9L)};
            int32_t l_2529 = 0L;
            int32_t l_2530 = 0x0054A2E3L;
            int32_t l_2531 = 1L;
            int32_t l_2533 = 0x6572399CL;
            int i, j;
            for (p_2820->g_162 = 4; (p_2820->g_162 >= 0); p_2820->g_162 -= 1)
            { /* block id: 1298 */
                int64_t l_2464 = 1L;
                int32_t l_2466 = 0x5A57EF4DL;
                int64_t ***l_2499 = &l_2371[2];
                int32_t l_2503 = 0L;
                uint8_t *****l_2505[1];
                uint8_t l_2507 = 0UL;
                int i;
                for (i = 0; i < 1; i++)
                    l_2505[i] = &p_2820->g_2138;
                l_2465 |= (l_2464 ^= (*p_2820->g_2216));
                for (l_2130 = 0; (l_2130 <= 4); l_2130 += 1)
                { /* block id: 1303 */
                    uint8_t *****l_2484 = &p_2820->g_2138;
                    int32_t l_2490 = 9L;
                    uint32_t *l_2521 = &l_2225[1][1][2];
                    uint32_t **l_2522 = &p_2820->g_161;
                    uint16_t *l_2524 = (void*)0;
                    uint16_t *l_2525[10] = {&l_2367,&l_2367,&l_2367,&l_2367,&l_2367,&l_2367,&l_2367,&l_2367,&l_2367,&l_2367};
                    uint64_t *l_2528 = &p_2820->g_1027;
                    int i;
                    --l_2467;
                    for (p_2820->g_745 = 1; (p_2820->g_745 <= 4); p_2820->g_745 += 1)
                    { /* block id: 1307 */
                        int32_t l_2472 = 3L;
                        int16_t ****l_2483 = &l_2314;
                        int32_t l_2491 = 0x176D0AA5L;
                        int16_t *l_2506 = (void*)0;
                        l_2491 |= (safe_add_func_uint8_t_u_u(l_2472, (l_2472 | (~((((((((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s((((safe_div_func_int8_t_s_s(l_2472, (safe_lshift_func_uint16_t_u_u(((((safe_mod_func_int8_t_s_s((l_2482 , (((((*l_2483) = &p_2820->g_453[0][0][0]) == &p_2820->g_453[1][2][0]) && (*p_2820->g_2024)) >= (((*p_2820->g_1753) = (*p_2820->g_1753)) >= l_2277[0]))), l_2482)) ^ 0xFAACL) == p_2820->g_2365[2]) | p_2820->g_164), 5)))) , l_2484) == l_2485))), l_2126[0][0])) , (void*)0) == p_2820->g_2486) & l_2490) && 1UL) , l_2482) | 1L) , l_2472)))));
                        p_2820->g_38 &= (((p_2820->g_2492 == &p_2820->g_2493) , (l_2277[0] && (((!(safe_lshift_func_uint8_t_u_u((l_2507 = ((safe_div_func_int32_t_s_s(((void*)0 == l_2499), (((l_2363 = (&p_2820->g_1309 == ((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(((l_2482 || (((l_2503 > l_2214) | (*p_2820->g_1753)) >= l_2491)) != l_2490))), l_2504)) , l_2505[0]))) > 6L) || l_2490))) || 0x54L)), l_2490))) , l_2472) , l_2490))) , 1L);
                    }
                    l_2126[0][2] |= (((safe_sub_func_uint64_t_u_u(((*l_2528) &= (safe_rshift_func_uint8_t_u_u((l_2512 == ((((safe_rshift_func_uint8_t_u_s((l_2490 = (l_2527[3] |= (l_2466 = (safe_add_func_uint64_t_u_u((l_2507 && 0UL), ((*p_2820->g_1014) , ((l_2526[2][5] = (((**p_2820->g_2492) | (safe_div_func_uint16_t_u_u(((*p_2820->g_1753) = 1UL), 0x3C52L))) , (safe_sub_func_uint32_t_u_u(((((((l_2521 != ((*l_2522) = func_70(p_2820->g_162, p_2820))) != 0x0A17L) , &p_2820->g_302) == (void*)0) || 0x53C8L) == l_2333), p_2820->g_2523)))) <= l_2490))))))), 4)) || l_2245) || l_2458) , l_2512)), l_2465))), 0UL)) , l_2333) , l_2490);
                }
            }
            p_2820->g_2534++;
        }
        for (p_2820->g_158 = 1; (p_2820->g_158 <= 7); p_2820->g_158 += 1)
        { /* block id: 1329 */
            int32_t l_2537 = 0x4D04EDB5L;
            int8_t l_2598 = (-2L);
            int32_t l_2618 = 5L;
            int64_t *l_2636[10][3] = {{&l_2532,&p_2820->g_162,&p_2820->g_2336},{&l_2532,&p_2820->g_162,&p_2820->g_2336},{&l_2532,&p_2820->g_162,&p_2820->g_2336},{&l_2532,&p_2820->g_162,&p_2820->g_2336},{&l_2532,&p_2820->g_162,&p_2820->g_2336},{&l_2532,&p_2820->g_162,&p_2820->g_2336},{&l_2532,&p_2820->g_162,&p_2820->g_2336},{&l_2532,&p_2820->g_162,&p_2820->g_2336},{&l_2532,&p_2820->g_162,&p_2820->g_2336},{&l_2532,&p_2820->g_162,&p_2820->g_2336}};
            int64_t *****l_2637 = &l_2343;
            uint32_t l_2641[3][5] = {{0x10ADD061L,1UL,0UL,1UL,0x10ADD061L},{0x10ADD061L,1UL,0UL,1UL,0x10ADD061L},{0x10ADD061L,1UL,0UL,1UL,0x10ADD061L}};
            int8_t l_2642[3][6][10] = {{{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L},{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L},{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L},{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L},{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L},{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L}},{{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L},{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L},{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L},{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L},{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L},{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L}},{{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L},{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L},{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L},{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L},{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L},{(-6L),0x6EL,0L,0x52L,0L,0x6EL,(-6L),0x7CL,0L,1L}}};
            int32_t l_2643 = 0x0C484609L;
            uint32_t l_2646 = 0UL;
            int16_t *l_2653 = &p_2820->g_183;
            uint8_t *l_2669 = &p_2820->g_287[0];
            int i, j, k;
            if (l_2537)
            { /* block id: 1330 */
                int32_t l_2538[9][7] = {{0L,(-8L),(-1L),0x3F05F047L,(-1L),(-8L),0L},{0L,(-8L),(-1L),0x3F05F047L,(-1L),(-8L),0L},{0L,(-8L),(-1L),0x3F05F047L,(-1L),(-8L),0L},{0L,(-8L),(-1L),0x3F05F047L,(-1L),(-8L),0L},{0L,(-8L),(-1L),0x3F05F047L,(-1L),(-8L),0L},{0L,(-8L),(-1L),0x3F05F047L,(-1L),(-8L),0L},{0L,(-8L),(-1L),0x3F05F047L,(-1L),(-8L),0L},{0L,(-8L),(-1L),0x3F05F047L,(-1L),(-8L),0L},{0L,(-8L),(-1L),0x3F05F047L,(-1L),(-8L),0L}};
                int32_t l_2560 = (-2L);
                int64_t l_2563 = 3L;
                uint16_t l_2565 = 2UL;
                uint64_t l_2568 = 0UL;
                int8_t *l_2595 = (void*)0;
                int32_t *l_2601 = &p_2820->g_799;
                int32_t **l_2600 = &l_2601;
                int32_t l_2620 = 0x4328EF3BL;
                uint64_t *l_2638 = &p_2820->g_1636;
                int i, j;
                for (p_2820->g_1867 = 3; (p_2820->g_1867 >= 0); p_2820->g_1867 -= 1)
                { /* block id: 1333 */
                    int64_t ***l_2539 = &l_2371[5];
                    int16_t *l_2561 = (void*)0;
                    int16_t *l_2562 = &l_2441;
                    int16_t *l_2566 = &p_2820->g_2523;
                    uint32_t l_2567 = 0x54765E7BL;
                    int i, j;
                    p_2820->g_109[p_2820->g_5][(p_2820->g_158 + 1)] ^= (l_2538[6][4] == (*p_2820->g_2024));
                    l_2568 = (((((*l_2566) = ((l_2539 != l_2539) < ((safe_sub_func_int8_t_s_s((l_2538[6][4] & ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((p_2820->g_38 , (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((2UL < ((((safe_mul_func_uint16_t_u_u((l_2458 > ((safe_sub_func_int16_t_s_s((((((0x6AAFL > ((*l_2562) = (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(l_2538[6][4], (safe_lshift_func_int16_t_s_u((1L != 8UL), 15)))), l_2560)))) , p_2820->g_746) , l_2563) || 4294967295UL) , 0x18DBL), 3L)) , p_2820->g_109[p_2820->g_5][(p_2820->g_158 + 1)])), p_2820->g_109[p_2820->g_5][(p_2820->g_158 + 1)])) & 246UL) >= l_2564) <= 6L)), p_2820->g_109[p_2820->g_5][(p_2820->g_158 + 1)])), l_2560))), 1)), l_2565)) ^ 0x3EL)), 4UL)) , 0xD9L))) && l_2567) , &l_2367) == (void*)0);
                    if ((*p_2820->g_2216))
                        break;
                }
                if ((safe_lshift_func_int16_t_s_s(((l_2504 , ((*l_2600) = ((**p_2820->g_1803) = (((l_2568 == (*p_2820->g_1753)) != (safe_mul_func_int8_t_s_s((!((l_2599 = ((safe_add_func_uint8_t_u_u((l_2563 >= (safe_add_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(((0x242ACD13L > (safe_add_func_int8_t_s_s((p_2820->g_627 ^= (-7L)), (safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint16_t_u((((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((((p_2820->g_2170[4] |= 0L) && p_2820->g_2596) < 0xAE129F7EB885A70BL), l_2537)), 0x857F8871L)), 13)), 0x6C958637L)) , 0x2618E881F548BC57L) > l_2597))), 0x75167E725D763FB9L))))) | 0xBA05C152BC62CAE2L))), l_2598)), l_2598)), l_2568))), 0x69L)) && l_2598)) , 3L)), l_2598))) , (**p_2820->g_1803))))) != &l_2504), 10)))
                { /* block id: 1345 */
                    uint64_t l_2602 = 0x3818C9BEB14ECB43L;
                    (*p_2820->g_2224) |= ((l_2598 ^ ((void*)0 == &l_2126[0][1])) <= 253UL);
                    for (p_2820->g_799 = 0; (p_2820->g_799 <= 4); p_2820->g_799 += 1)
                    { /* block id: 1349 */
                        (*p_2820->g_2216) = l_2602;
                        return p_2820->g_38;
                    }
                }
                else
                { /* block id: 1353 */
                    uint32_t l_2608 = 4294967295UL;
                    int32_t l_2609 = 1L;
                    uint32_t *l_2625 = &l_2277[0];
                    int32_t ****l_2633 = &l_2632;
                    int8_t *l_2634 = &p_2820->g_2170[4];
                    uint32_t l_2635 = 0xD4142B8BL;
                    for (l_2245 = 1; (l_2245 <= 9); l_2245 += 1)
                    { /* block id: 1356 */
                        int16_t *l_2603 = &l_2441;
                        uint8_t *l_2619 = (void*)0;
                        int i, j;
                        p_2820->g_109[0][0] ^= (((((((((*l_2603) = l_2289[p_2820->g_158][(p_2820->g_158 + 1)]) <= (safe_lshift_func_int16_t_s_s(((l_2608 = (safe_add_func_uint8_t_u_u(2UL, (**p_2820->g_2492)))) > l_2609), ((((p_2820->g_627 < ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((l_2599 == (l_2618 = l_2609)) & 255UL) < 65535UL), l_2568)), 13)), 0x279E2BB2L)) != l_2537)) ^ l_2598) && (*p_2820->g_1753)) < 0xEA24L)))) , (void*)0) == l_2619) & 0UL) , l_2619) == &p_2820->g_627) != 0x7A56C5B4L);
                        l_2620 = (l_2126[0][2] = l_2565);
                    }
                    l_2635 = (safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((((*l_2625) |= p_2820->g_1036) , ((*l_2634) = ((safe_div_func_int16_t_s_s(l_2609, 0x3F33L)) & (+(safe_mul_func_uint16_t_u_u((l_2609 == ((l_2609 < (l_2458 , (l_2538[6][4] ^ ((safe_rshift_func_uint16_t_u_s(((((*l_2633) = l_2632) != (void*)0) || 0x6FL), 4)) <= p_2820->g_287[0])))) && l_2126[0][2])), l_2618)))))), (**p_2820->g_2492))), l_2560));
                    if (l_2504)
                        continue;
                }
                l_2641[2][3] = (((((l_2636[8][0] == (void*)0) ^ (+(-3L))) != ((*l_2638) = (p_2820->g_2419 != l_2637))) == (1UL >= 3UL)) , ((safe_mod_func_int16_t_s_s(l_2599, l_2538[4][6])) >= 18446744073709551609UL));
            }
            else
            { /* block id: 1372 */
                int32_t l_2644 = 6L;
                int32_t l_2645 = 1L;
                uint8_t l_2659 = 0x1EL;
                int8_t l_2717 = 0x48L;
                --l_2646;
                for (l_2239 = 0; (l_2239 <= 0); l_2239 += 1)
                { /* block id: 1376 */
                    uint32_t l_2651 = 0x5073CFE0L;
                    int16_t *l_2652 = &l_2441;
                    int16_t **l_2654 = (void*)0;
                    int16_t **l_2655 = (void*)0;
                    int16_t **l_2656 = &l_2653;
                    int8_t *l_2658 = &l_2097[0][2][4];
                    int32_t **l_2716 = &p_2820->g_1014;
                    int i, j;
                    if ((0x252D0B0A86E23D82L == (safe_add_func_uint64_t_u_u(((l_2651 = ((void*)0 == l_2637)) || ((((*p_2820->g_339) |= ((((~(l_2652 != ((*l_2656) = l_2653))) > (((*l_2658) |= (safe_unary_minus_func_int32_t_s(l_2651))) < (**p_2820->g_2492))) , l_2659) && (((((safe_mul_func_uint16_t_u_u((*p_2820->g_1753), 65535UL)) | l_2651) | 248UL) < l_2126[0][2]) ^ p_2820->g_164))) , 4294967295UL) == l_2643)), l_2645))))
                    { /* block id: 1381 */
                        uint64_t *l_2666[1];
                        int32_t l_2685 = 0x1CBA2CABL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_2666[i] = &p_2820->g_808;
                        l_2126[0][2] = ((safe_lshift_func_int16_t_s_u((((safe_add_func_uint64_t_u_u((++p_2820->g_792[7][0]), l_2651)) <= (l_2659 && ((l_2669 != ((**p_2820->g_2139) = l_2658)) | (safe_div_func_uint16_t_u_u(1UL, (safe_mul_func_uint16_t_u_u((((*l_2318)--) ^ 4294967291UL), ((*l_2653) = ((l_2333 |= (safe_lshift_func_uint8_t_u_s(((*l_2669) ^= (~(safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((l_2645 , 255UL), 6)), ((*p_2820->g_1753) = (safe_mod_func_uint16_t_u_u(((void*)0 != l_2364), l_2684))))))), l_2685))) ^ 0x4C42FFC60965E096L))))))))) ^ l_2126[0][3]), 1)) < l_2214);
                        (**p_2820->g_1218) = func_70(l_2644, p_2820);
                    }
                    else
                    { /* block id: 1391 */
                        uint16_t l_2703 = 0x1456L;
                        int32_t **l_2704 = &p_2820->g_1577;
                        int64_t *****l_2707[2];
                        int8_t l_2718 = 0x0EL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_2707[i] = &l_2343;
                        (*p_2820->g_2216) = ((((p_2820->g_95 , ((safe_mul_func_uint8_t_u_u(((((*l_2652) = (((*p_2820->g_2493) & ((safe_mul_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(((l_2641[2][3] < (0UL > (l_2641[2][3] == (safe_rshift_func_uint8_t_u_s((((safe_mod_func_int16_t_s_s((0L < (safe_sub_func_uint16_t_u_u(l_2645, ((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s((l_2659 ^ (*p_2820->g_1753)))), p_2820->g_185)) == p_2820->g_2258)))), l_2651)) && 0UL) & l_2333), 6))))) && 6UL), 4294967288UL)) && l_2703), l_2703)) < p_2820->g_1867)) != 0UL)) | l_2703) < l_2645), l_2645)) != (*p_2820->g_1753))) ^ 0x402BL) , p_2820->g_2494[0]) ^ l_2126[0][2]);
                        (*l_2704) = ((**p_2820->g_1218) = &l_2599);
                        (*l_2704) = ((++(*p_2820->g_339)) , (void*)0);
                        (**p_2820->g_999) = (((((((void*)0 == l_2707[0]) == (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(1L, ((0x14L < (safe_rshift_func_int16_t_s_s((((((*p_2820->g_1803) = (*p_2820->g_1803)) != ((((*l_2669)++) ^ (p_2820->g_900 ^ p_2820->g_185)) , l_2716)) != (((*p_2820->g_1753) & (***p_2820->g_2486)) >= 0x4335E76989AE111BL)) , l_2717), 14))) <= l_2718))), l_2504))) <= 0xD8L) <= 0x4AL) < p_2820->g_158) ^ l_2651);
                    }
                    return l_2441;
                }
            }
            if ((*p_2820->g_2024))
                break;
            for (p_2820->g_236 = 0; (p_2820->g_236 <= 0); p_2820->g_236 += 1)
            { /* block id: 1408 */
                int32_t *l_2719 = (void*)0;
                (**p_2820->g_1218) = l_2719;
            }
            for (l_2599 = 4; (l_2599 >= 0); l_2599 -= 1)
            { /* block id: 1413 */
                uint16_t l_2720[4] = {0xFDC3L,0xFDC3L,0xFDC3L,0xFDC3L};
                int i;
                (*p_2820->g_2024) = l_2720[0];
                for (p_2820->g_1545 = 0; (p_2820->g_1545 <= 0); p_2820->g_1545 += 1)
                { /* block id: 1417 */
                    if (l_2214)
                        break;
                }
            }
        }
        return l_2277[0];
    }
lbl_2815:
    for (l_2504 = 10; (l_2504 != 28); l_2504 = safe_add_func_int32_t_s_s(l_2504, 4))
    { /* block id: 1426 */
        uint64_t l_2731 = 18446744073709551609UL;
        uint8_t *****l_2744[10][1] = {{&p_2820->g_2138},{&p_2820->g_2138},{&p_2820->g_2138},{&p_2820->g_2138},{&p_2820->g_2138},{&p_2820->g_2138},{&p_2820->g_2138},{&p_2820->g_2138},{&p_2820->g_2138},{&p_2820->g_2138}};
        uint8_t ******l_2743 = &l_2744[7][0];
        int32_t *l_2752 = &p_2820->g_2365[1];
        int32_t l_2758 = 1L;
        int32_t l_2759[10] = {0x7AFCEC1AL,0L,9L,0L,0x7AFCEC1AL,0x7AFCEC1AL,0L,9L,0L,0x7AFCEC1AL};
        int64_t l_2763 = 6L;
        uint32_t l_2764[5][5][10] = {{{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL}},{{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL}},{{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL}},{{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL}},{{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL},{1UL,0UL,4294967291UL,0xB2B5E489L,0UL,0xB2B5E489L,4294967291UL,0UL,1UL,1UL}}};
        int16_t l_2769 = 6L;
        int16_t l_2782 = 0x0EFDL;
        int64_t l_2784 = 0L;
        uint32_t l_2785 = 0xDB80F3CAL;
        int i, j, k;
        (*p_2820->g_240) &= (*p_2820->g_2024);
        if ((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((((0xD911L > (p_2820->g_954 || (l_2731 >= l_2731))) == ((l_2731 < (((*p_2820->g_1577) &= ((**p_2820->g_1217) = ((((!(safe_unary_minus_func_int8_t_s((((((*p_2820->g_2493) == 255UL) , (safe_lshift_func_int16_t_s_u(0x6B51L, 3))) , (safe_div_func_uint64_t_u_u((~((((safe_sub_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s(((safe_add_func_uint64_t_u_u((((((***p_2820->g_1803) , (void*)0) != (void*)0) != l_2731) >= 0x49A40B4E6D73BBFCL), p_2820->g_2489)) && (**p_2820->g_2492)), 7UL)) < 0x38CEL) >= p_2820->g_2258) != 65528UL), 65535UL)) , (void*)0) != &l_2420) <= 1UL)), p_2820->g_744[1]))) , (-1L))))) , l_2743) != p_2820->g_2745[6][0][0]) <= (-5L)))) > l_2[4][4][2])) <= p_2820->g_900)) || (*p_2820->g_2216)) >= l_2277[0]), 4)), p_2820->g_2751[4])), 11)) ^ 0x068BL), 0UL)))
        { /* block id: 1430 */
            (***p_2820->g_1218) &= l_2225[3][5][2];
            (*p_2820->g_999) = l_2752;
        }
        else
        { /* block id: 1433 */
            uint16_t l_2753 = 65535UL;
            int32_t l_2755 = 0L;
            int32_t *l_2756 = &l_2599;
            int32_t *l_2757[4][4] = {{&l_2126[0][5],&l_2126[0][5],&l_2126[0][5],&l_2126[0][5]},{&l_2126[0][5],&l_2126[0][5],&l_2126[0][5],&l_2126[0][5]},{&l_2126[0][5],&l_2126[0][5],&l_2126[0][5],&l_2126[0][5]},{&l_2126[0][5],&l_2126[0][5],&l_2126[0][5],&l_2126[0][5]}};
            int32_t l_2760 = 1L;
            int32_t l_2762 = 0x483B33F3L;
            int i, j;
            l_2753 &= (l_2126[0][2] = l_2245);
            (*l_2752) |= (l_2754 = l_2126[0][2]);
            --l_2764[2][2][5];
            if (l_2252)
                break;
        }
        for (l_2458 = (-3); (l_2458 < 47); l_2458 = safe_add_func_uint16_t_u_u(l_2458, 6))
        { /* block id: 1443 */
            int32_t *l_2770 = &p_2820->g_900;
            int32_t *l_2771 = &l_2599;
            int32_t *l_2772 = &l_2333;
            int32_t *l_2773 = &p_2820->g_2365[1];
            int32_t *l_2774 = &p_2820->g_2365[0];
            int32_t *l_2775 = &p_2820->g_38;
            int32_t *l_2776 = &p_2820->g_745;
            int32_t *l_2777 = &l_2126[0][3];
            int32_t *l_2778 = (void*)0;
            int32_t *l_2779 = &l_2759[4];
            int32_t *l_2780 = &p_2820->g_74[5];
            int32_t *l_2781[3][10][8] = {{{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38}},{{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38}},{{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38},{&p_2820->g_39,&l_2758,&p_2820->g_286,(void*)0,&l_2599,&l_2126[0][1],&p_2820->g_109[0][0],&p_2820->g_38}}};
            int32_t l_2810 = 2L;
            int i, j, k;
            ++l_2785;
            for (p_2820->g_39 = 0; (p_2820->g_39 >= (-4)); p_2820->g_39 = safe_sub_func_uint8_t_u_u(p_2820->g_39, 9))
            { /* block id: 1447 */
                int64_t l_2796 = (-1L);
                uint8_t l_2804 = 0xE6L;
                int8_t *l_2811 = &p_2820->g_627;
                (*l_2772) &= (((safe_div_func_int8_t_s_s(((*l_2811) |= (((safe_mul_func_uint16_t_u_u((*l_2752), ((((*l_2779) ^= (safe_div_func_uint8_t_u_u((p_2820->g_2797++), ((p_2820->g_2170[1] &= (safe_mod_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u(((*p_2820->g_1753) |= ((l_2804 && (*p_2820->g_454)) | (4294967287UL > l_2458))), (safe_unary_minus_func_uint8_t_u((((*p_2820->g_339) = ((0x28L && (*p_2820->g_2493)) > (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((0x75F79E99L ^ (*p_2820->g_1577)), l_2418)), 1)))) , l_2810))))) && (*l_2780)), l_2458))) || (*l_2752))))) != l_2418) < 0x84E6901E6307982EL))) && (*l_2775)) || 0x9EDAA3E93AD22E34L)), (*l_2752))) == (-1L)) > l_2796);
                if ((**p_2820->g_1217))
                    break;
                if (l_2804)
                    goto lbl_2812;
            }
        }
    }
    for (p_2820->g_29 = 5; (p_2820->g_29 >= 6); p_2820->g_29 = safe_add_func_uint32_t_u_u(p_2820->g_29, 7))
    { /* block id: 1462 */
        if (p_2820->g_158)
            goto lbl_2815;
    }
    (*p_2820->g_1577) &= (safe_mul_func_uint16_t_u_u(l_2317, (l_2818 != (void*)0)));
    return p_2820->g_74[5];
}


/* ------------------------------------------ */
/* 
 * reads : p_2820->g_746 p_2820->g_799 p_2820->g_23 p_2820->g_406 p_2820->g_74 p_2820->g_1217 p_2820->g_1216 p_2820->g_5 p_2820->g_808 p_2820->g_2024 p_2820->g_286 p_2820->g_109 p_2820->g_1753 p_2820->g_38 p_2820->g_257 p_2820->g_954
 * writes: p_2820->g_746 p_2820->g_1636 p_2820->g_74 p_2820->g_1545 p_2820->g_799 p_2820->g_1027 p_2820->g_406 p_2820->g_240 p_2820->g_808 p_2820->g_286 p_2820->g_164 p_2820->g_954 p_2820->g_109
 */
int16_t  func_8(uint32_t  p_9, int32_t  p_10, uint8_t  p_11, int32_t  p_12, uint64_t  p_13, struct S0 * p_2820)
{ /* block id: 1033 */
    int32_t l_2016 = 0x66CB1AEEL;
    int32_t *l_2021 = &p_2820->g_109[5][3];
    uint64_t l_2039 = 0x46CFC1DCA97E97DCL;
    int32_t l_2066[3];
    int32_t *l_2067 = &l_2066[0];
    int32_t *l_2068 = &p_2820->g_74[1];
    int32_t *l_2069 = &p_2820->g_286;
    int32_t *l_2070 = &l_2016;
    int32_t *l_2071 = &p_2820->g_286;
    int32_t *l_2072 = (void*)0;
    int32_t *l_2073 = (void*)0;
    int32_t *l_2074[2];
    int32_t l_2075 = 6L;
    uint32_t l_2076 = 4294967288UL;
    int i;
    for (i = 0; i < 3; i++)
        l_2066[i] = 1L;
    for (i = 0; i < 2; i++)
        l_2074[i] = &p_2820->g_38;
    for (p_2820->g_746 = (-28); (p_2820->g_746 == 44); p_2820->g_746++)
    { /* block id: 1036 */
        int32_t *l_2020 = &p_2820->g_5;
        uint32_t l_2025[7][10] = {{4294967295UL,0x9606D0E7L,0x8FFC1A22L,0x3C20C248L,0x8FFC1A22L,0x9606D0E7L,4294967295UL,4294967293UL,0xB5B21FD8L,0xB5B21FD8L},{4294967295UL,0x9606D0E7L,0x8FFC1A22L,0x3C20C248L,0x8FFC1A22L,0x9606D0E7L,4294967295UL,4294967293UL,0xB5B21FD8L,0xB5B21FD8L},{4294967295UL,0x9606D0E7L,0x8FFC1A22L,0x3C20C248L,0x8FFC1A22L,0x9606D0E7L,4294967295UL,4294967293UL,0xB5B21FD8L,0xB5B21FD8L},{4294967295UL,0x9606D0E7L,0x8FFC1A22L,0x3C20C248L,0x8FFC1A22L,0x9606D0E7L,4294967295UL,4294967293UL,0xB5B21FD8L,0xB5B21FD8L},{4294967295UL,0x9606D0E7L,0x8FFC1A22L,0x3C20C248L,0x8FFC1A22L,0x9606D0E7L,4294967295UL,4294967293UL,0xB5B21FD8L,0xB5B21FD8L},{4294967295UL,0x9606D0E7L,0x8FFC1A22L,0x3C20C248L,0x8FFC1A22L,0x9606D0E7L,4294967295UL,4294967293UL,0xB5B21FD8L,0xB5B21FD8L},{4294967295UL,0x9606D0E7L,0x8FFC1A22L,0x3C20C248L,0x8FFC1A22L,0x9606D0E7L,4294967295UL,4294967293UL,0xB5B21FD8L,0xB5B21FD8L}};
        uint8_t ***l_2030 = &p_2820->g_983;
        int8_t *l_2042[5] = {&p_2820->g_627,&p_2820->g_627,&p_2820->g_627,&p_2820->g_627,&p_2820->g_627};
        int8_t **l_2043 = &l_2042[0];
        uint8_t *****l_2055 = (void*)0;
        uint8_t ******l_2056 = &l_2055;
        uint8_t ****l_2058 = &l_2030;
        uint8_t *****l_2057 = &l_2058;
        uint8_t ******l_2059 = (void*)0;
        uint8_t ******l_2060 = (void*)0;
        uint8_t *****l_2062 = &l_2058;
        uint8_t ******l_2061 = &l_2062;
        int64_t *l_2063 = &p_2820->g_164;
        uint32_t *l_2064 = &p_2820->g_954;
        int32_t *l_2065 = &p_2820->g_109[0][0];
        int i, j;
        for (p_2820->g_1636 = (-18); (p_2820->g_1636 == 11); p_2820->g_1636++)
        { /* block id: 1039 */
            int32_t *l_2017 = &p_2820->g_74[1];
            p_10 = p_11;
            (*l_2017) = l_2016;
            for (p_2820->g_1545 = (-2); (p_2820->g_1545 <= 21); p_2820->g_1545++)
            { /* block id: 1044 */
                l_2021 = l_2020;
            }
        }
        for (p_11 = 0; (p_11 <= 9); p_11 += 1)
        { /* block id: 1050 */
            int32_t *l_2022 = &p_2820->g_5;
            for (p_2820->g_799 = 7; (p_2820->g_799 >= 2); p_2820->g_799 -= 1)
            { /* block id: 1053 */
                for (p_2820->g_1027 = 2; (p_2820->g_1027 <= 9); p_2820->g_1027 += 1)
                { /* block id: 1056 */
                    int32_t l_2023 = 0x14765CE4L;
                    int i;
                    if (p_2820->g_23[p_2820->g_799])
                        break;
                    for (p_2820->g_406 = 0; (p_2820->g_406 <= 9); p_2820->g_406 += 1)
                    { /* block id: 1060 */
                        int i;
                        (*p_2820->g_1217) = func_70(p_2820->g_23[p_2820->g_406], p_2820);
                        (**p_2820->g_1216) = l_2022;
                        l_2023 = (*l_2022);
                    }
                    p_10 = p_13;
                }
                for (p_2820->g_808 = 1; (p_2820->g_808 <= 7); p_2820->g_808 += 1)
                { /* block id: 1069 */
                    (*p_2820->g_2024) |= (l_2016 = p_10);
                }
            }
            p_12 = l_2025[1][7];
        }
        l_2016 |= (p_2820->g_109[5][3] | ((((p_12 , ((((((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((*p_2820->g_1753) = ((void*)0 == l_2030)) || (safe_rshift_func_uint16_t_u_s((0x26L || (!((safe_add_func_int8_t_s_s(p_2820->g_74[5], ((((safe_lshift_func_int8_t_s_s(((*l_2020) , 0x66L), 2)) , (~(safe_sub_func_int16_t_s_s((p_12 < l_2039), 0xF3DBL)))) | p_9) , (*l_2020)))) | (*l_2020)))), 3))), (*l_2020))), 1)) < p_10) ^ p_12) > 0xED066D1AL) >= 0x34BE2792L) , p_2820->g_23[7])) < (-1L)) , (void*)0) == (void*)0));
        (*l_2065) = (((*l_2064) &= ((safe_rshift_func_int8_t_s_s(p_2820->g_5, (&p_2820->g_236 != ((((*l_2043) = l_2042[1]) != ((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((p_2820->g_38 && (safe_unary_minus_func_int8_t_s((safe_mod_func_int64_t_s_s(((((((safe_div_func_int8_t_s_s(((((*l_2056) = l_2055) != ((*l_2061) = (l_2057 = l_2057))) ^ ((*l_2063) = (0x749A6E5945C5C831L >= 0x2E188D5A4641132EL))), (((0x9D404DB26CE048BDL && p_11) > 0x0EEFL) | (*l_2021)))) , (*l_2021)) && p_11) != 1UL) || p_11) | p_2820->g_257), 0xA0E3CAC1E57BDF8DL))))), 1UL)), p_9)), 1L)) , (void*)0)) , (void*)0)))) < p_9)) & 7L);
    }
    ++l_2076;
    return p_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_2820->g_29 p_2820->g_38 p_2820->g_39 p_2820->g_74 p_2820->g_23 p_2820->g_95 p_2820->g_5 p_2820->g_109 p_2820->g_164 p_2820->g_158 p_2820->g_183 p_2820->g_185 p_2820->g_240 p_2820->g_115 p_2820->g_236 p_2820->g_162 p_2820->g_286 p_2820->g_302 p_2820->g_252 p_2820->g_287 p_2820->g_257 p_2820->g_477 p_2820->g_745 p_2820->g_792 p_2820->g_799 p_2820->g_808 p_2820->g_746 p_2820->g_1218 p_2820->g_999 p_2820->g_406 p_2820->g_954 p_2820->g_983 p_2820->g_984 p_2820->g_1217 p_2820->g_454 p_2820->g_978 p_2820->g_453 p_2820->g_1027 p_2820->g_758 p_2820->g_161 p_2820->g_2365
 * writes: p_2820->g_29 p_2820->g_38 p_2820->g_39 p_2820->g_74 p_2820->g_95 p_2820->g_109 p_2820->g_115 p_2820->g_158 p_2820->g_161 p_2820->g_162 p_2820->g_164 p_2820->g_183 p_2820->g_185 p_2820->g_23 p_2820->g_236 p_2820->g_240 p_2820->g_252 p_2820->g_257 p_2820->g_287 p_2820->g_302 p_2820->g_339 p_2820->g_406 p_2820->g_286 p_2820->g_452 p_2820->g_477 p_2820->g_744 p_2820->g_745 p_2820->g_792 p_2820->g_799 p_2820->g_808 p_2820->g_454 p_2820->g_954 p_2820->g_1013 p_2820->g_1387 p_2820->g_453 p_2820->g_999 p_2820->g_1577 p_2820->g_1027 p_2820->g_758 p_2820->g_2365
 */
uint32_t  func_19(uint32_t  p_20, int16_t  p_21, struct S0 * p_2820)
{ /* block id: 9 */
    uint32_t l_32[5] = {1UL,1UL,1UL,1UL,1UL};
    uint16_t *l_1634 = &p_2820->g_406;
    int32_t l_1637 = 0x6788CC15L;
    int32_t l_1646 = 0x0E4AF722L;
    int32_t l_1647 = 0x07E41695L;
    int32_t l_1648 = 0x331FAA6DL;
    int32_t l_1649 = (-1L);
    int32_t l_1650 = (-9L);
    int32_t l_1651 = (-1L);
    int32_t l_1652 = 0x62EF4E4CL;
    uint64_t l_1653 = 1UL;
    int32_t l_1665 = 0x38F451B0L;
    int64_t *l_1790 = &p_2820->g_252;
    int64_t **l_1789[8][8][4] = {{{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0}},{{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0}},{{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0}},{{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0}},{{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0}},{{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0}},{{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0}},{{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0},{&l_1790,&l_1790,&l_1790,(void*)0}}};
    int32_t **l_1832 = &p_2820->g_1014;
    uint16_t **l_1877 = &p_2820->g_1753;
    int16_t ***l_1980[10][8][3] = {{{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0}},{{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0}},{{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0}},{{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0}},{{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0}},{{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0}},{{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0}},{{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0}},{{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0}},{{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0},{&p_2820->g_453[3][1][0],&p_2820->g_453[2][1][0],(void*)0}}};
    uint32_t **l_1987 = (void*)0;
    int16_t l_1990 = 0x594DL;
    int i, j, k;
    for (p_21 = 0; (p_21 == 4); p_21++)
    { /* block id: 12 */
        uint8_t l_1605 = 255UL;
        for (p_20 = 1; (p_20 <= 9); p_20 += 1)
        { /* block id: 15 */
            int32_t *l_28 = &p_2820->g_29;
            int32_t *l_30 = &p_2820->g_29;
            int32_t *l_31 = &p_2820->g_29;
            --l_32[0];
        }
        for (p_20 = 0; (p_20 != 57); p_20 = safe_add_func_uint32_t_u_u(p_20, 1))
        { /* block id: 20 */
            int32_t *l_37 = &p_2820->g_29;
            (*l_37) = p_20;
        }
        for (p_20 = 0; (p_20 <= 4); p_20 += 1)
        { /* block id: 25 */
            int32_t *l_46 = (void*)0;
            uint8_t ***l_1583 = &p_2820->g_983;
            uint8_t ****l_1582 = &l_1583;
            for (p_2820->g_29 = 3; (p_2820->g_29 >= 1); p_2820->g_29 -= 1)
            { /* block id: 28 */
                uint32_t l_51 = 0x98AFBB1CL;
                uint8_t ****l_1585 = &l_1583;
                for (p_2820->g_38 = 0; (p_2820->g_38 <= 4); p_2820->g_38 += 1)
                { /* block id: 31 */
                    int32_t *l_52[5][3] = {{&p_2820->g_5,&p_2820->g_29,&p_2820->g_5},{&p_2820->g_5,&p_2820->g_29,&p_2820->g_5},{&p_2820->g_5,&p_2820->g_29,&p_2820->g_5},{&p_2820->g_5,&p_2820->g_29,&p_2820->g_5},{&p_2820->g_5,&p_2820->g_29,&p_2820->g_5}};
                    int i, j;
                    for (p_2820->g_39 = 0; (p_2820->g_39 <= 9); p_2820->g_39 += 1)
                    { /* block id: 34 */
                        uint32_t *l_1071 = &p_2820->g_954;
                        uint32_t **l_1070 = &l_1071;
                        int32_t **l_1576[6] = {&p_2820->g_240,&l_52[0][0],&p_2820->g_240,&p_2820->g_240,&l_52[0][0],&p_2820->g_240};
                        uint8_t *****l_1584 = &l_1582;
                        uint8_t *****l_1586 = &l_1585;
                        uint64_t *l_1587 = &p_2820->g_808;
                        uint64_t *l_1590 = &p_2820->g_1027;
                        int i;
                        p_2820->g_1577 = func_40((l_46 != (func_47(l_32[p_20], l_51, l_52[4][2], p_2820) , (void*)0)), ((*l_1070) = &p_2820->g_954), p_21, (p_2820->g_746 , 0x3BL), l_46, p_2820);
                        l_1605 = (p_20 < (((safe_rshift_func_uint8_t_u_s(l_32[0], 5)) & ((safe_div_func_int32_t_s_s((((*l_1584) = l_1582) != ((*l_1586) = l_1585)), ((((*l_1587)++) != p_21) , p_20))) ^ (p_21 < p_20))) == ((++(*l_1590)) && (safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((p_2820->g_23[(p_2820->g_38 + 2)] = ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(4294967292UL, p_20)), p_20)), 0)) , 1UL)), 1UL)), p_21)), p_2820->g_745)))));
                        return p_21;
                    }
                    return l_32[p_2820->g_29];
                }
            }
        }
    }
    for (p_2820->g_758 = 0; (p_2820->g_758 <= 2); p_2820->g_758 += 1)
    { /* block id: 868 */
        uint8_t l_1616 = 7UL;
        int32_t l_1618 = 0x1161957FL;
        uint16_t *l_1625 = &p_2820->g_158;
        int64_t *l_1635 = &p_2820->g_252;
        int32_t *l_1638 = &p_2820->g_29;
        int32_t *l_1639 = &p_2820->g_286;
        int32_t *l_1640 = (void*)0;
        int32_t *l_1641 = &p_2820->g_745;
        int32_t *l_1642 = &p_2820->g_109[5][1];
        int32_t *l_1643 = &p_2820->g_109[0][0];
        int32_t *l_1644 = &p_2820->g_286;
        int32_t *l_1645[7][8] = {{&l_1618,(void*)0,&p_2820->g_286,&p_2820->g_745,&p_2820->g_29,&l_1618,&p_2820->g_745,&p_2820->g_74[5]},{&l_1618,(void*)0,&p_2820->g_286,&p_2820->g_745,&p_2820->g_29,&l_1618,&p_2820->g_745,&p_2820->g_74[5]},{&l_1618,(void*)0,&p_2820->g_286,&p_2820->g_745,&p_2820->g_29,&l_1618,&p_2820->g_745,&p_2820->g_74[5]},{&l_1618,(void*)0,&p_2820->g_286,&p_2820->g_745,&p_2820->g_29,&l_1618,&p_2820->g_745,&p_2820->g_74[5]},{&l_1618,(void*)0,&p_2820->g_286,&p_2820->g_745,&p_2820->g_29,&l_1618,&p_2820->g_745,&p_2820->g_74[5]},{&l_1618,(void*)0,&p_2820->g_286,&p_2820->g_745,&p_2820->g_29,&l_1618,&p_2820->g_745,&p_2820->g_74[5]},{&l_1618,(void*)0,&p_2820->g_286,&p_2820->g_745,&p_2820->g_29,&l_1618,&p_2820->g_745,&p_2820->g_74[5]}};
        uint8_t ***l_1870 = &p_2820->g_983;
        int32_t **l_1888 = &p_2820->g_1014;
        int16_t ****l_1921[3][3] = {{&p_2820->g_978,&p_2820->g_978,&p_2820->g_978},{&p_2820->g_978,&p_2820->g_978,&p_2820->g_978},{&p_2820->g_978,&p_2820->g_978,&p_2820->g_978}};
        int64_t l_1959 = 0L;
        int i, j;
        (1 + 1);
    }
    return (*p_2820->g_161);
}


/* ------------------------------------------ */
/* 
 * reads : p_2820->g_808 p_2820->g_1218 p_2820->g_999 p_2820->g_240 p_2820->g_23 p_2820->g_74 p_2820->g_109 p_2820->g_406 p_2820->g_38 p_2820->g_745 p_2820->g_954 p_2820->g_158 p_2820->g_983 p_2820->g_984 p_2820->g_185 p_2820->g_286 p_2820->g_1217 p_2820->g_799 p_2820->g_162 p_2820->g_454 p_2820->g_978 p_2820->g_453 p_2820->g_29 p_2820->g_287 p_2820->g_164 p_2820->g_2365
 * writes: p_2820->g_808 p_2820->g_454 p_2820->g_745 p_2820->g_240 p_2820->g_954 p_2820->g_158 p_2820->g_1013 p_2820->g_287 p_2820->g_23 p_2820->g_74 p_2820->g_109 p_2820->g_162 p_2820->g_799 p_2820->g_1387 p_2820->g_453 p_2820->g_302 p_2820->g_999 p_2820->g_792 p_2820->g_164 p_2820->g_2365
 */
int32_t * func_40(uint32_t  p_41, uint32_t * p_42, uint8_t  p_43, uint8_t  p_44, uint32_t * p_45, struct S0 * p_2820)
{ /* block id: 571 */
    int8_t l_1074 = (-8L);
    int16_t ****l_1123 = &p_2820->g_452;
    int32_t l_1129 = 0x7C8A2E89L;
    int32_t l_1151[6] = {6L,6L,6L,6L,6L,6L};
    uint32_t *l_1191 = &p_2820->g_302;
    int64_t l_1239 = 0x10F5BDF62D8D526FL;
    int32_t ***l_1255 = &p_2820->g_1013[0];
    int32_t l_1266 = 0x3514A2D0L;
    uint8_t ***l_1313 = &p_2820->g_983;
    uint8_t ****l_1312 = &l_1313;
    uint8_t l_1314[5] = {0x78L,0x78L,0x78L,0x78L,0x78L};
    uint8_t l_1340 = 0x9EL;
    int32_t l_1399 = 0x4BDA8B36L;
    int32_t **l_1411 = (void*)0;
    int32_t *l_1449[3];
    int16_t l_1450 = 5L;
    int8_t l_1451 = 8L;
    uint64_t l_1452 = 0x63D6936B849F8577L;
    int16_t **l_1455 = &p_2820->g_454;
    int32_t l_1464 = 0x617C8AE8L;
    int64_t l_1465 = 1L;
    uint8_t l_1527 = 0x1FL;
    int64_t ***l_1533 = (void*)0;
    int16_t l_1566 = 0x5633L;
    uint8_t l_1573 = 0x22L;
    int i;
    for (i = 0; i < 3; i++)
        l_1449[i] = &l_1151[4];
    for (p_2820->g_808 = 0; (p_2820->g_808 < 53); p_2820->g_808 = safe_add_func_uint16_t_u_u(p_2820->g_808, 6))
    { /* block id: 574 */
        int32_t l_1130[10];
        int64_t l_1131 = 0x08D251CB53D37F29L;
        int32_t l_1150 = 0x47F655A5L;
        int32_t l_1154 = 0x738554E0L;
        int32_t l_1159 = (-8L);
        int32_t l_1160 = 1L;
        int32_t l_1162 = 0x50F9BE7DL;
        int32_t l_1163 = (-1L);
        int32_t l_1165 = 0x2ADCCBB6L;
        uint32_t **l_1192 = &l_1191;
        int16_t l_1254[4];
        int32_t **l_1315 = &p_2820->g_240;
        uint32_t **l_1319 = &p_2820->g_161;
        uint8_t ****l_1348 = &l_1313;
        uint32_t l_1363 = 2UL;
        int64_t ***l_1390 = &p_2820->g_1388;
        int8_t l_1404 = 0x20L;
        int32_t l_1405 = 1L;
        int32_t l_1407 = 4L;
        int i;
        for (i = 0; i < 10; i++)
            l_1130[i] = 0x324AC471L;
        for (i = 0; i < 4; i++)
            l_1254[i] = 0x7B73L;
        (1 + 1);
    }
lbl_1510:
    l_1452++;
    if ((p_2820->g_745 ^= ((((((***p_2820->g_1218) , ((*l_1455) = &l_1450)) != (void*)0) && ((+(safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((!(p_2820->g_406 <= (safe_lshift_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(((((p_44 <= p_44) , 0x661A598EL) ^ (l_1464 ^= 0x49F64BB7L)) , ((-1L) == p_2820->g_38)), p_43)) & 0xAEL), 6)))), 3)), p_41))) < p_44)) , p_43) & l_1465)))
    { /* block id: 763 */
        (*p_2820->g_999) = p_42;
        (**p_2820->g_999) ^= (safe_lshift_func_int16_t_s_s(0x2B00L, 10));
    }
    else
    { /* block id: 766 */
        int32_t **l_1468[6];
        int32_t l_1476 = 0x1F37AE23L;
        int16_t *l_1544[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_1549 = 0L;
        int32_t l_1550 = 0L;
        int32_t l_1551 = (-8L);
        uint32_t l_1568 = 4294967295UL;
        int i;
        for (i = 0; i < 6; i++)
            l_1468[i] = &p_2820->g_1014;
        for (p_2820->g_158 = 0; (p_2820->g_158 <= 9); p_2820->g_158 += 1)
        { /* block id: 769 */
            uint8_t *l_1469 = &p_2820->g_758;
            uint8_t *l_1472 = &p_2820->g_287[0];
            int32_t *l_1473 = &l_1399;
            uint8_t l_1509 = 0x6AL;
            int32_t l_1541 = 0x2F3F1DF6L;
            int64_t l_1546 = (-1L);
            int32_t l_1562 = 0x6D8F3B0FL;
            int32_t l_1563 = 0x116ED1B3L;
            int32_t l_1565 = 5L;
            int32_t l_1567 = (-1L);
            int i;
            (**p_2820->g_1218) = (**p_2820->g_1218);
            p_2820->g_745 |= (((p_2820->g_23[p_2820->g_158] ^ ((((((((*l_1255) = &p_2820->g_1014) == l_1468[5]) | 3L) & 0x55C2L) , ((l_1469 = (*p_2820->g_983)) == (((~((((~((*l_1472) = (safe_sub_func_uint64_t_u_u(p_2820->g_185, ((***l_1312) == &p_44))))) , p_2820->g_23[p_2820->g_158]) <= 0x09414507L) < 0x3363L)) > p_2820->g_23[p_2820->g_158]) , (void*)0))) | 0x7FL) >= p_2820->g_286)) >= (*p_2820->g_240)) == p_2820->g_38);
            if (((**p_2820->g_1217) = (p_41 != p_2820->g_23[p_2820->g_158])))
            { /* block id: 776 */
                int64_t l_1475 = 0x2193C05D84245836L;
                int8_t *l_1494 = &l_1451;
                (*p_2820->g_999) = l_1473;
                for (p_2820->g_162 = 9; (p_2820->g_162 >= 0); p_2820->g_162 -= 1)
                { /* block id: 780 */
                    int64_t ***l_1478 = (void*)0;
                    int32_t l_1489 = 0x1F3AA9FCL;
                    for (p_2820->g_799 = 2; (p_2820->g_799 >= 0); p_2820->g_799 -= 1)
                    { /* block id: 783 */
                        uint16_t l_1477 = 0UL;
                        int64_t ****l_1479 = &p_2820->g_1387;
                        uint16_t *l_1484 = (void*)0;
                        uint16_t *l_1485 = &l_1477;
                        int32_t l_1488 = 0L;
                        int16_t l_1490 = 0x2DA5L;
                        int32_t **l_1491 = &l_1449[2];
                        int i;
                        (*l_1491) = ((**p_2820->g_1218) = func_70((((safe_unary_minus_func_uint64_t_u((0x4A89L > l_1475))) == (*l_1473)) , (((l_1476 <= l_1477) , (((*l_1479) = l_1478) != (void*)0)) , (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u(((*l_1485) = 0x5D6CL), (((safe_lshift_func_uint16_t_u_u((l_1489 = l_1488), p_2820->g_799)) , l_1476) <= 0L))) ^ l_1490), 5)))), p_2820));
                        (*l_1491) = ((safe_lshift_func_int16_t_s_u(0x6E8DL, ((p_44 != (p_2820->g_23[p_2820->g_162] = ((((((0x43L && ((l_1494 != l_1494) & ((-1L) == (((safe_lshift_func_int16_t_s_s(0x44D6L, 7)) < ((((safe_mul_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(l_1475, 3)), ((safe_mul_func_int16_t_s_s((p_43 , p_43), 0xA137L)) , (-1L)))), l_1489)) , 0L) , (**l_1491)), (-9L))) && p_44) >= l_1475) || 9L)) , 4L)))) == 0xC8B8C1008C38D425L) == p_43) || (-1L)) <= 0x1DL) <= p_44))) , 4UL))) , l_1473);
                    }
                    (*l_1473) = (safe_lshift_func_int16_t_s_s(((*p_2820->g_454) = (p_44 , l_1509)), p_44));
                    if (l_1489)
                        continue;
                }
                (*p_2820->g_978) = (*p_2820->g_978);
                if (p_2820->g_38)
                    goto lbl_1510;
            }
            else
            { /* block id: 798 */
                int64_t *l_1525 = &l_1465;
                int32_t l_1529[8][10][3] = {{{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L}},{{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L}},{{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L}},{{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L}},{{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L}},{{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L}},{{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L}},{{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L},{2L,1L,0x387F0715L}}};
                int64_t ***l_1534 = &p_2820->g_1388;
                int i, j, k;
                for (p_2820->g_302 = 0; (p_2820->g_302 <= 2); p_2820->g_302 += 1)
                { /* block id: 801 */
                    int16_t l_1519 = 0x6E0DL;
                    int8_t *l_1526 = &l_1074;
                    uint16_t *l_1528 = &p_2820->g_406;
                    int32_t l_1547 = 0x170ABC2FL;
                    (*p_2820->g_1218) = (*p_2820->g_1218);
                }
            }
            for (l_1464 = 0; (l_1464 <= 2); l_1464 += 1)
            { /* block id: 838 */
                int32_t l_1564[6];
                int i, j;
                for (i = 0; i < 6; i++)
                    l_1564[i] = 0x3A41C3DCL;
                (**p_2820->g_1217) = (((void*)0 == p_45) || (p_44 ^ (safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_uint64_t_u(((p_2820->g_792[p_2820->g_158][l_1464] = p_2820->g_954) >= p_43))) , 0xF7L), (*l_1473))), ((*l_1472) ^= (((p_2820->g_29 , (((*l_1473) , (**p_2820->g_999)) & p_2820->g_109[0][0])) <= l_1549) >= p_43))))));
                ++l_1568;
            }
        }
        for (p_2820->g_164 = (-1); (p_2820->g_164 <= 0); p_2820->g_164 = safe_add_func_uint16_t_u_u(p_2820->g_164, 6))
        { /* block id: 847 */
            l_1573++;
        }
    }
    return p_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_2820->g_74 p_2820->g_23 p_2820->g_29 p_2820->g_95 p_2820->g_39 p_2820->g_5 p_2820->g_109 p_2820->g_164 p_2820->g_158 p_2820->g_183 p_2820->g_185 p_2820->g_240 p_2820->g_115 p_2820->g_236 p_2820->g_162 p_2820->g_286 p_2820->g_302 p_2820->g_38 p_2820->g_252 p_2820->g_287 p_2820->g_257 p_2820->g_477 p_2820->g_745 p_2820->g_792 p_2820->g_799 p_2820->g_808 p_2820->g_2365
 * writes: p_2820->g_74 p_2820->g_95 p_2820->g_109 p_2820->g_115 p_2820->g_158 p_2820->g_161 p_2820->g_162 p_2820->g_164 p_2820->g_183 p_2820->g_185 p_2820->g_23 p_2820->g_236 p_2820->g_240 p_2820->g_252 p_2820->g_257 p_2820->g_287 p_2820->g_302 p_2820->g_339 p_2820->g_406 p_2820->g_286 p_2820->g_452 p_2820->g_477 p_2820->g_744 p_2820->g_745 p_2820->g_792 p_2820->g_799 p_2820->g_808 p_2820->g_2365
 */
uint32_t  func_47(uint32_t  p_48, uint16_t  p_49, int32_t * p_50, struct S0 * p_2820)
{ /* block id: 35 */
    int32_t *l_55 = &p_2820->g_5;
    int32_t *l_780 = &p_2820->g_745;
    int32_t *l_781 = &p_2820->g_109[0][0];
    int32_t l_788 = (-1L);
    uint64_t *l_791 = &p_2820->g_792[7][0];
    int32_t *l_797 = (void*)0;
    int32_t *l_798 = &p_2820->g_799;
    int32_t l_816 = (-9L);
    int32_t l_853[7];
    uint32_t l_897 = 0xFCC1F487L;
    uint32_t l_930 = 0x3B4852E6L;
    int32_t l_955 = 0x2A097BBBL;
    uint8_t *l_982[10][7] = {{&p_2820->g_287[1],&p_2820->g_287[1],&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_758,(void*)0,&p_2820->g_115},{&p_2820->g_287[1],&p_2820->g_287[1],&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_758,(void*)0,&p_2820->g_115},{&p_2820->g_287[1],&p_2820->g_287[1],&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_758,(void*)0,&p_2820->g_115},{&p_2820->g_287[1],&p_2820->g_287[1],&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_758,(void*)0,&p_2820->g_115},{&p_2820->g_287[1],&p_2820->g_287[1],&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_758,(void*)0,&p_2820->g_115},{&p_2820->g_287[1],&p_2820->g_287[1],&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_758,(void*)0,&p_2820->g_115},{&p_2820->g_287[1],&p_2820->g_287[1],&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_758,(void*)0,&p_2820->g_115},{&p_2820->g_287[1],&p_2820->g_287[1],&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_758,(void*)0,&p_2820->g_115},{&p_2820->g_287[1],&p_2820->g_287[1],&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_758,(void*)0,&p_2820->g_115},{&p_2820->g_287[1],&p_2820->g_287[1],&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_758,(void*)0,&p_2820->g_115}};
    uint8_t **l_981[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j;
    for (i = 0; i < 7; i++)
        l_853[i] = 0x32131309L;
    if ((((*l_781) = ((*l_780) &= func_53(l_55, p_2820))) >= (safe_lshift_func_int16_t_s_u(9L, (safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(((((*l_798) = ((((l_788 = ((void*)0 != p_50)) == (*l_55)) , (safe_add_func_uint64_t_u_u(((*l_791) &= 0x762A2479F4613324L), (!((safe_sub_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(p_48, 0x070C598AADF75CE4L)), 7L)) == (-5L)))))) >= 65535UL)) , p_2820->g_799) > (-8L)), (*l_55))), 0x9D534F5EL))))))
    { /* block id: 401 */
        int16_t l_806 = (-6L);
        int32_t l_807 = 0x3509307CL;
        int32_t l_858 = (-1L);
        int16_t *l_899 = &p_2820->g_257;
        int32_t l_907[3][3][8] = {{{0x2F061264L,(-4L),0x29FE9DB3L,(-3L),6L,0x2F061264L,(-3L),0x0B6F4A5BL},{0x2F061264L,(-4L),0x29FE9DB3L,(-3L),6L,0x2F061264L,(-3L),0x0B6F4A5BL},{0x2F061264L,(-4L),0x29FE9DB3L,(-3L),6L,0x2F061264L,(-3L),0x0B6F4A5BL}},{{0x2F061264L,(-4L),0x29FE9DB3L,(-3L),6L,0x2F061264L,(-3L),0x0B6F4A5BL},{0x2F061264L,(-4L),0x29FE9DB3L,(-3L),6L,0x2F061264L,(-3L),0x0B6F4A5BL},{0x2F061264L,(-4L),0x29FE9DB3L,(-3L),6L,0x2F061264L,(-3L),0x0B6F4A5BL}},{{0x2F061264L,(-4L),0x29FE9DB3L,(-3L),6L,0x2F061264L,(-3L),0x0B6F4A5BL},{0x2F061264L,(-4L),0x29FE9DB3L,(-3L),6L,0x2F061264L,(-3L),0x0B6F4A5BL},{0x2F061264L,(-4L),0x29FE9DB3L,(-3L),6L,0x2F061264L,(-3L),0x0B6F4A5BL}}};
        int i, j, k;
        for (p_2820->g_95 = (-19); (p_2820->g_95 < (-6)); ++p_2820->g_95)
        { /* block id: 404 */
            uint8_t l_811 = 1UL;
            int32_t l_849 = 0x0AD484BFL;
            int32_t l_851 = 0x4804BB77L;
            int32_t l_854 = 3L;
            int32_t l_856 = 0x61FDF137L;
            int32_t l_861 = (-6L);
            int32_t l_908 = (-1L);
            int32_t l_909 = 0L;
            int32_t l_910 = 1L;
            int32_t l_911[3][5] = {{0x15AC8098L,0x15AC8098L,0x15AC8098L,0x15AC8098L,0x15AC8098L},{0x15AC8098L,0x15AC8098L,0x15AC8098L,0x15AC8098L,0x15AC8098L},{0x15AC8098L,0x15AC8098L,0x15AC8098L,0x15AC8098L,0x15AC8098L}};
            int i, j;
            for (p_48 = (-14); (p_48 == 38); p_48++)
            { /* block id: 407 */
                int32_t *l_804 = (void*)0;
                int32_t *l_805[9][2] = {{&p_2820->g_286,&l_788},{&p_2820->g_286,&l_788},{&p_2820->g_286,&l_788},{&p_2820->g_286,&l_788},{&p_2820->g_286,&l_788},{&p_2820->g_286,&l_788},{&p_2820->g_286,&l_788},{&p_2820->g_286,&l_788},{&p_2820->g_286,&l_788}};
                uint32_t *l_812 = (void*)0;
                uint32_t *l_813[2][7][1];
                int64_t *l_817 = &p_2820->g_162;
                int64_t l_833 = 8L;
                uint64_t l_864 = 0x2317AA434184C0CAL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 7; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_813[i][j][k] = (void*)0;
                    }
                }
                p_2820->g_808++;
            }
        }
    }
    else
    { /* block id: 456 */
        uint32_t l_933 = 4294967288UL;
        uint32_t *l_937[10][8][3] = {{{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302}},{{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302}},{{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302}},{{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302}},{{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302}},{{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302}},{{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302}},{{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302}},{{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302}},{{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302},{(void*)0,&p_2820->g_302,&p_2820->g_302}}};
        uint32_t l_947 = 0x72C27A9AL;
        uint16_t l_953 = 1UL;
        int32_t l_990 = 0x44E8D027L;
        uint8_t **l_1009 = &l_982[2][5];
        int32_t l_1012 = 0x457CC895L;
        int32_t **l_1017 = &p_2820->g_1014;
        int i, j, k;
        (*l_781) = (-1L);
    }
    return p_2820->g_745;
}


/* ------------------------------------------ */
/* 
 * reads : p_2820->g_74 p_2820->g_23 p_2820->g_29 p_2820->g_95 p_2820->g_39 p_2820->g_5 p_2820->g_109 p_2820->g_164 p_2820->g_158 p_2820->g_183 p_2820->g_185 p_2820->g_240 p_2820->g_115 p_2820->g_236 p_2820->g_162 p_2820->g_286 p_2820->g_302 p_2820->g_38 p_2820->g_252 p_2820->g_287 p_2820->g_257 p_2820->g_477 p_2820->g_2365
 * writes: p_2820->g_74 p_2820->g_95 p_2820->g_109 p_2820->g_115 p_2820->g_158 p_2820->g_161 p_2820->g_162 p_2820->g_164 p_2820->g_183 p_2820->g_185 p_2820->g_23 p_2820->g_236 p_2820->g_240 p_2820->g_252 p_2820->g_257 p_2820->g_287 p_2820->g_302 p_2820->g_339 p_2820->g_406 p_2820->g_286 p_2820->g_452 p_2820->g_477 p_2820->g_744 p_2820->g_2365
 */
int32_t  func_53(int32_t * p_54, struct S0 * p_2820)
{ /* block id: 36 */
    uint64_t l_61 = 1UL;
    uint32_t l_93 = 8UL;
    int32_t *l_94 = &p_2820->g_95;
    int32_t l_523[4] = {0x05D3FC27L,0x05D3FC27L,0x05D3FC27L,0x05D3FC27L};
    uint32_t **l_551[7][1];
    uint64_t l_593 = 0x39965EF1511349E2L;
    uint64_t l_622 = 0UL;
    int32_t *l_649 = &p_2820->g_74[5];
    int16_t **l_691 = (void*)0;
    int64_t *l_709[6] = {&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252};
    int64_t **l_708 = &l_709[4];
    uint8_t l_732 = 249UL;
    int32_t l_743 = 0x3E2E3DCFL;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_551[i][j] = &p_2820->g_161;
    }
    if ((l_523[1] = (func_56(l_61, l_61, (((safe_sub_func_uint64_t_u_u((func_64(func_67(func_70(l_61, p_2820), (((*l_94) |= ((((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(l_61, l_61)), ((safe_rshift_func_uint16_t_u_s(((l_93 ^= (((+((safe_div_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_div_func_uint8_t_u_u(l_61, (safe_mul_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(((void*)0 == p_54), 0x73L)) < p_2820->g_23[7]), l_61)))), l_61)), l_61)) | l_61)) >= l_61) && p_2820->g_29)) , 0xB878L), 14)) == l_61))), 7)) ^ p_2820->g_29) & 0xCF1AL) > l_61)) , l_93), p_2820), l_61, p_2820) && l_93), p_2820->g_23[7])) >= 0xFEL) & 249UL), &p_2820->g_23[7], p_2820) , 6L)))
    { /* block id: 247 */
        int32_t l_565[8];
        int16_t ***l_584 = &p_2820->g_453[2][3][0];
        int16_t ***l_594 = &p_2820->g_453[7][2][0];
        int32_t *l_600[8] = {&l_565[3],&p_2820->g_109[0][0],&l_565[3],&l_565[3],&p_2820->g_109[0][0],&l_565[3],&l_565[3],&p_2820->g_109[0][0]};
        int32_t **l_599 = &l_600[5];
        uint64_t l_623 = 18446744073709551615UL;
        int32_t l_651[7];
        int32_t l_692 = 0x062D125BL;
        int16_t l_748 = 0x36F1L;
        int i;
        for (i = 0; i < 8; i++)
            l_565[i] = 0x62DA1F31L;
        for (i = 0; i < 7; i++)
            l_651[i] = (-1L);
        for (p_2820->g_185 = (-21); (p_2820->g_185 >= 38); p_2820->g_185 = safe_add_func_int8_t_s_s(p_2820->g_185, 8))
        { /* block id: 250 */
            int32_t **l_526 = &p_2820->g_240;
            (*l_526) = func_70(l_523[3], p_2820);
        }
        for (p_2820->g_286 = 0; (p_2820->g_286 < 14); p_2820->g_286++)
        { /* block id: 255 */
            uint16_t l_529 = 5UL;
            int32_t l_564[7];
            int32_t l_566 = 0x41449956L;
            int16_t l_568[7][5][3] = {{{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L}},{{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L}},{{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L}},{{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L}},{{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L}},{{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L}},{{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L},{1L,1L,0x40C0L}}};
            uint64_t l_571 = 0xC380BC015D1427CAL;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_564[i] = 0L;
            if (l_529)
                break;
            for (l_93 = 0; (l_93 <= 3); l_93 += 1)
            { /* block id: 259 */
                int8_t l_546 = 0L;
                int32_t l_569 = 0x5D73FA28L;
                int i, j;
                (*p_2820->g_240) |= ((((safe_rshift_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((((p_2820->g_109[l_93][l_93] = ((safe_mod_func_uint32_t_u_u((((safe_mod_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u(l_523[l_93], 255UL)) != (safe_sub_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(0xE8L, 0x57L)) , 4L) != ((void*)0 == &p_2820->g_240)), 0x9AL))), 5)) , (((l_523[l_93] | 2UL) , 0xF201EE0BL) , l_529)) >= l_546), p_2820->g_185)) ^ 0x4ACC4667L) , 4294967295UL), l_529)) , l_61)) ^ p_2820->g_164) < l_61), l_61)) > p_2820->g_252) | (-6L)), 10)) || (*p_54)) == l_529) , 7L);
                for (p_2820->g_257 = 14; (p_2820->g_257 == 3); p_2820->g_257 = safe_sub_func_int8_t_s_s(p_2820->g_257, 1))
                { /* block id: 264 */
                    int8_t l_570[10][7][3] = {{{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)}},{{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)}},{{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)}},{{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)}},{{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)}},{{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)}},{{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)}},{{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)}},{{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)}},{{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)},{0x23L,1L,(-1L)}}};
                    int i, j, k;
                    for (p_2820->g_183 = 0; (p_2820->g_183 <= 15); p_2820->g_183++)
                    { /* block id: 267 */
                        int32_t l_558 = (-1L);
                        int32_t *l_563[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int64_t *l_567 = &p_2820->g_164;
                        int i;
                        (*p_2820->g_240) = ((p_2820->g_74[5] & (l_551[5][0] != (void*)0)) & ((((safe_rshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(p_2820->g_236, ((0x62D84A39758BBE7EL || (((*l_567) = ((l_558 <= ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((l_566 ^= ((p_2820->g_38 <= (~0x324809ED593671FAL)) <= ((l_564[1] &= 0x65BD939FL) == l_565[3]))) & (-1L)), 5)), 0xEE48L)) ^ l_529)) ^ 4294967292UL)) || l_568[2][1][1])) < (*p_54)))), l_568[4][4][0])) , l_523[2]), l_568[2][1][1])) || 0x9680F4B95CF47C35L) , (void*)0) != (void*)0));
                        if ((*p_2820->g_240))
                            break;
                        l_571--;
                    }
                }
            }
            for (l_566 = 0; (l_566 <= 6); l_566 += 1)
            { /* block id: 279 */
                int32_t *l_574 = &l_564[1];
                int32_t *l_575[6][9][3] = {{{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]}},{{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]}},{{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]}},{{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]}},{{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]}},{{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]},{(void*)0,&l_523[1],&p_2820->g_109[1][3]}}};
                uint32_t l_576 = 9UL;
                int16_t ****l_581 = &p_2820->g_452;
                int16_t ****l_582 = &p_2820->g_452;
                int16_t ****l_583[7] = {&p_2820->g_452,(void*)0,&p_2820->g_452,&p_2820->g_452,(void*)0,&p_2820->g_452,&p_2820->g_452};
                uint16_t *l_595 = (void*)0;
                uint16_t *l_596 = &p_2820->g_158;
                int32_t **l_597 = (void*)0;
                int32_t **l_598 = &l_575[4][0][0];
                int i, j, k;
                l_576++;
                (*p_2820->g_240) ^= l_564[l_566];
                (*l_598) = (p_2820->g_240 = (((*l_596) = (((safe_rshift_func_uint8_t_u_s((+(((l_584 = (void*)0) != (((safe_mul_func_int16_t_s_s(l_61, (*l_574))) , ((*p_54) == (safe_sub_func_int8_t_s_s(p_2820->g_74[4], (safe_add_func_uint8_t_u_u(((p_2820->g_115 & (safe_sub_func_int16_t_s_s(l_523[1], (0xEC768B44F984032AL & (((l_523[2] != 0x96L) < 0xF9L) || p_2820->g_287[0]))))) < l_565[1]), l_593)))))) , l_594)) <= (*p_54))), 5)) ^ 0x5C19D300L) > l_93)) , &l_565[3]));
            }
        }
        (*l_599) = (p_2820->g_240 = &p_2820->g_109[0][0]);
        for (p_2820->g_158 = 18; (p_2820->g_158 <= 22); p_2820->g_158++)
        { /* block id: 292 */
            uint32_t l_605 = 0x6C1B2E70L;
            int16_t *l_606 = &p_2820->g_257;
            uint32_t **l_609 = &p_2820->g_161;
            int8_t *l_626 = &p_2820->g_627;
            int16_t ***l_628 = &p_2820->g_453[0][4][0];
            int32_t l_650 = 0x55F93C75L;
            uint32_t l_654 = 3UL;
            int32_t l_677 = 0L;
            int32_t l_747[2];
            uint8_t l_777 = 0UL;
            int i;
            for (i = 0; i < 2; i++)
                l_747[i] = (-7L);
            (1 + 1);
        }
    }
    else
    { /* block id: 391 */
        return (*p_54);
    }
    for (p_2820->g_252 = 0; p_2820->g_252 < 5; p_2820->g_252 += 1)
    {
        p_2820->g_744[p_2820->g_252] = 4294967295UL;
    }
    return (*p_2820->g_240);
}


/* ------------------------------------------ */
/* 
 * reads : p_2820->g_74 p_2820->g_95 p_2820->g_109 p_2820->g_164 p_2820->g_158 p_2820->g_23 p_2820->g_183 p_2820->g_185 p_2820->g_5 p_2820->g_240 p_2820->g_115 p_2820->g_236 p_2820->g_162 p_2820->g_286 p_2820->g_302 p_2820->g_38 p_2820->g_252 p_2820->g_287 p_2820->g_257 p_2820->g_477 p_2820->g_2365
 * writes: p_2820->g_74 p_2820->g_158 p_2820->g_161 p_2820->g_162 p_2820->g_164 p_2820->g_183 p_2820->g_185 p_2820->g_23 p_2820->g_109 p_2820->g_236 p_2820->g_240 p_2820->g_252 p_2820->g_257 p_2820->g_287 p_2820->g_302 p_2820->g_339 p_2820->g_115 p_2820->g_406 p_2820->g_286 p_2820->g_452 p_2820->g_477 p_2820->g_2365
 */
uint32_t  func_56(uint64_t  p_57, int16_t  p_58, int16_t  p_59, uint32_t * p_60, struct S0 * p_2820)
{ /* block id: 63 */
    int32_t *l_149 = &p_2820->g_74[0];
    int32_t *l_150 = (void*)0;
    int32_t *l_151[1];
    int32_t l_152 = 2L;
    uint32_t l_153 = 4294967290UL;
    uint32_t *l_160 = &p_2820->g_23[7];
    uint32_t **l_159[4];
    int64_t *l_163 = &p_2820->g_164;
    int32_t *l_373 = &p_2820->g_95;
    int16_t *l_380[1];
    int32_t l_498[6][2] = {{6L,0x361D446EL},{6L,0x361D446EL},{6L,0x361D446EL},{6L,0x361D446EL},{6L,0x361D446EL},{6L,0x361D446EL}};
    uint8_t l_503 = 5UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_151[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_159[i] = &l_160;
    for (i = 0; i < 1; i++)
        l_380[i] = &p_2820->g_183;
lbl_258:
    (*l_149) |= (safe_div_func_uint8_t_u_u(p_59, p_57));
lbl_169:
    l_153--;
    if (((((*l_163) ^= (((((safe_sub_func_uint64_t_u_u(p_2820->g_95, (p_2820->g_158 = (~(+(+0UL)))))) == (0UL > p_2820->g_109[0][0])) , p_60) == ((251UL <= (*l_149)) , (p_2820->g_161 = l_150))) == (p_2820->g_162 = (&p_2820->g_95 == (void*)0)))) , p_2820->g_158) , p_57))
    { /* block id: 70 */
        int16_t l_165 = (-1L);
        return l_165;
    }
    else
    { /* block id: 72 */
        uint64_t l_172[2];
        uint32_t **l_181 = &l_160;
        int64_t l_184 = 0L;
        int32_t l_288 = 0x00A0FC84L;
        int32_t l_324 = (-8L);
        int32_t l_387 = 0x0EA05DB0L;
        int32_t l_389 = 5L;
        int32_t l_390 = (-9L);
        int32_t l_392 = 0x12B6A4CCL;
        int16_t *l_405 = &p_2820->g_257;
        int16_t **l_439 = &l_380[0];
        int32_t l_476 = 5L;
        int32_t l_496 = 0x3FA4A4ADL;
        int32_t l_497 = 0x0942DCC7L;
        int32_t l_499 = (-9L);
        int32_t l_500[6];
        int32_t **l_509 = &p_2820->g_240;
        uint16_t *l_516[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        for (i = 0; i < 2; i++)
            l_172[i] = 0x457B24ACD0642E42L;
        for (i = 0; i < 6; i++)
            l_500[i] = 0x17360851L;
        if ((safe_unary_minus_func_uint16_t_u((safe_sub_func_uint8_t_u_u(p_2820->g_164, p_58)))))
        { /* block id: 73 */
            int64_t l_200 = 0x0E46B9D081BB5C94L;
            int32_t l_238 = 6L;
            int32_t **l_248 = &l_151[0];
            int64_t l_284 = 0x0029260F8D8FAEBDL;
            uint8_t l_320 = 0x8DL;
            int32_t l_362[3];
            uint32_t l_363 = 0x9251144EL;
            int64_t *l_374 = (void*)0;
            int32_t l_418 = 0L;
            int i;
            for (i = 0; i < 3; i++)
                l_362[i] = 0x705B9E60L;
            if (p_59)
                goto lbl_169;
            for (l_152 = 0; (l_152 != 3); ++l_152)
            { /* block id: 77 */
                --l_172[1];
            }
            if (p_2820->g_23[5])
            { /* block id: 80 */
                int16_t *l_182 = &p_2820->g_183;
                int32_t l_188 = 0L;
                int32_t **l_250 = (void*)0;
                int32_t ***l_249 = &l_250;
                int64_t *l_251 = &p_2820->g_252;
                if ((((safe_lshift_func_uint8_t_u_s(0xA6L, 0)) , func_70(((*l_149) = ((p_58 != ((safe_lshift_func_int16_t_s_s(((*l_182) ^= (((safe_sub_func_int32_t_s_s(((((l_172[1] <= (&p_2820->g_161 == &p_2820->g_161)) ^ (&p_2820->g_161 != l_181)) & p_2820->g_109[0][0]) && ((void*)0 != p_60)), 0x11FD1CD5L)) == 7L) & 1L)), p_2820->g_164)) & l_184)) , 0x2FD82489F6C0847AL)), p_2820)) != &p_2820->g_95))
                { /* block id: 83 */
                    uint16_t l_189 = 0xE343L;
                    --p_2820->g_185;
                    --l_189;
                    (*l_149) = (*l_149);
                }
                else
                { /* block id: 87 */
                    uint16_t l_234 = 0xC3A0L;
lbl_241:
                    for (p_58 = (-29); (p_58 < 3); p_58++)
                    { /* block id: 90 */
                        uint8_t l_204 = 0x29L;
                        int32_t l_207 = 9L;
                        uint64_t *l_235 = &p_2820->g_236;
                        uint16_t *l_237 = &l_234;
                        int32_t **l_239[5] = {&l_150,&l_150,&l_150,&l_150,&l_150};
                        int i;
                        l_207 |= ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(p_2820->g_5, (safe_sub_func_uint32_t_u_u(((**l_181) = l_200), ((((*l_149) == p_57) , (safe_unary_minus_func_uint16_t_u(0xE5ADL))) , (safe_mul_func_uint8_t_u_u(((void*)0 == &l_151[0]), l_204))))))), (safe_div_func_int64_t_s_s((l_204 < 0xF697AC61L), 0x166C6893DEB19EFFL)))) | 0x7B931D93L);
                        l_188 = 0L;
                        p_2820->g_240 = func_70((safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((((*l_149) = (((l_238 |= ((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(0xADD7L, (p_58 , ((*l_237) = ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(5L, ((safe_mul_func_uint16_t_u_u((!(((*l_235) = ((+l_184) & ((p_2820->g_158 = (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_58, ((((safe_mod_func_uint8_t_u_u(0x2EL, (safe_mul_func_int8_t_s_s(0x53L, ((p_2820->g_109[2][3] = l_234) <= p_2820->g_164))))) && 0x5409L) , p_2820->g_185) || p_57))), (-5L)))) | 0x97ECL))) , l_200)), 0x1485L)) >= l_207))), 8)), 4)) , l_200))))), p_2820->g_23[5])), 0x41454BE3L)) <= l_200)) , l_172[1]) && p_59)) ^ 0x5869262CL), 0x97L)), p_2820->g_23[4])), p_2820);
                        if (l_238)
                            goto lbl_241;
                        if (l_184)
                            continue;
                    }
                    for (p_58 = 0; (p_58 <= 7); p_58 = safe_add_func_int8_t_s_s(p_58, 6))
                    { /* block id: 106 */
                        if ((*p_2820->g_240))
                            break;
                    }
                }
                (*p_2820->g_240) = p_58;
                p_2820->g_257 = ((((((((safe_add_func_int8_t_s_s((0x64ACL >= (p_2820->g_115 , ((p_2820->g_109[5][0] = (p_58 ^ ((*p_2820->g_240) = (~(((((!p_2820->g_164) < (l_248 != ((*l_249) = (void*)0))) == 8UL) == ((*l_182) = ((((*l_251) = 1L) , ((safe_div_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(((*p_60) ^ (*p_2820->g_240)), (*p_2820->g_240))), p_2820->g_109[0][0])) , p_2820->g_158)) != p_2820->g_236))) == p_2820->g_162))))) == p_58))), p_58)) > 0UL) > (-9L)) , p_57) ^ 65528UL) < (-1L)) < p_57) <= l_184);
            }
            else
            { /* block id: 117 */
                uint32_t l_285 = 4294967295UL;
                uint32_t *l_301 = &p_2820->g_302;
                int16_t *l_309 = &p_2820->g_257;
                int16_t *l_321 = &p_2820->g_183;
                uint16_t *l_322 = (void*)0;
                uint16_t *l_323 = &p_2820->g_158;
                int32_t l_357 = (-1L);
                int64_t *l_376 = (void*)0;
                int64_t **l_375 = &l_376;
                uint8_t *l_377[8][6][5] = {{{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115}},{{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115}},{{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115}},{{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115}},{{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115}},{{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115}},{{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115}},{{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115},{&l_320,&p_2820->g_115,&p_2820->g_115,&l_320,&p_2820->g_115}}};
                int16_t l_382 = 0x7CCBL;
                int32_t l_388 = 0L;
                int32_t l_391[6][8][5] = {{{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL}},{{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL}},{{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL}},{{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL}},{{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL}},{{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL},{0L,0x339C5A72L,0x25A1103EL,1L,0x03D320FFL}}};
                int i, j, k;
                if (p_2820->g_183)
                    goto lbl_258;
                (*l_149) ^= (((p_2820->g_287[0] = (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((l_184 == 0L), ((((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((((p_59 || 0x2B65DB106207E78FL) >= (((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(65532UL, 0x8E6EL)) == (((safe_unary_minus_func_uint64_t_u(((safe_add_func_int64_t_s_s(0x428B240CD41C9934L, (!(safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((l_284 , (((void*)0 == &p_2820->g_240) > 0x9569L)) , p_2820->g_23[7]), p_57)), l_184)), p_59))))) ^ p_2820->g_109[0][0]))) & l_285) , 0x0D38L)), p_58)), l_172[0])), p_59)) , p_2820->g_286) >= l_172[0])) ^ p_57), p_57)), l_172[1])) , 3L) , p_58) < l_172[1]))), l_285))) || 0x23L) < l_288);
                if (((safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((l_324 = (safe_rshift_func_int16_t_s_u((p_58 == (p_2820->g_185 || p_58)), ((*l_323) &= (safe_div_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((((safe_div_func_int64_t_s_s(((((*l_301)++) , (p_2820->g_38 >= ((*l_321) ^= (((safe_add_func_uint32_t_u_u(0x6F5698E3L, 0x2D5373DBL)) , (((*l_309) = (safe_rshift_func_int8_t_s_s(0x7AL, 7))) > (((safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((l_301 != ((safe_rshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(p_57, (*p_60))), (*p_60))) , l_320), p_58)) , (void*)0)), p_2820->g_115)), p_59)) , (*p_2820->g_240)) < 0x215BA4B2L))) != 0UL)))) >= (*p_2820->g_240)), p_2820->g_252)) , (void*)0) != &p_2820->g_39), p_59)), (*p_2820->g_240))))))) && p_2820->g_95), l_172[1])), 0x39DEL)) , 0x13715E3DL))
                { /* block id: 126 */
                    for (l_184 = 0; (l_184 < 9); l_184++)
                    { /* block id: 129 */
                        uint32_t **l_335 = (void*)0;
                        uint32_t **l_336 = &l_301;
                        uint32_t *l_338 = &p_2820->g_302;
                        uint32_t **l_337[7][6] = {{&l_338,&l_338,&l_338,&l_338,&l_338,&l_338},{&l_338,&l_338,&l_338,&l_338,&l_338,&l_338},{&l_338,&l_338,&l_338,&l_338,&l_338,&l_338},{&l_338,&l_338,&l_338,&l_338,&l_338,&l_338},{&l_338,&l_338,&l_338,&l_338,&l_338,&l_338},{&l_338,&l_338,&l_338,&l_338,&l_338,&l_338},{&l_338,&l_338,&l_338,&l_338,&l_338,&l_338}};
                        uint8_t *l_340[1][8];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_340[i][j] = &l_320;
                        }
                        p_2820->g_109[0][0] &= ((l_357 = (((**l_181) = (safe_lshift_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s(p_58, 4294967287UL)), 0x2E3CA7A2L)) == (p_2820->g_115 = (safe_mul_func_int16_t_s_s(0L, ((*l_321) = (&p_2820->g_302 == (p_2820->g_339 = ((*l_336) = p_60)))))))), p_58))) , (safe_mul_func_uint8_t_u_u((((*p_2820->g_240) = p_57) > (~(safe_add_func_uint8_t_u_u((((*p_60)--) && (((~(safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((~((((safe_mul_func_uint16_t_u_u(((*l_323) = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(p_59, 6)), p_2820->g_162))), p_2820->g_183)) && 65528UL) & p_59) < p_2820->g_252)), p_2820->g_287[0])), l_285))) != 0x44L) | p_2820->g_185)), 0xD4L)))), 0xF8L)))) , l_285);
                    }
                }
                else
                { /* block id: 141 */
                    int32_t l_360[9][3][7] = {{{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L}},{{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L}},{{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L}},{{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L}},{{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L}},{{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L}},{{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L}},{{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L}},{{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L},{(-1L),(-1L),0L,0x11EDD722L,0x2A07E57EL,0L,0x17152B89L}}};
                    int i, j, k;
                    for (p_2820->g_164 = 0; (p_2820->g_164 >= (-23)); p_2820->g_164 = safe_sub_func_uint16_t_u_u(p_2820->g_164, 8))
                    { /* block id: 144 */
                        int16_t l_361 = 0x18E5L;
                        (*l_248) = p_60;
                        ++l_363;
                    }
                }
                if (((((p_2820->g_115 & (((0L > (safe_div_func_uint32_t_u_u((*p_60), ((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((*l_309) &= (safe_unary_minus_func_int32_t_s((((((p_60 != l_373) == p_2820->g_74[0]) , l_374) == ((*l_375) = (void*)0)) | p_2820->g_162)))), 9UL)), 13)) , (*p_2820->g_240))))) , 0xB984F1DCD4565DFAL) >= p_59)) , l_377[1][3][2]) != &l_320) & p_2820->g_162))
                { /* block id: 151 */
                    return (*p_60);
                }
                else
                { /* block id: 153 */
                    uint16_t l_383 = 0xD9BAL;
                    int32_t l_386[8][10][1] = {{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}}};
                    uint32_t l_393 = 0xA9F0DDABL;
                    uint64_t *l_400 = &l_172[1];
                    int64_t l_407 = 6L;
                    int i, j, k;
                    for (l_200 = 0; (l_200 == 14); l_200 = safe_add_func_int8_t_s_s(l_200, 6))
                    { /* block id: 156 */
                        int16_t **l_381 = &l_380[0];
                        (*l_248) = func_70(p_2820->g_162, p_2820);
                        (*l_149) &= (((*l_381) = l_380[0]) != l_321);
                    }
                    l_383--;
                    l_393--;
                    (*p_2820->g_240) = ((((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int64_t_s_s((p_2820->g_185 && ((*l_400) = p_2820->g_74[5])), (safe_mod_func_int8_t_s_s(((((p_2820->g_183 && (p_59 >= p_2820->g_5)) , ((((*l_321) = 0L) >= ((void*)0 != l_151[0])) , (safe_sub_func_int8_t_s_s((p_2820->g_406 = (&p_2820->g_183 != l_405)), l_383)))) || 0x1E579645L) || p_2820->g_164), 250UL)))) == (*p_60)), l_407)) , 0x1AL) , (void*)0) != &p_2820->g_161);
                }
            }
            for (l_284 = 1; (l_284 <= 5); l_284 += 1)
            { /* block id: 171 */
                uint32_t l_424[8][9] = {{1UL,0xD79DD359L,4294967294UL,8UL,0UL,0x6EE13196L,0x0FA5BFEAL,0x5CA2923BL,0xD79DD359L},{1UL,0xD79DD359L,4294967294UL,8UL,0UL,0x6EE13196L,0x0FA5BFEAL,0x5CA2923BL,0xD79DD359L},{1UL,0xD79DD359L,4294967294UL,8UL,0UL,0x6EE13196L,0x0FA5BFEAL,0x5CA2923BL,0xD79DD359L},{1UL,0xD79DD359L,4294967294UL,8UL,0UL,0x6EE13196L,0x0FA5BFEAL,0x5CA2923BL,0xD79DD359L},{1UL,0xD79DD359L,4294967294UL,8UL,0UL,0x6EE13196L,0x0FA5BFEAL,0x5CA2923BL,0xD79DD359L},{1UL,0xD79DD359L,4294967294UL,8UL,0UL,0x6EE13196L,0x0FA5BFEAL,0x5CA2923BL,0xD79DD359L},{1UL,0xD79DD359L,4294967294UL,8UL,0UL,0x6EE13196L,0x0FA5BFEAL,0x5CA2923BL,0xD79DD359L},{1UL,0xD79DD359L,4294967294UL,8UL,0UL,0x6EE13196L,0x0FA5BFEAL,0x5CA2923BL,0xD79DD359L}};
                int i, j;
                p_2820->g_74[l_284] = ((p_2820->g_74[l_284] , (safe_sub_func_int32_t_s_s((((safe_add_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((l_418 <= (((l_163 != &p_2820->g_162) <= (safe_lshift_func_int16_t_s_u(((p_2820->g_74[l_284] | (p_58 != (p_2820->g_23[7] && p_2820->g_95))) != (safe_unary_minus_func_uint32_t_u(((void*)0 != &p_2820->g_23[8])))), p_2820->g_74[l_284]))) == l_424[4][7])), p_57)) || 2L), 7UL)), (*p_2820->g_240))) == p_2820->g_74[5]), 0x242DL)) < 0x0E562B43E68DD99FL) > 0x19C4L), (*p_2820->g_240)))) == p_59);
                return (*l_149);
            }
        }
        else
        { /* block id: 175 */
            int64_t *l_430[3];
            int32_t l_432 = 0x2F0BA95AL;
            int16_t ***l_450 = &l_439;
            int16_t ****l_451[9][6] = {{&l_450,&l_450,&l_450,&l_450,&l_450,&l_450},{&l_450,&l_450,&l_450,&l_450,&l_450,&l_450},{&l_450,&l_450,&l_450,&l_450,&l_450,&l_450},{&l_450,&l_450,&l_450,&l_450,&l_450,&l_450},{&l_450,&l_450,&l_450,&l_450,&l_450,&l_450},{&l_450,&l_450,&l_450,&l_450,&l_450,&l_450},{&l_450,&l_450,&l_450,&l_450,&l_450,&l_450},{&l_450,&l_450,&l_450,&l_450,&l_450,&l_450},{&l_450,&l_450,&l_450,&l_450,&l_450,&l_450}};
            uint64_t *l_455 = &l_172[1];
            uint16_t l_458 = 0xA71DL;
            int32_t l_463 = 0L;
            int32_t l_471 = 1L;
            int32_t l_473 = 0x246D72C8L;
            int32_t l_475[10][1][5] = {{{(-6L),0x0B8752B9L,0x3F2FF417L,(-6L),0L}},{{(-6L),0x0B8752B9L,0x3F2FF417L,(-6L),0L}},{{(-6L),0x0B8752B9L,0x3F2FF417L,(-6L),0L}},{{(-6L),0x0B8752B9L,0x3F2FF417L,(-6L),0L}},{{(-6L),0x0B8752B9L,0x3F2FF417L,(-6L),0L}},{{(-6L),0x0B8752B9L,0x3F2FF417L,(-6L),0L}},{{(-6L),0x0B8752B9L,0x3F2FF417L,(-6L),0L}},{{(-6L),0x0B8752B9L,0x3F2FF417L,(-6L),0L}},{{(-6L),0x0B8752B9L,0x3F2FF417L,(-6L),0L}},{{(-6L),0x0B8752B9L,0x3F2FF417L,(-6L),0L}}};
            int32_t **l_508 = &l_150;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_430[i] = &p_2820->g_162;
            for (l_153 = 0; (l_153 <= 0); l_153 += 1)
            { /* block id: 178 */
                int32_t l_431 = 0x23E3F5EAL;
                uint16_t l_433[10][8] = {{0xBC31L,65528UL,0x9449L,0UL,0x7BAAL,0x7BAAL,0UL,0x9449L},{0xBC31L,65528UL,0x9449L,0UL,0x7BAAL,0x7BAAL,0UL,0x9449L},{0xBC31L,65528UL,0x9449L,0UL,0x7BAAL,0x7BAAL,0UL,0x9449L},{0xBC31L,65528UL,0x9449L,0UL,0x7BAAL,0x7BAAL,0UL,0x9449L},{0xBC31L,65528UL,0x9449L,0UL,0x7BAAL,0x7BAAL,0UL,0x9449L},{0xBC31L,65528UL,0x9449L,0UL,0x7BAAL,0x7BAAL,0UL,0x9449L},{0xBC31L,65528UL,0x9449L,0UL,0x7BAAL,0x7BAAL,0UL,0x9449L},{0xBC31L,65528UL,0x9449L,0UL,0x7BAAL,0x7BAAL,0UL,0x9449L},{0xBC31L,65528UL,0x9449L,0UL,0x7BAAL,0x7BAAL,0UL,0x9449L},{0xBC31L,65528UL,0x9449L,0UL,0x7BAAL,0x7BAAL,0UL,0x9449L}};
                int16_t **l_436 = &l_405;
                int i, j;
                l_151[l_153] = l_151[l_153];
                for (l_152 = 0; (l_152 <= 6); l_152 += 1)
                { /* block id: 182 */
                    int16_t ***l_437 = (void*)0;
                    int16_t ***l_438[5][8][6] = {{{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436}},{{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436}},{{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436}},{{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436}},{{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436}}};
                    int i, j, k;
                    for (p_2820->g_286 = 0; (p_2820->g_286 <= 0); p_2820->g_286 += 1)
                    { /* block id: 185 */
                        int i, j;
                        if (p_2820->g_23[l_152])
                            break;
                        (*l_149) &= ((p_2820->g_109[(l_153 + 4)][(l_152 + 1)] , (void*)0) == (void*)0);
                        return (*p_60);
                    }
                    p_2820->g_109[l_152][(l_153 + 2)] |= ((-1L) != (safe_lshift_func_int16_t_s_s((!(safe_unary_minus_func_uint32_t_u((++p_2820->g_23[(l_152 + 3)])))), ((void*)0 != l_430[0]))));
                    ++l_433[5][4];
                    l_439 = l_436;
                }
            }
            if ((safe_add_func_uint32_t_u_u(3UL, (((*p_60) = (*p_60)) < ((safe_add_func_int64_t_s_s(p_57, (p_2820->g_164 = (((safe_div_func_uint64_t_u_u(((*l_455) = ((-1L) != (safe_sub_func_int16_t_s_s(0x172EL, ((safe_sub_func_uint64_t_u_u(p_59, l_184)) > (((((p_2820->g_452 = l_450) != (void*)0) | p_59) || p_59) | p_57)))))), p_59)) , p_59) >= l_432)))) ^ l_432)))))
            { /* block id: 200 */
                uint32_t l_464 = 0x606CCB5CL;
                int32_t l_469 = 0L;
                int32_t l_470 = 0x5C275228L;
                int32_t l_472 = 0L;
                int32_t l_474[10][2] = {{(-10L),0L},{(-10L),0L},{(-10L),0L},{(-10L),0L},{(-10L),0L},{(-10L),0L},{(-10L),0L},{(-10L),0L},{(-10L),0L},{(-10L),0L}};
                int64_t *l_485[6][10][4] = {{{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252}},{{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252}},{{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252}},{{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252}},{{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252}},{{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252},{&p_2820->g_252,&p_2820->g_252,&p_2820->g_252,&p_2820->g_252}}};
                int i, j, k;
                for (p_2820->g_158 = 15; (p_2820->g_158 != 42); p_2820->g_158 = safe_add_func_uint8_t_u_u(p_2820->g_158, 9))
                { /* block id: 203 */
                    uint16_t l_460 = 0UL;
                    int32_t *l_467[8][2][5] = {{{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463},{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463}},{{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463},{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463}},{{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463},{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463}},{{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463},{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463}},{{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463},{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463}},{{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463},{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463}},{{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463},{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463}},{{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463},{&l_432,&l_392,&p_2820->g_38,&l_390,&l_463}}};
                    int i, j, k;
                    (1 + 1);
                }
                p_2820->g_477--;
                for (p_2820->g_115 = 0; (p_2820->g_115 <= 1); p_2820->g_115 += 1)
                { /* block id: 220 */
                    uint32_t l_480[1][5][9] = {{{0xC2A7F374L,0x5757A222L,0xC2A7F374L,0xC2A7F374L,0x5757A222L,0xC2A7F374L,0xC2A7F374L,0x5757A222L,0xC2A7F374L},{0xC2A7F374L,0x5757A222L,0xC2A7F374L,0xC2A7F374L,0x5757A222L,0xC2A7F374L,0xC2A7F374L,0x5757A222L,0xC2A7F374L},{0xC2A7F374L,0x5757A222L,0xC2A7F374L,0xC2A7F374L,0x5757A222L,0xC2A7F374L,0xC2A7F374L,0x5757A222L,0xC2A7F374L},{0xC2A7F374L,0x5757A222L,0xC2A7F374L,0xC2A7F374L,0x5757A222L,0xC2A7F374L,0xC2A7F374L,0x5757A222L,0xC2A7F374L},{0xC2A7F374L,0x5757A222L,0xC2A7F374L,0xC2A7F374L,0x5757A222L,0xC2A7F374L,0xC2A7F374L,0x5757A222L,0xC2A7F374L}}};
                    int i, j, k;
                    ++l_480[0][2][7];
                    for (l_476 = 1; (l_476 >= 0); l_476 -= 1)
                    { /* block id: 224 */
                        int32_t **l_483 = (void*)0;
                        int32_t **l_484 = &l_150;
                        (*l_484) = &p_2820->g_29;
                        l_387 |= (l_472 |= ((*l_149) |= ((l_485[5][5][3] != (void*)0) , (18446744073709551615UL == 18446744073709551611UL))));
                    }
                }
            }
            else
            { /* block id: 231 */
                int32_t l_486 = 0x1E27D1C3L;
                int32_t l_487 = 1L;
                int32_t l_488 = 0x332B41EAL;
                int32_t l_489 = 0x61982765L;
                int32_t l_490 = 1L;
                int32_t l_491 = 0x42E20784L;
                int32_t l_492 = 0x5134488FL;
                int32_t l_493 = 3L;
                int32_t l_494 = (-1L);
                int32_t l_495 = 1L;
                int32_t l_501 = 0x266FFBC8L;
                int32_t l_502 = (-5L);
                l_503++;
            }
            for (l_473 = 26; (l_473 > 12); l_473--)
            { /* block id: 236 */
                if (p_57)
                    goto lbl_258;
                (*p_2820->g_240) |= ((l_508 = &l_150) == (p_58 , l_509));
            }
        }
        p_2820->g_109[0][0] ^= (safe_mod_func_int32_t_s_s((p_2820->g_95 != (+(safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((&p_2820->g_74[5] == (void*)0), ((((**l_509) |= 65527UL) == (p_2820->g_287[1] < (safe_mod_func_uint32_t_u_u(4294967290UL, (safe_mul_func_int16_t_s_s(p_58, (safe_sub_func_uint8_t_u_u(((-10L) && p_59), 247UL)))))))) > 3UL))), p_2820->g_183)))), (-1L)));
    }
    return (*p_60);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_64(uint64_t  p_65, uint8_t  p_66, struct S0 * p_2820)
{ /* block id: 61 */
    int8_t l_146[6];
    int i;
    for (i = 0; i < 6; i++)
        l_146[i] = (-1L);
    return l_146[5];
}


/* ------------------------------------------ */
/* 
 * reads : p_2820->g_39 p_2820->g_95 p_2820->g_5 p_2820->g_23 p_2820->g_29 p_2820->g_74 p_2820->g_109
 * writes: p_2820->g_95 p_2820->g_109 p_2820->g_115 p_2820->g_74
 */
uint64_t  func_67(uint32_t * p_68, int32_t  p_69, struct S0 * p_2820)
{ /* block id: 42 */
    int32_t *l_104 = &p_2820->g_74[0];
    int32_t l_117 = (-4L);
    int32_t l_119 = (-1L);
    int32_t l_120 = 0x537EA6E2L;
    int32_t l_121 = (-1L);
    int32_t l_122 = 0x5A4A6FB2L;
    int32_t l_123 = 0x067A3060L;
    int32_t l_126[10];
    int32_t l_130 = 8L;
    int32_t l_131 = 0x796AAEAAL;
    uint8_t *l_143 = &p_2820->g_115;
    int32_t *l_144 = (void*)0;
    int32_t *l_145 = &p_2820->g_109[0][0];
    int i;
    for (i = 0; i < 10; i++)
        l_126[i] = 0x622E13D9L;
    if ((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(p_2820->g_39, 0x1A38L)), p_69)))
    { /* block id: 43 */
        int32_t l_116 = 0x583E4BC4L;
        int32_t l_118 = 0x239AE860L;
        int32_t l_124 = 0x37B5B8CCL;
        int32_t l_125 = 0x5FB2DAB2L;
        int32_t l_127 = 0L;
        int32_t l_128 = 0x4B5441F7L;
        int32_t l_129[3];
        int i;
        for (i = 0; i < 3; i++)
            l_129[i] = (-3L);
        for (p_2820->g_95 = 0; (p_2820->g_95 < (-15)); p_2820->g_95--)
        { /* block id: 46 */
            int32_t *l_103[4][1][5] = {{{&p_2820->g_39,(void*)0,&p_2820->g_39,(void*)0,&p_2820->g_39}},{{&p_2820->g_39,(void*)0,&p_2820->g_39,(void*)0,&p_2820->g_39}},{{&p_2820->g_39,(void*)0,&p_2820->g_39,(void*)0,&p_2820->g_39}},{{&p_2820->g_39,(void*)0,&p_2820->g_39,(void*)0,&p_2820->g_39}}};
            int32_t **l_102[2][8] = {{&l_103[0][0][1],&l_103[0][0][1],&l_103[0][0][1],&l_103[0][0][1],&l_103[0][0][1],&l_103[0][0][1],&l_103[0][0][1],&l_103[0][0][1]},{&l_103[0][0][1],&l_103[0][0][1],&l_103[0][0][1],&l_103[0][0][1],&l_103[0][0][1],&l_103[0][0][1],&l_103[0][0][1],&l_103[0][0][1]}};
            uint8_t *l_114 = &p_2820->g_115;
            uint16_t l_132 = 0x053FL;
            int i, j, k;
            l_104 = (void*)0;
            l_118 = (safe_rshift_func_uint16_t_u_s(0x17E4L, (((safe_add_func_uint64_t_u_u(((p_2820->g_109[0][0] = (p_69 != ((p_69 , p_69) & p_2820->g_5))) , ((safe_mul_func_int16_t_s_s(p_2820->g_23[6], ((safe_rshift_func_uint16_t_u_s(((((*l_114) = p_69) & (+l_116)) , 0xF823L), l_117)) == 0x48D7L))) < p_2820->g_95)), p_2820->g_29)) ^ 0x4278DB3DL) != p_2820->g_74[5])));
            l_132--;
            l_129[0] = 1L;
        }
    }
    else
    { /* block id: 54 */
        return (*l_104);
    }
    p_2820->g_74[2] |= ((*l_145) = ((((p_2820->g_23[7] & p_69) > (p_2820->g_23[7] , (safe_sub_func_int8_t_s_s(p_69, (1L || (p_2820->g_109[0][0] | ((safe_mul_func_uint8_t_u_u(p_69, ((*l_143) = (3L ^ (safe_mod_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(0x63L, p_69)) == (*p_68)) | p_2820->g_39), 0x1727L)))))) ^ p_2820->g_23[9]))))))) <= 0x607EB25AL) == p_69));
    return p_2820->g_109[0][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_2820->g_74
 * writes: p_2820->g_74
 */
uint32_t * func_70(int64_t  p_71, struct S0 * p_2820)
{ /* block id: 37 */
    int16_t l_72 = 0x0E89L;
    int32_t *l_73 = &p_2820->g_74[5];
    (*l_73) ^= l_72;
    return &p_2820->g_23[7];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_2821;
    struct S0* p_2820 = &c_2821;
    struct S0 c_2822 = {
        1L, // p_2820->g_3
        0x00563ADEL, // p_2820->g_4
        (-1L), // p_2820->g_5
        {4294967288UL,0UL,4294967288UL,4294967288UL,0UL,4294967288UL,4294967288UL,0UL,4294967288UL,4294967288UL}, // p_2820->g_23
        (-1L), // p_2820->g_29
        0x6B8FC401L, // p_2820->g_38
        0x54759719L, // p_2820->g_39
        {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}, // p_2820->g_74
        0x22A84738L, // p_2820->g_95
        {{0x346DDCF8L,0x47056167L,0x60B92564L,(-1L),5L,0x346DDCF8L,(-1L),2L,(-1L)},{0x346DDCF8L,0x47056167L,0x60B92564L,(-1L),5L,0x346DDCF8L,(-1L),2L,(-1L)},{0x346DDCF8L,0x47056167L,0x60B92564L,(-1L),5L,0x346DDCF8L,(-1L),2L,(-1L)},{0x346DDCF8L,0x47056167L,0x60B92564L,(-1L),5L,0x346DDCF8L,(-1L),2L,(-1L)},{0x346DDCF8L,0x47056167L,0x60B92564L,(-1L),5L,0x346DDCF8L,(-1L),2L,(-1L)},{0x346DDCF8L,0x47056167L,0x60B92564L,(-1L),5L,0x346DDCF8L,(-1L),2L,(-1L)},{0x346DDCF8L,0x47056167L,0x60B92564L,(-1L),5L,0x346DDCF8L,(-1L),2L,(-1L)}}, // p_2820->g_109
        0x39L, // p_2820->g_115
        6UL, // p_2820->g_158
        &p_2820->g_23[7], // p_2820->g_161
        0x5F33A8D96A39DDDDL, // p_2820->g_162
        8L, // p_2820->g_164
        0x22EFL, // p_2820->g_183
        0UL, // p_2820->g_185
        18446744073709551614UL, // p_2820->g_236
        &p_2820->g_74[5], // p_2820->g_240
        1L, // p_2820->g_252
        0x71F2L, // p_2820->g_257
        (-1L), // p_2820->g_286
        {250UL,250UL,250UL}, // p_2820->g_287
        1UL, // p_2820->g_302
        &p_2820->g_302, // p_2820->g_339
        0x2A5EL, // p_2820->g_406
        &p_2820->g_183, // p_2820->g_454
        {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}}, // p_2820->g_453
        &p_2820->g_453[3][1][0], // p_2820->g_452
        0x54EB83FFL, // p_2820->g_477
        (-1L), // p_2820->g_627
        {0UL,0UL,0UL,0UL,0UL}, // p_2820->g_744
        9L, // p_2820->g_745
        0xEC2F2CEFL, // p_2820->g_746
        1UL, // p_2820->g_758
        {{18446744073709551615UL,18446744073709551615UL,8UL},{18446744073709551615UL,18446744073709551615UL,8UL},{18446744073709551615UL,18446744073709551615UL,8UL},{18446744073709551615UL,18446744073709551615UL,8UL},{18446744073709551615UL,18446744073709551615UL,8UL},{18446744073709551615UL,18446744073709551615UL,8UL},{18446744073709551615UL,18446744073709551615UL,8UL},{18446744073709551615UL,18446744073709551615UL,8UL},{18446744073709551615UL,18446744073709551615UL,8UL},{18446744073709551615UL,18446744073709551615UL,8UL}}, // p_2820->g_792
        0x30FE0632L, // p_2820->g_799
        0xD280F65C1458E254L, // p_2820->g_808
        (-10L), // p_2820->g_900
        0x2FE1CC67L, // p_2820->g_954
        &p_2820->g_453[2][3][0], // p_2820->g_978
        {{{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]}},{{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]}},{{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]}},{{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]},{&p_2820->g_287[0],&p_2820->g_287[2],(void*)0,&p_2820->g_287[2],&p_2820->g_287[0],&p_2820->g_287[0],&p_2820->g_287[2]}}}, // p_2820->g_984
        &p_2820->g_984[1][6][3], // p_2820->g_983
        &p_2820->g_240, // p_2820->g_999
        &p_2820->g_95, // p_2820->g_1014
        {&p_2820->g_1014,&p_2820->g_1014,&p_2820->g_1014,&p_2820->g_1014,&p_2820->g_1014,&p_2820->g_1014,&p_2820->g_1014,&p_2820->g_1014}, // p_2820->g_1013
        0xB0769F68824B3BBEL, // p_2820->g_1027
        0x6CB8A29CL, // p_2820->g_1036
        (void*)0, // p_2820->g_1109
        {&p_2820->g_1109}, // p_2820->g_1108
        &p_2820->g_240, // p_2820->g_1217
        &p_2820->g_1217, // p_2820->g_1216
        &p_2820->g_999, // p_2820->g_1218
        {{(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0,(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0},{(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0,(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0},{(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0,(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0},{(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0,(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0},{(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0,(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0},{(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0,(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0},{(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0,(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0},{(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0,(void*)0,&p_2820->g_984[2][4][6],&p_2820->g_984[1][6][3],&p_2820->g_984[2][4][6],(void*)0}}, // p_2820->g_1311
        &p_2820->g_1311[3][6], // p_2820->g_1310
        &p_2820->g_1310, // p_2820->g_1309
        (void*)0, // p_2820->g_1388
        &p_2820->g_1388, // p_2820->g_1387
        0x465FACA961F6ABE3L, // p_2820->g_1545
        &p_2820->g_109[0][5], // p_2820->g_1577
        0xBCFEDEB99C69CF1DL, // p_2820->g_1636
        &p_2820->g_406, // p_2820->g_1753
        &p_2820->g_1013[0], // p_2820->g_1803
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_2820->g_1847
        1L, // p_2820->g_1867
        &p_2820->g_286, // p_2820->g_2024
        &p_2820->g_983, // p_2820->g_2139
        &p_2820->g_2139, // p_2820->g_2138
        {0x28L,0x28L,0x28L,0x28L,0x28L}, // p_2820->g_2170
        4294967290UL, // p_2820->g_2213
        {{(void*)0,&p_2820->g_2213,(void*)0,(void*)0},{(void*)0,&p_2820->g_2213,(void*)0,(void*)0},{(void*)0,&p_2820->g_2213,(void*)0,(void*)0},{(void*)0,&p_2820->g_2213,(void*)0,(void*)0},{(void*)0,&p_2820->g_2213,(void*)0,(void*)0},{(void*)0,&p_2820->g_2213,(void*)0,(void*)0}}, // p_2820->g_2212
        &p_2820->g_2212[2][2], // p_2820->g_2211
        &p_2820->g_2211, // p_2820->g_2210
        {&p_2820->g_109[0][0],&p_2820->g_109[0][0],&p_2820->g_109[0][0],&p_2820->g_109[0][0],&p_2820->g_109[0][0],&p_2820->g_109[0][0],&p_2820->g_109[0][0],&p_2820->g_109[0][0]}, // p_2820->g_2215
        &p_2820->g_286, // p_2820->g_2216
        &p_2820->g_74[5], // p_2820->g_2224
        0UL, // p_2820->g_2258
        {{{&p_2820->g_161,&p_2820->g_161,&p_2820->g_161,(void*)0,&p_2820->g_161,&p_2820->g_161},{&p_2820->g_161,&p_2820->g_161,&p_2820->g_161,(void*)0,&p_2820->g_161,&p_2820->g_161},{&p_2820->g_161,&p_2820->g_161,&p_2820->g_161,(void*)0,&p_2820->g_161,&p_2820->g_161},{&p_2820->g_161,&p_2820->g_161,&p_2820->g_161,(void*)0,&p_2820->g_161,&p_2820->g_161},{&p_2820->g_161,&p_2820->g_161,&p_2820->g_161,(void*)0,&p_2820->g_161,&p_2820->g_161}},{{&p_2820->g_161,&p_2820->g_161,&p_2820->g_161,(void*)0,&p_2820->g_161,&p_2820->g_161},{&p_2820->g_161,&p_2820->g_161,&p_2820->g_161,(void*)0,&p_2820->g_161,&p_2820->g_161},{&p_2820->g_161,&p_2820->g_161,&p_2820->g_161,(void*)0,&p_2820->g_161,&p_2820->g_161},{&p_2820->g_161,&p_2820->g_161,&p_2820->g_161,(void*)0,&p_2820->g_161,&p_2820->g_161},{&p_2820->g_161,&p_2820->g_161,&p_2820->g_161,(void*)0,&p_2820->g_161,&p_2820->g_161}},{{&p_2820->g_161,&p_2820->g_161,&p_2820->g_161,(void*)0,&p_2820->g_161,&p_2820->g_161},{&p_2820->g_161,&p_2820->g_161,&p_2820->g_161,(void*)0,&p_2820->g_161,&p_2820->g_161},{&p_2820->g_161,&p_2820->g_161,&p_2820->g_161,(void*)0,&p_2820->g_161,&p_2820->g_161},{&p_2820->g_161,&p_2820->g_161,&p_2820->g_161,(void*)0,&p_2820->g_161,&p_2820->g_161},{&p_2820->g_161,&p_2820->g_161,&p_2820->g_161,(void*)0,&p_2820->g_161,&p_2820->g_161}}}, // p_2820->g_2270
        (-1L), // p_2820->g_2329
        0x3097D9942291522DL, // p_2820->g_2336
        {0x6FB309E8L,0x6FB309E8L,0x6FB309E8L}, // p_2820->g_2365
        (void*)0, // p_2820->g_2419
        0xEB22L, // p_2820->g_2489
        {&p_2820->g_2489,&p_2820->g_2489}, // p_2820->g_2488
        {&p_2820->g_2488[1],&p_2820->g_2488[1]}, // p_2820->g_2487
        &p_2820->g_2487[0], // p_2820->g_2486
        {1L,1L,1L}, // p_2820->g_2494
        &p_2820->g_2494[2], // p_2820->g_2493
        &p_2820->g_2493, // p_2820->g_2492
        0L, // p_2820->g_2523
        0xDB6ED60FA48C70F5L, // p_2820->g_2534
        0x593C37DFL, // p_2820->g_2596
        (void*)0, // p_2820->g_2750
        &p_2820->g_2750, // p_2820->g_2749
        &p_2820->g_2749, // p_2820->g_2748
        &p_2820->g_2748, // p_2820->g_2747
        &p_2820->g_2747, // p_2820->g_2746
        {{{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0}},{{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0}},{{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0}},{{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0}},{{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0}},{{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0}},{{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0}},{{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0}},{{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0},{&p_2820->g_2746,(void*)0}}}, // p_2820->g_2745
        {0x649E4D60L,0x649E4D60L,0x649E4D60L,0x649E4D60L,0x649E4D60L,0x649E4D60L,0x649E4D60L,0x649E4D60L,0x649E4D60L,0x649E4D60L}, // p_2820->g_2751
        0x07L, // p_2820->g_2783
        0x8FCDC9B36B6BFFB3L, // p_2820->g_2797
    };
    c_2821 = c_2822;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2820);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2820->g_3, "p_2820->g_3", print_hash_value);
    transparent_crc(p_2820->g_4, "p_2820->g_4", print_hash_value);
    transparent_crc(p_2820->g_5, "p_2820->g_5", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2820->g_23[i], "p_2820->g_23[i]", print_hash_value);

    }
    transparent_crc(p_2820->g_29, "p_2820->g_29", print_hash_value);
    transparent_crc(p_2820->g_38, "p_2820->g_38", print_hash_value);
    transparent_crc(p_2820->g_39, "p_2820->g_39", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2820->g_74[i], "p_2820->g_74[i]", print_hash_value);

    }
    transparent_crc(p_2820->g_95, "p_2820->g_95", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_2820->g_109[i][j], "p_2820->g_109[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2820->g_115, "p_2820->g_115", print_hash_value);
    transparent_crc(p_2820->g_158, "p_2820->g_158", print_hash_value);
    transparent_crc(p_2820->g_162, "p_2820->g_162", print_hash_value);
    transparent_crc(p_2820->g_164, "p_2820->g_164", print_hash_value);
    transparent_crc(p_2820->g_183, "p_2820->g_183", print_hash_value);
    transparent_crc(p_2820->g_185, "p_2820->g_185", print_hash_value);
    transparent_crc(p_2820->g_236, "p_2820->g_236", print_hash_value);
    transparent_crc(p_2820->g_252, "p_2820->g_252", print_hash_value);
    transparent_crc(p_2820->g_257, "p_2820->g_257", print_hash_value);
    transparent_crc(p_2820->g_286, "p_2820->g_286", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2820->g_287[i], "p_2820->g_287[i]", print_hash_value);

    }
    transparent_crc(p_2820->g_302, "p_2820->g_302", print_hash_value);
    transparent_crc(p_2820->g_406, "p_2820->g_406", print_hash_value);
    transparent_crc(p_2820->g_477, "p_2820->g_477", print_hash_value);
    transparent_crc(p_2820->g_627, "p_2820->g_627", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2820->g_744[i], "p_2820->g_744[i]", print_hash_value);

    }
    transparent_crc(p_2820->g_745, "p_2820->g_745", print_hash_value);
    transparent_crc(p_2820->g_746, "p_2820->g_746", print_hash_value);
    transparent_crc(p_2820->g_758, "p_2820->g_758", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_2820->g_792[i][j], "p_2820->g_792[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2820->g_799, "p_2820->g_799", print_hash_value);
    transparent_crc(p_2820->g_808, "p_2820->g_808", print_hash_value);
    transparent_crc(p_2820->g_900, "p_2820->g_900", print_hash_value);
    transparent_crc(p_2820->g_954, "p_2820->g_954", print_hash_value);
    transparent_crc(p_2820->g_1027, "p_2820->g_1027", print_hash_value);
    transparent_crc(p_2820->g_1036, "p_2820->g_1036", print_hash_value);
    transparent_crc(p_2820->g_1545, "p_2820->g_1545", print_hash_value);
    transparent_crc(p_2820->g_1636, "p_2820->g_1636", print_hash_value);
    transparent_crc(p_2820->g_1867, "p_2820->g_1867", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2820->g_2170[i], "p_2820->g_2170[i]", print_hash_value);

    }
    transparent_crc(p_2820->g_2213, "p_2820->g_2213", print_hash_value);
    transparent_crc(p_2820->g_2258, "p_2820->g_2258", print_hash_value);
    transparent_crc(p_2820->g_2329, "p_2820->g_2329", print_hash_value);
    transparent_crc(p_2820->g_2336, "p_2820->g_2336", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2820->g_2365[i], "p_2820->g_2365[i]", print_hash_value);

    }
    transparent_crc(p_2820->g_2489, "p_2820->g_2489", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2820->g_2494[i], "p_2820->g_2494[i]", print_hash_value);

    }
    transparent_crc(p_2820->g_2523, "p_2820->g_2523", print_hash_value);
    transparent_crc(p_2820->g_2534, "p_2820->g_2534", print_hash_value);
    transparent_crc(p_2820->g_2596, "p_2820->g_2596", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2820->g_2751[i], "p_2820->g_2751[i]", print_hash_value);

    }
    transparent_crc(p_2820->g_2783, "p_2820->g_2783", print_hash_value);
    transparent_crc(p_2820->g_2797, "p_2820->g_2797", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
