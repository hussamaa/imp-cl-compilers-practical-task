// --atomics 21 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 95,80,1 -l 5,40,1
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

__constant uint32_t permutations[10][200] = {
{109,194,75,68,184,119,24,92,20,157,52,97,106,86,117,26,22,161,136,122,17,196,187,169,55,197,135,176,14,45,126,179,128,175,149,58,171,56,180,186,163,165,51,57,99,147,100,120,155,174,183,72,140,178,49,110,185,89,198,36,77,84,137,121,153,21,61,27,127,159,0,115,173,98,144,142,193,151,139,3,114,18,23,105,102,172,33,81,91,28,25,46,39,131,2,79,30,133,199,73,37,104,164,42,192,145,125,148,189,83,44,170,146,5,54,134,70,132,74,40,116,64,113,166,158,124,101,156,143,90,195,95,19,6,71,47,65,78,4,154,103,168,88,31,59,8,130,152,15,35,67,191,69,48,112,38,1,16,108,80,7,76,13,190,177,181,32,188,29,85,123,62,93,118,11,150,53,10,34,162,167,50,87,82,41,141,129,160,182,63,43,60,94,12,111,66,138,107,96,9}, // permutation 0
{151,22,9,20,67,142,136,117,163,88,113,3,131,25,155,114,140,68,42,38,69,111,55,165,132,61,96,54,86,44,170,6,97,71,24,126,141,33,7,49,152,124,103,5,182,112,144,10,127,105,135,41,102,101,27,134,171,138,30,40,137,129,85,70,153,108,194,157,169,177,74,37,26,15,167,172,75,66,178,65,164,16,176,82,183,73,128,78,90,0,191,94,116,187,52,162,91,195,190,175,18,39,43,59,196,147,4,145,32,122,120,107,62,173,118,64,95,46,14,83,109,13,11,104,188,50,8,199,184,198,48,51,76,123,148,189,35,84,119,106,36,79,154,125,98,133,80,159,77,166,45,53,89,72,179,160,21,1,197,174,2,31,34,81,47,110,139,161,17,185,60,29,100,63,149,23,12,57,156,58,168,186,180,150,28,115,87,93,192,146,99,143,130,92,19,121,193,158,181,56}, // permutation 1
{171,126,174,45,129,19,81,115,127,85,49,169,106,138,132,199,121,128,176,61,120,136,93,165,83,163,43,4,198,25,96,24,153,189,94,178,101,33,125,180,58,182,195,116,86,119,40,166,27,47,122,170,18,88,104,134,77,62,42,97,30,28,99,36,15,12,48,111,6,143,102,98,64,1,124,55,74,172,76,141,145,32,192,84,78,50,92,82,46,52,123,177,155,73,114,34,71,69,70,87,131,150,13,151,149,185,147,39,68,161,152,191,14,63,194,133,60,159,9,90,20,57,56,181,35,117,167,112,105,162,154,23,8,156,184,91,175,168,190,38,75,139,107,179,100,188,173,196,103,67,118,110,135,80,144,37,79,54,146,164,186,72,108,5,158,44,113,10,197,65,137,140,7,148,31,29,2,0,157,22,11,53,130,3,17,26,183,21,89,51,66,187,109,41,95,142,160,59,16,193}, // permutation 2
{108,46,113,197,188,78,60,44,152,17,160,143,107,70,140,4,39,153,15,148,14,165,27,133,98,167,116,16,137,83,171,53,124,111,43,102,67,99,42,192,68,87,57,125,55,88,65,58,103,173,181,134,37,61,28,112,135,179,150,198,104,186,71,114,96,109,105,30,132,191,36,95,117,94,81,184,45,123,100,73,10,69,195,130,12,187,9,138,157,85,49,24,35,11,147,79,32,190,91,3,121,158,13,25,120,56,29,110,101,75,92,22,50,34,18,66,52,40,139,144,76,90,199,5,47,33,156,19,2,176,72,169,185,151,74,86,183,20,162,7,146,193,8,189,168,62,175,129,174,26,106,136,48,178,23,155,63,127,166,196,1,163,118,64,172,6,41,115,51,177,154,128,159,89,82,131,93,161,59,182,194,31,80,164,170,38,122,97,126,0,141,54,84,145,77,149,180,142,21,119}, // permutation 3
{197,195,17,21,95,43,35,146,185,53,63,177,82,44,136,99,196,134,69,143,117,149,164,89,151,172,94,71,58,179,9,14,81,22,156,60,56,64,62,188,27,155,16,67,34,11,139,131,54,76,38,142,97,132,39,108,170,192,110,112,48,83,13,55,50,86,145,190,171,75,3,23,128,198,68,88,104,29,183,2,45,40,73,31,189,28,98,175,33,26,105,138,157,159,182,194,109,169,125,32,137,84,120,51,184,80,36,12,166,5,158,119,7,116,93,187,167,133,130,165,15,0,147,181,70,85,160,168,66,42,74,152,148,10,106,41,25,30,57,78,121,150,92,176,178,199,113,162,129,153,49,144,20,114,180,96,90,102,111,193,59,154,87,77,115,123,19,135,161,118,140,127,191,91,37,126,122,6,173,4,101,79,107,163,186,1,18,8,61,124,47,72,46,103,65,52,174,100,24,141}, // permutation 4
{111,88,180,150,152,42,186,133,94,50,97,181,117,65,104,126,134,61,85,6,67,33,20,148,170,83,138,10,87,167,118,60,12,171,174,101,155,29,37,191,106,13,71,73,98,108,193,92,2,175,188,69,147,66,151,52,145,35,105,164,18,183,109,172,14,141,46,131,22,137,153,96,176,132,125,103,1,158,196,36,51,192,165,185,146,31,179,136,128,197,53,99,135,0,157,3,163,102,162,142,189,160,39,112,45,168,21,119,54,161,58,4,74,49,123,19,79,177,199,144,124,57,182,195,5,190,40,76,30,114,91,55,77,116,82,80,68,95,15,41,25,194,8,75,26,11,47,28,56,113,72,38,90,120,7,115,62,86,34,93,110,100,70,81,24,44,149,107,89,17,143,48,78,16,169,43,187,156,139,84,140,173,122,59,184,23,64,63,159,121,154,27,166,127,198,178,9,32,130,129}, // permutation 5
{79,197,161,75,117,159,88,115,59,152,69,45,76,179,143,99,47,142,14,128,177,164,118,43,25,53,24,109,141,120,35,171,146,113,18,155,85,107,16,49,163,133,12,129,170,9,138,188,36,11,144,124,126,21,19,41,139,103,135,193,132,74,158,61,102,181,57,186,68,123,73,196,77,3,106,13,199,2,58,185,178,92,110,37,15,166,100,119,175,32,87,96,134,95,114,154,54,98,44,17,192,38,34,80,86,94,104,167,187,7,33,63,31,78,22,122,160,169,91,66,183,48,26,145,148,27,180,5,137,127,4,162,105,39,29,71,30,72,153,84,182,125,176,8,168,46,40,67,172,51,28,157,42,64,90,140,1,194,173,165,195,55,131,81,150,56,156,50,82,97,112,130,65,89,151,111,0,136,20,147,190,198,149,23,93,60,184,108,52,101,10,6,62,121,83,189,70,174,191,116}, // permutation 6
{60,187,0,5,2,179,69,36,194,120,110,34,168,157,42,70,173,55,197,162,86,185,17,161,73,50,71,107,24,132,96,81,16,67,87,56,1,80,26,169,93,25,129,191,196,94,150,62,195,108,27,184,51,135,90,77,166,61,106,22,74,13,101,68,144,186,175,65,58,41,3,40,125,28,117,127,198,83,100,85,167,109,123,21,46,156,137,121,19,32,189,183,154,159,122,82,18,149,124,192,136,182,181,44,43,37,72,97,53,4,188,10,180,146,75,176,131,105,66,9,63,14,54,143,8,118,76,134,99,7,92,151,20,23,6,133,163,89,39,15,141,104,165,98,38,59,171,174,103,48,11,155,88,112,178,113,79,45,31,115,160,64,116,95,33,140,91,142,47,199,172,57,193,158,138,139,164,30,35,102,145,170,84,177,78,152,114,119,111,153,128,147,148,29,126,130,190,12,49,52}, // permutation 7
{84,64,78,124,72,6,82,23,94,132,34,123,20,130,25,185,197,97,85,179,113,68,66,15,127,190,105,182,45,76,4,141,161,9,195,155,121,98,177,5,32,172,134,93,117,89,67,111,12,18,71,142,151,3,50,10,47,144,138,14,119,74,135,175,187,13,95,167,192,88,180,57,116,33,21,152,158,2,191,60,174,55,193,150,79,65,162,24,139,104,29,164,133,19,165,145,36,87,62,126,46,56,166,194,8,112,181,156,69,51,52,91,168,147,90,22,27,183,40,48,99,100,83,184,31,54,81,109,28,159,120,16,115,114,49,137,7,110,11,154,35,131,178,136,43,0,146,171,153,196,41,26,103,101,30,37,176,169,129,128,108,170,106,73,58,96,42,118,80,17,59,160,1,163,186,198,107,173,148,61,77,86,149,44,75,140,70,102,188,199,157,92,125,189,53,63,122,39,143,38}, // permutation 8
{125,171,80,72,11,88,18,139,126,148,37,12,66,82,166,45,33,118,51,193,161,100,172,24,151,62,20,23,98,58,108,121,197,6,162,39,128,138,86,15,36,116,76,47,141,81,159,22,17,170,96,149,110,160,181,79,131,9,165,146,8,54,74,174,145,68,130,177,34,28,104,199,63,134,173,50,142,175,1,5,127,60,43,185,19,124,191,107,178,109,105,190,7,156,123,157,153,29,73,119,30,132,2,198,95,155,38,164,97,4,196,78,103,46,26,122,90,111,49,35,25,192,106,61,48,3,158,10,113,85,186,102,179,77,83,135,183,182,93,194,92,64,147,53,57,163,140,87,195,154,40,32,189,41,150,101,67,65,59,89,27,137,114,184,14,169,21,42,70,91,16,115,188,84,167,168,0,129,133,99,56,120,187,31,69,176,94,180,71,75,55,136,13,112,52,152,117,144,143,44} // permutation 9
};

// Seed: 1798056741

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int16_t  f0;
   int64_t  f1;
   int32_t  f2;
   uint32_t  f3;
   uint32_t  f4;
};

union U1 {
   int32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   volatile int32_t  f3;
};

union U2 {
   volatile uint16_t  f0;
   int64_t  f1;
   uint32_t  f2;
};

union U3 {
   volatile uint16_t  f0;
};

struct S4 {
    int32_t g_6;
    int32_t *g_381;
    int32_t **g_380;
    union U0 g_389;
    union U0 *g_388;
    uint8_t g_412;
    VECTOR(int16_t, 2) g_414;
    volatile VECTOR(int16_t, 2) g_415;
    union U3 *g_420;
    uint32_t g_431;
    uint64_t g_457;
    VECTOR(uint64_t, 4) g_462;
    union U0 *g_466;
    VECTOR(uint32_t, 8) g_481;
    uint64_t g_489;
    uint64_t g_491;
    uint16_t g_493;
    volatile uint32_t g_554;
    uint32_t *g_564[4][1][2];
    uint32_t ** volatile g_563;
    union U3 g_618;
    VECTOR(uint32_t, 8) g_630;
    volatile union U1 g_638[6];
    int32_t g_649;
    volatile VECTOR(int32_t, 4) g_650;
    union U3 g_659[6][5][3];
    volatile VECTOR(uint32_t, 2) g_660;
    int8_t g_673;
    union U3 g_685;
    union U3 g_696;
    VECTOR(int8_t, 4) g_711;
    int64_t g_732;
    volatile VECTOR(int32_t, 2) g_740;
    VECTOR(int8_t, 16) g_760;
    VECTOR(uint16_t, 2) g_771;
    VECTOR(uint32_t, 8) g_782;
    VECTOR(uint64_t, 2) g_785;
    union U3 g_788[4];
    volatile VECTOR(int32_t, 4) g_800;
    union U1 g_818;
    union U1 *g_820[8][6][1];
    union U1 ** volatile g_819;
    int64_t g_825;
    volatile VECTOR(uint32_t, 16) g_834;
    VECTOR(int8_t, 16) g_838;
    VECTOR(int8_t, 16) g_844;
    int16_t *g_873;
    volatile union U3 g_877;
    volatile VECTOR(int32_t, 4) g_878;
    union U1 g_881;
    union U2 g_889;
    volatile union U0 g_899;
    union U1 g_921;
    VECTOR(uint64_t, 2) g_923;
    VECTOR(int8_t, 2) g_926;
    VECTOR(int8_t, 8) g_928;
    VECTOR(int32_t, 4) g_937;
    VECTOR(uint8_t, 2) g_952;
    VECTOR(uint32_t, 2) g_975;
    union U1 g_976;
    VECTOR(uint64_t, 2) g_977;
    int32_t g_979[4];
    VECTOR(int16_t, 16) g_983;
    volatile union U1 g_984;
    union U2 *g_1051;
    union U1 g_1054[2][10][6];
    uint64_t g_1061;
    uint32_t g_1104;
    volatile union U1 g_1111;
    volatile union U3 g_1121[10][3][2];
    int32_t *g_1126;
    int32_t ** volatile g_1125[3];
    union U0 g_1143;
    int8_t *g_1156[4];
    int64_t *g_1169;
    int64_t **g_1168[5][7];
    int64_t *** volatile g_1167;
    int8_t g_1171;
    volatile VECTOR(uint8_t, 8) g_1175;
    VECTOR(int64_t, 8) g_1182;
    VECTOR(int16_t, 4) g_1191;
    union U2 **g_1196;
    int32_t * volatile g_1211;
    int32_t g_1219;
    volatile uint64_t g_1227;
    volatile VECTOR(uint64_t, 16) g_1231;
    VECTOR(uint64_t, 2) g_1233;
    VECTOR(uint32_t, 16) g_1244;
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
uint16_t  func_1(struct S4 * p_1251);
int32_t * func_2(int32_t * p_3, int32_t * p_4, struct S4 * p_1251);
union U0  func_368(int32_t * p_369, union U0 * p_370, struct S4 * p_1251);
int32_t * func_371(int32_t ** p_372, struct S4 * p_1251);
int32_t ** func_373(uint8_t  p_374, uint64_t  p_375, uint64_t  p_376, int32_t ** p_377, struct S4 * p_1251);
int32_t  func_382(union U0 * p_383, uint64_t  p_384, int8_t  p_385, uint64_t  p_386, uint32_t  p_387, struct S4 * p_1251);
uint64_t  func_390(uint64_t  p_391, int32_t  p_392, struct S4 * p_1251);
int64_t  func_395(int32_t  p_396, struct S4 * p_1251);
uint8_t  func_399(union U3 * p_400, struct S4 * p_1251);
union U3 * func_401(int8_t  p_402, int64_t  p_403, uint64_t  p_404, uint32_t  p_405, union U0 * p_406, struct S4 * p_1251);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1251->l_comm_values p_1251->g_6 p_1251->g_comm_values p_1251->g_380 p_1251->g_381 p_1251->g_388 p_1251->g_412 p_1251->g_414 p_1251->g_415 p_1251->g_389.f0 p_1251->g_420 p_1251->g_431 p_1251->g_389.f2 p_1251->g_457 p_1251->g_462 p_1251->g_489 p_1251->g_493 p_1251->g_389.f3 p_1251->g_481 p_1251->g_491 p_1251->g_554 p_1251->g_563 p_1251->g_618 p_1251->g_630 p_1251->g_564 p_1251->g_638 p_1251->g_389.f1 p_1251->g_649 p_1251->g_650 p_1251->g_659 p_1251->g_660 p_1251->g_673 p_1251->g_685 p_1251->g_740 p_1251->g_760 p_1251->g_711 p_1251->g_771 p_1251->g_782 p_1251->g_785 p_1251->g_788 p_1251->g_800 p_1251->g_819 p_1251->g_825 p_1251->g_685.f0 p_1251->g_834 p_1251->g_838 p_1251->g_844 p_1251->g_873 p_1251->g_877 p_1251->g_466 p_1251->g_389 p_1251->g_878 p_1251->g_881.f2 p_1251->g_889.f1 p_1251->g_899 p_1251->g_921 p_1251->g_923 p_1251->g_926 p_1251->g_928 p_1251->g_937 p_1251->g_976 p_1251->g_979 p_1251->g_984 p_1251->g_952 p_1251->g_975 p_1251->g_1054 p_1251->g_984.f0 p_1251->g_1061 p_1251->g_818.f0 p_1251->g_820 p_1251->g_1104 p_1251->g_1111 p_1251->g_983 p_1251->g_1126 p_1251->g_881.f1 p_1251->g_1167 p_1251->g_1143 p_1251->g_1171 p_1251->g_921.f2 p_1251->g_1196 p_1251->g_1182 p_1251->g_1211 p_1251->g_1227 p_1251->g_977 p_1251->g_1051 p_1251->g_889 p_1251->g_1231 p_1251->g_1233 p_1251->g_1244
 * writes: p_1251->g_6 p_1251->g_412 p_1251->g_420 p_1251->g_431 p_1251->g_389.f2 p_1251->g_457 p_1251->g_466 p_1251->g_481 p_1251->g_489 p_1251->g_491 p_1251->g_493 p_1251->g_389.f3 p_1251->g_554 p_1251->g_389.f1 p_1251->g_381 p_1251->g_649 p_1251->g_673 p_1251->g_638.f2 p_1251->g_820 p_1251->g_825 p_1251->g_818.f0 p_1251->g_881.f2 p_1251->g_889.f1 p_1251->g_1051 p_1251->g_1061 p_1251->g_1104 p_1251->g_976.f2 p_1251->g_881.f1 p_1251->g_1156 p_1251->g_1168 p_1251->g_1171 p_1251->g_921.f2 p_1251->g_732 p_1251->g_1219
 */
uint16_t  func_1(struct S4 * p_1251)
{ /* block id: 4 */
    int32_t *l_5 = &p_1251->g_6;
    int32_t **l_361 = &l_5;
    union U0 *l_1142 = &p_1251->g_1143;
    int8_t *l_1170 = &p_1251->g_1171;
    int64_t l_1172 = 0x4454577D920BC30CL;
    int32_t l_1210 = 0x601C645CL;
    uint64_t l_1228 = 0x4F7712D4979D445CL;
    VECTOR(uint64_t, 8) l_1230 = (VECTOR(uint64_t, 8))(18446744073709551610UL, (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 0xAC6717B21238504CL), 0xAC6717B21238504CL), 0xAC6717B21238504CL, 18446744073709551610UL, 0xAC6717B21238504CL);
    VECTOR(int16_t, 2) l_1236 = (VECTOR(int16_t, 2))(0x2F5FL, 0x7B1AL);
    int32_t *l_1238 = &p_1251->g_818.f0;
    int32_t **l_1237 = &l_1238;
    int i;
    (*l_361) = func_2(l_5, &p_1251->g_6, p_1251);
    (*p_1251->g_1126) = (safe_mod_func_int64_t_s_s((~(safe_rshift_func_int8_t_s_u((l_1172 = ((*l_1170) ^= (safe_sub_func_int8_t_s_s(0x59L, (((p_1251->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1251->tid, 200))] , p_1251->g_6) < (**l_361)) || ((0x6D6353891C05EF8CL >= (+((func_368(func_2(func_2(func_371(func_373(p_1251->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1251->tid, 200))], (((*l_5) , (*l_5)) , ((safe_sub_func_int8_t_s_s(((**l_361) || (**l_361)), 0x73L)) >= p_1251->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1251->tid, 200))])), p_1251->g_comm_values[p_1251->tid], p_1251->g_380, p_1251), p_1251), (*l_361), p_1251), (*l_361), p_1251), l_1142, p_1251) , (**l_361)) , p_1251->g_785.y))) <= GROUP_DIVERGE(1, 1))))))), p_1251->g_785.y))), 0x255FE5B9C80CF4FFL));
    for (p_1251->g_921.f2 = 0; (p_1251->g_921.f2 <= 15); p_1251->g_921.f2 = safe_add_func_uint32_t_u_u(p_1251->g_921.f2, 3))
    { /* block id: 583 */
        VECTOR(int16_t, 16) l_1192 = (VECTOR(int16_t, 16))(0x0605L, (VECTOR(int16_t, 4))(0x0605L, (VECTOR(int16_t, 2))(0x0605L, 0x708BL), 0x708BL), 0x708BL, 0x0605L, 0x708BL, (VECTOR(int16_t, 2))(0x0605L, 0x708BL), (VECTOR(int16_t, 2))(0x0605L, 0x708BL), 0x0605L, 0x708BL, 0x0605L, 0x708BL);
        int64_t *l_1193 = &p_1251->g_732;
        uint64_t *l_1197 = (void*)0;
        uint64_t *l_1198 = &p_1251->g_457;
        uint32_t *l_1199 = (void*)0;
        uint32_t *l_1200 = (void*)0;
        uint32_t *l_1201 = (void*)0;
        uint32_t *l_1202 = (void*)0;
        uint32_t *l_1203 = (void*)0;
        uint32_t *l_1204 = (void*)0;
        uint32_t *l_1205[7];
        int32_t l_1206 = 0x1EAFF79DL;
        uint16_t *l_1207[9] = {&p_1251->g_493,(void*)0,&p_1251->g_493,&p_1251->g_493,(void*)0,&p_1251->g_493,&p_1251->g_493,(void*)0,&p_1251->g_493};
        int64_t *l_1208 = (void*)0;
        int64_t *l_1209 = &p_1251->g_389.f1;
        int32_t *l_1218 = &p_1251->g_1219;
        uint32_t l_1222[3];
        VECTOR(uint64_t, 4) l_1229 = (VECTOR(uint64_t, 4))(0x53714BFFFC0125CAL, (VECTOR(uint64_t, 2))(0x53714BFFFC0125CAL, 5UL), 5UL);
        VECTOR(uint64_t, 2) l_1232 = (VECTOR(uint64_t, 2))(18446744073709551613UL, 0xCBC10AC238754072L);
        int32_t **l_1239[6] = {&l_1238,&l_1238,&l_1238,&l_1238,&l_1238,&l_1238};
        int i;
        for (i = 0; i < 7; i++)
            l_1205[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_1222[i] = 0x6570EAB3L;
        (*p_1251->g_1211) = (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1251->g_1175.s75047421)).s2271005527162545)).sf & (((*l_1209) = (safe_div_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((((**l_361) = (((safe_mod_func_int64_t_s_s((((**l_361) , ((VECTOR(int64_t, 8))(p_1251->g_1182.s61475663)).s0) >= (safe_sub_func_int16_t_s_s(p_1251->g_489, (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((((((((*l_1193) = (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))(p_1251->g_1191.zz)).xxxxyyxy, ((VECTOR(int16_t, 4))(l_1192.s69f3)).xxxywwxx))).s2, 0L))) >= 5UL) && (safe_rshift_func_int8_t_s_s((l_1192.sd <= (l_1192.s4 == 0xE686D031EB3236A2L)), l_1192.s8))) || (l_1206 ^= (((*l_1198) |= ((void*)0 != p_1251->g_1196)) >= p_1251->g_1182.s6))) < 0x39B1L) != l_1192.sb), 0x3614L)), 15))))), 0x340D7E66E8BF67D5L)) && 0x7BA3C5B955FB1E33L) >= p_1251->g_630.s7)) > l_1192.s0), 3)) < p_1251->g_844.s5), l_1192.s3))) , l_1210));
        (*l_5) = (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s(p_1251->g_481.s2, (((((*l_1218) = p_1251->g_926.x) , (safe_mul_func_int8_t_s_s((~l_1222[2]), ((((VECTOR(int8_t, 4))((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((p_1251->g_1227 , p_1251->g_650.y), ((&p_1251->g_732 == (void*)0) == FAKE_DIVERGE(p_1251->local_1_offset, get_local_id(1), 10)))) <= (0x13L == p_1251->g_977.x)), 1L)), l_1228, 0x2EL, (-1L))).z && l_1192.s0) , l_1222[0])))) < p_1251->g_977.y) || (**l_361)))), (**l_361))), 0x7AL));
        (*l_5) = (((*p_1251->g_1051) , (((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 2))(0xA89AE84A9E9447DCL, 0x156497D9EEB9E246L)), ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_1229.yxwwzwzxwywwzwxy)).sb2)), ((VECTOR(uint64_t, 2))(l_1230.s66)), ((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 8))(p_1251->g_1231.s4c06171a)).s2121421712207072, ((VECTOR(uint64_t, 16))(abs(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 8))(l_1232.xxxyyxyy)).s35, ((VECTOR(uint64_t, 8))(p_1251->g_1233.yxxxxxyy)).s15))).xxyyxyxxxyxxyyxy)).even)).s3237153331231012)))))).s40))), 18446744073709551606UL, 1UL)), 0xA1E9E774459880DFL, (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 8))(l_1236.yyxyyxxx)).s4, ((*l_5) >= ((l_1237 == l_1239[2]) , ((safe_div_func_int8_t_s_s(((((((VECTOR(uint32_t, 2))(p_1251->g_1244.se1)).hi ^ (&p_1251->g_1171 == (void*)0)) || ((**l_361) , (safe_mul_func_uint8_t_u_u((((((safe_rshift_func_uint16_t_u_s(7UL, 8)) != (+(safe_sub_func_uint8_t_u_u((&l_1142 == (void*)0), 0x87L)))) < l_1229.y) <= (*p_1251->g_1126)) , 0xE3L), p_1251->g_923.x)))) ^ l_1206) ^ 1UL), l_1206)) > l_1229.w))))), 0x99FAC0783D63BD78L, 18446744073709551606UL)).odd))), ((VECTOR(uint64_t, 4))(0x1A9F51525DE6F525L)), ((VECTOR(uint64_t, 4))(0UL))))).lo))).even != p_1251->g_389.f1)) | 0L);
    }
    return p_1251->g_1104;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_2(int32_t * p_3, int32_t * p_4, struct S4 * p_1251)
{ /* block id: 5 */
    if ((atomic_inc(&p_1251->l_atomic_input[12]) == 6))
    { /* block id: 7 */
        int32_t l_7 = 1L;
        uint32_t l_8 = 4294967289UL;
        int8_t l_9 = 0L;
        int32_t l_10[7][4];
        VECTOR(uint8_t, 8) l_11 = (VECTOR(uint8_t, 8))(0x3FL, (VECTOR(uint8_t, 4))(0x3FL, (VECTOR(uint8_t, 2))(0x3FL, 0xC8L), 0xC8L), 0xC8L, 0x3FL, 0xC8L);
        int32_t l_12 = 0x00F885BDL;
        VECTOR(uint8_t, 2) l_13 = (VECTOR(uint8_t, 2))(255UL, 4UL);
        VECTOR(uint8_t, 4) l_14 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 250UL), 250UL);
        uint16_t l_15 = 0x2AD0L;
        VECTOR(int64_t, 2) l_16 = (VECTOR(int64_t, 2))(0x440E708BEE6DABACL, 0x734EA885C82F744EL);
        int64_t l_17 = (-10L);
        VECTOR(int16_t, 16) l_18 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x4BADL), 0x4BADL), 0x4BADL, 1L, 0x4BADL, (VECTOR(int16_t, 2))(1L, 0x4BADL), (VECTOR(int16_t, 2))(1L, 0x4BADL), 1L, 0x4BADL, 1L, 0x4BADL);
        VECTOR(int16_t, 8) l_19 = (VECTOR(int16_t, 8))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x5879L), 0x5879L), 0x5879L, (-5L), 0x5879L);
        VECTOR(uint8_t, 16) l_20 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL, 255UL, 255UL, 255UL);
        int8_t l_21 = 0x05L;
        uint32_t l_22 = 0x7B34174AL;
        int32_t l_23 = 0x762392E1L;
        int32_t l_24 = 8L;
        int16_t l_25 = (-10L);
        int16_t l_26 = (-8L);
        uint32_t l_27 = 0UL;
        uint8_t l_28[10] = {255UL,9UL,0x09L,9UL,255UL,255UL,9UL,0x09L,9UL,255UL};
        uint8_t l_29 = 8UL;
        VECTOR(uint8_t, 8) l_30 = (VECTOR(uint8_t, 8))(0xFAL, (VECTOR(uint8_t, 4))(0xFAL, (VECTOR(uint8_t, 2))(0xFAL, 0x8EL), 0x8EL), 0x8EL, 0xFAL, 0x8EL);
        VECTOR(uint8_t, 8) l_31 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x23L), 0x23L), 0x23L, 1UL, 0x23L);
        VECTOR(uint8_t, 2) l_32 = (VECTOR(uint8_t, 2))(0xD3L, 0xE8L);
        uint32_t l_33 = 4294967290UL;
        uint32_t l_34 = 0x584F79AAL;
        uint64_t l_352 = 18446744073709551610UL;
        uint32_t l_353 = 0x1BFC9C5FL;
        int8_t l_354 = 3L;
        int32_t l_355 = 0x3F107B4EL;
        int16_t l_356 = 0L;
        int64_t l_357 = 0x58B86F09D2878E20L;
        uint64_t l_358 = 8UL;
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 4; j++)
                l_10[i][j] = 1L;
        }
        l_10[3][1] |= (l_9 = (l_8 = l_7));
        if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x7145BA13L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(0x230A4CCFL, 0x6C4A87FCL)).xxyy, (int32_t)(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 2))(l_11.s55)).xxxy, ((VECTOR(uint8_t, 8))(0x01L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_12, 0xA2L, ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(l_13.yyxy)), ((VECTOR(uint8_t, 16))(l_14.wywzyzxwzwzwzwzx)).s25ec))))).even)), ((VECTOR(uint8_t, 8))(l_15, 0xB0L, (((VECTOR(int64_t, 4))(l_16.yxyx)).x , l_17), (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))((-10L), ((VECTOR(int16_t, 2))(l_18.sbe)), 0x7127L)))).w, ((VECTOR(int16_t, 2))(l_19.s22)), ((VECTOR(int16_t, 4))(0x2E69L, 1L, 0x54DBL, (-1L))), 0x7850L)).s2 , GROUP_DIVERGE(0, 1)), 0x1AL, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 16))(l_20.sb06a83cd0cd8a6ce)), ((VECTOR(uint8_t, 8))(0UL, 0xC8L, 0x69L, 0xE8L, 253UL, 3UL, 0UL, 8UL)).s2154761061002746))).even)), ((l_25 = (l_24 = (l_23 |= (l_21 , (l_22 ^= 0x3D28A218L))))) , (l_27 = l_26)), 0x45L, l_28[3], (l_29 = GROUP_DIVERGE(0, 1)), 9UL, ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 16))(l_30.s5747207607136310)).sc3, ((VECTOR(uint8_t, 4))(l_31.s3416)).odd, ((VECTOR(uint8_t, 2))(l_32.yx))))), 253UL)).s5, 8UL, 0x79L)).s01))), 2UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_33, ((VECTOR(uint8_t, 2))(0x1FL)), 255UL)).odd)), 7UL)).lo)), ((VECTOR(uint8_t, 2))(0x99L)), 255UL)).even))), ((VECTOR(uint8_t, 8))(0x61L)), ((VECTOR(uint8_t, 4))(0xB9L)))).s9 , l_34)))).lo, ((VECTOR(int32_t, 2))(0x66354922L))))))))), 0x787D1A38L, ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 2))(0x663317A7L)), 0x59A1248FL, 1L)).sbb)).odd)
        { /* block id: 17 */
            int32_t l_35 = (-1L);
            VECTOR(int32_t, 2) l_36 = (VECTOR(int32_t, 2))(0x70EAE325L, (-2L));
            VECTOR(int32_t, 8) l_37 = (VECTOR(int32_t, 8))(0x7F541EDFL, (VECTOR(int32_t, 4))(0x7F541EDFL, (VECTOR(int32_t, 2))(0x7F541EDFL, 0x7EAA3CE9L), 0x7EAA3CE9L), 0x7EAA3CE9L, 0x7F541EDFL, 0x7EAA3CE9L);
            VECTOR(int32_t, 8) l_38 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x6F089E30L), 0x6F089E30L), 0x6F089E30L, 6L, 0x6F089E30L);
            VECTOR(int32_t, 4) l_39 = (VECTOR(int32_t, 4))(0x536D0B4EL, (VECTOR(int32_t, 2))(0x536D0B4EL, 0x5501D2D5L), 0x5501D2D5L);
            VECTOR(int32_t, 16) l_40 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
            VECTOR(int32_t, 2) l_41 = (VECTOR(int32_t, 2))(0x1AB98CFEL, 8L);
            VECTOR(int32_t, 4) l_42 = (VECTOR(int32_t, 4))(0x65F641D3L, (VECTOR(int32_t, 2))(0x65F641D3L, 0L), 0L);
            VECTOR(int32_t, 16) l_43 = (VECTOR(int32_t, 16))(0x1DD98AE1L, (VECTOR(int32_t, 4))(0x1DD98AE1L, (VECTOR(int32_t, 2))(0x1DD98AE1L, 0x37114C0AL), 0x37114C0AL), 0x37114C0AL, 0x1DD98AE1L, 0x37114C0AL, (VECTOR(int32_t, 2))(0x1DD98AE1L, 0x37114C0AL), (VECTOR(int32_t, 2))(0x1DD98AE1L, 0x37114C0AL), 0x1DD98AE1L, 0x37114C0AL, 0x1DD98AE1L, 0x37114C0AL);
            VECTOR(int32_t, 4) l_44 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x505CE631L), 0x505CE631L);
            VECTOR(int32_t, 8) l_45 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6175A398L), 0x6175A398L), 0x6175A398L, (-1L), 0x6175A398L);
            uint32_t l_46[2][2] = {{0x23C0F0EFL,0x23C0F0EFL},{0x23C0F0EFL,0x23C0F0EFL}};
            VECTOR(int32_t, 4) l_47 = (VECTOR(int32_t, 4))(0x5280D01BL, (VECTOR(int32_t, 2))(0x5280D01BL, 0x7CC60535L), 0x7CC60535L);
            uint8_t l_48 = 1UL;
            VECTOR(int32_t, 8) l_49 = (VECTOR(int32_t, 8))(0x2A51D28AL, (VECTOR(int32_t, 4))(0x2A51D28AL, (VECTOR(int32_t, 2))(0x2A51D28AL, (-1L)), (-1L)), (-1L), 0x2A51D28AL, (-1L));
            uint32_t l_50 = 0x5F853116L;
            VECTOR(int16_t, 4) l_51 = (VECTOR(int16_t, 4))(0x1F35L, (VECTOR(int16_t, 2))(0x1F35L, 1L), 1L);
            uint16_t l_52 = 65530UL;
            uint32_t l_53 = 4294967295UL;
            VECTOR(int32_t, 2) l_54 = (VECTOR(int32_t, 2))(0x1089BBD4L, 0x6E522820L);
            VECTOR(int32_t, 8) l_55 = (VECTOR(int32_t, 8))(0x08EB45E8L, (VECTOR(int32_t, 4))(0x08EB45E8L, (VECTOR(int32_t, 2))(0x08EB45E8L, 1L), 1L), 1L, 0x08EB45E8L, 1L);
            int16_t l_56 = (-1L);
            VECTOR(int32_t, 2) l_57 = (VECTOR(int32_t, 2))(0x12DCF94CL, 0x2A1209A5L);
            int64_t l_58 = 0x6CA5129FF954D451L;
            uint32_t l_59 = 0x699D302DL;
            union U1 l_60 = {0x72DAC479L};/* VOLATILE GLOBAL l_60 */
            uint16_t l_61 = 0x8CC4L;
            int64_t l_62 = (-7L);
            uint64_t l_63 = 0UL;
            uint8_t l_64 = 255UL;
            uint16_t l_137 = 1UL;
            int i, j;
            l_10[3][1] &= l_35;
            if (((VECTOR(int32_t, 16))(0x4FF42703L, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(l_36.xxyy)), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_37.s5133243216733122)).s88, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_38.s41)).xxyx)).hi, ((VECTOR(int32_t, 8))(l_39.wzyzwzxz)).s32))).xyxx))).yxwxzzzw)).s41)), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(0x5C1C47F9L, 0x6FA6B6B0L, (-1L), 0x3E9F7A6BL)), ((VECTOR(int32_t, 8))(l_40.sb02d3770)).even))).hi, ((VECTOR(int32_t, 2))(l_41.xx))))), ((VECTOR(int32_t, 4))(l_42.xzwy)), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(l_43.scf258fd7cb4e35ee)).s06f6, ((VECTOR(int32_t, 8))(l_44.yzyyxwyw)).even))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_45.s1555071067244641)).s92d0)).odd)).yxyy)))).s2f, ((VECTOR(int32_t, 16))((l_10[1][0] = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x75641E62L, 0L)), (-7L), (-1L))), l_46[1][0], 0x323D7FF4L, 0x6B01B519L, 0x197FD74DL)).s4), 0x2C1E63FDL, ((VECTOR(int32_t, 2))(l_47.wz)), ((VECTOR(int32_t, 4))(0x3FFCED71L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(0x05658C46L, l_48, (-9L), 0x21C45DBDL)).lo, ((VECTOR(int32_t, 4))(l_49.s0730)).odd))), 0L)), l_50, (l_52 = l_51.z), l_53, 0x5D4CC67FL, (-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_54.xx)))), 0L)).sda))), ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(l_55.s2720)), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((-9L), 0x0370F7B9L, 0x6C411819L, 0x2C353B00L)), l_56, 6L, 0x259F99B6L, (-5L))).s61, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_57.xx)), 1L, (-2L))).odd))).yxxx))), ((l_58 , ((l_22 = l_59) , l_60)) , l_61), l_62, ((VECTOR(int32_t, 4))(5L)), ((VECTOR(int32_t, 4))(0x087C3A5CL)), 0x2F5847AAL, 0x74FB9E1BL)), ((VECTOR(int32_t, 16))(0L))))).s6c)), ((VECTOR(int32_t, 2))(1L))))).xxxx, ((VECTOR(int32_t, 4))((-1L)))))), ((VECTOR(int32_t, 2))(0x083AED21L)), 8L, (-1L), (-8L), l_63, l_64, 5L, (-1L))).s5)
            { /* block id: 22 */
                int32_t l_66[1];
                int32_t *l_65 = &l_66[0];
                int32_t *l_67 = &l_66[0];
                int32_t *l_68 = &l_66[0];
                int i;
                for (i = 0; i < 1; i++)
                    l_66[i] = (-6L);
                l_68 = (l_67 = l_65);
                for (l_66[0] = 0; (l_66[0] != 17); l_66[0]++)
                { /* block id: 27 */
                    VECTOR(uint32_t, 4) l_71 = (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 0UL), 0UL);
                    VECTOR(uint32_t, 4) l_72 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x2C8C0895L), 0x2C8C0895L);
                    VECTOR(uint32_t, 16) l_73 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4UL), 4UL), 4UL, 4294967295UL, 4UL, (VECTOR(uint32_t, 2))(4294967295UL, 4UL), (VECTOR(uint32_t, 2))(4294967295UL, 4UL), 4294967295UL, 4UL, 4294967295UL, 4UL);
                    int8_t l_74 = 0x68L;
                    int16_t l_75 = 0x59A3L;
                    VECTOR(int32_t, 8) l_76 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x6AD03787L), 0x6AD03787L), 0x6AD03787L, (-7L), 0x6AD03787L);
                    uint32_t l_77 = 1UL;
                    int32_t l_78 = (-1L);
                    VECTOR(int32_t, 4) l_79 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
                    VECTOR(int32_t, 4) l_80 = (VECTOR(int32_t, 4))(0x7C5922DCL, (VECTOR(int32_t, 2))(0x7C5922DCL, 9L), 9L);
                    int16_t l_81 = 1L;
                    int32_t l_82 = 0x3E2ED989L;
                    uint64_t l_83 = 0x3F44D47832723F93L;
                    uint32_t l_84 = 0UL;
                    uint64_t l_85 = 18446744073709551613UL;
                    int32_t l_86 = 6L;
                    uint32_t l_87 = 6UL;
                    uint16_t l_88 = 65528UL;
                    int64_t l_89 = 1L;
                    int32_t l_90 = 0x59690AA6L;
                    int i;
                    l_76.s2 = (((VECTOR(int8_t, 16))(0L, 0x3CL, 0L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(((l_71.z = ((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 2))(0xA61D4119L, 4294967295UL)).yxyx, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(l_71.yxxxyxyw)).s57, ((VECTOR(uint32_t, 8))(0x1FFC78F5L, ((VECTOR(uint32_t, 2))(l_72.wx)), ((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))((-8L), 5L)), ((VECTOR(int32_t, 16))(((l_12 |= (((VECTOR(uint32_t, 4))(l_73.s28a8)).x , l_74)) , 0x4D61D1B0L), l_75, 0x06C71F3EL, ((VECTOR(int32_t, 2))(l_76.s01)), (-1L), (l_40.s3 = (l_78 = l_77)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, (-7L))), 0x7456AEA0L, 0x75F1DF6FL)))), ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(0x4B5F59DFL, 1L)).xxyxxxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x06AF2FFEL, (-7L))))), (-1L), (-1L))).wzxwyyxx, ((VECTOR(int32_t, 8))(l_79.yxxxyzzw))))).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_80.wyyzwyzy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x1A001620L, ((l_62 = (l_16.x ^= ((VECTOR(int64_t, 2))((-1L), 0x01DF02EAEB8C4E8CL)).odd)) , l_81), 0x23A2376BL, 8L)), 5L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((-3L), ((VECTOR(int32_t, 2))(7L, 1L)).odd, 0L, ((l_83 ^= (l_82 , 0x0A84A55BADF4511BL)) , 0L), ((VECTOR(int32_t, 4))(0L)))).odd)), l_84, l_85, 0x6CEAEF97L, ((VECTOR(int32_t, 4))(0x38770095L)), 0x769B8DE4L, 1L, 1L, 0L, (-7L))).sdd)), 1L)), ((VECTOR(int32_t, 8))(0x1C62979EL))))).s22, ((VECTOR(int32_t, 2))(1L))))), 0x75A53A4EL, 0x6D40CDEBL))))), 1L)).s66, ((VECTOR(int32_t, 2))(0x51DE3320L))))).yyxyyxxyyyyxxyyy)).lo, ((VECTOR(int32_t, 8))(4L)), ((VECTOR(int32_t, 8))((-5L)))))), ((VECTOR(int32_t, 8))(0L))))), l_86, 0xABE7F268L, l_87, ((VECTOR(uint32_t, 4))(0x86B6318FL)), 0x4F429261L)).s23d7)), l_88, ((VECTOR(uint32_t, 2))(0xFEE47C6DL)), 0xAD064898L)).lo)), ((VECTOR(uint32_t, 4))(4294967295UL))))), ((VECTOR(uint32_t, 4))(1UL))))), 4294967294UL)).s10))).xyyx, ((VECTOR(uint32_t, 4))(1UL))))).x) , l_89), l_90, 1L, 0x2DL)).even, ((VECTOR(int8_t, 2))(0x27L)), ((VECTOR(int8_t, 2))(0x70L))))), (-1L), 0x20L)).wxyxzzwz)), ((VECTOR(int8_t, 4))(3L)), 1L)).s5 , (-8L));
                }
                for (l_66[0] = 0; (l_66[0] >= 16); l_66[0] = safe_add_func_int64_t_s_s(l_66[0], 1))
                { /* block id: 39 */
                    int8_t l_93[3];
                    int32_t l_94[1];
                    uint32_t l_95 = 0UL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_93[i] = 9L;
                    for (i = 0; i < 1; i++)
                        l_94[i] = 3L;
                    l_95--;
                }
            }
            else
            { /* block id: 42 */
                int32_t l_98 = 1L;
                int8_t l_99 = 0x11L;
                int64_t l_100 = (-1L);
                uint16_t l_101 = 0x4F70L;
                uint64_t l_104 = 0xBE4ED98820683FD9L;
                l_101++;
                l_57.x &= l_104;
                for (l_99 = 10; (l_99 < (-25)); l_99--)
                { /* block id: 47 */
                    VECTOR(int8_t, 8) l_107 = (VECTOR(int8_t, 8))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0x13L), 0x13L), 0x13L, 2L, 0x13L);
                    int32_t l_108 = 0x4B77E744L;
                    uint8_t l_109 = 0xF8L;
                    int i;
                    l_44.w = (l_36.x = (l_107.s1 , l_108));
                    if ((l_40.se = l_109))
                    { /* block id: 51 */
                        VECTOR(int32_t, 2) l_111 = (VECTOR(int32_t, 2))(0x362D161AL, 1L);
                        int32_t *l_110 = (void*)0;
                        uint16_t l_112 = 0x208DL;
                        uint16_t l_113 = 0UL;
                        uint64_t l_114 = 2UL;
                        uint16_t l_115[4][6][6] = {{{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL}},{{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL}},{{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL}},{{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL},{0x383CL,1UL,0xD6D2L,0xDBE0L,65535UL,0x319AL}}};
                        VECTOR(int32_t, 4) l_116 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x20E952B7L), 0x20E952B7L);
                        VECTOR(int32_t, 2) l_117 = (VECTOR(int32_t, 2))((-1L), 0x2B67E062L);
                        VECTOR(int16_t, 4) l_118 = (VECTOR(int16_t, 4))(0x1AE5L, (VECTOR(int16_t, 2))(0x1AE5L, (-10L)), (-10L));
                        VECTOR(uint16_t, 8) l_119 = (VECTOR(uint16_t, 8))(0xAB26L, (VECTOR(uint16_t, 4))(0xAB26L, (VECTOR(uint16_t, 2))(0xAB26L, 1UL), 1UL), 1UL, 0xAB26L, 1UL);
                        VECTOR(int32_t, 16) l_120 = (VECTOR(int32_t, 16))(0x3F6E08B9L, (VECTOR(int32_t, 4))(0x3F6E08B9L, (VECTOR(int32_t, 2))(0x3F6E08B9L, 0x4FD49A66L), 0x4FD49A66L), 0x4FD49A66L, 0x3F6E08B9L, 0x4FD49A66L, (VECTOR(int32_t, 2))(0x3F6E08B9L, 0x4FD49A66L), (VECTOR(int32_t, 2))(0x3F6E08B9L, 0x4FD49A66L), 0x3F6E08B9L, 0x4FD49A66L, 0x3F6E08B9L, 0x4FD49A66L);
                        VECTOR(int32_t, 16) l_121 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-10L)), (-10L)), (-10L), (-1L), (-10L), (VECTOR(int32_t, 2))((-1L), (-10L)), (VECTOR(int32_t, 2))((-1L), (-10L)), (-1L), (-10L), (-1L), (-10L));
                        uint64_t l_122 = 18446744073709551609UL;
                        VECTOR(uint8_t, 2) l_123 = (VECTOR(uint8_t, 2))(252UL, 3UL);
                        VECTOR(int16_t, 4) l_124 = (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 9L), 9L);
                        VECTOR(int16_t, 8) l_125 = (VECTOR(int16_t, 8))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 6L), 6L), 6L, 2L, 6L);
                        int8_t l_126 = 0x39L;
                        uint16_t l_127 = 0xE224L;
                        uint32_t l_128 = 0x9C3896C7L;
                        uint32_t l_129 = 1UL;
                        uint64_t l_130 = 0x1C92445BC35386F4L;
                        int16_t l_131 = (-7L);
                        int i, j, k;
                        l_110 = (void*)0;
                        l_40.s7 = (l_44.y = (l_39.x &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))((l_112 , l_113), 0x6AA3D206L, 0x721655C0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((l_115[2][1][4] ^= (l_114 , 0x107F26B1L)), ((VECTOR(int32_t, 2))(l_116.zy)), 0x5A8641CAL, ((VECTOR(int32_t, 8))(0L, 0x15293983L, ((VECTOR(int32_t, 2))((-8L), 1L)), 0x490B6C89L, 7L, 0x67E3571BL, 0x34B204B1L)), ((VECTOR(int32_t, 4))(l_117.yxxy)))).s31)), 1L, 0x5ED25477L, (-1L))).s63, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(l_118.xz)), ((VECTOR(uint16_t, 2))(l_119.s22))))), ((VECTOR(int32_t, 2))(l_120.sf5)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_121.s9a72)), (-7L), 0x0248992CL, l_122, 1L, (((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_123.xy)), 0xF7L, 0x87L)).zywyzxwz)).s01, ((VECTOR(uint8_t, 2))(0xEAL, 0x7EL))))).xyyxxxxy, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 4))(l_124.xzwy)).odd, ((VECTOR(int16_t, 2))(l_125.s64))))).xxyyxyxy))).s4 , l_126), 0L, 0x4779510EL, l_127, ((VECTOR(int32_t, 4))(6L)))))).s053a)))))).s73))))))), l_128, l_129, 0x2F8298D6L, 0L, l_130, 1L, l_131, 0x45C0E92FL, ((VECTOR(int32_t, 4))(4L)), 0x15934168L, 0L)).s14, ((VECTOR(int32_t, 2))((-1L)))))).xxyxyxyxxxyxyyxx)).se));
                    }
                    else
                    { /* block id: 57 */
                        int16_t l_132 = 0x1A93L;
                        int32_t l_135 = 0x01C1735FL;
                        int32_t *l_134[4] = {&l_135,&l_135,&l_135,&l_135};
                        int32_t **l_133[4];
                        int32_t **l_136 = &l_134[0];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_133[i] = &l_134[2];
                        l_136 = (l_132 , l_133[3]);
                    }
                }
            }
            if (l_137)
            { /* block id: 62 */
                int32_t l_138 = 0x154DCB41L;
                int32_t *l_183 = &l_138;
                int8_t l_184 = 0x77L;
                union U3 l_185[3] = {{1UL},{1UL},{1UL}};
                union U2 l_186[7] = {{0xAD6AL},{0xAD6AL},{0xAD6AL},{0xAD6AL},{0xAD6AL},{0xAD6AL},{0xAD6AL}};
                int i;
                if (l_138)
                { /* block id: 63 */
                    uint64_t l_139 = 1UL;
                    l_41.x |= l_139;
                    for (l_139 = 27; (l_139 >= 48); l_139 = safe_add_func_uint32_t_u_u(l_139, 3))
                    { /* block id: 67 */
                        uint32_t l_142 = 8UL;
                        VECTOR(int32_t, 8) l_145 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0392AC9FL), 0x0392AC9FL), 0x0392AC9FL, 1L, 0x0392AC9FL);
                        uint8_t l_146 = 0x07L;
                        int8_t l_147 = 0x76L;
                        VECTOR(int32_t, 4) l_148 = (VECTOR(int32_t, 4))(0x241FA78DL, (VECTOR(int32_t, 2))(0x241FA78DL, 0x419F2FE9L), 0x419F2FE9L);
                        VECTOR(int32_t, 16) l_149 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 1L), 1L), 1L, (-9L), 1L, (VECTOR(int32_t, 2))((-9L), 1L), (VECTOR(int32_t, 2))((-9L), 1L), (-9L), 1L, (-9L), 1L);
                        uint8_t l_150[3];
                        uint8_t l_153[4] = {0x2CL,0x2CL,0x2CL,0x2CL};
                        VECTOR(int32_t, 16) l_154 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 6L), 6L), 6L, (-2L), 6L, (VECTOR(int32_t, 2))((-2L), 6L), (VECTOR(int32_t, 2))((-2L), 6L), (-2L), 6L, (-2L), 6L);
                        int16_t l_155 = (-1L);
                        VECTOR(int32_t, 8) l_156 = (VECTOR(int32_t, 8))(0x1E831240L, (VECTOR(int32_t, 4))(0x1E831240L, (VECTOR(int32_t, 2))(0x1E831240L, 1L), 1L), 1L, 0x1E831240L, 1L);
                        int16_t l_157[5][10][5] = {{{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L}},{{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L}},{{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L}},{{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L}},{{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L},{(-1L),(-1L),0x3590L,6L,0x6188L}}};
                        VECTOR(int32_t, 4) l_158 = (VECTOR(int32_t, 4))(0x027DA15CL, (VECTOR(int32_t, 2))(0x027DA15CL, 0x3111986FL), 0x3111986FL);
                        VECTOR(int32_t, 2) l_159 = (VECTOR(int32_t, 2))((-1L), 2L);
                        uint16_t l_160 = 0x7F30L;
                        int32_t l_161 = 0x337BC6C6L;
                        int32_t l_162 = 3L;
                        int8_t l_163 = 0L;
                        uint64_t l_164 = 0UL;
                        int64_t l_165 = 9L;
                        int8_t l_166 = 0x79L;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_150[i] = 0x1FL;
                        l_142--;
                        l_38.s2 = ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_145.s6763)).even)).xxxxxyyy, ((VECTOR(int32_t, 8))((l_55.s4 = l_146), 1L, 0x7C9E6460L, 0L, l_147, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_148.yxxz)).odd)), 0L)), ((VECTOR(int32_t, 16))(l_149.s5dd6833591e915d1)).lo))).s0;
                        l_150[2]++;
                        l_36.x &= ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(l_153[2], ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_154.se5)).yxyx, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(0x3852692DL, 0L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x4484BAB3L, 0x2FC61834L, l_155, 0x05E4DA2EL, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(l_156.s2544622765363024)).s4d, (int32_t)(l_148.x = l_157[1][6][0])))), ((VECTOR(int32_t, 4))(l_158.xzzx)), ((VECTOR(int32_t, 2))(l_159.yy)), l_160, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((l_40.sf = l_161), l_162, l_163, l_164, l_165, (-2L), 0x153203D1L, 0L)).s61)).xyyy, ((VECTOR(int32_t, 4))(0x724CDB69L))))))).lo)))), 0L)).s031f)).lo, ((VECTOR(int32_t, 2))((-9L)))))))).xyxx)).lo))).yxyx, (int32_t)l_166))), ((VECTOR(int32_t, 4))(7L))))).y, ((VECTOR(int32_t, 2))(0x2895EEB2L)), 4L, 1L, 4L, 0x7C8D8B85L)).lo, ((VECTOR(int32_t, 4))(0x55EBF1CAL))))).y;
                    }
                }
                else
                { /* block id: 76 */
                    int32_t l_167 = 0x27E37214L;
                    VECTOR(int32_t, 8) l_170 = (VECTOR(int32_t, 8))(0x443CEC6AL, (VECTOR(int32_t, 4))(0x443CEC6AL, (VECTOR(int32_t, 2))(0x443CEC6AL, 0x1E9376ACL), 0x1E9376ACL), 0x1E9376ACL, 0x443CEC6AL, 0x1E9376ACL);
                    uint32_t l_171 = 1UL;
                    int i;
                    for (l_167 = 0; (l_167 <= 26); ++l_167)
                    { /* block id: 79 */
                        l_49.s7 = 0x0B6B5915L;
                    }
                    l_10[5][2] = ((VECTOR(int32_t, 8))(l_170.s72405561)).s0;
                    if ((l_35 &= l_171))
                    { /* block id: 84 */
                        int64_t l_172 = 0x1FDA40EF7442A286L;
                        uint16_t l_173 = 0xB665L;
                        l_38.s6 ^= (l_173 = l_172);
                        l_47.x = 0x05DA0835L;
                    }
                    else
                    { /* block id: 88 */
                        int32_t l_174[3];
                        int16_t l_175 = (-1L);
                        int32_t l_176 = 1L;
                        uint8_t l_177 = 0UL;
                        uint64_t l_180 = 1UL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_174[i] = 0x7C5F3B77L;
                        --l_177;
                        l_180++;
                    }
                }
                l_183 = (void*)0;
                if ((l_10[3][1] &= ((l_184 , l_185[1]) , (l_186[3] , ((VECTOR(int32_t, 2))(0x65D210BAL, 0L)).odd))))
                { /* block id: 95 */
                    union U0 l_187 = {0x210DL};/* VOLATILE GLOBAL l_187 */
                    int8_t l_188[4][4] = {{(-1L),0L,0L,(-1L)},{(-1L),0L,0L,(-1L)},{(-1L),0L,0L,(-1L)},{(-1L),0L,0L,(-1L)}};
                    int32_t l_190 = 0x648A2C21L;
                    int32_t *l_189[2][9][6] = {{{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0}},{{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0},{&l_190,&l_190,&l_190,&l_190,&l_190,(void*)0}}};
                    VECTOR(int32_t, 4) l_191 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 9L), 9L);
                    VECTOR(int32_t, 8) l_192 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x2AD69AD4L), 0x2AD69AD4L), 0x2AD69AD4L, (-9L), 0x2AD69AD4L);
                    VECTOR(int32_t, 2) l_193 = (VECTOR(int32_t, 2))(0x3756B02EL, 5L);
                    VECTOR(int32_t, 8) l_194 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x27D234CDL), 0x27D234CDL), 0x27D234CDL, 1L, 0x27D234CDL);
                    int32_t l_195 = 0L;
                    VECTOR(int32_t, 2) l_196 = (VECTOR(int32_t, 2))((-1L), 0x0B33F109L);
                    uint32_t l_197 = 0x767BC636L;
                    VECTOR(int32_t, 4) l_198 = (VECTOR(int32_t, 4))(0x2C3FDCEBL, (VECTOR(int32_t, 2))(0x2C3FDCEBL, 0x114B6D74L), 0x114B6D74L);
                    int64_t l_199[1][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                    uint64_t l_200 = 6UL;
                    uint8_t l_201 = 0UL;
                    int64_t l_202 = 1L;
                    int16_t l_203 = (-1L);
                    VECTOR(int32_t, 2) l_204 = (VECTOR(int32_t, 2))(0x437194E9L, (-10L));
                    union U0 l_205 = {9L};/* VOLATILE GLOBAL l_205 */
                    int16_t l_206 = 4L;
                    int16_t l_207 = 0L;
                    uint16_t l_208 = 0x44B1L;
                    VECTOR(uint32_t, 2) l_209 = (VECTOR(uint32_t, 2))(4294967292UL, 0x97200648L);
                    uint16_t l_210[9][9] = {{65535UL,0x1EBDL,65535UL,65535UL,1UL,6UL,1UL,0x4CE6L,1UL},{65535UL,0x1EBDL,65535UL,65535UL,1UL,6UL,1UL,0x4CE6L,1UL},{65535UL,0x1EBDL,65535UL,65535UL,1UL,6UL,1UL,0x4CE6L,1UL},{65535UL,0x1EBDL,65535UL,65535UL,1UL,6UL,1UL,0x4CE6L,1UL},{65535UL,0x1EBDL,65535UL,65535UL,1UL,6UL,1UL,0x4CE6L,1UL},{65535UL,0x1EBDL,65535UL,65535UL,1UL,6UL,1UL,0x4CE6L,1UL},{65535UL,0x1EBDL,65535UL,65535UL,1UL,6UL,1UL,0x4CE6L,1UL},{65535UL,0x1EBDL,65535UL,65535UL,1UL,6UL,1UL,0x4CE6L,1UL},{65535UL,0x1EBDL,65535UL,65535UL,1UL,6UL,1UL,0x4CE6L,1UL}};
                    int64_t l_211 = 2L;
                    uint64_t l_212[7];
                    uint16_t l_213 = 0UL;
                    uint32_t l_214 = 0xAF73780EL;
                    uint32_t l_215 = 4294967290UL;
                    uint32_t l_216[8][8] = {{1UL,0x9F94B858L,0x2893A71CL,0UL,0x9F94B858L,0UL,0x2893A71CL,0x9F94B858L},{1UL,0x9F94B858L,0x2893A71CL,0UL,0x9F94B858L,0UL,0x2893A71CL,0x9F94B858L},{1UL,0x9F94B858L,0x2893A71CL,0UL,0x9F94B858L,0UL,0x2893A71CL,0x9F94B858L},{1UL,0x9F94B858L,0x2893A71CL,0UL,0x9F94B858L,0UL,0x2893A71CL,0x9F94B858L},{1UL,0x9F94B858L,0x2893A71CL,0UL,0x9F94B858L,0UL,0x2893A71CL,0x9F94B858L},{1UL,0x9F94B858L,0x2893A71CL,0UL,0x9F94B858L,0UL,0x2893A71CL,0x9F94B858L},{1UL,0x9F94B858L,0x2893A71CL,0UL,0x9F94B858L,0UL,0x2893A71CL,0x9F94B858L},{1UL,0x9F94B858L,0x2893A71CL,0UL,0x9F94B858L,0UL,0x2893A71CL,0x9F94B858L}};
                    int32_t *l_217 = &l_190;
                    int32_t *l_218[2][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t *l_219 = (void*)0;
                    int32_t *l_220 = &l_187.f2;
                    int32_t *l_221 = (void*)0;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_212[i] = 18446744073709551608UL;
                    l_183 = ((l_187 , l_188[3][2]) , l_189[0][0][2]);
                    l_45.s3 = ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(l_191.xz)).yyyxxyxxyxxyyxyx, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_192.s1404036424563010)).s58cd)), (int32_t)((VECTOR(int32_t, 8))(l_193.xxyxxyxy)).s0))), (-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_194.s6432247234715267)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), 0x78E2EAF0L)), l_195, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_196.yxyxxyxxyxyyxxxx)))).s4, ((VECTOR(int32_t, 2))(0x16491EEBL, 0x7C9F123DL)), 0x31D731B0L, 0x58E680C0L)).s1033306123706015, ((VECTOR(int32_t, 16))(l_197, 0L, ((VECTOR(int32_t, 8))(l_198.zxyzxyyy)), ((VECTOR(int32_t, 2))(0L, (-3L))), l_199[0][0], (l_202 = (l_201 = l_200)), 0x6A70D89AL, 1L))))).s89)), 0x312825A9L)).s27, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x3D218EFCL, 0L)))).xyxxxyxyyxyyyxyy, ((VECTOR(int32_t, 4))(0x2587180BL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(0x11556C38L, l_203, 0x5570A109L, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(l_204.xy)).xyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((l_12 = (l_205 , l_206)) , l_207), ((VECTOR(int32_t, 2))(1L)), l_208, l_209.y, l_210[4][8], 1L, ((VECTOR(int32_t, 8))((-4L))), 0x2995D316L)).s73, ((VECTOR(int32_t, 2))((-9L)))))).xxyy, ((VECTOR(int32_t, 4))(0x0ACA68ABL))))), 0x16107DD1L, 1L, 0x64700DD4L, 0x381FAF7DL, 0x70321458L, ((VECTOR(int32_t, 2))(0x6AA29AB8L)), (-1L), 0x22BE9EF2L, 0L, 0x78210C9AL, 1L)).s1622))), l_211, l_212[5], l_213, ((VECTOR(int32_t, 4))(0x5E8FB9F5L)), l_214, l_215, ((VECTOR(int32_t, 2))(0x14933FC6L)), 0x2D5D75FFL)).s6, l_216[1][6], 0x45EC2444L, 7L, ((VECTOR(int32_t, 8))(0x24C62994L)), 4L)).s86, ((VECTOR(int32_t, 2))(0x10DE7D89L))))).yxyxyxxyyyxxxxxy, ((VECTOR(int32_t, 16))(0L))))).sa1)))), (-1L))).zzyxyxzywwxxyxwx))).sfb)).xxxx)), 0x25264EAEL, 0x7C6A618BL, (-1L), 0x77422D29L)).even)))), ((VECTOR(int32_t, 4))(8L)))).s05))).yyxyyxxyxyxyyyyx))).hi, ((VECTOR(int32_t, 8))(0x6A1426ADL)), ((VECTOR(int32_t, 8))(0L))))).s40, ((VECTOR(int32_t, 2))(0x7FB165E0L)), ((VECTOR(int32_t, 2))(8L))))).lo;
                    l_221 = (l_220 = (l_219 = (l_218[1][2] = (l_183 = l_217))));
                    for (l_188[2][3] = 9; (l_188[2][3] < 17); l_188[2][3]++)
                    { /* block id: 108 */
                        uint32_t l_224 = 0x18A6E41CL;
                        uint16_t l_225[7][1] = {{0x9E9FL},{0x9E9FL},{0x9E9FL},{0x9E9FL},{0x9E9FL},{0x9E9FL},{0x9E9FL}};
                        int32_t l_226[4][2][7] = {{{1L,(-3L),(-3L),1L,(-1L),0x25402FC4L,0x7C32AD57L},{1L,(-3L),(-3L),1L,(-1L),0x25402FC4L,0x7C32AD57L}},{{1L,(-3L),(-3L),1L,(-1L),0x25402FC4L,0x7C32AD57L},{1L,(-3L),(-3L),1L,(-1L),0x25402FC4L,0x7C32AD57L}},{{1L,(-3L),(-3L),1L,(-1L),0x25402FC4L,0x7C32AD57L},{1L,(-3L),(-3L),1L,(-1L),0x25402FC4L,0x7C32AD57L}},{{1L,(-3L),(-3L),1L,(-1L),0x25402FC4L,0x7C32AD57L},{1L,(-3L),(-3L),1L,(-1L),0x25402FC4L,0x7C32AD57L}}};
                        int32_t l_227 = 0x4017C4DEL;
                        union U0 l_229[4][5] = {{{3L},{3L},{3L},{3L},{3L}},{{3L},{3L},{3L},{3L},{3L}},{{3L},{3L},{3L},{3L},{3L}},{{3L},{3L},{3L},{3L},{3L}}};
                        union U0 *l_228[5][7][7] = {{{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]}},{{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]}},{{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]}},{{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]}},{{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]},{&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[0][4],&l_229[3][2],&l_229[0][4],&l_229[0][4]}}};
                        union U0 *l_230 = (void*)0;
                        int i, j, k;
                        (*l_217) &= 0L;
                        l_227 = (l_226[3][0][1] &= ((*l_219) = (l_224 , l_225[4][0])));
                        l_230 = l_228[3][2][1];
                    }
                }
                else
                { /* block id: 115 */
                    int16_t l_231 = 1L;
                    uint16_t l_232 = 0xA3B0L;
                    l_232 &= l_231;
                }
            }
            else
            { /* block id: 118 */
                int8_t l_233[7] = {0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL};
                int i;
                l_233[5] &= 0x46F4178DL;
                for (l_233[5] = 0; (l_233[5] < (-4)); l_233[5] = safe_sub_func_int8_t_s_s(l_233[5], 6))
                { /* block id: 122 */
                    uint32_t l_236 = 0UL;
                    if (l_236)
                    { /* block id: 123 */
                        union U3 *l_237 = (void*)0;
                        union U3 l_239 = {0xA4BFL};/* VOLATILE GLOBAL l_239 */
                        union U3 *l_238[2][8][3] = {{{&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239}},{{&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239}}};
                        int8_t l_240 = 0L;
                        uint32_t l_241 = 4294967295UL;
                        int32_t l_245 = 9L;
                        int32_t *l_244 = &l_245;
                        int i, j, k;
                        l_238[1][4][2] = (l_237 = (void*)0);
                        ++l_241;
                        l_244 = (void*)0;
                    }
                    else
                    { /* block id: 128 */
                        int32_t l_246 = 0x593FB0A9L;
                        int32_t l_247 = (-3L);
                        uint8_t l_248 = 1UL;
                        int32_t *l_251[3];
                        int32_t *l_252 = &l_247;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_251[i] = (void*)0;
                        l_247 = l_246;
                        ++l_248;
                        l_252 = (l_251[1] = (void*)0);
                    }
                }
            }
            for (l_36.y = 0; (l_36.y >= 3); l_36.y = safe_add_func_int16_t_s_s(l_36.y, 3))
            { /* block id: 138 */
                uint64_t l_255 = 0xA31DE906DD1E3549L;
                int32_t l_272 = (-1L);
                VECTOR(int16_t, 4) l_273 = (VECTOR(int16_t, 4))(0x79AEL, (VECTOR(int16_t, 2))(0x79AEL, 0x4793L), 0x4793L);
                VECTOR(int16_t, 16) l_274 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-8L)), (-8L)), (-8L), 1L, (-8L), (VECTOR(int16_t, 2))(1L, (-8L)), (VECTOR(int16_t, 2))(1L, (-8L)), 1L, (-8L), 1L, (-8L));
                VECTOR(int16_t, 8) l_275 = (VECTOR(int16_t, 8))(0x47DFL, (VECTOR(int16_t, 4))(0x47DFL, (VECTOR(int16_t, 2))(0x47DFL, (-1L)), (-1L)), (-1L), 0x47DFL, (-1L));
                VECTOR(int16_t, 2) l_276 = (VECTOR(int16_t, 2))(1L, (-7L));
                uint16_t l_277[9][3][3] = {{{0UL,0UL,0xE399L},{0UL,0UL,0xE399L},{0UL,0UL,0xE399L}},{{0UL,0UL,0xE399L},{0UL,0UL,0xE399L},{0UL,0UL,0xE399L}},{{0UL,0UL,0xE399L},{0UL,0UL,0xE399L},{0UL,0UL,0xE399L}},{{0UL,0UL,0xE399L},{0UL,0UL,0xE399L},{0UL,0UL,0xE399L}},{{0UL,0UL,0xE399L},{0UL,0UL,0xE399L},{0UL,0UL,0xE399L}},{{0UL,0UL,0xE399L},{0UL,0UL,0xE399L},{0UL,0UL,0xE399L}},{{0UL,0UL,0xE399L},{0UL,0UL,0xE399L},{0UL,0UL,0xE399L}},{{0UL,0UL,0xE399L},{0UL,0UL,0xE399L},{0UL,0UL,0xE399L}},{{0UL,0UL,0xE399L},{0UL,0UL,0xE399L},{0UL,0UL,0xE399L}}};
                VECTOR(uint16_t, 4) l_278 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x19A4L), 0x19A4L);
                VECTOR(uint8_t, 8) l_279 = (VECTOR(uint8_t, 8))(0xA1L, (VECTOR(uint8_t, 4))(0xA1L, (VECTOR(uint8_t, 2))(0xA1L, 0x17L), 0x17L), 0x17L, 0xA1L, 0x17L);
                int64_t l_280 = 0L;
                VECTOR(int8_t, 16) l_281 = (VECTOR(int8_t, 16))(0x30L, (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 7L), 7L), 7L, 0x30L, 7L, (VECTOR(int8_t, 2))(0x30L, 7L), (VECTOR(int8_t, 2))(0x30L, 7L), 0x30L, 7L, 0x30L, 7L);
                VECTOR(uint8_t, 4) l_282 = (VECTOR(uint8_t, 4))(0xADL, (VECTOR(uint8_t, 2))(0xADL, 255UL), 255UL);
                VECTOR(uint8_t, 8) l_283 = (VECTOR(uint8_t, 8))(0x70L, (VECTOR(uint8_t, 4))(0x70L, (VECTOR(uint8_t, 2))(0x70L, 0UL), 0UL), 0UL, 0x70L, 0UL);
                VECTOR(uint8_t, 8) l_284 = (VECTOR(uint8_t, 8))(0x5FL, (VECTOR(uint8_t, 4))(0x5FL, (VECTOR(uint8_t, 2))(0x5FL, 255UL), 255UL), 255UL, 0x5FL, 255UL);
                uint8_t l_285 = 0xEEL;
                VECTOR(uint8_t, 16) l_286 = (VECTOR(uint8_t, 16))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0xC4L), 0xC4L), 0xC4L, 4UL, 0xC4L, (VECTOR(uint8_t, 2))(4UL, 0xC4L), (VECTOR(uint8_t, 2))(4UL, 0xC4L), 4UL, 0xC4L, 4UL, 0xC4L);
                VECTOR(uint8_t, 8) l_287 = (VECTOR(uint8_t, 8))(0xBAL, (VECTOR(uint8_t, 4))(0xBAL, (VECTOR(uint8_t, 2))(0xBAL, 0x3AL), 0x3AL), 0x3AL, 0xBAL, 0x3AL);
                VECTOR(uint8_t, 16) l_288 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint8_t, 2))(1UL, 0UL), (VECTOR(uint8_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
                VECTOR(int8_t, 4) l_289 = (VECTOR(int8_t, 4))(0x0EL, (VECTOR(int8_t, 2))(0x0EL, 0x05L), 0x05L);
                VECTOR(uint8_t, 2) l_290 = (VECTOR(uint8_t, 2))(0UL, 0xF4L);
                VECTOR(int8_t, 8) l_291 = (VECTOR(int8_t, 8))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x48L), 0x48L), 0x48L, 6L, 0x48L);
                VECTOR(uint8_t, 4) l_292 = (VECTOR(uint8_t, 4))(0xC9L, (VECTOR(uint8_t, 2))(0xC9L, 0xEFL), 0xEFL);
                VECTOR(uint8_t, 4) l_293 = (VECTOR(uint8_t, 4))(0x59L, (VECTOR(uint8_t, 2))(0x59L, 250UL), 250UL);
                VECTOR(int8_t, 2) l_294 = (VECTOR(int8_t, 2))((-1L), 0x4EL);
                VECTOR(int8_t, 8) l_295 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x29L), 0x29L), 0x29L, 0L, 0x29L);
                uint32_t l_296 = 0x71F85479L;
                uint16_t l_297 = 65535UL;
                int8_t l_298 = 0L;
                int32_t l_299 = 0x527171BCL;
                int64_t l_300 = 0x39EFE29CF1B3CF31L;
                union U1 l_301 = {-1L};/* VOLATILE GLOBAL l_301 */
                union U2 l_302 = {0x2B7FL};/* VOLATILE GLOBAL l_302 */
                uint8_t l_303 = 0x9CL;
                int i, j, k;
                l_54.y ^= l_255;
                for (l_255 = 5; (l_255 >= 53); l_255++)
                { /* block id: 142 */
                    uint64_t l_258 = 0xF3E7F1E87328B7BCL;
                    l_258--;
                    for (l_258 = 0; (l_258 != 51); ++l_258)
                    { /* block id: 146 */
                        uint32_t l_263 = 0xCE2D5DD3L;
                        uint16_t l_264 = 0x2BAAL;
                        int32_t l_266 = 0x45A5978BL;
                        int32_t *l_265[8][3][4] = {{{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266}},{{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266}},{{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266}},{{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266}},{{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266}},{{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266}},{{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266}},{{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266},{&l_266,&l_266,&l_266,&l_266}}};
                        int32_t *l_267 = &l_266;
                        int32_t *l_268 = (void*)0;
                        uint8_t l_269 = 0x43L;
                        int i, j, k;
                        l_44.w |= (l_49.s6 |= (l_43.sa = ((l_264 = l_263) , 0x5B8B6730L)));
                        l_268 = (l_267 = l_265[5][1][2]);
                        l_269--;
                    }
                }
                l_57.y ^= ((((l_272 , ((((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_273.zwxy)).yxxwyyzxzyzxyzxy)).even)).s1443356206314543, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(l_274.s28e07a7408f1f415)).s59, ((VECTOR(int16_t, 8))(l_275.s73633765)).s45))), ((VECTOR(int16_t, 2))(l_276.yy))))), ((VECTOR(int16_t, 4))(0L, l_277[0][2][0], 0x54DCL, 0x4CD3L)), 0L, 0x3456L)).s2502275552355034))).s2871, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_278.yyzyywyy)).s54)).yyxy))).wyzwwwzxwzyyxyyx)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 8))(250UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_279.s4734003560727773)).sbc)), (GROUP_DIVERGE(0, 1) , ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x84L, 0x66L)), 0x96L, ((VECTOR(uint8_t, 8))(l_280, 0UL, ((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_281.s6aa0b4ae)))).s22))))))), 255UL, ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(l_282.xw)), ((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(255UL, 255UL)).xxxx)).xxxzwzww, ((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_283.s60162751)))).s1073722126133645, ((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 16))(l_284.s2544052030661250)), (uint8_t)((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 4))(l_285, ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(l_286.s7967)).hi, ((VECTOR(uint8_t, 16))(l_287.s4656646125265430)).s2f, ((VECTOR(uint8_t, 4))(l_288.s064d)).lo))), 255UL)).yxwyxwwz, ((VECTOR(uint8_t, 16))(255UL, ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_289.zwyz)).zzxwxwzzxzwwzzwy)).sa0f0))).xxwzzwzzxzzxxxzx, ((VECTOR(uint8_t, 8))(l_290.yxyyyyxx)).s2544034042157735))).sf, ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 8))(l_291.s50570666)).s5435717006323445))).s73)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(l_292.xywx)), ((VECTOR(uint8_t, 16))(l_293.zzxywwzwwzzywxxx)).s68c0))).zyyyxxww)).s6547773770665471)).s0d))), 255UL)).even, ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 8))(l_294.yxyxxxyx)).even))).hi, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 4))(l_295.s7274)).yyxzxzzz)))))).s1635726145572326)).s03)))))), (l_28[3] = l_296), 0x03L, 247UL, l_297, 252UL, 246UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x84L, 246UL)))))), 251UL, ((VECTOR(uint8_t, 2))(0x08L, 0x28L)), 9UL, 255UL)).hi))))))).s2, (uint8_t)l_298))), ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))(l_299, ((VECTOR(uint8_t, 2))(7UL)), 0xBBL, 0xF9L, ((VECTOR(uint8_t, 8))(0UL)), 250UL, 0UL, 254UL)).odd, (uint8_t)0xE0L))), 0x17L, 1UL, 1UL, ((VECTOR(uint8_t, 4))(1UL)), 0x18L)).s1af0))).wyyyzzyyywwzwwxx)))))).odd))).s72, ((VECTOR(uint8_t, 2))(0xA5L))))), 4UL)), 4UL, l_300, 0x18L, 0UL, 1UL)))).s9), 1UL, ((VECTOR(uint8_t, 2))(0x2CL)), 0x2DL)).odd, ((VECTOR(uint8_t, 4))(255UL))))).even)).xxxxxxyyyxxyxyxx))).odd)).even, ((VECTOR(uint16_t, 4))(1UL))))).lo, ((VECTOR(uint16_t, 2))(8UL))))).yxyy)))).wyzzzyxzwywxwzzy))).s7 , l_301) , l_302)) , 1L) , (-10L)) , l_303);
            }
        }
        else
        { /* block id: 159 */
            uint16_t l_304 = 1UL;
            union U0 l_342 = {0x599CL};/* VOLATILE GLOBAL l_342 */
            int16_t l_343 = 0x1E91L;
            VECTOR(int32_t, 8) l_344 = (VECTOR(int32_t, 8))(0x4C88515EL, (VECTOR(int32_t, 4))(0x4C88515EL, (VECTOR(int32_t, 2))(0x4C88515EL, 0x3F0C3571L), 0x3F0C3571L), 0x3F0C3571L, 0x4C88515EL, 0x3F0C3571L);
            int32_t l_345 = 0x45C16733L;
            uint64_t l_346[8] = {0x594061D5EF1944EAL,0x594061D5EF1944EAL,0x594061D5EF1944EAL,0x594061D5EF1944EAL,0x594061D5EF1944EAL,0x594061D5EF1944EAL,0x594061D5EF1944EAL,0x594061D5EF1944EAL};
            VECTOR(int32_t, 2) l_347 = (VECTOR(int32_t, 2))(1L, 0x75C55755L);
            int16_t l_348 = 0x65E4L;
            uint32_t l_349 = 0x17CBC052L;
            uint16_t l_350 = 0xAFA0L;
            int64_t l_351[9] = {7L,7L,7L,7L,7L,7L,7L,7L,7L};
            int i;
            if (l_304)
            { /* block id: 160 */
                VECTOR(int64_t, 16) l_305 = (VECTOR(int64_t, 16))(6L, (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 4L), 4L), 4L, 6L, 4L, (VECTOR(int64_t, 2))(6L, 4L), (VECTOR(int64_t, 2))(6L, 4L), 6L, 4L, 6L, 4L);
                VECTOR(int32_t, 4) l_306 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x49CBEE7AL), 0x49CBEE7AL);
                int32_t l_307 = 0x7802E40AL;
                uint64_t l_308[4][7][4] = {{{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL}},{{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL}},{{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL}},{{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL},{18446744073709551609UL,18446744073709551615UL,0x58DBCC2ADB7468B9L,18446744073709551615UL}}};
                VECTOR(int32_t, 8) l_309 = (VECTOR(int32_t, 8))(0x76E3BE73L, (VECTOR(int32_t, 4))(0x76E3BE73L, (VECTOR(int32_t, 2))(0x76E3BE73L, 0x340546E2L), 0x340546E2L), 0x340546E2L, 0x76E3BE73L, 0x340546E2L);
                VECTOR(int32_t, 2) l_310 = (VECTOR(int32_t, 2))(0x1B38EACAL, (-1L));
                int i, j, k;
                l_10[0][3] = (((l_307 ^= (l_306.x &= ((VECTOR(int64_t, 16))(l_305.sbfb4bc8b71943341)).s8)) , l_308[0][5][2]) , 0x193F601CL);
                if ((GROUP_DIVERGE(0, 1) , ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(l_309.s5032)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_310.xyxxxxxy)).s10)).xyxy))).y))
                { /* block id: 164 */
                    int32_t *l_311 = (void*)0;
                    l_311 = (void*)0;
                }
                else
                { /* block id: 166 */
                    int32_t l_312 = (-6L);
                    uint16_t l_313 = 0x0DADL;
                    uint64_t l_316 = 0UL;
                    int64_t l_317 = 0x0C599B7A059DEF7BL;
                    l_313--;
                    l_309.s1 ^= l_316;
                    l_10[3][1] ^= l_317;
                }
            }
            else
            { /* block id: 171 */
                int32_t l_318 = 0x14FFCE9BL;
                int32_t l_328 = 0x38B94E0BL;
                uint16_t l_329 = 0xE913L;
                for (l_318 = (-29); (l_318 < 6); l_318 = safe_add_func_uint8_t_u_u(l_318, 9))
                { /* block id: 174 */
                    int32_t l_321[6] = {0L,(-2L),0L,0L,(-2L),0L};
                    int i;
                    for (l_321[0] = 0; (l_321[0] > (-12)); l_321[0] = safe_sub_func_int32_t_s_s(l_321[0], 7))
                    { /* block id: 177 */
                        int32_t l_324 = 0L;
                        uint64_t l_325 = 1UL;
                        ++l_325;
                    }
                }
                if ((l_328 , (l_329 = (l_328 = ((VECTOR(int32_t, 2))((-8L), 5L)).odd))))
                { /* block id: 183 */
                    int16_t l_330[4] = {0L,0L,0L,0L};
                    int8_t l_331 = 0x1DL;
                    uint16_t l_332 = 1UL;
                    int32_t l_338[1][1][4];
                    union U0 l_339 = {0x3427L};/* VOLATILE GLOBAL l_339 */
                    int32_t *l_340 = &l_338[0][0][2];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 4; k++)
                                l_338[i][j][k] = 0x04CEC711L;
                        }
                    }
                    --l_332;
                    for (l_332 = 25; (l_332 < 13); l_332 = safe_sub_func_int32_t_s_s(l_332, 1))
                    { /* block id: 187 */
                        VECTOR(int32_t, 8) l_337 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7C33BFADL), 0x7C33BFADL), 0x7C33BFADL, 0L, 0x7C33BFADL);
                        int i;
                        l_337.s1 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_337.s31)).xyyx)).z;
                    }
                    l_340 = (l_338[0][0][2] , (l_339 , (void*)0));
                }
                else
                { /* block id: 191 */
                    VECTOR(int64_t, 4) l_341 = (VECTOR(int64_t, 4))(0x4590E7AB6653C8BCL, (VECTOR(int64_t, 2))(0x4590E7AB6653C8BCL, 0x31DB2AF2DE0FF5CEL), 0x31DB2AF2DE0FF5CEL);
                    int i;
                    l_328 = (((VECTOR(int64_t, 16))(l_341.zwyzwwxxzzzxxyzz)).s0 , ((VECTOR(int32_t, 4))(0L, (-7L), 6L, 0x7AFD318CL)).w);
                    l_10[2][3] ^= 0x6DFDA760L;
                }
            }
            l_10[3][1] ^= ((l_342 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_343 , l_344.s4), ((VECTOR(int32_t, 2))(0x30763258L, 0x2F7FF284L)), 0x3CC76579L)), 9L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_345, (l_346[7] , 0x5B8D120CL), 0x53A5D9CDL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_347.xy)))).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))((-9L), 0x7C59EC68L, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((l_348 , l_349), l_350, 0x051076CBL, 0x3ED1CCF4L)).zyzwywyzzwywwyww)).sbeec)).yxxwxyyyxzwzwwxz)).s7, ((VECTOR(int32_t, 4))((-1L))), 0x1F490C95L)), ((VECTOR(int32_t, 8))((-10L))), ((VECTOR(int32_t, 8))(0x4DD669E8L))))).s5736030634615525)).s5fa5)).y, 1L, 0x103DDC7DL, 0x39258D98L)).s13)), 0x7D0FBBC8L)).s7) , l_351[0]);
        }
        l_356 = (l_352 , ((l_353 = 0x1EC0AE80L) , (l_355 = l_354)));
        l_358--;
        unsigned int result = 0;
        result += l_7;
        result += l_8;
        result += l_9;
        int l_10_i0, l_10_i1;
        for (l_10_i0 = 0; l_10_i0 < 7; l_10_i0++) {
            for (l_10_i1 = 0; l_10_i1 < 4; l_10_i1++) {
                result += l_10[l_10_i0][l_10_i1];
            }
        }
        result += l_11.s7;
        result += l_11.s6;
        result += l_11.s5;
        result += l_11.s4;
        result += l_11.s3;
        result += l_11.s2;
        result += l_11.s1;
        result += l_11.s0;
        result += l_12;
        result += l_13.y;
        result += l_13.x;
        result += l_14.w;
        result += l_14.z;
        result += l_14.y;
        result += l_14.x;
        result += l_15;
        result += l_16.y;
        result += l_16.x;
        result += l_17;
        result += l_18.sf;
        result += l_18.se;
        result += l_18.sd;
        result += l_18.sc;
        result += l_18.sb;
        result += l_18.sa;
        result += l_18.s9;
        result += l_18.s8;
        result += l_18.s7;
        result += l_18.s6;
        result += l_18.s5;
        result += l_18.s4;
        result += l_18.s3;
        result += l_18.s2;
        result += l_18.s1;
        result += l_18.s0;
        result += l_19.s7;
        result += l_19.s6;
        result += l_19.s5;
        result += l_19.s4;
        result += l_19.s3;
        result += l_19.s2;
        result += l_19.s1;
        result += l_19.s0;
        result += l_20.sf;
        result += l_20.se;
        result += l_20.sd;
        result += l_20.sc;
        result += l_20.sb;
        result += l_20.sa;
        result += l_20.s9;
        result += l_20.s8;
        result += l_20.s7;
        result += l_20.s6;
        result += l_20.s5;
        result += l_20.s4;
        result += l_20.s3;
        result += l_20.s2;
        result += l_20.s1;
        result += l_20.s0;
        result += l_21;
        result += l_22;
        result += l_23;
        result += l_24;
        result += l_25;
        result += l_26;
        result += l_27;
        int l_28_i0;
        for (l_28_i0 = 0; l_28_i0 < 10; l_28_i0++) {
            result += l_28[l_28_i0];
        }
        result += l_29;
        result += l_30.s7;
        result += l_30.s6;
        result += l_30.s5;
        result += l_30.s4;
        result += l_30.s3;
        result += l_30.s2;
        result += l_30.s1;
        result += l_30.s0;
        result += l_31.s7;
        result += l_31.s6;
        result += l_31.s5;
        result += l_31.s4;
        result += l_31.s3;
        result += l_31.s2;
        result += l_31.s1;
        result += l_31.s0;
        result += l_32.y;
        result += l_32.x;
        result += l_33;
        result += l_34;
        result += l_352;
        result += l_353;
        result += l_354;
        result += l_355;
        result += l_356;
        result += l_357;
        result += l_358;
        atomic_add(&p_1251->l_special_values[12], result);
    }
    else
    { /* block id: 202 */
        (1 + 1);
    }
    return p_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1251->g_1126 p_1251->g_6 p_1251->g_1167 p_1251->g_1143
 * writes: p_1251->g_1156 p_1251->g_6 p_1251->g_1168
 */
union U0  func_368(int32_t * p_369, union U0 * p_370, struct S4 * p_1251)
{ /* block id: 570 */
    VECTOR(int64_t, 8) l_1144 = (VECTOR(int64_t, 8))(0x2D90F55D2E1632A4L, (VECTOR(int64_t, 4))(0x2D90F55D2E1632A4L, (VECTOR(int64_t, 2))(0x2D90F55D2E1632A4L, 0x6ABFB73D6AD455A8L), 0x6ABFB73D6AD455A8L), 0x6ABFB73D6AD455A8L, 0x2D90F55D2E1632A4L, 0x6ABFB73D6AD455A8L);
    int8_t *l_1151[2];
    int8_t **l_1152 = (void*)0;
    int8_t **l_1153 = &l_1151[0];
    int8_t *l_1155 = &p_1251->g_673;
    int8_t **l_1154[5][5] = {{&l_1155,(void*)0,(void*)0,(void*)0,&l_1155},{&l_1155,(void*)0,(void*)0,(void*)0,&l_1155},{&l_1155,(void*)0,(void*)0,(void*)0,&l_1155},{&l_1155,(void*)0,(void*)0,(void*)0,&l_1155},{&l_1155,(void*)0,(void*)0,(void*)0,&l_1155}};
    int16_t *l_1157 = (void*)0;
    int16_t *l_1158 = (void*)0;
    int16_t *l_1159 = (void*)0;
    int16_t *l_1160 = (void*)0;
    int32_t l_1161 = (-1L);
    int32_t l_1164 = 1L;
    int64_t *l_1166 = &p_1251->g_825;
    int64_t **l_1165 = &l_1166;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1151[i] = &p_1251->g_673;
    l_1164 ^= ((0x157AE61EL ^ ((((VECTOR(int64_t, 16))(l_1144.s2331434536600516)).s7 < (l_1144.s6 > l_1144.s7)) && (safe_add_func_uint64_t_u_u((((safe_mod_func_int16_t_s_s((l_1161 ^= (safe_rshift_func_uint16_t_u_u(7UL, (l_1144.s6 <= (((*l_1153) = l_1151[0]) != (p_1251->g_1156[3] = &p_1251->g_673)))))), FAKE_DIVERGE(p_1251->global_1_offset, get_global_id(1), 10))) , l_1161) | ((*p_1251->g_1126) &= (safe_lshift_func_uint8_t_u_u(((((&p_369 != (void*)0) , 0x37CEA8E8L) | (-2L)) >= (-1L)), l_1144.s4)))), l_1144.s1)))) & l_1144.s7);
    (*p_1251->g_1167) = l_1165;
    return (*p_370);
}


/* ------------------------------------------ */
/* 
 * reads : p_1251->g_650 p_1251->g_659 p_1251->g_660 p_1251->g_489 p_1251->g_414 p_1251->g_673 p_1251->g_685 p_1251->g_388 p_1251->g_420 p_1251->g_493 p_1251->g_462 p_1251->g_389.f0 p_1251->g_380 p_1251->g_381 p_1251->g_6 p_1251->g_740 p_1251->g_415 p_1251->g_457 p_1251->g_760 p_1251->g_630 p_1251->g_711 p_1251->g_771 p_1251->g_782 p_1251->g_785 p_1251->g_788 p_1251->g_800 p_1251->g_819 p_1251->g_825 p_1251->g_685.f0 p_1251->g_834 p_1251->g_838 p_1251->g_844 p_1251->g_873 p_1251->g_877 p_1251->g_466 p_1251->g_389 p_1251->g_878 p_1251->g_564 p_1251->g_881.f2 p_1251->g_889.f1 p_1251->g_899 p_1251->g_431 p_1251->g_921 p_1251->g_923 p_1251->g_926 p_1251->g_928 p_1251->g_937 p_1251->g_976 p_1251->g_979 p_1251->g_984 p_1251->g_952 p_1251->g_975 p_1251->g_1054 p_1251->g_984.f0 p_1251->g_1061 p_1251->g_818.f0 p_1251->g_820 p_1251->g_1104 p_1251->g_1111 p_1251->g_983 p_1251->g_1126 p_1251->g_491 p_1251->g_881.f1
 * writes: p_1251->g_489 p_1251->g_673 p_1251->g_457 p_1251->g_381 p_1251->g_638.f2 p_1251->g_493 p_1251->g_6 p_1251->g_820 p_1251->g_825 p_1251->g_649 p_1251->g_818.f0 p_1251->g_881.f2 p_1251->g_889.f1 p_1251->g_412 p_1251->g_420 p_1251->g_1051 p_1251->g_1061 p_1251->g_1104 p_1251->g_976.f2 p_1251->g_491 p_1251->g_431 p_1251->g_881.f1
 */
int32_t * func_371(int32_t ** p_372, struct S4 * p_1251)
{ /* block id: 345 */
    uint32_t l_653 = 1UL;
    int32_t l_666 = (-5L);
    int32_t l_669[1][9] = {{(-8L),(-10L),(-8L),(-8L),(-10L),(-8L),(-8L),(-10L),(-8L)}};
    VECTOR(int32_t, 4) l_674 = (VECTOR(int32_t, 4))(0x31160914L, (VECTOR(int32_t, 2))(0x31160914L, 0x2B9AA280L), 0x2B9AA280L);
    uint32_t l_697 = 0xFD3FF28EL;
    uint64_t *l_702 = &p_1251->g_491;
    VECTOR(int64_t, 4) l_721 = (VECTOR(int64_t, 4))(0x73DE66B5DEAA51D8L, (VECTOR(int64_t, 2))(0x73DE66B5DEAA51D8L, 0x57341EE2701EC2C9L), 0x57341EE2701EC2C9L);
    int8_t l_748 = 1L;
    union U0 *l_763 = &p_1251->g_389;
    uint64_t l_774 = 0xA63ED5EB98D6203FL;
    VECTOR(int32_t, 2) l_781 = (VECTOR(int32_t, 2))(0L, 0x4FF98633L);
    int32_t *l_882 = (void*)0;
    union U2 *l_888[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t **l_901 = &p_1251->g_564[2][0][0];
    int16_t l_922 = 1L;
    VECTOR(int8_t, 2) l_927 = (VECTOR(int8_t, 2))(0x6BL, 0x7DL);
    uint32_t l_938 = 0x847D351DL;
    VECTOR(int32_t, 4) l_964 = (VECTOR(int32_t, 4))(0x6E5DF486L, (VECTOR(int32_t, 2))(0x6E5DF486L, 0x15422FD3L), 0x15422FD3L);
    VECTOR(int32_t, 16) l_996 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6819A9C5L), 0x6819A9C5L), 0x6819A9C5L, (-1L), 0x6819A9C5L, (VECTOR(int32_t, 2))((-1L), 0x6819A9C5L), (VECTOR(int32_t, 2))((-1L), 0x6819A9C5L), (-1L), 0x6819A9C5L, (-1L), 0x6819A9C5L);
    VECTOR(int32_t, 2) l_997 = (VECTOR(int32_t, 2))((-5L), (-1L));
    union U3 *l_1044[9] = {&p_1251->g_659[4][2][0],&p_1251->g_788[3],&p_1251->g_659[4][2][0],&p_1251->g_659[4][2][0],&p_1251->g_788[3],&p_1251->g_659[4][2][0],&p_1251->g_659[4][2][0],&p_1251->g_788[3],&p_1251->g_659[4][2][0]};
    union U2 *l_1050 = (void*)0;
    int16_t l_1060 = 0x09FFL;
    int32_t l_1087 = 0L;
    VECTOR(uint32_t, 8) l_1116 = (VECTOR(uint32_t, 8))(0x65EBF29DL, (VECTOR(uint32_t, 4))(0x65EBF29DL, (VECTOR(uint32_t, 2))(0x65EBF29DL, 0x05CB10A5L), 0x05CB10A5L), 0x05CB10A5L, 0x65EBF29DL, 0x05CB10A5L);
    int32_t *l_1141 = &p_1251->g_649;
    int i, j;
    if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(p_1251->g_650.xyyxywyzzzzwwzyx)))).s10)))))).odd)
    { /* block id: 346 */
        int32_t l_656 = (-1L);
        VECTOR(uint16_t, 2) l_663 = (VECTOR(uint16_t, 2))(65535UL, 0UL);
        uint64_t *l_664 = &p_1251->g_489;
        uint64_t *l_665 = (void*)0;
        int16_t *l_667 = (void*)0;
        int16_t *l_668 = (void*)0;
        int8_t *l_672 = &p_1251->g_673;
        uint32_t *l_680[4];
        int32_t *l_693[3][5][5] = {{{&p_1251->g_6,&p_1251->g_6,&l_666,&p_1251->g_649,&l_666},{&p_1251->g_6,&p_1251->g_6,&l_666,&p_1251->g_649,&l_666},{&p_1251->g_6,&p_1251->g_6,&l_666,&p_1251->g_649,&l_666},{&p_1251->g_6,&p_1251->g_6,&l_666,&p_1251->g_649,&l_666},{&p_1251->g_6,&p_1251->g_6,&l_666,&p_1251->g_649,&l_666}},{{&p_1251->g_6,&p_1251->g_6,&l_666,&p_1251->g_649,&l_666},{&p_1251->g_6,&p_1251->g_6,&l_666,&p_1251->g_649,&l_666},{&p_1251->g_6,&p_1251->g_6,&l_666,&p_1251->g_649,&l_666},{&p_1251->g_6,&p_1251->g_6,&l_666,&p_1251->g_649,&l_666},{&p_1251->g_6,&p_1251->g_6,&l_666,&p_1251->g_649,&l_666}},{{&p_1251->g_6,&p_1251->g_6,&l_666,&p_1251->g_649,&l_666},{&p_1251->g_6,&p_1251->g_6,&l_666,&p_1251->g_649,&l_666},{&p_1251->g_6,&p_1251->g_6,&l_666,&p_1251->g_649,&l_666},{&p_1251->g_6,&p_1251->g_6,&l_666,&p_1251->g_649,&l_666},{&p_1251->g_6,&p_1251->g_6,&l_666,&p_1251->g_649,&l_666}}};
        uint32_t l_694 = 0x489F67ECL;
        uint32_t l_698 = 0UL;
        uint16_t l_701 = 0x0D21L;
        VECTOR(uint8_t, 4) l_712 = (VECTOR(uint8_t, 4))(0x13L, (VECTOR(uint8_t, 2))(0x13L, 0x2EL), 0x2EL);
        int16_t l_736 = 0x05FAL;
        uint32_t **l_810 = &p_1251->g_564[2][0][0];
        VECTOR(uint32_t, 2) l_835 = (VECTOR(uint32_t, 2))(9UL, 0x30170959L);
        VECTOR(uint64_t, 4) l_845 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551609UL), 18446744073709551609UL);
        union U1 *l_880 = &p_1251->g_881;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_680[i] = &l_653;
        l_674.y = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((safe_sub_func_uint64_t_u_u(l_653, (safe_add_func_int32_t_s_s(l_656, (safe_div_func_uint32_t_u_u((p_1251->g_659[1][4][1] , ((VECTOR(uint32_t, 4))(p_1251->g_660.yyyx)).z), ((VECTOR(uint32_t, 8))(abs(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(0x9A31A434L, 0xA824B681L)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))((safe_lshift_func_uint16_t_u_u(((((VECTOR(uint16_t, 4))(0x3683L, ((VECTOR(uint16_t, 2))(l_663.yy)), 0x2AF8L)).y < l_653) != (l_669[0][7] = ((l_666 = ((*l_664) = p_1251->g_489)) , (l_666 |= (l_653 ^ ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-7L), 0x16B06FF2L)).xxxyyxxyyxxxyyyx)).sf))))), p_1251->g_414.y)), 4294967295UL, 4294967295UL, (safe_lshift_func_int8_t_s_s(((*l_672) ^= (9L < (0x13EA8830L | l_666))), l_669[0][7])), ((VECTOR(uint32_t, 4))(0x04F0E647L)), 0x078B5570L, 0xD1C21629L, ((VECTOR(uint32_t, 4))(4294967290UL)), 0xF3CE6144L, 0UL)).s54))))).yxyyyyyx))).s1)))))), ((VECTOR(int32_t, 8))(0x72EAFF87L)), ((VECTOR(int32_t, 2))(0x69315612L)), (-8L), l_656, ((VECTOR(int32_t, 2))(8L)), 0x7DA92AA3L)).even)).s6;
        if ((atomic_inc(&p_1251->l_atomic_input[7]) == 8))
        { /* block id: 354 */
            int32_t l_675 = 0x71B7A9CCL;
            for (l_675 = (-12); (l_675 != (-8)); ++l_675)
            { /* block id: 357 */
                int32_t l_679 = 1L;
                int32_t *l_678[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_678[i] = &l_679;
                l_678[0] = (void*)0;
            }
            unsigned int result = 0;
            result += l_675;
            atomic_add(&p_1251->l_special_values[7], result);
        }
        else
        { /* block id: 360 */
            (1 + 1);
        }
        if ((l_653 == 18446744073709551613UL))
        { /* block id: 363 */
            int8_t *l_681 = (void*)0;
            int32_t l_682 = 0x09077851L;
            int32_t **l_691 = &p_1251->g_381;
            int32_t **l_692[9] = {&p_1251->g_381,&p_1251->g_381,&p_1251->g_381,&p_1251->g_381,&p_1251->g_381,&p_1251->g_381,&p_1251->g_381,&p_1251->g_381,&p_1251->g_381};
            union U3 *l_695 = &p_1251->g_696;
            uint32_t l_737[6] = {0x1A954C8DL,0x1A954C8DL,0x1A954C8DL,0x1A954C8DL,0x1A954C8DL,0x1A954C8DL};
            uint8_t l_741 = 0x04L;
            uint16_t l_745 = 0x2854L;
            uint64_t *l_770 = &p_1251->g_489;
            uint32_t *l_803 = &l_653;
            VECTOR(uint32_t, 16) l_832 = (VECTOR(uint32_t, 16))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0x19FD9C52L), 0x19FD9C52L), 0x19FD9C52L, 4294967289UL, 0x19FD9C52L, (VECTOR(uint32_t, 2))(4294967289UL, 0x19FD9C52L), (VECTOR(uint32_t, 2))(4294967289UL, 0x19FD9C52L), 4294967289UL, 0x19FD9C52L, 4294967289UL, 0x19FD9C52L);
            int16_t l_856 = 0x5D5EL;
            int i;
            l_682 = (GROUP_DIVERGE(1, 1) ^ (((&l_653 == l_680[1]) && p_1251->g_489) >= (l_672 != l_681)));
            if (((VECTOR(int32_t, 16))((l_669[0][7] = (safe_add_func_uint32_t_u_u((((l_682 = 2L) , (p_1251->g_685 , func_401(l_682, (l_682 < (safe_sub_func_uint32_t_u_u(((l_674.y >= (safe_unary_minus_func_int16_t_s(l_663.y))) || ((l_682 || ((l_693[1][3][4] = func_2(&p_1251->g_6, l_680[1], p_1251)) != &l_669[0][3])) < 0x47DA3E65L)), l_694))), l_663.x, l_674.x, p_1251->g_388, p_1251))) == l_695), (-1L)))), ((VECTOR(int32_t, 2))(0x27F442FFL)), l_674.x, (-1L), 0x3DDC88F8L, ((VECTOR(int32_t, 2))(2L)), l_697, 0x2D979F81L, p_1251->g_493, l_698, l_674.y, 4L, (-1L), 1L)).s5)
            { /* block id: 368 */
                VECTOR(int16_t, 2) l_710 = (VECTOR(int16_t, 2))(1L, (-1L));
                int32_t l_714 = 0x7EC25F0BL;
                int8_t l_733 = 0x3EL;
                int32_t l_734 = 0x0F95F3EFL;
                int32_t l_735[5][1][2] = {{{0x2CCC64F8L,0x2CCC64F8L}},{{0x2CCC64F8L,0x2CCC64F8L}},{{0x2CCC64F8L,0x2CCC64F8L}},{{0x2CCC64F8L,0x2CCC64F8L}},{{0x2CCC64F8L,0x2CCC64F8L}}};
                int i, j, k;
                for (l_656 = 28; (l_656 != 7); l_656--)
                { /* block id: 371 */
                    uint64_t *l_709 = &p_1251->g_457;
                    int16_t *l_713 = (void*)0;
                    int32_t l_730 = 0x5AF92442L;
                    int32_t l_731 = 0x08494594L;
                    l_731 = ((l_701 ^ ((((void*)0 != l_702) && (((safe_add_func_uint64_t_u_u(l_669[0][7], p_1251->g_462.z)) > ((safe_sub_func_int16_t_s_s((safe_div_func_int64_t_s_s(p_1251->g_389.f0, ((*l_709) = FAKE_DIVERGE(p_1251->local_2_offset, get_local_id(2), 10)))), (l_714 = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_710.xxxyxxxxyxyxyyyx)).odd)).s5137235732501052, ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1251->g_711.xz)), 0x3AL, 0x61L)).xyxwxzxxzyyzzwxz, ((VECTOR(uint8_t, 4))(l_712.yyxz)).ywxzxzxxxzxxyzxz)))))).odd)).s1))) & (((VECTOR(int32_t, 16))(2L, (safe_sub_func_int64_t_s_s(l_710.y, ((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 16))(l_721.zxywwzwxyzxzxwxx)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))((safe_mod_func_int8_t_s_s(((*l_672) &= (l_730 = ((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((0x3B35L <= l_674.x), 0x17608D794F785A1CL)) | l_710.x), l_721.w)), p_1251->g_481.s3)) & p_1251->g_6))), l_731)), ((VECTOR(int64_t, 4))(0x4D304026A0FC1DFEL)), ((VECTOR(int64_t, 2))(0x1574C614F683D932L)), 0x28FE471CBA1ADDDDL)).s41)).xyyyyyxyxyyxyxyy, ((VECTOR(int64_t, 16))(1L))))).s16f2)).yywwwzzw, ((VECTOR(int64_t, 8))(0x573D9AFED10B8D12L))))).s63)).hi == 1UL) & l_731), p_1251->g_732)), 0xE399B88DL)) ^ l_669[0][4]), ((VECTOR(uint64_t, 2))(0xB12895713FF4ABD6L)), 0x8AEDB470DC749E45L)).yzzwxyzxywzzzyzz)), ((VECTOR(uint64_t, 16))(1UL)), ((VECTOR(uint64_t, 16))(0x32774F16738DB39DL))))), ((VECTOR(uint64_t, 16))(1UL))))).s6)), ((VECTOR(int32_t, 8))(1L)), (-10L), ((VECTOR(int32_t, 2))((-10L))), l_721.x, 1L, (-1L))).sa , 0x2CC0L))) <= l_710.y)) >= FAKE_DIVERGE(p_1251->group_0_offset, get_group_id(0), 10))) || 0x4CA8L);
                    (*p_1251->g_380) = &p_1251->g_6;
                    if ((**p_1251->g_380))
                        break;
                }
                ++l_737[1];
                l_741 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1251->g_740.yx)), (-2L), 0x27A5B9B0L)).w;
            }
            else
            { /* block id: 382 */
                int64_t l_743[4][4] = {{0x0893036079C4F57EL,0x7D9C374AEAF7CE1AL,0x0893036079C4F57EL,0x0893036079C4F57EL},{0x0893036079C4F57EL,0x7D9C374AEAF7CE1AL,0x0893036079C4F57EL,0x0893036079C4F57EL},{0x0893036079C4F57EL,0x7D9C374AEAF7CE1AL,0x0893036079C4F57EL,0x0893036079C4F57EL},{0x0893036079C4F57EL,0x7D9C374AEAF7CE1AL,0x0893036079C4F57EL,0x0893036079C4F57EL}};
                int32_t *l_764 = &l_682;
                VECTOR(uint8_t, 4) l_812 = (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0UL), 0UL);
                union U1 *l_817 = &p_1251->g_818;
                union U0 *l_828[4];
                VECTOR(uint32_t, 8) l_833 = (VECTOR(uint32_t, 8))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 1UL), 1UL), 1UL, 4UL, 1UL);
                VECTOR(int8_t, 8) l_871 = (VECTOR(int8_t, 8))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0x62L), 0x62L), 0x62L, 9L, 0x62L);
                uint64_t l_872 = 0xF6E4BF6C60174AF5L;
                int32_t l_874 = 0x19BFBE36L;
                int32_t *l_879 = &p_1251->g_818.f0;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_828[i] = &p_1251->g_389;
                if (p_1251->g_673)
                { /* block id: 383 */
                    int32_t l_742 = 0x088A2F89L;
                    int32_t l_744[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_744[i] = 8L;
                    ++l_745;
                    if (l_743[3][1])
                    { /* block id: 385 */
                        uint32_t l_749 = 0x076B197EL;
                        uint32_t l_761 = 4294967291UL;
                        l_749++;
                        p_1251->g_638[3].f2 = (p_1251->g_415.y ^ ((l_743[3][0] <= ((safe_lshift_func_uint8_t_u_s(((void*)0 == &l_669[0][7]), l_669[0][3])) && 0x30F80078EE49A807L)) & (((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((p_1251->g_457 > (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(p_1251->g_760.se2326c1f)).lo)).w, (p_1251->g_630.s6 <= l_749)))), l_761)), l_669[0][7])) == 0x1E280133L) & 0xC133L)));
                    }
                    else
                    { /* block id: 388 */
                        union U0 **l_762[5][9] = {{&p_1251->g_466,&p_1251->g_388,&p_1251->g_388,&p_1251->g_466,&p_1251->g_388,(void*)0,(void*)0,&p_1251->g_388,&p_1251->g_466},{&p_1251->g_466,&p_1251->g_388,&p_1251->g_388,&p_1251->g_466,&p_1251->g_388,(void*)0,(void*)0,&p_1251->g_388,&p_1251->g_466},{&p_1251->g_466,&p_1251->g_388,&p_1251->g_388,&p_1251->g_466,&p_1251->g_388,(void*)0,(void*)0,&p_1251->g_388,&p_1251->g_466},{&p_1251->g_466,&p_1251->g_388,&p_1251->g_388,&p_1251->g_466,&p_1251->g_388,(void*)0,(void*)0,&p_1251->g_388,&p_1251->g_466},{&p_1251->g_466,&p_1251->g_388,&p_1251->g_388,&p_1251->g_466,&p_1251->g_388,(void*)0,(void*)0,&p_1251->g_388,&p_1251->g_466}};
                        int i, j;
                        l_763 = (void*)0;
                        return &p_1251->g_6;
                    }
                }
                else
                { /* block id: 392 */
                    uint16_t l_765 = 0x9AABL;
                    uint16_t *l_772 = &p_1251->g_493;
                    int32_t l_773[6] = {0x15342F40L,0x15342F40L,0x15342F40L,0x15342F40L,0x15342F40L,0x15342F40L};
                    uint32_t ***l_811 = &l_810;
                    uint32_t **l_814 = &l_803;
                    uint32_t ***l_813 = &l_814;
                    VECTOR(uint8_t, 4) l_839 = (VECTOR(uint8_t, 4))(0xCEL, (VECTOR(uint8_t, 2))(0xCEL, 254UL), 254UL);
                    int i;
                    l_773[5] = ((*l_764) = ((~0x149FC25307D3C546L) , ((--l_765) != (safe_rshift_func_int16_t_s_s(((p_1251->g_711.y <= (((l_770 = &p_1251->g_491) != l_702) < ((*l_772) |= ((VECTOR(uint16_t, 8))(p_1251->g_771.xyyxyyyy)).s6))) , 0x1D4DL), 10)))));
                    if ((p_1251->g_6 = l_774))
                    { /* block id: 399 */
                        (*l_764) = 0x31E628ADL;
                    }
                    else
                    { /* block id: 401 */
                        uint16_t *l_795 = (void*)0;
                        uint16_t *l_796 = &l_701;
                        int16_t *l_797 = (void*)0;
                        int16_t *l_798 = &l_736;
                        int32_t *l_799 = &l_773[4];
                        (*l_799) = (p_1251->g_489 < ((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(0x015B3EB54E4D11CBL, ((VECTOR(int64_t, 2))(0x26F72286C7051ED8L, (-8L))), 0x7803BD2458441996L)), ((((((safe_mod_func_int64_t_s_s((safe_add_func_int64_t_s_s((safe_add_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 4))(l_781.xxxx)).wzwzzwxzwwwwzyyx, ((VECTOR(uint32_t, 2))(p_1251->g_782.s51)).xxyyxxyyyyyyyxxy))))).s9 , 0x4DL))), 0x12ADF44377EFECC6L)), ((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 2))(p_1251->g_785.xx)).xyyx))).y, ((safe_rshift_func_uint16_t_u_s((!(p_1251->g_493 ^= FAKE_DIVERGE(p_1251->local_1_offset, get_local_id(1), 10))), ((*l_798) ^= (p_1251->g_788[3] , (safe_mod_func_uint32_t_u_u(FAKE_DIVERGE(p_1251->local_0_offset, get_local_id(0), 10), (safe_div_func_uint8_t_u_u(((p_1251->g_740.y && l_748) | (safe_mod_func_uint16_t_u_u(((*l_796) = (p_1251->g_760.s3 , ((VECTOR(uint16_t, 2))(0UL, 0UL)).odd)), (l_773[2] & 18446744073709551606UL)))), p_1251->g_462.y)))))))) != p_1251->g_771.x))) ^ 18446744073709551608UL))) && p_1251->g_414.y) || l_765) , 0x6D34D70CA2E249EDL) , (void*)0) != l_799), 1L, 0x5533CAD6EA138D16L, ((VECTOR(int64_t, 8))(0L)), 9L)).lo)).even))).z);
                    }
                    (*l_764) &= ((VECTOR(int32_t, 16))(p_1251->g_800.xyxzwwyzzzyxyxzy)).s9;
                    if ((safe_add_func_uint32_t_u_u((l_803 == (void*)0), (safe_sub_func_int16_t_s_s((-1L), (safe_div_func_int32_t_s_s(0L, (safe_lshift_func_int16_t_s_u((((*l_811) = l_810) == ((*l_813) = (((((p_1251->g_389.f0 ^ (((VECTOR(uint8_t, 16))(l_812.zwxyyxzywwwyzwyz)).s2 ^ (&p_1251->g_420 != &l_695))) >= l_773[5]) >= 6L) <= p_1251->g_760.s6) , &p_1251->g_564[2][0][1]))), 12)))))))))
                    { /* block id: 410 */
                        int8_t l_821 = 1L;
                        int64_t *l_824 = &p_1251->g_825;
                        (*l_764) = (safe_rshift_func_int8_t_s_u(l_773[5], 0));
                        (*p_1251->g_819) = l_817;
                        l_669[0][5] |= (((l_821 < (*l_764)) && ((((((&p_1251->g_673 == ((safe_mul_func_int16_t_s_s((((*l_824) ^= 0x15CE880CEF46B9ABL) , (p_1251->g_685.f0 , ((1L > (safe_div_func_uint8_t_u_u(p_1251->g_825, (GROUP_DIVERGE(1, 1) , (p_1251->g_462.w || (*l_764)))))) & 0x24L))), p_1251->g_771.x)) , &p_1251->g_673)) <= GROUP_DIVERGE(1, 1)) , FAKE_DIVERGE(p_1251->local_2_offset, get_local_id(2), 10)) < l_773[0]) & l_821) < l_774)) & l_781.x);
                    }
                    else
                    { /* block id: 415 */
                        union U0 **l_829 = &l_828[0];
                        uint64_t *l_875 = &l_774;
                        int32_t l_876 = 0x02B55C84L;
                        (*l_829) = l_828[0];
                        (*l_764) = ((+l_765) >= (((((*l_764) > ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_832.sd6)).xxyxyxxx)), 0xB51DE23BL, 0xCF500D17L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_833.s67)).xyxx)), 0x9C5F8356L, 4294967290UL)).hi, ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 16))(p_1251->g_834.s6ab37eba45313306)).sf6, ((VECTOR(uint32_t, 2))(9UL, 4294967292UL))))).xyxxxxxx))).s53, ((VECTOR(uint32_t, 4))(l_835.xxyy)).lo))).lo) || (((*l_764) != ((safe_sub_func_int8_t_s_s(((*l_672) &= ((VECTOR(int8_t, 2))(p_1251->g_838.s0a)).even), ((VECTOR(uint8_t, 4))(l_839.yzwy)).x)) , (safe_rshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), 65526UL)), (0x3FL || ((l_876 |= (((((*l_672) = ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_1251->g_844.sa3)).yxyxxyyyyxyxxyyy))))).s7f)).xxxyxxyyyyxyyxxy)).odd)).s2) && (((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_845.zz)), 0xE16F9CAA252916E4L, 18446744073709551615UL)).wxxwzxwyzywzywzy, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0x9F000BDA49FC23C5L, 18446744073709551615UL)).xyyxxyyxxyyxxyyx))))).sc && (safe_add_func_uint64_t_u_u(((*l_875) = (((safe_add_func_int32_t_s_s((p_1251->g_649 = (l_874 = ((((!(safe_rshift_func_int16_t_s_s((safe_add_func_int64_t_s_s(l_774, (FAKE_DIVERGE(p_1251->group_2_offset, get_group_id(2), 10) >= 1L))), 12))) || ((--(*l_803)) <= ((safe_rshift_func_int16_t_s_s((~p_1251->g_785.y), ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_871.s4106033337313427)).s2, 0x9BL)), 2)), (*l_764))), l_872)), 2)) , p_1251->g_873) == p_1251->g_873), 8L, (*l_764), ((VECTOR(int16_t, 4))(0x7DC8L)), ((VECTOR(int16_t, 8))(0x66ACL)), 0x7DE0L)))).s60f7, ((VECTOR(int16_t, 4))(1L))))).y)) == 246UL))) | l_669[0][4]) <= 0x7AA2D77E50C22D10L))), FAKE_DIVERGE(p_1251->group_2_offset, get_group_id(2), 10))) != p_1251->g_462.x) || p_1251->g_760.s5)), l_674.x)))) , FAKE_DIVERGE(p_1251->group_2_offset, get_group_id(2), 10)) , l_773[2])) != l_839.w)))))) >= (-1L))) != p_1251->g_844.sa) >= 0xAA84417EL));
                    }
                }
                l_880 = (((((p_1251->g_877 , ((0x1858L && (((&p_1251->g_825 == ((*p_1251->g_466) , l_770)) , (((VECTOR(int32_t, 2))(p_1251->g_878.yx)).odd , p_1251->g_414.y)) , 0xB6B7L)) <= (((*l_879) = (-1L)) , p_1251->g_844.sc))) & p_1251->g_493) ^ (-1L)) && (*l_764)) , l_817);
            }
            return l_882;
        }
        else
        { /* block id: 431 */
            int8_t l_883 = 0L;
            int32_t *l_887 = &p_1251->g_818.f0;
            int32_t **l_886 = &l_887;
            union U2 **l_890 = &l_888[4];
            l_883 = (-1L);
            p_1251->g_881.f2 = (safe_add_func_int32_t_s_s((l_882 == ((*l_886) = p_1251->g_564[2][0][1])), l_883));
            (*l_890) = l_888[4];
            for (p_1251->g_881.f2 = 0; (p_1251->g_881.f2 != 27); p_1251->g_881.f2 = safe_add_func_uint8_t_u_u(p_1251->g_881.f2, 5))
            { /* block id: 438 */
                if ((atomic_inc(&p_1251->l_atomic_input[10]) == 6))
                { /* block id: 440 */
                    uint16_t l_893 = 0xCDC0L;
                    uint32_t l_894 = 0xFD5055EAL;
                    l_894 &= l_893;
                    unsigned int result = 0;
                    result += l_893;
                    result += l_894;
                    atomic_add(&p_1251->l_special_values[10], result);
                }
                else
                { /* block id: 442 */
                    (1 + 1);
                }
                for (p_1251->g_889.f1 = 0; (p_1251->g_889.f1 == (-5)); p_1251->g_889.f1 = safe_sub_func_uint64_t_u_u(p_1251->g_889.f1, 7))
                { /* block id: 447 */
                    return l_887;
                }
            }
        }
        for (p_1251->g_493 = (-21); (p_1251->g_493 >= 36); p_1251->g_493 = safe_add_func_uint16_t_u_u(p_1251->g_493, 1))
        { /* block id: 454 */
            uint64_t l_900 = 0UL;
            VECTOR(uint8_t, 4) l_908 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x03L), 0x03L);
            int64_t *l_912 = (void*)0;
            int64_t **l_911 = &l_912;
            int32_t l_916 = 0x7BD5E497L;
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1251->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 200)), permutations[(safe_mod_func_uint32_t_u_u((((p_1251->g_899 , l_900) | (l_901 != (void*)0)) < (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x6FE8L, 65529UL)).yyyyyyxy)).s4 & (safe_mul_func_int8_t_s_s((&l_693[0][4][1] == &p_1251->g_381), ((safe_rshift_func_int8_t_s_u(((safe_mod_func_int8_t_s_s(((*l_672) = p_1251->g_431), FAKE_DIVERGE(p_1251->global_1_offset, get_global_id(1), 10))) ^ ((VECTOR(uint8_t, 16))(l_908.yywwwzwzzxwyyxxx)).sc), 2)) > ((~GROUP_DIVERGE(0, 1)) , (safe_add_func_int16_t_s_s((l_702 != ((*l_911) = l_664)), p_1251->g_414.y)))))))), 10))][(safe_mod_func_uint32_t_u_u(p_1251->tid, 200))]));
            for (p_1251->g_889.f1 = 0; (p_1251->g_889.f1 <= 9); p_1251->g_889.f1 = safe_add_func_int16_t_s_s(p_1251->g_889.f1, 5))
            { /* block id: 462 */
                int32_t l_915 = 0L;
                if (l_915)
                    break;
                l_916 = 0L;
            }
            if (l_908.z)
                break;
            l_882 = &l_669[0][7];
        }
    }
    else
    { /* block id: 469 */
        uint32_t l_924 = 0xFBABBB16L;
        VECTOR(int32_t, 4) l_925 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 8L), 8L);
        VECTOR(int8_t, 2) l_929 = (VECTOR(int8_t, 2))(0x15L, 0x52L);
        VECTOR(int8_t, 2) l_930 = (VECTOR(int8_t, 2))(0x67L, (-6L));
        int32_t l_939 = 1L;
        int8_t *l_940 = (void*)0;
        int8_t *l_941 = (void*)0;
        int8_t *l_942 = (void*)0;
        int8_t *l_943 = &l_748;
        int8_t l_962 = (-10L);
        union U1 **l_978 = (void*)0;
        uint16_t l_1056 = 0x6F7CL;
        VECTOR(uint64_t, 16) l_1085 = (VECTOR(uint64_t, 16))(0x00BAA97E39E28497L, (VECTOR(uint64_t, 4))(0x00BAA97E39E28497L, (VECTOR(uint64_t, 2))(0x00BAA97E39E28497L, 0xE989B97CBCD18CE9L), 0xE989B97CBCD18CE9L), 0xE989B97CBCD18CE9L, 0x00BAA97E39E28497L, 0xE989B97CBCD18CE9L, (VECTOR(uint64_t, 2))(0x00BAA97E39E28497L, 0xE989B97CBCD18CE9L), (VECTOR(uint64_t, 2))(0x00BAA97E39E28497L, 0xE989B97CBCD18CE9L), 0x00BAA97E39E28497L, 0xE989B97CBCD18CE9L, 0x00BAA97E39E28497L, 0xE989B97CBCD18CE9L);
        int16_t l_1103 = 0x2082L;
        int64_t *l_1119 = &p_1251->g_825;
        int64_t **l_1118[4][9] = {{(void*)0,&l_1119,&l_1119,&l_1119,(void*)0,(void*)0,&l_1119,&l_1119,&l_1119},{(void*)0,&l_1119,&l_1119,&l_1119,(void*)0,(void*)0,&l_1119,&l_1119,&l_1119},{(void*)0,&l_1119,&l_1119,&l_1119,(void*)0,(void*)0,&l_1119,&l_1119,&l_1119},{(void*)0,&l_1119,&l_1119,&l_1119,(void*)0,(void*)0,&l_1119,&l_1119,&l_1119}};
        int32_t *l_1124[4][8][5] = {{{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0}},{{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0}},{{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0}},{{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0},{(void*)0,&p_1251->g_979[2],(void*)0,&p_1251->g_979[2],(void*)0}}};
        int i, j, k;
        if ((safe_div_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((p_1251->g_921 , l_922) <= (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(p_1251->g_923.xyxyyxyyxyxxyxxx)).s69)).odd || (((((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(0L, 0x6D7BB226L, (l_674.w &= l_924), ((VECTOR(int32_t, 2))(7L, 0x59DDF824L)), l_924, 0x6A896396L, (-1L))).s3250464571573360, ((VECTOR(int32_t, 2))(l_925.yz)).yxxyyyyyyxxyyxxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 0x769A1717L)), 0x6157C058L, (-6L))))).xwwyyyxy)).s4050534321271433))).s5 , ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(p_1251->g_926.xyyxyyxxxyyxyxxx)).sf6, ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_927.yxxyxxxxyxxyxxyx)))).s75)).yxxyxyyx, ((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))((-1L), 0x72L)).xxyyyyxxxxyyyyxy, ((VECTOR(int8_t, 16))(p_1251->g_928.s4627740677314157))))).odd))).s26, ((VECTOR(int8_t, 16))(l_929.xyyxyyxxyyxyxyxx)).s38))), ((VECTOR(int8_t, 8))(l_930.yyyyxxyy)), ((*l_943) = ((l_939 &= (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 16))((-1L), 0x4BAD9E02L, ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(7L, 1L, 0L, (-1L))).x, (&p_1251->g_820[4][4][0] != (FAKE_DIVERGE(p_1251->global_0_offset, get_global_id(0), 10) , &p_1251->g_820[3][3][0])))) < ((1UL >= (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1251->g_937.ww)).yxyxyyyyyxyxyxyy)).s2da7)).x, l_938))) < (&l_748 != (void*)0))), 0x1C1D60BFL, l_925.w, ((VECTOR(int32_t, 4))((-1L))), l_674.w, ((VECTOR(int32_t, 4))(0x2CBBB51BL)), 0x2648294DL, (-1L))).s2, 0x1AFCEDDEL))) == l_929.x)), 0L, ((VECTOR(int8_t, 4))(1L)))).sf1, ((VECTOR(int8_t, 2))(0x2DL))))).even) <= l_929.x) , l_925.z))), l_938)), p_1251->g_928.s0)))
        { /* block id: 473 */
            int8_t l_947[5] = {8L,8L,8L,8L,8L};
            int32_t *l_963[6];
            uint16_t l_1010 = 0UL;
            uint32_t l_1022 = 0x717DA30EL;
            int32_t l_1027 = 8L;
            uint16_t l_1031 = 1UL;
            union U3 *l_1043 = &p_1251->g_685;
            union U2 *l_1047 = &p_1251->g_889;
            int32_t l_1058 = 0x60B2C4B4L;
            union U1 *l_1059[7][4][3] = {{{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0}},{{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0}},{{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0}},{{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0}},{{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0}},{{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0}},{{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0},{&p_1251->g_1054[1][9][3],(void*)0,(void*)0}}};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_963[i] = &l_939;
            for (l_922 = 8; (l_922 > (-17)); l_922--)
            { /* block id: 476 */
                int32_t *l_946[10][8][3] = {{{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0}},{{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0}},{{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0}},{{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0}},{{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0}},{{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0}},{{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0}},{{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0}},{{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0}},{{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0},{&p_1251->g_649,(void*)0,(void*)0}}};
                int i, j, k;
                l_947[1] = 2L;
                l_925.w = (safe_rshift_func_uint8_t_u_u(((p_1251->g_650.y > p_1251->g_489) && (safe_rshift_func_int8_t_s_s((p_1251->g_760.sd != ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1251->g_952.yxxyxxxy)).s5766200545411071)).s1), 4))), (safe_rshift_func_int8_t_s_u((l_947[4] & (p_1251->g_923.x != (safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((l_947[0] >= (~(((((safe_sub_func_uint64_t_u_u(((safe_unary_minus_func_int8_t_s((-1L))) || ((&l_939 != &p_1251->g_649) || l_947[1])), 0x076C51B6F66BA3CDL)) != 0UL) , l_947[4]) < l_947[1]) | p_1251->g_414.x))) , FAKE_DIVERGE(p_1251->local_1_offset, get_local_id(1), 10)), p_1251->g_928.s3)), p_1251->g_673)))), p_1251->g_923.x))));
                l_962 = (((l_929.y && p_1251->g_462.w) != 18446744073709551615UL) == 9L);
                (*p_372) = func_2(l_963[3], &l_666, p_1251);
            }
            l_674.w &= ((VECTOR(int32_t, 4))(l_964.zywx)).y;
            for (l_748 = 0; (l_748 < 0); l_748 = safe_add_func_uint16_t_u_u(l_748, 8))
            { /* block id: 485 */
                uint8_t *l_980 = (void*)0;
                uint8_t *l_981 = &p_1251->g_412;
                int32_t l_982 = 0L;
                int32_t l_1023 = (-1L);
                union U1 *l_1034 = &p_1251->g_976;
                union U1 **l_1035 = &p_1251->g_820[3][3][0];
                union U3 *l_1042 = &p_1251->g_696;
                union U2 **l_1048 = &l_888[2];
                union U2 **l_1049[10][9][2] = {{{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047}},{{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047}},{{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047}},{{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047}},{{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047}},{{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047}},{{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047}},{{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047}},{{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047}},{{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047},{&l_1047,&l_1047}}};
                int32_t l_1055[8][9] = {{0x4249961EL,1L,0L,0x46D4D6E7L,0L,1L,0x4249961EL,0x13C7728EL,(-9L)},{0x4249961EL,1L,0L,0x46D4D6E7L,0L,1L,0x4249961EL,0x13C7728EL,(-9L)},{0x4249961EL,1L,0L,0x46D4D6E7L,0L,1L,0x4249961EL,0x13C7728EL,(-9L)},{0x4249961EL,1L,0L,0x46D4D6E7L,0L,1L,0x4249961EL,0x13C7728EL,(-9L)},{0x4249961EL,1L,0L,0x46D4D6E7L,0L,1L,0x4249961EL,0x13C7728EL,(-9L)},{0x4249961EL,1L,0L,0x46D4D6E7L,0L,1L,0x4249961EL,0x13C7728EL,(-9L)},{0x4249961EL,1L,0L,0x46D4D6E7L,0L,1L,0x4249961EL,0x13C7728EL,(-9L)},{0x4249961EL,1L,0L,0x46D4D6E7L,0L,1L,0x4249961EL,0x13C7728EL,(-9L)}};
                int8_t l_1057 = (-1L);
                int i, j, k;
                if (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((((&p_1251->g_889 == l_888[3]) & (safe_mul_func_int8_t_s_s(0x75L, (0x30L && 255UL)))) <= ((safe_lshift_func_int8_t_s_u(1L, ((*l_981) = (((VECTOR(uint32_t, 8))(p_1251->g_975.xyxyxxyy)).s5 ^ (((+(((p_1251->g_976 , &p_1251->g_820[3][3][0]) != (((VECTOR(uint64_t, 16))(p_1251->g_977.xyyyxxxyyxyxyxyx)).sd , l_978)) | l_962)) & p_1251->g_673) , p_1251->g_979[0]))))) | l_939)), p_1251->g_771.y)), l_925.y)) , l_982))
                { /* block id: 487 */
                    uint64_t *l_986[2];
                    uint64_t **l_985 = &l_986[0];
                    int16_t *l_987 = &l_922;
                    int32_t l_988 = (-2L);
                    int i;
                    for (i = 0; i < 2; i++)
                        l_986[i] = &p_1251->g_491;
                    l_982 &= (((VECTOR(int16_t, 16))(p_1251->g_983.s1990b0e37d338571)).s5 | (l_988 = ((*l_987) = ((p_1251->g_984 , l_702) != ((*l_985) = &p_1251->g_491)))));
                    (*p_372) = &l_669[0][7];
                }
                else
                { /* block id: 493 */
                    int16_t l_989 = 1L;
                    uint32_t *l_1017[4][6] = {{&l_653,&l_653,&l_653,&l_653,&l_653,&l_653},{&l_653,&l_653,&l_653,&l_653,&l_653,&l_653},{&l_653,&l_653,&l_653,&l_653,&l_653,&l_653},{&l_653,&l_653,&l_653,&l_653,&l_653,&l_653}};
                    uint16_t *l_1024 = &p_1251->g_493;
                    int i, j;
                    if (l_989)
                        break;
                    if (((safe_div_func_uint8_t_u_u(l_989, (((*l_1024) = (4294967290UL > (((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))(l_996.s1d55ff70)).s5, ((VECTOR(int32_t, 4))(l_997.yxxy)).z)) , l_925.y) < (((~(safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((((p_1251->g_462.z == (l_669[0][7] > ((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(0xC2C4L, 65535UL)).even, (safe_mul_func_int16_t_s_s((l_1010 , ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 8))((safe_sub_func_uint32_t_u_u((((l_982 = (~(l_939 ^= (safe_mod_func_int64_t_s_s(l_982, 18446744073709551610UL))))) ^ (safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s(0L, p_1251->g_696.f0)), 1L))) >= 0x35F239FC788DAE7CL), l_929.y)), l_982, (-1L), (-1L), 0x21L, ((VECTOR(int8_t, 2))(0x73L)), 0x60L)).s4, 6)), l_925.x, 0L, 0x0BF3L, (-9L), l_1022, 0x350BL, 1L)).odd)).x), l_1023)))), l_925.y)) | p_1251->g_952.x))) , 18446744073709551610UL) != l_964.z), l_924)), p_1251->g_711.x)), p_1251->g_975.x))) ^ 18446744073709551612UL) ^ 0UL)))) , l_930.y))) ^ l_1023))
                    { /* block id: 498 */
                        union U3 **l_1025 = &p_1251->g_420;
                        (*p_1251->g_380) = &l_939;
                        if (l_989)
                            break;
                        (*l_1025) = &p_1251->g_696;
                    }
                    else
                    { /* block id: 502 */
                        int32_t l_1026 = (-1L);
                        uint32_t l_1028 = 4294967291UL;
                        atomic_or(&p_1251->g_atomic_reduction[get_linear_group_id()], l_989);
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1251->v_collective += p_1251->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        l_1028--;
                    }
                }
                if (l_1031)
                    continue;
                l_925.x &= (l_982 = (((+(safe_div_func_uint16_t_u_u(((((*l_1035) = l_1034) != ((0x482DL && ((((((((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((((l_1043 = l_1042) == (void*)0) != (l_1044[8] == ((((safe_mul_func_uint16_t_u_u(((l_1050 = ((*l_1048) = l_1047)) == (p_1251->g_1051 = &p_1251->g_889)), ((0xF9111BA1L < GROUP_DIVERGE(2, 1)) != (safe_mod_func_int32_t_s_s((p_1251->g_1054[1][6][0] , p_1251->g_975.x), l_1055[7][7]))))) || l_930.y) < l_1056) , &p_1251->g_877))), 0x065EL)), l_1023)) && l_1057), p_1251->g_711.y)) && p_1251->g_984.f0) >= l_1023) , p_1251->g_926.y) , l_1058) && 0UL) , 0x639CACFCL) , 0x3C39L)) , l_1059[2][2][1])) , 65526UL), l_1023))) , &l_1042) != (void*)0));
            }
            --p_1251->g_1061;
        }
        else
        { /* block id: 517 */
            int16_t l_1076 = 0x0269L;
            int32_t l_1090 = 0x15E6570EL;
            uint8_t l_1092 = 0xB8L;
            int32_t l_1098 = 0x7CAA9A6EL;
            int32_t l_1101 = 1L;
            int32_t l_1102 = 0x04603356L;
            for (l_774 = 0; (l_774 >= 37); l_774 = safe_add_func_uint8_t_u_u(l_774, 4))
            { /* block id: 520 */
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1251->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 200)), permutations[(safe_mod_func_uint32_t_u_u(6UL, 10))][(safe_mod_func_uint32_t_u_u(p_1251->tid, 200))]));
            }
            for (p_1251->g_818.f0 = (-24); (p_1251->g_818.f0 < 24); p_1251->g_818.f0 = safe_add_func_int16_t_s_s(p_1251->g_818.f0, 1))
            { /* block id: 527 */
                union U1 *l_1081 = (void*)0;
                int32_t *l_1082 = &l_939;
                int16_t l_1091 = 5L;
                int32_t l_1093[10] = {(-1L),0x6F6176FBL,(-1L),(-1L),0x6F6176FBL,(-1L),(-1L),0x6F6176FBL,(-1L),(-1L)};
                int32_t l_1123 = 8L;
                int i;
                l_996.sd &= (((safe_mod_func_uint16_t_u_u(((GROUP_DIVERGE(0, 1) >= (safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((((l_1076 < (((*l_1082) = (safe_mod_func_uint32_t_u_u(l_1076, (safe_add_func_uint16_t_u_u(1UL, (l_1081 != (*p_1251->g_819))))))) & (safe_mul_func_int8_t_s_s((((VECTOR(uint64_t, 4))(l_1085.sec38)).x != (safe_unary_minus_func_int32_t_s(l_1087))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(0x04L, (p_1251->g_782.s4 && (((safe_mod_func_int8_t_s_s(l_1076, 0x0EL)) , l_1056) != l_1090)), 251UL, 255UL, p_1251->g_977.x, ((VECTOR(uint8_t, 4))(0x3BL)), 253UL, 1UL, 0xE3L, ((VECTOR(uint8_t, 2))(251UL)), 4UL, 0xA5L)).s1d, ((VECTOR(uint8_t, 2))(5UL))))).xyxx)).yxywxxwxxxyxxzyw)))).sb, ((VECTOR(uint8_t, 2))(0xB4L)), ((VECTOR(uint8_t, 4))(1UL)), GROUP_DIVERGE(0, 1), p_1251->g_975.x, 0UL, ((VECTOR(uint8_t, 2))(0x20L)), 0xBEL, p_1251->g_844.se, 0xD5L, 0UL)).s3898)).y)))) >= l_964.w) < l_1091), p_1251->g_838.sc)) & l_962), l_930.y)), l_1091))) != 3L), p_1251->g_630.s3)) || 253UL) & p_1251->g_952.y);
                if (l_1092)
                { /* block id: 530 */
                    if ((*l_1082))
                        break;
                    if (l_1092)
                        continue;
                }
                else
                { /* block id: 533 */
                    int32_t *l_1094 = (void*)0;
                    int32_t *l_1095 = &l_1093[3];
                    int32_t *l_1096 = &p_1251->g_976.f2;
                    int32_t *l_1097 = &l_1093[7];
                    int32_t *l_1099 = (void*)0;
                    int32_t *l_1100[6] = {&l_669[0][3],(void*)0,&l_669[0][3],&l_669[0][3],(void*)0,&l_669[0][3]};
                    VECTOR(uint16_t, 8) l_1117 = (VECTOR(uint16_t, 8))(0xACECL, (VECTOR(uint16_t, 4))(0xACECL, (VECTOR(uint16_t, 2))(0xACECL, 0xA4DBL), 0xA4DBL), 0xA4DBL, 0xACECL, 0xA4DBL);
                    union U3 **l_1120 = &p_1251->g_420;
                    uint8_t *l_1122[5] = {&p_1251->g_412,&p_1251->g_412,&p_1251->g_412,&p_1251->g_412,&p_1251->g_412};
                    int32_t *l_1127 = &p_1251->g_649;
                    int i;
                    ++p_1251->g_1104;
                    l_1127 = ((*p_1251->g_380) = func_2(&l_1101, func_2(func_2(func_2(&l_939, ((safe_div_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((((*l_1096) = (l_1123 ^= ((p_1251->g_1111 , (safe_sub_func_uint8_t_u_u((p_1251->g_983.sa ^ (l_1098 &= (safe_add_func_uint32_t_u_u(l_930.y, (((((*l_1082) = (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 16))(l_1116.s5730777363211041)).sa5, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_1117.s40)), 0xD210L, 0xD7EAL)), ((VECTOR(uint16_t, 2))(0UL, 0xAF40L)), 0xE819L, 0xDD61L)).s7074516652551675, ((VECTOR(uint16_t, 16))(65535UL, ((l_1118[3][4] == (void*)0) <= (((*l_1120) = &p_1251->g_696) == (p_1251->g_1121[9][1][1] , &p_1251->g_696))), p_1251->g_834.s7, ((VECTOR(uint16_t, 4))(0x4DD1L)), ((VECTOR(uint16_t, 2))(0UL)), 1UL, 0xB81FL, p_1251->g_740.x, 1UL, 0x4A83L, 0xD5C7L, 1UL))))).sc1ab, ((VECTOR(uint32_t, 4))(0x7B5543AAL))))).hi)).xxxyxyxyxxxxxyxy)).s5974)).hi))), 0xE5195F562BA67522L, 7UL)).x | l_1092)) < GROUP_DIVERGE(1, 1)) >= 0L) & (*l_1097)))))), 247UL))) <= 0x57530CB3L))) , 0x0FC3L) & (-1L)), l_925.z)) , 0x45A8L), l_930.y)) , (void*)0), p_1251), &l_666, p_1251), l_1124[3][5][1], p_1251), p_1251));
                    if ((**p_372))
                        continue;
                }
                if ((*p_1251->g_1126))
                    continue;
            }
        }
        for (p_1251->g_491 = 0; (p_1251->g_491 == 21); p_1251->g_491++)
        { /* block id: 549 */
            int32_t *l_1136 = (void*)0;
            int32_t l_1139 = 3L;
            uint32_t l_1140 = 0UL;
            for (p_1251->g_431 = 27; (p_1251->g_431 >= 1); --p_1251->g_431)
            { /* block id: 552 */
                for (p_1251->g_881.f1 = 24; (p_1251->g_881.f1 != 57); p_1251->g_881.f1 = safe_add_func_uint16_t_u_u(p_1251->g_881.f1, 3))
                { /* block id: 555 */
                    for (l_697 = (-3); (l_697 >= 42); l_697 = safe_add_func_uint32_t_u_u(l_697, 9))
                    { /* block id: 558 */
                        return l_1136;
                    }
                    (*p_1251->g_1126) = (-6L);
                    (*p_1251->g_1126) = (safe_mod_func_int16_t_s_s(l_1139, l_1140));
                    if ((*p_1251->g_1126))
                        break;
                }
            }
        }
        (*p_1251->g_1126) |= ((p_1251->g_414.y , FAKE_DIVERGE(p_1251->local_0_offset, get_local_id(0), 10)) && GROUP_DIVERGE(2, 1));
    }
    return l_1141;
}


/* ------------------------------------------ */
/* 
 * reads : p_1251->g_380 p_1251->g_381 p_1251->g_388 p_1251->g_comm_values p_1251->g_412 p_1251->g_414 p_1251->g_415 p_1251->l_comm_values p_1251->g_389.f0 p_1251->g_6 p_1251->g_420 p_1251->g_431 p_1251->g_389.f2 p_1251->g_457 p_1251->g_462 p_1251->g_489 p_1251->g_493 p_1251->g_389.f3 p_1251->g_481 p_1251->g_491 p_1251->g_554 p_1251->g_563 p_1251->g_618 p_1251->g_630 p_1251->g_564 p_1251->g_638 p_1251->g_389.f1 p_1251->g_649
 * writes: p_1251->g_6 p_1251->g_412 p_1251->g_420 p_1251->g_431 p_1251->g_389.f2 p_1251->g_457 p_1251->g_466 p_1251->g_481 p_1251->g_489 p_1251->g_491 p_1251->g_493 p_1251->g_389.f3 p_1251->g_554 p_1251->g_389.f1 p_1251->g_381 p_1251->g_649
 */
int32_t ** func_373(uint8_t  p_374, uint64_t  p_375, uint64_t  p_376, int32_t ** p_377, struct S4 * p_1251)
{ /* block id: 207 */
    int16_t l_393[1];
    VECTOR(uint64_t, 2) l_394 = (VECTOR(uint64_t, 2))(0x82F4B32328A2B727L, 18446744073709551615UL);
    uint8_t *l_411[7] = {&p_1251->g_412,&p_1251->g_412,&p_1251->g_412,&p_1251->g_412,&p_1251->g_412,&p_1251->g_412,&p_1251->g_412};
    union U0 *l_413 = &p_1251->g_389;
    VECTOR(int16_t, 2) l_416 = (VECTOR(int16_t, 2))(0x0DF2L, 0x7369L);
    VECTOR(int16_t, 4) l_417 = (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x49AAL), 0x49AAL);
    union U3 **l_421 = &p_1251->g_420;
    int16_t l_500[8][8][1] = {{{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL}},{{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL}},{{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL}},{{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL}},{{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL}},{{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL}},{{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL}},{{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL},{0x2B2EL}}};
    int32_t *l_647 = (void*)0;
    int32_t *l_648[9];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_393[i] = (-4L);
    for (i = 0; i < 9; i++)
        l_648[i] = &p_1251->g_649;
    (**p_1251->g_380) = 0x10AA573BL;
    p_1251->g_649 &= func_382(p_1251->g_388, func_390(l_393[0], (((VECTOR(uint64_t, 8))(l_394.yxyxyxxy)).s5 && func_395((safe_rshift_func_uint8_t_u_u(((0x1CL != func_399(((*l_421) = func_401(((~(((p_1251->g_412 |= (safe_rshift_func_uint8_t_u_u(p_1251->g_comm_values[p_1251->tid], 3))) != (l_413 == l_413)) ^ (((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(1L, 3L, p_1251->g_comm_values[p_1251->tid], ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(0x0F62L, ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(p_1251->g_414.xx)).yxxy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_1251->g_415.yyyx)))).yyywyzwwwxwwzywz, ((VECTOR(int16_t, 16))(l_416.yyyxyyxxxxxyyyxy))))).lo, ((VECTOR(int16_t, 8))(l_417.wxzyzwxw)), ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0x2853L, ((l_417.y | p_1251->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1251->tid, 200))]) != l_394.y), 0x012DL, 9L, 0x55B6L, (-3L), p_1251->g_389.f0, p_1251->g_comm_values[p_1251->tid], 1L, 0x0234L, ((VECTOR(int16_t, 4))(0x4FA0L)), 1L, 0x69BEL)).sda)), ((VECTOR(int16_t, 2))(0x6367L)))))))).yyyxxxyy))).odd, ((VECTOR(int16_t, 4))(0x3A4EL))))).hi, ((VECTOR(int16_t, 2))(0x7271L))))), 0x28D8L, 0L))))))), 0x409CL, 0L, 1L)).lo, ((VECTOR(int16_t, 4))(0x58ECL)), ((VECTOR(int16_t, 4))(0x6C1AL)))))))), 0x53CBL)).s5277463526463113, ((VECTOR(uint16_t, 16))(0x269BL))))).sf7cb, ((VECTOR(uint32_t, 4))(0xCC817D05L))))).z < 0x09736EBB5A25F942L))) ^ (*p_1251->g_381)), p_376, p_1251->g_comm_values[p_1251->tid], l_394.y, l_413, p_1251)), p_1251)) <= 0x71B87A02L), 1)), p_1251)), p_1251), l_417.x, l_417.x, l_500[7][0][0], p_1251);
    return p_377;
}


/* ------------------------------------------ */
/* 
 * reads : p_1251->g_493 p_1251->g_389.f3 p_1251->g_381 p_1251->g_462 p_1251->g_comm_values p_1251->g_412 p_1251->g_481 p_1251->g_491 p_1251->g_380 p_1251->g_6 p_1251->g_554 p_1251->g_431 p_1251->g_563 p_1251->g_618 p_1251->g_630 p_1251->g_564 p_1251->g_638 p_1251->g_389.f1
 * writes: p_1251->g_493 p_1251->g_389.f3 p_1251->g_6 p_1251->g_554 p_1251->g_431 p_1251->g_389.f1 p_1251->g_381
 */
int32_t  func_382(union U0 * p_383, uint64_t  p_384, int8_t  p_385, uint64_t  p_386, uint32_t  p_387, struct S4 * p_1251)
{ /* block id: 256 */
    int32_t *l_503 = &p_1251->g_6;
    int32_t l_519[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    VECTOR(uint64_t, 4) l_617 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL);
    uint32_t **l_640 = &p_1251->g_564[2][0][0];
    int32_t *l_646 = (void*)0;
    int i;
    for (p_1251->g_493 = (-27); (p_1251->g_493 != 25); p_1251->g_493++)
    { /* block id: 259 */
        uint16_t l_506 = 0x35B9L;
        int32_t **l_518 = &l_503;
        int32_t l_553 = 0x61017E43L;
        VECTOR(int16_t, 16) l_619 = (VECTOR(int16_t, 16))(0x03DEL, (VECTOR(int16_t, 4))(0x03DEL, (VECTOR(int16_t, 2))(0x03DEL, (-3L)), (-3L)), (-3L), 0x03DEL, (-3L), (VECTOR(int16_t, 2))(0x03DEL, (-3L)), (VECTOR(int16_t, 2))(0x03DEL, (-3L)), 0x03DEL, (-3L), 0x03DEL, (-3L));
        int8_t l_626 = 0x73L;
        uint32_t **l_639 = &p_1251->g_564[2][0][0];
        int i;
        l_503 = l_503;
        for (p_1251->g_389.f3 = 0; (p_1251->g_389.f3 > 23); ++p_1251->g_389.f3)
        { /* block id: 263 */
            int32_t *l_509 = (void*)0;
            uint16_t *l_520 = &l_506;
            int16_t *l_521 = (void*)0;
            int16_t *l_522[2][2][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
            int32_t l_523[9] = {0x52D39682L,0x52D39682L,0x52D39682L,0x52D39682L,0x52D39682L,0x52D39682L,0x52D39682L,0x52D39682L,0x52D39682L};
            int32_t *l_524 = &l_519[1];
            int i, j, k;
            l_506++;
            l_509 = (void*)0;
            if ((+((((+(((*l_524) = ((((((l_523[0] &= (safe_div_func_uint64_t_u_u(p_386, ((0x4CL & (((*l_520) = (((*p_1251->g_381) = 0x7E2CB77AL) > ((((~(((safe_sub_func_int16_t_s_s(p_1251->g_462.w, (p_1251->g_comm_values[p_1251->tid] > FAKE_DIVERGE(p_1251->global_1_offset, get_global_id(1), 10)))) ^ p_386) <= (safe_rshift_func_int8_t_s_u((p_385 , (safe_rshift_func_uint8_t_u_u(((void*)0 != l_518), 7))), p_1251->g_412)))) && 8L) & 0x7EL) < l_519[1]))) ^ p_1251->g_481.s6)) , p_387)))) && FAKE_DIVERGE(p_1251->global_0_offset, get_global_id(0), 10)) | FAKE_DIVERGE(p_1251->group_1_offset, get_group_id(1), 10)) >= p_1251->g_491) >= (-1L)) > 0x5AE4A67F9876BD99L)) , 0x043C57EB328D634DL)) != (-2L)) || (**p_1251->g_380)) == 1L)))
            { /* block id: 270 */
                if ((atomic_inc(&p_1251->l_atomic_input[3]) == 8))
                { /* block id: 272 */
                    uint32_t l_525 = 4UL;
                    uint32_t l_526 = 0x2E5CBB86L;
                    uint32_t l_527[4][4] = {{0xD32B82C3L,1UL,1UL,0xD32B82C3L},{0xD32B82C3L,1UL,1UL,0xD32B82C3L},{0xD32B82C3L,1UL,1UL,0xD32B82C3L},{0xD32B82C3L,1UL,1UL,0xD32B82C3L}};
                    int32_t l_528 = 0x49DF42F1L;
                    int32_t *l_529 = (void*)0;
                    int64_t l_530 = 0x7BA55BE020B5594EL;
                    uint64_t l_531 = 0xAF0E5E16EBA7A605L;
                    uint8_t l_534 = 0xEEL;
                    int64_t l_535 = 0x38DFBF64AFB98CACL;
                    VECTOR(int32_t, 8) l_536 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 7L), 7L), 7L, (-8L), 7L);
                    VECTOR(int32_t, 4) l_537 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
                    uint32_t l_538[6][5] = {{1UL,1UL,0x5D7E7C49L,1UL,0x7CE75AFCL},{1UL,1UL,0x5D7E7C49L,1UL,0x7CE75AFCL},{1UL,1UL,0x5D7E7C49L,1UL,0x7CE75AFCL},{1UL,1UL,0x5D7E7C49L,1UL,0x7CE75AFCL},{1UL,1UL,0x5D7E7C49L,1UL,0x7CE75AFCL},{1UL,1UL,0x5D7E7C49L,1UL,0x7CE75AFCL}};
                    int64_t l_539 = 0x2CD6EA46786622DEL;
                    VECTOR(int32_t, 2) l_540 = (VECTOR(int32_t, 2))((-1L), 3L);
                    uint16_t l_541 = 65535UL;
                    int32_t l_542 = 0x7F5F4CE0L;
                    uint32_t l_543 = 0x61027F3CL;
                    int64_t l_544 = 2L;
                    VECTOR(int32_t, 4) l_545 = (VECTOR(int32_t, 4))(0x42BF5A33L, (VECTOR(int32_t, 2))(0x42BF5A33L, 1L), 1L);
                    VECTOR(int32_t, 16) l_546 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0L), 0L), 0L, 6L, 0L, (VECTOR(int32_t, 2))(6L, 0L), (VECTOR(int32_t, 2))(6L, 0L), 6L, 0L, 6L, 0L);
                    uint32_t **l_547 = (void*)0;
                    uint32_t *l_549 = (void*)0;
                    uint32_t **l_548 = &l_549;
                    int i, j;
                    l_525 |= ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x4053C610L, 0x218B0C86L)))).yyxyxyyyyxxyxxxx))).sd;
                    l_528 = ((l_526 = (-1L)) , l_527[1][2]);
                    l_529 = (void*)0;
                    l_548 = ((++l_531) , (l_534 , (((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_535, ((VECTOR(int32_t, 2))((-6L), 0x0576799BL)), 4L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_536.s0714)).z, (l_538[2][1] = ((VECTOR(int32_t, 16))(l_537.zyzwwxzxwywzwyzw)).sb), 0x45B2F4F3L, 0x18B67E00L)), (l_539 |= 0x4B1179C9L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_540.yyyx)), 0x24F0C70FL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x0EEB93EEL, (-6L))), (-1L), 0x58D61F04L)).z, ((VECTOR(int32_t, 2))(0x7B686783L, 0x5B55FDE7L)), (l_542 = l_541), 0x6C07123CL, ((VECTOR(int32_t, 2))(0x4BF825F1L, 0x685561DEL)), 0x7AF0FDFFL, (l_544 = l_543), 0x3BCC6589L, 0x5DA4E156L)).s137f)), 3L, 0x753BFC77L, 0x57567753L)), ((VECTOR(int32_t, 4))(l_545.zzxz)).wxzwywzzxyyxwyww, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_546.s87)).yxxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x64456736L, (-9L))), 0x0FAB4047L, 0x3E9D5348L)).ywzyxwxzzyxzwxyw)).sd249))).zwzxxzxzyzzyzwyx))).s4 , l_547)));
                    unsigned int result = 0;
                    result += l_525;
                    result += l_526;
                    int l_527_i0, l_527_i1;
                    for (l_527_i0 = 0; l_527_i0 < 4; l_527_i0++) {
                        for (l_527_i1 = 0; l_527_i1 < 4; l_527_i1++) {
                            result += l_527[l_527_i0][l_527_i1];
                        }
                    }
                    result += l_528;
                    result += l_530;
                    result += l_531;
                    result += l_534;
                    result += l_535;
                    result += l_536.s7;
                    result += l_536.s6;
                    result += l_536.s5;
                    result += l_536.s4;
                    result += l_536.s3;
                    result += l_536.s2;
                    result += l_536.s1;
                    result += l_536.s0;
                    result += l_537.w;
                    result += l_537.z;
                    result += l_537.y;
                    result += l_537.x;
                    int l_538_i0, l_538_i1;
                    for (l_538_i0 = 0; l_538_i0 < 6; l_538_i0++) {
                        for (l_538_i1 = 0; l_538_i1 < 5; l_538_i1++) {
                            result += l_538[l_538_i0][l_538_i1];
                        }
                    }
                    result += l_539;
                    result += l_540.y;
                    result += l_540.x;
                    result += l_541;
                    result += l_542;
                    result += l_543;
                    result += l_544;
                    result += l_545.w;
                    result += l_545.z;
                    result += l_545.y;
                    result += l_545.x;
                    result += l_546.sf;
                    result += l_546.se;
                    result += l_546.sd;
                    result += l_546.sc;
                    result += l_546.sb;
                    result += l_546.sa;
                    result += l_546.s9;
                    result += l_546.s8;
                    result += l_546.s7;
                    result += l_546.s6;
                    result += l_546.s5;
                    result += l_546.s4;
                    result += l_546.s3;
                    result += l_546.s2;
                    result += l_546.s1;
                    result += l_546.s0;
                    atomic_add(&p_1251->l_special_values[3], result);
                }
                else
                { /* block id: 283 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 286 */
                int32_t l_550 = 0x4DCD2759L;
                int32_t *l_551 = &p_1251->g_6;
                int32_t *l_552[6][8] = {{&l_519[1],&l_523[5],(void*)0,&l_523[0],(void*)0,&l_523[5],&l_519[1],&l_519[4]},{&l_519[1],&l_523[5],(void*)0,&l_523[0],(void*)0,&l_523[5],&l_519[1],&l_519[4]},{&l_519[1],&l_523[5],(void*)0,&l_523[0],(void*)0,&l_523[5],&l_519[1],&l_519[4]},{&l_519[1],&l_523[5],(void*)0,&l_523[0],(void*)0,&l_523[5],&l_519[1],&l_519[4]},{&l_519[1],&l_523[5],(void*)0,&l_523[0],(void*)0,&l_523[5],&l_519[1],&l_519[4]},{&l_519[1],&l_523[5],(void*)0,&l_523[0],(void*)0,&l_523[5],&l_519[1],&l_519[4]}};
                int i, j;
                p_1251->g_554++;
            }
        }
        for (p_1251->g_431 = 0; (p_1251->g_431 >= 32); ++p_1251->g_431)
        { /* block id: 292 */
            VECTOR(uint64_t, 16) l_565 = (VECTOR(uint64_t, 16))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x628D4447715D1DB7L), 0x628D4447715D1DB7L), 0x628D4447715D1DB7L, 18446744073709551611UL, 0x628D4447715D1DB7L, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x628D4447715D1DB7L), (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x628D4447715D1DB7L), 18446744073709551611UL, 0x628D4447715D1DB7L, 18446744073709551611UL, 0x628D4447715D1DB7L);
            int32_t *l_568 = &l_519[1];
            int64_t l_624 = 0x1B88C9AF32296DE3L;
            int8_t l_625 = (-5L);
            uint16_t *l_633 = &p_1251->g_493;
            int i;
            if (((**p_1251->g_380) = (safe_mod_func_int64_t_s_s(((p_1251->g_563 != (void*)0) >= 0L), (*l_503)))))
            { /* block id: 294 */
                if ((**l_518))
                    break;
                l_565.s4++;
            }
            else
            { /* block id: 297 */
                uint32_t l_609 = 0x76AD4966L;
                int32_t l_627[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
                int i;
                (*l_518) = func_2((*p_1251->g_380), l_568, p_1251);
                if ((atomic_inc(&p_1251->l_atomic_input[16]) == 8))
                { /* block id: 300 */
                    int32_t l_569[1][8][2] = {{{0x79526474L,0x79526474L},{0x79526474L,0x79526474L},{0x79526474L,0x79526474L},{0x79526474L,0x79526474L},{0x79526474L,0x79526474L},{0x79526474L,0x79526474L},{0x79526474L,0x79526474L},{0x79526474L,0x79526474L}}};
                    int i, j, k;
                    for (l_569[0][6][0] = (-28); (l_569[0][6][0] != (-30)); l_569[0][6][0] = safe_sub_func_int16_t_s_s(l_569[0][6][0], 7))
                    { /* block id: 303 */
                        VECTOR(int32_t, 4) l_572 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 1L), 1L);
                        uint32_t l_573 = 0xBB78A161L;
                        int32_t l_576 = (-8L);
                        uint32_t l_577 = 0x0FD15F05L;
                        uint8_t l_578 = 255UL;
                        uint32_t l_579 = 6UL;
                        VECTOR(int32_t, 8) l_580 = (VECTOR(int32_t, 8))(0x5CBA5439L, (VECTOR(int32_t, 4))(0x5CBA5439L, (VECTOR(int32_t, 2))(0x5CBA5439L, 1L), 1L), 1L, 0x5CBA5439L, 1L);
                        VECTOR(int32_t, 4) l_581 = (VECTOR(int32_t, 4))(0x1EDC22DDL, (VECTOR(int32_t, 2))(0x1EDC22DDL, 3L), 3L);
                        VECTOR(int32_t, 8) l_582 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-2L)), (-2L)), (-2L), 2L, (-2L));
                        VECTOR(int32_t, 8) l_583 = (VECTOR(int32_t, 8))(0x169B0644L, (VECTOR(int32_t, 4))(0x169B0644L, (VECTOR(int32_t, 2))(0x169B0644L, 0L), 0L), 0L, 0x169B0644L, 0L);
                        VECTOR(uint16_t, 16) l_584 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65528UL), 65528UL), 65528UL, 1UL, 65528UL, (VECTOR(uint16_t, 2))(1UL, 65528UL), (VECTOR(uint16_t, 2))(1UL, 65528UL), 1UL, 65528UL, 1UL, 65528UL);
                        int32_t l_585 = 0L;
                        int16_t l_586 = 0x1F8CL;
                        uint64_t l_587 = 18446744073709551615UL;
                        uint32_t l_588[8][9][3] = {{{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L}},{{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L}},{{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L}},{{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L}},{{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L}},{{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L}},{{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L}},{{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L},{1UL,0x043CE24AL,0x292E5E61L}}};
                        VECTOR(int32_t, 8) l_589 = (VECTOR(int32_t, 8))(0x32A1A09EL, (VECTOR(int32_t, 4))(0x32A1A09EL, (VECTOR(int32_t, 2))(0x32A1A09EL, (-3L)), (-3L)), (-3L), 0x32A1A09EL, (-3L));
                        uint16_t l_590 = 0x0F4EL;
                        uint8_t l_591[9] = {255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL};
                        uint8_t l_592[8] = {0xB6L,0xB6L,0xB6L,0xB6L,0xB6L,0xB6L,0xB6L,0xB6L};
                        uint64_t l_593 = 0x27C6A579B6DD568EL;
                        union U0 **l_594[10][2][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                        union U0 l_597 = {-1L};/* VOLATILE GLOBAL l_597 */
                        union U0 *l_596 = &l_597;
                        union U0 **l_595 = &l_596;
                        int i, j, k;
                        l_581.y = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_572.wywwzxyx)).s42)).yyyxyyyy, ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(0x63DBA0E6L, 0x2B16DCCAL, (-1L), 0L, ((l_573--) , l_576), 0x607BDA6DL, l_577, 0x7466CC75L, (-1L), 0L, (l_579 = l_578), (-1L), ((VECTOR(int32_t, 4))(1L, 0L, 1L, 0x0B983C94L)))), ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_580.s25604414)), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_581.zx)), ((VECTOR(int32_t, 8))(l_582.s32251061)).s64, ((VECTOR(int32_t, 2))(l_583.s15))))).yyxxxyyx))).s6704644566277167))).odd))).s3337133032204376, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))((-8L), 0x171EL, 0L, 0x75CAL)).xwwzxyzz))))), ((VECTOR(uint16_t, 8))((l_586 = ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_584.sf0)), (FAKE_DIVERGE(p_1251->local_2_offset, get_local_id(2), 10) , l_585), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(65526UL, 65535UL)).yxxxxyxy)).lo)), 0x8C56L)).s3), 0x26CCL, 0xEB9CL, (l_592[7] = (((l_588[1][0][0] = l_587) , (l_591[7] = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(l_589.s5640)), ((VECTOR(int32_t, 4))((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0L, 0x1C10L, 1L, 2L)).hi)).xyxy)).zwwzywyyzxzyyxyz)).even)).even)).z , l_590), 1L, 0x03706DC6L, 0x4F4BAE4FL))))).xxxzzyzzwywxxxyy)).odd))).s4712566741775777, ((VECTOR(int32_t, 16))(0x2952493FL))))).even))).s53, ((VECTOR(int32_t, 2))(0x7FC3A837L))))).xxyy)).y)) , 0x4760L)), 1UL, l_593, 0x5782L, 0x0DC7L))))).s5, ((VECTOR(int32_t, 2))(3L)), 0L)).xzwxywyywyxwwxyx))).saeb2)).z;
                        l_595 = l_594[0][1][8];
                    }
                    for (l_569[0][7][1] = 25; (l_569[0][7][1] != 7); --l_569[0][7][1])
                    { /* block id: 315 */
                        int64_t l_600 = 1L;
                        uint32_t l_601[8][7] = {{0UL,4294967295UL,0x7E8BD549L,0UL,4294967295UL,0x7E8BD549L,0x7E8BD549L},{0UL,4294967295UL,0x7E8BD549L,0UL,4294967295UL,0x7E8BD549L,0x7E8BD549L},{0UL,4294967295UL,0x7E8BD549L,0UL,4294967295UL,0x7E8BD549L,0x7E8BD549L},{0UL,4294967295UL,0x7E8BD549L,0UL,4294967295UL,0x7E8BD549L,0x7E8BD549L},{0UL,4294967295UL,0x7E8BD549L,0UL,4294967295UL,0x7E8BD549L,0x7E8BD549L},{0UL,4294967295UL,0x7E8BD549L,0UL,4294967295UL,0x7E8BD549L,0x7E8BD549L},{0UL,4294967295UL,0x7E8BD549L,0UL,4294967295UL,0x7E8BD549L,0x7E8BD549L},{0UL,4294967295UL,0x7E8BD549L,0UL,4294967295UL,0x7E8BD549L,0x7E8BD549L}};
                        uint32_t l_602 = 0x555105B7L;
                        int i, j;
                        l_600 = 0x15AB15B6L;
                        l_602 = (l_601[4][0] &= 0x4CF641E0L);
                    }
                    for (l_569[0][6][0] = 0; (l_569[0][6][0] > 18); l_569[0][6][0] = safe_add_func_int64_t_s_s(l_569[0][6][0], 1))
                    { /* block id: 322 */
                        uint32_t l_605 = 0UL;
                        int32_t *l_606 = (void*)0;
                        l_606 = (l_605 , (void*)0);
                    }
                    unsigned int result = 0;
                    int l_569_i0, l_569_i1, l_569_i2;
                    for (l_569_i0 = 0; l_569_i0 < 1; l_569_i0++) {
                        for (l_569_i1 = 0; l_569_i1 < 8; l_569_i1++) {
                            for (l_569_i2 = 0; l_569_i2 < 2; l_569_i2++) {
                                result += l_569[l_569_i0][l_569_i1][l_569_i2];
                            }
                        }
                    }
                    atomic_add(&p_1251->l_special_values[16], result);
                }
                else
                { /* block id: 325 */
                    (1 + 1);
                }
                (**l_518) = (((l_627[0] &= ((((*l_503) <= 1UL) < ((VECTOR(int8_t, 4))((safe_rshift_func_uint8_t_u_s(l_609, (~((safe_sub_func_uint64_t_u_u(0x2B0F3FC5173B454DL, ((p_1251->g_431 && (((safe_mul_func_int16_t_s_s((((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((!((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((safe_rshift_func_int8_t_s_u((((*l_568) |= ((safe_unary_minus_func_uint64_t_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_617.wyyz)))).y)) <= GROUP_DIVERGE(2, 1))) == p_386), (~(((((p_1251->g_618 , ((VECTOR(int16_t, 2))(l_619.s6e)).lo) > (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(((l_624 <= (((void*)0 == &p_1251->g_564[2][0][0]) | 18446744073709551610UL)) , (*l_503)), 12)), 8))) == p_1251->g_412) && (*l_503)) <= l_625)))), (*l_503), 0x7C6D7368L, 0x381A59A6L, ((VECTOR(int32_t, 2))(0x60DE2715L)), 0x48021195L, 6L, 0x68F5F478L, (*l_503), ((VECTOR(int32_t, 2))(0x712F44AAL)), (-1L), 0L, 0x3232FED3L, 1L)))).s4 >= 0x66D50216L) == (-1L))) < 0x1FL), 0x7E468AAF53C760DDL, 0x23BB862357437BF9L, 0x4749D82030E6C471L)).lo)).yxyy, (int64_t)(*l_503)))).y , (*l_568)), p_1251->g_462.w)) ^ p_386) , (*l_568))) || 9UL))) < l_626)))), 0x1FL, 1L, 0x22L)).w) < 0x4CD18E3EL)) , (**l_518)) == 0x382B437CL);
            }
            (**p_1251->g_380) ^= ((((safe_mul_func_int8_t_s_s(1L, ((*l_568) = (((VECTOR(uint32_t, 2))(p_1251->g_630.s02)).lo > (safe_add_func_uint8_t_u_u(((*p_1251->g_563) == l_503), (&p_1251->g_493 != l_633))))))) , (safe_lshift_func_int8_t_s_u(((0x32A617E8L < (FAKE_DIVERGE(p_1251->group_1_offset, get_group_id(1), 10) , 0x30F2A66FL)) >= (safe_lshift_func_int16_t_s_u((p_1251->g_638[3] , (l_639 != l_640)), p_1251->g_481.s1))), p_1251->g_431))) >= p_387) >= (-8L));
        }
    }
    for (p_1251->g_389.f1 = 0; (p_1251->g_389.f1 > 1); p_1251->g_389.f1 = safe_add_func_int64_t_s_s(p_1251->g_389.f1, 2))
    { /* block id: 338 */
        uint8_t l_643 = 0x74L;
        l_643--;
    }
    (*p_1251->g_380) = func_2(func_2(func_2(&l_519[3], &l_519[6], p_1251), l_646, p_1251), &l_519[1], p_1251);
    return p_386;
}


/* ------------------------------------------ */
/* 
 * reads : p_1251->g_389.f3 p_1251->g_489 p_1251->g_412
 * writes: p_1251->g_389.f3 p_1251->g_489
 */
uint64_t  func_390(uint64_t  p_391, int32_t  p_392, struct S4 * p_1251)
{ /* block id: 245 */
    for (p_1251->g_389.f3 = 13; (p_1251->g_389.f3 >= 30); ++p_1251->g_389.f3)
    { /* block id: 248 */
        union U3 **l_498 = &p_1251->g_420;
        for (p_1251->g_489 = 0; (p_1251->g_489 != 10); p_1251->g_489 = safe_add_func_int32_t_s_s(p_1251->g_489, 1))
        { /* block id: 251 */
            union U3 **l_499 = (void*)0;
            l_499 = l_498;
        }
    }
    return p_1251->g_412;
}


/* ------------------------------------------ */
/* 
 * reads : p_1251->g_389.f2 p_1251->g_380 p_1251->g_381 p_1251->g_6 p_1251->g_457 p_1251->g_462 p_1251->g_431 p_1251->g_489 p_1251->g_415 p_1251->g_493
 * writes: p_1251->g_389.f2 p_1251->g_6 p_1251->g_457 p_1251->g_466 p_1251->g_481 p_1251->g_489 p_1251->g_491 p_1251->g_412 p_1251->g_493
 */
int64_t  func_395(int32_t  p_396, struct S4 * p_1251)
{ /* block id: 218 */
    VECTOR(int64_t, 2) l_438 = (VECTOR(int64_t, 2))(0L, 0L);
    int32_t l_442 = 0x0E2628D4L;
    int32_t l_443 = 0x3A0133BAL;
    uint16_t l_444 = 0UL;
    uint8_t l_447[6][9] = {{253UL,0UL,252UL,0UL,253UL,253UL,0UL,252UL,0UL},{253UL,0UL,252UL,0UL,253UL,253UL,0UL,252UL,0UL},{253UL,0UL,252UL,0UL,253UL,253UL,0UL,252UL,0UL},{253UL,0UL,252UL,0UL,253UL,253UL,0UL,252UL,0UL},{253UL,0UL,252UL,0UL,253UL,253UL,0UL,252UL,0UL},{253UL,0UL,252UL,0UL,253UL,253UL,0UL,252UL,0UL}};
    int32_t l_454 = (-1L);
    int32_t l_455 = 0x2233E1FCL;
    int32_t l_456[4][7] = {{(-2L),4L,(-2L),(-2L),4L,(-2L),(-2L)},{(-2L),4L,(-2L),(-2L),4L,(-2L),(-2L)},{(-2L),4L,(-2L),(-2L),4L,(-2L),(-2L)},{(-2L),4L,(-2L),(-2L),4L,(-2L),(-2L)}};
    union U0 *l_463 = &p_1251->g_389;
    union U0 *l_465 = &p_1251->g_389;
    union U0 **l_464[9][2][5] = {{{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0},{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0}},{{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0},{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0}},{{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0},{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0}},{{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0},{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0}},{{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0},{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0}},{{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0},{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0}},{{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0},{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0}},{{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0},{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0}},{{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0},{&l_463,&l_463,&p_1251->g_388,&l_465,(void*)0}}};
    uint32_t l_467 = 0x691516D2L;
    int8_t l_468 = 0L;
    uint32_t *l_479 = (void*)0;
    uint32_t *l_480 = (void*)0;
    uint32_t *l_482 = (void*)0;
    uint32_t *l_483 = (void*)0;
    uint8_t *l_484[9];
    uint8_t l_485 = 0xB9L;
    uint16_t l_486[5][6] = {{7UL,0x6862L,0x6862L,7UL,7UL,0x6862L},{7UL,0x6862L,0x6862L,7UL,7UL,0x6862L},{7UL,0x6862L,0x6862L,7UL,7UL,0x6862L},{7UL,0x6862L,0x6862L,7UL,7UL,0x6862L},{7UL,0x6862L,0x6862L,7UL,7UL,0x6862L}};
    int16_t *l_487 = (void*)0;
    uint64_t *l_488 = &p_1251->g_489;
    uint64_t *l_490 = &p_1251->g_491;
    int32_t *l_492[1][2][7] = {{{&p_1251->g_389.f2,&p_1251->g_389.f2,&p_1251->g_389.f2,&p_1251->g_389.f2,&p_1251->g_389.f2,&p_1251->g_389.f2,&p_1251->g_389.f2},{&p_1251->g_389.f2,&p_1251->g_389.f2,&p_1251->g_389.f2,&p_1251->g_389.f2,&p_1251->g_389.f2,&p_1251->g_389.f2,&p_1251->g_389.f2}}};
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_484[i] = &l_447[5][3];
    for (p_1251->g_389.f2 = 0; (p_1251->g_389.f2 > 13); ++p_1251->g_389.f2)
    { /* block id: 221 */
        int32_t *l_436 = (void*)0;
        int32_t *l_437 = &p_1251->g_6;
        int32_t *l_439 = &p_1251->g_6;
        int32_t *l_440 = &p_1251->g_6;
        int32_t *l_441[9][4] = {{&p_1251->g_6,&p_1251->g_6,&p_1251->g_6,&p_1251->g_6},{&p_1251->g_6,&p_1251->g_6,&p_1251->g_6,&p_1251->g_6},{&p_1251->g_6,&p_1251->g_6,&p_1251->g_6,&p_1251->g_6},{&p_1251->g_6,&p_1251->g_6,&p_1251->g_6,&p_1251->g_6},{&p_1251->g_6,&p_1251->g_6,&p_1251->g_6,&p_1251->g_6},{&p_1251->g_6,&p_1251->g_6,&p_1251->g_6,&p_1251->g_6},{&p_1251->g_6,&p_1251->g_6,&p_1251->g_6,&p_1251->g_6},{&p_1251->g_6,&p_1251->g_6,&p_1251->g_6,&p_1251->g_6},{&p_1251->g_6,&p_1251->g_6,&p_1251->g_6,&p_1251->g_6}};
        int i, j;
        ++l_444;
        (*l_439) = p_396;
        l_447[5][1]--;
    }
    (**p_1251->g_380) &= 3L;
    for (l_443 = 0; (l_443 <= 27); l_443 = safe_add_func_uint32_t_u_u(l_443, 1))
    { /* block id: 229 */
        int32_t l_452 = (-7L);
        int32_t *l_453[10] = {&l_443,&l_443,&l_443,&l_443,&l_443,&l_443,&l_443,&l_443,&l_443,&l_443};
        int i;
        p_1251->g_457--;
        if ((*p_1251->g_381))
            break;
    }
    p_1251->g_493 ^= (((**p_1251->g_380) = (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(p_1251->g_462.xxyzwwyx)).s7, ((l_463 == (p_1251->g_466 = &p_1251->g_389)) <= (l_442 = l_467))))) != (l_468 != (((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((~((p_1251->g_431 && (p_1251->g_412 = (((*l_490) = ((*l_488) |= ((((safe_lshift_func_int8_t_s_u((((l_443 &= (safe_sub_func_uint8_t_u_u((l_468 >= (l_454 = (l_456[1][2] |= (safe_unary_minus_func_uint64_t_u((safe_unary_minus_func_uint32_t_u((p_1251->g_481.s3 = l_454)))))))), ((((l_485 <= p_396) >= 0x62859FB749C1F746L) || l_486[1][1]) ^ 0x7569644AL)))) || 0x7C31L) != l_486[1][1]), l_486[4][5])) ^ p_396) || 0x21FAC75EFC576EEFL) , FAKE_DIVERGE(p_1251->global_1_offset, get_global_id(1), 10)))) , p_1251->g_462.y))) & 0x249D9191L)), l_455)), p_1251->g_415.x)) & p_396) , p_1251->g_489)));
    return p_1251->g_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1251->g_431 p_1251->g_6
 * writes: p_1251->g_431
 */
uint8_t  func_399(union U3 * p_400, struct S4 * p_1251)
{ /* block id: 214 */
    uint64_t l_422 = 0x472CE8FFD9226A75L;
    uint64_t l_423 = 0xB681279A759AAF32L;
    int32_t l_424[8][6] = {{0x7C1E255DL,0L,2L,1L,0x66F0FC2CL,0x66F0FC2CL},{0x7C1E255DL,0L,2L,1L,0x66F0FC2CL,0x66F0FC2CL},{0x7C1E255DL,0L,2L,1L,0x66F0FC2CL,0x66F0FC2CL},{0x7C1E255DL,0L,2L,1L,0x66F0FC2CL,0x66F0FC2CL},{0x7C1E255DL,0L,2L,1L,0x66F0FC2CL,0x66F0FC2CL},{0x7C1E255DL,0L,2L,1L,0x66F0FC2CL,0x66F0FC2CL},{0x7C1E255DL,0L,2L,1L,0x66F0FC2CL,0x66F0FC2CL},{0x7C1E255DL,0L,2L,1L,0x66F0FC2CL,0x66F0FC2CL}};
    int32_t *l_425 = &p_1251->g_389.f2;
    int32_t *l_426 = (void*)0;
    int32_t *l_427 = &l_424[6][0];
    int32_t *l_428 = &p_1251->g_6;
    int32_t *l_429 = (void*)0;
    int32_t *l_430[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_430[i] = &l_424[6][0];
    l_423 |= l_422;
    p_1251->g_431--;
    return (*l_428);
}


/* ------------------------------------------ */
/* 
 * reads : p_1251->g_420
 * writes:
 */
union U3 * func_401(int8_t  p_402, int64_t  p_403, uint64_t  p_404, uint32_t  p_405, union U0 * p_406, struct S4 * p_1251)
{ /* block id: 210 */
    int16_t l_418 = 0x0A17L;
    int32_t l_419 = 0L;
    l_419 = l_418;
    return p_1251->g_420;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[21];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 21; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[21];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 21; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[200];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 200; i++)
            l_comm_values[i] = 1;
    struct S4 c_1252;
    struct S4* p_1251 = &c_1252;
    struct S4 c_1253 = {
        (-1L), // p_1251->g_6
        &p_1251->g_6, // p_1251->g_381
        &p_1251->g_381, // p_1251->g_380
        {1L}, // p_1251->g_389
        &p_1251->g_389, // p_1251->g_388
        6UL, // p_1251->g_412
        (VECTOR(int16_t, 2))(0x78B8L, 0x7E78L), // p_1251->g_414
        (VECTOR(int16_t, 2))((-1L), 0L), // p_1251->g_415
        (void*)0, // p_1251->g_420
        0x93A882F6L, // p_1251->g_431
        0x2BFD0EA1D862DE3AL, // p_1251->g_457
        (VECTOR(uint64_t, 4))(0x7775D9F8CE65F8A8L, (VECTOR(uint64_t, 2))(0x7775D9F8CE65F8A8L, 18446744073709551615UL), 18446744073709551615UL), // p_1251->g_462
        &p_1251->g_389, // p_1251->g_466
        (VECTOR(uint32_t, 8))(0xA67E3D05L, (VECTOR(uint32_t, 4))(0xA67E3D05L, (VECTOR(uint32_t, 2))(0xA67E3D05L, 0x4D1E6687L), 0x4D1E6687L), 0x4D1E6687L, 0xA67E3D05L, 0x4D1E6687L), // p_1251->g_481
        0x3016E96F683429E3L, // p_1251->g_489
        18446744073709551609UL, // p_1251->g_491
        0x32EEL, // p_1251->g_493
        0UL, // p_1251->g_554
        {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}}, // p_1251->g_564
        &p_1251->g_564[2][0][0], // p_1251->g_563
        {0x1F5EL}, // p_1251->g_618
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xA3298140L), 0xA3298140L), 0xA3298140L, 0UL, 0xA3298140L), // p_1251->g_630
        {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}}, // p_1251->g_638
        0x42932FDAL, // p_1251->g_649
        (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0L), 0L), // p_1251->g_650
        {{{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}}},{{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}}},{{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}}},{{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}}},{{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}}},{{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}},{{65535UL},{0xBC5EL},{0x7DF4L}}}}, // p_1251->g_659
        (VECTOR(uint32_t, 2))(0x00D32B21L, 0UL), // p_1251->g_660
        0x2CL, // p_1251->g_673
        {0x3FF3L}, // p_1251->g_685
        {0xA769L}, // p_1251->g_696
        (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, 9L), 9L), // p_1251->g_711
        0x6CC7F28AAF13A262L, // p_1251->g_732
        (VECTOR(int32_t, 2))(0x719C8AD1L, 0x0A5100FFL), // p_1251->g_740
        (VECTOR(int8_t, 16))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 1L), 1L), 1L, (-10L), 1L, (VECTOR(int8_t, 2))((-10L), 1L), (VECTOR(int8_t, 2))((-10L), 1L), (-10L), 1L, (-10L), 1L), // p_1251->g_760
        (VECTOR(uint16_t, 2))(0UL, 0x4D93L), // p_1251->g_771
        (VECTOR(uint32_t, 8))(0xF2C50B7BL, (VECTOR(uint32_t, 4))(0xF2C50B7BL, (VECTOR(uint32_t, 2))(0xF2C50B7BL, 0x41C5B6E8L), 0x41C5B6E8L), 0x41C5B6E8L, 0xF2C50B7BL, 0x41C5B6E8L), // p_1251->g_782
        (VECTOR(uint64_t, 2))(1UL, 0xA7BF5A28426A111FL), // p_1251->g_785
        {{0x2967L},{0x2967L},{0x2967L},{0x2967L}}, // p_1251->g_788
        (VECTOR(int32_t, 4))(0x0EC41285L, (VECTOR(int32_t, 2))(0x0EC41285L, 0x0027E198L), 0x0027E198L), // p_1251->g_800
        {0x5473495AL}, // p_1251->g_818
        {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}}, // p_1251->g_820
        &p_1251->g_820[3][3][0], // p_1251->g_819
        0x1D07AA4D1CC1BCBCL, // p_1251->g_825
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x5A72D879L), 0x5A72D879L), 0x5A72D879L, 1UL, 0x5A72D879L, (VECTOR(uint32_t, 2))(1UL, 0x5A72D879L), (VECTOR(uint32_t, 2))(1UL, 0x5A72D879L), 1UL, 0x5A72D879L, 1UL, 0x5A72D879L), // p_1251->g_834
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x7BL), 0x7BL), 0x7BL, 0L, 0x7BL, (VECTOR(int8_t, 2))(0L, 0x7BL), (VECTOR(int8_t, 2))(0L, 0x7BL), 0L, 0x7BL, 0L, 0x7BL), // p_1251->g_838
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-9L)), (-9L)), (-9L), 0L, (-9L), (VECTOR(int8_t, 2))(0L, (-9L)), (VECTOR(int8_t, 2))(0L, (-9L)), 0L, (-9L), 0L, (-9L)), // p_1251->g_844
        (void*)0, // p_1251->g_873
        {65535UL}, // p_1251->g_877
        (VECTOR(int32_t, 4))(0x3A19D24AL, (VECTOR(int32_t, 2))(0x3A19D24AL, 0x6738526AL), 0x6738526AL), // p_1251->g_878
        {-1L}, // p_1251->g_881
        {1UL}, // p_1251->g_889
        {7L}, // p_1251->g_899
        {6L}, // p_1251->g_921
        (VECTOR(uint64_t, 2))(0x02BE2D99D6635EA3L, 0x9E42A166070E7B6DL), // p_1251->g_923
        (VECTOR(int8_t, 2))(1L, 0x2EL), // p_1251->g_926
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L), // p_1251->g_928
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2F9B20FCL), 0x2F9B20FCL), // p_1251->g_937
        (VECTOR(uint8_t, 2))(0UL, 0x21L), // p_1251->g_952
        (VECTOR(uint32_t, 2))(9UL, 4294967291UL), // p_1251->g_975
        {6L}, // p_1251->g_976
        (VECTOR(uint64_t, 2))(0UL, 18446744073709551606UL), // p_1251->g_977
        {0x2E360E67L,0x2E360E67L,0x2E360E67L,0x2E360E67L}, // p_1251->g_979
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L)), // p_1251->g_983
        {0x35A8DE7CL}, // p_1251->g_984
        &p_1251->g_889, // p_1251->g_1051
        {{{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}}},{{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}},{{2L},{0L},{-1L},{0L},{0x744790EAL},{0L}}}}, // p_1251->g_1054
        0xE118053EF488913FL, // p_1251->g_1061
        0xE097E35DL, // p_1251->g_1104
        {0L}, // p_1251->g_1111
        {{{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}}},{{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}}},{{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}}},{{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}}},{{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}}},{{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}}},{{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}}},{{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}}},{{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}}},{{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}},{{65535UL},{0xB80CL}}}}, // p_1251->g_1121
        &p_1251->g_6, // p_1251->g_1126
        {&p_1251->g_1126,&p_1251->g_1126,&p_1251->g_1126}, // p_1251->g_1125
        {-1L}, // p_1251->g_1143
        {&p_1251->g_673,&p_1251->g_673,&p_1251->g_673,&p_1251->g_673}, // p_1251->g_1156
        &p_1251->g_825, // p_1251->g_1169
        {{&p_1251->g_1169,(void*)0,&p_1251->g_1169,&p_1251->g_1169,(void*)0,&p_1251->g_1169,&p_1251->g_1169},{&p_1251->g_1169,(void*)0,&p_1251->g_1169,&p_1251->g_1169,(void*)0,&p_1251->g_1169,&p_1251->g_1169},{&p_1251->g_1169,(void*)0,&p_1251->g_1169,&p_1251->g_1169,(void*)0,&p_1251->g_1169,&p_1251->g_1169},{&p_1251->g_1169,(void*)0,&p_1251->g_1169,&p_1251->g_1169,(void*)0,&p_1251->g_1169,&p_1251->g_1169},{&p_1251->g_1169,(void*)0,&p_1251->g_1169,&p_1251->g_1169,(void*)0,&p_1251->g_1169,&p_1251->g_1169}}, // p_1251->g_1168
        &p_1251->g_1168[1][3], // p_1251->g_1167
        0x16L, // p_1251->g_1171
        (VECTOR(uint8_t, 8))(0x64L, (VECTOR(uint8_t, 4))(0x64L, (VECTOR(uint8_t, 2))(0x64L, 0x2AL), 0x2AL), 0x2AL, 0x64L, 0x2AL), // p_1251->g_1175
        (VECTOR(int64_t, 8))(0x0F72E0A14B4D1D59L, (VECTOR(int64_t, 4))(0x0F72E0A14B4D1D59L, (VECTOR(int64_t, 2))(0x0F72E0A14B4D1D59L, 0x0BC2A723997D7F5EL), 0x0BC2A723997D7F5EL), 0x0BC2A723997D7F5EL, 0x0F72E0A14B4D1D59L, 0x0BC2A723997D7F5EL), // p_1251->g_1182
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), // p_1251->g_1191
        &p_1251->g_1051, // p_1251->g_1196
        &p_1251->g_976.f2, // p_1251->g_1211
        8L, // p_1251->g_1219
        8UL, // p_1251->g_1227
        (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x762B59F6E96E95A8L), 0x762B59F6E96E95A8L), 0x762B59F6E96E95A8L, 18446744073709551615UL, 0x762B59F6E96E95A8L, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x762B59F6E96E95A8L), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x762B59F6E96E95A8L), 18446744073709551615UL, 0x762B59F6E96E95A8L, 18446744073709551615UL, 0x762B59F6E96E95A8L), // p_1251->g_1231
        (VECTOR(uint64_t, 2))(0x68E388E3FE587D08L, 0UL), // p_1251->g_1233
        (VECTOR(uint32_t, 16))(0x1353AC95L, (VECTOR(uint32_t, 4))(0x1353AC95L, (VECTOR(uint32_t, 2))(0x1353AC95L, 0xA69B6A8AL), 0xA69B6A8AL), 0xA69B6A8AL, 0x1353AC95L, 0xA69B6A8AL, (VECTOR(uint32_t, 2))(0x1353AC95L, 0xA69B6A8AL), (VECTOR(uint32_t, 2))(0x1353AC95L, 0xA69B6A8AL), 0x1353AC95L, 0xA69B6A8AL, 0x1353AC95L, 0xA69B6A8AL), // p_1251->g_1244
        0, // p_1251->v_collective
        sequence_input[get_global_id(0)], // p_1251->global_0_offset
        sequence_input[get_global_id(1)], // p_1251->global_1_offset
        sequence_input[get_global_id(2)], // p_1251->global_2_offset
        sequence_input[get_local_id(0)], // p_1251->local_0_offset
        sequence_input[get_local_id(1)], // p_1251->local_1_offset
        sequence_input[get_local_id(2)], // p_1251->local_2_offset
        sequence_input[get_group_id(0)], // p_1251->group_0_offset
        sequence_input[get_group_id(1)], // p_1251->group_1_offset
        sequence_input[get_group_id(2)], // p_1251->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 200)), permutations[0][get_linear_local_id()])), // p_1251->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1252 = c_1253;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1251);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1251->g_6, "p_1251->g_6", print_hash_value);
    transparent_crc(p_1251->g_412, "p_1251->g_412", print_hash_value);
    transparent_crc(p_1251->g_414.x, "p_1251->g_414.x", print_hash_value);
    transparent_crc(p_1251->g_414.y, "p_1251->g_414.y", print_hash_value);
    transparent_crc(p_1251->g_415.x, "p_1251->g_415.x", print_hash_value);
    transparent_crc(p_1251->g_415.y, "p_1251->g_415.y", print_hash_value);
    transparent_crc(p_1251->g_431, "p_1251->g_431", print_hash_value);
    transparent_crc(p_1251->g_457, "p_1251->g_457", print_hash_value);
    transparent_crc(p_1251->g_462.x, "p_1251->g_462.x", print_hash_value);
    transparent_crc(p_1251->g_462.y, "p_1251->g_462.y", print_hash_value);
    transparent_crc(p_1251->g_462.z, "p_1251->g_462.z", print_hash_value);
    transparent_crc(p_1251->g_462.w, "p_1251->g_462.w", print_hash_value);
    transparent_crc(p_1251->g_481.s0, "p_1251->g_481.s0", print_hash_value);
    transparent_crc(p_1251->g_481.s1, "p_1251->g_481.s1", print_hash_value);
    transparent_crc(p_1251->g_481.s2, "p_1251->g_481.s2", print_hash_value);
    transparent_crc(p_1251->g_481.s3, "p_1251->g_481.s3", print_hash_value);
    transparent_crc(p_1251->g_481.s4, "p_1251->g_481.s4", print_hash_value);
    transparent_crc(p_1251->g_481.s5, "p_1251->g_481.s5", print_hash_value);
    transparent_crc(p_1251->g_481.s6, "p_1251->g_481.s6", print_hash_value);
    transparent_crc(p_1251->g_481.s7, "p_1251->g_481.s7", print_hash_value);
    transparent_crc(p_1251->g_489, "p_1251->g_489", print_hash_value);
    transparent_crc(p_1251->g_491, "p_1251->g_491", print_hash_value);
    transparent_crc(p_1251->g_493, "p_1251->g_493", print_hash_value);
    transparent_crc(p_1251->g_554, "p_1251->g_554", print_hash_value);
    transparent_crc(p_1251->g_618.f0, "p_1251->g_618.f0", print_hash_value);
    transparent_crc(p_1251->g_630.s0, "p_1251->g_630.s0", print_hash_value);
    transparent_crc(p_1251->g_630.s1, "p_1251->g_630.s1", print_hash_value);
    transparent_crc(p_1251->g_630.s2, "p_1251->g_630.s2", print_hash_value);
    transparent_crc(p_1251->g_630.s3, "p_1251->g_630.s3", print_hash_value);
    transparent_crc(p_1251->g_630.s4, "p_1251->g_630.s4", print_hash_value);
    transparent_crc(p_1251->g_630.s5, "p_1251->g_630.s5", print_hash_value);
    transparent_crc(p_1251->g_630.s6, "p_1251->g_630.s6", print_hash_value);
    transparent_crc(p_1251->g_630.s7, "p_1251->g_630.s7", print_hash_value);
    transparent_crc(p_1251->g_649, "p_1251->g_649", print_hash_value);
    transparent_crc(p_1251->g_650.x, "p_1251->g_650.x", print_hash_value);
    transparent_crc(p_1251->g_650.y, "p_1251->g_650.y", print_hash_value);
    transparent_crc(p_1251->g_650.z, "p_1251->g_650.z", print_hash_value);
    transparent_crc(p_1251->g_650.w, "p_1251->g_650.w", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1251->g_659[i][j][k].f0, "p_1251->g_659[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1251->g_660.x, "p_1251->g_660.x", print_hash_value);
    transparent_crc(p_1251->g_660.y, "p_1251->g_660.y", print_hash_value);
    transparent_crc(p_1251->g_673, "p_1251->g_673", print_hash_value);
    transparent_crc(p_1251->g_685.f0, "p_1251->g_685.f0", print_hash_value);
    transparent_crc(p_1251->g_696.f0, "p_1251->g_696.f0", print_hash_value);
    transparent_crc(p_1251->g_711.x, "p_1251->g_711.x", print_hash_value);
    transparent_crc(p_1251->g_711.y, "p_1251->g_711.y", print_hash_value);
    transparent_crc(p_1251->g_711.z, "p_1251->g_711.z", print_hash_value);
    transparent_crc(p_1251->g_711.w, "p_1251->g_711.w", print_hash_value);
    transparent_crc(p_1251->g_732, "p_1251->g_732", print_hash_value);
    transparent_crc(p_1251->g_740.x, "p_1251->g_740.x", print_hash_value);
    transparent_crc(p_1251->g_740.y, "p_1251->g_740.y", print_hash_value);
    transparent_crc(p_1251->g_760.s0, "p_1251->g_760.s0", print_hash_value);
    transparent_crc(p_1251->g_760.s1, "p_1251->g_760.s1", print_hash_value);
    transparent_crc(p_1251->g_760.s2, "p_1251->g_760.s2", print_hash_value);
    transparent_crc(p_1251->g_760.s3, "p_1251->g_760.s3", print_hash_value);
    transparent_crc(p_1251->g_760.s4, "p_1251->g_760.s4", print_hash_value);
    transparent_crc(p_1251->g_760.s5, "p_1251->g_760.s5", print_hash_value);
    transparent_crc(p_1251->g_760.s6, "p_1251->g_760.s6", print_hash_value);
    transparent_crc(p_1251->g_760.s7, "p_1251->g_760.s7", print_hash_value);
    transparent_crc(p_1251->g_760.s8, "p_1251->g_760.s8", print_hash_value);
    transparent_crc(p_1251->g_760.s9, "p_1251->g_760.s9", print_hash_value);
    transparent_crc(p_1251->g_760.sa, "p_1251->g_760.sa", print_hash_value);
    transparent_crc(p_1251->g_760.sb, "p_1251->g_760.sb", print_hash_value);
    transparent_crc(p_1251->g_760.sc, "p_1251->g_760.sc", print_hash_value);
    transparent_crc(p_1251->g_760.sd, "p_1251->g_760.sd", print_hash_value);
    transparent_crc(p_1251->g_760.se, "p_1251->g_760.se", print_hash_value);
    transparent_crc(p_1251->g_760.sf, "p_1251->g_760.sf", print_hash_value);
    transparent_crc(p_1251->g_771.x, "p_1251->g_771.x", print_hash_value);
    transparent_crc(p_1251->g_771.y, "p_1251->g_771.y", print_hash_value);
    transparent_crc(p_1251->g_782.s0, "p_1251->g_782.s0", print_hash_value);
    transparent_crc(p_1251->g_782.s1, "p_1251->g_782.s1", print_hash_value);
    transparent_crc(p_1251->g_782.s2, "p_1251->g_782.s2", print_hash_value);
    transparent_crc(p_1251->g_782.s3, "p_1251->g_782.s3", print_hash_value);
    transparent_crc(p_1251->g_782.s4, "p_1251->g_782.s4", print_hash_value);
    transparent_crc(p_1251->g_782.s5, "p_1251->g_782.s5", print_hash_value);
    transparent_crc(p_1251->g_782.s6, "p_1251->g_782.s6", print_hash_value);
    transparent_crc(p_1251->g_782.s7, "p_1251->g_782.s7", print_hash_value);
    transparent_crc(p_1251->g_785.x, "p_1251->g_785.x", print_hash_value);
    transparent_crc(p_1251->g_785.y, "p_1251->g_785.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1251->g_788[i].f0, "p_1251->g_788[i].f0", print_hash_value);

    }
    transparent_crc(p_1251->g_800.x, "p_1251->g_800.x", print_hash_value);
    transparent_crc(p_1251->g_800.y, "p_1251->g_800.y", print_hash_value);
    transparent_crc(p_1251->g_800.z, "p_1251->g_800.z", print_hash_value);
    transparent_crc(p_1251->g_800.w, "p_1251->g_800.w", print_hash_value);
    transparent_crc(p_1251->g_818.f0, "p_1251->g_818.f0", print_hash_value);
    transparent_crc(p_1251->g_825, "p_1251->g_825", print_hash_value);
    transparent_crc(p_1251->g_834.s0, "p_1251->g_834.s0", print_hash_value);
    transparent_crc(p_1251->g_834.s1, "p_1251->g_834.s1", print_hash_value);
    transparent_crc(p_1251->g_834.s2, "p_1251->g_834.s2", print_hash_value);
    transparent_crc(p_1251->g_834.s3, "p_1251->g_834.s3", print_hash_value);
    transparent_crc(p_1251->g_834.s4, "p_1251->g_834.s4", print_hash_value);
    transparent_crc(p_1251->g_834.s5, "p_1251->g_834.s5", print_hash_value);
    transparent_crc(p_1251->g_834.s6, "p_1251->g_834.s6", print_hash_value);
    transparent_crc(p_1251->g_834.s7, "p_1251->g_834.s7", print_hash_value);
    transparent_crc(p_1251->g_834.s8, "p_1251->g_834.s8", print_hash_value);
    transparent_crc(p_1251->g_834.s9, "p_1251->g_834.s9", print_hash_value);
    transparent_crc(p_1251->g_834.sa, "p_1251->g_834.sa", print_hash_value);
    transparent_crc(p_1251->g_834.sb, "p_1251->g_834.sb", print_hash_value);
    transparent_crc(p_1251->g_834.sc, "p_1251->g_834.sc", print_hash_value);
    transparent_crc(p_1251->g_834.sd, "p_1251->g_834.sd", print_hash_value);
    transparent_crc(p_1251->g_834.se, "p_1251->g_834.se", print_hash_value);
    transparent_crc(p_1251->g_834.sf, "p_1251->g_834.sf", print_hash_value);
    transparent_crc(p_1251->g_838.s0, "p_1251->g_838.s0", print_hash_value);
    transparent_crc(p_1251->g_838.s1, "p_1251->g_838.s1", print_hash_value);
    transparent_crc(p_1251->g_838.s2, "p_1251->g_838.s2", print_hash_value);
    transparent_crc(p_1251->g_838.s3, "p_1251->g_838.s3", print_hash_value);
    transparent_crc(p_1251->g_838.s4, "p_1251->g_838.s4", print_hash_value);
    transparent_crc(p_1251->g_838.s5, "p_1251->g_838.s5", print_hash_value);
    transparent_crc(p_1251->g_838.s6, "p_1251->g_838.s6", print_hash_value);
    transparent_crc(p_1251->g_838.s7, "p_1251->g_838.s7", print_hash_value);
    transparent_crc(p_1251->g_838.s8, "p_1251->g_838.s8", print_hash_value);
    transparent_crc(p_1251->g_838.s9, "p_1251->g_838.s9", print_hash_value);
    transparent_crc(p_1251->g_838.sa, "p_1251->g_838.sa", print_hash_value);
    transparent_crc(p_1251->g_838.sb, "p_1251->g_838.sb", print_hash_value);
    transparent_crc(p_1251->g_838.sc, "p_1251->g_838.sc", print_hash_value);
    transparent_crc(p_1251->g_838.sd, "p_1251->g_838.sd", print_hash_value);
    transparent_crc(p_1251->g_838.se, "p_1251->g_838.se", print_hash_value);
    transparent_crc(p_1251->g_838.sf, "p_1251->g_838.sf", print_hash_value);
    transparent_crc(p_1251->g_844.s0, "p_1251->g_844.s0", print_hash_value);
    transparent_crc(p_1251->g_844.s1, "p_1251->g_844.s1", print_hash_value);
    transparent_crc(p_1251->g_844.s2, "p_1251->g_844.s2", print_hash_value);
    transparent_crc(p_1251->g_844.s3, "p_1251->g_844.s3", print_hash_value);
    transparent_crc(p_1251->g_844.s4, "p_1251->g_844.s4", print_hash_value);
    transparent_crc(p_1251->g_844.s5, "p_1251->g_844.s5", print_hash_value);
    transparent_crc(p_1251->g_844.s6, "p_1251->g_844.s6", print_hash_value);
    transparent_crc(p_1251->g_844.s7, "p_1251->g_844.s7", print_hash_value);
    transparent_crc(p_1251->g_844.s8, "p_1251->g_844.s8", print_hash_value);
    transparent_crc(p_1251->g_844.s9, "p_1251->g_844.s9", print_hash_value);
    transparent_crc(p_1251->g_844.sa, "p_1251->g_844.sa", print_hash_value);
    transparent_crc(p_1251->g_844.sb, "p_1251->g_844.sb", print_hash_value);
    transparent_crc(p_1251->g_844.sc, "p_1251->g_844.sc", print_hash_value);
    transparent_crc(p_1251->g_844.sd, "p_1251->g_844.sd", print_hash_value);
    transparent_crc(p_1251->g_844.se, "p_1251->g_844.se", print_hash_value);
    transparent_crc(p_1251->g_844.sf, "p_1251->g_844.sf", print_hash_value);
    transparent_crc(p_1251->g_877.f0, "p_1251->g_877.f0", print_hash_value);
    transparent_crc(p_1251->g_878.x, "p_1251->g_878.x", print_hash_value);
    transparent_crc(p_1251->g_878.y, "p_1251->g_878.y", print_hash_value);
    transparent_crc(p_1251->g_878.z, "p_1251->g_878.z", print_hash_value);
    transparent_crc(p_1251->g_878.w, "p_1251->g_878.w", print_hash_value);
    transparent_crc(p_1251->g_899.f0, "p_1251->g_899.f0", print_hash_value);
    transparent_crc(p_1251->g_921.f0, "p_1251->g_921.f0", print_hash_value);
    transparent_crc(p_1251->g_923.x, "p_1251->g_923.x", print_hash_value);
    transparent_crc(p_1251->g_923.y, "p_1251->g_923.y", print_hash_value);
    transparent_crc(p_1251->g_926.x, "p_1251->g_926.x", print_hash_value);
    transparent_crc(p_1251->g_926.y, "p_1251->g_926.y", print_hash_value);
    transparent_crc(p_1251->g_928.s0, "p_1251->g_928.s0", print_hash_value);
    transparent_crc(p_1251->g_928.s1, "p_1251->g_928.s1", print_hash_value);
    transparent_crc(p_1251->g_928.s2, "p_1251->g_928.s2", print_hash_value);
    transparent_crc(p_1251->g_928.s3, "p_1251->g_928.s3", print_hash_value);
    transparent_crc(p_1251->g_928.s4, "p_1251->g_928.s4", print_hash_value);
    transparent_crc(p_1251->g_928.s5, "p_1251->g_928.s5", print_hash_value);
    transparent_crc(p_1251->g_928.s6, "p_1251->g_928.s6", print_hash_value);
    transparent_crc(p_1251->g_928.s7, "p_1251->g_928.s7", print_hash_value);
    transparent_crc(p_1251->g_937.x, "p_1251->g_937.x", print_hash_value);
    transparent_crc(p_1251->g_937.y, "p_1251->g_937.y", print_hash_value);
    transparent_crc(p_1251->g_937.z, "p_1251->g_937.z", print_hash_value);
    transparent_crc(p_1251->g_937.w, "p_1251->g_937.w", print_hash_value);
    transparent_crc(p_1251->g_952.x, "p_1251->g_952.x", print_hash_value);
    transparent_crc(p_1251->g_952.y, "p_1251->g_952.y", print_hash_value);
    transparent_crc(p_1251->g_975.x, "p_1251->g_975.x", print_hash_value);
    transparent_crc(p_1251->g_975.y, "p_1251->g_975.y", print_hash_value);
    transparent_crc(p_1251->g_977.x, "p_1251->g_977.x", print_hash_value);
    transparent_crc(p_1251->g_977.y, "p_1251->g_977.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1251->g_979[i], "p_1251->g_979[i]", print_hash_value);

    }
    transparent_crc(p_1251->g_983.s0, "p_1251->g_983.s0", print_hash_value);
    transparent_crc(p_1251->g_983.s1, "p_1251->g_983.s1", print_hash_value);
    transparent_crc(p_1251->g_983.s2, "p_1251->g_983.s2", print_hash_value);
    transparent_crc(p_1251->g_983.s3, "p_1251->g_983.s3", print_hash_value);
    transparent_crc(p_1251->g_983.s4, "p_1251->g_983.s4", print_hash_value);
    transparent_crc(p_1251->g_983.s5, "p_1251->g_983.s5", print_hash_value);
    transparent_crc(p_1251->g_983.s6, "p_1251->g_983.s6", print_hash_value);
    transparent_crc(p_1251->g_983.s7, "p_1251->g_983.s7", print_hash_value);
    transparent_crc(p_1251->g_983.s8, "p_1251->g_983.s8", print_hash_value);
    transparent_crc(p_1251->g_983.s9, "p_1251->g_983.s9", print_hash_value);
    transparent_crc(p_1251->g_983.sa, "p_1251->g_983.sa", print_hash_value);
    transparent_crc(p_1251->g_983.sb, "p_1251->g_983.sb", print_hash_value);
    transparent_crc(p_1251->g_983.sc, "p_1251->g_983.sc", print_hash_value);
    transparent_crc(p_1251->g_983.sd, "p_1251->g_983.sd", print_hash_value);
    transparent_crc(p_1251->g_983.se, "p_1251->g_983.se", print_hash_value);
    transparent_crc(p_1251->g_983.sf, "p_1251->g_983.sf", print_hash_value);
    transparent_crc(p_1251->g_984.f0, "p_1251->g_984.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1251->g_1054[i][j][k].f0, "p_1251->g_1054[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1251->g_1061, "p_1251->g_1061", print_hash_value);
    transparent_crc(p_1251->g_1104, "p_1251->g_1104", print_hash_value);
    transparent_crc(p_1251->g_1111.f0, "p_1251->g_1111.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1251->g_1121[i][j][k].f0, "p_1251->g_1121[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1251->g_1143.f0, "p_1251->g_1143.f0", print_hash_value);
    transparent_crc(p_1251->g_1171, "p_1251->g_1171", print_hash_value);
    transparent_crc(p_1251->g_1175.s0, "p_1251->g_1175.s0", print_hash_value);
    transparent_crc(p_1251->g_1175.s1, "p_1251->g_1175.s1", print_hash_value);
    transparent_crc(p_1251->g_1175.s2, "p_1251->g_1175.s2", print_hash_value);
    transparent_crc(p_1251->g_1175.s3, "p_1251->g_1175.s3", print_hash_value);
    transparent_crc(p_1251->g_1175.s4, "p_1251->g_1175.s4", print_hash_value);
    transparent_crc(p_1251->g_1175.s5, "p_1251->g_1175.s5", print_hash_value);
    transparent_crc(p_1251->g_1175.s6, "p_1251->g_1175.s6", print_hash_value);
    transparent_crc(p_1251->g_1175.s7, "p_1251->g_1175.s7", print_hash_value);
    transparent_crc(p_1251->g_1182.s0, "p_1251->g_1182.s0", print_hash_value);
    transparent_crc(p_1251->g_1182.s1, "p_1251->g_1182.s1", print_hash_value);
    transparent_crc(p_1251->g_1182.s2, "p_1251->g_1182.s2", print_hash_value);
    transparent_crc(p_1251->g_1182.s3, "p_1251->g_1182.s3", print_hash_value);
    transparent_crc(p_1251->g_1182.s4, "p_1251->g_1182.s4", print_hash_value);
    transparent_crc(p_1251->g_1182.s5, "p_1251->g_1182.s5", print_hash_value);
    transparent_crc(p_1251->g_1182.s6, "p_1251->g_1182.s6", print_hash_value);
    transparent_crc(p_1251->g_1182.s7, "p_1251->g_1182.s7", print_hash_value);
    transparent_crc(p_1251->g_1191.x, "p_1251->g_1191.x", print_hash_value);
    transparent_crc(p_1251->g_1191.y, "p_1251->g_1191.y", print_hash_value);
    transparent_crc(p_1251->g_1191.z, "p_1251->g_1191.z", print_hash_value);
    transparent_crc(p_1251->g_1191.w, "p_1251->g_1191.w", print_hash_value);
    transparent_crc(p_1251->g_1219, "p_1251->g_1219", print_hash_value);
    transparent_crc(p_1251->g_1227, "p_1251->g_1227", print_hash_value);
    transparent_crc(p_1251->g_1231.s0, "p_1251->g_1231.s0", print_hash_value);
    transparent_crc(p_1251->g_1231.s1, "p_1251->g_1231.s1", print_hash_value);
    transparent_crc(p_1251->g_1231.s2, "p_1251->g_1231.s2", print_hash_value);
    transparent_crc(p_1251->g_1231.s3, "p_1251->g_1231.s3", print_hash_value);
    transparent_crc(p_1251->g_1231.s4, "p_1251->g_1231.s4", print_hash_value);
    transparent_crc(p_1251->g_1231.s5, "p_1251->g_1231.s5", print_hash_value);
    transparent_crc(p_1251->g_1231.s6, "p_1251->g_1231.s6", print_hash_value);
    transparent_crc(p_1251->g_1231.s7, "p_1251->g_1231.s7", print_hash_value);
    transparent_crc(p_1251->g_1231.s8, "p_1251->g_1231.s8", print_hash_value);
    transparent_crc(p_1251->g_1231.s9, "p_1251->g_1231.s9", print_hash_value);
    transparent_crc(p_1251->g_1231.sa, "p_1251->g_1231.sa", print_hash_value);
    transparent_crc(p_1251->g_1231.sb, "p_1251->g_1231.sb", print_hash_value);
    transparent_crc(p_1251->g_1231.sc, "p_1251->g_1231.sc", print_hash_value);
    transparent_crc(p_1251->g_1231.sd, "p_1251->g_1231.sd", print_hash_value);
    transparent_crc(p_1251->g_1231.se, "p_1251->g_1231.se", print_hash_value);
    transparent_crc(p_1251->g_1231.sf, "p_1251->g_1231.sf", print_hash_value);
    transparent_crc(p_1251->g_1233.x, "p_1251->g_1233.x", print_hash_value);
    transparent_crc(p_1251->g_1233.y, "p_1251->g_1233.y", print_hash_value);
    transparent_crc(p_1251->g_1244.s0, "p_1251->g_1244.s0", print_hash_value);
    transparent_crc(p_1251->g_1244.s1, "p_1251->g_1244.s1", print_hash_value);
    transparent_crc(p_1251->g_1244.s2, "p_1251->g_1244.s2", print_hash_value);
    transparent_crc(p_1251->g_1244.s3, "p_1251->g_1244.s3", print_hash_value);
    transparent_crc(p_1251->g_1244.s4, "p_1251->g_1244.s4", print_hash_value);
    transparent_crc(p_1251->g_1244.s5, "p_1251->g_1244.s5", print_hash_value);
    transparent_crc(p_1251->g_1244.s6, "p_1251->g_1244.s6", print_hash_value);
    transparent_crc(p_1251->g_1244.s7, "p_1251->g_1244.s7", print_hash_value);
    transparent_crc(p_1251->g_1244.s8, "p_1251->g_1244.s8", print_hash_value);
    transparent_crc(p_1251->g_1244.s9, "p_1251->g_1244.s9", print_hash_value);
    transparent_crc(p_1251->g_1244.sa, "p_1251->g_1244.sa", print_hash_value);
    transparent_crc(p_1251->g_1244.sb, "p_1251->g_1244.sb", print_hash_value);
    transparent_crc(p_1251->g_1244.sc, "p_1251->g_1244.sc", print_hash_value);
    transparent_crc(p_1251->g_1244.sd, "p_1251->g_1244.sd", print_hash_value);
    transparent_crc(p_1251->g_1244.se, "p_1251->g_1244.se", print_hash_value);
    transparent_crc(p_1251->g_1244.sf, "p_1251->g_1244.sf", print_hash_value);
    transparent_crc(p_1251->v_collective, "p_1251->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 21; i++)
            transparent_crc(p_1251->l_special_values[i], "p_1251->l_special_values[i]", print_hash_value);
    transparent_crc(p_1251->l_comm_values[get_linear_local_id()], "p_1251->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1251->g_comm_values[get_linear_group_id() * 200 + get_linear_local_id()], "p_1251->g_comm_values[get_linear_group_id() * 200 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
