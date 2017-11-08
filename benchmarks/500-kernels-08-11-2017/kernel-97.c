// --atomics 18 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 51,17,6 -l 51,1,2
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

__constant uint32_t permutations[10][102] = {
{89,14,15,38,86,80,87,41,91,52,97,37,30,8,64,73,53,92,46,74,81,60,22,72,7,63,67,84,34,18,82,31,23,95,71,65,39,94,61,11,49,21,79,57,19,101,2,93,88,12,40,3,96,58,16,13,4,45,76,24,28,51,90,44,100,85,56,27,43,54,17,33,78,36,62,83,69,25,5,35,10,6,26,75,20,47,66,1,68,42,55,29,32,99,48,70,9,77,59,98,0,50}, // permutation 0
{68,75,63,36,17,20,98,55,66,12,81,19,33,53,85,2,8,6,69,65,22,61,84,3,39,23,87,32,101,97,43,41,13,38,52,90,100,74,50,0,34,48,54,99,28,15,64,21,78,73,71,25,14,60,70,49,29,46,93,10,45,82,56,92,42,37,72,86,77,91,1,58,79,95,89,59,40,18,47,27,88,31,44,94,11,80,57,5,26,96,4,83,9,24,35,16,62,7,67,51,30,76}, // permutation 1
{88,79,91,90,28,51,73,21,30,94,35,0,13,18,9,8,70,78,42,39,98,80,17,45,32,33,58,63,96,10,1,55,85,59,26,99,47,66,43,82,14,67,81,31,76,95,87,92,5,23,36,84,25,77,54,40,100,62,46,97,2,24,74,49,44,83,65,19,57,41,3,11,6,71,16,56,53,34,12,29,48,72,37,4,64,86,101,52,38,27,69,50,15,20,61,89,75,22,93,68,7,60}, // permutation 2
{11,9,90,76,33,0,71,21,99,61,81,46,2,100,84,49,8,51,57,24,16,23,29,74,42,75,72,85,39,96,43,4,22,26,44,98,27,40,58,92,28,5,97,63,41,10,15,79,70,6,64,13,89,93,25,37,47,38,18,32,101,69,94,56,91,34,30,50,3,17,20,67,1,35,82,73,31,48,12,66,36,68,52,7,65,62,19,53,80,88,83,45,87,95,86,14,54,59,77,55,60,78}, // permutation 3
{54,72,29,97,10,27,20,46,91,13,15,89,64,69,58,59,24,81,100,32,86,14,43,40,8,12,75,42,93,18,60,78,34,33,71,53,0,84,70,101,95,82,56,41,88,80,57,79,99,51,50,96,25,49,65,74,85,92,11,21,16,48,7,62,77,36,73,35,38,6,66,17,94,44,47,31,37,68,45,26,4,61,19,55,87,22,39,90,2,76,52,1,63,67,28,98,83,9,23,30,3,5}, // permutation 4
{67,45,80,68,82,93,19,41,32,62,85,1,58,56,97,26,94,59,99,27,73,22,87,96,39,95,78,47,64,57,74,12,88,8,13,40,15,43,20,35,49,63,5,11,90,77,92,50,14,61,84,70,0,79,44,28,69,55,65,76,71,91,54,101,2,17,98,9,81,23,10,4,37,31,48,25,36,21,72,83,33,38,52,3,18,34,60,42,86,89,100,30,51,16,24,6,53,66,7,29,46,75}, // permutation 5
{66,5,22,98,36,52,64,54,2,57,85,58,30,70,99,97,80,42,51,41,0,15,17,75,28,8,68,93,27,11,1,69,72,76,89,18,34,7,13,37,44,87,4,49,78,31,47,25,63,90,81,74,20,39,23,59,21,24,73,19,46,100,71,62,86,91,29,56,60,45,35,79,10,14,82,9,53,26,96,50,65,95,67,77,40,48,3,32,83,43,84,92,16,12,61,55,94,6,101,33,38,88}, // permutation 6
{15,23,21,27,64,5,38,83,81,34,9,13,4,50,79,30,3,53,62,90,69,17,82,56,8,6,71,61,52,70,2,74,93,96,94,57,22,91,59,97,1,80,48,72,68,73,10,29,43,20,19,0,58,54,98,55,78,16,101,95,87,24,85,76,36,42,39,77,75,35,45,14,18,37,28,33,26,60,11,65,47,41,31,44,92,7,100,46,63,49,88,67,25,66,89,99,51,12,86,40,84,32}, // permutation 7
{66,71,49,56,0,47,62,42,17,90,20,6,28,82,77,23,94,31,87,39,45,100,26,25,3,83,67,92,68,57,74,41,37,101,19,2,4,75,78,79,48,69,53,34,32,63,22,93,14,97,36,76,29,54,11,8,61,59,64,24,96,13,16,46,50,44,15,51,73,30,80,58,27,33,35,89,84,7,86,60,43,99,55,70,10,95,81,1,5,65,85,40,21,52,9,72,91,18,12,38,88,98}, // permutation 8
{53,13,28,73,85,3,64,69,83,75,82,19,23,36,14,38,91,0,89,68,90,50,44,18,95,33,45,31,10,94,100,76,62,12,92,47,17,60,9,57,46,21,39,99,63,77,84,71,30,43,16,59,2,24,34,80,67,37,8,86,35,79,48,15,97,42,55,40,32,41,98,81,6,72,5,101,27,25,74,93,4,58,70,22,7,1,20,52,49,51,87,26,11,66,29,96,61,65,88,54,56,78} // permutation 9
};

// Seed: 183477936

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int16_t  f0;
   int16_t  f1;
   int32_t  f2;
};

union U1 {
   volatile int32_t  f0;
   volatile int32_t  f1;
   volatile int32_t  f2;
   uint64_t  f3;
};

union U2 {
   uint16_t  f0;
   int64_t  f1;
   int32_t  f2;
};

struct S3 {
    VECTOR(int8_t, 2) g_9;
    volatile VECTOR(int32_t, 16) g_20;
    int16_t g_28;
    uint8_t g_30;
    uint8_t g_40;
    uint8_t *g_39;
    union U2 g_41;
    int32_t g_55;
    VECTOR(int8_t, 8) g_66;
    uint32_t g_68;
    VECTOR(int16_t, 2) g_75;
    uint8_t g_93;
    volatile union U0 g_108;
    volatile int32_t g_119;
    int32_t g_124;
    volatile VECTOR(int32_t, 8) g_128;
    int32_t ** volatile g_131;
    int32_t *g_133[6][10];
    int32_t ** volatile g_132;
    uint8_t g_143;
    int64_t g_151;
    int32_t g_157;
    int32_t g_184[5];
    int8_t g_198[5][9][5];
    uint32_t g_199;
    uint64_t g_212;
    volatile VECTOR(int8_t, 4) g_216;
    VECTOR(int64_t, 4) g_226;
    volatile VECTOR(int64_t, 8) g_229;
    VECTOR(uint32_t, 2) g_235;
    int32_t ** volatile g_238;
    int32_t ** volatile g_239;
    VECTOR(int32_t, 4) g_240;
    VECTOR(uint16_t, 4) g_243;
    union U0 g_251[9][6][4];
    volatile union U1 g_262;
    int32_t *g_364;
    uint64_t g_375;
    VECTOR(uint8_t, 2) g_377;
    union U0 g_389;
    union U0 *g_388;
    union U0 ** volatile g_404;
    int32_t * volatile g_409;
    volatile union U0 g_427[4];
    VECTOR(uint64_t, 8) g_447;
    uint64_t g_449;
    uint32_t g_456;
    VECTOR(uint32_t, 8) g_468;
    VECTOR(int64_t, 16) g_482;
    volatile VECTOR(int8_t, 4) g_485;
    volatile int8_t g_488;
    VECTOR(int8_t, 16) g_497;
    VECTOR(int8_t, 8) g_503;
    union U0 g_513;
    uint8_t **g_518;
    uint32_t * volatile g_525;
    uint32_t * volatile * volatile g_524;
    int32_t * volatile g_528;
    union U1 g_550;
    int32_t ** volatile g_649;
    int32_t ** volatile g_656[7][1][10];
    VECTOR(uint64_t, 16) g_661;
    VECTOR(int8_t, 16) g_668;
    volatile VECTOR(int8_t, 16) g_669;
    VECTOR(int8_t, 4) g_673;
    VECTOR(int8_t, 8) g_675;
    union U0 g_681;
    union U0 ** volatile g_682[10];
    union U0 ** volatile g_683;
    int32_t * volatile g_710;
    VECTOR(uint32_t, 2) g_717;
    int32_t * volatile g_718;
    int32_t * volatile g_727;
    volatile VECTOR(int32_t, 16) g_754;
    VECTOR(int32_t, 16) g_756;
    int32_t g_760;
    uint16_t g_777;
    int32_t ** volatile g_793;
    int32_t ** volatile g_806;
    int32_t ** volatile g_826;
    VECTOR(int8_t, 8) g_846;
    VECTOR(uint8_t, 4) g_854;
    VECTOR(uint32_t, 8) g_855;
    volatile VECTOR(int64_t, 4) g_878;
    volatile VECTOR(int64_t, 8) g_879;
    volatile VECTOR(int64_t, 16) g_880;
    VECTOR(int64_t, 16) g_884;
    uint8_t g_887;
    int32_t ** volatile g_889[9][8];
    int32_t ** volatile g_890;
    union U0 g_900;
    volatile uint64_t g_949;
    int16_t g_957;
    uint32_t g_959;
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
int32_t  func_1(struct S3 * p_980);
int32_t  func_2(int32_t  p_3, int32_t  p_4, uint64_t  p_5, uint32_t  p_6, int8_t  p_7, struct S3 * p_980);
int8_t  func_10(uint32_t  p_11, int32_t  p_12, uint64_t  p_13, struct S3 * p_980);
uint64_t  func_14(uint64_t  p_15, int16_t  p_16, uint32_t  p_17, int32_t  p_18, int16_t  p_19, struct S3 * p_980);
int32_t  func_21(int64_t  p_22, int8_t  p_23, int32_t  p_24, struct S3 * p_980);
int64_t  func_25(uint64_t  p_26, int32_t  p_27, struct S3 * p_980);
int8_t  func_33(uint8_t * p_34, uint64_t  p_35, union U2  p_36, int64_t  p_37, uint8_t * p_38, struct S3 * p_980);
union U0 * func_43(int8_t  p_44, uint32_t  p_45, int64_t  p_46, union U0 * p_47, union U0 * p_48, struct S3 * p_980);
uint8_t * func_51(int32_t  p_52, struct S3 * p_980);
int32_t * func_61(int32_t  p_62, int32_t * p_63, int32_t * p_64, struct S3 * p_980);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_980->g_comm_values p_980->g_9 p_980->g_20 p_980->g_30 p_980->g_39 p_980->g_41 p_980->g_41.f0 p_980->g_239 p_980->g_133 p_980->g_55 p_980->g_212 p_980->g_235 p_980->g_157 p_980->g_377 p_980->g_226 p_980->g_388 p_980->g_40 p_980->g_404 p_980->g_41.f2 p_980->g_108.f0 p_980->g_409 p_980->g_119 p_980->g_66 p_980->g_68 p_980->g_427 p_980->g_93 p_980->g_375 p_980->g_449 p_980->g_456 p_980->g_132 p_980->g_468 p_980->g_199 p_980->g_243 p_980->g_482 p_980->g_485 p_980->g_488 p_980->g_184 p_980->g_198 p_980->g_497 p_980->g_503 p_980->g_524 p_980->g_528 p_980->g_124 p_980->g_550 p_980->g_389.f0 p_980->g_389.f1 p_980->g_389 p_980->g_427.f0 p_980->g_75 p_980->g_108 p_980->g_143 p_980->l_comm_values p_980->g_151 p_980->g_262 p_980->g_229 p_980->g_649 p_980->g_513.f1 p_980->g_661 p_980->g_668 p_980->g_669 p_980->g_673 p_980->g_675 p_980->g_683 p_980->g_710 p_980->g_717 p_980->g_718 p_980->g_727 p_980->g_754 p_980->g_756 p_980->g_216 p_980->g_760 p_980->g_793 p_980->g_806 p_980->g_447 p_980->g_777 p_980->g_28 p_980->g_890 p_980->g_900 p_980->g_525 p_980->g_681.f2 p_980->g_949 p_980->g_959 p_980->g_957
 * writes: p_980->g_30 p_980->g_41.f0 p_980->g_75 p_980->g_251.f1 p_980->g_364 p_980->g_375 p_980->g_198 p_980->g_377 p_980->g_133 p_980->g_39 p_980->g_40 p_980->g_388 p_980->g_41.f2 p_980->g_55 p_980->g_66 p_980->g_68 p_980->g_212 p_980->g_449 p_980->g_456 p_980->g_199 p_980->g_518 p_980->g_93 p_980->g_124 p_980->g_389.f1 p_980->g_28 p_980->g_143 p_980->g_184 p_980->g_151 p_980->g_243 p_980->g_513.f1 p_980->g_497 p_980->g_760 p_980->g_777 p_980->g_681.f2 p_980->g_949 p_980->g_959
 */
int32_t  func_1(struct S3 * p_980)
{ /* block id: 4 */
    int16_t l_8 = 8L;
    uint8_t *l_29 = &p_980->g_30;
    uint32_t l_42 = 0x37D3709EL;
    int8_t *l_410 = (void*)0;
    int8_t *l_411 = (void*)0;
    int8_t *l_412 = (void*)0;
    int8_t *l_413 = (void*)0;
    int8_t *l_414 = (void*)0;
    int8_t *l_415 = (void*)0;
    int8_t *l_416[8][1][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t *l_684 = (void*)0;
    int32_t *l_685 = &p_980->g_184[4];
    int16_t l_686 = 0x2494L;
    int32_t l_712 = 6L;
    VECTOR(uint8_t, 4) l_732 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x5FL), 0x5FL);
    int8_t l_737 = 0x46L;
    uint64_t *l_738 = &p_980->g_375;
    uint64_t *l_739[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(int32_t, 4) l_755 = (VECTOR(int32_t, 4))(0x66F9C154L, (VECTOR(int32_t, 2))(0x66F9C154L, 2L), 2L);
    uint16_t l_757 = 0x297FL;
    int32_t *l_758 = &p_980->g_41.f2;
    int32_t *l_759 = &p_980->g_760;
    int32_t l_761 = 5L;
    uint64_t l_762 = 0x6499B44687255051L;
    uint64_t l_763 = 18446744073709551609UL;
    uint64_t *l_776 = &l_763;
    VECTOR(int32_t, 4) l_812 = (VECTOR(int32_t, 4))(0x0E978CABL, (VECTOR(int32_t, 2))(0x0E978CABL, (-1L)), (-1L));
    int8_t l_818 = (-7L);
    uint64_t l_929 = 1UL;
    uint32_t l_939 = 4294967295UL;
    int32_t l_944 = 0x36CDA6BDL;
    int32_t l_952[8][10] = {{0x5905FC3FL,0x5905FC3FL,(-5L),0x24AE7969L,0x07C10EA9L,1L,0x74A377CCL,1L,0x74A377CCL,1L},{0x5905FC3FL,0x5905FC3FL,(-5L),0x24AE7969L,0x07C10EA9L,1L,0x74A377CCL,1L,0x74A377CCL,1L},{0x5905FC3FL,0x5905FC3FL,(-5L),0x24AE7969L,0x07C10EA9L,1L,0x74A377CCL,1L,0x74A377CCL,1L},{0x5905FC3FL,0x5905FC3FL,(-5L),0x24AE7969L,0x07C10EA9L,1L,0x74A377CCL,1L,0x74A377CCL,1L},{0x5905FC3FL,0x5905FC3FL,(-5L),0x24AE7969L,0x07C10EA9L,1L,0x74A377CCL,1L,0x74A377CCL,1L},{0x5905FC3FL,0x5905FC3FL,(-5L),0x24AE7969L,0x07C10EA9L,1L,0x74A377CCL,1L,0x74A377CCL,1L},{0x5905FC3FL,0x5905FC3FL,(-5L),0x24AE7969L,0x07C10EA9L,1L,0x74A377CCL,1L,0x74A377CCL,1L},{0x5905FC3FL,0x5905FC3FL,(-5L),0x24AE7969L,0x07C10EA9L,1L,0x74A377CCL,1L,0x74A377CCL,1L}};
    int32_t l_958[7];
    union U2 l_965 = {0xDF2DL};
    int32_t *l_968 = (void*)0;
    int32_t *l_969 = (void*)0;
    int32_t *l_970[7][8] = {{(void*)0,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55},{(void*)0,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55},{(void*)0,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55},{(void*)0,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55},{(void*)0,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55},{(void*)0,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55},{(void*)0,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55}};
    int8_t l_971[4];
    int64_t *l_973 = (void*)0;
    int64_t **l_972 = &l_973;
    int32_t **l_974 = &l_758;
    uint16_t l_979 = 0x8138L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_958[i] = (-1L);
    for (i = 0; i < 4; i++)
        l_971[i] = (-3L);
    (*p_980->g_727) = func_2(l_8, (p_980->g_comm_values[p_980->tid] == ((((VECTOR(int8_t, 4))(p_980->g_9.yyxy)).z == l_8) != ((l_712 = func_10(p_980->g_9.x, (GROUP_DIVERGE(0, 1) , p_980->g_comm_values[p_980->tid]), (func_14(l_8, p_980->g_9.x, l_8, ((*l_685) = ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_980->g_20.s09b3)).wyxzzzxwzzxxywxz)).s3b, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(func_21(func_25((((VECTOR(uint32_t, 16))((((++(*l_29)) < (p_980->g_66.s2 ^= func_33(p_980->g_39, l_8, p_980->g_41, l_42, &p_980->g_40, p_980))) == l_42), ((VECTOR(uint32_t, 8))(9UL)), 0xA7095881L, p_980->g_55, ((VECTOR(uint32_t, 4))(0xB2506BE9L)), 4294967295UL)).s5 , p_980->g_20.s0), l_42, p_980), l_8, l_42, p_980), l_8, (-9L), (-1L))).zyxzzxwyywzzwxyy, ((VECTOR(int32_t, 16))((-10L))), ((VECTOR(int32_t, 16))(4L))))))).s87, ((VECTOR(int32_t, 2))(0x38614D91L))))).xyyy)).zyxyywyxzywzyxyw)).sf5, ((VECTOR(int32_t, 2))((-1L)))))).xyxyxyyx, ((VECTOR(int32_t, 8))(0x5CB3300DL)), ((VECTOR(int32_t, 8))(0x14BA776FL))))).s3551105445233666, ((VECTOR(int32_t, 16))((-1L)))))).s5), l_686, p_980) >= 0x4A4B75907F9FC0D8L), p_980)) <= p_980->g_673.y))), l_42, l_42, p_980->g_497.s3, p_980);
    if ((l_712 , (safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_732.zzxzwyyywxzxxxxx)).s78)).lo & (safe_sub_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(((l_761 |= ((VECTOR(int32_t, 4))(((*l_759) ^= ((**p_980->g_683) , ((*l_758) = ((l_712 = ((*l_738) = l_737)) ^ (((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((((l_732.x ^ (p_980->g_497.sb = (safe_sub_func_int16_t_s_s(l_42, ((-8L) != (safe_mul_func_int16_t_s_s(((((0x1E09BD8B5F4691C9L | (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((((((VECTOR(int16_t, 2))((-1L), 7L)).even || ((l_732.x < ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(p_980->g_754.sde65d77426a77741)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(l_755.wzxxxyxwzzwxzxwy)).hi, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(p_980->g_756.s25)).yxxx))))).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 2))(0L)), l_42, ((VECTOR(int32_t, 4))(0x4AF72624L)))).s6606003660470742)).s1a))).xyyxxyxy))).odd, ((VECTOR(int32_t, 4))(6L)), ((VECTOR(int32_t, 4))((-3L)))))), l_686, (*p_980->g_727), (*p_980->g_727), l_757, 0x1EF79A0DL, l_737, 0x057180DBL, 0x1343E67AL, ((VECTOR(int32_t, 2))(7L)), (-4L), 0L))))).sf) & l_755.w)) <= 18446744073709551615UL) == p_980->g_226.x), 3)), l_755.z))) < p_980->g_756.se) != l_737) || p_980->g_503.s5), 0x1EE6L))))))) | 0L) , 0x7EL), 4)), 4)), FAKE_DIVERGE(p_980->local_2_offset, get_local_id(2), 10))) , l_42) && p_980->g_216.z))))), ((VECTOR(int32_t, 2))((-6L))), 0x1D4A6839L)).w) >= l_762), p_980->g_30)) ^ 0xD05963B3L), p_980->g_30))) , 0x163DD141L), l_763)), 7))))
    { /* block id: 355 */
        int16_t l_768 = 0x62B8L;
        int32_t l_773 = (-1L);
        int8_t l_778 = 0x23L;
        int32_t l_787[3][8][3] = {{{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL}},{{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL}},{{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL},{0x568EF13AL,0x524CED51L,0x568EF13AL}}};
        uint32_t l_790 = 0xE1B024EEL;
        int32_t *l_794 = &p_980->g_184[0];
        int32_t *l_804 = &l_773;
        VECTOR(int32_t, 16) l_858 = (VECTOR(int32_t, 16))(0x31C5018FL, (VECTOR(int32_t, 4))(0x31C5018FL, (VECTOR(int32_t, 2))(0x31C5018FL, 0x60ABAF94L), 0x60ABAF94L), 0x60ABAF94L, 0x31C5018FL, 0x60ABAF94L, (VECTOR(int32_t, 2))(0x31C5018FL, 0x60ABAF94L), (VECTOR(int32_t, 2))(0x31C5018FL, 0x60ABAF94L), 0x31C5018FL, 0x60ABAF94L, 0x31C5018FL, 0x60ABAF94L);
        VECTOR(int16_t, 4) l_862 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x3F25L), 0x3F25L);
        int32_t *l_934 = &p_980->g_55;
        int32_t *l_935[3];
        int32_t l_936 = 0x40D405F8L;
        int16_t l_937 = 0x1D50L;
        int64_t l_938 = 0x22335E483AF7DBF2L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_935[i] = &l_787[2][6][0];
        if (((safe_sub_func_uint16_t_u_u((((((!(safe_div_func_int8_t_s_s((+l_768), (safe_div_func_uint64_t_u_u(((*p_980->g_39) > (p_980->g_198[0][1][4] , 0x1AL)), (safe_lshift_func_uint8_t_u_u(((*l_29) = GROUP_DIVERGE(1, 1)), (l_768 & ((l_773 = p_980->g_468.s7) || (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(0x79E75D73D4031358L, 0xF49165A4086CAF56L, 0xCFDDF8C3757AC33DL, 0x61783F6C4075316FL)).y, ((p_980->g_777 = (l_776 != (void*)0)) , 4UL)))))))))))) | p_980->g_226.z) != l_778) && GROUP_DIVERGE(0, 1)) <= l_768), l_768)) , (*l_759)))
        { /* block id: 359 */
            int16_t l_788 = 0x2E0CL;
            int32_t l_799 = 0x064BAF6AL;
            VECTOR(int32_t, 4) l_815 = (VECTOR(int32_t, 4))(0x04B77E6EL, (VECTOR(int32_t, 2))(0x04B77E6EL, (-2L)), (-2L));
            int i;
            for (l_712 = 0; (l_712 == 6); l_712++)
            { /* block id: 362 */
                int32_t *l_781 = (void*)0;
                int32_t *l_782 = &p_980->g_55;
                int32_t *l_783 = (void*)0;
                int32_t *l_784 = &p_980->g_41.f2;
                int32_t *l_785 = &p_980->g_41.f2;
                int32_t *l_786[6] = {&p_980->g_760,&p_980->g_55,&p_980->g_760,&p_980->g_760,&p_980->g_55,&p_980->g_760};
                int8_t l_789 = 0x51L;
                uint16_t *l_795[10][3] = {{&p_980->g_777,(void*)0,&p_980->g_777},{&p_980->g_777,(void*)0,&p_980->g_777},{&p_980->g_777,(void*)0,&p_980->g_777},{&p_980->g_777,(void*)0,&p_980->g_777},{&p_980->g_777,(void*)0,&p_980->g_777},{&p_980->g_777,(void*)0,&p_980->g_777},{&p_980->g_777,(void*)0,&p_980->g_777},{&p_980->g_777,(void*)0,&p_980->g_777},{&p_980->g_777,(void*)0,&p_980->g_777},{&p_980->g_777,(void*)0,&p_980->g_777}};
                int32_t l_811 = 1L;
                int i, j;
                l_790--;
                (*p_980->g_793) = l_781;
                if ((((((void*)0 != l_794) == (((((((p_980->g_243.y = (p_980->g_777 = (0x67L >= ((((void*)0 != &p_980->g_124) | (*p_980->g_710)) && 0x3AFB5FA903ADC30FL)))) < (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((l_790 >= p_980->g_9.x))), 0xDCE9L))) , &p_980->g_28) == &l_788) , (-1L)) < 1L) , (-1L))) , (*l_759)) > l_788))
                { /* block id: 367 */
                    uint16_t l_800 = 0xAB84L;
                    VECTOR(int8_t, 4) l_803 = (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 0x44L), 0x44L);
                    int i;
                    --l_800;
                    (*l_784) = (((VECTOR(int8_t, 4))(l_803.zyxw)).z | (l_787[2][6][0] || FAKE_DIVERGE(p_980->group_1_offset, get_group_id(1), 10)));
                }
                else
                { /* block id: 370 */
                    int32_t **l_805 = &l_804;
                    uint32_t *l_807 = (void*)0;
                    uint32_t *l_808 = &l_42;
                    uint32_t l_817 = 0UL;
                    (*p_980->g_806) = ((*l_805) = l_804);
                    atomic_and(&p_980->l_atomic_reduction[0], (((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(2UL, 4294967292UL, ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 16))(0x949E899AL, (p_980->g_comm_values[p_980->tid] , ((*l_808) = ((*l_804) && GROUP_DIVERGE(1, 1)))), ((((safe_add_func_uint64_t_u_u((((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(4L, 0x4D6BDBB6L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 3L)).xxxyyyxy)).lo)), 0x3BBDCA92L, 0x7CDCCEE0L)).s46, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_811, 7L, 0x7F28F1DEL, 0x16CF7553L)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(l_812.zwxx)).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((((*p_980->g_404) == (void*)0) , (safe_lshift_func_int8_t_s_s(p_980->g_503.s5, 0))), 9L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((*l_758) = ((**l_805) = 0x65F8E5F7L)), ((VECTOR(int32_t, 2))(l_815.zy)), 0x21E925F7L)).zwwzzyxw)), (*l_804), 0x57183BA8L, 0x7C21A748L, (safe_unary_minus_func_int8_t_s((p_980->g_199 >= p_980->g_760))), 8L, 2L)))).s61))), 0x7F99A0EEL, 5L)).s11, ((VECTOR(int32_t, 2))(0x0F4B9ADBL))))).even ^ l_817), p_980->g_447.s0)) && 0xAE7ADB59L) && p_980->g_468.s2) >= 0x53L), p_980->g_777, 0x3AB22CB9L, 0x9CECBE17L, ((VECTOR(uint32_t, 2))(0x41C33D92L)), 0xC32EF080L, ((VECTOR(uint32_t, 2))(0x6AF13724L)), ((VECTOR(uint32_t, 4))(0xB0E892B6L)), 0x195243B8L)).s68e0, (uint32_t)p_980->g_124))), 0x90AA5A5EL, 4294967295UL)))).s1 , p_980->g_108.f0) , (-10L)) != p_980->g_68));
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_980->v_collective += p_980->l_atomic_reduction[0];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (l_788)
                        continue;
                    (*l_804) = l_818;
                }
            }
            for (l_778 = 0; (l_778 < (-25)); l_778--)
            { /* block id: 383 */
                l_804 = &l_787[2][6][0];
            }
            return (*l_758);
        }
        else
        { /* block id: 387 */
            VECTOR(int8_t, 2) l_825 = (VECTOR(int8_t, 2))((-1L), (-10L));
            VECTOR(int64_t, 4) l_877 = (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0x1EB1FA695E4FBBA2L), 0x1EB1FA695E4FBBA2L);
            int32_t *l_902 = &l_787[2][5][2];
            int32_t *l_903 = (void*)0;
            int32_t *l_904 = &l_761;
            int32_t *l_905 = &l_761;
            int32_t *l_906 = (void*)0;
            int32_t *l_907 = &l_761;
            int32_t *l_908 = &p_980->g_55;
            int32_t *l_909 = &p_980->g_760;
            int32_t *l_910 = &l_761;
            int32_t *l_911 = &l_712;
            int32_t *l_912 = &l_787[0][5][2];
            int32_t *l_913 = &p_980->g_55;
            int32_t *l_914 = &l_712;
            int32_t *l_915 = (void*)0;
            int32_t *l_916 = (void*)0;
            int32_t *l_917 = (void*)0;
            int32_t *l_918 = &l_773;
            int32_t *l_919 = &l_787[2][6][0];
            int32_t *l_920 = (void*)0;
            int32_t *l_921 = (void*)0;
            int32_t *l_922 = &p_980->g_55;
            int32_t *l_923 = (void*)0;
            int32_t *l_924 = (void*)0;
            int32_t *l_925 = &p_980->g_55;
            int32_t *l_926 = &l_773;
            int32_t *l_927 = &p_980->g_55;
            int32_t *l_928[2];
            union U0 *l_932 = (void*)0;
            union U0 **l_933 = &l_932;
            int i;
            for (i = 0; i < 2; i++)
                l_928[i] = &p_980->g_55;
            for (p_980->g_41.f0 = 0; (p_980->g_41.f0 == 35); p_980->g_41.f0++)
            { /* block id: 390 */
                int32_t *l_827 = (void*)0;
                VECTOR(int8_t, 16) l_851 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L, (VECTOR(int8_t, 2))((-1L), 2L), (VECTOR(int8_t, 2))((-1L), 2L), (-1L), 2L, (-1L), 2L);
                uint64_t *l_883 = &l_762;
                int32_t l_888 = 3L;
                VECTOR(int16_t, 8) l_893 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                int32_t *l_901[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_901[i] = (void*)0;
                if ((*l_804))
                { /* block id: 391 */
                    (*l_804) = (safe_sub_func_int8_t_s_s((-9L), ((VECTOR(int8_t, 8))(l_825.yyyxxxyy)).s1));
                }
                else
                { /* block id: 393 */
                    int8_t l_886 = 3L;
                    l_827 = &l_761;
                    (*l_804) = ((safe_rshift_func_uint8_t_u_s(l_825.x, ((safe_sub_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_u((((~p_980->g_184[4]) , (0x31DAL || (0xA6L && (l_825.x < ((*l_804) != ((safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(p_980->g_108.f0, l_825.y)) , ((p_980->g_503.s7 > FAKE_DIVERGE(p_980->group_1_offset, get_group_id(1), 10)) , p_980->g_375)), (-10L))) < p_980->g_184[4])))))) <= FAKE_DIVERGE(p_980->local_0_offset, get_local_id(0), 10)), p_980->g_226.x)) <= GROUP_DIVERGE(0, 1)) , p_980->g_447.s0) & 0L), p_980->g_668.s8)) | p_980->g_668.s7))) && l_825.y);
                    for (l_763 = 0; (l_763 < 20); l_763++)
                    { /* block id: 398 */
                        VECTOR(int32_t, 4) l_859 = (VECTOR(int32_t, 4))(0x0B5C65C2L, (VECTOR(int32_t, 2))(0x0B5C65C2L, 0x53F62212L), 0x53F62212L);
                        int16_t *l_885 = &l_8;
                        int i;
                        l_888 ^= (((VECTOR(int8_t, 2))(p_980->g_846.s25)).hi | ((safe_mod_func_uint8_t_u_u(((*l_29) |= ((((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(246UL, 0x5BL)).odd, (((((VECTOR(int8_t, 4))(l_851.s4012)).z <= (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x79L, 6L)).even, (-1L)))) | ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 16))(p_980->g_854.zyxyxxyzxyzzyzzy)).s103c, (uint8_t)((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_980->g_855.s43)), 0xD77828F7L, 0xA24CF8E4L)))).zwwwwwwywxzxwzwy)).s2bf4)).x == (((safe_lshift_func_int16_t_s_s((((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(l_858.sbff9707572a8e22f)).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_859.wyxyywzx)), 0L, ((p_980->g_41 , (~(((VECTOR(int16_t, 4))(l_862.yyxz)).y ^ ((((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), (safe_sub_func_int16_t_s_s(((*l_885) = (0L != ((safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((*l_759), (((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 2))(0x2C4079DAD464FB5AL, 5L)).xyyyyyyx, (int64_t)((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_877.ww)).xyxxyyyyyxyxxxyx)).s6d, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(p_980->g_878.wwwzyxzy)))).s01))), ((VECTOR(int64_t, 8))((-1L), p_980->g_756.se, ((VECTOR(int64_t, 4))(p_980->g_879.s1532)), 0x6467C5E42B15FED8L, 0x54A2E20BD801BF52L)), 0x4C6FB03825E4D8B8L, ((VECTOR(int64_t, 4))(p_980->g_880.s0eef)), (-1L))).s3))).s7 , 0x3F71L))), 4)) | (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 2))(0x71EDA401EE433FB1L, 0L)).yxxy, ((VECTOR(int64_t, 8))((-1L), (l_883 == &l_762), ((VECTOR(int64_t, 4))(p_980->g_884.s610e)), 0x31838366E2EAFEB4L, 0x79B6FF64B0F48A56L)).lo))).lo)).hi >= (l_859.y != (*l_758))) & p_980->g_468.s5), ((VECTOR(uint8_t, 2))(0x40L)), ((VECTOR(uint8_t, 2))(0x24L)), ((VECTOR(uint8_t, 2))(255UL)), 0x92L)).hi)).zxwwwzwwwwxzzxzy))).s7, p_980->g_375))), (*l_827))), (*p_980->g_39))) && l_825.x))), p_980->g_855.s6)))) && 0xBE27L), p_980->g_240.x)) || l_886) >= 0x53CD746CL) < p_980->g_675.s2)))) < p_980->g_497.s3), ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(0x40218821L)), 0x0200867CL, 1L)).hi))).s2 >= (*l_804)), 1)) > 0x01L) && p_980->g_887)) , l_859.z), (uint8_t)0x2BL))), (*l_759), 0x7EL, 3UL, 252UL)).odd)).z) >= l_825.y), 0UL, 0x93L)), 253UL, l_825.x, 0x15L, 0xD9L)).s6, 0xA6L)) ^ p_980->g_212) != 0x5BL) ^ p_980->g_28)), p_980->g_198[3][2][4])) && l_825.y));
                    }
                    (*p_980->g_890) = (l_759 = &l_787[1][0][1]);
                }
                if ((*l_804))
                    continue;
                l_858.sb ^= ((*p_980->g_727) , (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(l_893.s4733723367011445)).s2, (p_980->g_75.x |= (((*l_804) , (safe_div_func_int8_t_s_s(((*p_980->g_39) <= (safe_mod_func_uint16_t_u_u(0UL, (safe_rshift_func_int8_t_s_u((p_980->g_900 , ((l_794 != (*p_980->g_524)) & (0L == p_980->g_143))), (*l_759)))))), (*p_980->g_39)))) && 0x12A4L)))));
                if ((*p_980->g_409))
                    continue;
            }
            ++l_929;
            (*l_914) |= (&p_980->g_151 == (void*)0);
            (*l_933) = l_932;
        }
        l_939--;
        for (p_980->g_681.f2 = 18; (p_980->g_681.f2 == 23); p_980->g_681.f2 = safe_add_func_int16_t_s_s(p_980->g_681.f2, 1))
        { /* block id: 418 */
            if ((*l_934))
                break;
            return l_944;
        }
        (*l_804) ^= ((p_980->g_108.f0 , &p_980->g_456) == &p_980->g_456);
    }
    else
    { /* block id: 423 */
        int32_t *l_945 = (void*)0;
        int32_t *l_946 = &p_980->g_760;
        int32_t *l_947[2];
        int8_t l_948 = (-1L);
        VECTOR(uint32_t, 4) l_953 = (VECTOR(uint32_t, 4))(0x9F43624CL, (VECTOR(uint32_t, 2))(0x9F43624CL, 0UL), 0UL);
        int8_t l_956 = 0x73L;
        uint32_t l_962 = 4294967291UL;
        int i;
        for (i = 0; i < 2; i++)
            l_947[i] = &p_980->g_760;
        ++p_980->g_949;
        l_953.y++;
        p_980->g_959++;
        ++l_962;
    }
    (*l_974) = ((l_965 , ((safe_mul_func_uint16_t_u_u(((l_971[0] = (*l_758)) == p_980->g_949), (5UL >= (0L | p_980->g_957)))) | (((p_980->g_959 , l_972) != &l_973) <= 0x2393L))) , &l_712);
    for (l_929 = (-3); (l_929 <= 26); l_929 = safe_add_func_uint16_t_u_u(l_929, 8))
    { /* block id: 433 */
        l_979 = (safe_rshift_func_int16_t_s_s(p_980->g_669.s6, 12));
        return (*p_980->g_727);
    }
    return (*p_980->g_710);
}


/* ------------------------------------------ */
/* 
 * reads : p_980->g_717 p_980->g_718 p_980->g_55 p_980->g_409
 * writes: p_980->g_55 p_980->g_133
 */
int32_t  func_2(int32_t  p_3, int32_t  p_4, uint64_t  p_5, uint32_t  p_6, int8_t  p_7, struct S3 * p_980)
{ /* block id: 339 */
    union U0 **l_715 = &p_980->g_388;
    VECTOR(uint32_t, 16) l_716 = (VECTOR(uint32_t, 16))(0x98E7A30EL, (VECTOR(uint32_t, 4))(0x98E7A30EL, (VECTOR(uint32_t, 2))(0x98E7A30EL, 8UL), 8UL), 8UL, 0x98E7A30EL, 8UL, (VECTOR(uint32_t, 2))(0x98E7A30EL, 8UL), (VECTOR(uint32_t, 2))(0x98E7A30EL, 8UL), 0x98E7A30EL, 8UL, 0x98E7A30EL, 8UL);
    int32_t *l_719 = &p_980->g_55;
    int32_t **l_720 = (void*)0;
    int32_t **l_721 = &p_980->g_133[5][2];
    int32_t *l_722[7][1] = {{&p_980->g_55},{&p_980->g_55},{&p_980->g_55},{&p_980->g_55},{&p_980->g_55},{&p_980->g_55},{&p_980->g_55}};
    int32_t *l_723 = &p_980->g_55;
    uint16_t *l_725 = (void*)0;
    uint16_t **l_724 = &l_725;
    uint16_t ***l_726 = &l_724;
    int i, j;
    (*p_980->g_718) |= ((safe_rshift_func_uint16_t_u_s((l_715 == (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 8))(l_716.s6aa5d2b5)).s24, ((VECTOR(uint32_t, 16))(p_980->g_717.yxxyxxyyyyxyxxyy)).se0))).xyxy)).z , l_715)), 12)) ^ p_5);
    (*l_721) = &p_4;
    (*l_726) = l_724;
    return (*p_980->g_409);
}


/* ------------------------------------------ */
/* 
 * reads : p_980->g_39 p_980->g_93 p_980->g_143 p_980->g_710
 * writes: p_980->g_55
 */
int8_t  func_10(uint32_t  p_11, int32_t  p_12, uint64_t  p_13, struct S3 * p_980)
{ /* block id: 311 */
    uint64_t **l_709 = (void*)0;
    int32_t l_711 = (-9L);
    if ((atomic_inc(&p_980->g_atomic_input[18 * get_linear_group_id() + 15]) == 1))
    { /* block id: 313 */
        int32_t l_692 = (-1L);
        int32_t *l_698[6] = {&l_692,&l_692,&l_692,&l_692,&l_692,&l_692};
        int32_t *l_699[8][3] = {{&l_692,&l_692,&l_692},{&l_692,&l_692,&l_692},{&l_692,&l_692,&l_692},{&l_692,&l_692,&l_692},{&l_692,&l_692,&l_692},{&l_692,&l_692,&l_692},{&l_692,&l_692,&l_692},{&l_692,&l_692,&l_692}};
        int32_t *l_700[9] = {&l_692,&l_692,&l_692,&l_692,&l_692,&l_692,&l_692,&l_692,&l_692};
        int32_t *l_701 = (void*)0;
        int i, j;
        for (l_692 = 0; (l_692 < (-20)); l_692--)
        { /* block id: 316 */
            uint8_t l_695 = 0xC3L;
            l_695++;
        }
        l_701 = (l_700[5] = (l_699[2][2] = (l_698[5] = (void*)0)));
        for (l_692 = (-7); (l_692 == 25); l_692 = safe_add_func_uint32_t_u_u(l_692, 8))
        { /* block id: 325 */
            int32_t l_704 = 8L;
            for (l_704 = (-25); (l_704 == 22); ++l_704)
            { /* block id: 328 */
                uint8_t l_707 = 8UL;
                int64_t l_708 = 5L;
                l_708 = (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(0x5F53177EL, 0xCA5FC2EDL, 0x491A4EF4L, 4294967293UL)).yxxzwwyyyzxzxxwy)).s2 , l_707);
            }
        }
        unsigned int result = 0;
        result += l_692;
        atomic_add(&p_980->g_special_values[18 * get_linear_group_id() + 15], result);
    }
    else
    { /* block id: 332 */
        (1 + 1);
    }
    l_709 = l_709;
    (*p_980->g_710) = (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((p_13 || (*p_980->g_39)) ^ p_980->g_143), 0x32ACB7CED546A1B4L, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(1UL, 18446744073709551608UL)), 18446744073709551615UL, 0UL)).yxywwxxy)), ((VECTOR(uint64_t, 2))(1UL, 0x19BB3395B6EBC1F2L)), ((VECTOR(uint64_t, 2))(6UL, 0xF7AE9209390EFAB9L)).hi, 18446744073709551611UL, 0x812C4FBF9759D127L, 0UL)))).se && 0xB913DE539E432DB3L);
    return l_711;
}


/* ------------------------------------------ */
/* 
 * reads : p_980->g_40
 * writes: p_980->g_40
 */
uint64_t  func_14(uint64_t  p_15, int16_t  p_16, uint32_t  p_17, int32_t  p_18, int16_t  p_19, struct S3 * p_980)
{ /* block id: 304 */
    union U1 *l_689 = &p_980->g_550;
    uint16_t l_691 = 0xDE66L;
    for (p_980->g_40 = 14; (p_980->g_40 == 34); p_980->g_40 = safe_add_func_uint64_t_u_u(p_980->g_40, 1))
    { /* block id: 307 */
        union U1 **l_690 = &l_689;
        (*l_690) = l_689;
    }
    return l_691;
}


/* ------------------------------------------ */
/* 
 * reads : p_980->g_524 p_980->g_528 p_980->g_41.f2 p_980->g_93 p_980->g_30 p_980->g_124 p_980->g_550 p_980->g_389.f0 p_980->g_39 p_980->g_497 p_980->g_449 p_980->g_198 p_980->g_389.f1 p_980->g_41 p_980->g_404 p_980->g_388 p_980->g_389 p_980->g_66 p_980->g_235 p_980->g_239 p_980->g_133 p_980->g_55 p_980->g_375 p_980->g_409 p_980->g_427.f0 p_980->g_226 p_980->g_9 p_980->g_68 p_980->g_75 p_980->g_108 p_980->g_20 p_980->g_132 p_980->g_119 p_980->g_143 p_980->g_157 p_980->l_comm_values p_980->g_151 p_980->g_199 p_980->g_262 p_980->g_40 p_980->g_229 p_980->g_649 p_980->g_513.f1 p_980->g_661 p_980->g_668 p_980->g_669 p_980->g_673 p_980->g_675 p_980->g_683
 * writes: p_980->g_518 p_980->g_41.f2 p_980->g_55 p_980->g_93 p_980->g_30 p_980->g_124 p_980->g_389.f1 p_980->g_375 p_980->g_68 p_980->g_28 p_980->g_133 p_980->g_143 p_980->g_66 p_980->g_184 p_980->g_151 p_980->g_199 p_980->g_243 p_980->g_513.f1 p_980->g_449 p_980->g_40 p_980->g_388
 */
int32_t  func_21(int64_t  p_22, int8_t  p_23, int32_t  p_24, struct S3 * p_980)
{ /* block id: 207 */
    uint8_t **l_517 = &p_980->g_39;
    uint8_t ***l_516[3];
    int32_t l_539 = 0x1100CBA1L;
    int32_t l_584[9][3] = {{(-1L),1L,(-1L)},{(-1L),1L,(-1L)},{(-1L),1L,(-1L)},{(-1L),1L,(-1L)},{(-1L),1L,(-1L)},{(-1L),1L,(-1L)},{(-1L),1L,(-1L)},{(-1L),1L,(-1L)},{(-1L),1L,(-1L)}};
    int32_t l_598 = (-1L);
    uint32_t *l_634 = &p_980->g_199;
    VECTOR(uint64_t, 16) l_662 = (VECTOR(uint64_t, 16))(0xB25E65D43BF055E4L, (VECTOR(uint64_t, 4))(0xB25E65D43BF055E4L, (VECTOR(uint64_t, 2))(0xB25E65D43BF055E4L, 0xC05B1963487B614AL), 0xC05B1963487B614AL), 0xC05B1963487B614AL, 0xB25E65D43BF055E4L, 0xC05B1963487B614AL, (VECTOR(uint64_t, 2))(0xB25E65D43BF055E4L, 0xC05B1963487B614AL), (VECTOR(uint64_t, 2))(0xB25E65D43BF055E4L, 0xC05B1963487B614AL), 0xB25E65D43BF055E4L, 0xC05B1963487B614AL, 0xB25E65D43BF055E4L, 0xC05B1963487B614AL);
    VECTOR(uint32_t, 16) l_663 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x31C30B7AL), 0x31C30B7AL), 0x31C30B7AL, 1UL, 0x31C30B7AL, (VECTOR(uint32_t, 2))(1UL, 0x31C30B7AL), (VECTOR(uint32_t, 2))(1UL, 0x31C30B7AL), 1UL, 0x31C30B7AL, 1UL, 0x31C30B7AL);
    VECTOR(int8_t, 16) l_670 = (VECTOR(int8_t, 16))(0x35L, (VECTOR(int8_t, 4))(0x35L, (VECTOR(int8_t, 2))(0x35L, (-10L)), (-10L)), (-10L), 0x35L, (-10L), (VECTOR(int8_t, 2))(0x35L, (-10L)), (VECTOR(int8_t, 2))(0x35L, (-10L)), 0x35L, (-10L), 0x35L, (-10L));
    VECTOR(int8_t, 2) l_671 = (VECTOR(int8_t, 2))(0L, 3L);
    VECTOR(int8_t, 4) l_674 = (VECTOR(int8_t, 4))(0x00L, (VECTOR(int8_t, 2))(0x00L, 7L), 7L);
    union U0 *l_680 = &p_980->g_681;
    int i, j;
    for (i = 0; i < 3; i++)
        l_516[i] = &l_517;
    if (((p_980->g_518 = (void*)0) != &p_980->g_39))
    { /* block id: 209 */
        uint8_t l_521 = 9UL;
        uint32_t *l_523 = (void*)0;
        uint32_t **l_522 = &l_523;
        int32_t *l_526 = &p_980->g_41.f2;
        int32_t *l_527 = (void*)0;
        int32_t l_579 = (-1L);
        int32_t l_580 = 1L;
        int32_t l_581[2];
        int16_t l_585 = 0L;
        uint8_t ***l_631[1][10] = {{&p_980->g_518,&p_980->g_518,&p_980->g_518,&p_980->g_518,&p_980->g_518,&p_980->g_518,&p_980->g_518,&p_980->g_518,&p_980->g_518,&p_980->g_518}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_581[i] = 0x7AA6EBB6L;
        (*p_980->g_528) = ((*l_526) = (safe_sub_func_uint64_t_u_u(l_521, (l_522 == p_980->g_524))));
        if ((atomic_inc(&p_980->l_atomic_input[14]) == 7))
        { /* block id: 213 */
            int8_t l_529 = 0x63L;
            uint8_t l_530 = 0x72L;
            int32_t l_532 = (-4L);
            int32_t *l_531[10] = {&l_532,&l_532,&l_532,&l_532,&l_532,&l_532,&l_532,&l_532,&l_532,&l_532};
            int i;
            l_530 = (l_529 = ((VECTOR(int32_t, 2))(0x34A164B9L, 0x18A4C126L)).even);
            l_531[3] = l_531[3];
            unsigned int result = 0;
            result += l_529;
            result += l_530;
            result += l_532;
            atomic_add(&p_980->l_special_values[14], result);
        }
        else
        { /* block id: 217 */
            (1 + 1);
        }
        for (p_24 = (-17); (p_24 > 21); ++p_24)
        { /* block id: 222 */
            uint16_t l_555 = 0x37DDL;
            VECTOR(int16_t, 16) l_558 = (VECTOR(int16_t, 16))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, (-1L)), (-1L)), (-1L), 6L, (-1L), (VECTOR(int16_t, 2))(6L, (-1L)), (VECTOR(int16_t, 2))(6L, (-1L)), 6L, (-1L), 6L, (-1L));
            uint64_t l_567 = 1UL;
            int32_t l_578 = (-6L);
            int32_t l_582 = 0x35DACF5BL;
            int32_t l_586 = 0L;
            int32_t l_589 = 0x52D98043L;
            int64_t l_596[9];
            int32_t l_597 = 0x733E51B8L;
            int32_t l_604 = (-9L);
            int32_t l_605 = 4L;
            int32_t l_606 = (-1L);
            int32_t l_607 = 0x13DCBEC2L;
            int32_t l_609 = 0L;
            int8_t l_633 = 0x07L;
            int i;
            for (i = 0; i < 9; i++)
                l_596[i] = (-1L);
            for (p_980->g_41.f2 = (-7); (p_980->g_41.f2 <= (-12)); --p_980->g_41.f2)
            { /* block id: 225 */
                uint32_t l_566 = 3UL;
                int32_t l_590[8] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
                int8_t l_599 = (-1L);
                int8_t l_610 = 0x04L;
                int i;
                for (p_980->g_93 = 0; (p_980->g_93 >= 8); ++p_980->g_93)
                { /* block id: 228 */
                    if ((*l_526))
                        break;
                    if (l_539)
                        continue;
                    if ((atomic_inc(&p_980->g_atomic_input[18 * get_linear_group_id() + 5]) == 8))
                    { /* block id: 232 */
                        int32_t l_541 = 0x55EE3CB8L;
                        int32_t *l_540 = &l_541;
                        int32_t *l_542 = &l_541;
                        uint32_t l_543 = 4UL;
                        uint32_t l_544[6] = {0xAE5AB597L,0xAE5AB597L,0xAE5AB597L,0xAE5AB597L,0xAE5AB597L,0xAE5AB597L};
                        int64_t l_545[8] = {0x264B1AF517454661L,0x264B1AF517454661L,0x264B1AF517454661L,0x264B1AF517454661L,0x264B1AF517454661L,0x264B1AF517454661L,0x264B1AF517454661L,0x264B1AF517454661L};
                        int i;
                        l_542 = l_540;
                        l_545[1] ^= (l_544[1] ^= l_543);
                        unsigned int result = 0;
                        result += l_541;
                        result += l_543;
                        int l_544_i0;
                        for (l_544_i0 = 0; l_544_i0 < 6; l_544_i0++) {
                            result += l_544[l_544_i0];
                        }
                        int l_545_i0;
                        for (l_545_i0 = 0; l_545_i0 < 8; l_545_i0++) {
                            result += l_545[l_545_i0];
                        }
                        atomic_add(&p_980->g_special_values[18 * get_linear_group_id() + 5], result);
                    }
                    else
                    { /* block id: 236 */
                        (1 + 1);
                    }
                }
                for (p_980->g_30 = 0; (p_980->g_30 <= 54); p_980->g_30++)
                { /* block id: 242 */
                    uint32_t l_559 = 0x9B1AE5C5L;
                    uint8_t **l_564 = &p_980->g_39;
                    int32_t l_587 = (-7L);
                    int32_t l_588 = 1L;
                    int32_t l_591 = 0L;
                    int32_t l_595 = 0x6D7D624EL;
                    int32_t l_600 = 0x713A490CL;
                    int32_t l_601 = 1L;
                    int32_t l_602 = 0x0B488F71L;
                    int32_t l_608[5] = {0x645434E3L,0x645434E3L,0x645434E3L,0x645434E3L,0x645434E3L};
                    uint16_t l_611 = 65535UL;
                    int i;
                    for (p_980->g_124 = 13; (p_980->g_124 <= (-28)); p_980->g_124 = safe_sub_func_uint16_t_u_u(p_980->g_124, 6))
                    { /* block id: 245 */
                        int16_t *l_553 = &p_980->g_513.f1;
                        int16_t *l_554[7][7][3] = {{{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0}},{{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0}},{{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0}},{{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0}},{{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0}},{{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0}},{{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0},{&p_980->g_28,&p_980->g_28,(void*)0}}};
                        int32_t l_565 = 5L;
                        int32_t *l_568 = (void*)0;
                        int32_t *l_569 = (void*)0;
                        int32_t *l_570 = &l_539;
                        int32_t *l_571 = &l_565;
                        int32_t *l_572 = &p_980->g_55;
                        int32_t *l_573 = &p_980->g_55;
                        int32_t *l_574 = &p_980->g_55;
                        int32_t *l_575 = &p_980->g_55;
                        int32_t *l_576 = &p_980->g_55;
                        int32_t *l_577[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int8_t l_583 = 0x41L;
                        uint32_t l_592 = 0x2E0EA15BL;
                        int8_t l_603[8] = {3L,3L,3L,3L,3L,3L,3L,3L};
                        int i, j, k;
                        l_567 = (p_980->g_550 , ((safe_lshift_func_int16_t_s_s(((-1L) < p_980->g_389.f0), (l_555 |= (!((*p_980->g_39) <= 0x08L))))) & ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0x12ACL, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_558.se2)).yyxxyxxy)), ((VECTOR(int16_t, 4))(9L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(2L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))((l_559 , p_980->g_497.s3), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_22, (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x6090691D598D1855L, 9L)), 0L, 0x117472DBD7E87D19L)).y , (safe_lshift_func_uint8_t_u_u((l_565 = (!(safe_div_func_uint64_t_u_u((!(&p_980->g_39 != l_564)), p_980->g_449)))), l_566))), (-10L), 0L)).even)), 1L)).lo)), 0x5604L)).even)), 0x6A22L)), 0x3891L, 0x304EL, 1L)).sb7)).yxyx)).x, l_539)) > p_980->g_198[2][5][2])));
                        if (l_566)
                            continue;
                        --l_592;
                        ++l_611;
                    }
                }
                if ((atomic_inc(&p_980->g_atomic_input[18 * get_linear_group_id() + 8]) == 9))
                { /* block id: 255 */
                    uint16_t l_614[5] = {65527UL,65527UL,65527UL,65527UL,65527UL};
                    int i;
                    ++l_614[2];
                    unsigned int result = 0;
                    int l_614_i0;
                    for (l_614_i0 = 0; l_614_i0 < 5; l_614_i0++) {
                        result += l_614[l_614_i0];
                    }
                    atomic_add(&p_980->g_special_values[18 * get_linear_group_id() + 8], result);
                }
                else
                { /* block id: 257 */
                    (1 + 1);
                }
            }
            for (p_980->g_389.f1 = 0; (p_980->g_389.f1 > 13); ++p_980->g_389.f1)
            { /* block id: 263 */
                uint8_t ***l_632 = &l_517;
                int64_t *l_635 = (void*)0;
                (**p_980->g_239) = (p_980->g_124 <= (l_539 |= (1UL ^ ((((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((p_980->g_41 , (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(l_558.sf, 2)), ((l_631[0][3] != l_632) != ((((((*p_980->g_39) || ((**p_980->g_404) , (l_584[4][1] , p_24))) > p_980->g_66.s3) == p_22) >= 0xF690L) ^ p_980->g_235.y)))), l_584[7][0])), l_586))) & 0x18EE37AAL), 13)), l_633)) , (void*)0) == l_634) < 0x5F16L))));
                return p_23;
            }
        }
    }
    else
    { /* block id: 269 */
        for (p_980->g_55 = (-3); (p_980->g_55 < (-27)); p_980->g_55 = safe_sub_func_uint16_t_u_u(p_980->g_55, 7))
        { /* block id: 272 */
            for (p_980->g_375 = 0; (p_980->g_375 != 24); p_980->g_375 = safe_add_func_int16_t_s_s(p_980->g_375, 9))
            { /* block id: 275 */
                int32_t *l_640 = &p_980->g_41.f2;
                uint32_t l_641[3][5][5] = {{{0xB66C13B5L,4294967290UL,1UL,4294967290UL,0xB66C13B5L},{0xB66C13B5L,4294967290UL,1UL,4294967290UL,0xB66C13B5L},{0xB66C13B5L,4294967290UL,1UL,4294967290UL,0xB66C13B5L},{0xB66C13B5L,4294967290UL,1UL,4294967290UL,0xB66C13B5L},{0xB66C13B5L,4294967290UL,1UL,4294967290UL,0xB66C13B5L}},{{0xB66C13B5L,4294967290UL,1UL,4294967290UL,0xB66C13B5L},{0xB66C13B5L,4294967290UL,1UL,4294967290UL,0xB66C13B5L},{0xB66C13B5L,4294967290UL,1UL,4294967290UL,0xB66C13B5L},{0xB66C13B5L,4294967290UL,1UL,4294967290UL,0xB66C13B5L},{0xB66C13B5L,4294967290UL,1UL,4294967290UL,0xB66C13B5L}},{{0xB66C13B5L,4294967290UL,1UL,4294967290UL,0xB66C13B5L},{0xB66C13B5L,4294967290UL,1UL,4294967290UL,0xB66C13B5L},{0xB66C13B5L,4294967290UL,1UL,4294967290UL,0xB66C13B5L},{0xB66C13B5L,4294967290UL,1UL,4294967290UL,0xB66C13B5L},{0xB66C13B5L,4294967290UL,1UL,4294967290UL,0xB66C13B5L}}};
                int i, j, k;
                (*l_640) = (*p_980->g_409);
                --l_641[2][4][4];
            }
        }
    }
    for (p_980->g_55 = 0; (p_980->g_55 != (-21)); p_980->g_55--)
    { /* block id: 283 */
        return l_539;
    }
    (*p_980->g_649) = func_61(l_584[4][1], (((((((l_584[4][1] && (safe_rshift_func_uint8_t_u_s((l_584[4][0] > (safe_unary_minus_func_int32_t_s((p_980->g_124 & ((p_24 > (l_584[4][1] & ((((p_22 >= (p_24 <= ((void*)0 == &p_980->g_184[4]))) <= p_22) ^ 0x3B7C71899CF0E18FL) , l_539))) , 0xBE0410B725A0865CL))))), p_980->g_427[0].f0))) , p_24) || p_980->g_93) < l_584[4][1]) >= 1L) > p_980->g_226.w) , &l_584[7][1]), &l_584[4][1], p_980);
    for (p_980->g_30 = (-7); (p_980->g_30 < 59); p_980->g_30 = safe_add_func_int16_t_s_s(p_980->g_30, 1))
    { /* block id: 289 */
        int32_t *l_652 = (void*)0;
        int32_t *l_653 = &l_584[7][1];
        int8_t *l_657[6][3][5] = {{{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0},{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0},{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0}},{{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0},{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0},{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0}},{{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0},{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0},{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0}},{{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0},{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0},{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0}},{{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0},{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0},{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0}},{{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0},{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0},{&p_980->g_198[0][1][4],&p_980->g_198[1][7][0],(void*)0,(void*)0,(void*)0}}};
        uint64_t *l_660 = &p_980->g_449;
        VECTOR(int8_t, 16) l_672 = (VECTOR(int8_t, 16))(0x5AL, (VECTOR(int8_t, 4))(0x5AL, (VECTOR(int8_t, 2))(0x5AL, 1L), 1L), 1L, 0x5AL, 1L, (VECTOR(int8_t, 2))(0x5AL, 1L), (VECTOR(int8_t, 2))(0x5AL, 1L), 0x5AL, 1L, 0x5AL, 1L);
        VECTOR(uint32_t, 16) l_676 = (VECTOR(uint32_t, 16))(0x52C19E1EL, (VECTOR(uint32_t, 4))(0x52C19E1EL, (VECTOR(uint32_t, 2))(0x52C19E1EL, 1UL), 1UL), 1UL, 0x52C19E1EL, 1UL, (VECTOR(uint32_t, 2))(0x52C19E1EL, 1UL), (VECTOR(uint32_t, 2))(0x52C19E1EL, 1UL), 0x52C19E1EL, 1UL, 0x52C19E1EL, 1UL);
        VECTOR(uint32_t, 2) l_677 = (VECTOR(uint32_t, 2))(0xBF5E96B9L, 0x3DBCCDE2L);
        uint8_t ***l_678[10] = {&l_517,&l_517,&l_517,&l_517,&l_517,&l_517,&l_517,&l_517,&l_517,&l_517};
        int32_t l_679 = 0x45C76E7FL;
        int i, j, k;
        (*l_653) &= 0x4CA41B87L;
        for (p_980->g_513.f1 = 0; (p_980->g_513.f1 != 4); p_980->g_513.f1++)
        { /* block id: 293 */
            if (p_24)
                break;
            l_653 = l_653;
        }
        (*p_980->g_683) = func_43((p_980->g_66.s4 &= 0x36L), (*l_653), (p_980->g_55 <= ((((*l_660) = (((VECTOR(int16_t, 4))(1L, ((VECTOR(int16_t, 2))(0L, 1L)), 1L)).w ^ (safe_mul_func_uint8_t_u_u(l_539, p_23)))) || 18446744073709551607UL) && ((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 4))(p_980->g_661.s7bdb)).xxwzwwwz, ((VECTOR(uint64_t, 4))(l_662.seef3)).zxwwyzyz, ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 8))(18446744073709551610UL, ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x1B93BF88F41F363FL, 0xA82C2A0271808C47L)).yxxx)), ((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 2))(0x6873A7CBC14B425FL, 2UL)), ((VECTOR(uint64_t, 16))(1UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 16))(l_663.sa6caa8f28303f75f)).sd2, ((VECTOR(uint32_t, 16))(((safe_mod_func_uint8_t_u_u(((*p_980->g_39) = ((((safe_mul_func_uint8_t_u_u((p_23 ^ ((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_980->g_668.se1)).xyyy)).w | ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(p_980->g_669.sda)).yyyx))).zyzzywww, ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_670.sb8d48153)).s6535425070743125)).s9636, ((VECTOR(int8_t, 8))(l_671.xxyxxxxx)).lo))).ywwwyxxz, ((VECTOR(int8_t, 4))(l_672.s6510)).yxzwzzzx))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))(p_980->g_673.wwzyzzww)), ((VECTOR(int8_t, 2))(0x53L, 5L)).xxxxxyxy))).s5744375021744513)).hi, ((VECTOR(int8_t, 8))(l_674.wxwyxxyw))))))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 16))(p_980->g_675.s7331172420637442)).even, (int8_t)((((((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(l_676.s47f5c264)).s12))).xxxyyxyx, ((VECTOR(uint32_t, 8))(l_677.yyyyyyxy))))).s3 , ((void*)0 != l_678[3])) & p_980->g_9.y) | 0UL) < 0x0729L), (int8_t)p_24))).lo)), 2L, ((VECTOR(int8_t, 2))(0x43L)), (-10L))).even, ((VECTOR(int8_t, 8))(0x45L)), ((VECTOR(int8_t, 8))(0x12L))))), ((VECTOR(int8_t, 8))(0x4CL)))).s9) != (*l_653))), p_24)) | l_670.sd) <= 2UL) == 0xB5F44FA9L)), p_980->g_375)) & l_584[4][1]), l_679, FAKE_DIVERGE(p_980->global_2_offset, get_global_id(2), 10), 0xEE186638L, 0UL, l_584[4][1], p_23, p_24, 4294967288UL, p_22, ((VECTOR(uint32_t, 4))(0x2F6B3E2FL)), 0xDDB55E72L, 0x5BC90E9CL)).sb9))), 0xA4D41CBE8B0B7307L, 0xAC6E2D49C2F07E96L)).odd)).xyxx)), p_980->g_229.s7, ((VECTOR(uint64_t, 8))(18446744073709551615UL)), 0x348E779B2A98CFA2L, 0x634ED92C929735CDL)).se0, ((VECTOR(uint64_t, 2))(0x60AF31573D2E2303L))))).xxxy))), ((VECTOR(uint64_t, 2))(0UL)), 1UL)), ((VECTOR(uint64_t, 8))(18446744073709551606UL)))))))).s3)), l_680, p_980->g_388, p_980);
    }
    return (*p_980->g_528);
}


/* ------------------------------------------ */
/* 
 * reads : p_980->g_68 p_980->g_427 p_980->g_39 p_980->g_93 p_980->g_comm_values p_980->g_375 p_980->g_449 p_980->g_456 p_980->g_132 p_980->g_41.f0 p_980->g_468 p_980->g_199 p_980->g_243 p_980->g_482 p_980->g_485 p_980->g_40 p_980->g_488 p_980->g_235 p_980->g_184 p_980->g_198 p_980->g_239 p_980->g_133 p_980->g_55 p_980->g_497 p_980->g_66 p_980->g_503 p_980->g_157 p_980->g_20
 * writes: p_980->g_68 p_980->g_40 p_980->g_212 p_980->g_375 p_980->g_198 p_980->g_449 p_980->g_456 p_980->g_133 p_980->g_41.f0 p_980->g_199 p_980->g_55 p_980->g_388 p_980->g_41.f2
 */
int64_t  func_25(uint64_t  p_26, int32_t  p_27, struct S3 * p_980)
{ /* block id: 170 */
    int32_t l_446[7] = {0x0DE68BBEL,(-4L),0x0DE68BBEL,0x0DE68BBEL,(-4L),0x0DE68BBEL,0x0DE68BBEL};
    int32_t l_459[8] = {0x1F681701L,0x1F681701L,0x1F681701L,0x1F681701L,0x1F681701L,0x1F681701L,0x1F681701L,0x1F681701L};
    int32_t *l_461 = &p_980->g_41.f2;
    int32_t l_491 = 0x000CAAE8L;
    int32_t l_492 = 0x3953384BL;
    VECTOR(int8_t, 2) l_502 = (VECTOR(int8_t, 2))(0L, 0x0AL);
    union U0 *l_512 = &p_980->g_513;
    int i;
    for (p_980->g_68 = 0; (p_980->g_68 <= 56); ++p_980->g_68)
    { /* block id: 173 */
        int32_t *l_428[8][1][10] = {{{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55}},{{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55}},{{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55}},{{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55}},{{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55}},{{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55}},{{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55}},{{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55}}};
        uint16_t *l_464 = (void*)0;
        uint16_t *l_465 = &p_980->g_41.f0;
        uint32_t *l_469 = &p_980->g_199;
        int64_t *l_489 = (void*)0;
        int64_t *l_490[9] = {&p_980->g_151,&p_980->g_151,&p_980->g_151,&p_980->g_151,&p_980->g_151,&p_980->g_151,&p_980->g_151,&p_980->g_151,&p_980->g_151};
        VECTOR(int8_t, 8) l_495 = (VECTOR(int8_t, 8))(0x38L, (VECTOR(int8_t, 4))(0x38L, (VECTOR(int8_t, 2))(0x38L, 1L), 1L), 1L, 0x38L, 1L);
        VECTOR(int8_t, 4) l_496 = (VECTOR(int8_t, 4))(0x5DL, (VECTOR(int8_t, 2))(0x5DL, 0x73L), 0x73L);
        int i, j, k;
        for (p_980->g_40 = 3; (p_980->g_40 > 20); p_980->g_40++)
        { /* block id: 176 */
            uint8_t l_457 = 0x51L;
            int32_t *l_460 = &l_459[2];
            for (p_980->g_212 = 0; (p_980->g_212 != 34); p_980->g_212 = safe_add_func_int32_t_s_s(p_980->g_212, 2))
            { /* block id: 179 */
                uint64_t *l_443 = (void*)0;
                int32_t l_444 = 1L;
                uint64_t *l_445 = &p_980->g_375;
                uint64_t *l_448 = &p_980->g_449;
                uint64_t *l_450 = (void*)0;
                int32_t l_451[3][7][10] = {{{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L}},{{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L}},{{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L},{0x2945B6ADL,(-8L),0x3B2996DBL,(-8L),0x2945B6ADL,0x7400A157L,9L,2L,0x2A91BA2BL,0x712ECB54L}}};
                int16_t *l_454 = (void*)0;
                uint32_t *l_455 = &p_980->g_456;
                VECTOR(int32_t, 4) l_458 = (VECTOR(int32_t, 4))(0x1994A94CL, (VECTOR(int32_t, 2))(0x1994A94CL, 0x3AE2CF60L), 0x3AE2CF60L);
                int i, j, k;
                l_459[0] = (safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (((p_980->g_427[0] , l_428[7][0][6]) == &p_980->g_55) && (-3L)))), (safe_rshift_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(p_26, (!((*p_980->g_39) <= (((*l_455) ^= (GROUP_DIVERGE(2, 1) , (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((p_980->g_198[3][2][2] = (((safe_lshift_func_uint16_t_u_u(p_980->g_comm_values[p_980->tid], ((VECTOR(uint16_t, 2))(1UL, 0x7A1CL)).hi)) & ((*l_445) ^= (l_444 = FAKE_DIVERGE(p_980->local_2_offset, get_local_id(2), 10)))) ^ l_446[5])), ((l_451[2][5][8] = ((*l_448) ^= ((VECTOR(uint64_t, 8))(0x533BF5915918E7FEL, ((VECTOR(uint64_t, 4))(p_980->g_447.s7740)), 18446744073709551615UL, 0xE3694AA5DA6BE30CL, 0x4CA38B07EF5FFDA5L)).s2)) && (safe_div_func_int64_t_s_s((((((void*)0 == l_454) <= 0x429F9B49L) , (void*)0) == l_454), 18446744073709551615UL))))), p_26)))) , l_457))))) <= l_458.w), 1)), p_26)) & p_26) != (-1L)), l_446[5]))));
                l_461 = l_460;
            }
            (*p_980->g_132) = l_428[7][0][7];
        }
        l_492 ^= (safe_div_func_uint16_t_u_u(((*l_465)++), ((((*l_469) ^= ((VECTOR(uint32_t, 16))(p_980->g_468.s3461400732675270)).s7) < 0x350376C1L) ^ (((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(252UL, 9UL)).lo, (safe_add_func_int64_t_s_s((safe_mod_func_int64_t_s_s(p_26, ((VECTOR(uint64_t, 2))(0xEA87B755BC7DE7D9L, 0x2207AF5C8EECDED7L)).odd)), (((safe_mul_func_int16_t_s_s(l_459[0], (((safe_lshift_func_uint16_t_u_u(0x0A49L, 9)) != ((safe_sub_func_uint32_t_u_u(p_980->g_243.z, (0x13L < l_446[5]))) < ((VECTOR(int64_t, 2))(p_980->g_482.s9a)).hi)) == (0x0FB1B79AFC043797L > (l_491 ^= (((((VECTOR(uint16_t, 16))(0xDA8DL, ((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 2))((-4L), (-1L))).xxxxxyyyxyxyxxxy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_980->g_485.zzxx)).wyxzyxwzwyzzyzxx)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0L, ((VECTOR(int8_t, 16))(((safe_add_func_uint8_t_u_u(((((VECTOR(uint32_t, 8))(5UL, 6UL, 0xDC43AA2EL, p_27, ((VECTOR(uint32_t, 2))(0x321D0565L)), 6UL, 1UL)).s1 && p_27) , 0x6FL), p_980->g_40)) == p_27), p_980->g_468.s5, p_980->g_488, p_980->g_235.y, ((VECTOR(int8_t, 2))(0L)), 0x66L, p_980->g_482.s4, ((VECTOR(int8_t, 2))(1L)), 0x75L, (-1L), 0x25L, p_980->g_184[1], 1L, 0x4FL)).s0, (-1L), 0x01L)))).yxzzxyxwzxxzzzzw))).sd68a, ((VECTOR(int8_t, 4))(0x1FL)), ((VECTOR(int8_t, 4))((-2L)))))).z, 2)) == p_980->g_198[4][5][4]), 6UL, ((VECTOR(uint16_t, 8))(0xDD7EL)), ((VECTOR(uint16_t, 2))(0x430CL)), 65533UL, 0UL, 0x6731L)).s6 <= p_980->g_184[1]) && (-6L)) , p_980->g_468.s1)))))) && 6UL) != p_26))))) , p_27) ^ p_980->g_comm_values[p_980->tid]))));
        (**p_980->g_239) &= (!(((void*)0 == l_465) > p_27));
        l_491 |= (((safe_add_func_uint8_t_u_u(0xC5L, ((VECTOR(int8_t, 8))((-3L), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(l_495.s5420453436177577)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x6AL, 0x26L)).hi, ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(l_496.wzwwxzxw)).odd, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_980->g_497.s5112)).xxzwwzyzxyzyxwzx)).s68c9))).odd, ((VECTOR(int8_t, 4))(0x79L, ((p_26 >= ((*p_980->g_39) | 0x6BL)) == (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(0x66L, (safe_mul_func_uint16_t_u_u(p_980->g_66.s3, GROUP_DIVERGE(1, 1))), 0x6BL, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_502.yyyy)))), (-3L), ((VECTOR(int8_t, 2))(p_980->g_503.s40)), (safe_add_func_int16_t_s_s((-2L), ((void*)0 == &p_980->g_456))), p_26, p_980->g_198[4][4][1], p_27, ((VECTOR(int8_t, 2))(3L)), 0x72L, (-10L), 0x35L)).sa, ((VECTOR(int8_t, 2))((-1L))), 1L, 0x4BL)))).s47)).xxyy)).z, 3))), 1L, (-1L))).lo))).yyyxxxyxxxxxyxyx)).s5c)), ((VECTOR(int8_t, 2))(4L))))).yyyyxyyx, ((VECTOR(int8_t, 8))(0L)), ((VECTOR(int8_t, 8))(0x27L))))), (-8L), 1L, 0x1CL, 2L, p_26, 0L, 0x61L)).sc7)).yyxyxxxxyyxxxxxy))).sdc)), 0x6CL, ((VECTOR(int8_t, 2))((-1L))), p_980->g_157, (-2L), 0x37L)).s22, ((VECTOR(int8_t, 2))(1L))))), ((VECTOR(int8_t, 2))(0x1AL))))), 0x14L, (-1L))), p_26, 0x54L, 0x11L)).s1)) >= (*p_980->g_39)) <= p_980->g_485.x);
    }
    for (p_980->g_55 = (-19); (p_980->g_55 < 27); p_980->g_55 = safe_add_func_uint16_t_u_u(p_980->g_55, 6))
    { /* block id: 200 */
        uint16_t *l_510 = (void*)0;
        uint16_t *l_511 = &p_980->g_41.f0;
        union U0 **l_514 = (void*)0;
        union U0 **l_515 = &p_980->g_388;
        l_512 = ((*l_515) = func_43((safe_lshift_func_uint16_t_u_u(((*l_511) ^= p_980->g_20.s8), 14)), p_26, p_26, l_512, l_512, p_980));
    }
    (*l_461) = l_446[0];
    return p_980->g_497.sf;
}


/* ------------------------------------------ */
/* 
 * reads : p_980->g_41.f0 p_980->g_239 p_980->g_133 p_980->g_55 p_980->g_212 p_980->g_235 p_980->g_157 p_980->g_377 p_980->g_226 p_980->g_388 p_980->g_40 p_980->g_404 p_980->g_41.f2 p_980->g_108.f0 p_980->g_409 p_980->g_119
 * writes: p_980->g_41.f0 p_980->g_75 p_980->g_251.f1 p_980->g_364 p_980->g_375 p_980->g_198 p_980->g_377 p_980->g_133 p_980->g_39 p_980->g_40 p_980->g_388 p_980->g_41.f2 p_980->g_55
 */
int8_t  func_33(uint8_t * p_34, uint64_t  p_35, union U2  p_36, int64_t  p_37, uint8_t * p_38, struct S3 * p_980)
{ /* block id: 6 */
    int32_t l_53 = (-7L);
    uint8_t **l_380 = &p_980->g_39;
    VECTOR(int16_t, 16) l_385 = (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0x79E4L), 0x79E4L), 0x79E4L, (-3L), 0x79E4L, (VECTOR(int16_t, 2))((-3L), 0x79E4L), (VECTOR(int16_t, 2))((-3L), 0x79E4L), (-3L), 0x79E4L, (-3L), 0x79E4L);
    int i;
    (*p_980->g_404) = func_43((((safe_sub_func_int8_t_s_s(1L, ((((p_35 ^ ((void*)0 == &p_980->g_40)) , ((*l_380) = func_51(l_53, p_980))) == ((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_385.s5040)).w, ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 2))(65526UL, 0UL)).xxxx, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))((l_385.se ^ ((l_53 < (p_980->g_226.w && 0L)) >= 0xB30BL)), 0x21FFL, 0x10DBL, l_385.s2, 0x4506L, ((VECTOR(uint16_t, 2))(9UL)), 0x2DF6L)).lo))))).w)), 0x37L)) , &p_980->g_143)) >= l_385.s1))) | 0x3E853B37L) != 0x49724C7DB1264F06L), p_37, l_385.s9, p_980->g_388, p_980->g_388, p_980);
    for (p_980->g_41.f2 = 20; (p_980->g_41.f2 < 29); ++p_980->g_41.f2)
    { /* block id: 162 */
        VECTOR(int8_t, 4) l_407 = (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, 0x7BL), 0x7BL);
        int32_t *l_408 = (void*)0;
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_980->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 102)), permutations[(safe_mod_func_uint32_t_u_u(p_980->g_108.f0, 10))][(safe_mod_func_uint32_t_u_u(p_980->tid, 102))]));
        (*p_980->g_409) = (((VECTOR(int8_t, 2))(0L, 1L)).even < ((VECTOR(int8_t, 4))(l_407.wzww)).x);
    }
    return p_980->g_119;
}


/* ------------------------------------------ */
/* 
 * reads : p_980->g_40
 * writes: p_980->g_40
 */
union U0 * func_43(int8_t  p_44, uint32_t  p_45, int64_t  p_46, union U0 * p_47, union U0 * p_48, struct S3 * p_980)
{ /* block id: 147 */
    int32_t *l_390[3][9] = {{&p_980->g_55,(void*)0,(void*)0,&p_980->g_55,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55,&p_980->g_55},{&p_980->g_55,(void*)0,(void*)0,&p_980->g_55,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55,&p_980->g_55},{&p_980->g_55,(void*)0,(void*)0,&p_980->g_55,&p_980->g_55,(void*)0,(void*)0,&p_980->g_55,&p_980->g_55}};
    uint8_t l_391[8] = {0x53L,0UL,0x53L,0x53L,0UL,0x53L,0x53L,0UL};
    uint32_t l_392 = 4294967295UL;
    int i, j;
    l_391[2] |= (9L & 255UL);
    --l_392;
    for (p_980->g_40 = 0; (p_980->g_40 >= 25); p_980->g_40++)
    { /* block id: 152 */
        uint32_t l_397 = 5UL;
        int32_t l_400[3];
        uint64_t l_401 = 0x502B8F4B44E849F5L;
        int i;
        for (i = 0; i < 3; i++)
            l_400[i] = 0L;
        ++l_397;
        if (p_44)
            break;
        if (l_397)
            continue;
        --l_401;
    }
    return &p_980->g_389;
}


/* ------------------------------------------ */
/* 
 * reads : p_980->g_41.f0 p_980->g_239 p_980->g_133 p_980->g_55 p_980->g_212 p_980->g_235 p_980->g_157 p_980->g_377
 * writes: p_980->g_41.f0 p_980->g_75 p_980->g_251.f1 p_980->g_364 p_980->g_375 p_980->g_198 p_980->g_377 p_980->g_133
 */
uint8_t * func_51(int32_t  p_52, struct S3 * p_980)
{ /* block id: 7 */
    int32_t *l_54[7][6] = {{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_41.f2,&p_980->g_55,&p_980->g_41.f2},{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_41.f2,&p_980->g_55,&p_980->g_41.f2},{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_41.f2,&p_980->g_55,&p_980->g_41.f2},{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_41.f2,&p_980->g_55,&p_980->g_41.f2},{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_41.f2,&p_980->g_55,&p_980->g_41.f2},{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_41.f2,&p_980->g_55,&p_980->g_41.f2},{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_41.f2,&p_980->g_55,&p_980->g_41.f2}};
    uint32_t l_56[2][1][2];
    int32_t *l_69[10] = {&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55};
    VECTOR(uint64_t, 4) l_351 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x9C91ABEBC237A82CL), 0x9C91ABEBC237A82CL);
    VECTOR(int32_t, 4) l_354 = (VECTOR(int32_t, 4))(0x233D5AC1L, (VECTOR(int32_t, 2))(0x233D5AC1L, 0x3EC437ABL), 0x3EC437ABL);
    int16_t *l_357 = (void*)0;
    int16_t *l_358 = (void*)0;
    int16_t *l_359 = &p_980->g_251[6][5][2].f1;
    int32_t *l_365 = &p_980->g_124;
    uint32_t l_367 = 0xD867E3C8L;
    uint64_t *l_374 = &p_980->g_375;
    int8_t *l_376 = &p_980->g_198[2][5][3];
    int32_t **l_378 = &p_980->g_133[0][6];
    int32_t **l_379 = &l_54[0][0];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_56[i][j][k] = 0xE5709715L;
        }
    }
    l_56[1][0][1]--;
    for (p_980->g_41.f0 = 0; (p_980->g_41.f0 >= 23); ++p_980->g_41.f0)
    { /* block id: 11 */
        uint64_t l_65 = 0x492BB7607968679DL;
        uint32_t *l_67 = &p_980->g_68;
        (1 + 1);
    }
    p_980->g_377.x ^= (0UL >= (safe_mul_func_uint16_t_u_u(0x3A68L, ((((safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(l_351.wzwx)).x, (GROUP_DIVERGE(2, 1) || (safe_mod_func_uint16_t_u_u((+(((*l_376) = (((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_354.yzyxyyxywywzxxzx)))).s9 != (safe_rshift_func_int16_t_s_u(((*l_359) = (p_980->g_75.y = (1UL == ((VECTOR(int64_t, 2))(0x669DC92CF7FC1C7EL, 0x3FC89E2B7C948B8EL)).hi))), (((((255UL <= (safe_sub_func_int32_t_s_s(((safe_add_func_uint64_t_u_u(((p_980->g_364 = &p_980->g_157) == l_365), (safe_unary_minus_func_int32_t_s(l_367)))) && ((*l_374) = ((((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((**p_980->g_239), (safe_lshift_func_uint16_t_u_s(p_980->g_212, 8)))), 1UL)) | p_52) > p_980->g_235.x) & p_52))), p_980->g_55))) > 1UL) && FAKE_DIVERGE(p_980->group_2_offset, get_group_id(2), 10)) && 0xD45222AFL) , 1UL)))) || p_52) & 4294967289UL)) != (-8L))), 1L))))), 0xE597L)) < p_980->g_157) & 0x5AL) && 0x12L))));
    (*l_379) = ((*l_378) = l_69[9]);
    return &p_980->g_93;
}


/* ------------------------------------------ */
/* 
 * reads : p_980->g_9 p_980->g_40 p_980->g_75 p_980->g_20 p_980->g_68 p_980->g_39 p_980->g_93 p_980->g_108 p_980->g_55 p_980->g_comm_values p_980->g_41 p_980->g_128 p_980->g_124 p_980->g_132 p_980->g_119 p_980->g_143 p_980->g_66 p_980->g_157 p_980->l_comm_values p_980->g_151 p_980->g_28 p_980->g_199 p_980->g_235 p_980->g_133 p_980->g_239 p_980->g_262 p_980->g_229 p_980->g_226
 * writes: p_980->g_28 p_980->g_68 p_980->g_93 p_980->g_55 p_980->g_124 p_980->g_133 p_980->g_143 p_980->g_66 p_980->g_184 p_980->g_151 p_980->g_199 p_980->g_243
 */
int32_t * func_61(int32_t  p_62, int32_t * p_63, int32_t * p_64, struct S3 * p_980)
{ /* block id: 14 */
    int16_t *l_74 = &p_980->g_28;
    int32_t l_78 = (-10L);
    VECTOR(uint64_t, 4) l_79 = (VECTOR(uint64_t, 4))(0xCDD171CF63D7CB68L, (VECTOR(uint64_t, 2))(0xCDD171CF63D7CB68L, 0UL), 0UL);
    union U2 l_86[8][4] = {{{65535UL},{0x4E19L},{65535UL},{65535UL}},{{65535UL},{0x4E19L},{65535UL},{65535UL}},{{65535UL},{0x4E19L},{65535UL},{65535UL}},{{65535UL},{0x4E19L},{65535UL},{65535UL}},{{65535UL},{0x4E19L},{65535UL},{65535UL}},{{65535UL},{0x4E19L},{65535UL},{65535UL}},{{65535UL},{0x4E19L},{65535UL},{65535UL}},{{65535UL},{0x4E19L},{65535UL},{65535UL}}};
    VECTOR(int32_t, 2) l_95 = (VECTOR(int32_t, 2))(0L, 0x235296D3L);
    VECTOR(int32_t, 2) l_107 = (VECTOR(int32_t, 2))(0x25F0EF6FL, (-4L));
    VECTOR(int16_t, 4) l_118 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x4442L), 0x4442L);
    uint32_t *l_125 = &p_980->g_68;
    VECTOR(uint64_t, 2) l_171 = (VECTOR(uint64_t, 2))(0xBE8F8155B06E9F9FL, 1UL);
    int32_t *l_189 = &l_78;
    VECTOR(int8_t, 2) l_215 = (VECTOR(int8_t, 2))(0x31L, 1L);
    VECTOR(int8_t, 4) l_217 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x78L), 0x78L);
    VECTOR(int64_t, 16) l_227 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int64_t, 2))((-1L), 0L), (VECTOR(int64_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
    union U0 *l_250 = &p_980->g_251[6][5][2];
    uint64_t l_263 = 0x24A3151D1CFE56B4L;
    VECTOR(uint16_t, 4) l_337 = (VECTOR(uint16_t, 4))(0x40A2L, (VECTOR(uint16_t, 2))(0x40A2L, 65532UL), 65532UL);
    VECTOR(uint16_t, 8) l_338 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 3UL), 3UL), 3UL, 65535UL, 3UL);
    int16_t *l_341[5][1][5] = {{{(void*)0,&p_980->g_28,(void*)0,(void*)0,&p_980->g_28}},{{(void*)0,&p_980->g_28,(void*)0,(void*)0,&p_980->g_28}},{{(void*)0,&p_980->g_28,(void*)0,(void*)0,&p_980->g_28}},{{(void*)0,&p_980->g_28,(void*)0,(void*)0,&p_980->g_28}},{{(void*)0,&p_980->g_28,(void*)0,(void*)0,&p_980->g_28}}};
    int64_t *l_343 = &p_980->g_151;
    int64_t **l_342[3];
    int64_t **l_344 = &l_343;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_342[i] = &l_343;
    if (((safe_mod_func_int32_t_s_s(0x6E5DCA5BL, (+(((p_980->g_9.x >= (safe_mod_func_int16_t_s_s(0x1F79L, ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 8))(((*l_74) = p_980->g_40), ((VECTOR(int16_t, 2))(p_980->g_75.yx)), ((safe_mul_func_int8_t_s_s(l_78, (((void*)0 == &p_980->g_28) == ((VECTOR(uint64_t, 4))(l_79.wzyz)).y))) < (((((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((void*)0 == &l_78), p_980->g_20.s1)), l_79.x)), 0x7A7FFF35L)) , (void*)0) == &p_980->g_40) | 0x120B1A556116ABE3L) > 0x21L)), ((VECTOR(int16_t, 4))(0x2037L)))).s4022550733532056, ((VECTOR(int16_t, 16))(0x4323L))))).s2))) ^ p_62) >= p_980->g_68)))) || p_62))
    { /* block id: 16 */
        uint32_t *l_89 = &p_980->g_68;
        uint8_t *l_92[8][6] = {{&p_980->g_93,&p_980->g_40,&p_980->g_93,&p_980->g_93,&p_980->g_40,&p_980->g_93},{&p_980->g_93,&p_980->g_40,&p_980->g_93,&p_980->g_93,&p_980->g_40,&p_980->g_93},{&p_980->g_93,&p_980->g_40,&p_980->g_93,&p_980->g_93,&p_980->g_40,&p_980->g_93},{&p_980->g_93,&p_980->g_40,&p_980->g_93,&p_980->g_93,&p_980->g_40,&p_980->g_93},{&p_980->g_93,&p_980->g_40,&p_980->g_93,&p_980->g_93,&p_980->g_40,&p_980->g_93},{&p_980->g_93,&p_980->g_40,&p_980->g_93,&p_980->g_93,&p_980->g_40,&p_980->g_93},{&p_980->g_93,&p_980->g_40,&p_980->g_93,&p_980->g_93,&p_980->g_40,&p_980->g_93},{&p_980->g_93,&p_980->g_40,&p_980->g_93,&p_980->g_93,&p_980->g_40,&p_980->g_93}};
        int32_t l_94[4][10] = {{0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL},{0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL},{0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL},{0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL,0x17E3454EL}};
        uint32_t l_154 = 0xDD518CACL;
        union U0 *l_182 = (void*)0;
        int32_t *l_188 = &l_94[2][6];
        int32_t **l_306 = &l_188;
        VECTOR(uint32_t, 8) l_311 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xF728D24CL), 0xF728D24CL), 0xF728D24CL, 4294967295UL, 0xF728D24CL);
        VECTOR(uint32_t, 8) l_312 = (VECTOR(uint32_t, 8))(0x060BCA81L, (VECTOR(uint32_t, 4))(0x060BCA81L, (VECTOR(uint32_t, 2))(0x060BCA81L, 0x3464CDABL), 0x3464CDABL), 0x3464CDABL, 0x060BCA81L, 0x3464CDABL);
        uint16_t *l_331 = &l_86[4][1].f0;
        uint16_t *l_332 = (void*)0;
        uint16_t *l_333 = (void*)0;
        uint16_t *l_334 = (void*)0;
        uint16_t *l_335 = (void*)0;
        uint16_t *l_336 = (void*)0;
        int i, j;
        if (((((VECTOR(int32_t, 4))(0x4D2A541EL, (l_86[4][1] , (~((safe_mul_func_uint8_t_u_u((*p_980->g_39), 0xA0L)) == 0x5A29A6A910B13A75L))), (-1L), 1L)).x && ((*l_89) = ((VECTOR(uint32_t, 2))(1UL, 0x38A40F94L)).lo)) == (((safe_div_func_int32_t_s_s(0x4272ABD0L, ((p_980->g_93--) , 0x5ED510FEL))) <= p_62) > p_62)))
        { /* block id: 19 */
            uint16_t l_104 = 0x93E8L;
            int32_t *l_109 = (void*)0;
            int16_t l_110 = 0x27E5L;
            uint16_t *l_111 = (void*)0;
            uint16_t *l_112 = (void*)0;
            uint16_t *l_113 = &l_86[4][1].f0;
            int32_t *l_114 = &l_78;
            for (p_980->g_68 = 19; (p_980->g_68 < 51); p_980->g_68++)
            { /* block id: 22 */
                return &p_980->g_55;
            }
            (*p_63) = ((*l_114) &= ((p_980->g_75.y || ((*l_74) = ((l_74 == l_74) >= ((safe_mod_func_int32_t_s_s(((((~((*l_113) = (((void*)0 != &p_980->g_55) == ((((p_62 | (l_104 , (safe_rshift_func_int16_t_s_s(((p_980->g_68 < ((VECTOR(int32_t, 16))(l_107.xyxxyyxyxyyxyxxx)).s7) == ((p_980->g_108 , (void*)0) == l_109)), 12)))) | l_110) != p_62) && p_980->g_20.s2)))) >= l_94[2][6]) > 6UL) & (*p_64)), l_94[2][8])) > p_980->g_55)))) > 0L));
            (*p_63) &= ((safe_add_func_int64_t_s_s(((GROUP_DIVERGE(2, 1) , &p_980->g_28) != l_74), p_62)) >= ((VECTOR(uint16_t, 4))(65535UL, p_980->g_comm_values[p_980->tid], 0x3BF6L, 0x4B56L)).y);
        }
        else
        { /* block id: 30 */
            int32_t *l_117[9][2][8] = {{{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0},{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0}},{{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0},{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0}},{{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0},{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0}},{{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0},{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0}},{{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0},{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0}},{{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0},{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0}},{{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0},{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0}},{{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0},{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0}},{{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0},{(void*)0,&p_980->g_55,(void*)0,&l_78,&l_94[3][5],&p_980->g_55,(void*)0,(void*)0}}};
            uint8_t l_120 = 0xD7L;
            int32_t *l_123 = &p_980->g_124;
            uint32_t **l_126 = (void*)0;
            uint32_t **l_127 = &l_125;
            int32_t *l_190 = (void*)0;
            int i, j, k;
            l_120++;
            if ((p_62 & (p_980->g_41 , ((((*l_123) = p_62) , ((*p_63) = ((((*l_127) = l_125) != &p_980->g_68) , (*p_63)))) != ((VECTOR(int32_t, 16))(p_980->g_128.s5325006241646575)).s1))))
            { /* block id: 35 */
                uint32_t l_146 = 4294967295UL;
                int32_t l_152 = (-1L);
                int32_t l_153 = 0x79259F18L;
                int32_t l_187 = 1L;
                VECTOR(uint32_t, 16) l_249 = (VECTOR(uint32_t, 16))(0x7BC30966L, (VECTOR(uint32_t, 4))(0x7BC30966L, (VECTOR(uint32_t, 2))(0x7BC30966L, 0x5E0286AFL), 0x5E0286AFL), 0x5E0286AFL, 0x7BC30966L, 0x5E0286AFL, (VECTOR(uint32_t, 2))(0x7BC30966L, 0x5E0286AFL), (VECTOR(uint32_t, 2))(0x7BC30966L, 0x5E0286AFL), 0x7BC30966L, 0x5E0286AFL, 0x7BC30966L, 0x5E0286AFL);
                int i;
                for (p_980->g_55 = 0; (p_980->g_55 == 9); p_980->g_55 = safe_add_func_uint16_t_u_u(p_980->g_55, 9))
                { /* block id: 38 */
                    uint16_t *l_142[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                    int8_t *l_158 = (void*)0;
                    int8_t *l_159 = (void*)0;
                    int8_t *l_160 = (void*)0;
                    int8_t *l_161[6][5][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int32_t **l_162[7] = {&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6]};
                    int32_t *l_183 = &p_980->g_184[4];
                    int64_t *l_185 = &p_980->g_151;
                    uint8_t l_186 = 8UL;
                    int i, j, k;
                    (*p_980->g_132) = (p_980->g_124 , &p_62);
                    (*p_980->g_132) = ((safe_mul_func_uint16_t_u_u((((((p_980->g_66.s7 = (safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(0x6A11L, (safe_mul_func_uint8_t_u_u((((l_94[0][9] = ((p_980->g_119 > (p_980->g_143--)) , ((l_146 , l_127) == (void*)0))) | (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(1UL, l_146)), (++l_154)))) && p_980->g_66.s4), p_980->g_68)))), p_980->g_157))) == 0x00L) < p_62) , &l_153) != &p_980->g_55), p_62)) , (void*)0);
                    l_187 &= ((safe_div_func_int32_t_s_s((l_94[2][6] = (safe_lshift_func_uint16_t_u_u((GROUP_DIVERGE(1, 1) != (safe_div_func_int32_t_s_s(((*p_64) |= (((p_62 ^ ((*l_185) ^= (safe_mul_func_int8_t_s_s(0x6EL, ((((VECTOR(uint64_t, 16))(l_171.yyyyxxyxyyxxyxxx)).s9 < ((safe_lshift_func_uint16_t_u_s((((*l_183) = (safe_div_func_uint8_t_u_u((((void*)0 != l_117[1][0][5]) >= (((VECTOR(uint64_t, 16))((safe_mul_func_int16_t_s_s(l_152, (safe_sub_func_int16_t_s_s(0x2F38L, (safe_mod_func_int16_t_s_s(((&p_980->g_108 != l_182) & (p_980->g_66.s4 = p_62)), p_980->g_55)))))), l_79.z, ((VECTOR(uint64_t, 2))(0x15EDD2B928BA4243L)), ((VECTOR(uint64_t, 8))(9UL)), GROUP_DIVERGE(0, 1), 18446744073709551615UL, 0x009605B784680F40L, 9UL)).s0 , p_980->g_157)), (*p_980->g_39)))) , l_95.y), p_62)) < p_980->l_comm_values[(safe_mod_func_uint32_t_u_u(p_980->tid, 102))])) != p_62))))) , l_154) || p_62)), GROUP_DIVERGE(2, 1)))), p_62))), l_95.x)) , l_186);
                    return l_190;
                }
                for (p_980->g_28 = 27; (p_980->g_28 < (-15)); p_980->g_28--)
                { /* block id: 55 */
                    uint16_t *l_197[2][9][1] = {{{&l_86[4][1].f0},{&l_86[4][1].f0},{&l_86[4][1].f0},{&l_86[4][1].f0},{&l_86[4][1].f0},{&l_86[4][1].f0},{&l_86[4][1].f0},{&l_86[4][1].f0},{&l_86[4][1].f0}},{{&l_86[4][1].f0},{&l_86[4][1].f0},{&l_86[4][1].f0},{&l_86[4][1].f0},{&l_86[4][1].f0},{&l_86[4][1].f0},{&l_86[4][1].f0},{&l_86[4][1].f0},{&l_86[4][1].f0}}};
                    int64_t *l_204 = (void*)0;
                    int64_t *l_206 = (void*)0;
                    int64_t **l_205 = &l_206;
                    uint64_t *l_211 = &p_980->g_212;
                    int8_t l_218[4][9] = {{0x62L,0x62L,1L,(-7L),0x57L,0x6DL,(-7L),0x74L,(-7L)},{0x62L,0x62L,1L,(-7L),0x57L,0x6DL,(-7L),0x74L,(-7L)},{0x62L,0x62L,1L,(-7L),0x57L,0x6DL,(-7L),0x74L,(-7L)},{0x62L,0x62L,1L,(-7L),0x57L,0x6DL,(-7L),0x74L,(-7L)}};
                    VECTOR(int64_t, 8) l_228 = (VECTOR(int64_t, 8))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 0x4D05746449A1E4A7L), 0x4D05746449A1E4A7L), 0x4D05746449A1E4A7L, 4L, 0x4D05746449A1E4A7L);
                    VECTOR(uint32_t, 16) l_241 = (VECTOR(uint32_t, 16))(0xA61A3907L, (VECTOR(uint32_t, 4))(0xA61A3907L, (VECTOR(uint32_t, 2))(0xA61A3907L, 0x4197A70FL), 0x4197A70FL), 0x4197A70FL, 0xA61A3907L, 0x4197A70FL, (VECTOR(uint32_t, 2))(0xA61A3907L, 0x4197A70FL), (VECTOR(uint32_t, 2))(0xA61A3907L, 0x4197A70FL), 0xA61A3907L, 0x4197A70FL, 0xA61A3907L, 0x4197A70FL);
                    int32_t **l_275 = (void*)0;
                    int i, j, k;
                    (*p_64) ^= (safe_rshift_func_uint8_t_u_s(((0x6988L != (GROUP_DIVERGE(0, 1) && (safe_add_func_uint32_t_u_u(((p_980->g_199--) < ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((safe_rshift_func_int16_t_s_u((((l_86[4][1] , l_204) != ((*l_205) = &p_980->g_151)) , (GROUP_DIVERGE(2, 1) , p_62)), 4)) >= (safe_mul_func_int8_t_s_s(((((*l_211) = (safe_lshift_func_int16_t_s_u(l_146, 9))) , (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_215.xyyyyxyxyyxyxxxy)).s8d)), 0x59L, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(p_980->g_216.ww)), ((VECTOR(int8_t, 8))(l_217.zxwwxwwy)).s77))), ((p_62 , l_117[3][0][0]) != &p_980->g_184[0]), (-1L), 0x2DL)))).s5, (-1L)))) , l_218[2][2]), 2UL))), 0x707CL, ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 4))(0L)), p_62, 0x1AC1L, (-1L), ((VECTOR(int16_t, 2))(0x7453L)), (-2L))).lo)).s06)), 0x2743L, 0x111FL, 0x4FA1L, 1L, 5L, 1L)))).s3), 0x5DD7CDD8L)))) == p_980->g_93), (*l_188)));
                    for (p_980->g_151 = 0; (p_980->g_151 >= (-23)); p_980->g_151--)
                    { /* block id: 62 */
                        int32_t *l_234[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_234[i] = (void*)0;
                        (*l_188) = (((safe_unary_minus_func_int16_t_s(0x6EE7L)) != (safe_sub_func_int8_t_s_s(((l_218[2][2] , 0L) ^ (safe_sub_func_uint8_t_u_u((*p_980->g_39), ((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(p_980->g_226.zyzzxwwxzzyxwzzw)))).s5 | (((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 4))(l_227.s1ba1)), ((VECTOR(int64_t, 16))(l_228.s1021512435034413)).s950c, ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 16))(p_980->g_229.s2276622332040156)).s1086, ((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(0x2289612D35162C1FL, (safe_rshift_func_uint16_t_u_u((((0x4602127CL | (((p_62 , (((safe_add_func_int16_t_s_s(l_218[2][6], ((l_218[2][2] ^ p_62) , l_218[2][0]))) || p_62) | 0x4F9EC15FA3F53466L)) | (*l_189)) ^ 0x880CL)) | (*l_188)) | (-7L)), l_228.s5)), 0L, 0x47653ECA8A1A81AFL)).xywwzwwwzzyyyywy)).s13, ((VECTOR(int64_t, 2))(0x4ED98FD706E587C2L)), ((VECTOR(int64_t, 2))((-3L)))))).yyxyyxxxyyyxyxyy, ((VECTOR(int64_t, 16))(0L))))).s2381)))))).x , p_980->g_20.sb)) | (*l_188))))), 0x6DL))) > (*p_63));
                        return l_234[2];
                    }
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_980->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 102)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(p_980->g_235.yyyyxyyyxyyyxyxy)).s6, 10))][(safe_mod_func_uint32_t_u_u(p_980->tid, 102))]));
                    for (p_980->g_199 = 0; (p_980->g_199 != 20); p_980->g_199++)
                    { /* block id: 71 */
                        int64_t **l_248[5][8] = {{(void*)0,&l_204,&l_204,(void*)0,&l_204,&l_204,&l_204,&l_204},{(void*)0,&l_204,&l_204,(void*)0,&l_204,&l_204,&l_204,&l_204},{(void*)0,&l_204,&l_204,(void*)0,&l_204,&l_204,&l_204,&l_204},{(void*)0,&l_204,&l_204,(void*)0,&l_204,&l_204,&l_204,&l_204},{(void*)0,&l_204,&l_204,(void*)0,&l_204,&l_204,&l_204,&l_204}};
                        union U0 **l_252 = &l_182;
                        VECTOR(int32_t, 4) l_261 = (VECTOR(int32_t, 4))(0x33B5990AL, (VECTOR(int32_t, 2))(0x33B5990AL, 1L), 1L);
                        int32_t **l_274 = &p_980->g_133[5][0];
                        int32_t ***l_273 = &l_274;
                        int8_t *l_276 = (void*)0;
                        int32_t l_277 = (-1L);
                        int i, j;
                        (*p_980->g_239) = (*p_980->g_132);
                        (*p_64) = ((((((((VECTOR(int32_t, 4))(p_980->g_240.wxxz)).w , ((((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_241.sa912836b3a9fc1b6)).s18)).odd == (((safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(p_980->g_243.wzyzwxxwxwzxxwxx)))).sb)) == (safe_rshift_func_int8_t_s_u((p_62 > (safe_sub_func_int8_t_s_s(5L, (l_248[0][2] != &l_204)))), 7))) | (((*l_252) = (((VECTOR(uint32_t, 16))(l_249.s9661fed1fcf93bfc)).s3 , l_250)) == &p_980->g_251[6][5][2]))) ^ 0x6E645156L) && (safe_add_func_int64_t_s_s(0L, (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_add_func_int64_t_s_s((0UL && 5UL), 0UL)) , p_62), p_62)), (**p_980->g_239)))))) > 2L)) == 0x42L) && l_261.y) ^ p_980->g_143) , p_980->g_262) , 1L);
                        ++l_263;
                        l_277 = ((safe_sub_func_int8_t_s_s((((((*l_273) = ((safe_unary_minus_func_uint32_t_u((safe_mul_func_uint16_t_u_u((~(safe_rshift_func_uint8_t_u_s((*p_980->g_39), 3))), p_980->g_9.y)))) , &p_64)) == (void*)0) , l_275) == &p_980->g_133[5][9]), p_62)) & (p_980->g_66.s4 = ((&l_250 != (((((void*)0 == l_273) & p_980->g_124) || p_980->g_40) , (void*)0)) <= l_249.s9)));
                    }
                }
            }
            else
            { /* block id: 81 */
                int32_t **l_302[5][4][4] = {{{&p_980->g_133[5][9],&l_190,(void*)0,&l_189},{&p_980->g_133[5][9],&l_190,(void*)0,&l_189},{&p_980->g_133[5][9],&l_190,(void*)0,&l_189},{&p_980->g_133[5][9],&l_190,(void*)0,&l_189}},{{&p_980->g_133[5][9],&l_190,(void*)0,&l_189},{&p_980->g_133[5][9],&l_190,(void*)0,&l_189},{&p_980->g_133[5][9],&l_190,(void*)0,&l_189},{&p_980->g_133[5][9],&l_190,(void*)0,&l_189}},{{&p_980->g_133[5][9],&l_190,(void*)0,&l_189},{&p_980->g_133[5][9],&l_190,(void*)0,&l_189},{&p_980->g_133[5][9],&l_190,(void*)0,&l_189},{&p_980->g_133[5][9],&l_190,(void*)0,&l_189}},{{&p_980->g_133[5][9],&l_190,(void*)0,&l_189},{&p_980->g_133[5][9],&l_190,(void*)0,&l_189},{&p_980->g_133[5][9],&l_190,(void*)0,&l_189},{&p_980->g_133[5][9],&l_190,(void*)0,&l_189}},{{&p_980->g_133[5][9],&l_190,(void*)0,&l_189},{&p_980->g_133[5][9],&l_190,(void*)0,&l_189},{&p_980->g_133[5][9],&l_190,(void*)0,&l_189},{&p_980->g_133[5][9],&l_190,(void*)0,&l_189}}};
                int i, j, k;
                if ((atomic_inc(&p_980->l_atomic_input[9]) == 6))
                { /* block id: 83 */
                    int32_t l_279 = (-1L);
                    int32_t *l_278[3];
                    int32_t *l_280 = (void*)0;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_278[i] = &l_279;
                    l_280 = l_278[1];
                    for (l_279 = 2; (l_279 == 22); l_279 = safe_add_func_uint8_t_u_u(l_279, 5))
                    { /* block id: 87 */
                        int32_t l_284 = 0x1903CBE5L;
                        int32_t *l_283 = &l_284;
                        int64_t l_285[10] = {0x0528DDE3FCD28662L,0x0528DDE3FCD28662L,0x0528DDE3FCD28662L,0x0528DDE3FCD28662L,0x0528DDE3FCD28662L,0x0528DDE3FCD28662L,0x0528DDE3FCD28662L,0x0528DDE3FCD28662L,0x0528DDE3FCD28662L,0x0528DDE3FCD28662L};
                        uint32_t l_286 = 4294967286UL;
                        int64_t l_289 = 1L;
                        uint8_t l_290 = 248UL;
                        uint8_t l_293 = 4UL;
                        int i;
                        l_280 = (l_278[2] = (l_283 = l_283));
                        l_286--;
                        --l_290;
                        l_293++;
                    }
                    unsigned int result = 0;
                    result += l_279;
                    atomic_add(&p_980->l_special_values[9], result);
                }
                else
                { /* block id: 95 */
                    (1 + 1);
                }
                if ((atomic_inc(&p_980->g_atomic_input[18 * get_linear_group_id() + 11]) == 8))
                { /* block id: 99 */
                    int32_t l_296 = 0x12E31E6CL;
                    int32_t l_297 = 0x1A3492D3L;
                    l_297 |= l_296;
                    for (l_297 = 0; (l_297 < 4); l_297 = safe_add_func_int32_t_s_s(l_297, 5))
                    { /* block id: 103 */
                        int8_t l_300 = 0x4AL;
                        int8_t l_301 = 0x54L;
                        l_296 = l_300;
                        l_296 = l_301;
                    }
                    unsigned int result = 0;
                    result += l_296;
                    result += l_297;
                    atomic_add(&p_980->g_special_values[18 * get_linear_group_id() + 11], result);
                }
                else
                { /* block id: 107 */
                    (1 + 1);
                }
                l_189 = l_123;
                p_63 = (p_64 = &p_62);
            }
        }
        for (p_980->g_124 = 0; (p_980->g_124 > (-26)); p_980->g_124 = safe_sub_func_uint16_t_u_u(p_980->g_124, 9))
        { /* block id: 117 */
            uint32_t l_305 = 4294967287UL;
            if (l_305)
                break;
        }
        (*l_189) = (((p_980->g_41 , &l_94[2][6]) == ((*l_306) = &p_62)) && (((**l_306) = (safe_rshift_func_uint8_t_u_u((p_62 | (&l_78 != (void*)0)), 1))) || (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(0x98E15A50L, ((VECTOR(uint32_t, 2))(l_311.s22)), 0x7BD63F95L)), 0xDB46A761L, ((VECTOR(uint32_t, 2))(l_312.s00)), 4294967295UL)).s1, (((safe_mul_func_uint16_t_u_u((p_980->g_243.z = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 8))((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0x6688L, ((*l_331) = ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((FAKE_DIVERGE(p_980->group_0_offset, get_group_id(0), 10) > (((safe_lshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((p_980->g_143 & ((((*p_63) != (**l_306)) ^ 0x15658D50L) & p_980->g_229.s6)) ^ 4L), p_980->g_40)), 0x52L)) || p_980->g_226.y), 15)) | 0L) , p_62)), p_62)), 5)) || (**l_306))))), (*l_189))), FAKE_DIVERGE(p_980->local_1_offset, get_local_id(1), 10), ((VECTOR(uint32_t, 4))(0x060D448FL)), 0x10DD68ACL, 0xBAA9BFF9L)), ((VECTOR(uint32_t, 8))(1UL))))).even)).lo)).odd || (**l_306))), p_62)) > (*p_64)) , p_62)))));
    }
    else
    { /* block id: 125 */
        return (*p_980->g_132);
    }
    (*p_63) = ((p_980->g_229.s3 > (((*l_189) >= (*l_189)) > 0x4F09820AL)) >= ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 2))(l_337.wz)).xyxx, ((VECTOR(uint16_t, 4))(l_338.s2233))))).y);
    (*p_64) |= (safe_rshift_func_uint16_t_u_s((l_341[3][0][2] == l_341[1][0][4]), 6));
    (*p_64) &= (l_342[2] == (l_344 = &l_343));
    return (*p_980->g_132);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[18];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 18; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[18];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 18; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[102];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 102; i++)
            l_comm_values[i] = 1;
    struct S3 c_981;
    struct S3* p_980 = &c_981;
    struct S3 c_982 = {
        (VECTOR(int8_t, 2))(0x1FL, 0x01L), // p_980->g_9
        (VECTOR(int32_t, 16))(0x1C77DCDAL, (VECTOR(int32_t, 4))(0x1C77DCDAL, (VECTOR(int32_t, 2))(0x1C77DCDAL, 0x09C3997BL), 0x09C3997BL), 0x09C3997BL, 0x1C77DCDAL, 0x09C3997BL, (VECTOR(int32_t, 2))(0x1C77DCDAL, 0x09C3997BL), (VECTOR(int32_t, 2))(0x1C77DCDAL, 0x09C3997BL), 0x1C77DCDAL, 0x09C3997BL, 0x1C77DCDAL, 0x09C3997BL), // p_980->g_20
        0x34D2L, // p_980->g_28
        0x36L, // p_980->g_30
        0xBCL, // p_980->g_40
        &p_980->g_40, // p_980->g_39
        {0xAEBBL}, // p_980->g_41
        0x17005583L, // p_980->g_55
        (VECTOR(int8_t, 8))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x31L), 0x31L), 0x31L, (-9L), 0x31L), // p_980->g_66
        1UL, // p_980->g_68
        (VECTOR(int16_t, 2))(0x64E2L, (-3L)), // p_980->g_75
        250UL, // p_980->g_93
        {8L}, // p_980->g_108
        0x07AE741EL, // p_980->g_119
        0x3CF237C9L, // p_980->g_124
        (VECTOR(int32_t, 8))(0x45A20AEDL, (VECTOR(int32_t, 4))(0x45A20AEDL, (VECTOR(int32_t, 2))(0x45A20AEDL, 0x1C7F72D5L), 0x1C7F72D5L), 0x1C7F72D5L, 0x45A20AEDL, 0x1C7F72D5L), // p_980->g_128
        (void*)0, // p_980->g_131
        {{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55},{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55},{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55},{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55},{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55},{&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55,&p_980->g_55}}, // p_980->g_133
        &p_980->g_133[0][6], // p_980->g_132
        0x15L, // p_980->g_143
        (-9L), // p_980->g_151
        1L, // p_980->g_157
        {(-10L),(-10L),(-10L),(-10L),(-10L)}, // p_980->g_184
        {{{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL}},{{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL}},{{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL}},{{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL}},{{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL},{(-1L),1L,0x5AL,0x07L,0x5AL}}}, // p_980->g_198
        4294967295UL, // p_980->g_199
        0UL, // p_980->g_212
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L)), // p_980->g_216
        (VECTOR(int64_t, 4))(0x0445573C2ED2992FL, (VECTOR(int64_t, 2))(0x0445573C2ED2992FL, 0L), 0L), // p_980->g_226
        (VECTOR(int64_t, 8))(0x116C565AADB8AA75L, (VECTOR(int64_t, 4))(0x116C565AADB8AA75L, (VECTOR(int64_t, 2))(0x116C565AADB8AA75L, 8L), 8L), 8L, 0x116C565AADB8AA75L, 8L), // p_980->g_229
        (VECTOR(uint32_t, 2))(0UL, 0x113E96B6L), // p_980->g_235
        (void*)0, // p_980->g_238
        &p_980->g_133[0][6], // p_980->g_239
        (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x69FFF4F0L), 0x69FFF4F0L), // p_980->g_240
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x90CFL), 0x90CFL), // p_980->g_243
        {{{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}}},{{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}}},{{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}}},{{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}}},{{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}}},{{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}}},{{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}}},{{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}}},{{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}},{{0x1541L},{0x60E7L},{0x5808L},{0x3857L}}}}, // p_980->g_251
        {0L}, // p_980->g_262
        (void*)0, // p_980->g_364
        18446744073709551606UL, // p_980->g_375
        (VECTOR(uint8_t, 2))(0x0BL, 8UL), // p_980->g_377
        {0L}, // p_980->g_389
        &p_980->g_389, // p_980->g_388
        &p_980->g_388, // p_980->g_404
        &p_980->g_55, // p_980->g_409
        {{-1L},{-1L},{-1L},{-1L}}, // p_980->g_427
        (VECTOR(uint64_t, 8))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 0x9C461FC064E08858L), 0x9C461FC064E08858L), 0x9C461FC064E08858L, 2UL, 0x9C461FC064E08858L), // p_980->g_447
        0UL, // p_980->g_449
        0x6270C26DL, // p_980->g_456
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), 0UL, 4294967295UL, 0UL), // p_980->g_468
        (VECTOR(int64_t, 16))(0x3018C0BB32C38627L, (VECTOR(int64_t, 4))(0x3018C0BB32C38627L, (VECTOR(int64_t, 2))(0x3018C0BB32C38627L, (-1L)), (-1L)), (-1L), 0x3018C0BB32C38627L, (-1L), (VECTOR(int64_t, 2))(0x3018C0BB32C38627L, (-1L)), (VECTOR(int64_t, 2))(0x3018C0BB32C38627L, (-1L)), 0x3018C0BB32C38627L, (-1L), 0x3018C0BB32C38627L, (-1L)), // p_980->g_482
        (VECTOR(int8_t, 4))(0x0BL, (VECTOR(int8_t, 2))(0x0BL, (-4L)), (-4L)), // p_980->g_485
        3L, // p_980->g_488
        (VECTOR(int8_t, 16))(0x21L, (VECTOR(int8_t, 4))(0x21L, (VECTOR(int8_t, 2))(0x21L, 0x76L), 0x76L), 0x76L, 0x21L, 0x76L, (VECTOR(int8_t, 2))(0x21L, 0x76L), (VECTOR(int8_t, 2))(0x21L, 0x76L), 0x21L, 0x76L, 0x21L, 0x76L), // p_980->g_497
        (VECTOR(int8_t, 8))(0x7DL, (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, 0x4AL), 0x4AL), 0x4AL, 0x7DL, 0x4AL), // p_980->g_503
        {-1L}, // p_980->g_513
        &p_980->g_39, // p_980->g_518
        (void*)0, // p_980->g_525
        &p_980->g_525, // p_980->g_524
        &p_980->g_55, // p_980->g_528
        {0x5A1B0666L}, // p_980->g_550
        &p_980->g_133[0][6], // p_980->g_649
        {{{&p_980->g_133[2][3],&p_980->g_133[1][9],&p_980->g_133[0][8],&p_980->g_133[0][8],&p_980->g_133[1][9],&p_980->g_133[2][3],(void*)0,&p_980->g_133[2][1],(void*)0,(void*)0}},{{&p_980->g_133[2][3],&p_980->g_133[1][9],&p_980->g_133[0][8],&p_980->g_133[0][8],&p_980->g_133[1][9],&p_980->g_133[2][3],(void*)0,&p_980->g_133[2][1],(void*)0,(void*)0}},{{&p_980->g_133[2][3],&p_980->g_133[1][9],&p_980->g_133[0][8],&p_980->g_133[0][8],&p_980->g_133[1][9],&p_980->g_133[2][3],(void*)0,&p_980->g_133[2][1],(void*)0,(void*)0}},{{&p_980->g_133[2][3],&p_980->g_133[1][9],&p_980->g_133[0][8],&p_980->g_133[0][8],&p_980->g_133[1][9],&p_980->g_133[2][3],(void*)0,&p_980->g_133[2][1],(void*)0,(void*)0}},{{&p_980->g_133[2][3],&p_980->g_133[1][9],&p_980->g_133[0][8],&p_980->g_133[0][8],&p_980->g_133[1][9],&p_980->g_133[2][3],(void*)0,&p_980->g_133[2][1],(void*)0,(void*)0}},{{&p_980->g_133[2][3],&p_980->g_133[1][9],&p_980->g_133[0][8],&p_980->g_133[0][8],&p_980->g_133[1][9],&p_980->g_133[2][3],(void*)0,&p_980->g_133[2][1],(void*)0,(void*)0}},{{&p_980->g_133[2][3],&p_980->g_133[1][9],&p_980->g_133[0][8],&p_980->g_133[0][8],&p_980->g_133[1][9],&p_980->g_133[2][3],(void*)0,&p_980->g_133[2][1],(void*)0,(void*)0}}}, // p_980->g_656
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551613UL), 18446744073709551613UL), 18446744073709551613UL, 1UL, 18446744073709551613UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551613UL), (VECTOR(uint64_t, 2))(1UL, 18446744073709551613UL), 1UL, 18446744073709551613UL, 1UL, 18446744073709551613UL), // p_980->g_661
        (VECTOR(int8_t, 16))(0x6CL, (VECTOR(int8_t, 4))(0x6CL, (VECTOR(int8_t, 2))(0x6CL, 0x69L), 0x69L), 0x69L, 0x6CL, 0x69L, (VECTOR(int8_t, 2))(0x6CL, 0x69L), (VECTOR(int8_t, 2))(0x6CL, 0x69L), 0x6CL, 0x69L, 0x6CL, 0x69L), // p_980->g_668
        (VECTOR(int8_t, 16))(0x4EL, (VECTOR(int8_t, 4))(0x4EL, (VECTOR(int8_t, 2))(0x4EL, 7L), 7L), 7L, 0x4EL, 7L, (VECTOR(int8_t, 2))(0x4EL, 7L), (VECTOR(int8_t, 2))(0x4EL, 7L), 0x4EL, 7L, 0x4EL, 7L), // p_980->g_669
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x31L), 0x31L), // p_980->g_673
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L), // p_980->g_675
        {6L}, // p_980->g_681
        {&p_980->g_388,&p_980->g_388,&p_980->g_388,&p_980->g_388,&p_980->g_388,&p_980->g_388,&p_980->g_388,&p_980->g_388,&p_980->g_388,&p_980->g_388}, // p_980->g_682
        &p_980->g_388, // p_980->g_683
        &p_980->g_55, // p_980->g_710
        (VECTOR(uint32_t, 2))(0x36511066L, 9UL), // p_980->g_717
        &p_980->g_55, // p_980->g_718
        &p_980->g_55, // p_980->g_727
        (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 1L), 1L), 1L, 7L, 1L, (VECTOR(int32_t, 2))(7L, 1L), (VECTOR(int32_t, 2))(7L, 1L), 7L, 1L, 7L, 1L), // p_980->g_754
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L), // p_980->g_756
        (-1L), // p_980->g_760
        0x6BCEL, // p_980->g_777
        &p_980->g_133[0][6], // p_980->g_793
        &p_980->g_133[3][3], // p_980->g_806
        (void*)0, // p_980->g_826
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-2L)), (-2L)), (-2L), 0L, (-2L)), // p_980->g_846
        (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 251UL), 251UL), // p_980->g_854
        (VECTOR(uint32_t, 8))(0xA561A860L, (VECTOR(uint32_t, 4))(0xA561A860L, (VECTOR(uint32_t, 2))(0xA561A860L, 4294967295UL), 4294967295UL), 4294967295UL, 0xA561A860L, 4294967295UL), // p_980->g_855
        (VECTOR(int64_t, 4))(0x7FFB2BB8A8B1D068L, (VECTOR(int64_t, 2))(0x7FFB2BB8A8B1D068L, 0L), 0L), // p_980->g_878
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x4A45A29C70F2D268L), 0x4A45A29C70F2D268L), 0x4A45A29C70F2D268L, (-1L), 0x4A45A29C70F2D268L), // p_980->g_879
        (VECTOR(int64_t, 16))((-6L), (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), 0x54F6234D29341D2CL), 0x54F6234D29341D2CL), 0x54F6234D29341D2CL, (-6L), 0x54F6234D29341D2CL, (VECTOR(int64_t, 2))((-6L), 0x54F6234D29341D2CL), (VECTOR(int64_t, 2))((-6L), 0x54F6234D29341D2CL), (-6L), 0x54F6234D29341D2CL, (-6L), 0x54F6234D29341D2CL), // p_980->g_880
        (VECTOR(int64_t, 16))(0x3AB4EEBEF3235230L, (VECTOR(int64_t, 4))(0x3AB4EEBEF3235230L, (VECTOR(int64_t, 2))(0x3AB4EEBEF3235230L, 0x0D577E0CC9BB8248L), 0x0D577E0CC9BB8248L), 0x0D577E0CC9BB8248L, 0x3AB4EEBEF3235230L, 0x0D577E0CC9BB8248L, (VECTOR(int64_t, 2))(0x3AB4EEBEF3235230L, 0x0D577E0CC9BB8248L), (VECTOR(int64_t, 2))(0x3AB4EEBEF3235230L, 0x0D577E0CC9BB8248L), 0x3AB4EEBEF3235230L, 0x0D577E0CC9BB8248L, 0x3AB4EEBEF3235230L, 0x0D577E0CC9BB8248L), // p_980->g_884
        0x97L, // p_980->g_887
        {{&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6]},{&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6]},{&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6]},{&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6]},{&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6]},{&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6]},{&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6]},{&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6]},{&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6],&p_980->g_133[0][6]}}, // p_980->g_889
        &p_980->g_133[0][6], // p_980->g_890
        {0x58DAL}, // p_980->g_900
        18446744073709551610UL, // p_980->g_949
        (-1L), // p_980->g_957
        0UL, // p_980->g_959
        0, // p_980->v_collective
        sequence_input[get_global_id(0)], // p_980->global_0_offset
        sequence_input[get_global_id(1)], // p_980->global_1_offset
        sequence_input[get_global_id(2)], // p_980->global_2_offset
        sequence_input[get_local_id(0)], // p_980->local_0_offset
        sequence_input[get_local_id(1)], // p_980->local_1_offset
        sequence_input[get_local_id(2)], // p_980->local_2_offset
        sequence_input[get_group_id(0)], // p_980->group_0_offset
        sequence_input[get_group_id(1)], // p_980->group_1_offset
        sequence_input[get_group_id(2)], // p_980->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 102)), permutations[0][get_linear_local_id()])), // p_980->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_981 = c_982;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_980);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_980->g_9.x, "p_980->g_9.x", print_hash_value);
    transparent_crc(p_980->g_9.y, "p_980->g_9.y", print_hash_value);
    transparent_crc(p_980->g_20.s0, "p_980->g_20.s0", print_hash_value);
    transparent_crc(p_980->g_20.s1, "p_980->g_20.s1", print_hash_value);
    transparent_crc(p_980->g_20.s2, "p_980->g_20.s2", print_hash_value);
    transparent_crc(p_980->g_20.s3, "p_980->g_20.s3", print_hash_value);
    transparent_crc(p_980->g_20.s4, "p_980->g_20.s4", print_hash_value);
    transparent_crc(p_980->g_20.s5, "p_980->g_20.s5", print_hash_value);
    transparent_crc(p_980->g_20.s6, "p_980->g_20.s6", print_hash_value);
    transparent_crc(p_980->g_20.s7, "p_980->g_20.s7", print_hash_value);
    transparent_crc(p_980->g_20.s8, "p_980->g_20.s8", print_hash_value);
    transparent_crc(p_980->g_20.s9, "p_980->g_20.s9", print_hash_value);
    transparent_crc(p_980->g_20.sa, "p_980->g_20.sa", print_hash_value);
    transparent_crc(p_980->g_20.sb, "p_980->g_20.sb", print_hash_value);
    transparent_crc(p_980->g_20.sc, "p_980->g_20.sc", print_hash_value);
    transparent_crc(p_980->g_20.sd, "p_980->g_20.sd", print_hash_value);
    transparent_crc(p_980->g_20.se, "p_980->g_20.se", print_hash_value);
    transparent_crc(p_980->g_20.sf, "p_980->g_20.sf", print_hash_value);
    transparent_crc(p_980->g_28, "p_980->g_28", print_hash_value);
    transparent_crc(p_980->g_30, "p_980->g_30", print_hash_value);
    transparent_crc(p_980->g_40, "p_980->g_40", print_hash_value);
    transparent_crc(p_980->g_41.f2, "p_980->g_41.f2", print_hash_value);
    transparent_crc(p_980->g_55, "p_980->g_55", print_hash_value);
    transparent_crc(p_980->g_66.s0, "p_980->g_66.s0", print_hash_value);
    transparent_crc(p_980->g_66.s1, "p_980->g_66.s1", print_hash_value);
    transparent_crc(p_980->g_66.s2, "p_980->g_66.s2", print_hash_value);
    transparent_crc(p_980->g_66.s3, "p_980->g_66.s3", print_hash_value);
    transparent_crc(p_980->g_66.s4, "p_980->g_66.s4", print_hash_value);
    transparent_crc(p_980->g_66.s5, "p_980->g_66.s5", print_hash_value);
    transparent_crc(p_980->g_66.s6, "p_980->g_66.s6", print_hash_value);
    transparent_crc(p_980->g_66.s7, "p_980->g_66.s7", print_hash_value);
    transparent_crc(p_980->g_68, "p_980->g_68", print_hash_value);
    transparent_crc(p_980->g_75.x, "p_980->g_75.x", print_hash_value);
    transparent_crc(p_980->g_75.y, "p_980->g_75.y", print_hash_value);
    transparent_crc(p_980->g_93, "p_980->g_93", print_hash_value);
    transparent_crc(p_980->g_108.f0, "p_980->g_108.f0", print_hash_value);
    transparent_crc(p_980->g_119, "p_980->g_119", print_hash_value);
    transparent_crc(p_980->g_124, "p_980->g_124", print_hash_value);
    transparent_crc(p_980->g_128.s0, "p_980->g_128.s0", print_hash_value);
    transparent_crc(p_980->g_128.s1, "p_980->g_128.s1", print_hash_value);
    transparent_crc(p_980->g_128.s2, "p_980->g_128.s2", print_hash_value);
    transparent_crc(p_980->g_128.s3, "p_980->g_128.s3", print_hash_value);
    transparent_crc(p_980->g_128.s4, "p_980->g_128.s4", print_hash_value);
    transparent_crc(p_980->g_128.s5, "p_980->g_128.s5", print_hash_value);
    transparent_crc(p_980->g_128.s6, "p_980->g_128.s6", print_hash_value);
    transparent_crc(p_980->g_128.s7, "p_980->g_128.s7", print_hash_value);
    transparent_crc(p_980->g_143, "p_980->g_143", print_hash_value);
    transparent_crc(p_980->g_151, "p_980->g_151", print_hash_value);
    transparent_crc(p_980->g_157, "p_980->g_157", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_980->g_184[i], "p_980->g_184[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_980->g_198[i][j][k], "p_980->g_198[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_980->g_199, "p_980->g_199", print_hash_value);
    transparent_crc(p_980->g_212, "p_980->g_212", print_hash_value);
    transparent_crc(p_980->g_216.x, "p_980->g_216.x", print_hash_value);
    transparent_crc(p_980->g_216.y, "p_980->g_216.y", print_hash_value);
    transparent_crc(p_980->g_216.z, "p_980->g_216.z", print_hash_value);
    transparent_crc(p_980->g_216.w, "p_980->g_216.w", print_hash_value);
    transparent_crc(p_980->g_226.x, "p_980->g_226.x", print_hash_value);
    transparent_crc(p_980->g_226.y, "p_980->g_226.y", print_hash_value);
    transparent_crc(p_980->g_226.z, "p_980->g_226.z", print_hash_value);
    transparent_crc(p_980->g_226.w, "p_980->g_226.w", print_hash_value);
    transparent_crc(p_980->g_229.s0, "p_980->g_229.s0", print_hash_value);
    transparent_crc(p_980->g_229.s1, "p_980->g_229.s1", print_hash_value);
    transparent_crc(p_980->g_229.s2, "p_980->g_229.s2", print_hash_value);
    transparent_crc(p_980->g_229.s3, "p_980->g_229.s3", print_hash_value);
    transparent_crc(p_980->g_229.s4, "p_980->g_229.s4", print_hash_value);
    transparent_crc(p_980->g_229.s5, "p_980->g_229.s5", print_hash_value);
    transparent_crc(p_980->g_229.s6, "p_980->g_229.s6", print_hash_value);
    transparent_crc(p_980->g_229.s7, "p_980->g_229.s7", print_hash_value);
    transparent_crc(p_980->g_235.x, "p_980->g_235.x", print_hash_value);
    transparent_crc(p_980->g_235.y, "p_980->g_235.y", print_hash_value);
    transparent_crc(p_980->g_240.x, "p_980->g_240.x", print_hash_value);
    transparent_crc(p_980->g_240.y, "p_980->g_240.y", print_hash_value);
    transparent_crc(p_980->g_240.z, "p_980->g_240.z", print_hash_value);
    transparent_crc(p_980->g_240.w, "p_980->g_240.w", print_hash_value);
    transparent_crc(p_980->g_243.x, "p_980->g_243.x", print_hash_value);
    transparent_crc(p_980->g_243.y, "p_980->g_243.y", print_hash_value);
    transparent_crc(p_980->g_243.z, "p_980->g_243.z", print_hash_value);
    transparent_crc(p_980->g_243.w, "p_980->g_243.w", print_hash_value);
    transparent_crc(p_980->g_262.f0, "p_980->g_262.f0", print_hash_value);
    transparent_crc(p_980->g_375, "p_980->g_375", print_hash_value);
    transparent_crc(p_980->g_377.x, "p_980->g_377.x", print_hash_value);
    transparent_crc(p_980->g_377.y, "p_980->g_377.y", print_hash_value);
    transparent_crc(p_980->g_389.f0, "p_980->g_389.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_980->g_427[i].f0, "p_980->g_427[i].f0", print_hash_value);

    }
    transparent_crc(p_980->g_447.s0, "p_980->g_447.s0", print_hash_value);
    transparent_crc(p_980->g_447.s1, "p_980->g_447.s1", print_hash_value);
    transparent_crc(p_980->g_447.s2, "p_980->g_447.s2", print_hash_value);
    transparent_crc(p_980->g_447.s3, "p_980->g_447.s3", print_hash_value);
    transparent_crc(p_980->g_447.s4, "p_980->g_447.s4", print_hash_value);
    transparent_crc(p_980->g_447.s5, "p_980->g_447.s5", print_hash_value);
    transparent_crc(p_980->g_447.s6, "p_980->g_447.s6", print_hash_value);
    transparent_crc(p_980->g_447.s7, "p_980->g_447.s7", print_hash_value);
    transparent_crc(p_980->g_449, "p_980->g_449", print_hash_value);
    transparent_crc(p_980->g_456, "p_980->g_456", print_hash_value);
    transparent_crc(p_980->g_468.s0, "p_980->g_468.s0", print_hash_value);
    transparent_crc(p_980->g_468.s1, "p_980->g_468.s1", print_hash_value);
    transparent_crc(p_980->g_468.s2, "p_980->g_468.s2", print_hash_value);
    transparent_crc(p_980->g_468.s3, "p_980->g_468.s3", print_hash_value);
    transparent_crc(p_980->g_468.s4, "p_980->g_468.s4", print_hash_value);
    transparent_crc(p_980->g_468.s5, "p_980->g_468.s5", print_hash_value);
    transparent_crc(p_980->g_468.s6, "p_980->g_468.s6", print_hash_value);
    transparent_crc(p_980->g_468.s7, "p_980->g_468.s7", print_hash_value);
    transparent_crc(p_980->g_482.s0, "p_980->g_482.s0", print_hash_value);
    transparent_crc(p_980->g_482.s1, "p_980->g_482.s1", print_hash_value);
    transparent_crc(p_980->g_482.s2, "p_980->g_482.s2", print_hash_value);
    transparent_crc(p_980->g_482.s3, "p_980->g_482.s3", print_hash_value);
    transparent_crc(p_980->g_482.s4, "p_980->g_482.s4", print_hash_value);
    transparent_crc(p_980->g_482.s5, "p_980->g_482.s5", print_hash_value);
    transparent_crc(p_980->g_482.s6, "p_980->g_482.s6", print_hash_value);
    transparent_crc(p_980->g_482.s7, "p_980->g_482.s7", print_hash_value);
    transparent_crc(p_980->g_482.s8, "p_980->g_482.s8", print_hash_value);
    transparent_crc(p_980->g_482.s9, "p_980->g_482.s9", print_hash_value);
    transparent_crc(p_980->g_482.sa, "p_980->g_482.sa", print_hash_value);
    transparent_crc(p_980->g_482.sb, "p_980->g_482.sb", print_hash_value);
    transparent_crc(p_980->g_482.sc, "p_980->g_482.sc", print_hash_value);
    transparent_crc(p_980->g_482.sd, "p_980->g_482.sd", print_hash_value);
    transparent_crc(p_980->g_482.se, "p_980->g_482.se", print_hash_value);
    transparent_crc(p_980->g_482.sf, "p_980->g_482.sf", print_hash_value);
    transparent_crc(p_980->g_485.x, "p_980->g_485.x", print_hash_value);
    transparent_crc(p_980->g_485.y, "p_980->g_485.y", print_hash_value);
    transparent_crc(p_980->g_485.z, "p_980->g_485.z", print_hash_value);
    transparent_crc(p_980->g_485.w, "p_980->g_485.w", print_hash_value);
    transparent_crc(p_980->g_488, "p_980->g_488", print_hash_value);
    transparent_crc(p_980->g_497.s0, "p_980->g_497.s0", print_hash_value);
    transparent_crc(p_980->g_497.s1, "p_980->g_497.s1", print_hash_value);
    transparent_crc(p_980->g_497.s2, "p_980->g_497.s2", print_hash_value);
    transparent_crc(p_980->g_497.s3, "p_980->g_497.s3", print_hash_value);
    transparent_crc(p_980->g_497.s4, "p_980->g_497.s4", print_hash_value);
    transparent_crc(p_980->g_497.s5, "p_980->g_497.s5", print_hash_value);
    transparent_crc(p_980->g_497.s6, "p_980->g_497.s6", print_hash_value);
    transparent_crc(p_980->g_497.s7, "p_980->g_497.s7", print_hash_value);
    transparent_crc(p_980->g_497.s8, "p_980->g_497.s8", print_hash_value);
    transparent_crc(p_980->g_497.s9, "p_980->g_497.s9", print_hash_value);
    transparent_crc(p_980->g_497.sa, "p_980->g_497.sa", print_hash_value);
    transparent_crc(p_980->g_497.sb, "p_980->g_497.sb", print_hash_value);
    transparent_crc(p_980->g_497.sc, "p_980->g_497.sc", print_hash_value);
    transparent_crc(p_980->g_497.sd, "p_980->g_497.sd", print_hash_value);
    transparent_crc(p_980->g_497.se, "p_980->g_497.se", print_hash_value);
    transparent_crc(p_980->g_497.sf, "p_980->g_497.sf", print_hash_value);
    transparent_crc(p_980->g_503.s0, "p_980->g_503.s0", print_hash_value);
    transparent_crc(p_980->g_503.s1, "p_980->g_503.s1", print_hash_value);
    transparent_crc(p_980->g_503.s2, "p_980->g_503.s2", print_hash_value);
    transparent_crc(p_980->g_503.s3, "p_980->g_503.s3", print_hash_value);
    transparent_crc(p_980->g_503.s4, "p_980->g_503.s4", print_hash_value);
    transparent_crc(p_980->g_503.s5, "p_980->g_503.s5", print_hash_value);
    transparent_crc(p_980->g_503.s6, "p_980->g_503.s6", print_hash_value);
    transparent_crc(p_980->g_503.s7, "p_980->g_503.s7", print_hash_value);
    transparent_crc(p_980->g_513.f0, "p_980->g_513.f0", print_hash_value);
    transparent_crc(p_980->g_550.f0, "p_980->g_550.f0", print_hash_value);
    transparent_crc(p_980->g_661.s0, "p_980->g_661.s0", print_hash_value);
    transparent_crc(p_980->g_661.s1, "p_980->g_661.s1", print_hash_value);
    transparent_crc(p_980->g_661.s2, "p_980->g_661.s2", print_hash_value);
    transparent_crc(p_980->g_661.s3, "p_980->g_661.s3", print_hash_value);
    transparent_crc(p_980->g_661.s4, "p_980->g_661.s4", print_hash_value);
    transparent_crc(p_980->g_661.s5, "p_980->g_661.s5", print_hash_value);
    transparent_crc(p_980->g_661.s6, "p_980->g_661.s6", print_hash_value);
    transparent_crc(p_980->g_661.s7, "p_980->g_661.s7", print_hash_value);
    transparent_crc(p_980->g_661.s8, "p_980->g_661.s8", print_hash_value);
    transparent_crc(p_980->g_661.s9, "p_980->g_661.s9", print_hash_value);
    transparent_crc(p_980->g_661.sa, "p_980->g_661.sa", print_hash_value);
    transparent_crc(p_980->g_661.sb, "p_980->g_661.sb", print_hash_value);
    transparent_crc(p_980->g_661.sc, "p_980->g_661.sc", print_hash_value);
    transparent_crc(p_980->g_661.sd, "p_980->g_661.sd", print_hash_value);
    transparent_crc(p_980->g_661.se, "p_980->g_661.se", print_hash_value);
    transparent_crc(p_980->g_661.sf, "p_980->g_661.sf", print_hash_value);
    transparent_crc(p_980->g_668.s0, "p_980->g_668.s0", print_hash_value);
    transparent_crc(p_980->g_668.s1, "p_980->g_668.s1", print_hash_value);
    transparent_crc(p_980->g_668.s2, "p_980->g_668.s2", print_hash_value);
    transparent_crc(p_980->g_668.s3, "p_980->g_668.s3", print_hash_value);
    transparent_crc(p_980->g_668.s4, "p_980->g_668.s4", print_hash_value);
    transparent_crc(p_980->g_668.s5, "p_980->g_668.s5", print_hash_value);
    transparent_crc(p_980->g_668.s6, "p_980->g_668.s6", print_hash_value);
    transparent_crc(p_980->g_668.s7, "p_980->g_668.s7", print_hash_value);
    transparent_crc(p_980->g_668.s8, "p_980->g_668.s8", print_hash_value);
    transparent_crc(p_980->g_668.s9, "p_980->g_668.s9", print_hash_value);
    transparent_crc(p_980->g_668.sa, "p_980->g_668.sa", print_hash_value);
    transparent_crc(p_980->g_668.sb, "p_980->g_668.sb", print_hash_value);
    transparent_crc(p_980->g_668.sc, "p_980->g_668.sc", print_hash_value);
    transparent_crc(p_980->g_668.sd, "p_980->g_668.sd", print_hash_value);
    transparent_crc(p_980->g_668.se, "p_980->g_668.se", print_hash_value);
    transparent_crc(p_980->g_668.sf, "p_980->g_668.sf", print_hash_value);
    transparent_crc(p_980->g_669.s0, "p_980->g_669.s0", print_hash_value);
    transparent_crc(p_980->g_669.s1, "p_980->g_669.s1", print_hash_value);
    transparent_crc(p_980->g_669.s2, "p_980->g_669.s2", print_hash_value);
    transparent_crc(p_980->g_669.s3, "p_980->g_669.s3", print_hash_value);
    transparent_crc(p_980->g_669.s4, "p_980->g_669.s4", print_hash_value);
    transparent_crc(p_980->g_669.s5, "p_980->g_669.s5", print_hash_value);
    transparent_crc(p_980->g_669.s6, "p_980->g_669.s6", print_hash_value);
    transparent_crc(p_980->g_669.s7, "p_980->g_669.s7", print_hash_value);
    transparent_crc(p_980->g_669.s8, "p_980->g_669.s8", print_hash_value);
    transparent_crc(p_980->g_669.s9, "p_980->g_669.s9", print_hash_value);
    transparent_crc(p_980->g_669.sa, "p_980->g_669.sa", print_hash_value);
    transparent_crc(p_980->g_669.sb, "p_980->g_669.sb", print_hash_value);
    transparent_crc(p_980->g_669.sc, "p_980->g_669.sc", print_hash_value);
    transparent_crc(p_980->g_669.sd, "p_980->g_669.sd", print_hash_value);
    transparent_crc(p_980->g_669.se, "p_980->g_669.se", print_hash_value);
    transparent_crc(p_980->g_669.sf, "p_980->g_669.sf", print_hash_value);
    transparent_crc(p_980->g_673.x, "p_980->g_673.x", print_hash_value);
    transparent_crc(p_980->g_673.y, "p_980->g_673.y", print_hash_value);
    transparent_crc(p_980->g_673.z, "p_980->g_673.z", print_hash_value);
    transparent_crc(p_980->g_673.w, "p_980->g_673.w", print_hash_value);
    transparent_crc(p_980->g_675.s0, "p_980->g_675.s0", print_hash_value);
    transparent_crc(p_980->g_675.s1, "p_980->g_675.s1", print_hash_value);
    transparent_crc(p_980->g_675.s2, "p_980->g_675.s2", print_hash_value);
    transparent_crc(p_980->g_675.s3, "p_980->g_675.s3", print_hash_value);
    transparent_crc(p_980->g_675.s4, "p_980->g_675.s4", print_hash_value);
    transparent_crc(p_980->g_675.s5, "p_980->g_675.s5", print_hash_value);
    transparent_crc(p_980->g_675.s6, "p_980->g_675.s6", print_hash_value);
    transparent_crc(p_980->g_675.s7, "p_980->g_675.s7", print_hash_value);
    transparent_crc(p_980->g_681.f0, "p_980->g_681.f0", print_hash_value);
    transparent_crc(p_980->g_717.x, "p_980->g_717.x", print_hash_value);
    transparent_crc(p_980->g_717.y, "p_980->g_717.y", print_hash_value);
    transparent_crc(p_980->g_754.s0, "p_980->g_754.s0", print_hash_value);
    transparent_crc(p_980->g_754.s1, "p_980->g_754.s1", print_hash_value);
    transparent_crc(p_980->g_754.s2, "p_980->g_754.s2", print_hash_value);
    transparent_crc(p_980->g_754.s3, "p_980->g_754.s3", print_hash_value);
    transparent_crc(p_980->g_754.s4, "p_980->g_754.s4", print_hash_value);
    transparent_crc(p_980->g_754.s5, "p_980->g_754.s5", print_hash_value);
    transparent_crc(p_980->g_754.s6, "p_980->g_754.s6", print_hash_value);
    transparent_crc(p_980->g_754.s7, "p_980->g_754.s7", print_hash_value);
    transparent_crc(p_980->g_754.s8, "p_980->g_754.s8", print_hash_value);
    transparent_crc(p_980->g_754.s9, "p_980->g_754.s9", print_hash_value);
    transparent_crc(p_980->g_754.sa, "p_980->g_754.sa", print_hash_value);
    transparent_crc(p_980->g_754.sb, "p_980->g_754.sb", print_hash_value);
    transparent_crc(p_980->g_754.sc, "p_980->g_754.sc", print_hash_value);
    transparent_crc(p_980->g_754.sd, "p_980->g_754.sd", print_hash_value);
    transparent_crc(p_980->g_754.se, "p_980->g_754.se", print_hash_value);
    transparent_crc(p_980->g_754.sf, "p_980->g_754.sf", print_hash_value);
    transparent_crc(p_980->g_756.s0, "p_980->g_756.s0", print_hash_value);
    transparent_crc(p_980->g_756.s1, "p_980->g_756.s1", print_hash_value);
    transparent_crc(p_980->g_756.s2, "p_980->g_756.s2", print_hash_value);
    transparent_crc(p_980->g_756.s3, "p_980->g_756.s3", print_hash_value);
    transparent_crc(p_980->g_756.s4, "p_980->g_756.s4", print_hash_value);
    transparent_crc(p_980->g_756.s5, "p_980->g_756.s5", print_hash_value);
    transparent_crc(p_980->g_756.s6, "p_980->g_756.s6", print_hash_value);
    transparent_crc(p_980->g_756.s7, "p_980->g_756.s7", print_hash_value);
    transparent_crc(p_980->g_756.s8, "p_980->g_756.s8", print_hash_value);
    transparent_crc(p_980->g_756.s9, "p_980->g_756.s9", print_hash_value);
    transparent_crc(p_980->g_756.sa, "p_980->g_756.sa", print_hash_value);
    transparent_crc(p_980->g_756.sb, "p_980->g_756.sb", print_hash_value);
    transparent_crc(p_980->g_756.sc, "p_980->g_756.sc", print_hash_value);
    transparent_crc(p_980->g_756.sd, "p_980->g_756.sd", print_hash_value);
    transparent_crc(p_980->g_756.se, "p_980->g_756.se", print_hash_value);
    transparent_crc(p_980->g_756.sf, "p_980->g_756.sf", print_hash_value);
    transparent_crc(p_980->g_760, "p_980->g_760", print_hash_value);
    transparent_crc(p_980->g_777, "p_980->g_777", print_hash_value);
    transparent_crc(p_980->g_846.s0, "p_980->g_846.s0", print_hash_value);
    transparent_crc(p_980->g_846.s1, "p_980->g_846.s1", print_hash_value);
    transparent_crc(p_980->g_846.s2, "p_980->g_846.s2", print_hash_value);
    transparent_crc(p_980->g_846.s3, "p_980->g_846.s3", print_hash_value);
    transparent_crc(p_980->g_846.s4, "p_980->g_846.s4", print_hash_value);
    transparent_crc(p_980->g_846.s5, "p_980->g_846.s5", print_hash_value);
    transparent_crc(p_980->g_846.s6, "p_980->g_846.s6", print_hash_value);
    transparent_crc(p_980->g_846.s7, "p_980->g_846.s7", print_hash_value);
    transparent_crc(p_980->g_854.x, "p_980->g_854.x", print_hash_value);
    transparent_crc(p_980->g_854.y, "p_980->g_854.y", print_hash_value);
    transparent_crc(p_980->g_854.z, "p_980->g_854.z", print_hash_value);
    transparent_crc(p_980->g_854.w, "p_980->g_854.w", print_hash_value);
    transparent_crc(p_980->g_855.s0, "p_980->g_855.s0", print_hash_value);
    transparent_crc(p_980->g_855.s1, "p_980->g_855.s1", print_hash_value);
    transparent_crc(p_980->g_855.s2, "p_980->g_855.s2", print_hash_value);
    transparent_crc(p_980->g_855.s3, "p_980->g_855.s3", print_hash_value);
    transparent_crc(p_980->g_855.s4, "p_980->g_855.s4", print_hash_value);
    transparent_crc(p_980->g_855.s5, "p_980->g_855.s5", print_hash_value);
    transparent_crc(p_980->g_855.s6, "p_980->g_855.s6", print_hash_value);
    transparent_crc(p_980->g_855.s7, "p_980->g_855.s7", print_hash_value);
    transparent_crc(p_980->g_878.x, "p_980->g_878.x", print_hash_value);
    transparent_crc(p_980->g_878.y, "p_980->g_878.y", print_hash_value);
    transparent_crc(p_980->g_878.z, "p_980->g_878.z", print_hash_value);
    transparent_crc(p_980->g_878.w, "p_980->g_878.w", print_hash_value);
    transparent_crc(p_980->g_879.s0, "p_980->g_879.s0", print_hash_value);
    transparent_crc(p_980->g_879.s1, "p_980->g_879.s1", print_hash_value);
    transparent_crc(p_980->g_879.s2, "p_980->g_879.s2", print_hash_value);
    transparent_crc(p_980->g_879.s3, "p_980->g_879.s3", print_hash_value);
    transparent_crc(p_980->g_879.s4, "p_980->g_879.s4", print_hash_value);
    transparent_crc(p_980->g_879.s5, "p_980->g_879.s5", print_hash_value);
    transparent_crc(p_980->g_879.s6, "p_980->g_879.s6", print_hash_value);
    transparent_crc(p_980->g_879.s7, "p_980->g_879.s7", print_hash_value);
    transparent_crc(p_980->g_880.s0, "p_980->g_880.s0", print_hash_value);
    transparent_crc(p_980->g_880.s1, "p_980->g_880.s1", print_hash_value);
    transparent_crc(p_980->g_880.s2, "p_980->g_880.s2", print_hash_value);
    transparent_crc(p_980->g_880.s3, "p_980->g_880.s3", print_hash_value);
    transparent_crc(p_980->g_880.s4, "p_980->g_880.s4", print_hash_value);
    transparent_crc(p_980->g_880.s5, "p_980->g_880.s5", print_hash_value);
    transparent_crc(p_980->g_880.s6, "p_980->g_880.s6", print_hash_value);
    transparent_crc(p_980->g_880.s7, "p_980->g_880.s7", print_hash_value);
    transparent_crc(p_980->g_880.s8, "p_980->g_880.s8", print_hash_value);
    transparent_crc(p_980->g_880.s9, "p_980->g_880.s9", print_hash_value);
    transparent_crc(p_980->g_880.sa, "p_980->g_880.sa", print_hash_value);
    transparent_crc(p_980->g_880.sb, "p_980->g_880.sb", print_hash_value);
    transparent_crc(p_980->g_880.sc, "p_980->g_880.sc", print_hash_value);
    transparent_crc(p_980->g_880.sd, "p_980->g_880.sd", print_hash_value);
    transparent_crc(p_980->g_880.se, "p_980->g_880.se", print_hash_value);
    transparent_crc(p_980->g_880.sf, "p_980->g_880.sf", print_hash_value);
    transparent_crc(p_980->g_884.s0, "p_980->g_884.s0", print_hash_value);
    transparent_crc(p_980->g_884.s1, "p_980->g_884.s1", print_hash_value);
    transparent_crc(p_980->g_884.s2, "p_980->g_884.s2", print_hash_value);
    transparent_crc(p_980->g_884.s3, "p_980->g_884.s3", print_hash_value);
    transparent_crc(p_980->g_884.s4, "p_980->g_884.s4", print_hash_value);
    transparent_crc(p_980->g_884.s5, "p_980->g_884.s5", print_hash_value);
    transparent_crc(p_980->g_884.s6, "p_980->g_884.s6", print_hash_value);
    transparent_crc(p_980->g_884.s7, "p_980->g_884.s7", print_hash_value);
    transparent_crc(p_980->g_884.s8, "p_980->g_884.s8", print_hash_value);
    transparent_crc(p_980->g_884.s9, "p_980->g_884.s9", print_hash_value);
    transparent_crc(p_980->g_884.sa, "p_980->g_884.sa", print_hash_value);
    transparent_crc(p_980->g_884.sb, "p_980->g_884.sb", print_hash_value);
    transparent_crc(p_980->g_884.sc, "p_980->g_884.sc", print_hash_value);
    transparent_crc(p_980->g_884.sd, "p_980->g_884.sd", print_hash_value);
    transparent_crc(p_980->g_884.se, "p_980->g_884.se", print_hash_value);
    transparent_crc(p_980->g_884.sf, "p_980->g_884.sf", print_hash_value);
    transparent_crc(p_980->g_887, "p_980->g_887", print_hash_value);
    transparent_crc(p_980->g_900.f0, "p_980->g_900.f0", print_hash_value);
    transparent_crc(p_980->g_949, "p_980->g_949", print_hash_value);
    transparent_crc(p_980->g_957, "p_980->g_957", print_hash_value);
    transparent_crc(p_980->g_959, "p_980->g_959", print_hash_value);
    transparent_crc(p_980->v_collective, "p_980->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 18; i++)
            transparent_crc(p_980->g_special_values[i + 18 * get_linear_group_id()], "p_980->g_special_values[i + 18 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 18; i++)
            transparent_crc(p_980->l_special_values[i], "p_980->l_special_values[i]", print_hash_value);
    transparent_crc(p_980->l_comm_values[get_linear_local_id()], "p_980->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_980->g_comm_values[get_linear_group_id() * 102 + get_linear_local_id()], "p_980->g_comm_values[get_linear_group_id() * 102 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
