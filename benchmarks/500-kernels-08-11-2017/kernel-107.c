// --atomics 5 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 24,10,34 -l 2,5,17
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

__constant uint32_t permutations[10][170] = {
{151,166,25,26,18,112,69,37,138,68,58,102,162,95,120,84,126,35,64,161,155,71,165,42,7,60,1,144,44,62,21,87,56,3,72,76,6,9,85,53,57,157,41,86,127,140,153,91,15,2,31,45,119,125,67,123,70,33,36,39,13,152,148,135,55,160,34,145,107,149,139,108,24,79,167,10,169,159,163,93,136,118,137,19,130,98,43,103,113,142,81,78,0,22,134,75,116,168,46,94,48,129,122,38,28,100,128,52,51,54,109,117,59,5,65,47,11,111,4,124,88,133,164,101,99,154,14,105,16,83,97,141,8,96,74,121,63,147,40,156,20,61,115,82,106,150,50,73,32,77,23,104,29,143,66,30,158,146,17,49,90,12,92,89,131,114,110,27,80,132}, // permutation 0
{114,110,85,46,16,81,157,45,50,147,47,60,84,26,111,78,34,88,72,98,166,163,158,83,116,105,89,169,167,125,118,148,48,32,103,146,104,5,94,108,130,86,107,150,129,35,77,121,24,55,28,15,68,149,51,119,76,117,102,69,82,128,27,126,140,139,29,87,39,99,38,1,162,3,161,56,91,131,74,79,37,4,14,36,138,8,65,109,49,20,22,61,134,120,112,101,142,53,25,33,165,42,132,143,123,92,6,2,137,71,93,151,124,54,62,30,23,160,57,7,31,152,168,106,113,10,52,21,9,127,95,67,75,133,145,155,136,41,18,19,73,0,64,115,17,96,66,12,156,144,44,135,13,90,100,80,153,59,154,122,11,63,97,43,40,159,164,141,58,70}, // permutation 1
{80,10,21,46,3,33,167,97,6,91,99,133,4,73,114,15,127,110,89,77,129,157,66,161,11,18,160,151,107,148,9,134,100,83,57,20,131,95,61,105,27,86,141,139,85,69,7,19,71,123,37,94,147,51,109,1,22,54,13,76,8,166,87,119,31,122,153,81,98,34,136,26,40,53,108,62,67,64,58,128,36,149,12,28,32,56,140,116,55,145,65,126,118,90,154,125,155,43,5,0,70,102,63,72,79,44,106,162,137,39,74,92,60,104,14,47,48,25,29,146,35,17,158,16,115,45,163,38,75,111,142,2,135,168,42,41,103,121,78,24,156,88,152,143,84,68,101,82,112,169,165,113,30,132,124,50,49,120,96,52,159,59,117,138,150,144,130,164,93,23}, // permutation 2
{15,155,104,78,81,161,101,74,135,41,72,22,7,13,136,140,131,76,24,79,53,150,75,129,123,132,8,50,44,144,94,168,23,93,147,85,49,137,151,103,33,17,51,116,61,67,16,149,108,165,29,156,12,69,86,90,2,62,14,105,109,158,25,64,128,91,66,102,106,154,38,133,37,126,54,112,122,169,70,36,121,56,45,18,107,58,119,43,0,84,34,31,42,88,80,57,113,3,114,148,40,146,167,166,96,11,124,63,87,134,30,68,55,118,27,157,32,21,6,130,97,111,92,1,9,47,35,83,60,39,98,59,152,95,71,142,19,120,5,141,48,117,127,145,82,110,100,143,20,115,139,138,160,65,4,162,77,26,28,73,125,52,164,99,46,10,89,163,159,153}, // permutation 3
{35,117,136,147,19,65,158,121,68,75,57,152,120,126,38,168,51,87,143,145,34,28,79,102,9,74,61,15,92,165,55,113,44,162,146,60,125,81,142,99,54,100,27,132,163,78,53,1,8,112,17,56,26,86,3,36,169,71,134,31,111,157,52,4,32,108,156,116,82,23,10,40,129,130,47,124,154,77,140,72,97,84,73,29,141,90,48,91,110,161,95,119,13,85,106,11,20,5,144,69,150,98,118,155,58,131,122,93,89,0,148,103,101,14,160,135,43,24,64,76,127,39,70,18,49,104,50,88,42,16,105,96,12,62,59,164,133,22,159,6,63,21,2,7,149,83,33,66,115,123,109,153,167,41,80,94,45,128,166,139,114,67,138,37,151,46,137,30,25,107}, // permutation 4
{24,157,166,44,137,60,30,100,148,10,91,168,20,97,58,76,31,51,150,155,121,131,162,70,112,140,114,13,92,146,71,164,88,161,39,81,19,123,77,98,160,126,26,113,93,56,69,110,87,120,143,25,132,85,159,139,57,127,129,62,134,6,167,54,158,116,151,117,40,133,21,83,96,156,101,73,12,122,53,47,68,64,118,67,72,7,34,82,42,80,49,41,14,149,1,29,153,43,22,84,145,37,48,124,66,65,52,79,128,111,102,35,11,2,163,135,4,106,33,9,90,147,27,32,23,74,46,45,94,108,103,125,50,165,5,86,115,130,169,61,95,142,18,89,17,105,16,38,141,15,107,152,36,78,63,75,154,59,144,138,99,28,136,104,55,0,3,119,8,109}, // permutation 5
{126,35,47,57,24,156,5,31,131,129,162,84,136,76,43,53,80,168,63,101,72,90,112,62,94,40,166,2,36,159,13,46,149,12,148,81,82,37,160,69,143,123,65,155,10,124,105,167,60,130,95,85,115,20,0,122,99,48,67,164,169,33,27,104,74,137,18,32,116,92,93,3,64,8,107,21,73,125,150,26,106,68,14,28,55,103,134,163,144,102,45,71,140,19,87,97,83,41,39,161,30,118,114,147,117,52,119,11,142,135,111,86,109,128,158,38,6,59,138,15,121,91,70,133,165,120,77,58,108,54,145,16,79,29,154,78,151,22,44,110,113,153,9,17,100,88,139,1,23,34,141,98,127,152,157,132,89,25,42,66,51,96,146,4,49,56,7,61,75,50}, // permutation 6
{145,84,35,92,117,1,112,58,96,39,120,103,70,135,137,122,153,159,72,110,111,105,2,20,167,37,47,118,149,32,114,68,93,121,71,61,4,162,154,79,91,17,86,76,82,74,40,81,28,75,150,73,130,31,144,134,161,124,10,80,108,140,9,50,157,43,23,143,63,18,69,147,66,139,169,78,109,94,113,97,52,14,146,101,27,148,54,41,62,16,95,25,133,129,125,115,152,99,0,77,123,165,100,106,33,34,6,42,36,141,55,65,127,88,166,116,8,132,60,164,136,57,51,168,3,160,128,102,98,13,21,22,26,138,87,107,48,67,156,46,24,104,163,158,49,85,53,90,64,11,59,155,89,131,56,30,45,38,126,19,7,142,29,12,15,83,44,119,5,151}, // permutation 7
{159,107,143,161,126,162,47,148,150,40,81,38,13,26,67,15,123,29,97,88,24,43,142,54,21,90,32,129,164,0,144,120,23,74,111,138,55,95,156,113,103,145,16,20,19,77,154,124,59,82,93,84,108,91,66,118,151,166,94,153,51,50,11,30,110,87,5,98,58,128,73,157,114,46,41,130,2,106,119,76,18,92,34,63,141,72,121,49,56,105,65,6,167,35,7,122,140,22,12,3,37,165,85,48,168,100,136,71,69,68,115,28,42,117,70,17,83,139,133,109,75,132,53,45,127,137,25,135,9,101,104,89,44,160,152,155,31,149,131,57,80,169,102,10,14,99,64,125,147,61,86,163,78,39,8,60,62,146,1,36,4,52,116,79,33,27,112,134,158,96}, // permutation 8
{41,149,143,130,21,52,36,122,161,27,159,168,95,131,139,8,74,156,85,80,166,30,29,76,54,14,1,83,117,167,72,47,146,123,115,15,162,64,140,42,22,100,106,145,147,5,62,59,91,25,70,126,4,99,109,56,28,135,93,113,144,133,87,92,104,148,120,142,165,9,58,154,116,77,82,114,81,160,103,50,169,18,71,119,23,112,164,43,73,132,151,89,35,11,163,158,88,136,32,125,66,90,61,101,2,46,63,16,152,10,0,19,108,67,121,98,24,40,53,96,128,37,102,129,107,79,138,13,26,137,105,65,31,55,68,57,44,48,49,20,84,33,127,34,75,141,124,12,110,3,7,111,60,78,150,134,38,39,94,51,86,153,17,6,155,157,69,118,45,97} // permutation 9
};

// Seed: 1158758730

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2[7][8][4];
    volatile int32_t g_3;
    int32_t g_4;
    uint8_t g_17;
    uint8_t g_29;
    uint8_t *g_28;
    VECTOR(int16_t, 4) g_39;
    int32_t g_44;
    int32_t * volatile g_43;
    int32_t *g_55;
    VECTOR(int32_t, 4) g_57;
    uint8_t g_67[7];
    uint8_t *g_102;
    VECTOR(int32_t, 8) g_103;
    int16_t *g_117[2][8];
    VECTOR(uint8_t, 8) g_130;
    VECTOR(int8_t, 16) g_133;
    int32_t **g_139;
    volatile VECTOR(uint16_t, 8) g_156;
    VECTOR(uint64_t, 8) g_157;
    VECTOR(uint64_t, 4) g_177;
    VECTOR(int32_t, 2) g_192;
    uint16_t g_196;
    volatile VECTOR(int8_t, 4) g_202;
    volatile VECTOR(uint16_t, 8) g_203;
    VECTOR(uint16_t, 16) g_209;
    VECTOR(uint16_t, 2) g_210;
    VECTOR(int8_t, 8) g_220;
    VECTOR(int32_t, 4) g_221;
    uint8_t g_229;
    uint16_t *g_231;
    VECTOR(uint32_t, 8) g_262;
    volatile VECTOR(uint16_t, 4) g_281;
    volatile VECTOR(uint64_t, 4) g_299;
    volatile uint16_t g_316;
    volatile VECTOR(int8_t, 2) g_330;
    volatile VECTOR(uint64_t, 2) g_349;
    VECTOR(int64_t, 4) g_351;
    uint64_t *g_354;
    VECTOR(int64_t, 4) g_394;
    volatile VECTOR(uint64_t, 8) g_395;
    volatile uint64_t *g_411[6];
    VECTOR(uint8_t, 2) g_412;
    volatile VECTOR(uint8_t, 4) g_413;
    VECTOR(uint16_t, 4) g_428;
    VECTOR(uint16_t, 2) g_433;
    uint64_t g_498;
    volatile VECTOR(int16_t, 16) g_506;
    volatile VECTOR(uint8_t, 2) g_530;
    VECTOR(uint16_t, 8) g_566;
    VECTOR(int32_t, 8) g_589;
    volatile VECTOR(int16_t, 4) g_595;
    int32_t g_639;
    volatile VECTOR(uint32_t, 2) g_744;
    int64_t g_766[7];
    int16_t g_774;
    uint32_t g_776;
    VECTOR(int64_t, 16) g_788;
    volatile VECTOR(int64_t, 8) g_799;
    volatile VECTOR(int64_t, 2) g_801;
    int64_t *g_826;
    int64_t * volatile *g_825;
    int16_t g_834;
    volatile VECTOR(int64_t, 2) g_840;
    VECTOR(int64_t, 4) g_852;
    volatile VECTOR(int64_t, 4) g_854;
    volatile VECTOR(int64_t, 2) g_855;
    VECTOR(int8_t, 16) g_860;
    volatile VECTOR(int16_t, 16) g_889;
    volatile VECTOR(int16_t, 2) g_890;
    volatile VECTOR(int16_t, 8) g_893;
    volatile VECTOR(int16_t, 2) g_894;
    volatile VECTOR(int16_t, 2) g_896;
    volatile VECTOR(uint32_t, 16) g_901;
    VECTOR(int32_t, 2) g_1009;
    volatile VECTOR(int64_t, 2) g_1015;
    volatile uint32_t g_1024;
    volatile uint32_t g_1025;
    volatile uint32_t * volatile g_1023[4];
    volatile uint32_t * volatile *g_1022;
    volatile VECTOR(int32_t, 2) g_1028;
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
uint64_t  func_1(struct S0 * p_1035);
int32_t  func_7(int32_t  p_8, struct S0 * p_1035);
int8_t  func_18(int64_t  p_19, uint8_t * p_20, struct S0 * p_1035);
uint8_t  func_23(uint8_t * p_24, uint8_t * p_25, uint8_t * p_26, uint8_t * p_27, struct S0 * p_1035);
uint8_t * func_30(uint8_t * p_31, uint8_t * p_32, struct S0 * p_1035);
uint8_t * func_33(uint32_t  p_34, int16_t  p_35, struct S0 * p_1035);
uint8_t * func_49(uint32_t  p_50, int32_t * p_51, int64_t  p_52, struct S0 * p_1035);
uint16_t  func_77(int16_t * p_78, uint64_t  p_79, struct S0 * p_1035);
int16_t * func_80(int32_t  p_81, int16_t * p_82, struct S0 * p_1035);
uint16_t  func_85(int16_t * p_86, int16_t * p_87, struct S0 * p_1035);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1035->g_4 p_1035->g_139 p_1035->g_55 p_1035->g_220 p_1035->g_57 p_1035->g_28 p_1035->g_639 p_1035->g_130 p_1035->g_192 p_1035->g_196 p_1035->g_177 p_1035->g_29 p_1035->g_1009 p_1035->g_1015 p_1035->g_229 p_1035->g_1022 p_1035->g_412 p_1035->g_860 p_1035->g_1028 p_1035->g_43 p_1035->g_44
 * writes: p_1035->g_4 p_1035->g_29 p_1035->g_130 p_1035->g_177 p_1035->g_55 p_1035->g_196
 */
uint64_t  func_1(struct S0 * p_1035)
{ /* block id: 4 */
    uint16_t l_15 = 0x8777L;
    int32_t l_905 = (-8L);
    VECTOR(int16_t, 2) l_937 = (VECTOR(int16_t, 2))(0x6CFAL, 1L);
    uint32_t l_954 = 0xD50C784DL;
    int32_t *l_955 = (void*)0;
    uint64_t *l_968[4][4][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint8_t *l_969[5][9][5] = {{{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17}},{{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17}},{{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17}},{{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17}},{{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17},{(void*)0,&p_1035->g_17,&p_1035->g_17,(void*)0,&p_1035->g_17}}};
    VECTOR(uint32_t, 16) l_980 = (VECTOR(uint32_t, 16))(0x3BBBD00FL, (VECTOR(uint32_t, 4))(0x3BBBD00FL, (VECTOR(uint32_t, 2))(0x3BBBD00FL, 0x71BE653EL), 0x71BE653EL), 0x71BE653EL, 0x3BBBD00FL, 0x71BE653EL, (VECTOR(uint32_t, 2))(0x3BBBD00FL, 0x71BE653EL), (VECTOR(uint32_t, 2))(0x3BBBD00FL, 0x71BE653EL), 0x3BBBD00FL, 0x71BE653EL, 0x3BBBD00FL, 0x71BE653EL);
    uint32_t l_981 = 0x6550B162L;
    uint8_t l_990[10][2][10] = {{{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL},{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL}},{{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL},{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL}},{{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL},{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL}},{{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL},{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL}},{{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL},{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL}},{{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL},{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL}},{{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL},{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL}},{{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL},{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL}},{{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL},{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL}},{{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL},{248UL,0x84L,3UL,0UL,0x43L,0xA2L,246UL,255UL,0x84L,255UL}}};
    VECTOR(uint64_t, 2) l_1000 = (VECTOR(uint64_t, 2))(0x1C55F49A814495BDL, 0x0B33929ED954884FL);
    uint32_t **l_1021 = (void*)0;
    int i, j, k;
    for (p_1035->g_4 = 10; (p_1035->g_4 >= (-25)); --p_1035->g_4)
    { /* block id: 7 */
        uint8_t *l_16 = &p_1035->g_17;
        int16_t *l_38 = (void*)0;
        int16_t *l_40 = (void*)0;
        int16_t *l_41[5][8][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_42 = 8L;
        int64_t *l_734 = (void*)0;
        int64_t *l_735 = (void*)0;
        int64_t *l_736 = (void*)0;
        int64_t *l_737 = (void*)0;
        int64_t *l_738 = (void*)0;
        int64_t *l_739 = (void*)0;
        int64_t *l_740[6][10][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_741 = 0L;
        int32_t *l_904[8][1][3] = {{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}}};
        int32_t *l_915 = (void*)0;
        uint32_t *l_942 = (void*)0;
        uint32_t *l_943[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int64_t l_952 = (-1L);
        int8_t *l_953 = (void*)0;
        int i, j, k;
        (1 + 1);
    }
    l_955 = (*p_1035->g_139);
    if ((((safe_add_func_uint64_t_u_u(0xB136BE30A6A2492FL, (safe_mul_func_int8_t_s_s(((*l_955) & (p_1035->g_220.s1 , (*l_955))), ((*l_955) <= (*l_955)))))) ^ ((*l_955) < (*l_955))) <= (safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((p_1035->g_130.s4 |= ((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x2F3F988CL, (-1L))).yxxx)), 0x31E6D0F3L, (-1L), ((VECTOR(int32_t, 8))((-1L), ((((((GROUP_DIVERGE(2, 1) || ((*p_1035->g_28) = (safe_mod_func_uint32_t_u_u((((void*)0 != l_968[0][1][3]) <= p_1035->g_57.y), (*l_955))))) == p_1035->g_639) <= 0x21FCC2BFL) < FAKE_DIVERGE(p_1035->global_2_offset, get_global_id(2), 10)) , &p_1035->g_498) == &p_1035->g_498), ((VECTOR(int32_t, 2))(0x309D45F3L)), 0x29FD3A24L, (*l_955), (-6L), 0x4784FFF1L)), (-3L), 0x2275C00CL)).s52, ((VECTOR(int32_t, 2))(0x57CE4AC2L))))))).yxyyyxyxxyyyxxxy, ((VECTOR(int32_t, 16))(8L))))).s9e30, ((VECTOR(int32_t, 4))((-3L))), ((VECTOR(int32_t, 4))(0L))))).xyxwyxzx, ((VECTOR(int32_t, 8))((-5L)))))).s02, ((VECTOR(int32_t, 2))(0x022611A4L)), ((VECTOR(int32_t, 2))((-3L)))))))).even && (-5L)) >= 0L)), (*l_955))), 0x407C3ED9L)), (*l_955)))))
    { /* block id: 397 */
        int8_t *l_974[9][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        int32_t l_975 = (-8L);
        VECTOR(uint32_t, 2) l_978 = (VECTOR(uint32_t, 2))(0UL, 0x5FD0F5E0L);
        VECTOR(uint32_t, 8) l_979 = (VECTOR(uint32_t, 8))(0x3395B470L, (VECTOR(uint32_t, 4))(0x3395B470L, (VECTOR(uint32_t, 2))(0x3395B470L, 4294967295UL), 4294967295UL), 4294967295UL, 0x3395B470L, 4294967295UL);
        uint32_t l_991 = 3UL;
        int32_t *l_992 = &l_905;
        int i, j, k;
        (*l_992) &= (((safe_add_func_int8_t_s_s(0x65L, (((l_975 &= (safe_rshift_func_int8_t_s_u((p_1035->g_192.x == (*l_955)), 2))) <= ((*p_1035->g_28) = (*l_955))) > ((!(((((VECTOR(int32_t, 2))(8L, (-7L))).even != ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_978.yxxy)), 0x508ED8BBL, 4294967295UL, 4294967295UL, 0UL)).s0 , ((VECTOR(uint32_t, 8))(l_979.s31347215)).s3) == ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_980.s23)).xyxyxxyx)).s7)) <= l_981) , (safe_div_func_int64_t_s_s((-1L), (*l_955))))) , ((0L > ((safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((!p_1035->g_196) != 0x74L), 0x8559L)), 1UL)), l_990[1][0][1])) | l_991)) > l_979.s2))))) ^ 0x1E39L) != (*l_955));
        if ((atomic_inc(&p_1035->g_atomic_input[5 * get_linear_group_id() + 1]) == 9))
        { /* block id: 402 */
            int16_t l_993 = 0x4794L;
            uint16_t l_994 = 6UL;
            VECTOR(uint32_t, 2) l_995 = (VECTOR(uint32_t, 2))(0x5644D7D3L, 0x4E79B284L);
            int32_t l_999 = 0x63ADF70AL;
            int32_t *l_998 = &l_999;
            int i;
            l_994 &= l_993;
            l_995.y++;
            l_998 = (void*)0;
            unsigned int result = 0;
            result += l_993;
            result += l_994;
            result += l_995.y;
            result += l_995.x;
            result += l_999;
            atomic_add(&p_1035->g_special_values[5 * get_linear_group_id() + 1], result);
        }
        else
        { /* block id: 406 */
            (1 + 1);
        }
    }
    else
    { /* block id: 409 */
        uint16_t **l_1002 = &p_1035->g_231;
        uint16_t ***l_1001 = &l_1002;
        VECTOR(int64_t, 4) l_1016 = (VECTOR(int64_t, 4))(0x097FD14869DA5F10L, (VECTOR(int64_t, 2))(0x097FD14869DA5F10L, 0x735E5D4A795E86F9L), 0x735E5D4A795E86F9L);
        uint32_t l_1026 = 5UL;
        int32_t l_1027 = (-1L);
        int32_t *l_1029 = (void*)0;
        int i;
        (*p_1035->g_139) = (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 2))(l_1000.xy)).xxxyxxxy))).s3, (((((*l_1001) = &p_1035->g_231) == &p_1035->g_231) >= (*l_955)) , ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(18446744073709551611UL, (p_1035->g_177.x++), (((*l_955) || (safe_mul_func_uint8_t_u_u((*p_1035->g_28), (safe_sub_func_int64_t_s_s(0x15CB676AFD1F84FCL, (((VECTOR(int32_t, 8))(p_1035->g_1009.yxxxyxyy)).s0 , ((0x3D87B30A3159B36BL && ((l_1027 ^= (safe_unary_minus_func_uint16_t_u((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((~((VECTOR(int64_t, 4))(p_1035->g_1015.yxyy)).x) == (((VECTOR(int64_t, 8))(l_1016.xzxywwxx)).s1 && ((safe_div_func_uint64_t_u_u(((*l_955) = (((safe_add_func_uint64_t_u_u(p_1035->g_229, ((((l_1021 != p_1035->g_1022) ^ l_1026) > l_1026) & (-2L)))) >= 0x3242L) && l_1026)), 0x34406647C01C0297L)) , l_1026))), p_1035->g_412.x)) > (*p_1035->g_28)), p_1035->g_860.sd))))) , 0x11FDDE9DDDD402E2L)) == l_1026))))))) <= 1UL), (*l_955), 0x56FCA0B791BD8CB3L, ((VECTOR(uint64_t, 8))(0xF5987D357EA505DAL)), 0x112611EF23045D51L, 3UL, 0x1F5A7A1D27A11EFBL)).sb032)).y), ((VECTOR(uint64_t, 4))(0x1BE5D20694D0B96BL)), 0x2F64FE8D3B261657L, 18446744073709551615UL)).s3 , (*p_1035->g_139));
        (*p_1035->g_55) ^= ((VECTOR(int32_t, 16))(p_1035->g_1028.yyyxxyxxyyxyyxyy)).se;
        (*p_1035->g_139) = (l_1029 = (*p_1035->g_139));
        for (p_1035->g_196 = 0; (p_1035->g_196 == 54); ++p_1035->g_196)
        { /* block id: 420 */
            uint8_t l_1032 = 0UL;
            l_1032--;
            if ((*p_1035->g_43))
                continue;
            (*p_1035->g_139) = (*p_1035->g_139);
        }
    }
    return (*l_955);
}


/* ------------------------------------------ */
/* 
 * reads : p_1035->g_139 p_1035->g_55
 * writes: p_1035->g_55
 */
int32_t  func_7(int32_t  p_8, struct S0 * p_1035)
{ /* block id: 361 */
    int16_t l_906 = 0x2963L;
    int32_t l_907 = 1L;
    int32_t *l_908 = (void*)0;
    int32_t *l_909 = &l_907;
    int32_t l_910 = 0L;
    int32_t *l_911[3][1][5] = {{{&p_1035->g_44,&p_1035->g_44,&p_1035->g_44,&p_1035->g_44,&p_1035->g_44}},{{&p_1035->g_44,&p_1035->g_44,&p_1035->g_44,&p_1035->g_44,&p_1035->g_44}},{{&p_1035->g_44,&p_1035->g_44,&p_1035->g_44,&p_1035->g_44,&p_1035->g_44}}};
    uint64_t l_912 = 0xE7C2AF278A90E2DBL;
    int i, j, k;
    l_906 &= p_8;
    --l_912;
    (*p_1035->g_139) = &l_910;
    (**p_1035->g_139) ^= 0x6CF8F5E1L;
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_1035->g_744 p_1035->g_506 p_1035->g_196 p_1035->g_139 p_1035->g_44 p_1035->g_776 p_1035->g_788 p_1035->g_799 p_1035->g_801 p_1035->g_262 p_1035->g_351 p_1035->g_28 p_1035->g_29 p_1035->g_55 p_1035->g_202 p_1035->g_825 p_1035->g_157 p_1035->g_840 p_1035->g_498 p_1035->g_43 p_1035->g_852 p_1035->g_854 p_1035->g_855 p_1035->g_860 p_1035->g_209 p_1035->g_889 p_1035->g_890 p_1035->g_893 p_1035->g_894 p_1035->g_896 p_1035->g_39 p_1035->g_901
 * writes: p_1035->g_55 p_1035->g_44 p_1035->g_776 p_1035->g_262 p_1035->g_29 p_1035->g_766 p_1035->g_157 p_1035->g_834 p_1035->g_498 p_1035->g_209
 */
int8_t  func_18(int64_t  p_19, uint8_t * p_20, struct S0 * p_1035)
{ /* block id: 321 */
    uint8_t l_748[2][2][6] = {{{4UL,0x85L,4UL,4UL,0x85L,4UL},{4UL,0x85L,4UL,4UL,0x85L,4UL}},{{4UL,0x85L,4UL,4UL,0x85L,4UL},{4UL,0x85L,4UL,4UL,0x85L,4UL}}};
    int16_t *l_751 = (void*)0;
    int16_t *l_752[4][5][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    int32_t l_753 = 0x2A33A058L;
    int64_t *l_756 = (void*)0;
    int64_t *l_757 = (void*)0;
    int64_t *l_758 = (void*)0;
    int64_t *l_759 = (void*)0;
    int64_t *l_760 = (void*)0;
    int64_t *l_761 = (void*)0;
    int64_t *l_762 = (void*)0;
    int32_t l_763 = (-1L);
    int32_t l_764 = (-4L);
    int64_t *l_765[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_767[3];
    VECTOR(int64_t, 16) l_792 = (VECTOR(int64_t, 16))(0x5C9151848BAA2B8FL, (VECTOR(int64_t, 4))(0x5C9151848BAA2B8FL, (VECTOR(int64_t, 2))(0x5C9151848BAA2B8FL, 0x5E7B38871C24283AL), 0x5E7B38871C24283AL), 0x5E7B38871C24283AL, 0x5C9151848BAA2B8FL, 0x5E7B38871C24283AL, (VECTOR(int64_t, 2))(0x5C9151848BAA2B8FL, 0x5E7B38871C24283AL), (VECTOR(int64_t, 2))(0x5C9151848BAA2B8FL, 0x5E7B38871C24283AL), 0x5C9151848BAA2B8FL, 0x5E7B38871C24283AL, 0x5C9151848BAA2B8FL, 0x5E7B38871C24283AL);
    VECTOR(int32_t, 16) l_802 = (VECTOR(int32_t, 16))(0x1A4AFB3BL, (VECTOR(int32_t, 4))(0x1A4AFB3BL, (VECTOR(int32_t, 2))(0x1A4AFB3BL, 7L), 7L), 7L, 0x1A4AFB3BL, 7L, (VECTOR(int32_t, 2))(0x1A4AFB3BL, 7L), (VECTOR(int32_t, 2))(0x1A4AFB3BL, 7L), 0x1A4AFB3BL, 7L, 0x1A4AFB3BL, 7L);
    VECTOR(int16_t, 16) l_817 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-8L)), (-8L)), (-8L), 0L, (-8L), (VECTOR(int16_t, 2))(0L, (-8L)), (VECTOR(int16_t, 2))(0L, (-8L)), 0L, (-8L), 0L, (-8L));
    uint32_t l_821 = 0x89508750L;
    uint64_t l_823 = 0x1CDCE1C19CEF4287L;
    int32_t l_827 = 5L;
    VECTOR(int64_t, 8) l_853 = (VECTOR(int64_t, 8))(0x22A5DD5F520416A0L, (VECTOR(int64_t, 4))(0x22A5DD5F520416A0L, (VECTOR(int64_t, 2))(0x22A5DD5F520416A0L, 0x3A9F09F9C0018812L), 0x3A9F09F9C0018812L), 0x3A9F09F9C0018812L, 0x22A5DD5F520416A0L, 0x3A9F09F9C0018812L);
    VECTOR(int8_t, 8) l_859 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
    int32_t *l_873 = &l_763;
    uint8_t l_878[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    VECTOR(int16_t, 16) l_891 = (VECTOR(int16_t, 16))(0x7F42L, (VECTOR(int16_t, 4))(0x7F42L, (VECTOR(int16_t, 2))(0x7F42L, 0L), 0L), 0L, 0x7F42L, 0L, (VECTOR(int16_t, 2))(0x7F42L, 0L), (VECTOR(int16_t, 2))(0x7F42L, 0L), 0x7F42L, 0L, 0x7F42L, 0L);
    uint16_t l_903 = 65530UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_767[i] = 0L;
    (*p_1035->g_139) = ((l_767[1] &= (safe_add_func_int16_t_s_s((~(p_19 > 0UL)), (((l_764 &= (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 8))(p_1035->g_744.xyxyyxyx)).s0046617323276725, ((VECTOR(uint32_t, 8))(((safe_unary_minus_func_int8_t_s((safe_rshift_func_uint16_t_u_u(l_748[1][1][3], l_748[0][0][0])))) == ((l_763 = (p_19 , ((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((((((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))((((safe_add_func_int16_t_s_s((l_753 ^= l_748[0][0][1]), 1UL)) && 0UL) || (safe_mul_func_int16_t_s_s(l_748[1][1][3], 8L))), ((VECTOR(int32_t, 2))(0x747B7E33L)), 0x53F572FFL, ((VECTOR(int32_t, 2))(0x084966B8L)), 0x6C2145D0L, 0x0CCED4C0L)).odd, ((VECTOR(int32_t, 4))(0L))))).z , p_19) <= p_1035->g_506.s2) < p_1035->g_196) , l_748[1][1][3]), l_753, p_19, (-8L), (-1L), (-1L), 0x4DL, 1L)).s0522762055757272)).sf2)), ((VECTOR(uint8_t, 2))(0x1DL))))).xxyxyxxy)).s1667343647122137)).s3 || p_19) , 0x122AD701E450A4F6L))) == 1L)), 0x527967F2L, p_19, 0x06BB7A2DL, ((VECTOR(uint32_t, 2))(4294967295UL)), 1UL, 0x0AB2F6B5L)).s7535205032640535))).s8c60))))).w ^ l_748[0][0][4])) < p_19) , p_19)))) , &l_753);
    for (p_1035->g_44 = 0; (p_1035->g_44 == (-20)); p_1035->g_44--)
    { /* block id: 329 */
        uint32_t *l_775 = &p_1035->g_776;
        int32_t l_781 = (-1L);
        int64_t *l_789 = (void*)0;
        int64_t *l_790 = (void*)0;
        VECTOR(int64_t, 8) l_791 = (VECTOR(int64_t, 8))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0x6C92AB11B74D00B4L), 0x6C92AB11B74D00B4L), 0x6C92AB11B74D00B4L, (-9L), 0x6C92AB11B74D00B4L);
        VECTOR(int64_t, 2) l_797 = (VECTOR(int64_t, 2))(0x08EA66E16A8E3B49L, 0x702B901EEFC6261BL);
        VECTOR(int64_t, 2) l_798 = (VECTOR(int64_t, 2))((-3L), (-1L));
        VECTOR(int64_t, 8) l_800 = (VECTOR(int64_t, 8))(0x7FF445F9B30F6997L, (VECTOR(int64_t, 4))(0x7FF445F9B30F6997L, (VECTOR(int64_t, 2))(0x7FF445F9B30F6997L, 0x17259D3D9D745619L), 0x17259D3D9D745619L), 0x17259D3D9D745619L, 0x7FF445F9B30F6997L, 0x17259D3D9D745619L);
        VECTOR(uint32_t, 8) l_818 = (VECTOR(uint32_t, 8))(0x59FD0D9AL, (VECTOR(uint32_t, 4))(0x59FD0D9AL, (VECTOR(uint32_t, 2))(0x59FD0D9AL, 0x50D28859L), 0x50D28859L), 0x50D28859L, 0x59FD0D9AL, 0x50D28859L);
        int32_t l_822[8] = {(-1L),0x31151D0FL,(-1L),(-1L),0x31151D0FL,(-1L),(-1L),0x31151D0FL};
        int32_t l_824 = 0x34517F5EL;
        uint32_t *l_828 = (void*)0;
        uint32_t *l_829 = (void*)0;
        uint32_t *l_830 = (void*)0;
        uint32_t *l_831 = (void*)0;
        uint32_t *l_832 = (void*)0;
        uint32_t *l_833[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_835 = (-2L);
        uint64_t *l_841 = (void*)0;
        uint64_t *l_842 = (void*)0;
        uint64_t *l_843 = &p_1035->g_498;
        VECTOR(int8_t, 2) l_858 = (VECTOR(int8_t, 2))(0x4BL, 0x2EL);
        uint16_t *l_861 = (void*)0;
        uint16_t *l_862 = (void*)0;
        uint16_t *l_863 = (void*)0;
        uint16_t *l_864[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int64_t **l_868 = &l_761;
        int64_t ***l_867 = &l_868;
        VECTOR(uint32_t, 4) l_902 = (VECTOR(uint32_t, 4))(0xB164302AL, (VECTOR(uint32_t, 2))(0xB164302AL, 0xBAC0753BL), 0xBAC0753BL);
        int i, j;
        l_835 ^= ((safe_div_func_int8_t_s_s((((p_1035->g_834 = (((((((GROUP_DIVERGE(0, 1) >= (safe_mod_func_uint64_t_u_u((p_1035->g_157.s1 ^= ((p_1035->g_766[6] = ((!((--(*l_775)) , (((*p_20) = (((l_802.sa = (safe_rshift_func_uint16_t_u_s((!(l_781 < ((safe_div_func_uint64_t_u_u((0x7CL >= (safe_add_func_uint64_t_u_u((((VECTOR(int64_t, 2))(p_1035->g_788.s43)).even == ((p_19 = 0x6775AAC78071FCD2L) > ((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_791.s45)), (-2L), ((VECTOR(int64_t, 4))(l_792.s9d24)), ((VECTOR(int64_t, 2))(0x2C2B6F5DA3F1C808L, 0x74EE1B47F6A22936L)), 0x7789B9608213BE17L, 0x61C66EEE7F03B283L, 0x5A2219F6226ECFC1L, (safe_rshift_func_uint8_t_u_u((((+(safe_add_func_int64_t_s_s(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 8))(l_797.xyxxxxyx)).s6361135557275302, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_798.yyyyyxxy)))).s0200603753370100))))).s034d)).xyxzyzxwzxyzyyxw, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 16))(p_1035->g_799.s7721676362643531)).odd))).s14)).yyxyyxxxxxxyyyyx))))).sd8, ((VECTOR(int64_t, 2))((-4L), (-6L)))))))), ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(l_800.s4333567677113254)).s062e, ((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x63BF60EE8E9E009FL, 0x676477C0CDE88350L)).yxxyyyyx)).hi)))).odd)), 0x1B4F04F6C9558F06L, 0x70C2D639F9DBAEE9L)).wzzwyzzyyxxywwwx, ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 2))(0x1F8E24DCF81A4F03L, 2L)), ((VECTOR(int64_t, 16))(1L, ((VECTOR(int64_t, 2))(p_1035->g_801.yy)), (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_802.s13)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((p_1035->g_262.s6++) | 0x0D72E44FL), (safe_mod_func_int8_t_s_s(p_1035->g_351.z, (safe_sub_func_int64_t_s_s((l_824 = ((l_823 ^= ((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((*p_1035->g_28), (safe_sub_func_uint16_t_u_u(l_764, 65535UL)))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_817.s1f5a)))).z)), (l_822[4] |= (((((VECTOR(uint32_t, 4))(l_818.s5116)).w != GROUP_DIVERGE(2, 1)) >= (safe_mul_func_uint16_t_u_u((((*p_1035->g_55) = ((l_821 = ((VECTOR(uint8_t, 8))(0UL, 0xBAL, 249UL, (*p_20), 0x38L, (*p_20), 252UL, 0x75L)).s1) && (*p_1035->g_28))) < l_767[1]), 0x5623L))) > (-3L))))) <= p_1035->g_202.w)) | 0UL)), l_781)))), 2L, (-5L), ((VECTOR(int32_t, 8))(0x1CB98757L)), (-1L), 0x07CB821AL, 0x6B5F12D2L, (-6L))).s06)).yxxy)), 1L, 0x51261DEEL)).s5 >= 0x238536FAL), ((VECTOR(int64_t, 4))(0x2E35E61418863203L)), ((VECTOR(int64_t, 2))(0x62D885D1D67FAF7FL)), l_792.s9, 0x64604945C8281AFDL, ((VECTOR(int64_t, 4))((-1L))))).sbe))).yyxyxxyxxyxyyxyx, ((VECTOR(int64_t, 16))(0L))))).sa245))).odd, ((VECTOR(int64_t, 2))(0x22E2B917C6737136L))))))).yxxxyyyyxxxyxyxx)), ((VECTOR(int64_t, 16))(0x6DFE0EE4F6250484L))))).sf40f, ((VECTOR(int64_t, 4))(0x55984B54A011F4D1L)), ((VECTOR(int64_t, 4))((-1L)))))).hi, ((VECTOR(int64_t, 2))(0x34B03CE3F3B9A07FL))))), ((VECTOR(int64_t, 2))(0x4E7E8786B2517D89L))))))).yxyxyyyx)).s0, 8L, (-6L), 0x3CBC7C5769938259L, ((VECTOR(int64_t, 8))(0x1BA4AC91297EFB12L)), ((VECTOR(int64_t, 4))(0L)))).s7, l_800.s3))) , &l_789) == p_1035->g_825), (*p_20))), (-9L), 0x5A5B2618C1275E0CL, 0x504225DE57A74E2BL)), ((VECTOR(int64_t, 16))(0x0C294E1206B13476L))))).sf)), l_818.s4))), 3UL)) , 1L))), l_798.y))) && p_19) < l_817.s6)) != 0x12L))) != l_797.y)) , 0x1067A05D9E2F5225L)), 0x21143C41DB6E0790L))) , &p_1035->g_316) == (void*)0) ^ l_748[1][1][3]) >= l_827) && l_797.x) != l_817.s0)) > l_817.s8) && p_19), 0x36L)) && p_19);
        (*l_867) = (((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 16))((safe_mul_func_uint16_t_u_u(1UL, (~(safe_rshift_func_uint8_t_u_u((*p_20), 4))))), 1L, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_1035->g_840.xxxx)).wxzwxwzxzyyyzzwz)).odd)), (((--(*l_843)) , (*p_1035->g_43)) == (safe_div_func_uint32_t_u_u(4294967295UL, (p_1035->g_262.s6--)))), (-1L), (GROUP_DIVERGE(0, 1) , ((FAKE_DIVERGE(p_1035->local_0_offset, get_local_id(0), 10) , (p_19 <= p_19)) | (safe_lshift_func_uint16_t_u_s(p_19, 2)))), ((VECTOR(int64_t, 2))(p_1035->g_852.zy)), 0x14F9A21F0CFC36D5L)).se743, ((VECTOR(int64_t, 16))(4L, 0L, (-1L), 0x47B874AB2E03E72EL, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 4))(0x241BA87621421E5DL, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_853.s2017)).even)), 0x02FB77D4EAADEA14L)).hi, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_1035->g_854.yxzz)).zzyyyxzxyzzxxwzw)).hi, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 16))(0x13A876A695CFB441L, ((VECTOR(int64_t, 4))(p_1035->g_855.yyxy)), (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(0x09L, 0x08L)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(l_858.yxxx)).lo, ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 4))(l_859.s4514)), ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 16))(p_1035->g_860.sb87c4aae0f7b8427)), ((VECTOR(int8_t, 4))(0x48L, 1L, 0x78L, (-7L))).xwwyzxzxwxxxxxzx))).sb22e, ((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 8))((((--p_1035->g_209.s3) >= p_19) != p_19), ((VECTOR(int8_t, 4))(0x44L)), 1L, (-1L), 0x53L)).s3107277075501530, ((VECTOR(int8_t, 16))(0x36L))))).s3966)))))).xwwwywxzzxzyywxx)).s457d, ((VECTOR(int8_t, 4))(4L)), ((VECTOR(int8_t, 4))((-4L)))))).odd)))))), 0x35L, 0L)).lo, ((VECTOR(int8_t, 2))(0x1CL))))).lo, p_19)), l_822[0], 0L, ((VECTOR(int64_t, 2))(0x47F545A5FCB5182CL)), 0x40C014DC2677E219L, l_859.s6, 0L, ((VECTOR(int64_t, 2))(0x7F239846E9A2641CL)), 0L)).s5111, ((VECTOR(int64_t, 4))(0x15458356F63E3F68L))))).xywyyxyw))))).even)).lo))).yxxy)).odd)).xyxyyxxy)), 0L, p_19, 1L, (-6L))).s7bb9))).x , (void*)0);
        if ((safe_add_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u(p_19, GROUP_DIVERGE(2, 1))) , FAKE_DIVERGE(p_1035->group_1_offset, get_group_id(1), 10)), ((void*)0 != l_873))))
        { /* block id: 348 */
            VECTOR(int16_t, 8) l_892 = (VECTOR(int16_t, 8))(0x101AL, (VECTOR(int16_t, 4))(0x101AL, (VECTOR(int16_t, 2))(0x101AL, 0x6C58L), 0x6C58L), 0x6C58L, 0x101AL, 0x6C58L);
            VECTOR(int16_t, 8) l_895 = (VECTOR(int16_t, 8))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 5L), 5L), 5L, (-5L), 5L);
            int i;
            (*p_1035->g_55) = (safe_lshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s((l_878[4] != ((*p_1035->g_28) = ((((+(&p_1035->g_825 == (void*)0)) < (((*l_873) == (((((-4L) | (((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((((safe_div_func_int8_t_s_s(((((VECTOR(uint16_t, 4))((safe_sub_func_int16_t_s_s((l_781 &= 0x7F8DL), p_19)), 1UL, 0xBD41L, 0xD974L)).x >= (safe_mul_func_uint8_t_u_u(((+((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(p_1035->g_889.sa0)), ((VECTOR(int16_t, 16))(1L, 1L, ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 8))(0x2107L, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x7DAEL, 0x2650L)))), ((VECTOR(int16_t, 4))(p_1035->g_890.xyxy)).lo))), 0x228CL, ((VECTOR(int16_t, 2))(l_891.s9e)), 0x7440L, (-9L))).lo))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_892.s0237702054105415)).s79)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_1035->g_893.s37)))), 1L, (*l_873), ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_1035->g_894.yy)))).yxyx, ((VECTOR(int16_t, 16))(l_895.s0433242072463537)).s3ffa))))).s67, ((VECTOR(int16_t, 2))(p_1035->g_896.xy))))).yyyyyxxy)).s1) | (safe_lshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s(p_19, l_892.s5)) & p_19), 1))), (*p_1035->g_28)))) < 18446744073709551615UL), (*p_1035->g_28))) , p_1035->g_39.z) , p_19), (*l_873))), p_1035->g_852.y)) , 0xFA8003DA8A80F52FL) && GROUP_DIVERGE(2, 1))) , GROUP_DIVERGE(0, 1)) , l_895.s4) == 0UL)) != 0UL)) , 8L) , (*p_20)))), (*l_873))) < 0xDFC5L) , 0x8CL), l_818.s7));
            (**p_1035->g_139) = (*p_1035->g_43);
        }
        else
        { /* block id: 353 */
            (*p_1035->g_139) = (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(p_1035->g_901.s03)).yxxx, ((VECTOR(uint32_t, 2))(l_902.yw)).yxxy))).z, l_858.y, 1UL, 0xF53B624CL)).w , (*p_1035->g_139));
        }
        if (p_19)
            break;
    }
    (*l_873) &= 0x2DD965A1L;
    return l_903;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_23(uint8_t * p_24, uint8_t * p_25, uint8_t * p_26, uint8_t * p_27, struct S0 * p_1035)
{ /* block id: 250 */
    uint32_t l_733 = 0xE10DF470L;
    if ((atomic_inc(&p_1035->l_atomic_input[3]) == 8))
    { /* block id: 252 */
        int32_t *l_643 = (void*)0;
        int8_t l_644 = 0x76L;
        VECTOR(int32_t, 8) l_645 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
        VECTOR(int16_t, 16) l_646 = (VECTOR(int16_t, 16))(0x1768L, (VECTOR(int16_t, 4))(0x1768L, (VECTOR(int16_t, 2))(0x1768L, 0x06FDL), 0x06FDL), 0x06FDL, 0x1768L, 0x06FDL, (VECTOR(int16_t, 2))(0x1768L, 0x06FDL), (VECTOR(int16_t, 2))(0x1768L, 0x06FDL), 0x1768L, 0x06FDL, 0x1768L, 0x06FDL);
        VECTOR(int16_t, 16) l_647 = (VECTOR(int16_t, 16))(0x587FL, (VECTOR(int16_t, 4))(0x587FL, (VECTOR(int16_t, 2))(0x587FL, 0x60A3L), 0x60A3L), 0x60A3L, 0x587FL, 0x60A3L, (VECTOR(int16_t, 2))(0x587FL, 0x60A3L), (VECTOR(int16_t, 2))(0x587FL, 0x60A3L), 0x587FL, 0x60A3L, 0x587FL, 0x60A3L);
        int32_t l_648[1];
        int64_t l_649 = (-6L);
        VECTOR(int16_t, 2) l_650 = (VECTOR(int16_t, 2))((-1L), 0x74B3L);
        VECTOR(int16_t, 16) l_651 = (VECTOR(int16_t, 16))(0x242FL, (VECTOR(int16_t, 4))(0x242FL, (VECTOR(int16_t, 2))(0x242FL, 1L), 1L), 1L, 0x242FL, 1L, (VECTOR(int16_t, 2))(0x242FL, 1L), (VECTOR(int16_t, 2))(0x242FL, 1L), 0x242FL, 1L, 0x242FL, 1L);
        VECTOR(int16_t, 8) l_652 = (VECTOR(int16_t, 8))(0x578FL, (VECTOR(int16_t, 4))(0x578FL, (VECTOR(int16_t, 2))(0x578FL, 0x7CF8L), 0x7CF8L), 0x7CF8L, 0x578FL, 0x7CF8L);
        uint64_t l_653 = 18446744073709551609UL;
        VECTOR(uint32_t, 16) l_654 = (VECTOR(uint32_t, 16))(0x5C4FB690L, (VECTOR(uint32_t, 4))(0x5C4FB690L, (VECTOR(uint32_t, 2))(0x5C4FB690L, 0xC2122DEEL), 0xC2122DEEL), 0xC2122DEEL, 0x5C4FB690L, 0xC2122DEEL, (VECTOR(uint32_t, 2))(0x5C4FB690L, 0xC2122DEEL), (VECTOR(uint32_t, 2))(0x5C4FB690L, 0xC2122DEEL), 0x5C4FB690L, 0xC2122DEEL, 0x5C4FB690L, 0xC2122DEEL);
        VECTOR(uint32_t, 16) l_655 = (VECTOR(uint32_t, 16))(0xDCE3D4DAL, (VECTOR(uint32_t, 4))(0xDCE3D4DAL, (VECTOR(uint32_t, 2))(0xDCE3D4DAL, 0xC75CF126L), 0xC75CF126L), 0xC75CF126L, 0xDCE3D4DAL, 0xC75CF126L, (VECTOR(uint32_t, 2))(0xDCE3D4DAL, 0xC75CF126L), (VECTOR(uint32_t, 2))(0xDCE3D4DAL, 0xC75CF126L), 0xDCE3D4DAL, 0xC75CF126L, 0xDCE3D4DAL, 0xC75CF126L);
        VECTOR(uint32_t, 16) l_656 = (VECTOR(uint32_t, 16))(0x69ADE4D2L, (VECTOR(uint32_t, 4))(0x69ADE4D2L, (VECTOR(uint32_t, 2))(0x69ADE4D2L, 2UL), 2UL), 2UL, 0x69ADE4D2L, 2UL, (VECTOR(uint32_t, 2))(0x69ADE4D2L, 2UL), (VECTOR(uint32_t, 2))(0x69ADE4D2L, 2UL), 0x69ADE4D2L, 2UL, 0x69ADE4D2L, 2UL);
        int16_t l_657 = 0x7753L;
        uint32_t l_658 = 0x4EF98DEAL;
        uint16_t l_659 = 65535UL;
        uint32_t l_660[7][6][4] = {{{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL}},{{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL}},{{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL}},{{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL}},{{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL}},{{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL}},{{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL},{0x2B8CA792L,4294967295UL,4294967289UL,4294967289UL}}};
        int32_t l_661 = 0x58470D05L;
        int8_t l_662 = 1L;
        uint64_t l_663 = 0xF19BB7352CAD3C02L;
        int32_t l_666 = (-1L);
        int64_t l_667 = 0x7D8FEA12A16D9387L;
        uint32_t l_668 = 4294967287UL;
        uint16_t l_669 = 65535UL;
        int8_t l_670 = 2L;
        uint64_t l_671 = 0x4FD99347E8CA26D2L;
        int64_t l_672 = 0x6636867A7085E59DL;
        int32_t l_673 = 0x51DFABD8L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_648[i] = 1L;
        l_643 = (void*)0;
        l_670 |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_644, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_645.s7736067604312237)).sd6)).xyxx)), (l_668 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((-2L), ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(l_646.s0ff8)).lo, ((VECTOR(int16_t, 2))(l_647.sa9))))), 0L)).xywwzxyy)), ((VECTOR(int16_t, 16))(8L, 0x7F0EL, ((VECTOR(int16_t, 4))(0x2BE4L, (l_649 = l_648[0]), 1L, 0x24BAL)), ((VECTOR(int16_t, 4))(0x5A97L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_650.yxyy)).odd)), 0x5494L)), ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(0x6FD2L, 0x54A0L)), ((VECTOR(int16_t, 4))(l_651.se3c5)).even, ((VECTOR(int16_t, 4))(l_652.s4051)).lo))), 0x7733L, l_653, 0L, 0x1EDDL)).hi))).s3376733435641616, ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))((((VECTOR(uint32_t, 8))(FAKE_DIVERGE(p_1035->global_0_offset, get_global_id(0), 10), ((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 2))(l_654.sf9)).xyyyyxyx, ((VECTOR(uint32_t, 16))(l_655.sc58536328f3bf483)).odd))).s7, 8UL, ((VECTOR(uint32_t, 4))(l_656.s893f)), 4294967290UL)).s7 , (l_657 , ((l_658 , l_659) , l_660[1][5][2]))), (++l_663), 65529UL, 0xA68FL)).lo, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 4))(l_666, 0x92C6L, 65534UL, 0x70E3L)), ((VECTOR(uint16_t, 4))(65535UL)), ((VECTOR(uint16_t, 4))(0xDB8AL))))), (uint16_t)l_667))).odd))))).xxyxxyxxyxxyxxxx))))).sb), (-9L), l_669, 0x0EAA9237L, 0x5BC7D6C2L, ((VECTOR(int32_t, 2))((-2L))), ((VECTOR(int32_t, 2))(1L)), 0x064030C2L, 0x14983964L)).s4376))))), ((VECTOR(int32_t, 4))((-9L)))))).wywzzyzy, ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))(1L))))), ((VECTOR(int32_t, 8))(0x61BB97C3L)), ((VECTOR(int32_t, 8))(0x7E170D0CL))))).s71)).odd;
        if ((l_673 = (l_672 |= l_671)))
        { /* block id: 260 */
            uint64_t l_674[4][2];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_674[i][j] = 0x5901B339F97DB4EFL;
            }
            ++l_674[3][1];
            for (l_674[3][1] = 15; (l_674[3][1] != 57); l_674[3][1] = safe_add_func_uint64_t_u_u(l_674[3][1], 5))
            { /* block id: 264 */
                int64_t l_679 = 0x0E19820ED8389AEFL;
                uint32_t l_680 = 0x2DC62055L;
                VECTOR(int32_t, 4) l_709 = (VECTOR(int32_t, 4))(0x3AEBB173L, (VECTOR(int32_t, 2))(0x3AEBB173L, 0x3BF629B6L), 0x3BF629B6L);
                int i;
                ++l_680;
                for (l_679 = 19; (l_679 == 6); --l_679)
                { /* block id: 268 */
                    int32_t l_685[1];
                    VECTOR(int64_t, 8) l_689 = (VECTOR(int64_t, 8))(0x1AEF2E171269C6A5L, (VECTOR(int64_t, 4))(0x1AEF2E171269C6A5L, (VECTOR(int64_t, 2))(0x1AEF2E171269C6A5L, (-6L)), (-6L)), (-6L), 0x1AEF2E171269C6A5L, (-6L));
                    uint32_t l_690 = 4294967295UL;
                    uint64_t l_691 = 0xF615FE75C81705A1L;
                    int32_t l_703 = (-4L);
                    int32_t l_704 = 0x5DB2F531L;
                    uint64_t l_705[8][6] = {{0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL},{0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL},{0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL},{0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL},{0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL},{0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL},{0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL},{0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL,0xF34368A6E96A368DL}};
                    VECTOR(int32_t, 16) l_706 = (VECTOR(int32_t, 16))(0x23EA4D99L, (VECTOR(int32_t, 4))(0x23EA4D99L, (VECTOR(int32_t, 2))(0x23EA4D99L, 0x6854C425L), 0x6854C425L), 0x6854C425L, 0x23EA4D99L, 0x6854C425L, (VECTOR(int32_t, 2))(0x23EA4D99L, 0x6854C425L), (VECTOR(int32_t, 2))(0x23EA4D99L, 0x6854C425L), 0x23EA4D99L, 0x6854C425L, 0x23EA4D99L, 0x6854C425L);
                    int32_t l_707 = 0x10CFDE46L;
                    int32_t l_708 = 2L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_685[i] = 0x467CEAC9L;
                    for (l_685[0] = 18; (l_685[0] < 18); l_685[0]++)
                    { /* block id: 271 */
                        VECTOR(int32_t, 2) l_688 = (VECTOR(int32_t, 2))(0x21C66257L, 6L);
                        int i;
                        l_645.s0 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_688.xyxyxyxy)))).s7;
                    }
                    l_673 |= ((l_690 = ((VECTOR(int64_t, 8))(l_689.s70641576)).s7) , l_691);
                    for (l_691 = 8; (l_691 <= 49); ++l_691)
                    { /* block id: 278 */
                        int32_t l_694[1];
                        int32_t l_695 = 1L;
                        uint32_t l_696 = 7UL;
                        uint8_t l_699 = 0x13L;
                        uint32_t l_700 = 1UL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_694[i] = 0x0B1E0EE7L;
                        l_696++;
                        l_643 = (void*)0;
                        l_685[0] ^= l_699;
                        l_700--;
                    }
                    l_708 |= ((VECTOR(int32_t, 8))((l_645.s0 = (l_661 ^= (l_703 , (l_673 &= (l_704 , (l_703 = 0x77E3B927L)))))), (l_705[4][4] , ((VECTOR(int32_t, 8))(l_706.s3c0c7057)).s5), 0x38BDC7E4L, (-7L), l_707, (-2L), 0x2B9BCDEDL, 0x3E58CE00L)).s6;
                }
                if (((VECTOR(int32_t, 8))(l_709.xwzzxxwz)).s5)
                { /* block id: 290 */
                    int32_t l_711 = 4L;
                    int32_t *l_710 = &l_711;
                    VECTOR(int32_t, 2) l_712 = (VECTOR(int32_t, 2))(0x581CD686L, 0L);
                    int i;
                    l_643 = l_710;
                    l_709.w = ((*l_643) = ((VECTOR(int32_t, 2))(l_712.yx)).even);
                }
                else
                { /* block id: 294 */
                    uint32_t l_713[7];
                    int32_t l_725 = 0x566FFD75L;
                    uint32_t l_726 = 4294967294UL;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_713[i] = 1UL;
                    if ((l_673 &= l_713[6]))
                    { /* block id: 296 */
                        int32_t l_714 = 0L;
                        l_714 |= 6L;
                    }
                    else
                    { /* block id: 298 */
                        int64_t l_715 = (-4L);
                        uint32_t l_716[6];
                        uint64_t l_717 = 0x39B8795CB635FE96L;
                        int32_t l_719 = 0L;
                        int32_t *l_718 = &l_719;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_716[i] = 0x093321B6L;
                        l_643 = (l_715 , ((l_716[5] , (l_717 = 3L)) , (void*)0));
                        l_718 = l_718;
                    }
                    for (l_713[6] = 0; (l_713[6] <= 47); ++l_713[6])
                    { /* block id: 305 */
                        int32_t *l_722 = (void*)0;
                        VECTOR(int32_t, 8) l_724 = (VECTOR(int32_t, 8))(0x6FD0CFD8L, (VECTOR(int32_t, 4))(0x6FD0CFD8L, (VECTOR(int32_t, 2))(0x6FD0CFD8L, 0L), 0L), 0L, 0x6FD0CFD8L, 0L);
                        int32_t *l_723 = (void*)0;
                        int i;
                        l_723 = (l_643 = l_722);
                    }
                    l_726--;
                }
            }
        }
        else
        { /* block id: 312 */
            int32_t l_729 = 0x663A9B9BL;
            uint32_t l_730 = 8UL;
            l_730++;
        }
        unsigned int result = 0;
        result += l_644;
        result += l_645.s7;
        result += l_645.s6;
        result += l_645.s5;
        result += l_645.s4;
        result += l_645.s3;
        result += l_645.s2;
        result += l_645.s1;
        result += l_645.s0;
        result += l_646.sf;
        result += l_646.se;
        result += l_646.sd;
        result += l_646.sc;
        result += l_646.sb;
        result += l_646.sa;
        result += l_646.s9;
        result += l_646.s8;
        result += l_646.s7;
        result += l_646.s6;
        result += l_646.s5;
        result += l_646.s4;
        result += l_646.s3;
        result += l_646.s2;
        result += l_646.s1;
        result += l_646.s0;
        result += l_647.sf;
        result += l_647.se;
        result += l_647.sd;
        result += l_647.sc;
        result += l_647.sb;
        result += l_647.sa;
        result += l_647.s9;
        result += l_647.s8;
        result += l_647.s7;
        result += l_647.s6;
        result += l_647.s5;
        result += l_647.s4;
        result += l_647.s3;
        result += l_647.s2;
        result += l_647.s1;
        result += l_647.s0;
        int l_648_i0;
        for (l_648_i0 = 0; l_648_i0 < 1; l_648_i0++) {
            result += l_648[l_648_i0];
        }
        result += l_649;
        result += l_650.y;
        result += l_650.x;
        result += l_651.sf;
        result += l_651.se;
        result += l_651.sd;
        result += l_651.sc;
        result += l_651.sb;
        result += l_651.sa;
        result += l_651.s9;
        result += l_651.s8;
        result += l_651.s7;
        result += l_651.s6;
        result += l_651.s5;
        result += l_651.s4;
        result += l_651.s3;
        result += l_651.s2;
        result += l_651.s1;
        result += l_651.s0;
        result += l_652.s7;
        result += l_652.s6;
        result += l_652.s5;
        result += l_652.s4;
        result += l_652.s3;
        result += l_652.s2;
        result += l_652.s1;
        result += l_652.s0;
        result += l_653;
        result += l_654.sf;
        result += l_654.se;
        result += l_654.sd;
        result += l_654.sc;
        result += l_654.sb;
        result += l_654.sa;
        result += l_654.s9;
        result += l_654.s8;
        result += l_654.s7;
        result += l_654.s6;
        result += l_654.s5;
        result += l_654.s4;
        result += l_654.s3;
        result += l_654.s2;
        result += l_654.s1;
        result += l_654.s0;
        result += l_655.sf;
        result += l_655.se;
        result += l_655.sd;
        result += l_655.sc;
        result += l_655.sb;
        result += l_655.sa;
        result += l_655.s9;
        result += l_655.s8;
        result += l_655.s7;
        result += l_655.s6;
        result += l_655.s5;
        result += l_655.s4;
        result += l_655.s3;
        result += l_655.s2;
        result += l_655.s1;
        result += l_655.s0;
        result += l_656.sf;
        result += l_656.se;
        result += l_656.sd;
        result += l_656.sc;
        result += l_656.sb;
        result += l_656.sa;
        result += l_656.s9;
        result += l_656.s8;
        result += l_656.s7;
        result += l_656.s6;
        result += l_656.s5;
        result += l_656.s4;
        result += l_656.s3;
        result += l_656.s2;
        result += l_656.s1;
        result += l_656.s0;
        result += l_657;
        result += l_658;
        result += l_659;
        int l_660_i0, l_660_i1, l_660_i2;
        for (l_660_i0 = 0; l_660_i0 < 7; l_660_i0++) {
            for (l_660_i1 = 0; l_660_i1 < 6; l_660_i1++) {
                for (l_660_i2 = 0; l_660_i2 < 4; l_660_i2++) {
                    result += l_660[l_660_i0][l_660_i1][l_660_i2];
                }
            }
        }
        result += l_661;
        result += l_662;
        result += l_663;
        result += l_666;
        result += l_667;
        result += l_668;
        result += l_669;
        result += l_670;
        result += l_671;
        result += l_672;
        result += l_673;
        atomic_add(&p_1035->l_special_values[3], result);
    }
    else
    { /* block id: 315 */
        (1 + 1);
    }
    return l_733;
}


/* ------------------------------------------ */
/* 
 * reads : p_1035->g_43 p_1035->g_44 p_1035->g_2 p_1035->g_67 p_1035->l_comm_values p_1035->g_28 p_1035->g_29 p_1035->g_55 p_1035->g_4 p_1035->g_103 p_1035->g_57 p_1035->g_117 p_1035->g_comm_values p_1035->g_130 p_1035->g_133 p_1035->g_39 p_1035->g_102 p_1035->g_196 p_1035->g_210 p_1035->g_428 p_1035->g_139 p_1035->g_229 p_1035->g_498 p_1035->g_506 p_1035->g_412 p_1035->g_299 p_1035->g_589 p_1035->g_595 p_1035->g_221 p_1035->g_203 p_1035->g_566 p_1035->g_530 p_1035->g_209 p_1035->g_177 p_1035->g_411 p_1035->g_262 p_1035->g_639
 * writes: p_1035->g_102 p_1035->g_44 p_1035->g_29 p_1035->g_55 p_1035->g_196 p_1035->g_229 p_1035->g_498 p_1035->g_67 p_1035->g_231 p_1035->g_220 p_1035->g_209
 */
uint8_t * func_30(uint8_t * p_31, uint8_t * p_32, struct S0 * p_1035)
{ /* block id: 21 */
    int32_t *l_68[4][3][5] = {{{(void*)0,&p_1035->g_4,(void*)0,(void*)0,&p_1035->g_4},{(void*)0,&p_1035->g_4,(void*)0,(void*)0,&p_1035->g_4},{(void*)0,&p_1035->g_4,(void*)0,(void*)0,&p_1035->g_4}},{{(void*)0,&p_1035->g_4,(void*)0,(void*)0,&p_1035->g_4},{(void*)0,&p_1035->g_4,(void*)0,(void*)0,&p_1035->g_4},{(void*)0,&p_1035->g_4,(void*)0,(void*)0,&p_1035->g_4}},{{(void*)0,&p_1035->g_4,(void*)0,(void*)0,&p_1035->g_4},{(void*)0,&p_1035->g_4,(void*)0,(void*)0,&p_1035->g_4},{(void*)0,&p_1035->g_4,(void*)0,(void*)0,&p_1035->g_4}},{{(void*)0,&p_1035->g_4,(void*)0,(void*)0,&p_1035->g_4},{(void*)0,&p_1035->g_4,(void*)0,(void*)0,&p_1035->g_4},{(void*)0,&p_1035->g_4,(void*)0,(void*)0,&p_1035->g_4}}};
    int32_t l_69 = 0x0B54F4E0L;
    uint64_t l_70 = 0x0E43E29B3848CAB2L;
    int16_t *l_88 = (void*)0;
    uint16_t l_635[5] = {0x7A46L,0x7A46L,0x7A46L,0x7A46L,0x7A46L};
    int32_t l_638 = 0x68867BE8L;
    int i, j, k;
    --l_70;
    if ((*p_1035->g_43))
    { /* block id: 23 */
        int64_t l_89 = (-1L);
        int16_t *l_98 = (void*)0;
        int16_t *l_99 = (void*)0;
        int32_t l_100[5][4][1] = {{{0x1EE059EFL},{0x1EE059EFL},{0x1EE059EFL},{0x1EE059EFL}},{{0x1EE059EFL},{0x1EE059EFL},{0x1EE059EFL},{0x1EE059EFL}},{{0x1EE059EFL},{0x1EE059EFL},{0x1EE059EFL},{0x1EE059EFL}},{{0x1EE059EFL},{0x1EE059EFL},{0x1EE059EFL},{0x1EE059EFL}},{{0x1EE059EFL},{0x1EE059EFL},{0x1EE059EFL},{0x1EE059EFL}}};
        int32_t *l_101 = &p_1035->g_4;
        uint16_t *l_631[9][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j, k;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1035->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 170)), permutations[(safe_mod_func_uint32_t_u_u(((l_100[0][2][0] = (safe_lshift_func_uint16_t_u_u((p_1035->g_209.sf |= (safe_mod_func_uint8_t_u_u((func_77(func_80((safe_add_func_int32_t_s_s(((p_1035->g_2[5][7][2] > func_85(l_88, (((p_1035->g_102 = func_49(((l_89 ^ (!((l_100[1][2][0] = ((!((safe_lshift_func_uint16_t_u_s(((*p_32) , (((safe_lshift_func_int8_t_s_u(l_89, (safe_mul_func_uint8_t_u_u(((l_89 >= (8UL | (safe_mul_func_int8_t_s_s(p_1035->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1035->tid, 170))], (*p_1035->g_28))))) != 0x426486C133A8E694L), 0x44L)))) , (*p_1035->g_55)) || 8UL)), 5)) | 1L)) , l_89)) != 2UL))) ^ FAKE_DIVERGE(p_1035->global_1_offset, get_global_id(1), 10)), l_101, (*l_101), p_1035)) == (void*)0) , (void*)0), p_1035)) < FAKE_DIVERGE(p_1035->group_0_offset, get_group_id(0), 10)), (*p_1035->g_55))), p_1035->g_117[1][3], p_1035), p_1035->g_comm_values[p_1035->tid], p_1035) & p_1035->g_57.y), GROUP_DIVERGE(2, 1)))), (*l_101)))) & p_1035->g_412.x), 10))][(safe_mod_func_uint32_t_u_u(p_1035->tid, 170))]));
        l_68[3][1][2] = &l_100[0][2][0];
    }
    else
    { /* block id: 245 */
        uint64_t l_634[9][7] = {{18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL,0x6A84846E07B412CBL,18446744073709551614UL,18446744073709551614UL}};
        int64_t **l_641 = (void*)0;
        int64_t ***l_640 = &l_641;
        VECTOR(int64_t, 2) l_642 = (VECTOR(int64_t, 2))((-10L), 0x0755C2AE47B5F426L);
        int i, j;
        l_642.x = (((safe_div_func_uint32_t_u_u(((p_1035->g_177.w != ((void*)0 == p_1035->g_411[4])) >= (l_634[0][5] , 0x85L)), (((*p_1035->g_55) & ((*p_1035->g_43) |= l_635[3])) ^ (0x6D7F3745E85687F8L && (((((((((((safe_rshift_func_int8_t_s_u(((l_638 == l_634[5][4]) , p_1035->g_262.s7), p_1035->g_639)) ^ l_634[0][5]) < l_634[0][5]) < 1L) || l_634[0][5]) <= 0x73C679BECD2BAC0DL) ^ (-1L)) , (void*)0) != (void*)0) , 0xD158B9D34F9D395AL) && GROUP_DIVERGE(0, 1)))))) , (void*)0) != l_640);
    }
    return &p_1035->g_67[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1035->g_43 p_1035->g_44 p_1035->g_29
 * writes: p_1035->g_44 p_1035->g_29
 */
uint8_t * func_33(uint32_t  p_34, int16_t  p_35, struct S0 * p_1035)
{ /* block id: 10 */
    uint8_t *l_48 = &p_1035->g_29;
    (*p_1035->g_43) ^= p_34;
    for (p_1035->g_29 = 0; (p_1035->g_29 < 49); ++p_1035->g_29)
    { /* block id: 14 */
        uint8_t *l_47 = (void*)0;
        return l_47;
    }
    return l_48;
}


/* ------------------------------------------ */
/* 
 * reads : p_1035->g_55 p_1035->g_4
 * writes:
 */
uint8_t * func_49(uint32_t  p_50, int32_t * p_51, int64_t  p_52, struct S0 * p_1035)
{ /* block id: 18 */
    int32_t *l_56 = (void*)0;
    int32_t *l_58 = (void*)0;
    int32_t *l_59 = (void*)0;
    int32_t *l_60 = (void*)0;
    int32_t *l_61 = (void*)0;
    int32_t *l_62 = (void*)0;
    int32_t *l_63 = (void*)0;
    int32_t *l_64[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_65 = 3L;
    uint8_t *l_66 = &p_1035->g_67[0];
    int i;
    l_65 ^= (*p_1035->g_55);
    return l_66;
}


/* ------------------------------------------ */
/* 
 * reads : p_1035->g_43 p_1035->g_44 p_1035->g_130 p_1035->g_133 p_1035->g_39 p_1035->g_55 p_1035->g_103 p_1035->g_102 p_1035->g_67 p_1035->g_196 p_1035->g_28 p_1035->g_29 p_1035->g_210 p_1035->g_428 p_1035->g_139 p_1035->g_229 p_1035->g_498 p_1035->g_506 p_1035->g_412 p_1035->g_117 p_1035->g_299 p_1035->g_57 p_1035->g_589 p_1035->g_595 p_1035->g_221 p_1035->g_203 p_1035->g_566 p_1035->g_530
 * writes: p_1035->g_44 p_1035->g_196 p_1035->g_29 p_1035->g_229 p_1035->g_55 p_1035->g_498 p_1035->g_67 p_1035->g_231 p_1035->g_220
 */
uint16_t  func_77(int16_t * p_78, uint64_t  p_79, struct S0 * p_1035)
{ /* block id: 48 */
    VECTOR(int16_t, 8) l_128 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
    uint8_t *l_129 = &p_1035->g_29;
    int32_t *l_142[9][6][4] = {{{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4}},{{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4}},{{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4}},{{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4}},{{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4}},{{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4}},{{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4}},{{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4}},{{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4},{(void*)0,(void*)0,&p_1035->g_4,&p_1035->g_4}}};
    VECTOR(uint32_t, 4) l_160 = (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0xEE72222AL), 0xEE72222AL);
    int32_t l_162 = 0L;
    VECTOR(int16_t, 16) l_241 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int16_t, 2))(0L, 0L), (VECTOR(int16_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
    int16_t l_273[3];
    uint16_t *l_374 = (void*)0;
    int32_t l_435 = 6L;
    VECTOR(int32_t, 8) l_445 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
    uint8_t l_459 = 0x10L;
    VECTOR(uint32_t, 16) l_511 = (VECTOR(uint32_t, 16))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 5UL), 5UL), 5UL, 4294967288UL, 5UL, (VECTOR(uint32_t, 2))(4294967288UL, 5UL), (VECTOR(uint32_t, 2))(4294967288UL, 5UL), 4294967288UL, 5UL, 4294967288UL, 5UL);
    uint32_t l_518[10] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    VECTOR(uint8_t, 16) l_529 = (VECTOR(uint8_t, 16))(246UL, (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 5UL), 5UL), 5UL, 246UL, 5UL, (VECTOR(uint8_t, 2))(246UL, 5UL), (VECTOR(uint8_t, 2))(246UL, 5UL), 246UL, 5UL, 246UL, 5UL);
    int8_t l_538 = 0x42L;
    VECTOR(int32_t, 8) l_591 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x5405E8D7L), 0x5405E8D7L), 0x5405E8D7L, (-8L), 0x5405E8D7L);
    VECTOR(uint16_t, 4) l_592 = (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0x01B0L), 0x01B0L);
    uint64_t *l_593 = &p_1035->g_498;
    uint64_t *l_594 = (void*)0;
    uint32_t l_618[4] = {4294967289UL,4294967289UL,4294967289UL,4294967289UL};
    VECTOR(int32_t, 16) l_619 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x42EC2BA0L), 0x42EC2BA0L), 0x42EC2BA0L, 5L, 0x42EC2BA0L, (VECTOR(int32_t, 2))(5L, 0x42EC2BA0L), (VECTOR(int32_t, 2))(5L, 0x42EC2BA0L), 5L, 0x42EC2BA0L, 5L, 0x42EC2BA0L);
    uint16_t **l_626 = &p_1035->g_231;
    uint64_t l_629 = 0x8B478C33C03EA4A6L;
    int8_t *l_630[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_273[i] = 0x0755L;
    if (((*p_1035->g_55) = (((safe_sub_func_int64_t_s_s(0x63876213B6CCC3BFL, (((*p_1035->g_43) ^ (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(FAKE_DIVERGE(p_1035->group_2_offset, get_group_id(2), 10))), (((VECTOR(int16_t, 2))(l_128.s21)).odd || ((l_129 != l_129) & ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_1035->g_130.s02)).yyyx)).w))))) > (safe_mul_func_uint8_t_u_u(0UL, (p_78 == (((VECTOR(int8_t, 8))(p_1035->g_133.s653036a6)).s5 , p_78))))))) || p_1035->g_39.y) != (5UL || p_1035->g_130.s2))))
    { /* block id: 50 */
        int32_t **l_138 = &p_1035->g_55;
        int32_t l_141 = (-3L);
        VECTOR(int8_t, 4) l_148 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x52L), 0x52L);
        VECTOR(int16_t, 8) l_154 = (VECTOR(int16_t, 8))(0x0DDCL, (VECTOR(int16_t, 4))(0x0DDCL, (VECTOR(int16_t, 2))(0x0DDCL, 1L), 1L), 1L, 0x0DDCL, 1L);
        uint8_t *l_194 = &p_1035->g_29;
        int16_t l_211 = 0x41F3L;
        uint16_t *l_230 = &p_1035->g_196;
        uint64_t *l_307[3];
        int32_t l_311 = 0x00B7DB71L;
        int32_t l_312 = (-3L);
        VECTOR(int64_t, 8) l_396 = (VECTOR(int64_t, 8))(0x1B50CAB1D221E5A6L, (VECTOR(int64_t, 4))(0x1B50CAB1D221E5A6L, (VECTOR(int64_t, 2))(0x1B50CAB1D221E5A6L, (-1L)), (-1L)), (-1L), 0x1B50CAB1D221E5A6L, (-1L));
        VECTOR(uint8_t, 8) l_414 = (VECTOR(uint8_t, 8))(0xE2L, (VECTOR(uint8_t, 4))(0xE2L, (VECTOR(uint8_t, 2))(0xE2L, 0x21L), 0x21L), 0x21L, 0xE2L, 0x21L);
        VECTOR(uint8_t, 16) l_415 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x54L), 0x54L), 0x54L, 255UL, 0x54L, (VECTOR(uint8_t, 2))(255UL, 0x54L), (VECTOR(uint8_t, 2))(255UL, 0x54L), 255UL, 0x54L, 255UL, 0x54L);
        VECTOR(uint8_t, 2) l_421 = (VECTOR(uint8_t, 2))(1UL, 0UL);
        uint32_t l_441 = 2UL;
        VECTOR(int32_t, 16) l_444 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x124CD325L), 0x124CD325L), 0x124CD325L, 0L, 0x124CD325L, (VECTOR(int32_t, 2))(0L, 0x124CD325L), (VECTOR(int32_t, 2))(0L, 0x124CD325L), 0L, 0x124CD325L, 0L, 0x124CD325L);
        VECTOR(int32_t, 8) l_446 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x63CCC8E3L), 0x63CCC8E3L), 0x63CCC8E3L, 1L, 0x63CCC8E3L);
        VECTOR(int32_t, 16) l_447 = (VECTOR(int32_t, 16))(0x0D9CDE55L, (VECTOR(int32_t, 4))(0x0D9CDE55L, (VECTOR(int32_t, 2))(0x0D9CDE55L, 0x0FD06CA1L), 0x0FD06CA1L), 0x0FD06CA1L, 0x0D9CDE55L, 0x0FD06CA1L, (VECTOR(int32_t, 2))(0x0D9CDE55L, 0x0FD06CA1L), (VECTOR(int32_t, 2))(0x0D9CDE55L, 0x0FD06CA1L), 0x0D9CDE55L, 0x0FD06CA1L, 0x0D9CDE55L, 0x0FD06CA1L);
        VECTOR(int32_t, 16) l_448 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x527322B1L), 0x527322B1L), 0x527322B1L, (-4L), 0x527322B1L, (VECTOR(int32_t, 2))((-4L), 0x527322B1L), (VECTOR(int32_t, 2))((-4L), 0x527322B1L), (-4L), 0x527322B1L, (-4L), 0x527322B1L);
        uint32_t *l_458[4][1];
        uint32_t **l_457 = &l_458[2][0];
        int i, j;
        for (i = 0; i < 3; i++)
            l_307[i] = (void*)0;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_458[i][j] = (void*)0;
        }
        for (p_79 = 0; (p_79 <= 33); ++p_79)
        { /* block id: 53 */
            return p_1035->g_103.s7;
        }
        for (p_1035->g_44 = 0; (p_1035->g_44 <= 20); ++p_1035->g_44)
        { /* block id: 58 */
            int32_t *l_140[5][2][9] = {{{&p_1035->g_44,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0},{&p_1035->g_44,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0}},{{&p_1035->g_44,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0},{&p_1035->g_44,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0}},{{&p_1035->g_44,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0},{&p_1035->g_44,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0}},{{&p_1035->g_44,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0},{&p_1035->g_44,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0}},{{&p_1035->g_44,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0},{&p_1035->g_44,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0,(void*)0,&p_1035->g_44,&p_1035->g_44,(void*)0}}};
            uint32_t l_161[10][2][5] = {{{8UL,1UL,4294967288UL,1UL,0xE255A649L},{8UL,1UL,4294967288UL,1UL,0xE255A649L}},{{8UL,1UL,4294967288UL,1UL,0xE255A649L},{8UL,1UL,4294967288UL,1UL,0xE255A649L}},{{8UL,1UL,4294967288UL,1UL,0xE255A649L},{8UL,1UL,4294967288UL,1UL,0xE255A649L}},{{8UL,1UL,4294967288UL,1UL,0xE255A649L},{8UL,1UL,4294967288UL,1UL,0xE255A649L}},{{8UL,1UL,4294967288UL,1UL,0xE255A649L},{8UL,1UL,4294967288UL,1UL,0xE255A649L}},{{8UL,1UL,4294967288UL,1UL,0xE255A649L},{8UL,1UL,4294967288UL,1UL,0xE255A649L}},{{8UL,1UL,4294967288UL,1UL,0xE255A649L},{8UL,1UL,4294967288UL,1UL,0xE255A649L}},{{8UL,1UL,4294967288UL,1UL,0xE255A649L},{8UL,1UL,4294967288UL,1UL,0xE255A649L}},{{8UL,1UL,4294967288UL,1UL,0xE255A649L},{8UL,1UL,4294967288UL,1UL,0xE255A649L}},{{8UL,1UL,4294967288UL,1UL,0xE255A649L},{8UL,1UL,4294967288UL,1UL,0xE255A649L}}};
            VECTOR(uint16_t, 4) l_219 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL);
            VECTOR(int16_t, 4) l_233 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x706FL), 0x706FL);
            int32_t **l_245 = &l_140[1][1][6];
            VECTOR(int32_t, 4) l_258 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 1L), 1L);
            int64_t l_286[7] = {9L,(-1L),9L,9L,(-1L),9L,9L};
            uint64_t *l_306 = (void*)0;
            VECTOR(uint64_t, 4) l_348 = (VECTOR(uint64_t, 4))(0x8F11FF991B019613L, (VECTOR(uint64_t, 2))(0x8F11FF991B019613L, 0xDFA68401D7CD12CAL), 0xDFA68401D7CD12CAL);
            VECTOR(int32_t, 2) l_370 = (VECTOR(int32_t, 2))(0x73D9572DL, 0L);
            int32_t l_381 = 0x4BE1740BL;
            VECTOR(uint8_t, 2) l_409 = (VECTOR(uint8_t, 2))(0x8AL, 0x63L);
            int i, j, k;
            (1 + 1);
        }
        (**p_1035->g_139) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_444.s59ed446704dda420)).s0, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(0x2363F794L, (-1L))).xxyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(l_445.s3753)).xxyxzyxx, ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_446.s4565)).odd)).xxyxxyxyyxxxxxyy, ((VECTOR(int32_t, 2))(0x2D36BBB2L, 0x27DCD597L)).xyyxyxyyyyxxyyxy, ((VECTOR(int32_t, 16))(l_447.s00d3a8e017e6bf83))))).odd))).s0277136506167575)).s595f)).zywwywzz)))).even))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(l_448.sb386)), ((VECTOR(int32_t, 4))(0x55E4C074L, ((*p_1035->g_102) && ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(0x6773408CL, 1L)).lo, ((++(*l_230)) ^ p_79))), 0x41L, 0xDEL, 0xFBL)), 0UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 8))(1UL, 0x40L, (((p_79++) && ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((*p_1035->g_28) ^ (((((((safe_lshift_func_uint8_t_u_u(((*p_1035->g_28) == ((*p_1035->g_43) | (p_1035->g_210.y & ((((p_1035->g_428.z , (((*l_457) = (void*)0) != (void*)0)) == 0x78A24DA53F6C28C9L) && (**l_138)) | 0x4025L)))), 2)) , (*p_1035->g_28)) != p_79) | (**l_138)) , (void*)0) != &p_78) <= l_459)), ((VECTOR(uint64_t, 2))(0xB9FBFB565B3F2B5BL)), (**l_138), ((VECTOR(uint64_t, 2))(0xAD9D8C9A757FD1ACL)), 0x301DF735A181AD9CL, 1UL)).s42)), 18446744073709551612UL, 0x2BEDD8BF22F229C3L)).x) == 65527UL), ((VECTOR(uint8_t, 4))(0x3EL)), 0x81L)).lo, ((VECTOR(uint8_t, 4))(248UL))))).hi)), 0x56L)).s6), 0x6BCD2CA4L, 0x74E98ED3L))))), ((VECTOR(int32_t, 4))(0L))))).zxzwwxyx)), ((VECTOR(int32_t, 2))(0x73677442L)), (-8L))).s8d, ((VECTOR(int32_t, 2))(0x374AFB53L))))).xyyy)).w;
        (**l_138) = (**p_1035->g_139);
    }
    else
    { /* block id: 163 */
        VECTOR(int16_t, 2) l_468 = (VECTOR(int16_t, 2))(0x1EB2L, 0x049DL);
        VECTOR(int32_t, 2) l_494 = (VECTOR(int32_t, 2))((-5L), 0x53979A24L);
        int32_t l_496 = (-3L);
        uint16_t l_547 = 0xD7C1L;
        uint32_t *l_599 = (void*)0;
        int32_t l_606 = 0x1D1583ABL;
        int i;
        for (p_1035->g_29 = 0; (p_1035->g_29 < 29); p_1035->g_29 = safe_add_func_int32_t_s_s(p_1035->g_29, 6))
        { /* block id: 166 */
            uint32_t l_480 = 0x94486627L;
            int32_t *l_486 = (void*)0;
            VECTOR(int64_t, 2) l_487 = (VECTOR(int64_t, 2))((-4L), 1L);
            int i;
            for (p_79 = (-16); (p_79 < 48); p_79 = safe_add_func_uint16_t_u_u(p_79, 1))
            { /* block id: 169 */
                int32_t *l_485 = (void*)0;
                VECTOR(int32_t, 16) l_497 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
                int i;
                for (p_1035->g_229 = 0; (p_1035->g_229 < 60); p_1035->g_229 = safe_add_func_uint32_t_u_u(p_1035->g_229, 7))
                { /* block id: 172 */
                    int16_t *l_469 = (void*)0;
                    int16_t *l_470 = (void*)0;
                    int16_t *l_471 = (void*)0;
                    int16_t *l_472 = &l_273[0];
                    VECTOR(uint32_t, 8) l_473 = (VECTOR(uint32_t, 8))(0x7305ED18L, (VECTOR(uint32_t, 4))(0x7305ED18L, (VECTOR(uint32_t, 2))(0x7305ED18L, 1UL), 1UL), 1UL, 0x7305ED18L, 1UL);
                    int16_t *l_492 = (void*)0;
                    int16_t *l_493[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t l_495[1][5] = {{0x601E53C5L,0x601E53C5L,0x601E53C5L,0x601E53C5L,0x601E53C5L}};
                    int i, j;
                    l_497.s1 &= ((*p_1035->g_55) = ((FAKE_DIVERGE(p_1035->local_2_offset, get_local_id(2), 10) , 0L) , (safe_mul_func_int16_t_s_s(((*l_472) = ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(0x5C02L, 0x77ADL)).xyxy, ((VECTOR(int16_t, 2))(l_468.yx)).yyyx))).z), (l_496 = (((VECTOR(uint32_t, 16))(l_473.s6266464665712025)).s1 , (l_495[0][1] = (p_79 ^ (l_494.x = (safe_sub_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((l_480--) , ((safe_lshift_func_int16_t_s_s(l_480, 0)) <= (((l_485 != l_486) < ((VECTOR(int64_t, 2))(l_487.xx)).hi) == 0x44CEL))), p_79)), (p_79 | (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((1L & p_79), p_79)), l_468.y))))), l_487.y)))))))))));
                    (*p_1035->g_139) = (*p_1035->g_139);
                }
            }
            (*p_1035->g_139) = l_486;
            return p_79;
        }
        p_1035->g_498++;
        l_496 ^= (**p_1035->g_139);
        for (p_1035->g_29 = 0; (p_1035->g_29 != 50); p_1035->g_29 = safe_add_func_uint64_t_u_u(p_1035->g_29, 6))
        { /* block id: 190 */
            VECTOR(int16_t, 8) l_505 = (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x1F81L), 0x1F81L), 0x1F81L, (-2L), 0x1F81L);
            int32_t *l_520 = (void*)0;
            VECTOR(int16_t, 4) l_535 = (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, (-1L)), (-1L));
            int32_t l_574[2][5][9] = {{{0x6E39B0DFL,0L,1L,0L,0x6E39B0DFL,0x6E39B0DFL,0L,1L,0L},{0x6E39B0DFL,0L,1L,0L,0x6E39B0DFL,0x6E39B0DFL,0L,1L,0L},{0x6E39B0DFL,0L,1L,0L,0x6E39B0DFL,0x6E39B0DFL,0L,1L,0L},{0x6E39B0DFL,0L,1L,0L,0x6E39B0DFL,0x6E39B0DFL,0L,1L,0L},{0x6E39B0DFL,0L,1L,0L,0x6E39B0DFL,0x6E39B0DFL,0L,1L,0L}},{{0x6E39B0DFL,0L,1L,0L,0x6E39B0DFL,0x6E39B0DFL,0L,1L,0L},{0x6E39B0DFL,0L,1L,0L,0x6E39B0DFL,0x6E39B0DFL,0L,1L,0L},{0x6E39B0DFL,0L,1L,0L,0x6E39B0DFL,0x6E39B0DFL,0L,1L,0L},{0x6E39B0DFL,0L,1L,0L,0x6E39B0DFL,0x6E39B0DFL,0L,1L,0L},{0x6E39B0DFL,0L,1L,0L,0x6E39B0DFL,0x6E39B0DFL,0L,1L,0L}}};
            VECTOR(int32_t, 8) l_590 = (VECTOR(int32_t, 8))(0x3696A39BL, (VECTOR(int32_t, 4))(0x3696A39BL, (VECTOR(int32_t, 2))(0x3696A39BL, 1L), 1L), 1L, 0x3696A39BL, 1L);
            VECTOR(uint8_t, 2) l_598 = (VECTOR(uint8_t, 2))(0x39L, 255UL);
            int i, j, k;
            (*p_1035->g_139) = &l_162;
            for (l_162 = 0; (l_162 == (-1)); l_162 = safe_sub_func_int8_t_s_s(l_162, 3))
            { /* block id: 194 */
                uint32_t l_517 = 0x68DECB67L;
                int16_t l_519[8];
                int32_t l_521 = 0L;
                int32_t l_540[1][9][1];
                uint16_t l_573[7];
                int64_t *l_588 = (void*)0;
                int64_t **l_587 = &l_588;
                int8_t *l_602 = (void*)0;
                int8_t *l_603 = (void*)0;
                int8_t *l_604 = (void*)0;
                int8_t *l_605 = &l_538;
                int16_t *l_607 = &l_519[7];
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_519[i] = 0x469FL;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 9; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_540[i][j][k] = 0x490EE047L;
                    }
                }
                for (i = 0; i < 7; i++)
                    l_573[i] = 65535UL;
                l_521 = (0x7F4A4DD0B98F2698L && ((((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_505.s4604)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_1035->g_506.s40a3)), 0x7EDFL, ((VECTOR(int16_t, 2))(0L, (-2L))), 0x658BL)).s64)).lo, (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(l_511.s64feee750804b5f0)).sf, ((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 2))(0x81ECL, 0x7A9DL)).xyyxyxxy, ((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 16))((l_518[0] = (l_494.y = (safe_unary_minus_func_int32_t_s(((p_1035->g_130.s1 >= (l_517 , (p_1035->g_412.x && (&l_273[2] == (p_79 , p_1035->g_117[1][3]))))) && (p_1035->g_299.w , 0L)))))), ((VECTOR(uint16_t, 4))(65533UL)), p_79, 0x772BL, 6UL, 0UL, 0x4CC8L, 6UL, ((VECTOR(uint16_t, 2))(0x80AEL)), p_79, 65532UL, 65535UL)), ((VECTOR(uint16_t, 16))(65534UL)), ((VECTOR(uint16_t, 16))(65527UL))))).odd, ((VECTOR(uint16_t, 8))(65527UL))))).s3, l_517)), l_519[7])) ^ p_79))), p_1035->g_57.w)), 0x0CE8L, 0x7282L)).s00)).yyyxyxxy))))).s3444655106717670)).odd, ((VECTOR(uint16_t, 8))(65534UL))))).s4 , &l_496) == l_520));
                for (p_79 = 0; (p_79 != 42); ++p_79)
                { /* block id: 200 */
                    uint8_t l_524[2];
                    int32_t l_539 = (-6L);
                    int16_t *l_552[7][4] = {{(void*)0,(void*)0,(void*)0,&l_273[2]},{(void*)0,(void*)0,(void*)0,&l_273[2]},{(void*)0,(void*)0,(void*)0,&l_273[2]},{(void*)0,(void*)0,(void*)0,&l_273[2]},{(void*)0,(void*)0,(void*)0,&l_273[2]},{(void*)0,(void*)0,(void*)0,&l_273[2]},{(void*)0,(void*)0,(void*)0,&l_273[2]}};
                    int8_t l_555 = 0x7BL;
                    int8_t *l_572 = &l_555;
                    int64_t **l_585 = (void*)0;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_524[i] = 0xFBL;
                    (1 + 1);
                }
                l_521 = ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(0x018E1EA9L, ((VECTOR(int32_t, 8))(p_1035->g_589.s14226431)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_590.s55)))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_591.s21)), 0x6293A76CL, 0x1D4374CFL)), 8L)).s87d4, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(0x511FL, 6L)).xxxxxyyy, ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 2))(0x4B87L, 1UL)).yxyyxxyy, ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 4))((p_79 <= p_79), ((VECTOR(uint16_t, 2))(l_592.xz)), 0UL)).lo, ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 4))(1UL, ((((((((VECTOR(int16_t, 16))((l_593 == l_594), ((VECTOR(int16_t, 8))(p_1035->g_595.zzzzzwxz)), 0x7387L, ((*l_607) = (l_606 = (+((safe_rshift_func_uint8_t_u_u(l_521, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_598.yxyxxyxy)), ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(1UL, 254UL)), (uint8_t)(((l_540[0][0][0] = ((((void*)0 != l_599) | (safe_sub_func_uint8_t_u_u((((*l_605) ^= 0x68L) == (p_1035->g_412.y , (-1L))), 0x76L))) > p_1035->g_221.z)) , 0x27L) < p_1035->g_299.y)))), ((VECTOR(uint8_t, 4))(3UL)), 0UL, 0x30L)).odd)).s7)) , l_573[6])))), ((VECTOR(int16_t, 2))(0x0768L)), ((VECTOR(int16_t, 2))(0x44DCL)), 0L)).s5 , (-7L)) & 0x4412E354L) , GROUP_DIVERGE(1, 1)) > l_573[6]) & 0x36DBL) , 0x0DL), 0x41L, 0x11L)), ((VECTOR(uint8_t, 4))(0xA6L)), ((VECTOR(uint8_t, 4))(1UL))))), ((VECTOR(uint8_t, 4))(255UL)), ((VECTOR(uint8_t, 4))(0UL))))).hi)), ((VECTOR(uint8_t, 2))(0x08L)), 255UL, ((VECTOR(uint8_t, 2))(0x35L)), 0xADL)).even)), (uint8_t)l_540[0][0][0], (uint8_t)p_79))).wyxxwxyxyzyxywzx, ((VECTOR(uint8_t, 16))(0x97L))))).sd8))).xyxyyxxyyxxyyyxx, ((VECTOR(uint16_t, 16))(65527UL))))).lo, ((VECTOR(uint16_t, 8))(1UL))))).s1740465010073357)).sb5, ((VECTOR(uint16_t, 2))(0x7909L)), ((VECTOR(uint16_t, 2))(0x04E4L))))).xyxx)).xxwzxywzyzxxxyxw)).s9714, (uint16_t)GROUP_DIVERGE(2, 1)))), ((VECTOR(uint16_t, 4))(0x0B87L))))).zyyzywwz))).even))).x;
                (*p_1035->g_43) = (0x0CL | (!((((safe_lshift_func_uint8_t_u_u(((*p_1035->g_102) = 246UL), 0)) < (safe_lshift_func_uint16_t_u_u((&l_162 != (*p_1035->g_139)), 7))) || 0x08AAL) ^ (safe_lshift_func_int16_t_s_s(l_606, ((l_540[0][0][0] &= 5L) <= ((safe_mod_func_uint8_t_u_u(((l_573[1] == (((l_521 ^= (safe_div_func_int16_t_s_s(l_618[1], (-1L)))) | p_79) == 0x1D2AFB90L)) , 255UL), 0xE2L)) , p_1035->g_203.s4)))))));
            }
        }
    }
    (*p_1035->g_55) |= ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_619.se3d17476)), ((VECTOR(int32_t, 2))(0x6BC2A650L, 1L)), (safe_rshift_func_uint8_t_u_u((*p_1035->g_28), (safe_mod_func_uint64_t_u_u(((*l_593) |= (p_1035->g_55 == (((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))((((((*l_626) = p_78) != (void*)0) , 4L) , (p_1035->g_220.s0 = ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((FAKE_DIVERGE(p_1035->local_2_offset, get_local_id(2), 10) , (safe_sub_func_int8_t_s_s(0x48L, (0x97A0L | (((!(((*p_1035->g_102) = p_79) > ((void*)0 == &p_1035->g_229))) , p_79) , l_629))))) , p_1035->g_566.s1), 0L, 0x21L, 0x10L)).yxxxyxyw)).hi)).ywwwzyzywxyxwzwy, ((VECTOR(int8_t, 16))(0x23L)), ((VECTOR(int8_t, 16))(0L))))).s2)), ((VECTOR(int8_t, 4))(0x41L)), (-1L), 8L, (-1L))).s4, p_79)) > p_1035->g_530.x) , &l_618[1]))), p_79)))), p_79, 0x3878368DL, ((VECTOR(int32_t, 2))(1L)), (-4L))).sa && 0x2269AD9EL) , p_79);
    return p_79;
}


/* ------------------------------------------ */
/* 
 * reads : p_1035->g_117
 * writes: p_1035->g_55
 */
int16_t * func_80(int32_t  p_81, int16_t * p_82, struct S0 * p_1035)
{ /* block id: 40 */
    int32_t *l_118 = &p_1035->g_44;
    int32_t **l_119 = &p_1035->g_55;
    int16_t *l_122 = (void*)0;
    (*l_119) = l_118;
    for (p_81 = (-14); (p_81 >= 0); ++p_81)
    { /* block id: 44 */
        return l_122;
    }
    return p_1035->g_117[0][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1035->g_103 p_1035->g_44 p_1035->g_29 p_1035->g_57
 * writes: p_1035->g_44 p_1035->g_29
 */
uint16_t  func_85(int16_t * p_86, int16_t * p_87, struct S0 * p_1035)
{ /* block id: 26 */
    int32_t *l_104[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_105 = (-7L);
    int16_t l_112 = 0x3718L;
    int i;
    l_105 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1035->g_103.s31)).xxyxyxxyyxyyxxxy)).s8bda)).w;
    for (p_1035->g_44 = 3; (p_1035->g_44 >= 14); p_1035->g_44 = safe_add_func_uint16_t_u_u(p_1035->g_44, 1))
    { /* block id: 30 */
        int32_t *l_110 = (void*)0;
        int32_t l_113[6][1][3] = {{{2L,2L,2L}},{{2L,2L,2L}},{{2L,2L,2L}},{{2L,2L,2L}},{{2L,2L,2L}},{{2L,2L,2L}}};
        uint8_t l_114 = 0xB1L;
        int i, j, k;
        for (p_1035->g_29 = 0; (p_1035->g_29 == 60); ++p_1035->g_29)
        { /* block id: 33 */
            int32_t **l_111 = &l_104[1];
            (*l_111) = l_110;
            l_104[1] = (*l_111);
        }
        l_114++;
    }
    return p_1035->g_57.w;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[5];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 5; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[5];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 5; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[170];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 170; i++)
            l_comm_values[i] = 1;
    struct S0 c_1036;
    struct S0* p_1035 = &c_1036;
    struct S0 c_1037 = {
        {{{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L}},{{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L}},{{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L}},{{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L}},{{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L}},{{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L}},{{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L},{0x0628405CL,0L,0x5D2D9150L,1L}}}, // p_1035->g_2
        0x31A7A81AL, // p_1035->g_3
        1L, // p_1035->g_4
        253UL, // p_1035->g_17
        0UL, // p_1035->g_29
        &p_1035->g_29, // p_1035->g_28
        (VECTOR(int16_t, 4))(0x4996L, (VECTOR(int16_t, 2))(0x4996L, 0x00EBL), 0x00EBL), // p_1035->g_39
        0x721BA6C3L, // p_1035->g_44
        &p_1035->g_44, // p_1035->g_43
        &p_1035->g_4, // p_1035->g_55
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), // p_1035->g_57
        {0x50L,0x50L,0x50L,0x50L,0x50L,0x50L,0x50L}, // p_1035->g_67
        (void*)0, // p_1035->g_102
        (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 2L), 2L), 2L, 4L, 2L), // p_1035->g_103
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_1035->g_117
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xCAL), 0xCAL), 0xCAL, 0UL, 0xCAL), // p_1035->g_130
        (VECTOR(int8_t, 16))(0x36L, (VECTOR(int8_t, 4))(0x36L, (VECTOR(int8_t, 2))(0x36L, 0x3DL), 0x3DL), 0x3DL, 0x36L, 0x3DL, (VECTOR(int8_t, 2))(0x36L, 0x3DL), (VECTOR(int8_t, 2))(0x36L, 0x3DL), 0x36L, 0x3DL, 0x36L, 0x3DL), // p_1035->g_133
        &p_1035->g_55, // p_1035->g_139
        (VECTOR(uint16_t, 8))(0xF95DL, (VECTOR(uint16_t, 4))(0xF95DL, (VECTOR(uint16_t, 2))(0xF95DL, 65535UL), 65535UL), 65535UL, 0xF95DL, 65535UL), // p_1035->g_156
        (VECTOR(uint64_t, 8))(0x6290215A8C0706BFL, (VECTOR(uint64_t, 4))(0x6290215A8C0706BFL, (VECTOR(uint64_t, 2))(0x6290215A8C0706BFL, 0x0EC6072FB50480B2L), 0x0EC6072FB50480B2L), 0x0EC6072FB50480B2L, 0x6290215A8C0706BFL, 0x0EC6072FB50480B2L), // p_1035->g_157
        (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0xE6AA67BEE1DDF889L), 0xE6AA67BEE1DDF889L), // p_1035->g_177
        (VECTOR(int32_t, 2))(0x6E1C05ADL, 0x4DEAE775L), // p_1035->g_192
        0UL, // p_1035->g_196
        (VECTOR(int8_t, 4))(0x57L, (VECTOR(int8_t, 2))(0x57L, 0x54L), 0x54L), // p_1035->g_202
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL), // p_1035->g_203
        (VECTOR(uint16_t, 16))(0x1408L, (VECTOR(uint16_t, 4))(0x1408L, (VECTOR(uint16_t, 2))(0x1408L, 0x8DCCL), 0x8DCCL), 0x8DCCL, 0x1408L, 0x8DCCL, (VECTOR(uint16_t, 2))(0x1408L, 0x8DCCL), (VECTOR(uint16_t, 2))(0x1408L, 0x8DCCL), 0x1408L, 0x8DCCL, 0x1408L, 0x8DCCL), // p_1035->g_209
        (VECTOR(uint16_t, 2))(65531UL, 0x54A3L), // p_1035->g_210
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x41L), 0x41L), 0x41L, 1L, 0x41L), // p_1035->g_220
        (VECTOR(int32_t, 4))(0x4DE80103L, (VECTOR(int32_t, 2))(0x4DE80103L, 1L), 1L), // p_1035->g_221
        1UL, // p_1035->g_229
        (void*)0, // p_1035->g_231
        (VECTOR(uint32_t, 8))(0xB38BDF08L, (VECTOR(uint32_t, 4))(0xB38BDF08L, (VECTOR(uint32_t, 2))(0xB38BDF08L, 4294967289UL), 4294967289UL), 4294967289UL, 0xB38BDF08L, 4294967289UL), // p_1035->g_262
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x9334L), 0x9334L), // p_1035->g_281
        (VECTOR(uint64_t, 4))(0xDCA163E41802B604L, (VECTOR(uint64_t, 2))(0xDCA163E41802B604L, 0x4AF70A23419B1AD9L), 0x4AF70A23419B1AD9L), // p_1035->g_299
        0x200AL, // p_1035->g_316
        (VECTOR(int8_t, 2))(1L, 7L), // p_1035->g_330
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xFBCC56B9A2241846L), // p_1035->g_349
        (VECTOR(int64_t, 4))(0x13FD238DC69F49F4L, (VECTOR(int64_t, 2))(0x13FD238DC69F49F4L, (-4L)), (-4L)), // p_1035->g_351
        (void*)0, // p_1035->g_354
        (VECTOR(int64_t, 4))(0x65729D2A4C777DCFL, (VECTOR(int64_t, 2))(0x65729D2A4C777DCFL, 0x1AE90D4F34B50BA9L), 0x1AE90D4F34B50BA9L), // p_1035->g_394
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 18446744073709551615UL, 18446744073709551610UL), // p_1035->g_395
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1035->g_411
        (VECTOR(uint8_t, 2))(3UL, 0x3CL), // p_1035->g_412
        (VECTOR(uint8_t, 4))(0x95L, (VECTOR(uint8_t, 2))(0x95L, 0xE9L), 0xE9L), // p_1035->g_413
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x812EL), 0x812EL), // p_1035->g_428
        (VECTOR(uint16_t, 2))(65535UL, 0UL), // p_1035->g_433
        9UL, // p_1035->g_498
        (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0x1AEAL), 0x1AEAL), 0x1AEAL, (-4L), 0x1AEAL, (VECTOR(int16_t, 2))((-4L), 0x1AEAL), (VECTOR(int16_t, 2))((-4L), 0x1AEAL), (-4L), 0x1AEAL, (-4L), 0x1AEAL), // p_1035->g_506
        (VECTOR(uint8_t, 2))(0xE1L, 3UL), // p_1035->g_530
        (VECTOR(uint16_t, 8))(0xBD5BL, (VECTOR(uint16_t, 4))(0xBD5BL, (VECTOR(uint16_t, 2))(0xBD5BL, 9UL), 9UL), 9UL, 0xBD5BL, 9UL), // p_1035->g_566
        (VECTOR(int32_t, 8))(0x1A66B615L, (VECTOR(int32_t, 4))(0x1A66B615L, (VECTOR(int32_t, 2))(0x1A66B615L, (-4L)), (-4L)), (-4L), 0x1A66B615L, (-4L)), // p_1035->g_589
        (VECTOR(int16_t, 4))(0x2B01L, (VECTOR(int16_t, 2))(0x2B01L, 0x2114L), 0x2114L), // p_1035->g_595
        0x2B465753L, // p_1035->g_639
        (VECTOR(uint32_t, 2))(0x81B9B9EBL, 0UL), // p_1035->g_744
        {4L,4L,4L,4L,4L,4L,4L}, // p_1035->g_766
        0x378DL, // p_1035->g_774
        4294967295UL, // p_1035->g_776
        (VECTOR(int64_t, 16))(0x3A52A8DDAB3C1EC6L, (VECTOR(int64_t, 4))(0x3A52A8DDAB3C1EC6L, (VECTOR(int64_t, 2))(0x3A52A8DDAB3C1EC6L, 6L), 6L), 6L, 0x3A52A8DDAB3C1EC6L, 6L, (VECTOR(int64_t, 2))(0x3A52A8DDAB3C1EC6L, 6L), (VECTOR(int64_t, 2))(0x3A52A8DDAB3C1EC6L, 6L), 0x3A52A8DDAB3C1EC6L, 6L, 0x3A52A8DDAB3C1EC6L, 6L), // p_1035->g_788
        (VECTOR(int64_t, 8))(0x61D5A78BB8773B2BL, (VECTOR(int64_t, 4))(0x61D5A78BB8773B2BL, (VECTOR(int64_t, 2))(0x61D5A78BB8773B2BL, 0x596A8AB4CBBC5735L), 0x596A8AB4CBBC5735L), 0x596A8AB4CBBC5735L, 0x61D5A78BB8773B2BL, 0x596A8AB4CBBC5735L), // p_1035->g_799
        (VECTOR(int64_t, 2))(1L, 0x0BE159386EF95AD2L), // p_1035->g_801
        (void*)0, // p_1035->g_826
        &p_1035->g_826, // p_1035->g_825
        (-3L), // p_1035->g_834
        (VECTOR(int64_t, 2))((-5L), 1L), // p_1035->g_840
        (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), (-6L)), (-6L)), // p_1035->g_852
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), // p_1035->g_854
        (VECTOR(int64_t, 2))(0L, 0x24BD10476C3E029DL), // p_1035->g_855
        (VECTOR(int8_t, 16))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x1FL), 0x1FL), 0x1FL, (-7L), 0x1FL, (VECTOR(int8_t, 2))((-7L), 0x1FL), (VECTOR(int8_t, 2))((-7L), 0x1FL), (-7L), 0x1FL, (-7L), 0x1FL), // p_1035->g_860
        (VECTOR(int16_t, 16))(0x2CE4L, (VECTOR(int16_t, 4))(0x2CE4L, (VECTOR(int16_t, 2))(0x2CE4L, 0x2B04L), 0x2B04L), 0x2B04L, 0x2CE4L, 0x2B04L, (VECTOR(int16_t, 2))(0x2CE4L, 0x2B04L), (VECTOR(int16_t, 2))(0x2CE4L, 0x2B04L), 0x2CE4L, 0x2B04L, 0x2CE4L, 0x2B04L), // p_1035->g_889
        (VECTOR(int16_t, 2))(0x30BAL, 0x5D42L), // p_1035->g_890
        (VECTOR(int16_t, 8))(0x6211L, (VECTOR(int16_t, 4))(0x6211L, (VECTOR(int16_t, 2))(0x6211L, 0x2B7EL), 0x2B7EL), 0x2B7EL, 0x6211L, 0x2B7EL), // p_1035->g_893
        (VECTOR(int16_t, 2))((-8L), 0x1736L), // p_1035->g_894
        (VECTOR(int16_t, 2))(0x52D8L, 0x28EAL), // p_1035->g_896
        (VECTOR(uint32_t, 16))(4294967287UL, (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 4294967292UL), 4294967292UL), 4294967292UL, 4294967287UL, 4294967292UL, (VECTOR(uint32_t, 2))(4294967287UL, 4294967292UL), (VECTOR(uint32_t, 2))(4294967287UL, 4294967292UL), 4294967287UL, 4294967292UL, 4294967287UL, 4294967292UL), // p_1035->g_901
        (VECTOR(int32_t, 2))(0x215B8D00L, 0x1260BCD6L), // p_1035->g_1009
        (VECTOR(int64_t, 2))(1L, 0x60C91EBCE98B1A1CL), // p_1035->g_1015
        0UL, // p_1035->g_1024
        0xB411FCF3L, // p_1035->g_1025
        {&p_1035->g_1024,&p_1035->g_1024,&p_1035->g_1024,&p_1035->g_1024}, // p_1035->g_1023
        &p_1035->g_1023[1], // p_1035->g_1022
        (VECTOR(int32_t, 2))(0x0FF58237L, 4L), // p_1035->g_1028
        0, // p_1035->v_collective
        sequence_input[get_global_id(0)], // p_1035->global_0_offset
        sequence_input[get_global_id(1)], // p_1035->global_1_offset
        sequence_input[get_global_id(2)], // p_1035->global_2_offset
        sequence_input[get_local_id(0)], // p_1035->local_0_offset
        sequence_input[get_local_id(1)], // p_1035->local_1_offset
        sequence_input[get_local_id(2)], // p_1035->local_2_offset
        sequence_input[get_group_id(0)], // p_1035->group_0_offset
        sequence_input[get_group_id(1)], // p_1035->group_1_offset
        sequence_input[get_group_id(2)], // p_1035->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 170)), permutations[0][get_linear_local_id()])), // p_1035->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1036 = c_1037;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1035);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1035->g_2[i][j][k], "p_1035->g_2[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1035->g_3, "p_1035->g_3", print_hash_value);
    transparent_crc(p_1035->g_4, "p_1035->g_4", print_hash_value);
    transparent_crc(p_1035->g_17, "p_1035->g_17", print_hash_value);
    transparent_crc(p_1035->g_29, "p_1035->g_29", print_hash_value);
    transparent_crc(p_1035->g_39.x, "p_1035->g_39.x", print_hash_value);
    transparent_crc(p_1035->g_39.y, "p_1035->g_39.y", print_hash_value);
    transparent_crc(p_1035->g_39.z, "p_1035->g_39.z", print_hash_value);
    transparent_crc(p_1035->g_39.w, "p_1035->g_39.w", print_hash_value);
    transparent_crc(p_1035->g_44, "p_1035->g_44", print_hash_value);
    transparent_crc(p_1035->g_57.x, "p_1035->g_57.x", print_hash_value);
    transparent_crc(p_1035->g_57.y, "p_1035->g_57.y", print_hash_value);
    transparent_crc(p_1035->g_57.z, "p_1035->g_57.z", print_hash_value);
    transparent_crc(p_1035->g_57.w, "p_1035->g_57.w", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1035->g_67[i], "p_1035->g_67[i]", print_hash_value);

    }
    transparent_crc(p_1035->g_103.s0, "p_1035->g_103.s0", print_hash_value);
    transparent_crc(p_1035->g_103.s1, "p_1035->g_103.s1", print_hash_value);
    transparent_crc(p_1035->g_103.s2, "p_1035->g_103.s2", print_hash_value);
    transparent_crc(p_1035->g_103.s3, "p_1035->g_103.s3", print_hash_value);
    transparent_crc(p_1035->g_103.s4, "p_1035->g_103.s4", print_hash_value);
    transparent_crc(p_1035->g_103.s5, "p_1035->g_103.s5", print_hash_value);
    transparent_crc(p_1035->g_103.s6, "p_1035->g_103.s6", print_hash_value);
    transparent_crc(p_1035->g_103.s7, "p_1035->g_103.s7", print_hash_value);
    transparent_crc(p_1035->g_130.s0, "p_1035->g_130.s0", print_hash_value);
    transparent_crc(p_1035->g_130.s1, "p_1035->g_130.s1", print_hash_value);
    transparent_crc(p_1035->g_130.s2, "p_1035->g_130.s2", print_hash_value);
    transparent_crc(p_1035->g_130.s3, "p_1035->g_130.s3", print_hash_value);
    transparent_crc(p_1035->g_130.s4, "p_1035->g_130.s4", print_hash_value);
    transparent_crc(p_1035->g_130.s5, "p_1035->g_130.s5", print_hash_value);
    transparent_crc(p_1035->g_130.s6, "p_1035->g_130.s6", print_hash_value);
    transparent_crc(p_1035->g_130.s7, "p_1035->g_130.s7", print_hash_value);
    transparent_crc(p_1035->g_133.s0, "p_1035->g_133.s0", print_hash_value);
    transparent_crc(p_1035->g_133.s1, "p_1035->g_133.s1", print_hash_value);
    transparent_crc(p_1035->g_133.s2, "p_1035->g_133.s2", print_hash_value);
    transparent_crc(p_1035->g_133.s3, "p_1035->g_133.s3", print_hash_value);
    transparent_crc(p_1035->g_133.s4, "p_1035->g_133.s4", print_hash_value);
    transparent_crc(p_1035->g_133.s5, "p_1035->g_133.s5", print_hash_value);
    transparent_crc(p_1035->g_133.s6, "p_1035->g_133.s6", print_hash_value);
    transparent_crc(p_1035->g_133.s7, "p_1035->g_133.s7", print_hash_value);
    transparent_crc(p_1035->g_133.s8, "p_1035->g_133.s8", print_hash_value);
    transparent_crc(p_1035->g_133.s9, "p_1035->g_133.s9", print_hash_value);
    transparent_crc(p_1035->g_133.sa, "p_1035->g_133.sa", print_hash_value);
    transparent_crc(p_1035->g_133.sb, "p_1035->g_133.sb", print_hash_value);
    transparent_crc(p_1035->g_133.sc, "p_1035->g_133.sc", print_hash_value);
    transparent_crc(p_1035->g_133.sd, "p_1035->g_133.sd", print_hash_value);
    transparent_crc(p_1035->g_133.se, "p_1035->g_133.se", print_hash_value);
    transparent_crc(p_1035->g_133.sf, "p_1035->g_133.sf", print_hash_value);
    transparent_crc(p_1035->g_156.s0, "p_1035->g_156.s0", print_hash_value);
    transparent_crc(p_1035->g_156.s1, "p_1035->g_156.s1", print_hash_value);
    transparent_crc(p_1035->g_156.s2, "p_1035->g_156.s2", print_hash_value);
    transparent_crc(p_1035->g_156.s3, "p_1035->g_156.s3", print_hash_value);
    transparent_crc(p_1035->g_156.s4, "p_1035->g_156.s4", print_hash_value);
    transparent_crc(p_1035->g_156.s5, "p_1035->g_156.s5", print_hash_value);
    transparent_crc(p_1035->g_156.s6, "p_1035->g_156.s6", print_hash_value);
    transparent_crc(p_1035->g_156.s7, "p_1035->g_156.s7", print_hash_value);
    transparent_crc(p_1035->g_157.s0, "p_1035->g_157.s0", print_hash_value);
    transparent_crc(p_1035->g_157.s1, "p_1035->g_157.s1", print_hash_value);
    transparent_crc(p_1035->g_157.s2, "p_1035->g_157.s2", print_hash_value);
    transparent_crc(p_1035->g_157.s3, "p_1035->g_157.s3", print_hash_value);
    transparent_crc(p_1035->g_157.s4, "p_1035->g_157.s4", print_hash_value);
    transparent_crc(p_1035->g_157.s5, "p_1035->g_157.s5", print_hash_value);
    transparent_crc(p_1035->g_157.s6, "p_1035->g_157.s6", print_hash_value);
    transparent_crc(p_1035->g_157.s7, "p_1035->g_157.s7", print_hash_value);
    transparent_crc(p_1035->g_177.x, "p_1035->g_177.x", print_hash_value);
    transparent_crc(p_1035->g_177.y, "p_1035->g_177.y", print_hash_value);
    transparent_crc(p_1035->g_177.z, "p_1035->g_177.z", print_hash_value);
    transparent_crc(p_1035->g_177.w, "p_1035->g_177.w", print_hash_value);
    transparent_crc(p_1035->g_192.x, "p_1035->g_192.x", print_hash_value);
    transparent_crc(p_1035->g_192.y, "p_1035->g_192.y", print_hash_value);
    transparent_crc(p_1035->g_196, "p_1035->g_196", print_hash_value);
    transparent_crc(p_1035->g_202.x, "p_1035->g_202.x", print_hash_value);
    transparent_crc(p_1035->g_202.y, "p_1035->g_202.y", print_hash_value);
    transparent_crc(p_1035->g_202.z, "p_1035->g_202.z", print_hash_value);
    transparent_crc(p_1035->g_202.w, "p_1035->g_202.w", print_hash_value);
    transparent_crc(p_1035->g_203.s0, "p_1035->g_203.s0", print_hash_value);
    transparent_crc(p_1035->g_203.s1, "p_1035->g_203.s1", print_hash_value);
    transparent_crc(p_1035->g_203.s2, "p_1035->g_203.s2", print_hash_value);
    transparent_crc(p_1035->g_203.s3, "p_1035->g_203.s3", print_hash_value);
    transparent_crc(p_1035->g_203.s4, "p_1035->g_203.s4", print_hash_value);
    transparent_crc(p_1035->g_203.s5, "p_1035->g_203.s5", print_hash_value);
    transparent_crc(p_1035->g_203.s6, "p_1035->g_203.s6", print_hash_value);
    transparent_crc(p_1035->g_203.s7, "p_1035->g_203.s7", print_hash_value);
    transparent_crc(p_1035->g_209.s0, "p_1035->g_209.s0", print_hash_value);
    transparent_crc(p_1035->g_209.s1, "p_1035->g_209.s1", print_hash_value);
    transparent_crc(p_1035->g_209.s2, "p_1035->g_209.s2", print_hash_value);
    transparent_crc(p_1035->g_209.s3, "p_1035->g_209.s3", print_hash_value);
    transparent_crc(p_1035->g_209.s4, "p_1035->g_209.s4", print_hash_value);
    transparent_crc(p_1035->g_209.s5, "p_1035->g_209.s5", print_hash_value);
    transparent_crc(p_1035->g_209.s6, "p_1035->g_209.s6", print_hash_value);
    transparent_crc(p_1035->g_209.s7, "p_1035->g_209.s7", print_hash_value);
    transparent_crc(p_1035->g_209.s8, "p_1035->g_209.s8", print_hash_value);
    transparent_crc(p_1035->g_209.s9, "p_1035->g_209.s9", print_hash_value);
    transparent_crc(p_1035->g_209.sa, "p_1035->g_209.sa", print_hash_value);
    transparent_crc(p_1035->g_209.sb, "p_1035->g_209.sb", print_hash_value);
    transparent_crc(p_1035->g_209.sc, "p_1035->g_209.sc", print_hash_value);
    transparent_crc(p_1035->g_209.sd, "p_1035->g_209.sd", print_hash_value);
    transparent_crc(p_1035->g_209.se, "p_1035->g_209.se", print_hash_value);
    transparent_crc(p_1035->g_209.sf, "p_1035->g_209.sf", print_hash_value);
    transparent_crc(p_1035->g_210.x, "p_1035->g_210.x", print_hash_value);
    transparent_crc(p_1035->g_210.y, "p_1035->g_210.y", print_hash_value);
    transparent_crc(p_1035->g_220.s0, "p_1035->g_220.s0", print_hash_value);
    transparent_crc(p_1035->g_220.s1, "p_1035->g_220.s1", print_hash_value);
    transparent_crc(p_1035->g_220.s2, "p_1035->g_220.s2", print_hash_value);
    transparent_crc(p_1035->g_220.s3, "p_1035->g_220.s3", print_hash_value);
    transparent_crc(p_1035->g_220.s4, "p_1035->g_220.s4", print_hash_value);
    transparent_crc(p_1035->g_220.s5, "p_1035->g_220.s5", print_hash_value);
    transparent_crc(p_1035->g_220.s6, "p_1035->g_220.s6", print_hash_value);
    transparent_crc(p_1035->g_220.s7, "p_1035->g_220.s7", print_hash_value);
    transparent_crc(p_1035->g_221.x, "p_1035->g_221.x", print_hash_value);
    transparent_crc(p_1035->g_221.y, "p_1035->g_221.y", print_hash_value);
    transparent_crc(p_1035->g_221.z, "p_1035->g_221.z", print_hash_value);
    transparent_crc(p_1035->g_221.w, "p_1035->g_221.w", print_hash_value);
    transparent_crc(p_1035->g_229, "p_1035->g_229", print_hash_value);
    transparent_crc(p_1035->g_262.s0, "p_1035->g_262.s0", print_hash_value);
    transparent_crc(p_1035->g_262.s1, "p_1035->g_262.s1", print_hash_value);
    transparent_crc(p_1035->g_262.s2, "p_1035->g_262.s2", print_hash_value);
    transparent_crc(p_1035->g_262.s3, "p_1035->g_262.s3", print_hash_value);
    transparent_crc(p_1035->g_262.s4, "p_1035->g_262.s4", print_hash_value);
    transparent_crc(p_1035->g_262.s5, "p_1035->g_262.s5", print_hash_value);
    transparent_crc(p_1035->g_262.s6, "p_1035->g_262.s6", print_hash_value);
    transparent_crc(p_1035->g_262.s7, "p_1035->g_262.s7", print_hash_value);
    transparent_crc(p_1035->g_281.x, "p_1035->g_281.x", print_hash_value);
    transparent_crc(p_1035->g_281.y, "p_1035->g_281.y", print_hash_value);
    transparent_crc(p_1035->g_281.z, "p_1035->g_281.z", print_hash_value);
    transparent_crc(p_1035->g_281.w, "p_1035->g_281.w", print_hash_value);
    transparent_crc(p_1035->g_299.x, "p_1035->g_299.x", print_hash_value);
    transparent_crc(p_1035->g_299.y, "p_1035->g_299.y", print_hash_value);
    transparent_crc(p_1035->g_299.z, "p_1035->g_299.z", print_hash_value);
    transparent_crc(p_1035->g_299.w, "p_1035->g_299.w", print_hash_value);
    transparent_crc(p_1035->g_316, "p_1035->g_316", print_hash_value);
    transparent_crc(p_1035->g_330.x, "p_1035->g_330.x", print_hash_value);
    transparent_crc(p_1035->g_330.y, "p_1035->g_330.y", print_hash_value);
    transparent_crc(p_1035->g_349.x, "p_1035->g_349.x", print_hash_value);
    transparent_crc(p_1035->g_349.y, "p_1035->g_349.y", print_hash_value);
    transparent_crc(p_1035->g_351.x, "p_1035->g_351.x", print_hash_value);
    transparent_crc(p_1035->g_351.y, "p_1035->g_351.y", print_hash_value);
    transparent_crc(p_1035->g_351.z, "p_1035->g_351.z", print_hash_value);
    transparent_crc(p_1035->g_351.w, "p_1035->g_351.w", print_hash_value);
    transparent_crc(p_1035->g_394.x, "p_1035->g_394.x", print_hash_value);
    transparent_crc(p_1035->g_394.y, "p_1035->g_394.y", print_hash_value);
    transparent_crc(p_1035->g_394.z, "p_1035->g_394.z", print_hash_value);
    transparent_crc(p_1035->g_394.w, "p_1035->g_394.w", print_hash_value);
    transparent_crc(p_1035->g_395.s0, "p_1035->g_395.s0", print_hash_value);
    transparent_crc(p_1035->g_395.s1, "p_1035->g_395.s1", print_hash_value);
    transparent_crc(p_1035->g_395.s2, "p_1035->g_395.s2", print_hash_value);
    transparent_crc(p_1035->g_395.s3, "p_1035->g_395.s3", print_hash_value);
    transparent_crc(p_1035->g_395.s4, "p_1035->g_395.s4", print_hash_value);
    transparent_crc(p_1035->g_395.s5, "p_1035->g_395.s5", print_hash_value);
    transparent_crc(p_1035->g_395.s6, "p_1035->g_395.s6", print_hash_value);
    transparent_crc(p_1035->g_395.s7, "p_1035->g_395.s7", print_hash_value);
    transparent_crc(p_1035->g_412.x, "p_1035->g_412.x", print_hash_value);
    transparent_crc(p_1035->g_412.y, "p_1035->g_412.y", print_hash_value);
    transparent_crc(p_1035->g_413.x, "p_1035->g_413.x", print_hash_value);
    transparent_crc(p_1035->g_413.y, "p_1035->g_413.y", print_hash_value);
    transparent_crc(p_1035->g_413.z, "p_1035->g_413.z", print_hash_value);
    transparent_crc(p_1035->g_413.w, "p_1035->g_413.w", print_hash_value);
    transparent_crc(p_1035->g_428.x, "p_1035->g_428.x", print_hash_value);
    transparent_crc(p_1035->g_428.y, "p_1035->g_428.y", print_hash_value);
    transparent_crc(p_1035->g_428.z, "p_1035->g_428.z", print_hash_value);
    transparent_crc(p_1035->g_428.w, "p_1035->g_428.w", print_hash_value);
    transparent_crc(p_1035->g_433.x, "p_1035->g_433.x", print_hash_value);
    transparent_crc(p_1035->g_433.y, "p_1035->g_433.y", print_hash_value);
    transparent_crc(p_1035->g_498, "p_1035->g_498", print_hash_value);
    transparent_crc(p_1035->g_506.s0, "p_1035->g_506.s0", print_hash_value);
    transparent_crc(p_1035->g_506.s1, "p_1035->g_506.s1", print_hash_value);
    transparent_crc(p_1035->g_506.s2, "p_1035->g_506.s2", print_hash_value);
    transparent_crc(p_1035->g_506.s3, "p_1035->g_506.s3", print_hash_value);
    transparent_crc(p_1035->g_506.s4, "p_1035->g_506.s4", print_hash_value);
    transparent_crc(p_1035->g_506.s5, "p_1035->g_506.s5", print_hash_value);
    transparent_crc(p_1035->g_506.s6, "p_1035->g_506.s6", print_hash_value);
    transparent_crc(p_1035->g_506.s7, "p_1035->g_506.s7", print_hash_value);
    transparent_crc(p_1035->g_506.s8, "p_1035->g_506.s8", print_hash_value);
    transparent_crc(p_1035->g_506.s9, "p_1035->g_506.s9", print_hash_value);
    transparent_crc(p_1035->g_506.sa, "p_1035->g_506.sa", print_hash_value);
    transparent_crc(p_1035->g_506.sb, "p_1035->g_506.sb", print_hash_value);
    transparent_crc(p_1035->g_506.sc, "p_1035->g_506.sc", print_hash_value);
    transparent_crc(p_1035->g_506.sd, "p_1035->g_506.sd", print_hash_value);
    transparent_crc(p_1035->g_506.se, "p_1035->g_506.se", print_hash_value);
    transparent_crc(p_1035->g_506.sf, "p_1035->g_506.sf", print_hash_value);
    transparent_crc(p_1035->g_530.x, "p_1035->g_530.x", print_hash_value);
    transparent_crc(p_1035->g_530.y, "p_1035->g_530.y", print_hash_value);
    transparent_crc(p_1035->g_566.s0, "p_1035->g_566.s0", print_hash_value);
    transparent_crc(p_1035->g_566.s1, "p_1035->g_566.s1", print_hash_value);
    transparent_crc(p_1035->g_566.s2, "p_1035->g_566.s2", print_hash_value);
    transparent_crc(p_1035->g_566.s3, "p_1035->g_566.s3", print_hash_value);
    transparent_crc(p_1035->g_566.s4, "p_1035->g_566.s4", print_hash_value);
    transparent_crc(p_1035->g_566.s5, "p_1035->g_566.s5", print_hash_value);
    transparent_crc(p_1035->g_566.s6, "p_1035->g_566.s6", print_hash_value);
    transparent_crc(p_1035->g_566.s7, "p_1035->g_566.s7", print_hash_value);
    transparent_crc(p_1035->g_589.s0, "p_1035->g_589.s0", print_hash_value);
    transparent_crc(p_1035->g_589.s1, "p_1035->g_589.s1", print_hash_value);
    transparent_crc(p_1035->g_589.s2, "p_1035->g_589.s2", print_hash_value);
    transparent_crc(p_1035->g_589.s3, "p_1035->g_589.s3", print_hash_value);
    transparent_crc(p_1035->g_589.s4, "p_1035->g_589.s4", print_hash_value);
    transparent_crc(p_1035->g_589.s5, "p_1035->g_589.s5", print_hash_value);
    transparent_crc(p_1035->g_589.s6, "p_1035->g_589.s6", print_hash_value);
    transparent_crc(p_1035->g_589.s7, "p_1035->g_589.s7", print_hash_value);
    transparent_crc(p_1035->g_595.x, "p_1035->g_595.x", print_hash_value);
    transparent_crc(p_1035->g_595.y, "p_1035->g_595.y", print_hash_value);
    transparent_crc(p_1035->g_595.z, "p_1035->g_595.z", print_hash_value);
    transparent_crc(p_1035->g_595.w, "p_1035->g_595.w", print_hash_value);
    transparent_crc(p_1035->g_639, "p_1035->g_639", print_hash_value);
    transparent_crc(p_1035->g_744.x, "p_1035->g_744.x", print_hash_value);
    transparent_crc(p_1035->g_744.y, "p_1035->g_744.y", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1035->g_766[i], "p_1035->g_766[i]", print_hash_value);

    }
    transparent_crc(p_1035->g_774, "p_1035->g_774", print_hash_value);
    transparent_crc(p_1035->g_776, "p_1035->g_776", print_hash_value);
    transparent_crc(p_1035->g_788.s0, "p_1035->g_788.s0", print_hash_value);
    transparent_crc(p_1035->g_788.s1, "p_1035->g_788.s1", print_hash_value);
    transparent_crc(p_1035->g_788.s2, "p_1035->g_788.s2", print_hash_value);
    transparent_crc(p_1035->g_788.s3, "p_1035->g_788.s3", print_hash_value);
    transparent_crc(p_1035->g_788.s4, "p_1035->g_788.s4", print_hash_value);
    transparent_crc(p_1035->g_788.s5, "p_1035->g_788.s5", print_hash_value);
    transparent_crc(p_1035->g_788.s6, "p_1035->g_788.s6", print_hash_value);
    transparent_crc(p_1035->g_788.s7, "p_1035->g_788.s7", print_hash_value);
    transparent_crc(p_1035->g_788.s8, "p_1035->g_788.s8", print_hash_value);
    transparent_crc(p_1035->g_788.s9, "p_1035->g_788.s9", print_hash_value);
    transparent_crc(p_1035->g_788.sa, "p_1035->g_788.sa", print_hash_value);
    transparent_crc(p_1035->g_788.sb, "p_1035->g_788.sb", print_hash_value);
    transparent_crc(p_1035->g_788.sc, "p_1035->g_788.sc", print_hash_value);
    transparent_crc(p_1035->g_788.sd, "p_1035->g_788.sd", print_hash_value);
    transparent_crc(p_1035->g_788.se, "p_1035->g_788.se", print_hash_value);
    transparent_crc(p_1035->g_788.sf, "p_1035->g_788.sf", print_hash_value);
    transparent_crc(p_1035->g_799.s0, "p_1035->g_799.s0", print_hash_value);
    transparent_crc(p_1035->g_799.s1, "p_1035->g_799.s1", print_hash_value);
    transparent_crc(p_1035->g_799.s2, "p_1035->g_799.s2", print_hash_value);
    transparent_crc(p_1035->g_799.s3, "p_1035->g_799.s3", print_hash_value);
    transparent_crc(p_1035->g_799.s4, "p_1035->g_799.s4", print_hash_value);
    transparent_crc(p_1035->g_799.s5, "p_1035->g_799.s5", print_hash_value);
    transparent_crc(p_1035->g_799.s6, "p_1035->g_799.s6", print_hash_value);
    transparent_crc(p_1035->g_799.s7, "p_1035->g_799.s7", print_hash_value);
    transparent_crc(p_1035->g_801.x, "p_1035->g_801.x", print_hash_value);
    transparent_crc(p_1035->g_801.y, "p_1035->g_801.y", print_hash_value);
    transparent_crc(p_1035->g_834, "p_1035->g_834", print_hash_value);
    transparent_crc(p_1035->g_840.x, "p_1035->g_840.x", print_hash_value);
    transparent_crc(p_1035->g_840.y, "p_1035->g_840.y", print_hash_value);
    transparent_crc(p_1035->g_852.x, "p_1035->g_852.x", print_hash_value);
    transparent_crc(p_1035->g_852.y, "p_1035->g_852.y", print_hash_value);
    transparent_crc(p_1035->g_852.z, "p_1035->g_852.z", print_hash_value);
    transparent_crc(p_1035->g_852.w, "p_1035->g_852.w", print_hash_value);
    transparent_crc(p_1035->g_854.x, "p_1035->g_854.x", print_hash_value);
    transparent_crc(p_1035->g_854.y, "p_1035->g_854.y", print_hash_value);
    transparent_crc(p_1035->g_854.z, "p_1035->g_854.z", print_hash_value);
    transparent_crc(p_1035->g_854.w, "p_1035->g_854.w", print_hash_value);
    transparent_crc(p_1035->g_855.x, "p_1035->g_855.x", print_hash_value);
    transparent_crc(p_1035->g_855.y, "p_1035->g_855.y", print_hash_value);
    transparent_crc(p_1035->g_860.s0, "p_1035->g_860.s0", print_hash_value);
    transparent_crc(p_1035->g_860.s1, "p_1035->g_860.s1", print_hash_value);
    transparent_crc(p_1035->g_860.s2, "p_1035->g_860.s2", print_hash_value);
    transparent_crc(p_1035->g_860.s3, "p_1035->g_860.s3", print_hash_value);
    transparent_crc(p_1035->g_860.s4, "p_1035->g_860.s4", print_hash_value);
    transparent_crc(p_1035->g_860.s5, "p_1035->g_860.s5", print_hash_value);
    transparent_crc(p_1035->g_860.s6, "p_1035->g_860.s6", print_hash_value);
    transparent_crc(p_1035->g_860.s7, "p_1035->g_860.s7", print_hash_value);
    transparent_crc(p_1035->g_860.s8, "p_1035->g_860.s8", print_hash_value);
    transparent_crc(p_1035->g_860.s9, "p_1035->g_860.s9", print_hash_value);
    transparent_crc(p_1035->g_860.sa, "p_1035->g_860.sa", print_hash_value);
    transparent_crc(p_1035->g_860.sb, "p_1035->g_860.sb", print_hash_value);
    transparent_crc(p_1035->g_860.sc, "p_1035->g_860.sc", print_hash_value);
    transparent_crc(p_1035->g_860.sd, "p_1035->g_860.sd", print_hash_value);
    transparent_crc(p_1035->g_860.se, "p_1035->g_860.se", print_hash_value);
    transparent_crc(p_1035->g_860.sf, "p_1035->g_860.sf", print_hash_value);
    transparent_crc(p_1035->g_889.s0, "p_1035->g_889.s0", print_hash_value);
    transparent_crc(p_1035->g_889.s1, "p_1035->g_889.s1", print_hash_value);
    transparent_crc(p_1035->g_889.s2, "p_1035->g_889.s2", print_hash_value);
    transparent_crc(p_1035->g_889.s3, "p_1035->g_889.s3", print_hash_value);
    transparent_crc(p_1035->g_889.s4, "p_1035->g_889.s4", print_hash_value);
    transparent_crc(p_1035->g_889.s5, "p_1035->g_889.s5", print_hash_value);
    transparent_crc(p_1035->g_889.s6, "p_1035->g_889.s6", print_hash_value);
    transparent_crc(p_1035->g_889.s7, "p_1035->g_889.s7", print_hash_value);
    transparent_crc(p_1035->g_889.s8, "p_1035->g_889.s8", print_hash_value);
    transparent_crc(p_1035->g_889.s9, "p_1035->g_889.s9", print_hash_value);
    transparent_crc(p_1035->g_889.sa, "p_1035->g_889.sa", print_hash_value);
    transparent_crc(p_1035->g_889.sb, "p_1035->g_889.sb", print_hash_value);
    transparent_crc(p_1035->g_889.sc, "p_1035->g_889.sc", print_hash_value);
    transparent_crc(p_1035->g_889.sd, "p_1035->g_889.sd", print_hash_value);
    transparent_crc(p_1035->g_889.se, "p_1035->g_889.se", print_hash_value);
    transparent_crc(p_1035->g_889.sf, "p_1035->g_889.sf", print_hash_value);
    transparent_crc(p_1035->g_890.x, "p_1035->g_890.x", print_hash_value);
    transparent_crc(p_1035->g_890.y, "p_1035->g_890.y", print_hash_value);
    transparent_crc(p_1035->g_893.s0, "p_1035->g_893.s0", print_hash_value);
    transparent_crc(p_1035->g_893.s1, "p_1035->g_893.s1", print_hash_value);
    transparent_crc(p_1035->g_893.s2, "p_1035->g_893.s2", print_hash_value);
    transparent_crc(p_1035->g_893.s3, "p_1035->g_893.s3", print_hash_value);
    transparent_crc(p_1035->g_893.s4, "p_1035->g_893.s4", print_hash_value);
    transparent_crc(p_1035->g_893.s5, "p_1035->g_893.s5", print_hash_value);
    transparent_crc(p_1035->g_893.s6, "p_1035->g_893.s6", print_hash_value);
    transparent_crc(p_1035->g_893.s7, "p_1035->g_893.s7", print_hash_value);
    transparent_crc(p_1035->g_894.x, "p_1035->g_894.x", print_hash_value);
    transparent_crc(p_1035->g_894.y, "p_1035->g_894.y", print_hash_value);
    transparent_crc(p_1035->g_896.x, "p_1035->g_896.x", print_hash_value);
    transparent_crc(p_1035->g_896.y, "p_1035->g_896.y", print_hash_value);
    transparent_crc(p_1035->g_901.s0, "p_1035->g_901.s0", print_hash_value);
    transparent_crc(p_1035->g_901.s1, "p_1035->g_901.s1", print_hash_value);
    transparent_crc(p_1035->g_901.s2, "p_1035->g_901.s2", print_hash_value);
    transparent_crc(p_1035->g_901.s3, "p_1035->g_901.s3", print_hash_value);
    transparent_crc(p_1035->g_901.s4, "p_1035->g_901.s4", print_hash_value);
    transparent_crc(p_1035->g_901.s5, "p_1035->g_901.s5", print_hash_value);
    transparent_crc(p_1035->g_901.s6, "p_1035->g_901.s6", print_hash_value);
    transparent_crc(p_1035->g_901.s7, "p_1035->g_901.s7", print_hash_value);
    transparent_crc(p_1035->g_901.s8, "p_1035->g_901.s8", print_hash_value);
    transparent_crc(p_1035->g_901.s9, "p_1035->g_901.s9", print_hash_value);
    transparent_crc(p_1035->g_901.sa, "p_1035->g_901.sa", print_hash_value);
    transparent_crc(p_1035->g_901.sb, "p_1035->g_901.sb", print_hash_value);
    transparent_crc(p_1035->g_901.sc, "p_1035->g_901.sc", print_hash_value);
    transparent_crc(p_1035->g_901.sd, "p_1035->g_901.sd", print_hash_value);
    transparent_crc(p_1035->g_901.se, "p_1035->g_901.se", print_hash_value);
    transparent_crc(p_1035->g_901.sf, "p_1035->g_901.sf", print_hash_value);
    transparent_crc(p_1035->g_1009.x, "p_1035->g_1009.x", print_hash_value);
    transparent_crc(p_1035->g_1009.y, "p_1035->g_1009.y", print_hash_value);
    transparent_crc(p_1035->g_1015.x, "p_1035->g_1015.x", print_hash_value);
    transparent_crc(p_1035->g_1015.y, "p_1035->g_1015.y", print_hash_value);
    transparent_crc(p_1035->g_1024, "p_1035->g_1024", print_hash_value);
    transparent_crc(p_1035->g_1025, "p_1035->g_1025", print_hash_value);
    transparent_crc(p_1035->g_1028.x, "p_1035->g_1028.x", print_hash_value);
    transparent_crc(p_1035->g_1028.y, "p_1035->g_1028.y", print_hash_value);
    transparent_crc(p_1035->v_collective, "p_1035->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 5; i++)
            transparent_crc(p_1035->g_special_values[i + 5 * get_linear_group_id()], "p_1035->g_special_values[i + 5 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 5; i++)
            transparent_crc(p_1035->l_special_values[i], "p_1035->l_special_values[i]", print_hash_value);
    transparent_crc(p_1035->l_comm_values[get_linear_local_id()], "p_1035->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1035->g_comm_values[get_linear_group_id() * 170 + get_linear_local_id()], "p_1035->g_comm_values[get_linear_group_id() * 170 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
