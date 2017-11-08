// --atomics 30 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 79,9,7 -l 79,1,1
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

__constant uint32_t permutations[10][79] = {
{55,38,4,66,8,19,50,75,29,68,40,24,35,77,42,72,33,36,39,59,5,3,14,2,53,34,13,32,43,56,71,1,74,7,12,41,49,6,37,61,57,52,46,70,67,48,76,73,0,26,30,31,47,62,18,21,17,51,44,58,10,25,65,11,28,54,69,45,23,60,16,27,15,22,63,9,64,20,78}, // permutation 0
{1,37,28,52,3,8,2,76,17,19,7,50,33,78,45,41,56,12,39,25,5,24,69,35,53,22,11,34,67,23,74,32,0,65,63,14,43,61,48,36,62,66,18,51,10,70,40,15,47,60,57,44,13,73,9,59,68,6,16,64,26,72,54,21,42,77,55,4,71,38,31,29,58,30,27,46,75,20,49}, // permutation 1
{74,69,29,10,47,39,44,12,1,23,45,15,14,36,20,51,2,9,48,32,72,53,49,5,50,13,42,75,62,24,43,54,11,0,34,21,58,19,18,70,78,63,37,60,35,41,77,8,4,61,27,31,64,52,59,66,65,33,46,26,28,30,25,16,68,38,73,76,40,67,7,56,71,6,3,17,55,57,22}, // permutation 2
{37,36,13,35,25,17,41,0,77,26,58,32,31,45,4,74,73,48,67,56,23,29,62,5,22,11,10,69,19,27,63,20,40,68,9,44,52,60,78,15,70,8,42,59,53,1,49,75,18,2,33,76,24,65,14,72,51,47,30,43,12,55,54,57,71,16,6,46,7,28,64,39,61,66,21,3,50,38,34}, // permutation 3
{45,55,43,64,39,32,22,75,49,60,36,41,63,13,69,25,74,5,24,23,8,0,54,15,31,57,29,35,52,11,46,71,17,77,40,27,42,72,73,70,37,44,67,76,26,2,18,16,34,48,6,21,3,56,14,4,1,50,47,20,19,7,38,61,78,62,51,65,12,58,10,9,53,28,30,68,33,59,66}, // permutation 4
{43,47,1,3,23,42,8,11,37,59,36,44,10,15,12,41,27,63,9,76,77,7,13,22,5,2,61,62,67,74,56,29,55,48,71,39,18,72,54,35,65,75,28,21,46,40,73,17,70,0,33,52,20,16,66,51,34,24,26,45,30,53,57,64,19,38,60,49,78,14,4,6,32,31,69,25,58,68,50}, // permutation 5
{21,15,27,22,66,44,63,68,73,67,49,65,78,77,3,55,8,43,46,71,48,74,16,54,59,2,39,24,75,5,57,25,26,41,52,38,28,17,45,60,40,50,31,0,47,29,9,53,76,34,23,69,72,36,61,10,12,58,35,14,4,51,32,37,20,33,13,19,11,6,56,30,64,70,1,7,18,62,42}, // permutation 6
{64,40,7,75,56,52,21,55,50,23,13,46,63,68,9,57,70,60,30,71,44,49,41,73,65,22,8,19,78,42,10,36,31,35,53,45,17,32,38,58,54,77,4,16,27,51,29,6,11,18,66,59,34,1,62,26,2,69,61,3,47,12,25,14,76,5,43,48,24,37,15,20,39,67,28,0,72,74,33}, // permutation 7
{13,54,49,56,36,64,27,66,41,28,25,1,67,7,48,43,22,24,72,16,26,21,78,8,50,9,10,11,29,30,71,77,51,75,61,45,46,74,15,44,17,0,6,65,18,32,33,70,60,2,62,47,23,63,14,35,40,59,76,31,69,68,39,53,34,37,38,4,19,73,57,58,20,52,3,12,5,55,42}, // permutation 8
{1,73,67,31,19,28,76,11,54,75,12,46,48,16,39,72,53,25,7,13,78,27,37,5,21,74,65,57,14,59,64,15,23,6,55,70,69,52,36,43,60,3,22,26,29,47,41,34,2,66,40,35,17,63,51,42,45,8,49,9,68,20,32,18,77,44,10,4,62,71,58,24,33,30,38,61,56,50,0} // permutation 9
};

// Seed: 2690658984

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    int32_t g_3;
    VECTOR(uint8_t, 2) g_20;
    volatile int16_t g_44;
    int16_t g_50;
    volatile uint16_t g_51;
    uint32_t g_55;
    uint16_t g_59;
    int32_t g_81;
    VECTOR(int64_t, 8) g_88;
    int32_t g_155;
    int32_t *g_158;
    VECTOR(int32_t, 4) g_161;
    int16_t g_175;
    uint32_t g_179;
    uint32_t *g_178;
    uint32_t *g_180;
    int32_t g_190;
    volatile int64_t g_199;
    uint32_t g_207;
    volatile VECTOR(uint32_t, 2) g_236;
    uint32_t g_238;
    int8_t g_259;
    uint16_t g_263;
    uint8_t g_272;
    uint64_t g_310;
    int32_t g_314;
    VECTOR(uint8_t, 16) g_339;
    volatile VECTOR(uint32_t, 16) g_343;
    volatile VECTOR(uint32_t, 2) g_344;
    VECTOR(uint32_t, 8) g_345;
    volatile VECTOR(uint32_t, 2) g_346;
    volatile VECTOR(uint32_t, 4) g_347;
    uint8_t *g_359;
    VECTOR(uint16_t, 4) g_360;
    VECTOR(int16_t, 16) g_471;
    int32_t * volatile g_475[9][9][3];
    volatile VECTOR(uint32_t, 8) g_484;
    int32_t g_600;
    int64_t *g_611;
    int64_t *g_612;
    int64_t *g_613;
    int64_t *g_614;
    int64_t * volatile *g_689[8];
    int64_t * volatile ** volatile g_688;
    int32_t ** volatile g_690;
    volatile VECTOR(uint32_t, 2) g_735;
    volatile int32_t g_739;
    volatile VECTOR(int32_t, 16) g_742;
    VECTOR(int32_t, 2) g_748;
    VECTOR(int32_t, 2) g_751;
    volatile VECTOR(int32_t, 16) g_753;
    int32_t ** volatile g_788;
    volatile uint16_t g_796;
    int64_t **g_800[6];
    int64_t ***g_799[3][3][1];
    int32_t ** volatile g_860;
    volatile VECTOR(uint16_t, 4) g_864;
    volatile uint16_t g_865;
    volatile uint16_t *g_863[9];
    volatile uint16_t **g_862;
    uint16_t *g_870;
    uint16_t **g_869[5];
    VECTOR(int64_t, 8) g_872;
    int8_t g_879;
    volatile VECTOR(uint16_t, 2) g_886;
    VECTOR(int64_t, 4) g_904;
    VECTOR(int8_t, 4) g_906;
    int32_t ** volatile g_934;
    volatile VECTOR(int32_t, 4) g_942;
    VECTOR(uint32_t, 16) g_950;
    VECTOR(int8_t, 4) g_968;
    VECTOR(int8_t, 8) g_969;
    volatile uint8_t g_975;
    volatile uint8_t * volatile g_974;
    volatile uint8_t * volatile *g_973;
    volatile uint8_t * volatile * volatile * volatile g_972;
    volatile VECTOR(int32_t, 2) g_983;
    volatile VECTOR(int32_t, 8) g_984;
    VECTOR(int32_t, 2) g_985;
    uint64_t g_994;
    uint32_t *g_1014;
    uint32_t **g_1013;
    uint32_t **g_1017;
    uint32_t *** volatile g_1016;
    volatile VECTOR(int16_t, 16) g_1024;
    volatile VECTOR(int16_t, 2) g_1025;
    VECTOR(int32_t, 2) g_1028;
    VECTOR(int8_t, 2) g_1029;
    volatile VECTOR(uint8_t, 16) g_1030;
    VECTOR(uint8_t, 8) g_1035;
    VECTOR(uint8_t, 8) g_1036;
    int32_t ** volatile g_1060;
    volatile VECTOR(uint64_t, 4) g_1077;
    volatile VECTOR(uint64_t, 16) g_1078;
    VECTOR(int8_t, 2) g_1137;
    VECTOR(int8_t, 4) g_1138;
    VECTOR(int8_t, 2) g_1142;
    VECTOR(int8_t, 16) g_1144;
    VECTOR(int8_t, 4) g_1145;
    VECTOR(int8_t, 4) g_1146;
    VECTOR(int32_t, 16) g_1164;
    VECTOR(int16_t, 16) g_1194;
    VECTOR(int32_t, 16) g_1197;
    int32_t ** volatile g_1220[2][4];
    volatile int16_t g_1231;
    volatile int32_t g_1239;
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
uint32_t  func_1(struct S0 * p_1246);
int32_t  func_12(int32_t  p_13, uint32_t  p_14, uint32_t  p_15, uint8_t  p_16, uint16_t  p_17, struct S0 * p_1246);
uint8_t  func_21(int32_t  p_22, int8_t  p_23, struct S0 * p_1246);
int32_t  func_24(uint16_t  p_25, uint64_t  p_26, int64_t  p_27, struct S0 * p_1246);
uint8_t  func_28(uint32_t  p_29, int16_t  p_30, uint16_t  p_31, uint32_t  p_32, uint16_t  p_33, struct S0 * p_1246);
int8_t  func_36(int64_t  p_37, int64_t  p_38, uint32_t  p_39, int64_t  p_40, struct S0 * p_1246);
int32_t * func_60(int8_t  p_61, int32_t  p_62, uint32_t  p_63, uint64_t  p_64, uint64_t  p_65, struct S0 * p_1246);
int8_t  func_76(int32_t  p_77, uint64_t  p_78, uint16_t  p_79, struct S0 * p_1246);
uint32_t  func_94(uint16_t * p_95, int32_t * p_96, uint32_t  p_97, uint32_t * p_98, uint32_t * p_99, struct S0 * p_1246);
uint16_t * func_100(int32_t * p_101, uint32_t  p_102, int64_t * p_103, int64_t  p_104, struct S0 * p_1246);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1246->g_comm_values p_1246->g_3 p_1246->g_20 p_1246->g_44 p_1246->g_51 p_1246->g_2 p_1246->g_50 p_1246->g_59 p_1246->g_81 p_1246->g_88 p_1246->g_55 p_1246->l_comm_values p_1246->g_175 p_1246->g_161 p_1246->g_199 p_1246->g_155 p_1246->g_238 p_1246->g_179 p_1246->g_263 p_1246->g_272 p_1246->g_190 p_1246->g_314 p_1246->g_310 p_1246->g_339 p_1246->g_471 p_1246->g_360 p_1246->g_345 p_1246->g_158 p_1246->g_484 p_1246->g_600 p_1246->g_346 p_1246->g_359 p_1246->g_344 p_1246->g_799 p_1246->g_690 p_1246->g_788 p_1246->g_735 p_1246->g_259 p_1246->g_862 p_1246->g_872 p_1246->g_879 p_1246->g_886 p_1246->g_904 p_1246->g_347 p_1246->g_934 p_1246->g_983 p_1246->g_984 p_1246->g_985 p_1246->g_863 p_1246->g_865 p_1246->g_1013 p_1246->g_1016 p_1246->g_1024 p_1246->g_1025 p_1246->g_753 p_1246->g_1028 p_1246->g_1029 p_1246->g_1030 p_1246->g_1035 p_1246->g_1036 p_1246->g_972 p_1246->g_973 p_1246->g_994 p_1246->g_1060 p_1246->g_968 p_1246->g_1077 p_1246->g_1078 p_1246->g_974 p_1246->g_975 p_1246->g_178 p_1246->g_748 p_1246->g_950 p_1246->g_870 p_1246->g_906
 * writes: p_1246->g_3 p_1246->g_51 p_1246->g_2 p_1246->g_55 p_1246->g_59 p_1246->g_81 p_1246->g_158 p_1246->g_155 p_1246->g_175 p_1246->g_178 p_1246->g_180 p_1246->g_190 p_1246->g_207 p_1246->g_238 p_1246->g_259 p_1246->g_263 p_1246->g_272 p_1246->g_314 p_1246->g_310 p_1246->g_339 p_1246->g_179 p_1246->g_88 p_1246->g_50 p_1246->g_161 p_1246->g_600 p_1246->g_611 p_1246->g_612 p_1246->g_613 p_1246->g_614 p_1246->g_359 p_1246->g_475 p_1246->g_799 p_1246->g_869 p_1246->g_879 p_1246->g_994 p_1246->g_1013 p_1246->g_1017 p_1246->g_1028 p_1246->g_950 p_1246->g_345 p_1246->g_471 p_1246->g_985
 */
uint32_t  func_1(struct S0 * p_1246)
{ /* block id: 4 */
    VECTOR(int64_t, 16) l_9 = (VECTOR(int64_t, 16))(0x1C63C407858F9C25L, (VECTOR(int64_t, 4))(0x1C63C407858F9C25L, (VECTOR(int64_t, 2))(0x1C63C407858F9C25L, 0x54DBBE56890C5440L), 0x54DBBE56890C5440L), 0x54DBBE56890C5440L, 0x1C63C407858F9C25L, 0x54DBBE56890C5440L, (VECTOR(int64_t, 2))(0x1C63C407858F9C25L, 0x54DBBE56890C5440L), (VECTOR(int64_t, 2))(0x1C63C407858F9C25L, 0x54DBBE56890C5440L), 0x1C63C407858F9C25L, 0x54DBBE56890C5440L, 0x1C63C407858F9C25L, 0x54DBBE56890C5440L);
    int64_t l_601 = 0x7C70DBD586CDDBF3L;
    int32_t l_655 = (-1L);
    VECTOR(int16_t, 4) l_885 = (VECTOR(int16_t, 4))(0x7ED3L, (VECTOR(int16_t, 2))(0x7ED3L, 0x4455L), 0x4455L);
    VECTOR(uint16_t, 2) l_887 = (VECTOR(uint16_t, 2))(0UL, 0x3DEEL);
    int64_t l_905 = 0x3EB39163B5F7D3C2L;
    int32_t *l_932 = &p_1246->g_3;
    VECTOR(int8_t, 8) l_939 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x30L), 0x30L), 0x30L, (-1L), 0x30L);
    VECTOR(int16_t, 8) l_961 = (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0L), 0L), 0L, 6L, 0L);
    int32_t l_1018 = 0x059DC941L;
    uint64_t l_1051 = 0x27E461AE74C7CA29L;
    uint64_t *l_1052 = (void*)0;
    int16_t l_1084 = 0x09BCL;
    VECTOR(uint8_t, 4) l_1122 = (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0x8FL), 0x8FL);
    int64_t **l_1135 = (void*)0;
    VECTOR(int8_t, 16) l_1140 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-7L)), (-7L)), (-7L), 0L, (-7L), (VECTOR(int8_t, 2))(0L, (-7L)), (VECTOR(int8_t, 2))(0L, (-7L)), 0L, (-7L), 0L, (-7L));
    VECTOR(uint16_t, 2) l_1148 = (VECTOR(uint16_t, 2))(0xF3F5L, 0x3BFDL);
    int32_t l_1204 = 0x132D8308L;
    int16_t l_1213 = 0L;
    int64_t l_1226[3][8][6] = {{{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L}},{{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L}},{{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L},{8L,0x0FF818BC8C7804E1L,0x267CA8B844E98C7FL,(-1L),(-3L),0x1FC27BAC3330EF09L}}};
    int32_t l_1227 = 0x214C87B0L;
    int32_t l_1228 = 1L;
    int32_t l_1229 = 0x7CCA51CAL;
    int32_t l_1230 = 0x4DBFC3E2L;
    int32_t l_1232 = 0L;
    int32_t l_1233 = 5L;
    int32_t l_1234 = 1L;
    int32_t l_1235 = (-6L);
    int64_t l_1236[10] = {0x432CE6188D69EB28L,0x432CE6188D69EB28L,0x432CE6188D69EB28L,0x432CE6188D69EB28L,0x432CE6188D69EB28L,0x432CE6188D69EB28L,0x432CE6188D69EB28L,0x432CE6188D69EB28L,0x432CE6188D69EB28L,0x432CE6188D69EB28L};
    int32_t l_1237 = (-1L);
    int32_t l_1238[2][7] = {{0x0AA87C87L,0x0AA87C87L,1L,0x1A3181BBL,(-2L),0x1A3181BBL,1L},{0x0AA87C87L,0x0AA87C87L,1L,0x1A3181BBL,(-2L),0x1A3181BBL,1L}};
    int32_t l_1240 = 1L;
    uint64_t l_1241 = 0x525B4CC334EEC533L;
    int32_t *l_1244[8];
    uint64_t l_1245 = 6UL;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_1244[i] = &p_1246->g_155;
    if (p_1246->g_comm_values[p_1246->tid])
    { /* block id: 5 */
        int32_t l_8 = 0x313281D2L;
        int64_t *l_45 = (void*)0;
        int32_t l_46 = 0x78EF5D3CL;
        uint32_t *l_54 = &p_1246->g_55;
        VECTOR(uint8_t, 4) l_56 = (VECTOR(uint8_t, 4))(0xA6L, (VECTOR(uint8_t, 2))(0xA6L, 0x15L), 0x15L);
        int32_t l_877 = 0L;
        int8_t *l_878 = &p_1246->g_879;
        int32_t *l_880 = (void*)0;
        int32_t *l_881 = (void*)0;
        int32_t *l_882 = (void*)0;
        VECTOR(int32_t, 16) l_883 = (VECTOR(int32_t, 16))(0x10D1D435L, (VECTOR(int32_t, 4))(0x10D1D435L, (VECTOR(int32_t, 2))(0x10D1D435L, 0x54B6B133L), 0x54B6B133L), 0x54B6B133L, 0x10D1D435L, 0x54B6B133L, (VECTOR(int32_t, 2))(0x10D1D435L, 0x54B6B133L), (VECTOR(int32_t, 2))(0x10D1D435L, 0x54B6B133L), 0x10D1D435L, 0x54B6B133L, 0x10D1D435L, 0x54B6B133L);
        int32_t **l_884 = &l_882;
        int i;
        for (p_1246->g_3 = (-6); (p_1246->g_3 >= 18); p_1246->g_3 = safe_add_func_int16_t_s_s(p_1246->g_3, 4))
        { /* block id: 8 */
            return p_1246->g_3;
        }
        l_883.s7 &= ((safe_mul_func_int8_t_s_s(l_8, ((*l_878) &= ((((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(l_9.s87)), ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((func_12(l_8, l_8, ((0x360DE574L == (((VECTOR(uint8_t, 16))(p_1246->g_20.xyxyxxyxyyyyyxyy)).sf != (l_655 = func_21(func_24(p_1246->g_comm_values[p_1246->tid], (func_28(((*l_54) = (safe_div_func_uint8_t_u_u((p_1246->g_20.y != (func_36((l_46 = (safe_unary_minus_func_uint8_t_u((safe_add_func_int32_t_s_s(l_9.sb, ((p_1246->g_3 == (((((+((0x29L >= GROUP_DIVERGE(1, 1)) ^ p_1246->g_20.y)) < 0x595921BA52B3395CL) <= p_1246->g_44) != l_9.sc) < 0x164EL)) ^ p_1246->g_comm_values[p_1246->tid])))))), l_8, l_8, l_9.s4, p_1246) | l_9.s8)), l_9.sd))), p_1246->g_50, p_1246->g_20.x, l_56.w, l_56.y, p_1246) || 0x28L), l_56.y, p_1246), l_601, p_1246)))) >= 0x35AEL), l_601, p_1246->g_20.x, p_1246) == 0UL) & p_1246->g_471.s0), 0x3FF51A2BD8B749DFL, 0x2D7C4EBA86C77088L, (-2L))).hi)).yyyxyxyy)).s42, ((VECTOR(int64_t, 2))(0x0C90C1B405D22F12L)), ((VECTOR(int64_t, 2))((-1L)))))), ((VECTOR(int64_t, 2))(0x7A2C8FB1F601997CL))))).lo , 1L) > l_877)))) , l_46);
        (*l_884) = &l_655;
    }
    else
    { /* block id: 345 */
        uint16_t l_888[10][1][7] = {{{0x6C1DL,0x8F28L,0x91E3L,0UL,0x8F28L,0UL,0x91E3L}},{{0x6C1DL,0x8F28L,0x91E3L,0UL,0x8F28L,0UL,0x91E3L}},{{0x6C1DL,0x8F28L,0x91E3L,0UL,0x8F28L,0UL,0x91E3L}},{{0x6C1DL,0x8F28L,0x91E3L,0UL,0x8F28L,0UL,0x91E3L}},{{0x6C1DL,0x8F28L,0x91E3L,0UL,0x8F28L,0UL,0x91E3L}},{{0x6C1DL,0x8F28L,0x91E3L,0UL,0x8F28L,0UL,0x91E3L}},{{0x6C1DL,0x8F28L,0x91E3L,0UL,0x8F28L,0UL,0x91E3L}},{{0x6C1DL,0x8F28L,0x91E3L,0UL,0x8F28L,0UL,0x91E3L}},{{0x6C1DL,0x8F28L,0x91E3L,0UL,0x8F28L,0UL,0x91E3L}},{{0x6C1DL,0x8F28L,0x91E3L,0UL,0x8F28L,0UL,0x91E3L}}};
        VECTOR(uint32_t, 2) l_949 = (VECTOR(uint32_t, 2))(0xF764BAF8L, 0xE0195E11L);
        uint8_t **l_964 = &p_1246->g_359;
        VECTOR(uint8_t, 16) l_1031 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL, (VECTOR(uint8_t, 2))(1UL, 255UL), (VECTOR(uint8_t, 2))(1UL, 255UL), 1UL, 255UL, 1UL, 255UL);
        int32_t l_1053 = 0x2B1B5B50L;
        int64_t **l_1123 = (void*)0;
        VECTOR(int8_t, 4) l_1141 = (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 0x35L), 0x35L);
        uint32_t l_1147 = 0x5EEB9A7AL;
        uint8_t l_1153 = 0x5DL;
        int64_t l_1187 = 0x102BE8ED3B850BC2L;
        int32_t *l_1222 = &p_1246->g_600;
        int32_t *l_1223 = &p_1246->g_600;
        int32_t *l_1224 = &p_1246->g_190;
        int32_t *l_1225[4] = {&l_655,&l_655,&l_655,&l_655};
        int i, j, k;
        (*p_1246->g_158) ^= ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(l_885.zyzy)).zwywxywy, ((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 2))(p_1246->g_886.xx)).yxxxxxxx, ((VECTOR(uint16_t, 8))(l_887.yyyxyyxy)))))))).s2;
        if (l_888[1][0][6])
        { /* block id: 347 */
            VECTOR(int32_t, 4) l_896 = (VECTOR(int32_t, 4))(0x115C11C3L, (VECTOR(int32_t, 2))(0x115C11C3L, 0x599BE628L), 0x599BE628L);
            int i;
            if ((atomic_inc(&p_1246->g_atomic_input[30 * get_linear_group_id() + 23]) == 9))
            { /* block id: 349 */
                int8_t l_889 = (-1L);
                VECTOR(int32_t, 4) l_890 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x690F3165L), 0x690F3165L);
                uint8_t l_891[6][8] = {{9UL,9UL,9UL,9UL,0x85L,255UL,255UL,0x85L},{9UL,9UL,9UL,9UL,0x85L,255UL,255UL,0x85L},{9UL,9UL,9UL,9UL,0x85L,255UL,255UL,0x85L},{9UL,9UL,9UL,9UL,0x85L,255UL,255UL,0x85L},{9UL,9UL,9UL,9UL,0x85L,255UL,255UL,0x85L},{9UL,9UL,9UL,9UL,0x85L,255UL,255UL,0x85L}};
                int i, j;
                l_889 ^= 0x18A5BD4BL;
                l_891[3][5] = ((VECTOR(int32_t, 2))(l_890.xw)).lo;
                unsigned int result = 0;
                result += l_889;
                result += l_890.w;
                result += l_890.z;
                result += l_890.y;
                result += l_890.x;
                int l_891_i0, l_891_i1;
                for (l_891_i0 = 0; l_891_i0 < 6; l_891_i0++) {
                    for (l_891_i1 = 0; l_891_i1 < 8; l_891_i1++) {
                        result += l_891[l_891_i0][l_891_i1];
                    }
                }
                atomic_add(&p_1246->g_special_values[30 * get_linear_group_id() + 23], result);
            }
            else
            { /* block id: 352 */
                (1 + 1);
            }
            for (p_1246->g_238 = 0; (p_1246->g_238 > 3); p_1246->g_238++)
            { /* block id: 357 */
                int8_t l_901 = 0L;
                uint32_t l_907 = 0xE9C90DD8L;
                (*p_1246->g_158) = (safe_div_func_int8_t_s_s((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_896.yyyx)).wxxxxzyx)).s7 && l_885.x), (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(l_901, (safe_div_func_int64_t_s_s((l_905 = ((VECTOR(int64_t, 16))(p_1246->g_904.wwwywwxxwxxwwwxx)).s2), l_901)))), 9))));
                (*p_1246->g_788) = ((p_1246->g_471.sc >= (((VECTOR(int8_t, 8))(1L, ((VECTOR(int8_t, 4))(p_1246->g_906.zzzw)), p_1246->g_comm_values[p_1246->tid], 0x33L, 0x3EL)).s4 || (l_907 <= FAKE_DIVERGE(p_1246->local_1_offset, get_local_id(1), 10)))) , &l_655);
                if (((safe_lshift_func_int8_t_s_u(p_1246->g_904.w, 2)) == (safe_mod_func_uint32_t_u_u(l_896.y, l_655))))
                { /* block id: 361 */
                    for (p_1246->g_175 = 0; (p_1246->g_175 <= 24); p_1246->g_175++)
                    { /* block id: 364 */
                        return l_887.x;
                    }
                    for (p_1246->g_81 = 0; (p_1246->g_81 >= (-17)); --p_1246->g_81)
                    { /* block id: 369 */
                        int32_t *l_916 = (void*)0;
                        int32_t *l_917 = (void*)0;
                        int32_t *l_918 = (void*)0;
                        int32_t *l_919[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_919[i] = (void*)0;
                        p_1246->g_3 &= (**p_1246->g_788);
                        return p_1246->g_347.x;
                    }
                }
                else
                { /* block id: 373 */
                    (*p_1246->g_158) = (&p_1246->g_310 == (void*)0);
                    (*p_1246->g_158) ^= 0L;
                    for (p_1246->g_179 = 0; (p_1246->g_179 == 13); ++p_1246->g_179)
                    { /* block id: 378 */
                        if (l_888[2][0][2])
                            break;
                        (*p_1246->g_158) = 0x64BDAE2BL;
                    }
                    if ((atomic_inc(&p_1246->l_atomic_input[25]) == 4))
                    { /* block id: 383 */
                        int16_t l_922 = 0x4236L;
                        int64_t l_923 = 0x32557077FF7C303DL;
                        uint16_t l_924 = 1UL;
                        uint8_t l_925 = 255UL;
                        int32_t *l_926 = (void*)0;
                        int32_t l_928 = 0x06CCB0ADL;
                        int32_t *l_927[3];
                        int32_t *l_929 = &l_928;
                        int32_t *l_930[10][4] = {{&l_928,&l_928,&l_928,&l_928},{&l_928,&l_928,&l_928,&l_928},{&l_928,&l_928,&l_928,&l_928},{&l_928,&l_928,&l_928,&l_928},{&l_928,&l_928,&l_928,&l_928},{&l_928,&l_928,&l_928,&l_928},{&l_928,&l_928,&l_928,&l_928},{&l_928,&l_928,&l_928,&l_928},{&l_928,&l_928,&l_928,&l_928},{&l_928,&l_928,&l_928,&l_928}};
                        int32_t *l_931 = &l_928;
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_927[i] = &l_928;
                        l_923 = l_922;
                        l_925 &= (l_924 &= 0x17BAE9CBL);
                        l_931 = (l_930[2][3] = (l_929 = (l_927[2] = l_926)));
                        unsigned int result = 0;
                        result += l_922;
                        result += l_923;
                        result += l_924;
                        result += l_925;
                        result += l_928;
                        atomic_add(&p_1246->l_special_values[25], result);
                    }
                    else
                    { /* block id: 391 */
                        (1 + 1);
                    }
                }
            }
            (*p_1246->g_158) = (~(p_1246->g_347.w | ((l_932 = &p_1246->g_3) != &p_1246->g_190)));
        }
        else
        { /* block id: 398 */
            int32_t *l_933 = &p_1246->g_3;
            VECTOR(uint32_t, 2) l_948 = (VECTOR(uint32_t, 2))(0xBF76AA98L, 0xB9B3D5CBL);
            uint8_t ***l_971[2];
            VECTOR(int32_t, 8) l_988 = (VECTOR(int32_t, 8))(0x29C90026L, (VECTOR(int32_t, 4))(0x29C90026L, (VECTOR(int32_t, 2))(0x29C90026L, 0x74904DB6L), 0x74904DB6L), 0x74904DB6L, 0x29C90026L, 0x74904DB6L);
            VECTOR(int32_t, 8) l_1001 = (VECTOR(int32_t, 8))(0x3B30CE71L, (VECTOR(int32_t, 4))(0x3B30CE71L, (VECTOR(int32_t, 2))(0x3B30CE71L, 0L), 0L), 0L, 0x3B30CE71L, 0L);
            uint64_t l_1019 = 18446744073709551615UL;
            uint16_t *l_1034 = (void*)0;
            int8_t l_1085 = 0L;
            uint64_t l_1111 = 18446744073709551609UL;
            int64_t l_1125 = 0x46218A05060A6EA5L;
            VECTOR(int8_t, 2) l_1143 = (VECTOR(int8_t, 2))((-4L), 0x06L);
            int64_t l_1150 = 0x4EFB9E033D0CAFC4L;
            VECTOR(uint32_t, 2) l_1161 = (VECTOR(uint32_t, 2))(4294967293UL, 0xC61D846DL);
            int16_t l_1211 = 1L;
            int i;
            for (i = 0; i < 2; i++)
                l_971[i] = (void*)0;
            (*p_1246->g_934) = l_933;
            for (p_1246->g_59 = 0; (p_1246->g_59 == 19); p_1246->g_59++)
            { /* block id: 402 */
                VECTOR(uint16_t, 4) l_947 = (VECTOR(uint16_t, 4))(0x400DL, (VECTOR(uint16_t, 2))(0x400DL, 0xC04AL), 0xC04AL);
                uint8_t ***l_965 = &l_964;
                uint8_t ****l_970[3][5][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                uint32_t *l_976 = (void*)0;
                uint32_t *l_977 = (void*)0;
                uint32_t *l_978 = (void*)0;
                uint32_t *l_979 = (void*)0;
                uint32_t *l_980 = (void*)0;
                uint32_t *l_981 = (void*)0;
                int32_t l_982 = 0L;
                VECTOR(int32_t, 4) l_986 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), (-1L)), (-1L));
                uint32_t l_1010 = 0x7E145F29L;
                VECTOR(int16_t, 16) l_1037 = (VECTOR(int16_t, 16))(0x258DL, (VECTOR(int16_t, 4))(0x258DL, (VECTOR(int16_t, 2))(0x258DL, 0x69F9L), 0x69F9L), 0x69F9L, 0x258DL, 0x69F9L, (VECTOR(int16_t, 2))(0x258DL, 0x69F9L), (VECTOR(int16_t, 2))(0x258DL, 0x69F9L), 0x258DL, 0x69F9L, 0x258DL, 0x69F9L);
                int i, j, k;
                if ((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(l_939.s22177657)).odd, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(0x00L, 0x57L, (safe_mul_func_int8_t_s_s((((VECTOR(int32_t, 2))(p_1246->g_942.zz)).lo , (safe_mul_func_int16_t_s_s(l_888[8][0][6], (safe_mod_func_uint16_t_u_u((p_1246->g_879 != ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_947.xzyw)).yzyzxxxywzwyxyxy)), ((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 2))(1UL, 65526UL)).xxyxyxyy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(0x0F64L, 65535UL, 0x0664L, 0UL)))).zxxyzzwx)).s33)).xyyxyxxy))).s0173653447262034))).lo)), ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_948.yxyyxxxx)).s0175767167713655)).sdb, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(l_949.xyxyxxxy)).s23))).xyyy)).odd)), 0x51690C76L, 9UL)).hi))), ((VECTOR(uint32_t, 2))(p_1246->g_950.s6f)), ((*l_933) = (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((0xCCL ^ (safe_mul_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(l_961.s0022)).y, 6)) <= (safe_mul_func_int8_t_s_s((p_1246->g_259 = (~0x5BL)), (&p_1246->g_359 != ((*l_965) = l_964))))) != 0x35L), (safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 4))(p_1246->g_968.xywx)).wxzxzwzy, ((VECTOR(int8_t, 2))(p_1246->g_969.s32)).xyxxxxxy))).s7, 2))))), ((VECTOR(int16_t, 16))(((l_971[0] = l_965) != p_1246->g_972), p_1246->g_347.z, 0L, l_947.x, ((VECTOR(int16_t, 4))(0x0373L)), 0x0BB1L, p_1246->g_88.s2, (-6L), 0x0D2FL, ((VECTOR(int16_t, 2))(0L)), 0x5C4DL, 0x2055L)).s0)), FAKE_DIVERGE(p_1246->global_2_offset, get_global_id(2), 10))), (*p_1246->g_870)))), 0UL, 5UL, 4294967295UL)).s3), l_982))))), 0x7FL)), ((VECTOR(int8_t, 2))((-1L))), p_1246->g_88.s4, 6L, (-2L))))).s6211732306333135)).sc601, ((VECTOR(int8_t, 4))(0x4CL))))).y, (*p_1246->g_359))))
                { /* block id: 407 */
                    VECTOR(int32_t, 4) l_987 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x110CA327L), 0x110CA327L);
                    uint64_t *l_993 = &p_1246->g_994;
                    int32_t l_999 = 0x56D147C3L;
                    int32_t *l_1000 = &p_1246->g_81;
                    int i;
                    l_987.z = ((VECTOR(int32_t, 16))(1L, ((*l_932) |= ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_1246->g_983.yxxxxxxyyxxyxyxy)).lo, ((VECTOR(int32_t, 4))(p_1246->g_984.s2662)).xzwywzxw))).s3), ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(p_1246->g_985.xyxyxyxy)), ((VECTOR(int32_t, 16))(l_986.zxwyyxwwzxzyxyzw)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(7L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_987.xz)))), 0x5759E365L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_988.s4733)).zxyywxwy)).odd))))))), (((*p_1246->g_359) = ((((*l_993) = (safe_sub_func_uint16_t_u_u(((void*)0 == l_933), l_986.x))) , (*p_1246->g_359)) | (p_1246->g_272 != ((((+(0L || l_987.z)) >= (l_999 = (safe_lshift_func_uint8_t_u_u(1UL, FAKE_DIVERGE(p_1246->group_2_offset, get_group_id(2), 10))))) | ((FAKE_DIVERGE(p_1246->global_1_offset, get_global_id(1), 10) < (!(l_978 != l_1000))) >= (*l_933))) != (**p_1246->g_862))))) < p_1246->g_339.sa), l_1001.s1, l_949.y, ((VECTOR(int32_t, 2))(1L)), 1L)).s9;
                    return l_949.x;
                }
                else
                { /* block id: 414 */
                    int16_t l_1002 = 0L;
                    int32_t *l_1003 = &l_655;
                    int32_t *l_1004 = (void*)0;
                    int32_t *l_1005 = &p_1246->g_155;
                    int32_t *l_1006 = (void*)0;
                    int32_t *l_1007 = &p_1246->g_3;
                    int32_t *l_1008 = (void*)0;
                    int32_t *l_1009[9] = {&p_1246->g_3,&p_1246->g_3,&p_1246->g_3,&p_1246->g_3,&p_1246->g_3,&p_1246->g_3,&p_1246->g_3,&p_1246->g_3,&p_1246->g_3};
                    uint32_t ***l_1015 = &p_1246->g_1013;
                    uint16_t l_1043 = 65528UL;
                    int i;
                    ++l_1010;
                    (*p_1246->g_1016) = ((*l_1015) = p_1246->g_1013);
                    --l_1019;
                    for (p_1246->g_600 = (-27); (p_1246->g_600 >= 25); p_1246->g_600++)
                    { /* block id: 421 */
                        uint32_t l_1038[4][4] = {{0x6A92B9B0L,0x70F95775L,0x6A92B9B0L,0x6A92B9B0L},{0x6A92B9B0L,0x70F95775L,0x6A92B9B0L,0x6A92B9B0L},{0x6A92B9B0L,0x70F95775L,0x6A92B9B0L,0x6A92B9B0L},{0x6A92B9B0L,0x70F95775L,0x6A92B9B0L,0x6A92B9B0L}};
                        int16_t *l_1041 = (void*)0;
                        int16_t *l_1042[5][9] = {{&l_1002,&l_1002,&p_1246->g_175,&l_1002,&p_1246->g_50,&l_1002,&p_1246->g_175,&l_1002,&l_1002},{&l_1002,&l_1002,&p_1246->g_175,&l_1002,&p_1246->g_50,&l_1002,&p_1246->g_175,&l_1002,&l_1002},{&l_1002,&l_1002,&p_1246->g_175,&l_1002,&p_1246->g_50,&l_1002,&p_1246->g_175,&l_1002,&l_1002},{&l_1002,&l_1002,&p_1246->g_175,&l_1002,&p_1246->g_50,&l_1002,&p_1246->g_175,&l_1002,&l_1002},{&l_1002,&l_1002,&p_1246->g_175,&l_1002,&p_1246->g_50,&l_1002,&p_1246->g_175,&l_1002,&l_1002}};
                        int64_t *****l_1048 = (void*)0;
                        int64_t ****l_1050[7] = {&p_1246->g_799[0][0][0],&p_1246->g_799[0][0][0],&p_1246->g_799[0][0][0],&p_1246->g_799[0][0][0],&p_1246->g_799[0][0][0],&p_1246->g_799[0][0][0],&p_1246->g_799[0][0][0]};
                        int64_t *****l_1049 = &l_1050[2];
                        int i, j;
                        (*l_1005) = ((1L <= p_1246->g_88.s4) && (((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(p_1246->g_1024.s5d)), ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(p_1246->g_1025.yyyyxxxxxxxxxxxy)).odd, ((VECTOR(int16_t, 2))(1L, (-1L))).yxxxyxxy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 8))(7L, ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-9L), (-1L))), (safe_sub_func_int16_t_s_s(p_1246->g_753.s4, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((((VECTOR(int32_t, 16))(p_1246->g_1028.yyxxyxxxxyxxyxyx)).s0 >= (-2L)), 0x62BBL, 0x1842L, (-10L))).zxyyzxxyxyzxyxzy)).s0)), (-6L), 1L, ((VECTOR(int8_t, 2))(p_1246->g_1029.xx)), (-2L))).lo, ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_1246->g_1030.se6e1)), ((VECTOR(uint8_t, 4))(l_1031.s7af5)), (safe_rshift_func_int16_t_s_u(l_888[3][0][1], 13)), (p_1246->g_339.sd |= ((**l_964) = ((FAKE_DIVERGE(p_1246->global_0_offset, get_global_id(0), 10) != l_1031.sf) & ((*l_1003) = ((*p_1246->g_158) = ((void*)0 == l_1034)))))), ((VECTOR(uint8_t, 2))(0x81L, 0x0FL)), ((VECTOR(uint8_t, 2))(p_1246->g_1035.s40)), 0x3DL, 4UL)).s3799, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(p_1246->g_1036.s54)).xyxyyxyxyxyyyyyy)))).s0728)))))), 0x652CL, 6L, 0L)).lo))).hi)).yxyyyyyy))))).s40, ((VECTOR(int16_t, 16))(l_1037.sfb206639c3c346e8)).s4b))).lo , ((*l_932) |= ((*p_1246->g_972) != &p_1246->g_359))));
                        l_1053 &= ((*l_1003) |= (l_1038[1][0] & ((((l_1051 ^= ((safe_mul_func_int32_t_s_s((l_1038[1][0] >= 0x6ECFL), (((l_1043 &= p_1246->g_994) || 0x2BA1L) != (safe_lshift_func_int16_t_s_s((l_981 == &p_1246->g_81), 0))))) >= ((safe_add_func_int16_t_s_s(p_1246->g_344.x, (((*l_1049) = &p_1246->g_799[1][0][0]) == &p_1246->g_799[1][0][0]))) == (-5L)))) | (*l_933)) , &l_1051) != l_1052)));
                        (*p_1246->g_158) = 8L;
                    }
                }
                for (l_655 = 0; (l_655 == (-5)); l_655--)
                { /* block id: 438 */
                    return l_986.z;
                }
            }
            for (l_1019 = 0; (l_1019 >= 8); l_1019++)
            { /* block id: 444 */
                uint16_t l_1076 = 2UL;
                int32_t l_1104 = 0x0F6AD0C8L;
                int32_t l_1107 = 0x7EB9B5C2L;
                int32_t l_1109 = 0x286D9CEDL;
                int32_t l_1110 = 0x66596B70L;
                int32_t *l_1127 = (void*)0;
                int64_t **l_1136 = &p_1246->g_611;
                VECTOR(int8_t, 4) l_1139 = (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x67L), 0x67L);
                VECTOR(uint64_t, 8) l_1160 = (VECTOR(uint64_t, 8))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 0xB4E9E8149A53F223L), 0xB4E9E8149A53F223L), 0xB4E9E8149A53F223L, 6UL, 0xB4E9E8149A53F223L);
                uint64_t *l_1167 = &p_1246->g_994;
                int i;
                if ((*l_932))
                { /* block id: 445 */
                    uint8_t l_1071 = 0x8CL;
                    int64_t l_1086 = 0x27439461D21DE00EL;
                    int64_t **l_1100 = &p_1246->g_612;
                    int32_t *l_1105 = (void*)0;
                    int32_t *l_1106 = (void*)0;
                    int32_t *l_1108[7];
                    int64_t ***l_1124 = &p_1246->g_800[2];
                    int8_t *l_1126 = &l_1085;
                    int32_t **l_1128[2];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1108[i] = (void*)0;
                    for (i = 0; i < 2; i++)
                        l_1128[i] = &l_1106;
                    for (p_1246->g_55 = 0; (p_1246->g_55 > 40); ++p_1246->g_55)
                    { /* block id: 448 */
                        (*p_1246->g_1060) = &l_1053;
                        return (*l_932);
                    }
                    for (p_1246->g_238 = 0; (p_1246->g_238 < 2); p_1246->g_238 = safe_add_func_uint64_t_u_u(p_1246->g_238, 2))
                    { /* block id: 454 */
                        int32_t **l_1063 = &p_1246->g_158;
                        VECTOR(uint16_t, 2) l_1083 = (VECTOR(uint16_t, 2))(0xE406L, 65527UL);
                        int8_t *l_1089 = (void*)0;
                        int8_t *l_1090 = (void*)0;
                        int8_t *l_1091[2][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int32_t *l_1103 = &p_1246->g_600;
                        int i, j;
                        (*l_1063) = (void*)0;
                        (*l_932) = (safe_mod_func_int16_t_s_s((l_1053 = (safe_unary_minus_func_int8_t_s((safe_div_func_int8_t_s_s(p_1246->g_968.y, ((((*l_932) && (safe_lshift_func_uint8_t_u_s(((((l_1071 <= 6L) , 1L) & (safe_rshift_func_uint8_t_u_s(((*l_932) , (safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_1246->local_2_offset, get_local_id(2), 10), (l_1076 <= ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(p_1246->g_1077.yzwwzzzwwwyxzyxx)).sec02)).hi, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 8))(p_1246->g_1078.s702d3e52)).even, ((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 16))((p_1246->g_81 | (safe_rshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_1083.xyyx)).y, ((((((*l_932) | l_1076) >= l_1084) , (*p_1246->g_974)) == GROUP_DIVERGE(2, 1)) & 3UL))) | 0L), GROUP_DIVERGE(1, 1)))), l_1085, ((VECTOR(uint32_t, 4))(8UL)), ((VECTOR(uint32_t, 4))(4294967295UL)), ((VECTOR(uint32_t, 2))(0x04AE8B1FL)), 0x17613952L, (*p_1246->g_178), 0x44A182CCL, 0x656DB474L)).scdc0, ((VECTOR(uint32_t, 4))(0x2D569CD1L)))))))).yzxxzyww)).even)).lo))).odd)))), 7))) >= 3L), p_1246->g_748.x))) || l_1086) , 0x2FL)))))), (*l_932)));
                        (*l_1063) = l_1103;
                        (*l_1063) = (void*)0;
                    }
                    --l_1111;
                    (*p_1246->g_690) = l_1127;
                }
                else
                { /* block id: 467 */
                    uint16_t l_1149 = 0x83E9L;
                    int8_t *l_1151 = &l_1085;
                    uint64_t *l_1152 = &p_1246->g_310;
                    uint32_t *l_1168 = (void*)0;
                    uint32_t *l_1169 = (void*)0;
                    uint32_t *l_1170 = (void*)0;
                    uint32_t *l_1171 = (void*)0;
                    uint32_t *l_1172 = (void*)0;
                    int16_t *l_1212 = &p_1246->g_175;
                    p_1246->g_1028.x ^= (((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(GROUP_DIVERGE(1, 1), (((*l_1152) = (safe_add_func_int32_t_s_s(l_888[6][0][5], ((safe_lshift_func_int8_t_s_u(((-4L) | (safe_rshift_func_uint16_t_u_u((((l_1135 == l_1136) , (*p_1246->g_972)) != (void*)0), 0))), 6)) | ((*l_1151) &= ((((GROUP_DIVERGE(2, 1) > (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0L, 0x70L)), (-1L), ((VECTOR(int8_t, 2))(p_1246->g_1137.xx)), (-1L), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(0x23L, ((VECTOR(int8_t, 2))(0L, 0x1EL)), 0x30L, ((VECTOR(int8_t, 2))(0x01L, (-10L))), 0L, 4L)))), 0x18L, 0x23L)), ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(p_1246->g_1138.zwxz)).zyyzyxwz, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_1139.wxwwyxzw)).hi)).even, ((VECTOR(int8_t, 8))(l_1140.se4c4a0c2)).s21, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x2FL, 0L)), 0x34L, 0x02L)).lo))).xyyyyxxxyyxxxxxy)).hi))).s0404775553552374))).s57, ((VECTOR(int8_t, 2))(0x35L, 5L))))).yyyxyyyxxxxyxxxy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(l_1141.wz)).xxxxxyyxxyyxxxxy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_1246->g_1142.xxyyxxxy)).s65)).xxyx, ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 8))(l_1143.yxxyyyxy)).even, (int8_t)((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(p_1246->g_1144.s9109)).even, ((VECTOR(int8_t, 8))(p_1246->g_1145.xwzzwwzw)).s41))).hi, (int8_t)0L)))))).zzxwyzzw, ((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 2))(0x54L, (-8L))).yxxy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x53L, 0L)))), 1L, 0x56L)).yzwzxwxw)).hi))).yzwxzyyw))).s05, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 2))(0x0DL, (-1L))).xyxyxxxx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(p_1246->g_1146.xwywzwwz)).odd)))).wywyywzx))).s33))))), ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((l_1147 > (((*p_1246->g_870) |= ((VECTOR(uint16_t, 16))(l_1148.xyyyxyyxyyxxyyxy)).sd) > ((&p_1246->g_158 != &l_933) >= (*l_932)))), 0x1AL, ((VECTOR(int8_t, 2))(0x6CL)), l_1149, p_1246->g_155, 7L, 0x3AL)), 9L, ((VECTOR(int8_t, 4))(0x35L)), l_1149, 0L, 0x40L)).hi))).s71, ((VECTOR(int8_t, 2))(0x49L))))).xxxyxxyxxyyyyyyx)).hi))).s51))), l_1150, 0x0EL, ((VECTOR(int8_t, 2))(0L)), 9L, (-9L))).s2417755702773754))).even)).s5000172270460114, ((VECTOR(int8_t, 16))(0x51L))))).s3f)))).odd && (*p_1246->g_359))) & 0x636F5849E84CF2A3L) > p_1246->g_1138.y) | 0x63FA6569L)))))) , (*p_1246->g_870)), 0UL, 1UL, l_888[0][0][4], ((VECTOR(uint16_t, 2))(0UL)), 0x6FFDL)).s6563400505766366)), ((VECTOR(uint16_t, 16))(0x10A7L))))))).even, (uint16_t)(*l_932), (uint16_t)l_1153))).s13, ((VECTOR(uint16_t, 2))(65531UL))))).odd <= (*l_933));
                    (*l_933) |= (((VECTOR(uint16_t, 2))(0UL, 0x1D03L)).even ^ (((p_1246->g_175 >= (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(p_1246->g_81, (~(safe_sub_func_uint8_t_u_u((((VECTOR(uint64_t, 2))(18446744073709551607UL, 0x9B9A07FC30D1A566L)).hi < ((VECTOR(uint64_t, 4))(l_1160.s5553)).w), p_1246->g_161.x))))) ^ (((VECTOR(uint32_t, 2))(l_1161.yy)).even , (p_1246->g_484.s1 ^ ((p_1246->g_345.s2 = (p_1246->g_950.sc = (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(p_1246->g_1164.s7850)).wxzwyyzy, ((VECTOR(int32_t, 2))(0x6406DE85L, 9L)).xyyyxyxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))((&p_1246->g_179 == (((-5L) || (-1L)) , l_1127)), (-4L), (FAKE_DIVERGE(p_1246->group_0_offset, get_group_id(0), 10) , ((safe_sub_func_int16_t_s_s(((p_1246->g_985.x , l_1167) == (void*)0), p_1246->g_751.y)) >= 0x17794655A02D766AL)), ((VECTOR(int32_t, 4))(0x4B7A915CL)), 9L)).s01, ((VECTOR(int32_t, 2))((-1L)))))))).xyyyyxxyxyxyyxyy)).odd))).s5, l_1110)))) >= l_949.y)))), l_1031.s3))) , (-1L)) > l_1149));
                    p_1246->g_985.y &= (safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(((p_1246->g_471.s4 = (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(0x9CC0ECD1DB665DCAL, 0xC3F550F86ECA5A20L)).even, (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(l_1107, (l_1149 < ((**l_964) = (*l_933))))), ((safe_mul_func_int8_t_s_s(p_1246->g_1029.x, ((++p_1246->g_950.s9) <= (safe_lshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s((((VECTOR(int16_t, 4))(p_1246->g_1194.s5fa3)).x , ((VECTOR(int32_t, 2))(0x64D95D85L, 0L)).odd), (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1246->g_1197.s6d)), 0x283E9728L, 0L)).odd)).hi, ((safe_rshift_func_uint8_t_u_u((*l_932), 7)) > (((*l_1212) &= ((safe_mod_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_s(((((*l_1152) = 0x463682F6F9F5D141L) , ((((*p_1246->g_870) = (((((((p_1246->g_344.x == l_1204) != (safe_lshift_func_int8_t_s_s(((((VECTOR(int16_t, 2))(0x2FA9L, 1L)).even ^ FAKE_DIVERGE(p_1246->global_0_offset, get_global_id(0), 10)) , (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((((((!(*p_1246->g_870)) <= (*l_932)) >= l_1149) , l_1149) < 0xCAL), (*p_1246->g_870))), p_1246->g_339.s4))), 7))) || l_1187) < l_1149) , l_1168) == (void*)0) > 0x0F72073D1AC67165L)) , (void*)0) != (void*)0)) >= 0x3AAFL), l_1187)) , l_1149) , l_1211) < 0x61A9L), (-1L))) , (-1L))) || 0x3B5CL)))))) && (*p_1246->g_974)), 12))))) | GROUP_DIVERGE(0, 1)))))) > l_1213), p_1246->g_906.w))) > (-1L)), 7)) , 0x00EBL), 0L));
                }
            }
            for (l_1153 = (-10); (l_1153 <= 30); ++l_1153)
            { /* block id: 486 */
                int32_t **l_1219 = (void*)0;
                int32_t **l_1221[4] = {&p_1246->g_158,&p_1246->g_158,&p_1246->g_158,&p_1246->g_158};
                int i;
                if ((atomic_inc(&p_1246->g_atomic_input[30 * get_linear_group_id() + 19]) == 6))
                { /* block id: 488 */
                    int32_t l_1217 = 0x5F8183CCL;
                    int32_t *l_1216[6] = {&l_1217,(void*)0,&l_1217,&l_1217,(void*)0,&l_1217};
                    uint32_t l_1218 = 1UL;
                    int i;
                    l_1216[2] = l_1216[4];
                    l_1218 |= 5L;
                    unsigned int result = 0;
                    result += l_1217;
                    result += l_1218;
                    atomic_add(&p_1246->g_special_values[30 * get_linear_group_id() + 19], result);
                }
                else
                { /* block id: 491 */
                    (1 + 1);
                }
                l_1222 = (*p_1246->g_934);
                if ((*l_932))
                    break;
            }
        }
        --l_1241;
    }
    l_1245 |= (0x043A973B48867A15L ^ (*l_932));
    return (*l_932);
}


/* ------------------------------------------ */
/* 
 * reads : p_1246->g_272 p_1246->g_314 p_1246->g_799 p_1246->g_359 p_1246->g_88 p_1246->g_690 p_1246->g_158 p_1246->g_190 p_1246->g_788 p_1246->g_50 p_1246->g_345 p_1246->g_81 p_1246->g_735 p_1246->l_comm_values p_1246->g_259 p_1246->g_862 p_1246->g_872
 * writes: p_1246->g_272 p_1246->g_314 p_1246->g_799 p_1246->g_81 p_1246->g_263 p_1246->g_259 p_1246->g_869 p_1246->g_190
 */
int32_t  func_12(int32_t  p_13, uint32_t  p_14, uint32_t  p_15, uint8_t  p_16, uint16_t  p_17, struct S0 * p_1246)
{ /* block id: 260 */
    int32_t l_658 = 1L;
    int32_t l_662 = 9L;
    int32_t l_663 = 0L;
    int32_t l_664 = 0x4A3357E6L;
    int32_t l_665 = 0x2BDEF2CAL;
    int32_t l_666 = 2L;
    int32_t l_668[4] = {0x076332B7L,0x076332B7L,0x076332B7L,0x076332B7L};
    int32_t l_669[8][4] = {{0x67A51BB8L,(-2L),0x67A51BB8L,0x67A51BB8L},{0x67A51BB8L,(-2L),0x67A51BB8L,0x67A51BB8L},{0x67A51BB8L,(-2L),0x67A51BB8L,0x67A51BB8L},{0x67A51BB8L,(-2L),0x67A51BB8L,0x67A51BB8L},{0x67A51BB8L,(-2L),0x67A51BB8L,0x67A51BB8L},{0x67A51BB8L,(-2L),0x67A51BB8L,0x67A51BB8L},{0x67A51BB8L,(-2L),0x67A51BB8L,0x67A51BB8L},{0x67A51BB8L,(-2L),0x67A51BB8L,0x67A51BB8L}};
    int32_t l_670[3][8] = {{0x42F7057BL,0L,0x70C5C84DL,0L,0x42F7057BL,0x42F7057BL,0L,0x70C5C84DL},{0x42F7057BL,0L,0x70C5C84DL,0L,0x42F7057BL,0x42F7057BL,0L,0x70C5C84DL},{0x42F7057BL,0L,0x70C5C84DL,0L,0x42F7057BL,0x42F7057BL,0L,0x70C5C84DL}};
    VECTOR(int32_t, 8) l_750 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0L), 0L), 0L, 3L, 0L);
    VECTOR(int16_t, 2) l_755 = (VECTOR(int16_t, 2))((-6L), 7L);
    uint8_t **l_785 = &p_1246->g_359;
    uint32_t l_786 = 0x120520D1L;
    uint32_t l_806 = 0xD4C4ECC4L;
    uint64_t *l_853 = &p_1246->g_310;
    uint64_t **l_852[2];
    uint16_t *l_868 = &p_1246->g_59;
    uint16_t **l_867 = &l_868;
    uint16_t ***l_866[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(int64_t, 2) l_871 = (VECTOR(int64_t, 2))(6L, 0L);
    int i, j;
    for (i = 0; i < 2; i++)
        l_852[i] = &l_853;
    for (p_1246->g_272 = 19; (p_1246->g_272 < 57); p_1246->g_272++)
    { /* block id: 263 */
        int32_t *l_659 = &p_1246->g_190;
        int32_t *l_660 = &l_658;
        int32_t *l_661[5];
        int8_t l_667[5] = {0x1DL,0x1DL,0x1DL,0x1DL,0x1DL};
        uint64_t l_671 = 18446744073709551608UL;
        int16_t *l_682 = &p_1246->g_50;
        VECTOR(uint16_t, 4) l_685 = (VECTOR(uint16_t, 4))(0x24C4L, (VECTOR(uint16_t, 2))(0x24C4L, 65532UL), 65532UL);
        VECTOR(uint16_t, 8) l_747 = (VECTOR(uint16_t, 8))(0x75ACL, (VECTOR(uint16_t, 4))(0x75ACL, (VECTOR(uint16_t, 2))(0x75ACL, 0x1F27L), 0x1F27L), 0x1F27L, 0x75ACL, 0x1F27L);
        VECTOR(int32_t, 16) l_749 = (VECTOR(int32_t, 16))(0x25348679L, (VECTOR(int32_t, 4))(0x25348679L, (VECTOR(int32_t, 2))(0x25348679L, 0x0EB8C8BDL), 0x0EB8C8BDL), 0x0EB8C8BDL, 0x25348679L, 0x0EB8C8BDL, (VECTOR(int32_t, 2))(0x25348679L, 0x0EB8C8BDL), (VECTOR(int32_t, 2))(0x25348679L, 0x0EB8C8BDL), 0x25348679L, 0x0EB8C8BDL, 0x25348679L, 0x0EB8C8BDL);
        uint8_t *l_778 = (void*)0;
        int64_t ****l_801 = &p_1246->g_799[1][0][0];
        VECTOR(int64_t, 16) l_827 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x051FCBC5F34C4489L), 0x051FCBC5F34C4489L), 0x051FCBC5F34C4489L, 1L, 0x051FCBC5F34C4489L, (VECTOR(int64_t, 2))(1L, 0x051FCBC5F34C4489L), (VECTOR(int64_t, 2))(1L, 0x051FCBC5F34C4489L), 1L, 0x051FCBC5F34C4489L, 1L, 0x051FCBC5F34C4489L);
        int32_t l_830 = 0L;
        VECTOR(int16_t, 2) l_843 = (VECTOR(int16_t, 2))(1L, 0x1B67L);
        uint64_t *l_851 = &p_1246->g_310;
        uint64_t **l_850[6] = {&l_851,&l_851,&l_851,&l_851,&l_851,&l_851};
        int i;
        for (i = 0; i < 5; i++)
            l_661[i] = (void*)0;
        --l_671;
        for (p_1246->g_314 = (-13); (p_1246->g_314 == (-15)); p_1246->g_314 = safe_sub_func_int8_t_s_s(p_1246->g_314, 2))
        { /* block id: 267 */
            uint64_t l_678 = 0xB606BC630891FAD5L;
            int32_t l_679 = 0x1CE8164DL;
            VECTOR(uint64_t, 8) l_684 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 1UL, 18446744073709551614UL);
            VECTOR(int64_t, 2) l_731 = (VECTOR(int64_t, 2))((-1L), 0L);
            VECTOR(int16_t, 8) l_754 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
            uint64_t l_782 = 18446744073709551615UL;
            int32_t l_789 = 0x045C508AL;
            int32_t l_790 = 0x5C92DD13L;
            int32_t l_791 = (-5L);
            int32_t l_792 = 0L;
            int32_t l_793 = 2L;
            int32_t l_794 = 0x22F524F4L;
            int32_t l_795[8][2][1] = {{{(-5L)},{(-5L)}},{{(-5L)},{(-5L)}},{{(-5L)},{(-5L)}},{{(-5L)},{(-5L)}},{{(-5L)},{(-5L)}},{{(-5L)},{(-5L)}},{{(-5L)},{(-5L)}},{{(-5L)},{(-5L)}}};
            int i, j, k;
            for (p_15 = 0; (p_15 <= 22); p_15 = safe_add_func_uint8_t_u_u(p_15, 3))
            { /* block id: 270 */
                int16_t **l_683 = &l_682;
                int32_t l_732[1];
                uint8_t *l_779 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_732[i] = 0L;
                (1 + 1);
            }
        }
        if ((((&p_1246->g_689[4] != ((*l_801) = p_1246->g_799[1][0][0])) , (l_668[1] < (p_17 <= (!(l_662 , ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((l_806 , &p_13) != (void*)0), (((+(+(((l_666 == p_17) && p_16) , (*p_1246->g_359)))) >= (*p_1246->g_359)) || 1UL))), (*p_1246->g_359))) , p_1246->g_88.s7)))))) || p_13))
        { /* block id: 306 */
            int32_t **l_807 = &l_659;
            if ((((*l_807) = (void*)0) == (*p_1246->g_690)))
            { /* block id: 308 */
                uint8_t l_810 = 0x89L;
                for (p_13 = 4; (p_13 == (-17)); p_13 = safe_sub_func_uint8_t_u_u(p_13, 4))
                { /* block id: 311 */
                    l_810 = (**p_1246->g_690);
                    if (l_670[1][7])
                        continue;
                }
                return (**p_1246->g_788);
            }
            else
            { /* block id: 316 */
                uint8_t l_828 = 4UL;
                uint64_t *l_829 = &l_671;
                int32_t l_859 = 0L;
                if ((*p_1246->g_158))
                    break;
                if ((safe_add_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((GROUP_DIVERGE(2, 1) <= (safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(p_14, (safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(0, 1), (**p_1246->g_788))))) ^ ((FAKE_DIVERGE(p_1246->global_2_offset, get_global_id(2), 10) > p_17) & ((*l_829) |= (safe_mul_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(p_1246->g_50, (safe_mod_func_int32_t_s_s((p_1246->g_345.s1 ^ ((~p_13) || (((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 4))(l_827.s62b3)).zxxwywxx, ((VECTOR(int64_t, 2))(0x011D929B23422205L, (-1L))).yyyyyxxy))).s3 != l_828))), p_16)))) != 0L), p_15))))), (*p_1246->g_158)))) , (*p_1246->g_359)), 0x2DL)) != l_828), l_830)))
                { /* block id: 319 */
                    return (**p_1246->g_788);
                }
                else
                { /* block id: 321 */
                    uint32_t l_833 = 9UL;
                    for (p_1246->g_81 = 0; (p_1246->g_81 >= 10); p_1246->g_81 = safe_add_func_uint8_t_u_u(p_1246->g_81, 2))
                    { /* block id: 324 */
                        int64_t l_842 = 0x367585F7D6428DC5L;
                        uint16_t *l_856 = (void*)0;
                        uint16_t *l_857 = &p_1246->g_263;
                        int8_t *l_858 = (void*)0;
                        atomic_max(&p_1246->g_atomic_reduction[get_linear_group_id()], (((VECTOR(uint64_t, 8))(0x7D6BF8E9A83AF06AL, l_833, ((l_859 |= (p_1246->g_259 = (safe_add_func_uint8_t_u_u(p_13, (safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(l_842, 1)) && 0x121BA45DL), ((VECTOR(int16_t, 4))(l_843.yyxy)).z)), (safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((l_850[1] != l_852[0]), (((*l_857) = ((safe_div_func_uint32_t_u_u((((p_15 <= (p_16 , ((*l_829) &= GROUP_DIVERGE(0, 1)))) , l_842) , GROUP_DIVERGE(1, 1)), p_1246->g_735.y)) , p_1246->g_345.s0)) , p_1246->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1246->tid, 79))]))) | 0L), p_1246->g_259)), 2UL)))))))) != (*p_1246->g_359)), ((VECTOR(uint64_t, 4))(0x318F4680A5A5F914L)), 0xFE159D0E6C46631DL)).s7 , 1L) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1246->v_collective += p_1246->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                }
            }
        }
        else
        { /* block id: 333 */
            int32_t *l_861 = (void*)0;
            l_861 = &l_669[1][3];
            if ((*p_1246->g_158))
                break;
        }
        return l_663;
    }
    (*p_1246->g_158) |= (((&p_1246->g_359 != l_785) <= p_1246->g_735.x) ^ ((((p_1246->g_862 != (p_1246->g_869[2] = (void*)0)) && ((VECTOR(int64_t, 2))(l_871.xy)).odd) , ((VECTOR(int64_t, 4))(p_1246->g_872.s2033)).z) , (safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_1246->global_2_offset, get_global_id(2), 10), ((!(safe_lshift_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), p_15))) , ((void*)0 == &p_1246->g_180))))));
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_1246->g_346 p_1246->g_314 p_1246->g_158 p_1246->g_359 p_1246->g_272 p_1246->g_344 p_1246->g_345 p_1246->g_190 p_1246->g_161 p_1246->g_20
 * writes: p_1246->g_611 p_1246->g_612 p_1246->g_613 p_1246->g_614 p_1246->g_310 p_1246->g_359 p_1246->g_190 p_1246->g_175 p_1246->g_161 p_1246->g_475
 */
uint8_t  func_21(int32_t  p_22, int8_t  p_23, struct S0 * p_1246)
{ /* block id: 245 */
    uint32_t **l_604 = &p_1246->g_180;
    VECTOR(uint32_t, 16) l_605 = (VECTOR(uint32_t, 16))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 4294967289UL), 4294967289UL), 4294967289UL, 4294967294UL, 4294967289UL, (VECTOR(uint32_t, 2))(4294967294UL, 4294967289UL), (VECTOR(uint32_t, 2))(4294967294UL, 4294967289UL), 4294967294UL, 4294967289UL, 4294967294UL, 4294967289UL);
    VECTOR(uint32_t, 8) l_606 = (VECTOR(uint32_t, 8))(0xD868CC16L, (VECTOR(uint32_t, 4))(0xD868CC16L, (VECTOR(uint32_t, 2))(0xD868CC16L, 1UL), 1UL), 1UL, 0xD868CC16L, 1UL);
    int64_t *l_609 = (void*)0;
    int64_t **l_610[3];
    uint64_t *l_615 = (void*)0;
    uint64_t *l_616 = (void*)0;
    uint64_t *l_617 = &p_1246->g_310;
    VECTOR(uint64_t, 8) l_618 = (VECTOR(uint64_t, 8))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0x055890A4B7B17F2EL), 0x055890A4B7B17F2EL), 0x055890A4B7B17F2EL, 9UL, 0x055890A4B7B17F2EL);
    VECTOR(uint64_t, 2) l_619 = (VECTOR(uint64_t, 2))(0UL, 0x7024EC77383D4558L);
    VECTOR(uint64_t, 2) l_620 = (VECTOR(uint64_t, 2))(1UL, 1UL);
    VECTOR(uint64_t, 4) l_621 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x0C386F31924B3ED1L), 0x0C386F31924B3ED1L);
    VECTOR(uint64_t, 8) l_622 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xD37540167696790DL), 0xD37540167696790DL), 0xD37540167696790DL, 18446744073709551615UL, 0xD37540167696790DL);
    uint8_t *l_627 = &p_1246->g_272;
    uint8_t **l_628 = &p_1246->g_359;
    VECTOR(uint16_t, 4) l_629 = (VECTOR(uint16_t, 4))(0xED23L, (VECTOR(uint16_t, 2))(0xED23L, 0x1E24L), 0x1E24L);
    VECTOR(int8_t, 4) l_632 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 2L), 2L);
    VECTOR(uint64_t, 4) l_635 = (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xC480354284AC832CL), 0xC480354284AC832CL);
    int64_t ***l_638 = &l_610[2];
    int32_t l_639 = 0x664BE4FCL;
    int16_t l_646[1][10][9] = {{{9L,9L,9L,9L,9L,9L,9L,9L,9L},{9L,9L,9L,9L,9L,9L,9L,9L,9L},{9L,9L,9L,9L,9L,9L,9L,9L,9L},{9L,9L,9L,9L,9L,9L,9L,9L,9L},{9L,9L,9L,9L,9L,9L,9L,9L,9L},{9L,9L,9L,9L,9L,9L,9L,9L,9L},{9L,9L,9L,9L,9L,9L,9L,9L,9L},{9L,9L,9L,9L,9L,9L,9L,9L,9L},{9L,9L,9L,9L,9L,9L,9L,9L,9L},{9L,9L,9L,9L,9L,9L,9L,9L,9L}}};
    uint32_t *l_649 = (void*)0;
    uint16_t *l_653 = &p_1246->g_59;
    uint16_t **l_652[8] = {&l_653,&l_653,&l_653,&l_653,&l_653,&l_653,&l_653,&l_653};
    int32_t l_654 = 0L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_610[i] = &l_609;
    (*p_1246->g_158) = ((safe_add_func_int64_t_s_s((~(l_604 == (void*)0)), ((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 2))(18446744073709551612UL, 18446744073709551608UL)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 4))(l_605.sb5f0)).yxzwzxyzwzywwxxz, ((VECTOR(uint32_t, 2))(l_606.s63)).xxyyxxyyyxxxyyyx))), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 2))(0UL, 18446744073709551606UL)), ((VECTOR(uint64_t, 4))(((*l_617) = (safe_rshift_func_int8_t_s_s((&p_1246->g_199 != (p_1246->g_614 = (p_1246->g_613 = (p_1246->g_612 = (p_1246->g_611 = l_609))))), 2))), 1UL, 0xE04D5883799EBA9CL, 18446744073709551611UL)).lo))).xxxx)).xxxyzwxzxywywxzw))).sc5, ((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_618.s6026)), 1UL, ((VECTOR(uint64_t, 2))(l_619.yx)), 18446744073709551615UL)).s30, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_620.yxxxxyxyyxxxyxxy)).s40)), 0x398882BC8329D447L, 5UL)), ((VECTOR(uint64_t, 2))(0xAED50E9AD7998836L, 0xB23891F2C7908F29L)).yxxx))))))).odd, ((VECTOR(uint64_t, 2))(0xDD3BF2E0C6508ED9L, 0xC23A0860D74314ABL)))))))).xyxyyxyx)).s74, ((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_621.yxxy)))).wxyyxwyxxwzwwxyz)).sc0, ((VECTOR(uint64_t, 16))(l_622.s7640061323540046)).s21, ((VECTOR(uint64_t, 8))(8UL, 0UL, ((safe_lshift_func_int8_t_s_u(((l_620.x & ((safe_sub_func_int8_t_s_s((l_627 != ((*l_628) = l_627)), 255UL)) , (((VECTOR(uint16_t, 2))(l_629.xy)).lo > ((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_632.zx)))), 1L, (-3L))).x, 6)) ^ (safe_rshift_func_int8_t_s_s(((p_1246->g_346.y | l_620.y) , p_23), p_22)))))) > p_23), p_1246->g_314)) >= l_605.s6), 18446744073709551613UL, GROUP_DIVERGE(0, 1), p_1246->g_346.x, 4UL, 0x6235EA4F63DE7205L)).s46))).xyyy)), ((VECTOR(uint64_t, 4))(18446744073709551615UL)), ((VECTOR(uint64_t, 4))(0xED7BEF90154347D0L))))).wzwxxwzwzzwwwwww)).seec6)).ywzxxywxxxxxwzyz)).lo, (uint64_t)0x5667513E172FA374L))), ((VECTOR(uint64_t, 8))(0x37974472F7BAD963L))))).s66))).yxyxyxxyyxyyyxyy)), ((VECTOR(uint64_t, 16))(1UL))))).sf)) && l_632.x);
    p_1246->g_475[0][3][1] = func_60(l_622.s1, (((l_619.y || (p_22 == (((VECTOR(uint64_t, 8))(l_635.zxwwzwxw)).s0 | (safe_rshift_func_uint16_t_u_s(((l_639 = (&l_609 == ((*l_638) = &p_1246->g_612))) , (safe_sub_func_uint64_t_u_u(l_639, l_620.y))), 7))))) , ((18446744073709551615UL | (safe_div_func_uint8_t_u_u((l_639 = (safe_rshift_func_int8_t_s_s(((l_635.z || p_22) && (*p_1246->g_359)), 3))), (*p_1246->g_359)))) <= l_646[0][3][2])) , p_1246->g_344.y), p_23, p_23, p_1246->g_345.s1, p_1246);
    (*p_1246->g_158) = ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))((l_621.w <= ((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))(((safe_lshift_func_uint16_t_u_u(((p_23 , l_649) != (void*)0), 8)) , (-1L)), 0x0B55L, (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))((l_652[7] == (void*)0), 0L, ((VECTOR(int16_t, 4))(3L, 0x60B6L, (-9L), 0x05FFL)), 4L, 0L)).even)).zwzxxxww)).even))).x, ((p_23 != ((l_646[0][3][2] != l_654) <= p_23)) & p_1246->g_345.s0))), ((VECTOR(int16_t, 4))(0L)), 0x27C3L)), ((VECTOR(int16_t, 8))(0x5EF7L))))))).s6 == p_1246->g_20.x) , 0L)), 0L, (-1L), 1L, (-1L), 0x5594B7BCL, p_23, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 4))((-9L))), (-1L))).even, ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))(0L))))).s03, ((VECTOR(int32_t, 2))(1L))))).lo;
    return (*p_1246->g_359);
}


/* ------------------------------------------ */
/* 
 * reads : p_1246->g_346
 * writes:
 */
int32_t  func_24(uint16_t  p_25, uint64_t  p_26, int64_t  p_27, struct S0 * p_1246)
{ /* block id: 243 */
    return p_1246->g_346.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1246->g_59 p_1246->g_2 p_1246->g_81 p_1246->g_88 p_1246->g_comm_values p_1246->g_55 p_1246->g_44 p_1246->l_comm_values p_1246->g_50 p_1246->g_175 p_1246->g_161 p_1246->g_199 p_1246->g_155 p_1246->g_20 p_1246->g_238 p_1246->g_179 p_1246->g_263 p_1246->g_272 p_1246->g_190 p_1246->g_314 p_1246->g_310 p_1246->g_339 p_1246->g_471 p_1246->g_51 p_1246->g_3 p_1246->g_360 p_1246->g_345 p_1246->g_158 p_1246->g_484 p_1246->g_600
 * writes: p_1246->g_59 p_1246->g_2 p_1246->g_81 p_1246->g_3 p_1246->g_55 p_1246->g_158 p_1246->g_155 p_1246->g_175 p_1246->g_178 p_1246->g_180 p_1246->g_190 p_1246->g_207 p_1246->g_238 p_1246->g_259 p_1246->g_263 p_1246->g_272 p_1246->g_314 p_1246->g_310 p_1246->g_339 p_1246->g_179 p_1246->g_88 p_1246->g_51 p_1246->g_50 p_1246->g_161 p_1246->g_600
 */
uint8_t  func_28(uint32_t  p_29, int16_t  p_30, uint16_t  p_31, uint32_t  p_32, uint16_t  p_33, struct S0 * p_1246)
{ /* block id: 19 */
    int64_t l_57 = (-3L);
    uint16_t *l_58 = &p_1246->g_59;
    VECTOR(uint32_t, 8) l_74 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967294UL), 4294967294UL), 4294967294UL, 1UL, 4294967294UL);
    VECTOR(uint32_t, 8) l_75 = (VECTOR(uint32_t, 8))(0xCE2E6445L, (VECTOR(uint32_t, 4))(0xCE2E6445L, (VECTOR(uint32_t, 2))(0xCE2E6445L, 4294967288UL), 4294967288UL), 4294967288UL, 0xCE2E6445L, 4294967288UL);
    int32_t *l_80 = &p_1246->g_81;
    VECTOR(int16_t, 16) l_82 = (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0x623BL), 0x623BL), 0x623BL, (-3L), 0x623BL, (VECTOR(int16_t, 2))((-3L), 0x623BL), (VECTOR(int16_t, 2))((-3L), 0x623BL), (-3L), 0x623BL, (-3L), 0x623BL);
    int32_t *l_87 = &p_1246->g_3;
    VECTOR(int64_t, 16) l_89 = (VECTOR(int64_t, 16))(0x0DA34DBBD83FE2F7L, (VECTOR(int64_t, 4))(0x0DA34DBBD83FE2F7L, (VECTOR(int64_t, 2))(0x0DA34DBBD83FE2F7L, 0x38ADFEA0260AD585L), 0x38ADFEA0260AD585L), 0x38ADFEA0260AD585L, 0x0DA34DBBD83FE2F7L, 0x38ADFEA0260AD585L, (VECTOR(int64_t, 2))(0x0DA34DBBD83FE2F7L, 0x38ADFEA0260AD585L), (VECTOR(int64_t, 2))(0x0DA34DBBD83FE2F7L, 0x38ADFEA0260AD585L), 0x0DA34DBBD83FE2F7L, 0x38ADFEA0260AD585L, 0x0DA34DBBD83FE2F7L, 0x38ADFEA0260AD585L);
    int64_t *l_477[4];
    int16_t l_478 = (-1L);
    int64_t l_598[4][3] = {{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}};
    int32_t *l_599 = &p_1246->g_600;
    int i, j;
    for (i = 0; i < 4; i++)
        l_477[i] = (void*)0;
    p_1246->g_2 &= (0x21L ^ ((l_57 | (((*l_58) &= l_57) | (-1L))) ^ l_57));
    (*l_599) &= (func_36((((((l_57 , func_60(((safe_mul_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((safe_div_func_int8_t_s_s((((~((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_74.s0754)), ((VECTOR(uint32_t, 2))(0x5A07F58EL, 0UL)), ((VECTOR(uint32_t, 8))(l_75.s01175661)), 4294967294UL, 0x0679804EL)).s6) , func_76(((*l_80) &= (0xE4L <= FAKE_DIVERGE(p_1246->group_1_offset, get_group_id(1), 10))), (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_82.sa0e3)).odd)).xyyxxxxxxyxxyxyy, ((VECTOR(int16_t, 2))(0x341AL, 0x168CL)).yxxyxyxxxxyxyyyy))).odd)))).s4 || (safe_mul_func_int16_t_s_s((p_1246->g_59 & 0x1B63L), func_36((p_1246->g_88.s7 = (safe_mod_func_int16_t_s_s((((*l_87) = p_30) >= ((VECTOR(uint32_t, 16))((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 4))(p_1246->g_88.s7312)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(p_33, (-4L), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_89.sb88f)), ((VECTOR(int64_t, 4))(1L, (-3L), 1L, 0L)))), (((safe_sub_func_uint64_t_u_u((p_30 || ((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(0UL, func_94(func_100(((safe_mul_func_uint16_t_u_u((0L | (l_82.s4 < p_30)), p_1246->g_59)) , (void*)0), p_32, &l_57, p_1246->g_comm_values[p_1246->tid], p_1246), l_87, p_31, &p_1246->g_179, l_80, p_1246), 0UL, 0xB6E89145L)).x, 0xA778A836L)) >= 0x5BL)), p_29)) != l_75.s1) | p_1246->g_471.s0), (-2L), p_32, p_29, (-3L), 7L)).s03c4))))).yyyyxxzyzyywzzyy, ((VECTOR(int64_t, 16))(0x3F2215A22E7760B8L))))).s827b, ((VECTOR(int64_t, 4))(1L))))).even, ((VECTOR(int64_t, 2))((-5L)))))).yxxxyyxyyxyxxyyy)).s3 && p_30), 0x604D18A0L, 0x15A2E946L, p_31, 0xC5195C28L, 0xB70134C7L, ((VECTOR(uint32_t, 2))(0x6A5C21D1L)), 0x3FBEA931L, 4294967295UL, ((VECTOR(uint32_t, 2))(4294967295UL)), ((VECTOR(uint32_t, 4))(0x68825864L)))).s6), p_32))), p_32, p_32, l_74.s7, p_1246)))), l_478, p_1246)) | 0L), GROUP_DIVERGE(0, 1))) | p_1246->g_59), l_74.s6)), p_1246->g_360.z)) , (*l_87)) >= p_30), p_1246->g_360.w)) == 3UL), p_1246->g_345.s7, p_32, p_32, p_1246->g_161.w, p_1246)) != l_87) | 0xB460D4F9L) == p_1246->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1246->tid, 79))]) != l_598[0][2]), p_1246->g_471.sa, p_1246->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1246->tid, 79))], p_29, p_1246) || (*l_87));
    return p_32;
}


/* ------------------------------------------ */
/* 
 * reads : p_1246->g_51 p_1246->g_20 p_1246->g_3 p_1246->g_2
 * writes: p_1246->g_51 p_1246->g_2 p_1246->g_3
 */
int8_t  func_36(int64_t  p_37, int64_t  p_38, uint32_t  p_39, int64_t  p_40, struct S0 * p_1246)
{ /* block id: 12 */
    int32_t *l_47 = &p_1246->g_3;
    int32_t *l_48 = &p_1246->g_3;
    int32_t *l_49[4][7] = {{&p_1246->g_3,&p_1246->g_3,(void*)0,&p_1246->g_3,&p_1246->g_3,&p_1246->g_3,(void*)0},{&p_1246->g_3,&p_1246->g_3,(void*)0,&p_1246->g_3,&p_1246->g_3,&p_1246->g_3,(void*)0},{&p_1246->g_3,&p_1246->g_3,(void*)0,&p_1246->g_3,&p_1246->g_3,&p_1246->g_3,(void*)0},{&p_1246->g_3,&p_1246->g_3,(void*)0,&p_1246->g_3,&p_1246->g_3,&p_1246->g_3,(void*)0}};
    int i, j;
    ++p_1246->g_51;
    p_1246->g_2 = p_1246->g_20.x;
    p_1246->g_2 &= (*l_48);
    (*l_48) ^= p_39;
    return p_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_1246->g_158 p_1246->g_190 p_1246->g_484 p_1246->g_238 p_1246->g_161
 * writes: p_1246->g_190 p_1246->g_50 p_1246->g_175 p_1246->g_161
 */
int32_t * func_60(int8_t  p_61, int32_t  p_62, uint32_t  p_63, uint64_t  p_64, uint64_t  p_65, struct S0 * p_1246)
{ /* block id: 184 */
    int32_t *l_482 = &p_1246->g_190;
    VECTOR(uint32_t, 16) l_483 = (VECTOR(uint32_t, 16))(0x4A432665L, (VECTOR(uint32_t, 4))(0x4A432665L, (VECTOR(uint32_t, 2))(0x4A432665L, 4294967295UL), 4294967295UL), 4294967295UL, 0x4A432665L, 4294967295UL, (VECTOR(uint32_t, 2))(0x4A432665L, 4294967295UL), (VECTOR(uint32_t, 2))(0x4A432665L, 4294967295UL), 0x4A432665L, 4294967295UL, 0x4A432665L, 4294967295UL);
    int16_t *l_501 = &p_1246->g_50;
    int8_t l_502 = 0x2FL;
    int16_t *l_503 = (void*)0;
    int16_t *l_504 = (void*)0;
    int16_t *l_505 = (void*)0;
    int32_t *l_506[6][2];
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
            l_506[i][j] = &p_1246->g_155;
    }
    (*p_1246->g_158) = (*p_1246->g_158);
    p_1246->g_161.y ^= (safe_add_func_int16_t_s_s((p_1246->g_175 = ((((l_482 != (void*)0) , ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(FAKE_DIVERGE(p_1246->local_0_offset, get_local_id(0), 10), 18446744073709551615UL, ((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551611UL)).yyyxyxyx, (uint64_t)GROUP_DIVERGE(1, 1), (uint64_t)((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 2))(l_483.sc6)).xxxy, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_1246->g_484.s1135)), (0x91L | ((p_1246->g_238 , ((VECTOR(uint64_t, 2))(18446744073709551612UL, 0xB560384CE1AAF010L)).lo) >= (safe_mod_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(0x4B5F1CF3L, (((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((+(safe_sub_func_int16_t_s_s(((((((0xEF85L & (safe_sub_func_int32_t_s_s((-1L), (p_62 ^ ((*l_501) = (safe_lshift_func_int16_t_s_s((((*l_482) & (*l_482)) != p_65), 12))))))) , p_61) != (*l_482)) , (*l_482)) || p_61) == (*l_482)), 0x32FAL))), p_63)), 14)) == 0xCFD0C9F992E5A557L) ^ 1L))) & (*l_482)), 0xACL)))), 9UL, 1UL, 0xDCC876DAL, 8UL, 4UL, l_502, ((VECTOR(uint32_t, 4))(7UL)), 4294967291UL)).sa9cc))).wzzxyxzzxywxwxyz, ((VECTOR(uint64_t, 16))(1UL))))).s57)).even))).s16, ((VECTOR(uint64_t, 2))(0x1671531B93EDE697L)), ((VECTOR(uint64_t, 2))(0x555EF72E207D6B1DL))))))))), ((VECTOR(uint64_t, 2))(0x01022D71B3402DD9L))))), 0x0DAED9DC574ED07EL, 6UL, 5UL, 0x9A700AF99B02F9E7L)))).s64)))), ((VECTOR(uint64_t, 2))(0x11E4CDE16D7C2224L)), ((VECTOR(uint64_t, 2))(0x77F87BA3B3EB47BBL))))))).yxxxxxxxyxxxxyxx)).se) | 0x772B00C038C81FD4L) <= p_64)), (*l_482)));
    if ((atomic_inc(&p_1246->g_atomic_input[30 * get_linear_group_id() + 11]) == 9))
    { /* block id: 190 */
        int32_t l_508 = 8L;
        int32_t *l_507 = &l_508;
        int32_t *l_509 = &l_508;
        VECTOR(int16_t, 8) l_566 = (VECTOR(int16_t, 8))(0x645EL, (VECTOR(int16_t, 4))(0x645EL, (VECTOR(int16_t, 2))(0x645EL, 0x4639L), 0x4639L), 0x4639L, 0x645EL, 0x4639L);
        VECTOR(int16_t, 2) l_567 = (VECTOR(int16_t, 2))((-4L), 0x2918L);
        VECTOR(int16_t, 2) l_568 = (VECTOR(int16_t, 2))((-4L), 0x38FDL);
        VECTOR(int16_t, 2) l_569 = (VECTOR(int16_t, 2))((-2L), 0L);
        uint64_t l_570 = 18446744073709551609UL;
        VECTOR(int16_t, 16) l_571 = (VECTOR(int16_t, 16))(0x4D48L, (VECTOR(int16_t, 4))(0x4D48L, (VECTOR(int16_t, 2))(0x4D48L, 0x4C30L), 0x4C30L), 0x4C30L, 0x4D48L, 0x4C30L, (VECTOR(int16_t, 2))(0x4D48L, 0x4C30L), (VECTOR(int16_t, 2))(0x4D48L, 0x4C30L), 0x4D48L, 0x4C30L, 0x4D48L, 0x4C30L);
        VECTOR(int16_t, 4) l_572 = (VECTOR(int16_t, 4))(0x2AE8L, (VECTOR(int16_t, 2))(0x2AE8L, 1L), 1L);
        VECTOR(int16_t, 4) l_573 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0L), 0L);
        VECTOR(int16_t, 8) l_574 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x5FC5L), 0x5FC5L), 0x5FC5L, (-1L), 0x5FC5L);
        int16_t l_575 = 0L;
        uint32_t l_576 = 0xF0FB8FF4L;
        int32_t l_577 = (-1L);
        VECTOR(int16_t, 8) l_578 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
        VECTOR(int16_t, 16) l_579 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x5BEAL), 0x5BEAL), 0x5BEAL, 1L, 0x5BEAL, (VECTOR(int16_t, 2))(1L, 0x5BEAL), (VECTOR(int16_t, 2))(1L, 0x5BEAL), 1L, 0x5BEAL, 1L, 0x5BEAL);
        int32_t l_580 = 0x19427B7DL;
        uint64_t l_581 = 0xEBD0E7A43BCD8AC9L;
        uint32_t l_582 = 0xCF4114DFL;
        uint32_t l_583[4];
        uint16_t l_584[5][8] = {{1UL,0UL,0UL,1UL,0xBEBFL,0UL,0UL,0xBEBFL},{1UL,0UL,0UL,1UL,0xBEBFL,0UL,0UL,0xBEBFL},{1UL,0UL,0UL,1UL,0xBEBFL,0UL,0UL,0xBEBFL},{1UL,0UL,0UL,1UL,0xBEBFL,0UL,0UL,0xBEBFL},{1UL,0UL,0UL,1UL,0xBEBFL,0UL,0UL,0xBEBFL}};
        VECTOR(uint64_t, 8) l_585 = (VECTOR(uint64_t, 8))(0x132D99BB94C8E648L, (VECTOR(uint64_t, 4))(0x132D99BB94C8E648L, (VECTOR(uint64_t, 2))(0x132D99BB94C8E648L, 0xF04197996BC1231AL), 0xF04197996BC1231AL), 0xF04197996BC1231AL, 0x132D99BB94C8E648L, 0xF04197996BC1231AL);
        uint64_t l_586 = 0xC7044B3D836D237BL;
        uint32_t l_587[7] = {5UL,0xCB1DC2A8L,5UL,5UL,0xCB1DC2A8L,5UL,5UL};
        VECTOR(uint8_t, 2) l_588 = (VECTOR(uint8_t, 2))(255UL, 0UL);
        int32_t l_589 = 9L;
        uint16_t l_590 = 0x2E8EL;
        int32_t l_591 = 0x3777B03DL;
        uint32_t l_592 = 4294967289UL;
        VECTOR(int8_t, 4) l_593 = (VECTOR(int8_t, 4))(0x24L, (VECTOR(int8_t, 2))(0x24L, 1L), 1L);
        int32_t *l_594[3][9][7] = {{{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577}},{{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577}},{{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577},{&l_508,&l_508,&l_508,&l_577,&l_508,&l_508,&l_577}}};
        int32_t *l_595 = &l_577;
        int32_t *l_596 = &l_508;
        int32_t *l_597[5][5] = {{&l_577,&l_508,&l_508,&l_508,&l_577},{&l_577,&l_508,&l_508,&l_508,&l_577},{&l_577,&l_508,&l_508,&l_508,&l_577},{&l_577,&l_508,&l_508,&l_508,&l_577},{&l_577,&l_508,&l_508,&l_508,&l_577}};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_583[i] = 6UL;
        l_509 = l_507;
        for (l_508 = 0; (l_508 >= 18); l_508 = safe_add_func_int64_t_s_s(l_508, 9))
        { /* block id: 194 */
            uint16_t l_514 = 65531UL;
            uint16_t *l_513 = &l_514;
            uint16_t **l_512 = &l_513;
            uint16_t **l_515 = (void*)0;
            uint32_t l_524 = 0x75B24111L;
            l_515 = (l_512 = (void*)0);
            for (l_514 = 13; (l_514 <= 40); l_514 = safe_add_func_uint32_t_u_u(l_514, 1))
            { /* block id: 199 */
                int32_t l_518 = 0x7D50563BL;
                int32_t l_519 = 0x6D631047L;
                int32_t l_520[5][10][1] = {{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}};
                uint32_t l_521 = 0x45D303E9L;
                int i, j, k;
                l_521++;
            }
            l_524 = 0x1BC92F3AL;
            for (l_524 = 1; (l_524 <= 34); l_524 = safe_add_func_int16_t_s_s(l_524, 2))
            { /* block id: 205 */
                int32_t l_527 = 1L;
                VECTOR(int32_t, 8) l_547 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                uint8_t l_548 = 0xD4L;
                int64_t l_549 = 0x7DFDAA9F4502FC87L;
                int32_t l_550 = 0L;
                VECTOR(int16_t, 8) l_551 = (VECTOR(int16_t, 8))(0x6BC3L, (VECTOR(int16_t, 4))(0x6BC3L, (VECTOR(int16_t, 2))(0x6BC3L, (-2L)), (-2L)), (-2L), 0x6BC3L, (-2L));
                VECTOR(uint16_t, 16) l_552 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xDF91L), 0xDF91L), 0xDF91L, 1UL, 0xDF91L, (VECTOR(uint16_t, 2))(1UL, 0xDF91L), (VECTOR(uint16_t, 2))(1UL, 0xDF91L), 1UL, 0xDF91L, 1UL, 0xDF91L);
                int64_t l_553 = 0L;
                uint16_t l_554[10];
                uint32_t l_555 = 0xC8BB798DL;
                VECTOR(uint16_t, 2) l_556 = (VECTOR(uint16_t, 2))(0x7B48L, 65530UL);
                VECTOR(uint16_t, 2) l_557 = (VECTOR(uint16_t, 2))(0UL, 65531UL);
                VECTOR(uint16_t, 16) l_560 = (VECTOR(uint16_t, 16))(0x5D74L, (VECTOR(uint16_t, 4))(0x5D74L, (VECTOR(uint16_t, 2))(0x5D74L, 65535UL), 65535UL), 65535UL, 0x5D74L, 65535UL, (VECTOR(uint16_t, 2))(0x5D74L, 65535UL), (VECTOR(uint16_t, 2))(0x5D74L, 65535UL), 0x5D74L, 65535UL, 0x5D74L, 65535UL);
                VECTOR(uint16_t, 8) l_561 = (VECTOR(uint16_t, 8))(0x05D8L, (VECTOR(uint16_t, 4))(0x05D8L, (VECTOR(uint16_t, 2))(0x05D8L, 65535UL), 65535UL), 65535UL, 0x05D8L, 65535UL);
                VECTOR(uint16_t, 2) l_562 = (VECTOR(uint16_t, 2))(0x3E52L, 0x71C7L);
                VECTOR(uint16_t, 16) l_563 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xFA08L), 0xFA08L), 0xFA08L, 65535UL, 0xFA08L, (VECTOR(uint16_t, 2))(65535UL, 0xFA08L), (VECTOR(uint16_t, 2))(65535UL, 0xFA08L), 65535UL, 0xFA08L, 65535UL, 0xFA08L);
                uint64_t l_564 = 18446744073709551612UL;
                int32_t *l_565 = &l_527;
                int i;
                for (i = 0; i < 10; i++)
                    l_554[i] = 0xFA91L;
                for (l_527 = (-5); (l_527 < 16); ++l_527)
                { /* block id: 208 */
                    VECTOR(int32_t, 2) l_530 = (VECTOR(int32_t, 2))(0x2D57A15FL, (-1L));
                    VECTOR(uint64_t, 4) l_531 = (VECTOR(uint64_t, 4))(0x63392C05A8A6EE7FL, (VECTOR(uint64_t, 2))(0x63392C05A8A6EE7FL, 0xDCAF45D74FC0A67FL), 0xDCAF45D74FC0A67FL);
                    uint8_t l_532 = 1UL;
                    int i;
                    l_531.w = ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(l_530.yyxyyyyxyyyyyyxy)).odd))).s1;
                    if (l_532)
                    { /* block id: 210 */
                        int32_t l_534[6];
                        int32_t *l_533 = &l_534[0];
                        uint32_t l_535 = 0xD7FBB082L;
                        VECTOR(int32_t, 4) l_536 = (VECTOR(int32_t, 4))(0x3E4087F3L, (VECTOR(int32_t, 2))(0x3E4087F3L, 0x5E88929FL), 0x5E88929FL);
                        uint8_t l_537 = 0x86L;
                        uint32_t l_538 = 4294967295UL;
                        VECTOR(int32_t, 2) l_539 = (VECTOR(int32_t, 2))(0x0679DBFFL, (-6L));
                        int i;
                        for (i = 0; i < 6; i++)
                            l_534[i] = 0x77689310L;
                        l_533 = (l_509 = l_533);
                        l_538 = (l_537 &= (l_535 , ((VECTOR(int32_t, 16))(l_536.zywzxwyyxxyzzyww)).s8));
                        (*l_533) &= ((VECTOR(int32_t, 8))(l_539.yyyxxyyy)).s0;
                        l_507 = (void*)0;
                    }
                    else
                    { /* block id: 217 */
                        int32_t l_540 = 0x6EEBB116L;
                        int32_t l_541 = 0L;
                        int32_t l_542 = 0x3637F0E0L;
                        int32_t l_543 = (-1L);
                        uint32_t l_544 = 0xF2976FC3L;
                        --l_544;
                    }
                }
                l_548 ^= ((VECTOR(int32_t, 2))(l_547.s33)).lo;
                l_564 = ((l_550 = l_549) , ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(l_551.s45325230)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(0xD22DL, ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 2))(0UL, 3UL)), ((VECTOR(uint16_t, 8))(0x64A3L, (((*l_513) = (((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_552.s4e442c6e)))).s30, (uint16_t)(l_553 , l_554[3])))).even , l_555)) , GROUP_DIVERGE(2, 1)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_556.yxxyxyyxxxyxyyyy)).odd)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_557.yyxy)).hi)).xyyxxxxx))).s61)), ((*l_513)--), ((VECTOR(uint16_t, 2))(l_560.s2e)), 7UL)).s34, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_561.s7613)).xxwxxzzzzwzzyxzz)).sca))).hi, ((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 4))(l_562.yyyy))))), 65535UL, 0UL)).odd)).wyyzyxzw)).s01, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_563.s822c5b31)).s2075350231776015)).sb6))).even, ((VECTOR(uint16_t, 2))(0x4519L, 0x5632L)), 0x1486L)).zzyywxxx))).s5);
                l_509 = l_565;
            }
        }
        l_593.x = (((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_566.s6764)), ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_567.yyyyxxxyxyxyyxxy)).hi)).s1255453433210540)).sf5, ((VECTOR(int16_t, 8))(l_568.yyyyyyxy)).s34))).xxyyyyyy, ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))((((VECTOR(int16_t, 4))(l_569.xyyy)).w , l_570), 0x29EFL, (-7L), (-1L))).zywzyyyz, ((VECTOR(int16_t, 2))(0x3642L, 0x3C0BL)).xxyxxyyy)))))).s5, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_571.s13)).xxxy)).even, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(l_572.wz)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(0x2821L, (-5L), ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 4))(l_573.xywz)).yzzxwyzyzzyxwywy, ((VECTOR(int16_t, 16))(l_574.s2315120120440745))))).s2faa, ((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(0x0C6AL, ((l_576 &= ((l_575 = 0L) , 0xD0DB5B365B45766AL)) , l_577), 0x5743L, (-1L))))).yyxzzyzz)).s3641561047275242, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_578.s12)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(6L, (-2L), 0x78B6L, ((VECTOR(int16_t, 8))(3L, ((VECTOR(int16_t, 2))(l_579.se5)), l_580, ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(0x630EL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((l_582 ^= l_581) , l_583[0]), 0x0820L, l_584[3][2], ((VECTOR(int16_t, 2))(0x77A5L)), l_585.s3, (-1L), l_586, l_587[3], l_588.x, 0x6868L, ((VECTOR(int16_t, 2))((-6L))), 0x30EEL, 0x1ACFL, 0x408DL)).s321b)), ((VECTOR(int16_t, 2))(0x2071L)), 0x358CL)).s12, (int16_t)l_589))), 1L, 0x1C35L)).s7, ((VECTOR(int16_t, 8))(0x6854L)), l_590, 0x0194L, 0x2437L, 0x498AL)).sf1)), 0x7CC5L, ((VECTOR(int16_t, 2))(0x49ACL)), ((VECTOR(int16_t, 2))((-6L))), 0x564EL)).s45)), ((VECTOR(int16_t, 2))(0x34DAL)), 0x74E7L, 0x71B1L)).s1451644474363537))).sd293))), l_591, 0L, 0x3A4AL, 0x1F2DL, 0x6D23L, ((VECTOR(int16_t, 4))(0x5B2FL)), (-1L))).s33ad)).yyxxzwwzyxwxwyyw)).sb2a3)), ((VECTOR(int16_t, 4))(0L))))).even)))))))).lo, (-4L), 9L)).s11)), 0x38D0L, 0x7987L)).zxzyyxxx, (int16_t)6L))).hi))).z , l_592);
        l_597[2][4] = (l_507 = (l_596 = (l_595 = l_594[0][0][1])));
        unsigned int result = 0;
        result += l_508;
        result += l_566.s7;
        result += l_566.s6;
        result += l_566.s5;
        result += l_566.s4;
        result += l_566.s3;
        result += l_566.s2;
        result += l_566.s1;
        result += l_566.s0;
        result += l_567.y;
        result += l_567.x;
        result += l_568.y;
        result += l_568.x;
        result += l_569.y;
        result += l_569.x;
        result += l_570;
        result += l_571.sf;
        result += l_571.se;
        result += l_571.sd;
        result += l_571.sc;
        result += l_571.sb;
        result += l_571.sa;
        result += l_571.s9;
        result += l_571.s8;
        result += l_571.s7;
        result += l_571.s6;
        result += l_571.s5;
        result += l_571.s4;
        result += l_571.s3;
        result += l_571.s2;
        result += l_571.s1;
        result += l_571.s0;
        result += l_572.w;
        result += l_572.z;
        result += l_572.y;
        result += l_572.x;
        result += l_573.w;
        result += l_573.z;
        result += l_573.y;
        result += l_573.x;
        result += l_574.s7;
        result += l_574.s6;
        result += l_574.s5;
        result += l_574.s4;
        result += l_574.s3;
        result += l_574.s2;
        result += l_574.s1;
        result += l_574.s0;
        result += l_575;
        result += l_576;
        result += l_577;
        result += l_578.s7;
        result += l_578.s6;
        result += l_578.s5;
        result += l_578.s4;
        result += l_578.s3;
        result += l_578.s2;
        result += l_578.s1;
        result += l_578.s0;
        result += l_579.sf;
        result += l_579.se;
        result += l_579.sd;
        result += l_579.sc;
        result += l_579.sb;
        result += l_579.sa;
        result += l_579.s9;
        result += l_579.s8;
        result += l_579.s7;
        result += l_579.s6;
        result += l_579.s5;
        result += l_579.s4;
        result += l_579.s3;
        result += l_579.s2;
        result += l_579.s1;
        result += l_579.s0;
        result += l_580;
        result += l_581;
        result += l_582;
        int l_583_i0;
        for (l_583_i0 = 0; l_583_i0 < 4; l_583_i0++) {
            result += l_583[l_583_i0];
        }
        int l_584_i0, l_584_i1;
        for (l_584_i0 = 0; l_584_i0 < 5; l_584_i0++) {
            for (l_584_i1 = 0; l_584_i1 < 8; l_584_i1++) {
                result += l_584[l_584_i0][l_584_i1];
            }
        }
        result += l_585.s7;
        result += l_585.s6;
        result += l_585.s5;
        result += l_585.s4;
        result += l_585.s3;
        result += l_585.s2;
        result += l_585.s1;
        result += l_585.s0;
        result += l_586;
        int l_587_i0;
        for (l_587_i0 = 0; l_587_i0 < 7; l_587_i0++) {
            result += l_587[l_587_i0];
        }
        result += l_588.y;
        result += l_588.x;
        result += l_589;
        result += l_590;
        result += l_591;
        result += l_592;
        result += l_593.w;
        result += l_593.z;
        result += l_593.y;
        result += l_593.x;
        atomic_add(&p_1246->g_special_values[30 * get_linear_group_id() + 11], result);
    }
    else
    { /* block id: 237 */
        (1 + 1);
    }
    return l_482;
}


/* ------------------------------------------ */
/* 
 * reads : p_1246->g_comm_values
 * writes: p_1246->g_158
 */
int8_t  func_76(int32_t  p_77, uint64_t  p_78, uint16_t  p_79, struct S0 * p_1246)
{ /* block id: 181 */
    int32_t **l_479 = &p_1246->g_158;
    (*l_479) = &p_1246->g_190;
    return p_1246->g_comm_values[p_1246->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_1246->g_55 p_1246->g_161 p_1246->g_44 p_1246->g_155 p_1246->g_20 p_1246->g_238 p_1246->g_179 p_1246->g_263 p_1246->g_272 p_1246->g_2 p_1246->g_190 p_1246->g_314 p_1246->g_175 p_1246->l_comm_values p_1246->g_310 p_1246->g_comm_values p_1246->g_339 p_1246->g_471
 * writes: p_1246->g_55 p_1246->g_190 p_1246->g_238 p_1246->g_259 p_1246->g_263 p_1246->g_155 p_1246->g_272 p_1246->g_314 p_1246->g_310 p_1246->g_339 p_1246->g_158 p_1246->g_179 p_1246->g_175
 */
uint32_t  func_94(uint16_t * p_95, int32_t * p_96, uint32_t  p_97, uint32_t * p_98, uint32_t * p_99, struct S0 * p_1246)
{ /* block id: 63 */
    uint16_t l_217 = 0x408DL;
    int32_t l_222 = 0x273D293EL;
    int32_t l_225[4][1];
    VECTOR(uint16_t, 4) l_235 = (VECTOR(uint16_t, 4))(0x7D46L, (VECTOR(uint16_t, 2))(0x7D46L, 0x55B3L), 0x55B3L);
    uint32_t *l_241 = &p_1246->g_238;
    VECTOR(uint16_t, 2) l_247 = (VECTOR(uint16_t, 2))(0x9A00L, 0UL);
    uint32_t l_257 = 4294967293UL;
    int32_t **l_277 = &p_1246->g_158;
    VECTOR(uint64_t, 16) l_304 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 6UL), 6UL), 6UL, 0UL, 6UL, (VECTOR(uint64_t, 2))(0UL, 6UL), (VECTOR(uint64_t, 2))(0UL, 6UL), 0UL, 6UL, 0UL, 6UL);
    int64_t *l_313[7][5][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint8_t *l_358 = &p_1246->g_272;
    VECTOR(uint64_t, 8) l_361 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
    uint8_t *l_369 = &p_1246->g_272;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_225[i][j] = 0x4CB52ADDL;
    }
    for (p_1246->g_55 = (-26); (p_1246->g_55 >= 9); p_1246->g_55 = safe_add_func_uint32_t_u_u(p_1246->g_55, 9))
    { /* block id: 66 */
        int32_t *l_213 = (void*)0;
        int32_t *l_214 = &p_1246->g_155;
        int32_t *l_215 = &p_1246->g_155;
        int32_t *l_216 = (void*)0;
        p_1246->g_190 = p_97;
        ++l_217;
        if (p_1246->g_161.y)
            break;
    }
    for (l_217 = 20; (l_217 != 33); l_217++)
    { /* block id: 73 */
        int32_t *l_223 = &p_1246->g_155;
        int32_t *l_224[4][4][4] = {{{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0},{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0},{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0},{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0}},{{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0},{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0},{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0},{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0}},{{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0},{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0},{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0},{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0}},{{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0},{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0},{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0},{(void*)0,&p_1246->g_190,&p_1246->g_190,(void*)0}}};
        uint32_t l_226 = 4294967288UL;
        uint32_t *l_237 = &p_1246->g_238;
        int32_t l_256[6];
        int8_t *l_258 = &p_1246->g_259;
        uint16_t *l_260 = (void*)0;
        uint16_t *l_261 = (void*)0;
        uint16_t *l_262 = &p_1246->g_263;
        VECTOR(uint16_t, 4) l_288 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL);
        VECTOR(int32_t, 8) l_294 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
        uint32_t l_301 = 0x65DE4F27L;
        VECTOR(uint64_t, 2) l_303 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xB31C882E834E38E9L);
        uint64_t *l_335 = (void*)0;
        uint64_t l_382 = 18446744073709551612UL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_256[i] = 0x171C3BC4L;
        l_226++;
        if ((((*l_223) = (safe_mul_func_int8_t_s_s(((l_225[1][0] = ((safe_sub_func_uint8_t_u_u(((((l_225[1][0] , (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_235.xxxy)).odd)).even, ((((((*l_237) = ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 8))(p_1246->g_236.xxyxxxxx))))).even)).y) , ((*l_262) |= (safe_mul_func_uint16_t_u_u((((((void*)0 != &l_222) <= (((void*)0 == l_241) == (safe_mod_func_uint8_t_u_u((((*l_258) = ((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(l_247.yyxxyyyx)).s5, (((-3L) && (safe_mod_func_int64_t_s_s(0L, (safe_rshift_func_uint16_t_u_u((((p_1246->g_44 || (((((l_257 = (safe_rshift_func_int16_t_s_s(((((((void*)0 == p_95) == (*l_223)) & p_1246->g_55) ^ p_1246->g_20.y) , l_235.x), l_256[2]))) | 18446744073709551615UL) , 0x6662L) | p_1246->g_20.x) > 2UL)) != 0xD1L) >= 0x64EC25BE30F185DDL), 2))))) != p_1246->g_238))) == p_97))) == 0x11L)) == p_1246->g_20.x), (*l_223))))) != p_1246->g_20.y) > p_1246->g_179), p_97)))) ^ 0x3D6CL) ^ (-10L)) , p_97)))) < l_247.y) >= (-1L)) , p_97), p_97)) , 8L)) && p_97), p_97))) >= p_1246->g_161.z))
        { /* block id: 81 */
            int16_t l_266 = (-6L);
            uint8_t *l_271 = &p_1246->g_272;
            VECTOR(int32_t, 4) l_289 = (VECTOR(int32_t, 4))(0x7B1F0220L, (VECTOR(int32_t, 2))(0x7B1F0220L, 1L), 1L);
            uint32_t l_290 = 0xD8DB439EL;
            VECTOR(uint64_t, 8) l_305 = (VECTOR(uint64_t, 8))(0xFD20BF0A18020ED5L, (VECTOR(uint64_t, 4))(0xFD20BF0A18020ED5L, (VECTOR(uint64_t, 2))(0xFD20BF0A18020ED5L, 0x0DBB6B75F23333DDL), 0x0DBB6B75F23333DDL), 0x0DBB6B75F23333DDL, 0xFD20BF0A18020ED5L, 0x0DBB6B75F23333DDL);
            VECTOR(int8_t, 8) l_329 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
            int32_t **l_331[3][10][5] = {{{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158}},{{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158}},{{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158},{(void*)0,&l_224[2][1][1],(void*)0,(void*)0,&p_1246->g_158}}};
            int i, j, k;
            (*l_223) ^= (safe_rshift_func_uint16_t_u_s(0UL, ((l_266 & (((safe_add_func_int32_t_s_s(((-1L) > (safe_mul_func_uint8_t_u_u(((*l_271) |= GROUP_DIVERGE(1, 1)), 251UL))), (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((void*)0 == l_277) > (safe_mod_func_uint64_t_u_u((p_1246->g_20.y | (safe_lshift_func_int16_t_s_u((((safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s((!(l_289.x = ((safe_lshift_func_uint16_t_u_u(0xA1B3L, ((VECTOR(uint16_t, 16))(l_288.xyyxxzywxzywzwxx)).sd)) > p_97))), FAKE_DIVERGE(p_1246->local_2_offset, get_local_id(2), 10))), l_266)) || p_1246->g_2) , 0x0321L), 10))), p_97))), 3)), 0x3DDFL)))) == p_1246->g_55) > l_247.y)) || l_290)));
            if ((safe_div_func_uint16_t_u_u(p_1246->g_161.y, GROUP_DIVERGE(1, 1))))
            { /* block id: 85 */
                VECTOR(int32_t, 8) l_293 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L));
                VECTOR(int16_t, 4) l_295 = (VECTOR(int16_t, 4))(0x115AL, (VECTOR(int16_t, 2))(0x115AL, 6L), 6L);
                uint32_t *l_298[5] = {&l_257,&l_257,&l_257,&l_257,&l_257};
                VECTOR(uint64_t, 2) l_302 = (VECTOR(uint64_t, 2))(0x548190C90DBE4FE4L, 0x83970FA0D30AE7E3L);
                int16_t *l_306 = (void*)0;
                int16_t *l_307 = (void*)0;
                int16_t *l_308[5][2][10] = {{{&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266},{&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266}},{{&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266},{&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266}},{{&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266},{&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266}},{{&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266},{&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266}},{{&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266},{&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266}}};
                uint64_t *l_309 = &p_1246->g_310;
                VECTOR(int64_t, 16) l_315 = (VECTOR(int64_t, 16))((-3L), (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 1L), 1L), 1L, (-3L), 1L, (VECTOR(int64_t, 2))((-3L), 1L), (VECTOR(int64_t, 2))((-3L), 1L), (-3L), 1L, (-3L), 1L);
                VECTOR(int8_t, 4) l_328 = (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0L), 0L);
                int32_t **l_330 = &l_224[0][1][2];
                uint32_t l_340 = 0x7EFF9168L;
                int i, j, k;
                p_1246->g_190 |= ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_293.s41)).xxyxxxxx)), ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_294.s30)).yxyxxxxy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(l_295.wzwzyywwywwyxwxx)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))((((safe_sub_func_uint16_t_u_u(((*l_262) = (p_97 , ((l_293.s2 &= GROUP_DIVERGE(2, 1)) > (FAKE_DIVERGE(p_1246->global_0_offset, get_global_id(0), 10) <= ((*l_309) ^= (((p_1246->g_238 ^ ((l_298[1] != (void*)0) | (safe_div_func_int64_t_s_s(l_301, FAKE_DIVERGE(p_1246->global_2_offset, get_global_id(2), 10))))) , p_97) , (((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0UL, 0x13215F6AL)))).yyxy, ((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 16))(((1L < p_1246->g_236.y) >= ((l_289.y = (((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_302.yx)))).xyyxyxxyxyyxyxxx, ((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_303.yyxyxyxx)))).s3012464263522532, ((VECTOR(uint64_t, 4))(l_304.s72ce)).zzxywzwzzzxwyxwz))), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_305.s71)).yyyxxyxyyxxyyxxy))))))).sa7))).lo <= (+1L))) || p_1246->g_161.x)), ((VECTOR(uint32_t, 4))(0xF30DADA6L)), 0xAF85F3CFL, 0xDEBA183DL, 4294967288UL, ((VECTOR(uint32_t, 8))(0UL)))).s21, ((VECTOR(uint32_t, 2))(0x2A5402AAL))))).xxxx, ((VECTOR(uint32_t, 4))(0xBAA201D1L))))))).zwxywzxw, ((VECTOR(uint32_t, 8))(4294967288UL)), ((VECTOR(uint32_t, 8))(0x93E5168BL))))).even, ((VECTOR(uint32_t, 4))(0UL))))).y , 0UL))))))), (*l_223))) == 0UL) > l_305.s5), ((VECTOR(uint16_t, 8))(0xDD5CL)), 0x14E7L, 1UL, ((VECTOR(uint16_t, 2))(0x859AL)), l_295.w, 65530UL, 0UL)).s0a9b)).yyyzwyzwzzyzyxwz))).s4b6c)).xyzyzxzy)))))).s3;
                if ((p_97 | (((*l_223) = (p_97 & p_97)) , (safe_div_func_uint16_t_u_u((p_1246->g_263 = (((p_1246->g_314 ^= ((((void*)0 == l_306) , l_313[2][4][5]) != &p_1246->g_199)) , (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_315.s24)).xxyxxyxyyxyxyyyy)).sa0f8)).w != (l_289.x = 0x1824B5A7793DC51BL))) != FAKE_DIVERGE(p_1246->global_2_offset, get_global_id(2), 10))), (safe_unary_minus_func_uint16_t_u(p_1246->g_175)))))))
                { /* block id: 95 */
                    if (l_295.y)
                        break;
                    return p_1246->g_161.x;
                }
                else
                { /* block id: 98 */
                    uint16_t l_317 = 0x99D0L;
                    if ((p_97 || l_317))
                    { /* block id: 99 */
                        int64_t l_334 = 0x4B8F8CD4982FD1BBL;
                        uint64_t **l_336 = (void*)0;
                        uint64_t **l_337 = (void*)0;
                        uint64_t **l_338 = &l_309;
                        (*l_223) ^= (safe_lshift_func_int16_t_s_s((+(((safe_add_func_int8_t_s_s(p_1246->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1246->tid, 79))], p_97)) & ((l_302.x >= (--p_1246->g_310)) > (~((safe_mul_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(((p_1246->g_comm_values[p_1246->tid] , 0x66A8991DED383B88L) , ((VECTOR(int8_t, 8))(l_328.xwzzzwwx)).s6), ((*l_258) = ((VECTOR(int8_t, 4))(l_329.s5675)).z))) , l_330) != l_331[1][9][2]), (((p_1246->g_339.s0 &= ((((safe_add_func_uint32_t_u_u(l_334, ((((((*l_338) = l_335) == (void*)0) | p_97) , p_1246->g_238) > p_97))) >= 1L) != p_1246->g_272) , 0UL)) != 0x4CA24EB3629AF9D0L) , l_340))) | p_97)))) > 7UL)), 1));
                        return p_97;
                    }
                    else
                    { /* block id: 106 */
                        return p_1246->g_238;
                    }
                }
            }
            else
            { /* block id: 110 */
                VECTOR(uint32_t, 2) l_348 = (VECTOR(uint32_t, 2))(0xFF40068BL, 4UL);
                uint8_t *l_357[5] = {&p_1246->g_272,&p_1246->g_272,&p_1246->g_272,&p_1246->g_272,&p_1246->g_272};
                uint64_t *l_370 = &p_1246->g_310;
                int i;
                (*l_223) = (((~((VECTOR(int64_t, 2))(1L, 0x0474A25F692CA4C6L)).lo) != (safe_add_func_uint16_t_u_u((((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_1246->g_343.s8b4e3347df2ba116)).s02)), 0UL, 0xF903EC2FL)).xwzxyxyywzxzywwz, ((VECTOR(uint32_t, 4))(p_1246->g_344.xxyx)).wxxzxxyyxzxxwzyx, ((VECTOR(uint32_t, 4))(p_1246->g_345.s7645)).xyxwxwywzyzywyyy))).sca1d)).wyzywxyxywwwyxwy, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(4294967287UL, p_97, 4294967295UL, 7UL)).yxxxxxyx)).s1711340232152512))))).lo, ((VECTOR(uint32_t, 16))(p_1246->g_346.xxyyxyxxyxxxyxxy)).even, ((VECTOR(uint32_t, 16))(p_1246->g_347.xyxzxzyzyyywyzwy)).hi))).s01)), ((VECTOR(uint32_t, 8))(l_348.xxyxyxyx)).s52))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0xC88BFE7BL, 0x82A0A657L)), 0xFBA164C1L, 0xC2DEC578L)).z, ((VECTOR(uint32_t, 2))(0x616A6E10L, 0xE92EF1E7L)), 0x4661D7D3L, (p_97 , (safe_mod_func_uint64_t_u_u(((*l_370) |= ((safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s(0x081F3FBCL, (GROUP_DIVERGE(1, 1) <= (safe_rshift_func_uint16_t_u_s((((l_357[1] == (p_1246->g_359 = l_358)) != (((((((((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 2))(p_1246->g_360.wz)), (uint16_t)l_348.x))).even && p_97) > (!(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(1UL, 0x2EB87E373AC1E6FCL)), ((VECTOR(uint64_t, 4))(l_361.s0061)), 0x07EB40730A7747AFL, 18446744073709551615UL)).s3 < ((((safe_div_func_int32_t_s_s((((((safe_unary_minus_func_int64_t_s((safe_sub_func_uint32_t_u_u(0x4C1F111BL, ((safe_mod_func_int16_t_s_s(p_97, l_348.x)) == l_348.x))))) == l_348.x) && p_1246->g_347.w) , l_258) != l_369), p_1246->g_345.s6)) ^ 0xED1102B4L) != p_1246->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1246->tid, 79))]) , p_97)))) < p_97) > l_348.y) ^ 0xF293F6CEA1F4ABE3L) && p_97) , p_1246->g_343.s7)) , p_1246->g_344.x), 9))))), (*l_223))) , p_97)), p_1246->g_360.w))), 0x574D15F1L, ((VECTOR(uint32_t, 2))(4294967295UL)), FAKE_DIVERGE(p_1246->global_0_offset, get_global_id(0), 10), p_1246->g_347.x, 0x51225828L, p_1246->g_360.w, 0xE1E44C20L, 0xA35A01C0L)).sc != 0UL) < p_97) < 0x17F354D7L), 0x6253L))) ^ 1L);
                (*l_277) = (l_224[2][1][1] = &p_1246->g_314);
            }
            for (p_1246->g_179 = 24; (p_1246->g_179 != 9); p_1246->g_179 = safe_sub_func_uint64_t_u_u(p_1246->g_179, 6))
            { /* block id: 119 */
                uint32_t l_377 = 0x0D455A48L;
                volatile int32_t *l_381[3][7][8] = {{{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0}},{{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0}},{{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0},{&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0,&p_1246->g_2,&p_1246->g_2,(void*)0}}};
                volatile int32_t **l_380 = &l_381[1][4][2];
                int i, j, k;
                for (p_1246->g_272 = 0; (p_1246->g_272 > 36); p_1246->g_272 = safe_add_func_int8_t_s_s(p_1246->g_272, 2))
                { /* block id: 122 */
                    int i, j;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1246->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 79)), permutations[(safe_mod_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s((+l_377), GROUP_DIVERGE(0, 1))) & (safe_sub_func_uint8_t_u_u(((0x2CL | ((*l_223) = ((VECTOR(uint8_t, 2))(248UL, 0x1BL)).odd)) <= 1UL), ((*l_258) = 0x75L)))), 10))][(safe_mod_func_uint32_t_u_u(p_1246->tid, 79))]));
                }
                (*l_380) = &p_1246->g_2;
                --l_382;
                if (p_97)
                    continue;
            }
        }
        else
        { /* block id: 133 */
            uint16_t l_385 = 1UL;
            if (l_385)
                break;
        }
    }
    for (p_1246->g_263 = 0; (p_1246->g_263 > 10); p_1246->g_263 = safe_add_func_uint16_t_u_u(p_1246->g_263, 4))
    { /* block id: 139 */
        int16_t *l_472 = (void*)0;
        int16_t *l_473 = &p_1246->g_175;
        int32_t l_474 = 3L;
        int32_t *l_476 = &l_474;
        if ((atomic_inc(&p_1246->g_atomic_input[30 * get_linear_group_id() + 24]) == 1))
        { /* block id: 141 */
            int8_t l_388[7][2][3] = {{{(-1L),0x06L,0x64L},{(-1L),0x06L,0x64L}},{{(-1L),0x06L,0x64L},{(-1L),0x06L,0x64L}},{{(-1L),0x06L,0x64L},{(-1L),0x06L,0x64L}},{{(-1L),0x06L,0x64L},{(-1L),0x06L,0x64L}},{{(-1L),0x06L,0x64L},{(-1L),0x06L,0x64L}},{{(-1L),0x06L,0x64L},{(-1L),0x06L,0x64L}},{{(-1L),0x06L,0x64L},{(-1L),0x06L,0x64L}}};
            uint32_t l_389[6][4][1] = {{{0x13BF5ABDL},{0x13BF5ABDL},{0x13BF5ABDL},{0x13BF5ABDL}},{{0x13BF5ABDL},{0x13BF5ABDL},{0x13BF5ABDL},{0x13BF5ABDL}},{{0x13BF5ABDL},{0x13BF5ABDL},{0x13BF5ABDL},{0x13BF5ABDL}},{{0x13BF5ABDL},{0x13BF5ABDL},{0x13BF5ABDL},{0x13BF5ABDL}},{{0x13BF5ABDL},{0x13BF5ABDL},{0x13BF5ABDL},{0x13BF5ABDL}},{{0x13BF5ABDL},{0x13BF5ABDL},{0x13BF5ABDL},{0x13BF5ABDL}}};
            int32_t l_390 = 0L;
            int64_t l_391 = 0x4D1B6BBFA046A8C8L;
            VECTOR(int32_t, 8) l_469 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 4L), 4L), 4L, 1L, 4L);
            uint8_t l_470 = 0x3DL;
            int i, j, k;
            l_389[1][1][0] ^= l_388[1][0][2];
            l_391 |= l_390;
            for (l_388[1][0][2] = (-2); (l_388[1][0][2] == (-9)); l_388[1][0][2]--)
            { /* block id: 146 */
                VECTOR(int32_t, 4) l_394 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
                int32_t *l_442 = (void*)0;
                int32_t *l_443 = (void*)0;
                int16_t l_444 = 0L;
                int16_t l_445 = 0x17AEL;
                uint32_t l_446 = 1UL;
                VECTOR(int32_t, 8) l_447 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x5D9F1C50L), 0x5D9F1C50L), 0x5D9F1C50L, (-2L), 0x5D9F1C50L);
                int8_t l_448 = (-1L);
                VECTOR(int32_t, 2) l_449 = (VECTOR(int32_t, 2))(0L, 0x0BA2720FL);
                VECTOR(int16_t, 2) l_450 = (VECTOR(int16_t, 2))(0x0CF1L, 0x643CL);
                VECTOR(uint16_t, 2) l_451 = (VECTOR(uint16_t, 2))(0x2817L, 0xE4E3L);
                uint8_t l_452 = 0x95L;
                uint32_t l_453 = 0x98CBEEF1L;
                VECTOR(int32_t, 16) l_454 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x09D29C52L), 0x09D29C52L), 0x09D29C52L, 3L, 0x09D29C52L, (VECTOR(int32_t, 2))(3L, 0x09D29C52L), (VECTOR(int32_t, 2))(3L, 0x09D29C52L), 3L, 0x09D29C52L, 3L, 0x09D29C52L);
                VECTOR(int32_t, 8) l_455 = (VECTOR(int32_t, 8))(0x1A395D9EL, (VECTOR(int32_t, 4))(0x1A395D9EL, (VECTOR(int32_t, 2))(0x1A395D9EL, 0x36B184AAL), 0x36B184AAL), 0x36B184AAL, 0x1A395D9EL, 0x36B184AAL);
                VECTOR(int32_t, 16) l_456 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 2L), 2L), 2L, 1L, 2L, (VECTOR(int32_t, 2))(1L, 2L), (VECTOR(int32_t, 2))(1L, 2L), 1L, 2L, 1L, 2L);
                VECTOR(uint16_t, 16) l_457 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), 65535UL, 1UL, 65535UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), (VECTOR(uint16_t, 2))(1UL, 65535UL), 1UL, 65535UL, 1UL, 65535UL);
                int32_t l_458 = 0x39649083L;
                uint8_t l_459 = 1UL;
                int16_t l_460 = 0L;
                int32_t l_461 = (-8L);
                uint16_t l_462 = 0x2A67L;
                uint64_t l_463 = 18446744073709551606UL;
                uint8_t l_464 = 0UL;
                int32_t l_465 = 0x62A2B512L;
                int64_t l_466 = 0x62243F12CA690F0FL;
                int32_t l_467[3][10] = {{0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL},{0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL},{0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL,0x2E310B1EL}};
                uint32_t l_468 = 0x7B710BCDL;
                int i, j;
                for (l_394.w = (-5); (l_394.w > 6); l_394.w++)
                { /* block id: 149 */
                    uint32_t l_397 = 4294967295UL;
                    ++l_397;
                    for (l_397 = (-14); (l_397 < 12); l_397 = safe_add_func_uint16_t_u_u(l_397, 2))
                    { /* block id: 153 */
                        int8_t l_402[10];
                        VECTOR(uint32_t, 16) l_403 = (VECTOR(uint32_t, 16))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 4294967287UL), 4294967287UL), 4294967287UL, 4294967291UL, 4294967287UL, (VECTOR(uint32_t, 2))(4294967291UL, 4294967287UL), (VECTOR(uint32_t, 2))(4294967291UL, 4294967287UL), 4294967291UL, 4294967287UL, 4294967291UL, 4294967287UL);
                        VECTOR(uint32_t, 16) l_404 = (VECTOR(uint32_t, 16))(0x33284590L, (VECTOR(uint32_t, 4))(0x33284590L, (VECTOR(uint32_t, 2))(0x33284590L, 4294967293UL), 4294967293UL), 4294967293UL, 0x33284590L, 4294967293UL, (VECTOR(uint32_t, 2))(0x33284590L, 4294967293UL), (VECTOR(uint32_t, 2))(0x33284590L, 4294967293UL), 0x33284590L, 4294967293UL, 0x33284590L, 4294967293UL);
                        VECTOR(uint32_t, 2) l_405 = (VECTOR(uint32_t, 2))(7UL, 0x6D245B6CL);
                        VECTOR(uint32_t, 2) l_406 = (VECTOR(uint32_t, 2))(0xE3DA583CL, 4294967292UL);
                        int32_t l_407 = (-1L);
                        uint32_t l_408 = 0x48D925A7L;
                        int64_t l_409 = 1L;
                        int32_t l_412 = 0x74B36EA9L;
                        VECTOR(uint32_t, 16) l_413 = (VECTOR(uint32_t, 16))(0xF0B874C0L, (VECTOR(uint32_t, 4))(0xF0B874C0L, (VECTOR(uint32_t, 2))(0xF0B874C0L, 4294967294UL), 4294967294UL), 4294967294UL, 0xF0B874C0L, 4294967294UL, (VECTOR(uint32_t, 2))(0xF0B874C0L, 4294967294UL), (VECTOR(uint32_t, 2))(0xF0B874C0L, 4294967294UL), 0xF0B874C0L, 4294967294UL, 0xF0B874C0L, 4294967294UL);
                        uint16_t l_414 = 0x9553L;
                        int64_t l_415 = 0x46BA643E9282C6E5L;
                        uint64_t l_416[1];
                        int64_t l_417 = (-1L);
                        uint8_t l_418 = 1UL;
                        VECTOR(uint8_t, 8) l_419 = (VECTOR(uint8_t, 8))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 0xBFL), 0xBFL), 0xBFL, 252UL, 0xBFL);
                        VECTOR(uint32_t, 4) l_420 = (VECTOR(uint32_t, 4))(0x0D1F6533L, (VECTOR(uint32_t, 2))(0x0D1F6533L, 0UL), 0UL);
                        VECTOR(uint32_t, 2) l_421 = (VECTOR(uint32_t, 2))(4294967289UL, 0x3297BE03L);
                        VECTOR(uint32_t, 2) l_422 = (VECTOR(uint32_t, 2))(0x34BA7087L, 6UL);
                        VECTOR(uint32_t, 2) l_423 = (VECTOR(uint32_t, 2))(0xD5AF64DBL, 4294967295UL);
                        VECTOR(uint32_t, 2) l_424 = (VECTOR(uint32_t, 2))(0UL, 0x346ADA5BL);
                        VECTOR(uint32_t, 2) l_425 = (VECTOR(uint32_t, 2))(4294967295UL, 6UL);
                        VECTOR(uint32_t, 4) l_426 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xF30ECC25L), 0xF30ECC25L);
                        VECTOR(uint32_t, 16) l_427 = (VECTOR(uint32_t, 16))(0x4B14510EL, (VECTOR(uint32_t, 4))(0x4B14510EL, (VECTOR(uint32_t, 2))(0x4B14510EL, 0x802DB8C2L), 0x802DB8C2L), 0x802DB8C2L, 0x4B14510EL, 0x802DB8C2L, (VECTOR(uint32_t, 2))(0x4B14510EL, 0x802DB8C2L), (VECTOR(uint32_t, 2))(0x4B14510EL, 0x802DB8C2L), 0x4B14510EL, 0x802DB8C2L, 0x4B14510EL, 0x802DB8C2L);
                        uint64_t l_428 = 0x881086F47C3AB1BBL;
                        VECTOR(uint32_t, 8) l_431 = (VECTOR(uint32_t, 8))(0xAC08BE4CL, (VECTOR(uint32_t, 4))(0xAC08BE4CL, (VECTOR(uint32_t, 2))(0xAC08BE4CL, 1UL), 1UL), 1UL, 0xAC08BE4CL, 1UL);
                        uint8_t l_432[3][2] = {{253UL,0xE0L},{253UL,0xE0L},{253UL,0xE0L}};
                        uint32_t l_433 = 0x1382418BL;
                        VECTOR(uint64_t, 4) l_434 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x88D8BED2A8ADF922L), 0x88D8BED2A8ADF922L);
                        VECTOR(uint64_t, 8) l_435 = (VECTOR(uint64_t, 8))(0xF09B6E65D76E7416L, (VECTOR(uint64_t, 4))(0xF09B6E65D76E7416L, (VECTOR(uint64_t, 2))(0xF09B6E65D76E7416L, 0UL), 0UL), 0UL, 0xF09B6E65D76E7416L, 0UL);
                        VECTOR(uint64_t, 8) l_436 = (VECTOR(uint64_t, 8))(18446744073709551610UL, (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 0x37ED070690EF11A4L), 0x37ED070690EF11A4L), 0x37ED070690EF11A4L, 18446744073709551610UL, 0x37ED070690EF11A4L);
                        int64_t l_437 = 4L;
                        VECTOR(uint32_t, 8) l_438 = (VECTOR(uint32_t, 8))(0x0EFBD0BEL, (VECTOR(uint32_t, 4))(0x0EFBD0BEL, (VECTOR(uint32_t, 2))(0x0EFBD0BEL, 0x9D7A3927L), 0x9D7A3927L), 0x9D7A3927L, 0x0EFBD0BEL, 0x9D7A3927L);
                        VECTOR(uint32_t, 16) l_439 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xBF3E684CL), 0xBF3E684CL), 0xBF3E684CL, 0UL, 0xBF3E684CL, (VECTOR(uint32_t, 2))(0UL, 0xBF3E684CL), (VECTOR(uint32_t, 2))(0UL, 0xBF3E684CL), 0UL, 0xBF3E684CL, 0UL, 0xBF3E684CL);
                        int16_t l_440 = 0x6F0CL;
                        uint32_t l_441 = 0xE5669A18L;
                        int i, j;
                        for (i = 0; i < 10; i++)
                            l_402[i] = 0L;
                        for (i = 0; i < 1; i++)
                            l_416[i] = 0x44DA55C95E7A7E1CL;
                        l_390 = (l_402[9] , (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(0x4D6E846CL, 0UL, 6UL, 4294967295UL)), GROUP_DIVERGE(1, 1), 0x1F0301CEL, 0xB0700A40L, 4UL, ((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0xA3C57D52L, 0x29BBD25CL)).xxxxyxyxxxxxxxxx)))).sc4, ((VECTOR(uint32_t, 4))(l_403.sda2a)).hi))), ((VECTOR(uint32_t, 16))(0x2BB46EC1L, ((VECTOR(uint32_t, 4))(l_404.s85de)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0UL, 0UL)), 0x41D57537L, 1UL)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_405.xyxxxyyy)).s4, ((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_406.xxxxxyyyyyxxxxxx)))).lo, (uint32_t)(l_409 &= (l_408 = l_407)), (uint32_t)(++l_389[1][1][0])))), ((VECTOR(uint32_t, 4))(4294967295UL, l_412, 1UL, 1UL)), 4294967295UL, 0x6CC60019L, 0UL)).sc7)))), ((VECTOR(uint32_t, 2))(0x99C9ACE0L, 0xC4C76B76L)), FAKE_DIVERGE(p_1246->global_0_offset, get_global_id(0), 10), 1UL, 0UL)).sd0))), 4294967289UL, ((VECTOR(uint32_t, 2))(l_413.sd0)), ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 4))(l_414, l_415, 4294967295UL, 4294967295UL)).even, (uint32_t)(l_416[0] , l_417), (uint32_t)(((l_391 = l_418) , ((VECTOR(uint8_t, 8))(l_419.s07015073)).s7) , ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_420.zxzzwzxyzxzxxzzw)).sc126)).y, 0x92058104L, 1UL, 4294967291UL, FAKE_DIVERGE(p_1246->group_2_offset, get_group_id(2), 10), ((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 16))(l_421.yxxxxyxyyxyyyyxx)).see, ((VECTOR(uint32_t, 16))(l_422.yyyxyxyyxyxxyyyx)).sae))).yxxyxxxxxxxyxyyx)).s998b, ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 2))(l_423.xx)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_424.yxxyxyxx)).s3120035506770103)).s43))).yyxy, ((VECTOR(uint32_t, 16))(0xDCEDD759L, 4294967289UL, GROUP_DIVERGE(0, 1), 1UL, 0x2370737EL, ((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(l_425.yxyxyyyx)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0xC6D8648EL, 0xC9A2477AL)).yyxy)).xyzxwzxz, ((VECTOR(uint32_t, 4))(l_426.yxyw)).wwwyyyyy))), ((VECTOR(uint32_t, 2))(l_427.s0a)), 7UL)).s4bb0))), 0x3A239AF2L, (l_428++), 4294967295UL, 0x74BE085FL, 0UL, 4294967295UL, 0x2284AD1BL)).hi)).s1)))), 0xE9151E37L)).s5 , 1L));
                        l_407 ^= ((l_440 = ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 16))(GROUP_DIVERGE(2, 1), 1UL, ((VECTOR(uint32_t, 2))(l_431.s24)), l_432[2][1], 0x3AAE0DB3L, 5UL, 0UL, l_433, FAKE_DIVERGE(p_1246->group_0_offset, get_group_id(0), 10), (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 8))(l_434.xyzywyyx)).lo, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_435.s3017)))).hi)).yyxx, ((VECTOR(uint64_t, 4))(l_436.s3072))))))))).y , GROUP_DIVERGE(0, 1)), (l_437 ^= 0xC4CC19F7L), 6UL, 0xCBDE489CL, 0x0B6E57B4L, 0x275D8A86L)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_438.s44421610)).s3077210233231115))))).s28, ((VECTOR(uint32_t, 2))(l_439.sc3))))).hi) , l_441);
                    }
                }
                l_443 = l_442;
                l_445 |= l_444;
                l_468 = (l_446 , ((l_466 = (((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(l_447.s7073630653570572)).s1e, (int32_t)((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(0x5CAC0CA1L, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x7F4767F6L, 0x2E3C8E29L, 0x732E7360L, 0L)))))).yzzyzzzw)).lo, ((VECTOR(int32_t, 8))(l_448, 0x01DB76AEL, ((VECTOR(int32_t, 4))(l_449.xyxy)), 0x7CE418CEL, 0x2004C330L)).odd))).y, 1L, 0x267024B4L)).wxzxyzxxwxzwxyzx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_450.xx)), 0x546AL, 9L)))).hi, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_451.xy)).xxyx)).xywxzywwywzwzxwy)).sc58c)).odd))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_452, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0x479F229AL, 1L, l_453, 0x328D8CA0L, 0x428ACA28L, ((VECTOR(int32_t, 2))((-2L), 4L)), 0x0AF2A789L)))).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_454.sa4c8512a)), (-7L), ((VECTOR(int32_t, 4))(l_455.s0121)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((GROUP_DIVERGE(1, 1) , 0L), ((VECTOR(int32_t, 4))((-9L), ((VECTOR(int32_t, 2))(l_456.s44)), 0x3CF93FCCL)), 0x565A3F9DL, 0x7747FF96L, (-1L))).s50)).lo, 0x04D10380L, (-9L))).sf3d5)).odd)).xxxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(1L, (l_460 = (l_390 ^= (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_457.scb)).yyyyyxyx)).s4073530276535673)).sf747)).x , (l_458 , (l_459 , 0x4CDD1B2DL))))), 0x19A347A0L, 0x3091FC0DL)).even))), l_461, l_462, ((VECTOR(int32_t, 4))(0x51D990FAL)))).even))).wxxzyxxxwzzwxwwx)).s61)), ((VECTOR(int32_t, 2))(0x344B1B44L)), (-6L), 0x66EA4652L, 7L)), l_463, ((VECTOR(int32_t, 2))(7L)), ((VECTOR(int32_t, 4))(1L)), (-1L))).s1c))).yyyxxyyyxyxyxyxy, ((VECTOR(int32_t, 16))(0x2B030D81L)), ((VECTOR(int32_t, 16))(9L))))).even)).s3305306217134060))).s6, (int32_t)l_464))).odd , l_465)) , l_467[2][2]));
            }
            l_470 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_469.s31)).xxxxyyyx)).lo)).odd)).even;
            unsigned int result = 0;
            int l_388_i0, l_388_i1, l_388_i2;
            for (l_388_i0 = 0; l_388_i0 < 7; l_388_i0++) {
                for (l_388_i1 = 0; l_388_i1 < 2; l_388_i1++) {
                    for (l_388_i2 = 0; l_388_i2 < 3; l_388_i2++) {
                        result += l_388[l_388_i0][l_388_i1][l_388_i2];
                    }
                }
            }
            int l_389_i0, l_389_i1, l_389_i2;
            for (l_389_i0 = 0; l_389_i0 < 6; l_389_i0++) {
                for (l_389_i1 = 0; l_389_i1 < 4; l_389_i1++) {
                    for (l_389_i2 = 0; l_389_i2 < 1; l_389_i2++) {
                        result += l_389[l_389_i0][l_389_i1][l_389_i2];
                    }
                }
            }
            result += l_390;
            result += l_391;
            result += l_469.s7;
            result += l_469.s6;
            result += l_469.s5;
            result += l_469.s4;
            result += l_469.s3;
            result += l_469.s2;
            result += l_469.s1;
            result += l_469.s0;
            result += l_470;
            atomic_add(&p_1246->g_special_values[30 * get_linear_group_id() + 24], result);
        }
        else
        { /* block id: 173 */
            (1 + 1);
        }
        (*l_476) = (((+(((*l_473) = ((VECTOR(int16_t, 16))(p_1246->g_471.sfd2b08f023d49496)).s4) || l_474)) , FAKE_DIVERGE(p_1246->group_2_offset, get_group_id(2), 10)) >= ((l_474 && ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(1UL, GROUP_DIVERGE(1, 1), 18446744073709551610UL, 0xA4CB6CF213C3EFCFL)).lo)).xxxy)).x) || 0xA7EC7B11B8525CDDL));
    }
    return p_97;
}


/* ------------------------------------------ */
/* 
 * reads : p_1246->g_55 p_1246->g_88 p_1246->g_44 p_1246->l_comm_values p_1246->g_50 p_1246->g_175 p_1246->g_161 p_1246->g_199 p_1246->g_59 p_1246->g_comm_values p_1246->g_155
 * writes: p_1246->g_55 p_1246->g_158 p_1246->g_155 p_1246->g_175 p_1246->g_178 p_1246->g_180 p_1246->g_190 p_1246->g_207
 */
uint16_t * func_100(int32_t * p_101, uint32_t  p_102, int64_t * p_103, int64_t  p_104, struct S0 * p_1246)
{ /* block id: 24 */
    VECTOR(uint32_t, 4) l_148 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL);
    int32_t *l_157 = (void*)0;
    int32_t l_164 = 0x10952E1AL;
    int32_t l_167 = 0x5B8A7297L;
    int32_t l_168[10][5][5] = {{{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L}},{{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L}},{{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L}},{{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L}},{{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L}},{{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L}},{{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L}},{{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L}},{{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L}},{{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L},{0x74536131L,0x2B18EEE2L,(-1L),0x2B18EEE2L,0x74536131L}}};
    uint16_t *l_172[8][8] = {{&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59},{&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59},{&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59},{&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59},{&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59},{&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59},{&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59},{&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59,&p_1246->g_59}};
    int i, j, k;
    if ((atomic_inc(&p_1246->g_atomic_input[30 * get_linear_group_id() + 26]) == 3))
    { /* block id: 26 */
        VECTOR(int32_t, 8) l_109 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
        VECTOR(int32_t, 8) l_110 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2794C0DAL), 0x2794C0DAL), 0x2794C0DAL, 0L, 0x2794C0DAL);
        VECTOR(int16_t, 16) l_111 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x7FA9L), 0x7FA9L), 0x7FA9L, 1L, 0x7FA9L, (VECTOR(int16_t, 2))(1L, 0x7FA9L), (VECTOR(int16_t, 2))(1L, 0x7FA9L), 1L, 0x7FA9L, 1L, 0x7FA9L);
        VECTOR(int16_t, 8) l_112 = (VECTOR(int16_t, 8))(0x275AL, (VECTOR(int16_t, 4))(0x275AL, (VECTOR(int16_t, 2))(0x275AL, 0x6544L), 0x6544L), 0x6544L, 0x275AL, 0x6544L);
        uint32_t l_113 = 0xAD51AC0DL;
        VECTOR(int16_t, 4) l_114 = (VECTOR(int16_t, 4))(0x5DA4L, (VECTOR(int16_t, 2))(0x5DA4L, (-9L)), (-9L));
        VECTOR(int16_t, 4) l_115 = (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 2L), 2L);
        VECTOR(int16_t, 2) l_116 = (VECTOR(int16_t, 2))(9L, 0x7B93L);
        int64_t l_117 = 0x28E8ED7A3FE0775EL;
        int32_t l_118 = (-7L);
        int32_t l_119 = 0L;
        VECTOR(int16_t, 8) l_120 = (VECTOR(int16_t, 8))(0x2F98L, (VECTOR(int16_t, 4))(0x2F98L, (VECTOR(int16_t, 2))(0x2F98L, (-1L)), (-1L)), (-1L), 0x2F98L, (-1L));
        VECTOR(int16_t, 8) l_121 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-9L)), (-9L)), (-9L), (-1L), (-9L));
        uint64_t l_122 = 0UL;
        int32_t l_123 = 0x20C82433L;
        VECTOR(int16_t, 8) l_124 = (VECTOR(int16_t, 8))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 1L), 1L), 1L, 3L, 1L);
        uint16_t l_125 = 7UL;
        int32_t l_126 = 1L;
        int64_t l_127[4][4][5] = {{{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)},{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)},{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)},{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)}},{{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)},{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)},{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)},{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)}},{{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)},{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)},{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)},{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)}},{{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)},{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)},{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)},{1L,0x69999ABEDA80D186L,0x3E003A25DF1CAE45L,0x070374A045A3BC6BL,(-7L)}}};
        int8_t l_128[4] = {8L,8L,8L,8L};
        VECTOR(int16_t, 8) l_129 = (VECTOR(int16_t, 8))(0x0658L, (VECTOR(int16_t, 4))(0x0658L, (VECTOR(int16_t, 2))(0x0658L, 0x148AL), 0x148AL), 0x148AL, 0x0658L, 0x148AL);
        VECTOR(int16_t, 8) l_130 = (VECTOR(int16_t, 8))(0x3C47L, (VECTOR(int16_t, 4))(0x3C47L, (VECTOR(int16_t, 2))(0x3C47L, 0x6ACAL), 0x6ACAL), 0x6ACAL, 0x3C47L, 0x6ACAL);
        int8_t l_131 = 0L;
        VECTOR(int16_t, 16) l_132 = (VECTOR(int16_t, 16))(0x0530L, (VECTOR(int16_t, 4))(0x0530L, (VECTOR(int16_t, 2))(0x0530L, 0x4D53L), 0x4D53L), 0x4D53L, 0x0530L, 0x4D53L, (VECTOR(int16_t, 2))(0x0530L, 0x4D53L), (VECTOR(int16_t, 2))(0x0530L, 0x4D53L), 0x0530L, 0x4D53L, 0x0530L, 0x4D53L);
        int64_t l_133 = 7L;
        int32_t l_134 = 0x614E436FL;
        int32_t l_135 = 0x67D5C82DL;
        int32_t l_136 = 0x62C939D4L;
        int16_t l_137[6][9] = {{1L,0x3357L,8L,0x3357L,1L,1L,0x3357L,8L,0x3357L},{1L,0x3357L,8L,0x3357L,1L,1L,0x3357L,8L,0x3357L},{1L,0x3357L,8L,0x3357L,1L,1L,0x3357L,8L,0x3357L},{1L,0x3357L,8L,0x3357L,1L,1L,0x3357L,8L,0x3357L},{1L,0x3357L,8L,0x3357L,1L,1L,0x3357L,8L,0x3357L},{1L,0x3357L,8L,0x3357L,1L,1L,0x3357L,8L,0x3357L}};
        int32_t *l_138 = &l_119;
        int32_t *l_139 = (void*)0;
        uint32_t l_140 = 5UL;
        int i, j, k;
        l_137[2][0] ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_109.s05)).xyyxyxxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_110.s31317202)))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(0x6BDDL, 0x6780L)).yxxxyyyy, ((VECTOR(int16_t, 4))(l_111.s11a9)).yyxwzywz, ((VECTOR(int16_t, 16))(l_112.s1210730525352233)).hi))).s41, ((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 16))(0x1A1EL, (-1L), l_113, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(0x327DL, 0x113DL)).xxyxyyxx, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(l_114.wyywxzzy)).s63, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_115.wwxxxwww)).even)))).lo))), 0x77AAL, 3L)).xywwwxww)), ((VECTOR(int16_t, 4))(l_116.yyxy)).zzxyxwwy))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x2A81L, 0x371AL, l_117, ((l_119 = l_118) , ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((-5L), 0L, ((VECTOR(int16_t, 4))(l_120.s6226)).w, (((VECTOR(int16_t, 8))((l_122 |= ((VECTOR(int16_t, 16))(l_121.s7271116317702262)).sc), ((VECTOR(int16_t, 2))(0x4AF8L, 0x5B39L)), 0x6C93L, ((VECTOR(int16_t, 2))(1L, (-9L))), 1L, 0x4882L)).s3 , (l_123 &= 8L)), 5L, 4L, 0x54F0L, (-1L))))).s42, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(l_124.s1671716063701102)).lo, (int16_t)(((VECTOR(int16_t, 2))(0x31C6L, 0x211EL)).lo , (l_126 = (l_125 = 0x6307L)))))).s3025161550154267)).sbd))).even), 0x6A4AL, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(1L, 0L)), (int16_t)l_127[1][1][4]))), 0x359DL)).odd)).zzzzwwwy)))))).seb, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 8))(l_128[3], ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_129.s1617372706600327)).sf17d)).hi, ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 2))(l_130.s73)).yxxyyyxx, ((VECTOR(int16_t, 4))(l_131, ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(1L, ((VECTOR(int16_t, 2))(0x184CL, 0x43A4L)), ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(0x6252L, 0x5909L, (-1L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_132.s2626)), 0x52EEL, 0L, l_133, 0x503DL, (-1L), ((VECTOR(int16_t, 2))(0x211DL)), 0x4010L, (-8L), 0x20E4L, 0x65F9L, 0x6720L)).sc7, ((VECTOR(int16_t, 2))(8L))))), ((VECTOR(int16_t, 2))(0x3A99L)), ((VECTOR(int16_t, 2))((-9L)))))).xxxy)).odd, (int16_t)0x65B7L))), 6L, 0x736BL)).hi, ((VECTOR(int16_t, 2))(0L)), ((VECTOR(int16_t, 2))(0x3BB9L))))).xyxy)), 0x3AD3L, ((VECTOR(int16_t, 4))(5L)), 0x1F76L, 0x44B6L, 0x2EC4L, (-1L))).se5, ((VECTOR(int16_t, 2))(0x2CA9L)), ((VECTOR(int16_t, 2))((-3L)))))), ((VECTOR(int16_t, 4))(0x1B64L)), l_134, l_135, 0x4F54L, ((VECTOR(int16_t, 4))(0x4548L)))).s22)).yyxxxyxx))).s4, 4L, 0x1259L)).zxwzyyzy))).s21))), (-1L), l_136, (-1L), 0x6385L, 0x247AL)).s62)))))))), 7L, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 4))(0x7936L)), 1L, 1L))))).s35))).xyyyyxyxxyxyyxxx)).lo))).s61)).even;
        l_139 = l_138;
        --l_140;
        unsigned int result = 0;
        result += l_109.s7;
        result += l_109.s6;
        result += l_109.s5;
        result += l_109.s4;
        result += l_109.s3;
        result += l_109.s2;
        result += l_109.s1;
        result += l_109.s0;
        result += l_110.s7;
        result += l_110.s6;
        result += l_110.s5;
        result += l_110.s4;
        result += l_110.s3;
        result += l_110.s2;
        result += l_110.s1;
        result += l_110.s0;
        result += l_111.sf;
        result += l_111.se;
        result += l_111.sd;
        result += l_111.sc;
        result += l_111.sb;
        result += l_111.sa;
        result += l_111.s9;
        result += l_111.s8;
        result += l_111.s7;
        result += l_111.s6;
        result += l_111.s5;
        result += l_111.s4;
        result += l_111.s3;
        result += l_111.s2;
        result += l_111.s1;
        result += l_111.s0;
        result += l_112.s7;
        result += l_112.s6;
        result += l_112.s5;
        result += l_112.s4;
        result += l_112.s3;
        result += l_112.s2;
        result += l_112.s1;
        result += l_112.s0;
        result += l_113;
        result += l_114.w;
        result += l_114.z;
        result += l_114.y;
        result += l_114.x;
        result += l_115.w;
        result += l_115.z;
        result += l_115.y;
        result += l_115.x;
        result += l_116.y;
        result += l_116.x;
        result += l_117;
        result += l_118;
        result += l_119;
        result += l_120.s7;
        result += l_120.s6;
        result += l_120.s5;
        result += l_120.s4;
        result += l_120.s3;
        result += l_120.s2;
        result += l_120.s1;
        result += l_120.s0;
        result += l_121.s7;
        result += l_121.s6;
        result += l_121.s5;
        result += l_121.s4;
        result += l_121.s3;
        result += l_121.s2;
        result += l_121.s1;
        result += l_121.s0;
        result += l_122;
        result += l_123;
        result += l_124.s7;
        result += l_124.s6;
        result += l_124.s5;
        result += l_124.s4;
        result += l_124.s3;
        result += l_124.s2;
        result += l_124.s1;
        result += l_124.s0;
        result += l_125;
        result += l_126;
        int l_127_i0, l_127_i1, l_127_i2;
        for (l_127_i0 = 0; l_127_i0 < 4; l_127_i0++) {
            for (l_127_i1 = 0; l_127_i1 < 4; l_127_i1++) {
                for (l_127_i2 = 0; l_127_i2 < 5; l_127_i2++) {
                    result += l_127[l_127_i0][l_127_i1][l_127_i2];
                }
            }
        }
        int l_128_i0;
        for (l_128_i0 = 0; l_128_i0 < 4; l_128_i0++) {
            result += l_128[l_128_i0];
        }
        result += l_129.s7;
        result += l_129.s6;
        result += l_129.s5;
        result += l_129.s4;
        result += l_129.s3;
        result += l_129.s2;
        result += l_129.s1;
        result += l_129.s0;
        result += l_130.s7;
        result += l_130.s6;
        result += l_130.s5;
        result += l_130.s4;
        result += l_130.s3;
        result += l_130.s2;
        result += l_130.s1;
        result += l_130.s0;
        result += l_131;
        result += l_132.sf;
        result += l_132.se;
        result += l_132.sd;
        result += l_132.sc;
        result += l_132.sb;
        result += l_132.sa;
        result += l_132.s9;
        result += l_132.s8;
        result += l_132.s7;
        result += l_132.s6;
        result += l_132.s5;
        result += l_132.s4;
        result += l_132.s3;
        result += l_132.s2;
        result += l_132.s1;
        result += l_132.s0;
        result += l_133;
        result += l_134;
        result += l_135;
        result += l_136;
        int l_137_i0, l_137_i1;
        for (l_137_i0 = 0; l_137_i0 < 6; l_137_i0++) {
            for (l_137_i1 = 0; l_137_i1 < 9; l_137_i1++) {
                result += l_137[l_137_i0][l_137_i1];
            }
        }
        result += l_140;
        atomic_add(&p_1246->g_special_values[30 * get_linear_group_id() + 26], result);
    }
    else
    { /* block id: 35 */
        (1 + 1);
    }
    for (p_1246->g_55 = 3; (p_1246->g_55 != 35); p_1246->g_55 = safe_add_func_int64_t_s_s(p_1246->g_55, 2))
    { /* block id: 40 */
        VECTOR(uint32_t, 16) l_147 = (VECTOR(uint32_t, 16))(0x04ADF116L, (VECTOR(uint32_t, 4))(0x04ADF116L, (VECTOR(uint32_t, 2))(0x04ADF116L, 0x4C18CA03L), 0x4C18CA03L), 0x4C18CA03L, 0x04ADF116L, 0x4C18CA03L, (VECTOR(uint32_t, 2))(0x04ADF116L, 0x4C18CA03L), (VECTOR(uint32_t, 2))(0x04ADF116L, 0x4C18CA03L), 0x04ADF116L, 0x4C18CA03L, 0x04ADF116L, 0x4C18CA03L);
        VECTOR(uint32_t, 16) l_149 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xE1EA3A65L), 0xE1EA3A65L), 0xE1EA3A65L, 4294967295UL, 0xE1EA3A65L, (VECTOR(uint32_t, 2))(4294967295UL, 0xE1EA3A65L), (VECTOR(uint32_t, 2))(4294967295UL, 0xE1EA3A65L), 4294967295UL, 0xE1EA3A65L, 4294967295UL, 0xE1EA3A65L);
        int32_t *l_154 = &p_1246->g_155;
        int32_t **l_156[4] = {&l_154,&l_154,&l_154,&l_154};
        uint8_t l_169 = 0x62L;
        uint32_t *l_183 = (void*)0;
        uint32_t *l_184 = (void*)0;
        uint32_t *l_185 = (void*)0;
        uint32_t *l_186 = (void*)0;
        uint32_t *l_187 = (void*)0;
        uint32_t *l_188 = (void*)0;
        uint32_t *l_189 = (void*)0;
        VECTOR(int32_t, 8) l_191 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x43BA547CL), 0x43BA547CL), 0x43BA547CL, 3L, 0x43BA547CL);
        int16_t *l_198 = &p_1246->g_175;
        uint8_t *l_206[7] = {&l_169,&l_169,&l_169,&l_169,&l_169,&l_169,&l_169};
        uint32_t l_208 = 4294967288UL;
        int i;
        if (((p_102 == (-6L)) > ((0x53L > (safe_div_func_int16_t_s_s((((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_147.s2275aa4a)))).s40, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_148.ww)).yxyy)).lo, ((VECTOR(uint32_t, 16))(l_149.sf83de727db1d573e)).s28))).yyyx, (uint32_t)((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x5F00511DL, 0UL)).xxyxyxxy)).s1))).z ^ (p_1246->g_88.s3 == (safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((p_101 = l_154) == (p_1246->g_158 = l_157)), (p_1246->g_55 < p_1246->g_44))), (safe_lshift_func_uint16_t_u_u(p_104, p_1246->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1246->tid, 79))])))))), GROUP_DIVERGE(2, 1)))) & p_104)))
        { /* block id: 43 */
            int16_t l_162[4][3][5] = {{{(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L)}},{{(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L)}},{{(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L)}},{{(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L)}}};
            int32_t l_163 = 3L;
            int32_t l_165 = 0L;
            int32_t l_166[8][3] = {{0x0234E0B6L,0x3D6EBB9BL,0x21D4AA51L},{0x0234E0B6L,0x3D6EBB9BL,0x21D4AA51L},{0x0234E0B6L,0x3D6EBB9BL,0x21D4AA51L},{0x0234E0B6L,0x3D6EBB9BL,0x21D4AA51L},{0x0234E0B6L,0x3D6EBB9BL,0x21D4AA51L},{0x0234E0B6L,0x3D6EBB9BL,0x21D4AA51L},{0x0234E0B6L,0x3D6EBB9BL,0x21D4AA51L},{0x0234E0B6L,0x3D6EBB9BL,0x21D4AA51L}};
            int i, j, k;
            l_162[2][2][1] = ((*p_101) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1246->g_161.wx)).yyxxxxyxxxyyyxyx)).even)).s5);
            --l_169;
            return l_172[3][0];
        }
        else
        { /* block id: 48 */
            VECTOR(int16_t, 4) l_173 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-7L)), (-7L));
            int16_t *l_174[8][6][5] = {{{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50}},{{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50}},{{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50}},{{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50}},{{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50}},{{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50}},{{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50}},{{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50},{&p_1246->g_175,(void*)0,(void*)0,(void*)0,&p_1246->g_50}}};
            uint32_t *l_177 = (void*)0;
            uint32_t **l_176[10][7] = {{&l_177,&l_177,&l_177,&l_177,&l_177,&l_177,&l_177},{&l_177,&l_177,&l_177,&l_177,&l_177,&l_177,&l_177},{&l_177,&l_177,&l_177,&l_177,&l_177,&l_177,&l_177},{&l_177,&l_177,&l_177,&l_177,&l_177,&l_177,&l_177},{&l_177,&l_177,&l_177,&l_177,&l_177,&l_177,&l_177},{&l_177,&l_177,&l_177,&l_177,&l_177,&l_177,&l_177},{&l_177,&l_177,&l_177,&l_177,&l_177,&l_177,&l_177},{&l_177,&l_177,&l_177,&l_177,&l_177,&l_177,&l_177},{&l_177,&l_177,&l_177,&l_177,&l_177,&l_177,&l_177},{&l_177,&l_177,&l_177,&l_177,&l_177,&l_177,&l_177}};
            int i, j, k;
            p_1246->g_158 = &p_1246->g_155;
            (*p_101) = (l_173.w & (((p_1246->g_175 |= p_1246->g_50) , (p_1246->g_178 = (void*)0)) == (p_1246->g_180 = (void*)0)));
        }
        (*p_101) |= (((safe_mod_func_uint32_t_u_u((p_1246->g_190 = p_1246->g_161.y), ((VECTOR(int32_t, 8))(l_191.s44677360)).s0)) , 0x608C1F7BL) , (safe_lshift_func_uint8_t_u_s((p_1246->g_207 = (safe_div_func_int64_t_s_s((~(safe_lshift_func_int16_t_s_u((p_1246->g_50 != ((*l_198) = 6L)), p_1246->g_199))), ((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(0x12L, (((((safe_mod_func_uint8_t_u_u(p_1246->g_59, (((void*)0 == &p_102) , ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))((safe_add_func_uint16_t_u_u((0x9A4825EFL >= p_1246->g_59), p_1246->g_comm_values[p_1246->tid])), 0x1EL, 1L, 0x06L, p_1246->g_88.s6, ((VECTOR(int8_t, 2))(0L)), 0x1EL)), ((VECTOR(int8_t, 8))(0x78L))))).s7))) , (void*)0) == (void*)0) >= 9UL) , 0xF0L), 247UL, 0x18L, 0x03L, 1UL, 254UL, 1UL)).even)).ywzxwxzzxxxywwwx, ((VECTOR(uint8_t, 16))(1UL))))).s9545, ((VECTOR(uint8_t, 4))(1UL))))).y, p_1246->g_88.s1)) | 0x1FL)))), 4)));
        (*l_154) = (*l_154);
        l_208++;
    }
    return l_172[6][3];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[30];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 30; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[30];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 30; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[79];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 79; i++)
            l_comm_values[i] = 1;
    struct S0 c_1247;
    struct S0* p_1246 = &c_1247;
    struct S0 c_1248 = {
        0x3108F825L, // p_1246->g_2
        0x6F72D4EAL, // p_1246->g_3
        (VECTOR(uint8_t, 2))(3UL, 247UL), // p_1246->g_20
        0x45CBL, // p_1246->g_44
        0x0421L, // p_1246->g_50
        65535UL, // p_1246->g_51
        3UL, // p_1246->g_55
        1UL, // p_1246->g_59
        0x53D8B2F9L, // p_1246->g_81
        (VECTOR(int64_t, 8))(0x7E548C15133AA3A0L, (VECTOR(int64_t, 4))(0x7E548C15133AA3A0L, (VECTOR(int64_t, 2))(0x7E548C15133AA3A0L, 0x7380A6A08C46E721L), 0x7380A6A08C46E721L), 0x7380A6A08C46E721L, 0x7E548C15133AA3A0L, 0x7380A6A08C46E721L), // p_1246->g_88
        1L, // p_1246->g_155
        &p_1246->g_155, // p_1246->g_158
        (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 2L), 2L), // p_1246->g_161
        (-1L), // p_1246->g_175
        4294967295UL, // p_1246->g_179
        &p_1246->g_179, // p_1246->g_178
        &p_1246->g_179, // p_1246->g_180
        0x1E674F9FL, // p_1246->g_190
        0x1CFB0ABCBBCD2E24L, // p_1246->g_199
        0xF2F50FCEL, // p_1246->g_207
        (VECTOR(uint32_t, 2))(0xCCAD145CL, 4294967295UL), // p_1246->g_236
        2UL, // p_1246->g_238
        0x14L, // p_1246->g_259
        65535UL, // p_1246->g_263
        1UL, // p_1246->g_272
        0x1C17BA4ABCE9D901L, // p_1246->g_310
        (-6L), // p_1246->g_314
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x74L), 0x74L), 0x74L, 1UL, 0x74L, (VECTOR(uint8_t, 2))(1UL, 0x74L), (VECTOR(uint8_t, 2))(1UL, 0x74L), 1UL, 0x74L, 1UL, 0x74L), // p_1246->g_339
        (VECTOR(uint32_t, 16))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 7UL), 7UL), 7UL, 3UL, 7UL, (VECTOR(uint32_t, 2))(3UL, 7UL), (VECTOR(uint32_t, 2))(3UL, 7UL), 3UL, 7UL, 3UL, 7UL), // p_1246->g_343
        (VECTOR(uint32_t, 2))(1UL, 4294967291UL), // p_1246->g_344
        (VECTOR(uint32_t, 8))(0x9F6A4FDCL, (VECTOR(uint32_t, 4))(0x9F6A4FDCL, (VECTOR(uint32_t, 2))(0x9F6A4FDCL, 4294967286UL), 4294967286UL), 4294967286UL, 0x9F6A4FDCL, 4294967286UL), // p_1246->g_345
        (VECTOR(uint32_t, 2))(1UL, 4294967295UL), // p_1246->g_346
        (VECTOR(uint32_t, 4))(0x53FEF327L, (VECTOR(uint32_t, 2))(0x53FEF327L, 0x901EEE6BL), 0x901EEE6BL), // p_1246->g_347
        &p_1246->g_272, // p_1246->g_359
        (VECTOR(uint16_t, 4))(0xBCE3L, (VECTOR(uint16_t, 2))(0xBCE3L, 6UL), 6UL), // p_1246->g_360
        (VECTOR(int16_t, 16))(0x3103L, (VECTOR(int16_t, 4))(0x3103L, (VECTOR(int16_t, 2))(0x3103L, 0L), 0L), 0L, 0x3103L, 0L, (VECTOR(int16_t, 2))(0x3103L, 0L), (VECTOR(int16_t, 2))(0x3103L, 0L), 0x3103L, 0L, 0x3103L, 0L), // p_1246->g_471
        {{{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0}},{{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0}},{{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0}},{{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0}},{{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0}},{{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0}},{{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0}},{{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0}},{{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0},{(void*)0,&p_1246->g_155,(void*)0}}}, // p_1246->g_475
        (VECTOR(uint32_t, 8))(0x13F58BB4L, (VECTOR(uint32_t, 4))(0x13F58BB4L, (VECTOR(uint32_t, 2))(0x13F58BB4L, 8UL), 8UL), 8UL, 0x13F58BB4L, 8UL), // p_1246->g_484
        0L, // p_1246->g_600
        (void*)0, // p_1246->g_611
        (void*)0, // p_1246->g_612
        (void*)0, // p_1246->g_613
        (void*)0, // p_1246->g_614
        {&p_1246->g_614,&p_1246->g_614,&p_1246->g_614,&p_1246->g_614,&p_1246->g_614,&p_1246->g_614,&p_1246->g_614,&p_1246->g_614}, // p_1246->g_689
        &p_1246->g_689[0], // p_1246->g_688
        &p_1246->g_158, // p_1246->g_690
        (VECTOR(uint32_t, 2))(0xF49298C5L, 0x686A032AL), // p_1246->g_735
        5L, // p_1246->g_739
        (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x49BF7645L), 0x49BF7645L), 0x49BF7645L, (-6L), 0x49BF7645L, (VECTOR(int32_t, 2))((-6L), 0x49BF7645L), (VECTOR(int32_t, 2))((-6L), 0x49BF7645L), (-6L), 0x49BF7645L, (-6L), 0x49BF7645L), // p_1246->g_742
        (VECTOR(int32_t, 2))(0x14EAB465L, 0x0DD633BEL), // p_1246->g_748
        (VECTOR(int32_t, 2))(9L, 1L), // p_1246->g_751
        (VECTOR(int32_t, 16))(0x7E3E36D0L, (VECTOR(int32_t, 4))(0x7E3E36D0L, (VECTOR(int32_t, 2))(0x7E3E36D0L, 1L), 1L), 1L, 0x7E3E36D0L, 1L, (VECTOR(int32_t, 2))(0x7E3E36D0L, 1L), (VECTOR(int32_t, 2))(0x7E3E36D0L, 1L), 0x7E3E36D0L, 1L, 0x7E3E36D0L, 1L), // p_1246->g_753
        &p_1246->g_158, // p_1246->g_788
        0x38BDL, // p_1246->g_796
        {&p_1246->g_612,&p_1246->g_612,&p_1246->g_612,&p_1246->g_612,&p_1246->g_612,&p_1246->g_612}, // p_1246->g_800
        {{{&p_1246->g_800[1]},{&p_1246->g_800[1]},{&p_1246->g_800[1]}},{{&p_1246->g_800[1]},{&p_1246->g_800[1]},{&p_1246->g_800[1]}},{{&p_1246->g_800[1]},{&p_1246->g_800[1]},{&p_1246->g_800[1]}}}, // p_1246->g_799
        (void*)0, // p_1246->g_860
        (VECTOR(uint16_t, 4))(0xC6B8L, (VECTOR(uint16_t, 2))(0xC6B8L, 0x884FL), 0x884FL), // p_1246->g_864
        65526UL, // p_1246->g_865
        {&p_1246->g_865,&p_1246->g_865,&p_1246->g_865,&p_1246->g_865,&p_1246->g_865,&p_1246->g_865,&p_1246->g_865,&p_1246->g_865,&p_1246->g_865}, // p_1246->g_863
        &p_1246->g_863[0], // p_1246->g_862
        &p_1246->g_59, // p_1246->g_870
        {&p_1246->g_870,&p_1246->g_870,&p_1246->g_870,&p_1246->g_870,&p_1246->g_870}, // p_1246->g_869
        (VECTOR(int64_t, 8))(0x60C91D41C07A7344L, (VECTOR(int64_t, 4))(0x60C91D41C07A7344L, (VECTOR(int64_t, 2))(0x60C91D41C07A7344L, 5L), 5L), 5L, 0x60C91D41C07A7344L, 5L), // p_1246->g_872
        0L, // p_1246->g_879
        (VECTOR(uint16_t, 2))(0x75EDL, 1UL), // p_1246->g_886
        (VECTOR(int64_t, 4))(0x7711FA08B3AD7217L, (VECTOR(int64_t, 2))(0x7711FA08B3AD7217L, 0x06498190878C9778L), 0x06498190878C9778L), // p_1246->g_904
        (VECTOR(int8_t, 4))(0x7BL, (VECTOR(int8_t, 2))(0x7BL, 0x17L), 0x17L), // p_1246->g_906
        &p_1246->g_158, // p_1246->g_934
        (VECTOR(int32_t, 4))(0x4A460723L, (VECTOR(int32_t, 2))(0x4A460723L, 0x63F3FBFEL), 0x63F3FBFEL), // p_1246->g_942
        (VECTOR(uint32_t, 16))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0x25C30930L), 0x25C30930L), 0x25C30930L, 4294967288UL, 0x25C30930L, (VECTOR(uint32_t, 2))(4294967288UL, 0x25C30930L), (VECTOR(uint32_t, 2))(4294967288UL, 0x25C30930L), 4294967288UL, 0x25C30930L, 4294967288UL, 0x25C30930L), // p_1246->g_950
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), // p_1246->g_968
        (VECTOR(int8_t, 8))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x1CL), 0x1CL), 0x1CL, (-8L), 0x1CL), // p_1246->g_969
        0x6DL, // p_1246->g_975
        &p_1246->g_975, // p_1246->g_974
        &p_1246->g_974, // p_1246->g_973
        &p_1246->g_973, // p_1246->g_972
        (VECTOR(int32_t, 2))(0x210CF872L, 1L), // p_1246->g_983
        (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x2BC32866L), 0x2BC32866L), 0x2BC32866L, (-2L), 0x2BC32866L), // p_1246->g_984
        (VECTOR(int32_t, 2))(1L, 0x6B42D09EL), // p_1246->g_985
        0xD85FC77AAF1E965DL, // p_1246->g_994
        (void*)0, // p_1246->g_1014
        &p_1246->g_1014, // p_1246->g_1013
        &p_1246->g_1014, // p_1246->g_1017
        &p_1246->g_1017, // p_1246->g_1016
        (VECTOR(int16_t, 16))(0x63A6L, (VECTOR(int16_t, 4))(0x63A6L, (VECTOR(int16_t, 2))(0x63A6L, 0x7AD9L), 0x7AD9L), 0x7AD9L, 0x63A6L, 0x7AD9L, (VECTOR(int16_t, 2))(0x63A6L, 0x7AD9L), (VECTOR(int16_t, 2))(0x63A6L, 0x7AD9L), 0x63A6L, 0x7AD9L, 0x63A6L, 0x7AD9L), // p_1246->g_1024
        (VECTOR(int16_t, 2))(1L, 0x4A41L), // p_1246->g_1025
        (VECTOR(int32_t, 2))(0x0FA30F07L, 0x273CFAFDL), // p_1246->g_1028
        (VECTOR(int8_t, 2))(0L, 0x40L), // p_1246->g_1029
        (VECTOR(uint8_t, 16))(0x21L, (VECTOR(uint8_t, 4))(0x21L, (VECTOR(uint8_t, 2))(0x21L, 255UL), 255UL), 255UL, 0x21L, 255UL, (VECTOR(uint8_t, 2))(0x21L, 255UL), (VECTOR(uint8_t, 2))(0x21L, 255UL), 0x21L, 255UL, 0x21L, 255UL), // p_1246->g_1030
        (VECTOR(uint8_t, 8))(0x25L, (VECTOR(uint8_t, 4))(0x25L, (VECTOR(uint8_t, 2))(0x25L, 1UL), 1UL), 1UL, 0x25L, 1UL), // p_1246->g_1035
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL), // p_1246->g_1036
        &p_1246->g_158, // p_1246->g_1060
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 6UL), 6UL), // p_1246->g_1077
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x7E710DC3D912ECC2L), 0x7E710DC3D912ECC2L), 0x7E710DC3D912ECC2L, 0UL, 0x7E710DC3D912ECC2L, (VECTOR(uint64_t, 2))(0UL, 0x7E710DC3D912ECC2L), (VECTOR(uint64_t, 2))(0UL, 0x7E710DC3D912ECC2L), 0UL, 0x7E710DC3D912ECC2L, 0UL, 0x7E710DC3D912ECC2L), // p_1246->g_1078
        (VECTOR(int8_t, 2))(0x26L, 0x77L), // p_1246->g_1137
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x58L), 0x58L), // p_1246->g_1138
        (VECTOR(int8_t, 2))(0x40L, 0x50L), // p_1246->g_1142
        (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, (-4L)), (-4L)), (-4L), 7L, (-4L), (VECTOR(int8_t, 2))(7L, (-4L)), (VECTOR(int8_t, 2))(7L, (-4L)), 7L, (-4L), 7L, (-4L)), // p_1246->g_1144
        (VECTOR(int8_t, 4))(0x2AL, (VECTOR(int8_t, 2))(0x2AL, (-2L)), (-2L)), // p_1246->g_1145
        (VECTOR(int8_t, 4))(0x5FL, (VECTOR(int8_t, 2))(0x5FL, 0L), 0L), // p_1246->g_1146
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L, (VECTOR(int32_t, 2))((-1L), 2L), (VECTOR(int32_t, 2))((-1L), 2L), (-1L), 2L, (-1L), 2L), // p_1246->g_1164
        (VECTOR(int16_t, 16))(0x33BFL, (VECTOR(int16_t, 4))(0x33BFL, (VECTOR(int16_t, 2))(0x33BFL, 8L), 8L), 8L, 0x33BFL, 8L, (VECTOR(int16_t, 2))(0x33BFL, 8L), (VECTOR(int16_t, 2))(0x33BFL, 8L), 0x33BFL, 8L, 0x33BFL, 8L), // p_1246->g_1194
        (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x0924CED1L), 0x0924CED1L), 0x0924CED1L, 2L, 0x0924CED1L, (VECTOR(int32_t, 2))(2L, 0x0924CED1L), (VECTOR(int32_t, 2))(2L, 0x0924CED1L), 2L, 0x0924CED1L, 2L, 0x0924CED1L), // p_1246->g_1197
        {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}, // p_1246->g_1220
        0L, // p_1246->g_1231
        (-1L), // p_1246->g_1239
        0, // p_1246->v_collective
        sequence_input[get_global_id(0)], // p_1246->global_0_offset
        sequence_input[get_global_id(1)], // p_1246->global_1_offset
        sequence_input[get_global_id(2)], // p_1246->global_2_offset
        sequence_input[get_local_id(0)], // p_1246->local_0_offset
        sequence_input[get_local_id(1)], // p_1246->local_1_offset
        sequence_input[get_local_id(2)], // p_1246->local_2_offset
        sequence_input[get_group_id(0)], // p_1246->group_0_offset
        sequence_input[get_group_id(1)], // p_1246->group_1_offset
        sequence_input[get_group_id(2)], // p_1246->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 79)), permutations[0][get_linear_local_id()])), // p_1246->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1247 = c_1248;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1246);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1246->g_2, "p_1246->g_2", print_hash_value);
    transparent_crc(p_1246->g_3, "p_1246->g_3", print_hash_value);
    transparent_crc(p_1246->g_20.x, "p_1246->g_20.x", print_hash_value);
    transparent_crc(p_1246->g_20.y, "p_1246->g_20.y", print_hash_value);
    transparent_crc(p_1246->g_44, "p_1246->g_44", print_hash_value);
    transparent_crc(p_1246->g_50, "p_1246->g_50", print_hash_value);
    transparent_crc(p_1246->g_51, "p_1246->g_51", print_hash_value);
    transparent_crc(p_1246->g_55, "p_1246->g_55", print_hash_value);
    transparent_crc(p_1246->g_59, "p_1246->g_59", print_hash_value);
    transparent_crc(p_1246->g_81, "p_1246->g_81", print_hash_value);
    transparent_crc(p_1246->g_88.s0, "p_1246->g_88.s0", print_hash_value);
    transparent_crc(p_1246->g_88.s1, "p_1246->g_88.s1", print_hash_value);
    transparent_crc(p_1246->g_88.s2, "p_1246->g_88.s2", print_hash_value);
    transparent_crc(p_1246->g_88.s3, "p_1246->g_88.s3", print_hash_value);
    transparent_crc(p_1246->g_88.s4, "p_1246->g_88.s4", print_hash_value);
    transparent_crc(p_1246->g_88.s5, "p_1246->g_88.s5", print_hash_value);
    transparent_crc(p_1246->g_88.s6, "p_1246->g_88.s6", print_hash_value);
    transparent_crc(p_1246->g_88.s7, "p_1246->g_88.s7", print_hash_value);
    transparent_crc(p_1246->g_155, "p_1246->g_155", print_hash_value);
    transparent_crc(p_1246->g_161.x, "p_1246->g_161.x", print_hash_value);
    transparent_crc(p_1246->g_161.y, "p_1246->g_161.y", print_hash_value);
    transparent_crc(p_1246->g_161.z, "p_1246->g_161.z", print_hash_value);
    transparent_crc(p_1246->g_161.w, "p_1246->g_161.w", print_hash_value);
    transparent_crc(p_1246->g_175, "p_1246->g_175", print_hash_value);
    transparent_crc(p_1246->g_179, "p_1246->g_179", print_hash_value);
    transparent_crc(p_1246->g_190, "p_1246->g_190", print_hash_value);
    transparent_crc(p_1246->g_199, "p_1246->g_199", print_hash_value);
    transparent_crc(p_1246->g_207, "p_1246->g_207", print_hash_value);
    transparent_crc(p_1246->g_236.x, "p_1246->g_236.x", print_hash_value);
    transparent_crc(p_1246->g_236.y, "p_1246->g_236.y", print_hash_value);
    transparent_crc(p_1246->g_238, "p_1246->g_238", print_hash_value);
    transparent_crc(p_1246->g_259, "p_1246->g_259", print_hash_value);
    transparent_crc(p_1246->g_263, "p_1246->g_263", print_hash_value);
    transparent_crc(p_1246->g_272, "p_1246->g_272", print_hash_value);
    transparent_crc(p_1246->g_310, "p_1246->g_310", print_hash_value);
    transparent_crc(p_1246->g_314, "p_1246->g_314", print_hash_value);
    transparent_crc(p_1246->g_339.s0, "p_1246->g_339.s0", print_hash_value);
    transparent_crc(p_1246->g_339.s1, "p_1246->g_339.s1", print_hash_value);
    transparent_crc(p_1246->g_339.s2, "p_1246->g_339.s2", print_hash_value);
    transparent_crc(p_1246->g_339.s3, "p_1246->g_339.s3", print_hash_value);
    transparent_crc(p_1246->g_339.s4, "p_1246->g_339.s4", print_hash_value);
    transparent_crc(p_1246->g_339.s5, "p_1246->g_339.s5", print_hash_value);
    transparent_crc(p_1246->g_339.s6, "p_1246->g_339.s6", print_hash_value);
    transparent_crc(p_1246->g_339.s7, "p_1246->g_339.s7", print_hash_value);
    transparent_crc(p_1246->g_339.s8, "p_1246->g_339.s8", print_hash_value);
    transparent_crc(p_1246->g_339.s9, "p_1246->g_339.s9", print_hash_value);
    transparent_crc(p_1246->g_339.sa, "p_1246->g_339.sa", print_hash_value);
    transparent_crc(p_1246->g_339.sb, "p_1246->g_339.sb", print_hash_value);
    transparent_crc(p_1246->g_339.sc, "p_1246->g_339.sc", print_hash_value);
    transparent_crc(p_1246->g_339.sd, "p_1246->g_339.sd", print_hash_value);
    transparent_crc(p_1246->g_339.se, "p_1246->g_339.se", print_hash_value);
    transparent_crc(p_1246->g_339.sf, "p_1246->g_339.sf", print_hash_value);
    transparent_crc(p_1246->g_343.s0, "p_1246->g_343.s0", print_hash_value);
    transparent_crc(p_1246->g_343.s1, "p_1246->g_343.s1", print_hash_value);
    transparent_crc(p_1246->g_343.s2, "p_1246->g_343.s2", print_hash_value);
    transparent_crc(p_1246->g_343.s3, "p_1246->g_343.s3", print_hash_value);
    transparent_crc(p_1246->g_343.s4, "p_1246->g_343.s4", print_hash_value);
    transparent_crc(p_1246->g_343.s5, "p_1246->g_343.s5", print_hash_value);
    transparent_crc(p_1246->g_343.s6, "p_1246->g_343.s6", print_hash_value);
    transparent_crc(p_1246->g_343.s7, "p_1246->g_343.s7", print_hash_value);
    transparent_crc(p_1246->g_343.s8, "p_1246->g_343.s8", print_hash_value);
    transparent_crc(p_1246->g_343.s9, "p_1246->g_343.s9", print_hash_value);
    transparent_crc(p_1246->g_343.sa, "p_1246->g_343.sa", print_hash_value);
    transparent_crc(p_1246->g_343.sb, "p_1246->g_343.sb", print_hash_value);
    transparent_crc(p_1246->g_343.sc, "p_1246->g_343.sc", print_hash_value);
    transparent_crc(p_1246->g_343.sd, "p_1246->g_343.sd", print_hash_value);
    transparent_crc(p_1246->g_343.se, "p_1246->g_343.se", print_hash_value);
    transparent_crc(p_1246->g_343.sf, "p_1246->g_343.sf", print_hash_value);
    transparent_crc(p_1246->g_344.x, "p_1246->g_344.x", print_hash_value);
    transparent_crc(p_1246->g_344.y, "p_1246->g_344.y", print_hash_value);
    transparent_crc(p_1246->g_345.s0, "p_1246->g_345.s0", print_hash_value);
    transparent_crc(p_1246->g_345.s1, "p_1246->g_345.s1", print_hash_value);
    transparent_crc(p_1246->g_345.s2, "p_1246->g_345.s2", print_hash_value);
    transparent_crc(p_1246->g_345.s3, "p_1246->g_345.s3", print_hash_value);
    transparent_crc(p_1246->g_345.s4, "p_1246->g_345.s4", print_hash_value);
    transparent_crc(p_1246->g_345.s5, "p_1246->g_345.s5", print_hash_value);
    transparent_crc(p_1246->g_345.s6, "p_1246->g_345.s6", print_hash_value);
    transparent_crc(p_1246->g_345.s7, "p_1246->g_345.s7", print_hash_value);
    transparent_crc(p_1246->g_346.x, "p_1246->g_346.x", print_hash_value);
    transparent_crc(p_1246->g_346.y, "p_1246->g_346.y", print_hash_value);
    transparent_crc(p_1246->g_347.x, "p_1246->g_347.x", print_hash_value);
    transparent_crc(p_1246->g_347.y, "p_1246->g_347.y", print_hash_value);
    transparent_crc(p_1246->g_347.z, "p_1246->g_347.z", print_hash_value);
    transparent_crc(p_1246->g_347.w, "p_1246->g_347.w", print_hash_value);
    transparent_crc(p_1246->g_360.x, "p_1246->g_360.x", print_hash_value);
    transparent_crc(p_1246->g_360.y, "p_1246->g_360.y", print_hash_value);
    transparent_crc(p_1246->g_360.z, "p_1246->g_360.z", print_hash_value);
    transparent_crc(p_1246->g_360.w, "p_1246->g_360.w", print_hash_value);
    transparent_crc(p_1246->g_471.s0, "p_1246->g_471.s0", print_hash_value);
    transparent_crc(p_1246->g_471.s1, "p_1246->g_471.s1", print_hash_value);
    transparent_crc(p_1246->g_471.s2, "p_1246->g_471.s2", print_hash_value);
    transparent_crc(p_1246->g_471.s3, "p_1246->g_471.s3", print_hash_value);
    transparent_crc(p_1246->g_471.s4, "p_1246->g_471.s4", print_hash_value);
    transparent_crc(p_1246->g_471.s5, "p_1246->g_471.s5", print_hash_value);
    transparent_crc(p_1246->g_471.s6, "p_1246->g_471.s6", print_hash_value);
    transparent_crc(p_1246->g_471.s7, "p_1246->g_471.s7", print_hash_value);
    transparent_crc(p_1246->g_471.s8, "p_1246->g_471.s8", print_hash_value);
    transparent_crc(p_1246->g_471.s9, "p_1246->g_471.s9", print_hash_value);
    transparent_crc(p_1246->g_471.sa, "p_1246->g_471.sa", print_hash_value);
    transparent_crc(p_1246->g_471.sb, "p_1246->g_471.sb", print_hash_value);
    transparent_crc(p_1246->g_471.sc, "p_1246->g_471.sc", print_hash_value);
    transparent_crc(p_1246->g_471.sd, "p_1246->g_471.sd", print_hash_value);
    transparent_crc(p_1246->g_471.se, "p_1246->g_471.se", print_hash_value);
    transparent_crc(p_1246->g_471.sf, "p_1246->g_471.sf", print_hash_value);
    transparent_crc(p_1246->g_484.s0, "p_1246->g_484.s0", print_hash_value);
    transparent_crc(p_1246->g_484.s1, "p_1246->g_484.s1", print_hash_value);
    transparent_crc(p_1246->g_484.s2, "p_1246->g_484.s2", print_hash_value);
    transparent_crc(p_1246->g_484.s3, "p_1246->g_484.s3", print_hash_value);
    transparent_crc(p_1246->g_484.s4, "p_1246->g_484.s4", print_hash_value);
    transparent_crc(p_1246->g_484.s5, "p_1246->g_484.s5", print_hash_value);
    transparent_crc(p_1246->g_484.s6, "p_1246->g_484.s6", print_hash_value);
    transparent_crc(p_1246->g_484.s7, "p_1246->g_484.s7", print_hash_value);
    transparent_crc(p_1246->g_600, "p_1246->g_600", print_hash_value);
    transparent_crc(p_1246->g_735.x, "p_1246->g_735.x", print_hash_value);
    transparent_crc(p_1246->g_735.y, "p_1246->g_735.y", print_hash_value);
    transparent_crc(p_1246->g_739, "p_1246->g_739", print_hash_value);
    transparent_crc(p_1246->g_742.s0, "p_1246->g_742.s0", print_hash_value);
    transparent_crc(p_1246->g_742.s1, "p_1246->g_742.s1", print_hash_value);
    transparent_crc(p_1246->g_742.s2, "p_1246->g_742.s2", print_hash_value);
    transparent_crc(p_1246->g_742.s3, "p_1246->g_742.s3", print_hash_value);
    transparent_crc(p_1246->g_742.s4, "p_1246->g_742.s4", print_hash_value);
    transparent_crc(p_1246->g_742.s5, "p_1246->g_742.s5", print_hash_value);
    transparent_crc(p_1246->g_742.s6, "p_1246->g_742.s6", print_hash_value);
    transparent_crc(p_1246->g_742.s7, "p_1246->g_742.s7", print_hash_value);
    transparent_crc(p_1246->g_742.s8, "p_1246->g_742.s8", print_hash_value);
    transparent_crc(p_1246->g_742.s9, "p_1246->g_742.s9", print_hash_value);
    transparent_crc(p_1246->g_742.sa, "p_1246->g_742.sa", print_hash_value);
    transparent_crc(p_1246->g_742.sb, "p_1246->g_742.sb", print_hash_value);
    transparent_crc(p_1246->g_742.sc, "p_1246->g_742.sc", print_hash_value);
    transparent_crc(p_1246->g_742.sd, "p_1246->g_742.sd", print_hash_value);
    transparent_crc(p_1246->g_742.se, "p_1246->g_742.se", print_hash_value);
    transparent_crc(p_1246->g_742.sf, "p_1246->g_742.sf", print_hash_value);
    transparent_crc(p_1246->g_748.x, "p_1246->g_748.x", print_hash_value);
    transparent_crc(p_1246->g_748.y, "p_1246->g_748.y", print_hash_value);
    transparent_crc(p_1246->g_751.x, "p_1246->g_751.x", print_hash_value);
    transparent_crc(p_1246->g_751.y, "p_1246->g_751.y", print_hash_value);
    transparent_crc(p_1246->g_753.s0, "p_1246->g_753.s0", print_hash_value);
    transparent_crc(p_1246->g_753.s1, "p_1246->g_753.s1", print_hash_value);
    transparent_crc(p_1246->g_753.s2, "p_1246->g_753.s2", print_hash_value);
    transparent_crc(p_1246->g_753.s3, "p_1246->g_753.s3", print_hash_value);
    transparent_crc(p_1246->g_753.s4, "p_1246->g_753.s4", print_hash_value);
    transparent_crc(p_1246->g_753.s5, "p_1246->g_753.s5", print_hash_value);
    transparent_crc(p_1246->g_753.s6, "p_1246->g_753.s6", print_hash_value);
    transparent_crc(p_1246->g_753.s7, "p_1246->g_753.s7", print_hash_value);
    transparent_crc(p_1246->g_753.s8, "p_1246->g_753.s8", print_hash_value);
    transparent_crc(p_1246->g_753.s9, "p_1246->g_753.s9", print_hash_value);
    transparent_crc(p_1246->g_753.sa, "p_1246->g_753.sa", print_hash_value);
    transparent_crc(p_1246->g_753.sb, "p_1246->g_753.sb", print_hash_value);
    transparent_crc(p_1246->g_753.sc, "p_1246->g_753.sc", print_hash_value);
    transparent_crc(p_1246->g_753.sd, "p_1246->g_753.sd", print_hash_value);
    transparent_crc(p_1246->g_753.se, "p_1246->g_753.se", print_hash_value);
    transparent_crc(p_1246->g_753.sf, "p_1246->g_753.sf", print_hash_value);
    transparent_crc(p_1246->g_796, "p_1246->g_796", print_hash_value);
    transparent_crc(p_1246->g_864.x, "p_1246->g_864.x", print_hash_value);
    transparent_crc(p_1246->g_864.y, "p_1246->g_864.y", print_hash_value);
    transparent_crc(p_1246->g_864.z, "p_1246->g_864.z", print_hash_value);
    transparent_crc(p_1246->g_864.w, "p_1246->g_864.w", print_hash_value);
    transparent_crc(p_1246->g_865, "p_1246->g_865", print_hash_value);
    transparent_crc(p_1246->g_872.s0, "p_1246->g_872.s0", print_hash_value);
    transparent_crc(p_1246->g_872.s1, "p_1246->g_872.s1", print_hash_value);
    transparent_crc(p_1246->g_872.s2, "p_1246->g_872.s2", print_hash_value);
    transparent_crc(p_1246->g_872.s3, "p_1246->g_872.s3", print_hash_value);
    transparent_crc(p_1246->g_872.s4, "p_1246->g_872.s4", print_hash_value);
    transparent_crc(p_1246->g_872.s5, "p_1246->g_872.s5", print_hash_value);
    transparent_crc(p_1246->g_872.s6, "p_1246->g_872.s6", print_hash_value);
    transparent_crc(p_1246->g_872.s7, "p_1246->g_872.s7", print_hash_value);
    transparent_crc(p_1246->g_879, "p_1246->g_879", print_hash_value);
    transparent_crc(p_1246->g_886.x, "p_1246->g_886.x", print_hash_value);
    transparent_crc(p_1246->g_886.y, "p_1246->g_886.y", print_hash_value);
    transparent_crc(p_1246->g_904.x, "p_1246->g_904.x", print_hash_value);
    transparent_crc(p_1246->g_904.y, "p_1246->g_904.y", print_hash_value);
    transparent_crc(p_1246->g_904.z, "p_1246->g_904.z", print_hash_value);
    transparent_crc(p_1246->g_904.w, "p_1246->g_904.w", print_hash_value);
    transparent_crc(p_1246->g_906.x, "p_1246->g_906.x", print_hash_value);
    transparent_crc(p_1246->g_906.y, "p_1246->g_906.y", print_hash_value);
    transparent_crc(p_1246->g_906.z, "p_1246->g_906.z", print_hash_value);
    transparent_crc(p_1246->g_906.w, "p_1246->g_906.w", print_hash_value);
    transparent_crc(p_1246->g_942.x, "p_1246->g_942.x", print_hash_value);
    transparent_crc(p_1246->g_942.y, "p_1246->g_942.y", print_hash_value);
    transparent_crc(p_1246->g_942.z, "p_1246->g_942.z", print_hash_value);
    transparent_crc(p_1246->g_942.w, "p_1246->g_942.w", print_hash_value);
    transparent_crc(p_1246->g_950.s0, "p_1246->g_950.s0", print_hash_value);
    transparent_crc(p_1246->g_950.s1, "p_1246->g_950.s1", print_hash_value);
    transparent_crc(p_1246->g_950.s2, "p_1246->g_950.s2", print_hash_value);
    transparent_crc(p_1246->g_950.s3, "p_1246->g_950.s3", print_hash_value);
    transparent_crc(p_1246->g_950.s4, "p_1246->g_950.s4", print_hash_value);
    transparent_crc(p_1246->g_950.s5, "p_1246->g_950.s5", print_hash_value);
    transparent_crc(p_1246->g_950.s6, "p_1246->g_950.s6", print_hash_value);
    transparent_crc(p_1246->g_950.s7, "p_1246->g_950.s7", print_hash_value);
    transparent_crc(p_1246->g_950.s8, "p_1246->g_950.s8", print_hash_value);
    transparent_crc(p_1246->g_950.s9, "p_1246->g_950.s9", print_hash_value);
    transparent_crc(p_1246->g_950.sa, "p_1246->g_950.sa", print_hash_value);
    transparent_crc(p_1246->g_950.sb, "p_1246->g_950.sb", print_hash_value);
    transparent_crc(p_1246->g_950.sc, "p_1246->g_950.sc", print_hash_value);
    transparent_crc(p_1246->g_950.sd, "p_1246->g_950.sd", print_hash_value);
    transparent_crc(p_1246->g_950.se, "p_1246->g_950.se", print_hash_value);
    transparent_crc(p_1246->g_950.sf, "p_1246->g_950.sf", print_hash_value);
    transparent_crc(p_1246->g_968.x, "p_1246->g_968.x", print_hash_value);
    transparent_crc(p_1246->g_968.y, "p_1246->g_968.y", print_hash_value);
    transparent_crc(p_1246->g_968.z, "p_1246->g_968.z", print_hash_value);
    transparent_crc(p_1246->g_968.w, "p_1246->g_968.w", print_hash_value);
    transparent_crc(p_1246->g_969.s0, "p_1246->g_969.s0", print_hash_value);
    transparent_crc(p_1246->g_969.s1, "p_1246->g_969.s1", print_hash_value);
    transparent_crc(p_1246->g_969.s2, "p_1246->g_969.s2", print_hash_value);
    transparent_crc(p_1246->g_969.s3, "p_1246->g_969.s3", print_hash_value);
    transparent_crc(p_1246->g_969.s4, "p_1246->g_969.s4", print_hash_value);
    transparent_crc(p_1246->g_969.s5, "p_1246->g_969.s5", print_hash_value);
    transparent_crc(p_1246->g_969.s6, "p_1246->g_969.s6", print_hash_value);
    transparent_crc(p_1246->g_969.s7, "p_1246->g_969.s7", print_hash_value);
    transparent_crc(p_1246->g_975, "p_1246->g_975", print_hash_value);
    transparent_crc(p_1246->g_983.x, "p_1246->g_983.x", print_hash_value);
    transparent_crc(p_1246->g_983.y, "p_1246->g_983.y", print_hash_value);
    transparent_crc(p_1246->g_984.s0, "p_1246->g_984.s0", print_hash_value);
    transparent_crc(p_1246->g_984.s1, "p_1246->g_984.s1", print_hash_value);
    transparent_crc(p_1246->g_984.s2, "p_1246->g_984.s2", print_hash_value);
    transparent_crc(p_1246->g_984.s3, "p_1246->g_984.s3", print_hash_value);
    transparent_crc(p_1246->g_984.s4, "p_1246->g_984.s4", print_hash_value);
    transparent_crc(p_1246->g_984.s5, "p_1246->g_984.s5", print_hash_value);
    transparent_crc(p_1246->g_984.s6, "p_1246->g_984.s6", print_hash_value);
    transparent_crc(p_1246->g_984.s7, "p_1246->g_984.s7", print_hash_value);
    transparent_crc(p_1246->g_985.x, "p_1246->g_985.x", print_hash_value);
    transparent_crc(p_1246->g_985.y, "p_1246->g_985.y", print_hash_value);
    transparent_crc(p_1246->g_994, "p_1246->g_994", print_hash_value);
    transparent_crc(p_1246->g_1024.s0, "p_1246->g_1024.s0", print_hash_value);
    transparent_crc(p_1246->g_1024.s1, "p_1246->g_1024.s1", print_hash_value);
    transparent_crc(p_1246->g_1024.s2, "p_1246->g_1024.s2", print_hash_value);
    transparent_crc(p_1246->g_1024.s3, "p_1246->g_1024.s3", print_hash_value);
    transparent_crc(p_1246->g_1024.s4, "p_1246->g_1024.s4", print_hash_value);
    transparent_crc(p_1246->g_1024.s5, "p_1246->g_1024.s5", print_hash_value);
    transparent_crc(p_1246->g_1024.s6, "p_1246->g_1024.s6", print_hash_value);
    transparent_crc(p_1246->g_1024.s7, "p_1246->g_1024.s7", print_hash_value);
    transparent_crc(p_1246->g_1024.s8, "p_1246->g_1024.s8", print_hash_value);
    transparent_crc(p_1246->g_1024.s9, "p_1246->g_1024.s9", print_hash_value);
    transparent_crc(p_1246->g_1024.sa, "p_1246->g_1024.sa", print_hash_value);
    transparent_crc(p_1246->g_1024.sb, "p_1246->g_1024.sb", print_hash_value);
    transparent_crc(p_1246->g_1024.sc, "p_1246->g_1024.sc", print_hash_value);
    transparent_crc(p_1246->g_1024.sd, "p_1246->g_1024.sd", print_hash_value);
    transparent_crc(p_1246->g_1024.se, "p_1246->g_1024.se", print_hash_value);
    transparent_crc(p_1246->g_1024.sf, "p_1246->g_1024.sf", print_hash_value);
    transparent_crc(p_1246->g_1025.x, "p_1246->g_1025.x", print_hash_value);
    transparent_crc(p_1246->g_1025.y, "p_1246->g_1025.y", print_hash_value);
    transparent_crc(p_1246->g_1028.x, "p_1246->g_1028.x", print_hash_value);
    transparent_crc(p_1246->g_1028.y, "p_1246->g_1028.y", print_hash_value);
    transparent_crc(p_1246->g_1029.x, "p_1246->g_1029.x", print_hash_value);
    transparent_crc(p_1246->g_1029.y, "p_1246->g_1029.y", print_hash_value);
    transparent_crc(p_1246->g_1030.s0, "p_1246->g_1030.s0", print_hash_value);
    transparent_crc(p_1246->g_1030.s1, "p_1246->g_1030.s1", print_hash_value);
    transparent_crc(p_1246->g_1030.s2, "p_1246->g_1030.s2", print_hash_value);
    transparent_crc(p_1246->g_1030.s3, "p_1246->g_1030.s3", print_hash_value);
    transparent_crc(p_1246->g_1030.s4, "p_1246->g_1030.s4", print_hash_value);
    transparent_crc(p_1246->g_1030.s5, "p_1246->g_1030.s5", print_hash_value);
    transparent_crc(p_1246->g_1030.s6, "p_1246->g_1030.s6", print_hash_value);
    transparent_crc(p_1246->g_1030.s7, "p_1246->g_1030.s7", print_hash_value);
    transparent_crc(p_1246->g_1030.s8, "p_1246->g_1030.s8", print_hash_value);
    transparent_crc(p_1246->g_1030.s9, "p_1246->g_1030.s9", print_hash_value);
    transparent_crc(p_1246->g_1030.sa, "p_1246->g_1030.sa", print_hash_value);
    transparent_crc(p_1246->g_1030.sb, "p_1246->g_1030.sb", print_hash_value);
    transparent_crc(p_1246->g_1030.sc, "p_1246->g_1030.sc", print_hash_value);
    transparent_crc(p_1246->g_1030.sd, "p_1246->g_1030.sd", print_hash_value);
    transparent_crc(p_1246->g_1030.se, "p_1246->g_1030.se", print_hash_value);
    transparent_crc(p_1246->g_1030.sf, "p_1246->g_1030.sf", print_hash_value);
    transparent_crc(p_1246->g_1035.s0, "p_1246->g_1035.s0", print_hash_value);
    transparent_crc(p_1246->g_1035.s1, "p_1246->g_1035.s1", print_hash_value);
    transparent_crc(p_1246->g_1035.s2, "p_1246->g_1035.s2", print_hash_value);
    transparent_crc(p_1246->g_1035.s3, "p_1246->g_1035.s3", print_hash_value);
    transparent_crc(p_1246->g_1035.s4, "p_1246->g_1035.s4", print_hash_value);
    transparent_crc(p_1246->g_1035.s5, "p_1246->g_1035.s5", print_hash_value);
    transparent_crc(p_1246->g_1035.s6, "p_1246->g_1035.s6", print_hash_value);
    transparent_crc(p_1246->g_1035.s7, "p_1246->g_1035.s7", print_hash_value);
    transparent_crc(p_1246->g_1036.s0, "p_1246->g_1036.s0", print_hash_value);
    transparent_crc(p_1246->g_1036.s1, "p_1246->g_1036.s1", print_hash_value);
    transparent_crc(p_1246->g_1036.s2, "p_1246->g_1036.s2", print_hash_value);
    transparent_crc(p_1246->g_1036.s3, "p_1246->g_1036.s3", print_hash_value);
    transparent_crc(p_1246->g_1036.s4, "p_1246->g_1036.s4", print_hash_value);
    transparent_crc(p_1246->g_1036.s5, "p_1246->g_1036.s5", print_hash_value);
    transparent_crc(p_1246->g_1036.s6, "p_1246->g_1036.s6", print_hash_value);
    transparent_crc(p_1246->g_1036.s7, "p_1246->g_1036.s7", print_hash_value);
    transparent_crc(p_1246->g_1077.x, "p_1246->g_1077.x", print_hash_value);
    transparent_crc(p_1246->g_1077.y, "p_1246->g_1077.y", print_hash_value);
    transparent_crc(p_1246->g_1077.z, "p_1246->g_1077.z", print_hash_value);
    transparent_crc(p_1246->g_1077.w, "p_1246->g_1077.w", print_hash_value);
    transparent_crc(p_1246->g_1078.s0, "p_1246->g_1078.s0", print_hash_value);
    transparent_crc(p_1246->g_1078.s1, "p_1246->g_1078.s1", print_hash_value);
    transparent_crc(p_1246->g_1078.s2, "p_1246->g_1078.s2", print_hash_value);
    transparent_crc(p_1246->g_1078.s3, "p_1246->g_1078.s3", print_hash_value);
    transparent_crc(p_1246->g_1078.s4, "p_1246->g_1078.s4", print_hash_value);
    transparent_crc(p_1246->g_1078.s5, "p_1246->g_1078.s5", print_hash_value);
    transparent_crc(p_1246->g_1078.s6, "p_1246->g_1078.s6", print_hash_value);
    transparent_crc(p_1246->g_1078.s7, "p_1246->g_1078.s7", print_hash_value);
    transparent_crc(p_1246->g_1078.s8, "p_1246->g_1078.s8", print_hash_value);
    transparent_crc(p_1246->g_1078.s9, "p_1246->g_1078.s9", print_hash_value);
    transparent_crc(p_1246->g_1078.sa, "p_1246->g_1078.sa", print_hash_value);
    transparent_crc(p_1246->g_1078.sb, "p_1246->g_1078.sb", print_hash_value);
    transparent_crc(p_1246->g_1078.sc, "p_1246->g_1078.sc", print_hash_value);
    transparent_crc(p_1246->g_1078.sd, "p_1246->g_1078.sd", print_hash_value);
    transparent_crc(p_1246->g_1078.se, "p_1246->g_1078.se", print_hash_value);
    transparent_crc(p_1246->g_1078.sf, "p_1246->g_1078.sf", print_hash_value);
    transparent_crc(p_1246->g_1137.x, "p_1246->g_1137.x", print_hash_value);
    transparent_crc(p_1246->g_1137.y, "p_1246->g_1137.y", print_hash_value);
    transparent_crc(p_1246->g_1138.x, "p_1246->g_1138.x", print_hash_value);
    transparent_crc(p_1246->g_1138.y, "p_1246->g_1138.y", print_hash_value);
    transparent_crc(p_1246->g_1138.z, "p_1246->g_1138.z", print_hash_value);
    transparent_crc(p_1246->g_1138.w, "p_1246->g_1138.w", print_hash_value);
    transparent_crc(p_1246->g_1142.x, "p_1246->g_1142.x", print_hash_value);
    transparent_crc(p_1246->g_1142.y, "p_1246->g_1142.y", print_hash_value);
    transparent_crc(p_1246->g_1144.s0, "p_1246->g_1144.s0", print_hash_value);
    transparent_crc(p_1246->g_1144.s1, "p_1246->g_1144.s1", print_hash_value);
    transparent_crc(p_1246->g_1144.s2, "p_1246->g_1144.s2", print_hash_value);
    transparent_crc(p_1246->g_1144.s3, "p_1246->g_1144.s3", print_hash_value);
    transparent_crc(p_1246->g_1144.s4, "p_1246->g_1144.s4", print_hash_value);
    transparent_crc(p_1246->g_1144.s5, "p_1246->g_1144.s5", print_hash_value);
    transparent_crc(p_1246->g_1144.s6, "p_1246->g_1144.s6", print_hash_value);
    transparent_crc(p_1246->g_1144.s7, "p_1246->g_1144.s7", print_hash_value);
    transparent_crc(p_1246->g_1144.s8, "p_1246->g_1144.s8", print_hash_value);
    transparent_crc(p_1246->g_1144.s9, "p_1246->g_1144.s9", print_hash_value);
    transparent_crc(p_1246->g_1144.sa, "p_1246->g_1144.sa", print_hash_value);
    transparent_crc(p_1246->g_1144.sb, "p_1246->g_1144.sb", print_hash_value);
    transparent_crc(p_1246->g_1144.sc, "p_1246->g_1144.sc", print_hash_value);
    transparent_crc(p_1246->g_1144.sd, "p_1246->g_1144.sd", print_hash_value);
    transparent_crc(p_1246->g_1144.se, "p_1246->g_1144.se", print_hash_value);
    transparent_crc(p_1246->g_1144.sf, "p_1246->g_1144.sf", print_hash_value);
    transparent_crc(p_1246->g_1145.x, "p_1246->g_1145.x", print_hash_value);
    transparent_crc(p_1246->g_1145.y, "p_1246->g_1145.y", print_hash_value);
    transparent_crc(p_1246->g_1145.z, "p_1246->g_1145.z", print_hash_value);
    transparent_crc(p_1246->g_1145.w, "p_1246->g_1145.w", print_hash_value);
    transparent_crc(p_1246->g_1146.x, "p_1246->g_1146.x", print_hash_value);
    transparent_crc(p_1246->g_1146.y, "p_1246->g_1146.y", print_hash_value);
    transparent_crc(p_1246->g_1146.z, "p_1246->g_1146.z", print_hash_value);
    transparent_crc(p_1246->g_1146.w, "p_1246->g_1146.w", print_hash_value);
    transparent_crc(p_1246->g_1164.s0, "p_1246->g_1164.s0", print_hash_value);
    transparent_crc(p_1246->g_1164.s1, "p_1246->g_1164.s1", print_hash_value);
    transparent_crc(p_1246->g_1164.s2, "p_1246->g_1164.s2", print_hash_value);
    transparent_crc(p_1246->g_1164.s3, "p_1246->g_1164.s3", print_hash_value);
    transparent_crc(p_1246->g_1164.s4, "p_1246->g_1164.s4", print_hash_value);
    transparent_crc(p_1246->g_1164.s5, "p_1246->g_1164.s5", print_hash_value);
    transparent_crc(p_1246->g_1164.s6, "p_1246->g_1164.s6", print_hash_value);
    transparent_crc(p_1246->g_1164.s7, "p_1246->g_1164.s7", print_hash_value);
    transparent_crc(p_1246->g_1164.s8, "p_1246->g_1164.s8", print_hash_value);
    transparent_crc(p_1246->g_1164.s9, "p_1246->g_1164.s9", print_hash_value);
    transparent_crc(p_1246->g_1164.sa, "p_1246->g_1164.sa", print_hash_value);
    transparent_crc(p_1246->g_1164.sb, "p_1246->g_1164.sb", print_hash_value);
    transparent_crc(p_1246->g_1164.sc, "p_1246->g_1164.sc", print_hash_value);
    transparent_crc(p_1246->g_1164.sd, "p_1246->g_1164.sd", print_hash_value);
    transparent_crc(p_1246->g_1164.se, "p_1246->g_1164.se", print_hash_value);
    transparent_crc(p_1246->g_1164.sf, "p_1246->g_1164.sf", print_hash_value);
    transparent_crc(p_1246->g_1194.s0, "p_1246->g_1194.s0", print_hash_value);
    transparent_crc(p_1246->g_1194.s1, "p_1246->g_1194.s1", print_hash_value);
    transparent_crc(p_1246->g_1194.s2, "p_1246->g_1194.s2", print_hash_value);
    transparent_crc(p_1246->g_1194.s3, "p_1246->g_1194.s3", print_hash_value);
    transparent_crc(p_1246->g_1194.s4, "p_1246->g_1194.s4", print_hash_value);
    transparent_crc(p_1246->g_1194.s5, "p_1246->g_1194.s5", print_hash_value);
    transparent_crc(p_1246->g_1194.s6, "p_1246->g_1194.s6", print_hash_value);
    transparent_crc(p_1246->g_1194.s7, "p_1246->g_1194.s7", print_hash_value);
    transparent_crc(p_1246->g_1194.s8, "p_1246->g_1194.s8", print_hash_value);
    transparent_crc(p_1246->g_1194.s9, "p_1246->g_1194.s9", print_hash_value);
    transparent_crc(p_1246->g_1194.sa, "p_1246->g_1194.sa", print_hash_value);
    transparent_crc(p_1246->g_1194.sb, "p_1246->g_1194.sb", print_hash_value);
    transparent_crc(p_1246->g_1194.sc, "p_1246->g_1194.sc", print_hash_value);
    transparent_crc(p_1246->g_1194.sd, "p_1246->g_1194.sd", print_hash_value);
    transparent_crc(p_1246->g_1194.se, "p_1246->g_1194.se", print_hash_value);
    transparent_crc(p_1246->g_1194.sf, "p_1246->g_1194.sf", print_hash_value);
    transparent_crc(p_1246->g_1197.s0, "p_1246->g_1197.s0", print_hash_value);
    transparent_crc(p_1246->g_1197.s1, "p_1246->g_1197.s1", print_hash_value);
    transparent_crc(p_1246->g_1197.s2, "p_1246->g_1197.s2", print_hash_value);
    transparent_crc(p_1246->g_1197.s3, "p_1246->g_1197.s3", print_hash_value);
    transparent_crc(p_1246->g_1197.s4, "p_1246->g_1197.s4", print_hash_value);
    transparent_crc(p_1246->g_1197.s5, "p_1246->g_1197.s5", print_hash_value);
    transparent_crc(p_1246->g_1197.s6, "p_1246->g_1197.s6", print_hash_value);
    transparent_crc(p_1246->g_1197.s7, "p_1246->g_1197.s7", print_hash_value);
    transparent_crc(p_1246->g_1197.s8, "p_1246->g_1197.s8", print_hash_value);
    transparent_crc(p_1246->g_1197.s9, "p_1246->g_1197.s9", print_hash_value);
    transparent_crc(p_1246->g_1197.sa, "p_1246->g_1197.sa", print_hash_value);
    transparent_crc(p_1246->g_1197.sb, "p_1246->g_1197.sb", print_hash_value);
    transparent_crc(p_1246->g_1197.sc, "p_1246->g_1197.sc", print_hash_value);
    transparent_crc(p_1246->g_1197.sd, "p_1246->g_1197.sd", print_hash_value);
    transparent_crc(p_1246->g_1197.se, "p_1246->g_1197.se", print_hash_value);
    transparent_crc(p_1246->g_1197.sf, "p_1246->g_1197.sf", print_hash_value);
    transparent_crc(p_1246->g_1231, "p_1246->g_1231", print_hash_value);
    transparent_crc(p_1246->g_1239, "p_1246->g_1239", print_hash_value);
    transparent_crc(p_1246->v_collective, "p_1246->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 30; i++)
            transparent_crc(p_1246->g_special_values[i + 30 * get_linear_group_id()], "p_1246->g_special_values[i + 30 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 30; i++)
            transparent_crc(p_1246->l_special_values[i], "p_1246->l_special_values[i]", print_hash_value);
    transparent_crc(p_1246->l_comm_values[get_linear_local_id()], "p_1246->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1246->g_comm_values[get_linear_group_id() * 79 + get_linear_local_id()], "p_1246->g_comm_values[get_linear_group_id() * 79 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
