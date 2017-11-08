// --atomics 80 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 14,36,8 -l 1,6,8
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

__constant uint32_t permutations[10][48] = {
{28,45,34,8,40,41,5,11,20,27,7,14,15,42,43,39,47,36,13,0,26,37,4,18,44,2,29,24,16,19,38,17,22,31,9,23,1,12,32,30,3,6,10,46,33,21,35,25}, // permutation 0
{42,33,24,14,7,19,43,0,40,41,37,38,6,39,36,32,2,12,21,4,10,45,20,29,5,1,25,11,27,18,22,23,46,17,34,35,15,9,8,30,28,13,3,47,44,31,26,16}, // permutation 1
{10,23,25,28,39,5,22,4,16,2,35,29,32,14,20,37,18,0,41,43,3,12,24,38,40,26,34,31,7,13,27,9,45,17,8,47,19,30,21,42,6,11,46,36,33,44,1,15}, // permutation 2
{1,23,38,35,39,15,28,45,43,26,27,19,41,18,33,9,7,8,13,14,16,40,4,11,22,0,2,47,17,10,34,12,31,21,32,46,42,37,24,30,5,20,29,36,44,25,6,3}, // permutation 3
{17,5,16,15,36,0,26,1,24,37,3,22,47,8,2,42,33,11,9,43,23,32,27,18,30,13,14,38,39,21,34,31,35,20,4,19,45,25,28,44,6,12,41,46,7,29,40,10}, // permutation 4
{32,28,40,1,41,45,33,34,6,25,37,18,24,47,15,36,16,39,12,5,29,20,22,17,46,35,13,21,4,42,11,19,26,23,38,14,0,9,7,43,31,2,8,44,27,10,3,30}, // permutation 5
{46,11,14,13,16,26,36,24,17,41,45,5,1,35,20,0,22,19,8,37,18,31,28,39,25,27,33,43,34,21,47,2,44,23,40,29,38,7,15,6,10,12,3,32,30,9,42,4}, // permutation 6
{17,41,44,32,13,11,18,0,28,31,12,14,33,47,36,15,21,16,2,30,43,8,35,45,34,37,10,29,23,19,4,24,38,25,7,3,42,20,6,1,40,26,9,5,27,22,46,39}, // permutation 7
{32,0,38,41,5,18,25,16,27,33,44,19,21,4,3,8,15,22,29,31,35,47,17,9,30,36,7,11,2,43,26,40,37,24,39,12,45,34,6,1,10,42,46,20,13,28,14,23}, // permutation 8
{40,37,10,18,11,20,25,36,2,44,32,14,33,47,22,21,43,13,26,29,41,8,46,28,6,0,31,7,4,38,45,34,15,42,27,3,35,24,5,1,12,23,9,19,17,30,16,39} // permutation 9
};

// Seed: 2312696942

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int8_t * f0;
   int64_t  f1;
   uint32_t  f2;
   uint32_t  f3;
};

struct S1 {
    int32_t g_3;
    volatile int8_t g_6;
    volatile uint32_t g_7[8][3][10];
    uint32_t g_18;
    uint16_t g_34;
    int32_t g_79;
    volatile uint64_t g_80;
    volatile int32_t g_93;
    int8_t g_95;
    int8_t g_101;
    volatile VECTOR(uint32_t, 16) g_104;
    int32_t *g_108[4];
    int32_t ** volatile g_107;
    int64_t *g_111;
    int8_t *g_112;
    uint32_t g_125[6][7];
    uint32_t *g_127[10];
    uint32_t **g_126;
    VECTOR(int64_t, 16) g_136;
    int32_t * volatile g_138;
    int32_t ** volatile g_142[1][9][3];
    uint32_t g_163;
    VECTOR(int16_t, 4) g_182;
    VECTOR(uint8_t, 16) g_211;
    int32_t ** volatile g_279[4][3][1];
    int32_t ** volatile g_280;
    VECTOR(int32_t, 4) g_314;
    VECTOR(int32_t, 2) g_316;
    volatile VECTOR(int64_t, 4) g_319;
    uint64_t g_328;
    int32_t g_363[9];
    int8_t g_384;
    VECTOR(uint16_t, 8) g_440;
    int32_t * volatile g_452;
    uint32_t g_464;
    VECTOR(uint8_t, 8) g_467;
    int16_t *g_475[8][7];
    int32_t *g_501;
    int32_t ** volatile g_500;
    volatile VECTOR(int8_t, 8) g_526;
    volatile int16_t g_585;
    volatile int16_t * volatile g_584;
    VECTOR(int64_t, 16) g_590;
    VECTOR(int64_t, 16) g_592;
    VECTOR(uint64_t, 8) g_593;
    volatile VECTOR(int32_t, 4) g_613;
    volatile int8_t g_615[1][4][3];
    int32_t g_621;
    VECTOR(int8_t, 8) g_644;
    volatile union U0 g_667;
    int32_t ** volatile g_672;
    uint16_t *g_759[4];
    int32_t ** volatile g_764[7][3][3];
    int32_t ** volatile g_765;
    union U0 g_792;
    uint32_t *g_812;
    uint32_t **g_811;
    int32_t ** volatile g_818;
    uint32_t g_827;
    volatile union U0 *g_829;
    volatile union U0 ** volatile g_828;
    int8_t g_836;
    VECTOR(uint64_t, 4) g_841;
    int32_t **g_842[5];
    volatile VECTOR(uint16_t, 16) g_870;
    VECTOR(uint16_t, 2) g_873;
    VECTOR(uint32_t, 8) g_888;
    VECTOR(int32_t, 8) g_912;
    VECTOR(int32_t, 8) g_913;
    VECTOR(int16_t, 16) g_938;
    volatile VECTOR(int16_t, 4) g_939;
    volatile VECTOR(int16_t, 4) g_941;
    VECTOR(int16_t, 16) g_976;
    VECTOR(int64_t, 2) g_987;
    int8_t **g_991;
    volatile VECTOR(int32_t, 2) g_1037;
    VECTOR(uint64_t, 4) g_1040;
    VECTOR(int8_t, 16) g_1064;
    volatile VECTOR(uint8_t, 8) g_1069;
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
int32_t  func_1(struct S1 * p_1087);
uint64_t  func_10(int8_t  p_11, uint32_t  p_12, int32_t * p_13, uint32_t  p_14, int8_t * p_15, struct S1 * p_1087);
int32_t * func_21(int32_t * p_22, uint64_t  p_23, uint16_t  p_24, union U0  p_25, uint32_t  p_26, struct S1 * p_1087);
int32_t * func_27(int16_t  p_28, uint16_t  p_29, uint32_t  p_30, struct S1 * p_1087);
int16_t  func_36(int8_t * p_37, struct S1 * p_1087);
int8_t * func_38(int8_t  p_39, int8_t * p_40, uint16_t  p_41, uint32_t * p_42, uint16_t * p_43, struct S1 * p_1087);
uint8_t  func_47(int64_t * p_48, int8_t * p_49, struct S1 * p_1087);
int64_t * func_50(int32_t * p_51, int32_t * p_52, struct S1 * p_1087);
int32_t * func_83(int8_t  p_84, uint32_t  p_85, uint64_t  p_86, int64_t * p_87, uint32_t  p_88, struct S1 * p_1087);
uint32_t ** func_113(int8_t * p_114, uint32_t  p_115, uint32_t ** p_116, uint32_t * p_117, struct S1 * p_1087);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1087->g_7 p_1087->g_3 p_1087->g_18 p_1087->g_6 p_1087->g_80 p_1087->g_93 p_1087->l_comm_values p_1087->g_34 p_1087->g_79 p_1087->g_104 p_1087->g_107 p_1087->g_111 p_1087->g_112 p_1087->g_108 p_1087->g_126 p_1087->g_95 p_1087->g_125 p_1087->g_136 p_1087->g_163 p_1087->g_comm_values p_1087->g_182 p_1087->g_280 p_1087->g_314 p_1087->g_316 p_1087->g_319 p_1087->g_501 p_1087->g_363 p_1087->g_464 p_1087->g_584 p_1087->g_590 p_1087->g_592 p_1087->g_593 p_1087->g_328 p_1087->g_585 p_1087->g_667 p_1087->g_672 p_1087->g_759 p_1087->g_765 p_1087->g_384 p_1087->g_500 p_1087->g_792 p_1087->g_811 p_1087->g_818 p_1087->g_827 p_1087->g_828 p_1087->g_440 p_1087->g_841 p_1087->g_812 p_1087->g_836 p_1087->g_888 p_1087->g_615 p_1087->g_912 p_1087->g_913 p_1087->g_938
 * writes: p_1087->g_7 p_1087->g_18 p_1087->l_comm_values p_1087->g_80 p_1087->g_95 p_1087->g_101 p_1087->g_104 p_1087->g_108 p_1087->g_79 p_1087->g_125 p_1087->g_163 p_1087->g_34 p_1087->g_211 p_1087->g_136 p_1087->g_328 p_1087->g_363 p_1087->g_475 p_1087->g_621 p_1087->g_126 p_1087->g_501 p_1087->g_811 p_1087->g_827 p_1087->g_829 p_1087->g_3 p_1087->g_836 p_1087->g_842
 */
int32_t  func_1(struct S1 * p_1087)
{ /* block id: 4 */
    int32_t *l_2 = &p_1087->g_3;
    int32_t *l_4 = &p_1087->g_3;
    int32_t *l_5[5];
    uint32_t *l_16 = (void*)0;
    uint32_t *l_17 = &p_1087->g_18;
    uint16_t *l_33[8][4] = {{&p_1087->g_34,&p_1087->g_34,&p_1087->g_34,&p_1087->g_34},{&p_1087->g_34,&p_1087->g_34,&p_1087->g_34,&p_1087->g_34},{&p_1087->g_34,&p_1087->g_34,&p_1087->g_34,&p_1087->g_34},{&p_1087->g_34,&p_1087->g_34,&p_1087->g_34,&p_1087->g_34},{&p_1087->g_34,&p_1087->g_34,&p_1087->g_34,&p_1087->g_34},{&p_1087->g_34,&p_1087->g_34,&p_1087->g_34,&p_1087->g_34},{&p_1087->g_34,&p_1087->g_34,&p_1087->g_34,&p_1087->g_34},{&p_1087->g_34,&p_1087->g_34,&p_1087->g_34,&p_1087->g_34}};
    int8_t l_35 = 0x06L;
    int64_t *l_44 = (void*)0;
    int64_t *l_45 = (void*)0;
    int64_t *l_46[8][4][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int8_t l_757 = 4L;
    int8_t *l_758 = &p_1087->g_95;
    int32_t **l_795 = &l_2;
    uint32_t l_796[8][5] = {{9UL,0xC0DE2E5FL,0UL,0xAC025B5CL,0xC0DE2E5FL},{9UL,0xC0DE2E5FL,0UL,0xAC025B5CL,0xC0DE2E5FL},{9UL,0xC0DE2E5FL,0UL,0xAC025B5CL,0xC0DE2E5FL},{9UL,0xC0DE2E5FL,0UL,0xAC025B5CL,0xC0DE2E5FL},{9UL,0xC0DE2E5FL,0UL,0xAC025B5CL,0xC0DE2E5FL},{9UL,0xC0DE2E5FL,0UL,0xAC025B5CL,0xC0DE2E5FL},{9UL,0xC0DE2E5FL,0UL,0xAC025B5CL,0xC0DE2E5FL},{9UL,0xC0DE2E5FL,0UL,0xAC025B5CL,0xC0DE2E5FL}};
    uint32_t l_832[7][6][4] = {{{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL}},{{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL}},{{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL}},{{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL}},{{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL}},{{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL}},{{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL},{4294967291UL,4294967289UL,0UL,4294967293UL}}};
    uint32_t l_835 = 0xF1BFBF4CL;
    uint8_t l_838 = 0x31L;
    uint32_t l_847 = 0x096CA10EL;
    VECTOR(int16_t, 4) l_874 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L));
    union U0 l_905[6][9][4] = {{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}}};
    uint64_t l_925 = 0xF299FB10C3B83C59L;
    VECTOR(int64_t, 4) l_986 = (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 0x469EBE2963A1B622L), 0x469EBE2963A1B622L);
    VECTOR(int32_t, 16) l_993 = (VECTOR(int32_t, 16))(0x2BF9B326L, (VECTOR(int32_t, 4))(0x2BF9B326L, (VECTOR(int32_t, 2))(0x2BF9B326L, 8L), 8L), 8L, 0x2BF9B326L, 8L, (VECTOR(int32_t, 2))(0x2BF9B326L, 8L), (VECTOR(int32_t, 2))(0x2BF9B326L, 8L), 0x2BF9B326L, 8L, 0x2BF9B326L, 8L);
    uint32_t ***l_1009 = &p_1087->g_811;
    VECTOR(int64_t, 2) l_1012 = (VECTOR(int64_t, 2))(0x52FB424BB269D782L, (-1L));
    VECTOR(int64_t, 16) l_1014 = (VECTOR(int64_t, 16))((-3L), (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 0x2A3FB2812E38E348L), 0x2A3FB2812E38E348L), 0x2A3FB2812E38E348L, (-3L), 0x2A3FB2812E38E348L, (VECTOR(int64_t, 2))((-3L), 0x2A3FB2812E38E348L), (VECTOR(int64_t, 2))((-3L), 0x2A3FB2812E38E348L), (-3L), 0x2A3FB2812E38E348L, (-3L), 0x2A3FB2812E38E348L);
    uint16_t l_1017 = 0x03B0L;
    int32_t *l_1019 = &p_1087->g_621;
    int32_t **l_1018 = &l_1019;
    uint32_t l_1034 = 0x427FB0E2L;
    uint16_t l_1059 = 0xF8E3L;
    VECTOR(int8_t, 4) l_1063 = (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, (-8L)), (-8L));
    int16_t l_1075 = 0x7282L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_5[i] = &p_1087->g_3;
    p_1087->g_7[0][1][2]++;
    p_1087->g_827 &= (func_10((*l_4), (--(*l_17)), ((*l_795) = func_21(func_27(((safe_mul_func_int16_t_s_s((*l_2), (l_35 = 0xE197L))) , func_36(func_38(((*l_758) = ((p_1087->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1087->tid, 48))] = p_1087->g_6) && ((0xD82F8819L && (func_47((p_1087->g_6 , func_50(l_4, &p_1087->g_3, p_1087)), p_1087->g_112, p_1087) != p_1087->g_590.s3)) >= l_757))), &p_1087->g_384, (*l_2), l_16, p_1087->g_759[1], p_1087), p_1087)), (*l_2), p_1087->g_384, p_1087), p_1087->g_590.s1, (*l_4), p_1087->g_792, (*l_2), p_1087)), l_796[2][2], &p_1087->g_384, p_1087) , (**l_795));
    (*p_1087->g_828) = &p_1087->g_667;
    if ((p_1087->g_836 = ((((*l_758) = (p_1087->g_590.sd || p_1087->g_440.s4)) >= ((p_1087->g_136.s5 = (safe_rshift_func_uint16_t_u_u((*l_2), (l_832[3][4][1]++)))) != (&l_35 == (void*)0))) , (l_835 = ((*l_2) = 0x48BD0F0CL)))))
    { /* block id: 352 */
        int16_t l_837[2][7][6] = {{{(-4L),0x2EDAL,(-10L),0L,(-10L),0x2EDAL},{(-4L),0x2EDAL,(-10L),0L,(-10L),0x2EDAL},{(-4L),0x2EDAL,(-10L),0L,(-10L),0x2EDAL},{(-4L),0x2EDAL,(-10L),0L,(-10L),0x2EDAL},{(-4L),0x2EDAL,(-10L),0L,(-10L),0x2EDAL},{(-4L),0x2EDAL,(-10L),0L,(-10L),0x2EDAL},{(-4L),0x2EDAL,(-10L),0L,(-10L),0x2EDAL}},{{(-4L),0x2EDAL,(-10L),0L,(-10L),0x2EDAL},{(-4L),0x2EDAL,(-10L),0L,(-10L),0x2EDAL},{(-4L),0x2EDAL,(-10L),0L,(-10L),0x2EDAL},{(-4L),0x2EDAL,(-10L),0L,(-10L),0x2EDAL},{(-4L),0x2EDAL,(-10L),0L,(-10L),0x2EDAL},{(-4L),0x2EDAL,(-10L),0L,(-10L),0x2EDAL},{(-4L),0x2EDAL,(-10L),0L,(-10L),0x2EDAL}}};
        int64_t *l_839 = (void*)0;
        int32_t *l_840[2][9] = {{&p_1087->g_79,&p_1087->g_363[3],&p_1087->g_363[8],&p_1087->g_363[3],&p_1087->g_363[3],&p_1087->g_363[3],&p_1087->g_363[8],&p_1087->g_363[3],&p_1087->g_79},{&p_1087->g_79,&p_1087->g_363[3],&p_1087->g_363[8],&p_1087->g_363[3],&p_1087->g_363[3],&p_1087->g_363[3],&p_1087->g_363[8],&p_1087->g_363[3],&p_1087->g_79}};
        int i, j, k;
        l_837[1][2][4] = ((*l_2) = 0x1486E1B5L);
        (*l_795) = l_840[1][8];
        if ((*p_1087->g_501))
        { /* block id: 356 */
            int16_t l_851 = (-1L);
            VECTOR(uint64_t, 2) l_862 = (VECTOR(uint64_t, 2))(18446744073709551606UL, 18446744073709551613UL);
            int32_t l_865 = 0x629DF73AL;
            VECTOR(uint32_t, 8) l_869 = (VECTOR(uint32_t, 8))(4294967287UL, (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 4294967293UL), 4294967293UL), 4294967293UL, 4294967287UL, 4294967293UL);
            VECTOR(int16_t, 4) l_875 = (VECTOR(int16_t, 4))(0x1C9FL, (VECTOR(int16_t, 2))(0x1C9FL, (-9L)), (-9L));
            VECTOR(int64_t, 8) l_878 = (VECTOR(int64_t, 8))((-10L), (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), (-2L)), (-2L)), (-2L), (-10L), (-2L));
            int32_t l_930[9] = {0x10A24EDDL,0x10A24EDDL,0x10A24EDDL,0x10A24EDDL,0x10A24EDDL,0x10A24EDDL,0x10A24EDDL,0x10A24EDDL,0x10A24EDDL};
            int i;
            if ((((VECTOR(uint64_t, 2))(p_1087->g_841.wy)).odd <= (-8L)))
            { /* block id: 357 */
                union U0 l_843 = {0};
                int32_t **l_844 = &p_1087->g_501;
                int64_t *l_848 = (void*)0;
                (*l_844) = func_83(((p_1087->g_842[1] = (void*)0) == (l_843 , l_844)), ((safe_mod_func_uint8_t_u_u(0xAFL, l_847)) | ((void*)0 != &p_1087->g_501)), (*l_4), l_848, (*p_1087->g_812), p_1087);
            }
            else
            { /* block id: 360 */
                VECTOR(uint16_t, 16) l_871 = (VECTOR(uint16_t, 16))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0x8202L), 0x8202L), 0x8202L, 65534UL, 0x8202L, (VECTOR(uint16_t, 2))(65534UL, 0x8202L), (VECTOR(uint16_t, 2))(65534UL, 0x8202L), 65534UL, 0x8202L, 65534UL, 0x8202L);
                int32_t l_926 = 0x288DBD20L;
                int i;
                for (p_1087->g_836 = (-13); (p_1087->g_836 <= (-3)); p_1087->g_836++)
                { /* block id: 363 */
                    VECTOR(uint16_t, 8) l_858 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL);
                    uint16_t l_859 = 0UL;
                    uint32_t l_868 = 0x5E1DDEAFL;
                    VECTOR(uint16_t, 4) l_872 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL);
                    VECTOR(int32_t, 2) l_879 = (VECTOR(int32_t, 2))(1L, 0x4FAB09B2L);
                    int i;
                    (*l_795) = func_83((0x4342L && (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(0x0697C818CFB40370L, (254UL == l_851), ((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s(l_858.s4, l_859)) > (safe_mod_func_uint64_t_u_u(p_1087->g_95, ((VECTOR(uint64_t, 2))(l_862.yx)).odd))), 5)), (((*l_4) |= (safe_mod_func_int8_t_s_s((l_865 ^= 0x0EL), ((safe_lshift_func_int16_t_s_s(((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))((l_868 & ((VECTOR(uint32_t, 2))(l_869.s10)).lo), ((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_1087->g_870.sdb)).xxyyyxyyxyyxyyxx)).sc120, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(65527UL, 0x0C39L)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x351BL, 0x1244L)).xxxxxxyy)), ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 2))(l_871.s0d))))).xyxxxyyyxyyyxxyy, ((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 16))(l_872.xzwxwyxxwzzwxywx)), ((VECTOR(uint16_t, 8))(p_1087->g_873.xyxxxyxx)).s6436034205356101))), ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 4))(l_874.wyzw)), ((VECTOR(int16_t, 8))(l_875.wwxwzyww)).hi))).wzzwyxzyyyxyxzyz))).sf8eb, (uint16_t)((safe_lshift_func_uint8_t_u_u(l_878.s6, 3)) > 0x6EL), (uint16_t)1UL))), 1UL, 65535UL)).odd)).hi, ((VECTOR(uint16_t, 4))(0x3400L))))), ((VECTOR(uint16_t, 2))(65535UL)), 9UL)).s7500213265753210)).sd & 0xF3E3L) , l_869.s3), 6)) , 4L)))) ^ l_875.x))) , 0x3223C4A8E986FB9AL), ((VECTOR(int64_t, 4))(0x3AEB7B1EBF9CEC94L)), 0x079877833CA770C5L)).s12)).odd > l_871.s4)), p_1087->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1087->tid, 48))], l_859, p_1087->g_111, l_879.y, p_1087);
                    if ((atomic_inc(&p_1087->g_atomic_input[80 * get_linear_group_id() + 22]) == 4))
                    { /* block id: 368 */
                        int32_t l_880 = 0x0EAF03EDL;
                        int32_t l_881 = (-8L);
                        l_881 |= (FAKE_DIVERGE(p_1087->group_1_offset, get_group_id(1), 10) , (l_880 = (-6L)));
                        unsigned int result = 0;
                        result += l_880;
                        result += l_881;
                        atomic_add(&p_1087->g_special_values[80 * get_linear_group_id() + 22], result);
                    }
                    else
                    { /* block id: 371 */
                        (1 + 1);
                    }
                }
                for (p_1087->g_3 = 1; (p_1087->g_3 < (-1)); --p_1087->g_3)
                { /* block id: 377 */
                    VECTOR(uint64_t, 2) l_897 = (VECTOR(uint64_t, 2))(7UL, 2UL);
                    VECTOR(uint64_t, 8) l_898 = (VECTOR(uint64_t, 8))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 18446744073709551612UL), 18446744073709551612UL), 18446744073709551612UL, 18446744073709551606UL, 18446744073709551612UL);
                    int16_t *l_923[9][5][5] = {{{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0}},{{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0}},{{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0}},{{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0}},{{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0}},{{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0}},{{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0}},{{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0}},{{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0},{&l_837[1][2][4],&l_837[1][2][4],&l_851,&l_837[0][2][0],(void*)0}}};
                    int32_t l_924 = 1L;
                    uint32_t ***l_927 = &p_1087->g_126;
                    uint32_t ***l_928 = (void*)0;
                    uint32_t **l_929 = &p_1087->g_127[0];
                    int i, j, k;
                    for (l_851 = 0; (l_851 == (-13)); --l_851)
                    { /* block id: 380 */
                        uint16_t l_918 = 1UL;
                        l_865 &= (safe_rshift_func_int8_t_s_s(((((VECTOR(uint32_t, 8))(p_1087->g_888.s21351313)).s1 , (((safe_rshift_func_int8_t_s_u(p_1087->g_136.s1, 4)) | (safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(p_1087->g_163, (l_871.se , (safe_mod_func_int64_t_s_s(p_1087->g_615[0][2][0], ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 2))(l_897.yx)).yyxxxyxy, ((VECTOR(uint64_t, 8))(l_898.s16454025))))).s01)).lo))))) | (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_905[0][1][0] , (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1087->g_912.s34)).xxxyyyyxxxyxyyyy)), ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(p_1087->g_913.s03)).xyyx, (int32_t)(safe_rshift_func_uint8_t_u_s(p_1087->g_125[3][2], (safe_sub_func_uint64_t_u_u(((l_918 > ((safe_rshift_func_uint16_t_u_u(9UL, l_871.s2)) | (-8L))) , p_1087->g_592.sf), (*l_4)))))))).wzwwxyzxwxzyyyxw))).s9, l_898.s1)), 5)), l_871.sd))), (-8L))), 0x10L)), l_862.x))), 0L))) && l_871.s5)) , 0L), l_871.sd));
                    }
                    (*l_795) = l_840[1][8];
                }
            }
            l_930[1] |= l_875.w;
        }
        else
        { /* block id: 391 */
            return p_1087->g_363[3];
        }
    }
    else
    { /* block id: 394 */
        uint64_t l_931 = 18446744073709551610UL;
        int32_t l_952[5][1] = {{(-2L)},{(-2L)},{(-2L)},{(-2L)},{(-2L)}};
        int32_t **l_967 = &p_1087->g_108[1];
        VECTOR(int32_t, 2) l_992 = (VECTOR(int32_t, 2))(0x22ED6BEBL, 0x2CED3887L);
        int32_t *l_1011[5][9][5] = {{{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621}},{{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621}},{{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621}},{{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621}},{{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621},{&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621,&p_1087->g_621}}};
        int32_t **l_1010 = &l_1011[2][1][4];
        VECTOR(int64_t, 16) l_1013 = (VECTOR(int64_t, 16))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 2L), 2L), 2L, 7L, 2L, (VECTOR(int64_t, 2))(7L, 2L), (VECTOR(int64_t, 2))(7L, 2L), 7L, 2L, 7L, 2L);
        uint64_t l_1023 = 3UL;
        uint16_t l_1074 = 7UL;
        int i, j, k;
        l_931++;
        for (l_838 = 20; (l_838 < 10); l_838 = safe_sub_func_int32_t_s_s(l_838, 3))
        { /* block id: 398 */
            VECTOR(int16_t, 4) l_940 = (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x2C94L), 0x2C94L);
            int32_t l_947 = 0x73BACDA8L;
            int32_t l_950 = 0x0BE3F06FL;
            int32_t l_954 = (-9L);
            VECTOR(int64_t, 16) l_988 = (VECTOR(int64_t, 16))(0x0C64AADDE6C066E4L, (VECTOR(int64_t, 4))(0x0C64AADDE6C066E4L, (VECTOR(int64_t, 2))(0x0C64AADDE6C066E4L, 0x4484BBDC5203545AL), 0x4484BBDC5203545AL), 0x4484BBDC5203545AL, 0x0C64AADDE6C066E4L, 0x4484BBDC5203545AL, (VECTOR(int64_t, 2))(0x0C64AADDE6C066E4L, 0x4484BBDC5203545AL), (VECTOR(int64_t, 2))(0x0C64AADDE6C066E4L, 0x4484BBDC5203545AL), 0x0C64AADDE6C066E4L, 0x4484BBDC5203545AL, 0x0C64AADDE6C066E4L, 0x4484BBDC5203545AL);
            int16_t **l_1016 = &p_1087->g_475[5][5];
            uint32_t ***l_1044 = &p_1087->g_126;
            int32_t l_1049 = (-1L);
            uint16_t *l_1054[2];
            uint32_t l_1073[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1054[i] = (void*)0;
            for (i = 0; i < 2; i++)
                l_1073[i] = 1UL;
            (1 + 1);
        }
    }
    return p_1087->g_938.se;
}


/* ------------------------------------------ */
/* 
 * reads : p_1087->g_811 p_1087->g_79 p_1087->g_818 p_1087->g_3 p_1087->g_104
 * writes: p_1087->g_811 p_1087->g_79 p_1087->g_108
 */
uint64_t  func_10(int8_t  p_11, uint32_t  p_12, int32_t * p_13, uint32_t  p_14, int8_t * p_15, struct S1 * p_1087)
{ /* block id: 323 */
    int64_t l_803 = 0x6F420BA69B0AEF9CL;
    int32_t l_804 = 1L;
    int32_t l_805[1];
    int i;
    for (i = 0; i < 1; i++)
        l_805[i] = 0x41BD1492L;
    if ((atomic_inc(&p_1087->l_atomic_input[23]) == 4))
    { /* block id: 325 */
        int32_t *l_797[9];
        int32_t l_799 = 0x155D4981L;
        int32_t *l_798[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        for (i = 0; i < 9; i++)
            l_797[i] = (void*)0;
        l_798[4] = l_797[4];
        unsigned int result = 0;
        result += l_799;
        atomic_add(&p_1087->l_special_values[23], result);
    }
    else
    { /* block id: 327 */
        (1 + 1);
    }
    for (p_14 = 0; (p_14 < 54); p_14 = safe_add_func_uint8_t_u_u(p_14, 4))
    { /* block id: 332 */
        int32_t *l_802[7] = {&p_1087->g_363[6],&p_1087->g_79,&p_1087->g_363[6],&p_1087->g_363[6],&p_1087->g_79,&p_1087->g_363[6],&p_1087->g_363[6]};
        int32_t l_806[9][10] = {{0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L,0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L},{0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L,0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L},{0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L,0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L},{0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L,0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L},{0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L,0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L},{0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L,0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L},{0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L,0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L},{0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L,0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L},{0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L,0x3D305EF8L,0x1678445BL,0x54DC9894L,0x1678445BL,0x3D305EF8L}};
        int8_t l_807[1];
        uint32_t l_808 = 0UL;
        uint32_t ***l_813[10][3] = {{&p_1087->g_811,&p_1087->g_811,(void*)0},{&p_1087->g_811,&p_1087->g_811,(void*)0},{&p_1087->g_811,&p_1087->g_811,(void*)0},{&p_1087->g_811,&p_1087->g_811,(void*)0},{&p_1087->g_811,&p_1087->g_811,(void*)0},{&p_1087->g_811,&p_1087->g_811,(void*)0},{&p_1087->g_811,&p_1087->g_811,(void*)0},{&p_1087->g_811,&p_1087->g_811,(void*)0},{&p_1087->g_811,&p_1087->g_811,(void*)0},{&p_1087->g_811,&p_1087->g_811,(void*)0}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_807[i] = 0x44L;
        ++l_808;
        p_1087->g_811 = p_1087->g_811;
        for (p_1087->g_79 = (-24); (p_1087->g_79 < 16); p_1087->g_79 = safe_add_func_uint32_t_u_u(p_1087->g_79, 6))
        { /* block id: 337 */
            int32_t *l_816 = (void*)0;
            int32_t **l_817 = (void*)0;
            int32_t l_819 = 0x4F8C53FDL;
            int32_t l_820 = (-2L);
            int32_t l_821 = 0x482FE4D4L;
            int32_t l_822 = 0x4508339FL;
            int32_t l_823[7] = {0x274ECE1AL,0x0CE109A3L,0x274ECE1AL,0x274ECE1AL,0x0CE109A3L,0x274ECE1AL,0x274ECE1AL};
            uint32_t l_824 = 0UL;
            int i;
            (*p_1087->g_818) = l_816;
            l_824--;
            if ((*p_13))
                break;
        }
    }
    return p_1087->g_104.sa;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1087->g_363
 */
int32_t * func_21(int32_t * p_22, uint64_t  p_23, uint16_t  p_24, union U0  p_25, uint32_t  p_26, struct S1 * p_1087)
{ /* block id: 319 */
    uint64_t l_793 = 0x7D0822F0D87FB4D8L;
    int32_t *l_794 = &p_1087->g_363[5];
    (*l_794) = l_793;
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_1087->g_501 p_1087->g_363 p_1087->g_80 p_1087->g_93 p_1087->g_7 p_1087->l_comm_values p_1087->g_34 p_1087->g_79 p_1087->g_104 p_1087->g_107 p_1087->g_111 p_1087->g_500
 * writes: p_1087->g_126 p_1087->g_363 p_1087->g_80 p_1087->g_95 p_1087->g_101 p_1087->g_104 p_1087->g_108 p_1087->g_501
 */
int32_t * func_27(int16_t  p_28, uint16_t  p_29, uint32_t  p_30, struct S1 * p_1087)
{ /* block id: 312 */
    int32_t *l_767 = (void*)0;
    int32_t *l_768 = (void*)0;
    int32_t *l_769[7][6] = {{&p_1087->g_363[3],&p_1087->g_363[3],&p_1087->g_3,(void*)0,&p_1087->g_363[3],(void*)0},{&p_1087->g_363[3],&p_1087->g_363[3],&p_1087->g_3,(void*)0,&p_1087->g_363[3],(void*)0},{&p_1087->g_363[3],&p_1087->g_363[3],&p_1087->g_3,(void*)0,&p_1087->g_363[3],(void*)0},{&p_1087->g_363[3],&p_1087->g_363[3],&p_1087->g_3,(void*)0,&p_1087->g_363[3],(void*)0},{&p_1087->g_363[3],&p_1087->g_363[3],&p_1087->g_3,(void*)0,&p_1087->g_363[3],(void*)0},{&p_1087->g_363[3],&p_1087->g_363[3],&p_1087->g_3,(void*)0,&p_1087->g_363[3],(void*)0},{&p_1087->g_363[3],&p_1087->g_363[3],&p_1087->g_3,(void*)0,&p_1087->g_363[3],(void*)0}};
    uint32_t l_770[8][1][7] = {{{0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L}},{{0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L}},{{0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L}},{{0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L}},{{0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L}},{{0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L}},{{0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L}},{{0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L,0x129DE616L}}};
    int8_t *l_775[1][2];
    VECTOR(int8_t, 8) l_778 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x5FL), 0x5FL), 0x5FL, 0L, 0x5FL);
    int32_t l_781 = 2L;
    uint8_t *l_782 = (void*)0;
    uint8_t *l_783 = (void*)0;
    uint8_t *l_784 = (void*)0;
    uint8_t *l_785[3];
    uint32_t **l_786 = &p_1087->g_127[9];
    uint32_t *l_787 = (void*)0;
    uint32_t ***l_788 = &p_1087->g_126;
    int32_t *l_791 = &l_781;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_775[i][j] = &p_1087->g_101;
    }
    for (i = 0; i < 3; i++)
        l_785[i] = (void*)0;
    l_770[2][0][4]++;
    (*p_1087->g_501) = (0UL == (&p_1087->g_127[5] == ((*l_788) = &l_787)));
    (*p_1087->g_500) = func_83(p_30, p_1087->g_363[3], (safe_div_func_uint64_t_u_u(0UL, 18446744073709551615UL)), func_50(l_791, &l_781, p_1087), p_29, p_1087);
    return (*p_1087->g_500);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_36(int8_t * p_37, struct S1 * p_1087)
{ /* block id: 310 */
    uint32_t l_766 = 0x1E4494A9L;
    return l_766;
}


/* ------------------------------------------ */
/* 
 * reads : p_1087->g_501 p_1087->g_79 p_1087->g_765
 * writes: p_1087->g_363 p_1087->g_79 p_1087->g_108
 */
int8_t * func_38(int8_t  p_39, int8_t * p_40, uint16_t  p_41, uint32_t * p_42, uint16_t * p_43, struct S1 * p_1087)
{ /* block id: 301 */
    int8_t *l_762[6][3][4] = {{{&p_1087->g_101,(void*)0,(void*)0,(void*)0},{&p_1087->g_101,(void*)0,(void*)0,(void*)0},{&p_1087->g_101,(void*)0,(void*)0,(void*)0}},{{&p_1087->g_101,(void*)0,(void*)0,(void*)0},{&p_1087->g_101,(void*)0,(void*)0,(void*)0},{&p_1087->g_101,(void*)0,(void*)0,(void*)0}},{{&p_1087->g_101,(void*)0,(void*)0,(void*)0},{&p_1087->g_101,(void*)0,(void*)0,(void*)0},{&p_1087->g_101,(void*)0,(void*)0,(void*)0}},{{&p_1087->g_101,(void*)0,(void*)0,(void*)0},{&p_1087->g_101,(void*)0,(void*)0,(void*)0},{&p_1087->g_101,(void*)0,(void*)0,(void*)0}},{{&p_1087->g_101,(void*)0,(void*)0,(void*)0},{&p_1087->g_101,(void*)0,(void*)0,(void*)0},{&p_1087->g_101,(void*)0,(void*)0,(void*)0}},{{&p_1087->g_101,(void*)0,(void*)0,(void*)0},{&p_1087->g_101,(void*)0,(void*)0,(void*)0},{&p_1087->g_101,(void*)0,(void*)0,(void*)0}}};
    int32_t *l_763 = &p_1087->g_363[8];
    int i, j, k;
    (*p_1087->g_501) = 0L;
    for (p_1087->g_79 = 0; (p_1087->g_79 <= 17); p_1087->g_79 = safe_add_func_int32_t_s_s(p_1087->g_79, 3))
    { /* block id: 305 */
        return l_762[5][1][0];
    }
    (*p_1087->g_765) = l_763;
    return &p_1087->g_101;
}


/* ------------------------------------------ */
/* 
 * reads : p_1087->g_108 p_1087->g_126 p_1087->g_95 p_1087->g_125 p_1087->g_136 p_1087->l_comm_values p_1087->g_7 p_1087->g_107 p_1087->g_93 p_1087->g_79 p_1087->g_163 p_1087->g_comm_values p_1087->g_182 p_1087->g_6 p_1087->g_34 p_1087->g_280 p_1087->g_111 p_1087->g_104 p_1087->g_314 p_1087->g_316 p_1087->g_3 p_1087->g_112 p_1087->g_319 p_1087->g_501 p_1087->g_363 p_1087->g_464 p_1087->g_584 p_1087->g_590 p_1087->g_592 p_1087->g_593 p_1087->g_328 p_1087->g_585 p_1087->g_667 p_1087->g_672
 * writes: p_1087->g_79 p_1087->g_125 p_1087->g_163 p_1087->g_95 p_1087->g_34 p_1087->g_211 p_1087->g_108 p_1087->g_136 p_1087->g_104 p_1087->g_101 p_1087->g_328 p_1087->g_363 p_1087->g_475 p_1087->g_621
 */
uint8_t  func_47(int64_t * p_48, int8_t * p_49, struct S1 * p_1087)
{ /* block id: 45 */
    int8_t *l_118 = &p_1087->g_95;
    int32_t l_119 = 0x5D1ACC90L;
    uint32_t **l_120[2];
    uint32_t ***l_251 = &l_120[1];
    VECTOR(int32_t, 8) l_252 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x69F11C13L), 0x69F11C13L), 0x69F11C13L, (-9L), 0x69F11C13L);
    VECTOR(int32_t, 8) l_253 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x55C9BD58L), 0x55C9BD58L), 0x55C9BD58L, 8L, 0x55C9BD58L);
    int32_t *l_296 = &p_1087->g_3;
    int8_t *l_318 = &p_1087->g_95;
    VECTOR(uint32_t, 2) l_391 = (VECTOR(uint32_t, 2))(5UL, 7UL);
    VECTOR(uint32_t, 16) l_392 = (VECTOR(uint32_t, 16))(0x112C1C05L, (VECTOR(uint32_t, 4))(0x112C1C05L, (VECTOR(uint32_t, 2))(0x112C1C05L, 0xAE9AD4C7L), 0xAE9AD4C7L), 0xAE9AD4C7L, 0x112C1C05L, 0xAE9AD4C7L, (VECTOR(uint32_t, 2))(0x112C1C05L, 0xAE9AD4C7L), (VECTOR(uint32_t, 2))(0x112C1C05L, 0xAE9AD4C7L), 0x112C1C05L, 0xAE9AD4C7L, 0x112C1C05L, 0xAE9AD4C7L);
    uint16_t *l_411 = (void*)0;
    VECTOR(int32_t, 16) l_457 = (VECTOR(int32_t, 16))(0x68127220L, (VECTOR(int32_t, 4))(0x68127220L, (VECTOR(int32_t, 2))(0x68127220L, (-5L)), (-5L)), (-5L), 0x68127220L, (-5L), (VECTOR(int32_t, 2))(0x68127220L, (-5L)), (VECTOR(int32_t, 2))(0x68127220L, (-5L)), 0x68127220L, (-5L), 0x68127220L, (-5L));
    VECTOR(uint8_t, 16) l_568 = (VECTOR(uint8_t, 16))(0xA2L, (VECTOR(uint8_t, 4))(0xA2L, (VECTOR(uint8_t, 2))(0xA2L, 0x0DL), 0x0DL), 0x0DL, 0xA2L, 0x0DL, (VECTOR(uint8_t, 2))(0xA2L, 0x0DL), (VECTOR(uint8_t, 2))(0xA2L, 0x0DL), 0xA2L, 0x0DL, 0xA2L, 0x0DL);
    int64_t l_607 = 0x7E65981C024E39C0L;
    VECTOR(int32_t, 16) l_614 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5F6F67DFL), 0x5F6F67DFL), 0x5F6F67DFL, 1L, 0x5F6F67DFL, (VECTOR(int32_t, 2))(1L, 0x5F6F67DFL), (VECTOR(int32_t, 2))(1L, 0x5F6F67DFL), 1L, 0x5F6F67DFL, 1L, 0x5F6F67DFL);
    VECTOR(int8_t, 4) l_629 = (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, 0x58L), 0x58L);
    int32_t *l_671 = &p_1087->g_79;
    int i;
    for (i = 0; i < 2; i++)
        l_120[i] = (void*)0;
    (*l_251) = func_113(l_118, (l_119 , 0x296341BAL), l_120[0], p_1087->g_108[0], p_1087);
    l_119 ^= ((void*)0 == &l_119);
    if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(l_252.s47073777)).hi, ((VECTOR(int32_t, 8))(l_253.s30706757)).even))).even)).hi)
    { /* block id: 95 */
        int32_t l_264 = 0x51A138A9L;
        int32_t l_267 = 0x56936928L;
        int32_t l_269 = 0x1863AA56L;
        int32_t l_272 = (-1L);
        int32_t l_274 = (-3L);
        uint32_t l_276 = 0xB1F53E0EL;
        int32_t l_295 = 0x321E0132L;
        int16_t l_297[9][3][4] = {{{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)}},{{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)}},{{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)}},{{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)}},{{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)}},{{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)}},{{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)}},{{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)}},{{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)},{(-1L),0x1CEBL,(-7L),(-10L)}}};
        VECTOR(int64_t, 4) l_317 = (VECTOR(int64_t, 4))(0x0A2ACAABBD9F9E9CL, (VECTOR(int64_t, 2))(0x0A2ACAABBD9F9E9CL, (-1L)), (-1L));
        int32_t **l_361 = &p_1087->g_108[2];
        VECTOR(int32_t, 2) l_379 = (VECTOR(int32_t, 2))(0x2ED37863L, 1L);
        VECTOR(int8_t, 8) l_421 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
        uint16_t *l_426 = &p_1087->g_34;
        int8_t l_439 = 2L;
        uint32_t **l_490 = &p_1087->g_127[3];
        VECTOR(int32_t, 16) l_521 = (VECTOR(int32_t, 16))(0x0879BC2CL, (VECTOR(int32_t, 4))(0x0879BC2CL, (VECTOR(int32_t, 2))(0x0879BC2CL, 0x0E07202FL), 0x0E07202FL), 0x0E07202FL, 0x0879BC2CL, 0x0E07202FL, (VECTOR(int32_t, 2))(0x0879BC2CL, 0x0E07202FL), (VECTOR(int32_t, 2))(0x0879BC2CL, 0x0E07202FL), 0x0879BC2CL, 0x0E07202FL, 0x0879BC2CL, 0x0E07202FL);
        uint8_t *l_527 = (void*)0;
        VECTOR(uint32_t, 8) l_530 = (VECTOR(uint32_t, 8))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0x7ED77362L), 0x7ED77362L), 0x7ED77362L, 4294967289UL, 0x7ED77362L);
        VECTOR(int64_t, 16) l_591 = (VECTOR(int64_t, 16))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x2A7668AD302A235FL), 0x2A7668AD302A235FL), 0x2A7668AD302A235FL, 3L, 0x2A7668AD302A235FL, (VECTOR(int64_t, 2))(3L, 0x2A7668AD302A235FL), (VECTOR(int64_t, 2))(3L, 0x2A7668AD302A235FL), 3L, 0x2A7668AD302A235FL, 3L, 0x2A7668AD302A235FL);
        VECTOR(uint16_t, 8) l_654 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), 65535UL, 1UL, 65535UL);
        int64_t l_664 = (-9L);
        int32_t l_669 = 0x49F21EF1L;
        int32_t l_670 = 0x6215186CL;
        int i, j, k;
        for (p_1087->g_163 = 28; (p_1087->g_163 >= 21); p_1087->g_163 = safe_sub_func_uint64_t_u_u(p_1087->g_163, 4))
        { /* block id: 98 */
            uint32_t l_260 = 0xAE9B3B88L;
            int32_t l_265 = (-1L);
            int32_t l_273[8];
            int32_t **l_282 = (void*)0;
            uint8_t l_284 = 0x71L;
            uint32_t *l_298 = &p_1087->g_125[3][3];
            int64_t *l_330 = (void*)0;
            union U0 l_417 = {0};
            int32_t *l_491 = &l_269;
            int32_t l_538 = 0x75A34094L;
            uint8_t l_603 = 0x16L;
            int64_t l_604 = 5L;
            int32_t *l_610 = &l_295;
            int8_t **l_663 = &l_118;
            VECTOR(uint32_t, 2) l_668 = (VECTOR(uint32_t, 2))(0xDF8DADECL, 0x4A240D44L);
            int i;
            for (i = 0; i < 8; i++)
                l_273[i] = 0x7FDFE8A7L;
            for (l_119 = 24; (l_119 < 10); l_119--)
            { /* block id: 101 */
                int32_t l_266 = 9L;
                int32_t l_268 = 0x6EF710C3L;
                int32_t l_270 = 6L;
                int32_t l_271[7];
                int32_t l_281 = (-7L);
                VECTOR(int32_t, 4) l_312 = (VECTOR(int32_t, 4))(0x693A10A6L, (VECTOR(int32_t, 2))(0x693A10A6L, 0x0B912B29L), 0x0B912B29L);
                VECTOR(int32_t, 16) l_315 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x5503377FL), 0x5503377FL), 0x5503377FL, (-2L), 0x5503377FL, (VECTOR(int32_t, 2))((-2L), 0x5503377FL), (VECTOR(int32_t, 2))((-2L), 0x5503377FL), (-2L), 0x5503377FL, (-2L), 0x5503377FL);
                VECTOR(uint16_t, 8) l_373 = (VECTOR(uint16_t, 8))(0xFB57L, (VECTOR(uint16_t, 4))(0xFB57L, (VECTOR(uint16_t, 2))(0xFB57L, 0xDA09L), 0xDA09L), 0xDA09L, 0xFB57L, 0xDA09L);
                uint8_t l_380 = 0x19L;
                int16_t l_410 = 1L;
                uint32_t ***l_414 = &l_120[1];
                VECTOR(int16_t, 8) l_443 = (VECTOR(int16_t, 8))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0x24D1L), 0x24D1L), 0x24D1L, 3L, 0x24D1L);
                int i;
                for (i = 0; i < 7; i++)
                    l_271[i] = 0x094FF6EDL;
                for (p_1087->g_95 = 0; (p_1087->g_95 < (-26)); --p_1087->g_95)
                { /* block id: 104 */
                    int32_t *l_261 = (void*)0;
                    int32_t *l_262 = (void*)0;
                    int32_t *l_263[1];
                    int32_t l_275 = 0x14FB1358L;
                    uint8_t *l_299 = (void*)0;
                    uint8_t *l_300 = &l_284;
                    int64_t *l_301 = (void*)0;
                    int8_t *l_302 = &p_1087->g_101;
                    VECTOR(int32_t, 2) l_313 = (VECTOR(int32_t, 2))(0x3ADC442CL, (-10L));
                    int16_t l_381 = (-1L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_263[i] = (void*)0;
                    l_264 = (l_253.s7 = l_260);
                    l_276--;
                    if (l_273[6])
                    { /* block id: 108 */
                        (*p_1087->g_280) = (*p_1087->g_107);
                        if (l_281)
                            break;
                    }
                    else
                    { /* block id: 111 */
                        int64_t *l_283[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t **l_285 = (void*)0;
                        int32_t **l_286 = &p_1087->g_108[1];
                        int i;
                        if (l_265)
                            break;
                        (*l_286) = func_83(((l_252.s4 && (((&p_1087->g_126 != (GROUP_DIVERGE(2, 1) , &p_1087->g_126)) , p_1087->g_95) ^ ((l_282 == (void*)0) != ((&l_270 == (void*)0) | ((p_1087->g_136.sd = l_252.s4) && GROUP_DIVERGE(2, 1)))))) , l_252.s6), l_284, l_253.s0, p_1087->g_111, p_1087->g_182.z, p_1087);
                    }
                    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((((*l_302) = ((p_48 != ((safe_lshift_func_uint16_t_u_u(((((*l_300) = (safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u(l_295, (0x075B70FD327BD9B7L && ((l_297[4][1][2] &= ((void*)0 == l_296)) & ((-1L) && ((void*)0 == p_1087->g_112)))))) >= (((*p_1087->g_126) = (*p_1087->g_126)) == l_298)) && l_267), p_1087->g_80)), (-6L)))) ^ p_1087->g_211.s1) ^ l_271[2]), 13)) , l_301)) != p_1087->g_95)) || l_297[4][1][2]), (*l_296), 9L, 1L)), 0L, 0x66D5E722L, ((VECTOR(int32_t, 8))(0x64E47FD2L)), 0x4615AB4AL, 4L)).s5a, ((VECTOR(int32_t, 2))(0x77F6E3FBL))))), 0x0F5B7B2CL, 7L)).z)
                    { /* block id: 120 */
                        int32_t l_305 = 2L;
                        uint64_t *l_326 = (void*)0;
                        uint64_t *l_327 = &p_1087->g_328;
                        uint32_t l_329 = 4294967289UL;
                        l_263[0] = func_83((l_297[4][1][2] , ((safe_add_func_uint8_t_u_u(247UL, (l_305 && (!((safe_rshift_func_int16_t_s_s((((*l_298)++) != (((((VECTOR(int32_t, 4))(0x18222518L, (-3L), 1L, 0x3C8516E9L)).y , (safe_mod_func_uint64_t_u_u(FAKE_DIVERGE(p_1087->group_0_offset, get_group_id(0), 10), l_305))) && ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_312.xwxy)).wwyxywzx, ((VECTOR(int32_t, 16))(l_313.xxyyxyxyyxxxxxxx)).even, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(p_1087->g_314.zyww)), ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(l_315.s6e0c2e72)).lo, ((VECTOR(int32_t, 2))(p_1087->g_316.xy)).yxxy))).zxwzwzxx, (int32_t)(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))(0L, 0L)).xxxx, ((VECTOR(int64_t, 8))(l_317.wzxwywzx)).hi, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(0x6F01581CB3595651L, (l_318 != p_49), (*l_296), 0x347FF966CC3914C0L, (-1L), 0x0E138C7774718098L, ((VECTOR(int64_t, 8))(p_1087->g_319.xyzzxxwz)), 0x75DE1099E264143DL, 0x71305BE39B7CD2B7L)).s0932)))).xywyzxxz)).s4315724636441622)).s071d))).wywyzwwy)).s4 != (safe_div_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((*l_327) = p_1087->g_211.s6), (*l_296))), l_329)), l_268))), (int32_t)4L))).lo))).wxxzyxwy))).s0274144062301645)).sf) == 1L)), 12)) || 0x02C44D9DL))))) != l_281)), l_315.sf, p_1087->g_314.x, l_330, l_281, p_1087);
                    }
                    else
                    { /* block id: 124 */
                        int64_t *l_331 = (void*)0;
                        int64_t *l_332 = (void*)0;
                        int64_t *l_333 = (void*)0;
                        int64_t *l_334 = (void*)0;
                        int64_t *l_335 = (void*)0;
                        int64_t *l_336 = (void*)0;
                        int64_t *l_337 = (void*)0;
                        int64_t *l_338 = (void*)0;
                        int64_t *l_339 = (void*)0;
                        int64_t *l_340 = (void*)0;
                        int64_t *l_341 = (void*)0;
                        int64_t *l_342 = (void*)0;
                        int64_t *l_343[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint16_t *l_356 = &p_1087->g_34;
                        int32_t l_362[1][2];
                        uint64_t l_364 = 0xACF0830DE5D3F1EBL;
                        uint8_t *l_378[7][2][3] = {{{&l_284,(void*)0,(void*)0},{&l_284,(void*)0,(void*)0}},{{&l_284,(void*)0,(void*)0},{&l_284,(void*)0,(void*)0}},{{&l_284,(void*)0,(void*)0},{&l_284,(void*)0,(void*)0}},{{&l_284,(void*)0,(void*)0},{&l_284,(void*)0,(void*)0}},{{&l_284,(void*)0,(void*)0},{&l_284,(void*)0,(void*)0}},{{&l_284,(void*)0,(void*)0},{&l_284,(void*)0,(void*)0}},{{&l_284,(void*)0,(void*)0},{&l_284,(void*)0,(void*)0}}};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_362[i][j] = 1L;
                        }
                        l_362[0][0] = ((p_1087->g_136.sa = (l_274 = ((*p_1087->g_107) == &l_119))) < (((safe_add_func_int8_t_s_s(0x74L, ((*l_302) = (safe_sub_func_int64_t_s_s(0x34DBB95037DA9FAFL, ((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u(((((safe_sub_func_uint16_t_u_u(((*l_356)--), (safe_sub_func_int32_t_s_s((-3L), (((&p_1087->g_127[2] != (void*)0) && ((&p_1087->g_108[1] != l_361) | p_1087->g_316.y)) & l_362[0][0]))))) > l_362[0][0]) | (*l_296)) == (*l_296)), p_1087->g_79)), 7)), l_260)) < (*l_296))))))) ^ 251UL) | l_362[0][0]));
                        l_364--;
                        l_380 ^= (+(safe_add_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(l_315.sc, 5)) <= (((VECTOR(uint16_t, 8))(l_373.s30777231)).s4 || 0L)), ((safe_mod_func_int32_t_s_s((-1L), l_271[6])) > (safe_mod_func_uint64_t_u_u((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0L, (&l_284 != l_378[4][0][0]), 0x4F481F72L, 0x02EA2263L)), 0x4ED3FE8AL, 0x132717A9L, 0x17DDC2ACL, 0x1325FF86L)).s0551173157167411)).s6 < (l_364 == (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_379.xy)).yxyyxxxyxyxxyxxy)).sc , (p_1087->g_comm_values[p_1087->tid] , ((p_48 != p_1087->g_111) & 0x0E11CB10L))))), 4L))))) <= l_373.s5) <= FAKE_DIVERGE(p_1087->local_2_offset, get_local_id(2), 10)) > p_1087->g_95), p_1087->g_7[0][1][2])));
                        if (l_381)
                            continue;
                    }
                }
            }
            if ((((1L >= (safe_mul_func_uint8_t_u_u((((VECTOR(int64_t, 2))((-1L), 0x0C4708348667244BL)).lo & ((((*l_296) , (((VECTOR(int32_t, 2))(l_521.sc1)).hi >= (safe_div_func_int8_t_s_s(l_295, (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(p_1087->g_526.s6620041034172624)).s7, ((void*)0 != p_48))))))) && (p_1087->g_112 == l_527)) <= ((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(4294967286UL, 0x48A8D173L)).yyxxyxxx, ((VECTOR(uint32_t, 8))(l_530.s20705374))))).hi, ((VECTOR(uint32_t, 2))(1UL, 0UL)).yyxy))).even)).odd, (--(*l_298)))) == (safe_rshift_func_uint8_t_u_u((p_48 != (void*)0), 6))))), (*l_296)))) & GROUP_DIVERGE(2, 1)) & (*l_296)))
            { /* block id: 181 */
                return p_1087->g_319.y;
            }
            else
            { /* block id: 183 */
                int8_t l_541 = 0x33L;
                int32_t l_543 = 0x1850B5E3L;
                int32_t l_544 = (-1L);
                int8_t l_546 = 9L;
                int32_t l_547[3][4] = {{0x602991CAL,0x602991CAL,0x602991CAL,0x602991CAL},{0x602991CAL,0x602991CAL,0x602991CAL,0x602991CAL},{0x602991CAL,0x602991CAL,0x602991CAL,0x602991CAL}};
                VECTOR(uint8_t, 8) l_635 = (VECTOR(uint8_t, 8))(0x6EL, (VECTOR(uint8_t, 4))(0x6EL, (VECTOR(uint8_t, 2))(0x6EL, 0xFBL), 0xFBL), 0xFBL, 0x6EL, 0xFBL);
                uint16_t l_653 = 0x23ECL;
                int i, j;
                if ((*l_296))
                    break;
                if (((void*)0 == l_330))
                { /* block id: 185 */
                    int8_t l_539 = 3L;
                    int32_t l_540 = 1L;
                    int32_t l_542[2];
                    uint32_t l_548 = 0x11EEA035L;
                    int64_t l_558[1];
                    uint16_t l_573 = 0x124DL;
                    int32_t *l_576 = (void*)0;
                    int32_t l_602 = 0x0BF31E33L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_542[i] = 0L;
                    for (i = 0; i < 1; i++)
                        l_558[i] = 1L;
                    for (p_1087->g_328 = 0; (p_1087->g_328 <= 4); p_1087->g_328 = safe_add_func_int32_t_s_s(p_1087->g_328, 8))
                    { /* block id: 188 */
                        int32_t *l_537[8];
                        int32_t l_545 = 0x582F8E58L;
                        int i;
                        for (i = 0; i < 8; i++)
                            l_537[i] = (void*)0;
                        ++l_548;
                        if ((*l_491))
                            continue;
                    }
                    for (l_544 = 0; (l_544 <= 10); ++l_544)
                    { /* block id: 194 */
                        VECTOR(int16_t, 2) l_557 = (VECTOR(int16_t, 2))((-1L), 1L);
                        uint64_t *l_559 = &p_1087->g_328;
                        uint32_t *l_574[6][6][7] = {{{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548}},{{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548}},{{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548}},{{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548}},{{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548}},{{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548},{&l_276,(void*)0,&l_276,&l_548,(void*)0,&l_276,&l_548}}};
                        int32_t **l_575[1][6][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                        int16_t **l_583 = &p_1087->g_475[0][0];
                        int i, j, k;
                        (*p_1087->g_501) ^= (0x68L > (*l_296));
                        (*l_491) |= (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))((-1L), 0x0D40E97CL)).lo, (p_1087->g_464 || FAKE_DIVERGE(p_1087->local_0_offset, get_local_id(0), 10))));
                        l_576 = ((*l_361) = func_83(l_297[8][0][1], (l_547[2][0] = (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(2L, 6L, 0x592FL, ((VECTOR(int16_t, 8))(l_557.xxyxyyxy)), ((((*l_559) = l_558[0]) , (p_1087->g_80 & 0x4DB23C178C96F760L)) && ((((p_1087->g_464 = ((l_542[1] && (((safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s((((*l_491) > (255UL < (((VECTOR(uint8_t, 8))(l_568.s02928c68)).s2 <= (safe_mul_func_int16_t_s_s((+(l_541 <= ((safe_add_func_uint32_t_u_u(l_439, l_557.y)) , (*l_296)))), l_542[0]))))) && 4UL), l_557.x)) == l_547[0][1]), l_573)) != 0x68L) & (*l_491))) != 1L)) , 255UL) <= l_558[0]) , (*l_296))), ((VECTOR(int16_t, 2))((-2L))), 0x3327L, (-1L))).s2e)).even, l_557.x))), l_543, &l_558[0], l_557.x, p_1087));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1087->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 48)), permutations[(safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((((*l_583) = &l_297[5][0][1]) != p_1087->g_584) && (p_1087->g_316.y | ((((GROUP_DIVERGE(2, 1) ^ (l_547[0][2] & (*l_576))) ^ ((((*l_559) |= ((safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s(p_1087->g_163, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 2))(p_1087->g_590.s9d)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_591.s98)), 0x144B4C018180DB52L, 0L)).wwzyxwxzzxzzyzyw)).s4c, ((VECTOR(int64_t, 2))(p_1087->g_592.sd2))))).xyyyyyxx))), (l_543 < (((VECTOR(uint64_t, 8))(p_1087->g_593.s21007260)).s7 | (+(*l_296)))), ((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u(((((safe_add_func_uint64_t_u_u((4L == (*l_296)), p_1087->g_316.y)) != 255UL) >= (*l_296)) , p_1087->g_314.w), p_1087->g_125[3][6])) | 0L), l_602)), 5)) ^ 0x4BL), 0L, ((VECTOR(int64_t, 4))(1L)), 0x0376D9EE9E7C8A1FL)).odd, (int64_t)(-10L), (int64_t)(*l_576)))))).hi)).x)), (-9L))) <= l_603)) , &p_1087->g_7[5][1][2]) == &l_548)) , l_604) <= l_547[0][1]))) & 0x6214C4FF02708B60L), (-3L))), p_1087->g_316.x)) >= 0x0A2477C5AD45A0BCL), l_547[2][0])) > 1UL), 10))][(safe_mod_func_uint32_t_u_u(p_1087->tid, 48))]));
                    }
                    if ((*l_296))
                        continue;
                }
                else
                { /* block id: 209 */
                    uint16_t l_617 = 0xA564L;
                    for (l_119 = 0; (l_119 >= (-26)); l_119--)
                    { /* block id: 212 */
                        return l_607;
                    }
                    if ((atomic_inc(&p_1087->l_atomic_input[0]) == 8))
                    { /* block id: 216 */
                        uint64_t l_608 = 0x4541529E0573DE58L;
                        uint64_t l_609 = 1UL;
                        l_609 ^= l_608;
                        unsigned int result = 0;
                        result += l_608;
                        result += l_609;
                        atomic_add(&p_1087->l_special_values[0], result);
                    }
                    else
                    { /* block id: 218 */
                        (1 + 1);
                    }
                    (*l_361) = l_610;
                    for (l_546 = 28; (l_546 <= (-10)); l_546--)
                    { /* block id: 224 */
                        int32_t *l_616[2];
                        int32_t *l_620 = &p_1087->g_621;
                        uint8_t *l_630[2];
                        int16_t *l_651 = &l_297[4][1][2];
                        int16_t l_652 = 0x6BADL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_616[i] = &l_272;
                        for (i = 0; i < 2; i++)
                            l_630[i] = (void*)0;
                        (*l_491) = ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(p_1087->g_613.xwywxyww)).s72, ((VECTOR(int32_t, 4))(l_614.s11a6)).lo))).lo;
                        l_617++;
                        (*l_361) = func_83((((*l_620) = p_1087->g_104.s3) , (&p_1087->g_585 != &p_1087->g_585)), (safe_unary_minus_func_int16_t_s(l_546)), (safe_lshift_func_int8_t_s_s((*l_491), (safe_add_func_uint32_t_u_u(((*l_298) = (safe_add_func_int8_t_s_s((((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(l_629.wywyzzww)).s66, (int8_t)((p_1087->g_467.s1 ^= p_1087->g_363[7]) > (safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(l_635.s6723162607232215)).s5, 1)) < ((VECTOR(int64_t, 8))(((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((*l_651) = (((*l_610) = ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(l_617, (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x18L, 0x72L)), 0x23L, 6L)).zzwzyyyyywxyyzww, ((VECTOR(int8_t, 2))(p_1087->g_644.s31)).xxxxxyxxxyyxyyxx))).sa, 4)) < p_1087->g_316.y), 4)), (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_div_func_int64_t_s_s((((((l_541 && 6UL) || l_547[2][0]) ^ l_617) , p_1087->g_363[3]) || 0x04L), 1L)), p_1087->g_328)), l_379.x)), 0x590093A7L, 9L, 0x7135E6FBL, 0x27D511C0L, 0x6C057A11L, ((VECTOR(int32_t, 8))((-1L))))).even))).s4) , 0x70C5L)), l_652)), l_617)) || l_617), 0x2027B05D6648ECD4L, 0x573161826EFA85ECL, 0x7A18AABC520E75CAL, ((VECTOR(int64_t, 4))(0L)))).s4), p_1087->g_592.s3)))))), 0x35L, 3L)), ((VECTOR(int8_t, 4))(0x25L)), ((VECTOR(int8_t, 4))(5L)), ((VECTOR(int8_t, 4))(0x03L)))).s3 || l_653) <= (*l_296)) | l_617), FAKE_DIVERGE(p_1087->global_0_offset, get_global_id(0), 10)))), FAKE_DIVERGE(p_1087->global_0_offset, get_global_id(0), 10))))), p_48, l_617, p_1087);
                        if (l_617)
                            continue;
                    }
                }
                (*p_1087->g_501) = (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x73FE8B1CL, 1L)).yxxy)).y , (0x3B46L | (*p_1087->g_584)));
            }
            l_671 = ((l_654.s7 , (safe_sub_func_uint16_t_u_u(65535UL, (safe_rshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s((*l_296), 0x0CECL)) != ((-3L) != (((*l_663) = p_49) == ((((l_664 >= ((((((safe_add_func_uint16_t_u_u((((p_1087->g_667 , ((VECTOR(uint32_t, 8))(l_668.yxyyyxxy)).s2) | 0UL) | 1L), (*l_296))) | l_669) , FAKE_DIVERGE(p_1087->group_0_offset, get_group_id(0), 10)) == l_530.s0) || 1L) | (*l_296))) == l_670) > p_1087->g_593.s5) , p_49)))), 4))))) , (*l_361));
        }
    }
    else
    { /* block id: 241 */
        (*p_1087->g_672) = &l_119;
        if ((atomic_inc(&p_1087->g_atomic_input[80 * get_linear_group_id() + 68]) == 9))
        { /* block id: 244 */
            int32_t l_673[4] = {0x4B199133L,0x4B199133L,0x4B199133L,0x4B199133L};
            uint32_t l_707[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
            int16_t l_755 = 0x6DC6L;
            int16_t l_756 = 0x6D82L;
            int i;
            for (l_673[0] = 0; (l_673[0] >= (-26)); l_673[0] = safe_sub_func_uint64_t_u_u(l_673[0], 6))
            { /* block id: 247 */
                uint8_t l_676 = 0xDEL;
                int32_t l_678 = 0x623CC706L;
                int32_t *l_677 = &l_678;
                int32_t *l_679 = &l_678;
                int32_t l_706 = 1L;
                int32_t *l_705[4][6][2] = {{{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706}},{{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706}},{{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706}},{{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706},{&l_706,&l_706}}};
                int32_t **l_704[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_704[i] = &l_705[2][1][0];
                l_679 = (l_676 , l_677);
                for (l_676 = (-7); (l_676 <= 51); l_676++)
                { /* block id: 251 */
                    VECTOR(int32_t, 8) l_682 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), (-2L)), (-2L)), (-2L), (-9L), (-2L));
                    VECTOR(int32_t, 16) l_697 = (VECTOR(int32_t, 16))(0x12C4FE1CL, (VECTOR(int32_t, 4))(0x12C4FE1CL, (VECTOR(int32_t, 2))(0x12C4FE1CL, 0x6DABDE0EL), 0x6DABDE0EL), 0x6DABDE0EL, 0x12C4FE1CL, 0x6DABDE0EL, (VECTOR(int32_t, 2))(0x12C4FE1CL, 0x6DABDE0EL), (VECTOR(int32_t, 2))(0x12C4FE1CL, 0x6DABDE0EL), 0x12C4FE1CL, 0x6DABDE0EL, 0x12C4FE1CL, 0x6DABDE0EL);
                    VECTOR(int32_t, 16) l_698 = (VECTOR(int32_t, 16))(0x3E0EF734L, (VECTOR(int32_t, 4))(0x3E0EF734L, (VECTOR(int32_t, 2))(0x3E0EF734L, 0x023C3C82L), 0x023C3C82L), 0x023C3C82L, 0x3E0EF734L, 0x023C3C82L, (VECTOR(int32_t, 2))(0x3E0EF734L, 0x023C3C82L), (VECTOR(int32_t, 2))(0x3E0EF734L, 0x023C3C82L), 0x3E0EF734L, 0x023C3C82L, 0x3E0EF734L, 0x023C3C82L);
                    VECTOR(int32_t, 8) l_699 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                    VECTOR(int32_t, 4) l_700 = (VECTOR(int32_t, 4))(0x0CAE53C4L, (VECTOR(int32_t, 2))(0x0CAE53C4L, 0x0717DA81L), 0x0717DA81L);
                    int16_t l_701 = 0L;
                    uint8_t l_702 = 0xEBL;
                    VECTOR(int32_t, 4) l_703 = (VECTOR(int32_t, 4))(0x1037FB72L, (VECTOR(int32_t, 2))(0x1037FB72L, 0x7D69B753L), 0x7D69B753L);
                    int i;
                    if (((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(0L, 0x476A94A2L)), ((VECTOR(int32_t, 4))(l_682.s3323)).hi))).odd)
                    { /* block id: 252 */
                        uint16_t l_683 = 0x4A5AL;
                        int32_t l_687 = 7L;
                        int32_t *l_686 = &l_687;
                        int32_t *l_688[5][2] = {{&l_687,&l_687},{&l_687,&l_687},{&l_687,&l_687},{&l_687,&l_687},{&l_687,&l_687}};
                        int i, j;
                        --l_683;
                        l_688[4][1] = l_686;
                    }
                    else
                    { /* block id: 255 */
                        VECTOR(uint16_t, 2) l_689 = (VECTOR(uint16_t, 2))(0x157DL, 3UL);
                        int32_t l_690[7][5] = {{0x5AF495A1L,0L,0x0E46CA77L,0L,0x0E46CA77L},{0x5AF495A1L,0L,0x0E46CA77L,0L,0x0E46CA77L},{0x5AF495A1L,0L,0x0E46CA77L,0L,0x0E46CA77L},{0x5AF495A1L,0L,0x0E46CA77L,0L,0x0E46CA77L},{0x5AF495A1L,0L,0x0E46CA77L,0L,0x0E46CA77L},{0x5AF495A1L,0L,0x0E46CA77L,0L,0x0E46CA77L},{0x5AF495A1L,0L,0x0E46CA77L,0L,0x0E46CA77L}};
                        uint16_t l_691[3];
                        int32_t l_692[2][6] = {{1L,0x0AC4C492L,0x55FDD81AL,0x0AC4C492L,1L,1L},{1L,0x0AC4C492L,0x55FDD81AL,0x0AC4C492L,1L,1L}};
                        int64_t l_693 = 0x4883CDAEEEACB47BL;
                        uint16_t l_694 = 65535UL;
                        uint64_t l_695 = 3UL;
                        union U0 l_696[10] = {{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}};
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_691[i] = 65533UL;
                        l_694 &= (((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_689.yx)).yyyxyxxyyyxxyyyx)).s8 , (GROUP_DIVERGE(2, 1) , (l_691[1] = ((VECTOR(int32_t, 8))(l_690[1][0], 0x0419E8F3L, 1L, ((VECTOR(int32_t, 4))(0L, 0x637819A0L, 1L, 1L)), 0x68821DE3L)).s4))) , l_692[0][5]) , l_693);
                        (*l_679) &= l_695;
                        l_682.s4 = ((*l_679) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(9L, ((VECTOR(int32_t, 2))(9L, (-4L))), 0x3510C7D9L)).even)).odd);
                        (*l_677) ^= (l_696[2] , 9L);
                    }
                    (*l_679) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(l_697.s19154096)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(0x15FF2A8FL, 0L)).xxxxyxyyxxyyyxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_698.s4e)).lo, ((VECTOR(int32_t, 2))(l_699.s10)), 9L)))).ywyzyyyyzzxxxwwx))), ((VECTOR(int32_t, 16))(l_700.zzxzyyyxwwwyxwwy))))).s40)).yyyyyyyx))).odd, ((VECTOR(int32_t, 4))(4L, 0L, (-8L), 6L))))).zyzwyzyw, ((VECTOR(int32_t, 2))(0x36F8CEBEL, 0x51EE29FDL)).yyyxxyyy))), (-10L), l_701, l_702, (-7L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_703.wxwxyzzyxxzzxywz)).odd)).s42)), 0x0D457AEBL, 0x56940EBFL)).s9;
                    (*l_677) = 0L;
                }
                l_704[1] = (void*)0;
            }
            if (l_707[2])
            { /* block id: 268 */
                uint64_t l_708 = 0x319582090AEDBCC5L;
                uint32_t **l_711 = (void*)0;
                uint32_t l_714 = 0xB8866389L;
                uint32_t *l_713 = &l_714;
                uint32_t **l_712 = &l_713;
                uint16_t l_715 = 65535UL;
                int32_t l_716 = 6L;
                VECTOR(int32_t, 16) l_717 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7AEB8D27L), 0x7AEB8D27L), 0x7AEB8D27L, 0L, 0x7AEB8D27L, (VECTOR(int32_t, 2))(0L, 0x7AEB8D27L), (VECTOR(int32_t, 2))(0L, 0x7AEB8D27L), 0L, 0x7AEB8D27L, 0L, 0x7AEB8D27L);
                int i;
                l_708++;
                l_712 = l_711;
                l_673[2] |= ((VECTOR(int32_t, 4))(((l_716 = (l_715 = (((VECTOR(uint16_t, 4))(1UL, 0UL, 0UL, 65534UL)).z , FAKE_DIVERGE(p_1087->group_2_offset, get_group_id(2), 10)))) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_717.sda971afd)))).s6), (-6L), 0x40A416FCL, (-10L))).y;
            }
            else
            { /* block id: 274 */
                int32_t l_718[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                uint64_t l_738 = 0xFE0BCE0707ED89A0L;
                uint64_t l_739 = 18446744073709551615UL;
                int8_t l_740[1][6] = {{0x29L,0L,0x29L,0x29L,0L,0x29L}};
                VECTOR(int32_t, 16) l_741 = (VECTOR(int32_t, 16))(0x7DF53841L, (VECTOR(int32_t, 4))(0x7DF53841L, (VECTOR(int32_t, 2))(0x7DF53841L, 0x54574B7AL), 0x54574B7AL), 0x54574B7AL, 0x7DF53841L, 0x54574B7AL, (VECTOR(int32_t, 2))(0x7DF53841L, 0x54574B7AL), (VECTOR(int32_t, 2))(0x7DF53841L, 0x54574B7AL), 0x7DF53841L, 0x54574B7AL, 0x7DF53841L, 0x54574B7AL);
                uint8_t l_742 = 0x16L;
                VECTOR(int32_t, 2) l_743 = (VECTOR(int32_t, 2))((-5L), 0x1AFAE934L);
                int64_t l_744 = 5L;
                uint64_t l_745 = 4UL;
                uint64_t l_746 = 0x281E0CAA833AC28FL;
                int16_t l_747 = (-2L);
                uint32_t l_748 = 4294967295UL;
                int32_t l_749 = 0x6B6103AAL;
                uint32_t l_750 = 9UL;
                int64_t l_751 = 1L;
                uint32_t l_752[2][6][9] = {{{8UL,0x0A7BC81CL,0UL,9UL,0x3F909D5FL,0UL,0x684749B6L,1UL,1UL},{8UL,0x0A7BC81CL,0UL,9UL,0x3F909D5FL,0UL,0x684749B6L,1UL,1UL},{8UL,0x0A7BC81CL,0UL,9UL,0x3F909D5FL,0UL,0x684749B6L,1UL,1UL},{8UL,0x0A7BC81CL,0UL,9UL,0x3F909D5FL,0UL,0x684749B6L,1UL,1UL},{8UL,0x0A7BC81CL,0UL,9UL,0x3F909D5FL,0UL,0x684749B6L,1UL,1UL},{8UL,0x0A7BC81CL,0UL,9UL,0x3F909D5FL,0UL,0x684749B6L,1UL,1UL}},{{8UL,0x0A7BC81CL,0UL,9UL,0x3F909D5FL,0UL,0x684749B6L,1UL,1UL},{8UL,0x0A7BC81CL,0UL,9UL,0x3F909D5FL,0UL,0x684749B6L,1UL,1UL},{8UL,0x0A7BC81CL,0UL,9UL,0x3F909D5FL,0UL,0x684749B6L,1UL,1UL},{8UL,0x0A7BC81CL,0UL,9UL,0x3F909D5FL,0UL,0x684749B6L,1UL,1UL},{8UL,0x0A7BC81CL,0UL,9UL,0x3F909D5FL,0UL,0x684749B6L,1UL,1UL},{8UL,0x0A7BC81CL,0UL,9UL,0x3F909D5FL,0UL,0x684749B6L,1UL,1UL}}};
                int8_t l_753[6] = {0x62L,0x67L,0x62L,0x62L,0x67L,0x62L};
                int16_t l_754 = 0x404BL;
                int i, j, k;
                for (l_718[7] = 0; (l_718[7] < 13); l_718[7]++)
                { /* block id: 277 */
                    VECTOR(int32_t, 4) l_721 = (VECTOR(int32_t, 4))(0x390CBC6CL, (VECTOR(int32_t, 2))(0x390CBC6CL, 0x29585678L), 0x29585678L);
                    int8_t l_722 = 0x27L;
                    int32_t l_723 = (-1L);
                    int32_t l_724 = 0x38B8E277L;
                    VECTOR(int32_t, 8) l_725 = (VECTOR(int32_t, 8))(0x40E235D5L, (VECTOR(int32_t, 4))(0x40E235D5L, (VECTOR(int32_t, 2))(0x40E235D5L, (-3L)), (-3L)), (-3L), 0x40E235D5L, (-3L));
                    uint16_t l_726 = 65535UL;
                    uint8_t l_727 = 0xCDL;
                    int32_t l_728 = 0x693C8672L;
                    uint16_t l_729 = 0x8891L;
                    uint32_t l_730 = 0x8A2BD156L;
                    VECTOR(int32_t, 8) l_731 = (VECTOR(int32_t, 8))(0x1F51F973L, (VECTOR(int32_t, 4))(0x1F51F973L, (VECTOR(int32_t, 2))(0x1F51F973L, 0x53327A3DL), 0x53327A3DL), 0x53327A3DL, 0x1F51F973L, 0x53327A3DL);
                    VECTOR(int32_t, 2) l_732 = (VECTOR(int32_t, 2))((-1L), (-8L));
                    uint16_t l_733[9][3] = {{0x603DL,0x603DL,0x603DL},{0x603DL,0x603DL,0x603DL},{0x603DL,0x603DL,0x603DL},{0x603DL,0x603DL,0x603DL},{0x603DL,0x603DL,0x603DL},{0x603DL,0x603DL,0x603DL},{0x603DL,0x603DL,0x603DL},{0x603DL,0x603DL,0x603DL},{0x603DL,0x603DL,0x603DL}};
                    int8_t l_734 = (-1L);
                    int32_t l_735 = 0x4D5D559EL;
                    VECTOR(int32_t, 4) l_736 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x45952628L), 0x45952628L);
                    VECTOR(int32_t, 2) l_737 = (VECTOR(int32_t, 2))(0x0C822129L, (-1L));
                    int i, j;
                    l_673[0] = ((VECTOR(int32_t, 2))(l_721.wz)).odd;
                    l_673[0] = l_722;
                    l_673[2] = (l_723 , (l_724 , ((VECTOR(int32_t, 8))((-7L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_725.s0601)).hi)), (((l_728 = (l_727 = l_726)) , (l_729 = (-6L))) , ((VECTOR(int32_t, 16))(l_730, 2L, 0x33713548L, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(l_731.s0556)).xywzwxxw))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((-3L), 0x37D155CBL, 0x64114AFFL, 1L)))), 0x7CF84959L)).s8), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((-4L), 3L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_732.xy)), 0x16923206L, 0x2CB4A83FL)), 1L, (-4L), ((l_734 ^= l_733[5][0]) , l_735), 0x46972482L, ((VECTOR(int32_t, 2))(l_736.xx)), 8L, ((VECTOR(int32_t, 2))(l_737.yx)), (-1L))).odd)).s2, 0x261272F2L, 0x428833F1L, 0x5D15F46CL)).s7));
                    l_673[3] = 1L;
                }
                l_740[0][4] ^= ((l_738 , GROUP_DIVERGE(2, 1)) , (l_673[0] = l_739));
                l_754 |= ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_741.scfba7609)).s20, ((VECTOR(int32_t, 2))(0L, 0L)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_742, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 1L)).xxyyxxxy)).s17, (int32_t)0x70322F26L, (int32_t)((VECTOR(int32_t, 4))(l_743.xxxx)).w))), 0L, 0L)), 1L, ((FAKE_DIVERGE(p_1087->group_0_offset, get_group_id(0), 10) , 0x6CC8L) , ((l_744 , ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))((l_749 |= ((l_747 = (l_745 , (l_673[0] ^= l_746))) , (FAKE_DIVERGE(p_1087->global_2_offset, get_global_id(2), 10) , (l_748 , 0x1B772468L)))), l_750, 0x2E4605E2L, (-10L), l_751, ((VECTOR(int32_t, 4))(0x157D3A6BL)), ((VECTOR(int32_t, 2))(0x3B32D86AL)), l_752[0][2][2], l_753[0], ((VECTOR(int32_t, 2))(0x70F523BCL)), (-7L))), ((VECTOR(int32_t, 16))((-9L)))))).sf) , 0x6B061985L)), 0x490C3180L, ((VECTOR(int32_t, 8))(0L)))).even)).s07))).lo;
            }
            l_756 = l_755;
            unsigned int result = 0;
            int l_673_i0;
            for (l_673_i0 = 0; l_673_i0 < 4; l_673_i0++) {
                result += l_673[l_673_i0];
            }
            int l_707_i0;
            for (l_707_i0 = 0; l_707_i0 < 8; l_707_i0++) {
                result += l_707[l_707_i0];
            }
            result += l_755;
            result += l_756;
            atomic_add(&p_1087->g_special_values[80 * get_linear_group_id() + 68], result);
        }
        else
        { /* block id: 295 */
            (1 + 1);
        }
    }
    return (*l_296);
}


/* ------------------------------------------ */
/* 
 * reads : p_1087->g_80 p_1087->g_93 p_1087->g_3 p_1087->g_7 p_1087->l_comm_values p_1087->g_34 p_1087->g_79 p_1087->g_104 p_1087->g_107 p_1087->g_111
 * writes: p_1087->g_80 p_1087->g_95 p_1087->g_101 p_1087->g_104 p_1087->g_108
 */
int64_t * func_50(int32_t * p_51, int32_t * p_52, struct S1 * p_1087)
{ /* block id: 9 */
    int16_t l_77 = 0L;
    int32_t *l_78[4][5] = {{&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79},{&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79},{&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79},{&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79}};
    int8_t *l_94 = &p_1087->g_95;
    uint16_t *l_98 = &p_1087->g_34;
    int8_t *l_99 = (void*)0;
    int8_t *l_100[7];
    int64_t *l_102 = (void*)0;
    uint16_t l_109 = 1UL;
    int32_t l_110 = 0x6E5EE185L;
    int i, j;
    for (i = 0; i < 7; i++)
        l_100[i] = &p_1087->g_101;
    if ((atomic_inc(&p_1087->l_atomic_input[37]) == 7))
    { /* block id: 11 */
        uint32_t l_53 = 0x5137C5FDL;
        VECTOR(int32_t, 4) l_57 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x351ECC88L), 0x351ECC88L);
        int32_t *l_56 = (void*)0;
        VECTOR(int32_t, 4) l_58 = (VECTOR(int32_t, 4))(0x7C0820F6L, (VECTOR(int32_t, 2))(0x7C0820F6L, (-8L)), (-8L));
        int64_t l_59 = (-4L);
        int i;
        --l_53;
        l_56 = (void*)0;
        if ((l_59 = ((VECTOR(int32_t, 2))(l_58.wz)).hi))
        { /* block id: 15 */
            VECTOR(int32_t, 8) l_60 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), (-1L)), (-1L)), (-1L), (-8L), (-1L));
            int i;
            l_57.y = (l_58.y = ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(l_60.s23))))).even);
            for (l_60.s3 = 0; (l_60.s3 >= 22); l_60.s3 = safe_add_func_int64_t_s_s(l_60.s3, 2))
            { /* block id: 20 */
                int64_t l_63 = 0x36CC05FD73FCFB24L;
                int8_t l_64 = 1L;
                int8_t l_65 = 0x6AL;
                uint8_t l_66 = 0xAAL;
                ++l_66;
            }
        }
        else
        { /* block id: 23 */
            uint32_t l_69 = 4294967291UL;
            uint32_t l_70 = 1UL;
            int32_t l_71 = (-1L);
            int16_t l_72 = 0x0C27L;
            uint16_t l_73 = 65535UL;
            VECTOR(int32_t, 16) l_74 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x59778504L), 0x59778504L), 0x59778504L, (-1L), 0x59778504L, (VECTOR(int32_t, 2))((-1L), 0x59778504L), (VECTOR(int32_t, 2))((-1L), 0x59778504L), (-1L), 0x59778504L, (-1L), 0x59778504L);
            int8_t l_75 = 0L;
            uint64_t l_76 = 0xE1FA26B9DDBBE02BL;
            int i;
            l_57.z |= l_69;
            l_57.z = l_70;
            l_58.z = (((VECTOR(uint32_t, 8))(0xA494CAA1L, GROUP_DIVERGE(1, 1), ((l_59 |= (l_71 &= 0L)) , l_72), l_73, 0x25B5FE41L, ((VECTOR(uint32_t, 2))(1UL, 4294967288UL)), 0xDE0B6AD7L)).s4 , (l_74.sc = ((VECTOR(int32_t, 4))(l_74.s0678)).y));
            l_76 = l_75;
        }
        unsigned int result = 0;
        result += l_53;
        result += l_57.w;
        result += l_57.z;
        result += l_57.y;
        result += l_57.x;
        result += l_58.w;
        result += l_58.z;
        result += l_58.y;
        result += l_58.x;
        result += l_59;
        atomic_add(&p_1087->l_special_values[37], result);
    }
    else
    { /* block id: 32 */
        (1 + 1);
    }
    p_1087->g_80++;
    (*p_1087->g_107) = func_83((p_1087->g_101 = (safe_mul_func_int8_t_s_s((l_78[2][3] != (((void*)0 == &p_1087->g_34) , (void*)0)), (safe_rshift_func_uint16_t_u_s((((((p_1087->g_93 >= 1L) < ((*l_94) = (l_94 == &p_1087->g_95))) | (safe_mul_func_int8_t_s_s((l_98 == (void*)0), (-1L)))) , (*p_51)) , p_1087->g_7[7][2][0]), 4))))), p_1087->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1087->tid, 48))], p_1087->g_34, l_102, p_1087->g_79, p_1087);
    l_110 = (l_109 &= (p_1087->g_104.sf , (*p_52)));
    return p_1087->g_111;
}


/* ------------------------------------------ */
/* 
 * reads : p_1087->g_104
 * writes: p_1087->g_104
 */
int32_t * func_83(int8_t  p_84, uint32_t  p_85, uint64_t  p_86, int64_t * p_87, uint32_t  p_88, struct S1 * p_1087)
{ /* block id: 38 */
    int32_t *l_103[4][10] = {{&p_1087->g_3,&p_1087->g_3,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_3,&p_1087->g_3},{&p_1087->g_3,&p_1087->g_3,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_3,&p_1087->g_3},{&p_1087->g_3,&p_1087->g_3,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_3,&p_1087->g_3},{&p_1087->g_3,&p_1087->g_3,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_3,&p_1087->g_3}};
    int i, j;
    p_1087->g_104.sd--;
    return &p_1087->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1087->g_126 p_1087->g_95 p_1087->g_125 p_1087->g_136 p_1087->l_comm_values p_1087->g_7 p_1087->g_107 p_1087->g_108 p_1087->g_93 p_1087->g_79 p_1087->g_163 p_1087->g_comm_values p_1087->g_182 p_1087->g_6 p_1087->g_34
 * writes: p_1087->g_79 p_1087->g_125 p_1087->g_163 p_1087->g_95 p_1087->g_34 p_1087->g_211
 */
uint32_t ** func_113(int8_t * p_114, uint32_t  p_115, uint32_t ** p_116, uint32_t * p_117, struct S1 * p_1087)
{ /* block id: 46 */
    uint64_t l_130 = 18446744073709551610UL;
    VECTOR(int8_t, 2) l_131 = (VECTOR(int8_t, 2))(0L, 1L);
    int64_t *l_137[10][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_139 = &p_1087->g_79;
    int32_t *l_144 = &p_1087->g_79;
    uint64_t l_147 = 0x2E776E5D696A6714L;
    VECTOR(int8_t, 4) l_166 = (VECTOR(int8_t, 4))(0x53L, (VECTOR(int8_t, 2))(0x53L, 0x6EL), 0x6EL);
    uint32_t l_173 = 0xA98FEA86L;
    int32_t l_174 = 0L;
    int32_t l_200 = (-6L);
    int32_t l_230 = 6L;
    int32_t l_231 = 9L;
    int32_t l_232 = 0x0453F7F7L;
    int32_t l_233 = 0x0584F748L;
    int32_t l_234 = 0L;
    int32_t l_235 = (-3L);
    int32_t l_236 = 0x26DB6308L;
    int32_t l_237 = 0x457CDE47L;
    int32_t l_238 = (-1L);
    int32_t l_239 = 0L;
    int32_t l_240 = (-1L);
    int8_t l_241 = 0x11L;
    VECTOR(int32_t, 16) l_242 = (VECTOR(int32_t, 16))(0x5307B5E0L, (VECTOR(int32_t, 4))(0x5307B5E0L, (VECTOR(int32_t, 2))(0x5307B5E0L, 0L), 0L), 0L, 0x5307B5E0L, 0L, (VECTOR(int32_t, 2))(0x5307B5E0L, 0L), (VECTOR(int32_t, 2))(0x5307B5E0L, 0L), 0x5307B5E0L, 0L, 0x5307B5E0L, 0L);
    int64_t l_244 = 0x172552A63C907508L;
    int16_t l_246 = 0x15F2L;
    int16_t l_247 = 1L;
    uint8_t l_248 = 0x56L;
    int i, j;
    for (p_115 = (-11); (p_115 <= 16); ++p_115)
    { /* block id: 49 */
        uint32_t *l_124 = &p_1087->g_125[3][3];
        uint32_t **l_123[9];
        int i;
        for (i = 0; i < 9; i++)
            l_123[i] = &l_124;
        return p_1087->g_126;
    }
    (*l_139) = ((safe_mul_func_int16_t_s_s((-10L), l_130)) && (l_130 < (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(252UL, ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))((*p_114), (-10L), ((VECTOR(int8_t, 2))(l_131.yx)), 0L, ((safe_add_func_int64_t_s_s(((l_131.y >= p_1087->g_125[3][3]) != (0xBBEFFA24A0073B97L >= ((((safe_div_func_int32_t_s_s((((((VECTOR(int64_t, 2))(p_1087->g_136.s9d)).even | 0L) , l_137[0][6]) == l_137[0][6]), l_131.y)) , 0x852427BCL) > 0L) != 1UL))), p_1087->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1087->tid, 48))])) | p_1087->g_7[2][0][4]), (*p_114), 7L, 0x02L, ((VECTOR(int8_t, 4))((-1L))), 0x06L, 0x7EL, (-1L))).s21f2, ((VECTOR(int8_t, 4))((-1L)))))).even, ((VECTOR(int8_t, 2))(0x60L)), ((VECTOR(int8_t, 2))((-7L)))))).odd, 0x0DL, p_1087->g_125[3][3], 0L, l_131.y, 0x40L, 1L, 0x27L)).s30, ((VECTOR(int8_t, 2))(0x5CL))))), 247UL)))).z != l_130)));
    for (p_115 = 0; (p_115 == 51); p_115 = safe_add_func_uint32_t_u_u(p_115, 5))
    { /* block id: 55 */
        int32_t **l_143[7];
        VECTOR(uint16_t, 16) l_167 = (VECTOR(uint16_t, 16))(0x11F1L, (VECTOR(uint16_t, 4))(0x11F1L, (VECTOR(uint16_t, 2))(0x11F1L, 0xFCA1L), 0xFCA1L), 0xFCA1L, 0x11F1L, 0xFCA1L, (VECTOR(uint16_t, 2))(0x11F1L, 0xFCA1L), (VECTOR(uint16_t, 2))(0x11F1L, 0xFCA1L), 0x11F1L, 0xFCA1L, 0x11F1L, 0xFCA1L);
        VECTOR(int16_t, 8) l_181 = (VECTOR(int16_t, 8))(0x523FL, (VECTOR(int16_t, 4))(0x523FL, (VECTOR(int16_t, 2))(0x523FL, (-1L)), (-1L)), (-1L), 0x523FL, (-1L));
        VECTOR(int16_t, 2) l_189 = (VECTOR(int16_t, 2))(0x548DL, 0L);
        uint16_t *l_203[2][5];
        uint32_t *l_206 = &l_173;
        uint8_t *l_210 = (void*)0;
        uint8_t *l_212 = (void*)0;
        uint8_t *l_213 = (void*)0;
        uint8_t *l_214[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(uint8_t, 8) l_215 = (VECTOR(uint8_t, 8))(0xEAL, (VECTOR(uint8_t, 4))(0xEAL, (VECTOR(uint8_t, 2))(0xEAL, 6UL), 6UL), 6UL, 0xEAL, 6UL);
        int i, j;
        for (i = 0; i < 7; i++)
            l_143[i] = &l_139;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_203[i][j] = &p_1087->g_34;
        }
        l_144 = (*p_1087->g_107);
        if (p_115)
        { /* block id: 57 */
            return &p_1087->g_127[2];
        }
        else
        { /* block id: 59 */
            uint32_t *l_159 = (void*)0;
            uint32_t *l_160 = (void*)0;
            uint32_t *l_161 = &p_1087->g_125[1][4];
            uint32_t *l_162 = &p_1087->g_163;
            int32_t l_170 = 0x5CC0066FL;
            uint64_t *l_171 = (void*)0;
            uint64_t *l_172 = &l_130;
            int32_t l_195 = 0x5AF8ADF5L;
            (*l_139) = (l_174 ^= (safe_sub_func_uint32_t_u_u(((!l_147) > (((*p_114) <= p_1087->g_93) , (safe_rshift_func_int8_t_s_u((*p_114), (((*l_172) &= (0x42EBL || (safe_add_func_int8_t_s_s((safe_div_func_uint8_t_u_u(255UL, FAKE_DIVERGE(p_1087->global_0_offset, get_global_id(0), 10))), (safe_unary_minus_func_int32_t_s((safe_add_func_int64_t_s_s(((p_115 | (safe_add_func_uint32_t_u_u(((*l_162) = ((*l_161) = GROUP_DIVERGE(2, 1))), (((((*l_139) && (((((safe_div_func_uint16_t_u_u((((VECTOR(int8_t, 16))(l_166.wyyxywwxzxzwzwzy)).se , (((VECTOR(uint16_t, 16))(l_167.s05d9fa13db782676)).sf , (safe_mul_func_int8_t_s_s((*p_114), p_1087->g_95)))), p_1087->g_93)) >= FAKE_DIVERGE(p_1087->global_2_offset, get_global_id(2), 10)) , (-2L)) <= 1UL) & l_170)) && 1UL) , p_115) > p_115)))) && l_170), p_115)))))))) | l_173))))), p_115)));
            for (l_170 = (-9); (l_170 < 19); l_170 = safe_add_func_int64_t_s_s(l_170, 7))
            { /* block id: 67 */
                VECTOR(int16_t, 16) l_180 = (VECTOR(int16_t, 16))(0x5AC3L, (VECTOR(int16_t, 4))(0x5AC3L, (VECTOR(int16_t, 2))(0x5AC3L, 4L), 4L), 4L, 0x5AC3L, 4L, (VECTOR(int16_t, 2))(0x5AC3L, 4L), (VECTOR(int16_t, 2))(0x5AC3L, 4L), 0x5AC3L, 4L, 0x5AC3L, 4L);
                uint64_t l_193 = 0x3BF16EFBBEDD9408L;
                int i;
                for (l_130 = 0; (l_130 == 51); ++l_130)
                { /* block id: 70 */
                    VECTOR(int16_t, 4) l_179 = (VECTOR(int16_t, 4))(0x3ABCL, (VECTOR(int16_t, 2))(0x3ABCL, 0L), 0L);
                    int8_t l_192 = 0x55L;
                    int64_t l_194 = (-10L);
                    int i;
                    l_195 ^= ((((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_179.xxyzxwyw)).odd)).yyywwxww, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_180.sc1)), ((VECTOR(int16_t, 2))(2L, 0x0081L)).lo, 0x29FCL, p_1087->g_163, p_1087->g_comm_values[p_1087->tid], 0x4972L, ((VECTOR(int16_t, 4))(l_181.s0300)), ((VECTOR(int16_t, 2))(p_1087->g_182.yx)), 0x0184L, 0x0E2AL, 0x2604L)).odd))).s7 != p_1087->g_6) , (((*p_114) = (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 0xA262BF9C2CA9A2DDL))))))).hi, p_1087->g_136.s3)), ((VECTOR(int16_t, 16))(p_115, 2L, 2L, 0L, 0x3755L, ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))(l_189.yyyy)).wwywxxwx, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))((safe_div_func_int16_t_s_s((((VECTOR(uint64_t, 4))(l_179.z, l_192, 0x7ACBCB859E3981A3L, 0UL)).y & l_193), l_180.s6)), 0x3F74L, 1L, 0L)))).hi, ((VECTOR(int16_t, 2))(0x456AL))))).yxxxyyyx))))), ((VECTOR(int16_t, 2))(0x4D65L)), 0x580BL)).s1)), (*l_139)))) | l_194));
                    for (p_1087->g_34 = 0; (p_1087->g_34 < 18); p_1087->g_34 = safe_add_func_int8_t_s_s(p_1087->g_34, 3))
                    { /* block id: 75 */
                        return &p_1087->g_127[2];
                    }
                }
            }
        }
        l_215.s4 = (p_115 , ((safe_div_func_int8_t_s_s(((l_200 , ((safe_rshift_func_int8_t_s_u(((void*)0 == l_203[0][1]), (safe_mod_func_int32_t_s_s((0x6CEDD8EAL < ((void*)0 != l_206)), ((((0L <= ((((p_1087->g_211.s5 = (safe_unary_minus_func_uint16_t_u((0x675AF26B09917582L || p_115)))) | p_1087->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1087->tid, 48))]) == 0x5DL) < (*l_139))) != p_115) != p_1087->g_93) ^ p_115))))) <= p_1087->g_136.s7)) & p_115), (*l_139))) , p_115));
    }
    for (p_115 = 16; (p_115 == 37); p_115 = safe_add_func_int32_t_s_s(p_115, 4))
    { /* block id: 86 */
        int64_t l_220 = 0x32F378EE980A02F6L;
        uint32_t *l_221 = &p_1087->g_125[1][4];
        uint32_t *l_224 = &p_1087->g_163;
        int32_t *l_225 = &p_1087->g_79;
        int32_t *l_226 = &l_174;
        int32_t *l_227 = &p_1087->g_79;
        int32_t *l_228 = (void*)0;
        int32_t *l_229[1];
        VECTOR(int16_t, 4) l_243 = (VECTOR(int16_t, 4))(0x6C21L, (VECTOR(int16_t, 2))(0x6C21L, 0L), 0L);
        int32_t l_245 = (-6L);
        int i;
        for (i = 0; i < 1; i++)
            l_229[i] = &p_1087->g_79;
        (*l_139) ^= (((safe_sub_func_int32_t_s_s(0x256DE87AL, l_220)) | ((*l_224) = (++(*l_221)))) || p_115);
        ++l_248;
    }
    return &p_1087->g_127[2];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[80];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 80; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[80];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 80; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[48];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 48; i++)
            l_comm_values[i] = 1;
    struct S1 c_1088;
    struct S1* p_1087 = &c_1088;
    struct S1 c_1089 = {
        0x3999FB02L, // p_1087->g_3
        1L, // p_1087->g_6
        {{{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL}},{{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL}},{{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL}},{{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL}},{{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL}},{{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL}},{{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL}},{{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL},{0UL,1UL,0xF4A8FE24L,0x9B45C761L,4294967292UL,0x4826422FL,0x7609FA85L,0xB58FE4DEL,0x90707E29L,4294967295UL}}}, // p_1087->g_7
        0x34D89BB6L, // p_1087->g_18
        6UL, // p_1087->g_34
        0x427A07EEL, // p_1087->g_79
        0xBE71502624D59534L, // p_1087->g_80
        0x08A75D01L, // p_1087->g_93
        0x21L, // p_1087->g_95
        8L, // p_1087->g_101
        (VECTOR(uint32_t, 16))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0xE3F75E0FL), 0xE3F75E0FL), 0xE3F75E0FL, 4294967288UL, 0xE3F75E0FL, (VECTOR(uint32_t, 2))(4294967288UL, 0xE3F75E0FL), (VECTOR(uint32_t, 2))(4294967288UL, 0xE3F75E0FL), 4294967288UL, 0xE3F75E0FL, 4294967288UL, 0xE3F75E0FL), // p_1087->g_104
        {&p_1087->g_79,&p_1087->g_79,&p_1087->g_79,&p_1087->g_79}, // p_1087->g_108
        &p_1087->g_108[1], // p_1087->g_107
        (void*)0, // p_1087->g_111
        (void*)0, // p_1087->g_112
        {{7UL,2UL,7UL,7UL,2UL,7UL,7UL},{7UL,2UL,7UL,7UL,2UL,7UL,7UL},{7UL,2UL,7UL,7UL,2UL,7UL,7UL},{7UL,2UL,7UL,7UL,2UL,7UL,7UL},{7UL,2UL,7UL,7UL,2UL,7UL,7UL},{7UL,2UL,7UL,7UL,2UL,7UL,7UL}}, // p_1087->g_125
        {(void*)0,&p_1087->g_125[2][6],(void*)0,(void*)0,&p_1087->g_125[2][6],(void*)0,(void*)0,&p_1087->g_125[2][6],(void*)0,(void*)0}, // p_1087->g_127
        &p_1087->g_127[2], // p_1087->g_126
        (VECTOR(int64_t, 16))((-4L), (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0x18E4816DB70B35F6L), 0x18E4816DB70B35F6L), 0x18E4816DB70B35F6L, (-4L), 0x18E4816DB70B35F6L, (VECTOR(int64_t, 2))((-4L), 0x18E4816DB70B35F6L), (VECTOR(int64_t, 2))((-4L), 0x18E4816DB70B35F6L), (-4L), 0x18E4816DB70B35F6L, (-4L), 0x18E4816DB70B35F6L), // p_1087->g_136
        (void*)0, // p_1087->g_138
        {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}}, // p_1087->g_142
        0x10EF4BC9L, // p_1087->g_163
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3B74L), 0x3B74L), // p_1087->g_182
        (VECTOR(uint8_t, 16))(0x02L, (VECTOR(uint8_t, 4))(0x02L, (VECTOR(uint8_t, 2))(0x02L, 8UL), 8UL), 8UL, 0x02L, 8UL, (VECTOR(uint8_t, 2))(0x02L, 8UL), (VECTOR(uint8_t, 2))(0x02L, 8UL), 0x02L, 8UL, 0x02L, 8UL), // p_1087->g_211
        {{{&p_1087->g_108[3]},{&p_1087->g_108[3]},{&p_1087->g_108[3]}},{{&p_1087->g_108[3]},{&p_1087->g_108[3]},{&p_1087->g_108[3]}},{{&p_1087->g_108[3]},{&p_1087->g_108[3]},{&p_1087->g_108[3]}},{{&p_1087->g_108[3]},{&p_1087->g_108[3]},{&p_1087->g_108[3]}}}, // p_1087->g_279
        &p_1087->g_108[0], // p_1087->g_280
        (VECTOR(int32_t, 4))(0x37E1939BL, (VECTOR(int32_t, 2))(0x37E1939BL, 0x1D715F21L), 0x1D715F21L), // p_1087->g_314
        (VECTOR(int32_t, 2))(0x5C49650FL, (-7L)), // p_1087->g_316
        (VECTOR(int64_t, 4))(0x06C4DCA65F817359L, (VECTOR(int64_t, 2))(0x06C4DCA65F817359L, (-8L)), (-8L)), // p_1087->g_319
        0x6467A1F8DC3EBF0EL, // p_1087->g_328
        {9L,9L,9L,9L,9L,9L,9L,9L,9L}, // p_1087->g_363
        (-2L), // p_1087->g_384
        (VECTOR(uint16_t, 8))(0x7B40L, (VECTOR(uint16_t, 4))(0x7B40L, (VECTOR(uint16_t, 2))(0x7B40L, 65535UL), 65535UL), 65535UL, 0x7B40L, 65535UL), // p_1087->g_440
        (void*)0, // p_1087->g_452
        0x8139B56FL, // p_1087->g_464
        (VECTOR(uint8_t, 8))(0xD6L, (VECTOR(uint8_t, 4))(0xD6L, (VECTOR(uint8_t, 2))(0xD6L, 0x3AL), 0x3AL), 0x3AL, 0xD6L, 0x3AL), // p_1087->g_467
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_1087->g_475
        &p_1087->g_363[3], // p_1087->g_501
        &p_1087->g_501, // p_1087->g_500
        (VECTOR(int8_t, 8))(0x5AL, (VECTOR(int8_t, 4))(0x5AL, (VECTOR(int8_t, 2))(0x5AL, 9L), 9L), 9L, 0x5AL, 9L), // p_1087->g_526
        0x4777L, // p_1087->g_585
        &p_1087->g_585, // p_1087->g_584
        (VECTOR(int64_t, 16))(0x54E5CCBFEA4C960BL, (VECTOR(int64_t, 4))(0x54E5CCBFEA4C960BL, (VECTOR(int64_t, 2))(0x54E5CCBFEA4C960BL, 3L), 3L), 3L, 0x54E5CCBFEA4C960BL, 3L, (VECTOR(int64_t, 2))(0x54E5CCBFEA4C960BL, 3L), (VECTOR(int64_t, 2))(0x54E5CCBFEA4C960BL, 3L), 0x54E5CCBFEA4C960BL, 3L, 0x54E5CCBFEA4C960BL, 3L), // p_1087->g_590
        (VECTOR(int64_t, 16))((-10L), (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 0x2B85197E7D80D376L), 0x2B85197E7D80D376L), 0x2B85197E7D80D376L, (-10L), 0x2B85197E7D80D376L, (VECTOR(int64_t, 2))((-10L), 0x2B85197E7D80D376L), (VECTOR(int64_t, 2))((-10L), 0x2B85197E7D80D376L), (-10L), 0x2B85197E7D80D376L, (-10L), 0x2B85197E7D80D376L), // p_1087->g_592
        (VECTOR(uint64_t, 8))(0x13926A2B88B223FCL, (VECTOR(uint64_t, 4))(0x13926A2B88B223FCL, (VECTOR(uint64_t, 2))(0x13926A2B88B223FCL, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 0x13926A2B88B223FCL, 18446744073709551607UL), // p_1087->g_593
        (VECTOR(int32_t, 4))(0x29CEC17FL, (VECTOR(int32_t, 2))(0x29CEC17FL, 0x1ABF074BL), 0x1ABF074BL), // p_1087->g_613
        {{{0x76L,0x76L,0x76L},{0x76L,0x76L,0x76L},{0x76L,0x76L,0x76L},{0x76L,0x76L,0x76L}}}, // p_1087->g_615
        (-2L), // p_1087->g_621
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x06L), 0x06L), 0x06L, 1L, 0x06L), // p_1087->g_644
        {0}, // p_1087->g_667
        &p_1087->g_108[1], // p_1087->g_672
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_1087->g_759
        {{{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]},{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]},{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]}},{{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]},{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]},{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]}},{{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]},{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]},{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]}},{{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]},{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]},{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]}},{{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]},{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]},{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]}},{{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]},{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]},{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]}},{{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]},{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]},{&p_1087->g_108[3],&p_1087->g_501,&p_1087->g_108[1]}}}, // p_1087->g_764
        &p_1087->g_108[1], // p_1087->g_765
        {0}, // p_1087->g_792
        &p_1087->g_464, // p_1087->g_812
        &p_1087->g_812, // p_1087->g_811
        &p_1087->g_108[2], // p_1087->g_818
        0xCD4F5766L, // p_1087->g_827
        &p_1087->g_667, // p_1087->g_829
        &p_1087->g_829, // p_1087->g_828
        (-6L), // p_1087->g_836
        (VECTOR(uint64_t, 4))(0x725F8BE925213DC1L, (VECTOR(uint64_t, 2))(0x725F8BE925213DC1L, 0UL), 0UL), // p_1087->g_841
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1087->g_842
        (VECTOR(uint16_t, 16))(0x64E3L, (VECTOR(uint16_t, 4))(0x64E3L, (VECTOR(uint16_t, 2))(0x64E3L, 0xB109L), 0xB109L), 0xB109L, 0x64E3L, 0xB109L, (VECTOR(uint16_t, 2))(0x64E3L, 0xB109L), (VECTOR(uint16_t, 2))(0x64E3L, 0xB109L), 0x64E3L, 0xB109L, 0x64E3L, 0xB109L), // p_1087->g_870
        (VECTOR(uint16_t, 2))(6UL, 0x70F9L), // p_1087->g_873
        (VECTOR(uint32_t, 8))(0x227C92F1L, (VECTOR(uint32_t, 4))(0x227C92F1L, (VECTOR(uint32_t, 2))(0x227C92F1L, 0x9C7C57F1L), 0x9C7C57F1L), 0x9C7C57F1L, 0x227C92F1L, 0x9C7C57F1L), // p_1087->g_888
        (VECTOR(int32_t, 8))(0x5A49D197L, (VECTOR(int32_t, 4))(0x5A49D197L, (VECTOR(int32_t, 2))(0x5A49D197L, 0x44F8CB68L), 0x44F8CB68L), 0x44F8CB68L, 0x5A49D197L, 0x44F8CB68L), // p_1087->g_912
        (VECTOR(int32_t, 8))(0x37AC2BCCL, (VECTOR(int32_t, 4))(0x37AC2BCCL, (VECTOR(int32_t, 2))(0x37AC2BCCL, 0x509D84B5L), 0x509D84B5L), 0x509D84B5L, 0x37AC2BCCL, 0x509D84B5L), // p_1087->g_913
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x193AL), 0x193AL), 0x193AL, 0L, 0x193AL, (VECTOR(int16_t, 2))(0L, 0x193AL), (VECTOR(int16_t, 2))(0L, 0x193AL), 0L, 0x193AL, 0L, 0x193AL), // p_1087->g_938
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x0121L), 0x0121L), // p_1087->g_939
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x1D4AL), 0x1D4AL), // p_1087->g_941
        (VECTOR(int16_t, 16))(0x2800L, (VECTOR(int16_t, 4))(0x2800L, (VECTOR(int16_t, 2))(0x2800L, 0x5B94L), 0x5B94L), 0x5B94L, 0x2800L, 0x5B94L, (VECTOR(int16_t, 2))(0x2800L, 0x5B94L), (VECTOR(int16_t, 2))(0x2800L, 0x5B94L), 0x2800L, 0x5B94L, 0x2800L, 0x5B94L), // p_1087->g_976
        (VECTOR(int64_t, 2))(4L, 0x0737243F1EAE545CL), // p_1087->g_987
        (void*)0, // p_1087->g_991
        (VECTOR(int32_t, 2))(2L, 1L), // p_1087->g_1037
        (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 0x7B4B7D367AE05D85L), 0x7B4B7D367AE05D85L), // p_1087->g_1040
        (VECTOR(int8_t, 16))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0x58L), 0x58L), 0x58L, 9L, 0x58L, (VECTOR(int8_t, 2))(9L, 0x58L), (VECTOR(int8_t, 2))(9L, 0x58L), 9L, 0x58L, 9L, 0x58L), // p_1087->g_1064
        (VECTOR(uint8_t, 8))(0x74L, (VECTOR(uint8_t, 4))(0x74L, (VECTOR(uint8_t, 2))(0x74L, 1UL), 1UL), 1UL, 0x74L, 1UL), // p_1087->g_1069
        0, // p_1087->v_collective
        sequence_input[get_global_id(0)], // p_1087->global_0_offset
        sequence_input[get_global_id(1)], // p_1087->global_1_offset
        sequence_input[get_global_id(2)], // p_1087->global_2_offset
        sequence_input[get_local_id(0)], // p_1087->local_0_offset
        sequence_input[get_local_id(1)], // p_1087->local_1_offset
        sequence_input[get_local_id(2)], // p_1087->local_2_offset
        sequence_input[get_group_id(0)], // p_1087->group_0_offset
        sequence_input[get_group_id(1)], // p_1087->group_1_offset
        sequence_input[get_group_id(2)], // p_1087->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 48)), permutations[0][get_linear_local_id()])), // p_1087->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1088 = c_1089;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1087);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1087->g_3, "p_1087->g_3", print_hash_value);
    transparent_crc(p_1087->g_6, "p_1087->g_6", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_1087->g_7[i][j][k], "p_1087->g_7[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1087->g_18, "p_1087->g_18", print_hash_value);
    transparent_crc(p_1087->g_34, "p_1087->g_34", print_hash_value);
    transparent_crc(p_1087->g_79, "p_1087->g_79", print_hash_value);
    transparent_crc(p_1087->g_80, "p_1087->g_80", print_hash_value);
    transparent_crc(p_1087->g_93, "p_1087->g_93", print_hash_value);
    transparent_crc(p_1087->g_95, "p_1087->g_95", print_hash_value);
    transparent_crc(p_1087->g_101, "p_1087->g_101", print_hash_value);
    transparent_crc(p_1087->g_104.s0, "p_1087->g_104.s0", print_hash_value);
    transparent_crc(p_1087->g_104.s1, "p_1087->g_104.s1", print_hash_value);
    transparent_crc(p_1087->g_104.s2, "p_1087->g_104.s2", print_hash_value);
    transparent_crc(p_1087->g_104.s3, "p_1087->g_104.s3", print_hash_value);
    transparent_crc(p_1087->g_104.s4, "p_1087->g_104.s4", print_hash_value);
    transparent_crc(p_1087->g_104.s5, "p_1087->g_104.s5", print_hash_value);
    transparent_crc(p_1087->g_104.s6, "p_1087->g_104.s6", print_hash_value);
    transparent_crc(p_1087->g_104.s7, "p_1087->g_104.s7", print_hash_value);
    transparent_crc(p_1087->g_104.s8, "p_1087->g_104.s8", print_hash_value);
    transparent_crc(p_1087->g_104.s9, "p_1087->g_104.s9", print_hash_value);
    transparent_crc(p_1087->g_104.sa, "p_1087->g_104.sa", print_hash_value);
    transparent_crc(p_1087->g_104.sb, "p_1087->g_104.sb", print_hash_value);
    transparent_crc(p_1087->g_104.sc, "p_1087->g_104.sc", print_hash_value);
    transparent_crc(p_1087->g_104.sd, "p_1087->g_104.sd", print_hash_value);
    transparent_crc(p_1087->g_104.se, "p_1087->g_104.se", print_hash_value);
    transparent_crc(p_1087->g_104.sf, "p_1087->g_104.sf", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1087->g_125[i][j], "p_1087->g_125[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1087->g_136.s0, "p_1087->g_136.s0", print_hash_value);
    transparent_crc(p_1087->g_136.s1, "p_1087->g_136.s1", print_hash_value);
    transparent_crc(p_1087->g_136.s2, "p_1087->g_136.s2", print_hash_value);
    transparent_crc(p_1087->g_136.s3, "p_1087->g_136.s3", print_hash_value);
    transparent_crc(p_1087->g_136.s4, "p_1087->g_136.s4", print_hash_value);
    transparent_crc(p_1087->g_136.s5, "p_1087->g_136.s5", print_hash_value);
    transparent_crc(p_1087->g_136.s6, "p_1087->g_136.s6", print_hash_value);
    transparent_crc(p_1087->g_136.s7, "p_1087->g_136.s7", print_hash_value);
    transparent_crc(p_1087->g_136.s8, "p_1087->g_136.s8", print_hash_value);
    transparent_crc(p_1087->g_136.s9, "p_1087->g_136.s9", print_hash_value);
    transparent_crc(p_1087->g_136.sa, "p_1087->g_136.sa", print_hash_value);
    transparent_crc(p_1087->g_136.sb, "p_1087->g_136.sb", print_hash_value);
    transparent_crc(p_1087->g_136.sc, "p_1087->g_136.sc", print_hash_value);
    transparent_crc(p_1087->g_136.sd, "p_1087->g_136.sd", print_hash_value);
    transparent_crc(p_1087->g_136.se, "p_1087->g_136.se", print_hash_value);
    transparent_crc(p_1087->g_136.sf, "p_1087->g_136.sf", print_hash_value);
    transparent_crc(p_1087->g_163, "p_1087->g_163", print_hash_value);
    transparent_crc(p_1087->g_182.x, "p_1087->g_182.x", print_hash_value);
    transparent_crc(p_1087->g_182.y, "p_1087->g_182.y", print_hash_value);
    transparent_crc(p_1087->g_182.z, "p_1087->g_182.z", print_hash_value);
    transparent_crc(p_1087->g_182.w, "p_1087->g_182.w", print_hash_value);
    transparent_crc(p_1087->g_211.s0, "p_1087->g_211.s0", print_hash_value);
    transparent_crc(p_1087->g_211.s1, "p_1087->g_211.s1", print_hash_value);
    transparent_crc(p_1087->g_211.s2, "p_1087->g_211.s2", print_hash_value);
    transparent_crc(p_1087->g_211.s3, "p_1087->g_211.s3", print_hash_value);
    transparent_crc(p_1087->g_211.s4, "p_1087->g_211.s4", print_hash_value);
    transparent_crc(p_1087->g_211.s5, "p_1087->g_211.s5", print_hash_value);
    transparent_crc(p_1087->g_211.s6, "p_1087->g_211.s6", print_hash_value);
    transparent_crc(p_1087->g_211.s7, "p_1087->g_211.s7", print_hash_value);
    transparent_crc(p_1087->g_211.s8, "p_1087->g_211.s8", print_hash_value);
    transparent_crc(p_1087->g_211.s9, "p_1087->g_211.s9", print_hash_value);
    transparent_crc(p_1087->g_211.sa, "p_1087->g_211.sa", print_hash_value);
    transparent_crc(p_1087->g_211.sb, "p_1087->g_211.sb", print_hash_value);
    transparent_crc(p_1087->g_211.sc, "p_1087->g_211.sc", print_hash_value);
    transparent_crc(p_1087->g_211.sd, "p_1087->g_211.sd", print_hash_value);
    transparent_crc(p_1087->g_211.se, "p_1087->g_211.se", print_hash_value);
    transparent_crc(p_1087->g_211.sf, "p_1087->g_211.sf", print_hash_value);
    transparent_crc(p_1087->g_314.x, "p_1087->g_314.x", print_hash_value);
    transparent_crc(p_1087->g_314.y, "p_1087->g_314.y", print_hash_value);
    transparent_crc(p_1087->g_314.z, "p_1087->g_314.z", print_hash_value);
    transparent_crc(p_1087->g_314.w, "p_1087->g_314.w", print_hash_value);
    transparent_crc(p_1087->g_316.x, "p_1087->g_316.x", print_hash_value);
    transparent_crc(p_1087->g_316.y, "p_1087->g_316.y", print_hash_value);
    transparent_crc(p_1087->g_319.x, "p_1087->g_319.x", print_hash_value);
    transparent_crc(p_1087->g_319.y, "p_1087->g_319.y", print_hash_value);
    transparent_crc(p_1087->g_319.z, "p_1087->g_319.z", print_hash_value);
    transparent_crc(p_1087->g_319.w, "p_1087->g_319.w", print_hash_value);
    transparent_crc(p_1087->g_328, "p_1087->g_328", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1087->g_363[i], "p_1087->g_363[i]", print_hash_value);

    }
    transparent_crc(p_1087->g_384, "p_1087->g_384", print_hash_value);
    transparent_crc(p_1087->g_440.s0, "p_1087->g_440.s0", print_hash_value);
    transparent_crc(p_1087->g_440.s1, "p_1087->g_440.s1", print_hash_value);
    transparent_crc(p_1087->g_440.s2, "p_1087->g_440.s2", print_hash_value);
    transparent_crc(p_1087->g_440.s3, "p_1087->g_440.s3", print_hash_value);
    transparent_crc(p_1087->g_440.s4, "p_1087->g_440.s4", print_hash_value);
    transparent_crc(p_1087->g_440.s5, "p_1087->g_440.s5", print_hash_value);
    transparent_crc(p_1087->g_440.s6, "p_1087->g_440.s6", print_hash_value);
    transparent_crc(p_1087->g_440.s7, "p_1087->g_440.s7", print_hash_value);
    transparent_crc(p_1087->g_464, "p_1087->g_464", print_hash_value);
    transparent_crc(p_1087->g_467.s0, "p_1087->g_467.s0", print_hash_value);
    transparent_crc(p_1087->g_467.s1, "p_1087->g_467.s1", print_hash_value);
    transparent_crc(p_1087->g_467.s2, "p_1087->g_467.s2", print_hash_value);
    transparent_crc(p_1087->g_467.s3, "p_1087->g_467.s3", print_hash_value);
    transparent_crc(p_1087->g_467.s4, "p_1087->g_467.s4", print_hash_value);
    transparent_crc(p_1087->g_467.s5, "p_1087->g_467.s5", print_hash_value);
    transparent_crc(p_1087->g_467.s6, "p_1087->g_467.s6", print_hash_value);
    transparent_crc(p_1087->g_467.s7, "p_1087->g_467.s7", print_hash_value);
    transparent_crc(p_1087->g_526.s0, "p_1087->g_526.s0", print_hash_value);
    transparent_crc(p_1087->g_526.s1, "p_1087->g_526.s1", print_hash_value);
    transparent_crc(p_1087->g_526.s2, "p_1087->g_526.s2", print_hash_value);
    transparent_crc(p_1087->g_526.s3, "p_1087->g_526.s3", print_hash_value);
    transparent_crc(p_1087->g_526.s4, "p_1087->g_526.s4", print_hash_value);
    transparent_crc(p_1087->g_526.s5, "p_1087->g_526.s5", print_hash_value);
    transparent_crc(p_1087->g_526.s6, "p_1087->g_526.s6", print_hash_value);
    transparent_crc(p_1087->g_526.s7, "p_1087->g_526.s7", print_hash_value);
    transparent_crc(p_1087->g_585, "p_1087->g_585", print_hash_value);
    transparent_crc(p_1087->g_590.s0, "p_1087->g_590.s0", print_hash_value);
    transparent_crc(p_1087->g_590.s1, "p_1087->g_590.s1", print_hash_value);
    transparent_crc(p_1087->g_590.s2, "p_1087->g_590.s2", print_hash_value);
    transparent_crc(p_1087->g_590.s3, "p_1087->g_590.s3", print_hash_value);
    transparent_crc(p_1087->g_590.s4, "p_1087->g_590.s4", print_hash_value);
    transparent_crc(p_1087->g_590.s5, "p_1087->g_590.s5", print_hash_value);
    transparent_crc(p_1087->g_590.s6, "p_1087->g_590.s6", print_hash_value);
    transparent_crc(p_1087->g_590.s7, "p_1087->g_590.s7", print_hash_value);
    transparent_crc(p_1087->g_590.s8, "p_1087->g_590.s8", print_hash_value);
    transparent_crc(p_1087->g_590.s9, "p_1087->g_590.s9", print_hash_value);
    transparent_crc(p_1087->g_590.sa, "p_1087->g_590.sa", print_hash_value);
    transparent_crc(p_1087->g_590.sb, "p_1087->g_590.sb", print_hash_value);
    transparent_crc(p_1087->g_590.sc, "p_1087->g_590.sc", print_hash_value);
    transparent_crc(p_1087->g_590.sd, "p_1087->g_590.sd", print_hash_value);
    transparent_crc(p_1087->g_590.se, "p_1087->g_590.se", print_hash_value);
    transparent_crc(p_1087->g_590.sf, "p_1087->g_590.sf", print_hash_value);
    transparent_crc(p_1087->g_592.s0, "p_1087->g_592.s0", print_hash_value);
    transparent_crc(p_1087->g_592.s1, "p_1087->g_592.s1", print_hash_value);
    transparent_crc(p_1087->g_592.s2, "p_1087->g_592.s2", print_hash_value);
    transparent_crc(p_1087->g_592.s3, "p_1087->g_592.s3", print_hash_value);
    transparent_crc(p_1087->g_592.s4, "p_1087->g_592.s4", print_hash_value);
    transparent_crc(p_1087->g_592.s5, "p_1087->g_592.s5", print_hash_value);
    transparent_crc(p_1087->g_592.s6, "p_1087->g_592.s6", print_hash_value);
    transparent_crc(p_1087->g_592.s7, "p_1087->g_592.s7", print_hash_value);
    transparent_crc(p_1087->g_592.s8, "p_1087->g_592.s8", print_hash_value);
    transparent_crc(p_1087->g_592.s9, "p_1087->g_592.s9", print_hash_value);
    transparent_crc(p_1087->g_592.sa, "p_1087->g_592.sa", print_hash_value);
    transparent_crc(p_1087->g_592.sb, "p_1087->g_592.sb", print_hash_value);
    transparent_crc(p_1087->g_592.sc, "p_1087->g_592.sc", print_hash_value);
    transparent_crc(p_1087->g_592.sd, "p_1087->g_592.sd", print_hash_value);
    transparent_crc(p_1087->g_592.se, "p_1087->g_592.se", print_hash_value);
    transparent_crc(p_1087->g_592.sf, "p_1087->g_592.sf", print_hash_value);
    transparent_crc(p_1087->g_593.s0, "p_1087->g_593.s0", print_hash_value);
    transparent_crc(p_1087->g_593.s1, "p_1087->g_593.s1", print_hash_value);
    transparent_crc(p_1087->g_593.s2, "p_1087->g_593.s2", print_hash_value);
    transparent_crc(p_1087->g_593.s3, "p_1087->g_593.s3", print_hash_value);
    transparent_crc(p_1087->g_593.s4, "p_1087->g_593.s4", print_hash_value);
    transparent_crc(p_1087->g_593.s5, "p_1087->g_593.s5", print_hash_value);
    transparent_crc(p_1087->g_593.s6, "p_1087->g_593.s6", print_hash_value);
    transparent_crc(p_1087->g_593.s7, "p_1087->g_593.s7", print_hash_value);
    transparent_crc(p_1087->g_613.x, "p_1087->g_613.x", print_hash_value);
    transparent_crc(p_1087->g_613.y, "p_1087->g_613.y", print_hash_value);
    transparent_crc(p_1087->g_613.z, "p_1087->g_613.z", print_hash_value);
    transparent_crc(p_1087->g_613.w, "p_1087->g_613.w", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1087->g_615[i][j][k], "p_1087->g_615[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1087->g_621, "p_1087->g_621", print_hash_value);
    transparent_crc(p_1087->g_644.s0, "p_1087->g_644.s0", print_hash_value);
    transparent_crc(p_1087->g_644.s1, "p_1087->g_644.s1", print_hash_value);
    transparent_crc(p_1087->g_644.s2, "p_1087->g_644.s2", print_hash_value);
    transparent_crc(p_1087->g_644.s3, "p_1087->g_644.s3", print_hash_value);
    transparent_crc(p_1087->g_644.s4, "p_1087->g_644.s4", print_hash_value);
    transparent_crc(p_1087->g_644.s5, "p_1087->g_644.s5", print_hash_value);
    transparent_crc(p_1087->g_644.s6, "p_1087->g_644.s6", print_hash_value);
    transparent_crc(p_1087->g_644.s7, "p_1087->g_644.s7", print_hash_value);
    transparent_crc(p_1087->g_827, "p_1087->g_827", print_hash_value);
    transparent_crc(p_1087->g_836, "p_1087->g_836", print_hash_value);
    transparent_crc(p_1087->g_841.x, "p_1087->g_841.x", print_hash_value);
    transparent_crc(p_1087->g_841.y, "p_1087->g_841.y", print_hash_value);
    transparent_crc(p_1087->g_841.z, "p_1087->g_841.z", print_hash_value);
    transparent_crc(p_1087->g_841.w, "p_1087->g_841.w", print_hash_value);
    transparent_crc(p_1087->g_870.s0, "p_1087->g_870.s0", print_hash_value);
    transparent_crc(p_1087->g_870.s1, "p_1087->g_870.s1", print_hash_value);
    transparent_crc(p_1087->g_870.s2, "p_1087->g_870.s2", print_hash_value);
    transparent_crc(p_1087->g_870.s3, "p_1087->g_870.s3", print_hash_value);
    transparent_crc(p_1087->g_870.s4, "p_1087->g_870.s4", print_hash_value);
    transparent_crc(p_1087->g_870.s5, "p_1087->g_870.s5", print_hash_value);
    transparent_crc(p_1087->g_870.s6, "p_1087->g_870.s6", print_hash_value);
    transparent_crc(p_1087->g_870.s7, "p_1087->g_870.s7", print_hash_value);
    transparent_crc(p_1087->g_870.s8, "p_1087->g_870.s8", print_hash_value);
    transparent_crc(p_1087->g_870.s9, "p_1087->g_870.s9", print_hash_value);
    transparent_crc(p_1087->g_870.sa, "p_1087->g_870.sa", print_hash_value);
    transparent_crc(p_1087->g_870.sb, "p_1087->g_870.sb", print_hash_value);
    transparent_crc(p_1087->g_870.sc, "p_1087->g_870.sc", print_hash_value);
    transparent_crc(p_1087->g_870.sd, "p_1087->g_870.sd", print_hash_value);
    transparent_crc(p_1087->g_870.se, "p_1087->g_870.se", print_hash_value);
    transparent_crc(p_1087->g_870.sf, "p_1087->g_870.sf", print_hash_value);
    transparent_crc(p_1087->g_873.x, "p_1087->g_873.x", print_hash_value);
    transparent_crc(p_1087->g_873.y, "p_1087->g_873.y", print_hash_value);
    transparent_crc(p_1087->g_888.s0, "p_1087->g_888.s0", print_hash_value);
    transparent_crc(p_1087->g_888.s1, "p_1087->g_888.s1", print_hash_value);
    transparent_crc(p_1087->g_888.s2, "p_1087->g_888.s2", print_hash_value);
    transparent_crc(p_1087->g_888.s3, "p_1087->g_888.s3", print_hash_value);
    transparent_crc(p_1087->g_888.s4, "p_1087->g_888.s4", print_hash_value);
    transparent_crc(p_1087->g_888.s5, "p_1087->g_888.s5", print_hash_value);
    transparent_crc(p_1087->g_888.s6, "p_1087->g_888.s6", print_hash_value);
    transparent_crc(p_1087->g_888.s7, "p_1087->g_888.s7", print_hash_value);
    transparent_crc(p_1087->g_912.s0, "p_1087->g_912.s0", print_hash_value);
    transparent_crc(p_1087->g_912.s1, "p_1087->g_912.s1", print_hash_value);
    transparent_crc(p_1087->g_912.s2, "p_1087->g_912.s2", print_hash_value);
    transparent_crc(p_1087->g_912.s3, "p_1087->g_912.s3", print_hash_value);
    transparent_crc(p_1087->g_912.s4, "p_1087->g_912.s4", print_hash_value);
    transparent_crc(p_1087->g_912.s5, "p_1087->g_912.s5", print_hash_value);
    transparent_crc(p_1087->g_912.s6, "p_1087->g_912.s6", print_hash_value);
    transparent_crc(p_1087->g_912.s7, "p_1087->g_912.s7", print_hash_value);
    transparent_crc(p_1087->g_913.s0, "p_1087->g_913.s0", print_hash_value);
    transparent_crc(p_1087->g_913.s1, "p_1087->g_913.s1", print_hash_value);
    transparent_crc(p_1087->g_913.s2, "p_1087->g_913.s2", print_hash_value);
    transparent_crc(p_1087->g_913.s3, "p_1087->g_913.s3", print_hash_value);
    transparent_crc(p_1087->g_913.s4, "p_1087->g_913.s4", print_hash_value);
    transparent_crc(p_1087->g_913.s5, "p_1087->g_913.s5", print_hash_value);
    transparent_crc(p_1087->g_913.s6, "p_1087->g_913.s6", print_hash_value);
    transparent_crc(p_1087->g_913.s7, "p_1087->g_913.s7", print_hash_value);
    transparent_crc(p_1087->g_938.s0, "p_1087->g_938.s0", print_hash_value);
    transparent_crc(p_1087->g_938.s1, "p_1087->g_938.s1", print_hash_value);
    transparent_crc(p_1087->g_938.s2, "p_1087->g_938.s2", print_hash_value);
    transparent_crc(p_1087->g_938.s3, "p_1087->g_938.s3", print_hash_value);
    transparent_crc(p_1087->g_938.s4, "p_1087->g_938.s4", print_hash_value);
    transparent_crc(p_1087->g_938.s5, "p_1087->g_938.s5", print_hash_value);
    transparent_crc(p_1087->g_938.s6, "p_1087->g_938.s6", print_hash_value);
    transparent_crc(p_1087->g_938.s7, "p_1087->g_938.s7", print_hash_value);
    transparent_crc(p_1087->g_938.s8, "p_1087->g_938.s8", print_hash_value);
    transparent_crc(p_1087->g_938.s9, "p_1087->g_938.s9", print_hash_value);
    transparent_crc(p_1087->g_938.sa, "p_1087->g_938.sa", print_hash_value);
    transparent_crc(p_1087->g_938.sb, "p_1087->g_938.sb", print_hash_value);
    transparent_crc(p_1087->g_938.sc, "p_1087->g_938.sc", print_hash_value);
    transparent_crc(p_1087->g_938.sd, "p_1087->g_938.sd", print_hash_value);
    transparent_crc(p_1087->g_938.se, "p_1087->g_938.se", print_hash_value);
    transparent_crc(p_1087->g_938.sf, "p_1087->g_938.sf", print_hash_value);
    transparent_crc(p_1087->g_939.x, "p_1087->g_939.x", print_hash_value);
    transparent_crc(p_1087->g_939.y, "p_1087->g_939.y", print_hash_value);
    transparent_crc(p_1087->g_939.z, "p_1087->g_939.z", print_hash_value);
    transparent_crc(p_1087->g_939.w, "p_1087->g_939.w", print_hash_value);
    transparent_crc(p_1087->g_941.x, "p_1087->g_941.x", print_hash_value);
    transparent_crc(p_1087->g_941.y, "p_1087->g_941.y", print_hash_value);
    transparent_crc(p_1087->g_941.z, "p_1087->g_941.z", print_hash_value);
    transparent_crc(p_1087->g_941.w, "p_1087->g_941.w", print_hash_value);
    transparent_crc(p_1087->g_976.s0, "p_1087->g_976.s0", print_hash_value);
    transparent_crc(p_1087->g_976.s1, "p_1087->g_976.s1", print_hash_value);
    transparent_crc(p_1087->g_976.s2, "p_1087->g_976.s2", print_hash_value);
    transparent_crc(p_1087->g_976.s3, "p_1087->g_976.s3", print_hash_value);
    transparent_crc(p_1087->g_976.s4, "p_1087->g_976.s4", print_hash_value);
    transparent_crc(p_1087->g_976.s5, "p_1087->g_976.s5", print_hash_value);
    transparent_crc(p_1087->g_976.s6, "p_1087->g_976.s6", print_hash_value);
    transparent_crc(p_1087->g_976.s7, "p_1087->g_976.s7", print_hash_value);
    transparent_crc(p_1087->g_976.s8, "p_1087->g_976.s8", print_hash_value);
    transparent_crc(p_1087->g_976.s9, "p_1087->g_976.s9", print_hash_value);
    transparent_crc(p_1087->g_976.sa, "p_1087->g_976.sa", print_hash_value);
    transparent_crc(p_1087->g_976.sb, "p_1087->g_976.sb", print_hash_value);
    transparent_crc(p_1087->g_976.sc, "p_1087->g_976.sc", print_hash_value);
    transparent_crc(p_1087->g_976.sd, "p_1087->g_976.sd", print_hash_value);
    transparent_crc(p_1087->g_976.se, "p_1087->g_976.se", print_hash_value);
    transparent_crc(p_1087->g_976.sf, "p_1087->g_976.sf", print_hash_value);
    transparent_crc(p_1087->g_987.x, "p_1087->g_987.x", print_hash_value);
    transparent_crc(p_1087->g_987.y, "p_1087->g_987.y", print_hash_value);
    transparent_crc(p_1087->g_1037.x, "p_1087->g_1037.x", print_hash_value);
    transparent_crc(p_1087->g_1037.y, "p_1087->g_1037.y", print_hash_value);
    transparent_crc(p_1087->g_1040.x, "p_1087->g_1040.x", print_hash_value);
    transparent_crc(p_1087->g_1040.y, "p_1087->g_1040.y", print_hash_value);
    transparent_crc(p_1087->g_1040.z, "p_1087->g_1040.z", print_hash_value);
    transparent_crc(p_1087->g_1040.w, "p_1087->g_1040.w", print_hash_value);
    transparent_crc(p_1087->g_1064.s0, "p_1087->g_1064.s0", print_hash_value);
    transparent_crc(p_1087->g_1064.s1, "p_1087->g_1064.s1", print_hash_value);
    transparent_crc(p_1087->g_1064.s2, "p_1087->g_1064.s2", print_hash_value);
    transparent_crc(p_1087->g_1064.s3, "p_1087->g_1064.s3", print_hash_value);
    transparent_crc(p_1087->g_1064.s4, "p_1087->g_1064.s4", print_hash_value);
    transparent_crc(p_1087->g_1064.s5, "p_1087->g_1064.s5", print_hash_value);
    transparent_crc(p_1087->g_1064.s6, "p_1087->g_1064.s6", print_hash_value);
    transparent_crc(p_1087->g_1064.s7, "p_1087->g_1064.s7", print_hash_value);
    transparent_crc(p_1087->g_1064.s8, "p_1087->g_1064.s8", print_hash_value);
    transparent_crc(p_1087->g_1064.s9, "p_1087->g_1064.s9", print_hash_value);
    transparent_crc(p_1087->g_1064.sa, "p_1087->g_1064.sa", print_hash_value);
    transparent_crc(p_1087->g_1064.sb, "p_1087->g_1064.sb", print_hash_value);
    transparent_crc(p_1087->g_1064.sc, "p_1087->g_1064.sc", print_hash_value);
    transparent_crc(p_1087->g_1064.sd, "p_1087->g_1064.sd", print_hash_value);
    transparent_crc(p_1087->g_1064.se, "p_1087->g_1064.se", print_hash_value);
    transparent_crc(p_1087->g_1064.sf, "p_1087->g_1064.sf", print_hash_value);
    transparent_crc(p_1087->g_1069.s0, "p_1087->g_1069.s0", print_hash_value);
    transparent_crc(p_1087->g_1069.s1, "p_1087->g_1069.s1", print_hash_value);
    transparent_crc(p_1087->g_1069.s2, "p_1087->g_1069.s2", print_hash_value);
    transparent_crc(p_1087->g_1069.s3, "p_1087->g_1069.s3", print_hash_value);
    transparent_crc(p_1087->g_1069.s4, "p_1087->g_1069.s4", print_hash_value);
    transparent_crc(p_1087->g_1069.s5, "p_1087->g_1069.s5", print_hash_value);
    transparent_crc(p_1087->g_1069.s6, "p_1087->g_1069.s6", print_hash_value);
    transparent_crc(p_1087->g_1069.s7, "p_1087->g_1069.s7", print_hash_value);
    transparent_crc(p_1087->v_collective, "p_1087->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 80; i++)
            transparent_crc(p_1087->g_special_values[i + 80 * get_linear_group_id()], "p_1087->g_special_values[i + 80 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 80; i++)
            transparent_crc(p_1087->l_special_values[i], "p_1087->l_special_values[i]", print_hash_value);
    transparent_crc(p_1087->l_comm_values[get_linear_local_id()], "p_1087->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1087->g_comm_values[get_linear_group_id() * 48 + get_linear_local_id()], "p_1087->g_comm_values[get_linear_group_id() * 48 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
