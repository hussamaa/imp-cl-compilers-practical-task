// --atomics 98 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 21,15,19 -l 7,3,1
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

__constant uint32_t permutations[10][21] = {
{5,2,19,10,7,14,4,1,16,3,12,20,18,9,6,17,15,8,13,11,0}, // permutation 0
{14,16,19,5,13,7,1,3,12,10,11,2,17,6,4,0,9,18,20,8,15}, // permutation 1
{19,0,12,7,1,11,8,20,13,16,18,15,5,2,4,14,17,9,3,10,6}, // permutation 2
{16,15,9,13,1,6,10,7,19,2,17,5,11,4,3,18,14,8,20,12,0}, // permutation 3
{9,5,4,13,19,6,15,16,3,1,14,12,2,11,8,20,10,18,0,17,7}, // permutation 4
{17,14,13,9,8,0,6,4,11,1,19,10,20,7,5,18,12,15,2,16,3}, // permutation 5
{2,8,1,16,20,3,12,4,6,17,11,7,15,14,0,18,19,5,10,9,13}, // permutation 6
{12,11,9,1,19,13,10,20,0,15,6,7,14,2,5,17,8,3,18,4,16}, // permutation 7
{13,4,19,1,0,7,14,12,3,15,10,5,8,9,16,11,20,18,17,2,6}, // permutation 8
{18,11,8,5,16,15,17,3,7,19,12,0,1,14,4,20,2,6,10,13,9} // permutation 9
};

// Seed: 3332918572

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint8_t  f0;
   volatile uint32_t  f1;
   volatile int8_t * f2;
   int64_t  f3;
   uint16_t  f4;
};

union U1 {
   int64_t  f0;
   uint32_t  f1;
};

struct S2 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    volatile int8_t g_19;
    volatile int8_t *g_18;
    int8_t *g_20;
    int8_t g_29;
    int8_t *g_28;
    int16_t g_34;
    uint64_t g_36;
    int32_t g_59;
    int32_t *g_67;
    int32_t ** volatile g_66;
    int64_t g_82;
    union U1 g_93;
    VECTOR(uint16_t, 2) g_112;
    uint64_t g_145[6];
    int32_t * volatile g_147;
    union U0 g_150;
    VECTOR(int32_t, 2) g_154;
    volatile uint64_t g_176;
    volatile uint64_t * volatile g_175;
    volatile uint64_t * volatile *g_174;
    union U0 g_213;
    int32_t * volatile g_239[4][6];
    int32_t *g_246[6][9];
    VECTOR(int8_t, 4) g_258;
    int32_t g_288;
    volatile VECTOR(uint32_t, 4) g_320;
    int32_t ** volatile g_325;
    volatile VECTOR(uint32_t, 2) g_348;
    VECTOR(uint32_t, 2) g_353;
    uint32_t g_361;
    int32_t * volatile g_363;
    VECTOR(int16_t, 2) g_374;
    VECTOR(int8_t, 16) g_381;
    int16_t g_385;
    int32_t ** volatile g_387;
    VECTOR(int8_t, 4) g_398;
    volatile VECTOR(int32_t, 2) g_399;
    union U0 g_409[1];
    int32_t *g_433;
    int32_t ** volatile g_434;
    uint32_t g_440;
    VECTOR(uint32_t, 8) g_451;
    volatile uint16_t g_475;
    VECTOR(uint16_t, 16) g_490;
    VECTOR(uint8_t, 4) g_522;
    int32_t * volatile g_536[4];
    int32_t * volatile g_537;
    int32_t * volatile g_538;
    int32_t * volatile g_541;
    int32_t * volatile g_542;
    int32_t ** volatile g_568;
    uint16_t *g_588;
    VECTOR(uint8_t, 4) g_603;
    volatile VECTOR(int64_t, 2) g_605;
    VECTOR(uint32_t, 16) g_615;
    volatile int16_t g_644;
    volatile int16_t * volatile g_643;
    uint32_t g_667;
    int8_t * volatile *g_669;
    int8_t * volatile ** volatile g_668[9][10];
    int64_t *g_678;
    int64_t **g_677;
    int64_t *** volatile g_676[8];
    int64_t *** volatile g_679;
    int32_t * volatile g_682;
    int32_t * volatile g_683;
    int32_t * volatile g_684;
    uint8_t *g_703;
    uint8_t *g_704;
    union U1 *g_712;
    union U1 ** volatile g_711;
    volatile VECTOR(int64_t, 2) g_719;
    volatile VECTOR(int64_t, 16) g_721;
    volatile VECTOR(int64_t, 16) g_722;
    volatile VECTOR(uint16_t, 16) g_725;
    VECTOR(int64_t, 2) g_727;
    volatile VECTOR(uint16_t, 8) g_730;
    int8_t * volatile g_731;
    volatile VECTOR(int16_t, 8) g_744;
    VECTOR(int16_t, 2) g_745;
    volatile VECTOR(int16_t, 2) g_747;
    volatile VECTOR(int16_t, 4) g_748;
    VECTOR(int16_t, 16) g_749;
    volatile VECTOR(uint8_t, 16) g_754;
    int32_t * volatile g_828[7];
    union U0 g_834[5][7];
    int16_t *g_863;
    int16_t **g_862;
    int8_t g_873;
    VECTOR(uint8_t, 2) g_878;
    volatile int64_t g_899;
    volatile VECTOR(uint32_t, 16) g_915;
    volatile VECTOR(int16_t, 4) g_930;
    VECTOR(uint8_t, 8) g_931;
    volatile VECTOR(int64_t, 4) g_941;
    VECTOR(uint64_t, 2) g_946;
    VECTOR(int32_t, 8) g_952;
    int32_t ** volatile g_965;
    VECTOR(int8_t, 4) g_972;
    volatile uint16_t g_977[8][8][2];
    volatile VECTOR(int32_t, 4) g_982;
    VECTOR(int16_t, 8) g_1011;
    VECTOR(int32_t, 16) g_1012;
    VECTOR(int32_t, 2) g_1013;
    VECTOR(int32_t, 2) g_1016;
    VECTOR(uint8_t, 8) g_1018;
    VECTOR(int32_t, 4) g_1022;
    VECTOR(uint16_t, 4) g_1029;
    uint32_t *g_1037;
    uint32_t *g_1038;
    VECTOR(int32_t, 8) g_1047;
    volatile VECTOR(int32_t, 8) g_1048;
    VECTOR(int16_t, 8) g_1051;
    volatile VECTOR(int8_t, 16) g_1056;
    int8_t g_1067[7];
    int32_t ** volatile g_1069;
    int32_t ** volatile g_1072[2];
    int64_t g_1087;
    volatile VECTOR(uint32_t, 4) g_1142;
    VECTOR(uint8_t, 2) g_1244;
    union U0 g_1268;
    VECTOR(uint8_t, 4) g_1274;
    VECTOR(uint8_t, 16) g_1275;
    volatile VECTOR(uint8_t, 4) g_1277;
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
union U0  func_1(struct S2 * p_1291);
uint64_t  func_12(int32_t  p_13, int8_t * p_14, int8_t * p_15, uint32_t  p_16, uint32_t  p_17, struct S2 * p_1291);
int8_t * func_22(int32_t  p_23, int8_t * p_24, int8_t ** p_25, uint8_t  p_26, struct S2 * p_1291);
int8_t ** func_30(uint64_t  p_31, int64_t  p_32, int32_t  p_33, struct S2 * p_1291);
int32_t * func_38(int8_t ** p_39, struct S2 * p_1291);
int8_t ** func_40(union U1  p_41, int8_t * p_42, int64_t  p_43, uint32_t  p_44, struct S2 * p_1291);
union U1  func_45(int64_t  p_46, int64_t  p_47, int8_t * p_48, struct S2 * p_1291);
union U0  func_55(int64_t  p_56, struct S2 * p_1291);
uint32_t  func_70(int32_t ** p_71, int32_t * p_72, struct S2 * p_1291);
union U0  func_76(uint16_t  p_77, uint32_t  p_78, struct S2 * p_1291);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1291->g_4 p_1291->g_409
 * writes: p_1291->g_4
 */
union U0  func_1(struct S2 * p_1291)
{ /* block id: 4 */
    uint32_t l_11 = 0x927213ECL;
    int8_t *l_565 = (void*)0;
    uint16_t l_688 = 0xDD7DL;
    VECTOR(int32_t, 16) l_689 = (VECTOR(int32_t, 16))(0x45B494DAL, (VECTOR(int32_t, 4))(0x45B494DAL, (VECTOR(int32_t, 2))(0x45B494DAL, 0x08E82DD6L), 0x08E82DD6L), 0x08E82DD6L, 0x45B494DAL, 0x08E82DD6L, (VECTOR(int32_t, 2))(0x45B494DAL, 0x08E82DD6L), (VECTOR(int32_t, 2))(0x45B494DAL, 0x08E82DD6L), 0x45B494DAL, 0x08E82DD6L, 0x45B494DAL, 0x08E82DD6L);
    uint64_t l_700[2];
    VECTOR(uint16_t, 16) l_726 = (VECTOR(uint16_t, 16))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 65527UL), 65527UL), 65527UL, 2UL, 65527UL, (VECTOR(uint16_t, 2))(2UL, 65527UL), (VECTOR(uint16_t, 2))(2UL, 65527UL), 2UL, 65527UL, 2UL, 65527UL);
    uint64_t *l_729 = &p_1291->g_36;
    uint64_t **l_728 = &l_729;
    VECTOR(uint8_t, 16) l_755 = (VECTOR(uint8_t, 16))(0x6BL, (VECTOR(uint8_t, 4))(0x6BL, (VECTOR(uint8_t, 2))(0x6BL, 255UL), 255UL), 255UL, 0x6BL, 255UL, (VECTOR(uint8_t, 2))(0x6BL, 255UL), (VECTOR(uint8_t, 2))(0x6BL, 255UL), 0x6BL, 255UL, 0x6BL, 255UL);
    uint16_t l_773 = 0x642CL;
    int8_t l_824 = (-2L);
    int32_t l_825 = (-1L);
    uint8_t l_830 = 255UL;
    uint32_t *l_856 = (void*)0;
    int16_t ***l_875 = &p_1291->g_862;
    int32_t l_937 = (-3L);
    int8_t **l_995 = &l_565;
    int16_t l_996 = 0L;
    int32_t l_1000 = 1L;
    int32_t l_1023 = 0x0DAFC1BFL;
    uint32_t l_1030 = 0x27D40158L;
    VECTOR(int8_t, 2) l_1059 = (VECTOR(int8_t, 2))((-3L), 4L);
    uint16_t **l_1066 = &p_1291->g_588;
    int32_t l_1091 = 0x78312440L;
    int64_t l_1092[1][5][10] = {{{1L,(-1L),1L,1L,(-1L),1L,1L,(-1L),1L,1L},{1L,(-1L),1L,1L,(-1L),1L,1L,(-1L),1L,1L},{1L,(-1L),1L,1L,(-1L),1L,1L,(-1L),1L,1L},{1L,(-1L),1L,1L,(-1L),1L,1L,(-1L),1L,1L},{1L,(-1L),1L,1L,(-1L),1L,1L,(-1L),1L,1L}}};
    int8_t l_1096 = 1L;
    VECTOR(uint64_t, 8) l_1123 = (VECTOR(uint64_t, 8))(0x36F4AB4015D997B6L, (VECTOR(uint64_t, 4))(0x36F4AB4015D997B6L, (VECTOR(uint64_t, 2))(0x36F4AB4015D997B6L, 0x475316206A8EC8BAL), 0x475316206A8EC8BAL), 0x475316206A8EC8BAL, 0x36F4AB4015D997B6L, 0x475316206A8EC8BAL);
    uint16_t **l_1134 = &p_1291->g_588;
    VECTOR(int32_t, 16) l_1141 = (VECTOR(int32_t, 16))(0x67E5C505L, (VECTOR(int32_t, 4))(0x67E5C505L, (VECTOR(int32_t, 2))(0x67E5C505L, 0x50774748L), 0x50774748L), 0x50774748L, 0x67E5C505L, 0x50774748L, (VECTOR(int32_t, 2))(0x67E5C505L, 0x50774748L), (VECTOR(int32_t, 2))(0x67E5C505L, 0x50774748L), 0x67E5C505L, 0x50774748L, 0x67E5C505L, 0x50774748L);
    uint8_t l_1185 = 0x3AL;
    int32_t **l_1215 = &p_1291->g_246[0][3];
    int64_t **l_1258 = (void*)0;
    union U1 l_1263 = {2L};
    int16_t *l_1266 = &l_996;
    uint32_t l_1269 = 0x5129D05FL;
    uint64_t l_1278[5] = {0x46479742221FD72DL,0x46479742221FD72DL,0x46479742221FD72DL,0x46479742221FD72DL,0x46479742221FD72DL};
    uint16_t l_1283 = 65531UL;
    uint64_t l_1287[3][8][5] = {{{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL}},{{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL}},{{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xAD58952F5D848ABDL,18446744073709551615UL,18446744073709551614UL}}};
    VECTOR(int16_t, 4) l_1290 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x204BL), 0x204BL);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_700[i] = 0x4BAF7981577BECC3L;
    for (p_1291->g_4 = 0; (p_1291->g_4 > 16); p_1291->g_4++)
    { /* block id: 7 */
        int8_t **l_21 = &p_1291->g_20;
        int32_t l_27 = (-9L);
        uint64_t *l_35[2];
        int32_t l_37 = 1L;
        uint8_t *l_686 = (void*)0;
        uint8_t *l_687[6][10][4] = {{{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0}},{{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0}},{{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0}},{{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0}},{{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0}},{{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0},{(void*)0,(void*)0,(void*)0,&p_1291->g_409[0].f0}}};
        uint16_t *l_735 = (void*)0;
        int32_t l_782 = (-7L);
        int32_t *l_818 = (void*)0;
        VECTOR(int8_t, 16) l_894 = (VECTOR(int8_t, 16))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0x33L), 0x33L), 0x33L, 2L, 0x33L, (VECTOR(int8_t, 2))(2L, 0x33L), (VECTOR(int8_t, 2))(2L, 0x33L), 2L, 0x33L, 2L, 0x33L);
        uint16_t l_936 = 0x6BFEL;
        VECTOR(uint16_t, 8) l_949 = (VECTOR(uint16_t, 8))(0x6FABL, (VECTOR(uint16_t, 4))(0x6FABL, (VECTOR(uint16_t, 2))(0x6FABL, 0x2589L), 0x2589L), 0x2589L, 0x6FABL, 0x2589L);
        VECTOR(uint64_t, 2) l_951 = (VECTOR(uint64_t, 2))(0x10BC1F7010648240L, 0xED4280C80424D3DCL);
        int16_t l_961 = 0x13CBL;
        int16_t ***l_973 = &p_1291->g_862;
        int32_t l_975 = 0x225D4B87L;
        int32_t l_976 = 0x2C68BFD8L;
        int8_t l_984 = 0x17L;
        VECTOR(int16_t, 16) l_1010 = (VECTOR(int16_t, 16))(0x41BBL, (VECTOR(int16_t, 4))(0x41BBL, (VECTOR(int16_t, 2))(0x41BBL, 3L), 3L), 3L, 0x41BBL, 3L, (VECTOR(int16_t, 2))(0x41BBL, 3L), (VECTOR(int16_t, 2))(0x41BBL, 3L), 0x41BBL, 3L, 0x41BBL, 3L);
        VECTOR(int32_t, 16) l_1017 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-10L)), (-10L)), (-10L), 0L, (-10L), (VECTOR(int32_t, 2))(0L, (-10L)), (VECTOR(int32_t, 2))(0L, (-10L)), 0L, (-10L), 0L, (-10L));
        int32_t l_1093 = 1L;
        uint32_t l_1115 = 0UL;
        VECTOR(uint32_t, 2) l_1148 = (VECTOR(uint32_t, 2))(0UL, 0xFB787287L);
        uint16_t l_1164 = 0xA70FL;
        int16_t ***l_1179 = (void*)0;
        int32_t l_1182 = 0x7761B33BL;
        VECTOR(uint32_t, 8) l_1183 = (VECTOR(uint32_t, 8))(0x40C5ACC2L, (VECTOR(uint32_t, 4))(0x40C5ACC2L, (VECTOR(uint32_t, 2))(0x40C5ACC2L, 4294967292UL), 4294967292UL), 4294967292UL, 0x40C5ACC2L, 4294967292UL);
        uint32_t l_1254[4][4][9] = {{{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L},{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L},{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L},{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L}},{{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L},{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L},{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L},{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L}},{{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L},{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L},{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L},{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L}},{{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L},{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L},{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L},{0x3CFE96E8L,2UL,4294967292UL,4294967294UL,0x23AE6482L,4294967294UL,4294967292UL,2UL,0x3CFE96E8L}}};
        VECTOR(uint8_t, 8) l_1276 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x15L), 0x15L), 0x15L, 0UL, 0x15L);
        int32_t l_1279 = 0x529C8690L;
        int32_t l_1286 = (-1L);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_35[i] = &p_1291->g_36;
        (1 + 1);
    }
    return p_1291->g_409[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1291->g_59 p_1291->g_568 p_1291->g_325 p_1291->g_588 p_1291->g_comm_values p_1291->g_440 p_1291->g_258 p_1291->g_603 p_1291->g_28 p_1291->g_29 p_1291->g_605 p_1291->g_615 p_1291->g_18 p_1291->g_19 p_1291->g_213.f4 p_1291->g_145 p_1291->g_522 p_1291->g_353 p_1291->g_361 p_1291->g_433 p_1291->g_4 p_1291->g_112 p_1291->g_490 p_1291->g_667 p_1291->g_348 p_1291->g_668 p_1291->g_679 p_1291->g_363
 * writes: p_1291->g_59 p_1291->g_246 p_1291->g_588 p_1291->g_82 p_1291->g_29 p_1291->g_258 p_1291->g_490 p_1291->g_677
 */
uint64_t  func_12(int32_t  p_13, int8_t * p_14, int8_t * p_15, uint32_t  p_16, uint32_t  p_17, struct S2 * p_1291)
{ /* block id: 193 */
    uint32_t l_573[8] = {0x9C42F99BL,5UL,0x9C42F99BL,0x9C42F99BL,5UL,0x9C42F99BL,0x9C42F99BL,5UL};
    int32_t l_574 = 0x273B0B83L;
    int32_t l_575 = 5L;
    int32_t l_577 = (-4L);
    uint32_t l_578 = 0x3A2ACD6AL;
    VECTOR(int32_t, 2) l_592 = (VECTOR(int32_t, 2))(2L, 0x01706649L);
    VECTOR(int64_t, 16) l_604 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int64_t, 2))(0L, 0L), (VECTOR(int64_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
    VECTOR(int16_t, 8) l_610 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x6B4BL), 0x6B4BL), 0x6B4BL, 0L, 0x6B4BL);
    int32_t **l_622 = &p_1291->g_67;
    int64_t *l_623 = &p_1291->g_82;
    int16_t *l_624[7][9][4] = {{{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0}},{{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0}},{{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0}},{{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0}},{{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0}},{{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0}},{{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0},{&p_1291->g_385,(void*)0,(void*)0,(void*)0}}};
    VECTOR(uint32_t, 8) l_627 = (VECTOR(uint32_t, 8))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0x182EF7E0L), 0x182EF7E0L), 0x182EF7E0L, 5UL, 0x182EF7E0L);
    VECTOR(int8_t, 16) l_630 = (VECTOR(int8_t, 16))(0x7CL, (VECTOR(int8_t, 4))(0x7CL, (VECTOR(int8_t, 2))(0x7CL, 0x32L), 0x32L), 0x32L, 0x7CL, 0x32L, (VECTOR(int8_t, 2))(0x7CL, 0x32L), (VECTOR(int8_t, 2))(0x7CL, 0x32L), 0x7CL, 0x32L, 0x7CL, 0x32L);
    int8_t *l_631 = (void*)0;
    int8_t *l_632 = (void*)0;
    int8_t *l_633[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(int64_t, 16) l_638 = (VECTOR(int64_t, 16))(0x79B43974290399E2L, (VECTOR(int64_t, 4))(0x79B43974290399E2L, (VECTOR(int64_t, 2))(0x79B43974290399E2L, 0x763891599F2F6EA7L), 0x763891599F2F6EA7L), 0x763891599F2F6EA7L, 0x79B43974290399E2L, 0x763891599F2F6EA7L, (VECTOR(int64_t, 2))(0x79B43974290399E2L, 0x763891599F2F6EA7L), (VECTOR(int64_t, 2))(0x79B43974290399E2L, 0x763891599F2F6EA7L), 0x79B43974290399E2L, 0x763891599F2F6EA7L, 0x79B43974290399E2L, 0x763891599F2F6EA7L);
    VECTOR(int64_t, 2) l_639 = (VECTOR(int64_t, 2))(1L, 0x46974F195967E4FFL);
    uint16_t *l_642 = &p_1291->g_409[0].f4;
    uint64_t l_645 = 18446744073709551615UL;
    int8_t l_666 = (-8L);
    int i, j, k;
    for (p_1291->g_59 = (-14); (p_1291->g_59 <= (-8)); p_1291->g_59 = safe_add_func_uint32_t_u_u(p_1291->g_59, 4))
    { /* block id: 196 */
        VECTOR(int8_t, 8) l_576 = (VECTOR(int8_t, 8))(0x70L, (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, 0x7FL), 0x7FL), 0x7FL, 0x70L, 0x7FL);
        VECTOR(int8_t, 16) l_586 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int8_t, 2))((-1L), 0L), (VECTOR(int8_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
        uint16_t **l_589 = &p_1291->g_588;
        int16_t *l_593 = &p_1291->g_34;
        int64_t *l_594 = &p_1291->g_82;
        int8_t *l_595 = (void*)0;
        int8_t *l_596 = (void*)0;
        int8_t *l_597[2];
        int32_t l_598 = 0x7E5E9729L;
        int i;
        for (i = 0; i < 2; i++)
            l_597[i] = (void*)0;
        (*p_1291->g_568) = &p_13;
        for (p_17 = 0; (p_17 > 14); ++p_17)
        { /* block id: 200 */
            int32_t l_571 = (-4L);
            int32_t *l_572[8][2];
            int32_t **l_581[3][4][6] = {{{&p_1291->g_67,&p_1291->g_246[2][5],&p_1291->g_246[2][5],&p_1291->g_67,&p_1291->g_67,&p_1291->g_246[2][5]},{&p_1291->g_67,&p_1291->g_246[2][5],&p_1291->g_246[2][5],&p_1291->g_67,&p_1291->g_67,&p_1291->g_246[2][5]},{&p_1291->g_67,&p_1291->g_246[2][5],&p_1291->g_246[2][5],&p_1291->g_67,&p_1291->g_67,&p_1291->g_246[2][5]},{&p_1291->g_67,&p_1291->g_246[2][5],&p_1291->g_246[2][5],&p_1291->g_67,&p_1291->g_67,&p_1291->g_246[2][5]}},{{&p_1291->g_67,&p_1291->g_246[2][5],&p_1291->g_246[2][5],&p_1291->g_67,&p_1291->g_67,&p_1291->g_246[2][5]},{&p_1291->g_67,&p_1291->g_246[2][5],&p_1291->g_246[2][5],&p_1291->g_67,&p_1291->g_67,&p_1291->g_246[2][5]},{&p_1291->g_67,&p_1291->g_246[2][5],&p_1291->g_246[2][5],&p_1291->g_67,&p_1291->g_67,&p_1291->g_246[2][5]},{&p_1291->g_67,&p_1291->g_246[2][5],&p_1291->g_246[2][5],&p_1291->g_67,&p_1291->g_67,&p_1291->g_246[2][5]}},{{&p_1291->g_67,&p_1291->g_246[2][5],&p_1291->g_246[2][5],&p_1291->g_67,&p_1291->g_67,&p_1291->g_246[2][5]},{&p_1291->g_67,&p_1291->g_246[2][5],&p_1291->g_246[2][5],&p_1291->g_67,&p_1291->g_67,&p_1291->g_246[2][5]},{&p_1291->g_67,&p_1291->g_246[2][5],&p_1291->g_246[2][5],&p_1291->g_67,&p_1291->g_67,&p_1291->g_246[2][5]},{&p_1291->g_67,&p_1291->g_246[2][5],&p_1291->g_246[2][5],&p_1291->g_67,&p_1291->g_67,&p_1291->g_246[2][5]}}};
            int i, j, k;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 2; j++)
                    l_572[i][j] = (void*)0;
            }
            l_573[4] &= l_571;
            l_578--;
            (*p_1291->g_325) = &l_575;
        }
        l_598 |= ((safe_add_func_int64_t_s_s(l_576.s4, ((safe_sub_func_uint8_t_u_u(0UL, ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(l_586.sa53104fb7aeda01d)).s334e, (int8_t)(p_1291->g_258.z ^= ((*p_14) = ((safe_unary_minus_func_uint16_t_u((((*l_594) = ((((*l_589) = p_1291->g_588) == &p_1291->g_475) , (safe_rshift_func_uint16_t_u_u((p_16 && p_1291->g_comm_values[p_1291->tid]), ((((VECTOR(int32_t, 16))((-4L), 8L, ((VECTOR(int32_t, 16))(l_592.xyyxyyxxxxxxyxxy)).s7, ((((void*)0 == l_593) && (l_575 >= p_17)) < p_17), ((VECTOR(int32_t, 8))(8L)), 0x0AFCA26DL, l_573[6], 0x1606C0DDL, 3L)).s9 && 5UL) , GROUP_DIVERGE(0, 1)))))) < p_1291->g_440))) ^ l_592.x)))))).w)) | 65530UL))) , l_573[2]);
    }
    l_574 = (l_573[0] || ((safe_sub_func_int32_t_s_s((+(((safe_lshift_func_uint16_t_u_s(((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_1291->g_603.wx)).xyyxxyyy)).s7 | (*p_1291->g_28)) || (l_592.y |= ((((VECTOR(int64_t, 8))(l_604.s7f179956)).s6 < ((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(p_1291->g_605.yxyx)).xwywzxzyyzwzxwwz, ((VECTOR(int64_t, 8))((((((safe_div_func_uint16_t_u_u(((p_17 < (safe_mod_func_uint16_t_u_u((~FAKE_DIVERGE(p_1291->local_2_offset, get_local_id(2), 10)), l_578))) < p_16), ((((VECTOR(int16_t, 16))(l_610.s1272565333603467)).s4 || ((((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))((((((*l_623) = ((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_1291->g_615.s62)).xyxyxyxxyxxxxxyy)).s9, ((safe_add_func_int16_t_s_s(((0x7FDAL != ((safe_rshift_func_int8_t_s_s((*p_1291->g_18), (safe_sub_func_int64_t_s_s(((l_577 , (void*)0) != l_622), p_1291->g_213.f4)))) != l_573[6])) >= p_13), p_17)) != (*p_14)))) <= p_1291->g_145[3])) ^ p_1291->g_522.w) ^ p_16) != (-1L)), ((VECTOR(int32_t, 2))(0x4C27D8C9L)), 1L, ((VECTOR(int32_t, 8))(1L)), ((VECTOR(int32_t, 4))(8L)))).s3, p_1291->g_615.s4)) || l_578) && p_17) ^ (-3L))) | 9UL))) != p_16) , p_1291->g_353.x) < p_1291->g_361) | (*p_1291->g_433)), 0x708012272FC78E41L, p_13, ((VECTOR(int64_t, 4))(1L)), (-1L))).s3456727456356253, ((VECTOR(int64_t, 16))((-5L)))))).se) && p_1291->g_112.y))), l_573[4])) >= p_17) != p_17)), p_17)) , 3L));
    if ((((p_1291->g_490.s4++) , &p_13) == (void*)0))
    { /* block id: 220 */
        int32_t l_648 = 3L;
        uint32_t l_653 = 0xF4721648L;
        union U1 *l_654[9][5][5] = {{{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0}},{{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0}},{{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0}},{{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0}},{{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0}},{{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0}},{{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0}},{{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0}},{{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0},{&p_1291->g_93,&p_1291->g_93,(void*)0,&p_1291->g_93,(void*)0}}};
        int32_t *l_660 = &l_575;
        VECTOR(int64_t, 2) l_665 = (VECTOR(int64_t, 2))(1L, 0x2D4CDFA73A7306DCL);
        int32_t *l_670[10] = {&l_575,&l_577,&l_575,&l_575,&l_577,&l_575,&l_575,&l_577,&l_575,&l_575};
        int8_t l_671 = 0L;
        uint8_t l_672 = 0x4AL;
        int64_t **l_675 = &l_623;
        int i, j, k;
        l_592.x ^= ((-1L) & (safe_div_func_int32_t_s_s((((FAKE_DIVERGE(p_1291->group_0_offset, get_group_id(0), 10) & (p_16 , ((255UL == (l_648 ^ (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((((l_653 | (l_654[5][1][0] != (((safe_unary_minus_func_int16_t_s(((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((*l_660) = l_653), 0x00C942F9L)), (safe_div_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_s(l_665.x, l_666)) <= 0x2BL) == p_1291->g_667), GROUP_DIVERGE(1, 1))))) || p_1291->g_522.z))) == p_1291->g_348.y) , &p_1291->g_93))) ^ (*p_1291->g_28)) , p_1291->g_668[8][5]) != &p_1291->g_669), (*p_14))), l_610.s4)))) != 0x363DL))) > p_1291->g_59) & p_1291->g_490.s0), p_13)));
        l_672--;
        (*p_1291->g_679) = l_675;
    }
    else
    { /* block id: 225 */
        uint16_t l_680 = 0xD3AAL;
        int32_t *l_681 = (void*)0;
        int32_t *l_685[6][3] = {{&l_577,&l_577,&l_577},{&l_577,&l_577,&l_577},{&l_577,&l_577,&l_577},{&l_577,&l_577,&l_577},{&l_577,&l_577,&l_577},{&l_577,&l_577,&l_577}};
        int i, j;
        (*p_1291->g_363) = l_680;
    }
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_1291->g_59 p_1291->g_213.f4 p_1291->g_348 p_1291->g_522 p_1291->g_490 p_1291->g_28 p_1291->g_29 p_1291->g_34 p_1291->g_433 p_1291->g_4 p_1291->g_145 p_1291->g_385 p_1291->g_353 p_1291->g_112 p_1291->g_3
 * writes: p_1291->g_59 p_1291->l_comm_values p_1291->g_385 p_1291->g_440 p_1291->g_34 p_1291->g_comm_values
 */
int8_t * func_22(int32_t  p_23, int8_t * p_24, int8_t ** p_25, uint8_t  p_26, struct S2 * p_1291)
{ /* block id: 179 */
    int32_t *l_504 = (void*)0;
    int32_t *l_505 = &p_1291->g_59;
    uint32_t l_510 = 0x995157E5L;
    uint64_t *l_511 = (void*)0;
    VECTOR(uint32_t, 2) l_514 = (VECTOR(uint32_t, 2))(0xC02C04F6L, 4294967295UL);
    VECTOR(uint8_t, 4) l_521 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xD0L), 0xD0L);
    int64_t *l_525[2];
    VECTOR(int16_t, 4) l_534 = (VECTOR(int16_t, 4))(0x57D2L, (VECTOR(int16_t, 2))(0x57D2L, 1L), 1L);
    int32_t l_544 = 0L;
    int32_t l_545[2][4][5] = {{{0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL},{0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL},{0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL},{0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL}},{{0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL},{0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL},{0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL},{0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL,0x6EFCE9EBL}}};
    union U1 *l_553[5][6] = {{&p_1291->g_93,&p_1291->g_93,&p_1291->g_93,&p_1291->g_93,&p_1291->g_93,&p_1291->g_93},{&p_1291->g_93,&p_1291->g_93,&p_1291->g_93,&p_1291->g_93,&p_1291->g_93,&p_1291->g_93},{&p_1291->g_93,&p_1291->g_93,&p_1291->g_93,&p_1291->g_93,&p_1291->g_93,&p_1291->g_93},{&p_1291->g_93,&p_1291->g_93,&p_1291->g_93,&p_1291->g_93,&p_1291->g_93,&p_1291->g_93},{&p_1291->g_93,&p_1291->g_93,&p_1291->g_93,&p_1291->g_93,&p_1291->g_93,&p_1291->g_93}};
    union U1 **l_552 = &l_553[1][4];
    VECTOR(int16_t, 8) l_557 = (VECTOR(int16_t, 8))(0x2EBBL, (VECTOR(int16_t, 4))(0x2EBBL, (VECTOR(int16_t, 2))(0x2EBBL, 0L), 0L), 0L, 0x2EBBL, 0L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_525[i] = (void*)0;
    (*l_505) ^= 9L;
    if (((VECTOR(int32_t, 16))((((p_26 && p_1291->g_213.f4) && ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((l_510 && (((VECTOR(int16_t, 2))((-2L), 0x7501L)).even || ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(65533UL, 0xA5BDL)).yxxyyyxy)).odd, ((VECTOR(uint16_t, 4))(((!(p_1291->g_348.x != ((void*)0 != l_511))) | ((safe_mul_func_uint8_t_u_u((((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(l_514.yy)).yyyx, ((VECTOR(uint32_t, 8))(0xBD6233F2L, ((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((p_1291->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1291->tid, 21))] = (safe_rshift_func_uint8_t_u_u(((void*)0 == &l_510), ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 4))(0x2EL, 0x43L, 3UL, 0x60L)).zxzwwywyxzyxxzxw, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_521.xxxyyxxzyxyxwyxy)).sed)).yxxyyyyxyyxxyxxy, ((VECTOR(uint8_t, 4))(0x8BL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(p_1291->g_522.xwxxxzwwzyywxzxz)).odd)).s04)), 1UL)).yzywywxxwyzwzxyz))))).hi, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(254UL, 255UL, 1UL, (~(safe_lshift_func_int8_t_s_s(((void*)0 == &l_505), (*l_505)))), ((VECTOR(uint8_t, 2))(0x5FL)), 0xCDL, 0x29L)).s0624057031152362)).sa0fc)).zxwyyxzx))).lo, ((VECTOR(uint8_t, 4))(1UL)), ((VECTOR(uint8_t, 4))(255UL))))).xwywwzxzzxzxxyzz)).even, ((VECTOR(uint8_t, 8))(0x7DL)), ((VECTOR(uint8_t, 8))(0x62L))))).s6))), p_1291->g_490.s6)), p_23)) ^ (**p_25)), 0x34AEC9A8L, p_1291->g_34, ((VECTOR(uint32_t, 2))(2UL)), 4294967295UL, 0UL)).hi))).zzzwyzwz, ((VECTOR(uint32_t, 8))(0x38BF6629L))))).s0 != (*p_1291->g_433)), 1L)) , p_23)), ((VECTOR(uint16_t, 2))(9UL)), 0x1FF1L))))).odd)).lo)), 4)), p_23)) & (*l_505))) | p_1291->g_145[1]), ((VECTOR(int32_t, 8))(1L)), p_23, ((VECTOR(int32_t, 2))((-4L))), ((VECTOR(int32_t, 4))(0x7BA75351L)))).sd)
    { /* block id: 182 */
        int16_t *l_528 = &p_1291->g_385;
        int32_t l_529[3][9][1] = {{{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L}},{{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L}},{{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L},{0x61EE1324L}}};
        uint32_t *l_530 = (void*)0;
        uint32_t *l_531 = &p_1291->g_440;
        uint8_t *l_535[8][6][5] = {{{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0}},{{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0}},{{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0}},{{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0}},{{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0}},{{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0}},{{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0}},{{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0},{&p_1291->g_409[0].f0,&p_1291->g_409[0].f0,(void*)0,&p_1291->g_409[0].f0,(void*)0}}};
        int32_t *l_539 = (void*)0;
        int32_t *l_540 = (void*)0;
        int32_t *l_543[10][5][5] = {{{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59}},{{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59}},{{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59}},{{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59}},{{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59}},{{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59}},{{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59}},{{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59}},{{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59}},{{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59},{&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&l_529[1][7][0],&p_1291->g_59}}};
        int i, j, k;
        l_544 &= (safe_mul_func_uint16_t_u_u((((((void*)0 != l_528) | ((*l_531) = ((0L >= 0UL) & (((*l_528) |= l_529[1][3][0]) | 0xC9E0L)))) != (safe_sub_func_int16_t_s_s(l_534.x, (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((void*)0 != l_535[1][5][3]), l_529[1][3][0], 4294967295UL, 0x4F1EA793L)), ((VECTOR(uint32_t, 4))(4294967293UL)), ((VECTOR(uint32_t, 4))(0xAF575507L)), 0xF9084B03L, l_529[1][7][0], 1UL, 0x4379E5F1L)).s5 > 4294967295UL)))) <= l_529[0][4][0]), (*l_505)));
        (*l_505) ^= l_545[1][0][1];
    }
    else
    { /* block id: 187 */
        int16_t *l_554 = &p_1291->g_34;
        uint64_t *l_562 = &p_1291->g_145[1];
        int32_t l_563[8][5] = {{0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL},{0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL},{0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL},{0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL},{0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL},{0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL},{0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL},{0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL,0x12FAC98EL}};
        uint32_t l_564[4][1][5] = {{{0xDFAF60E5L,4294967293UL,4294967293UL,4294967293UL,0xDFAF60E5L}},{{0xDFAF60E5L,4294967293UL,4294967293UL,4294967293UL,0xDFAF60E5L}},{{0xDFAF60E5L,4294967293UL,4294967293UL,4294967293UL,0xDFAF60E5L}},{{0xDFAF60E5L,4294967293UL,4294967293UL,4294967293UL,0xDFAF60E5L}}};
        int i, j, k;
        l_564[0][0][3] = ((((((VECTOR(uint32_t, 8))(6UL, (((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((((safe_mul_func_int16_t_s_s((-3L), ((l_552 == (void*)0) >= ((*l_554) ^= p_1291->g_353.x)))) ^ (safe_lshift_func_int16_t_s_u(p_26, 9))) < ((VECTOR(int16_t, 2))(l_557.s54)).lo) <= (*l_505)), ((((safe_lshift_func_int16_t_s_u(((((p_1291->g_comm_values[p_1291->tid] = ((VECTOR(int64_t, 2))(0x6350970926AFC0FAL, 0x2DDE6033CCD9A0CFL)).lo) != ((((safe_lshift_func_uint16_t_u_s(GROUP_DIVERGE(1, 1), 12)) , &p_1291->g_385) == (void*)0) == (+18446744073709551615UL))) | p_1291->g_112.y) || 18446744073709551615UL), (*l_505))) || FAKE_DIVERGE(p_1291->group_2_offset, get_group_id(2), 10)) , (**p_25)) , GROUP_DIVERGE(2, 1)))) & (-7L)), FAKE_DIVERGE(p_1291->global_1_offset, get_global_id(1), 10))) , 0x47D4L) , (*l_505)), p_26, 0xAD1DD060L, p_1291->g_3, 4294967289UL, 0xC9BB8E25L, 0x4DDDD0A3L)).s3 , (void*)0) != l_562) == (*l_505)) == l_563[4][1]);
    }
    return (*p_25);
}


/* ------------------------------------------ */
/* 
 * reads : p_1291->g_comm_values p_1291->g_66 p_1291->g_28 p_1291->g_29 p_1291->g_82 p_1291->g_93 p_1291->g_59 p_1291->g_2 p_1291->g_18 p_1291->g_19 p_1291->g_36 p_1291->g_93.f0 p_1291->g_145 p_1291->g_112 p_1291->g_4 p_1291->g_147 p_1291->g_150 p_1291->g_34 p_1291->g_174 p_1291->l_comm_values p_1291->g_154 p_1291->g_67 p_1291->g_213 p_1291->g_175 p_1291->g_93.f1 p_1291->g_320 p_1291->g_325 p_1291->g_258 p_1291->g_348 p_1291->g_353 p_1291->g_176 p_1291->g_288 p_1291->g_361 p_1291->g_363 p_1291->g_374 p_1291->g_381 p_1291->g_385 p_1291->g_387 p_1291->g_398 p_1291->g_399 p_1291->g_213.f4 p_1291->g_409 p_1291->g_433 p_1291->g_434 p_1291->g_451 p_1291->g_440 p_1291->g_475 p_1291->g_490
 * writes: p_1291->g_67 p_1291->g_82 p_1291->g_112 p_1291->g_29 p_1291->g_59 p_1291->g_34 p_1291->g_150.f0 p_1291->g_145 p_1291->g_93.f1 p_1291->g_246 p_1291->g_361 p_1291->g_213.f4 p_1291->g_150.f4 p_1291->g_36 p_1291->g_440 p_1291->g_385 p_1291->g_475
 */
int8_t ** func_30(uint64_t  p_31, int64_t  p_32, int32_t  p_33, struct S2 * p_1291)
{ /* block id: 10 */
    uint64_t l_49 = 18446744073709551615UL;
    VECTOR(uint64_t, 4) l_50 = (VECTOR(uint64_t, 4))(0xAF1E2CD8491F199EL, (VECTOR(uint64_t, 2))(0xAF1E2CD8491F199EL, 0UL), 0UL);
    uint64_t *l_221 = &p_1291->g_36;
    uint64_t **l_220 = &l_221;
    int32_t l_224 = 0x7C2631F5L;
    int8_t l_225[7];
    uint64_t *l_226[3][3] = {{&p_1291->g_145[1],&p_1291->g_145[1],&p_1291->g_145[1]},{&p_1291->g_145[1],&p_1291->g_145[1],&p_1291->g_145[1]},{&p_1291->g_145[1],&p_1291->g_145[1],&p_1291->g_145[1]}};
    int32_t l_227[4][6] = {{(-1L),0x58777E27L,(-1L),0x58777E27L,(-1L),(-1L)},{(-1L),0x58777E27L,(-1L),0x58777E27L,(-1L),(-1L)},{(-1L),0x58777E27L,(-1L),0x58777E27L,(-1L),(-1L)},{(-1L),0x58777E27L,(-1L),0x58777E27L,(-1L),(-1L)}};
    uint32_t *l_439 = &p_1291->g_440;
    int16_t *l_441 = &p_1291->g_34;
    VECTOR(uint64_t, 4) l_444 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4608ED7C7D9476D2L), 0x4608ED7C7D9476D2L);
    int32_t l_447 = 0x37C56CB0L;
    uint32_t *l_448 = &p_1291->g_361;
    VECTOR(uint64_t, 8) l_456 = (VECTOR(uint64_t, 8))(0x64169B32522DAC08L, (VECTOR(uint64_t, 4))(0x64169B32522DAC08L, (VECTOR(uint64_t, 2))(0x64169B32522DAC08L, 0UL), 0UL), 0UL, 0x64169B32522DAC08L, 0UL);
    uint8_t *l_461 = &p_1291->g_150.f0;
    int16_t *l_462 = &p_1291->g_385;
    int32_t *l_463 = (void*)0;
    int32_t *l_464 = &l_224;
    int32_t *l_465 = &l_447;
    int32_t *l_466[9];
    int64_t l_467 = 5L;
    int8_t l_468 = (-9L);
    int64_t l_469 = 0x270FC6FD0ECDA607L;
    int16_t l_470[1];
    int32_t l_471 = 1L;
    int16_t l_472[8][3] = {{0x25B0L,0x6B6BL,0x0519L},{0x25B0L,0x6B6BL,0x0519L},{0x25B0L,0x6B6BL,0x0519L},{0x25B0L,0x6B6BL,0x0519L},{0x25B0L,0x6B6BL,0x0519L},{0x25B0L,0x6B6BL,0x0519L},{0x25B0L,0x6B6BL,0x0519L},{0x25B0L,0x6B6BL,0x0519L}};
    int8_t l_473 = 0x29L;
    int32_t l_474 = 0x1AC1A2AFL;
    uint16_t *l_491 = &p_1291->g_150.f4;
    int64_t l_502 = (-1L);
    int8_t **l_503 = &p_1291->g_28;
    int i, j;
    for (i = 0; i < 7; i++)
        l_225[i] = (-10L);
    for (i = 0; i < 9; i++)
        l_466[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_470[i] = 0L;
    (*p_1291->g_434) = func_38(func_40(func_45((((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 4))(l_49, ((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 8))(l_50.wyyzwxzx)).s32, ((VECTOR(uint64_t, 8))(1UL, ((((safe_mod_func_uint64_t_u_u(FAKE_DIVERGE(p_1291->group_0_offset, get_group_id(0), 10), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))((l_227[0][2] ^= ((((safe_add_func_int32_t_s_s((0L > (func_55(p_1291->g_comm_values[p_1291->tid], p_1291) , ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((l_224 = (safe_sub_func_int32_t_s_s((((*l_220) = &p_31) != (*p_1291->g_174)), ((safe_mul_func_int16_t_s_s(8L, p_31)) != GROUP_DIVERGE(2, 1))))), (*p_1291->g_28))), l_225[1])) , l_225[6]))), p_32)) > p_32) , p_32) == p_1291->g_comm_values[p_1291->tid])), ((VECTOR(uint64_t, 8))(18446744073709551609UL)), l_50.y, 18446744073709551611UL, ((VECTOR(uint64_t, 4))(0xC5B4EDB8E35FDD6DL)), 0x4EDA8FA795F43D3EL)).odd)).lo)).lo, ((VECTOR(uint64_t, 2))(0xC4033B0487F1438CL))))).yxyx)).wzxxyzxw)), p_1291->g_145[1], ((VECTOR(uint64_t, 4))(0xFA936F0B847CEFB7L)), 0x72B0FFD9DDA32BF4L, 0x70BC13450B3EC079L, 18446744073709551610UL)).s8d53)).w)) | p_1291->g_36) , 1UL) | p_31), 0x4E2F6267926D8D12L, 1UL, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 5UL, 18446744073709551613UL)).s17))), 0xFB746B9F5D823547L)).zyzxwyxyzywzwxzy, ((VECTOR(uint64_t, 16))(18446744073709551615UL)), ((VECTOR(uint64_t, 16))(0x9D31CD22D570F6F3L))))))).s71bd, (uint64_t)FAKE_DIVERGE(p_1291->global_0_offset, get_global_id(0), 10), (uint64_t)p_33))).w > l_50.y), p_33, &l_225[0], p_1291), p_1291->g_28, p_1291->g_258.x, p_1291->g_154.x, p_1291), p_1291);
    (*l_464) ^= (((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 4))(65535UL, 6UL, 0x0749L, 65533UL)).xwzyxyzz))).s1, ((*l_441) ^= (l_439 != (void*)0)))) & ((p_1291->g_399.x , ((safe_rshift_func_int8_t_s_u((*p_1291->g_28), ((VECTOR(uint8_t, 4))(0xCFL, ((VECTOR(uint8_t, 2))(0x8EL, 0x1BL)), 7UL)).w)) < l_227[0][2])) <= (((VECTOR(uint64_t, 2))(l_444.zw)).hi & (((safe_mul_func_int16_t_s_s(((*l_462) = (((((((++(*l_448)) , (void*)0) != &p_1291->g_82) > ((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 8))(p_1291->g_451.s04316450)).s53, ((VECTOR(uint32_t, 4))(((*l_439) |= (safe_sub_func_uint16_t_u_u((65535UL || ((safe_lshift_func_int8_t_s_u(((((!(p_1291->g_36 &= ((VECTOR(uint64_t, 8))(l_456.s06000111)).s5)) , (safe_lshift_func_uint8_t_u_u(((*l_461) = ((safe_lshift_func_int8_t_s_u(1L, l_456.s2)) ^ l_227[0][2])), 1))) , p_1291->g_258.z) || 1UL), p_31)) < 0L)), 0UL))), ((VECTOR(uint32_t, 2))(0xEF1A4A61L)), 0xC7D1C1EEL)).hi))).hi) != p_33) == p_32) | p_1291->g_374.x)), p_1291->g_381.s2)) || 255UL) , l_225[1])))) > p_33);
    p_1291->g_475++;
    (*l_464) = ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_div_func_uint64_t_u_u((+(((*l_465) |= (safe_lshift_func_uint16_t_u_s(p_32, p_1291->g_4))) < p_32)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))((((safe_div_func_uint16_t_u_u(((*l_491) = (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_1291->g_490.sef9e0721)).s0, 0UL))), ((safe_lshift_func_uint16_t_u_u((((+FAKE_DIVERGE(p_1291->global_0_offset, get_global_id(0), 10)) , (-10L)) && (p_32 <= (safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((*p_1291->g_28) |= (safe_div_func_int32_t_s_s(0x5EB4EC0AL, (p_31 && ((safe_div_func_uint64_t_u_u((p_1291->g_399.y != l_502), p_32)) & 0xC9L))))), p_31)) != 0x3A5724EFL), 250UL)))), p_1291->g_93.f1)) & (*l_464)))) > p_1291->g_374.y) && 0x930A0A979953B479L), 5UL, 0xDFC343078D3A6110L, 18446744073709551614UL, 0x6C3E07A90D696C14L, ((VECTOR(uint64_t, 4))(18446744073709551614UL)), ((VECTOR(uint64_t, 2))(6UL)), p_33, 0UL, 0UL, 0UL, 0xE11F9784323E3699L)).s2337)).zzwxwywyyzzzwxzz)), ((VECTOR(uint64_t, 16))(0xFE0E80FC6764FF33L))))).sf63f)))).z)), p_32)), 11)) <= p_32);
    return l_503;
}


/* ------------------------------------------ */
/* 
 * reads : p_1291->g_93.f0 p_1291->g_374 p_1291->g_381 p_1291->g_34 p_1291->g_348 p_1291->g_154 p_1291->g_385 p_1291->g_28 p_1291->g_325 p_1291->g_93 p_1291->g_82 p_1291->g_145 p_1291->g_320 p_1291->g_29 p_1291->g_387 p_1291->g_398 p_1291->g_399 p_1291->g_213.f4 p_1291->g_59 p_1291->g_353 p_1291->g_67 p_1291->g_409 p_1291->g_433
 * writes: p_1291->g_93.f1 p_1291->g_246 p_1291->g_82 p_1291->g_145 p_1291->g_67 p_1291->g_29 p_1291->g_213.f4 p_1291->g_150.f4 p_1291->g_59
 */
int32_t * func_38(int8_t ** p_39, struct S2 * p_1291)
{ /* block id: 118 */
    uint32_t l_366 = 0x6FD6B7CAL;
    VECTOR(uint16_t, 4) l_371 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x031FL), 0x031FL);
    int32_t *l_377[5][10] = {{&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,(void*)0},{&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,(void*)0},{&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,(void*)0},{&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,(void*)0},{&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,&p_1291->g_288,(void*)0}};
    int32_t l_378[5][7] = {{1L,1L,0x394F8DA1L,0x22368AEAL,8L,0x22368AEAL,0x394F8DA1L},{1L,1L,0x394F8DA1L,0x22368AEAL,8L,0x22368AEAL,0x394F8DA1L},{1L,1L,0x394F8DA1L,0x22368AEAL,8L,0x22368AEAL,0x394F8DA1L},{1L,1L,0x394F8DA1L,0x22368AEAL,8L,0x22368AEAL,0x394F8DA1L},{1L,1L,0x394F8DA1L,0x22368AEAL,8L,0x22368AEAL,0x394F8DA1L}};
    uint32_t l_392 = 1UL;
    VECTOR(int32_t, 8) l_400 = (VECTOR(int32_t, 8))(0x14920950L, (VECTOR(int32_t, 4))(0x14920950L, (VECTOR(int32_t, 2))(0x14920950L, 1L), 1L), 1L, 0x14920950L, 1L);
    int32_t l_408 = 0x5C6A9D26L;
    int32_t *l_431 = &l_378[0][2];
    int32_t *l_432 = &l_378[1][0];
    int i, j;
    if (((func_45(l_366, ((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(0UL, 65535UL, 65532UL, 1UL, 0xE115L, ((VECTOR(uint16_t, 8))(0x5FCDL, ((+((((VECTOR(uint16_t, 2))(l_371.zy)).hi >= ((((p_1291->g_93.f0 & (l_366 && (l_366 || (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(p_1291->g_374.yyyy)).z, ((l_378[0][2] = (l_371.y != (safe_mod_func_int8_t_s_s(0L, l_366)))) , l_378[3][2])))))) > ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(0x56L, 1L, ((VECTOR(int8_t, 8))(p_1291->g_381.s2dbaa731)), ((safe_unary_minus_func_int16_t_s(((VECTOR(int16_t, 16))(0x0813L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(0L, (-2L)))))).yxyyyyxy)).even, (int16_t)(safe_mul_func_uint16_t_u_u((+p_1291->g_34), p_1291->g_348.x)), (int16_t)p_1291->g_154.y))), p_1291->g_374.x, (-4L), (-10L), 0x4739L)), l_366, ((VECTOR(int16_t, 4))(1L)), 0x3518L, (-1L))).s8)) && (-1L)), 0x42L, ((VECTOR(int8_t, 4))(0L)))).s01a7)).xwywyxxzwwxxyxxx, ((VECTOR(int8_t, 16))(0x3FL)), ((VECTOR(int8_t, 16))((-1L)))))).s6, l_366)) || 0x0832L)) , l_371.w) != 0x8D195F23L)) < 0x7F0D242C8DAD5CA5L)) , l_366), 0x6CB4L, 4UL, l_366, ((VECTOR(uint16_t, 2))(0xDB7DL)), 65535UL)), p_1291->g_385, 0x78E6L, 4UL)).even)), ((VECTOR(uint16_t, 8))(0x8A44L))))).s2, l_366)) | 0xD450L), 1)) != l_371.z), (*p_39), p_1291) , 0x03L) || (**p_39)))
    { /* block id: 120 */
        int32_t *l_386 = (void*)0;
        atomic_or(&p_1291->g_atomic_reduction[get_linear_group_id()], l_378[2][0]);
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1291->v_collective += p_1291->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        return l_386;
    }
    else
    { /* block id: 123 */
        int64_t l_397[10][8][3] = {{{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L}},{{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L}},{{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L}},{{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L}},{{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L}},{{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L}},{{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L}},{{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L}},{{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L}},{{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L},{0x163026887E6014EDL,0x3646928EF8292C22L,0x04589D9BE23026E5L}}};
        uint16_t *l_401 = (void*)0;
        uint16_t *l_402 = &p_1291->g_150.f4;
        uint16_t *l_403[3];
        union U1 l_406 = {4L};
        int16_t l_407 = 1L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_403[i] = (void*)0;
        (*p_1291->g_387) = &l_378[1][2];
        (*p_1291->g_67) = (safe_div_func_uint64_t_u_u(((((l_408 ^= (l_392 | ((l_371.w <= (((-6L) >= (safe_mul_func_uint8_t_u_u((((((**p_39) &= l_397[7][3][1]) == ((0L | ((VECTOR(uint16_t, 2))(65535UL, 65526UL)).hi) || (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_1291->g_398.yyyzwxywxywyxxwz)).sac85)))))).y & (l_392 >= p_1291->g_398.x)))) ^ ((((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(p_1291->g_399.yx)).yxxx, (int32_t)l_397[7][3][1]))).wxzyxyzx, ((VECTOR(int32_t, 16))(l_400.s0566475263030644)).odd))).s7 , ((*l_402) = (p_1291->g_213.f4--))) & (l_406 , l_407))) != 0UL), l_378[1][0]))) | p_1291->g_59)) == 0xB2L))) < 0x2EL) >= p_1291->g_353.x) , p_1291->g_381.s4), l_397[7][3][1]));
        (*p_1291->g_67) = l_400.s7;
    }
    (*p_1291->g_67) = ((p_1291->g_409[0] , &l_366) == (void*)0);
    if ((atomic_inc(&p_1291->l_atomic_input[15]) == 4))
    { /* block id: 134 */
        int16_t **l_410 = (void*)0;
        int32_t l_411 = 2L;
        l_410 = (void*)0;
        for (l_411 = 0; (l_411 >= 0); l_411 = safe_add_func_uint64_t_u_u(l_411, 1))
        { /* block id: 138 */
            VECTOR(int32_t, 8) l_414 = (VECTOR(int32_t, 8))(0x794E310CL, (VECTOR(int32_t, 4))(0x794E310CL, (VECTOR(int32_t, 2))(0x794E310CL, 0x7E4F5610L), 0x7E4F5610L), 0x7E4F5610L, 0x794E310CL, 0x7E4F5610L);
            int8_t l_415 = (-1L);
            uint64_t l_416[4][3] = {{0xAEB8FD4B3F3EEA66L,1UL,0xAEB8FD4B3F3EEA66L},{0xAEB8FD4B3F3EEA66L,1UL,0xAEB8FD4B3F3EEA66L},{0xAEB8FD4B3F3EEA66L,1UL,0xAEB8FD4B3F3EEA66L},{0xAEB8FD4B3F3EEA66L,1UL,0xAEB8FD4B3F3EEA66L}};
            VECTOR(int32_t, 8) l_419 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x746414B2L), 0x746414B2L), 0x746414B2L, (-5L), 0x746414B2L);
            int64_t l_420 = 0x5901D7B244248F9BL;
            int16_t l_421 = (-1L);
            VECTOR(int32_t, 16) l_422 = (VECTOR(int32_t, 16))(0x70671AC4L, (VECTOR(int32_t, 4))(0x70671AC4L, (VECTOR(int32_t, 2))(0x70671AC4L, 1L), 1L), 1L, 0x70671AC4L, 1L, (VECTOR(int32_t, 2))(0x70671AC4L, 1L), (VECTOR(int32_t, 2))(0x70671AC4L, 1L), 0x70671AC4L, 1L, 0x70671AC4L, 1L);
            int32_t l_423 = (-10L);
            int i, j;
            l_416[0][0] = (l_415 = ((VECTOR(int32_t, 8))(l_414.s67676525)).s7);
            for (l_416[0][2] = (-19); (l_416[0][2] == 46); l_416[0][2]++)
            { /* block id: 143 */
                l_414.s1 = 0x5A90CAF5L;
            }
            l_423 ^= ((VECTOR(int32_t, 8))((-2L), 0x7AC68343L, (l_421 &= (l_420 = ((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(l_419.s56)), 0x547BACB7L)).y)), ((VECTOR(int32_t, 4))(l_422.s030c)), 0x32D08BC0L)).s1;
        }
        unsigned int result = 0;
        result += l_411;
        atomic_add(&p_1291->l_special_values[15], result);
    }
    else
    { /* block id: 150 */
        (1 + 1);
    }
    for (p_1291->g_59 = 0; (p_1291->g_59 != (-15)); p_1291->g_59 = safe_sub_func_uint32_t_u_u(p_1291->g_59, 3))
    { /* block id: 155 */
        int32_t *l_426[1];
        int32_t **l_427 = &p_1291->g_67;
        VECTOR(int32_t, 8) l_430 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
        int i;
        for (i = 0; i < 1; i++)
            l_426[i] = &p_1291->g_4;
        (*l_427) = l_426[0];
        for (l_366 = (-20); (l_366 > 26); l_366 = safe_add_func_int16_t_s_s(l_366, 5))
        { /* block id: 159 */
            l_408 = ((VECTOR(int32_t, 2))(l_430.s51)).even;
            if (l_408)
                continue;
        }
    }
    return p_1291->g_433;
}


/* ------------------------------------------ */
/* 
 * reads : p_1291->g_93 p_1291->g_258 p_1291->g_348 p_1291->g_353 p_1291->g_28 p_1291->g_29 p_1291->g_82 p_1291->g_176 p_1291->g_36 p_1291->g_34 p_1291->g_288 p_1291->g_18 p_1291->g_19 p_1291->g_361 p_1291->g_363
 * writes: p_1291->g_150.f0 p_1291->g_29 p_1291->g_361 p_1291->g_213.f4 p_1291->g_59 p_1291->g_67
 */
int8_t ** func_40(union U1  p_41, int8_t * p_42, int64_t  p_43, uint32_t  p_44, struct S2 * p_1291)
{ /* block id: 107 */
    uint8_t *l_334 = &p_1291->g_150.f0;
    VECTOR(uint8_t, 16) l_337 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL, (VECTOR(uint8_t, 2))(255UL, 0UL), (VECTOR(uint8_t, 2))(255UL, 0UL), 255UL, 0UL, 255UL, 0UL);
    VECTOR(uint32_t, 8) l_349 = (VECTOR(uint32_t, 8))(0x1E4A687BL, (VECTOR(uint32_t, 4))(0x1E4A687BL, (VECTOR(uint32_t, 2))(0x1E4A687BL, 4294967295UL), 4294967295UL), 4294967295UL, 0x1E4A687BL, 4294967295UL);
    VECTOR(int16_t, 2) l_350 = (VECTOR(int16_t, 2))((-1L), 0x109EL);
    VECTOR(int32_t, 16) l_354 = (VECTOR(int32_t, 16))(0x1DA4BF65L, (VECTOR(int32_t, 4))(0x1DA4BF65L, (VECTOR(int32_t, 2))(0x1DA4BF65L, (-2L)), (-2L)), (-2L), 0x1DA4BF65L, (-2L), (VECTOR(int32_t, 2))(0x1DA4BF65L, (-2L)), (VECTOR(int32_t, 2))(0x1DA4BF65L, (-2L)), 0x1DA4BF65L, (-2L), 0x1DA4BF65L, (-2L));
    int8_t **l_355 = &p_1291->g_28;
    int8_t ***l_356 = &l_355;
    int32_t l_357 = 0x69CE888EL;
    int32_t l_358 = 1L;
    int64_t l_359 = 0x01DC6F38F734D981L;
    uint32_t *l_360 = &p_1291->g_361;
    uint16_t *l_362 = &p_1291->g_213.f4;
    int32_t **l_364 = &p_1291->g_67;
    int8_t **l_365 = &p_1291->g_28;
    int i;
    (*p_1291->g_363) = (p_1291->g_93 , (((safe_add_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(0x759A46947678D6E3L, ((((*l_362) = (((safe_mul_func_uint8_t_u_u(((*l_334) = FAKE_DIVERGE(p_1291->group_1_offset, get_group_id(1), 10)), (~((((*l_360) ^= ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_337.s06973352393e918d)).sba)).xyxyyyyxyxyxxxxy, ((VECTOR(uint8_t, 16))((safe_rshift_func_int8_t_s_u(((((0x2226A998L || ((!(safe_lshift_func_uint16_t_u_s(((p_1291->g_258.w & p_44) ^ (safe_add_func_int8_t_s_s((l_358 = (safe_div_func_int8_t_s_s(((0x44L || (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 2))(p_1291->g_348.yy)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_349.s72)).yyxyyyyyxxxyyyyx)).s0b))), 4294967295UL, ((VECTOR(uint32_t, 2))(0x2F596106L, 0x94D4FCC9L)), 1UL, 0x658C9193L, 4294967289UL)).s00, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))((l_357 ^= ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_350.xy)), (safe_mod_func_uint64_t_u_u(1UL, (((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 4))(p_1291->g_353.xxyy)).hi))))).yyxyxxxxyyyxxyxx, ((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_354.scb6da8ddddbc35ac)).s69)).yyxy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x0967E6ABL, 0x7C311D1FL, 0x4FFACD87L, (-10L))).yzxwyxxz)).lo))).xxzxwzwzxwzzzzxx)).s268f)).zyxwxyxzyxywzyzw)), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_354.sc, 0L, 0x143FD5F5L, 0x2DAAF693L, (((*p_1291->g_28) ^= (((*l_356) = l_355) == &p_42)) && 255UL), 0x428BB21BL, 0L, 0L, p_1291->g_82, 0L, ((VECTOR(int32_t, 2))(0x73CD4C03L)), ((VECTOR(int32_t, 2))(2L)), 0x2CB8CF01L, 0x51F277D8L)).sde58)).lo, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))((-1L)))))).yxyyxyyxyxyyxxyy, ((VECTOR(int32_t, 16))(0x086A7733L)), ((VECTOR(int32_t, 16))(0x672A7677L))))).even)))).s13, ((VECTOR(int32_t, 2))(9L))))).yyxxyyxyxxyyxyxy))).sa2, ((VECTOR(int32_t, 2))(0x6DCEA92AL))))).yyxxyxxxxxxyyyyy, ((VECTOR(int32_t, 16))(0L))))).even, ((VECTOR(uint32_t, 8))(0xFAC9C4EFL))))).s2561326627756016))).s2 , 18446744073709551615UL))), ((VECTOR(int16_t, 2))(0x06ACL)), ((VECTOR(int16_t, 2))(8L)), 1L)).s5240105520350744)).s3c, (int16_t)p_1291->g_176))).xxyy)), ((VECTOR(uint16_t, 4))(0xCEC3L))))), ((VECTOR(int32_t, 4))(0x7F14AEFDL)), ((VECTOR(int32_t, 4))((-4L)))))).zzxxzyzx, ((VECTOR(int32_t, 8))((-2L))), ((VECTOR(int32_t, 8))(0x51A9EF4CL))))), ((VECTOR(int32_t, 8))(0L)))).s8 & p_1291->g_36) != p_1291->g_34)), p_1291->g_353.y, 0xED3A678CL, 6UL)).odd))))).hi, p_44))) & 4294967295UL), p_1291->g_288))), 0x02L))), p_44))) > 8L)) & GROUP_DIVERGE(0, 1)) || l_359) , (*p_1291->g_18)), FAKE_DIVERGE(p_1291->local_1_offset, get_local_id(1), 10))), ((VECTOR(uint8_t, 4))(255UL)), 0x27L, 252UL, ((VECTOR(uint8_t, 8))(0x5EL)), 0xA1L)), ((VECTOR(uint8_t, 16))(1UL))))).sc, 0x1DL)), 65535UL, 1UL, 0x5747L)), FAKE_DIVERGE(p_1291->local_0_offset, get_local_id(0), 10), ((VECTOR(uint16_t, 4))(1UL)), ((VECTOR(uint16_t, 4))(2UL)), ((VECTOR(uint16_t, 2))(65535UL)), 0x4CCFL)), ((VECTOR(uint16_t, 16))(1UL))))).s4c)))).xxxx)), ((VECTOR(uint32_t, 4))(2UL))))).hi)), 0xBFB4D23DL, ((VECTOR(uint32_t, 2))(0xDA0CBD0FL)), 0x034A106FL, 0xD4A0A185L, 0x08D41123L)).s63)).even) , l_357) && p_1291->g_29)))) > 18446744073709551609UL) < l_349.s0)) & l_354.s2) , 0x72BED9113F768B3BL))), l_350.x)), p_1291->g_258.x)) == l_349.s0) == 18446744073709551612UL));
    (*l_364) = &l_357;
    return l_365;
}


/* ------------------------------------------ */
/* 
 * reads : p_1291->g_82 p_1291->g_145 p_1291->g_93.f1 p_1291->g_320 p_1291->g_325 p_1291->g_93
 * writes: p_1291->g_82 p_1291->g_145 p_1291->g_93.f1 p_1291->g_246
 */
union U1  func_45(int64_t  p_46, int64_t  p_47, int8_t * p_48, struct S2 * p_1291)
{ /* block id: 76 */
    int64_t *l_230 = &p_1291->g_82;
    uint64_t *l_231 = (void*)0;
    uint64_t *l_232 = &p_1291->g_145[1];
    int32_t l_235 = 0x5CC1D911L;
    VECTOR(int8_t, 16) l_256 = (VECTOR(int8_t, 16))(0x0BL, (VECTOR(int8_t, 4))(0x0BL, (VECTOR(int8_t, 2))(0x0BL, 0x7FL), 0x7FL), 0x7FL, 0x0BL, 0x7FL, (VECTOR(int8_t, 2))(0x0BL, 0x7FL), (VECTOR(int8_t, 2))(0x0BL, 0x7FL), 0x0BL, 0x7FL, 0x0BL, 0x7FL);
    VECTOR(int8_t, 4) l_257 = (VECTOR(int8_t, 4))(0x69L, (VECTOR(int8_t, 2))(0x69L, 7L), 7L);
    VECTOR(uint32_t, 16) l_273 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967289UL), 4294967289UL), 4294967289UL, 0UL, 4294967289UL, (VECTOR(uint32_t, 2))(0UL, 4294967289UL), (VECTOR(uint32_t, 2))(0UL, 4294967289UL), 0UL, 4294967289UL, 0UL, 4294967289UL);
    uint16_t l_289 = 4UL;
    int32_t l_293 = 1L;
    uint8_t l_303 = 0x0CL;
    uint32_t l_316 = 0x607C4CD5L;
    VECTOR(uint32_t, 8) l_321 = (VECTOR(uint32_t, 8))(0x96A55C0BL, (VECTOR(uint32_t, 4))(0x96A55C0BL, (VECTOR(uint32_t, 2))(0x96A55C0BL, 0UL), 0UL), 0UL, 0x96A55C0BL, 0UL);
    VECTOR(uint32_t, 2) l_322 = (VECTOR(uint32_t, 2))(0x32172D3BL, 4294967295UL);
    VECTOR(uint32_t, 8) l_323 = (VECTOR(uint32_t, 8))(0xB10A179DL, (VECTOR(uint32_t, 4))(0xB10A179DL, (VECTOR(uint32_t, 2))(0xB10A179DL, 0xE19E99FDL), 0xE19E99FDL), 0xE19E99FDL, 0xB10A179DL, 0xE19E99FDL);
    VECTOR(uint32_t, 2) l_324 = (VECTOR(uint32_t, 2))(0xE722CEAEL, 1UL);
    int i, j;
    atomic_max(&p_1291->l_atomic_reduction[0], ((safe_div_func_int64_t_s_s(((*l_230) |= 0L), ((*l_232)--))) , l_235));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1291->v_collective += p_1291->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    for (p_1291->g_93.f1 = 0; (p_1291->g_93.f1 > 2); p_1291->g_93.f1++)
    { /* block id: 82 */
        VECTOR(uint16_t, 16) l_238 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x5A16L), 0x5A16L), 0x5A16L, 0UL, 0x5A16L, (VECTOR(uint16_t, 2))(0UL, 0x5A16L), (VECTOR(uint16_t, 2))(0UL, 0x5A16L), 0UL, 0x5A16L, 0UL, 0x5A16L);
        int32_t *l_240[5][3] = {{&l_235,&p_1291->g_59,&l_235},{&l_235,&p_1291->g_59,&l_235},{&l_235,&p_1291->g_59,&l_235},{&l_235,&p_1291->g_59,&l_235},{&l_235,&p_1291->g_59,&l_235}};
        int32_t **l_245 = (void*)0;
        int32_t **l_247 = &l_240[0][1];
        VECTOR(uint32_t, 16) l_254 = (VECTOR(uint32_t, 16))(0xC3B88169L, (VECTOR(uint32_t, 4))(0xC3B88169L, (VECTOR(uint32_t, 2))(0xC3B88169L, 0UL), 0UL), 0UL, 0xC3B88169L, 0UL, (VECTOR(uint32_t, 2))(0xC3B88169L, 0UL), (VECTOR(uint32_t, 2))(0xC3B88169L, 0UL), 0xC3B88169L, 0UL, 0xC3B88169L, 0UL);
        VECTOR(int8_t, 4) l_255 = (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), (-1L)), (-1L));
        uint8_t *l_263 = &p_1291->g_150.f0;
        VECTOR(uint32_t, 4) l_272 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL);
        uint8_t *l_280[5] = {&p_1291->g_213.f0,&p_1291->g_213.f0,&p_1291->g_213.f0,&p_1291->g_213.f0,&p_1291->g_213.f0};
        uint64_t l_283 = 0UL;
        uint32_t *l_284 = (void*)0;
        uint32_t *l_285 = (void*)0;
        uint32_t *l_286 = (void*)0;
        uint32_t *l_287[6][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        union U1 *l_291 = &p_1291->g_93;
        union U1 **l_290 = &l_291;
        union U1 *l_292 = &p_1291->g_93;
        int8_t **l_319[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_319[i] = &p_1291->g_28;
        l_235 = l_238.sb;
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1291->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 21)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 16))(p_1291->g_320.wyyzwxzyyyyzzyxw)), ((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 16))(abs(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_321.s2671)))).ywxzxxywyxyzzzwz))).s4bcd, ((VECTOR(uint32_t, 2))(l_322.yx)).yxyy, ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 2))(0x37EBF149L, 0UL)).xxyyyyyx, ((VECTOR(uint32_t, 16))(l_323.s5136253476641213)).even, ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 2))(l_324.xy)).yyyyxxxxxyxyyxyy, ((VECTOR(uint32_t, 2))(4294967291UL, 0x3655EE23L)).yyxxyxxxxyyyyxyx))).lo))).lo))).yyyzxzwzzxyxxzwy))).sc, 10))][(safe_mod_func_uint32_t_u_u(p_1291->tid, 21))]));
    (*p_1291->g_325) = &l_293;
    return p_1291->g_93;
}


/* ------------------------------------------ */
/* 
 * reads : p_1291->g_66 p_1291->g_28 p_1291->g_29 p_1291->g_82 p_1291->g_93 p_1291->g_59 p_1291->g_2 p_1291->g_18 p_1291->g_19 p_1291->g_36 p_1291->g_comm_values p_1291->g_93.f0 p_1291->g_145 p_1291->g_112 p_1291->g_4 p_1291->g_147 p_1291->g_150 p_1291->g_34 p_1291->g_174 p_1291->l_comm_values p_1291->g_154 p_1291->g_67 p_1291->g_213
 * writes: p_1291->g_67 p_1291->g_82 p_1291->g_112 p_1291->g_29 p_1291->g_59 p_1291->g_34 p_1291->g_150.f0
 */
union U0  func_55(int64_t  p_56, struct S2 * p_1291)
{ /* block id: 11 */
    int16_t l_57[4] = {(-1L),(-1L),(-1L),(-1L)};
    int32_t *l_58 = &p_1291->g_59;
    int32_t *l_60 = &p_1291->g_59;
    int32_t *l_61 = &p_1291->g_59;
    int32_t *l_62[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t l_63 = 0x9639L;
    int i;
    ++l_63;
    (*p_1291->g_66) = l_62[4];
    (*l_60) = (safe_sub_func_int8_t_s_s((func_70(&l_58, l_61, p_1291) , (safe_lshift_func_int8_t_s_s(((void*)0 != (*p_1291->g_66)), ((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(p_1291->g_145[4], p_1291->g_145[3])) >= ((p_1291->g_93.f0 , l_61) == l_62[0])), (-4L))), 0L)) < 255UL)))), p_56));
    return p_1291->g_213;
}


/* ------------------------------------------ */
/* 
 * reads : p_1291->g_28 p_1291->g_29 p_1291->g_82 p_1291->g_93 p_1291->g_59 p_1291->g_2 p_1291->g_18 p_1291->g_19 p_1291->g_36 p_1291->g_comm_values p_1291->g_93.f0 p_1291->g_145 p_1291->g_112 p_1291->g_4 p_1291->g_147 p_1291->g_150 p_1291->g_34 p_1291->g_174 p_1291->l_comm_values p_1291->g_154
 * writes: p_1291->g_82 p_1291->g_112 p_1291->g_29 p_1291->g_59 p_1291->g_34 p_1291->g_150.f0
 */
uint32_t  func_70(int32_t ** p_71, int32_t * p_72, struct S2 * p_1291)
{ /* block id: 14 */
    int32_t *l_75[3];
    uint64_t *l_79 = &p_1291->g_36;
    uint64_t *l_81 = &p_1291->g_36;
    uint64_t **l_80 = &l_81;
    int64_t l_94 = 0x4E4AF0E761D3F42BL;
    union U1 *l_151[9][2] = {{&p_1291->g_93,&p_1291->g_93},{&p_1291->g_93,&p_1291->g_93},{&p_1291->g_93,&p_1291->g_93},{&p_1291->g_93,&p_1291->g_93},{&p_1291->g_93,&p_1291->g_93},{&p_1291->g_93,&p_1291->g_93},{&p_1291->g_93,&p_1291->g_93},{&p_1291->g_93,&p_1291->g_93},{&p_1291->g_93,&p_1291->g_93}};
    uint32_t l_159 = 0UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_75[i] = &p_1291->g_59;
    l_151[0][1] = ((safe_div_func_int16_t_s_s((l_75[1] != (func_76(((l_79 != &p_1291->g_36) > (((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 16))((-1L), 0x2FL, (&p_1291->g_36 != ((*l_80) = l_79)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))((-1L), ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))((-4L), (p_1291->g_82 ^= (*p_1291->g_28)), 0x5FL, (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(((((safe_add_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((p_1291->g_93 , (*p_72)), (~p_1291->g_2))) & 0xDF337836L) , l_94), (*p_1291->g_28))) , p_1291->g_2) && 0L) >= 0x33A9B92FL), 0L)), 5)), (*p_1291->g_28))), ((VECTOR(int8_t, 4))(0x07L)))).s23, ((VECTOR(int8_t, 2))(0x6DL)), ((VECTOR(int8_t, 2))((-5L)))))), 0x69L, 5L, ((VECTOR(int8_t, 4))(0x60L)), (*p_1291->g_28), 1L, (*p_1291->g_28), ((VECTOR(int8_t, 4))(0x5DL)))).s7e)), (*p_1291->g_18), (-1L), ((VECTOR(int8_t, 2))(0x0FL)), ((VECTOR(int8_t, 4))(1L)), 0x3EL, 0x1BL, (-3L))).hi, ((VECTOR(int8_t, 8))(7L))))).s0 < (*p_1291->g_28))), p_1291->g_36, p_1291) , (void*)0)), p_1291->g_36)) , l_151[5][1]);
    for (p_1291->g_34 = 0; (p_1291->g_34 == 11); p_1291->g_34 = safe_add_func_uint32_t_u_u(p_1291->g_34, 4))
    { /* block id: 36 */
        int32_t l_157 = 9L;
        uint64_t l_186 = 0xE4F299C82483C1FDL;
        int32_t l_187 = 0L;
        (*p_71) = (*p_71);
        (*p_72) = ((VECTOR(int32_t, 8))(p_1291->g_154.xxxyxyyy)).s1;
        for (p_1291->g_29 = 4; (p_1291->g_29 < 18); p_1291->g_29 = safe_add_func_int32_t_s_s(p_1291->g_29, 1))
        { /* block id: 41 */
            int8_t l_158 = 0x73L;
            int32_t l_177 = 0x06D89AF0L;
            --l_159;
            (*p_71) = (void*)0;
            l_187 &= (((((safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s(l_158, (((safe_rshift_func_uint8_t_u_u(((((VECTOR(uint64_t, 2))(0UL, 18446744073709551606UL)).odd ^ ((safe_div_func_uint32_t_u_u(((l_157 & (((*p_72) = (safe_lshift_func_uint16_t_u_s((l_177 = (FAKE_DIVERGE(p_1291->local_0_offset, get_local_id(0), 10) ^ ((p_1291->g_174 == &p_1291->g_175) > p_1291->g_112.y))), 1))) , ((((-1L) > p_1291->g_112.x) < (65530UL == (safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((((safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(l_157, l_186)), 0x5D7125C51E81E1FAL)) , (*p_1291->g_28)) & p_1291->g_145[1]) == 2L) & p_1291->g_59), p_1291->g_34)), 0UL)))) < l_158))) && (*p_72)), (-8L))) , l_158)) || (*p_1291->g_147)), l_186)) == 255UL) < l_157))), p_1291->g_145[2])), p_1291->g_93.f0)) , (void*)0) == (void*)0) , l_186) | l_158);
        }
        (*p_71) = (void*)0;
    }
    (*p_72) ^= ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(1L, (-5L))).yxxx, (int32_t)1L))).w;
    for (l_159 = 1; (l_159 < 57); l_159++)
    { /* block id: 53 */
        uint16_t l_198 = 65534UL;
        uint8_t *l_201[3];
        int32_t l_202 = 0x22A015E9L;
        int i;
        for (i = 0; i < 3; i++)
            l_201[i] = &p_1291->g_150.f0;
        for (p_1291->g_82 = (-27); (p_1291->g_82 < 15); p_1291->g_82 = safe_add_func_int32_t_s_s(p_1291->g_82, 7))
        { /* block id: 56 */
            int32_t *l_195 = (void*)0;
            int32_t l_196 = 0x0AD10CE5L;
            int32_t l_197 = 0x155C0BBCL;
            for (l_94 = 27; (l_94 <= (-7)); --l_94)
            { /* block id: 59 */
                int8_t l_194 = 6L;
                return l_194;
            }
            (*p_71) = l_195;
            ++l_198;
            if ((*p_72))
                break;
        }
        (*p_72) = ((((*p_1291->g_28) , (0UL ^ (~(p_1291->g_150.f0 = (l_202 = l_198))))) ^ (safe_sub_func_int64_t_s_s((((0xB368D4868E2EF629L != p_1291->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1291->tid, 21))]) < (*p_72)) , l_198), p_1291->g_2))) != (*p_72));
    }
    return p_1291->g_154.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1291->g_36 p_1291->g_comm_values p_1291->g_93.f0 p_1291->g_29 p_1291->g_2 p_1291->g_145 p_1291->g_112 p_1291->g_28 p_1291->g_82 p_1291->g_4 p_1291->g_147 p_1291->g_150
 * writes: p_1291->g_112 p_1291->g_29 p_1291->g_59
 */
union U0  func_76(uint16_t  p_77, uint32_t  p_78, struct S2 * p_1291)
{ /* block id: 17 */
    int8_t **l_95 = &p_1291->g_28;
    uint64_t *l_102 = &p_1291->g_36;
    uint64_t **l_103 = &l_102;
    uint64_t *l_105 = &p_1291->g_36;
    uint64_t **l_104 = &l_105;
    int32_t l_108[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint64_t l_109 = 1UL;
    int32_t l_110 = 1L;
    uint16_t *l_111 = (void*)0;
    uint16_t *l_113 = (void*)0;
    uint16_t *l_114[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint16_t, 4) l_115 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 3UL), 3UL);
    VECTOR(uint8_t, 2) l_132 = (VECTOR(uint8_t, 2))(0x24L, 0xCEL);
    int32_t *l_135 = &l_108[0];
    VECTOR(int8_t, 8) l_138 = (VECTOR(int8_t, 8))(0x24L, (VECTOR(int8_t, 4))(0x24L, (VECTOR(int8_t, 2))(0x24L, (-1L)), (-1L)), (-1L), 0x24L, (-1L));
    int32_t l_146 = 0L;
    int i;
    l_95 = l_95;
    l_108[0] = (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))((p_1291->g_112.x = ((p_78 < (((((((safe_rshift_func_int16_t_s_u((((*l_103) = l_102) != ((*l_104) = (void*)0)), 11)) == (0x59L >= ((((safe_mul_func_int16_t_s_s(l_108[0], l_108[7])) <= l_109) > p_77) & l_108[0]))) < GROUP_DIVERGE(1, 1)) ^ p_77) > l_110) || p_78) >= 2L)) != l_109)), 0x9E31L, p_1291->g_36, 65535UL, ((VECTOR(uint16_t, 4))(65535UL)), l_108[7], FAKE_DIVERGE(p_1291->group_1_offset, get_group_id(1), 10), 1UL, 0UL, l_109, p_77, 0x7A08L, 0x8F7CL)).odd)).s33)), ((VECTOR(uint16_t, 2))(0xB1B7L))))).yxxx)).wxywzwzx)).s2, 2));
    (*p_1291->g_147) = (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_115.ww)).xxyx)).yzxyywyw)).s5 <= ((safe_mod_func_int8_t_s_s(((p_1291->g_comm_values[p_1291->tid] , (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(p_1291->g_36, (safe_sub_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((((248UL > (0x01L || (safe_mul_func_uint8_t_u_u(((-1L) <= (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(l_132.yyyxyyxxxyyxxyxx)).s4, (safe_add_func_int32_t_s_s(p_1291->g_93.f0, ((*l_135) &= p_77)))))), (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 8))(l_138.s65516757)).s7, ((**l_95) = (safe_sub_func_uint32_t_u_u(p_1291->g_29, (~(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(2L, (-9L))))).hi > ((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 8))(p_78, p_77, 0x4000L, p_1291->g_2, 0x2D3DL, ((VECTOR(int16_t, 2))((-2L))), 0x7237L)), (int16_t)0x575DL, (int16_t)p_1291->g_145[1]))).s7, p_1291->g_112.x)) >= 0L)))))))))))) >= p_1291->g_82) ^ p_1291->g_comm_values[p_1291->tid]), l_132.x)) ^ l_146), p_1291->g_36)))), p_1291->g_comm_values[p_1291->tid])), p_78))) != p_1291->g_4), 0xE6L)) & 65532UL));
    if ((atomic_inc(&p_1291->l_atomic_input[68]) == 5))
    { /* block id: 27 */
        int8_t l_148[6][8] = {{0x60L,0x25L,(-1L),0x25L,0x60L,0x60L,0x25L,(-1L)},{0x60L,0x25L,(-1L),0x25L,0x60L,0x60L,0x25L,(-1L)},{0x60L,0x25L,(-1L),0x25L,0x60L,0x60L,0x25L,(-1L)},{0x60L,0x25L,(-1L),0x25L,0x60L,0x60L,0x25L,(-1L)},{0x60L,0x25L,(-1L),0x25L,0x60L,0x60L,0x25L,(-1L)},{0x60L,0x25L,(-1L),0x25L,0x60L,0x60L,0x25L,(-1L)}};
        int16_t l_149 = 0x23B5L;
        int i, j;
        l_149 = l_148[5][7];
        unsigned int result = 0;
        int l_148_i0, l_148_i1;
        for (l_148_i0 = 0; l_148_i0 < 6; l_148_i0++) {
            for (l_148_i1 = 0; l_148_i1 < 8; l_148_i1++) {
                result += l_148[l_148_i0][l_148_i1];
            }
        }
        result += l_149;
        atomic_add(&p_1291->l_special_values[68], result);
    }
    else
    { /* block id: 29 */
        (1 + 1);
    }
    return p_1291->g_150;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[98];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 98; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[98];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 98; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[21];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 21; i++)
            l_comm_values[i] = 1;
    struct S2 c_1292;
    struct S2* p_1291 = &c_1292;
    struct S2 c_1293 = {
        (-9L), // p_1291->g_2
        0x49F845D8L, // p_1291->g_3
        0x07B4BC66L, // p_1291->g_4
        (-1L), // p_1291->g_19
        &p_1291->g_19, // p_1291->g_18
        (void*)0, // p_1291->g_20
        8L, // p_1291->g_29
        &p_1291->g_29, // p_1291->g_28
        1L, // p_1291->g_34
        0x0223DEC995F7626AL, // p_1291->g_36
        5L, // p_1291->g_59
        &p_1291->g_59, // p_1291->g_67
        &p_1291->g_67, // p_1291->g_66
        0x4433F2F19166C0C0L, // p_1291->g_82
        {0x590C99E8488E6FCAL}, // p_1291->g_93
        (VECTOR(uint16_t, 2))(0xDB14L, 0xAA0FL), // p_1291->g_112
        {1UL,1UL,1UL,1UL,1UL,1UL}, // p_1291->g_145
        &p_1291->g_59, // p_1291->g_147
        {0xE7L}, // p_1291->g_150
        (VECTOR(int32_t, 2))((-1L), 0x1A072CE3L), // p_1291->g_154
        6UL, // p_1291->g_176
        &p_1291->g_176, // p_1291->g_175
        &p_1291->g_175, // p_1291->g_174
        {0xB8L}, // p_1291->g_213
        {{&p_1291->g_4,(void*)0,&p_1291->g_59,(void*)0,&p_1291->g_4,&p_1291->g_4},{&p_1291->g_4,(void*)0,&p_1291->g_59,(void*)0,&p_1291->g_4,&p_1291->g_4},{&p_1291->g_4,(void*)0,&p_1291->g_59,(void*)0,&p_1291->g_4,&p_1291->g_4},{&p_1291->g_4,(void*)0,&p_1291->g_59,(void*)0,&p_1291->g_4,&p_1291->g_4}}, // p_1291->g_239
        {{&p_1291->g_4,&p_1291->g_4,&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&p_1291->g_4},{&p_1291->g_4,&p_1291->g_4,&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&p_1291->g_4},{&p_1291->g_4,&p_1291->g_4,&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&p_1291->g_4},{&p_1291->g_4,&p_1291->g_4,&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&p_1291->g_4},{&p_1291->g_4,&p_1291->g_4,&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&p_1291->g_4},{&p_1291->g_4,&p_1291->g_4,&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&p_1291->g_59,&p_1291->g_59,&p_1291->g_4,&p_1291->g_4}}, // p_1291->g_246
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x2BL), 0x2BL), // p_1291->g_258
        0L, // p_1291->g_288
        (VECTOR(uint32_t, 4))(0x7710A52FL, (VECTOR(uint32_t, 2))(0x7710A52FL, 1UL), 1UL), // p_1291->g_320
        &p_1291->g_246[2][8], // p_1291->g_325
        (VECTOR(uint32_t, 2))(0xF37000E7L, 0UL), // p_1291->g_348
        (VECTOR(uint32_t, 2))(4294967290UL, 0x02E37A11L), // p_1291->g_353
        0x603F32B0L, // p_1291->g_361
        &p_1291->g_59, // p_1291->g_363
        (VECTOR(int16_t, 2))(1L, (-8L)), // p_1291->g_374
        (VECTOR(int8_t, 16))(0x67L, (VECTOR(int8_t, 4))(0x67L, (VECTOR(int8_t, 2))(0x67L, 0x51L), 0x51L), 0x51L, 0x67L, 0x51L, (VECTOR(int8_t, 2))(0x67L, 0x51L), (VECTOR(int8_t, 2))(0x67L, 0x51L), 0x67L, 0x51L, 0x67L, 0x51L), // p_1291->g_381
        0x2BC9L, // p_1291->g_385
        &p_1291->g_67, // p_1291->g_387
        (VECTOR(int8_t, 4))(0x3BL, (VECTOR(int8_t, 2))(0x3BL, 0L), 0L), // p_1291->g_398
        (VECTOR(int32_t, 2))((-10L), 0x76E3C893L), // p_1291->g_399
        {{0x7CL}}, // p_1291->g_409
        &p_1291->g_4, // p_1291->g_433
        &p_1291->g_246[2][8], // p_1291->g_434
        3UL, // p_1291->g_440
        (VECTOR(uint32_t, 8))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0x89435986L), 0x89435986L), 0x89435986L, 4294967291UL, 0x89435986L), // p_1291->g_451
        65532UL, // p_1291->g_475
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x07B7L), 0x07B7L), 0x07B7L, 1UL, 0x07B7L, (VECTOR(uint16_t, 2))(1UL, 0x07B7L), (VECTOR(uint16_t, 2))(1UL, 0x07B7L), 1UL, 0x07B7L, 1UL, 0x07B7L), // p_1291->g_490
        (VECTOR(uint8_t, 4))(0x60L, (VECTOR(uint8_t, 2))(0x60L, 0xBBL), 0xBBL), // p_1291->g_522
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_1291->g_536
        (void*)0, // p_1291->g_537
        (void*)0, // p_1291->g_538
        (void*)0, // p_1291->g_541
        (void*)0, // p_1291->g_542
        &p_1291->g_246[2][8], // p_1291->g_568
        (void*)0, // p_1291->g_588
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 9UL), 9UL), // p_1291->g_603
        (VECTOR(int64_t, 2))(0x0200E85766622D7EL, 0x64E25CEC6D105292L), // p_1291->g_605
        (VECTOR(uint32_t, 16))(0x65E5A978L, (VECTOR(uint32_t, 4))(0x65E5A978L, (VECTOR(uint32_t, 2))(0x65E5A978L, 0xC1C4E5A2L), 0xC1C4E5A2L), 0xC1C4E5A2L, 0x65E5A978L, 0xC1C4E5A2L, (VECTOR(uint32_t, 2))(0x65E5A978L, 0xC1C4E5A2L), (VECTOR(uint32_t, 2))(0x65E5A978L, 0xC1C4E5A2L), 0x65E5A978L, 0xC1C4E5A2L, 0x65E5A978L, 0xC1C4E5A2L), // p_1291->g_615
        0x7F56L, // p_1291->g_644
        &p_1291->g_644, // p_1291->g_643
        0x63952808L, // p_1291->g_667
        &p_1291->g_28, // p_1291->g_669
        {{&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669},{&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669},{&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669},{&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669},{&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669},{&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669},{&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669},{&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669},{&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669,(void*)0,&p_1291->g_669,&p_1291->g_669,&p_1291->g_669}}, // p_1291->g_668
        (void*)0, // p_1291->g_678
        &p_1291->g_678, // p_1291->g_677
        {&p_1291->g_677,&p_1291->g_677,&p_1291->g_677,&p_1291->g_677,&p_1291->g_677,&p_1291->g_677,&p_1291->g_677,&p_1291->g_677}, // p_1291->g_676
        &p_1291->g_677, // p_1291->g_679
        (void*)0, // p_1291->g_682
        (void*)0, // p_1291->g_683
        (void*)0, // p_1291->g_684
        (void*)0, // p_1291->g_703
        &p_1291->g_213.f0, // p_1291->g_704
        &p_1291->g_93, // p_1291->g_712
        &p_1291->g_712, // p_1291->g_711
        (VECTOR(int64_t, 2))(0x33DC624770CE0866L, 5L), // p_1291->g_719
        (VECTOR(int64_t, 16))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0x09903BFBBF601BF8L), 0x09903BFBBF601BF8L), 0x09903BFBBF601BF8L, 2L, 0x09903BFBBF601BF8L, (VECTOR(int64_t, 2))(2L, 0x09903BFBBF601BF8L), (VECTOR(int64_t, 2))(2L, 0x09903BFBBF601BF8L), 2L, 0x09903BFBBF601BF8L, 2L, 0x09903BFBBF601BF8L), // p_1291->g_721
        (VECTOR(int64_t, 16))(0x09B3D10CF41FF885L, (VECTOR(int64_t, 4))(0x09B3D10CF41FF885L, (VECTOR(int64_t, 2))(0x09B3D10CF41FF885L, 5L), 5L), 5L, 0x09B3D10CF41FF885L, 5L, (VECTOR(int64_t, 2))(0x09B3D10CF41FF885L, 5L), (VECTOR(int64_t, 2))(0x09B3D10CF41FF885L, 5L), 0x09B3D10CF41FF885L, 5L, 0x09B3D10CF41FF885L, 5L), // p_1291->g_722
        (VECTOR(uint16_t, 16))(0x00C8L, (VECTOR(uint16_t, 4))(0x00C8L, (VECTOR(uint16_t, 2))(0x00C8L, 0x3215L), 0x3215L), 0x3215L, 0x00C8L, 0x3215L, (VECTOR(uint16_t, 2))(0x00C8L, 0x3215L), (VECTOR(uint16_t, 2))(0x00C8L, 0x3215L), 0x00C8L, 0x3215L, 0x00C8L, 0x3215L), // p_1291->g_725
        (VECTOR(int64_t, 2))(0x3DE289A63D04BBD3L, 0x110A1835F915584CL), // p_1291->g_727
        (VECTOR(uint16_t, 8))(0xACD5L, (VECTOR(uint16_t, 4))(0xACD5L, (VECTOR(uint16_t, 2))(0xACD5L, 0x0C86L), 0x0C86L), 0x0C86L, 0xACD5L, 0x0C86L), // p_1291->g_730
        (void*)0, // p_1291->g_731
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0AFEL), 0x0AFEL), 0x0AFEL, (-1L), 0x0AFEL), // p_1291->g_744
        (VECTOR(int16_t, 2))(0x7F05L, (-1L)), // p_1291->g_745
        (VECTOR(int16_t, 2))((-7L), 0x770AL), // p_1291->g_747
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3CBEL), 0x3CBEL), // p_1291->g_748
        (VECTOR(int16_t, 16))(0x7A89L, (VECTOR(int16_t, 4))(0x7A89L, (VECTOR(int16_t, 2))(0x7A89L, 0x7D90L), 0x7D90L), 0x7D90L, 0x7A89L, 0x7D90L, (VECTOR(int16_t, 2))(0x7A89L, 0x7D90L), (VECTOR(int16_t, 2))(0x7A89L, 0x7D90L), 0x7A89L, 0x7D90L, 0x7A89L, 0x7D90L), // p_1291->g_749
        (VECTOR(uint8_t, 16))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 248UL), 248UL), 248UL, 7UL, 248UL, (VECTOR(uint8_t, 2))(7UL, 248UL), (VECTOR(uint8_t, 2))(7UL, 248UL), 7UL, 248UL, 7UL, 248UL), // p_1291->g_754
        {&p_1291->g_59,&p_1291->g_59,&p_1291->g_59,&p_1291->g_59,&p_1291->g_59,&p_1291->g_59,&p_1291->g_59}, // p_1291->g_828
        {{{0xAAL},{0xAAL},{0xAAL},{0xAAL},{0xAAL},{0xAAL},{0xAAL}},{{0xAAL},{0xAAL},{0xAAL},{0xAAL},{0xAAL},{0xAAL},{0xAAL}},{{0xAAL},{0xAAL},{0xAAL},{0xAAL},{0xAAL},{0xAAL},{0xAAL}},{{0xAAL},{0xAAL},{0xAAL},{0xAAL},{0xAAL},{0xAAL},{0xAAL}},{{0xAAL},{0xAAL},{0xAAL},{0xAAL},{0xAAL},{0xAAL},{0xAAL}}}, // p_1291->g_834
        &p_1291->g_34, // p_1291->g_863
        &p_1291->g_863, // p_1291->g_862
        0x29L, // p_1291->g_873
        (VECTOR(uint8_t, 2))(255UL, 0x63L), // p_1291->g_878
        (-1L), // p_1291->g_899
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL), // p_1291->g_915
        (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x1301L), 0x1301L), // p_1291->g_930
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL), // p_1291->g_931
        (VECTOR(int64_t, 4))(0x146F842D9D4525DBL, (VECTOR(int64_t, 2))(0x146F842D9D4525DBL, 0x4717D4C8F72B4AFCL), 0x4717D4C8F72B4AFCL), // p_1291->g_941
        (VECTOR(uint64_t, 2))(0xB2FC4CD4C719C1C7L, 6UL), // p_1291->g_946
        (VECTOR(int32_t, 8))(0x45B825BBL, (VECTOR(int32_t, 4))(0x45B825BBL, (VECTOR(int32_t, 2))(0x45B825BBL, (-1L)), (-1L)), (-1L), 0x45B825BBL, (-1L)), // p_1291->g_952
        &p_1291->g_67, // p_1291->g_965
        (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), (-7L)), (-7L)), // p_1291->g_972
        {{{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL}},{{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL}},{{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL}},{{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL}},{{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL}},{{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL}},{{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL}},{{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL},{9UL,65535UL}}}, // p_1291->g_977
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x6042AFC6L), 0x6042AFC6L), // p_1291->g_982
        (VECTOR(int16_t, 8))(0x68C6L, (VECTOR(int16_t, 4))(0x68C6L, (VECTOR(int16_t, 2))(0x68C6L, (-6L)), (-6L)), (-6L), 0x68C6L, (-6L)), // p_1291->g_1011
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 5L), 5L), 5L, 0L, 5L, (VECTOR(int32_t, 2))(0L, 5L), (VECTOR(int32_t, 2))(0L, 5L), 0L, 5L, 0L, 5L), // p_1291->g_1012
        (VECTOR(int32_t, 2))(0x24E5A19FL, (-10L)), // p_1291->g_1013
        (VECTOR(int32_t, 2))(0x0C7878A3L, 0x5D48C3B4L), // p_1291->g_1016
        (VECTOR(uint8_t, 8))(0xF8L, (VECTOR(uint8_t, 4))(0xF8L, (VECTOR(uint8_t, 2))(0xF8L, 0x9BL), 0x9BL), 0x9BL, 0xF8L, 0x9BL), // p_1291->g_1018
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7F065D93L), 0x7F065D93L), // p_1291->g_1022
        (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0x7EABL), 0x7EABL), // p_1291->g_1029
        &p_1291->g_440, // p_1291->g_1037
        (void*)0, // p_1291->g_1038
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x036E4F2CL), 0x036E4F2CL), 0x036E4F2CL, 1L, 0x036E4F2CL), // p_1291->g_1047
        (VECTOR(int32_t, 8))(0x488BD418L, (VECTOR(int32_t, 4))(0x488BD418L, (VECTOR(int32_t, 2))(0x488BD418L, 0L), 0L), 0L, 0x488BD418L, 0L), // p_1291->g_1048
        (VECTOR(int16_t, 8))(0x015BL, (VECTOR(int16_t, 4))(0x015BL, (VECTOR(int16_t, 2))(0x015BL, 0L), 0L), 0L, 0x015BL, 0L), // p_1291->g_1051
        (VECTOR(int8_t, 16))(0x76L, (VECTOR(int8_t, 4))(0x76L, (VECTOR(int8_t, 2))(0x76L, 0L), 0L), 0L, 0x76L, 0L, (VECTOR(int8_t, 2))(0x76L, 0L), (VECTOR(int8_t, 2))(0x76L, 0L), 0x76L, 0L, 0x76L, 0L), // p_1291->g_1056
        {0x35L,0x67L,0x35L,0x35L,0x67L,0x35L,0x35L}, // p_1291->g_1067
        &p_1291->g_67, // p_1291->g_1069
        {&p_1291->g_246[2][8],&p_1291->g_246[2][8]}, // p_1291->g_1072
        0x77AFD9643C5C5833L, // p_1291->g_1087
        (VECTOR(uint32_t, 4))(0x5561D114L, (VECTOR(uint32_t, 2))(0x5561D114L, 0x93233674L), 0x93233674L), // p_1291->g_1142
        (VECTOR(uint8_t, 2))(246UL, 0x3DL), // p_1291->g_1244
        {255UL}, // p_1291->g_1268
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 247UL), 247UL), // p_1291->g_1274
        (VECTOR(uint8_t, 16))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 3UL), 3UL), 3UL, 253UL, 3UL, (VECTOR(uint8_t, 2))(253UL, 3UL), (VECTOR(uint8_t, 2))(253UL, 3UL), 253UL, 3UL, 253UL, 3UL), // p_1291->g_1275
        (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 1UL), 1UL), // p_1291->g_1277
        0, // p_1291->v_collective
        sequence_input[get_global_id(0)], // p_1291->global_0_offset
        sequence_input[get_global_id(1)], // p_1291->global_1_offset
        sequence_input[get_global_id(2)], // p_1291->global_2_offset
        sequence_input[get_local_id(0)], // p_1291->local_0_offset
        sequence_input[get_local_id(1)], // p_1291->local_1_offset
        sequence_input[get_local_id(2)], // p_1291->local_2_offset
        sequence_input[get_group_id(0)], // p_1291->group_0_offset
        sequence_input[get_group_id(1)], // p_1291->group_1_offset
        sequence_input[get_group_id(2)], // p_1291->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 21)), permutations[0][get_linear_local_id()])), // p_1291->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1292 = c_1293;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1291);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1291->g_2, "p_1291->g_2", print_hash_value);
    transparent_crc(p_1291->g_3, "p_1291->g_3", print_hash_value);
    transparent_crc(p_1291->g_4, "p_1291->g_4", print_hash_value);
    transparent_crc(p_1291->g_19, "p_1291->g_19", print_hash_value);
    transparent_crc(p_1291->g_29, "p_1291->g_29", print_hash_value);
    transparent_crc(p_1291->g_34, "p_1291->g_34", print_hash_value);
    transparent_crc(p_1291->g_36, "p_1291->g_36", print_hash_value);
    transparent_crc(p_1291->g_59, "p_1291->g_59", print_hash_value);
    transparent_crc(p_1291->g_82, "p_1291->g_82", print_hash_value);
    transparent_crc(p_1291->g_93.f0, "p_1291->g_93.f0", print_hash_value);
    transparent_crc(p_1291->g_112.x, "p_1291->g_112.x", print_hash_value);
    transparent_crc(p_1291->g_112.y, "p_1291->g_112.y", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1291->g_145[i], "p_1291->g_145[i]", print_hash_value);

    }
    transparent_crc(p_1291->g_150.f0, "p_1291->g_150.f0", print_hash_value);
    transparent_crc(p_1291->g_154.x, "p_1291->g_154.x", print_hash_value);
    transparent_crc(p_1291->g_154.y, "p_1291->g_154.y", print_hash_value);
    transparent_crc(p_1291->g_176, "p_1291->g_176", print_hash_value);
    transparent_crc(p_1291->g_213.f0, "p_1291->g_213.f0", print_hash_value);
    transparent_crc(p_1291->g_258.x, "p_1291->g_258.x", print_hash_value);
    transparent_crc(p_1291->g_258.y, "p_1291->g_258.y", print_hash_value);
    transparent_crc(p_1291->g_258.z, "p_1291->g_258.z", print_hash_value);
    transparent_crc(p_1291->g_258.w, "p_1291->g_258.w", print_hash_value);
    transparent_crc(p_1291->g_288, "p_1291->g_288", print_hash_value);
    transparent_crc(p_1291->g_320.x, "p_1291->g_320.x", print_hash_value);
    transparent_crc(p_1291->g_320.y, "p_1291->g_320.y", print_hash_value);
    transparent_crc(p_1291->g_320.z, "p_1291->g_320.z", print_hash_value);
    transparent_crc(p_1291->g_320.w, "p_1291->g_320.w", print_hash_value);
    transparent_crc(p_1291->g_348.x, "p_1291->g_348.x", print_hash_value);
    transparent_crc(p_1291->g_348.y, "p_1291->g_348.y", print_hash_value);
    transparent_crc(p_1291->g_353.x, "p_1291->g_353.x", print_hash_value);
    transparent_crc(p_1291->g_353.y, "p_1291->g_353.y", print_hash_value);
    transparent_crc(p_1291->g_361, "p_1291->g_361", print_hash_value);
    transparent_crc(p_1291->g_374.x, "p_1291->g_374.x", print_hash_value);
    transparent_crc(p_1291->g_374.y, "p_1291->g_374.y", print_hash_value);
    transparent_crc(p_1291->g_381.s0, "p_1291->g_381.s0", print_hash_value);
    transparent_crc(p_1291->g_381.s1, "p_1291->g_381.s1", print_hash_value);
    transparent_crc(p_1291->g_381.s2, "p_1291->g_381.s2", print_hash_value);
    transparent_crc(p_1291->g_381.s3, "p_1291->g_381.s3", print_hash_value);
    transparent_crc(p_1291->g_381.s4, "p_1291->g_381.s4", print_hash_value);
    transparent_crc(p_1291->g_381.s5, "p_1291->g_381.s5", print_hash_value);
    transparent_crc(p_1291->g_381.s6, "p_1291->g_381.s6", print_hash_value);
    transparent_crc(p_1291->g_381.s7, "p_1291->g_381.s7", print_hash_value);
    transparent_crc(p_1291->g_381.s8, "p_1291->g_381.s8", print_hash_value);
    transparent_crc(p_1291->g_381.s9, "p_1291->g_381.s9", print_hash_value);
    transparent_crc(p_1291->g_381.sa, "p_1291->g_381.sa", print_hash_value);
    transparent_crc(p_1291->g_381.sb, "p_1291->g_381.sb", print_hash_value);
    transparent_crc(p_1291->g_381.sc, "p_1291->g_381.sc", print_hash_value);
    transparent_crc(p_1291->g_381.sd, "p_1291->g_381.sd", print_hash_value);
    transparent_crc(p_1291->g_381.se, "p_1291->g_381.se", print_hash_value);
    transparent_crc(p_1291->g_381.sf, "p_1291->g_381.sf", print_hash_value);
    transparent_crc(p_1291->g_385, "p_1291->g_385", print_hash_value);
    transparent_crc(p_1291->g_398.x, "p_1291->g_398.x", print_hash_value);
    transparent_crc(p_1291->g_398.y, "p_1291->g_398.y", print_hash_value);
    transparent_crc(p_1291->g_398.z, "p_1291->g_398.z", print_hash_value);
    transparent_crc(p_1291->g_398.w, "p_1291->g_398.w", print_hash_value);
    transparent_crc(p_1291->g_399.x, "p_1291->g_399.x", print_hash_value);
    transparent_crc(p_1291->g_399.y, "p_1291->g_399.y", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1291->g_409[i].f0, "p_1291->g_409[i].f0", print_hash_value);

    }
    transparent_crc(p_1291->g_440, "p_1291->g_440", print_hash_value);
    transparent_crc(p_1291->g_451.s0, "p_1291->g_451.s0", print_hash_value);
    transparent_crc(p_1291->g_451.s1, "p_1291->g_451.s1", print_hash_value);
    transparent_crc(p_1291->g_451.s2, "p_1291->g_451.s2", print_hash_value);
    transparent_crc(p_1291->g_451.s3, "p_1291->g_451.s3", print_hash_value);
    transparent_crc(p_1291->g_451.s4, "p_1291->g_451.s4", print_hash_value);
    transparent_crc(p_1291->g_451.s5, "p_1291->g_451.s5", print_hash_value);
    transparent_crc(p_1291->g_451.s6, "p_1291->g_451.s6", print_hash_value);
    transparent_crc(p_1291->g_451.s7, "p_1291->g_451.s7", print_hash_value);
    transparent_crc(p_1291->g_475, "p_1291->g_475", print_hash_value);
    transparent_crc(p_1291->g_490.s0, "p_1291->g_490.s0", print_hash_value);
    transparent_crc(p_1291->g_490.s1, "p_1291->g_490.s1", print_hash_value);
    transparent_crc(p_1291->g_490.s2, "p_1291->g_490.s2", print_hash_value);
    transparent_crc(p_1291->g_490.s3, "p_1291->g_490.s3", print_hash_value);
    transparent_crc(p_1291->g_490.s4, "p_1291->g_490.s4", print_hash_value);
    transparent_crc(p_1291->g_490.s5, "p_1291->g_490.s5", print_hash_value);
    transparent_crc(p_1291->g_490.s6, "p_1291->g_490.s6", print_hash_value);
    transparent_crc(p_1291->g_490.s7, "p_1291->g_490.s7", print_hash_value);
    transparent_crc(p_1291->g_490.s8, "p_1291->g_490.s8", print_hash_value);
    transparent_crc(p_1291->g_490.s9, "p_1291->g_490.s9", print_hash_value);
    transparent_crc(p_1291->g_490.sa, "p_1291->g_490.sa", print_hash_value);
    transparent_crc(p_1291->g_490.sb, "p_1291->g_490.sb", print_hash_value);
    transparent_crc(p_1291->g_490.sc, "p_1291->g_490.sc", print_hash_value);
    transparent_crc(p_1291->g_490.sd, "p_1291->g_490.sd", print_hash_value);
    transparent_crc(p_1291->g_490.se, "p_1291->g_490.se", print_hash_value);
    transparent_crc(p_1291->g_490.sf, "p_1291->g_490.sf", print_hash_value);
    transparent_crc(p_1291->g_522.x, "p_1291->g_522.x", print_hash_value);
    transparent_crc(p_1291->g_522.y, "p_1291->g_522.y", print_hash_value);
    transparent_crc(p_1291->g_522.z, "p_1291->g_522.z", print_hash_value);
    transparent_crc(p_1291->g_522.w, "p_1291->g_522.w", print_hash_value);
    transparent_crc(p_1291->g_603.x, "p_1291->g_603.x", print_hash_value);
    transparent_crc(p_1291->g_603.y, "p_1291->g_603.y", print_hash_value);
    transparent_crc(p_1291->g_603.z, "p_1291->g_603.z", print_hash_value);
    transparent_crc(p_1291->g_603.w, "p_1291->g_603.w", print_hash_value);
    transparent_crc(p_1291->g_605.x, "p_1291->g_605.x", print_hash_value);
    transparent_crc(p_1291->g_605.y, "p_1291->g_605.y", print_hash_value);
    transparent_crc(p_1291->g_615.s0, "p_1291->g_615.s0", print_hash_value);
    transparent_crc(p_1291->g_615.s1, "p_1291->g_615.s1", print_hash_value);
    transparent_crc(p_1291->g_615.s2, "p_1291->g_615.s2", print_hash_value);
    transparent_crc(p_1291->g_615.s3, "p_1291->g_615.s3", print_hash_value);
    transparent_crc(p_1291->g_615.s4, "p_1291->g_615.s4", print_hash_value);
    transparent_crc(p_1291->g_615.s5, "p_1291->g_615.s5", print_hash_value);
    transparent_crc(p_1291->g_615.s6, "p_1291->g_615.s6", print_hash_value);
    transparent_crc(p_1291->g_615.s7, "p_1291->g_615.s7", print_hash_value);
    transparent_crc(p_1291->g_615.s8, "p_1291->g_615.s8", print_hash_value);
    transparent_crc(p_1291->g_615.s9, "p_1291->g_615.s9", print_hash_value);
    transparent_crc(p_1291->g_615.sa, "p_1291->g_615.sa", print_hash_value);
    transparent_crc(p_1291->g_615.sb, "p_1291->g_615.sb", print_hash_value);
    transparent_crc(p_1291->g_615.sc, "p_1291->g_615.sc", print_hash_value);
    transparent_crc(p_1291->g_615.sd, "p_1291->g_615.sd", print_hash_value);
    transparent_crc(p_1291->g_615.se, "p_1291->g_615.se", print_hash_value);
    transparent_crc(p_1291->g_615.sf, "p_1291->g_615.sf", print_hash_value);
    transparent_crc(p_1291->g_644, "p_1291->g_644", print_hash_value);
    transparent_crc(p_1291->g_667, "p_1291->g_667", print_hash_value);
    transparent_crc(p_1291->g_719.x, "p_1291->g_719.x", print_hash_value);
    transparent_crc(p_1291->g_719.y, "p_1291->g_719.y", print_hash_value);
    transparent_crc(p_1291->g_721.s0, "p_1291->g_721.s0", print_hash_value);
    transparent_crc(p_1291->g_721.s1, "p_1291->g_721.s1", print_hash_value);
    transparent_crc(p_1291->g_721.s2, "p_1291->g_721.s2", print_hash_value);
    transparent_crc(p_1291->g_721.s3, "p_1291->g_721.s3", print_hash_value);
    transparent_crc(p_1291->g_721.s4, "p_1291->g_721.s4", print_hash_value);
    transparent_crc(p_1291->g_721.s5, "p_1291->g_721.s5", print_hash_value);
    transparent_crc(p_1291->g_721.s6, "p_1291->g_721.s6", print_hash_value);
    transparent_crc(p_1291->g_721.s7, "p_1291->g_721.s7", print_hash_value);
    transparent_crc(p_1291->g_721.s8, "p_1291->g_721.s8", print_hash_value);
    transparent_crc(p_1291->g_721.s9, "p_1291->g_721.s9", print_hash_value);
    transparent_crc(p_1291->g_721.sa, "p_1291->g_721.sa", print_hash_value);
    transparent_crc(p_1291->g_721.sb, "p_1291->g_721.sb", print_hash_value);
    transparent_crc(p_1291->g_721.sc, "p_1291->g_721.sc", print_hash_value);
    transparent_crc(p_1291->g_721.sd, "p_1291->g_721.sd", print_hash_value);
    transparent_crc(p_1291->g_721.se, "p_1291->g_721.se", print_hash_value);
    transparent_crc(p_1291->g_721.sf, "p_1291->g_721.sf", print_hash_value);
    transparent_crc(p_1291->g_722.s0, "p_1291->g_722.s0", print_hash_value);
    transparent_crc(p_1291->g_722.s1, "p_1291->g_722.s1", print_hash_value);
    transparent_crc(p_1291->g_722.s2, "p_1291->g_722.s2", print_hash_value);
    transparent_crc(p_1291->g_722.s3, "p_1291->g_722.s3", print_hash_value);
    transparent_crc(p_1291->g_722.s4, "p_1291->g_722.s4", print_hash_value);
    transparent_crc(p_1291->g_722.s5, "p_1291->g_722.s5", print_hash_value);
    transparent_crc(p_1291->g_722.s6, "p_1291->g_722.s6", print_hash_value);
    transparent_crc(p_1291->g_722.s7, "p_1291->g_722.s7", print_hash_value);
    transparent_crc(p_1291->g_722.s8, "p_1291->g_722.s8", print_hash_value);
    transparent_crc(p_1291->g_722.s9, "p_1291->g_722.s9", print_hash_value);
    transparent_crc(p_1291->g_722.sa, "p_1291->g_722.sa", print_hash_value);
    transparent_crc(p_1291->g_722.sb, "p_1291->g_722.sb", print_hash_value);
    transparent_crc(p_1291->g_722.sc, "p_1291->g_722.sc", print_hash_value);
    transparent_crc(p_1291->g_722.sd, "p_1291->g_722.sd", print_hash_value);
    transparent_crc(p_1291->g_722.se, "p_1291->g_722.se", print_hash_value);
    transparent_crc(p_1291->g_722.sf, "p_1291->g_722.sf", print_hash_value);
    transparent_crc(p_1291->g_725.s0, "p_1291->g_725.s0", print_hash_value);
    transparent_crc(p_1291->g_725.s1, "p_1291->g_725.s1", print_hash_value);
    transparent_crc(p_1291->g_725.s2, "p_1291->g_725.s2", print_hash_value);
    transparent_crc(p_1291->g_725.s3, "p_1291->g_725.s3", print_hash_value);
    transparent_crc(p_1291->g_725.s4, "p_1291->g_725.s4", print_hash_value);
    transparent_crc(p_1291->g_725.s5, "p_1291->g_725.s5", print_hash_value);
    transparent_crc(p_1291->g_725.s6, "p_1291->g_725.s6", print_hash_value);
    transparent_crc(p_1291->g_725.s7, "p_1291->g_725.s7", print_hash_value);
    transparent_crc(p_1291->g_725.s8, "p_1291->g_725.s8", print_hash_value);
    transparent_crc(p_1291->g_725.s9, "p_1291->g_725.s9", print_hash_value);
    transparent_crc(p_1291->g_725.sa, "p_1291->g_725.sa", print_hash_value);
    transparent_crc(p_1291->g_725.sb, "p_1291->g_725.sb", print_hash_value);
    transparent_crc(p_1291->g_725.sc, "p_1291->g_725.sc", print_hash_value);
    transparent_crc(p_1291->g_725.sd, "p_1291->g_725.sd", print_hash_value);
    transparent_crc(p_1291->g_725.se, "p_1291->g_725.se", print_hash_value);
    transparent_crc(p_1291->g_725.sf, "p_1291->g_725.sf", print_hash_value);
    transparent_crc(p_1291->g_727.x, "p_1291->g_727.x", print_hash_value);
    transparent_crc(p_1291->g_727.y, "p_1291->g_727.y", print_hash_value);
    transparent_crc(p_1291->g_730.s0, "p_1291->g_730.s0", print_hash_value);
    transparent_crc(p_1291->g_730.s1, "p_1291->g_730.s1", print_hash_value);
    transparent_crc(p_1291->g_730.s2, "p_1291->g_730.s2", print_hash_value);
    transparent_crc(p_1291->g_730.s3, "p_1291->g_730.s3", print_hash_value);
    transparent_crc(p_1291->g_730.s4, "p_1291->g_730.s4", print_hash_value);
    transparent_crc(p_1291->g_730.s5, "p_1291->g_730.s5", print_hash_value);
    transparent_crc(p_1291->g_730.s6, "p_1291->g_730.s6", print_hash_value);
    transparent_crc(p_1291->g_730.s7, "p_1291->g_730.s7", print_hash_value);
    transparent_crc(p_1291->g_744.s0, "p_1291->g_744.s0", print_hash_value);
    transparent_crc(p_1291->g_744.s1, "p_1291->g_744.s1", print_hash_value);
    transparent_crc(p_1291->g_744.s2, "p_1291->g_744.s2", print_hash_value);
    transparent_crc(p_1291->g_744.s3, "p_1291->g_744.s3", print_hash_value);
    transparent_crc(p_1291->g_744.s4, "p_1291->g_744.s4", print_hash_value);
    transparent_crc(p_1291->g_744.s5, "p_1291->g_744.s5", print_hash_value);
    transparent_crc(p_1291->g_744.s6, "p_1291->g_744.s6", print_hash_value);
    transparent_crc(p_1291->g_744.s7, "p_1291->g_744.s7", print_hash_value);
    transparent_crc(p_1291->g_745.x, "p_1291->g_745.x", print_hash_value);
    transparent_crc(p_1291->g_745.y, "p_1291->g_745.y", print_hash_value);
    transparent_crc(p_1291->g_747.x, "p_1291->g_747.x", print_hash_value);
    transparent_crc(p_1291->g_747.y, "p_1291->g_747.y", print_hash_value);
    transparent_crc(p_1291->g_748.x, "p_1291->g_748.x", print_hash_value);
    transparent_crc(p_1291->g_748.y, "p_1291->g_748.y", print_hash_value);
    transparent_crc(p_1291->g_748.z, "p_1291->g_748.z", print_hash_value);
    transparent_crc(p_1291->g_748.w, "p_1291->g_748.w", print_hash_value);
    transparent_crc(p_1291->g_749.s0, "p_1291->g_749.s0", print_hash_value);
    transparent_crc(p_1291->g_749.s1, "p_1291->g_749.s1", print_hash_value);
    transparent_crc(p_1291->g_749.s2, "p_1291->g_749.s2", print_hash_value);
    transparent_crc(p_1291->g_749.s3, "p_1291->g_749.s3", print_hash_value);
    transparent_crc(p_1291->g_749.s4, "p_1291->g_749.s4", print_hash_value);
    transparent_crc(p_1291->g_749.s5, "p_1291->g_749.s5", print_hash_value);
    transparent_crc(p_1291->g_749.s6, "p_1291->g_749.s6", print_hash_value);
    transparent_crc(p_1291->g_749.s7, "p_1291->g_749.s7", print_hash_value);
    transparent_crc(p_1291->g_749.s8, "p_1291->g_749.s8", print_hash_value);
    transparent_crc(p_1291->g_749.s9, "p_1291->g_749.s9", print_hash_value);
    transparent_crc(p_1291->g_749.sa, "p_1291->g_749.sa", print_hash_value);
    transparent_crc(p_1291->g_749.sb, "p_1291->g_749.sb", print_hash_value);
    transparent_crc(p_1291->g_749.sc, "p_1291->g_749.sc", print_hash_value);
    transparent_crc(p_1291->g_749.sd, "p_1291->g_749.sd", print_hash_value);
    transparent_crc(p_1291->g_749.se, "p_1291->g_749.se", print_hash_value);
    transparent_crc(p_1291->g_749.sf, "p_1291->g_749.sf", print_hash_value);
    transparent_crc(p_1291->g_754.s0, "p_1291->g_754.s0", print_hash_value);
    transparent_crc(p_1291->g_754.s1, "p_1291->g_754.s1", print_hash_value);
    transparent_crc(p_1291->g_754.s2, "p_1291->g_754.s2", print_hash_value);
    transparent_crc(p_1291->g_754.s3, "p_1291->g_754.s3", print_hash_value);
    transparent_crc(p_1291->g_754.s4, "p_1291->g_754.s4", print_hash_value);
    transparent_crc(p_1291->g_754.s5, "p_1291->g_754.s5", print_hash_value);
    transparent_crc(p_1291->g_754.s6, "p_1291->g_754.s6", print_hash_value);
    transparent_crc(p_1291->g_754.s7, "p_1291->g_754.s7", print_hash_value);
    transparent_crc(p_1291->g_754.s8, "p_1291->g_754.s8", print_hash_value);
    transparent_crc(p_1291->g_754.s9, "p_1291->g_754.s9", print_hash_value);
    transparent_crc(p_1291->g_754.sa, "p_1291->g_754.sa", print_hash_value);
    transparent_crc(p_1291->g_754.sb, "p_1291->g_754.sb", print_hash_value);
    transparent_crc(p_1291->g_754.sc, "p_1291->g_754.sc", print_hash_value);
    transparent_crc(p_1291->g_754.sd, "p_1291->g_754.sd", print_hash_value);
    transparent_crc(p_1291->g_754.se, "p_1291->g_754.se", print_hash_value);
    transparent_crc(p_1291->g_754.sf, "p_1291->g_754.sf", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1291->g_834[i][j].f0, "p_1291->g_834[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1291->g_873, "p_1291->g_873", print_hash_value);
    transparent_crc(p_1291->g_878.x, "p_1291->g_878.x", print_hash_value);
    transparent_crc(p_1291->g_878.y, "p_1291->g_878.y", print_hash_value);
    transparent_crc(p_1291->g_899, "p_1291->g_899", print_hash_value);
    transparent_crc(p_1291->g_915.s0, "p_1291->g_915.s0", print_hash_value);
    transparent_crc(p_1291->g_915.s1, "p_1291->g_915.s1", print_hash_value);
    transparent_crc(p_1291->g_915.s2, "p_1291->g_915.s2", print_hash_value);
    transparent_crc(p_1291->g_915.s3, "p_1291->g_915.s3", print_hash_value);
    transparent_crc(p_1291->g_915.s4, "p_1291->g_915.s4", print_hash_value);
    transparent_crc(p_1291->g_915.s5, "p_1291->g_915.s5", print_hash_value);
    transparent_crc(p_1291->g_915.s6, "p_1291->g_915.s6", print_hash_value);
    transparent_crc(p_1291->g_915.s7, "p_1291->g_915.s7", print_hash_value);
    transparent_crc(p_1291->g_915.s8, "p_1291->g_915.s8", print_hash_value);
    transparent_crc(p_1291->g_915.s9, "p_1291->g_915.s9", print_hash_value);
    transparent_crc(p_1291->g_915.sa, "p_1291->g_915.sa", print_hash_value);
    transparent_crc(p_1291->g_915.sb, "p_1291->g_915.sb", print_hash_value);
    transparent_crc(p_1291->g_915.sc, "p_1291->g_915.sc", print_hash_value);
    transparent_crc(p_1291->g_915.sd, "p_1291->g_915.sd", print_hash_value);
    transparent_crc(p_1291->g_915.se, "p_1291->g_915.se", print_hash_value);
    transparent_crc(p_1291->g_915.sf, "p_1291->g_915.sf", print_hash_value);
    transparent_crc(p_1291->g_930.x, "p_1291->g_930.x", print_hash_value);
    transparent_crc(p_1291->g_930.y, "p_1291->g_930.y", print_hash_value);
    transparent_crc(p_1291->g_930.z, "p_1291->g_930.z", print_hash_value);
    transparent_crc(p_1291->g_930.w, "p_1291->g_930.w", print_hash_value);
    transparent_crc(p_1291->g_931.s0, "p_1291->g_931.s0", print_hash_value);
    transparent_crc(p_1291->g_931.s1, "p_1291->g_931.s1", print_hash_value);
    transparent_crc(p_1291->g_931.s2, "p_1291->g_931.s2", print_hash_value);
    transparent_crc(p_1291->g_931.s3, "p_1291->g_931.s3", print_hash_value);
    transparent_crc(p_1291->g_931.s4, "p_1291->g_931.s4", print_hash_value);
    transparent_crc(p_1291->g_931.s5, "p_1291->g_931.s5", print_hash_value);
    transparent_crc(p_1291->g_931.s6, "p_1291->g_931.s6", print_hash_value);
    transparent_crc(p_1291->g_931.s7, "p_1291->g_931.s7", print_hash_value);
    transparent_crc(p_1291->g_941.x, "p_1291->g_941.x", print_hash_value);
    transparent_crc(p_1291->g_941.y, "p_1291->g_941.y", print_hash_value);
    transparent_crc(p_1291->g_941.z, "p_1291->g_941.z", print_hash_value);
    transparent_crc(p_1291->g_941.w, "p_1291->g_941.w", print_hash_value);
    transparent_crc(p_1291->g_946.x, "p_1291->g_946.x", print_hash_value);
    transparent_crc(p_1291->g_946.y, "p_1291->g_946.y", print_hash_value);
    transparent_crc(p_1291->g_952.s0, "p_1291->g_952.s0", print_hash_value);
    transparent_crc(p_1291->g_952.s1, "p_1291->g_952.s1", print_hash_value);
    transparent_crc(p_1291->g_952.s2, "p_1291->g_952.s2", print_hash_value);
    transparent_crc(p_1291->g_952.s3, "p_1291->g_952.s3", print_hash_value);
    transparent_crc(p_1291->g_952.s4, "p_1291->g_952.s4", print_hash_value);
    transparent_crc(p_1291->g_952.s5, "p_1291->g_952.s5", print_hash_value);
    transparent_crc(p_1291->g_952.s6, "p_1291->g_952.s6", print_hash_value);
    transparent_crc(p_1291->g_952.s7, "p_1291->g_952.s7", print_hash_value);
    transparent_crc(p_1291->g_972.x, "p_1291->g_972.x", print_hash_value);
    transparent_crc(p_1291->g_972.y, "p_1291->g_972.y", print_hash_value);
    transparent_crc(p_1291->g_972.z, "p_1291->g_972.z", print_hash_value);
    transparent_crc(p_1291->g_972.w, "p_1291->g_972.w", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1291->g_977[i][j][k], "p_1291->g_977[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1291->g_982.x, "p_1291->g_982.x", print_hash_value);
    transparent_crc(p_1291->g_982.y, "p_1291->g_982.y", print_hash_value);
    transparent_crc(p_1291->g_982.z, "p_1291->g_982.z", print_hash_value);
    transparent_crc(p_1291->g_982.w, "p_1291->g_982.w", print_hash_value);
    transparent_crc(p_1291->g_1011.s0, "p_1291->g_1011.s0", print_hash_value);
    transparent_crc(p_1291->g_1011.s1, "p_1291->g_1011.s1", print_hash_value);
    transparent_crc(p_1291->g_1011.s2, "p_1291->g_1011.s2", print_hash_value);
    transparent_crc(p_1291->g_1011.s3, "p_1291->g_1011.s3", print_hash_value);
    transparent_crc(p_1291->g_1011.s4, "p_1291->g_1011.s4", print_hash_value);
    transparent_crc(p_1291->g_1011.s5, "p_1291->g_1011.s5", print_hash_value);
    transparent_crc(p_1291->g_1011.s6, "p_1291->g_1011.s6", print_hash_value);
    transparent_crc(p_1291->g_1011.s7, "p_1291->g_1011.s7", print_hash_value);
    transparent_crc(p_1291->g_1012.s0, "p_1291->g_1012.s0", print_hash_value);
    transparent_crc(p_1291->g_1012.s1, "p_1291->g_1012.s1", print_hash_value);
    transparent_crc(p_1291->g_1012.s2, "p_1291->g_1012.s2", print_hash_value);
    transparent_crc(p_1291->g_1012.s3, "p_1291->g_1012.s3", print_hash_value);
    transparent_crc(p_1291->g_1012.s4, "p_1291->g_1012.s4", print_hash_value);
    transparent_crc(p_1291->g_1012.s5, "p_1291->g_1012.s5", print_hash_value);
    transparent_crc(p_1291->g_1012.s6, "p_1291->g_1012.s6", print_hash_value);
    transparent_crc(p_1291->g_1012.s7, "p_1291->g_1012.s7", print_hash_value);
    transparent_crc(p_1291->g_1012.s8, "p_1291->g_1012.s8", print_hash_value);
    transparent_crc(p_1291->g_1012.s9, "p_1291->g_1012.s9", print_hash_value);
    transparent_crc(p_1291->g_1012.sa, "p_1291->g_1012.sa", print_hash_value);
    transparent_crc(p_1291->g_1012.sb, "p_1291->g_1012.sb", print_hash_value);
    transparent_crc(p_1291->g_1012.sc, "p_1291->g_1012.sc", print_hash_value);
    transparent_crc(p_1291->g_1012.sd, "p_1291->g_1012.sd", print_hash_value);
    transparent_crc(p_1291->g_1012.se, "p_1291->g_1012.se", print_hash_value);
    transparent_crc(p_1291->g_1012.sf, "p_1291->g_1012.sf", print_hash_value);
    transparent_crc(p_1291->g_1013.x, "p_1291->g_1013.x", print_hash_value);
    transparent_crc(p_1291->g_1013.y, "p_1291->g_1013.y", print_hash_value);
    transparent_crc(p_1291->g_1016.x, "p_1291->g_1016.x", print_hash_value);
    transparent_crc(p_1291->g_1016.y, "p_1291->g_1016.y", print_hash_value);
    transparent_crc(p_1291->g_1018.s0, "p_1291->g_1018.s0", print_hash_value);
    transparent_crc(p_1291->g_1018.s1, "p_1291->g_1018.s1", print_hash_value);
    transparent_crc(p_1291->g_1018.s2, "p_1291->g_1018.s2", print_hash_value);
    transparent_crc(p_1291->g_1018.s3, "p_1291->g_1018.s3", print_hash_value);
    transparent_crc(p_1291->g_1018.s4, "p_1291->g_1018.s4", print_hash_value);
    transparent_crc(p_1291->g_1018.s5, "p_1291->g_1018.s5", print_hash_value);
    transparent_crc(p_1291->g_1018.s6, "p_1291->g_1018.s6", print_hash_value);
    transparent_crc(p_1291->g_1018.s7, "p_1291->g_1018.s7", print_hash_value);
    transparent_crc(p_1291->g_1022.x, "p_1291->g_1022.x", print_hash_value);
    transparent_crc(p_1291->g_1022.y, "p_1291->g_1022.y", print_hash_value);
    transparent_crc(p_1291->g_1022.z, "p_1291->g_1022.z", print_hash_value);
    transparent_crc(p_1291->g_1022.w, "p_1291->g_1022.w", print_hash_value);
    transparent_crc(p_1291->g_1029.x, "p_1291->g_1029.x", print_hash_value);
    transparent_crc(p_1291->g_1029.y, "p_1291->g_1029.y", print_hash_value);
    transparent_crc(p_1291->g_1029.z, "p_1291->g_1029.z", print_hash_value);
    transparent_crc(p_1291->g_1029.w, "p_1291->g_1029.w", print_hash_value);
    transparent_crc(p_1291->g_1047.s0, "p_1291->g_1047.s0", print_hash_value);
    transparent_crc(p_1291->g_1047.s1, "p_1291->g_1047.s1", print_hash_value);
    transparent_crc(p_1291->g_1047.s2, "p_1291->g_1047.s2", print_hash_value);
    transparent_crc(p_1291->g_1047.s3, "p_1291->g_1047.s3", print_hash_value);
    transparent_crc(p_1291->g_1047.s4, "p_1291->g_1047.s4", print_hash_value);
    transparent_crc(p_1291->g_1047.s5, "p_1291->g_1047.s5", print_hash_value);
    transparent_crc(p_1291->g_1047.s6, "p_1291->g_1047.s6", print_hash_value);
    transparent_crc(p_1291->g_1047.s7, "p_1291->g_1047.s7", print_hash_value);
    transparent_crc(p_1291->g_1048.s0, "p_1291->g_1048.s0", print_hash_value);
    transparent_crc(p_1291->g_1048.s1, "p_1291->g_1048.s1", print_hash_value);
    transparent_crc(p_1291->g_1048.s2, "p_1291->g_1048.s2", print_hash_value);
    transparent_crc(p_1291->g_1048.s3, "p_1291->g_1048.s3", print_hash_value);
    transparent_crc(p_1291->g_1048.s4, "p_1291->g_1048.s4", print_hash_value);
    transparent_crc(p_1291->g_1048.s5, "p_1291->g_1048.s5", print_hash_value);
    transparent_crc(p_1291->g_1048.s6, "p_1291->g_1048.s6", print_hash_value);
    transparent_crc(p_1291->g_1048.s7, "p_1291->g_1048.s7", print_hash_value);
    transparent_crc(p_1291->g_1051.s0, "p_1291->g_1051.s0", print_hash_value);
    transparent_crc(p_1291->g_1051.s1, "p_1291->g_1051.s1", print_hash_value);
    transparent_crc(p_1291->g_1051.s2, "p_1291->g_1051.s2", print_hash_value);
    transparent_crc(p_1291->g_1051.s3, "p_1291->g_1051.s3", print_hash_value);
    transparent_crc(p_1291->g_1051.s4, "p_1291->g_1051.s4", print_hash_value);
    transparent_crc(p_1291->g_1051.s5, "p_1291->g_1051.s5", print_hash_value);
    transparent_crc(p_1291->g_1051.s6, "p_1291->g_1051.s6", print_hash_value);
    transparent_crc(p_1291->g_1051.s7, "p_1291->g_1051.s7", print_hash_value);
    transparent_crc(p_1291->g_1056.s0, "p_1291->g_1056.s0", print_hash_value);
    transparent_crc(p_1291->g_1056.s1, "p_1291->g_1056.s1", print_hash_value);
    transparent_crc(p_1291->g_1056.s2, "p_1291->g_1056.s2", print_hash_value);
    transparent_crc(p_1291->g_1056.s3, "p_1291->g_1056.s3", print_hash_value);
    transparent_crc(p_1291->g_1056.s4, "p_1291->g_1056.s4", print_hash_value);
    transparent_crc(p_1291->g_1056.s5, "p_1291->g_1056.s5", print_hash_value);
    transparent_crc(p_1291->g_1056.s6, "p_1291->g_1056.s6", print_hash_value);
    transparent_crc(p_1291->g_1056.s7, "p_1291->g_1056.s7", print_hash_value);
    transparent_crc(p_1291->g_1056.s8, "p_1291->g_1056.s8", print_hash_value);
    transparent_crc(p_1291->g_1056.s9, "p_1291->g_1056.s9", print_hash_value);
    transparent_crc(p_1291->g_1056.sa, "p_1291->g_1056.sa", print_hash_value);
    transparent_crc(p_1291->g_1056.sb, "p_1291->g_1056.sb", print_hash_value);
    transparent_crc(p_1291->g_1056.sc, "p_1291->g_1056.sc", print_hash_value);
    transparent_crc(p_1291->g_1056.sd, "p_1291->g_1056.sd", print_hash_value);
    transparent_crc(p_1291->g_1056.se, "p_1291->g_1056.se", print_hash_value);
    transparent_crc(p_1291->g_1056.sf, "p_1291->g_1056.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1291->g_1067[i], "p_1291->g_1067[i]", print_hash_value);

    }
    transparent_crc(p_1291->g_1087, "p_1291->g_1087", print_hash_value);
    transparent_crc(p_1291->g_1142.x, "p_1291->g_1142.x", print_hash_value);
    transparent_crc(p_1291->g_1142.y, "p_1291->g_1142.y", print_hash_value);
    transparent_crc(p_1291->g_1142.z, "p_1291->g_1142.z", print_hash_value);
    transparent_crc(p_1291->g_1142.w, "p_1291->g_1142.w", print_hash_value);
    transparent_crc(p_1291->g_1244.x, "p_1291->g_1244.x", print_hash_value);
    transparent_crc(p_1291->g_1244.y, "p_1291->g_1244.y", print_hash_value);
    transparent_crc(p_1291->g_1268.f0, "p_1291->g_1268.f0", print_hash_value);
    transparent_crc(p_1291->g_1274.x, "p_1291->g_1274.x", print_hash_value);
    transparent_crc(p_1291->g_1274.y, "p_1291->g_1274.y", print_hash_value);
    transparent_crc(p_1291->g_1274.z, "p_1291->g_1274.z", print_hash_value);
    transparent_crc(p_1291->g_1274.w, "p_1291->g_1274.w", print_hash_value);
    transparent_crc(p_1291->g_1275.s0, "p_1291->g_1275.s0", print_hash_value);
    transparent_crc(p_1291->g_1275.s1, "p_1291->g_1275.s1", print_hash_value);
    transparent_crc(p_1291->g_1275.s2, "p_1291->g_1275.s2", print_hash_value);
    transparent_crc(p_1291->g_1275.s3, "p_1291->g_1275.s3", print_hash_value);
    transparent_crc(p_1291->g_1275.s4, "p_1291->g_1275.s4", print_hash_value);
    transparent_crc(p_1291->g_1275.s5, "p_1291->g_1275.s5", print_hash_value);
    transparent_crc(p_1291->g_1275.s6, "p_1291->g_1275.s6", print_hash_value);
    transparent_crc(p_1291->g_1275.s7, "p_1291->g_1275.s7", print_hash_value);
    transparent_crc(p_1291->g_1275.s8, "p_1291->g_1275.s8", print_hash_value);
    transparent_crc(p_1291->g_1275.s9, "p_1291->g_1275.s9", print_hash_value);
    transparent_crc(p_1291->g_1275.sa, "p_1291->g_1275.sa", print_hash_value);
    transparent_crc(p_1291->g_1275.sb, "p_1291->g_1275.sb", print_hash_value);
    transparent_crc(p_1291->g_1275.sc, "p_1291->g_1275.sc", print_hash_value);
    transparent_crc(p_1291->g_1275.sd, "p_1291->g_1275.sd", print_hash_value);
    transparent_crc(p_1291->g_1275.se, "p_1291->g_1275.se", print_hash_value);
    transparent_crc(p_1291->g_1275.sf, "p_1291->g_1275.sf", print_hash_value);
    transparent_crc(p_1291->g_1277.x, "p_1291->g_1277.x", print_hash_value);
    transparent_crc(p_1291->g_1277.y, "p_1291->g_1277.y", print_hash_value);
    transparent_crc(p_1291->g_1277.z, "p_1291->g_1277.z", print_hash_value);
    transparent_crc(p_1291->g_1277.w, "p_1291->g_1277.w", print_hash_value);
    transparent_crc(p_1291->v_collective, "p_1291->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 98; i++)
            transparent_crc(p_1291->l_special_values[i], "p_1291->l_special_values[i]", print_hash_value);
    transparent_crc(p_1291->l_comm_values[get_linear_local_id()], "p_1291->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1291->g_comm_values[get_linear_group_id() * 21 + get_linear_local_id()], "p_1291->g_comm_values[get_linear_group_id() * 21 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
