// --atomics 86 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 37,2,74 -l 1,2,74
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

__constant uint32_t permutations[10][148] = {
{70,125,14,118,36,109,90,59,141,130,24,41,124,133,58,100,115,19,32,61,43,145,12,2,107,44,47,17,46,6,30,86,33,29,37,117,103,126,121,0,50,57,95,78,104,83,144,45,25,135,28,56,75,60,35,89,67,79,136,68,39,11,114,143,76,77,53,91,64,142,146,137,99,111,16,66,21,74,120,31,98,13,106,20,10,138,72,5,134,84,88,92,63,102,131,40,71,108,97,23,69,3,54,27,101,55,73,93,112,119,1,129,8,147,94,96,51,85,42,82,128,4,132,81,22,9,52,18,110,123,48,38,116,87,80,7,65,62,26,105,49,34,15,127,113,140,139,122}, // permutation 0
{59,140,113,104,134,86,14,144,50,41,127,18,85,43,49,44,91,33,47,38,105,88,57,112,55,95,80,117,124,48,126,129,101,9,143,5,12,146,141,107,0,25,97,31,11,108,115,27,7,76,73,28,68,8,26,61,54,111,71,93,96,100,79,60,51,114,10,13,40,53,130,65,34,94,72,45,89,132,24,52,99,136,138,98,74,67,3,92,69,131,145,139,90,122,121,84,106,16,133,103,142,81,21,77,66,87,110,118,125,39,109,116,35,36,128,46,4,23,37,2,32,17,29,6,30,102,64,78,123,147,120,63,42,137,58,135,20,1,119,70,56,15,62,19,83,75,82,22}, // permutation 1
{108,140,31,91,67,37,128,32,131,136,133,80,29,100,8,85,82,19,52,142,47,114,16,25,81,90,13,15,6,141,57,143,60,12,70,41,75,43,97,38,104,103,45,4,22,89,42,132,77,125,121,115,53,101,27,83,86,87,122,130,135,127,113,34,10,106,119,118,92,30,20,78,24,21,68,1,49,112,102,84,124,26,137,79,107,111,73,39,117,95,105,74,147,139,146,72,28,76,59,98,5,145,99,23,69,129,116,9,50,66,120,71,18,44,55,46,14,35,51,33,54,63,58,88,3,93,123,40,65,56,96,36,94,7,138,110,64,0,11,48,61,2,62,17,126,109,144,134}, // permutation 2
{89,15,41,56,42,66,59,20,144,83,12,10,77,62,137,128,100,98,146,33,14,18,37,0,26,4,111,81,39,47,3,13,119,16,50,138,82,57,99,124,38,30,93,114,123,80,74,103,6,102,19,139,101,21,136,11,65,17,5,120,116,2,55,46,91,68,48,79,104,129,61,72,63,130,34,70,32,23,96,44,84,132,24,140,127,7,115,95,1,142,94,27,92,86,121,108,126,88,8,9,49,145,87,122,106,133,143,131,113,51,105,22,53,35,147,85,64,112,73,45,43,28,76,141,54,110,36,60,134,78,25,107,67,31,71,125,117,97,135,90,52,40,118,69,29,58,75,109}, // permutation 3
{2,122,118,121,92,15,27,73,50,56,103,90,38,19,0,144,44,30,49,54,74,34,40,106,128,57,125,100,127,89,116,3,69,48,31,9,140,81,76,105,85,60,29,141,22,70,145,123,96,42,43,62,80,8,130,55,75,82,97,5,26,107,39,142,71,132,110,53,61,113,67,98,10,20,72,4,131,25,95,120,11,36,101,33,102,35,99,88,138,14,114,108,129,124,77,64,7,18,59,23,28,79,139,87,109,136,126,63,52,137,41,12,51,66,37,17,16,47,78,83,86,24,119,45,134,84,68,147,133,115,1,117,13,46,6,111,146,143,104,91,94,112,93,58,65,21,135,32}, // permutation 4
{58,23,99,49,125,65,80,147,42,36,68,60,92,126,145,100,90,32,64,97,110,61,134,136,105,38,133,56,45,24,46,89,27,132,75,22,146,103,131,96,17,40,0,108,106,33,59,101,7,37,107,87,117,57,84,78,121,12,141,104,71,88,81,29,70,72,130,25,50,4,43,123,1,34,73,51,83,8,102,44,16,129,5,116,66,52,144,114,111,91,67,18,39,30,28,137,11,41,13,26,10,76,94,54,124,62,19,77,47,112,74,20,119,109,69,79,14,3,15,138,48,142,93,118,127,128,55,6,2,139,140,122,9,143,21,120,53,115,98,85,31,95,135,63,82,35,86,113}, // permutation 5
{28,144,18,23,99,101,35,96,82,51,58,44,98,47,8,61,41,42,117,87,22,3,138,66,113,115,7,78,72,92,142,145,133,94,13,91,38,140,57,134,106,135,40,9,71,141,129,53,1,24,88,125,132,122,54,27,55,128,111,119,120,69,65,5,102,104,147,34,43,126,20,0,49,14,139,79,75,11,36,124,143,116,131,108,110,33,146,136,50,81,89,21,46,112,63,127,73,97,62,30,130,16,17,103,77,60,26,80,19,137,64,31,123,74,109,114,4,118,25,70,10,93,121,48,59,68,105,37,15,85,2,84,52,39,100,6,107,12,90,76,32,67,45,83,29,86,56,95}, // permutation 6
{79,6,52,108,102,32,119,0,40,75,136,70,64,83,18,140,144,20,24,133,101,4,113,50,21,132,72,53,34,48,11,1,85,81,47,31,43,19,8,82,135,38,110,68,134,63,87,45,89,125,130,107,105,99,16,114,137,55,30,129,90,142,37,95,98,33,71,49,86,117,9,5,62,39,106,54,65,36,25,22,35,44,41,26,121,77,127,74,104,103,60,96,100,147,123,111,126,141,124,120,46,69,138,67,58,14,66,131,29,51,93,116,57,61,3,73,2,143,23,139,56,91,112,13,12,128,115,15,80,27,76,17,118,146,122,97,28,88,78,84,10,59,92,145,7,94,109,42}, // permutation 7
{141,120,132,75,44,93,52,147,76,146,35,13,142,115,136,33,90,85,117,107,104,123,82,111,101,95,68,74,6,25,113,138,69,12,112,39,34,78,32,5,31,96,143,88,71,67,23,130,91,126,116,119,54,131,121,51,144,55,22,57,99,53,122,135,37,7,70,129,73,110,81,83,48,0,102,16,98,1,27,24,140,2,109,3,4,29,62,47,114,63,38,30,133,36,50,26,18,105,100,20,87,56,89,84,28,46,41,17,8,61,118,108,128,10,9,106,14,59,103,124,139,145,45,80,97,77,94,58,125,64,66,60,127,42,92,79,134,15,21,11,19,43,65,86,40,137,72,49}, // permutation 8
{54,140,101,96,109,15,110,129,97,45,2,131,76,42,13,84,39,67,130,30,40,27,93,106,111,61,138,1,62,18,7,37,73,114,118,8,121,123,141,85,119,35,65,142,94,50,107,19,52,58,29,11,12,115,87,5,128,134,24,71,6,63,38,117,49,78,99,120,9,74,122,53,14,102,70,60,17,47,21,31,20,91,0,77,127,23,56,68,105,83,75,146,33,136,81,41,80,57,44,26,3,28,79,145,126,46,66,36,82,108,132,133,48,103,112,124,34,59,86,98,95,10,72,144,100,43,90,69,4,22,16,51,139,32,64,25,147,116,135,55,143,88,104,125,137,89,92,113} // permutation 9
};

// Seed: 1695174361

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint64_t  f0;
};

union U1 {
   int32_t  f0;
   volatile int8_t * f1;
   int8_t * f2;
   int64_t  f3;
};

struct S2 {
    int32_t g_2;
    int32_t g_5[1][2][1];
    uint32_t g_15;
    volatile VECTOR(uint64_t, 16) g_36;
    uint64_t g_60;
    int32_t *g_66[4][6][9];
    int32_t **g_65;
    uint8_t g_88[6];
    uint8_t g_90;
    uint8_t g_93[2][2][1];
    VECTOR(int8_t, 2) g_107;
    int8_t *g_106;
    uint64_t g_117;
    int32_t g_123;
    int32_t g_136;
    uint16_t g_176;
    int8_t g_196[8];
    union U1 g_218[9][2][7];
    union U1 *g_220;
    volatile VECTOR(int32_t, 2) g_224;
    volatile VECTOR(int32_t, 16) g_225;
    VECTOR(int8_t, 16) g_228;
    VECTOR(int16_t, 2) g_229;
    volatile VECTOR(int32_t, 16) g_252;
    uint16_t g_270;
    int32_t * volatile g_303;
    uint16_t *g_305;
    uint16_t **g_304[9][10];
    VECTOR(int32_t, 4) g_336;
    int16_t g_344;
    int32_t * volatile g_348;
    VECTOR(uint8_t, 16) g_359;
    VECTOR(int64_t, 2) g_368;
    VECTOR(int64_t, 8) g_384;
    VECTOR(int64_t, 4) g_385;
    volatile VECTOR(int64_t, 8) g_386;
    volatile uint64_t g_398[10];
    volatile uint64_t *g_397;
    volatile uint64_t * volatile *g_396;
    int32_t * volatile g_405;
    uint32_t g_411;
    volatile union U0 g_414;
    union U1 ** volatile g_435;
    union U0 g_480[1];
    union U0 *g_479[6];
    volatile VECTOR(int32_t, 8) g_481;
    int32_t * volatile g_504;
    uint64_t **g_505;
    uint64_t *** volatile g_506;
    uint16_t g_535;
    int32_t *g_544;
    VECTOR(int32_t, 8) g_557;
    VECTOR(int32_t, 8) g_559;
    VECTOR(int32_t, 16) g_561;
    VECTOR(int32_t, 16) g_562;
    uint64_t ***g_565;
    volatile VECTOR(int64_t, 8) g_582;
    VECTOR(int32_t, 2) g_585;
    uint32_t g_587;
    volatile VECTOR(uint16_t, 8) g_605;
    VECTOR(int8_t, 8) g_639;
    int32_t **g_669;
    int32_t g_676;
    volatile VECTOR(int8_t, 4) g_689;
    volatile VECTOR(uint32_t, 4) g_697;
    volatile VECTOR(int8_t, 4) g_703;
    int32_t * volatile g_712;
    VECTOR(int16_t, 8) g_724;
    uint32_t g_726;
    uint32_t *g_730;
    uint64_t g_732;
    VECTOR(int8_t, 4) g_737;
    VECTOR(int64_t, 4) g_784;
    volatile int64_t g_841;
    VECTOR(int32_t, 16) g_860;
    VECTOR(uint64_t, 2) g_890;
    volatile VECTOR(int16_t, 8) g_898;
    volatile VECTOR(int8_t, 4) g_902;
    VECTOR(uint8_t, 8) g_903;
    volatile VECTOR(int32_t, 8) g_919;
    uint64_t g_933;
    int32_t *g_1005[1];
    int32_t **g_1004;
    int32_t *** volatile g_1003;
    uint64_t *g_1017;
    volatile VECTOR(int64_t, 2) g_1025;
    uint8_t g_1036;
    volatile VECTOR(uint32_t, 2) g_1039;
    volatile VECTOR(uint32_t, 8) g_1040;
    volatile VECTOR(int32_t, 4) g_1055;
    int16_t g_1077;
    volatile int32_t ** volatile * volatile *g_1099;
    VECTOR(int16_t, 16) g_1147;
    VECTOR(uint64_t, 2) g_1151;
    volatile VECTOR(int8_t, 4) g_1183;
    volatile VECTOR(int8_t, 16) g_1184;
    int32_t * volatile g_1191;
    volatile VECTOR(int8_t, 2) g_1197;
    uint8_t *g_1234;
    uint8_t **g_1233[9];
    uint8_t ***g_1232;
    int32_t *g_1253;
    int32_t *g_1254;
    volatile VECTOR(uint8_t, 8) g_1301;
    VECTOR(int32_t, 8) g_1304;
    uint32_t g_1320;
    volatile VECTOR(uint32_t, 8) g_1327;
    VECTOR(uint8_t, 2) g_1330;
    VECTOR(uint64_t, 4) g_1335;
    VECTOR(int16_t, 4) g_1339;
    VECTOR(uint16_t, 16) g_1352;
    union U1 ** volatile g_1384;
    VECTOR(int16_t, 2) g_1398;
    volatile VECTOR(uint64_t, 8) g_1411;
    VECTOR(int8_t, 16) g_1416;
    union U1 **g_1424;
    uint32_t g_1429;
    VECTOR(uint8_t, 16) g_1444;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S2 * p_1474);
int32_t * func_21(int16_t  p_22, uint16_t * p_23, int32_t ** p_24, uint8_t  p_25, struct S2 * p_1474);
uint16_t * func_26(int8_t * p_27, int8_t  p_28, int32_t ** p_29, struct S2 * p_1474);
int8_t * func_30(int8_t  p_31, struct S2 * p_1474);
uint64_t  func_37(union U0  p_38, struct S2 * p_1474);
uint16_t  func_43(int64_t  p_44, uint64_t  p_45, int64_t  p_46, int8_t * p_47, uint16_t  p_48, struct S2 * p_1474);
int32_t ** func_52(uint32_t  p_53, uint64_t  p_54, uint32_t  p_55, uint8_t  p_56, uint32_t  p_57, struct S2 * p_1474);
int8_t  func_98(uint16_t * p_99, int8_t * p_100, int64_t  p_101, int8_t * p_102, struct S2 * p_1474);
uint16_t * func_103(int8_t * p_104, int32_t ** p_105, struct S2 * p_1474);
uint64_t ** func_108(uint32_t  p_109, int8_t * p_110, struct S2 * p_1474);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1474->g_2 p_1474->l_comm_values p_1474->g_5 p_1474->g_65 p_1474->g_405 p_1474->g_136 p_1474->g_348 p_1474->g_218.f0 p_1474->g_305 p_1474->g_176 p_1474->g_344 p_1474->g_481 p_1474->g_732 p_1474->g_841 p_1474->g_359 p_1474->g_196 p_1474->g_60 p_1474->g_504 p_1474->g_396 p_1474->g_397 p_1474->g_398 p_1474->g_933 p_1474->g_565 p_1474->g_505 p_1474->g_252 p_1474->g_582 p_1474->g_605 p_1474->g_107 p_1474->g_559 p_1474->g_860 p_1474->g_385 p_1474->g_480.f0 p_1474->g_1003 p_1474->g_229 p_1474->g_1036 p_1474->g_903 p_1474->g_585 p_1474->g_93 p_1474->g_384 p_1474->g_639 p_1474->g_218 p_1474->g_1099 p_1474->g_15 p_1474->g_676 p_1474->g_1055 p_1474->g_88 p_1474->g_724 p_1474->g_1191 p_1474->g_1232 p_1474->g_435 p_1474->g_220 p_1474->g_1151 p_1474->g_1253 p_1474->g_1233 p_1474->g_1234 p_1474->g_90 p_1474->g_411 p_1474->g_123 p_1474->g_117 p_1474->g_1301 p_1474->g_1304 p_1474->g_336 p_1474->g_1320 p_1474->g_1327 p_1474->g_1330 p_1474->g_737 p_1474->g_1335 p_1474->g_1339 p_1474->g_1352 p_1474->g_562 p_1474->g_270 p_1474->g_1398 p_1474->g_726 p_1474->g_1411 p_1474->g_1416 p_1474->g_784 p_1474->g_1429 p_1474->g_1444 p_1474->g_1197 p_1474->g_902 p_1474->g_919
 * writes: p_1474->g_2 p_1474->g_5 p_1474->g_15 p_1474->g_587 p_1474->g_411 p_1474->g_66 p_1474->g_730 p_1474->g_732 p_1474->g_60 p_1474->g_535 p_1474->g_176 p_1474->g_344 p_1474->g_724 p_1474->g_218.f0 p_1474->g_933 p_1474->g_505 p_1474->g_196 p_1474->g_669 p_1474->g_1004 p_1474->g_1036 p_1474->g_93 p_1474->g_1077 p_1474->g_565 p_1474->g_544 p_1474->g_136 p_1474->g_359 p_1474->g_1232 p_1474->g_123 p_1474->g_1254 p_1474->g_676 p_1474->g_117 p_1474->g_88 p_1474->g_1339 p_1474->g_385 p_1474->g_270 p_1474->g_220 p_1474->g_726 p_1474->g_1424 p_1474->g_1429 p_1474->g_479
 */
int16_t  func_1(struct S2 * p_1474)
{ /* block id: 4 */
    uint32_t *l_725 = &p_1474->g_726;
    int32_t l_733[3];
    int32_t *l_1193 = (void*)0;
    int32_t **l_1192 = &l_1193;
    VECTOR(uint64_t, 8) l_1264 = (VECTOR(uint64_t, 8))(0xC045A47FF67A3087L, (VECTOR(uint64_t, 4))(0xC045A47FF67A3087L, (VECTOR(uint64_t, 2))(0xC045A47FF67A3087L, 1UL), 1UL), 1UL, 0xC045A47FF67A3087L, 1UL);
    VECTOR(int8_t, 2) l_1298 = (VECTOR(int8_t, 2))(0x68L, (-1L));
    VECTOR(uint8_t, 8) l_1299 = (VECTOR(uint8_t, 8))(0xADL, (VECTOR(uint8_t, 4))(0xADL, (VECTOR(uint8_t, 2))(0xADL, 0x7FL), 0x7FL), 0x7FL, 0xADL, 0x7FL);
    VECTOR(uint8_t, 4) l_1300 = (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 0x30L), 0x30L);
    VECTOR(int8_t, 4) l_1317 = (VECTOR(int8_t, 4))(0x1CL, (VECTOR(int8_t, 2))(0x1CL, 1L), 1L);
    uint32_t l_1318 = 4294967292UL;
    uint8_t *l_1319 = &p_1474->g_88[0];
    int32_t *l_1321 = (void*)0;
    int64_t l_1322 = 0x0F8F98642D8C729AL;
    int32_t l_1331 = 0x0689AE22L;
    int8_t l_1332 = 1L;
    uint64_t *l_1336 = &p_1474->g_732;
    VECTOR(int64_t, 2) l_1337 = (VECTOR(int64_t, 2))(0x6A4B7E606AB4EBC7L, (-1L));
    union U1 l_1338[5] = {{0x5CF5A86FL},{0x5CF5A86FL},{0x5CF5A86FL},{0x5CF5A86FL},{0x5CF5A86FL}};
    int8_t l_1344 = 1L;
    uint8_t l_1345 = 0xB3L;
    int32_t l_1346 = (-6L);
    int16_t *l_1347 = (void*)0;
    int16_t *l_1348 = (void*)0;
    int16_t *l_1349 = (void*)0;
    int16_t *l_1350 = (void*)0;
    int16_t *l_1351 = &p_1474->g_344;
    int32_t l_1357 = 0x45BCAE8EL;
    uint16_t ***l_1368 = &p_1474->g_304[8][1];
    int32_t l_1410 = 1L;
    union U1 **l_1430 = &p_1474->g_220;
    int32_t l_1431 = 0L;
    VECTOR(int64_t, 4) l_1438 = (VECTOR(int64_t, 4))(0x0DF04476FC6E6EB8L, (VECTOR(int64_t, 2))(0x0DF04476FC6E6EB8L, 0x7122A5615E9CDA96L), 0x7122A5615E9CDA96L);
    int8_t **l_1464 = (void*)0;
    VECTOR(int8_t, 16) l_1465 = (VECTOR(int8_t, 16))(0x24L, (VECTOR(int8_t, 4))(0x24L, (VECTOR(int8_t, 2))(0x24L, 0x7BL), 0x7BL), 0x7BL, 0x24L, 0x7BL, (VECTOR(int8_t, 2))(0x24L, 0x7BL), (VECTOR(int8_t, 2))(0x24L, 0x7BL), 0x24L, 0x7BL, 0x24L, 0x7BL);
    int i;
    for (i = 0; i < 3; i++)
        l_733[i] = (-1L);
    for (p_1474->g_2 = 21; (p_1474->g_2 > 8); --p_1474->g_2)
    { /* block id: 7 */
        VECTOR(uint16_t, 16) l_13 = (VECTOR(uint16_t, 16))(0xB6A7L, (VECTOR(uint16_t, 4))(0xB6A7L, (VECTOR(uint16_t, 2))(0xB6A7L, 65532UL), 65532UL), 65532UL, 0xB6A7L, 65532UL, (VECTOR(uint16_t, 2))(0xB6A7L, 65532UL), (VECTOR(uint16_t, 2))(0xB6A7L, 65532UL), 0xB6A7L, 65532UL, 0xB6A7L, 65532UL);
        VECTOR(int8_t, 16) l_1194 = (VECTOR(int8_t, 16))(0x56L, (VECTOR(int8_t, 4))(0x56L, (VECTOR(int8_t, 2))(0x56L, 0x28L), 0x28L), 0x28L, 0x56L, 0x28L, (VECTOR(int8_t, 2))(0x56L, 0x28L), (VECTOR(int8_t, 2))(0x56L, 0x28L), 0x56L, 0x28L, 0x56L, 0x28L);
        int i;
        for (p_1474->g_5[0][1][0] = 5; (p_1474->g_5[0][1][0] >= 28); ++p_1474->g_5[0][1][0])
        { /* block id: 10 */
            int32_t *l_8[10][3] = {{&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0]},{&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0]},{&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0]},{&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0]},{&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0]},{&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0]},{&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0]},{&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0]},{&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0]},{&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0],&p_1474->g_5[0][1][0]}};
            int32_t **l_9 = &l_8[5][1];
            int32_t l_12[10][2] = {{(-7L),(-8L)},{(-7L),(-8L)},{(-7L),(-8L)},{(-7L),(-8L)},{(-7L),(-8L)},{(-7L),(-8L)},{(-7L),(-8L)},{(-7L),(-8L)},{(-7L),(-8L)},{(-7L),(-8L)}};
            uint16_t *l_14[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            uint16_t *l_1266 = (void*)0;
            int i, j;
            (*l_9) = l_8[5][1];
            if ((safe_sub_func_uint16_t_u_u(l_12[3][1], (p_1474->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1474->tid, 148))] , (p_1474->g_15 = ((VECTOR(uint16_t, 16))(l_13.s14c5530c4e2bf5f4)).s0)))))
            { /* block id: 13 */
                uint32_t l_18 = 0xF69A7501L;
                uint32_t **l_727 = (void*)0;
                uint32_t *l_729 = &l_18;
                uint32_t **l_728[9] = {&l_729,&l_729,&l_729,&l_729,&l_729,&l_729,&l_729,&l_729,&l_729};
                uint64_t *l_731 = &p_1474->g_732;
                int i;
                for (p_1474->g_15 = 0; (p_1474->g_15 != 14); p_1474->g_15++)
                { /* block id: 16 */
                    return p_1474->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1474->tid, 148))];
                }
                l_18++;
                p_1474->g_1254 = func_21(p_1474->g_2, func_26(func_30((p_1474->g_2 | (safe_div_func_int16_t_s_s(l_18, p_1474->g_5[0][1][0]))), p_1474), (((l_13.sc & (safe_sub_func_uint64_t_u_u((((VECTOR(int16_t, 2))(p_1474->g_724.s55)).even != l_13.s1), (((*l_731) = (l_725 == (p_1474->g_730 = l_8[9][1]))) > 0xBF2BEE0D4C080F8BL)))) <= l_13.s7) || l_733[1]), p_1474->g_65, p_1474), l_1192, l_1194.sb, p_1474);
            }
            else
            { /* block id: 523 */
                atomic_or(&p_1474->g_atomic_reduction[get_linear_group_id()], 0x4069C1C3L);
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1474->v_collective += p_1474->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                for (p_1474->g_535 = (-29); (p_1474->g_535 == 2); p_1474->g_535++)
                { /* block id: 527 */
                    uint32_t l_1257 = 0x2B532373L;
                    return l_1257;
                }
            }
            for (p_1474->g_676 = (-6); (p_1474->g_676 > 28); p_1474->g_676 = safe_add_func_int32_t_s_s(p_1474->g_676, 3))
            { /* block id: 533 */
                VECTOR(uint64_t, 16) l_1265 = (VECTOR(uint64_t, 16))(0xA7C8313D61ED00CCL, (VECTOR(uint64_t, 4))(0xA7C8313D61ED00CCL, (VECTOR(uint64_t, 2))(0xA7C8313D61ED00CCL, 0x6F7D03EFEA57437CL), 0x6F7D03EFEA57437CL), 0x6F7D03EFEA57437CL, 0xA7C8313D61ED00CCL, 0x6F7D03EFEA57437CL, (VECTOR(uint64_t, 2))(0xA7C8313D61ED00CCL, 0x6F7D03EFEA57437CL), (VECTOR(uint64_t, 2))(0xA7C8313D61ED00CCL, 0x6F7D03EFEA57437CL), 0xA7C8313D61ED00CCL, 0x6F7D03EFEA57437CL, 0xA7C8313D61ED00CCL, 0x6F7D03EFEA57437CL);
                int16_t *l_1267 = (void*)0;
                int i;
                (*p_1474->g_65) = func_21((((VECTOR(int32_t, 2))(0x737D1DBDL, 0x3ABDADF6L)).hi && (safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(0x33BAFDACA49683B4L, FAKE_DIVERGE(p_1474->group_0_offset, get_group_id(0), 10), 0xC697FC8BF0E9F80AL, 0xE57AD9053DFCFE26L)).even)).hi, ((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 16))(l_1264.s1247624145622474)).s760a, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_1265.s55c4d8e0a0c55677)).sf593))))).zzzzwywz))).s5)), ((248UL < l_13.s3) && (***p_1474->g_1232))))), l_1266, &p_1474->g_544, (l_1267 == &p_1474->g_1077), p_1474);
                for (p_1474->g_411 = 19; (p_1474->g_411 != 44); p_1474->g_411 = safe_add_func_int8_t_s_s(p_1474->g_411, 3))
                { /* block id: 537 */
                    for (p_1474->g_933 = 0; (p_1474->g_933 == 27); p_1474->g_933 = safe_add_func_int16_t_s_s(p_1474->g_933, 8))
                    { /* block id: 540 */
                        (*p_1474->g_348) = (l_733[0] = 0x48537723L);
                    }
                    if (l_1265.s6)
                        continue;
                }
            }
        }
        for (p_1474->g_123 = (-17); (p_1474->g_123 < (-29)); p_1474->g_123 = safe_sub_func_int64_t_s_s(p_1474->g_123, 7))
        { /* block id: 550 */
            for (p_1474->g_117 = 0; (p_1474->g_117 > 30); p_1474->g_117++)
            { /* block id: 553 */
                int8_t l_1280 = 0x1CL;
                int32_t l_1281 = (-4L);
                l_1281 = (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(7UL, l_1280)), 1L));
                (*l_1192) = &l_1281;
                (*l_1192) = (void*)0;
            }
        }
    }
    for (p_1474->g_15 = (-11); (p_1474->g_15 <= 12); p_1474->g_15 = safe_add_func_int8_t_s_s(p_1474->g_15, 8))
    { /* block id: 562 */
        if ((atomic_inc(&p_1474->l_atomic_input[35]) == 1))
        { /* block id: 564 */
            int32_t l_1284 = 0x0C3B0FB6L;
            union U0 l_1297 = {0x210E7F69E185E82FL};
            union U0 *l_1296[6][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
            int i, j;
            for (l_1284 = 0; (l_1284 > 22); l_1284++)
            { /* block id: 567 */
                uint16_t l_1287 = 0xE739L;
                ++l_1287;
                for (l_1287 = 0; (l_1287 < 51); ++l_1287)
                { /* block id: 571 */
                    VECTOR(int16_t, 8) l_1292 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x73F8L), 0x73F8L), 0x73F8L, (-1L), 0x73F8L);
                    VECTOR(int16_t, 16) l_1293 = (VECTOR(int16_t, 16))(0x4669L, (VECTOR(int16_t, 4))(0x4669L, (VECTOR(int16_t, 2))(0x4669L, 0x45FFL), 0x45FFL), 0x45FFL, 0x4669L, 0x45FFL, (VECTOR(int16_t, 2))(0x4669L, 0x45FFL), (VECTOR(int16_t, 2))(0x4669L, 0x45FFL), 0x4669L, 0x45FFL, 0x4669L, 0x45FFL);
                    int16_t l_1294 = 0x30A6L;
                    uint8_t l_1295 = 249UL;
                    int i;
                    l_1294 = ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(l_1292.s06065121)), ((VECTOR(int16_t, 16))(l_1293.seb16e424e86fe455)).even))).s2707245265764200, ((VECTOR(uint16_t, 2))(0x1066L, 0xB745L)).xyyyxxyxyxyxyyxy))).sa;
                    l_1295 = (-9L);
                }
            }
            l_1296[0][0] = l_1296[0][0];
            unsigned int result = 0;
            result += l_1284;
            result += l_1297.f0;
            atomic_add(&p_1474->l_special_values[35], result);
        }
        else
        { /* block id: 577 */
            (1 + 1);
        }
    }
    l_733[0] = ((((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 8))(8L, (((0xA7L || (*p_1474->g_1234)) ^ p_1474->g_676) & ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(int16_t, 2))(0x1302L, 0x5E86L)).xyxxxxxx, ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_1298.yyxyyxyxyyyxxyxx)).s6b)).xxyxyxyxyxxxxxyy, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_1299.s54)), ((VECTOR(uint8_t, 4))(l_1300.yxxx)), 0x4AL, 0xA3L)).s4724720526763632)).s96, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 8))(p_1474->g_1301.s53332052)).s6500630137014652, ((VECTOR(uint8_t, 8))((((((safe_lshift_func_uint16_t_u_s((0xB307E26490912FCDL != (**p_1474->g_396)), 6)) , 0x36L) < ((((VECTOR(uint8_t, 16))(((*l_1319) = ((((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(p_1474->g_1304.s52624737)).s5363655776342151, (int32_t)((*p_1474->g_1253) = (*p_1474->g_1253))))).s1 && ((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((*p_1474->g_305) = ((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_1317.wxxw)).z, ((*p_1474->g_1253) | 8UL))), (*p_1474->g_1234))), p_1474->g_385.w)), l_733[2])) | l_1317.w)), p_1474->g_336.w)), l_1300.z)) ^ p_1474->g_336.w)) , l_1318)), ((VECTOR(uint8_t, 4))(2UL)), p_1474->g_1320, 0UL, ((VECTOR(uint8_t, 4))(0xC2L)), ((VECTOR(uint8_t, 2))(255UL)), ((VECTOR(uint8_t, 2))(0x1FL)), 0xCAL)).s5 | 0x0CL) <= 1L)) ^ p_1474->g_229.x) , (*p_1474->g_1234)), ((VECTOR(uint8_t, 4))(255UL)), 0x42L, 0x02L, 3UL)).s5400743302503052))).s9d, ((VECTOR(uint8_t, 2))(255UL)))))))).xxxxyyxxyyxxxxxy))).odd))).s4), ((VECTOR(int16_t, 4))((-5L))), 0x16D8L, 0x7A79L)), ((VECTOR(int16_t, 8))((-1L)))))).lo, (int16_t)1L))).x == 0x4DEDL) || (-9L));
    if (((l_1322 >= (safe_rshift_func_uint8_t_u_s((((VECTOR(uint32_t, 16))(p_1474->g_1327.s7604546032543612)).s5 < ((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(p_1474->g_1330.yyyxxxxy)))).s5, l_1331)) >= (p_1474->g_218[5][0][1] , ((l_1332 | ((p_1474->g_737.w && 0xA7519F4FL) > (((safe_sub_func_uint64_t_u_u((((*l_1336) = ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_1474->g_1335.xx)).xxxxxxyx)).s7770006431724144)).sc) >= ((VECTOR(int64_t, 2))(l_1337.yy)).hi), l_1299.s7)) || ((*l_1351) = (p_1474->g_1339.z = (((l_1338[2] , (l_1345 = ((*l_1336) = (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(1L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_1474->g_1339.zy)), 0x28C3L, 0L)), 0x37FEL, (-10L), 0x68DAL)).s51)).lo && (((safe_div_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(l_1344, p_1474->g_639.s7)), l_1300.y)) , &p_1474->g_1004) != (void*)0))))) != l_1346) != 0x60E90F3D2C9088A8L)))) , (*p_1474->g_1234)))) & p_1474->g_1352.s8)))), 6))) || (*p_1474->g_1253)))
    { /* block id: 590 */
        int8_t *l_1369 = &l_1344;
        int32_t l_1370[4][3][7] = {{{0x017D6B70L,0x073519ABL,0x67B6E493L,1L,(-1L),(-9L),(-9L)},{0x017D6B70L,0x073519ABL,0x67B6E493L,1L,(-1L),(-9L),(-9L)},{0x017D6B70L,0x073519ABL,0x67B6E493L,1L,(-1L),(-9L),(-9L)}},{{0x017D6B70L,0x073519ABL,0x67B6E493L,1L,(-1L),(-9L),(-9L)},{0x017D6B70L,0x073519ABL,0x67B6E493L,1L,(-1L),(-9L),(-9L)},{0x017D6B70L,0x073519ABL,0x67B6E493L,1L,(-1L),(-9L),(-9L)}},{{0x017D6B70L,0x073519ABL,0x67B6E493L,1L,(-1L),(-9L),(-9L)},{0x017D6B70L,0x073519ABL,0x67B6E493L,1L,(-1L),(-9L),(-9L)},{0x017D6B70L,0x073519ABL,0x67B6E493L,1L,(-1L),(-9L),(-9L)}},{{0x017D6B70L,0x073519ABL,0x67B6E493L,1L,(-1L),(-9L),(-9L)},{0x017D6B70L,0x073519ABL,0x67B6E493L,1L,(-1L),(-9L),(-9L)},{0x017D6B70L,0x073519ABL,0x67B6E493L,1L,(-1L),(-9L),(-9L)}}};
        int64_t *l_1371 = (void*)0;
        int64_t *l_1372 = (void*)0;
        VECTOR(int16_t, 8) l_1397 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x5C08L), 0x5C08L), 0x5C08L, 1L, 0x5C08L);
        int32_t l_1409 = 0x4E76AC85L;
        int i, j, k;
        if (((safe_add_func_int16_t_s_s((-5L), p_1474->g_562.sc)) != (((safe_add_func_int64_t_s_s(((*p_1474->g_1253) | (l_1357 = (*p_1474->g_348))), (((p_1474->g_385.z = (safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(0xFE8BE6B087C90B23L, (safe_add_func_uint16_t_u_u(((*p_1474->g_305) = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((p_1474->g_336.w || ((*l_1369) = (l_1368 != (void*)0))) > ((VECTOR(int64_t, 8))(0x42F42C58DFF25F87L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0L, 0x3DCF41A5A4F18AF3L)).xxyxxyxyyxxxxyxx)).se9)), (l_1368 != &p_1474->g_304[8][1]), 1L, p_1474->g_732, (-1L), 9L)).s1) ^ 0x57AEL), 0)), l_1370[0][2][2]))), 0x677EL)))), l_1370[0][2][2]))) <= l_1370[0][2][2]) >= l_1370[2][2][4]))) && (*p_1474->g_397)) && 0xBC4CC189CCC31F09L)))
        { /* block id: 595 */
            union U1 *l_1383 = &l_1338[2];
            for (p_1474->g_270 = 23; (p_1474->g_270 >= 15); p_1474->g_270 = safe_sub_func_int64_t_s_s(p_1474->g_270, 2))
            { /* block id: 598 */
                int32_t *l_1375 = &p_1474->g_5[0][1][0];
                union U1 **l_1385[2][7][6] = {{{&p_1474->g_220,&l_1383,(void*)0,&l_1383,&p_1474->g_220,&p_1474->g_220},{&p_1474->g_220,&l_1383,(void*)0,&l_1383,&p_1474->g_220,&p_1474->g_220},{&p_1474->g_220,&l_1383,(void*)0,&l_1383,&p_1474->g_220,&p_1474->g_220},{&p_1474->g_220,&l_1383,(void*)0,&l_1383,&p_1474->g_220,&p_1474->g_220},{&p_1474->g_220,&l_1383,(void*)0,&l_1383,&p_1474->g_220,&p_1474->g_220},{&p_1474->g_220,&l_1383,(void*)0,&l_1383,&p_1474->g_220,&p_1474->g_220},{&p_1474->g_220,&l_1383,(void*)0,&l_1383,&p_1474->g_220,&p_1474->g_220}},{{&p_1474->g_220,&l_1383,(void*)0,&l_1383,&p_1474->g_220,&p_1474->g_220},{&p_1474->g_220,&l_1383,(void*)0,&l_1383,&p_1474->g_220,&p_1474->g_220},{&p_1474->g_220,&l_1383,(void*)0,&l_1383,&p_1474->g_220,&p_1474->g_220},{&p_1474->g_220,&l_1383,(void*)0,&l_1383,&p_1474->g_220,&p_1474->g_220},{&p_1474->g_220,&l_1383,(void*)0,&l_1383,&p_1474->g_220,&p_1474->g_220},{&p_1474->g_220,&l_1383,(void*)0,&l_1383,&p_1474->g_220,&p_1474->g_220},{&p_1474->g_220,&l_1383,(void*)0,&l_1383,&p_1474->g_220,&p_1474->g_220}}};
                int i, j, k;
                (*l_1192) = l_1375;
                if ((atomic_inc(&p_1474->l_atomic_input[42]) == 2))
                { /* block id: 601 */
                    int32_t l_1376 = 0x204C49BEL;
                    uint8_t l_1382 = 1UL;
                    for (l_1376 = (-23); (l_1376 == (-18)); l_1376 = safe_add_func_uint8_t_u_u(l_1376, 7))
                    { /* block id: 604 */
                        uint32_t l_1379[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1379[i] = 4294967288UL;
                        l_1379[1]--;
                    }
                    l_1382 = 1L;
                    unsigned int result = 0;
                    result += l_1376;
                    result += l_1382;
                    atomic_add(&p_1474->l_special_values[42], result);
                }
                else
                { /* block id: 608 */
                    (1 + 1);
                }
                (*p_1474->g_65) = (*l_1192);
                (*p_1474->g_435) = l_1383;
            }
        }
        else
        { /* block id: 614 */
            return p_1474->g_117;
        }
        (*p_1474->g_65) = func_21(((l_1370[2][2][3] = (safe_rshift_func_uint8_t_u_s(((((safe_add_func_int32_t_s_s(2L, (((*p_1474->g_1232) != ((l_1370[0][2][2] != (safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_s(p_1474->g_1301.s2, (safe_mod_func_int32_t_s_s(l_1370[2][2][3], (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_1397.s4365)).lo)).xyyx, ((VECTOR(int16_t, 2))(0x1295L, 1L)).xyyy))))), ((VECTOR(int16_t, 4))(p_1474->g_1398.xyxy)))).s4, (safe_mul_func_uint16_t_u_u((0xDE3D01B0L && (++(*l_725))), (((safe_mul_func_int8_t_s_s((l_1397.s4 || (((VECTOR(uint8_t, 2))(0x91L, 0x17L)).even < ((((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0x524AL, ((VECTOR(int16_t, 2))(0x3ADEL, 0x71DAL)), 2L)).hi)).even >= (safe_mod_func_int8_t_s_s(l_1409, (***p_1474->g_1232)))) <= l_1409) || 0x6836C47CL) == l_1410))), 0xE5L)) , &l_1336) != (*p_1474->g_565))))))))))))) , &l_1319)) , 4294967291UL))) , &l_1345) == (void*)0) & 18446744073709551615UL), l_1397.s2))) | (-7L)), l_1347, &p_1474->g_1253, l_1397.s2, p_1474);
    }
    else
    { /* block id: 620 */
        union U0 l_1419 = {0x361C8F67063EE845L};
        union U1 **l_1422 = &p_1474->g_220;
        union U1 ***l_1423[1];
        uint16_t l_1427 = 0xA6FEL;
        uint32_t *l_1428 = &p_1474->g_1429;
        uint64_t l_1432 = 0UL;
        VECTOR(int16_t, 8) l_1443 = (VECTOR(int16_t, 8))(0x0143L, (VECTOR(int16_t, 4))(0x0143L, (VECTOR(int16_t, 2))(0x0143L, (-3L)), (-3L)), (-3L), 0x0143L, (-3L));
        VECTOR(int32_t, 4) l_1473 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0L), 0L);
        int i;
        for (i = 0; i < 1; i++)
            l_1423[i] = &l_1422;
        if (((-5L) == ((((VECTOR(uint64_t, 2))(p_1474->g_1411.s22)).lo > ((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(1L, (-8L))), 0x2F3B9323925BBEFFL, ((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 8))(5L, (safe_mod_func_int16_t_s_s(((p_1474->g_229.x <= ((safe_mul_func_uint16_t_u_u(((((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(p_1474->g_1416.s18a6)).xxwwxyyw, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x23L, 0x20L)), (-1L), (((safe_lshift_func_int16_t_s_s(((((*l_725) &= (((l_1419 , (safe_add_func_int8_t_s_s((l_1419.f0 < ((*l_1319) = (p_1474->g_1151.x < ((((((((*l_1336) |= ((((p_1474->g_1424 = l_1422) != (l_1264.s2 , (((*l_1428) = (safe_mul_func_int64_t_s_s(l_1427, 0L))) , l_1430))) != GROUP_DIVERGE(2, 1)) || l_1419.f0)) && l_1419.f0) || (-4L)) || l_1431) > p_1474->g_60) , l_1357) != p_1474->g_90)))), (***p_1474->g_1232)))) <= 0x59459ACA77E70238L) || p_1474->g_196[5])) != l_1419.f0) , l_1427), 7)) , p_1474->g_60) >= p_1474->g_724.s5), ((VECTOR(int8_t, 2))(1L)), (-1L), (-1L)))))))).s1 >= l_1419.f0) ^ p_1474->g_784.y), GROUP_DIVERGE(2, 1))) <= l_1427)) > l_1432), 0xE3F5L)), p_1474->g_784.z, p_1474->g_1339.y, l_1432, ((VECTOR(int64_t, 2))(0x0B351BE4D01D13EDL)), 0x4DDFB7AD58363194L)).s2742030474214072, ((VECTOR(int64_t, 16))(0x29EDDF6460C0F491L))))).odd, ((VECTOR(int64_t, 8))(0x3E9B5B2003330879L))))), ((VECTOR(int64_t, 2))(1L)), p_1474->g_1429, 0x26F108B80B562DD1L, 0x453A4420D790D3A6L)).sb > l_1432) , p_1474->g_562.s7)) | l_1419.f0)))
        { /* block id: 626 */
            union U0 **l_1433[3][8] = {{&p_1474->g_479[0],&p_1474->g_479[0],&p_1474->g_479[0],(void*)0,&p_1474->g_479[0],(void*)0,&p_1474->g_479[0],&p_1474->g_479[0]},{&p_1474->g_479[0],&p_1474->g_479[0],&p_1474->g_479[0],(void*)0,&p_1474->g_479[0],(void*)0,&p_1474->g_479[0],&p_1474->g_479[0]},{&p_1474->g_479[0],&p_1474->g_479[0],&p_1474->g_479[0],(void*)0,&p_1474->g_479[0],(void*)0,&p_1474->g_479[0],&p_1474->g_479[0]}};
            int i, j;
            p_1474->g_479[0] = &p_1474->g_480[0];
        }
        else
        { /* block id: 628 */
            int32_t l_1439 = 0L;
            union U1 *l_1457 = (void*)0;
            uint16_t *l_1460 = &p_1474->g_270;
            int32_t **l_1461 = (void*)0;
            int16_t l_1468 = 0x23A9L;
            for (l_1345 = 0; (l_1345 >= 30); l_1345 = safe_add_func_int8_t_s_s(l_1345, 2))
            { /* block id: 631 */
                int64_t l_1440[4][1];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1440[i][j] = 0x280AF9677F94DD47L;
                }
                for (p_1474->g_60 = 0; (p_1474->g_60 != 23); p_1474->g_60 = safe_add_func_uint32_t_u_u(p_1474->g_60, 1))
                { /* block id: 634 */
                    VECTOR(uint8_t, 2) l_1445 = (VECTOR(uint8_t, 2))(2UL, 246UL);
                    uint8_t ****l_1454 = &p_1474->g_1232;
                    int i;
                    (*l_1192) = (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_1438.xw)), 6L, 2L)).x , (void*)0);
                    (*p_1474->g_1253) ^= (l_1439 >= (l_1440[2][0] || (((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 2))(l_1443.s11)).yyyyxyyyyxyyyxyx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 2))(0x60L, 0x78L)).xyxy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 2))(p_1474->g_1444.s1a)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_1445.xyxyyxxyyxyxxyyy)).s9e))))))).yxxy))).yyyzwxxwzxzwzzzx)).s3d)).xyxxyyxxxxxxyyyx))).s3, 9)) <= ((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_1474->g_1197.x, ((GROUP_DIVERGE(2, 1) ^ (+l_1440[2][0])) && l_1439))), (*p_1474->g_1234))) != ((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(l_1439, ((l_1454 != (l_1439 , (void*)0)) & (*p_1474->g_305)))) && l_1427), p_1474->g_1330.x)) , l_1440[3][0]))) == l_1427)));
                    for (l_1346 = 0; (l_1346 > 3); l_1346 = safe_add_func_int32_t_s_s(l_1346, 7))
                    { /* block id: 639 */
                        (*l_1192) = l_1428;
                    }
                }
                l_1457 = l_1457;
            }
            (*l_1192) = (void*)0;
            for (p_1474->g_136 = (-22); (p_1474->g_136 < 10); p_1474->g_136 = safe_add_func_uint64_t_u_u(p_1474->g_136, 4))
            { /* block id: 648 */
                (*p_1474->g_65) = func_21(p_1474->g_1330.y, l_1460, l_1461, (safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(0, 1), ((VECTOR(int8_t, 4))(p_1474->g_1055.x, (((void*)0 != l_1464) , ((VECTOR(int8_t, 16))((-1L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_1465.s48072450)).s62)), ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(0x44L, 0x12L)).yyxx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x61L, 0x3FL, 0x1AL, (safe_lshift_func_int16_t_s_u((l_1468 > ((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((*p_1474->g_1253) = ((p_1474->g_582.s2 || 0UL) == l_1443.s3)), 1UL)), 0x87EBL)) != p_1474->g_562.sa)), 0)), 3L, ((VECTOR(int8_t, 2))(0x4EL)), ((VECTOR(int8_t, 4))((-1L))), (-7L), ((VECTOR(int8_t, 2))((-1L))), 0x32L, (-1L))))).s56f1, ((VECTOR(int8_t, 4))(0x69L))))).odd, ((VECTOR(int8_t, 2))(0x38L))))), l_1473.z, ((VECTOR(int8_t, 2))(6L)), p_1474->g_902.x, 0x2DL, (-3L))).s12)), (-4L), 5L, 0x01L, 0x4DL, ((VECTOR(int8_t, 8))(0x02L)), 1L)).s4), 1L, (-1L))).z)), p_1474);
            }
            (*l_1192) = (*l_1192);
        }
    }
    return p_1474->g_919.s0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1474->g_359 p_1474->g_218.f0 p_1474->g_1232 p_1474->g_435 p_1474->g_220 p_1474->g_1151 p_1474->g_305 p_1474->g_176 p_1474->g_1036 p_1474->g_1253
 * writes: p_1474->g_359 p_1474->g_218.f0 p_1474->g_1232 p_1474->g_123 p_1474->g_1036
 */
int32_t * func_21(int16_t  p_22, uint16_t * p_23, int32_t ** p_24, uint8_t  p_25, struct S2 * p_1474)
{ /* block id: 504 */
    int32_t l_1195 = (-4L);
    int32_t *l_1196 = &p_1474->g_218[5][0][1].f0;
    int32_t *l_1198 = (void*)0;
    int32_t *l_1199 = &p_1474->g_218[5][0][1].f0;
    int32_t *l_1200 = (void*)0;
    int32_t *l_1201 = (void*)0;
    int32_t l_1202 = (-8L);
    int32_t *l_1203 = &p_1474->g_123;
    VECTOR(int32_t, 16) l_1204 = (VECTOR(int32_t, 16))(0x418CF74FL, (VECTOR(int32_t, 4))(0x418CF74FL, (VECTOR(int32_t, 2))(0x418CF74FL, 0x49C3E876L), 0x49C3E876L), 0x49C3E876L, 0x418CF74FL, 0x49C3E876L, (VECTOR(int32_t, 2))(0x418CF74FL, 0x49C3E876L), (VECTOR(int32_t, 2))(0x418CF74FL, 0x49C3E876L), 0x418CF74FL, 0x49C3E876L, 0x418CF74FL, 0x49C3E876L);
    int32_t *l_1205 = (void*)0;
    int32_t *l_1206 = (void*)0;
    int32_t *l_1207 = &p_1474->g_218[5][0][1].f0;
    int32_t *l_1208 = (void*)0;
    int32_t *l_1209 = (void*)0;
    int32_t *l_1210 = &p_1474->g_123;
    int32_t *l_1211 = (void*)0;
    int32_t *l_1212 = (void*)0;
    int32_t *l_1213 = &p_1474->g_136;
    int32_t *l_1214[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_1215 = 0x3F2AD97EL;
    uint16_t l_1216 = 1UL;
    int16_t l_1221 = 5L;
    uint8_t **l_1241[4][6][9] = {{{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234}},{{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234}},{{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234}},{{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234},{(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,(void*)0,&p_1474->g_1234,&p_1474->g_1234,(void*)0,&p_1474->g_1234}}};
    uint64_t l_1250 = 1UL;
    int i, j, k;
    l_1216--;
    for (p_25 = 0; (p_25 <= 7); p_25++)
    { /* block id: 508 */
        uint8_t *l_1222[5][3][7] = {{{&p_1474->g_88[4],(void*)0,(void*)0,(void*)0,&p_1474->g_88[4],&p_1474->g_88[4],(void*)0},{&p_1474->g_88[4],(void*)0,(void*)0,(void*)0,&p_1474->g_88[4],&p_1474->g_88[4],(void*)0},{&p_1474->g_88[4],(void*)0,(void*)0,(void*)0,&p_1474->g_88[4],&p_1474->g_88[4],(void*)0}},{{&p_1474->g_88[4],(void*)0,(void*)0,(void*)0,&p_1474->g_88[4],&p_1474->g_88[4],(void*)0},{&p_1474->g_88[4],(void*)0,(void*)0,(void*)0,&p_1474->g_88[4],&p_1474->g_88[4],(void*)0},{&p_1474->g_88[4],(void*)0,(void*)0,(void*)0,&p_1474->g_88[4],&p_1474->g_88[4],(void*)0}},{{&p_1474->g_88[4],(void*)0,(void*)0,(void*)0,&p_1474->g_88[4],&p_1474->g_88[4],(void*)0},{&p_1474->g_88[4],(void*)0,(void*)0,(void*)0,&p_1474->g_88[4],&p_1474->g_88[4],(void*)0},{&p_1474->g_88[4],(void*)0,(void*)0,(void*)0,&p_1474->g_88[4],&p_1474->g_88[4],(void*)0}},{{&p_1474->g_88[4],(void*)0,(void*)0,(void*)0,&p_1474->g_88[4],&p_1474->g_88[4],(void*)0},{&p_1474->g_88[4],(void*)0,(void*)0,(void*)0,&p_1474->g_88[4],&p_1474->g_88[4],(void*)0},{&p_1474->g_88[4],(void*)0,(void*)0,(void*)0,&p_1474->g_88[4],&p_1474->g_88[4],(void*)0}},{{&p_1474->g_88[4],(void*)0,(void*)0,(void*)0,&p_1474->g_88[4],&p_1474->g_88[4],(void*)0},{&p_1474->g_88[4],(void*)0,(void*)0,(void*)0,&p_1474->g_88[4],&p_1474->g_88[4],(void*)0},{&p_1474->g_88[4],(void*)0,(void*)0,(void*)0,&p_1474->g_88[4],&p_1474->g_88[4],(void*)0}}};
        int32_t l_1225[9] = {0x61FDDA19L,0x61FDDA19L,0x61FDDA19L,0x61FDDA19L,0x61FDDA19L,0x61FDDA19L,0x61FDDA19L,0x61FDDA19L,0x61FDDA19L};
        uint8_t ****l_1235 = &p_1474->g_1232;
        union U1 *l_1238 = &p_1474->g_218[5][0][1];
        union U1 **l_1239 = &l_1238;
        uint8_t ***l_1240[6][9] = {{&p_1474->g_1233[3],(void*)0,&p_1474->g_1233[5],&p_1474->g_1233[1],&p_1474->g_1233[4],&p_1474->g_1233[1],&p_1474->g_1233[5],(void*)0,&p_1474->g_1233[3]},{&p_1474->g_1233[3],(void*)0,&p_1474->g_1233[5],&p_1474->g_1233[1],&p_1474->g_1233[4],&p_1474->g_1233[1],&p_1474->g_1233[5],(void*)0,&p_1474->g_1233[3]},{&p_1474->g_1233[3],(void*)0,&p_1474->g_1233[5],&p_1474->g_1233[1],&p_1474->g_1233[4],&p_1474->g_1233[1],&p_1474->g_1233[5],(void*)0,&p_1474->g_1233[3]},{&p_1474->g_1233[3],(void*)0,&p_1474->g_1233[5],&p_1474->g_1233[1],&p_1474->g_1233[4],&p_1474->g_1233[1],&p_1474->g_1233[5],(void*)0,&p_1474->g_1233[3]},{&p_1474->g_1233[3],(void*)0,&p_1474->g_1233[5],&p_1474->g_1233[1],&p_1474->g_1233[4],&p_1474->g_1233[1],&p_1474->g_1233[5],(void*)0,&p_1474->g_1233[3]},{&p_1474->g_1233[3],(void*)0,&p_1474->g_1233[5],&p_1474->g_1233[1],&p_1474->g_1233[4],&p_1474->g_1233[1],&p_1474->g_1233[5],(void*)0,&p_1474->g_1233[3]}};
        VECTOR(uint64_t, 8) l_1242 = (VECTOR(uint64_t, 8))(0x9D973F42457A5101L, (VECTOR(uint64_t, 4))(0x9D973F42457A5101L, (VECTOR(uint64_t, 2))(0x9D973F42457A5101L, 0x870845C165EF7E99L), 0x870845C165EF7E99L), 0x870845C165EF7E99L, 0x9D973F42457A5101L, 0x870845C165EF7E99L);
        int i, j, k;
        (*l_1196) = (p_22 , ((p_1474->g_359.s1--) == l_1225[8]));
        (*l_1210) = (safe_rshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_u(l_1225[8], (safe_sub_func_int32_t_s_s((*l_1207), 0x53FB2A76L)))) & ((((((*l_1235) = p_1474->g_1232) != ((safe_mul_func_int8_t_s_s((((*l_1239) = l_1238) != (((l_1241[0][4][6] = &p_1474->g_1234) != (((VECTOR(uint64_t, 8))(l_1242.s16005162)).s0 , &p_1474->g_1234)) , (*p_1474->g_435))), (((safe_add_func_int32_t_s_s(0L, l_1242.s0)) > 0x17L) && 0xE2L))) , &p_1474->g_1233[1])) < p_1474->g_1151.x) == p_22) , p_22)) , p_22), (*p_1474->g_305)));
        for (p_1474->g_1036 = (-3); (p_1474->g_1036 > 37); p_1474->g_1036 = safe_add_func_int8_t_s_s(p_1474->g_1036, 9))
        { /* block id: 517 */
            int8_t l_1247[10] = {1L,(-3L),1L,1L,(-3L),1L,1L,(-3L),1L,1L};
            int32_t l_1248 = 0x6E915AB9L;
            VECTOR(int32_t, 4) l_1249 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
            int i;
            l_1250++;
        }
    }
    return p_1474->g_1253;
}


/* ------------------------------------------ */
/* 
 * reads : p_1474->g_60 p_1474->g_405 p_1474->g_136 p_1474->g_348 p_1474->g_218.f0 p_1474->g_305 p_1474->g_176 p_1474->g_344 p_1474->g_481 p_1474->g_732 p_1474->g_841 p_1474->g_359 p_1474->g_196 p_1474->g_504 p_1474->g_396 p_1474->g_397 p_1474->g_398 p_1474->g_933 p_1474->g_565 p_1474->g_505 p_1474->g_252 p_1474->g_582 p_1474->g_605 p_1474->g_107 p_1474->g_559 p_1474->g_860 p_1474->g_385 p_1474->g_480.f0 p_1474->g_1003 p_1474->g_65 p_1474->g_229 p_1474->g_1036 p_1474->g_903 p_1474->g_585 p_1474->l_comm_values p_1474->g_93 p_1474->g_384 p_1474->g_639 p_1474->g_218 p_1474->g_1099 p_1474->g_15 p_1474->g_676 p_1474->g_1147 p_1474->g_1151 p_1474->g_1055 p_1474->g_88 p_1474->g_1017 p_1474->g_1183 p_1474->g_1184 p_1474->g_724 p_1474->g_1191
 * writes: p_1474->g_60 p_1474->g_535 p_1474->g_176 p_1474->g_66 p_1474->g_344 p_1474->g_724 p_1474->g_411 p_1474->g_218.f0 p_1474->g_933 p_1474->g_505 p_1474->g_196 p_1474->g_669 p_1474->g_732 p_1474->g_1004 p_1474->g_1036 p_1474->g_93 p_1474->g_1077 p_1474->g_565 p_1474->g_544 p_1474->g_136 p_1474->g_1017 p_1474->g_88 p_1474->g_587
 */
uint16_t * func_26(int8_t * p_27, int8_t  p_28, int32_t ** p_29, struct S2 * p_1474)
{ /* block id: 306 */
    int32_t l_740[1];
    int32_t l_743 = 0L;
    VECTOR(int16_t, 4) l_749 = (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0x1505L), 0x1505L);
    VECTOR(uint32_t, 16) l_765 = (VECTOR(uint32_t, 16))(0x87ADDEFCL, (VECTOR(uint32_t, 4))(0x87ADDEFCL, (VECTOR(uint32_t, 2))(0x87ADDEFCL, 0x8F247689L), 0x8F247689L), 0x8F247689L, 0x87ADDEFCL, 0x8F247689L, (VECTOR(uint32_t, 2))(0x87ADDEFCL, 0x8F247689L), (VECTOR(uint32_t, 2))(0x87ADDEFCL, 0x8F247689L), 0x87ADDEFCL, 0x8F247689L, 0x87ADDEFCL, 0x8F247689L);
    VECTOR(int16_t, 4) l_798 = (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 6L), 6L);
    uint16_t *l_815 = (void*)0;
    int32_t *l_818[6][8] = {{&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676},{&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676},{&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676},{&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676},{&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676},{&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676,&p_1474->g_676}};
    union U1 l_834[2] = {{0x55D1535EL},{0x55D1535EL}};
    VECTOR(uint64_t, 16) l_864 = (VECTOR(uint64_t, 16))(0xA5DA7978D3B4B5DBL, (VECTOR(uint64_t, 4))(0xA5DA7978D3B4B5DBL, (VECTOR(uint64_t, 2))(0xA5DA7978D3B4B5DBL, 1UL), 1UL), 1UL, 0xA5DA7978D3B4B5DBL, 1UL, (VECTOR(uint64_t, 2))(0xA5DA7978D3B4B5DBL, 1UL), (VECTOR(uint64_t, 2))(0xA5DA7978D3B4B5DBL, 1UL), 0xA5DA7978D3B4B5DBL, 1UL, 0xA5DA7978D3B4B5DBL, 1UL);
    VECTOR(uint16_t, 16) l_877 = (VECTOR(uint16_t, 16))(0x939AL, (VECTOR(uint16_t, 4))(0x939AL, (VECTOR(uint16_t, 2))(0x939AL, 0xF73FL), 0xF73FL), 0xF73FL, 0x939AL, 0xF73FL, (VECTOR(uint16_t, 2))(0x939AL, 0xF73FL), (VECTOR(uint16_t, 2))(0x939AL, 0xF73FL), 0x939AL, 0xF73FL, 0x939AL, 0xF73FL);
    VECTOR(uint64_t, 2) l_892 = (VECTOR(uint64_t, 2))(2UL, 1UL);
    int64_t l_927 = 0x1F6C4A8591CEAA98L;
    union U0 *l_989 = &p_1474->g_480[0];
    int8_t l_994 = (-1L);
    VECTOR(int16_t, 16) l_1013 = (VECTOR(int16_t, 16))(0x68D5L, (VECTOR(int16_t, 4))(0x68D5L, (VECTOR(int16_t, 2))(0x68D5L, (-8L)), (-8L)), (-8L), 0x68D5L, (-8L), (VECTOR(int16_t, 2))(0x68D5L, (-8L)), (VECTOR(int16_t, 2))(0x68D5L, (-8L)), 0x68D5L, (-8L), 0x68D5L, (-8L));
    uint64_t **l_1103 = &p_1474->g_1017;
    int32_t l_1104 = 0x7D8A83E5L;
    uint32_t l_1110 = 4294967295UL;
    uint32_t l_1111 = 0x44B4E98BL;
    VECTOR(int64_t, 2) l_1127 = (VECTOR(int64_t, 2))(0x5364A3E43FF5AE86L, 0x2C14FBDCFA2EF97FL);
    VECTOR(uint16_t, 16) l_1130 = (VECTOR(uint16_t, 16))(0xEF9BL, (VECTOR(uint16_t, 4))(0xEF9BL, (VECTOR(uint16_t, 2))(0xEF9BL, 65526UL), 65526UL), 65526UL, 0xEF9BL, 65526UL, (VECTOR(uint16_t, 2))(0xEF9BL, 65526UL), (VECTOR(uint16_t, 2))(0xEF9BL, 65526UL), 0xEF9BL, 65526UL, 0xEF9BL, 65526UL);
    VECTOR(int32_t, 2) l_1139 = (VECTOR(int32_t, 2))((-7L), (-8L));
    VECTOR(int64_t, 8) l_1142 = (VECTOR(int64_t, 8))(0x234D78961803664DL, (VECTOR(int64_t, 4))(0x234D78961803664DL, (VECTOR(int64_t, 2))(0x234D78961803664DL, 0x15CC83F75BA0B6FEL), 0x15CC83F75BA0B6FEL), 0x15CC83F75BA0B6FEL, 0x234D78961803664DL, 0x15CC83F75BA0B6FEL);
    VECTOR(uint64_t, 8) l_1150 = (VECTOR(uint64_t, 8))(0x3A2111AC69BC8EC5L, (VECTOR(uint64_t, 4))(0x3A2111AC69BC8EC5L, (VECTOR(uint64_t, 2))(0x3A2111AC69BC8EC5L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x3A2111AC69BC8EC5L, 18446744073709551615UL);
    int16_t *l_1156 = &p_1474->g_1077;
    VECTOR(int8_t, 4) l_1169 = (VECTOR(int8_t, 4))(0x29L, (VECTOR(int8_t, 2))(0x29L, 0x6DL), 0x6DL);
    uint8_t *l_1172 = (void*)0;
    uint8_t *l_1173 = &p_1474->g_88[0];
    uint8_t *l_1174 = (void*)0;
    uint8_t *l_1175[8];
    VECTOR(int8_t, 2) l_1182 = (VECTOR(int8_t, 2))(0x75L, 0x43L);
    uint32_t *l_1187 = &p_1474->g_587;
    uint32_t l_1190 = 2UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_740[i] = (-7L);
    for (i = 0; i < 8; i++)
        l_1175[i] = &p_1474->g_1036;
    for (p_1474->g_60 = (-21); (p_1474->g_60 <= 27); ++p_1474->g_60)
    { /* block id: 309 */
        int32_t l_736 = (-1L);
        int64_t *l_741 = (void*)0;
        int64_t *l_742 = (void*)0;
        int8_t *l_750 = (void*)0;
        int8_t *l_751 = &p_1474->g_196[1];
        int16_t *l_752 = &p_1474->g_344;
        VECTOR(int8_t, 4) l_770 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x10L), 0x10L);
        uint16_t l_776 = 5UL;
        VECTOR(int8_t, 2) l_829 = (VECTOR(int8_t, 2))(0L, 0x71L);
        VECTOR(uint64_t, 16) l_863 = (VECTOR(uint64_t, 16))(0x09961BF6792CD6BDL, (VECTOR(uint64_t, 4))(0x09961BF6792CD6BDL, (VECTOR(uint64_t, 2))(0x09961BF6792CD6BDL, 9UL), 9UL), 9UL, 0x09961BF6792CD6BDL, 9UL, (VECTOR(uint64_t, 2))(0x09961BF6792CD6BDL, 9UL), (VECTOR(uint64_t, 2))(0x09961BF6792CD6BDL, 9UL), 0x09961BF6792CD6BDL, 9UL, 0x09961BF6792CD6BDL, 9UL);
        VECTOR(uint16_t, 16) l_886 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x864DL), 0x864DL), 0x864DL, 1UL, 0x864DL, (VECTOR(uint16_t, 2))(1UL, 0x864DL), (VECTOR(uint16_t, 2))(1UL, 0x864DL), 1UL, 0x864DL, 1UL, 0x864DL);
        VECTOR(uint64_t, 2) l_891 = (VECTOR(uint64_t, 2))(0x5A949D7531C25BCBL, 18446744073709551615UL);
        union U0 *l_893[4][10][3] = {{{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]}},{{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]}},{{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]}},{{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]},{&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]}}};
        int32_t l_920 = 0x015BE61BL;
        int32_t l_921 = 0x405DF4BAL;
        int32_t l_923 = 1L;
        int32_t l_924 = 0L;
        int32_t l_925 = 1L;
        int32_t l_926 = 0x17631CEEL;
        int32_t l_928 = (-1L);
        int32_t l_929 = 5L;
        int32_t l_930 = 0L;
        int32_t l_931 = 0x56E198ECL;
        int32_t l_932 = 0x735FF7C0L;
        VECTOR(uint64_t, 2) l_944 = (VECTOR(uint64_t, 2))(0x989EAFDD2A834EA7L, 0xED8DD309C4F6582DL);
        VECTOR(int8_t, 16) l_959 = (VECTOR(int8_t, 16))(0x66L, (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 0x09L), 0x09L), 0x09L, 0x66L, 0x09L, (VECTOR(int8_t, 2))(0x66L, 0x09L), (VECTOR(int8_t, 2))(0x66L, 0x09L), 0x66L, 0x09L, 0x66L, 0x09L);
        union U1 l_970 = {-10L};
        int32_t **l_983 = &p_1474->g_66[0][0][0];
        int32_t l_993 = 0x670FF659L;
        int32_t l_995[8];
        uint64_t *l_1015 = (void*)0;
        uint32_t l_1089[7] = {0UL,5UL,0UL,0UL,5UL,0UL,0UL};
        VECTOR(int32_t, 16) l_1094 = (VECTOR(int32_t, 16))(0x08A33822L, (VECTOR(int32_t, 4))(0x08A33822L, (VECTOR(int32_t, 2))(0x08A33822L, 1L), 1L), 1L, 0x08A33822L, 1L, (VECTOR(int32_t, 2))(0x08A33822L, 1L), (VECTOR(int32_t, 2))(0x08A33822L, 1L), 0x08A33822L, 1L, 0x08A33822L, 1L);
        uint64_t **l_1102 = &p_1474->g_1017;
        VECTOR(uint8_t, 4) l_1107 = (VECTOR(uint8_t, 4))(0x72L, (VECTOR(uint8_t, 2))(0x72L, 3UL), 3UL);
        int32_t **l_1119 = &p_1474->g_544;
        int8_t **l_1126 = &l_750;
        int16_t *l_1131 = (void*)0;
        int16_t *l_1132[10][10] = {{(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0,(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0},{(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0,(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0},{(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0,(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0},{(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0,(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0},{(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0,(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0},{(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0,(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0},{(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0,(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0},{(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0,(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0},{(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0,(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0},{(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0,(void*)0,&p_1474->g_1077,(void*)0,&p_1474->g_1077,(void*)0}};
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_995[i] = 0x68A8CB94L;
        if ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x67BD433099D70EF2L, 0xC5B7670433B7BCF0L)), 0x0B9F066540817DD8L, 0x837D6C1E2991150BL)).even))))).yxyxxyxy)).s4 ^ (0x72L != (p_28 ^ (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_736, 1L, 0L, (-9L))), ((VECTOR(int8_t, 2))(p_1474->g_737.wy)), 0x0CL, (safe_sub_func_int32_t_s_s(l_740[0], ((l_743 = p_28) , p_28))), 0x28L, (safe_unary_minus_func_uint32_t_u((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((*l_752) = ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 8))(0x092AL, ((VECTOR(int16_t, 2))(0x7DBCL, 0L)), 0x6507L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_749.xy)).xxxy)))).s5147333524066463, ((VECTOR(int16_t, 8))(p_1474->g_480[0].f0, (((*l_751) ^= p_28) | l_749.y), (-3L), 0x4F96L, 0x1981L, 3L, 0x5A53L, 0x2F7AL)).s5415174426404333, ((VECTOR(int16_t, 16))(0x460FL))))).s9c, ((VECTOR(int16_t, 2))(0x7118L))))).lo), 0)), p_28)))), ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 4))(0x6AL)))).s5 < GROUP_DIVERGE(1, 1))))))
        { /* block id: 313 */
            if ((*p_1474->g_405))
                break;
        }
        else
        { /* block id: 315 */
            return l_752;
        }
        if ((*p_1474->g_348))
        { /* block id: 318 */
            uint8_t *l_783[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t l_789 = 3UL;
            VECTOR(int32_t, 8) l_790 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x30610478L), 0x30610478L), 0x30610478L, 3L, 0x30610478L);
            int32_t l_791 = 0L;
            uint32_t **l_807 = &p_1474->g_730;
            uint16_t **l_852 = (void*)0;
            VECTOR(int32_t, 8) l_862 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3F59DCD8L), 0x3F59DCD8L), 0x3F59DCD8L, (-1L), 0x3F59DCD8L);
            VECTOR(uint64_t, 4) l_866 = (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0x9914318AC0F6D65EL), 0x9914318AC0F6D65EL);
            int16_t l_894 = 0L;
            union U1 l_904 = {0x42886249L};
            union U1 **l_912 = &p_1474->g_220;
            union U0 *l_986[10] = {&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]};
            int32_t *l_990 = &l_920;
            int32_t *l_991 = &l_743;
            int32_t *l_992[1][6][5] = {{{(void*)0,&l_926,&l_834[1].f0,&l_926,(void*)0},{(void*)0,&l_926,&l_834[1].f0,&l_926,(void*)0},{(void*)0,&l_926,&l_834[1].f0,&l_926,(void*)0},{(void*)0,&l_926,&l_834[1].f0,&l_926,(void*)0},{(void*)0,&l_926,&l_834[1].f0,&l_926,(void*)0},{(void*)0,&l_926,&l_834[1].f0,&l_926,(void*)0}}};
            uint8_t l_996 = 0x3CL;
            int i, j, k;
            if (p_28)
                break;
            for (l_736 = 0; (l_736 <= (-18)); l_736 = safe_sub_func_int32_t_s_s(l_736, 2))
            { /* block id: 322 */
                VECTOR(int8_t, 8) l_774 = (VECTOR(int8_t, 8))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 6L), 6L), 6L, (-6L), 6L);
                VECTOR(uint32_t, 8) l_775 = (VECTOR(uint32_t, 8))(0xCB79FFDFL, (VECTOR(uint32_t, 4))(0xCB79FFDFL, (VECTOR(uint32_t, 2))(0xCB79FFDFL, 4294967295UL), 4294967295UL), 4294967295UL, 0xCB79FFDFL, 4294967295UL);
                VECTOR(int32_t, 4) l_808 = (VECTOR(int32_t, 4))(0x63A599C3L, (VECTOR(int32_t, 2))(0x63A599C3L, 1L), 1L);
                uint64_t l_858 = 0x0BD9912FDBB56AA5L;
                VECTOR(uint64_t, 4) l_865 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551606UL), 18446744073709551606UL);
                union U1 l_880 = {0x0D5A3917L};
                VECTOR(uint16_t, 4) l_884 = (VECTOR(uint16_t, 4))(0x3DDBL, (VECTOR(uint16_t, 2))(0x3DDBL, 65530UL), 65530UL);
                VECTOR(uint16_t, 4) l_885 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x50BFL), 0x50BFL);
                VECTOR(int16_t, 4) l_900 = (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x6514L), 0x6514L);
                int32_t *l_905 = (void*)0;
                union U0 *l_985[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_985[i] = &p_1474->g_480[0];
                for (p_1474->g_535 = (-22); (p_1474->g_535 == 16); ++p_1474->g_535)
                { /* block id: 325 */
                    VECTOR(int8_t, 16) l_773 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x27L), 0x27L), 0x27L, (-1L), 0x27L, (VECTOR(int8_t, 2))((-1L), 0x27L), (VECTOR(int8_t, 2))((-1L), 0x27L), (-1L), 0x27L, (-1L), 0x27L);
                    uint32_t *l_777 = (void*)0;
                    uint32_t *l_778 = (void*)0;
                    uint8_t *l_782 = &p_1474->g_93[0][1][0];
                    uint8_t **l_781[3][8][8] = {{{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782}},{{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782}},{{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782},{&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782,&l_782}}};
                    int i, j, k;
                    l_791 = (safe_rshift_func_int8_t_s_s((GROUP_DIVERGE(0, 1) && (18446744073709551608UL ^ ((++(*p_1474->g_305)) || (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((((VECTOR(uint32_t, 16))(l_765.saacbab2445ef2087)).s5 , (l_790.s6 = ((safe_div_func_uint8_t_u_u(p_28, (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(3L, (-1L))).yxxy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_770.yyxwyzwy)).s2644046307641171)).odd, (int8_t)(p_1474->g_5[0][1][0] ^ ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 16))(l_773.s3055b9bc5410b40d)).hi, ((VECTOR(int8_t, 8))(l_774.s66342730))))).s22)).lo, (((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 16))(l_775.s2772701615420332)).s95, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))((p_1474->g_726 ^= l_776), (safe_mul_func_int8_t_s_s((((((l_783[2] = &p_1474->g_88[1]) == (((VECTOR(int64_t, 2))(p_1474->g_784.xy)).odd , (((safe_mod_func_int64_t_s_s((((p_28 == p_28) <= ((((*l_751) = (safe_mul_func_int16_t_s_s((l_749.x , p_1474->g_90), 0x039EL))) , 7L) , GROUP_DIVERGE(0, 1))) >= 0x72L), p_1474->g_229.y)) && p_1474->g_368.y) , &p_1474->g_93[0][0][0]))) <= l_770.w) > (-1L)) == p_28), l_775.s1)), 1UL, 0x20F6F8F4L, 2UL, FAKE_DIVERGE(p_1474->local_1_offset, get_local_id(1), 10), ((VECTOR(uint32_t, 4))(0x69EE7B7AL)), ((VECTOR(uint32_t, 2))(0x79CA5CB1L)), 0xAED5DC19L, ((VECTOR(uint32_t, 2))(4294967295UL)), 0x56BACD80L)).s15))))))).yyyyyxxyxxyxxxxy)).se9, ((VECTOR(uint32_t, 2))(1UL))))).yxyxxxxx, ((VECTOR(uint32_t, 8))(3UL)), ((VECTOR(uint32_t, 8))(0xFF8F355EL))))).s1 , 0x24L))) != p_28))))))).odd, ((VECTOR(int8_t, 4))(0x30L))))))), ((VECTOR(int8_t, 4))(0x17L)), ((VECTOR(int8_t, 4))(0L))))).x, l_789)))) , GROUP_DIVERGE(0, 1)))) >= l_776), 0L)), 7))))), 6));
                    for (l_743 = 17; (l_743 <= 6); l_743--)
                    { /* block id: 334 */
                        int16_t *l_799 = (void*)0;
                        int16_t *l_800 = (void*)0;
                        int16_t *l_801 = (void*)0;
                        int16_t *l_802 = (void*)0;
                        int16_t *l_803 = (void*)0;
                        int16_t *l_804 = (void*)0;
                        int16_t *l_805 = (void*)0;
                        union U1 l_806 = {-5L};
                        int i, j;
                        (*p_29) = l_777;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1474->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 148)), permutations[(safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s(((*l_752) &= (0UL ^ p_28)), (p_1474->g_724.s2 = ((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(l_798.xzywzwyz)).s5707176224614053))).s8))) , ((l_806 , 0x6030C2B8L) != ((l_807 = (void*)0) == (((VECTOR(int32_t, 8))(l_808.xwzxwyzw)).s2 , &p_1474->g_730)))), (safe_mul_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(249UL, 0xEEL)), 0xA4L, 0x11L)).zywxzyxx, ((VECTOR(uint8_t, 2))(0xDAL, 0x61L)).xyyyxyxx))))).s5, (((p_1474->g_481.s7 == (l_806.f0 & l_774.s7)) < 1UL) , 0x16L))) != FAKE_DIVERGE(p_1474->global_0_offset, get_global_id(0), 10)) && 0L), p_28)))), 10))][(safe_mod_func_uint32_t_u_u(p_1474->tid, 148))]));
                    }
                    for (l_743 = 14; (l_743 != (-21)); l_743 = safe_sub_func_int32_t_s_s(l_743, 1))
                    { /* block id: 345 */
                        return l_815;
                    }
                }
                for (p_1474->g_411 = (-8); (p_1474->g_411 == 1); p_1474->g_411++)
                { /* block id: 351 */
                    int16_t *l_842 = (void*)0;
                    int16_t l_843[4][2] = {{1L,0x12B5L},{1L,0x12B5L},{1L,0x12B5L},{1L,0x12B5L}};
                    int32_t *l_844[8][10][2] = {{{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]}},{{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]}},{{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]}},{{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]}},{{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]}},{{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]}},{{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]}},{{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]},{&p_1474->g_5[0][0][0],&l_740[0]}}};
                    int32_t ***l_888 = (void*)0;
                    int32_t ****l_887 = &l_888;
                    VECTOR(uint64_t, 2) l_889 = (VECTOR(uint64_t, 2))(0xCA9E3DCE5D57BD8EL, 0xEACBEFF2B8C370C1L);
                    VECTOR(int16_t, 2) l_901 = (VECTOR(int16_t, 2))((-1L), 5L);
                    int32_t l_913 = 0L;
                    uint32_t l_918 = 0x46AD4470L;
                    union U1 **l_947[10];
                    int i, j, k;
                    for (i = 0; i < 10; i++)
                        l_947[i] = &p_1474->g_220;
                    if ((l_740[0] = ((((void*)0 != l_818[0][4]) , (!(safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(p_28, 0)), ((VECTOR(int8_t, 2))(l_829.yy)).even)) >= ((((((safe_add_func_int16_t_s_s((l_834[1].f0 = ((*l_752) = ((safe_sub_func_int8_t_s_s(p_1474->g_732, (l_834[1] , (safe_sub_func_uint16_t_u_u(((l_798.w , (safe_rshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_1474->global_2_offset, get_global_id(2), 10), (&l_815 != (void*)0))) <= 0x11A4L), 7))) > p_28), 4L))))) > p_1474->g_841))), 6UL)) > l_843[2][0]) > 0x66L) < l_774.s5) ^ 0x5CL) >= p_1474->g_359.s9)), p_1474->g_196[0])), l_798.z)), l_736)))) , (-7L))))
                    { /* block id: 355 */
                        int32_t *l_850 = (void*)0;
                        VECTOR(uint64_t, 4) l_851 = (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 18446744073709551613UL), 18446744073709551613UL);
                        VECTOR(int8_t, 16) l_853 = (VECTOR(int8_t, 16))(0x4DL, (VECTOR(int8_t, 4))(0x4DL, (VECTOR(int8_t, 2))(0x4DL, 0L), 0L), 0L, 0x4DL, 0L, (VECTOR(int8_t, 2))(0x4DL, 0L), (VECTOR(int8_t, 2))(0x4DL, 0L), 0x4DL, 0L, 0x4DL, 0L);
                        uint16_t *l_859[2][9][2] = {{{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270}},{{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270},{&p_1474->g_270,&p_1474->g_270}}};
                        int i, j, k;
                        l_740[0] |= p_28;
                        (*p_1474->g_504) = (safe_div_func_int32_t_s_s((((0x04CBL && (safe_rshift_func_uint8_t_u_s(l_790.s6, 6))) <= p_1474->g_60) && (((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(0x1DL, 0x40L)).xyxyxxyxyyyyxyyx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(((safe_unary_minus_func_int16_t_s((l_850 == (void*)0))) & ((VECTOR(uint64_t, 2))(l_851.zw)).hi), ((void*)0 == l_852), ((VECTOR(int8_t, 2))(l_853.s1f)), (-1L), (safe_sub_func_uint32_t_u_u(l_743, (((((safe_lshift_func_uint8_t_u_s((((l_829.y & 18446744073709551615UL) , (*p_1474->g_397)) ^ 0xB78C2AC9361BBCCCL), 1)) && GROUP_DIVERGE(1, 1)) == (-9L)) , l_790.s4) != l_765.s8))), 0x36L, 0x3EL)).s45, (int8_t)l_774.s5))).xxxyyyxx)).s0030566476566522))).s8 <= GROUP_DIVERGE(1, 1))), l_858));
                        return l_815;
                    }
                    else
                    { /* block id: 359 */
                        uint16_t l_861 = 0x2788L;
                        int32_t l_881 = 0x2C001C1CL;
                        (*p_1474->g_348) = (l_861 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_1474->g_860.s5b88a157)).s72)).xxyx)).z);
                        l_881 &= ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_862.s4253)).hi)).xxxxxxxy)).lo))))).hi, (int32_t)((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 4))(l_863.s910e)), ((VECTOR(uint64_t, 8))(l_864.s5e3ecaea)).odd))), ((VECTOR(uint64_t, 16))(l_865.xyyyzwzwxxyxyyww)).s0eb1))), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_866.yx)).xxyx)))).s3 < ((safe_add_func_int8_t_s_s(((*l_751) ^= l_861), (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 2))((-1L), 0x6BL)).odd, ((p_28 >= p_1474->g_562.s8) | (0xCB8021289587E185L > (safe_mul_func_int8_t_s_s(l_749.w, ((safe_mul_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(l_774.s3, (((VECTOR(uint16_t, 16))(0x9D4DL, ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_877.s7124e8f9d0d93aab)).s1a)).xxxx)), 0UL, (safe_sub_func_int32_t_s_s((l_880 , ((VECTOR(int32_t, 2))(0x4A731FD3L, (-5L))).even), (p_28 , (l_808.z &= l_880.f0)))), 1UL, 1UL)).s51, ((VECTOR(uint16_t, 2))(0xF763L))))), 0UL, (*p_1474->g_305), ((VECTOR(uint16_t, 4))(0x5DD9L)), 3UL, 1UL, l_861, (*p_1474->g_305), FAKE_DIVERGE(p_1474->global_0_offset, get_global_id(0), 10), 65535UL, 0xFB0EL)).s5 & 0x29F9L))) | 1UL), 0x5E0BL)) , l_765.s9))))))))) >= l_863.s5)) | (*p_1474->g_405))))), (-3L), 0x6DAADADCL)).lo)).yyxy, ((VECTOR(int32_t, 4))(0x1AD3AF3FL)), ((VECTOR(int32_t, 4))(4L))))).w;
                    }
                    if (((*p_1474->g_305) != (((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 2))(0UL, 3UL)).yxxxxxxyyyxxxxxx, ((VECTOR(uint64_t, 8))(4UL, (safe_sub_func_uint64_t_u_u((l_765.sa || (((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 16))(l_884.zxxywzyzzyywxwzw)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_885.ywwx)).odd)).xyxyyxyxyxxyxxxx, ((VECTOR(uint16_t, 2))(l_886.sf7)).xxxyyyyxxyyxxxxx))).s0 , (&p_1474->g_65 != ((*l_887) = &p_29)))), l_774.s2)), ((VECTOR(uint64_t, 16))(l_889.yxxxyyxyxxyyxxxy)).sc, ((VECTOR(uint64_t, 4))(p_1474->g_890.xyxx)), 0xE61C5F93C9C304FCL)).s5222445123231000))), ((VECTOR(uint64_t, 16))(l_891.yyxxyxxyxxyxyyyx))))).s1b2c, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(0xAA90586AFE5C2E9BL, ((VECTOR(uint64_t, 4))(0x7755C5FE2098A061L, 1UL, 18446744073709551615UL, 0xC9A99BBC7428D11FL)).w, ((VECTOR(uint64_t, 2))(l_892.yy)).hi, ((void*)0 == l_893[0][3][0]), 18446744073709551615UL, p_28, 0xA93EA6612EBA501EL, 0xC0522EFAF8348F84L)), 0x7691020C271C87C6L, p_28, ((VECTOR(uint64_t, 4))(18446744073709551615UL)), 6UL, 18446744073709551613UL)).s05b7))).xywyywxw)).s2072632206724020)).lo, ((VECTOR(uint64_t, 8))(0x7C421541000A2E59L)), ((VECTOR(uint64_t, 8))(0x043527F11518A132L))))).s1 & (**p_1474->g_396))))
                    { /* block id: 367 */
                        uint16_t l_895[9];
                        VECTOR(int16_t, 8) l_899 = (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x5C24L), 0x5C24L), 0x5C24L, 6L, 0x5C24L);
                        VECTOR(uint32_t, 2) l_906 = (VECTOR(uint32_t, 2))(4294967288UL, 0x1102CF4AL);
                        VECTOR(int8_t, 4) l_909 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L));
                        int16_t *l_914 = (void*)0;
                        int16_t *l_915 = (void*)0;
                        int16_t *l_916 = (void*)0;
                        int16_t *l_917 = &l_843[2][0];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_895[i] = 0x6672L;
                        (*p_1474->g_348) = p_28;
                        l_895[3]++;
                        (*p_1474->g_504) = (((!((void*)0 == &p_1474->g_65)) | ((((*l_917) ^= ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_1474->g_898.s77)), 1L, (-1L))), ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(l_899.s4125)).hi, ((VECTOR(int16_t, 16))(l_900.xzxyzyxxzwyzzwzz)).s25))), ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))(0x4554L, ((VECTOR(int16_t, 2))(7L, (-6L))).odd, 0x2AD1L, (-4L))).xxwzxxyw, ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_901.xyxy)).lo)).yyyyyyxy)).s7134474745362777, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))((l_740[0] = ((*l_752) ^= (~((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(p_1474->g_902.zywwzxwz)).s1211052652120615, ((VECTOR(uint8_t, 8))(p_1474->g_903.s54517410)).s1523741100642763))).sf))), (l_904 , (!(-6L))), (-1L), (l_905 != &l_740[0]), 9L, ((*l_752) ^= (((((VECTOR(uint32_t, 4))(l_906.yyyy)).y == ((((0UL < (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 16))(l_909.zzyxxyxxwywxyxwy)), ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))((safe_mul_func_uint8_t_u_u(p_28, (l_912 != l_912))), 0x4BL, l_866.x, ((VECTOR(int8_t, 2))(4L)), 0x63L, 0L, 0x16L, 0x6DL, 0L, l_886.s1, 2L, 2L, ((VECTOR(int8_t, 2))((-1L))), 0x43L)).hi, ((VECTOR(int8_t, 8))(5L))))).s50, ((VECTOR(int8_t, 2))(0L))))).xyyx)).xyzzyyyx)), ((VECTOR(int8_t, 8))((-3L)))))), ((VECTOR(int8_t, 8))(0x5CL))))).s4574774001343075))))).s7, p_28))) != 1UL) , l_899.s4) < (*p_1474->g_305))) <= p_28) < l_913)), ((VECTOR(int16_t, 2))((-5L))), ((VECTOR(int16_t, 4))(0x0520L)), (-1L), p_28, 0x022CL, 0L)).hi)).s1316204765477536))).sdd35, ((VECTOR(int16_t, 4))(0x5858L))))).wxzzwwwz))), 0L, (-1L))).s8a6c, ((VECTOR(int16_t, 4))(0L))))).z) == FAKE_DIVERGE(p_1474->local_0_offset, get_local_id(0), 10)) , 8L)) || 0UL);
                    }
                    else
                    { /* block id: 375 */
                        VECTOR(int32_t, 4) l_922 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x331A780FL), 0x331A780FL);
                        int i;
                        if (l_918)
                            break;
                        l_740[0] ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_1474->g_919.s27457434)))).s2;
                        --p_1474->g_933;
                    }
                    if ((safe_add_func_int8_t_s_s(p_1474->g_481.s4, (-1L))))
                    { /* block id: 380 */
                        uint64_t *l_945 = (void*)0;
                        union U0 l_946 = {0x941A58D97D3B79BBL};
                        (*p_1474->g_565) = (*p_1474->g_565);
                        (*p_29) = &l_930;
                        l_930 |= ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((*l_752) |= 0x4F90L) , (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_944.yxyx)), (l_790.s5 |= l_892.y), 0UL, 18446744073709551613UL, 0xF084C7F8EE9365A3L)).s1, (((l_946 , ((p_28 , p_1474->g_252.s7) , &p_1474->g_220)) != l_947[3]) , (safe_lshift_func_uint8_t_u_u(p_1474->g_582.s6, 7)))))), p_28)), FAKE_DIVERGE(p_1474->global_2_offset, get_global_id(2), 10))) < (-6L));
                    }
                    else
                    { /* block id: 386 */
                        uint16_t l_956 = 65533UL;
                        int32_t ****l_966 = (void*)0;
                        int32_t ***l_968[6][7][6] = {{{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0}},{{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0}},{{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0}},{{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0}},{{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0}},{{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0},{&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,&p_1474->g_669,(void*)0,(void*)0}}};
                        int32_t ****l_967 = &l_968[3][2][3];
                        union U1 l_969[2][1][9] = {{{{-4L},{-4L},{-4L},{-4L},{-4L},{-4L},{-4L},{-4L},{-4L}}},{{{-4L},{-4L},{-4L},{-4L},{-4L},{-4L},{-4L},{-4L},{-4L}}}};
                        uint32_t *l_977 = (void*)0;
                        uint32_t *l_978 = &l_789;
                        int i, j, k;
                        l_808.x &= ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(((*l_751) = (safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(2, 1), (l_932 , (l_921 = l_877.s6))))), (++l_956))) , (p_28 = ((VECTOR(int8_t, 8))(l_959.s6213052e)).s4)), ((((p_1474->g_605.s5 < ((((safe_sub_func_uint32_t_u_u(((*l_978) = ((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 4))((((*p_1474->g_305)--) || ((((void*)0 == p_27) , (((*l_887) = &p_29) == ((*l_967) = &p_29))) && ((l_970 = l_969[0][0][5]) , ((((safe_mul_func_uint8_t_u_u((p_1474->g_359.sa++), (safe_div_func_uint8_t_u_u(p_1474->g_639.s5, l_931)))) , &p_1474->g_117) != (void*)0) | 0x26B6E83DD8EADEFCL)))), 4294967295UL, 0x68E4FB2AL, 4UL)).xywzxzwxzxzyxxyw, ((VECTOR(uint32_t, 16))(4294967286UL)), ((VECTOR(uint32_t, 16))(1UL))))).hi)).s6, p_1474->g_107.x)) && p_1474->g_559.s3)), p_1474->g_860.s7)) < 0x6793B6B95A54CC97L) , l_929) != 0xE4EBD8F8L)) | p_1474->g_385.y) , &p_1474->g_305) != l_852))) >= l_944.x);
                    }
                }
                for (l_932 = 0; (l_932 <= (-6)); l_932 = safe_sub_func_int64_t_s_s(l_932, 1))
                { /* block id: 402 */
                    int32_t ***l_984 = &p_1474->g_669;
                    l_740[0] = (l_862.s7 = ((safe_div_func_uint32_t_u_u(((((*l_984) = l_983) == (p_29 = (((l_765.s7 > (~((&l_740[0] == (void*)0) ^ FAKE_DIVERGE(p_1474->global_0_offset, get_global_id(0), 10)))) | (l_985[5] != l_986[6])) , l_983))) | ((((((l_743 ^ ((((safe_mod_func_int8_t_s_s((~((0x2441A77CL | GROUP_DIVERGE(0, 1)) ^ p_28)), l_866.w)) , &p_1474->g_480[0]) == l_989) < p_28)) , l_789) | p_1474->g_480[0].f0) < (*p_1474->g_305)) <= l_765.s4) <= l_789)), p_28)) , 0x047BE1F7L));
                }
            }
            l_996++;
        }
        else
        { /* block id: 410 */
            uint32_t **l_1001 = &p_1474->g_730;
            int32_t *l_1007 = &l_928;
            uint8_t *l_1014 = (void*)0;
            VECTOR(int64_t, 8) l_1019 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
            VECTOR(uint64_t, 8) l_1024 = (VECTOR(uint64_t, 8))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551614UL, 18446744073709551615UL);
            VECTOR(int32_t, 8) l_1044 = (VECTOR(int32_t, 8))(0x3F929DEDL, (VECTOR(int32_t, 4))(0x3F929DEDL, (VECTOR(int32_t, 2))(0x3F929DEDL, (-9L)), (-9L)), (-9L), 0x3F929DEDL, (-9L));
            int32_t l_1084 = 0L;
            int32_t ***l_1098[10] = {&p_1474->g_65,(void*)0,(void*)0,(void*)0,&p_1474->g_65,&p_1474->g_65,(void*)0,(void*)0,(void*)0,&p_1474->g_65};
            int32_t ****l_1097 = &l_1098[4];
            uint64_t ***l_1101 = &p_1474->g_505;
            int32_t l_1112 = 9L;
            int i;
            for (p_1474->g_732 = 2; (p_1474->g_732 <= 46); ++p_1474->g_732)
            { /* block id: 413 */
                int32_t *l_1008 = &p_1474->g_136;
                uint16_t *l_1012 = (void*)0;
                uint64_t **l_1016[1];
                VECTOR(int64_t, 2) l_1018 = (VECTOR(int64_t, 2))(0x7092BF6D268979F3L, 0x658EDD84F9C131A2L);
                VECTOR(int64_t, 8) l_1026 = (VECTOR(int64_t, 8))(0x6E7E7197BC25ED26L, (VECTOR(int64_t, 4))(0x6E7E7197BC25ED26L, (VECTOR(int64_t, 2))(0x6E7E7197BC25ED26L, 1L), 1L), 1L, 0x6E7E7197BC25ED26L, 1L);
                VECTOR(int8_t, 4) l_1052 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x28L), 0x28L);
                int i;
                for (i = 0; i < 1; i++)
                    l_1016[i] = (void*)0;
                if (((void*)0 == l_1001))
                { /* block id: 414 */
                    int32_t **l_1002 = &l_818[0][4];
                    int32_t l_1006 = (-1L);
                    (*p_1474->g_1003) = l_1002;
                    l_743 = l_1006;
                    l_1008 = l_1007;
                }
                else
                { /* block id: 418 */
                    (*p_1474->g_65) = l_1007;
                    for (l_924 = 28; (l_924 == (-5)); l_924 = safe_sub_func_uint8_t_u_u(l_924, 7))
                    { /* block id: 422 */
                        uint16_t *l_1011 = &p_1474->g_270;
                        return l_1011;
                    }
                    return l_1012;
                }
                if ((((((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 2))(l_1013.sc1)).xyyyxxxx, (int16_t)(l_1014 != (((p_1474->g_1017 = l_1015) == (((VECTOR(int64_t, 16))(0x5EC2B194A7D9CD95L, 4L, ((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 16))(l_1018.yxxyxyxxyxxxxyxy)).lo, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 8))(l_1019.s65220505)).s26, (int64_t)((safe_mul_func_uint8_t_u_u(l_749.z, (safe_rshift_func_int16_t_s_s(((*l_1008) = ((*l_752) = (GROUP_DIVERGE(2, 1) && ((VECTOR(uint64_t, 8))(l_1024.s34175272)).s4))), 15)))) != p_28)))), ((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_1474->g_1025.xx)), 0x5C6BC179E1B2AD34L, 0L)).xxwyzxwyxwzzwwyw, ((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_1026.s26)), p_1474->g_225.sb, ((p_28 , GROUP_DIVERGE(0, 1)) <= ((safe_div_func_int64_t_s_s(p_1474->g_535, (**p_1474->g_396))) && (safe_mod_func_uint8_t_u_u(p_1474->g_697.w, (*l_1007))))), ((VECTOR(int64_t, 2))(0x34C132A7FC130476L)), 0x4ECCE5BA0B859BB9L, 0x6966CB5FC751A7CAL)).odd, ((VECTOR(int64_t, 4))((-6L)))))).wxywxzzxzywwzxyy, ((VECTOR(int64_t, 16))(0x65893AD7D21B858DL))))).s30))), ((VECTOR(int64_t, 8))(0x5FDBC789731043ADL)), ((VECTOR(int64_t, 4))(0L)), (-4L), 0x48243EDEFBFFB482L)).odd)), ((VECTOR(int64_t, 8))(0x449C53B1F11F0836L))))).s1700526151535710)).hi, ((VECTOR(int64_t, 8))(0x31AAB3E231743C49L))))), (int64_t)p_1474->g_36.sa))), ((VECTOR(int64_t, 4))((-2L))), 0x717EE3B18D5DCA80L, 1L)).s3 , (*p_1474->g_396))) , l_750)), (int16_t)p_28))).s4337454520271312, ((VECTOR(int16_t, 16))(0x5831L))))).sd > 65534UL) ^ p_28) == p_28))
                { /* block id: 430 */
                    uint16_t l_1035 = 65533UL;
                    VECTOR(int64_t, 4) l_1043 = (VECTOR(int64_t, 4))(0x2D946E36D550BF1DL, (VECTOR(int64_t, 2))(0x2D946E36D550BF1DL, 1L), 1L);
                    int i;
                    (*l_1007) = (((safe_div_func_uint16_t_u_u(((*p_1474->g_305) ^= p_28), p_1474->g_229.x)) , ((safe_div_func_int32_t_s_s(((p_1474->g_1036 ^= (0L <= l_1035)) , ((safe_add_func_uint16_t_u_u((l_1035 < ((((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 4))(p_1474->g_1039.yyyy)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 4))(p_1474->g_1040.s3014)).lo, (uint32_t)(safe_rshift_func_int8_t_s_s((+((-1L) >= ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_1043.zwzxywyyxxxwyxww)))).s3fd5)).odd)).hi)), 1))))), 0x67212BB5L, 0x081A49ADL)), ((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 8))(l_1044.s36211034)).s13))).xyxy))).y && (((*l_1008) , (safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_int64_t_s((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_u((((l_1043.x && 8UL) | p_1474->g_107.x) , GROUP_DIVERGE(0, 1)), 7)) == l_1052.x) || 0L), p_28)))) & 0x50L), 6))) || p_28)) != 0xFCL)), p_1474->g_903.s7)) , p_28)), p_28)) , p_1474->g_860.sf)) == p_28);
                    for (l_994 = 7; (l_994 <= 20); ++l_994)
                    { /* block id: 436 */
                        (*p_29) = &l_743;
                    }
                    if ((*l_1008))
                        continue;
                }
                else
                { /* block id: 440 */
                    uint16_t *l_1056 = &p_1474->g_270;
                    uint32_t *l_1057[10][8][3] = {{{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726}},{{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726}},{{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726}},{{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726}},{{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726}},{{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726}},{{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726}},{{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726}},{{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726}},{{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726},{&p_1474->g_587,&p_1474->g_726,&p_1474->g_726}}};
                    int32_t l_1058 = 0x12CA7FB2L;
                    uint8_t **l_1061 = &l_1014;
                    int32_t l_1064 = (-6L);
                    uint8_t *l_1069 = (void*)0;
                    uint8_t *l_1070 = &p_1474->g_93[1][0][0];
                    int i, j, k;
                    if (((VECTOR(int32_t, 4))(p_1474->g_1055.wzzy)).y)
                    { /* block id: 441 */
                        (*l_1008) ^= 0L;
                    }
                    else
                    { /* block id: 443 */
                        return l_1056;
                    }
                    l_1064 = ((*l_1008) = ((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x64FFE058D766D121L, (-1L))).even, ((l_1058 = p_28) < (safe_div_func_int8_t_s_s((-7L), (l_740[0] &= ((((*l_1061) = &p_1474->g_1036) != (void*)0) , (*l_1007)))))), 6L, 0x527A668053C48AF3L)).y & (p_28 >= FAKE_DIVERGE(p_1474->global_0_offset, get_global_id(0), 10))) | ((*l_1070) ^= (safe_div_func_uint8_t_u_u(l_1064, (safe_div_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((p_1474->g_585.y <= p_1474->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1474->tid, 148))]), 0x29L)), p_28)))))));
                    for (l_1058 = 0; (l_1058 < (-30)); l_1058 = safe_sub_func_int64_t_s_s(l_1058, 7))
                    { /* block id: 454 */
                        if ((*p_1474->g_348))
                            break;
                    }
                    if ((*l_1007))
                        continue;
                }
                for (l_931 = (-5); (l_931 >= 3); l_931 = safe_add_func_uint64_t_u_u(l_931, 9))
                { /* block id: 461 */
                    (*p_29) = l_1007;
                }
            }
            if (((p_1474->g_1077 = (((VECTOR(uint64_t, 2))(5UL, 0x91DBCD94996CEEEAL)).hi & (safe_add_func_int16_t_s_s((p_1474->g_384.s2 ^ l_749.y), l_743)))) , (((safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((l_1084 | ((0x3D0CL != ((safe_div_func_int64_t_s_s(9L, (*l_1007))) < ((((*p_1474->g_397) | ((safe_mul_func_uint16_t_u_u((l_923 & 4294967292UL), l_994)) ^ l_743)) & p_1474->g_639.s4) && l_1089[1]))) < p_28)), l_798.w)), (*l_1007))) || p_28) | (*l_1007))))
            { /* block id: 466 */
                uint8_t **l_1091 = &l_1014;
                uint8_t ***l_1090 = &l_1091;
                if (l_926)
                    break;
                (*l_1090) = (void*)0;
                (*p_29) = &l_740[0];
            }
            else
            { /* block id: 470 */
                uint64_t ****l_1100 = &p_1474->g_565;
                (*l_1007) |= (p_28 & (0xCA0C89C3FEFE2102L ^ l_740[0]));
                l_1104 ^= ((safe_lshift_func_uint16_t_u_s(((((((VECTOR(int32_t, 4))(l_1094.s4231)).y , (p_1474->g_218[3][1][0] , ((*p_1474->g_305)++))) ^ p_28) , l_1097) != p_1474->g_1099), (((((*l_1100) = &p_1474->g_505) == (l_1101 = l_1101)) != (**p_1474->g_396)) & (((l_1102 = &l_1015) == l_1103) == l_864.s8)))) , p_28);
                (*p_1474->g_504) ^= 0x706CA33EL;
            }
            if (p_28)
                break;
            l_995[2] = (safe_add_func_uint8_t_u_u((((VECTOR(uint8_t, 16))(l_1107.wzwxwxyzwzzzxxyw)).sd <= ((VECTOR(int8_t, 4))((((safe_mul_func_int8_t_s_s(((1L >= (0xF06F71FB0EDE4BCDL >= ((+((VECTOR(uint64_t, 4))((*p_1474->g_397), 0x794F0DE031A5B6E9L, 0x0AED58DB49EA6961L, 0xC8EB17CC063E44D0L)).x) <= ((&p_1474->g_66[0][0][0] == (void*)0) ^ ((*l_1007) = ((void*)0 != l_1001)))))) & ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 4))(p_28, ((l_1110 , p_28) , l_864.s9), 1L, 0x7EL)), ((VECTOR(int8_t, 4))(0x71L))))).y), l_1111)) | p_28) , (-7L)), l_1112, (-1L), 0L)).z), 255UL));
        }
        (*p_1474->g_504) = ((((+(safe_div_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_u((p_28 && (safe_lshift_func_uint8_t_u_s((FAKE_DIVERGE(p_1474->global_0_offset, get_global_id(0), 10) < (&l_925 != ((*l_1119) = (void*)0))), (((((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((((-6L) || (l_1104 <= (FAKE_DIVERGE(p_1474->global_2_offset, get_global_id(2), 10) ^ (safe_sub_func_int16_t_s_s((((*l_1126) = &p_1474->g_196[1]) == (void*)0), (((VECTOR(int64_t, 8))(l_1127.xxyyyxxy)).s3 , (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_1130.s0db7ef166497df65)))))).odd)).s6, (l_743 = ((*l_752) = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x4476L, 0x4C7CL)).xyyyxyxx)).s1)))))))))) || ((&p_1474->g_117 != l_1015) <= GROUP_DIVERGE(0, 1))) ^ 0x22L) && p_28), 14)), p_28)) ^ p_28) <= 0x0643C6475EDA492CL) > p_1474->g_15) ^ l_877.sc)))), 5)) | p_28) ^ p_28) & l_1130.s1), l_834[1].f0))) , p_28) || 0xB304337DL) , 0x5A2A9E8BL);
        (*p_1474->g_405) = ((((safe_add_func_int32_t_s_s((*p_1474->g_405), (safe_mod_func_int16_t_s_s(p_28, ((((&l_776 == l_815) ^ (-7L)) > (safe_lshift_func_int16_t_s_u((0L == ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(l_1139.xxyy))))).wzywzwywwwwwzzyx)), ((VECTOR(int32_t, 2))(0x7871AC53L, 8L)).yyyxyxxxxxxxyxyx, ((VECTOR(int32_t, 8))((l_929 = ((safe_sub_func_int16_t_s_s(0x3465L, l_1127.y)) ^ l_1142.s1)), 0x3E07C6EEL, 0x7CD45A69L, ((VECTOR(int32_t, 2))(2L)), ((VECTOR(int32_t, 2))(0x7DFAB20DL)), (-2L))).s0064021404772762))).s8), 14))) & l_864.s9))))) >= 6L) | p_1474->g_196[2]) && p_28);
    }
    l_743 |= (((*l_1156) = (((safe_mod_func_int8_t_s_s((-2L), (safe_sub_func_uint16_t_u_u(((p_1474->g_676 != p_28) || ((VECTOR(int16_t, 8))(p_1474->g_1147.s7e1b2289)).s0), ((safe_mul_func_uint8_t_u_u((((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 16))(abs(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_1150.s7721065714772222)).sfe)).yxyxyyxxyyxyyxxy))).sfa, ((VECTOR(uint64_t, 16))(p_1474->g_1151.yxxxyyxxyxxyyxxy)).sf1))).yxxyxyxxxxxxyxyy)).s2 , p_1474->g_1055.y) >= FAKE_DIVERGE(p_1474->group_1_offset, get_group_id(1), 10)) != (*p_1474->g_305)), ((safe_mod_func_int64_t_s_s((&l_834[1] == &l_834[0]), (l_1139.y |= (p_28 < ((safe_rshift_func_int16_t_s_s((&l_743 != (void*)0), p_1474->g_88[0])) || l_1104))))) && l_1111))) != 0L))))) < 1UL) <= l_765.s4)) || 0x136EL);
    (*p_1474->g_1191) = ((p_28 > ((((VECTOR(uint16_t, 2))(0UL, 5UL)).lo ^ (safe_mod_func_uint64_t_u_u((((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 16))(((safe_div_func_uint8_t_u_u(p_28, (safe_mod_func_uint32_t_u_u((((l_1139.x = ((*l_1173) = (safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(l_1169.zwyz)).x, 2)) > (((*l_1103) = (*l_1103)) == (void*)0)), ((*p_1474->g_305)++))))) , ((safe_mul_func_int16_t_s_s((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_1182.yxxy)).odd)), 0x6AL, p_28, ((VECTOR(int8_t, 8))(p_1474->g_1183.zxyywwxx)), (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(p_1474->g_1184.s2c05)).wzwwxzzw, ((VECTOR(int8_t, 8))(0L, ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))((l_834[1] , ((((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(1UL, 65532UL)).lo, (l_1139.y &= FAKE_DIVERGE(p_1474->local_1_offset, get_local_id(1), 10)))) , ((((*l_1187) = (l_740[0] |= (l_1139.y = l_1182.y))) || 0UL) ^ (safe_lshift_func_uint16_t_u_s(0xE6FEL, l_1150.s5)))) && p_28) | l_1182.y)), (-1L), 0x7EL, p_28, l_1190, p_1474->g_582.s6, (-1L), 0x5DL)))).lo)), (int8_t)p_28))), 0x21L, 1L, 0x0AL)), ((VECTOR(int8_t, 8))(0x0BL))))).lo)).zzywwyyzwwywzxxw)).sb | 1L), 0x3CL, (-1L), (-1L))).s8, 1)), l_1111)), ((VECTOR(int8_t, 4))(0L)), 1L, ((VECTOR(int8_t, 4))((-1L))), 0L, 1L, 1L, (-6L), (-2L), 0x3CL)).s7a07)).y , l_749.y), 0x179BL)) >= 0UL)) == p_1474->g_1147.s5), p_28)))) != l_1130.sc), ((VECTOR(int64_t, 2))(0x394047F4AA016273L)), 0x07ABDB10223AC497L, p_28, p_1474->g_481.s6, ((VECTOR(int64_t, 2))(0x58844056F500D1C5L)), (-4L), 0x7BA0319F6FD60419L, ((VECTOR(int64_t, 4))((-1L))), (-10L), (-1L))).s1, p_28)) >= 0UL) <= (-7L)), l_1127.y))) && p_1474->g_724.s5)) | p_28);
    return l_1156;
}


/* ------------------------------------------ */
/* 
 * reads : p_1474->g_5 p_1474->g_36 p_1474->g_2 p_1474->g_65 p_1474->g_60 p_1474->g_15 p_1474->l_comm_values p_1474->g_106 p_1474->g_117 p_1474->g_123 p_1474->g_136 p_1474->g_107 p_1474->g_224 p_1474->g_225 p_1474->g_220 p_1474->g_218 p_1474->g_228 p_1474->g_229 p_1474->g_252 p_1474->g_270 p_1474->g_196 p_1474->g_66 p_1474->g_304 p_1474->g_336 p_1474->g_344 p_1474->g_348 p_1474->g_218.f0 p_1474->g_359 p_1474->g_368 p_1474->g_384 p_1474->g_176 p_1474->g_385 p_1474->g_386 p_1474->g_396 p_1474->g_397 p_1474->g_398 p_1474->g_405 p_1474->g_414 p_1474->g_435 p_1474->g_305 p_1474->g_481 p_1474->g_504 p_1474->g_505 p_1474->g_535 p_1474->g_557 p_1474->g_585 p_1474->g_559 p_1474->g_480.f0 p_1474->g_689 p_1474->g_697 p_1474->g_703 p_1474->g_93 p_1474->g_587 p_1474->g_411
 * writes: p_1474->g_60 p_1474->g_15 p_1474->g_88 p_1474->g_90 p_1474->g_93 p_1474->g_117 p_1474->g_123 p_1474->g_196 p_1474->g_176 p_1474->g_220 p_1474->g_66 p_1474->g_270 p_1474->g_218.f0 p_1474->g_136 p_1474->g_411 p_1474->g_368 p_1474->g_218 p_1474->g_479 p_1474->g_505 p_1474->g_535 p_1474->g_544 p_1474->g_303 p_1474->g_comm_values p_1474->g_669 p_1474->g_587 p_1474->g_676
 */
int8_t * func_30(int8_t  p_31, struct S2 * p_1474)
{ /* block id: 20 */
    int64_t l_51 = (-1L);
    union U0 l_58 = {0x9D3FD5B128C85C7EL};
    uint64_t *l_59 = &p_1474->g_60;
    int32_t ***l_668[7][8] = {{&p_1474->g_65,&p_1474->g_65,(void*)0,&p_1474->g_65,&p_1474->g_65,&p_1474->g_65,&p_1474->g_65,(void*)0},{&p_1474->g_65,&p_1474->g_65,(void*)0,&p_1474->g_65,&p_1474->g_65,&p_1474->g_65,&p_1474->g_65,(void*)0},{&p_1474->g_65,&p_1474->g_65,(void*)0,&p_1474->g_65,&p_1474->g_65,&p_1474->g_65,&p_1474->g_65,(void*)0},{&p_1474->g_65,&p_1474->g_65,(void*)0,&p_1474->g_65,&p_1474->g_65,&p_1474->g_65,&p_1474->g_65,(void*)0},{&p_1474->g_65,&p_1474->g_65,(void*)0,&p_1474->g_65,&p_1474->g_65,&p_1474->g_65,&p_1474->g_65,(void*)0},{&p_1474->g_65,&p_1474->g_65,(void*)0,&p_1474->g_65,&p_1474->g_65,&p_1474->g_65,&p_1474->g_65,(void*)0},{&p_1474->g_65,&p_1474->g_65,(void*)0,&p_1474->g_65,&p_1474->g_65,&p_1474->g_65,&p_1474->g_65,(void*)0}};
    int8_t *l_670 = (void*)0;
    uint32_t *l_674 = &p_1474->g_587;
    int32_t *l_675 = &p_1474->g_676;
    union U0 *l_677 = &l_58;
    int i, j;
    if (((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(((p_1474->g_5[0][0][0] <= (safe_lshift_func_int16_t_s_s(0x3404L, 7))) , ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(abs(((VECTOR(int64_t, 2))(0x7FEA1E1734826AAFL, 0x589C1C50D5D742CCL)).yxyyxxyyyxyyxxxy))))).s16)).yxxyyxxyxxxyyxyy, ((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 8))(p_1474->g_36.s9ce376a9)), ((VECTOR(uint64_t, 4))(func_37(((*l_677) = (((*l_675) = ((((safe_lshift_func_int16_t_s_u((1UL | 0UL), 7)) & (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x39L, 247UL)).yxxyyyyyyyxxyxxx)).sf | (((*l_674) = (func_43(((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))((((l_51 ^ ((p_1474->g_669 = func_52(p_31, (l_58 , (((VECTOR(uint32_t, 4))(((p_1474->g_5[0][1][0] , ((*l_59) = p_1474->g_5[0][1][0])) || l_58.f0), ((VECTOR(uint32_t, 2))(0UL)), 1UL)).x >= 0UL)), p_1474->g_2, p_31, p_1474->g_5[0][0][0], p_1474)) == (void*)0)) ^ p_1474->g_585.x) ^ p_1474->g_559.s0), ((VECTOR(uint8_t, 2))(0x9CL)), 246UL)).z, p_1474->g_559.s3)) != 0UL), p_1474->g_480[0].f0, p_31, l_670, p_31, p_1474) > 65535UL)) == 1L))) , &p_1474->g_5[0][1][0]) == &p_1474->g_5[0][0][0])) , l_58)), p_1474), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 0xE95978A060F32761L)).xyxxxxwy, ((VECTOR(uint64_t, 8))(18446744073709551615UL))))).s1017040065343761))).even)).s0 , p_31) >= p_1474->g_585.y)), ((VECTOR(int32_t, 2))(0x78D9E338L)), (-1L), 0x6FC02657L, 0L, 0x7848711FL, 0x27A6D145L, 0x5EF89486L, p_31, p_31, (-3L), 0x3C8E2BFEL, ((VECTOR(int32_t, 2))(0x2B314056L)), 0x55A122A9L)), ((VECTOR(int32_t, 16))(2L))))).s63, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(1L))))).xxyx, ((VECTOR(int32_t, 4))(1L))))).y)
    { /* block id: 290 */
        for (p_1474->g_587 = 4; (p_1474->g_587 < 38); p_1474->g_587++)
        { /* block id: 293 */
            for (p_1474->g_411 = (-19); (p_1474->g_411 <= 51); ++p_1474->g_411)
            { /* block id: 296 */
                int32_t *l_720 = (void*)0;
                (*p_1474->g_65) = l_720;
            }
        }
    }
    else
    { /* block id: 300 */
        int8_t *l_721 = (void*)0;
        return l_721;
    }
    return &p_1474->g_196[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1474->g_218.f0 p_1474->g_689 p_1474->g_697 p_1474->g_703 p_1474->g_93 p_1474->g_65 p_1474->g_397 p_1474->g_398
 * writes: p_1474->g_218.f0 p_1474->g_66
 */
uint64_t  func_37(union U0  p_38, struct S2 * p_1474)
{ /* block id: 282 */
    VECTOR(uint8_t, 2) l_682 = (VECTOR(uint8_t, 2))(5UL, 0xC1L);
    int32_t *l_683 = &p_1474->g_218[5][0][1].f0;
    VECTOR(int64_t, 4) l_684 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x12B87E1F337D4BEFL), 0x12B87E1F337D4BEFL);
    VECTOR(int32_t, 16) l_690 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x6A7C681FL), 0x6A7C681FL), 0x6A7C681FL, (-5L), 0x6A7C681FL, (VECTOR(int32_t, 2))((-5L), 0x6A7C681FL), (VECTOR(int32_t, 2))((-5L), 0x6A7C681FL), (-5L), 0x6A7C681FL, (-5L), 0x6A7C681FL);
    int8_t l_695 = 0L;
    int32_t l_696 = (-1L);
    VECTOR(uint8_t, 16) l_702 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x23L), 0x23L), 0x23L, 255UL, 0x23L, (VECTOR(uint8_t, 2))(255UL, 0x23L), (VECTOR(uint8_t, 2))(255UL, 0x23L), 255UL, 0x23L, 255UL, 0x23L);
    int64_t *l_708 = (void*)0;
    int64_t *l_709 = (void*)0;
    int64_t *l_710[2];
    uint8_t l_711 = 0x52L;
    VECTOR(int32_t, 4) l_713 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x29C45C3EL), 0x29C45C3EL);
    VECTOR(int32_t, 2) l_714 = (VECTOR(int32_t, 2))(1L, 0x19D2A81AL);
    VECTOR(int32_t, 2) l_715 = (VECTOR(int32_t, 2))(0x507D6216L, 0L);
    int i;
    for (i = 0; i < 2; i++)
        l_710[i] = (void*)0;
    l_713.w = (safe_mod_func_int64_t_s_s((l_711 = ((VECTOR(int64_t, 16))((((*l_683) = (safe_div_func_uint8_t_u_u(FAKE_DIVERGE(p_1474->group_1_offset, get_group_id(1), 10), ((VECTOR(uint8_t, 16))(l_682.yxyyyxyyxyxyxxyx)).s8))) && (*l_683)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(0x7F58B41B04EB1875L, ((VECTOR(int64_t, 2))(l_684.xz)), (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(p_1474->g_689.wwxyzxwz)).s1, 4)), 7)), 0x0E224F236F3F590AL, 0x6DD1119B878891B4L, ((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 16))(0L, 0x6AD109B7L, 0x22129239L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x28967BA1L, 0x49A63105L)).xyyy)), 6L, 0x0632D01CL, 0x343F067AL, (-6L))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_690.s05b168bd265fb5d6)).s4e)), ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(l_695, l_696)), 3)) < 3UL), 0x0C2F0C94L, 0x35259F5FL)).s18, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_1474->g_697.yxyzyzxwxzzxwwwx)).sdf)).yxyxxyyxxxxyxxyx)))))).s44))).xyyx, ((VECTOR(int64_t, 4))((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_702.sfda6b45f)).s5, (0x19C8C8EE3D725B87L || (*l_683)))), (p_38.f0 && ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(p_1474->g_703.wzxwywzyxyyyyyyy)).hi)).even)), ((VECTOR(int8_t, 4))(((safe_add_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((((p_1474->g_697.z ^ (p_38.f0 , 5UL)) && FAKE_DIVERGE(p_1474->local_0_offset, get_local_id(0), 10)) , 247UL), (*l_683))), GROUP_DIVERGE(2, 1))) && 1L), 0x55L, 1L, 0x7CL)))).s55, ((VECTOR(int8_t, 2))(4L))))).yxyxyxxx)).s27)), (-1L), 0L)), ((VECTOR(int8_t, 2))(0x50L)), 0x26L, 0x64L)).s1516576776265046, ((VECTOR(int8_t, 16))(0x7BL))))).sc6e1, ((VECTOR(int8_t, 4))((-7L)))))).z))), (-1L), 0x472C788FAC94CF33L, 0L))))), (-5L), ((VECTOR(int64_t, 4))(0x0A1E74BCA0E2A103L)), 5L)).lo)), 0x00B171A746959230L, ((VECTOR(int64_t, 2))(0x33B7B7E4B958D1F8L)), ((VECTOR(int64_t, 2))(0x456F28CACAF64DD7L)), 9L, 5L)).s3), p_1474->g_93[1][0][0]));
    atomic_or(&p_1474->g_atomic_reduction[get_linear_group_id()], ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_714.xyxy)).xzwxzyyzyyywwxwx)).sd0, ((VECTOR(int32_t, 16))(l_715.yyxxxyxxyxyyyyxx)).s32))).lo);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1474->v_collective += p_1474->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    (*l_683) = 0x5D8B18D2L;
    (*p_1474->g_65) = l_683;
    return (*p_1474->g_397);
}


/* ------------------------------------------ */
/* 
 * reads : p_1474->g_305 p_1474->g_176
 * writes:
 */
uint16_t  func_43(int64_t  p_44, uint64_t  p_45, int64_t  p_46, int8_t * p_47, uint16_t  p_48, struct S2 * p_1474)
{ /* block id: 276 */
    int32_t *l_671 = (void*)0;
    int32_t *l_672 = (void*)0;
    int32_t l_673 = 0x042F25D8L;
    l_673 ^= 0x6E4F0466L;
    return (*p_1474->g_305);
}


/* ------------------------------------------ */
/* 
 * reads : p_1474->g_65 p_1474->g_60 p_1474->g_15 p_1474->g_5 p_1474->l_comm_values p_1474->g_106 p_1474->g_117 p_1474->g_123 p_1474->g_136 p_1474->g_107 p_1474->g_36 p_1474->g_224 p_1474->g_225 p_1474->g_220 p_1474->g_218 p_1474->g_228 p_1474->g_229 p_1474->g_2 p_1474->g_252 p_1474->g_270 p_1474->g_196 p_1474->g_66 p_1474->g_304 p_1474->g_336 p_1474->g_344 p_1474->g_348 p_1474->g_218.f0 p_1474->g_359 p_1474->g_368 p_1474->g_384 p_1474->g_176 p_1474->g_385 p_1474->g_386 p_1474->g_396 p_1474->g_397 p_1474->g_398 p_1474->g_405 p_1474->g_414 p_1474->g_435 p_1474->g_305 p_1474->g_481 p_1474->g_504 p_1474->g_505 p_1474->g_535 p_1474->g_557
 * writes: p_1474->g_60 p_1474->g_15 p_1474->g_88 p_1474->g_90 p_1474->g_93 p_1474->g_117 p_1474->g_123 p_1474->g_196 p_1474->g_176 p_1474->g_220 p_1474->g_66 p_1474->g_270 p_1474->g_218.f0 p_1474->g_136 p_1474->g_411 p_1474->g_368 p_1474->g_218 p_1474->g_479 p_1474->g_505 p_1474->g_535 p_1474->g_544 p_1474->g_303 p_1474->g_comm_values
 */
int32_t ** func_52(uint32_t  p_53, uint64_t  p_54, uint32_t  p_55, uint8_t  p_56, uint32_t  p_57, struct S2 * p_1474)
{ /* block id: 22 */
    int32_t *l_64 = &p_1474->g_2;
    int32_t **l_63[5][6][4] = {{{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64}},{{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64}},{{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64}},{{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64}},{{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64}}};
    uint64_t l_540[3][5] = {{0xE0256941A0F0B88DL,0xE0256941A0F0B88DL,0xE0256941A0F0B88DL,0xE0256941A0F0B88DL,0xE0256941A0F0B88DL},{0xE0256941A0F0B88DL,0xE0256941A0F0B88DL,0xE0256941A0F0B88DL,0xE0256941A0F0B88DL,0xE0256941A0F0B88DL},{0xE0256941A0F0B88DL,0xE0256941A0F0B88DL,0xE0256941A0F0B88DL,0xE0256941A0F0B88DL,0xE0256941A0F0B88DL}};
    int32_t *l_543 = (void*)0;
    VECTOR(int32_t, 8) l_553 = (VECTOR(int32_t, 8))(0x1ACC3EC1L, (VECTOR(int32_t, 4))(0x1ACC3EC1L, (VECTOR(int32_t, 2))(0x1ACC3EC1L, (-3L)), (-3L)), (-3L), 0x1ACC3EC1L, (-3L));
    uint64_t ***l_563 = &p_1474->g_505;
    uint64_t ***l_564 = (void*)0;
    uint8_t *l_571 = (void*)0;
    union U0 l_617[7] = {{18446744073709551615UL},{0UL},{18446744073709551615UL},{18446744073709551615UL},{0UL},{18446744073709551615UL},{18446744073709551615UL}};
    union U1 **l_618[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t l_622 = 18446744073709551609UL;
    uint16_t **l_628 = &p_1474->g_305;
    uint8_t l_659 = 0xB7L;
    uint32_t l_664 = 0UL;
    int32_t **l_667 = (void*)0;
    int i, j, k;
    for (p_54 = 22; (p_54 > 2); p_54 = safe_sub_func_int64_t_s_s(p_54, 6))
    { /* block id: 25 */
        return p_1474->g_65;
    }
    for (p_1474->g_60 = 0; (p_1474->g_60 >= 8); p_1474->g_60 = safe_add_func_int16_t_s_s(p_1474->g_60, 1))
    { /* block id: 30 */
        int64_t l_71 = 0x057B2633072FE88DL;
        int32_t l_72 = (-6L);
        int32_t l_73 = 0x530E041BL;
        int32_t l_74 = 0x1A09BBF7L;
        uint16_t l_79 = 1UL;
        int32_t **l_84 = &p_1474->g_66[0][0][0];
        int8_t *l_509 = (void*)0;
        uint8_t l_534 = 0x75L;
        int32_t l_537 = 0x12E56710L;
        int32_t l_538 = (-2L);
        int32_t l_539[1][9] = {{0x4D2C4C78L,0x4D2C4C78L,0x4D2C4C78L,0x4D2C4C78L,0x4D2C4C78L,0x4D2C4C78L,0x4D2C4C78L,0x4D2C4C78L,0x4D2C4C78L}};
        int i, j;
        for (p_56 = 0; (p_56 == 17); p_56 = safe_add_func_int16_t_s_s(p_56, 8))
        { /* block id: 33 */
            int32_t l_75 = 0x5052BDF3L;
            int32_t l_76 = 0x2BDBE1E6L;
            int32_t l_77 = 0x29F1C2FFL;
            int32_t l_78 = 0x12DD28D5L;
            --l_79;
            for (p_1474->g_15 = 24; (p_1474->g_15 <= 42); p_1474->g_15 = safe_add_func_uint64_t_u_u(p_1474->g_15, 5))
            { /* block id: 37 */
                uint8_t *l_87 = &p_1474->g_88[0];
                uint8_t *l_89 = &p_1474->g_90;
                uint8_t *l_91 = (void*)0;
                uint8_t *l_92 = &p_1474->g_93[1][0][0];
                int16_t l_533 = 0L;
                int32_t **l_536 = (void*)0;
                p_1474->g_535 &= (((((l_84 == &p_1474->g_66[0][0][0]) == (((safe_mul_func_uint8_t_u_u((((((*l_92) = ((*l_89) = ((*l_87) = p_1474->g_5[0][1][0]))) & ((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x20B3FD2CL, 1L)).yxyyxyyxyxxxyyyy)).sdd)).lo | p_57) , ((VECTOR(int8_t, 8))((safe_lshift_func_uint8_t_u_s((p_1474->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1474->tid, 148))] <= (safe_add_func_int8_t_s_s(func_98(func_103(p_1474->g_106, &p_1474->g_66[0][2][0], p_1474), l_509, p_1474->g_384.s1, p_1474->g_106, p_1474), l_533))), 4)), 1L, (-2L), ((VECTOR(int8_t, 4))(0x6BL)), 0x4EL)).s5)) & l_534) , l_76), l_78)) > p_57) && p_57)) ^ p_56) != p_56) , l_533);
                return l_536;
            }
            --l_540[0][3];
        }
        (*p_1474->g_348) ^= (255UL > ((p_1474->g_123 < p_1474->g_229.y) == ((*l_64) != ((void*)0 == (*p_1474->g_65)))));
    }
    p_1474->g_303 = (p_1474->g_544 = ((*p_1474->g_65) = l_543));
    for (p_1474->g_176 = 0; (p_1474->g_176 >= 26); p_1474->g_176++)
    { /* block id: 197 */
        VECTOR(int32_t, 16) l_552 = (VECTOR(int32_t, 16))(0x2FF257D1L, (VECTOR(int32_t, 4))(0x2FF257D1L, (VECTOR(int32_t, 2))(0x2FF257D1L, (-8L)), (-8L)), (-8L), 0x2FF257D1L, (-8L), (VECTOR(int32_t, 2))(0x2FF257D1L, (-8L)), (VECTOR(int32_t, 2))(0x2FF257D1L, (-8L)), 0x2FF257D1L, (-8L), 0x2FF257D1L, (-8L));
        VECTOR(int32_t, 4) l_555 = (VECTOR(int32_t, 4))(0x264CAA65L, (VECTOR(int32_t, 2))(0x264CAA65L, 0x54F5A689L), 0x54F5A689L);
        VECTOR(int32_t, 16) l_558 = (VECTOR(int32_t, 16))(0x6D025548L, (VECTOR(int32_t, 4))(0x6D025548L, (VECTOR(int32_t, 2))(0x6D025548L, (-7L)), (-7L)), (-7L), 0x6D025548L, (-7L), (VECTOR(int32_t, 2))(0x6D025548L, (-7L)), (VECTOR(int32_t, 2))(0x6D025548L, (-7L)), 0x6D025548L, (-7L), 0x6D025548L, (-7L));
        VECTOR(uint64_t, 8) l_566 = (VECTOR(uint64_t, 8))(7UL, (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 0x3039E4AF6A01C7E4L), 0x3039E4AF6A01C7E4L), 0x3039E4AF6A01C7E4L, 7UL, 0x3039E4AF6A01C7E4L);
        union U1 l_591 = {0L};
        uint16_t **l_627 = &p_1474->g_305;
        VECTOR(uint8_t, 16) l_648 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xEAL), 0xEAL), 0xEAL, 0UL, 0xEAL, (VECTOR(uint8_t, 2))(0UL, 0xEAL), (VECTOR(uint8_t, 2))(0UL, 0xEAL), 0UL, 0xEAL, 0UL, 0xEAL);
        int16_t l_662[7] = {0x1AFEL,0x1AFEL,0x1AFEL,0x1AFEL,0x1AFEL,0x1AFEL,0x1AFEL};
        int8_t l_663 = 0L;
        int i;
        for (p_1474->g_90 = 13; (p_1474->g_90 <= 46); ++p_1474->g_90)
        { /* block id: 200 */
            VECTOR(int32_t, 8) l_551 = (VECTOR(int32_t, 8))(0x03F8B511L, (VECTOR(int32_t, 4))(0x03F8B511L, (VECTOR(int32_t, 2))(0x03F8B511L, (-3L)), (-3L)), (-3L), 0x03F8B511L, (-3L));
            VECTOR(int32_t, 2) l_554 = (VECTOR(int32_t, 2))(0x0C3A2214L, (-1L));
            VECTOR(int32_t, 4) l_556 = (VECTOR(int32_t, 4))(0x3D128B2BL, (VECTOR(int32_t, 2))(0x3D128B2BL, 0x6D1A1701L), 0x6D1A1701L);
            VECTOR(int32_t, 4) l_560 = (VECTOR(int32_t, 4))(0x0907EDFDL, (VECTOR(int32_t, 2))(0x0907EDFDL, (-7L)), (-7L));
            uint64_t *l_567 = &p_1474->g_60;
            int8_t l_568[9];
            uint8_t *l_570 = &p_1474->g_88[3];
            uint8_t **l_569 = &l_570;
            uint64_t ***l_580 = (void*)0;
            uint8_t l_626 = 0UL;
            int i;
            for (i = 0; i < 9; i++)
                l_568[i] = (-1L);
            if ((((safe_sub_func_uint16_t_u_u((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(l_551.s7417551611127170)).lo, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(l_552.s33eeba1c)), ((VECTOR(int32_t, 4))(2L, p_55, 0x1786E709L, 0L)).ywzyzyxy))).hi))), 0x1FB503FFL, ((VECTOR(int32_t, 2))(l_553.s46)), (l_552.s5 = 0x4784389FL), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_554.yx)), 9L, 0x13C76008L)), 0x6F999191L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_555.ywzzwzyzywwzwxyz)))).s349c)).odd)), 0x4C60AB53L)).lo, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x4621BA2AL, 0x4F7FDEF0L)).xxxyxxyyxyyxyyyy)))).even)).odd, ((VECTOR(int32_t, 8))(l_556.yxxywzxx)).hi))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1474->g_557.s0771)), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(l_558.s86f77452)).s05, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((-6L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(p_1474->g_559.s6673472554351463)))).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(l_560.xwwwzzzw)), ((VECTOR(int32_t, 4))((-8L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_1474->g_561.s7052fbb9)).s43)), 4L)).yzzwxzzz))).s5143050334217647)).odd))))).s46)), 6L)).zxwwywxx)).s27))), 0L, 0x7FBF59E1L)).lo))))).hi, ((VECTOR(int32_t, 2))(p_1474->g_562.sa8))))), 0x7137C8E9L, (((*l_569) = ((((l_563 == (p_1474->g_565 = (((-2L) >= (*p_1474->g_305)) , (l_564 = &p_1474->g_505)))) , (!((*l_567) = ((VECTOR(uint64_t, 2))(l_566.s74)).hi))) && ((((((p_1474->g_411 == ((l_555.z >= l_556.z) || l_555.y)) < l_556.w) >= p_55) != l_568[0]) > 1UL) >= (*p_1474->g_405))) , &p_1474->g_93[1][0][0])) == l_571), ((VECTOR(int32_t, 4))(0x59BDD25CL)))).sca65)).yxwxzwxwxwyxywxx)).s8e)), (-1L), (-1L), 0x511FE4EDL, ((VECTOR(int32_t, 4))((-1L))), l_552.s2, ((VECTOR(int32_t, 2))(0x40234D11L)), 2L, 0x65786F48L, 0x76BD69A6L)).s7050, ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 4))(0L))))).zzwwxxzz))), ((VECTOR(int32_t, 8))(0L))))))).s5361406317235155, ((VECTOR(int32_t, 16))(0x00FB8E00L)), ((VECTOR(int32_t, 16))(0x6BB5A4CAL))))).hi, ((VECTOR(int32_t, 8))(0x4CF5C13EL))))).odd)).z != l_566.s0), 8UL)) ^ 0xD65327B1DD2FAC4AL) , l_558.s2))
            { /* block id: 206 */
                uint8_t l_589[7] = {0x4CL,0xFDL,0x4CL,0x4CL,0xFDL,0x4CL,0x4CL};
                VECTOR(int16_t, 16) l_590 = (VECTOR(int16_t, 16))(0x7801L, (VECTOR(int16_t, 4))(0x7801L, (VECTOR(int16_t, 2))(0x7801L, (-1L)), (-1L)), (-1L), 0x7801L, (-1L), (VECTOR(int16_t, 2))(0x7801L, (-1L)), (VECTOR(int16_t, 2))(0x7801L, (-1L)), 0x7801L, (-1L), 0x7801L, (-1L));
                VECTOR(int64_t, 2) l_621 = (VECTOR(int64_t, 2))(0x5990C76380750435L, 0x5482C445F3BBA168L);
                int i;
                for (p_53 = 3; (p_53 == 6); p_53++)
                { /* block id: 209 */
                    int8_t l_581[3][2][6] = {{{0x74L,0x74L,0L,7L,1L,0x30L},{0x74L,0x74L,0L,7L,1L,0x30L}},{{0x74L,0x74L,0L,7L,1L,0x30L},{0x74L,0x74L,0L,7L,1L,0x30L}},{{0x74L,0x74L,0L,7L,1L,0x30L},{0x74L,0x74L,0L,7L,1L,0x30L}}};
                    int32_t l_588 = (-1L);
                    uint64_t *l_604 = (void*)0;
                    int64_t *l_623 = (void*)0;
                    int64_t *l_624 = (void*)0;
                    int64_t *l_625 = &p_1474->g_218[5][0][1].f3;
                    int i, j, k;
                    (1 + 1);
                }
            }
            else
            { /* block id: 240 */
                VECTOR(int32_t, 2) l_638 = (VECTOR(int32_t, 2))(0L, (-1L));
                uint16_t l_652 = 0xE920L;
                int32_t l_653 = (-1L);
                int i;
                for (p_1474->g_136 = (-23); (p_1474->g_136 < 3); p_1474->g_136 = safe_add_func_uint16_t_u_u(p_1474->g_136, 7))
                { /* block id: 243 */
                    VECTOR(int32_t, 16) l_635 = (VECTOR(int32_t, 16))(0x123E900FL, (VECTOR(int32_t, 4))(0x123E900FL, (VECTOR(int32_t, 2))(0x123E900FL, 0x430FEFEAL), 0x430FEFEAL), 0x430FEFEAL, 0x123E900FL, 0x430FEFEAL, (VECTOR(int32_t, 2))(0x123E900FL, 0x430FEFEAL), (VECTOR(int32_t, 2))(0x123E900FL, 0x430FEFEAL), 0x123E900FL, 0x430FEFEAL, 0x123E900FL, 0x430FEFEAL);
                    VECTOR(int32_t, 8) l_636 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x027F29C5L), 0x027F29C5L), 0x027F29C5L, 1L, 0x027F29C5L);
                    int64_t *l_651 = (void*)0;
                    int i;
                    for (p_56 = (-19); (p_56 == 49); p_56++)
                    { /* block id: 246 */
                        uint8_t l_637 = 0x74L;
                        union U1 **l_640 = (void*)0;
                        int32_t l_641 = 9L;
                        l_641 = ((*p_1474->g_504) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 0L)), (-6L), 0x1BED7005L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(l_635.sd66d3353d2bffc8c)).s4e31, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_636.s5520)), (((*l_570) = l_552.s9) , (-1L)), ((VECTOR(int32_t, 2))(1L, 3L)), 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x01810BC3L, (l_552.sd = l_637), 0x360F16BAL, ((VECTOR(int32_t, 4))(l_638.yyxx)), ((VECTOR(int32_t, 2))(0x77730563L, 0x159DFD9EL)), (GROUP_DIVERGE(0, 1) ^ ((VECTOR(uint8_t, 4))((((VECTOR(int8_t, 2))(p_1474->g_639.s75)).hi <= ((((p_55 | (*p_1474->g_397)) && p_53) , l_640) != &p_1474->g_220)), 3UL, 1UL, 0UL)).y), 0x4C87753AL, 1L, ((VECTOR(int32_t, 4))(0x470318C3L)))).sdc)), p_54, 0x3218245AL, ((VECTOR(int32_t, 2))(0x0899B5CBL)), (-4L), 1L)).s6111))))))).even, ((VECTOR(int32_t, 4))(0x5BD84A99L)), ((VECTOR(int32_t, 4))((-8L)))))), ((VECTOR(int32_t, 4))(3L))))).odd)), 0x70C19864L, 0x74FADF54L, l_637, ((VECTOR(int32_t, 2))(0x43F8D6F4L)), 0x4F8D88BCL)).s0);
                        if ((*p_1474->g_504))
                            continue;
                        (*p_1474->g_65) = (void*)0;
                        l_555.y = 0x1CFDDD6EL;
                    }
                    l_653 |= (safe_mul_func_uint8_t_u_u(0UL, ((safe_mod_func_int64_t_s_s((l_636.s1 |= ((p_54 > (p_55 == ((VECTOR(uint8_t, 8))(l_648.s6a72248b)).s7)) , ((safe_rshift_func_int8_t_s_u(4L, 7)) == (p_1474->g_557.s1 | ((0x5F8DL | ((l_638.y | (((p_1474->g_comm_values[p_1474->tid] = 0x6FE9DEBD05CAEF96L) && (l_652 == p_57)) < 1L)) , l_558.s1)) >= l_560.x))))), 0xE4089221CDC0C9F2L)) , l_551.s2)));
                    for (p_56 = (-12); (p_56 != 22); p_56 = safe_add_func_int64_t_s_s(p_56, 6))
                    { /* block id: 260 */
                        return &p_1474->g_66[0][0][0];
                    }
                }
                for (l_626 = (-14); (l_626 < 58); l_626 = safe_add_func_int8_t_s_s(l_626, 3))
                { /* block id: 266 */
                    uint32_t l_658 = 0x9EFEF74FL;
                    l_658 = p_53;
                }
                l_659--;
            }
        }
        ++l_664;
    }
    return l_667;
}


/* ------------------------------------------ */
/* 
 * reads : p_1474->g_397 p_1474->g_398 p_1474->g_229 p_1474->g_136 p_1474->g_252
 * writes: p_1474->g_196 p_1474->g_136
 */
int8_t  func_98(uint16_t * p_99, int8_t * p_100, int64_t  p_101, int8_t * p_102, struct S2 * p_1474)
{ /* block id: 178 */
    int8_t *l_510 = (void*)0;
    int8_t *l_511 = &p_1474->g_196[1];
    int8_t *l_512 = (void*)0;
    int8_t *l_513 = (void*)0;
    int32_t l_514 = 0L;
    VECTOR(uint8_t, 2) l_515 = (VECTOR(uint8_t, 2))(0UL, 0UL);
    VECTOR(uint64_t, 4) l_520 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x42A78727C6FC39C6L), 0x42A78727C6FC39C6L);
    int8_t *l_523 = (void*)0;
    int8_t *l_524[4][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_525 = 7L;
    uint8_t *l_528 = (void*)0;
    uint8_t *l_529[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_530 = 0x34CD3DF2L;
    int32_t *l_531 = (void*)0;
    int32_t *l_532 = &p_1474->g_136;
    int i, j;
    (*l_532) ^= ((l_514 = ((*l_511) = 0x11L)) <= (((VECTOR(uint8_t, 16))(l_515.xyyxyxxxyxyxyyyx)).s5 > (safe_add_func_uint16_t_u_u((safe_mul_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(l_520.ywxyzwyxxxyzyyxz)).s2, (p_101 == (l_530 |= (((p_101 >= 0x068C3CC518580C63L) | ((((safe_rshift_func_uint16_t_u_u((((((0x10L >= (l_525 = ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 2))(0x72L, 0L)).yxxyxxxxxyxxyxxx))).sc)) , (&l_525 == &p_1474->g_136)) && ((safe_div_func_uint64_t_u_u((*p_1474->g_397), l_520.z)) != p_101)) & p_1474->g_229.x) || l_525), l_515.x)) >= FAKE_DIVERGE(p_1474->local_2_offset, get_local_id(2), 10)) || 0x621CEBDCL) | 0L)) && p_101))))), p_101))));
    return p_1474->g_252.sf;
}


/* ------------------------------------------ */
/* 
 * reads : p_1474->g_117 p_1474->g_123 p_1474->g_106 p_1474->g_136 p_1474->g_107 p_1474->g_5 p_1474->g_36 p_1474->g_65 p_1474->g_224 p_1474->g_225 p_1474->g_220 p_1474->g_218 p_1474->g_228 p_1474->g_229 p_1474->g_2 p_1474->g_252 p_1474->g_270 p_1474->g_196 p_1474->l_comm_values p_1474->g_66 p_1474->g_304 p_1474->g_336 p_1474->g_344 p_1474->g_348 p_1474->g_218.f0 p_1474->g_359 p_1474->g_368 p_1474->g_15 p_1474->g_384 p_1474->g_176 p_1474->g_385 p_1474->g_386 p_1474->g_396 p_1474->g_397 p_1474->g_398 p_1474->g_405 p_1474->g_414 p_1474->g_435 p_1474->g_305 p_1474->g_481 p_1474->g_504 p_1474->g_505
 * writes: p_1474->g_117 p_1474->g_123 p_1474->g_196 p_1474->g_176 p_1474->g_220 p_1474->g_66 p_1474->g_270 p_1474->g_218.f0 p_1474->g_136 p_1474->g_411 p_1474->g_368 p_1474->g_218 p_1474->g_479 p_1474->g_505
 */
uint16_t * func_103(int8_t * p_104, int32_t ** p_105, struct S2 * p_1474)
{ /* block id: 41 */
    int32_t l_111 = 0x0EEEE7CDL;
    uint64_t *l_116 = &p_1474->g_117;
    int8_t *l_120[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_121 = 0x01461015L;
    int32_t *l_122 = &p_1474->g_123;
    int32_t l_124 = 0L;
    VECTOR(int32_t, 2) l_125 = (VECTOR(int32_t, 2))(0x2542557BL, 2L);
    uint64_t ***l_507 = &p_1474->g_505;
    uint16_t *l_508[4] = {&p_1474->g_270,&p_1474->g_270,&p_1474->g_270,&p_1474->g_270};
    int i;
    (*l_507) = func_108((0x25L >= (l_111 , (((safe_add_func_int32_t_s_s((l_111 , l_111), (safe_add_func_int32_t_s_s(((*l_122) = (((l_121 |= (((*l_116)++) , 0x62L)) == l_111) < (l_111 , FAKE_DIVERGE(p_1474->group_0_offset, get_group_id(0), 10)))), l_124)))) , ((VECTOR(int32_t, 16))(l_125.xxxyyyyxxyyxxxyy)).s0) , ((*l_122) , (*l_122))))), p_1474->g_106, p_1474);
    (*l_122) = (*l_122);
    return l_508[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1474->g_117 p_1474->g_123 p_1474->g_136 p_1474->g_107 p_1474->g_5 p_1474->g_36 p_1474->g_65 p_1474->g_224 p_1474->g_225 p_1474->g_220 p_1474->g_218 p_1474->g_228 p_1474->g_229 p_1474->g_2 p_1474->g_252 p_1474->g_270 p_1474->g_196 p_1474->l_comm_values p_1474->g_66 p_1474->g_304 p_1474->g_336 p_1474->g_344 p_1474->g_348 p_1474->g_218.f0 p_1474->g_359 p_1474->g_368 p_1474->g_15 p_1474->g_384 p_1474->g_176 p_1474->g_385 p_1474->g_386 p_1474->g_396 p_1474->g_397 p_1474->g_398 p_1474->g_405 p_1474->g_414 p_1474->g_435 p_1474->g_305 p_1474->g_481 p_1474->g_504 p_1474->g_505
 * writes: p_1474->g_117 p_1474->g_123 p_1474->g_196 p_1474->g_176 p_1474->g_220 p_1474->g_66 p_1474->g_270 p_1474->g_218.f0 p_1474->g_136 p_1474->g_411 p_1474->g_368 p_1474->g_218 p_1474->g_479
 */
uint64_t ** func_108(uint32_t  p_109, int8_t * p_110, struct S2 * p_1474)
{ /* block id: 45 */
    VECTOR(int8_t, 4) l_160 = (VECTOR(int8_t, 4))(0x20L, (VECTOR(int8_t, 2))(0x20L, 1L), 1L);
    int32_t l_167[7] = {0x32B6A97FL,0x32B6A97FL,0x32B6A97FL,0x32B6A97FL,0x32B6A97FL,0x32B6A97FL,0x32B6A97FL};
    uint32_t l_168 = 0xBEA5583DL;
    VECTOR(uint32_t, 8) l_171 = (VECTOR(uint32_t, 8))(6UL, (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 4294967294UL), 4294967294UL), 4294967294UL, 6UL, 4294967294UL);
    VECTOR(uint32_t, 4) l_172 = (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 4294967288UL), 4294967288UL);
    uint16_t *l_175 = &p_1474->g_176;
    uint16_t *l_178 = (void*)0;
    uint16_t **l_177 = &l_178;
    VECTOR(uint64_t, 2) l_179 = (VECTOR(uint64_t, 2))(0x4962E967B358CFB8L, 0x69D13327E3E6D3A6L);
    VECTOR(uint64_t, 2) l_186 = (VECTOR(uint64_t, 2))(0xF792DA7FE7BAF2F3L, 0xAB35A4D2AB853E7CL);
    uint64_t *l_189 = (void*)0;
    uint64_t *l_190 = (void*)0;
    uint64_t *l_191 = (void*)0;
    uint64_t *l_192 = (void*)0;
    uint64_t *l_193 = (void*)0;
    uint64_t *l_194 = (void*)0;
    uint64_t *l_195[10][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
    VECTOR(uint8_t, 16) l_203 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x21L), 0x21L), 0x21L, 1UL, 0x21L, (VECTOR(uint8_t, 2))(1UL, 0x21L), (VECTOR(uint8_t, 2))(1UL, 0x21L), 1UL, 0x21L, 1UL, 0x21L);
    uint64_t **l_206 = &l_189;
    uint32_t l_216 = 4294967295UL;
    union U1 *l_221 = (void*)0;
    int32_t l_268 = 3L;
    int16_t l_315 = 2L;
    uint8_t l_316 = 0UL;
    VECTOR(int32_t, 16) l_352 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
    VECTOR(uint64_t, 2) l_369 = (VECTOR(uint64_t, 2))(0x04E521C8E4D94C13L, 0x1AAE140D48A4CEA6L);
    union U0 l_376 = {18446744073709551607UL};
    uint64_t **l_436 = &l_193;
    uint32_t l_441 = 0xAC1EDD4DL;
    int32_t l_451 = (-7L);
    uint64_t l_452 = 0x158973D80C34BC43L;
    uint32_t l_467 = 0xDF41160DL;
    int32_t l_475 = 0x4962D743L;
    union U0 *l_477 = &l_376;
    int32_t l_483[10][9] = {{1L,(-3L),0x53F37E45L,(-3L),1L,1L,(-3L),0x53F37E45L,(-3L)},{1L,(-3L),0x53F37E45L,(-3L),1L,1L,(-3L),0x53F37E45L,(-3L)},{1L,(-3L),0x53F37E45L,(-3L),1L,1L,(-3L),0x53F37E45L,(-3L)},{1L,(-3L),0x53F37E45L,(-3L),1L,1L,(-3L),0x53F37E45L,(-3L)},{1L,(-3L),0x53F37E45L,(-3L),1L,1L,(-3L),0x53F37E45L,(-3L)},{1L,(-3L),0x53F37E45L,(-3L),1L,1L,(-3L),0x53F37E45L,(-3L)},{1L,(-3L),0x53F37E45L,(-3L),1L,1L,(-3L),0x53F37E45L,(-3L)},{1L,(-3L),0x53F37E45L,(-3L),1L,1L,(-3L),0x53F37E45L,(-3L)},{1L,(-3L),0x53F37E45L,(-3L),1L,1L,(-3L),0x53F37E45L,(-3L)},{1L,(-3L),0x53F37E45L,(-3L),1L,1L,(-3L),0x53F37E45L,(-3L)}};
    VECTOR(int32_t, 8) l_496 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L));
    int i, j;
    for (p_1474->g_117 = 0; (p_1474->g_117 == 29); p_1474->g_117 = safe_add_func_int32_t_s_s(p_1474->g_117, 1))
    { /* block id: 48 */
        int32_t *l_164 = &p_1474->g_136;
        int32_t *l_165 = &p_1474->g_123;
        int32_t *l_166[7];
        int i;
        for (i = 0; i < 7; i++)
            l_166[i] = (void*)0;
        for (p_1474->g_123 = (-16); (p_1474->g_123 < (-21)); --p_1474->g_123)
        { /* block id: 51 */
            uint8_t l_130 = 0xECL;
            int32_t l_146 = 0x0C8DF098L;
            uint32_t l_161 = 0UL;
            if (l_130)
                break;
            for (l_130 = (-2); (l_130 != 9); l_130 = safe_add_func_int8_t_s_s(l_130, 9))
            { /* block id: 55 */
                for (p_109 = (-20); (p_109 >= 6); ++p_109)
                { /* block id: 58 */
                    int32_t *l_135 = &p_1474->g_136;
                    int32_t *l_137 = &p_1474->g_136;
                    int32_t *l_138 = (void*)0;
                    int32_t *l_139 = &p_1474->g_136;
                    int32_t *l_140 = (void*)0;
                    int32_t *l_141 = &p_1474->g_136;
                    int32_t *l_142 = &p_1474->g_136;
                    int32_t *l_143 = &p_1474->g_136;
                    int32_t *l_144 = &p_1474->g_136;
                    int32_t *l_145 = &p_1474->g_136;
                    int32_t *l_147 = (void*)0;
                    int32_t *l_148 = &p_1474->g_136;
                    int32_t *l_149 = &p_1474->g_136;
                    int32_t *l_150 = (void*)0;
                    int32_t *l_151 = (void*)0;
                    int32_t *l_152 = &p_1474->g_136;
                    int32_t *l_153 = &p_1474->g_136;
                    int32_t *l_154 = &p_1474->g_136;
                    int32_t *l_155 = &p_1474->g_136;
                    int32_t *l_156 = (void*)0;
                    int32_t *l_157 = &p_1474->g_136;
                    int32_t *l_158 = &p_1474->g_136;
                    int32_t *l_159[7] = {&p_1474->g_5[0][0][0],&p_1474->g_136,&p_1474->g_5[0][0][0],&p_1474->g_5[0][0][0],&p_1474->g_136,&p_1474->g_5[0][0][0],&p_1474->g_5[0][0][0]};
                    int i;
                    ++l_161;
                }
            }
        }
        --l_168;
    }
    if ((((((FAKE_DIVERGE(p_1474->group_0_offset, get_group_id(0), 10) , p_109) && (p_1474->g_196[1] = (((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_171.s1364211016602315)).s69)).yyxxxxyxxyyxxxxx)), ((VECTOR(uint32_t, 8))(l_172.xzzxzzxz)).s0126112137563706))).sc , (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 2))(5UL, 65532UL)).yyyxyxyx, ((VECTOR(uint16_t, 4))((((safe_rshift_func_uint8_t_u_s((l_175 != ((*l_177) = (void*)0)), 4)) | (p_1474->g_136 ^ l_179.x)) && p_1474->g_107.x), 0x60ACL, 65529UL, 1UL)).wzzyzzyx, ((VECTOR(uint16_t, 8))(0xB7C5L, ((VECTOR(uint16_t, 2))(0x3432L, 6UL)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 8))(((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(l_160.z, ((safe_add_func_int32_t_s_s(((p_1474->g_107.x == ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_186.yyyxyyxxyxxyyxyx)).s46)).odd) != (safe_rshift_func_int16_t_s_u(p_109, l_172.z))), p_109)) && 0x8D21F102L))) | p_1474->g_5[0][1][0]), l_171.s2)) , l_168), ((VECTOR(uint16_t, 2))(0xCCD3L)), 1UL, l_171.s3, 65535UL, 1UL, 65533UL)), (uint16_t)l_160.w))), ((VECTOR(uint16_t, 8))(0x9266L))))))).s45)), 0x2BFBL, 65532UL, 0xF50AL))))).s6741226341047074)).s74)).lo <= 0L)))) < l_168) == l_172.y) || p_109))
    { /* block id: 67 */
        uint64_t **l_204 = (void*)0;
        uint64_t ***l_205[8];
        uint16_t **l_207 = &l_175;
        uint16_t ***l_208[3][8][1] = {{{&l_177},{&l_177},{&l_177},{&l_177},{&l_177},{&l_177},{&l_177},{&l_177}},{{&l_177},{&l_177},{&l_177},{&l_177},{&l_177},{&l_177},{&l_177},{&l_177}},{{&l_177},{&l_177},{&l_177},{&l_177},{&l_177},{&l_177},{&l_177},{&l_177}}};
        int32_t l_215 = 0x7E0BE34EL;
        union U1 *l_217 = &p_1474->g_218[5][0][1];
        VECTOR(int64_t, 2) l_246 = (VECTOR(int64_t, 2))(0x13EEB7EE9CA37805L, 0L);
        int32_t l_301 = 0x7738C1A0L;
        VECTOR(int32_t, 2) l_337 = (VECTOR(int32_t, 2))(0x694A3A90L, (-5L));
        uint32_t l_345[8][2] = {{4294967290UL,0x36683586L},{4294967290UL,0x36683586L},{4294967290UL,0x36683586L},{4294967290UL,0x36683586L},{4294967290UL,0x36683586L},{4294967290UL,0x36683586L},{4294967290UL,0x36683586L},{4294967290UL,0x36683586L}};
        VECTOR(uint64_t, 2) l_390 = (VECTOR(uint64_t, 2))(0x00DD89D095E2F600L, 0xA5CE64AEC5BDDA8CL);
        int64_t *l_395 = (void*)0;
        int8_t l_419 = 0x05L;
        VECTOR(int32_t, 16) l_442 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x297BF32AL), 0x297BF32AL), 0x297BF32AL, 8L, 0x297BF32AL, (VECTOR(int32_t, 2))(8L, 0x297BF32AL), (VECTOR(int32_t, 2))(8L, 0x297BF32AL), 8L, 0x297BF32AL, 8L, 0x297BF32AL);
        int16_t l_474 = 0x0774L;
        int32_t *l_482[3];
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_205[i] = &l_204;
        for (i = 0; i < 3; i++)
            l_482[i] = (void*)0;
        if ((0x0F3676A42D7DE4DCL < (((safe_div_func_int8_t_s_s((((**l_207) = (!((VECTOR(uint16_t, 16))((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(l_203.s3af98670366a3fbe)).s8, ((l_206 = l_204) == &l_190))), ((&l_175 == (l_177 = l_207)) < (((safe_rshift_func_int16_t_s_u((((((p_109 , (safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(p_109, l_215)), (l_215 , 0x69L)))) , 0UL) , p_109) != l_216) || (-10L)), 4)) != p_1474->g_123) && l_216)))), 0x603CL, 65533UL, 65535UL, l_215, 0x9CD1L, 0x20BCL, p_109, ((VECTOR(uint16_t, 8))(65533UL)))).s5)) >= p_109), l_215)) <= p_1474->g_36.s5) ^ 0x48BB9C06754C7A39L)))
        { /* block id: 71 */
            union U1 **l_219[1];
            int32_t l_255 = 0x0EA4464BL;
            uint64_t **l_256 = (void*)0;
            int32_t *l_307 = &l_167[2];
            int32_t *l_308 = &l_167[6];
            int32_t *l_309 = &p_1474->g_136;
            int32_t *l_310 = &p_1474->g_123;
            int32_t *l_311 = &l_167[2];
            int32_t *l_312 = &l_167[2];
            int32_t *l_313 = (void*)0;
            int32_t *l_314[6][8][5] = {{{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2}},{{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2}},{{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2}},{{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2}},{{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2}},{{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2},{&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_5[0][1][0],&l_268,&p_1474->g_2}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_219[i] = &l_217;
            l_221 = (p_1474->g_220 = l_217);
            (*p_1474->g_65) = &l_167[6];
            for (l_216 = (-20); (l_216 < 47); l_216 = safe_add_func_int64_t_s_s(l_216, 9))
            { /* block id: 77 */
                uint64_t l_232 = 0xE6477B1380094E7EL;
                uint32_t *l_237 = &l_168;
                uint8_t l_299 = 250UL;
                int32_t l_300 = 0x11765340L;
                int32_t l_302 = 0L;
                uint16_t **l_306 = (void*)0;
                if (((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1474->g_224.xy)))), ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x0524EEF2L, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(p_1474->g_225.s30)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))((safe_div_func_uint8_t_u_u(((*p_1474->g_220) , ((-3L) || GROUP_DIVERGE(0, 1))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(p_1474->g_228.s8f512955)).s22))).yxxxxyxxxyyyxyxx)).s6)), 0x4CC2L, ((VECTOR(int16_t, 8))(p_1474->g_229.xyyxyyxy)), ((VECTOR(int16_t, 4))(((safe_add_func_int32_t_s_s(8L, ((l_232 | (safe_div_func_int8_t_s_s((p_1474->g_2 < (safe_div_func_uint32_t_u_u(((*l_237)++), (safe_mul_func_uint16_t_u_u((p_109 & l_215), p_1474->g_228.sd))))), (safe_rshift_func_uint16_t_u_s((((safe_mul_func_int8_t_s_s(((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_246.xyxx)), (safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_int64_t_s(((((((VECTOR(uint32_t, 4))(1UL, 8UL, 6UL, 4294967295UL)).w , l_160.y) & 1L) & 255UL) > l_215))) , p_109), 0x3690L)), p_109, ((VECTOR(int64_t, 4))(0x6F9958F3101816B8L)), (-1L), 0L, ((VECTOR(int64_t, 2))(0x1F46A099E6CCCA00L)), 0x2158078B896CBFC9L, 0x7F4225F3463579EFL)).sbfe8)).yxxyxzyz)).s1757716715511254)).sfc, ((VECTOR(int64_t, 2))(0x1E15F0F53890954FL))))), 9L, 0x2235920794434800L)).z > FAKE_DIVERGE(p_1474->global_2_offset, get_global_id(2), 10)) == GROUP_DIVERGE(2, 1)), 0x67L)) >= p_109) <= GROUP_DIVERGE(1, 1)), l_232))))) == l_246.x))) | 0x29L), ((VECTOR(int16_t, 2))(0x4D0CL)), 0x6EB7L)), 4L, 0x3ADAL)).sbb, ((VECTOR(uint16_t, 2))(1UL))))), ((VECTOR(int32_t, 8))((-1L))), 1L, l_246.y, ((VECTOR(int32_t, 4))(0x70F0D5E2L)))).s05))), 0x2C4E5A00L)).odd)).xxxxxxyx))).s43, ((VECTOR(int32_t, 2))(1L))))).even)
                { /* block id: 79 */
                    int32_t l_254 = 0x1C9E9391L;
                    uint8_t *l_259 = (void*)0;
                    uint8_t *l_260 = (void*)0;
                    uint8_t *l_261[10];
                    int32_t l_269 = 1L;
                    VECTOR(int32_t, 16) l_285 = (VECTOR(int32_t, 16))(0x4D140C12L, (VECTOR(int32_t, 4))(0x4D140C12L, (VECTOR(int32_t, 2))(0x4D140C12L, 2L), 2L), 2L, 0x4D140C12L, 2L, (VECTOR(int32_t, 2))(0x4D140C12L, 2L), (VECTOR(int32_t, 2))(0x4D140C12L, 2L), 0x4D140C12L, 2L, 0x4D140C12L, 2L);
                    int8_t *l_298 = &p_1474->g_196[1];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_261[i] = (void*)0;
                    for (l_215 = 0; (l_215 > (-17)); l_215 = safe_sub_func_uint64_t_u_u(l_215, 3))
                    { /* block id: 82 */
                        int32_t *l_253[1][9] = {{&l_167[4],&l_167[4],&l_167[4],&l_167[4],&l_167[4],&l_167[4],&l_167[4],&l_167[4],&l_167[4]}};
                        int i, j;
                        l_254 |= ((VECTOR(int32_t, 2))(p_1474->g_252.se8)).even;
                        if (l_255)
                            continue;
                        return l_256;
                    }
                    l_255 = ((((p_1474->g_5[0][1][0] == (l_167[3] = GROUP_DIVERGE(1, 1))) < (safe_add_func_uint8_t_u_u((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(2UL, (safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u(p_1474->g_252.s1, (++p_1474->g_270))), 7)), 3UL, 0xD7L)))).z != (l_302 = (safe_sub_func_int32_t_s_s(((((l_301 ^= ((0x5B4BL & (safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((l_246.x || (safe_sub_func_int8_t_s_s(((0x1D2EL & ((safe_rshift_func_int16_t_s_u((((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(l_285.s4ab22bd5)).even, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))((-1L), (-1L))).xyyxxyyyxxyxyxyx))).sffad))).even)).xyxxyxxxyyxyxxxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((safe_div_func_uint8_t_u_u((0x6669896BL != ((l_221 = l_217) == &p_1474->g_218[5][0][1])), (safe_div_func_int32_t_s_s((l_300 = (l_268 &= (safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((((((safe_mul_func_int8_t_s_s(((*l_298) ^= ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((((l_246.x ^ p_1474->g_229.y) && 0x3680D2039C2A8EAFL) == p_1474->g_229.x), ((VECTOR(int8_t, 2))(6L)), (-2L))).even)).xyxxyyxx)).s1012235446166416, ((VECTOR(int8_t, 16))(0x6EL))))))).s8), FAKE_DIVERGE(p_1474->global_0_offset, get_global_id(0), 10))) >= l_299) <= p_1474->g_123) || 0x411E99F57404985CL) ^ p_1474->g_107.y) & FAKE_DIVERGE(p_1474->local_1_offset, get_local_id(1), 10)), l_215)), 0)))), 0x08121A7BL)))), ((VECTOR(int32_t, 2))((-10L))), 0x702643BFL)).wywxyyyz)).s7067302464024537))).s3 && 4L), p_1474->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1474->tid, 148))])) >= p_109)) | p_1474->g_117), l_232))), 1)), l_285.s4)) , 0x04L), p_1474->g_2))) ^ p_109)) | 0x43L) == p_1474->g_2) > l_299), p_109)))), 0x01L))) && p_1474->g_224.y) ^ 0UL);
                    if (l_255)
                        continue;
                    (*p_1474->g_65) = (*p_1474->g_65);
                }
                else
                { /* block id: 98 */
                    l_306 = p_1474->g_304[8][1];
                }
            }
            l_316--;
        }
        else
        { /* block id: 103 */
            uint32_t *l_335 = &l_168;
            uint16_t l_346 = 65533UL;
            int32_t *l_347 = &l_167[6];
            VECTOR(uint32_t, 8) l_349 = (VECTOR(uint32_t, 8))(0x8B93C8B6L, (VECTOR(uint32_t, 4))(0x8B93C8B6L, (VECTOR(uint32_t, 2))(0x8B93C8B6L, 0UL), 0UL), 0UL, 0x8B93C8B6L, 0UL);
            uint64_t **l_353 = &l_195[2][0];
            uint16_t **l_356 = &p_1474->g_305;
            uint8_t *l_364 = &l_316;
            VECTOR(int32_t, 4) l_423 = (VECTOR(int32_t, 4))(0x50DB4E0CL, (VECTOR(int32_t, 2))(0x50DB4E0CL, 0x67A419BFL), 0x67A419BFL);
            VECTOR(int32_t, 2) l_424 = (VECTOR(int32_t, 2))(0x5BD5CC6AL, 0x0D99A13CL);
            int i;
            (*p_1474->g_348) = (safe_mod_func_int16_t_s_s(0x5145L, (safe_mul_func_int8_t_s_s((((*l_347) ^= (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(0x14A3D857F71BE1C5L, 1L, 0x46046515910C99AEL, 0x173B3068C0FA9E00L)).lo)).odd, (safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(((*l_335) = p_1474->g_224.x), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(p_1474->g_336.yy)).xxyy, ((VECTOR(int32_t, 4))(l_337.yxyx))))).z)), 2)), ((((safe_sub_func_uint64_t_u_u((p_109 , (~p_1474->g_5[0][1][0])), (0x41645BF8L == (p_1474->g_123 , ((-2L) > l_246.y))))) | ((safe_div_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s((p_109 & p_1474->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1474->tid, 148))]), l_337.x)) < p_1474->g_344) | l_246.y), p_1474->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1474->tid, 148))])) ^ p_109)) == 0x7D036A4EDC1F5D9CL) || (-5L)))))) || l_345[7][1]) != 0x0F5CL), 0xA3L)), l_346))) <= p_109), 8UL))));
            if (((((VECTOR(uint32_t, 4))(0xB513F834L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_349.s01)).xyyxxyyy)))).s0643067467436655, (uint32_t)((*p_1474->g_348) <= 4UL), (uint32_t)(((+(safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 16))(l_352.see1d05d98fef239f)).sb, ((*l_335) = (((l_353 == (l_206 = l_353)) & (0x82213720E50DB341L < (safe_sub_func_uint16_t_u_u(((l_177 = l_356) != &p_1474->g_305), (safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(255UL, ((VECTOR(uint8_t, 2))(p_1474->g_359.s93)), 0UL, 255UL, ((*l_364) = (((safe_mod_func_uint8_t_u_u(p_109, (safe_add_func_int32_t_s_s(l_337.y, p_109)))) && p_109) & FAKE_DIVERGE(p_1474->global_0_offset, get_global_id(0), 10))), 0xCBL, 0xC8L)).s0, 255UL)))))) , p_109))))) || p_109) && 0UL)))).even)).s04)), 0UL)).x , 4UL) , 0x7FEB5254L))
            { /* block id: 111 */
                int64_t *l_365 = (void*)0;
                int64_t *l_366[5] = {&p_1474->g_218[5][0][1].f3,&p_1474->g_218[5][0][1].f3,&p_1474->g_218[5][0][1].f3,&p_1474->g_218[5][0][1].f3,&p_1474->g_218[5][0][1].f3};
                int32_t l_367 = (-10L);
                uint16_t ****l_377 = &l_208[1][2][0];
                int i;
                if ((((*l_377) = (FAKE_DIVERGE(p_1474->global_0_offset, get_global_id(0), 10) , ((((((l_167[6] = (l_367 = l_179.y)) && ((VECTOR(int64_t, 16))(p_1474->g_368.yyxxxyxxxxyxyxxy)).se) && (p_109 && (p_109 && (l_215 == l_367)))) < p_1474->g_123) <= (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_369.xx)), (safe_mul_func_uint8_t_u_u((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))((((*l_175) = ((((safe_mod_func_uint64_t_u_u(((9L || ((safe_unary_minus_func_int64_t_s(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(0x42CCEFD581548BD2L, ((VECTOR(int64_t, 2))(2L, 4L)), 0x18F6991D99280769L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 16))(0x761B6968DE9E0AD6L, 1L, 0x404C6FC83F2C8EC3L, ((+((safe_unary_minus_func_uint8_t_u(p_1474->g_5[0][1][0])) != (l_376 , p_109))) | FAKE_DIVERGE(p_1474->group_1_offset, get_group_id(1), 10)), 0L, 0x6264AE2606BC8ABBL, 0x04423AFD62D19490L, 0x2F58D7D2F8A94D58L, 0x5BE49F88D66BC741L, 0L, p_1474->g_225.s2, p_1474->g_196[1], (-1L), (-2L), 1L, 0L)).s9c72, ((VECTOR(int64_t, 4))(0L))))).wywxzzyw))).s17, ((VECTOR(int64_t, 2))(1L)), ((VECTOR(int64_t, 2))((-1L)))))).xxyy)), ((VECTOR(int64_t, 8))(0x72DD7A58F7B16BBAL)))).sbc92, ((VECTOR(int64_t, 4))((-7L))), ((VECTOR(int64_t, 4))(0x003B7DD45D628149L))))).x)) == 65535UL)) >= p_109), 1L)) && p_109) , p_109) >= l_301)) >= p_1474->g_15), p_1474->g_225.s7, 0x627E45990CAACB6CL, (-7L), ((VECTOR(int64_t, 2))(0x616FBC5D3EBFB3FFL)), 0x0E0F0D33ABA20BABL, 0x75A8DAC34FAF2142L)))).s2 < p_109), 3UL)), ((VECTOR(uint64_t, 4))(0xD6A59BBE5D6BA8B4L)), 0x65BBE6B6D801CA20L)).even)).w && p_1474->g_5[0][1][0])) , &p_1474->g_304[8][1]))) != &l_177))
                { /* block id: 116 */
                    VECTOR(int64_t, 8) l_387 = (VECTOR(int64_t, 8))((-8L), (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), 0x38242C987BE1634EL), 0x38242C987BE1634EL), 0x38242C987BE1634EL, (-8L), 0x38242C987BE1634EL);
                    int16_t *l_399 = &l_315;
                    int32_t *l_404 = (void*)0;
                    int i;
                    (*p_1474->g_405) = (((((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(((18446744073709551613UL ^ ((*l_347) = (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_1474->g_384.s0646)), p_1474->g_176, ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(0x4E1B42EAD0E9B67AL, (-1L))), ((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(p_1474->g_385.yx)).yyyyyxxxyxxxyyyx)).s861d, ((VECTOR(int64_t, 16))(p_1474->g_386.s6707072335661121)).sde96, ((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 16))(l_387.s1106144124037046)).even, ((VECTOR(int64_t, 2))(0x3CC473912ADB7F4CL, (-1L))).yyxyxxyx, ((VECTOR(int64_t, 8))((-1L), (-1L), (-10L), (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 16))(l_390.xxxxxyxyxxxxxyyx)).s29, ((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 4))(((((((*p_1474->g_348) < (safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((((void*)0 == l_395) , (((*l_399) &= ((void*)0 == p_1474->g_396)) | (safe_mod_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_u(0xB6A8L, l_168)) & (*l_347)) , p_109) ^ l_367), p_1474->g_228.s5)))) >= l_387.s2), 0x2092L)), 0x50L))) , l_171.s0) < p_1474->g_368.x) != GROUP_DIVERGE(0, 1)) , p_109), l_160.y, 0x66069B34A2058FA4L, 18446744073709551606UL)).odd, ((VECTOR(uint64_t, 2))(0xD692B3C647758CCAL)), ((VECTOR(uint64_t, 2))(0x6B64D6C95099F71DL))))).xxxx)).wxxyxxxw)).hi)))))), ((VECTOR(uint64_t, 2))(0x11706732894D08F5L)), 0x5EF3537DCC9470A1L, 0UL))))))).s01))).yxyyxxxxxxxyxxxy, ((VECTOR(uint64_t, 16))(0xBC080D46E1D15E38L))))).hi)).s41)).odd, 1L)), 0L, 0x22D92B3A2F00C94FL, 0x4080AEBB30FA630CL, 0x69B73B663AE9033FL))))), ((VECTOR(int64_t, 8))(0x457B6CDF784443CDL))))).hi))).wxwwxxxyyzyywzzz, ((VECTOR(int64_t, 16))((-1L))), ((VECTOR(int64_t, 16))(0x084551AED713EB59L))))).s60)).yxyx)), ((VECTOR(int64_t, 4))((-1L)))))).odd, ((VECTOR(int64_t, 2))(0x0411194261D5E690L))))), (-7L))).s3 > 18446744073709551615UL))) > 0x06E85073L), 10)), 11)) ^ l_387.s1) != 4294967294UL) , (**p_1474->g_396)) & p_109);
                }
                else
                { /* block id: 120 */
                    uint16_t l_406 = 0xA73CL;
                    int32_t *l_422 = &l_215;
                    ++l_406;
                    (*l_422) = (safe_sub_func_int64_t_s_s(((((*l_347) = (((p_1474->g_411 = (0x77B2L <= (l_337.y &= (*l_347)))) && GROUP_DIVERGE(2, 1)) > (*p_1474->g_397))) , (safe_lshift_func_uint8_t_u_u(((p_1474->g_414 , FAKE_DIVERGE(p_1474->local_2_offset, get_local_id(2), 10)) , (p_109 > (p_1474->g_368.y ^= (safe_div_func_int16_t_s_s(((p_109 == (((((safe_lshift_func_uint8_t_u_s((0x83774F79L != l_419), (FAKE_DIVERGE(p_1474->group_0_offset, get_group_id(0), 10) | (safe_lshift_func_int16_t_s_u(((p_109 == (**p_1474->g_396)) & 1L), 11))))) && (*l_347)) < 0x4CBCL) | 65532UL) == 4294967287UL)) , p_1474->g_229.x), p_1474->g_336.y))))), 1))) != l_301), p_109));
                }
            }
            else
            { /* block id: 128 */
                (*p_1474->g_65) = (p_1474->g_36.sc , (*p_1474->g_65));
            }
            (*l_347) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(l_423.yx)).xxyxxyyy))), ((VECTOR(int32_t, 8))(l_424.yyxyyxyx)))).s3908)).w;
        }
        for (p_109 = 24; (p_109 != 36); ++p_109)
        { /* block id: 135 */
            uint8_t *l_429 = &l_316;
            int32_t l_432 = 0x414942E2L;
            uint64_t **l_437 = (void*)0;
            l_337.y = (safe_add_func_uint16_t_u_u((p_109 , p_109), (0L && (((++(*l_429)) && l_432) && 0x99C37DEBL))));
            for (p_1474->g_176 = 0; (p_1474->g_176 < 46); ++p_1474->g_176)
            { /* block id: 140 */
                (*p_1474->g_435) = l_221;
            }
            return l_437;
        }
        for (p_1474->g_136 = 0; (p_1474->g_136 > (-10)); --p_1474->g_136)
        { /* block id: 147 */
            VECTOR(int32_t, 8) l_440 = (VECTOR(int32_t, 8))(0x62D8CB35L, (VECTOR(int32_t, 4))(0x62D8CB35L, (VECTOR(int32_t, 2))(0x62D8CB35L, 0x1EB9041DL), 0x1EB9041DL), 0x1EB9041DL, 0x62D8CB35L, 0x1EB9041DL);
            int32_t l_473 = 0x09E35C1DL;
            int32_t *l_476 = &l_167[2];
            union U0 **l_478[10] = {&l_477,(void*)0,&l_477,&l_477,(void*)0,&l_477,&l_477,(void*)0,&l_477,&l_477};
            int i;
            l_441 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_440.s0244)), 0x7B19DC6DL, ((VECTOR(int32_t, 2))(1L, 0x1857FF39L)), 0x556476E0L)))).odd)).x;
            if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_442.saa)).xxyx)).z)
            { /* block id: 149 */
                int32_t *l_443 = (void*)0;
                int32_t *l_444 = &p_1474->g_218[5][0][1].f0;
                int32_t *l_445 = (void*)0;
                int32_t *l_446 = (void*)0;
                int32_t *l_447 = &l_167[0];
                int32_t *l_448 = &l_167[2];
                int32_t *l_449 = &l_215;
                int32_t *l_450[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_450[i] = &l_301;
                --l_452;
            }
            else
            { /* block id: 151 */
                int32_t l_456 = (-1L);
                uint32_t *l_457 = (void*)0;
                union U1 l_462 = {0L};
                int32_t *l_470 = &l_462.f0;
                int32_t *l_471 = (void*)0;
                int32_t *l_472[6][4] = {{(void*)0,(void*)0,(void*)0,&p_1474->g_2},{(void*)0,(void*)0,(void*)0,&p_1474->g_2},{(void*)0,(void*)0,(void*)0,&p_1474->g_2},{(void*)0,(void*)0,(void*)0,&p_1474->g_2},{(void*)0,(void*)0,(void*)0,&p_1474->g_2},{(void*)0,(void*)0,(void*)0,&p_1474->g_2}};
                int i, j;
                l_475 = ((p_109 , (safe_unary_minus_func_uint16_t_u((l_352.s3 &= (((((l_456 < 0x4FD4L) , (l_337.x = p_109)) != (l_167[6] = (((((safe_div_func_int8_t_s_s((l_440.s5 = ((((safe_add_func_int32_t_s_s((((*p_1474->g_220) = l_462) , ((!(l_473 &= ((((VECTOR(int32_t, 2))((-10L), 0x677582B9L)).lo >= ((*l_470) = (((l_440.s6 , (((safe_rshift_func_uint16_t_u_s((((**l_177) = ((l_456 || (((safe_mul_func_uint16_t_u_u(((l_467 > ((safe_sub_func_int16_t_s_s((l_268 = p_1474->g_225.sf), (*p_1474->g_305))) != l_167[5])) , (*p_1474->g_305)), p_109)) , l_390.y) , 0x5B4169A8579C1D85L)) , p_109)) & (-1L)), 13)) ^ p_109) != 0x17BC40C1L)) <= p_1474->g_136) < p_109))) ^ 4294967295UL))) , 0L)), p_109)) == 0x5E1DL) || l_171.s4) , 0L)), l_474)) || l_440.s6) || 1L) | p_1474->g_123) || p_1474->g_385.y))) & 0xE0E2E31AAD4F0741L) || p_109))))) ^ l_345[1][0]);
            }
            (*l_476) = p_109;
            p_1474->g_479[0] = (l_477 = l_477);
        }
        l_483[6][8] = ((VECTOR(int32_t, 16))(p_1474->g_481.s7676524345473370)).s8;
    }
    else
    { /* block id: 168 */
        int32_t *l_485 = &l_475;
        int32_t **l_484 = &l_485;
        int32_t *l_487 = &p_1474->g_5[0][1][0];
        int32_t **l_486 = &l_487;
        VECTOR(int32_t, 8) l_490 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 3L), 3L), 3L, 1L, 3L);
        VECTOR(int32_t, 2) l_495 = (VECTOR(int32_t, 2))(5L, 0x1729509EL);
        int32_t *l_501 = (void*)0;
        int32_t *l_502 = (void*)0;
        int32_t *l_503 = &l_451;
        int i;
        (*p_1474->g_504) = ((+(((*p_1474->g_65) != ((*l_486) = ((*l_484) = &l_475))) > ((safe_add_func_int16_t_s_s(((-1L) | p_109), p_109)) && (2UL >= 0x039B0EC7L)))) ^ ((((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_490.s02202327)).s3740723565161074)).s24, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))((-1L), 0x287A30CFL, ((*l_503) &= (((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((((p_109 < ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x219177B9L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(l_495.xy)), ((VECTOR(int32_t, 8))(l_496.s54030674)).s03))))), 1L)))))).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), 0x55A34AB5L)), 0x326946EFL, (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((&p_1474->g_66[3][5][7] == &p_1474->g_348) , p_1474->g_176), (*p_1474->g_305))), GROUP_DIVERGE(0, 1))), (-1L), p_109, 1L, 0x74B2D095L)).s70, ((VECTOR(int32_t, 2))(4L))))).yxxxxyxy)), (*p_1474->g_348), ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 2))((-1L))), 5L)).s9b, ((VECTOR(int32_t, 2))((-1L)))))), (int32_t)0x35061EE2L))).hi) & 0x3FB7L) , p_109) , (*p_1474->g_305)), 11)), 5)) < 65526UL) == 0xCD882F99L)), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 8))(0x007CDF8EL)), 0L, 7L, 1L)).even, ((VECTOR(int32_t, 8))(0x010DFA76L))))).s45))).even , 18446744073709551611UL) , p_109));
    }
    return p_1474->g_505;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[86];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 86; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[86];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 86; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[148];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 148; i++)
            l_comm_values[i] = 1;
    struct S2 c_1475;
    struct S2* p_1474 = &c_1475;
    struct S2 c_1476 = {
        1L, // p_1474->g_2
        {{{0x64FC2285L},{0x64FC2285L}}}, // p_1474->g_5
        9UL, // p_1474->g_15
        (VECTOR(uint64_t, 16))(0xDF642D94904418F7L, (VECTOR(uint64_t, 4))(0xDF642D94904418F7L, (VECTOR(uint64_t, 2))(0xDF642D94904418F7L, 0xF1E73E4F9F010208L), 0xF1E73E4F9F010208L), 0xF1E73E4F9F010208L, 0xDF642D94904418F7L, 0xF1E73E4F9F010208L, (VECTOR(uint64_t, 2))(0xDF642D94904418F7L, 0xF1E73E4F9F010208L), (VECTOR(uint64_t, 2))(0xDF642D94904418F7L, 0xF1E73E4F9F010208L), 0xDF642D94904418F7L, 0xF1E73E4F9F010208L, 0xDF642D94904418F7L, 0xF1E73E4F9F010208L), // p_1474->g_36
        18446744073709551615UL, // p_1474->g_60
        {{{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2}},{{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2}},{{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2}},{{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2},{&p_1474->g_2,&p_1474->g_2,(void*)0,&p_1474->g_5[0][1][0],&p_1474->g_2,&p_1474->g_5[0][1][0],(void*)0,&p_1474->g_2,&p_1474->g_2}}}, // p_1474->g_66
        &p_1474->g_66[0][0][0], // p_1474->g_65
        {1UL,1UL,1UL,1UL,1UL,1UL}, // p_1474->g_88
        2UL, // p_1474->g_90
        {{{1UL},{1UL}},{{1UL},{1UL}}}, // p_1474->g_93
        (VECTOR(int8_t, 2))(0L, 0L), // p_1474->g_107
        (void*)0, // p_1474->g_106
        0xEDE03748BFE3BB38L, // p_1474->g_117
        0x4CD6F842L, // p_1474->g_123
        0x793019E4L, // p_1474->g_136
        0UL, // p_1474->g_176
        {0L,0L,0L,0L,0L,0L,0L,0L}, // p_1474->g_196
        {{{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}},{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}}},{{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}},{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}}},{{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}},{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}}},{{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}},{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}}},{{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}},{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}}},{{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}},{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}}},{{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}},{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}}},{{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}},{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}}},{{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}},{{3L},{0x1325A5C9L},{2L},{0x78CB1526L},{0x7EE49142L},{0x78CB1526L},{2L}}}}, // p_1474->g_218
        &p_1474->g_218[5][0][1], // p_1474->g_220
        (VECTOR(int32_t, 2))(0x3025B4E2L, 5L), // p_1474->g_224
        (VECTOR(int32_t, 16))(0x332AA214L, (VECTOR(int32_t, 4))(0x332AA214L, (VECTOR(int32_t, 2))(0x332AA214L, 0x0BE43B6DL), 0x0BE43B6DL), 0x0BE43B6DL, 0x332AA214L, 0x0BE43B6DL, (VECTOR(int32_t, 2))(0x332AA214L, 0x0BE43B6DL), (VECTOR(int32_t, 2))(0x332AA214L, 0x0BE43B6DL), 0x332AA214L, 0x0BE43B6DL, 0x332AA214L, 0x0BE43B6DL), // p_1474->g_225
        (VECTOR(int8_t, 16))(0x66L, (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 0L), 0L), 0L, 0x66L, 0L, (VECTOR(int8_t, 2))(0x66L, 0L), (VECTOR(int8_t, 2))(0x66L, 0L), 0x66L, 0L, 0x66L, 0L), // p_1474->g_228
        (VECTOR(int16_t, 2))(0x1968L, 0x50D2L), // p_1474->g_229
        (VECTOR(int32_t, 16))(0x08573710L, (VECTOR(int32_t, 4))(0x08573710L, (VECTOR(int32_t, 2))(0x08573710L, 0x261E40FFL), 0x261E40FFL), 0x261E40FFL, 0x08573710L, 0x261E40FFL, (VECTOR(int32_t, 2))(0x08573710L, 0x261E40FFL), (VECTOR(int32_t, 2))(0x08573710L, 0x261E40FFL), 0x08573710L, 0x261E40FFL, 0x08573710L, 0x261E40FFL), // p_1474->g_252
        0UL, // p_1474->g_270
        (void*)0, // p_1474->g_303
        &p_1474->g_176, // p_1474->g_305
        {{(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305},{(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305},{(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305},{(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305},{(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305},{(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305},{(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305},{(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305},{(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305,(void*)0,&p_1474->g_305,&p_1474->g_305}}, // p_1474->g_304
        (VECTOR(int32_t, 4))(0x206F3904L, (VECTOR(int32_t, 2))(0x206F3904L, 0x1842E83CL), 0x1842E83CL), // p_1474->g_336
        1L, // p_1474->g_344
        &p_1474->g_218[5][0][1].f0, // p_1474->g_348
        (VECTOR(uint8_t, 16))(0xF9L, (VECTOR(uint8_t, 4))(0xF9L, (VECTOR(uint8_t, 2))(0xF9L, 0xFEL), 0xFEL), 0xFEL, 0xF9L, 0xFEL, (VECTOR(uint8_t, 2))(0xF9L, 0xFEL), (VECTOR(uint8_t, 2))(0xF9L, 0xFEL), 0xF9L, 0xFEL, 0xF9L, 0xFEL), // p_1474->g_359
        (VECTOR(int64_t, 2))((-1L), 0x1661B09A1C7425C8L), // p_1474->g_368
        (VECTOR(int64_t, 8))(0x4536D9F2B9D7D9C3L, (VECTOR(int64_t, 4))(0x4536D9F2B9D7D9C3L, (VECTOR(int64_t, 2))(0x4536D9F2B9D7D9C3L, 0x33FE2530089A70A2L), 0x33FE2530089A70A2L), 0x33FE2530089A70A2L, 0x4536D9F2B9D7D9C3L, 0x33FE2530089A70A2L), // p_1474->g_384
        (VECTOR(int64_t, 4))(0x69DAE4ED920BD9BEL, (VECTOR(int64_t, 2))(0x69DAE4ED920BD9BEL, 0x3EF974E3EA0CFDCCL), 0x3EF974E3EA0CFDCCL), // p_1474->g_385
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L)), // p_1474->g_386
        {0x69C4B8A8CAE7A2E0L,0x69C4B8A8CAE7A2E0L,0x69C4B8A8CAE7A2E0L,0x69C4B8A8CAE7A2E0L,0x69C4B8A8CAE7A2E0L,0x69C4B8A8CAE7A2E0L,0x69C4B8A8CAE7A2E0L,0x69C4B8A8CAE7A2E0L,0x69C4B8A8CAE7A2E0L,0x69C4B8A8CAE7A2E0L}, // p_1474->g_398
        &p_1474->g_398[7], // p_1474->g_397
        &p_1474->g_397, // p_1474->g_396
        &p_1474->g_136, // p_1474->g_405
        4294967286UL, // p_1474->g_411
        {18446744073709551615UL}, // p_1474->g_414
        &p_1474->g_220, // p_1474->g_435
        {{0x7E8B8A1AF33EE64FL}}, // p_1474->g_480
        {&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0],&p_1474->g_480[0]}, // p_1474->g_479
        (VECTOR(int32_t, 8))(0x1A0883FFL, (VECTOR(int32_t, 4))(0x1A0883FFL, (VECTOR(int32_t, 2))(0x1A0883FFL, 0x2E0D1BB2L), 0x2E0D1BB2L), 0x2E0D1BB2L, 0x1A0883FFL, 0x2E0D1BB2L), // p_1474->g_481
        &p_1474->g_218[5][0][1].f0, // p_1474->g_504
        (void*)0, // p_1474->g_505
        (void*)0, // p_1474->g_506
        0x1FC3L, // p_1474->g_535
        (void*)0, // p_1474->g_544
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6C4CE2E5L), 0x6C4CE2E5L), 0x6C4CE2E5L, (-1L), 0x6C4CE2E5L), // p_1474->g_557
        (VECTOR(int32_t, 8))(0x2C4DB929L, (VECTOR(int32_t, 4))(0x2C4DB929L, (VECTOR(int32_t, 2))(0x2C4DB929L, 0x6C02225CL), 0x6C02225CL), 0x6C02225CL, 0x2C4DB929L, 0x6C02225CL), // p_1474->g_559
        (VECTOR(int32_t, 16))(0x4F72AE58L, (VECTOR(int32_t, 4))(0x4F72AE58L, (VECTOR(int32_t, 2))(0x4F72AE58L, 0x5AA40E30L), 0x5AA40E30L), 0x5AA40E30L, 0x4F72AE58L, 0x5AA40E30L, (VECTOR(int32_t, 2))(0x4F72AE58L, 0x5AA40E30L), (VECTOR(int32_t, 2))(0x4F72AE58L, 0x5AA40E30L), 0x4F72AE58L, 0x5AA40E30L, 0x4F72AE58L, 0x5AA40E30L), // p_1474->g_561
        (VECTOR(int32_t, 16))(0x7E50BF7CL, (VECTOR(int32_t, 4))(0x7E50BF7CL, (VECTOR(int32_t, 2))(0x7E50BF7CL, 0x18F8445BL), 0x18F8445BL), 0x18F8445BL, 0x7E50BF7CL, 0x18F8445BL, (VECTOR(int32_t, 2))(0x7E50BF7CL, 0x18F8445BL), (VECTOR(int32_t, 2))(0x7E50BF7CL, 0x18F8445BL), 0x7E50BF7CL, 0x18F8445BL, 0x7E50BF7CL, 0x18F8445BL), // p_1474->g_562
        &p_1474->g_505, // p_1474->g_565
        (VECTOR(int64_t, 8))(0x6560C6468D519A92L, (VECTOR(int64_t, 4))(0x6560C6468D519A92L, (VECTOR(int64_t, 2))(0x6560C6468D519A92L, 0L), 0L), 0L, 0x6560C6468D519A92L, 0L), // p_1474->g_582
        (VECTOR(int32_t, 2))(0x24DD5D49L, 0x2567BC56L), // p_1474->g_585
        4294967293UL, // p_1474->g_587
        (VECTOR(uint16_t, 8))(0xDF2FL, (VECTOR(uint16_t, 4))(0xDF2FL, (VECTOR(uint16_t, 2))(0xDF2FL, 0x123DL), 0x123DL), 0x123DL, 0xDF2FL, 0x123DL), // p_1474->g_605
        (VECTOR(int8_t, 8))(0x08L, (VECTOR(int8_t, 4))(0x08L, (VECTOR(int8_t, 2))(0x08L, 7L), 7L), 7L, 0x08L, 7L), // p_1474->g_639
        &p_1474->g_544, // p_1474->g_669
        0L, // p_1474->g_676
        (VECTOR(int8_t, 4))(0x73L, (VECTOR(int8_t, 2))(0x73L, 0x5DL), 0x5DL), // p_1474->g_689
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), // p_1474->g_697
        (VECTOR(int8_t, 4))(0x69L, (VECTOR(int8_t, 2))(0x69L, 0x70L), 0x70L), // p_1474->g_703
        (void*)0, // p_1474->g_712
        (VECTOR(int16_t, 8))(0x55D8L, (VECTOR(int16_t, 4))(0x55D8L, (VECTOR(int16_t, 2))(0x55D8L, 0x7763L), 0x7763L), 0x7763L, 0x55D8L, 0x7763L), // p_1474->g_724
        0x582E2F75L, // p_1474->g_726
        &p_1474->g_726, // p_1474->g_730
        0xB63164F5A97567E8L, // p_1474->g_732
        (VECTOR(int8_t, 4))(0x28L, (VECTOR(int8_t, 2))(0x28L, 1L), 1L), // p_1474->g_737
        (VECTOR(int64_t, 4))(0x11BC98F47E4AF738L, (VECTOR(int64_t, 2))(0x11BC98F47E4AF738L, 0L), 0L), // p_1474->g_784
        (-1L), // p_1474->g_841
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L), (VECTOR(int32_t, 2))(0L, (-5L)), (VECTOR(int32_t, 2))(0L, (-5L)), 0L, (-5L), 0L, (-5L)), // p_1474->g_860
        (VECTOR(uint64_t, 2))(0x663E3D2356614A35L, 18446744073709551615UL), // p_1474->g_890
        (VECTOR(int16_t, 8))(0x0CABL, (VECTOR(int16_t, 4))(0x0CABL, (VECTOR(int16_t, 2))(0x0CABL, (-5L)), (-5L)), (-5L), 0x0CABL, (-5L)), // p_1474->g_898
        (VECTOR(int8_t, 4))(0x1DL, (VECTOR(int8_t, 2))(0x1DL, (-1L)), (-1L)), // p_1474->g_902
        (VECTOR(uint8_t, 8))(0x59L, (VECTOR(uint8_t, 4))(0x59L, (VECTOR(uint8_t, 2))(0x59L, 0x6AL), 0x6AL), 0x6AL, 0x59L, 0x6AL), // p_1474->g_903
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x69D9AD92L), 0x69D9AD92L), 0x69D9AD92L, 1L, 0x69D9AD92L), // p_1474->g_919
        0x0C233818CEDAB502L, // p_1474->g_933
        {&p_1474->g_676}, // p_1474->g_1005
        &p_1474->g_1005[0], // p_1474->g_1004
        &p_1474->g_1004, // p_1474->g_1003
        &p_1474->g_933, // p_1474->g_1017
        (VECTOR(int64_t, 2))(0x43CBB0BFEAB23B16L, 0x16042BB94ED3DB01L), // p_1474->g_1025
        0x31L, // p_1474->g_1036
        (VECTOR(uint32_t, 2))(0xEDEC206FL, 0xD97A570AL), // p_1474->g_1039
        (VECTOR(uint32_t, 8))(0x38039286L, (VECTOR(uint32_t, 4))(0x38039286L, (VECTOR(uint32_t, 2))(0x38039286L, 0xDE5273E7L), 0xDE5273E7L), 0xDE5273E7L, 0x38039286L, 0xDE5273E7L), // p_1474->g_1040
        (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), (-7L)), (-7L)), // p_1474->g_1055
        0x6CEBL, // p_1474->g_1077
        (void*)0, // p_1474->g_1099
        (VECTOR(int16_t, 16))(0x7935L, (VECTOR(int16_t, 4))(0x7935L, (VECTOR(int16_t, 2))(0x7935L, 9L), 9L), 9L, 0x7935L, 9L, (VECTOR(int16_t, 2))(0x7935L, 9L), (VECTOR(int16_t, 2))(0x7935L, 9L), 0x7935L, 9L, 0x7935L, 9L), // p_1474->g_1147
        (VECTOR(uint64_t, 2))(0x9B17DDC31791A3BCL, 0x1B246AB76412DD75L), // p_1474->g_1151
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), // p_1474->g_1183
        (VECTOR(int8_t, 16))(0x0EL, (VECTOR(int8_t, 4))(0x0EL, (VECTOR(int8_t, 2))(0x0EL, 5L), 5L), 5L, 0x0EL, 5L, (VECTOR(int8_t, 2))(0x0EL, 5L), (VECTOR(int8_t, 2))(0x0EL, 5L), 0x0EL, 5L, 0x0EL, 5L), // p_1474->g_1184
        &p_1474->g_218[5][0][1].f0, // p_1474->g_1191
        (VECTOR(int8_t, 2))((-2L), 0x25L), // p_1474->g_1197
        &p_1474->g_90, // p_1474->g_1234
        {&p_1474->g_1234,&p_1474->g_1234,&p_1474->g_1234,&p_1474->g_1234,&p_1474->g_1234,&p_1474->g_1234,&p_1474->g_1234,&p_1474->g_1234,&p_1474->g_1234}, // p_1474->g_1233
        &p_1474->g_1233[1], // p_1474->g_1232
        &p_1474->g_5[0][0][0], // p_1474->g_1253
        (void*)0, // p_1474->g_1254
        (VECTOR(uint8_t, 8))(0xC9L, (VECTOR(uint8_t, 4))(0xC9L, (VECTOR(uint8_t, 2))(0xC9L, 255UL), 255UL), 255UL, 0xC9L, 255UL), // p_1474->g_1301
        (VECTOR(int32_t, 8))(0x7622A737L, (VECTOR(int32_t, 4))(0x7622A737L, (VECTOR(int32_t, 2))(0x7622A737L, (-1L)), (-1L)), (-1L), 0x7622A737L, (-1L)), // p_1474->g_1304
        1UL, // p_1474->g_1320
        (VECTOR(uint32_t, 8))(0x82ECF41BL, (VECTOR(uint32_t, 4))(0x82ECF41BL, (VECTOR(uint32_t, 2))(0x82ECF41BL, 9UL), 9UL), 9UL, 0x82ECF41BL, 9UL), // p_1474->g_1327
        (VECTOR(uint8_t, 2))(9UL, 5UL), // p_1474->g_1330
        (VECTOR(uint64_t, 4))(0xB932815763CF1937L, (VECTOR(uint64_t, 2))(0xB932815763CF1937L, 0UL), 0UL), // p_1474->g_1335
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), // p_1474->g_1339
        (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0UL), 0UL), 0UL, 65530UL, 0UL, (VECTOR(uint16_t, 2))(65530UL, 0UL), (VECTOR(uint16_t, 2))(65530UL, 0UL), 65530UL, 0UL, 65530UL, 0UL), // p_1474->g_1352
        (void*)0, // p_1474->g_1384
        (VECTOR(int16_t, 2))((-1L), 5L), // p_1474->g_1398
        (VECTOR(uint64_t, 8))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551606UL, 18446744073709551615UL), // p_1474->g_1411
        (VECTOR(int8_t, 16))(0x5BL, (VECTOR(int8_t, 4))(0x5BL, (VECTOR(int8_t, 2))(0x5BL, 5L), 5L), 5L, 0x5BL, 5L, (VECTOR(int8_t, 2))(0x5BL, 5L), (VECTOR(int8_t, 2))(0x5BL, 5L), 0x5BL, 5L, 0x5BL, 5L), // p_1474->g_1416
        (void*)0, // p_1474->g_1424
        0xE662E3ACL, // p_1474->g_1429
        (VECTOR(uint8_t, 16))(0x40L, (VECTOR(uint8_t, 4))(0x40L, (VECTOR(uint8_t, 2))(0x40L, 246UL), 246UL), 246UL, 0x40L, 246UL, (VECTOR(uint8_t, 2))(0x40L, 246UL), (VECTOR(uint8_t, 2))(0x40L, 246UL), 0x40L, 246UL, 0x40L, 246UL), // p_1474->g_1444
        0, // p_1474->v_collective
        sequence_input[get_global_id(0)], // p_1474->global_0_offset
        sequence_input[get_global_id(1)], // p_1474->global_1_offset
        sequence_input[get_global_id(2)], // p_1474->global_2_offset
        sequence_input[get_local_id(0)], // p_1474->local_0_offset
        sequence_input[get_local_id(1)], // p_1474->local_1_offset
        sequence_input[get_local_id(2)], // p_1474->local_2_offset
        sequence_input[get_group_id(0)], // p_1474->group_0_offset
        sequence_input[get_group_id(1)], // p_1474->group_1_offset
        sequence_input[get_group_id(2)], // p_1474->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 148)), permutations[0][get_linear_local_id()])), // p_1474->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1475 = c_1476;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1474);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1474->g_2, "p_1474->g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1474->g_5[i][j][k], "p_1474->g_5[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1474->g_15, "p_1474->g_15", print_hash_value);
    transparent_crc(p_1474->g_36.s0, "p_1474->g_36.s0", print_hash_value);
    transparent_crc(p_1474->g_36.s1, "p_1474->g_36.s1", print_hash_value);
    transparent_crc(p_1474->g_36.s2, "p_1474->g_36.s2", print_hash_value);
    transparent_crc(p_1474->g_36.s3, "p_1474->g_36.s3", print_hash_value);
    transparent_crc(p_1474->g_36.s4, "p_1474->g_36.s4", print_hash_value);
    transparent_crc(p_1474->g_36.s5, "p_1474->g_36.s5", print_hash_value);
    transparent_crc(p_1474->g_36.s6, "p_1474->g_36.s6", print_hash_value);
    transparent_crc(p_1474->g_36.s7, "p_1474->g_36.s7", print_hash_value);
    transparent_crc(p_1474->g_36.s8, "p_1474->g_36.s8", print_hash_value);
    transparent_crc(p_1474->g_36.s9, "p_1474->g_36.s9", print_hash_value);
    transparent_crc(p_1474->g_36.sa, "p_1474->g_36.sa", print_hash_value);
    transparent_crc(p_1474->g_36.sb, "p_1474->g_36.sb", print_hash_value);
    transparent_crc(p_1474->g_36.sc, "p_1474->g_36.sc", print_hash_value);
    transparent_crc(p_1474->g_36.sd, "p_1474->g_36.sd", print_hash_value);
    transparent_crc(p_1474->g_36.se, "p_1474->g_36.se", print_hash_value);
    transparent_crc(p_1474->g_36.sf, "p_1474->g_36.sf", print_hash_value);
    transparent_crc(p_1474->g_60, "p_1474->g_60", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1474->g_88[i], "p_1474->g_88[i]", print_hash_value);

    }
    transparent_crc(p_1474->g_90, "p_1474->g_90", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1474->g_93[i][j][k], "p_1474->g_93[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1474->g_107.x, "p_1474->g_107.x", print_hash_value);
    transparent_crc(p_1474->g_107.y, "p_1474->g_107.y", print_hash_value);
    transparent_crc(p_1474->g_117, "p_1474->g_117", print_hash_value);
    transparent_crc(p_1474->g_123, "p_1474->g_123", print_hash_value);
    transparent_crc(p_1474->g_136, "p_1474->g_136", print_hash_value);
    transparent_crc(p_1474->g_176, "p_1474->g_176", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1474->g_196[i], "p_1474->g_196[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1474->g_218[i][j][k].f0, "p_1474->g_218[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1474->g_224.x, "p_1474->g_224.x", print_hash_value);
    transparent_crc(p_1474->g_224.y, "p_1474->g_224.y", print_hash_value);
    transparent_crc(p_1474->g_225.s0, "p_1474->g_225.s0", print_hash_value);
    transparent_crc(p_1474->g_225.s1, "p_1474->g_225.s1", print_hash_value);
    transparent_crc(p_1474->g_225.s2, "p_1474->g_225.s2", print_hash_value);
    transparent_crc(p_1474->g_225.s3, "p_1474->g_225.s3", print_hash_value);
    transparent_crc(p_1474->g_225.s4, "p_1474->g_225.s4", print_hash_value);
    transparent_crc(p_1474->g_225.s5, "p_1474->g_225.s5", print_hash_value);
    transparent_crc(p_1474->g_225.s6, "p_1474->g_225.s6", print_hash_value);
    transparent_crc(p_1474->g_225.s7, "p_1474->g_225.s7", print_hash_value);
    transparent_crc(p_1474->g_225.s8, "p_1474->g_225.s8", print_hash_value);
    transparent_crc(p_1474->g_225.s9, "p_1474->g_225.s9", print_hash_value);
    transparent_crc(p_1474->g_225.sa, "p_1474->g_225.sa", print_hash_value);
    transparent_crc(p_1474->g_225.sb, "p_1474->g_225.sb", print_hash_value);
    transparent_crc(p_1474->g_225.sc, "p_1474->g_225.sc", print_hash_value);
    transparent_crc(p_1474->g_225.sd, "p_1474->g_225.sd", print_hash_value);
    transparent_crc(p_1474->g_225.se, "p_1474->g_225.se", print_hash_value);
    transparent_crc(p_1474->g_225.sf, "p_1474->g_225.sf", print_hash_value);
    transparent_crc(p_1474->g_228.s0, "p_1474->g_228.s0", print_hash_value);
    transparent_crc(p_1474->g_228.s1, "p_1474->g_228.s1", print_hash_value);
    transparent_crc(p_1474->g_228.s2, "p_1474->g_228.s2", print_hash_value);
    transparent_crc(p_1474->g_228.s3, "p_1474->g_228.s3", print_hash_value);
    transparent_crc(p_1474->g_228.s4, "p_1474->g_228.s4", print_hash_value);
    transparent_crc(p_1474->g_228.s5, "p_1474->g_228.s5", print_hash_value);
    transparent_crc(p_1474->g_228.s6, "p_1474->g_228.s6", print_hash_value);
    transparent_crc(p_1474->g_228.s7, "p_1474->g_228.s7", print_hash_value);
    transparent_crc(p_1474->g_228.s8, "p_1474->g_228.s8", print_hash_value);
    transparent_crc(p_1474->g_228.s9, "p_1474->g_228.s9", print_hash_value);
    transparent_crc(p_1474->g_228.sa, "p_1474->g_228.sa", print_hash_value);
    transparent_crc(p_1474->g_228.sb, "p_1474->g_228.sb", print_hash_value);
    transparent_crc(p_1474->g_228.sc, "p_1474->g_228.sc", print_hash_value);
    transparent_crc(p_1474->g_228.sd, "p_1474->g_228.sd", print_hash_value);
    transparent_crc(p_1474->g_228.se, "p_1474->g_228.se", print_hash_value);
    transparent_crc(p_1474->g_228.sf, "p_1474->g_228.sf", print_hash_value);
    transparent_crc(p_1474->g_229.x, "p_1474->g_229.x", print_hash_value);
    transparent_crc(p_1474->g_229.y, "p_1474->g_229.y", print_hash_value);
    transparent_crc(p_1474->g_252.s0, "p_1474->g_252.s0", print_hash_value);
    transparent_crc(p_1474->g_252.s1, "p_1474->g_252.s1", print_hash_value);
    transparent_crc(p_1474->g_252.s2, "p_1474->g_252.s2", print_hash_value);
    transparent_crc(p_1474->g_252.s3, "p_1474->g_252.s3", print_hash_value);
    transparent_crc(p_1474->g_252.s4, "p_1474->g_252.s4", print_hash_value);
    transparent_crc(p_1474->g_252.s5, "p_1474->g_252.s5", print_hash_value);
    transparent_crc(p_1474->g_252.s6, "p_1474->g_252.s6", print_hash_value);
    transparent_crc(p_1474->g_252.s7, "p_1474->g_252.s7", print_hash_value);
    transparent_crc(p_1474->g_252.s8, "p_1474->g_252.s8", print_hash_value);
    transparent_crc(p_1474->g_252.s9, "p_1474->g_252.s9", print_hash_value);
    transparent_crc(p_1474->g_252.sa, "p_1474->g_252.sa", print_hash_value);
    transparent_crc(p_1474->g_252.sb, "p_1474->g_252.sb", print_hash_value);
    transparent_crc(p_1474->g_252.sc, "p_1474->g_252.sc", print_hash_value);
    transparent_crc(p_1474->g_252.sd, "p_1474->g_252.sd", print_hash_value);
    transparent_crc(p_1474->g_252.se, "p_1474->g_252.se", print_hash_value);
    transparent_crc(p_1474->g_252.sf, "p_1474->g_252.sf", print_hash_value);
    transparent_crc(p_1474->g_270, "p_1474->g_270", print_hash_value);
    transparent_crc(p_1474->g_336.x, "p_1474->g_336.x", print_hash_value);
    transparent_crc(p_1474->g_336.y, "p_1474->g_336.y", print_hash_value);
    transparent_crc(p_1474->g_336.z, "p_1474->g_336.z", print_hash_value);
    transparent_crc(p_1474->g_336.w, "p_1474->g_336.w", print_hash_value);
    transparent_crc(p_1474->g_344, "p_1474->g_344", print_hash_value);
    transparent_crc(p_1474->g_359.s0, "p_1474->g_359.s0", print_hash_value);
    transparent_crc(p_1474->g_359.s1, "p_1474->g_359.s1", print_hash_value);
    transparent_crc(p_1474->g_359.s2, "p_1474->g_359.s2", print_hash_value);
    transparent_crc(p_1474->g_359.s3, "p_1474->g_359.s3", print_hash_value);
    transparent_crc(p_1474->g_359.s4, "p_1474->g_359.s4", print_hash_value);
    transparent_crc(p_1474->g_359.s5, "p_1474->g_359.s5", print_hash_value);
    transparent_crc(p_1474->g_359.s6, "p_1474->g_359.s6", print_hash_value);
    transparent_crc(p_1474->g_359.s7, "p_1474->g_359.s7", print_hash_value);
    transparent_crc(p_1474->g_359.s8, "p_1474->g_359.s8", print_hash_value);
    transparent_crc(p_1474->g_359.s9, "p_1474->g_359.s9", print_hash_value);
    transparent_crc(p_1474->g_359.sa, "p_1474->g_359.sa", print_hash_value);
    transparent_crc(p_1474->g_359.sb, "p_1474->g_359.sb", print_hash_value);
    transparent_crc(p_1474->g_359.sc, "p_1474->g_359.sc", print_hash_value);
    transparent_crc(p_1474->g_359.sd, "p_1474->g_359.sd", print_hash_value);
    transparent_crc(p_1474->g_359.se, "p_1474->g_359.se", print_hash_value);
    transparent_crc(p_1474->g_359.sf, "p_1474->g_359.sf", print_hash_value);
    transparent_crc(p_1474->g_368.x, "p_1474->g_368.x", print_hash_value);
    transparent_crc(p_1474->g_368.y, "p_1474->g_368.y", print_hash_value);
    transparent_crc(p_1474->g_384.s0, "p_1474->g_384.s0", print_hash_value);
    transparent_crc(p_1474->g_384.s1, "p_1474->g_384.s1", print_hash_value);
    transparent_crc(p_1474->g_384.s2, "p_1474->g_384.s2", print_hash_value);
    transparent_crc(p_1474->g_384.s3, "p_1474->g_384.s3", print_hash_value);
    transparent_crc(p_1474->g_384.s4, "p_1474->g_384.s4", print_hash_value);
    transparent_crc(p_1474->g_384.s5, "p_1474->g_384.s5", print_hash_value);
    transparent_crc(p_1474->g_384.s6, "p_1474->g_384.s6", print_hash_value);
    transparent_crc(p_1474->g_384.s7, "p_1474->g_384.s7", print_hash_value);
    transparent_crc(p_1474->g_385.x, "p_1474->g_385.x", print_hash_value);
    transparent_crc(p_1474->g_385.y, "p_1474->g_385.y", print_hash_value);
    transparent_crc(p_1474->g_385.z, "p_1474->g_385.z", print_hash_value);
    transparent_crc(p_1474->g_385.w, "p_1474->g_385.w", print_hash_value);
    transparent_crc(p_1474->g_386.s0, "p_1474->g_386.s0", print_hash_value);
    transparent_crc(p_1474->g_386.s1, "p_1474->g_386.s1", print_hash_value);
    transparent_crc(p_1474->g_386.s2, "p_1474->g_386.s2", print_hash_value);
    transparent_crc(p_1474->g_386.s3, "p_1474->g_386.s3", print_hash_value);
    transparent_crc(p_1474->g_386.s4, "p_1474->g_386.s4", print_hash_value);
    transparent_crc(p_1474->g_386.s5, "p_1474->g_386.s5", print_hash_value);
    transparent_crc(p_1474->g_386.s6, "p_1474->g_386.s6", print_hash_value);
    transparent_crc(p_1474->g_386.s7, "p_1474->g_386.s7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1474->g_398[i], "p_1474->g_398[i]", print_hash_value);

    }
    transparent_crc(p_1474->g_411, "p_1474->g_411", print_hash_value);
    transparent_crc(p_1474->g_414.f0, "p_1474->g_414.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1474->g_480[i].f0, "p_1474->g_480[i].f0", print_hash_value);

    }
    transparent_crc(p_1474->g_481.s0, "p_1474->g_481.s0", print_hash_value);
    transparent_crc(p_1474->g_481.s1, "p_1474->g_481.s1", print_hash_value);
    transparent_crc(p_1474->g_481.s2, "p_1474->g_481.s2", print_hash_value);
    transparent_crc(p_1474->g_481.s3, "p_1474->g_481.s3", print_hash_value);
    transparent_crc(p_1474->g_481.s4, "p_1474->g_481.s4", print_hash_value);
    transparent_crc(p_1474->g_481.s5, "p_1474->g_481.s5", print_hash_value);
    transparent_crc(p_1474->g_481.s6, "p_1474->g_481.s6", print_hash_value);
    transparent_crc(p_1474->g_481.s7, "p_1474->g_481.s7", print_hash_value);
    transparent_crc(p_1474->g_535, "p_1474->g_535", print_hash_value);
    transparent_crc(p_1474->g_557.s0, "p_1474->g_557.s0", print_hash_value);
    transparent_crc(p_1474->g_557.s1, "p_1474->g_557.s1", print_hash_value);
    transparent_crc(p_1474->g_557.s2, "p_1474->g_557.s2", print_hash_value);
    transparent_crc(p_1474->g_557.s3, "p_1474->g_557.s3", print_hash_value);
    transparent_crc(p_1474->g_557.s4, "p_1474->g_557.s4", print_hash_value);
    transparent_crc(p_1474->g_557.s5, "p_1474->g_557.s5", print_hash_value);
    transparent_crc(p_1474->g_557.s6, "p_1474->g_557.s6", print_hash_value);
    transparent_crc(p_1474->g_557.s7, "p_1474->g_557.s7", print_hash_value);
    transparent_crc(p_1474->g_559.s0, "p_1474->g_559.s0", print_hash_value);
    transparent_crc(p_1474->g_559.s1, "p_1474->g_559.s1", print_hash_value);
    transparent_crc(p_1474->g_559.s2, "p_1474->g_559.s2", print_hash_value);
    transparent_crc(p_1474->g_559.s3, "p_1474->g_559.s3", print_hash_value);
    transparent_crc(p_1474->g_559.s4, "p_1474->g_559.s4", print_hash_value);
    transparent_crc(p_1474->g_559.s5, "p_1474->g_559.s5", print_hash_value);
    transparent_crc(p_1474->g_559.s6, "p_1474->g_559.s6", print_hash_value);
    transparent_crc(p_1474->g_559.s7, "p_1474->g_559.s7", print_hash_value);
    transparent_crc(p_1474->g_561.s0, "p_1474->g_561.s0", print_hash_value);
    transparent_crc(p_1474->g_561.s1, "p_1474->g_561.s1", print_hash_value);
    transparent_crc(p_1474->g_561.s2, "p_1474->g_561.s2", print_hash_value);
    transparent_crc(p_1474->g_561.s3, "p_1474->g_561.s3", print_hash_value);
    transparent_crc(p_1474->g_561.s4, "p_1474->g_561.s4", print_hash_value);
    transparent_crc(p_1474->g_561.s5, "p_1474->g_561.s5", print_hash_value);
    transparent_crc(p_1474->g_561.s6, "p_1474->g_561.s6", print_hash_value);
    transparent_crc(p_1474->g_561.s7, "p_1474->g_561.s7", print_hash_value);
    transparent_crc(p_1474->g_561.s8, "p_1474->g_561.s8", print_hash_value);
    transparent_crc(p_1474->g_561.s9, "p_1474->g_561.s9", print_hash_value);
    transparent_crc(p_1474->g_561.sa, "p_1474->g_561.sa", print_hash_value);
    transparent_crc(p_1474->g_561.sb, "p_1474->g_561.sb", print_hash_value);
    transparent_crc(p_1474->g_561.sc, "p_1474->g_561.sc", print_hash_value);
    transparent_crc(p_1474->g_561.sd, "p_1474->g_561.sd", print_hash_value);
    transparent_crc(p_1474->g_561.se, "p_1474->g_561.se", print_hash_value);
    transparent_crc(p_1474->g_561.sf, "p_1474->g_561.sf", print_hash_value);
    transparent_crc(p_1474->g_562.s0, "p_1474->g_562.s0", print_hash_value);
    transparent_crc(p_1474->g_562.s1, "p_1474->g_562.s1", print_hash_value);
    transparent_crc(p_1474->g_562.s2, "p_1474->g_562.s2", print_hash_value);
    transparent_crc(p_1474->g_562.s3, "p_1474->g_562.s3", print_hash_value);
    transparent_crc(p_1474->g_562.s4, "p_1474->g_562.s4", print_hash_value);
    transparent_crc(p_1474->g_562.s5, "p_1474->g_562.s5", print_hash_value);
    transparent_crc(p_1474->g_562.s6, "p_1474->g_562.s6", print_hash_value);
    transparent_crc(p_1474->g_562.s7, "p_1474->g_562.s7", print_hash_value);
    transparent_crc(p_1474->g_562.s8, "p_1474->g_562.s8", print_hash_value);
    transparent_crc(p_1474->g_562.s9, "p_1474->g_562.s9", print_hash_value);
    transparent_crc(p_1474->g_562.sa, "p_1474->g_562.sa", print_hash_value);
    transparent_crc(p_1474->g_562.sb, "p_1474->g_562.sb", print_hash_value);
    transparent_crc(p_1474->g_562.sc, "p_1474->g_562.sc", print_hash_value);
    transparent_crc(p_1474->g_562.sd, "p_1474->g_562.sd", print_hash_value);
    transparent_crc(p_1474->g_562.se, "p_1474->g_562.se", print_hash_value);
    transparent_crc(p_1474->g_562.sf, "p_1474->g_562.sf", print_hash_value);
    transparent_crc(p_1474->g_582.s0, "p_1474->g_582.s0", print_hash_value);
    transparent_crc(p_1474->g_582.s1, "p_1474->g_582.s1", print_hash_value);
    transparent_crc(p_1474->g_582.s2, "p_1474->g_582.s2", print_hash_value);
    transparent_crc(p_1474->g_582.s3, "p_1474->g_582.s3", print_hash_value);
    transparent_crc(p_1474->g_582.s4, "p_1474->g_582.s4", print_hash_value);
    transparent_crc(p_1474->g_582.s5, "p_1474->g_582.s5", print_hash_value);
    transparent_crc(p_1474->g_582.s6, "p_1474->g_582.s6", print_hash_value);
    transparent_crc(p_1474->g_582.s7, "p_1474->g_582.s7", print_hash_value);
    transparent_crc(p_1474->g_585.x, "p_1474->g_585.x", print_hash_value);
    transparent_crc(p_1474->g_585.y, "p_1474->g_585.y", print_hash_value);
    transparent_crc(p_1474->g_587, "p_1474->g_587", print_hash_value);
    transparent_crc(p_1474->g_605.s0, "p_1474->g_605.s0", print_hash_value);
    transparent_crc(p_1474->g_605.s1, "p_1474->g_605.s1", print_hash_value);
    transparent_crc(p_1474->g_605.s2, "p_1474->g_605.s2", print_hash_value);
    transparent_crc(p_1474->g_605.s3, "p_1474->g_605.s3", print_hash_value);
    transparent_crc(p_1474->g_605.s4, "p_1474->g_605.s4", print_hash_value);
    transparent_crc(p_1474->g_605.s5, "p_1474->g_605.s5", print_hash_value);
    transparent_crc(p_1474->g_605.s6, "p_1474->g_605.s6", print_hash_value);
    transparent_crc(p_1474->g_605.s7, "p_1474->g_605.s7", print_hash_value);
    transparent_crc(p_1474->g_639.s0, "p_1474->g_639.s0", print_hash_value);
    transparent_crc(p_1474->g_639.s1, "p_1474->g_639.s1", print_hash_value);
    transparent_crc(p_1474->g_639.s2, "p_1474->g_639.s2", print_hash_value);
    transparent_crc(p_1474->g_639.s3, "p_1474->g_639.s3", print_hash_value);
    transparent_crc(p_1474->g_639.s4, "p_1474->g_639.s4", print_hash_value);
    transparent_crc(p_1474->g_639.s5, "p_1474->g_639.s5", print_hash_value);
    transparent_crc(p_1474->g_639.s6, "p_1474->g_639.s6", print_hash_value);
    transparent_crc(p_1474->g_639.s7, "p_1474->g_639.s7", print_hash_value);
    transparent_crc(p_1474->g_676, "p_1474->g_676", print_hash_value);
    transparent_crc(p_1474->g_689.x, "p_1474->g_689.x", print_hash_value);
    transparent_crc(p_1474->g_689.y, "p_1474->g_689.y", print_hash_value);
    transparent_crc(p_1474->g_689.z, "p_1474->g_689.z", print_hash_value);
    transparent_crc(p_1474->g_689.w, "p_1474->g_689.w", print_hash_value);
    transparent_crc(p_1474->g_697.x, "p_1474->g_697.x", print_hash_value);
    transparent_crc(p_1474->g_697.y, "p_1474->g_697.y", print_hash_value);
    transparent_crc(p_1474->g_697.z, "p_1474->g_697.z", print_hash_value);
    transparent_crc(p_1474->g_697.w, "p_1474->g_697.w", print_hash_value);
    transparent_crc(p_1474->g_703.x, "p_1474->g_703.x", print_hash_value);
    transparent_crc(p_1474->g_703.y, "p_1474->g_703.y", print_hash_value);
    transparent_crc(p_1474->g_703.z, "p_1474->g_703.z", print_hash_value);
    transparent_crc(p_1474->g_703.w, "p_1474->g_703.w", print_hash_value);
    transparent_crc(p_1474->g_724.s0, "p_1474->g_724.s0", print_hash_value);
    transparent_crc(p_1474->g_724.s1, "p_1474->g_724.s1", print_hash_value);
    transparent_crc(p_1474->g_724.s2, "p_1474->g_724.s2", print_hash_value);
    transparent_crc(p_1474->g_724.s3, "p_1474->g_724.s3", print_hash_value);
    transparent_crc(p_1474->g_724.s4, "p_1474->g_724.s4", print_hash_value);
    transparent_crc(p_1474->g_724.s5, "p_1474->g_724.s5", print_hash_value);
    transparent_crc(p_1474->g_724.s6, "p_1474->g_724.s6", print_hash_value);
    transparent_crc(p_1474->g_724.s7, "p_1474->g_724.s7", print_hash_value);
    transparent_crc(p_1474->g_726, "p_1474->g_726", print_hash_value);
    transparent_crc(p_1474->g_732, "p_1474->g_732", print_hash_value);
    transparent_crc(p_1474->g_737.x, "p_1474->g_737.x", print_hash_value);
    transparent_crc(p_1474->g_737.y, "p_1474->g_737.y", print_hash_value);
    transparent_crc(p_1474->g_737.z, "p_1474->g_737.z", print_hash_value);
    transparent_crc(p_1474->g_737.w, "p_1474->g_737.w", print_hash_value);
    transparent_crc(p_1474->g_784.x, "p_1474->g_784.x", print_hash_value);
    transparent_crc(p_1474->g_784.y, "p_1474->g_784.y", print_hash_value);
    transparent_crc(p_1474->g_784.z, "p_1474->g_784.z", print_hash_value);
    transparent_crc(p_1474->g_784.w, "p_1474->g_784.w", print_hash_value);
    transparent_crc(p_1474->g_841, "p_1474->g_841", print_hash_value);
    transparent_crc(p_1474->g_860.s0, "p_1474->g_860.s0", print_hash_value);
    transparent_crc(p_1474->g_860.s1, "p_1474->g_860.s1", print_hash_value);
    transparent_crc(p_1474->g_860.s2, "p_1474->g_860.s2", print_hash_value);
    transparent_crc(p_1474->g_860.s3, "p_1474->g_860.s3", print_hash_value);
    transparent_crc(p_1474->g_860.s4, "p_1474->g_860.s4", print_hash_value);
    transparent_crc(p_1474->g_860.s5, "p_1474->g_860.s5", print_hash_value);
    transparent_crc(p_1474->g_860.s6, "p_1474->g_860.s6", print_hash_value);
    transparent_crc(p_1474->g_860.s7, "p_1474->g_860.s7", print_hash_value);
    transparent_crc(p_1474->g_860.s8, "p_1474->g_860.s8", print_hash_value);
    transparent_crc(p_1474->g_860.s9, "p_1474->g_860.s9", print_hash_value);
    transparent_crc(p_1474->g_860.sa, "p_1474->g_860.sa", print_hash_value);
    transparent_crc(p_1474->g_860.sb, "p_1474->g_860.sb", print_hash_value);
    transparent_crc(p_1474->g_860.sc, "p_1474->g_860.sc", print_hash_value);
    transparent_crc(p_1474->g_860.sd, "p_1474->g_860.sd", print_hash_value);
    transparent_crc(p_1474->g_860.se, "p_1474->g_860.se", print_hash_value);
    transparent_crc(p_1474->g_860.sf, "p_1474->g_860.sf", print_hash_value);
    transparent_crc(p_1474->g_890.x, "p_1474->g_890.x", print_hash_value);
    transparent_crc(p_1474->g_890.y, "p_1474->g_890.y", print_hash_value);
    transparent_crc(p_1474->g_898.s0, "p_1474->g_898.s0", print_hash_value);
    transparent_crc(p_1474->g_898.s1, "p_1474->g_898.s1", print_hash_value);
    transparent_crc(p_1474->g_898.s2, "p_1474->g_898.s2", print_hash_value);
    transparent_crc(p_1474->g_898.s3, "p_1474->g_898.s3", print_hash_value);
    transparent_crc(p_1474->g_898.s4, "p_1474->g_898.s4", print_hash_value);
    transparent_crc(p_1474->g_898.s5, "p_1474->g_898.s5", print_hash_value);
    transparent_crc(p_1474->g_898.s6, "p_1474->g_898.s6", print_hash_value);
    transparent_crc(p_1474->g_898.s7, "p_1474->g_898.s7", print_hash_value);
    transparent_crc(p_1474->g_902.x, "p_1474->g_902.x", print_hash_value);
    transparent_crc(p_1474->g_902.y, "p_1474->g_902.y", print_hash_value);
    transparent_crc(p_1474->g_902.z, "p_1474->g_902.z", print_hash_value);
    transparent_crc(p_1474->g_902.w, "p_1474->g_902.w", print_hash_value);
    transparent_crc(p_1474->g_903.s0, "p_1474->g_903.s0", print_hash_value);
    transparent_crc(p_1474->g_903.s1, "p_1474->g_903.s1", print_hash_value);
    transparent_crc(p_1474->g_903.s2, "p_1474->g_903.s2", print_hash_value);
    transparent_crc(p_1474->g_903.s3, "p_1474->g_903.s3", print_hash_value);
    transparent_crc(p_1474->g_903.s4, "p_1474->g_903.s4", print_hash_value);
    transparent_crc(p_1474->g_903.s5, "p_1474->g_903.s5", print_hash_value);
    transparent_crc(p_1474->g_903.s6, "p_1474->g_903.s6", print_hash_value);
    transparent_crc(p_1474->g_903.s7, "p_1474->g_903.s7", print_hash_value);
    transparent_crc(p_1474->g_919.s0, "p_1474->g_919.s0", print_hash_value);
    transparent_crc(p_1474->g_919.s1, "p_1474->g_919.s1", print_hash_value);
    transparent_crc(p_1474->g_919.s2, "p_1474->g_919.s2", print_hash_value);
    transparent_crc(p_1474->g_919.s3, "p_1474->g_919.s3", print_hash_value);
    transparent_crc(p_1474->g_919.s4, "p_1474->g_919.s4", print_hash_value);
    transparent_crc(p_1474->g_919.s5, "p_1474->g_919.s5", print_hash_value);
    transparent_crc(p_1474->g_919.s6, "p_1474->g_919.s6", print_hash_value);
    transparent_crc(p_1474->g_919.s7, "p_1474->g_919.s7", print_hash_value);
    transparent_crc(p_1474->g_933, "p_1474->g_933", print_hash_value);
    transparent_crc(p_1474->g_1025.x, "p_1474->g_1025.x", print_hash_value);
    transparent_crc(p_1474->g_1025.y, "p_1474->g_1025.y", print_hash_value);
    transparent_crc(p_1474->g_1036, "p_1474->g_1036", print_hash_value);
    transparent_crc(p_1474->g_1039.x, "p_1474->g_1039.x", print_hash_value);
    transparent_crc(p_1474->g_1039.y, "p_1474->g_1039.y", print_hash_value);
    transparent_crc(p_1474->g_1040.s0, "p_1474->g_1040.s0", print_hash_value);
    transparent_crc(p_1474->g_1040.s1, "p_1474->g_1040.s1", print_hash_value);
    transparent_crc(p_1474->g_1040.s2, "p_1474->g_1040.s2", print_hash_value);
    transparent_crc(p_1474->g_1040.s3, "p_1474->g_1040.s3", print_hash_value);
    transparent_crc(p_1474->g_1040.s4, "p_1474->g_1040.s4", print_hash_value);
    transparent_crc(p_1474->g_1040.s5, "p_1474->g_1040.s5", print_hash_value);
    transparent_crc(p_1474->g_1040.s6, "p_1474->g_1040.s6", print_hash_value);
    transparent_crc(p_1474->g_1040.s7, "p_1474->g_1040.s7", print_hash_value);
    transparent_crc(p_1474->g_1055.x, "p_1474->g_1055.x", print_hash_value);
    transparent_crc(p_1474->g_1055.y, "p_1474->g_1055.y", print_hash_value);
    transparent_crc(p_1474->g_1055.z, "p_1474->g_1055.z", print_hash_value);
    transparent_crc(p_1474->g_1055.w, "p_1474->g_1055.w", print_hash_value);
    transparent_crc(p_1474->g_1077, "p_1474->g_1077", print_hash_value);
    transparent_crc(p_1474->g_1147.s0, "p_1474->g_1147.s0", print_hash_value);
    transparent_crc(p_1474->g_1147.s1, "p_1474->g_1147.s1", print_hash_value);
    transparent_crc(p_1474->g_1147.s2, "p_1474->g_1147.s2", print_hash_value);
    transparent_crc(p_1474->g_1147.s3, "p_1474->g_1147.s3", print_hash_value);
    transparent_crc(p_1474->g_1147.s4, "p_1474->g_1147.s4", print_hash_value);
    transparent_crc(p_1474->g_1147.s5, "p_1474->g_1147.s5", print_hash_value);
    transparent_crc(p_1474->g_1147.s6, "p_1474->g_1147.s6", print_hash_value);
    transparent_crc(p_1474->g_1147.s7, "p_1474->g_1147.s7", print_hash_value);
    transparent_crc(p_1474->g_1147.s8, "p_1474->g_1147.s8", print_hash_value);
    transparent_crc(p_1474->g_1147.s9, "p_1474->g_1147.s9", print_hash_value);
    transparent_crc(p_1474->g_1147.sa, "p_1474->g_1147.sa", print_hash_value);
    transparent_crc(p_1474->g_1147.sb, "p_1474->g_1147.sb", print_hash_value);
    transparent_crc(p_1474->g_1147.sc, "p_1474->g_1147.sc", print_hash_value);
    transparent_crc(p_1474->g_1147.sd, "p_1474->g_1147.sd", print_hash_value);
    transparent_crc(p_1474->g_1147.se, "p_1474->g_1147.se", print_hash_value);
    transparent_crc(p_1474->g_1147.sf, "p_1474->g_1147.sf", print_hash_value);
    transparent_crc(p_1474->g_1151.x, "p_1474->g_1151.x", print_hash_value);
    transparent_crc(p_1474->g_1151.y, "p_1474->g_1151.y", print_hash_value);
    transparent_crc(p_1474->g_1183.x, "p_1474->g_1183.x", print_hash_value);
    transparent_crc(p_1474->g_1183.y, "p_1474->g_1183.y", print_hash_value);
    transparent_crc(p_1474->g_1183.z, "p_1474->g_1183.z", print_hash_value);
    transparent_crc(p_1474->g_1183.w, "p_1474->g_1183.w", print_hash_value);
    transparent_crc(p_1474->g_1184.s0, "p_1474->g_1184.s0", print_hash_value);
    transparent_crc(p_1474->g_1184.s1, "p_1474->g_1184.s1", print_hash_value);
    transparent_crc(p_1474->g_1184.s2, "p_1474->g_1184.s2", print_hash_value);
    transparent_crc(p_1474->g_1184.s3, "p_1474->g_1184.s3", print_hash_value);
    transparent_crc(p_1474->g_1184.s4, "p_1474->g_1184.s4", print_hash_value);
    transparent_crc(p_1474->g_1184.s5, "p_1474->g_1184.s5", print_hash_value);
    transparent_crc(p_1474->g_1184.s6, "p_1474->g_1184.s6", print_hash_value);
    transparent_crc(p_1474->g_1184.s7, "p_1474->g_1184.s7", print_hash_value);
    transparent_crc(p_1474->g_1184.s8, "p_1474->g_1184.s8", print_hash_value);
    transparent_crc(p_1474->g_1184.s9, "p_1474->g_1184.s9", print_hash_value);
    transparent_crc(p_1474->g_1184.sa, "p_1474->g_1184.sa", print_hash_value);
    transparent_crc(p_1474->g_1184.sb, "p_1474->g_1184.sb", print_hash_value);
    transparent_crc(p_1474->g_1184.sc, "p_1474->g_1184.sc", print_hash_value);
    transparent_crc(p_1474->g_1184.sd, "p_1474->g_1184.sd", print_hash_value);
    transparent_crc(p_1474->g_1184.se, "p_1474->g_1184.se", print_hash_value);
    transparent_crc(p_1474->g_1184.sf, "p_1474->g_1184.sf", print_hash_value);
    transparent_crc(p_1474->g_1197.x, "p_1474->g_1197.x", print_hash_value);
    transparent_crc(p_1474->g_1197.y, "p_1474->g_1197.y", print_hash_value);
    transparent_crc(p_1474->g_1301.s0, "p_1474->g_1301.s0", print_hash_value);
    transparent_crc(p_1474->g_1301.s1, "p_1474->g_1301.s1", print_hash_value);
    transparent_crc(p_1474->g_1301.s2, "p_1474->g_1301.s2", print_hash_value);
    transparent_crc(p_1474->g_1301.s3, "p_1474->g_1301.s3", print_hash_value);
    transparent_crc(p_1474->g_1301.s4, "p_1474->g_1301.s4", print_hash_value);
    transparent_crc(p_1474->g_1301.s5, "p_1474->g_1301.s5", print_hash_value);
    transparent_crc(p_1474->g_1301.s6, "p_1474->g_1301.s6", print_hash_value);
    transparent_crc(p_1474->g_1301.s7, "p_1474->g_1301.s7", print_hash_value);
    transparent_crc(p_1474->g_1304.s0, "p_1474->g_1304.s0", print_hash_value);
    transparent_crc(p_1474->g_1304.s1, "p_1474->g_1304.s1", print_hash_value);
    transparent_crc(p_1474->g_1304.s2, "p_1474->g_1304.s2", print_hash_value);
    transparent_crc(p_1474->g_1304.s3, "p_1474->g_1304.s3", print_hash_value);
    transparent_crc(p_1474->g_1304.s4, "p_1474->g_1304.s4", print_hash_value);
    transparent_crc(p_1474->g_1304.s5, "p_1474->g_1304.s5", print_hash_value);
    transparent_crc(p_1474->g_1304.s6, "p_1474->g_1304.s6", print_hash_value);
    transparent_crc(p_1474->g_1304.s7, "p_1474->g_1304.s7", print_hash_value);
    transparent_crc(p_1474->g_1320, "p_1474->g_1320", print_hash_value);
    transparent_crc(p_1474->g_1327.s0, "p_1474->g_1327.s0", print_hash_value);
    transparent_crc(p_1474->g_1327.s1, "p_1474->g_1327.s1", print_hash_value);
    transparent_crc(p_1474->g_1327.s2, "p_1474->g_1327.s2", print_hash_value);
    transparent_crc(p_1474->g_1327.s3, "p_1474->g_1327.s3", print_hash_value);
    transparent_crc(p_1474->g_1327.s4, "p_1474->g_1327.s4", print_hash_value);
    transparent_crc(p_1474->g_1327.s5, "p_1474->g_1327.s5", print_hash_value);
    transparent_crc(p_1474->g_1327.s6, "p_1474->g_1327.s6", print_hash_value);
    transparent_crc(p_1474->g_1327.s7, "p_1474->g_1327.s7", print_hash_value);
    transparent_crc(p_1474->g_1330.x, "p_1474->g_1330.x", print_hash_value);
    transparent_crc(p_1474->g_1330.y, "p_1474->g_1330.y", print_hash_value);
    transparent_crc(p_1474->g_1335.x, "p_1474->g_1335.x", print_hash_value);
    transparent_crc(p_1474->g_1335.y, "p_1474->g_1335.y", print_hash_value);
    transparent_crc(p_1474->g_1335.z, "p_1474->g_1335.z", print_hash_value);
    transparent_crc(p_1474->g_1335.w, "p_1474->g_1335.w", print_hash_value);
    transparent_crc(p_1474->g_1339.x, "p_1474->g_1339.x", print_hash_value);
    transparent_crc(p_1474->g_1339.y, "p_1474->g_1339.y", print_hash_value);
    transparent_crc(p_1474->g_1339.z, "p_1474->g_1339.z", print_hash_value);
    transparent_crc(p_1474->g_1339.w, "p_1474->g_1339.w", print_hash_value);
    transparent_crc(p_1474->g_1352.s0, "p_1474->g_1352.s0", print_hash_value);
    transparent_crc(p_1474->g_1352.s1, "p_1474->g_1352.s1", print_hash_value);
    transparent_crc(p_1474->g_1352.s2, "p_1474->g_1352.s2", print_hash_value);
    transparent_crc(p_1474->g_1352.s3, "p_1474->g_1352.s3", print_hash_value);
    transparent_crc(p_1474->g_1352.s4, "p_1474->g_1352.s4", print_hash_value);
    transparent_crc(p_1474->g_1352.s5, "p_1474->g_1352.s5", print_hash_value);
    transparent_crc(p_1474->g_1352.s6, "p_1474->g_1352.s6", print_hash_value);
    transparent_crc(p_1474->g_1352.s7, "p_1474->g_1352.s7", print_hash_value);
    transparent_crc(p_1474->g_1352.s8, "p_1474->g_1352.s8", print_hash_value);
    transparent_crc(p_1474->g_1352.s9, "p_1474->g_1352.s9", print_hash_value);
    transparent_crc(p_1474->g_1352.sa, "p_1474->g_1352.sa", print_hash_value);
    transparent_crc(p_1474->g_1352.sb, "p_1474->g_1352.sb", print_hash_value);
    transparent_crc(p_1474->g_1352.sc, "p_1474->g_1352.sc", print_hash_value);
    transparent_crc(p_1474->g_1352.sd, "p_1474->g_1352.sd", print_hash_value);
    transparent_crc(p_1474->g_1352.se, "p_1474->g_1352.se", print_hash_value);
    transparent_crc(p_1474->g_1352.sf, "p_1474->g_1352.sf", print_hash_value);
    transparent_crc(p_1474->g_1398.x, "p_1474->g_1398.x", print_hash_value);
    transparent_crc(p_1474->g_1398.y, "p_1474->g_1398.y", print_hash_value);
    transparent_crc(p_1474->g_1411.s0, "p_1474->g_1411.s0", print_hash_value);
    transparent_crc(p_1474->g_1411.s1, "p_1474->g_1411.s1", print_hash_value);
    transparent_crc(p_1474->g_1411.s2, "p_1474->g_1411.s2", print_hash_value);
    transparent_crc(p_1474->g_1411.s3, "p_1474->g_1411.s3", print_hash_value);
    transparent_crc(p_1474->g_1411.s4, "p_1474->g_1411.s4", print_hash_value);
    transparent_crc(p_1474->g_1411.s5, "p_1474->g_1411.s5", print_hash_value);
    transparent_crc(p_1474->g_1411.s6, "p_1474->g_1411.s6", print_hash_value);
    transparent_crc(p_1474->g_1411.s7, "p_1474->g_1411.s7", print_hash_value);
    transparent_crc(p_1474->g_1416.s0, "p_1474->g_1416.s0", print_hash_value);
    transparent_crc(p_1474->g_1416.s1, "p_1474->g_1416.s1", print_hash_value);
    transparent_crc(p_1474->g_1416.s2, "p_1474->g_1416.s2", print_hash_value);
    transparent_crc(p_1474->g_1416.s3, "p_1474->g_1416.s3", print_hash_value);
    transparent_crc(p_1474->g_1416.s4, "p_1474->g_1416.s4", print_hash_value);
    transparent_crc(p_1474->g_1416.s5, "p_1474->g_1416.s5", print_hash_value);
    transparent_crc(p_1474->g_1416.s6, "p_1474->g_1416.s6", print_hash_value);
    transparent_crc(p_1474->g_1416.s7, "p_1474->g_1416.s7", print_hash_value);
    transparent_crc(p_1474->g_1416.s8, "p_1474->g_1416.s8", print_hash_value);
    transparent_crc(p_1474->g_1416.s9, "p_1474->g_1416.s9", print_hash_value);
    transparent_crc(p_1474->g_1416.sa, "p_1474->g_1416.sa", print_hash_value);
    transparent_crc(p_1474->g_1416.sb, "p_1474->g_1416.sb", print_hash_value);
    transparent_crc(p_1474->g_1416.sc, "p_1474->g_1416.sc", print_hash_value);
    transparent_crc(p_1474->g_1416.sd, "p_1474->g_1416.sd", print_hash_value);
    transparent_crc(p_1474->g_1416.se, "p_1474->g_1416.se", print_hash_value);
    transparent_crc(p_1474->g_1416.sf, "p_1474->g_1416.sf", print_hash_value);
    transparent_crc(p_1474->g_1429, "p_1474->g_1429", print_hash_value);
    transparent_crc(p_1474->g_1444.s0, "p_1474->g_1444.s0", print_hash_value);
    transparent_crc(p_1474->g_1444.s1, "p_1474->g_1444.s1", print_hash_value);
    transparent_crc(p_1474->g_1444.s2, "p_1474->g_1444.s2", print_hash_value);
    transparent_crc(p_1474->g_1444.s3, "p_1474->g_1444.s3", print_hash_value);
    transparent_crc(p_1474->g_1444.s4, "p_1474->g_1444.s4", print_hash_value);
    transparent_crc(p_1474->g_1444.s5, "p_1474->g_1444.s5", print_hash_value);
    transparent_crc(p_1474->g_1444.s6, "p_1474->g_1444.s6", print_hash_value);
    transparent_crc(p_1474->g_1444.s7, "p_1474->g_1444.s7", print_hash_value);
    transparent_crc(p_1474->g_1444.s8, "p_1474->g_1444.s8", print_hash_value);
    transparent_crc(p_1474->g_1444.s9, "p_1474->g_1444.s9", print_hash_value);
    transparent_crc(p_1474->g_1444.sa, "p_1474->g_1444.sa", print_hash_value);
    transparent_crc(p_1474->g_1444.sb, "p_1474->g_1444.sb", print_hash_value);
    transparent_crc(p_1474->g_1444.sc, "p_1474->g_1444.sc", print_hash_value);
    transparent_crc(p_1474->g_1444.sd, "p_1474->g_1444.sd", print_hash_value);
    transparent_crc(p_1474->g_1444.se, "p_1474->g_1444.se", print_hash_value);
    transparent_crc(p_1474->g_1444.sf, "p_1474->g_1444.sf", print_hash_value);
    transparent_crc(p_1474->v_collective, "p_1474->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 86; i++)
            transparent_crc(p_1474->l_special_values[i], "p_1474->l_special_values[i]", print_hash_value);
    transparent_crc(p_1474->l_comm_values[get_linear_local_id()], "p_1474->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1474->g_comm_values[get_linear_group_id() * 148 + get_linear_local_id()], "p_1474->g_comm_values[get_linear_group_id() * 148 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
