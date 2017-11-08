// --atomics 47 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 45,10,10 -l 3,5,10
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

__constant uint32_t permutations[10][150] = {
{63,77,6,68,11,104,143,124,95,141,25,69,121,19,0,99,40,58,80,134,29,107,24,142,131,98,122,26,59,75,10,21,51,72,115,44,144,14,5,97,4,92,112,138,12,126,119,48,1,36,9,42,85,127,30,116,132,64,37,125,89,20,128,23,53,86,113,54,8,101,88,129,105,90,84,18,47,46,55,43,81,60,91,108,39,100,106,111,79,7,133,2,56,15,38,73,110,140,22,103,109,102,49,52,139,35,147,76,135,83,61,117,31,145,93,82,123,94,96,71,17,33,65,41,28,50,130,16,137,13,3,27,148,118,74,78,87,66,32,62,146,114,57,136,70,149,120,34,67,45}, // permutation 0
{129,55,97,142,90,75,51,34,72,61,130,54,42,0,118,69,131,59,48,30,15,138,88,21,92,93,43,101,57,79,94,103,6,139,100,23,38,99,133,28,31,96,26,143,36,110,47,33,12,125,149,7,13,66,140,116,17,136,25,1,127,40,107,49,4,109,84,111,50,8,10,95,121,144,78,115,105,98,120,35,126,45,89,124,104,20,67,119,16,27,70,37,122,64,22,18,147,85,29,145,135,5,146,3,60,11,65,52,113,102,106,41,137,19,58,56,134,128,44,74,39,77,46,132,68,76,86,91,80,9,112,117,141,82,63,71,53,14,32,114,73,123,87,62,108,148,83,81,24,2}, // permutation 1
{84,68,136,20,77,52,64,73,114,57,116,8,81,18,83,59,133,127,1,54,14,6,121,149,41,94,4,91,34,89,120,45,21,110,16,100,12,148,144,102,0,80,132,113,13,104,65,141,11,87,88,32,76,122,30,139,147,98,97,42,99,108,31,107,26,51,95,75,46,72,135,74,125,22,115,142,47,27,56,71,109,140,82,61,19,101,143,7,79,35,67,138,5,43,63,145,130,36,60,126,124,2,90,48,111,23,85,10,66,105,123,119,137,50,70,103,128,49,69,93,39,25,146,86,118,15,24,37,58,78,131,38,3,117,62,92,129,112,40,96,44,33,134,53,28,9,55,17,106,29}, // permutation 2
{92,142,118,27,59,110,16,38,40,47,95,143,49,104,145,43,144,54,103,19,61,113,101,97,122,100,0,120,84,137,55,146,52,75,50,83,41,1,125,8,48,138,68,121,32,94,60,99,12,57,132,109,39,78,22,5,139,107,114,64,30,20,15,129,35,11,117,126,65,10,69,88,45,130,149,135,73,34,33,72,89,124,7,128,14,148,67,28,63,37,82,119,3,116,141,81,42,112,80,23,93,147,86,70,90,111,105,71,131,140,56,127,98,21,91,18,25,76,133,4,87,44,46,123,96,9,13,29,6,26,115,66,53,58,62,24,108,31,102,77,106,17,74,2,36,85,136,51,79,134}, // permutation 3
{106,43,64,107,68,114,113,127,126,124,33,135,4,41,6,78,31,35,96,117,75,87,88,27,22,83,12,37,123,143,128,56,42,67,54,109,20,145,134,73,19,71,136,23,94,70,60,80,98,32,77,84,50,3,86,21,121,0,69,100,10,44,29,110,97,8,5,118,13,101,25,24,99,137,2,1,38,62,48,105,132,131,74,14,36,16,119,40,130,65,53,58,122,51,9,49,138,55,108,45,144,103,139,26,39,146,52,76,90,102,140,7,112,85,142,61,147,141,59,15,95,46,79,92,30,63,133,47,104,34,28,57,11,89,17,129,120,91,111,116,148,149,81,125,93,66,115,72,82,18}, // permutation 4
{56,74,125,136,128,41,72,18,95,28,47,12,27,99,49,22,80,114,121,96,116,29,67,140,94,148,90,135,141,20,44,4,108,134,23,71,55,61,103,51,53,111,54,102,21,142,123,147,46,118,139,137,81,60,77,40,5,138,122,92,26,73,8,63,0,50,132,107,37,98,117,57,58,70,100,35,145,76,146,13,64,85,119,33,48,45,127,36,6,24,75,130,14,78,105,144,34,120,69,97,62,91,30,115,104,89,79,25,129,88,1,126,113,32,66,65,124,86,133,84,106,17,9,59,10,43,149,52,15,131,83,143,16,87,7,3,68,112,19,82,39,2,110,93,101,31,11,109,42,38}, // permutation 5
{57,75,144,83,33,85,0,9,148,72,94,18,106,126,128,54,32,52,58,3,50,28,48,129,140,105,99,21,61,123,137,44,74,67,90,24,115,135,43,7,66,149,40,22,4,107,23,84,96,124,35,11,91,29,79,136,8,38,76,39,133,112,81,127,117,139,30,88,110,132,98,16,5,27,113,46,36,53,59,125,13,12,62,87,142,97,10,119,131,47,143,49,138,71,118,69,89,45,130,15,25,34,65,63,6,60,70,145,68,78,141,146,80,26,31,51,55,41,42,111,86,64,101,73,93,116,114,2,37,104,100,17,95,109,92,19,56,122,108,82,134,77,102,1,14,147,103,120,121,20}, // permutation 6
{118,20,67,122,139,97,129,108,53,5,25,87,119,27,101,113,23,11,68,9,34,66,91,28,138,45,83,63,86,143,134,0,76,78,59,75,127,82,104,36,37,17,3,74,147,32,41,126,62,80,107,57,89,94,33,114,44,8,55,6,71,92,146,133,51,40,50,21,69,100,26,30,19,48,60,43,145,109,116,56,149,18,47,39,35,111,88,136,4,135,96,141,1,128,22,131,10,16,58,2,123,65,124,7,73,99,38,24,29,42,93,79,84,31,144,46,85,110,52,115,90,12,70,140,125,54,142,132,103,49,121,77,15,106,105,81,13,61,95,117,14,72,102,98,130,120,112,137,148,64}, // permutation 7
{83,92,13,99,109,128,94,72,41,2,107,82,145,122,54,9,74,134,85,111,66,132,139,113,0,26,32,112,5,86,141,22,14,73,39,116,45,16,27,59,127,29,62,133,60,42,38,121,138,98,15,50,137,143,110,93,115,23,75,34,30,25,56,100,19,48,140,4,11,91,97,68,104,55,120,57,119,6,24,103,88,78,65,76,17,69,84,142,105,136,64,67,31,102,37,28,8,53,40,96,144,87,81,124,33,129,35,126,58,12,47,106,51,71,135,70,44,146,52,1,3,89,131,79,21,63,148,80,147,77,61,123,43,46,20,49,114,10,36,18,101,117,108,130,125,95,7,90,149,118}, // permutation 8
{140,43,135,100,114,146,48,29,28,42,19,51,18,38,72,106,52,9,80,3,96,139,129,118,90,147,144,108,23,27,85,30,141,36,119,149,137,4,131,22,37,86,122,133,93,125,91,50,74,7,12,32,95,126,58,63,73,71,88,111,127,77,65,14,6,20,83,121,101,145,21,142,55,24,66,61,57,46,99,123,105,98,148,69,92,110,16,143,136,132,26,130,82,138,49,124,34,89,94,67,97,75,120,62,134,81,109,5,59,56,31,103,104,40,53,54,44,113,68,45,13,115,84,2,41,10,76,116,15,87,102,35,11,78,60,117,0,47,25,1,33,39,64,17,112,70,8,107,79,128} // permutation 9
};

// Seed: 1107657313

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   int8_t  f1;
   int32_t  f2;
};

struct S1 {
   int32_t  f0;
};

struct S2 {
   struct S1  f0;
   volatile int64_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   volatile uint8_t  f4;
   volatile int32_t  f5;
};

struct S3 {
   uint32_t  f0;
   uint64_t  f1;
   int32_t  f2;
   volatile int16_t  f3;
   uint64_t  f4;
   int32_t  f5;
   uint32_t  f6;
   uint32_t  f7;
   volatile int32_t  f8;
   uint32_t  f9;
};

struct S4 {
   volatile uint32_t  f0;
   struct S1  f1;
   volatile int64_t  f2;
   uint64_t  f3;
};

union U5 {
   int32_t  f0;
   struct S1  f1;
   uint16_t  f2;
   volatile struct S1  f3;
   struct S4  f4;
};

struct S6 {
    volatile VECTOR(int8_t, 2) g_22;
    volatile VECTOR(int8_t, 16) g_23;
    VECTOR(uint64_t, 16) g_24;
    VECTOR(uint64_t, 2) g_26;
    VECTOR(uint64_t, 2) g_27;
    VECTOR(uint64_t, 8) g_28;
    VECTOR(int16_t, 16) g_58;
    volatile VECTOR(int16_t, 2) g_59;
    volatile union U5 g_62[10];
    VECTOR(int8_t, 8) g_63;
    int8_t g_77[7];
    VECTOR(uint8_t, 2) g_85;
    int64_t g_105[2][8][5];
    uint16_t g_109;
    struct S0 g_119[6];
    VECTOR(uint8_t, 8) g_122;
    VECTOR(int64_t, 8) g_129;
    volatile struct S4 g_137;
    volatile VECTOR(uint32_t, 16) g_143;
    int32_t g_150;
    volatile struct S4 * volatile g_153;
    struct S3 g_157;
    struct S3 *g_158;
    union U5 g_179;
    int32_t * volatile g_195[5][7];
    struct S2 g_199;
    struct S0 * volatile g_215;
    volatile struct S4 g_216;
    volatile struct S4 * volatile g_217;
    volatile struct S4 * volatile g_218;
    volatile int8_t ** volatile g_219;
    VECTOR(uint32_t, 16) g_226;
    int32_t *g_235;
    int32_t ** volatile g_234;
    struct S3 g_267;
    struct S3 g_269;
    uint32_t *g_278;
    uint32_t **g_277;
    VECTOR(int64_t, 2) g_306;
    volatile struct S2 g_319;
    uint64_t *g_327;
    uint16_t g_336;
    uint16_t g_339;
    volatile uint32_t g_358[2][5];
    volatile uint32_t * volatile g_357;
    volatile uint32_t * volatile * volatile g_356[4];
    struct S4 g_365;
    struct S4 * volatile g_366;
    struct S2 g_375;
    uint32_t *g_382[8];
    int32_t ** volatile g_390;
    volatile struct S3 g_399;
    volatile VECTOR(int32_t, 4) g_409;
    VECTOR(int32_t, 16) g_414;
    struct S4 g_422;
    uint8_t g_424;
    int32_t * volatile g_438;
    int32_t * volatile g_439[8][9][3];
    int32_t * volatile g_440[7];
    struct S1 *g_446;
    struct S1 ** volatile g_445;
    int32_t *g_460;
    struct S2 g_505;
    struct S2 *g_522[6];
    struct S2 ** volatile g_521;
    VECTOR(int16_t, 2) g_528;
    volatile struct S4 g_566[7];
    volatile VECTOR(int8_t, 16) g_616;
    volatile VECTOR(int8_t, 8) g_660;
    VECTOR(uint8_t, 16) g_681;
    volatile VECTOR(int8_t, 16) g_688;
    struct S2 g_690;
    struct S2 * volatile g_691[1];
    struct S2 * volatile g_692;
    struct S2 * volatile g_693;
    VECTOR(int32_t, 2) g_696;
    struct S2 g_727;
    uint32_t g_730;
    struct S2 g_764[9][1][10];
    struct S2 g_766;
    int32_t * volatile g_776[5][5];
    VECTOR(int32_t, 2) g_793;
    volatile struct S4 g_812;
    volatile struct S4 g_813;
    int32_t g_964;
    volatile VECTOR(uint64_t, 4) g_977;
    VECTOR(int64_t, 2) g_1025;
    struct S3 g_1035;
    union U5 *g_1047;
    union U5 *g_1048[4];
    struct S0 * volatile g_1052;
    struct S0 * volatile g_1053[3];
    struct S0 * volatile g_1055;
    uint8_t *g_1058;
    volatile uint32_t * volatile *g_1084;
    volatile uint32_t * volatile * volatile *g_1083[4][10][2];
    volatile uint32_t * volatile * volatile ** volatile g_1082;
    volatile uint8_t g_1100;
    struct S3 g_1167[8];
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
struct S3  func_1(struct S6 * p_1168);
int16_t  func_5(int8_t  p_6, struct S1  p_7, int32_t  p_8, struct S6 * p_1168);
struct S0  func_13(int32_t  p_14, int32_t  p_15, struct S1  p_16, int64_t  p_17, struct S6 * p_1168);
uint16_t  func_33(uint32_t  p_34, struct S6 * p_1168);
uint16_t  func_37(int32_t  p_38, int32_t  p_39, uint32_t  p_40, int32_t  p_41, int64_t  p_42, struct S6 * p_1168);
struct S2  func_43(uint64_t  p_44, uint32_t  p_45, struct S1  p_46, uint32_t  p_47, uint8_t  p_48, struct S6 * p_1168);
int8_t  func_52(int32_t  p_53, int64_t  p_54, struct S6 * p_1168);
int8_t  func_64(int16_t  p_65, struct S1  p_66, uint64_t  p_67, struct S6 * p_1168);
uint32_t  func_90(uint8_t  p_91, struct S0  p_92, int8_t * p_93, int8_t * p_94, struct S6 * p_1168);
int32_t  func_101(uint64_t  p_102, int8_t * p_103, struct S6 * p_1168);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1168->g_comm_values p_1168->g_22 p_1168->g_23 p_1168->g_24 p_1168->g_26 p_1168->g_27 p_1168->g_28 p_1168->g_58 p_1168->g_59 p_1168->g_62 p_1168->g_63 p_1168->l_comm_values p_1168->g_109 p_1168->g_119 p_1168->g_137 p_1168->g_105 p_1168->g_150 p_1168->g_153 p_1168->g_129 p_1168->g_157.f0 p_1168->g_157.f2 p_1168->g_179 p_1168->g_122 p_1168->g_85 p_1168->g_199 p_1168->g_215 p_1168->g_216 p_1168->g_218 p_1168->g_219 p_1168->g_234 p_1168->g_235 p_1168->g_157.f5 p_1168->g_267 p_1168->g_277 p_1168->g_278 p_1168->g_179.f2 p_1168->g_365 p_1168->g_366 p_1168->g_319 p_1168->g_375 p_1168->g_77 p_1168->g_179.f0 p_1168->g_390 p_1168->g_399 p_1168->g_424 p_1168->g_445 p_1168->g_422.f3 p_1168->g_460 p_1168->g_157.f9 p_1168->g_179.f4.f1.f0 p_1168->g_505 p_1168->g_269.f0 p_1168->g_521 p_1168->g_528 p_1168->g_339 p_1168->g_269.f4 p_1168->g_327 p_1168->g_566 p_1168->g_157.f4 p_1168->g_616 p_1168->g_382 p_1168->g_179.f4.f2 p_1168->g_414 p_1168->g_660 p_1168->g_179.f4.f0 p_1168->g_681 p_1168->g_688 p_1168->g_690 p_1168->g_696 p_1168->g_727 p_1168->g_730 p_1168->g_157.f8 p_1168->g_226 p_1168->g_764 p_1168->g_522 p_1168->g_179.f1.f0 p_1168->g_793 p_1168->g_812 p_1168->g_157.f1 p_1168->g_964 p_1168->g_269.f5 p_1168->g_1035 p_1168->g_269.f3 p_1168->g_766.f0.f0 p_1168->g_422.f1.f0 p_1168->g_1055 p_1168->g_1082 p_1168->g_1100 p_1168->g_1167
 * writes: p_1168->g_77 p_1168->g_105 p_1168->g_109 p_1168->g_150 p_1168->g_62.f4 p_1168->g_122 p_1168->g_158 p_1168->g_157.f5 p_1168->g_157.f0 p_1168->g_58 p_1168->g_24 p_1168->g_195 p_1168->g_157.f7 p_1168->g_199 p_1168->g_179.f1.f0 p_1168->g_119 p_1168->g_216 p_1168->g_235 p_1168->g_269 p_1168->g_277 p_1168->g_267.f0 p_1168->g_179.f2 p_1168->g_179.f4 p_1168->g_365.f3 p_1168->g_382 p_1168->g_267.f5 p_1168->g_179.f0 p_1168->g_336 p_1168->g_446 p_1168->g_422.f3 p_1168->g_460 p_1168->g_157.f9 p_1168->g_157.f2 p_1168->g_365.f1.f0 p_1168->g_267.f4 p_1168->g_522 p_1168->g_157.f4 p_1168->g_267.f1 p_1168->g_424 p_1168->g_375 p_1168->g_528 p_1168->g_339 p_1168->g_766 p_1168->g_727.f3 p_1168->g_813 p_1168->g_690.f0.f0 p_1168->g_157.f1 p_1168->g_964 p_1168->g_267.f6 p_1168->g_267.f9 p_1168->g_1035.f4 p_1168->g_1047 p_1168->g_1048 p_1168->g_1035.f6 p_1168->g_1058 p_1168->g_63
 */
struct S3  func_1(struct S6 * p_1168)
{ /* block id: 4 */
    VECTOR(uint64_t, 4) l_25 = (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 0UL), 0UL);
    VECTOR(uint64_t, 8) l_29 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xFF2B9ACCE3044B13L), 0xFF2B9ACCE3044B13L), 0xFF2B9ACCE3044B13L, 1UL, 0xFF2B9ACCE3044B13L);
    struct S0 l_30 = {0x57F9B64A474477D7L,-1L,0x40774064L};
    VECTOR(int8_t, 16) l_31 = (VECTOR(int8_t, 16))(0x65L, (VECTOR(int8_t, 4))(0x65L, (VECTOR(int8_t, 2))(0x65L, 0x01L), 0x01L), 0x01L, 0x65L, 0x01L, (VECTOR(int8_t, 2))(0x65L, 0x01L), (VECTOR(int8_t, 2))(0x65L, 0x01L), 0x65L, 0x01L, 0x65L, 0x01L);
    VECTOR(int8_t, 8) l_32 = (VECTOR(int8_t, 8))(0x55L, (VECTOR(int8_t, 4))(0x55L, (VECTOR(int8_t, 2))(0x55L, 0x59L), 0x59L), 0x59L, 0x55L, 0x59L);
    int32_t l_695 = 7L;
    uint16_t *l_732[8][1][9] = {{{&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336,&p_1168->g_109,&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336}},{{&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336,&p_1168->g_109,&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336}},{{&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336,&p_1168->g_109,&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336}},{{&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336,&p_1168->g_109,&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336}},{{&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336,&p_1168->g_109,&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336}},{{&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336,&p_1168->g_109,&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336}},{{&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336,&p_1168->g_109,&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336}},{{&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336,&p_1168->g_109,&p_1168->g_109,&p_1168->g_336,&p_1168->g_339,&p_1168->g_336}}};
    uint32_t l_733 = 0xF0C1DBC7L;
    uint64_t *l_734 = &p_1168->g_179.f4.f3;
    struct S1 l_735 = {0x67CC4596L};
    int32_t *l_963 = &p_1168->g_964;
    uint8_t l_976 = 0x6DL;
    uint32_t ***l_978 = &p_1168->g_277;
    uint32_t ***l_1072[6][1][1];
    int32_t l_1085 = (-5L);
    uint16_t l_1091[10][10][2];
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_1072[i][j][k] = &p_1168->g_277;
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
                l_1091[i][j][k] = 65527UL;
        }
    }
    (*l_963) |= ((safe_unary_minus_func_uint32_t_u(((*p_1168->g_278) = (((((safe_rshift_func_int16_t_s_s(func_5((p_1168->g_comm_values[p_1168->tid] == ((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((safe_div_func_uint8_t_u_u((func_13(((safe_add_func_uint8_t_u_u((((*l_734) = (((safe_lshift_func_uint8_t_u_s((((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 16))(p_1168->g_22.yyxyyxyxxyxyxyyy)).hi, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))((-10L), 0x5FL, 1L, ((VECTOR(int8_t, 2))(p_1168->g_23.s88)), 0x28L, (-2L), 0x3FL)).odd)).zxwzwyww))).even, (int8_t)((((p_1168->g_22.y > ((0L <= (((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 16))(p_1168->g_24.sfcc72fddd0c6a332)).se5, ((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 8))(l_25.yxyyywxz)).s0076756651127520, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(p_1168->g_26.yyyy)).hi)).xxyyxyxxxyxyyyxy))).even, ((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(p_1168->g_27.xxyxyxyyyxxxyyyx)))).even)), ((VECTOR(uint64_t, 4))(p_1168->g_28.s4176)).zywyzxzy)))))).s14, ((VECTOR(uint64_t, 16))(l_29.s1070775767514231)).s3f))).hi | p_1168->g_27.y)) || p_1168->g_28.s6)) >= p_1168->g_27.y) || (l_30 , (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_31.se83513fe)).hi)).xxyywyxy, ((VECTOR(int8_t, 4))(l_32.s1552)).yxyzwwww))), ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(0x05L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 16))(0x51L, ((VECTOR(int8_t, 2))(0x56L, (-1L))), 8L, ((p_1168->g_339 = (~func_33((l_695 = ((*p_1168->g_278) = (safe_mul_func_uint16_t_u_u(func_37(l_31.s6, p_1168->g_26.y, l_25.z, l_29.s5, p_1168->g_28.s6, p_1168), l_31.sc)))), p_1168))) <= l_30.f1), l_733, ((VECTOR(int8_t, 2))(0x5DL)), 0x1DL, l_32.s0, (-7L), (-4L), (-10L), l_30.f0, 1L, 0x23L)).odd, ((VECTOR(int8_t, 8))(1L))))))).hi)), ((VECTOR(int8_t, 2))(0x34L)), (-7L))).even, ((VECTOR(int8_t, 4))(0x03L))))), (int8_t)l_31.s8))).xxywyyxwzxwwyzxy, ((VECTOR(int8_t, 16))(3L)), ((VECTOR(int8_t, 16))(1L))))).s94f0)).lo, ((VECTOR(int8_t, 2))(0x1CL))))), 5L, 2L, (-1L), ((VECTOR(int8_t, 2))(0x13L)), 0x08L)).sc < p_1168->g_28.s7))) , p_1168->g_319.f0.f0)))), l_32.s5, l_32.s4, 0x3AL, 1L, 0x39L, p_1168->g_157.f8, ((VECTOR(int8_t, 4))((-8L))), 0x2AL, 0x15L)).s2 != 0x34L) > FAKE_DIVERGE(p_1168->local_1_offset, get_local_id(1), 10)) , 0x73L), 1)) == 0x28L) | 8L)) == FAKE_DIVERGE(p_1168->group_1_offset, get_group_id(1), 10)), p_1168->g_226.s0)) != 0xE76C7BB1F04A012FL), l_32.s0, l_735, l_31.sd, p_1168) , 0x53L), l_31.sa)), ((VECTOR(int16_t, 2))(0x6CACL)), 4L)).yyyzwxwxyywzzywx)).s00e7)).x, 0x366BL)) != l_31.s1)), l_735, l_30.f1, p_1168), l_32.s0)) != p_1168->g_793.x) & l_733) | 0L) , FAKE_DIVERGE(p_1168->group_2_offset, get_group_id(2), 10))))) , l_31.sd);
    for (p_1168->g_267.f6 = 7; (p_1168->g_267.f6 < 51); p_1168->g_267.f6 = safe_add_func_uint16_t_u_u(p_1168->g_267.f6, 6))
    { /* block id: 472 */
        uint32_t **l_972 = &p_1168->g_382[1];
        uint32_t **l_973 = &p_1168->g_382[4];
        int32_t l_987 = 3L;
        uint8_t *l_1056 = &p_1168->g_424;
        uint8_t l_1094 = 0xABL;
        int8_t *l_1099 = &l_30.f1;
        int8_t **l_1098 = &l_1099;
        int8_t ***l_1097[7][5] = {{&l_1098,(void*)0,&l_1098,&l_1098,&l_1098},{&l_1098,(void*)0,&l_1098,&l_1098,&l_1098},{&l_1098,(void*)0,&l_1098,&l_1098,&l_1098},{&l_1098,(void*)0,&l_1098,&l_1098,&l_1098},{&l_1098,(void*)0,&l_1098,&l_1098,&l_1098},{&l_1098,(void*)0,&l_1098,&l_1098,&l_1098},{&l_1098,(void*)0,&l_1098,&l_1098,&l_1098}};
        int i, j;
        for (p_1168->g_157.f4 = (-11); (p_1168->g_157.f4 > 8); p_1168->g_157.f4 = safe_add_func_uint64_t_u_u(p_1168->g_157.f4, 3))
        { /* block id: 475 */
            uint64_t l_969 = 0x88E08E86F0EC8973L;
            struct S1 l_1000[7] = {{-1L},{1L},{-1L},{-1L},{1L},{-1L},{-1L}};
            uint8_t l_1005[4];
            uint8_t *l_1059 = (void*)0;
            int i;
            for (i = 0; i < 4; i++)
                l_1005[i] = 247UL;
            l_969 |= (*l_963);
            (*l_963) &= (safe_add_func_int32_t_s_s((((l_972 = &p_1168->g_382[2]) == l_973) & ((safe_div_func_uint64_t_u_u(((!l_976) , p_1168->g_730), ((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(p_1168->g_977.yzzyxxxyzxxxwyzy)))).sd0))).xxxxxxxy, ((VECTOR(uint64_t, 2))(0UL, 0xD6B6D2DC081CAE53L)).yxxxxxxy))).s6)) ^ (0xD3L & p_1168->g_727.f0.f0))), ((l_978 = &p_1168->g_277) != (p_1168->g_269.f5 , &p_1168->g_277))));
            for (p_1168->g_267.f9 = (-9); (p_1168->g_267.f9 != 44); p_1168->g_267.f9 = safe_add_func_uint64_t_u_u(p_1168->g_267.f9, 4))
            { /* block id: 482 */
                int64_t l_1001 = 0x09482D571F175D4DL;
                uint32_t **l_1022 = &p_1168->g_382[6];
                int32_t *l_1049 = (void*)0;
                if (((safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((l_987 || (safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((l_987 < (safe_add_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), ((((safe_lshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s(0x3FB50CCF4ADCC7E1L, (+(l_969 && (((0x4832L <= (0x9C4663FCL == (l_1000[2] , ((void*)0 == &p_1168->g_269)))) <= 4UL) <= l_1001))))), 1)) && 247UL) <= 5UL) || 4294967295UL)))), l_1001)) & GROUP_DIVERGE(1, 1)), 0UL))), (*l_963))) >= FAKE_DIVERGE(p_1168->local_2_offset, get_local_id(2), 10)), (*l_963))), l_1001)) && (-1L)))
                { /* block id: 483 */
                    int32_t l_1004 = 0x1D942420L;
                    for (p_1168->g_157.f2 = 0; (p_1168->g_157.f2 <= 12); p_1168->g_157.f2 = safe_add_func_int64_t_s_s(p_1168->g_157.f2, 4))
                    { /* block id: 486 */
                        (*l_963) ^= ((VECTOR(int32_t, 2))(7L, 0x4FC77170L)).odd;
                        if (l_1004)
                            continue;
                    }
                }
                else
                { /* block id: 490 */
                    uint64_t **l_1034 = &l_734;
                    uint64_t *l_1042 = &p_1168->g_1035.f4;
                    int16_t *l_1045[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_1046 = (-1L);
                    int i;
                    ++l_1005[1];
                    (*l_963) = (safe_rshift_func_uint16_t_u_u((p_1168->g_339--), ((((safe_mul_func_int32_t_s_s((safe_div_func_int64_t_s_s(0x455040C767409DA4L, GROUP_DIVERGE(2, 1))), ((**p_1168->g_277) < FAKE_DIVERGE(p_1168->global_0_offset, get_global_id(0), 10)))) < (safe_mod_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((((void*)0 == l_1022) | (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 2))(p_1168->g_1025.xy)).lo, ((((safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((l_987 = (safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((p_1168->g_327 == ((*l_1034) = p_1168->g_327)), (p_1168->g_1035 , (safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s(((p_1168->g_63.s5 ^ ((++(*l_1042)) , l_987)) > 2UL), p_1168->g_269.f3)), p_1168->g_1035.f5)), (-6L)))))), p_1168->g_119[3].f1))) , p_1168->g_766.f0.f0), l_1005[3])), l_1046)) , 0x4FCF829B77525624L) >= l_1001) || l_987)))) || l_969), GROUP_DIVERGE(0, 1))), p_1168->g_1035.f7)), l_969))) & p_1168->g_422.f1.f0) < (*l_963))));
                }
                p_1168->g_1048[2] = (p_1168->g_1047 = &p_1168->g_179);
                (*p_1168->g_390) = l_1049;
            }
            for (p_1168->g_1035.f6 = (-5); (p_1168->g_1035.f6 >= 54); p_1168->g_1035.f6++)
            { /* block id: 504 */
                struct S0 *l_1054 = (void*)0;
                uint8_t **l_1057 = (void*)0;
                int32_t l_1060[1];
                uint32_t ****l_1073 = &l_978;
                uint32_t ****l_1081[9][6][4] = {{{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0}},{{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0}},{{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0}},{{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0}},{{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0}},{{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0}},{{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0}},{{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0}},{{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0},{&l_1072[3][0][0],&l_1072[3][0][0],(void*)0,(void*)0}}};
                uint32_t *****l_1080 = &l_1081[7][3][1];
                int8_t *l_1086[1][3][6] = {{{&l_30.f1,&l_30.f1,&l_30.f1,&l_30.f1,&l_30.f1,&l_30.f1},{&l_30.f1,&l_30.f1,&l_30.f1,&l_30.f1,&l_30.f1,&l_30.f1},{&l_30.f1,&l_30.f1,&l_30.f1,&l_30.f1,&l_30.f1,&l_30.f1}}};
                int16_t *l_1087[9][10];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1060[i] = 0L;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_1087[i][j] = (void*)0;
                }
                (*p_1168->g_1055) = (*p_1168->g_215);
                atomic_or(&p_1168->l_atomic_reduction[0], ((((((p_1168->g_1058 = l_1056) != (l_1059 = l_1056)) <= l_1060[0]) > (((safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((-1L))), ((safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((0x14L && ((safe_lshift_func_int8_t_s_s((((*l_1073) = l_1072[3][0][0]) != l_1072[3][0][0]), 4)) | (safe_lshift_func_uint16_t_u_s((p_1168->g_336 = (safe_mul_func_int16_t_s_s((p_1168->g_58.sb ^= ((p_1168->g_77[4] = (p_1168->g_63.s3 = (!(((*l_963) = ((safe_sub_func_uint16_t_u_u((p_1168->g_339 |= 0x8F2AL), ((((*l_1080) = l_1073) == p_1168->g_1082) && l_1000[2].f0))) || l_1060[0])) == l_1085)))) <= p_1168->g_27.y)), FAKE_DIVERGE(p_1168->group_1_offset, get_group_id(1), 10)))), 3)))), l_1005[1])), (*p_1168->g_278))) || (*l_963)))) != l_1000[2].f0), GROUP_DIVERGE(1, 1))) == l_1060[0]) <= l_1005[1])) && p_1168->g_216.f0) == p_1168->g_26.x));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1168->v_collective += p_1168->l_atomic_reduction[0];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
        }
        (*l_963) = (safe_unary_minus_func_uint32_t_u((8L < (safe_rshift_func_uint16_t_u_s(l_1091[0][4][1], (safe_sub_func_int8_t_s_s(l_1094, ((safe_lshift_func_int8_t_s_s(((((void*)0 == l_1097[3][0]) && (&p_1168->g_1082 == (void*)0)) & p_1168->g_1100), p_1168->g_422.f1.f0)) <= l_1094))))))));
        if (l_987)
            break;
        if ((atomic_inc(&p_1168->l_atomic_input[10]) == 2))
        { /* block id: 522 */
            uint8_t l_1101[1];
            int64_t l_1104 = 0x0B9AEA774F547845L;
            uint16_t l_1105 = 0xB231L;
            int i;
            for (i = 0; i < 1; i++)
                l_1101[i] = 253UL;
            --l_1101[0];
            ++l_1105;
            for (l_1101[0] = 0; (l_1101[0] < 22); ++l_1101[0])
            { /* block id: 527 */
                int32_t l_1110 = 0x4F939827L;
                uint8_t l_1164 = 0UL;
                for (l_1110 = 23; (l_1110 > (-8)); l_1110--)
                { /* block id: 530 */
                    int32_t l_1113[8] = {0x3072DFCFL,0x7510DE9CL,0x3072DFCFL,0x3072DFCFL,0x7510DE9CL,0x3072DFCFL,0x3072DFCFL,0x7510DE9CL};
                    int i;
                    for (l_1113[0] = 0; (l_1113[0] < 9); l_1113[0] = safe_add_func_uint64_t_u_u(l_1113[0], 1))
                    { /* block id: 533 */
                        uint32_t l_1116 = 0x4596A698L;
                        VECTOR(int32_t, 4) l_1119 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x2C9739E9L), 0x2C9739E9L);
                        struct S1 l_1120 = {1L};
                        struct S1 l_1121 = {7L};
                        VECTOR(int64_t, 4) l_1122 = (VECTOR(int64_t, 4))(0x09909F57152FF2D3L, (VECTOR(int64_t, 2))(0x09909F57152FF2D3L, (-1L)), (-1L));
                        int16_t l_1123 = 1L;
                        int64_t l_1124 = (-1L);
                        int16_t l_1125 = 1L;
                        VECTOR(uint64_t, 8) l_1126 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 8UL), 8UL), 8UL, 18446744073709551615UL, 8UL);
                        struct S0 l_1127 = {0L,-1L,0x32326546L};
                        VECTOR(int32_t, 2) l_1128 = (VECTOR(int32_t, 2))(0x06755FF3L, 1L);
                        int64_t l_1129 = 0x0A6087ACF8C18669L;
                        uint32_t l_1130 = 0x1A35518AL;
                        VECTOR(int32_t, 4) l_1131 = (VECTOR(int32_t, 4))(0x71660551L, (VECTOR(int32_t, 2))(0x71660551L, 0x10F3B216L), 0x10F3B216L);
                        VECTOR(int32_t, 4) l_1132 = (VECTOR(int32_t, 4))(0x5786EB7EL, (VECTOR(int32_t, 2))(0x5786EB7EL, (-4L)), (-4L));
                        VECTOR(int32_t, 16) l_1133 = (VECTOR(int32_t, 16))(0x5202EC08L, (VECTOR(int32_t, 4))(0x5202EC08L, (VECTOR(int32_t, 2))(0x5202EC08L, 1L), 1L), 1L, 0x5202EC08L, 1L, (VECTOR(int32_t, 2))(0x5202EC08L, 1L), (VECTOR(int32_t, 2))(0x5202EC08L, 1L), 0x5202EC08L, 1L, 0x5202EC08L, 1L);
                        VECTOR(int32_t, 4) l_1134 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5BF5DF09L), 0x5BF5DF09L);
                        VECTOR(int32_t, 16) l_1135 = (VECTOR(int32_t, 16))(0x4CE432A8L, (VECTOR(int32_t, 4))(0x4CE432A8L, (VECTOR(int32_t, 2))(0x4CE432A8L, 0x261F277BL), 0x261F277BL), 0x261F277BL, 0x4CE432A8L, 0x261F277BL, (VECTOR(int32_t, 2))(0x4CE432A8L, 0x261F277BL), (VECTOR(int32_t, 2))(0x4CE432A8L, 0x261F277BL), 0x4CE432A8L, 0x261F277BL, 0x4CE432A8L, 0x261F277BL);
                        VECTOR(int32_t, 2) l_1136 = (VECTOR(int32_t, 2))(5L, (-1L));
                        int32_t l_1137 = 0L;
                        int32_t l_1138 = 0x48586688L;
                        uint64_t l_1141 = 0xCA49B4746B8730D8L;
                        VECTOR(int32_t, 4) l_1142 = (VECTOR(int32_t, 4))(0x6CC93132L, (VECTOR(int32_t, 2))(0x6CC93132L, 1L), 1L);
                        uint16_t l_1143 = 0x1F95L;
                        int32_t l_1144 = 0x2128F012L;
                        VECTOR(int32_t, 2) l_1145 = (VECTOR(int32_t, 2))(0x718D0A41L, 0L);
                        VECTOR(int32_t, 4) l_1146 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0C2F5B00L), 0x0C2F5B00L);
                        VECTOR(int32_t, 2) l_1147 = (VECTOR(int32_t, 2))((-2L), (-1L));
                        int8_t l_1148 = (-1L);
                        VECTOR(int32_t, 4) l_1149 = (VECTOR(int32_t, 4))(0x74F1BAEDL, (VECTOR(int32_t, 2))(0x74F1BAEDL, (-7L)), (-7L));
                        VECTOR(int32_t, 4) l_1150 = (VECTOR(int32_t, 4))(0x18BE91CAL, (VECTOR(int32_t, 2))(0x18BE91CAL, 7L), 7L);
                        VECTOR(int32_t, 16) l_1151 = (VECTOR(int32_t, 16))(0x355CB673L, (VECTOR(int32_t, 4))(0x355CB673L, (VECTOR(int32_t, 2))(0x355CB673L, 0x7656188FL), 0x7656188FL), 0x7656188FL, 0x355CB673L, 0x7656188FL, (VECTOR(int32_t, 2))(0x355CB673L, 0x7656188FL), (VECTOR(int32_t, 2))(0x355CB673L, 0x7656188FL), 0x355CB673L, 0x7656188FL, 0x355CB673L, 0x7656188FL);
                        VECTOR(int32_t, 8) l_1152 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x157369C7L), 0x157369C7L), 0x157369C7L, 0L, 0x157369C7L);
                        VECTOR(int32_t, 16) l_1153 = (VECTOR(int32_t, 16))(0x13B8CA3DL, (VECTOR(int32_t, 4))(0x13B8CA3DL, (VECTOR(int32_t, 2))(0x13B8CA3DL, 2L), 2L), 2L, 0x13B8CA3DL, 2L, (VECTOR(int32_t, 2))(0x13B8CA3DL, 2L), (VECTOR(int32_t, 2))(0x13B8CA3DL, 2L), 0x13B8CA3DL, 2L, 0x13B8CA3DL, 2L);
                        int32_t l_1154 = 0L;
                        uint64_t l_1155[6][9][4] = {{{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL}},{{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL}},{{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL}},{{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL}},{{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL}},{{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL},{0x0C8F4C8A13DC6173L,0x37410B5D03AF6DE7L,18446744073709551615UL,18446744073709551615UL}}};
                        struct S1 l_1156 = {0x56F0086CL};
                        struct S1 l_1157 = {-3L};
                        int32_t *l_1158 = (void*)0;
                        int32_t *l_1159[2][5];
                        int32_t *l_1160 = (void*)0;
                        int16_t l_1161 = 0x6F14L;
                        int8_t l_1162 = 8L;
                        int32_t *l_1163 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_1159[i][j] = (void*)0;
                        }
                        l_1116++;
                        l_1160 = (((VECTOR(int32_t, 2))(l_1119.yz)).even , (l_1159[0][3] = ((((l_1123 = ((l_1121 = l_1120) , (l_1122.z = ((VECTOR(int64_t, 8))(l_1122.zyxywxyx)).s6))) , (((l_1125 &= l_1124) , ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_1126.s12)).xxxy)).z) , l_1127)) , (l_1157 = ((l_1155[3][1][3] &= ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1128.xyxyxxyx)).s13)), l_1129, l_1130, 0x7AB59822L, ((VECTOR(int32_t, 2))(l_1131.ww)), 1L)).s5420743432656457, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1132.yxyz)), ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(l_1133.s6f765735)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1134.wxwx)).xzxxzxyw)).odd, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1135.s12)).yyyx)).even)).yyyxxyyx)), ((VECTOR(int32_t, 2))(l_1136.yx)).xxyyxyyy))).lo))), 0L, ((l_1116++) , (l_1131.w = l_1141)), (-1L), 4L)))).s36)).yyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1142.xyzx)).wzzwwxzzwwyyzwyw)))))).sf720))), 0x756D70D7L, (l_1143 , l_1144), ((VECTOR(int32_t, 2))(l_1145.xx)), (l_1148 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x69FA2DB5L, 0x219C1F8DL, ((VECTOR(int32_t, 2))(l_1146.xz)), ((VECTOR(int32_t, 2))(l_1147.yy)), 0x56142C71L, 3L)).s11)).odd), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(0x6BA9A166L, ((VECTOR(int32_t, 2))(l_1149.xx)), 0x3429DB98L)).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(l_1150.ywxzxwzy)).s6654242704125615, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1151.s82)).yxyx)).yxyyyzww)).s7523646322155056))).hi)).s02))))), (-2L))).s4b)).yxxxyyxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1152.s4536)).ywxyyzwx)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1153.sc5e5)), 0x0844BDB5L, 8L, ((VECTOR(int32_t, 8))(0x4B340A31L)), 0L, 0x101CFB27L)).even))).s66, ((VECTOR(int32_t, 2))((-6L))), ((VECTOR(int32_t, 2))(1L))))).yxyxxyxxxyxxxyxy, ((VECTOR(int32_t, 16))(1L))))).s4e)).yyyx)))), 1L, l_1154, 0x1A369A3DL, (-1L))))).s11)), ((VECTOR(int32_t, 2))(0L))))).lo) , l_1156))) , l_1158)));
                        l_1162 &= l_1161;
                        l_1163 = (void*)0;
                    }
                }
                ++l_1164;
            }
            unsigned int result = 0;
            int l_1101_i0;
            for (l_1101_i0 = 0; l_1101_i0 < 1; l_1101_i0++) {
                result += l_1101[l_1101_i0];
            }
            result += l_1104;
            result += l_1105;
            atomic_add(&p_1168->l_special_values[10], result);
        }
        else
        { /* block id: 552 */
            (1 + 1);
        }
    }
    return p_1168->g_1167[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1168->g_690.f2
 * writes: p_1168->g_157.f5
 */
int16_t  func_5(int8_t  p_6, struct S1  p_7, int32_t  p_8, struct S6 * p_1168)
{ /* block id: 464 */
    int32_t *l_957 = (void*)0;
    int32_t *l_958 = &p_1168->g_157.f5;
    int32_t *l_959[4] = {&p_1168->g_179.f0,&p_1168->g_179.f0,&p_1168->g_179.f0,&p_1168->g_179.f0};
    VECTOR(uint32_t, 16) l_960 = (VECTOR(uint32_t, 16))(0x62D40CF7L, (VECTOR(uint32_t, 4))(0x62D40CF7L, (VECTOR(uint32_t, 2))(0x62D40CF7L, 7UL), 7UL), 7UL, 0x62D40CF7L, 7UL, (VECTOR(uint32_t, 2))(0x62D40CF7L, 7UL), (VECTOR(uint32_t, 2))(0x62D40CF7L, 7UL), 0x62D40CF7L, 7UL, 0x62D40CF7L, 7UL);
    int i;
    --l_960.s2;
    (*l_958) = p_8;
    return p_1168->g_690.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1168->g_375.f0.f0 p_1168->g_764 p_1168->g_424 p_1168->g_521 p_1168->g_522 p_1168->g_179.f1.f0 p_1168->g_27 p_1168->g_390 p_1168->g_235 p_1168->g_267.f5 p_1168->g_277 p_1168->g_278 p_1168->g_267.f0 p_1168->g_793 p_1168->g_812 p_1168->g_157.f1
 * writes: p_1168->g_375.f0.f0 p_1168->g_766 p_1168->g_424 p_1168->g_235 p_1168->g_179.f1.f0 p_1168->g_727.f3 p_1168->g_267.f5 p_1168->g_813 p_1168->g_690.f0.f0 p_1168->g_157.f1
 */
struct S0  func_13(int32_t  p_14, int32_t  p_15, struct S1  p_16, int64_t  p_17, struct S6 * p_1168)
{ /* block id: 332 */
    int32_t l_738[5];
    struct S2 *l_772 = (void*)0;
    struct S0 l_956 = {-1L,0x6FL,-1L};
    int i;
    for (i = 0; i < 5; i++)
        l_738[i] = 0L;
    for (p_1168->g_375.f0.f0 = 0; (p_1168->g_375.f0.f0 <= 9); ++p_1168->g_375.f0.f0)
    { /* block id: 335 */
        int8_t l_768[1][6] = {{3L,3L,3L,3L,3L,3L}};
        int i, j;
        if (l_738[2])
        { /* block id: 336 */
            struct S2 *l_765[10];
            int i;
            for (i = 0; i < 10; i++)
                l_765[i] = (void*)0;
            if ((atomic_inc(&p_1168->l_atomic_input[14]) == 2))
            { /* block id: 338 */
                VECTOR(int32_t, 4) l_739 = (VECTOR(int32_t, 4))(0x083DA295L, (VECTOR(int32_t, 2))(0x083DA295L, 0x5C2ACF24L), 0x5C2ACF24L);
                VECTOR(uint64_t, 2) l_740 = (VECTOR(uint64_t, 2))(0UL, 0xD03B55CECDDA531AL);
                int8_t l_741 = 0x69L;
                int32_t l_742 = 6L;
                int8_t l_743[8];
                uint64_t l_744[5][4] = {{18446744073709551606UL,0x99707A8F7A11AFA6L,7UL,0x99707A8F7A11AFA6L},{18446744073709551606UL,0x99707A8F7A11AFA6L,7UL,0x99707A8F7A11AFA6L},{18446744073709551606UL,0x99707A8F7A11AFA6L,7UL,0x99707A8F7A11AFA6L},{18446744073709551606UL,0x99707A8F7A11AFA6L,7UL,0x99707A8F7A11AFA6L},{18446744073709551606UL,0x99707A8F7A11AFA6L,7UL,0x99707A8F7A11AFA6L}};
                VECTOR(int32_t, 16) l_745 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3E11230BL), 0x3E11230BL), 0x3E11230BL, 0L, 0x3E11230BL, (VECTOR(int32_t, 2))(0L, 0x3E11230BL), (VECTOR(int32_t, 2))(0L, 0x3E11230BL), 0L, 0x3E11230BL, 0L, 0x3E11230BL);
                uint64_t l_758 = 1UL;
                int32_t l_759 = 0x1989C921L;
                struct S1 l_761[2][2][3] = {{{{0L},{0x7D85999DL},{0L}},{{0L},{0x7D85999DL},{0L}}},{{{0L},{0x7D85999DL},{0L}},{{0L},{0x7D85999DL},{0L}}}};
                struct S1 *l_760 = &l_761[1][1][2];
                struct S1 *l_762 = &l_761[0][0][0];
                struct S1 *l_763 = &l_761[1][1][2];
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_743[i] = 0x0CL;
                if ((l_745.s6 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(8L, 0x0C771F9DL)), 0x09F503ABL, ((VECTOR(int32_t, 8))(l_739.wwxzyxyx)), ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_740.xy)))), (uint64_t)l_741, (uint64_t)GROUP_DIVERGE(2, 1)))).xyxy)).x , l_742), ((VECTOR(int32_t, 8))(l_743[1], l_744[3][3], (-2L), 0x41B05D46L, 0x532FC10FL, ((VECTOR(int32_t, 2))(l_745.s4c)), 0x0BACDEE0L)).s7, (-1L), 0x2364CB9BL)).even)), 0x47F8E6F8L, 0x38F4A715L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x20174619L, 0x7DA2CC61L)).yyxx))))), 1L)).s2))
                { /* block id: 340 */
                    int32_t l_746 = 0L;
                    for (l_746 = 2; (l_746 != 3); l_746++)
                    { /* block id: 343 */
                        VECTOR(int32_t, 4) l_749 = (VECTOR(int32_t, 4))(0x74B2855BL, (VECTOR(int32_t, 2))(0x74B2855BL, 9L), 9L);
                        uint32_t l_750[4];
                        uint32_t l_751 = 0x6B6091F0L;
                        VECTOR(int64_t, 16) l_752 = (VECTOR(int64_t, 16))(0x76CFF7D0FBD33136L, (VECTOR(int64_t, 4))(0x76CFF7D0FBD33136L, (VECTOR(int64_t, 2))(0x76CFF7D0FBD33136L, 0x6B3E3452518ECFF6L), 0x6B3E3452518ECFF6L), 0x6B3E3452518ECFF6L, 0x76CFF7D0FBD33136L, 0x6B3E3452518ECFF6L, (VECTOR(int64_t, 2))(0x76CFF7D0FBD33136L, 0x6B3E3452518ECFF6L), (VECTOR(int64_t, 2))(0x76CFF7D0FBD33136L, 0x6B3E3452518ECFF6L), 0x76CFF7D0FBD33136L, 0x6B3E3452518ECFF6L, 0x76CFF7D0FBD33136L, 0x6B3E3452518ECFF6L);
                        struct S1 l_753[9] = {{-2L},{0x2669B51CL},{-2L},{-2L},{0x2669B51CL},{-2L},{-2L},{0x2669B51CL},{-2L}};
                        VECTOR(int32_t, 2) l_754 = (VECTOR(int32_t, 2))(0L, 0x3B99BA88L);
                        int i;
                        for (i = 0; i < 4; i++)
                            l_750[i] = 0x7499FDF0L;
                        l_742 = ((VECTOR(int32_t, 2))(l_749.zx)).odd;
                        l_739.z ^= (l_745.s2 = ((l_750[3] , ((l_752.sd ^= (l_751 &= 18446744073709551615UL)) , l_753[1])) , ((VECTOR(int32_t, 16))(l_754.yyxxyxxxxyyyyyyy)).sd));
                    }
                }
                else
                { /* block id: 350 */
                    uint64_t l_755 = 0xC58C7D4A55DAB9EFL;
                    --l_755;
                }
                l_759 ^= l_758;
                l_763 = (l_762 = l_760);
                unsigned int result = 0;
                result += l_739.w;
                result += l_739.z;
                result += l_739.y;
                result += l_739.x;
                result += l_740.y;
                result += l_740.x;
                result += l_741;
                result += l_742;
                int l_743_i0;
                for (l_743_i0 = 0; l_743_i0 < 8; l_743_i0++) {
                    result += l_743[l_743_i0];
                }
                int l_744_i0, l_744_i1;
                for (l_744_i0 = 0; l_744_i0 < 5; l_744_i0++) {
                    for (l_744_i1 = 0; l_744_i1 < 4; l_744_i1++) {
                        result += l_744[l_744_i0][l_744_i1];
                    }
                }
                result += l_745.sf;
                result += l_745.se;
                result += l_745.sd;
                result += l_745.sc;
                result += l_745.sb;
                result += l_745.sa;
                result += l_745.s9;
                result += l_745.s8;
                result += l_745.s7;
                result += l_745.s6;
                result += l_745.s5;
                result += l_745.s4;
                result += l_745.s3;
                result += l_745.s2;
                result += l_745.s1;
                result += l_745.s0;
                result += l_758;
                result += l_759;
                int l_761_i0, l_761_i1, l_761_i2;
                for (l_761_i0 = 0; l_761_i0 < 2; l_761_i0++) {
                    for (l_761_i1 = 0; l_761_i1 < 2; l_761_i1++) {
                        for (l_761_i2 = 0; l_761_i2 < 3; l_761_i2++) {
                            result += l_761[l_761_i0][l_761_i1][l_761_i2].f0;
                        }
                    }
                }
                atomic_add(&p_1168->l_special_values[14], result);
            }
            else
            { /* block id: 356 */
                (1 + 1);
            }
            p_1168->g_766 = p_1168->g_764[5][0][0];
        }
        else
        { /* block id: 360 */
            struct S0 l_767 = {0L,-1L,0x74760CB0L};
            return l_767;
        }
        if (p_15)
            break;
        if (l_768[0][3])
            continue;
        if (l_768[0][3])
            break;
    }
    for (p_1168->g_424 = 0; (p_1168->g_424 == 58); ++p_1168->g_424)
    { /* block id: 369 */
        struct S2 **l_771[1][7] = {{&p_1168->g_522[3],&p_1168->g_522[3],&p_1168->g_522[3],&p_1168->g_522[3],&p_1168->g_522[3],&p_1168->g_522[3],&p_1168->g_522[3]}};
        int32_t **l_773 = &p_1168->g_235;
        int32_t l_807 = 0x3A163191L;
        int32_t l_808[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
        uint32_t l_816[1];
        VECTOR(int32_t, 16) l_955 = (VECTOR(int32_t, 16))(0x7CD645A0L, (VECTOR(int32_t, 4))(0x7CD645A0L, (VECTOR(int32_t, 2))(0x7CD645A0L, (-4L)), (-4L)), (-4L), 0x7CD645A0L, (-4L), (VECTOR(int32_t, 2))(0x7CD645A0L, (-4L)), (VECTOR(int32_t, 2))(0x7CD645A0L, (-4L)), 0x7CD645A0L, (-4L), 0x7CD645A0L, (-4L));
        int i, j;
        for (i = 0; i < 1; i++)
            l_816[i] = 4294967295UL;
        l_772 = (*p_1168->g_521);
        (*l_773) = &p_15;
        for (p_1168->g_179.f1.f0 = 0; (p_1168->g_179.f1.f0 != (-17)); --p_1168->g_179.f1.f0)
        { /* block id: 374 */
            int32_t *l_783 = &p_1168->g_267.f5;
            VECTOR(int32_t, 16) l_791 = (VECTOR(int32_t, 16))(0x66617A96L, (VECTOR(int32_t, 4))(0x66617A96L, (VECTOR(int32_t, 2))(0x66617A96L, (-1L)), (-1L)), (-1L), 0x66617A96L, (-1L), (VECTOR(int32_t, 2))(0x66617A96L, (-1L)), (VECTOR(int32_t, 2))(0x66617A96L, (-1L)), 0x66617A96L, (-1L), 0x66617A96L, (-1L));
            VECTOR(int32_t, 16) l_792 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 1L), 1L), 1L, 6L, 1L, (VECTOR(int32_t, 2))(6L, 1L), (VECTOR(int32_t, 2))(6L, 1L), 6L, 1L, 6L, 1L);
            VECTOR(int32_t, 8) l_954 = (VECTOR(int32_t, 8))(0x18F3F358L, (VECTOR(int32_t, 4))(0x18F3F358L, (VECTOR(int32_t, 2))(0x18F3F358L, 0x0C2E885EL), 0x0C2E885EL), 0x0C2E885EL, 0x18F3F358L, 0x0C2E885EL);
            int i;
            l_738[2] |= (p_15 != p_17);
            for (p_1168->g_727.f3 = 0; (p_1168->g_727.f3 == 50); ++p_1168->g_727.f3)
            { /* block id: 378 */
                VECTOR(int32_t, 2) l_786 = (VECTOR(int32_t, 2))(1L, (-1L));
                uint8_t l_809 = 0xC1L;
                int i;
                if ((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(p_1168->g_27.x, 0x3DL)), 0xB1C4L)))
                { /* block id: 379 */
                    (*l_773) = l_783;
                    (*p_1168->g_235) = (((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(l_786.yxyxxyyxyyyxyxyy)).sfbfd, (int32_t)(**p_1168->g_390)))).x, (**p_1168->g_277))) >= (safe_add_func_int8_t_s_s(0x36L, (safe_mul_func_int16_t_s_s((((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_791.s796b303e4832b942)).s7dbc)).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_792.s7831)).hi))))).xyyx, (int32_t)(*p_1168->g_235), (int32_t)0x4771D1C9L))), ((VECTOR(int32_t, 2))(p_1168->g_793.xy)).xyyx))).x == (p_14 | (safe_div_func_int64_t_s_s(((*p_1168->g_235) == (**p_1168->g_277)), l_786.y)))), 0x3E17L))))) <= 0UL);
                    if ((atomic_inc(&p_1168->l_atomic_input[30]) == 2))
                    { /* block id: 383 */
                        VECTOR(int32_t, 16) l_796 = (VECTOR(int32_t, 16))(0x00D94AA4L, (VECTOR(int32_t, 4))(0x00D94AA4L, (VECTOR(int32_t, 2))(0x00D94AA4L, 0x2D641532L), 0x2D641532L), 0x2D641532L, 0x00D94AA4L, 0x2D641532L, (VECTOR(int32_t, 2))(0x00D94AA4L, 0x2D641532L), (VECTOR(int32_t, 2))(0x00D94AA4L, 0x2D641532L), 0x00D94AA4L, 0x2D641532L, 0x00D94AA4L, 0x2D641532L);
                        int32_t l_797 = 6L;
                        int32_t l_798 = (-2L);
                        uint32_t l_801 = 4294967295UL;
                        uint32_t *l_800 = &l_801;
                        uint32_t **l_799 = &l_800;
                        uint32_t **l_802[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_802[i] = &l_800;
                        l_797 |= ((VECTOR(int32_t, 2))(l_796.sc6)).lo;
                        l_796.s4 |= l_798;
                        l_802[2] = l_799;
                        unsigned int result = 0;
                        result += l_796.sf;
                        result += l_796.se;
                        result += l_796.sd;
                        result += l_796.sc;
                        result += l_796.sb;
                        result += l_796.sa;
                        result += l_796.s9;
                        result += l_796.s8;
                        result += l_796.s7;
                        result += l_796.s6;
                        result += l_796.s5;
                        result += l_796.s4;
                        result += l_796.s3;
                        result += l_796.s2;
                        result += l_796.s1;
                        result += l_796.s0;
                        result += l_797;
                        result += l_798;
                        result += l_801;
                        atomic_add(&p_1168->l_special_values[30], result);
                    }
                    else
                    { /* block id: 387 */
                        (1 + 1);
                    }
                }
                else
                { /* block id: 390 */
                    int32_t *l_803 = (void*)0;
                    int32_t *l_804 = &p_1168->g_150;
                    int32_t *l_805 = (void*)0;
                    int32_t *l_806[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    l_809--;
                    (*p_1168->g_235) &= 0L;
                    p_1168->g_813 = p_1168->g_812;
                    for (p_1168->g_690.f0.f0 = (-7); (p_1168->g_690.f0.f0 < (-21)); --p_1168->g_690.f0.f0)
                    { /* block id: 396 */
                        uint64_t l_817 = 0x92720E2EA3F71FCEL;
                        l_817 = l_816[0];
                        if (p_17)
                            break;
                    }
                }
            }
            if ((atomic_inc(&p_1168->l_atomic_input[0]) == 5))
            { /* block id: 403 */
                int32_t l_818[7][4][3] = {{{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)}},{{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)}},{{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)}},{{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)}},{{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)}},{{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)}},{{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)},{0x473A3ED7L,0x59F6313EL,(-3L)}}};
                VECTOR(int32_t, 16) l_951 = (VECTOR(int32_t, 16))(0x45E2CE91L, (VECTOR(int32_t, 4))(0x45E2CE91L, (VECTOR(int32_t, 2))(0x45E2CE91L, 0x305AE8F7L), 0x305AE8F7L), 0x305AE8F7L, 0x45E2CE91L, 0x305AE8F7L, (VECTOR(int32_t, 2))(0x45E2CE91L, 0x305AE8F7L), (VECTOR(int32_t, 2))(0x45E2CE91L, 0x305AE8F7L), 0x45E2CE91L, 0x305AE8F7L, 0x45E2CE91L, 0x305AE8F7L);
                int i, j, k;
                for (l_818[0][1][2] = 6; (l_818[0][1][2] > (-27)); l_818[0][1][2] = safe_sub_func_int32_t_s_s(l_818[0][1][2], 7))
                { /* block id: 406 */
                    int32_t l_821 = (-7L);
                    int32_t *l_887 = &l_821;
                    int32_t *l_888 = &l_821;
                    struct S3 l_889[4] = {{0x8604EF2EL,0UL,0x3346FF4FL,0L,18446744073709551615UL,0L,0x0CD75886L,0x1F54A22FL,0x71056775L,0x224F6384L},{0x8604EF2EL,0UL,0x3346FF4FL,0L,18446744073709551615UL,0L,0x0CD75886L,0x1F54A22FL,0x71056775L,0x224F6384L},{0x8604EF2EL,0UL,0x3346FF4FL,0L,18446744073709551615UL,0L,0x0CD75886L,0x1F54A22FL,0x71056775L,0x224F6384L},{0x8604EF2EL,0UL,0x3346FF4FL,0L,18446744073709551615UL,0L,0x0CD75886L,0x1F54A22FL,0x71056775L,0x224F6384L}};
                    struct S3 l_890 = {0x44E3E41DL,1UL,0x2978ED6DL,0x77F1L,18446744073709551608UL,0x46C95E44L,0UL,4294967295UL,0x1DD3D10FL,4294967293UL};/* VOLATILE GLOBAL l_890 */
                    int i;
                    for (l_821 = (-18); (l_821 != (-4)); l_821 = safe_add_func_uint8_t_u_u(l_821, 5))
                    { /* block id: 409 */
                        struct S2 l_824[5][1] = {{{{0x34C1BC01L},0x1FCA00FC4656CD9CL,3UL,0UL,249UL,0x7009A0ACL}},{{{0x34C1BC01L},0x1FCA00FC4656CD9CL,3UL,0UL,249UL,0x7009A0ACL}},{{{0x34C1BC01L},0x1FCA00FC4656CD9CL,3UL,0UL,249UL,0x7009A0ACL}},{{{0x34C1BC01L},0x1FCA00FC4656CD9CL,3UL,0UL,249UL,0x7009A0ACL}},{{{0x34C1BC01L},0x1FCA00FC4656CD9CL,3UL,0UL,249UL,0x7009A0ACL}}};
                        uint32_t l_825 = 1UL;
                        uint64_t l_826 = 18446744073709551612UL;
                        VECTOR(int64_t, 2) l_827 = (VECTOR(int64_t, 2))(0L, (-8L));
                        uint64_t l_828 = 0xA11303A171911DABL;
                        int32_t l_829 = 9L;
                        VECTOR(int32_t, 8) l_830 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x2D3F429CL), 0x2D3F429CL), 0x2D3F429CL, (-2L), 0x2D3F429CL);
                        struct S4 l_832 = {0xDDA64551L,{0x2FBD3041L},0x07B9FBE338A11417L,1UL};/* VOLATILE GLOBAL l_832 */
                        struct S4 *l_831[7][7][5] = {{{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0}},{{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0}},{{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0}},{{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0}},{{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0}},{{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0}},{{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0},{(void*)0,&l_832,&l_832,(void*)0,(void*)0}}};
                        struct S4 *l_833 = &l_832;
                        struct S4 *l_834 = &l_832;
                        int i, j, k;
                        l_834 = (l_824[3][0] , (l_833 = (l_825 , (((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_826, ((VECTOR(int64_t, 2))(l_827.xy)), 9L)), l_828, l_829, 1L, 0x2BFC104854C87EA5L)))).s5 , ((VECTOR(int32_t, 4))(0x749615BBL, ((VECTOR(int32_t, 8))(l_830.s33614326)).s5, 0x2F6588EDL, 0x32E42FB7L)).w) , 8L) , l_831[5][5][4]))));
                    }
                    for (l_821 = 25; (l_821 > (-15)); l_821--)
                    { /* block id: 415 */
                        struct S4 l_838 = {0xC4E085B6L,{0x6211FCBAL},-1L,18446744073709551615UL};/* VOLATILE GLOBAL l_838 */
                        struct S4 *l_837 = &l_838;
                        struct S4 *l_839 = &l_838;
                        VECTOR(int64_t, 8) l_840 = (VECTOR(int64_t, 8))(0x42C44A9C30CFA7BCL, (VECTOR(int64_t, 4))(0x42C44A9C30CFA7BCL, (VECTOR(int64_t, 2))(0x42C44A9C30CFA7BCL, 0x5DF202327C2E28ACL), 0x5DF202327C2E28ACL), 0x5DF202327C2E28ACL, 0x42C44A9C30CFA7BCL, 0x5DF202327C2E28ACL);
                        int32_t l_842 = 0x6EDD38B5L;
                        int32_t *l_841 = &l_842;
                        VECTOR(int16_t, 8) l_843 = (VECTOR(int16_t, 8))(0x7233L, (VECTOR(int16_t, 4))(0x7233L, (VECTOR(int16_t, 2))(0x7233L, (-2L)), (-2L)), (-2L), 0x7233L, (-2L));
                        VECTOR(int16_t, 4) l_844 = (VECTOR(int16_t, 4))(0x7167L, (VECTOR(int16_t, 2))(0x7167L, 0x258EL), 0x258EL);
                        VECTOR(int16_t, 8) l_845 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
                        VECTOR(int16_t, 4) l_846 = (VECTOR(int16_t, 4))(0x7A35L, (VECTOR(int16_t, 2))(0x7A35L, 1L), 1L);
                        VECTOR(int8_t, 4) l_847 = (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 1L), 1L);
                        VECTOR(uint8_t, 4) l_848 = (VECTOR(uint8_t, 4))(0xDCL, (VECTOR(uint8_t, 2))(0xDCL, 0xD4L), 0xD4L);
                        VECTOR(uint32_t, 4) l_849 = (VECTOR(uint32_t, 4))(0x4E39DDF7L, (VECTOR(uint32_t, 2))(0x4E39DDF7L, 0xA9506538L), 0xA9506538L);
                        int8_t l_850 = (-1L);
                        VECTOR(int16_t, 2) l_851 = (VECTOR(int16_t, 2))((-2L), 0x2524L);
                        VECTOR(int16_t, 8) l_852 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x6945L), 0x6945L), 0x6945L, 0L, 0x6945L);
                        VECTOR(int16_t, 2) l_853 = (VECTOR(int16_t, 2))(0x3AD5L, 0x406BL);
                        VECTOR(int16_t, 2) l_854 = (VECTOR(int16_t, 2))(0x75D8L, 0x41D0L);
                        VECTOR(int16_t, 2) l_855 = (VECTOR(int16_t, 2))(3L, 0x6893L);
                        int32_t l_856 = 0L;
                        int32_t l_857[9][5][4] = {{{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L}},{{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L}},{{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L}},{{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L}},{{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L}},{{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L}},{{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L}},{{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L}},{{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L},{1L,5L,0x78884DE1L,0x305E6326L}}};
                        uint32_t l_858[3][7][5] = {{{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL}},{{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL}},{{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL},{0x2B778887L,4294967294UL,0x2B778887L,0x2B778887L,4294967294UL}}};
                        VECTOR(int16_t, 16) l_859 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x49A7L), 0x49A7L), 0x49A7L, 1L, 0x49A7L, (VECTOR(int16_t, 2))(1L, 0x49A7L), (VECTOR(int16_t, 2))(1L, 0x49A7L), 1L, 0x49A7L, 1L, 0x49A7L);
                        VECTOR(int16_t, 4) l_860 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L);
                        VECTOR(int16_t, 4) l_861 = (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 1L), 1L);
                        VECTOR(int16_t, 8) l_862 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x02DEL), 0x02DEL), 0x02DEL, 0L, 0x02DEL);
                        VECTOR(int16_t, 8) l_863 = (VECTOR(int16_t, 8))(0x3DF6L, (VECTOR(int16_t, 4))(0x3DF6L, (VECTOR(int16_t, 2))(0x3DF6L, 0x6477L), 0x6477L), 0x6477L, 0x3DF6L, 0x6477L);
                        VECTOR(int16_t, 8) l_864 = (VECTOR(int16_t, 8))(0x2C7BL, (VECTOR(int16_t, 4))(0x2C7BL, (VECTOR(int16_t, 2))(0x2C7BL, (-1L)), (-1L)), (-1L), 0x2C7BL, (-1L));
                        uint32_t l_865 = 0xA87DD074L;
                        uint32_t l_866 = 0x19B28842L;
                        VECTOR(int16_t, 2) l_867 = (VECTOR(int16_t, 2))(0x3AD1L, 0L);
                        VECTOR(uint16_t, 4) l_868 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x9BAEL), 0x9BAEL);
                        VECTOR(int32_t, 4) l_869 = (VECTOR(int32_t, 4))(0x680DE1D7L, (VECTOR(int32_t, 2))(0x680DE1D7L, (-1L)), (-1L));
                        uint32_t l_870[10][9] = {{1UL,0x2596164EL,0x2596164EL,1UL,1UL,4294967295UL,0xC9E21656L,4294967293UL,4294967295UL},{1UL,0x2596164EL,0x2596164EL,1UL,1UL,4294967295UL,0xC9E21656L,4294967293UL,4294967295UL},{1UL,0x2596164EL,0x2596164EL,1UL,1UL,4294967295UL,0xC9E21656L,4294967293UL,4294967295UL},{1UL,0x2596164EL,0x2596164EL,1UL,1UL,4294967295UL,0xC9E21656L,4294967293UL,4294967295UL},{1UL,0x2596164EL,0x2596164EL,1UL,1UL,4294967295UL,0xC9E21656L,4294967293UL,4294967295UL},{1UL,0x2596164EL,0x2596164EL,1UL,1UL,4294967295UL,0xC9E21656L,4294967293UL,4294967295UL},{1UL,0x2596164EL,0x2596164EL,1UL,1UL,4294967295UL,0xC9E21656L,4294967293UL,4294967295UL},{1UL,0x2596164EL,0x2596164EL,1UL,1UL,4294967295UL,0xC9E21656L,4294967293UL,4294967295UL},{1UL,0x2596164EL,0x2596164EL,1UL,1UL,4294967295UL,0xC9E21656L,4294967293UL,4294967295UL},{1UL,0x2596164EL,0x2596164EL,1UL,1UL,4294967295UL,0xC9E21656L,4294967293UL,4294967295UL}};
                        int8_t l_871[10] = {0x09L,0x7EL,0x09L,0x09L,0x7EL,0x09L,0x09L,0x7EL,0x09L,0x09L};
                        uint8_t l_872 = 0x00L;
                        struct S1 l_873 = {0x587D0584L};
                        struct S1 l_874 = {3L};
                        VECTOR(int32_t, 16) l_875 = (VECTOR(int32_t, 16))(0x40D9BE15L, (VECTOR(int32_t, 4))(0x40D9BE15L, (VECTOR(int32_t, 2))(0x40D9BE15L, 0x07616BF9L), 0x07616BF9L), 0x07616BF9L, 0x40D9BE15L, 0x07616BF9L, (VECTOR(int32_t, 2))(0x40D9BE15L, 0x07616BF9L), (VECTOR(int32_t, 2))(0x40D9BE15L, 0x07616BF9L), 0x40D9BE15L, 0x07616BF9L, 0x40D9BE15L, 0x07616BF9L);
                        uint32_t l_876 = 0UL;
                        VECTOR(int32_t, 16) l_877 = (VECTOR(int32_t, 16))(0x6C660781L, (VECTOR(int32_t, 4))(0x6C660781L, (VECTOR(int32_t, 2))(0x6C660781L, 0L), 0L), 0L, 0x6C660781L, 0L, (VECTOR(int32_t, 2))(0x6C660781L, 0L), (VECTOR(int32_t, 2))(0x6C660781L, 0L), 0x6C660781L, 0L, 0x6C660781L, 0L);
                        VECTOR(int32_t, 4) l_878 = (VECTOR(int32_t, 4))(0x1562CEA0L, (VECTOR(int32_t, 2))(0x1562CEA0L, 0L), 0L);
                        VECTOR(int64_t, 2) l_879 = (VECTOR(int64_t, 2))((-6L), 1L);
                        int32_t l_880 = 1L;
                        uint16_t l_881 = 65535UL;
                        VECTOR(int32_t, 16) l_882 = (VECTOR(int32_t, 16))(0x30C93E24L, (VECTOR(int32_t, 4))(0x30C93E24L, (VECTOR(int32_t, 2))(0x30C93E24L, 0x5784B543L), 0x5784B543L), 0x5784B543L, 0x30C93E24L, 0x5784B543L, (VECTOR(int32_t, 2))(0x30C93E24L, 0x5784B543L), (VECTOR(int32_t, 2))(0x30C93E24L, 0x5784B543L), 0x30C93E24L, 0x5784B543L, 0x30C93E24L, 0x5784B543L);
                        VECTOR(int32_t, 4) l_883 = (VECTOR(int32_t, 4))(0x5B87E2A0L, (VECTOR(int32_t, 2))(0x5B87E2A0L, 0x3082A5A4L), 0x3082A5A4L);
                        int64_t l_884 = 0x1246459F2A5F2550L;
                        uint16_t l_885 = 0x433DL;
                        int32_t l_886 = 0x1B432D5AL;
                        int i, j, k;
                        l_839 = l_837;
                        l_841 = (((VECTOR(int64_t, 2))(l_840.s55)).odd , (void*)0);
                        l_874 = (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(l_843.s73)).xxyyxxxyyxyxxyyx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(l_844.wy)), ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_845.s01)))).yxyxyyxxxyxxyxxx, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(0x1750L, (-10L))).yxxx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_846.zx)).yxyyxyyx)).even)).even)).xyxx))).zwzyxzzywxyxywxz, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(0x79L, ((VECTOR(int8_t, 2))(l_847.xw)), 0x41L)).hi, ((VECTOR(uint8_t, 4))(l_848.xyzx)).lo))).yxxyyyxx, (int16_t)(l_849.w = 3L)))).odd)).w, 1L, (l_845.s2 = l_850), ((VECTOR(int16_t, 4))(l_851.xxyy)), 0L, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(0x1899L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(l_852.s2510416623634704)).s3c, ((VECTOR(int16_t, 2))(l_853.yx)), ((VECTOR(int16_t, 2))(l_854.yx))))).xyyy, ((VECTOR(int16_t, 2))(l_855.xy)).yyxy))))).even)), 2L)), (int16_t)l_856))).xzwzxxzx)).lo)), (int16_t)(l_858[0][0][3] = l_857[8][3][1])))).wwwzwywz)).s40, ((VECTOR(int16_t, 8))(l_859.sf50c01ad)).s17))).xxxxxxxxxxyyyxxx, ((VECTOR(int16_t, 4))(l_860.yzyz)).zxwxyzwzxyywyzyw, ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(l_861.wyyzxxxwzwzyyywx)).s5141, ((VECTOR(int16_t, 16))(l_862.s4616501224120710)).s9b4e))).even, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((-9L), 0x1078L, (-1L), 0x3BBCL)).xxzzzwyw)).s67, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_863.s0323141204146445)).s259b)).even))).yyxxyxxyyxxyyxxy))).lo)).s5166136134153767)).s2, (-1L), 0L, ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(l_864.s5721)).zxxyywwx, (int16_t)(l_865 , l_866)))), (-1L), ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(0x573BL, 0x7A97L, 0L, (-1L))), (int16_t)(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(l_867.yxxx)).odd, ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(l_868.zwwywzxy)).even, ((VECTOR(uint16_t, 2))(0xA4F5L, 6UL)).xxyx))).lo))).yyyxyyxy)).s31)), ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(l_869.xz)).yyyyxxyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x2BE26917L, (-1L), 0x0998F200L, 1L, 8L, 0L, 0x2C8F280DL, 0x5E334A24L)).s11)))), l_870[6][1], 8L, 1L, l_871[5], 0x3D75E1D5L, 0x6C040BBBL)).s76)).xxyxxxyx))).s50))), 0x08E8908EL, 0x6DD5A809L)))).ywwywywz, ((VECTOR(uint32_t, 8))(4294967295UL))))).hi, ((VECTOR(int64_t, 4))(0L))))).wxzyyywy)))).s37, ((VECTOR(int64_t, 2))(0x56A59A949F1B689DL)), ((VECTOR(int64_t, 2))(0x50602AC2D8415423L))))).xxxxyxyyyyxyxyyy, ((VECTOR(int64_t, 16))(0x0C3975A269809C4FL)), ((VECTOR(int64_t, 16))((-2L)))))).s1 , l_872)))), ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 4))((-4L)))))), ((VECTOR(int16_t, 2))(0x2403L)), 0L)).even, ((VECTOR(int16_t, 8))(0x0412L))))).odd, ((VECTOR(int16_t, 4))((-6L)))))), 0x0B31L))))).se2)), ((VECTOR(int16_t, 2))(0x1EDAL)), 1L, 0x3430L, 0x70F8L, (-1L))).even)).hi)).xyxyyxxy)).s06, ((VECTOR(int16_t, 2))(1L)))))))).xxxx)).lo)).xyxxxxxyyyyxyyyx))).sd6eb)).x , l_873);
                        l_886 ^= ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(0x61D9CA0FL, 0x009B0BB0L)).xxyyxyxy, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(l_875.s74b3)), ((VECTOR(int32_t, 2))((-1L), 0x1BADFB4FL)).yxxy))).yxzzzwyx))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))((-4L), (-1L))), ((VECTOR(int32_t, 4))(1L, l_876, 0x15E44964L, 1L)).hi))).xxyxxxyx)).s31)).xxyxxxxx))).odd, ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_877.sdae48ba1)).s0331721171514147, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(l_878.yzwyzxzw)).s60, (int32_t)(l_881 = (((VECTOR(int64_t, 16))(l_879.xyyxyyxyxxyyyxyx)).sc , l_880))))).xyxxxyyyxyxxyxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(l_882.s8a)).xyxx, (int32_t)((VECTOR(int32_t, 2))(1L, (-2L))).odd))).xzyzwzyyyzyyzzwx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(l_883.xxwzxwzx)).s22, ((VECTOR(int32_t, 4))((-1L), ((l_884 = 4294967288UL) , l_885), 0L, 0x7E514AA0L)).even))).yyyx)).wzwwyyzyzzzyxzyy)))))))).s0bc1))).z;
                    }
                    l_888 = l_887;
                    l_890 = l_889[0];
                }
                if (((VECTOR(int32_t, 4))((-2L), 4L, (-5L), 0x2BDBF159L)).w)
                { /* block id: 429 */
                    VECTOR(int32_t, 2) l_891 = (VECTOR(int32_t, 2))(0x6377F460L, (-1L));
                    uint8_t l_892 = 0x05L;
                    VECTOR(int32_t, 16) l_893 = (VECTOR(int32_t, 16))(0x734D3C6CL, (VECTOR(int32_t, 4))(0x734D3C6CL, (VECTOR(int32_t, 2))(0x734D3C6CL, 1L), 1L), 1L, 0x734D3C6CL, 1L, (VECTOR(int32_t, 2))(0x734D3C6CL, 1L), (VECTOR(int32_t, 2))(0x734D3C6CL, 1L), 0x734D3C6CL, 1L, 0x734D3C6CL, 1L);
                    VECTOR(int32_t, 16) l_894 = (VECTOR(int32_t, 16))(0x41F26E29L, (VECTOR(int32_t, 4))(0x41F26E29L, (VECTOR(int32_t, 2))(0x41F26E29L, 0L), 0L), 0L, 0x41F26E29L, 0L, (VECTOR(int32_t, 2))(0x41F26E29L, 0L), (VECTOR(int32_t, 2))(0x41F26E29L, 0L), 0x41F26E29L, 0L, 0x41F26E29L, 0L);
                    int16_t l_895[7][6];
                    VECTOR(int32_t, 16) l_896 = (VECTOR(int32_t, 16))(0x5F9CFA91L, (VECTOR(int32_t, 4))(0x5F9CFA91L, (VECTOR(int32_t, 2))(0x5F9CFA91L, (-1L)), (-1L)), (-1L), 0x5F9CFA91L, (-1L), (VECTOR(int32_t, 2))(0x5F9CFA91L, (-1L)), (VECTOR(int32_t, 2))(0x5F9CFA91L, (-1L)), 0x5F9CFA91L, (-1L), 0x5F9CFA91L, (-1L));
                    int8_t l_897 = (-2L);
                    VECTOR(int32_t, 16) l_898 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x685868C6L), 0x685868C6L), 0x685868C6L, (-7L), 0x685868C6L, (VECTOR(int32_t, 2))((-7L), 0x685868C6L), (VECTOR(int32_t, 2))((-7L), 0x685868C6L), (-7L), 0x685868C6L, (-7L), 0x685868C6L);
                    VECTOR(int32_t, 4) l_899 = (VECTOR(int32_t, 4))(0x249A086BL, (VECTOR(int32_t, 2))(0x249A086BL, (-10L)), (-10L));
                    VECTOR(int32_t, 16) l_900 = (VECTOR(int32_t, 16))(0x2D44DD11L, (VECTOR(int32_t, 4))(0x2D44DD11L, (VECTOR(int32_t, 2))(0x2D44DD11L, 0x121FC576L), 0x121FC576L), 0x121FC576L, 0x2D44DD11L, 0x121FC576L, (VECTOR(int32_t, 2))(0x2D44DD11L, 0x121FC576L), (VECTOR(int32_t, 2))(0x2D44DD11L, 0x121FC576L), 0x2D44DD11L, 0x121FC576L, 0x2D44DD11L, 0x121FC576L);
                    VECTOR(int32_t, 8) l_901 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0F158D41L), 0x0F158D41L), 0x0F158D41L, 0L, 0x0F158D41L);
                    int32_t l_902 = 0x16186244L;
                    VECTOR(int32_t, 2) l_903 = (VECTOR(int32_t, 2))(0x39AA53A0L, 0L);
                    VECTOR(int32_t, 16) l_904 = (VECTOR(int32_t, 16))(0x2B2E6988L, (VECTOR(int32_t, 4))(0x2B2E6988L, (VECTOR(int32_t, 2))(0x2B2E6988L, 1L), 1L), 1L, 0x2B2E6988L, 1L, (VECTOR(int32_t, 2))(0x2B2E6988L, 1L), (VECTOR(int32_t, 2))(0x2B2E6988L, 1L), 0x2B2E6988L, 1L, 0x2B2E6988L, 1L);
                    uint64_t l_905 = 0x212306F6E8109A05L;
                    uint16_t l_906 = 65535UL;
                    uint16_t l_907 = 0x09A4L;
                    int64_t l_908 = 9L;
                    int16_t l_909 = 0x3804L;
                    int32_t l_910 = 4L;
                    int8_t l_911 = 5L;
                    uint32_t l_912 = 9UL;
                    int32_t l_913[4];
                    int8_t l_914 = (-10L);
                    int8_t l_915 = 0x10L;
                    struct S0 l_916 = {2L,-7L,0x6FE0F5CAL};
                    struct S0 l_917 = {-1L,0x51L,0x52F7E75DL};
                    struct S0 l_918 = {-1L,0x20L,2L};
                    struct S0 l_919 = {0x08C61E527A996B92L,0L,0L};
                    uint16_t l_920 = 0x5749L;
                    int32_t *l_947 = (void*)0;
                    int32_t *l_948 = (void*)0;
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_895[i][j] = 0x0980L;
                    }
                    for (i = 0; i < 4; i++)
                        l_913[i] = 0L;
                    l_915 &= ((((VECTOR(int32_t, 16))(0x2A5FE483L, 0x1308D4DFL, 4L, ((VECTOR(int32_t, 8))(l_891.yyxyxxxy)), 6L, 0x5B903D7DL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0L, l_892, ((VECTOR(int32_t, 2))(l_893.sac)), (l_912 ^= ((VECTOR(int32_t, 8))(9L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(l_894.s17)), (int32_t)l_895[5][2]))), 0x636ADD2BL, 0x02F7CF41L, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x27B556F2L, 1L)), 2L, 0x11B7C254L)).even, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_896.s47ed576b)).odd, ((VECTOR(int32_t, 16))(6L, l_897, 1L, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(l_898.sc6)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_899.wzwzxyzxxxzzxwyy)).s59, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))((-1L), 0x3460ECE7L)), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_900.scdcc8ba0b571458a)).odd, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(l_901.s1403732303167713)).s28c8, ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))((-1L), 0x115FB9DDL, (l_818[0][1][2] = l_902), 1L, 0x31CD0D8EL, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_903.yy)))).xxxxyxxx)).s60, ((VECTOR(int32_t, 16))(l_904.sc56fc9d0c0eb9a87)).s25))), ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(0x79D72DD1L, 1L)).yxyyyxxx))), 1L)), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(0x63AE1474L, l_905, 0L, ((VECTOR(int32_t, 8))(0x61CB7D60L, 0x5C201193L, l_906, ((VECTOR(int32_t, 4))(1L)), 0x13FB2739L)), ((VECTOR(int32_t, 4))(0x74EFC7B8L)), 0x254D4195L)).s4b95, ((VECTOR(int32_t, 4))((-6L)))))).zzxzyxwywwxzxzww))).s2afe, ((VECTOR(int32_t, 4))((-8L)))))).wwxyxxzy, ((VECTOR(int32_t, 8))((-9L)))))))))).even, ((VECTOR(int32_t, 4))(0x5D85EFFCL))))), ((VECTOR(int32_t, 4))(0x4C8EA251L))))).odd, ((VECTOR(int32_t, 2))(0x36C5667DL)))))))), ((VECTOR(int32_t, 2))(0x768847B5L))))), 1L, l_907, l_908, 0x4078D8F1L, 0x192E2A9CL, ((VECTOR(int32_t, 8))(0x54267601L)), 0x36DFC4ADL)).sc5))).yxyx)).yzyxyzzwyyzzxwxz)).se, 0x721C1174L, 0L, 0x432A5ACBL, 0x1AC5431EL, 0x2D666421L, l_909, l_910, l_911, (-10L), ((VECTOR(int32_t, 2))((-8L))), 4L)).s9612, ((VECTOR(int32_t, 4))(8L))))).hi))))), ((VECTOR(int32_t, 2))((-4L))), ((VECTOR(int32_t, 2))(0L))))), (-4L))).s1), 5L, 5L, 0x0D8C52CBL)).s6622056623413242)).s86)), 0x3E7678B0L)).s8 , l_913[0]) , l_914);
                    l_919 = (l_918 = (l_917 = l_916));
                    if (l_920)
                    { /* block id: 436 */
                        int32_t *l_921 = (void*)0;
                        int32_t l_923 = (-2L);
                        int32_t *l_922 = &l_923;
                        int16_t l_924 = 4L;
                        VECTOR(int16_t, 8) l_925 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
                        VECTOR(uint16_t, 4) l_926 = (VECTOR(uint16_t, 4))(0x5FECL, (VECTOR(uint16_t, 2))(0x5FECL, 2UL), 2UL);
                        VECTOR(int32_t, 2) l_927 = (VECTOR(int32_t, 2))((-4L), (-1L));
                        int8_t l_928[9][8] = {{1L,(-1L),(-1L),1L,0x67L,0x1AL,8L,0x08L},{1L,(-1L),(-1L),1L,0x67L,0x1AL,8L,0x08L},{1L,(-1L),(-1L),1L,0x67L,0x1AL,8L,0x08L},{1L,(-1L),(-1L),1L,0x67L,0x1AL,8L,0x08L},{1L,(-1L),(-1L),1L,0x67L,0x1AL,8L,0x08L},{1L,(-1L),(-1L),1L,0x67L,0x1AL,8L,0x08L},{1L,(-1L),(-1L),1L,0x67L,0x1AL,8L,0x08L},{1L,(-1L),(-1L),1L,0x67L,0x1AL,8L,0x08L},{1L,(-1L),(-1L),1L,0x67L,0x1AL,8L,0x08L}};
                        VECTOR(int16_t, 8) l_929 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L);
                        VECTOR(int16_t, 4) l_930 = (VECTOR(int16_t, 4))(0x2829L, (VECTOR(int16_t, 2))(0x2829L, 8L), 8L);
                        uint32_t l_931 = 0x7288B30EL;
                        VECTOR(int16_t, 4) l_932 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-8L)), (-8L));
                        uint32_t l_933 = 1UL;
                        uint16_t l_934[4] = {0UL,0UL,0UL,0UL};
                        uint8_t l_935 = 0x1CL;
                        uint32_t l_936 = 4294967290UL;
                        int32_t l_937 = 0x0D320E30L;
                        uint32_t l_938 = 0xA454F405L;
                        uint8_t l_939 = 0xF4L;
                        int64_t l_940 = 9L;
                        int i, j;
                        l_922 = l_921;
                        l_894.s6 ^= l_924;
                        l_899.w = (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(l_925.s3647)).xxyzxxyz, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_926.wzywwxwy)).s56)).xxxxxxxx))).even)), 0x2A60C7B7L, 0x2478C342L, (-1L), 0x5881BB49L)).s60)).hi, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(l_927.yyxyxyyx)).s21, (int32_t)0x7FC6DB07L))), l_928[2][2], (-3L), ((l_900.sa = ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 2))(l_929.s12)), ((VECTOR(int16_t, 4))(8L, ((VECTOR(int16_t, 2))(l_930.yz)), 0x24D6L)).even))).yxxxxxxx)).hi, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))((l_931 , (l_895[0][5] = ((VECTOR(int16_t, 4))(l_932.wxzz)).x)), l_933, 0x2584L, 1L)).even)).yxxy))).even, ((VECTOR(int16_t, 16))((-1L), 0x3499L, l_934[0], ((l_936 &= l_935) , l_937), l_938, 0x2FF0L, 0x38BBL, 0x711EL, l_939, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 2))(0x61D9L)), 0L)).s5b))).yyyx, ((VECTOR(uint16_t, 4))(0x2FF2L))))).yywyxxyyzwwyxwzx, ((VECTOR(int32_t, 16))(1L)), ((VECTOR(int32_t, 16))(5L))))).sd) , l_940), ((VECTOR(int32_t, 8))(0x4F23942DL)), 0L, 0x1B0715FBL)), ((VECTOR(int32_t, 16))(1L)))))))).sf1c3)).even, ((VECTOR(int32_t, 2))(0x250521E3L)), ((VECTOR(int32_t, 2))((-10L)))))), (-1L), 0x53D52ED0L)).y , 4L);
                    }
                    else
                    { /* block id: 443 */
                        struct S2 l_941 = {{-10L},-1L,0UL,0x29C0F589L,254UL,0x6047DF2DL};/* VOLATILE GLOBAL l_941 */
                        int8_t l_942 = 0x49L;
                        int32_t l_944 = (-1L);
                        int32_t *l_943 = &l_944;
                        int32_t *l_945 = &l_944;
                        int32_t *l_946 = (void*)0;
                        l_946 = (l_941 , (l_945 = ((l_942 , FAKE_DIVERGE(p_1168->group_0_offset, get_group_id(0), 10)) , l_943)));
                    }
                    l_948 = l_947;
                }
                else
                { /* block id: 448 */
                    int32_t l_950[4] = {2L,2L,2L,2L};
                    int32_t *l_949 = &l_950[1];
                    int i;
                    l_949 = (void*)0;
                }
                l_818[3][2][1] |= ((VECTOR(int32_t, 8))(l_951.s3a598413)).s3;
                unsigned int result = 0;
                int l_818_i0, l_818_i1, l_818_i2;
                for (l_818_i0 = 0; l_818_i0 < 7; l_818_i0++) {
                    for (l_818_i1 = 0; l_818_i1 < 4; l_818_i1++) {
                        for (l_818_i2 = 0; l_818_i2 < 3; l_818_i2++) {
                            result += l_818[l_818_i0][l_818_i1][l_818_i2];
                        }
                    }
                }
                result += l_951.sf;
                result += l_951.se;
                result += l_951.sd;
                result += l_951.sc;
                result += l_951.sb;
                result += l_951.sa;
                result += l_951.s9;
                result += l_951.s8;
                result += l_951.s7;
                result += l_951.s6;
                result += l_951.s5;
                result += l_951.s4;
                result += l_951.s3;
                result += l_951.s2;
                result += l_951.s1;
                result += l_951.s0;
                atomic_add(&p_1168->l_special_values[0], result);
            }
            else
            { /* block id: 452 */
                (1 + 1);
            }
            for (p_1168->g_157.f1 = (-22); (p_1168->g_157.f1 > 23); p_1168->g_157.f1++)
            { /* block id: 457 */
                (*l_783) |= ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(l_954.s3304512252007116)).s1b, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_955.sd6243b0a)).lo)))).even))).odd;
                if (p_14)
                    break;
            }
        }
    }
    return l_956;
}


/* ------------------------------------------ */
/* 
 * reads : p_1168->g_696 p_1168->g_105 p_1168->g_460 p_1168->g_660 p_1168->g_267.f4 p_1168->g_365.f1.f0 p_1168->g_267.f5 p_1168->g_157.f5 p_1168->g_727 p_1168->g_505.f0.f0 p_1168->g_278 p_1168->g_267.f0 p_1168->g_730 p_1168->g_319.f4
 * writes: p_1168->g_267.f5 p_1168->g_157.f5 p_1168->g_528 p_1168->g_460
 */
uint16_t  func_33(uint32_t  p_34, struct S6 * p_1168)
{ /* block id: 322 */
    VECTOR(int32_t, 16) l_697 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x63B99695L), 0x63B99695L), 0x63B99695L, (-5L), 0x63B99695L, (VECTOR(int32_t, 2))((-5L), 0x63B99695L), (VECTOR(int32_t, 2))((-5L), 0x63B99695L), (-5L), 0x63B99695L, (-5L), 0x63B99695L);
    VECTOR(int32_t, 16) l_698 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 5L), 5L), 5L, 1L, 5L, (VECTOR(int32_t, 2))(1L, 5L), (VECTOR(int32_t, 2))(1L, 5L), 1L, 5L, 1L, 5L);
    VECTOR(int32_t, 8) l_699 = (VECTOR(int32_t, 8))(0x54DFB0A6L, (VECTOR(int32_t, 4))(0x54DFB0A6L, (VECTOR(int32_t, 2))(0x54DFB0A6L, (-9L)), (-9L)), (-9L), 0x54DFB0A6L, (-9L));
    VECTOR(int16_t, 16) l_700 = (VECTOR(int16_t, 16))(0x28F8L, (VECTOR(int16_t, 4))(0x28F8L, (VECTOR(int16_t, 2))(0x28F8L, 0x4ABEL), 0x4ABEL), 0x4ABEL, 0x28F8L, 0x4ABEL, (VECTOR(int16_t, 2))(0x28F8L, 0x4ABEL), (VECTOR(int16_t, 2))(0x28F8L, 0x4ABEL), 0x28F8L, 0x4ABEL, 0x28F8L, 0x4ABEL);
    int32_t **l_704 = &p_1168->g_460;
    int32_t ***l_703 = &l_704;
    VECTOR(int16_t, 2) l_705 = (VECTOR(int16_t, 2))(9L, 2L);
    VECTOR(uint16_t, 16) l_706 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xB926L), 0xB926L), 0xB926L, 65535UL, 0xB926L, (VECTOR(uint16_t, 2))(65535UL, 0xB926L), (VECTOR(uint16_t, 2))(65535UL, 0xB926L), 65535UL, 0xB926L, 65535UL, 0xB926L);
    uint64_t *l_707[4];
    VECTOR(uint32_t, 16) l_710 = (VECTOR(uint32_t, 16))(0x42093C26L, (VECTOR(uint32_t, 4))(0x42093C26L, (VECTOR(uint32_t, 2))(0x42093C26L, 0UL), 0UL), 0UL, 0x42093C26L, 0UL, (VECTOR(uint32_t, 2))(0x42093C26L, 0UL), (VECTOR(uint32_t, 2))(0x42093C26L, 0UL), 0x42093C26L, 0UL, 0x42093C26L, 0UL);
    int16_t *l_713[2][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    struct S1 l_721 = {0x24651664L};
    struct S1 **l_724 = &p_1168->g_446;
    int16_t l_731 = 0x0B7CL;
    int i, j;
    for (i = 0; i < 4; i++)
        l_707[i] = (void*)0;
    l_699.s0 = ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_1168->g_696.xyyyyyxy)), ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_697.s56fcb25377b18f23)).s06)))).xxxxxyxxxxxyxxxy, ((VECTOR(int32_t, 8))(l_698.s7d7117f4)).s5207656063044266))).s8367, (int32_t)l_697.s2))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))((-9L), 0x345B4023L)).yyxx, ((VECTOR(int32_t, 16))(l_699.s6757054700755645)).sabfe, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_700.s3ce4685b)).odd)).wxyywzyw, ((VECTOR(int16_t, 4))((p_1168->g_105[1][1][2] > (safe_sub_func_int8_t_s_s(((void*)0 != l_703), 0x71L))), 0x7916L, 0L, 1L)).wwzxzxww))).s6655161406340503, ((VECTOR(uint16_t, 4))(0x9D39L, 1UL, 0x0794L, 65535UL)).yzxyyyyxxyxyzyzx))).sf022, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_705.yxxy)).xxxxywxyyzzxxxzw)).s2e, ((VECTOR(uint16_t, 16))(l_706.s44a7df86731eaf89)).s31))).xyyx))).wxyzxxww, ((VECTOR(int32_t, 2))(0x0C0C2271L, 1L)).xyxxxxyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 8))(p_34, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 2))(1L, 0x2AFAFD97L)).xyyy, (int32_t)((((((((***l_703) = p_34) ^ ((safe_mod_func_int16_t_s_s((p_1168->g_528.y = (((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 16))(l_710.s7dd1b91977ce0530)).s91))).lo & (safe_div_func_int8_t_s_s((-9L), p_1168->g_660.s5)))), p_1168->g_267.f4)) > p_1168->g_365.f1.f0)) != 0xE0D8037762E22A65L) > 0x52B8F0E426E547D9L) | p_34) > 0x5EB8L) == FAKE_DIVERGE(p_1168->group_0_offset, get_group_id(0), 10)), (int32_t)(***l_703)))), 0L, 0x59C153CAL, 0x09A36C0EL)).s0, ((VECTOR(int32_t, 2))((-5L))), 0x7B7664DDL, (-1L), ((VECTOR(int32_t, 4))(0x117625F9L)), 5L, ((VECTOR(int32_t, 2))(0x6FF82E9BL)), 0x1494454EL, (-7L), 2L)).s30, ((VECTOR(int32_t, 2))(0x5CDCF941L))))).yxyx))))).yyywwwyz))).s5, 4L, (-1L), 0x092D23B4L))))))))).s88b9, ((VECTOR(int32_t, 4))(0x29562F19L)), ((VECTOR(int32_t, 4))(1L))))).z;
    l_731 |= ((safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((GROUP_DIVERGE(1, 1) <= (*p_1168->g_460)), (safe_unary_minus_func_int8_t_s(((((l_721 , (l_721 , ((safe_lshift_func_uint16_t_u_u((l_724 == ((safe_add_func_uint8_t_u_u(((p_1168->g_727 , &p_1168->g_327) != &l_707[0]), (((((((!p_34) <= ((0x4596F758L || 1L) == 1UL)) != p_1168->g_505.f0.f0) ^ FAKE_DIVERGE(p_1168->global_1_offset, get_global_id(1), 10)) <= (*p_1168->g_278)) , p_34) < 0x22CC141B5E775D81L))) , (void*)0)), FAKE_DIVERGE(p_1168->group_2_offset, get_group_id(2), 10))) < (**l_704)))) , (void*)0) != (void*)0) & (-1L)))))), (-6L))), (**l_704))) , p_1168->g_730);
    (***l_703) ^= p_34;
    (*l_704) = (void*)0;
    return p_1168->g_319.f4;
}


/* ------------------------------------------ */
/* 
 * reads : p_1168->g_comm_values p_1168->g_58 p_1168->g_59 p_1168->g_62 p_1168->g_63 p_1168->g_28 p_1168->l_comm_values p_1168->g_109 p_1168->g_26 p_1168->g_119 p_1168->g_137 p_1168->g_105 p_1168->g_150 p_1168->g_153 p_1168->g_129 p_1168->g_157.f0 p_1168->g_157.f2 p_1168->g_179 p_1168->g_122 p_1168->g_27 p_1168->g_24 p_1168->g_85 p_1168->g_199 p_1168->g_215 p_1168->g_216 p_1168->g_218 p_1168->g_219 p_1168->g_234 p_1168->g_235 p_1168->g_157.f5 p_1168->g_267 p_1168->g_277 p_1168->g_278 p_1168->g_179.f2 p_1168->g_365 p_1168->g_366 p_1168->g_319 p_1168->g_375 p_1168->g_77 p_1168->g_179.f0 p_1168->g_390 p_1168->g_399 p_1168->g_424 p_1168->g_445 p_1168->g_422.f3 p_1168->g_460 p_1168->g_157.f9 p_1168->g_179.f4.f1.f0 p_1168->g_505 p_1168->g_269.f0 p_1168->g_521 p_1168->g_528 p_1168->g_339 p_1168->g_269.f4 p_1168->g_327 p_1168->g_566 p_1168->g_157.f4 p_1168->g_616 p_1168->g_382 p_1168->g_179.f4.f2 p_1168->g_414 p_1168->g_660 p_1168->g_179.f4.f0 p_1168->g_681 p_1168->g_688 p_1168->g_690
 * writes: p_1168->g_77 p_1168->g_105 p_1168->g_109 p_1168->g_150 p_1168->g_62.f4 p_1168->g_122 p_1168->g_158 p_1168->g_157.f5 p_1168->g_157.f0 p_1168->g_58 p_1168->g_24 p_1168->g_195 p_1168->g_157.f7 p_1168->g_199 p_1168->g_179.f1.f0 p_1168->g_119 p_1168->g_216 p_1168->g_235 p_1168->g_269 p_1168->g_277 p_1168->g_267.f0 p_1168->g_179.f2 p_1168->g_179.f4 p_1168->g_365.f3 p_1168->g_382 p_1168->g_267.f5 p_1168->g_179.f0 p_1168->g_336 p_1168->g_446 p_1168->g_422.f3 p_1168->g_460 p_1168->g_157.f9 p_1168->g_157.f2 p_1168->g_365.f1.f0 p_1168->g_267.f4 p_1168->g_522 p_1168->g_157.f4 p_1168->g_267.f1 p_1168->g_424 p_1168->g_375
 */
uint16_t  func_37(int32_t  p_38, int32_t  p_39, uint32_t  p_40, int32_t  p_41, int64_t  p_42, struct S6 * p_1168)
{ /* block id: 5 */
    struct S1 l_51 = {-2L};
    uint32_t l_57 = 0xB632CC17L;
    VECTOR(int16_t, 16) l_60 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x7570L), 0x7570L), 0x7570L, 0L, 0x7570L, (VECTOR(int16_t, 2))(0L, 0x7570L), (VECTOR(int16_t, 2))(0L, 0x7570L), 0L, 0x7570L, 0L, 0x7570L);
    int8_t *l_76 = &p_1168->g_77[4];
    int32_t l_78[3][7] = {{(-1L),0x6C12BCECL,0x6C12BCECL,(-1L),(-1L),0x6C12BCECL,0x6C12BCECL},{(-1L),0x6C12BCECL,0x6C12BCECL,(-1L),(-1L),0x6C12BCECL,0x6C12BCECL},{(-1L),0x6C12BCECL,0x6C12BCECL,(-1L),(-1L),0x6C12BCECL,0x6C12BCECL}};
    struct S2 *l_694 = &p_1168->g_375;
    int i, j;
    (*l_694) = func_43(p_1168->g_comm_values[p_1168->tid], (safe_rshift_func_uint8_t_u_s(255UL, 2)), l_51, (((func_52((((safe_mod_func_uint16_t_u_u(l_57, ((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_1168->g_58.sfd)), 5L, 0x3B3EL)), 0x6CD0L, ((VECTOR(int16_t, 8))(p_1168->g_59.yyxyxxyx)), 0x7424L, 0x7C01L, 1L)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_60.s066be38a)).s0012656457733770))))).sd)) && (((safe_unary_minus_func_uint64_t_u(7UL)) < l_60.sa) != (((!(p_1168->g_62[6] , (((VECTOR(int8_t, 4))(p_1168->g_63.s7072)).z ^ func_64((l_78[0][0] = ((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((*l_76) = p_1168->g_comm_values[p_1168->tid]), l_57)), p_42)) > (-1L)), p_1168->g_28.s2)), 3L)) , (-7L))), l_51, p_1168->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1168->tid, 150))], p_1168)))) | p_42) | 0x0EE0L))) & 0L), p_1168->g_157.f2, p_1168) , 0x2161018CL) , 4294967295UL) & p_1168->g_63.s3), p_1168->g_339, p_1168);
    return p_1168->g_505.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_1168->g_278 p_1168->g_269.f4 p_1168->g_327 p_1168->g_277 p_1168->g_460 p_1168->g_267.f5 p_1168->g_157.f5 p_1168->g_179.f0 p_1168->g_267.f0 p_1168->g_566 p_1168->g_157.f4 p_1168->g_267.f1 p_1168->g_422.f3 p_1168->g_137.f1.f0 p_1168->g_616 p_1168->g_382 p_1168->g_27 p_1168->g_105 p_1168->g_179.f4.f2 p_1168->g_414 p_1168->g_122 p_1168->g_267.f6 p_1168->g_28 p_1168->g_660 p_1168->g_179.f4.f0 p_1168->g_109 p_1168->g_681 p_1168->g_119.f1 p_1168->g_688 p_1168->g_690
 * writes: p_1168->g_119.f1 p_1168->g_267.f0 p_1168->g_267.f5 p_1168->g_157.f5 p_1168->g_179.f0 p_1168->g_157.f4 p_1168->g_267.f1 p_1168->g_422.f3 p_1168->g_179.f4.f3 p_1168->g_105 p_1168->g_424 p_1168->g_109 p_1168->g_122 p_1168->g_77
 */
struct S2  func_43(uint64_t  p_44, uint32_t  p_45, struct S1  p_46, uint32_t  p_47, uint8_t  p_48, struct S6 * p_1168)
{ /* block id: 265 */
    uint32_t l_529 = 4294967295UL;
    uint64_t **l_530 = &p_1168->g_327;
    VECTOR(int16_t, 8) l_531 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
    struct S3 *l_543 = (void*)0;
    VECTOR(uint64_t, 16) l_544 = (VECTOR(uint64_t, 16))(0x9F7514E4D6933B13L, (VECTOR(uint64_t, 4))(0x9F7514E4D6933B13L, (VECTOR(uint64_t, 2))(0x9F7514E4D6933B13L, 1UL), 1UL), 1UL, 0x9F7514E4D6933B13L, 1UL, (VECTOR(uint64_t, 2))(0x9F7514E4D6933B13L, 1UL), (VECTOR(uint64_t, 2))(0x9F7514E4D6933B13L, 1UL), 0x9F7514E4D6933B13L, 1UL, 0x9F7514E4D6933B13L, 1UL);
    VECTOR(int32_t, 4) l_565 = (VECTOR(int32_t, 4))(0x3B896C9EL, (VECTOR(int32_t, 2))(0x3B896C9EL, 0x1DC705D4L), 0x1DC705D4L);
    VECTOR(int64_t, 4) l_570 = (VECTOR(int64_t, 4))(0x2D365A8F043A87C8L, (VECTOR(int64_t, 2))(0x2D365A8F043A87C8L, 0x5615F762804F1F20L), 0x5615F762804F1F20L);
    int32_t l_586 = (-1L);
    uint32_t l_649 = 4294967287UL;
    int i;
    if (((l_529 & 0x082DL) , (l_530 == (void*)0)))
    { /* block id: 266 */
        uint16_t l_536 = 65533UL;
        int8_t *l_539 = (void*)0;
        int8_t *l_540[1][5][2] = {{{&p_1168->g_77[4],&p_1168->g_77[1]},{&p_1168->g_77[4],&p_1168->g_77[1]},{&p_1168->g_77[4],&p_1168->g_77[1]},{&p_1168->g_77[4],&p_1168->g_77[1]},{&p_1168->g_77[4],&p_1168->g_77[1]}}};
        uint64_t l_545 = 0x85E5B5D7633DC109L;
        int32_t l_546 = 0L;
        int i, j, k;
        l_546 = (((l_529 > (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(l_531.s04)), ((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 8))((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(l_536, (safe_mul_func_int8_t_s_s((p_1168->g_119[3].f1 = l_536), ((safe_lshift_func_uint16_t_u_s(65528UL, 13)) ^ (((void*)0 == l_543) || ((VECTOR(uint64_t, 16))(l_544.sd3cabe348f3d5633)).s6)))))) || (7L && ((*p_1168->g_278) = GROUP_DIVERGE(0, 1)))), 5)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(l_545, (+l_544.se), ((VECTOR(int16_t, 8))(8L)), p_1168->g_269.f4, 0x338AL, (-1L), 1L, 1L, (-1L))).s11, ((VECTOR(int16_t, 2))(0x25D5L))))).xyyy)).even)), (-1L), ((VECTOR(int16_t, 4))(0x65A0L)))), ((VECTOR(int16_t, 8))(9L))))).s01)))))), 1L, 0x4A81L)).z >= 7L)) || l_545) && 2UL);
    }
    else
    { /* block id: 270 */
        uint64_t *l_551 = &p_1168->g_422.f3;
        VECTOR(uint32_t, 16) l_552 = (VECTOR(uint32_t, 16))(0xD3FD2B59L, (VECTOR(uint32_t, 4))(0xD3FD2B59L, (VECTOR(uint32_t, 2))(0xD3FD2B59L, 4294967288UL), 4294967288UL), 4294967288UL, 0xD3FD2B59L, 4294967288UL, (VECTOR(uint32_t, 2))(0xD3FD2B59L, 4294967288UL), (VECTOR(uint32_t, 2))(0xD3FD2B59L, 4294967288UL), 0xD3FD2B59L, 4294967288UL, 0xD3FD2B59L, 4294967288UL);
        uint32_t ***l_555[2][10] = {{&p_1168->g_277,(void*)0,&p_1168->g_277,(void*)0,&p_1168->g_277,&p_1168->g_277,(void*)0,&p_1168->g_277,(void*)0,&p_1168->g_277},{&p_1168->g_277,(void*)0,&p_1168->g_277,(void*)0,&p_1168->g_277,&p_1168->g_277,(void*)0,&p_1168->g_277,(void*)0,&p_1168->g_277}};
        int32_t *l_558 = &p_1168->g_267.f5;
        int32_t **l_562 = &p_1168->g_235;
        int8_t l_575[1];
        int32_t l_576 = 0x5A2A7721L;
        int32_t l_577 = (-9L);
        int32_t l_578 = 1L;
        int32_t l_579 = 1L;
        int32_t l_580 = (-1L);
        int32_t l_581 = 4L;
        int32_t l_582 = 1L;
        int32_t l_583 = 0x54CBF25CL;
        int32_t l_584 = (-8L);
        int32_t l_585 = 0L;
        int32_t l_587 = 0x7D1776A7L;
        int32_t l_588 = (-8L);
        int32_t l_589 = 0x5C54F079L;
        int32_t l_590 = 0x0CDFA338L;
        int32_t l_591 = 0L;
        int32_t l_592 = 1L;
        int32_t l_593 = (-6L);
        int32_t l_594[9] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
        VECTOR(uint16_t, 8) l_644 = (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 65526UL), 65526UL), 65526UL, 8UL, 65526UL);
        VECTOR(int8_t, 4) l_682 = (VECTOR(int8_t, 4))(0x65L, (VECTOR(int8_t, 2))(0x65L, (-5L)), (-5L));
        int i, j;
        for (i = 0; i < 1; i++)
            l_575[i] = 0x18L;
        (*p_1168->g_460) |= (safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((l_551 != p_1168->g_327), GROUP_DIVERGE(1, 1))), (((**p_1168->g_277) = (4294967295UL >= ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_552.s11658549)).s03)).odd)) != (safe_sub_func_uint32_t_u_u(0x8ED2C07EL, ((void*)0 != l_555[0][9]))))));
        for (p_1168->g_179.f0 = 0; (p_1168->g_179.f0 > (-21)); p_1168->g_179.f0 = safe_sub_func_int32_t_s_s(p_1168->g_179.f0, 3))
        { /* block id: 275 */
            int32_t *l_559[6][1][4] = {{{&p_1168->g_157.f5,&p_1168->g_150,&p_1168->g_157.f5,&p_1168->g_157.f5}},{{&p_1168->g_157.f5,&p_1168->g_150,&p_1168->g_157.f5,&p_1168->g_157.f5}},{{&p_1168->g_157.f5,&p_1168->g_150,&p_1168->g_157.f5,&p_1168->g_157.f5}},{{&p_1168->g_157.f5,&p_1168->g_150,&p_1168->g_157.f5,&p_1168->g_157.f5}},{{&p_1168->g_157.f5,&p_1168->g_150,&p_1168->g_157.f5,&p_1168->g_157.f5}},{{&p_1168->g_157.f5,&p_1168->g_150,&p_1168->g_157.f5,&p_1168->g_157.f5}}};
            int32_t **l_561 = &l_559[4][0][1];
            int32_t ***l_560[3][10] = {{&l_561,&l_561,&l_561,&l_561,&l_561,&l_561,&l_561,&l_561,&l_561,&l_561},{&l_561,&l_561,&l_561,&l_561,&l_561,&l_561,&l_561,&l_561,&l_561,&l_561},{&l_561,&l_561,&l_561,&l_561,&l_561,&l_561,&l_561,&l_561,&l_561,&l_561}};
            struct S1 **l_567[6][9][4] = {{{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446}},{{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446}},{{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446}},{{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446}},{{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446}},{{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446},{&p_1168->g_446,&p_1168->g_446,&p_1168->g_446,&p_1168->g_446}}};
            uint32_t l_595 = 0xA154CEDDL;
            int i, j, k;
            l_559[0][0][2] = l_558;
            (*l_558) = (((((l_562 = &l_559[0][0][2]) != (((safe_div_func_uint32_t_u_u((**p_1168->g_277), ((VECTOR(int32_t, 16))(l_565.zyywwwwxzzyzxxyw)).sd)) & (p_1168->g_566[3] , ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(1L, 0x6D3AL)), ((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 16))(((*l_558) != ((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))(1L, ((((FAKE_DIVERGE(p_1168->group_0_offset, get_group_id(0), 10) > (0x1DL == ((VECTOR(int8_t, 4))(p_48, 0x17L, 0x7DL, (-1L))).y)) && (((void*)0 == l_567[0][3][0]) ^ ((safe_div_func_uint32_t_u_u((((VECTOR(int64_t, 16))(l_570.zyxwwwwxxxwxyzzz)).s7 && (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((-1L), l_575[0])), 1UL))), l_531.s3)) && 0x60B90A964D769003L))) <= (**p_1168->g_277)) <= p_1168->g_365.f2), 0L, 0x15F7B51EA89D0CDEL)).hi, ((VECTOR(int64_t, 2))(8L))))).yxxxyyyx, ((VECTOR(int64_t, 8))((-1L)))))).s1), ((VECTOR(int16_t, 2))(1L)), 0x00EAL, ((VECTOR(int16_t, 4))(0x70ABL)), p_1168->g_216.f3, 0x2F6EL, 0L, ((VECTOR(int16_t, 4))(0x7C29L)), 0x1553L)).lo, (int16_t)p_1168->g_109, (int16_t)(*l_558)))).s4351624563220467, ((VECTOR(int16_t, 16))(7L))))).hi)).even, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 4))(0x64DDL))))), 0x03ADL, 0x229BL)).s4)) , &p_1168->g_439[7][0][1])) < 1UL) <= 0L) <= 0x0CAFDBEFL);
            l_595--;
        }
        for (p_1168->g_157.f4 = 0; (p_1168->g_157.f4 != 34); ++p_1168->g_157.f4)
        { /* block id: 283 */
            uint64_t l_627 = 18446744073709551610UL;
            VECTOR(uint16_t, 2) l_652 = (VECTOR(uint16_t, 2))(0UL, 0UL);
            VECTOR(uint8_t, 4) l_653 = (VECTOR(uint8_t, 4))(0xACL, (VECTOR(uint8_t, 2))(0xACL, 0x43L), 0x43L);
            int32_t **l_659[10] = {&l_558,&p_1168->g_235,&l_558,&l_558,&p_1168->g_235,&l_558,&l_558,&p_1168->g_235,&l_558,&l_558};
            VECTOR(uint8_t, 8) l_667 = (VECTOR(uint8_t, 8))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0xD1L), 0xD1L), 0xD1L, 3UL, 0xD1L);
            uint8_t *l_670 = (void*)0;
            uint8_t *l_671[6][1][3] = {{{(void*)0,&p_1168->g_424,(void*)0}},{{(void*)0,&p_1168->g_424,(void*)0}},{{(void*)0,&p_1168->g_424,(void*)0}},{{(void*)0,&p_1168->g_424,(void*)0}},{{(void*)0,&p_1168->g_424,(void*)0}},{{(void*)0,&p_1168->g_424,(void*)0}}};
            VECTOR(uint8_t, 4) l_676 = (VECTOR(uint8_t, 4))(0x37L, (VECTOR(uint8_t, 2))(0x37L, 255UL), 255UL);
            int8_t *l_683 = (void*)0;
            int8_t *l_684[4][8][5] = {{{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]}},{{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]}},{{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]}},{{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]},{&p_1168->g_119[3].f1,&p_1168->g_119[3].f1,&l_575[0],&p_1168->g_77[6],&l_575[0]}}};
            int8_t **l_685 = &l_684[1][3][2];
            int8_t *l_686 = (void*)0;
            int8_t *l_687 = &p_1168->g_119[3].f1;
            int16_t l_689 = 0x2422L;
            int i, j, k;
            for (p_1168->g_267.f1 = 6; (p_1168->g_267.f1 != 52); p_1168->g_267.f1 = safe_add_func_uint32_t_u_u(p_1168->g_267.f1, 4))
            { /* block id: 286 */
                uint16_t l_607[7][9][3] = {{{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL}},{{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL}},{{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL}},{{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL}},{{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL}},{{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL}},{{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL},{0x0F23L,65527UL,0UL}}};
                int32_t l_617[4];
                int32_t l_628 = 0x01527893L;
                int8_t *l_633[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int16_t *l_647 = (void*)0;
                int16_t *l_648[5][6][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                uint8_t *l_654 = (void*)0;
                uint8_t *l_655 = (void*)0;
                uint8_t *l_656 = (void*)0;
                uint8_t *l_657 = &p_1168->g_424;
                int64_t *l_658 = &p_1168->g_105[0][7][4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_617[i] = (-5L);
                for (l_529 = 5; (l_529 < 54); l_529 = safe_add_func_int16_t_s_s(l_529, 6))
                { /* block id: 289 */
                    int32_t *l_604 = &p_1168->g_179.f0;
                    int32_t *l_605 = &l_589;
                    int32_t *l_606[2][8] = {{&p_1168->g_267.f5,(void*)0,&p_1168->g_267.f5,&p_1168->g_267.f5,(void*)0,&p_1168->g_267.f5,&p_1168->g_267.f5,(void*)0},{&p_1168->g_267.f5,(void*)0,&p_1168->g_267.f5,&p_1168->g_267.f5,(void*)0,&p_1168->g_267.f5,&p_1168->g_267.f5,(void*)0}};
                    int64_t *l_626 = &p_1168->g_105[0][5][2];
                    int i, j;
                    ++l_607[4][5][1];
                    l_628 ^= ((*l_605) = (safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u(p_46.f0, 8)) , (((((*l_551) &= p_45) == ((p_1168->g_137.f1.f0 != 0x56FBL) , ((*l_626) ^= ((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(p_1168->g_616.s8a80c4ae)).hi)).z , (l_617[2] |= (FAKE_DIVERGE(p_1168->global_1_offset, get_global_id(1), 10) , 1L))) < (safe_div_func_int16_t_s_s((+(((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((l_565.x && (((void*)0 != p_1168->g_382[4]) ^ (p_1168->g_179.f4.f3 = ((VECTOR(uint64_t, 8))(0xF2527958B6FEC085L, p_47, ((VECTOR(uint64_t, 4))(1UL)), 0x10D43B0B237A400BL, 0x4B009509D9083988L)).s2))), p_1168->g_27.x)) <= p_47), FAKE_DIVERGE(p_1168->group_2_offset, get_group_id(2), 10))) != 0x24AAA25755F02D1EL), (*p_1168->g_460))) != p_45) , l_607[4][5][1])), 0x486FL)))))) != 0x17E753EEL) != 0xB78A92364230D9F9L)), l_627)), p_47)));
                }
                l_586 ^= (safe_div_func_int8_t_s_s((((((*l_658) |= (safe_mod_func_uint64_t_u_u((((l_565.z ^= (-1L)) <= ((*l_558) = p_1168->g_179.f4.f2)) ^ ((safe_mul_func_int8_t_s_s(((5L | 0UL) , (safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((-7L), 5)), (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(((p_44 > (safe_lshift_func_uint8_t_u_u(((*l_657) = (((VECTOR(uint16_t, 4))(l_644.s0102)).y || (safe_div_func_int16_t_s_s((l_649 = p_1168->g_414.s7), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 4))(1UL, (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_1168->group_1_offset, get_group_id(1), 10), l_617[3])), 0xB63EL, 1UL)).xwyyxxywxywxwywx, ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(l_652.yxxy)).xwwwywwzwwwyyyxy, ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 2))(252UL, 0x44L)).yxyyyxyyyyyyyyxx))), ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_653.xxwy)).ywxxxwxwyyzwzyyy)))).sf00c, (uint8_t)p_1168->g_122.s4, (uint8_t)0xBDL))).xzwxzyzyzywwyxww))).sa244, (uint16_t)p_1168->g_267.f6, (uint16_t)0xBB6EL))).lo, ((VECTOR(uint16_t, 2))(7UL))))).xxxyxxxxyxyxyyyx))).sf3f9)).yxywyyxw, ((VECTOR(uint16_t, 8))(1UL))))).s3055775202022737))).lo)).s5)))), GROUP_DIVERGE(0, 1)))) == l_570.z), 0x10L, ((VECTOR(int8_t, 8))(0x2DL)), 0L, (-1L), ((VECTOR(int8_t, 4))(0L)))).s3, 0))))), l_570.w)) != l_531.s2)), p_1168->g_28.s0))) , l_659[2]) == &p_1168->g_460) && p_45), 0x80L));
            }
            (*p_1168->g_460) = (l_544.s2 <= ((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 4))(p_1168->g_660.s4441)).wwxxxwww, ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((p_1168->g_77[4] = (safe_add_func_int16_t_s_s(p_1168->g_179.f4.f0, ((((safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (safe_div_func_uint8_t_u_u((p_47 , (((VECTOR(uint8_t, 4))(0x2EL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_667.s7351)).even)), 1UL)).y < (safe_sub_func_uint16_t_u_u(p_44, p_47)))), (++p_48))))) > (safe_lshift_func_uint8_t_u_u((l_586 ^= (p_1168->g_122.s7 = ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_676.xyzwyyww)).s0543761637041074)).s45, (uint8_t)(safe_rshift_func_uint16_t_u_u((p_1168->g_109--), 2))))).hi)), (l_565.y |= ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_1168->g_681.s48ee)).yxyxzzxx)).s3)))) | ((VECTOR(int8_t, 16))(l_682.zxzwyyywxzwwywyy)).s5) , l_565.x)))) | ((*l_687) ^= (((*l_685) = (void*)0) == &l_575[0]))), ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_1168->g_688.sd44932d0)).s22)).xxxyxyxx)).hi)).wzwxwyxz, (int8_t)p_48, (int8_t)l_689))), ((VECTOR(int8_t, 2))(0x5BL)), p_46.f0, 3L, 0x03L, 0x2AL, 0x78L)).sd2)).yyyyyyxx, (int8_t)p_45))).s54)))).yxyyyxyx)).odd)).yxwzxxzw, ((VECTOR(int8_t, 8))(0x11L)))))))).s4);
            l_593 &= (*l_558);
        }
    }
    return p_1168->g_690;
}


/* ------------------------------------------ */
/* 
 * reads : p_1168->g_365 p_1168->g_366 p_1168->g_319 p_1168->g_375 p_1168->g_199.f0.f0 p_1168->g_77 p_1168->g_267.f5 p_1168->g_179.f0 p_1168->g_390 p_1168->g_399 p_1168->g_424 p_1168->g_157.f5 p_1168->g_445 p_1168->g_422.f3 p_1168->g_28 p_1168->g_129 p_1168->g_277 p_1168->g_278 p_1168->g_460 p_1168->g_157.f9 p_1168->g_157.f2 p_1168->g_179.f4.f1.f0 p_1168->g_505 p_1168->g_269.f0 p_1168->g_27 p_1168->g_267.f4 p_1168->g_521 p_1168->g_528 p_1168->g_comm_values
 * writes: p_1168->g_179.f4 p_1168->g_365.f3 p_1168->g_382 p_1168->g_267.f5 p_1168->g_179.f0 p_1168->g_235 p_1168->g_119.f1 p_1168->g_77 p_1168->g_157.f5 p_1168->g_336 p_1168->g_446 p_1168->g_422.f3 p_1168->g_460 p_1168->g_267.f0 p_1168->g_157.f9 p_1168->g_157.f2 p_1168->g_365.f1.f0 p_1168->g_267.f4 p_1168->g_522
 */
int8_t  func_52(int32_t  p_53, int64_t  p_54, struct S6 * p_1168)
{ /* block id: 153 */
    int16_t l_369 = 0x4450L;
    uint64_t *l_370 = (void*)0;
    uint64_t *l_371 = &p_1168->g_365.f3;
    struct S0 l_372 = {0x71A6E7CCF20800CCL,0L,0x14EA87FBL};
    int16_t l_376 = 0L;
    uint32_t *l_380 = &p_1168->g_269.f6;
    uint32_t **l_381[6][7][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint8_t *l_383 = (void*)0;
    int32_t l_384 = 0L;
    int32_t l_385 = 4L;
    VECTOR(int32_t, 16) l_410 = (VECTOR(int32_t, 16))(0x2AD4B5F3L, (VECTOR(int32_t, 4))(0x2AD4B5F3L, (VECTOR(int32_t, 2))(0x2AD4B5F3L, 0x1D458869L), 0x1D458869L), 0x1D458869L, 0x2AD4B5F3L, 0x1D458869L, (VECTOR(int32_t, 2))(0x2AD4B5F3L, 0x1D458869L), (VECTOR(int32_t, 2))(0x2AD4B5F3L, 0x1D458869L), 0x2AD4B5F3L, 0x1D458869L, 0x2AD4B5F3L, 0x1D458869L);
    struct S4 *l_421 = &p_1168->g_422;
    VECTOR(uint16_t, 2) l_506 = (VECTOR(uint16_t, 2))(65531UL, 1UL);
    int i, j, k;
    (*p_1168->g_366) = p_1168->g_365;
    if ((safe_mod_func_uint64_t_u_u((((((*l_371) = l_369) , l_372) , (l_384 &= (safe_rshift_func_uint16_t_u_u((p_1168->g_319 , ((p_1168->g_375 , (l_372.f2 <= ((VECTOR(uint64_t, 8))(0x2821D64F1DF2DCF2L, l_376, ((VECTOR(uint64_t, 2))(1UL, 1UL)), (safe_unary_minus_func_int8_t_s((safe_div_func_int16_t_s_s(((l_380 != (p_1168->g_382[4] = l_380)) & (!l_369)), l_376)))), 18446744073709551615UL, 0UL, 0x447A5D9C04F62833L)).s4)) == p_1168->g_199.f0.f0)), p_1168->g_77[2])))) , p_54), p_54)))
    { /* block id: 158 */
        int32_t *l_386 = &p_1168->g_267.f5;
        VECTOR(int32_t, 4) l_429 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x31114D65L), 0x31114D65L);
        int i;
        if (((*l_386) &= l_385))
        { /* block id: 160 */
            int32_t *l_389 = (void*)0;
            int32_t **l_391 = &l_386;
            VECTOR(int32_t, 2) l_408 = (VECTOR(int32_t, 2))((-7L), 0x704055A1L);
            int8_t *l_436[4];
            int8_t **l_435 = &l_436[3];
            int8_t ***l_434 = &l_435;
            int i;
            for (i = 0; i < 4; i++)
                l_436[i] = &p_1168->g_119[3].f1;
            for (p_1168->g_179.f0 = 3; (p_1168->g_179.f0 > 14); p_1168->g_179.f0++)
            { /* block id: 163 */
                (*p_1168->g_390) = l_389;
            }
            (*l_391) = (void*)0;
            for (p_54 = 7; (p_54 < 8); ++p_54)
            { /* block id: 169 */
                int16_t l_394 = 0L;
                struct S0 l_403 = {-1L,-1L,0x39AE9237L};
                VECTOR(int32_t, 16) l_407 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x7AA7E2D4L), 0x7AA7E2D4L), 0x7AA7E2D4L, (-3L), 0x7AA7E2D4L, (VECTOR(int32_t, 2))((-3L), 0x7AA7E2D4L), (VECTOR(int32_t, 2))((-3L), 0x7AA7E2D4L), (-3L), 0x7AA7E2D4L, (-3L), 0x7AA7E2D4L);
                int32_t l_411 = 0x143878ACL;
                VECTOR(int32_t, 16) l_412 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x22483151L), 0x22483151L), 0x22483151L, 1L, 0x22483151L, (VECTOR(int32_t, 2))(1L, 0x22483151L), (VECTOR(int32_t, 2))(1L, 0x22483151L), 1L, 0x22483151L, 1L, 0x22483151L);
                struct S3 *l_431 = &p_1168->g_267;
                int i;
                if (l_394)
                { /* block id: 170 */
                    int64_t *l_402 = &p_1168->g_105[0][4][0];
                    int8_t *l_404 = &p_1168->g_119[3].f1;
                    int32_t l_413 = (-3L);
                    int64_t *l_423[3];
                    int8_t *l_425 = (void*)0;
                    int8_t *l_426 = (void*)0;
                    int8_t *l_427 = &p_1168->g_77[1];
                    int32_t *l_428 = &p_1168->g_157.f5;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_423[i] = &p_1168->g_105[0][4][0];
                    atomic_add(&p_1168->g_atomic_reduction[get_linear_group_id()], 0x0A14CACBL + get_linear_global_id());
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1168->v_collective += p_1168->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    (*l_428) ^= (safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s((l_385 |= (p_1168->g_399 , ((*l_427) = (((safe_add_func_uint64_t_u_u(((l_402 = &p_54) == (l_403 , &p_1168->g_105[1][4][4])), 0x704C418A2515927CL)) ^ ((*l_404) = 0x2DL)) < (safe_mul_func_int8_t_s_s((((l_384 ^= (l_411 = ((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(l_407.s773189bf)).s20, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(l_408.yy)).xxxx, ((VECTOR(int32_t, 16))(p_1168->g_409.wywzwyyzxyzyxyxw)).sebc8))).even))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_410.s2934)))).lo))), 0L)).y)) < ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_412.sda48b7a7)).s67, ((VECTOR(int32_t, 2))(0x39FA1EDFL, 0x76F60732L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_413, ((VECTOR(int32_t, 2))(p_1168->g_414.sde)), (-1L), (safe_sub_func_uint64_t_u_u(((l_412.s7 |= ((safe_div_func_uint64_t_u_u((p_53 & (((safe_sub_func_int64_t_s_s(p_1168->g_24.sc, l_403.f2)) , (void*)0) != l_421)), FAKE_DIVERGE(p_1168->local_0_offset, get_local_id(0), 10))) | p_1168->g_63.s5)) == p_53), 0x83BD03F238A44014L)), 0x37613B25L, p_53, p_54, 0L, (-6L), p_1168->g_267.f0, l_372.f0, ((VECTOR(int32_t, 2))(0x288AE3D8L)), 0x0B4A76F1L, (-1L))).s00))))).lo) ^ p_1168->g_424), 0x8FL)))))), 0L)), p_54));
                }
                else
                { /* block id: 180 */
                    struct S3 *l_430[10][10][2] = {{{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157}},{{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157}},{{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157}},{{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157}},{{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157}},{{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157}},{{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157}},{{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157}},{{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157}},{{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157},{&p_1168->g_157,&p_1168->g_157}}};
                    int32_t *l_432 = (void*)0;
                    int32_t *l_433[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_437 = (void*)0;
                    int32_t *l_441[9][1] = {{&p_1168->g_157.f5},{&p_1168->g_157.f5},{&p_1168->g_157.f5},{&p_1168->g_157.f5},{&p_1168->g_157.f5},{&p_1168->g_157.f5},{&p_1168->g_157.f5},{&p_1168->g_157.f5},{&p_1168->g_157.f5}};
                    int i, j, k;
                    l_408.y ^= ((VECTOR(int32_t, 4))(l_429.wxyx)).w;
                    l_408.y = ((p_53 = (l_430[5][4][1] != l_431)) , ((&p_1168->g_219 == l_434) ^ p_54));
                }
                for (p_1168->g_336 = (-1); (p_1168->g_336 != 44); p_1168->g_336 = safe_add_func_uint16_t_u_u(p_1168->g_336, 6))
                { /* block id: 187 */
                    struct S1 *l_444 = &p_1168->g_199.f0;
                    (*p_1168->g_445) = l_444;
                }
                for (p_1168->g_422.f3 = 0; (p_1168->g_422.f3 > 49); p_1168->g_422.f3 = safe_add_func_int64_t_s_s(p_1168->g_422.f3, 9))
                { /* block id: 192 */
                    (*l_391) = l_386;
                }
            }
        }
        else
        { /* block id: 196 */
            int32_t l_450 = 0x2DB59CDBL;
            int32_t l_456[9] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
            uint32_t l_457 = 4294967295UL;
            struct S0 *l_465 = &p_1168->g_119[3];
            int i;
            if ((l_410.sc ^ l_372.f2))
            { /* block id: 197 */
                int32_t *l_449 = (void*)0;
                int32_t *l_451 = &p_1168->g_269.f5;
                int32_t *l_452 = (void*)0;
                int32_t *l_453 = &p_1168->g_179.f0;
                int32_t *l_454 = &p_1168->g_150;
                int32_t *l_455[3][7] = {{&p_1168->g_150,&l_384,&l_384,&p_1168->g_150,&p_1168->g_150,&l_384,&l_384},{&p_1168->g_150,&l_384,&l_384,&p_1168->g_150,&p_1168->g_150,&l_384,&l_384},{&p_1168->g_150,&l_384,&l_384,&p_1168->g_150,&p_1168->g_150,&l_384,&l_384}};
                int i, j;
                l_457--;
            }
            else
            { /* block id: 199 */
                int8_t *l_466 = &p_1168->g_77[4];
                int32_t l_467 = 0x136054B0L;
                p_1168->g_460 = l_386;
                atomic_and(&p_1168->g_atomic_reduction[get_linear_group_id()], (&p_1168->g_219 == (((safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s((l_465 == (void*)0), (*l_386))) >= 2UL), ((p_1168->g_28.s7 ^ 254UL) != ((*l_466) = 1L)))) >= l_467) , &p_1168->g_219)));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1168->v_collective += p_1168->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
        }
        if ((atomic_inc(&p_1168->l_atomic_input[41]) == 6))
        { /* block id: 206 */
            int32_t l_468 = 0x1EA2697DL;
            int32_t l_474 = 8L;
            uint8_t l_475 = 2UL;
            uint32_t l_476[2];
            uint8_t l_477 = 8UL;
            int i;
            for (i = 0; i < 2; i++)
                l_476[i] = 4294967295UL;
            for (l_468 = 4; (l_468 == (-7)); l_468--)
            { /* block id: 209 */
                struct S4 l_471 = {7UL,{0x592FC4B0L},-6L,0xBE4A14458C6CE449L};/* VOLATILE GLOBAL l_471 */
                struct S4 l_472 = {0xC30DC48EL,{-6L},0x5A0414CF7988A134L,18446744073709551614UL};/* VOLATILE GLOBAL l_472 */
                struct S4 *l_473[9] = {&l_472,&l_472,&l_472,&l_472,&l_472,&l_472,&l_472,&l_472,&l_472};
                int i;
                l_472 = l_471;
                l_473[0] = l_473[6];
            }
            l_476[0] = (l_475 = l_474);
            l_474 |= l_477;
            unsigned int result = 0;
            result += l_468;
            result += l_474;
            result += l_475;
            int l_476_i0;
            for (l_476_i0 = 0; l_476_i0 < 2; l_476_i0++) {
                result += l_476[l_476_i0];
            }
            result += l_477;
            atomic_add(&p_1168->l_special_values[41], result);
        }
        else
        { /* block id: 216 */
            (1 + 1);
        }
    }
    else
    { /* block id: 219 */
        int32_t *l_478 = (void*)0;
        int32_t *l_479 = &l_385;
        int32_t *l_480 = &l_384;
        int32_t *l_481 = &p_1168->g_179.f0;
        int32_t *l_482 = &p_1168->g_150;
        int32_t *l_483[9][10][2] = {{{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5}},{{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5}},{{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5}},{{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5}},{{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5}},{{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5}},{{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5}},{{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5}},{{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5},{&l_385,&p_1168->g_267.f5}}};
        uint32_t l_484 = 0xA51AA528L;
        int i, j, k;
        l_484++;
        (*p_1168->g_460) |= ((p_1168->g_129.s0 != 1L) <= (((**p_1168->g_277) = p_53) || p_53));
    }
    for (p_1168->g_157.f9 = 0; (p_1168->g_157.f9 <= 17); ++p_1168->g_157.f9)
    { /* block id: 226 */
        int32_t l_496[4] = {1L,1L,1L,1L};
        int32_t l_510 = (-10L);
        struct S2 *l_520 = (void*)0;
        int i;
        for (p_1168->g_157.f2 = 0; (p_1168->g_157.f2 < (-3)); p_1168->g_157.f2--)
        { /* block id: 229 */
            uint64_t l_515 = 0x76EFE8513EE8BEB1L;
            for (l_372.f1 = 0; (l_372.f1 != (-25)); l_372.f1--)
            { /* block id: 232 */
                int32_t l_497 = 3L;
                uint32_t l_498 = 0x7A0C9B5AL;
                int64_t *l_509 = (void*)0;
                int32_t l_524 = 8L;
                for (p_1168->g_179.f4.f1.f0 = (-30); (p_1168->g_179.f4.f1.f0 <= 13); p_1168->g_179.f4.f1.f0++)
                { /* block id: 235 */
                    int32_t *l_495[7] = {&p_1168->g_269.f5,&p_1168->g_269.f5,&p_1168->g_269.f5,&p_1168->g_269.f5,&p_1168->g_269.f5,&p_1168->g_269.f5,&p_1168->g_269.f5};
                    int i;
                    l_498++;
                }
                (*p_1168->g_460) |= (((l_496[2] == 0x2BF259A5L) < l_497) && (safe_add_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), ((safe_sub_func_int16_t_s_s(p_54, (p_1168->g_505 , ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 4))(0UL, l_496[2], 0xD879L, 0xAD78L)).lo, ((VECTOR(uint16_t, 4))(l_506.yyyx)).odd))).even))) ^ ((0x75L | (((safe_mod_func_int64_t_s_s((l_510 |= p_1168->g_269.f0), ((l_496[3] <= l_410.sb) , p_53))) > 0x33BFL) , p_1168->g_27.y)) != p_53)))));
                for (l_369 = 0; (l_369 <= 26); l_369 = safe_add_func_uint64_t_u_u(l_369, 6))
                { /* block id: 242 */
                    uint32_t l_525 = 0x93218995L;
                    for (p_1168->g_365.f1.f0 = 20; (p_1168->g_365.f1.f0 < 15); p_1168->g_365.f1.f0--)
                    { /* block id: 245 */
                        if (l_515)
                            break;
                        if (l_498)
                            break;
                    }
                    for (p_1168->g_267.f4 = 8; (p_1168->g_267.f4 == 53); p_1168->g_267.f4 = safe_add_func_int64_t_s_s(p_1168->g_267.f4, 4))
                    { /* block id: 251 */
                        int32_t l_518 = 1L;
                        int32_t l_519 = (-1L);
                        int32_t *l_523[8][9][3] = {{{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5}},{{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5}},{{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5}},{{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5}},{{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5}},{{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5}},{{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5}},{{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5},{&l_496[2],&l_519,&p_1168->g_157.f5}}};
                        int i, j, k;
                        l_519 = (l_518 , 0x647FCCDCL);
                        (*p_1168->g_521) = l_520;
                        if (p_53)
                            continue;
                        --l_525;
                    }
                }
            }
            l_496[2] = ((*p_1168->g_460) &= 0x09B02FB5L);
            (*p_1168->g_460) &= (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_1168->g_528.yyyx)), 1L, 0x7246L, 0x585EL, 0L)).s44)).hi != p_53);
        }
    }
    return p_1168->g_comm_values[p_1168->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_1168->l_comm_values p_1168->g_59 p_1168->g_109 p_1168->g_26 p_1168->g_119 p_1168->g_137 p_1168->g_105 p_1168->g_150 p_1168->g_153 p_1168->g_129 p_1168->g_157.f0 p_1168->g_157.f2 p_1168->g_179 p_1168->g_122 p_1168->g_58 p_1168->g_27 p_1168->g_24 p_1168->g_28 p_1168->g_85 p_1168->g_199 p_1168->g_215 p_1168->g_216 p_1168->g_218 p_1168->g_219 p_1168->g_234 p_1168->g_235 p_1168->g_157.f5 p_1168->g_267 p_1168->g_277 p_1168->g_278 p_1168->g_comm_values p_1168->g_179.f2
 * writes: p_1168->g_105 p_1168->g_109 p_1168->g_150 p_1168->g_62.f4 p_1168->g_122 p_1168->g_158 p_1168->g_157.f5 p_1168->g_157.f0 p_1168->g_58 p_1168->g_24 p_1168->g_195 p_1168->g_157.f7 p_1168->g_199 p_1168->g_179.f1.f0 p_1168->g_119 p_1168->g_216 p_1168->g_235 p_1168->g_269 p_1168->g_277 p_1168->g_267.f0 p_1168->g_179.f2
 */
int8_t  func_64(int16_t  p_65, struct S1  p_66, uint64_t  p_67, struct S6 * p_1168)
{ /* block id: 8 */
    VECTOR(int16_t, 4) l_95 = (VECTOR(int16_t, 4))(0x54FAL, (VECTOR(int16_t, 2))(0x54FAL, (-4L)), (-4L));
    VECTOR(uint8_t, 16) l_98 = (VECTOR(uint8_t, 16))(0xAFL, (VECTOR(uint8_t, 4))(0xAFL, (VECTOR(uint8_t, 2))(0xAFL, 0x86L), 0x86L), 0x86L, 0xAFL, 0x86L, (VECTOR(uint8_t, 2))(0xAFL, 0x86L), (VECTOR(uint8_t, 2))(0xAFL, 0x86L), 0xAFL, 0x86L, 0xAFL, 0x86L);
    int16_t l_131 = 1L;
    int32_t l_135 = (-3L);
    struct S0 l_155[8] = {{1L,0x76L,0x0CC61388L},{1L,0x76L,0x0CC61388L},{1L,0x76L,0x0CC61388L},{1L,0x76L,0x0CC61388L},{1L,0x76L,0x0CC61388L},{1L,0x76L,0x0CC61388L},{1L,0x76L,0x0CC61388L},{1L,0x76L,0x0CC61388L}};
    VECTOR(uint8_t, 8) l_163 = (VECTOR(uint8_t, 8))(0x2BL, (VECTOR(uint8_t, 4))(0x2BL, (VECTOR(uint8_t, 2))(0x2BL, 255UL), 255UL), 255UL, 0x2BL, 255UL);
    int64_t *l_188 = &p_1168->g_105[0][6][1];
    VECTOR(int32_t, 4) l_204 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
    uint64_t *l_232 = (void*)0;
    VECTOR(int16_t, 16) l_296 = (VECTOR(int16_t, 16))(0x2F24L, (VECTOR(int16_t, 4))(0x2F24L, (VECTOR(int16_t, 2))(0x2F24L, 0L), 0L), 0L, 0x2F24L, 0L, (VECTOR(int16_t, 2))(0x2F24L, 0L), (VECTOR(int16_t, 2))(0x2F24L, 0L), 0x2F24L, 0L, 0x2F24L, 0L);
    VECTOR(int32_t, 8) l_297 = (VECTOR(int32_t, 8))(0x0B22182EL, (VECTOR(int32_t, 4))(0x0B22182EL, (VECTOR(int32_t, 2))(0x0B22182EL, 0L), 0L), 0L, 0x0B22182EL, 0L);
    int8_t l_305 = 0x63L;
    uint32_t l_318[3][7];
    VECTOR(int32_t, 8) l_331 = (VECTOR(int32_t, 8))(0x0926E707L, (VECTOR(int32_t, 4))(0x0926E707L, (VECTOR(int32_t, 2))(0x0926E707L, 0x2763A4F9L), 0x2763A4F9L), 0x2763A4F9L, 0x0926E707L, 0x2763A4F9L);
    uint32_t l_334 = 0xA13B5C5AL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
            l_318[i][j] = 4294967295UL;
    }
    for (p_65 = (-10); (p_65 >= (-28)); p_65 = safe_sub_func_uint16_t_u_u(p_65, 1))
    { /* block id: 11 */
        int16_t l_132 = (-1L);
        int8_t *l_136 = &p_1168->g_77[4];
        uint8_t *l_162[6][8][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint32_t *l_169 = (void*)0;
        uint32_t *l_170 = &p_1168->g_157.f0;
        uint64_t *l_173 = (void*)0;
        uint64_t *l_174[7][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        VECTOR(uint32_t, 4) l_225 = (VECTOR(uint32_t, 4))(0x34397CD4L, (VECTOR(uint32_t, 2))(0x34397CD4L, 0UL), 0UL);
        int32_t l_238 = 2L;
        int32_t *l_244 = &p_1168->g_150;
        VECTOR(uint32_t, 8) l_300 = (VECTOR(uint32_t, 8))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 4294967287UL), 4294967287UL), 4294967287UL, 3UL, 4294967287UL);
        int i, j, k;
        for (p_67 = 26; (p_67 == 16); --p_67)
        { /* block id: 14 */
            int64_t *l_104 = &p_1168->g_105[0][4][0];
            uint16_t *l_108 = &p_1168->g_109;
            int64_t *l_125 = (void*)0;
            int64_t *l_126 = (void*)0;
            int64_t *l_127 = (void*)0;
            int64_t *l_128[2];
            int32_t l_130[3];
            uint64_t *l_133 = (void*)0;
            uint64_t *l_134[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint8_t *l_154[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_159 = &p_1168->g_157.f5;
            int i;
            for (i = 0; i < 2; i++)
                l_128[i] = (void*)0;
            for (i = 0; i < 3; i++)
                l_130[i] = 1L;
            (*l_159) = ((safe_mul_func_int16_t_s_s(0x77C7L, (((VECTOR(uint8_t, 16))(p_1168->g_85.yxyyyyyxyxyyyxxx)).s5 || (safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(p_1168->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1168->tid, 150))], func_90(l_95.z, ((p_1168->g_122.s7 = (GROUP_DIVERGE(0, 1) >= (0x64L == (safe_lshift_func_uint16_t_u_s((((VECTOR(uint8_t, 16))(l_98.sc0845370bfa85fe0)).s5 ^ (safe_sub_func_int32_t_s_s(func_101((l_135 = (((*l_104) = p_1168->g_59.y) < (((safe_mul_func_uint16_t_u_u(((*l_108)--), (p_1168->g_26.y || ((safe_add_func_uint8_t_u_u(FAKE_DIVERGE(p_1168->group_1_offset, get_group_id(1), 10), p_65)) > (safe_unary_minus_func_uint32_t_u(((safe_lshift_func_uint8_t_u_u((p_1168->g_119[3] , FAKE_DIVERGE(p_1168->global_0_offset, get_global_id(0), 10)), 0)) & ((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_1168->g_122.s76)).odd, 0x5AL, 1UL, 2UL)).y < ((safe_sub_func_int64_t_s_s((l_130[1] = p_1168->g_119[3].f0), p_1168->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1168->tid, 150))])) != 18446744073709551615UL)) == l_131)))))))) <= l_132) == l_98.s3))), l_136, p_1168), 1UL))), p_67))))) , l_155[2]), &p_1168->g_77[2], &p_1168->g_77[4], p_1168))), 2))))) , l_132);
        }
        if (((((p_67 | (-1L)) , (l_135 = (p_67 = (safe_sub_func_uint64_t_u_u(((p_1168->g_122.s0 = (l_132 , 0x03L)) <= ((VECTOR(uint8_t, 4))(l_163.s0511)).z), (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s((0x35ECC3050E478B00L >= (safe_add_func_uint8_t_u_u(l_132, FAKE_DIVERGE(p_1168->local_2_offset, get_local_id(2), 10)))))), ((*l_170)++)))))))) <= (((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(p_1168->g_157.f2, 10)), (p_1168->g_179 , (p_1168->g_150 ^ FAKE_DIVERGE(p_1168->group_1_offset, get_group_id(1), 10))))) != p_66.f0) && 0x7001D0AB515CB5E7L)) == (-5L)))
        { /* block id: 37 */
            int8_t l_184 = 0x52L;
            int32_t l_185 = 0L;
            VECTOR(uint16_t, 4) l_191 = (VECTOR(uint16_t, 4))(0x69A3L, (VECTOR(uint16_t, 2))(0x69A3L, 0xDA3DL), 0xDA3DL);
            uint64_t l_194 = 0x29A793064653F557L;
            int32_t l_196 = (-1L);
            int i;
            l_196 = (l_132 ^ ((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(l_184, (l_185 = p_1168->g_122.s6))), (safe_mul_func_uint8_t_u_u(((l_188 != l_174[2][5]) || p_67), (((((l_95.x >= (safe_add_func_int64_t_s_s((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_191.zwxxzxzy)).lo)).w <= (p_1168->g_58.s3 &= (-7L))), (p_1168->g_24.se |= (safe_lshift_func_int16_t_s_s(((l_184 | p_1168->g_27.x) , p_1168->g_109), p_1168->g_122.s2)))))) >= l_132) <= l_194) != p_1168->g_28.s5) , p_1168->g_85.y))))) < FAKE_DIVERGE(p_1168->global_0_offset, get_global_id(0), 10)));
            p_1168->g_195[1][0] = l_170;
            for (p_1168->g_157.f7 = 20; (p_1168->g_157.f7 != 25); ++p_1168->g_157.f7)
            { /* block id: 45 */
                int8_t l_200 = 0x45L;
                int32_t *l_201 = &p_1168->g_150;
                p_1168->g_199 = p_1168->g_199;
                l_200 |= l_194;
                l_201 = &l_135;
                (*l_201) = (safe_rshift_func_uint8_t_u_s((((VECTOR(uint32_t, 2))(0x780686C5L, 0UL)).hi ^ ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_204.wz)).xyxx)).x), 2));
            }
        }
        else
        { /* block id: 51 */
            int16_t l_205 = 0x5B9BL;
            volatile int8_t ** volatile l_221 = (void*)0;/* VOLATILE GLOBAL l_221 */
            uint32_t l_224 = 0xC5AFCEADL;
            int32_t l_237[10] = {0x44111C8FL,5L,0L,5L,0x44111C8FL,0x44111C8FL,5L,0L,5L,0x44111C8FL};
            VECTOR(uint8_t, 2) l_309 = (VECTOR(uint8_t, 2))(0x8EL, 7UL);
            int i;
            if (l_205)
                break;
            for (p_1168->g_179.f1.f0 = 0; (p_1168->g_179.f1.f0 <= (-1)); --p_1168->g_179.f1.f0)
            { /* block id: 55 */
                uint64_t l_239[4];
                int32_t *l_259[4];
                int32_t **l_260 = &l_259[3];
                int i;
                for (i = 0; i < 4; i++)
                    l_239[i] = 0x75F8133E97BD1796L;
                for (i = 0; i < 4; i++)
                    l_259[i] = &l_135;
                for (p_1168->g_199.f2 = 0; (p_1168->g_199.f2 <= 60); p_1168->g_199.f2 = safe_add_func_int32_t_s_s(p_1168->g_199.f2, 9))
                { /* block id: 58 */
                    uint64_t l_210 = 6UL;
                    int32_t *l_211 = &l_135;
                    struct S0 l_214 = {1L,1L,0x578F439EL};
                    struct S1 l_231 = {0x60251FE1L};
                    uint32_t *l_233[5] = {&p_1168->g_157.f7,&p_1168->g_157.f7,&p_1168->g_157.f7,&p_1168->g_157.f7,&p_1168->g_157.f7};
                    int32_t *l_236[7][8] = {{&l_135,&l_135,(void*)0,&l_135,(void*)0,&l_135,(void*)0,&l_135},{&l_135,&l_135,(void*)0,&l_135,(void*)0,&l_135,(void*)0,&l_135},{&l_135,&l_135,(void*)0,&l_135,(void*)0,&l_135,(void*)0,&l_135},{&l_135,&l_135,(void*)0,&l_135,(void*)0,&l_135,(void*)0,&l_135},{&l_135,&l_135,(void*)0,&l_135,(void*)0,&l_135,(void*)0,&l_135},{&l_135,&l_135,(void*)0,&l_135,(void*)0,&l_135,(void*)0,&l_135},{&l_135,&l_135,(void*)0,&l_135,(void*)0,&l_135,(void*)0,&l_135}};
                    int i, j;
                    (*l_211) = l_210;
                    for (p_1168->g_109 = (-16); (p_1168->g_109 != 56); p_1168->g_109++)
                    { /* block id: 62 */
                        volatile int8_t ** volatile *l_220[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_220[i] = &p_1168->g_219;
                        (*p_1168->g_215) = l_214;
                        (*p_1168->g_218) = p_1168->g_216;
                        l_221 = p_1168->g_219;
                        if (p_65)
                            continue;
                    }
                    (*p_1168->g_234) = ((safe_sub_func_int8_t_s_s((+0x34L), p_66.f0)) , ((l_224 && ((((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 8))(0x0E44F065L, (p_67 , l_95.y), 0x33866937L, 0x79BD23F3L, 0xDC850656L, ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_225.wzzwyxzzwyyzxwyx)).s878c)))), ((VECTOR(uint32_t, 2))(p_1168->g_226.s54)).xyxy))).wzxzwwzx)).s03, (uint32_t)l_224, (uint32_t)(p_1168->g_226.sc = (safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((p_1168->g_85.x , l_231) , (((p_1168->g_199.f0.f0 = (&l_210 == l_232)) , (void*)0) == (void*)0)), GROUP_DIVERGE(1, 1))), 0x18782402L)))))), 0x87E39698L)).s65, ((VECTOR(uint32_t, 2))(1UL))))).odd , 0x21A587B83316E081L) & p_65)) , &l_135));
                    l_239[0]++;
                }
                if ((p_67 , (safe_mul_func_uint16_t_u_u((((l_244 = &l_237[8]) != &l_237[9]) > (safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_1168->group_2_offset, get_group_id(2), 10), ((safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((*p_1168->g_235) & p_67) == ((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(((p_66.f0 | ((*l_188) = ((((*l_260) = l_259[2]) != &l_238) != 0x5D65BF24F83E5766L))) , 65528UL), p_66.f0)), l_225.y)) , l_237[1])), (-1L))), p_66.f0)) > l_204.z), p_1168->g_216.f1.f0)), p_1168->g_28.s6)) || p_67)))), p_66.f0))))
                { /* block id: 76 */
                    struct S3 *l_268[10] = {&p_1168->g_267,&p_1168->g_157,&p_1168->g_267,&p_1168->g_157,&p_1168->g_267,&p_1168->g_267,&p_1168->g_157,&p_1168->g_267,&p_1168->g_157,&p_1168->g_267};
                    int i;
                    if ((atomic_inc(&p_1168->g_atomic_input[47 * get_linear_group_id() + 20]) == 5))
                    { /* block id: 78 */
                        uint32_t **l_261 = (void*)0;
                        uint32_t l_264 = 0x6EC2E3FEL;
                        uint32_t *l_263 = &l_264;
                        uint32_t **l_262 = &l_263;
                        l_262 = l_261;
                        unsigned int result = 0;
                        result += l_264;
                        atomic_add(&p_1168->g_special_values[47 * get_linear_group_id() + 20], result);
                    }
                    else
                    { /* block id: 80 */
                        (1 + 1);
                    }
                    for (l_132 = 0; (l_132 > 3); ++l_132)
                    { /* block id: 85 */
                        return p_1168->g_199.f2;
                    }
                    p_1168->g_269 = p_1168->g_267;
                    if ((*p_1168->g_235))
                        break;
                }
                else
                { /* block id: 90 */
                    uint32_t l_272 = 9UL;
                    uint32_t **l_281 = &l_170;
                    (*l_260) = (*p_1168->g_234);
                    for (p_1168->g_199.f3 = 7; (p_1168->g_199.f3 < 36); p_1168->g_199.f3 = safe_add_func_int8_t_s_s(p_1168->g_199.f3, 1))
                    { /* block id: 94 */
                        uint32_t ***l_279 = (void*)0;
                        uint32_t ***l_280 = &p_1168->g_277;
                        int32_t l_292 = 0L;
                        int16_t *l_293 = &l_132;
                        int16_t *l_294 = &l_131;
                        uint16_t *l_295[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_295[i] = (void*)0;
                        l_238 &= ((l_272 == (p_1168->g_137.f3 , (safe_lshift_func_uint16_t_u_u((p_1168->g_109 = (((safe_mul_func_int8_t_s_s(((GROUP_DIVERGE(2, 1) ^ ((*l_188) = (((*l_280) = p_1168->g_277) == l_281))) >= (((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 4))(0L, l_204.z, 0L, 0x2908AAC0F7A9EA06L)).x, ((*p_1168->g_235) != (++(*p_1168->g_278))))) <= (p_65 & ((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((*l_293) = (safe_unary_minus_func_int64_t_s(l_292))), ((*l_294) &= ((!p_66.f0) > p_66.f0)))), 1)))) != p_1168->g_comm_values[p_1168->tid]))) , p_65)), p_1168->g_28.s3)) > l_155[2].f0) > FAKE_DIVERGE(p_1168->global_2_offset, get_global_id(2), 10))), GROUP_DIVERGE(2, 1))))) && l_237[1]);
                    }
                    (*l_260) = (*p_1168->g_234);
                }
                l_297.s5 = ((p_1168->g_267.f7 < ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_296.s0cb6a6315e37e83e)).hi)).s7) , ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_297.s3473)).yzzxywzw)), ((VECTOR(int32_t, 4))((((l_237[9] = l_205) ^ ((*l_136) ^= (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_300.s23222153)))).s5 ^ (((void*)0 != &p_1168->g_277) > (safe_add_func_uint32_t_u_u(0x26E86E7FL, (safe_mod_func_int64_t_s_s(p_1168->g_267.f4, (l_305 , ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_1168->g_306.yyyx)).even)).hi))))))))) <= (safe_lshift_func_uint16_t_u_u((p_1168->g_85.y < (l_135 = ((VECTOR(uint8_t, 2))(l_309.xy)).lo)), 12))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(0, 1), ((safe_div_func_int32_t_s_s((**p_1168->g_234), p_67)) <= 0x6F95L))), ((VECTOR(int32_t, 2))(0x5A7122BFL)), 0x56180A18L)).odd)), (-1L))).yyzwwxwy))).s4);
            }
        }
    }
    for (p_1168->g_179.f2 = 0; (p_1168->g_179.f2 > 29); p_1168->g_179.f2 = safe_add_func_int16_t_s_s(p_1168->g_179.f2, 2))
    { /* block id: 114 */
        int32_t *l_316 = (void*)0;
        int32_t *l_317[6][2][2] = {{{&p_1168->g_157.f5,(void*)0},{&p_1168->g_157.f5,(void*)0}},{{&p_1168->g_157.f5,(void*)0},{&p_1168->g_157.f5,(void*)0}},{{&p_1168->g_157.f5,(void*)0},{&p_1168->g_157.f5,(void*)0}},{{&p_1168->g_157.f5,(void*)0},{&p_1168->g_157.f5,(void*)0}},{{&p_1168->g_157.f5,(void*)0},{&p_1168->g_157.f5,(void*)0}},{{&p_1168->g_157.f5,(void*)0},{&p_1168->g_157.f5,(void*)0}}};
        uint16_t *l_324 = &p_1168->g_109;
        uint64_t **l_328 = &l_232;
        uint16_t *l_335 = &p_1168->g_336;
        uint16_t *l_337 = (void*)0;
        uint16_t *l_338 = &p_1168->g_339;
        int16_t l_340 = 1L;
        uint32_t l_347 = 0x3484D1A5L;
        int i, j, k;
        (1 + 1);
    }
    return l_131;
}


/* ------------------------------------------ */
/* 
 * reads : p_1168->g_129
 * writes: p_1168->g_158
 */
uint32_t  func_90(uint8_t  p_91, struct S0  p_92, int8_t * p_93, int8_t * p_94, struct S6 * p_1168)
{ /* block id: 28 */
    struct S3 *l_156 = &p_1168->g_157;
    p_1168->g_158 = l_156;
    return p_1168->g_129.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1168->g_137 p_1168->g_105 p_1168->g_143 p_1168->g_150 p_1168->g_153
 * writes: p_1168->g_150 p_1168->g_62.f4
 */
int32_t  func_101(uint64_t  p_102, int8_t * p_103, struct S6 * p_1168)
{ /* block id: 19 */
    uint16_t l_142 = 0xA925L;
    int32_t *l_148 = (void*)0;
    int32_t *l_149 = &p_1168->g_150;
    (*l_149) |= (p_1168->g_137 , (((p_102 != (p_1168->g_105[1][6][2] , (((((safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u(0x7FL, l_142)), 1UL)) ^ FAKE_DIVERGE(p_1168->group_1_offset, get_group_id(1), 10)) , p_1168->g_137) , ((VECTOR(uint32_t, 2))(p_1168->g_143.sa5)).lo) == (safe_rshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u((&l_142 != ((((+4UL) , p_102) ^ 0xC1L) , &l_142)), 0x0F0E967E889C1318L)), 2))))) && 0x790CL) < 0x0B3967CB0E52188DL));
    for (p_1168->g_150 = 0; (p_1168->g_150 >= 3); p_1168->g_150 = safe_add_func_uint64_t_u_u(p_1168->g_150, 1))
    { /* block id: 23 */
        (*p_1168->g_153) = p_1168->g_137;
    }
    return p_102;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[47];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 47; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[47];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 47; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[150];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 150; i++)
            l_comm_values[i] = 1;
    struct S6 c_1169;
    struct S6* p_1168 = &c_1169;
    struct S6 c_1170 = {
        (VECTOR(int8_t, 2))(1L, (-1L)), // p_1168->g_22
        (VECTOR(int8_t, 16))(0x0CL, (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, 0x5FL), 0x5FL), 0x5FL, 0x0CL, 0x5FL, (VECTOR(int8_t, 2))(0x0CL, 0x5FL), (VECTOR(int8_t, 2))(0x0CL, 0x5FL), 0x0CL, 0x5FL, 0x0CL, 0x5FL), // p_1168->g_23
        (VECTOR(uint64_t, 16))(0x5B0D6B1F8487B254L, (VECTOR(uint64_t, 4))(0x5B0D6B1F8487B254L, (VECTOR(uint64_t, 2))(0x5B0D6B1F8487B254L, 0x4FE605A42069719EL), 0x4FE605A42069719EL), 0x4FE605A42069719EL, 0x5B0D6B1F8487B254L, 0x4FE605A42069719EL, (VECTOR(uint64_t, 2))(0x5B0D6B1F8487B254L, 0x4FE605A42069719EL), (VECTOR(uint64_t, 2))(0x5B0D6B1F8487B254L, 0x4FE605A42069719EL), 0x5B0D6B1F8487B254L, 0x4FE605A42069719EL, 0x5B0D6B1F8487B254L, 0x4FE605A42069719EL), // p_1168->g_24
        (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xFECCDF493AB76A10L), // p_1168->g_26
        (VECTOR(uint64_t, 2))(18446744073709551607UL, 0x7BAED967AAC3BC5FL), // p_1168->g_27
        (VECTOR(uint64_t, 8))(0xDB5841EC3D250654L, (VECTOR(uint64_t, 4))(0xDB5841EC3D250654L, (VECTOR(uint64_t, 2))(0xDB5841EC3D250654L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xDB5841EC3D250654L, 18446744073709551615UL), // p_1168->g_28
        (VECTOR(int16_t, 16))(0x287BL, (VECTOR(int16_t, 4))(0x287BL, (VECTOR(int16_t, 2))(0x287BL, 0L), 0L), 0L, 0x287BL, 0L, (VECTOR(int16_t, 2))(0x287BL, 0L), (VECTOR(int16_t, 2))(0x287BL, 0L), 0x287BL, 0L, 0x287BL, 0L), // p_1168->g_58
        (VECTOR(int16_t, 2))(0x3E53L, 1L), // p_1168->g_59
        {{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}, // p_1168->g_62
        (VECTOR(int8_t, 8))(0x79L, (VECTOR(int8_t, 4))(0x79L, (VECTOR(int8_t, 2))(0x79L, 0x39L), 0x39L), 0x39L, 0x79L, 0x39L), // p_1168->g_63
        {0L,0L,0L,0L,0L,0L,0L}, // p_1168->g_77
        (VECTOR(uint8_t, 2))(255UL, 9UL), // p_1168->g_85
        {{{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)},{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)},{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)},{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)},{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)},{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)},{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)},{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)}},{{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)},{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)},{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)},{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)},{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)},{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)},{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)},{4L,(-1L),0x50C049AA43C15C23L,(-1L),(-1L)}}}, // p_1168->g_105
        0xA083L, // p_1168->g_109
        {{0L,0x26L,0x4C86C850L},{0L,0x26L,0x4C86C850L},{0L,0x26L,0x4C86C850L},{0L,0x26L,0x4C86C850L},{0L,0x26L,0x4C86C850L},{0L,0x26L,0x4C86C850L}}, // p_1168->g_119
        (VECTOR(uint8_t, 8))(0x8EL, (VECTOR(uint8_t, 4))(0x8EL, (VECTOR(uint8_t, 2))(0x8EL, 0xA1L), 0xA1L), 0xA1L, 0x8EL, 0xA1L), // p_1168->g_122
        (VECTOR(int64_t, 8))(0x4CF353F810095C91L, (VECTOR(int64_t, 4))(0x4CF353F810095C91L, (VECTOR(int64_t, 2))(0x4CF353F810095C91L, 0x31997A29FED1463EL), 0x31997A29FED1463EL), 0x31997A29FED1463EL, 0x4CF353F810095C91L, 0x31997A29FED1463EL), // p_1168->g_129
        {0xA8EEED4EL,{1L},-9L,18446744073709551608UL}, // p_1168->g_137
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL), // p_1168->g_143
        0L, // p_1168->g_150
        &p_1168->g_62[6].f4, // p_1168->g_153
        {4294967293UL,0x56EE47DEF404FB78L,1L,0L,0xF79C03FCF02AD157L,-3L,0x72A17EAEL,0x9CB0A74AL,0x6084E3BAL,4294967289UL}, // p_1168->g_157
        (void*)0, // p_1168->g_158
        {0x0C6FE17DL}, // p_1168->g_179
        {{(void*)0,&p_1168->g_157.f5,(void*)0,(void*)0,&p_1168->g_157.f5,(void*)0,(void*)0},{(void*)0,&p_1168->g_157.f5,(void*)0,(void*)0,&p_1168->g_157.f5,(void*)0,(void*)0},{(void*)0,&p_1168->g_157.f5,(void*)0,(void*)0,&p_1168->g_157.f5,(void*)0,(void*)0},{(void*)0,&p_1168->g_157.f5,(void*)0,(void*)0,&p_1168->g_157.f5,(void*)0,(void*)0},{(void*)0,&p_1168->g_157.f5,(void*)0,(void*)0,&p_1168->g_157.f5,(void*)0,(void*)0}}, // p_1168->g_195
        {{-10L},0x6C77B0BA2C005C31L,0UL,4294967292UL,0x6DL,0L}, // p_1168->g_199
        &p_1168->g_119[3], // p_1168->g_215
        {0x18E9B792L,{6L},3L,1UL}, // p_1168->g_216
        (void*)0, // p_1168->g_217
        &p_1168->g_216, // p_1168->g_218
        (void*)0, // p_1168->g_219
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967290UL), 4294967290UL), 4294967290UL, 1UL, 4294967290UL, (VECTOR(uint32_t, 2))(1UL, 4294967290UL), (VECTOR(uint32_t, 2))(1UL, 4294967290UL), 1UL, 4294967290UL, 1UL, 4294967290UL), // p_1168->g_226
        &p_1168->g_157.f5, // p_1168->g_235
        &p_1168->g_235, // p_1168->g_234
        {0x2CC248D4L,0xA7C1BF27D02BC70BL,-1L,-4L,1UL,0x1C979C9EL,1UL,1UL,1L,0x38552DD3L}, // p_1168->g_267
        {0UL,3UL,0x2C346A87L,0x3317L,0xD15634A3F4E828C6L,0L,0x747EDB3FL,0x7CCF848AL,-9L,0xE3BA671EL}, // p_1168->g_269
        &p_1168->g_267.f0, // p_1168->g_278
        &p_1168->g_278, // p_1168->g_277
        (VECTOR(int64_t, 2))(0x7E14EEBAE75223C1L, 0L), // p_1168->g_306
        {{0x7CF0A8FCL},-3L,0xC05AAE4AL,0x7D489A5CL,0x62L,0x70196E37L}, // p_1168->g_319
        (void*)0, // p_1168->g_327
        0xA0F4L, // p_1168->g_336
        0x4864L, // p_1168->g_339
        {{0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL}}, // p_1168->g_358
        &p_1168->g_358[1][2], // p_1168->g_357
        {&p_1168->g_357,&p_1168->g_357,&p_1168->g_357,&p_1168->g_357}, // p_1168->g_356
        {0x2434177EL,{0x664FEF94L},8L,0UL}, // p_1168->g_365
        &p_1168->g_179.f4, // p_1168->g_366
        {{-1L},4L,0x23097A1DL,4294967289UL,0x1BL,0x50766773L}, // p_1168->g_375
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1168->g_382
        &p_1168->g_235, // p_1168->g_390
        {0UL,18446744073709551615UL,1L,0x6085L,18446744073709551615UL,0x116B38B5L,0xAC73E494L,0xC842FB3EL,0x11866612L,0xE4D65C08L}, // p_1168->g_399
        (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), (-9L)), (-9L)), // p_1168->g_409
        (VECTOR(int32_t, 16))(0x22331033L, (VECTOR(int32_t, 4))(0x22331033L, (VECTOR(int32_t, 2))(0x22331033L, 0L), 0L), 0L, 0x22331033L, 0L, (VECTOR(int32_t, 2))(0x22331033L, 0L), (VECTOR(int32_t, 2))(0x22331033L, 0L), 0x22331033L, 0L, 0x22331033L, 0L), // p_1168->g_414
        {0x35B350D0L,{3L},9L,0xD429DF1C3F2A52CFL}, // p_1168->g_422
        250UL, // p_1168->g_424
        (void*)0, // p_1168->g_438
        {{{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5}},{{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5}},{{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5}},{{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5}},{{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5}},{{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5}},{{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5}},{{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5},{(void*)0,&p_1168->g_269.f5,&p_1168->g_269.f5}}}, // p_1168->g_439
        {&p_1168->g_179.f0,&p_1168->g_179.f0,&p_1168->g_179.f0,&p_1168->g_179.f0,&p_1168->g_179.f0,&p_1168->g_179.f0,&p_1168->g_179.f0}, // p_1168->g_440
        &p_1168->g_179.f4.f1, // p_1168->g_446
        &p_1168->g_446, // p_1168->g_445
        &p_1168->g_157.f5, // p_1168->g_460
        {{0x0D189A2CL},0x252AF3082987BC69L,0xB9DCDB1BL,0xF8746624L,0x7DL,2L}, // p_1168->g_505
        {(void*)0,&p_1168->g_505,(void*)0,(void*)0,&p_1168->g_505,(void*)0}, // p_1168->g_522
        &p_1168->g_522[0], // p_1168->g_521
        (VECTOR(int16_t, 2))(0x4F6BL, 0L), // p_1168->g_528
        {{1UL,{0x378B6190L},-1L,0x278AAF86B3AFB5C6L},{1UL,{0x378B6190L},-1L,0x278AAF86B3AFB5C6L},{1UL,{0x378B6190L},-1L,0x278AAF86B3AFB5C6L},{1UL,{0x378B6190L},-1L,0x278AAF86B3AFB5C6L},{1UL,{0x378B6190L},-1L,0x278AAF86B3AFB5C6L},{1UL,{0x378B6190L},-1L,0x278AAF86B3AFB5C6L},{1UL,{0x378B6190L},-1L,0x278AAF86B3AFB5C6L}}, // p_1168->g_566
        (VECTOR(int8_t, 16))(0x71L, (VECTOR(int8_t, 4))(0x71L, (VECTOR(int8_t, 2))(0x71L, 0L), 0L), 0L, 0x71L, 0L, (VECTOR(int8_t, 2))(0x71L, 0L), (VECTOR(int8_t, 2))(0x71L, 0L), 0x71L, 0L, 0x71L, 0L), // p_1168->g_616
        (VECTOR(int8_t, 8))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x13L), 0x13L), 0x13L, 4L, 0x13L), // p_1168->g_660
        (VECTOR(uint8_t, 16))(0x85L, (VECTOR(uint8_t, 4))(0x85L, (VECTOR(uint8_t, 2))(0x85L, 1UL), 1UL), 1UL, 0x85L, 1UL, (VECTOR(uint8_t, 2))(0x85L, 1UL), (VECTOR(uint8_t, 2))(0x85L, 1UL), 0x85L, 1UL, 0x85L, 1UL), // p_1168->g_681
        (VECTOR(int8_t, 16))(0x5FL, (VECTOR(int8_t, 4))(0x5FL, (VECTOR(int8_t, 2))(0x5FL, 0x14L), 0x14L), 0x14L, 0x5FL, 0x14L, (VECTOR(int8_t, 2))(0x5FL, 0x14L), (VECTOR(int8_t, 2))(0x5FL, 0x14L), 0x5FL, 0x14L, 0x5FL, 0x14L), // p_1168->g_688
        {{-3L},0x62B2A5A0F2BFFEF6L,0xF410FB35L,0UL,0xE8L,-1L}, // p_1168->g_690
        {&p_1168->g_375}, // p_1168->g_691
        (void*)0, // p_1168->g_692
        (void*)0, // p_1168->g_693
        (VECTOR(int32_t, 2))(0x30260CE8L, 0x7C049E16L), // p_1168->g_696
        {{0x442978F3L},0L,0x5910CEB6L,0UL,0x41L,0x1F7C03A3L}, // p_1168->g_727
        0x58A43352L, // p_1168->g_730
        {{{{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-7L},-1L,0UL,0x7B6508ABL,0xA2L,-8L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0L},0L,0x7FD7BF09L,0x7D24909DL,0xD7L,-6L}}},{{{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-7L},-1L,0UL,0x7B6508ABL,0xA2L,-8L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0L},0L,0x7FD7BF09L,0x7D24909DL,0xD7L,-6L}}},{{{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-7L},-1L,0UL,0x7B6508ABL,0xA2L,-8L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0L},0L,0x7FD7BF09L,0x7D24909DL,0xD7L,-6L}}},{{{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-7L},-1L,0UL,0x7B6508ABL,0xA2L,-8L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0L},0L,0x7FD7BF09L,0x7D24909DL,0xD7L,-6L}}},{{{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-7L},-1L,0UL,0x7B6508ABL,0xA2L,-8L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0L},0L,0x7FD7BF09L,0x7D24909DL,0xD7L,-6L}}},{{{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-7L},-1L,0UL,0x7B6508ABL,0xA2L,-8L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0L},0L,0x7FD7BF09L,0x7D24909DL,0xD7L,-6L}}},{{{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-7L},-1L,0UL,0x7B6508ABL,0xA2L,-8L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0L},0L,0x7FD7BF09L,0x7D24909DL,0xD7L,-6L}}},{{{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-7L},-1L,0UL,0x7B6508ABL,0xA2L,-8L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0L},0L,0x7FD7BF09L,0x7D24909DL,0xD7L,-6L}}},{{{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-7L},-1L,0UL,0x7B6508ABL,0xA2L,-8L},{{0x098FCD63L},1L,4294967288UL,0UL,255UL,6L},{{-2L},0x12EC36336AE48C9BL,0x02868A40L,0x9F60B5B4L,1UL,1L},{{0x747E635AL},0x55636B12727E9DD0L,4294967292UL,0x0032031EL,2UL,1L},{{0x064A321EL},-2L,0x79925302L,0x68066FB1L,0x6FL,-9L},{{0L},0L,0x7FD7BF09L,0x7D24909DL,0xD7L,-6L}}}}, // p_1168->g_764
        {{-1L},1L,4294967295UL,0UL,0x61L,0x1242FA13L}, // p_1168->g_766
        {{&p_1168->g_269.f5,&p_1168->g_150,(void*)0,&p_1168->g_267.f5,(void*)0},{&p_1168->g_269.f5,&p_1168->g_150,(void*)0,&p_1168->g_267.f5,(void*)0},{&p_1168->g_269.f5,&p_1168->g_150,(void*)0,&p_1168->g_267.f5,(void*)0},{&p_1168->g_269.f5,&p_1168->g_150,(void*)0,&p_1168->g_267.f5,(void*)0},{&p_1168->g_269.f5,&p_1168->g_150,(void*)0,&p_1168->g_267.f5,(void*)0}}, // p_1168->g_776
        (VECTOR(int32_t, 2))(0x2E52F326L, 0x4B5B5CCBL), // p_1168->g_793
        {0UL,{3L},0x5DD1F91CDAAE0267L,0x1D9046BCC395AA9CL}, // p_1168->g_812
        {0x1EDEABDAL,{-2L},0x11C0CB7B661739D1L,18446744073709551606UL}, // p_1168->g_813
        1L, // p_1168->g_964
        (VECTOR(uint64_t, 4))(0xD702E4EE0CC8C144L, (VECTOR(uint64_t, 2))(0xD702E4EE0CC8C144L, 0x7B7BEF83EC95790EL), 0x7B7BEF83EC95790EL), // p_1168->g_977
        (VECTOR(int64_t, 2))(0x02171F45229F90AFL, (-1L)), // p_1168->g_1025
        {0x6FEB4A8DL,0xC839528704AA9754L,8L,1L,0UL,0x08D3EA52L,0x780576EBL,0x05748BA3L,0x020029FEL,1UL}, // p_1168->g_1035
        &p_1168->g_179, // p_1168->g_1047
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_1168->g_1048
        (void*)0, // p_1168->g_1052
        {&p_1168->g_119[3],&p_1168->g_119[3],&p_1168->g_119[3]}, // p_1168->g_1053
        &p_1168->g_119[0], // p_1168->g_1055
        &p_1168->g_424, // p_1168->g_1058
        (void*)0, // p_1168->g_1084
        {{{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084}},{{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084}},{{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084}},{{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084},{&p_1168->g_1084,&p_1168->g_1084}}}, // p_1168->g_1083
        &p_1168->g_1083[1][3][0], // p_1168->g_1082
        0x67L, // p_1168->g_1100
        {{0x3037810CL,0x460B8C035D3A1CCFL,1L,5L,18446744073709551615UL,-1L,3UL,0x363B1D24L,0x3C1FE18FL,0x100DC070L},{0x3037810CL,0x460B8C035D3A1CCFL,1L,5L,18446744073709551615UL,-1L,3UL,0x363B1D24L,0x3C1FE18FL,0x100DC070L},{0x3037810CL,0x460B8C035D3A1CCFL,1L,5L,18446744073709551615UL,-1L,3UL,0x363B1D24L,0x3C1FE18FL,0x100DC070L},{0x3037810CL,0x460B8C035D3A1CCFL,1L,5L,18446744073709551615UL,-1L,3UL,0x363B1D24L,0x3C1FE18FL,0x100DC070L},{0x3037810CL,0x460B8C035D3A1CCFL,1L,5L,18446744073709551615UL,-1L,3UL,0x363B1D24L,0x3C1FE18FL,0x100DC070L},{0x3037810CL,0x460B8C035D3A1CCFL,1L,5L,18446744073709551615UL,-1L,3UL,0x363B1D24L,0x3C1FE18FL,0x100DC070L},{0x3037810CL,0x460B8C035D3A1CCFL,1L,5L,18446744073709551615UL,-1L,3UL,0x363B1D24L,0x3C1FE18FL,0x100DC070L},{0x3037810CL,0x460B8C035D3A1CCFL,1L,5L,18446744073709551615UL,-1L,3UL,0x363B1D24L,0x3C1FE18FL,0x100DC070L}}, // p_1168->g_1167
        0, // p_1168->v_collective
        sequence_input[get_global_id(0)], // p_1168->global_0_offset
        sequence_input[get_global_id(1)], // p_1168->global_1_offset
        sequence_input[get_global_id(2)], // p_1168->global_2_offset
        sequence_input[get_local_id(0)], // p_1168->local_0_offset
        sequence_input[get_local_id(1)], // p_1168->local_1_offset
        sequence_input[get_local_id(2)], // p_1168->local_2_offset
        sequence_input[get_group_id(0)], // p_1168->group_0_offset
        sequence_input[get_group_id(1)], // p_1168->group_1_offset
        sequence_input[get_group_id(2)], // p_1168->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 150)), permutations[0][get_linear_local_id()])), // p_1168->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1169 = c_1170;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1168);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1168->g_22.x, "p_1168->g_22.x", print_hash_value);
    transparent_crc(p_1168->g_22.y, "p_1168->g_22.y", print_hash_value);
    transparent_crc(p_1168->g_23.s0, "p_1168->g_23.s0", print_hash_value);
    transparent_crc(p_1168->g_23.s1, "p_1168->g_23.s1", print_hash_value);
    transparent_crc(p_1168->g_23.s2, "p_1168->g_23.s2", print_hash_value);
    transparent_crc(p_1168->g_23.s3, "p_1168->g_23.s3", print_hash_value);
    transparent_crc(p_1168->g_23.s4, "p_1168->g_23.s4", print_hash_value);
    transparent_crc(p_1168->g_23.s5, "p_1168->g_23.s5", print_hash_value);
    transparent_crc(p_1168->g_23.s6, "p_1168->g_23.s6", print_hash_value);
    transparent_crc(p_1168->g_23.s7, "p_1168->g_23.s7", print_hash_value);
    transparent_crc(p_1168->g_23.s8, "p_1168->g_23.s8", print_hash_value);
    transparent_crc(p_1168->g_23.s9, "p_1168->g_23.s9", print_hash_value);
    transparent_crc(p_1168->g_23.sa, "p_1168->g_23.sa", print_hash_value);
    transparent_crc(p_1168->g_23.sb, "p_1168->g_23.sb", print_hash_value);
    transparent_crc(p_1168->g_23.sc, "p_1168->g_23.sc", print_hash_value);
    transparent_crc(p_1168->g_23.sd, "p_1168->g_23.sd", print_hash_value);
    transparent_crc(p_1168->g_23.se, "p_1168->g_23.se", print_hash_value);
    transparent_crc(p_1168->g_23.sf, "p_1168->g_23.sf", print_hash_value);
    transparent_crc(p_1168->g_24.s0, "p_1168->g_24.s0", print_hash_value);
    transparent_crc(p_1168->g_24.s1, "p_1168->g_24.s1", print_hash_value);
    transparent_crc(p_1168->g_24.s2, "p_1168->g_24.s2", print_hash_value);
    transparent_crc(p_1168->g_24.s3, "p_1168->g_24.s3", print_hash_value);
    transparent_crc(p_1168->g_24.s4, "p_1168->g_24.s4", print_hash_value);
    transparent_crc(p_1168->g_24.s5, "p_1168->g_24.s5", print_hash_value);
    transparent_crc(p_1168->g_24.s6, "p_1168->g_24.s6", print_hash_value);
    transparent_crc(p_1168->g_24.s7, "p_1168->g_24.s7", print_hash_value);
    transparent_crc(p_1168->g_24.s8, "p_1168->g_24.s8", print_hash_value);
    transparent_crc(p_1168->g_24.s9, "p_1168->g_24.s9", print_hash_value);
    transparent_crc(p_1168->g_24.sa, "p_1168->g_24.sa", print_hash_value);
    transparent_crc(p_1168->g_24.sb, "p_1168->g_24.sb", print_hash_value);
    transparent_crc(p_1168->g_24.sc, "p_1168->g_24.sc", print_hash_value);
    transparent_crc(p_1168->g_24.sd, "p_1168->g_24.sd", print_hash_value);
    transparent_crc(p_1168->g_24.se, "p_1168->g_24.se", print_hash_value);
    transparent_crc(p_1168->g_24.sf, "p_1168->g_24.sf", print_hash_value);
    transparent_crc(p_1168->g_26.x, "p_1168->g_26.x", print_hash_value);
    transparent_crc(p_1168->g_26.y, "p_1168->g_26.y", print_hash_value);
    transparent_crc(p_1168->g_27.x, "p_1168->g_27.x", print_hash_value);
    transparent_crc(p_1168->g_27.y, "p_1168->g_27.y", print_hash_value);
    transparent_crc(p_1168->g_28.s0, "p_1168->g_28.s0", print_hash_value);
    transparent_crc(p_1168->g_28.s1, "p_1168->g_28.s1", print_hash_value);
    transparent_crc(p_1168->g_28.s2, "p_1168->g_28.s2", print_hash_value);
    transparent_crc(p_1168->g_28.s3, "p_1168->g_28.s3", print_hash_value);
    transparent_crc(p_1168->g_28.s4, "p_1168->g_28.s4", print_hash_value);
    transparent_crc(p_1168->g_28.s5, "p_1168->g_28.s5", print_hash_value);
    transparent_crc(p_1168->g_28.s6, "p_1168->g_28.s6", print_hash_value);
    transparent_crc(p_1168->g_28.s7, "p_1168->g_28.s7", print_hash_value);
    transparent_crc(p_1168->g_58.s0, "p_1168->g_58.s0", print_hash_value);
    transparent_crc(p_1168->g_58.s1, "p_1168->g_58.s1", print_hash_value);
    transparent_crc(p_1168->g_58.s2, "p_1168->g_58.s2", print_hash_value);
    transparent_crc(p_1168->g_58.s3, "p_1168->g_58.s3", print_hash_value);
    transparent_crc(p_1168->g_58.s4, "p_1168->g_58.s4", print_hash_value);
    transparent_crc(p_1168->g_58.s5, "p_1168->g_58.s5", print_hash_value);
    transparent_crc(p_1168->g_58.s6, "p_1168->g_58.s6", print_hash_value);
    transparent_crc(p_1168->g_58.s7, "p_1168->g_58.s7", print_hash_value);
    transparent_crc(p_1168->g_58.s8, "p_1168->g_58.s8", print_hash_value);
    transparent_crc(p_1168->g_58.s9, "p_1168->g_58.s9", print_hash_value);
    transparent_crc(p_1168->g_58.sa, "p_1168->g_58.sa", print_hash_value);
    transparent_crc(p_1168->g_58.sb, "p_1168->g_58.sb", print_hash_value);
    transparent_crc(p_1168->g_58.sc, "p_1168->g_58.sc", print_hash_value);
    transparent_crc(p_1168->g_58.sd, "p_1168->g_58.sd", print_hash_value);
    transparent_crc(p_1168->g_58.se, "p_1168->g_58.se", print_hash_value);
    transparent_crc(p_1168->g_58.sf, "p_1168->g_58.sf", print_hash_value);
    transparent_crc(p_1168->g_59.x, "p_1168->g_59.x", print_hash_value);
    transparent_crc(p_1168->g_59.y, "p_1168->g_59.y", print_hash_value);
    transparent_crc(p_1168->g_63.s0, "p_1168->g_63.s0", print_hash_value);
    transparent_crc(p_1168->g_63.s1, "p_1168->g_63.s1", print_hash_value);
    transparent_crc(p_1168->g_63.s2, "p_1168->g_63.s2", print_hash_value);
    transparent_crc(p_1168->g_63.s3, "p_1168->g_63.s3", print_hash_value);
    transparent_crc(p_1168->g_63.s4, "p_1168->g_63.s4", print_hash_value);
    transparent_crc(p_1168->g_63.s5, "p_1168->g_63.s5", print_hash_value);
    transparent_crc(p_1168->g_63.s6, "p_1168->g_63.s6", print_hash_value);
    transparent_crc(p_1168->g_63.s7, "p_1168->g_63.s7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1168->g_77[i], "p_1168->g_77[i]", print_hash_value);

    }
    transparent_crc(p_1168->g_85.x, "p_1168->g_85.x", print_hash_value);
    transparent_crc(p_1168->g_85.y, "p_1168->g_85.y", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1168->g_105[i][j][k], "p_1168->g_105[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1168->g_109, "p_1168->g_109", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1168->g_119[i].f0, "p_1168->g_119[i].f0", print_hash_value);
        transparent_crc(p_1168->g_119[i].f1, "p_1168->g_119[i].f1", print_hash_value);
        transparent_crc(p_1168->g_119[i].f2, "p_1168->g_119[i].f2", print_hash_value);

    }
    transparent_crc(p_1168->g_122.s0, "p_1168->g_122.s0", print_hash_value);
    transparent_crc(p_1168->g_122.s1, "p_1168->g_122.s1", print_hash_value);
    transparent_crc(p_1168->g_122.s2, "p_1168->g_122.s2", print_hash_value);
    transparent_crc(p_1168->g_122.s3, "p_1168->g_122.s3", print_hash_value);
    transparent_crc(p_1168->g_122.s4, "p_1168->g_122.s4", print_hash_value);
    transparent_crc(p_1168->g_122.s5, "p_1168->g_122.s5", print_hash_value);
    transparent_crc(p_1168->g_122.s6, "p_1168->g_122.s6", print_hash_value);
    transparent_crc(p_1168->g_122.s7, "p_1168->g_122.s7", print_hash_value);
    transparent_crc(p_1168->g_129.s0, "p_1168->g_129.s0", print_hash_value);
    transparent_crc(p_1168->g_129.s1, "p_1168->g_129.s1", print_hash_value);
    transparent_crc(p_1168->g_129.s2, "p_1168->g_129.s2", print_hash_value);
    transparent_crc(p_1168->g_129.s3, "p_1168->g_129.s3", print_hash_value);
    transparent_crc(p_1168->g_129.s4, "p_1168->g_129.s4", print_hash_value);
    transparent_crc(p_1168->g_129.s5, "p_1168->g_129.s5", print_hash_value);
    transparent_crc(p_1168->g_129.s6, "p_1168->g_129.s6", print_hash_value);
    transparent_crc(p_1168->g_129.s7, "p_1168->g_129.s7", print_hash_value);
    transparent_crc(p_1168->g_137.f0, "p_1168->g_137.f0", print_hash_value);
    transparent_crc(p_1168->g_137.f1.f0, "p_1168->g_137.f1.f0", print_hash_value);
    transparent_crc(p_1168->g_137.f2, "p_1168->g_137.f2", print_hash_value);
    transparent_crc(p_1168->g_137.f3, "p_1168->g_137.f3", print_hash_value);
    transparent_crc(p_1168->g_143.s0, "p_1168->g_143.s0", print_hash_value);
    transparent_crc(p_1168->g_143.s1, "p_1168->g_143.s1", print_hash_value);
    transparent_crc(p_1168->g_143.s2, "p_1168->g_143.s2", print_hash_value);
    transparent_crc(p_1168->g_143.s3, "p_1168->g_143.s3", print_hash_value);
    transparent_crc(p_1168->g_143.s4, "p_1168->g_143.s4", print_hash_value);
    transparent_crc(p_1168->g_143.s5, "p_1168->g_143.s5", print_hash_value);
    transparent_crc(p_1168->g_143.s6, "p_1168->g_143.s6", print_hash_value);
    transparent_crc(p_1168->g_143.s7, "p_1168->g_143.s7", print_hash_value);
    transparent_crc(p_1168->g_143.s8, "p_1168->g_143.s8", print_hash_value);
    transparent_crc(p_1168->g_143.s9, "p_1168->g_143.s9", print_hash_value);
    transparent_crc(p_1168->g_143.sa, "p_1168->g_143.sa", print_hash_value);
    transparent_crc(p_1168->g_143.sb, "p_1168->g_143.sb", print_hash_value);
    transparent_crc(p_1168->g_143.sc, "p_1168->g_143.sc", print_hash_value);
    transparent_crc(p_1168->g_143.sd, "p_1168->g_143.sd", print_hash_value);
    transparent_crc(p_1168->g_143.se, "p_1168->g_143.se", print_hash_value);
    transparent_crc(p_1168->g_143.sf, "p_1168->g_143.sf", print_hash_value);
    transparent_crc(p_1168->g_150, "p_1168->g_150", print_hash_value);
    transparent_crc(p_1168->g_157.f0, "p_1168->g_157.f0", print_hash_value);
    transparent_crc(p_1168->g_157.f1, "p_1168->g_157.f1", print_hash_value);
    transparent_crc(p_1168->g_157.f2, "p_1168->g_157.f2", print_hash_value);
    transparent_crc(p_1168->g_157.f3, "p_1168->g_157.f3", print_hash_value);
    transparent_crc(p_1168->g_157.f4, "p_1168->g_157.f4", print_hash_value);
    transparent_crc(p_1168->g_157.f5, "p_1168->g_157.f5", print_hash_value);
    transparent_crc(p_1168->g_157.f6, "p_1168->g_157.f6", print_hash_value);
    transparent_crc(p_1168->g_157.f7, "p_1168->g_157.f7", print_hash_value);
    transparent_crc(p_1168->g_157.f8, "p_1168->g_157.f8", print_hash_value);
    transparent_crc(p_1168->g_157.f9, "p_1168->g_157.f9", print_hash_value);
    transparent_crc(p_1168->g_199.f0.f0, "p_1168->g_199.f0.f0", print_hash_value);
    transparent_crc(p_1168->g_199.f1, "p_1168->g_199.f1", print_hash_value);
    transparent_crc(p_1168->g_199.f2, "p_1168->g_199.f2", print_hash_value);
    transparent_crc(p_1168->g_199.f3, "p_1168->g_199.f3", print_hash_value);
    transparent_crc(p_1168->g_199.f4, "p_1168->g_199.f4", print_hash_value);
    transparent_crc(p_1168->g_199.f5, "p_1168->g_199.f5", print_hash_value);
    transparent_crc(p_1168->g_216.f0, "p_1168->g_216.f0", print_hash_value);
    transparent_crc(p_1168->g_216.f1.f0, "p_1168->g_216.f1.f0", print_hash_value);
    transparent_crc(p_1168->g_216.f2, "p_1168->g_216.f2", print_hash_value);
    transparent_crc(p_1168->g_216.f3, "p_1168->g_216.f3", print_hash_value);
    transparent_crc(p_1168->g_226.s0, "p_1168->g_226.s0", print_hash_value);
    transparent_crc(p_1168->g_226.s1, "p_1168->g_226.s1", print_hash_value);
    transparent_crc(p_1168->g_226.s2, "p_1168->g_226.s2", print_hash_value);
    transparent_crc(p_1168->g_226.s3, "p_1168->g_226.s3", print_hash_value);
    transparent_crc(p_1168->g_226.s4, "p_1168->g_226.s4", print_hash_value);
    transparent_crc(p_1168->g_226.s5, "p_1168->g_226.s5", print_hash_value);
    transparent_crc(p_1168->g_226.s6, "p_1168->g_226.s6", print_hash_value);
    transparent_crc(p_1168->g_226.s7, "p_1168->g_226.s7", print_hash_value);
    transparent_crc(p_1168->g_226.s8, "p_1168->g_226.s8", print_hash_value);
    transparent_crc(p_1168->g_226.s9, "p_1168->g_226.s9", print_hash_value);
    transparent_crc(p_1168->g_226.sa, "p_1168->g_226.sa", print_hash_value);
    transparent_crc(p_1168->g_226.sb, "p_1168->g_226.sb", print_hash_value);
    transparent_crc(p_1168->g_226.sc, "p_1168->g_226.sc", print_hash_value);
    transparent_crc(p_1168->g_226.sd, "p_1168->g_226.sd", print_hash_value);
    transparent_crc(p_1168->g_226.se, "p_1168->g_226.se", print_hash_value);
    transparent_crc(p_1168->g_226.sf, "p_1168->g_226.sf", print_hash_value);
    transparent_crc(p_1168->g_267.f0, "p_1168->g_267.f0", print_hash_value);
    transparent_crc(p_1168->g_267.f1, "p_1168->g_267.f1", print_hash_value);
    transparent_crc(p_1168->g_267.f2, "p_1168->g_267.f2", print_hash_value);
    transparent_crc(p_1168->g_267.f3, "p_1168->g_267.f3", print_hash_value);
    transparent_crc(p_1168->g_267.f4, "p_1168->g_267.f4", print_hash_value);
    transparent_crc(p_1168->g_267.f5, "p_1168->g_267.f5", print_hash_value);
    transparent_crc(p_1168->g_267.f6, "p_1168->g_267.f6", print_hash_value);
    transparent_crc(p_1168->g_267.f7, "p_1168->g_267.f7", print_hash_value);
    transparent_crc(p_1168->g_267.f8, "p_1168->g_267.f8", print_hash_value);
    transparent_crc(p_1168->g_267.f9, "p_1168->g_267.f9", print_hash_value);
    transparent_crc(p_1168->g_269.f0, "p_1168->g_269.f0", print_hash_value);
    transparent_crc(p_1168->g_269.f1, "p_1168->g_269.f1", print_hash_value);
    transparent_crc(p_1168->g_269.f2, "p_1168->g_269.f2", print_hash_value);
    transparent_crc(p_1168->g_269.f3, "p_1168->g_269.f3", print_hash_value);
    transparent_crc(p_1168->g_269.f4, "p_1168->g_269.f4", print_hash_value);
    transparent_crc(p_1168->g_269.f5, "p_1168->g_269.f5", print_hash_value);
    transparent_crc(p_1168->g_269.f6, "p_1168->g_269.f6", print_hash_value);
    transparent_crc(p_1168->g_269.f7, "p_1168->g_269.f7", print_hash_value);
    transparent_crc(p_1168->g_269.f8, "p_1168->g_269.f8", print_hash_value);
    transparent_crc(p_1168->g_269.f9, "p_1168->g_269.f9", print_hash_value);
    transparent_crc(p_1168->g_306.x, "p_1168->g_306.x", print_hash_value);
    transparent_crc(p_1168->g_306.y, "p_1168->g_306.y", print_hash_value);
    transparent_crc(p_1168->g_319.f0.f0, "p_1168->g_319.f0.f0", print_hash_value);
    transparent_crc(p_1168->g_319.f1, "p_1168->g_319.f1", print_hash_value);
    transparent_crc(p_1168->g_319.f2, "p_1168->g_319.f2", print_hash_value);
    transparent_crc(p_1168->g_319.f3, "p_1168->g_319.f3", print_hash_value);
    transparent_crc(p_1168->g_319.f4, "p_1168->g_319.f4", print_hash_value);
    transparent_crc(p_1168->g_319.f5, "p_1168->g_319.f5", print_hash_value);
    transparent_crc(p_1168->g_336, "p_1168->g_336", print_hash_value);
    transparent_crc(p_1168->g_339, "p_1168->g_339", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1168->g_358[i][j], "p_1168->g_358[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1168->g_365.f0, "p_1168->g_365.f0", print_hash_value);
    transparent_crc(p_1168->g_365.f1.f0, "p_1168->g_365.f1.f0", print_hash_value);
    transparent_crc(p_1168->g_365.f2, "p_1168->g_365.f2", print_hash_value);
    transparent_crc(p_1168->g_365.f3, "p_1168->g_365.f3", print_hash_value);
    transparent_crc(p_1168->g_375.f0.f0, "p_1168->g_375.f0.f0", print_hash_value);
    transparent_crc(p_1168->g_375.f1, "p_1168->g_375.f1", print_hash_value);
    transparent_crc(p_1168->g_375.f2, "p_1168->g_375.f2", print_hash_value);
    transparent_crc(p_1168->g_375.f3, "p_1168->g_375.f3", print_hash_value);
    transparent_crc(p_1168->g_375.f4, "p_1168->g_375.f4", print_hash_value);
    transparent_crc(p_1168->g_375.f5, "p_1168->g_375.f5", print_hash_value);
    transparent_crc(p_1168->g_399.f0, "p_1168->g_399.f0", print_hash_value);
    transparent_crc(p_1168->g_399.f1, "p_1168->g_399.f1", print_hash_value);
    transparent_crc(p_1168->g_399.f2, "p_1168->g_399.f2", print_hash_value);
    transparent_crc(p_1168->g_399.f3, "p_1168->g_399.f3", print_hash_value);
    transparent_crc(p_1168->g_399.f4, "p_1168->g_399.f4", print_hash_value);
    transparent_crc(p_1168->g_399.f5, "p_1168->g_399.f5", print_hash_value);
    transparent_crc(p_1168->g_399.f6, "p_1168->g_399.f6", print_hash_value);
    transparent_crc(p_1168->g_399.f7, "p_1168->g_399.f7", print_hash_value);
    transparent_crc(p_1168->g_399.f8, "p_1168->g_399.f8", print_hash_value);
    transparent_crc(p_1168->g_399.f9, "p_1168->g_399.f9", print_hash_value);
    transparent_crc(p_1168->g_409.x, "p_1168->g_409.x", print_hash_value);
    transparent_crc(p_1168->g_409.y, "p_1168->g_409.y", print_hash_value);
    transparent_crc(p_1168->g_409.z, "p_1168->g_409.z", print_hash_value);
    transparent_crc(p_1168->g_409.w, "p_1168->g_409.w", print_hash_value);
    transparent_crc(p_1168->g_414.s0, "p_1168->g_414.s0", print_hash_value);
    transparent_crc(p_1168->g_414.s1, "p_1168->g_414.s1", print_hash_value);
    transparent_crc(p_1168->g_414.s2, "p_1168->g_414.s2", print_hash_value);
    transparent_crc(p_1168->g_414.s3, "p_1168->g_414.s3", print_hash_value);
    transparent_crc(p_1168->g_414.s4, "p_1168->g_414.s4", print_hash_value);
    transparent_crc(p_1168->g_414.s5, "p_1168->g_414.s5", print_hash_value);
    transparent_crc(p_1168->g_414.s6, "p_1168->g_414.s6", print_hash_value);
    transparent_crc(p_1168->g_414.s7, "p_1168->g_414.s7", print_hash_value);
    transparent_crc(p_1168->g_414.s8, "p_1168->g_414.s8", print_hash_value);
    transparent_crc(p_1168->g_414.s9, "p_1168->g_414.s9", print_hash_value);
    transparent_crc(p_1168->g_414.sa, "p_1168->g_414.sa", print_hash_value);
    transparent_crc(p_1168->g_414.sb, "p_1168->g_414.sb", print_hash_value);
    transparent_crc(p_1168->g_414.sc, "p_1168->g_414.sc", print_hash_value);
    transparent_crc(p_1168->g_414.sd, "p_1168->g_414.sd", print_hash_value);
    transparent_crc(p_1168->g_414.se, "p_1168->g_414.se", print_hash_value);
    transparent_crc(p_1168->g_414.sf, "p_1168->g_414.sf", print_hash_value);
    transparent_crc(p_1168->g_422.f0, "p_1168->g_422.f0", print_hash_value);
    transparent_crc(p_1168->g_422.f1.f0, "p_1168->g_422.f1.f0", print_hash_value);
    transparent_crc(p_1168->g_422.f2, "p_1168->g_422.f2", print_hash_value);
    transparent_crc(p_1168->g_422.f3, "p_1168->g_422.f3", print_hash_value);
    transparent_crc(p_1168->g_424, "p_1168->g_424", print_hash_value);
    transparent_crc(p_1168->g_505.f0.f0, "p_1168->g_505.f0.f0", print_hash_value);
    transparent_crc(p_1168->g_505.f1, "p_1168->g_505.f1", print_hash_value);
    transparent_crc(p_1168->g_505.f2, "p_1168->g_505.f2", print_hash_value);
    transparent_crc(p_1168->g_505.f3, "p_1168->g_505.f3", print_hash_value);
    transparent_crc(p_1168->g_505.f4, "p_1168->g_505.f4", print_hash_value);
    transparent_crc(p_1168->g_505.f5, "p_1168->g_505.f5", print_hash_value);
    transparent_crc(p_1168->g_528.x, "p_1168->g_528.x", print_hash_value);
    transparent_crc(p_1168->g_528.y, "p_1168->g_528.y", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1168->g_566[i].f0, "p_1168->g_566[i].f0", print_hash_value);
        transparent_crc(p_1168->g_566[i].f1.f0, "p_1168->g_566[i].f1.f0", print_hash_value);
        transparent_crc(p_1168->g_566[i].f2, "p_1168->g_566[i].f2", print_hash_value);
        transparent_crc(p_1168->g_566[i].f3, "p_1168->g_566[i].f3", print_hash_value);

    }
    transparent_crc(p_1168->g_616.s0, "p_1168->g_616.s0", print_hash_value);
    transparent_crc(p_1168->g_616.s1, "p_1168->g_616.s1", print_hash_value);
    transparent_crc(p_1168->g_616.s2, "p_1168->g_616.s2", print_hash_value);
    transparent_crc(p_1168->g_616.s3, "p_1168->g_616.s3", print_hash_value);
    transparent_crc(p_1168->g_616.s4, "p_1168->g_616.s4", print_hash_value);
    transparent_crc(p_1168->g_616.s5, "p_1168->g_616.s5", print_hash_value);
    transparent_crc(p_1168->g_616.s6, "p_1168->g_616.s6", print_hash_value);
    transparent_crc(p_1168->g_616.s7, "p_1168->g_616.s7", print_hash_value);
    transparent_crc(p_1168->g_616.s8, "p_1168->g_616.s8", print_hash_value);
    transparent_crc(p_1168->g_616.s9, "p_1168->g_616.s9", print_hash_value);
    transparent_crc(p_1168->g_616.sa, "p_1168->g_616.sa", print_hash_value);
    transparent_crc(p_1168->g_616.sb, "p_1168->g_616.sb", print_hash_value);
    transparent_crc(p_1168->g_616.sc, "p_1168->g_616.sc", print_hash_value);
    transparent_crc(p_1168->g_616.sd, "p_1168->g_616.sd", print_hash_value);
    transparent_crc(p_1168->g_616.se, "p_1168->g_616.se", print_hash_value);
    transparent_crc(p_1168->g_616.sf, "p_1168->g_616.sf", print_hash_value);
    transparent_crc(p_1168->g_660.s0, "p_1168->g_660.s0", print_hash_value);
    transparent_crc(p_1168->g_660.s1, "p_1168->g_660.s1", print_hash_value);
    transparent_crc(p_1168->g_660.s2, "p_1168->g_660.s2", print_hash_value);
    transparent_crc(p_1168->g_660.s3, "p_1168->g_660.s3", print_hash_value);
    transparent_crc(p_1168->g_660.s4, "p_1168->g_660.s4", print_hash_value);
    transparent_crc(p_1168->g_660.s5, "p_1168->g_660.s5", print_hash_value);
    transparent_crc(p_1168->g_660.s6, "p_1168->g_660.s6", print_hash_value);
    transparent_crc(p_1168->g_660.s7, "p_1168->g_660.s7", print_hash_value);
    transparent_crc(p_1168->g_681.s0, "p_1168->g_681.s0", print_hash_value);
    transparent_crc(p_1168->g_681.s1, "p_1168->g_681.s1", print_hash_value);
    transparent_crc(p_1168->g_681.s2, "p_1168->g_681.s2", print_hash_value);
    transparent_crc(p_1168->g_681.s3, "p_1168->g_681.s3", print_hash_value);
    transparent_crc(p_1168->g_681.s4, "p_1168->g_681.s4", print_hash_value);
    transparent_crc(p_1168->g_681.s5, "p_1168->g_681.s5", print_hash_value);
    transparent_crc(p_1168->g_681.s6, "p_1168->g_681.s6", print_hash_value);
    transparent_crc(p_1168->g_681.s7, "p_1168->g_681.s7", print_hash_value);
    transparent_crc(p_1168->g_681.s8, "p_1168->g_681.s8", print_hash_value);
    transparent_crc(p_1168->g_681.s9, "p_1168->g_681.s9", print_hash_value);
    transparent_crc(p_1168->g_681.sa, "p_1168->g_681.sa", print_hash_value);
    transparent_crc(p_1168->g_681.sb, "p_1168->g_681.sb", print_hash_value);
    transparent_crc(p_1168->g_681.sc, "p_1168->g_681.sc", print_hash_value);
    transparent_crc(p_1168->g_681.sd, "p_1168->g_681.sd", print_hash_value);
    transparent_crc(p_1168->g_681.se, "p_1168->g_681.se", print_hash_value);
    transparent_crc(p_1168->g_681.sf, "p_1168->g_681.sf", print_hash_value);
    transparent_crc(p_1168->g_688.s0, "p_1168->g_688.s0", print_hash_value);
    transparent_crc(p_1168->g_688.s1, "p_1168->g_688.s1", print_hash_value);
    transparent_crc(p_1168->g_688.s2, "p_1168->g_688.s2", print_hash_value);
    transparent_crc(p_1168->g_688.s3, "p_1168->g_688.s3", print_hash_value);
    transparent_crc(p_1168->g_688.s4, "p_1168->g_688.s4", print_hash_value);
    transparent_crc(p_1168->g_688.s5, "p_1168->g_688.s5", print_hash_value);
    transparent_crc(p_1168->g_688.s6, "p_1168->g_688.s6", print_hash_value);
    transparent_crc(p_1168->g_688.s7, "p_1168->g_688.s7", print_hash_value);
    transparent_crc(p_1168->g_688.s8, "p_1168->g_688.s8", print_hash_value);
    transparent_crc(p_1168->g_688.s9, "p_1168->g_688.s9", print_hash_value);
    transparent_crc(p_1168->g_688.sa, "p_1168->g_688.sa", print_hash_value);
    transparent_crc(p_1168->g_688.sb, "p_1168->g_688.sb", print_hash_value);
    transparent_crc(p_1168->g_688.sc, "p_1168->g_688.sc", print_hash_value);
    transparent_crc(p_1168->g_688.sd, "p_1168->g_688.sd", print_hash_value);
    transparent_crc(p_1168->g_688.se, "p_1168->g_688.se", print_hash_value);
    transparent_crc(p_1168->g_688.sf, "p_1168->g_688.sf", print_hash_value);
    transparent_crc(p_1168->g_690.f0.f0, "p_1168->g_690.f0.f0", print_hash_value);
    transparent_crc(p_1168->g_690.f1, "p_1168->g_690.f1", print_hash_value);
    transparent_crc(p_1168->g_690.f2, "p_1168->g_690.f2", print_hash_value);
    transparent_crc(p_1168->g_690.f3, "p_1168->g_690.f3", print_hash_value);
    transparent_crc(p_1168->g_690.f4, "p_1168->g_690.f4", print_hash_value);
    transparent_crc(p_1168->g_690.f5, "p_1168->g_690.f5", print_hash_value);
    transparent_crc(p_1168->g_696.x, "p_1168->g_696.x", print_hash_value);
    transparent_crc(p_1168->g_696.y, "p_1168->g_696.y", print_hash_value);
    transparent_crc(p_1168->g_727.f0.f0, "p_1168->g_727.f0.f0", print_hash_value);
    transparent_crc(p_1168->g_727.f1, "p_1168->g_727.f1", print_hash_value);
    transparent_crc(p_1168->g_727.f2, "p_1168->g_727.f2", print_hash_value);
    transparent_crc(p_1168->g_727.f3, "p_1168->g_727.f3", print_hash_value);
    transparent_crc(p_1168->g_727.f4, "p_1168->g_727.f4", print_hash_value);
    transparent_crc(p_1168->g_727.f5, "p_1168->g_727.f5", print_hash_value);
    transparent_crc(p_1168->g_730, "p_1168->g_730", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_1168->g_764[i][j][k].f0.f0, "p_1168->g_764[i][j][k].f0.f0", print_hash_value);
                transparent_crc(p_1168->g_764[i][j][k].f1, "p_1168->g_764[i][j][k].f1", print_hash_value);
                transparent_crc(p_1168->g_764[i][j][k].f2, "p_1168->g_764[i][j][k].f2", print_hash_value);
                transparent_crc(p_1168->g_764[i][j][k].f3, "p_1168->g_764[i][j][k].f3", print_hash_value);
                transparent_crc(p_1168->g_764[i][j][k].f4, "p_1168->g_764[i][j][k].f4", print_hash_value);
                transparent_crc(p_1168->g_764[i][j][k].f5, "p_1168->g_764[i][j][k].f5", print_hash_value);

            }
        }
    }
    transparent_crc(p_1168->g_766.f0.f0, "p_1168->g_766.f0.f0", print_hash_value);
    transparent_crc(p_1168->g_766.f1, "p_1168->g_766.f1", print_hash_value);
    transparent_crc(p_1168->g_766.f2, "p_1168->g_766.f2", print_hash_value);
    transparent_crc(p_1168->g_766.f3, "p_1168->g_766.f3", print_hash_value);
    transparent_crc(p_1168->g_766.f4, "p_1168->g_766.f4", print_hash_value);
    transparent_crc(p_1168->g_766.f5, "p_1168->g_766.f5", print_hash_value);
    transparent_crc(p_1168->g_793.x, "p_1168->g_793.x", print_hash_value);
    transparent_crc(p_1168->g_793.y, "p_1168->g_793.y", print_hash_value);
    transparent_crc(p_1168->g_812.f0, "p_1168->g_812.f0", print_hash_value);
    transparent_crc(p_1168->g_812.f1.f0, "p_1168->g_812.f1.f0", print_hash_value);
    transparent_crc(p_1168->g_812.f2, "p_1168->g_812.f2", print_hash_value);
    transparent_crc(p_1168->g_812.f3, "p_1168->g_812.f3", print_hash_value);
    transparent_crc(p_1168->g_813.f0, "p_1168->g_813.f0", print_hash_value);
    transparent_crc(p_1168->g_813.f1.f0, "p_1168->g_813.f1.f0", print_hash_value);
    transparent_crc(p_1168->g_813.f2, "p_1168->g_813.f2", print_hash_value);
    transparent_crc(p_1168->g_813.f3, "p_1168->g_813.f3", print_hash_value);
    transparent_crc(p_1168->g_964, "p_1168->g_964", print_hash_value);
    transparent_crc(p_1168->g_977.x, "p_1168->g_977.x", print_hash_value);
    transparent_crc(p_1168->g_977.y, "p_1168->g_977.y", print_hash_value);
    transparent_crc(p_1168->g_977.z, "p_1168->g_977.z", print_hash_value);
    transparent_crc(p_1168->g_977.w, "p_1168->g_977.w", print_hash_value);
    transparent_crc(p_1168->g_1025.x, "p_1168->g_1025.x", print_hash_value);
    transparent_crc(p_1168->g_1025.y, "p_1168->g_1025.y", print_hash_value);
    transparent_crc(p_1168->g_1035.f0, "p_1168->g_1035.f0", print_hash_value);
    transparent_crc(p_1168->g_1035.f1, "p_1168->g_1035.f1", print_hash_value);
    transparent_crc(p_1168->g_1035.f2, "p_1168->g_1035.f2", print_hash_value);
    transparent_crc(p_1168->g_1035.f3, "p_1168->g_1035.f3", print_hash_value);
    transparent_crc(p_1168->g_1035.f4, "p_1168->g_1035.f4", print_hash_value);
    transparent_crc(p_1168->g_1035.f5, "p_1168->g_1035.f5", print_hash_value);
    transparent_crc(p_1168->g_1035.f6, "p_1168->g_1035.f6", print_hash_value);
    transparent_crc(p_1168->g_1035.f7, "p_1168->g_1035.f7", print_hash_value);
    transparent_crc(p_1168->g_1035.f8, "p_1168->g_1035.f8", print_hash_value);
    transparent_crc(p_1168->g_1035.f9, "p_1168->g_1035.f9", print_hash_value);
    transparent_crc(p_1168->g_1100, "p_1168->g_1100", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1168->g_1167[i].f0, "p_1168->g_1167[i].f0", print_hash_value);
        transparent_crc(p_1168->g_1167[i].f1, "p_1168->g_1167[i].f1", print_hash_value);
        transparent_crc(p_1168->g_1167[i].f2, "p_1168->g_1167[i].f2", print_hash_value);
        transparent_crc(p_1168->g_1167[i].f3, "p_1168->g_1167[i].f3", print_hash_value);
        transparent_crc(p_1168->g_1167[i].f4, "p_1168->g_1167[i].f4", print_hash_value);
        transparent_crc(p_1168->g_1167[i].f5, "p_1168->g_1167[i].f5", print_hash_value);
        transparent_crc(p_1168->g_1167[i].f6, "p_1168->g_1167[i].f6", print_hash_value);
        transparent_crc(p_1168->g_1167[i].f7, "p_1168->g_1167[i].f7", print_hash_value);
        transparent_crc(p_1168->g_1167[i].f8, "p_1168->g_1167[i].f8", print_hash_value);
        transparent_crc(p_1168->g_1167[i].f9, "p_1168->g_1167[i].f9", print_hash_value);

    }
    transparent_crc(p_1168->v_collective, "p_1168->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 47; i++)
            transparent_crc(p_1168->g_special_values[i + 47 * get_linear_group_id()], "p_1168->g_special_values[i + 47 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 47; i++)
            transparent_crc(p_1168->l_special_values[i], "p_1168->l_special_values[i]", print_hash_value);
    transparent_crc(p_1168->l_comm_values[get_linear_local_id()], "p_1168->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1168->g_comm_values[get_linear_group_id() * 150 + get_linear_local_id()], "p_1168->g_comm_values[get_linear_group_id() * 150 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
