// --atomics 66 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 29,62,5 -l 1,31,5
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

__constant uint32_t permutations[10][155] = {
{112,58,20,46,151,148,60,146,34,108,4,15,85,99,135,69,91,94,16,102,136,68,73,11,70,31,134,139,37,48,109,107,56,30,96,116,138,120,119,92,137,5,66,61,12,144,74,33,10,129,44,28,54,17,38,6,53,45,26,9,93,121,142,147,78,75,101,104,114,98,83,71,55,111,7,100,77,23,62,72,87,24,41,57,105,50,67,106,97,125,14,130,86,131,89,141,122,42,40,49,64,0,88,1,79,145,133,140,27,126,36,43,95,3,127,47,52,143,118,2,149,59,22,81,13,110,19,152,51,113,123,150,154,124,153,63,115,132,29,25,32,103,65,8,21,76,117,39,82,90,84,80,35,18,128}, // permutation 0
{27,15,34,82,86,132,29,149,131,136,109,143,67,139,22,42,95,87,65,72,62,102,37,113,66,21,32,73,45,111,120,140,79,23,19,134,9,142,16,112,98,84,144,104,124,31,97,20,5,154,38,147,43,1,107,51,105,93,92,68,152,41,141,101,56,10,78,121,94,123,59,46,0,44,2,114,63,24,117,61,14,148,150,138,70,54,126,40,12,50,18,119,8,99,49,88,74,26,135,58,128,122,137,145,153,69,55,53,90,30,118,13,25,80,71,4,3,83,47,60,151,108,81,11,116,146,7,103,35,133,85,129,77,28,57,52,100,36,6,115,64,75,17,125,110,96,106,48,91,127,76,33,130,89,39}, // permutation 1
{43,65,59,141,124,101,16,4,106,133,63,17,125,45,77,87,18,0,11,118,12,152,148,68,117,74,108,21,27,35,58,39,36,116,54,13,75,138,114,33,30,84,86,143,38,37,132,115,79,3,44,88,122,93,52,80,57,145,151,154,70,5,78,50,83,55,99,91,94,130,62,98,28,14,82,123,89,135,48,112,10,113,153,96,7,46,1,41,85,110,24,76,136,104,67,60,25,121,71,81,61,72,109,95,49,51,2,119,15,107,140,128,8,134,53,97,42,147,144,20,29,6,102,142,34,22,100,111,146,73,26,32,19,137,127,66,90,126,129,150,105,64,139,120,149,40,92,23,56,31,103,47,9,69,131}, // permutation 2
{28,92,120,89,93,145,152,100,75,45,41,24,56,15,72,132,107,50,49,67,21,125,86,88,118,42,98,61,55,108,150,123,19,1,74,2,135,63,40,149,111,44,115,9,121,137,6,60,37,81,69,95,134,30,82,146,139,46,66,148,14,23,26,147,91,136,34,29,104,68,38,144,58,131,101,11,119,127,138,22,94,8,17,12,154,142,3,31,126,79,103,122,35,141,78,110,33,151,90,99,39,53,52,129,80,16,18,5,13,64,105,84,57,73,4,106,76,77,109,130,0,59,153,27,70,32,124,117,113,116,102,51,71,85,140,48,7,20,43,36,54,25,143,128,97,47,83,87,112,96,62,133,114,65,10}, // permutation 3
{107,117,35,43,83,61,110,23,70,132,7,134,148,8,147,9,3,130,112,103,59,40,29,124,108,17,82,12,11,24,36,27,67,16,85,47,22,14,28,18,140,38,102,122,141,80,31,120,78,114,44,136,60,90,129,84,34,142,131,19,75,135,1,127,128,86,105,145,79,50,89,73,137,41,94,6,0,68,97,30,76,109,66,100,116,42,45,99,57,138,53,96,91,20,64,143,149,69,152,15,104,65,4,115,119,63,133,144,62,150,139,71,93,121,146,72,113,25,2,33,58,5,46,51,151,81,154,106,98,52,74,88,37,118,48,87,123,56,10,39,92,125,55,111,54,77,153,13,26,126,95,32,21,101,49}, // permutation 4
{116,65,47,103,67,25,97,69,1,135,81,13,143,17,41,123,56,34,153,44,26,106,138,112,73,79,27,125,91,95,20,86,76,100,62,134,60,24,148,55,70,4,141,54,30,118,98,142,107,122,96,93,63,88,10,78,130,68,131,154,147,145,111,89,51,90,50,6,151,29,83,15,80,21,42,45,137,32,18,127,152,102,14,126,121,61,110,3,85,150,92,139,109,22,87,124,5,28,9,129,53,94,40,0,113,120,8,84,64,119,48,43,23,7,36,146,49,2,59,133,128,31,115,35,38,144,108,114,16,57,104,101,37,58,117,46,12,75,71,39,52,77,136,140,105,33,149,74,72,132,19,66,11,99,82}, // permutation 5
{21,54,32,8,35,46,70,118,68,9,111,141,138,22,113,15,5,67,61,121,38,135,53,140,108,126,85,23,97,40,18,55,115,34,76,82,131,109,62,107,27,36,10,116,143,105,136,58,37,7,125,80,98,30,0,25,12,17,39,6,47,78,69,13,79,114,91,1,130,94,72,93,16,74,102,66,33,77,64,148,45,65,92,43,95,19,147,154,24,71,2,59,3,75,4,29,84,134,101,20,103,142,112,11,83,50,145,89,153,48,104,31,132,110,152,150,133,86,144,100,57,151,87,28,88,120,99,44,124,14,123,56,81,127,106,129,90,117,60,96,41,149,119,73,26,139,51,63,122,49,128,137,52,42,146}, // permutation 6
{147,41,146,76,25,86,38,23,151,48,96,40,28,10,27,13,21,114,109,134,46,54,74,137,20,135,6,93,92,124,83,68,64,66,72,30,56,90,81,75,152,97,148,36,106,17,108,47,138,35,136,4,105,0,69,143,130,127,67,112,111,120,7,77,133,58,14,132,89,101,150,102,94,8,1,61,34,42,55,60,144,131,107,122,45,78,119,11,3,33,9,84,85,128,142,113,87,82,65,104,31,71,140,16,116,51,149,100,126,91,115,63,29,129,125,153,26,24,98,19,123,110,49,80,141,39,154,18,15,22,73,70,117,139,95,5,118,121,37,52,43,88,79,44,62,53,2,12,59,50,57,99,32,103,145}, // permutation 7
{61,69,58,19,135,153,147,151,91,71,25,126,138,24,42,41,70,97,152,144,32,121,136,86,3,22,34,99,112,30,47,63,79,4,149,76,100,50,18,110,108,67,84,78,5,93,143,44,113,12,115,122,119,114,150,132,56,0,7,37,6,66,105,17,27,85,1,120,52,8,134,131,46,64,28,130,45,16,116,142,101,26,40,107,95,77,124,75,109,20,38,11,43,103,2,15,31,148,59,65,127,36,53,139,72,87,83,13,68,74,57,49,89,118,39,80,140,90,145,81,137,98,88,117,14,29,104,129,54,48,23,123,141,154,73,125,33,21,82,60,111,94,9,55,146,102,92,128,62,106,10,96,133,35,51}, // permutation 8
{35,97,10,103,74,26,76,150,38,81,102,55,9,100,78,48,66,119,29,56,134,58,4,133,94,117,122,111,27,64,73,67,19,70,57,20,14,107,84,77,99,69,147,123,24,114,118,61,75,120,142,96,90,40,152,101,129,154,39,47,23,109,82,33,15,138,127,136,59,71,88,83,46,31,98,49,60,92,13,6,144,106,95,112,0,52,132,50,12,128,93,137,149,16,7,28,25,18,30,2,68,104,1,65,91,72,140,116,85,86,21,63,135,3,45,125,42,113,108,115,110,141,5,36,51,22,139,34,87,121,53,146,43,89,80,145,153,17,62,126,54,79,11,32,44,124,105,131,8,143,130,148,37,151,41} // permutation 9
};

// Seed: 2794618593

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    uint8_t g_3;
    volatile int32_t g_26;
    int32_t g_27;
    int32_t g_41;
    VECTOR(uint8_t, 2) g_54;
    uint8_t *g_67;
    int16_t g_75;
    int32_t * volatile g_76;
    int32_t *g_78;
    int32_t ** volatile g_77;
    uint16_t g_83;
    volatile VECTOR(int8_t, 4) g_90;
    uint32_t g_121;
    int32_t *g_125;
    int32_t **g_124;
    VECTOR(uint16_t, 8) g_142;
    int8_t g_150;
    volatile int16_t g_159;
    volatile int16_t *g_158;
    volatile int16_t **g_157;
    int8_t g_177;
    int64_t g_178;
    int32_t g_179;
    uint8_t g_180;
    VECTOR(uint64_t, 2) g_190;
    volatile uint32_t g_200;
    volatile uint32_t *g_199;
    int16_t g_230;
    uint64_t g_274;
    int32_t g_276;
    VECTOR(uint8_t, 2) g_285;
    int8_t *g_319;
    int8_t **g_318;
    int8_t ***g_317;
    uint32_t g_329[1][7][6];
    uint32_t g_348;
    int32_t g_351;
    int32_t g_352;
    int32_t g_353;
    VECTOR(uint8_t, 8) g_379;
    VECTOR(int16_t, 4) g_405;
    int16_t *g_419;
    int16_t **g_418;
    VECTOR(int64_t, 16) g_433;
    uint16_t g_434;
    uint32_t g_448;
    VECTOR(int16_t, 2) g_455;
    VECTOR(int16_t, 8) g_456;
    VECTOR(uint8_t, 8) g_491;
    VECTOR(uint8_t, 2) g_493;
    VECTOR(uint8_t, 8) g_495;
    VECTOR(uint8_t, 4) g_499;
    uint32_t g_549;
    VECTOR(uint8_t, 4) g_556;
    VECTOR(int16_t, 2) g_569;
    int32_t g_618;
    VECTOR(int32_t, 2) g_639;
    volatile int8_t g_661;
    volatile int8_t g_662;
    volatile int8_t g_663;
    volatile int8_t *g_660[10];
    volatile int8_t **g_659;
    volatile int8_t ***g_658;
    volatile int8_t ****g_657;
    volatile int8_t *****g_656;
    VECTOR(int64_t, 16) g_669;
    VECTOR(uint32_t, 8) g_709;
    VECTOR(uint32_t, 16) g_712;
    VECTOR(int16_t, 2) g_720;
    VECTOR(int32_t, 8) g_724;
    VECTOR(int32_t, 2) g_734;
    VECTOR(int32_t, 4) g_752;
    VECTOR(uint32_t, 2) g_756;
    int8_t g_776;
    VECTOR(int8_t, 8) g_791;
    VECTOR(int8_t, 2) g_793;
    VECTOR(int8_t, 8) g_794;
    VECTOR(uint8_t, 4) g_865;
    VECTOR(int32_t, 2) g_901;
    VECTOR(int32_t, 4) g_904;
    int8_t ******g_915;
    VECTOR(int32_t, 16) g_917;
    int8_t g_933;
    VECTOR(int16_t, 16) g_1009;
    VECTOR(uint16_t, 4) g_1010;
    VECTOR(uint8_t, 16) g_1013;
    VECTOR(uint16_t, 16) g_1021;
    int32_t g_1026[10][9][2];
    volatile VECTOR(int8_t, 16) g_1041;
    uint8_t *g_1056;
    VECTOR(int8_t, 8) g_1153;
    VECTOR(int8_t, 2) g_1155;
    VECTOR(int8_t, 4) g_1156;
    volatile VECTOR(uint8_t, 8) g_1192;
    VECTOR(uint16_t, 8) g_1199;
    uint16_t g_1205;
    volatile VECTOR(int32_t, 4) g_1210;
    int32_t ** volatile g_1229;
    int32_t **g_1243;
    VECTOR(uint8_t, 2) g_1250;
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
uint32_t  func_1(struct S0 * p_1277);
int16_t  func_6(uint8_t  p_7, uint32_t  p_8, int64_t  p_9, uint8_t * p_10, struct S0 * p_1277);
uint32_t  func_13(uint32_t  p_14, struct S0 * p_1277);
uint8_t * func_15(uint32_t  p_16, uint8_t * p_17, uint8_t  p_18, int32_t  p_19, struct S0 * p_1277);
int32_t * func_68(int32_t * p_69, int16_t  p_70, struct S0 * p_1277);
int16_t * func_86(uint32_t  p_87, struct S0 * p_1277);
int16_t * func_98(int32_t * p_99, int32_t ** p_100, int32_t  p_101, uint64_t  p_102, int32_t  p_103, struct S0 * p_1277);
int64_t  func_104(uint16_t * p_105, int64_t  p_106, uint8_t  p_107, struct S0 * p_1277);
uint8_t * func_110(int32_t ** p_111, uint32_t  p_112, uint8_t * p_113, uint16_t * p_114, struct S0 * p_1277);
int32_t ** func_115(int32_t * p_116, struct S0 * p_1277);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1277->g_comm_values p_1277->g_3 p_1277->g_27 p_1277->g_67 p_1277->g_76 p_1277->g_77 p_1277->g_83 p_1277->g_90 p_1277->g_41 p_1277->g_121 p_1277->g_124 p_1277->g_142 p_1277->g_150 p_1277->g_54 p_1277->g_157 p_1277->g_125 p_1277->g_75 p_1277->g_180 p_1277->g_199 p_1277->g_177 p_1277->l_comm_values p_1277->g_190 p_1277->g_230 p_1277->g_158 p_1277->g_178 p_1277->g_276 p_1277->g_274 p_1277->g_319 p_1277->g_317 p_1277->g_348 p_1277->g_379 p_1277->g_285 p_1277->g_179 p_1277->g_352 p_1277->g_418 p_1277->g_434 p_1277->g_405 p_1277->g_448 p_1277->g_455 p_1277->g_456 p_1277->g_419 p_1277->g_491 p_1277->g_493 p_1277->g_495 p_1277->g_499 p_1277->g_351 p_1277->g_549 p_1277->g_556 p_1277->g_433 p_1277->g_569 p_1277->g_329 p_1277->g_639 p_1277->g_656 p_1277->g_669 p_1277->g_709 p_1277->g_712 p_1277->g_720 p_1277->g_791 p_1277->g_793 p_1277->g_794 p_1277->g_756 p_1277->g_318 p_1277->g_865 p_1277->g_901 p_1277->g_904 p_1277->g_915 p_1277->g_917 p_1277->g_734 p_1277->g_1009 p_1277->g_1010 p_1277->g_1013 p_1277->g_1021 p_1277->g_1026 p_1277->g_1041 p_1277->g_660 p_1277->g_1056 p_1277->g_159 p_1277->g_353 p_1277->g_1153 p_1277->g_1155 p_1277->g_1156 p_1277->g_776 p_1277->g_1192 p_1277->g_1199 p_1277->g_1205 p_1277->g_78 p_1277->g_1229 p_1277->g_26 p_1277->g_618 p_1277->g_1250
 * writes: p_1277->g_3 p_1277->g_27 p_1277->g_75 p_1277->g_41 p_1277->g_78 p_1277->g_83 p_1277->g_121 p_1277->g_150 p_1277->g_125 p_1277->g_180 p_1277->g_230 p_1277->g_179 p_1277->g_274 p_1277->g_276 p_1277->g_329 p_1277->g_318 p_1277->g_348 p_1277->g_352 p_1277->g_418 p_1277->g_177 p_1277->g_434 p_1277->g_448 p_1277->g_319 p_1277->l_comm_values p_1277->g_142 p_1277->g_499 p_1277->g_351 p_1277->g_549 p_1277->g_491 p_1277->g_433 p_1277->g_178 p_1277->g_495 p_1277->g_865 p_1277->g_734 p_1277->g_1026 p_1277->g_67 p_1277->g_353 p_1277->g_756 p_1277->g_933 p_1277->g_1243 p_1277->g_776
 */
uint32_t  func_1(struct S0 * p_1277)
{ /* block id: 4 */
    uint8_t *l_2[5][4][9] = {{{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3},{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3},{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3},{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3}},{{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3},{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3},{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3},{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3}},{{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3},{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3},{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3},{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3}},{{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3},{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3},{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3},{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3}},{{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3},{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3},{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3},{&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3,&p_1277->g_3}}};
    int32_t l_11 = (-10L);
    uint64_t l_12 = 0x1FC2DA8AFC1DA7BCL;
    uint8_t **l_1044 = &p_1277->g_67;
    uint8_t **l_1045 = &l_2[2][2][4];
    uint64_t l_1055 = 18446744073709551615UL;
    VECTOR(int8_t, 4) l_1154 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 4L), 4L);
    VECTOR(uint32_t, 4) l_1157 = (VECTOR(uint32_t, 4))(0xFF9C3D8CL, (VECTOR(uint32_t, 2))(0xFF9C3D8CL, 4294967295UL), 4294967295UL);
    uint16_t l_1158[1];
    int32_t l_1170[2][8] = {{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L},{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L}};
    int32_t *l_1180 = &p_1277->g_618;
    uint16_t l_1183 = 65535UL;
    VECTOR(uint16_t, 8) l_1197 = (VECTOR(uint16_t, 8))(0xD702L, (VECTOR(uint16_t, 4))(0xD702L, (VECTOR(uint16_t, 2))(0xD702L, 0xEE0CL), 0xEE0CL), 0xEE0CL, 0xD702L, 0xEE0CL);
    VECTOR(uint16_t, 2) l_1198 = (VECTOR(uint16_t, 2))(0xE654L, 1UL);
    uint32_t *l_1200 = (void*)0;
    uint32_t *l_1201 = (void*)0;
    uint32_t *l_1202[7][8] = {{(void*)0,&p_1277->g_448,&p_1277->g_329[0][3][2],&p_1277->g_448,(void*)0,(void*)0,&p_1277->g_448,&p_1277->g_329[0][3][2]},{(void*)0,&p_1277->g_448,&p_1277->g_329[0][3][2],&p_1277->g_448,(void*)0,(void*)0,&p_1277->g_448,&p_1277->g_329[0][3][2]},{(void*)0,&p_1277->g_448,&p_1277->g_329[0][3][2],&p_1277->g_448,(void*)0,(void*)0,&p_1277->g_448,&p_1277->g_329[0][3][2]},{(void*)0,&p_1277->g_448,&p_1277->g_329[0][3][2],&p_1277->g_448,(void*)0,(void*)0,&p_1277->g_448,&p_1277->g_329[0][3][2]},{(void*)0,&p_1277->g_448,&p_1277->g_329[0][3][2],&p_1277->g_448,(void*)0,(void*)0,&p_1277->g_448,&p_1277->g_329[0][3][2]},{(void*)0,&p_1277->g_448,&p_1277->g_329[0][3][2],&p_1277->g_448,(void*)0,(void*)0,&p_1277->g_448,&p_1277->g_329[0][3][2]},{(void*)0,&p_1277->g_448,&p_1277->g_329[0][3][2],&p_1277->g_448,(void*)0,(void*)0,&p_1277->g_448,&p_1277->g_329[0][3][2]}};
    uint16_t *l_1203 = (void*)0;
    uint16_t *l_1204 = &l_1158[0];
    int32_t ***l_1270 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1158[i] = 9UL;
    if (((p_1277->g_3 |= p_1277->g_comm_values[p_1277->tid]) & ((safe_add_func_int16_t_s_s(func_6(l_11, ((l_12 , 0x58900FDBL) , func_13((GROUP_DIVERGE(1, 1) , (0x5637L && (((*l_1045) = ((*l_1044) = func_15((l_12 && p_1277->g_comm_values[p_1277->tid]), l_2[2][2][4], l_11, l_12, p_1277))) != p_1277->g_660[6]))), p_1277)), l_1055, p_1277->g_1056, p_1277), FAKE_DIVERGE(p_1277->local_1_offset, get_local_id(1), 10))) < 0xADE179D2L)))
    { /* block id: 441 */
        for (p_1277->g_353 = 22; (p_1277->g_353 <= 13); --p_1277->g_353)
        { /* block id: 444 */
            if ((atomic_inc(&p_1277->g_atomic_input[66 * get_linear_group_id() + 38]) == 5))
            { /* block id: 446 */
                uint8_t l_1060 = 0x08L;
                uint32_t l_1094 = 4294967295UL;
                uint32_t l_1095 = 0xFE2DCF0FL;
                if (l_1060)
                { /* block id: 447 */
                    int64_t l_1061 = 0L;
                    uint16_t l_1062 = 0x77F4L;
                    int32_t l_1065 = 0x19493DB9L;
                    int32_t l_1066 = 0L;
                    --l_1062;
                    l_1066 = l_1065;
                }
                else
                { /* block id: 450 */
                    int32_t l_1067 = 1L;
                    int64_t l_1083 = (-1L);
                    int16_t l_1084 = 0x6B7EL;
                    int16_t l_1085[5][5] = {{0x5204L,0x4E10L,(-1L),4L,(-1L)},{0x5204L,0x4E10L,(-1L),4L,(-1L)},{0x5204L,0x4E10L,(-1L),4L,(-1L)},{0x5204L,0x4E10L,(-1L),4L,(-1L)},{0x5204L,0x4E10L,(-1L),4L,(-1L)}};
                    int i, j;
                    for (l_1067 = 0; (l_1067 >= (-15)); --l_1067)
                    { /* block id: 453 */
                        uint32_t l_1070 = 0x4EE41F26L;
                        int32_t l_1072 = (-1L);
                        int32_t *l_1071 = &l_1072;
                        int32_t *l_1073 = (void*)0;
                        int32_t *l_1074[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t *l_1075 = &l_1072;
                        int32_t *l_1076 = &l_1072;
                        int32_t *l_1077 = &l_1072;
                        int32_t *l_1078[10];
                        int32_t *l_1079 = &l_1072;
                        int32_t *l_1080 = &l_1072;
                        uint16_t l_1081 = 0x2BF2L;
                        int8_t l_1082[6] = {0x1FL,0x43L,0x1FL,0x1FL,0x43L,0x1FL};
                        int i;
                        for (i = 0; i < 10; i++)
                            l_1078[i] = (void*)0;
                        l_1075 = (l_1074[0] = (l_1073 = (l_1071 = (l_1070 , (void*)0))));
                        l_1077 = (l_1076 = (void*)0);
                        l_1080 = (l_1079 = l_1078[3]);
                        l_1082[4] ^= l_1081;
                    }
                    l_1083 |= 0L;
                    l_1085[3][4] &= (l_1084 = (-1L));
                    for (l_1085[0][1] = 0; (l_1085[0][1] < 1); l_1085[0][1]++)
                    { /* block id: 469 */
                        uint64_t l_1088[7][2] = {{0x2541FA0A5AD44DD1L,0x2541FA0A5AD44DD1L},{0x2541FA0A5AD44DD1L,0x2541FA0A5AD44DD1L},{0x2541FA0A5AD44DD1L,0x2541FA0A5AD44DD1L},{0x2541FA0A5AD44DD1L,0x2541FA0A5AD44DD1L},{0x2541FA0A5AD44DD1L,0x2541FA0A5AD44DD1L},{0x2541FA0A5AD44DD1L,0x2541FA0A5AD44DD1L},{0x2541FA0A5AD44DD1L,0x2541FA0A5AD44DD1L}};
                        uint16_t l_1091[6][3][4] = {{{0xB9DDL,3UL,0UL,6UL},{0xB9DDL,3UL,0UL,6UL},{0xB9DDL,3UL,0UL,6UL}},{{0xB9DDL,3UL,0UL,6UL},{0xB9DDL,3UL,0UL,6UL},{0xB9DDL,3UL,0UL,6UL}},{{0xB9DDL,3UL,0UL,6UL},{0xB9DDL,3UL,0UL,6UL},{0xB9DDL,3UL,0UL,6UL}},{{0xB9DDL,3UL,0UL,6UL},{0xB9DDL,3UL,0UL,6UL},{0xB9DDL,3UL,0UL,6UL}},{{0xB9DDL,3UL,0UL,6UL},{0xB9DDL,3UL,0UL,6UL},{0xB9DDL,3UL,0UL,6UL}},{{0xB9DDL,3UL,0UL,6UL},{0xB9DDL,3UL,0UL,6UL},{0xB9DDL,3UL,0UL,6UL}}};
                        int i, j, k;
                        --l_1088[4][0];
                        l_1091[4][2][2]--;
                    }
                }
                l_1095 = l_1094;
                for (l_1060 = 0; (l_1060 > 39); l_1060 = safe_add_func_int16_t_s_s(l_1060, 9))
                { /* block id: 477 */
                    VECTOR(int32_t, 2) l_1098 = (VECTOR(int32_t, 2))(0L, 9L);
                    VECTOR(int32_t, 4) l_1099 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 5L), 5L);
                    VECTOR(int16_t, 16) l_1100 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x6F6EL), 0x6F6EL), 0x6F6EL, (-1L), 0x6F6EL, (VECTOR(int16_t, 2))((-1L), 0x6F6EL), (VECTOR(int16_t, 2))((-1L), 0x6F6EL), (-1L), 0x6F6EL, (-1L), 0x6F6EL);
                    VECTOR(uint16_t, 4) l_1101 = (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 65535UL), 65535UL);
                    VECTOR(int32_t, 4) l_1102 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L));
                    int32_t l_1103 = 0x46DD85EFL;
                    VECTOR(int32_t, 16) l_1104 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int32_t, 2))(1L, (-1L)), (VECTOR(int32_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
                    VECTOR(int16_t, 16) l_1105 = (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L, (VECTOR(int16_t, 2))((-4L), 0L), (VECTOR(int16_t, 2))((-4L), 0L), (-4L), 0L, (-4L), 0L);
                    int16_t l_1106 = 0x4782L;
                    int16_t l_1107 = 3L;
                    VECTOR(uint16_t, 4) l_1108 = (VECTOR(uint16_t, 4))(0x083AL, (VECTOR(uint16_t, 2))(0x083AL, 0x617CL), 0x617CL);
                    VECTOR(uint16_t, 8) l_1109 = (VECTOR(uint16_t, 8))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0xF2D6L), 0xF2D6L), 0xF2D6L, 7UL, 0xF2D6L);
                    VECTOR(uint16_t, 4) l_1110 = (VECTOR(uint16_t, 4))(0x623CL, (VECTOR(uint16_t, 2))(0x623CL, 6UL), 6UL);
                    VECTOR(uint16_t, 16) l_1111 = (VECTOR(uint16_t, 16))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 65530UL), 65530UL), 65530UL, 65526UL, 65530UL, (VECTOR(uint16_t, 2))(65526UL, 65530UL), (VECTOR(uint16_t, 2))(65526UL, 65530UL), 65526UL, 65530UL, 65526UL, 65530UL);
                    uint32_t l_1112 = 3UL;
                    uint8_t l_1115 = 0UL;
                    int32_t l_1116 = (-1L);
                    VECTOR(int32_t, 16) l_1117 = (VECTOR(int32_t, 16))(0x29CD13D2L, (VECTOR(int32_t, 4))(0x29CD13D2L, (VECTOR(int32_t, 2))(0x29CD13D2L, (-3L)), (-3L)), (-3L), 0x29CD13D2L, (-3L), (VECTOR(int32_t, 2))(0x29CD13D2L, (-3L)), (VECTOR(int32_t, 2))(0x29CD13D2L, (-3L)), 0x29CD13D2L, (-3L), 0x29CD13D2L, (-3L));
                    VECTOR(int32_t, 4) l_1118 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 5L), 5L);
                    VECTOR(int32_t, 8) l_1119 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
                    VECTOR(int32_t, 16) l_1120 = (VECTOR(int32_t, 16))(0x5FECDFBCL, (VECTOR(int32_t, 4))(0x5FECDFBCL, (VECTOR(int32_t, 2))(0x5FECDFBCL, (-3L)), (-3L)), (-3L), 0x5FECDFBCL, (-3L), (VECTOR(int32_t, 2))(0x5FECDFBCL, (-3L)), (VECTOR(int32_t, 2))(0x5FECDFBCL, (-3L)), 0x5FECDFBCL, (-3L), 0x5FECDFBCL, (-3L));
                    VECTOR(int32_t, 16) l_1121 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x54D881BBL), 0x54D881BBL), 0x54D881BBL, (-5L), 0x54D881BBL, (VECTOR(int32_t, 2))((-5L), 0x54D881BBL), (VECTOR(int32_t, 2))((-5L), 0x54D881BBL), (-5L), 0x54D881BBL, (-5L), 0x54D881BBL);
                    uint8_t l_1122 = 5UL;
                    uint8_t l_1123 = 251UL;
                    int32_t *l_1124 = (void*)0;
                    int32_t *l_1125 = (void*)0;
                    int i;
                    l_1123 = (l_1122 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_1098.xyyx)).xxzwyzxw, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(l_1099.yy)), 0x78163AE1L)), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_1100.s81)))).xyxx, ((VECTOR(uint16_t, 4))(l_1101.yxww))))).yzxyzzyyxzxyyywz)).se6)).yxxxxyxyyyyyxyxy)).s79, (int32_t)(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(l_1102.yxyyyxwy)), (int32_t)(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x2CL, 0x72L)), 0x64L, (-1L))).x , l_1103), (int32_t)(l_1102.x = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1104.s68847b5a)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_1105.s6c)))).xyxyxyyyxyyxxxxy, ((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 8))(0x19CBL, ((VECTOR(uint16_t, 4))((l_1107 = l_1106), ((VECTOR(uint16_t, 2))(l_1108.wz)), 0UL)), ((VECTOR(uint16_t, 4))(l_1109.s6642)).y, 0xBEFAL, 0x3158L)).s7300430234400334, ((VECTOR(uint16_t, 8))(0xE7D7L, 0UL, 0xA232L, ((VECTOR(uint16_t, 2))(65533UL, 1UL)), 0xF72DL, 0xE9C1L, 0x17FBL)).s5771630605045243))).s6e, ((VECTOR(uint16_t, 8))(l_1110.zxzxxwzw)).s67, ((VECTOR(uint16_t, 2))(l_1111.sbf))))).yyyxxxxyyxxxyyyx))).s65)), (-10L), 0x69FCDDD8L)).even, (int32_t)(((--l_1112) , (l_1116 = l_1115)) , ((VECTOR(int32_t, 16))(l_1117.s5db805059c37bed4)).sb)))), 0x69FC53E0L)))).even)), ((VECTOR(int32_t, 8))(l_1118.ywzwwwxy)).s0, 0L, 0x3C9DC7FEL, 2L, 0x6E7715AAL, 0x4DA65749L)).s6202)).y)))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_1119.s7714202374402072)).s6e)), 0x1C547A14L, (l_1119.s0 &= 7L), 0x55B54B26L, 0x5DF2B422L, 0x036CF001L, (-1L))).s6 , ((VECTOR(int32_t, 8))(l_1120.s78395646)).s2)))).xxxx))).xyyyzzzx, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(l_1121.s49)).xxxxyyyy, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(0x0D9535A3L, 3L, 0x00FFC6DBL, 0x4D80DD25L)).yzzzwwzy, ((VECTOR(int32_t, 8))(0x676B8FB3L)))))))).s2631477207166610, ((VECTOR(int32_t, 16))(0x7DC9740EL)), ((VECTOR(int32_t, 16))(0x751847E7L))))).s17, ((VECTOR(int32_t, 2))(7L)), ((VECTOR(int32_t, 2))(0x3FEA474AL))))).yxxyyxyx))).s0062127714212637, ((VECTOR(int32_t, 16))(0x45BC132AL))))).s3da9, ((VECTOR(int32_t, 4))(1L))))).zyyxyzwx))))))).s6);
                    l_1125 = l_1124;
                }
                for (l_1095 = 0; (l_1095 != 5); l_1095++)
                { /* block id: 489 */
                    int16_t l_1128 = 0x1C45L;
                    uint32_t l_1129 = 0x4993D9C8L;
                    int64_t l_1140 = 0x5D2B26378B5A668FL;
                    int64_t l_1141 = (-6L);
                    if ((GROUP_DIVERGE(0, 1) , (l_1128 , l_1129)))
                    { /* block id: 490 */
                        VECTOR(uint32_t, 2) l_1130 = (VECTOR(uint32_t, 2))(4294967286UL, 0x4D89AC28L);
                        uint8_t l_1131 = 0UL;
                        uint32_t l_1132 = 1UL;
                        int32_t l_1134 = 1L;
                        int32_t *l_1133 = &l_1134;
                        int32_t *l_1135[9] = {&l_1134,&l_1134,&l_1134,&l_1134,&l_1134,&l_1134,&l_1134,&l_1134,&l_1134};
                        int32_t *l_1136 = &l_1134;
                        int i;
                        l_1132 = (((((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 2))(l_1130.yy)), (uint32_t)(l_1130.x = GROUP_DIVERGE(2, 1))))).even , 0x7105C7DA454F405FL) , l_1131) , 0x306DF62FL);
                        l_1133 = (void*)0;
                        l_1135[2] = (void*)0;
                        l_1136 = (void*)0;
                    }
                    else
                    { /* block id: 496 */
                        int32_t l_1138 = 0x63C10708L;
                        int32_t *l_1137 = &l_1138;
                        int32_t *l_1139 = &l_1138;
                        l_1139 = l_1137;
                    }
                    l_1141 &= l_1140;
                }
                unsigned int result = 0;
                result += l_1060;
                result += l_1094;
                result += l_1095;
                atomic_add(&p_1277->g_special_values[66 * get_linear_group_id() + 38], result);
            }
            else
            { /* block id: 501 */
                (1 + 1);
            }
        }
    }
    else
    { /* block id: 505 */
        int16_t l_1146 = 0L;
        uint32_t *l_1171 = &p_1277->g_329[0][4][5];
        (*p_1277->g_124) = ((*p_1277->g_77) = (*p_1277->g_124));
        l_11 |= (safe_add_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(l_1146, l_1146)) , (*p_1277->g_76)), (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(((((*p_1277->g_319) &= ((~(3L == (((~(safe_mul_func_int16_t_s_s(1L, ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 16))(p_1277->g_1153.s6610000677721466)), ((VECTOR(int8_t, 8))(l_1146, ((VECTOR(int8_t, 2))(0x0DL, 0x2BL)), ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 4))(l_1154.wzxx)).odd, ((VECTOR(int8_t, 8))(p_1277->g_1155.xyxyyxyx)).s44))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(p_1277->g_1156.wwwzyyxx)).odd, (int8_t)((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_1157.wz)).yyyyxyyy)).s35)).even == (((0x7196L > l_1158[0]) & (safe_lshift_func_uint16_t_u_s((((safe_unary_minus_func_uint32_t_u((p_1277->g_756.y &= ((*l_1171) &= (safe_mul_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(l_1170[0][1], 0x08L)) ^ l_1146) < l_1146), 7)) & 9UL), 4L)) & l_1154.z) > l_1154.x), l_1146)))))) , p_1277->g_142.s3) , p_1277->g_54.x), (*p_1277->g_419)))) , l_1158[0])) , l_1157.y)))).odd)), 0x73L)).s7334756523744303))), ((VECTOR(uint8_t, 16))(0xF4L))))).sd))) == GROUP_DIVERGE(2, 1)) , 0xEAL))) | p_1277->g_776)) , l_1055) <= p_1277->g_274), 65527UL)), l_1146))));
    }
    atomic_xor(&p_1277->g_atomic_reduction[get_linear_group_id()], (safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s((+(safe_add_func_uint64_t_u_u(p_1277->g_549, (l_11 = ((VECTOR(int64_t, 16))(0x55185D745D4449F1L, 1L, 0x2D9BB205769EE29BL, p_1277->g_865.w, ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))((safe_mod_func_int64_t_s_s(((l_1180 == &p_1277->g_618) <= ((*l_1204) = (safe_mul_func_int8_t_s_s((((VECTOR(int16_t, 2))(0x7BBAL, 0x2E7AL)).hi >= (l_1183 >= ((VECTOR(uint32_t, 2))(0x633F5AF7L, 0x377BDB48L)).odd)), (safe_add_func_uint32_t_u_u((l_1170[1][6] = (((VECTOR(int32_t, 2))(0x743290DBL, (-9L))).hi & (safe_mul_func_int16_t_s_s(((**p_1277->g_418) <= (safe_div_func_uint64_t_u_u(((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_1277->g_1192.s2500)).zxxzxzwx)).odd, ((VECTOR(uint8_t, 2))(0x3CL, 0x75L)).yxyx))), ((VECTOR(uint8_t, 8))(GROUP_DIVERGE(1, 1), ((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 2))(5UL, 65531UL)).yxyyyyyyxyyyxxyx, ((VECTOR(uint16_t, 2))(0x8EBAL, 0UL)).yyxyxxyyyxyxxxyy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 16))(l_1197.s4041445173736703)).sec, ((VECTOR(uint16_t, 4))(l_1198.xxxy)).hi))).xyyxxxxx, (uint16_t)p_1277->g_190.y))).s4026563652540014)).odd, ((VECTOR(uint16_t, 8))(p_1277->g_1199.s05055030))))))).s5537157211720655))).hi)).s7, (((void*)0 != &p_1277->g_274) != p_1277->g_180))), l_1154.x)) <= l_1183), ((VECTOR(uint8_t, 2))(248UL)), ((VECTOR(uint8_t, 2))(0xB5L)), 1UL, 0UL)).hi))).z, l_1198.x)) , p_1277->g_285.y), l_1154.w))), l_1154.x)))), p_1277->g_901.x)))))), p_1277->g_712.sc)), 1L, (-1L), 1L, ((VECTOR(int64_t, 8))(0x15C52485EDC5962CL)), 0x10FF50ADA187C0DFL, (-5L), 3L, (-10L))).s51))).yxxxxyyyyyyxxyxy)).s728f, ((VECTOR(int64_t, 4))(0x289482D571F175D4L))))), 0x129CF8BC1D22D838L, ((VECTOR(int64_t, 4))((-1L))), l_1170[1][4], (-2L), (-9L))).s9)))), p_1277->g_1205)), 0xCCL)));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1277->v_collective += p_1277->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    for (l_1055 = 0; (l_1055 == 12); ++l_1055)
    { /* block id: 519 */
        int8_t l_1225 = (-8L);
        int8_t l_1226[6];
        VECTOR(int32_t, 8) l_1228 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 4L), 4L), 4L, (-3L), 4L);
        int32_t *l_1241 = (void*)0;
        int32_t l_1245 = 0x0E8FC946L;
        int8_t ***l_1256 = &p_1277->g_318;
        uint8_t l_1274 = 0x40L;
        int i;
        for (i = 0; i < 6; i++)
            l_1226[i] = 0L;
        for (p_1277->g_180 = 4; (p_1277->g_180 >= 3); p_1277->g_180 = safe_sub_func_uint8_t_u_u(p_1277->g_180, 6))
        { /* block id: 522 */
            int32_t *l_1211 = (void*)0;
            int32_t *l_1212[1][4][10] = {{{(void*)0,&l_11,&l_1170[0][1],(void*)0,&l_1170[0][1],&l_11,(void*)0,&p_1277->g_41,&l_1170[0][1],(void*)0},{(void*)0,&l_11,&l_1170[0][1],(void*)0,&l_1170[0][1],&l_11,(void*)0,&p_1277->g_41,&l_1170[0][1],(void*)0},{(void*)0,&l_11,&l_1170[0][1],(void*)0,&l_1170[0][1],&l_11,(void*)0,&p_1277->g_41,&l_1170[0][1],(void*)0},{(void*)0,&l_11,&l_1170[0][1],(void*)0,&l_1170[0][1],&l_11,(void*)0,&p_1277->g_41,&l_1170[0][1],(void*)0}}};
            int16_t l_1213 = 0x7EAAL;
            int8_t ****l_1236 = (void*)0;
            int8_t ***l_1258 = &p_1277->g_318;
            int i, j, k;
            l_1213 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1277->g_1210.xxyw)).yxxxwxwwywxyzyzx)))).s6;
            for (p_1277->g_230 = 15; (p_1277->g_230 < 19); p_1277->g_230 = safe_add_func_uint32_t_u_u(p_1277->g_230, 2))
            { /* block id: 526 */
                int32_t *l_1216 = (void*)0;
                VECTOR(uint64_t, 2) l_1217 = (VECTOR(uint64_t, 2))(18446744073709551613UL, 18446744073709551615UL);
                int8_t *l_1224[3];
                int64_t l_1227[5] = {0x044402BB07F38109L,0x044402BB07F38109L,0x044402BB07F38109L,0x044402BB07F38109L,0x044402BB07F38109L};
                int8_t ****l_1237 = (void*)0;
                int8_t ***l_1255[8] = {&p_1277->g_318,&p_1277->g_318,&p_1277->g_318,&p_1277->g_318,&p_1277->g_318,&p_1277->g_318,&p_1277->g_318,&p_1277->g_318};
                int32_t l_1272 = 0x6ADA5130L;
                int32_t l_1273 = 6L;
                int i;
                for (i = 0; i < 3; i++)
                    l_1224[i] = &p_1277->g_933;
                (*p_1277->g_124) = l_1216;
                (*p_1277->g_1229) = ((*p_1277->g_124) = func_68((*p_1277->g_77), (0x32EF67F5AC75A486L <= ((VECTOR(uint64_t, 4))(18446744073709551607UL, ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_1217.yxxy)))), (uint64_t)((((safe_mul_func_int16_t_s_s(0x0692L, ((((l_1228.s2 = (safe_mod_func_int64_t_s_s(((((l_1170[0][1] ^= (*p_1277->g_319)) ^ (p_1277->g_1009.sf ^ ((p_1277->g_917.sd = (&p_1277->g_199 == &p_1277->g_199)) , (l_1055 >= GROUP_DIVERGE(2, 1))))) > (((l_1227[0] |= ((l_1225 || l_1226[5]) , 2L)) & p_1277->g_720.x) >= 0x26B7D46D25339DB4L)) | (*p_1277->g_419)), l_1198.x))) , p_1277->g_353) >= p_1277->g_569.x) >= 0xFCF829B7L))) || p_1277->g_493.x) && l_1157.x) > l_1226[5])))).even, (uint64_t)1UL, (uint64_t)3UL))), 0UL)).x), p_1277));
                for (p_1277->g_933 = 26; (p_1277->g_933 >= 27); p_1277->g_933 = safe_add_func_int16_t_s_s(p_1277->g_933, 6))
                { /* block id: 536 */
                    int32_t **l_1240[2];
                    int32_t ***l_1242[9][1] = {{&l_1240[1]},{&l_1240[1]},{&l_1240[1]},{&l_1240[1]},{&l_1240[1]},{&l_1240[1]},{&l_1240[1]},{&l_1240[1]},{&l_1240[1]}};
                    int32_t l_1244 = 7L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_1240[i] = &l_1212[0][3][4];
                    l_1241 = func_68(func_68(func_68(func_68((*p_1277->g_124), ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((l_1236 != ((p_1277->g_26 != p_1277->g_618) , l_1237)), (*p_1277->g_319))) != (**p_1277->g_418)), (safe_div_func_int32_t_s_s((((p_1277->g_1243 = &p_1277->g_78) == (void*)0) , l_1244), p_1277->g_54.x)))) ^ 0x6CL), p_1277), l_1245, p_1277), p_1277->g_1155.x, p_1277), p_1277->g_491.s6, p_1277);
                    for (p_1277->g_27 = 0; (p_1277->g_27 >= (-14)); p_1277->g_27 = safe_sub_func_uint64_t_u_u(p_1277->g_27, 7))
                    { /* block id: 542 */
                        int8_t ****l_1257[9] = {&p_1277->g_317,&l_1255[1],&p_1277->g_317,&p_1277->g_317,&l_1255[1],&p_1277->g_317,&p_1277->g_317,&l_1255[1],&p_1277->g_317};
                        int32_t l_1259 = (-2L);
                        int32_t l_1260[10][9] = {{(-3L),0x107096BEL,(-7L),(-5L),(-7L),0x107096BEL,(-3L),(-10L),(-6L)},{(-3L),0x107096BEL,(-7L),(-5L),(-7L),0x107096BEL,(-3L),(-10L),(-6L)},{(-3L),0x107096BEL,(-7L),(-5L),(-7L),0x107096BEL,(-3L),(-10L),(-6L)},{(-3L),0x107096BEL,(-7L),(-5L),(-7L),0x107096BEL,(-3L),(-10L),(-6L)},{(-3L),0x107096BEL,(-7L),(-5L),(-7L),0x107096BEL,(-3L),(-10L),(-6L)},{(-3L),0x107096BEL,(-7L),(-5L),(-7L),0x107096BEL,(-3L),(-10L),(-6L)},{(-3L),0x107096BEL,(-7L),(-5L),(-7L),0x107096BEL,(-3L),(-10L),(-6L)},{(-3L),0x107096BEL,(-7L),(-5L),(-7L),0x107096BEL,(-3L),(-10L),(-6L)},{(-3L),0x107096BEL,(-7L),(-5L),(-7L),0x107096BEL,(-3L),(-10L),(-6L)},{(-3L),0x107096BEL,(-7L),(-5L),(-7L),0x107096BEL,(-3L),(-10L),(-6L)}};
                        int8_t l_1261 = (-8L);
                        int32_t ***l_1271 = &l_1240[1];
                        int i, j;
                        (*p_1277->g_76) = ((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_1277->g_1250.yxyx)).wyyywwzz)))).s1, (p_1277->g_776 &= (((safe_rshift_func_int8_t_s_u(((safe_div_func_uint16_t_u_u((l_1255[1] != (l_1258 = l_1256)), p_1277->g_1021.sa)) , ((*p_1277->g_76) != (l_1259 ^ ((l_1260[3][6] <= (l_1261 < (((safe_mul_func_uint8_t_u_u(p_1277->g_791.s6, (((safe_div_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((p_1277->g_865.z = ((0x7026BCDAEFB8D887L | l_1261) && p_1277->g_712.s0)) <= (*p_1277->g_319)) , (*p_1277->g_419)), GROUP_DIVERGE(1, 1))), l_1260[8][6])), l_1157.w)) < l_1170[0][1]) == p_1277->g_712.s1))) || p_1277->g_1013.s9) , p_1277->g_351))) , l_1158[0])))), 6)) , l_1270) == l_1271)))) < (*p_1277->g_419));
                        (*p_1277->g_124) = (*p_1277->g_124);
                    }
                    --l_1274;
                }
            }
            l_1170[0][4] = (*p_1277->g_76);
        }
    }
    return p_1277->g_1013.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1277->g_352 p_1277->g_158 p_1277->g_159
 * writes: p_1277->g_352
 */
int16_t  func_6(uint8_t  p_7, uint32_t  p_8, int64_t  p_9, uint8_t * p_10, struct S0 * p_1277)
{ /* block id: 438 */
    int32_t *l_1057 = &p_1277->g_352;
    (*l_1057) &= 0x2B2DE542L;
    return (*p_1277->g_158);
}


/* ------------------------------------------ */
/* 
 * reads : p_1277->g_124
 * writes: p_1277->g_125
 */
uint32_t  func_13(uint32_t  p_14, struct S0 * p_1277)
{ /* block id: 434 */
    int32_t *l_1046 = (void*)0;
    int32_t *l_1047[8] = {&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_27,&p_1277->g_41};
    int16_t l_1048 = 0x73DFL;
    int8_t l_1049 = (-1L);
    int64_t l_1050[10][6][1] = {{{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)}},{{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)}},{{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)}},{{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)}},{{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)}},{{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)}},{{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)}},{{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)}},{{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)}},{{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)}}};
    uint64_t l_1051 = 0x65CB29D24C5F42E7L;
    int32_t l_1054 = (-1L);
    int i, j, k;
    (*p_1277->g_124) = l_1046;
    l_1051--;
    return l_1054;
}


/* ------------------------------------------ */
/* 
 * reads : p_1277->g_27 p_1277->g_67 p_1277->g_76 p_1277->g_77 p_1277->g_83 p_1277->g_90 p_1277->g_41 p_1277->g_121 p_1277->g_124 p_1277->g_142 p_1277->g_150 p_1277->g_54 p_1277->g_157 p_1277->g_comm_values p_1277->g_125 p_1277->g_75 p_1277->g_180 p_1277->g_199 p_1277->g_177 p_1277->l_comm_values p_1277->g_190 p_1277->g_230 p_1277->g_158 p_1277->g_178 p_1277->g_276 p_1277->g_274 p_1277->g_319 p_1277->g_317 p_1277->g_348 p_1277->g_379 p_1277->g_285 p_1277->g_179 p_1277->g_352 p_1277->g_418 p_1277->g_434 p_1277->g_405 p_1277->g_448 p_1277->g_455 p_1277->g_456 p_1277->g_419 p_1277->g_491 p_1277->g_493 p_1277->g_495 p_1277->g_499 p_1277->g_351 p_1277->g_549 p_1277->g_556 p_1277->g_433 p_1277->g_569 p_1277->g_329 p_1277->g_639 p_1277->g_656 p_1277->g_669 p_1277->g_709 p_1277->g_712 p_1277->g_720 p_1277->g_791 p_1277->g_793 p_1277->g_794 p_1277->g_756 p_1277->g_318 p_1277->g_865 p_1277->g_901 p_1277->g_904 p_1277->g_915 p_1277->g_917 p_1277->g_734 p_1277->g_1009 p_1277->g_1010 p_1277->g_1013 p_1277->g_1021 p_1277->g_1026 p_1277->g_1041
 * writes: p_1277->g_27 p_1277->g_75 p_1277->g_41 p_1277->g_78 p_1277->g_83 p_1277->g_121 p_1277->g_150 p_1277->g_125 p_1277->g_180 p_1277->g_230 p_1277->g_179 p_1277->g_274 p_1277->g_276 p_1277->g_329 p_1277->g_318 p_1277->g_348 p_1277->g_352 p_1277->g_418 p_1277->g_177 p_1277->g_434 p_1277->g_448 p_1277->g_319 p_1277->l_comm_values p_1277->g_142 p_1277->g_499 p_1277->g_351 p_1277->g_549 p_1277->g_491 p_1277->g_433 p_1277->g_178 p_1277->g_495 p_1277->g_865 p_1277->g_734 p_1277->g_1026
 */
uint8_t * func_15(uint32_t  p_16, uint8_t * p_17, uint8_t  p_18, int32_t  p_19, struct S0 * p_1277)
{ /* block id: 6 */
    uint8_t l_58 = 0x48L;
    int32_t l_128 = 0L;
    int32_t l_437 = 0x42A867BAL;
    VECTOR(int8_t, 4) l_1040 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-5L)), (-5L));
    VECTOR(int8_t, 8) l_1042 = (VECTOR(int8_t, 8))(0x21L, (VECTOR(int8_t, 4))(0x21L, (VECTOR(int8_t, 2))(0x21L, 6L), 6L), 6L, 0x21L, 6L);
    uint8_t *l_1043[1][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j;
    for (p_16 = 9; (p_16 > 34); p_16 = safe_add_func_int64_t_s_s(p_16, 3))
    { /* block id: 9 */
        uint64_t l_33 = 0xD437F1BD53D2AE45L;
        uint8_t *l_53 = (void*)0;
        int32_t *l_117 = &p_1277->g_41;
        int32_t *l_1027 = (void*)0;
        int16_t *l_1038[1];
        uint8_t *l_1039 = (void*)0;
        int i;
        for (i = 0; i < 1; i++)
            l_1038[i] = &p_1277->g_230;
        for (p_19 = (-30); (p_19 == (-14)); p_19 = safe_add_func_int16_t_s_s(p_19, 1))
        { /* block id: 12 */
            int32_t *l_55 = &p_1277->g_27;
            int32_t l_57 = 5L;
            for (p_18 = 29; (p_18 == 12); p_18 = safe_sub_func_uint64_t_u_u(p_18, 2))
            { /* block id: 15 */
                int32_t *l_30 = &p_1277->g_27;
                int32_t *l_31 = &p_1277->g_27;
                int32_t *l_32 = &p_1277->g_27;
                for (p_1277->g_27 = 0; (p_1277->g_27 > 22); p_1277->g_27 = safe_add_func_int32_t_s_s(p_1277->g_27, 6))
                { /* block id: 18 */
                    if (p_18)
                        break;
                }
                ++l_33;
            }
            for (l_33 = 10; (l_33 > 58); ++l_33)
            { /* block id: 25 */
                uint64_t l_50 = 0x5156BE8236511F0BL;
                int32_t *l_56[9][6] = {{&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_27},{&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_27},{&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_27},{&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_27},{&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_27},{&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_27},{&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_27},{&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_27},{&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_41,&p_1277->g_27,&p_1277->g_27}};
                int i, j;
                for (p_1277->g_27 = 27; (p_1277->g_27 < 11); --p_1277->g_27)
                { /* block id: 28 */
                    int32_t *l_40 = &p_1277->g_41;
                    int32_t *l_42 = &p_1277->g_41;
                    int32_t *l_43 = &p_1277->g_41;
                    int32_t *l_44 = &p_1277->g_41;
                    int32_t *l_45 = &p_1277->g_41;
                    int32_t *l_46 = &p_1277->g_41;
                    int32_t *l_47 = &p_1277->g_41;
                    int32_t *l_48 = &p_1277->g_41;
                    int32_t *l_49[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_49[i] = &p_1277->g_41;
                    --l_50;
                    return l_53;
                }
                l_56[7][0] = l_55;
                --l_58;
            }
            if (l_58)
                continue;
        }
        for (p_1277->g_27 = 0; (p_1277->g_27 == 9); p_1277->g_27 = safe_add_func_uint8_t_u_u(p_1277->g_27, 7))
        { /* block id: 39 */
            int32_t **l_79 = &p_1277->g_78;
            uint16_t *l_82 = &p_1277->g_83;
            int16_t *l_97 = &p_1277->g_75;
            int16_t **l_96 = &l_97;
            for (p_19 = 0; (p_19 > 8); ++p_19)
            { /* block id: 42 */
                for (l_58 = 29; (l_58 < 6); l_58 = safe_sub_func_uint16_t_u_u(l_58, 7))
                { /* block id: 45 */
                    return p_1277->g_67;
                }
            }
            (*p_1277->g_77) = func_68(&p_1277->g_27, p_16, p_1277);
            (*l_79) = func_68(((*l_79) = (void*)0), ((safe_lshift_func_uint16_t_u_u((--(*l_82)), 7)) , (((*l_96) = func_86((GROUP_DIVERGE(1, 1) <= (FAKE_DIVERGE(p_1277->local_1_offset, get_local_id(1), 10) , (safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(p_1277->g_90.yyyw)).w, 7)))), p_1277)) != (l_1038[0] = func_98(((func_104(((((safe_mod_func_int8_t_s_s(0x1BL, (-1L))) , func_110(func_115(l_117, p_1277), (l_58 <= (safe_mod_func_int32_t_s_s((l_128 = (l_58 >= p_18)), (-1L)))), &l_58, l_82, p_1277)) == &p_18) , (void*)0), p_16, l_437, p_1277) || p_19) , l_1027), &l_117, p_19, p_1277->g_791.s2, p_1277->g_1021.sd, p_1277)))), p_1277);
            return l_1039;
        }
    }
    l_128 = ((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_1040.xyzz)), p_16, 0L, (-1L), 8L)).s4 & ((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 8))(p_1277->g_1041.s5abf8155)).s1732236776064336, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_1042.s53)), (-2L), (-5L))).xwwywzyyxxyywzzx))).s5) != (l_1040.w != (**p_1277->g_418)));
    return &p_1277->g_180;
}


/* ------------------------------------------ */
/* 
 * reads : p_1277->g_76
 * writes: p_1277->g_75 p_1277->g_41
 */
int32_t * func_68(int32_t * p_69, int16_t  p_70, struct S0 * p_1277)
{ /* block id: 49 */
    int8_t l_73 = 0x7FL;
    int16_t *l_74 = &p_1277->g_75;
    (*p_1277->g_76) = (safe_mod_func_int16_t_s_s(((*l_74) = l_73), l_73));
    return p_69;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t * func_86(uint32_t  p_87, struct S0 * p_1277)
{ /* block id: 56 */
    int32_t *l_91[10][2][3] = {{{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41},{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41}},{{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41},{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41}},{{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41},{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41}},{{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41},{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41}},{{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41},{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41}},{{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41},{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41}},{{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41},{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41}},{{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41},{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41}},{{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41},{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41}},{{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41},{&p_1277->g_41,&p_1277->g_41,&p_1277->g_41}}};
    uint16_t l_92 = 65534UL;
    int16_t *l_95 = &p_1277->g_75;
    int i, j, k;
    l_92--;
    return l_95;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t * func_98(int32_t * p_99, int32_t ** p_100, int32_t  p_101, uint64_t  p_102, int32_t  p_103, struct S0 * p_1277)
{ /* block id: 422 */
    int32_t *l_1028 = (void*)0;
    int32_t *l_1029 = (void*)0;
    int32_t *l_1030 = &p_1277->g_41;
    int32_t *l_1031 = &p_1277->g_41;
    int32_t *l_1032[2];
    int16_t l_1033 = 0x299FL;
    uint64_t l_1034 = 18446744073709551607UL;
    int16_t *l_1037[4] = {&p_1277->g_230,&p_1277->g_230,&p_1277->g_230,&p_1277->g_230};
    int i;
    for (i = 0; i < 2; i++)
        l_1032[i] = (void*)0;
    l_1034--;
    return l_1037[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1277->g_142 p_1277->g_405 p_1277->g_319 p_1277->g_448 p_1277->g_455 p_1277->g_456 p_1277->g_352 p_1277->g_274 p_1277->g_41 p_1277->g_419 p_1277->g_75 p_1277->l_comm_values p_1277->g_418 p_1277->g_491 p_1277->g_493 p_1277->g_495 p_1277->g_499 p_1277->g_230 p_1277->g_83 p_1277->g_434 p_1277->g_351 p_1277->g_124 p_1277->g_125 p_1277->g_150 p_1277->g_549 p_1277->g_556 p_1277->g_433 p_1277->g_569 p_1277->g_180 p_1277->g_27 p_1277->g_329 p_1277->g_177 p_1277->g_639 p_1277->g_656 p_1277->g_669 p_1277->g_179 p_1277->g_709 p_1277->g_712 p_1277->g_720 p_1277->g_348 p_1277->g_178 p_1277->g_791 p_1277->g_793 p_1277->g_794 p_1277->g_756 p_1277->g_190 p_1277->g_317 p_1277->g_318 p_1277->g_865 p_1277->g_901 p_1277->g_904 p_1277->g_915 p_1277->g_917 p_1277->g_734 p_1277->g_54 p_1277->g_1009 p_1277->g_1010 p_1277->g_1013 p_1277->g_1021 p_1277->g_1026 p_1277->g_276
 * writes: p_1277->g_177 p_1277->g_448 p_1277->g_352 p_1277->g_41 p_1277->g_319 p_1277->l_comm_values p_1277->g_142 p_1277->g_499 p_1277->g_230 p_1277->g_83 p_1277->g_75 p_1277->g_348 p_1277->g_351 p_1277->g_125 p_1277->g_150 p_1277->g_549 p_1277->g_491 p_1277->g_274 p_1277->g_433 p_1277->g_178 p_1277->g_329 p_1277->g_495 p_1277->g_865 p_1277->g_734 p_1277->g_1026
 */
int64_t  func_104(uint16_t * p_105, int64_t  p_106, uint8_t  p_107, struct S0 * p_1277)
{ /* block id: 199 */
    int16_t l_442 = (-1L);
    int64_t *l_443 = (void*)0;
    int64_t *l_444 = (void*)0;
    int32_t l_445 = 0L;
    VECTOR(int64_t, 16) l_446 = (VECTOR(int64_t, 16))((-10L), (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 0x71A6E7CCF20800CCL), 0x71A6E7CCF20800CCL), 0x71A6E7CCF20800CCL, (-10L), 0x71A6E7CCF20800CCL, (VECTOR(int64_t, 2))((-10L), 0x71A6E7CCF20800CCL), (VECTOR(int64_t, 2))((-10L), 0x71A6E7CCF20800CCL), (-10L), 0x71A6E7CCF20800CCL, (-10L), 0x71A6E7CCF20800CCL);
    VECTOR(int16_t, 16) l_454 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x1D36L), 0x1D36L), 0x1D36L, 0L, 0x1D36L, (VECTOR(int16_t, 2))(0L, 0x1D36L), (VECTOR(int16_t, 2))(0L, 0x1D36L), 0L, 0x1D36L, 0L, 0x1D36L);
    uint8_t l_461 = 0x28L;
    int32_t *l_464 = &p_1277->g_352;
    int8_t *l_479 = &p_1277->g_150;
    uint64_t *l_488 = (void*)0;
    VECTOR(uint8_t, 16) l_489 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x40L), 0x40L), 0x40L, 1UL, 0x40L, (VECTOR(uint8_t, 2))(1UL, 0x40L), (VECTOR(uint8_t, 2))(1UL, 0x40L), 1UL, 0x40L, 1UL, 0x40L);
    VECTOR(uint8_t, 4) l_494 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 5UL), 5UL);
    VECTOR(uint8_t, 2) l_497 = (VECTOR(uint8_t, 2))(249UL, 0xBDL);
    VECTOR(uint32_t, 8) l_564 = (VECTOR(uint32_t, 8))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 0x81BAC70DL), 0x81BAC70DL), 0x81BAC70DL, 2UL, 0x81BAC70DL);
    VECTOR(uint64_t, 4) l_585 = (VECTOR(uint64_t, 4))(0xA5E1F51737B289C6L, (VECTOR(uint64_t, 2))(0xA5E1F51737B289C6L, 18446744073709551615UL), 18446744073709551615UL);
    VECTOR(int64_t, 8) l_597 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x683DF4764C7D33FCL), 0x683DF4764C7D33FCL), 0x683DF4764C7D33FCL, (-1L), 0x683DF4764C7D33FCL);
    VECTOR(int32_t, 16) l_699 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
    VECTOR(int32_t, 16) l_700 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 1L), 1L), 1L, (-7L), 1L, (VECTOR(int32_t, 2))((-7L), 1L), (VECTOR(int32_t, 2))((-7L), 1L), (-7L), 1L, (-7L), 1L);
    uint32_t *l_702 = (void*)0;
    uint32_t **l_701 = &l_702;
    VECTOR(uint32_t, 16) l_710 = (VECTOR(uint32_t, 16))(0x457F49E8L, (VECTOR(uint32_t, 4))(0x457F49E8L, (VECTOR(uint32_t, 2))(0x457F49E8L, 0xAD70BA44L), 0xAD70BA44L), 0xAD70BA44L, 0x457F49E8L, 0xAD70BA44L, (VECTOR(uint32_t, 2))(0x457F49E8L, 0xAD70BA44L), (VECTOR(uint32_t, 2))(0x457F49E8L, 0xAD70BA44L), 0x457F49E8L, 0xAD70BA44L, 0x457F49E8L, 0xAD70BA44L);
    uint32_t l_721 = 0xEE84274BL;
    VECTOR(int16_t, 2) l_800 = (VECTOR(int16_t, 2))(0x5FA1L, 0x7997L);
    VECTOR(uint64_t, 16) l_813 = (VECTOR(uint64_t, 16))(0x7E84B12DE3AD2FCAL, (VECTOR(uint64_t, 4))(0x7E84B12DE3AD2FCAL, (VECTOR(uint64_t, 2))(0x7E84B12DE3AD2FCAL, 2UL), 2UL), 2UL, 0x7E84B12DE3AD2FCAL, 2UL, (VECTOR(uint64_t, 2))(0x7E84B12DE3AD2FCAL, 2UL), (VECTOR(uint64_t, 2))(0x7E84B12DE3AD2FCAL, 2UL), 0x7E84B12DE3AD2FCAL, 2UL, 0x7E84B12DE3AD2FCAL, 2UL);
    int32_t l_819 = 0L;
    int8_t **l_821 = &l_479;
    int16_t ***l_839 = (void*)0;
    uint32_t l_883 = 4294967295UL;
    VECTOR(uint8_t, 16) l_890 = (VECTOR(uint8_t, 16))(0x9FL, (VECTOR(uint8_t, 4))(0x9FL, (VECTOR(uint8_t, 2))(0x9FL, 0xB4L), 0xB4L), 0xB4L, 0x9FL, 0xB4L, (VECTOR(uint8_t, 2))(0x9FL, 0xB4L), (VECTOR(uint8_t, 2))(0x9FL, 0xB4L), 0x9FL, 0xB4L, 0x9FL, 0xB4L);
    uint32_t *l_914 = (void*)0;
    VECTOR(int32_t, 8) l_1011 = (VECTOR(int32_t, 8))(0x3A6D85AFL, (VECTOR(int32_t, 4))(0x3A6D85AFL, (VECTOR(int32_t, 2))(0x3A6D85AFL, 0x08ED3D32L), 0x08ED3D32L), 0x08ED3D32L, 0x3A6D85AFL, 0x08ED3D32L);
    VECTOR(int8_t, 8) l_1012 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
    uint8_t **l_1017[1];
    VECTOR(uint32_t, 8) l_1020 = (VECTOR(uint32_t, 8))(0x3E28C0B8L, (VECTOR(uint32_t, 4))(0x3E28C0B8L, (VECTOR(uint32_t, 2))(0x3E28C0B8L, 4294967295UL), 4294967295UL), 4294967295UL, 0x3E28C0B8L, 4294967295UL);
    VECTOR(int64_t, 2) l_1022 = (VECTOR(int64_t, 2))(1L, 0L);
    VECTOR(int16_t, 8) l_1023 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x1029L), 0x1029L), 0x1029L, 0L, 0x1029L);
    int32_t *l_1024 = (void*)0;
    int32_t *l_1025[5][6][6] = {{{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445}},{{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445}},{{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445}},{{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445}},{{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445},{(void*)0,&p_1277->g_352,(void*)0,&l_445,&p_1277->g_352,&l_445}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1017[i] = &p_1277->g_67;
    if (((p_106 < p_107) ^ ((safe_mul_func_uint8_t_u_u(l_442, ((*p_1277->g_319) = (((p_107 || p_1277->g_142.s3) , (0xB01DL ^ p_107)) ^ (l_445 = p_1277->g_405.w))))) <= ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_446.s65ef94ea)).odd)).w)))
    { /* block id: 202 */
        int32_t *l_447 = &p_1277->g_352;
        VECTOR(int16_t, 8) l_453 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0D5EL), 0x0D5EL), 0x0D5EL, (-1L), 0x0D5EL);
        int8_t ***l_462 = &p_1277->g_318;
        int8_t *l_477[5] = {&p_1277->g_177,&p_1277->g_177,&p_1277->g_177,&p_1277->g_177,&p_1277->g_177};
        VECTOR(uint8_t, 16) l_490 = (VECTOR(uint8_t, 16))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0x85L), 0x85L), 0x85L, 248UL, 0x85L, (VECTOR(uint8_t, 2))(248UL, 0x85L), (VECTOR(uint8_t, 2))(248UL, 0x85L), 248UL, 0x85L, 248UL, 0x85L);
        VECTOR(uint8_t, 8) l_498 = (VECTOR(uint8_t, 8))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0UL), 0UL), 0UL, 253UL, 0UL);
        uint8_t l_505 = 255UL;
        int16_t ***l_508[10][2][6] = {{{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0},{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0}},{{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0},{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0}},{{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0},{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0}},{{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0},{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0}},{{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0},{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0}},{{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0},{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0}},{{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0},{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0}},{{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0},{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0}},{{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0},{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0}},{{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0},{(void*)0,&p_1277->g_418,(void*)0,(void*)0,&p_1277->g_418,(void*)0}}};
        int32_t l_548 = 9L;
        VECTOR(uint8_t, 4) l_555 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL);
        VECTOR(uint64_t, 16) l_586 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x9ECC573E843C40F1L), 0x9ECC573E843C40F1L), 0x9ECC573E843C40F1L, 0UL, 0x9ECC573E843C40F1L, (VECTOR(uint64_t, 2))(0UL, 0x9ECC573E843C40F1L), (VECTOR(uint64_t, 2))(0UL, 0x9ECC573E843C40F1L), 0UL, 0x9ECC573E843C40F1L, 0UL, 0x9ECC573E843C40F1L);
        int i, j, k;
        --p_1277->g_448;
        (*l_447) |= (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 8))(0x1CF3L, ((VECTOR(int16_t, 4))(l_453.s7222)), ((VECTOR(int16_t, 2))(l_454.sfd)), (-5L))).s0, ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(p_1277->g_455.xyxxxxxyxyxyyxxx)).lo, ((VECTOR(int16_t, 16))(p_1277->g_456.s3654435241547355)).lo))).s0));
        if ((safe_mul_func_int8_t_s_s(((((+p_107) < ((safe_add_func_uint16_t_u_u(1UL, FAKE_DIVERGE(p_1277->group_0_offset, get_group_id(0), 10))) >= GROUP_DIVERGE(0, 1))) ^ (-1L)) <= p_1277->g_274), (l_461 | l_454.s7))))
        { /* block id: 205 */
            int32_t *l_463 = &l_445;
            int32_t *l_465 = (void*)0;
            int32_t *l_466 = &p_1277->g_41;
            int8_t **l_478 = &p_1277->g_319;
            (*l_447) &= (l_462 == &p_1277->g_318);
            l_464 = l_463;
            (*l_466) |= ((*l_463) = ((*l_447) = 1L));
            (*l_464) = (safe_mul_func_uint8_t_u_u(((((safe_add_func_uint8_t_u_u((*l_464), (safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((*l_466) = ((*l_466) > ((p_1277->g_142.s5 |= (((p_1277->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1277->tid, 155))] |= (((((safe_add_func_uint32_t_u_u((((*l_478) = l_477[1]) == l_479), (safe_mod_func_uint16_t_u_u(((((safe_mul_func_uint16_t_u_u((&p_1277->g_180 != &p_1277->g_180), (0x1E9FL | 0x1B93L))) == ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_107, 0x2CL, 1L, 0x1BL)), ((VECTOR(int8_t, 4))((-8L))))).s4771000006365175)).s9) & 9L) , (*l_447)), (*p_1277->g_419))))) , (*l_464)) , (*l_447)) >= p_106) < p_107)) & 2UL) >= p_1277->g_455.x)) != p_107))) != p_106), (-1L))), GROUP_DIVERGE(1, 1))))) , GROUP_DIVERGE(1, 1)) , p_105) == (void*)0), (*l_464)));
        }
        else
        { /* block id: 216 */
            VECTOR(int8_t, 16) l_492 = (VECTOR(int8_t, 16))(0x13L, (VECTOR(int8_t, 4))(0x13L, (VECTOR(int8_t, 2))(0x13L, 0x6BL), 0x6BL), 0x6BL, 0x13L, 0x6BL, (VECTOR(int8_t, 2))(0x13L, 0x6BL), (VECTOR(int8_t, 2))(0x13L, 0x6BL), 0x13L, 0x6BL, 0x13L, 0x6BL);
            VECTOR(uint8_t, 8) l_496 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x2EL), 0x2EL), 0x2EL, 255UL, 0x2EL);
            uint8_t *l_502 = (void*)0;
            uint8_t *l_503 = (void*)0;
            uint8_t *l_504 = (void*)0;
            int16_t *l_506 = &p_1277->g_230;
            uint16_t *l_507 = &p_1277->g_83;
            uint8_t **l_525 = &l_504;
            int8_t ****l_527 = &l_462;
            int8_t *****l_526[10] = {(void*)0,(void*)0,&l_527,(void*)0,(void*)0,(void*)0,(void*)0,&l_527,(void*)0,(void*)0};
            int8_t ******l_528 = (void*)0;
            int8_t ******l_529 = &l_526[3];
            int32_t l_530 = 0x341E3E11L;
            uint32_t *l_535 = &p_1277->g_348;
            int16_t **l_554[1][2][1];
            VECTOR(uint8_t, 16) l_557 = (VECTOR(uint8_t, 16))(0xDFL, (VECTOR(uint8_t, 4))(0xDFL, (VECTOR(uint8_t, 2))(0xDFL, 8UL), 8UL), 8UL, 0xDFL, 8UL, (VECTOR(uint8_t, 2))(0xDFL, 8UL), (VECTOR(uint8_t, 2))(0xDFL, 8UL), 0xDFL, 8UL, 0xDFL, 8UL);
            VECTOR(uint64_t, 16) l_584 = (VECTOR(uint64_t, 16))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x3AB2160701837F34L), 0x3AB2160701837F34L), 0x3AB2160701837F34L, 18446744073709551609UL, 0x3AB2160701837F34L, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x3AB2160701837F34L), (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x3AB2160701837F34L), 18446744073709551609UL, 0x3AB2160701837F34L, 18446744073709551609UL, 0x3AB2160701837F34L);
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_554[i][j][k] = &p_1277->g_419;
                }
            }
            atomic_sub(&p_1277->l_atomic_reduction[0], ((safe_div_func_int8_t_s_s(((*l_447) = (((*l_507) &= (((((*l_506) ^= (safe_mod_func_uint8_t_u_u(((**p_1277->g_418) != ((void*)0 != l_488)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 8))(l_489.sd838d84c)).s46, ((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 4))(0UL, ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(0UL, 255UL))))), 0x3BL)).lo, ((VECTOR(uint8_t, 2))(1UL, 0x47L))))).yxxxyyxyyyxxxxyy)).even)).s44)).xyyyxxyy, ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_490.s55d8)).zzyyyzzy)).hi)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 2))(0x58L, 1UL)).yyxyyyyyyxyxyxyy, ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(p_1277->g_491.s3151524037276740)).hi)).s1317216573676760)).s7324, ((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 4))(l_492.s706a)).lo))).yyyx))).hi, ((VECTOR(uint8_t, 16))(p_1277->g_493.yyxyxyxxyyyxxyyx)).s3b, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 16))(l_494.wwwwzzxyzwwxzxzy)).s35a4, ((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_1277->g_495.s37)), 0xBFL, 255UL)), ((VECTOR(uint8_t, 8))(l_496.s30524643)).odd)))))).even)), 0x35L, 0x0EL)).even))))), (uint8_t)((GROUP_DIVERGE(0, 1) & ((void*)0 != p_105)) < (5L || l_492.s9))))).xxyx, ((VECTOR(uint8_t, 16))(0xCFL, 255UL, ((VECTOR(uint8_t, 8))(252UL, 0xB3L, ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(l_497.xyyxyxxx)).hi, ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_498.s71)), (*l_464), 0xEDL, ((VECTOR(uint8_t, 2))(0xF9L, 0xF4L)), ((VECTOR(uint8_t, 4))(p_1277->g_499.zwyz)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(246UL, (safe_sub_func_uint8_t_u_u((p_1277->g_499.y = (1L > 0x66L)), l_505)), 255UL, 0x6DL)))), 0x58L, 0xCAL)), ((VECTOR(uint8_t, 16))(0UL)), ((VECTOR(uint8_t, 16))(0x11L))))).s14, ((VECTOR(uint8_t, 2))(0x65L)), ((VECTOR(uint8_t, 2))(7UL))))).xyxx))).yywwxxyz)).s70, ((VECTOR(uint8_t, 2))(0x14L))))), ((VECTOR(uint8_t, 4))(0x24L)))), ((VECTOR(uint8_t, 4))(253UL)), 3UL, 0x9CL)).s6670, ((VECTOR(uint8_t, 4))(5UL))))).wyxwwzxxzywyyxxz, ((VECTOR(uint8_t, 16))(1UL))))))).sc1dd))).zywxyyxy))).s16))))).hi))) ^ 0x6FF2L) & 1UL) | p_107)) < 0xAB77L)), p_107)) <= 3L));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1277->v_collective += p_1277->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if ((0x0329L < (l_508[5][0][4] == ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((p_1277->g_434 , (((safe_sub_func_int16_t_s_s((*l_464), (safe_rshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((((*l_535) = (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((((*l_525) = &p_107) == &p_107), 1)), ((l_530 ^= ((*l_507) = (((*l_529) = l_526[3]) != &l_527))) && ((*p_1277->g_419) = (((VECTOR(int64_t, 2))(0x47221CAEAEEC1B9CL, (-1L))).odd || (~(safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((*l_447), p_106)), 0x74L)))))))), p_106))) , 0x8F087F504C7E5654L) , 0x58L), p_107)) == p_1277->g_493.y), 6)))) != 0x5C7A944FE7D2C9E0L) != (*l_447))), 13)), l_492.s9)) , (void*)0))))
            { /* block id: 228 */
                int32_t l_540 = 0L;
                int32_t *l_541 = &p_1277->g_41;
                int32_t *l_542 = (void*)0;
                int32_t *l_543 = &l_530;
                int32_t *l_544 = (void*)0;
                int32_t *l_545 = &p_1277->g_41;
                int32_t *l_546 = &p_1277->g_41;
                int32_t *l_547[7] = {&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445};
                int i;
                for (p_1277->g_351 = 0; (p_1277->g_351 == 22); p_1277->g_351 = safe_add_func_int16_t_s_s(p_1277->g_351, 3))
                { /* block id: 231 */
                    (*p_1277->g_124) = (*p_1277->g_124);
                    for (p_1277->g_150 = 0; (p_1277->g_150 != (-26)); p_1277->g_150 = safe_sub_func_uint8_t_u_u(p_1277->g_150, 3))
                    { /* block id: 235 */
                        (*l_464) &= l_540;
                    }
                }
                (*p_1277->g_124) = &l_530;
                p_1277->g_549++;
                (**p_1277->g_124) &= (safe_mul_func_int8_t_s_s((((*l_464) < ((l_554[0][0][0] = &p_1277->g_419) == &p_1277->g_158)) >= p_107), ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 8))((*l_447), 0x2AL, 247UL, 255UL, ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 4))((!(*l_447)), 0UL, 0xA0L, 251UL)).hi, ((VECTOR(uint8_t, 2))(l_555.xw))))), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1277->g_556.xywyxyyx)), ((VECTOR(uint8_t, 4))(l_557.s1be2)), (safe_lshift_func_uint16_t_u_u(((FAKE_DIVERGE(p_1277->local_0_offset, get_local_id(0), 10) , p_107) , (safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((*l_464), 15)), ((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_564.s04)).xyyxxyxyxxxyyyxy)).s6f)).xxxx, ((VECTOR(uint32_t, 16))(p_1277->g_433.s9, 0x83BB6342L, ((VECTOR(uint32_t, 4))(0xF6AF04A2L)), 4294967294UL, p_107, ((VECTOR(uint32_t, 8))(0x7A553A90L)))).s32ea))).yxxwxzzxxzzyzyyw)).sa , 0x6C50L) <= p_107)))), p_1277->g_493.y)), ((VECTOR(uint8_t, 2))(251UL)), 255UL)).sa1))), 247UL, 249UL)).s6641200230745213, ((VECTOR(uint8_t, 16))(253UL)), ((VECTOR(uint8_t, 16))(0x89L))))).s6a, (uint8_t)(*l_447)))).odd));
            }
            else
            { /* block id: 243 */
                uint32_t l_587 = 0xBBFDEA44L;
                int32_t *l_588 = &l_548;
                (*l_588) = (((((**p_1277->g_418) ^= (l_530 = (((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(p_1277->g_569.xxyy)).y, (safe_rshift_func_int8_t_s_u(0x6FL, 5)))), ((((safe_add_func_uint32_t_u_u(((((++p_1277->g_549) , ((*l_447) &= 1L)) != ((safe_add_func_uint32_t_u_u(p_1277->g_493.x, p_1277->g_433.s0)) , (safe_sub_func_int16_t_s_s(0x48AFL, (safe_sub_func_uint8_t_u_u((p_1277->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1277->tid, 155))] | ((((**l_525) = p_107) || ((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 2))(4294967295UL, 1UL)).yxyyyxxxxyyxyxyx, (uint32_t)((((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_584.sc51b)), ((VECTOR(uint64_t, 8))(0xB7900A20FAC9713AL, ((VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551609UL)), ((VECTOR(uint64_t, 2))(l_585.wz)), 3UL, 1UL, 0x570345AFA317B427L)), ((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 2))(l_586.s10)).yyxy, ((VECTOR(uint64_t, 16))(GROUP_DIVERGE(0, 1), 18446744073709551615UL, p_107, 0x0B5550CDC82D792DL, 0UL, 6UL, 6UL, ((VECTOR(uint64_t, 2))(0xCD4E9BF80914F5AEL)), 0UL, ((VECTOR(uint64_t, 4))(0x29214E6C6F63FB04L)), 3UL, 0xDAD43068E441F608L)).s0af7, ((VECTOR(uint64_t, 4))(0xCBE740325155F416L))))))).s41d2, ((VECTOR(uint64_t, 4))(18446744073709551612UL))))).x >= 1L) , 0x4958400CL)))).s7989, (uint32_t)0xC03C98EFL))).yzxzzzywyzzxyxwz)).s74)).odd != p_1277->g_556.x) & l_587)) > p_106)), 0L)))))) && p_1277->g_405.z), 4294967295UL)) & 1UL) > 18446744073709551615UL) != l_587))) == l_492.s8) ^ p_1277->g_180))) , l_557.sa) , p_106) || p_1277->g_456.s3);
                return p_1277->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1277->tid, 155))];
            }
        }
        if ((atomic_inc(&p_1277->l_atomic_input[30]) == 4))
        { /* block id: 254 */
            uint32_t l_589 = 0x53F8E417L;
            int32_t l_593 = 0x7D39D4FFL;
            int32_t *l_592 = &l_593;
            int32_t *l_594 = &l_593;
            ++l_589;
            l_594 = l_592;
            unsigned int result = 0;
            result += l_589;
            result += l_593;
            atomic_add(&p_1277->l_special_values[30], result);
        }
        else
        { /* block id: 257 */
            (1 + 1);
        }
    }
    else
    { /* block id: 260 */
        uint8_t *l_612 = (void*)0;
        VECTOR(uint16_t, 8) l_615 = (VECTOR(uint16_t, 8))(0xA100L, (VECTOR(uint16_t, 4))(0xA100L, (VECTOR(uint16_t, 2))(0xA100L, 7UL), 7UL), 7UL, 0xA100L, 7UL);
        int16_t *l_616 = (void*)0;
        int32_t *l_617[3][2] = {{&p_1277->g_618,&p_1277->g_618},{&p_1277->g_618,&p_1277->g_618},{&p_1277->g_618,&p_1277->g_618}};
        int32_t l_619 = (-1L);
        int64_t *l_620[5][8] = {{&p_1277->g_178,(void*)0,&p_1277->g_178,(void*)0,&p_1277->g_178,&p_1277->g_178,(void*)0,&p_1277->g_178},{&p_1277->g_178,(void*)0,&p_1277->g_178,(void*)0,&p_1277->g_178,&p_1277->g_178,(void*)0,&p_1277->g_178},{&p_1277->g_178,(void*)0,&p_1277->g_178,(void*)0,&p_1277->g_178,&p_1277->g_178,(void*)0,&p_1277->g_178},{&p_1277->g_178,(void*)0,&p_1277->g_178,(void*)0,&p_1277->g_178,&p_1277->g_178,(void*)0,&p_1277->g_178},{&p_1277->g_178,(void*)0,&p_1277->g_178,(void*)0,&p_1277->g_178,&p_1277->g_178,(void*)0,&p_1277->g_178}};
        VECTOR(int8_t, 16) l_666 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x7BL), 0x7BL), 0x7BL, (-1L), 0x7BL, (VECTOR(int8_t, 2))((-1L), 0x7BL), (VECTOR(int8_t, 2))((-1L), 0x7BL), (-1L), 0x7BL, (-1L), 0x7BL);
        int8_t l_678 = 1L;
        uint32_t *l_696 = (void*)0;
        uint64_t *l_703 = (void*)0;
        uint64_t *l_704 = &p_1277->g_274;
        int8_t ****l_706 = &p_1277->g_317;
        int8_t *****l_705 = &l_706;
        int32_t l_707 = 0x2D3F9473L;
        VECTOR(int32_t, 2) l_735 = (VECTOR(int32_t, 2))(0x53534AEBL, 0x6B909D2FL);
        VECTOR(int32_t, 8) l_760 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x6D94CCF5L), 0x6D94CCF5L), 0x6D94CCF5L, (-5L), 0x6D94CCF5L);
        uint64_t l_778 = 0xFE305DFF52828227L;
        VECTOR(uint32_t, 8) l_781 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 5UL), 5UL), 5UL, 0UL, 5UL);
        VECTOR(int8_t, 4) l_792 = (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0x27L), 0x27L);
        VECTOR(int8_t, 2) l_805 = (VECTOR(int8_t, 2))(3L, 0x54L);
        VECTOR(uint8_t, 2) l_806 = (VECTOR(uint8_t, 2))(0xF8L, 0x87L);
        uint16_t l_820 = 1UL;
        uint32_t **l_903 = (void*)0;
        int32_t *l_923 = &p_1277->g_179;
        int32_t **l_922 = &l_923;
        VECTOR(uint64_t, 2) l_959 = (VECTOR(uint64_t, 2))(1UL, 0UL);
        int32_t l_985 = 0L;
        VECTOR(uint64_t, 2) l_986 = (VECTOR(uint64_t, 2))(0x7BBF5D919DC979FEL, 1UL);
        VECTOR(uint32_t, 16) l_987 = (VECTOR(uint32_t, 16))(0xE887A62EL, (VECTOR(uint32_t, 4))(0xE887A62EL, (VECTOR(uint32_t, 2))(0xE887A62EL, 1UL), 1UL), 1UL, 0xE887A62EL, 1UL, (VECTOR(uint32_t, 2))(0xE887A62EL, 1UL), (VECTOR(uint32_t, 2))(0xE887A62EL, 1UL), 0xE887A62EL, 1UL, 0xE887A62EL, 1UL);
        uint16_t *l_1016[7][7] = {{(void*)0,&p_1277->g_434,(void*)0,(void*)0,&p_1277->g_434,(void*)0,(void*)0},{(void*)0,&p_1277->g_434,(void*)0,(void*)0,&p_1277->g_434,(void*)0,(void*)0},{(void*)0,&p_1277->g_434,(void*)0,(void*)0,&p_1277->g_434,(void*)0,(void*)0},{(void*)0,&p_1277->g_434,(void*)0,(void*)0,&p_1277->g_434,(void*)0,(void*)0},{(void*)0,&p_1277->g_434,(void*)0,(void*)0,&p_1277->g_434,(void*)0,(void*)0},{(void*)0,&p_1277->g_434,(void*)0,(void*)0,&p_1277->g_434,(void*)0,(void*)0},{(void*)0,&p_1277->g_434,(void*)0,(void*)0,&p_1277->g_434,(void*)0,(void*)0}};
        int i, j;
        if (((safe_add_func_uint64_t_u_u(1UL, (l_445 ^= (((VECTOR(int64_t, 2))(l_597.s01)).even == (((*l_464) = ((safe_div_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), (safe_add_func_int32_t_s_s(((safe_div_func_int8_t_s_s(0x64L, ((l_619 = (safe_mul_func_int8_t_s_s(((*l_479) = 0L), (((safe_mod_func_uint8_t_u_u((~(safe_mul_func_uint8_t_u_u(p_106, (*l_464)))), (safe_rshift_func_uint8_t_u_s((p_1277->g_491.s4++), 2)))) <= (((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x9CL, 250UL)).xyxx)).w != (*l_464)) != p_1277->g_27) >= (((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_615.s17753017)).even)).z ^ ((l_615.s0 ^ (&l_442 != l_616)) > l_615.s0)) , p_1277->g_329[0][5][3]) < l_615.s4))) || 0L)))) , p_107))) || 7UL), p_107)))) >= l_615.s2)) || 0x3D44C5EDL))))) == p_1277->g_493.x))
        { /* block id: 266 */
            int16_t **l_629[4][1] = {{&p_1277->g_419},{&p_1277->g_419},{&p_1277->g_419},{&p_1277->g_419}};
            int32_t *l_643 = &l_445;
            int8_t ****l_655 = &p_1277->g_317;
            int8_t *****l_654 = &l_655;
            VECTOR(int8_t, 4) l_679 = (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, (-1L)), (-1L));
            uint32_t *l_681[6][9][4] = {{{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348}},{{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348}},{{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348}},{{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348}},{{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348}},{{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348},{&p_1277->g_348,&p_1277->g_348,&p_1277->g_348,&p_1277->g_348}}};
            uint32_t **l_680 = &l_681[3][0][2];
            uint64_t *l_682 = &p_1277->g_274;
            int32_t *l_683 = &l_619;
            int i, j, k;
            for (p_1277->g_177 = (-17); (p_1277->g_177 == 24); p_1277->g_177 = safe_add_func_uint16_t_u_u(p_1277->g_177, 3))
            { /* block id: 269 */
                int16_t l_638 = (-1L);
                int32_t *l_642 = &l_445;
                for (p_1277->g_352 = 0; (p_1277->g_352 <= (-6)); p_1277->g_352 = safe_sub_func_int16_t_s_s(p_1277->g_352, 3))
                { /* block id: 272 */
                    uint32_t l_636 = 1UL;
                    int32_t *l_637 = &l_445;
                    (*l_637) = (safe_div_func_int16_t_s_s(((safe_add_func_int16_t_s_s((((l_629[1][0] != &p_1277->g_158) && ((((safe_div_func_uint8_t_u_u(0xABL, 8UL)) & (safe_mod_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (-2L)))) & 0x568861B0L) <= (safe_mod_func_int64_t_s_s(p_1277->g_433.sa, ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 4))((-4L), 0x7CA60822L, 0x5724B534L, 0x18362C78L)).xywxyxxz, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(5UL, 0UL)), 0xDAB16DEDL, 0x5F1F3E3CL)).xxzyyzxw))))).s0)))) || l_636), (p_106 && (*l_464)))) & 0x502F10B9L), p_1277->g_75));
                    if (l_638)
                        continue;
                }
                (*l_464) |= ((VECTOR(int32_t, 16))(p_1277->g_639.xxyxxyyyyxxyyxyy)).sa;
                (*l_642) |= ((*l_464) ^= (safe_lshift_func_int16_t_s_u((**p_1277->g_418), 4)));
            }
            (*p_1277->g_124) = (*p_1277->g_124);
            l_643 = (*p_1277->g_124);
            (*l_683) ^= (safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((+(*p_1277->g_419)), p_1277->g_455.x)), (((((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u((l_654 != p_1277->g_656), (safe_lshift_func_uint8_t_u_s(((((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(l_666.s8ae5)).ywzzxxyx, ((VECTOR(int8_t, 8))((safe_rshift_func_uint8_t_u_u((((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 2))(p_1277->g_669.sf5)).yyxyyyxx))).s0076144000564036)))).s47)).yxxyxyyyxyxyyyxy)).sf < (p_1277->g_178 = (p_1277->g_433.s2 = (safe_div_func_int32_t_s_s(((*l_464) = (((*l_464) < (safe_sub_func_uint64_t_u_u(0xBF70BDF2AF7ED811L, (safe_add_func_uint16_t_u_u((GROUP_DIVERGE(1, 1) != ((safe_sub_func_int8_t_s_s(l_678, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_679.zywy)))).zzxzyywy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x78L, (-10L))))).xyxx)).wxzxwzzz))))).s6)) != ((*l_682) |= (((*l_680) = l_464) != l_617[2][1])))), p_107))))) & l_615.s1)), p_1277->g_179))))) , p_106) ^ p_107), 3)), 0x03L, ((VECTOR(int8_t, 2))(9L)), 1L, ((VECTOR(int8_t, 2))(0x16L)), 0x0BL))))).s4 & p_107) > p_107), (*p_1277->g_319))))) , l_464) != (void*)0), p_107)), 5L)) != p_1277->g_569.y) || (**p_1277->g_418)) == l_666.s6) | p_1277->g_569.x)));
        }
        else
        { /* block id: 288 */
            int32_t *l_686 = &l_445;
            (*l_686) &= ((*l_464) |= (safe_rshift_func_uint8_t_u_s(255UL, 0)));
            return p_1277->g_351;
        }
        if ((atomic_inc(&p_1277->l_atomic_input[19]) == 7))
        { /* block id: 294 */
            uint32_t l_687 = 0xD54EEFEBL;
            l_687 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x63D1DC20L, (-1L))))).lo;
            unsigned int result = 0;
            result += l_687;
            atomic_add(&p_1277->l_special_values[19], result);
        }
        else
        { /* block id: 296 */
            (1 + 1);
        }
        if ((l_707 = (((~0UL) ^ (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(255UL, ((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((*l_464), (p_1277->g_329[0][3][5] = (safe_add_func_uint32_t_u_u((p_1277->g_329[0][4][2] || p_107), ((*p_1277->g_319) < (*l_464))))))), 5)) & ((((((safe_div_func_uint64_t_u_u(((((l_619 = l_619) | ((*l_704) = ((((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(l_699.s48)), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(1L, (-1L))), ((VECTOR(int32_t, 4))(l_700.se4d6)).lo)))))).hi , ((void*)0 != l_701)) < 0UL))) , &p_1277->g_657) != l_705), p_107)) > (-2L)) , p_106) ^ (*l_464)) > 0x3973L) == 0L)), 1UL, 0xE3L, 0x77L, (*l_464), 0x04L, 0x93L)).s7, p_107))) & FAKE_DIVERGE(p_1277->global_1_offset, get_global_id(1), 10))))
        { /* block id: 303 */
            uint8_t l_708 = 4UL;
            uint16_t *l_715 = &p_1277->g_83;
            uint32_t *l_728 = &p_1277->g_448;
            int8_t l_742[6][8] = {{0x27L,(-1L),(-1L),0x27L,3L,0x77L,0x39L,(-1L)},{0x27L,(-1L),(-1L),0x27L,3L,0x77L,0x39L,(-1L)},{0x27L,(-1L),(-1L),0x27L,3L,0x77L,0x39L,(-1L)},{0x27L,(-1L),(-1L),0x27L,3L,0x77L,0x39L,(-1L)},{0x27L,(-1L),(-1L),0x27L,3L,0x77L,0x39L,(-1L)},{0x27L,(-1L),(-1L),0x27L,3L,0x77L,0x39L,(-1L)}};
            uint32_t l_743 = 0x0D4CBF25L;
            VECTOR(uint32_t, 2) l_757 = (VECTOR(uint32_t, 2))(4294967295UL, 0xB9487985L);
            int32_t *l_774[6][4] = {{(void*)0,&l_619,(void*)0,(void*)0},{(void*)0,&l_619,(void*)0,(void*)0},{(void*)0,&l_619,(void*)0,(void*)0},{(void*)0,&l_619,(void*)0,(void*)0},{(void*)0,&l_619,(void*)0,(void*)0},{(void*)0,&l_619,(void*)0,(void*)0}};
            VECTOR(uint8_t, 2) l_782 = (VECTOR(uint8_t, 2))(0UL, 0x45L);
            VECTOR(int32_t, 16) l_797 = (VECTOR(int32_t, 16))(0x69B358C5L, (VECTOR(int32_t, 4))(0x69B358C5L, (VECTOR(int32_t, 2))(0x69B358C5L, 0x69BBF2F9L), 0x69BBF2F9L), 0x69BBF2F9L, 0x69B358C5L, 0x69BBF2F9L, (VECTOR(int32_t, 2))(0x69B358C5L, 0x69BBF2F9L), (VECTOR(int32_t, 2))(0x69B358C5L, 0x69BBF2F9L), 0x69B358C5L, 0x69BBF2F9L, 0x69B358C5L, 0x69BBF2F9L);
            uint8_t *l_817 = (void*)0;
            uint8_t *l_818 = (void*)0;
            int32_t *l_881 = &p_1277->g_41;
            VECTOR(uint8_t, 4) l_891 = (VECTOR(uint8_t, 4))(0x4CL, (VECTOR(uint8_t, 2))(0x4CL, 3UL), 3UL);
            uint32_t **l_902 = &l_702;
            VECTOR(int32_t, 8) l_905 = (VECTOR(int32_t, 8))(0x45AFFC0BL, (VECTOR(int32_t, 4))(0x45AFFC0BL, (VECTOR(int32_t, 2))(0x45AFFC0BL, 1L), 1L), 1L, 0x45AFFC0BL, 1L);
            uint16_t l_936 = 0x0E69L;
            VECTOR(int16_t, 16) l_978 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int16_t, 2))(0L, 0L), (VECTOR(int16_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
            uint32_t *l_979 = (void*)0;
            VECTOR(uint32_t, 16) l_988 = (VECTOR(uint32_t, 16))(0xE9B95BDEL, (VECTOR(uint32_t, 4))(0xE9B95BDEL, (VECTOR(uint32_t, 2))(0xE9B95BDEL, 0x4CBA9C82L), 0x4CBA9C82L), 0x4CBA9C82L, 0xE9B95BDEL, 0x4CBA9C82L, (VECTOR(uint32_t, 2))(0xE9B95BDEL, 0x4CBA9C82L), (VECTOR(uint32_t, 2))(0xE9B95BDEL, 0x4CBA9C82L), 0xE9B95BDEL, 0x4CBA9C82L, 0xE9B95BDEL, 0x4CBA9C82L);
            VECTOR(uint64_t, 4) l_989 = (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 9UL), 9UL);
            int i, j;
            if ((FAKE_DIVERGE(p_1277->global_0_offset, get_global_id(0), 10) && ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))((l_708 = p_1277->g_274), ((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 2))(p_1277->g_709.s50)).yxxxyxyxyyyyxyyy, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_1277->g_27, ((VECTOR(uint32_t, 2))(1UL, 1UL)), 8UL)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_710.scd911223)).s55)).yyyyxyyy)))).lo)))), 4294967295UL, ((safe_unary_minus_func_int16_t_s((&p_1277->g_67 != (((VECTOR(int64_t, 16))(0x59880A4EF97E560AL, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))((((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(p_1277->g_712.sfdca)))), (uint32_t)0x5B455889L))), ((safe_rshift_func_uint16_t_u_s(((*l_715) &= 0x2208L), 11)) , (safe_sub_func_uint64_t_u_u((l_615.s2 <= ((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 8))(7L, ((VECTOR(int16_t, 4))(p_1277->g_720.yxxx)), ((VECTOR(int16_t, 2))(0x1907L, 4L)), 0L)).s7063327354674543, ((VECTOR(int16_t, 8))((p_1277->g_348 >= l_615.s2), ((l_721 > l_707) , p_107), 0x4778L, 1L, 0x3020L, 0x4A43L, (-1L), (-1L))).s2255733731525700))).s2d8a, ((VECTOR(int16_t, 4))((-8L)))))).yxwwwxwx)).even)).xwxxxywzxxywywwx, ((VECTOR(int16_t, 16))(0x2D23L))))).s7, (*p_1277->g_419))) >= p_106)), p_107))), 0xF815CAE4L, 0xD5BB77A2L, 1UL)).s4636207772773752))))).sa1, ((VECTOR(uint32_t, 2))(4294967295UL))))).even != l_666.s1), 0x32A06D8455F49D88L, 0x2A464F6644C75791L, 0x0747D28E3AE450B2L, 1L, l_708, p_106, l_708, ((VECTOR(int64_t, 8))(0x53FBD631735D2C42L)))).hi)), ((VECTOR(int64_t, 4))(1L)), l_707, (-1L), 0x7762804F1F20E9CBL)).s7 , (void*)0)))) <= l_615.s7), 4294967291UL, 4294967292UL, 1UL, ((VECTOR(uint32_t, 2))(0x109A723AL)), 8UL))))).s9, 0xE518B46AL, 0xA64A1A8EL, 4294967286UL)).lo)).xxxyyyyy, (uint32_t)1UL))), ((VECTOR(uint32_t, 4))(0x4D769003L)), 0xCF4AE9F0L, 4294967293UL, 1UL)))).sa))
            { /* block id: 306 */
                atomic_and(&p_1277->g_atomic_reduction[get_linear_group_id()], l_615.s6);
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1277->v_collective += p_1277->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            else
            { /* block id: 308 */
                uint32_t l_731 = 0x05B66E28L;
                int32_t l_732[6] = {0x10D3517CL,(-10L),0x10D3517CL,0x10D3517CL,(-10L),0x10D3517CL};
                VECTOR(int32_t, 4) l_753 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 8L), 8L);
                VECTOR(int16_t, 8) l_758 = (VECTOR(int16_t, 8))(0x2B23L, (VECTOR(int16_t, 4))(0x2B23L, (VECTOR(int16_t, 2))(0x2B23L, 3L), 3L), 3L, 0x2B23L, 3L);
                int32_t l_775 = 4L;
                int16_t l_777 = 0x3777L;
                int i;
                for (p_1277->g_178 = 28; (p_1277->g_178 < 4); p_1277->g_178 = safe_sub_func_uint64_t_u_u(p_1277->g_178, 8))
                { /* block id: 311 */
                    uint8_t *l_727[1];
                    VECTOR(int32_t, 4) l_733 = (VECTOR(int32_t, 4))(0x5353FE9DL, (VECTOR(int32_t, 2))(0x5353FE9DL, 0x58BD0458L), 0x58BD0458L);
                    int32_t l_747 = 6L;
                    int64_t l_761 = 0x5D1449D78F1EAFB1L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_727[i] = &p_1277->g_180;
                    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_1277->g_724.s12)).xyxyyyxx)).s1021553202114634)).s88c4)), p_106, 9L, (-8L))).s6435162456322046, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((((safe_lshift_func_int16_t_s_u(((p_1277->g_499.y ^= p_1277->g_495.s4) || ((*l_479) = 0L)), 9)) >= (((VECTOR(int8_t, 4))(0x10L, (*p_1277->g_319), 1L, 0x5AL)).z , ((p_1277->g_274 , l_702) != l_728))) , (((l_732[1] = ((safe_mul_func_int16_t_s_s(0x6551L, (0xCCFA4F1D5326D52BL > 1L))) & l_731)) ^ p_106) < p_107)), ((VECTOR(int32_t, 2))(0x240A8AC1L)), 1L)).yzzwywwwyzxwwyzy))))).s1dee)).x)
                    { /* block id: 315 */
                        uint16_t l_746 = 1UL;
                        l_747 |= ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_733.wywyzxzz)).s2365462045266605)).s6f, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_1277->g_734.xy)), ((VECTOR(int32_t, 2))(0L, 1L)), ((VECTOR(int32_t, 4))(l_735.xxxy)))).s4342637205414727)).s60)).yyxx, (int32_t)((safe_sub_func_int64_t_s_s(p_107, ((p_1277->g_669.s4 = (safe_add_func_int8_t_s_s(l_733.z, ((p_1277->g_433.s3 , (safe_rshift_func_int16_t_s_u(l_742[4][6], l_743))) , FAKE_DIVERGE(p_1277->global_0_offset, get_global_id(0), 10))))) || (255UL || ((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xD6F1L, 0UL)), 3UL, 0x93B9L)).w <= (safe_sub_func_uint8_t_u_u(l_742[4][3], (*p_1277->g_319)))) > (((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(1UL, 65532UL)).yyyx)).hi, (uint16_t)l_732[1], (uint16_t)p_1277->g_709.s3))).odd , p_106)))))) & l_746)))).yxzxwxzx, ((VECTOR(int32_t, 8))(1L)), ((VECTOR(int32_t, 8))((-1L)))))).s55, ((VECTOR(int32_t, 2))((-4L)))))).hi;
                        (*p_1277->g_124) = &l_732[1];
                        (*p_1277->g_124) = &l_707;
                    }
                    else
                    { /* block id: 320 */
                        VECTOR(uint16_t, 4) l_759 = (VECTOR(uint16_t, 4))(0xCF65L, (VECTOR(uint16_t, 2))(0xCF65L, 0x23FFL), 0x23FFL);
                        int32_t *l_762 = &l_707;
                        int i;
                        (*l_762) |= (safe_mod_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(0x12C313636156718FL, ((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((!(l_742[2][2] , ((VECTOR(int32_t, 8))(p_1277->g_752.zzzwzyyw)).s4)), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(l_753.zwwyzyzwxwzxwxzy)).sc6, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x73288010L, 0x337EB9DAL)).yyxx)))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x5D63B70CL, 0L)), 6L, (safe_add_func_uint16_t_u_u(((((void*)0 == &p_1277->g_348) >= l_666.s8) <= ((((*l_464) < (((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(p_1277->g_756.yyxyyyyx)).s33)), ((VECTOR(uint32_t, 4))(l_757.yxxx)).hi, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(abs(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(l_758.s65620716)).hi, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_759.xzwz)).yxzxywxyxxxwwxyz)).sa736))).xwxzxxzx, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(l_760.s5121)).wzzyxxxz)))))))).s5672506015620440))).s2c4e, ((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 16))((GROUP_DIVERGE(1, 1) && (p_1277->g_121 && p_107)), (l_444 != (void*)0), 1UL, 0xFF3943FAL, ((VECTOR(uint32_t, 2))(1UL)), l_760.s6, 4294967292UL, 8UL, l_761, 4294967295UL, ((VECTOR(uint32_t, 4))(4294967295UL)), 4294967295UL)).sc79a, ((VECTOR(uint32_t, 4))(4294967295UL)))))))).even))))).even > 0x7CB414EEL)) , &l_612) != (void*)0)), GROUP_DIVERGE(1, 1))), l_761, 0x776A7CECL, 0x0D07CEAAL, 0x5BABDB50L)).lo))).even))), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x7B865F08L)), 0x243594E7L)))).odd, ((VECTOR(uint32_t, 4))(0xEF03F8CCL))))).z)), p_107));
                        if (p_106)
                            break;
                        if (p_1277->g_329[0][4][5])
                            continue;
                        (*p_1277->g_124) = ((l_733.w && (safe_mod_func_int16_t_s_s(0L, (((*l_464) = (safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((p_1277->g_499.x > ((safe_unary_minus_func_uint16_t_u((l_733.w = p_106))) ^ 1L)), p_1277->g_556.z)), ((safe_mul_func_uint8_t_u_u(((p_107 ^ (((safe_mul_func_uint16_t_u_u(p_1277->g_491.s0, (p_106 >= 1L))) < p_107) > p_107)) & (*l_464)), p_106)) || l_761)))) & p_1277->g_495.s4)))) , l_774[3][2]);
                    }
                }
                l_778++;
            }
            if ((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_781.s4452471667271350)).sc7)).lo , (((VECTOR(uint8_t, 2))(l_782.yy)).odd , (+((l_821 = (((safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((-4L), ((safe_add_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u(((*l_715) = (((((((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(p_1277->g_791.s76014127)).hi, ((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 2))(0x1DL, 0L)).yyyxxxyy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_792.xx)), ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 2))(0x2BL, 7L))))), 8L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_1277->g_793.xy)))).xyyxyxxx)))))), 1L, 0x7CL, 5L)).odd, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(p_1277->g_794.s10)), (int8_t)(l_666.sf < p_1277->g_499.w)))).yyyxxyyyyyyxyyxy)).lo))).even, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x6BL, 0x26L, (safe_add_func_int32_t_s_s(p_106, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_797.sc6d80a09)), 0x30DF0A28L, (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 16))(l_800.yyxxxxyxyyxyyyxy)).s9, (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 16))((((safe_mul_func_int16_t_s_s(0x7290L, ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_805.yx)).yyyxyyxy)).s0375550012351370, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_806.xxyyxyyxxyxyxyxx)).s39da)).xzzzxzxxwzyyxxzw))).s2)) || ((safe_div_func_uint8_t_u_u(p_106, (l_619 = (p_1277->g_491.s4 |= (safe_sub_func_int8_t_s_s(((safe_div_func_int16_t_s_s((&p_1277->g_434 == ((GROUP_DIVERGE(1, 1) && (((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 8))(l_813.s9a7ca750)).even, ((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 2))(3UL, 0x5AD74D1EB11FB0B7L)), ((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 4))((((safe_rshift_func_uint16_t_u_s((l_707 >= (safe_unary_minus_func_int16_t_s((*p_1277->g_419)))), 6)) , 1UL) , p_107), p_107, 0xBF62EBCD1D0F9105L, 0x66683CE7AF26CCC3L)).hi, ((VECTOR(uint64_t, 2))(0UL)))))))).yyxy))).z || 0x0BAAA82850BAE9DAL)) , p_105)), p_106)) ^ p_107), p_106)))))) , 0UL)) | l_792.y), (*l_464), ((VECTOR(uint16_t, 4))(5UL)), ((VECTOR(uint16_t, 8))(0x205CL)), 1UL, 3UL)).s0, l_819)))), (-1L), ((VECTOR(int32_t, 4))((-9L))), (-3L))).sc)), l_615.s3, ((VECTOR(int8_t, 8))(0x4AL)), ((VECTOR(int8_t, 2))(0x72L)), 0x28L, (-1L))))).odd)).lo))).x < l_820) && 0x28L) != p_1277->g_709.s4) < (-3L)) & p_106)), p_1277->g_756.x)) || p_1277->g_190.x), p_107)) || p_106))) >= (**p_1277->g_418)), 0x1EL)) <= l_806.y) , &l_479)) != (**l_706))))))
            { /* block id: 335 */
                uint32_t l_834 = 0x161CD772L;
                int32_t *l_838 = &l_819;
                int32_t l_844 = 0L;
                VECTOR(uint8_t, 8) l_866 = (VECTOR(uint8_t, 8))(0x76L, (VECTOR(uint8_t, 4))(0x76L, (VECTOR(uint8_t, 2))(0x76L, 0UL), 0UL), 0UL, 0x76L, 0UL);
                int8_t *****l_873 = (void*)0;
                VECTOR(int32_t, 2) l_874 = (VECTOR(int32_t, 2))(0x4804D213L, (-2L));
                int i;
                if ((((void*)0 == &l_445) | ((*l_464) = (p_106 | (p_1277->g_794.s0 & (safe_add_func_int64_t_s_s((((0xC3L < (0xBF341613L > ((void*)0 != &l_819))) <= ((safe_sub_func_int8_t_s_s(((*l_479) ^= (((safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((1UL ^ FAKE_DIVERGE(p_1277->group_2_offset, get_group_id(2), 10)) >= p_107), l_735.y)), 0x30L)) || 0x154DFB0AL) ^ (-3L))), p_107)) || p_107)) > p_106), 18446744073709551612UL)))))))
                { /* block id: 338 */
                    int32_t *l_835 = &l_819;
                    int32_t **l_836 = (void*)0;
                    int32_t **l_837 = &l_835;
                    int16_t ***l_871[8][10][3] = {{{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418}},{{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418}},{{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418}},{{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418}},{{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418}},{{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418}},{{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418}},{{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418},{&p_1277->g_418,&p_1277->g_418,&p_1277->g_418}}};
                    int32_t l_872[5] = {0x5B6E677EL,0x5B6E677EL,0x5B6E677EL,0x5B6E677EL,0x5B6E677EL};
                    int i, j, k;
                    (*l_464) = ((safe_div_func_int64_t_s_s((l_834 &= (safe_rshift_func_uint16_t_u_u(0x3F91L, 8))), ((((*l_837) = l_835) != l_838) , (((VECTOR(uint16_t, 4))((((((void*)0 != l_839) < 0x59L) <= p_1277->g_405.w) , ((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(p_107, ((((0xD7CEA750717B7966L || p_107) == (-5L)) , 0x347AL) | l_844))), 0xB468L)) < p_106)), 6UL, 0x3721L, 6UL)).x ^ GROUP_DIVERGE(0, 1))))) , l_834);
                    for (l_844 = 0; (l_844 == (-17)); l_844--)
                    { /* block id: 344 */
                        return p_107;
                    }
                    (*l_464) = ((safe_div_func_int32_t_s_s(p_107, (++(*l_728)))) < ((safe_add_func_uint64_t_u_u(((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((p_106 ^ (+(safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(p_1277->g_669.sd, (safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((GROUP_DIVERGE(1, 1) , p_106), (((**p_1277->g_418) <= ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 16))(FAKE_DIVERGE(p_1277->local_1_offset, get_local_id(1), 10), ((VECTOR(uint8_t, 4))(p_1277->g_865.xxzx)), 254UL, 0xB3L, ((VECTOR(uint8_t, 2))(l_866.s10)), 0xDAL, p_107, (((safe_lshift_func_uint16_t_u_u(((p_106 != ((safe_mul_func_uint8_t_u_u(((((void*)0 == l_871[2][0][0]) > p_1277->g_433.s6) , p_106), p_106)) <= FAKE_DIVERGE(p_1277->group_0_offset, get_group_id(0), 10))) == l_872[4]), l_872[0])) || 0x178F3AD9C5910CEBL) | l_834), ((VECTOR(uint8_t, 4))(0x34L))))))), ((VECTOR(uint8_t, 16))(255UL)), ((VECTOR(uint8_t, 16))(0x27L))))).hi, ((VECTOR(uint8_t, 8))(255UL))))).lo)).zyyzwxxz)).lo, ((VECTOR(uint16_t, 4))(0xB2BDL))))).w) , 0x13EFL))), 0xBC8CB553L)))), 5)))) , p_107), 0x7EBEL)), l_805.y)) , 0xE5412B5F62F0C26FL), p_1277->g_329[0][4][5])) == p_106));
                }
                else
                { /* block id: 349 */
                    uint32_t l_875 = 2UL;
                    int32_t l_876[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_876[i] = 0L;
                    l_876[1] = ((l_873 == (void*)0) & ((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_874.yy)), (-1L), (-1L))).w >= 0x1C866FD3L) < l_875));
                }
                if ((atomic_inc(&p_1277->l_atomic_input[7]) == 6))
                { /* block id: 353 */
                    int64_t l_877 = 6L;
                    uint32_t l_878 = 0x9BBE2A80L;
                    int32_t l_880 = 0x52711D50L;
                    int32_t *l_879 = &l_880;
                    l_878 &= l_877;
                    l_879 = (void*)0;
                    unsigned int result = 0;
                    result += l_877;
                    result += l_878;
                    result += l_880;
                    atomic_add(&p_1277->l_special_values[7], result);
                }
                else
                { /* block id: 356 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 359 */
                int64_t l_882 = 1L;
                VECTOR(uint16_t, 16) l_888 = (VECTOR(uint16_t, 16))(0x3F6BL, (VECTOR(uint16_t, 4))(0x3F6BL, (VECTOR(uint16_t, 2))(0x3F6BL, 65535UL), 65535UL), 65535UL, 0x3F6BL, 65535UL, (VECTOR(uint16_t, 2))(0x3F6BL, 65535UL), (VECTOR(uint16_t, 2))(0x3F6BL, 65535UL), 0x3F6BL, 65535UL, 0x3F6BL, 65535UL);
                VECTOR(uint8_t, 2) l_889 = (VECTOR(uint8_t, 2))(0xCFL, 0xC5L);
                uint8_t *l_898[3];
                uint32_t *l_912 = (void*)0;
                uint32_t **l_913[2];
                int8_t ******l_916 = &l_705;
                int i;
                for (i = 0; i < 3; i++)
                    l_898[i] = (void*)0;
                for (i = 0; i < 2; i++)
                    l_913[i] = &l_912;
                (*p_1277->g_124) = l_881;
                ++l_883;
                (*l_464) ^= 0x47F80961L;
                atomic_xor(&p_1277->g_atomic_reduction[get_linear_group_id()], (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(l_888.sdb)).xyxx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_889.yyxxxxyyxxyyyyxx)).sda)), 0UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_890.s87)), 0xBFL, 255UL)))).z, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_891.xwzxwwyzxyzzyyyy)).s94f0)), ((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(3UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x4BL, 0x17L)).xyxxxyyx)).lo, (uint8_t)p_106))), ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(253UL, ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))((((*p_1277->g_419) = (((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 8))((p_107 , (((l_916 = ((p_1277->g_348 = ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(0x580E4256L, ((safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((p_1277->g_865.z = (p_1277->g_495.s3 = (*l_464))), 1)), ((VECTOR(uint64_t, 4))(((safe_mod_func_uint32_t_u_u((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_1277->g_901.xyyyxyxy)).s15)).yyxxyyxxyyyxyxxx)).sc == ((l_903 = l_902) != &l_702)), ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(p_1277->g_904.wy)).xxyyxyxxxyyxxyyy, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))(0x044AD634L, ((VECTOR(int32_t, 2))(l_905.s07)), (safe_mul_func_uint8_t_u_u(l_882, ((safe_mod_func_int32_t_s_s(((*l_881) = (safe_lshift_func_int8_t_s_s(((l_914 = l_912) != l_774[1][2]), p_107))), 0xEF688923L)) == p_107))), 0x6F890B8FL, 0x715D6C18L, 0x01746195L, 1L)).even, (int32_t)0x272664FCL, (int32_t)(**p_1277->g_124)))).yzzxxxxzwxwzxyyw))).sd)) , l_760.s0), 1UL, 5UL, 2UL)).x)), p_1277->g_456.s2)) <= 0x22L), 0x39128344L, 0x1EB7499FL)).ywxyxyxw)).s0) , p_1277->g_915)) != &p_1277->g_656) , 0L)), ((VECTOR(int8_t, 2))(0x6CL)), ((VECTOR(int8_t, 4))(0x50L)), 5L)).s3136470633634525, ((VECTOR(int8_t, 16))((-1L))), ((VECTOR(int8_t, 16))(5L))))).s6 || 0x64L)) < p_1277->g_556.z), ((VECTOR(uint8_t, 2))(0xF8L)), 0xE4L)).odd)).xyxxxyyy, ((VECTOR(uint8_t, 8))(0xCAL))))), FAKE_DIVERGE(p_1277->group_0_offset, get_group_id(0), 10), ((VECTOR(uint8_t, 4))(248UL)), 1UL, 1UL)).sb99b, ((VECTOR(uint8_t, 4))(254UL)), ((VECTOR(uint8_t, 4))(248UL))))).hi)), (uint8_t)p_1277->g_756.y))), 0UL, 0x02L)), 2UL, p_107, 0x55L, 0xB9L, 0x91L, 0UL, 247UL)).sd450)).lo))), l_806.y, ((VECTOR(uint8_t, 4))(0xD3L)), 0x70L)).sb0d8, ((VECTOR(uint8_t, 4))(0x9AL))))))).wwzxwyyywxywxxzx)).s046a, ((VECTOR(uint16_t, 4))(0x9B0AL))))).z, p_106)) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1277->v_collective += p_1277->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            (*l_881) = (+p_107);
            if (((VECTOR(int32_t, 4))(p_1277->g_917.s28e3)).w)
            { /* block id: 374 */
                (*l_464) |= (-1L);
                (*l_464) |= (safe_rshift_func_uint16_t_u_s(((0x3AL | ((safe_mod_func_uint64_t_u_u(0x32940AAA9A51F58DL, p_106)) >= ((*l_881) >= p_107))) || p_1277->g_904.w), (l_922 == (void*)0)));
                (*p_1277->g_124) = &l_619;
                atomic_sub(&p_1277->g_atomic_reduction[get_linear_group_id()], ((safe_lshift_func_uint16_t_u_s((--(*l_715)), 2)) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(8L, 0x36508AB7L)).xxyy)).zyzxwyxw)).s4) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1277->v_collective += p_1277->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            else
            { /* block id: 380 */
                VECTOR(int32_t, 8) l_928 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 9L), 9L), 9L, 9L, 9L);
                int32_t l_965 = 0x0B7568EAL;
                int8_t ****l_984 = &p_1277->g_317;
                int i;
                if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_928.s0247)).xxzxyxwxyzwyzxxw)).lo)).s5)
                { /* block id: 381 */
                    int32_t l_931 = 5L;
                    int32_t l_932 = 1L;
                    int32_t l_934 = (-1L);
                    VECTOR(int32_t, 2) l_935 = (VECTOR(int32_t, 2))((-1L), 0x781E8BEAL);
                    int i;
                    for (l_445 = 0; (l_445 == 9); ++l_445)
                    { /* block id: 384 */
                        return p_106;
                    }
                    --l_936;
                    (*p_1277->g_124) = &l_707;
                }
                else
                { /* block id: 389 */
                    VECTOR(int8_t, 16) l_982 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int8_t, 2))(0L, (-1L)), (VECTOR(int8_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
                    int8_t ****l_983[7] = {&p_1277->g_317,&p_1277->g_317,&p_1277->g_317,&p_1277->g_317,&p_1277->g_317,&p_1277->g_317,&p_1277->g_317};
                    int i;
                    if ((atomic_inc(&p_1277->g_atomic_input[66 * get_linear_group_id() + 33]) == 4))
                    { /* block id: 391 */
                        VECTOR(int32_t, 2) l_939 = (VECTOR(int32_t, 2))(1L, 1L);
                        VECTOR(int32_t, 8) l_940 = (VECTOR(int32_t, 8))(0x7D90B01DL, (VECTOR(int32_t, 4))(0x7D90B01DL, (VECTOR(int32_t, 2))(0x7D90B01DL, (-1L)), (-1L)), (-1L), 0x7D90B01DL, (-1L));
                        VECTOR(int32_t, 4) l_941 = (VECTOR(int32_t, 4))(0x17CE9880L, (VECTOR(int32_t, 2))(0x17CE9880L, 0x51EDCA5CL), 0x51EDCA5CL);
                        uint32_t l_942 = 0xA0883877L;
                        uint32_t l_943 = 0x170BD0FDL;
                        int64_t l_944 = 0x7D6E6938A75A8123L;
                        VECTOR(int32_t, 4) l_945 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
                        uint16_t l_946 = 65528UL;
                        int16_t l_947 = 8L;
                        int32_t l_948 = (-1L);
                        uint64_t l_949 = 0x9DC473F4760CB02FL;
                        VECTOR(int32_t, 8) l_950 = (VECTOR(int32_t, 8))(0x71ADFD3DL, (VECTOR(int32_t, 4))(0x71ADFD3DL, (VECTOR(int32_t, 2))(0x71ADFD3DL, 0x4F14A9C2L), 0x4F14A9C2L), 0x4F14A9C2L, 0x71ADFD3DL, 0x4F14A9C2L);
                        VECTOR(int32_t, 4) l_951 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-3L)), (-3L));
                        uint32_t l_952 = 9UL;
                        int8_t l_953 = (-1L);
                        uint16_t l_954[1];
                        uint32_t l_955 = 0UL;
                        uint16_t l_956 = 65531UL;
                        int32_t *l_957 = (void*)0;
                        int32_t *l_958 = (void*)0;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_954[i] = 0x3FABL;
                        l_953 = (l_952 |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(l_939.xyxxyyyxyyyyyyxx)), ((VECTOR(int32_t, 16))(l_940.s3115056213755226))))).sbe, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_941.yyyz)).odd))))), ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))((l_942 , l_943), l_944, 1L, ((VECTOR(int32_t, 4))(l_945.wxzx)), (l_940.s1 |= l_946), l_947, (-9L), (-1L), (l_948 , (((VECTOR(int32_t, 2))(0x5D84583DL, 0x5E339339L)).lo , l_949)), ((VECTOR(int32_t, 2))(0x201A9A40L, 0x19B334C0L)), 0L, (-1L))).s2b87))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_950.s02)).yyxy)), ((VECTOR(int32_t, 4))(l_951.wxyx)), 0x238E8ECFL, 6L)).sed)).odd);
                        l_955 = l_954[0];
                        l_956 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-5L), 0x13B65C54L)).xxyxxxyyyyyyyyxx)).sd;
                        l_958 = l_957;
                        unsigned int result = 0;
                        result += l_939.y;
                        result += l_939.x;
                        result += l_940.s7;
                        result += l_940.s6;
                        result += l_940.s5;
                        result += l_940.s4;
                        result += l_940.s3;
                        result += l_940.s2;
                        result += l_940.s1;
                        result += l_940.s0;
                        result += l_941.w;
                        result += l_941.z;
                        result += l_941.y;
                        result += l_941.x;
                        result += l_942;
                        result += l_943;
                        result += l_944;
                        result += l_945.w;
                        result += l_945.z;
                        result += l_945.y;
                        result += l_945.x;
                        result += l_946;
                        result += l_947;
                        result += l_948;
                        result += l_949;
                        result += l_950.s7;
                        result += l_950.s6;
                        result += l_950.s5;
                        result += l_950.s4;
                        result += l_950.s3;
                        result += l_950.s2;
                        result += l_950.s1;
                        result += l_950.s0;
                        result += l_951.w;
                        result += l_951.z;
                        result += l_951.y;
                        result += l_951.x;
                        result += l_952;
                        result += l_953;
                        int l_954_i0;
                        for (l_954_i0 = 0; l_954_i0 < 1; l_954_i0++) {
                            result += l_954[l_954_i0];
                        }
                        result += l_955;
                        result += l_956;
                        atomic_add(&p_1277->g_special_values[66 * get_linear_group_id() + 33], result);
                    }
                    else
                    { /* block id: 398 */
                        (1 + 1);
                    }
                    p_1277->g_734.x &= (((l_928.s2 = 0x2EDF495DA3AAF8F9L) , ((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_959.xx)), 0x4519DAC153136FD6L, 0x6F964D5BC26DB184L)).w & FAKE_DIVERGE(p_1277->global_1_offset, get_global_id(1), 10)) && ((((*l_728) = (FAKE_DIVERGE(p_1277->group_2_offset, get_group_id(2), 10) >= (((0xC902B6B4L || ((VECTOR(uint32_t, 2))(0xD20E59CCL, 0x955051ECL)).even) , 0x37AAL) , ((void*)0 == &p_1277->g_274)))) == 5UL) < (((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xD4L, 1UL)), (((safe_unary_minus_func_uint64_t_u(p_1277->g_904.w)) < (((l_928.s5 , ((l_928.s5 ^= (safe_mul_func_uint16_t_u_u(65535UL, 0x1C43L))) , (**p_1277->g_418))) ^ (*l_464)) == 0x0092CEEC5BE7C9BEL)) <= p_1277->g_495.s1), ((VECTOR(uint8_t, 2))(0xC6L)), ((VECTOR(uint8_t, 2))(0x41L)), 0UL, 247UL, p_1277->g_456.s4, l_928.s2, ((VECTOR(uint8_t, 2))(0x92L)), 0xEDL, 0x94L, 252UL)).s3d)).lo & 0xA8L) & 0x56L) <= (*l_464))))) >= l_965);
                    (*l_881) &= ((safe_div_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(7UL, (p_106 == (safe_mul_func_int16_t_s_s(((safe_add_func_int64_t_s_s(((&l_821 == (((FAKE_DIVERGE(p_1277->global_2_offset, get_global_id(2), 10) != ((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_978.s3191)).z, 0xC80FL)) >= (p_1277->g_75 , (l_979 != (void*)0)))) | (((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(l_982.s5f9e7d4f)).odd, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))((-1L), 0x4CL, p_107, p_107, p_107, 0x58L, (-7L), ((VECTOR(int8_t, 2))(0x75L)), ((VECTOR(int8_t, 4))(0x30L)), ((VECTOR(int8_t, 2))(0x52L)), 0x76L)).s29f1)).wxyxywyzwxxyxyzz)).sddd3, ((VECTOR(int8_t, 4))(0x21L))))).z, GROUP_DIVERGE(2, 1))) , l_983[5]) == l_984)) , (*l_984))) ^ p_1277->g_230), p_106)) <= 0x5FF0005DL), p_106))))), 255UL)) > l_928.s1);
                }
                (*p_1277->g_124) = &l_445;
                l_985 = (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(0x321AL, 0x66CEL, 0x601FL, (-9L))).yxzzzzzyzzyxwzwy)).sff)))).hi <= (**p_1277->g_418));
                atomic_or(&p_1277->l_atomic_reduction[0], (((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 16))(l_986.yyyyyxyyxxxyyyyy)).se0, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(0x61AD5CCF768D809AL, p_107, ((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 2))(l_987.sb7)).yxyx))).hi, ((VECTOR(uint32_t, 2))(l_988.s8a))))), ((VECTOR(uint64_t, 2))(l_989.yy)), 1UL, 18446744073709551615UL)).s71))))), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 16))((safe_add_func_int32_t_s_s((-2L), ((VECTOR(int32_t, 16))((!((p_106 , ((*p_1277->g_419) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((*l_464), 9)), l_928.s3)), (((p_1277->g_54.x != (safe_lshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(1UL, (safe_lshift_func_int16_t_s_s(p_107, 6)))), p_1277->g_456.s1)), p_1277->g_348))) > 0x1EL) , 0x78F9L))))) != p_1277->g_794.s2)), (*l_464), 0x12BA740DL, p_106, p_106, 8L, 0x5C2A1C73L, 0x6D7B2D4AL, 0x78C23159L, p_106, (**p_1277->g_124), p_107, 0L, p_106, 0x601C8BF7L, 0x41BC01E1L)).sf)), ((VECTOR(uint64_t, 2))(0x0FC4656CD9CB25C9L)), 18446744073709551615UL, ((VECTOR(uint64_t, 8))(0x6C4A150BEE9CE39DL)), ((VECTOR(uint64_t, 4))(0x872C37D4BD910849L)))).s07, ((VECTOR(uint64_t, 2))(0UL)), ((VECTOR(uint64_t, 2))(1UL))))))), p_107, ((VECTOR(uint64_t, 8))(0x91FC865519C1BA18L)), ((VECTOR(uint64_t, 2))(0x6D7DE773B73B5682L)), 0xD141D7EEF5EE48E7L)).sc ^ 0L) ^ p_106) == l_928.s0));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1277->v_collective += p_1277->l_atomic_reduction[0];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
        }
        else
        { /* block id: 412 */
            int32_t l_1006 = (-1L);
            int32_t *l_1007 = (void*)0;
            int32_t *l_1008[5][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
            int i, j;
            l_1006 |= (*l_464);
            l_735.y |= (*l_464);
        }
        l_619 = ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(p_1277->g_1009.sbb4ed266)).s67, ((VECTOR(uint16_t, 2))(p_1277->g_1010.zy))))))), ((VECTOR(int32_t, 2))(l_1011.s64)), ((VECTOR(int32_t, 8))(0x38D50BB2L, p_107, p_106, 0x5517AFBDL, 0x41A87B9FL, ((((VECTOR(int8_t, 16))(l_1012.s7143456176373166)).sb < ((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1277->g_1013.saa604450)).s5017665541210374))))).s6) , (safe_mul_func_int16_t_s_s(l_778, ((*l_464) = 0UL)))), 0x2F84EF0EL, 0L)).s03))).lo;
    }
    l_1017[0] = &p_1277->g_67;
    p_1277->g_1026[6][2][1] &= (((((VECTOR(uint32_t, 2))(l_1020.s13)).hi | (((VECTOR(uint16_t, 16))(p_1277->g_1021.s4ec2c44a9c30cfa7)).sb , (*l_464))) && ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_1022.yyyyxyxy)))).s4) <= (((VECTOR(int16_t, 16))(l_1023.s1137142042607233)).s6 < ((*p_1277->g_419) ^ GROUP_DIVERGE(2, 1))));
    return p_1277->g_276;
}


/* ------------------------------------------ */
/* 
 * reads : p_1277->g_142 p_1277->g_83 p_1277->g_150 p_1277->g_121 p_1277->g_54 p_1277->g_157 p_1277->g_27 p_1277->g_comm_values p_1277->g_125 p_1277->g_124 p_1277->g_75 p_1277->g_180 p_1277->g_199 p_1277->g_177 p_1277->l_comm_values p_1277->g_190 p_1277->g_230 p_1277->g_158 p_1277->g_178 p_1277->g_276 p_1277->g_274 p_1277->g_319 p_1277->g_317 p_1277->g_348 p_1277->g_379 p_1277->g_285 p_1277->g_179 p_1277->g_352 p_1277->g_41 p_1277->g_418 p_1277->g_434
 * writes: p_1277->g_150 p_1277->g_75 p_1277->g_125 p_1277->g_180 p_1277->g_41 p_1277->g_121 p_1277->g_83 p_1277->g_230 p_1277->g_179 p_1277->g_274 p_1277->g_276 p_1277->g_329 p_1277->g_318 p_1277->g_348 p_1277->g_352 p_1277->g_418 p_1277->g_177 p_1277->g_434
 */
uint8_t * func_110(int32_t ** p_111, uint32_t  p_112, uint8_t * p_113, uint16_t * p_114, struct S0 * p_1277)
{ /* block id: 66 */
    VECTOR(int8_t, 2) l_133 = (VECTOR(int8_t, 2))((-1L), 0x6DL);
    VECTOR(int8_t, 4) l_134 = (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0L), 0L);
    VECTOR(int8_t, 2) l_135 = (VECTOR(int8_t, 2))(0x7FL, 0x14L);
    int8_t l_140[6][6][7] = {{{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L}},{{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L}},{{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L}},{{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L}},{{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L}},{{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L},{0L,0L,0L,0x56L,0L,0x56L,0L}}};
    VECTOR(uint16_t, 16) l_141 = (VECTOR(uint16_t, 16))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 65530UL), 65530UL), 65530UL, 65531UL, 65530UL, (VECTOR(uint16_t, 2))(65531UL, 65530UL), (VECTOR(uint16_t, 2))(65531UL, 65530UL), 65531UL, 65530UL, 65531UL, 65530UL);
    uint16_t *l_147 = &p_1277->g_83;
    int8_t *l_148 = (void*)0;
    int8_t *l_149 = &p_1277->g_150;
    int32_t l_151[7][2] = {{6L,0L},{6L,0L},{6L,0L},{6L,0L},{6L,0L},{6L,0L},{6L,0L}};
    uint16_t *l_156 = &p_1277->g_83;
    int16_t *l_161 = &p_1277->g_75;
    int16_t **l_160 = &l_161;
    VECTOR(uint16_t, 4) l_166 = (VECTOR(uint16_t, 4))(0x7990L, (VECTOR(uint16_t, 2))(0x7990L, 0UL), 0UL);
    int32_t l_171 = (-2L);
    int32_t l_172 = 0x65E9EF75L;
    int64_t l_240 = 0x3F73657E3DCAB47AL;
    int8_t **l_296 = &l_149;
    int8_t l_387 = (-7L);
    VECTOR(int8_t, 4) l_422 = (VECTOR(int8_t, 4))(0x19L, (VECTOR(int8_t, 2))(0x19L, 0x4DL), 0x4DL);
    int i, j, k;
    l_151[5][0] = (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(l_133.yy)), ((VECTOR(int8_t, 2))(l_134.xz)), ((VECTOR(int8_t, 2))(l_135.yy)))))))), 0L, 0x30L)).x, ((((safe_mod_func_int16_t_s_s((((0x1BAA8443L < (!l_140[1][2][1])) && l_140[3][3][3]) || 1UL), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(0UL, ((VECTOR(uint16_t, 2))(l_141.se3)), 65533UL)).even)), 0x7DDFL, 1UL)).z, ((VECTOR(uint16_t, 4))(0x6087L, 0x703CL, 0x1E14L, 0UL)), ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1277->g_142.s4201)).ywzyyyxz)).s74, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xABA3L, 0x4A05L)), 0UL, 0x58AEL)), ((p_1277->g_83 && (!p_1277->g_142.s0)) & (((&p_1277->g_75 == (void*)0) != (safe_lshift_func_int16_t_s_s((~(safe_add_func_int8_t_s_s(((*l_149) |= (((((((((*p_113) , p_114) != (void*)0) , l_147) == p_114) && p_112) || GROUP_DIVERGE(0, 1)) <= l_134.y) > p_112)), p_112))), p_1277->g_121))) && l_140[1][2][1])), ((VECTOR(uint16_t, 2))(65528UL)), 65535UL)).s05))), 0xB243L)).s1)) < 0x17D2L) >= p_112) ^ p_1277->g_54.y))) > p_112), 11));
    l_172 &= (safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((l_156 != p_114), ((p_1277->g_157 != l_160) ^ GROUP_DIVERGE(1, 1)))) , (safe_add_func_uint16_t_u_u((*p_114), ((safe_mul_func_int16_t_s_s((l_151[5][0] , ((**l_160) = ((l_171 ^= ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 16))(l_166.wzxzxwyxxxwwyzwy)).odd, (uint16_t)(l_166.y || (l_151[2][0] = ((GROUP_DIVERGE(1, 1) , ((((p_112 ^ (((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((0x34L != GROUP_DIVERGE(1, 1)), 8)) && l_140[3][0][0]), p_112)) , &l_161) == (void*)0)) , 255UL) , p_1277->g_27) ^ p_112)) , FAKE_DIVERGE(p_1277->local_2_offset, get_local_id(2), 10)))), (uint16_t)GROUP_DIVERGE(0, 1)))).s2) & p_1277->g_comm_values[p_1277->tid]))), FAKE_DIVERGE(p_1277->global_2_offset, get_global_id(2), 10))) <= 9UL)))), l_141.s4));
    (*p_1277->g_124) = (*p_111);
    for (p_1277->g_75 = 0; (p_1277->g_75 != (-12)); p_1277->g_75 = safe_sub_func_int16_t_s_s(p_1277->g_75, 5))
    { /* block id: 76 */
        int32_t *l_175 = (void*)0;
        int32_t *l_176[4][2] = {{&l_171,&l_171},{&l_171,&l_171},{&l_171,&l_171},{&l_171,&l_171}};
        VECTOR(uint32_t, 8) l_189 = (VECTOR(uint32_t, 8))(0x435B83ECL, (VECTOR(uint32_t, 4))(0x435B83ECL, (VECTOR(uint32_t, 2))(0x435B83ECL, 0x7E9A979AL), 0x7E9A979AL), 0x7E9A979AL, 0x435B83ECL, 0x7E9A979AL);
        int64_t l_205 = 0x3B1E5A9D545A2CE0L;
        int32_t *l_292 = &p_1277->g_27;
        int32_t l_349 = 0x0D43A7C1L;
        VECTOR(uint64_t, 8) l_427 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
        int i, j;
        ++p_1277->g_180;
        for (p_1277->g_41 = 7; (p_1277->g_41 < (-25)); p_1277->g_41 = safe_sub_func_uint16_t_u_u(p_1277->g_41, 8))
        { /* block id: 80 */
            uint32_t *l_191 = &p_1277->g_121;
            VECTOR(uint64_t, 16) l_194 = (VECTOR(uint64_t, 16))(0xE982C83C74014540L, (VECTOR(uint64_t, 4))(0xE982C83C74014540L, (VECTOR(uint64_t, 2))(0xE982C83C74014540L, 1UL), 1UL), 1UL, 0xE982C83C74014540L, 1UL, (VECTOR(uint64_t, 2))(0xE982C83C74014540L, 1UL), (VECTOR(uint64_t, 2))(0xE982C83C74014540L, 1UL), 0xE982C83C74014540L, 1UL, 0xE982C83C74014540L, 1UL);
            int32_t l_228[10] = {0x5394E2B8L,0x1866F3FEL,4L,0x1866F3FEL,0x5394E2B8L,0x5394E2B8L,0x1866F3FEL,4L,0x1866F3FEL,0x5394E2B8L};
            VECTOR(int64_t, 4) l_233 = (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 0L), 0L);
            uint8_t *l_293 = &p_1277->g_180;
            int8_t **l_294 = &l_148;
            int8_t ***l_321[5][1][8] = {{{&l_296,&l_296,&l_296,&l_296,&l_296,&l_296,&l_296,&l_296}},{{&l_296,&l_296,&l_296,&l_296,&l_296,&l_296,&l_296,&l_296}},{{&l_296,&l_296,&l_296,&l_296,&l_296,&l_296,&l_296,&l_296}},{{&l_296,&l_296,&l_296,&l_296,&l_296,&l_296,&l_296,&l_296}},{{&l_296,&l_296,&l_296,&l_296,&l_296,&l_296,&l_296,&l_296}}};
            int i, j, k;
            if (((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((((((VECTOR(uint32_t, 16))(l_189.s3472676631031562)).s3 , ((VECTOR(uint64_t, 2))(p_1277->g_190.xy)).even) , (FAKE_DIVERGE(p_1277->group_1_offset, get_group_id(1), 10) > ((*l_147) |= (((void*)0 != p_113) , ((++(*l_191)) < (((VECTOR(uint64_t, 16))(l_194.s7cb0e52188dfeb77)).s0 < FAKE_DIVERGE(p_1277->local_1_offset, get_local_id(1), 10))))))) , (safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((*p_114), ((l_151[5][0] ^= (p_1277->g_199 != &p_1277->g_121)) , (safe_mod_func_int8_t_s_s((((p_1277->g_121 &= ((void*)0 != &p_1277->g_121)) , p_1277->g_54.x) && ((p_113 != &p_1277->g_150) , FAKE_DIVERGE(p_1277->group_2_offset, get_group_id(2), 10))), GROUP_DIVERGE(2, 1)))))) , l_194.s1), 4294967291UL))) , p_1277->g_177), p_1277->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1277->tid, 155))])) <= GROUP_DIVERGE(2, 1)), GROUP_DIVERGE(2, 1))) , 0x5D738CCBL))
            { /* block id: 85 */
                VECTOR(uint8_t, 8) l_214 = (VECTOR(uint8_t, 8))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 255UL), 255UL), 255UL, 247UL, 255UL);
                int32_t l_227 = (-1L);
                VECTOR(int8_t, 4) l_260 = (VECTOR(int8_t, 4))(0x1EL, (VECTOR(int8_t, 2))(0x1EL, (-5L)), (-5L));
                int i;
                for (l_172 = 1; (l_172 == 2); l_172++)
                { /* block id: 88 */
                    int32_t l_250[10][5] = {{0x2CFA96F4L,(-9L),7L,(-9L),0x2CFA96F4L},{0x2CFA96F4L,(-9L),7L,(-9L),0x2CFA96F4L},{0x2CFA96F4L,(-9L),7L,(-9L),0x2CFA96F4L},{0x2CFA96F4L,(-9L),7L,(-9L),0x2CFA96F4L},{0x2CFA96F4L,(-9L),7L,(-9L),0x2CFA96F4L},{0x2CFA96F4L,(-9L),7L,(-9L),0x2CFA96F4L},{0x2CFA96F4L,(-9L),7L,(-9L),0x2CFA96F4L},{0x2CFA96F4L,(-9L),7L,(-9L),0x2CFA96F4L},{0x2CFA96F4L,(-9L),7L,(-9L),0x2CFA96F4L},{0x2CFA96F4L,(-9L),7L,(-9L),0x2CFA96F4L}};
                    VECTOR(int8_t, 2) l_264 = (VECTOR(int8_t, 2))(0x3BL, 0L);
                    int32_t l_273[3];
                    int32_t l_275 = 0x77C1476EL;
                    VECTOR(uint16_t, 2) l_286 = (VECTOR(uint16_t, 2))(0x0CB0L, 0xDFA5L);
                    VECTOR(uint16_t, 4) l_287 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x0A66L), 0x0A66L);
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_273[i] = 0x43149682L;
                    if (l_205)
                        break;
                    if ((safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(1UL, p_1277->g_177)), 0)) , (-9L)), ((l_151[5][0] ^= (safe_sub_func_int64_t_s_s(l_194.s8, l_214.s2))) || 0x41867876L))))
                    { /* block id: 91 */
                        VECTOR(uint64_t, 4) l_229 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x177069160EC46614L), 0x177069160EC46614L);
                        int i;
                        (*p_111) = (void*)0;
                        l_229.w &= (l_228[7] = (safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((void*)0 != p_111), (safe_mul_func_uint16_t_u_u(((*l_156) = (((safe_lshift_func_int16_t_s_s((l_133.y | (p_1277->g_190.x && (safe_lshift_func_uint8_t_u_u(0UL, 0)))), p_1277->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1277->tid, 155))])) , l_214.s3) == p_1277->g_190.x)), (((((safe_lshift_func_int8_t_s_u((((l_227 = 1UL) == 9L) , 0L), 0)) <= l_214.s4) != p_1277->g_27) < p_1277->g_142.s7) < p_112))))), p_1277->g_54.x)));
                    }
                    else
                    { /* block id: 97 */
                        int32_t *l_249 = &p_1277->g_179;
                        int32_t l_251 = 0x5F7C6AF0L;
                        p_1277->g_230 = l_194.s3;
                        l_151[5][0] &= (safe_add_func_int16_t_s_s((((VECTOR(int64_t, 8))(l_233.ywxyxywy)).s7 , ((VECTOR(int16_t, 16))((safe_lshift_func_int16_t_s_s((0L || (safe_mul_func_uint16_t_u_u((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x672B4DC3A2BD98ADL, 0xD78437ABAE861B12L)), 0x0C4A4D08B0D3C195L, 0UL)).ywyxzywz)).s70)).even > (0x6226D13DL > (((safe_sub_func_int32_t_s_s(l_240, (safe_lshift_func_uint8_t_u_s((p_1277->g_27 & ((p_112 | (safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(65535UL, (&l_227 != (((*l_249) = ((--(*p_114)) || 65528UL)) , &l_227)))), (-1L)))) >= l_250[9][3])), l_214.s6)))) , 0x7324F2782A31A939L) , l_251))), p_1277->g_190.y))), 14)), ((VECTOR(int16_t, 4))(0x53F0L)), 0x55FBL, 0x274EL, (-2L), 0x2072L, 0x7C3DL, (-1L), (-8L), 1L, 7L, 1L, 0x4F06L)).s6), p_112));
                        l_228[7] |= 3L;
                    }
                    if (p_1277->g_230)
                        continue;
                    for (p_1277->g_179 = 29; (p_1277->g_179 > (-5)); p_1277->g_179 = safe_sub_func_int8_t_s_s(p_1277->g_179, 3))
                    { /* block id: 107 */
                        VECTOR(int8_t, 16) l_261 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int8_t, 2))(1L, 0L), (VECTOR(int8_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
                        int i;
                        p_1277->g_276 |= ((0L | ((void*)0 == (*p_1277->g_157))) , (safe_mod_func_int16_t_s_s((p_1277->g_27 | (l_275 = (p_1277->g_274 = (safe_mod_func_uint8_t_u_u((((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(l_260.yxwz)).hi, ((VECTOR(int8_t, 8))(l_261.s39ec2880)).s66))).lo , (l_273[0] = (((((*p_113) |= (safe_lshift_func_int8_t_s_u(p_112, 1))) >= (l_171 = 0xCCL)) , ((*l_149) = ((VECTOR(int8_t, 8))(l_264.yyxyxyxy)).s7)) ^ ((((((p_1277->g_178 , ((safe_mul_func_int8_t_s_s(0x6FL, ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((0xD029A793L > p_112), p_1277->g_83)), l_228[7])), p_1277->g_177)) || 0x5939L))) | p_112)) || (*p_114)) && GROUP_DIVERGE(0, 1)) ^ p_1277->g_178) | l_260.z) , 1L)))), (-4L)))))), 1L)));
                        l_227 = ((safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(1UL, ((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(1UL, 251UL)), 1UL, 248UL)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(p_1277->g_285.yyxxxyxx)).lo))))), 0xB9L, 0x89L, 0x1AL)).s4, 4)), (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_286.yx)))).xxxx, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_287.wz)))).yxyy))))), 7UL, 0xE6397B18L, 5UL, 0x6347CD1DL)).s4 != (safe_lshift_func_int16_t_s_s((l_261.s7 <= (8L < (((*p_113) = 0x2DL) , ((&l_171 == (void*)0) | (((((safe_rshift_func_int8_t_s_s((((*p_113) == (*p_113)) , ((*p_111) == (*p_1277->g_124))), p_112)) >= p_1277->g_190.x) | p_1277->g_27) <= l_228[5]) | p_1277->g_142.s3))))), p_1277->g_54.x))))), 0x659CL)), 3)) || 0UL);
                        (*p_1277->g_124) = (*p_1277->g_124);
                        if (l_286.y)
                            break;
                    }
                }
                (*p_1277->g_124) = l_292;
                return l_293;
            }
            else
            { /* block id: 123 */
                int8_t ***l_295[6] = {&l_294,&l_294,&l_294,&l_294,&l_294,&l_294};
                int8_t ****l_320[7] = {&l_295[0],&l_295[2],&l_295[0],&l_295[0],&l_295[2],&l_295[0],&l_295[0]};
                int32_t l_324 = 0x327AEA69L;
                int i;
                l_296 = l_294;
                p_1277->g_329[0][4][5] = (safe_add_func_int32_t_s_s(0L, (safe_sub_func_uint16_t_u_u((l_151[5][0] = (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(0x02L, 0xFEL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((((((safe_rshift_func_uint16_t_u_s(0x0829L, 4)) > ((safe_add_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (((p_112 , ((safe_add_func_uint64_t_u_u(p_1277->g_190.y, (safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 4))(0x460A8B19DD57D721L, 1L, (-3L), 0x608129A2D0D2D7D5L)).w, ((((**p_1277->g_318) = ((l_228[7] = (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((l_321[2][0][1] = p_1277->g_317) != (((*l_147)--) , &p_1277->g_318)), l_324)), ((((safe_mul_func_uint8_t_u_u(255UL, (safe_rshift_func_uint8_t_u_u((p_1277->g_276 < p_1277->g_190.y), 5)))) , p_112) | FAKE_DIVERGE(p_1277->group_0_offset, get_group_id(0), 10)) | (*l_292))))) || (-6L))) < 2UL) , p_112))), l_324)))) <= p_1277->g_54.y)) , p_1277->g_comm_values[p_1277->tid]) , 0x1BECL))) <= p_112)) , p_1277->g_83) && (*l_292)) && 0L) > p_112), 0xB8L, ((VECTOR(uint8_t, 2))(248UL)), p_1277->g_27, 251UL, 0x67L, 0x86L, ((VECTOR(uint8_t, 8))(0x17L)))).sa7)), ((VECTOR(uint8_t, 2))(0xE9L)), 0xFDL, 0UL, 0x35L, 0xAFL, 3UL, ((VECTOR(uint8_t, 4))(0x27L)), 1UL)).se, GROUP_DIVERGE(1, 1)))), p_1277->g_274))));
            }
        }
        for (l_172 = 0; (l_172 <= (-11)); --l_172)
        { /* block id: 135 */
            int32_t *l_342 = (void*)0;
            int8_t **l_345 = (void*)0;
            int8_t ***l_346 = &l_296;
            uint32_t *l_347 = &p_1277->g_348;
            uint64_t *l_350 = &p_1277->g_274;
            VECTOR(uint8_t, 16) l_363 = (VECTOR(uint8_t, 16))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 0xF6L), 0xF6L), 0xF6L, 6UL, 0xF6L, (VECTOR(uint8_t, 2))(6UL, 0xF6L), (VECTOR(uint8_t, 2))(6UL, 0xF6L), 6UL, 0xF6L, 6UL, 0xF6L);
            int32_t l_370 = 0x33B014EBL;
            int32_t l_382 = 0x322A9D3DL;
            int32_t l_391 = 0x0A73BF47L;
            uint8_t l_392 = 0x7DL;
            int32_t l_410[1];
            uint32_t l_428[2][10] = {{0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L},{0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L,0x3CC1AAF0L}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_410[i] = 0x4D41D19AL;
            if (((safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(2, 1), ((*l_149) = (*l_292)))) < (safe_lshift_func_int8_t_s_u((((safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s((-7L), (safe_sub_func_int8_t_s_s((*p_1277->g_319), (((*l_350) = ((((*p_1277->g_124) = l_342) != &p_1277->g_27) , ((safe_div_func_int16_t_s_s((((((*p_1277->g_317) = l_345) != ((*l_346) = &p_1277->g_319)) < p_1277->g_75) & (((*l_347) ^= FAKE_DIVERGE(p_1277->global_0_offset, get_global_id(0), 10)) , (p_112 , l_349))), p_1277->g_83)) < 0xF59CL))) && l_135.y))))), p_1277->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1277->tid, 155))])) , p_1277->g_142.s6) == p_1277->g_27), 5))))
            { /* block id: 142 */
                uint32_t l_354 = 4294967293UL;
                int8_t l_359 = 0x14L;
                int16_t *l_362[9];
                int8_t ****l_368[7][9][4] = {{{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346}},{{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346}},{{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346}},{{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346}},{{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346}},{{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346}},{{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346},{&l_346,&l_346,&p_1277->g_317,&l_346}}};
                int8_t *****l_369 = &l_368[5][4][1];
                VECTOR(int8_t, 2) l_374 = (VECTOR(int8_t, 2))(0L, 0x4BL);
                int64_t *l_383 = &l_205;
                int32_t l_386 = 0x55BB680DL;
                int32_t **l_407 = &l_175;
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_362[i] = &p_1277->g_230;
                l_354++;
                (*p_111) = ((((safe_rshift_func_int16_t_s_s(l_359, (p_1277->g_230 &= (safe_sub_func_int64_t_s_s(p_1277->g_190.y, (p_1277->g_54.x , p_112)))))) == (l_171 = (l_172 , p_1277->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1277->tid, 155))]))) & ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_363.sf16e)).odd)).hi) , (*p_111));
                if ((((safe_mod_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_s((&p_1277->g_317 != ((*l_369) = l_368[5][4][1])), 0)) > (~(l_370 <= p_112))) ^ 0x286BL) == p_112), (safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_s((((VECTOR(int8_t, 16))(l_374.xyxxxyyyxxyyyxyy)).sf != (safe_div_func_int64_t_s_s(((*l_383) = ((safe_add_func_int32_t_s_s(((((p_112 > (((VECTOR(uint8_t, 2))(p_1277->g_379.s52)).hi && (safe_mul_func_uint16_t_u_u((l_133.y <= 4UL), p_1277->g_274)))) & (*p_114)) && l_359) != l_382), p_1277->g_285.y)) | p_1277->g_179)), p_112))), 14)))))) > l_374.x) , 0L))
                { /* block id: 149 */
                    uint16_t l_388 = 65528UL;
                    int32_t l_400 = 0x04719DABL;
                    VECTOR(uint32_t, 4) l_401 = (VECTOR(uint32_t, 4))(0x074033CBL, (VECTOR(uint32_t, 2))(0x074033CBL, 0x14D16358L), 0x14D16358L);
                    int32_t **l_408 = &l_342;
                    int16_t ***l_420 = (void*)0;
                    int16_t ***l_421 = &p_1277->g_418;
                    int i;
                    for (p_1277->g_179 = 0; (p_1277->g_179 >= 29); p_1277->g_179++)
                    { /* block id: 152 */
                        (*p_111) = (*p_1277->g_124);
                        l_386 = l_359;
                        l_388++;
                    }
                    if ((FAKE_DIVERGE(p_1277->group_1_offset, get_group_id(1), 10) , (l_386 |= p_112)))
                    { /* block id: 158 */
                        l_151[5][0] &= (p_1277->g_27 >= ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(9UL, 18446744073709551615UL)).odd, 3UL, 4UL, 0xC7293DEE22F16A01L)).w);
                        p_1277->g_352 ^= (l_391 = (((*p_114) <= 65526UL) ^ l_386));
                    }
                    else
                    { /* block id: 162 */
                        ++l_392;
                    }
                    for (l_391 = 0; (l_391 == 18); l_391++)
                    { /* block id: 167 */
                        uint32_t *l_399[4][2] = {{&p_1277->g_329[0][0][4],&p_1277->g_329[0][0][4]},{&p_1277->g_329[0][0][4],&p_1277->g_329[0][0][4]},{&p_1277->g_329[0][0][4],&p_1277->g_329[0][0][4]},{&p_1277->g_329[0][0][4],&p_1277->g_329[0][0][4]}};
                        int32_t l_402 = 0x1D1403AEL;
                        int32_t *l_409[3];
                        VECTOR(int32_t, 4) l_411 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_409[i] = (void*)0;
                        l_410[0] = ((((((((((safe_mul_func_int16_t_s_s(((l_151[5][0] |= ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))((0UL != ((**l_296) |= (l_141.sf ^ ((((+((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((((l_400 = l_388) < ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_401.zwxywyywyxwzzxzy)).s0539)), ((VECTOR(uint32_t, 2))(0xAB8B7D61L, 0x81053918L)), (FAKE_DIVERGE(p_1277->local_1_offset, get_local_id(1), 10) > (((((*p_113) <= (p_112 , (l_402 , l_354))) | (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 8))(p_1277->g_405.zyxxwwwy)).s3, ((l_171 = (safe_unary_minus_func_int64_t_s((((p_111 != (l_408 = l_407)) ^ 7UL) < 0L)))) , (-3L))))) , 0x5AL) && p_112)), 0xDC80864EL, 0xD2665F52L, 0xDADB5CA2L, p_112, 4294967288UL, 0xEBA94C3CL, l_166.w, 4294967295UL, 4294967288UL)).s7c)).xxyyxyxy)).s6) , p_1277->g_285.y) , 0x05C9L), (*l_292), l_134.y, ((VECTOR(int16_t, 4))(0x6D47L)), (-4L))).odd)).wzzwywxz)).s2371234036005333)).s0) | p_112) ^ (*p_114)) && p_112)))), (-1L), 0x578D19CAL, 0x73AB32B6L)).wwzzxwyz, ((VECTOR(int32_t, 8))((-1L)))))).s1) , p_1277->g_379.s2), p_112)) > p_1277->g_348) || p_1277->g_379.s6) , 1UL) , p_1277->g_379.s7) <= FAKE_DIVERGE(p_1277->local_0_offset, get_local_id(0), 10)) , FAKE_DIVERGE(p_1277->global_1_offset, get_global_id(1), 10)) || p_112) || p_1277->g_274) != p_1277->g_276);
                        p_1277->g_41 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0L, ((VECTOR(int32_t, 2))(l_411.xx)), 0x1C235265L, 1L, 0x45BD86FEL, (-1L), (-8L))))).s1;
                        if (l_402)
                            break;
                        if (l_411.w)
                            break;
                    }
                    l_386 &= (((VECTOR(int16_t, 4))((-5L), ((VECTOR(int16_t, 2))(2L, 0x02C3L)), 2L)).w , (((&p_1277->g_274 != l_383) >= ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((((*l_383) = 0L) , &l_362[1]) == ((*l_421) = p_1277->g_418)), p_112)), (~((***l_346) = ((VECTOR(int8_t, 16))(l_422.zzwzwyzxxxwzywyw)).s5)))), (safe_sub_func_int32_t_s_s((((safe_mul_func_int16_t_s_s((p_112 , ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 16))(l_427.s1556443257634345)).odd, ((VECTOR(uint64_t, 8))(18446744073709551614UL, p_1277->g_54.y, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(0x1AC01B060480A30CL)), 0UL, 0x07D0D23360680874L, 2UL)), ((VECTOR(uint64_t, 8))(0UL))))).s33))).yxyxxxyx)).s7 >= p_1277->g_230) & p_112)), (*p_114))) , 5L) , l_171), p_112)))) | 1UL)) >= l_428[0][6]));
                }
                else
                { /* block id: 182 */
                    (*p_1277->g_124) = l_292;
                    if (l_134.z)
                        break;
                    for (p_1277->g_121 = 0; (p_1277->g_121 <= 44); p_1277->g_121 = safe_add_func_int16_t_s_s(p_1277->g_121, 6))
                    { /* block id: 187 */
                        return p_113;
                    }
                    return l_149;
                }
                if (l_410[0])
                    break;
            }
            else
            { /* block id: 193 */
                int8_t l_431 = 0x7FL;
                int32_t l_432[4] = {1L,1L,1L,1L};
                int i;
                p_1277->g_434--;
            }
        }
    }
    return &p_1277->g_180;
}


/* ------------------------------------------ */
/* 
 * reads : p_1277->g_83 p_1277->g_41 p_1277->g_121 p_1277->g_124
 * writes: p_1277->g_41 p_1277->g_121
 */
int32_t ** func_115(int32_t * p_116, struct S0 * p_1277)
{ /* block id: 60 */
    int32_t *l_119[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t **l_118 = &l_119[3];
    int32_t l_120 = 4L;
    int i;
    (*l_118) = &p_1277->g_27;
    (*p_116) &= p_1277->g_83;
    ++p_1277->g_121;
    return p_1277->g_124;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[66];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 66; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[66];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 66; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[155];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 155; i++)
            l_comm_values[i] = 1;
    struct S0 c_1278;
    struct S0* p_1277 = &c_1278;
    struct S0 c_1279 = {
        254UL, // p_1277->g_3
        0x6DB6B7BEL, // p_1277->g_26
        1L, // p_1277->g_27
        0x7EEE83ADL, // p_1277->g_41
        (VECTOR(uint8_t, 2))(0x50L, 0UL), // p_1277->g_54
        (void*)0, // p_1277->g_67
        8L, // p_1277->g_75
        &p_1277->g_41, // p_1277->g_76
        &p_1277->g_27, // p_1277->g_78
        &p_1277->g_78, // p_1277->g_77
        0UL, // p_1277->g_83
        (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, 0x58L), 0x58L), // p_1277->g_90
        4294967293UL, // p_1277->g_121
        (void*)0, // p_1277->g_125
        &p_1277->g_125, // p_1277->g_124
        (VECTOR(uint16_t, 8))(0xC7A1L, (VECTOR(uint16_t, 4))(0xC7A1L, (VECTOR(uint16_t, 2))(0xC7A1L, 65534UL), 65534UL), 65534UL, 0xC7A1L, 65534UL), // p_1277->g_142
        0L, // p_1277->g_150
        (-10L), // p_1277->g_159
        &p_1277->g_159, // p_1277->g_158
        &p_1277->g_158, // p_1277->g_157
        4L, // p_1277->g_177
        0x04A484DF502F1E5DL, // p_1277->g_178
        (-4L), // p_1277->g_179
        0xCEL, // p_1277->g_180
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551606UL), // p_1277->g_190
        4294967295UL, // p_1277->g_200
        &p_1277->g_200, // p_1277->g_199
        0x695CL, // p_1277->g_230
        18446744073709551615UL, // p_1277->g_274
        0x2601B763L, // p_1277->g_276
        (VECTOR(uint8_t, 2))(0UL, 0xBFL), // p_1277->g_285
        &p_1277->g_177, // p_1277->g_319
        &p_1277->g_319, // p_1277->g_318
        &p_1277->g_318, // p_1277->g_317
        {{{0UL,0UL,0x679061F1L,0xEF66F191L,0UL,0xEF66F191L},{0UL,0UL,0x679061F1L,0xEF66F191L,0UL,0xEF66F191L},{0UL,0UL,0x679061F1L,0xEF66F191L,0UL,0xEF66F191L},{0UL,0UL,0x679061F1L,0xEF66F191L,0UL,0xEF66F191L},{0UL,0UL,0x679061F1L,0xEF66F191L,0UL,0xEF66F191L},{0UL,0UL,0x679061F1L,0xEF66F191L,0UL,0xEF66F191L},{0UL,0UL,0x679061F1L,0xEF66F191L,0UL,0xEF66F191L}}}, // p_1277->g_329
        0xC84B44F7L, // p_1277->g_348
        2L, // p_1277->g_351
        0L, // p_1277->g_352
        (-8L), // p_1277->g_353
        (VECTOR(uint8_t, 8))(0x18L, (VECTOR(uint8_t, 4))(0x18L, (VECTOR(uint8_t, 2))(0x18L, 0x24L), 0x24L), 0x24L, 0x18L, 0x24L), // p_1277->g_379
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x6206L), 0x6206L), // p_1277->g_405
        &p_1277->g_75, // p_1277->g_419
        &p_1277->g_419, // p_1277->g_418
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x0D66266C13DC856FL), 0x0D66266C13DC856FL), 0x0D66266C13DC856FL, 0L, 0x0D66266C13DC856FL, (VECTOR(int64_t, 2))(0L, 0x0D66266C13DC856FL), (VECTOR(int64_t, 2))(0L, 0x0D66266C13DC856FL), 0L, 0x0D66266C13DC856FL, 0L, 0x0D66266C13DC856FL), // p_1277->g_433
        0x6199L, // p_1277->g_434
        0x9B6947C0L, // p_1277->g_448
        (VECTOR(int16_t, 2))(1L, 0x6CA0L), // p_1277->g_455
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L)), // p_1277->g_456
        (VECTOR(uint8_t, 8))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 0x48L), 0x48L), 0x48L, 249UL, 0x48L), // p_1277->g_491
        (VECTOR(uint8_t, 2))(0xDEL, 1UL), // p_1277->g_493
        (VECTOR(uint8_t, 8))(0x42L, (VECTOR(uint8_t, 4))(0x42L, (VECTOR(uint8_t, 2))(0x42L, 1UL), 1UL), 1UL, 0x42L, 1UL), // p_1277->g_495
        (VECTOR(uint8_t, 4))(0xEAL, (VECTOR(uint8_t, 2))(0xEAL, 252UL), 252UL), // p_1277->g_499
        0x23392586L, // p_1277->g_549
        (VECTOR(uint8_t, 4))(0xF8L, (VECTOR(uint8_t, 2))(0xF8L, 4UL), 4UL), // p_1277->g_556
        (VECTOR(int16_t, 2))(0x05FAL, (-1L)), // p_1277->g_569
        0x02194D09L, // p_1277->g_618
        (VECTOR(int32_t, 2))(0x1455A9D6L, 0x0D60A15EL), // p_1277->g_639
        0x55L, // p_1277->g_661
        0x4EL, // p_1277->g_662
        0L, // p_1277->g_663
        {&p_1277->g_661,&p_1277->g_661,&p_1277->g_661,&p_1277->g_661,&p_1277->g_661,&p_1277->g_661,&p_1277->g_661,&p_1277->g_661,&p_1277->g_661,&p_1277->g_661}, // p_1277->g_660
        &p_1277->g_660[0], // p_1277->g_659
        &p_1277->g_659, // p_1277->g_658
        &p_1277->g_658, // p_1277->g_657
        &p_1277->g_657, // p_1277->g_656
        (VECTOR(int64_t, 16))(0x7E8513EE8BEB12BEL, (VECTOR(int64_t, 4))(0x7E8513EE8BEB12BEL, (VECTOR(int64_t, 2))(0x7E8513EE8BEB12BEL, 0x3C335D4E02EE6366L), 0x3C335D4E02EE6366L), 0x3C335D4E02EE6366L, 0x7E8513EE8BEB12BEL, 0x3C335D4E02EE6366L, (VECTOR(int64_t, 2))(0x7E8513EE8BEB12BEL, 0x3C335D4E02EE6366L), (VECTOR(int64_t, 2))(0x7E8513EE8BEB12BEL, 0x3C335D4E02EE6366L), 0x7E8513EE8BEB12BEL, 0x3C335D4E02EE6366L, 0x7E8513EE8BEB12BEL, 0x3C335D4E02EE6366L), // p_1277->g_669
        (VECTOR(uint32_t, 8))(0x1639A294L, (VECTOR(uint32_t, 4))(0x1639A294L, (VECTOR(uint32_t, 2))(0x1639A294L, 3UL), 3UL), 3UL, 0x1639A294L, 3UL), // p_1277->g_709
        (VECTOR(uint32_t, 16))(0x3BA7A458L, (VECTOR(uint32_t, 4))(0x3BA7A458L, (VECTOR(uint32_t, 2))(0x3BA7A458L, 0x2F156CF6L), 0x2F156CF6L), 0x2F156CF6L, 0x3BA7A458L, 0x2F156CF6L, (VECTOR(uint32_t, 2))(0x3BA7A458L, 0x2F156CF6L), (VECTOR(uint32_t, 2))(0x3BA7A458L, 0x2F156CF6L), 0x3BA7A458L, 0x2F156CF6L, 0x3BA7A458L, 0x2F156CF6L), // p_1277->g_712
        (VECTOR(int16_t, 2))(2L, 1L), // p_1277->g_720
        (VECTOR(int32_t, 8))(0x4D300C2DL, (VECTOR(int32_t, 4))(0x4D300C2DL, (VECTOR(int32_t, 2))(0x4D300C2DL, 1L), 1L), 1L, 0x4D300C2DL, 1L), // p_1277->g_724
        (VECTOR(int32_t, 2))(3L, 3L), // p_1277->g_734
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), // p_1277->g_752
        (VECTOR(uint32_t, 2))(0x30BED633L, 1UL), // p_1277->g_756
        0x11L, // p_1277->g_776
        (VECTOR(int8_t, 8))(0x4EL, (VECTOR(int8_t, 4))(0x4EL, (VECTOR(int8_t, 2))(0x4EL, 1L), 1L), 1L, 0x4EL, 1L), // p_1277->g_791
        (VECTOR(int8_t, 2))((-10L), 0x61L), // p_1277->g_793
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L)), // p_1277->g_794
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x36L), 0x36L), // p_1277->g_865
        (VECTOR(int32_t, 2))((-7L), 0x771F9D74L), // p_1277->g_901
        (VECTOR(int32_t, 4))(0x03B55CECL, (VECTOR(int32_t, 2))(0x03B55CECL, (-1L)), (-1L)), // p_1277->g_904
        (void*)0, // p_1277->g_915
        (VECTOR(int32_t, 16))(0x4E6CFBA0L, (VECTOR(int32_t, 4))(0x4E6CFBA0L, (VECTOR(int32_t, 2))(0x4E6CFBA0L, 0x5F0DC38BL), 0x5F0DC38BL), 0x5F0DC38BL, 0x4E6CFBA0L, 0x5F0DC38BL, (VECTOR(int32_t, 2))(0x4E6CFBA0L, 0x5F0DC38BL), (VECTOR(int32_t, 2))(0x4E6CFBA0L, 0x5F0DC38BL), 0x4E6CFBA0L, 0x5F0DC38BL, 0x4E6CFBA0L, 0x5F0DC38BL), // p_1277->g_917
        (-1L), // p_1277->g_933
        (VECTOR(int16_t, 16))(0x1304L, (VECTOR(int16_t, 4))(0x1304L, (VECTOR(int16_t, 2))(0x1304L, 0x1615L), 0x1615L), 0x1615L, 0x1304L, 0x1615L, (VECTOR(int16_t, 2))(0x1304L, 0x1615L), (VECTOR(int16_t, 2))(0x1304L, 0x1615L), 0x1304L, 0x1615L, 0x1304L, 0x1615L), // p_1277->g_1009
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), // p_1277->g_1010
        (VECTOR(uint8_t, 16))(0x44L, (VECTOR(uint8_t, 4))(0x44L, (VECTOR(uint8_t, 2))(0x44L, 0xCDL), 0xCDL), 0xCDL, 0x44L, 0xCDL, (VECTOR(uint8_t, 2))(0x44L, 0xCDL), (VECTOR(uint8_t, 2))(0x44L, 0xCDL), 0x44L, 0xCDL, 0x44L, 0xCDL), // p_1277->g_1013
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x8811L), 0x8811L), 0x8811L, 65535UL, 0x8811L, (VECTOR(uint16_t, 2))(65535UL, 0x8811L), (VECTOR(uint16_t, 2))(65535UL, 0x8811L), 65535UL, 0x8811L, 65535UL, 0x8811L), // p_1277->g_1021
        {{{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)}},{{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)}},{{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)}},{{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)}},{{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)}},{{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)}},{{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)}},{{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)}},{{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)}},{{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)},{0x42BB9909L,(-1L)}}}, // p_1277->g_1026
        (VECTOR(int8_t, 16))(0x1AL, (VECTOR(int8_t, 4))(0x1AL, (VECTOR(int8_t, 2))(0x1AL, (-3L)), (-3L)), (-3L), 0x1AL, (-3L), (VECTOR(int8_t, 2))(0x1AL, (-3L)), (VECTOR(int8_t, 2))(0x1AL, (-3L)), 0x1AL, (-3L), 0x1AL, (-3L)), // p_1277->g_1041
        (void*)0, // p_1277->g_1056
        (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x34L), 0x34L), 0x34L, (-5L), 0x34L), // p_1277->g_1153
        (VECTOR(int8_t, 2))((-8L), 0x0FL), // p_1277->g_1155
        (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 0x68L), 0x68L), // p_1277->g_1156
        (VECTOR(uint8_t, 8))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0x0AL), 0x0AL), 0x0AL, 254UL, 0x0AL), // p_1277->g_1192
        (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0xD6D0L), 0xD6D0L), 0xD6D0L, 65526UL, 0xD6D0L), // p_1277->g_1199
        0x04EBL, // p_1277->g_1205
        (VECTOR(int32_t, 4))(0x5FC797AAL, (VECTOR(int32_t, 2))(0x5FC797AAL, 1L), 1L), // p_1277->g_1210
        &p_1277->g_78, // p_1277->g_1229
        &p_1277->g_78, // p_1277->g_1243
        (VECTOR(uint8_t, 2))(9UL, 1UL), // p_1277->g_1250
        0, // p_1277->v_collective
        sequence_input[get_global_id(0)], // p_1277->global_0_offset
        sequence_input[get_global_id(1)], // p_1277->global_1_offset
        sequence_input[get_global_id(2)], // p_1277->global_2_offset
        sequence_input[get_local_id(0)], // p_1277->local_0_offset
        sequence_input[get_local_id(1)], // p_1277->local_1_offset
        sequence_input[get_local_id(2)], // p_1277->local_2_offset
        sequence_input[get_group_id(0)], // p_1277->group_0_offset
        sequence_input[get_group_id(1)], // p_1277->group_1_offset
        sequence_input[get_group_id(2)], // p_1277->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 155)), permutations[0][get_linear_local_id()])), // p_1277->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1278 = c_1279;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1277);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1277->g_3, "p_1277->g_3", print_hash_value);
    transparent_crc(p_1277->g_26, "p_1277->g_26", print_hash_value);
    transparent_crc(p_1277->g_27, "p_1277->g_27", print_hash_value);
    transparent_crc(p_1277->g_41, "p_1277->g_41", print_hash_value);
    transparent_crc(p_1277->g_54.x, "p_1277->g_54.x", print_hash_value);
    transparent_crc(p_1277->g_54.y, "p_1277->g_54.y", print_hash_value);
    transparent_crc(p_1277->g_75, "p_1277->g_75", print_hash_value);
    transparent_crc(p_1277->g_83, "p_1277->g_83", print_hash_value);
    transparent_crc(p_1277->g_90.x, "p_1277->g_90.x", print_hash_value);
    transparent_crc(p_1277->g_90.y, "p_1277->g_90.y", print_hash_value);
    transparent_crc(p_1277->g_90.z, "p_1277->g_90.z", print_hash_value);
    transparent_crc(p_1277->g_90.w, "p_1277->g_90.w", print_hash_value);
    transparent_crc(p_1277->g_121, "p_1277->g_121", print_hash_value);
    transparent_crc(p_1277->g_142.s0, "p_1277->g_142.s0", print_hash_value);
    transparent_crc(p_1277->g_142.s1, "p_1277->g_142.s1", print_hash_value);
    transparent_crc(p_1277->g_142.s2, "p_1277->g_142.s2", print_hash_value);
    transparent_crc(p_1277->g_142.s3, "p_1277->g_142.s3", print_hash_value);
    transparent_crc(p_1277->g_142.s4, "p_1277->g_142.s4", print_hash_value);
    transparent_crc(p_1277->g_142.s5, "p_1277->g_142.s5", print_hash_value);
    transparent_crc(p_1277->g_142.s6, "p_1277->g_142.s6", print_hash_value);
    transparent_crc(p_1277->g_142.s7, "p_1277->g_142.s7", print_hash_value);
    transparent_crc(p_1277->g_150, "p_1277->g_150", print_hash_value);
    transparent_crc(p_1277->g_159, "p_1277->g_159", print_hash_value);
    transparent_crc(p_1277->g_177, "p_1277->g_177", print_hash_value);
    transparent_crc(p_1277->g_178, "p_1277->g_178", print_hash_value);
    transparent_crc(p_1277->g_179, "p_1277->g_179", print_hash_value);
    transparent_crc(p_1277->g_180, "p_1277->g_180", print_hash_value);
    transparent_crc(p_1277->g_190.x, "p_1277->g_190.x", print_hash_value);
    transparent_crc(p_1277->g_190.y, "p_1277->g_190.y", print_hash_value);
    transparent_crc(p_1277->g_200, "p_1277->g_200", print_hash_value);
    transparent_crc(p_1277->g_230, "p_1277->g_230", print_hash_value);
    transparent_crc(p_1277->g_274, "p_1277->g_274", print_hash_value);
    transparent_crc(p_1277->g_276, "p_1277->g_276", print_hash_value);
    transparent_crc(p_1277->g_285.x, "p_1277->g_285.x", print_hash_value);
    transparent_crc(p_1277->g_285.y, "p_1277->g_285.y", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1277->g_329[i][j][k], "p_1277->g_329[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1277->g_348, "p_1277->g_348", print_hash_value);
    transparent_crc(p_1277->g_351, "p_1277->g_351", print_hash_value);
    transparent_crc(p_1277->g_352, "p_1277->g_352", print_hash_value);
    transparent_crc(p_1277->g_353, "p_1277->g_353", print_hash_value);
    transparent_crc(p_1277->g_379.s0, "p_1277->g_379.s0", print_hash_value);
    transparent_crc(p_1277->g_379.s1, "p_1277->g_379.s1", print_hash_value);
    transparent_crc(p_1277->g_379.s2, "p_1277->g_379.s2", print_hash_value);
    transparent_crc(p_1277->g_379.s3, "p_1277->g_379.s3", print_hash_value);
    transparent_crc(p_1277->g_379.s4, "p_1277->g_379.s4", print_hash_value);
    transparent_crc(p_1277->g_379.s5, "p_1277->g_379.s5", print_hash_value);
    transparent_crc(p_1277->g_379.s6, "p_1277->g_379.s6", print_hash_value);
    transparent_crc(p_1277->g_379.s7, "p_1277->g_379.s7", print_hash_value);
    transparent_crc(p_1277->g_405.x, "p_1277->g_405.x", print_hash_value);
    transparent_crc(p_1277->g_405.y, "p_1277->g_405.y", print_hash_value);
    transparent_crc(p_1277->g_405.z, "p_1277->g_405.z", print_hash_value);
    transparent_crc(p_1277->g_405.w, "p_1277->g_405.w", print_hash_value);
    transparent_crc(p_1277->g_433.s0, "p_1277->g_433.s0", print_hash_value);
    transparent_crc(p_1277->g_433.s1, "p_1277->g_433.s1", print_hash_value);
    transparent_crc(p_1277->g_433.s2, "p_1277->g_433.s2", print_hash_value);
    transparent_crc(p_1277->g_433.s3, "p_1277->g_433.s3", print_hash_value);
    transparent_crc(p_1277->g_433.s4, "p_1277->g_433.s4", print_hash_value);
    transparent_crc(p_1277->g_433.s5, "p_1277->g_433.s5", print_hash_value);
    transparent_crc(p_1277->g_433.s6, "p_1277->g_433.s6", print_hash_value);
    transparent_crc(p_1277->g_433.s7, "p_1277->g_433.s7", print_hash_value);
    transparent_crc(p_1277->g_433.s8, "p_1277->g_433.s8", print_hash_value);
    transparent_crc(p_1277->g_433.s9, "p_1277->g_433.s9", print_hash_value);
    transparent_crc(p_1277->g_433.sa, "p_1277->g_433.sa", print_hash_value);
    transparent_crc(p_1277->g_433.sb, "p_1277->g_433.sb", print_hash_value);
    transparent_crc(p_1277->g_433.sc, "p_1277->g_433.sc", print_hash_value);
    transparent_crc(p_1277->g_433.sd, "p_1277->g_433.sd", print_hash_value);
    transparent_crc(p_1277->g_433.se, "p_1277->g_433.se", print_hash_value);
    transparent_crc(p_1277->g_433.sf, "p_1277->g_433.sf", print_hash_value);
    transparent_crc(p_1277->g_434, "p_1277->g_434", print_hash_value);
    transparent_crc(p_1277->g_448, "p_1277->g_448", print_hash_value);
    transparent_crc(p_1277->g_455.x, "p_1277->g_455.x", print_hash_value);
    transparent_crc(p_1277->g_455.y, "p_1277->g_455.y", print_hash_value);
    transparent_crc(p_1277->g_456.s0, "p_1277->g_456.s0", print_hash_value);
    transparent_crc(p_1277->g_456.s1, "p_1277->g_456.s1", print_hash_value);
    transparent_crc(p_1277->g_456.s2, "p_1277->g_456.s2", print_hash_value);
    transparent_crc(p_1277->g_456.s3, "p_1277->g_456.s3", print_hash_value);
    transparent_crc(p_1277->g_456.s4, "p_1277->g_456.s4", print_hash_value);
    transparent_crc(p_1277->g_456.s5, "p_1277->g_456.s5", print_hash_value);
    transparent_crc(p_1277->g_456.s6, "p_1277->g_456.s6", print_hash_value);
    transparent_crc(p_1277->g_456.s7, "p_1277->g_456.s7", print_hash_value);
    transparent_crc(p_1277->g_491.s0, "p_1277->g_491.s0", print_hash_value);
    transparent_crc(p_1277->g_491.s1, "p_1277->g_491.s1", print_hash_value);
    transparent_crc(p_1277->g_491.s2, "p_1277->g_491.s2", print_hash_value);
    transparent_crc(p_1277->g_491.s3, "p_1277->g_491.s3", print_hash_value);
    transparent_crc(p_1277->g_491.s4, "p_1277->g_491.s4", print_hash_value);
    transparent_crc(p_1277->g_491.s5, "p_1277->g_491.s5", print_hash_value);
    transparent_crc(p_1277->g_491.s6, "p_1277->g_491.s6", print_hash_value);
    transparent_crc(p_1277->g_491.s7, "p_1277->g_491.s7", print_hash_value);
    transparent_crc(p_1277->g_493.x, "p_1277->g_493.x", print_hash_value);
    transparent_crc(p_1277->g_493.y, "p_1277->g_493.y", print_hash_value);
    transparent_crc(p_1277->g_495.s0, "p_1277->g_495.s0", print_hash_value);
    transparent_crc(p_1277->g_495.s1, "p_1277->g_495.s1", print_hash_value);
    transparent_crc(p_1277->g_495.s2, "p_1277->g_495.s2", print_hash_value);
    transparent_crc(p_1277->g_495.s3, "p_1277->g_495.s3", print_hash_value);
    transparent_crc(p_1277->g_495.s4, "p_1277->g_495.s4", print_hash_value);
    transparent_crc(p_1277->g_495.s5, "p_1277->g_495.s5", print_hash_value);
    transparent_crc(p_1277->g_495.s6, "p_1277->g_495.s6", print_hash_value);
    transparent_crc(p_1277->g_495.s7, "p_1277->g_495.s7", print_hash_value);
    transparent_crc(p_1277->g_499.x, "p_1277->g_499.x", print_hash_value);
    transparent_crc(p_1277->g_499.y, "p_1277->g_499.y", print_hash_value);
    transparent_crc(p_1277->g_499.z, "p_1277->g_499.z", print_hash_value);
    transparent_crc(p_1277->g_499.w, "p_1277->g_499.w", print_hash_value);
    transparent_crc(p_1277->g_549, "p_1277->g_549", print_hash_value);
    transparent_crc(p_1277->g_556.x, "p_1277->g_556.x", print_hash_value);
    transparent_crc(p_1277->g_556.y, "p_1277->g_556.y", print_hash_value);
    transparent_crc(p_1277->g_556.z, "p_1277->g_556.z", print_hash_value);
    transparent_crc(p_1277->g_556.w, "p_1277->g_556.w", print_hash_value);
    transparent_crc(p_1277->g_569.x, "p_1277->g_569.x", print_hash_value);
    transparent_crc(p_1277->g_569.y, "p_1277->g_569.y", print_hash_value);
    transparent_crc(p_1277->g_618, "p_1277->g_618", print_hash_value);
    transparent_crc(p_1277->g_639.x, "p_1277->g_639.x", print_hash_value);
    transparent_crc(p_1277->g_639.y, "p_1277->g_639.y", print_hash_value);
    transparent_crc(p_1277->g_661, "p_1277->g_661", print_hash_value);
    transparent_crc(p_1277->g_662, "p_1277->g_662", print_hash_value);
    transparent_crc(p_1277->g_663, "p_1277->g_663", print_hash_value);
    transparent_crc(p_1277->g_669.s0, "p_1277->g_669.s0", print_hash_value);
    transparent_crc(p_1277->g_669.s1, "p_1277->g_669.s1", print_hash_value);
    transparent_crc(p_1277->g_669.s2, "p_1277->g_669.s2", print_hash_value);
    transparent_crc(p_1277->g_669.s3, "p_1277->g_669.s3", print_hash_value);
    transparent_crc(p_1277->g_669.s4, "p_1277->g_669.s4", print_hash_value);
    transparent_crc(p_1277->g_669.s5, "p_1277->g_669.s5", print_hash_value);
    transparent_crc(p_1277->g_669.s6, "p_1277->g_669.s6", print_hash_value);
    transparent_crc(p_1277->g_669.s7, "p_1277->g_669.s7", print_hash_value);
    transparent_crc(p_1277->g_669.s8, "p_1277->g_669.s8", print_hash_value);
    transparent_crc(p_1277->g_669.s9, "p_1277->g_669.s9", print_hash_value);
    transparent_crc(p_1277->g_669.sa, "p_1277->g_669.sa", print_hash_value);
    transparent_crc(p_1277->g_669.sb, "p_1277->g_669.sb", print_hash_value);
    transparent_crc(p_1277->g_669.sc, "p_1277->g_669.sc", print_hash_value);
    transparent_crc(p_1277->g_669.sd, "p_1277->g_669.sd", print_hash_value);
    transparent_crc(p_1277->g_669.se, "p_1277->g_669.se", print_hash_value);
    transparent_crc(p_1277->g_669.sf, "p_1277->g_669.sf", print_hash_value);
    transparent_crc(p_1277->g_709.s0, "p_1277->g_709.s0", print_hash_value);
    transparent_crc(p_1277->g_709.s1, "p_1277->g_709.s1", print_hash_value);
    transparent_crc(p_1277->g_709.s2, "p_1277->g_709.s2", print_hash_value);
    transparent_crc(p_1277->g_709.s3, "p_1277->g_709.s3", print_hash_value);
    transparent_crc(p_1277->g_709.s4, "p_1277->g_709.s4", print_hash_value);
    transparent_crc(p_1277->g_709.s5, "p_1277->g_709.s5", print_hash_value);
    transparent_crc(p_1277->g_709.s6, "p_1277->g_709.s6", print_hash_value);
    transparent_crc(p_1277->g_709.s7, "p_1277->g_709.s7", print_hash_value);
    transparent_crc(p_1277->g_712.s0, "p_1277->g_712.s0", print_hash_value);
    transparent_crc(p_1277->g_712.s1, "p_1277->g_712.s1", print_hash_value);
    transparent_crc(p_1277->g_712.s2, "p_1277->g_712.s2", print_hash_value);
    transparent_crc(p_1277->g_712.s3, "p_1277->g_712.s3", print_hash_value);
    transparent_crc(p_1277->g_712.s4, "p_1277->g_712.s4", print_hash_value);
    transparent_crc(p_1277->g_712.s5, "p_1277->g_712.s5", print_hash_value);
    transparent_crc(p_1277->g_712.s6, "p_1277->g_712.s6", print_hash_value);
    transparent_crc(p_1277->g_712.s7, "p_1277->g_712.s7", print_hash_value);
    transparent_crc(p_1277->g_712.s8, "p_1277->g_712.s8", print_hash_value);
    transparent_crc(p_1277->g_712.s9, "p_1277->g_712.s9", print_hash_value);
    transparent_crc(p_1277->g_712.sa, "p_1277->g_712.sa", print_hash_value);
    transparent_crc(p_1277->g_712.sb, "p_1277->g_712.sb", print_hash_value);
    transparent_crc(p_1277->g_712.sc, "p_1277->g_712.sc", print_hash_value);
    transparent_crc(p_1277->g_712.sd, "p_1277->g_712.sd", print_hash_value);
    transparent_crc(p_1277->g_712.se, "p_1277->g_712.se", print_hash_value);
    transparent_crc(p_1277->g_712.sf, "p_1277->g_712.sf", print_hash_value);
    transparent_crc(p_1277->g_720.x, "p_1277->g_720.x", print_hash_value);
    transparent_crc(p_1277->g_720.y, "p_1277->g_720.y", print_hash_value);
    transparent_crc(p_1277->g_724.s0, "p_1277->g_724.s0", print_hash_value);
    transparent_crc(p_1277->g_724.s1, "p_1277->g_724.s1", print_hash_value);
    transparent_crc(p_1277->g_724.s2, "p_1277->g_724.s2", print_hash_value);
    transparent_crc(p_1277->g_724.s3, "p_1277->g_724.s3", print_hash_value);
    transparent_crc(p_1277->g_724.s4, "p_1277->g_724.s4", print_hash_value);
    transparent_crc(p_1277->g_724.s5, "p_1277->g_724.s5", print_hash_value);
    transparent_crc(p_1277->g_724.s6, "p_1277->g_724.s6", print_hash_value);
    transparent_crc(p_1277->g_724.s7, "p_1277->g_724.s7", print_hash_value);
    transparent_crc(p_1277->g_734.x, "p_1277->g_734.x", print_hash_value);
    transparent_crc(p_1277->g_734.y, "p_1277->g_734.y", print_hash_value);
    transparent_crc(p_1277->g_752.x, "p_1277->g_752.x", print_hash_value);
    transparent_crc(p_1277->g_752.y, "p_1277->g_752.y", print_hash_value);
    transparent_crc(p_1277->g_752.z, "p_1277->g_752.z", print_hash_value);
    transparent_crc(p_1277->g_752.w, "p_1277->g_752.w", print_hash_value);
    transparent_crc(p_1277->g_756.x, "p_1277->g_756.x", print_hash_value);
    transparent_crc(p_1277->g_756.y, "p_1277->g_756.y", print_hash_value);
    transparent_crc(p_1277->g_776, "p_1277->g_776", print_hash_value);
    transparent_crc(p_1277->g_791.s0, "p_1277->g_791.s0", print_hash_value);
    transparent_crc(p_1277->g_791.s1, "p_1277->g_791.s1", print_hash_value);
    transparent_crc(p_1277->g_791.s2, "p_1277->g_791.s2", print_hash_value);
    transparent_crc(p_1277->g_791.s3, "p_1277->g_791.s3", print_hash_value);
    transparent_crc(p_1277->g_791.s4, "p_1277->g_791.s4", print_hash_value);
    transparent_crc(p_1277->g_791.s5, "p_1277->g_791.s5", print_hash_value);
    transparent_crc(p_1277->g_791.s6, "p_1277->g_791.s6", print_hash_value);
    transparent_crc(p_1277->g_791.s7, "p_1277->g_791.s7", print_hash_value);
    transparent_crc(p_1277->g_793.x, "p_1277->g_793.x", print_hash_value);
    transparent_crc(p_1277->g_793.y, "p_1277->g_793.y", print_hash_value);
    transparent_crc(p_1277->g_794.s0, "p_1277->g_794.s0", print_hash_value);
    transparent_crc(p_1277->g_794.s1, "p_1277->g_794.s1", print_hash_value);
    transparent_crc(p_1277->g_794.s2, "p_1277->g_794.s2", print_hash_value);
    transparent_crc(p_1277->g_794.s3, "p_1277->g_794.s3", print_hash_value);
    transparent_crc(p_1277->g_794.s4, "p_1277->g_794.s4", print_hash_value);
    transparent_crc(p_1277->g_794.s5, "p_1277->g_794.s5", print_hash_value);
    transparent_crc(p_1277->g_794.s6, "p_1277->g_794.s6", print_hash_value);
    transparent_crc(p_1277->g_794.s7, "p_1277->g_794.s7", print_hash_value);
    transparent_crc(p_1277->g_865.x, "p_1277->g_865.x", print_hash_value);
    transparent_crc(p_1277->g_865.y, "p_1277->g_865.y", print_hash_value);
    transparent_crc(p_1277->g_865.z, "p_1277->g_865.z", print_hash_value);
    transparent_crc(p_1277->g_865.w, "p_1277->g_865.w", print_hash_value);
    transparent_crc(p_1277->g_901.x, "p_1277->g_901.x", print_hash_value);
    transparent_crc(p_1277->g_901.y, "p_1277->g_901.y", print_hash_value);
    transparent_crc(p_1277->g_904.x, "p_1277->g_904.x", print_hash_value);
    transparent_crc(p_1277->g_904.y, "p_1277->g_904.y", print_hash_value);
    transparent_crc(p_1277->g_904.z, "p_1277->g_904.z", print_hash_value);
    transparent_crc(p_1277->g_904.w, "p_1277->g_904.w", print_hash_value);
    transparent_crc(p_1277->g_917.s0, "p_1277->g_917.s0", print_hash_value);
    transparent_crc(p_1277->g_917.s1, "p_1277->g_917.s1", print_hash_value);
    transparent_crc(p_1277->g_917.s2, "p_1277->g_917.s2", print_hash_value);
    transparent_crc(p_1277->g_917.s3, "p_1277->g_917.s3", print_hash_value);
    transparent_crc(p_1277->g_917.s4, "p_1277->g_917.s4", print_hash_value);
    transparent_crc(p_1277->g_917.s5, "p_1277->g_917.s5", print_hash_value);
    transparent_crc(p_1277->g_917.s6, "p_1277->g_917.s6", print_hash_value);
    transparent_crc(p_1277->g_917.s7, "p_1277->g_917.s7", print_hash_value);
    transparent_crc(p_1277->g_917.s8, "p_1277->g_917.s8", print_hash_value);
    transparent_crc(p_1277->g_917.s9, "p_1277->g_917.s9", print_hash_value);
    transparent_crc(p_1277->g_917.sa, "p_1277->g_917.sa", print_hash_value);
    transparent_crc(p_1277->g_917.sb, "p_1277->g_917.sb", print_hash_value);
    transparent_crc(p_1277->g_917.sc, "p_1277->g_917.sc", print_hash_value);
    transparent_crc(p_1277->g_917.sd, "p_1277->g_917.sd", print_hash_value);
    transparent_crc(p_1277->g_917.se, "p_1277->g_917.se", print_hash_value);
    transparent_crc(p_1277->g_917.sf, "p_1277->g_917.sf", print_hash_value);
    transparent_crc(p_1277->g_933, "p_1277->g_933", print_hash_value);
    transparent_crc(p_1277->g_1009.s0, "p_1277->g_1009.s0", print_hash_value);
    transparent_crc(p_1277->g_1009.s1, "p_1277->g_1009.s1", print_hash_value);
    transparent_crc(p_1277->g_1009.s2, "p_1277->g_1009.s2", print_hash_value);
    transparent_crc(p_1277->g_1009.s3, "p_1277->g_1009.s3", print_hash_value);
    transparent_crc(p_1277->g_1009.s4, "p_1277->g_1009.s4", print_hash_value);
    transparent_crc(p_1277->g_1009.s5, "p_1277->g_1009.s5", print_hash_value);
    transparent_crc(p_1277->g_1009.s6, "p_1277->g_1009.s6", print_hash_value);
    transparent_crc(p_1277->g_1009.s7, "p_1277->g_1009.s7", print_hash_value);
    transparent_crc(p_1277->g_1009.s8, "p_1277->g_1009.s8", print_hash_value);
    transparent_crc(p_1277->g_1009.s9, "p_1277->g_1009.s9", print_hash_value);
    transparent_crc(p_1277->g_1009.sa, "p_1277->g_1009.sa", print_hash_value);
    transparent_crc(p_1277->g_1009.sb, "p_1277->g_1009.sb", print_hash_value);
    transparent_crc(p_1277->g_1009.sc, "p_1277->g_1009.sc", print_hash_value);
    transparent_crc(p_1277->g_1009.sd, "p_1277->g_1009.sd", print_hash_value);
    transparent_crc(p_1277->g_1009.se, "p_1277->g_1009.se", print_hash_value);
    transparent_crc(p_1277->g_1009.sf, "p_1277->g_1009.sf", print_hash_value);
    transparent_crc(p_1277->g_1010.x, "p_1277->g_1010.x", print_hash_value);
    transparent_crc(p_1277->g_1010.y, "p_1277->g_1010.y", print_hash_value);
    transparent_crc(p_1277->g_1010.z, "p_1277->g_1010.z", print_hash_value);
    transparent_crc(p_1277->g_1010.w, "p_1277->g_1010.w", print_hash_value);
    transparent_crc(p_1277->g_1013.s0, "p_1277->g_1013.s0", print_hash_value);
    transparent_crc(p_1277->g_1013.s1, "p_1277->g_1013.s1", print_hash_value);
    transparent_crc(p_1277->g_1013.s2, "p_1277->g_1013.s2", print_hash_value);
    transparent_crc(p_1277->g_1013.s3, "p_1277->g_1013.s3", print_hash_value);
    transparent_crc(p_1277->g_1013.s4, "p_1277->g_1013.s4", print_hash_value);
    transparent_crc(p_1277->g_1013.s5, "p_1277->g_1013.s5", print_hash_value);
    transparent_crc(p_1277->g_1013.s6, "p_1277->g_1013.s6", print_hash_value);
    transparent_crc(p_1277->g_1013.s7, "p_1277->g_1013.s7", print_hash_value);
    transparent_crc(p_1277->g_1013.s8, "p_1277->g_1013.s8", print_hash_value);
    transparent_crc(p_1277->g_1013.s9, "p_1277->g_1013.s9", print_hash_value);
    transparent_crc(p_1277->g_1013.sa, "p_1277->g_1013.sa", print_hash_value);
    transparent_crc(p_1277->g_1013.sb, "p_1277->g_1013.sb", print_hash_value);
    transparent_crc(p_1277->g_1013.sc, "p_1277->g_1013.sc", print_hash_value);
    transparent_crc(p_1277->g_1013.sd, "p_1277->g_1013.sd", print_hash_value);
    transparent_crc(p_1277->g_1013.se, "p_1277->g_1013.se", print_hash_value);
    transparent_crc(p_1277->g_1013.sf, "p_1277->g_1013.sf", print_hash_value);
    transparent_crc(p_1277->g_1021.s0, "p_1277->g_1021.s0", print_hash_value);
    transparent_crc(p_1277->g_1021.s1, "p_1277->g_1021.s1", print_hash_value);
    transparent_crc(p_1277->g_1021.s2, "p_1277->g_1021.s2", print_hash_value);
    transparent_crc(p_1277->g_1021.s3, "p_1277->g_1021.s3", print_hash_value);
    transparent_crc(p_1277->g_1021.s4, "p_1277->g_1021.s4", print_hash_value);
    transparent_crc(p_1277->g_1021.s5, "p_1277->g_1021.s5", print_hash_value);
    transparent_crc(p_1277->g_1021.s6, "p_1277->g_1021.s6", print_hash_value);
    transparent_crc(p_1277->g_1021.s7, "p_1277->g_1021.s7", print_hash_value);
    transparent_crc(p_1277->g_1021.s8, "p_1277->g_1021.s8", print_hash_value);
    transparent_crc(p_1277->g_1021.s9, "p_1277->g_1021.s9", print_hash_value);
    transparent_crc(p_1277->g_1021.sa, "p_1277->g_1021.sa", print_hash_value);
    transparent_crc(p_1277->g_1021.sb, "p_1277->g_1021.sb", print_hash_value);
    transparent_crc(p_1277->g_1021.sc, "p_1277->g_1021.sc", print_hash_value);
    transparent_crc(p_1277->g_1021.sd, "p_1277->g_1021.sd", print_hash_value);
    transparent_crc(p_1277->g_1021.se, "p_1277->g_1021.se", print_hash_value);
    transparent_crc(p_1277->g_1021.sf, "p_1277->g_1021.sf", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1277->g_1026[i][j][k], "p_1277->g_1026[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1277->g_1041.s0, "p_1277->g_1041.s0", print_hash_value);
    transparent_crc(p_1277->g_1041.s1, "p_1277->g_1041.s1", print_hash_value);
    transparent_crc(p_1277->g_1041.s2, "p_1277->g_1041.s2", print_hash_value);
    transparent_crc(p_1277->g_1041.s3, "p_1277->g_1041.s3", print_hash_value);
    transparent_crc(p_1277->g_1041.s4, "p_1277->g_1041.s4", print_hash_value);
    transparent_crc(p_1277->g_1041.s5, "p_1277->g_1041.s5", print_hash_value);
    transparent_crc(p_1277->g_1041.s6, "p_1277->g_1041.s6", print_hash_value);
    transparent_crc(p_1277->g_1041.s7, "p_1277->g_1041.s7", print_hash_value);
    transparent_crc(p_1277->g_1041.s8, "p_1277->g_1041.s8", print_hash_value);
    transparent_crc(p_1277->g_1041.s9, "p_1277->g_1041.s9", print_hash_value);
    transparent_crc(p_1277->g_1041.sa, "p_1277->g_1041.sa", print_hash_value);
    transparent_crc(p_1277->g_1041.sb, "p_1277->g_1041.sb", print_hash_value);
    transparent_crc(p_1277->g_1041.sc, "p_1277->g_1041.sc", print_hash_value);
    transparent_crc(p_1277->g_1041.sd, "p_1277->g_1041.sd", print_hash_value);
    transparent_crc(p_1277->g_1041.se, "p_1277->g_1041.se", print_hash_value);
    transparent_crc(p_1277->g_1041.sf, "p_1277->g_1041.sf", print_hash_value);
    transparent_crc(p_1277->g_1153.s0, "p_1277->g_1153.s0", print_hash_value);
    transparent_crc(p_1277->g_1153.s1, "p_1277->g_1153.s1", print_hash_value);
    transparent_crc(p_1277->g_1153.s2, "p_1277->g_1153.s2", print_hash_value);
    transparent_crc(p_1277->g_1153.s3, "p_1277->g_1153.s3", print_hash_value);
    transparent_crc(p_1277->g_1153.s4, "p_1277->g_1153.s4", print_hash_value);
    transparent_crc(p_1277->g_1153.s5, "p_1277->g_1153.s5", print_hash_value);
    transparent_crc(p_1277->g_1153.s6, "p_1277->g_1153.s6", print_hash_value);
    transparent_crc(p_1277->g_1153.s7, "p_1277->g_1153.s7", print_hash_value);
    transparent_crc(p_1277->g_1155.x, "p_1277->g_1155.x", print_hash_value);
    transparent_crc(p_1277->g_1155.y, "p_1277->g_1155.y", print_hash_value);
    transparent_crc(p_1277->g_1156.x, "p_1277->g_1156.x", print_hash_value);
    transparent_crc(p_1277->g_1156.y, "p_1277->g_1156.y", print_hash_value);
    transparent_crc(p_1277->g_1156.z, "p_1277->g_1156.z", print_hash_value);
    transparent_crc(p_1277->g_1156.w, "p_1277->g_1156.w", print_hash_value);
    transparent_crc(p_1277->g_1192.s0, "p_1277->g_1192.s0", print_hash_value);
    transparent_crc(p_1277->g_1192.s1, "p_1277->g_1192.s1", print_hash_value);
    transparent_crc(p_1277->g_1192.s2, "p_1277->g_1192.s2", print_hash_value);
    transparent_crc(p_1277->g_1192.s3, "p_1277->g_1192.s3", print_hash_value);
    transparent_crc(p_1277->g_1192.s4, "p_1277->g_1192.s4", print_hash_value);
    transparent_crc(p_1277->g_1192.s5, "p_1277->g_1192.s5", print_hash_value);
    transparent_crc(p_1277->g_1192.s6, "p_1277->g_1192.s6", print_hash_value);
    transparent_crc(p_1277->g_1192.s7, "p_1277->g_1192.s7", print_hash_value);
    transparent_crc(p_1277->g_1199.s0, "p_1277->g_1199.s0", print_hash_value);
    transparent_crc(p_1277->g_1199.s1, "p_1277->g_1199.s1", print_hash_value);
    transparent_crc(p_1277->g_1199.s2, "p_1277->g_1199.s2", print_hash_value);
    transparent_crc(p_1277->g_1199.s3, "p_1277->g_1199.s3", print_hash_value);
    transparent_crc(p_1277->g_1199.s4, "p_1277->g_1199.s4", print_hash_value);
    transparent_crc(p_1277->g_1199.s5, "p_1277->g_1199.s5", print_hash_value);
    transparent_crc(p_1277->g_1199.s6, "p_1277->g_1199.s6", print_hash_value);
    transparent_crc(p_1277->g_1199.s7, "p_1277->g_1199.s7", print_hash_value);
    transparent_crc(p_1277->g_1205, "p_1277->g_1205", print_hash_value);
    transparent_crc(p_1277->g_1210.x, "p_1277->g_1210.x", print_hash_value);
    transparent_crc(p_1277->g_1210.y, "p_1277->g_1210.y", print_hash_value);
    transparent_crc(p_1277->g_1210.z, "p_1277->g_1210.z", print_hash_value);
    transparent_crc(p_1277->g_1210.w, "p_1277->g_1210.w", print_hash_value);
    transparent_crc(p_1277->g_1250.x, "p_1277->g_1250.x", print_hash_value);
    transparent_crc(p_1277->g_1250.y, "p_1277->g_1250.y", print_hash_value);
    transparent_crc(p_1277->v_collective, "p_1277->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 66; i++)
            transparent_crc(p_1277->g_special_values[i + 66 * get_linear_group_id()], "p_1277->g_special_values[i + 66 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 66; i++)
            transparent_crc(p_1277->l_special_values[i], "p_1277->l_special_values[i]", print_hash_value);
    transparent_crc(p_1277->l_comm_values[get_linear_local_id()], "p_1277->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1277->g_comm_values[get_linear_group_id() * 155 + get_linear_local_id()], "p_1277->g_comm_values[get_linear_group_id() * 155 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
