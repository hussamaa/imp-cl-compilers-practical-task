// --atomics 4 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 88,46,2 -l 2,46,2
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

__constant uint32_t permutations[10][184] = {
{130,128,116,139,35,20,54,118,119,47,165,182,18,138,27,174,98,19,122,60,140,85,73,151,103,168,48,31,56,65,62,67,23,7,57,59,106,61,152,183,171,126,141,68,52,91,136,89,115,109,34,76,99,127,155,173,94,120,159,160,180,41,150,129,21,93,110,69,40,12,81,55,87,24,78,79,88,5,178,14,36,125,86,22,26,17,170,134,121,112,11,154,92,44,108,132,179,114,161,175,2,82,147,166,72,9,46,143,131,95,33,176,42,177,123,164,107,181,4,1,53,70,77,38,162,105,146,84,66,43,8,172,111,58,149,102,0,51,37,28,148,10,167,158,25,80,39,64,157,104,124,144,3,71,49,97,74,169,32,15,163,145,50,6,137,156,117,153,63,96,45,75,30,101,142,133,13,83,135,16,29,100,90,113}, // permutation 0
{86,106,35,150,8,22,94,18,9,119,183,84,89,81,174,97,115,30,52,178,59,130,151,124,132,117,161,58,101,25,159,23,26,32,123,163,91,57,87,121,73,41,76,176,127,5,175,170,42,168,62,154,51,79,108,90,27,29,146,45,109,4,179,53,65,28,142,167,147,60,0,141,14,61,112,135,24,71,6,67,49,68,144,47,107,143,126,33,131,153,180,166,10,103,70,19,17,157,114,31,7,164,11,155,63,12,88,137,95,139,69,140,56,85,120,136,118,15,171,133,177,82,122,37,99,102,105,145,2,116,3,98,36,44,34,172,129,39,80,158,54,111,182,148,149,40,125,43,92,173,20,181,55,169,16,83,64,152,156,138,160,78,113,13,104,100,165,46,21,162,134,74,110,77,75,38,93,66,72,96,1,48,50,128}, // permutation 1
{75,47,72,125,77,63,150,166,139,22,87,126,148,107,155,128,174,122,178,23,21,86,119,73,161,162,57,74,35,182,172,167,62,141,61,90,78,10,42,140,104,37,133,98,117,92,153,25,7,59,113,154,102,152,144,68,84,180,118,168,110,56,24,176,131,95,54,48,39,103,132,173,181,69,145,112,88,146,109,67,81,8,97,51,12,115,136,79,70,66,71,116,32,85,82,11,147,38,142,93,27,6,31,170,114,120,33,2,171,55,4,160,106,30,163,159,76,5,60,158,101,123,99,3,183,0,151,58,143,28,52,138,137,156,100,29,9,164,94,14,129,1,121,108,19,16,15,177,34,83,26,18,40,44,49,53,45,105,20,41,175,50,130,91,165,80,135,89,17,64,65,134,157,179,149,13,111,169,127,46,124,96,43,36}, // permutation 2
{52,90,162,101,109,125,167,60,0,112,30,81,48,165,82,134,29,182,72,64,161,78,159,129,110,74,139,58,151,45,103,104,63,39,145,164,120,80,88,36,171,83,158,50,163,28,92,181,116,156,118,7,57,67,43,127,105,183,18,135,73,106,128,3,147,37,94,76,98,108,122,144,13,114,102,148,140,35,5,70,34,44,141,138,66,126,150,160,11,27,146,180,68,86,168,172,61,174,85,132,107,133,23,166,6,47,115,10,24,32,26,153,51,143,173,175,75,46,179,97,20,38,177,14,42,49,54,2,117,15,169,99,157,87,100,130,131,22,69,19,91,59,95,84,56,17,71,31,79,4,62,155,53,149,12,16,176,1,21,124,119,65,93,111,40,142,41,136,154,9,113,77,121,89,96,178,33,25,137,8,55,152,123,170}, // permutation 3
{163,53,30,56,147,3,115,145,59,179,139,182,67,74,31,142,71,75,69,4,114,12,174,99,49,126,175,47,146,135,76,161,83,40,18,27,16,183,39,6,112,29,43,41,45,165,60,160,164,94,178,137,109,102,48,107,0,136,105,129,110,98,120,133,61,65,84,37,121,13,17,131,11,128,14,87,155,42,153,15,77,134,51,149,78,32,151,35,44,38,171,82,8,95,46,173,152,156,21,157,132,154,177,108,23,97,73,143,111,167,140,92,158,93,122,88,124,104,169,150,148,106,25,81,89,36,181,119,117,80,5,9,170,168,7,172,26,19,2,85,103,33,116,127,123,118,176,130,166,68,144,90,52,10,162,34,63,64,22,159,72,62,66,101,70,20,57,1,91,55,100,113,24,50,28,138,141,125,58,86,96,54,79,180}, // permutation 4
{20,166,40,57,67,34,49,12,134,149,96,176,113,16,102,178,98,131,36,90,136,22,91,38,48,45,109,58,30,69,93,1,144,106,33,121,23,59,135,165,77,88,104,80,65,73,143,139,133,170,182,105,101,60,108,11,118,181,74,138,114,19,81,64,28,99,122,100,75,151,46,97,39,29,7,154,180,107,164,95,120,173,152,50,179,47,112,43,8,53,126,163,174,141,4,27,156,61,147,85,148,145,158,70,51,94,42,129,183,132,157,31,155,160,13,63,146,18,71,168,35,140,92,150,66,127,9,116,76,79,175,41,5,6,72,32,124,68,119,172,142,103,87,0,117,25,56,62,123,128,171,78,44,52,26,130,83,125,82,110,177,169,24,17,14,2,37,21,3,86,137,55,84,161,111,162,153,115,10,54,159,89,15,167}, // permutation 5
{137,50,94,13,90,146,10,144,44,107,179,115,132,0,34,8,6,129,55,74,39,106,93,58,28,69,81,148,138,127,175,21,60,14,84,162,142,37,168,158,165,42,166,154,71,103,160,62,134,23,177,57,181,149,70,5,145,11,163,52,156,155,26,78,76,12,135,88,117,79,67,1,116,53,9,147,176,77,157,47,105,96,63,7,54,38,171,100,36,66,124,89,123,97,153,80,139,161,152,22,56,3,41,87,111,40,167,98,4,48,95,68,170,59,183,128,75,46,35,143,151,99,49,120,121,178,73,30,125,110,101,109,15,72,18,29,182,108,32,164,33,20,102,25,2,173,24,91,65,86,31,159,141,136,180,174,64,19,119,45,27,112,140,83,131,169,172,104,118,150,85,43,82,133,114,122,17,113,16,51,126,92,61,130}, // permutation 6
{73,182,87,176,44,138,6,48,103,152,127,126,116,162,4,174,38,71,52,12,111,74,66,24,146,144,122,20,130,117,167,163,142,39,60,129,134,31,16,168,40,36,160,181,94,76,68,133,151,27,19,50,148,42,180,41,93,109,105,100,67,34,98,15,70,72,99,119,155,143,113,75,43,147,157,57,32,145,51,112,29,2,54,0,77,64,131,114,136,13,58,61,69,7,141,125,21,84,89,159,135,165,128,81,150,139,17,10,37,161,59,124,104,88,18,83,8,121,26,90,65,149,156,172,82,106,86,171,179,154,102,97,11,166,55,35,3,118,9,45,132,62,92,53,80,164,173,108,28,46,63,183,33,178,169,120,22,158,91,47,56,49,101,23,14,123,85,79,1,110,107,175,140,95,137,115,170,78,96,177,153,5,30,25}, // permutation 7
{153,141,182,147,70,110,81,160,22,31,27,125,18,169,161,118,5,34,96,145,114,98,107,133,87,117,95,97,50,0,121,146,58,155,108,100,131,38,156,42,177,149,134,24,76,30,56,127,173,72,79,52,1,116,128,137,115,105,49,75,85,57,89,15,53,64,140,54,19,11,55,9,106,162,68,165,62,122,36,48,167,109,12,91,124,139,77,179,6,66,158,43,16,174,25,7,178,29,26,172,166,142,92,10,163,20,135,103,32,13,93,28,150,119,37,112,67,175,73,4,94,143,136,151,80,130,113,78,14,152,144,164,181,170,63,45,59,23,39,21,44,180,35,83,74,65,102,33,168,84,154,90,176,171,111,88,138,2,123,126,8,82,61,17,132,40,86,120,148,47,159,104,46,41,60,129,99,51,183,101,157,71,3,69}, // permutation 8
{168,61,173,91,104,164,36,13,9,65,117,134,169,87,59,1,111,162,12,7,159,102,80,154,128,63,96,68,145,73,158,149,130,112,166,86,82,106,126,21,115,97,171,47,50,88,52,17,33,84,29,150,163,30,135,48,131,15,10,6,122,70,142,153,119,152,66,18,89,5,172,83,42,72,155,44,157,49,24,34,124,54,181,125,107,38,76,77,25,146,53,60,143,37,144,141,161,99,118,105,57,167,56,109,165,103,26,32,95,174,67,71,136,93,121,123,39,35,147,108,140,156,178,40,179,120,55,79,46,69,85,81,138,41,64,98,94,43,177,31,116,114,137,175,133,170,23,27,151,180,129,8,16,75,100,182,58,45,20,3,183,127,92,2,51,4,113,110,132,22,139,14,19,62,0,148,176,101,74,160,78,11,28,90} // permutation 9
};

// Seed: 84663010

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int32_t  f0;
   int32_t  f1;
};

struct S1 {
    VECTOR(uint32_t, 16) g_44;
    int32_t g_59;
    VECTOR(int32_t, 8) g_61;
    uint32_t g_68;
    volatile int32_t g_82;
    volatile int32_t * volatile g_81;
    VECTOR(uint16_t, 16) g_84;
    volatile VECTOR(uint16_t, 16) g_87;
    volatile VECTOR(uint16_t, 4) g_89;
    VECTOR(uint16_t, 8) g_90;
    VECTOR(uint16_t, 4) g_91;
    VECTOR(uint16_t, 4) g_92;
    VECTOR(uint32_t, 16) g_93;
    int32_t *g_105[7];
    uint64_t g_111;
    uint16_t g_112;
    uint64_t g_115;
    VECTOR(int8_t, 4) g_137;
    int16_t g_140[10];
    int32_t * volatile g_142;
    struct S0 g_145;
    volatile VECTOR(int64_t, 8) g_148;
    uint8_t g_152;
    int64_t g_154;
    int64_t g_156;
    uint32_t g_158;
    struct S0 * volatile g_205[5];
    struct S0 * volatile g_206[2][1][10];
    struct S0 * volatile g_207[1];
    VECTOR(uint16_t, 8) g_210;
    VECTOR(uint16_t, 16) g_211;
    struct S0 g_231;
    int32_t ** volatile g_240[10];
    int32_t ** volatile g_241[3][4][9];
    VECTOR(int64_t, 8) g_266;
    volatile int32_t g_275;
    volatile int32_t *g_274;
    volatile int32_t **g_273;
    int32_t *g_280;
    int32_t **g_279[5][10];
    volatile int64_t g_283;
    int32_t ** volatile g_284;
    int32_t ** volatile g_285;
    VECTOR(int8_t, 16) g_286;
    VECTOR(uint8_t, 2) g_289;
    int32_t ** volatile g_339;
    int32_t ** volatile g_340;
    uint8_t *g_356[8];
    uint8_t * volatile * volatile g_355;
    struct S0 g_358;
    struct S0 g_359;
    volatile struct S0 g_360;
    volatile struct S0 * volatile g_361;
    struct S0 g_388[7][4];
    volatile VECTOR(uint64_t, 2) g_396;
    volatile VECTOR(uint32_t, 16) g_433;
    uint32_t *g_452;
    uint32_t **g_451;
    uint32_t *** volatile g_453;
    volatile VECTOR(int64_t, 4) g_556;
    volatile struct S0 g_569;
    VECTOR(uint32_t, 4) g_577;
    VECTOR(uint8_t, 4) g_583;
    uint32_t g_591;
    int8_t g_608[8][6];
    volatile VECTOR(uint64_t, 8) g_625;
    uint32_t ***g_657;
    struct S0 g_660;
    volatile VECTOR(uint64_t, 8) g_677;
    volatile uint8_t * volatile * volatile g_705;
    volatile uint8_t g_708;
    volatile uint8_t g_709;
    volatile uint8_t g_710;
    volatile uint8_t g_711;
    volatile uint8_t g_712[6][6];
    volatile uint8_t g_713;
    volatile uint8_t g_714;
    volatile uint8_t g_715[6][3];
    volatile uint8_t g_716;
    volatile uint8_t g_717;
    volatile uint8_t g_718;
    volatile uint8_t g_719;
    volatile uint8_t g_720;
    volatile uint8_t g_721;
    volatile uint8_t g_722;
    volatile VECTOR(uint8_t, 8) g_723;
    volatile uint8_t g_724;
    volatile uint8_t g_725[3][7][3];
    volatile uint8_t g_726;
    volatile uint8_t g_727[7][8][4];
    volatile uint8_t g_728;
    volatile uint8_t g_729;
    volatile uint8_t g_730;
    volatile uint8_t g_731[6];
    volatile uint8_t g_732;
    volatile uint8_t g_733[4][9][7];
    volatile uint8_t g_734;
    volatile uint8_t g_735;
    volatile uint8_t g_736[1][2];
    volatile uint8_t g_737;
    volatile uint8_t g_738[8][8];
    volatile uint8_t g_739;
    volatile uint8_t g_740[9][1];
    volatile VECTOR(uint8_t, 8) g_741;
    volatile uint8_t g_742[4];
    volatile uint8_t g_743;
    volatile uint8_t g_744;
    volatile uint8_t g_745;
    volatile uint8_t g_746;
    volatile uint8_t g_747[10];
    volatile uint8_t g_748;
    volatile uint8_t g_749;
    volatile uint8_t g_750[1][3];
    volatile uint8_t g_751[7];
    volatile uint8_t g_752;
    volatile uint8_t g_753;
    volatile uint8_t * volatile g_707[5][4][6];
    volatile uint8_t * volatile * volatile g_706;
    volatile uint8_t * volatile * volatile *g_704[5];
    volatile VECTOR(int8_t, 8) g_777;
    VECTOR(uint16_t, 8) g_781;
    uint32_t *g_782;
    volatile VECTOR(uint64_t, 16) g_797;
    int32_t g_809;
    volatile int64_t g_810;
    VECTOR(uint32_t, 4) g_832;
    volatile VECTOR(uint8_t, 16) g_885;
    VECTOR(int64_t, 16) g_919;
    VECTOR(uint16_t, 2) g_928;
    struct S0 g_933;
    VECTOR(int8_t, 4) g_944;
    VECTOR(uint8_t, 8) g_947;
    VECTOR(int32_t, 4) g_980;
    struct S0 g_983[5];
    volatile int32_t g_999;
    int32_t ** volatile g_1026;
    volatile struct S0 g_1032;
    volatile struct S0 g_1035;
    volatile struct S0 g_1036;
    volatile struct S0 g_1037;
    volatile struct S0 g_1052;
    volatile struct S0 * volatile g_1053;
    int32_t **g_1075;
    volatile int32_t g_1114;
    VECTOR(uint64_t, 16) g_1126;
    VECTOR(uint32_t, 4) g_1128;
    VECTOR(int16_t, 16) g_1205;
    uint16_t g_1220;
    VECTOR(int32_t, 8) g_1226;
    volatile VECTOR(uint8_t, 2) g_1240;
    VECTOR(uint32_t, 8) g_1270;
    uint8_t **g_1279[3];
    uint8_t ***g_1278[1][10][4];
    int64_t ***g_1290;
    volatile int16_t g_1308;
    volatile int16_t *g_1307;
    volatile int16_t * volatile * volatile g_1306;
    volatile VECTOR(int64_t, 8) g_1317;
    volatile int64_t *g_1316[7][10][3];
    volatile int64_t ** volatile g_1315[8];
    volatile int64_t ** volatile * volatile g_1314;
    uint16_t g_1320[9][9];
    int32_t ** volatile g_1335[10];
    uint32_t *g_1350;
    VECTOR(int8_t, 16) g_1356;
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
int64_t  func_1(struct S1 * p_1361);
int32_t  func_2(int16_t  p_3, int32_t  p_4, struct S1 * p_1361);
int16_t  func_5(int32_t  p_6, int8_t  p_7, struct S1 * p_1361);
int64_t  func_12(int32_t  p_13, int8_t  p_14, uint32_t  p_15, int32_t  p_16, int32_t  p_17, struct S1 * p_1361);
int32_t  func_18(uint32_t  p_19, uint64_t  p_20, int64_t  p_21, int64_t  p_22, int8_t  p_23, struct S1 * p_1361);
int16_t  func_36(int64_t  p_37, int64_t  p_38, uint32_t  p_39, struct S1 * p_1361);
uint64_t  func_40(uint32_t  p_41, int8_t  p_42, int16_t  p_43, struct S1 * p_1361);
int64_t  func_50(int64_t  p_51, int64_t  p_52, int32_t  p_53, int16_t  p_54, int32_t  p_55, struct S1 * p_1361);
uint64_t  func_56(int32_t  p_57, struct S1 * p_1361);
struct S0  func_71(uint32_t  p_72, int8_t  p_73, int32_t  p_74, int64_t  p_75, struct S1 * p_1361);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1361->l_comm_values p_1361->g_44 p_1361->g_comm_values p_1361->g_68 p_1361->g_81 p_1361->g_84 p_1361->g_87 p_1361->g_89 p_1361->g_90 p_1361->g_91 p_1361->g_92 p_1361->g_93 p_1361->g_105 p_1361->g_111 p_1361->g_112 p_1361->g_115 p_1361->g_82 p_1361->g_61 p_1361->g_145 p_1361->g_148 p_1361->g_137 p_1361->g_152 p_1361->g_59 p_1361->g_154 p_1361->g_210 p_1361->g_211 p_1361->g_156 p_1361->g_231 p_1361->g_158 p_1361->g_266 p_1361->g_273 p_1361->g_283 p_1361->g_285 p_1361->g_286 p_1361->g_289 p_1361->g_275 p_1361->g_340 p_1361->g_355 p_1361->g_358 p_1361->g_360 p_1361->g_361 p_1361->g_388 p_1361->g_356 p_1361->g_451 p_1361->g_453 p_1361->g_396 p_1361->g_140 p_1361->g_556 p_1361->g_433 p_1361->g_569 p_1361->g_577 p_1361->g_583 p_1361->g_591 p_1361->g_608 p_1361->g_809 p_1361->g_1032 p_1361->g_1036 p_1361->g_1052 p_1361->g_1053 p_1361->g_980 p_1361->g_933.f1 p_1361->g_750 p_1361->g_919 permutations p_1361->g_1075 p_1361->g_280 p_1361->g_660.f1 p_1361->g_735 p_1361->g_1126 p_1361->g_1128 p_1361->g_740 p_1361->g_1205 p_1361->g_723 p_1361->g_1035.f0 p_1361->g_983.f1 p_1361->g_1220 p_1361->g_1226 p_1361->g_1240 p_1361->g_1270 p_1361->g_1278 p_1361->g_1290 p_1361->g_1306 p_1361->g_1314 p_1361->g_1320 p_1361->g_743 p_1361->g_727 p_1361->g_1307 p_1361->g_1308 p_1361->g_1350 p_1361->g_657 p_1361->g_781 p_1361->g_1356 p_1361->g_359.f1
 * writes: p_1361->g_59 p_1361->g_68 p_1361->g_105 p_1361->g_111 p_1361->g_112 p_1361->g_115 p_1361->g_82 p_1361->g_137 p_1361->g_140 p_1361->g_152 p_1361->g_154 p_1361->g_156 p_1361->g_158 p_1361->g_145 p_1361->g_279 p_1361->g_355 p_1361->g_359 p_1361->g_360 p_1361->g_451 p_1361->g_286 p_1361->g_809 p_1361->g_1035 p_1361->g_1037 p_1361->g_1075 p_1361->g_933.f1 p_1361->g_93 p_1361->g_660.f1 p_1361->g_608 p_1361->g_comm_values p_1361->g_1278 p_1361->g_1290 p_1361->g_1320 p_1361->g_452
 */
int64_t  func_1(struct S1 * p_1361)
{ /* block id: 4 */
    uint32_t l_47 = 0x8D232121L;
    int32_t *l_58[8][5] = {{&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59},{&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59},{&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59},{&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59},{&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59},{&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59},{&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59},{&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59,&p_1361->g_59}};
    struct S0 *l_209 = &p_1361->g_145;
    uint32_t *l_237 = &l_47;
    int32_t l_238 = 0x441B184DL;
    int16_t *l_607 = &p_1361->g_140[3];
    int16_t l_1125[9][9] = {{0x519AL,(-3L),(-3L),0x519AL,0x4FE9L,0x21CAL,0x554CL,0x3019L,0L},{0x519AL,(-3L),(-3L),0x519AL,0x4FE9L,0x21CAL,0x554CL,0x3019L,0L},{0x519AL,(-3L),(-3L),0x519AL,0x4FE9L,0x21CAL,0x554CL,0x3019L,0L},{0x519AL,(-3L),(-3L),0x519AL,0x4FE9L,0x21CAL,0x554CL,0x3019L,0L},{0x519AL,(-3L),(-3L),0x519AL,0x4FE9L,0x21CAL,0x554CL,0x3019L,0L},{0x519AL,(-3L),(-3L),0x519AL,0x4FE9L,0x21CAL,0x554CL,0x3019L,0L},{0x519AL,(-3L),(-3L),0x519AL,0x4FE9L,0x21CAL,0x554CL,0x3019L,0L},{0x519AL,(-3L),(-3L),0x519AL,0x4FE9L,0x21CAL,0x554CL,0x3019L,0L},{0x519AL,(-3L),(-3L),0x519AL,0x4FE9L,0x21CAL,0x554CL,0x3019L,0L}};
    int64_t l_1147 = 1L;
    int32_t l_1148 = 0x7FCB34B5L;
    int32_t l_1149 = 0x7FBAD4C2L;
    int32_t l_1150 = 0x51FE01C5L;
    int32_t l_1152 = 8L;
    int32_t l_1155 = 0L;
    uint32_t l_1156 = 1UL;
    uint64_t l_1231 = 18446744073709551606UL;
    int32_t l_1251 = (-6L);
    uint64_t l_1252 = 0x0D7885DDF5BB1A23L;
    uint64_t l_1287[10][1] = {{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL}};
    int32_t l_1325[6][3][7] = {{{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L},{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L},{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L}},{{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L},{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L},{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L}},{{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L},{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L},{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L}},{{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L},{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L},{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L}},{{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L},{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L},{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L}},{{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L},{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L},{(-4L),0L,0x75E6D049L,0x6903796BL,0x7E38BA31L,0x6903796BL,0x75E6D049L}}};
    uint16_t l_1328 = 0xB37EL;
    int32_t *l_1333 = &l_1149;
    int64_t l_1355[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1355[i] = 0x2CADB3B15CE1FFD3L;
    if (func_2(func_5(((safe_mod_func_int64_t_s_s(func_12((func_18((safe_sub_func_int16_t_s_s(((*l_607) = (safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(func_36(p_1361->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1361->tid, 184))], (0x39L != ((func_40(((*l_237) = ((VECTOR(uint32_t, 16))(0x11A796D4L, ((VECTOR(uint32_t, 8))(0xC3D21462L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(p_1361->g_44.s8df0442e)).s11)), (((VECTOR(uint64_t, 4))(0UL, 0UL, 0x2E712C51978E60D7L, 1UL)).x != (safe_lshift_func_int8_t_s_s(((~FAKE_DIVERGE(p_1361->local_0_offset, get_local_id(0), 10)) , l_47), (~(safe_rshift_func_int8_t_s_u((func_50(p_1361->g_comm_values[p_1361->tid], ((func_56((p_1361->g_59 = p_1361->g_comm_values[p_1361->tid]), p_1361) , (l_209 == (((((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(p_1361->g_89.y, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(p_1361->g_210.s3762446372430014)).s775e)).wyywzyzywwxxyyzw)).sc579)), 65535UL, 0x3B07L, 0x0422L)).odd, ((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 2))(p_1361->g_211.s95)), ((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(6UL, ((VECTOR(uint16_t, 2))(0x37F9L)), 65529UL)).lo)), 0xEFECL, 0x3A13L)).wyxwwxxxyzwzywzz, ((VECTOR(uint16_t, 16))(1UL)), ((VECTOR(uint16_t, 16))(0xC6BDL))))).sc7))), ((VECTOR(uint16_t, 2))(0x750DL)), ((VECTOR(uint16_t, 2))(0x380FL))))).yxxy))))).yzwwyyzx, ((VECTOR(uint16_t, 8))(1UL))))).s5 > l_47) , p_1361->g_87.sf) , (void*)0))) , p_1361->g_comm_values[p_1361->tid]), p_1361->g_93.sd, p_1361->g_comm_values[p_1361->tid], p_1361->g_90.s4, p_1361) < p_1361->g_90.s0), l_47)))))), ((VECTOR(uint32_t, 2))(1UL)), 0xC0B329D7L, 0x5A0CA31FL)), 0x28BC5592L, p_1361->g_210.s6, 0xEDC62780L, l_47, 0x297B412AL, 1UL, 4294967287UL)).s7), l_238, l_238, p_1361) , p_1361->g_59) , 0x87L)), l_238, p_1361), 0L)), (-5L))) < p_1361->g_91.y), 10)), p_1361->g_591)), l_238))), l_238)), p_1361->g_608[5][3], l_238, l_238, l_238, p_1361) , l_47), p_1361->g_980.z, l_238, l_238, p_1361->g_583.y, p_1361), l_238)) != 0UL), p_1361->g_266.s7, p_1361), p_1361->g_61.s0, p_1361))
    { /* block id: 420 */
        VECTOR(uint32_t, 8) l_1127 = (VECTOR(uint32_t, 8))(0x387DE2A3L, (VECTOR(uint32_t, 4))(0x387DE2A3L, (VECTOR(uint32_t, 2))(0x387DE2A3L, 0UL), 0UL), 0UL, 0x387DE2A3L, 0UL);
        int32_t l_1132 = 0x087C2F5EL;
        int32_t l_1133 = 0x25325AC7L;
        int32_t *l_1146[10] = {&p_1361->g_231.f1,&p_1361->g_231.f1,&p_1361->g_231.f1,&p_1361->g_231.f1,&p_1361->g_231.f1,&p_1361->g_231.f1,&p_1361->g_231.f1,&p_1361->g_231.f1,&p_1361->g_231.f1,&p_1361->g_231.f1};
        VECTOR(uint8_t, 2) l_1209 = (VECTOR(uint8_t, 2))(4UL, 5UL);
        uint8_t l_1210 = 0UL;
        int32_t l_1221 = (-4L);
        uint8_t l_1253 = 251UL;
        VECTOR(int32_t, 2) l_1271 = (VECTOR(int32_t, 2))(1L, 0x1634D3DEL);
        uint16_t l_1312 = 65535UL;
        int i;
        if (l_1125[4][8])
        { /* block id: 421 */
            uint16_t l_1134 = 0xC544L;
            int32_t l_1139 = 0x4B46A8FAL;
            int32_t l_1141 = 8L;
            int32_t l_1142 = 0x351771F7L;
            uint32_t l_1143[4][5][9] = {{{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL}},{{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL}},{{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL}},{{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL},{4294967291UL,0x2E3070CAL,5UL,0xAB93FA09L,9UL,0x6FB1E805L,4294967295UL,1UL,0x2E3070CAL}}};
            int32_t l_1151 = 0x1D9CD0AAL;
            int32_t l_1153 = 0x3B9C55E1L;
            int32_t l_1154 = (-1L);
            int i, j, k;
            l_238 |= (p_1361->g_735 >= ((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 2))(p_1361->g_1126.s30)), ((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_1127.s53173667)).s53)).xyyx)), ((VECTOR(uint32_t, 2))(p_1361->g_1128.wy)).xyxx))).even))).lo);
            if (((safe_lshift_func_int8_t_s_u(l_47, 5)) >= ((VECTOR(uint8_t, 2))(0xADL, 0x60L)).even))
            { /* block id: 423 */
                int32_t *l_1131[2][2] = {{&p_1361->g_809,&p_1361->g_809},{&p_1361->g_809,&p_1361->g_809}};
                int i, j;
                l_1134++;
                return p_1361->g_740[6][0];
            }
            else
            { /* block id: 426 */
                int32_t *l_1137 = &p_1361->g_660.f1;
                int32_t *l_1138[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_1140[5][5][3];
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_1140[i][j][k] = 1L;
                    }
                }
                ++l_1143[3][4][4];
                l_1146[0] = &l_1142;
                (*l_1137) |= 0L;
            }
            ++l_1156;
            for (l_1152 = 8; (l_1152 <= 19); l_1152 = safe_add_func_int16_t_s_s(l_1152, 1))
            { /* block id: 434 */
                int32_t **l_1161 = &l_1146[2];
                (*l_1161) = &l_1151;
                if ((atomic_inc(&p_1361->l_atomic_input[2]) == 6))
                { /* block id: 437 */
                    uint32_t l_1162 = 0x9EE47DCEL;
                    int32_t l_1183[7][6][6] = {{{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L}},{{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L}},{{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L}},{{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L}},{{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L}},{{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L}},{{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L},{7L,(-6L),0x72D7CB26L,(-6L),7L,0x77100216L}}};
                    int32_t l_1184 = 0x2201D978L;
                    int64_t l_1185 = 0x44CE50D99DE1895FL;
                    uint16_t l_1186 = 5UL;
                    int32_t l_1187 = 5L;
                    int i, j, k;
                    if (l_1162)
                    { /* block id: 438 */
                        int32_t l_1164 = 0x01B16777L;
                        int32_t *l_1163 = &l_1164;
                        int32_t *l_1165 = &l_1164;
                        uint8_t l_1166[3];
                        int8_t l_1167 = 0x59L;
                        int32_t *l_1168 = (void*)0;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1166[i] = 1UL;
                        l_1165 = l_1163;
                        l_1167 = l_1166[1];
                        l_1165 = l_1168;
                    }
                    else
                    { /* block id: 442 */
                        uint64_t *l_1170 = (void*)0;
                        uint64_t **l_1169 = &l_1170;
                        uint64_t **l_1171 = &l_1170;
                        uint64_t **l_1172[9][7][2] = {{{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170}},{{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170}},{{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170}},{{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170}},{{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170}},{{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170}},{{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170}},{{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170}},{{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170},{&l_1170,&l_1170}}};
                        int32_t l_1173 = 0x5DD5FA7CL;
                        VECTOR(int32_t, 2) l_1174 = (VECTOR(int32_t, 2))(0x3E792052L, 3L);
                        int64_t l_1175 = 0x70860D22710F7999L;
                        uint64_t l_1176[5][1];
                        int32_t *l_1177[5];
                        int32_t *l_1178 = (void*)0;
                        int32_t l_1179 = 0x010673BAL;
                        uint16_t l_1180 = 0x325DL;
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1176[i][j] = 0xED9FA4C7E1948428L;
                        }
                        for (i = 0; i < 5; i++)
                            l_1177[i] = (void*)0;
                        l_1172[1][3][1] = (l_1171 = l_1169);
                        l_1176[4][0] &= (l_1173 , ((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 8))(l_1174.xxxyyxxx)), 0x7F558BD5L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x65A151DAL, 0x7A28F9B5L)), 0L, (-1L))))).y, l_1175, ((VECTOR(int32_t, 2))(0x316BECD3L, 0L)), 0x0E373513L, (-2L))).s8);
                        l_1178 = l_1177[3];
                        l_1180--;
                    }
                    l_1183[3][5][2] ^= 8L;
                    l_1187 = (l_1186 = (l_1184 , l_1185));
                    for (l_1183[3][5][2] = 0; (l_1183[3][5][2] != (-23)); --l_1183[3][5][2])
                    { /* block id: 454 */
                        int16_t l_1190 = 1L;
                        int16_t l_1191 = 0x4512L;
                        int16_t l_1192 = 0x129CL;
                        uint64_t l_1193 = 18446744073709551612UL;
                        uint16_t l_1196 = 0xB3B2L;
                        int64_t l_1199[2][3][3] = {{{7L,1L,(-1L)},{7L,1L,(-1L)},{7L,1L,(-1L)}},{{7L,1L,(-1L)},{7L,1L,(-1L)},{7L,1L,(-1L)}}};
                        int32_t l_1200 = 0x5EEE8A85L;
                        VECTOR(int32_t, 8) l_1201 = (VECTOR(int32_t, 8))(0x1C22AD27L, (VECTOR(int32_t, 4))(0x1C22AD27L, (VECTOR(int32_t, 2))(0x1C22AD27L, 2L), 2L), 2L, 0x1C22AD27L, 2L);
                        VECTOR(uint64_t, 16) l_1202 = (VECTOR(uint64_t, 16))(8UL, (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 8UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(8UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(8UL, 18446744073709551615UL), 8UL, 18446744073709551615UL, 8UL, 18446744073709551615UL);
                        int32_t l_1203 = 0x05D126C4L;
                        int i, j, k;
                        l_1193--;
                        ++l_1196;
                        l_1203 = (l_1202.s4 = ((VECTOR(int32_t, 8))((-1L), l_1199[1][0][0], (l_1200 = 1L), ((VECTOR(int32_t, 4))(l_1201.s3774)), 0x500DB95BL)).s3);
                    }
                    unsigned int result = 0;
                    result += l_1162;
                    int l_1183_i0, l_1183_i1, l_1183_i2;
                    for (l_1183_i0 = 0; l_1183_i0 < 7; l_1183_i0++) {
                        for (l_1183_i1 = 0; l_1183_i1 < 6; l_1183_i1++) {
                            for (l_1183_i2 = 0; l_1183_i2 < 6; l_1183_i2++) {
                                result += l_1183[l_1183_i0][l_1183_i1][l_1183_i2];
                            }
                        }
                    }
                    result += l_1184;
                    result += l_1185;
                    result += l_1186;
                    result += l_1187;
                    atomic_add(&p_1361->l_special_values[2], result);
                }
                else
                { /* block id: 461 */
                    (1 + 1);
                }
                (*l_1161) = (*l_1161);
            }
        }
        else
        { /* block id: 466 */
            VECTOR(int16_t, 8) l_1204 = (VECTOR(int16_t, 8))(0x6CFCL, (VECTOR(int16_t, 4))(0x6CFCL, (VECTOR(int16_t, 2))(0x6CFCL, 0x494CL), 0x494CL), 0x494CL, 0x6CFCL, 0x494CL);
            VECTOR(int16_t, 4) l_1206 = (VECTOR(int16_t, 4))(0x100CL, (VECTOR(int16_t, 2))(0x100CL, 1L), 1L);
            VECTOR(int8_t, 16) l_1211 = (VECTOR(int8_t, 16))(0x50L, (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, 1L), 1L), 1L, 0x50L, 1L, (VECTOR(int8_t, 2))(0x50L, 1L), (VECTOR(int8_t, 2))(0x50L, 1L), 0x50L, 1L, 0x50L, 1L);
            int32_t **l_1214 = (void*)0;
            VECTOR(int32_t, 8) l_1215 = (VECTOR(int32_t, 8))(0x6F8D064EL, (VECTOR(int32_t, 4))(0x6F8D064EL, (VECTOR(int32_t, 2))(0x6F8D064EL, 0x5CCFD858L), 0x5CCFD858L), 0x5CCFD858L, 0x6F8D064EL, 0x5CCFD858L);
            int32_t l_1216 = 0x0D6E65E4L;
            int32_t l_1222 = 0x3A8DF49DL;
            uint8_t l_1223 = 0UL;
            int i;
            l_1216 = (((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_1204.s62)), ((VECTOR(int16_t, 2))(7L, 0L)).lo, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 2))(p_1361->g_1205.s0a)).xxxyxxxxyyxxxyyx, ((VECTOR(int16_t, 2))((-1L), 0x0D03L)).yxxxyxyxxyyxxyyx))).s69, ((VECTOR(int16_t, 4))(0x2E00L, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0L, 0x79DEL)).xyxyyxyx)).s41, (int16_t)1L))).xxyyyxyxyyxyyyyx)).s24, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_1206.yxxzxzyzwwywxxxz)).scb)).yyyy)).xwxzyxwz)).s07, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))((safe_div_func_uint64_t_u_u(((l_1215.s5 = (((((*p_1361->g_280) = ((l_1206.z >= ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 4))((**p_1361->g_355), 255UL, 0xF4L, 0x61L)).wywxwxzw, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_1209.yyxxyyyy)).s5617673724460024)))).hi))).s72)))).xxxyyxyx, ((VECTOR(uint8_t, 8))(255UL, (l_1210 != p_1361->g_723.s3), ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_1211.sb2665e9f)).s57)).xyxy))), 0xDDL, (safe_mul_func_int8_t_s_s(p_1361->g_140[3], l_1211.sd)), 255UL, 0UL)).hi, (uint8_t)((l_1214 != (void*)0) <= p_1361->g_1035.f0)))), 3UL, 0x7AL)))))))).odd, (uint8_t)0xAAL))).z) , l_238)) , p_1361->g_983[3].f1) != p_1361->g_933.f1) & l_47)) != l_1206.z), p_1361->g_583.x)), 0x18L, 0x62L, 1L, 0x77L, ((VECTOR(int8_t, 2))(0x4DL)), l_47, 0L, l_1125[4][4], ((VECTOR(int8_t, 4))(0x32L)), 1L, (-1L))).sb3, ((VECTOR(uint8_t, 2))(0xC8L))))).xyxy)).odd, ((VECTOR(int16_t, 2))(0L))))), (int16_t)0L))))))))).yxxx)).lo, ((VECTOR(int16_t, 2))((-1L)))))), (-1L))).odd))), 0x7F9CL, 0x6BC7L, 0x08EAL)).even, ((VECTOR(int16_t, 4))(0L))))).x >= l_1206.y);
            if ((~(~(*p_1361->g_81))))
            { /* block id: 470 */
                return p_1361->g_388[0][1].f0;
            }
            else
            { /* block id: 472 */
                uint16_t l_1217 = 8UL;
                ++l_1217;
                l_1150 &= p_1361->g_1220;
            }
            ++l_1223;
        }
        if (((VECTOR(int32_t, 16))(p_1361->g_1226.s6011336462213236)).sb)
        { /* block id: 478 */
            uint16_t l_1227 = 0x53C4L;
            int8_t *l_1228 = (void*)0;
            int8_t *l_1229 = &p_1361->g_608[5][3];
            int32_t **l_1236[2][10][6] = {{{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]}},{{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]},{&l_1146[4],&l_1146[0],&l_1146[6],&l_1146[0],&l_1146[6],&l_1146[0]}}};
            uint8_t l_1254 = 0x35L;
            uint32_t **l_1273 = &l_237;
            VECTOR(int64_t, 2) l_1275 = (VECTOR(int64_t, 2))(1L, (-9L));
            int16_t l_1318[1][2];
            int32_t *l_1323 = &p_1361->g_231.f1;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1318[i][j] = 0x5EA4L;
            }
            if ((7UL | ((*l_1229) ^= (+(l_1150 <= l_1227)))))
            { /* block id: 480 */
                int32_t l_1230[10][1][6];
                int i, j, k;
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 6; k++)
                            l_1230[i][j][k] = 0L;
                    }
                }
                --l_1231;
            }
            else
            { /* block id: 482 */
                int16_t l_1243 = 8L;
                int32_t l_1248 = 0x281944F9L;
                uint16_t *l_1255 = &l_1227;
                l_1149 = ((l_1152 = (safe_add_func_int32_t_s_s(l_1148, ((void*)0 != l_1236[0][9][0])))) != (((((safe_unary_minus_func_int16_t_s((((*l_1255) = (safe_add_func_uint16_t_u_u(((((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(p_1361->g_1240.yyyxyyyxxyyxxyyx)).sf2, (uint8_t)(safe_mul_func_uint8_t_u_u(((l_1243 <= ((safe_lshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((((((l_1248 , ((*l_237)++)) == (*p_1361->g_81)) , l_1251) && l_1252) ^ (p_1361->g_140[7] != 1L)) < l_1125[4][8]), l_1248)), 10)) | 0x38L)) ^ 0xBE5E5A12L), 1UL))))).odd , l_1253) != l_1231), l_1254))) > 0x3601L))) , &p_1361->g_158) != &p_1361->g_158) > 1L) < l_1243));
            }
            for (l_1231 = 16; (l_1231 < 43); l_1231 = safe_add_func_int64_t_s_s(l_1231, 1))
            { /* block id: 490 */
                int32_t l_1260[6] = {0x62E8E963L,0x62E8E963L,0x62E8E963L,0x62E8E963L,0x62E8E963L,0x62E8E963L};
                int32_t l_1288 = 0x29F8527EL;
                uint8_t *l_1292[2];
                int32_t l_1319 = 0x7130386AL;
                int32_t *l_1324 = &p_1361->g_359.f1;
                int i;
                for (i = 0; i < 2; i++)
                    l_1292[i] = &l_1254;
                for (l_47 = 0; (l_47 != 50); l_47 = safe_add_func_int8_t_s_s(l_47, 9))
                { /* block id: 493 */
                    int32_t l_1263 = 0x757E7418L;
                    int32_t l_1272 = 0x0FFA5738L;
                    if (((l_1260[5] || ((((safe_mod_func_int32_t_s_s(((l_1263 | ((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(p_1361->g_1270.s6204)).z, ((*p_1361->g_361) , ((VECTOR(int32_t, 2))(l_1271.xx)).odd))), GROUP_DIVERGE(0, 1))), (((~((l_1272 ^= 6L) < (((p_1361->g_933.f1 && (((void*)0 == &p_1361->g_111) ^ ((void*)0 == l_1273))) < 0x6132E39CL) , l_1260[5]))) ^ p_1361->g_115) | p_1361->g_980.x))) , l_1251)) & p_1361->g_608[4][2]), l_1147)) & p_1361->g_154) || (**p_1361->g_355)) <= 0x54L)) , l_1272))
                    { /* block id: 495 */
                        uint32_t l_1274 = 4294967288UL;
                        l_1274 &= (-7L);
                    }
                    else
                    { /* block id: 497 */
                        uint8_t ****l_1280 = &p_1361->g_1278[0][4][1];
                        int64_t ****l_1291 = &p_1361->g_1290;
                        int32_t l_1303[6];
                        uint16_t *l_1309 = (void*)0;
                        uint16_t *l_1310[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int16_t l_1311[3];
                        int32_t l_1313 = 0x11816DDFL;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1303[i] = 0x5B9E65C6L;
                        for (i = 0; i < 3; i++)
                            l_1311[i] = (-1L);
                        l_1288 &= ((GROUP_DIVERGE(2, 1) | ((p_1361->g_comm_values[p_1361->tid] = ((VECTOR(int64_t, 8))(0x3BDE34F2F1E9418EL, (-9L), ((VECTOR(int64_t, 4))(l_1275.xyxy)), 0x0E2FA1A76960BD33L, 1L)).s0) || (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 8))(l_1231, ((((((void*)0 == l_58[7][4]) , &p_1361->g_355) == ((*l_1280) = p_1361->g_1278[0][4][1])) , ((safe_div_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(l_1263, 10)) != ((safe_sub_func_uint8_t_u_u(l_1272, (&p_1361->g_660 != &p_1361->g_569))) ^ 0x60209D51L)) >= 0xAFL), l_1287[9][0])) >= p_1361->g_112)) >= l_1251), 0x2FL, l_1260[5], 0xC2L, 0UL, 9UL, 255UL)).s5556320261744034))).s2, 1)))) , 0x2691B54DL);
                        l_1146[0] = (((!(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))((((VECTOR(uint8_t, 16))((safe_unary_minus_func_uint32_t_u((l_1155 == (((*l_1291) = p_1361->g_1290) != (((((((((void*)0 == l_1292[0]) != (1UL != (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((l_1311[2] = (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 8))((l_1303[3] = ((safe_lshift_func_uint16_t_u_s(l_1303[5], 6)) != (&l_607 != (((((l_1263 != ((safe_sub_func_uint16_t_u_u(l_1303[5], FAKE_DIVERGE(p_1361->local_0_offset, get_local_id(0), 10))) != 0x642A0936C209E47CL)) <= GROUP_DIVERGE(2, 1)) || (-1L)) & p_1361->g_283) , p_1361->g_1306)))), 0x71L, ((VECTOR(uint8_t, 4))(0UL)), 255UL, 1UL)).s0602433404650527, ((VECTOR(uint8_t, 16))(0x2AL))))).s8, 0xC0L))), l_1312)), p_1361->g_266.s2)), 2)))) || p_1361->g_145.f1) >= l_1313) | 0x371F533EL) > l_1272) , l_1260[5]) , p_1361->g_1314))))), 254UL, 0x26L, l_1313, 1UL, ((VECTOR(uint8_t, 8))(0xF5L)), 0xCDL, 0x5BL, 249UL)).s1 < p_1361->g_983[3].f1), ((VECTOR(uint8_t, 2))(255UL)), 0xB8L)))).x & l_1313)) , l_238) , &l_1313);
                    }
                }
                p_1361->g_1320[2][5]--;
                l_1324 = l_1323;
            }
        }
        else
        { /* block id: 510 */
            int32_t *l_1329 = (void*)0;
            int32_t **l_1330 = &p_1361->g_105[0];
            l_1325[1][0][6] |= 0x6B6CEBC8L;
            l_1149 |= ((safe_rshift_func_uint8_t_u_u(l_1328, 1)) > 0x4462B6FA9E278DFDL);
            (*l_1330) = l_1329;
            for (l_1253 = 0; (l_1253 >= 15); l_1253 = safe_add_func_uint64_t_u_u(l_1253, 9))
            { /* block id: 516 */
                l_1333 = (p_1361->g_743 , ((*l_1330) = &l_1132));
            }
        }
        return p_1361->g_727[5][3][2];
    }
    else
    { /* block id: 522 */
        int32_t *l_1334 = &p_1361->g_660.f1;
        int32_t **l_1336 = &l_1334;
        uint16_t *l_1343 = (void*)0;
        uint16_t *l_1344 = (void*)0;
        uint16_t *l_1345[3];
        uint32_t l_1346 = 1UL;
        int8_t *l_1357 = (void*)0;
        int8_t *l_1358 = &p_1361->g_608[3][5];
        int32_t *l_1359 = &p_1361->g_933.f1;
        int32_t *l_1360 = &l_1155;
        int i;
        for (i = 0; i < 3; i++)
            l_1345[i] = (void*)0;
        (*l_1336) = l_1334;
        (*l_1360) ^= ((*l_1359) ^= (((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((p_1361->g_723.s3 || ((*p_1361->g_1307) ^ (((safe_mul_func_uint16_t_u_u((l_1346--), (!((safe_unary_minus_func_int32_t_s((((**p_1361->g_657) = p_1361->g_1350) == &l_47))) != p_1361->g_781.s1)))) < (safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(l_1355[1], (p_1361->g_1320[6][5] = (((0x32L || 0x63L) , ((VECTOR(int8_t, 8))(0x06L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1361->g_1356.s53)), 0x51L, 0x6AL)), 0x3FL, 1L, 1L)).s7) && ((*l_1358) = (**l_1336)))))), 0x4C4BF668L))) == 0x1FA1L))) < 0L), (**l_1336))), (*l_1333))) & p_1361->g_1270.s6) ^ p_1361->g_359.f1));
    }
    return p_1361->g_809;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_2(int16_t  p_3, int32_t  p_4, struct S1 * p_1361)
{ /* block id: 417 */
    int32_t *l_1124 = &p_1361->g_231.f1;
    l_1124 = l_1124;
    return p_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_750 p_1361->g_919 p_1361->g_115 permutations p_1361->g_156 p_1361->g_1075 p_1361->g_280 p_1361->g_660.f1
 * writes: p_1361->g_115 p_1361->g_93 p_1361->g_156 p_1361->g_59
 */
int16_t  func_5(int32_t  p_6, int8_t  p_7, struct S1 * p_1361)
{ /* block id: 398 */
    int32_t l_1080 = 3L;
    int32_t l_1088 = 1L;
    int32_t l_1089[2][4];
    uint64_t l_1113 = 0x59C30631C032CA33L;
    VECTOR(int8_t, 2) l_1115 = (VECTOR(int8_t, 2))((-2L), (-5L));
    uint16_t l_1121[6] = {4UL,4UL,4UL,4UL,4UL,4UL};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_1089[i][j] = (-9L);
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1361->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 184)), permutations[(safe_mod_func_uint32_t_u_u(l_1080, 10))][(safe_mod_func_uint32_t_u_u(p_1361->tid, 184))]));
    for (l_1080 = 17; (l_1080 < (-3)); --l_1080)
    { /* block id: 404 */
        int32_t *l_1083 = &p_1361->g_933.f1;
        int32_t *l_1084 = &p_1361->g_359.f1;
        int32_t *l_1085 = &p_1361->g_660.f1;
        int32_t *l_1086 = &p_1361->g_983[3].f1;
        int32_t *l_1087[6][3] = {{&p_1361->g_660.f1,&p_1361->g_983[3].f1,(void*)0},{&p_1361->g_660.f1,&p_1361->g_983[3].f1,(void*)0},{&p_1361->g_660.f1,&p_1361->g_983[3].f1,(void*)0},{&p_1361->g_660.f1,&p_1361->g_983[3].f1,(void*)0},{&p_1361->g_660.f1,&p_1361->g_983[3].f1,(void*)0},{&p_1361->g_660.f1,&p_1361->g_983[3].f1,(void*)0}};
        uint32_t l_1090 = 4294967292UL;
        VECTOR(int16_t, 4) l_1093 = (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 9L), 9L);
        int16_t *l_1094 = &p_1361->g_140[8];
        int16_t **l_1095 = &l_1094;
        uint32_t *l_1098 = (void*)0;
        int64_t *l_1099 = &p_1361->g_156;
        int64_t *l_1102 = (void*)0;
        int64_t *l_1103 = (void*)0;
        int64_t *l_1104 = (void*)0;
        int64_t *l_1105 = (void*)0;
        int64_t *l_1106 = (void*)0;
        int64_t *l_1107 = (void*)0;
        int8_t l_1108 = 0L;
        uint32_t l_1116 = 4294967295UL;
        int32_t l_1119[7] = {0x39EB51BBL,0x39EB51BBL,0x39EB51BBL,0x39EB51BBL,0x39EB51BBL,0x39EB51BBL,0x39EB51BBL};
        int32_t l_1120 = (-3L);
        int i, j;
        l_1090--;
        l_1088 = ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(l_1093.zzzyzxxxyzzyzyzx)).lo, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0xF429L, (((**p_1361->g_1075) = (p_1361->g_750[0][1] < (l_1108 ^= (((*l_1099) &= (((((*l_1095) = l_1094) == (void*)0) , (safe_sub_func_uint32_t_u_u((p_1361->g_93.s7 = (p_1361->g_919.s6 | (p_1361->g_115 |= 0x01649E5BF44AB47EL))), (!permutations[(safe_mod_func_uint32_t_u_u(l_1080, 10))][(safe_mod_func_uint32_t_u_u(p_1361->tid, 184))])))) || 0L)) & (safe_lshift_func_uint8_t_u_u(0x15L, 2)))))) , (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(l_1113, FAKE_DIVERGE(p_1361->group_0_offset, get_group_id(0), 10))), (*l_1085)))), 0UL, 65535UL)), ((VECTOR(uint16_t, 8))(0x6557L)), 0x8B85L, 65526UL, 0x0261L, 0xBC04L)).s8c)).xxyxyxxy))).s0;
        l_1116++;
        --l_1121[2];
    }
    return p_7;
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_933.f1 p_1361->g_577
 * writes: p_1361->g_933.f1
 */
int64_t  func_12(int32_t  p_13, int8_t  p_14, uint32_t  p_15, int32_t  p_16, int32_t  p_17, struct S1 * p_1361)
{ /* block id: 395 */
    uint32_t l_1078 = 0x018C56F2L;
    int32_t *l_1079 = &p_1361->g_933.f1;
    (*l_1079) ^= l_1078;
    return p_1361->g_577.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_145.f1 p_1361->g_356 p_1361->g_152 p_1361->g_156 p_1361->g_809 p_1361->g_1032 p_1361->g_1036 p_1361->g_1052 p_1361->g_1053 p_1361->g_81 p_1361->g_355
 * writes: p_1361->g_145.f1 p_1361->g_152 p_1361->g_105 p_1361->g_156 p_1361->g_111 p_1361->g_158 p_1361->g_809 p_1361->g_1035 p_1361->g_1037 p_1361->g_140 p_1361->g_360 p_1361->g_82 p_1361->g_1075
 */
int32_t  func_18(uint32_t  p_19, uint64_t  p_20, int64_t  p_21, int64_t  p_22, int8_t  p_23, struct S1 * p_1361)
{ /* block id: 184 */
    uint32_t l_609 = 0x37BD3E93L;
    int32_t l_610[5][7][7] = {{{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL}},{{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL}},{{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL}},{{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL}},{{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL},{0x302AAF1EL,0x663ADDC3L,1L,0L,(-1L),1L,0x302AAF1EL}}};
    int32_t *l_630 = &p_1361->g_59;
    VECTOR(int16_t, 8) l_695 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-9L)), (-9L)), (-9L), 0L, (-9L));
    int32_t l_754 = 0x590CEE4EL;
    VECTOR(uint16_t, 2) l_822 = (VECTOR(uint16_t, 2))(0xE120L, 0xEBD7L);
    VECTOR(int32_t, 2) l_823 = (VECTOR(int32_t, 2))(0x6DB50FE0L, 0L);
    int32_t l_837 = (-9L);
    VECTOR(int64_t, 8) l_840 = (VECTOR(int64_t, 8))(0x5B21D5BCA712B5EEL, (VECTOR(int64_t, 4))(0x5B21D5BCA712B5EEL, (VECTOR(int64_t, 2))(0x5B21D5BCA712B5EEL, 1L), 1L), 1L, 0x5B21D5BCA712B5EEL, 1L);
    uint8_t **l_849 = &p_1361->g_356[5];
    int8_t *l_866[8][5][2] = {{{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0}},{{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0}},{{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0}},{{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0}},{{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0}},{{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0}},{{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0}},{{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0},{&p_1361->g_608[5][3],(void*)0}}};
    int8_t **l_865 = &l_866[5][1][1];
    VECTOR(uint8_t, 4) l_887 = (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0xF9L), 0xF9L);
    int32_t ***l_893 = &p_1361->g_279[0][3];
    VECTOR(uint64_t, 4) l_904 = (VECTOR(uint64_t, 4))(0xC9E44159552B38CFL, (VECTOR(uint64_t, 2))(0xC9E44159552B38CFL, 0x4E415152A52E6E36L), 0x4E415152A52E6E36L);
    VECTOR(int8_t, 2) l_907 = (VECTOR(int8_t, 2))((-7L), 0x1BL);
    uint16_t l_972 = 0x7FF2L;
    int32_t *l_977 = &l_610[2][1][2];
    int32_t l_997 = 0x6A2E78A3L;
    int16_t l_998 = 0x21DBL;
    int64_t *l_1068 = &p_1361->g_154;
    int64_t **l_1067 = &l_1068;
    int i, j, k;
    if ((l_610[2][5][0] = l_609))
    { /* block id: 186 */
        int16_t l_626[1][2][3] = {{{1L,0x0A92L,1L},{1L,0x0A92L,1L}}};
        VECTOR(uint16_t, 16) l_629 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), 65535UL, 0UL, 65535UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), (VECTOR(uint16_t, 2))(0UL, 65535UL), 0UL, 65535UL, 0UL, 65535UL);
        int32_t *l_631 = &p_1361->g_59;
        int32_t l_643 = 0x4F71B50AL;
        uint8_t **l_684 = &p_1361->g_356[4];
        uint8_t ***l_683[9][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int32_t *l_789 = &l_610[2][5][0];
        int32_t l_802 = 0L;
        int32_t l_804[9] = {(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)};
        uint32_t l_814[1][7] = {{4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL}};
        VECTOR(uint8_t, 16) l_826 = (VECTOR(uint8_t, 16))(0x75L, (VECTOR(uint8_t, 4))(0x75L, (VECTOR(uint8_t, 2))(0x75L, 9UL), 9UL), 9UL, 0x75L, 9UL, (VECTOR(uint8_t, 2))(0x75L, 9UL), (VECTOR(uint8_t, 2))(0x75L, 9UL), 0x75L, 9UL, 0x75L, 9UL);
        VECTOR(uint32_t, 8) l_831 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
        VECTOR(uint8_t, 8) l_843 = (VECTOR(uint8_t, 8))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 0x41L), 0x41L), 0x41L, 249UL, 0x41L);
        int8_t **l_867 = (void*)0;
        VECTOR(int64_t, 2) l_918 = (VECTOR(int64_t, 2))(0x3C1F07CF8AFBF756L, 8L);
        int64_t l_951 = 0L;
        uint16_t l_952 = 65532UL;
        int32_t l_956 = 0x06A6E1D1L;
        int32_t *l_988 = &p_1361->g_809;
        int32_t *l_989 = &l_643;
        int32_t *l_990 = (void*)0;
        int32_t *l_991 = &p_1361->g_231.f1;
        int32_t *l_992 = &p_1361->g_231.f1;
        int32_t *l_993 = (void*)0;
        int32_t *l_994 = (void*)0;
        int32_t *l_995 = &p_1361->g_359.f1;
        int32_t *l_996[5] = {&p_1361->g_359.f1,&p_1361->g_359.f1,&p_1361->g_359.f1,&p_1361->g_359.f1,&p_1361->g_359.f1};
        int8_t l_1000 = 0L;
        uint64_t l_1001 = 18446744073709551615UL;
        int i, j, k;
        for (p_1361->g_145.f1 = 0; (p_1361->g_145.f1 != 27); p_1361->g_145.f1 = safe_add_func_int64_t_s_s(p_1361->g_145.f1, 1))
        { /* block id: 189 */
            int64_t *l_615 = (void*)0;
            uint32_t *l_616 = &p_1361->g_68;
            uint64_t l_627 = 0xC99260EA3412FC6BL;
            int32_t *l_628[9][8] = {{(void*)0,(void*)0,&p_1361->g_145.f1,&p_1361->g_145.f1,&p_1361->g_388[0][1].f1,&p_1361->g_231.f1,&l_610[3][5][6],&l_610[1][6][2]},{(void*)0,(void*)0,&p_1361->g_145.f1,&p_1361->g_145.f1,&p_1361->g_388[0][1].f1,&p_1361->g_231.f1,&l_610[3][5][6],&l_610[1][6][2]},{(void*)0,(void*)0,&p_1361->g_145.f1,&p_1361->g_145.f1,&p_1361->g_388[0][1].f1,&p_1361->g_231.f1,&l_610[3][5][6],&l_610[1][6][2]},{(void*)0,(void*)0,&p_1361->g_145.f1,&p_1361->g_145.f1,&p_1361->g_388[0][1].f1,&p_1361->g_231.f1,&l_610[3][5][6],&l_610[1][6][2]},{(void*)0,(void*)0,&p_1361->g_145.f1,&p_1361->g_145.f1,&p_1361->g_388[0][1].f1,&p_1361->g_231.f1,&l_610[3][5][6],&l_610[1][6][2]},{(void*)0,(void*)0,&p_1361->g_145.f1,&p_1361->g_145.f1,&p_1361->g_388[0][1].f1,&p_1361->g_231.f1,&l_610[3][5][6],&l_610[1][6][2]},{(void*)0,(void*)0,&p_1361->g_145.f1,&p_1361->g_145.f1,&p_1361->g_388[0][1].f1,&p_1361->g_231.f1,&l_610[3][5][6],&l_610[1][6][2]},{(void*)0,(void*)0,&p_1361->g_145.f1,&p_1361->g_145.f1,&p_1361->g_388[0][1].f1,&p_1361->g_231.f1,&l_610[3][5][6],&l_610[1][6][2]},{(void*)0,(void*)0,&p_1361->g_145.f1,&p_1361->g_145.f1,&p_1361->g_388[0][1].f1,&p_1361->g_231.f1,&l_610[3][5][6],&l_610[1][6][2]}};
            uint8_t l_642[2][3][2] = {{{255UL,255UL},{255UL,255UL},{255UL,255UL}},{{255UL,255UL},{255UL,255UL},{255UL,255UL}}};
            int32_t l_806 = 0x6858B2DCL;
            int8_t **l_844 = (void*)0;
            int8_t *l_846 = (void*)0;
            int8_t **l_845 = &l_846;
            int32_t **l_850 = &l_789;
            uint16_t l_889 = 0x1BD9L;
            uint32_t l_985 = 1UL;
            int i, j, k;
            (1 + 1);
        }
        ++l_1001;
    }
    else
    { /* block id: 338 */
        uint16_t l_1017 = 0x023EL;
        for (l_754 = 1; (l_754 >= (-9)); l_754 = safe_sub_func_int32_t_s_s(l_754, 2))
        { /* block id: 341 */
            int32_t **l_1006 = &p_1361->g_105[1];
            int32_t ***l_1007 = &l_1006;
            (*l_1007) = l_1006;
            (*l_1006) = ((p_20 <= (0x41L && ((**l_849)++))) , (void*)0);
        }
        for (p_1361->g_156 = 1; (p_1361->g_156 < (-2)); p_1361->g_156 = safe_sub_func_uint8_t_u_u(p_1361->g_156, 5))
        { /* block id: 348 */
            int32_t *l_1012 = &p_1361->g_359.f1;
            int32_t *l_1013[8][4] = {{(void*)0,&l_837,&l_837,(void*)0},{(void*)0,&l_837,&l_837,(void*)0},{(void*)0,&l_837,&l_837,(void*)0},{(void*)0,&l_837,&l_837,(void*)0},{(void*)0,&l_837,&l_837,(void*)0},{(void*)0,&l_837,&l_837,(void*)0},{(void*)0,&l_837,&l_837,(void*)0},{(void*)0,&l_837,&l_837,(void*)0}};
            uint32_t l_1014 = 4294967295UL;
            int i, j;
            ++l_1014;
        }
        --l_1017;
    }
    for (p_1361->g_145.f1 = 27; (p_1361->g_145.f1 <= 13); p_1361->g_145.f1--)
    { /* block id: 355 */
        int32_t l_1038 = 2L;
        int64_t **l_1071 = &l_1068;
        for (p_1361->g_111 = 0; (p_1361->g_111 < 42); ++p_1361->g_111)
        { /* block id: 358 */
            uint32_t l_1047 = 0x4A012B86L;
            int64_t *l_1066 = (void*)0;
            int64_t **l_1065 = &l_1066;
            int32_t l_1076[2][3][7] = {{{3L,0x766AEEC6L,1L,0x213F1DEDL,0x2C2C6AB9L,0x2C2C6AB9L,0x213F1DEDL},{3L,0x766AEEC6L,1L,0x213F1DEDL,0x2C2C6AB9L,0x2C2C6AB9L,0x213F1DEDL},{3L,0x766AEEC6L,1L,0x213F1DEDL,0x2C2C6AB9L,0x2C2C6AB9L,0x213F1DEDL}},{{3L,0x766AEEC6L,1L,0x213F1DEDL,0x2C2C6AB9L,0x2C2C6AB9L,0x213F1DEDL},{3L,0x766AEEC6L,1L,0x213F1DEDL,0x2C2C6AB9L,0x2C2C6AB9L,0x213F1DEDL},{3L,0x766AEEC6L,1L,0x213F1DEDL,0x2C2C6AB9L,0x2C2C6AB9L,0x213F1DEDL}}};
            int32_t l_1077 = 0x5A28C6D4L;
            int i, j, k;
            for (p_1361->g_158 = (-17); (p_1361->g_158 != 31); p_1361->g_158++)
            { /* block id: 361 */
                int32_t **l_1027 = &p_1361->g_105[1];
                (*l_1027) = &l_610[1][5][5];
                for (p_1361->g_809 = 0; (p_1361->g_809 < (-9)); p_1361->g_809 = safe_sub_func_uint8_t_u_u(p_1361->g_809, 3))
                { /* block id: 365 */
                    uint8_t l_1043[4] = {1UL,1UL,1UL,1UL};
                    uint8_t **l_1044 = (void*)0;
                    int16_t *l_1050 = &p_1361->g_140[5];
                    int32_t *l_1051 = &l_837;
                    int i;
                    for (l_972 = 0; (l_972 >= 38); ++l_972)
                    { /* block id: 368 */
                        volatile struct S0 *l_1033 = (void*)0;
                        volatile struct S0 *l_1034[1][2];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1034[i][j] = &p_1361->g_1032;
                        }
                        p_1361->g_1035 = p_1361->g_1032;
                        p_1361->g_1037 = p_1361->g_1036;
                    }
                    if (((VECTOR(int32_t, 8))((l_1038 , ((safe_mod_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((FAKE_DIVERGE(p_1361->group_2_offset, get_group_id(2), 10) & l_1043[2]), (p_22 , ((l_1044 == (void*)0) ^ (GROUP_DIVERGE(2, 1) , (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_1047, (safe_div_func_uint8_t_u_u((l_1038 >= ((*l_1050) = p_23)), l_1043[3])), 246UL, 0x1DL)).z, FAKE_DIVERGE(p_1361->group_2_offset, get_group_id(2), 10)))))))) && 0L), l_1047)) | 0x9EC2509CL)), l_1043[0], (-1L), 0x21322FAFL, l_1038, (-4L), 0L, (-3L))).s3)
                    { /* block id: 373 */
                        return p_20;
                    }
                    else
                    { /* block id: 375 */
                        (*l_1027) = l_1051;
                    }
                    return l_1038;
                }
                (*p_1361->g_1053) = p_1361->g_1052;
                if ((*l_977))
                    break;
            }
            for (l_1038 = 0; (l_1038 == 16); l_1038 = safe_add_func_uint32_t_u_u(l_1038, 5))
            { /* block id: 385 */
                uint64_t l_1064 = 0x91586A92799A1949L;
                int64_t ***l_1069 = (void*)0;
                int64_t ***l_1070 = (void*)0;
                int32_t ***l_1072 = &p_1361->g_279[3][1];
                int32_t ***l_1073 = &p_1361->g_279[4][7];
                int32_t ***l_1074[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1074[i] = (void*)0;
                (*p_1361->g_81) = 0x48F70242L;
                l_1077 |= (((safe_rshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_u(((**p_1361->g_355) >= ((((VECTOR(int32_t, 8))(0L, (-6L), ((VECTOR(int32_t, 4))(6L, 0x7044E38AL, 2L, 0x453803AAL)), (-3L), 0x56C4CEBFL)).s3 , ((void*)0 != &p_1361->g_279[0][3])) & (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((((((l_1064 , l_1065) == (l_1071 = l_1067)) , p_19) ^ ((p_1361->g_1075 = &p_1361->g_280) == (void*)0)) <= FAKE_DIVERGE(p_1361->local_2_offset, get_local_id(2), 10)) <= p_20), 6)) == 0L), 3)))), (*l_977))) <= p_20) == l_1064), 3)) < 1UL) , l_1076[1][2][1]);
            }
        }
        if (l_1038)
            break;
    }
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_158 p_1361->g_266 p_1361->g_137 p_1361->g_273 p_1361->g_comm_values p_1361->g_283 p_1361->g_211 p_1361->g_152 p_1361->g_145.f1 p_1361->g_93 p_1361->l_comm_values p_1361->g_156 p_1361->g_285 p_1361->g_286 p_1361->g_289 p_1361->g_112 p_1361->g_210 p_1361->g_44 p_1361->g_275 p_1361->g_340 p_1361->g_154 p_1361->g_91 p_1361->g_355 p_1361->g_358 p_1361->g_360 p_1361->g_361 p_1361->g_111 p_1361->g_388 p_1361->g_148 p_1361->g_92 p_1361->g_356 p_1361->g_451 p_1361->g_453 p_1361->g_105 p_1361->g_115 p_1361->g_396 p_1361->g_140 p_1361->g_68 p_1361->g_81 p_1361->g_145 p_1361->g_556 p_1361->g_433 p_1361->g_569 p_1361->g_577 p_1361->g_583 p_1361->g_591 p_1361->g_89
 * writes: p_1361->g_158 p_1361->g_279 p_1361->g_156 p_1361->g_105 p_1361->g_152 p_1361->g_112 p_1361->g_154 p_1361->g_355 p_1361->g_359 p_1361->g_360 p_1361->g_111 p_1361->g_145 p_1361->g_451 p_1361->g_115 p_1361->g_68 p_1361->g_286 p_1361->g_82 p_1361->g_140
 */
int16_t  func_36(int64_t  p_37, int64_t  p_38, uint32_t  p_39, struct S1 * p_1361)
{ /* block id: 51 */
    uint32_t *l_249 = &p_1361->g_158;
    int32_t *l_277 = &p_1361->g_59;
    int32_t **l_276 = &l_277;
    int32_t ***l_278[3][10] = {{(void*)0,&l_276,(void*)0,(void*)0,&l_276,(void*)0,(void*)0,&l_276,(void*)0,(void*)0},{(void*)0,&l_276,(void*)0,(void*)0,&l_276,(void*)0,(void*)0,&l_276,(void*)0,(void*)0},{(void*)0,&l_276,(void*)0,(void*)0,&l_276,(void*)0,(void*)0,&l_276,(void*)0,(void*)0}};
    int32_t l_281 = 0x08113AEDL;
    uint8_t l_282 = 1UL;
    int16_t *l_314 = &p_1361->g_140[2];
    VECTOR(uint32_t, 8) l_315 = (VECTOR(uint32_t, 8))(0xC06625B2L, (VECTOR(uint32_t, 4))(0xC06625B2L, (VECTOR(uint32_t, 2))(0xC06625B2L, 0x5B64EEE7L), 0x5B64EEE7L), 0x5B64EEE7L, 0xC06625B2L, 0x5B64EEE7L);
    int32_t l_326 = 0x44EE5FFFL;
    int32_t l_328 = (-1L);
    int32_t l_329 = (-1L);
    int32_t l_330 = (-1L);
    int32_t l_331[5][5][2] = {{{(-10L),(-5L)},{(-10L),(-5L)},{(-10L),(-5L)},{(-10L),(-5L)},{(-10L),(-5L)}},{{(-10L),(-5L)},{(-10L),(-5L)},{(-10L),(-5L)},{(-10L),(-5L)},{(-10L),(-5L)}},{{(-10L),(-5L)},{(-10L),(-5L)},{(-10L),(-5L)},{(-10L),(-5L)},{(-10L),(-5L)}},{{(-10L),(-5L)},{(-10L),(-5L)},{(-10L),(-5L)},{(-10L),(-5L)},{(-10L),(-5L)}},{{(-10L),(-5L)},{(-10L),(-5L)},{(-10L),(-5L)},{(-10L),(-5L)},{(-10L),(-5L)}}};
    uint32_t l_363 = 0UL;
    VECTOR(int16_t, 4) l_416 = (VECTOR(int16_t, 4))(0x09DCL, (VECTOR(int16_t, 2))(0x09DCL, (-1L)), (-1L));
    int8_t *l_448 = (void*)0;
    int16_t l_497[3][1];
    VECTOR(int32_t, 4) l_533 = (VECTOR(int32_t, 4))(0x613E3703L, (VECTOR(int32_t, 2))(0x613E3703L, 0x46281A32L), 0x46281A32L);
    VECTOR(uint32_t, 2) l_574 = (VECTOR(uint32_t, 2))(4294967295UL, 1UL);
    VECTOR(uint32_t, 4) l_576 = (VECTOR(uint32_t, 4))(0x1217FBE7L, (VECTOR(uint32_t, 2))(0x1217FBE7L, 1UL), 1UL);
    uint32_t l_592 = 4294967295UL;
    int32_t *l_593 = &p_1361->g_145.f1;
    int32_t *l_594 = &l_328;
    int32_t *l_595 = &p_1361->g_145.f1;
    int32_t *l_596 = &p_1361->g_359.f1;
    int32_t *l_597 = &l_328;
    int32_t *l_598 = &l_326;
    int32_t *l_599 = &l_330;
    int32_t *l_600 = (void*)0;
    int32_t *l_601 = (void*)0;
    int32_t *l_602[3];
    int16_t l_603 = 0x657EL;
    uint32_t l_604[7][7][3] = {{{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L}},{{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L}},{{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L}},{{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L}},{{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L}},{{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L}},{{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L},{0x52544F52L,0xBE254288L,0x52544F52L}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_497[i][j] = (-8L);
    }
    for (i = 0; i < 3; i++)
        l_602[i] = &p_1361->g_359.f1;
    if (((safe_mod_func_uint8_t_u_u((((p_1361->g_156 ^= ((safe_mod_func_uint8_t_u_u((((((safe_mul_func_int16_t_s_s((((*l_249)--) , ((((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(0x7B0AL, 0x2C27L)).yyxx, (int16_t)(safe_sub_func_uint64_t_u_u((0x3F146019718AAE45L > (safe_add_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((((safe_div_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((0xFADA9A81F95636F1L < (((VECTOR(int64_t, 8))(p_1361->g_266.s27237601)).s7 || ((safe_lshift_func_int8_t_s_s(0x5DL, ((((l_249 == (void*)0) ^ (safe_add_func_uint64_t_u_u(0x80FC088635562E8DL, p_1361->g_137.y))) ^ (((safe_mul_func_int8_t_s_s(((p_1361->g_273 != (p_1361->g_279[0][3] = l_276)) ^ 0UL), p_1361->g_comm_values[p_1361->tid])) && 0x01L) | FAKE_DIVERGE(p_1361->global_2_offset, get_global_id(2), 10))) | 0x11DEAA68DCC2A209L))) , l_281))), l_281)) & 0x1850L), l_282)), p_1361->g_283)), p_1361->g_211.sf)) > GROUP_DIVERGE(2, 1)) , p_37) | p_1361->g_152), p_1361->g_266.s5)) , (-7L)), p_39))), p_1361->g_145.f1))))).y > p_1361->g_93.s2) & 0xA36910076F051CD8L)), p_38)) > l_281) < p_1361->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1361->tid, 184))]) , p_37) ^ l_281), l_281)) != l_282)) ^ l_282) , FAKE_DIVERGE(p_1361->local_1_offset, get_local_id(1), 10)), (-8L))) , l_282))
    { /* block id: 55 */
        VECTOR(uint8_t, 16) l_290 = (VECTOR(uint8_t, 16))(0x73L, (VECTOR(uint8_t, 4))(0x73L, (VECTOR(uint8_t, 2))(0x73L, 249UL), 249UL), 249UL, 0x73L, 249UL, (VECTOR(uint8_t, 2))(0x73L, 249UL), (VECTOR(uint8_t, 2))(0x73L, 249UL), 0x73L, 249UL, 0x73L, 249UL);
        uint8_t *l_293 = (void*)0;
        uint8_t *l_294 = &p_1361->g_152;
        uint16_t *l_295 = (void*)0;
        uint16_t *l_296 = (void*)0;
        uint16_t *l_297 = (void*)0;
        uint16_t *l_298 = (void*)0;
        uint16_t *l_299 = (void*)0;
        uint16_t *l_300 = (void*)0;
        uint16_t *l_301 = (void*)0;
        uint16_t *l_302 = (void*)0;
        uint16_t *l_303 = &p_1361->g_112;
        int32_t *l_316 = &l_281;
        int32_t l_324 = (-1L);
        int32_t l_325 = 5L;
        int32_t l_327[6][2] = {{0x1537A975L,0L},{0x1537A975L,0L},{0x1537A975L,0L},{0x1537A975L,0L},{0x1537A975L,0L},{0x1537A975L,0L}};
        int8_t l_333 = 0x35L;
        uint64_t l_334 = 0x2659F86BD7AF2B2FL;
        uint32_t l_351 = 0x13B5F980L;
        uint8_t l_381 = 4UL;
        uint64_t l_492 = 0x60BE887546D3D10DL;
        int32_t *l_493 = &p_1361->g_358.f1;
        int32_t *l_494 = &l_328;
        int32_t *l_495 = (void*)0;
        int32_t *l_496[3];
        VECTOR(uint32_t, 4) l_498 = (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 0x664745B9L), 0x664745B9L);
        int i, j;
        for (i = 0; i < 3; i++)
            l_496[i] = (void*)0;
        (*p_1361->g_285) = &l_281;
        if ((((0x2885816FB09E31F1L | (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_1361->g_286.s0f)))), 0x3BL, 0x69L)).xwxyxzyy)).s2 | ((safe_lshift_func_int16_t_s_s(1L, 14)) != ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_1361->g_289.xyxy)).odd)).yxyyyyyy)), ((VECTOR(uint8_t, 2))(l_290.s8e)).yyyyyyxx))).s0, ((VECTOR(uint8_t, 2))(250UL, 0x60L)), 255UL, (safe_mod_func_int16_t_s_s(((FAKE_DIVERGE(p_1361->local_0_offset, get_local_id(0), 10) != (l_290.s5 < (l_281 = (!p_39)))) || ((*l_294) = l_282)), ((*l_303)--))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(0x78L, (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((((VECTOR(int32_t, 4))(4L, (safe_mod_func_int64_t_s_s(((l_314 == (void*)0) && ((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 8))(l_315.s02347367)).lo, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(7UL, ((void*)0 != l_316), p_39, 0x2CB72008L, 4294967295UL, ((VECTOR(uint32_t, 8))(4294967289UL)), ((VECTOR(uint32_t, 2))(6UL)), 4UL)).sbb31))))).w), 0x3495F7AF6C17839FL)), 0x5241AA35L, 0x49E515F5L)).x <= p_38), p_1361->g_210.s4)) , p_39), p_1361->g_210.s2)), p_1361->g_44.s9)), p_1361->g_145.f1, ((VECTOR(uint8_t, 4))(0x7BL)), 0x27L, p_1361->g_275, ((VECTOR(uint8_t, 2))(0x36L)), 0x0BL, ((VECTOR(uint8_t, 2))(0x2CL)), 0x41L, 0x91L)).s7137)), p_38, ((VECTOR(uint8_t, 2))(0x6DL)), 0xF2L, ((VECTOR(uint8_t, 2))(3UL)), 251UL)).s6, 1UL, ((VECTOR(uint8_t, 2))(0UL)), p_39, ((VECTOR(uint8_t, 2))(0x27L)), ((VECTOR(uint8_t, 4))(255UL)), 0xDCL, 4UL, ((VECTOR(uint8_t, 2))(0x95L)), 254UL)).sa))) != p_39) > p_1361->g_comm_values[p_1361->tid]))
        { /* block id: 60 */
            int32_t *l_317 = &p_1361->g_231.f1;
            int32_t *l_318 = &p_1361->g_145.f1;
            int32_t *l_319 = (void*)0;
            int32_t *l_320 = &p_1361->g_145.f1;
            int32_t *l_321 = &l_281;
            int32_t l_322 = 0x399193B4L;
            int32_t *l_323[2][9];
            int8_t l_332[4][4][7] = {{{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL},{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL},{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL},{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL}},{{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL},{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL},{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL},{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL}},{{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL},{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL},{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL},{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL}},{{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL},{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL},{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL},{0x32L,8L,(-7L),(-5L),0x44L,0x7FL,0x6CL}}};
            int32_t **l_349 = &p_1361->g_280;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 9; j++)
                    l_323[i][j] = &p_1361->g_231.f1;
            }
            --l_334;
            for (l_281 = 0; (l_281 == (-3)); l_281 = safe_sub_func_uint32_t_u_u(l_281, 3))
            { /* block id: 64 */
                int32_t l_350 = 0x1165F161L;
                (*p_1361->g_340) = &l_324;
                for (p_1361->g_154 = 9; (p_1361->g_154 > 0); p_1361->g_154 = safe_sub_func_uint64_t_u_u(p_1361->g_154, 8))
                { /* block id: 68 */
                    int32_t l_354 = 0x678ABCA8L;
                    int32_t l_362 = (-8L);
                    if ((p_38 , (p_1361->g_91.x , ((safe_rshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s(0x54161717A2AB3D75L, (safe_mod_func_int16_t_s_s((0x3A73619E2B90EBF4L >= p_1361->g_44.sd), p_39)))), 0)) && ((void*)0 == l_349)))))
                    { /* block id: 69 */
                        uint8_t * volatile * volatile *l_357[2][2][4] = {{{&p_1361->g_355,&p_1361->g_355,&p_1361->g_355,&p_1361->g_355},{&p_1361->g_355,&p_1361->g_355,&p_1361->g_355,&p_1361->g_355}},{{&p_1361->g_355,&p_1361->g_355,&p_1361->g_355,&p_1361->g_355},{&p_1361->g_355,&p_1361->g_355,&p_1361->g_355,&p_1361->g_355}}};
                        int i, j, k;
                        --l_351;
                        p_1361->g_355 = (l_354 , p_1361->g_355);
                        p_1361->g_359 = p_1361->g_358;
                        (*p_1361->g_361) = p_1361->g_360;
                    }
                    else
                    { /* block id: 74 */
                        return (*l_320);
                    }
                    l_363++;
                }
                return p_38;
            }
        }
        else
        { /* block id: 81 */
            int32_t l_366 = (-3L);
            int32_t *l_367 = &l_330;
            int32_t *l_368 = &l_329;
            int32_t *l_369 = &l_329;
            int32_t *l_370 = (void*)0;
            int32_t *l_371 = &l_330;
            int32_t *l_372 = &l_327[5][1];
            int32_t *l_373 = (void*)0;
            int32_t *l_374 = &p_1361->g_359.f1;
            int32_t *l_375 = (void*)0;
            int32_t *l_376 = &l_329;
            int32_t *l_377 = &l_327[2][1];
            int32_t *l_378 = &l_327[3][0];
            int32_t *l_379 = &l_327[0][0];
            int32_t *l_380[4][10] = {{&l_330,&l_281,&l_330,&l_330,&l_281,&l_330,&l_330,&l_281,&l_330,&l_330},{&l_330,&l_281,&l_330,&l_330,&l_281,&l_330,&l_330,&l_281,&l_330,&l_330},{&l_330,&l_281,&l_330,&l_330,&l_281,&l_330,&l_330,&l_281,&l_330,&l_330},{&l_330,&l_281,&l_330,&l_330,&l_281,&l_330,&l_330,&l_281,&l_330,&l_330}};
            int i, j;
            --l_381;
            for (p_1361->g_111 = 0; (p_1361->g_111 < 12); p_1361->g_111++)
            { /* block id: 85 */
                int64_t *l_421 = &p_1361->g_154;
                int32_t l_427 = (-1L);
                int32_t **l_454 = &l_371;
                for (l_326 = (-14); (l_326 <= 15); l_326++)
                { /* block id: 88 */
                    struct S0 *l_389 = &p_1361->g_145;
                    int32_t l_410 = 0x2B298763L;
                    uint64_t *l_413[3];
                    int8_t *l_419 = (void*)0;
                    int8_t *l_420 = &l_333;
                    int32_t l_426 = 0x5DDE8FD1L;
                    VECTOR(uint32_t, 2) l_450 = (VECTOR(uint32_t, 2))(6UL, 0xC5DF3F8FL);
                    int i;
                    for (i = 0; i < 3; i++)
                        l_413[i] = (void*)0;
                    (*l_389) = p_1361->g_388[0][1];
                    if (p_38)
                        continue;
                    (*l_377) &= (safe_sub_func_uint8_t_u_u(l_282, ((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint64_t_u_u((((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551606UL, 0x514982683F7E285CL)).xyxy)))).wyzzyyxw)), ((VECTOR(uint64_t, 4))(p_1361->g_396.yyxy)).zxzyzyyy, ((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 2))(0xEF91C398CDC44E88L, 0xDAC0776AD7DF9B10L)), ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 2))(0x7A9C4D51D867F97AL, 1UL)), (uint64_t)(((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((FAKE_DIVERGE(p_1361->global_0_offset, get_global_id(0), 10) , 5L), 4)), ((((--p_1361->g_92.y) != p_1361->g_289.y) , ((safe_add_func_uint64_t_u_u((p_39 >= ((*l_303) = ((*l_316) & (p_1361->g_115 = (((VECTOR(uint64_t, 2))(0x6F69CF8D5809F84DL, 0UL)).odd | ((safe_unary_minus_func_int32_t_s((safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(0x75A7L, GROUP_DIVERGE(1, 1))), (-1L))))) ^ (l_410 ^ (safe_mul_func_int8_t_s_s(p_1361->g_61.s4, 0x76L))))))))), p_1361->g_266.s6)) , l_331[1][1][1])) || p_39))) || p_39) <= 0UL))))))).yyyyyyyx)), ((VECTOR(uint64_t, 8))(0xE97C101DCEB39BC6L)))))))).s5 ^ FAKE_DIVERGE(p_1361->group_0_offset, get_group_id(0), 10)), 0L)) >= 6UL), l_410)) || p_38)));
                    if (((0x6FAEL < ((((~(p_38 | (safe_mul_func_uint16_t_u_u(p_1361->g_comm_values[p_1361->tid], ((VECTOR(int16_t, 16))(l_416.yxwywywwwxxxxzxy)).s2)))) <= ((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(0x06L, 0xABL, 255UL, 0x4EL)).w, 6)) || p_1361->g_148.s5)) != ((((*l_420) = p_1361->g_92.x) , &p_38) != l_421)) > p_37)) == ((((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(4L, (-7L))).even, (safe_add_func_uint32_t_u_u(4294967294UL, 0x663ABBA5L)))) ^ 0x37L) , &p_1361->g_156) == (void*)0)))
                    { /* block id: 96 */
                        (*l_377) |= (-1L);
                    }
                    else
                    { /* block id: 98 */
                        uint32_t l_428 = 0x1FDDB663L;
                        uint32_t *l_449 = &l_363;
                        --l_428;
                        (*l_378) = (l_427 , (safe_sub_func_int8_t_s_s(0x74L, (~(((VECTOR(uint32_t, 4))(p_1361->g_433.seeb3)).z > (safe_rshift_func_int8_t_s_s(((safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((~((*l_369) = (safe_sub_func_int64_t_s_s(((((safe_div_func_uint64_t_u_u(p_1361->g_comm_values[p_1361->tid], ((safe_div_func_uint32_t_u_u(((*l_449) = (l_448 != p_1361->g_356[5])), ((VECTOR(uint32_t, 16))(l_450.yxxyxxyxxxyxyyxx)).sc)) & p_39))) != (l_427 , p_1361->g_92.y)) & p_39) ^ p_1361->g_286.s9), p_37)))) ^ 0x2ED02F62L), 4)), l_326)), p_1361->g_comm_values[p_1361->tid])) == p_39), p_1361->g_111)))))));
                    }
                }
                (*l_316) = ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(6L, 0x062DE403L)).yxyyyyyxxxxxxxxx))).s7;
                (*p_1361->g_453) = p_1361->g_451;
                (*l_454) = (*p_1361->g_285);
            }
            for (p_1361->g_154 = 0; (p_1361->g_154 >= 11); p_1361->g_154 = safe_add_func_int32_t_s_s(p_1361->g_154, 9))
            { /* block id: 111 */
                int32_t **l_457 = &l_367;
                int32_t l_462 = 0x3483EAACL;
                (*l_457) = &l_329;
                for (p_39 = 3; (p_39 <= 31); p_39 = safe_add_func_int64_t_s_s(p_39, 6))
                { /* block id: 115 */
                    uint16_t l_463 = 0xD60DL;
                    VECTOR(uint16_t, 16) l_472 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint16_t, 2))(0UL, 1UL), (VECTOR(uint16_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
                    uint64_t *l_479 = &p_1361->g_115;
                    VECTOR(int32_t, 16) l_484 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x53F0CBDEL), 0x53F0CBDEL), 0x53F0CBDEL, (-2L), 0x53F0CBDEL, (VECTOR(int32_t, 2))((-2L), 0x53F0CBDEL), (VECTOR(int32_t, 2))((-2L), 0x53F0CBDEL), (-2L), 0x53F0CBDEL, (-2L), 0x53F0CBDEL);
                    int32_t l_491 = 0x1158455BL;
                    int i;
                    for (l_329 = 3; (l_329 <= (-29)); --l_329)
                    { /* block id: 118 */
                        ++l_463;
                    }
                    l_491 ^= (0x6385L > (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_472.s7b56aecd)).s74)))).even, 3)) && ((safe_mod_func_uint32_t_u_u(((void*)0 != &p_1361->g_274), (*l_377))) ^ l_326)), ((VECTOR(uint8_t, 8))(((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(p_39, 3)), (((++(*l_479)) | (safe_sub_func_int32_t_s_s(((*l_379) = 0x12E13DAEL), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_484.s4621f2fac780203b)))).lo)).odd)).w))) , ((((safe_div_func_int64_t_s_s(((safe_mod_func_int16_t_s_s(7L, ((safe_sub_func_uint8_t_u_u(0x36L, p_38)) , p_1361->g_286.s9))) | p_1361->g_396.y), (*l_316))) ^ p_37) , p_1361->g_140[3]) , p_38)))) || GROUP_DIVERGE(1, 1)), 255UL, (**p_1361->g_355), ((VECTOR(uint8_t, 4))(1UL)), 252UL)).s7, 0xB0L, ((VECTOR(uint8_t, 2))(0xA1L)), 0x1EL, ((VECTOR(uint8_t, 2))(251UL)), (**p_1361->g_355), ((VECTOR(uint8_t, 2))(252UL)), ((VECTOR(uint8_t, 4))(0x6AL)), 0UL)).se364, ((VECTOR(uint8_t, 4))(0xF0L)), ((VECTOR(uint8_t, 4))(255UL))))).yxxxxwwz)).s51))), ((VECTOR(uint8_t, 2))(252UL)), ((VECTOR(uint8_t, 2))(0xF3L))))), (*l_316), GROUP_DIVERGE(1, 1), 0x3FL, ((VECTOR(uint8_t, 2))(0x17L)), (**l_457), 255UL, ((VECTOR(uint8_t, 4))(0x0BL)), 0x3DL, 249UL, 0x56L)).s3, FAKE_DIVERGE(p_1361->local_2_offset, get_local_id(2), 10))), (-3L))));
                    return l_492;
                }
            }
        }
        l_498.y++;
        for (l_326 = 21; (l_326 >= 2); l_326 = safe_sub_func_uint16_t_u_u(l_326, 1))
        { /* block id: 131 */
            if ((0x57L || p_39))
            { /* block id: 132 */
                return p_1361->g_92.w;
            }
            else
            { /* block id: 134 */
                if ((atomic_inc(&p_1361->l_atomic_input[3]) == 1))
                { /* block id: 136 */
                    VECTOR(uint64_t, 8) l_503 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 1UL, 18446744073709551614UL);
                    VECTOR(int32_t, 8) l_504 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x5358F54AL), 0x5358F54AL), 0x5358F54AL, (-8L), 0x5358F54AL);
                    struct S0 l_505[9][9] = {{{0x5604364CL,-1L},{0x61EA08D4L,0x1664F155L},{0x68B464EFL,0x03A78C7FL},{0x01CE761BL,0x11BE723AL},{0x68B464EFL,0x03A78C7FL},{0x61EA08D4L,0x1664F155L},{0x5604364CL,-1L},{1L,0x1F93C3BFL},{0x49AED5A1L,0x3F69F7CCL}},{{0x5604364CL,-1L},{0x61EA08D4L,0x1664F155L},{0x68B464EFL,0x03A78C7FL},{0x01CE761BL,0x11BE723AL},{0x68B464EFL,0x03A78C7FL},{0x61EA08D4L,0x1664F155L},{0x5604364CL,-1L},{1L,0x1F93C3BFL},{0x49AED5A1L,0x3F69F7CCL}},{{0x5604364CL,-1L},{0x61EA08D4L,0x1664F155L},{0x68B464EFL,0x03A78C7FL},{0x01CE761BL,0x11BE723AL},{0x68B464EFL,0x03A78C7FL},{0x61EA08D4L,0x1664F155L},{0x5604364CL,-1L},{1L,0x1F93C3BFL},{0x49AED5A1L,0x3F69F7CCL}},{{0x5604364CL,-1L},{0x61EA08D4L,0x1664F155L},{0x68B464EFL,0x03A78C7FL},{0x01CE761BL,0x11BE723AL},{0x68B464EFL,0x03A78C7FL},{0x61EA08D4L,0x1664F155L},{0x5604364CL,-1L},{1L,0x1F93C3BFL},{0x49AED5A1L,0x3F69F7CCL}},{{0x5604364CL,-1L},{0x61EA08D4L,0x1664F155L},{0x68B464EFL,0x03A78C7FL},{0x01CE761BL,0x11BE723AL},{0x68B464EFL,0x03A78C7FL},{0x61EA08D4L,0x1664F155L},{0x5604364CL,-1L},{1L,0x1F93C3BFL},{0x49AED5A1L,0x3F69F7CCL}},{{0x5604364CL,-1L},{0x61EA08D4L,0x1664F155L},{0x68B464EFL,0x03A78C7FL},{0x01CE761BL,0x11BE723AL},{0x68B464EFL,0x03A78C7FL},{0x61EA08D4L,0x1664F155L},{0x5604364CL,-1L},{1L,0x1F93C3BFL},{0x49AED5A1L,0x3F69F7CCL}},{{0x5604364CL,-1L},{0x61EA08D4L,0x1664F155L},{0x68B464EFL,0x03A78C7FL},{0x01CE761BL,0x11BE723AL},{0x68B464EFL,0x03A78C7FL},{0x61EA08D4L,0x1664F155L},{0x5604364CL,-1L},{1L,0x1F93C3BFL},{0x49AED5A1L,0x3F69F7CCL}},{{0x5604364CL,-1L},{0x61EA08D4L,0x1664F155L},{0x68B464EFL,0x03A78C7FL},{0x01CE761BL,0x11BE723AL},{0x68B464EFL,0x03A78C7FL},{0x61EA08D4L,0x1664F155L},{0x5604364CL,-1L},{1L,0x1F93C3BFL},{0x49AED5A1L,0x3F69F7CCL}},{{0x5604364CL,-1L},{0x61EA08D4L,0x1664F155L},{0x68B464EFL,0x03A78C7FL},{0x01CE761BL,0x11BE723AL},{0x68B464EFL,0x03A78C7FL},{0x61EA08D4L,0x1664F155L},{0x5604364CL,-1L},{1L,0x1F93C3BFL},{0x49AED5A1L,0x3F69F7CCL}}};
                    VECTOR(int32_t, 8) l_506 = (VECTOR(int32_t, 8))(0x53D96E77L, (VECTOR(int32_t, 4))(0x53D96E77L, (VECTOR(int32_t, 2))(0x53D96E77L, (-3L)), (-3L)), (-3L), 0x53D96E77L, (-3L));
                    int32_t l_507 = 8L;
                    VECTOR(int32_t, 4) l_508 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 1L), 1L);
                    VECTOR(int32_t, 4) l_509 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L));
                    VECTOR(int32_t, 4) l_510 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L);
                    VECTOR(int32_t, 8) l_511 = (VECTOR(int32_t, 8))(0x5333A9C6L, (VECTOR(int32_t, 4))(0x5333A9C6L, (VECTOR(int32_t, 2))(0x5333A9C6L, 0x036697ACL), 0x036697ACL), 0x036697ACL, 0x5333A9C6L, 0x036697ACL);
                    int8_t l_512[10] = {0x52L,0x39L,0x52L,0x52L,0x39L,0x52L,0x52L,0x39L,0x52L,0x52L};
                    VECTOR(int32_t, 2) l_513 = (VECTOR(int32_t, 2))(7L, 0x30E544F1L);
                    VECTOR(int32_t, 4) l_514 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 8L), 8L);
                    int32_t l_515 = (-1L);
                    uint16_t l_516[6] = {0xE8F2L,0x11FDL,0xE8F2L,0xE8F2L,0x11FDL,0xE8F2L};
                    uint32_t l_517 = 0x3DF89094L;
                    int16_t l_518 = 0L;
                    VECTOR(int32_t, 16) l_519 = (VECTOR(int32_t, 16))(0x63EF4C22L, (VECTOR(int32_t, 4))(0x63EF4C22L, (VECTOR(int32_t, 2))(0x63EF4C22L, 0x0C5484A3L), 0x0C5484A3L), 0x0C5484A3L, 0x63EF4C22L, 0x0C5484A3L, (VECTOR(int32_t, 2))(0x63EF4C22L, 0x0C5484A3L), (VECTOR(int32_t, 2))(0x63EF4C22L, 0x0C5484A3L), 0x63EF4C22L, 0x0C5484A3L, 0x63EF4C22L, 0x0C5484A3L);
                    VECTOR(int32_t, 4) l_520 = (VECTOR(int32_t, 4))(0x455567BFL, (VECTOR(int32_t, 2))(0x455567BFL, 0x5ADE96C1L), 0x5ADE96C1L);
                    uint16_t l_521[1][1][5] = {{{0x2CDBL,0x2CDBL,0x2CDBL,0x2CDBL,0x2CDBL}}};
                    int i, j, k;
                    l_505[5][3] = (l_503.s5 , (l_504.s6 , l_505[5][3]));
                    l_507 = ((VECTOR(int32_t, 16))(l_506.s4471417034073626)).sa;
                    l_521[0][0][1] &= ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(l_508.xwyx)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(1L, 0L)).yyyy, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_509.xywy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x275505B0L, (-1L))))).yyxx, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(l_510.zyyxzyww)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_511.s77)), 0x09FBD34FL, 0x16FD2C1BL)).zxxzxwxw, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(7L, l_512[9], 0x37018687L, 0x3385B211L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_513.xy)).yyyxyyyy)).s7573513246613517)).seb)).yyxy))))).wxyzyyyz))), ((VECTOR(int32_t, 4))(l_514.xzyz)).zwzyzwwy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((l_517 = (l_515 , l_516[0])) , (l_509.y = l_518)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_519.saf)))), 0x6502FD5AL, (-5L), ((VECTOR(int32_t, 2))(l_520.xy)), 0x55C8C7D0L)).hi)).wwxxzwxz))).hi)))))).wyxwwzxyxzzzyxxz)).sc42f))).x;
                    unsigned int result = 0;
                    result += l_503.s7;
                    result += l_503.s6;
                    result += l_503.s5;
                    result += l_503.s4;
                    result += l_503.s3;
                    result += l_503.s2;
                    result += l_503.s1;
                    result += l_503.s0;
                    result += l_504.s7;
                    result += l_504.s6;
                    result += l_504.s5;
                    result += l_504.s4;
                    result += l_504.s3;
                    result += l_504.s2;
                    result += l_504.s1;
                    result += l_504.s0;
                    int l_505_i0, l_505_i1;
                    for (l_505_i0 = 0; l_505_i0 < 9; l_505_i0++) {
                        for (l_505_i1 = 0; l_505_i1 < 9; l_505_i1++) {
                            result += l_505[l_505_i0][l_505_i1].f0;
                            result += l_505[l_505_i0][l_505_i1].f1;
                        }
                    }
                    result += l_506.s7;
                    result += l_506.s6;
                    result += l_506.s5;
                    result += l_506.s4;
                    result += l_506.s3;
                    result += l_506.s2;
                    result += l_506.s1;
                    result += l_506.s0;
                    result += l_507;
                    result += l_508.w;
                    result += l_508.z;
                    result += l_508.y;
                    result += l_508.x;
                    result += l_509.w;
                    result += l_509.z;
                    result += l_509.y;
                    result += l_509.x;
                    result += l_510.w;
                    result += l_510.z;
                    result += l_510.y;
                    result += l_510.x;
                    result += l_511.s7;
                    result += l_511.s6;
                    result += l_511.s5;
                    result += l_511.s4;
                    result += l_511.s3;
                    result += l_511.s2;
                    result += l_511.s1;
                    result += l_511.s0;
                    int l_512_i0;
                    for (l_512_i0 = 0; l_512_i0 < 10; l_512_i0++) {
                        result += l_512[l_512_i0];
                    }
                    result += l_513.y;
                    result += l_513.x;
                    result += l_514.w;
                    result += l_514.z;
                    result += l_514.y;
                    result += l_514.x;
                    result += l_515;
                    int l_516_i0;
                    for (l_516_i0 = 0; l_516_i0 < 6; l_516_i0++) {
                        result += l_516[l_516_i0];
                    }
                    result += l_517;
                    result += l_518;
                    result += l_519.sf;
                    result += l_519.se;
                    result += l_519.sd;
                    result += l_519.sc;
                    result += l_519.sb;
                    result += l_519.sa;
                    result += l_519.s9;
                    result += l_519.s8;
                    result += l_519.s7;
                    result += l_519.s6;
                    result += l_519.s5;
                    result += l_519.s4;
                    result += l_519.s3;
                    result += l_519.s2;
                    result += l_519.s1;
                    result += l_519.s0;
                    result += l_520.w;
                    result += l_520.z;
                    result += l_520.y;
                    result += l_520.x;
                    int l_521_i0, l_521_i1, l_521_i2;
                    for (l_521_i0 = 0; l_521_i0 < 1; l_521_i0++) {
                        for (l_521_i1 = 0; l_521_i1 < 1; l_521_i1++) {
                            for (l_521_i2 = 0; l_521_i2 < 5; l_521_i2++) {
                                result += l_521[l_521_i0][l_521_i1][l_521_i2];
                            }
                        }
                    }
                    atomic_add(&p_1361->l_special_values[3], result);
                }
                else
                { /* block id: 142 */
                    (1 + 1);
                }
                return p_1361->g_93.sf;
            }
        }
    }
    else
    { /* block id: 148 */
        uint8_t l_532 = 9UL;
        int32_t l_536 = 3L;
        uint16_t l_538 = 65535UL;
        VECTOR(uint8_t, 8) l_582 = (VECTOR(uint8_t, 8))(0x76L, (VECTOR(uint8_t, 4))(0x76L, (VECTOR(uint8_t, 2))(0x76L, 0x66L), 0x66L), 0x66L, 0x76L, 0x66L);
        VECTOR(uint8_t, 2) l_588 = (VECTOR(uint8_t, 2))(0x0AL, 0x9FL);
        int i;
        for (p_1361->g_68 = 0; (p_1361->g_68 == 22); p_1361->g_68 = safe_add_func_uint16_t_u_u(p_1361->g_68, 9))
        { /* block id: 151 */
            int64_t l_524 = (-1L);
            int8_t *l_525 = (void*)0;
            int8_t *l_526[10][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            VECTOR(int8_t, 2) l_527 = (VECTOR(int8_t, 2))(6L, 2L);
            int32_t **l_530 = &p_1361->g_105[1];
            int32_t *l_531[7] = {(void*)0,&l_328,(void*)0,(void*)0,&l_328,(void*)0,(void*)0};
            VECTOR(uint32_t, 8) l_575 = (VECTOR(uint32_t, 8))(0xF06201F8L, (VECTOR(uint32_t, 4))(0xF06201F8L, (VECTOR(uint32_t, 2))(0xF06201F8L, 0x4F97EA35L), 0x4F97EA35L), 0x4F97EA35L, 0xF06201F8L, 0x4F97EA35L);
            VECTOR(uint8_t, 2) l_584 = (VECTOR(uint8_t, 2))(250UL, 0x94L);
            uint8_t *l_587 = &l_282;
            int i, j;
            l_532 &= ((&p_1361->g_105[2] != (func_71(p_39, (p_1361->g_286.s3 = l_524), l_329, ((((VECTOR(int8_t, 16))(l_527.xxyxyyxyyxxyxyxy)).s5 & 0xB2L) && (safe_lshift_func_uint16_t_u_u(FAKE_DIVERGE(p_1361->local_0_offset, get_local_id(0), 10), 0))), p_1361) , l_530)) | l_497[0][0]);
            if (((VECTOR(int32_t, 16))(l_533.yzzwwxxxyxwxxwyx)).sd)
            { /* block id: 154 */
                int8_t l_537 = 2L;
                l_536 = (safe_lshift_func_int8_t_s_s(6L, 0));
                l_538++;
            }
            else
            { /* block id: 157 */
                uint32_t l_555 = 0x2BE9B1C7L;
                for (l_328 = 0; (l_328 < (-29)); l_328 = safe_sub_func_int64_t_s_s(l_328, 1))
                { /* block id: 160 */
                    VECTOR(uint64_t, 4) l_557 = (VECTOR(uint64_t, 4))(0x295E9FD5B7A4C958L, (VECTOR(uint64_t, 2))(0x295E9FD5B7A4C958L, 18446744073709551611UL), 18446744073709551611UL);
                    VECTOR(int32_t, 4) l_568 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2F5436B5L), 0x2F5436B5L);
                    int i;
                    if ((atomic_inc(&p_1361->l_atomic_input[1]) == 0))
                    { /* block id: 162 */
                        uint64_t l_543 = 0xD6AA68083C853D43L;
                        int32_t l_544 = 0L;
                        int32_t l_545 = 0x63E8EA4CL;
                        int32_t l_546 = 0x06264BC8L;
                        int32_t l_547 = 0x086681A1L;
                        struct S0 l_548[4][2][3] = {{{{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL}},{{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL}}},{{{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL}},{{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL}}},{{{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL}},{{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL}}},{{{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL}},{{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL},{0x6FA28BFEL,0x30873EEFL}}}};
                        struct S0 l_549 = {-10L,-5L};/* VOLATILE GLOBAL l_549 */
                        int16_t l_550 = 8L;
                        int32_t l_553[4][9] = {{4L,2L,(-9L),0x772AB65FL,2L,0x772AB65FL,(-9L),2L,4L},{4L,2L,(-9L),0x772AB65FL,2L,0x772AB65FL,(-9L),2L,4L},{4L,2L,(-9L),0x772AB65FL,2L,0x772AB65FL,(-9L),2L,4L},{4L,2L,(-9L),0x772AB65FL,2L,0x772AB65FL,(-9L),2L,4L}};
                        int32_t *l_552[2][9][1] = {{{&l_553[0][8]},{&l_553[0][8]},{&l_553[0][8]},{&l_553[0][8]},{&l_553[0][8]},{&l_553[0][8]},{&l_553[0][8]},{&l_553[0][8]},{&l_553[0][8]}},{{&l_553[0][8]},{&l_553[0][8]},{&l_553[0][8]},{&l_553[0][8]},{&l_553[0][8]},{&l_553[0][8]},{&l_553[0][8]},{&l_553[0][8]},{&l_553[0][8]}}};
                        int32_t **l_551[10][2][7] = {{{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0},{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0}},{{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0},{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0}},{{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0},{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0}},{{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0},{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0}},{{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0},{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0}},{{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0},{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0}},{{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0},{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0}},{{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0},{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0}},{{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0},{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0}},{{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0},{&l_552[1][7][0],(void*)0,&l_552[1][7][0],&l_552[1][8][0],&l_552[0][4][0],&l_552[1][7][0],(void*)0}}};
                        int32_t **l_554 = &l_552[1][1][0];
                        int i, j, k;
                        l_549 = ((l_543 , (l_547 = ((l_545 &= l_544) , l_546))) , l_548[2][0][2]);
                        l_550 = 0x7A19A678L;
                        l_554 = l_551[6][1][0];
                        unsigned int result = 0;
                        result += l_543;
                        result += l_544;
                        result += l_545;
                        result += l_546;
                        result += l_547;
                        int l_548_i0, l_548_i1, l_548_i2;
                        for (l_548_i0 = 0; l_548_i0 < 4; l_548_i0++) {
                            for (l_548_i1 = 0; l_548_i1 < 2; l_548_i1++) {
                                for (l_548_i2 = 0; l_548_i2 < 3; l_548_i2++) {
                                    result += l_548[l_548_i0][l_548_i1][l_548_i2].f0;
                                    result += l_548[l_548_i0][l_548_i1][l_548_i2].f1;
                                }
                            }
                        }
                        result += l_549.f0;
                        result += l_549.f1;
                        result += l_550;
                        int l_553_i0, l_553_i1;
                        for (l_553_i0 = 0; l_553_i0 < 4; l_553_i0++) {
                            for (l_553_i1 = 0; l_553_i1 < 9; l_553_i1++) {
                                result += l_553[l_553_i0][l_553_i1];
                            }
                        }
                        atomic_add(&p_1361->l_special_values[1], result);
                    }
                    else
                    { /* block id: 168 */
                        (1 + 1);
                    }
                    (*l_530) = (*p_1361->g_340);
                    l_555 ^= (FAKE_DIVERGE(p_1361->local_2_offset, get_local_id(2), 10) , ((VECTOR(int32_t, 2))(0x6046DEF2L, 0L)).even);
                    l_568.x |= (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 2))(p_1361->g_556.wy)).xyxx, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(2L, 0L)).xxyxxyxyyxxxxxyy)).s0d)).yyxy))).odd)).even || ((((VECTOR(uint64_t, 4))(l_557.wwxw)).y ^ (!(((p_1361->g_433.sa | ((safe_lshift_func_uint8_t_u_u(p_39, ((l_532 & p_39) , (safe_div_func_int8_t_s_s((safe_div_func_int32_t_s_s(((p_39 >= p_1361->g_112) , 0x4474DAE3L), (safe_rshift_func_int8_t_s_u((255UL > ((void*)0 == l_526[2][7])), l_557.y)))), p_39))))) > GROUP_DIVERGE(2, 1))) & (-5L)) && p_39))) && GROUP_DIVERGE(0, 1)));
                }
            }
            l_536 = (p_1361->g_569 , (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_574.yxxyxxxyxxyyyyxx)).hi)), ((VECTOR(uint32_t, 2))(0x961FB28EL, 0x5DB2E6F5L)).yxyyxxxy))).s6453650304616654, ((VECTOR(uint32_t, 16))(l_575.s1632364573752040))))).s500b)))).xxxwxyxx)).hi, ((VECTOR(uint32_t, 8))(l_576.wyxyyzwx)).lo))).wxyyyyxyyyzxzyyy, ((VECTOR(uint32_t, 2))(0x313B9D68L, 1UL)).yyyyyyxyxyxyyxyx))).lo, ((VECTOR(uint32_t, 4))((&l_532 == (*p_1361->g_355)), 4294967295UL, 0xFAEE4D8FL, 0xC0E12267L)).zwxyzxzx))))), ((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(4294967288UL, ((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 2))(5UL, 0UL)).xxyyyxxyyyyxxyyy, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(p_1361->g_577.xxzwywyxzxxxzzwz)))), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0xFAF3193EL, 0xE5834189L)), 0UL, ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))((safe_mul_func_int8_t_s_s((p_1361->g_140[4] , ((~(-8L)) ^ ((safe_mul_func_int8_t_s_s(p_1361->g_148.s3, ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))(l_582.s1225620014665405)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0UL, 255UL)).xxxxxyxx)).s1270037412154603, ((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 8))(p_1361->g_583.xzyyzxzy)).hi, ((VECTOR(uint8_t, 8))(0x31L, 0xBDL, 0x52L, 0xD6L, 0x8AL, ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 16))(8UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(2UL, 0UL)), ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 2))(0UL, 1UL)).yyxy))).y, 253UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_584.yyyx)))), (uint8_t)(safe_mul_func_uint8_t_u_u((~p_39), ((*l_587) = FAKE_DIVERGE(p_1361->global_2_offset, get_global_id(2), 10)))), (uint8_t)((VECTOR(uint8_t, 16))(l_588.xxxyxxxxxxxyxxxx)).s2))).wwyyywxz, (uint8_t)(safe_rshift_func_uint16_t_u_s((0L < l_532), 15))))))).s2, p_1361->g_591, 255UL, 0xC6L)).s24)).yyyy)).wwzywywx)).hi)), 246UL, p_38, GROUP_DIVERGE(2, 1), ((VECTOR(uint8_t, 2))(4UL)), 0x13L, ((VECTOR(uint8_t, 4))(250UL)), 1UL)).s1b, (uint8_t)l_592, (uint8_t)l_588.x))), 255UL)).hi))).wxzwzxwxxxywyyxz))).sf2, ((VECTOR(uint8_t, 2))(0x91L))))).even)) < 0x56E0L))), p_37)), 9UL, 0x4B31CF43L, 0xB09C2FB2L, p_37, 4294967295UL, 0x8CB21DE5L, 1UL)), 3UL, 0x1C8E7DB9L, ((VECTOR(uint32_t, 4))(0x2B2D4D02L)), 0UL, 4UL)).hi)).s70, ((VECTOR(uint32_t, 2))(0x94AE7546L))))), 4294967295UL, 0UL, 0xFE515A47L)).s6745646431403165)), ((VECTOR(uint32_t, 16))(0x1F0673AEL)), ((VECTOR(uint32_t, 16))(9UL))))).odd, ((VECTOR(uint32_t, 8))(3UL))))).s37)).yxxyyxxy, ((VECTOR(uint32_t, 8))(0x0EB57CCBL)), ((VECTOR(uint32_t, 8))(9UL))))).s55)).yyxxyxxxxyxyyyyx))).sb, 0xE447DB72L, 9UL)).even)).yxxxxyyyyyyyyxyy, ((VECTOR(uint32_t, 16))(0x7E81991BL))))).even, ((VECTOR(uint32_t, 8))(4294967295UL))))).lo)))).zwzwwzwzxwzzwwxz)).sa | p_37), 3)), p_1361->g_91.w)));
        }
        return p_1361->g_154;
    }
    l_604[1][4][2]--;
    return p_1361->g_89.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_158
 * writes: p_1361->g_105
 */
uint64_t  func_40(uint32_t  p_41, int8_t  p_42, int16_t  p_43, struct S1 * p_1361)
{ /* block id: 48 */
    int32_t *l_239 = &p_1361->g_145.f1;
    int32_t **l_242 = &p_1361->g_105[1];
    (*l_242) = l_239;
    return p_1361->g_158;
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_145.f1 p_1361->g_137 p_1361->g_87 p_1361->g_156 p_1361->g_90 p_1361->g_93 p_1361->g_231
 * writes: p_1361->g_145.f1
 */
int64_t  func_50(int64_t  p_51, int64_t  p_52, int32_t  p_53, int16_t  p_54, int32_t  p_55, struct S1 * p_1361)
{ /* block id: 40 */
    int32_t *l_212 = (void*)0;
    int32_t l_213 = 0x500AEE97L;
    int32_t *l_214 = &p_1361->g_145.f1;
    int64_t *l_215 = (void*)0;
    uint8_t *l_228[6] = {&p_1361->g_152,&p_1361->g_152,&p_1361->g_152,&p_1361->g_152,&p_1361->g_152,&p_1361->g_152};
    int32_t l_234 = 0x27634603L;
    int32_t *l_235 = (void*)0;
    int32_t *l_236 = &l_213;
    int i;
    (*l_214) |= (l_213 = (p_53 , (-10L)));
    l_213 ^= (((void*)0 == l_215) != (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((&p_1361->g_152 == (((safe_mul_func_uint16_t_u_u(65535UL, ((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_1361->g_137.w, 7)), p_1361->g_87.s8)), p_1361->g_156)) <= p_1361->g_90.s2))) > ((1UL >= 250UL) & p_1361->g_93.s1)) , l_228[5])), (*l_214))), p_51)));
    (*l_214) &= (0xFE3246DB285BB274L >= p_54);
    (*l_236) ^= (((p_53 ^ ((p_55 ^ (&p_1361->g_158 == l_214)) || p_1361->g_145.f1)) || (0x047BL >= ((safe_add_func_uint8_t_u_u((p_1361->g_231 , (((safe_div_func_uint32_t_u_u((4294967295UL ^ (*l_214)), (*l_214))) < p_55) ^ 0L)), (*l_214))) && l_234))) , 0x4360D1C0L);
    return p_1361->g_137.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_68 p_1361->g_81 p_1361->g_84 p_1361->g_87 p_1361->g_89 p_1361->g_90 p_1361->g_91 p_1361->g_92 p_1361->g_93 p_1361->g_44 p_1361->g_105 p_1361->g_111 p_1361->g_112 p_1361->g_115 p_1361->g_82 p_1361->g_61 p_1361->g_comm_values p_1361->g_145 p_1361->g_148 p_1361->l_comm_values p_1361->g_137 p_1361->g_152 p_1361->g_59 p_1361->g_154
 * writes: p_1361->g_68 p_1361->g_105 p_1361->g_111 p_1361->g_112 p_1361->g_115 p_1361->g_82 p_1361->g_137 p_1361->g_140 p_1361->g_152 p_1361->g_154 p_1361->g_156 p_1361->g_158 p_1361->g_145
 */
uint64_t  func_56(int32_t  p_57, struct S1 * p_1361)
{ /* block id: 6 */
    int32_t *l_60 = (void*)0;
    int32_t *l_62 = (void*)0;
    int32_t *l_63 = (void*)0;
    int32_t *l_64 = (void*)0;
    int32_t *l_65[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_66 = (-7L);
    int16_t l_67 = 0x2C17L;
    VECTOR(uint32_t, 8) l_80 = (VECTOR(uint32_t, 8))(0x3BC58EBAL, (VECTOR(uint32_t, 4))(0x3BC58EBAL, (VECTOR(uint32_t, 2))(0x3BC58EBAL, 0x2B3D10A8L), 0x2B3D10A8L), 0x2B3D10A8L, 0x3BC58EBAL, 0x2B3D10A8L);
    VECTOR(uint32_t, 8) l_83 = (VECTOR(uint32_t, 8))(0x1AEEC976L, (VECTOR(uint32_t, 4))(0x1AEEC976L, (VECTOR(uint32_t, 2))(0x1AEEC976L, 0xA743E715L), 0xA743E715L), 0xA743E715L, 0x1AEEC976L, 0xA743E715L);
    VECTOR(uint16_t, 8) l_85 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 9UL), 9UL), 9UL, 1UL, 9UL);
    VECTOR(uint16_t, 2) l_86 = (VECTOR(uint16_t, 2))(7UL, 0xA7E1L);
    VECTOR(uint16_t, 4) l_88 = (VECTOR(uint16_t, 4))(0xEE1CL, (VECTOR(uint16_t, 2))(0xEE1CL, 0x09BDL), 0x09BDL);
    struct S0 *l_208 = &p_1361->g_145;
    int i;
    p_1361->g_68--;
    (*l_208) = func_71((((((((safe_rshift_func_int8_t_s_s(0L, 4)) & (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(4294967294UL, 0x0C07D60DL, 4294967290UL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_80.s1766)), (p_1361->g_81 != (p_57 , &l_66)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_83.s6613555105157422)).s03a2)), (!((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_1361->g_84.sdb)).yyyxyxyxyyxyxxxx)).lo, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_85.s1545)), 0xB970L, ((VECTOR(uint16_t, 8))(l_86.yyxxxxxx)), 0UL, 0UL, 0x2CE5L)).lo))).odd, ((VECTOR(uint16_t, 8))(p_1361->g_87.sc4912acc)).lo))).hi, ((VECTOR(uint16_t, 2))(l_88.yz))))).yxxyyxxy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_1361->g_89.zy)), ((-1L) > p_57), 0x9431L, 0xF326L, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 8))(p_1361->g_90.s37330442)).even, ((VECTOR(uint16_t, 2))(p_1361->g_91.ww)).yyxx, ((VECTOR(uint16_t, 2))(p_1361->g_92.xw)).yyxy))).wzywyzyywzwzxxxw)).s0, 0xB954L, 8UL))))).s4), ((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(p_1361->g_93.s42378e477a9a3a12)).s95e2, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(0x15430F98L, 0xCE19DED1L, 0xD6BF538CL, ((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(4UL, (-4L))), p_57)) && p_57), p_1361->g_84.s5, 3UL, 0x7FE9BFACL, 0xD5171A10L)))))))).hi, ((VECTOR(uint32_t, 4))(0x1B76BFB6L))))), 0xBAF8B371L, 4294967295UL)).sa5, ((VECTOR(uint32_t, 2))(0x3D3CFB5FL))))).yyxyxxxyxyxyyyxx)).odd)).s35, ((VECTOR(uint32_t, 2))(4294967288UL))))).xxxxyyyx)), 0x4C82959AL, 9UL, p_1361->g_44.s7, 0xC83248D3L, 4294967288UL)).sa, p_1361->g_84.s3))) <= p_1361->g_90.s5) < 65528UL) , p_1361->g_91.w) | p_1361->g_44.s5) , 0xD3AA45CEL), p_57, p_57, p_1361->g_93.sf, p_1361);
    return p_1361->g_44.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_90 p_1361->g_91 p_1361->g_105 p_1361->g_111 p_1361->g_112 p_1361->g_92 p_1361->g_81 p_1361->g_115 p_1361->g_82 p_1361->g_61 p_1361->g_93 p_1361->g_44 p_1361->g_comm_values p_1361->g_84 p_1361->g_145 p_1361->g_148 p_1361->l_comm_values p_1361->g_137 p_1361->g_152 p_1361->g_59 p_1361->g_87 p_1361->g_154
 * writes: p_1361->g_105 p_1361->g_111 p_1361->g_112 p_1361->g_115 p_1361->g_82 p_1361->g_137 p_1361->g_140 p_1361->g_152 p_1361->g_154 p_1361->g_156 p_1361->g_158
 */
struct S0  func_71(uint32_t  p_72, int8_t  p_73, int32_t  p_74, int64_t  p_75, struct S1 * p_1361)
{ /* block id: 8 */
    int32_t *l_102 = (void*)0;
    int32_t **l_106 = &p_1361->g_105[6];
    uint16_t l_107 = 0x56CBL;
    uint64_t *l_110 = &p_1361->g_111;
    uint64_t *l_113 = (void*)0;
    uint64_t *l_114 = &p_1361->g_115;
    uint8_t *l_151 = &p_1361->g_152;
    int64_t *l_153 = &p_1361->g_154;
    int64_t *l_155[2][3] = {{&p_1361->g_156,(void*)0,&p_1361->g_156},{&p_1361->g_156,(void*)0,&p_1361->g_156}};
    uint32_t *l_157 = &p_1361->g_158;
    int32_t *l_160 = &p_1361->g_59;
    int32_t **l_159 = &l_160;
    int32_t *l_161 = (void*)0;
    int32_t *l_162 = (void*)0;
    int32_t *l_163 = (void*)0;
    int32_t *l_164 = (void*)0;
    int32_t l_165 = 0x69490086L;
    VECTOR(int32_t, 16) l_166 = (VECTOR(int32_t, 16))(0x4513A414L, (VECTOR(int32_t, 4))(0x4513A414L, (VECTOR(int32_t, 2))(0x4513A414L, (-1L)), (-1L)), (-1L), 0x4513A414L, (-1L), (VECTOR(int32_t, 2))(0x4513A414L, (-1L)), (VECTOR(int32_t, 2))(0x4513A414L, (-1L)), 0x4513A414L, (-1L), 0x4513A414L, (-1L));
    int16_t *l_181 = &p_1361->g_140[8];
    int32_t l_204 = (-1L);
    int i, j;
    (*p_1361->g_81) = (((*l_114) = ((VECTOR(uint64_t, 8))(18446744073709551615UL, (((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((&p_74 != l_102), p_1361->g_90.s0)), ((safe_rshift_func_int16_t_s_u(((p_1361->g_91.y , ((*l_106) = p_1361->g_105[1])) == &p_74), 6)) & l_107))) && (p_1361->g_112 |= ((*l_110) &= (safe_mul_func_uint8_t_u_u(((-1L) | p_73), FAKE_DIVERGE(p_1361->local_1_offset, get_local_id(1), 10)))))) , p_1361->g_92.z), 0xCC891D4E822E769DL, p_74, 0xFE65B295318BE7EDL, ((VECTOR(uint64_t, 2))(0xC11320EAB87D1255L)), 1UL)).s7) == p_74);
    for (p_1361->g_111 = 0; (p_1361->g_111 != 53); p_1361->g_111 = safe_add_func_int64_t_s_s(p_1361->g_111, 6))
    { /* block id: 16 */
        int64_t l_122 = 0x51F4452DAF4E41D6L;
        int32_t *l_138 = (void*)0;
        int32_t l_144 = 0x72B3A501L;
        for (p_1361->g_115 = 2; (p_1361->g_115 != 20); ++p_1361->g_115)
        { /* block id: 19 */
            VECTOR(uint64_t, 2) l_123 = (VECTOR(uint64_t, 2))(5UL, 1UL);
            VECTOR(int32_t, 4) l_126 = (VECTOR(int32_t, 4))(0x6BA86183L, (VECTOR(int32_t, 2))(0x6BA86183L, 0x3E0AC10FL), 0x3E0AC10FL);
            int32_t *l_134 = &p_1361->g_59;
            int32_t **l_133 = &l_134;
            uint16_t *l_135 = (void*)0;
            uint16_t *l_136[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
            int16_t *l_139[7] = {&p_1361->g_140[3],&p_1361->g_140[3],&p_1361->g_140[3],&p_1361->g_140[3],&p_1361->g_140[3],&p_1361->g_140[3],&p_1361->g_140[3]};
            int32_t *l_141 = (void*)0;
            int32_t *l_143 = (void*)0;
            int i, j;
            l_144 = (safe_mul_func_int16_t_s_s((p_1361->g_140[3] = (l_122 | ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 2))(l_123.xy)).xyxxyxxx))).s4106545311530313, ((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x31803394B1C0CD3EL, (-9L))).yxyy)), ((VECTOR(int64_t, 4))((safe_rshift_func_uint8_t_u_u((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_126.yzyz)))).z < (*p_1361->g_81)), ((((VECTOR(int16_t, 2))(0x3E0EL, 9L)).even != ((((((p_1361->g_61.s0 < ((safe_mul_func_uint16_t_u_u(p_1361->g_93.s5, (safe_sub_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(1UL, 7UL, (((void*)0 == &p_1361->g_105[1]) , (p_1361->g_137.w = (p_1361->g_115 , (((*l_133) = &p_1361->g_59) != ((0xF76B87F1L < 0x6D160961L) , &p_1361->g_59))))), ((VECTOR(uint16_t, 2))(0x10B8L)), FAKE_DIVERGE(p_1361->global_1_offset, get_global_id(1), 10), 65535UL, 0x0D69L)).s5, p_1361->g_44.s6)) || p_1361->g_115), p_1361->g_93.s6)))) , (-4L))) >= p_1361->g_comm_values[p_1361->tid]) , l_123.x) , l_138) == &p_74) , 0L)) && p_1361->g_84.se))), 1L, 0x587681F8F2C4CA5DL, 1L)))).s7, 0x7E881F7A3D568A41L, (-10L), 0x50DD6F6EEB393109L, ((VECTOR(int64_t, 2))(0x277B9CB57D1AC818L)), 0x3A6CB7A2258DF768L, 0x1858D2371772FEA1L)).s0407626032157756, ((VECTOR(int64_t, 16))(0x17282AEC8503F6EAL)))))))).s20)))).xyxxyxxx)).s0)), 65533UL));
            return p_1361->g_145;
        }
    }
    l_165 &= (p_73 != (l_102 != ((*l_159) = (((*l_157) = (1UL <= (p_1361->g_156 = (~((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 2))(p_1361->g_148.s23)).yxxx, ((VECTOR(int64_t, 2))(0x6CF6D457A83810A5L, (-6L))).xxyy, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(p_1361->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1361->tid, 184))], 0x72DA2A86C6973A35L, p_75, (safe_mul_func_uint8_t_u_u(((void*)0 == &l_102), (((*l_153) = ((((*l_151) &= p_1361->g_137.z) || (p_1361->g_comm_values[p_1361->tid] | p_1361->g_145.f1)) > 0L)) , FAKE_DIVERGE(p_1361->group_1_offset, get_group_id(1), 10)))), p_74, ((VECTOR(int64_t, 2))(0x11DF522524D29C7EL)), 0x5D2E55EC79DE5410L)).s12)).yyxx))).zwzxyxzw, ((VECTOR(int64_t, 8))(0x03E42A8C77241C6DL))))).odd, ((VECTOR(int64_t, 4))((-7L)))))), ((VECTOR(int64_t, 4))(0L))))).w)))) , l_102))));
    p_74 = ((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_166.s4357)))), (safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 16))(0x68607F20L, p_73, (((safe_sub_func_int8_t_s_s(p_75, ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_181 != (void*)0), (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u(p_74, (safe_div_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((*l_181) = (((*l_114) = ((*l_110) = (0x005B6435A71976BEL == (safe_mod_func_uint8_t_u_u(p_1361->g_84.se, ((p_1361->g_44.sf < ((!((p_74 < p_1361->g_59) , 0x5C99A564L)) < p_1361->g_87.s1)) ^ p_1361->g_44.sa)))))) == (-9L))), p_1361->g_154)) != 0L), p_1361->g_145.f1)) , p_75), l_204)), p_1361->g_61.s2)))) , p_73) != 4L), 0x32470110L)) , p_75) >= 0xEEL) <= p_72), FAKE_DIVERGE(p_1361->local_0_offset, get_local_id(0), 10))), p_1361->g_59)), 6)))), (-1L))), p_1361->g_154)), p_75)) , p_74))) >= p_1361->g_137.w) || 65535UL), 0L, p_72, 0x417B509BL, p_74, 0x41C2A2B0L, ((VECTOR(int32_t, 4))(0x5A0E331DL)), p_75, ((VECTOR(int32_t, 2))((-1L))), 0x67D11113L)).s2, 0x68DAD69DL)), p_73)), (-5L), ((VECTOR(int32_t, 4))(7L)), (-7L), p_74, 0x2ADBF9C2L, 9L, 0x067A0735L)).s0;
    return p_1361->g_145;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[184];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 184; i++)
            l_comm_values[i] = 1;
    struct S1 c_1362;
    struct S1* p_1361 = &c_1362;
    struct S1 c_1363 = {
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xFD03B15AL), 0xFD03B15AL), 0xFD03B15AL, 4294967295UL, 0xFD03B15AL, (VECTOR(uint32_t, 2))(4294967295UL, 0xFD03B15AL), (VECTOR(uint32_t, 2))(4294967295UL, 0xFD03B15AL), 4294967295UL, 0xFD03B15AL, 4294967295UL, 0xFD03B15AL), // p_1361->g_44
        0x5AF0B56FL, // p_1361->g_59
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x40CE695EL), 0x40CE695EL), 0x40CE695EL, (-1L), 0x40CE695EL), // p_1361->g_61
        0UL, // p_1361->g_68
        1L, // p_1361->g_82
        &p_1361->g_82, // p_1361->g_81
        (VECTOR(uint16_t, 16))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0x5B50L), 0x5B50L), 0x5B50L, 65528UL, 0x5B50L, (VECTOR(uint16_t, 2))(65528UL, 0x5B50L), (VECTOR(uint16_t, 2))(65528UL, 0x5B50L), 65528UL, 0x5B50L, 65528UL, 0x5B50L), // p_1361->g_84
        (VECTOR(uint16_t, 16))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0xF5B1L), 0xF5B1L), 0xF5B1L, 2UL, 0xF5B1L, (VECTOR(uint16_t, 2))(2UL, 0xF5B1L), (VECTOR(uint16_t, 2))(2UL, 0xF5B1L), 2UL, 0xF5B1L, 2UL, 0xF5B1L), // p_1361->g_87
        (VECTOR(uint16_t, 4))(0x9718L, (VECTOR(uint16_t, 2))(0x9718L, 0xECADL), 0xECADL), // p_1361->g_89
        (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 1UL), 1UL), 1UL, 65526UL, 1UL), // p_1361->g_90
        (VECTOR(uint16_t, 4))(0x3816L, (VECTOR(uint16_t, 2))(0x3816L, 0x96A0L), 0x96A0L), // p_1361->g_91
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), // p_1361->g_92
        (VECTOR(uint32_t, 16))(0xE8D107E3L, (VECTOR(uint32_t, 4))(0xE8D107E3L, (VECTOR(uint32_t, 2))(0xE8D107E3L, 0UL), 0UL), 0UL, 0xE8D107E3L, 0UL, (VECTOR(uint32_t, 2))(0xE8D107E3L, 0UL), (VECTOR(uint32_t, 2))(0xE8D107E3L, 0UL), 0xE8D107E3L, 0UL, 0xE8D107E3L, 0UL), // p_1361->g_93
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1361->g_105
        18446744073709551611UL, // p_1361->g_111
        0xEC1FL, // p_1361->g_112
        0x9477FFDD8A1F4848L, // p_1361->g_115
        (VECTOR(int8_t, 4))(0x77L, (VECTOR(int8_t, 2))(0x77L, 0L), 0L), // p_1361->g_137
        {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}, // p_1361->g_140
        (void*)0, // p_1361->g_142
        {0L,0x2780F630L}, // p_1361->g_145
        (VECTOR(int64_t, 8))(0x55134EBF0AE526CEL, (VECTOR(int64_t, 4))(0x55134EBF0AE526CEL, (VECTOR(int64_t, 2))(0x55134EBF0AE526CEL, (-4L)), (-4L)), (-4L), 0x55134EBF0AE526CEL, (-4L)), // p_1361->g_148
        0x7AL, // p_1361->g_152
        0x2CADE1094D660517L, // p_1361->g_154
        1L, // p_1361->g_156
        0x58C6111AL, // p_1361->g_158
        {&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145}, // p_1361->g_205
        {{{&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145}},{{&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145,&p_1361->g_145}}}, // p_1361->g_206
        {&p_1361->g_145}, // p_1361->g_207
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x51C2L), 0x51C2L), 0x51C2L, 1UL, 0x51C2L), // p_1361->g_210
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x5F5AL), 0x5F5AL), 0x5F5AL, 65535UL, 0x5F5AL, (VECTOR(uint16_t, 2))(65535UL, 0x5F5AL), (VECTOR(uint16_t, 2))(65535UL, 0x5F5AL), 65535UL, 0x5F5AL, 65535UL, 0x5F5AL), // p_1361->g_211
        {0L,5L}, // p_1361->g_231
        {&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1]}, // p_1361->g_240
        {{{&p_1361->g_105[0],&p_1361->g_105[1],(void*)0,&p_1361->g_105[1],&p_1361->g_105[6],(void*)0,&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1]},{&p_1361->g_105[0],&p_1361->g_105[1],(void*)0,&p_1361->g_105[1],&p_1361->g_105[6],(void*)0,&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1]},{&p_1361->g_105[0],&p_1361->g_105[1],(void*)0,&p_1361->g_105[1],&p_1361->g_105[6],(void*)0,&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1]},{&p_1361->g_105[0],&p_1361->g_105[1],(void*)0,&p_1361->g_105[1],&p_1361->g_105[6],(void*)0,&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1]}},{{&p_1361->g_105[0],&p_1361->g_105[1],(void*)0,&p_1361->g_105[1],&p_1361->g_105[6],(void*)0,&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1]},{&p_1361->g_105[0],&p_1361->g_105[1],(void*)0,&p_1361->g_105[1],&p_1361->g_105[6],(void*)0,&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1]},{&p_1361->g_105[0],&p_1361->g_105[1],(void*)0,&p_1361->g_105[1],&p_1361->g_105[6],(void*)0,&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1]},{&p_1361->g_105[0],&p_1361->g_105[1],(void*)0,&p_1361->g_105[1],&p_1361->g_105[6],(void*)0,&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1]}},{{&p_1361->g_105[0],&p_1361->g_105[1],(void*)0,&p_1361->g_105[1],&p_1361->g_105[6],(void*)0,&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1]},{&p_1361->g_105[0],&p_1361->g_105[1],(void*)0,&p_1361->g_105[1],&p_1361->g_105[6],(void*)0,&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1]},{&p_1361->g_105[0],&p_1361->g_105[1],(void*)0,&p_1361->g_105[1],&p_1361->g_105[6],(void*)0,&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1]},{&p_1361->g_105[0],&p_1361->g_105[1],(void*)0,&p_1361->g_105[1],&p_1361->g_105[6],(void*)0,&p_1361->g_105[1],&p_1361->g_105[1],&p_1361->g_105[1]}}}, // p_1361->g_241
        (VECTOR(int64_t, 8))(0x0A2916B2E848159AL, (VECTOR(int64_t, 4))(0x0A2916B2E848159AL, (VECTOR(int64_t, 2))(0x0A2916B2E848159AL, (-1L)), (-1L)), (-1L), 0x0A2916B2E848159AL, (-1L)), // p_1361->g_266
        0L, // p_1361->g_275
        &p_1361->g_275, // p_1361->g_274
        &p_1361->g_274, // p_1361->g_273
        &p_1361->g_59, // p_1361->g_280
        {{&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280},{&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280},{&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280},{&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280},{&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280,&p_1361->g_280}}, // p_1361->g_279
        0L, // p_1361->g_283
        (void*)0, // p_1361->g_284
        &p_1361->g_105[1], // p_1361->g_285
        (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), (-1L)), (-1L)), (-1L), (-3L), (-1L), (VECTOR(int8_t, 2))((-3L), (-1L)), (VECTOR(int8_t, 2))((-3L), (-1L)), (-3L), (-1L), (-3L), (-1L)), // p_1361->g_286
        (VECTOR(uint8_t, 2))(247UL, 247UL), // p_1361->g_289
        (void*)0, // p_1361->g_339
        &p_1361->g_105[1], // p_1361->g_340
        {&p_1361->g_152,&p_1361->g_152,&p_1361->g_152,&p_1361->g_152,&p_1361->g_152,&p_1361->g_152,&p_1361->g_152,&p_1361->g_152}, // p_1361->g_356
        &p_1361->g_356[5], // p_1361->g_355
        {0L,7L}, // p_1361->g_358
        {0x1AB2BD73L,0x6E3DFBE8L}, // p_1361->g_359
        {1L,-1L}, // p_1361->g_360
        &p_1361->g_360, // p_1361->g_361
        {{{0x2E606FC6L,-1L},{0x2D4C250CL,0x51310516L},{0x2E606FC6L,-1L},{0x2E606FC6L,-1L}},{{0x2E606FC6L,-1L},{0x2D4C250CL,0x51310516L},{0x2E606FC6L,-1L},{0x2E606FC6L,-1L}},{{0x2E606FC6L,-1L},{0x2D4C250CL,0x51310516L},{0x2E606FC6L,-1L},{0x2E606FC6L,-1L}},{{0x2E606FC6L,-1L},{0x2D4C250CL,0x51310516L},{0x2E606FC6L,-1L},{0x2E606FC6L,-1L}},{{0x2E606FC6L,-1L},{0x2D4C250CL,0x51310516L},{0x2E606FC6L,-1L},{0x2E606FC6L,-1L}},{{0x2E606FC6L,-1L},{0x2D4C250CL,0x51310516L},{0x2E606FC6L,-1L},{0x2E606FC6L,-1L}},{{0x2E606FC6L,-1L},{0x2D4C250CL,0x51310516L},{0x2E606FC6L,-1L},{0x2E606FC6L,-1L}}}, // p_1361->g_388
        (VECTOR(uint64_t, 2))(0UL, 18446744073709551614UL), // p_1361->g_396
        (VECTOR(uint32_t, 16))(0xB04F824CL, (VECTOR(uint32_t, 4))(0xB04F824CL, (VECTOR(uint32_t, 2))(0xB04F824CL, 3UL), 3UL), 3UL, 0xB04F824CL, 3UL, (VECTOR(uint32_t, 2))(0xB04F824CL, 3UL), (VECTOR(uint32_t, 2))(0xB04F824CL, 3UL), 0xB04F824CL, 3UL, 0xB04F824CL, 3UL), // p_1361->g_433
        (void*)0, // p_1361->g_452
        &p_1361->g_452, // p_1361->g_451
        &p_1361->g_451, // p_1361->g_453
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-9L)), (-9L)), // p_1361->g_556
        {0L,0x7D64744DL}, // p_1361->g_569
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x840683F4L), 0x840683F4L), // p_1361->g_577
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x5EL), 0x5EL), // p_1361->g_583
        0x5129E9D7L, // p_1361->g_591
        {{1L,0x4DL,1L,1L,0x4DL,1L},{1L,0x4DL,1L,1L,0x4DL,1L},{1L,0x4DL,1L,1L,0x4DL,1L},{1L,0x4DL,1L,1L,0x4DL,1L},{1L,0x4DL,1L,1L,0x4DL,1L},{1L,0x4DL,1L,1L,0x4DL,1L},{1L,0x4DL,1L,1L,0x4DL,1L},{1L,0x4DL,1L,1L,0x4DL,1L}}, // p_1361->g_608
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x67DFB87F4CFEECCCL), 0x67DFB87F4CFEECCCL), 0x67DFB87F4CFEECCCL, 1UL, 0x67DFB87F4CFEECCCL), // p_1361->g_625
        &p_1361->g_451, // p_1361->g_657
        {-7L,1L}, // p_1361->g_660
        (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x3EA4C17E1C5B38F1L), 0x3EA4C17E1C5B38F1L), 0x3EA4C17E1C5B38F1L, 0UL, 0x3EA4C17E1C5B38F1L), // p_1361->g_677
        (void*)0, // p_1361->g_705
        0x61L, // p_1361->g_708
        0xD5L, // p_1361->g_709
        249UL, // p_1361->g_710
        251UL, // p_1361->g_711
        {{246UL,0x46L,7UL,0x5CL,7UL,0x46L},{246UL,0x46L,7UL,0x5CL,7UL,0x46L},{246UL,0x46L,7UL,0x5CL,7UL,0x46L},{246UL,0x46L,7UL,0x5CL,7UL,0x46L},{246UL,0x46L,7UL,0x5CL,7UL,0x46L},{246UL,0x46L,7UL,0x5CL,7UL,0x46L}}, // p_1361->g_712
        6UL, // p_1361->g_713
        0x9AL, // p_1361->g_714
        {{0x00L,0xDEL,0x00L},{0x00L,0xDEL,0x00L},{0x00L,0xDEL,0x00L},{0x00L,0xDEL,0x00L},{0x00L,0xDEL,0x00L},{0x00L,0xDEL,0x00L}}, // p_1361->g_715
        0xBCL, // p_1361->g_716
        0x34L, // p_1361->g_717
        0UL, // p_1361->g_718
        2UL, // p_1361->g_719
        0x76L, // p_1361->g_720
        0xD3L, // p_1361->g_721
        0x00L, // p_1361->g_722
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL), // p_1361->g_723
        255UL, // p_1361->g_724
        {{{0x04L,5UL,0x33L},{0x04L,5UL,0x33L},{0x04L,5UL,0x33L},{0x04L,5UL,0x33L},{0x04L,5UL,0x33L},{0x04L,5UL,0x33L},{0x04L,5UL,0x33L}},{{0x04L,5UL,0x33L},{0x04L,5UL,0x33L},{0x04L,5UL,0x33L},{0x04L,5UL,0x33L},{0x04L,5UL,0x33L},{0x04L,5UL,0x33L},{0x04L,5UL,0x33L}},{{0x04L,5UL,0x33L},{0x04L,5UL,0x33L},{0x04L,5UL,0x33L},{0x04L,5UL,0x33L},{0x04L,5UL,0x33L},{0x04L,5UL,0x33L},{0x04L,5UL,0x33L}}}, // p_1361->g_725
        0x14L, // p_1361->g_726
        {{{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL}},{{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL}},{{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL}},{{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL}},{{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL}},{{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL}},{{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL},{6UL,0x0AL,0xF7L,6UL}}}, // p_1361->g_727
        0x66L, // p_1361->g_728
        0x1BL, // p_1361->g_729
        0UL, // p_1361->g_730
        {0x03L,0x03L,0x03L,0x03L,0x03L,0x03L}, // p_1361->g_731
        255UL, // p_1361->g_732
        {{{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL}},{{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL}},{{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL}},{{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL},{1UL,0UL,0x15L,255UL,0xFFL,1UL,255UL}}}, // p_1361->g_733
        0xB5L, // p_1361->g_734
        0x79L, // p_1361->g_735
        {{0UL,0UL}}, // p_1361->g_736
        248UL, // p_1361->g_737
        {{9UL,0UL,0xA7L,0x22L,0x74L,9UL,0x22L,0x8EL},{9UL,0UL,0xA7L,0x22L,0x74L,9UL,0x22L,0x8EL},{9UL,0UL,0xA7L,0x22L,0x74L,9UL,0x22L,0x8EL},{9UL,0UL,0xA7L,0x22L,0x74L,9UL,0x22L,0x8EL},{9UL,0UL,0xA7L,0x22L,0x74L,9UL,0x22L,0x8EL},{9UL,0UL,0xA7L,0x22L,0x74L,9UL,0x22L,0x8EL},{9UL,0UL,0xA7L,0x22L,0x74L,9UL,0x22L,0x8EL},{9UL,0UL,0xA7L,0x22L,0x74L,9UL,0x22L,0x8EL}}, // p_1361->g_738
        0UL, // p_1361->g_739
        {{0x79L},{0x79L},{0x79L},{0x79L},{0x79L},{0x79L},{0x79L},{0x79L},{0x79L}}, // p_1361->g_740
        (VECTOR(uint8_t, 8))(0x6EL, (VECTOR(uint8_t, 4))(0x6EL, (VECTOR(uint8_t, 2))(0x6EL, 0xFFL), 0xFFL), 0xFFL, 0x6EL, 0xFFL), // p_1361->g_741
        {2UL,2UL,2UL,2UL}, // p_1361->g_742
        249UL, // p_1361->g_743
        0x10L, // p_1361->g_744
        0xF0L, // p_1361->g_745
        7UL, // p_1361->g_746
        {4UL,0UL,4UL,4UL,0UL,4UL,4UL,0UL,4UL,4UL}, // p_1361->g_747
        1UL, // p_1361->g_748
        0x60L, // p_1361->g_749
        {{0x44L,0x44L,0x44L}}, // p_1361->g_750
        {0xBAL,0xBAL,0xBAL,0xBAL,0xBAL,0xBAL,0xBAL}, // p_1361->g_751
        254UL, // p_1361->g_752
        1UL, // p_1361->g_753
        {{{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709},{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709},{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709},{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709}},{{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709},{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709},{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709},{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709}},{{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709},{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709},{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709},{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709}},{{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709},{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709},{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709},{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709}},{{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709},{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709},{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709},{&p_1361->g_747[8],&p_1361->g_739,&p_1361->g_742[1],&p_1361->g_752,&p_1361->g_727[5][3][2],&p_1361->g_709}}}, // p_1361->g_707
        &p_1361->g_707[4][2][4], // p_1361->g_706
        {&p_1361->g_705,&p_1361->g_705,&p_1361->g_705,&p_1361->g_705,&p_1361->g_705}, // p_1361->g_704
        (VECTOR(int8_t, 8))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0x75L), 0x75L), 0x75L, 9L, 0x75L), // p_1361->g_777
        (VECTOR(uint16_t, 8))(0xD310L, (VECTOR(uint16_t, 4))(0xD310L, (VECTOR(uint16_t, 2))(0xD310L, 0x3E43L), 0x3E43L), 0x3E43L, 0xD310L, 0x3E43L), // p_1361->g_781
        (void*)0, // p_1361->g_782
        (VECTOR(uint64_t, 16))(0x5F620675F04BB31FL, (VECTOR(uint64_t, 4))(0x5F620675F04BB31FL, (VECTOR(uint64_t, 2))(0x5F620675F04BB31FL, 0xB15CB75D41CDFAFFL), 0xB15CB75D41CDFAFFL), 0xB15CB75D41CDFAFFL, 0x5F620675F04BB31FL, 0xB15CB75D41CDFAFFL, (VECTOR(uint64_t, 2))(0x5F620675F04BB31FL, 0xB15CB75D41CDFAFFL), (VECTOR(uint64_t, 2))(0x5F620675F04BB31FL, 0xB15CB75D41CDFAFFL), 0x5F620675F04BB31FL, 0xB15CB75D41CDFAFFL, 0x5F620675F04BB31FL, 0xB15CB75D41CDFAFFL), // p_1361->g_797
        0x72F1BA52L, // p_1361->g_809
        1L, // p_1361->g_810
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967293UL), 4294967293UL), // p_1361->g_832
        (VECTOR(uint8_t, 16))(0xC2L, (VECTOR(uint8_t, 4))(0xC2L, (VECTOR(uint8_t, 2))(0xC2L, 0x0BL), 0x0BL), 0x0BL, 0xC2L, 0x0BL, (VECTOR(uint8_t, 2))(0xC2L, 0x0BL), (VECTOR(uint8_t, 2))(0xC2L, 0x0BL), 0xC2L, 0x0BL, 0xC2L, 0x0BL), // p_1361->g_885
        (VECTOR(int64_t, 16))(0x037F8C962AF3CC78L, (VECTOR(int64_t, 4))(0x037F8C962AF3CC78L, (VECTOR(int64_t, 2))(0x037F8C962AF3CC78L, 6L), 6L), 6L, 0x037F8C962AF3CC78L, 6L, (VECTOR(int64_t, 2))(0x037F8C962AF3CC78L, 6L), (VECTOR(int64_t, 2))(0x037F8C962AF3CC78L, 6L), 0x037F8C962AF3CC78L, 6L, 0x037F8C962AF3CC78L, 6L), // p_1361->g_919
        (VECTOR(uint16_t, 2))(0xEEA8L, 1UL), // p_1361->g_928
        {-3L,3L}, // p_1361->g_933
        (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0x42L), 0x42L), // p_1361->g_944
        (VECTOR(uint8_t, 8))(0xC5L, (VECTOR(uint8_t, 4))(0xC5L, (VECTOR(uint8_t, 2))(0xC5L, 0x4AL), 0x4AL), 0x4AL, 0xC5L, 0x4AL), // p_1361->g_947
        (VECTOR(int32_t, 4))(0x3BDCC4F4L, (VECTOR(int32_t, 2))(0x3BDCC4F4L, 0x0A07764EL), 0x0A07764EL), // p_1361->g_980
        {{0x13629B81L,0x5500481CL},{0x13629B81L,0x5500481CL},{0x13629B81L,0x5500481CL},{0x13629B81L,0x5500481CL},{0x13629B81L,0x5500481CL}}, // p_1361->g_983
        8L, // p_1361->g_999
        (void*)0, // p_1361->g_1026
        {0x2F3CD95EL,9L}, // p_1361->g_1032
        {1L,0L}, // p_1361->g_1035
        {0x20B64120L,0x1ADAABC7L}, // p_1361->g_1036
        {0L,0x2B6F6794L}, // p_1361->g_1037
        {0L,0L}, // p_1361->g_1052
        &p_1361->g_360, // p_1361->g_1053
        &p_1361->g_280, // p_1361->g_1075
        (-3L), // p_1361->g_1114
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 3UL), 3UL), 3UL, 0UL, 3UL, (VECTOR(uint64_t, 2))(0UL, 3UL), (VECTOR(uint64_t, 2))(0UL, 3UL), 0UL, 3UL, 0UL, 3UL), // p_1361->g_1126
        (VECTOR(uint32_t, 4))(0x085C9FCEL, (VECTOR(uint32_t, 2))(0x085C9FCEL, 0x9C9317BCL), 0x9C9317BCL), // p_1361->g_1128
        (VECTOR(int16_t, 16))(0x3C2FL, (VECTOR(int16_t, 4))(0x3C2FL, (VECTOR(int16_t, 2))(0x3C2FL, 0x26DBL), 0x26DBL), 0x26DBL, 0x3C2FL, 0x26DBL, (VECTOR(int16_t, 2))(0x3C2FL, 0x26DBL), (VECTOR(int16_t, 2))(0x3C2FL, 0x26DBL), 0x3C2FL, 0x26DBL, 0x3C2FL, 0x26DBL), // p_1361->g_1205
        0x66AAL, // p_1361->g_1220
        (VECTOR(int32_t, 8))(0x6FA3532EL, (VECTOR(int32_t, 4))(0x6FA3532EL, (VECTOR(int32_t, 2))(0x6FA3532EL, 0x58C2815DL), 0x58C2815DL), 0x58C2815DL, 0x6FA3532EL, 0x58C2815DL), // p_1361->g_1226
        (VECTOR(uint8_t, 2))(1UL, 0x72L), // p_1361->g_1240
        (VECTOR(uint32_t, 8))(0x4466C060L, (VECTOR(uint32_t, 4))(0x4466C060L, (VECTOR(uint32_t, 2))(0x4466C060L, 7UL), 7UL), 7UL, 0x4466C060L, 7UL), // p_1361->g_1270
        {&p_1361->g_356[3],&p_1361->g_356[3],&p_1361->g_356[3]}, // p_1361->g_1279
        {{{&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0]},{&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0]},{&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0]},{&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0]},{&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0]},{&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0]},{&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0]},{&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0]},{&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0]},{&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0],&p_1361->g_1279[0]}}}, // p_1361->g_1278
        (void*)0, // p_1361->g_1290
        0x34E6L, // p_1361->g_1308
        &p_1361->g_1308, // p_1361->g_1307
        &p_1361->g_1307, // p_1361->g_1306
        (VECTOR(int64_t, 8))(0x3707E3519EECB887L, (VECTOR(int64_t, 4))(0x3707E3519EECB887L, (VECTOR(int64_t, 2))(0x3707E3519EECB887L, 0x47BC22B59BB521CBL), 0x47BC22B59BB521CBL), 0x47BC22B59BB521CBL, 0x3707E3519EECB887L, 0x47BC22B59BB521CBL), // p_1361->g_1317
        {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}}, // p_1361->g_1316
        {&p_1361->g_1316[1][2][1],&p_1361->g_1316[1][2][1],&p_1361->g_1316[1][2][1],&p_1361->g_1316[1][2][1],&p_1361->g_1316[1][2][1],&p_1361->g_1316[1][2][1],&p_1361->g_1316[1][2][1],&p_1361->g_1316[1][2][1]}, // p_1361->g_1315
        &p_1361->g_1315[6], // p_1361->g_1314
        {{0xA384L,65535UL,65535UL,65535UL,0xA384L,0xA384L,65535UL,65535UL,65535UL},{0xA384L,65535UL,65535UL,65535UL,0xA384L,0xA384L,65535UL,65535UL,65535UL},{0xA384L,65535UL,65535UL,65535UL,0xA384L,0xA384L,65535UL,65535UL,65535UL},{0xA384L,65535UL,65535UL,65535UL,0xA384L,0xA384L,65535UL,65535UL,65535UL},{0xA384L,65535UL,65535UL,65535UL,0xA384L,0xA384L,65535UL,65535UL,65535UL},{0xA384L,65535UL,65535UL,65535UL,0xA384L,0xA384L,65535UL,65535UL,65535UL},{0xA384L,65535UL,65535UL,65535UL,0xA384L,0xA384L,65535UL,65535UL,65535UL},{0xA384L,65535UL,65535UL,65535UL,0xA384L,0xA384L,65535UL,65535UL,65535UL},{0xA384L,65535UL,65535UL,65535UL,0xA384L,0xA384L,65535UL,65535UL,65535UL}}, // p_1361->g_1320
        {&p_1361->g_105[3],&p_1361->g_105[3],&p_1361->g_105[3],&p_1361->g_105[3],&p_1361->g_105[3],&p_1361->g_105[3],&p_1361->g_105[3],&p_1361->g_105[3],&p_1361->g_105[3],&p_1361->g_105[3]}, // p_1361->g_1335
        &p_1361->g_591, // p_1361->g_1350
        (VECTOR(int8_t, 16))(0x69L, (VECTOR(int8_t, 4))(0x69L, (VECTOR(int8_t, 2))(0x69L, 1L), 1L), 1L, 0x69L, 1L, (VECTOR(int8_t, 2))(0x69L, 1L), (VECTOR(int8_t, 2))(0x69L, 1L), 0x69L, 1L, 0x69L, 1L), // p_1361->g_1356
        0, // p_1361->v_collective
        sequence_input[get_global_id(0)], // p_1361->global_0_offset
        sequence_input[get_global_id(1)], // p_1361->global_1_offset
        sequence_input[get_global_id(2)], // p_1361->global_2_offset
        sequence_input[get_local_id(0)], // p_1361->local_0_offset
        sequence_input[get_local_id(1)], // p_1361->local_1_offset
        sequence_input[get_local_id(2)], // p_1361->local_2_offset
        sequence_input[get_group_id(0)], // p_1361->group_0_offset
        sequence_input[get_group_id(1)], // p_1361->group_1_offset
        sequence_input[get_group_id(2)], // p_1361->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 184)), permutations[0][get_linear_local_id()])), // p_1361->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1362 = c_1363;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1361);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1361->g_44.s0, "p_1361->g_44.s0", print_hash_value);
    transparent_crc(p_1361->g_44.s1, "p_1361->g_44.s1", print_hash_value);
    transparent_crc(p_1361->g_44.s2, "p_1361->g_44.s2", print_hash_value);
    transparent_crc(p_1361->g_44.s3, "p_1361->g_44.s3", print_hash_value);
    transparent_crc(p_1361->g_44.s4, "p_1361->g_44.s4", print_hash_value);
    transparent_crc(p_1361->g_44.s5, "p_1361->g_44.s5", print_hash_value);
    transparent_crc(p_1361->g_44.s6, "p_1361->g_44.s6", print_hash_value);
    transparent_crc(p_1361->g_44.s7, "p_1361->g_44.s7", print_hash_value);
    transparent_crc(p_1361->g_44.s8, "p_1361->g_44.s8", print_hash_value);
    transparent_crc(p_1361->g_44.s9, "p_1361->g_44.s9", print_hash_value);
    transparent_crc(p_1361->g_44.sa, "p_1361->g_44.sa", print_hash_value);
    transparent_crc(p_1361->g_44.sb, "p_1361->g_44.sb", print_hash_value);
    transparent_crc(p_1361->g_44.sc, "p_1361->g_44.sc", print_hash_value);
    transparent_crc(p_1361->g_44.sd, "p_1361->g_44.sd", print_hash_value);
    transparent_crc(p_1361->g_44.se, "p_1361->g_44.se", print_hash_value);
    transparent_crc(p_1361->g_44.sf, "p_1361->g_44.sf", print_hash_value);
    transparent_crc(p_1361->g_59, "p_1361->g_59", print_hash_value);
    transparent_crc(p_1361->g_61.s0, "p_1361->g_61.s0", print_hash_value);
    transparent_crc(p_1361->g_61.s1, "p_1361->g_61.s1", print_hash_value);
    transparent_crc(p_1361->g_61.s2, "p_1361->g_61.s2", print_hash_value);
    transparent_crc(p_1361->g_61.s3, "p_1361->g_61.s3", print_hash_value);
    transparent_crc(p_1361->g_61.s4, "p_1361->g_61.s4", print_hash_value);
    transparent_crc(p_1361->g_61.s5, "p_1361->g_61.s5", print_hash_value);
    transparent_crc(p_1361->g_61.s6, "p_1361->g_61.s6", print_hash_value);
    transparent_crc(p_1361->g_61.s7, "p_1361->g_61.s7", print_hash_value);
    transparent_crc(p_1361->g_68, "p_1361->g_68", print_hash_value);
    transparent_crc(p_1361->g_82, "p_1361->g_82", print_hash_value);
    transparent_crc(p_1361->g_84.s0, "p_1361->g_84.s0", print_hash_value);
    transparent_crc(p_1361->g_84.s1, "p_1361->g_84.s1", print_hash_value);
    transparent_crc(p_1361->g_84.s2, "p_1361->g_84.s2", print_hash_value);
    transparent_crc(p_1361->g_84.s3, "p_1361->g_84.s3", print_hash_value);
    transparent_crc(p_1361->g_84.s4, "p_1361->g_84.s4", print_hash_value);
    transparent_crc(p_1361->g_84.s5, "p_1361->g_84.s5", print_hash_value);
    transparent_crc(p_1361->g_84.s6, "p_1361->g_84.s6", print_hash_value);
    transparent_crc(p_1361->g_84.s7, "p_1361->g_84.s7", print_hash_value);
    transparent_crc(p_1361->g_84.s8, "p_1361->g_84.s8", print_hash_value);
    transparent_crc(p_1361->g_84.s9, "p_1361->g_84.s9", print_hash_value);
    transparent_crc(p_1361->g_84.sa, "p_1361->g_84.sa", print_hash_value);
    transparent_crc(p_1361->g_84.sb, "p_1361->g_84.sb", print_hash_value);
    transparent_crc(p_1361->g_84.sc, "p_1361->g_84.sc", print_hash_value);
    transparent_crc(p_1361->g_84.sd, "p_1361->g_84.sd", print_hash_value);
    transparent_crc(p_1361->g_84.se, "p_1361->g_84.se", print_hash_value);
    transparent_crc(p_1361->g_84.sf, "p_1361->g_84.sf", print_hash_value);
    transparent_crc(p_1361->g_87.s0, "p_1361->g_87.s0", print_hash_value);
    transparent_crc(p_1361->g_87.s1, "p_1361->g_87.s1", print_hash_value);
    transparent_crc(p_1361->g_87.s2, "p_1361->g_87.s2", print_hash_value);
    transparent_crc(p_1361->g_87.s3, "p_1361->g_87.s3", print_hash_value);
    transparent_crc(p_1361->g_87.s4, "p_1361->g_87.s4", print_hash_value);
    transparent_crc(p_1361->g_87.s5, "p_1361->g_87.s5", print_hash_value);
    transparent_crc(p_1361->g_87.s6, "p_1361->g_87.s6", print_hash_value);
    transparent_crc(p_1361->g_87.s7, "p_1361->g_87.s7", print_hash_value);
    transparent_crc(p_1361->g_87.s8, "p_1361->g_87.s8", print_hash_value);
    transparent_crc(p_1361->g_87.s9, "p_1361->g_87.s9", print_hash_value);
    transparent_crc(p_1361->g_87.sa, "p_1361->g_87.sa", print_hash_value);
    transparent_crc(p_1361->g_87.sb, "p_1361->g_87.sb", print_hash_value);
    transparent_crc(p_1361->g_87.sc, "p_1361->g_87.sc", print_hash_value);
    transparent_crc(p_1361->g_87.sd, "p_1361->g_87.sd", print_hash_value);
    transparent_crc(p_1361->g_87.se, "p_1361->g_87.se", print_hash_value);
    transparent_crc(p_1361->g_87.sf, "p_1361->g_87.sf", print_hash_value);
    transparent_crc(p_1361->g_89.x, "p_1361->g_89.x", print_hash_value);
    transparent_crc(p_1361->g_89.y, "p_1361->g_89.y", print_hash_value);
    transparent_crc(p_1361->g_89.z, "p_1361->g_89.z", print_hash_value);
    transparent_crc(p_1361->g_89.w, "p_1361->g_89.w", print_hash_value);
    transparent_crc(p_1361->g_90.s0, "p_1361->g_90.s0", print_hash_value);
    transparent_crc(p_1361->g_90.s1, "p_1361->g_90.s1", print_hash_value);
    transparent_crc(p_1361->g_90.s2, "p_1361->g_90.s2", print_hash_value);
    transparent_crc(p_1361->g_90.s3, "p_1361->g_90.s3", print_hash_value);
    transparent_crc(p_1361->g_90.s4, "p_1361->g_90.s4", print_hash_value);
    transparent_crc(p_1361->g_90.s5, "p_1361->g_90.s5", print_hash_value);
    transparent_crc(p_1361->g_90.s6, "p_1361->g_90.s6", print_hash_value);
    transparent_crc(p_1361->g_90.s7, "p_1361->g_90.s7", print_hash_value);
    transparent_crc(p_1361->g_91.x, "p_1361->g_91.x", print_hash_value);
    transparent_crc(p_1361->g_91.y, "p_1361->g_91.y", print_hash_value);
    transparent_crc(p_1361->g_91.z, "p_1361->g_91.z", print_hash_value);
    transparent_crc(p_1361->g_91.w, "p_1361->g_91.w", print_hash_value);
    transparent_crc(p_1361->g_92.x, "p_1361->g_92.x", print_hash_value);
    transparent_crc(p_1361->g_92.y, "p_1361->g_92.y", print_hash_value);
    transparent_crc(p_1361->g_92.z, "p_1361->g_92.z", print_hash_value);
    transparent_crc(p_1361->g_92.w, "p_1361->g_92.w", print_hash_value);
    transparent_crc(p_1361->g_93.s0, "p_1361->g_93.s0", print_hash_value);
    transparent_crc(p_1361->g_93.s1, "p_1361->g_93.s1", print_hash_value);
    transparent_crc(p_1361->g_93.s2, "p_1361->g_93.s2", print_hash_value);
    transparent_crc(p_1361->g_93.s3, "p_1361->g_93.s3", print_hash_value);
    transparent_crc(p_1361->g_93.s4, "p_1361->g_93.s4", print_hash_value);
    transparent_crc(p_1361->g_93.s5, "p_1361->g_93.s5", print_hash_value);
    transparent_crc(p_1361->g_93.s6, "p_1361->g_93.s6", print_hash_value);
    transparent_crc(p_1361->g_93.s7, "p_1361->g_93.s7", print_hash_value);
    transparent_crc(p_1361->g_93.s8, "p_1361->g_93.s8", print_hash_value);
    transparent_crc(p_1361->g_93.s9, "p_1361->g_93.s9", print_hash_value);
    transparent_crc(p_1361->g_93.sa, "p_1361->g_93.sa", print_hash_value);
    transparent_crc(p_1361->g_93.sb, "p_1361->g_93.sb", print_hash_value);
    transparent_crc(p_1361->g_93.sc, "p_1361->g_93.sc", print_hash_value);
    transparent_crc(p_1361->g_93.sd, "p_1361->g_93.sd", print_hash_value);
    transparent_crc(p_1361->g_93.se, "p_1361->g_93.se", print_hash_value);
    transparent_crc(p_1361->g_93.sf, "p_1361->g_93.sf", print_hash_value);
    transparent_crc(p_1361->g_111, "p_1361->g_111", print_hash_value);
    transparent_crc(p_1361->g_112, "p_1361->g_112", print_hash_value);
    transparent_crc(p_1361->g_115, "p_1361->g_115", print_hash_value);
    transparent_crc(p_1361->g_137.x, "p_1361->g_137.x", print_hash_value);
    transparent_crc(p_1361->g_137.y, "p_1361->g_137.y", print_hash_value);
    transparent_crc(p_1361->g_137.z, "p_1361->g_137.z", print_hash_value);
    transparent_crc(p_1361->g_137.w, "p_1361->g_137.w", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1361->g_140[i], "p_1361->g_140[i]", print_hash_value);

    }
    transparent_crc(p_1361->g_145.f0, "p_1361->g_145.f0", print_hash_value);
    transparent_crc(p_1361->g_145.f1, "p_1361->g_145.f1", print_hash_value);
    transparent_crc(p_1361->g_148.s0, "p_1361->g_148.s0", print_hash_value);
    transparent_crc(p_1361->g_148.s1, "p_1361->g_148.s1", print_hash_value);
    transparent_crc(p_1361->g_148.s2, "p_1361->g_148.s2", print_hash_value);
    transparent_crc(p_1361->g_148.s3, "p_1361->g_148.s3", print_hash_value);
    transparent_crc(p_1361->g_148.s4, "p_1361->g_148.s4", print_hash_value);
    transparent_crc(p_1361->g_148.s5, "p_1361->g_148.s5", print_hash_value);
    transparent_crc(p_1361->g_148.s6, "p_1361->g_148.s6", print_hash_value);
    transparent_crc(p_1361->g_148.s7, "p_1361->g_148.s7", print_hash_value);
    transparent_crc(p_1361->g_152, "p_1361->g_152", print_hash_value);
    transparent_crc(p_1361->g_154, "p_1361->g_154", print_hash_value);
    transparent_crc(p_1361->g_156, "p_1361->g_156", print_hash_value);
    transparent_crc(p_1361->g_158, "p_1361->g_158", print_hash_value);
    transparent_crc(p_1361->g_210.s0, "p_1361->g_210.s0", print_hash_value);
    transparent_crc(p_1361->g_210.s1, "p_1361->g_210.s1", print_hash_value);
    transparent_crc(p_1361->g_210.s2, "p_1361->g_210.s2", print_hash_value);
    transparent_crc(p_1361->g_210.s3, "p_1361->g_210.s3", print_hash_value);
    transparent_crc(p_1361->g_210.s4, "p_1361->g_210.s4", print_hash_value);
    transparent_crc(p_1361->g_210.s5, "p_1361->g_210.s5", print_hash_value);
    transparent_crc(p_1361->g_210.s6, "p_1361->g_210.s6", print_hash_value);
    transparent_crc(p_1361->g_210.s7, "p_1361->g_210.s7", print_hash_value);
    transparent_crc(p_1361->g_211.s0, "p_1361->g_211.s0", print_hash_value);
    transparent_crc(p_1361->g_211.s1, "p_1361->g_211.s1", print_hash_value);
    transparent_crc(p_1361->g_211.s2, "p_1361->g_211.s2", print_hash_value);
    transparent_crc(p_1361->g_211.s3, "p_1361->g_211.s3", print_hash_value);
    transparent_crc(p_1361->g_211.s4, "p_1361->g_211.s4", print_hash_value);
    transparent_crc(p_1361->g_211.s5, "p_1361->g_211.s5", print_hash_value);
    transparent_crc(p_1361->g_211.s6, "p_1361->g_211.s6", print_hash_value);
    transparent_crc(p_1361->g_211.s7, "p_1361->g_211.s7", print_hash_value);
    transparent_crc(p_1361->g_211.s8, "p_1361->g_211.s8", print_hash_value);
    transparent_crc(p_1361->g_211.s9, "p_1361->g_211.s9", print_hash_value);
    transparent_crc(p_1361->g_211.sa, "p_1361->g_211.sa", print_hash_value);
    transparent_crc(p_1361->g_211.sb, "p_1361->g_211.sb", print_hash_value);
    transparent_crc(p_1361->g_211.sc, "p_1361->g_211.sc", print_hash_value);
    transparent_crc(p_1361->g_211.sd, "p_1361->g_211.sd", print_hash_value);
    transparent_crc(p_1361->g_211.se, "p_1361->g_211.se", print_hash_value);
    transparent_crc(p_1361->g_211.sf, "p_1361->g_211.sf", print_hash_value);
    transparent_crc(p_1361->g_231.f0, "p_1361->g_231.f0", print_hash_value);
    transparent_crc(p_1361->g_231.f1, "p_1361->g_231.f1", print_hash_value);
    transparent_crc(p_1361->g_266.s0, "p_1361->g_266.s0", print_hash_value);
    transparent_crc(p_1361->g_266.s1, "p_1361->g_266.s1", print_hash_value);
    transparent_crc(p_1361->g_266.s2, "p_1361->g_266.s2", print_hash_value);
    transparent_crc(p_1361->g_266.s3, "p_1361->g_266.s3", print_hash_value);
    transparent_crc(p_1361->g_266.s4, "p_1361->g_266.s4", print_hash_value);
    transparent_crc(p_1361->g_266.s5, "p_1361->g_266.s5", print_hash_value);
    transparent_crc(p_1361->g_266.s6, "p_1361->g_266.s6", print_hash_value);
    transparent_crc(p_1361->g_266.s7, "p_1361->g_266.s7", print_hash_value);
    transparent_crc(p_1361->g_275, "p_1361->g_275", print_hash_value);
    transparent_crc(p_1361->g_283, "p_1361->g_283", print_hash_value);
    transparent_crc(p_1361->g_286.s0, "p_1361->g_286.s0", print_hash_value);
    transparent_crc(p_1361->g_286.s1, "p_1361->g_286.s1", print_hash_value);
    transparent_crc(p_1361->g_286.s2, "p_1361->g_286.s2", print_hash_value);
    transparent_crc(p_1361->g_286.s3, "p_1361->g_286.s3", print_hash_value);
    transparent_crc(p_1361->g_286.s4, "p_1361->g_286.s4", print_hash_value);
    transparent_crc(p_1361->g_286.s5, "p_1361->g_286.s5", print_hash_value);
    transparent_crc(p_1361->g_286.s6, "p_1361->g_286.s6", print_hash_value);
    transparent_crc(p_1361->g_286.s7, "p_1361->g_286.s7", print_hash_value);
    transparent_crc(p_1361->g_286.s8, "p_1361->g_286.s8", print_hash_value);
    transparent_crc(p_1361->g_286.s9, "p_1361->g_286.s9", print_hash_value);
    transparent_crc(p_1361->g_286.sa, "p_1361->g_286.sa", print_hash_value);
    transparent_crc(p_1361->g_286.sb, "p_1361->g_286.sb", print_hash_value);
    transparent_crc(p_1361->g_286.sc, "p_1361->g_286.sc", print_hash_value);
    transparent_crc(p_1361->g_286.sd, "p_1361->g_286.sd", print_hash_value);
    transparent_crc(p_1361->g_286.se, "p_1361->g_286.se", print_hash_value);
    transparent_crc(p_1361->g_286.sf, "p_1361->g_286.sf", print_hash_value);
    transparent_crc(p_1361->g_289.x, "p_1361->g_289.x", print_hash_value);
    transparent_crc(p_1361->g_289.y, "p_1361->g_289.y", print_hash_value);
    transparent_crc(p_1361->g_358.f0, "p_1361->g_358.f0", print_hash_value);
    transparent_crc(p_1361->g_358.f1, "p_1361->g_358.f1", print_hash_value);
    transparent_crc(p_1361->g_359.f0, "p_1361->g_359.f0", print_hash_value);
    transparent_crc(p_1361->g_359.f1, "p_1361->g_359.f1", print_hash_value);
    transparent_crc(p_1361->g_360.f0, "p_1361->g_360.f0", print_hash_value);
    transparent_crc(p_1361->g_360.f1, "p_1361->g_360.f1", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1361->g_388[i][j].f0, "p_1361->g_388[i][j].f0", print_hash_value);
            transparent_crc(p_1361->g_388[i][j].f1, "p_1361->g_388[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(p_1361->g_396.x, "p_1361->g_396.x", print_hash_value);
    transparent_crc(p_1361->g_396.y, "p_1361->g_396.y", print_hash_value);
    transparent_crc(p_1361->g_433.s0, "p_1361->g_433.s0", print_hash_value);
    transparent_crc(p_1361->g_433.s1, "p_1361->g_433.s1", print_hash_value);
    transparent_crc(p_1361->g_433.s2, "p_1361->g_433.s2", print_hash_value);
    transparent_crc(p_1361->g_433.s3, "p_1361->g_433.s3", print_hash_value);
    transparent_crc(p_1361->g_433.s4, "p_1361->g_433.s4", print_hash_value);
    transparent_crc(p_1361->g_433.s5, "p_1361->g_433.s5", print_hash_value);
    transparent_crc(p_1361->g_433.s6, "p_1361->g_433.s6", print_hash_value);
    transparent_crc(p_1361->g_433.s7, "p_1361->g_433.s7", print_hash_value);
    transparent_crc(p_1361->g_433.s8, "p_1361->g_433.s8", print_hash_value);
    transparent_crc(p_1361->g_433.s9, "p_1361->g_433.s9", print_hash_value);
    transparent_crc(p_1361->g_433.sa, "p_1361->g_433.sa", print_hash_value);
    transparent_crc(p_1361->g_433.sb, "p_1361->g_433.sb", print_hash_value);
    transparent_crc(p_1361->g_433.sc, "p_1361->g_433.sc", print_hash_value);
    transparent_crc(p_1361->g_433.sd, "p_1361->g_433.sd", print_hash_value);
    transparent_crc(p_1361->g_433.se, "p_1361->g_433.se", print_hash_value);
    transparent_crc(p_1361->g_433.sf, "p_1361->g_433.sf", print_hash_value);
    transparent_crc(p_1361->g_556.x, "p_1361->g_556.x", print_hash_value);
    transparent_crc(p_1361->g_556.y, "p_1361->g_556.y", print_hash_value);
    transparent_crc(p_1361->g_556.z, "p_1361->g_556.z", print_hash_value);
    transparent_crc(p_1361->g_556.w, "p_1361->g_556.w", print_hash_value);
    transparent_crc(p_1361->g_569.f0, "p_1361->g_569.f0", print_hash_value);
    transparent_crc(p_1361->g_569.f1, "p_1361->g_569.f1", print_hash_value);
    transparent_crc(p_1361->g_577.x, "p_1361->g_577.x", print_hash_value);
    transparent_crc(p_1361->g_577.y, "p_1361->g_577.y", print_hash_value);
    transparent_crc(p_1361->g_577.z, "p_1361->g_577.z", print_hash_value);
    transparent_crc(p_1361->g_577.w, "p_1361->g_577.w", print_hash_value);
    transparent_crc(p_1361->g_583.x, "p_1361->g_583.x", print_hash_value);
    transparent_crc(p_1361->g_583.y, "p_1361->g_583.y", print_hash_value);
    transparent_crc(p_1361->g_583.z, "p_1361->g_583.z", print_hash_value);
    transparent_crc(p_1361->g_583.w, "p_1361->g_583.w", print_hash_value);
    transparent_crc(p_1361->g_591, "p_1361->g_591", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1361->g_608[i][j], "p_1361->g_608[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1361->g_625.s0, "p_1361->g_625.s0", print_hash_value);
    transparent_crc(p_1361->g_625.s1, "p_1361->g_625.s1", print_hash_value);
    transparent_crc(p_1361->g_625.s2, "p_1361->g_625.s2", print_hash_value);
    transparent_crc(p_1361->g_625.s3, "p_1361->g_625.s3", print_hash_value);
    transparent_crc(p_1361->g_625.s4, "p_1361->g_625.s4", print_hash_value);
    transparent_crc(p_1361->g_625.s5, "p_1361->g_625.s5", print_hash_value);
    transparent_crc(p_1361->g_625.s6, "p_1361->g_625.s6", print_hash_value);
    transparent_crc(p_1361->g_625.s7, "p_1361->g_625.s7", print_hash_value);
    transparent_crc(p_1361->g_660.f0, "p_1361->g_660.f0", print_hash_value);
    transparent_crc(p_1361->g_660.f1, "p_1361->g_660.f1", print_hash_value);
    transparent_crc(p_1361->g_677.s0, "p_1361->g_677.s0", print_hash_value);
    transparent_crc(p_1361->g_677.s1, "p_1361->g_677.s1", print_hash_value);
    transparent_crc(p_1361->g_677.s2, "p_1361->g_677.s2", print_hash_value);
    transparent_crc(p_1361->g_677.s3, "p_1361->g_677.s3", print_hash_value);
    transparent_crc(p_1361->g_677.s4, "p_1361->g_677.s4", print_hash_value);
    transparent_crc(p_1361->g_677.s5, "p_1361->g_677.s5", print_hash_value);
    transparent_crc(p_1361->g_677.s6, "p_1361->g_677.s6", print_hash_value);
    transparent_crc(p_1361->g_677.s7, "p_1361->g_677.s7", print_hash_value);
    transparent_crc(p_1361->g_708, "p_1361->g_708", print_hash_value);
    transparent_crc(p_1361->g_709, "p_1361->g_709", print_hash_value);
    transparent_crc(p_1361->g_710, "p_1361->g_710", print_hash_value);
    transparent_crc(p_1361->g_711, "p_1361->g_711", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1361->g_712[i][j], "p_1361->g_712[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1361->g_713, "p_1361->g_713", print_hash_value);
    transparent_crc(p_1361->g_714, "p_1361->g_714", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1361->g_715[i][j], "p_1361->g_715[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1361->g_716, "p_1361->g_716", print_hash_value);
    transparent_crc(p_1361->g_717, "p_1361->g_717", print_hash_value);
    transparent_crc(p_1361->g_718, "p_1361->g_718", print_hash_value);
    transparent_crc(p_1361->g_719, "p_1361->g_719", print_hash_value);
    transparent_crc(p_1361->g_720, "p_1361->g_720", print_hash_value);
    transparent_crc(p_1361->g_721, "p_1361->g_721", print_hash_value);
    transparent_crc(p_1361->g_722, "p_1361->g_722", print_hash_value);
    transparent_crc(p_1361->g_723.s0, "p_1361->g_723.s0", print_hash_value);
    transparent_crc(p_1361->g_723.s1, "p_1361->g_723.s1", print_hash_value);
    transparent_crc(p_1361->g_723.s2, "p_1361->g_723.s2", print_hash_value);
    transparent_crc(p_1361->g_723.s3, "p_1361->g_723.s3", print_hash_value);
    transparent_crc(p_1361->g_723.s4, "p_1361->g_723.s4", print_hash_value);
    transparent_crc(p_1361->g_723.s5, "p_1361->g_723.s5", print_hash_value);
    transparent_crc(p_1361->g_723.s6, "p_1361->g_723.s6", print_hash_value);
    transparent_crc(p_1361->g_723.s7, "p_1361->g_723.s7", print_hash_value);
    transparent_crc(p_1361->g_724, "p_1361->g_724", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1361->g_725[i][j][k], "p_1361->g_725[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1361->g_726, "p_1361->g_726", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1361->g_727[i][j][k], "p_1361->g_727[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1361->g_728, "p_1361->g_728", print_hash_value);
    transparent_crc(p_1361->g_729, "p_1361->g_729", print_hash_value);
    transparent_crc(p_1361->g_730, "p_1361->g_730", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1361->g_731[i], "p_1361->g_731[i]", print_hash_value);

    }
    transparent_crc(p_1361->g_732, "p_1361->g_732", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1361->g_733[i][j][k], "p_1361->g_733[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1361->g_734, "p_1361->g_734", print_hash_value);
    transparent_crc(p_1361->g_735, "p_1361->g_735", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1361->g_736[i][j], "p_1361->g_736[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1361->g_737, "p_1361->g_737", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1361->g_738[i][j], "p_1361->g_738[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1361->g_739, "p_1361->g_739", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1361->g_740[i][j], "p_1361->g_740[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1361->g_741.s0, "p_1361->g_741.s0", print_hash_value);
    transparent_crc(p_1361->g_741.s1, "p_1361->g_741.s1", print_hash_value);
    transparent_crc(p_1361->g_741.s2, "p_1361->g_741.s2", print_hash_value);
    transparent_crc(p_1361->g_741.s3, "p_1361->g_741.s3", print_hash_value);
    transparent_crc(p_1361->g_741.s4, "p_1361->g_741.s4", print_hash_value);
    transparent_crc(p_1361->g_741.s5, "p_1361->g_741.s5", print_hash_value);
    transparent_crc(p_1361->g_741.s6, "p_1361->g_741.s6", print_hash_value);
    transparent_crc(p_1361->g_741.s7, "p_1361->g_741.s7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1361->g_742[i], "p_1361->g_742[i]", print_hash_value);

    }
    transparent_crc(p_1361->g_743, "p_1361->g_743", print_hash_value);
    transparent_crc(p_1361->g_744, "p_1361->g_744", print_hash_value);
    transparent_crc(p_1361->g_745, "p_1361->g_745", print_hash_value);
    transparent_crc(p_1361->g_746, "p_1361->g_746", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1361->g_747[i], "p_1361->g_747[i]", print_hash_value);

    }
    transparent_crc(p_1361->g_748, "p_1361->g_748", print_hash_value);
    transparent_crc(p_1361->g_749, "p_1361->g_749", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1361->g_750[i][j], "p_1361->g_750[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1361->g_751[i], "p_1361->g_751[i]", print_hash_value);

    }
    transparent_crc(p_1361->g_752, "p_1361->g_752", print_hash_value);
    transparent_crc(p_1361->g_753, "p_1361->g_753", print_hash_value);
    transparent_crc(p_1361->g_777.s0, "p_1361->g_777.s0", print_hash_value);
    transparent_crc(p_1361->g_777.s1, "p_1361->g_777.s1", print_hash_value);
    transparent_crc(p_1361->g_777.s2, "p_1361->g_777.s2", print_hash_value);
    transparent_crc(p_1361->g_777.s3, "p_1361->g_777.s3", print_hash_value);
    transparent_crc(p_1361->g_777.s4, "p_1361->g_777.s4", print_hash_value);
    transparent_crc(p_1361->g_777.s5, "p_1361->g_777.s5", print_hash_value);
    transparent_crc(p_1361->g_777.s6, "p_1361->g_777.s6", print_hash_value);
    transparent_crc(p_1361->g_777.s7, "p_1361->g_777.s7", print_hash_value);
    transparent_crc(p_1361->g_781.s0, "p_1361->g_781.s0", print_hash_value);
    transparent_crc(p_1361->g_781.s1, "p_1361->g_781.s1", print_hash_value);
    transparent_crc(p_1361->g_781.s2, "p_1361->g_781.s2", print_hash_value);
    transparent_crc(p_1361->g_781.s3, "p_1361->g_781.s3", print_hash_value);
    transparent_crc(p_1361->g_781.s4, "p_1361->g_781.s4", print_hash_value);
    transparent_crc(p_1361->g_781.s5, "p_1361->g_781.s5", print_hash_value);
    transparent_crc(p_1361->g_781.s6, "p_1361->g_781.s6", print_hash_value);
    transparent_crc(p_1361->g_781.s7, "p_1361->g_781.s7", print_hash_value);
    transparent_crc(p_1361->g_797.s0, "p_1361->g_797.s0", print_hash_value);
    transparent_crc(p_1361->g_797.s1, "p_1361->g_797.s1", print_hash_value);
    transparent_crc(p_1361->g_797.s2, "p_1361->g_797.s2", print_hash_value);
    transparent_crc(p_1361->g_797.s3, "p_1361->g_797.s3", print_hash_value);
    transparent_crc(p_1361->g_797.s4, "p_1361->g_797.s4", print_hash_value);
    transparent_crc(p_1361->g_797.s5, "p_1361->g_797.s5", print_hash_value);
    transparent_crc(p_1361->g_797.s6, "p_1361->g_797.s6", print_hash_value);
    transparent_crc(p_1361->g_797.s7, "p_1361->g_797.s7", print_hash_value);
    transparent_crc(p_1361->g_797.s8, "p_1361->g_797.s8", print_hash_value);
    transparent_crc(p_1361->g_797.s9, "p_1361->g_797.s9", print_hash_value);
    transparent_crc(p_1361->g_797.sa, "p_1361->g_797.sa", print_hash_value);
    transparent_crc(p_1361->g_797.sb, "p_1361->g_797.sb", print_hash_value);
    transparent_crc(p_1361->g_797.sc, "p_1361->g_797.sc", print_hash_value);
    transparent_crc(p_1361->g_797.sd, "p_1361->g_797.sd", print_hash_value);
    transparent_crc(p_1361->g_797.se, "p_1361->g_797.se", print_hash_value);
    transparent_crc(p_1361->g_797.sf, "p_1361->g_797.sf", print_hash_value);
    transparent_crc(p_1361->g_809, "p_1361->g_809", print_hash_value);
    transparent_crc(p_1361->g_810, "p_1361->g_810", print_hash_value);
    transparent_crc(p_1361->g_832.x, "p_1361->g_832.x", print_hash_value);
    transparent_crc(p_1361->g_832.y, "p_1361->g_832.y", print_hash_value);
    transparent_crc(p_1361->g_832.z, "p_1361->g_832.z", print_hash_value);
    transparent_crc(p_1361->g_832.w, "p_1361->g_832.w", print_hash_value);
    transparent_crc(p_1361->g_885.s0, "p_1361->g_885.s0", print_hash_value);
    transparent_crc(p_1361->g_885.s1, "p_1361->g_885.s1", print_hash_value);
    transparent_crc(p_1361->g_885.s2, "p_1361->g_885.s2", print_hash_value);
    transparent_crc(p_1361->g_885.s3, "p_1361->g_885.s3", print_hash_value);
    transparent_crc(p_1361->g_885.s4, "p_1361->g_885.s4", print_hash_value);
    transparent_crc(p_1361->g_885.s5, "p_1361->g_885.s5", print_hash_value);
    transparent_crc(p_1361->g_885.s6, "p_1361->g_885.s6", print_hash_value);
    transparent_crc(p_1361->g_885.s7, "p_1361->g_885.s7", print_hash_value);
    transparent_crc(p_1361->g_885.s8, "p_1361->g_885.s8", print_hash_value);
    transparent_crc(p_1361->g_885.s9, "p_1361->g_885.s9", print_hash_value);
    transparent_crc(p_1361->g_885.sa, "p_1361->g_885.sa", print_hash_value);
    transparent_crc(p_1361->g_885.sb, "p_1361->g_885.sb", print_hash_value);
    transparent_crc(p_1361->g_885.sc, "p_1361->g_885.sc", print_hash_value);
    transparent_crc(p_1361->g_885.sd, "p_1361->g_885.sd", print_hash_value);
    transparent_crc(p_1361->g_885.se, "p_1361->g_885.se", print_hash_value);
    transparent_crc(p_1361->g_885.sf, "p_1361->g_885.sf", print_hash_value);
    transparent_crc(p_1361->g_919.s0, "p_1361->g_919.s0", print_hash_value);
    transparent_crc(p_1361->g_919.s1, "p_1361->g_919.s1", print_hash_value);
    transparent_crc(p_1361->g_919.s2, "p_1361->g_919.s2", print_hash_value);
    transparent_crc(p_1361->g_919.s3, "p_1361->g_919.s3", print_hash_value);
    transparent_crc(p_1361->g_919.s4, "p_1361->g_919.s4", print_hash_value);
    transparent_crc(p_1361->g_919.s5, "p_1361->g_919.s5", print_hash_value);
    transparent_crc(p_1361->g_919.s6, "p_1361->g_919.s6", print_hash_value);
    transparent_crc(p_1361->g_919.s7, "p_1361->g_919.s7", print_hash_value);
    transparent_crc(p_1361->g_919.s8, "p_1361->g_919.s8", print_hash_value);
    transparent_crc(p_1361->g_919.s9, "p_1361->g_919.s9", print_hash_value);
    transparent_crc(p_1361->g_919.sa, "p_1361->g_919.sa", print_hash_value);
    transparent_crc(p_1361->g_919.sb, "p_1361->g_919.sb", print_hash_value);
    transparent_crc(p_1361->g_919.sc, "p_1361->g_919.sc", print_hash_value);
    transparent_crc(p_1361->g_919.sd, "p_1361->g_919.sd", print_hash_value);
    transparent_crc(p_1361->g_919.se, "p_1361->g_919.se", print_hash_value);
    transparent_crc(p_1361->g_919.sf, "p_1361->g_919.sf", print_hash_value);
    transparent_crc(p_1361->g_928.x, "p_1361->g_928.x", print_hash_value);
    transparent_crc(p_1361->g_928.y, "p_1361->g_928.y", print_hash_value);
    transparent_crc(p_1361->g_933.f0, "p_1361->g_933.f0", print_hash_value);
    transparent_crc(p_1361->g_933.f1, "p_1361->g_933.f1", print_hash_value);
    transparent_crc(p_1361->g_944.x, "p_1361->g_944.x", print_hash_value);
    transparent_crc(p_1361->g_944.y, "p_1361->g_944.y", print_hash_value);
    transparent_crc(p_1361->g_944.z, "p_1361->g_944.z", print_hash_value);
    transparent_crc(p_1361->g_944.w, "p_1361->g_944.w", print_hash_value);
    transparent_crc(p_1361->g_947.s0, "p_1361->g_947.s0", print_hash_value);
    transparent_crc(p_1361->g_947.s1, "p_1361->g_947.s1", print_hash_value);
    transparent_crc(p_1361->g_947.s2, "p_1361->g_947.s2", print_hash_value);
    transparent_crc(p_1361->g_947.s3, "p_1361->g_947.s3", print_hash_value);
    transparent_crc(p_1361->g_947.s4, "p_1361->g_947.s4", print_hash_value);
    transparent_crc(p_1361->g_947.s5, "p_1361->g_947.s5", print_hash_value);
    transparent_crc(p_1361->g_947.s6, "p_1361->g_947.s6", print_hash_value);
    transparent_crc(p_1361->g_947.s7, "p_1361->g_947.s7", print_hash_value);
    transparent_crc(p_1361->g_980.x, "p_1361->g_980.x", print_hash_value);
    transparent_crc(p_1361->g_980.y, "p_1361->g_980.y", print_hash_value);
    transparent_crc(p_1361->g_980.z, "p_1361->g_980.z", print_hash_value);
    transparent_crc(p_1361->g_980.w, "p_1361->g_980.w", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1361->g_983[i].f0, "p_1361->g_983[i].f0", print_hash_value);
        transparent_crc(p_1361->g_983[i].f1, "p_1361->g_983[i].f1", print_hash_value);

    }
    transparent_crc(p_1361->g_999, "p_1361->g_999", print_hash_value);
    transparent_crc(p_1361->g_1032.f0, "p_1361->g_1032.f0", print_hash_value);
    transparent_crc(p_1361->g_1032.f1, "p_1361->g_1032.f1", print_hash_value);
    transparent_crc(p_1361->g_1035.f0, "p_1361->g_1035.f0", print_hash_value);
    transparent_crc(p_1361->g_1035.f1, "p_1361->g_1035.f1", print_hash_value);
    transparent_crc(p_1361->g_1036.f0, "p_1361->g_1036.f0", print_hash_value);
    transparent_crc(p_1361->g_1036.f1, "p_1361->g_1036.f1", print_hash_value);
    transparent_crc(p_1361->g_1037.f0, "p_1361->g_1037.f0", print_hash_value);
    transparent_crc(p_1361->g_1037.f1, "p_1361->g_1037.f1", print_hash_value);
    transparent_crc(p_1361->g_1052.f0, "p_1361->g_1052.f0", print_hash_value);
    transparent_crc(p_1361->g_1052.f1, "p_1361->g_1052.f1", print_hash_value);
    transparent_crc(p_1361->g_1114, "p_1361->g_1114", print_hash_value);
    transparent_crc(p_1361->g_1126.s0, "p_1361->g_1126.s0", print_hash_value);
    transparent_crc(p_1361->g_1126.s1, "p_1361->g_1126.s1", print_hash_value);
    transparent_crc(p_1361->g_1126.s2, "p_1361->g_1126.s2", print_hash_value);
    transparent_crc(p_1361->g_1126.s3, "p_1361->g_1126.s3", print_hash_value);
    transparent_crc(p_1361->g_1126.s4, "p_1361->g_1126.s4", print_hash_value);
    transparent_crc(p_1361->g_1126.s5, "p_1361->g_1126.s5", print_hash_value);
    transparent_crc(p_1361->g_1126.s6, "p_1361->g_1126.s6", print_hash_value);
    transparent_crc(p_1361->g_1126.s7, "p_1361->g_1126.s7", print_hash_value);
    transparent_crc(p_1361->g_1126.s8, "p_1361->g_1126.s8", print_hash_value);
    transparent_crc(p_1361->g_1126.s9, "p_1361->g_1126.s9", print_hash_value);
    transparent_crc(p_1361->g_1126.sa, "p_1361->g_1126.sa", print_hash_value);
    transparent_crc(p_1361->g_1126.sb, "p_1361->g_1126.sb", print_hash_value);
    transparent_crc(p_1361->g_1126.sc, "p_1361->g_1126.sc", print_hash_value);
    transparent_crc(p_1361->g_1126.sd, "p_1361->g_1126.sd", print_hash_value);
    transparent_crc(p_1361->g_1126.se, "p_1361->g_1126.se", print_hash_value);
    transparent_crc(p_1361->g_1126.sf, "p_1361->g_1126.sf", print_hash_value);
    transparent_crc(p_1361->g_1128.x, "p_1361->g_1128.x", print_hash_value);
    transparent_crc(p_1361->g_1128.y, "p_1361->g_1128.y", print_hash_value);
    transparent_crc(p_1361->g_1128.z, "p_1361->g_1128.z", print_hash_value);
    transparent_crc(p_1361->g_1128.w, "p_1361->g_1128.w", print_hash_value);
    transparent_crc(p_1361->g_1205.s0, "p_1361->g_1205.s0", print_hash_value);
    transparent_crc(p_1361->g_1205.s1, "p_1361->g_1205.s1", print_hash_value);
    transparent_crc(p_1361->g_1205.s2, "p_1361->g_1205.s2", print_hash_value);
    transparent_crc(p_1361->g_1205.s3, "p_1361->g_1205.s3", print_hash_value);
    transparent_crc(p_1361->g_1205.s4, "p_1361->g_1205.s4", print_hash_value);
    transparent_crc(p_1361->g_1205.s5, "p_1361->g_1205.s5", print_hash_value);
    transparent_crc(p_1361->g_1205.s6, "p_1361->g_1205.s6", print_hash_value);
    transparent_crc(p_1361->g_1205.s7, "p_1361->g_1205.s7", print_hash_value);
    transparent_crc(p_1361->g_1205.s8, "p_1361->g_1205.s8", print_hash_value);
    transparent_crc(p_1361->g_1205.s9, "p_1361->g_1205.s9", print_hash_value);
    transparent_crc(p_1361->g_1205.sa, "p_1361->g_1205.sa", print_hash_value);
    transparent_crc(p_1361->g_1205.sb, "p_1361->g_1205.sb", print_hash_value);
    transparent_crc(p_1361->g_1205.sc, "p_1361->g_1205.sc", print_hash_value);
    transparent_crc(p_1361->g_1205.sd, "p_1361->g_1205.sd", print_hash_value);
    transparent_crc(p_1361->g_1205.se, "p_1361->g_1205.se", print_hash_value);
    transparent_crc(p_1361->g_1205.sf, "p_1361->g_1205.sf", print_hash_value);
    transparent_crc(p_1361->g_1220, "p_1361->g_1220", print_hash_value);
    transparent_crc(p_1361->g_1226.s0, "p_1361->g_1226.s0", print_hash_value);
    transparent_crc(p_1361->g_1226.s1, "p_1361->g_1226.s1", print_hash_value);
    transparent_crc(p_1361->g_1226.s2, "p_1361->g_1226.s2", print_hash_value);
    transparent_crc(p_1361->g_1226.s3, "p_1361->g_1226.s3", print_hash_value);
    transparent_crc(p_1361->g_1226.s4, "p_1361->g_1226.s4", print_hash_value);
    transparent_crc(p_1361->g_1226.s5, "p_1361->g_1226.s5", print_hash_value);
    transparent_crc(p_1361->g_1226.s6, "p_1361->g_1226.s6", print_hash_value);
    transparent_crc(p_1361->g_1226.s7, "p_1361->g_1226.s7", print_hash_value);
    transparent_crc(p_1361->g_1240.x, "p_1361->g_1240.x", print_hash_value);
    transparent_crc(p_1361->g_1240.y, "p_1361->g_1240.y", print_hash_value);
    transparent_crc(p_1361->g_1270.s0, "p_1361->g_1270.s0", print_hash_value);
    transparent_crc(p_1361->g_1270.s1, "p_1361->g_1270.s1", print_hash_value);
    transparent_crc(p_1361->g_1270.s2, "p_1361->g_1270.s2", print_hash_value);
    transparent_crc(p_1361->g_1270.s3, "p_1361->g_1270.s3", print_hash_value);
    transparent_crc(p_1361->g_1270.s4, "p_1361->g_1270.s4", print_hash_value);
    transparent_crc(p_1361->g_1270.s5, "p_1361->g_1270.s5", print_hash_value);
    transparent_crc(p_1361->g_1270.s6, "p_1361->g_1270.s6", print_hash_value);
    transparent_crc(p_1361->g_1270.s7, "p_1361->g_1270.s7", print_hash_value);
    transparent_crc(p_1361->g_1308, "p_1361->g_1308", print_hash_value);
    transparent_crc(p_1361->g_1317.s0, "p_1361->g_1317.s0", print_hash_value);
    transparent_crc(p_1361->g_1317.s1, "p_1361->g_1317.s1", print_hash_value);
    transparent_crc(p_1361->g_1317.s2, "p_1361->g_1317.s2", print_hash_value);
    transparent_crc(p_1361->g_1317.s3, "p_1361->g_1317.s3", print_hash_value);
    transparent_crc(p_1361->g_1317.s4, "p_1361->g_1317.s4", print_hash_value);
    transparent_crc(p_1361->g_1317.s5, "p_1361->g_1317.s5", print_hash_value);
    transparent_crc(p_1361->g_1317.s6, "p_1361->g_1317.s6", print_hash_value);
    transparent_crc(p_1361->g_1317.s7, "p_1361->g_1317.s7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1361->g_1320[i][j], "p_1361->g_1320[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1361->g_1356.s0, "p_1361->g_1356.s0", print_hash_value);
    transparent_crc(p_1361->g_1356.s1, "p_1361->g_1356.s1", print_hash_value);
    transparent_crc(p_1361->g_1356.s2, "p_1361->g_1356.s2", print_hash_value);
    transparent_crc(p_1361->g_1356.s3, "p_1361->g_1356.s3", print_hash_value);
    transparent_crc(p_1361->g_1356.s4, "p_1361->g_1356.s4", print_hash_value);
    transparent_crc(p_1361->g_1356.s5, "p_1361->g_1356.s5", print_hash_value);
    transparent_crc(p_1361->g_1356.s6, "p_1361->g_1356.s6", print_hash_value);
    transparent_crc(p_1361->g_1356.s7, "p_1361->g_1356.s7", print_hash_value);
    transparent_crc(p_1361->g_1356.s8, "p_1361->g_1356.s8", print_hash_value);
    transparent_crc(p_1361->g_1356.s9, "p_1361->g_1356.s9", print_hash_value);
    transparent_crc(p_1361->g_1356.sa, "p_1361->g_1356.sa", print_hash_value);
    transparent_crc(p_1361->g_1356.sb, "p_1361->g_1356.sb", print_hash_value);
    transparent_crc(p_1361->g_1356.sc, "p_1361->g_1356.sc", print_hash_value);
    transparent_crc(p_1361->g_1356.sd, "p_1361->g_1356.sd", print_hash_value);
    transparent_crc(p_1361->g_1356.se, "p_1361->g_1356.se", print_hash_value);
    transparent_crc(p_1361->g_1356.sf, "p_1361->g_1356.sf", print_hash_value);
    transparent_crc(p_1361->v_collective, "p_1361->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 4; i++)
            transparent_crc(p_1361->g_special_values[i + 4 * get_linear_group_id()], "p_1361->g_special_values[i + 4 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 4; i++)
            transparent_crc(p_1361->l_special_values[i], "p_1361->l_special_values[i]", print_hash_value);
    transparent_crc(p_1361->l_comm_values[get_linear_local_id()], "p_1361->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1361->g_comm_values[get_linear_group_id() * 184 + get_linear_local_id()], "p_1361->g_comm_values[get_linear_group_id() * 184 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
