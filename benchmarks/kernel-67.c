// --atomics 17 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 37,30,6 -l 1,6,6
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

__constant uint32_t permutations[10][36] = {
{31,9,14,22,1,33,16,30,25,12,29,2,23,7,27,21,17,26,18,13,20,3,11,35,24,0,6,15,19,34,8,10,5,4,32,28}, // permutation 0
{27,3,9,8,24,6,23,26,7,30,13,21,4,5,29,20,0,2,10,17,18,14,25,11,32,28,12,1,16,19,34,31,15,22,33,35}, // permutation 1
{22,23,4,26,19,9,35,31,30,27,2,32,12,3,10,29,17,24,6,33,5,20,16,28,21,34,0,1,18,11,25,8,7,15,14,13}, // permutation 2
{18,12,34,15,22,2,33,8,35,21,3,13,0,11,7,28,14,16,19,5,6,31,27,32,9,30,4,1,26,23,25,24,17,20,29,10}, // permutation 3
{21,16,11,25,15,28,4,8,17,20,34,10,9,2,24,13,29,23,19,27,1,6,31,30,33,12,32,22,18,5,26,7,35,14,3,0}, // permutation 4
{32,15,9,34,27,22,26,23,7,35,24,16,10,11,28,19,13,20,18,0,8,21,31,6,2,4,3,29,14,25,30,1,33,5,17,12}, // permutation 5
{4,13,26,1,32,6,11,33,30,3,25,16,10,0,9,21,29,19,12,28,2,18,8,5,31,20,27,15,35,24,34,22,7,14,23,17}, // permutation 6
{32,19,27,11,25,22,0,4,13,35,3,16,5,14,28,26,31,9,10,6,18,7,24,29,8,17,34,2,33,23,1,21,12,30,15,20}, // permutation 7
{35,18,27,26,22,29,4,9,31,5,7,20,0,32,10,33,2,11,6,30,8,21,25,19,16,24,34,3,17,28,15,23,1,14,12,13}, // permutation 8
{5,25,2,10,13,35,30,17,29,15,32,26,24,21,14,34,16,22,31,11,3,23,18,28,8,0,9,6,33,27,7,4,19,1,20,12} // permutation 9
};

// Seed: 3036511889

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int8_t  f0;
   volatile uint16_t  f1;
   volatile uint8_t  f2;
   int16_t  f3;
   int32_t  f4;
   uint8_t  f5;
   uint16_t  f6;
   volatile int32_t  f7;
   volatile uint8_t  f8;
};

struct S1 {
   uint32_t  f0;
   struct S0  f1;
   volatile uint32_t  f2;
   uint64_t  f3;
   int32_t  f4;
   uint16_t  f5;
};

union U2 {
   volatile int16_t  f0;
   int32_t  f1;
};

struct S3 {
    volatile VECTOR(uint16_t, 2) g_4;
    int32_t g_39;
    struct S1 g_60;
    VECTOR(uint16_t, 2) g_69;
    struct S1 g_81;
    int32_t g_82[1][4][6];
    int32_t g_86;
    VECTOR(uint16_t, 4) g_113;
    VECTOR(uint32_t, 4) g_125;
    VECTOR(uint16_t, 16) g_127;
    uint32_t g_138;
    VECTOR(int32_t, 16) g_162;
    struct S1 g_174;
    struct S1 g_187;
    struct S1 *g_186;
    VECTOR(int16_t, 4) g_206;
    uint64_t g_207;
    VECTOR(int16_t, 4) g_217;
    VECTOR(uint8_t, 16) g_222;
    union U2 g_228;
    VECTOR(uint8_t, 4) g_238;
    union U2 g_253[8][3];
    volatile union U2 g_256[7][5][6];
    volatile union U2 *g_255;
    volatile union U2 * volatile *g_254;
    VECTOR(uint32_t, 8) g_263;
    int32_t *g_295;
    uint64_t g_302[8];
    VECTOR(int16_t, 4) g_337;
    VECTOR(uint16_t, 16) g_349;
    VECTOR(uint16_t, 8) g_351;
    int8_t *g_361;
    int8_t **g_360[2];
    int32_t *g_376[1];
    int32_t * volatile *g_375[1][8];
    uint16_t g_400;
    union U2 g_404;
    union U2 g_405;
    union U2 g_406;
    union U2 g_407;
    union U2 g_408;
    union U2 g_409;
    union U2 g_410[9];
    union U2 g_411;
    union U2 g_412;
    union U2 g_413;
    union U2 g_414;
    union U2 *g_403[7][10];
    VECTOR(int32_t, 2) g_419;
    VECTOR(uint16_t, 2) g_428;
    uint32_t g_444;
    int32_t *g_464;
    int32_t **g_463;
    int32_t **g_467;
    int32_t **g_468;
    uint8_t *g_470;
    uint8_t * volatile *g_469[10][10];
    struct S0 g_481;
    int16_t g_497[6][4][8];
    VECTOR(int8_t, 2) g_536;
    volatile struct S0 *g_573;
    volatile struct S0 * volatile *g_572[10][5][1];
    VECTOR(int8_t, 2) g_583;
    uint8_t g_586;
    VECTOR(uint16_t, 16) g_620;
    VECTOR(uint32_t, 8) g_625;
    VECTOR(uint16_t, 2) g_627;
    int8_t g_677;
    VECTOR(uint64_t, 4) g_699;
    VECTOR(int32_t, 2) g_734;
    VECTOR(uint64_t, 2) g_764;
    VECTOR(int8_t, 8) g_772;
    VECTOR(int8_t, 4) g_774;
    VECTOR(uint32_t, 8) g_782;
    uint64_t *g_810;
    struct S0 g_831;
    VECTOR(int32_t, 4) g_848;
    VECTOR(int32_t, 4) g_849;
    int32_t **g_867;
    int32_t **g_868[3];
    volatile struct S0 g_871;
    volatile VECTOR(uint8_t, 8) g_893;
    VECTOR(int32_t, 2) g_903;
    volatile uint32_t * volatile g_908;
    volatile uint32_t * volatile *g_907;
    volatile uint32_t * volatile ** volatile g_909;
    struct S1 **g_936[1];
    struct S1 ***g_935;
    volatile VECTOR(int64_t, 16) g_938;
    volatile struct S1 g_946[7];
    volatile struct S0 g_948[4][8];
    volatile struct S0 * volatile g_949;
    volatile struct S0 g_961[9];
    int64_t g_965;
    volatile VECTOR(uint8_t, 4) g_979;
    VECTOR(uint8_t, 8) g_980;
    volatile VECTOR(uint8_t, 8) g_981;
    int16_t g_984[5];
    union U2 *g_1014;
    volatile VECTOR(int8_t, 8) g_1021;
    uint64_t * volatile *g_1041[6][1];
    uint64_t * volatile **g_1040;
    struct S0 *g_1066[6];
    struct S0 **g_1065;
    VECTOR(uint64_t, 4) g_1078;
    struct S1 g_1083;
    volatile VECTOR(uint64_t, 8) g_1089;
    VECTOR(int8_t, 16) g_1102;
    VECTOR(int8_t, 2) g_1104;
    VECTOR(int8_t, 4) g_1106;
    VECTOR(int8_t, 8) g_1108;
    VECTOR(int8_t, 8) g_1109;
    int64_t g_1120[7];
    volatile union U2 g_1163[5];
    uint32_t **g_1167;
    volatile int64_t g_1185;
    volatile VECTOR(int32_t, 8) g_1216;
    volatile VECTOR(int32_t, 2) g_1218;
    uint16_t *g_1225;
    VECTOR(uint8_t, 4) g_1240;
    volatile struct S1 g_1241[7];
    volatile VECTOR(int8_t, 2) g_1271;
    volatile VECTOR(uint64_t, 8) g_1274;
    volatile VECTOR(uint64_t, 8) g_1277;
    VECTOR(uint64_t, 2) g_1278;
    VECTOR(uint8_t, 4) g_1280;
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
int8_t  func_1(struct S3 * p_1294);
int8_t  func_12(uint16_t  p_13, int32_t  p_14, uint32_t  p_15, uint8_t  p_16, struct S3 * p_1294);
int8_t  func_19(uint32_t  p_20, int16_t  p_21, int32_t  p_22, struct S3 * p_1294);
uint32_t  func_27(int8_t  p_28, int16_t  p_29, int64_t  p_30, struct S3 * p_1294);
int8_t  func_35(uint8_t  p_36, int32_t  p_37, struct S3 * p_1294);
int32_t  func_42(int32_t * p_43, int32_t  p_44, int32_t  p_45, struct S3 * p_1294);
int32_t * func_46(uint16_t  p_47, uint16_t  p_48, int8_t  p_49, struct S3 * p_1294);
struct S1 * func_54(struct S1 * p_55, uint32_t  p_56, int32_t  p_57, int8_t  p_58, struct S3 * p_1294);
uint16_t  func_70(uint64_t  p_71, int32_t  p_72, uint8_t  p_73, int64_t  p_74, struct S3 * p_1294);
uint64_t  func_75(struct S1 * p_76, uint32_t  p_77, int32_t * p_78, struct S3 * p_1294);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1294->g_comm_values p_1294->g_4 p_1294->l_comm_values p_1294->g_60.f1.f5 p_1294->g_187.f1.f5 p_1294->g_413.f1 p_1294->g_228.f1 p_1294->g_463 p_1294->g_464 p_1294->g_468 p_1294->g_187.f1.f6 p_1294->g_39 p_1294->g_60.f3 p_1294->g_69 p_1294->g_82 p_1294->g_81.f4 p_1294->g_81.f1.f0 p_1294->g_113 p_1294->g_81.f1.f5 p_1294->g_86 p_1294->g_125 p_1294->g_127 p_1294->g_81.f0 p_1294->g_60.f5 p_1294->g_81.f5 p_1294->g_60.f1.f0 p_1294->g_138 p_1294->g_81.f1.f6 p_1294->g_81.f1.f4 p_1294->g_60.f1.f3 p_1294->g_162 p_1294->g_186 p_1294->g_206 p_1294->g_207 p_1294->g_60.f0 p_1294->g_217 p_1294->g_222 p_1294->g_238 p_1294->g_254 p_1294->g_263 p_1294->g_187.f1.f0 p_1294->g_302 p_1294->g_187.f1.f3 p_1294->g_174.f4 p_1294->g_337 p_1294->g_349 p_1294->g_351 p_1294->g_295 p_1294->g_360 p_1294->g_375 p_1294->g_400 p_1294->g_409.f1 p_1294->g_481.f6 p_1294->g_497 p_1294->g_481.f5 p_1294->g_586 p_1294->g_620 p_1294->g_625 p_1294->g_627 p_1294->g_361 p_1294->g_174.f5 p_1294->g_428 p_1294->g_764 p_1294->g_772 p_1294->g_774 p_1294->g_782 p_1294->g_481.f4 p_1294->g_187.f0 p_1294->g_187.f5 p_1294->g_60.f1.f6 p_1294->g_481.f3 p_1294->g_81.f3 p_1294->g_187 p_1294->g_848 p_1294->g_849 p_1294->g_871 p_1294->g_831.f3 p_1294->g_893 p_1294->g_255 p_1294->g_256 p_1294->g_903 p_1294->g_536 p_1294->g_907 p_1294->g_909 p_1294->g_444 p_1294->g_868 p_1294->g_376 p_1294->g_935 p_1294->g_938 p_1294->g_60.f1.f8 p_1294->g_419 p_1294->g_946 p_1294->g_936 p_1294->g_948 p_1294->g_949 p_1294->g_961 p_1294->g_965 p_1294->g_979 p_1294->g_980 p_1294->g_981 p_1294->g_984 p_1294->g_1021 p_1294->g_1040 p_1294->g_1065 p_1294->g_1078 p_1294->g_81.f1.f1 p_1294->g_1083 p_1294->g_1089 p_1294->g_1102 p_1294->g_1104 p_1294->g_1106 p_1294->g_1108 p_1294->g_1109 p_1294->g_1120 p_1294->g_174.f3 p_1294->g_60.f1.f2 p_1294->g_481.f2 p_1294->g_1163 p_1294->g_1167 p_1294->g_831.f5 p_1294->g_1271 p_1294->g_1274 p_1294->g_1277 p_1294->g_1278 p_1294->g_1280 p_1294->g_1241.f5 p_1294->g_1225
 * writes: p_1294->g_39 p_1294->g_174.f3 p_1294->g_413.f1 p_1294->g_228.f1 p_1294->g_464 p_1294->g_86 p_1294->g_81.f1.f5 p_1294->g_60.f1.f5 p_1294->g_60.f1.f0 p_1294->g_138 p_1294->g_81.f1.f6 p_1294->g_60.f1.f3 p_1294->g_186 p_1294->g_162 p_1294->g_81.f5 p_1294->g_60.f5 p_1294->g_187.f1.f0 p_1294->g_295 p_1294->g_302 p_1294->g_187.f1.f3 p_1294->g_174.f4 p_1294->g_360 p_1294->g_403 p_1294->g_409.f1 p_1294->g_174.f1.f3 p_1294->g_497 p_1294->g_351 p_1294->g_127 p_1294->g_263 p_1294->g_125 p_1294->g_comm_values p_1294->g_207 p_1294->g_60.f3 p_1294->g_81.f1.f3 p_1294->g_586 p_1294->g_174.f5 p_1294->l_comm_values p_1294->g_810 p_1294->g_620 p_1294->g_60.f1.f6 p_1294->g_81.f3 p_1294->g_376 p_1294->g_867 p_1294->g_868 p_1294->g_187 p_1294->g_907 p_1294->g_444 p_1294->g_935 p_1294->g_419 p_1294->g_948 p_1294->g_831.f3 p_1294->g_481.f3 p_1294->g_1014 p_1294->g_984 p_1294->g_217 p_1294->g_81.f1.f0 p_1294->g_1065 p_1294->g_400 p_1294->g_625 p_1294->g_481.f6 p_1294->g_965
 */
int8_t  func_1(struct S3 * p_1294)
{ /* block id: 4 */
    int32_t l_33[4];
    VECTOR(int8_t, 16) l_34 = (VECTOR(int8_t, 16))(0x4BL, (VECTOR(int8_t, 4))(0x4BL, (VECTOR(int8_t, 2))(0x4BL, 0x13L), 0x13L), 0x13L, 0x4BL, 0x13L, (VECTOR(int8_t, 2))(0x4BL, 0x13L), (VECTOR(int8_t, 2))(0x4BL, 0x13L), 0x4BL, 0x13L, 0x4BL, 0x13L);
    int32_t *l_38 = &p_1294->g_39;
    uint32_t l_714 = 0x6360B5DDL;
    uint16_t *l_754 = &p_1294->g_174.f5;
    int32_t l_857 = (-9L);
    int32_t l_858[6] = {1L,0x11FDD32BL,1L,1L,0x11FDD32BL,1L};
    VECTOR(int32_t, 16) l_872 = (VECTOR(int32_t, 16))(0x7008AC79L, (VECTOR(int32_t, 4))(0x7008AC79L, (VECTOR(int32_t, 2))(0x7008AC79L, 0x01FD25E6L), 0x01FD25E6L), 0x01FD25E6L, 0x7008AC79L, 0x01FD25E6L, (VECTOR(int32_t, 2))(0x7008AC79L, 0x01FD25E6L), (VECTOR(int32_t, 2))(0x7008AC79L, 0x01FD25E6L), 0x7008AC79L, 0x01FD25E6L, 0x7008AC79L, 0x01FD25E6L);
    int32_t *l_884 = &l_857;
    VECTOR(uint8_t, 16) l_894 = (VECTOR(uint8_t, 16))(8UL, (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0x6BL), 0x6BL), 0x6BL, 8UL, 0x6BL, (VECTOR(uint8_t, 2))(8UL, 0x6BL), (VECTOR(uint8_t, 2))(8UL, 0x6BL), 8UL, 0x6BL, 8UL, 0x6BL);
    int32_t ***l_898 = &p_1294->g_868[2];
    uint32_t l_943 = 0UL;
    uint16_t l_1010 = 65534UL;
    int8_t l_1054 = 0x7BL;
    int64_t *l_1097 = &p_1294->g_965;
    VECTOR(int8_t, 16) l_1105 = (VECTOR(int8_t, 16))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x7BL), 0x7BL), 0x7BL, (-7L), 0x7BL, (VECTOR(int8_t, 2))((-7L), 0x7BL), (VECTOR(int8_t, 2))((-7L), 0x7BL), (-7L), 0x7BL, (-7L), 0x7BL);
    VECTOR(int8_t, 8) l_1107 = (VECTOR(int8_t, 8))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, 0x1BL), 0x1BL), 0x1BL, 0x64L, 0x1BL);
    uint32_t *l_1126 = &p_1294->g_444;
    uint32_t **l_1125 = &l_1126;
    uint32_t ***l_1124[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_1130 = 0x60L;
    uint32_t l_1134 = 2UL;
    int32_t l_1136 = (-1L);
    uint32_t l_1137 = 0x1A0B75F3L;
    VECTOR(int64_t, 16) l_1143 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int64_t, 2))(0L, 1L), (VECTOR(int64_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
    uint16_t l_1155 = 0xA367L;
    int64_t l_1156 = 0L;
    uint32_t l_1170 = 4294967295UL;
    union U2 *l_1177[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_1188 = 0x46L;
    uint16_t l_1235 = 0xB6BFL;
    uint16_t l_1251 = 0UL;
    uint8_t l_1261[4][3] = {{1UL,255UL,1UL},{1UL,255UL,1UL},{1UL,255UL,1UL},{1UL,255UL,1UL}};
    VECTOR(int8_t, 8) l_1270 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x69L), 0x69L), 0x69L, (-1L), 0x69L);
    VECTOR(uint64_t, 16) l_1275 = (VECTOR(uint64_t, 16))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 1UL), 1UL), 1UL, 3UL, 1UL, (VECTOR(uint64_t, 2))(3UL, 1UL), (VECTOR(uint64_t, 2))(3UL, 1UL), 3UL, 1UL, 3UL, 1UL);
    VECTOR(uint64_t, 2) l_1276 = (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x6FCC6D7EE42938F6L);
    VECTOR(int32_t, 2) l_1285 = (VECTOR(int32_t, 2))(0x0595A780L, 0x545888FDL);
    uint32_t l_1286[5][10][3] = {{{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L}},{{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L}},{{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L}},{{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L}},{{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L},{0xEE053164L,0xEE053164L,0x7AF70287L}}};
    VECTOR(uint32_t, 16) l_1289 = (VECTOR(uint32_t, 16))(0xE26A2F22L, (VECTOR(uint32_t, 4))(0xE26A2F22L, (VECTOR(uint32_t, 2))(0xE26A2F22L, 0UL), 0UL), 0UL, 0xE26A2F22L, 0UL, (VECTOR(uint32_t, 2))(0xE26A2F22L, 0UL), (VECTOR(uint32_t, 2))(0xE26A2F22L, 0UL), 0xE26A2F22L, 0UL, 0xE26A2F22L, 0UL);
    struct S1 ***l_1290 = &p_1294->g_936[0];
    int16_t l_1291 = 0x6EA5L;
    uint8_t l_1292 = 0x45L;
    uint64_t l_1293 = 0x68CA8E8D0408102AL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_33[i] = (-1L);
    if (((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 8))(p_1294->g_comm_values[p_1294->tid], ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 2))(p_1294->g_4.xx)), ((VECTOR(uint16_t, 2))(0x8884L, 0x5FDCL))))).xyyyxxxxyyxxyxxx)).s7, (p_1294->g_60.f1.f6 &= ((safe_mod_func_int64_t_s_s(p_1294->g_4.x, (safe_unary_minus_func_int32_t_s((safe_div_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(func_12(((*l_754) |= ((safe_lshift_func_int8_t_s_s(((0xFBL == func_19((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(0x79655965L, func_27((safe_mul_func_int8_t_s_s((l_33[0] , ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_34.s5db5a26cdee94ccb)).hi)).s1), func_35(l_34.sa, ((*l_38) = p_1294->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1294->tid, 36))]), p_1294))), l_714, p_1294->g_60.f1.f5, p_1294))), 5)), p_1294->g_187.f1.f5, l_33[0], p_1294)) >= l_33[3]), l_34.sc)) , p_1294->g_113.z)), p_1294->g_627.y, p_1294->g_238.y, l_33[0], p_1294), l_33[1])) >= l_33[3]), l_34.s6)))))) ^ p_1294->g_187.f5)), 0xA58DL, 65529UL, 0x01A9L, 1UL, 65535UL)).s6426151573364350, ((VECTOR(uint16_t, 16))(0x6EC1L))))).sf, p_1294->g_481.f3)) || FAKE_DIVERGE(p_1294->global_1_offset, get_global_id(1), 10)))
    { /* block id: 323 */
        uint32_t l_844 = 0x23269E0DL;
        int32_t **l_865 = &p_1294->g_376[0];
        uint64_t l_879 = 0UL;
        int32_t l_880 = (-1L);
        VECTOR(uint64_t, 8) l_928 = (VECTOR(uint64_t, 8))(4UL, (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 18446744073709551611UL), 18446744073709551611UL), 18446744073709551611UL, 4UL, 18446744073709551611UL);
        int32_t *l_947[8];
        uint32_t l_964 = 0xDABEAD53L;
        uint64_t l_967 = 18446744073709551608UL;
        uint32_t l_986 = 0UL;
        int8_t *l_1025 = &p_1294->g_174.f1.f0;
        int8_t *l_1026 = (void*)0;
        uint8_t l_1036 = 255UL;
        VECTOR(int16_t, 8) l_1073 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0B0DL), 0x0B0DL), 0x0B0DL, (-1L), 0x0B0DL);
        int64_t l_1082[6] = {0x5D540924BE6F78E6L,0x5D540924BE6F78E6L,0x5D540924BE6F78E6L,0x5D540924BE6F78E6L,0x5D540924BE6F78E6L,0x5D540924BE6F78E6L};
        VECTOR(int64_t, 16) l_1084 = (VECTOR(int64_t, 16))(0x04D6D9B80CC353D8L, (VECTOR(int64_t, 4))(0x04D6D9B80CC353D8L, (VECTOR(int64_t, 2))(0x04D6D9B80CC353D8L, 0x4EAE02C3BC82B995L), 0x4EAE02C3BC82B995L), 0x4EAE02C3BC82B995L, 0x04D6D9B80CC353D8L, 0x4EAE02C3BC82B995L, (VECTOR(int64_t, 2))(0x04D6D9B80CC353D8L, 0x4EAE02C3BC82B995L), (VECTOR(int64_t, 2))(0x04D6D9B80CC353D8L, 0x4EAE02C3BC82B995L), 0x04D6D9B80CC353D8L, 0x4EAE02C3BC82B995L, 0x04D6D9B80CC353D8L, 0x4EAE02C3BC82B995L);
        VECTOR(uint64_t, 4) l_1090 = (VECTOR(uint64_t, 4))(0xA3209BF4CE98E07AL, (VECTOR(uint64_t, 2))(0xA3209BF4CE98E07AL, 0xCA820E82D2B43D8FL), 0xCA820E82D2B43D8FL);
        VECTOR(int8_t, 8) l_1103 = (VECTOR(int8_t, 8))(0x58L, (VECTOR(int8_t, 4))(0x58L, (VECTOR(int8_t, 2))(0x58L, 0x7AL), 0x7AL), 0x7AL, 0x58L, 0x7AL);
        uint8_t *l_1118[8][5][2] = {{{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5}},{{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5}},{{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5}},{{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5}},{{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5}},{{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5}},{{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5}},{{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_187.f1.f5,&p_1294->g_81.f1.f5}}};
        uint32_t l_1119 = 0xC975ACCCL;
        uint16_t *l_1121 = (void*)0;
        uint16_t *l_1122 = &p_1294->g_400;
        int64_t l_1123 = (-9L);
        uint32_t ****l_1127[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int16_t *l_1128 = &p_1294->g_187.f1.f3;
        int16_t *l_1129 = &p_1294->g_81.f1.f3;
        uint16_t l_1131 = 0UL;
        uint32_t *l_1132 = (void*)0;
        uint32_t *l_1133 = &l_714;
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_947[i] = (void*)0;
        if ((*p_1294->g_295))
        { /* block id: 324 */
            int32_t l_833 = 0x2429079BL;
            uint64_t *l_852 = (void*)0;
            int32_t l_856[2];
            VECTOR(uint8_t, 16) l_895 = (VECTOR(uint8_t, 16))(0x68L, (VECTOR(uint8_t, 4))(0x68L, (VECTOR(uint8_t, 2))(0x68L, 0x7EL), 0x7EL), 0x7EL, 0x68L, 0x7EL, (VECTOR(uint8_t, 2))(0x68L, 0x7EL), (VECTOR(uint8_t, 2))(0x68L, 0x7EL), 0x68L, 0x7EL, 0x68L, 0x7EL);
            int32_t *l_919 = &p_1294->g_60.f4;
            int32_t l_942 = 1L;
            int i;
            for (i = 0; i < 2; i++)
                l_856[i] = 0x68E43361L;
            atomic_and(&p_1294->g_atomic_reduction[get_linear_group_id()], l_833 + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1294->v_collective += p_1294->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            for (p_1294->g_81.f3 = 0; (p_1294->g_81.f3 > 37); p_1294->g_81.f3 = safe_add_func_int32_t_s_s(p_1294->g_81.f3, 6))
            { /* block id: 328 */
                int32_t *l_836 = (void*)0;
                int32_t *l_837 = &p_1294->g_86;
                int32_t *l_838 = &p_1294->g_86;
                int32_t *l_839 = (void*)0;
                int32_t *l_840 = (void*)0;
                int32_t *l_841 = (void*)0;
                int32_t l_842 = 5L;
                int32_t *l_843[6][5] = {{&l_33[0],&p_1294->g_86,&l_33[0],&l_33[0],&p_1294->g_86},{&l_33[0],&p_1294->g_86,&l_33[0],&l_33[0],&p_1294->g_86},{&l_33[0],&p_1294->g_86,&l_33[0],&l_33[0],&p_1294->g_86},{&l_33[0],&p_1294->g_86,&l_33[0],&l_33[0],&p_1294->g_86},{&l_33[0],&p_1294->g_86,&l_33[0],&l_33[0],&p_1294->g_86},{&l_33[0],&p_1294->g_86,&l_33[0],&l_33[0],&p_1294->g_86}};
                int32_t **l_847 = &p_1294->g_376[0];
                int64_t *l_853 = (void*)0;
                int64_t *l_854 = (void*)0;
                int64_t *l_855 = (void*)0;
                VECTOR(int32_t, 2) l_875 = (VECTOR(int32_t, 2))(0x12E95142L, (-1L));
                uint64_t **l_890 = &p_1294->g_810;
                uint8_t l_906[10][3] = {{0x11L,0x87L,0x11L},{0x11L,0x87L,0x11L},{0x11L,0x87L,0x11L},{0x11L,0x87L,0x11L},{0x11L,0x87L,0x11L},{0x11L,0x87L,0x11L},{0x11L,0x87L,0x11L},{0x11L,0x87L,0x11L},{0x11L,0x87L,0x11L},{0x11L,0x87L,0x11L}};
                int i, j;
                ++l_844;
                if ((((((VECTOR(uint8_t, 4))(0x22L, (((FAKE_DIVERGE(p_1294->local_2_offset, get_local_id(2), 10) || l_34.s6) , (l_833 && (l_34.sb <= ((((l_38 == ((*l_847) = &p_1294->g_39)) , (((((*p_1294->g_186) , (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(p_1294->g_848.yxzxxyzyywzwyzxw)).s46, ((VECTOR(int32_t, 16))(p_1294->g_849.wxyywwzwzwxwwxwx)).s63))))), 0x702FDB9AL, (-8L), (safe_add_func_int64_t_s_s((l_833 = ((void*)0 != l_852)), (l_844 > l_856[0]))), 0x5381A88EL, 0L, (*l_837), ((VECTOR(int32_t, 4))(0x2FF17ACDL)), 0x0672C7D3L, ((VECTOR(int32_t, 2))(0x063C23FDL)), 0x50B31A5EL)).s86)).even , l_856[1])) , l_857) && 9L) | l_844)) && p_1294->g_60.f1.f6) | (*p_1294->g_361))))) < l_856[0]), 0xA9L, 7UL)).y && l_858[5]) | l_844) < l_858[5]))
                { /* block id: 332 */
                    int32_t ***l_866[4][2][5] = {{{&l_865,&l_865,&l_865,&l_847,&l_865},{&l_865,&l_865,&l_865,&l_847,&l_865}},{{&l_865,&l_865,&l_865,&l_847,&l_865},{&l_865,&l_865,&l_865,&l_847,&l_865}},{{&l_865,&l_865,&l_865,&l_847,&l_865},{&l_865,&l_865,&l_865,&l_847,&l_865}},{{&l_865,&l_865,&l_865,&l_847,&l_865},{&l_865,&l_865,&l_865,&l_847,&l_865}}};
                    int32_t l_873 = (-1L);
                    int16_t *l_874 = &p_1294->g_60.f1.f3;
                    VECTOR(int32_t, 16) l_878 = (VECTOR(int32_t, 16))(0x5FEA4275L, (VECTOR(int32_t, 4))(0x5FEA4275L, (VECTOR(int32_t, 2))(0x5FEA4275L, (-4L)), (-4L)), (-4L), 0x5FEA4275L, (-4L), (VECTOR(int32_t, 2))(0x5FEA4275L, (-4L)), (VECTOR(int32_t, 2))(0x5FEA4275L, (-4L)), 0x5FEA4275L, (-4L), 0x5FEA4275L, (-4L));
                    uint64_t **l_889 = &p_1294->g_810;
                    uint64_t ***l_888 = &l_889;
                    uint32_t *l_905 = (void*)0;
                    int i, j, k;
                    if (((safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(((((((safe_lshift_func_int8_t_s_s((0x7F3432A91202239DL < (l_847 == (p_1294->g_868[2] = (p_1294->g_867 = l_865)))), (safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((-3L), (safe_unary_minus_func_uint16_t_u((p_1294->g_871 , p_1294->g_831.f3))), 0x07870F99L, 1L)), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_872.s38)), 3L, 0L)).hi)), ((VECTOR(int32_t, 4))(((p_1294->g_871.f7 & l_873) >= ((*l_874) = l_833)), ((VECTOR(int32_t, 2))(l_875.xx)), 0x033844D7L)).even))), 0x393DFDB0L, 0x4851369DL)).s7)))) <= ((l_878.sc |= ((safe_mul_func_int8_t_s_s((!l_714), l_833)) || 1UL)) >= p_1294->g_comm_values[p_1294->tid])) == 0x5BCDL) , 1L) != l_856[1]) >= (-1L)), 4)) , l_879), l_844)) < p_1294->g_162.s7))
                    { /* block id: 337 */
                        uint32_t l_881 = 0xB5289FE2L;
                        l_881--;
                        return (*p_1294->g_361);
                    }
                    else
                    { /* block id: 340 */
                        uint16_t l_885[10][3][5] = {{{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL}},{{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL}},{{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL}},{{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL}},{{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL}},{{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL}},{{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL}},{{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL}},{{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL}},{{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL},{0xD422L,65527UL,9UL,65535UL,0xC7EBL}}};
                        int i, j, k;
                        l_884 = &l_842;
                        l_885[3][1][2]++;
                    }
                    if ((((*l_888) = (void*)0) == l_890))
                    { /* block id: 345 */
                        int32_t ***l_899 = &p_1294->g_868[2];
                        uint8_t *l_900 = &p_1294->g_81.f1.f5;
                        int32_t l_904 = 0L;
                        (*p_1294->g_468) = func_46((((((safe_lshift_func_int8_t_s_s((((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(p_1294->g_893.s75)))).yxyxyyxy)).lo, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_894.sb1)), 0xD0L, 0x4EL)), ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 8))(l_895.s4da8cc62)).s03, (uint8_t)((safe_rshift_func_uint8_t_u_u(((*l_900) = (((*p_1294->g_255) , l_898) != l_899)), 5)) & ((safe_lshift_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), ((((((((+((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0UL, 0x76A54787L)).yyxyyxxyyxxxxxyy)).sd) && ((VECTOR(int32_t, 8))(p_1294->g_903.xxxyxxxy)).s0) && l_878.s4) , &p_1294->g_400) != (void*)0) | ((((*l_754) = FAKE_DIVERGE(p_1294->global_2_offset, get_global_id(2), 10)) < p_1294->g_60.f1.f6) | (p_1294->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1294->tid, 36))] = l_904))) , l_884) == l_905))) <= l_880)), (uint8_t)FAKE_DIVERGE(p_1294->local_2_offset, get_local_id(2), 10)))).yxyy))))).yzxyzzyy, ((VECTOR(uint8_t, 8))(0xA8L))))).s11, ((VECTOR(uint8_t, 2))(0UL))))).xxyx))).x & l_904), 4)) & l_906[0][0]) , p_1294->g_125.x) > 0x42ECAD03DF30242BL) | (-4L)), p_1294->g_536.y, (*p_1294->g_361), p_1294);
                        (*p_1294->g_186) = (*p_1294->g_186);
                    }
                    else
                    { /* block id: 351 */
                        (*p_1294->g_909) = p_1294->g_907;
                    }
                    for (p_1294->g_444 = 0; (p_1294->g_444 <= 10); p_1294->g_444 = safe_add_func_int16_t_s_s(p_1294->g_444, 3))
                    { /* block id: 356 */
                        struct S1 ****l_937[5][5][5] = {{{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935}},{{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935}},{{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935}},{{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935}},{{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935},{(void*)0,&p_1294->g_935,(void*)0,(void*)0,&p_1294->g_935}}};
                        int32_t l_941 = 0x592E851DL;
                        int i, j, k;
                        (*p_1294->g_463) = (*p_1294->g_468);
                        p_1294->g_419.y |= (safe_unary_minus_func_int8_t_s((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((1UL >= (safe_add_func_int16_t_s_s(((*l_884) = 0x664FL), 65527UL))) <= ((**l_898) != l_919)), (*l_837))), ((safe_mod_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(((((safe_mod_func_int16_t_s_s(((*l_874) &= (((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 8))(l_928.s66234132)), ((VECTOR(uint64_t, 2))(0xC436FEF038019C71L, 0x375FB6E6831202DBL)).yxxyxyxx))).s0 < (((safe_mod_func_uint8_t_u_u(((((safe_mod_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 16))(((((VECTOR(uint8_t, 4))(((safe_sub_func_int64_t_s_s((((p_1294->g_935 = p_1294->g_935) == (void*)0) , ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 2))(p_1294->g_938.s73)), ((VECTOR(int64_t, 2))(0L, 0x1DECEA4C26859DA2L))))).xxxyyyyx)).s2), (safe_sub_func_int64_t_s_s(p_1294->g_162.s9, l_941)))) && p_1294->g_263.s3), ((VECTOR(uint8_t, 2))(255UL)), 0x77L)).x || FAKE_DIVERGE(p_1294->group_0_offset, get_group_id(0), 10)) >= (*p_1294->g_295)), (*l_838), 0xA071L, p_1294->g_174.f5, 0xA7D9L, 0xF6F9L, 65530UL, ((VECTOR(uint16_t, 4))(65528UL)), 0x1272L, 0x621AL, ((VECTOR(uint16_t, 2))(0UL)), 1UL)), ((VECTOR(uint16_t, 16))(2UL))))).sd)) > (*l_838)) && l_942) , l_856[1]), l_943)) != 0x6ECAL) < 9L))), 0x5AEFL)) > l_928.s7) < l_941) ^ (-1L)), l_880)) && p_1294->g_60.f1.f8), 2UL)) & p_1294->g_625.s3)))));
                    }
                }
                else
                { /* block id: 363 */
                    (*p_1294->g_468) = (*p_1294->g_468);
                    (*p_1294->g_186) = (*p_1294->g_186);
                    for (p_1294->g_60.f1.f6 = 17; (p_1294->g_60.f1.f6 >= 9); p_1294->g_60.f1.f6--)
                    { /* block id: 368 */
                        if (l_928.s2)
                            break;
                        (***p_1294->g_935) = p_1294->g_946[1];
                        if (l_879)
                            break;
                        (*l_838) = (p_1294->g_849.w != 0UL);
                    }
                }
                (*p_1294->g_463) = (*p_1294->g_468);
                return (*l_837);
            }
            l_947[3] = &l_880;
            (*p_1294->g_949) = p_1294->g_948[1][0];
        }
        else
        { /* block id: 380 */
            int16_t l_954 = 1L;
            int8_t l_966[3][2];
            int32_t l_985 = 0x68401720L;
            uint32_t *l_988 = (void*)0;
            int64_t l_992[5][4] = {{(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L)}};
            int32_t l_993 = 0x152C0646L;
            union U2 *l_1011 = &p_1294->g_405;
            uint8_t l_1018[2];
            int8_t **l_1024[1][4] = {{&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361}};
            int16_t *l_1037[1];
            int64_t l_1056[9][7] = {{(-7L),(-7L),0x3AB9EFAC375614A5L,2L,0x2A7EEF86EBD2171CL,2L,0x3AB9EFAC375614A5L},{(-7L),(-7L),0x3AB9EFAC375614A5L,2L,0x2A7EEF86EBD2171CL,2L,0x3AB9EFAC375614A5L},{(-7L),(-7L),0x3AB9EFAC375614A5L,2L,0x2A7EEF86EBD2171CL,2L,0x3AB9EFAC375614A5L},{(-7L),(-7L),0x3AB9EFAC375614A5L,2L,0x2A7EEF86EBD2171CL,2L,0x3AB9EFAC375614A5L},{(-7L),(-7L),0x3AB9EFAC375614A5L,2L,0x2A7EEF86EBD2171CL,2L,0x3AB9EFAC375614A5L},{(-7L),(-7L),0x3AB9EFAC375614A5L,2L,0x2A7EEF86EBD2171CL,2L,0x3AB9EFAC375614A5L},{(-7L),(-7L),0x3AB9EFAC375614A5L,2L,0x2A7EEF86EBD2171CL,2L,0x3AB9EFAC375614A5L},{(-7L),(-7L),0x3AB9EFAC375614A5L,2L,0x2A7EEF86EBD2171CL,2L,0x3AB9EFAC375614A5L},{(-7L),(-7L),0x3AB9EFAC375614A5L,2L,0x2A7EEF86EBD2171CL,2L,0x3AB9EFAC375614A5L}};
            struct S0 **l_1068 = &p_1294->g_1066[2];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_966[i][j] = 0x60L;
            }
            for (i = 0; i < 2; i++)
                l_1018[i] = 0x7FL;
            for (i = 0; i < 1; i++)
                l_1037[i] = &p_1294->g_984[4];
            if ((safe_lshift_func_int16_t_s_s((((((*p_1294->g_295) = (((safe_mod_func_int16_t_s_s((l_954 <= (!(safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s(((*p_1294->g_295) | (safe_mul_func_int16_t_s_s((~0L), (((*l_884) , ((p_1294->g_961[6] , (safe_mod_func_uint8_t_u_u(0x86L, (~l_954)))) ^ (!l_964))) > ((0x72L & 0x66L) ^ p_1294->g_965))))), (*l_884))), l_954)))), p_1294->g_849.y)) & p_1294->g_302[1]) | 9UL)) != 4UL) <= GROUP_DIVERGE(1, 1)) , l_966[0][0]), l_967)))
            { /* block id: 382 */
                int16_t l_974 = 0x6C3DL;
                uint8_t *l_987 = &p_1294->g_187.f1.f5;
                int16_t *l_989 = (void*)0;
                int16_t *l_990 = (void*)0;
                int16_t *l_991 = &p_1294->g_831.f3;
                uint32_t l_994 = 4294967290UL;
                int32_t l_997 = 0x3939FC90L;
                int32_t l_998 = 1L;
                uint8_t l_999[10] = {0x63L,0x63L,0x63L,0x63L,0x63L,0x63L,0x63L,0x63L,0x63L,0x63L};
                int i;
                (*p_1294->g_295) = (safe_lshift_func_uint16_t_u_s((((*l_991) ^= (l_966[0][0] || ((*l_754) |= (safe_mod_func_int8_t_s_s((&l_714 != ((safe_mod_func_int16_t_s_s(l_974, (safe_rshift_func_uint8_t_u_u(((((*l_987) = ((+(l_985 ^= ((safe_rshift_func_int8_t_s_u((*l_884), ((*l_884) , ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_1294->g_979.zx)), 1UL, 9UL, 255UL, ((*p_1294->g_186) , ((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 4))(p_1294->g_980.s1433)).zwywxxywwwwyxxxw, ((VECTOR(uint8_t, 2))(p_1294->g_981.s72)).yxyxyyxxyxxyxyyx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(1UL, 6UL, ((l_974 , ((safe_rshift_func_int8_t_s_s(p_1294->g_984[1], ((*p_1294->g_361) ^= (p_1294->g_60.f1.f3 == 0UL)))) > p_1294->g_979.z)) , 0x31L), 254UL, ((VECTOR(uint8_t, 2))(0xFAL)), 4UL, 0xC0L, 249UL, 0xA1L, ((VECTOR(uint8_t, 4))(1UL)), 252UL, 1UL)).s73)).xxxyxxyxxyxyyyyy)).sbc2e)).zxwwxyyzxxzwwwwz))).s2), 0x50L, 0x8CL)).s6))) , (*l_884)))) & l_986)) == (*l_884)) != (*l_884)), l_954)))) , l_988)), (*l_884)))))) > p_1294->g_138), 4));
                --l_994;
                l_999[4]--;
            }
            else
            { /* block id: 391 */
                int32_t l_1009 = 0L;
                for (p_1294->g_481.f3 = 0; (p_1294->g_481.f3 <= (-16)); p_1294->g_481.f3 = safe_sub_func_uint16_t_u_u(p_1294->g_481.f3, 7))
                { /* block id: 394 */
                    for (p_1294->g_81.f1.f5 = 0; (p_1294->g_81.f1.f5 >= 8); p_1294->g_81.f1.f5 = safe_add_func_int8_t_s_s(p_1294->g_81.f1.f5, 7))
                    { /* block id: 397 */
                        uint64_t l_1006 = 0x979443315EDD04E0L;
                        union U2 **l_1012 = &p_1294->g_403[3][4];
                        union U2 **l_1013[5][10][1] = {{{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011}},{{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011}},{{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011}},{{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011}},{{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011},{&l_1011}}};
                        int i, j, k;
                        l_1006++;
                        l_1010 ^= l_1009;
                        p_1294->g_1014 = ((*l_1012) = l_1011);
                    }
                }
            }
            for (p_1294->g_60.f1.f3 = 0; (p_1294->g_60.f1.f3 > 24); p_1294->g_60.f1.f3 = safe_add_func_uint8_t_u_u(p_1294->g_60.f1.f3, 6))
            { /* block id: 407 */
                int32_t l_1017[6][7] = {{0x3153CDE4L,(-1L),0x3153CDE4L,0x3153CDE4L,(-1L),0x3153CDE4L,0x3153CDE4L},{0x3153CDE4L,(-1L),0x3153CDE4L,0x3153CDE4L,(-1L),0x3153CDE4L,0x3153CDE4L},{0x3153CDE4L,(-1L),0x3153CDE4L,0x3153CDE4L,(-1L),0x3153CDE4L,0x3153CDE4L},{0x3153CDE4L,(-1L),0x3153CDE4L,0x3153CDE4L,(-1L),0x3153CDE4L,0x3153CDE4L},{0x3153CDE4L,(-1L),0x3153CDE4L,0x3153CDE4L,(-1L),0x3153CDE4L,0x3153CDE4L},{0x3153CDE4L,(-1L),0x3153CDE4L,0x3153CDE4L,(-1L),0x3153CDE4L,0x3153CDE4L}};
                int i, j;
                if ((*l_884))
                    break;
                l_1018[1]--;
                if (l_992[0][1])
                    continue;
            }
            if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))((l_985 || l_985), ((*p_1294->g_295) &= (((VECTOR(int8_t, 4))(p_1294->g_1021.s5022)).w > ((p_1294->g_980.s7 , p_1294->g_464) != ((((safe_add_func_uint16_t_u_u(((l_1025 = &l_966[0][1]) == (l_1026 = l_1026)), (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((-3L), (p_1294->g_217.z = (p_1294->g_984[4] |= (((((safe_rshift_func_uint8_t_u_s((*l_884), ((safe_unary_minus_func_int8_t_s(((safe_div_func_uint32_t_u_u(p_1294->g_351.s3, (*l_884))) , 0x29L))) | (*l_884)))) , &p_1294->g_868[2]) == (void*)0) , 0x249A4D9CL) == l_1036))))), 0xBB34L)))) <= l_966[0][1]) & p_1294->g_620.s0) , (void*)0)))), 0x2D255DF8L, 7L, 4L, (-5L), 0x3AF54BF4L, 0x36D1F6ABL)).odd, ((VECTOR(int32_t, 4))((-1L)))))).odd)).odd)
            { /* block id: 417 */
                int32_t *l_1058 = &l_993;
                for (p_1294->g_81.f1.f6 = 0; (p_1294->g_81.f1.f6 >= 18); p_1294->g_81.f1.f6 = safe_add_func_uint16_t_u_u(p_1294->g_81.f1.f6, 1))
                { /* block id: 420 */
                    uint8_t l_1049 = 7UL;
                    if ((p_1294->g_1040 != (void*)0))
                    { /* block id: 421 */
                        return (*p_1294->g_361);
                    }
                    else
                    { /* block id: 423 */
                        (*l_884) = 6L;
                    }
                    for (p_1294->g_81.f1.f0 = 0; (p_1294->g_81.f1.f0 != 3); ++p_1294->g_81.f1.f0)
                    { /* block id: 428 */
                        int16_t l_1048 = 0x5FA9L;
                        int16_t l_1055[10][8] = {{0x2076L,0x7678L,(-1L),(-6L),(-1L),0x7678L,0x2076L,1L},{0x2076L,0x7678L,(-1L),(-6L),(-1L),0x7678L,0x2076L,1L},{0x2076L,0x7678L,(-1L),(-6L),(-1L),0x7678L,0x2076L,1L},{0x2076L,0x7678L,(-1L),(-6L),(-1L),0x7678L,0x2076L,1L},{0x2076L,0x7678L,(-1L),(-6L),(-1L),0x7678L,0x2076L,1L},{0x2076L,0x7678L,(-1L),(-6L),(-1L),0x7678L,0x2076L,1L},{0x2076L,0x7678L,(-1L),(-6L),(-1L),0x7678L,0x2076L,1L},{0x2076L,0x7678L,(-1L),(-6L),(-1L),0x7678L,0x2076L,1L},{0x2076L,0x7678L,(-1L),(-6L),(-1L),0x7678L,0x2076L,1L},{0x2076L,0x7678L,(-1L),(-6L),(-1L),0x7678L,0x2076L,1L}};
                        int32_t *l_1057 = &l_993;
                        int i, j;
                        l_993 |= (safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((*l_884), 15)), (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 8))((l_1048 , l_1049), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x1C6DL, ((VECTOR(int16_t, 4))(1L, 0x6285L, 2L, (-10L))), 0x598FL, 0x6362L, (-1L))).even)), ((void*)0 == &p_1294->g_470), (-5L), 0x7CCFL)).lo))).odd)), ((VECTOR(uint16_t, 8))(0x5780L, 9UL, p_1294->g_481.f4, ((VECTOR(uint16_t, 4))(65535UL)), 65530UL)).s21))).xxyx)).x , p_1294->g_187.f1.f2)));
                        (*p_1294->g_468) = ((9L <= (safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(l_1054, (l_1055[1][5] <= l_1056[0][6]))), 0x4F86BDBBL))) , (l_1049 , (*p_1294->g_463)));
                        l_1058 = l_1057;
                    }
                    return (*p_1294->g_361);
                }
            }
            else
            { /* block id: 435 */
                struct S0 ***l_1067 = &p_1294->g_1065;
                int32_t l_1081 = 0x682EBD12L;
                (***p_1294->g_935) = (((safe_add_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((((*l_1067) = p_1294->g_1065) == l_1068), (((((safe_lshift_func_int16_t_s_s(((l_966[1][0] , ((*l_884) >= (&p_1294->g_470 != ((l_993 = (safe_sub_func_uint32_t_u_u((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_1073.s7741115677074712)))).se <= ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(p_1294->g_1078.wzyyyxwyyxxzzxxw)).even)).s4704106612250335)).s7d))).yxyyyyxxyxyxyyyx)).saa)).yxxx)).x || ((VECTOR(uint64_t, 4))(1UL, ((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(1L, (((+((p_1294->g_81.f1.f1 && ((safe_add_func_int32_t_s_s((5UL != l_1081), 0xD2967879L)) & FAKE_DIVERGE(p_1294->local_0_offset, get_local_id(0), 10))) , 8UL)) >= 6L) < 1UL), 8L, 0x6AE97AFFL)).lo)).yxyyyxyyyyxxyyxx)).even))).s66, ((VECTOR(uint32_t, 2))(4294967289UL))))), ((VECTOR(uint32_t, 2))(0x85732241L))))), 0xBD7AAEA2CB8F3946L)).x) < 0x5452L), (*l_884))), (*l_884))) , 2UL)), l_1081))) , (void*)0)))) != l_1082[1]), l_1081)) == 0x0789A12CL) ^ (*l_884)) || 0x5A1350BCL) >= l_1081))), 2)) > p_1294->g_625.s4) , (*l_884)), 0L)) < (-1L)) , p_1294->g_1083);
            }
        }
        l_1134 &= ((((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_1084.s8a)).yxyxyxyyxyyxxyyx)).s1c71))).x == (((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(0x6DBFA13DL, (*p_1294->g_295), 0x4F7FCC3EL, (safe_lshift_func_uint16_t_u_u(((-1L) == ((safe_sub_func_int32_t_s_s((0x4983D58B27E56F29L & ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 2))(p_1294->g_1089.s03)).yxyy, ((VECTOR(uint64_t, 4))(l_1090.xxzz)), ((VECTOR(uint64_t, 2))(18446744073709551612UL, 0x2DD21A50F15AAED3L)).yxyx))).z), ((VECTOR(uint32_t, 4))((p_1294->g_625.s1 ^= ((*l_1133) = (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((l_1097 == &p_1294->g_965), 2)) , ((3UL == p_1294->g_627.y) & ((safe_div_func_int16_t_s_s(((((*l_1129) = ((*l_1128) = (((l_1124[9] = (((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 8))(p_1294->g_1102.sa58e8fc6)).s0571315674412562, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_1103.s00723201)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_1294->g_1104.xyxy)))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(1L, ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 8))(l_1105.s6d19c65b)).odd, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(p_1294->g_1106.zzzxwyxx)).s56, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x1FL, 0x43L)).yyxy)).even)), 0x1CL, 0L, (-3L), 6L, (-7L), 0x07L)).s16, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))((-10L), 0x2FL)), ((VECTOR(int8_t, 8))(l_1107.s45442644)).s22, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1294->g_1108.s2031216056004075)))).s6f)))))).xyxx))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 16))(p_1294->g_1109.s5257366573072773)).hi, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x4DL, 0x73L)).xxyyxyyx))))).s07)), 0x1EL, ((*l_884) = ((((safe_add_func_int16_t_s_s(((--(*l_754)) <= (*l_884)), (+(safe_mul_func_uint16_t_u_u(((*l_1122) = (((*p_1294->g_361) = (l_1119 = (((safe_add_func_uint8_t_u_u((l_872.s7 = ((*l_884) || 0x44L)), (*p_1294->g_361))) >= 5L) ^ 2L))) || p_1294->g_1120[3])), 1UL))))) > p_1294->g_263.s0) != p_1294->g_187.f5) , (*l_884))), 0L, 0x7BL, 8L, 0L, (-9L), 0x25L, 1L)).se905))))))), ((VECTOR(int8_t, 16))((-10L)))))).s39, ((VECTOR(int8_t, 2))(0x19L))))).xyxyyyyyxyyyxyyx)))).se4))).yxyxyxxxxxxyxyxx)).s742b, (uint8_t)(*l_884)))), 0xD3L, ((VECTOR(uint8_t, 8))(255UL)), ((VECTOR(uint8_t, 2))(0xC0L)), 253UL)).s9, l_1054)) && l_1123) , l_1124[9])) != (void*)0) , (-3L)))) == FAKE_DIVERGE(p_1294->local_2_offset, get_local_id(2), 10)) >= p_1294->g_174.f3), l_1130)) <= l_1130))), l_1131)), p_1294->g_1109.s1)))), ((VECTOR(uint32_t, 2))(0xFDF23B0DL)), 1UL)).x)) == 0x5F9394BFL)), 3)), (*l_884), ((VECTOR(int32_t, 2))((-1L))), (-1L))).s1756745064572252, ((VECTOR(int32_t, 16))((-7L)))))).s2 & l_1130)) ^ 0x06C7L);
        return (*p_1294->g_361);
    }
    else
    { /* block id: 454 */
        int32_t *l_1135[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t l_1140 = 0xE3691573D8F204C4L;
        VECTOR(int32_t, 2) l_1144 = (VECTOR(int32_t, 2))(0x6D776906L, (-1L));
        uint32_t *l_1151[2][1];
        uint32_t l_1152[4];
        int64_t l_1153 = 0x410CE1B07793197DL;
        int8_t *l_1154[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_1157 = 0UL;
        int32_t ***l_1164 = (void*)0;
        uint32_t **l_1168 = &l_1126;
        uint64_t *l_1169[10];
        VECTOR(uint8_t, 8) l_1194 = (VECTOR(uint8_t, 8))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0xA0L), 0xA0L), 0xA0L, 248UL, 0xA0L);
        struct S0 **l_1246[10] = {&p_1294->g_1066[3],&p_1294->g_1066[5],&p_1294->g_1066[3],&p_1294->g_1066[3],&p_1294->g_1066[5],&p_1294->g_1066[3],&p_1294->g_1066[3],&p_1294->g_1066[5],&p_1294->g_1066[3],&p_1294->g_1066[3]};
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_1151[i][j] = (void*)0;
        }
        for (i = 0; i < 4; i++)
            l_1152[i] = 0x4841AD1DL;
        for (i = 0; i < 10; i++)
            l_1169[i] = &p_1294->g_174.f3;
        --l_1137;
        (*p_1294->g_463) = func_46(p_1294->g_222.s6, ((l_1140 || ((l_1155 |= (safe_div_func_int32_t_s_s(((*l_884) = ((2UL >= p_1294->g_81.f5) || (((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))((-7L), ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 16))(l_1143.s84aad0ccaa97462c)).sded8, ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1144.yxxx)), 3L, ((*p_1294->g_361) == (p_1294->g_60.f1.f2 != 0x7589L)), 0x156A90ECL, 0x10BAE36DL)).odd)).yywxwzyyzwxwxyzw)).odd, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0xC14F836CL, 0x33F33E3BL)).yxxyxxxxyyyxyyyx)).s1d)).yyyyyyxx))).lo))).xzyyxyzzwwyzxyzy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((safe_add_func_int64_t_s_s(p_1294->g_1021.s0, (((safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((l_1152[1] = ((((((*l_884) | GROUP_DIVERGE(2, 1)) >= FAKE_DIVERGE(p_1294->global_1_offset, get_global_id(1), 10)) , 0x0DCEL) || 0xDD58L) ^ (*l_884))), 1UL)), p_1294->g_187.f1.f4)) | (*l_884)) & (*p_1294->g_361)))) || l_1153), p_1294->g_481.f2, 0x5970D1C639ADC99CL, 0x4E086909390056E2L)), ((VECTOR(int64_t, 2))((-4L))), 0x538551B1B30D48B3L, 0x23E858FA4326A7FEL)).s7003400200717767))).s92dd)).hi, ((VECTOR(int64_t, 2))(0L))))), ((VECTOR(int64_t, 4))(0x51A2080C13F0D156L)), 0x004C00A32757A810L, 0x558E221608836E11L, ((VECTOR(int64_t, 4))(0x3299AF34A5BAE8BEL)), p_1294->g_981.s2, 0x5E7E646D0D571BC6L, 0x0BC856111182F64FL)).sd121, ((VECTOR(int64_t, 4))((-1L)))))).w ^ 0x6386AD1CA0DE17DAL))), l_1105.se))) <= l_1156)) , (*l_884)), l_1157, p_1294);
        (**p_1294->g_463) = (safe_sub_func_int16_t_s_s((((*l_884) == (safe_sub_func_int32_t_s_s((safe_unary_minus_func_int64_t_s((&p_1294->g_936[0] == (((p_1294->g_1163[3] , l_1164) != l_1164) , &p_1294->g_936[0])))), (*l_884)))) , ((safe_sub_func_uint64_t_u_u(((((l_1168 = p_1294->g_1167) != (((*l_884) ^= GROUP_DIVERGE(1, 1)) , (*p_1294->g_909))) ^ l_1170) , FAKE_DIVERGE(p_1294->local_0_offset, get_local_id(0), 10)), 0x5953FB0E01361DCDL)) >= l_1054)), p_1294->g_831.f5));
        for (p_1294->g_138 = 14; (p_1294->g_138 >= 2); p_1294->g_138--)
        { /* block id: 465 */
            int64_t l_1179 = 0x775A0B62F13A7066L;
            int32_t l_1181 = 0x6D293FA1L;
            int32_t l_1182[10][2] = {{0x73E71FEFL,(-5L)},{0x73E71FEFL,(-5L)},{0x73E71FEFL,(-5L)},{0x73E71FEFL,(-5L)},{0x73E71FEFL,(-5L)},{0x73E71FEFL,(-5L)},{0x73E71FEFL,(-5L)},{0x73E71FEFL,(-5L)},{0x73E71FEFL,(-5L)},{0x73E71FEFL,(-5L)}};
            uint16_t l_1227 = 0xE4FCL;
            struct S0 **l_1242 = &p_1294->g_1066[3];
            int i, j;
            for (p_1294->g_481.f6 = 28; (p_1294->g_481.f6 < 52); p_1294->g_481.f6 = safe_add_func_int16_t_s_s(p_1294->g_481.f6, 6))
            { /* block id: 468 */
                union U2 *l_1175 = &p_1294->g_404;
                union U2 **l_1176[6] = {&l_1175,&l_1175,&l_1175,&l_1175,&l_1175,&l_1175};
                int32_t l_1180 = 0x582DFD4DL;
                int8_t l_1258 = 1L;
                int i;
                (1 + 1);
            }
        }
    }
    (*p_1294->g_464) = (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x6AL, 0x6EL)), 0L, 0x79L)).z ^ (safe_div_func_int64_t_s_s((((~((*l_884) = (*l_884))) & (safe_div_func_int64_t_s_s(((l_1107.s1 ^ (safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_1270.s71)), 0x42L, 0x4DL)), ((VECTOR(int8_t, 2))(p_1294->g_1271.xx)), (safe_sub_func_int64_t_s_s((((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 2))(p_1294->g_1274.s22)).yxxyxyyxxxxyxxxy, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 2))(l_1275.s35)), ((VECTOR(uint64_t, 8))(l_1276.yyxyyxxy)).s47))))).yxxyyyxxxxyyxxxy)))), ((VECTOR(uint64_t, 16))(p_1294->g_1277.s7155675450633644))))).se < ((VECTOR(uint64_t, 2))(p_1294->g_1278.xx)).even), (safe_unary_minus_func_uint8_t_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_1294->g_1280.xxzx)).xxxwxywyzwwxxxxy)).s2)))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((-4L), ((VECTOR(int8_t, 2))(0x23L, 0L)), 0x2FL)), 0x28L, ((GROUP_DIVERGE(2, 1) , ((safe_mul_func_int16_t_s_s((((p_1294->g_69.x ^ (&p_1294->g_468 != (((safe_mod_func_int32_t_s_s((((((~(((l_1097 != ((((*p_1294->g_361) = (((VECTOR(int32_t, 8))(l_1285.yxyxyxxy)).s2 , (l_1286[1][3][0] && (((*l_1097) |= (safe_rshift_func_int16_t_s_s(p_1294->g_1241[0].f5, (((VECTOR(uint32_t, 8))(l_1289.s3bc044d1)).s6 , (&p_1294->g_936[0] == l_1290))))) >= l_1289.s1)))) <= l_1010) , l_1097)) > (*p_1294->g_464)) >= l_1143.sd)) <= (*p_1294->g_1225)) ^ l_1136) , l_1291) >= p_1294->g_69.x), l_1292)) != l_1270.s1) , (void*)0))) < l_872.se) >= 0xD8L), GROUP_DIVERGE(1, 1))) == 7L)) ^ l_1293), 3L, ((VECTOR(int8_t, 4))((-5L))), (-1L), (-7L), l_1107.s3, (-1L), 5L)).hi)), 0x46L)).s8, l_1235))) || 1L), p_1294->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1294->tid, 36))]))) | (-1L)), 1UL)));
    (*p_1294->g_463) = &l_33[0];
    return (*p_1294->g_361);
}


/* ------------------------------------------ */
/* 
 * reads : p_1294->g_428 p_1294->g_764 p_1294->g_772 p_1294->g_774 p_1294->g_782 p_1294->g_400 p_1294->g_361 p_1294->g_60.f1.f0 p_1294->g_349 p_1294->g_625 p_1294->g_481.f4 p_1294->g_187.f0 p_1294->g_69 p_1294->g_60.f1.f3 p_1294->g_295 p_1294->g_627
 * writes: p_1294->l_comm_values p_1294->g_810 p_1294->g_620 p_1294->g_86 p_1294->g_60.f1.f0
 */
int8_t  func_12(uint16_t  p_13, int32_t  p_14, uint32_t  p_15, uint8_t  p_16, struct S3 * p_1294)
{ /* block id: 311 */
    int32_t *l_755[5][4] = {{&p_1294->g_86,(void*)0,&p_1294->g_86,(void*)0},{&p_1294->g_86,(void*)0,&p_1294->g_86,(void*)0},{&p_1294->g_86,(void*)0,&p_1294->g_86,(void*)0},{&p_1294->g_86,(void*)0,&p_1294->g_86,(void*)0},{&p_1294->g_86,(void*)0,&p_1294->g_86,(void*)0}};
    int8_t ***l_758 = &p_1294->g_360[0];
    VECTOR(uint16_t, 4) l_763 = (VECTOR(uint16_t, 4))(0x16DFL, (VECTOR(uint16_t, 2))(0x16DFL, 0x0FE3L), 0x0FE3L);
    VECTOR(uint64_t, 4) l_765 = (VECTOR(uint64_t, 4))(0x562E071560C4BA30L, (VECTOR(uint64_t, 2))(0x562E071560C4BA30L, 1UL), 1UL);
    VECTOR(uint64_t, 16) l_766 = (VECTOR(uint64_t, 16))(0x4C0EFD77E52D57B6L, (VECTOR(uint64_t, 4))(0x4C0EFD77E52D57B6L, (VECTOR(uint64_t, 2))(0x4C0EFD77E52D57B6L, 0x0F3889F360F2B9E9L), 0x0F3889F360F2B9E9L), 0x0F3889F360F2B9E9L, 0x4C0EFD77E52D57B6L, 0x0F3889F360F2B9E9L, (VECTOR(uint64_t, 2))(0x4C0EFD77E52D57B6L, 0x0F3889F360F2B9E9L), (VECTOR(uint64_t, 2))(0x4C0EFD77E52D57B6L, 0x0F3889F360F2B9E9L), 0x4C0EFD77E52D57B6L, 0x0F3889F360F2B9E9L, 0x4C0EFD77E52D57B6L, 0x0F3889F360F2B9E9L);
    VECTOR(int8_t, 16) l_771 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x0EL), 0x0EL), 0x0EL, 0L, 0x0EL, (VECTOR(int8_t, 2))(0L, 0x0EL), (VECTOR(int8_t, 2))(0L, 0x0EL), 0L, 0x0EL, 0L, 0x0EL);
    VECTOR(int8_t, 16) l_773 = (VECTOR(int8_t, 16))(0x22L, (VECTOR(int8_t, 4))(0x22L, (VECTOR(int8_t, 2))(0x22L, 0x4CL), 0x4CL), 0x4CL, 0x22L, 0x4CL, (VECTOR(int8_t, 2))(0x22L, 0x4CL), (VECTOR(int8_t, 2))(0x22L, 0x4CL), 0x22L, 0x4CL, 0x22L, 0x4CL);
    VECTOR(uint64_t, 4) l_779 = (VECTOR(uint64_t, 4))(0xBC0D6B72D1B8F337L, (VECTOR(uint64_t, 2))(0xBC0D6B72D1B8F337L, 0x191541F176476AB7L), 0x191541F176476AB7L);
    int64_t *l_799 = (void*)0;
    int64_t *l_800 = (void*)0;
    int64_t *l_801[8];
    int32_t *l_802 = &p_1294->g_412.f1;
    int32_t *l_803 = &p_1294->g_414.f1;
    int32_t *l_804 = &p_1294->g_407.f1;
    int32_t *l_805 = &p_1294->g_253[5][2].f1;
    int32_t *l_806[3];
    int8_t l_807[1][8][8] = {{{0x61L,0x61L,0x1EL,0x21L,0x22L,0x31L,6L,0x7EL},{0x61L,0x61L,0x1EL,0x21L,0x22L,0x31L,6L,0x7EL},{0x61L,0x61L,0x1EL,0x21L,0x22L,0x31L,6L,0x7EL},{0x61L,0x61L,0x1EL,0x21L,0x22L,0x31L,6L,0x7EL},{0x61L,0x61L,0x1EL,0x21L,0x22L,0x31L,6L,0x7EL},{0x61L,0x61L,0x1EL,0x21L,0x22L,0x31L,6L,0x7EL},{0x61L,0x61L,0x1EL,0x21L,0x22L,0x31L,6L,0x7EL},{0x61L,0x61L,0x1EL,0x21L,0x22L,0x31L,6L,0x7EL}}};
    uint64_t *l_809 = &p_1294->g_81.f3;
    uint64_t **l_808[5][5][3] = {{{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809}},{{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809}},{{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809}},{{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809}},{{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809}}};
    int8_t l_811 = 4L;
    uint16_t *l_812 = (void*)0;
    VECTOR(int16_t, 16) l_823 = (VECTOR(int16_t, 16))(0x7381L, (VECTOR(int16_t, 4))(0x7381L, (VECTOR(int16_t, 2))(0x7381L, 1L), 1L), 1L, 0x7381L, 1L, (VECTOR(int16_t, 2))(0x7381L, 1L), (VECTOR(int16_t, 2))(0x7381L, 1L), 0x7381L, 1L, 0x7381L, 1L);
    uint8_t *l_828 = (void*)0;
    uint8_t l_829 = 0xA6L;
    struct S0 *l_830 = &p_1294->g_831;
    struct S0 **l_832 = &l_830;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_801[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_806[i] = &p_1294->g_407.f1;
    l_755[3][3] = l_755[3][3];
    (*p_1294->g_295) = (safe_mul_func_uint16_t_u_u(((l_758 != l_758) , ((((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))((((safe_rshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(18446744073709551615UL, p_16)), p_1294->g_428.x)) | ((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 16))(l_763.zyzyzwywywzwyxzw)).even))).s1) < ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 16))(p_1294->g_764.yyxyxxxyxyxxyxyy)).s57, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_765.wywz)).wwzwwwyw)).s31))).yyyyxyyx, ((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_766.s68d0)).wwywywxwyyywwxyw)))).s45ad)).wwzzywywxyxywyzw, ((VECTOR(uint64_t, 2))(0x9E2555B0A926E020L, 1UL)).xxyxyxyyyxyxxyyy))).hi))).even, (uint64_t)GROUP_DIVERGE(1, 1)))))).y), (safe_sub_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0L, ((VECTOR(int8_t, 8))(l_771.s685f2d77)), (-1L), (-1L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_1294->g_772.s41054224)).s31)), 0L, 0x21L, 0L)).s04)).yyyx, ((VECTOR(int8_t, 2))(l_773.s94)).xyxy, ((VECTOR(int8_t, 8))(p_1294->g_774.xwxyzzxw)).hi))).y, ((((&p_1294->g_470 != (void*)0) > (safe_div_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((p_1294->g_620.sb = (((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 16))(l_779.ywwzyyzzxywyywzx)).s4b6d, ((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 4))(6UL, (p_15++), 9UL, 4294967292UL)).even, ((VECTOR(uint32_t, 4))(0x46D13360L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(p_1294->g_782.s35634443)))).s21)), 0xA02ECD46L)).lo))).yxyy))).y > (safe_mod_func_int32_t_s_s((((VECTOR(int16_t, 2))(0x4B1DL, 1L)).odd == ((safe_add_func_uint8_t_u_u((((((safe_mul_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s((((FAKE_DIVERGE(p_1294->global_2_offset, get_global_id(2), 10) || (safe_mul_func_int16_t_s_s((0UL >= (~((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 4))(0L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 4))(((p_1294->g_810 = ((l_807[0][1][1] |= (safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s((p_1294->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1294->tid, 36))] = 0L), p_13)), p_14))) , l_801[6])) == &p_1294->g_302[6]), 0L, 0x197D34C6L, 5L)).zyzzyywx, ((VECTOR(uint32_t, 8))(0x23085710L))))).hi)).even)), (-1L)))))).z)), p_1294->g_400))) == (*p_1294->g_361)) && p_1294->g_349.s4), 0UL)) == 9L) | p_13) > p_1294->g_625.s7), 0x18L)) , p_16) , 0xBBL) < p_13) >= l_811), 0x22L)) <= p_16)), 1UL)))), p_1294->g_481.f4)) , 0xC480L), p_1294->g_187.f0))) <= p_13) , p_16))) ^ 0UL), p_16)), p_1294->g_69.y, ((VECTOR(int16_t, 8))(0x2AE8L)), ((VECTOR(int16_t, 2))(0x5778L)), ((VECTOR(int16_t, 2))((-1L))), 0x3F7BL)).s54, (int16_t)p_1294->g_60.f1.f3))).even && p_14) != FAKE_DIVERGE(p_1294->global_0_offset, get_global_id(0), 10))), p_16));
    (*l_832) = ((safe_lshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(p_14, p_13)) < ((safe_sub_func_int8_t_s_s((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((p_16 || ((*p_1294->g_361) = ((VECTOR(int8_t, 2))((-2L), 0x2DL)).hi)) < (safe_add_func_int64_t_s_s((((VECTOR(int16_t, 8))(l_823.s036cb62f)).s6 != 0x368CL), (safe_sub_func_uint32_t_u_u(((p_15 <= 0x668FB40D6CE1B54CL) || (safe_mul_func_int16_t_s_s(p_1294->g_627.y, (&p_1294->g_586 == l_828)))), p_1294->g_772.s6))))), (-1L), (-2L), 0x6DFB01A0L)).yzxxwwwx, ((VECTOR(int32_t, 8))((-10L)))))))).odd)).x ^ 0x36740A05L), p_14)) & 3L)) & l_829), p_16)) || 9L), 7)) , l_830);
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_1294->g_413.f1 p_1294->g_228.f1 p_1294->g_463 p_1294->g_464 p_1294->g_468 p_1294->g_187.f1.f6 p_1294->g_39 p_1294->g_60.f3 p_1294->g_69 p_1294->g_82 p_1294->g_81.f4 p_1294->g_81.f1.f0 p_1294->g_113 p_1294->g_81.f1.f5 p_1294->g_86 p_1294->g_125 p_1294->g_127 p_1294->g_81.f0 p_1294->g_comm_values p_1294->g_60.f5 p_1294->g_81.f5 p_1294->g_60.f1.f0 p_1294->g_138 p_1294->g_81.f1.f6 p_1294->g_81.f1.f4 p_1294->g_60.f1.f3 p_1294->g_162 p_1294->g_186 p_1294->g_206 p_1294->g_207 p_1294->g_60.f0 p_1294->g_217 p_1294->g_222 p_1294->g_238 p_1294->g_254 p_1294->g_263 p_1294->l_comm_values p_1294->g_187.f1.f0 p_1294->g_302 p_1294->g_187.f1.f3 p_1294->g_174.f4 p_1294->g_337 p_1294->g_349 p_1294->g_351 p_1294->g_295 p_1294->g_360 p_1294->g_375 p_1294->g_400 p_1294->g_409.f1 p_1294->g_481.f6 p_1294->g_497 p_1294->g_481.f5 p_1294->g_586 p_1294->g_60.f1.f5 p_1294->g_620 p_1294->g_625 p_1294->g_627 p_1294->g_361
 * writes: p_1294->g_413.f1 p_1294->g_228.f1 p_1294->g_464 p_1294->g_39 p_1294->g_86 p_1294->g_81.f1.f5 p_1294->g_60.f1.f5 p_1294->g_60.f1.f0 p_1294->g_138 p_1294->g_81.f1.f6 p_1294->g_60.f1.f3 p_1294->g_186 p_1294->g_162 p_1294->g_81.f5 p_1294->g_60.f5 p_1294->g_187.f1.f0 p_1294->g_295 p_1294->g_302 p_1294->g_187.f1.f3 p_1294->g_174.f4 p_1294->g_360 p_1294->g_403 p_1294->g_409.f1 p_1294->g_174.f1.f3 p_1294->g_497 p_1294->g_351 p_1294->g_127 p_1294->g_263 p_1294->g_125 p_1294->g_comm_values p_1294->g_207 p_1294->g_60.f3 p_1294->g_81.f1.f3 p_1294->g_586
 */
int8_t  func_19(uint32_t  p_20, int16_t  p_21, int32_t  p_22, struct S3 * p_1294)
{ /* block id: 291 */
    uint8_t l_729 = 2UL;
    int32_t l_730 = (-6L);
    VECTOR(int32_t, 16) l_735 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0L), 0L), 0L, 3L, 0L, (VECTOR(int32_t, 2))(3L, 0L), (VECTOR(int32_t, 2))(3L, 0L), 3L, 0L, 3L, 0L);
    int8_t ***l_738 = &p_1294->g_360[0];
    int8_t ***l_739[6][1] = {{&p_1294->g_360[0]},{&p_1294->g_360[0]},{&p_1294->g_360[0]},{&p_1294->g_360[0]},{&p_1294->g_360[0]},{&p_1294->g_360[0]}};
    int16_t *l_744 = &p_1294->g_174.f1.f3;
    uint8_t *l_751[7][6] = {{&p_1294->g_586,&p_1294->g_174.f1.f5,(void*)0,&p_1294->g_81.f1.f5,&p_1294->g_174.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_586,&p_1294->g_174.f1.f5,(void*)0,&p_1294->g_81.f1.f5,&p_1294->g_174.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_586,&p_1294->g_174.f1.f5,(void*)0,&p_1294->g_81.f1.f5,&p_1294->g_174.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_586,&p_1294->g_174.f1.f5,(void*)0,&p_1294->g_81.f1.f5,&p_1294->g_174.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_586,&p_1294->g_174.f1.f5,(void*)0,&p_1294->g_81.f1.f5,&p_1294->g_174.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_586,&p_1294->g_174.f1.f5,(void*)0,&p_1294->g_81.f1.f5,&p_1294->g_174.f1.f5,&p_1294->g_81.f1.f5},{&p_1294->g_586,&p_1294->g_174.f1.f5,(void*)0,&p_1294->g_81.f1.f5,&p_1294->g_174.f1.f5,&p_1294->g_81.f1.f5}};
    int32_t l_752 = 1L;
    uint32_t *l_753 = (void*)0;
    int i, j;
    for (p_1294->g_413.f1 = 0; (p_1294->g_413.f1 < (-26)); p_1294->g_413.f1--)
    { /* block id: 294 */
        int16_t l_731 = 7L;
        l_731 &= ((l_729 = (&p_1294->g_186 != &p_1294->g_186)) == l_730);
    }
    for (p_1294->g_228.f1 = 22; (p_1294->g_228.f1 < 0); p_1294->g_228.f1 = safe_sub_func_uint16_t_u_u(p_1294->g_228.f1, 6))
    { /* block id: 300 */
        return p_22;
    }
    (*p_1294->g_468) = (*p_1294->g_463);
    (*p_1294->g_463) = func_46(p_1294->g_187.f1.f6, l_729, p_21, p_1294);
    return (*p_1294->g_361);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1294->g_174.f3
 */
uint32_t  func_27(int8_t  p_28, int16_t  p_29, int64_t  p_30, struct S3 * p_1294)
{ /* block id: 287 */
    uint32_t l_719 = 4294967295UL;
    uint8_t l_720 = 0x4AL;
    union U2 **l_721 = (void*)0;
    int8_t **l_722[9][8] = {{&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361},{&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361},{&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361},{&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361},{&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361},{&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361},{&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361},{&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361},{&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361,&p_1294->g_361}};
    uint64_t *l_723 = (void*)0;
    uint64_t *l_724 = &p_1294->g_174.f3;
    uint8_t **l_725 = &p_1294->g_470;
    int32_t l_726 = 8L;
    int i, j;
    l_726 = (safe_add_func_int32_t_s_s((((*l_724) = (safe_sub_func_int8_t_s_s((l_719 <= l_720), ((l_721 == ((l_719 && (l_722[3][6] == (void*)0)) , &p_1294->g_403[1][6])) >= p_30)))) , (l_725 == (void*)0)), p_28));
    return p_28;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_35(uint8_t  p_36, int32_t  p_37, struct S3 * p_1294)
{ /* block id: 6 */
    int32_t l_684 = 8L;
    VECTOR(uint64_t, 16) l_700 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x96BB4BF11ADB8ACEL), 0x96BB4BF11ADB8ACEL), 0x96BB4BF11ADB8ACEL, 18446744073709551615UL, 0x96BB4BF11ADB8ACEL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x96BB4BF11ADB8ACEL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x96BB4BF11ADB8ACEL), 18446744073709551615UL, 0x96BB4BF11ADB8ACEL, 18446744073709551615UL, 0x96BB4BF11ADB8ACEL);
    struct S1 **l_707 = (void*)0;
    int32_t l_712 = 0x37E77886L;
    int i;
    for (p_37 = 0; (p_37 >= 15); p_37 = safe_add_func_int64_t_s_s(p_37, 2))
    { /* block id: 9 */
        int32_t *l_639 = &p_1294->g_60.f4;
        int32_t *l_682 = (void*)0;
        int32_t *l_683[1];
        int16_t *l_689 = &p_1294->g_187.f1.f3;
        VECTOR(uint32_t, 16) l_694 = (VECTOR(uint32_t, 16))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0x8347B73EL), 0x8347B73EL), 0x8347B73EL, 4294967286UL, 0x8347B73EL, (VECTOR(uint32_t, 2))(4294967286UL, 0x8347B73EL), (VECTOR(uint32_t, 2))(4294967286UL, 0x8347B73EL), 4294967286UL, 0x8347B73EL, 4294967286UL, 0x8347B73EL);
        struct S1 ***l_708 = &l_707;
        int64_t *l_711[4][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
        uint16_t *l_713 = &p_1294->g_81.f1.f6;
        int i, j;
        for (i = 0; i < 1; i++)
            l_683[i] = (void*)0;
        (1 + 1);
    }
    return l_700.sa;
}


/* ------------------------------------------ */
/* 
 * reads : p_1294->g_295 p_1294->g_174.f5 p_1294->g_86 p_1294->g_82 p_1294->g_60.f1.f3 p_1294->g_162
 * writes: p_1294->g_86 p_1294->g_174.f5 p_1294->g_60.f1.f3 p_1294->g_162
 */
int32_t  func_42(int32_t * p_43, int32_t  p_44, int32_t  p_45, struct S3 * p_1294)
{ /* block id: 270 */
    int32_t l_640 = 0L;
    int32_t l_653 = 0x578F3AAEL;
    uint16_t *l_654 = &p_1294->g_174.f5;
    VECTOR(uint8_t, 8) l_659 = (VECTOR(uint8_t, 8))(0xBFL, (VECTOR(uint8_t, 4))(0xBFL, (VECTOR(uint8_t, 2))(0xBFL, 0x5DL), 0x5DL), 0x5DL, 0xBFL, 0x5DL);
    VECTOR(uint32_t, 2) l_670 = (VECTOR(uint32_t, 2))(4294967295UL, 1UL);
    int16_t l_671 = (-1L);
    int16_t *l_672 = &p_1294->g_60.f1.f3;
    int16_t *l_673 = (void*)0;
    int16_t *l_674[5][2] = {{&p_1294->g_481.f3,(void*)0},{&p_1294->g_481.f3,(void*)0},{&p_1294->g_481.f3,(void*)0},{&p_1294->g_481.f3,(void*)0},{&p_1294->g_481.f3,(void*)0}};
    int32_t *l_675[4][2][9] = {{{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86,&p_1294->g_86},{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86,&p_1294->g_86}},{{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86,&p_1294->g_86},{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86,&p_1294->g_86}},{{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86,&p_1294->g_86},{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86,&p_1294->g_86}},{{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86,&p_1294->g_86},{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86,&p_1294->g_86}}};
    int32_t l_676 = 0x7FD5096FL;
    int8_t l_678 = 0x21L;
    uint64_t l_679 = 1UL;
    int i, j, k;
    (*p_1294->g_295) = l_640;
    p_1294->g_162.sf |= (safe_mul_func_uint32_t_u_u(0xCAEE0BEFL, (((l_653 = (safe_div_func_int64_t_s_s(l_640, (safe_div_func_int16_t_s_s(((*l_672) &= (safe_mul_func_uint16_t_u_u(((((((((+((safe_div_func_int8_t_s_s(((l_640 , (safe_sub_func_uint16_t_u_u(0x920AL, (--(*l_654))))) >= (safe_sub_func_uint64_t_u_u((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_659.s1614063405031716)).hi)).s5313547130714132)).sa | (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(l_640, 3)), ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_640, 5)), (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967287UL, 4294967295UL)), 9UL, 0xFB962701L)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_670.xyyx)), (((l_671 >= (0x08DE7BF12272751FL | p_45)) <= 7L) == (*p_1294->g_295)), ((VECTOR(uint32_t, 2))(4294967288UL)), ((VECTOR(uint32_t, 4))(1UL)), 0xE0F9F43FL, ((VECTOR(uint32_t, 2))(0UL)), 4294967288UL, 0xFA95A848L)).s552c))).w, p_45)))) , 0x72L)))), 0xD28653C40250CD88L))), p_44)) > p_45)) == 0x8DL) >= p_1294->g_82[0][2][3]) != l_659.s6) && 0x2051L) , 0xA62948A6L) > l_659.s3) ^ 0x6850L), 0x2ED4L))), 0x86CAL))))) >= 0x4868L) >= 0x53B9F3FEL)));
    ++l_679;
    return p_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_1294->g_39 p_1294->g_60.f3 p_1294->g_69 p_1294->g_82 p_1294->g_81.f4 p_1294->g_81.f1.f0 p_1294->g_113 p_1294->g_81.f1.f5 p_1294->g_86 p_1294->g_125 p_1294->g_127 p_1294->g_81.f0 p_1294->g_comm_values p_1294->g_60.f5 p_1294->g_81.f5 p_1294->g_60.f1.f0 p_1294->g_138 p_1294->g_81.f1.f6 p_1294->g_81.f1.f4 p_1294->g_60.f1.f3 p_1294->g_162 p_1294->g_186 p_1294->g_206 p_1294->g_207 p_1294->g_60.f0 p_1294->g_217 p_1294->g_222 p_1294->g_238 p_1294->g_254 p_1294->g_263 p_1294->l_comm_values p_1294->g_187.f1.f0 p_1294->g_302 p_1294->g_187.f1.f3 p_1294->g_174.f4 p_1294->g_337 p_1294->g_349 p_1294->g_351 p_1294->g_295 p_1294->g_360 p_1294->g_375 p_1294->g_400 p_1294->g_409.f1 p_1294->g_481.f6 p_1294->g_497 p_1294->g_463 p_1294->g_464 p_1294->g_468 p_1294->g_481.f5 p_1294->g_586 p_1294->g_60.f1.f5 p_1294->g_620 p_1294->g_625 p_1294->g_627 p_1294->g_361
 * writes: p_1294->g_39 p_1294->g_86 p_1294->g_81.f1.f5 p_1294->g_60.f1.f5 p_1294->g_60.f1.f0 p_1294->g_138 p_1294->g_81.f1.f6 p_1294->g_60.f1.f3 p_1294->g_186 p_1294->g_162 p_1294->g_81.f5 p_1294->g_60.f5 p_1294->g_187.f1.f0 p_1294->g_295 p_1294->g_302 p_1294->g_187.f1.f3 p_1294->g_174.f4 p_1294->g_360 p_1294->g_403 p_1294->g_409.f1 p_1294->g_174.f1.f3 p_1294->g_497 p_1294->g_351 p_1294->g_127 p_1294->g_263 p_1294->g_125 p_1294->g_comm_values p_1294->g_207 p_1294->g_60.f3 p_1294->g_464 p_1294->g_81.f1.f3 p_1294->g_586
 */
int32_t * func_46(uint16_t  p_47, uint16_t  p_48, int8_t  p_49, struct S3 * p_1294)
{ /* block id: 10 */
    VECTOR(int64_t, 2) l_63 = (VECTOR(int64_t, 2))(9L, 0x7AEB8F83F3A8A1D5L);
    int32_t l_501 = 0L;
    int32_t l_502 = 5L;
    int32_t *l_561 = &p_1294->g_174.f4;
    struct S1 **l_584 = &p_1294->g_186;
    uint8_t *l_601[3];
    uint8_t *l_602 = &p_1294->g_586;
    VECTOR(uint16_t, 16) l_614 = (VECTOR(uint16_t, 16))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0xD1ABL), 0xD1ABL), 0xD1ABL, 65531UL, 0xD1ABL, (VECTOR(uint16_t, 2))(65531UL, 0xD1ABL), (VECTOR(uint16_t, 2))(65531UL, 0xD1ABL), 65531UL, 0xD1ABL, 65531UL, 0xD1ABL);
    VECTOR(int16_t, 16) l_615 = (VECTOR(int16_t, 16))(0x6567L, (VECTOR(int16_t, 4))(0x6567L, (VECTOR(int16_t, 2))(0x6567L, 9L), 9L), 9L, 0x6567L, 9L, (VECTOR(int16_t, 2))(0x6567L, 9L), (VECTOR(int16_t, 2))(0x6567L, 9L), 0x6567L, 9L, 0x6567L, 9L);
    VECTOR(int16_t, 2) l_616 = (VECTOR(int16_t, 2))((-8L), 0x21B8L);
    VECTOR(uint16_t, 2) l_619 = (VECTOR(uint16_t, 2))(0xD85DL, 0UL);
    VECTOR(uint16_t, 8) l_626 = (VECTOR(uint16_t, 8))(0xA56BL, (VECTOR(uint16_t, 4))(0xA56BL, (VECTOR(uint16_t, 2))(0xA56BL, 1UL), 1UL), 1UL, 0xA56BL, 1UL);
    VECTOR(int8_t, 2) l_638 = (VECTOR(int8_t, 2))(0L, 7L);
    int i;
    for (i = 0; i < 3; i++)
        l_601[i] = &p_1294->g_174.f1.f5;
    for (p_1294->g_39 = 0; (p_1294->g_39 == (-27)); p_1294->g_39 = safe_sub_func_uint16_t_u_u(p_1294->g_39, 5))
    { /* block id: 13 */
        struct S1 *l_59[5];
        int32_t l_68[4][6][7] = {{{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L}}};
        struct S1 *l_80 = &p_1294->g_81;
        struct S1 **l_79 = &l_80;
        VECTOR(uint64_t, 8) l_495 = (VECTOR(uint64_t, 8))(0x47ED16AB77CE7ADCL, (VECTOR(uint64_t, 4))(0x47ED16AB77CE7ADCL, (VECTOR(uint64_t, 2))(0x47ED16AB77CE7ADCL, 0xD341480F78962FBEL), 0xD341480F78962FBEL), 0xD341480F78962FBEL, 0x47ED16AB77CE7ADCL, 0xD341480F78962FBEL);
        uint16_t *l_496[2][4] = {{&p_1294->g_60.f1.f6,&p_1294->g_60.f5,&p_1294->g_60.f1.f6,&p_1294->g_60.f1.f6},{&p_1294->g_60.f1.f6,&p_1294->g_60.f5,&p_1294->g_60.f1.f6,&p_1294->g_60.f1.f6}};
        int32_t l_541 = 0L;
        uint8_t *l_600 = &p_1294->g_481.f5;
        int32_t l_607[5];
        VECTOR(uint16_t, 4) l_617 = (VECTOR(uint16_t, 4))(0x3123L, (VECTOR(uint16_t, 2))(0x3123L, 65528UL), 65528UL);
        VECTOR(uint16_t, 8) l_628 = (VECTOR(uint16_t, 8))(0x6465L, (VECTOR(uint16_t, 4))(0x6465L, (VECTOR(uint16_t, 2))(0x6465L, 0xD59DL), 0xD59DL), 0xD59DL, 0x6465L, 0xD59DL);
        int16_t l_634 = (-1L);
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_59[i] = &p_1294->g_60;
        for (i = 0; i < 5; i++)
            l_607[i] = 0x423594DAL;
        (*l_79) = func_54(l_59[2], p_48, (safe_sub_func_uint64_t_u_u((p_1294->g_60.f3 || p_47), ((VECTOR(int64_t, 4))(l_63.xxyy)).y)), (safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(l_68[2][0][1], (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 16))(p_1294->g_69.yyyyyyyxxxyyxxxx)).odd, (uint16_t)func_70(func_75(((*l_79) = l_59[3]), p_1294->g_82[0][2][3], &p_1294->g_39, p_1294), p_47, l_68[0][3][4], l_63.y, p_1294)))), ((VECTOR(uint16_t, 8))(0xDF27L)))).odd)).s4 < l_68[2][0][1]))) < l_68[1][0][6]) == 0x10FBL), GROUP_DIVERGE(2, 1))), p_1294);
        if (((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_495.s0742)))).x, l_63.y)) < p_47), (p_1294->g_497[2][3][3] |= l_495.s3))) & (safe_unary_minus_func_uint8_t_u(p_48))))
        { /* block id: 210 */
            int32_t *l_499 = &l_68[2][0][1];
            int32_t *l_500[2][9] = {{&l_68[3][4][6],&p_1294->g_86,&l_68[3][4][6],&l_68[3][4][6],&p_1294->g_86,&l_68[3][4][6],&l_68[3][4][6],&p_1294->g_86,&l_68[3][4][6]},{&l_68[3][4][6],&p_1294->g_86,&l_68[3][4][6],&l_68[3][4][6],&p_1294->g_86,&l_68[3][4][6],&l_68[3][4][6],&p_1294->g_86,&l_68[3][4][6]}};
            uint32_t l_503 = 4294967294UL;
            VECTOR(uint8_t, 8) l_550 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 7UL), 7UL), 7UL, 0UL, 7UL);
            int i, j;
            l_503++;
            for (p_1294->g_187.f1.f3 = (-18); (p_1294->g_187.f1.f3 >= (-10)); ++p_1294->g_187.f1.f3)
            { /* block id: 214 */
                int16_t l_510 = (-10L);
                VECTOR(int32_t, 16) l_574 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x2084C265L), 0x2084C265L), 0x2084C265L, (-10L), 0x2084C265L, (VECTOR(int32_t, 2))((-10L), 0x2084C265L), (VECTOR(int32_t, 2))((-10L), 0x2084C265L), (-10L), 0x2084C265L, (-10L), 0x2084C265L);
                uint64_t *l_577 = &p_1294->g_302[5];
                VECTOR(int8_t, 8) l_582 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x16L), 0x16L), 0x16L, 0L, 0x16L);
                int32_t *l_587 = &l_501;
                int i;
                if ((safe_rshift_func_uint16_t_u_u(l_510, (p_1294->g_127.s5 = (p_1294->g_351.s7 = l_510)))))
                { /* block id: 217 */
                    uint32_t *l_523 = (void*)0;
                    uint32_t *l_524 = (void*)0;
                    uint32_t *l_525 = (void*)0;
                    uint32_t *l_526[1][2][3];
                    VECTOR(int8_t, 4) l_535 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-5L)), (-5L));
                    int64_t *l_542 = (void*)0;
                    int64_t *l_543[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    uint64_t *l_544 = &p_1294->g_207;
                    uint64_t *l_545 = &p_1294->g_60.f3;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_526[i][j][k] = (void*)0;
                        }
                    }
                    if (((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_div_func_int32_t_s_s((l_502 &= (-2L)), (safe_sub_func_uint64_t_u_u(((*l_545) = (((((void*)0 == &p_1294->g_186) == ((-7L) & ((*l_544) = ((p_1294->g_comm_values[p_1294->tid] = (safe_sub_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(p_48, ((p_1294->g_125.z = (--p_1294->g_263.s1)) >= (p_48 > (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((l_541 = ((safe_lshift_func_int8_t_s_u((p_47 ^ (-1L)), 1)) >= ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 2))(l_535.xz)).yyxyxxyy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(p_1294->g_536.xxxy)), ((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 2))(0x1FL, 7L)).yyyy, ((VECTOR(int8_t, 2))(0x54L, (-1L))).xyxy)))))), ((safe_lshift_func_uint8_t_u_s(((safe_div_func_uint32_t_u_u((l_68[3][1][4] |= (0x7940L || 0x73C8L)), p_49)) > p_48), 0)) || p_47), (*p_1294->g_361), (-1L), 0x07L))))).s2)), 2)), l_63.y)))))) ^ p_47), p_1294->g_81.f1.f5))) , 18446744073709551615UL)))) ^ 0xC683A314L) , 0xABDAD0C7BFFAFBE5L)), 18446744073709551615UL)))) ^ p_1294->g_217.y), l_501)), p_1294->g_337.z)) | p_47))
                    { /* block id: 226 */
                        int16_t *l_557[1];
                        int32_t l_558 = 0x09F02927L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_557[i] = (void*)0;
                        (*p_1294->g_468) = (*p_1294->g_463);
                        (*p_1294->g_468) = l_526[0][0][0];
                        (*l_499) &= (safe_sub_func_uint8_t_u_u((&p_1294->g_463 != (void*)0), (((*p_1294->g_295) = (safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 4))(((((VECTOR(uint8_t, 4))(l_550.s1426)).y <= (p_1294->g_481.f5 | (p_47 |= p_1294->g_238.w))) , (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(((p_1294->g_263.s5 = (!(safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), 11)))) <= l_63.x), (((l_558 |= 3L) && (safe_div_func_uint64_t_u_u(3UL, p_49))) , p_48))), l_510))), 0x376E0FAAL, 0x1794E10EL, 0x71CFD2B6L)).x, GROUP_DIVERGE(2, 1)))) <= p_48)));
                        return l_561;
                    }
                    else
                    { /* block id: 235 */
                        return &p_1294->g_39;
                    }
                }
                else
                { /* block id: 238 */
                    VECTOR(int8_t, 8) l_571 = (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 1L), 1L), 1L, (-4L), 1L);
                    int32_t l_579 = 0x092A78E8L;
                    VECTOR(int8_t, 2) l_580 = (VECTOR(int8_t, 2))(0x5BL, 0x08L);
                    VECTOR(int8_t, 8) l_581 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x0AL), 0x0AL), 0x0AL, (-1L), 0x0AL);
                    int16_t *l_592 = &p_1294->g_481.f3;
                    int i;
                    for (p_1294->g_81.f1.f3 = (-23); (p_1294->g_81.f1.f3 < (-30)); p_1294->g_81.f1.f3--)
                    { /* block id: 241 */
                        uint32_t *l_564 = (void*)0;
                        uint32_t *l_565 = (void*)0;
                        uint32_t *l_566 = (void*)0;
                        uint8_t *l_578[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t l_585[7][1][3] = {{{0L,0L,0x3B6E5E8DL}},{{0L,0L,0x3B6E5E8DL}},{{0L,0L,0x3B6E5E8DL}},{{0L,0L,0x3B6E5E8DL}},{{0L,0L,0x3B6E5E8DL}},{{0L,0L,0x3B6E5E8DL}},{{0L,0L,0x3B6E5E8DL}}};
                        int i, j, k;
                        (*l_499) |= (((0x08C4F34EL == (++p_1294->g_125.y)) <= (((safe_sub_func_int16_t_s_s(((p_1294->g_497[2][1][6] , (p_1294->g_586 |= (((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_571.s06)), (*p_1294->g_361), 0x58L, 0x62L, (((void*)0 == p_1294->g_572[7][0][0]) ^ ((VECTOR(int32_t, 8))(l_574.s2b163000)).s0), 1L, (safe_div_func_uint8_t_u_u(0UL, (l_579 |= ((void*)0 == l_577)))), 0L, 7L, ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x38L, 0x14L)).yxxy)).even, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_580.yyxyyyxxyyxxxxyy)).lo)).s7767655637201001, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_581.s7415)))).odd)).xyxxyxyyyyxyxxxx, ((VECTOR(int8_t, 8))(l_582.s20431551)).s6364567430421007))).s9a74)).even, ((VECTOR(int8_t, 16))(p_1294->g_583.xyxyyyyxyxxyxyyy)).sf6))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(0L, ((l_584 == (void*)0) | (*p_1294->g_295)), 0x59L, 7L)), ((VECTOR(int8_t, 4))(0x7DL))))), 0x48L, (*p_1294->g_361), ((VECTOR(int8_t, 4))(1L)), ((VECTOR(int8_t, 2))(0x3EL)), ((VECTOR(int8_t, 2))(0x6BL)), 1L, 8L)).s98))), (int8_t)p_48, (int8_t)l_582.s4))), ((VECTOR(int8_t, 2))((-2L))), (-10L), (-1L))).hi)).s01)).xxyxxyyxxyxxxyyy, ((VECTOR(int8_t, 16))((-1L))), ((VECTOR(int8_t, 16))(0x4FL))))).s3 >= l_585[4][0][2]))) , (-1L)), 0x0505L)) ^ p_48) <= p_49)) > l_585[0][0][1]);
                    }
                    (*p_1294->g_295) &= (-6L);
                    (*l_499) |= ((((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x037DL, 1L, 0x6B67L, 0x3F39L)).z, p_1294->g_351.s0, (((*p_1294->g_463) = l_587) != l_587), (safe_div_func_uint32_t_u_u((((((p_1294->g_174.f3 = (((safe_mul_func_int16_t_s_s((((*l_592) |= p_1294->g_481.f6) && 5L), (0x7AL >= (safe_lshift_func_uint16_t_u_s((l_541 && ((p_49 || p_47) && p_1294->g_60.f1.f4)), 14))))) & l_580.x) , p_1294->g_217.z)) > p_1294->g_174.f1.f5) && 9L) <= (-1L)) || p_49), l_502)), 1L, ((VECTOR(int16_t, 2))(9L)), 0x0A0AL)).odd, (int16_t)p_49, (int16_t)0x2862L))).x > p_48) != (*l_587));
                    if ((*l_499))
                        continue;
                }
            }
        }
        else
        { /* block id: 255 */
            uint8_t **l_599[3];
            int32_t l_603 = 0x408ECC03L;
            int64_t *l_604 = (void*)0;
            int64_t *l_605 = (void*)0;
            int64_t *l_606[2];
            VECTOR(uint16_t, 16) l_618 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
            VECTOR(uint16_t, 2) l_629 = (VECTOR(uint16_t, 2))(0x8ED7L, 0x37EAL);
            int8_t ***l_631[10][5][3] = {{{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]}},{{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]}},{{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]}},{{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]}},{{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]}},{{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]}},{{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]}},{{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]}},{{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]}},{{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]},{&p_1294->g_360[1],(void*)0,&p_1294->g_360[1]}}};
            int8_t ****l_630 = &l_631[1][4][2];
            int8_t ***l_632 = (void*)0;
            int8_t ****l_633 = &l_632;
            VECTOR(int16_t, 8) l_635 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 4L), 4L), 4L, 1L, 4L);
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_599[i] = &p_1294->g_470;
            for (i = 0; i < 2; i++)
                l_606[i] = (void*)0;
            (*p_1294->g_295) = (((GROUP_DIVERGE(2, 1) , (safe_div_func_uint16_t_u_u(((l_607[4] = (safe_sub_func_int16_t_s_s(((l_600 = &p_1294->g_586) != (l_602 = l_601[0])), l_603))) > ((safe_mul_func_uint16_t_u_u((((l_501 < p_1294->g_60.f1.f5) ^ (safe_add_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((l_502 = ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 16))(l_614.sfcfd46635f255e30)).sf2e6, ((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 2))(l_615.sd5)).yyxyyyyxxyyyxyyy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_616.yyxxxxyxxxxxyyyx))))))).s9b38))).hi, ((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 16))(l_617.xxxzyzwwyxyzxwwy)).hi, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_617.x, ((VECTOR(uint16_t, 4))(l_618.s3b27)), ((VECTOR(uint16_t, 2))(l_619.yy)), 0xFCD8L)), 65531UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_1294->g_620.s0490)).wxxywzyyzzwzyxyz)).seb15)).z, p_49, (l_541 | (safe_div_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u((((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_1294->g_625.s51)).yyxx)).wwywyyyz, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 16))(l_626.s4237441274275044)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(p_1294->g_627.yyyyyxyy)).s40)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 8))(0xB272L, 0x54BBL, ((VECTOR(uint16_t, 4))(l_628.s6440)), 0xEDA0L, 0x6D0CL)).s23, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_629.xyxy)).even)).even, p_1294->g_60.f3, 1UL, p_47, 0x7AE4L, 0xE0BFL, l_626.s5, ((VECTOR(uint16_t, 4))(0x6152L)), 0UL, p_1294->g_217.y, 65535UL, 9UL, 9UL)).sdcd9, ((VECTOR(uint16_t, 4))(0x22ECL))))))).even))).xyxxyxxx)), ((VECTOR(uint16_t, 4))(1UL)), 65528UL, 0UL))))).s8a)).xxxyxyxx))).s2 || l_541), p_49)) & GROUP_DIVERGE(2, 1)) , p_48) , 3L), p_48))), ((VECTOR(uint16_t, 2))(1UL)), 6UL, 0x5658L)).lo)), ((VECTOR(uint16_t, 8))(0x7BD9L))))).s4544132502224256, ((VECTOR(uint16_t, 16))(65535UL))))).s2b, ((VECTOR(uint16_t, 2))(0x383DL))))), 0xEF49L, 0UL)).xwxzyzzzxwzzwxzx)).hi, ((VECTOR(uint16_t, 8))(65532UL))))).s42, ((VECTOR(uint16_t, 2))(0x04F5L))))).lo), p_48)) | GROUP_DIVERGE(0, 1)), l_617.z))) == l_618.s5), GROUP_DIVERGE(0, 1))) != l_618.sd)), 0x2119L))) & 4UL) , (*p_1294->g_295));
            l_603 = (((l_603 > ((0L > (((*l_630) = (void*)0) == ((*l_633) = l_632))) & p_47)) < l_634) < (((VECTOR(int16_t, 16))(l_635.s3333026046043740)).sc == (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_638.yxxx)).w, (*p_1294->g_361)))));
            if (l_638.y)
                break;
        }
        return &p_1294->g_39;
    }
    return l_561;
}


/* ------------------------------------------ */
/* 
 * reads : p_1294->g_186 p_1294->g_81.f1.f6 p_1294->g_295
 * writes: p_1294->g_360 p_1294->g_81.f1.f6 p_1294->g_86
 */
struct S1 * func_54(struct S1 * p_55, uint32_t  p_56, int32_t  p_57, int8_t  p_58, struct S3 * p_1294)
{ /* block id: 196 */
    uint32_t l_487[1][2][7];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
                l_487[i][j][k] = 4294967287UL;
        }
    }
    if (l_487[0][1][6])
    { /* block id: 197 */
        int8_t ***l_488 = &p_1294->g_360[1];
        (*l_488) = &p_1294->g_361;
    }
    else
    { /* block id: 199 */
        return p_1294->g_186;
    }
    for (p_1294->g_81.f1.f6 = 24; (p_1294->g_81.f1.f6 <= 18); --p_1294->g_81.f1.f6)
    { /* block id: 204 */
        (*p_1294->g_295) = 0x1C0F10D1L;
    }
    return p_55;
}


/* ------------------------------------------ */
/* 
 * reads : p_1294->g_138 p_1294->g_409.f1 p_1294->g_295 p_1294->g_86 p_1294->g_481.f6
 * writes: p_1294->g_403 p_1294->g_138 p_1294->g_409.f1 p_1294->g_86 p_1294->g_174.f1.f3 p_1294->g_295
 */
uint16_t  func_70(uint64_t  p_71, int32_t  p_72, uint8_t  p_73, int64_t  p_74, struct S3 * p_1294)
{ /* block id: 132 */
    union U2 *l_401 = (void*)0;
    union U2 **l_402[10][9] = {{&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401},{&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401},{&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401},{&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401},{&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401},{&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401},{&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401},{&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401},{&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401},{&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401}};
    int32_t l_442 = 0x6188BF64L;
    int32_t **l_465[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_465[i] = &p_1294->g_295;
    p_1294->g_403[4][3] = l_401;
    for (p_1294->g_138 = 28; (p_1294->g_138 > 16); --p_1294->g_138)
    { /* block id: 136 */
        uint8_t *l_427 = (void*)0;
        uint8_t **l_426 = &l_427;
        int32_t **l_462 = &p_1294->g_295;
        for (p_1294->g_409.f1 = 27; (p_1294->g_409.f1 != (-5)); p_1294->g_409.f1 = safe_sub_func_int64_t_s_s(p_1294->g_409.f1, 2))
        { /* block id: 139 */
            VECTOR(int32_t, 4) l_420 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, (-7L)), (-7L));
            VECTOR(int32_t, 4) l_421 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L);
            int64_t *l_439 = (void*)0;
            int64_t *l_440 = (void*)0;
            int64_t *l_441[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t *l_443 = &p_1294->g_444;
            int32_t **l_447 = &p_1294->g_295;
            int32_t **l_450 = &p_1294->g_376[0];
            uint8_t *l_453 = &p_1294->g_187.f1.f5;
            int32_t ***l_466 = (void*)0;
            struct S1 **l_471 = &p_1294->g_186;
            int i;
            (*p_1294->g_295) &= ((VECTOR(int32_t, 2))(0x660CAFC3L, 0x6B7750F2L)).odd;
            if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_1294->g_419.yy)).even, 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(l_420.wx)).yxyx))).w, l_420.x, ((VECTOR(int32_t, 4))(l_421.zyww)), 0L, (safe_div_func_int16_t_s_s((safe_div_func_int8_t_s_s((l_426 == (void*)0), 0x77L)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_1294->g_428.xxxx)).xzxywxwzzxzyxxyy)))).s7)), (safe_mod_func_uint32_t_u_u((7L != ((VECTOR(uint8_t, 8))(0xF5L, 0x6BL, 0xCDL, 0xA0L, ((((*l_443) = (safe_mod_func_int8_t_s_s(l_421.z, (safe_lshift_func_int16_t_s_u((l_420.y |= (safe_mod_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(p_1294->g_60.f1.f3, 0x5E9D7FEA08C797A8L)), (l_442 |= p_1294->g_125.x)))), 8))))) , FAKE_DIVERGE(p_1294->local_1_offset, get_local_id(1), 10)) <= 1UL), 0x05L, 1UL, 7UL)).s5), p_72)), (*p_1294->g_295), ((VECTOR(int32_t, 2))(6L)), ((VECTOR(int32_t, 4))(0x04A5A7E6L)))).s12c9, ((VECTOR(int32_t, 4))(0x7DF4A182L)), ((VECTOR(int32_t, 4))((-1L)))))).odd)), 0x299463C0L, ((VECTOR(int32_t, 2))(0x28A2A7B4L)), (-1L))))).s0)
            { /* block id: 144 */
                return p_73;
            }
            else
            { /* block id: 146 */
                for (p_1294->g_174.f1.f3 = 0; (p_1294->g_174.f1.f3 < (-12)); p_1294->g_174.f1.f3 = safe_sub_func_int64_t_s_s(p_1294->g_174.f1.f3, 1))
                { /* block id: 149 */
                    p_1294->g_295 = (void*)0;
                }
            }
            (*l_447) = &p_1294->g_86;
        }
    }
    return p_1294->g_481.f6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1294->g_81.f4 p_1294->g_81.f1.f0 p_1294->g_113 p_1294->g_81.f1.f5 p_1294->g_86 p_1294->g_125 p_1294->g_127 p_1294->g_82 p_1294->g_81.f0 p_1294->g_comm_values p_1294->g_60.f5 p_1294->g_81.f5 p_1294->g_60.f1.f0 p_1294->g_138 p_1294->g_81.f1.f6 p_1294->g_81.f1.f4 p_1294->g_60.f1.f3 p_1294->g_162 p_1294->g_69 p_1294->g_186 p_1294->g_206 p_1294->g_207 p_1294->g_60.f0 p_1294->g_217 p_1294->g_222 p_1294->g_238 p_1294->g_254 p_1294->g_263 p_1294->l_comm_values p_1294->g_187.f1.f0 p_1294->g_302 p_1294->g_187.f1.f3 p_1294->g_174.f4 p_1294->g_337 p_1294->g_349 p_1294->g_351 p_1294->g_60.f3 p_1294->g_295 p_1294->g_360 p_1294->g_375 p_1294->g_400
 * writes: p_1294->g_86 p_1294->g_81.f1.f5 p_1294->g_60.f1.f5 p_1294->g_60.f1.f0 p_1294->g_138 p_1294->g_81.f1.f6 p_1294->g_60.f1.f3 p_1294->g_186 p_1294->g_162 p_1294->g_81.f5 p_1294->g_60.f5 p_1294->g_187.f1.f0 p_1294->g_295 p_1294->g_302 p_1294->g_187.f1.f3 p_1294->g_174.f4 p_1294->g_360
 */
uint64_t  func_75(struct S1 * p_76, uint32_t  p_77, int32_t * p_78, struct S3 * p_1294)
{ /* block id: 15 */
    int32_t *l_85[8][7] = {{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86},{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86},{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86},{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86},{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86},{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86},{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86},{&p_1294->g_86,&p_1294->g_86,&p_1294->g_86,(void*)0,(void*)0,&p_1294->g_86,&p_1294->g_86}};
    VECTOR(int16_t, 8) l_91 = (VECTOR(int16_t, 8))(0x43EBL, (VECTOR(int16_t, 4))(0x43EBL, (VECTOR(int16_t, 2))(0x43EBL, 0x49F3L), 0x49F3L), 0x49F3L, 0x43EBL, 0x49F3L);
    VECTOR(uint8_t, 16) l_94 = (VECTOR(uint8_t, 16))(0xA1L, (VECTOR(uint8_t, 4))(0xA1L, (VECTOR(uint8_t, 2))(0xA1L, 0xACL), 0xACL), 0xACL, 0xA1L, 0xACL, (VECTOR(uint8_t, 2))(0xA1L, 0xACL), (VECTOR(uint8_t, 2))(0xA1L, 0xACL), 0xA1L, 0xACL, 0xA1L, 0xACL);
    uint8_t *l_116 = (void*)0;
    uint8_t *l_117 = &p_1294->g_81.f1.f5;
    uint8_t *l_118 = &p_1294->g_60.f1.f5;
    VECTOR(uint16_t, 16) l_126 = (VECTOR(uint16_t, 16))(0x20CCL, (VECTOR(uint16_t, 4))(0x20CCL, (VECTOR(uint16_t, 2))(0x20CCL, 8UL), 8UL), 8UL, 0x20CCL, 8UL, (VECTOR(uint16_t, 2))(0x20CCL, 8UL), (VECTOR(uint16_t, 2))(0x20CCL, 8UL), 0x20CCL, 8UL, 0x20CCL, 8UL);
    int8_t *l_132 = &p_1294->g_60.f1.f0;
    int64_t *l_133 = (void*)0;
    int64_t *l_134 = (void*)0;
    int64_t *l_135 = (void*)0;
    int64_t *l_136[6][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int16_t l_137 = 0x68DBL;
    VECTOR(int8_t, 4) l_157 = (VECTOR(int8_t, 4))(0x4FL, (VECTOR(int8_t, 2))(0x4FL, (-2L)), (-2L));
    VECTOR(int32_t, 8) l_171 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
    VECTOR(uint32_t, 2) l_172 = (VECTOR(uint32_t, 2))(0x998E5181L, 0xD84EC987L);
    VECTOR(uint32_t, 8) l_176 = (VECTOR(uint32_t, 8))(0xFAB05A58L, (VECTOR(uint32_t, 4))(0xFAB05A58L, (VECTOR(uint32_t, 2))(0xFAB05A58L, 0x68D72065L), 0x68D72065L), 0x68D72065L, 0xFAB05A58L, 0x68D72065L);
    int32_t l_212 = 1L;
    VECTOR(int16_t, 8) l_218 = (VECTOR(int16_t, 8))(0x5DF0L, (VECTOR(int16_t, 4))(0x5DF0L, (VECTOR(int16_t, 2))(0x5DF0L, (-1L)), (-1L)), (-1L), 0x5DF0L, (-1L));
    VECTOR(uint8_t, 8) l_221 = (VECTOR(uint8_t, 8))(0x21L, (VECTOR(uint8_t, 4))(0x21L, (VECTOR(uint8_t, 2))(0x21L, 0x04L), 0x04L), 0x04L, 0x21L, 0x04L);
    uint8_t l_226 = 0UL;
    VECTOR(int8_t, 8) l_250 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x0AL), 0x0AL), 0x0AL, (-1L), 0x0AL);
    union U2 *l_252 = &p_1294->g_253[5][2];
    union U2 **l_251 = &l_252;
    VECTOR(int64_t, 8) l_265 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x0AC84BFAA1F7A9B4L), 0x0AC84BFAA1F7A9B4L), 0x0AC84BFAA1F7A9B4L, 0L, 0x0AC84BFAA1F7A9B4L);
    int16_t l_331 = 4L;
    VECTOR(uint8_t, 4) l_342 = (VECTOR(uint8_t, 4))(0x5FL, (VECTOR(uint8_t, 2))(0x5FL, 0xACL), 0xACL);
    VECTOR(uint16_t, 2) l_350 = (VECTOR(uint16_t, 2))(3UL, 1UL);
    VECTOR(uint16_t, 4) l_352 = (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0x8EFBL), 0x8EFBL);
    union U2 **l_355 = (void*)0;
    int i, j;
    p_1294->g_86 = (safe_lshift_func_int8_t_s_s(p_77, 1));
    p_1294->g_86 = p_1294->g_81.f4;
    p_1294->g_138 ^= (p_77 <= (safe_mul_func_uint16_t_u_u(0xF722L, (safe_mul_func_int16_t_s_s(0L, (((VECTOR(int16_t, 4))(l_91.s4772)).y & ((((l_137 = (safe_mul_func_uint8_t_u_u(((((VECTOR(uint8_t, 2))(l_94.s0d)).hi <= ((*l_132) |= ((safe_sub_func_int64_t_s_s(p_1294->g_81.f1.f0, (safe_lshift_func_uint8_t_u_s(((safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s(p_77, ((*l_118) = ((*l_117) |= ((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(p_1294->g_113.wx)).hi, 7)) || (safe_lshift_func_int8_t_s_u(p_1294->g_113.z, 3))))))) || (((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_u(0x6AL, 4)) >= p_1294->g_86) , ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 2))(p_1294->g_125.wz)).xxxyyyyyxxyxxxxx, ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))(l_126.s8eccac47)).s30, ((VECTOR(uint16_t, 2))(p_1294->g_127.se9))))).yxyyyyyxxxxxxxyx))).s3), (safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s(1L, p_77)), 0x110AL)))), (-1L))) <= p_1294->g_82[0][2][1]) < p_1294->g_81.f0)), 13)), p_1294->g_comm_values[p_1294->tid])), 7)), 0x2AE80F8EF8B48F96L)) || p_1294->g_60.f5), p_1294->g_81.f5)))) >= p_77))) < p_1294->g_127.s5), 0L))) <= (-1L)) , (void*)0) != p_78)))))));
    for (p_1294->g_81.f1.f6 = (-18); (p_1294->g_81.f1.f6 >= 37); ++p_1294->g_81.f1.f6)
    { /* block id: 25 */
        VECTOR(uint32_t, 8) l_145 = (VECTOR(uint32_t, 8))(0xAD653C03L, (VECTOR(uint32_t, 4))(0xAD653C03L, (VECTOR(uint32_t, 2))(0xAD653C03L, 0UL), 0UL), 0UL, 0xAD653C03L, 0UL);
        int32_t l_146 = 0x2B22B304L;
        VECTOR(uint64_t, 8) l_165 = (VECTOR(uint64_t, 8))(0xFD70E6FC0668297EL, (VECTOR(uint64_t, 4))(0xFD70E6FC0668297EL, (VECTOR(uint64_t, 2))(0xFD70E6FC0668297EL, 7UL), 7UL), 7UL, 0xFD70E6FC0668297EL, 7UL);
        uint8_t *l_166 = &p_1294->g_81.f1.f5;
        uint8_t **l_167 = (void*)0;
        uint8_t **l_168 = &l_116;
        uint16_t l_169[4] = {0UL,0UL,0UL,0UL};
        int16_t *l_170 = &p_1294->g_60.f1.f3;
        int32_t l_194 = (-9L);
        int32_t l_197 = 0x685F2522L;
        int32_t l_198 = 3L;
        VECTOR(int32_t, 2) l_199 = (VECTOR(int32_t, 2))(0L, 0x6016D721L);
        VECTOR(uint8_t, 2) l_239 = (VECTOR(uint8_t, 2))(249UL, 0x75L);
        uint64_t l_273 = 0x946C30C0CB181AE6L;
        uint64_t l_288 = 0UL;
        uint8_t l_332 = 0x5CL;
        int32_t l_356 = 0x11B4D24AL;
        uint64_t *l_357 = (void*)0;
        uint64_t l_372 = 1UL;
        int32_t * volatile *l_377 = &p_1294->g_376[0];
        VECTOR(int16_t, 2) l_398 = (VECTOR(int16_t, 2))(0x245BL, (-1L));
        int i;
        if (((safe_sub_func_uint64_t_u_u(((((l_146 = ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_145.s53)), 0xAEA66F31L, 0x9EA3BD3CL)).x) && (safe_add_func_uint64_t_u_u((((*l_170) &= (safe_lshift_func_uint8_t_u_s(255UL, (safe_div_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((((safe_add_func_int16_t_s_s((p_77 | (GROUP_DIVERGE(0, 1) == ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(l_157.xxzz)).xyxzwyzyxxyzyxxw, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))((-1L), l_145.s2, 0x04L, (-9L), ((*l_132) = (p_1294->g_81.f1.f5 ^ ((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 8))(p_1294->g_162.sbddc6d73)).s2, l_145.s5)), GROUP_DIVERGE(2, 1))) | ((safe_rshift_func_int8_t_s_s(p_77, (0UL & ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_165.s25)), 1UL, 0x49C3678AA32F28BEL)).w))) < (((*l_168) = (l_166 = l_166)) != l_117))))), p_1294->g_125.z, ((VECTOR(int8_t, 4))(0x5AL)), ((VECTOR(int8_t, 2))(1L)), 1L, ((VECTOR(int8_t, 2))(0x1AL)), (-1L))).sdeb9)), ((VECTOR(int8_t, 2))(1L)), 4L, 1L)).s7534424372571404))).s3)), p_1294->g_113.w)) == 1L) < p_77) & l_169[1]), p_1294->g_81.f1.f4)) != (-9L)), l_145.s1))))) | p_1294->g_162.sd), p_77))) >= 0L) < 0L), 0x3B6114672487D748L)) <= 9L))
        { /* block id: 31 */
            VECTOR(int32_t, 8) l_189 = (VECTOR(int32_t, 8))(0x5C19EB95L, (VECTOR(int32_t, 4))(0x5C19EB95L, (VECTOR(int32_t, 2))(0x5C19EB95L, (-1L)), (-1L)), (-1L), 0x5C19EB95L, (-1L));
            int8_t **l_215 = &l_132;
            union U2 *l_227[1];
            union U2 **l_229 = &l_227[0];
            int i;
            for (i = 0; i < 1; i++)
                l_227[i] = &p_1294->g_228;
            if (((VECTOR(int32_t, 16))(l_171.s4403734110617035)).sa)
            { /* block id: 32 */
                struct S1 *l_173 = &p_1294->g_174;
                VECTOR(uint32_t, 4) l_175 = (VECTOR(uint32_t, 4))(0xE7687A61L, (VECTOR(uint32_t, 2))(0xE7687A61L, 0xF9EE90ABL), 0xF9EE90ABL);
                VECTOR(uint8_t, 4) l_185 = (VECTOR(uint8_t, 4))(0xD2L, (VECTOR(uint8_t, 2))(0xD2L, 0xDCL), 0xDCL);
                struct S1 **l_188 = &p_1294->g_186;
                int32_t l_190[8];
                int8_t **l_213 = &l_132;
                int8_t ***l_214[1][8][9] = {{{&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213}}};
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_190[i] = 0x278DC8BCL;
                if (((((((VECTOR(uint32_t, 16))(l_172.xxxxxxyyxxxyxyyx)).sd , l_166) == (void*)0) , (l_173 != ((*l_188) = (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(4294967295UL, 0x6BB7620FL, 0UL, 0x11A96804L, ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(l_175.xwyzzxzyxwyywzwy)).s449d, ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 2))(0xDB40B985L, 0x77C23372L)).yyxyxxyy, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_176.s54)), GROUP_DIVERGE(0, 1), 1UL, (safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xE9L, 0UL)).yxxyyxxxxxxxxxxx)).s5, (((p_1294->g_69.x , ((safe_mul_func_uint8_t_u_u(p_77, ((FAKE_DIVERGE(p_1294->global_1_offset, get_global_id(1), 10) || ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(l_185.yzzx)).z, 1)), p_1294->g_113.x)) == (1UL != p_77))) != 0x567CL))) , 0x7052EA52L)) , 0x59DFL) | 0x7A29L))), p_1294->g_69.x, 0x2BBBA2D2L, 0x57381F49L, 0xF0FED554L, 4294967288UL, 0x78EEBD4AL, 0UL, p_77, ((VECTOR(uint32_t, 2))(1UL)), 1UL)).lo, ((VECTOR(uint32_t, 8))(0x664A59A8L))))).odd))))))).s6 , p_1294->g_186)))) | 252UL))
                { /* block id: 34 */
                    int32_t l_191 = 5L;
                    int32_t l_192 = 1L;
                    int32_t l_193 = 0L;
                    int32_t l_195 = 0x5C80A1DAL;
                    int32_t l_196 = 0L;
                    int32_t l_200[3][9][9] = {{{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L}},{{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L}},{{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L},{0x62538703L,0x58A12F1BL,1L,0x6161852DL,0x58A12F1BL,0x6161852DL,1L,0x58A12F1BL,0x62538703L}}};
                    uint32_t l_201 = 9UL;
                    int i, j, k;
                    l_201--;
                }
                else
                { /* block id: 36 */
                    p_1294->g_162.s1 |= p_77;
                    p_1294->g_162.s2 &= (safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 2))(p_1294->g_206.zz)).even, p_1294->g_207));
                    l_189.s7 |= p_1294->g_60.f0;
                }
                for (l_146 = (-24); (l_146 <= 21); l_146 = safe_add_func_uint32_t_u_u(l_146, 8))
                { /* block id: 43 */
                    if ((atomic_inc(&p_1294->l_atomic_input[5]) == 9))
                    { /* block id: 45 */
                        int32_t **l_210 = (void*)0;
                        uint32_t l_211[9][9][3] = {{{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL}},{{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL}},{{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL}},{{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL}},{{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL}},{{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL}},{{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL}},{{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL}},{{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL},{0xDC7762DAL,4294967295UL,0UL}}};
                        int i, j, k;
                        l_210 = l_210;
                        l_211[4][3][0] &= 0x3FA6F946L;
                        unsigned int result = 0;
                        int l_211_i0, l_211_i1, l_211_i2;
                        for (l_211_i0 = 0; l_211_i0 < 9; l_211_i0++) {
                            for (l_211_i1 = 0; l_211_i1 < 9; l_211_i1++) {
                                for (l_211_i2 = 0; l_211_i2 < 3; l_211_i2++) {
                                    result += l_211[l_211_i0][l_211_i1][l_211_i2];
                                }
                            }
                        }
                        atomic_add(&p_1294->l_special_values[5], result);
                    }
                    else
                    { /* block id: 48 */
                        (1 + 1);
                    }
                    if (l_212)
                        break;
                }
                l_215 = l_213;
            }
            else
            { /* block id: 54 */
                uint16_t l_216[7][1] = {{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}};
                int i, j;
                if (p_77)
                    break;
                l_226 = (l_216[3][0] == ((((((p_1294->g_60.f1.f0 , l_199.x) != ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_1294->g_217.yxwy)), ((VECTOR(int16_t, 4))((((((VECTOR(int16_t, 4))(l_218.s5672)).w && ((safe_mod_func_int16_t_s_s((p_77 && ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(l_221.s5266)).zzwxwxwywwzxwzww, ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 8))(p_1294->g_222.s919f8683)).s07))).xyxxyyxyyxxyyyxx))).s9), (safe_unary_minus_func_int64_t_s((1UL & (((p_77 , p_78) == (void*)0) < ((0x97L == p_77) >= p_77))))))) > p_77)) , l_189.s1) == 0L), ((VECTOR(int16_t, 2))(0x45CBL)), 0x1CE3L)), 0x29A5L, ((VECTOR(int16_t, 4))(0x44A2L)), ((VECTOR(int16_t, 2))(1L)), 0x58D4L)).s76)), ((VECTOR(int16_t, 2))((-1L)))))).xyyxxxyx, ((VECTOR(uint16_t, 8))(1UL))))).s20, ((VECTOR(uint16_t, 2))(65534UL))))).yyyx, ((VECTOR(uint16_t, 4))(0x1F11L))))).z) || 4294967287UL) <= p_1294->g_113.z) <= p_1294->g_207) | p_77));
                p_1294->g_86 &= l_194;
            }
            (*l_229) = l_227[0];
        }
        else
        { /* block id: 60 */
            VECTOR(uint32_t, 4) l_264 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x035C83AAL), 0x035C83AAL);
            union U2 **l_268 = &l_252;
            int32_t l_269 = (-8L);
            int32_t l_270 = 0x3AE65E62L;
            int32_t l_271 = 0x348D2017L;
            int32_t l_272 = 0x7C78908FL;
            int32_t l_297 = 0x71C620F7L;
            int32_t l_298 = (-1L);
            int32_t l_299 = 0L;
            int32_t l_300 = 0x5F2E2462L;
            int8_t l_307 = 0x1BL;
            int32_t l_313[8][9] = {{0x53D1453FL,0x6DEDC025L,0x47BD5742L,1L,0x6DEDC025L,1L,0x47BD5742L,0x6DEDC025L,0x53D1453FL},{0x53D1453FL,0x6DEDC025L,0x47BD5742L,1L,0x6DEDC025L,1L,0x47BD5742L,0x6DEDC025L,0x53D1453FL},{0x53D1453FL,0x6DEDC025L,0x47BD5742L,1L,0x6DEDC025L,1L,0x47BD5742L,0x6DEDC025L,0x53D1453FL},{0x53D1453FL,0x6DEDC025L,0x47BD5742L,1L,0x6DEDC025L,1L,0x47BD5742L,0x6DEDC025L,0x53D1453FL},{0x53D1453FL,0x6DEDC025L,0x47BD5742L,1L,0x6DEDC025L,1L,0x47BD5742L,0x6DEDC025L,0x53D1453FL},{0x53D1453FL,0x6DEDC025L,0x47BD5742L,1L,0x6DEDC025L,1L,0x47BD5742L,0x6DEDC025L,0x53D1453FL},{0x53D1453FL,0x6DEDC025L,0x47BD5742L,1L,0x6DEDC025L,1L,0x47BD5742L,0x6DEDC025L,0x53D1453FL},{0x53D1453FL,0x6DEDC025L,0x47BD5742L,1L,0x6DEDC025L,1L,0x47BD5742L,0x6DEDC025L,0x53D1453FL}};
            int32_t l_314 = (-4L);
            int i, j;
            p_1294->g_86 = ((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_1294->g_238.yy)).xxxx)), ((VECTOR(uint8_t, 16))(l_239.yxxyyyxxyxxyyxyy)).s321f))).xxyyxxxxyzyzwwyx, (uint8_t)((*l_117) = (+p_77)), (uint8_t)((((*l_132) = ((safe_mul_func_int8_t_s_s(((((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(p_77, (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(0x35L, 0x5EL, 255UL, 1UL)).z, (((VECTOR(int8_t, 2))(l_250.s54)).even != (l_251 != p_1294->g_254)))))), l_199.y)) > (((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((p_77 , ((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(p_1294->g_263.s3626315637603607)), ((VECTOR(uint32_t, 4))(l_264.yxzz)).zxyzwxwwyzzxywzw))).s9c)).lo || (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_265.s0735)).xwwxzywzyzwwyyzx)).s5 < ((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))((safe_mul_func_int16_t_s_s(((*l_170) |= (-2L)), ((0x0DL && ((*l_166) = 0xE6L)) != p_77))), p_77, FAKE_DIVERGE(p_1294->global_1_offset, get_global_id(1), 10), ((VECTOR(uint16_t, 4))(0xC29AL)), 0x7F76L)).s14)).lo ^ p_1294->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1294->tid, 36))]) , l_264.z))) & p_77)) == p_1294->g_60.f5), p_77)), (-10L))) , p_1294->g_162.s1) , p_77)) , &l_252) != l_268), p_77)) ^ p_77)) != 247UL) , 0xCAL)))).se71d)), ((VECTOR(uint8_t, 4))(4UL)))).s7, 2)) <= p_77), 7UL)), 15)) ^ l_239.y), p_1294->g_187.f1.f0)) != 0x5CL);
            ++l_273;
            for (p_1294->g_81.f5 = (-24); (p_1294->g_81.f5 > 12); p_1294->g_81.f5 = safe_add_func_int8_t_s_s(p_1294->g_81.f5, 8))
            { /* block id: 69 */
                int8_t l_281 = 0x17L;
                int32_t l_283 = 7L;
                int32_t l_285 = 0x5BF7ED15L;
                int32_t l_287[4][5] = {{2L,2L,0x035A706CL,0x48E3E9AFL,0x0A4BC42CL},{2L,2L,0x035A706CL,0x48E3E9AFL,0x0A4BC42CL},{2L,2L,0x035A706CL,0x48E3E9AFL,0x0A4BC42CL},{2L,2L,0x035A706CL,0x48E3E9AFL,0x0A4BC42CL}};
                int i, j;
                for (p_1294->g_60.f5 = 0; (p_1294->g_60.f5 == 28); p_1294->g_60.f5++)
                { /* block id: 72 */
                    int8_t l_280 = 0x21L;
                    int32_t l_282 = 0x13B69A0EL;
                    int32_t l_284 = 0x079D84CDL;
                    int64_t l_286 = 0x350E768BA2E38E1EL;
                    VECTOR(int32_t, 16) l_296 = (VECTOR(int32_t, 16))(0x3614B37DL, (VECTOR(int32_t, 4))(0x3614B37DL, (VECTOR(int32_t, 2))(0x3614B37DL, 9L), 9L), 9L, 0x3614B37DL, 9L, (VECTOR(int32_t, 2))(0x3614B37DL, 9L), (VECTOR(int32_t, 2))(0x3614B37DL, 9L), 0x3614B37DL, 9L, 0x3614B37DL, 9L);
                    int16_t l_301 = 0x25E7L;
                    int i;
                    --l_288;
                    for (p_1294->g_187.f1.f0 = 0; (p_1294->g_187.f1.f0 < 24); p_1294->g_187.f1.f0++)
                    { /* block id: 76 */
                        int32_t **l_293 = (void*)0;
                        int32_t **l_294[10] = {&l_85[4][6],&l_85[3][4],(void*)0,&l_85[3][4],&l_85[4][6],&l_85[4][6],&l_85[3][4],(void*)0,&l_85[3][4],&l_85[4][6]};
                        int i;
                        (*l_268) = (*l_251);
                        p_1294->g_295 = &p_1294->g_86;
                        p_1294->g_302[5]--;
                    }
                }
                for (p_1294->g_187.f1.f3 = 0; (p_1294->g_187.f1.f3 == 18); ++p_1294->g_187.f1.f3)
                { /* block id: 84 */
                    VECTOR(int16_t, 8) l_308 = (VECTOR(int16_t, 8))(0x33D7L, (VECTOR(int16_t, 4))(0x33D7L, (VECTOR(int16_t, 2))(0x33D7L, (-8L)), (-8L)), (-8L), 0x33D7L, (-8L));
                    int32_t l_309 = 5L;
                    int32_t l_310 = 1L;
                    int32_t l_311 = 0x78433BF0L;
                    VECTOR(int32_t, 4) l_312 = (VECTOR(int32_t, 4))(0x52B7D598L, (VECTOR(int32_t, 2))(0x52B7D598L, 1L), 1L);
                    uint8_t l_315 = 1UL;
                    int i;
                    l_315++;
                }
                if ((atomic_inc(&p_1294->l_atomic_input[11]) == 4))
                { /* block id: 88 */
                    VECTOR(uint16_t, 16) l_318 = (VECTOR(uint16_t, 16))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 65534UL), 65534UL), 65534UL, 65531UL, 65534UL, (VECTOR(uint16_t, 2))(65531UL, 65534UL), (VECTOR(uint16_t, 2))(65531UL, 65534UL), 65531UL, 65534UL, 65531UL, 65534UL);
                    VECTOR(uint16_t, 4) l_319 = (VECTOR(uint16_t, 4))(0xCEF5L, (VECTOR(uint16_t, 2))(0xCEF5L, 0x4913L), 0x4913L);
                    VECTOR(uint32_t, 2) l_320 = (VECTOR(uint32_t, 2))(1UL, 4294967295UL);
                    uint16_t l_321 = 0xD256L;
                    int32_t l_322 = 6L;
                    int8_t l_323 = 0x34L;
                    int32_t l_324 = 0x09324F85L;
                    int16_t l_325 = 0x5A8AL;
                    int32_t l_326 = 0x67C0A4F6L;
                    int16_t l_327 = 9L;
                    int32_t l_328 = 0x3EBCA123L;
                    int i;
                    l_326 |= ((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 8))(l_318.s76bc0435)).even, ((VECTOR(uint16_t, 4))(l_319.xxwy))))), 0x89CC5707L, ((VECTOR(uint32_t, 4))(l_320.yyyy)), l_321, FAKE_DIVERGE(p_1294->group_1_offset, get_group_id(1), 10), ((VECTOR(uint32_t, 2))(0x96875737L, 0x936A15BBL)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x949F2AA5L, 4294967295UL)))), 0UL)).s8 , l_322) , (((l_323 = (-10L)) , l_324) , l_325));
                    l_328 = l_327;
                    unsigned int result = 0;
                    result += l_318.sf;
                    result += l_318.se;
                    result += l_318.sd;
                    result += l_318.sc;
                    result += l_318.sb;
                    result += l_318.sa;
                    result += l_318.s9;
                    result += l_318.s8;
                    result += l_318.s7;
                    result += l_318.s6;
                    result += l_318.s5;
                    result += l_318.s4;
                    result += l_318.s3;
                    result += l_318.s2;
                    result += l_318.s1;
                    result += l_318.s0;
                    result += l_319.w;
                    result += l_319.z;
                    result += l_319.y;
                    result += l_319.x;
                    result += l_320.y;
                    result += l_320.x;
                    result += l_321;
                    result += l_322;
                    result += l_323;
                    result += l_324;
                    result += l_325;
                    result += l_326;
                    result += l_327;
                    result += l_328;
                    atomic_add(&p_1294->l_special_values[11], result);
                }
                else
                { /* block id: 92 */
                    (1 + 1);
                }
                for (p_1294->g_174.f4 = (-27); (p_1294->g_174.f4 > (-10)); p_1294->g_174.f4++)
                { /* block id: 97 */
                    return p_1294->g_206.z;
                }
            }
        }
        l_332--;
        if (((*p_1294->g_295) = (((((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(p_1294->g_337.xzxzxxywzxxxzwwz)).hi)))))).s36)).odd, 8)) < l_194) , (p_77 < (safe_mul_func_int16_t_s_s((-7L), ((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_342.yxwz)).wxzywyxx)).s54, ((VECTOR(uint8_t, 2))(246UL, 0xA7L))))))).xyyyyyyyxxxxyyxx, ((VECTOR(uint8_t, 8))(p_1294->g_174.f4, (safe_mul_func_uint8_t_u_u((((!(safe_rshift_func_uint8_t_u_u((!(((VECTOR(int8_t, 2))(0x37L, 3L)).even , (safe_div_func_uint16_t_u_u(((l_197 = ((((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65534UL, 0UL)), 65530UL, 0UL)).hi, ((VECTOR(uint16_t, 2))(p_1294->g_349.sdb))))).yxxxyyyx, ((VECTOR(uint16_t, 4))(l_350.xxxx)).wywyyxww, ((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1294->g_351.s2144)), ((VECTOR(uint16_t, 4))(l_199.x, ((VECTOR(uint16_t, 2))(1UL, 65535UL)), 65535UL)))).s74)).yxxxyyyyyxxyxxyy, ((VECTOR(uint16_t, 2))(l_352.ww)).yxxxyyyxxyxyxyyy))).even))).s0 <= ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0L, ((VECTOR(int16_t, 8))(((safe_mul_func_uint16_t_u_u((((p_1294->g_60.f3 | (l_355 == ((l_194 ^ 1UL) , (void*)0))) <= l_199.y) > (*p_1294->g_295)), 0x26DEL)) != p_1294->g_125.x), l_197, 0x4178L, 0x6674L, 1L, ((VECTOR(int16_t, 2))(0x43B9L)), 0L)), 0x0A55L, 0x1177L, p_77, 0L, 0x3759L, 0x7A7DL, 0x473BL)).sb6)), (int16_t)l_197))))))).xyxxxxxx)).s2) > l_356)) & l_169[1]), 7UL)))), 0))) , (void*)0) == &l_166), p_1294->g_60.f0)), ((VECTOR(uint8_t, 4))(0x8FL)), 254UL, 246UL)).s5217721242143153))).s4, p_77)) == l_199.x))))) , 0x2BL) < p_1294->g_187.f1.f0)))
        { /* block id: 105 */
            uint64_t **l_363 = (void*)0;
            int32_t l_365 = 1L;
            int32_t l_367 = (-1L);
            int32_t l_369 = 0x5076BDD8L;
            int32_t l_370 = 0x3EAC41CEL;
            int32_t l_371[4];
            int i;
            for (i = 0; i < 4; i++)
                l_371[i] = 0L;
            for (l_332 = 22; (l_332 > 50); ++l_332)
            { /* block id: 108 */
                int8_t ***l_362 = &p_1294->g_360[0];
                uint64_t ***l_364[2];
                int32_t l_366 = (-8L);
                int32_t l_368[7][1] = {{0x336A1777L},{0x336A1777L},{0x336A1777L},{0x336A1777L},{0x336A1777L},{0x336A1777L},{0x336A1777L}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_364[i] = &l_363;
                (*l_362) = p_1294->g_360[0];
                l_197 = ((*p_1294->g_295) = 1L);
                l_363 = l_363;
                ++l_372;
            }
            if (l_199.y)
                continue;
        }
        else
        { /* block id: 116 */
            uint32_t l_381[6][2][4] = {{{4294967292UL,0x2B799FE1L,0x80834300L,0x39ACF600L},{4294967292UL,0x2B799FE1L,0x80834300L,0x39ACF600L}},{{4294967292UL,0x2B799FE1L,0x80834300L,0x39ACF600L},{4294967292UL,0x2B799FE1L,0x80834300L,0x39ACF600L}},{{4294967292UL,0x2B799FE1L,0x80834300L,0x39ACF600L},{4294967292UL,0x2B799FE1L,0x80834300L,0x39ACF600L}},{{4294967292UL,0x2B799FE1L,0x80834300L,0x39ACF600L},{4294967292UL,0x2B799FE1L,0x80834300L,0x39ACF600L}},{{4294967292UL,0x2B799FE1L,0x80834300L,0x39ACF600L},{4294967292UL,0x2B799FE1L,0x80834300L,0x39ACF600L}},{{4294967292UL,0x2B799FE1L,0x80834300L,0x39ACF600L},{4294967292UL,0x2B799FE1L,0x80834300L,0x39ACF600L}}};
            VECTOR(int32_t, 4) l_388 = (VECTOR(int32_t, 4))(0x03B94E8EL, (VECTOR(int32_t, 2))(0x03B94E8EL, (-7L)), (-7L));
            VECTOR(int16_t, 2) l_397 = (VECTOR(int16_t, 2))(0x2474L, 6L);
            int8_t *l_399[10][4][5] = {{{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0}},{{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0}},{{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0}},{{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0}},{{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0}},{{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0}},{{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0}},{{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0}},{{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0}},{{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0},{&p_1294->g_187.f1.f0,&p_1294->g_187.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_81.f1.f0,&p_1294->g_174.f1.f0}}};
            int i, j, k;
            l_377 = p_1294->g_375[0][0];
            (*p_1294->g_295) = (p_77 == p_1294->g_81.f1.f4);
            for (l_356 = (-24); (l_356 < 28); ++l_356)
            { /* block id: 121 */
                int32_t l_380 = (-1L);
                l_380 |= 0L;
            }
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1294->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 36)), permutations[(safe_mod_func_uint32_t_u_u((((+(((((FAKE_DIVERGE(p_1294->local_0_offset, get_local_id(0), 10) > l_381[1][0][1]) < ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0xA19E48F5L, 0x8C8B1218L)).xxxxyxyxyxyyyyxx)).se056)).y) , ((safe_add_func_int16_t_s_s((((VECTOR(int16_t, 8))(l_381[1][0][1], 0x1DC5L, (!(((safe_lshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((((l_388.w = ((VECTOR(int32_t, 8))(l_388.zxzyzyxy)).s6) , (safe_unary_minus_func_int32_t_s(p_77))) , (safe_mul_func_uint16_t_u_u(p_1294->g_113.x, ((safe_unary_minus_func_uint64_t_u((((safe_mod_func_uint32_t_u_u(0xD7F9900AL, ((VECTOR(int32_t, 4))((((void*)0 == p_1294->g_186) == ((VECTOR(uint8_t, 2))(255UL, 0UL)).hi), (safe_add_func_uint16_t_u_u((1UL > (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(l_397.yyxyyyxx)).s64, ((VECTOR(int16_t, 2))(l_398.xy))))).xyxy)).z || ((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((p_77 || 7L) , p_1294->g_81.f1.f0), ((VECTOR(int16_t, 2))(0x7AF8L)), 0x382BL)).xxxzxyzxxxxwxxyw)).hi)).s7 & p_1294->g_187.f1.f0) , 0x3734L))), p_77)), 8L, (-6L))).z)) , l_399[1][0][0]) == (void*)0))) | 0x5F7CL)))), p_1294->g_400)), 1)) ^ 0x2DL) | (-1L))), ((VECTOR(int16_t, 2))(0L)), (-4L), 3L, 1L)).s1 ^ p_1294->g_81.f5), 0UL)) , l_199.x)) && l_381[4][0][3]) | l_398.x)) < (*p_1294->g_295)) < p_77), 10))][(safe_mod_func_uint32_t_u_u(p_1294->tid, 36))]));
        }
        if ((*p_1294->g_295))
            continue;
    }
    return p_1294->g_113.w;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[17];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 17; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[17];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 17; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[36];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 36; i++)
            l_comm_values[i] = 1;
    struct S3 c_1295;
    struct S3* p_1294 = &c_1295;
    struct S3 c_1296 = {
        (VECTOR(uint16_t, 2))(1UL, 65535UL), // p_1294->g_4
        5L, // p_1294->g_39
        {4UL,{0x0EL,1UL,0xA3L,0x042CL,0x4DAB0B82L,0xFBL,65527UL,8L,248UL},1UL,0x385E3970C0F3ADCFL,-1L,0xE8D2L}, // p_1294->g_60
        (VECTOR(uint16_t, 2))(65528UL, 0xCFCCL), // p_1294->g_69
        {1UL,{0x0FL,65528UL,0xDAL,0x519DL,0x25C12BBFL,0xAFL,8UL,-1L,0xF5L},4294967295UL,0UL,-5L,1UL}, // p_1294->g_81
        {{{7L,7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L,7L}}}, // p_1294->g_82
        0x69E88CDAL, // p_1294->g_86
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x2C35L), 0x2C35L), // p_1294->g_113
        (VECTOR(uint32_t, 4))(0x082F4DE9L, (VECTOR(uint32_t, 2))(0x082F4DE9L, 0x491D0AB3L), 0x491D0AB3L), // p_1294->g_125
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), 65535UL, 0UL, 65535UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), (VECTOR(uint16_t, 2))(0UL, 65535UL), 0UL, 65535UL, 0UL, 65535UL), // p_1294->g_127
        0x9760D513L, // p_1294->g_138
        (VECTOR(int32_t, 16))(0x640D8D5CL, (VECTOR(int32_t, 4))(0x640D8D5CL, (VECTOR(int32_t, 2))(0x640D8D5CL, 0x791DEE43L), 0x791DEE43L), 0x791DEE43L, 0x640D8D5CL, 0x791DEE43L, (VECTOR(int32_t, 2))(0x640D8D5CL, 0x791DEE43L), (VECTOR(int32_t, 2))(0x640D8D5CL, 0x791DEE43L), 0x640D8D5CL, 0x791DEE43L, 0x640D8D5CL, 0x791DEE43L), // p_1294->g_162
        {0x9F5C42DAL,{-5L,0x0B64L,0x6FL,0L,7L,0xB4L,0xA6F6L,0x398B15E2L,0x98L},1UL,18446744073709551615UL,1L,65534UL}, // p_1294->g_174
        {0x2F4FCE7EL,{-1L,0xB02FL,0xDDL,-1L,0x73C2BB4EL,0x89L,0x1105L,1L,0x5EL},0x63BA376BL,0xBF0B67F1609E6741L,-1L,65529UL}, // p_1294->g_187
        &p_1294->g_187, // p_1294->g_186
        (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0L), 0L), // p_1294->g_206
        1UL, // p_1294->g_207
        (VECTOR(int16_t, 4))(0x53A4L, (VECTOR(int16_t, 2))(0x53A4L, 0x07FAL), 0x07FAL), // p_1294->g_217
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xE7L), 0xE7L), 0xE7L, 0UL, 0xE7L, (VECTOR(uint8_t, 2))(0UL, 0xE7L), (VECTOR(uint8_t, 2))(0UL, 0xE7L), 0UL, 0xE7L, 0UL, 0xE7L), // p_1294->g_222
        {0x7F66L}, // p_1294->g_228
        (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0xFCL), 0xFCL), // p_1294->g_238
        {{{-4L},{-4L},{-4L}},{{-4L},{-4L},{-4L}},{{-4L},{-4L},{-4L}},{{-4L},{-4L},{-4L}},{{-4L},{-4L},{-4L}},{{-4L},{-4L},{-4L}},{{-4L},{-4L},{-4L}},{{-4L},{-4L},{-4L}}}, // p_1294->g_253
        {{{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}}},{{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}}},{{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}}},{{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}}},{{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}}},{{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}}},{{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}},{{0x2E7DL},{0x55ACL},{0x277FL},{5L},{5L},{0x277FL}}}}, // p_1294->g_256
        &p_1294->g_256[6][1][5], // p_1294->g_255
        &p_1294->g_255, // p_1294->g_254
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xAC7E0E84L), 0xAC7E0E84L), 0xAC7E0E84L, 1UL, 0xAC7E0E84L), // p_1294->g_263
        &p_1294->g_86, // p_1294->g_295
        {0x450D31762525AEFEL,0x107843D38D4666E9L,0x450D31762525AEFEL,0x450D31762525AEFEL,0x107843D38D4666E9L,0x450D31762525AEFEL,0x450D31762525AEFEL,0x107843D38D4666E9L}, // p_1294->g_302
        (VECTOR(int16_t, 4))(0x671AL, (VECTOR(int16_t, 2))(0x671AL, 0x25CBL), 0x25CBL), // p_1294->g_337
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65534UL), 65534UL), 65534UL, 0UL, 65534UL, (VECTOR(uint16_t, 2))(0UL, 65534UL), (VECTOR(uint16_t, 2))(0UL, 65534UL), 0UL, 65534UL, 0UL, 65534UL), // p_1294->g_349
        (VECTOR(uint16_t, 8))(0x7A36L, (VECTOR(uint16_t, 4))(0x7A36L, (VECTOR(uint16_t, 2))(0x7A36L, 65535UL), 65535UL), 65535UL, 0x7A36L, 65535UL), // p_1294->g_351
        &p_1294->g_60.f1.f0, // p_1294->g_361
        {&p_1294->g_361,&p_1294->g_361}, // p_1294->g_360
        {&p_1294->g_39}, // p_1294->g_376
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_1294->g_375
        3UL, // p_1294->g_400
        {-10L}, // p_1294->g_404
        {0x78D5L}, // p_1294->g_405
        {0x57BFL}, // p_1294->g_406
        {0x25E8L}, // p_1294->g_407
        {0x65A6L}, // p_1294->g_408
        {1L}, // p_1294->g_409
        {{0x2BF0L},{0x2BF0L},{0x2BF0L},{0x2BF0L},{0x2BF0L},{0x2BF0L},{0x2BF0L},{0x2BF0L},{0x2BF0L}}, // p_1294->g_410
        {0x7022L}, // p_1294->g_411
        {0x3B27L}, // p_1294->g_412
        {1L}, // p_1294->g_413
        {0L}, // p_1294->g_414
        {{&p_1294->g_413,&p_1294->g_413,&p_1294->g_411,&p_1294->g_408,&p_1294->g_414,(void*)0,&p_1294->g_409,&p_1294->g_410[5],&p_1294->g_409,(void*)0},{&p_1294->g_413,&p_1294->g_413,&p_1294->g_411,&p_1294->g_408,&p_1294->g_414,(void*)0,&p_1294->g_409,&p_1294->g_410[5],&p_1294->g_409,(void*)0},{&p_1294->g_413,&p_1294->g_413,&p_1294->g_411,&p_1294->g_408,&p_1294->g_414,(void*)0,&p_1294->g_409,&p_1294->g_410[5],&p_1294->g_409,(void*)0},{&p_1294->g_413,&p_1294->g_413,&p_1294->g_411,&p_1294->g_408,&p_1294->g_414,(void*)0,&p_1294->g_409,&p_1294->g_410[5],&p_1294->g_409,(void*)0},{&p_1294->g_413,&p_1294->g_413,&p_1294->g_411,&p_1294->g_408,&p_1294->g_414,(void*)0,&p_1294->g_409,&p_1294->g_410[5],&p_1294->g_409,(void*)0},{&p_1294->g_413,&p_1294->g_413,&p_1294->g_411,&p_1294->g_408,&p_1294->g_414,(void*)0,&p_1294->g_409,&p_1294->g_410[5],&p_1294->g_409,(void*)0},{&p_1294->g_413,&p_1294->g_413,&p_1294->g_411,&p_1294->g_408,&p_1294->g_414,(void*)0,&p_1294->g_409,&p_1294->g_410[5],&p_1294->g_409,(void*)0}}, // p_1294->g_403
        (VECTOR(int32_t, 2))(0x065B28BBL, 0x0BB42CBFL), // p_1294->g_419
        (VECTOR(uint16_t, 2))(1UL, 1UL), // p_1294->g_428
        4294967294UL, // p_1294->g_444
        (void*)0, // p_1294->g_464
        &p_1294->g_464, // p_1294->g_463
        (void*)0, // p_1294->g_467
        &p_1294->g_464, // p_1294->g_468
        (void*)0, // p_1294->g_470
        {{&p_1294->g_470,(void*)0,&p_1294->g_470,(void*)0,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,(void*)0,&p_1294->g_470},{&p_1294->g_470,(void*)0,&p_1294->g_470,(void*)0,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,(void*)0,&p_1294->g_470},{&p_1294->g_470,(void*)0,&p_1294->g_470,(void*)0,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,(void*)0,&p_1294->g_470},{&p_1294->g_470,(void*)0,&p_1294->g_470,(void*)0,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,(void*)0,&p_1294->g_470},{&p_1294->g_470,(void*)0,&p_1294->g_470,(void*)0,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,(void*)0,&p_1294->g_470},{&p_1294->g_470,(void*)0,&p_1294->g_470,(void*)0,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,(void*)0,&p_1294->g_470},{&p_1294->g_470,(void*)0,&p_1294->g_470,(void*)0,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,(void*)0,&p_1294->g_470},{&p_1294->g_470,(void*)0,&p_1294->g_470,(void*)0,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,(void*)0,&p_1294->g_470},{&p_1294->g_470,(void*)0,&p_1294->g_470,(void*)0,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,(void*)0,&p_1294->g_470},{&p_1294->g_470,(void*)0,&p_1294->g_470,(void*)0,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,&p_1294->g_470,(void*)0,&p_1294->g_470}}, // p_1294->g_469
        {0x03L,65531UL,0xFDL,0x0A22L,0x65CA3C2CL,0xC8L,0x9A2DL,9L,255UL}, // p_1294->g_481
        {{{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL}},{{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL}},{{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL}},{{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL}},{{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL}},{{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL},{0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL,0x5A56L,0x5A56L,0x4B1DL}}}, // p_1294->g_497
        (VECTOR(int8_t, 2))(0L, 9L), // p_1294->g_536
        (void*)0, // p_1294->g_573
        {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}}, // p_1294->g_572
        (VECTOR(int8_t, 2))(0x25L, 0x67L), // p_1294->g_583
        0xAAL, // p_1294->g_586
        (VECTOR(uint16_t, 16))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0x9EB7L), 0x9EB7L), 0x9EB7L, 5UL, 0x9EB7L, (VECTOR(uint16_t, 2))(5UL, 0x9EB7L), (VECTOR(uint16_t, 2))(5UL, 0x9EB7L), 5UL, 0x9EB7L, 5UL, 0x9EB7L), // p_1294->g_620
        (VECTOR(uint32_t, 8))(0x6EBCCFD7L, (VECTOR(uint32_t, 4))(0x6EBCCFD7L, (VECTOR(uint32_t, 2))(0x6EBCCFD7L, 0x1529AC2BL), 0x1529AC2BL), 0x1529AC2BL, 0x6EBCCFD7L, 0x1529AC2BL), // p_1294->g_625
        (VECTOR(uint16_t, 2))(0xD25FL, 65528UL), // p_1294->g_627
        0x20L, // p_1294->g_677
        (VECTOR(uint64_t, 4))(0x57D8E9CE1276894CL, (VECTOR(uint64_t, 2))(0x57D8E9CE1276894CL, 0xB11992AF4670C02BL), 0xB11992AF4670C02BL), // p_1294->g_699
        (VECTOR(int32_t, 2))(0x5CEB27F5L, 0x25D5B31BL), // p_1294->g_734
        (VECTOR(uint64_t, 2))(0x24C6F9E1AF24E94DL, 0xD8D4D187730A8F54L), // p_1294->g_764
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L), // p_1294->g_772
        (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 1L), 1L), // p_1294->g_774
        (VECTOR(uint32_t, 8))(0x3F549C40L, (VECTOR(uint32_t, 4))(0x3F549C40L, (VECTOR(uint32_t, 2))(0x3F549C40L, 0xE4C6131DL), 0xE4C6131DL), 0xE4C6131DL, 0x3F549C40L, 0xE4C6131DL), // p_1294->g_782
        &p_1294->g_302[5], // p_1294->g_810
        {0x35L,0x0DDFL,0x81L,-7L,0x1BE8ED42L,3UL,0xDC41L,0L,0x4AL}, // p_1294->g_831
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), // p_1294->g_848
        (VECTOR(int32_t, 4))(0x2C16D1E6L, (VECTOR(int32_t, 2))(0x2C16D1E6L, (-9L)), (-9L)), // p_1294->g_849
        &p_1294->g_376[0], // p_1294->g_867
        {&p_1294->g_376[0],&p_1294->g_376[0],&p_1294->g_376[0]}, // p_1294->g_868
        {0x14L,0x79B4L,0x0FL,0x28EAL,1L,0x82L,65526UL,0x6B492C8BL,0xB5L}, // p_1294->g_871
        (VECTOR(uint8_t, 8))(0xA8L, (VECTOR(uint8_t, 4))(0xA8L, (VECTOR(uint8_t, 2))(0xA8L, 255UL), 255UL), 255UL, 0xA8L, 255UL), // p_1294->g_893
        (VECTOR(int32_t, 2))(0L, (-1L)), // p_1294->g_903
        (void*)0, // p_1294->g_908
        &p_1294->g_908, // p_1294->g_907
        &p_1294->g_907, // p_1294->g_909
        {&p_1294->g_186}, // p_1294->g_936
        &p_1294->g_936[0], // p_1294->g_935
        (VECTOR(int64_t, 16))(0x089684DE4468F89DL, (VECTOR(int64_t, 4))(0x089684DE4468F89DL, (VECTOR(int64_t, 2))(0x089684DE4468F89DL, (-1L)), (-1L)), (-1L), 0x089684DE4468F89DL, (-1L), (VECTOR(int64_t, 2))(0x089684DE4468F89DL, (-1L)), (VECTOR(int64_t, 2))(0x089684DE4468F89DL, (-1L)), 0x089684DE4468F89DL, (-1L), 0x089684DE4468F89DL, (-1L)), // p_1294->g_938
        {{7UL,{0x5DL,0x41A7L,0xA9L,0x3D40L,1L,0x31L,0x7E09L,0x0B235F72L,247UL},0x1088536CL,0xC7AB1CA55FBD7113L,0x79D73A0AL,0x94B4L},{7UL,{0x5DL,0x41A7L,0xA9L,0x3D40L,1L,0x31L,0x7E09L,0x0B235F72L,247UL},0x1088536CL,0xC7AB1CA55FBD7113L,0x79D73A0AL,0x94B4L},{7UL,{0x5DL,0x41A7L,0xA9L,0x3D40L,1L,0x31L,0x7E09L,0x0B235F72L,247UL},0x1088536CL,0xC7AB1CA55FBD7113L,0x79D73A0AL,0x94B4L},{7UL,{0x5DL,0x41A7L,0xA9L,0x3D40L,1L,0x31L,0x7E09L,0x0B235F72L,247UL},0x1088536CL,0xC7AB1CA55FBD7113L,0x79D73A0AL,0x94B4L},{7UL,{0x5DL,0x41A7L,0xA9L,0x3D40L,1L,0x31L,0x7E09L,0x0B235F72L,247UL},0x1088536CL,0xC7AB1CA55FBD7113L,0x79D73A0AL,0x94B4L},{7UL,{0x5DL,0x41A7L,0xA9L,0x3D40L,1L,0x31L,0x7E09L,0x0B235F72L,247UL},0x1088536CL,0xC7AB1CA55FBD7113L,0x79D73A0AL,0x94B4L},{7UL,{0x5DL,0x41A7L,0xA9L,0x3D40L,1L,0x31L,0x7E09L,0x0B235F72L,247UL},0x1088536CL,0xC7AB1CA55FBD7113L,0x79D73A0AL,0x94B4L}}, // p_1294->g_946
        {{{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x1DL,65535UL,1UL,4L,0x00E7787EL,0x3AL,0UL,-8L,2UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x1DL,65535UL,1UL,4L,0x00E7787EL,0x3AL,0UL,-8L,2UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x1DL,65535UL,1UL,4L,0x00E7787EL,0x3AL,0UL,-8L,2UL}},{{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x1DL,65535UL,1UL,4L,0x00E7787EL,0x3AL,0UL,-8L,2UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x1DL,65535UL,1UL,4L,0x00E7787EL,0x3AL,0UL,-8L,2UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x1DL,65535UL,1UL,4L,0x00E7787EL,0x3AL,0UL,-8L,2UL}},{{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x1DL,65535UL,1UL,4L,0x00E7787EL,0x3AL,0UL,-8L,2UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x1DL,65535UL,1UL,4L,0x00E7787EL,0x3AL,0UL,-8L,2UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x1DL,65535UL,1UL,4L,0x00E7787EL,0x3AL,0UL,-8L,2UL}},{{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x1DL,65535UL,1UL,4L,0x00E7787EL,0x3AL,0UL,-8L,2UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x1DL,65535UL,1UL,4L,0x00E7787EL,0x3AL,0UL,-8L,2UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x60L,65528UL,0x72L,0x4C64L,0L,0xA6L,0x5DA3L,0x341DBEA1L,0UL},{0x1DL,65535UL,1UL,4L,0x00E7787EL,0x3AL,0UL,-8L,2UL}}}, // p_1294->g_948
        &p_1294->g_948[1][1], // p_1294->g_949
        {{0L,65535UL,0xB2L,-1L,6L,8UL,0x0D26L,0x62DEBB7DL,0x7FL},{0L,65535UL,0xB2L,-1L,6L,8UL,0x0D26L,0x62DEBB7DL,0x7FL},{0L,65535UL,0xB2L,-1L,6L,8UL,0x0D26L,0x62DEBB7DL,0x7FL},{0L,65535UL,0xB2L,-1L,6L,8UL,0x0D26L,0x62DEBB7DL,0x7FL},{0L,65535UL,0xB2L,-1L,6L,8UL,0x0D26L,0x62DEBB7DL,0x7FL},{0L,65535UL,0xB2L,-1L,6L,8UL,0x0D26L,0x62DEBB7DL,0x7FL},{0L,65535UL,0xB2L,-1L,6L,8UL,0x0D26L,0x62DEBB7DL,0x7FL},{0L,65535UL,0xB2L,-1L,6L,8UL,0x0D26L,0x62DEBB7DL,0x7FL},{0L,65535UL,0xB2L,-1L,6L,8UL,0x0D26L,0x62DEBB7DL,0x7FL}}, // p_1294->g_961
        6L, // p_1294->g_965
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x21L), 0x21L), // p_1294->g_979
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 254UL), 254UL), 254UL, 255UL, 254UL), // p_1294->g_980
        (VECTOR(uint8_t, 8))(0x69L, (VECTOR(uint8_t, 4))(0x69L, (VECTOR(uint8_t, 2))(0x69L, 0xC4L), 0xC4L), 0xC4L, 0x69L, 0xC4L), // p_1294->g_981
        {0x1D4DL,0x1D4DL,0x1D4DL,0x1D4DL,0x1D4DL}, // p_1294->g_984
        &p_1294->g_405, // p_1294->g_1014
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x69L), 0x69L), 0x69L, 0L, 0x69L), // p_1294->g_1021
        {{&p_1294->g_810},{&p_1294->g_810},{&p_1294->g_810},{&p_1294->g_810},{&p_1294->g_810},{&p_1294->g_810}}, // p_1294->g_1041
        &p_1294->g_1041[1][0], // p_1294->g_1040
        {&p_1294->g_174.f1,&p_1294->g_831,&p_1294->g_174.f1,&p_1294->g_174.f1,&p_1294->g_831,&p_1294->g_174.f1}, // p_1294->g_1066
        &p_1294->g_1066[3], // p_1294->g_1065
        (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x7B0C756BE3A03A93L), 0x7B0C756BE3A03A93L), // p_1294->g_1078
        {0xC3F4D349L,{0x0DL,0xE321L,0x9EL,4L,-6L,6UL,0x9326L,0x5ECF48BBL,0xCAL},0x53103012L,0x7EBA8BBD90361942L,-4L,0xDB82L}, // p_1294->g_1083
        (VECTOR(uint64_t, 8))(0xD043B122CC832F52L, (VECTOR(uint64_t, 4))(0xD043B122CC832F52L, (VECTOR(uint64_t, 2))(0xD043B122CC832F52L, 4UL), 4UL), 4UL, 0xD043B122CC832F52L, 4UL), // p_1294->g_1089
        (VECTOR(int8_t, 16))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x0AL), 0x0AL), 0x0AL, (-8L), 0x0AL, (VECTOR(int8_t, 2))((-8L), 0x0AL), (VECTOR(int8_t, 2))((-8L), 0x0AL), (-8L), 0x0AL, (-8L), 0x0AL), // p_1294->g_1102
        (VECTOR(int8_t, 2))(0x2BL, 0L), // p_1294->g_1104
        (VECTOR(int8_t, 4))(0x40L, (VECTOR(int8_t, 2))(0x40L, (-4L)), (-4L)), // p_1294->g_1106
        (VECTOR(int8_t, 8))(0x4CL, (VECTOR(int8_t, 4))(0x4CL, (VECTOR(int8_t, 2))(0x4CL, 0x78L), 0x78L), 0x78L, 0x4CL, 0x78L), // p_1294->g_1108
        (VECTOR(int8_t, 8))(0x13L, (VECTOR(int8_t, 4))(0x13L, (VECTOR(int8_t, 2))(0x13L, 0x57L), 0x57L), 0x57L, 0x13L, 0x57L), // p_1294->g_1109
        {0x6B6D06974B60E358L,(-1L),0x6B6D06974B60E358L,0x6B6D06974B60E358L,(-1L),0x6B6D06974B60E358L,0x6B6D06974B60E358L}, // p_1294->g_1120
        {{0x6C0BL},{0x6C0BL},{0x6C0BL},{0x6C0BL},{0x6C0BL}}, // p_1294->g_1163
        (void*)0, // p_1294->g_1167
        0x436525D683260D01L, // p_1294->g_1185
        (VECTOR(int32_t, 8))(0x1B128165L, (VECTOR(int32_t, 4))(0x1B128165L, (VECTOR(int32_t, 2))(0x1B128165L, 5L), 5L), 5L, 0x1B128165L, 5L), // p_1294->g_1216
        (VECTOR(int32_t, 2))(1L, 1L), // p_1294->g_1218
        &p_1294->g_481.f6, // p_1294->g_1225
        (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0x94L), 0x94L), // p_1294->g_1240
        {{0xF636E03DL,{0L,0xDEB8L,0x76L,0x482FL,0x554E8439L,255UL,0x3DEDL,1L,0x8CL},0x456AEE2CL,0x313EB04FFBB39CCDL,-10L,6UL},{2UL,{7L,0x813FL,255UL,-1L,0x358143CDL,9UL,0xAC2DL,0L,255UL},1UL,0UL,0x31953D58L,0x31D5L},{0xF636E03DL,{0L,0xDEB8L,0x76L,0x482FL,0x554E8439L,255UL,0x3DEDL,1L,0x8CL},0x456AEE2CL,0x313EB04FFBB39CCDL,-10L,6UL},{0xF636E03DL,{0L,0xDEB8L,0x76L,0x482FL,0x554E8439L,255UL,0x3DEDL,1L,0x8CL},0x456AEE2CL,0x313EB04FFBB39CCDL,-10L,6UL},{2UL,{7L,0x813FL,255UL,-1L,0x358143CDL,9UL,0xAC2DL,0L,255UL},1UL,0UL,0x31953D58L,0x31D5L},{0xF636E03DL,{0L,0xDEB8L,0x76L,0x482FL,0x554E8439L,255UL,0x3DEDL,1L,0x8CL},0x456AEE2CL,0x313EB04FFBB39CCDL,-10L,6UL},{0xF636E03DL,{0L,0xDEB8L,0x76L,0x482FL,0x554E8439L,255UL,0x3DEDL,1L,0x8CL},0x456AEE2CL,0x313EB04FFBB39CCDL,-10L,6UL}}, // p_1294->g_1241
        (VECTOR(int8_t, 2))((-2L), 1L), // p_1294->g_1271
        (VECTOR(uint64_t, 8))(0xE1B436CBB8C67BF2L, (VECTOR(uint64_t, 4))(0xE1B436CBB8C67BF2L, (VECTOR(uint64_t, 2))(0xE1B436CBB8C67BF2L, 0x798B0D6160BD46BFL), 0x798B0D6160BD46BFL), 0x798B0D6160BD46BFL, 0xE1B436CBB8C67BF2L, 0x798B0D6160BD46BFL), // p_1294->g_1274
        (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL), // p_1294->g_1277
        (VECTOR(uint64_t, 2))(7UL, 0x2FC582F78A697215L), // p_1294->g_1278
        (VECTOR(uint8_t, 4))(0xB1L, (VECTOR(uint8_t, 2))(0xB1L, 0UL), 0UL), // p_1294->g_1280
        0, // p_1294->v_collective
        sequence_input[get_global_id(0)], // p_1294->global_0_offset
        sequence_input[get_global_id(1)], // p_1294->global_1_offset
        sequence_input[get_global_id(2)], // p_1294->global_2_offset
        sequence_input[get_local_id(0)], // p_1294->local_0_offset
        sequence_input[get_local_id(1)], // p_1294->local_1_offset
        sequence_input[get_local_id(2)], // p_1294->local_2_offset
        sequence_input[get_group_id(0)], // p_1294->group_0_offset
        sequence_input[get_group_id(1)], // p_1294->group_1_offset
        sequence_input[get_group_id(2)], // p_1294->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 36)), permutations[0][get_linear_local_id()])), // p_1294->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1295 = c_1296;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1294);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1294->g_4.x, "p_1294->g_4.x", print_hash_value);
    transparent_crc(p_1294->g_4.y, "p_1294->g_4.y", print_hash_value);
    transparent_crc(p_1294->g_39, "p_1294->g_39", print_hash_value);
    transparent_crc(p_1294->g_60.f0, "p_1294->g_60.f0", print_hash_value);
    transparent_crc(p_1294->g_60.f1.f0, "p_1294->g_60.f1.f0", print_hash_value);
    transparent_crc(p_1294->g_60.f1.f1, "p_1294->g_60.f1.f1", print_hash_value);
    transparent_crc(p_1294->g_60.f1.f2, "p_1294->g_60.f1.f2", print_hash_value);
    transparent_crc(p_1294->g_60.f1.f3, "p_1294->g_60.f1.f3", print_hash_value);
    transparent_crc(p_1294->g_60.f1.f4, "p_1294->g_60.f1.f4", print_hash_value);
    transparent_crc(p_1294->g_60.f1.f5, "p_1294->g_60.f1.f5", print_hash_value);
    transparent_crc(p_1294->g_60.f1.f6, "p_1294->g_60.f1.f6", print_hash_value);
    transparent_crc(p_1294->g_60.f1.f7, "p_1294->g_60.f1.f7", print_hash_value);
    transparent_crc(p_1294->g_60.f1.f8, "p_1294->g_60.f1.f8", print_hash_value);
    transparent_crc(p_1294->g_60.f2, "p_1294->g_60.f2", print_hash_value);
    transparent_crc(p_1294->g_60.f3, "p_1294->g_60.f3", print_hash_value);
    transparent_crc(p_1294->g_60.f4, "p_1294->g_60.f4", print_hash_value);
    transparent_crc(p_1294->g_60.f5, "p_1294->g_60.f5", print_hash_value);
    transparent_crc(p_1294->g_69.x, "p_1294->g_69.x", print_hash_value);
    transparent_crc(p_1294->g_69.y, "p_1294->g_69.y", print_hash_value);
    transparent_crc(p_1294->g_81.f0, "p_1294->g_81.f0", print_hash_value);
    transparent_crc(p_1294->g_81.f1.f0, "p_1294->g_81.f1.f0", print_hash_value);
    transparent_crc(p_1294->g_81.f1.f1, "p_1294->g_81.f1.f1", print_hash_value);
    transparent_crc(p_1294->g_81.f1.f2, "p_1294->g_81.f1.f2", print_hash_value);
    transparent_crc(p_1294->g_81.f1.f3, "p_1294->g_81.f1.f3", print_hash_value);
    transparent_crc(p_1294->g_81.f1.f4, "p_1294->g_81.f1.f4", print_hash_value);
    transparent_crc(p_1294->g_81.f1.f5, "p_1294->g_81.f1.f5", print_hash_value);
    transparent_crc(p_1294->g_81.f1.f6, "p_1294->g_81.f1.f6", print_hash_value);
    transparent_crc(p_1294->g_81.f1.f7, "p_1294->g_81.f1.f7", print_hash_value);
    transparent_crc(p_1294->g_81.f1.f8, "p_1294->g_81.f1.f8", print_hash_value);
    transparent_crc(p_1294->g_81.f2, "p_1294->g_81.f2", print_hash_value);
    transparent_crc(p_1294->g_81.f3, "p_1294->g_81.f3", print_hash_value);
    transparent_crc(p_1294->g_81.f4, "p_1294->g_81.f4", print_hash_value);
    transparent_crc(p_1294->g_81.f5, "p_1294->g_81.f5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1294->g_82[i][j][k], "p_1294->g_82[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1294->g_86, "p_1294->g_86", print_hash_value);
    transparent_crc(p_1294->g_113.x, "p_1294->g_113.x", print_hash_value);
    transparent_crc(p_1294->g_113.y, "p_1294->g_113.y", print_hash_value);
    transparent_crc(p_1294->g_113.z, "p_1294->g_113.z", print_hash_value);
    transparent_crc(p_1294->g_113.w, "p_1294->g_113.w", print_hash_value);
    transparent_crc(p_1294->g_125.x, "p_1294->g_125.x", print_hash_value);
    transparent_crc(p_1294->g_125.y, "p_1294->g_125.y", print_hash_value);
    transparent_crc(p_1294->g_125.z, "p_1294->g_125.z", print_hash_value);
    transparent_crc(p_1294->g_125.w, "p_1294->g_125.w", print_hash_value);
    transparent_crc(p_1294->g_127.s0, "p_1294->g_127.s0", print_hash_value);
    transparent_crc(p_1294->g_127.s1, "p_1294->g_127.s1", print_hash_value);
    transparent_crc(p_1294->g_127.s2, "p_1294->g_127.s2", print_hash_value);
    transparent_crc(p_1294->g_127.s3, "p_1294->g_127.s3", print_hash_value);
    transparent_crc(p_1294->g_127.s4, "p_1294->g_127.s4", print_hash_value);
    transparent_crc(p_1294->g_127.s5, "p_1294->g_127.s5", print_hash_value);
    transparent_crc(p_1294->g_127.s6, "p_1294->g_127.s6", print_hash_value);
    transparent_crc(p_1294->g_127.s7, "p_1294->g_127.s7", print_hash_value);
    transparent_crc(p_1294->g_127.s8, "p_1294->g_127.s8", print_hash_value);
    transparent_crc(p_1294->g_127.s9, "p_1294->g_127.s9", print_hash_value);
    transparent_crc(p_1294->g_127.sa, "p_1294->g_127.sa", print_hash_value);
    transparent_crc(p_1294->g_127.sb, "p_1294->g_127.sb", print_hash_value);
    transparent_crc(p_1294->g_127.sc, "p_1294->g_127.sc", print_hash_value);
    transparent_crc(p_1294->g_127.sd, "p_1294->g_127.sd", print_hash_value);
    transparent_crc(p_1294->g_127.se, "p_1294->g_127.se", print_hash_value);
    transparent_crc(p_1294->g_127.sf, "p_1294->g_127.sf", print_hash_value);
    transparent_crc(p_1294->g_138, "p_1294->g_138", print_hash_value);
    transparent_crc(p_1294->g_162.s0, "p_1294->g_162.s0", print_hash_value);
    transparent_crc(p_1294->g_162.s1, "p_1294->g_162.s1", print_hash_value);
    transparent_crc(p_1294->g_162.s2, "p_1294->g_162.s2", print_hash_value);
    transparent_crc(p_1294->g_162.s3, "p_1294->g_162.s3", print_hash_value);
    transparent_crc(p_1294->g_162.s4, "p_1294->g_162.s4", print_hash_value);
    transparent_crc(p_1294->g_162.s5, "p_1294->g_162.s5", print_hash_value);
    transparent_crc(p_1294->g_162.s6, "p_1294->g_162.s6", print_hash_value);
    transparent_crc(p_1294->g_162.s7, "p_1294->g_162.s7", print_hash_value);
    transparent_crc(p_1294->g_162.s8, "p_1294->g_162.s8", print_hash_value);
    transparent_crc(p_1294->g_162.s9, "p_1294->g_162.s9", print_hash_value);
    transparent_crc(p_1294->g_162.sa, "p_1294->g_162.sa", print_hash_value);
    transparent_crc(p_1294->g_162.sb, "p_1294->g_162.sb", print_hash_value);
    transparent_crc(p_1294->g_162.sc, "p_1294->g_162.sc", print_hash_value);
    transparent_crc(p_1294->g_162.sd, "p_1294->g_162.sd", print_hash_value);
    transparent_crc(p_1294->g_162.se, "p_1294->g_162.se", print_hash_value);
    transparent_crc(p_1294->g_162.sf, "p_1294->g_162.sf", print_hash_value);
    transparent_crc(p_1294->g_174.f0, "p_1294->g_174.f0", print_hash_value);
    transparent_crc(p_1294->g_174.f1.f0, "p_1294->g_174.f1.f0", print_hash_value);
    transparent_crc(p_1294->g_174.f1.f1, "p_1294->g_174.f1.f1", print_hash_value);
    transparent_crc(p_1294->g_174.f1.f2, "p_1294->g_174.f1.f2", print_hash_value);
    transparent_crc(p_1294->g_174.f1.f3, "p_1294->g_174.f1.f3", print_hash_value);
    transparent_crc(p_1294->g_174.f1.f4, "p_1294->g_174.f1.f4", print_hash_value);
    transparent_crc(p_1294->g_174.f1.f5, "p_1294->g_174.f1.f5", print_hash_value);
    transparent_crc(p_1294->g_174.f1.f6, "p_1294->g_174.f1.f6", print_hash_value);
    transparent_crc(p_1294->g_174.f1.f7, "p_1294->g_174.f1.f7", print_hash_value);
    transparent_crc(p_1294->g_174.f1.f8, "p_1294->g_174.f1.f8", print_hash_value);
    transparent_crc(p_1294->g_174.f2, "p_1294->g_174.f2", print_hash_value);
    transparent_crc(p_1294->g_174.f3, "p_1294->g_174.f3", print_hash_value);
    transparent_crc(p_1294->g_174.f4, "p_1294->g_174.f4", print_hash_value);
    transparent_crc(p_1294->g_174.f5, "p_1294->g_174.f5", print_hash_value);
    transparent_crc(p_1294->g_187.f0, "p_1294->g_187.f0", print_hash_value);
    transparent_crc(p_1294->g_187.f1.f0, "p_1294->g_187.f1.f0", print_hash_value);
    transparent_crc(p_1294->g_187.f1.f1, "p_1294->g_187.f1.f1", print_hash_value);
    transparent_crc(p_1294->g_187.f1.f2, "p_1294->g_187.f1.f2", print_hash_value);
    transparent_crc(p_1294->g_187.f1.f3, "p_1294->g_187.f1.f3", print_hash_value);
    transparent_crc(p_1294->g_187.f1.f4, "p_1294->g_187.f1.f4", print_hash_value);
    transparent_crc(p_1294->g_187.f1.f5, "p_1294->g_187.f1.f5", print_hash_value);
    transparent_crc(p_1294->g_187.f1.f6, "p_1294->g_187.f1.f6", print_hash_value);
    transparent_crc(p_1294->g_187.f1.f7, "p_1294->g_187.f1.f7", print_hash_value);
    transparent_crc(p_1294->g_187.f1.f8, "p_1294->g_187.f1.f8", print_hash_value);
    transparent_crc(p_1294->g_187.f2, "p_1294->g_187.f2", print_hash_value);
    transparent_crc(p_1294->g_187.f3, "p_1294->g_187.f3", print_hash_value);
    transparent_crc(p_1294->g_187.f4, "p_1294->g_187.f4", print_hash_value);
    transparent_crc(p_1294->g_187.f5, "p_1294->g_187.f5", print_hash_value);
    transparent_crc(p_1294->g_206.x, "p_1294->g_206.x", print_hash_value);
    transparent_crc(p_1294->g_206.y, "p_1294->g_206.y", print_hash_value);
    transparent_crc(p_1294->g_206.z, "p_1294->g_206.z", print_hash_value);
    transparent_crc(p_1294->g_206.w, "p_1294->g_206.w", print_hash_value);
    transparent_crc(p_1294->g_207, "p_1294->g_207", print_hash_value);
    transparent_crc(p_1294->g_217.x, "p_1294->g_217.x", print_hash_value);
    transparent_crc(p_1294->g_217.y, "p_1294->g_217.y", print_hash_value);
    transparent_crc(p_1294->g_217.z, "p_1294->g_217.z", print_hash_value);
    transparent_crc(p_1294->g_217.w, "p_1294->g_217.w", print_hash_value);
    transparent_crc(p_1294->g_222.s0, "p_1294->g_222.s0", print_hash_value);
    transparent_crc(p_1294->g_222.s1, "p_1294->g_222.s1", print_hash_value);
    transparent_crc(p_1294->g_222.s2, "p_1294->g_222.s2", print_hash_value);
    transparent_crc(p_1294->g_222.s3, "p_1294->g_222.s3", print_hash_value);
    transparent_crc(p_1294->g_222.s4, "p_1294->g_222.s4", print_hash_value);
    transparent_crc(p_1294->g_222.s5, "p_1294->g_222.s5", print_hash_value);
    transparent_crc(p_1294->g_222.s6, "p_1294->g_222.s6", print_hash_value);
    transparent_crc(p_1294->g_222.s7, "p_1294->g_222.s7", print_hash_value);
    transparent_crc(p_1294->g_222.s8, "p_1294->g_222.s8", print_hash_value);
    transparent_crc(p_1294->g_222.s9, "p_1294->g_222.s9", print_hash_value);
    transparent_crc(p_1294->g_222.sa, "p_1294->g_222.sa", print_hash_value);
    transparent_crc(p_1294->g_222.sb, "p_1294->g_222.sb", print_hash_value);
    transparent_crc(p_1294->g_222.sc, "p_1294->g_222.sc", print_hash_value);
    transparent_crc(p_1294->g_222.sd, "p_1294->g_222.sd", print_hash_value);
    transparent_crc(p_1294->g_222.se, "p_1294->g_222.se", print_hash_value);
    transparent_crc(p_1294->g_222.sf, "p_1294->g_222.sf", print_hash_value);
    transparent_crc(p_1294->g_228.f0, "p_1294->g_228.f0", print_hash_value);
    transparent_crc(p_1294->g_238.x, "p_1294->g_238.x", print_hash_value);
    transparent_crc(p_1294->g_238.y, "p_1294->g_238.y", print_hash_value);
    transparent_crc(p_1294->g_238.z, "p_1294->g_238.z", print_hash_value);
    transparent_crc(p_1294->g_238.w, "p_1294->g_238.w", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1294->g_253[i][j].f0, "p_1294->g_253[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1294->g_256[i][j][k].f0, "p_1294->g_256[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1294->g_263.s0, "p_1294->g_263.s0", print_hash_value);
    transparent_crc(p_1294->g_263.s1, "p_1294->g_263.s1", print_hash_value);
    transparent_crc(p_1294->g_263.s2, "p_1294->g_263.s2", print_hash_value);
    transparent_crc(p_1294->g_263.s3, "p_1294->g_263.s3", print_hash_value);
    transparent_crc(p_1294->g_263.s4, "p_1294->g_263.s4", print_hash_value);
    transparent_crc(p_1294->g_263.s5, "p_1294->g_263.s5", print_hash_value);
    transparent_crc(p_1294->g_263.s6, "p_1294->g_263.s6", print_hash_value);
    transparent_crc(p_1294->g_263.s7, "p_1294->g_263.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1294->g_302[i], "p_1294->g_302[i]", print_hash_value);

    }
    transparent_crc(p_1294->g_337.x, "p_1294->g_337.x", print_hash_value);
    transparent_crc(p_1294->g_337.y, "p_1294->g_337.y", print_hash_value);
    transparent_crc(p_1294->g_337.z, "p_1294->g_337.z", print_hash_value);
    transparent_crc(p_1294->g_337.w, "p_1294->g_337.w", print_hash_value);
    transparent_crc(p_1294->g_349.s0, "p_1294->g_349.s0", print_hash_value);
    transparent_crc(p_1294->g_349.s1, "p_1294->g_349.s1", print_hash_value);
    transparent_crc(p_1294->g_349.s2, "p_1294->g_349.s2", print_hash_value);
    transparent_crc(p_1294->g_349.s3, "p_1294->g_349.s3", print_hash_value);
    transparent_crc(p_1294->g_349.s4, "p_1294->g_349.s4", print_hash_value);
    transparent_crc(p_1294->g_349.s5, "p_1294->g_349.s5", print_hash_value);
    transparent_crc(p_1294->g_349.s6, "p_1294->g_349.s6", print_hash_value);
    transparent_crc(p_1294->g_349.s7, "p_1294->g_349.s7", print_hash_value);
    transparent_crc(p_1294->g_349.s8, "p_1294->g_349.s8", print_hash_value);
    transparent_crc(p_1294->g_349.s9, "p_1294->g_349.s9", print_hash_value);
    transparent_crc(p_1294->g_349.sa, "p_1294->g_349.sa", print_hash_value);
    transparent_crc(p_1294->g_349.sb, "p_1294->g_349.sb", print_hash_value);
    transparent_crc(p_1294->g_349.sc, "p_1294->g_349.sc", print_hash_value);
    transparent_crc(p_1294->g_349.sd, "p_1294->g_349.sd", print_hash_value);
    transparent_crc(p_1294->g_349.se, "p_1294->g_349.se", print_hash_value);
    transparent_crc(p_1294->g_349.sf, "p_1294->g_349.sf", print_hash_value);
    transparent_crc(p_1294->g_351.s0, "p_1294->g_351.s0", print_hash_value);
    transparent_crc(p_1294->g_351.s1, "p_1294->g_351.s1", print_hash_value);
    transparent_crc(p_1294->g_351.s2, "p_1294->g_351.s2", print_hash_value);
    transparent_crc(p_1294->g_351.s3, "p_1294->g_351.s3", print_hash_value);
    transparent_crc(p_1294->g_351.s4, "p_1294->g_351.s4", print_hash_value);
    transparent_crc(p_1294->g_351.s5, "p_1294->g_351.s5", print_hash_value);
    transparent_crc(p_1294->g_351.s6, "p_1294->g_351.s6", print_hash_value);
    transparent_crc(p_1294->g_351.s7, "p_1294->g_351.s7", print_hash_value);
    transparent_crc(p_1294->g_400, "p_1294->g_400", print_hash_value);
    transparent_crc(p_1294->g_404.f0, "p_1294->g_404.f0", print_hash_value);
    transparent_crc(p_1294->g_405.f0, "p_1294->g_405.f0", print_hash_value);
    transparent_crc(p_1294->g_406.f0, "p_1294->g_406.f0", print_hash_value);
    transparent_crc(p_1294->g_407.f0, "p_1294->g_407.f0", print_hash_value);
    transparent_crc(p_1294->g_408.f0, "p_1294->g_408.f0", print_hash_value);
    transparent_crc(p_1294->g_409.f0, "p_1294->g_409.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1294->g_410[i].f0, "p_1294->g_410[i].f0", print_hash_value);

    }
    transparent_crc(p_1294->g_411.f0, "p_1294->g_411.f0", print_hash_value);
    transparent_crc(p_1294->g_412.f0, "p_1294->g_412.f0", print_hash_value);
    transparent_crc(p_1294->g_413.f0, "p_1294->g_413.f0", print_hash_value);
    transparent_crc(p_1294->g_414.f0, "p_1294->g_414.f0", print_hash_value);
    transparent_crc(p_1294->g_419.x, "p_1294->g_419.x", print_hash_value);
    transparent_crc(p_1294->g_419.y, "p_1294->g_419.y", print_hash_value);
    transparent_crc(p_1294->g_428.x, "p_1294->g_428.x", print_hash_value);
    transparent_crc(p_1294->g_428.y, "p_1294->g_428.y", print_hash_value);
    transparent_crc(p_1294->g_444, "p_1294->g_444", print_hash_value);
    transparent_crc(p_1294->g_481.f0, "p_1294->g_481.f0", print_hash_value);
    transparent_crc(p_1294->g_481.f1, "p_1294->g_481.f1", print_hash_value);
    transparent_crc(p_1294->g_481.f2, "p_1294->g_481.f2", print_hash_value);
    transparent_crc(p_1294->g_481.f3, "p_1294->g_481.f3", print_hash_value);
    transparent_crc(p_1294->g_481.f4, "p_1294->g_481.f4", print_hash_value);
    transparent_crc(p_1294->g_481.f5, "p_1294->g_481.f5", print_hash_value);
    transparent_crc(p_1294->g_481.f6, "p_1294->g_481.f6", print_hash_value);
    transparent_crc(p_1294->g_481.f7, "p_1294->g_481.f7", print_hash_value);
    transparent_crc(p_1294->g_481.f8, "p_1294->g_481.f8", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1294->g_497[i][j][k], "p_1294->g_497[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1294->g_536.x, "p_1294->g_536.x", print_hash_value);
    transparent_crc(p_1294->g_536.y, "p_1294->g_536.y", print_hash_value);
    transparent_crc(p_1294->g_583.x, "p_1294->g_583.x", print_hash_value);
    transparent_crc(p_1294->g_583.y, "p_1294->g_583.y", print_hash_value);
    transparent_crc(p_1294->g_586, "p_1294->g_586", print_hash_value);
    transparent_crc(p_1294->g_620.s0, "p_1294->g_620.s0", print_hash_value);
    transparent_crc(p_1294->g_620.s1, "p_1294->g_620.s1", print_hash_value);
    transparent_crc(p_1294->g_620.s2, "p_1294->g_620.s2", print_hash_value);
    transparent_crc(p_1294->g_620.s3, "p_1294->g_620.s3", print_hash_value);
    transparent_crc(p_1294->g_620.s4, "p_1294->g_620.s4", print_hash_value);
    transparent_crc(p_1294->g_620.s5, "p_1294->g_620.s5", print_hash_value);
    transparent_crc(p_1294->g_620.s6, "p_1294->g_620.s6", print_hash_value);
    transparent_crc(p_1294->g_620.s7, "p_1294->g_620.s7", print_hash_value);
    transparent_crc(p_1294->g_620.s8, "p_1294->g_620.s8", print_hash_value);
    transparent_crc(p_1294->g_620.s9, "p_1294->g_620.s9", print_hash_value);
    transparent_crc(p_1294->g_620.sa, "p_1294->g_620.sa", print_hash_value);
    transparent_crc(p_1294->g_620.sb, "p_1294->g_620.sb", print_hash_value);
    transparent_crc(p_1294->g_620.sc, "p_1294->g_620.sc", print_hash_value);
    transparent_crc(p_1294->g_620.sd, "p_1294->g_620.sd", print_hash_value);
    transparent_crc(p_1294->g_620.se, "p_1294->g_620.se", print_hash_value);
    transparent_crc(p_1294->g_620.sf, "p_1294->g_620.sf", print_hash_value);
    transparent_crc(p_1294->g_625.s0, "p_1294->g_625.s0", print_hash_value);
    transparent_crc(p_1294->g_625.s1, "p_1294->g_625.s1", print_hash_value);
    transparent_crc(p_1294->g_625.s2, "p_1294->g_625.s2", print_hash_value);
    transparent_crc(p_1294->g_625.s3, "p_1294->g_625.s3", print_hash_value);
    transparent_crc(p_1294->g_625.s4, "p_1294->g_625.s4", print_hash_value);
    transparent_crc(p_1294->g_625.s5, "p_1294->g_625.s5", print_hash_value);
    transparent_crc(p_1294->g_625.s6, "p_1294->g_625.s6", print_hash_value);
    transparent_crc(p_1294->g_625.s7, "p_1294->g_625.s7", print_hash_value);
    transparent_crc(p_1294->g_627.x, "p_1294->g_627.x", print_hash_value);
    transparent_crc(p_1294->g_627.y, "p_1294->g_627.y", print_hash_value);
    transparent_crc(p_1294->g_677, "p_1294->g_677", print_hash_value);
    transparent_crc(p_1294->g_699.x, "p_1294->g_699.x", print_hash_value);
    transparent_crc(p_1294->g_699.y, "p_1294->g_699.y", print_hash_value);
    transparent_crc(p_1294->g_699.z, "p_1294->g_699.z", print_hash_value);
    transparent_crc(p_1294->g_699.w, "p_1294->g_699.w", print_hash_value);
    transparent_crc(p_1294->g_734.x, "p_1294->g_734.x", print_hash_value);
    transparent_crc(p_1294->g_734.y, "p_1294->g_734.y", print_hash_value);
    transparent_crc(p_1294->g_764.x, "p_1294->g_764.x", print_hash_value);
    transparent_crc(p_1294->g_764.y, "p_1294->g_764.y", print_hash_value);
    transparent_crc(p_1294->g_772.s0, "p_1294->g_772.s0", print_hash_value);
    transparent_crc(p_1294->g_772.s1, "p_1294->g_772.s1", print_hash_value);
    transparent_crc(p_1294->g_772.s2, "p_1294->g_772.s2", print_hash_value);
    transparent_crc(p_1294->g_772.s3, "p_1294->g_772.s3", print_hash_value);
    transparent_crc(p_1294->g_772.s4, "p_1294->g_772.s4", print_hash_value);
    transparent_crc(p_1294->g_772.s5, "p_1294->g_772.s5", print_hash_value);
    transparent_crc(p_1294->g_772.s6, "p_1294->g_772.s6", print_hash_value);
    transparent_crc(p_1294->g_772.s7, "p_1294->g_772.s7", print_hash_value);
    transparent_crc(p_1294->g_774.x, "p_1294->g_774.x", print_hash_value);
    transparent_crc(p_1294->g_774.y, "p_1294->g_774.y", print_hash_value);
    transparent_crc(p_1294->g_774.z, "p_1294->g_774.z", print_hash_value);
    transparent_crc(p_1294->g_774.w, "p_1294->g_774.w", print_hash_value);
    transparent_crc(p_1294->g_782.s0, "p_1294->g_782.s0", print_hash_value);
    transparent_crc(p_1294->g_782.s1, "p_1294->g_782.s1", print_hash_value);
    transparent_crc(p_1294->g_782.s2, "p_1294->g_782.s2", print_hash_value);
    transparent_crc(p_1294->g_782.s3, "p_1294->g_782.s3", print_hash_value);
    transparent_crc(p_1294->g_782.s4, "p_1294->g_782.s4", print_hash_value);
    transparent_crc(p_1294->g_782.s5, "p_1294->g_782.s5", print_hash_value);
    transparent_crc(p_1294->g_782.s6, "p_1294->g_782.s6", print_hash_value);
    transparent_crc(p_1294->g_782.s7, "p_1294->g_782.s7", print_hash_value);
    transparent_crc(p_1294->g_831.f0, "p_1294->g_831.f0", print_hash_value);
    transparent_crc(p_1294->g_831.f1, "p_1294->g_831.f1", print_hash_value);
    transparent_crc(p_1294->g_831.f2, "p_1294->g_831.f2", print_hash_value);
    transparent_crc(p_1294->g_831.f3, "p_1294->g_831.f3", print_hash_value);
    transparent_crc(p_1294->g_831.f4, "p_1294->g_831.f4", print_hash_value);
    transparent_crc(p_1294->g_831.f5, "p_1294->g_831.f5", print_hash_value);
    transparent_crc(p_1294->g_831.f6, "p_1294->g_831.f6", print_hash_value);
    transparent_crc(p_1294->g_831.f7, "p_1294->g_831.f7", print_hash_value);
    transparent_crc(p_1294->g_831.f8, "p_1294->g_831.f8", print_hash_value);
    transparent_crc(p_1294->g_848.x, "p_1294->g_848.x", print_hash_value);
    transparent_crc(p_1294->g_848.y, "p_1294->g_848.y", print_hash_value);
    transparent_crc(p_1294->g_848.z, "p_1294->g_848.z", print_hash_value);
    transparent_crc(p_1294->g_848.w, "p_1294->g_848.w", print_hash_value);
    transparent_crc(p_1294->g_849.x, "p_1294->g_849.x", print_hash_value);
    transparent_crc(p_1294->g_849.y, "p_1294->g_849.y", print_hash_value);
    transparent_crc(p_1294->g_849.z, "p_1294->g_849.z", print_hash_value);
    transparent_crc(p_1294->g_849.w, "p_1294->g_849.w", print_hash_value);
    transparent_crc(p_1294->g_871.f0, "p_1294->g_871.f0", print_hash_value);
    transparent_crc(p_1294->g_871.f1, "p_1294->g_871.f1", print_hash_value);
    transparent_crc(p_1294->g_871.f2, "p_1294->g_871.f2", print_hash_value);
    transparent_crc(p_1294->g_871.f3, "p_1294->g_871.f3", print_hash_value);
    transparent_crc(p_1294->g_871.f4, "p_1294->g_871.f4", print_hash_value);
    transparent_crc(p_1294->g_871.f5, "p_1294->g_871.f5", print_hash_value);
    transparent_crc(p_1294->g_871.f6, "p_1294->g_871.f6", print_hash_value);
    transparent_crc(p_1294->g_871.f7, "p_1294->g_871.f7", print_hash_value);
    transparent_crc(p_1294->g_871.f8, "p_1294->g_871.f8", print_hash_value);
    transparent_crc(p_1294->g_893.s0, "p_1294->g_893.s0", print_hash_value);
    transparent_crc(p_1294->g_893.s1, "p_1294->g_893.s1", print_hash_value);
    transparent_crc(p_1294->g_893.s2, "p_1294->g_893.s2", print_hash_value);
    transparent_crc(p_1294->g_893.s3, "p_1294->g_893.s3", print_hash_value);
    transparent_crc(p_1294->g_893.s4, "p_1294->g_893.s4", print_hash_value);
    transparent_crc(p_1294->g_893.s5, "p_1294->g_893.s5", print_hash_value);
    transparent_crc(p_1294->g_893.s6, "p_1294->g_893.s6", print_hash_value);
    transparent_crc(p_1294->g_893.s7, "p_1294->g_893.s7", print_hash_value);
    transparent_crc(p_1294->g_903.x, "p_1294->g_903.x", print_hash_value);
    transparent_crc(p_1294->g_903.y, "p_1294->g_903.y", print_hash_value);
    transparent_crc(p_1294->g_938.s0, "p_1294->g_938.s0", print_hash_value);
    transparent_crc(p_1294->g_938.s1, "p_1294->g_938.s1", print_hash_value);
    transparent_crc(p_1294->g_938.s2, "p_1294->g_938.s2", print_hash_value);
    transparent_crc(p_1294->g_938.s3, "p_1294->g_938.s3", print_hash_value);
    transparent_crc(p_1294->g_938.s4, "p_1294->g_938.s4", print_hash_value);
    transparent_crc(p_1294->g_938.s5, "p_1294->g_938.s5", print_hash_value);
    transparent_crc(p_1294->g_938.s6, "p_1294->g_938.s6", print_hash_value);
    transparent_crc(p_1294->g_938.s7, "p_1294->g_938.s7", print_hash_value);
    transparent_crc(p_1294->g_938.s8, "p_1294->g_938.s8", print_hash_value);
    transparent_crc(p_1294->g_938.s9, "p_1294->g_938.s9", print_hash_value);
    transparent_crc(p_1294->g_938.sa, "p_1294->g_938.sa", print_hash_value);
    transparent_crc(p_1294->g_938.sb, "p_1294->g_938.sb", print_hash_value);
    transparent_crc(p_1294->g_938.sc, "p_1294->g_938.sc", print_hash_value);
    transparent_crc(p_1294->g_938.sd, "p_1294->g_938.sd", print_hash_value);
    transparent_crc(p_1294->g_938.se, "p_1294->g_938.se", print_hash_value);
    transparent_crc(p_1294->g_938.sf, "p_1294->g_938.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1294->g_946[i].f0, "p_1294->g_946[i].f0", print_hash_value);
        transparent_crc(p_1294->g_946[i].f1.f0, "p_1294->g_946[i].f1.f0", print_hash_value);
        transparent_crc(p_1294->g_946[i].f1.f1, "p_1294->g_946[i].f1.f1", print_hash_value);
        transparent_crc(p_1294->g_946[i].f1.f2, "p_1294->g_946[i].f1.f2", print_hash_value);
        transparent_crc(p_1294->g_946[i].f1.f3, "p_1294->g_946[i].f1.f3", print_hash_value);
        transparent_crc(p_1294->g_946[i].f1.f4, "p_1294->g_946[i].f1.f4", print_hash_value);
        transparent_crc(p_1294->g_946[i].f1.f5, "p_1294->g_946[i].f1.f5", print_hash_value);
        transparent_crc(p_1294->g_946[i].f1.f6, "p_1294->g_946[i].f1.f6", print_hash_value);
        transparent_crc(p_1294->g_946[i].f1.f7, "p_1294->g_946[i].f1.f7", print_hash_value);
        transparent_crc(p_1294->g_946[i].f1.f8, "p_1294->g_946[i].f1.f8", print_hash_value);
        transparent_crc(p_1294->g_946[i].f2, "p_1294->g_946[i].f2", print_hash_value);
        transparent_crc(p_1294->g_946[i].f3, "p_1294->g_946[i].f3", print_hash_value);
        transparent_crc(p_1294->g_946[i].f4, "p_1294->g_946[i].f4", print_hash_value);
        transparent_crc(p_1294->g_946[i].f5, "p_1294->g_946[i].f5", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1294->g_948[i][j].f0, "p_1294->g_948[i][j].f0", print_hash_value);
            transparent_crc(p_1294->g_948[i][j].f1, "p_1294->g_948[i][j].f1", print_hash_value);
            transparent_crc(p_1294->g_948[i][j].f2, "p_1294->g_948[i][j].f2", print_hash_value);
            transparent_crc(p_1294->g_948[i][j].f3, "p_1294->g_948[i][j].f3", print_hash_value);
            transparent_crc(p_1294->g_948[i][j].f4, "p_1294->g_948[i][j].f4", print_hash_value);
            transparent_crc(p_1294->g_948[i][j].f5, "p_1294->g_948[i][j].f5", print_hash_value);
            transparent_crc(p_1294->g_948[i][j].f6, "p_1294->g_948[i][j].f6", print_hash_value);
            transparent_crc(p_1294->g_948[i][j].f7, "p_1294->g_948[i][j].f7", print_hash_value);
            transparent_crc(p_1294->g_948[i][j].f8, "p_1294->g_948[i][j].f8", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1294->g_961[i].f0, "p_1294->g_961[i].f0", print_hash_value);
        transparent_crc(p_1294->g_961[i].f1, "p_1294->g_961[i].f1", print_hash_value);
        transparent_crc(p_1294->g_961[i].f2, "p_1294->g_961[i].f2", print_hash_value);
        transparent_crc(p_1294->g_961[i].f3, "p_1294->g_961[i].f3", print_hash_value);
        transparent_crc(p_1294->g_961[i].f4, "p_1294->g_961[i].f4", print_hash_value);
        transparent_crc(p_1294->g_961[i].f5, "p_1294->g_961[i].f5", print_hash_value);
        transparent_crc(p_1294->g_961[i].f6, "p_1294->g_961[i].f6", print_hash_value);
        transparent_crc(p_1294->g_961[i].f7, "p_1294->g_961[i].f7", print_hash_value);
        transparent_crc(p_1294->g_961[i].f8, "p_1294->g_961[i].f8", print_hash_value);

    }
    transparent_crc(p_1294->g_965, "p_1294->g_965", print_hash_value);
    transparent_crc(p_1294->g_979.x, "p_1294->g_979.x", print_hash_value);
    transparent_crc(p_1294->g_979.y, "p_1294->g_979.y", print_hash_value);
    transparent_crc(p_1294->g_979.z, "p_1294->g_979.z", print_hash_value);
    transparent_crc(p_1294->g_979.w, "p_1294->g_979.w", print_hash_value);
    transparent_crc(p_1294->g_980.s0, "p_1294->g_980.s0", print_hash_value);
    transparent_crc(p_1294->g_980.s1, "p_1294->g_980.s1", print_hash_value);
    transparent_crc(p_1294->g_980.s2, "p_1294->g_980.s2", print_hash_value);
    transparent_crc(p_1294->g_980.s3, "p_1294->g_980.s3", print_hash_value);
    transparent_crc(p_1294->g_980.s4, "p_1294->g_980.s4", print_hash_value);
    transparent_crc(p_1294->g_980.s5, "p_1294->g_980.s5", print_hash_value);
    transparent_crc(p_1294->g_980.s6, "p_1294->g_980.s6", print_hash_value);
    transparent_crc(p_1294->g_980.s7, "p_1294->g_980.s7", print_hash_value);
    transparent_crc(p_1294->g_981.s0, "p_1294->g_981.s0", print_hash_value);
    transparent_crc(p_1294->g_981.s1, "p_1294->g_981.s1", print_hash_value);
    transparent_crc(p_1294->g_981.s2, "p_1294->g_981.s2", print_hash_value);
    transparent_crc(p_1294->g_981.s3, "p_1294->g_981.s3", print_hash_value);
    transparent_crc(p_1294->g_981.s4, "p_1294->g_981.s4", print_hash_value);
    transparent_crc(p_1294->g_981.s5, "p_1294->g_981.s5", print_hash_value);
    transparent_crc(p_1294->g_981.s6, "p_1294->g_981.s6", print_hash_value);
    transparent_crc(p_1294->g_981.s7, "p_1294->g_981.s7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1294->g_984[i], "p_1294->g_984[i]", print_hash_value);

    }
    transparent_crc(p_1294->g_1021.s0, "p_1294->g_1021.s0", print_hash_value);
    transparent_crc(p_1294->g_1021.s1, "p_1294->g_1021.s1", print_hash_value);
    transparent_crc(p_1294->g_1021.s2, "p_1294->g_1021.s2", print_hash_value);
    transparent_crc(p_1294->g_1021.s3, "p_1294->g_1021.s3", print_hash_value);
    transparent_crc(p_1294->g_1021.s4, "p_1294->g_1021.s4", print_hash_value);
    transparent_crc(p_1294->g_1021.s5, "p_1294->g_1021.s5", print_hash_value);
    transparent_crc(p_1294->g_1021.s6, "p_1294->g_1021.s6", print_hash_value);
    transparent_crc(p_1294->g_1021.s7, "p_1294->g_1021.s7", print_hash_value);
    transparent_crc(p_1294->g_1078.x, "p_1294->g_1078.x", print_hash_value);
    transparent_crc(p_1294->g_1078.y, "p_1294->g_1078.y", print_hash_value);
    transparent_crc(p_1294->g_1078.z, "p_1294->g_1078.z", print_hash_value);
    transparent_crc(p_1294->g_1078.w, "p_1294->g_1078.w", print_hash_value);
    transparent_crc(p_1294->g_1083.f0, "p_1294->g_1083.f0", print_hash_value);
    transparent_crc(p_1294->g_1083.f1.f0, "p_1294->g_1083.f1.f0", print_hash_value);
    transparent_crc(p_1294->g_1083.f1.f1, "p_1294->g_1083.f1.f1", print_hash_value);
    transparent_crc(p_1294->g_1083.f1.f2, "p_1294->g_1083.f1.f2", print_hash_value);
    transparent_crc(p_1294->g_1083.f1.f3, "p_1294->g_1083.f1.f3", print_hash_value);
    transparent_crc(p_1294->g_1083.f1.f4, "p_1294->g_1083.f1.f4", print_hash_value);
    transparent_crc(p_1294->g_1083.f1.f5, "p_1294->g_1083.f1.f5", print_hash_value);
    transparent_crc(p_1294->g_1083.f1.f6, "p_1294->g_1083.f1.f6", print_hash_value);
    transparent_crc(p_1294->g_1083.f1.f7, "p_1294->g_1083.f1.f7", print_hash_value);
    transparent_crc(p_1294->g_1083.f1.f8, "p_1294->g_1083.f1.f8", print_hash_value);
    transparent_crc(p_1294->g_1083.f2, "p_1294->g_1083.f2", print_hash_value);
    transparent_crc(p_1294->g_1083.f3, "p_1294->g_1083.f3", print_hash_value);
    transparent_crc(p_1294->g_1083.f4, "p_1294->g_1083.f4", print_hash_value);
    transparent_crc(p_1294->g_1083.f5, "p_1294->g_1083.f5", print_hash_value);
    transparent_crc(p_1294->g_1089.s0, "p_1294->g_1089.s0", print_hash_value);
    transparent_crc(p_1294->g_1089.s1, "p_1294->g_1089.s1", print_hash_value);
    transparent_crc(p_1294->g_1089.s2, "p_1294->g_1089.s2", print_hash_value);
    transparent_crc(p_1294->g_1089.s3, "p_1294->g_1089.s3", print_hash_value);
    transparent_crc(p_1294->g_1089.s4, "p_1294->g_1089.s4", print_hash_value);
    transparent_crc(p_1294->g_1089.s5, "p_1294->g_1089.s5", print_hash_value);
    transparent_crc(p_1294->g_1089.s6, "p_1294->g_1089.s6", print_hash_value);
    transparent_crc(p_1294->g_1089.s7, "p_1294->g_1089.s7", print_hash_value);
    transparent_crc(p_1294->g_1102.s0, "p_1294->g_1102.s0", print_hash_value);
    transparent_crc(p_1294->g_1102.s1, "p_1294->g_1102.s1", print_hash_value);
    transparent_crc(p_1294->g_1102.s2, "p_1294->g_1102.s2", print_hash_value);
    transparent_crc(p_1294->g_1102.s3, "p_1294->g_1102.s3", print_hash_value);
    transparent_crc(p_1294->g_1102.s4, "p_1294->g_1102.s4", print_hash_value);
    transparent_crc(p_1294->g_1102.s5, "p_1294->g_1102.s5", print_hash_value);
    transparent_crc(p_1294->g_1102.s6, "p_1294->g_1102.s6", print_hash_value);
    transparent_crc(p_1294->g_1102.s7, "p_1294->g_1102.s7", print_hash_value);
    transparent_crc(p_1294->g_1102.s8, "p_1294->g_1102.s8", print_hash_value);
    transparent_crc(p_1294->g_1102.s9, "p_1294->g_1102.s9", print_hash_value);
    transparent_crc(p_1294->g_1102.sa, "p_1294->g_1102.sa", print_hash_value);
    transparent_crc(p_1294->g_1102.sb, "p_1294->g_1102.sb", print_hash_value);
    transparent_crc(p_1294->g_1102.sc, "p_1294->g_1102.sc", print_hash_value);
    transparent_crc(p_1294->g_1102.sd, "p_1294->g_1102.sd", print_hash_value);
    transparent_crc(p_1294->g_1102.se, "p_1294->g_1102.se", print_hash_value);
    transparent_crc(p_1294->g_1102.sf, "p_1294->g_1102.sf", print_hash_value);
    transparent_crc(p_1294->g_1104.x, "p_1294->g_1104.x", print_hash_value);
    transparent_crc(p_1294->g_1104.y, "p_1294->g_1104.y", print_hash_value);
    transparent_crc(p_1294->g_1106.x, "p_1294->g_1106.x", print_hash_value);
    transparent_crc(p_1294->g_1106.y, "p_1294->g_1106.y", print_hash_value);
    transparent_crc(p_1294->g_1106.z, "p_1294->g_1106.z", print_hash_value);
    transparent_crc(p_1294->g_1106.w, "p_1294->g_1106.w", print_hash_value);
    transparent_crc(p_1294->g_1108.s0, "p_1294->g_1108.s0", print_hash_value);
    transparent_crc(p_1294->g_1108.s1, "p_1294->g_1108.s1", print_hash_value);
    transparent_crc(p_1294->g_1108.s2, "p_1294->g_1108.s2", print_hash_value);
    transparent_crc(p_1294->g_1108.s3, "p_1294->g_1108.s3", print_hash_value);
    transparent_crc(p_1294->g_1108.s4, "p_1294->g_1108.s4", print_hash_value);
    transparent_crc(p_1294->g_1108.s5, "p_1294->g_1108.s5", print_hash_value);
    transparent_crc(p_1294->g_1108.s6, "p_1294->g_1108.s6", print_hash_value);
    transparent_crc(p_1294->g_1108.s7, "p_1294->g_1108.s7", print_hash_value);
    transparent_crc(p_1294->g_1109.s0, "p_1294->g_1109.s0", print_hash_value);
    transparent_crc(p_1294->g_1109.s1, "p_1294->g_1109.s1", print_hash_value);
    transparent_crc(p_1294->g_1109.s2, "p_1294->g_1109.s2", print_hash_value);
    transparent_crc(p_1294->g_1109.s3, "p_1294->g_1109.s3", print_hash_value);
    transparent_crc(p_1294->g_1109.s4, "p_1294->g_1109.s4", print_hash_value);
    transparent_crc(p_1294->g_1109.s5, "p_1294->g_1109.s5", print_hash_value);
    transparent_crc(p_1294->g_1109.s6, "p_1294->g_1109.s6", print_hash_value);
    transparent_crc(p_1294->g_1109.s7, "p_1294->g_1109.s7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1294->g_1120[i], "p_1294->g_1120[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1294->g_1163[i].f0, "p_1294->g_1163[i].f0", print_hash_value);

    }
    transparent_crc(p_1294->g_1185, "p_1294->g_1185", print_hash_value);
    transparent_crc(p_1294->g_1216.s0, "p_1294->g_1216.s0", print_hash_value);
    transparent_crc(p_1294->g_1216.s1, "p_1294->g_1216.s1", print_hash_value);
    transparent_crc(p_1294->g_1216.s2, "p_1294->g_1216.s2", print_hash_value);
    transparent_crc(p_1294->g_1216.s3, "p_1294->g_1216.s3", print_hash_value);
    transparent_crc(p_1294->g_1216.s4, "p_1294->g_1216.s4", print_hash_value);
    transparent_crc(p_1294->g_1216.s5, "p_1294->g_1216.s5", print_hash_value);
    transparent_crc(p_1294->g_1216.s6, "p_1294->g_1216.s6", print_hash_value);
    transparent_crc(p_1294->g_1216.s7, "p_1294->g_1216.s7", print_hash_value);
    transparent_crc(p_1294->g_1218.x, "p_1294->g_1218.x", print_hash_value);
    transparent_crc(p_1294->g_1218.y, "p_1294->g_1218.y", print_hash_value);
    transparent_crc(p_1294->g_1240.x, "p_1294->g_1240.x", print_hash_value);
    transparent_crc(p_1294->g_1240.y, "p_1294->g_1240.y", print_hash_value);
    transparent_crc(p_1294->g_1240.z, "p_1294->g_1240.z", print_hash_value);
    transparent_crc(p_1294->g_1240.w, "p_1294->g_1240.w", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1294->g_1241[i].f0, "p_1294->g_1241[i].f0", print_hash_value);
        transparent_crc(p_1294->g_1241[i].f1.f0, "p_1294->g_1241[i].f1.f0", print_hash_value);
        transparent_crc(p_1294->g_1241[i].f1.f1, "p_1294->g_1241[i].f1.f1", print_hash_value);
        transparent_crc(p_1294->g_1241[i].f1.f2, "p_1294->g_1241[i].f1.f2", print_hash_value);
        transparent_crc(p_1294->g_1241[i].f1.f3, "p_1294->g_1241[i].f1.f3", print_hash_value);
        transparent_crc(p_1294->g_1241[i].f1.f4, "p_1294->g_1241[i].f1.f4", print_hash_value);
        transparent_crc(p_1294->g_1241[i].f1.f5, "p_1294->g_1241[i].f1.f5", print_hash_value);
        transparent_crc(p_1294->g_1241[i].f1.f6, "p_1294->g_1241[i].f1.f6", print_hash_value);
        transparent_crc(p_1294->g_1241[i].f1.f7, "p_1294->g_1241[i].f1.f7", print_hash_value);
        transparent_crc(p_1294->g_1241[i].f1.f8, "p_1294->g_1241[i].f1.f8", print_hash_value);
        transparent_crc(p_1294->g_1241[i].f2, "p_1294->g_1241[i].f2", print_hash_value);
        transparent_crc(p_1294->g_1241[i].f3, "p_1294->g_1241[i].f3", print_hash_value);
        transparent_crc(p_1294->g_1241[i].f4, "p_1294->g_1241[i].f4", print_hash_value);
        transparent_crc(p_1294->g_1241[i].f5, "p_1294->g_1241[i].f5", print_hash_value);

    }
    transparent_crc(p_1294->g_1271.x, "p_1294->g_1271.x", print_hash_value);
    transparent_crc(p_1294->g_1271.y, "p_1294->g_1271.y", print_hash_value);
    transparent_crc(p_1294->g_1274.s0, "p_1294->g_1274.s0", print_hash_value);
    transparent_crc(p_1294->g_1274.s1, "p_1294->g_1274.s1", print_hash_value);
    transparent_crc(p_1294->g_1274.s2, "p_1294->g_1274.s2", print_hash_value);
    transparent_crc(p_1294->g_1274.s3, "p_1294->g_1274.s3", print_hash_value);
    transparent_crc(p_1294->g_1274.s4, "p_1294->g_1274.s4", print_hash_value);
    transparent_crc(p_1294->g_1274.s5, "p_1294->g_1274.s5", print_hash_value);
    transparent_crc(p_1294->g_1274.s6, "p_1294->g_1274.s6", print_hash_value);
    transparent_crc(p_1294->g_1274.s7, "p_1294->g_1274.s7", print_hash_value);
    transparent_crc(p_1294->g_1277.s0, "p_1294->g_1277.s0", print_hash_value);
    transparent_crc(p_1294->g_1277.s1, "p_1294->g_1277.s1", print_hash_value);
    transparent_crc(p_1294->g_1277.s2, "p_1294->g_1277.s2", print_hash_value);
    transparent_crc(p_1294->g_1277.s3, "p_1294->g_1277.s3", print_hash_value);
    transparent_crc(p_1294->g_1277.s4, "p_1294->g_1277.s4", print_hash_value);
    transparent_crc(p_1294->g_1277.s5, "p_1294->g_1277.s5", print_hash_value);
    transparent_crc(p_1294->g_1277.s6, "p_1294->g_1277.s6", print_hash_value);
    transparent_crc(p_1294->g_1277.s7, "p_1294->g_1277.s7", print_hash_value);
    transparent_crc(p_1294->g_1278.x, "p_1294->g_1278.x", print_hash_value);
    transparent_crc(p_1294->g_1278.y, "p_1294->g_1278.y", print_hash_value);
    transparent_crc(p_1294->g_1280.x, "p_1294->g_1280.x", print_hash_value);
    transparent_crc(p_1294->g_1280.y, "p_1294->g_1280.y", print_hash_value);
    transparent_crc(p_1294->g_1280.z, "p_1294->g_1280.z", print_hash_value);
    transparent_crc(p_1294->g_1280.w, "p_1294->g_1280.w", print_hash_value);
    transparent_crc(p_1294->v_collective, "p_1294->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 17; i++)
            transparent_crc(p_1294->l_special_values[i], "p_1294->l_special_values[i]", print_hash_value);
    transparent_crc(p_1294->l_comm_values[get_linear_local_id()], "p_1294->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1294->g_comm_values[get_linear_group_id() * 36 + get_linear_local_id()], "p_1294->g_comm_values[get_linear_group_id() * 36 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
