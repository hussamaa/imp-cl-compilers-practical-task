// --atomics 49 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 100,18,5 -l 5,18,1
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

__constant uint32_t permutations[10][90] = {
{18,30,44,4,11,31,79,56,20,3,83,2,65,40,17,53,34,49,46,37,70,61,24,84,63,64,10,12,35,1,39,21,29,77,54,86,69,60,6,78,88,52,89,42,5,80,68,47,55,32,57,58,7,9,48,73,62,8,33,36,27,41,82,87,43,50,51,74,23,22,16,25,0,19,14,59,28,76,72,71,81,67,75,45,66,15,38,85,26,13}, // permutation 0
{78,7,55,87,50,54,12,67,1,46,80,43,30,41,61,72,59,37,66,58,11,15,36,23,68,56,64,17,88,2,24,19,42,81,89,57,3,22,38,51,6,39,48,74,14,34,13,18,49,10,63,44,82,31,73,5,85,29,76,16,60,4,69,62,35,79,40,70,32,71,0,47,25,33,77,52,8,26,84,45,21,53,20,27,65,28,83,75,9,86}, // permutation 1
{8,50,36,33,6,2,76,29,88,7,83,65,38,37,46,16,42,67,66,56,79,30,18,74,85,68,14,34,11,81,31,35,52,60,44,84,51,72,57,12,87,82,0,78,53,24,40,70,17,47,4,32,5,22,27,63,86,58,45,55,77,41,43,13,71,54,10,25,3,89,19,15,26,49,80,20,75,23,69,64,59,21,48,73,62,9,28,1,39,61}, // permutation 2
{69,83,43,3,70,63,51,49,25,33,30,46,10,18,32,11,61,34,6,85,17,76,48,44,2,38,81,66,7,8,82,26,71,28,54,37,64,12,20,55,42,57,0,58,4,35,89,31,27,13,21,23,86,68,5,41,56,19,1,60,84,47,88,16,45,24,50,53,87,59,67,80,29,22,72,73,78,40,39,14,65,9,15,77,36,79,74,75,62,52}, // permutation 3
{20,9,66,58,37,85,25,56,64,47,79,65,74,44,55,39,59,67,62,32,26,61,17,53,13,23,12,60,10,34,7,6,21,69,86,8,82,0,54,16,38,68,87,78,50,75,31,36,41,52,83,4,3,76,89,51,33,71,19,24,1,77,84,88,30,5,46,63,11,81,49,43,14,28,57,40,15,45,22,80,72,18,73,35,27,70,42,48,2,29}, // permutation 4
{58,55,36,10,12,22,61,18,79,43,1,65,76,26,42,9,13,73,88,83,6,37,25,45,27,49,89,5,78,80,7,35,16,21,52,30,60,57,68,46,56,75,87,77,23,0,34,71,50,33,15,8,53,63,11,72,29,69,31,24,41,20,59,64,84,82,44,51,14,3,70,74,86,40,81,85,39,28,4,38,67,47,32,2,62,48,54,66,19,17}, // permutation 5
{84,30,29,6,5,65,50,38,28,42,18,71,48,2,53,11,46,54,73,56,12,68,3,87,85,8,63,88,89,17,33,15,32,43,62,52,24,79,31,36,57,61,22,25,40,41,26,10,1,27,69,55,4,82,23,9,60,64,19,58,44,16,67,37,49,59,35,20,51,72,45,77,81,86,80,39,66,83,70,0,75,74,76,78,34,47,14,13,7,21}, // permutation 6
{82,56,78,1,59,64,42,25,45,74,47,36,11,20,83,37,69,44,40,63,51,77,85,0,72,31,33,23,46,60,8,89,3,79,88,75,2,34,39,19,71,10,49,5,81,12,15,80,61,86,9,27,30,65,41,57,16,58,73,70,6,54,32,68,38,13,84,87,26,53,17,55,21,50,62,28,48,4,67,29,18,35,14,7,22,66,52,43,24,76}, // permutation 7
{29,24,36,11,46,20,39,86,63,82,6,33,48,69,49,31,4,30,26,83,2,44,5,12,79,14,3,75,64,21,41,52,38,55,87,56,81,71,50,78,22,58,72,19,47,9,37,45,59,28,0,65,73,68,15,17,88,27,18,77,51,13,85,10,1,23,35,89,61,25,43,60,8,74,70,84,54,32,80,76,7,42,57,66,53,16,62,34,67,40}, // permutation 8
{89,11,72,18,41,40,37,57,10,1,25,19,12,51,45,60,66,13,31,61,39,83,79,70,77,50,84,54,24,62,29,43,22,49,48,56,69,4,14,53,5,30,8,64,82,52,6,20,2,63,73,0,46,65,35,47,74,36,33,80,32,76,71,58,75,15,23,28,16,68,44,86,81,55,3,59,17,78,27,7,88,42,34,85,38,9,87,67,26,21} // permutation 9
};

// Seed: 4195233258

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   int64_t  f1;
   volatile uint32_t  f2;
   int16_t  f3;
   uint32_t  f4;
   volatile int32_t  f5;
   volatile uint32_t  f6;
   volatile uint16_t  f7;
   volatile int64_t  f8;
   uint32_t  f9;
};

struct S1 {
   int16_t  f0;
   int32_t  f1;
   int32_t  f2;
   uint64_t  f3;
   uint64_t  f4;
   volatile int8_t  f5;
   volatile int64_t  f6;
   uint32_t  f7;
   int64_t  f8;
   volatile uint32_t  f9;
};

union U2 {
   int8_t * volatile  f0;
   int32_t  f1;
   int32_t  f2;
   uint64_t  f3;
};

struct S3 {
    int32_t g_2[8];
    volatile int32_t g_5;
    int32_t g_6;
    volatile int32_t g_33;
    volatile int32_t g_34;
    volatile int32_t g_35;
    volatile int32_t g_36;
    int32_t g_37[5];
    VECTOR(int32_t, 8) g_41;
    int32_t * volatile g_40;
    int32_t * volatile g_42[3][9];
    int32_t * volatile g_43;
    int32_t * volatile g_49[4][4];
    volatile struct S1 g_80;
    volatile VECTOR(int8_t, 2) g_82;
    int8_t g_87;
    int8_t *g_86;
    int8_t *g_89;
    VECTOR(uint16_t, 4) g_106;
    uint64_t g_108;
    int64_t g_118;
    int32_t g_119[4];
    uint64_t g_121;
    struct S1 g_122;
    VECTOR(int64_t, 16) g_145;
    int32_t * volatile g_147;
    VECTOR(uint16_t, 2) g_158;
    VECTOR(uint16_t, 4) g_159;
    VECTOR(uint8_t, 2) g_160;
    VECTOR(int8_t, 8) g_161;
    VECTOR(uint8_t, 2) g_163;
    VECTOR(uint8_t, 8) g_165;
    uint32_t g_167;
    VECTOR(int16_t, 16) g_192;
    VECTOR(uint64_t, 8) g_206;
    volatile VECTOR(int32_t, 2) g_325;
    int32_t *g_336;
    int32_t **g_335;
    int32_t **g_338[8];
    VECTOR(int16_t, 8) g_339;
    struct S1 *g_356;
    struct S1 * volatile * volatile g_355[7][3][2];
    struct S0 g_357;
    struct S0 * volatile g_358;
    struct S0 * volatile g_359;
    volatile VECTOR(uint32_t, 8) g_429;
    VECTOR(int32_t, 16) g_437;
    volatile VECTOR(int16_t, 8) g_440;
    volatile VECTOR(int16_t, 2) g_441;
    VECTOR(int16_t, 8) g_444;
    uint32_t g_474;
    struct S0 * volatile g_481;
    union U2 g_489[1][2];
    volatile struct S0 g_524[8];
    volatile VECTOR(int32_t, 4) g_550;
    VECTOR(int32_t, 4) g_563;
    volatile VECTOR(int32_t, 2) g_564;
    volatile struct S1 *g_580;
    volatile struct S1 **g_579;
    uint16_t * volatile g_601[5][1];
    VECTOR(uint32_t, 8) g_605;
    volatile uint64_t *g_627;
    volatile uint64_t **g_626;
    uint32_t *g_645;
    volatile VECTOR(int32_t, 16) g_648;
    volatile VECTOR(int32_t, 2) g_649;
    volatile uint64_t g_684[3][7][4];
    volatile VECTOR(int16_t, 2) g_693;
    VECTOR(int16_t, 4) g_694;
    VECTOR(uint64_t, 8) g_704;
    int32_t g_715;
    int64_t g_721;
    union U2 g_724;
    uint64_t *g_732;
    uint64_t **g_731;
    volatile VECTOR(uint8_t, 4) g_734;
    VECTOR(int8_t, 4) g_748;
    volatile union U2 *g_773;
    volatile union U2 * volatile * volatile g_772;
    volatile uint32_t g_781;
    VECTOR(uint8_t, 8) g_782;
    VECTOR(uint32_t, 4) g_797;
    int32_t * volatile g_802;
    int32_t * volatile g_803;
    int32_t * volatile g_804[7];
    volatile struct S1 g_808[10][2];
    VECTOR(int64_t, 8) g_820;
    VECTOR(int32_t, 2) g_825;
    volatile VECTOR(int32_t, 8) g_826;
    volatile uint32_t g_841[8][9];
    uint16_t g_842;
    volatile int8_t *g_845;
    volatile int8_t * volatile * volatile g_844[8];
    volatile int8_t * volatile * volatile *g_843;
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
uint16_t  func_1(struct S3 * p_849);
int32_t * func_9(uint32_t  p_10, int8_t  p_11, uint32_t  p_12, int32_t * p_13, int8_t * p_14, struct S3 * p_849);
uint32_t  func_15(int32_t  p_16, uint8_t  p_17, int32_t  p_18, int8_t * p_19, uint8_t  p_20, struct S3 * p_849);
uint8_t  func_21(uint64_t  p_22, uint32_t  p_23, uint64_t  p_24, struct S3 * p_849);
uint64_t  func_29(uint32_t  p_30, struct S3 * p_849);
struct S0  func_53(int8_t * p_54, int8_t * p_55, uint32_t  p_56, struct S3 * p_849);
int8_t * func_57(int8_t * p_58, int64_t  p_59, int8_t  p_60, struct S3 * p_849);
int8_t * func_61(int32_t * p_62, int32_t * p_63, struct S3 * p_849);
int32_t * func_64(int64_t  p_65, int32_t  p_66, int32_t  p_67, int16_t  p_68, struct S3 * p_849);
uint8_t  func_75(uint64_t  p_76, int16_t  p_77, uint32_t  p_78, int32_t  p_79, struct S3 * p_849);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_849->g_2 p_849->g_6 p_849->g_comm_values p_849->g_80 p_849->g_118 p_849->g_122 p_849->l_comm_values p_849->g_158 p_849->g_106 p_849->g_86 p_849->g_165 p_849->g_357 p_849->g_359 p_849->g_339 p_849->g_206 p_849->g_437 p_849->g_481 p_849->g_489 p_849->g_89 p_849->g_87 p_849->g_335 p_849->g_37 p_849->g_524 p_849->g_167 p_849->g_33 p_849->g_161 p_849->g_474 p_849->g_336 p_849->g_626 p_849->g_36 p_849->g_163 p_849->g_82 p_849->g_192 p_849->g_159 p_849->g_684 p_849->g_724 p_849->g_160 p_849->g_731 p_849->g_772 p_849->g_808 p_849->g_356 p_849->g_820 p_849->g_627 p_849->g_825 p_849->g_826 p_849->g_732 p_849->g_841 p_849->g_842 p_849->g_843 p_849->g_440 p_849->g_715 p_849->g_694
 * writes: p_849->g_2 p_849->g_6 p_849->g_37 p_849->g_108 p_849->g_118 p_849->g_119 p_849->g_121 p_849->g_122 p_849->g_87 p_849->g_158 p_849->g_106 p_849->g_355 p_849->g_357 p_849->g_474 p_849->g_336 p_849->g_167 p_849->g_163 p_849->g_192 p_849->g_645 p_849->g_684 p_849->g_715 p_849->g_731 p_849->g_772 p_849->g_335
 */
uint16_t  func_1(struct S3 * p_849)
{ /* block id: 4 */
    VECTOR(int16_t, 4) l_27 = (VECTOR(int16_t, 4))(0x488AL, (VECTOR(int16_t, 2))(0x488AL, 1L), 1L);
    int8_t *l_503 = (void*)0;
    VECTOR(uint16_t, 4) l_567 = (VECTOR(uint16_t, 4))(0x2096L, (VECTOR(uint16_t, 2))(0x2096L, 0xDFD2L), 0xDFD2L);
    uint32_t l_568 = 3UL;
    struct S1 **l_578[2];
    int16_t l_581 = 0x57FDL;
    int32_t l_586 = 0x6BDA4829L;
    int32_t l_591 = 0x546CC1F4L;
    int32_t l_592[8];
    int32_t l_593[5];
    uint32_t l_594 = 0xFBA76E2FL;
    int8_t l_635 = (-1L);
    struct S0 *l_735[2];
    VECTOR(uint8_t, 2) l_739 = (VECTOR(uint8_t, 2))(252UL, 0x96L);
    uint32_t l_760 = 0x1F45D24AL;
    VECTOR(uint8_t, 4) l_769 = (VECTOR(uint8_t, 4))(0xD5L, (VECTOR(uint8_t, 2))(0xD5L, 0xBCL), 0xBCL);
    uint32_t l_800 = 0x3BFEF334L;
    int32_t *l_809 = &l_592[5];
    int32_t *l_810 = &l_591;
    int32_t *l_811 = &p_849->g_2[5];
    int32_t *l_812[4][5] = {{&p_849->g_119[2],&p_849->g_119[2],&p_849->g_119[2],&p_849->g_119[2],&p_849->g_119[2]},{&p_849->g_119[2],&p_849->g_119[2],&p_849->g_119[2],&p_849->g_119[2],&p_849->g_119[2]},{&p_849->g_119[2],&p_849->g_119[2],&p_849->g_119[2],&p_849->g_119[2],&p_849->g_119[2]},{&p_849->g_119[2],&p_849->g_119[2],&p_849->g_119[2],&p_849->g_119[2],&p_849->g_119[2]}};
    int8_t l_813 = 0x5BL;
    int8_t l_814 = 1L;
    uint32_t l_815 = 4294967295UL;
    int32_t **l_829 = &p_849->g_336;
    int32_t ***l_830 = &p_849->g_335;
    int8_t **l_832 = (void*)0;
    int8_t ***l_831[10] = {(void*)0,&l_832,(void*)0,(void*)0,&l_832,(void*)0,(void*)0,&l_832,(void*)0,(void*)0};
    VECTOR(int16_t, 8) l_833 = (VECTOR(int16_t, 8))(0x629BL, (VECTOR(int16_t, 4))(0x629BL, (VECTOR(int16_t, 2))(0x629BL, 0x7AE4L), 0x7AE4L), 0x7AE4L, 0x629BL, 0x7AE4L);
    VECTOR(int64_t, 2) l_834 = (VECTOR(int64_t, 2))((-5L), 0x68600FAB659EC2B6L);
    uint32_t l_839 = 0xC22AACD2L;
    uint8_t l_840 = 0xFFL;
    uint32_t l_846 = 0UL;
    int64_t l_847 = 0x2F9B583477719D11L;
    int8_t l_848 = 0x53L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_578[i] = &p_849->g_356;
    for (i = 0; i < 8; i++)
        l_592[i] = 1L;
    for (i = 0; i < 5; i++)
        l_593[i] = 1L;
    for (i = 0; i < 2; i++)
        l_735[i] = &p_849->g_357;
    for (p_849->g_2[5] = 0; (p_849->g_2[5] >= (-10)); p_849->g_2[5] = safe_sub_func_uint16_t_u_u(p_849->g_2[5], 1))
    { /* block id: 7 */
        uint64_t l_472 = 0x8D1F61FA6C665128L;
        int8_t *l_475[2][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int16_t l_501 = 0x60D4L;
        int32_t *l_502 = (void*)0;
        struct S1 **l_577 = &p_849->g_356;
        int32_t l_588 = 0x4FDA0A54L;
        int32_t l_590[5][7] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
        int8_t l_602[1];
        VECTOR(int8_t, 16) l_610 = (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 3L), 3L), 3L, (-3L), 3L, (VECTOR(int8_t, 2))((-3L), 3L), (VECTOR(int8_t, 2))((-3L), 3L), (-3L), 3L, (-3L), 3L);
        int32_t l_615 = 0L;
        VECTOR(uint8_t, 8) l_663 = (VECTOR(uint8_t, 8))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0xC6L), 0xC6L), 0xC6L, 2UL, 0xC6L);
        uint8_t l_698 = 0xDEL;
        int16_t l_723 = 9L;
        uint64_t ***l_733 = &p_849->g_731;
        uint8_t *l_736 = &l_698;
        uint16_t *l_751 = (void*)0;
        uint16_t *l_752 = (void*)0;
        uint16_t *l_753 = (void*)0;
        uint16_t *l_754 = (void*)0;
        uint16_t *l_755 = (void*)0;
        uint16_t *l_756 = (void*)0;
        uint16_t *l_757 = (void*)0;
        uint16_t *l_758[4][7][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        int64_t l_759 = 0x10F1DCB473D373A3L;
        VECTOR(uint8_t, 8) l_770 = (VECTOR(uint8_t, 8))(0x6FL, (VECTOR(uint8_t, 4))(0x6FL, (VECTOR(uint8_t, 2))(0x6FL, 0x6AL), 0x6AL), 0x6AL, 0x6FL, 0x6AL);
        int8_t **l_771[1];
        int32_t l_801[2][3];
        uint64_t l_806 = 0xD196F8B0B1DA153FL;
        int32_t l_807 = 0x7CBD5367L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_602[i] = (-1L);
        for (i = 0; i < 1; i++)
            l_771[i] = &p_849->g_86;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_801[i][j] = 0x63D4DA32L;
        }
        for (p_849->g_6 = 0; (p_849->g_6 <= (-18)); p_849->g_6 = safe_sub_func_uint16_t_u_u(p_849->g_6, 7))
        { /* block id: 10 */
            int64_t l_28 = 0x06255D580090AE73L;
            uint64_t *l_456 = &p_849->g_121;
            uint32_t *l_473 = &p_849->g_474;
            (*p_849->g_335) = func_9((func_15((func_21(p_849->g_6, (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_27.yx)).lo, l_28)), ((*l_456) = func_29(l_28, p_849)), p_849) <= l_472), (((*l_473) = (~(l_28 != p_849->g_437.se))) , p_849->g_437.s1), l_27.y, l_475[1][7], p_849->g_339.s6, p_849) , l_501), l_27.x, l_27.w, l_502, l_503, p_849);
        }
        if ((safe_rshift_func_int8_t_s_s((((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(p_849->g_563.yxyz)).lo, ((VECTOR(int32_t, 8))(p_849->g_564.yyyyxyyx)).s71, ((VECTOR(int32_t, 2))((-1L), 8L))))).lo , (1L < (safe_div_func_int16_t_s_s(p_849->g_33, ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_567.zxwxyxwy)).s3, ((((l_568 , ((((*p_849->g_89) = 0x51L) , ((safe_mul_func_int8_t_s_s((FAKE_DIVERGE(p_849->group_2_offset, get_group_id(2), 10) , (safe_rshift_func_uint8_t_u_s(((++p_849->g_206.s3) & p_849->g_106.x), (65533UL & p_849->g_159.z)))), 0xB6L)) && (((((safe_lshift_func_uint16_t_u_s(FAKE_DIVERGE(p_849->global_0_offset, get_global_id(0), 10), ((l_578[0] = l_577) != p_849->g_579))) && p_849->g_37[3]) || p_849->g_437.sf) == p_849->l_comm_values[(safe_mod_func_uint32_t_u_u(p_849->tid, 90))]) , l_501))) , p_849->g_159.w)) , l_581) && l_501) == p_849->g_163.x), 65535UL, 8UL)), ((VECTOR(uint16_t, 4))(0x52BEL))))).y)))), 0)))
        { /* block id: 263 */
            int32_t l_584 = 0x6042566AL;
            int32_t l_587 = 0x32CA0394L;
            int32_t l_589 = 0x68DC244CL;
            for (p_849->g_474 = 0; (p_849->g_474 <= 31); p_849->g_474 = safe_add_func_int32_t_s_s(p_849->g_474, 9))
            { /* block id: 266 */
                int32_t *l_585[9][3][2] = {{{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6}},{{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6}},{{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6}},{{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6}},{{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6}},{{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6}},{{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6}},{{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6}},{{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6},{(void*)0,&p_849->g_6}}};
                int i, j, k;
                if (l_584)
                    break;
                l_594--;
            }
            l_587 &= (((safe_mul_func_int16_t_s_s(p_849->g_161.s3, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x5CFDL, 0L)), 0L, (safe_mul_func_uint32_t_u_u((((void*)0 != p_849->g_601[0][0]) == l_602[0]), (p_849->g_122.f8 != (safe_div_func_int64_t_s_s((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(p_849->g_605.s42106222)))).s5 ^ (((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 2))(0x1CL, 0x65L)).yxxxxyyxxxyxyxyy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_610.sfb72a011)).s12)).xyyxxyyyyyyyxxyx))), (uint8_t)(safe_add_func_uint32_t_u_u((~(FAKE_DIVERGE(p_849->group_1_offset, get_group_id(1), 10) > p_849->g_159.z)), (0x4EL || (((safe_div_func_uint8_t_u_u(FAKE_DIVERGE(p_849->group_1_offset, get_group_id(1), 10), ((*p_849->g_86) = l_27.x))) <= (255UL || p_849->g_357.f0)) >= p_849->g_161.s0))))))).s3, l_592[0])), 1UL)) , l_567.z) < p_849->g_563.y)), l_584))))), 0x4217L, ((VECTOR(int16_t, 8))(0L)), ((VECTOR(int16_t, 2))((-10L))), 7L)).s2d8b)).zwxwzwxz, ((VECTOR(int16_t, 8))(0x2436L))))).s4766675000435707)).sc)) <= p_849->g_122.f3) <= p_849->g_474);
            if (l_615)
                break;
            (*p_849->g_335) = (*p_849->g_335);
        }
        else
        { /* block id: 274 */
            int64_t *l_634[2];
            uint8_t *l_640 = (void*)0;
            int32_t l_641 = 0x27D5DD39L;
            int16_t *l_642 = (void*)0;
            int16_t *l_643 = (void*)0;
            int16_t *l_644[3];
            int32_t l_659 = 0x34D38B34L;
            int i;
            for (i = 0; i < 2; i++)
                l_634[i] = &p_849->g_118;
            for (i = 0; i < 3; i++)
                l_644[i] = (void*)0;
            if (((p_849->g_645 = func_64(((safe_div_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(l_27.y, (safe_lshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u(0x995509EF8FBCE8FAL, 4L)), (p_849->g_626 != &p_849->g_627))))) == ((p_849->g_192.s4 ^= (safe_mod_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u(((&p_849->g_108 == ((safe_lshift_func_int8_t_s_s(((l_635 = 0x2EA1B72738712A7EL) , (p_849->g_36 , (safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((p_849->g_163.x |= (!(p_849->g_89 != l_475[1][7]))), 1UL)) > GROUP_DIVERGE(0, 1)) && 0x1A49199892ED2080L), p_849->g_474)))), l_567.w)) , l_634[1])) , p_849->g_524[7].f8), 7)) , p_849->g_82.y), l_641))) || 0x594DL)), p_849->g_159.z)) >= 0UL), l_590[0][0], p_849->g_122.f0, p_849->g_122.f3, p_849)) != l_502))
            { /* block id: 279 */
                uint64_t l_660 = 0x0106BE3BB0839BC9L;
                int32_t *l_697 = &l_593[0];
                if (((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(0x41CB9C3FL, (safe_mul_func_uint16_t_u_u(0UL, p_849->g_441.y)), ((VECTOR(int32_t, 4))(0x6D59C6ECL, 0x7194B44DL, (-9L), 1L)), 0x326CF52CL, 8L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_849->g_648.s3199)).hi)).yyyxyyyx, ((VECTOR(int32_t, 4))(p_849->g_649.xxyx)).wyxzwxxz))).s1)
                { /* block id: 280 */
                    int32_t *l_650 = &p_849->g_119[0];
                    int32_t *l_651 = (void*)0;
                    int32_t *l_652 = &l_590[4][2];
                    int32_t *l_653 = &p_849->g_37[2];
                    int32_t *l_654 = &l_592[4];
                    int32_t *l_655 = &l_592[0];
                    int32_t *l_656 = (void*)0;
                    int32_t *l_657 = &p_849->g_119[1];
                    int32_t *l_658[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_658[i] = &l_590[4][2];
                    l_660++;
                    ++l_663.s4;
                }
                else
                { /* block id: 283 */
                    int32_t *l_666 = &l_593[3];
                    int32_t *l_667 = &p_849->g_119[0];
                    int32_t *l_668 = &p_849->g_37[4];
                    int32_t *l_669 = (void*)0;
                    int32_t *l_670 = &p_849->g_122.f1;
                    int32_t *l_671 = &l_591;
                    int32_t *l_672 = &l_590[4][2];
                    int32_t *l_673 = &l_592[0];
                    int32_t *l_674 = &l_591;
                    int32_t *l_675 = &p_849->g_37[3];
                    int32_t *l_676 = &l_591;
                    int32_t *l_677 = &p_849->g_37[3];
                    int32_t *l_678 = (void*)0;
                    int32_t *l_679 = &l_593[2];
                    int32_t l_680 = 0x03B80854L;
                    int32_t *l_681 = (void*)0;
                    int32_t *l_682 = &p_849->g_119[3];
                    int32_t *l_683[4][3][5] = {{{&l_593[2],&l_593[2],&p_849->g_119[0],&l_591,&l_591},{&l_593[2],&l_593[2],&p_849->g_119[0],&l_591,&l_591},{&l_593[2],&l_593[2],&p_849->g_119[0],&l_591,&l_591}},{{&l_593[2],&l_593[2],&p_849->g_119[0],&l_591,&l_591},{&l_593[2],&l_593[2],&p_849->g_119[0],&l_591,&l_591},{&l_593[2],&l_593[2],&p_849->g_119[0],&l_591,&l_591}},{{&l_593[2],&l_593[2],&p_849->g_119[0],&l_591,&l_591},{&l_593[2],&l_593[2],&p_849->g_119[0],&l_591,&l_591},{&l_593[2],&l_593[2],&p_849->g_119[0],&l_591,&l_591}},{{&l_593[2],&l_593[2],&p_849->g_119[0],&l_591,&l_591},{&l_593[2],&l_593[2],&p_849->g_119[0],&l_591,&l_591},{&l_593[2],&l_593[2],&p_849->g_119[0],&l_591,&l_591}}};
                    int i, j, k;
                    --p_849->g_684[0][4][1];
                }
                (*l_697) ^= (safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(l_591, l_660)), l_641)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(p_849->g_693.xyxxxxxx)).s41, ((VECTOR(int16_t, 2))(p_849->g_694.yw))))).even, (l_641 | (((1L > ((*p_849->g_86) = (((0x88L & (l_660 ^ l_660)) > ((safe_mod_func_int64_t_s_s(((~l_659) > 4294967290UL), (*p_849->g_627))) & 1UL)) >= (*p_849->g_89)))) == l_659) >= p_849->g_694.z)), ((VECTOR(int16_t, 2))(0x3A19L)), 0x48E2L, (-4L), 0x19E2L, (-6L))).s2));
                if (l_641)
                    break;
                atomic_min(&p_849->g_atomic_reduction[get_linear_group_id()], l_698);
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_849->v_collective += p_849->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            else
            { /* block id: 290 */
                uint32_t l_722 = 4294967290UL;
                for (l_659 = 0; (l_659 >= (-16)); --l_659)
                { /* block id: 293 */
                    VECTOR(uint64_t, 2) l_703 = (VECTOR(uint64_t, 2))(0UL, 0UL);
                    int64_t l_720 = 0x68155A1CAB8A0D22L;
                    int32_t *l_725 = &l_588;
                    int i;
                    (*l_725) ^= (safe_sub_func_uint16_t_u_u((((((((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 8))(l_703.xyxxyxyy)).s1361623136136554, ((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(1UL, 0x33E293A76CA61D43L)).yxxy)).xyzzxwyxzyyxwzxy, ((VECTOR(uint64_t, 4))(p_849->g_704.s3311)).wzyywzzwwywxwyyw, ((VECTOR(uint64_t, 4))(abs(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(1L, 0x30EE906A82FA61EAL, (-5L), 0L)).lo, ((VECTOR(int64_t, 2))(0x6E5D01B00AE3148FL, (-1L)))))).yxxyxxyxxyyxyxxy)))))).lo)).even))).yyxzyzyxxxwwzzxx))).sa5da)), 18446744073709551615UL, (safe_mod_func_int16_t_s_s(l_641, (safe_div_func_int32_t_s_s((-10L), ((*p_849->g_645) &= ((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xCDL, 0x3FL)), ((((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(0x27L, ((safe_div_func_int16_t_s_s((((safe_add_func_int64_t_s_s((p_849->g_715 < ((p_849->g_122.f4 >= ((void*)0 == &p_849->g_89)) != (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((l_27.x ^ ((0UL >= l_703.y) >= l_720)), p_849->g_684[0][4][1])), (*p_849->g_89))))), 1L)) , (void*)0) == &p_849->g_336), p_849->g_2[5])) > p_849->g_721), p_849->g_122.f2, p_849->g_122.f4, 255UL, 254UL, ((VECTOR(uint8_t, 4))(0x30L)), ((VECTOR(uint8_t, 4))(0x08L)), 0x8BL, 0x7AL)).hi)).s35, ((VECTOR(uint8_t, 2))(0UL))))).hi, 0x15L, ((VECTOR(uint8_t, 4))(250UL)), 0UL, 249UL)), l_722, l_703.y, 0xAFL, l_591, 7UL, ((VECTOR(uint8_t, 2))(0x6AL)), 247UL)).lo, ((VECTOR(uint8_t, 8))(252UL)), ((VECTOR(uint8_t, 8))(5UL))))).s7 , 0x0DD44122L) , p_849->g_122.f4), 0x70L, 9UL, ((VECTOR(uint8_t, 4))(1UL)), 0x4AL, 0x55L, p_849->g_159.x, 2UL, 247UL, 4UL, 252UL)).sd, (*p_849->g_89))) >= l_723)))))), 0x4EF0240FE093E520L, l_703.x, l_722, ((VECTOR(uint64_t, 4))(0xEC42916F2A56C1D9L)), (*p_849->g_627), 0UL, 18446744073709551611UL)).sf639)).zwyxxwzwzyxzzxyz, ((VECTOR(uint64_t, 16))(8UL)))))))).hi, ((VECTOR(uint64_t, 8))(0x18FB7FFD23385568L)), ((VECTOR(uint64_t, 8))(18446744073709551612UL))))).s57, ((VECTOR(uint64_t, 2))(1UL))))).xyyxxxxxyxxxyyxy, ((VECTOR(uint64_t, 16))(0x6888AA603F929E58L))))).s8 , p_849->g_724) , &p_849->g_489[0][1]) != (void*)0) , p_849->g_160.x) , l_659), 1L));
                }
            }
            for (p_849->g_715 = (-24); (p_849->g_715 == 0); p_849->g_715 = safe_add_func_int8_t_s_s(p_849->g_715, 6))
            { /* block id: 300 */
                int32_t *l_728 = &l_592[0];
                (*l_728) ^= 0x09FDE245L;
            }
        }
        if ((safe_div_func_uint8_t_u_u((((*l_733) = p_849->g_731) != &p_849->g_732), ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(p_849->g_734.xy)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((void*)0 == l_735[0]), 248UL, 0xE2L, ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(GROUP_DIVERGE(1, 1), FAKE_DIVERGE(p_849->local_1_offset, get_local_id(1), 10), (--(*l_736)), ((VECTOR(uint8_t, 4))(l_739.yyxx)), 0UL, ((VECTOR(uint8_t, 4))((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(65534UL, 2)), (-9L))), p_849->g_357.f9, 0xCAL, 4UL)), (safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((((VECTOR(int8_t, 8))(p_849->g_748.wywxxyxz)).s3 && ((((((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 8))((safe_add_func_uint16_t_u_u((l_760--), (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u((l_602[0] <= (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(1UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0xA0L, 2UL)))), GROUP_DIVERGE(1, 1), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_769.wwyxxywz)).lo)).y, ((VECTOR(uint8_t, 4))(l_770.s7746)))), 255UL, ((p_849->g_89 = &p_849->g_87) != (void*)0), 0xE1L, 246UL, ((VECTOR(uint8_t, 2))(0UL)), 0xD5L)).sa, 5))), l_567.z)) >= 0x14F604D5L), 14)))), 0L, (-2L), ((VECTOR(int16_t, 2))(0x2511L)), ((VECTOR(int16_t, 2))((-5L))), 0x0FE3L)).hi, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 4))(0x3342L))))).z <= 65535UL) & (-1L)) <= p_849->g_437.s9) == 0x51L)) > p_849->g_6), (*p_849->g_86))) > p_849->g_734.w), l_581)), ((VECTOR(uint8_t, 2))(0UL)), 0x15L)).sdc, ((VECTOR(uint8_t, 2))(0x3AL))))), 3UL, 1UL, 1UL)).s7456056077022547)))).s2d))).yxyx, ((VECTOR(uint8_t, 4))(0xB4L)), ((VECTOR(uint8_t, 4))(0x4FL))))).w)))
        { /* block id: 308 */
            volatile union U2 * volatile * volatile *l_774 = &p_849->g_772;
            int32_t *l_775 = &p_849->g_37[3];
            VECTOR(uint16_t, 8) l_780 = (VECTOR(uint16_t, 8))(0x1DC1L, (VECTOR(uint16_t, 4))(0x1DC1L, (VECTOR(uint16_t, 2))(0x1DC1L, 0xD96BL), 0xD96BL), 0xD96BL, 0x1DC1L, 0xD96BL);
            int8_t **l_791[2][2] = {{&p_849->g_86,&p_849->g_86},{&p_849->g_86,&p_849->g_86}};
            int8_t ***l_792 = &l_771[0];
            int i, j;
            (*l_774) = p_849->g_772;
            l_775 = l_775;
            if (l_567.y)
                continue;
            (*p_849->g_335) = func_64((!((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0L, (-6L))), 0x0268867BE83D4FE7L, 0x5F1B8F7BB4CAA299L)).z), (safe_add_func_int32_t_s_s((((VECTOR(uint8_t, 16))(0xEFL, 0x24L, 0xF6L, (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(l_780.s1374262647013071)).sa, (p_849->g_781 ^ ((((VECTOR(uint8_t, 16))(p_849->g_782.s4160352030456664)).s7 >= (((&p_849->g_474 == (p_849->g_163.y , (void*)0)) | ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((l_791[1][1] != ((*l_792) = &p_849->g_89)), (safe_mod_func_int64_t_s_s((GROUP_DIVERGE(2, 1) & (safe_div_func_int64_t_s_s(((((VECTOR(uint32_t, 4))(p_849->g_797.ywzw)).y && ((safe_sub_func_uint32_t_u_u(((**p_849->g_731) && 0x506FD0FF8A4B1CEDL), ((&p_849->g_773 == &p_849->g_773) < l_581))) , 7L)) , (-1L)), FAKE_DIVERGE(p_849->group_1_offset, get_group_id(1), 10)))), l_592[4])))) ^ 0x4A01FE29L), 0x7B8F3E3CL)), 14)), 0x7A37L)) < 0x3C8F7335L)) , p_849->g_357.f9)) ^ l_800)))), p_849->g_357.f1, ((VECTOR(uint8_t, 2))(0x8FL)), ((VECTOR(uint8_t, 8))(251UL)), 0UL)).s3 & 0x40L), l_593[4])), p_849->g_206.s3, p_849->g_165.s1, p_849);
        }
        else
        { /* block id: 314 */
            int32_t *l_805[6] = {&l_801[1][0],&l_588,&l_801[1][0],&l_801[1][0],&l_588,&l_801[1][0]};
            int i;
            l_592[0] ^= l_801[1][2];
            if (l_806)
                continue;
            (*p_849->g_335) = (void*)0;
            return l_807;
        }
    }
    (*p_849->g_356) = p_849->g_808[0][0];
    ++l_815;
    (*l_829) = func_64((safe_add_func_int64_t_s_s((0x20L | 0x0EL), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(p_849->g_820.s01750325)))).s4)), ((*l_810) = ((*p_849->g_627) || ((*l_809) < (safe_mul_func_uint8_t_u_u(((((safe_add_func_uint8_t_u_u((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_849->g_825.yyxy)), ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(p_849->g_826.s5041)).zzzyzxxyxywwwwxx, ((VECTOR(int32_t, 16))(0x7F34368AL, 0x16A368DEL, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((safe_rshift_func_int8_t_s_u((((l_829 == ((*l_830) = &p_849->g_336)) , l_831[3]) != ((((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0x2EBBL, ((VECTOR(int16_t, 2))(l_833.s47)), 0x1138L, p_849->g_158.y, ((((VECTOR(int64_t, 2))(l_834.xy)).hi != (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(0x14D542CCL, (safe_div_func_int64_t_s_s((safe_add_func_int32_t_s_s(l_839, l_840)), (*p_849->g_732))), 0x039B8795L, (-7L))).ywzyzxxzwyzzzwzw, ((VECTOR(int32_t, 16))(0x4531732BL)), ((VECTOR(int32_t, 16))(0x405A4A04L))))).sb8)).xyxxxyyy, ((VECTOR(int32_t, 8))(1L))))).s44)).odd <= p_849->g_841[1][1])) || p_849->g_842), ((VECTOR(int16_t, 2))(0x348AL)), ((VECTOR(int16_t, 2))(0x0B37L)), (-1L), p_849->g_122.f3, (-1L), ((VECTOR(int16_t, 2))(0x2E53L)), 0x5D96L)).even)).s06, ((VECTOR(int16_t, 2))(0L))))).yyxyxxxy, ((VECTOR(int16_t, 8))(0x6431L))))).s20, (int16_t)(*l_810)))))).yyxy)).even, (int16_t)0x0028L))).xxyyyyyy)).lo, (int16_t)p_849->g_524[7].f0))).x == p_849->g_437.s3) , p_849->g_843)), l_846)), 2L, 0x1E29F26FL, p_849->g_440.s2, p_849->g_357.f5, 0x71B0C500L, 8L, 0x5D6B754AL)).odd)).zzxyzwzy, ((VECTOR(int32_t, 8))(0x69EB9335L))))), 1L, 0L, l_847, (-6L), 0x08A1D423L, (-1L))), ((VECTOR(int32_t, 16))(0L))))).s5, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 2))(0x10FABC5EL)), (-1L), 0x20D64A07L, ((VECTOR(int32_t, 2))(1L)), 9L)).scb9a)).w , p_849->g_192.s1), 1L)) , (*l_811)) , &p_849->g_167) != &p_849->g_167), l_848))))), p_849->g_715, p_849->g_694.y, p_849);
    return (***l_830);
}


/* ------------------------------------------ */
/* 
 * reads : p_849->g_335 p_849->g_37 p_849->g_357.f9 p_849->g_474 p_849->g_122.f1 p_849->g_89 p_849->g_87 p_849->g_524 p_849->g_86 p_849->g_550 p_849->g_167 p_849->g_122.f6
 * writes: p_849->g_37 p_849->g_336 p_849->g_357.f9 p_849->g_474 p_849->g_122.f1 p_849->g_167 p_849->g_357.f3 p_849->g_122.f0
 */
int32_t * func_9(uint32_t  p_10, int8_t  p_11, uint32_t  p_12, int32_t * p_13, int8_t * p_14, struct S3 * p_849)
{ /* block id: 219 */
    int32_t *l_506 = (void*)0;
    int32_t *l_507 = &p_849->g_37[2];
    int32_t l_508 = 1L;
    uint32_t l_517[5] = {1UL,1UL,1UL,1UL,1UL};
    uint64_t *l_526[4];
    uint64_t **l_525[8][5][6] = {{{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]}},{{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]}},{{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]}},{{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]}},{{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]}},{{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]}},{{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]}},{{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]},{&l_526[1],&l_526[2],&l_526[1],&l_526[1],&l_526[2],&l_526[1]}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_526[i] = &p_849->g_357.f0;
    l_508 &= ((*l_507) = (safe_lshift_func_uint16_t_u_s(GROUP_DIVERGE(2, 1), p_11)));
    (*p_849->g_335) = p_13;
    if ((safe_unary_minus_func_int32_t_s(((*l_507) ^= (p_10 >= p_12)))))
    { /* block id: 224 */
        int8_t l_512 = 1L;
        for (p_10 = (-5); (p_10 != 48); ++p_10)
        { /* block id: 227 */
            l_508 = ((*l_507) &= l_512);
        }
    }
    else
    { /* block id: 231 */
        uint64_t **l_527 = &l_526[2];
        struct S0 *l_528 = &p_849->g_357;
        int32_t l_531 = 3L;
        uint32_t l_535 = 0x0AABF7E5L;
        VECTOR(int32_t, 4) l_551 = (VECTOR(int32_t, 4))(0x5446704DL, (VECTOR(int32_t, 2))(0x5446704DL, 0x42000F92L), 0x42000F92L);
        uint32_t *l_552 = &p_849->g_167;
        int8_t *l_555 = (void*)0;
        int8_t *l_556[8][5] = {{&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87},{&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87},{&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87},{&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87},{&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87},{&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87},{&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87},{&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87,&p_849->g_87}};
        int32_t l_557 = 1L;
        int16_t *l_558 = &p_849->g_357.f3;
        int16_t *l_559 = (void*)0;
        int16_t *l_560 = &p_849->g_122.f0;
        int i, j;
        for (p_849->g_357.f9 = (-22); (p_849->g_357.f9 >= 49); p_849->g_357.f9++)
        { /* block id: 234 */
            uint32_t l_518[4][3][8] = {{{0xCD7E5718L,0UL,0UL,0xCD7E5718L,4294967290UL,0UL,0UL,4294967290UL},{0xCD7E5718L,0UL,0UL,0xCD7E5718L,4294967290UL,0UL,0UL,4294967290UL},{0xCD7E5718L,0UL,0UL,0xCD7E5718L,4294967290UL,0UL,0UL,4294967290UL}},{{0xCD7E5718L,0UL,0UL,0xCD7E5718L,4294967290UL,0UL,0UL,4294967290UL},{0xCD7E5718L,0UL,0UL,0xCD7E5718L,4294967290UL,0UL,0UL,4294967290UL},{0xCD7E5718L,0UL,0UL,0xCD7E5718L,4294967290UL,0UL,0UL,4294967290UL}},{{0xCD7E5718L,0UL,0UL,0xCD7E5718L,4294967290UL,0UL,0UL,4294967290UL},{0xCD7E5718L,0UL,0UL,0xCD7E5718L,4294967290UL,0UL,0UL,4294967290UL},{0xCD7E5718L,0UL,0UL,0xCD7E5718L,4294967290UL,0UL,0UL,4294967290UL}},{{0xCD7E5718L,0UL,0UL,0xCD7E5718L,4294967290UL,0UL,0UL,4294967290UL},{0xCD7E5718L,0UL,0UL,0xCD7E5718L,4294967290UL,0UL,0UL,4294967290UL},{0xCD7E5718L,0UL,0UL,0xCD7E5718L,4294967290UL,0UL,0UL,4294967290UL}}};
            int32_t l_538 = 1L;
            int i, j, k;
            for (p_849->g_474 = 0; (p_849->g_474 > 23); p_849->g_474++)
            { /* block id: 237 */
                if (l_517[4])
                    break;
                if (l_518[3][0][6])
                    break;
            }
            for (p_849->g_122.f1 = 0; (p_849->g_122.f1 < 6); ++p_849->g_122.f1)
            { /* block id: 243 */
                uint16_t l_521 = 0xF731L;
                struct S0 *l_530 = (void*)0;
                struct S0 **l_529 = &l_530;
                int64_t *l_532 = (void*)0;
                int64_t *l_533 = (void*)0;
                int64_t *l_534 = (void*)0;
                uint8_t *l_536 = (void*)0;
                int32_t *l_537[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_537[i] = &p_849->g_119[0];
                l_521++;
                l_538 ^= (p_11 | ((*p_849->g_89) >= ((p_849->g_524[7] , (l_525[4][0][2] == l_527)) || ((l_528 != ((*l_529) = (void*)0)) , ((*l_507) = (((GROUP_DIVERGE(1, 1) | (l_535 = (l_531 && l_531))) >= p_12) , FAKE_DIVERGE(p_849->global_0_offset, get_global_id(0), 10)))))));
            }
        }
        (*l_507) = ((safe_unary_minus_func_int32_t_s((+(safe_mul_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(((p_10 < l_535) > 1UL), l_531)) >= 0x46D44976E0D6CBA1L) == (safe_mod_func_int16_t_s_s(((*l_560) = ((*l_558) = (((safe_div_func_int64_t_s_s(0x1E087BC6BB6B5DE5L, (((safe_add_func_int8_t_s_s((l_557 ^= ((*p_849->g_86) & ((((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(p_849->g_550.wyzy)).zwywyyzyxzwwyzxx, ((VECTOR(int32_t, 4))(l_551.xxzy)).zwzwwwyxwxyzxzwy))).s6e25)).y & p_11) && (((*l_552)--) , (255UL >= p_849->g_122.f6))) , p_11) , GROUP_DIVERGE(1, 1)))), p_12)) ^ l_535) | 0x45F61FA55F0BD30EL))) < l_551.w) == (*l_507)))), p_10))), 251UL))))) , (*l_507));
    }
    return p_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_849->g_359 p_849->g_357 p_849->g_481 p_849->g_489 p_849->g_89 p_849->g_87 p_849->g_86 p_849->g_80.f1
 * writes: p_849->g_357
 */
uint32_t  func_15(int32_t  p_16, uint8_t  p_17, int32_t  p_18, int8_t * p_19, uint8_t  p_20, struct S3 * p_849)
{ /* block id: 213 */
    int32_t *l_476[10];
    int32_t l_477 = (-1L);
    uint32_t l_478 = 0x98D48E24L;
    uint32_t *l_484 = &p_849->g_357.f9;
    uint64_t *l_490 = &p_849->g_122.f4;
    VECTOR(uint8_t, 8) l_491 = (VECTOR(uint8_t, 8))(0x94L, (VECTOR(uint8_t, 4))(0x94L, (VECTOR(uint8_t, 2))(0x94L, 246UL), 246UL), 246UL, 0x94L, 246UL);
    int32_t l_500 = (-1L);
    int i;
    for (i = 0; i < 10; i++)
        l_476[i] = &p_849->g_119[0];
    l_478++;
    (*p_849->g_481) = (*p_849->g_359);
    l_500 = (safe_sub_func_uint32_t_u_u(((*l_484) = GROUP_DIVERGE(0, 1)), ((1L == ((p_849->g_489[0][1] , ((void*)0 != l_490)) <= (((VECTOR(uint8_t, 16))(l_491.s3751512604726724)).sf > (((safe_add_func_int16_t_s_s(4L, p_20)) || (((VECTOR(uint16_t, 2))(65535UL, 1UL)).even == (safe_sub_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((((VECTOR(int16_t, 2))(0x088FL, (-5L))).lo && (safe_sub_func_int8_t_s_s((*p_849->g_89), (*p_849->g_86)))), p_20)) == 4L), (-1L))))) && 0xA8L)))) | p_16)));
    return p_849->g_80.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_849->g_122.f0
 * writes: p_849->g_122.f0
 */
uint8_t  func_21(uint64_t  p_22, uint32_t  p_23, uint64_t  p_24, struct S3 * p_849)
{ /* block id: 204 */
    uint16_t l_469 = 6UL;
    for (p_849->g_122.f0 = 0; (p_849->g_122.f0 != (-3)); p_849->g_122.f0 = safe_sub_func_uint64_t_u_u(p_849->g_122.f0, 7))
    { /* block id: 207 */
        int32_t *l_459 = (void*)0;
        int32_t *l_460 = &p_849->g_122.f1;
        int32_t *l_461 = &p_849->g_119[0];
        int32_t *l_462 = &p_849->g_37[3];
        int32_t *l_463 = &p_849->g_119[0];
        int32_t *l_464 = &p_849->g_119[3];
        int32_t *l_465 = &p_849->g_37[4];
        int32_t *l_466 = &p_849->g_37[3];
        int32_t *l_467 = &p_849->g_122.f1;
        int32_t *l_468[3];
        int i;
        for (i = 0; i < 3; i++)
            l_468[i] = (void*)0;
        l_469++;
        if (l_469)
            continue;
    }
    return l_469;
}


/* ------------------------------------------ */
/* 
 * reads : p_849->g_2 p_849->g_comm_values p_849->g_80 p_849->g_118 p_849->g_6 p_849->g_122 p_849->l_comm_values p_849->g_158 p_849->g_106 p_849->g_86 p_849->g_165 p_849->g_357 p_849->g_359 p_849->g_108 p_849->g_121 p_849->g_339 p_849->g_429 p_849->g_206 p_849->g_437 p_849->g_440 p_849->g_441 p_849->g_444 p_849->g_119 p_849->g_37
 * writes: p_849->g_37 p_849->g_108 p_849->g_118 p_849->g_119 p_849->g_121 p_849->g_122 p_849->g_87 p_849->g_158 p_849->g_106 p_849->g_355 p_849->g_357
 */
uint64_t  func_29(uint32_t  p_30, struct S3 * p_849)
{ /* block id: 11 */
    VECTOR(int8_t, 16) l_83 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int8_t, 2))(0L, (-1L)), (VECTOR(int8_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
    int32_t l_90 = 0L;
    int32_t *l_124 = (void*)0;
    int32_t l_366 = 6L;
    VECTOR(int64_t, 8) l_414 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
    VECTOR(int64_t, 8) l_415 = (VECTOR(int64_t, 8))((-3L), (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 1L), 1L), 1L, (-3L), 1L);
    VECTOR(int64_t, 4) l_416 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 9L), 9L);
    VECTOR(int64_t, 16) l_417 = (VECTOR(int64_t, 16))(0x5C50D980B7DB7142L, (VECTOR(int64_t, 4))(0x5C50D980B7DB7142L, (VECTOR(int64_t, 2))(0x5C50D980B7DB7142L, 1L), 1L), 1L, 0x5C50D980B7DB7142L, 1L, (VECTOR(int64_t, 2))(0x5C50D980B7DB7142L, 1L), (VECTOR(int64_t, 2))(0x5C50D980B7DB7142L, 1L), 0x5C50D980B7DB7142L, 1L, 0x5C50D980B7DB7142L, 1L);
    VECTOR(int64_t, 4) l_418 = (VECTOR(int64_t, 4))(0x723A1F39B553B662L, (VECTOR(int64_t, 2))(0x723A1F39B553B662L, 1L), 1L);
    uint8_t l_424[6] = {0x48L,0x48L,0x48L,0x48L,0x48L,0x48L};
    struct S1 **l_426 = &p_849->g_356;
    struct S1 ***l_427 = &l_426;
    VECTOR(uint32_t, 4) l_428 = (VECTOR(uint32_t, 4))(0x49E2B523L, (VECTOR(uint32_t, 2))(0x49E2B523L, 4294967295UL), 4294967295UL);
    int16_t *l_430 = &p_849->g_357.f3;
    int16_t *l_433[3][4];
    VECTOR(int16_t, 2) l_442 = (VECTOR(int16_t, 2))(0x2DF8L, 0x2EE0L);
    uint16_t *l_447 = (void*)0;
    int32_t l_454 = 0x19BD374FL;
    int32_t l_455 = 0x191210A7L;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_433[i][j] = (void*)0;
    }
    for (p_30 = 3; (p_30 >= 26); p_30++)
    { /* block id: 14 */
        int32_t l_52 = 0L;
        int32_t *l_109[1][5][2] = {{{&p_849->g_6,&p_849->g_37[1]},{&p_849->g_6,&p_849->g_37[1]},{&p_849->g_6,&p_849->g_37[1]},{&p_849->g_6,&p_849->g_37[1]},{&p_849->g_6,&p_849->g_37[1]}}};
        int8_t *l_352[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j, k;
        for (p_849->g_37[3] = 2; (p_849->g_37[3] == (-19)); p_849->g_37[3]--)
        { /* block id: 17 */
            int32_t *l_44 = (void*)0;
            int32_t *l_45 = (void*)0;
            int32_t *l_46 = (void*)0;
            int32_t *l_47 = (void*)0;
            int32_t *l_48 = (void*)0;
            int32_t *l_50 = (void*)0;
            int32_t *l_51 = (void*)0;
            VECTOR(uint8_t, 16) l_81 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint8_t, 2))(0UL, 1UL), (VECTOR(uint8_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
            int8_t **l_88 = &p_849->g_86;
            uint8_t *l_91 = (void*)0;
            uint8_t *l_92 = (void*)0;
            uint8_t *l_93 = (void*)0;
            uint8_t *l_94 = (void*)0;
            uint8_t *l_95 = (void*)0;
            uint8_t *l_96 = (void*)0;
            uint8_t *l_97 = (void*)0;
            uint8_t *l_98 = (void*)0;
            uint8_t *l_99 = (void*)0;
            uint8_t *l_100 = (void*)0;
            uint8_t *l_101 = (void*)0;
            uint8_t *l_102 = (void*)0;
            uint8_t *l_103 = (void*)0;
            uint8_t *l_104 = (void*)0;
            uint8_t *l_105[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint64_t *l_107 = &p_849->g_108;
            uint64_t *l_120[5][7][7] = {{{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121}},{{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121}},{{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121}},{{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121}},{{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121},{&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121,&p_849->g_121}}};
            int i, j, k;
            l_52 = p_30;
            (*p_849->g_359) = func_53(func_57(func_61(func_64(p_849->g_2[5], (safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((p_30 > (p_849->g_121 = (p_849->g_comm_values[p_849->tid] || (p_30 , (p_849->g_119[0] = (p_849->g_118 |= func_75((+0xAAC46587A760F2F4L), l_52, (+((((*l_107) = ((p_849->g_80 , ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(l_81.s6eff5237ae93ac48)).s95, ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(p_849->g_82.yx)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x35L, 0x59L)), 0x2DL, 0x2CL)).even))).xyyxxxyyxxyyxyxx)).s778c, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_83.s4eb764fad62130e9)).sdd37))))).lo))).yyxxxxxy, (uint8_t)(p_849->g_106.y = (l_90 = (safe_rshift_func_uint8_t_u_u(((p_849->g_89 = ((*l_88) = p_849->g_86)) != &p_849->g_87), l_83.sd))))))).s0) < 0x63L)) , (void*)0) != l_109[0][2][1])), p_849->g_comm_values[p_849->tid], p_849))))))) > p_849->g_2[7]), p_849->g_6)), l_83.s5)), 7)), l_83.sb, l_83.sd, p_849), l_124, p_849), p_849->l_comm_values[(safe_mod_func_uint32_t_u_u(p_849->tid, 90))], p_30, p_849), l_352[8], p_849->g_165.s0, p_849);
            for (p_849->g_122.f0 = 0; (p_849->g_122.f0 <= (-15)); p_849->g_122.f0--)
            { /* block id: 163 */
                int8_t l_373 = 1L;
                l_373 = (safe_add_func_int16_t_s_s((safe_sub_func_int64_t_s_s((3UL & l_366), (safe_lshift_func_int8_t_s_u(((void*)0 != &p_849->g_338[6]), (~(safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(p_849->g_122.f9, 13)), 9L))))))), 0xCB52L));
                for (p_849->g_108 = 0; (p_849->g_108 == 56); p_849->g_108++)
                { /* block id: 167 */
                    uint32_t l_376 = 0xEDED20FDL;
                    int32_t l_386 = (-1L);
                    l_376++;
                    for (p_849->g_121 = 0; (p_849->g_121 >= 46); p_849->g_121++)
                    { /* block id: 171 */
                        VECTOR(uint32_t, 16) l_385 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x1A4C744FL), 0x1A4C744FL), 0x1A4C744FL, 1UL, 0x1A4C744FL, (VECTOR(uint32_t, 2))(1UL, 0x1A4C744FL), (VECTOR(uint32_t, 2))(1UL, 0x1A4C744FL), 1UL, 0x1A4C744FL, 1UL, 0x1A4C744FL);
                        int i;
                        l_386 = (p_849->g_339.s6 & ((safe_mod_func_int32_t_s_s(l_376, (-6L))) < (safe_sub_func_int32_t_s_s((!(l_373 > ((&p_849->g_356 != &p_849->g_356) != p_30))), ((VECTOR(uint32_t, 4))(l_385.s0a56)).y))));
                        if (p_30)
                            continue;
                    }
                }
            }
        }
    }
    for (l_90 = 0; (l_90 > (-12)); --l_90)
    { /* block id: 181 */
        uint16_t *l_397 = (void*)0;
        uint16_t *l_398[9];
        int16_t *l_405 = &p_849->g_357.f3;
        int32_t l_423 = 0x792DDBD9L;
        int i;
        for (i = 0; i < 9; i++)
            l_398[i] = (void*)0;
        (1 + 1);
    }
    l_90 |= ((safe_unary_minus_func_uint16_t_u(((((*l_427) = l_426) == (void*)0) ^ p_30))) > (((l_417.se != l_416.y) ^ (((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 8))(l_428.zxxwzwxx)).s7443253171224417, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_849->g_429.s2446)).zxzxwxxyyzyzyxwx))))).s7 | ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(0x297E9D18L, ((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(5UL, p_30, 0x3240L, 0xC92CL)).zwyxzxyz)).s4 >= ((*l_430) = 0x31C3L)) | ((safe_lshift_func_int16_t_s_s(((p_849->g_122.f0 = ((!0UL) > p_849->g_2[7])) , p_849->g_122.f1), 4)) >= 0x2B47FFD1B1BAB4E6L)), ((VECTOR(uint32_t, 4))(0x91EF264DL)), 0xB30FCB87L, 0UL)).s62, ((VECTOR(uint32_t, 2))(1UL))))), 0x620833CEL, 0x58ED2029L)).z)) && p_849->g_206.s1));
    for (p_849->g_118 = (-19); (p_849->g_118 == (-6)); ++p_849->g_118)
    { /* block id: 193 */
        VECTOR(int32_t, 8) l_436 = (VECTOR(int32_t, 8))(0x1B571264L, (VECTOR(int32_t, 4))(0x1B571264L, (VECTOR(int32_t, 2))(0x1B571264L, (-10L)), (-10L)), (-10L), 0x1B571264L, (-10L));
        VECTOR(uint16_t, 4) l_443 = (VECTOR(uint16_t, 4))(0xA410L, (VECTOR(uint16_t, 2))(0xA410L, 65529UL), 65529UL);
        uint16_t *l_446 = (void*)0;
        uint16_t *l_448 = (void*)0;
        uint16_t *l_449 = (void*)0;
        uint16_t *l_450[2];
        int32_t *l_453[4];
        int i;
        for (i = 0; i < 2; i++)
            l_450[i] = (void*)0;
        for (i = 0; i < 4; i++)
            l_453[i] = &p_849->g_37[3];
        if (p_30)
            break;
        l_455 = (l_454 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_436.s02)), ((VECTOR(int32_t, 2))(p_849->g_437.s32)), (safe_lshift_func_int16_t_s_u((p_849->g_158.x >= (p_849->g_122.f6 < p_30)), ((VECTOR(uint16_t, 4))(p_849->g_122.f8, 1UL, 0UL, 0x2CA5L)).x)), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(p_849->g_440.s46)).xxyx, ((VECTOR(int16_t, 8))(p_849->g_441.yxxyyyxx)).lo))).lo, ((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 16))(l_442.yxyyyyyyxyyyxyxy)))))))).s03))), ((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(l_443.xy)).xyxyyyyy))).s60))).xyxyyyyx)))).odd)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_849->g_444.s37434153)).s75)).yyyy)).hi, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x6074L, 0xF37AL)), 65535UL, 0x8DBFL)).hi))), 0x201B80C7L, 0x6E181A45L)).even, ((VECTOR(int32_t, 8))(((safe_unary_minus_func_uint16_t_u((~(p_849->g_106.z = (((l_447 = l_446) == l_446) , (p_30 ^ l_436.s5)))))) , (l_90 = ((((safe_mul_func_uint16_t_u_u(p_849->g_119[0], p_849->g_37[2])) >= GROUP_DIVERGE(1, 1)) == 0xDED30F8EL) > GROUP_DIVERGE(2, 1)))), ((VECTOR(int32_t, 2))((-3L))), p_30, p_30, 1L, 0x08A6F8D2L, (-4L))).s32))).xyxxyxyxyxyyxyxy, ((VECTOR(int32_t, 16))((-1L)))))).lo, (int32_t)(-1L), (int32_t)0x2FE6F7A8L))).hi, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(0x21927A80L))))).w, (-7L), 0L)).s0);
        return p_849->g_357.f7;
    }
    return p_30;
}


/* ------------------------------------------ */
/* 
 * reads : p_849->g_357
 * writes: p_849->g_355
 */
struct S0  func_53(int8_t * p_54, int8_t * p_55, uint32_t  p_56, struct S3 * p_849)
{ /* block id: 157 */
    struct S1 **l_354 = (void*)0;
    struct S1 ***l_353[3];
    int i;
    for (i = 0; i < 3; i++)
        l_353[i] = &l_354;
    p_849->g_355[6][2][1] = (void*)0;
    return p_849->g_357;
}


/* ------------------------------------------ */
/* 
 * reads : p_849->g_145 p_849->g_122.f0 p_849->g_122.f5 p_849->g_158 p_849->g_159 p_849->g_160 p_849->g_161 p_849->g_163 p_849->g_165 p_849->g_87 p_849->g_122.f8 p_849->g_108 p_849->g_106 p_849->g_192 p_849->g_206 p_849->g_121 p_849->g_80 p_849->g_122.f1 p_849->g_325 p_849->g_335 p_849->g_339 p_849->g_86
 * writes: p_849->g_121 p_849->g_86 p_849->g_89 p_849->g_87 p_849->g_122.f8 p_849->g_108 p_849->g_122.f1 p_849->g_119 p_849->g_335 p_849->g_338 p_849->g_158 p_849->g_106
 */
int8_t * func_57(int8_t * p_58, int64_t  p_59, int8_t  p_60, struct S3 * p_849)
{ /* block id: 35 */
    int8_t *l_131 = &p_849->g_87;
    uint64_t l_132 = 0x8804B5BEC45CF242L;
    VECTOR(int64_t, 8) l_143 = (VECTOR(int64_t, 8))(0x43AFF28C12B71802L, (VECTOR(int64_t, 4))(0x43AFF28C12B71802L, (VECTOR(int64_t, 2))(0x43AFF28C12B71802L, 0x1A3159ADB9C433B5L), 0x1A3159ADB9C433B5L), 0x1A3159ADB9C433B5L, 0x43AFF28C12B71802L, 0x1A3159ADB9C433B5L);
    VECTOR(int64_t, 2) l_144 = (VECTOR(int64_t, 2))(1L, 3L);
    int32_t l_146 = 0x0C9473A2L;
    int32_t l_148[2];
    uint64_t *l_149 = (void*)0;
    VECTOR(int32_t, 16) l_152 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x7EBAF8E3L), 0x7EBAF8E3L), 0x7EBAF8E3L, (-8L), 0x7EBAF8E3L, (VECTOR(int32_t, 2))((-8L), 0x7EBAF8E3L), (VECTOR(int32_t, 2))((-8L), 0x7EBAF8E3L), (-8L), 0x7EBAF8E3L, (-8L), 0x7EBAF8E3L);
    uint64_t l_157[4];
    VECTOR(int8_t, 16) l_162 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
    VECTOR(uint8_t, 8) l_164 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 3UL), 3UL), 3UL, 255UL, 3UL);
    uint32_t *l_166[4] = {&p_849->g_167,&p_849->g_167,&p_849->g_167,&p_849->g_167};
    int8_t **l_168 = &p_849->g_86;
    int64_t l_186 = 3L;
    VECTOR(uint64_t, 16) l_207 = (VECTOR(uint64_t, 16))(0xFA8EE88E8DE12CC0L, (VECTOR(uint64_t, 4))(0xFA8EE88E8DE12CC0L, (VECTOR(uint64_t, 2))(0xFA8EE88E8DE12CC0L, 0x1000866FE6051C92L), 0x1000866FE6051C92L), 0x1000866FE6051C92L, 0xFA8EE88E8DE12CC0L, 0x1000866FE6051C92L, (VECTOR(uint64_t, 2))(0xFA8EE88E8DE12CC0L, 0x1000866FE6051C92L), (VECTOR(uint64_t, 2))(0xFA8EE88E8DE12CC0L, 0x1000866FE6051C92L), 0xFA8EE88E8DE12CC0L, 0x1000866FE6051C92L, 0xFA8EE88E8DE12CC0L, 0x1000866FE6051C92L);
    int16_t l_218 = 0x7F7BL;
    int32_t *l_326 = &p_849->g_119[2];
    int32_t ***l_337 = &p_849->g_335;
    int32_t l_344 = 0x21CA356FL;
    uint16_t *l_345 = (void*)0;
    uint16_t *l_346 = (void*)0;
    uint16_t *l_347 = (void*)0;
    uint16_t *l_348 = (void*)0;
    uint16_t *l_349 = (void*)0;
    uint16_t *l_350[8];
    int32_t *l_351 = &p_849->g_122.f1;
    int i;
    for (i = 0; i < 2; i++)
        l_148[i] = (-1L);
    for (i = 0; i < 4; i++)
        l_157[i] = 0x216667D682C875A0L;
    for (i = 0; i < 8; i++)
        l_350[i] = (void*)0;
    l_148[0] &= (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((((safe_mul_func_uint8_t_u_u((l_131 == &p_60), l_132)) | ((safe_add_func_uint16_t_u_u((((((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(((p_60 <= ((l_132 < ((((((&p_58 == &p_849->g_86) < p_60) < (safe_rshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 4))(l_143.s1541)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x7C8DD5CAA8788541L, (-1L))).yyxyxyyyxxxyyxxx)).s8872, ((VECTOR(int64_t, 8))(0x2AA1FC9FD4B6AB49L, (-1L), 0x6E52D58216C10DF5L, ((VECTOR(int64_t, 2))(l_144.yx)), (-1L), (-1L), 2L)).even)))))).yywwzwwwwwwxwxyw, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(p_849->g_145.sba)).xyyxyxxxxxyyyxyx))))).sb, (-2L))), p_849->g_122.f0))) != p_59) , 0x41L) != 0UL)) != 0L)) == FAKE_DIVERGE(p_849->group_2_offset, get_group_id(2), 10)), p_59)), p_60)) <= l_146) ^ p_59) <= GROUP_DIVERGE(2, 1)) == l_132), l_144.x)) < 4294967294UL)) , 0x33L), 3)), 0x0A758AB5L));
    if (((p_849->g_121 = p_849->g_122.f5) > (safe_mod_func_uint64_t_u_u((0x8A06586DAFEFF6F5L && (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_152.s87)).xxyyyxxx)).s4 || (l_152.sc = (safe_lshift_func_uint16_t_u_s(((((safe_rshift_func_int8_t_s_u(l_152.s8, 7)) >= l_157[1]) >= ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 4))(p_849->g_158.yxxx)).even, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 4))(p_849->g_159.wzwz)).zzwzxxxw, ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 4))(p_849->g_160.xxxy)).zzxwzwzw, ((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_849->g_161.s06)).yyxx)).zzzzwzwx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_162.s07)), 0x3BL, 0x0FL)).yywzywxz)))))).s24, ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 2))(p_849->g_163.xy)).yyyxyyyy, ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 8))(l_164.s57551316)).s61, ((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_849->g_165.s0351)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))((((((l_148[0] = FAKE_DIVERGE(p_849->group_1_offset, get_group_id(1), 10)) >= ((l_131 != (p_849->g_89 = ((*l_168) = func_61(&p_849->g_2[5], l_166[0], p_849)))) ^ p_59)) <= l_157[1]) >= p_849->g_160.x) != p_60), ((VECTOR(uint8_t, 2))(0xFBL)), 0xECL)))))), ((VECTOR(uint8_t, 8))(252UL)), ((VECTOR(uint8_t, 8))(0x8DL))))).s37))).xxyxyxxy))).s53))).xyyyxyyy))).s25)), 4UL, 0x2192L)).yxxyywzxxyzywxyy)).s7f)).lo, ((VECTOR(uint16_t, 8))(65532UL)), ((VECTOR(uint16_t, 2))(0UL)), l_162.s8, 1UL, 0xFA26L, 7UL, 0x0DD1L)).s09, ((VECTOR(uint16_t, 2))(0x7E85L))))).even) && l_148[0]), 7))))), p_59))))
    { /* block id: 42 */
        int64_t l_171 = (-5L);
        VECTOR(int32_t, 16) l_185 = (VECTOR(int32_t, 16))(0x5FE1D2F5L, (VECTOR(int32_t, 4))(0x5FE1D2F5L, (VECTOR(int32_t, 2))(0x5FE1D2F5L, 0x7C07765BL), 0x7C07765BL), 0x7C07765BL, 0x5FE1D2F5L, 0x7C07765BL, (VECTOR(int32_t, 2))(0x5FE1D2F5L, 0x7C07765BL), (VECTOR(int32_t, 2))(0x5FE1D2F5L, 0x7C07765BL), 0x5FE1D2F5L, 0x7C07765BL, 0x5FE1D2F5L, 0x7C07765BL);
        int32_t l_211 = 0x6D0909EEL;
        uint32_t *l_212 = (void*)0;
        int32_t *l_219 = &l_148[0];
        int i;
        for (p_849->g_87 = 0; (p_849->g_87 != 14); p_849->g_87++)
        { /* block id: 45 */
            if (l_171)
                break;
        }
        for (p_849->g_122.f8 = (-29); (p_849->g_122.f8 >= (-12)); p_849->g_122.f8++)
        { /* block id: 50 */
            int8_t *l_179 = &p_849->g_87;
            if (p_60)
                break;
            for (l_132 = 23; (l_132 != 37); l_132 = safe_add_func_int32_t_s_s(l_132, 8))
            { /* block id: 54 */
                int32_t *l_181 = &l_148[0];
                int32_t **l_180 = &l_181;
                for (p_849->g_108 = 0; (p_849->g_108 < 55); ++p_849->g_108)
                { /* block id: 57 */
                    uint64_t l_178 = 18446744073709551615UL;
                    if (p_60)
                        break;
                    if (l_178)
                        break;
                    return l_179;
                }
                (*l_180) = (void*)0;
            }
        }
        for (p_849->g_108 = 8; (p_849->g_108 != 6); p_849->g_108 = safe_sub_func_uint32_t_u_u(p_849->g_108, 2))
        { /* block id: 67 */
            int32_t *l_184[3][9] = {{&p_849->g_119[0],&p_849->g_119[0],&l_148[1],&l_148[0],&l_148[1],&p_849->g_119[0],&l_148[0],&p_849->g_6,&l_148[0]},{&p_849->g_119[0],&p_849->g_119[0],&l_148[1],&l_148[0],&l_148[1],&p_849->g_119[0],&l_148[0],&p_849->g_6,&l_148[0]},{&p_849->g_119[0],&p_849->g_119[0],&l_148[1],&l_148[0],&l_148[1],&p_849->g_119[0],&l_148[0],&p_849->g_6,&l_148[0]}};
            uint32_t l_187 = 0xCB46D81FL;
            uint8_t *l_194[6];
            uint8_t **l_193 = &l_194[2];
            uint64_t *l_199 = &l_157[1];
            int16_t *l_210[7][2][8] = {{{&p_849->g_122.f0,&p_849->g_122.f0,(void*)0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0},{&p_849->g_122.f0,&p_849->g_122.f0,(void*)0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0}},{{&p_849->g_122.f0,&p_849->g_122.f0,(void*)0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0},{&p_849->g_122.f0,&p_849->g_122.f0,(void*)0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0}},{{&p_849->g_122.f0,&p_849->g_122.f0,(void*)0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0},{&p_849->g_122.f0,&p_849->g_122.f0,(void*)0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0}},{{&p_849->g_122.f0,&p_849->g_122.f0,(void*)0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0},{&p_849->g_122.f0,&p_849->g_122.f0,(void*)0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0}},{{&p_849->g_122.f0,&p_849->g_122.f0,(void*)0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0},{&p_849->g_122.f0,&p_849->g_122.f0,(void*)0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0}},{{&p_849->g_122.f0,&p_849->g_122.f0,(void*)0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0},{&p_849->g_122.f0,&p_849->g_122.f0,(void*)0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0}},{{&p_849->g_122.f0,&p_849->g_122.f0,(void*)0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0},{&p_849->g_122.f0,&p_849->g_122.f0,(void*)0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0,&p_849->g_122.f0}}};
            uint32_t **l_213 = &l_212;
            uint16_t *l_214 = (void*)0;
            uint16_t *l_215 = (void*)0;
            uint16_t *l_216 = (void*)0;
            uint16_t *l_217[3];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_194[i] = (void*)0;
            for (i = 0; i < 3; i++)
                l_217[i] = (void*)0;
            l_187--;
            l_152.sf ^= (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(9UL, 0x9FL)).xxyx)).wwyxwzzwwzxxyzww)), (uint8_t)((((*l_193) = (p_849->g_106.w , func_61((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_849->g_192.se3)).xyxy)).y , &p_849->g_37[3]), l_184[0][0], p_849))) == (void*)0) == (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s((((*l_199) = l_185.s5) < (safe_mul_func_int16_t_s_s((((!(l_148[1] = (l_218 = (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(p_60, (((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(p_849->g_206.s1735)).xzyxywwxxzwzxwwy)).lo, ((VECTOR(uint64_t, 16))(l_207.s36b7ec641dcc9798)).hi))).s3045302405104314))).s9 < ((safe_mul_func_uint16_t_u_u((((l_211 = p_59) == (((*l_213) = l_212) != (void*)0)) < l_185.s0), 1UL)) , l_143.s4)))), 2))))) == 65535UL) && p_59), p_59))), 15)) || p_849->g_121), (*p_58)))), (uint8_t)l_185.sb))).sf972, ((VECTOR(uint8_t, 4))(0x73L)), ((VECTOR(uint8_t, 4))(255UL))))).xyywywyw)), ((VECTOR(uint8_t, 8))(1UL))))).s2, 2));
        }
        (*l_219) ^= (p_849->g_80 , l_185.sb);
    }
    else
    { /* block id: 78 */
        int32_t *l_222 = &p_849->g_122.f1;
        (*l_222) |= (safe_rshift_func_uint8_t_u_u(246UL, 1));
    }
    if ((atomic_inc(&p_849->l_atomic_input[13]) == 9))
    { /* block id: 82 */
        int32_t l_223[6] = {(-7L),0x74B113F3L,(-7L),(-7L),0x74B113F3L,(-7L)};
        int8_t l_317 = (-7L);
        VECTOR(int8_t, 16) l_318 = (VECTOR(int8_t, 16))(0x0EL, (VECTOR(int8_t, 4))(0x0EL, (VECTOR(int8_t, 2))(0x0EL, 0x4AL), 0x4AL), 0x4AL, 0x0EL, 0x4AL, (VECTOR(int8_t, 2))(0x0EL, 0x4AL), (VECTOR(int8_t, 2))(0x0EL, 0x4AL), 0x0EL, 0x4AL, 0x0EL, 0x4AL);
        VECTOR(int32_t, 16) l_319 = (VECTOR(int32_t, 16))(0x1FFAA673L, (VECTOR(int32_t, 4))(0x1FFAA673L, (VECTOR(int32_t, 2))(0x1FFAA673L, 0L), 0L), 0L, 0x1FFAA673L, 0L, (VECTOR(int32_t, 2))(0x1FFAA673L, 0L), (VECTOR(int32_t, 2))(0x1FFAA673L, 0L), 0x1FFAA673L, 0L, 0x1FFAA673L, 0L);
        VECTOR(int32_t, 8) l_320 = (VECTOR(int32_t, 8))(0x223A04BDL, (VECTOR(int32_t, 4))(0x223A04BDL, (VECTOR(int32_t, 2))(0x223A04BDL, 0x51B7BA88L), 0x51B7BA88L), 0x51B7BA88L, 0x223A04BDL, 0x51B7BA88L);
        int64_t l_321 = (-4L);
        uint8_t l_322 = 0xC2L;
        VECTOR(int32_t, 2) l_323 = (VECTOR(int32_t, 2))(0x141F9DA3L, 0x56790AF5L);
        uint8_t l_324 = 255UL;
        int i;
        for (l_223[2] = 0; (l_223[2] >= 16); l_223[2] = safe_add_func_int8_t_s_s(l_223[2], 1))
        { /* block id: 85 */
            uint16_t l_226 = 0x68BEL;
            struct S0 l_229 = {0UL,0x7DCC1E68B150A7E5L,4294967292UL,-2L,0x5AD0C4DEL,0x677555DDL,1UL,0UL,0x50CD7255FA5ECB41L,0xF5B9C717L};/* VOLATILE GLOBAL l_229 */
            struct S0 l_230 = {0xA41504472EFAD2F4L,0x6A8B989A8E6CA84DL,4294967295UL,-10L,0x118BEC9CL,-1L,0x460E21C4L,65535UL,1L,4UL};/* VOLATILE GLOBAL l_230 */
            int16_t l_231 = (-7L);
            int8_t l_232[8][1];
            int i, j;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 1; j++)
                    l_232[i][j] = (-1L);
            }
            ++l_226;
            l_230 = l_229;
            if ((l_232[4][0] = l_231))
            { /* block id: 89 */
                int32_t l_233 = (-7L);
                struct S1 l_237 = {9L,3L,0x232A3C27L,0x8AC29C0D19E221D2L,18446744073709551607UL,0x60L,-3L,0x37E884DBL,0x2DDB8F75A03B73B3L,1UL};/* VOLATILE GLOBAL l_237 */
                struct S1 l_238 = {-1L,0x6A6CDA6DL,2L,0x0FF412F7C2961140L,0x3A8DCC95434C744DL,1L,0x0554A3294F28CE03L,0UL,0x38E99BC534D2820CL,0xF3F4E8D6L};/* VOLATILE GLOBAL l_238 */
                for (l_233 = 0; (l_233 < 26); l_233 = safe_add_func_uint8_t_u_u(l_233, 2))
                { /* block id: 92 */
                    uint8_t l_236[2][9][3] = {{{247UL,247UL,247UL},{247UL,247UL,247UL},{247UL,247UL,247UL},{247UL,247UL,247UL},{247UL,247UL,247UL},{247UL,247UL,247UL},{247UL,247UL,247UL},{247UL,247UL,247UL},{247UL,247UL,247UL}},{{247UL,247UL,247UL},{247UL,247UL,247UL},{247UL,247UL,247UL},{247UL,247UL,247UL},{247UL,247UL,247UL},{247UL,247UL,247UL},{247UL,247UL,247UL},{247UL,247UL,247UL},{247UL,247UL,247UL}}};
                    int i, j, k;
                    l_230.f5 ^= l_236[1][2][2];
                }
                l_238 = l_237;
                for (l_237.f2 = 14; (l_237.f2 >= 13); l_237.f2 = safe_sub_func_uint64_t_u_u(l_237.f2, 7))
                { /* block id: 98 */
                    uint32_t l_241[3];
                    int8_t l_260 = 0x68L;
                    VECTOR(int16_t, 8) l_261 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                    int32_t l_262 = 0x10FA34F1L;
                    uint8_t l_263 = 0xD2L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_241[i] = 1UL;
                    if ((l_238.f1 &= l_241[1]))
                    { /* block id: 100 */
                        union U2 l_243 = {0};/* VOLATILE GLOBAL l_243 */
                        union U2 *l_242[9][4][2] = {{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}}};
                        union U2 *l_244 = &l_243;
                        int i, j, k;
                        l_244 = l_242[0][0][0];
                    }
                    else
                    { /* block id: 102 */
                        int32_t l_246 = 4L;
                        int32_t *l_245 = &l_246;
                        int32_t *l_247 = &l_246;
                        uint64_t l_248[2];
                        int64_t l_249 = 0x3F82FAE3370377B8L;
                        int16_t l_250 = 0x6BA5L;
                        int8_t l_251[10][1][9] = {{{(-3L),0x3CL,0L,0x3CL,(-3L),0x1AL,(-1L),(-3L),0x73L}},{{(-3L),0x3CL,0L,0x3CL,(-3L),0x1AL,(-1L),(-3L),0x73L}},{{(-3L),0x3CL,0L,0x3CL,(-3L),0x1AL,(-1L),(-3L),0x73L}},{{(-3L),0x3CL,0L,0x3CL,(-3L),0x1AL,(-1L),(-3L),0x73L}},{{(-3L),0x3CL,0L,0x3CL,(-3L),0x1AL,(-1L),(-3L),0x73L}},{{(-3L),0x3CL,0L,0x3CL,(-3L),0x1AL,(-1L),(-3L),0x73L}},{{(-3L),0x3CL,0L,0x3CL,(-3L),0x1AL,(-1L),(-3L),0x73L}},{{(-3L),0x3CL,0L,0x3CL,(-3L),0x1AL,(-1L),(-3L),0x73L}},{{(-3L),0x3CL,0L,0x3CL,(-3L),0x1AL,(-1L),(-3L),0x73L}},{{(-3L),0x3CL,0L,0x3CL,(-3L),0x1AL,(-1L),(-3L),0x73L}}};
                        uint8_t l_252 = 9UL;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_248[i] = 18446744073709551607UL;
                        l_247 = l_245;
                        l_230.f5 |= l_248[0];
                        ++l_252;
                    }
                    for (l_241[1] = 24; (l_241[1] != 23); --l_241[1])
                    { /* block id: 109 */
                        struct S1 l_259 = {0x1BA4L,0x4D165CD4L,0x3566C380L,18446744073709551607UL,0x3D22CD79FE6A86D9L,0x58L,0x327DD6E50475242AL,0xBCDF9D4AL,-7L,0x9DD4FA4BL};/* VOLATILE GLOBAL l_259 */
                        struct S1 *l_258 = &l_259;
                        struct S1 **l_257 = &l_258;
                        l_257 = (void*)0;
                    }
                    l_263--;
                }
            }
            else
            { /* block id: 114 */
                VECTOR(uint32_t, 8) l_268 = (VECTOR(uint32_t, 8))(0xBE22147CL, (VECTOR(uint32_t, 4))(0xBE22147CL, (VECTOR(uint32_t, 2))(0xBE22147CL, 0x842C0254L), 0x842C0254L), 0x842C0254L, 0xBE22147CL, 0x842C0254L);
                uint32_t *l_267 = (void*)0;
                uint32_t **l_266 = &l_267;
                int32_t l_269 = 0x457EE186L;
                int32_t l_271 = 0x045C9411L;
                int32_t *l_270 = &l_271;
                int i;
                l_266 = (void*)0;
                l_270 = (l_269 , (void*)0);
            }
            for (l_229.f0 = 0; (l_229.f0 <= 56); ++l_229.f0)
            { /* block id: 120 */
                struct S0 l_312 = {9UL,0x6707567DA4C62781L,4294967295UL,0x0184L,0x10F68CB7L,-3L,1UL,0xFAD6L,0x11BEB1825EA8C491L,0x3AA28A67L};/* VOLATILE GLOBAL l_312 */
                uint64_t *l_314 = &l_312.f0;
                uint64_t **l_313[6][10][4] = {{{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0}},{{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0}},{{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0}},{{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0}},{{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0}},{{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0},{&l_314,&l_314,&l_314,(void*)0}}};
                uint64_t **l_315 = &l_314;
                uint64_t **l_316[5] = {&l_314,&l_314,&l_314,&l_314,&l_314};
                int i, j, k;
                if (((VECTOR(int32_t, 2))(0L, 0x6E6383F7L)).even)
                { /* block id: 121 */
                    uint32_t l_274 = 4294967288UL;
                    l_229.f5 = l_274;
                }
                else
                { /* block id: 123 */
                    uint32_t l_275 = 0x2635CBC0L;
                    if (l_275)
                    { /* block id: 124 */
                        VECTOR(int32_t, 8) l_276 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, (-1L)), (-1L)), (-1L), 7L, (-1L));
                        struct S1 l_277 = {7L,3L,0L,6UL,18446744073709551615UL,-1L,7L,0x46E06E18L,0x6D34B75A985CADD1L,0xAE85B091L};/* VOLATILE GLOBAL l_277 */
                        struct S1 l_278 = {0x64B5L,0x248291D3L,0x185BCDF6L,0UL,0x5A3F4D27535FF06FL,0x2CL,1L,0x54A044D0L,0L,0xBF3D6430L};/* VOLATILE GLOBAL l_278 */
                        int8_t l_279 = (-4L);
                        uint32_t l_280 = 0x90E4931BL;
                        int32_t l_283 = 0x4FCC4A9DL;
                        VECTOR(int32_t, 4) l_284 = (VECTOR(int32_t, 4))(0x46653E88L, (VECTOR(int32_t, 2))(0x46653E88L, 0x5D881A32L), 0x5D881A32L);
                        VECTOR(int32_t, 16) l_285 = (VECTOR(int32_t, 16))(0x19AB900EL, (VECTOR(int32_t, 4))(0x19AB900EL, (VECTOR(int32_t, 2))(0x19AB900EL, (-1L)), (-1L)), (-1L), 0x19AB900EL, (-1L), (VECTOR(int32_t, 2))(0x19AB900EL, (-1L)), (VECTOR(int32_t, 2))(0x19AB900EL, (-1L)), 0x19AB900EL, (-1L), 0x19AB900EL, (-1L));
                        uint32_t l_286 = 0UL;
                        uint32_t l_287 = 4294967295UL;
                        int8_t l_288[5][8] = {{(-6L),(-6L),0x4AL,0x61L,1L,0x61L,0x4AL,(-6L)},{(-6L),(-6L),0x4AL,0x61L,1L,0x61L,0x4AL,(-6L)},{(-6L),(-6L),0x4AL,0x61L,1L,0x61L,0x4AL,(-6L)},{(-6L),(-6L),0x4AL,0x61L,1L,0x61L,0x4AL,(-6L)},{(-6L),(-6L),0x4AL,0x61L,1L,0x61L,0x4AL,(-6L)}};
                        VECTOR(int32_t, 4) l_289 = (VECTOR(int32_t, 4))(0x305EEB73L, (VECTOR(int32_t, 2))(0x305EEB73L, (-4L)), (-4L));
                        VECTOR(int32_t, 16) l_290 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2E9FA822L), 0x2E9FA822L), 0x2E9FA822L, (-1L), 0x2E9FA822L, (VECTOR(int32_t, 2))((-1L), 0x2E9FA822L), (VECTOR(int32_t, 2))((-1L), 0x2E9FA822L), (-1L), 0x2E9FA822L, (-1L), 0x2E9FA822L);
                        uint8_t l_291 = 252UL;
                        union U2 l_292 = {0};/* VOLATILE GLOBAL l_292 */
                        int8_t l_293 = 2L;
                        VECTOR(int32_t, 2) l_294 = (VECTOR(int32_t, 2))(1L, 0L);
                        VECTOR(uint64_t, 2) l_295 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x5C9201CDC0618F4EL);
                        int32_t l_296 = 4L;
                        uint64_t l_297 = 0x58B0EF4E7AC6DC37L;
                        uint64_t l_298 = 18446744073709551610UL;
                        uint16_t l_299 = 65527UL;
                        uint64_t l_300 = 18446744073709551608UL;
                        int i, j;
                        l_229.f5 |= ((VECTOR(int32_t, 4))(l_276.s1625)).x;
                        l_278 = l_277;
                        l_280--;
                        l_300 ^= (l_283 , ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_284.wwzwwxyzxxyxzwzw)))).odd)).s72)).yxxyxyxx, ((VECTOR(int32_t, 8))(l_285.s06b63f3a)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, 0L)), 1L, ((FAKE_DIVERGE(p_849->global_2_offset, get_global_id(2), 10) , (l_286 , l_287)) , l_288[1][5]), 0x6D38523BL, ((VECTOR(int32_t, 2))(l_289.zy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_290.s2b)), (l_291 , (l_292 , l_293)), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(l_294.yyyy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x66E66DC7L, 0x0D93BE3AL, 2L, 0x3999685EL)).even)).odd, l_295.y, ((VECTOR(int32_t, 4))((-8L))), l_296, 0x156D3185L, 7L, l_297, 0x60FD8510L, l_298, 1L, ((VECTOR(int32_t, 2))(7L)), 0x5F59A0CFL)).s1e45))))), 2L)).s5, l_299, ((VECTOR(int32_t, 2))(0x6198DFA4L)), (-7L), ((VECTOR(int32_t, 4))((-1L))))).sc6ee)).ywzzxywx))).lo, ((VECTOR(int32_t, 4))((-3L)))))).even, ((VECTOR(int32_t, 2))(0x46645008L))))).odd);
                    }
                    else
                    { /* block id: 129 */
                        int8_t l_301[2][9];
                        uint32_t l_302 = 4294967294UL;
                        int32_t l_306 = (-4L);
                        int32_t *l_305 = &l_306;
                        int32_t *l_307 = &l_306;
                        struct S1 l_308 = {8L,3L,3L,0x90C7E04F13F1AD50L,0xB38BDF08E9BBEADCL,0x4BL,-8L,1UL,0x303CD6C90BD2ADCCL,4294967295UL};/* VOLATILE GLOBAL l_308 */
                        struct S1 l_309 = {2L,-1L,-9L,0x11AED37A764B22C1L,1UL,0L,0x1AC72E4ECC75241BL,0x7E60A7B7L,0x5CC06E60C67030E3L,0UL};/* VOLATILE GLOBAL l_309 */
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 9; j++)
                                l_301[i][j] = (-1L);
                        }
                        l_302--;
                        l_229.f5 = 0L;
                        l_307 = l_305;
                        l_309 = l_308;
                    }
                }
                l_230 = ((l_229.f4--) , l_312);
                l_316[3] = (l_315 = l_313[1][9][1]);
            }
        }
        l_322 ^= (l_321 &= ((l_317 = GROUP_DIVERGE(1, 1)) , (((VECTOR(int8_t, 2))(l_318.s72)).odd , ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_319.se4f9625d5a57667e)).s573d)), ((VECTOR(int32_t, 8))(l_320.s63442254)).odd))).x)));
        l_324 |= ((VECTOR(int32_t, 4))(l_323.yxxx)).x;
        unsigned int result = 0;
        int l_223_i0;
        for (l_223_i0 = 0; l_223_i0 < 6; l_223_i0++) {
            result += l_223[l_223_i0];
        }
        result += l_317;
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
        result += l_319.sf;
        result += l_319.se;
        result += l_319.sd;
        result += l_319.sc;
        result += l_319.sb;
        result += l_319.sa;
        result += l_319.s9;
        result += l_319.s8;
        result += l_319.s7;
        result += l_319.s6;
        result += l_319.s5;
        result += l_319.s4;
        result += l_319.s3;
        result += l_319.s2;
        result += l_319.s1;
        result += l_319.s0;
        result += l_320.s7;
        result += l_320.s6;
        result += l_320.s5;
        result += l_320.s4;
        result += l_320.s3;
        result += l_320.s2;
        result += l_320.s1;
        result += l_320.s0;
        result += l_321;
        result += l_322;
        result += l_323.y;
        result += l_323.x;
        result += l_324;
        atomic_add(&p_849->l_special_values[13], result);
    }
    else
    { /* block id: 146 */
        (1 + 1);
    }
    (*l_351) |= (~((((*l_326) = (GROUP_DIVERGE(2, 1) , ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_849->g_325.yyxyyxxx)).odd)).xwyzwzyx))).s1)) > ((safe_lshift_func_uint16_t_u_u(0x4324L, (!(p_849->g_106.y &= (18446744073709551607UL && (((!GROUP_DIVERGE(1, 1)) != (safe_mul_func_uint16_t_u_u((p_849->g_158.y |= (safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(p_59, ((safe_lshift_func_uint8_t_u_u((((((0x22FAL | ((&l_326 != (p_849->g_338[7] = ((*l_337) = p_849->g_335))) >= ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_849->g_339.s63)).yxxy)).x)) & (p_59 != p_59)) || ((**l_168) = ((safe_lshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u(p_849->g_160.x, FAKE_DIVERGE(p_849->group_0_offset, get_group_id(0), 10))), 11)) != p_849->g_165.s4))) != p_60) , 246UL), 1)) & 65535UL), 0xF1L, p_60, ((VECTOR(uint8_t, 2))(255UL)), l_344, ((VECTOR(uint8_t, 4))(0UL)), ((VECTOR(uint8_t, 4))(0xA1L)), 0x50L)).sc, p_59))), 0x55A9L))) , p_59)))))) < p_60)) > p_59));
    return (*l_168);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_61(int32_t * p_62, int32_t * p_63, struct S3 * p_849)
{ /* block id: 33 */
    return &p_849->g_87;
}


/* ------------------------------------------ */
/* 
 * reads : p_849->g_122
 * writes: p_849->g_122
 */
int32_t * func_64(int64_t  p_65, int32_t  p_66, int32_t  p_67, int16_t  p_68, struct S3 * p_849)
{ /* block id: 30 */
    struct S1 *l_123 = &p_849->g_122;
    (*l_123) = p_849->g_122;
    return &p_849->g_37[3];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_75(uint64_t  p_76, int16_t  p_77, uint32_t  p_78, int32_t  p_79, struct S3 * p_849)
{ /* block id: 24 */
    int32_t *l_110 = (void*)0;
    int32_t *l_111 = (void*)0;
    int32_t *l_112[2][5];
    int32_t l_113 = 1L;
    int32_t l_114 = (-1L);
    uint16_t l_115 = 65528UL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_112[i][j] = (void*)0;
    }
    --l_115;
    return p_79;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[49];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 49; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[49];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 49; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[90];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 90; i++)
            l_comm_values[i] = 1;
    struct S3 c_850;
    struct S3* p_849 = &c_850;
    struct S3 c_851 = {
        {0x32BC40EDL,7L,0x32BC40EDL,0x32BC40EDL,7L,0x32BC40EDL,0x32BC40EDL,7L}, // p_849->g_2
        0L, // p_849->g_5
        0x5D2D9150L, // p_849->g_6
        (-1L), // p_849->g_33
        0x78E10A3BL, // p_849->g_34
        9L, // p_849->g_35
        1L, // p_849->g_36
        {0x43EFC167L,0x43EFC167L,0x43EFC167L,0x43EFC167L,0x43EFC167L}, // p_849->g_37
        (VECTOR(int32_t, 8))(0x43FA3C9EL, (VECTOR(int32_t, 4))(0x43FA3C9EL, (VECTOR(int32_t, 2))(0x43FA3C9EL, 5L), 5L), 5L, 0x43FA3C9EL, 5L), // p_849->g_41
        (void*)0, // p_849->g_40
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_849->g_42
        (void*)0, // p_849->g_43
        {{&p_849->g_2[4],&p_849->g_6,&p_849->g_37[3],&p_849->g_6},{&p_849->g_2[4],&p_849->g_6,&p_849->g_37[3],&p_849->g_6},{&p_849->g_2[4],&p_849->g_6,&p_849->g_37[3],&p_849->g_6},{&p_849->g_2[4],&p_849->g_6,&p_849->g_37[3],&p_849->g_6}}, // p_849->g_49
        {0x1411L,0L,5L,18446744073709551612UL,0x21F4251D17401D8BL,-1L,-4L,4294967295UL,0x740839CA31B86626L,0x7E161529L}, // p_849->g_80
        (VECTOR(int8_t, 2))(0L, 1L), // p_849->g_82
        0x54L, // p_849->g_87
        &p_849->g_87, // p_849->g_86
        &p_849->g_87, // p_849->g_89
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65534UL), 65534UL), // p_849->g_106
        0xB10B9BD427A37A7FL, // p_849->g_108
        0x7840EC183001FCD4L, // p_849->g_118
        {0x47F31148L,0x47F31148L,0x47F31148L,0x47F31148L}, // p_849->g_119
        0x80E9A89EFA381755L, // p_849->g_121
        {0x2030L,0x4445ADC8L,0x7E7F47FAL,0UL,0xF4BCE8A264C33588L,7L,1L,0x537E41DEL,0x2A7540F12F2D7027L,0x592CBA2CL}, // p_849->g_122
        (VECTOR(int64_t, 16))(0x4DD2221DAE3C54FDL, (VECTOR(int64_t, 4))(0x4DD2221DAE3C54FDL, (VECTOR(int64_t, 2))(0x4DD2221DAE3C54FDL, 0x22E64E466CC9BB9CL), 0x22E64E466CC9BB9CL), 0x22E64E466CC9BB9CL, 0x4DD2221DAE3C54FDL, 0x22E64E466CC9BB9CL, (VECTOR(int64_t, 2))(0x4DD2221DAE3C54FDL, 0x22E64E466CC9BB9CL), (VECTOR(int64_t, 2))(0x4DD2221DAE3C54FDL, 0x22E64E466CC9BB9CL), 0x4DD2221DAE3C54FDL, 0x22E64E466CC9BB9CL, 0x4DD2221DAE3C54FDL, 0x22E64E466CC9BB9CL), // p_849->g_145
        (void*)0, // p_849->g_147
        (VECTOR(uint16_t, 2))(1UL, 0UL), // p_849->g_158
        (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 0x2B6AL), 0x2B6AL), // p_849->g_159
        (VECTOR(uint8_t, 2))(0x02L, 0x95L), // p_849->g_160
        (VECTOR(int8_t, 8))(0x53L, (VECTOR(int8_t, 4))(0x53L, (VECTOR(int8_t, 2))(0x53L, 0L), 0L), 0L, 0x53L, 0L), // p_849->g_161
        (VECTOR(uint8_t, 2))(0x4DL, 0UL), // p_849->g_163
        (VECTOR(uint8_t, 8))(0x16L, (VECTOR(uint8_t, 4))(0x16L, (VECTOR(uint8_t, 2))(0x16L, 8UL), 8UL), 8UL, 0x16L, 8UL), // p_849->g_165
        0x6333A417L, // p_849->g_167
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-8L)), (-8L)), (-8L), 1L, (-8L), (VECTOR(int16_t, 2))(1L, (-8L)), (VECTOR(int16_t, 2))(1L, (-8L)), 1L, (-8L), 1L, (-8L)), // p_849->g_192
        (VECTOR(uint64_t, 8))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 4UL), 4UL), 4UL, 18446744073709551608UL, 4UL), // p_849->g_206
        (VECTOR(int32_t, 2))(0x163FD91EL, 0x1AF7AB69L), // p_849->g_325
        &p_849->g_6, // p_849->g_336
        &p_849->g_336, // p_849->g_335
        {&p_849->g_336,&p_849->g_336,&p_849->g_336,&p_849->g_336,&p_849->g_336,&p_849->g_336,&p_849->g_336,&p_849->g_336}, // p_849->g_338
        (VECTOR(int16_t, 8))(0x680CL, (VECTOR(int16_t, 4))(0x680CL, (VECTOR(int16_t, 2))(0x680CL, 4L), 4L), 4L, 0x680CL, 4L), // p_849->g_339
        &p_849->g_122, // p_849->g_356
        {{{&p_849->g_356,&p_849->g_356},{&p_849->g_356,&p_849->g_356},{&p_849->g_356,&p_849->g_356}},{{&p_849->g_356,&p_849->g_356},{&p_849->g_356,&p_849->g_356},{&p_849->g_356,&p_849->g_356}},{{&p_849->g_356,&p_849->g_356},{&p_849->g_356,&p_849->g_356},{&p_849->g_356,&p_849->g_356}},{{&p_849->g_356,&p_849->g_356},{&p_849->g_356,&p_849->g_356},{&p_849->g_356,&p_849->g_356}},{{&p_849->g_356,&p_849->g_356},{&p_849->g_356,&p_849->g_356},{&p_849->g_356,&p_849->g_356}},{{&p_849->g_356,&p_849->g_356},{&p_849->g_356,&p_849->g_356},{&p_849->g_356,&p_849->g_356}},{{&p_849->g_356,&p_849->g_356},{&p_849->g_356,&p_849->g_356},{&p_849->g_356,&p_849->g_356}}}, // p_849->g_355
        {0x22394B41FA521AE3L,-10L,0x7443D394L,0L,0x324D5EF6L,0x1B79A271L,0UL,9UL,0x20487C5DDD107B1BL,4294967295UL}, // p_849->g_357
        (void*)0, // p_849->g_358
        &p_849->g_357, // p_849->g_359
        (VECTOR(uint32_t, 8))(0xC68033F9L, (VECTOR(uint32_t, 4))(0xC68033F9L, (VECTOR(uint32_t, 2))(0xC68033F9L, 5UL), 5UL), 5UL, 0xC68033F9L, 5UL), // p_849->g_429
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x63DD0CF8L), 0x63DD0CF8L), 0x63DD0CF8L, 0L, 0x63DD0CF8L, (VECTOR(int32_t, 2))(0L, 0x63DD0CF8L), (VECTOR(int32_t, 2))(0L, 0x63DD0CF8L), 0L, 0x63DD0CF8L, 0L, 0x63DD0CF8L), // p_849->g_437
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L)), // p_849->g_440
        (VECTOR(int16_t, 2))(0L, 0x6BA1L), // p_849->g_441
        (VECTOR(int16_t, 8))(0x0CABL, (VECTOR(int16_t, 4))(0x0CABL, (VECTOR(int16_t, 2))(0x0CABL, 3L), 3L), 3L, 0x0CABL, 3L), // p_849->g_444
        0x56944E92L, // p_849->g_474
        &p_849->g_357, // p_849->g_481
        {{{0},{0}}}, // p_849->g_489
        {{0xC13B6CC2C9941745L,0x31484B6A10253750L,0x95D73391L,0x2F59L,4294967295UL,0L,0x9C30984DL,8UL,0x727B47188A6C5E76L,0x62FB8001L},{0x74C3D815AE43813BL,0x3C962CA0A5C54B21L,4294967295UL,8L,0UL,0x110AFED2L,4294967295UL,0xB49CL,6L,0xD585AF06L},{0xC13B6CC2C9941745L,0x31484B6A10253750L,0x95D73391L,0x2F59L,4294967295UL,0L,0x9C30984DL,8UL,0x727B47188A6C5E76L,0x62FB8001L},{0xC13B6CC2C9941745L,0x31484B6A10253750L,0x95D73391L,0x2F59L,4294967295UL,0L,0x9C30984DL,8UL,0x727B47188A6C5E76L,0x62FB8001L},{0x74C3D815AE43813BL,0x3C962CA0A5C54B21L,4294967295UL,8L,0UL,0x110AFED2L,4294967295UL,0xB49CL,6L,0xD585AF06L},{0xC13B6CC2C9941745L,0x31484B6A10253750L,0x95D73391L,0x2F59L,4294967295UL,0L,0x9C30984DL,8UL,0x727B47188A6C5E76L,0x62FB8001L},{0xC13B6CC2C9941745L,0x31484B6A10253750L,0x95D73391L,0x2F59L,4294967295UL,0L,0x9C30984DL,8UL,0x727B47188A6C5E76L,0x62FB8001L},{0x74C3D815AE43813BL,0x3C962CA0A5C54B21L,4294967295UL,8L,0UL,0x110AFED2L,4294967295UL,0xB49CL,6L,0xD585AF06L}}, // p_849->g_524
        (VECTOR(int32_t, 4))(0x3AA34011L, (VECTOR(int32_t, 2))(0x3AA34011L, 1L), 1L), // p_849->g_550
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 9L), 9L), // p_849->g_563
        (VECTOR(int32_t, 2))(0L, 0x2343514CL), // p_849->g_564
        (void*)0, // p_849->g_580
        &p_849->g_580, // p_849->g_579
        {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}, // p_849->g_601
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL), // p_849->g_605
        &p_849->g_524[7].f0, // p_849->g_627
        &p_849->g_627, // p_849->g_626
        (void*)0, // p_849->g_645
        (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), (-1L)), (-1L)), (-1L), (-9L), (-1L), (VECTOR(int32_t, 2))((-9L), (-1L)), (VECTOR(int32_t, 2))((-9L), (-1L)), (-9L), (-1L), (-9L), (-1L)), // p_849->g_648
        (VECTOR(int32_t, 2))(0L, 0x399DE0B6L), // p_849->g_649
        {{{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L}},{{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L}},{{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L},{0x8B9FEECFE115D51EL,9UL,18446744073709551608UL,0x3048C31EAA5EE051L}}}, // p_849->g_684
        (VECTOR(int16_t, 2))(0x13F3L, (-1L)), // p_849->g_693
        (VECTOR(int16_t, 4))(0x3FCDL, (VECTOR(int16_t, 2))(0x3FCDL, 0x17CBL), 0x17CBL), // p_849->g_694
        (VECTOR(uint64_t, 8))(8UL, (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 6UL), 6UL), 6UL, 8UL, 6UL), // p_849->g_704
        0x52BB99E2L, // p_849->g_715
        (-3L), // p_849->g_721
        {0}, // p_849->g_724
        &p_849->g_357.f0, // p_849->g_732
        &p_849->g_732, // p_849->g_731
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xB1L), 0xB1L), // p_849->g_734
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x7EL), 0x7EL), // p_849->g_748
        (void*)0, // p_849->g_773
        &p_849->g_773, // p_849->g_772
        0xD73C679BL, // p_849->g_781
        (VECTOR(uint8_t, 8))(0x7FL, (VECTOR(uint8_t, 4))(0x7FL, (VECTOR(uint8_t, 2))(0x7FL, 255UL), 255UL), 255UL, 0x7FL, 255UL), // p_849->g_782
        (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0x1347C541L), 0x1347C541L), // p_849->g_797
        (void*)0, // p_849->g_802
        &p_849->g_724.f2, // p_849->g_803
        {&p_849->g_724.f2,&p_849->g_724.f2,&p_849->g_724.f2,&p_849->g_724.f2,&p_849->g_724.f2,&p_849->g_724.f2,&p_849->g_724.f2}, // p_849->g_804
        {{{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL},{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL}},{{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL},{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL}},{{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL},{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL}},{{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL},{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL}},{{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL},{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL}},{{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL},{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL}},{{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL},{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL}},{{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL},{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL}},{{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL},{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL}},{{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL},{-6L,0x09064B70L,0L,0x69D60B628507B87DL,0x9E2855FD47348FEAL,1L,1L,7UL,0x3AC2237098C5677EL,1UL}}}, // p_849->g_808
        (VECTOR(int64_t, 8))(0x62A1372890C2ADD1L, (VECTOR(int64_t, 4))(0x62A1372890C2ADD1L, (VECTOR(int64_t, 2))(0x62A1372890C2ADD1L, 0x7843DACDE340E2AAL), 0x7843DACDE340E2AAL), 0x7843DACDE340E2AAL, 0x62A1372890C2ADD1L, 0x7843DACDE340E2AAL), // p_849->g_820
        (VECTOR(int32_t, 2))((-7L), 1L), // p_849->g_825
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L)), // p_849->g_826
        {{4294967295UL,0x0E8B7C5FL,0xF3A871B0L,4294967295UL,0xE9226215L,0xF3A871B0L,0xF3A871B0L,0xE9226215L,4294967295UL},{4294967295UL,0x0E8B7C5FL,0xF3A871B0L,4294967295UL,0xE9226215L,0xF3A871B0L,0xF3A871B0L,0xE9226215L,4294967295UL},{4294967295UL,0x0E8B7C5FL,0xF3A871B0L,4294967295UL,0xE9226215L,0xF3A871B0L,0xF3A871B0L,0xE9226215L,4294967295UL},{4294967295UL,0x0E8B7C5FL,0xF3A871B0L,4294967295UL,0xE9226215L,0xF3A871B0L,0xF3A871B0L,0xE9226215L,4294967295UL},{4294967295UL,0x0E8B7C5FL,0xF3A871B0L,4294967295UL,0xE9226215L,0xF3A871B0L,0xF3A871B0L,0xE9226215L,4294967295UL},{4294967295UL,0x0E8B7C5FL,0xF3A871B0L,4294967295UL,0xE9226215L,0xF3A871B0L,0xF3A871B0L,0xE9226215L,4294967295UL},{4294967295UL,0x0E8B7C5FL,0xF3A871B0L,4294967295UL,0xE9226215L,0xF3A871B0L,0xF3A871B0L,0xE9226215L,4294967295UL},{4294967295UL,0x0E8B7C5FL,0xF3A871B0L,4294967295UL,0xE9226215L,0xF3A871B0L,0xF3A871B0L,0xE9226215L,4294967295UL}}, // p_849->g_841
        1UL, // p_849->g_842
        &p_849->g_122.f5, // p_849->g_845
        {&p_849->g_845,&p_849->g_845,&p_849->g_845,&p_849->g_845,&p_849->g_845,&p_849->g_845,&p_849->g_845,&p_849->g_845}, // p_849->g_844
        &p_849->g_844[3], // p_849->g_843
        0, // p_849->v_collective
        sequence_input[get_global_id(0)], // p_849->global_0_offset
        sequence_input[get_global_id(1)], // p_849->global_1_offset
        sequence_input[get_global_id(2)], // p_849->global_2_offset
        sequence_input[get_local_id(0)], // p_849->local_0_offset
        sequence_input[get_local_id(1)], // p_849->local_1_offset
        sequence_input[get_local_id(2)], // p_849->local_2_offset
        sequence_input[get_group_id(0)], // p_849->group_0_offset
        sequence_input[get_group_id(1)], // p_849->group_1_offset
        sequence_input[get_group_id(2)], // p_849->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 90)), permutations[0][get_linear_local_id()])), // p_849->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_850 = c_851;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_849);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_849->g_2[i], "p_849->g_2[i]", print_hash_value);

    }
    transparent_crc(p_849->g_5, "p_849->g_5", print_hash_value);
    transparent_crc(p_849->g_6, "p_849->g_6", print_hash_value);
    transparent_crc(p_849->g_33, "p_849->g_33", print_hash_value);
    transparent_crc(p_849->g_34, "p_849->g_34", print_hash_value);
    transparent_crc(p_849->g_35, "p_849->g_35", print_hash_value);
    transparent_crc(p_849->g_36, "p_849->g_36", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_849->g_37[i], "p_849->g_37[i]", print_hash_value);

    }
    transparent_crc(p_849->g_41.s0, "p_849->g_41.s0", print_hash_value);
    transparent_crc(p_849->g_41.s1, "p_849->g_41.s1", print_hash_value);
    transparent_crc(p_849->g_41.s2, "p_849->g_41.s2", print_hash_value);
    transparent_crc(p_849->g_41.s3, "p_849->g_41.s3", print_hash_value);
    transparent_crc(p_849->g_41.s4, "p_849->g_41.s4", print_hash_value);
    transparent_crc(p_849->g_41.s5, "p_849->g_41.s5", print_hash_value);
    transparent_crc(p_849->g_41.s6, "p_849->g_41.s6", print_hash_value);
    transparent_crc(p_849->g_41.s7, "p_849->g_41.s7", print_hash_value);
    transparent_crc(p_849->g_80.f0, "p_849->g_80.f0", print_hash_value);
    transparent_crc(p_849->g_80.f1, "p_849->g_80.f1", print_hash_value);
    transparent_crc(p_849->g_80.f2, "p_849->g_80.f2", print_hash_value);
    transparent_crc(p_849->g_80.f3, "p_849->g_80.f3", print_hash_value);
    transparent_crc(p_849->g_80.f4, "p_849->g_80.f4", print_hash_value);
    transparent_crc(p_849->g_80.f5, "p_849->g_80.f5", print_hash_value);
    transparent_crc(p_849->g_80.f6, "p_849->g_80.f6", print_hash_value);
    transparent_crc(p_849->g_80.f7, "p_849->g_80.f7", print_hash_value);
    transparent_crc(p_849->g_80.f8, "p_849->g_80.f8", print_hash_value);
    transparent_crc(p_849->g_80.f9, "p_849->g_80.f9", print_hash_value);
    transparent_crc(p_849->g_82.x, "p_849->g_82.x", print_hash_value);
    transparent_crc(p_849->g_82.y, "p_849->g_82.y", print_hash_value);
    transparent_crc(p_849->g_87, "p_849->g_87", print_hash_value);
    transparent_crc(p_849->g_106.x, "p_849->g_106.x", print_hash_value);
    transparent_crc(p_849->g_106.y, "p_849->g_106.y", print_hash_value);
    transparent_crc(p_849->g_106.z, "p_849->g_106.z", print_hash_value);
    transparent_crc(p_849->g_106.w, "p_849->g_106.w", print_hash_value);
    transparent_crc(p_849->g_108, "p_849->g_108", print_hash_value);
    transparent_crc(p_849->g_118, "p_849->g_118", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_849->g_119[i], "p_849->g_119[i]", print_hash_value);

    }
    transparent_crc(p_849->g_121, "p_849->g_121", print_hash_value);
    transparent_crc(p_849->g_122.f0, "p_849->g_122.f0", print_hash_value);
    transparent_crc(p_849->g_122.f1, "p_849->g_122.f1", print_hash_value);
    transparent_crc(p_849->g_122.f2, "p_849->g_122.f2", print_hash_value);
    transparent_crc(p_849->g_122.f3, "p_849->g_122.f3", print_hash_value);
    transparent_crc(p_849->g_122.f4, "p_849->g_122.f4", print_hash_value);
    transparent_crc(p_849->g_122.f5, "p_849->g_122.f5", print_hash_value);
    transparent_crc(p_849->g_122.f6, "p_849->g_122.f6", print_hash_value);
    transparent_crc(p_849->g_122.f7, "p_849->g_122.f7", print_hash_value);
    transparent_crc(p_849->g_122.f8, "p_849->g_122.f8", print_hash_value);
    transparent_crc(p_849->g_122.f9, "p_849->g_122.f9", print_hash_value);
    transparent_crc(p_849->g_145.s0, "p_849->g_145.s0", print_hash_value);
    transparent_crc(p_849->g_145.s1, "p_849->g_145.s1", print_hash_value);
    transparent_crc(p_849->g_145.s2, "p_849->g_145.s2", print_hash_value);
    transparent_crc(p_849->g_145.s3, "p_849->g_145.s3", print_hash_value);
    transparent_crc(p_849->g_145.s4, "p_849->g_145.s4", print_hash_value);
    transparent_crc(p_849->g_145.s5, "p_849->g_145.s5", print_hash_value);
    transparent_crc(p_849->g_145.s6, "p_849->g_145.s6", print_hash_value);
    transparent_crc(p_849->g_145.s7, "p_849->g_145.s7", print_hash_value);
    transparent_crc(p_849->g_145.s8, "p_849->g_145.s8", print_hash_value);
    transparent_crc(p_849->g_145.s9, "p_849->g_145.s9", print_hash_value);
    transparent_crc(p_849->g_145.sa, "p_849->g_145.sa", print_hash_value);
    transparent_crc(p_849->g_145.sb, "p_849->g_145.sb", print_hash_value);
    transparent_crc(p_849->g_145.sc, "p_849->g_145.sc", print_hash_value);
    transparent_crc(p_849->g_145.sd, "p_849->g_145.sd", print_hash_value);
    transparent_crc(p_849->g_145.se, "p_849->g_145.se", print_hash_value);
    transparent_crc(p_849->g_145.sf, "p_849->g_145.sf", print_hash_value);
    transparent_crc(p_849->g_158.x, "p_849->g_158.x", print_hash_value);
    transparent_crc(p_849->g_158.y, "p_849->g_158.y", print_hash_value);
    transparent_crc(p_849->g_159.x, "p_849->g_159.x", print_hash_value);
    transparent_crc(p_849->g_159.y, "p_849->g_159.y", print_hash_value);
    transparent_crc(p_849->g_159.z, "p_849->g_159.z", print_hash_value);
    transparent_crc(p_849->g_159.w, "p_849->g_159.w", print_hash_value);
    transparent_crc(p_849->g_160.x, "p_849->g_160.x", print_hash_value);
    transparent_crc(p_849->g_160.y, "p_849->g_160.y", print_hash_value);
    transparent_crc(p_849->g_161.s0, "p_849->g_161.s0", print_hash_value);
    transparent_crc(p_849->g_161.s1, "p_849->g_161.s1", print_hash_value);
    transparent_crc(p_849->g_161.s2, "p_849->g_161.s2", print_hash_value);
    transparent_crc(p_849->g_161.s3, "p_849->g_161.s3", print_hash_value);
    transparent_crc(p_849->g_161.s4, "p_849->g_161.s4", print_hash_value);
    transparent_crc(p_849->g_161.s5, "p_849->g_161.s5", print_hash_value);
    transparent_crc(p_849->g_161.s6, "p_849->g_161.s6", print_hash_value);
    transparent_crc(p_849->g_161.s7, "p_849->g_161.s7", print_hash_value);
    transparent_crc(p_849->g_163.x, "p_849->g_163.x", print_hash_value);
    transparent_crc(p_849->g_163.y, "p_849->g_163.y", print_hash_value);
    transparent_crc(p_849->g_165.s0, "p_849->g_165.s0", print_hash_value);
    transparent_crc(p_849->g_165.s1, "p_849->g_165.s1", print_hash_value);
    transparent_crc(p_849->g_165.s2, "p_849->g_165.s2", print_hash_value);
    transparent_crc(p_849->g_165.s3, "p_849->g_165.s3", print_hash_value);
    transparent_crc(p_849->g_165.s4, "p_849->g_165.s4", print_hash_value);
    transparent_crc(p_849->g_165.s5, "p_849->g_165.s5", print_hash_value);
    transparent_crc(p_849->g_165.s6, "p_849->g_165.s6", print_hash_value);
    transparent_crc(p_849->g_165.s7, "p_849->g_165.s7", print_hash_value);
    transparent_crc(p_849->g_167, "p_849->g_167", print_hash_value);
    transparent_crc(p_849->g_192.s0, "p_849->g_192.s0", print_hash_value);
    transparent_crc(p_849->g_192.s1, "p_849->g_192.s1", print_hash_value);
    transparent_crc(p_849->g_192.s2, "p_849->g_192.s2", print_hash_value);
    transparent_crc(p_849->g_192.s3, "p_849->g_192.s3", print_hash_value);
    transparent_crc(p_849->g_192.s4, "p_849->g_192.s4", print_hash_value);
    transparent_crc(p_849->g_192.s5, "p_849->g_192.s5", print_hash_value);
    transparent_crc(p_849->g_192.s6, "p_849->g_192.s6", print_hash_value);
    transparent_crc(p_849->g_192.s7, "p_849->g_192.s7", print_hash_value);
    transparent_crc(p_849->g_192.s8, "p_849->g_192.s8", print_hash_value);
    transparent_crc(p_849->g_192.s9, "p_849->g_192.s9", print_hash_value);
    transparent_crc(p_849->g_192.sa, "p_849->g_192.sa", print_hash_value);
    transparent_crc(p_849->g_192.sb, "p_849->g_192.sb", print_hash_value);
    transparent_crc(p_849->g_192.sc, "p_849->g_192.sc", print_hash_value);
    transparent_crc(p_849->g_192.sd, "p_849->g_192.sd", print_hash_value);
    transparent_crc(p_849->g_192.se, "p_849->g_192.se", print_hash_value);
    transparent_crc(p_849->g_192.sf, "p_849->g_192.sf", print_hash_value);
    transparent_crc(p_849->g_206.s0, "p_849->g_206.s0", print_hash_value);
    transparent_crc(p_849->g_206.s1, "p_849->g_206.s1", print_hash_value);
    transparent_crc(p_849->g_206.s2, "p_849->g_206.s2", print_hash_value);
    transparent_crc(p_849->g_206.s3, "p_849->g_206.s3", print_hash_value);
    transparent_crc(p_849->g_206.s4, "p_849->g_206.s4", print_hash_value);
    transparent_crc(p_849->g_206.s5, "p_849->g_206.s5", print_hash_value);
    transparent_crc(p_849->g_206.s6, "p_849->g_206.s6", print_hash_value);
    transparent_crc(p_849->g_206.s7, "p_849->g_206.s7", print_hash_value);
    transparent_crc(p_849->g_325.x, "p_849->g_325.x", print_hash_value);
    transparent_crc(p_849->g_325.y, "p_849->g_325.y", print_hash_value);
    transparent_crc(p_849->g_339.s0, "p_849->g_339.s0", print_hash_value);
    transparent_crc(p_849->g_339.s1, "p_849->g_339.s1", print_hash_value);
    transparent_crc(p_849->g_339.s2, "p_849->g_339.s2", print_hash_value);
    transparent_crc(p_849->g_339.s3, "p_849->g_339.s3", print_hash_value);
    transparent_crc(p_849->g_339.s4, "p_849->g_339.s4", print_hash_value);
    transparent_crc(p_849->g_339.s5, "p_849->g_339.s5", print_hash_value);
    transparent_crc(p_849->g_339.s6, "p_849->g_339.s6", print_hash_value);
    transparent_crc(p_849->g_339.s7, "p_849->g_339.s7", print_hash_value);
    transparent_crc(p_849->g_357.f0, "p_849->g_357.f0", print_hash_value);
    transparent_crc(p_849->g_357.f1, "p_849->g_357.f1", print_hash_value);
    transparent_crc(p_849->g_357.f2, "p_849->g_357.f2", print_hash_value);
    transparent_crc(p_849->g_357.f3, "p_849->g_357.f3", print_hash_value);
    transparent_crc(p_849->g_357.f4, "p_849->g_357.f4", print_hash_value);
    transparent_crc(p_849->g_357.f5, "p_849->g_357.f5", print_hash_value);
    transparent_crc(p_849->g_357.f6, "p_849->g_357.f6", print_hash_value);
    transparent_crc(p_849->g_357.f7, "p_849->g_357.f7", print_hash_value);
    transparent_crc(p_849->g_357.f8, "p_849->g_357.f8", print_hash_value);
    transparent_crc(p_849->g_357.f9, "p_849->g_357.f9", print_hash_value);
    transparent_crc(p_849->g_429.s0, "p_849->g_429.s0", print_hash_value);
    transparent_crc(p_849->g_429.s1, "p_849->g_429.s1", print_hash_value);
    transparent_crc(p_849->g_429.s2, "p_849->g_429.s2", print_hash_value);
    transparent_crc(p_849->g_429.s3, "p_849->g_429.s3", print_hash_value);
    transparent_crc(p_849->g_429.s4, "p_849->g_429.s4", print_hash_value);
    transparent_crc(p_849->g_429.s5, "p_849->g_429.s5", print_hash_value);
    transparent_crc(p_849->g_429.s6, "p_849->g_429.s6", print_hash_value);
    transparent_crc(p_849->g_429.s7, "p_849->g_429.s7", print_hash_value);
    transparent_crc(p_849->g_437.s0, "p_849->g_437.s0", print_hash_value);
    transparent_crc(p_849->g_437.s1, "p_849->g_437.s1", print_hash_value);
    transparent_crc(p_849->g_437.s2, "p_849->g_437.s2", print_hash_value);
    transparent_crc(p_849->g_437.s3, "p_849->g_437.s3", print_hash_value);
    transparent_crc(p_849->g_437.s4, "p_849->g_437.s4", print_hash_value);
    transparent_crc(p_849->g_437.s5, "p_849->g_437.s5", print_hash_value);
    transparent_crc(p_849->g_437.s6, "p_849->g_437.s6", print_hash_value);
    transparent_crc(p_849->g_437.s7, "p_849->g_437.s7", print_hash_value);
    transparent_crc(p_849->g_437.s8, "p_849->g_437.s8", print_hash_value);
    transparent_crc(p_849->g_437.s9, "p_849->g_437.s9", print_hash_value);
    transparent_crc(p_849->g_437.sa, "p_849->g_437.sa", print_hash_value);
    transparent_crc(p_849->g_437.sb, "p_849->g_437.sb", print_hash_value);
    transparent_crc(p_849->g_437.sc, "p_849->g_437.sc", print_hash_value);
    transparent_crc(p_849->g_437.sd, "p_849->g_437.sd", print_hash_value);
    transparent_crc(p_849->g_437.se, "p_849->g_437.se", print_hash_value);
    transparent_crc(p_849->g_437.sf, "p_849->g_437.sf", print_hash_value);
    transparent_crc(p_849->g_440.s0, "p_849->g_440.s0", print_hash_value);
    transparent_crc(p_849->g_440.s1, "p_849->g_440.s1", print_hash_value);
    transparent_crc(p_849->g_440.s2, "p_849->g_440.s2", print_hash_value);
    transparent_crc(p_849->g_440.s3, "p_849->g_440.s3", print_hash_value);
    transparent_crc(p_849->g_440.s4, "p_849->g_440.s4", print_hash_value);
    transparent_crc(p_849->g_440.s5, "p_849->g_440.s5", print_hash_value);
    transparent_crc(p_849->g_440.s6, "p_849->g_440.s6", print_hash_value);
    transparent_crc(p_849->g_440.s7, "p_849->g_440.s7", print_hash_value);
    transparent_crc(p_849->g_441.x, "p_849->g_441.x", print_hash_value);
    transparent_crc(p_849->g_441.y, "p_849->g_441.y", print_hash_value);
    transparent_crc(p_849->g_444.s0, "p_849->g_444.s0", print_hash_value);
    transparent_crc(p_849->g_444.s1, "p_849->g_444.s1", print_hash_value);
    transparent_crc(p_849->g_444.s2, "p_849->g_444.s2", print_hash_value);
    transparent_crc(p_849->g_444.s3, "p_849->g_444.s3", print_hash_value);
    transparent_crc(p_849->g_444.s4, "p_849->g_444.s4", print_hash_value);
    transparent_crc(p_849->g_444.s5, "p_849->g_444.s5", print_hash_value);
    transparent_crc(p_849->g_444.s6, "p_849->g_444.s6", print_hash_value);
    transparent_crc(p_849->g_444.s7, "p_849->g_444.s7", print_hash_value);
    transparent_crc(p_849->g_474, "p_849->g_474", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_849->g_524[i].f0, "p_849->g_524[i].f0", print_hash_value);
        transparent_crc(p_849->g_524[i].f1, "p_849->g_524[i].f1", print_hash_value);
        transparent_crc(p_849->g_524[i].f2, "p_849->g_524[i].f2", print_hash_value);
        transparent_crc(p_849->g_524[i].f3, "p_849->g_524[i].f3", print_hash_value);
        transparent_crc(p_849->g_524[i].f4, "p_849->g_524[i].f4", print_hash_value);
        transparent_crc(p_849->g_524[i].f5, "p_849->g_524[i].f5", print_hash_value);
        transparent_crc(p_849->g_524[i].f6, "p_849->g_524[i].f6", print_hash_value);
        transparent_crc(p_849->g_524[i].f7, "p_849->g_524[i].f7", print_hash_value);
        transparent_crc(p_849->g_524[i].f8, "p_849->g_524[i].f8", print_hash_value);
        transparent_crc(p_849->g_524[i].f9, "p_849->g_524[i].f9", print_hash_value);

    }
    transparent_crc(p_849->g_550.x, "p_849->g_550.x", print_hash_value);
    transparent_crc(p_849->g_550.y, "p_849->g_550.y", print_hash_value);
    transparent_crc(p_849->g_550.z, "p_849->g_550.z", print_hash_value);
    transparent_crc(p_849->g_550.w, "p_849->g_550.w", print_hash_value);
    transparent_crc(p_849->g_563.x, "p_849->g_563.x", print_hash_value);
    transparent_crc(p_849->g_563.y, "p_849->g_563.y", print_hash_value);
    transparent_crc(p_849->g_563.z, "p_849->g_563.z", print_hash_value);
    transparent_crc(p_849->g_563.w, "p_849->g_563.w", print_hash_value);
    transparent_crc(p_849->g_564.x, "p_849->g_564.x", print_hash_value);
    transparent_crc(p_849->g_564.y, "p_849->g_564.y", print_hash_value);
    transparent_crc(p_849->g_605.s0, "p_849->g_605.s0", print_hash_value);
    transparent_crc(p_849->g_605.s1, "p_849->g_605.s1", print_hash_value);
    transparent_crc(p_849->g_605.s2, "p_849->g_605.s2", print_hash_value);
    transparent_crc(p_849->g_605.s3, "p_849->g_605.s3", print_hash_value);
    transparent_crc(p_849->g_605.s4, "p_849->g_605.s4", print_hash_value);
    transparent_crc(p_849->g_605.s5, "p_849->g_605.s5", print_hash_value);
    transparent_crc(p_849->g_605.s6, "p_849->g_605.s6", print_hash_value);
    transparent_crc(p_849->g_605.s7, "p_849->g_605.s7", print_hash_value);
    transparent_crc(p_849->g_648.s0, "p_849->g_648.s0", print_hash_value);
    transparent_crc(p_849->g_648.s1, "p_849->g_648.s1", print_hash_value);
    transparent_crc(p_849->g_648.s2, "p_849->g_648.s2", print_hash_value);
    transparent_crc(p_849->g_648.s3, "p_849->g_648.s3", print_hash_value);
    transparent_crc(p_849->g_648.s4, "p_849->g_648.s4", print_hash_value);
    transparent_crc(p_849->g_648.s5, "p_849->g_648.s5", print_hash_value);
    transparent_crc(p_849->g_648.s6, "p_849->g_648.s6", print_hash_value);
    transparent_crc(p_849->g_648.s7, "p_849->g_648.s7", print_hash_value);
    transparent_crc(p_849->g_648.s8, "p_849->g_648.s8", print_hash_value);
    transparent_crc(p_849->g_648.s9, "p_849->g_648.s9", print_hash_value);
    transparent_crc(p_849->g_648.sa, "p_849->g_648.sa", print_hash_value);
    transparent_crc(p_849->g_648.sb, "p_849->g_648.sb", print_hash_value);
    transparent_crc(p_849->g_648.sc, "p_849->g_648.sc", print_hash_value);
    transparent_crc(p_849->g_648.sd, "p_849->g_648.sd", print_hash_value);
    transparent_crc(p_849->g_648.se, "p_849->g_648.se", print_hash_value);
    transparent_crc(p_849->g_648.sf, "p_849->g_648.sf", print_hash_value);
    transparent_crc(p_849->g_649.x, "p_849->g_649.x", print_hash_value);
    transparent_crc(p_849->g_649.y, "p_849->g_649.y", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_849->g_684[i][j][k], "p_849->g_684[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_849->g_693.x, "p_849->g_693.x", print_hash_value);
    transparent_crc(p_849->g_693.y, "p_849->g_693.y", print_hash_value);
    transparent_crc(p_849->g_694.x, "p_849->g_694.x", print_hash_value);
    transparent_crc(p_849->g_694.y, "p_849->g_694.y", print_hash_value);
    transparent_crc(p_849->g_694.z, "p_849->g_694.z", print_hash_value);
    transparent_crc(p_849->g_694.w, "p_849->g_694.w", print_hash_value);
    transparent_crc(p_849->g_704.s0, "p_849->g_704.s0", print_hash_value);
    transparent_crc(p_849->g_704.s1, "p_849->g_704.s1", print_hash_value);
    transparent_crc(p_849->g_704.s2, "p_849->g_704.s2", print_hash_value);
    transparent_crc(p_849->g_704.s3, "p_849->g_704.s3", print_hash_value);
    transparent_crc(p_849->g_704.s4, "p_849->g_704.s4", print_hash_value);
    transparent_crc(p_849->g_704.s5, "p_849->g_704.s5", print_hash_value);
    transparent_crc(p_849->g_704.s6, "p_849->g_704.s6", print_hash_value);
    transparent_crc(p_849->g_704.s7, "p_849->g_704.s7", print_hash_value);
    transparent_crc(p_849->g_715, "p_849->g_715", print_hash_value);
    transparent_crc(p_849->g_721, "p_849->g_721", print_hash_value);
    transparent_crc(p_849->g_734.x, "p_849->g_734.x", print_hash_value);
    transparent_crc(p_849->g_734.y, "p_849->g_734.y", print_hash_value);
    transparent_crc(p_849->g_734.z, "p_849->g_734.z", print_hash_value);
    transparent_crc(p_849->g_734.w, "p_849->g_734.w", print_hash_value);
    transparent_crc(p_849->g_748.x, "p_849->g_748.x", print_hash_value);
    transparent_crc(p_849->g_748.y, "p_849->g_748.y", print_hash_value);
    transparent_crc(p_849->g_748.z, "p_849->g_748.z", print_hash_value);
    transparent_crc(p_849->g_748.w, "p_849->g_748.w", print_hash_value);
    transparent_crc(p_849->g_781, "p_849->g_781", print_hash_value);
    transparent_crc(p_849->g_782.s0, "p_849->g_782.s0", print_hash_value);
    transparent_crc(p_849->g_782.s1, "p_849->g_782.s1", print_hash_value);
    transparent_crc(p_849->g_782.s2, "p_849->g_782.s2", print_hash_value);
    transparent_crc(p_849->g_782.s3, "p_849->g_782.s3", print_hash_value);
    transparent_crc(p_849->g_782.s4, "p_849->g_782.s4", print_hash_value);
    transparent_crc(p_849->g_782.s5, "p_849->g_782.s5", print_hash_value);
    transparent_crc(p_849->g_782.s6, "p_849->g_782.s6", print_hash_value);
    transparent_crc(p_849->g_782.s7, "p_849->g_782.s7", print_hash_value);
    transparent_crc(p_849->g_797.x, "p_849->g_797.x", print_hash_value);
    transparent_crc(p_849->g_797.y, "p_849->g_797.y", print_hash_value);
    transparent_crc(p_849->g_797.z, "p_849->g_797.z", print_hash_value);
    transparent_crc(p_849->g_797.w, "p_849->g_797.w", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_849->g_808[i][j].f0, "p_849->g_808[i][j].f0", print_hash_value);
            transparent_crc(p_849->g_808[i][j].f1, "p_849->g_808[i][j].f1", print_hash_value);
            transparent_crc(p_849->g_808[i][j].f2, "p_849->g_808[i][j].f2", print_hash_value);
            transparent_crc(p_849->g_808[i][j].f3, "p_849->g_808[i][j].f3", print_hash_value);
            transparent_crc(p_849->g_808[i][j].f4, "p_849->g_808[i][j].f4", print_hash_value);
            transparent_crc(p_849->g_808[i][j].f5, "p_849->g_808[i][j].f5", print_hash_value);
            transparent_crc(p_849->g_808[i][j].f6, "p_849->g_808[i][j].f6", print_hash_value);
            transparent_crc(p_849->g_808[i][j].f7, "p_849->g_808[i][j].f7", print_hash_value);
            transparent_crc(p_849->g_808[i][j].f8, "p_849->g_808[i][j].f8", print_hash_value);
            transparent_crc(p_849->g_808[i][j].f9, "p_849->g_808[i][j].f9", print_hash_value);

        }
    }
    transparent_crc(p_849->g_820.s0, "p_849->g_820.s0", print_hash_value);
    transparent_crc(p_849->g_820.s1, "p_849->g_820.s1", print_hash_value);
    transparent_crc(p_849->g_820.s2, "p_849->g_820.s2", print_hash_value);
    transparent_crc(p_849->g_820.s3, "p_849->g_820.s3", print_hash_value);
    transparent_crc(p_849->g_820.s4, "p_849->g_820.s4", print_hash_value);
    transparent_crc(p_849->g_820.s5, "p_849->g_820.s5", print_hash_value);
    transparent_crc(p_849->g_820.s6, "p_849->g_820.s6", print_hash_value);
    transparent_crc(p_849->g_820.s7, "p_849->g_820.s7", print_hash_value);
    transparent_crc(p_849->g_825.x, "p_849->g_825.x", print_hash_value);
    transparent_crc(p_849->g_825.y, "p_849->g_825.y", print_hash_value);
    transparent_crc(p_849->g_826.s0, "p_849->g_826.s0", print_hash_value);
    transparent_crc(p_849->g_826.s1, "p_849->g_826.s1", print_hash_value);
    transparent_crc(p_849->g_826.s2, "p_849->g_826.s2", print_hash_value);
    transparent_crc(p_849->g_826.s3, "p_849->g_826.s3", print_hash_value);
    transparent_crc(p_849->g_826.s4, "p_849->g_826.s4", print_hash_value);
    transparent_crc(p_849->g_826.s5, "p_849->g_826.s5", print_hash_value);
    transparent_crc(p_849->g_826.s6, "p_849->g_826.s6", print_hash_value);
    transparent_crc(p_849->g_826.s7, "p_849->g_826.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_849->g_841[i][j], "p_849->g_841[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_849->g_842, "p_849->g_842", print_hash_value);
    transparent_crc(p_849->v_collective, "p_849->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 49; i++)
            transparent_crc(p_849->l_special_values[i], "p_849->l_special_values[i]", print_hash_value);
    transparent_crc(p_849->l_comm_values[get_linear_local_id()], "p_849->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_849->g_comm_values[get_linear_group_id() * 90 + get_linear_local_id()], "p_849->g_comm_values[get_linear_group_id() * 90 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
