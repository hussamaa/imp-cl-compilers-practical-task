// --atomics 85 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 14,12,41 -l 1,4,41
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

__constant uint32_t permutations[10][164] = {
{123,135,153,40,133,1,126,142,97,4,37,77,119,116,72,102,110,26,63,120,86,91,145,90,0,38,18,73,163,103,48,106,150,92,64,30,148,105,57,131,130,5,56,84,17,29,117,94,2,160,108,58,8,121,41,138,19,115,159,113,161,85,99,24,35,45,51,27,158,134,82,98,60,137,75,147,49,50,81,44,154,127,66,15,3,144,141,20,67,151,32,46,33,101,10,124,143,74,156,62,78,7,95,65,25,162,71,114,112,53,23,155,14,146,61,125,149,39,34,9,88,28,11,152,54,139,107,118,42,87,13,100,47,89,83,96,157,69,80,59,76,21,109,122,22,104,93,128,52,140,70,36,136,111,16,31,43,129,132,55,6,79,68,12}, // permutation 0
{32,137,37,22,106,48,163,40,83,7,155,26,123,158,11,109,107,65,10,16,52,31,4,130,111,97,43,63,145,78,146,27,139,70,98,41,122,148,92,72,127,99,117,87,15,50,95,49,35,103,142,91,20,79,124,90,153,131,53,6,81,74,121,86,151,76,138,3,24,82,84,96,128,136,28,108,59,5,161,114,101,47,61,77,73,89,71,156,85,39,149,13,102,54,157,94,116,60,104,119,42,9,140,152,126,14,132,17,8,133,68,112,56,88,34,162,129,67,115,58,19,113,160,62,120,143,141,38,154,150,80,46,29,66,144,45,125,105,23,12,135,51,134,147,118,33,100,30,55,21,36,44,25,93,1,69,18,2,57,75,159,64,0,110}, // permutation 1
{95,13,90,34,70,141,155,101,156,1,162,99,157,67,136,127,94,30,97,37,151,66,24,19,8,91,47,161,108,109,92,11,23,36,41,12,20,111,15,105,39,42,117,152,110,153,40,75,65,50,139,86,83,43,32,25,31,26,54,82,17,6,33,149,46,93,146,3,77,160,55,59,10,53,104,125,140,63,85,2,45,144,48,131,123,61,134,9,52,107,158,137,103,100,159,89,133,163,4,98,72,57,145,87,113,126,68,119,129,114,116,76,74,14,128,106,112,5,51,120,16,35,58,28,60,96,132,56,7,130,27,49,79,150,147,0,142,69,88,148,118,18,22,71,138,84,29,21,121,135,38,62,81,80,122,115,143,44,124,64,78,102,154,73}, // permutation 2
{77,32,43,24,157,137,114,134,9,38,16,68,121,105,100,150,65,19,37,152,86,76,101,53,3,0,126,104,161,48,61,149,122,44,99,31,146,111,139,85,118,147,133,5,95,66,30,36,27,151,93,39,145,136,90,155,129,72,40,63,52,46,69,109,47,88,87,83,97,25,70,78,125,144,15,59,102,92,74,29,130,148,54,33,17,154,82,41,51,50,13,112,138,28,64,45,106,91,89,110,119,8,160,84,80,94,49,117,107,135,60,62,10,18,11,4,55,73,67,103,12,2,6,56,162,127,34,26,159,14,116,128,163,131,124,1,123,7,108,71,143,81,23,158,35,20,142,132,58,141,96,153,120,57,42,156,140,21,98,115,79,22,113,75}, // permutation 3
{159,59,64,62,21,154,149,141,150,52,91,119,44,40,35,81,5,142,63,82,75,67,11,71,137,28,19,139,1,144,111,42,4,129,158,49,54,37,58,108,50,114,77,124,9,162,20,16,95,133,100,65,128,134,70,145,41,83,113,53,146,27,160,43,105,110,32,3,15,94,96,79,45,87,57,24,2,152,86,14,84,6,120,89,138,39,55,135,118,130,73,136,18,161,56,34,8,36,107,151,72,140,26,78,61,148,156,163,33,60,31,132,80,38,106,98,125,25,76,66,0,17,93,23,117,69,47,115,74,68,22,7,48,155,143,121,30,127,112,51,126,92,88,157,101,123,102,131,103,10,29,122,85,147,13,109,46,12,104,99,116,153,97,90}, // permutation 4
{162,21,157,137,70,104,143,69,152,52,100,110,119,25,114,99,36,138,121,59,64,31,141,133,139,56,95,81,45,161,6,41,148,109,5,62,126,101,80,125,85,10,23,8,97,67,140,111,158,48,13,160,53,26,159,154,20,3,131,135,47,127,18,84,71,86,74,128,49,30,2,79,4,145,129,46,28,57,107,117,37,50,134,61,76,93,27,1,29,77,40,12,68,22,153,75,42,116,105,58,118,15,94,33,14,120,147,96,102,60,91,34,87,19,132,65,150,113,106,63,122,92,9,151,72,43,78,136,38,35,144,123,155,163,90,7,108,44,0,98,156,54,112,103,89,32,149,82,115,66,146,130,11,24,83,73,39,88,51,16,124,142,55,17}, // permutation 5
{130,5,118,124,103,15,13,39,41,56,132,161,98,109,57,147,126,63,110,158,133,108,78,40,154,66,46,121,128,45,137,160,119,145,7,27,17,33,90,159,4,71,136,101,114,153,85,74,113,0,129,61,35,112,157,156,105,26,51,95,96,9,163,30,143,31,55,144,1,60,38,140,117,82,127,100,107,22,152,54,79,150,23,151,131,65,53,102,42,93,11,52,146,14,89,43,18,111,47,92,120,139,141,134,67,24,3,122,86,106,142,12,44,48,36,72,49,50,76,6,77,125,8,34,62,25,138,10,80,37,68,29,123,69,115,148,81,21,32,155,2,162,64,73,19,87,58,116,99,16,20,84,83,104,149,94,91,70,97,59,28,88,75,135}, // permutation 6
{27,71,16,139,160,93,20,89,134,11,99,69,125,45,95,154,73,114,14,29,162,55,101,133,132,127,28,4,58,78,2,65,34,17,82,56,123,40,52,156,67,129,135,144,102,38,146,83,122,61,64,57,152,39,88,116,150,103,5,74,42,97,63,37,12,86,110,8,49,147,126,121,50,148,10,81,48,96,41,112,70,59,80,43,155,51,109,140,91,66,128,7,130,113,77,157,149,26,13,60,18,15,3,75,47,108,24,142,124,143,32,44,106,100,1,0,107,118,119,84,31,98,36,151,159,30,22,145,62,105,90,94,19,53,76,131,46,115,87,85,153,92,104,158,23,54,141,117,33,136,138,9,21,161,111,72,79,137,25,35,120,163,68,6}, // permutation 7
{26,120,44,43,106,147,72,63,85,151,125,115,38,87,21,59,80,129,3,1,10,58,103,34,123,109,69,57,65,71,32,110,134,116,4,92,0,105,28,83,52,88,135,126,7,108,160,42,36,17,162,13,117,78,140,93,2,113,64,47,163,20,145,35,95,86,122,152,138,142,89,82,156,102,99,31,54,137,149,98,76,128,53,94,143,130,48,74,124,39,133,118,141,46,112,79,146,121,51,132,75,11,41,104,61,97,33,37,23,139,68,136,119,161,27,30,101,60,16,73,150,8,15,55,22,107,81,45,114,77,25,12,24,111,19,84,18,66,9,91,159,5,14,49,70,56,90,157,40,50,96,100,155,6,62,148,154,153,144,158,29,131,127,67}, // permutation 8
{46,118,87,79,130,163,149,58,33,107,141,152,117,102,66,76,12,105,77,43,61,19,150,4,59,140,132,13,45,48,154,108,55,98,80,37,101,97,28,137,6,120,138,159,29,40,122,153,71,114,155,65,11,113,62,109,144,162,115,78,44,125,94,74,60,49,83,39,95,151,104,51,146,136,142,82,47,85,103,160,75,112,134,96,34,147,0,70,148,63,131,21,57,27,73,38,53,116,20,42,123,31,68,36,69,14,110,93,156,145,26,127,72,143,52,64,89,8,91,23,32,161,15,54,124,135,56,157,84,126,17,10,100,18,129,30,2,9,67,158,16,22,81,119,24,139,1,41,92,3,111,25,90,128,5,35,133,106,121,86,50,88,99,7} // permutation 9
};

// Seed: 3817634862

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int16_t  f0;
   uint32_t  f1;
};

union U1 {
   volatile int64_t  f0;
   int64_t  f1;
   volatile uint32_t  f2;
};

struct S2 {
    volatile int32_t g_2[9][9][3];
    volatile int32_t g_3;
    volatile VECTOR(int32_t, 2) g_4;
    int32_t g_5;
    int32_t g_11[9];
    int32_t *g_10[6][5];
    uint32_t g_62;
    uint32_t g_64;
    VECTOR(uint8_t, 16) g_67;
    VECTOR(int16_t, 4) g_87;
    uint16_t g_97;
    volatile uint64_t g_130;
    volatile uint64_t *g_129;
    volatile union U1 g_144[3];
    uint32_t *g_160;
    int64_t g_162;
    int32_t *** volatile g_165[6][2];
    union U0 g_172;
    union U1 g_184;
    uint32_t g_187;
    int32_t g_190[2];
    int16_t *g_192;
    VECTOR(uint32_t, 2) g_195;
    int32_t g_213;
    volatile union U1 *g_217;
    volatile union U1 ** volatile g_216[8];
    volatile union U1 ** volatile g_218;
    volatile uint8_t g_221;
    volatile uint8_t *g_220;
    volatile uint8_t ** volatile g_219;
    volatile VECTOR(int16_t, 16) g_234;
    VECTOR(int32_t, 2) g_236;
    VECTOR(uint16_t, 2) g_237;
    VECTOR(uint32_t, 4) g_242;
    uint8_t *g_265;
    uint8_t **g_264;
    uint8_t ***g_263;
    uint16_t *g_269[9][3];
    int8_t g_273;
    uint64_t g_297;
    union U1 g_324;
    int8_t g_341[1];
    volatile uint8_t g_348;
    VECTOR(uint16_t, 8) g_367;
    VECTOR(int16_t, 16) g_389;
    uint64_t g_402[7];
    int8_t g_411[6];
    union U1 g_413;
    int32_t *g_417;
    int32_t **g_416[10][10];
    volatile union U1 g_430;
    VECTOR(int64_t, 4) g_466;
    volatile VECTOR(int64_t, 4) g_471;
    int32_t g_476;
    VECTOR(uint32_t, 8) g_481;
    union U1 g_507;
    union U1 g_512;
    VECTOR(uint16_t, 2) g_558;
    VECTOR(uint16_t, 16) g_560;
    VECTOR(uint8_t, 2) g_578;
    volatile uint64_t g_605;
    volatile uint64_t *g_604;
    volatile uint64_t ** volatile g_603[9][9];
    volatile VECTOR(uint32_t, 8) g_646;
    uint32_t g_661;
    volatile int32_t * volatile g_669;
    volatile int32_t * volatile * volatile g_668;
    union U1 g_673;
    volatile VECTOR(int16_t, 8) g_680;
    VECTOR(int16_t, 2) g_681;
    VECTOR(int32_t, 4) g_689;
    int32_t * volatile g_694;
    int32_t * volatile g_695;
    int32_t **g_707[5][3];
    int32_t **g_708;
    int32_t **g_718;
    union U0 g_723;
    VECTOR(uint16_t, 4) g_884;
    VECTOR(uint32_t, 16) g_885;
    VECTOR(int32_t, 8) g_906;
    VECTOR(int32_t, 2) g_908;
    VECTOR(int16_t, 16) g_914;
    VECTOR(uint16_t, 8) g_915;
    VECTOR(uint16_t, 16) g_917;
    union U0 g_924;
    VECTOR(int16_t, 8) g_943;
    union U0 g_957;
    int32_t * volatile g_964;
    volatile VECTOR(uint8_t, 2) g_979;
    uint64_t *g_986;
    VECTOR(uint16_t, 16) g_992;
    int32_t * volatile g_1000;
    int32_t * volatile * volatile g_999;
    volatile uint16_t g_1006;
    int32_t ** volatile g_1028;
    volatile VECTOR(int16_t, 4) g_1055;
    volatile VECTOR(int16_t, 2) g_1056;
    VECTOR(int16_t, 4) g_1058;
    volatile VECTOR(uint8_t, 8) g_1184;
    VECTOR(uint8_t, 4) g_1186;
    volatile VECTOR(uint8_t, 16) g_1192;
    int8_t *g_1196;
    int8_t **g_1195[6];
    volatile union U0 g_1205;
    volatile union U0 *g_1204;
    volatile union U0 * volatile *g_1203;
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
int64_t  func_1(struct S2 * p_1208);
int32_t  func_12(int32_t ** p_13, uint32_t  p_14, int16_t  p_15, struct S2 * p_1208);
int32_t ** func_16(int32_t * p_17, int32_t ** p_18, int16_t  p_19, int32_t ** p_20, struct S2 * p_1208);
int32_t ** func_23(uint16_t  p_24, int8_t  p_25, uint64_t  p_26, int8_t  p_27, struct S2 * p_1208);
int16_t  func_32(int32_t ** p_33, int32_t ** p_34, int32_t ** p_35, int32_t ** p_36, struct S2 * p_1208);
union U1  func_37(uint16_t  p_38, int8_t  p_39, int64_t  p_40, uint32_t  p_41, struct S2 * p_1208);
int64_t  func_44(int32_t * p_45, int32_t  p_46, uint64_t  p_47, struct S2 * p_1208);
int32_t  func_49(int32_t ** p_50, int32_t ** p_51, struct S2 * p_1208);
int32_t ** func_52(uint64_t  p_53, int32_t ** p_54, uint32_t  p_55, struct S2 * p_1208);
int32_t ** func_56(int32_t * p_57, uint32_t  p_58, uint32_t  p_59, struct S2 * p_1208);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1208->g_5 p_1208->g_190 p_1208->g_1184 p_1208->g_1186 p_1208->g_1192 p_1208->g_1195 p_1208->g_220 p_1208->g_221 p_1208->g_1203 p_1208->g_1196 p_1208->g_411 p_1208->g_885 p_1208->g_1028
 * writes: p_1208->g_5 p_1208->g_10 p_1208->g_578 p_1208->g_1195 p_1208->g_417
 */
int64_t  func_1(struct S2 * p_1208)
{ /* block id: 4 */
    int32_t *l_21[4][9] = {{&p_1208->g_5,(void*)0,&p_1208->g_11[0],&p_1208->g_11[2],&p_1208->g_11[0],(void*)0,&p_1208->g_5,&p_1208->g_5,&p_1208->g_11[0]},{&p_1208->g_5,(void*)0,&p_1208->g_11[0],&p_1208->g_11[2],&p_1208->g_11[0],(void*)0,&p_1208->g_5,&p_1208->g_5,&p_1208->g_11[0]},{&p_1208->g_5,(void*)0,&p_1208->g_11[0],&p_1208->g_11[2],&p_1208->g_11[0],(void*)0,&p_1208->g_5,&p_1208->g_5,&p_1208->g_11[0]},{&p_1208->g_5,(void*)0,&p_1208->g_11[0],&p_1208->g_11[2],&p_1208->g_11[0],(void*)0,&p_1208->g_5,&p_1208->g_5,&p_1208->g_11[0]}};
    int32_t l_22 = 0x7CB2C1D3L;
    int32_t l_278[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t *l_415 = &p_1208->g_5;
    int32_t **l_414 = &l_415;
    VECTOR(int64_t, 16) l_1073 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 7L), 7L), 7L, 0L, 7L, (VECTOR(int64_t, 2))(0L, 7L), (VECTOR(int64_t, 2))(0L, 7L), 0L, 7L, 0L, 7L);
    uint8_t **l_1085 = &p_1208->g_265;
    VECTOR(uint16_t, 2) l_1090 = (VECTOR(uint16_t, 2))(0UL, 65535UL);
    int16_t l_1093 = (-1L);
    uint8_t l_1095 = 0xC4L;
    VECTOR(uint8_t, 4) l_1185 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xD0L), 0xD0L);
    VECTOR(uint8_t, 16) l_1187 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL, (VECTOR(uint8_t, 2))(255UL, 0UL), (VECTOR(uint8_t, 2))(255UL, 0UL), 255UL, 0UL, 255UL, 0UL);
    uint8_t *l_1188 = (void*)0;
    VECTOR(uint8_t, 4) l_1189 = (VECTOR(uint8_t, 4))(0xEEL, (VECTOR(uint8_t, 2))(0xEEL, 0xAEL), 0xAEL);
    VECTOR(uint8_t, 2) l_1190 = (VECTOR(uint8_t, 2))(0UL, 0x8DL);
    VECTOR(uint8_t, 2) l_1191 = (VECTOR(uint8_t, 2))(0x10L, 0UL);
    int8_t ***l_1197 = &p_1208->g_1195[0];
    uint16_t l_1202 = 0xCA60L;
    uint16_t *l_1206[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int8_t l_1207 = 0L;
    int i, j;
    for (p_1208->g_5 = 0; (p_1208->g_5 <= (-22)); p_1208->g_5 = safe_sub_func_int32_t_s_s(p_1208->g_5, 1))
    { /* block id: 7 */
        int32_t *l_8 = &p_1208->g_5;
        int32_t **l_9[10] = {&l_8,&l_8,&l_8,&l_8,&l_8,&l_8,&l_8,&l_8,&l_8,&l_8};
        int16_t *l_277[4][5][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int8_t l_1076 = 1L;
        uint8_t *l_1079 = (void*)0;
        uint8_t *l_1080[6][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        union U1 *l_1092 = &p_1208->g_507;
        union U1 **l_1091 = &l_1092;
        int32_t l_1094 = 0x524DAB2EL;
        int i, j, k;
        p_1208->g_10[5][0] = l_8;
    }
    if ((atomic_inc(&p_1208->l_atomic_input[46]) == 7))
    { /* block id: 470 */
        if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x20EC04A5L)))).lo)
        { /* block id: 471 */
            int32_t l_1096 = (-7L);
            int32_t *l_1164 = (void*)0;
            int32_t *l_1165[2][8][5] = {{{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096}},{{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,&l_1096,&l_1096,&l_1096,&l_1096}}};
            int i, j, k;
            for (l_1096 = (-27); (l_1096 <= (-30)); l_1096 = safe_sub_func_int32_t_s_s(l_1096, 5))
            { /* block id: 474 */
                int64_t l_1099 = 5L;
                int16_t l_1100 = 0L;
                int32_t l_1101 = 0x72819E3AL;
                uint16_t l_1102 = 0x0DC9L;
                VECTOR(int32_t, 2) l_1151 = (VECTOR(int32_t, 2))(0L, 0L);
                VECTOR(int32_t, 8) l_1152 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x51843113L), 0x51843113L), 0x51843113L, (-1L), 0x51843113L);
                uint16_t l_1153 = 65534UL;
                int i;
                l_1102++;
                for (l_1100 = 0; (l_1100 == 29); ++l_1100)
                { /* block id: 478 */
                    int32_t l_1108 = (-10L);
                    int32_t *l_1107 = &l_1108;
                    int32_t *l_1109 = (void*)0;
                    int32_t *l_1110 = &l_1108;
                    int64_t l_1121 = (-1L);
                    l_1110 = (l_1109 = l_1107);
                    for (l_1108 = (-17); (l_1108 >= 13); l_1108++)
                    { /* block id: 483 */
                        VECTOR(uint32_t, 4) l_1113 = (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 4294967286UL), 4294967286UL);
                        uint32_t l_1116[4] = {2UL,2UL,2UL,2UL};
                        int64_t l_1117 = (-10L);
                        int64_t l_1118 = 0x1A579F6F354435F8L;
                        uint8_t l_1119[7][1] = {{0xB5L},{0xB5L},{0xB5L},{0xB5L},{0xB5L},{0xB5L},{0xB5L}};
                        int16_t l_1120 = 0x36D5L;
                        int i, j;
                        l_1113.w--;
                        l_1117 = l_1116[2];
                        l_1120 = (l_1118 , l_1119[2][0]);
                    }
                    if (l_1121)
                    { /* block id: 488 */
                        VECTOR(int32_t, 4) l_1122 = (VECTOR(int32_t, 4))(0x17C504ADL, (VECTOR(int32_t, 2))(0x17C504ADL, 0x2D703175L), 0x2D703175L);
                        VECTOR(int32_t, 2) l_1123 = (VECTOR(int32_t, 2))(0L, 1L);
                        uint32_t l_1124[9][10][2] = {{{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL}},{{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL}},{{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL}},{{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL}},{{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL}},{{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL}},{{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL}},{{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL}},{{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL},{0x3F8BDE22L,4294967295UL}}};
                        VECTOR(int32_t, 8) l_1125 = (VECTOR(int32_t, 8))(0x54195180L, (VECTOR(int32_t, 4))(0x54195180L, (VECTOR(int32_t, 2))(0x54195180L, 0x0A0374FFL), 0x0A0374FFL), 0x0A0374FFL, 0x54195180L, 0x0A0374FFL);
                        VECTOR(int32_t, 16) l_1126 = (VECTOR(int32_t, 16))(0x7DD6C3E7L, (VECTOR(int32_t, 4))(0x7DD6C3E7L, (VECTOR(int32_t, 2))(0x7DD6C3E7L, 0x7DE62879L), 0x7DE62879L), 0x7DE62879L, 0x7DD6C3E7L, 0x7DE62879L, (VECTOR(int32_t, 2))(0x7DD6C3E7L, 0x7DE62879L), (VECTOR(int32_t, 2))(0x7DD6C3E7L, 0x7DE62879L), 0x7DD6C3E7L, 0x7DE62879L, 0x7DD6C3E7L, 0x7DE62879L);
                        VECTOR(int32_t, 16) l_1127 = (VECTOR(int32_t, 16))(0x30119F55L, (VECTOR(int32_t, 4))(0x30119F55L, (VECTOR(int32_t, 2))(0x30119F55L, (-1L)), (-1L)), (-1L), 0x30119F55L, (-1L), (VECTOR(int32_t, 2))(0x30119F55L, (-1L)), (VECTOR(int32_t, 2))(0x30119F55L, (-1L)), 0x30119F55L, (-1L), 0x30119F55L, (-1L));
                        VECTOR(int32_t, 2) l_1128 = (VECTOR(int32_t, 2))((-1L), 0x522A8609L);
                        int8_t l_1129 = (-4L);
                        VECTOR(int32_t, 2) l_1130 = (VECTOR(int32_t, 2))((-7L), 0x17BC9360L);
                        VECTOR(int32_t, 8) l_1131 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-6L)), (-6L)), (-6L), (-2L), (-6L));
                        VECTOR(int32_t, 4) l_1132 = (VECTOR(int32_t, 4))(0x3067B2C8L, (VECTOR(int32_t, 2))(0x3067B2C8L, 1L), 1L);
                        uint64_t l_1133[10];
                        uint64_t l_1134 = 0x552CE69D39E40F48L;
                        int16_t l_1135 = 5L;
                        uint32_t l_1136 = 0xC1D9749BL;
                        uint16_t l_1137 = 1UL;
                        uint32_t l_1138 = 0xD120B19FL;
                        int8_t l_1139 = 0x7DL;
                        uint16_t l_1140 = 1UL;
                        int8_t l_1141 = 0x75L;
                        uint32_t l_1142 = 0x8B4F73FBL;
                        uint8_t l_1143 = 255UL;
                        VECTOR(int32_t, 2) l_1144 = (VECTOR(int32_t, 2))(0L, 0L);
                        int i, j, k;
                        for (i = 0; i < 10; i++)
                            l_1133[i] = 0xB0FF96A24FED7C2DL;
                        l_1144.y = ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))((-9L), 0x03792037L)), ((VECTOR(int32_t, 16))(l_1122.xwwyzwzwxzzwzyyy)).s67))).xyxx, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1123.yx)).xyyx)).yxxyxyzxxzwwywzx)).odd, ((VECTOR(int32_t, 4))(l_1124[0][8][0], ((VECTOR(int32_t, 16))(l_1125.s2716134273266430)).sf, (-8L), 0x347EC723L)).xxxzxyxz, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(l_1126.sb43fb3c6)).s65, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(0x2CEC4095L, 0x78EB6945L, 1L, (-1L))).odd))), ((VECTOR(int32_t, 2))((-5L), 0x0959F1E7L))))).xyyyyxyy)).hi)).yxyzywwy)).odd, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(l_1127.s2e45)).yxzyxwzx, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(l_1128.yx)).xxxxxyyyyyyyxxxx, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(5L, l_1129, 0x20B7CDB0L, 0x38C83769L, ((VECTOR(int32_t, 4))(l_1130.xyyy)))).s77)).xxxyxxxy)).lo, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_1131.s7660374444371620)).s5e, ((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1132.zy)).xxyyxyxx)), l_1133[5], ((VECTOR(int32_t, 2))(0x455867A4L, (-1L))), (-1L), 0x2B8B2CA1L, 0x44255A14L, 0x7522D600L)).s66))).yxyx))).zwwxyxxxxxwwwxzw))).sb, (-9L), 0x605EF010L, 0x3A396A2FL)).xyzyxywzzzywzxzy)).s97, ((VECTOR(int32_t, 16))(0x01FD18C9L, (l_1134 = ((*l_1107) = 0x4ECF8AFDL)), ((l_1136 = (l_1124[0][8][0] = l_1135)) , ((*l_1107) = l_1137)), (((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 8))(l_1138, 0x9051L, ((VECTOR(uint16_t, 4))(l_1139, l_1140, 0xC286L, 0xA2CBL)).w, l_1141, ((VECTOR(uint16_t, 4))(0x88B1L)))).lo, ((VECTOR(uint16_t, 4))(0xDCAFL))))).even, (uint32_t)0xA8944754L))).even , 0x40E9663BL), 1L, ((VECTOR(int32_t, 4))(0x74AEFC00L)), l_1142, ((VECTOR(int32_t, 2))(0x250256E7L)), 1L, l_1143, 1L, (-9L))).sde))).yxxxxyxx))).even))).odd))).xxxyxxxxyxyxxyyy)).sae)).yyyyxxxy))))))).lo, ((VECTOR(int32_t, 4))((-3L)))))).x;
                    }
                    else
                    { /* block id: 495 */
                        uint64_t l_1145[3];
                        uint8_t l_1146[8] = {0x22L,0xBBL,0x22L,0x22L,0xBBL,0x22L,0x22L,0xBBL};
                        uint16_t l_1149[6] = {9UL,65532UL,9UL,9UL,65532UL,9UL};
                        int32_t *l_1150 = (void*)0;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1145[i] = 0x91CC823515756B68L;
                        (*l_1109) = l_1145[0];
                        l_1146[3]++;
                        (*l_1109) = l_1149[4];
                        l_1150 = (void*)0;
                    }
                }
                l_1153 |= ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1151.xx)))), ((VECTOR(int32_t, 16))(l_1152.s5223035600324532)).sda))).hi;
            }
            for (l_1096 = 8; (l_1096 < 9); l_1096 = safe_add_func_uint64_t_u_u(l_1096, 4))
            { /* block id: 506 */
                union U0 l_1156 = {8L};/* VOLATILE GLOBAL l_1156 */
                VECTOR(int8_t, 2) l_1157 = (VECTOR(int8_t, 2))(1L, (-2L));
                VECTOR(uint64_t, 8) l_1158 = (VECTOR(uint64_t, 8))(18446744073709551613UL, (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 0x86370318DA8E345FL), 0x86370318DA8E345FL), 0x86370318DA8E345FL, 18446744073709551613UL, 0x86370318DA8E345FL);
                int16_t l_1159 = 0x54FAL;
                VECTOR(uint32_t, 16) l_1160 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), 1UL, 4294967295UL, 1UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 4294967295UL, 1UL, 4294967295UL, 1UL);
                uint64_t l_1161 = 0xF32C573155F0D54EL;
                int64_t l_1162 = 0x19AABF6BC3E50353L;
                uint32_t l_1163 = 2UL;
                int i;
                l_1163 = (l_1156 , ((((VECTOR(int8_t, 8))(l_1157.xyyxxyyy)).s1 , (((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 4))(l_1158.s3104)).odd, (uint64_t)l_1159))).yyxyxyyxyyyyyyxx)).s92f8, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(5UL, 0UL, 4294967295UL, 0x426E44C5L)).wyxxzzxwwyxwxxxw)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_1160.sd1)).yxyxxxxxxxxyxyxy))))))).s5e02))).z , 0x6AL)) , (l_1161 , l_1162)));
            }
            l_1165[1][0][4] = l_1164;
        }
        else
        { /* block id: 510 */
            union U1 l_1168 = {0x564D5C340C5613A1L};/* VOLATILE GLOBAL l_1168 */
            union U1 *l_1167 = &l_1168;
            union U1 **l_1166 = &l_1167;
            union U1 **l_1169 = &l_1167;
            uint64_t l_1170 = 0x08DD0770AF915BF5L;
            uint8_t l_1173 = 250UL;
            int32_t *l_1176[4];
            int i;
            for (i = 0; i < 4; i++)
                l_1176[i] = (void*)0;
            l_1169 = l_1166;
            --l_1170;
            l_1173--;
            l_1176[2] = l_1176[0];
        }
        unsigned int result = 0;
        atomic_add(&p_1208->l_special_values[46], result);
    }
    else
    { /* block id: 516 */
        (1 + 1);
    }
    (*p_1208->g_1028) = ((safe_unary_minus_func_uint16_t_u(((((p_1208->g_190[0] <= (l_1207 |= ((safe_add_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((0x46L && ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 2))(0x01L, 248UL)).yyxyyxxyyxxyxxyy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x0DL, 1UL)).xxxyyyxxxxxxyyxy)).hi, ((VECTOR(uint8_t, 8))(p_1208->g_1184.s63224031))))).s56)), 0UL, 0x09L)).xzzxwxyzxwzwxzxw, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 2))(l_1185.yy)).xyxyxxxx, ((VECTOR(uint8_t, 16))(p_1208->g_1186.ywwywwwxxyyyywyw)).lo))).odd, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 4))(l_1187.sde89)), ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 2))(0UL, 255UL)).yyyy, (uint8_t)(p_1208->g_578.x = 0UL)))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_1189.wzxxyyzy)).hi)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_1190.xx)), 0x57L, 0x57L, ((VECTOR(uint8_t, 4))(l_1191.yxyx)), ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 8))(255UL, ((VECTOR(uint8_t, 4))(p_1208->g_1192.s4183)), ((safe_div_func_uint16_t_u_u((((1L || (((*l_1197) = p_1208->g_1195[1]) != ((safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_1208->global_1_offset, get_global_id(1), 10), (((safe_sub_func_int8_t_s_s(((-7L) | (0xF663L > (((((l_1202 && (*p_1208->g_220)) , p_1208->g_1203) == (void*)0) < (**l_414)) <= (-1L)))), (**l_414))) != (*l_415)) , 65531UL))) , &p_1208->g_1196))) || 1L) != (*l_415)), 0x6481L)) > 251UL), 0xF9L, 252UL)).s37, ((VECTOR(uint8_t, 2))(0x89L))))), 249UL, 255UL, ((VECTOR(uint8_t, 4))(250UL)))).sc277))), ((VECTOR(uint8_t, 4))(1UL))))).even, ((VECTOR(uint8_t, 2))(251UL))))).yxxy))), ((VECTOR(uint8_t, 4))(0xA8L)), ((VECTOR(uint8_t, 4))(7UL))))), 0xA0L, FAKE_DIVERGE(p_1208->local_1_offset, get_local_id(1), 10), 1UL, 0x6BL)).odd, ((VECTOR(uint8_t, 4))(255UL))))))).yywwyyxzxzzwzyyy))).s16, ((VECTOR(uint8_t, 2))(8UL)), ((VECTOR(uint8_t, 2))(0x42L))))), 0xCFL, 1UL)).xzxxxwwxxxyyywyy)).s2596)).zxzwxyxyzwyywywy))).s7), 1)) | 0x4EE3087AL) < 0xF5L), (*p_1208->g_1196))), (**l_414))) , 65526UL))) , (*l_415)) | p_1208->g_885.sa) == (*p_1208->g_1196)))) , (void*)0);
    return (**l_414);
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_723 p_1208->g_64 p_1208->g_187 p_1208->g_884 p_1208->g_885 p_1208->g_708 p_1208->g_906 p_1208->g_908 p_1208->g_914 p_1208->g_915 p_1208->g_917 p_1208->g_924 p_1208->g_924.f1 p_1208->g_220 p_1208->g_221 p_1208->g_964 p_1208->g_11 p_1208->g_718 p_1208->g_673.f0 p_1208->g_999 p_1208->g_1006 p_1208->g_723.f0 p_1208->g_190 p_1208->g_668 p_1208->g_669 p_1208->g_507.f1 p_1208->g_97 p_1208->g_1028 p_1208->g_218 p_1208->g_217 p_1208->g_341 p_1208->g_269 p_1208->g_129 p_1208->g_130 p_1208->g_242 p_1208->g_162 p_1208->l_comm_values p_1208->g_184.f0 p_1208->g_348 p_1208->g_144 p_1208->g_67 p_1208->g_219 p_1208->g_172 p_1208->g_402 p_1208->g_273 p_1208->g_87 p_1208->g_411 p_1208->g_comm_values p_1208->g_413 p_1208->g_1055 p_1208->g_1056 p_1208->g_1058 p_1208->g_160 p_1208->g_62 p_1208->g_681
 * writes: p_1208->g_64 p_1208->g_187 p_1208->g_10 p_1208->g_924.f1 p_1208->g_184.f1 p_1208->g_324.f1 p_1208->g_11 p_1208->g_162 p_1208->g_661 p_1208->g_1006 p_1208->g_669 p_1208->g_507.f1 p_1208->g_97 p_1208->g_417 p_1208->g_348 p_1208->g_297 p_1208->g_402 p_1208->g_87 p_1208->g_411
 */
int32_t  func_12(int32_t ** p_13, uint32_t  p_14, int16_t  p_15, struct S2 * p_1208)
{ /* block id: 261 */
    uint64_t l_724 = 0xF12936C3DC706A8CL;
    uint32_t l_874 = 2UL;
    int16_t l_897 = 7L;
    VECTOR(int32_t, 4) l_903 = (VECTOR(int32_t, 4))(0x365C6217L, (VECTOR(int32_t, 2))(0x365C6217L, 0x3572C9C4L), 0x3572C9C4L);
    int32_t l_905 = 0x59CFF636L;
    VECTOR(int32_t, 8) l_909 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x17937096L), 0x17937096L), 0x17937096L, 0L, 0x17937096L);
    VECTOR(int32_t, 8) l_910 = (VECTOR(int32_t, 8))(0x5B4A83D9L, (VECTOR(int32_t, 4))(0x5B4A83D9L, (VECTOR(int32_t, 2))(0x5B4A83D9L, 1L), 1L), 1L, 0x5B4A83D9L, 1L);
    VECTOR(uint16_t, 2) l_916 = (VECTOR(uint16_t, 2))(65529UL, 65535UL);
    int8_t *l_926 = &p_1208->g_341[0];
    int8_t **l_925 = &l_926;
    int64_t l_927 = 2L;
    int64_t l_961 = 2L;
    int64_t l_963 = 0x6A948A7E33ADC183L;
    union U0 *l_965 = &p_1208->g_172;
    int32_t l_968 = 0x3B269D78L;
    VECTOR(int32_t, 16) l_1033 = (VECTOR(int32_t, 16))(0x0C8D16C2L, (VECTOR(int32_t, 4))(0x0C8D16C2L, (VECTOR(int32_t, 2))(0x0C8D16C2L, 0x20B2BB24L), 0x20B2BB24L), 0x20B2BB24L, 0x0C8D16C2L, 0x20B2BB24L, (VECTOR(int32_t, 2))(0x0C8D16C2L, 0x20B2BB24L), (VECTOR(int32_t, 2))(0x0C8D16C2L, 0x20B2BB24L), 0x0C8D16C2L, 0x20B2BB24L, 0x0C8D16C2L, 0x20B2BB24L);
    VECTOR(int64_t, 8) l_1068 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-4L)), (-4L)), (-4L), 0L, (-4L));
    int i;
    if (((safe_sub_func_uint8_t_u_u((p_1208->g_723 , l_724), (l_724 , (safe_div_func_uint32_t_u_u(GROUP_DIVERGE(0, 1), 0x54E18951L))))) > (~0x48L)))
    { /* block id: 262 */
        int8_t *l_894 = &p_1208->g_273;
        int8_t **l_893 = &l_894;
        int32_t l_895[7][6][6] = {{{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L}},{{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L}},{{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L}},{{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L}},{{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L}},{{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L}},{{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L},{0x27F71F50L,1L,0x4CE11873L,6L,0x71E6A374L,0x27F71F50L}}};
        int i, j, k;
        if ((atomic_inc(&p_1208->g_atomic_input[85 * get_linear_group_id() + 54]) == 0))
        { /* block id: 264 */
            int32_t l_727 = 0x0D529020L;
            int32_t *l_778[2];
            int32_t *l_779 = (void*)0;
            int32_t *l_780 = &l_727;
            int i;
            for (i = 0; i < 2; i++)
                l_778[i] = &l_727;
            for (l_727 = 0; (l_727 <= (-23)); l_727 = safe_sub_func_uint32_t_u_u(l_727, 6))
            { /* block id: 267 */
                int32_t l_730 = 0x2C440D7BL;
                union U1 l_761[8] = {{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}};
                union U1 *l_760 = &l_761[1];
                int i;
                for (l_730 = (-15); (l_730 < (-17)); l_730 = safe_sub_func_uint64_t_u_u(l_730, 8))
                { /* block id: 270 */
                    int32_t l_733 = 1L;
                    VECTOR(int32_t, 8) l_734 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 1L), 1L), 1L, (-2L), 1L);
                    int32_t l_735 = 4L;
                    uint32_t l_736 = 0xA06ED3F8L;
                    uint8_t l_739 = 249UL;
                    int i;
                    l_736--;
                    if (l_739)
                    { /* block id: 272 */
                        uint64_t l_740 = 18446744073709551607UL;
                        VECTOR(int32_t, 16) l_743 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x6A189E04L), 0x6A189E04L), 0x6A189E04L, (-8L), 0x6A189E04L, (VECTOR(int32_t, 2))((-8L), 0x6A189E04L), (VECTOR(int32_t, 2))((-8L), 0x6A189E04L), (-8L), 0x6A189E04L, (-8L), 0x6A189E04L);
                        int i;
                        l_740--;
                        l_735 ^= ((VECTOR(int32_t, 16))(l_743.s7ec243af60e8f0f1)).s3;
                    }
                    else
                    { /* block id: 275 */
                        int32_t l_745 = 0L;
                        int32_t *l_744 = &l_745;
                        uint32_t l_746[9] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                        uint32_t l_747 = 0xF2706AD3L;
                        int16_t l_750 = 0x1947L;
                        int i;
                        l_744 = l_744;
                        l_735 = l_746[7];
                        l_747++;
                        l_734.s3 = l_750;
                    }
                    for (l_734.s5 = 0; (l_734.s5 != (-5)); l_734.s5 = safe_sub_func_int32_t_s_s(l_734.s5, 9))
                    { /* block id: 283 */
                        int32_t l_753 = 0x1F9E5ED7L;
                        int32_t *l_754 = (void*)0;
                        int32_t *l_755 = &l_753;
                        union U0 l_758 = {-1L};/* VOLATILE GLOBAL l_758 */
                        union U0 *l_757 = &l_758;
                        union U0 **l_756 = &l_757;
                        union U0 **l_759 = (void*)0;
                        l_735 = l_753;
                        l_755 = l_754;
                        l_759 = l_756;
                    }
                }
                l_760 = l_760;
            }
            for (l_727 = (-21); (l_727 == (-23)); l_727 = safe_sub_func_uint16_t_u_u(l_727, 4))
            { /* block id: 293 */
                int32_t l_764 = 2L;
                for (l_764 = 6; (l_764 != 14); l_764 = safe_add_func_uint64_t_u_u(l_764, 4))
                { /* block id: 296 */
                    int16_t l_767 = (-3L);
                    uint64_t l_768 = 0UL;
                    l_768 ^= l_767;
                }
                for (l_764 = 0; (l_764 == 24); l_764 = safe_add_func_uint16_t_u_u(l_764, 1))
                { /* block id: 301 */
                    int64_t l_771[4][9] = {{(-4L),1L,(-4L),(-4L),1L,(-4L),(-4L),1L,(-4L)},{(-4L),1L,(-4L),(-4L),1L,(-4L),(-4L),1L,(-4L)},{(-4L),1L,(-4L),(-4L),1L,(-4L),(-4L),1L,(-4L)},{(-4L),1L,(-4L),(-4L),1L,(-4L),(-4L),1L,(-4L)}};
                    int8_t l_772 = 0x40L;
                    uint16_t l_773 = 0x8C53L;
                    uint32_t l_774[2][8] = {{0xE719D02FL,1UL,0UL,1UL,0xE719D02FL,0xE719D02FL,1UL,0UL},{0xE719D02FL,1UL,0UL,1UL,0xE719D02FL,0xE719D02FL,1UL,0UL}};
                    uint32_t l_777 = 0xBF007674L;
                    int i, j;
                    l_773 ^= (l_772 = l_771[1][6]);
                    --l_774[0][4];
                    l_777 |= (-1L);
                }
            }
            l_780 = (l_779 = l_778[0]);
            for (l_727 = 2; (l_727 >= 27); l_727++)
            { /* block id: 312 */
                int64_t l_783 = 1L;
                uint32_t l_784 = 0x6E836F1BL;
                int32_t l_822 = 0x5243C60CL;
                int16_t l_857 = (-1L);
                VECTOR(int16_t, 4) l_858 = (VECTOR(int16_t, 4))(0x14F3L, (VECTOR(int16_t, 2))(0x14F3L, (-2L)), (-2L));
                int16_t l_859 = 0x7E7BL;
                int8_t l_860[2];
                int16_t l_861 = 3L;
                int32_t l_862 = 0L;
                uint8_t l_863 = 0x6DL;
                int i;
                for (i = 0; i < 2; i++)
                    l_860[i] = 3L;
                ++l_784;
                for (l_784 = 0; (l_784 <= 57); l_784 = safe_add_func_uint64_t_u_u(l_784, 4))
                { /* block id: 316 */
                    int32_t l_789 = (-1L);
                    uint32_t l_790 = 0x7DF70F0FL;
                    union U1 l_791[5][3] = {{{6L},{0x6C1C7CB7C93811C1L},{0x0CF637F499B520D5L}},{{6L},{0x6C1C7CB7C93811C1L},{0x0CF637F499B520D5L}},{{6L},{0x6C1C7CB7C93811C1L},{0x0CF637F499B520D5L}},{{6L},{0x6C1C7CB7C93811C1L},{0x0CF637F499B520D5L}},{{6L},{0x6C1C7CB7C93811C1L},{0x0CF637F499B520D5L}}};
                    uint16_t l_792 = 1UL;
                    uint32_t l_793[4];
                    uint16_t l_794 = 0x61CEL;
                    VECTOR(int8_t, 2) l_795 = (VECTOR(int8_t, 2))(0x3EL, 0x51L);
                    VECTOR(int8_t, 2) l_796 = (VECTOR(int8_t, 2))(0x12L, 0x48L);
                    VECTOR(int8_t, 16) l_797 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x57L), 0x57L), 0x57L, (-1L), 0x57L, (VECTOR(int8_t, 2))((-1L), 0x57L), (VECTOR(int8_t, 2))((-1L), 0x57L), (-1L), 0x57L, (-1L), 0x57L);
                    VECTOR(int8_t, 8) l_798 = (VECTOR(int8_t, 8))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), (-1L)), (-1L)), (-1L), (-2L), (-1L));
                    VECTOR(int16_t, 16) l_799 = (VECTOR(int16_t, 16))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x4FCBL), 0x4FCBL), 0x4FCBL, (-10L), 0x4FCBL, (VECTOR(int16_t, 2))((-10L), 0x4FCBL), (VECTOR(int16_t, 2))((-10L), 0x4FCBL), (-10L), 0x4FCBL, (-10L), 0x4FCBL);
                    uint8_t l_800 = 0UL;
                    VECTOR(int8_t, 4) l_801 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L);
                    VECTOR(int8_t, 4) l_802 = (VECTOR(int8_t, 4))(0x1AL, (VECTOR(int8_t, 2))(0x1AL, 6L), 6L);
                    VECTOR(int8_t, 2) l_803 = (VECTOR(int8_t, 2))(0x54L, 4L);
                    VECTOR(uint8_t, 8) l_804 = (VECTOR(uint8_t, 8))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0x21L), 0x21L), 0x21L, 248UL, 0x21L);
                    VECTOR(uint8_t, 8) l_805 = (VECTOR(uint8_t, 8))(0xCBL, (VECTOR(uint8_t, 4))(0xCBL, (VECTOR(uint8_t, 2))(0xCBL, 7UL), 7UL), 7UL, 0xCBL, 7UL);
                    VECTOR(int8_t, 2) l_806 = (VECTOR(int8_t, 2))(5L, (-1L));
                    VECTOR(uint8_t, 16) l_807 = (VECTOR(uint8_t, 16))(0x99L, (VECTOR(uint8_t, 4))(0x99L, (VECTOR(uint8_t, 2))(0x99L, 247UL), 247UL), 247UL, 0x99L, 247UL, (VECTOR(uint8_t, 2))(0x99L, 247UL), (VECTOR(uint8_t, 2))(0x99L, 247UL), 0x99L, 247UL, 0x99L, 247UL);
                    uint8_t l_808 = 0UL;
                    uint16_t l_811 = 0xA411L;
                    int64_t l_812 = 1L;
                    VECTOR(uint8_t, 16) l_813 = (VECTOR(uint8_t, 16))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0xBAL), 0xBAL), 0xBAL, 250UL, 0xBAL, (VECTOR(uint8_t, 2))(250UL, 0xBAL), (VECTOR(uint8_t, 2))(250UL, 0xBAL), 250UL, 0xBAL, 250UL, 0xBAL);
                    VECTOR(uint8_t, 2) l_814 = (VECTOR(uint8_t, 2))(0xFAL, 0xDAL);
                    int64_t l_815 = 7L;
                    VECTOR(uint8_t, 8) l_816 = (VECTOR(uint8_t, 8))(0xD1L, (VECTOR(uint8_t, 4))(0xD1L, (VECTOR(uint8_t, 2))(0xD1L, 0xD3L), 0xD3L), 0xD3L, 0xD1L, 0xD3L);
                    VECTOR(uint8_t, 4) l_817 = (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0xAEL), 0xAEL);
                    uint32_t l_818 = 0x566D5EF9L;
                    uint16_t l_819 = 0UL;
                    int32_t l_821 = 0x02E39A84L;
                    int32_t *l_820[8][9][3] = {{{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0}},{{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0}},{{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0}},{{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0}},{{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0}},{{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0}},{{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0}},{{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0},{&l_821,&l_821,(void*)0}}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_793[i] = 4294967286UL;
                    l_790 ^= l_789;
                    l_779 = (((VECTOR(int8_t, 16))(0x60L, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((l_791[0][1] , 0x4FL), 0L, 0L, 0x05L)).wywywxzw)).s25, ((VECTOR(int8_t, 2))(0x7DL, 0x60L))))), ((VECTOR(int8_t, 8))(0L, 0x0EL, l_792, (-8L), ((VECTOR(int8_t, 8))(0L, (l_794 = l_793[1]), ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(l_795.yyyyxxxy)), ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(0x71L, 0x02L)), ((VECTOR(int8_t, 8))(l_796.xyyxxxyy)).s35))).xxyx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x3CL, 0x0AL)))), ((VECTOR(int8_t, 2))(0L, 4L)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_797.sba)).xxyyxxyx)).s14))).yxxy, ((VECTOR(int8_t, 16))(l_798.s1535676056455771)).sc3b5))), ((VECTOR(int8_t, 4))((-6L), (((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 8))(l_799.s7d9abf6f)).odd, ((VECTOR(int16_t, 2))((-2L), (-1L))).xyxx, ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_800, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(l_801.wxyywwwzxxyxwywz)).s64, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_802.wyyzwxwx)))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_803.xxyy)).zzyzywxxzxzyxwyw)).odd)))))).lo)).even))), 0x7DL)).hi)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 16))(l_804.s0754744277455630)), ((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 16))(l_805.s7717451432721011)).odd, ((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 8))(l_806.xxxxyxyy)).s00))).yyyyyyxx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x15L, 247UL)).xxyxyyxyyxyxyxxx)).even))).s1031272403255274))).sd86b, ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(248UL, 0UL, FAKE_DIVERGE(p_1208->global_0_offset, get_global_id(0), 10), 0x76L, ((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 2))(l_807.s55)).xxyyxxxx, (uint8_t)(l_812 |= (l_811 &= (++l_808)))))), ((VECTOR(uint8_t, 4))((l_815 = (((VECTOR(uint64_t, 4))(0x68008011A55425DEL, 0xC4BB98C400616315L, 0x2AD289EF693C8E2DL, 1UL)).z , ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 2))(l_813.s15)).yyyy, ((VECTOR(uint8_t, 8))(l_814.xyyxyxyy)).lo))).x)), 0x92L, 6UL, 0x55L)).xzzxxxxx))), 8UL, ((VECTOR(uint8_t, 2))(l_816.s23)), 4UL)).s8c, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(247UL, 0xBDL)))), 255UL, 0UL)).even))))).xyxx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_817.zwyy)).hi)).yxxy))), (uint8_t)255UL))).wyyyzwzzzyzwzwzx, ((VECTOR(uint8_t, 16))(1UL, 0xA9L, FAKE_DIVERGE(p_1208->local_0_offset, get_local_id(0), 10), 0xD5L, l_818, 7UL, ((VECTOR(uint8_t, 4))(246UL)), 255UL, 0xF5L, ((VECTOR(uint8_t, 2))(0x63L)), 255UL, 254UL))))))).sa0))).yyyy))).x , 0x5AL), (-4L), (-1L)))))).wwyxyxzwyyxyyyzz, (int8_t)1L, (int8_t)l_819))).s3fdf))))).wwyzwxww, ((VECTOR(int8_t, 8))(0x55L))))), ((VECTOR(int8_t, 8))(6L))))).s1011335476204053, ((VECTOR(int8_t, 16))((-1L)))))).hi)).s7, 0x7BL, ((VECTOR(int8_t, 4))(4L)), 0x05L, (-1L), 1L, ((VECTOR(int8_t, 4))((-2L))), 1L, 0x22L, 9L)).s62df, ((VECTOR(int8_t, 4))(0x1CL))))), (-1L), 7L)).s2, 0x0DL, (-1L), 0x08L)), 0x4CL, ((VECTOR(int8_t, 4))(0x47L)))).sb , l_820[5][7][1]);
                }
                if (l_822)
                { /* block id: 325 */
                    uint32_t l_823 = 0x39324BAAL;
                    l_823 &= ((VECTOR(int32_t, 2))(1L, 0x1C326921L)).lo;
                }
                else
                { /* block id: 327 */
                    uint16_t l_824 = 65535UL;
                    uint16_t l_850 = 0x04B6L;
                    int64_t l_851 = 0x42E30CA0F54B9231L;
                    int32_t l_852 = 0x223C4239L;
                    int32_t l_853 = 0x19768C4FL;
                    if (l_824)
                    { /* block id: 328 */
                        VECTOR(int64_t, 8) l_825 = (VECTOR(int64_t, 8))(0x71FF07A554F35DD5L, (VECTOR(int64_t, 4))(0x71FF07A554F35DD5L, (VECTOR(int64_t, 2))(0x71FF07A554F35DD5L, (-1L)), (-1L)), (-1L), 0x71FF07A554F35DD5L, (-1L));
                        uint32_t l_826 = 0xD95B945EL;
                        uint32_t l_827 = 5UL;
                        uint32_t l_828 = 0xA5F32427L;
                        uint32_t l_829 = 4294967294UL;
                        int32_t l_830 = 0x057C683BL;
                        uint32_t l_831 = 4294967295UL;
                        int16_t l_832 = 0L;
                        int64_t l_833 = (-1L);
                        int i;
                        l_780 = (((VECTOR(int64_t, 2))(l_825.s17)).hi , (void*)0);
                        l_827 &= l_826;
                        l_829 = l_828;
                        l_833 = ((l_831 = l_830) , l_832);
                    }
                    else
                    { /* block id: 334 */
                        int16_t l_834 = 0L;
                        VECTOR(int32_t, 2) l_836 = (VECTOR(int32_t, 2))(0x3E2C92A7L, 0L);
                        int32_t *l_835[9][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                        uint16_t l_837 = 1UL;
                        int i, j, k;
                        l_834 = 3L;
                        l_778[0] = l_835[5][6][1];
                        ++l_837;
                    }
                    for (l_824 = 0; (l_824 <= 21); l_824++)
                    { /* block id: 341 */
                        uint16_t l_842 = 0xD180L;
                        int8_t l_843 = 0x4EL;
                        int8_t l_844 = (-1L);
                        int32_t l_845 = 0x24FECE8CL;
                        uint16_t l_846 = 65529UL;
                        int32_t l_847 = 0x3E871485L;
                        int8_t l_848 = 0x68L;
                        int32_t *l_849 = (void*)0;
                        l_779 = (l_780 = (((l_842 , l_843) , l_844) , ((l_847 &= (l_846 &= l_845)) , (void*)0)));
                        l_848 = 1L;
                        l_778[0] = l_849;
                    }
                    if ((l_850 , ((l_852 = (l_851 = 1L)) , l_853)))
                    { /* block id: 351 */
                        int32_t l_855 = (-2L);
                        int32_t *l_854[5][5][3] = {{{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855}},{{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855}},{{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855}},{{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855}},{{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855},{&l_855,&l_855,&l_855}}};
                        int i, j, k;
                        l_780 = l_854[1][0][2];
                    }
                    else
                    { /* block id: 353 */
                        uint8_t l_856 = 0xC8L;
                        l_856 = 0x21848376L;
                    }
                }
                l_863++;
            }
            unsigned int result = 0;
            result += l_727;
            atomic_add(&p_1208->g_special_values[85 * get_linear_group_id() + 54], result);
        }
        else
        { /* block id: 359 */
            (1 + 1);
        }
        for (p_1208->g_64 = (-2); (p_1208->g_64 < 57); p_1208->g_64 = safe_add_func_int8_t_s_s(p_1208->g_64, 8))
        { /* block id: 364 */
            return l_724;
        }
        for (p_1208->g_187 = (-19); (p_1208->g_187 == 42); p_1208->g_187 = safe_add_func_uint32_t_u_u(p_1208->g_187, 5))
        { /* block id: 369 */
            int32_t l_870 = 0x3E7DFE81L;
            VECTOR(int16_t, 16) l_881 = (VECTOR(int16_t, 16))(0x3FDAL, (VECTOR(int16_t, 4))(0x3FDAL, (VECTOR(int16_t, 2))(0x3FDAL, (-1L)), (-1L)), (-1L), 0x3FDAL, (-1L), (VECTOR(int16_t, 2))(0x3FDAL, (-1L)), (VECTOR(int16_t, 2))(0x3FDAL, (-1L)), 0x3FDAL, (-1L), 0x3FDAL, (-1L));
            uint16_t l_886[4][3][7] = {{{0UL,6UL,0x2FA4L,0UL,0x48BFL,0UL,0x31CEL},{0UL,6UL,0x2FA4L,0UL,0x48BFL,0UL,0x31CEL},{0UL,6UL,0x2FA4L,0UL,0x48BFL,0UL,0x31CEL}},{{0UL,6UL,0x2FA4L,0UL,0x48BFL,0UL,0x31CEL},{0UL,6UL,0x2FA4L,0UL,0x48BFL,0UL,0x31CEL},{0UL,6UL,0x2FA4L,0UL,0x48BFL,0UL,0x31CEL}},{{0UL,6UL,0x2FA4L,0UL,0x48BFL,0UL,0x31CEL},{0UL,6UL,0x2FA4L,0UL,0x48BFL,0UL,0x31CEL},{0UL,6UL,0x2FA4L,0UL,0x48BFL,0UL,0x31CEL}},{{0UL,6UL,0x2FA4L,0UL,0x48BFL,0UL,0x31CEL},{0UL,6UL,0x2FA4L,0UL,0x48BFL,0UL,0x31CEL},{0UL,6UL,0x2FA4L,0UL,0x48BFL,0UL,0x31CEL}}};
            uint32_t *l_896 = &l_874;
            int8_t l_898 = 0x4BL;
            int32_t ***l_904 = &p_1208->g_416[7][0];
            int i, j, k;
            if (l_870)
                break;
            (*p_1208->g_708) = ((safe_div_func_uint8_t_u_u(3UL, ((safe_unary_minus_func_int16_t_s(((l_874 , (safe_mod_func_int32_t_s_s(((p_15 , (safe_mul_func_int8_t_s_s(p_15, (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_881.s380a)))).y, (safe_mul_func_int8_t_s_s(p_14, (FAKE_DIVERGE(p_1208->local_0_offset, get_local_id(0), 10) < ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(p_1208->g_884.wxzw)).lo)).yxxxxxyy, ((VECTOR(uint16_t, 16))((((*l_896) = ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(p_1208->g_885.s2cafb9c6)))), 6UL, 4294967295UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))((p_14 || ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(1L, l_886[0][1][4], (((safe_rshift_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(1UL, FAKE_DIVERGE(p_1208->local_2_offset, get_local_id(2), 10))), 0xCCB5L)) , l_893) == (void*)0), 1)) | l_724) | l_895[0][2][3]), 0x4CB3D917L, ((VECTOR(int32_t, 4))(0x1A65D4E4L)))).even, (int32_t)l_895[0][2][3]))).z), l_886[0][2][3], 0xCA8CA5D3L, ((VECTOR(uint32_t, 4))(1UL)), 0x8C31952AL)).hi)))).yyyzyywz, ((VECTOR(uint32_t, 8))(0x5C07885AL))))).odd)), 0x684BDBC2L, 0xF1F52183L)).s1) > l_870), p_14, GROUP_DIVERGE(2, 1), 65527UL, ((VECTOR(uint16_t, 4))(4UL)), p_14, 1UL, l_897, 0x9EABL, l_897, 0xA31DL, 0x77FCL, 0x19C2L)).even))), ((VECTOR(uint16_t, 2))(0xC2C2L)), GROUP_DIVERGE(2, 1), 1UL, l_898, ((VECTOR(uint16_t, 2))(0UL)), 0UL)).even)).s4)))))))) >= (-1L)), 1L))) <= l_724))) , 0x6AL))) , (void*)0);
            if (l_898)
                break;
            l_905 ^= ((safe_div_func_uint16_t_u_u(1UL, (safe_mod_func_uint16_t_u_u(((void*)0 != &p_1208->g_263), (((VECTOR(int32_t, 16))(l_903.ywywwwxzwwyxywyy)).s0 , l_903.x))))) , ((void*)0 != l_904));
        }
    }
    else
    { /* block id: 376 */
        VECTOR(int32_t, 8) l_907 = (VECTOR(int32_t, 8))(0x2C5BAC83L, (VECTOR(int32_t, 4))(0x2C5BAC83L, (VECTOR(int32_t, 2))(0x2C5BAC83L, 0x1F58741EL), 0x1F58741EL), 0x1F58741EL, 0x2C5BAC83L, 0x1F58741EL);
        VECTOR(int32_t, 8) l_911 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x758739C7L), 0x758739C7L), 0x758739C7L, (-1L), 0x758739C7L);
        int32_t *l_918 = (void*)0;
        int32_t *l_919 = (void*)0;
        int32_t *l_920 = (void*)0;
        int32_t *l_921 = (void*)0;
        int32_t *l_922 = (void*)0;
        int32_t *l_923 = (void*)0;
        int i;
        atomic_and(&p_1208->l_atomic_reduction[0], ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(p_1208->g_906.s7117)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(0x55993168L, 0x36E58AEAL, 2L, (-6L))).ywxwyyzw, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(l_907.s5514242430577300)).s7a1c, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(4L, ((VECTOR(int32_t, 4))(p_1208->g_908.xyyy)).y, 0x670B3021L, (((((l_903.x = (l_907.s4 , (((((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_909.s70)).yxxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))((l_903.z || 18446744073709551606UL), 0L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_910.s16)), 0L, 0L, 0x54A25D6EL, (&p_1208->g_162 != &p_1208->g_162), 0L, 1L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_911.s17)), 8L, 0x26F01554L)), 0x52515BD4L, 0x628DA621L)).sc7, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x3E16E1CDL, 1L)), ((VECTOR(int32_t, 8))((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(p_1208->g_914.s2a)), ((VECTOR(uint16_t, 16))(l_910.s5, ((VECTOR(uint16_t, 4))(p_1208->g_915.s7552)), 0xB8BBL, 65535UL, ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(0UL, 9UL)), ((VECTOR(uint16_t, 2))(l_916.xy))))), 0x6502L, ((VECTOR(uint16_t, 2))(p_1208->g_917.s45)), ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 16))((p_14 , (l_916.x > p_14)), l_911.s7, l_907.s6, ((VECTOR(uint16_t, 2))(5UL)), l_907.s0, ((VECTOR(uint16_t, 2))(6UL)), ((VECTOR(uint16_t, 4))(0x01E7L)), ((VECTOR(uint16_t, 4))(0x0A89L)))).sed, ((VECTOR(uint16_t, 2))(3UL))))).yxyxyyxx)).lo, ((VECTOR(uint16_t, 4))(3UL))))))).s03))).even, l_907.s7)), l_907.s7, 0x712F1563L, ((VECTOR(int32_t, 4))(0x38E7ACB4L)), 3L)), ((VECTOR(int32_t, 4))(0x1F8A2366L)), 0x382206D0L, 0x25C386D8L)).s4b))))))))).yxxx, ((VECTOR(int32_t, 4))((-1L)))))).yxzwzwxx)).lo))).x & p_14) >= 3UL) , l_909.s3))) , GROUP_DIVERGE(2, 1)) , p_1208->g_924) , l_925) == (void*)0), 0x6E1E204EL, 0x6F4C146CL, ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 4))(0x448CF622L)), 0x16ECCE51L, 3L)).s2e)))).yxyy))))).ywzywwzywwwzwyww, ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))(0x27CF6F55L))))).saf00)))), l_927, 0x3DBC648CL, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(0x11F6DF55L)), 0x65EDE475L, 0x154947A0L)).s5cda)).xwwxwxwx, ((VECTOR(int32_t, 8))(7L))))).odd)).lo, ((VECTOR(int32_t, 2))(0L))))).hi + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1208->v_collective += p_1208->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        l_910.s3 ^= 0x46F240C0L;
    }
    for (p_1208->g_924.f1 = 23; (p_1208->g_924.f1 > 44); p_1208->g_924.f1++)
    { /* block id: 383 */
        int32_t l_952 = 0x3AB34115L;
        VECTOR(int32_t, 16) l_1009 = (VECTOR(int32_t, 16))(0x02139A9EL, (VECTOR(int32_t, 4))(0x02139A9EL, (VECTOR(int32_t, 2))(0x02139A9EL, 0x29EBB2F5L), 0x29EBB2F5L), 0x29EBB2F5L, 0x02139A9EL, 0x29EBB2F5L, (VECTOR(int32_t, 2))(0x02139A9EL, 0x29EBB2F5L), (VECTOR(int32_t, 2))(0x02139A9EL, 0x29EBB2F5L), 0x02139A9EL, 0x29EBB2F5L, 0x02139A9EL, 0x29EBB2F5L);
        int16_t **l_1016 = (void*)0;
        int8_t *l_1017 = &p_1208->g_341[0];
        VECTOR(uint32_t, 2) l_1036 = (VECTOR(uint32_t, 2))(0x2F50A605L, 0UL);
        int32_t l_1037 = 0x222CFD62L;
        int32_t l_1044 = 0x2B654DEBL;
        int32_t l_1045[6][9][4] = {{{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L}},{{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L}},{{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L}},{{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L}},{{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L}},{{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L},{0x5B35C53EL,0x08CB2249L,4L,0x6780DC15L}}};
        int64_t l_1059 = 2L;
        int8_t l_1060 = 0L;
        VECTOR(int64_t, 8) l_1061 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-5L)), (-5L)), (-5L), 1L, (-5L));
        VECTOR(uint8_t, 16) l_1064 = (VECTOR(uint8_t, 16))(0x7BL, (VECTOR(uint8_t, 4))(0x7BL, (VECTOR(uint8_t, 2))(0x7BL, 0x7CL), 0x7CL), 0x7CL, 0x7BL, 0x7CL, (VECTOR(uint8_t, 2))(0x7BL, 0x7CL), (VECTOR(uint8_t, 2))(0x7BL, 0x7CL), 0x7BL, 0x7CL, 0x7BL, 0x7CL);
        int i, j, k;
        for (p_14 = 28; (p_14 < 6); p_14 = safe_sub_func_uint32_t_u_u(p_14, 8))
        { /* block id: 386 */
            int32_t *l_932 = (void*)0;
            VECTOR(int32_t, 4) l_942 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 8L), 8L);
            uint64_t *l_987 = &p_1208->g_402[4];
            uint32_t l_995 = 1UL;
            int32_t *l_1004 = (void*)0;
            int32_t *l_1005[8][10] = {{&l_952,(void*)0,&p_1208->g_11[0],(void*)0,(void*)0,&l_952,(void*)0,(void*)0,(void*)0,&l_952},{&l_952,(void*)0,&p_1208->g_11[0],(void*)0,(void*)0,&l_952,(void*)0,(void*)0,(void*)0,&l_952},{&l_952,(void*)0,&p_1208->g_11[0],(void*)0,(void*)0,&l_952,(void*)0,(void*)0,(void*)0,&l_952},{&l_952,(void*)0,&p_1208->g_11[0],(void*)0,(void*)0,&l_952,(void*)0,(void*)0,(void*)0,&l_952},{&l_952,(void*)0,&p_1208->g_11[0],(void*)0,(void*)0,&l_952,(void*)0,(void*)0,(void*)0,&l_952},{&l_952,(void*)0,&p_1208->g_11[0],(void*)0,(void*)0,&l_952,(void*)0,(void*)0,(void*)0,&l_952},{&l_952,(void*)0,&p_1208->g_11[0],(void*)0,(void*)0,&l_952,(void*)0,(void*)0,(void*)0,&l_952},{&l_952,(void*)0,&p_1208->g_11[0],(void*)0,(void*)0,&l_952,(void*)0,(void*)0,(void*)0,&l_952}};
            int i, j;
            (*p_1208->g_708) = l_932;
            for (p_1208->g_184.f1 = 0; (p_1208->g_184.f1 != (-28)); --p_1208->g_184.f1)
            { /* block id: 390 */
                int32_t l_937 = 0x610ACB50L;
                union U0 *l_956 = &p_1208->g_957;
                union U0 **l_955[3][7][4] = {{{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956}},{{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956}},{{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956,&l_956}}};
                int32_t l_960[8][9][3] = {{{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)}},{{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)}},{{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)}},{{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)}},{{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)}},{{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)}},{{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)}},{{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)},{0x1E6451A7L,0x7D71EF33L,(-5L)}}};
                VECTOR(uint8_t, 8) l_977 = (VECTOR(uint8_t, 8))(0x8FL, (VECTOR(uint8_t, 4))(0x8FL, (VECTOR(uint8_t, 2))(0x8FL, 5UL), 5UL), 5UL, 0x8FL, 5UL);
                int32_t * volatile * volatile l_1001[2][10][7] = {{{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1208->g_1000,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                for (p_1208->g_324.f1 = 0; (p_1208->g_324.f1 != (-29)); --p_1208->g_324.f1)
                { /* block id: 393 */
                    VECTOR(uint32_t, 2) l_946 = (VECTOR(uint32_t, 2))(0UL, 0UL);
                    uint32_t *l_947 = &l_874;
                    int16_t *l_958 = (void*)0;
                    int16_t *l_959 = (void*)0;
                    VECTOR(uint16_t, 2) l_976 = (VECTOR(uint16_t, 2))(0x32DAL, 5UL);
                    VECTOR(uint8_t, 4) l_978 = (VECTOR(uint8_t, 4))(0x00L, (VECTOR(uint8_t, 2))(0x00L, 255UL), 255UL);
                    uint64_t *l_984 = &p_1208->g_402[4];
                    int32_t l_998 = (-3L);
                    int i;
                    l_905 ^= l_937;
                    if ((l_910.s6 = (((safe_mod_func_uint16_t_u_u(((((((+(safe_sub_func_int8_t_s_s((-1L), (*p_1208->g_220)))) > 0x9CL) & (((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x7ECF17FEL, 0L, ((VECTOR(int32_t, 4))(l_942.zzyz)), ((VECTOR(int32_t, 2))(8L, 0x20C34D71L)), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(p_1208->g_943.s1207467634512643)).hi, (int16_t)(l_960[2][8][0] = ((safe_mod_func_uint32_t_u_u(0xE57A6970L, ((*l_947) ^= ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_946.yxxxxxxx)).odd)).w))) >= (safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((l_952 != 4294967292UL), p_15)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_1208->g_558.x, (safe_sub_func_int64_t_s_s((l_955[2][5][1] != (void*)0), GROUP_DIVERGE(1, 1))), 4L, ((VECTOR(int8_t, 4))(9L)), 0x20L, 9L, p_1208->g_187, p_1208->g_97, 0x68L, ((VECTOR(int8_t, 4))(0x43L)))).s8516)).yywzwxxwzwyxwzwx, ((VECTOR(int8_t, 16))((-2L))), ((VECTOR(int8_t, 16))(0x01L))))).s9e, ((VECTOR(int8_t, 2))(0x24L))))), 0x43L, 0x08L)))).yyyxzzzw)))), ((VECTOR(int8_t, 8))((-8L)))))).s15)), 0x7EL, 0x2CL)).yyywzzzy)).s6))))))))).s37, ((VECTOR(uint16_t, 2))(65531UL))))), ((VECTOR(int32_t, 2))(0x107FCF62L)), ((VECTOR(int32_t, 4))(0x44AD4F6EL)))).lo)).s05, ((VECTOR(int32_t, 2))(0L))))).hi != 6L)) < p_14) ^ (-3L)) & l_961), p_14)) , 0x9F63467EBBCA134BL) <= p_15)))
                    { /* block id: 398 */
                        int32_t l_962 = 0x314ED77CL;
                        l_963 = l_962;
                        (*p_1208->g_964) = l_946.x;
                        if (l_962)
                            continue;
                        return (*p_1208->g_964);
                    }
                    else
                    { /* block id: 403 */
                        l_960[7][5][2] = (*p_1208->g_964);
                        l_965 = (void*)0;
                        (*p_1208->g_718) = (l_946.y , l_947);
                    }
                    for (p_1208->g_162 = (-23); (p_1208->g_162 < 0); ++p_1208->g_162)
                    { /* block id: 410 */
                        uint16_t l_969 = 0x8EF3L;
                        uint64_t **l_985[2];
                        int32_t *l_996 = (void*)0;
                        int32_t *l_997 = (void*)0;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_985[i] = &l_984;
                        l_969 ^= l_968;
                        l_998 = (safe_lshift_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), (~((((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_976.yyyxyxxy)).s0531671471771176)), ((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0xE8E8L, l_969, 2UL, 0xBF86L)), p_14, l_903.w, 0x405CL, 1UL)).even)).odd))))).yyxxxyxyxxxyyxxx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 2))(l_977.s33)).yyyyxxxxxyxyyyxy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(l_978.wwyzzxzy)).s64, ((VECTOR(uint8_t, 16))(0x71L, ((VECTOR(uint8_t, 2))(p_1208->g_979.yx)), (((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((p_1208->g_986 = l_984) == (l_960[6][8][2] , l_987)), (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))((p_1208->g_992.sc >= ((*l_947) = (safe_div_func_uint16_t_u_u((+((l_963 , (9UL >= 0x33L)) <= l_916.y)), p_14)))), ((VECTOR(uint32_t, 2))(4294967295UL)), 0xE5799740L)).yxyyxzxy)).s3 ^ p_14), p_14)), l_952)))), l_910.s2)) , p_14) > p_1208->g_2[2][4][2]), 0UL, 0x62L, ((VECTOR(uint8_t, 2))(0UL)), 250UL, 0x11L, FAKE_DIVERGE(p_1208->group_2_offset, get_group_id(2), 10), 0x0CL, p_14, ((VECTOR(uint8_t, 2))(0x4AL)), 0xBDL)).saa))).yxxxyyxxyyxxxyyx, ((VECTOR(uint8_t, 16))(254UL))))).s16, ((VECTOR(uint8_t, 2))(1UL))))).yyxyxyxxyxyxxyyx))))).sb6)).yxxxyyyyyxxyxxyx))).se, l_977.s2)), 0x41L)) ^ l_995) || p_1208->g_673.f0) ^ 247UL))));
                        (*p_1208->g_718) = &l_960[2][8][0];
                    }
                    (*p_1208->g_708) = &l_998;
                }
                l_1001[1][1][6] = p_1208->g_999;
                if ((*p_1208->g_964))
                    continue;
            }
            for (p_1208->g_661 = 24; (p_1208->g_661 <= 22); p_1208->g_661--)
            { /* block id: 424 */
                (*p_1208->g_718) = &l_905;
            }
            --p_1208->g_1006;
        }
        l_952 &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_1009.s24dda66ec4e7a877)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 0x393CB531L)).yyyxyyxyxyxxyyyy)), ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(0x489C94C3L, 0x2FA22934L)).xxyxyxyx, (int32_t)(safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u(p_1208->g_723.f0, (GROUP_DIVERGE(1, 1) | ((&l_968 == ((safe_mul_func_int16_t_s_s((p_15 = ((((0x02L | ((void*)0 != l_1016)) == 0x1C61L) , (&p_1208->g_411[3] == l_1017)) >= l_927)), p_1208->g_190[0])) , &l_952)) , 0x9051L)))) , p_15), 10))))).s0341142522566202))))).s6;
        for (p_14 = (-23); (p_14 <= 38); p_14++)
        { /* block id: 433 */
            int32_t *l_1020[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            int8_t *l_1042 = &p_1208->g_341[0];
            uint32_t *l_1043[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            VECTOR(uint16_t, 16) l_1052 = (VECTOR(uint16_t, 16))(0x7D60L, (VECTOR(uint16_t, 4))(0x7D60L, (VECTOR(uint16_t, 2))(0x7D60L, 0x3215L), 0x3215L), 0x3215L, 0x7D60L, 0x3215L, (VECTOR(uint16_t, 2))(0x7D60L, 0x3215L), (VECTOR(uint16_t, 2))(0x7D60L, 0x3215L), 0x7D60L, 0x3215L, 0x7D60L, 0x3215L);
            VECTOR(uint16_t, 4) l_1053 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL);
            VECTOR(int16_t, 2) l_1054 = (VECTOR(int16_t, 2))(0x3E50L, 0x1082L);
            VECTOR(int16_t, 8) l_1057 = (VECTOR(int16_t, 8))(0x25B2L, (VECTOR(int16_t, 4))(0x25B2L, (VECTOR(int16_t, 2))(0x25B2L, 0x68EAL), 0x68EAL), 0x68EAL, 0x25B2L, 0x68EAL);
            uint8_t *l_1065 = (void*)0;
            uint8_t *l_1066 = (void*)0;
            uint8_t *l_1067[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            int i, j;
            l_1009.se = ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(0x614AF8E3L, 2L)).xyxyyyxxxyyyyyxy))).s8;
            if ((l_903.z ^= l_1009.s2))
            { /* block id: 436 */
                volatile int32_t * volatile *l_1021 = &p_1208->g_669;
                (*l_1021) = ((1L || p_15) , (*p_1208->g_668));
                l_903.w = l_897;
                (*p_1208->g_708) = (void*)0;
            }
            else
            { /* block id: 440 */
                uint32_t l_1027 = 4294967289UL;
                for (p_1208->g_507.f1 = 0; (p_1208->g_507.f1 != (-8)); p_1208->g_507.f1--)
                { /* block id: 443 */
                    for (p_1208->g_97 = 0; (p_1208->g_97 > 46); ++p_1208->g_97)
                    { /* block id: 446 */
                        int32_t *l_1026[4] = {&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0]};
                        int i;
                        (*p_1208->g_718) = l_1026[1];
                        if (p_14)
                            break;
                        (*p_1208->g_1028) = ((*p_1208->g_708) = (l_1027 , l_1020[0][0]));
                    }
                }
            }
            l_1045[4][7][1] ^= (l_1009.sc = ((0x4D920D4FL != (+(p_15 == (safe_mul_func_uint16_t_u_u(((((((func_37((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(l_1033.s25)).odd, (l_1044 &= ((l_952 |= (safe_sub_func_uint32_t_u_u((l_1009.sc , ((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 8))(l_1036.yyyyyxxy)), ((VECTOR(uint32_t, 2))(0x4E13332AL, 0xBA0D1249L)).xyyyyyxy, ((VECTOR(uint32_t, 8))(l_1037, ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 2))(1UL, 0UL))))), 0x9808A7DDL, ((VECTOR(uint32_t, 4))((safe_div_func_int64_t_s_s((((l_963 <= (safe_sub_func_int32_t_s_s(0x502EC5AAL, ((void*)0 == (*p_1208->g_218))))) , l_1042) != l_1017), 18446744073709551615UL)), 0x7A7F2ACCL, 0x7BCC4CB9L, 4294967295UL))))))).s60, ((VECTOR(uint32_t, 2))(0x417D224DL))))).lo), p_15))) || p_15)))), p_1208->g_884.y, p_1208->g_341[0], p_15, p_1208) , FAKE_DIVERGE(p_1208->local_0_offset, get_local_id(0), 10)) & p_15) , l_905) == l_1033.s7) , p_14) || l_910.s5), 0x149AL))))) <= p_1208->g_190[1]));
            l_903.z ^= (p_1208->g_402[2] != (((l_1045[3][7][2] = (safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 8))(l_1052.s7e49a785)).hi, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_1053.wzyxxxyw)))).s36)).xxyx))).z, ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(l_1054.yyxx)).odd, ((VECTOR(int16_t, 8))(p_1208->g_1055.wyxxwwzz)).s43, ((VECTOR(int16_t, 2))(p_1208->g_1056.xx))))), 0x7AB3L, 0x0EE6L)).odd)), 0x0CB9L, 0x10B9L)).xyxyxxwx)).s62)).xyyx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x6E58L, (-6L))), 1L, 0x70B8L)).zxzwyzyxyzzyzxwx, ((VECTOR(int16_t, 2))(0x1163L, 0x34F6L)).xyyxxyxyxxyyxyxx, ((VECTOR(int16_t, 8))(l_1057.s61563124)).s5614555775720057))).s20)).yxyx, ((VECTOR(int16_t, 2))(p_1208->g_1058.yw)).yyxx)))))).w)), (l_1059 ^= l_1044)))) ^ l_1060) > (((*p_1208->g_160) , p_1208->g_681.x) <= ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 4))(l_1061.s5426)).zzxywzyxxzwywwwz, (int64_t)(safe_add_func_uint8_t_u_u((l_909.s2 = ((VECTOR(uint8_t, 16))(l_1064.s44659c8bd4bb6604)).s3), p_1208->g_906.s1))))).se301, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_1068.s26741421)).s6754724613000434)).se6f9))))).x)));
        }
    }
    return l_874;
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_162 p_1208->g_187 p_1208->g_237 p_1208->g_341 p_1208->g_11 p_1208->g_172 p_1208->g_417 p_1208->g_5 p_1208->g_190 p_1208->g_213 p_1208->g_367 p_1208->g_195 p_1208->g_242 p_1208->g_558 p_1208->g_560 p_1208->g_219 p_1208->g_220 p_1208->g_221 p_1208->g_129 p_1208->g_130 p_1208->g_578 p_1208->g_67 p_1208->g_512.f0 p_1208->g_603 p_1208->g_324.f0 p_1208->g_269 p_1208->l_comm_values p_1208->g_184.f0 p_1208->g_348 p_1208->g_218 p_1208->g_217 p_1208->g_144 p_1208->g_402 p_1208->g_273 p_1208->g_87 p_1208->g_411 p_1208->g_comm_values p_1208->g_413 p_1208->g_646 p_1208->g_10 p_1208->g_661 p_1208->g_668 p_1208->g_673 p_1208->g_680 p_1208->g_681 p_1208->g_689 p_1208->g_389
 * writes: p_1208->g_162 p_1208->g_97 p_1208->g_213 p_1208->g_411 p_1208->g_11 p_1208->g_297 p_1208->g_242 p_1208->g_10 p_1208->g_67 p_1208->g_603 p_1208->g_348 p_1208->g_402 p_1208->g_87 p_1208->g_comm_values p_1208->g_417 p_1208->g_661
 */
int32_t ** func_16(int32_t * p_17, int32_t ** p_18, int16_t  p_19, int32_t ** p_20, struct S2 * p_1208)
{ /* block id: 148 */
    union U0 *l_449 = (void*)0;
    int32_t l_459[6];
    VECTOR(int8_t, 4) l_461 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L);
    VECTOR(uint64_t, 8) l_467 = (VECTOR(uint64_t, 8))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 9UL, 18446744073709551615UL);
    int64_t l_480 = 0x47352B2B6160E245L;
    VECTOR(uint32_t, 2) l_482 = (VECTOR(uint32_t, 2))(4294967294UL, 0xC2B9F0B2L);
    uint16_t l_491[2];
    int16_t l_515 = 0x020EL;
    uint16_t l_524 = 0xAFC9L;
    int32_t **l_529 = (void*)0;
    int8_t *l_530 = &p_1208->g_411[3];
    int8_t *l_532[1];
    int8_t **l_531 = &l_532[0];
    uint8_t l_533 = 0x82L;
    int16_t *l_534 = &l_515;
    int32_t *l_541 = &p_1208->g_213;
    uint16_t *l_542[6] = {(void*)0,&l_524,(void*)0,(void*)0,&l_524,(void*)0};
    uint64_t l_543 = 0xF7CCFD4DFFD823DCL;
    int8_t l_544 = 6L;
    uint64_t *l_545 = (void*)0;
    uint64_t *l_546 = &p_1208->g_297;
    int32_t l_547 = 1L;
    int32_t l_548[4][6] = {{0x001FFC9DL,1L,0x001FFC9DL,0x001FFC9DL,1L,0x001FFC9DL},{0x001FFC9DL,1L,0x001FFC9DL,0x001FFC9DL,1L,0x001FFC9DL},{0x001FFC9DL,1L,0x001FFC9DL,0x001FFC9DL,1L,0x001FFC9DL},{0x001FFC9DL,1L,0x001FFC9DL,0x001FFC9DL,1L,0x001FFC9DL}};
    VECTOR(uint8_t, 16) l_549 = (VECTOR(uint8_t, 16))(0x6DL, (VECTOR(uint8_t, 4))(0x6DL, (VECTOR(uint8_t, 2))(0x6DL, 0xB9L), 0xB9L), 0xB9L, 0x6DL, 0xB9L, (VECTOR(uint8_t, 2))(0x6DL, 0xB9L), (VECTOR(uint8_t, 2))(0x6DL, 0xB9L), 0x6DL, 0xB9L, 0x6DL, 0xB9L);
    VECTOR(uint16_t, 2) l_561 = (VECTOR(uint16_t, 2))(1UL, 3UL);
    int64_t l_611[6] = {0x656EF2CCF9573A0DL,1L,0x656EF2CCF9573A0DL,0x656EF2CCF9573A0DL,1L,0x656EF2CCF9573A0DL};
    uint32_t l_614 = 0xDBE6F878L;
    uint32_t l_631 = 6UL;
    VECTOR(int16_t, 4) l_679 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L);
    VECTOR(int32_t, 16) l_685 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
    VECTOR(int32_t, 2) l_686 = (VECTOR(int32_t, 2))(0x13E0EF73L, 0L);
    VECTOR(int32_t, 8) l_687 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-4L)), (-4L)), (-4L), 2L, (-4L));
    VECTOR(int64_t, 8) l_688 = (VECTOR(int64_t, 8))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, (-6L)), (-6L)), (-6L), 8L, (-6L));
    int8_t l_693 = 0x0CL;
    int32_t *l_696[2][3][6] = {{{&l_548[2][1],&l_548[2][1],&l_547,(void*)0,&p_1208->g_5,(void*)0},{&l_548[2][1],&l_548[2][1],&l_547,(void*)0,&p_1208->g_5,(void*)0},{&l_548[2][1],&l_548[2][1],&l_547,(void*)0,&p_1208->g_5,(void*)0}},{{&l_548[2][1],&l_548[2][1],&l_547,(void*)0,&p_1208->g_5,(void*)0},{&l_548[2][1],&l_548[2][1],&l_547,(void*)0,&p_1208->g_5,(void*)0},{&l_548[2][1],&l_548[2][1],&l_547,(void*)0,&p_1208->g_5,(void*)0}}};
    uint32_t l_697 = 0xF3DCF02BL;
    int32_t **l_698[2];
    int32_t **l_699 = &p_1208->g_417;
    int32_t **l_700[6] = {&p_1208->g_10[5][0],&p_1208->g_10[5][0],&p_1208->g_10[5][0],&p_1208->g_10[5][0],&p_1208->g_10[5][0],&p_1208->g_10[5][0]};
    int32_t **l_701[10];
    int32_t **l_702 = &p_1208->g_417;
    int32_t **l_703 = &l_696[0][1][5];
    int32_t **l_704 = &l_696[0][2][5];
    int32_t **l_705[6] = {&p_1208->g_417,(void*)0,&p_1208->g_417,&p_1208->g_417,(void*)0,&p_1208->g_417};
    int32_t **l_706 = &p_1208->g_417;
    int32_t **l_709 = &l_696[1][2][1];
    int32_t **l_710 = &l_696[0][1][3];
    int32_t **l_711 = &p_1208->g_417;
    int32_t **l_712[3][9] = {{&p_1208->g_10[5][0],&p_1208->g_10[5][0],&l_696[0][2][5],&l_696[0][1][3],(void*)0,(void*)0,&l_696[1][1][0],&l_696[1][1][0],&l_696[1][1][0]},{&p_1208->g_10[5][0],&p_1208->g_10[5][0],&l_696[0][2][5],&l_696[0][1][3],(void*)0,(void*)0,&l_696[1][1][0],&l_696[1][1][0],&l_696[1][1][0]},{&p_1208->g_10[5][0],&p_1208->g_10[5][0],&l_696[0][2][5],&l_696[0][1][3],(void*)0,(void*)0,&l_696[1][1][0],&l_696[1][1][0],&l_696[1][1][0]}};
    int32_t **l_713[6][2] = {{&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417}};
    int32_t **l_714 = &l_696[0][1][3];
    int32_t **l_715 = &l_696[0][1][3];
    int32_t **l_716[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int32_t **l_717 = &l_696[0][1][3];
    int32_t **l_719 = &p_1208->g_417;
    int32_t **l_720 = (void*)0;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_459[i] = 0L;
    for (i = 0; i < 2; i++)
        l_491[i] = 65535UL;
    for (i = 0; i < 1; i++)
        l_532[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_698[i] = &p_1208->g_417;
    for (i = 0; i < 10; i++)
        l_701[i] = &p_1208->g_10[5][0];
    for (p_1208->g_162 = 11; (p_1208->g_162 != 9); --p_1208->g_162)
    { /* block id: 151 */
        union U0 *l_447 = &p_1208->g_172;
        VECTOR(int8_t, 2) l_460 = (VECTOR(int8_t, 2))((-6L), 0x5DL);
        int32_t *l_472 = (void*)0;
        int32_t l_474 = (-3L);
        VECTOR(uint16_t, 16) l_484 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xD4D6L), 0xD4D6L), 0xD4D6L, 0UL, 0xD4D6L, (VECTOR(uint16_t, 2))(0UL, 0xD4D6L), (VECTOR(uint16_t, 2))(0UL, 0xD4D6L), 0UL, 0xD4D6L, 0UL, 0xD4D6L);
        VECTOR(uint64_t, 16) l_488 = (VECTOR(uint64_t, 16))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0x49D494F4866323FCL), 0x49D494F4866323FCL), 0x49D494F4866323FCL, 18446744073709551606UL, 0x49D494F4866323FCL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0x49D494F4866323FCL), (VECTOR(uint64_t, 2))(18446744073709551606UL, 0x49D494F4866323FCL), 18446744073709551606UL, 0x49D494F4866323FCL, 18446744073709551606UL, 0x49D494F4866323FCL);
        union U1 *l_508 = (void*)0;
        int32_t l_520 = 0x7D94E81FL;
        int32_t l_523 = (-9L);
        int i;
        for (p_1208->g_97 = 0; (p_1208->g_97 > 25); p_1208->g_97 = safe_add_func_uint64_t_u_u(p_1208->g_97, 5))
        { /* block id: 154 */
            uint32_t l_456 = 6UL;
            union U0 *l_468 = &p_1208->g_172;
            int8_t *l_473[2];
            int32_t *l_475[3][8][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
            int32_t l_477 = 0x3DA6972CL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_473[i] = &p_1208->g_341[0];
            for (p_1208->g_213 = (-21); (p_1208->g_213 == (-1)); p_1208->g_213 = safe_add_func_uint64_t_u_u(p_1208->g_213, 7))
            { /* block id: 157 */
                union U0 **l_448 = &l_447;
                l_449 = ((*l_448) = l_447);
            }
            (*p_17) = ((l_477 = (safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((l_456 | p_19), ((safe_sub_func_int16_t_s_s(l_459[3], (!((p_1208->g_187 <= (0UL || ((VECTOR(int8_t, 2))(l_460.yx)).hi)) >= (((VECTOR(int8_t, 4))(l_461.wwyx)).z > (l_474 = (p_1208->g_411[0] = (safe_mod_func_int64_t_s_s((safe_div_func_int16_t_s_s((((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(p_1208->g_466.zzyzyzywzzzzyyxw)).hi)).s2 , ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_467.s3007)).zzzxzywy)).s5) , &p_1208->g_172) != (l_468 = &p_1208->g_172)), (((safe_rshift_func_int8_t_s_u(p_19, 4)) >= ((+(((VECTOR(int64_t, 8))(p_1208->g_471.wzwxxwzz)).s6 >= (((p_1208->g_237.x , &p_1208->g_190[1]) == l_472) , p_19))) ^ p_1208->g_341[0])) ^ l_456))), p_19))))))))) , 252UL))), GROUP_DIVERGE(0, 1))), 0x5E50L))) , (*p_17));
        }
    }
    l_548[3][5] = ((*p_17) = ((l_530 == ((*l_531) = &p_1208->g_341[0])) > ((((l_547 = ((VECTOR(uint16_t, 4))(l_533, ((p_1208->g_172 , (-1L)) < ((((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((((*l_546) = (((*p_1208->g_417) ^ ((p_1208->g_190[0] >= ((((*l_534) = (-1L)) > ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 2))(0x4D00L, 0x5C81L)).xxyyxxyyyyxxyyxy, ((VECTOR(uint16_t, 16))(((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((l_459[3] = ((safe_div_func_int64_t_s_s(((((*l_541) &= (-10L)) , p_19) != 0x0CC7L), l_459[4])) , 1UL)) != p_19), p_19)), p_1208->g_341[0])) | l_543), p_19, 7UL, 65531UL, 0UL, p_19, p_19, 0x9FBAL, ((VECTOR(uint16_t, 4))(65535UL)), l_544, ((VECTOR(uint16_t, 2))(65532UL)), 0UL))))), ((VECTOR(uint16_t, 16))(0x0406L))))).lo)).s0) ^ (*p_1208->g_417))) == p_1208->g_367.s5)) , p_1208->g_187)) ^ FAKE_DIVERGE(p_1208->local_2_offset, get_local_id(2), 10)), 7L, 1L, (**p_20), 0x3C505993L, ((VECTOR(int32_t, 4))(0x78645B00L)), ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 2))(0x4F97AD59L)), 4L)))), ((VECTOR(int32_t, 16))((-9L)))))).s17)).yxxyxxyxxyxxxxxy, ((VECTOR(int32_t, 16))(0x27D3A50CL)), ((VECTOR(int32_t, 16))((-1L)))))).se , GROUP_DIVERGE(2, 1)) && l_543)), 0x0AFDL, 0x7BCFL)).y) && 0x27B6L) == 1L) < 65535UL)));
    if ((p_19 , 8L))
    { /* block id: 197 */
        int8_t l_559 = (-2L);
        VECTOR(int32_t, 2) l_564 = (VECTOR(int32_t, 2))(1L, 1L);
        int32_t *l_565[7] = {&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547};
        int16_t *l_574 = (void*)0;
        uint8_t *l_577 = &l_533;
        uint8_t *l_583 = (void*)0;
        uint8_t *l_584 = (void*)0;
        uint8_t *l_585 = (void*)0;
        uint8_t *l_586 = (void*)0;
        uint8_t *l_587[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int16_t l_590 = (-6L);
        int32_t *l_602 = (void*)0;
        int i;
        (*p_18) = (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(0x5AL, 0UL, 0xF8L, 248UL, ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_549.sf0c9a039)).s50)), 0xEAL, 8UL)).lo, (uint8_t)(((safe_rshift_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s(p_1208->g_195.y, ((safe_add_func_int32_t_s_s(((p_1208->g_242.y &= p_19) & (**p_20)), p_19)) , p_19))) ^ (p_19 < (l_564.y = ((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 4))(p_1208->g_558.yyyy)).ywxzyzzw, ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0xBE1CL, 0xF9DFL)), p_19, 0x92F2L, ((VECTOR(uint16_t, 4))((l_559 = p_19), 7UL, 1UL, 65530UL)))).hi, ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(p_1208->g_560.s642e3398ccdbf019)).scc47)), ((VECTOR(uint16_t, 2))(0UL, 65535UL)).xyxx)))))).wzyxxyzw, ((VECTOR(uint16_t, 16))(l_561.yyxxyyyxyxyxxyyy)).hi))).s3, ((*l_534) = (safe_mod_func_int32_t_s_s((p_19 && l_564.y), 0x33024F3FL))))) == p_19)))) > GROUP_DIVERGE(0, 1)), 7)) , p_17) != (void*)0)))), 1UL, 0xB6L)).odd)).z , l_565[2]);
        (*p_17) &= (0x16L >= (p_19 == ((void*)0 == &p_1208->g_416[6][5])));
        atomic_max(&p_1208->g_atomic_reduction[get_linear_group_id()], (safe_div_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_u((((((VECTOR(uint8_t, 16))((**p_1208->g_219), p_19, (safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((+((*l_546) = (((void*)0 == l_574) , (((safe_rshift_func_uint8_t_u_u(((*l_577) &= (0x5400L && 65535UL)), ((((*p_1208->g_129) , ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(p_1208->g_578.xxyxxxyx)))).s17)).xxxxyyxx, ((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((safe_sub_func_uint32_t_u_u((!0xBE628041L), (safe_sub_func_int32_t_s_s((((p_1208->g_67.sa++) && (l_583 == (void*)0)) , (*p_17)), p_1208->g_512.f0)))) == 4294967293UL), ((VECTOR(uint8_t, 2))(0UL)), 0x21L, ((VECTOR(uint8_t, 8))(0xBDL)), GROUP_DIVERGE(0, 1), (**p_1208->g_219), 0x44L, 1UL)).s7e)).yyyy, ((VECTOR(uint8_t, 4))(0xD1L))))).xxwxwwzyzzzyyyyz, ((VECTOR(uint8_t, 16))(255UL))))).hi))))).s2521461672051046)).sa) < l_459[3]) <= (**p_20)))) > p_19) < GROUP_DIVERGE(2, 1))))), 0x2D452B42CA172E9FL)), (**p_20))), ((VECTOR(uint8_t, 2))(0xDFL)), ((VECTOR(uint8_t, 4))(255UL)), 9UL, 255UL, p_19, ((VECTOR(uint8_t, 4))(0x62L)))).s2 , (*p_1208->g_129)) , l_533) < 0x5EFFL), 5)) == p_1208->g_367.s0) > 0UL), p_19)) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1208->v_collective += p_1208->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (((*p_17) = (l_590 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x7EB6EB37L, 0x7439CDCCL)), 0L, 0L)).z)))
        { /* block id: 210 */
            int32_t l_595 = 0x2E46449CL;
            int16_t l_596 = (-5L);
            int32_t l_608 = 0x7A50E4B9L;
            int32_t l_609 = 0x3D4A4083L;
            int32_t l_612 = 0x498F4D24L;
            int32_t l_613 = 0x6040FA06L;
            uint32_t l_621 = 0x1D76990AL;
            int32_t l_640[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
            VECTOR(int32_t, 8) l_652 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-10L)), (-10L)), (-10L), (-1L), (-10L));
            int32_t l_654 = 0x2D96203BL;
            int i;
            if (((safe_mod_func_uint8_t_u_u(p_19, (p_19 & (*p_1208->g_129)))) , (safe_add_func_uint16_t_u_u(p_19, l_595))))
            { /* block id: 211 */
                uint16_t l_597 = 1UL;
                int32_t l_610[8][7][4] = {{{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L}},{{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L}},{{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L}},{{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L}},{{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L}},{{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L}},{{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L}},{{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L},{0x0E58193AL,0x62B7238EL,0x4AEF8A81L,0L}}};
                int32_t l_630 = 0x3494832DL;
                int64_t *l_632 = &l_611[5];
                int64_t *l_633 = (void*)0;
                int64_t *l_634 = (void*)0;
                int64_t *l_635 = &p_1208->g_162;
                int32_t l_636 = (-1L);
                uint8_t l_643 = 1UL;
                uint16_t l_655 = 1UL;
                int i, j, k;
                l_597--;
                for (p_1208->g_213 = (-2); (p_1208->g_213 != (-3)); --p_1208->g_213)
                { /* block id: 215 */
                    volatile uint64_t ** volatile *l_606 = &p_1208->g_603[1][1];
                    int32_t *l_607 = (void*)0;
                    (*p_18) = l_602;
                    (*l_606) = p_1208->g_603[2][8];
                    l_607 = l_565[2];
                }
                l_614--;
                if ((((l_595 ^ p_19) ^ (p_19 , (p_1208->g_comm_values[p_1208->tid] = (l_636 = ((*l_635) = ((*l_632) = (((**p_20) != (safe_add_func_uint64_t_u_u((l_621 == (((0x444B7D2EL <= p_1208->g_324.f0) , (1UL | ((safe_mod_func_uint8_t_u_u((l_610[7][4][3] &= (safe_lshift_func_uint8_t_u_s(((safe_div_func_uint8_t_u_u(((func_37(l_596, p_19, l_608, l_630, p_1208) , p_19) <= l_613), p_19)) < p_19), 5))), p_19)) > 0x0994L))) && l_631)), FAKE_DIVERGE(p_1208->global_2_offset, get_global_id(2), 10)))) > 4294967294UL))))))) , 0x3CBEDB30L))
                { /* block id: 226 */
                    int64_t l_637[7][10][3] = {{{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L}},{{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L}},{{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L}},{{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L}},{{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L}},{{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L}},{{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L},{(-2L),(-7L),1L}}};
                    int32_t l_638 = 0x3FCC3B68L;
                    int32_t l_639 = 0x3A4AF9C5L;
                    int32_t l_641 = 0x19235F65L;
                    int32_t l_642[3][5][6] = {{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}}};
                    int i, j, k;
                    --l_643;
                }
                else
                { /* block id: 228 */
                    VECTOR(int32_t, 4) l_651 = (VECTOR(int32_t, 4))(0x03F989BCL, (VECTOR(int32_t, 2))(0x03F989BCL, 0x30921549L), 0x30921549L);
                    int i;
                    l_548[3][5] ^= (GROUP_DIVERGE(1, 1) , ((((((VECTOR(uint32_t, 16))(p_1208->g_646.s3323762634041563)).sb | (safe_mul_func_uint8_t_u_u((++(*l_577)), FAKE_DIVERGE(p_1208->group_1_offset, get_group_id(1), 10)))) >= ((*l_530) |= p_1208->g_578.x)) | ((-8L) || (p_19 < 0x48A5L))) ^ (-1L)));
                    l_640[6] = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(l_651.xxwx)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_652.s23014052)).s4625015223170467)).s7a6b))))).lo)).even;
                    if (l_651.z)
                    { /* block id: 233 */
                        (*p_20) = (*p_18);
                    }
                    else
                    { /* block id: 235 */
                        int32_t l_653[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_653[i] = 0x7A85ECC0L;
                        --l_655;
                    }
                }
            }
            else
            { /* block id: 239 */
                VECTOR(int8_t, 4) l_658 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L);
                int32_t l_659 = 0L;
                int32_t l_660[4] = {0x5B2BAAABL,0x5B2BAAABL,0x5B2BAAABL,0x5B2BAAABL};
                union U1 *l_667 = &p_1208->g_184;
                union U1 **l_666 = &l_667;
                int i;
                ++p_1208->g_661;
                (*p_17) &= ((0x14L < (safe_add_func_uint64_t_u_u(p_19, (l_666 == &p_1208->g_217)))) | (p_1208->g_668 == (void*)0));
                (*p_18) = l_602;
            }
        }
        else
        { /* block id: 244 */
            uint8_t l_670 = 8UL;
            int32_t l_676 = 0x04AEAE88L;
            int32_t ***l_682[3][8] = {{(void*)0,&p_1208->g_416[3][5],&p_1208->g_416[3][5],(void*)0,(void*)0,&p_1208->g_416[3][5],&p_1208->g_416[3][5],(void*)0},{(void*)0,&p_1208->g_416[3][5],&p_1208->g_416[3][5],(void*)0,(void*)0,&p_1208->g_416[3][5],&p_1208->g_416[3][5],(void*)0},{(void*)0,&p_1208->g_416[3][5],&p_1208->g_416[3][5],(void*)0,(void*)0,&p_1208->g_416[3][5],&p_1208->g_416[3][5],(void*)0}};
            int32_t ***l_684 = &l_529;
            int32_t ****l_683 = &l_684;
            int i, j;
            l_670--;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1208->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 164)), permutations[(safe_mod_func_uint32_t_u_u(((*p_1208->g_417) > (p_1208->g_673 , (p_19 | ((((safe_rshift_func_int16_t_s_s(((l_676 = 0x4A63L) ^ (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 4))(l_679.xzxw)).yzyzxxzwwxwwwxyw, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_1208->g_680.s4146)).odd)))).yyxyxxxy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x5AEEL, (-1L))).xyyyxxxyyxxxyxyx)).lo))).s2625564055532454)), ((VECTOR(int16_t, 8))(p_1208->g_681.xyyyyxxx)).s7007367210351047))).sd, (l_682[2][6] == ((*l_683) = &p_1208->g_416[3][5]))))), 15)) >= (((((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_685.sd26e0501b24179cf)).s0d)).yyxyxyyx, ((VECTOR(int32_t, 2))(l_686.xy)).xyxxxxxx, ((VECTOR(int32_t, 2))(l_687.s10)).yxyyyyyx))).s1 <= (((VECTOR(int64_t, 16))(l_688.s4560717520122461)).sd < ((((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1208->g_689.zywx)).yzzwzwxxzwzzxyyz)).se2)).yyyyyyxxyyyxxyxy)).sc , func_56((((((*l_534) = (p_19 < (p_1208->g_661 , (p_1208->g_560.s7 != 0x16298466093A1C2DL)))) & GROUP_DIVERGE(2, 1)) , p_1208->g_689.x) , (*p_18)), p_1208->g_389.sf, p_19, p_1208)) != &p_1208->g_10[4][2]) >= p_19) , p_19))) ^ 1UL) && p_19)) ^ 0x090AEDBCC5178AFEL) >= 0x1EF6L)))), 10))][(safe_mod_func_uint32_t_u_u(p_1208->tid, 164))]));
            (*p_17) ^= 0L;
            (*p_17) = ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(18446744073709551615UL, 0x6C50E36A8DC6A767L, 18446744073709551610UL, 3UL)).hi)).hi, p_1208->g_689.y)) , 0x4ED40A41L);
        }
    }
    else
    { /* block id: 255 */
        int32_t *l_692 = (void*)0;
        (*p_18) = l_692;
    }
    l_697 |= ((*p_17) = l_693);
    return l_720;
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_129 p_1208->g_130 p_1208->g_11
 * writes: p_1208->g_11
 */
int32_t ** func_23(uint16_t  p_24, int8_t  p_25, uint64_t  p_26, int8_t  p_27, struct S2 * p_1208)
{ /* block id: 145 */
    int32_t *l_438 = &p_1208->g_11[7];
    int32_t **l_439 = &l_438;
    int32_t **l_440 = &p_1208->g_417;
    (*l_438) |= (safe_mod_func_uint64_t_u_u((*p_1208->g_129), FAKE_DIVERGE(p_1208->local_0_offset, get_local_id(0), 10)));
    return l_440;
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_411 p_1208->g_417 p_1208->g_5 p_1208->g_430
 * writes: p_1208->g_411 p_1208->g_269
 */
int16_t  func_32(int32_t ** p_33, int32_t ** p_34, int32_t ** p_35, int32_t ** p_36, struct S2 * p_1208)
{ /* block id: 139 */
    VECTOR(int64_t, 4) l_418 = (VECTOR(int64_t, 4))(0x67E7354A582B0DEAL, (VECTOR(int64_t, 2))(0x67E7354A582B0DEAL, (-1L)), (-1L));
    VECTOR(int64_t, 2) l_419 = (VECTOR(int64_t, 2))(0x17DDC2AC789325FFL, 0x0DD997315796FC19L);
    VECTOR(int64_t, 4) l_420 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x4174661CDA2966DCL), 0x4174661CDA2966DCL);
    int8_t *l_423 = &p_1208->g_411[2];
    int32_t *l_428 = (void*)0;
    int32_t l_429 = 1L;
    uint16_t *l_433 = (void*)0;
    uint16_t **l_434 = &p_1208->g_269[2][0];
    int32_t l_435 = (-4L);
    int i;
    l_435 = (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 4))(0L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_418.wzzzwyww)).s13)), (-6L))), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(0x01F721F02EA2263BL, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_419.xx)), (-2L), 0x047183BBF517D3B1L)).even)).xyyxyxxx, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_420.wywywxxzzwyyzwyy)).seade)).xzzyyywx))).even, ((VECTOR(int64_t, 4))(6L, 0L, (-3L), 0x3836D6917B319BF8L))))).zyyxwyxw)), 0x2A5E8267D7C47E29L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x76D11A5F53BD4E21L, 6L)), 0x57A0EF8EEAB735DBL, 0x70C6B29A57F10DDAL)), (-6L), 0x1B85E26AE9B6DB01L)).s17ce)), ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 4))(8L, 1L, 0x498D9228FCCAE577L, 0L)).zyywzyyyzzzzwwyy, (int64_t)((VECTOR(int64_t, 4))(l_419.x, (((*l_423) &= (safe_add_func_uint16_t_u_u(65535UL, 5UL))) , (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(l_419.x, l_419.y)), (((*p_1208->g_417) | (l_429 = l_420.w)) <= (p_1208->g_430 , (safe_add_func_uint8_t_u_u((((*l_434) = l_433) != &p_1208->g_97), l_420.y))))))), 0x79C0AE2BF1E73CE4L, 0L)).w))).sb2, ((VECTOR(int64_t, 2))(6L))))).xyxy))).odd))))), 3L, l_420.y, 0x4C4E3260AE924FB4L, 9L, 0x05CB5A47F1C2CC19L, (-8L))).s25)), 1L, 0x4712E1480AFC9533L)).y ^ 0x0F2D0AB2C6D27BCEL);
    return l_420.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_269 p_1208->g_129 p_1208->g_130 p_1208->g_242 p_1208->g_162 p_1208->l_comm_values p_1208->g_184.f0 p_1208->g_237 p_1208->g_87 p_1208->g_324 p_1208->g_219 p_1208->g_220 p_1208->g_221 p_1208->g_341 p_1208->g_5 p_1208->g_348 p_1208->g_297 p_1208->g_218 p_1208->g_217 p_1208->g_144 p_1208->g_367 p_1208->g_67 p_1208->g_172 p_1208->g_389 p_1208->g_402 p_1208->g_273 p_1208->g_11 p_1208->g_411 p_1208->g_comm_values p_1208->g_190 p_1208->g_413
 * writes: p_1208->g_162 p_1208->g_87 p_1208->g_273 p_1208->g_348 p_1208->g_297 p_1208->g_402 p_1208->g_411
 */
union U1  func_37(uint16_t  p_38, int8_t  p_39, int64_t  p_40, uint32_t  p_41, struct S2 * p_1208)
{ /* block id: 101 */
    uint8_t ***l_279[3];
    VECTOR(uint8_t, 16) l_280 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x0EL), 0x0EL), 0x0EL, 1UL, 0x0EL, (VECTOR(uint8_t, 2))(1UL, 0x0EL), (VECTOR(uint8_t, 2))(1UL, 0x0EL), 1UL, 0x0EL, 1UL, 0x0EL);
    uint64_t *l_296 = &p_1208->g_297;
    int32_t l_304[8];
    VECTOR(int16_t, 2) l_306 = (VECTOR(int16_t, 2))((-7L), 0x138CL);
    VECTOR(uint16_t, 8) l_307 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xCFE0L), 0xCFE0L), 0xCFE0L, 0UL, 0xCFE0L);
    uint8_t l_357 = 0xE0L;
    VECTOR(uint32_t, 16) l_358 = (VECTOR(uint32_t, 16))(0x0928ED1CL, (VECTOR(uint32_t, 4))(0x0928ED1CL, (VECTOR(uint32_t, 2))(0x0928ED1CL, 0x5D6650FAL), 0x5D6650FAL), 0x5D6650FAL, 0x0928ED1CL, 0x5D6650FAL, (VECTOR(uint32_t, 2))(0x0928ED1CL, 0x5D6650FAL), (VECTOR(uint32_t, 2))(0x0928ED1CL, 0x5D6650FAL), 0x0928ED1CL, 0x5D6650FAL, 0x0928ED1CL, 0x5D6650FAL);
    int32_t **l_359 = (void*)0;
    uint16_t l_370 = 0x43B2L;
    uint16_t l_382 = 0x3C2FL;
    VECTOR(int16_t, 8) l_386 = (VECTOR(int16_t, 8))(0x4E66L, (VECTOR(int16_t, 4))(0x4E66L, (VECTOR(int16_t, 2))(0x4E66L, (-1L)), (-1L)), (-1L), 0x4E66L, (-1L));
    VECTOR(int16_t, 16) l_388 = (VECTOR(int16_t, 16))(0x40BDL, (VECTOR(int16_t, 4))(0x40BDL, (VECTOR(int16_t, 2))(0x40BDL, (-1L)), (-1L)), (-1L), 0x40BDL, (-1L), (VECTOR(int16_t, 2))(0x40BDL, (-1L)), (VECTOR(int16_t, 2))(0x40BDL, (-1L)), 0x40BDL, (-1L), 0x40BDL, (-1L));
    VECTOR(int16_t, 2) l_391 = (VECTOR(int16_t, 2))((-8L), 0x0167L);
    int32_t l_412 = 0x72314057L;
    int i;
    for (i = 0; i < 3; i++)
        l_279[i] = &p_1208->g_264;
    for (i = 0; i < 8; i++)
        l_304[i] = 0x7A2BEF01L;
    if ((((void*)0 != l_279[1]) || ((VECTOR(uint8_t, 2))(l_280.s0b)).hi))
    { /* block id: 102 */
        int64_t *l_287 = (void*)0;
        int64_t *l_288 = &p_1208->g_162;
        int32_t l_289 = 5L;
        int32_t *l_290 = (void*)0;
        int32_t *l_291 = &l_289;
        uint32_t *l_303 = (void*)0;
        uint32_t **l_302 = &l_303;
        int32_t l_305 = (-6L);
        int8_t *l_331 = &p_1208->g_273;
        int8_t *l_340[7] = {&p_1208->g_341[0],&p_1208->g_341[0],&p_1208->g_341[0],&p_1208->g_341[0],&p_1208->g_341[0],&p_1208->g_341[0],&p_1208->g_341[0]};
        int32_t l_342 = (-1L);
        int i;
        atomic_min(&p_1208->g_atomic_reduction[get_linear_group_id()], (safe_mod_func_int16_t_s_s((((0x396FL <= ((((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(0x25B0L, ((VECTOR(uint16_t, 2))(0x1A75L, 0xC9ACL)), ((VECTOR(uint16_t, 2))(3UL, 65535UL)), 0xE1C0L, 0x14A0L, 1UL, 0UL, 0xF195L, ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))((((*l_288) |= (((void*)0 == p_1208->g_269[1][2]) ^ (((-1L) || ((VECTOR(uint16_t, 4))(((safe_rshift_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(0UL, (*p_1208->g_129))) & 0x1643CD704922381BL), 1)) | p_1208->g_242.x), ((VECTOR(uint16_t, 2))(0x5E72L)), 1UL)).z) & l_280.s6))) , l_289), 9L, 0x6A25L, (-1L))))).xzwxwwxxwyyxyxzy, ((VECTOR(int16_t, 16))(0x463AL))))).s2b)).xyxy))), ((VECTOR(uint16_t, 2))(0x1486L)), 65527UL, 1UL)), ((VECTOR(uint16_t, 8))(65535UL))))).hi, ((VECTOR(uint16_t, 4))(65534UL))))), 0x9076L, 0x888AL)).se09a, ((VECTOR(uint16_t, 4))(65534UL))))).y , 0xFEL) | p_1208->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1208->tid, 164))])) , p_41) , p_1208->g_184.f0), l_289)) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1208->v_collective += p_1208->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        l_306.y = (((p_41 == ((*l_291) = 0x1A9F81F4L)) , ((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(p_39, (!((l_304[3] = (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((&p_1208->g_130 != l_296), ((+(-1L)) ^ (p_39 || (safe_div_func_int16_t_s_s((p_1208->g_87.y |= (safe_mod_func_int8_t_s_s(((((*l_302) = &p_41) == &p_41) , p_1208->g_237.y), p_41))), 1L)))))), 0x2EL))) , 255UL)), 7UL, ((VECTOR(uint8_t, 4))(0x47L)), 1UL)).lo)).wxxzyyxzxyyxzxyz, ((VECTOR(uint8_t, 16))(0x49L))))).sc) ^ l_305);
        l_342 = (((((VECTOR(uint16_t, 4))(l_307.s2755)).z == ((VECTOR(uint16_t, 4))((*l_291), (safe_div_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((((safe_mod_func_int32_t_s_s(9L, ((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((p_1208->g_324 , (safe_mod_func_int16_t_s_s((p_1208->g_87.x = (safe_add_func_uint8_t_u_u((**p_1208->g_219), ((-1L) < 0x06L)))), ((safe_rshift_func_int8_t_s_u(((*l_331) = l_307.s2), ((safe_mod_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((0x0CL | (l_304[3] = p_1208->g_242.y)), p_40)) < l_280.s8), p_39)), (*l_291))), p_1208->g_341[0])) & p_41))) , (*l_291))))), p_39)), (*l_291))), (-7L))) , p_39))) | 0x39EE0C3FL) , 0x0501L), GROUP_DIVERGE(1, 1))), p_1208->g_5)), (*l_291))) & 0x0EL), 1L)), 3UL, 0x1A79L)).z) < (*l_291)) != p_41);
    }
    else
    { /* block id: 114 */
        int32_t *l_343 = &l_304[3];
        int32_t *l_344 = &l_304[3];
        int32_t *l_345 = &l_304[3];
        int32_t *l_346 = &l_304[3];
        int32_t *l_347[1][3];
        VECTOR(int16_t, 8) l_380 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x1346L), 0x1346L), 0x1346L, 1L, 0x1346L);
        VECTOR(uint8_t, 16) l_381 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x2BL), 0x2BL), 0x2BL, 0UL, 0x2BL, (VECTOR(uint8_t, 2))(0UL, 0x2BL), (VECTOR(uint8_t, 2))(0UL, 0x2BL), 0UL, 0x2BL, 0UL, 0x2BL);
        VECTOR(int16_t, 4) l_385 = (VECTOR(int16_t, 4))(0x684EL, (VECTOR(int16_t, 2))(0x684EL, 1L), 1L);
        VECTOR(int16_t, 8) l_387 = (VECTOR(int16_t, 8))(0x56E4L, (VECTOR(int16_t, 4))(0x56E4L, (VECTOR(int16_t, 2))(0x56E4L, 0x58C5L), 0x58C5L), 0x58C5L, 0x56E4L, 0x58C5L);
        VECTOR(int16_t, 2) l_390 = (VECTOR(int16_t, 2))(1L, (-4L));
        uint64_t *l_400 = (void*)0;
        uint64_t *l_401[6][6][1] = {{{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]}},{{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]}},{{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]}},{{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]}},{{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]}},{{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]},{&p_1208->g_402[4]}}};
        uint16_t *l_408 = (void*)0;
        uint16_t *l_409 = &l_370;
        int16_t *l_410[2][9];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_347[i][j] = &l_304[3];
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 9; j++)
                l_410[i][j] = (void*)0;
        }
        ++p_1208->g_348;
        for (p_1208->g_297 = (-12); (p_1208->g_297 > 54); p_1208->g_297 = safe_add_func_uint64_t_u_u(p_1208->g_297, 6))
        { /* block id: 118 */
            int32_t **l_360 = &l_343;
            (*l_345) = (-5L);
            (**l_360) = (safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((**p_1208->g_218) , l_357) ^ (((((((VECTOR(uint32_t, 8))(l_358.s8e425c83)).s4 < (((l_359 == l_360) <= (((safe_mul_func_int32_t_s_s((**l_360), ((((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(1UL, 65531UL)), 0)) , ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_1208->g_367.s61)).xxxxyyxxyxyyyxxy)).s6c)).lo) && (safe_sub_func_uint8_t_u_u(((-9L) > 0x3EFBL), 0x01L))) == p_40))) , l_370) != 0L)) >= (-1L))) >= p_1208->g_67.s7) && 0x5AED0928L) || FAKE_DIVERGE(p_1208->group_2_offset, get_group_id(2), 10)) , p_41)), p_41)), p_38));
        }
        if ((atomic_inc(&p_1208->g_atomic_input[85 * get_linear_group_id() + 80]) == 5))
        { /* block id: 123 */
            VECTOR(int32_t, 8) l_371 = (VECTOR(int32_t, 8))(0x465BAEC7L, (VECTOR(int32_t, 4))(0x465BAEC7L, (VECTOR(int32_t, 2))(0x465BAEC7L, 0L), 0L), 0L, 0x465BAEC7L, 0L);
            VECTOR(uint32_t, 2) l_372 = (VECTOR(uint32_t, 2))(0x02531C2AL, 5UL);
            int32_t *l_373 = (void*)0;
            int32_t *l_374[5];
            int32_t *l_375 = (void*)0;
            int32_t l_376 = 0x47CE6A8BL;
            int32_t l_377 = (-2L);
            int i;
            for (i = 0; i < 5; i++)
                l_374[i] = (void*)0;
            l_372.x = ((VECTOR(int32_t, 2))(l_371.s23)).hi;
            l_375 = (l_374[1] = l_373);
            l_377 ^= l_376;
            unsigned int result = 0;
            result += l_371.s7;
            result += l_371.s6;
            result += l_371.s5;
            result += l_371.s4;
            result += l_371.s3;
            result += l_371.s2;
            result += l_371.s1;
            result += l_371.s0;
            result += l_372.y;
            result += l_372.x;
            result += l_376;
            result += l_377;
            atomic_add(&p_1208->g_special_values[85 * get_linear_group_id() + 80], result);
        }
        else
        { /* block id: 128 */
            (1 + 1);
        }
        l_412 = ((((((safe_mod_func_int32_t_s_s((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_380.s61)), (-1L), (-7L))).hi)))).even , (-1L)), ((**p_1208->g_219) && ((VECTOR(uint8_t, 4))(l_381.sbf9f)).z))) && ((p_1208->g_411[3] |= (p_41 , (p_40 , (l_382 > (safe_rshift_func_uint16_t_u_s((p_1208->g_172 , p_39), (p_1208->g_87.z ^= (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_385.xz)), (-1L), (-1L), 1L, ((VECTOR(int16_t, 2))(l_386.s56)), 0L)), ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 16))(l_387.s7721762322246610)), ((VECTOR(int16_t, 16))(l_388.sf62966b29a4d8faa))))).even))), ((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(p_1208->g_389.s43)).xyyxyxyxxxyyxyyx, ((VECTOR(int16_t, 2))(l_390.yx)).yxxyyyxxyyyxyyxx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_391.xxxy)).yxyzxzwy)).odd)).xxywzywwywwzxwzz))).even))))).s1 & (+(safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((safe_unary_minus_func_int32_t_s(((*l_346) = (safe_lshift_func_uint16_t_u_s(((p_1208->g_402[3]++) , ((*l_409) |= (safe_div_func_uint8_t_u_u(((p_38 == ((safe_unary_minus_func_int32_t_s(((((p_1208->g_273 || 65532UL) && (-2L)) , p_39) , l_306.x))) | 0x357F5580L)) || p_1208->g_11[7]), (*l_343))))), 12))))))), 0x3C5DL)), p_41))))))))))) > 0x4AB8L)) | p_1208->g_comm_values[p_1208->tid]) ^ p_1208->g_190[0]) <= 0x16876F2417CC15C3L) | p_41);
    }
    return p_1208->g_413;
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_3 p_1208->g_67 p_1208->g_comm_values p_1208->l_comm_values p_1208->g_11 p_1208->g_97 p_1208->g_87 p_1208->g_129 p_1208->g_64 p_1208->g_130 p_1208->g_10 p_1208->g_162 p_1208->g_184 p_1208->g_187 p_1208->g_192 p_1208->g_195 p_1208->g_218 p_1208->g_219 p_1208->g_234 p_1208->g_236 p_1208->g_237 p_1208->g_242 p_1208->g_172.f0 p_1208->g_263
 * writes: p_1208->g_62 p_1208->g_64 p_1208->g_11 p_1208->g_10 p_1208->g_162 p_1208->g_187 p_1208->g_190 p_1208->g_67 p_1208->g_213 p_1208->g_217 p_1208->g_219 p_1208->g_242 p_1208->g_192 p_1208->g_269 p_1208->g_97 p_1208->g_273
 */
int64_t  func_44(int32_t * p_45, int32_t  p_46, uint64_t  p_47, struct S2 * p_1208)
{ /* block id: 10 */
    VECTOR(int32_t, 16) l_48 = (VECTOR(int32_t, 16))(0x37B7A4FDL, (VECTOR(int32_t, 4))(0x37B7A4FDL, (VECTOR(int32_t, 2))(0x37B7A4FDL, (-1L)), (-1L)), (-1L), 0x37B7A4FDL, (-1L), (VECTOR(int32_t, 2))(0x37B7A4FDL, (-1L)), (VECTOR(int32_t, 2))(0x37B7A4FDL, (-1L)), 0x37B7A4FDL, (-1L), 0x37B7A4FDL, (-1L));
    int32_t *l_60 = (void*)0;
    uint32_t *l_61 = &p_1208->g_62;
    uint32_t *l_63 = &p_1208->g_64;
    uint64_t *l_128[4];
    uint32_t l_175 = 0xA4C83CD3L;
    int16_t *l_191[2];
    VECTOR(uint16_t, 8) l_194 = (VECTOR(uint16_t, 8))(0xC578L, (VECTOR(uint16_t, 4))(0xC578L, (VECTOR(uint16_t, 2))(0xC578L, 0x627AL), 0x627AL), 0x627AL, 0xC578L, 0x627AL);
    uint8_t *l_198 = (void*)0;
    uint8_t *l_199 = (void*)0;
    uint8_t *l_200 = (void*)0;
    uint8_t *l_201 = (void*)0;
    uint8_t *l_202 = (void*)0;
    uint8_t *l_203 = (void*)0;
    uint8_t *l_204 = (void*)0;
    uint8_t *l_205[6][5][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_206 = (-3L);
    int32_t l_207[7] = {0x31A3471CL,0x58BFCD3BL,0x31A3471CL,0x31A3471CL,0x58BFCD3BL,0x31A3471CL,0x31A3471CL};
    int32_t *l_212 = &p_1208->g_213;
    int32_t ***l_227 = (void*)0;
    uint8_t l_252 = 3UL;
    uint8_t ***l_267 = &p_1208->g_264;
    uint16_t *l_268 = &p_1208->g_97;
    int8_t l_274 = 0x62L;
    uint64_t l_275 = 18446744073709551607UL;
    uint64_t l_276 = 0xC2B3C5BA28970B20L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_128[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_191[i] = (void*)0;
    (*p_45) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_48.s093ea4b5)), ((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 8))(func_49(&p_1208->g_10[5][0], func_52(p_1208->g_3, func_56(l_60, p_46, ((*l_63) = ((*l_61) = 4UL)), p_1208), (l_128[3] != ((~p_1208->g_87.x) , p_1208->g_129)), p_1208), p_1208), (*p_45), ((VECTOR(int32_t, 2))(0x747AD6A6L)), l_175, 0x4F5B66D5L, (-3L), 2L)).s6, 0x69E2F776L, (-1L))), 0L, 0x5BD4EC95L, 0x42A144F9L, 0x4439E317L)).s6;
    (*p_45) = 9L;
    if ((((*l_212) = (+(safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((p_1208->g_184 , l_175), (safe_rshift_func_int8_t_s_u((((((l_48.s4 = (p_1208->g_190[0] = (--p_1208->g_187))) , l_191[0]) != p_1208->g_192) && (((safe_unary_minus_func_uint8_t_u(p_46)) < 252UL) && ((VECTOR(uint16_t, 4))(l_194.s4553)).z)) < (-6L)), 2)))) & (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_1208->g_195.xy)), 9UL, 0UL)).z || p_1208->g_195.x)), (safe_rshift_func_int8_t_s_u(((p_1208->g_67.se++) != ((((((safe_mod_func_int8_t_s_s((((VECTOR(int8_t, 2))(1L, 0x78L)).lo | (p_1208->g_11[5] == (*p_45))), p_1208->g_87.x)) != p_46) , p_1208->g_11[0]) & 0UL) | p_1208->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1208->tid, 164))]) , p_47)), p_47)))), l_194.s0)), p_1208->g_64)))) , (*p_45)))
    { /* block id: 65 */
        int32_t **l_226 = &p_1208->g_10[5][0];
        int32_t ***l_225 = &l_226;
        int32_t ***l_229 = &l_226;
        VECTOR(int32_t, 2) l_235 = (VECTOR(int32_t, 2))(0x3BA48C56L, 0L);
        int16_t **l_262[1][9] = {{&l_191[0],&l_191[0],&l_191[0],&l_191[0],&l_191[0],&l_191[0],&l_191[0],&l_191[0],&l_191[0]}};
        uint8_t ****l_266[1][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int8_t *l_272 = &p_1208->g_273;
        int i, j;
        for (p_1208->g_64 = (-25); (p_1208->g_64 <= 47); p_1208->g_64 = safe_add_func_uint8_t_u_u(p_1208->g_64, 5))
        { /* block id: 68 */
            volatile uint8_t ** volatile *l_222 = &p_1208->g_219;
            l_60 = p_45;
            (*p_1208->g_218) = &p_1208->g_144[1];
            (*l_222) = p_1208->g_219;
        }
        for (p_1208->g_187 = 0; (p_1208->g_187 < 59); p_1208->g_187 = safe_add_func_uint64_t_u_u(p_1208->g_187, 9))
        { /* block id: 75 */
            int32_t ****l_228[1][7] = {{&l_227,&l_227,&l_227,&l_227,&l_227,&l_227,&l_227}};
            int8_t l_250 = 0x7BL;
            int32_t *l_255 = (void*)0;
            int i, j;
            if ((l_225 != (l_229 = l_227)))
            { /* block id: 77 */
                uint8_t l_232[10] = {0xEBL,255UL,0xEBL,0xEBL,255UL,0xEBL,0xEBL,255UL,0xEBL,0xEBL};
                VECTOR(int32_t, 16) l_233 = (VECTOR(int32_t, 16))(0x08395720L, (VECTOR(int32_t, 4))(0x08395720L, (VECTOR(int32_t, 2))(0x08395720L, 0x39D664D8L), 0x39D664D8L), 0x39D664D8L, 0x08395720L, 0x39D664D8L, (VECTOR(int32_t, 2))(0x08395720L, 0x39D664D8L), (VECTOR(int32_t, 2))(0x08395720L, 0x39D664D8L), 0x08395720L, 0x39D664D8L, 0x08395720L, 0x39D664D8L);
                VECTOR(uint32_t, 4) l_243 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL);
                uint32_t *l_248 = (void*)0;
                uint32_t *l_249[1];
                uint16_t *l_251[6][5][7] = {{{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0}},{{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0}},{{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0}},{{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0}},{{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0}},{{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0},{&p_1208->g_97,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0,&p_1208->g_97,(void*)0}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_249[i] = (void*)0;
                atomic_sub(&p_1208->l_atomic_reduction[0], ((l_233.s0 = (((safe_lshift_func_int8_t_s_u(l_232[5], FAKE_DIVERGE(p_1208->global_1_offset, get_global_id(1), 10))) , ((*p_45) == ((VECTOR(int32_t, 8))(l_233.s65936964)).s1)) && ((((((*p_45) <= (((VECTOR(int16_t, 4))(p_1208->g_234.sdb63)).x & (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(2L, (-3L))), ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(l_235.yxyx)).wzyxxxxzzyyxwwwz, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x6E725D34L, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(p_1208->g_236.xx)), ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x3530L, (-1L))), 0x3FAFL, 0x7F30L)).zwzzxzyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(p_1208->g_237.yxyyyyxy)).even)).zzzwxyxw))), ((VECTOR(int32_t, 4))((*p_45), ((l_233.s8 || ((p_47 | ((safe_rshift_func_int8_t_s_u((0x100C481D80BF712AL != (l_233.s4 < ((+((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 2))(p_1208->g_242.yx)).xxxyxxyyxxxyyyyx, ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_243.ywzx)).zxxzyxzx)).s61, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((p_1208->g_242.w = (safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(l_243.w, p_1208->g_97)) | 0x1310D9C446DE6448L), p_46))) & p_46), 0UL, 0xB1C68B05L, 5UL)).xxzxzwyw)).s05))).yyxyyxyyyyyyyyyy))).s4c, ((VECTOR(uint32_t, 2))(4294967293UL))))))), 0x5139653BL, 0x5C7453D5L, ((VECTOR(uint32_t, 4))(4294967295UL)))).s2) < (*p_45)))), 0)) , p_46)) ^ 65534UL)) < l_233.s6), 0x17E63882L, 0x7AC10FECL)).xxwzzwxw))), ((VECTOR(int32_t, 8))(4L))))), ((VECTOR(int32_t, 8))(0x04019F7FL)), ((VECTOR(int32_t, 8))(0x7380DA34L))))).s72, ((VECTOR(int32_t, 2))(0L))))), 0x79CF06DEL, 0x1FD3E131L)).even)), ((VECTOR(int32_t, 2))((-1L)))))), (-6L))), (-1L), l_250, 0x2946B7A6L, 0x409C7496L)).s30, ((VECTOR(int32_t, 2))(0x25B2B4A8L))))), ((VECTOR(int32_t, 2))(0x6C2678DBL))))).xxxxyyxyxxyxxyxx, ((VECTOR(int32_t, 16))(0L))))).s0c))).yxxyxyyxxyyxyyyx)).s3 && 3L))) , 2UL) && 1L) >= p_47) || p_1208->g_195.x))) > GROUP_DIVERGE(1, 1)));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1208->v_collective += p_1208->l_atomic_reduction[0];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            else
            { /* block id: 81 */
                return p_46;
            }
            l_252++;
            (**l_225) = l_255;
        }
        (*l_226) = p_45;
        (*p_45) ^= (safe_lshift_func_uint16_t_u_u(((((safe_mul_func_int16_t_s_s((l_275 = (safe_mod_func_int16_t_s_s(p_47, ((((p_1208->g_172.f0 > ((p_1208->g_192 = (l_191[0] = p_1208->g_192)) != ((((l_267 = p_1208->g_263) == (void*)0) , (((p_1208->g_269[8][2] = l_268) == &p_1208->g_97) || ((*l_268) = 65535UL))) , ((((safe_sub_func_int8_t_s_s(((*l_272) = ((8L || p_47) < p_46)), GROUP_DIVERGE(0, 1))) & l_274) >= 0x5E5556FB1F53E0E9L) , l_268)))) | p_1208->g_87.z) | p_46) ^ (-4L))))), 0UL)) || (-1L)) >= l_276) ^ p_47), 5));
    }
    else
    { /* block id: 96 */
        return p_47;
    }
    return p_1208->g_67.s8;
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_162
 * writes: p_1208->g_162
 */
int32_t  func_49(int32_t ** p_50, int32_t ** p_51, struct S2 * p_1208)
{ /* block id: 50 */
    union U0 *l_171[6] = {&p_1208->g_172,&p_1208->g_172,&p_1208->g_172,&p_1208->g_172,&p_1208->g_172,&p_1208->g_172};
    union U0 **l_173 = &l_171[0];
    int32_t l_174[5] = {6L,6L,6L,6L,6L};
    int i;
    for (p_1208->g_162 = 0; (p_1208->g_162 >= 8); p_1208->g_162 = safe_add_func_uint8_t_u_u(p_1208->g_162, 1))
    { /* block id: 53 */
        uint32_t l_170 = 0x6ED50CF4L;
        if (l_170)
            break;
    }
    (*l_173) = l_171[3];
    return l_174[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_64 p_1208->g_130 p_1208->g_comm_values p_1208->g_10
 * writes: p_1208->g_64 p_1208->g_10
 */
int32_t ** func_52(uint64_t  p_53, int32_t ** p_54, uint32_t  p_55, struct S2 * p_1208)
{ /* block id: 31 */
    VECTOR(int16_t, 16) l_143 = (VECTOR(int16_t, 16))(0x2C83L, (VECTOR(int16_t, 4))(0x2C83L, (VECTOR(int16_t, 2))(0x2C83L, 2L), 2L), 2L, 0x2C83L, 2L, (VECTOR(int16_t, 2))(0x2C83L, 2L), (VECTOR(int16_t, 2))(0x2C83L, 2L), 0x2C83L, 2L, 0x2C83L, 2L);
    int32_t l_146[9] = {0x64DC6A2FL,0x35CBEA91L,0x64DC6A2FL,0x64DC6A2FL,0x35CBEA91L,0x64DC6A2FL,0x64DC6A2FL,0x35CBEA91L,0x64DC6A2FL};
    uint32_t *l_151[5][1];
    uint32_t *l_154 = &p_1208->g_64;
    uint64_t l_161 = 18446744073709551615UL;
    int32_t l_163[4] = {0x4EBA1A22L,0x4EBA1A22L,0x4EBA1A22L,0x4EBA1A22L};
    int32_t **l_167 = &p_1208->g_10[4][2];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_151[i][j] = &p_1208->g_64;
    }
    for (p_1208->g_64 = 0; (p_1208->g_64 < 56); p_1208->g_64 = safe_add_func_int16_t_s_s(p_1208->g_64, 3))
    { /* block id: 34 */
        uint32_t *l_133 = (void*)0;
        int32_t *l_145[4] = {&p_1208->g_11[8],&p_1208->g_11[8],&p_1208->g_11[8],&p_1208->g_11[8]};
        uint32_t **l_152 = (void*)0;
        uint32_t **l_153 = &l_151[3][0];
        VECTOR(uint32_t, 2) l_157 = (VECTOR(uint32_t, 2))(0xEFFA24A0L, 0x3B97F15FL);
        int32_t ***l_164 = (void*)0;
        int32_t **l_166[9];
        int i;
        for (i = 0; i < 9; i++)
            l_166[i] = &l_145[3];
        if (((void*)0 != l_133))
        { /* block id: 35 */
            return &p_1208->g_10[5][0];
        }
        else
        { /* block id: 37 */
            int32_t l_134 = 5L;
            if (l_134)
                break;
        }
        l_163[3] |= ((GROUP_DIVERGE(1, 1) == (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(0UL, (safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((6L | GROUP_DIVERGE(2, 1)), ((((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_143.sa32cf900)).s7477514473727374)).hi))).s5526054417654410, (int16_t)((!((((p_1208->g_144[2] , (l_146[3] ^= (-1L))) < (safe_mod_func_int8_t_s_s((((**p_54) <= (((*l_153) = l_151[3][0]) == l_154)) | (p_55 >= (safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_157.xxyyxxyyyyyxxyyx)).lo)).s6773246004547303, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))((((VECTOR(uint8_t, 4))(((p_1208->g_67.s4++) | ((p_1208->g_160 = &p_1208->g_64) != (void*)0)), GROUP_DIVERGE(2, 1), 0xA5L, 0xE6L)).z <= p_53), ((VECTOR(uint32_t, 8))(4294967295UL)), 4294967292UL, GROUP_DIVERGE(1, 1), ((VECTOR(uint32_t, 2))(4294967292UL)), 0xFA26938DL, 0xF510E370L, 4294967295UL))))))), ((VECTOR(uint32_t, 16))(0x6A1B4947L)), ((VECTOR(uint32_t, 16))(0xA416FBCEL))))).s5, 0x7DA2B038L)))), l_143.s8))) | l_143.sf) || l_161)) , p_1208->g_162), (int16_t)8L))).lo, (int16_t)p_1208->g_11[0]))).s7 || p_53) , p_1208->g_130))), p_53)))), 1UL))) <= p_1208->g_comm_values[p_1208->tid]);
        l_166[4] = &p_1208->g_10[2][0];
    }
    (*p_54) = (*p_54);
    (*p_54) = (void*)0;
    return l_167;
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_67 p_1208->g_comm_values p_1208->l_comm_values p_1208->g_11 p_1208->g_97
 * writes: p_1208->g_11
 */
int32_t ** func_56(int32_t * p_57, uint32_t  p_58, uint32_t  p_59, struct S2 * p_1208)
{ /* block id: 13 */
    VECTOR(uint8_t, 4) l_68 = (VECTOR(uint8_t, 4))(0xC1L, (VECTOR(uint8_t, 2))(0xC1L, 0x34L), 0x34L);
    VECTOR(uint8_t, 8) l_69 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xDAL), 0xDAL), 0xDAL, 1UL, 0xDAL);
    uint8_t *l_83[2][1];
    int32_t l_84[4];
    int16_t *l_85 = (void*)0;
    int16_t *l_86 = (void*)0;
    int16_t *l_88 = (void*)0;
    int16_t *l_89 = (void*)0;
    int16_t *l_90 = (void*)0;
    int16_t *l_91 = (void*)0;
    int16_t *l_92 = (void*)0;
    int16_t *l_93 = (void*)0;
    int16_t *l_94 = (void*)0;
    int16_t *l_95[5];
    int32_t l_96[10] = {0x6B6C92F5L,(-2L),0x7F0C4AEEL,(-2L),0x6B6C92F5L,0x6B6C92F5L,(-2L),0x7F0C4AEEL,(-2L),0x6B6C92F5L};
    int32_t *l_98 = &p_1208->g_11[0];
    int32_t *l_99 = &l_96[4];
    int32_t *l_100 = &l_84[2];
    int32_t *l_101 = &p_1208->g_11[1];
    int32_t *l_102 = &p_1208->g_11[0];
    int32_t *l_103[3];
    int16_t l_104 = 1L;
    int32_t l_105 = 0L;
    uint64_t l_106 = 18446744073709551611UL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_83[i][j] = (void*)0;
    }
    for (i = 0; i < 4; i++)
        l_84[i] = (-3L);
    for (i = 0; i < 5; i++)
        l_95[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_103[i] = &l_96[9];
    (*l_98) = ((VECTOR(int32_t, 4))((((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(p_1208->g_67.scc05fd73fcfb248f)).odd)))), 0x00L, 0xF9L, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 8))(0xE2L, 1UL, ((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 16))(l_68.ywzxyxxyxxyyzyzz)).s8e1f, ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 8))(246UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(1UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_69.s57)).yxxx)), 0UL, 0x3BL, ((((VECTOR(uint8_t, 4))(l_69.s5, p_59, 255UL, 0xCDL)).z <= 0x28L) , ((p_1208->g_67.s9 != (l_96[9] |= (safe_sub_func_uint8_t_u_u((l_84[1] = (safe_mul_func_uint16_t_u_u(0xDB25L, (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((GROUP_DIVERGE(0, 1) == (safe_add_func_int64_t_s_s(((0x78504067L < ((VECTOR(int32_t, 2))(0x6CDBA6A3L, 0x3DABD651L)).hi) == (safe_div_func_uint8_t_u_u(p_1208->g_comm_values[p_1208->tid], ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(0x23L, 0x08L)).yyyy, (int8_t)(safe_unary_minus_func_int8_t_s(p_58))))).xxzwzxwz, ((VECTOR(int8_t, 8))(0x33L))))).s0))), p_1208->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1208->tid, 164))]))), 5)), p_1208->g_67.sa))))), p_59)))) && 4294967288UL)), p_1208->g_11[4], ((VECTOR(uint8_t, 4))(255UL)), l_69.s0, 4UL, 246UL, 9UL)).sc39f)), p_1208->g_11[4], 255UL, 0x6EL)).even)), 0xA1L, 0x26L, 1UL)), ((VECTOR(uint8_t, 8))(9UL))))).s22, (uint8_t)p_1208->g_11[0]))).yxyy))), 255UL, 0x24L)).odd, ((VECTOR(uint8_t, 4))(0x21L))))), 3UL, 0x48L)).s1, GROUP_DIVERGE(0, 1))) > p_1208->g_97) <= l_69.s1), ((VECTOR(int32_t, 2))((-5L))), 0x7F8654D6L)).x;
    ++l_106;
    for (l_105 = 24; (l_105 >= (-10)); l_105 = safe_sub_func_uint8_t_u_u(l_105, 8))
    { /* block id: 20 */
        uint32_t l_113 = 4294967295UL;
        uint32_t **l_118 = (void*)0;
        uint32_t *l_120 = &p_1208->g_62;
        uint32_t **l_119 = &l_120;
        uint64_t *l_127 = &l_106;
        for (l_106 = 21; (l_106 > 55); ++l_106)
        { /* block id: 23 */
            if (l_113)
                break;
        }
        (*l_99) = ((&p_1208->g_10[5][0] == &p_57) >= (safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((0x576304A0L & (&p_59 != ((*l_119) = &p_59))), p_1208->g_67.s0)), ((*l_127) = ((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))((4294967295UL | (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((+(l_113 > (safe_lshift_func_int8_t_s_s(7L, 0)))) , (*l_98)) || 0x1D64L), p_1208->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1208->tid, 164))])), 1L))), 0xFB29E57E6B11A4FFL, 0xB72DBC953962AE52L, ((VECTOR(uint64_t, 4))(0x890F00B84BF07F47L)), 0UL)).lo)))).even, ((VECTOR(uint64_t, 2))(0x910CF37CF8FE1070L))))).lo))));
    }
    return &p_1208->g_10[0][0];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[85];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 85; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[85];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 85; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[164];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 164; i++)
            l_comm_values[i] = 1;
    struct S2 c_1209;
    struct S2* p_1208 = &c_1209;
    struct S2 c_1210 = {
        {{{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)}},{{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)}},{{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)}},{{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)}},{{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)}},{{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)}},{{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)}},{{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)}},{{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)},{0x09B93B3BL,0x219AE86AL,(-1L)}}}, // p_1208->g_2
        (-1L), // p_1208->g_3
        (VECTOR(int32_t, 2))(6L, 0x08383038L), // p_1208->g_4
        1L, // p_1208->g_5
        {0x76E88F3CL,0x76E88F3CL,0x76E88F3CL,0x76E88F3CL,0x76E88F3CL,0x76E88F3CL,0x76E88F3CL,0x76E88F3CL,0x76E88F3CL}, // p_1208->g_11
        {{&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0]},{&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0]},{&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0]},{&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0]},{&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0]},{&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0],&p_1208->g_11[0]}}, // p_1208->g_10
        0x261C1CA3L, // p_1208->g_62
        4294967292UL, // p_1208->g_64
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x36L), 0x36L), 0x36L, 255UL, 0x36L, (VECTOR(uint8_t, 2))(255UL, 0x36L), (VECTOR(uint8_t, 2))(255UL, 0x36L), 255UL, 0x36L, 255UL, 0x36L), // p_1208->g_67
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), // p_1208->g_87
        7UL, // p_1208->g_97
        0UL, // p_1208->g_130
        &p_1208->g_130, // p_1208->g_129
        {{0L},{0L},{0L}}, // p_1208->g_144
        &p_1208->g_62, // p_1208->g_160
        9L, // p_1208->g_162
        {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}, // p_1208->g_165
        {-4L}, // p_1208->g_172
        {0x67E1754CC0068608L}, // p_1208->g_184
        4UL, // p_1208->g_187
        {0x5D05C0FEL,0x5D05C0FEL}, // p_1208->g_190
        (void*)0, // p_1208->g_192
        (VECTOR(uint32_t, 2))(4294967290UL, 0x5011036FL), // p_1208->g_195
        (-7L), // p_1208->g_213
        &p_1208->g_144[2], // p_1208->g_217
        {&p_1208->g_217,(void*)0,&p_1208->g_217,&p_1208->g_217,(void*)0,&p_1208->g_217,&p_1208->g_217,(void*)0}, // p_1208->g_216
        &p_1208->g_217, // p_1208->g_218
        0x7FL, // p_1208->g_221
        &p_1208->g_221, // p_1208->g_220
        &p_1208->g_220, // p_1208->g_219
        (VECTOR(int16_t, 16))(0x2462L, (VECTOR(int16_t, 4))(0x2462L, (VECTOR(int16_t, 2))(0x2462L, 8L), 8L), 8L, 0x2462L, 8L, (VECTOR(int16_t, 2))(0x2462L, 8L), (VECTOR(int16_t, 2))(0x2462L, 8L), 0x2462L, 8L, 0x2462L, 8L), // p_1208->g_234
        (VECTOR(int32_t, 2))((-9L), 0x37B11ED5L), // p_1208->g_236
        (VECTOR(uint16_t, 2))(2UL, 0x4A3CL), // p_1208->g_237
        (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 4294967295UL), 4294967295UL), // p_1208->g_242
        (void*)0, // p_1208->g_265
        &p_1208->g_265, // p_1208->g_264
        &p_1208->g_264, // p_1208->g_263
        {{&p_1208->g_97,&p_1208->g_97,&p_1208->g_97},{&p_1208->g_97,&p_1208->g_97,&p_1208->g_97},{&p_1208->g_97,&p_1208->g_97,&p_1208->g_97},{&p_1208->g_97,&p_1208->g_97,&p_1208->g_97},{&p_1208->g_97,&p_1208->g_97,&p_1208->g_97},{&p_1208->g_97,&p_1208->g_97,&p_1208->g_97},{&p_1208->g_97,&p_1208->g_97,&p_1208->g_97},{&p_1208->g_97,&p_1208->g_97,&p_1208->g_97},{&p_1208->g_97,&p_1208->g_97,&p_1208->g_97}}, // p_1208->g_269
        0x22L, // p_1208->g_273
        0x54137E1939BDB1D7L, // p_1208->g_297
        {0x5C3EBF0EA038C230L}, // p_1208->g_324
        {(-5L)}, // p_1208->g_341
        0x9DL, // p_1208->g_348
        (VECTOR(uint16_t, 8))(0xA52FL, (VECTOR(uint16_t, 4))(0xA52FL, (VECTOR(uint16_t, 2))(0xA52FL, 65531UL), 65531UL), 65531UL, 0xA52FL, 65531UL), // p_1208->g_367
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int16_t, 2))(1L, 1L), (VECTOR(int16_t, 2))(1L, 1L), 1L, 1L, 1L, 1L), // p_1208->g_389
        {1UL,1UL,1UL,1UL,1UL,1UL,1UL}, // p_1208->g_402
        {(-9L),0x13L,(-9L),(-9L),0x13L,(-9L)}, // p_1208->g_411
        {1L}, // p_1208->g_413
        &p_1208->g_5, // p_1208->g_417
        {{&p_1208->g_417,&p_1208->g_417,(void*)0,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417,(void*)0,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417,(void*)0,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417,(void*)0,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417,(void*)0,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417,(void*)0,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417,(void*)0,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417,(void*)0,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417,(void*)0,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417,(void*)0,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417,&p_1208->g_417}}, // p_1208->g_416
        {0x2242E48B42619A35L}, // p_1208->g_430
        (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), 0x011C2F0C8EC3341CL), 0x011C2F0C8EC3341CL), // p_1208->g_466
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x76346946E5B2CB9BL), 0x76346946E5B2CB9BL), // p_1208->g_471
        0x663EE617L, // p_1208->g_476
        (VECTOR(uint32_t, 8))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0xD39025D5L), 0xD39025D5L), 0xD39025D5L, 4294967292UL, 0xD39025D5L), // p_1208->g_481
        {0x220C23B3C51D74B8L}, // p_1208->g_507
        {0x7E15C63A4807AA42L}, // p_1208->g_512
        (VECTOR(uint16_t, 2))(1UL, 0x414EL), // p_1208->g_558
        (VECTOR(uint16_t, 16))(0xC67CL, (VECTOR(uint16_t, 4))(0xC67CL, (VECTOR(uint16_t, 2))(0xC67CL, 65535UL), 65535UL), 65535UL, 0xC67CL, 65535UL, (VECTOR(uint16_t, 2))(0xC67CL, 65535UL), (VECTOR(uint16_t, 2))(0xC67CL, 65535UL), 0xC67CL, 65535UL, 0xC67CL, 65535UL), // p_1208->g_560
        (VECTOR(uint8_t, 2))(0xC2L, 0xB0L), // p_1208->g_578
        9UL, // p_1208->g_605
        &p_1208->g_605, // p_1208->g_604
        {{&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,&p_1208->g_604,&p_1208->g_604},{&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,&p_1208->g_604,&p_1208->g_604},{&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,&p_1208->g_604,&p_1208->g_604},{&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,&p_1208->g_604,&p_1208->g_604},{&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,&p_1208->g_604,&p_1208->g_604},{&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,&p_1208->g_604,&p_1208->g_604},{&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,&p_1208->g_604,&p_1208->g_604},{&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,&p_1208->g_604,&p_1208->g_604},{&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,(void*)0,&p_1208->g_604,&p_1208->g_604,&p_1208->g_604}}, // p_1208->g_603
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 9UL), 9UL), 9UL, 0UL, 9UL), // p_1208->g_646
        4294967290UL, // p_1208->g_661
        (void*)0, // p_1208->g_669
        &p_1208->g_669, // p_1208->g_668
        {0x23E686CA8E6A28C8L}, // p_1208->g_673
        (VECTOR(int16_t, 8))(0x5D81L, (VECTOR(int16_t, 4))(0x5D81L, (VECTOR(int16_t, 2))(0x5D81L, (-1L)), (-1L)), (-1L), 0x5D81L, (-1L)), // p_1208->g_680
        (VECTOR(int16_t, 2))(0L, 3L), // p_1208->g_681
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-5L)), (-5L)), // p_1208->g_689
        (void*)0, // p_1208->g_694
        (void*)0, // p_1208->g_695
        {{&p_1208->g_417,&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417,&p_1208->g_417},{&p_1208->g_417,&p_1208->g_417,&p_1208->g_417}}, // p_1208->g_707
        &p_1208->g_10[5][0], // p_1208->g_708
        &p_1208->g_10[0][4], // p_1208->g_718
        {0x3183L}, // p_1208->g_723
        (VECTOR(uint16_t, 4))(0xB42DL, (VECTOR(uint16_t, 2))(0xB42DL, 0xC02CL), 0xC02CL), // p_1208->g_884
        (VECTOR(uint32_t, 16))(0xEC81984BL, (VECTOR(uint32_t, 4))(0xEC81984BL, (VECTOR(uint32_t, 2))(0xEC81984BL, 0x96E3CA92L), 0x96E3CA92L), 0x96E3CA92L, 0xEC81984BL, 0x96E3CA92L, (VECTOR(uint32_t, 2))(0xEC81984BL, 0x96E3CA92L), (VECTOR(uint32_t, 2))(0xEC81984BL, 0x96E3CA92L), 0xEC81984BL, 0x96E3CA92L, 0xEC81984BL, 0x96E3CA92L), // p_1208->g_885
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x412C052DL), 0x412C052DL), 0x412C052DL, (-1L), 0x412C052DL), // p_1208->g_906
        (VECTOR(int32_t, 2))(0x6589AD5FL, 0x197A094BL), // p_1208->g_908
        (VECTOR(int16_t, 16))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, (-1L)), (-1L)), (-1L), 9L, (-1L), (VECTOR(int16_t, 2))(9L, (-1L)), (VECTOR(int16_t, 2))(9L, (-1L)), 9L, (-1L), 9L, (-1L)), // p_1208->g_914
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xBA0CL), 0xBA0CL), 0xBA0CL, 65535UL, 0xBA0CL), // p_1208->g_915
        (VECTOR(uint16_t, 16))(0xE133L, (VECTOR(uint16_t, 4))(0xE133L, (VECTOR(uint16_t, 2))(0xE133L, 6UL), 6UL), 6UL, 0xE133L, 6UL, (VECTOR(uint16_t, 2))(0xE133L, 6UL), (VECTOR(uint16_t, 2))(0xE133L, 6UL), 0xE133L, 6UL, 0xE133L, 6UL), // p_1208->g_917
        {4L}, // p_1208->g_924
        (VECTOR(int16_t, 8))(0x221CL, (VECTOR(int16_t, 4))(0x221CL, (VECTOR(int16_t, 2))(0x221CL, 0x76A0L), 0x76A0L), 0x76A0L, 0x221CL, 0x76A0L), // p_1208->g_943
        {0x496DL}, // p_1208->g_957
        &p_1208->g_11[0], // p_1208->g_964
        (VECTOR(uint8_t, 2))(0x33L, 0x76L), // p_1208->g_979
        &p_1208->g_402[4], // p_1208->g_986
        (VECTOR(uint16_t, 16))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0x23FAL), 0x23FAL), 0x23FAL, 65528UL, 0x23FAL, (VECTOR(uint16_t, 2))(65528UL, 0x23FAL), (VECTOR(uint16_t, 2))(65528UL, 0x23FAL), 65528UL, 0x23FAL, 65528UL, 0x23FAL), // p_1208->g_992
        (void*)0, // p_1208->g_1000
        &p_1208->g_1000, // p_1208->g_999
        0x8A8BL, // p_1208->g_1006
        &p_1208->g_417, // p_1208->g_1028
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), // p_1208->g_1055
        (VECTOR(int16_t, 2))(0x5BA4L, 0x1A2DL), // p_1208->g_1056
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x047BL), 0x047BL), // p_1208->g_1058
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL), // p_1208->g_1184
        (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 248UL), 248UL), // p_1208->g_1186
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 247UL), 247UL), 247UL, 255UL, 247UL, (VECTOR(uint8_t, 2))(255UL, 247UL), (VECTOR(uint8_t, 2))(255UL, 247UL), 255UL, 247UL, 255UL, 247UL), // p_1208->g_1192
        &p_1208->g_411[4], // p_1208->g_1196
        {&p_1208->g_1196,&p_1208->g_1196,&p_1208->g_1196,&p_1208->g_1196,&p_1208->g_1196,&p_1208->g_1196}, // p_1208->g_1195
        {0L}, // p_1208->g_1205
        &p_1208->g_1205, // p_1208->g_1204
        &p_1208->g_1204, // p_1208->g_1203
        0, // p_1208->v_collective
        sequence_input[get_global_id(0)], // p_1208->global_0_offset
        sequence_input[get_global_id(1)], // p_1208->global_1_offset
        sequence_input[get_global_id(2)], // p_1208->global_2_offset
        sequence_input[get_local_id(0)], // p_1208->local_0_offset
        sequence_input[get_local_id(1)], // p_1208->local_1_offset
        sequence_input[get_local_id(2)], // p_1208->local_2_offset
        sequence_input[get_group_id(0)], // p_1208->group_0_offset
        sequence_input[get_group_id(1)], // p_1208->group_1_offset
        sequence_input[get_group_id(2)], // p_1208->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 164)), permutations[0][get_linear_local_id()])), // p_1208->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1209 = c_1210;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1208);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1208->g_2[i][j][k], "p_1208->g_2[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1208->g_3, "p_1208->g_3", print_hash_value);
    transparent_crc(p_1208->g_4.x, "p_1208->g_4.x", print_hash_value);
    transparent_crc(p_1208->g_4.y, "p_1208->g_4.y", print_hash_value);
    transparent_crc(p_1208->g_5, "p_1208->g_5", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1208->g_11[i], "p_1208->g_11[i]", print_hash_value);

    }
    transparent_crc(p_1208->g_62, "p_1208->g_62", print_hash_value);
    transparent_crc(p_1208->g_64, "p_1208->g_64", print_hash_value);
    transparent_crc(p_1208->g_67.s0, "p_1208->g_67.s0", print_hash_value);
    transparent_crc(p_1208->g_67.s1, "p_1208->g_67.s1", print_hash_value);
    transparent_crc(p_1208->g_67.s2, "p_1208->g_67.s2", print_hash_value);
    transparent_crc(p_1208->g_67.s3, "p_1208->g_67.s3", print_hash_value);
    transparent_crc(p_1208->g_67.s4, "p_1208->g_67.s4", print_hash_value);
    transparent_crc(p_1208->g_67.s5, "p_1208->g_67.s5", print_hash_value);
    transparent_crc(p_1208->g_67.s6, "p_1208->g_67.s6", print_hash_value);
    transparent_crc(p_1208->g_67.s7, "p_1208->g_67.s7", print_hash_value);
    transparent_crc(p_1208->g_67.s8, "p_1208->g_67.s8", print_hash_value);
    transparent_crc(p_1208->g_67.s9, "p_1208->g_67.s9", print_hash_value);
    transparent_crc(p_1208->g_67.sa, "p_1208->g_67.sa", print_hash_value);
    transparent_crc(p_1208->g_67.sb, "p_1208->g_67.sb", print_hash_value);
    transparent_crc(p_1208->g_67.sc, "p_1208->g_67.sc", print_hash_value);
    transparent_crc(p_1208->g_67.sd, "p_1208->g_67.sd", print_hash_value);
    transparent_crc(p_1208->g_67.se, "p_1208->g_67.se", print_hash_value);
    transparent_crc(p_1208->g_67.sf, "p_1208->g_67.sf", print_hash_value);
    transparent_crc(p_1208->g_87.x, "p_1208->g_87.x", print_hash_value);
    transparent_crc(p_1208->g_87.y, "p_1208->g_87.y", print_hash_value);
    transparent_crc(p_1208->g_87.z, "p_1208->g_87.z", print_hash_value);
    transparent_crc(p_1208->g_87.w, "p_1208->g_87.w", print_hash_value);
    transparent_crc(p_1208->g_97, "p_1208->g_97", print_hash_value);
    transparent_crc(p_1208->g_130, "p_1208->g_130", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1208->g_144[i].f0, "p_1208->g_144[i].f0", print_hash_value);

    }
    transparent_crc(p_1208->g_162, "p_1208->g_162", print_hash_value);
    transparent_crc(p_1208->g_172.f0, "p_1208->g_172.f0", print_hash_value);
    transparent_crc(p_1208->g_184.f0, "p_1208->g_184.f0", print_hash_value);
    transparent_crc(p_1208->g_187, "p_1208->g_187", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1208->g_190[i], "p_1208->g_190[i]", print_hash_value);

    }
    transparent_crc(p_1208->g_195.x, "p_1208->g_195.x", print_hash_value);
    transparent_crc(p_1208->g_195.y, "p_1208->g_195.y", print_hash_value);
    transparent_crc(p_1208->g_213, "p_1208->g_213", print_hash_value);
    transparent_crc(p_1208->g_221, "p_1208->g_221", print_hash_value);
    transparent_crc(p_1208->g_234.s0, "p_1208->g_234.s0", print_hash_value);
    transparent_crc(p_1208->g_234.s1, "p_1208->g_234.s1", print_hash_value);
    transparent_crc(p_1208->g_234.s2, "p_1208->g_234.s2", print_hash_value);
    transparent_crc(p_1208->g_234.s3, "p_1208->g_234.s3", print_hash_value);
    transparent_crc(p_1208->g_234.s4, "p_1208->g_234.s4", print_hash_value);
    transparent_crc(p_1208->g_234.s5, "p_1208->g_234.s5", print_hash_value);
    transparent_crc(p_1208->g_234.s6, "p_1208->g_234.s6", print_hash_value);
    transparent_crc(p_1208->g_234.s7, "p_1208->g_234.s7", print_hash_value);
    transparent_crc(p_1208->g_234.s8, "p_1208->g_234.s8", print_hash_value);
    transparent_crc(p_1208->g_234.s9, "p_1208->g_234.s9", print_hash_value);
    transparent_crc(p_1208->g_234.sa, "p_1208->g_234.sa", print_hash_value);
    transparent_crc(p_1208->g_234.sb, "p_1208->g_234.sb", print_hash_value);
    transparent_crc(p_1208->g_234.sc, "p_1208->g_234.sc", print_hash_value);
    transparent_crc(p_1208->g_234.sd, "p_1208->g_234.sd", print_hash_value);
    transparent_crc(p_1208->g_234.se, "p_1208->g_234.se", print_hash_value);
    transparent_crc(p_1208->g_234.sf, "p_1208->g_234.sf", print_hash_value);
    transparent_crc(p_1208->g_236.x, "p_1208->g_236.x", print_hash_value);
    transparent_crc(p_1208->g_236.y, "p_1208->g_236.y", print_hash_value);
    transparent_crc(p_1208->g_237.x, "p_1208->g_237.x", print_hash_value);
    transparent_crc(p_1208->g_237.y, "p_1208->g_237.y", print_hash_value);
    transparent_crc(p_1208->g_242.x, "p_1208->g_242.x", print_hash_value);
    transparent_crc(p_1208->g_242.y, "p_1208->g_242.y", print_hash_value);
    transparent_crc(p_1208->g_242.z, "p_1208->g_242.z", print_hash_value);
    transparent_crc(p_1208->g_242.w, "p_1208->g_242.w", print_hash_value);
    transparent_crc(p_1208->g_273, "p_1208->g_273", print_hash_value);
    transparent_crc(p_1208->g_297, "p_1208->g_297", print_hash_value);
    transparent_crc(p_1208->g_324.f0, "p_1208->g_324.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1208->g_341[i], "p_1208->g_341[i]", print_hash_value);

    }
    transparent_crc(p_1208->g_348, "p_1208->g_348", print_hash_value);
    transparent_crc(p_1208->g_367.s0, "p_1208->g_367.s0", print_hash_value);
    transparent_crc(p_1208->g_367.s1, "p_1208->g_367.s1", print_hash_value);
    transparent_crc(p_1208->g_367.s2, "p_1208->g_367.s2", print_hash_value);
    transparent_crc(p_1208->g_367.s3, "p_1208->g_367.s3", print_hash_value);
    transparent_crc(p_1208->g_367.s4, "p_1208->g_367.s4", print_hash_value);
    transparent_crc(p_1208->g_367.s5, "p_1208->g_367.s5", print_hash_value);
    transparent_crc(p_1208->g_367.s6, "p_1208->g_367.s6", print_hash_value);
    transparent_crc(p_1208->g_367.s7, "p_1208->g_367.s7", print_hash_value);
    transparent_crc(p_1208->g_389.s0, "p_1208->g_389.s0", print_hash_value);
    transparent_crc(p_1208->g_389.s1, "p_1208->g_389.s1", print_hash_value);
    transparent_crc(p_1208->g_389.s2, "p_1208->g_389.s2", print_hash_value);
    transparent_crc(p_1208->g_389.s3, "p_1208->g_389.s3", print_hash_value);
    transparent_crc(p_1208->g_389.s4, "p_1208->g_389.s4", print_hash_value);
    transparent_crc(p_1208->g_389.s5, "p_1208->g_389.s5", print_hash_value);
    transparent_crc(p_1208->g_389.s6, "p_1208->g_389.s6", print_hash_value);
    transparent_crc(p_1208->g_389.s7, "p_1208->g_389.s7", print_hash_value);
    transparent_crc(p_1208->g_389.s8, "p_1208->g_389.s8", print_hash_value);
    transparent_crc(p_1208->g_389.s9, "p_1208->g_389.s9", print_hash_value);
    transparent_crc(p_1208->g_389.sa, "p_1208->g_389.sa", print_hash_value);
    transparent_crc(p_1208->g_389.sb, "p_1208->g_389.sb", print_hash_value);
    transparent_crc(p_1208->g_389.sc, "p_1208->g_389.sc", print_hash_value);
    transparent_crc(p_1208->g_389.sd, "p_1208->g_389.sd", print_hash_value);
    transparent_crc(p_1208->g_389.se, "p_1208->g_389.se", print_hash_value);
    transparent_crc(p_1208->g_389.sf, "p_1208->g_389.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1208->g_402[i], "p_1208->g_402[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1208->g_411[i], "p_1208->g_411[i]", print_hash_value);

    }
    transparent_crc(p_1208->g_413.f0, "p_1208->g_413.f0", print_hash_value);
    transparent_crc(p_1208->g_430.f0, "p_1208->g_430.f0", print_hash_value);
    transparent_crc(p_1208->g_466.x, "p_1208->g_466.x", print_hash_value);
    transparent_crc(p_1208->g_466.y, "p_1208->g_466.y", print_hash_value);
    transparent_crc(p_1208->g_466.z, "p_1208->g_466.z", print_hash_value);
    transparent_crc(p_1208->g_466.w, "p_1208->g_466.w", print_hash_value);
    transparent_crc(p_1208->g_471.x, "p_1208->g_471.x", print_hash_value);
    transparent_crc(p_1208->g_471.y, "p_1208->g_471.y", print_hash_value);
    transparent_crc(p_1208->g_471.z, "p_1208->g_471.z", print_hash_value);
    transparent_crc(p_1208->g_471.w, "p_1208->g_471.w", print_hash_value);
    transparent_crc(p_1208->g_476, "p_1208->g_476", print_hash_value);
    transparent_crc(p_1208->g_481.s0, "p_1208->g_481.s0", print_hash_value);
    transparent_crc(p_1208->g_481.s1, "p_1208->g_481.s1", print_hash_value);
    transparent_crc(p_1208->g_481.s2, "p_1208->g_481.s2", print_hash_value);
    transparent_crc(p_1208->g_481.s3, "p_1208->g_481.s3", print_hash_value);
    transparent_crc(p_1208->g_481.s4, "p_1208->g_481.s4", print_hash_value);
    transparent_crc(p_1208->g_481.s5, "p_1208->g_481.s5", print_hash_value);
    transparent_crc(p_1208->g_481.s6, "p_1208->g_481.s6", print_hash_value);
    transparent_crc(p_1208->g_481.s7, "p_1208->g_481.s7", print_hash_value);
    transparent_crc(p_1208->g_507.f0, "p_1208->g_507.f0", print_hash_value);
    transparent_crc(p_1208->g_512.f0, "p_1208->g_512.f0", print_hash_value);
    transparent_crc(p_1208->g_558.x, "p_1208->g_558.x", print_hash_value);
    transparent_crc(p_1208->g_558.y, "p_1208->g_558.y", print_hash_value);
    transparent_crc(p_1208->g_560.s0, "p_1208->g_560.s0", print_hash_value);
    transparent_crc(p_1208->g_560.s1, "p_1208->g_560.s1", print_hash_value);
    transparent_crc(p_1208->g_560.s2, "p_1208->g_560.s2", print_hash_value);
    transparent_crc(p_1208->g_560.s3, "p_1208->g_560.s3", print_hash_value);
    transparent_crc(p_1208->g_560.s4, "p_1208->g_560.s4", print_hash_value);
    transparent_crc(p_1208->g_560.s5, "p_1208->g_560.s5", print_hash_value);
    transparent_crc(p_1208->g_560.s6, "p_1208->g_560.s6", print_hash_value);
    transparent_crc(p_1208->g_560.s7, "p_1208->g_560.s7", print_hash_value);
    transparent_crc(p_1208->g_560.s8, "p_1208->g_560.s8", print_hash_value);
    transparent_crc(p_1208->g_560.s9, "p_1208->g_560.s9", print_hash_value);
    transparent_crc(p_1208->g_560.sa, "p_1208->g_560.sa", print_hash_value);
    transparent_crc(p_1208->g_560.sb, "p_1208->g_560.sb", print_hash_value);
    transparent_crc(p_1208->g_560.sc, "p_1208->g_560.sc", print_hash_value);
    transparent_crc(p_1208->g_560.sd, "p_1208->g_560.sd", print_hash_value);
    transparent_crc(p_1208->g_560.se, "p_1208->g_560.se", print_hash_value);
    transparent_crc(p_1208->g_560.sf, "p_1208->g_560.sf", print_hash_value);
    transparent_crc(p_1208->g_578.x, "p_1208->g_578.x", print_hash_value);
    transparent_crc(p_1208->g_578.y, "p_1208->g_578.y", print_hash_value);
    transparent_crc(p_1208->g_605, "p_1208->g_605", print_hash_value);
    transparent_crc(p_1208->g_646.s0, "p_1208->g_646.s0", print_hash_value);
    transparent_crc(p_1208->g_646.s1, "p_1208->g_646.s1", print_hash_value);
    transparent_crc(p_1208->g_646.s2, "p_1208->g_646.s2", print_hash_value);
    transparent_crc(p_1208->g_646.s3, "p_1208->g_646.s3", print_hash_value);
    transparent_crc(p_1208->g_646.s4, "p_1208->g_646.s4", print_hash_value);
    transparent_crc(p_1208->g_646.s5, "p_1208->g_646.s5", print_hash_value);
    transparent_crc(p_1208->g_646.s6, "p_1208->g_646.s6", print_hash_value);
    transparent_crc(p_1208->g_646.s7, "p_1208->g_646.s7", print_hash_value);
    transparent_crc(p_1208->g_661, "p_1208->g_661", print_hash_value);
    transparent_crc(p_1208->g_673.f0, "p_1208->g_673.f0", print_hash_value);
    transparent_crc(p_1208->g_680.s0, "p_1208->g_680.s0", print_hash_value);
    transparent_crc(p_1208->g_680.s1, "p_1208->g_680.s1", print_hash_value);
    transparent_crc(p_1208->g_680.s2, "p_1208->g_680.s2", print_hash_value);
    transparent_crc(p_1208->g_680.s3, "p_1208->g_680.s3", print_hash_value);
    transparent_crc(p_1208->g_680.s4, "p_1208->g_680.s4", print_hash_value);
    transparent_crc(p_1208->g_680.s5, "p_1208->g_680.s5", print_hash_value);
    transparent_crc(p_1208->g_680.s6, "p_1208->g_680.s6", print_hash_value);
    transparent_crc(p_1208->g_680.s7, "p_1208->g_680.s7", print_hash_value);
    transparent_crc(p_1208->g_681.x, "p_1208->g_681.x", print_hash_value);
    transparent_crc(p_1208->g_681.y, "p_1208->g_681.y", print_hash_value);
    transparent_crc(p_1208->g_689.x, "p_1208->g_689.x", print_hash_value);
    transparent_crc(p_1208->g_689.y, "p_1208->g_689.y", print_hash_value);
    transparent_crc(p_1208->g_689.z, "p_1208->g_689.z", print_hash_value);
    transparent_crc(p_1208->g_689.w, "p_1208->g_689.w", print_hash_value);
    transparent_crc(p_1208->g_723.f0, "p_1208->g_723.f0", print_hash_value);
    transparent_crc(p_1208->g_884.x, "p_1208->g_884.x", print_hash_value);
    transparent_crc(p_1208->g_884.y, "p_1208->g_884.y", print_hash_value);
    transparent_crc(p_1208->g_884.z, "p_1208->g_884.z", print_hash_value);
    transparent_crc(p_1208->g_884.w, "p_1208->g_884.w", print_hash_value);
    transparent_crc(p_1208->g_885.s0, "p_1208->g_885.s0", print_hash_value);
    transparent_crc(p_1208->g_885.s1, "p_1208->g_885.s1", print_hash_value);
    transparent_crc(p_1208->g_885.s2, "p_1208->g_885.s2", print_hash_value);
    transparent_crc(p_1208->g_885.s3, "p_1208->g_885.s3", print_hash_value);
    transparent_crc(p_1208->g_885.s4, "p_1208->g_885.s4", print_hash_value);
    transparent_crc(p_1208->g_885.s5, "p_1208->g_885.s5", print_hash_value);
    transparent_crc(p_1208->g_885.s6, "p_1208->g_885.s6", print_hash_value);
    transparent_crc(p_1208->g_885.s7, "p_1208->g_885.s7", print_hash_value);
    transparent_crc(p_1208->g_885.s8, "p_1208->g_885.s8", print_hash_value);
    transparent_crc(p_1208->g_885.s9, "p_1208->g_885.s9", print_hash_value);
    transparent_crc(p_1208->g_885.sa, "p_1208->g_885.sa", print_hash_value);
    transparent_crc(p_1208->g_885.sb, "p_1208->g_885.sb", print_hash_value);
    transparent_crc(p_1208->g_885.sc, "p_1208->g_885.sc", print_hash_value);
    transparent_crc(p_1208->g_885.sd, "p_1208->g_885.sd", print_hash_value);
    transparent_crc(p_1208->g_885.se, "p_1208->g_885.se", print_hash_value);
    transparent_crc(p_1208->g_885.sf, "p_1208->g_885.sf", print_hash_value);
    transparent_crc(p_1208->g_906.s0, "p_1208->g_906.s0", print_hash_value);
    transparent_crc(p_1208->g_906.s1, "p_1208->g_906.s1", print_hash_value);
    transparent_crc(p_1208->g_906.s2, "p_1208->g_906.s2", print_hash_value);
    transparent_crc(p_1208->g_906.s3, "p_1208->g_906.s3", print_hash_value);
    transparent_crc(p_1208->g_906.s4, "p_1208->g_906.s4", print_hash_value);
    transparent_crc(p_1208->g_906.s5, "p_1208->g_906.s5", print_hash_value);
    transparent_crc(p_1208->g_906.s6, "p_1208->g_906.s6", print_hash_value);
    transparent_crc(p_1208->g_906.s7, "p_1208->g_906.s7", print_hash_value);
    transparent_crc(p_1208->g_908.x, "p_1208->g_908.x", print_hash_value);
    transparent_crc(p_1208->g_908.y, "p_1208->g_908.y", print_hash_value);
    transparent_crc(p_1208->g_914.s0, "p_1208->g_914.s0", print_hash_value);
    transparent_crc(p_1208->g_914.s1, "p_1208->g_914.s1", print_hash_value);
    transparent_crc(p_1208->g_914.s2, "p_1208->g_914.s2", print_hash_value);
    transparent_crc(p_1208->g_914.s3, "p_1208->g_914.s3", print_hash_value);
    transparent_crc(p_1208->g_914.s4, "p_1208->g_914.s4", print_hash_value);
    transparent_crc(p_1208->g_914.s5, "p_1208->g_914.s5", print_hash_value);
    transparent_crc(p_1208->g_914.s6, "p_1208->g_914.s6", print_hash_value);
    transparent_crc(p_1208->g_914.s7, "p_1208->g_914.s7", print_hash_value);
    transparent_crc(p_1208->g_914.s8, "p_1208->g_914.s8", print_hash_value);
    transparent_crc(p_1208->g_914.s9, "p_1208->g_914.s9", print_hash_value);
    transparent_crc(p_1208->g_914.sa, "p_1208->g_914.sa", print_hash_value);
    transparent_crc(p_1208->g_914.sb, "p_1208->g_914.sb", print_hash_value);
    transparent_crc(p_1208->g_914.sc, "p_1208->g_914.sc", print_hash_value);
    transparent_crc(p_1208->g_914.sd, "p_1208->g_914.sd", print_hash_value);
    transparent_crc(p_1208->g_914.se, "p_1208->g_914.se", print_hash_value);
    transparent_crc(p_1208->g_914.sf, "p_1208->g_914.sf", print_hash_value);
    transparent_crc(p_1208->g_915.s0, "p_1208->g_915.s0", print_hash_value);
    transparent_crc(p_1208->g_915.s1, "p_1208->g_915.s1", print_hash_value);
    transparent_crc(p_1208->g_915.s2, "p_1208->g_915.s2", print_hash_value);
    transparent_crc(p_1208->g_915.s3, "p_1208->g_915.s3", print_hash_value);
    transparent_crc(p_1208->g_915.s4, "p_1208->g_915.s4", print_hash_value);
    transparent_crc(p_1208->g_915.s5, "p_1208->g_915.s5", print_hash_value);
    transparent_crc(p_1208->g_915.s6, "p_1208->g_915.s6", print_hash_value);
    transparent_crc(p_1208->g_915.s7, "p_1208->g_915.s7", print_hash_value);
    transparent_crc(p_1208->g_917.s0, "p_1208->g_917.s0", print_hash_value);
    transparent_crc(p_1208->g_917.s1, "p_1208->g_917.s1", print_hash_value);
    transparent_crc(p_1208->g_917.s2, "p_1208->g_917.s2", print_hash_value);
    transparent_crc(p_1208->g_917.s3, "p_1208->g_917.s3", print_hash_value);
    transparent_crc(p_1208->g_917.s4, "p_1208->g_917.s4", print_hash_value);
    transparent_crc(p_1208->g_917.s5, "p_1208->g_917.s5", print_hash_value);
    transparent_crc(p_1208->g_917.s6, "p_1208->g_917.s6", print_hash_value);
    transparent_crc(p_1208->g_917.s7, "p_1208->g_917.s7", print_hash_value);
    transparent_crc(p_1208->g_917.s8, "p_1208->g_917.s8", print_hash_value);
    transparent_crc(p_1208->g_917.s9, "p_1208->g_917.s9", print_hash_value);
    transparent_crc(p_1208->g_917.sa, "p_1208->g_917.sa", print_hash_value);
    transparent_crc(p_1208->g_917.sb, "p_1208->g_917.sb", print_hash_value);
    transparent_crc(p_1208->g_917.sc, "p_1208->g_917.sc", print_hash_value);
    transparent_crc(p_1208->g_917.sd, "p_1208->g_917.sd", print_hash_value);
    transparent_crc(p_1208->g_917.se, "p_1208->g_917.se", print_hash_value);
    transparent_crc(p_1208->g_917.sf, "p_1208->g_917.sf", print_hash_value);
    transparent_crc(p_1208->g_924.f0, "p_1208->g_924.f0", print_hash_value);
    transparent_crc(p_1208->g_943.s0, "p_1208->g_943.s0", print_hash_value);
    transparent_crc(p_1208->g_943.s1, "p_1208->g_943.s1", print_hash_value);
    transparent_crc(p_1208->g_943.s2, "p_1208->g_943.s2", print_hash_value);
    transparent_crc(p_1208->g_943.s3, "p_1208->g_943.s3", print_hash_value);
    transparent_crc(p_1208->g_943.s4, "p_1208->g_943.s4", print_hash_value);
    transparent_crc(p_1208->g_943.s5, "p_1208->g_943.s5", print_hash_value);
    transparent_crc(p_1208->g_943.s6, "p_1208->g_943.s6", print_hash_value);
    transparent_crc(p_1208->g_943.s7, "p_1208->g_943.s7", print_hash_value);
    transparent_crc(p_1208->g_957.f0, "p_1208->g_957.f0", print_hash_value);
    transparent_crc(p_1208->g_979.x, "p_1208->g_979.x", print_hash_value);
    transparent_crc(p_1208->g_979.y, "p_1208->g_979.y", print_hash_value);
    transparent_crc(p_1208->g_992.s0, "p_1208->g_992.s0", print_hash_value);
    transparent_crc(p_1208->g_992.s1, "p_1208->g_992.s1", print_hash_value);
    transparent_crc(p_1208->g_992.s2, "p_1208->g_992.s2", print_hash_value);
    transparent_crc(p_1208->g_992.s3, "p_1208->g_992.s3", print_hash_value);
    transparent_crc(p_1208->g_992.s4, "p_1208->g_992.s4", print_hash_value);
    transparent_crc(p_1208->g_992.s5, "p_1208->g_992.s5", print_hash_value);
    transparent_crc(p_1208->g_992.s6, "p_1208->g_992.s6", print_hash_value);
    transparent_crc(p_1208->g_992.s7, "p_1208->g_992.s7", print_hash_value);
    transparent_crc(p_1208->g_992.s8, "p_1208->g_992.s8", print_hash_value);
    transparent_crc(p_1208->g_992.s9, "p_1208->g_992.s9", print_hash_value);
    transparent_crc(p_1208->g_992.sa, "p_1208->g_992.sa", print_hash_value);
    transparent_crc(p_1208->g_992.sb, "p_1208->g_992.sb", print_hash_value);
    transparent_crc(p_1208->g_992.sc, "p_1208->g_992.sc", print_hash_value);
    transparent_crc(p_1208->g_992.sd, "p_1208->g_992.sd", print_hash_value);
    transparent_crc(p_1208->g_992.se, "p_1208->g_992.se", print_hash_value);
    transparent_crc(p_1208->g_992.sf, "p_1208->g_992.sf", print_hash_value);
    transparent_crc(p_1208->g_1006, "p_1208->g_1006", print_hash_value);
    transparent_crc(p_1208->g_1055.x, "p_1208->g_1055.x", print_hash_value);
    transparent_crc(p_1208->g_1055.y, "p_1208->g_1055.y", print_hash_value);
    transparent_crc(p_1208->g_1055.z, "p_1208->g_1055.z", print_hash_value);
    transparent_crc(p_1208->g_1055.w, "p_1208->g_1055.w", print_hash_value);
    transparent_crc(p_1208->g_1056.x, "p_1208->g_1056.x", print_hash_value);
    transparent_crc(p_1208->g_1056.y, "p_1208->g_1056.y", print_hash_value);
    transparent_crc(p_1208->g_1058.x, "p_1208->g_1058.x", print_hash_value);
    transparent_crc(p_1208->g_1058.y, "p_1208->g_1058.y", print_hash_value);
    transparent_crc(p_1208->g_1058.z, "p_1208->g_1058.z", print_hash_value);
    transparent_crc(p_1208->g_1058.w, "p_1208->g_1058.w", print_hash_value);
    transparent_crc(p_1208->g_1184.s0, "p_1208->g_1184.s0", print_hash_value);
    transparent_crc(p_1208->g_1184.s1, "p_1208->g_1184.s1", print_hash_value);
    transparent_crc(p_1208->g_1184.s2, "p_1208->g_1184.s2", print_hash_value);
    transparent_crc(p_1208->g_1184.s3, "p_1208->g_1184.s3", print_hash_value);
    transparent_crc(p_1208->g_1184.s4, "p_1208->g_1184.s4", print_hash_value);
    transparent_crc(p_1208->g_1184.s5, "p_1208->g_1184.s5", print_hash_value);
    transparent_crc(p_1208->g_1184.s6, "p_1208->g_1184.s6", print_hash_value);
    transparent_crc(p_1208->g_1184.s7, "p_1208->g_1184.s7", print_hash_value);
    transparent_crc(p_1208->g_1186.x, "p_1208->g_1186.x", print_hash_value);
    transparent_crc(p_1208->g_1186.y, "p_1208->g_1186.y", print_hash_value);
    transparent_crc(p_1208->g_1186.z, "p_1208->g_1186.z", print_hash_value);
    transparent_crc(p_1208->g_1186.w, "p_1208->g_1186.w", print_hash_value);
    transparent_crc(p_1208->g_1192.s0, "p_1208->g_1192.s0", print_hash_value);
    transparent_crc(p_1208->g_1192.s1, "p_1208->g_1192.s1", print_hash_value);
    transparent_crc(p_1208->g_1192.s2, "p_1208->g_1192.s2", print_hash_value);
    transparent_crc(p_1208->g_1192.s3, "p_1208->g_1192.s3", print_hash_value);
    transparent_crc(p_1208->g_1192.s4, "p_1208->g_1192.s4", print_hash_value);
    transparent_crc(p_1208->g_1192.s5, "p_1208->g_1192.s5", print_hash_value);
    transparent_crc(p_1208->g_1192.s6, "p_1208->g_1192.s6", print_hash_value);
    transparent_crc(p_1208->g_1192.s7, "p_1208->g_1192.s7", print_hash_value);
    transparent_crc(p_1208->g_1192.s8, "p_1208->g_1192.s8", print_hash_value);
    transparent_crc(p_1208->g_1192.s9, "p_1208->g_1192.s9", print_hash_value);
    transparent_crc(p_1208->g_1192.sa, "p_1208->g_1192.sa", print_hash_value);
    transparent_crc(p_1208->g_1192.sb, "p_1208->g_1192.sb", print_hash_value);
    transparent_crc(p_1208->g_1192.sc, "p_1208->g_1192.sc", print_hash_value);
    transparent_crc(p_1208->g_1192.sd, "p_1208->g_1192.sd", print_hash_value);
    transparent_crc(p_1208->g_1192.se, "p_1208->g_1192.se", print_hash_value);
    transparent_crc(p_1208->g_1192.sf, "p_1208->g_1192.sf", print_hash_value);
    transparent_crc(p_1208->g_1205.f0, "p_1208->g_1205.f0", print_hash_value);
    transparent_crc(p_1208->v_collective, "p_1208->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 85; i++)
            transparent_crc(p_1208->g_special_values[i + 85 * get_linear_group_id()], "p_1208->g_special_values[i + 85 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 85; i++)
            transparent_crc(p_1208->l_special_values[i], "p_1208->l_special_values[i]", print_hash_value);
    transparent_crc(p_1208->l_comm_values[get_linear_local_id()], "p_1208->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1208->g_comm_values[get_linear_group_id() * 164 + get_linear_local_id()], "p_1208->g_comm_values[get_linear_group_id() * 164 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
