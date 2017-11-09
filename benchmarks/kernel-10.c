// --atomics 22 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 83,9,10 -l 83,1,2
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

__constant uint32_t permutations[10][166] = {
{32,124,6,118,69,30,127,36,17,54,152,130,47,131,143,162,102,114,7,31,99,61,4,68,73,135,96,113,120,106,46,123,56,117,103,79,86,121,45,63,39,146,11,101,154,64,157,29,77,136,98,52,163,57,74,145,10,116,51,65,66,156,111,150,164,91,72,126,85,12,141,60,165,28,1,139,71,53,155,109,19,38,67,0,55,78,89,151,110,2,80,48,88,115,41,112,59,35,134,82,9,83,125,144,25,142,161,108,149,34,107,3,104,94,153,132,128,84,90,159,122,133,22,8,92,18,16,75,27,97,81,26,21,44,87,158,50,14,20,148,62,129,147,100,24,138,13,119,58,37,105,43,76,15,70,42,93,49,95,33,23,140,40,160,5,137}, // permutation 0
{97,115,80,27,13,135,75,69,34,81,28,39,74,138,48,66,38,68,144,90,158,84,10,120,136,58,92,29,55,57,32,47,93,54,25,64,79,151,129,100,49,96,131,73,140,106,51,159,105,14,91,50,3,9,163,147,133,26,145,71,82,78,22,149,43,2,20,83,94,152,104,56,141,117,87,108,134,153,23,21,103,165,60,15,123,17,154,42,24,146,156,122,40,127,86,119,41,155,6,102,139,110,164,53,5,142,111,99,63,11,33,45,52,59,98,37,18,89,137,114,88,46,19,16,130,12,35,113,116,85,150,160,30,62,31,36,67,101,157,77,118,7,143,107,161,61,95,72,44,70,148,8,4,128,125,1,126,132,112,124,162,109,65,76,121,0}, // permutation 1
{68,85,88,40,123,104,27,113,124,26,117,133,79,132,162,80,84,7,66,42,63,87,146,152,20,142,129,154,107,74,103,147,4,47,89,17,59,163,110,151,93,155,115,8,98,10,128,141,45,157,72,138,50,64,161,44,54,24,57,35,33,2,86,125,109,119,101,3,34,21,90,19,145,144,55,29,38,99,70,6,28,81,83,164,140,165,77,51,121,13,52,73,31,78,37,112,134,43,62,14,9,23,46,96,56,48,137,97,58,39,130,11,126,30,139,158,160,153,100,150,94,76,49,95,106,1,111,114,91,82,12,127,75,61,18,5,71,69,65,156,136,15,159,41,105,143,102,60,16,148,122,67,32,36,131,0,116,22,118,149,135,53,120,25,108,92}, // permutation 2
{31,121,69,57,129,114,78,25,30,97,86,8,37,27,134,11,48,71,157,128,105,148,120,13,104,80,6,107,136,28,19,79,124,39,20,150,10,52,116,43,149,152,96,46,145,119,36,103,88,62,75,160,41,93,72,95,122,70,135,165,61,51,85,102,115,64,7,77,45,12,68,32,63,29,139,83,147,82,18,22,55,140,73,163,49,133,113,53,144,127,15,9,108,94,161,16,123,90,155,33,2,130,59,111,99,35,154,91,66,5,131,137,0,24,151,126,101,74,162,118,164,110,23,21,100,159,84,98,146,17,14,34,112,58,143,156,158,42,26,132,81,109,3,60,4,50,106,40,142,1,47,153,65,117,138,67,44,87,141,38,76,56,89,54,92,125}, // permutation 3
{59,58,141,87,24,22,54,42,163,5,117,34,72,123,97,25,158,116,48,138,13,91,94,7,119,128,162,96,64,89,165,60,92,41,61,143,114,71,49,12,27,120,68,156,78,77,19,70,151,84,118,57,110,3,2,74,28,134,108,86,164,81,8,46,90,40,53,160,127,130,73,33,83,4,50,103,121,111,155,15,18,157,122,113,150,21,144,93,101,107,161,153,38,82,67,36,47,66,131,95,14,139,146,44,149,62,16,124,37,152,65,140,154,115,126,1,142,145,17,20,148,132,32,45,88,136,0,30,35,109,137,23,159,63,85,6,75,26,125,9,98,76,129,135,43,112,11,52,55,39,133,99,80,104,69,105,31,56,102,106,29,147,51,79,100,10}, // permutation 4
{98,34,140,61,41,54,100,157,64,159,68,20,4,105,127,74,63,60,55,85,147,158,149,97,115,151,59,160,26,137,52,17,27,66,23,135,22,46,84,109,29,13,119,94,50,24,93,21,131,5,154,92,48,72,153,10,6,80,136,146,124,163,107,82,134,164,79,58,62,138,39,104,75,69,95,106,116,120,96,42,108,43,123,165,19,36,49,40,51,7,89,132,103,47,117,3,73,102,155,38,162,76,161,87,156,56,28,71,133,142,144,130,122,70,9,14,25,15,90,37,141,143,121,65,32,11,112,128,53,111,150,129,12,30,2,16,110,0,57,78,101,145,8,77,152,44,99,114,125,148,86,1,45,81,67,18,33,88,35,113,83,118,139,31,91,126}, // permutation 5
{57,0,152,84,119,67,37,41,88,65,7,121,143,17,124,97,128,52,34,148,35,49,63,5,144,43,13,117,81,104,21,9,36,137,120,100,90,159,156,32,60,30,105,3,6,58,62,64,27,53,157,162,51,73,19,150,40,25,45,71,59,23,22,155,109,86,103,115,131,165,98,11,127,2,20,93,125,132,38,55,76,135,82,18,24,8,33,151,56,123,108,106,26,133,141,136,74,95,138,154,91,15,102,112,77,78,47,139,149,1,164,28,122,110,79,161,42,153,160,114,69,16,94,116,101,48,134,10,140,54,126,92,46,75,66,68,31,99,146,142,113,107,39,44,130,12,70,14,50,4,158,96,80,89,163,61,83,147,29,85,145,111,87,129,72,118}, // permutation 6
{100,157,124,60,50,149,52,70,96,113,43,165,44,162,77,138,56,67,4,150,89,7,57,92,42,161,14,131,123,94,148,41,32,8,12,154,95,6,76,15,81,163,133,135,20,10,98,59,114,134,120,54,118,152,48,38,3,137,78,72,36,31,66,27,53,82,103,64,26,112,111,75,46,102,71,40,29,115,97,128,55,69,139,86,61,146,2,91,73,99,65,21,37,93,28,106,51,62,101,30,63,17,122,0,158,80,116,153,140,145,9,160,104,143,109,85,90,23,126,144,155,142,33,125,84,18,24,74,107,47,110,1,88,22,34,5,147,13,132,87,127,16,25,151,141,79,58,129,121,49,83,39,45,68,159,156,136,117,108,105,19,119,11,130,164,35}, // permutation 7
{67,135,148,132,58,90,139,107,12,159,6,134,24,106,76,150,91,39,97,50,16,153,121,53,3,80,131,73,152,51,54,119,26,18,36,147,118,11,137,62,7,5,69,161,0,52,63,8,138,85,57,74,13,123,35,45,4,83,70,34,125,130,146,42,22,43,129,32,136,25,29,10,77,111,37,1,49,88,154,114,104,61,160,65,163,28,120,94,149,31,98,9,40,126,145,124,112,143,117,47,96,108,19,59,127,105,102,133,55,162,79,30,165,72,140,110,48,144,64,14,56,113,95,71,38,151,99,15,158,116,141,84,78,89,60,21,68,157,103,156,46,109,27,115,155,164,128,86,81,142,122,17,20,33,41,2,101,44,87,66,23,92,82,93,75,100}, // permutation 8
{91,105,56,28,148,113,100,120,4,31,78,104,65,158,80,133,29,75,129,84,7,90,35,156,62,101,6,88,32,24,95,146,139,23,9,109,138,103,46,119,142,145,66,153,2,151,36,58,85,87,116,42,13,108,70,157,106,102,134,162,20,25,140,97,63,14,21,76,110,53,161,93,130,44,39,61,131,37,52,159,96,45,49,51,112,122,99,128,77,30,154,163,19,121,132,69,38,81,34,92,11,64,12,136,22,152,118,94,114,57,8,60,59,55,83,74,123,164,125,17,107,40,43,98,10,3,82,48,150,18,89,16,5,54,47,155,117,160,41,111,27,1,124,71,33,135,68,165,144,15,0,126,50,147,137,149,67,72,73,141,127,86,79,26,115,143} // permutation 9
};

// Seed: 1828577384

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint8_t  f0;
   uint32_t  f1;
   int32_t  f2;
   uint32_t  f3;
   int64_t  f4;
};

struct S1 {
    int32_t g_2;
    int32_t g_35;
    int64_t g_38;
    struct S0 g_137;
    volatile uint8_t g_149;
    int64_t *g_153;
    int64_t **g_152;
    VECTOR(uint64_t, 4) g_161;
    struct S0 *g_167;
    uint32_t g_170;
    int32_t g_193;
    int32_t *g_192;
    int16_t g_213[6];
    int8_t g_215[2][6];
    int32_t * volatile g_216;
    int32_t **g_225[7][2];
    int8_t *g_254;
    int32_t * volatile g_257;
    VECTOR(int8_t, 4) g_274;
    uint16_t g_276;
    volatile int32_t g_320;
    uint16_t *g_332;
    VECTOR(uint16_t, 4) g_342;
    VECTOR(uint16_t, 8) g_343;
    VECTOR(uint8_t, 8) g_362;
    VECTOR(int8_t, 8) g_363;
    volatile VECTOR(int8_t, 2) g_364;
    volatile VECTOR(int8_t, 8) g_365;
    VECTOR(int64_t, 4) g_379;
    VECTOR(int64_t, 2) g_381;
    volatile VECTOR(int8_t, 8) g_388;
    VECTOR(uint64_t, 2) g_452;
    int32_t g_458;
    VECTOR(int8_t, 4) g_471;
    VECTOR(int8_t, 8) g_479;
    VECTOR(int64_t, 2) g_485;
    int32_t *** volatile g_500;
    uint32_t *g_517;
    uint32_t ** volatile g_516[1][7];
    int64_t g_552;
    struct S0 g_566;
    struct S0 *g_565;
    volatile VECTOR(uint64_t, 8) g_603;
    volatile VECTOR(int64_t, 16) g_616;
    uint8_t g_617;
    int32_t ** volatile g_618;
    int32_t ** volatile g_619;
    struct S0 ** volatile g_624;
    int32_t ** volatile g_661;
    uint64_t **g_662;
    volatile VECTOR(int64_t, 16) g_671;
    VECTOR(uint8_t, 2) g_695;
    volatile VECTOR(uint32_t, 2) g_708;
    int32_t ** volatile g_710[5][5];
    int32_t ** volatile g_711;
    uint8_t g_712;
    volatile uint32_t g_775;
    VECTOR(uint8_t, 4) g_798;
    volatile VECTOR(int8_t, 16) g_821;
    uint16_t g_852;
    VECTOR(int64_t, 8) g_858;
    uint64_t g_931;
    int32_t g_968[7];
    uint16_t g_981;
    VECTOR(uint8_t, 16) g_984;
    VECTOR(int32_t, 8) g_999;
    VECTOR(int32_t, 8) g_1015;
    volatile VECTOR(int32_t, 2) g_1016;
    VECTOR(uint8_t, 8) g_1050;
    VECTOR(int8_t, 4) g_1066;
    int32_t g_1096;
    volatile uint8_t g_1102;
    volatile VECTOR(int32_t, 2) g_1105;
    VECTOR(int32_t, 4) g_1106;
    VECTOR(int32_t, 2) g_1114;
    uint64_t g_1122[4];
    int32_t g_1128[3][10];
    VECTOR(int64_t, 8) g_1141;
    VECTOR(int32_t, 2) g_1181;
    VECTOR(uint64_t, 2) g_1198;
    volatile VECTOR(int64_t, 4) g_1200;
    VECTOR(int32_t, 8) g_1208;
    volatile VECTOR(uint32_t, 4) g_1215;
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
uint16_t  func_1(struct S1 * p_1216);
int16_t  func_7(uint64_t  p_8, int32_t  p_9, uint32_t  p_10, struct S1 * p_1216);
uint64_t  func_11(uint32_t  p_12, uint8_t  p_13, uint8_t  p_14, struct S1 * p_1216);
uint32_t  func_15(int32_t  p_16, struct S1 * p_1216);
int32_t  func_29(int64_t  p_30, struct S1 * p_1216);
struct S0 * func_108(int64_t * p_109, int64_t ** p_110, int32_t * p_111, struct S1 * p_1216);
int64_t * func_112(int32_t * p_113, struct S0 * p_114, struct S1 * p_1216);
int32_t * func_115(uint32_t  p_116, int64_t * p_117, int64_t  p_118, struct S1 * p_1216);
struct S0  func_129(int16_t  p_130, int64_t * p_131, int64_t ** p_132, struct S1 * p_1216);
int64_t * func_133(int32_t * p_134, struct S0 * p_135, struct S1 * p_1216);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1216->g_2
 * writes: p_1216->g_2
 */
uint16_t  func_1(struct S1 * p_1216)
{ /* block id: 4 */
    int64_t l_36 = 1L;
    VECTOR(int32_t, 2) l_106 = (VECTOR(int32_t, 2))(0L, 0L);
    int32_t l_107 = (-1L);
    int i;
    for (p_1216->g_2 = 0; (p_1216->g_2 >= (-16)); p_1216->g_2 = safe_sub_func_uint8_t_u_u(p_1216->g_2, 4))
    { /* block id: 7 */
        uint32_t l_33 = 4294967295UL;
        int32_t *l_34[10][9] = {{&p_1216->g_2,&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35}};
        int64_t *l_37 = &p_1216->g_38;
        uint64_t *l_1095[3];
        uint16_t l_1097 = 65533UL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1095[i] = (void*)0;
        (1 + 1);
    }
    return l_36;
}


/* ------------------------------------------ */
/* 
 * reads : p_1216->g_1102 p_1216->g_254 p_1216->g_215 p_1216->g_257 p_1216->g_193 p_1216->g_1105 p_1216->g_1106 p_1216->g_1114 p_1216->g_1016 p_1216->g_153 p_1216->g_379 p_1216->g_517 p_1216->g_170 p_1216->g_216 p_1216->g_332 p_1216->g_276 p_1216->g_452 p_1216->g_1141 p_1216->g_931 p_1216->g_343 p_1216->g_365 p_1216->g_1181 p_1216->g_1198 p_1216->g_1200 p_1216->g_616 p_1216->g_712 p_1216->g_213 p_1216->g_1208 p_1216->g_1215 p_1216->g_999 p_1216->g_852
 * writes: p_1216->g_1102 p_1216->g_193 p_1216->g_213 p_1216->g_161 p_1216->g_1128 p_1216->g_931 p_1216->g_276 p_1216->g_215
 */
int16_t  func_7(uint64_t  p_8, int32_t  p_9, uint32_t  p_10, struct S1 * p_1216)
{ /* block id: 500 */
    int64_t l_1098 = (-3L);
    int16_t l_1099 = (-1L);
    int32_t l_1100 = (-1L);
    int32_t *l_1101[8][10][3] = {{{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0}},{{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0}},{{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0}},{{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0}},{{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0}},{{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0}},{{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0}},{{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0},{&p_1216->g_2,&p_1216->g_2,(void*)0}}};
    uint32_t **l_1111 = &p_1216->g_517;
    uint32_t ***l_1112 = (void*)0;
    uint32_t ***l_1113 = &l_1111;
    uint64_t *l_1121 = &p_1216->g_1122[1];
    int16_t l_1123 = (-1L);
    int16_t *l_1124 = &p_1216->g_213[0];
    uint64_t *l_1125 = (void*)0;
    int16_t *l_1126 = &l_1099;
    int32_t l_1127 = 0x0CED4E91L;
    VECTOR(int32_t, 16) l_1132 = (VECTOR(int32_t, 16))(0x3FA907E5L, (VECTOR(int32_t, 4))(0x3FA907E5L, (VECTOR(int32_t, 2))(0x3FA907E5L, 0x55EB915EL), 0x55EB915EL), 0x55EB915EL, 0x3FA907E5L, 0x55EB915EL, (VECTOR(int32_t, 2))(0x3FA907E5L, 0x55EB915EL), (VECTOR(int32_t, 2))(0x3FA907E5L, 0x55EB915EL), 0x3FA907E5L, 0x55EB915EL, 0x3FA907E5L, 0x55EB915EL);
    VECTOR(int32_t, 8) l_1180 = (VECTOR(int32_t, 8))(0x14655CD0L, (VECTOR(int32_t, 4))(0x14655CD0L, (VECTOR(int32_t, 2))(0x14655CD0L, 0x37AF1B1FL), 0x37AF1B1FL), 0x37AF1B1FL, 0x14655CD0L, 0x37AF1B1FL);
    int32_t ***l_1185[7][9] = {{&p_1216->g_225[6][0],(void*)0,&p_1216->g_225[5][0],(void*)0,&p_1216->g_225[6][0],&p_1216->g_225[6][0],(void*)0,&p_1216->g_225[5][0],(void*)0},{&p_1216->g_225[6][0],(void*)0,&p_1216->g_225[5][0],(void*)0,&p_1216->g_225[6][0],&p_1216->g_225[6][0],(void*)0,&p_1216->g_225[5][0],(void*)0},{&p_1216->g_225[6][0],(void*)0,&p_1216->g_225[5][0],(void*)0,&p_1216->g_225[6][0],&p_1216->g_225[6][0],(void*)0,&p_1216->g_225[5][0],(void*)0},{&p_1216->g_225[6][0],(void*)0,&p_1216->g_225[5][0],(void*)0,&p_1216->g_225[6][0],&p_1216->g_225[6][0],(void*)0,&p_1216->g_225[5][0],(void*)0},{&p_1216->g_225[6][0],(void*)0,&p_1216->g_225[5][0],(void*)0,&p_1216->g_225[6][0],&p_1216->g_225[6][0],(void*)0,&p_1216->g_225[5][0],(void*)0},{&p_1216->g_225[6][0],(void*)0,&p_1216->g_225[5][0],(void*)0,&p_1216->g_225[6][0],&p_1216->g_225[6][0],(void*)0,&p_1216->g_225[5][0],(void*)0},{&p_1216->g_225[6][0],(void*)0,&p_1216->g_225[5][0],(void*)0,&p_1216->g_225[6][0],&p_1216->g_225[6][0],(void*)0,&p_1216->g_225[5][0],(void*)0}};
    int32_t ****l_1184 = &l_1185[3][0];
    VECTOR(int64_t, 2) l_1199 = (VECTOR(int64_t, 2))((-1L), (-1L));
    VECTOR(int64_t, 8) l_1202 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
    VECTOR(int32_t, 16) l_1205 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-1L)), (-1L)), (-1L), 2L, (-1L), (VECTOR(int32_t, 2))(2L, (-1L)), (VECTOR(int32_t, 2))(2L, (-1L)), 2L, (-1L), 2L, (-1L));
    VECTOR(int32_t, 8) l_1206 = (VECTOR(int32_t, 8))(0x18A7F146L, (VECTOR(int32_t, 4))(0x18A7F146L, (VECTOR(int32_t, 2))(0x18A7F146L, 0x500A9732L), 0x500A9732L), 0x500A9732L, 0x18A7F146L, 0x500A9732L);
    VECTOR(int32_t, 16) l_1207 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2CD80F0AL), 0x2CD80F0AL), 0x2CD80F0AL, (-1L), 0x2CD80F0AL, (VECTOR(int32_t, 2))((-1L), 0x2CD80F0AL), (VECTOR(int32_t, 2))((-1L), 0x2CD80F0AL), (-1L), 0x2CD80F0AL, (-1L), 0x2CD80F0AL);
    struct S0 l_1213 = {0x31L,4294967286UL,0L,0x1EE33E9DL,0L};
    int i, j, k;
    p_1216->g_1102--;
    (*p_1216->g_257) |= (p_8 && (*p_1216->g_254));
    if ((!((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x55FD757CL, (-7L))).yxxyyxyxyxyyxxyy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(0x624C799EL, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_1216->g_1105.xxyxxxyxyxxyxxyx)).sabd1)).lo, ((VECTOR(int32_t, 16))(p_1216->g_1106.wzwxwyzzyzywzywx)).s44))), ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x2A97DB70L, (p_1216->g_1128[1][2] = (l_1127 = (safe_lshift_func_int16_t_s_s(((*l_1126) ^= ((((VECTOR(uint64_t, 2))(0x6B4E24E06C5E5BC8L, 0UL)).even & (p_1216->g_161.y = (!((safe_mod_func_uint32_t_u_u((((*l_1113) = l_1111) == (void*)0), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(p_1216->g_1114.xx)), (int32_t)(safe_lshift_func_int16_t_s_s(((*l_1124) = (((safe_rshift_func_uint8_t_u_s(p_1216->g_1016.x, (+1L))) , (safe_mul_func_uint8_t_u_u((((p_1216->g_153 == &p_8) <= ((l_1121 = l_1121) == (void*)0)) > l_1123), 0x3FL))) ^ p_1216->g_379.z)), 8))))).yyxx)), ((VECTOR(int32_t, 4))(0x51E966C9L)), ((VECTOR(int32_t, 4))(0x0C2296FDL)), p_9, p_8, 0x3FFC209DL, 1L)).odd)))).hi)))).w)) , 0x9584B588117FE7C2L)))) == (*p_1216->g_517))), 0)))), 0x2E908BD7L, (-1L))))), ((VECTOR(int32_t, 4))(0x767C7658L))))), 0x770CBBD3L)), ((VECTOR(int32_t, 8))(0x7E5BB6E3L)), ((VECTOR(int32_t, 8))((-1L)))))).s3172343230776426))))).s7bb8)).z))
    { /* block id: 510 */
        uint32_t l_1129 = 0x531191C9L;
        uint64_t ***l_1130 = &p_1216->g_662;
        int32_t l_1131 = 0L;
        uint64_t *l_1142 = (void*)0;
        uint64_t *l_1143 = (void*)0;
        uint64_t *l_1144 = (void*)0;
        uint64_t *l_1145 = &p_1216->g_931;
        int32_t *l_1177 = &p_1216->g_137.f2;
        uint8_t l_1178 = 0xA2L;
        atomic_add(&p_1216->g_atomic_reduction[get_linear_group_id()], ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(0x762F0CF4L, l_1129, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))((*p_1216->g_216), p_10, (-1L), (-1L), 1L, 0x1D0F12F1L, 0x6963C254L, 0x06F40856L)).even, (int32_t)(l_1131 ^= (l_1130 == (void*)0))))), ((VECTOR(int32_t, 2))(l_1132.sf3)), 0x0B76BF84L, 0L)), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x4382CAABL, (l_1129 > ((*l_1145) |= (safe_div_func_uint16_t_u_u(((*p_1216->g_332) < ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(p_1216->g_452.y, 0)), 3)) , (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(p_1216->g_1141.s1124753564040546)).s90)).hi, 0x104FE32E6FD6F7EFL)))), p_10)))), 0x495BEC4FL, (-7L))).yxzyyxzz)).odd, ((VECTOR(int32_t, 4))(0x0C342BAFL))))).y, 0x39A1E4CDL, p_10, ((VECTOR(int32_t, 2))(0x5D2D2EA8L)), 0x12000325L)).s0b2f, ((VECTOR(int32_t, 4))((-2L))), ((VECTOR(int32_t, 4))(0x05013FEAL))))).zxzwzzzwyzywywzw)).s5f5d)), 0x3D774C5BL, (-1L), 0x5D2B051AL, 0x3433AB3CL)).s7 + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1216->v_collective += p_1216->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        l_1131 ^= (&p_1216->g_332 == (void*)0);
        l_1178 ^= ((p_1216->g_343.s4 & (l_1131 = 0x295CL)) ^ (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((l_1129 , (safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(l_1129, GROUP_DIVERGE(0, 1))), (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((*p_1216->g_332)--), 7)), 0x10L))))) , (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u((*p_1216->g_517))), p_1216->g_365.s5)), (safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_1216->local_2_offset, get_local_id(2), 10), (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((l_1177 == &l_1127), GROUP_DIVERGE(2, 1))), p_8)))), p_9))))), p_8)), p_10)), 7)), p_10)));
    }
    else
    { /* block id: 518 */
        VECTOR(int32_t, 2) l_1179 = (VECTOR(int32_t, 2))(0x6CEE61A3L, (-1L));
        uint32_t l_1201 = 0x83DF0A71L;
        int i;
        l_1179.y = ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_1179.xxxyyxyyxxyxxxyx)))).sca, ((VECTOR(int32_t, 2))(l_1180.s61)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(p_1216->g_1181.xyyyxyyyxyyyyxxx)).s0f)).xyyy)), (safe_sub_func_int32_t_s_s((GROUP_DIVERGE(1, 1) ^ ((l_1184 == &l_1185[3][0]) | (safe_div_func_int16_t_s_s(((*l_1124) |= ((p_9 <= (((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(((void*)0 == &p_1216->g_1122[1]), (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((0x4B7CL || (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 8))(p_1216->g_1198.yyxxxxxx)), ((VECTOR(uint64_t, 2))(0xD158C61CFE7B0BBAL, 0xBFED19E769A2108EL)).xyyxyyyx, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_1199.xxxx)))).odd, ((VECTOR(int64_t, 8))(p_1216->g_1200.yywzyyzy)).s44))), (((((*p_1216->g_254) = (((p_1216->g_616.s4 > l_1201) && ((0L < 0x44E24D84L) && p_9)) <= p_9)) != p_1216->g_712) != p_9) || p_1216->g_1181.y), 0xA4D26AB82A840C74L, 1UL, ((VECTOR(uint64_t, 2))(0UL)), 0x3741881CA19CE4F6L))))))).s1 || p_10)) & 0x3679L), (*p_1216->g_332))), 1)))) , l_1202.s0), 2)), p_10)) > p_9) < p_9)) == 0xB5BAE966CD2DD492L)), p_9)))), p_10)), ((VECTOR(int32_t, 2))((-5L))), 0x285701F1L)).s20))).even;
    }
    (*p_1216->g_257) = ((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(1L, (-1L))), ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_1205.sc0338f3a4d6df4ec)).even, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_1206.s5407)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1207.sef5e)).zxyyxxwxyzzxwyzy)).s387f))).yxzxwxxx, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_1216->g_1208.s20)).xxxyyxyy)).hi, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))((safe_mul_func_int8_t_s_s(((0xA40CCC311756A8BFL && 0x503269D4A1F1D02FL) | ((l_1213 , (safe_unary_minus_func_uint32_t_u(FAKE_DIVERGE(p_1216->global_1_offset, get_global_id(1), 10)))) < (p_1216->g_452.y , (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_1216->g_1215.wy)).yxyyxxyyyyyxyyxx)).s7 < (((((l_1126 == (p_1216->g_999.s2 , l_1126)) < 1L) , 0xE81C0C6EL) , p_9) != FAKE_DIVERGE(p_1216->global_2_offset, get_global_id(2), 10)))))), p_1216->g_852)), (-5L), 5L, 1L)).wzxywxxx, ((VECTOR(int32_t, 8))(0x768E4D4CL))))).even, ((VECTOR(int32_t, 4))(1L))))).zwzwxxwz))).s23))).xxyyyxxyxyyyyyyx)).s12, ((VECTOR(int32_t, 2))((-1L)))))).even, 0x0031FCACL)) & 0x78L);
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_1216->g_38 p_1216->g_149 p_1216->g_152 p_1216->g_161 p_1216->g_137 p_1216->g_170 p_1216->g_153 p_1216->g_35 p_1216->g_2 p_1216->g_215 p_1216->g_216 p_1216->g_193 p_1216->g_213 p_1216->g_257 p_1216->g_167 p_1216->g_254 p_1216->g_274 p_1216->g_276 p_1216->g_192 p_1216->g_342 p_1216->g_343 p_1216->g_362 p_1216->g_363 p_1216->g_364 p_1216->g_365 p_1216->g_379 p_1216->g_381 p_1216->g_388 p_1216->g_452 p_1216->g_332 p_1216->g_500 p_1216->g_comm_values p_1216->g_516 p_1216->g_485 p_1216->g_565 p_1216->g_566.f3 p_1216->g_320 p_1216->g_603 p_1216->g_566.f4 p_1216->g_517 p_1216->g_617 p_1216->g_618 p_1216->g_619 p_1216->g_662 p_1216->g_671 p_1216->g_566.f0 p_1216->g_695 p_1216->g_711 p_1216->g_479 p_1216->g_471 p_1216->l_comm_values p_1216->g_775 p_1216->g_798 p_1216->g_566.f1 p_1216->g_821 p_1216->g_458 p_1216->g_552 p_1216->g_708 p_1216->g_566.f2 p_1216->g_1015 p_1216->g_1016 p_1216->g_1050 p_1216->g_1066 p_1216->g_968
 * writes: p_1216->g_149 p_1216->g_153 p_1216->g_35 p_1216->g_167 p_1216->g_137 p_1216->g_170 p_1216->g_192 p_1216->g_38 p_1216->g_213 p_1216->g_215 p_1216->g_193 p_1216->g_225 p_1216->g_254 p_1216->g_276 p_1216->g_332 p_1216->g_161 p_1216->g_274 p_1216->g_458 p_1216->g_566 p_1216->g_565 p_1216->g_381 p_1216->g_712 p_1216->g_comm_values p_1216->g_858 p_1216->g_379 p_1216->g_342 p_1216->g_931 p_1216->g_968
 */
uint64_t  func_11(uint32_t  p_12, uint8_t  p_13, uint8_t  p_14, struct S1 * p_1216)
{ /* block id: 68 */
    uint32_t l_121 = 0UL;
    VECTOR(int64_t, 16) l_122 = (VECTOR(int64_t, 16))(0x0D40F6A6AC0F502BL, (VECTOR(int64_t, 4))(0x0D40F6A6AC0F502BL, (VECTOR(int64_t, 2))(0x0D40F6A6AC0F502BL, 0x309B231F37C5CFF5L), 0x309B231F37C5CFF5L), 0x309B231F37C5CFF5L, 0x0D40F6A6AC0F502BL, 0x309B231F37C5CFF5L, (VECTOR(int64_t, 2))(0x0D40F6A6AC0F502BL, 0x309B231F37C5CFF5L), (VECTOR(int64_t, 2))(0x0D40F6A6AC0F502BL, 0x309B231F37C5CFF5L), 0x0D40F6A6AC0F502BL, 0x309B231F37C5CFF5L, 0x0D40F6A6AC0F502BL, 0x309B231F37C5CFF5L);
    VECTOR(int64_t, 8) l_123 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
    int32_t *l_126 = &p_1216->g_35;
    struct S0 *l_136[7] = {&p_1216->g_137,&p_1216->g_137,&p_1216->g_137,&p_1216->g_137,&p_1216->g_137,&p_1216->g_137,&p_1216->g_137};
    int64_t *l_551[3];
    struct S0 **l_625 = &p_1216->g_565;
    uint32_t **l_665 = &p_1216->g_517;
    int32_t ***l_672 = &p_1216->g_225[5][0];
    VECTOR(int16_t, 4) l_688 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L));
    uint64_t l_696 = 0x7E62AA7D118F5D68L;
    VECTOR(uint64_t, 16) l_697 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x15B9762A74CF168CL), 0x15B9762A74CF168CL), 0x15B9762A74CF168CL, 0UL, 0x15B9762A74CF168CL, (VECTOR(uint64_t, 2))(0UL, 0x15B9762A74CF168CL), (VECTOR(uint64_t, 2))(0UL, 0x15B9762A74CF168CL), 0UL, 0x15B9762A74CF168CL, 0UL, 0x15B9762A74CF168CL);
    uint64_t l_698 = 0x3FE42BB87B37FD24L;
    uint32_t l_701 = 0x26740C3FL;
    int16_t l_722[1];
    int32_t l_736 = 0L;
    VECTOR(int32_t, 16) l_763 = (VECTOR(int32_t, 16))(0x5B5E3C17L, (VECTOR(int32_t, 4))(0x5B5E3C17L, (VECTOR(int32_t, 2))(0x5B5E3C17L, (-8L)), (-8L)), (-8L), 0x5B5E3C17L, (-8L), (VECTOR(int32_t, 2))(0x5B5E3C17L, (-8L)), (VECTOR(int32_t, 2))(0x5B5E3C17L, (-8L)), 0x5B5E3C17L, (-8L), 0x5B5E3C17L, (-8L));
    uint16_t *l_770 = &p_1216->g_276;
    uint8_t l_774 = 0x6EL;
    int64_t *l_776 = &p_1216->g_552;
    VECTOR(uint8_t, 8) l_797 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
    VECTOR(int8_t, 4) l_804 = (VECTOR(int8_t, 4))(0x38L, (VECTOR(int8_t, 2))(0x38L, 0x37L), 0x37L);
    VECTOR(int8_t, 4) l_805 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x4CL), 0x4CL);
    int32_t *l_808[10] = {&p_1216->g_35,(void*)0,&l_736,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&l_736,(void*)0,&p_1216->g_35};
    int32_t **l_817[1][7][5] = {{{&l_808[8],&l_808[8],&l_808[8],&l_808[8],&l_808[8]},{&l_808[8],&l_808[8],&l_808[8],&l_808[8],&l_808[8]},{&l_808[8],&l_808[8],&l_808[8],&l_808[8],&l_808[8]},{&l_808[8],&l_808[8],&l_808[8],&l_808[8],&l_808[8]},{&l_808[8],&l_808[8],&l_808[8],&l_808[8],&l_808[8]},{&l_808[8],&l_808[8],&l_808[8],&l_808[8],&l_808[8]},{&l_808[8],&l_808[8],&l_808[8],&l_808[8],&l_808[8]}}};
    VECTOR(int64_t, 4) l_847 = (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 0x10026A674904DB6CL), 0x10026A674904DB6CL);
    int16_t l_949 = 0x0760L;
    VECTOR(uint8_t, 4) l_985 = (VECTOR(uint8_t, 4))(0xABL, (VECTOR(uint8_t, 2))(0xABL, 0x6DL), 0x6DL);
    VECTOR(int16_t, 2) l_1003 = (VECTOR(int16_t, 2))(0x0CAFL, 0x3D04L);
    uint16_t l_1026 = 9UL;
    struct S0 *l_1049 = (void*)0;
    struct S0 *l_1094 = &p_1216->g_137;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_551[i] = &p_1216->g_552;
    for (i = 0; i < 1; i++)
        l_722[i] = 4L;
    (*l_625) = func_108(func_112(func_115((safe_mod_func_int64_t_s_s(l_121, ((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x76DA58D7D704ADF1L, (-1L))).xxyxxxxy)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_122.se1ea3a65f83de727)).lo))))).s31)).yyyy, ((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 2))(0x002A5F00511DE033L, 0x12986392380DBE1DL)).yxxxyyxyxyxyyyxx, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_123.s60563537)).s7012754575703503)).s0a)), 0L, (-8L))))).zyyxywwxyyzxzwwy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x465B12CC52EBE5BDL, 1L)).xxyy)), 0x73BA691A8147CEE3L, (l_123.s0 < l_121), 0x45815B4C5A253C7AL, 0x7720A13F4F6D3507L)).even, ((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 4))(((safe_lshift_func_int8_t_s_s((l_126 != l_126), (safe_sub_func_int32_t_s_s(((*l_126) = ((func_129(p_1216->g_38, func_133(l_126, l_136[5], p_1216), p_1216->g_152, p_1216) , (*l_126)) >= p_12)), p_1216->g_485.y)))) || 1L), ((VECTOR(int64_t, 2))(0x7B78B40823731E4AL)), 0x2411EB4C31AC1C3DL)).xyxzxyyx, ((VECTOR(int64_t, 8))(7L))))).even, ((VECTOR(int64_t, 4))(0x506300AD09A24E2DL))))), 0L, 0x40D2E58048B3CCE9L, ((VECTOR(int64_t, 8))(0x370E2DAEDB0B1B4DL)), 0L, (-3L)))))).hi, ((VECTOR(int64_t, 8))((-7L)))))).odd))).z)), l_551[0], p_1216->g_452.x, p_1216), p_1216->g_565, p_1216), p_1216->g_152, l_126, p_1216);
    if ((atomic_inc(&p_1216->g_atomic_input[22 * get_linear_group_id() + 13]) == 5))
    { /* block id: 279 */
        VECTOR(int32_t, 4) l_626 = (VECTOR(int32_t, 4))(0x67FAA25FL, (VECTOR(int32_t, 2))(0x67FAA25FL, (-4L)), (-4L));
        VECTOR(int32_t, 4) l_627 = (VECTOR(int32_t, 4))(0x5F464549L, (VECTOR(int32_t, 2))(0x5F464549L, 1L), 1L);
        VECTOR(int32_t, 4) l_628 = (VECTOR(int32_t, 4))(0x7129F9E7L, (VECTOR(int32_t, 2))(0x7129F9E7L, 0x0CEB1085L), 0x0CEB1085L);
        VECTOR(int32_t, 16) l_629 = (VECTOR(int32_t, 16))(0x0D905718L, (VECTOR(int32_t, 4))(0x0D905718L, (VECTOR(int32_t, 2))(0x0D905718L, (-10L)), (-10L)), (-10L), 0x0D905718L, (-10L), (VECTOR(int32_t, 2))(0x0D905718L, (-10L)), (VECTOR(int32_t, 2))(0x0D905718L, (-10L)), 0x0D905718L, (-10L), 0x0D905718L, (-10L));
        uint16_t l_630 = 0x0229L;
        int64_t l_631 = 0x70739DC731B1FD33L;
        int32_t l_632 = 0x0EA98405L;
        VECTOR(int32_t, 4) l_633 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2EE5B14BL), 0x2EE5B14BL);
        VECTOR(int32_t, 8) l_634 = (VECTOR(int32_t, 8))(0x04E13E26L, (VECTOR(int32_t, 4))(0x04E13E26L, (VECTOR(int32_t, 2))(0x04E13E26L, (-1L)), (-1L)), (-1L), 0x04E13E26L, (-1L));
        VECTOR(int16_t, 8) l_635 = (VECTOR(int16_t, 8))(0x0738L, (VECTOR(int16_t, 4))(0x0738L, (VECTOR(int16_t, 2))(0x0738L, 0x1026L), 0x1026L), 0x1026L, 0x0738L, 0x1026L);
        VECTOR(int16_t, 4) l_636 = (VECTOR(int16_t, 4))(0x5CB9L, (VECTOR(int16_t, 2))(0x5CB9L, 0L), 0L);
        VECTOR(int16_t, 2) l_637 = (VECTOR(int16_t, 2))(0x75DFL, (-2L));
        int32_t l_638 = 0x241B7AD6L;
        VECTOR(int16_t, 16) l_639 = (VECTOR(int16_t, 16))(0x25FFL, (VECTOR(int16_t, 4))(0x25FFL, (VECTOR(int16_t, 2))(0x25FFL, 7L), 7L), 7L, 0x25FFL, 7L, (VECTOR(int16_t, 2))(0x25FFL, 7L), (VECTOR(int16_t, 2))(0x25FFL, 7L), 0x25FFL, 7L, 0x25FFL, 7L);
        VECTOR(uint16_t, 2) l_640 = (VECTOR(uint16_t, 2))(0x1D00L, 1UL);
        struct S0 l_641[9][8] = {{{0UL,0x9BA3B8D1L,0L,0x88C4C3ACL,0x632082CC50967F2DL},{0xE2L,3UL,0x1EF85320L,4294967295UL,0x0EA2AB0DBC17A639L},{0x93L,0x0E263330L,-1L,0x5B2260C7L,0x2218322B58D1059EL},{0xB2L,4294967295UL,1L,0x63428B1AL,0x301E1FE0B28D5FC3L},{0x16L,4294967287UL,-1L,0UL,0x1749C19FD3B19F35L},{0UL,4294967295UL,0x72D295F1L,4294967295UL,0x53D25BB60D9E6853L},{0xF2L,0xDDC22843L,0x14052233L,0UL,2L},{0xC8L,0xB652A3A7L,-6L,1UL,0x6AAE4A1122089C5BL}},{{0UL,0x9BA3B8D1L,0L,0x88C4C3ACL,0x632082CC50967F2DL},{0xE2L,3UL,0x1EF85320L,4294967295UL,0x0EA2AB0DBC17A639L},{0x93L,0x0E263330L,-1L,0x5B2260C7L,0x2218322B58D1059EL},{0xB2L,4294967295UL,1L,0x63428B1AL,0x301E1FE0B28D5FC3L},{0x16L,4294967287UL,-1L,0UL,0x1749C19FD3B19F35L},{0UL,4294967295UL,0x72D295F1L,4294967295UL,0x53D25BB60D9E6853L},{0xF2L,0xDDC22843L,0x14052233L,0UL,2L},{0xC8L,0xB652A3A7L,-6L,1UL,0x6AAE4A1122089C5BL}},{{0UL,0x9BA3B8D1L,0L,0x88C4C3ACL,0x632082CC50967F2DL},{0xE2L,3UL,0x1EF85320L,4294967295UL,0x0EA2AB0DBC17A639L},{0x93L,0x0E263330L,-1L,0x5B2260C7L,0x2218322B58D1059EL},{0xB2L,4294967295UL,1L,0x63428B1AL,0x301E1FE0B28D5FC3L},{0x16L,4294967287UL,-1L,0UL,0x1749C19FD3B19F35L},{0UL,4294967295UL,0x72D295F1L,4294967295UL,0x53D25BB60D9E6853L},{0xF2L,0xDDC22843L,0x14052233L,0UL,2L},{0xC8L,0xB652A3A7L,-6L,1UL,0x6AAE4A1122089C5BL}},{{0UL,0x9BA3B8D1L,0L,0x88C4C3ACL,0x632082CC50967F2DL},{0xE2L,3UL,0x1EF85320L,4294967295UL,0x0EA2AB0DBC17A639L},{0x93L,0x0E263330L,-1L,0x5B2260C7L,0x2218322B58D1059EL},{0xB2L,4294967295UL,1L,0x63428B1AL,0x301E1FE0B28D5FC3L},{0x16L,4294967287UL,-1L,0UL,0x1749C19FD3B19F35L},{0UL,4294967295UL,0x72D295F1L,4294967295UL,0x53D25BB60D9E6853L},{0xF2L,0xDDC22843L,0x14052233L,0UL,2L},{0xC8L,0xB652A3A7L,-6L,1UL,0x6AAE4A1122089C5BL}},{{0UL,0x9BA3B8D1L,0L,0x88C4C3ACL,0x632082CC50967F2DL},{0xE2L,3UL,0x1EF85320L,4294967295UL,0x0EA2AB0DBC17A639L},{0x93L,0x0E263330L,-1L,0x5B2260C7L,0x2218322B58D1059EL},{0xB2L,4294967295UL,1L,0x63428B1AL,0x301E1FE0B28D5FC3L},{0x16L,4294967287UL,-1L,0UL,0x1749C19FD3B19F35L},{0UL,4294967295UL,0x72D295F1L,4294967295UL,0x53D25BB60D9E6853L},{0xF2L,0xDDC22843L,0x14052233L,0UL,2L},{0xC8L,0xB652A3A7L,-6L,1UL,0x6AAE4A1122089C5BL}},{{0UL,0x9BA3B8D1L,0L,0x88C4C3ACL,0x632082CC50967F2DL},{0xE2L,3UL,0x1EF85320L,4294967295UL,0x0EA2AB0DBC17A639L},{0x93L,0x0E263330L,-1L,0x5B2260C7L,0x2218322B58D1059EL},{0xB2L,4294967295UL,1L,0x63428B1AL,0x301E1FE0B28D5FC3L},{0x16L,4294967287UL,-1L,0UL,0x1749C19FD3B19F35L},{0UL,4294967295UL,0x72D295F1L,4294967295UL,0x53D25BB60D9E6853L},{0xF2L,0xDDC22843L,0x14052233L,0UL,2L},{0xC8L,0xB652A3A7L,-6L,1UL,0x6AAE4A1122089C5BL}},{{0UL,0x9BA3B8D1L,0L,0x88C4C3ACL,0x632082CC50967F2DL},{0xE2L,3UL,0x1EF85320L,4294967295UL,0x0EA2AB0DBC17A639L},{0x93L,0x0E263330L,-1L,0x5B2260C7L,0x2218322B58D1059EL},{0xB2L,4294967295UL,1L,0x63428B1AL,0x301E1FE0B28D5FC3L},{0x16L,4294967287UL,-1L,0UL,0x1749C19FD3B19F35L},{0UL,4294967295UL,0x72D295F1L,4294967295UL,0x53D25BB60D9E6853L},{0xF2L,0xDDC22843L,0x14052233L,0UL,2L},{0xC8L,0xB652A3A7L,-6L,1UL,0x6AAE4A1122089C5BL}},{{0UL,0x9BA3B8D1L,0L,0x88C4C3ACL,0x632082CC50967F2DL},{0xE2L,3UL,0x1EF85320L,4294967295UL,0x0EA2AB0DBC17A639L},{0x93L,0x0E263330L,-1L,0x5B2260C7L,0x2218322B58D1059EL},{0xB2L,4294967295UL,1L,0x63428B1AL,0x301E1FE0B28D5FC3L},{0x16L,4294967287UL,-1L,0UL,0x1749C19FD3B19F35L},{0UL,4294967295UL,0x72D295F1L,4294967295UL,0x53D25BB60D9E6853L},{0xF2L,0xDDC22843L,0x14052233L,0UL,2L},{0xC8L,0xB652A3A7L,-6L,1UL,0x6AAE4A1122089C5BL}},{{0UL,0x9BA3B8D1L,0L,0x88C4C3ACL,0x632082CC50967F2DL},{0xE2L,3UL,0x1EF85320L,4294967295UL,0x0EA2AB0DBC17A639L},{0x93L,0x0E263330L,-1L,0x5B2260C7L,0x2218322B58D1059EL},{0xB2L,4294967295UL,1L,0x63428B1AL,0x301E1FE0B28D5FC3L},{0x16L,4294967287UL,-1L,0UL,0x1749C19FD3B19F35L},{0UL,4294967295UL,0x72D295F1L,4294967295UL,0x53D25BB60D9E6853L},{0xF2L,0xDDC22843L,0x14052233L,0UL,2L},{0xC8L,0xB652A3A7L,-6L,1UL,0x6AAE4A1122089C5BL}}};
        struct S0 l_642 = {250UL,0x71DB3689L,0x556EE9C5L,0UL,-1L};
        VECTOR(uint8_t, 8) l_643 = (VECTOR(uint8_t, 8))(0xF0L, (VECTOR(uint8_t, 4))(0xF0L, (VECTOR(uint8_t, 2))(0xF0L, 0x36L), 0x36L), 0x36L, 0xF0L, 0x36L);
        uint8_t l_644 = 0UL;
        VECTOR(int16_t, 8) l_645 = (VECTOR(int16_t, 8))(0x7A7AL, (VECTOR(int16_t, 4))(0x7A7AL, (VECTOR(int16_t, 2))(0x7A7AL, (-7L)), (-7L)), (-7L), 0x7A7AL, (-7L));
        VECTOR(int16_t, 4) l_646 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L));
        VECTOR(int16_t, 4) l_647 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x7A1EL), 0x7A1EL);
        VECTOR(int16_t, 2) l_648 = (VECTOR(int16_t, 2))(0x4A52L, 0x4431L);
        VECTOR(int16_t, 2) l_649 = (VECTOR(int16_t, 2))((-1L), 0x2A80L);
        VECTOR(int16_t, 2) l_650 = (VECTOR(int16_t, 2))(0L, (-1L));
        uint8_t l_651 = 9UL;
        uint32_t l_652 = 1UL;
        uint16_t l_653 = 0x4EDEL;
        uint64_t l_654 = 0UL;
        uint8_t l_655 = 0x16L;
        int64_t l_656 = 0x35A3193F90CFDF14L;
        uint32_t l_657 = 4294967295UL;
        uint8_t l_658 = 2UL;
        int8_t l_659 = 0x75L;
        int8_t l_660[6] = {0L,0L,0L,0L,0L,0L};
        int i, j;
        l_660[2] |= ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_626.xx)).xxxy)), 0x1038E605L, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_627.yzyy)))))).lo)).yyyy))), 0x2C4FF593L, 0x222F646EL, 1L, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(2L, (-4L), 0x7288BEB2L, 0x222DA9E0L)).ywyxzwxxwxyxwyyy)).se132, ((VECTOR(int32_t, 4))(l_628.wzzw)), ((VECTOR(int32_t, 8))(l_629.s4368a1dd)).even))).odd, ((VECTOR(int32_t, 2))(0L, 0x7D6304F7L)), ((VECTOR(int32_t, 2))(0L, 0x720FA6CEL)))))))).odd, (l_632 &= (l_631 ^= l_630)), (-4L), 0x58EB9042L)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x068831ECL, ((VECTOR(int32_t, 2))(0x5AA8A911L, 0x32A29897L)), 0x4554E479L)).ywzxxzwxxywyzyww))))), ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(l_633.ywxy)).zyzyzyxzxwwwywyw, ((VECTOR(int32_t, 4))(l_634.s5252)).wxyzzwzyxxwxzwxw)))))).sfd79, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_635.s5700775252556231)).s44)), 0x057FL, ((VECTOR(int16_t, 2))(l_636.ww)), (-1L), 0x278DL, 0x0CC0L)).s4277057336256457, ((VECTOR(int16_t, 4))(l_637.xxyx)).xxwwwywyyyyzwyzz, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(1L, 0x7E97L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_638, (l_640.x = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_639.sca)).yyyxyxxx)).s4), 0x118AL, (((l_642 = l_641[0][2]) , (l_644 = l_643.s0)) , ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0x1D9FL, 0x6F54L, 0x1715L, ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))(l_645.s7150)).xwwyzzzzzzwzwywz))).sc311, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_646.zzww)).even)), ((VECTOR(int16_t, 4))((-1L), 1L, 3L, 0x356AL)), 0x7FC3L, 0x78F8L)))).hi)).zwywyyxxxzxxzzzz)).s01f1))), ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))((-5L), 0x774CL)).yyyxxxxyyyxxxyyx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_647.wyzywwzxzwywwywz))))))).s05, (int16_t)((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0L, 0x2369L, 0x2DB8L, 0x4152L)).wwwyzwxz)).s46)), ((VECTOR(int16_t, 2))(l_648.xx))))).odd))), ((VECTOR(int16_t, 4))(l_649.xxyx)), 0L, 0x5273L, 0x3285L)).odd)).s1), 0L, 1L, 0L, 9L, ((VECTOR(int16_t, 2))(l_650.xy)), 0x7EF5L, (l_652 &= l_651), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x674CL, 3L)).yyyx)))).s3, ((VECTOR(int16_t, 2))((-6L), 0x697FL)), 0x5096L)).even)), (l_657 |= (l_656 &= ((((l_654 = l_653) , l_655) , 8L) , (-8L)))), ((VECTOR(int16_t, 4))((-2L))), 1L, ((VECTOR(int16_t, 4))(0x00C3L)), 8L, 9L)).s8f61)).xwwwwwyz, ((VECTOR(int16_t, 8))(0L))))).s32)).xyyxxxyyyxyyyyyx))), (int16_t)l_658, (int16_t)l_659))), ((VECTOR(int16_t, 16))(0x62A3L))))).sb6f5, ((VECTOR(int16_t, 4))(2L))))).yyzyyxzxyyxwyyxy, ((VECTOR(uint16_t, 16))(65535UL))))))))).sa71b))).lo)).xxyxxxxxyxxyyxxx, ((VECTOR(int32_t, 16))(0x77FAA54CL))))).sa;
        unsigned int result = 0;
        result += l_626.w;
        result += l_626.z;
        result += l_626.y;
        result += l_626.x;
        result += l_627.w;
        result += l_627.z;
        result += l_627.y;
        result += l_627.x;
        result += l_628.w;
        result += l_628.z;
        result += l_628.y;
        result += l_628.x;
        result += l_629.sf;
        result += l_629.se;
        result += l_629.sd;
        result += l_629.sc;
        result += l_629.sb;
        result += l_629.sa;
        result += l_629.s9;
        result += l_629.s8;
        result += l_629.s7;
        result += l_629.s6;
        result += l_629.s5;
        result += l_629.s4;
        result += l_629.s3;
        result += l_629.s2;
        result += l_629.s1;
        result += l_629.s0;
        result += l_630;
        result += l_631;
        result += l_632;
        result += l_633.w;
        result += l_633.z;
        result += l_633.y;
        result += l_633.x;
        result += l_634.s7;
        result += l_634.s6;
        result += l_634.s5;
        result += l_634.s4;
        result += l_634.s3;
        result += l_634.s2;
        result += l_634.s1;
        result += l_634.s0;
        result += l_635.s7;
        result += l_635.s6;
        result += l_635.s5;
        result += l_635.s4;
        result += l_635.s3;
        result += l_635.s2;
        result += l_635.s1;
        result += l_635.s0;
        result += l_636.w;
        result += l_636.z;
        result += l_636.y;
        result += l_636.x;
        result += l_637.y;
        result += l_637.x;
        result += l_638;
        result += l_639.sf;
        result += l_639.se;
        result += l_639.sd;
        result += l_639.sc;
        result += l_639.sb;
        result += l_639.sa;
        result += l_639.s9;
        result += l_639.s8;
        result += l_639.s7;
        result += l_639.s6;
        result += l_639.s5;
        result += l_639.s4;
        result += l_639.s3;
        result += l_639.s2;
        result += l_639.s1;
        result += l_639.s0;
        result += l_640.y;
        result += l_640.x;
        int l_641_i0, l_641_i1;
        for (l_641_i0 = 0; l_641_i0 < 9; l_641_i0++) {
            for (l_641_i1 = 0; l_641_i1 < 8; l_641_i1++) {
                result += l_641[l_641_i0][l_641_i1].f0;
                result += l_641[l_641_i0][l_641_i1].f1;
                result += l_641[l_641_i0][l_641_i1].f2;
                result += l_641[l_641_i0][l_641_i1].f3;
                result += l_641[l_641_i0][l_641_i1].f4;
            }
        }
        result += l_642.f0;
        result += l_642.f1;
        result += l_642.f2;
        result += l_642.f3;
        result += l_642.f4;
        result += l_643.s7;
        result += l_643.s6;
        result += l_643.s5;
        result += l_643.s4;
        result += l_643.s3;
        result += l_643.s2;
        result += l_643.s1;
        result += l_643.s0;
        result += l_644;
        result += l_645.s7;
        result += l_645.s6;
        result += l_645.s5;
        result += l_645.s4;
        result += l_645.s3;
        result += l_645.s2;
        result += l_645.s1;
        result += l_645.s0;
        result += l_646.w;
        result += l_646.z;
        result += l_646.y;
        result += l_646.x;
        result += l_647.w;
        result += l_647.z;
        result += l_647.y;
        result += l_647.x;
        result += l_648.y;
        result += l_648.x;
        result += l_649.y;
        result += l_649.x;
        result += l_650.y;
        result += l_650.x;
        result += l_651;
        result += l_652;
        result += l_653;
        result += l_654;
        result += l_655;
        result += l_656;
        result += l_657;
        result += l_658;
        result += l_659;
        int l_660_i0;
        for (l_660_i0 = 0; l_660_i0 < 6; l_660_i0++) {
            result += l_660[l_660_i0];
        }
        atomic_add(&p_1216->g_special_values[22 * get_linear_group_id() + 13], result);
    }
    else
    { /* block id: 290 */
        (1 + 1);
    }
    (*p_1216->g_618) = l_126;
    if ((((p_1216->g_662 != p_1216->g_662) > ((safe_mod_func_int32_t_s_s(((((l_665 = &p_1216->g_517) == ((**p_1216->g_618) , &p_1216->g_517)) != FAKE_DIVERGE(p_1216->global_1_offset, get_global_id(1), 10)) > (*l_126)), (safe_rshift_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), 2)))) >= p_1216->g_215[0][1])) && (&l_126 == &p_1216->g_216)))
    { /* block id: 295 */
        int32_t l_668 = 0x11942C07L;
        return l_668;
    }
    else
    { /* block id: 297 */
        int32_t ***l_676 = &p_1216->g_225[1][0];
        int32_t ****l_675 = &l_676;
        int32_t ****l_677 = (void*)0;
        int32_t ***l_679 = &p_1216->g_225[2][1];
        int32_t ****l_678 = &l_679;
        int16_t *l_682 = &p_1216->g_213[0];
        VECTOR(uint8_t, 16) l_683 = (VECTOR(uint8_t, 16))(0x67L, (VECTOR(uint8_t, 4))(0x67L, (VECTOR(uint8_t, 2))(0x67L, 255UL), 255UL), 255UL, 0x67L, 255UL, (VECTOR(uint8_t, 2))(0x67L, 255UL), (VECTOR(uint8_t, 2))(0x67L, 255UL), 0x67L, 255UL, 0x67L, 255UL);
        struct S0 **l_684 = (void*)0;
        VECTOR(int16_t, 4) l_687 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L);
        uint8_t *l_689 = &p_1216->g_566.f0;
        VECTOR(uint8_t, 8) l_692 = (VECTOR(uint8_t, 8))(0x26L, (VECTOR(uint8_t, 4))(0x26L, (VECTOR(uint8_t, 2))(0x26L, 0x97L), 0x97L), 0x97L, 0x26L, 0x97L);
        VECTOR(uint8_t, 16) l_693 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL, 255UL, 255UL, 255UL);
        VECTOR(uint8_t, 8) l_694 = (VECTOR(uint8_t, 8))(0xACL, (VECTOR(uint8_t, 4))(0xACL, (VECTOR(uint8_t, 2))(0xACL, 1UL), 1UL), 1UL, 0xACL, 1UL);
        VECTOR(uint64_t, 2) l_703 = (VECTOR(uint64_t, 2))(0x325322C80D95939DL, 0xCDD3DAEA064C3F62L);
        int32_t *l_727 = (void*)0;
        VECTOR(int32_t, 8) l_785 = (VECTOR(int32_t, 8))(0x165C7E93L, (VECTOR(int32_t, 4))(0x165C7E93L, (VECTOR(int32_t, 2))(0x165C7E93L, 5L), 5L), 5L, 0x165C7E93L, 5L);
        uint8_t l_786 = 1UL;
        VECTOR(int32_t, 8) l_857 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x4C395322L), 0x4C395322L), 0x4C395322L, (-3L), 0x4C395322L);
        int64_t *l_870 = &p_1216->g_38;
        struct S0 l_871 = {0UL,4294967295UL,0L,1UL,0x0F078AA73CFAFD73L};
        VECTOR(uint16_t, 8) l_915 = (VECTOR(uint16_t, 8))(0x63DBL, (VECTOR(uint16_t, 4))(0x63DBL, (VECTOR(uint16_t, 2))(0x63DBL, 0x3A15L), 0x3A15L), 0x3A15L, 0x63DBL, 0x3A15L);
        int16_t l_916[7] = {1L,1L,1L,1L,1L,1L,1L};
        uint16_t l_930 = 0x12A5L;
        VECTOR(int32_t, 16) l_1000 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x1442502DL), 0x1442502DL), 0x1442502DL, (-6L), 0x1442502DL, (VECTOR(int32_t, 2))((-6L), 0x1442502DL), (VECTOR(int32_t, 2))((-6L), 0x1442502DL), (-6L), 0x1442502DL, (-6L), 0x1442502DL);
        VECTOR(int32_t, 16) l_1014 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
        uint64_t l_1020 = 0xD30E080BD8597061L;
        int32_t l_1048 = 0x3484A2ECL;
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1216->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 166)), permutations[(safe_mod_func_uint32_t_u_u(((**l_625) , ((safe_mul_func_int16_t_s_s((((VECTOR(int64_t, 16))(p_1216->g_671.sb1ac3add001d211f)).sc ^ p_13), ((l_672 == l_672) && (*p_1216->g_254)))) != (safe_mul_func_int8_t_s_s((((*l_678) = ((*l_675) = &p_1216->g_225[5][0])) == (p_12 , l_672)), (safe_rshift_func_int16_t_s_s(((*l_682) = p_13), 5)))))), 10))][(safe_mod_func_uint32_t_u_u(p_1216->tid, 166))]));
        l_698 |= ((*p_1216->g_216) ^= (((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 2))(l_683.s59)).yyxx, ((VECTOR(uint8_t, 16))(((l_684 == (l_625 = &p_1216->g_565)) & ((((*l_126) = ((*p_1216->g_332)--)) >= ((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 8))(l_687.yyzwzxzw)), ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_688.yyzy)).zywxzxzzyzzwwxyw)).even)))))).s7) >= 4294967295UL)), ((*l_689)++), ((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(255UL, ((VECTOR(uint8_t, 8))(0x77L, 0xFEL, ((VECTOR(uint8_t, 4))(l_692.s7415)), 0x0EL, 0x0DL)), ((VECTOR(uint8_t, 2))(l_693.s1f)), ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_694.s3140)).zzwyyxyz)).s27, ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))(p_1216->g_695.xyxyyxxxxyxyyyyx)).hi, (uint8_t)((l_696 = p_14) && ((VECTOR(uint64_t, 16))(l_697.s8d3b19dd98986cd1)).s6)))).s02)), p_1216->g_161.y, p_1216->g_363.s4, 1UL, 0x2BL, 0x05L, 0UL)).s6213605742163401, (uint8_t)(p_1216->g_161.z , 0xFFL)))).sad))), ((VECTOR(uint8_t, 2))(247UL)))))))), 1UL, 255UL, 0x2EL)).s48)).yyyyyyxxxxxxxxxx)).sbf74, (uint8_t)0x7BL))).ywywyzxw, ((VECTOR(uint8_t, 8))(1UL)), ((VECTOR(uint8_t, 8))(7UL))))), ((VECTOR(uint8_t, 2))(0UL)), p_1216->g_274.x, 0xF9L, 1UL, 0UL)).s6c72, ((VECTOR(uint8_t, 4))(0UL))))).wzwyzzwxwxzxywwx, ((VECTOR(uint8_t, 16))(0x4BL))))).s7 <= p_1216->g_379.x));
        for (p_1216->g_35 = 0; (p_1216->g_35 > 8); p_1216->g_35 = safe_add_func_uint16_t_u_u(p_1216->g_35, 3))
        { /* block id: 313 */
            uint64_t l_702[6] = {0x65FC5180ED03A20EL,0x65FC5180ED03A20EL,0x65FC5180ED03A20EL,0x65FC5180ED03A20EL,0x65FC5180ED03A20EL,0x65FC5180ED03A20EL};
            int64_t *l_704[5][6][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t l_705 = 0x3A22EE90L;
            int32_t **l_709 = (void*)0;
            int32_t *l_713 = &p_1216->g_193;
            uint16_t l_723 = 65528UL;
            struct S0 l_724 = {255UL,1UL,0L,0xDC0E1A8AL,0x17A1FA99170BD258L};
            int32_t l_733 = (-1L);
            int32_t l_734 = (-1L);
            int32_t l_735 = 4L;
            int i, j, k;
            (*p_1216->g_711) = func_115(((p_14 && ((((((l_701 != (l_702[2] <= ((void*)0 == &p_1216->g_254))) ^ (((VECTOR(uint64_t, 16))(l_703.xxxyyyxxyxxxxyxx)).s8 , ((p_1216->g_381.y = (1L > (l_705 |= p_12))) | (safe_sub_func_uint16_t_u_u((l_702[0] == ((VECTOR(uint32_t, 8))(p_1216->g_708.yyyxxxyy)).s3), 0x179EL))))) , 5L) , p_12) < 0xE0FD9AF4L) , GROUP_DIVERGE(1, 1))) , 0xF6E08DA6L), (*p_1216->g_152), (*l_126), p_1216);
            (*l_713) |= (p_12 >= (p_1216->g_343.s5 , (p_1216->g_712 = p_13)));
            if ((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((void*)0 != &l_136[3]), (((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_722[0], ((((p_13 , ((p_1216->g_comm_values[p_1216->tid] = l_723) , (((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))((-6L), (-1L), 0L, (-1L))).odd))).hi == ((&p_1216->g_167 == (l_724 , &p_1216->g_565)) , 0x176BL)))) , (void*)0) == &p_1216->g_254) < p_12))), 0x78L)) && p_1216->g_379.w) , 0UL))), FAKE_DIVERGE(p_1216->group_1_offset, get_group_id(1), 10))))
            { /* block id: 320 */
                int32_t **l_725 = (void*)0;
                int32_t **l_726[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_726[i] = &p_1216->g_192;
                l_727 = (l_126 = func_115(p_12, (p_13 , ((*p_1216->g_152) = (void*)0)), p_1216->g_479.s7, p_1216));
                for (p_1216->g_38 = 27; (p_1216->g_38 > 7); p_1216->g_38 = safe_sub_func_uint16_t_u_u(p_1216->g_38, 9))
                { /* block id: 326 */
                    uint32_t l_737[10][9][2] = {{{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L}},{{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L}},{{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L}},{{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L}},{{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L}},{{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L}},{{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L}},{{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L}},{{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L}},{{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L},{0xD9B489EAL,0xBF20F9F1L}}};
                    int i, j, k;
                    for (p_14 = 0; (p_14 >= 15); p_14 = safe_add_func_int8_t_s_s(p_14, 9))
                    { /* block id: 329 */
                        struct S0 l_732 = {0xA9L,0xF982E29FL,0x1BDE9F05L,0x1D391D3AL,-5L};
                        (*p_1216->g_565) = l_732;
                        (*l_713) &= p_14;
                        (*l_713) = ((void*)0 == &p_1216->g_215[0][1]);
                        ++l_737[1][5][1];
                    }
                    return p_14;
                }
                if (p_13)
                    continue;
                return p_1216->g_471.z;
            }
            else
            { /* block id: 339 */
                if ((atomic_inc(&p_1216->l_atomic_input[14]) == 7))
                { /* block id: 341 */
                    VECTOR(int32_t, 8) l_740 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x78722F52L), 0x78722F52L), 0x78722F52L, (-1L), 0x78722F52L);
                    int32_t l_741 = (-2L);
                    int8_t l_742 = 1L;
                    VECTOR(int32_t, 16) l_743 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x73F6B838L), 0x73F6B838L), 0x73F6B838L, 1L, 0x73F6B838L, (VECTOR(int32_t, 2))(1L, 0x73F6B838L), (VECTOR(int32_t, 2))(1L, 0x73F6B838L), 1L, 0x73F6B838L, 1L, 0x73F6B838L);
                    VECTOR(int32_t, 8) l_744 = (VECTOR(int32_t, 8))(0x4DE3AEF2L, (VECTOR(int32_t, 4))(0x4DE3AEF2L, (VECTOR(int32_t, 2))(0x4DE3AEF2L, 0x2DA1B089L), 0x2DA1B089L), 0x2DA1B089L, 0x4DE3AEF2L, 0x2DA1B089L);
                    VECTOR(int32_t, 4) l_745 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
                    int32_t l_746 = 0L;
                    uint64_t l_747[10];
                    VECTOR(int32_t, 4) l_748 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0L), 0L);
                    int16_t l_749 = 0x26C0L;
                    VECTOR(uint32_t, 8) l_750 = (VECTOR(uint32_t, 8))(0xCD137219L, (VECTOR(uint32_t, 4))(0xCD137219L, (VECTOR(uint32_t, 2))(0xCD137219L, 4294967295UL), 4294967295UL), 4294967295UL, 0xCD137219L, 4294967295UL);
                    int32_t l_751[4][8][6] = {{{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L}},{{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L}},{{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L}},{{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L},{0L,0x63BA5F00L,0L,(-1L),6L,0L}}};
                    uint32_t l_752 = 2UL;
                    VECTOR(int32_t, 8) l_753 = (VECTOR(int32_t, 8))(0x15576ABCL, (VECTOR(int32_t, 4))(0x15576ABCL, (VECTOR(int32_t, 2))(0x15576ABCL, 0x1376C2BAL), 0x1376C2BAL), 0x1376C2BAL, 0x15576ABCL, 0x1376C2BAL);
                    int64_t l_754[8][9][3] = {{{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL}},{{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL}},{{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL}},{{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL}},{{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL}},{{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL}},{{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL}},{{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL},{0x02B80CC2F8AFA3A7L,3L,0x69A83AF06A87CF5CL}}};
                    uint16_t l_755 = 0UL;
                    uint8_t l_756[10][1] = {{0xBAL},{0xBAL},{0xBAL},{0xBAL},{0xBAL},{0xBAL},{0xBAL},{0xBAL},{0xBAL},{0xBAL}};
                    uint8_t l_757 = 0x47L;
                    uint16_t l_758 = 1UL;
                    int i, j, k;
                    for (i = 0; i < 10; i++)
                        l_747[i] = 18446744073709551615UL;
                    l_754[3][7][0] ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0L, (-9L), ((VECTOR(int32_t, 4))(l_740.s4745)), (-1L), 1L)).s14)), (int32_t)1L, (int32_t)l_741))), 8L, (-9L))).lo, ((VECTOR(int32_t, 4))(l_742, ((VECTOR(int32_t, 2))(l_743.sbd)), 4L)).even, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 2))(l_744.s13)).yxyyxxyx, (int32_t)((VECTOR(int32_t, 2))(l_745.yw)).hi, (int32_t)(l_746 , (l_747[7] = 0x2A1F8930L))))).s50)).xxxyxyyxxxyxxxyy, ((VECTOR(int32_t, 2))(l_748.yx)).xxyxxxxxxxxyxyxx))), (int32_t)l_749, (int32_t)(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_750.s71)).yyyxyyyxxyxyxyyx)).se , (l_752 = l_751[0][2][1]))))), ((VECTOR(int32_t, 16))(l_753.s3141755105226141))))).s92))))).even;
                    l_756[4][0] ^= l_755;
                    l_758 = l_757;
                    unsigned int result = 0;
                    result += l_740.s7;
                    result += l_740.s6;
                    result += l_740.s5;
                    result += l_740.s4;
                    result += l_740.s3;
                    result += l_740.s2;
                    result += l_740.s1;
                    result += l_740.s0;
                    result += l_741;
                    result += l_742;
                    result += l_743.sf;
                    result += l_743.se;
                    result += l_743.sd;
                    result += l_743.sc;
                    result += l_743.sb;
                    result += l_743.sa;
                    result += l_743.s9;
                    result += l_743.s8;
                    result += l_743.s7;
                    result += l_743.s6;
                    result += l_743.s5;
                    result += l_743.s4;
                    result += l_743.s3;
                    result += l_743.s2;
                    result += l_743.s1;
                    result += l_743.s0;
                    result += l_744.s7;
                    result += l_744.s6;
                    result += l_744.s5;
                    result += l_744.s4;
                    result += l_744.s3;
                    result += l_744.s2;
                    result += l_744.s1;
                    result += l_744.s0;
                    result += l_745.w;
                    result += l_745.z;
                    result += l_745.y;
                    result += l_745.x;
                    result += l_746;
                    int l_747_i0;
                    for (l_747_i0 = 0; l_747_i0 < 10; l_747_i0++) {
                        result += l_747[l_747_i0];
                    }
                    result += l_748.w;
                    result += l_748.z;
                    result += l_748.y;
                    result += l_748.x;
                    result += l_749;
                    result += l_750.s7;
                    result += l_750.s6;
                    result += l_750.s5;
                    result += l_750.s4;
                    result += l_750.s3;
                    result += l_750.s2;
                    result += l_750.s1;
                    result += l_750.s0;
                    int l_751_i0, l_751_i1, l_751_i2;
                    for (l_751_i0 = 0; l_751_i0 < 4; l_751_i0++) {
                        for (l_751_i1 = 0; l_751_i1 < 8; l_751_i1++) {
                            for (l_751_i2 = 0; l_751_i2 < 6; l_751_i2++) {
                                result += l_751[l_751_i0][l_751_i1][l_751_i2];
                            }
                        }
                    }
                    result += l_752;
                    result += l_753.s7;
                    result += l_753.s6;
                    result += l_753.s5;
                    result += l_753.s4;
                    result += l_753.s3;
                    result += l_753.s2;
                    result += l_753.s1;
                    result += l_753.s0;
                    int l_754_i0, l_754_i1, l_754_i2;
                    for (l_754_i0 = 0; l_754_i0 < 8; l_754_i0++) {
                        for (l_754_i1 = 0; l_754_i1 < 9; l_754_i1++) {
                            for (l_754_i2 = 0; l_754_i2 < 3; l_754_i2++) {
                                result += l_754[l_754_i0][l_754_i1][l_754_i2];
                            }
                        }
                    }
                    result += l_755;
                    int l_756_i0, l_756_i1;
                    for (l_756_i0 = 0; l_756_i0 < 10; l_756_i0++) {
                        for (l_756_i1 = 0; l_756_i1 < 1; l_756_i1++) {
                            result += l_756[l_756_i0][l_756_i1];
                        }
                    }
                    result += l_757;
                    result += l_758;
                    atomic_add(&p_1216->l_special_values[14], result);
                }
                else
                { /* block id: 347 */
                    (1 + 1);
                }
                return p_14;
            }
        }
        if (((VECTOR(int32_t, 2))(1L, 0x5C0D19A7L)).lo)
        { /* block id: 353 */
            uint16_t *l_766 = &p_1216->g_276;
            uint16_t **l_767 = (void*)0;
            uint16_t **l_768 = &l_766;
            uint16_t **l_769 = &p_1216->g_332;
            int32_t l_773 = 0x1213AB2FL;
            VECTOR(int32_t, 4) l_779 = (VECTOR(int32_t, 4))(0x4879290DL, (VECTOR(int32_t, 2))(0x4879290DL, 1L), 1L);
            int32_t ****l_802 = &l_679;
            int32_t *l_809 = &p_1216->g_193;
            uint64_t *l_848 = &l_696;
            int16_t *l_851[9][6][4] = {{{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]}},{{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]}},{{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]}},{{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]}},{{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]}},{{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]}},{{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]}},{{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]}},{{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]},{&l_722[0],&l_722[0],&l_722[0],&l_722[0]}}};
            VECTOR(uint64_t, 8) l_861 = (VECTOR(uint64_t, 8))(0x24CAE27CBB380B9EL, (VECTOR(uint64_t, 4))(0x24CAE27CBB380B9EL, (VECTOR(uint64_t, 2))(0x24CAE27CBB380B9EL, 2UL), 2UL), 2UL, 0x24CAE27CBB380B9EL, 2UL);
            int64_t *l_862 = (void*)0;
            int64_t *l_863 = (void*)0;
            int64_t *l_864 = (void*)0;
            int64_t *l_865 = (void*)0;
            int64_t *l_866 = (void*)0;
            int64_t *l_867 = (void*)0;
            int64_t *l_868 = (void*)0;
            int64_t *l_869[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t l_896 = 4294967288UL;
            int i, j, k;
            if (((safe_div_func_int16_t_s_s((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x631DL, 0UL)), 65535UL, 0UL)).w , (safe_sub_func_uint16_t_u_u((((VECTOR(int32_t, 16))(l_763.s5a40956ecc503525)).s4 , (GROUP_DIVERGE(1, 1) & (safe_mod_func_uint8_t_u_u(((p_1216->g_137.f2 & ((((((*l_768) = l_766) != (void*)0) >= (((*l_769) = &p_1216->g_276) != l_770)) , (+(((((l_773 = (safe_mul_func_int8_t_s_s((p_13 , ((*p_1216->g_254) = 0x40L)), p_14))) , (-10L)) && 0L) < p_1216->g_566.f0) > p_1216->g_695.y))) < (*l_126))) , p_13), l_774)))), p_1216->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1216->tid, 166))]))), FAKE_DIVERGE(p_1216->group_2_offset, get_group_id(2), 10))) , p_1216->g_775))
            { /* block id: 358 */
                int32_t *l_781 = &l_736;
                int32_t *l_782 = (void*)0;
                int32_t *l_783 = &l_736;
                int32_t *l_784[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                if (((void*)0 != l_776))
                { /* block id: 359 */
                    atomic_or(&p_1216->l_atomic_reduction[0], ((((!0x7B1FL) > (safe_sub_func_int32_t_s_s((p_1216->g_662 != (void*)0), 1L))) && (l_773 = ((&p_1216->g_149 == (p_1216->g_213[0] , &l_774)) , p_14))) , ((VECTOR(int32_t, 2))(l_779.yw)).odd));
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1216->v_collective += p_1216->l_atomic_reduction[0];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                }
                else
                { /* block id: 362 */
                    int32_t l_780 = (-5L);
                    return l_780;
                }
                l_781 = l_781;
                (*l_781) |= ((*l_126) = (*p_1216->g_192));
                ++l_786;
            }
            else
            { /* block id: 369 */
                VECTOR(int8_t, 8) l_803 = (VECTOR(int8_t, 8))(0x35L, (VECTOR(int8_t, 4))(0x35L, (VECTOR(int8_t, 2))(0x35L, 0x3FL), 0x3FL), 0x3FL, 0x35L, 0x3FL);
                int32_t **l_814 = &l_808[0];
                int64_t *l_820 = &p_1216->g_137.f4;
                int i;
                if ((safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((p_14 ^ (p_13 ^ (*l_126))), ((*p_1216->g_254) , p_1216->g_149))), p_12)), (((*p_1216->g_254) | ((*l_126) == (((-1L) == p_12) > (*p_1216->g_517)))) , 0x73493E3FL))), 0x7BAEL)))
                { /* block id: 370 */
                    VECTOR(int16_t, 4) l_801 = (VECTOR(int16_t, 4))(0x1627L, (VECTOR(int16_t, 2))(0x1627L, 1L), 1L);
                    uint32_t *l_806 = &p_1216->g_566.f1;
                    int32_t **l_807[10] = {&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,&l_727,&l_727};
                    int i;
                    (*p_1216->g_619) = (l_126 = func_115(((((p_13 <= 8L) , (((*l_689) = ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(1UL, ((VECTOR(uint8_t, 16))(246UL, 0x67L, ((VECTOR(uint8_t, 2))(l_797.s73)), ((VECTOR(uint8_t, 8))(p_1216->g_798.wzwxxzyw)), 0x9EL, 0x88L, 0x8EL, 0UL)).s5, (GROUP_DIVERGE(0, 1) > (((VECTOR(int16_t, 8))(l_801.zzzyxzyw)).s6 ^ ((~0x50L) <= ((p_13 , l_802) == ((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 2))(l_803.s37)).yyxxxyxx, ((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_804.wzzyzxywyzwxwyyz)).s4f)).xxyyyxxyyxxxxxyy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_805.xy)).yxyyxyxyxxxxxyyx))))).sbdd1, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-7L), 0L)), (-9L), 0x30L))))).wzxxyxxw, ((VECTOR(int8_t, 4))((((p_14 , l_801.w) , ((*l_806) |= (~l_803.s4))) , ((*p_1216->g_254) = 0L)), ((VECTOR(int8_t, 2))((-4L))), 9L)).wwzzzyxx))), ((VECTOR(int8_t, 8))(0x39L)), ((VECTOR(int8_t, 8))(0L)))))))))).s5 < p_1216->g_276) , (void*)0))))), FAKE_DIVERGE(p_1216->local_0_offset, get_local_id(0), 10), ((VECTOR(uint8_t, 4))(0xD1L)))))).s76)).xyxxxyxxxyxyxyyx)).s4) < p_12)) > p_14) ^ FAKE_DIVERGE(p_1216->global_1_offset, get_global_id(1), 10)), (*p_1216->g_152), p_1216->g_365.s3, p_1216));
                    l_809 = l_808[0];
                }
                else
                { /* block id: 377 */
                    int32_t ***l_815 = (void*)0;
                    int32_t ***l_816 = (void*)0;
                    int32_t *l_822 = &p_1216->g_458;
                    (*l_126) |= (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((((-9L) ^ ((VECTOR(int32_t, 16))((-8L), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(((l_817[0][2][4] = (l_814 = l_814)) != (void*)0), 0L, (-10L), ((((safe_mul_func_int8_t_s_s((+(((*l_822) &= (((void*)0 != l_665) > ((l_820 != (void*)0) != ((VECTOR(int8_t, 2))(p_1216->g_821.sae)).lo))) , 1L)), (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(1L, (*p_1216->g_332))), 0UL)))) , 255UL) < p_13) && 0x9E9A986DD8EFC40CL), p_12, 1L, 1L, 1L)).lo, ((VECTOR(int32_t, 4))(8L))))).yzxyzzzx)).hi, ((VECTOR(int32_t, 4))(0x424D5374L))))), ((VECTOR(int32_t, 4))(0x1CA5097EL)), 0x737C724FL, 0x09BEF51CL, 5L, ((VECTOR(int32_t, 2))(0x6A4A8F5EL)), 0x68AC4457L, 0x652CEA99L)).sf) , p_1216->g_149), 3)), p_12));
                    for (p_1216->g_276 = (-16); (p_1216->g_276 != 52); p_1216->g_276 = safe_add_func_uint64_t_u_u(p_1216->g_276, 3))
                    { /* block id: 384 */
                        return p_13;
                    }
                    if ((atomic_inc(&p_1216->g_atomic_input[22 * get_linear_group_id() + 4]) == 8))
                    { /* block id: 388 */
                        int8_t l_829 = (-1L);
                        uint32_t l_830[8] = {4294967295UL,0x56F64A68L,4294967295UL,4294967295UL,0x56F64A68L,4294967295UL,4294967295UL,0x56F64A68L};
                        int i;
                        l_830[2]--;
                        unsigned int result = 0;
                        result += l_829;
                        int l_830_i0;
                        for (l_830_i0 = 0; l_830_i0 < 8; l_830_i0++) {
                            result += l_830[l_830_i0];
                        }
                        atomic_add(&p_1216->g_special_values[22 * get_linear_group_id() + 4], result);
                    }
                    else
                    { /* block id: 390 */
                        (1 + 1);
                    }
                }
            }
            (**l_625) = (l_871 = (*p_1216->g_565));
            for (l_871.f2 = 15; (l_871.f2 < 8); l_871.f2--)
            { /* block id: 403 */
                uint32_t l_887 = 0x29FA4A1AL;
                int32_t l_892[1][4];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_892[i][j] = (-9L);
                }
                l_887 |= (safe_unary_minus_func_uint8_t_u(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 2))(1UL, 8UL)).yxyy, (uint8_t)0UL, (uint8_t)((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((18446744073709551615UL <= ((((((FAKE_DIVERGE(p_1216->global_0_offset, get_global_id(0), 10) , p_1216->g_852) , ((void*)0 == l_808[0])) , (safe_rshift_func_int8_t_s_s(p_13, ((*p_1216->g_254) = (*p_1216->g_254))))) || (FAKE_DIVERGE(p_1216->group_2_offset, get_group_id(2), 10) >= ((0x73E5BD4FF1EB5897L < ((void*)0 != &p_1216->g_215[0][4])) <= p_13))) , (*p_1216->g_332)) & p_14)), p_14)), 0L)), 0xAD94BFF3L)), 0x639CL)) , FAKE_DIVERGE(p_1216->global_0_offset, get_global_id(0), 10))))).hi, ((VECTOR(uint8_t, 2))(0x3CL))))).yxxyxxxx, ((VECTOR(uint8_t, 8))(0UL))))).s1));
                for (p_1216->g_193 = (-17); (p_1216->g_193 >= 11); p_1216->g_193++)
                { /* block id: 408 */
                    int64_t l_895 = 0L;
                    int32_t *l_899 = &p_1216->g_193;
                    int i, j;
                    if ((l_892[0][1] |= ((safe_add_func_uint64_t_u_u(0x67143C9D2A1AAB73L, 0x1CCA3D4638813906L)) , (-5L))))
                    { /* block id: 410 */
                        uint64_t *l_893 = (void*)0;
                        (*l_625) = (void*)0;
                        l_892[0][1] |= (+(l_893 != &l_696));
                    }
                    else
                    { /* block id: 413 */
                        int32_t l_894 = 9L;
                        int32_t *l_900 = &l_892[0][1];
                        l_896--;
                        (*p_1216->g_711) = l_899;
                        (*p_1216->g_618) = l_900;
                    }
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1216->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 166)), permutations[(safe_mod_func_uint32_t_u_u((GROUP_DIVERGE(0, 1) >= (l_892[0][1] ^= (p_1216->g_35 , (safe_lshift_func_uint8_t_u_s(((*l_689) = (safe_mul_func_int8_t_s_s(((void*)0 == &p_1216->g_153), p_14))), 2))))), 10))][(safe_mod_func_uint32_t_u_u(p_1216->tid, 166))]));
                }
            }
            (*p_1216->g_216) = ((~(((((safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((*p_1216->g_332), ((-1L) >= (safe_mod_func_int16_t_s_s((p_1216->g_931 = (((p_13 != (safe_lshift_func_uint16_t_u_s(((p_1216->g_342.w = (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 4))(l_915.s7776)).xwzyzzyy))).s00)).odd != ((((p_1216->g_858.s6 = l_916[0]) ^ (safe_mod_func_int16_t_s_s((p_1216->g_213[0] = ((~p_12) && ((*p_1216->g_517)--))), p_14))) == (safe_add_func_int64_t_s_s(((p_1216->g_379.z = ((void*)0 == &p_12)) < ((*l_848) ^= (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((-9L) == p_13))), 7)) && 0x7CCEL), p_13, p_12, 7L, ((VECTOR(int32_t, 2))(0L)), 0x7A255E5BL, (-1L))).s4, 0x3E4F326CL, ((VECTOR(int32_t, 4))(8L)), p_14, ((VECTOR(int32_t, 4))(0x3E12C6F4L)), ((VECTOR(int32_t, 4))((-2L))), 0x68B1FC61L)).s7, 1L, 5L, 1L)).yxzzwzyzxzxxzyxz)).scc1b)).z , 0x74L), p_1216->g_552)), l_930)))), 0x4C84A8E85BFDD0BCL))) != 0xD7554739L))) ^ p_13), 12))) , 0xE8A3L) ^ (*p_1216->g_332))), 0x79F1L))))), p_1216->g_137.f3)) , p_1216->g_comm_values[p_1216->tid]) || p_13) <= p_14) && p_1216->g_708.y)) > 4L);
        }
        else
        { /* block id: 433 */
            uint32_t l_963 = 9UL;
            int32_t l_966 = 7L;
            VECTOR(int32_t, 2) l_973 = (VECTOR(int32_t, 2))(0x6802FFEFL, 0x5215521AL);
            int32_t *l_989 = &p_1216->g_35;
            VECTOR(int64_t, 2) l_994 = (VECTOR(int64_t, 2))(7L, 0x111122FA0774FA1CL);
            VECTOR(uint16_t, 4) l_1005 = (VECTOR(uint16_t, 4))(0x748DL, (VECTOR(uint16_t, 2))(0x748DL, 0UL), 0UL);
            uint64_t l_1008 = 9UL;
            VECTOR(int64_t, 16) l_1043 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x537F9E16AF3D7D47L), 0x537F9E16AF3D7D47L), 0x537F9E16AF3D7D47L, (-1L), 0x537F9E16AF3D7D47L, (VECTOR(int64_t, 2))((-1L), 0x537F9E16AF3D7D47L), (VECTOR(int64_t, 2))((-1L), 0x537F9E16AF3D7D47L), (-1L), 0x537F9E16AF3D7D47L, (-1L), 0x537F9E16AF3D7D47L);
            int64_t **l_1057 = &l_870;
            struct S0 **l_1064 = &p_1216->g_167;
            struct S0 **l_1065[5];
            int i;
            for (i = 0; i < 5; i++)
                l_1065[i] = &l_1049;
            for (p_1216->g_566.f2 = 7; (p_1216->g_566.f2 >= (-25)); p_1216->g_566.f2 = safe_sub_func_int32_t_s_s(p_1216->g_566.f2, 4))
            { /* block id: 436 */
                int64_t l_967[1][3];
                VECTOR(int32_t, 16) l_987 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
                int32_t *l_988[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                VECTOR(uint16_t, 16) l_1004 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 3UL), 3UL), 3UL, 0UL, 3UL, (VECTOR(uint16_t, 2))(0UL, 3UL), (VECTOR(uint16_t, 2))(0UL, 3UL), 0UL, 3UL, 0UL, 3UL);
                int16_t l_1009 = (-1L);
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_967[i][j] = 0x452480C1B0E25E5EL;
                }
                (1 + 1);
            }
            for (l_949 = 0; (l_949 == 6); l_949++)
            { /* block id: 458 */
                int16_t *l_1017[8] = {&l_916[0],&p_1216->g_213[0],&l_916[0],&l_916[0],&p_1216->g_213[0],&l_916[0],&l_916[0],&p_1216->g_213[0]};
                int32_t l_1021 = 1L;
                int32_t l_1022 = (-4L);
                int32_t l_1023 = 0x6C4A6F11L;
                int32_t l_1024 = (-9L);
                int32_t l_1025 = 0L;
                int i;
                for (l_698 = 0; (l_698 != 52); l_698 = safe_add_func_int16_t_s_s(l_698, 6))
                { /* block id: 461 */
                    if (p_13)
                        break;
                }
                (*l_989) = (((VECTOR(int32_t, 2))(l_1014.scb)).lo , ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(p_1216->g_1015.s7146552025766231)).s54b7, ((VECTOR(int32_t, 8))(p_1216->g_1016.yxxyxyxy)).even))).z);
                l_966 ^= ((((((0x66BC6B16B216A6C8L ^ ((void*)0 != l_989)) || ((((FAKE_DIVERGE(p_1216->group_0_offset, get_group_id(0), 10) , l_1017[3]) == &l_722[0]) && 0x1AL) == (safe_mul_func_int16_t_s_s(l_1020, (((!8UL) <= 0x3F55L) & (*l_989)))))) , (*l_989)) & l_1021) >= 1UL) != 0x9EL);
                l_1026--;
            }
            for (p_1216->g_193 = 6; (p_1216->g_193 <= (-23)); --p_1216->g_193)
            { /* block id: 470 */
                uint64_t l_1031[2];
                int64_t **l_1038 = &l_776;
                int i;
                for (i = 0; i < 2; i++)
                    l_1031[i] = 0x2C17256D74D15DA0L;
                l_1031[0]--;
                (*l_126) = (((((safe_sub_func_int8_t_s_s(((*p_1216->g_254) == ((safe_lshift_func_int16_t_s_s((~((!((((*l_625) = func_108(((**l_625) , ((*p_1216->g_152) = l_776)), l_1038, func_115(((l_785.s2 |= (p_1216->g_257 == (((((*l_689) = (safe_add_func_int8_t_s_s((*l_989), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(250UL, 0UL)).xyyx)).even)).hi))) > ((*l_989) || (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_1043.sf9)).xxxyyyxyxxxxxyxy)))).s7 ^ (((((~(safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((*p_1216->g_332), (*p_1216->g_332))), p_12))) > GROUP_DIVERGE(2, 1)) <= (*l_126)) > p_12) <= p_12)))) == l_1048) , (void*)0))) & p_14), &p_1216->g_552, p_1216->g_137.f1, p_1216), p_1216)) == l_1049) ^ p_14)) > p_13)), p_14)) | 0x6F3CL)), (*p_1216->g_254))) && p_1216->g_137.f2) , (*p_1216->g_517)) > l_963) , p_13);
                return p_1216->g_362.s0;
            }
            if (((((VECTOR(uint8_t, 4))(p_1216->g_1050.s2535)).w != (safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(0x23L, (((void*)0 != l_1057) < (!(safe_lshift_func_uint16_t_u_s((*p_1216->g_332), 3)))))), 5))) != (((((**l_665)++) != ((((*l_625) != (l_136[2] = (*l_625))) >= (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1216->g_1066.zx)), 0x72L, (-1L))).x == (((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_12, (&p_12 == &p_12))), p_13)) >= p_13) || (*l_989)))) != 7L)) > p_1216->g_161.x) == (-1L))))
            { /* block id: 481 */
                if ((atomic_inc(&p_1216->l_atomic_input[17]) == 9))
                { /* block id: 483 */
                    uint32_t l_1071 = 4294967295UL;
                    --l_1071;
                    unsigned int result = 0;
                    result += l_1071;
                    atomic_add(&p_1216->l_special_values[17], result);
                }
                else
                { /* block id: 485 */
                    (1 + 1);
                }
                return p_14;
            }
            else
            { /* block id: 489 */
                uint64_t *l_1086 = &l_1020;
                int32_t l_1091 = 0L;
                int32_t *l_1092 = &p_1216->g_968[4];
                uint32_t *l_1093 = &p_1216->g_566.f3;
                l_989 = func_115((*l_989), ((p_1216->g_38 == (p_12 || (*l_989))) , func_133(func_115((safe_sub_func_int8_t_s_s(0x02L, p_13)), func_133(func_115(((*l_1093) = (safe_rshift_func_int8_t_s_s((p_12 , (((*l_1092) |= ((safe_lshift_func_uint16_t_u_s((!(*l_989)), (((((*l_689)--) < (safe_rshift_func_uint8_t_u_s(((safe_add_func_uint64_t_u_u(((*l_1086) ^= GROUP_DIVERGE(0, 1)), (((((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((*l_989) <= p_1216->g_1066.w), GROUP_DIVERGE(1, 1))) , 1L), p_12)) != p_13) , (-1L)) ^ (*p_1216->g_254)) , p_12))) ^ 0L), 6))) && (**p_1216->g_619)) & l_1091))) ^ 0x01FEL)) , (*p_1216->g_254))), p_14))), l_870, p_14, p_1216), l_1094, p_1216), (*l_989), p_1216), &p_1216->g_137, p_1216)), p_12, p_1216);
            }
        }
    }
    return p_1216->g_1015.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1216->l_comm_values
 * writes:
 */
uint32_t  func_15(int32_t  p_16, struct S1 * p_1216)
{ /* block id: 8 */
    for (p_16 = 0; (p_16 <= 8); p_16++)
    { /* block id: 11 */
        if (p_1216->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1216->tid, 166))])
            break;
    }
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_1216->g_comm_values p_1216->g_2 p_1216->g_35 p_1216->l_comm_values
 * writes: p_1216->g_35
 */
int32_t  func_29(int64_t  p_30, struct S1 * p_1216)
{ /* block id: 17 */
    uint32_t l_43 = 1UL;
    int64_t *l_44 = &p_1216->g_38;
    int64_t *l_46 = &p_1216->g_38;
    int64_t **l_45 = &l_46;
    int32_t l_105[10] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
    int i;
    if ((safe_add_func_uint16_t_u_u((GROUP_DIVERGE(0, 1) <= p_30), ((((((safe_mod_func_int16_t_s_s(((!(p_30 , (0x104AL ^ 0xBA8DL))) || (l_43 <= l_43)), p_1216->g_comm_values[p_1216->tid])) == ((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 4))((l_44 == ((*l_45) = (l_43 , &p_30))), 0x3763964E48C0C84AL, (-3L), 0x08F98093AF8EF5D3L)), (int64_t)(-1L)))), ((VECTOR(int64_t, 4))(0x39CE85662B132DC1L))))).hi)).odd != 18446744073709551608UL) ^ FAKE_DIVERGE(p_1216->global_0_offset, get_global_id(0), 10))) , 0x4F989879L) | 0x519BA600L) , GROUP_DIVERGE(0, 1)) == p_1216->g_2))))
    { /* block id: 19 */
        if ((atomic_inc(&p_1216->g_atomic_input[22 * get_linear_group_id() + 1]) == 7))
        { /* block id: 21 */
            VECTOR(int32_t, 2) l_47 = (VECTOR(int32_t, 2))(0x6E1E3C1DL, 2L);
            int i;
            if (((VECTOR(int32_t, 16))(l_47.yyxxxxxxyxxxyyxx)).sd)
            { /* block id: 22 */
                uint64_t l_48[5][8][6] = {{{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L}},{{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L}},{{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L}},{{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L}},{{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L},{0x7AF82577C8A60B10L,18446744073709551609UL,18446744073709551609UL,0x7AF82577C8A60B10L,18446744073709551615UL,0x91A13C53D1739C36L}}};
                int8_t l_49 = 8L;
                int32_t l_86 = 0x500D59F5L;
                int32_t *l_85[2];
                int32_t *l_87 = &l_86;
                int32_t *l_88 = &l_86;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_85[i] = &l_86;
                l_47.y |= l_48[1][0][3];
                if (l_49)
                { /* block id: 24 */
                    VECTOR(int32_t, 16) l_50 = (VECTOR(int32_t, 16))(0x29FE0D49L, (VECTOR(int32_t, 4))(0x29FE0D49L, (VECTOR(int32_t, 2))(0x29FE0D49L, 0x16A8AB26L), 0x16A8AB26L), 0x16A8AB26L, 0x29FE0D49L, 0x16A8AB26L, (VECTOR(int32_t, 2))(0x29FE0D49L, 0x16A8AB26L), (VECTOR(int32_t, 2))(0x29FE0D49L, 0x16A8AB26L), 0x29FE0D49L, 0x16A8AB26L, 0x29FE0D49L, 0x16A8AB26L);
                    int32_t l_51 = 7L;
                    int32_t l_63 = 0x77822E2CL;
                    int i;
                    l_47.x ^= ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(0x00EB00D6L, ((VECTOR(int32_t, 8))(l_50.sf9336ae2)).s7, (-1L), 0L, 0x6630802EL, (l_51 , 0x11DCBA93L), 0x75A7A75AL, 3L)).s4412107305253522))).s3;
                    for (l_51 = 11; (l_51 <= (-28)); l_51--)
                    { /* block id: 28 */
                        int32_t l_54[4][5] = {{0x2EDDA491L,0x653E2A51L,0x6B581468L,0x653E2A51L,0x2EDDA491L},{0x2EDDA491L,0x653E2A51L,0x6B581468L,0x653E2A51L,0x2EDDA491L},{0x2EDDA491L,0x653E2A51L,0x6B581468L,0x653E2A51L,0x2EDDA491L},{0x2EDDA491L,0x653E2A51L,0x6B581468L,0x653E2A51L,0x2EDDA491L}};
                        int32_t l_55[2];
                        int32_t l_56 = 0x6C10F06FL;
                        uint16_t l_57[9][6] = {{65535UL,0x2B09L,0x2B09L,65535UL,9UL,65530UL},{65535UL,0x2B09L,0x2B09L,65535UL,9UL,65530UL},{65535UL,0x2B09L,0x2B09L,65535UL,9UL,65530UL},{65535UL,0x2B09L,0x2B09L,65535UL,9UL,65530UL},{65535UL,0x2B09L,0x2B09L,65535UL,9UL,65530UL},{65535UL,0x2B09L,0x2B09L,65535UL,9UL,65530UL},{65535UL,0x2B09L,0x2B09L,65535UL,9UL,65530UL},{65535UL,0x2B09L,0x2B09L,65535UL,9UL,65530UL},{65535UL,0x2B09L,0x2B09L,65535UL,9UL,65530UL}};
                        uint64_t l_60 = 0x92C76476FD32FAA6L;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_55[i] = 0x7A4877AAL;
                        ++l_57[7][2];
                        l_60--;
                    }
                    l_47.y ^= l_63;
                }
                else
                { /* block id: 33 */
                    int32_t l_64 = (-2L);
                    int32_t l_70 = 0x76211E33L;
                    int16_t l_71 = 0x42E7L;
                    VECTOR(int16_t, 8) l_72 = (VECTOR(int16_t, 8))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x199AL), 0x199AL), 0x199AL, (-6L), 0x199AL);
                    VECTOR(int16_t, 16) l_73 = (VECTOR(int16_t, 16))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x602FL), 0x602FL), 0x602FL, (-7L), 0x602FL, (VECTOR(int16_t, 2))((-7L), 0x602FL), (VECTOR(int16_t, 2))((-7L), 0x602FL), (-7L), 0x602FL, (-7L), 0x602FL);
                    VECTOR(int16_t, 2) l_74 = (VECTOR(int16_t, 2))(0x2F4EL, 0x4E0EL);
                    VECTOR(int16_t, 2) l_75 = (VECTOR(int16_t, 2))(0x048BL, (-1L));
                    VECTOR(int16_t, 8) l_76 = (VECTOR(int16_t, 8))(0x51B7L, (VECTOR(int16_t, 4))(0x51B7L, (VECTOR(int16_t, 2))(0x51B7L, 0x24E8L), 0x24E8L), 0x24E8L, 0x51B7L, 0x24E8L);
                    VECTOR(uint16_t, 8) l_77 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 6UL), 6UL), 6UL, 65535UL, 6UL);
                    int i;
                    for (l_64 = 0; (l_64 < (-9)); l_64--)
                    { /* block id: 36 */
                        uint8_t l_67 = 3UL;
                        int32_t l_69 = 0x14FAD7DEL;
                        int32_t *l_68 = &l_69;
                        l_68 = (((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 2))(1L, 0x5839F227602C2F6DL)).xxxx, (int64_t)l_67, (int64_t)(-1L)))).x , (void*)0);
                    }
                    l_47.x |= ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(0x60EBL, ((VECTOR(int16_t, 4))(l_70, 0x6C26L, 0x4EF7L, 0x6307L)).y, 0x1696L, (l_71 = 7L), ((VECTOR(int16_t, 4))(4L, 0x1C40L, 0L, 0x1527L)), (-1L), 0x6683L, 0L, ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(l_72.s3652005106404470)).s08, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_73.s12706a3b)))).lo, ((VECTOR(int16_t, 8))(l_74.xyxyxyxx)).even))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_75.yyxx)))), ((VECTOR(int16_t, 2))(0L, 0L)), (-1L), 0L)).hi))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(9L, (-3L), 0x38C4L, 0x5B1CL, ((VECTOR(int16_t, 4))(l_76.s7340)))).even)))).s17))), 0x2763L, 0x01D1L, 0x0374L)).odd, ((VECTOR(uint16_t, 2))(l_77.s53)).xyxxyyyx))).s6;
                    for (l_70 = 0; (l_70 != 6); l_70++)
                    { /* block id: 43 */
                        int64_t l_80 = (-9L);
                        uint32_t l_81 = 0xE91FFD6FL;
                        uint32_t l_82 = 0x58A4148AL;
                        uint32_t l_83 = 0xF8E688B2L;
                        uint16_t l_84 = 65535UL;
                        l_64 = 5L;
                        l_47.y = (((l_80 , l_81) , l_82) , l_83);
                        l_47.x = l_84;
                    }
                }
                l_87 = l_85[1];
                l_88 = (void*)0;
            }
            else
            { /* block id: 51 */
                int32_t l_89 = (-1L);
                uint8_t l_90 = 0x26L;
                VECTOR(uint64_t, 2) l_91 = (VECTOR(uint64_t, 2))(0UL, 1UL);
                VECTOR(uint64_t, 16) l_92 = (VECTOR(uint64_t, 16))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 2UL), 2UL), 2UL, 6UL, 2UL, (VECTOR(uint64_t, 2))(6UL, 2UL), (VECTOR(uint64_t, 2))(6UL, 2UL), 6UL, 2UL, 6UL, 2UL);
                int64_t l_93 = 1L;
                uint64_t l_94 = 8UL;
                uint64_t l_95 = 0x99FBD2CEF0F45DD7L;
                VECTOR(int8_t, 8) l_96 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-7L)), (-7L)), (-7L), 1L, (-7L));
                uint8_t l_97[1][2][6] = {{{250UL,1UL,3UL,1UL,250UL,250UL},{250UL,1UL,3UL,1UL,250UL,250UL}}};
                int32_t l_98[7][9][2] = {{{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL}},{{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL}},{{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL}},{{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL}},{{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL}},{{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL}},{{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL},{(-5L),0x69B646BDL}}};
                uint32_t l_99 = 0x99B11781L;
                uint8_t l_100[7];
                uint32_t l_101 = 0UL;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_100[i] = 0x52L;
                l_47.x |= ((l_99 = ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(0L, ((l_89 , ((l_90 , ((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 8))(l_91.xyxxxyyy)).lo, ((VECTOR(uint64_t, 2))(l_92.see)).yxxx))).y) , l_93)) , l_94), ((l_95 = (-1L)) , ((VECTOR(int8_t, 2))(l_96.s75)).hi), 1L, (l_98[0][1][0] = (l_97[0][1][3] = ((VECTOR(int8_t, 2))((-5L), 0L)).even)), 0L, 0x34L, 5L)).s6233125124725125))).sa) , (l_100[4] , l_101));
            }
            unsigned int result = 0;
            result += l_47.y;
            result += l_47.x;
            atomic_add(&p_1216->g_special_values[22 * get_linear_group_id() + 1], result);
        }
        else
        { /* block id: 58 */
            (1 + 1);
        }
        return p_30;
    }
    else
    { /* block id: 62 */
        int32_t *l_104 = &p_1216->g_35;
        l_105[8] = ((*l_104) ^= (safe_rshift_func_uint16_t_u_u(p_1216->g_comm_values[p_1216->tid], 3)));
    }
    return p_1216->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1216->tid, 166))];
}


/* ------------------------------------------ */
/* 
 * reads : p_1216->g_618 p_1216->g_192 p_1216->g_619 p_1216->g_565 p_1216->g_254 p_1216->g_215
 * writes: p_1216->g_192 p_1216->g_566 p_1216->g_35 p_1216->g_137
 */
struct S0 * func_108(int64_t * p_109, int64_t ** p_110, int32_t * p_111, struct S1 * p_1216)
{ /* block id: 271 */
    struct S0 l_620[3] = {{1UL,4294967290UL,1L,0UL,0x6BC3A5208DAE4994L},{1UL,4294967290UL,1L,0UL,0x6BC3A5208DAE4994L},{1UL,4294967290UL,1L,0UL,0x6BC3A5208DAE4994L}};
    int8_t **l_623 = &p_1216->g_254;
    int i;
    (*p_1216->g_619) = (*p_1216->g_618);
    (*p_1216->g_565) = l_620[1];
    (*p_111) = l_620[1].f0;
    (*p_1216->g_565) = (((safe_add_func_int8_t_s_s((l_623 == (void*)0), 0x4AL)) && (*p_1216->g_254)) , l_620[2]);
    return &p_1216->g_137;
}


/* ------------------------------------------ */
/* 
 * reads : p_1216->g_137.f4 p_1216->g_332 p_1216->g_566.f3 p_1216->g_320 p_1216->g_343 p_1216->g_485 p_1216->g_603 p_1216->g_254 p_1216->g_566.f4 p_1216->g_517 p_1216->g_170 p_1216->g_35 p_1216->g_152 p_1216->g_153 p_1216->g_617 p_1216->g_618
 * writes: p_1216->g_137.f4 p_1216->g_276 p_1216->g_215 p_1216->g_192
 */
int64_t * func_112(int32_t * p_113, struct S0 * p_114, struct S1 * p_1216)
{ /* block id: 252 */
    int32_t *l_567 = &p_1216->g_193;
    int64_t l_570 = 0x05353857228DF719L;
    int32_t l_572 = 0x1B853846L;
    int32_t l_573 = 7L;
    int32_t l_574 = (-10L);
    int32_t l_575 = 1L;
    int32_t l_576[5][8][3] = {{{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L}},{{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L}},{{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L}},{{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L}},{{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L},{0x6EB23598L,0x29D44770L,0x386F3192L}}};
    uint8_t l_577 = 0x38L;
    uint64_t l_604 = 0xCD4EFAE2032EA7EDL;
    uint16_t l_605 = 0xB0ACL;
    uint32_t l_606 = 1UL;
    int i, j, k;
    l_567 = (void*)0;
    for (p_1216->g_137.f4 = 0; (p_1216->g_137.f4 < (-20)); p_1216->g_137.f4 = safe_sub_func_uint8_t_u_u(p_1216->g_137.f4, 6))
    { /* block id: 256 */
        int32_t *l_571[4][5][7] = {{{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35}},{{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35}},{{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35}},{{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_2,&p_1216->g_193,&p_1216->g_35}}};
        VECTOR(int32_t, 4) l_584 = (VECTOR(int32_t, 4))(0x13DA527EL, (VECTOR(int32_t, 2))(0x13DA527EL, 4L), 4L);
        int8_t *l_585 = (void*)0;
        int8_t **l_586 = &l_585;
        uint8_t l_599 = 0x28L;
        int64_t *l_600 = (void*)0;
        int64_t *l_601 = (void*)0;
        int64_t *l_602 = &l_570;
        VECTOR(int64_t, 16) l_614 = (VECTOR(int64_t, 16))(0x40F4E6893019DEEEL, (VECTOR(int64_t, 4))(0x40F4E6893019DEEEL, (VECTOR(int64_t, 2))(0x40F4E6893019DEEEL, 0x058D25ECAF3071E0L), 0x058D25ECAF3071E0L), 0x058D25ECAF3071E0L, 0x40F4E6893019DEEEL, 0x058D25ECAF3071E0L, (VECTOR(int64_t, 2))(0x40F4E6893019DEEEL, 0x058D25ECAF3071E0L), (VECTOR(int64_t, 2))(0x40F4E6893019DEEEL, 0x058D25ECAF3071E0L), 0x40F4E6893019DEEEL, 0x058D25ECAF3071E0L, 0x40F4E6893019DEEEL, 0x058D25ECAF3071E0L);
        VECTOR(int64_t, 16) l_615 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x5AED52A008398A1BL), 0x5AED52A008398A1BL), 0x5AED52A008398A1BL, (-1L), 0x5AED52A008398A1BL, (VECTOR(int64_t, 2))((-1L), 0x5AED52A008398A1BL), (VECTOR(int64_t, 2))((-1L), 0x5AED52A008398A1BL), (-1L), 0x5AED52A008398A1BL, (-1L), 0x5AED52A008398A1BL);
        int i, j, k;
        ++l_577;
        if (((safe_lshift_func_int8_t_s_u((((((safe_lshift_func_int8_t_s_s(l_576[4][7][0], 1)) < (((l_574 >= ((VECTOR(int32_t, 16))(l_584.wyxyyxwxwyxwzwxx)).s3) >= ((*p_1216->g_254) = (((*p_1216->g_332) = (((*l_586) = l_585) == (void*)0)) <= (((safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((p_1216->g_566.f3 || (((*l_602) |= (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(0xB8A64E8E6CE3D4C4L, 3UL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 8))(p_1216->g_471.w, 18446744073709551615UL, ((l_599 || (0L >= l_576[4][7][0])) , p_1216->g_161.y), ((VECTOR(uint64_t, 4))(0x39FF25B8650137F8L)), 0x464BFE5FDFEF2948L)).s54))))).xxyyyyxx)), 18446744073709551615UL, ((VECTOR(uint64_t, 4))(18446744073709551606UL)), 0x8B083B3C111A278CL)).sd, p_1216->g_320)), GROUP_DIVERGE(2, 1)))) <= p_1216->g_566.f3)), 4294967295UL)), p_1216->g_343.s5)), p_1216->g_485.y)), FAKE_DIVERGE(p_1216->group_2_offset, get_group_id(2), 10))) || p_1216->g_603.s6) < l_604)))) >= l_605)) == p_1216->g_566.f4) <= 4UL) || (*p_1216->g_517)), 1)) , (*p_113)))
        { /* block id: 262 */
            uint32_t l_609 = 4294967287UL;
            ++l_606;
            l_609++;
        }
        else
        { /* block id: 265 */
            return (*p_1216->g_152);
        }
        (*p_1216->g_618) = (((FAKE_DIVERGE(p_1216->local_0_offset, get_local_id(0), 10) < (0x9730L >= (safe_add_func_uint64_t_u_u(0x5BDCE7D52A1E287FL, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_614.s5594b7bc531a3cd0)).hi)).s23)), 0x3C0B915FC6067853L, (-1L))).zzzwywxwywxxwzyz)).sf2, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_615.sbaa0)))), ((VECTOR(int64_t, 4))(p_1216->g_616.s2f43)))).s1474526676374642)).s4c23)).hi))).yxxxxyxy)).s1)))) | p_1216->g_617) , l_571[1][2][4]);
    }
    return (*p_1216->g_152);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_115(uint32_t  p_116, int64_t * p_117, int64_t  p_118, struct S1 * p_1216)
{ /* block id: 243 */
    int32_t *l_555 = &p_1216->g_35;
    int32_t *l_556 = &p_1216->g_193;
    int32_t *l_557 = &p_1216->g_35;
    int32_t l_558 = 0L;
    int32_t *l_559 = &p_1216->g_35;
    int32_t *l_560[10][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint64_t l_561 = 0xD2B61FF4C20A1247L;
    int32_t *l_564 = &p_1216->g_35;
    int i, j;
    if ((atomic_inc(&p_1216->l_atomic_input[9]) == 7))
    { /* block id: 245 */
        VECTOR(int32_t, 4) l_553 = (VECTOR(int32_t, 4))(0x532ECA87L, (VECTOR(int32_t, 2))(0x532ECA87L, (-5L)), (-5L));
        int64_t l_554 = 0x24D0F980DDE57528L;
        int i;
        l_554 |= ((VECTOR(int32_t, 16))(l_553.wxxwzwyxxywwxyxw)).s2;
        unsigned int result = 0;
        result += l_553.w;
        result += l_553.z;
        result += l_553.y;
        result += l_553.x;
        result += l_554;
        atomic_add(&p_1216->l_special_values[9], result);
    }
    else
    { /* block id: 247 */
        (1 + 1);
    }
    --l_561;
    return l_564;
}


/* ------------------------------------------ */
/* 
 * reads : p_1216->g_149 p_1216->g_161 p_1216->g_137 p_1216->g_170 p_1216->g_153 p_1216->g_35 p_1216->g_2 p_1216->g_38 p_1216->g_215 p_1216->g_216 p_1216->g_193 p_1216->g_213 p_1216->g_257 p_1216->g_167 p_1216->g_254 p_1216->g_274 p_1216->g_276 p_1216->g_152 p_1216->g_192 p_1216->g_342 p_1216->g_343 p_1216->g_362 p_1216->g_363 p_1216->g_364 p_1216->g_365 p_1216->g_379 p_1216->g_381 p_1216->g_388 p_1216->g_452 p_1216->g_332 p_1216->g_500 p_1216->g_comm_values p_1216->g_516
 * writes: p_1216->g_149 p_1216->g_153 p_1216->g_35 p_1216->g_167 p_1216->g_137 p_1216->g_170 p_1216->g_192 p_1216->g_38 p_1216->g_213 p_1216->g_215 p_1216->g_193 p_1216->g_225 p_1216->g_254 p_1216->g_276 p_1216->g_332 p_1216->g_161 p_1216->g_274 p_1216->g_458
 */
struct S0  func_129(int16_t  p_130, int64_t * p_131, int64_t ** p_132, struct S1 * p_1216)
{ /* block id: 72 */
    int32_t *l_156 = &p_1216->g_2;
    struct S0 *l_157 = &p_1216->g_137;
    int64_t *l_158 = &p_1216->g_137.f4;
    int64_t **l_159 = &l_158;
    VECTOR(uint64_t, 4) l_160 = (VECTOR(uint64_t, 4))(0x6A9ADD83B3E919F6L, (VECTOR(uint64_t, 2))(0x6A9ADD83B3E919F6L, 0UL), 0UL);
    VECTOR(uint64_t, 8) l_162 = (VECTOR(uint64_t, 8))(0x5B38493D40E68577L, (VECTOR(uint64_t, 4))(0x5B38493D40E68577L, (VECTOR(uint64_t, 2))(0x5B38493D40E68577L, 1UL), 1UL), 1UL, 0x5B38493D40E68577L, 1UL);
    int32_t l_165 = 0x3FB38901L;
    int32_t *l_166 = &p_1216->g_35;
    uint32_t *l_168 = (void*)0;
    uint32_t *l_169 = &p_1216->g_170;
    struct S0 l_175 = {0xD1L,4294967295UL,-1L,0UL,-3L};
    struct S0 l_227[10][1] = {{{0xAFL,6UL,0x497D4F73L,0x1BCF0158L,0x4408C1004B7888E8L}},{{0xAFL,6UL,0x497D4F73L,0x1BCF0158L,0x4408C1004B7888E8L}},{{0xAFL,6UL,0x497D4F73L,0x1BCF0158L,0x4408C1004B7888E8L}},{{0xAFL,6UL,0x497D4F73L,0x1BCF0158L,0x4408C1004B7888E8L}},{{0xAFL,6UL,0x497D4F73L,0x1BCF0158L,0x4408C1004B7888E8L}},{{0xAFL,6UL,0x497D4F73L,0x1BCF0158L,0x4408C1004B7888E8L}},{{0xAFL,6UL,0x497D4F73L,0x1BCF0158L,0x4408C1004B7888E8L}},{{0xAFL,6UL,0x497D4F73L,0x1BCF0158L,0x4408C1004B7888E8L}},{{0xAFL,6UL,0x497D4F73L,0x1BCF0158L,0x4408C1004B7888E8L}},{{0xAFL,6UL,0x497D4F73L,0x1BCF0158L,0x4408C1004B7888E8L}}};
    VECTOR(uint8_t, 8) l_273 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x7EL), 0x7EL), 0x7EL, 1UL, 0x7EL);
    VECTOR(uint16_t, 16) l_283 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x0CD5L), 0x0CD5L), 0x0CD5L, 0UL, 0x0CD5L, (VECTOR(uint16_t, 2))(0UL, 0x0CD5L), (VECTOR(uint16_t, 2))(0UL, 0x0CD5L), 0UL, 0x0CD5L, 0UL, 0x0CD5L);
    uint8_t l_288 = 255UL;
    int32_t l_318[2][3] = {{(-1L),0x086A21CEL,(-1L)},{(-1L),0x086A21CEL,(-1L)}};
    int8_t l_321 = 0x26L;
    VECTOR(int8_t, 4) l_347 = (VECTOR(int8_t, 4))(0x1AL, (VECTOR(int8_t, 2))(0x1AL, 0x58L), 0x58L);
    uint16_t l_358[2][5] = {{4UL,65535UL,65526UL,65535UL,4UL},{4UL,65535UL,65526UL,65535UL,4UL}};
    VECTOR(int32_t, 2) l_398 = (VECTOR(int32_t, 2))(0x36FBE982L, 0L);
    uint64_t *l_464 = (void*)0;
    VECTOR(int8_t, 4) l_477 = (VECTOR(int8_t, 4))(0x3FL, (VECTOR(int8_t, 2))(0x3FL, (-1L)), (-1L));
    uint32_t l_525 = 1UL;
    struct S0 l_550[10][2] = {{{0x27L,0x9FD38D0CL,-1L,0x7A8E5D40L,-1L},{255UL,1UL,1L,0xBA69F2D6L,-5L}},{{0x27L,0x9FD38D0CL,-1L,0x7A8E5D40L,-1L},{255UL,1UL,1L,0xBA69F2D6L,-5L}},{{0x27L,0x9FD38D0CL,-1L,0x7A8E5D40L,-1L},{255UL,1UL,1L,0xBA69F2D6L,-5L}},{{0x27L,0x9FD38D0CL,-1L,0x7A8E5D40L,-1L},{255UL,1UL,1L,0xBA69F2D6L,-5L}},{{0x27L,0x9FD38D0CL,-1L,0x7A8E5D40L,-1L},{255UL,1UL,1L,0xBA69F2D6L,-5L}},{{0x27L,0x9FD38D0CL,-1L,0x7A8E5D40L,-1L},{255UL,1UL,1L,0xBA69F2D6L,-5L}},{{0x27L,0x9FD38D0CL,-1L,0x7A8E5D40L,-1L},{255UL,1UL,1L,0xBA69F2D6L,-5L}},{{0x27L,0x9FD38D0CL,-1L,0x7A8E5D40L,-1L},{255UL,1UL,1L,0xBA69F2D6L,-5L}},{{0x27L,0x9FD38D0CL,-1L,0x7A8E5D40L,-1L},{255UL,1UL,1L,0xBA69F2D6L,-5L}},{{0x27L,0x9FD38D0CL,-1L,0x7A8E5D40L,-1L},{255UL,1UL,1L,0xBA69F2D6L,-5L}}};
    int i, j;
    (*l_166) = ((safe_rshift_func_uint16_t_u_s(p_130, (((((*p_132) = func_133(l_156, l_157, p_1216)) == ((*l_159) = l_158)) && ((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 2))(l_160.zx)).yxxx, ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(p_1216->g_161.xywzywywwwyxyyxz)).s80c9)), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_162.s6662)))).zzyxzzzzwzzxyxwy)).s77fa))), ((VECTOR(uint64_t, 2))(18446744073709551613UL, 1UL)).yyyx))).w) <= ((((l_165 = ((safe_sub_func_uint16_t_u_u(p_130, (!((FAKE_DIVERGE(p_1216->local_0_offset, get_local_id(0), 10) , l_156) != l_156)))) == 3UL)) <= p_130) , (void*)0) != l_157)))) , p_1216->g_161.z);
    p_1216->g_167 = l_157;
    (*l_157) = (*l_157);
    if ((((VECTOR(int8_t, 4))(0x32L, 0x38L, 1L, 0x7DL)).x && ((p_1216->g_137.f4 , (((+((--(*l_169)) <= (safe_mod_func_uint16_t_u_u((p_1216->g_161.y != ((l_175 , ((((safe_lshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((((*l_159) = (void*)0) != (*p_132)), (((p_130 , (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(FAKE_DIVERGE(p_1216->global_2_offset, get_global_id(2), 10), (safe_unary_minus_func_int16_t_s((0x632126A534EDE82FL || (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((*l_166), 2)), 0))))))), 0L))) || 1L) > p_130))), 2)) > p_1216->g_137.f4) ^ (*l_156)) < 1L)) , FAKE_DIVERGE(p_1216->global_1_offset, get_global_id(1), 10))), p_1216->g_137.f1)))) > 4294967295UL) < 1UL)) > p_130)))
    { /* block id: 81 */
        int16_t l_200 = (-8L);
        VECTOR(int32_t, 4) l_202 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x54621DE0L), 0x54621DE0L);
        VECTOR(int8_t, 2) l_209 = (VECTOR(int8_t, 2))((-2L), 0x5FL);
        int32_t **l_217 = &l_166;
        struct S0 l_226[8] = {{3UL,7UL,4L,1UL,0x0EBF453BB7679242L},{3UL,7UL,4L,1UL,0x0EBF453BB7679242L},{3UL,7UL,4L,1UL,0x0EBF453BB7679242L},{3UL,7UL,4L,1UL,0x0EBF453BB7679242L},{3UL,7UL,4L,1UL,0x0EBF453BB7679242L},{3UL,7UL,4L,1UL,0x0EBF453BB7679242L},{3UL,7UL,4L,1UL,0x0EBF453BB7679242L},{3UL,7UL,4L,1UL,0x0EBF453BB7679242L}};
        int32_t l_242 = 0x3629A008L;
        int64_t l_252 = 0x7747FD3BF148392DL;
        int i;
        for (p_1216->g_35 = (-12); (p_1216->g_35 != (-8)); ++p_1216->g_35)
        { /* block id: 84 */
            int32_t *l_191 = (void*)0;
            int32_t **l_194 = &l_191;
            struct S0 l_197[8][7] = {{{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{255UL,0x103EE57EL,0x535540F0L,0xB92934A2L,1L},{0UL,0xF17E0B46L,0L,0x533B4751L,2L},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL},{255UL,0UL,0x1C4DF7FAL,4294967292UL,0x16F131FA9AA87F73L},{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL}},{{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{255UL,0x103EE57EL,0x535540F0L,0xB92934A2L,1L},{0UL,0xF17E0B46L,0L,0x533B4751L,2L},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL},{255UL,0UL,0x1C4DF7FAL,4294967292UL,0x16F131FA9AA87F73L},{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL}},{{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{255UL,0x103EE57EL,0x535540F0L,0xB92934A2L,1L},{0UL,0xF17E0B46L,0L,0x533B4751L,2L},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL},{255UL,0UL,0x1C4DF7FAL,4294967292UL,0x16F131FA9AA87F73L},{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL}},{{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{255UL,0x103EE57EL,0x535540F0L,0xB92934A2L,1L},{0UL,0xF17E0B46L,0L,0x533B4751L,2L},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL},{255UL,0UL,0x1C4DF7FAL,4294967292UL,0x16F131FA9AA87F73L},{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL}},{{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{255UL,0x103EE57EL,0x535540F0L,0xB92934A2L,1L},{0UL,0xF17E0B46L,0L,0x533B4751L,2L},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL},{255UL,0UL,0x1C4DF7FAL,4294967292UL,0x16F131FA9AA87F73L},{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL}},{{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{255UL,0x103EE57EL,0x535540F0L,0xB92934A2L,1L},{0UL,0xF17E0B46L,0L,0x533B4751L,2L},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL},{255UL,0UL,0x1C4DF7FAL,4294967292UL,0x16F131FA9AA87F73L},{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL}},{{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{255UL,0x103EE57EL,0x535540F0L,0xB92934A2L,1L},{0UL,0xF17E0B46L,0L,0x533B4751L,2L},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL},{255UL,0UL,0x1C4DF7FAL,4294967292UL,0x16F131FA9AA87F73L},{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL}},{{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{255UL,0x103EE57EL,0x535540F0L,0xB92934A2L,1L},{0UL,0xF17E0B46L,0L,0x533B4751L,2L},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL},{255UL,0UL,0x1C4DF7FAL,4294967292UL,0x16F131FA9AA87F73L},{0xD2L,2UL,5L,0x9A5C54ACL,0x133C5350917B79CEL},{0x13L,0x829EF2F3L,-5L,0xA250765BL,0x3B53869009A4825EL}}};
            VECTOR(int32_t, 16) l_201 = (VECTOR(int32_t, 16))(0x0AB34EFDL, (VECTOR(int32_t, 4))(0x0AB34EFDL, (VECTOR(int32_t, 2))(0x0AB34EFDL, 0x48781A7FL), 0x48781A7FL), 0x48781A7FL, 0x0AB34EFDL, 0x48781A7FL, (VECTOR(int32_t, 2))(0x0AB34EFDL, 0x48781A7FL), (VECTOR(int32_t, 2))(0x0AB34EFDL, 0x48781A7FL), 0x0AB34EFDL, 0x48781A7FL, 0x0AB34EFDL, 0x48781A7FL);
            int8_t *l_212 = (void*)0;
            int8_t *l_214 = &p_1216->g_215[0][1];
            int i, j;
            (*l_194) = (p_1216->g_192 = l_191);
            for (p_1216->g_38 = 0; (p_1216->g_38 < (-14)); p_1216->g_38--)
            { /* block id: 89 */
                return l_197[2][6];
            }
            (*p_1216->g_216) ^= (safe_div_func_uint16_t_u_u((((*l_156) >= ((*l_214) |= (l_200 >= ((((((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(l_201.sb561)).wyyzyxyx, ((VECTOR(int32_t, 2))(l_202.zx)).yyxxyxxy))).s5 , ((p_1216->g_213[0] = ((safe_rshift_func_uint8_t_u_s(p_130, p_130)) > ((safe_add_func_uint64_t_u_u(((((1L != l_200) & (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_209.xxxy)).x, (!p_1216->g_2)))) < (l_209.x && (+((safe_div_func_uint32_t_u_u((GROUP_DIVERGE(2, 1) > 4294967286UL), p_130)) == (*l_166))))) & p_130), p_130)) && l_209.y))) < l_200)) != GROUP_DIVERGE(1, 1)) , p_130) == FAKE_DIVERGE(p_1216->global_0_offset, get_global_id(0), 10))))) > p_130), p_1216->g_2));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1216->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 166)), permutations[(safe_mod_func_uint32_t_u_u(p_130, 10))][(safe_mod_func_uint32_t_u_u(p_1216->tid, 166))]));
        }
        (*l_217) = &l_165;
        for (p_1216->g_137.f1 = 23; (p_1216->g_137.f1 >= 52); p_1216->g_137.f1 = safe_add_func_uint16_t_u_u(p_1216->g_137.f1, 1))
        { /* block id: 102 */
            uint8_t *l_222 = &p_1216->g_137.f0;
            uint8_t *l_223 = &l_175.f0;
            int32_t **l_224 = &l_156;
            int64_t **l_253[5] = {&p_1216->g_153,&p_1216->g_153,&p_1216->g_153,&p_1216->g_153,&p_1216->g_153};
            struct S0 *l_259 = &p_1216->g_137;
            struct S0 **l_260 = (void*)0;
            struct S0 **l_261 = (void*)0;
            struct S0 **l_262 = &p_1216->g_167;
            int i;
            if ((safe_add_func_uint8_t_u_u(((*l_223) = ((*l_222) |= 0x0CL)), (((p_1216->g_225[5][0] = l_224) == l_217) > (((((l_226[3] , (l_227[8][0] , (safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), (p_1216->g_170 = (p_1216->g_213[0] , p_1216->g_2)))))) == ((p_1216->g_215[0][0] || ((((0x33C0L ^ p_1216->g_215[0][2]) | (*l_166)) || 0x12C8L) , p_130)) , p_130)) <= 0xADL) < p_130) ^ p_1216->g_137.f1)))))
            { /* block id: 107 */
                int32_t l_247 = 0x44210C5FL;
                int64_t *l_255 = (void*)0;
                int64_t *l_256 = (void*)0;
                (*l_166) = (safe_add_func_int8_t_s_s((safe_div_func_uint8_t_u_u((((VECTOR(uint8_t, 2))(0x2CL, 0x12L)).lo < (p_1216->g_137.f0 = FAKE_DIVERGE(p_1216->global_1_offset, get_global_id(1), 10))), (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((+((safe_mul_func_int8_t_s_s(0x08L, (((**l_217) == (*p_1216->g_216)) , l_242))) > (safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(0x45L, p_1216->g_213[5])), 0L)))), (0x3CL || 0x1BL))), FAKE_DIVERGE(p_1216->global_2_offset, get_global_id(2), 10))), l_247)))), (-1L)));
                (*p_1216->g_257) &= (l_247 = (safe_rshift_func_int8_t_s_s(((0UL && (((safe_div_func_uint32_t_u_u((l_252 | (((*p_132) != ((*l_159) = (*p_132))) || ((((void*)0 == l_253[4]) >= ((p_1216->g_254 = &p_1216->g_215[0][1]) != &p_1216->g_215[0][1])) | ((*l_166) = (**l_217))))), p_130)) > p_1216->g_161.w) == p_1216->g_161.y)) , (*l_166)), 4)));
                if (p_130)
                    continue;
            }
            else
            { /* block id: 116 */
                struct S0 l_258 = {8UL,2UL,0x2A878CF9L,0x943293B1L,0x6528EAB548E30274L};
                return l_258;
            }
            (*p_1216->g_257) = ((GROUP_DIVERGE(0, 1) , l_259) == ((*l_262) = &l_226[7]));
            if ((**l_217))
                continue;
        }
    }
    else
    { /* block id: 123 */
        uint16_t *l_275 = &p_1216->g_276;
        uint8_t *l_277 = &l_227[8][0].f0;
        uint8_t l_278 = 0x19L;
        int32_t *l_279 = &l_165;
        struct S0 l_280 = {0xB6L,4294967295UL,0L,0xF65B8D72L,0x4DD2E531E6C8D591L};
        int8_t l_316 = 0x6CL;
        int32_t l_319[2];
        uint8_t l_322 = 255UL;
        VECTOR(int8_t, 16) l_355 = (VECTOR(int8_t, 16))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 6L), 6L), 6L, 6L, 6L, (VECTOR(int8_t, 2))(6L, 6L), (VECTOR(int8_t, 2))(6L, 6L), 6L, 6L, 6L, 6L);
        VECTOR(int64_t, 2) l_382 = (VECTOR(int64_t, 2))(0x3E28BBD46E1231F7L, 0x1F74BA9E946E8EC0L);
        VECTOR(int64_t, 4) l_383 = (VECTOR(int64_t, 4))(0x637BE341A81CB0F4L, (VECTOR(int64_t, 2))(0x637BE341A81CB0F4L, 0x436F293F6CEA1F4AL), 0x436F293F6CEA1F4AL);
        int32_t l_404 = 1L;
        VECTOR(uint8_t, 8) l_451 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 253UL), 253UL), 253UL, 0UL, 253UL);
        uint8_t l_457[9] = {0xF7L,0xF7L,0xF7L,0xF7L,0xF7L,0xF7L,0xF7L,0xF7L,0xF7L};
        uint32_t l_465 = 4294967293UL;
        VECTOR(uint32_t, 16) l_474 = (VECTOR(uint32_t, 16))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 1UL), 1UL), 1UL, 4294967290UL, 1UL, (VECTOR(uint32_t, 2))(4294967290UL, 1UL), (VECTOR(uint32_t, 2))(4294967290UL, 1UL), 4294967290UL, 1UL, 4294967290UL, 1UL);
        uint32_t l_505 = 7UL;
        uint64_t **l_532[10];
        int i;
        for (i = 0; i < 2; i++)
            l_319[i] = 0x1E422E25L;
        for (i = 0; i < 10; i++)
            l_532[i] = &l_464;
        (*l_279) ^= (safe_mod_func_uint32_t_u_u((((safe_mod_func_int64_t_s_s(((p_130 != ((((*l_277) ^= (safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((*l_166) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((*p_1216->g_216), 9L, ((VECTOR(int32_t, 4))((p_130 | (((!(safe_add_func_int8_t_s_s((((((((((*p_1216->g_167) , ((*l_275) &= ((((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 8))(1UL, 0x81L, ((VECTOR(uint8_t, 4))(248UL, 0UL, 0x13L, 0x57L)), 247UL, 2UL)), ((VECTOR(uint8_t, 2))(l_273.s74)).xyxyxyyx))).s0 <= (((*p_1216->g_254) , (*l_156)) , ((VECTOR(int8_t, 4))(1L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_1216->g_274.zxywyywzwxzxxwyy)).s22)), 0x48L)).w)) & (*l_156)))) >= (18446744073709551615UL | 1UL)) | p_130) , p_130) , 0x3B3921B8L) <= (-10L)) ^ 4294967287UL) >= p_1216->g_35), (*p_1216->g_254)))) != p_130) , 4294967295UL)), ((VECTOR(int32_t, 2))((-5L))), 0x02DC942DL)), 0L, 0L)).even)).y), p_1216->g_274.z)), p_1216->g_38))) && l_278) >= 0x9D3353B18B0854F1L)) | p_130), 0x98904499DD3CF3D9L)) >= 0x2F1AFB8CL) , 0xC2D1835AL), 4294967295UL));
        if ((((*l_277) = ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0x2EL, 0xCFL, 0xF0L, 255UL)))).z) >= (l_280 , (safe_div_func_uint16_t_u_u(((((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 2))(65526UL, 0xBC79L)), ((VECTOR(uint16_t, 2))(l_283.s79))))), 65534UL, 65535UL)).y < (*l_156)) <= (*p_1216->g_257)) , ((*l_279) |= (safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 16))((((safe_mod_func_uint8_t_u_u((*l_156), 3L)) >= l_288) && ((*p_132) == (*p_1216->g_152))), 0x2DBA9DB8L, ((safe_mod_func_int64_t_s_s((*l_156), 0x18C5EABFD20BF0A1L)) & p_1216->g_274.w), (*p_1216->g_216), ((VECTOR(int32_t, 4))(0x4D2FD40FL)), ((VECTOR(int32_t, 8))((-8L))))).s7, 0L)))) ^ 0UL), p_1216->g_274.z)))))
        { /* block id: 130 */
            uint16_t l_302[7] = {0xCD72L,65535UL,0xCD72L,0xCD72L,65535UL,0xCD72L,0xCD72L};
            int8_t *l_314 = (void*)0;
            int32_t l_315 = (-1L);
            int32_t *l_317[7][9] = {{&p_1216->g_193,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,&p_1216->g_193},{&p_1216->g_193,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,&p_1216->g_193},{&p_1216->g_193,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,&p_1216->g_193},{&p_1216->g_193,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,&p_1216->g_193},{&p_1216->g_193,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,&p_1216->g_193},{&p_1216->g_193,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,&p_1216->g_193},{&p_1216->g_193,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,&p_1216->g_193,&p_1216->g_35,&p_1216->g_35,&p_1216->g_35,&p_1216->g_193}};
            struct S0 l_327 = {250UL,0xA09D2B90L,1L,0x597A77BCL,0x4A7BEFD9418C2A2AL};
            VECTOR(uint16_t, 2) l_344 = (VECTOR(uint16_t, 2))(1UL, 0x1214L);
            VECTOR(uint16_t, 8) l_348 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), 65535UL, 1UL, 65535UL);
            uint8_t l_401 = 0x67L;
            int i, j;
            (*p_1216->g_192) |= ((safe_add_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(((safe_unary_minus_func_int64_t_s(((1L == ((((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((p_130 < (*l_279)), ((*l_157) , (*l_279)))), (!1L))) > (safe_sub_func_int8_t_s_s((l_302[2] & (safe_rshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u((((((safe_add_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(2, 1), ((safe_div_func_uint16_t_u_u(((l_315 |= (((safe_unary_minus_func_uint16_t_u(p_1216->g_215[0][1])) >= (*l_279)) & p_130)) >= 0L), p_130)) == 0x2887L))) == (*l_156)) & 0L), (*l_279))) || 2UL) < 0x60A4L) & 0UL) > l_302[4]), p_1216->g_38)) && p_130), l_316))), FAKE_DIVERGE(p_1216->global_2_offset, get_global_id(2), 10)))) || FAKE_DIVERGE(p_1216->group_0_offset, get_group_id(0), 10)) ^ (*l_166))) & 4294967290UL))) && (*l_166)), (*l_279))) | 4294967295UL), p_130)) > (*l_156));
            l_322--;
            for (p_1216->g_193 = 0; (p_1216->g_193 > 18); ++p_1216->g_193)
            { /* block id: 136 */
                (*l_157) = l_327;
                (*l_157) = (((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((*l_156) < ((-2L) <= (((FAKE_DIVERGE(p_1216->local_0_offset, get_local_id(0), 10) , (void*)0) == (p_1216->g_332 = (((p_131 == p_131) == 0x1B29BD16L) , &p_1216->g_276))) == (p_130 , p_1216->g_213[0])))), (*p_1216->g_254))), (*l_156))) || (-10L)) , (*l_157));
            }
            if ((safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((*p_1216->g_216) && (p_1216->g_170 != ((safe_mod_func_uint32_t_u_u((&l_280 == &l_280), (safe_unary_minus_func_uint8_t_u(249UL)))) , (safe_rshift_func_int16_t_s_u(((*l_279) >= ((VECTOR(int16_t, 2))(0x1D22L, 0x0B24L)).hi), 5))))), ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_1216->g_342.wzyxzywxyzyyywwx)).even)), ((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(p_1216->g_343.s4076551004560453)))).hi, ((VECTOR(uint16_t, 4))(l_344.yyxx)).wxzxwyxz))))).s0240, (uint16_t)((p_130 == p_130) , (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_1216->group_1_offset, get_group_id(1), 10), ((VECTOR(int8_t, 8))(l_347.xwyzwzyx)).s2)))))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_348.s4634601537756215)).s6655)), (((~(safe_mod_func_int8_t_s_s((*p_1216->g_254), p_130))) >= p_130) || 0x7C76L), 65535UL, ((VECTOR(uint16_t, 4))(1UL)), 65528UL, 0x8991L)).sde, ((VECTOR(uint16_t, 2))(0x383BL))))).xxyxxyxyyyyxxyxx)).sccbe))))).z)), p_1216->g_213[2])))
            { /* block id: 141 */
                uint64_t *l_359[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_360 = 9L;
                int32_t l_361[4][6][3] = {{{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L}},{{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L}},{{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L}},{{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L},{0x7CC9972FL,0x1BAD5C99L,2L}}};
                int8_t *l_366 = (void*)0;
                int8_t *l_367 = (void*)0;
                int8_t *l_368[3][5][2] = {{{(void*)0,&l_316},{(void*)0,&l_316},{(void*)0,&l_316},{(void*)0,&l_316},{(void*)0,&l_316}},{{(void*)0,&l_316},{(void*)0,&l_316},{(void*)0,&l_316},{(void*)0,&l_316},{(void*)0,&l_316}},{{(void*)0,&l_316},{(void*)0,&l_316},{(void*)0,&l_316},{(void*)0,&l_316},{(void*)0,&l_316}}};
                VECTOR(uint8_t, 4) l_376 = (VECTOR(uint8_t, 4))(0xBFL, (VECTOR(uint8_t, 2))(0xBFL, 255UL), 255UL);
                VECTOR(int8_t, 16) l_389 = (VECTOR(int8_t, 16))(0x66L, (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 0x73L), 0x73L), 0x73L, 0x66L, 0x73L, (VECTOR(int8_t, 2))(0x66L, 0x73L), (VECTOR(int8_t, 2))(0x66L, 0x73L), 0x66L, 0x73L, 0x66L, 0x73L);
                int i, j, k;
                if (((((((0x2932B4017B7A4F7BL <= ((safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((((VECTOR(int8_t, 16))(l_355.sec6d95a6424097c1)).s6 < ((*p_1216->g_254) = (p_1216->g_343.s6 && 18446744073709551608UL))), (safe_add_func_uint64_t_u_u((l_361[2][4][0] = (l_360 = l_358[0][2])), (p_1216->g_161.z = 0x9BE786453BB9D2CBL))))), (((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(0UL, 255UL)).yxxx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(p_1216->g_362.s4003660604422463)).hi)).odd))).z >= ((VECTOR(int8_t, 16))(((p_1216->g_362.s0 < p_1216->g_137.f3) != 0x736796509101B13EL), 0x64L, ((VECTOR(int8_t, 2))(0x48L, 1L)), 0x48L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1216->g_363.s24)).xxxx)), ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(p_1216->g_364.yxxxyyxyxxxxxxyx)).even)), 0x69L, ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(p_1216->g_365.s6736502543174104)).s52e6, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((p_1216->g_274.y = (p_130 , 8L)), 3L, 0x1EL, 1L)).xywwwyxw)))).s12)).yyyy, ((VECTOR(int8_t, 4))((-5L)))))), ((VECTOR(int8_t, 4))(1L))))), 0L, 0x3AL)))).odd)).lo, (int8_t)0L))), ((VECTOR(int8_t, 2))(0L)), 6L)).s8))) && p_1216->g_38)) , (*l_279)) < 18446744073709551615UL) > 0xFE28L) & p_1216->g_137.f4) , l_361[2][4][0]))
                { /* block id: 147 */
                    uint16_t l_369 = 1UL;
                    VECTOR(int16_t, 2) l_380 = (VECTOR(int16_t, 2))(0x0DC5L, (-1L));
                    int i;
                    l_369++;
                    (*p_1216->g_192) ^= (safe_rshift_func_int16_t_s_u(1L, ((safe_sub_func_uint16_t_u_u(((l_361[1][1][0] && (((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_1216->g_364.y, 0xB2L, 0xECL, 255UL)).wzxywxxywwwwxwxz)))).s769f, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_376.yy)).xxxy))))))).zxwwxwwwywwzyxyw)).sb6, ((VECTOR(uint8_t, 8))((safe_mod_func_int64_t_s_s((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 2))((-1L), 3L)).xxxxyxyxyxxyxyxy, ((VECTOR(int64_t, 4))(0x5823916C547C9077L, 0x0F90EE57200D2AF5L, 0L, 0x5D887FD45AB81DD4L)).zyzwywxzwyyzxwzx, ((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 16))(0x63A252C6B5AE8FC5L, ((VECTOR(int64_t, 2))(0x4B922EB87E373AC1L, (-2L))).odd, 0x70A066165A788E1EL, ((VECTOR(int64_t, 8))(p_1216->g_379.zwzywxzz)).s6, (((VECTOR(int16_t, 4))(l_380.yxxy)).y | p_130), (((void*)0 == &p_1216->g_192) , (*l_166)), ((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 2))(p_1216->g_381.yy)).yxyxyxxy, ((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 8))(l_382.xxyyyxxy)).s47, ((VECTOR(int64_t, 2))(0L, 0x750C409C2E319DABL))))).xxyxxyyxxxyyxyxx)).odd, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_383.wzwywwxx)))))))))), 0x6D0A3387C044965DL, (-5L))).s29, (int64_t)(safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_1216->g_388.s70)).xxxyxyyyxyxxyxxx)).odd, ((VECTOR(int8_t, 2))(l_389.s57)).xyyyyyyy))).s1, (((safe_div_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((0UL || p_1216->g_137.f3), p_130)) < p_130) , (*p_1216->g_254)), 0x49L)) != p_130) , (*l_166)))) | p_130), 0UL))))).yyxxxxyxxxyyyxyx))).scf1b)).w != 1L), 0x41DC97F86459A5AEL)), 0x8FL, 0x2AL, p_130, p_130, p_130, 0xB0L, 0x06L)).s43))).lo || 251UL)) | p_1216->g_342.w), 65535UL)) < p_1216->g_161.y)));
                }
                else
                { /* block id: 150 */
                    int32_t **l_394 = &p_1216->g_192;
                    int32_t ***l_395[3][7] = {{&p_1216->g_225[5][0],&p_1216->g_225[5][0],&p_1216->g_225[5][0],&p_1216->g_225[5][0],&p_1216->g_225[5][0],&p_1216->g_225[5][0],&p_1216->g_225[5][0]},{&p_1216->g_225[5][0],&p_1216->g_225[5][0],&p_1216->g_225[5][0],&p_1216->g_225[5][0],&p_1216->g_225[5][0],&p_1216->g_225[5][0],&p_1216->g_225[5][0]},{&p_1216->g_225[5][0],&p_1216->g_225[5][0],&p_1216->g_225[5][0],&p_1216->g_225[5][0],&p_1216->g_225[5][0],&p_1216->g_225[5][0],&p_1216->g_225[5][0]}};
                    int i, j;
                    p_1216->g_225[5][0] = l_394;
                    for (l_165 = 1; (l_165 < (-20)); l_165 = safe_sub_func_uint16_t_u_u(l_165, 7))
                    { /* block id: 154 */
                        int64_t l_399 = 0L;
                        int32_t l_400 = 0x13A689A7L;
                        (*p_1216->g_216) |= ((VECTOR(int32_t, 4))(l_398.yyyx)).z;
                        l_401++;
                        if (p_130)
                            break;
                    }
                    return l_327;
                }
                atomic_sub(&p_1216->g_atomic_reduction[get_linear_group_id()], (*l_279));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1216->v_collective += p_1216->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            else
            { /* block id: 162 */
                uint8_t l_405 = 0xDBL;
                int64_t l_459 = (-10L);
                int32_t **l_460[3][3][4] = {{{&l_317[5][4],&l_317[5][4],&l_156,&l_279},{&l_317[5][4],&l_317[5][4],&l_156,&l_279},{&l_317[5][4],&l_317[5][4],&l_156,&l_279}},{{&l_317[5][4],&l_317[5][4],&l_156,&l_279},{&l_317[5][4],&l_317[5][4],&l_156,&l_279},{&l_317[5][4],&l_317[5][4],&l_156,&l_279}},{{&l_317[5][4],&l_317[5][4],&l_156,&l_279},{&l_317[5][4],&l_317[5][4],&l_156,&l_279},{&l_317[5][4],&l_317[5][4],&l_156,&l_279}}};
                int i, j, k;
                --l_405;
                if ((atomic_inc(&p_1216->l_atomic_input[5]) == 5))
                { /* block id: 165 */
                    int32_t l_408 = (-1L);
                    VECTOR(int32_t, 2) l_418 = (VECTOR(int32_t, 2))(0L, 0x39C90AC0L);
                    int32_t l_434 = 0x38AF6535L;
                    int32_t *l_435 = (void*)0;
                    int i;
                    for (l_408 = 0; (l_408 < (-15)); l_408 = safe_sub_func_int8_t_s_s(l_408, 1))
                    { /* block id: 168 */
                        uint32_t l_411 = 1UL;
                        uint16_t l_412 = 2UL;
                        uint64_t l_413 = 18446744073709551614UL;
                        int64_t l_414[10][4] = {{(-1L),0x22E0B0EFBD0BE629L,0x3A2C4CC19F7E5529L,0x22E0B0EFBD0BE629L},{(-1L),0x22E0B0EFBD0BE629L,0x3A2C4CC19F7E5529L,0x22E0B0EFBD0BE629L},{(-1L),0x22E0B0EFBD0BE629L,0x3A2C4CC19F7E5529L,0x22E0B0EFBD0BE629L},{(-1L),0x22E0B0EFBD0BE629L,0x3A2C4CC19F7E5529L,0x22E0B0EFBD0BE629L},{(-1L),0x22E0B0EFBD0BE629L,0x3A2C4CC19F7E5529L,0x22E0B0EFBD0BE629L},{(-1L),0x22E0B0EFBD0BE629L,0x3A2C4CC19F7E5529L,0x22E0B0EFBD0BE629L},{(-1L),0x22E0B0EFBD0BE629L,0x3A2C4CC19F7E5529L,0x22E0B0EFBD0BE629L},{(-1L),0x22E0B0EFBD0BE629L,0x3A2C4CC19F7E5529L,0x22E0B0EFBD0BE629L},{(-1L),0x22E0B0EFBD0BE629L,0x3A2C4CC19F7E5529L,0x22E0B0EFBD0BE629L},{(-1L),0x22E0B0EFBD0BE629L,0x3A2C4CC19F7E5529L,0x22E0B0EFBD0BE629L}};
                        int32_t l_415 = 0x0EC63F4DL;
                        uint64_t l_416 = 0x1316676127FEACCDL;
                        int32_t l_417 = 0x697AE72CL;
                        int i, j;
                        l_413 &= (l_412 = l_411);
                        l_415 |= (l_414[7][0] , 0L);
                        l_417 ^= l_416;
                    }
                    if (((VECTOR(int32_t, 4))(l_418.yyxy)).x)
                    { /* block id: 174 */
                        int32_t l_420 = 0x1EDFF912L;
                        int32_t *l_419 = &l_420;
                        struct S0 **l_421[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        struct S0 l_424[8] = {{255UL,5UL,1L,4294967288UL,8L},{255UL,5UL,1L,4294967288UL,8L},{255UL,5UL,1L,4294967288UL,8L},{255UL,5UL,1L,4294967288UL,8L},{255UL,5UL,1L,4294967288UL,8L},{255UL,5UL,1L,4294967288UL,8L},{255UL,5UL,1L,4294967288UL,8L},{255UL,5UL,1L,4294967288UL,8L}};
                        struct S0 *l_423[10] = {&l_424[2],&l_424[2],&l_424[2],&l_424[2],&l_424[2],&l_424[2],&l_424[2],&l_424[2],&l_424[2],&l_424[2]};
                        struct S0 **l_422 = &l_423[2];
                        int32_t *l_425 = &l_420;
                        int32_t *l_426 = &l_420;
                        int i;
                        l_419 = l_419;
                        l_422 = l_421[0];
                        l_426 = l_425;
                    }
                    else
                    { /* block id: 178 */
                        uint8_t l_427 = 252UL;
                        uint64_t **l_430 = (void*)0;
                        struct S0 l_431 = {0x01L,0x428ACA28L,0x617510E4L,0xE128AF2AL,3L};
                        struct S0 l_432 = {251UL,1UL,0x2395D9EEL,4294967292UL,-2L};
                        struct S0 l_433 = {1UL,0UL,0x09516464L,0x7C743D4EL,9L};
                        l_408 ^= (l_418.y = (-10L));
                        l_427--;
                        l_430 = (void*)0;
                        l_433 = (l_432 = l_431);
                    }
                    l_418.y |= 0x23F9DE37L;
                    l_435 = ((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551608UL, 0UL)).yxyx)).ywxwxyxxxwwwzxwx)).s2e)), 4UL, 0x6E8BAAD3CF559CB7L)).lo)).odd , l_434) , l_435);
                    unsigned int result = 0;
                    result += l_408;
                    result += l_418.y;
                    result += l_418.x;
                    result += l_434;
                    atomic_add(&p_1216->l_special_values[5], result);
                }
                else
                { /* block id: 188 */
                    (1 + 1);
                }
                for (p_1216->g_170 = (-22); (p_1216->g_170 != 60); ++p_1216->g_170)
                { /* block id: 193 */
                    uint32_t **l_448 = &l_169;
                    (*p_1216->g_192) = (safe_add_func_uint8_t_u_u(((65530UL > (safe_rshift_func_uint8_t_u_s((((p_1216->g_458 = (safe_div_func_uint16_t_u_u((p_130 <= (safe_add_func_uint64_t_u_u((((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(1UL, 0UL)).xxyx)), ((VECTOR(uint64_t, 2))(0xB1B4406980F66EA4L, 8UL)), 0x1C4FED9C12192480L, 18446744073709551607UL, 0x1460B31C93FC291BL, 0UL, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 16))(FAKE_DIVERGE(p_1216->group_1_offset, get_group_id(1), 10), 5UL, ((p_130 , (safe_div_func_uint64_t_u_u((p_1216->g_161.x ^= ((VECTOR(uint64_t, 8))(0x2A2B512E6EF62243L, ((VECTOR(uint64_t, 4))((&p_1216->g_170 == ((*l_448) = &p_1216->g_170)), (safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_451.s0451462450720462)))).se, p_130)), 3UL, 2UL)), ((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(p_1216->g_452.yyyxyyyxyyyxyxxy)).hi)).s23))), 18446744073709551615UL)).s1), (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(0x8ED5L, (*p_1216->g_332))), 2))))) == 254UL), 1UL, 4294967295UL, ((VECTOR(uint32_t, 8))(4294967292UL)), ((VECTOR(uint32_t, 2))(0x091A4CB6L)), 0x213C3EFCL)).sff, ((VECTOR(uint32_t, 2))(0x4C54A92AL))))), FAKE_DIVERGE(p_1216->group_2_offset, get_group_id(2), 10), 1UL, 0x4323FA874C5D7A30L)).odd)).lo))).y , p_130), (*l_279)))), l_457[1]))) >= l_459) | p_130), 1))) | 0xB2L), p_1216->g_137.f3));
                }
                l_156 = (l_317[2][4] = (void*)0);
            }
        }
        else
        { /* block id: 202 */
            uint32_t l_467[8][1][3] = {{{0xB60ABF05L,0xB60ABF05L,0xB60ABF05L}},{{0xB60ABF05L,0xB60ABF05L,0xB60ABF05L}},{{0xB60ABF05L,0xB60ABF05L,0xB60ABF05L}},{{0xB60ABF05L,0xB60ABF05L,0xB60ABF05L}},{{0xB60ABF05L,0xB60ABF05L,0xB60ABF05L}},{{0xB60ABF05L,0xB60ABF05L,0xB60ABF05L}},{{0xB60ABF05L,0xB60ABF05L,0xB60ABF05L}},{{0xB60ABF05L,0xB60ABF05L,0xB60ABF05L}}};
            VECTOR(int8_t, 4) l_472 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L);
            VECTOR(int64_t, 4) l_484 = (VECTOR(int64_t, 4))(0x5A3D19DAEE33F77FL, (VECTOR(int64_t, 2))(0x5A3D19DAEE33F77FL, 0x12BE0A0AC91A798AL), 0x12BE0A0AC91A798AL);
            int8_t l_510[3][9][8] = {{{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L}},{{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L}},{{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L},{0x5DL,8L,(-10L),0x49L,0x70L,5L,5L,0x70L}}};
            uint32_t **l_515 = &l_169;
            int32_t l_522 = 5L;
            int i, j, k;
            for (p_1216->g_137.f0 = 17; (p_1216->g_137.f0 != 35); p_1216->g_137.f0 = safe_add_func_int64_t_s_s(p_1216->g_137.f0, 7))
            { /* block id: 205 */
                uint64_t **l_463 = (void*)0;
                VECTOR(int16_t, 8) l_466 = (VECTOR(int16_t, 8))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x6776L), 0x6776L), 0x6776L, (-8L), 0x6776L);
                VECTOR(int8_t, 2) l_470 = (VECTOR(int8_t, 2))(1L, 0x5DL);
                VECTOR(uint32_t, 16) l_514 = (VECTOR(uint32_t, 16))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0x4D02CE3DL), 0x4D02CE3DL), 0x4D02CE3DL, 4294967289UL, 0x4D02CE3DL, (VECTOR(uint32_t, 2))(4294967289UL, 0x4D02CE3DL), (VECTOR(uint32_t, 2))(4294967289UL, 0x4D02CE3DL), 4294967289UL, 0x4D02CE3DL, 4294967289UL, 0x4D02CE3DL);
                struct S0 l_535 = {3UL,4294967292UL,1L,4294967294UL,1L};
                int i;
                if (((*p_1216->g_192) &= ((p_130 <= (((p_1216->g_379.y , (l_464 = p_1216->g_153)) != p_131) < (l_465 > (((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(0L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_466.s0300)).hi)), l_466.s5, 0x44DBL, ((VECTOR(int16_t, 2))(0x46F5L, 0x77ABL)), (-2L))).lo, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(1L, 8L, p_130, 0L, ((VECTOR(int16_t, 4))(0x6E4FL)), p_1216->g_comm_values[p_1216->tid], 0x0134L, 0x7B06L, ((VECTOR(int16_t, 4))(7L)), 0x4E3FL)))).sbea9))), ((VECTOR(int16_t, 4))(0x1C83L))))).zyxxxxww))), (*l_279), ((VECTOR(int16_t, 2))(2L)), p_130, (-1L), 0x1BA2L, 0x686CL, 0x67C1L)).hi, ((VECTOR(int16_t, 8))(8L))))), ((VECTOR(int16_t, 8))(0x7718L))))).s3 ^ l_467[0][0][0])))) & (*p_1216->g_332))))
                { /* block id: 208 */
                    uint64_t l_473[7][1][1];
                    VECTOR(int8_t, 8) l_478 = (VECTOR(int8_t, 8))(0x50L, (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, 0x14L), 0x14L), 0x14L, 0x50L, 0x14L);
                    int64_t *l_496 = (void*)0;
                    int64_t *l_497[8];
                    int8_t *l_498 = (void*)0;
                    int8_t *l_499 = &l_321;
                    struct S0 **l_512[8][1][3] = {{{&l_157,&l_157,&l_157}},{{&l_157,&l_157,&l_157}},{{&l_157,&l_157,&l_157}},{{&l_157,&l_157,&l_157}},{{&l_157,&l_157,&l_157}},{{&l_157,&l_157,&l_157}},{{&l_157,&l_157,&l_157}},{{&l_157,&l_157,&l_157}}};
                    int32_t l_523 = 1L;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_473[i][j][k] = 18446744073709551615UL;
                        }
                    }
                    for (i = 0; i < 8; i++)
                        l_497[i] = (void*)0;
                    (*l_166) = (safe_mul_func_int8_t_s_s((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 2))(l_470.xy)).xxyyyxxy, ((VECTOR(int8_t, 16))(p_1216->g_471.yxwxxwwxyzzxxxyx)).lo, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_472.yx)).yxyyyyxyyxxxyxyx)).hi))).even)).z || p_1216->g_363.s7), ((p_130 && (l_473[6][0][0] >= ((*l_169) |= ((VECTOR(uint32_t, 8))(l_474.s7fc01f13)).s7))) == ((safe_rshift_func_uint16_t_u_u((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 8))(2L, ((VECTOR(int8_t, 4))(l_477.xzxw)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_478.s3321003751702700)).hi)).s5465626163560304)).sce)), 0x2FL)).s0104223500546046, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_1216->g_479.s35)).yyxyyxxyyyyxxyyx)).hi)).s7603126421435452))).s4a, (int8_t)0x0EL, (int8_t)(*l_279)))), ((*l_499) = ((safe_mod_func_uint64_t_u_u((((safe_add_func_int64_t_s_s((p_1216->g_471.z && (p_1216->g_379.z = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 4))(l_484.zyxy)).wwxwwwzwzwxyxxyx, (int64_t)((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(p_1216->g_485.yxxyxxyyyyyxxxxy)).odd)).s20, ((VECTOR(int64_t, 16))(((safe_lshift_func_int8_t_s_s(((void*)0 == p_1216->g_216), (safe_mul_func_int8_t_s_s(((*p_1216->g_254) = ((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((+(p_1216->g_485.y |= (((l_280 , 0x49B2063CL) == 0x74413669L) && p_130))), l_467[5][0][2])), FAKE_DIVERGE(p_1216->group_0_offset, get_group_id(0), 10))) , 0x24L), p_1216->g_comm_values[p_1216->tid])) | (*p_1216->g_254))), l_466.s4)))) == l_473[6][0][0]), p_130, 0x5CC3A334F1FCDD3CL, l_466.s1, ((VECTOR(int64_t, 4))(0x0FA7ECCBCD0DF008L)), l_467[1][0][1], p_130, 7L, 0x5824D05B5A2383B8L, ((VECTOR(int64_t, 2))(1L)), 0x790E813C8223D664L, (-1L))).s02))).yyxxxxyy)).s7))).s9fee)).w)), 18446744073709551615UL)) , l_168) != p_1216->g_192), 0x6265E684214ED8FEL)) >= (*l_166))), 0x63L, (-1L), 0x6AL, (-2L), 0x7FL)).even)))).yyyxxyzy)).s3 >= p_130), GROUP_DIVERGE(2, 1))) && GROUP_DIVERGE(0, 1)))));
                    (*p_1216->g_500) = &l_279;
                    if (p_130)
                        continue;
                    if ((((0L | ((((*l_277) = (safe_sub_func_int64_t_s_s((p_1216->g_161.y & l_466.s1), (safe_rshift_func_uint16_t_u_s(p_130, 13))))) && p_1216->g_comm_values[p_1216->tid]) , (l_505 > (safe_sub_func_uint16_t_u_u(((((p_130 , GROUP_DIVERGE(1, 1)) | (safe_lshift_func_uint8_t_u_u((p_130 == 0UL), 3))) || l_510[0][1][1]) && GROUP_DIVERGE(0, 1)), (*p_1216->g_332)))))) > p_1216->g_213[0]) < 65531UL))
                    { /* block id: 218 */
                        struct S0 **l_511 = &l_157;
                        struct S0 ***l_513 = &l_512[7][0][2];
                        if (l_473[6][0][0])
                            break;
                        (*p_1216->g_192) = ((((-8L) == (((l_511 = (void*)0) != ((*l_513) = l_512[6][0][1])) ^ ((((VECTOR(uint32_t, 16))(l_514.s22d596a8848a2abb)).s0 != ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967295UL, 0xA0F640AEL)).yyxy)).w) || ((0x6022152BL > (l_515 == ((*p_1216->g_167) , p_1216->g_516[0][1]))) , (safe_add_func_int64_t_s_s((((safe_mul_func_int8_t_s_s((*p_1216->g_254), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((*l_499) &= (-7L)), ((VECTOR(int8_t, 2))(0x57L)), (-1L), (-1L), ((VECTOR(int8_t, 2))((-1L))), 0x2DL)))).lo))).odd)).even)) , p_130) , 0x60181B4B69258105L), p_1216->g_274.y)))))) != p_130) != 0xB3E52487L);
                    }
                    else
                    { /* block id: 224 */
                        int32_t *l_524[2][2][9] = {{{&p_1216->g_193,&l_318[0][2],(void*)0,&l_318[0][2],&p_1216->g_193,&p_1216->g_193,&l_318[0][2],(void*)0,&l_318[0][2]},{&p_1216->g_193,&l_318[0][2],(void*)0,&l_318[0][2],&p_1216->g_193,&p_1216->g_193,&l_318[0][2],(void*)0,&l_318[0][2]}},{{&p_1216->g_193,&l_318[0][2],(void*)0,&l_318[0][2],&p_1216->g_193,&p_1216->g_193,&l_318[0][2],(void*)0,&l_318[0][2]},{&p_1216->g_193,&l_318[0][2],(void*)0,&l_318[0][2],&p_1216->g_193,&p_1216->g_193,&l_318[0][2],(void*)0,&l_318[0][2]}}};
                        int32_t **l_528 = &l_524[1][1][2];
                        int i, j, k;
                        if (l_522)
                            break;
                        ++l_525;
                        (*l_528) = (void*)0;
                        l_280 = (*p_1216->g_167);
                    }
                }
                else
                { /* block id: 230 */
                    uint64_t ***l_531 = &l_463;
                    int64_t *l_533[7][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
                    int32_t l_534 = 9L;
                    struct S0 *l_536 = &l_227[8][0];
                    int32_t *l_537 = (void*)0;
                    int32_t *l_538 = &l_534;
                    int32_t *l_539 = &l_165;
                    int32_t *l_540 = &l_534;
                    int32_t *l_541 = &p_1216->g_35;
                    int32_t *l_542 = &l_522;
                    int32_t *l_543 = &p_1216->g_193;
                    int32_t *l_544 = (void*)0;
                    int32_t *l_545[10][3][7] = {{{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]}},{{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]}},{{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]}},{{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]}},{{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]}},{{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]}},{{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]}},{{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]}},{{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]}},{{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]},{&p_1216->g_35,(void*)0,&l_165,&l_319[0],&p_1216->g_35,&l_522,&l_318[0][1]}}};
                    uint16_t l_546 = 1UL;
                    int i, j, k;
                    (*l_536) = ((safe_div_func_int64_t_s_s((l_534 ^= (((*l_531) = (void*)0) != l_532[4])), p_1216->g_342.y)) , l_535);
                    if ((*p_1216->g_192))
                        continue;
                    l_546--;
                }
                l_280 = ((safe_unary_minus_func_uint8_t_u(0xFCL)) , l_535);
            }
        }
    }
    return l_550[8][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1216->g_149
 * writes: p_1216->g_149
 */
int64_t * func_133(int32_t * p_134, struct S0 * p_135, struct S1 * p_1216)
{ /* block id: 69 */
    int32_t *l_138 = (void*)0;
    int32_t *l_139 = &p_1216->g_35;
    int32_t *l_140 = &p_1216->g_35;
    int32_t *l_141 = &p_1216->g_35;
    int32_t *l_142 = &p_1216->g_35;
    int32_t *l_143 = (void*)0;
    int32_t *l_144 = &p_1216->g_35;
    int32_t *l_145 = (void*)0;
    int32_t *l_146 = &p_1216->g_35;
    int32_t *l_147 = &p_1216->g_35;
    int32_t *l_148[10][2][9] = {{{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2}},{{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2}},{{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2}},{{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2}},{{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2}},{{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2}},{{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2}},{{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2}},{{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2}},{{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2},{&p_1216->g_2,&p_1216->g_35,&p_1216->g_35,&p_1216->g_2,(void*)0,&p_1216->g_35,&p_1216->g_35,(void*)0,&p_1216->g_2}}};
    int i, j, k;
    p_1216->g_149--;
    return &p_1216->g_38;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[22];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 22; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[22];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 22; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[166];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 166; i++)
            l_comm_values[i] = 1;
    struct S1 c_1217;
    struct S1* p_1216 = &c_1217;
    struct S1 c_1218 = {
        8L, // p_1216->g_2
        1L, // p_1216->g_35
        0x7FC0336AE3D4752EL, // p_1216->g_38
        {255UL,0UL,-1L,0x84916890L,0x52E1ABEA055E4C58L}, // p_1216->g_137
        0UL, // p_1216->g_149
        &p_1216->g_38, // p_1216->g_153
        &p_1216->g_153, // p_1216->g_152
        (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 1UL), 1UL), // p_1216->g_161
        (void*)0, // p_1216->g_167
        0xB11FC20CL, // p_1216->g_170
        0x32BA95D1L, // p_1216->g_193
        &p_1216->g_193, // p_1216->g_192
        {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}, // p_1216->g_213
        {{0x19L,0x19L,0x19L,0x19L,0x19L,0x19L},{0x19L,0x19L,0x19L,0x19L,0x19L,0x19L}}, // p_1216->g_215
        &p_1216->g_193, // p_1216->g_216
        {{&p_1216->g_192,&p_1216->g_192},{&p_1216->g_192,&p_1216->g_192},{&p_1216->g_192,&p_1216->g_192},{&p_1216->g_192,&p_1216->g_192},{&p_1216->g_192,&p_1216->g_192},{&p_1216->g_192,&p_1216->g_192},{&p_1216->g_192,&p_1216->g_192}}, // p_1216->g_225
        &p_1216->g_215[1][5], // p_1216->g_254
        &p_1216->g_193, // p_1216->g_257
        (VECTOR(int8_t, 4))(0x49L, (VECTOR(int8_t, 2))(0x49L, 0L), 0L), // p_1216->g_274
        65535UL, // p_1216->g_276
        0L, // p_1216->g_320
        &p_1216->g_276, // p_1216->g_332
        (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 65531UL), 65531UL), // p_1216->g_342
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x0D96L), 0x0D96L), 0x0D96L, 1UL, 0x0D96L), // p_1216->g_343
        (VECTOR(uint8_t, 8))(0x3BL, (VECTOR(uint8_t, 4))(0x3BL, (VECTOR(uint8_t, 2))(0x3BL, 0x40L), 0x40L), 0x40L, 0x3BL, 0x40L), // p_1216->g_362
        (VECTOR(int8_t, 8))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x65L), 0x65L), 0x65L, 6L, 0x65L), // p_1216->g_363
        (VECTOR(int8_t, 2))((-1L), 0x04L), // p_1216->g_364
        (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x02L), 0x02L), 0x02L, 8L, 0x02L), // p_1216->g_365
        (VECTOR(int64_t, 4))(0x0A7747AF41F73D86L, (VECTOR(int64_t, 2))(0x0A7747AF41F73D86L, 0x792009A47B9C661CL), 0x792009A47B9C661CL), // p_1216->g_379
        (VECTOR(int64_t, 2))(0x3E24FCBCCFBAA466L, (-1L)), // p_1216->g_381
        (VECTOR(int8_t, 8))(0x7AL, (VECTOR(int8_t, 4))(0x7AL, (VECTOR(int8_t, 2))(0x7AL, 0L), 0L), 0L, 0x7AL, 0L), // p_1216->g_388
        (VECTOR(uint64_t, 2))(0xCEF4C9908B0993A4L, 0x0FC8E99B7F116F2FL), // p_1216->g_452
        7L, // p_1216->g_458
        (VECTOR(int8_t, 4))(0x2EL, (VECTOR(int8_t, 2))(0x2EL, 0x40L), 0x40L), // p_1216->g_471
        (VECTOR(int8_t, 8))(0x0AL, (VECTOR(int8_t, 4))(0x0AL, (VECTOR(int8_t, 2))(0x0AL, 0x24L), 0x24L), 0x24L, 0x0AL, 0x24L), // p_1216->g_479
        (VECTOR(int64_t, 2))(0x156C7C77527A0073L, (-2L)), // p_1216->g_485
        &p_1216->g_225[4][1], // p_1216->g_500
        &p_1216->g_170, // p_1216->g_517
        {{&p_1216->g_517,&p_1216->g_517,&p_1216->g_517,&p_1216->g_517,&p_1216->g_517,&p_1216->g_517,&p_1216->g_517}}, // p_1216->g_516
        0x4585C1960417D4CAL, // p_1216->g_552
        {0x74L,0xCA7BF69BL,0x29598A47L,0x7CEE1ACCL,1L}, // p_1216->g_566
        &p_1216->g_566, // p_1216->g_565
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL), // p_1216->g_603
        (VECTOR(int64_t, 16))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0x23B548DBE4CAAD42L), 0x23B548DBE4CAAD42L), 0x23B548DBE4CAAD42L, 2L, 0x23B548DBE4CAAD42L, (VECTOR(int64_t, 2))(2L, 0x23B548DBE4CAAD42L), (VECTOR(int64_t, 2))(2L, 0x23B548DBE4CAAD42L), 2L, 0x23B548DBE4CAAD42L, 2L, 0x23B548DBE4CAAD42L), // p_1216->g_616
        251UL, // p_1216->g_617
        &p_1216->g_192, // p_1216->g_618
        &p_1216->g_192, // p_1216->g_619
        (void*)0, // p_1216->g_624
        (void*)0, // p_1216->g_661
        (void*)0, // p_1216->g_662
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x03157F9584A9BA8BL), 0x03157F9584A9BA8BL), 0x03157F9584A9BA8BL, 0L, 0x03157F9584A9BA8BL, (VECTOR(int64_t, 2))(0L, 0x03157F9584A9BA8BL), (VECTOR(int64_t, 2))(0L, 0x03157F9584A9BA8BL), 0L, 0x03157F9584A9BA8BL, 0L, 0x03157F9584A9BA8BL), // p_1216->g_671
        (VECTOR(uint8_t, 2))(1UL, 0x9CL), // p_1216->g_695
        (VECTOR(uint32_t, 2))(0x3A30AF69L, 4294967293UL), // p_1216->g_708
        {{(void*)0,&p_1216->g_192,&p_1216->g_192,(void*)0,(void*)0},{(void*)0,&p_1216->g_192,&p_1216->g_192,(void*)0,(void*)0},{(void*)0,&p_1216->g_192,&p_1216->g_192,(void*)0,(void*)0},{(void*)0,&p_1216->g_192,&p_1216->g_192,(void*)0,(void*)0},{(void*)0,&p_1216->g_192,&p_1216->g_192,(void*)0,(void*)0}}, // p_1216->g_710
        &p_1216->g_192, // p_1216->g_711
        250UL, // p_1216->g_712
        0UL, // p_1216->g_775
        (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x0FL), 0x0FL), // p_1216->g_798
        (VECTOR(int8_t, 16))(0x2DL, (VECTOR(int8_t, 4))(0x2DL, (VECTOR(int8_t, 2))(0x2DL, (-8L)), (-8L)), (-8L), 0x2DL, (-8L), (VECTOR(int8_t, 2))(0x2DL, (-8L)), (VECTOR(int8_t, 2))(0x2DL, (-8L)), 0x2DL, (-8L), 0x2DL, (-8L)), // p_1216->g_821
        9UL, // p_1216->g_852
        (VECTOR(int64_t, 8))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 1L), 1L), 1L, 2L, 1L), // p_1216->g_858
        9UL, // p_1216->g_931
        {0L,0L,0L,0L,0L,0L,0L}, // p_1216->g_968
        1UL, // p_1216->g_981
        (VECTOR(uint8_t, 16))(246UL, (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 255UL), 255UL), 255UL, 246UL, 255UL, (VECTOR(uint8_t, 2))(246UL, 255UL), (VECTOR(uint8_t, 2))(246UL, 255UL), 246UL, 255UL, 246UL, 255UL), // p_1216->g_984
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 9L), 9L), 9L, 1L, 9L), // p_1216->g_999
        (VECTOR(int32_t, 8))(0x14EC3A5CL, (VECTOR(int32_t, 4))(0x14EC3A5CL, (VECTOR(int32_t, 2))(0x14EC3A5CL, 0x61E95017L), 0x61E95017L), 0x61E95017L, 0x14EC3A5CL, 0x61E95017L), // p_1216->g_1015
        (VECTOR(int32_t, 2))(0x3F389141L, (-1L)), // p_1216->g_1016
        (VECTOR(uint8_t, 8))(0x5EL, (VECTOR(uint8_t, 4))(0x5EL, (VECTOR(uint8_t, 2))(0x5EL, 0x4AL), 0x4AL), 0x4AL, 0x5EL, 0x4AL), // p_1216->g_1050
        (VECTOR(int8_t, 4))(0x02L, (VECTOR(int8_t, 2))(0x02L, 4L), 4L), // p_1216->g_1066
        (-3L), // p_1216->g_1096
        247UL, // p_1216->g_1102
        (VECTOR(int32_t, 2))(0L, 6L), // p_1216->g_1105
        (VECTOR(int32_t, 4))(0x6362E93AL, (VECTOR(int32_t, 2))(0x6362E93AL, 6L), 6L), // p_1216->g_1106
        (VECTOR(int32_t, 2))(4L, 0L), // p_1216->g_1114
        {0x21A486CFB323ACE3L,0x21A486CFB323ACE3L,0x21A486CFB323ACE3L,0x21A486CFB323ACE3L}, // p_1216->g_1122
        {{6L,6L,1L,0x2EE2AA23L,0x105FE9BFL,0x2EE2AA23L,1L,6L,6L,1L},{6L,6L,1L,0x2EE2AA23L,0x105FE9BFL,0x2EE2AA23L,1L,6L,6L,1L},{6L,6L,1L,0x2EE2AA23L,0x105FE9BFL,0x2EE2AA23L,1L,6L,6L,1L}}, // p_1216->g_1128
        (VECTOR(int64_t, 8))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0x730DA6FB9DB5F5CFL), 0x730DA6FB9DB5F5CFL), 0x730DA6FB9DB5F5CFL, (-9L), 0x730DA6FB9DB5F5CFL), // p_1216->g_1141
        (VECTOR(int32_t, 2))(0x40817480L, 0L), // p_1216->g_1181
        (VECTOR(uint64_t, 2))(0x2D72E6CAC4934DBCL, 9UL), // p_1216->g_1198
        (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), 0x6CBDA3D25049C02CL), 0x6CBDA3D25049C02CL), // p_1216->g_1200
        (VECTOR(int32_t, 8))(0x2E1C0676L, (VECTOR(int32_t, 4))(0x2E1C0676L, (VECTOR(int32_t, 2))(0x2E1C0676L, (-10L)), (-10L)), (-10L), 0x2E1C0676L, (-10L)), // p_1216->g_1208
        (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xE624F846L), 0xE624F846L), // p_1216->g_1215
        0, // p_1216->v_collective
        sequence_input[get_global_id(0)], // p_1216->global_0_offset
        sequence_input[get_global_id(1)], // p_1216->global_1_offset
        sequence_input[get_global_id(2)], // p_1216->global_2_offset
        sequence_input[get_local_id(0)], // p_1216->local_0_offset
        sequence_input[get_local_id(1)], // p_1216->local_1_offset
        sequence_input[get_local_id(2)], // p_1216->local_2_offset
        sequence_input[get_group_id(0)], // p_1216->group_0_offset
        sequence_input[get_group_id(1)], // p_1216->group_1_offset
        sequence_input[get_group_id(2)], // p_1216->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 166)), permutations[0][get_linear_local_id()])), // p_1216->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1217 = c_1218;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1216);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1216->g_2, "p_1216->g_2", print_hash_value);
    transparent_crc(p_1216->g_35, "p_1216->g_35", print_hash_value);
    transparent_crc(p_1216->g_38, "p_1216->g_38", print_hash_value);
    transparent_crc(p_1216->g_137.f0, "p_1216->g_137.f0", print_hash_value);
    transparent_crc(p_1216->g_137.f1, "p_1216->g_137.f1", print_hash_value);
    transparent_crc(p_1216->g_137.f2, "p_1216->g_137.f2", print_hash_value);
    transparent_crc(p_1216->g_137.f3, "p_1216->g_137.f3", print_hash_value);
    transparent_crc(p_1216->g_137.f4, "p_1216->g_137.f4", print_hash_value);
    transparent_crc(p_1216->g_149, "p_1216->g_149", print_hash_value);
    transparent_crc(p_1216->g_161.x, "p_1216->g_161.x", print_hash_value);
    transparent_crc(p_1216->g_161.y, "p_1216->g_161.y", print_hash_value);
    transparent_crc(p_1216->g_161.z, "p_1216->g_161.z", print_hash_value);
    transparent_crc(p_1216->g_161.w, "p_1216->g_161.w", print_hash_value);
    transparent_crc(p_1216->g_170, "p_1216->g_170", print_hash_value);
    transparent_crc(p_1216->g_193, "p_1216->g_193", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1216->g_213[i], "p_1216->g_213[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1216->g_215[i][j], "p_1216->g_215[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1216->g_274.x, "p_1216->g_274.x", print_hash_value);
    transparent_crc(p_1216->g_274.y, "p_1216->g_274.y", print_hash_value);
    transparent_crc(p_1216->g_274.z, "p_1216->g_274.z", print_hash_value);
    transparent_crc(p_1216->g_274.w, "p_1216->g_274.w", print_hash_value);
    transparent_crc(p_1216->g_276, "p_1216->g_276", print_hash_value);
    transparent_crc(p_1216->g_320, "p_1216->g_320", print_hash_value);
    transparent_crc(p_1216->g_342.x, "p_1216->g_342.x", print_hash_value);
    transparent_crc(p_1216->g_342.y, "p_1216->g_342.y", print_hash_value);
    transparent_crc(p_1216->g_342.z, "p_1216->g_342.z", print_hash_value);
    transparent_crc(p_1216->g_342.w, "p_1216->g_342.w", print_hash_value);
    transparent_crc(p_1216->g_343.s0, "p_1216->g_343.s0", print_hash_value);
    transparent_crc(p_1216->g_343.s1, "p_1216->g_343.s1", print_hash_value);
    transparent_crc(p_1216->g_343.s2, "p_1216->g_343.s2", print_hash_value);
    transparent_crc(p_1216->g_343.s3, "p_1216->g_343.s3", print_hash_value);
    transparent_crc(p_1216->g_343.s4, "p_1216->g_343.s4", print_hash_value);
    transparent_crc(p_1216->g_343.s5, "p_1216->g_343.s5", print_hash_value);
    transparent_crc(p_1216->g_343.s6, "p_1216->g_343.s6", print_hash_value);
    transparent_crc(p_1216->g_343.s7, "p_1216->g_343.s7", print_hash_value);
    transparent_crc(p_1216->g_362.s0, "p_1216->g_362.s0", print_hash_value);
    transparent_crc(p_1216->g_362.s1, "p_1216->g_362.s1", print_hash_value);
    transparent_crc(p_1216->g_362.s2, "p_1216->g_362.s2", print_hash_value);
    transparent_crc(p_1216->g_362.s3, "p_1216->g_362.s3", print_hash_value);
    transparent_crc(p_1216->g_362.s4, "p_1216->g_362.s4", print_hash_value);
    transparent_crc(p_1216->g_362.s5, "p_1216->g_362.s5", print_hash_value);
    transparent_crc(p_1216->g_362.s6, "p_1216->g_362.s6", print_hash_value);
    transparent_crc(p_1216->g_362.s7, "p_1216->g_362.s7", print_hash_value);
    transparent_crc(p_1216->g_363.s0, "p_1216->g_363.s0", print_hash_value);
    transparent_crc(p_1216->g_363.s1, "p_1216->g_363.s1", print_hash_value);
    transparent_crc(p_1216->g_363.s2, "p_1216->g_363.s2", print_hash_value);
    transparent_crc(p_1216->g_363.s3, "p_1216->g_363.s3", print_hash_value);
    transparent_crc(p_1216->g_363.s4, "p_1216->g_363.s4", print_hash_value);
    transparent_crc(p_1216->g_363.s5, "p_1216->g_363.s5", print_hash_value);
    transparent_crc(p_1216->g_363.s6, "p_1216->g_363.s6", print_hash_value);
    transparent_crc(p_1216->g_363.s7, "p_1216->g_363.s7", print_hash_value);
    transparent_crc(p_1216->g_364.x, "p_1216->g_364.x", print_hash_value);
    transparent_crc(p_1216->g_364.y, "p_1216->g_364.y", print_hash_value);
    transparent_crc(p_1216->g_365.s0, "p_1216->g_365.s0", print_hash_value);
    transparent_crc(p_1216->g_365.s1, "p_1216->g_365.s1", print_hash_value);
    transparent_crc(p_1216->g_365.s2, "p_1216->g_365.s2", print_hash_value);
    transparent_crc(p_1216->g_365.s3, "p_1216->g_365.s3", print_hash_value);
    transparent_crc(p_1216->g_365.s4, "p_1216->g_365.s4", print_hash_value);
    transparent_crc(p_1216->g_365.s5, "p_1216->g_365.s5", print_hash_value);
    transparent_crc(p_1216->g_365.s6, "p_1216->g_365.s6", print_hash_value);
    transparent_crc(p_1216->g_365.s7, "p_1216->g_365.s7", print_hash_value);
    transparent_crc(p_1216->g_379.x, "p_1216->g_379.x", print_hash_value);
    transparent_crc(p_1216->g_379.y, "p_1216->g_379.y", print_hash_value);
    transparent_crc(p_1216->g_379.z, "p_1216->g_379.z", print_hash_value);
    transparent_crc(p_1216->g_379.w, "p_1216->g_379.w", print_hash_value);
    transparent_crc(p_1216->g_381.x, "p_1216->g_381.x", print_hash_value);
    transparent_crc(p_1216->g_381.y, "p_1216->g_381.y", print_hash_value);
    transparent_crc(p_1216->g_388.s0, "p_1216->g_388.s0", print_hash_value);
    transparent_crc(p_1216->g_388.s1, "p_1216->g_388.s1", print_hash_value);
    transparent_crc(p_1216->g_388.s2, "p_1216->g_388.s2", print_hash_value);
    transparent_crc(p_1216->g_388.s3, "p_1216->g_388.s3", print_hash_value);
    transparent_crc(p_1216->g_388.s4, "p_1216->g_388.s4", print_hash_value);
    transparent_crc(p_1216->g_388.s5, "p_1216->g_388.s5", print_hash_value);
    transparent_crc(p_1216->g_388.s6, "p_1216->g_388.s6", print_hash_value);
    transparent_crc(p_1216->g_388.s7, "p_1216->g_388.s7", print_hash_value);
    transparent_crc(p_1216->g_452.x, "p_1216->g_452.x", print_hash_value);
    transparent_crc(p_1216->g_452.y, "p_1216->g_452.y", print_hash_value);
    transparent_crc(p_1216->g_458, "p_1216->g_458", print_hash_value);
    transparent_crc(p_1216->g_471.x, "p_1216->g_471.x", print_hash_value);
    transparent_crc(p_1216->g_471.y, "p_1216->g_471.y", print_hash_value);
    transparent_crc(p_1216->g_471.z, "p_1216->g_471.z", print_hash_value);
    transparent_crc(p_1216->g_471.w, "p_1216->g_471.w", print_hash_value);
    transparent_crc(p_1216->g_479.s0, "p_1216->g_479.s0", print_hash_value);
    transparent_crc(p_1216->g_479.s1, "p_1216->g_479.s1", print_hash_value);
    transparent_crc(p_1216->g_479.s2, "p_1216->g_479.s2", print_hash_value);
    transparent_crc(p_1216->g_479.s3, "p_1216->g_479.s3", print_hash_value);
    transparent_crc(p_1216->g_479.s4, "p_1216->g_479.s4", print_hash_value);
    transparent_crc(p_1216->g_479.s5, "p_1216->g_479.s5", print_hash_value);
    transparent_crc(p_1216->g_479.s6, "p_1216->g_479.s6", print_hash_value);
    transparent_crc(p_1216->g_479.s7, "p_1216->g_479.s7", print_hash_value);
    transparent_crc(p_1216->g_485.x, "p_1216->g_485.x", print_hash_value);
    transparent_crc(p_1216->g_485.y, "p_1216->g_485.y", print_hash_value);
    transparent_crc(p_1216->g_552, "p_1216->g_552", print_hash_value);
    transparent_crc(p_1216->g_566.f0, "p_1216->g_566.f0", print_hash_value);
    transparent_crc(p_1216->g_566.f1, "p_1216->g_566.f1", print_hash_value);
    transparent_crc(p_1216->g_566.f2, "p_1216->g_566.f2", print_hash_value);
    transparent_crc(p_1216->g_566.f3, "p_1216->g_566.f3", print_hash_value);
    transparent_crc(p_1216->g_566.f4, "p_1216->g_566.f4", print_hash_value);
    transparent_crc(p_1216->g_603.s0, "p_1216->g_603.s0", print_hash_value);
    transparent_crc(p_1216->g_603.s1, "p_1216->g_603.s1", print_hash_value);
    transparent_crc(p_1216->g_603.s2, "p_1216->g_603.s2", print_hash_value);
    transparent_crc(p_1216->g_603.s3, "p_1216->g_603.s3", print_hash_value);
    transparent_crc(p_1216->g_603.s4, "p_1216->g_603.s4", print_hash_value);
    transparent_crc(p_1216->g_603.s5, "p_1216->g_603.s5", print_hash_value);
    transparent_crc(p_1216->g_603.s6, "p_1216->g_603.s6", print_hash_value);
    transparent_crc(p_1216->g_603.s7, "p_1216->g_603.s7", print_hash_value);
    transparent_crc(p_1216->g_616.s0, "p_1216->g_616.s0", print_hash_value);
    transparent_crc(p_1216->g_616.s1, "p_1216->g_616.s1", print_hash_value);
    transparent_crc(p_1216->g_616.s2, "p_1216->g_616.s2", print_hash_value);
    transparent_crc(p_1216->g_616.s3, "p_1216->g_616.s3", print_hash_value);
    transparent_crc(p_1216->g_616.s4, "p_1216->g_616.s4", print_hash_value);
    transparent_crc(p_1216->g_616.s5, "p_1216->g_616.s5", print_hash_value);
    transparent_crc(p_1216->g_616.s6, "p_1216->g_616.s6", print_hash_value);
    transparent_crc(p_1216->g_616.s7, "p_1216->g_616.s7", print_hash_value);
    transparent_crc(p_1216->g_616.s8, "p_1216->g_616.s8", print_hash_value);
    transparent_crc(p_1216->g_616.s9, "p_1216->g_616.s9", print_hash_value);
    transparent_crc(p_1216->g_616.sa, "p_1216->g_616.sa", print_hash_value);
    transparent_crc(p_1216->g_616.sb, "p_1216->g_616.sb", print_hash_value);
    transparent_crc(p_1216->g_616.sc, "p_1216->g_616.sc", print_hash_value);
    transparent_crc(p_1216->g_616.sd, "p_1216->g_616.sd", print_hash_value);
    transparent_crc(p_1216->g_616.se, "p_1216->g_616.se", print_hash_value);
    transparent_crc(p_1216->g_616.sf, "p_1216->g_616.sf", print_hash_value);
    transparent_crc(p_1216->g_617, "p_1216->g_617", print_hash_value);
    transparent_crc(p_1216->g_671.s0, "p_1216->g_671.s0", print_hash_value);
    transparent_crc(p_1216->g_671.s1, "p_1216->g_671.s1", print_hash_value);
    transparent_crc(p_1216->g_671.s2, "p_1216->g_671.s2", print_hash_value);
    transparent_crc(p_1216->g_671.s3, "p_1216->g_671.s3", print_hash_value);
    transparent_crc(p_1216->g_671.s4, "p_1216->g_671.s4", print_hash_value);
    transparent_crc(p_1216->g_671.s5, "p_1216->g_671.s5", print_hash_value);
    transparent_crc(p_1216->g_671.s6, "p_1216->g_671.s6", print_hash_value);
    transparent_crc(p_1216->g_671.s7, "p_1216->g_671.s7", print_hash_value);
    transparent_crc(p_1216->g_671.s8, "p_1216->g_671.s8", print_hash_value);
    transparent_crc(p_1216->g_671.s9, "p_1216->g_671.s9", print_hash_value);
    transparent_crc(p_1216->g_671.sa, "p_1216->g_671.sa", print_hash_value);
    transparent_crc(p_1216->g_671.sb, "p_1216->g_671.sb", print_hash_value);
    transparent_crc(p_1216->g_671.sc, "p_1216->g_671.sc", print_hash_value);
    transparent_crc(p_1216->g_671.sd, "p_1216->g_671.sd", print_hash_value);
    transparent_crc(p_1216->g_671.se, "p_1216->g_671.se", print_hash_value);
    transparent_crc(p_1216->g_671.sf, "p_1216->g_671.sf", print_hash_value);
    transparent_crc(p_1216->g_695.x, "p_1216->g_695.x", print_hash_value);
    transparent_crc(p_1216->g_695.y, "p_1216->g_695.y", print_hash_value);
    transparent_crc(p_1216->g_708.x, "p_1216->g_708.x", print_hash_value);
    transparent_crc(p_1216->g_708.y, "p_1216->g_708.y", print_hash_value);
    transparent_crc(p_1216->g_712, "p_1216->g_712", print_hash_value);
    transparent_crc(p_1216->g_775, "p_1216->g_775", print_hash_value);
    transparent_crc(p_1216->g_798.x, "p_1216->g_798.x", print_hash_value);
    transparent_crc(p_1216->g_798.y, "p_1216->g_798.y", print_hash_value);
    transparent_crc(p_1216->g_798.z, "p_1216->g_798.z", print_hash_value);
    transparent_crc(p_1216->g_798.w, "p_1216->g_798.w", print_hash_value);
    transparent_crc(p_1216->g_821.s0, "p_1216->g_821.s0", print_hash_value);
    transparent_crc(p_1216->g_821.s1, "p_1216->g_821.s1", print_hash_value);
    transparent_crc(p_1216->g_821.s2, "p_1216->g_821.s2", print_hash_value);
    transparent_crc(p_1216->g_821.s3, "p_1216->g_821.s3", print_hash_value);
    transparent_crc(p_1216->g_821.s4, "p_1216->g_821.s4", print_hash_value);
    transparent_crc(p_1216->g_821.s5, "p_1216->g_821.s5", print_hash_value);
    transparent_crc(p_1216->g_821.s6, "p_1216->g_821.s6", print_hash_value);
    transparent_crc(p_1216->g_821.s7, "p_1216->g_821.s7", print_hash_value);
    transparent_crc(p_1216->g_821.s8, "p_1216->g_821.s8", print_hash_value);
    transparent_crc(p_1216->g_821.s9, "p_1216->g_821.s9", print_hash_value);
    transparent_crc(p_1216->g_821.sa, "p_1216->g_821.sa", print_hash_value);
    transparent_crc(p_1216->g_821.sb, "p_1216->g_821.sb", print_hash_value);
    transparent_crc(p_1216->g_821.sc, "p_1216->g_821.sc", print_hash_value);
    transparent_crc(p_1216->g_821.sd, "p_1216->g_821.sd", print_hash_value);
    transparent_crc(p_1216->g_821.se, "p_1216->g_821.se", print_hash_value);
    transparent_crc(p_1216->g_821.sf, "p_1216->g_821.sf", print_hash_value);
    transparent_crc(p_1216->g_852, "p_1216->g_852", print_hash_value);
    transparent_crc(p_1216->g_858.s0, "p_1216->g_858.s0", print_hash_value);
    transparent_crc(p_1216->g_858.s1, "p_1216->g_858.s1", print_hash_value);
    transparent_crc(p_1216->g_858.s2, "p_1216->g_858.s2", print_hash_value);
    transparent_crc(p_1216->g_858.s3, "p_1216->g_858.s3", print_hash_value);
    transparent_crc(p_1216->g_858.s4, "p_1216->g_858.s4", print_hash_value);
    transparent_crc(p_1216->g_858.s5, "p_1216->g_858.s5", print_hash_value);
    transparent_crc(p_1216->g_858.s6, "p_1216->g_858.s6", print_hash_value);
    transparent_crc(p_1216->g_858.s7, "p_1216->g_858.s7", print_hash_value);
    transparent_crc(p_1216->g_931, "p_1216->g_931", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1216->g_968[i], "p_1216->g_968[i]", print_hash_value);

    }
    transparent_crc(p_1216->g_981, "p_1216->g_981", print_hash_value);
    transparent_crc(p_1216->g_984.s0, "p_1216->g_984.s0", print_hash_value);
    transparent_crc(p_1216->g_984.s1, "p_1216->g_984.s1", print_hash_value);
    transparent_crc(p_1216->g_984.s2, "p_1216->g_984.s2", print_hash_value);
    transparent_crc(p_1216->g_984.s3, "p_1216->g_984.s3", print_hash_value);
    transparent_crc(p_1216->g_984.s4, "p_1216->g_984.s4", print_hash_value);
    transparent_crc(p_1216->g_984.s5, "p_1216->g_984.s5", print_hash_value);
    transparent_crc(p_1216->g_984.s6, "p_1216->g_984.s6", print_hash_value);
    transparent_crc(p_1216->g_984.s7, "p_1216->g_984.s7", print_hash_value);
    transparent_crc(p_1216->g_984.s8, "p_1216->g_984.s8", print_hash_value);
    transparent_crc(p_1216->g_984.s9, "p_1216->g_984.s9", print_hash_value);
    transparent_crc(p_1216->g_984.sa, "p_1216->g_984.sa", print_hash_value);
    transparent_crc(p_1216->g_984.sb, "p_1216->g_984.sb", print_hash_value);
    transparent_crc(p_1216->g_984.sc, "p_1216->g_984.sc", print_hash_value);
    transparent_crc(p_1216->g_984.sd, "p_1216->g_984.sd", print_hash_value);
    transparent_crc(p_1216->g_984.se, "p_1216->g_984.se", print_hash_value);
    transparent_crc(p_1216->g_984.sf, "p_1216->g_984.sf", print_hash_value);
    transparent_crc(p_1216->g_999.s0, "p_1216->g_999.s0", print_hash_value);
    transparent_crc(p_1216->g_999.s1, "p_1216->g_999.s1", print_hash_value);
    transparent_crc(p_1216->g_999.s2, "p_1216->g_999.s2", print_hash_value);
    transparent_crc(p_1216->g_999.s3, "p_1216->g_999.s3", print_hash_value);
    transparent_crc(p_1216->g_999.s4, "p_1216->g_999.s4", print_hash_value);
    transparent_crc(p_1216->g_999.s5, "p_1216->g_999.s5", print_hash_value);
    transparent_crc(p_1216->g_999.s6, "p_1216->g_999.s6", print_hash_value);
    transparent_crc(p_1216->g_999.s7, "p_1216->g_999.s7", print_hash_value);
    transparent_crc(p_1216->g_1015.s0, "p_1216->g_1015.s0", print_hash_value);
    transparent_crc(p_1216->g_1015.s1, "p_1216->g_1015.s1", print_hash_value);
    transparent_crc(p_1216->g_1015.s2, "p_1216->g_1015.s2", print_hash_value);
    transparent_crc(p_1216->g_1015.s3, "p_1216->g_1015.s3", print_hash_value);
    transparent_crc(p_1216->g_1015.s4, "p_1216->g_1015.s4", print_hash_value);
    transparent_crc(p_1216->g_1015.s5, "p_1216->g_1015.s5", print_hash_value);
    transparent_crc(p_1216->g_1015.s6, "p_1216->g_1015.s6", print_hash_value);
    transparent_crc(p_1216->g_1015.s7, "p_1216->g_1015.s7", print_hash_value);
    transparent_crc(p_1216->g_1016.x, "p_1216->g_1016.x", print_hash_value);
    transparent_crc(p_1216->g_1016.y, "p_1216->g_1016.y", print_hash_value);
    transparent_crc(p_1216->g_1050.s0, "p_1216->g_1050.s0", print_hash_value);
    transparent_crc(p_1216->g_1050.s1, "p_1216->g_1050.s1", print_hash_value);
    transparent_crc(p_1216->g_1050.s2, "p_1216->g_1050.s2", print_hash_value);
    transparent_crc(p_1216->g_1050.s3, "p_1216->g_1050.s3", print_hash_value);
    transparent_crc(p_1216->g_1050.s4, "p_1216->g_1050.s4", print_hash_value);
    transparent_crc(p_1216->g_1050.s5, "p_1216->g_1050.s5", print_hash_value);
    transparent_crc(p_1216->g_1050.s6, "p_1216->g_1050.s6", print_hash_value);
    transparent_crc(p_1216->g_1050.s7, "p_1216->g_1050.s7", print_hash_value);
    transparent_crc(p_1216->g_1066.x, "p_1216->g_1066.x", print_hash_value);
    transparent_crc(p_1216->g_1066.y, "p_1216->g_1066.y", print_hash_value);
    transparent_crc(p_1216->g_1066.z, "p_1216->g_1066.z", print_hash_value);
    transparent_crc(p_1216->g_1066.w, "p_1216->g_1066.w", print_hash_value);
    transparent_crc(p_1216->g_1096, "p_1216->g_1096", print_hash_value);
    transparent_crc(p_1216->g_1102, "p_1216->g_1102", print_hash_value);
    transparent_crc(p_1216->g_1105.x, "p_1216->g_1105.x", print_hash_value);
    transparent_crc(p_1216->g_1105.y, "p_1216->g_1105.y", print_hash_value);
    transparent_crc(p_1216->g_1106.x, "p_1216->g_1106.x", print_hash_value);
    transparent_crc(p_1216->g_1106.y, "p_1216->g_1106.y", print_hash_value);
    transparent_crc(p_1216->g_1106.z, "p_1216->g_1106.z", print_hash_value);
    transparent_crc(p_1216->g_1106.w, "p_1216->g_1106.w", print_hash_value);
    transparent_crc(p_1216->g_1114.x, "p_1216->g_1114.x", print_hash_value);
    transparent_crc(p_1216->g_1114.y, "p_1216->g_1114.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1216->g_1122[i], "p_1216->g_1122[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1216->g_1128[i][j], "p_1216->g_1128[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1216->g_1141.s0, "p_1216->g_1141.s0", print_hash_value);
    transparent_crc(p_1216->g_1141.s1, "p_1216->g_1141.s1", print_hash_value);
    transparent_crc(p_1216->g_1141.s2, "p_1216->g_1141.s2", print_hash_value);
    transparent_crc(p_1216->g_1141.s3, "p_1216->g_1141.s3", print_hash_value);
    transparent_crc(p_1216->g_1141.s4, "p_1216->g_1141.s4", print_hash_value);
    transparent_crc(p_1216->g_1141.s5, "p_1216->g_1141.s5", print_hash_value);
    transparent_crc(p_1216->g_1141.s6, "p_1216->g_1141.s6", print_hash_value);
    transparent_crc(p_1216->g_1141.s7, "p_1216->g_1141.s7", print_hash_value);
    transparent_crc(p_1216->g_1181.x, "p_1216->g_1181.x", print_hash_value);
    transparent_crc(p_1216->g_1181.y, "p_1216->g_1181.y", print_hash_value);
    transparent_crc(p_1216->g_1198.x, "p_1216->g_1198.x", print_hash_value);
    transparent_crc(p_1216->g_1198.y, "p_1216->g_1198.y", print_hash_value);
    transparent_crc(p_1216->g_1200.x, "p_1216->g_1200.x", print_hash_value);
    transparent_crc(p_1216->g_1200.y, "p_1216->g_1200.y", print_hash_value);
    transparent_crc(p_1216->g_1200.z, "p_1216->g_1200.z", print_hash_value);
    transparent_crc(p_1216->g_1200.w, "p_1216->g_1200.w", print_hash_value);
    transparent_crc(p_1216->g_1208.s0, "p_1216->g_1208.s0", print_hash_value);
    transparent_crc(p_1216->g_1208.s1, "p_1216->g_1208.s1", print_hash_value);
    transparent_crc(p_1216->g_1208.s2, "p_1216->g_1208.s2", print_hash_value);
    transparent_crc(p_1216->g_1208.s3, "p_1216->g_1208.s3", print_hash_value);
    transparent_crc(p_1216->g_1208.s4, "p_1216->g_1208.s4", print_hash_value);
    transparent_crc(p_1216->g_1208.s5, "p_1216->g_1208.s5", print_hash_value);
    transparent_crc(p_1216->g_1208.s6, "p_1216->g_1208.s6", print_hash_value);
    transparent_crc(p_1216->g_1208.s7, "p_1216->g_1208.s7", print_hash_value);
    transparent_crc(p_1216->g_1215.x, "p_1216->g_1215.x", print_hash_value);
    transparent_crc(p_1216->g_1215.y, "p_1216->g_1215.y", print_hash_value);
    transparent_crc(p_1216->g_1215.z, "p_1216->g_1215.z", print_hash_value);
    transparent_crc(p_1216->g_1215.w, "p_1216->g_1215.w", print_hash_value);
    transparent_crc(p_1216->v_collective, "p_1216->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 22; i++)
            transparent_crc(p_1216->g_special_values[i + 22 * get_linear_group_id()], "p_1216->g_special_values[i + 22 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 22; i++)
            transparent_crc(p_1216->l_special_values[i], "p_1216->l_special_values[i]", print_hash_value);
    transparent_crc(p_1216->l_comm_values[get_linear_local_id()], "p_1216->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1216->g_comm_values[get_linear_group_id() * 166 + get_linear_local_id()], "p_1216->g_comm_values[get_linear_group_id() * 166 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
