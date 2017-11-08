// --atomics 33 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 11,25,11 -l 11,1,1
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

__constant uint32_t permutations[10][11] = {
{1,9,3,8,4,0,2,5,6,7,10}, // permutation 0
{1,10,2,6,5,4,8,3,7,9,0}, // permutation 1
{7,10,0,6,9,3,8,1,2,4,5}, // permutation 2
{5,10,2,6,0,8,9,3,7,1,4}, // permutation 3
{5,3,0,10,9,4,1,2,6,8,7}, // permutation 4
{1,4,7,10,5,2,8,3,0,6,9}, // permutation 5
{4,0,2,5,3,1,7,6,10,8,9}, // permutation 6
{1,2,5,8,3,4,7,6,9,0,10}, // permutation 7
{5,9,6,2,8,3,10,4,0,7,1}, // permutation 8
{3,0,9,4,7,6,1,2,8,10,5} // permutation 9
};

// Seed: 3366529064

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   volatile uint8_t  f1;
   int64_t  f2;
   volatile int32_t  f3;
   volatile uint16_t  f4;
   volatile int32_t  f5;
   volatile uint8_t  f6;
   uint32_t  f7;
};

struct S1 {
   int64_t  f0;
};

struct S2 {
   struct S0  f0;
};

struct S3 {
   volatile uint32_t  f0;
};

struct S4 {
   int8_t  f0;
   uint64_t  f1;
   int32_t  f2;
};

struct S5 {
    int32_t g_10;
    int32_t *g_9[6];
    int32_t g_13;
    int32_t g_28;
    int32_t * volatile g_59[1];
    int32_t g_62;
    int32_t * volatile g_61;
    struct S2 g_80;
    volatile int32_t *g_120;
    volatile int32_t **g_119;
    struct S2 ** volatile g_123;
    volatile struct S3 g_127;
    volatile VECTOR(uint8_t, 4) g_130;
    VECTOR(uint64_t, 16) g_149;
    int16_t g_151[6];
    uint64_t g_152;
    struct S0 *g_172;
    struct S0 ** volatile g_171[2][2][3];
    volatile VECTOR(uint64_t, 2) g_181;
    VECTOR(int32_t, 16) g_191;
    VECTOR(uint8_t, 8) g_206;
    uint32_t g_214[7];
    int32_t g_217;
    VECTOR(int8_t, 16) g_235;
    volatile struct S3 g_252;
    volatile struct S3 g_271[8];
    struct S2 *g_291[10][9][2];
    struct S2 **g_290;
    struct S2 ***g_289;
    volatile struct S0 g_304;
    volatile struct S0 * volatile g_303;
    volatile struct S0 * volatile *g_302;
    int32_t ** volatile g_312[1];
    int8_t g_338;
    struct S1 g_345;
    int8_t g_358;
    int32_t g_360;
    volatile VECTOR(int16_t, 16) g_367;
    struct S4 g_379;
    struct S0 g_403;
    VECTOR(int32_t, 8) g_421;
    struct S3 g_432;
    uint32_t g_459;
    uint8_t *g_462;
    VECTOR(int8_t, 2) g_485;
    VECTOR(int16_t, 8) g_493;
    volatile struct S3 g_498;
    VECTOR(int32_t, 16) g_524;
    int32_t ** volatile g_529[2];
    uint16_t g_585;
    VECTOR(uint16_t, 16) g_597;
    struct S2 ****g_612;
    struct S2 ****g_614[4][6][1];
    volatile struct S0 g_634;
    volatile struct S1 g_647;
    volatile struct S1 *g_646;
    volatile struct S1 **g_645;
    int32_t ** volatile g_650;
    volatile VECTOR(uint16_t, 16) g_681;
    struct S2 g_704[6];
    struct S2 g_705[3][2];
    int32_t ** volatile g_767;
    volatile struct S3 ** volatile g_768;
    int32_t **g_774[2];
    uint64_t *g_784;
    uint64_t **g_783[3];
    uint64_t *** volatile g_782;
    VECTOR(uint8_t, 4) g_803;
    VECTOR(uint8_t, 4) g_813;
    VECTOR(uint16_t, 4) g_879;
    int32_t ** volatile g_885;
    int8_t g_904;
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
int64_t  func_1(struct S5 * p_908);
int32_t * func_2(struct S1  p_3, int32_t * p_4, int32_t  p_5, uint16_t  p_6, int32_t * p_7, struct S5 * p_908);
int32_t * func_15(int32_t  p_16, struct S5 * p_908);
int32_t  func_17(struct S1  p_18, int32_t * p_19, struct S5 * p_908);
int32_t ** func_63(uint32_t  p_64, struct S5 * p_908);
uint8_t  func_67(uint32_t  p_68, int64_t  p_69, int32_t  p_70, int64_t  p_71, struct S5 * p_908);
int16_t  func_74(uint32_t  p_75, struct S2 * p_76, struct S5 * p_908);
int32_t * func_84(struct S1  p_85, int32_t  p_86, int8_t  p_87, uint32_t  p_88, uint64_t  p_89, struct S5 * p_908);
uint32_t  func_109(uint32_t  p_110, struct S5 * p_908);
int16_t  func_115(int32_t ** p_116, struct S5 * p_908);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_908->g_9 p_908->l_comm_values p_908->g_10 p_908->g_28 p_908->g_61 p_908->g_62 p_908->g_80.f0.f6 p_908->g_119 p_908->g_13 p_908->g_127 p_908->g_130 p_908->g_217 p_908->g_80.f0.f0 p_908->g_149 p_908->g_151 p_908->g_206 p_908->g_271 p_908->g_214 p_908->g_302 p_908->g_191 p_908->g_338 p_908->g_367 p_908->g_379 p_908->g_345 p_908->g_152 p_908->g_80.f0.f4 p_908->g_80.f0.f7 p_908->g_459 p_908->g_462 p_908->g_304.f6 p_908->g_360 p_908->g_421 p_908->g_498 p_908->g_181 p_908->g_403.f0 p_908->g_585 p_908->g_493 p_908->g_252 p_908->g_597 p_908->g_634 p_908->g_645 p_908->g_650 p_908->g_290 p_908->g_403 p_908->g_235 p_908->g_704 p_908->g_524 p_908->g_647.f0 p_908->g_80.f0.f2 p_908->g_767 p_908->g_774 p_908->g_782 p_908->g_803 p_908->g_813 p_908->g_304.f0 p_908->g_879
 * writes: p_908->g_13 p_908->g_10 p_908->g_28 p_908->g_62 p_908->g_80.f0.f0 p_908->g_80.f0.f7 p_908->g_9 p_908->g_119 p_908->g_151 p_908->g_152 p_908->g_80.f0.f2 p_908->g_217 p_908->g_214 p_908->g_235 p_908->g_338 p_908->g_206 p_908->g_379.f0 p_908->g_459 p_908->g_432 p_908->g_585 p_908->g_612 p_908->g_614 p_908->g_149 p_908->g_291 p_908->g_379.f1 p_908->g_705 p_908->g_783 p_908->g_403.f7 p_908->g_358 p_908->g_379.f2 p_908->g_879 p_908->g_774
 */
int64_t  func_1(struct S5 * p_908)
{ /* block id: 4 */
    struct S1 l_8 = {0x4E96B779C63C4078L};
    uint32_t l_11 = 0x5F07C70AL;
    int32_t *l_12 = &p_908->g_13;
    int32_t l_14 = 4L;
    int32_t **l_886 = &p_908->g_9[1];
    int32_t l_903[7][5][2] = {{{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL}},{{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL}},{{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL}},{{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL}},{{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL}},{{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL}},{{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL},{0x591FB2EEL,0x591FB2EEL}}};
    int i, j, k;
    (*l_886) = func_2(l_8, p_908->g_9[1], (l_14 |= ((*l_12) = l_11)), l_11, (p_908->l_comm_values[(safe_mod_func_uint32_t_u_u(p_908->tid, 11))] , func_15((p_908->g_10 == l_11), p_908)), p_908);
    for (p_908->g_379.f0 = 0; (p_908->g_379.f0 == 4); ++p_908->g_379.f0)
    { /* block id: 425 */
        int32_t *l_889 = &p_908->g_62;
        int32_t *l_890 = (void*)0;
        int32_t *l_891 = (void*)0;
        int32_t *l_892 = &p_908->g_360;
        int32_t *l_893 = &p_908->g_28;
        int32_t *l_894 = &p_908->g_360;
        int32_t *l_895 = (void*)0;
        int32_t *l_896 = &p_908->g_360;
        int32_t *l_897 = (void*)0;
        int32_t *l_898 = &p_908->g_62;
        int32_t *l_899 = &p_908->g_62;
        int32_t *l_900 = (void*)0;
        int32_t *l_901 = &p_908->g_62;
        int32_t *l_902[1][4][8];
        uint32_t l_905 = 4294967295UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 8; k++)
                    l_902[i][j][k] = &p_908->g_360;
            }
        }
        (*l_886) = l_889;
        --l_905;
    }
    return p_908->g_191.sa;
}


/* ------------------------------------------ */
/* 
 * reads : p_908->g_28 p_908->g_10 p_908->l_comm_values p_908->g_80.f0.f6 p_908->g_62 p_908->g_61 p_908->g_119 p_908->g_13 p_908->g_127 p_908->g_130 p_908->g_217 p_908->g_80.f0.f0 p_908->g_149 p_908->g_151 p_908->g_206 p_908->g_271 p_908->g_214 p_908->g_302 p_908->g_191 p_908->g_338 p_908->g_367 p_908->g_379 p_908->g_345 p_908->g_152 p_908->g_80.f0.f4 p_908->g_80.f0.f7 p_908->g_459 p_908->g_462 p_908->g_304.f6 p_908->g_360 p_908->g_421 p_908->g_498 p_908->g_181 p_908->g_403.f0 p_908->g_585 p_908->g_493 p_908->g_252 p_908->g_597 p_908->g_634 p_908->g_645 p_908->g_650 p_908->g_290 p_908->g_403 p_908->g_235 p_908->g_704 p_908->g_524 p_908->g_647.f0 p_908->g_80.f0.f2 p_908->g_767 p_908->g_774 p_908->g_9 p_908->g_782 p_908->g_803 p_908->g_813 p_908->g_304.f0 p_908->g_879
 * writes: p_908->g_10 p_908->g_28 p_908->g_80.f0.f0 p_908->g_80.f0.f7 p_908->g_9 p_908->g_62 p_908->g_119 p_908->g_151 p_908->g_152 p_908->g_80.f0.f2 p_908->g_217 p_908->g_214 p_908->g_235 p_908->g_338 p_908->g_206 p_908->g_379.f0 p_908->g_459 p_908->g_432 p_908->g_585 p_908->g_612 p_908->g_614 p_908->g_149 p_908->g_291 p_908->g_379.f1 p_908->g_705 p_908->g_783 p_908->g_403.f7 p_908->g_358 p_908->g_13 p_908->g_379.f2 p_908->g_879 p_908->g_774
 */
int32_t * func_2(struct S1  p_3, int32_t * p_4, int32_t  p_5, uint16_t  p_6, int32_t * p_7, struct S5 * p_908)
{ /* block id: 38 */
    struct S1 l_77 = {1L};
    int32_t *l_78[2];
    struct S2 *l_79[9][6][4] = {{{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80}},{{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80}},{{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80}},{{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80}},{{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80}},{{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80}},{{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80}},{{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80}},{{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80},{(void*)0,(void*)0,(void*)0,&p_908->g_80}}};
    uint32_t *l_316 = &p_908->g_214[3];
    int32_t ***l_882 = &p_908->g_774[1];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_78[i] = &p_908->g_13;
    (*l_882) = func_63((safe_add_func_uint8_t_u_u(func_67(((*l_316) = (p_6 , (p_3.f0 ^ ((VECTOR(int8_t, 4))((safe_rshift_func_int16_t_s_s(1L, func_74(func_17(l_77, l_78[0], p_908), l_79[5][2][1], p_908))), ((safe_sub_func_int64_t_s_s(0x78BF4BCD085BA993L, 0x0EE2D9756EE14F3BL)) > p_908->g_149.s3), 9L, (-6L))).w))), l_77.f0, l_77.f0, l_77.f0, p_908), p_908->g_403.f2)), p_908);
    for (p_6 = 0; (p_6 < 51); p_6++)
    { /* block id: 418 */
        return l_78[0];
    }
    return p_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_908->g_10 p_908->g_28 p_908->g_61 p_908->g_62
 * writes: p_908->g_10 p_908->g_28 p_908->g_62
 */
int32_t * func_15(int32_t  p_16, struct S5 * p_908)
{ /* block id: 7 */
    struct S1 l_20 = {-1L};
    int32_t *l_21 = (void*)0;
    (*p_908->g_61) ^= func_17(l_20, l_21, p_908);
    return &p_908->g_62;
}


/* ------------------------------------------ */
/* 
 * reads : p_908->g_10 p_908->g_28
 * writes: p_908->g_10 p_908->g_28
 */
int32_t  func_17(struct S1  p_18, int32_t * p_19, struct S5 * p_908)
{ /* block id: 8 */
    uint32_t l_29 = 4294967289UL;
    int32_t *l_60 = &p_908->g_10;
    for (p_18.f0 = 0; (p_18.f0 <= 13); p_18.f0 = safe_add_func_uint32_t_u_u(p_18.f0, 2))
    { /* block id: 11 */
        for (p_908->g_10 = 0; (p_908->g_10 > 1); p_908->g_10 = safe_add_func_int8_t_s_s(p_908->g_10, 5))
        { /* block id: 14 */
            int32_t *l_26 = (void*)0;
            int32_t *l_27 = &p_908->g_28;
            (*l_27) |= 0x55228033L;
        }
    }
    l_29 = p_18.f0;
    if ((atomic_inc(&p_908->g_atomic_input[33 * get_linear_group_id() + 1]) == 3))
    { /* block id: 20 */
        int32_t l_30 = 1L;
        int32_t l_31 = (-1L);
        uint32_t l_32 = 0x0F1FA6F6L;
        int16_t l_33[3][10][8] = {{{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L}},{{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L}},{{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L},{1L,(-4L),(-2L),(-1L),(-3L),0x533DL,0x3132L,0x11F6L}}};
        uint16_t l_34[4];
        uint32_t l_35 = 1UL;
        int32_t l_36[6] = {0x7C2923F8L,0x0E5C5CC9L,0x7C2923F8L,0x7C2923F8L,0x0E5C5CC9L,0x7C2923F8L};
        VECTOR(int32_t, 4) l_37 = (VECTOR(int32_t, 4))(0x0B252307L, (VECTOR(int32_t, 2))(0x0B252307L, 0x667B33DFL), 0x667B33DFL);
        struct S4 l_38 = {-1L,0xE57C1F20CF68020CL,-10L};
        int64_t l_39 = 0x24791A13C53D1739L;
        VECTOR(int16_t, 8) l_40 = (VECTOR(int16_t, 8))(0x360AL, (VECTOR(int16_t, 4))(0x360AL, (VECTOR(int16_t, 2))(0x360AL, 0x7078L), 0x7078L), 0x7078L, 0x360AL, 0x7078L);
        VECTOR(int16_t, 8) l_41 = (VECTOR(int16_t, 8))(0x5735L, (VECTOR(int16_t, 4))(0x5735L, (VECTOR(int16_t, 2))(0x5735L, 0x52E9L), 0x52E9L), 0x52E9L, 0x5735L, 0x52E9L);
        VECTOR(int16_t, 16) l_42 = (VECTOR(int16_t, 16))(0x0F65L, (VECTOR(int16_t, 4))(0x0F65L, (VECTOR(int16_t, 2))(0x0F65L, (-8L)), (-8L)), (-8L), 0x0F65L, (-8L), (VECTOR(int16_t, 2))(0x0F65L, (-8L)), (VECTOR(int16_t, 2))(0x0F65L, (-8L)), 0x0F65L, (-8L), 0x0F65L, (-8L));
        VECTOR(int16_t, 8) l_43 = (VECTOR(int16_t, 8))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0x29F8L), 0x29F8L), 0x29F8L, 3L, 0x29F8L);
        VECTOR(int16_t, 2) l_44 = (VECTOR(int16_t, 2))(1L, 0x6B66L);
        struct S1 l_45 = {0x1526DE3FE27FCE2EL};
        int64_t l_46 = 0x15E1C378916A7153L;
        VECTOR(int16_t, 4) l_47 = (VECTOR(int16_t, 4))(0x0724L, (VECTOR(int16_t, 2))(0x0724L, 0x177EL), 0x177EL);
        VECTOR(int16_t, 2) l_48 = (VECTOR(int16_t, 2))(0L, 0x7E6DL);
        int16_t l_49 = (-1L);
        uint8_t l_50 = 0xD3L;
        int32_t l_51 = 4L;
        int32_t l_52 = 1L;
        int64_t l_53 = 0x53DFDFBAD2945289L;
        uint16_t l_54 = 0xA34DL;
        int16_t l_55[10][7][3] = {{{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)}},{{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)}},{{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)}},{{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)}},{{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)}},{{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)}},{{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)}},{{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)}},{{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)}},{{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)},{(-1L),0L,(-3L)}}};
        struct S2 *l_56 = (void*)0;
        struct S2 l_58 = {{-7L,0x82L,0x00E56630802EBDDEL,0x6780F4AAL,5UL,0x5AEE60D3L,0x7FL,0x911A91DCL}};/* VOLATILE GLOBAL l_58 */
        struct S2 *l_57 = &l_58;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_34[i] = 4UL;
        l_31 = l_30;
        l_55[5][6][1] ^= (l_54 = (l_32 , (((l_36[3] |= (l_35 |= (l_33[2][4][0] , l_34[3]))) , (l_38 = (((VECTOR(int32_t, 8))(l_37.yzwzwwwx)).s5 , l_38))) , (l_53 = ((l_39 , ((VECTOR(uint16_t, 4))(0x29A3L, ((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 16))(0x731BL, ((VECTOR(int16_t, 8))(0x31AAL, ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(l_40.s4374666405514671)), ((VECTOR(int16_t, 2))(1L, 0x07E9L)).xyxyyxyxyxyyyxxy, ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_41.s25)))).yxyy)))))))).wxwwyxxy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(l_42.s19d8d777)), ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(l_43.s51624522)).s11, ((VECTOR(int16_t, 2))(l_44.yy))))).yyxyxyyx))).s3313427270403027, (int16_t)0x0F5CL, (int16_t)(l_45 , (l_44.x = l_46))))).seb)).xxxxyxxy))).even, ((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 4))(0x1D3DL, ((VECTOR(int16_t, 2))(l_47.yz)), 0L)).xwyyxwywxywwwzzw, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_48.xy)).yxyyxyxyxxxyxxxy)).sa4)).yxyxxxxyxyyyyxxx)), ((VECTOR(int16_t, 2))(1L, 1L)).yyxxyyyxyxxyxxyy))).sb63b))).wwwywwyxzyxwwyxw))).s9a, (int16_t)(l_50 = l_49)))), ((VECTOR(int16_t, 4))(0L)), 4L)), 6L, l_51, ((VECTOR(int16_t, 2))(2L)), 3L, 0x2A3AL, 0x7738L)).s0a))), 0UL)).x) , l_52)))));
        l_57 = l_56;
        unsigned int result = 0;
        result += l_30;
        result += l_31;
        result += l_32;
        int l_33_i0, l_33_i1, l_33_i2;
        for (l_33_i0 = 0; l_33_i0 < 3; l_33_i0++) {
            for (l_33_i1 = 0; l_33_i1 < 10; l_33_i1++) {
                for (l_33_i2 = 0; l_33_i2 < 8; l_33_i2++) {
                    result += l_33[l_33_i0][l_33_i1][l_33_i2];
                }
            }
        }
        int l_34_i0;
        for (l_34_i0 = 0; l_34_i0 < 4; l_34_i0++) {
            result += l_34[l_34_i0];
        }
        result += l_35;
        int l_36_i0;
        for (l_36_i0 = 0; l_36_i0 < 6; l_36_i0++) {
            result += l_36[l_36_i0];
        }
        result += l_37.w;
        result += l_37.z;
        result += l_37.y;
        result += l_37.x;
        result += l_38.f0;
        result += l_38.f1;
        result += l_38.f2;
        result += l_39;
        result += l_40.s7;
        result += l_40.s6;
        result += l_40.s5;
        result += l_40.s4;
        result += l_40.s3;
        result += l_40.s2;
        result += l_40.s1;
        result += l_40.s0;
        result += l_41.s7;
        result += l_41.s6;
        result += l_41.s5;
        result += l_41.s4;
        result += l_41.s3;
        result += l_41.s2;
        result += l_41.s1;
        result += l_41.s0;
        result += l_42.sf;
        result += l_42.se;
        result += l_42.sd;
        result += l_42.sc;
        result += l_42.sb;
        result += l_42.sa;
        result += l_42.s9;
        result += l_42.s8;
        result += l_42.s7;
        result += l_42.s6;
        result += l_42.s5;
        result += l_42.s4;
        result += l_42.s3;
        result += l_42.s2;
        result += l_42.s1;
        result += l_42.s0;
        result += l_43.s7;
        result += l_43.s6;
        result += l_43.s5;
        result += l_43.s4;
        result += l_43.s3;
        result += l_43.s2;
        result += l_43.s1;
        result += l_43.s0;
        result += l_44.y;
        result += l_44.x;
        result += l_45.f0;
        result += l_46;
        result += l_47.w;
        result += l_47.z;
        result += l_47.y;
        result += l_47.x;
        result += l_48.y;
        result += l_48.x;
        result += l_49;
        result += l_50;
        result += l_51;
        result += l_52;
        result += l_53;
        result += l_54;
        int l_55_i0, l_55_i1, l_55_i2;
        for (l_55_i0 = 0; l_55_i0 < 10; l_55_i0++) {
            for (l_55_i1 = 0; l_55_i1 < 7; l_55_i1++) {
                for (l_55_i2 = 0; l_55_i2 < 3; l_55_i2++) {
                    result += l_55[l_55_i0][l_55_i1][l_55_i2];
                }
            }
        }
        result += l_58.f0.f0;
        result += l_58.f0.f1;
        result += l_58.f0.f2;
        result += l_58.f0.f3;
        result += l_58.f0.f4;
        result += l_58.f0.f5;
        result += l_58.f0.f6;
        result += l_58.f0.f7;
        atomic_add(&p_908->g_special_values[33 * get_linear_group_id() + 1], result);
    }
    else
    { /* block id: 31 */
        (1 + 1);
    }
    (*l_60) &= (p_908->g_28 > p_18.f0);
    return p_18.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_908->g_524 p_908->g_62 p_908->g_647.f0 p_908->g_585 p_908->g_80.f0.f2 p_908->g_206 p_908->g_704.f0.f7 p_908->g_367 p_908->g_767 p_908->g_774 p_908->g_650 p_908->g_9 p_908->g_782 p_908->g_403.f7 p_908->g_80.f0.f7 p_908->g_379.f0 p_908->g_61 p_908->g_803 p_908->g_813 p_908->g_151 p_908->g_379.f1 p_908->g_28 p_908->g_10 p_908->g_498.f0 p_908->g_379.f2 p_908->g_304.f0 p_908->g_459 p_908->g_879
 * writes: p_908->g_62 p_908->g_585 p_908->g_206 p_908->g_9 p_908->g_783 p_908->g_403.f7 p_908->g_80.f0.f7 p_908->g_379.f0 p_908->g_152 p_908->g_358 p_908->g_28 p_908->g_13 p_908->g_10 p_908->g_379.f2 p_908->g_879
 */
int32_t ** func_63(uint32_t  p_64, struct S5 * p_908)
{ /* block id: 323 */
    int8_t *l_708 = (void*)0;
    int8_t **l_709 = &l_708;
    int8_t *l_711 = &p_908->g_338;
    int8_t **l_710 = &l_711;
    int32_t l_712 = 0x7E97FC89L;
    int8_t l_747 = 0x3DL;
    int32_t l_760 = 0x526AEAABL;
    volatile struct S3 *l_769 = &p_908->g_271[5];
    struct S2 *l_776 = (void*)0;
    int32_t *l_873 = &p_908->g_10;
    int32_t *l_874 = &p_908->g_360;
    int32_t *l_875 = &p_908->g_360;
    int32_t *l_876[6];
    int32_t l_877 = (-4L);
    int32_t l_878 = 9L;
    int i;
    for (i = 0; i < 6; i++)
        l_876[i] = (void*)0;
    if ((safe_lshift_func_int16_t_s_u((p_908->g_524.sc > (((*l_709) = l_708) == ((*l_710) = &p_908->g_358))), l_712)))
    { /* block id: 326 */
        VECTOR(uint16_t, 8) l_715 = (VECTOR(uint16_t, 8))(0x57EFL, (VECTOR(uint16_t, 4))(0x57EFL, (VECTOR(uint16_t, 2))(0x57EFL, 65534UL), 65534UL), 65534UL, 0x57EFL, 65534UL);
        int32_t l_761 = 1L;
        int32_t **l_775[3];
        int i;
        for (i = 0; i < 3; i++)
            l_775[i] = (void*)0;
        for (p_908->g_62 = 0; (p_908->g_62 >= 25); p_908->g_62++)
        { /* block id: 329 */
            uint16_t *l_716 = &p_908->g_585;
            int32_t *l_717[6];
            uint8_t *l_734 = (void*)0;
            uint8_t *l_735 = (void*)0;
            uint8_t *l_736 = (void*)0;
            uint8_t *l_737 = (void*)0;
            uint8_t *l_738 = (void*)0;
            uint8_t *l_739 = (void*)0;
            uint8_t *l_740 = (void*)0;
            uint8_t *l_741 = (void*)0;
            uint8_t *l_742 = (void*)0;
            uint8_t *l_743 = (void*)0;
            struct S2 ****l_746 = &p_908->g_289;
            int64_t l_762[1];
            int i;
            for (i = 0; i < 6; i++)
                l_717[i] = &p_908->g_379.f2;
            for (i = 0; i < 1; i++)
                l_762[i] = 0x06AAA01F182F7D76L;
            l_712 &= (p_64 <= ((*l_716) &= (p_908->g_647.f0 , ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_715.s37)))), 0UL, 65530UL)).w)));
            if ((safe_rshift_func_uint16_t_u_s((&p_64 != (void*)0), (safe_sub_func_int32_t_s_s(((((((safe_add_func_int8_t_s_s(p_908->g_80.f0.f2, (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((void*)0 == &p_64), 9)), (safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((-9L), (--p_908->g_206.s5))), 13)), p_908->g_704[3].f0.f7)))))) <= (&p_908->g_289 != l_746)) ^ l_712) && 0x1826ED3DL) != l_715.s7) , p_64), p_908->g_367.sd)))))
            { /* block id: 333 */
                int64_t l_748 = 0x6EF1752D074A6F42L;
                int32_t l_759[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_759[i] = 0x4F749E2DL;
                l_748 = l_747;
                for (p_908->g_585 = 0; (p_908->g_585 != 27); p_908->g_585++)
                { /* block id: 337 */
                    uint32_t l_763 = 0x624F5F68L;
                    int32_t *l_766 = &l_760;
                    if ((atomic_inc(&p_908->l_atomic_input[30]) == 4))
                    { /* block id: 339 */
                        int32_t l_751[4][9][1] = {{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}}};
                        uint16_t l_752[6][4] = {{0x71B0L,0x741CL,0x71B0L,0x71B0L},{0x71B0L,0x741CL,0x71B0L,0x71B0L},{0x71B0L,0x741CL,0x71B0L,0x71B0L},{0x71B0L,0x741CL,0x71B0L,0x71B0L},{0x71B0L,0x741CL,0x71B0L,0x71B0L},{0x71B0L,0x741CL,0x71B0L,0x71B0L}};
                        uint8_t l_753[9][6][4] = {{{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L}},{{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L}},{{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L}},{{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L}},{{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L}},{{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L}},{{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L}},{{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L}},{{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L},{0x2CL,0x89L,0xEEL,0xC9L}}};
                        uint8_t l_754 = 0x65L;
                        int8_t l_755[7] = {0x22L,0x22L,0x22L,0x22L,0x22L,0x22L,0x22L};
                        uint32_t l_756 = 0xE11D9F6CL;
                        int i, j, k;
                        l_752[0][2] ^= l_751[2][5][0];
                        l_753[8][0][3] ^= 4L;
                        l_755[4] = l_754;
                        ++l_756;
                        unsigned int result = 0;
                        int l_751_i0, l_751_i1, l_751_i2;
                        for (l_751_i0 = 0; l_751_i0 < 4; l_751_i0++) {
                            for (l_751_i1 = 0; l_751_i1 < 9; l_751_i1++) {
                                for (l_751_i2 = 0; l_751_i2 < 1; l_751_i2++) {
                                    result += l_751[l_751_i0][l_751_i1][l_751_i2];
                                }
                            }
                        }
                        int l_752_i0, l_752_i1;
                        for (l_752_i0 = 0; l_752_i0 < 6; l_752_i0++) {
                            for (l_752_i1 = 0; l_752_i1 < 4; l_752_i1++) {
                                result += l_752[l_752_i0][l_752_i1];
                            }
                        }
                        int l_753_i0, l_753_i1, l_753_i2;
                        for (l_753_i0 = 0; l_753_i0 < 9; l_753_i0++) {
                            for (l_753_i1 = 0; l_753_i1 < 6; l_753_i1++) {
                                for (l_753_i2 = 0; l_753_i2 < 4; l_753_i2++) {
                                    result += l_753[l_753_i0][l_753_i1][l_753_i2];
                                }
                            }
                        }
                        result += l_754;
                        int l_755_i0;
                        for (l_755_i0 = 0; l_755_i0 < 7; l_755_i0++) {
                            result += l_755[l_755_i0];
                        }
                        result += l_756;
                        atomic_add(&p_908->l_special_values[30], result);
                    }
                    else
                    { /* block id: 344 */
                        (1 + 1);
                    }
                    --l_763;
                    (*p_908->g_767) = l_766;
                }
            }
            else
            { /* block id: 350 */
                uint32_t l_772 = 0x73B23285L;
                int32_t l_773[4][9] = {{0x393E32AFL,(-10L),0x2E74CF1FL,(-10L),0x393E32AFL,0x393E32AFL,(-10L),0x2E74CF1FL,(-10L)},{0x393E32AFL,(-10L),0x2E74CF1FL,(-10L),0x393E32AFL,0x393E32AFL,(-10L),0x2E74CF1FL,(-10L)},{0x393E32AFL,(-10L),0x2E74CF1FL,(-10L),0x393E32AFL,0x393E32AFL,(-10L),0x2E74CF1FL,(-10L)},{0x393E32AFL,(-10L),0x2E74CF1FL,(-10L),0x393E32AFL,0x393E32AFL,(-10L),0x2E74CF1FL,(-10L)}};
                int i, j;
                l_769 = &p_908->g_252;
                l_773[2][4] |= ((l_712 = (safe_add_func_uint64_t_u_u((p_64 < l_760), l_761))) >= l_772);
                return p_908->g_774[1];
            }
        }
        return l_775[1];
    }
    else
    { /* block id: 358 */
        int8_t l_777 = (-1L);
        int32_t l_808 = 1L;
        VECTOR(int8_t, 4) l_812 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x2FL), 0x2FL);
        int64_t l_824 = 0x4463B15B9762A74CL;
        int32_t l_868[4] = {9L,9L,9L,9L};
        int32_t *l_872 = &p_908->g_217;
        int32_t **l_871 = &l_872;
        int i;
        l_776 = l_776;
        if (l_777)
        { /* block id: 360 */
            int32_t **l_778 = (void*)0;
            int32_t **l_779 = &p_908->g_9[1];
            uint64_t *l_781 = (void*)0;
            uint64_t **l_780 = &l_781;
            VECTOR(int8_t, 8) l_811 = (VECTOR(int8_t, 8))(0x29L, (VECTOR(int8_t, 4))(0x29L, (VECTOR(int8_t, 2))(0x29L, 0x6FL), 0x6FL), 0x6FL, 0x29L, 0x6FL);
            VECTOR(int8_t, 2) l_869 = (VECTOR(int8_t, 2))(0x44L, 9L);
            int i;
            (*l_779) = (*p_908->g_650);
            (*p_908->g_782) = l_780;
            for (p_908->g_403.f7 = 0; (p_908->g_403.f7 != 27); ++p_908->g_403.f7)
            { /* block id: 365 */
                uint8_t l_802 = 0x81L;
                uint16_t *l_805 = (void*)0;
                uint16_t **l_804[6] = {&l_805,&l_805,&l_805,&l_805,&l_805,&l_805};
                int32_t l_825 = 0L;
                uint32_t l_870 = 0xF068F140L;
                int i;
                for (p_908->g_80.f0.f7 = 0; (p_908->g_80.f0.f7 != 50); p_908->g_80.f0.f7++)
                { /* block id: 368 */
                    uint8_t l_822 = 0x56L;
                    int32_t l_842[4][4];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_842[i][j] = 0x22C80D95L;
                    }
                    if ((atomic_inc(&p_908->g_atomic_input[33 * get_linear_group_id() + 14]) == 4))
                    { /* block id: 370 */
                        int64_t l_789 = 0x4DA3A8B3826D3323L;
                        uint32_t l_790[6][9][4] = {{{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL}},{{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL}},{{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL}},{{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL}},{{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL}},{{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL},{0xC4911876L,0xD5157460L,0xE6BE5B11L,4294967287UL}}};
                        VECTOR(uint16_t, 16) l_791 = (VECTOR(uint16_t, 16))(0xBB1AL, (VECTOR(uint16_t, 4))(0xBB1AL, (VECTOR(uint16_t, 2))(0xBB1AL, 0xDD00L), 0xDD00L), 0xDD00L, 0xBB1AL, 0xDD00L, (VECTOR(uint16_t, 2))(0xBB1AL, 0xDD00L), (VECTOR(uint16_t, 2))(0xBB1AL, 0xDD00L), 0xBB1AL, 0xDD00L, 0xBB1AL, 0xDD00L);
                        int i, j, k;
                        l_791.s1 |= (l_790[3][7][0] = l_789);
                        unsigned int result = 0;
                        result += l_789;
                        int l_790_i0, l_790_i1, l_790_i2;
                        for (l_790_i0 = 0; l_790_i0 < 6; l_790_i0++) {
                            for (l_790_i1 = 0; l_790_i1 < 9; l_790_i1++) {
                                for (l_790_i2 = 0; l_790_i2 < 4; l_790_i2++) {
                                    result += l_790[l_790_i0][l_790_i1][l_790_i2];
                                }
                            }
                        }
                        result += l_791.sf;
                        result += l_791.se;
                        result += l_791.sd;
                        result += l_791.sc;
                        result += l_791.sb;
                        result += l_791.sa;
                        result += l_791.s9;
                        result += l_791.s8;
                        result += l_791.s7;
                        result += l_791.s6;
                        result += l_791.s5;
                        result += l_791.s4;
                        result += l_791.s3;
                        result += l_791.s2;
                        result += l_791.s1;
                        result += l_791.s0;
                        atomic_add(&p_908->g_special_values[33 * get_linear_group_id() + 14], result);
                    }
                    else
                    { /* block id: 373 */
                        (1 + 1);
                    }
                    for (p_908->g_379.f0 = 0; (p_908->g_379.f0 > (-19)); p_908->g_379.f0 = safe_sub_func_uint64_t_u_u(p_908->g_379.f0, 8))
                    { /* block id: 378 */
                        uint16_t ***l_806 = (void*)0;
                        uint16_t ***l_807 = &l_804[1];
                        uint64_t *l_818 = (void*)0;
                        uint64_t *l_819 = &p_908->g_152;
                        int32_t l_823 = 0x381F42CEL;
                        int32_t *l_834 = (void*)0;
                        int32_t *l_835 = (void*)0;
                        int32_t *l_836 = (void*)0;
                        int32_t *l_837 = &p_908->g_28;
                        int64_t *l_838 = (void*)0;
                        int64_t *l_839[7][7] = {{&p_908->g_704[3].f0.f2,&p_908->g_80.f0.f2,&p_908->g_403.f2,&p_908->g_704[3].f0.f2,&p_908->g_403.f2,&p_908->g_704[3].f0.f2,&p_908->g_704[3].f0.f2},{&p_908->g_704[3].f0.f2,&p_908->g_80.f0.f2,&p_908->g_403.f2,&p_908->g_704[3].f0.f2,&p_908->g_403.f2,&p_908->g_704[3].f0.f2,&p_908->g_704[3].f0.f2},{&p_908->g_704[3].f0.f2,&p_908->g_80.f0.f2,&p_908->g_403.f2,&p_908->g_704[3].f0.f2,&p_908->g_403.f2,&p_908->g_704[3].f0.f2,&p_908->g_704[3].f0.f2},{&p_908->g_704[3].f0.f2,&p_908->g_80.f0.f2,&p_908->g_403.f2,&p_908->g_704[3].f0.f2,&p_908->g_403.f2,&p_908->g_704[3].f0.f2,&p_908->g_704[3].f0.f2},{&p_908->g_704[3].f0.f2,&p_908->g_80.f0.f2,&p_908->g_403.f2,&p_908->g_704[3].f0.f2,&p_908->g_403.f2,&p_908->g_704[3].f0.f2,&p_908->g_704[3].f0.f2},{&p_908->g_704[3].f0.f2,&p_908->g_80.f0.f2,&p_908->g_403.f2,&p_908->g_704[3].f0.f2,&p_908->g_403.f2,&p_908->g_704[3].f0.f2,&p_908->g_704[3].f0.f2},{&p_908->g_704[3].f0.f2,&p_908->g_80.f0.f2,&p_908->g_403.f2,&p_908->g_704[3].f0.f2,&p_908->g_403.f2,&p_908->g_704[3].f0.f2,&p_908->g_704[3].f0.f2}};
                        uint8_t l_843 = 253UL;
                        int32_t *l_844[3];
                        int32_t *l_845 = (void*)0;
                        int32_t *l_846 = &p_908->g_13;
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_844[i] = &p_908->g_360;
                        l_825 = ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(((safe_mod_func_int8_t_s_s(((*l_711) = (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((l_808 = (safe_sub_func_int32_t_s_s(((!l_802) , (*p_908->g_61)), (~((p_64 <= l_802) , (((((VECTOR(uint8_t, 2))(p_908->g_803.yw)).even , ((*l_807) = l_804[4])) == (void*)0) ^ p_64)))))), (safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 2))(l_811.s11)).yyxxyxyy, ((VECTOR(int8_t, 4))(l_812.yyyy)).wxyzywxw))).s0625065772062226, ((VECTOR(int8_t, 2))(0x69L, 1L)).yyyxyyyxyxxxyxxx))).sbe, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_908->g_813.yy)).xyxy)).odd))).even, 0)))), ((safe_sub_func_uint16_t_u_u((((((safe_sub_func_uint64_t_u_u(((*l_819) = FAKE_DIVERGE(p_908->global_0_offset, get_global_id(0), 10)), (((safe_div_func_int32_t_s_s(l_822, (+p_908->g_151[4]))) , GROUP_DIVERGE(2, 1)) | 6L))) & GROUP_DIVERGE(0, 1)) < p_64) , l_823) & FAKE_DIVERGE(p_908->global_0_offset, get_global_id(0), 10)), p_64)) & 0x67L)))), GROUP_DIVERGE(0, 1))) || l_824), ((VECTOR(int32_t, 4))(0x0C8D3B19L)), 0L, (-1L), 2L))))).s0;
                        l_823 ^= p_64;
                        l_808 = ((((safe_rshift_func_uint8_t_u_u(((p_64 == (((safe_mul_func_uint8_t_u_u(0xE7L, (safe_div_func_int32_t_s_s(((*l_837) = 0L), (*p_908->g_61))))) < 0x1EF8CD86L) >= (l_760 = FAKE_DIVERGE(p_908->local_1_offset, get_local_id(1), 10)))) > (((l_712 = l_712) != (((safe_rshift_func_int16_t_s_s(((((l_842[0][0] &= l_822) <= (0xF6264437L <= 1UL)) , 0x3EL) && 0x50L), l_843)) || l_802) != (-5L))) || p_64)), 0)) != p_908->g_379.f1) > 5L) , l_812.z);
                        (*l_779) = func_15(((*l_846) = 8L), p_908);
                    }
                    for (l_822 = 0; (l_822 <= 27); l_822 = safe_add_func_int8_t_s_s(l_822, 6))
                    { /* block id: 395 */
                        int32_t *l_849 = &p_908->g_379.f2;
                        int32_t *l_850[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint64_t l_851 = 0x1B4A1B363F4CD2E2L;
                        int i;
                        l_851--;
                        if (p_64)
                            break;
                        (*l_849) &= (p_908->g_498.f0 <= (-8L));
                        l_868[1] ^= (((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(p_64, (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((safe_add_func_int8_t_s_s((l_842[3][3] = (!(safe_rshift_func_int8_t_s_s(((**l_710) = 0L), (GROUP_DIVERGE(1, 1) == ((l_808 &= (safe_mod_func_uint8_t_u_u(p_64, p_64))) > (0x15042F27A637F6BEL && p_908->g_304.f0))))))), (!((l_760 = l_822) , p_908->g_459)))), p_64)), p_64)), p_64)), 0UL, 0xD5L)).yzxwwxzxzxyzwxyw, ((VECTOR(uint8_t, 16))(0x83L))))).sa, 9)) ^ p_64) , l_822);
                    }
                    l_870 &= (l_842[0][0] = (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_869.yy)))).hi ^ p_64));
                }
            }
        }
        else
        { /* block id: 409 */
            return p_908->g_774[1];
        }
    }
    --p_908->g_879.z;
    return p_908->g_774[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_908->g_13 p_908->g_271.f0 p_908->g_191 p_908->g_151 p_908->g_338 p_908->g_80.f0.f0 p_908->g_367 p_908->g_379 p_908->g_345 p_908->g_152 p_908->g_61 p_908->g_62 p_908->g_80.f0.f4 p_908->g_80.f0.f7 p_908->g_459 p_908->g_462 p_908->g_206 p_908->g_304.f6 p_908->g_360 p_908->g_214 p_908->g_421 p_908->g_498 p_908->g_181 p_908->g_403.f0 p_908->g_28 p_908->g_10 p_908->g_585 p_908->g_493 p_908->g_252 p_908->g_597 p_908->g_149 p_908->g_634 p_908->g_645 p_908->g_650 p_908->g_217 p_908->g_290 p_908->g_403 p_908->g_235 p_908->g_704
 * writes: p_908->g_151 p_908->g_235 p_908->g_338 p_908->g_206 p_908->g_28 p_908->g_152 p_908->g_379.f0 p_908->g_80.f0.f2 p_908->g_10 p_908->g_459 p_908->g_432 p_908->g_62 p_908->g_9 p_908->g_585 p_908->g_612 p_908->g_614 p_908->g_80.f0.f7 p_908->g_149 p_908->g_217 p_908->g_291 p_908->g_379.f1 p_908->g_705
 */
uint8_t  func_67(uint32_t  p_68, int64_t  p_69, int32_t  p_70, int64_t  p_71, struct S5 * p_908)
{ /* block id: 158 */
    VECTOR(uint8_t, 2) l_319 = (VECTOR(uint8_t, 2))(254UL, 255UL);
    int16_t *l_330 = &p_908->g_151[4];
    int8_t *l_332 = (void*)0;
    int8_t *l_333 = (void*)0;
    int8_t *l_334 = (void*)0;
    int8_t *l_335 = (void*)0;
    int8_t *l_336 = (void*)0;
    int8_t *l_337 = &p_908->g_338;
    struct S2 ***l_339[5];
    int32_t l_354 = (-10L);
    int32_t l_355 = 0L;
    int32_t l_356[7][7][1] = {{{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)}},{{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)}},{{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)}},{{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)}},{{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)}},{{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)}},{{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)},{(-4L)}}};
    int16_t l_357 = 0x6CF4L;
    uint32_t l_366 = 1UL;
    uint64_t l_387 = 18446744073709551615UL;
    struct S0 *l_422 = &p_908->g_403;
    VECTOR(int16_t, 8) l_590 = (VECTOR(int16_t, 8))(0x188DL, (VECTOR(int16_t, 4))(0x188DL, (VECTOR(int16_t, 2))(0x188DL, 0x1338L), 0x1338L), 0x1338L, 0x188DL, 0x1338L);
    VECTOR(uint16_t, 4) l_596 = (VECTOR(uint16_t, 4))(0x2DD0L, (VECTOR(uint16_t, 2))(0x2DD0L, 0x47EFL), 0x47EFL);
    struct S2 ***l_648 = (void*)0;
    uint16_t *l_677 = (void*)0;
    uint16_t **l_676 = &l_677;
    uint32_t l_678 = 0x73B5D6AFL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_339[i] = &p_908->g_290;
    if ((safe_mul_func_int16_t_s_s(p_908->g_13, (((VECTOR(uint8_t, 16))(l_319.yxyxxyyyyxxyxxyx)).s6 , ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((l_319.y == p_70), 3)), (65535UL & ((+p_908->g_271[5].f0) & (0xFE9D9399E39DB4A7L ^ (safe_lshift_func_int16_t_s_u(p_908->g_191.s9, (safe_mul_func_int8_t_s_s((((((*l_337) |= (p_908->g_235.s5 = ((safe_rshift_func_int16_t_s_s((((*l_330) |= 0x6142L) , (safe_unary_minus_func_int8_t_s(p_68))), 13)) & p_908->g_13))) | 0L) , &p_908->g_290) != l_339[3]), 1UL))))))))) || p_908->g_80.f0.f0)))))
    { /* block id: 162 */
        struct S1 l_342[9] = {{0L},{0x613792FB510B9702L},{0L},{0L},{0x613792FB510B9702L},{0L},{0L},{0x613792FB510B9702L},{0L}};
        struct S1 l_346[2][10] = {{{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L}},{{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L},{0x1EEF6E4C01486592L}}};
        VECTOR(int32_t, 4) l_353 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 1L), 1L);
        uint64_t l_361 = 3UL;
        int32_t *l_397 = &l_356[3][3][0];
        struct S0 *l_423 = (void*)0;
        struct S3 *l_431[1];
        uint32_t l_617 = 9UL;
        uint16_t *l_637[7];
        struct S2 *l_657 = &p_908->g_80;
        VECTOR(int32_t, 16) l_670 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-7L)), (-7L)), (-7L), (-5L), (-7L), (VECTOR(int32_t, 2))((-5L), (-7L)), (VECTOR(int32_t, 2))((-5L), (-7L)), (-5L), (-7L), (-5L), (-7L));
        int32_t l_701 = 0x43E742D0L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_431[i] = &p_908->g_432;
        for (i = 0; i < 7; i++)
            l_637[i] = &p_908->g_585;
        for (p_70 = 0; (p_70 <= 23); p_70++)
        { /* block id: 165 */
            struct S1 *l_343 = &l_342[1];
            struct S1 *l_344[8][3][3] = {{{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345}},{{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345}},{{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345}},{{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345}},{{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345}},{{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345}},{{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345}},{{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345},{&p_908->g_345,&p_908->g_345,&p_908->g_345}}};
            int32_t *l_347 = &p_908->g_10;
            int32_t *l_348 = (void*)0;
            int32_t l_349 = 5L;
            int32_t *l_350 = &p_908->g_28;
            int32_t *l_351 = &p_908->g_62;
            int32_t *l_352[1];
            int32_t l_359 = 0x71BF9CC3L;
            uint8_t *l_374 = (void*)0;
            uint8_t *l_375 = (void*)0;
            uint8_t *l_376 = (void*)0;
            int32_t *l_381[7] = {&p_908->g_13,&p_908->g_13,&p_908->g_13,&p_908->g_13,&p_908->g_13,&p_908->g_13,&p_908->g_13};
            int32_t **l_380 = &l_381[2];
            struct S1 **l_382 = &l_344[5][0][1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_352[i] = &l_349;
            l_346[0][1] = ((*l_343) = l_342[1]);
            l_361--;
            (*l_350) = ((p_71 = (safe_div_func_uint16_t_u_u(l_366, ((VECTOR(int16_t, 8))(p_908->g_367.sfa53bcfe)).s4))) & ((p_908->g_206.s6 = (safe_div_func_int16_t_s_s((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x2156L, 65535UL)).xxxy)).w > GROUP_DIVERGE(1, 1)), (safe_sub_func_int16_t_s_s(l_355, (safe_rshift_func_int8_t_s_s((-4L), 1))))))) == (((safe_rshift_func_uint8_t_u_u(((p_908->g_379 , l_380) == (p_908->g_345 , (void*)0)), ((((*l_382) = &p_908->g_345) == &p_908->g_345) == p_70))) , l_319.x) <= p_70)));
        }
        for (p_908->g_152 = 26; (p_908->g_152 <= 60); ++p_908->g_152)
        { /* block id: 176 */
            int32_t *l_385[2];
            int32_t l_386 = 2L;
            struct S4 l_409 = {-2L,0x7E4930D67B93BDDCL,1L};
            struct S3 *l_434 = &p_908->g_432;
            struct S2 **l_457 = &p_908->g_291[3][2][0];
            struct S1 l_506 = {1L};
            uint32_t l_509 = 4294967295UL;
            struct S2 ****l_611 = &l_339[3];
            uint16_t l_629[4];
            struct S1 *l_644 = &l_342[1];
            struct S1 **l_643 = &l_644;
            VECTOR(int32_t, 2) l_671 = (VECTOR(int32_t, 2))(0x7CC746F2L, (-1L));
            uint64_t *l_684[8];
            uint8_t *l_685 = (void*)0;
            uint8_t *l_686 = (void*)0;
            uint8_t *l_687 = (void*)0;
            uint8_t *l_688 = (void*)0;
            uint8_t *l_689 = (void*)0;
            uint8_t *l_690 = (void*)0;
            uint8_t *l_691[5][9][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            uint64_t l_698 = 0xD87A47C73FC30668L;
            int16_t *l_699 = (void*)0;
            int16_t *l_700 = &l_357;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_385[i] = (void*)0;
            for (i = 0; i < 4; i++)
                l_629[i] = 0xF0FBL;
            for (i = 0; i < 8; i++)
                l_684[i] = (void*)0;
            --l_387;
            for (p_908->g_379.f0 = (-27); (p_908->g_379.f0 < (-9)); p_908->g_379.f0 = safe_add_func_int8_t_s_s(p_908->g_379.f0, 7))
            { /* block id: 180 */
                VECTOR(int32_t, 4) l_398 = (VECTOR(int32_t, 4))(0x75BB8A01L, (VECTOR(int32_t, 2))(0x75BB8A01L, 0L), 0L);
                int32_t l_416 = 0x07ED3039L;
                int i;
                for (p_70 = 0; (p_70 == 14); ++p_70)
                { /* block id: 183 */
                    int32_t l_394 = 0x1E05681FL;
                    VECTOR(int64_t, 4) l_408 = (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), (-1L)), (-1L));
                    int i;
                    if (l_394)
                        break;
                    for (p_908->g_80.f0.f2 = 24; (p_908->g_80.f0.f2 >= 17); --p_908->g_80.f0.f2)
                    { /* block id: 187 */
                        l_397 = &l_394;
                    }
                }
            }
            if ((((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(p_908->g_421.s3053055633013640)))).s5 && p_908->g_13) && ((void*)0 == &p_68)) > (l_422 == l_423)))
            { /* block id: 199 */
                VECTOR(uint32_t, 8) l_428 = (VECTOR(uint32_t, 8))(0x855C2019L, (VECTOR(uint32_t, 4))(0x855C2019L, (VECTOR(uint32_t, 2))(0x855C2019L, 7UL), 7UL), 7UL, 0x855C2019L, 7UL);
                int32_t l_480 = 1L;
                VECTOR(int8_t, 16) l_486 = (VECTOR(int8_t, 16))(0x08L, (VECTOR(int8_t, 4))(0x08L, (VECTOR(int8_t, 2))(0x08L, (-10L)), (-10L)), (-10L), 0x08L, (-10L), (VECTOR(int8_t, 2))(0x08L, (-10L)), (VECTOR(int8_t, 2))(0x08L, (-10L)), 0x08L, (-10L), 0x08L, (-10L));
                VECTOR(uint8_t, 4) l_521 = (VECTOR(uint8_t, 4))(0xA0L, (VECTOR(uint8_t, 2))(0xA0L, 0UL), 0UL);
                struct S2 ****l_527 = &l_339[3];
                VECTOR(uint16_t, 16) l_595 = (VECTOR(uint16_t, 16))(0x9684L, (VECTOR(uint16_t, 4))(0x9684L, (VECTOR(uint16_t, 2))(0x9684L, 65526UL), 65526UL), 65526UL, 0x9684L, 65526UL, (VECTOR(uint16_t, 2))(0x9684L, 65526UL), (VECTOR(uint16_t, 2))(0x9684L, 65526UL), 0x9684L, 65526UL, 0x9684L, 65526UL);
                uint32_t *l_602 = &l_509;
                struct S2 *****l_613[3][10] = {{&l_527,&l_527,&l_527,&l_527,&l_527,&l_527,&l_527,&l_527,&l_527,&l_527},{&l_527,&l_527,&l_527,&l_527,&l_527,&l_527,&l_527,&l_527,&l_527,&l_527},{&l_527,&l_527,&l_527,&l_527,&l_527,&l_527,&l_527,&l_527,&l_527,&l_527}};
                uint16_t *l_638 = (void*)0;
                int32_t **l_659 = &p_908->g_9[2];
                int i, j;
                for (p_908->g_10 = 0; (p_908->g_10 <= 9); p_908->g_10 = safe_add_func_uint32_t_u_u(p_908->g_10, 7))
                { /* block id: 202 */
                    VECTOR(uint32_t, 4) l_435 = (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0UL), 0UL);
                    struct S3 *l_503[7][10] = {{&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432},{&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432},{&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432},{&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432},{&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432},{&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432},{&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432,&p_908->g_432}};
                    int i, j;
                    for (l_361 = 0; (l_361 >= 9); l_361 = safe_add_func_int16_t_s_s(l_361, 1))
                    { /* block id: 205 */
                        struct S3 **l_433[2][5][6] = {{{&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0]},{&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0]},{&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0]},{&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0]},{&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0]}},{{&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0]},{&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0]},{&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0]},{&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0]},{&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0],&l_431[0]}}};
                        int i, j, k;
                        l_428.s0--;
                        if ((*p_908->g_61))
                            continue;
                        l_434 = l_431[0];
                        if (l_435.x)
                            break;
                    }
                    if (p_68)
                    { /* block id: 211 */
                        int32_t **l_436 = &l_397;
                        uint32_t *l_458 = &p_908->g_459;
                        uint64_t *l_463 = &l_361;
                        int32_t l_464 = (-1L);
                        (*l_436) = (void*)0;
                        l_464 = ((safe_mod_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((p_908->g_80.f0.f4 > ((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((*l_337) = (FAKE_DIVERGE(p_908->local_0_offset, get_local_id(0), 10) || (+p_68))), ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((~(l_435.z && (safe_sub_func_uint16_t_u_u(p_908->g_80.f0.f7, (((safe_add_func_int8_t_s_s(p_908->g_152, (((*l_463) ^= (((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_457 == ((--(*l_458)) , l_457)), p_908->g_191.se)), 12)) , (p_908->g_462 == p_908->g_462)) == p_69)) >= FAKE_DIVERGE(p_908->group_1_offset, get_group_id(1), 10)))) < (-1L)) != p_70))))), 13)), 0x63CAL)) != 0L))), GROUP_DIVERGE(2, 1))) >= l_435.y)), p_71)) || p_908->g_80.f0.f7), 0x02DCEDD759CC1B78L)) , p_71);
                        return p_68;
                    }
                    else
                    { /* block id: 218 */
                        uint8_t *l_473 = (void*)0;
                        uint8_t *l_474 = (void*)0;
                        uint8_t *l_475 = (void*)0;
                        uint8_t *l_476 = (void*)0;
                        uint8_t *l_477 = (void*)0;
                        uint8_t *l_478 = (void*)0;
                        uint8_t *l_479[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        struct S1 l_496 = {-10L};
                        int16_t *l_497 = (void*)0;
                        struct S1 *l_507 = (void*)0;
                        struct S1 *l_508 = &l_342[1];
                        int32_t l_510 = 7L;
                        int i;
                        l_353.y = (~(safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((++p_908->g_206.s7), (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 16))(1L, 0x4BL, ((VECTOR(int8_t, 4))(p_908->g_485.yxyy)), (-3L), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(l_486.se7c7)).odd, ((VECTOR(int8_t, 2))(0x21L, (-1L)))))).xyxxxyyxyxxyxxyy)).lo)), (-5L))).s3, (((((((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((~(-10L)), (0x228929B5L < (safe_sub_func_uint16_t_u_u(p_68, ((VECTOR(int16_t, 4))(p_908->g_493.s6554)).w))))), (safe_lshift_func_uint8_t_u_u((!(FAKE_DIVERGE(p_908->local_0_offset, get_local_id(0), 10) || l_428.s1)), p_908->g_304.f6)))) ^ ((VECTOR(int8_t, 2))(3L, 0x07L)).lo) <= ((l_435.w <= l_355) <= ((VECTOR(int8_t, 2))(1L, 0L)).lo)) && (l_354 = ((*l_330) = (l_496 , l_486.s7)))) > 0x84L) & p_70) & p_908->g_360))))), l_496.f0)), p_908->g_214[4])), p_908->g_421.s4)));
                        (*l_434) = p_908->g_498;
                        l_510 = (safe_sub_func_int16_t_s_s(((void*)0 == &p_908->g_214[0]), (safe_add_func_uint64_t_u_u(((FAKE_DIVERGE(p_908->global_0_offset, get_global_id(0), 10) >= ((l_503[4][6] != (void*)0) ^ (p_908->g_181.y & p_70))) | (safe_add_func_uint8_t_u_u(((((*l_508) = l_506) , ((l_435.y , (void*)0) != &p_908->g_459)) == l_509), 0UL))), 1L))));
                    }
                }
                for (l_355 = (-1); (l_355 == 25); l_355++)
                { /* block id: 230 */
                    uint8_t l_528 = 0x7FL;
                    int32_t **l_530 = &p_908->g_9[1];
                    uint16_t *l_584 = &p_908->g_585;
                    uint64_t *l_593 = (void*)0;
                    uint64_t *l_594[3];
                    int64_t l_600[5];
                    int32_t l_601 = 4L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_594[i] = (void*)0;
                    for (i = 0; i < 5; i++)
                        l_600[i] = (-9L);
                    (*l_530) = func_15((safe_div_func_uint64_t_u_u(0xF1C58CA349E4057DL, (p_68 | (safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 16))(l_521.xzxzzxxzywyyxzxx)).hi, ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 16))((safe_add_func_uint8_t_u_u((((p_70 & 0x31L) <= ((VECTOR(int32_t, 2))(p_908->g_524.saa)).hi) && p_69), (((18446744073709551608UL < (safe_lshift_func_int8_t_s_s(p_908->g_206.s5, 3))) < ((l_527 != &l_339[3]) ^ l_428.s4)) > l_528))), 0x2EL, ((VECTOR(uint8_t, 8))(1UL)), l_480, 0x73L, ((VECTOR(uint8_t, 2))(0x8CL)), 0x35L, 1UL)).s6535, ((VECTOR(uint8_t, 4))(253UL))))).wwxwxyyz))).s4 > 255UL), 5)), p_68)), p_908->g_403.f0))))), p_908);
                    if ((atomic_inc(&p_908->l_atomic_input[16]) == 9))
                    { /* block id: 233 */
                        uint32_t l_531 = 0x98E987EFL;
                        int64_t l_532 = 1L;
                        VECTOR(uint8_t, 16) l_533 = (VECTOR(uint8_t, 16))(0xA4L, (VECTOR(uint8_t, 4))(0xA4L, (VECTOR(uint8_t, 2))(0xA4L, 255UL), 255UL), 255UL, 0xA4L, 255UL, (VECTOR(uint8_t, 2))(0xA4L, 255UL), (VECTOR(uint8_t, 2))(0xA4L, 255UL), 0xA4L, 255UL, 0xA4L, 255UL);
                        VECTOR(int16_t, 16) l_534 = (VECTOR(int16_t, 16))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x6EA4L), 0x6EA4L), 0x6EA4L, 6L, 0x6EA4L, (VECTOR(int16_t, 2))(6L, 0x6EA4L), (VECTOR(int16_t, 2))(6L, 0x6EA4L), 6L, 0x6EA4L, 6L, 0x6EA4L);
                        int8_t l_535 = 0x11L;
                        VECTOR(uint8_t, 4) l_536 = (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 246UL), 246UL);
                        VECTOR(uint8_t, 16) l_537 = (VECTOR(uint8_t, 16))(0x91L, (VECTOR(uint8_t, 4))(0x91L, (VECTOR(uint8_t, 2))(0x91L, 0x36L), 0x36L), 0x36L, 0x91L, 0x36L, (VECTOR(uint8_t, 2))(0x91L, 0x36L), (VECTOR(uint8_t, 2))(0x91L, 0x36L), 0x91L, 0x36L, 0x91L, 0x36L);
                        struct S0 l_539[1][9] = {{{-3L,0UL,0x71B48606F11BCAE3L,0x1B23FF94L,0xC295L,-1L,0xA2L,4294967287UL},{-3L,0UL,0x71B48606F11BCAE3L,0x1B23FF94L,0xC295L,-1L,0xA2L,4294967287UL},{-3L,0UL,0x71B48606F11BCAE3L,0x1B23FF94L,0xC295L,-1L,0xA2L,4294967287UL},{-3L,0UL,0x71B48606F11BCAE3L,0x1B23FF94L,0xC295L,-1L,0xA2L,4294967287UL},{-3L,0UL,0x71B48606F11BCAE3L,0x1B23FF94L,0xC295L,-1L,0xA2L,4294967287UL},{-3L,0UL,0x71B48606F11BCAE3L,0x1B23FF94L,0xC295L,-1L,0xA2L,4294967287UL},{-3L,0UL,0x71B48606F11BCAE3L,0x1B23FF94L,0xC295L,-1L,0xA2L,4294967287UL},{-3L,0UL,0x71B48606F11BCAE3L,0x1B23FF94L,0xC295L,-1L,0xA2L,4294967287UL},{-3L,0UL,0x71B48606F11BCAE3L,0x1B23FF94L,0xC295L,-1L,0xA2L,4294967287UL}}};
                        struct S0 *l_538 = &l_539[0][5];
                        struct S0 *l_540[3];
                        VECTOR(int32_t, 16) l_541 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1B8525CDL), 0x1B8525CDL), 0x1B8525CDL, 1L, 0x1B8525CDL, (VECTOR(int32_t, 2))(1L, 0x1B8525CDL), (VECTOR(int32_t, 2))(1L, 0x1B8525CDL), 1L, 0x1B8525CDL, 1L, 0x1B8525CDL);
                        int16_t l_542 = 6L;
                        uint32_t l_543 = 5UL;
                        int16_t l_544[4];
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_540[i] = &l_539[0][6];
                        for (i = 0; i < 4; i++)
                            l_544[i] = 0L;
                        l_540[2] = (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))((l_532 = (l_531 , 2UL)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_533.sd440)).wzzwxwwx)), (l_535 = l_534.s6), 255UL, 0xC1L, ((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(l_536.zx)).yyyx, ((VECTOR(uint8_t, 4))(l_537.s1692))))))).sd0)).even , l_538);
                        l_544[3] ^= (l_541.s5 = (l_543 |= (l_542 &= ((VECTOR(int32_t, 8))(l_541.sdeefbf43)).s2)));
                        unsigned int result = 0;
                        result += l_531;
                        result += l_532;
                        result += l_533.sf;
                        result += l_533.se;
                        result += l_533.sd;
                        result += l_533.sc;
                        result += l_533.sb;
                        result += l_533.sa;
                        result += l_533.s9;
                        result += l_533.s8;
                        result += l_533.s7;
                        result += l_533.s6;
                        result += l_533.s5;
                        result += l_533.s4;
                        result += l_533.s3;
                        result += l_533.s2;
                        result += l_533.s1;
                        result += l_533.s0;
                        result += l_534.sf;
                        result += l_534.se;
                        result += l_534.sd;
                        result += l_534.sc;
                        result += l_534.sb;
                        result += l_534.sa;
                        result += l_534.s9;
                        result += l_534.s8;
                        result += l_534.s7;
                        result += l_534.s6;
                        result += l_534.s5;
                        result += l_534.s4;
                        result += l_534.s3;
                        result += l_534.s2;
                        result += l_534.s1;
                        result += l_534.s0;
                        result += l_535;
                        result += l_536.w;
                        result += l_536.z;
                        result += l_536.y;
                        result += l_536.x;
                        result += l_537.sf;
                        result += l_537.se;
                        result += l_537.sd;
                        result += l_537.sc;
                        result += l_537.sb;
                        result += l_537.sa;
                        result += l_537.s9;
                        result += l_537.s8;
                        result += l_537.s7;
                        result += l_537.s6;
                        result += l_537.s5;
                        result += l_537.s4;
                        result += l_537.s3;
                        result += l_537.s2;
                        result += l_537.s1;
                        result += l_537.s0;
                        int l_539_i0, l_539_i1;
                        for (l_539_i0 = 0; l_539_i0 < 1; l_539_i0++) {
                            for (l_539_i1 = 0; l_539_i1 < 9; l_539_i1++) {
                                result += l_539[l_539_i0][l_539_i1].f0;
                                result += l_539[l_539_i0][l_539_i1].f1;
                                result += l_539[l_539_i0][l_539_i1].f2;
                                result += l_539[l_539_i0][l_539_i1].f3;
                                result += l_539[l_539_i0][l_539_i1].f4;
                                result += l_539[l_539_i0][l_539_i1].f5;
                                result += l_539[l_539_i0][l_539_i1].f6;
                                result += l_539[l_539_i0][l_539_i1].f7;
                            }
                        }
                        result += l_541.sf;
                        result += l_541.se;
                        result += l_541.sd;
                        result += l_541.sc;
                        result += l_541.sb;
                        result += l_541.sa;
                        result += l_541.s9;
                        result += l_541.s8;
                        result += l_541.s7;
                        result += l_541.s6;
                        result += l_541.s5;
                        result += l_541.s4;
                        result += l_541.s3;
                        result += l_541.s2;
                        result += l_541.s1;
                        result += l_541.s0;
                        result += l_542;
                        result += l_543;
                        int l_544_i0;
                        for (l_544_i0 = 0; l_544_i0 < 4; l_544_i0++) {
                            result += l_544[l_544_i0];
                        }
                        atomic_add(&p_908->l_special_values[16], result);
                    }
                    else
                    { /* block id: 241 */
                        (1 + 1);
                    }
                    if ((atomic_inc(&p_908->l_atomic_input[5]) == 0))
                    { /* block id: 245 */
                        VECTOR(int32_t, 16) l_546 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x751FF407L), 0x751FF407L), 0x751FF407L, 0L, 0x751FF407L, (VECTOR(int32_t, 2))(0L, 0x751FF407L), (VECTOR(int32_t, 2))(0L, 0x751FF407L), 0L, 0x751FF407L, 0L, 0x751FF407L);
                        int32_t *l_545 = (void*)0;
                        int64_t l_547 = 2L;
                        uint64_t l_548 = 1UL;
                        uint16_t l_549 = 1UL;
                        uint32_t l_550 = 9UL;
                        struct S3 l_551 = {4294967295UL};/* VOLATILE GLOBAL l_551 */
                        uint16_t l_552 = 6UL;
                        int32_t l_553 = 0x3675D974L;
                        uint32_t l_554 = 5UL;
                        int16_t l_555 = 0x7A23L;
                        int32_t l_556 = 0x067B7013L;
                        uint64_t l_557[8][9][1] = {{{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL}},{{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL}},{{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL}},{{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL}},{{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL}},{{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL}},{{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL}},{{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL},{0x7C1827617718B12EL}}};
                        uint64_t l_560 = 0x045DE34237100173L;
                        VECTOR(int64_t, 2) l_561 = (VECTOR(int64_t, 2))(0x3C1A68CC9C67680BL, 0x25BFD6239076DD5FL);
                        VECTOR(int64_t, 2) l_562 = (VECTOR(int64_t, 2))(0x710731883DD5711CL, (-9L));
                        VECTOR(int64_t, 4) l_563 = (VECTOR(int64_t, 4))(0x4D45646481875AE8L, (VECTOR(int64_t, 2))(0x4D45646481875AE8L, 0L), 0L);
                        VECTOR(int64_t, 16) l_564 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x58D29AA6CB6B8D71L), 0x58D29AA6CB6B8D71L), 0x58D29AA6CB6B8D71L, 0L, 0x58D29AA6CB6B8D71L, (VECTOR(int64_t, 2))(0L, 0x58D29AA6CB6B8D71L), (VECTOR(int64_t, 2))(0L, 0x58D29AA6CB6B8D71L), 0L, 0x58D29AA6CB6B8D71L, 0L, 0x58D29AA6CB6B8D71L);
                        VECTOR(int64_t, 4) l_565 = (VECTOR(int64_t, 4))(0x6653DB5C6E0ABF43L, (VECTOR(int64_t, 2))(0x6653DB5C6E0ABF43L, 5L), 5L);
                        VECTOR(int64_t, 4) l_566 = (VECTOR(int64_t, 4))(0x65E2616B560384CEL, (VECTOR(int64_t, 2))(0x65E2616B560384CEL, 0x2F010CA23D8854E0L), 0x2F010CA23D8854E0L);
                        VECTOR(uint64_t, 2) l_567 = (VECTOR(uint64_t, 2))(0xDDF5B38610210427L, 0x795960C5EE152CA6L);
                        struct S1 l_568 = {-5L};
                        struct S1 l_569 = {0L};
                        struct S1 l_570 = {0x612BE0A0AC91A798L};
                        int16_t l_571[9][7] = {{(-8L),(-8L),0x5301L,0x7874L,0x1725L,0x7874L,0x5301L},{(-8L),(-8L),0x5301L,0x7874L,0x1725L,0x7874L,0x5301L},{(-8L),(-8L),0x5301L,0x7874L,0x1725L,0x7874L,0x5301L},{(-8L),(-8L),0x5301L,0x7874L,0x1725L,0x7874L,0x5301L},{(-8L),(-8L),0x5301L,0x7874L,0x1725L,0x7874L,0x5301L},{(-8L),(-8L),0x5301L,0x7874L,0x1725L,0x7874L,0x5301L},{(-8L),(-8L),0x5301L,0x7874L,0x1725L,0x7874L,0x5301L},{(-8L),(-8L),0x5301L,0x7874L,0x1725L,0x7874L,0x5301L},{(-8L),(-8L),0x5301L,0x7874L,0x1725L,0x7874L,0x5301L}};
                        uint32_t l_572 = 0xFF5CD14FL;
                        uint16_t l_573 = 0xE764L;
                        struct S0 l_574 = {0x4622964EL,0x4EL,0x3005E772B00C038CL,1L,6UL,9L,0x9AL,0x2E085B0DL};/* VOLATILE GLOBAL l_574 */
                        struct S0 l_575 = {1L,0x55L,0x35C15D29AF4DBDB2L,0x2B98B582L,0xD05BL,0x22383B84L,0x29L,0x23790E81L};/* VOLATILE GLOBAL l_575 */
                        struct S2 l_576 = {{0L,1UL,0x63B5A929ED631047L,1L,65535UL,0x04214ED8L,255UL,0xF42FAE3FL}};/* VOLATILE GLOBAL l_576 */
                        struct S2 l_577 = {{0x591549D4L,0x1BL,0L,-1L,65535UL,-3L,0x3EL,0x793A439DL}};/* VOLATILE GLOBAL l_577 */
                        int32_t *l_578 = (void*)0;
                        int32_t *l_579 = (void*)0;
                        struct S2 *l_580 = &l_576;
                        int i, j, k;
                        l_545 = (void*)0;
                        l_577 = ((((((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x05BAE702CEAE13EDL, (-1L))))).yyxxyyxx)).s32, ((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x145587C885D63CCEL, 0x01D4268F8A7FE17AL)), (l_550 |= ((l_548 = l_547) , l_549)), (l_554 = (l_551 , (l_552 , l_553))), 0x6C8ABF2DE412D0BEL, ((VECTOR(int64_t, 4))((-1L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 16))(0x6937119B6BBA0BE7L, 0x1FC942ECF274F710L, ((VECTOR(int64_t, 2))(0x198CE9ED93A25D23L, 0x215A22E7760B8827L)), 0x6FC5299044DB0578L, 0x6F553F7AB6868CF5L, 0x688604D18A0A315AL, l_555, ((--l_557[5][2][0]) , l_560), ((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_561.xy)))).yxxxyxyx)))).s12, ((VECTOR(int64_t, 8))(l_562.xxxyyxyx)).s51))), (-2L), ((VECTOR(int64_t, 2))(l_563.zy)), 0L, 3L)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_564.se01d)))).hi)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_565.zy)))), 0x758BB468B291B563L, 0x35E305069143B298L, 1L, ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(l_566.xz)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 2))(8L, 0x5F1CF34E9B5B0A51L)), (int64_t)((l_570 = (l_569 = (l_567.y , l_568))) , (-4L))))).yxyxxyxxxxxxxyxx, ((VECTOR(int64_t, 16))(0x4585F956C7C77527L))))).lo)).s00, ((VECTOR(int64_t, 2))((-2L)))))), 0x0706D2075DBD4608L)).s5, ((VECTOR(int64_t, 2))(0x70732FAD8BB3EF5CL)), ((VECTOR(int64_t, 2))(0x4E8DD2CFD0C9F992L)), 0x2557454F8E0997A3L)).s0324660055603656, ((VECTOR(int64_t, 16))(0x7363A686E8139792L))))).s17)), 0x2EAC9B2374A32B8DL)).y, 0x4876DA54AA897E29L, ((VECTOR(int64_t, 8))(0x1BA649B2063C0011L)), 0x7874413669A9CC32L)), (int64_t)l_571[7][6], (int64_t)l_572))).s29))).hi , l_573) , l_574) , l_575) , l_576);
                        l_579 = l_578;
                        l_580 = l_580;
                        unsigned int result = 0;
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
                        result += l_547;
                        result += l_548;
                        result += l_549;
                        result += l_550;
                        result += l_551.f0;
                        result += l_552;
                        result += l_553;
                        result += l_554;
                        result += l_555;
                        result += l_556;
                        int l_557_i0, l_557_i1, l_557_i2;
                        for (l_557_i0 = 0; l_557_i0 < 8; l_557_i0++) {
                            for (l_557_i1 = 0; l_557_i1 < 9; l_557_i1++) {
                                for (l_557_i2 = 0; l_557_i2 < 1; l_557_i2++) {
                                    result += l_557[l_557_i0][l_557_i1][l_557_i2];
                                }
                            }
                        }
                        result += l_560;
                        result += l_561.y;
                        result += l_561.x;
                        result += l_562.y;
                        result += l_562.x;
                        result += l_563.w;
                        result += l_563.z;
                        result += l_563.y;
                        result += l_563.x;
                        result += l_564.sf;
                        result += l_564.se;
                        result += l_564.sd;
                        result += l_564.sc;
                        result += l_564.sb;
                        result += l_564.sa;
                        result += l_564.s9;
                        result += l_564.s8;
                        result += l_564.s7;
                        result += l_564.s6;
                        result += l_564.s5;
                        result += l_564.s4;
                        result += l_564.s3;
                        result += l_564.s2;
                        result += l_564.s1;
                        result += l_564.s0;
                        result += l_565.w;
                        result += l_565.z;
                        result += l_565.y;
                        result += l_565.x;
                        result += l_566.w;
                        result += l_566.z;
                        result += l_566.y;
                        result += l_566.x;
                        result += l_567.y;
                        result += l_567.x;
                        result += l_568.f0;
                        result += l_569.f0;
                        result += l_570.f0;
                        int l_571_i0, l_571_i1;
                        for (l_571_i0 = 0; l_571_i0 < 9; l_571_i0++) {
                            for (l_571_i1 = 0; l_571_i1 < 7; l_571_i1++) {
                                result += l_571[l_571_i0][l_571_i1];
                            }
                        }
                        result += l_572;
                        result += l_573;
                        result += l_574.f0;
                        result += l_574.f1;
                        result += l_574.f2;
                        result += l_574.f3;
                        result += l_574.f4;
                        result += l_574.f5;
                        result += l_574.f6;
                        result += l_574.f7;
                        result += l_575.f0;
                        result += l_575.f1;
                        result += l_575.f2;
                        result += l_575.f3;
                        result += l_575.f4;
                        result += l_575.f5;
                        result += l_575.f6;
                        result += l_575.f7;
                        result += l_576.f0.f0;
                        result += l_576.f0.f1;
                        result += l_576.f0.f2;
                        result += l_576.f0.f3;
                        result += l_576.f0.f4;
                        result += l_576.f0.f5;
                        result += l_576.f0.f6;
                        result += l_576.f0.f7;
                        result += l_577.f0.f0;
                        result += l_577.f0.f1;
                        result += l_577.f0.f2;
                        result += l_577.f0.f3;
                        result += l_577.f0.f4;
                        result += l_577.f0.f5;
                        result += l_577.f0.f6;
                        result += l_577.f0.f7;
                        atomic_add(&p_908->l_special_values[5], result);
                    }
                    else
                    { /* block id: 256 */
                        (1 + 1);
                    }
                    if ((l_601 = (safe_mod_func_uint64_t_u_u((safe_unary_minus_func_uint16_t_u((--(*l_584)))), (safe_sub_func_int16_t_s_s((l_521.z , (p_71 , (+(0x7F358DE8L > ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(l_590.s05010063)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 4))((FAKE_DIVERGE(p_908->local_2_offset, get_local_id(2), 10) > p_908->g_127.f0), ((l_354 ^= (safe_mul_func_int16_t_s_s(9L, p_908->g_493.s6))) <= l_486.s7), 0xDBC2L, 5UL)).yzywzwww, ((VECTOR(uint16_t, 2))(l_595.s60)).xxyyyyyx))), ((VECTOR(uint16_t, 2))(l_596.ww)).xxxxyyxx))).hi)).wzwzywzw, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(p_908->g_597.s44)), ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(((safe_add_func_int8_t_s_s(((-1L) <= 0x7DFDAA9F4502FC87L), p_70)) <= p_68), 7UL, ((VECTOR(uint16_t, 8))(9UL)), ((VECTOR(uint16_t, 4))(0xD7ACL)), 65526UL, 65534UL)).se3d2, ((VECTOR(uint16_t, 4))(0xD596L))))).lo))).xxxx, ((VECTOR(uint16_t, 4))(0x2ABBL))))), ((VECTOR(uint16_t, 4))(0x6D5AL))))).hi)).yyxxxyyx, ((VECTOR(uint16_t, 8))(0UL))))).s40)).xxyyxyyyyxyxxxxy)).even))).s0)))), l_600[3]))))))
                    { /* block id: 262 */
                        return p_908->g_493.s6;
                    }
                    else
                    { /* block id: 264 */
                        return p_71;
                    }
                }
                if (((((+((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(0x2CL, (-1L), 0x0DL, 0x50L, 0L, (-1L), 0L, 2L)))).s35))), 3L, (-1L))))).x) | (((((*l_602) = l_595.sd) <= (safe_lshift_func_int8_t_s_s((0x27L == ((((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((FAKE_DIVERGE(p_908->group_2_offset, get_group_id(2), 10) > (safe_lshift_func_uint8_t_u_s(((p_908->g_612 = l_611) == (p_908->g_252 , (p_908->g_614[0][4][0] = &p_908->g_289))), 0))) , (p_908->g_597.s7 < p_69)), ((safe_mod_func_uint64_t_u_u((l_521.z != l_521.x), 0x18BD7B8AADCD47BAL)) , 0xB4L))), 0x4712CEB8L)) != l_617) != p_70) > 0x1AL)), p_908->g_149.s2))) && p_71) , FAKE_DIVERGE(p_908->local_1_offset, get_local_id(1), 10))) || p_908->g_149.sf) ^ p_69))
                { /* block id: 271 */
                    uint16_t l_618 = 0xBA0FL;
                    if ((*p_908->g_61))
                        break;
                    --l_618;
                    for (p_70 = (-25); (p_70 < (-21)); ++p_70)
                    { /* block id: 276 */
                        uint16_t **l_623 = (void*)0;
                        uint16_t *l_625 = (void*)0;
                        uint16_t **l_624 = &l_625;
                        uint16_t *l_627 = &p_908->g_585;
                        uint16_t **l_626 = &l_627;
                        int32_t l_628 = 0L;
                        uint64_t *l_649[10] = {&l_387,&l_387,&l_387,&l_387,&l_387,&l_387,&l_387,&l_387,&l_387,&l_387};
                        int i;
                        l_628 ^= (+(p_70 & ((((p_70 , ((*l_626) = ((*l_624) = &p_908->g_585))) != (void*)0) < p_69) ^ ((VECTOR(uint32_t, 2))(0x5AB1D1A0L, 0x044874D2L)).even)));
                        l_629[1]--;
                        (*p_908->g_650) = func_15(((safe_add_func_uint32_t_u_u((+(p_908->g_634 , (--p_908->g_80.f0.f7))), (+((&l_618 != (l_638 = l_637[0])) || l_628)))) >= (p_908->g_149.s8 = (((l_339[3] = (((safe_div_func_uint16_t_u_u((~l_618), (((safe_lshift_func_int8_t_s_s(((((p_68 , ((p_71 >= ((l_643 != p_908->g_645) || 0x3DL)) || l_628)) == 5L) == l_356[0][6][0]) <= 1UL), 5)) != 0x45L) , 0x48ACL))) | 0xCCB0L) , l_339[3])) == l_648) ^ p_68))), p_908);
                    }
                }
                else
                { /* block id: 287 */
                    struct S1 **l_651 = (void*)0;
                    struct S1 *l_653 = (void*)0;
                    struct S1 **l_652 = &l_653;
                    struct S2 *l_658 = &p_908->g_80;
                    (*l_652) = ((*l_643) = &p_908->g_345);
                    for (p_908->g_217 = 0; (p_908->g_217 < 28); p_908->g_217++)
                    { /* block id: 292 */
                        struct S1 l_656[3][9] = {{{0x554963777B03D6D6L},{0x554963777B03D6D6L},{1L},{0x274E7EAF1B11CD16L},{0x231325B2F320333AL},{0x274E7EAF1B11CD16L},{1L},{0x554963777B03D6D6L},{0x554963777B03D6D6L}},{{0x554963777B03D6D6L},{0x554963777B03D6D6L},{1L},{0x274E7EAF1B11CD16L},{0x231325B2F320333AL},{0x274E7EAF1B11CD16L},{1L},{0x554963777B03D6D6L},{0x554963777B03D6D6L}},{{0x554963777B03D6D6L},{0x554963777B03D6D6L},{1L},{0x274E7EAF1B11CD16L},{0x231325B2F320333AL},{0x274E7EAF1B11CD16L},{1L},{0x554963777B03D6D6L},{0x554963777B03D6D6L}}};
                        int i, j;
                        l_656[0][7] = l_656[0][3];
                    }
                    l_658 = ((*p_908->g_290) = l_657);
                }
                (*l_659) = (void*)0;
            }
            else
            { /* block id: 299 */
                uint64_t l_664 = 0UL;
                int32_t *l_666 = &p_908->g_403.f0;
                int32_t **l_665 = &l_666;
                int32_t l_667 = 1L;
                l_667 ^= (l_353.x = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((((p_908->g_149.s4 || 0xB4C31AC1C3D45CA0L) & (safe_mod_func_uint16_t_u_u((p_70 < (safe_rshift_func_uint8_t_u_s((((*l_665) = func_15((p_70 ^ l_664), p_908)) == (void*)0), 3))), (p_908->g_585 = l_354)))) <= (((p_908->g_421.s2 >= p_68) , p_70) && 0x80DDL)) < p_71), l_664, ((VECTOR(int16_t, 8))(1L)), 0x4DDBL, ((VECTOR(int16_t, 4))((-9L))), (-6L))).s3f, ((VECTOR(uint16_t, 2))(0xB646L))))), ((VECTOR(int32_t, 2))(0x34077601L)), ((VECTOR(int32_t, 4))((-9L))))).s11)).xyyy, ((VECTOR(int32_t, 4))(0x40BC323BL)), ((VECTOR(int32_t, 4))((-1L)))))), 1L, 0x14D359E0L, 0x625473CFL, ((VECTOR(int32_t, 8))(9L)), (-8L))).s8);
                l_667 = (((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x00148E67L, 1L)).yyyyyxyx)).even, ((VECTOR(int32_t, 2))((-2L), 0x2EE0FD4AL)).xyyx, ((VECTOR(int32_t, 8))((0x203F66C7EC43F9E8L & (safe_rshift_func_uint16_t_u_s(p_69, ((*l_330) = ((p_908->g_379 , (-5L)) , (((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(0x2CC4A438L, 0L)).yyxxyxxxyxyxyyyx, ((VECTOR(int32_t, 4))(l_670.s54aa)).zwxxwwxywywywwxw, ((VECTOR(int32_t, 4))(l_671.xxyx)).zwzwxywywxywzzxy))).sf , (-1L))))))), ((0x6AL <= (safe_sub_func_uint16_t_u_u(p_908->g_217, GROUP_DIVERGE(2, 1)))) > (5UL == (safe_mul_func_uint16_t_u_u((+((l_676 == &l_637[6]) == (-1L))), p_68)))), 0x035D18FFL, (-1L), 0x1B853846L, ((VECTOR(int32_t, 2))(0x78AFF0B4L)), 0x45772E1AL)).odd))).zxzwwwwx, ((VECTOR(int32_t, 8))((-10L))), ((VECTOR(int32_t, 8))(0x7C4D798EL))))).s7 , l_678);
                l_667 = ((safe_lshift_func_int16_t_s_u(p_71, 11)) <= ((VECTOR(uint16_t, 4))(p_908->g_681.s2ee0)).z);
            }
            l_701 = (safe_add_func_uint8_t_u_u((((p_71 < (l_353.w = 18446744073709551615UL)) ^ (p_68 , ((*l_700) = ((*l_330) = (l_596.w > ((l_670.sc ^= p_68) >= (p_68 ^ ((p_908->g_191.s7 <= (((safe_sub_func_int16_t_s_s((((p_908->g_217 , (*l_422)) , l_698) >= 0xDAE49946L), GROUP_DIVERGE(0, 1))) , p_908->g_634.f2) >= 0UL)) <= p_908->g_235.s5)))))))) <= p_908->g_191.s2), 1UL));
        }
    }
    else
    { /* block id: 314 */
        for (p_908->g_379.f1 = 0; (p_908->g_379.f1 >= 46); ++p_908->g_379.f1)
        { /* block id: 317 */
            return p_908->g_493.s7;
        }
        p_908->g_705[2][1] = p_908->g_704[3];
    }
    return p_71;
}


/* ------------------------------------------ */
/* 
 * reads : p_908->g_28 p_908->g_10 p_908->l_comm_values p_908->g_80.f0.f6 p_908->g_62 p_908->g_61 p_908->g_119 p_908->g_13 p_908->g_127 p_908->g_130 p_908->g_217 p_908->g_80.f0.f0 p_908->g_149 p_908->g_151 p_908->g_206 p_908->g_271 p_908->g_214 p_908->g_302
 * writes: p_908->g_10 p_908->g_28 p_908->g_80.f0.f0 p_908->g_80.f0.f7 p_908->g_9 p_908->g_62 p_908->g_119 p_908->g_151 p_908->g_152 p_908->g_80.f0.f2 p_908->g_217 p_908->g_214
 */
int16_t  func_74(uint32_t  p_75, struct S2 * p_76, struct S5 * p_908)
{ /* block id: 39 */
    uint32_t l_81 = 0xF72C9780L;
    struct S1 l_90 = {-1L};
    int32_t *l_91 = &p_908->g_13;
    uint32_t l_92[5][9][5] = {{{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL}},{{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL}},{{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL}},{{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL}},{{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL},{0x754ED04BL,4294967295UL,0UL,0x8B9DDC81L,4294967295UL}}};
    int32_t *l_95 = &p_908->g_62;
    VECTOR(uint32_t, 4) l_96 = (VECTOR(uint32_t, 4))(0x1259A4FAL, (VECTOR(uint32_t, 2))(0x1259A4FAL, 4294967287UL), 4294967287UL);
    VECTOR(uint32_t, 8) l_97 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 2UL), 2UL), 2UL, 0UL, 2UL);
    int32_t *l_100 = &p_908->g_80.f0.f0;
    int32_t **l_313 = &p_908->g_9[4];
    int i, j, k;
    l_81++;
    (*l_313) = func_84(l_90, ((*l_100) = (((l_92[2][8][0] |= func_17(l_90, l_91, p_908)) >= (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))((~((void*)0 == l_95)), p_908->l_comm_values[(safe_mod_func_uint32_t_u_u(p_908->tid, 11))], ((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 2))(l_96.zy)).xxxy, ((VECTOR(uint32_t, 4))(l_97.s0266))))), 0UL, 0UL)).s35, ((VECTOR(uint32_t, 8))((++p_75), 1UL, p_908->g_80.f0.f6, ((VECTOR(uint32_t, 4))((*l_95), 0x9A68D69DL, 0xF53B8793L, 0xD8EA33B3L)), 1UL)).s37))).xyxxyxyy)), (uint32_t)(*l_95)))).odd)).xzywzzwxxzxwwzww)).s3, FAKE_DIVERGE(p_908->group_2_offset, get_group_id(2), 10)))) && (*l_95))), (*l_95), p_908->l_comm_values[(safe_mod_func_uint32_t_u_u(p_908->tid, 11))], p_908->g_62, p_908);
    return p_908->g_151[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_908->g_28 p_908->g_10 p_908->g_61 p_908->g_62 p_908->g_119 p_908->g_13 p_908->g_127 p_908->g_130 p_908->l_comm_values p_908->g_217 p_908->g_80.f0.f0 p_908->g_149 p_908->g_151 p_908->g_206 p_908->g_271 p_908->g_214 p_908->g_302
 * writes: p_908->g_80.f0.f7 p_908->g_9 p_908->g_10 p_908->g_28 p_908->g_62 p_908->g_119 p_908->g_151 p_908->g_152 p_908->g_80.f0.f2 p_908->g_217 p_908->g_80.f0.f0 p_908->g_214
 */
int32_t * func_84(struct S1  p_85, int32_t  p_86, int8_t  p_87, uint32_t  p_88, uint64_t  p_89, struct S5 * p_908)
{ /* block id: 44 */
    int32_t *l_118 = &p_908->g_13;
    int32_t **l_117 = &l_118;
    VECTOR(uint8_t, 2) l_128 = (VECTOR(uint8_t, 2))(0UL, 0xCEL);
    VECTOR(uint8_t, 16) l_129 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xF7L), 0xF7L), 0xF7L, 255UL, 0xF7L, (VECTOR(uint8_t, 2))(255UL, 0xF7L), (VECTOR(uint8_t, 2))(255UL, 0xF7L), 255UL, 0xF7L, 255UL, 0xF7L);
    int i;
    for (p_89 = 0; (p_89 >= 41); p_89 = safe_add_func_uint32_t_u_u(p_89, 1))
    { /* block id: 47 */
        uint64_t l_106 = 9UL;
        uint32_t *l_305 = &p_908->g_80.f0.f7;
        int8_t l_306 = 0x66L;
        int32_t **l_307 = &p_908->g_9[1];
        VECTOR(int32_t, 16) l_310 = (VECTOR(int32_t, 16))(0x5FBE27C3L, (VECTOR(int32_t, 4))(0x5FBE27C3L, (VECTOR(int32_t, 2))(0x5FBE27C3L, 0x183D3548L), 0x183D3548L), 0x183D3548L, 0x5FBE27C3L, 0x183D3548L, (VECTOR(int32_t, 2))(0x5FBE27C3L, 0x183D3548L), (VECTOR(int32_t, 2))(0x5FBE27C3L, 0x183D3548L), 0x5FBE27C3L, 0x183D3548L, 0x5FBE27C3L, 0x183D3548L);
        int i;
        for (p_908->g_80.f0.f7 = 0; (p_908->g_80.f0.f7 == 48); p_908->g_80.f0.f7 = safe_add_func_int64_t_s_s(p_908->g_80.f0.f7, 5))
        { /* block id: 50 */
            int32_t **l_105 = &p_908->g_9[0];
            if (p_89)
                break;
            (*l_105) = (void*)0;
            (*l_105) = func_15(l_106, p_908);
        }
        (*l_307) = ((((safe_mod_func_int16_t_s_s(((((*l_305) = (+(p_908->g_214[3] = func_109((safe_rshift_func_int8_t_s_u((((void*)0 == &p_908->g_80) < (((((safe_rshift_func_int16_t_s_u(func_115(l_117, p_908), 14)) <= p_908->g_13) <= (FAKE_DIVERGE(p_908->global_1_offset, get_global_id(1), 10) == (p_908->g_127 , l_106))) && (((VECTOR(uint8_t, 16))(l_128.xyxyxyyyxyxxyxyy)).s9 || ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_129.s20)).xyyyxyxyyyxyyxyy)).s95, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(p_908->g_130.wwwxwxyyxxxxzwwx)).even)).s55))))).yyyy)).odd))).yxxyyxyxyyxxyxxy)).s9)) , (((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((p_908->g_130.x == ((safe_lshift_func_uint16_t_u_u((p_908->g_13 < 0x26L), 10)) == 0xE4CC4E5DL)), p_908->l_comm_values[(safe_mod_func_uint32_t_u_u(p_908->tid, 11))])), 1)) <= 0xEA055E4CL) != l_106))), p_86)), p_908)))) | 4294967294UL) && l_306), l_106)) < 6UL) && 0x4D903703908D176DL) , l_305);
        for (p_908->g_62 = (-9); (p_908->g_62 < (-5)); p_908->g_62 = safe_add_func_uint32_t_u_u(p_908->g_62, 4))
        { /* block id: 150 */
            int32_t *l_311 = &p_908->g_28;
            (*l_311) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_310.s23)).yyyy)).z;
        }
    }
    return &p_908->g_62;
}


/* ------------------------------------------ */
/* 
 * reads : p_908->g_10 p_908->g_217 p_908->g_28 p_908->g_61 p_908->g_62 p_908->g_130 p_908->g_80.f0.f0 p_908->g_149 p_908->g_151 p_908->g_206 p_908->g_271 p_908->g_80.f0.f3 p_908->g_214 p_908->g_302
 * writes: p_908->g_10 p_908->g_151 p_908->g_152 p_908->g_62 p_908->g_28 p_908->g_80.f0.f2 p_908->g_217 p_908->g_80.f0.f0 p_908->g_80.f0.f7 p_908->g_149 p_908->g_289
 */
uint32_t  func_109(uint32_t  p_110, struct S5 * p_908)
{ /* block id: 60 */
    int32_t *l_139 = &p_908->g_10;
    int32_t **l_140 = &l_139;
    VECTOR(int16_t, 8) l_146 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 5L), 5L), 5L, 0L, 5L);
    struct S2 *l_184 = (void*)0;
    struct S2 **l_183 = &l_184;
    VECTOR(int32_t, 16) l_192 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x2547C4C6L), 0x2547C4C6L), 0x2547C4C6L, 6L, 0x2547C4C6L, (VECTOR(int32_t, 2))(6L, 0x2547C4C6L), (VECTOR(int32_t, 2))(6L, 0x2547C4C6L), 6L, 0x2547C4C6L, 6L, 0x2547C4C6L);
    VECTOR(uint16_t, 8) l_196 = (VECTOR(uint16_t, 8))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0xCBBCL), 0xCBBCL), 0xCBBCL, 65534UL, 0xCBBCL);
    struct S1 l_228 = {-9L};
    struct S0 *l_268 = &p_908->g_80.f0;
    struct S4 l_269 = {0x37L,0xB3F356C05553CE12L,0x02CEDE38L};
    int i;
    (*l_140) = l_139;
    if (((**l_140) = (&l_139 == &p_908->g_9[1])))
    { /* block id: 63 */
        return (*l_139);
    }
    else
    { /* block id: 65 */
        int32_t *l_145 = &p_908->g_80.f0.f0;
        int32_t l_175[1];
        VECTOR(int8_t, 16) l_178 = (VECTOR(int8_t, 16))(0x6AL, (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, 0L), 0L), 0L, 0x6AL, 0L, (VECTOR(int8_t, 2))(0x6AL, 0L), (VECTOR(int8_t, 2))(0x6AL, 0L), 0x6AL, 0L, 0x6AL, 0L);
        VECTOR(uint16_t, 16) l_197 = (VECTOR(uint16_t, 16))(0xC593L, (VECTOR(uint16_t, 4))(0xC593L, (VECTOR(uint16_t, 2))(0xC593L, 0x5350L), 0x5350L), 0x5350L, 0xC593L, 0x5350L, (VECTOR(uint16_t, 2))(0xC593L, 0x5350L), (VECTOR(uint16_t, 2))(0xC593L, 0x5350L), 0xC593L, 0x5350L, 0xC593L, 0x5350L);
        int32_t *l_229 = &p_908->g_13;
        VECTOR(uint8_t, 16) l_234 = (VECTOR(uint8_t, 16))(0xECL, (VECTOR(uint8_t, 4))(0xECL, (VECTOR(uint8_t, 2))(0xECL, 0UL), 0UL), 0UL, 0xECL, 0UL, (VECTOR(uint8_t, 2))(0xECL, 0UL), (VECTOR(uint8_t, 2))(0xECL, 0UL), 0xECL, 0UL, 0xECL, 0UL);
        int32_t *l_259 = &p_908->g_80.f0.f0;
        struct S0 *l_270 = &p_908->g_80.f0;
        int32_t l_279 = 0x6B75F233L;
        struct S2 ***l_292 = &p_908->g_290;
        struct S1 l_295 = {-7L};
        int i;
        for (i = 0; i < 1; i++)
            l_175[i] = (-9L);
        for (p_110 = 0; (p_110 != 37); p_110 = safe_add_func_uint64_t_u_u(p_110, 1))
        { /* block id: 68 */
            int16_t *l_150 = &p_908->g_151[4];
            VECTOR(uint16_t, 4) l_195 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x5F64L), 0x5F64L);
            int16_t *l_213[1];
            int32_t *l_215 = &p_908->g_13;
            int32_t *l_216 = &p_908->g_217;
            int i;
            for (i = 0; i < 1; i++)
                l_213[i] = (void*)0;
            (*l_139) = (safe_mod_func_int16_t_s_s((0x09C149A9L != (((void*)0 == l_145) || ((((VECTOR(int16_t, 8))(l_146.s25763045)).s1 <= 0x11A7L) == (((*l_150) = (0x5B8A7297L == ((((VECTOR(uint64_t, 8))(p_908->g_149.sbef38543)).s4 != 0xD9DEA42474D7A56AL) <= 0UL))) != ((p_908->g_152 = (p_110 || 0x119FL)) > 0x57787EE95513F453L))))), 0x0198L));
            for (p_908->g_28 = 0; (p_908->g_28 > 1); p_908->g_28 = safe_add_func_uint32_t_u_u(p_908->g_28, 1))
            { /* block id: 74 */
                int16_t *l_174 = &p_908->g_151[0];
                int64_t l_182 = 5L;
                struct S2 **l_186 = &l_184;
                int32_t l_190 = (-1L);
                for (p_908->g_80.f0.f2 = 2; (p_908->g_80.f0.f2 != 23); p_908->g_80.f0.f2++)
                { /* block id: 77 */
                    struct S0 *l_170 = &p_908->g_80.f0;
                    int32_t **l_189 = (void*)0;
                    if ((atomic_inc(&p_908->g_atomic_input[33 * get_linear_group_id() + 9]) == 8))
                    { /* block id: 79 */
                        int64_t l_157 = 0L;
                        int32_t l_159 = 5L;
                        int32_t *l_158 = &l_159;
                        int32_t *l_160 = &l_159;
                        struct S3 l_161 = {0x911EA6DDL};/* VOLATILE GLOBAL l_161 */
                        int8_t l_162 = 1L;
                        int16_t l_163 = 0x1AFBL;
                        struct S3 l_164[1] = {{1UL}};
                        struct S3 l_165 = {7UL};/* VOLATILE GLOBAL l_165 */
                        int i;
                        l_160 = (l_157 , (l_158 = (void*)0));
                        l_163 = (l_161 , l_162);
                        l_165 = l_164[0];
                        unsigned int result = 0;
                        result += l_157;
                        result += l_159;
                        result += l_161.f0;
                        result += l_162;
                        result += l_163;
                        int l_164_i0;
                        for (l_164_i0 = 0; l_164_i0 < 1; l_164_i0++) {
                            result += l_164[l_164_i0].f0;
                        }
                        result += l_165.f0;
                        atomic_add(&p_908->g_special_values[33 * get_linear_group_id() + 9], result);
                    }
                    else
                    { /* block id: 84 */
                        (1 + 1);
                    }
                }
                (*l_140) = &l_175[0];
            }
            (*l_140) = func_15(((*l_216) |= ((VECTOR(int32_t, 16))(0x51FD8223L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_908->g_191.s16b0a57d7b11fa8a)).s99e6)), (-1L), (-8L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_192.s77b6004b4608c1f7)).sb2a5)), 7L, (**p_908->g_119), ((*l_215) = (GROUP_DIVERGE(0, 1) || (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_195.zyzxzwwy)), ((VECTOR(uint16_t, 4))(l_196.s5262)), p_110, ((VECTOR(uint16_t, 2))(l_197.s91)), 0x79CEL)).sa != ((1L != (p_908->g_127 , ((((safe_div_func_int32_t_s_s(l_175[0], p_110)) == ((*l_139) ^ (safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((safe_add_func_int64_t_s_s(((((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_908->g_206.s7522)).hi)).even > ((p_908->g_80.f0.f4 == (safe_lshift_func_uint16_t_u_u((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))((safe_mul_func_uint16_t_u_u((((p_908->g_214[3] &= ((*l_150) = (-9L))) && 0UL) != p_110), p_110)), 0x413F615BL, 0x47CDA25BL, 0x48B5C4B6L)).x, 0xA7527264L, 0UL, 4294967289UL)).w , 0x6312L), p_110))) || p_908->g_80.f0.f3)) != l_195.w) && p_908->g_80.f0.f5) || p_908->g_28), p_110)) & p_908->g_80.f0.f2), l_175[0])) & p_110), (-1L))))) , p_908->g_151[4]) ^ l_197.s0))) == (*l_139))))), 0x100964AEL, 4L)).s2), p_908);
            if ((*p_908->g_61))
                break;
        }
        if ((*l_139))
        { /* block id: 109 */
            uint32_t l_218 = 0x1904DDF8L;
            int32_t l_239[9][5][3] = {{{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L}},{{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L}},{{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L}},{{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L}},{{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L}},{{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L}},{{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L}},{{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L}},{{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L},{0x60943D25L,0x0A9741A8L,1L}}};
            struct S1 l_262 = {0x62EE07E1FE83854BL};
            uint64_t *l_286 = &p_908->g_152;
            struct S2 ***l_288 = &l_183;
            struct S2 ****l_287[1][5][5] = {{{&l_288,&l_288,&l_288,&l_288,&l_288},{&l_288,&l_288,&l_288,&l_288,&l_288},{&l_288,&l_288,&l_288,&l_288,&l_288},{&l_288,&l_288,&l_288,&l_288,&l_288},{&l_288,&l_288,&l_288,&l_288,&l_288}}};
            struct S0 *l_298 = &p_908->g_80.f0;
            int i, j, k;
            l_218 ^= p_110;
            for (p_908->g_10 = 0; (p_908->g_10 == 18); p_908->g_10 = safe_add_func_uint16_t_u_u(p_908->g_10, 7))
            { /* block id: 113 */
                int32_t l_236 = 0x1242BF8CL;
                int8_t l_242 = 0L;
                int8_t l_263 = 0x0FL;
                int32_t *l_277 = &l_175[0];
                int32_t *l_278[8][4][6] = {{{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0}},{{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0}},{{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0}},{{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0}},{{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0}},{{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0}},{{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0}},{{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0},{&l_239[0][3][1],&l_269.f2,&l_236,(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                for (p_908->g_62 = 15; (p_908->g_62 != 28); p_908->g_62++)
                { /* block id: 116 */
                    int32_t *l_223[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int16_t *l_237 = (void*)0;
                    int16_t *l_238 = &p_908->g_151[4];
                    int i;
                    l_175[0] = p_110;
                    l_239[7][2][2] = (safe_lshift_func_int16_t_s_s((*l_139), ((*l_238) &= (1L < (0xCF7AL <= (l_228 , (((((l_229 = l_145) == l_145) < ((((safe_mul_func_uint16_t_u_u(0x02E7L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))((((p_110 != (safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(l_234.s06)).lo, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(p_908->g_235.s69)), ((VECTOR(int8_t, 2))(0x29L, (-1L)))))), 0x76L, (-3L))).x))) == p_908->g_13) | p_110), ((VECTOR(int16_t, 8))(0L)), ((VECTOR(int16_t, 4))((-1L))), 0x30C6L, 0x7C74L, 0x4176L)).sd2bc)).y)) && p_908->g_130.y) , l_236) | 0x33L)) ^ p_908->g_80.f0.f0) ^ p_908->g_149.s7)))))));
                    l_236 = (safe_mod_func_int16_t_s_s((((l_242 = (!((*l_145) = ((VECTOR(int32_t, 2))(1L, 0x0A9F1085L)).odd))) , (((safe_unary_minus_func_uint8_t_u(((VECTOR(uint8_t, 8))(250UL, 249UL, ((((safe_sub_func_uint32_t_u_u((l_178.sd | FAKE_DIVERGE(p_908->global_2_offset, get_global_id(2), 10)), p_110)) , (safe_rshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(1L, (safe_mod_func_uint32_t_u_u(((((p_908->g_252 , p_110) == ((((safe_div_func_int64_t_s_s(((0x0D7C328C494CCD08L != ((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((l_139 != (l_259 = p_908->g_9[1])), (safe_add_func_int8_t_s_s((l_262 , 3L), 0xBEL)))) != p_110), p_110)) , p_908->g_80.f0.f2)) , (-1L)), 0xDF8BF0036B767B89L)) | 0UL) , GROUP_DIVERGE(2, 1)) >= p_908->g_151[5])) && l_234.sc) >= p_908->g_214[3]), p_110)))) , l_236), 15))) & l_178.s1) & 18446744073709551615UL), ((VECTOR(uint8_t, 2))(0x00L)), ((VECTOR(uint8_t, 2))(255UL)), 0UL)).s5)) && l_263) || l_218)) , l_234.s9), p_908->g_206.s0));
                    for (p_908->g_80.f0.f7 = (-7); (p_908->g_80.f0.f7 != 38); ++p_908->g_80.f0.f7)
                    { /* block id: 127 */
                        (*l_140) = (l_262 , &p_908->g_28);
                    }
                }
                l_279 |= ((*l_277) = (safe_mod_func_uint8_t_u_u(0xDCL, (((l_268 != (l_269 , l_270)) , ((p_908->g_271[5] , 8L) , p_110)) & (safe_sub_func_uint8_t_u_u((((safe_unary_minus_func_int64_t_s((safe_add_func_int32_t_s_s((((VECTOR(int32_t, 16))((((p_110 & (-2L)) > 8UL) != l_263), (**l_140), (**l_140), l_262.f0, p_110, ((VECTOR(int32_t, 8))(1L)), (-1L), 0x096E82DCL, (-1L))).s0 <= p_110), l_234.sb)))) == p_110) | p_110), p_110))))));
                if (p_110)
                    continue;
            }
            (*l_139) |= (safe_mul_func_int8_t_s_s((((VECTOR(uint64_t, 8))((safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(p_110, (((*l_286) = (p_908->g_149.sb = p_908->g_80.f0.f3)) || ((p_908->g_289 = &l_183) == l_292)))) < (safe_add_func_int32_t_s_s((l_295 , ((l_279 , (0x7BL <= (((safe_sub_func_int64_t_s_s(l_239[1][2][0], (l_197.s2 | p_110))) != 0x28E01941L) < p_908->g_206.s7))) <= p_110)), p_110))), p_110)), ((VECTOR(uint64_t, 4))(0xC45A12C6DBBE1158L)), ((VECTOR(uint64_t, 2))(1UL)), 18446744073709551615UL)).s3 < l_197.se), p_908->g_214[3]));
            l_298 = l_298;
        }
        else
        { /* block id: 140 */
            uint16_t l_301 = 0x4344L;
            (*l_140) = func_15((6UL == (safe_add_func_uint32_t_u_u((~p_908->g_130.z), (p_908->g_206.s7 && (p_908->g_10 && ((p_110 , (void*)0) != (((l_301 & l_279) && (0x750F9E5B10184A4CL >= p_110)) , p_908->g_302))))))), p_908);
        }
        return l_178.sf;
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_908->g_119
 * writes: p_908->g_119
 */
int16_t  func_115(int32_t ** p_116, struct S5 * p_908)
{ /* block id: 55 */
    struct S2 *l_121 = &p_908->g_80;
    struct S2 **l_122 = &l_121;
    struct S2 *l_125 = &p_908->g_80;
    struct S2 **l_124 = &l_125;
    int32_t l_126[10][3][8] = {{{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL}},{{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL}},{{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL}},{{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL}},{{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL}},{{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL}},{{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL}},{{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL}},{{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL}},{{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL},{0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL,0x5C5F5F0BL,0x5C5F5F0BL,0x030AC00AL}}};
    int i, j, k;
    p_908->g_119 = p_908->g_119;
    (*l_124) = ((*l_122) = l_121);
    return l_126[7][2][4];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[33];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 33; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[33];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 33; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[11];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 11; i++)
            l_comm_values[i] = 1;
    struct S5 c_909;
    struct S5* p_908 = &c_909;
    struct S5 c_910 = {
        0x54DBBE56L, // p_908->g_10
        {&p_908->g_10,&p_908->g_10,&p_908->g_10,&p_908->g_10,&p_908->g_10,&p_908->g_10}, // p_908->g_9
        (-3L), // p_908->g_13
        0x046B51F0L, // p_908->g_28
        {&p_908->g_10}, // p_908->g_59
        0x7AEDDA49L, // p_908->g_62
        &p_908->g_62, // p_908->g_61
        {{0x646E9995L,0xD1L,-1L,0x522A42F9L,65534UL,0x76226F77L,8UL,3UL}}, // p_908->g_80
        &p_908->g_80.f0.f3, // p_908->g_120
        &p_908->g_120, // p_908->g_119
        (void*)0, // p_908->g_123
        {4294967293UL}, // p_908->g_127
        (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0UL), 0UL), // p_908->g_130
        (VECTOR(uint64_t, 16))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 1UL), 1UL), 1UL, 18446744073709551611UL, 1UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 1UL), (VECTOR(uint64_t, 2))(18446744073709551611UL, 1UL), 18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL), // p_908->g_149
        {(-1L),0x15C3L,(-1L),(-1L),0x15C3L,(-1L)}, // p_908->g_151
        18446744073709551610UL, // p_908->g_152
        (void*)0, // p_908->g_172
        {{{&p_908->g_172,&p_908->g_172,&p_908->g_172},{&p_908->g_172,&p_908->g_172,&p_908->g_172}},{{&p_908->g_172,&p_908->g_172,&p_908->g_172},{&p_908->g_172,&p_908->g_172,&p_908->g_172}}}, // p_908->g_171
        (VECTOR(uint64_t, 2))(0UL, 0x576C49478B05629BL), // p_908->g_181
        (VECTOR(int32_t, 16))(0x1F076C89L, (VECTOR(int32_t, 4))(0x1F076C89L, (VECTOR(int32_t, 2))(0x1F076C89L, 0L), 0L), 0L, 0x1F076C89L, 0L, (VECTOR(int32_t, 2))(0x1F076C89L, 0L), (VECTOR(int32_t, 2))(0x1F076C89L, 0L), 0x1F076C89L, 0L, 0x1F076C89L, 0L), // p_908->g_191
        (VECTOR(uint8_t, 8))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 2UL), 2UL), 2UL, 7UL, 2UL), // p_908->g_206
        {0x31FA9AA8L,5UL,0x31FA9AA8L,0x31FA9AA8L,5UL,0x31FA9AA8L,0x31FA9AA8L}, // p_908->g_214
        0x0C251C10L, // p_908->g_217
        (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), (-5L)), (-5L)), (-5L), (-3L), (-5L), (VECTOR(int8_t, 2))((-3L), (-5L)), (VECTOR(int8_t, 2))((-3L), (-5L)), (-3L), (-5L), (-3L), (-5L)), // p_908->g_235
        {1UL}, // p_908->g_252
        {{0x625D81B1L},{0x625D81B1L},{0x625D81B1L},{0x625D81B1L},{0x625D81B1L},{0x625D81B1L},{0x625D81B1L},{0x625D81B1L}}, // p_908->g_271
        {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}}, // p_908->g_291
        &p_908->g_291[7][6][1], // p_908->g_290
        &p_908->g_290, // p_908->g_289
        {-1L,0x4AL,0x75C8B4A970B7FCA5L,0x6F2928B9L,0x906DL,0x34E7CA7AL,0x63L,1UL}, // p_908->g_304
        &p_908->g_304, // p_908->g_303
        &p_908->g_303, // p_908->g_302
        {(void*)0}, // p_908->g_312
        0x6AL, // p_908->g_338
        {0x064DE0F0208967C4L}, // p_908->g_345
        0x27L, // p_908->g_358
        0x5CA4A8E8L, // p_908->g_360
        (VECTOR(int16_t, 16))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x1147L), 0x1147L), 0x1147L, 7L, 0x1147L, (VECTOR(int16_t, 2))(7L, 0x1147L), (VECTOR(int16_t, 2))(7L, 0x1147L), 7L, 0x1147L, 7L, 0x1147L), // p_908->g_367
        {-1L,0xD0A3387C044965DBL,-1L}, // p_908->g_379
        {0x6A43EC91L,9UL,0x32042D62B9C85AAEL,0x5E33333AL,0xF2CDL,0x68971AE0L,0UL,0xE002BA7AL}, // p_908->g_403
        (VECTOR(int32_t, 8))(0x6EC19138L, (VECTOR(int32_t, 4))(0x6EC19138L, (VECTOR(int32_t, 2))(0x6EC19138L, 0x33284590L), 0x33284590L), 0x33284590L, 0x6EC19138L, 0x33284590L), // p_908->g_421
        {1UL}, // p_908->g_432
        1UL, // p_908->g_459
        (void*)0, // p_908->g_462
        (VECTOR(int8_t, 2))(0x02L, (-4L)), // p_908->g_485
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x7416L), 0x7416L), 0x7416L, (-1L), 0x7416L), // p_908->g_493
        {0xFBCC8739L}, // p_908->g_498
        (VECTOR(int32_t, 16))(0x5D9EEC36L, (VECTOR(int32_t, 4))(0x5D9EEC36L, (VECTOR(int32_t, 2))(0x5D9EEC36L, 0L), 0L), 0L, 0x5D9EEC36L, 0L, (VECTOR(int32_t, 2))(0x5D9EEC36L, 0L), (VECTOR(int32_t, 2))(0x5D9EEC36L, 0L), 0x5D9EEC36L, 0L, 0x5D9EEC36L, 0L), // p_908->g_524
        {(void*)0,(void*)0}, // p_908->g_529
        65534UL, // p_908->g_585
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), 65535UL, 0UL, 65535UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), (VECTOR(uint16_t, 2))(0UL, 65535UL), 0UL, 65535UL, 0UL, 65535UL), // p_908->g_597
        (void*)0, // p_908->g_612
        {{{&p_908->g_289},{&p_908->g_289},{&p_908->g_289},{&p_908->g_289},{&p_908->g_289},{&p_908->g_289}},{{&p_908->g_289},{&p_908->g_289},{&p_908->g_289},{&p_908->g_289},{&p_908->g_289},{&p_908->g_289}},{{&p_908->g_289},{&p_908->g_289},{&p_908->g_289},{&p_908->g_289},{&p_908->g_289},{&p_908->g_289}},{{&p_908->g_289},{&p_908->g_289},{&p_908->g_289},{&p_908->g_289},{&p_908->g_289},{&p_908->g_289}}}, // p_908->g_614
        {-1L,252UL,-9L,-3L,1UL,0L,2UL,0x06E7F3EFL}, // p_908->g_634
        {-5L}, // p_908->g_647
        &p_908->g_647, // p_908->g_646
        &p_908->g_646, // p_908->g_645
        &p_908->g_9[1], // p_908->g_650
        (VECTOR(uint16_t, 16))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 65533UL), 65533UL), 65533UL, 65529UL, 65533UL, (VECTOR(uint16_t, 2))(65529UL, 65533UL), (VECTOR(uint16_t, 2))(65529UL, 65533UL), 65529UL, 65533UL, 65529UL, 65533UL), // p_908->g_681
        {{{0x4C955076L,0x32L,0x719D5C1881E7FAA2L,0x711EA0CEL,0x2143L,0x038E6050L,0x75L,4294967295UL}},{{0x4C955076L,0x32L,0x719D5C1881E7FAA2L,0x711EA0CEL,0x2143L,0x038E6050L,0x75L,4294967295UL}},{{0x4C955076L,0x32L,0x719D5C1881E7FAA2L,0x711EA0CEL,0x2143L,0x038E6050L,0x75L,4294967295UL}},{{0x4C955076L,0x32L,0x719D5C1881E7FAA2L,0x711EA0CEL,0x2143L,0x038E6050L,0x75L,4294967295UL}},{{0x4C955076L,0x32L,0x719D5C1881E7FAA2L,0x711EA0CEL,0x2143L,0x038E6050L,0x75L,4294967295UL}},{{0x4C955076L,0x32L,0x719D5C1881E7FAA2L,0x711EA0CEL,0x2143L,0x038E6050L,0x75L,4294967295UL}}}, // p_908->g_704
        {{{{0x0AB0D8EBL,250UL,-1L,0x5DA06883L,0xEC69L,1L,0xAAL,0xA911A8B2L}},{{0x0AB0D8EBL,250UL,-1L,0x5DA06883L,0xEC69L,1L,0xAAL,0xA911A8B2L}}},{{{0x0AB0D8EBL,250UL,-1L,0x5DA06883L,0xEC69L,1L,0xAAL,0xA911A8B2L}},{{0x0AB0D8EBL,250UL,-1L,0x5DA06883L,0xEC69L,1L,0xAAL,0xA911A8B2L}}},{{{0x0AB0D8EBL,250UL,-1L,0x5DA06883L,0xEC69L,1L,0xAAL,0xA911A8B2L}},{{0x0AB0D8EBL,250UL,-1L,0x5DA06883L,0xEC69L,1L,0xAAL,0xA911A8B2L}}}}, // p_908->g_705
        &p_908->g_9[1], // p_908->g_767
        (void*)0, // p_908->g_768
        {(void*)0,(void*)0}, // p_908->g_774
        (void*)0, // p_908->g_784
        {&p_908->g_784,&p_908->g_784,&p_908->g_784}, // p_908->g_783
        &p_908->g_783[2], // p_908->g_782
        (VECTOR(uint8_t, 4))(0x4EL, (VECTOR(uint8_t, 2))(0x4EL, 8UL), 8UL), // p_908->g_803
        (VECTOR(uint8_t, 4))(0xF3L, (VECTOR(uint8_t, 2))(0xF3L, 0UL), 0UL), // p_908->g_813
        (VECTOR(uint16_t, 4))(0x3048L, (VECTOR(uint16_t, 2))(0x3048L, 0x4A19L), 0x4A19L), // p_908->g_879
        (void*)0, // p_908->g_885
        (-4L), // p_908->g_904
        0, // p_908->v_collective
        sequence_input[get_global_id(0)], // p_908->global_0_offset
        sequence_input[get_global_id(1)], // p_908->global_1_offset
        sequence_input[get_global_id(2)], // p_908->global_2_offset
        sequence_input[get_local_id(0)], // p_908->local_0_offset
        sequence_input[get_local_id(1)], // p_908->local_1_offset
        sequence_input[get_local_id(2)], // p_908->local_2_offset
        sequence_input[get_group_id(0)], // p_908->group_0_offset
        sequence_input[get_group_id(1)], // p_908->group_1_offset
        sequence_input[get_group_id(2)], // p_908->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 11)), permutations[0][get_linear_local_id()])), // p_908->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_909 = c_910;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_908);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_908->g_10, "p_908->g_10", print_hash_value);
    transparent_crc(p_908->g_13, "p_908->g_13", print_hash_value);
    transparent_crc(p_908->g_28, "p_908->g_28", print_hash_value);
    transparent_crc(p_908->g_62, "p_908->g_62", print_hash_value);
    transparent_crc(p_908->g_80.f0.f0, "p_908->g_80.f0.f0", print_hash_value);
    transparent_crc(p_908->g_80.f0.f1, "p_908->g_80.f0.f1", print_hash_value);
    transparent_crc(p_908->g_80.f0.f2, "p_908->g_80.f0.f2", print_hash_value);
    transparent_crc(p_908->g_80.f0.f3, "p_908->g_80.f0.f3", print_hash_value);
    transparent_crc(p_908->g_80.f0.f4, "p_908->g_80.f0.f4", print_hash_value);
    transparent_crc(p_908->g_80.f0.f5, "p_908->g_80.f0.f5", print_hash_value);
    transparent_crc(p_908->g_80.f0.f6, "p_908->g_80.f0.f6", print_hash_value);
    transparent_crc(p_908->g_80.f0.f7, "p_908->g_80.f0.f7", print_hash_value);
    transparent_crc(p_908->g_127.f0, "p_908->g_127.f0", print_hash_value);
    transparent_crc(p_908->g_130.x, "p_908->g_130.x", print_hash_value);
    transparent_crc(p_908->g_130.y, "p_908->g_130.y", print_hash_value);
    transparent_crc(p_908->g_130.z, "p_908->g_130.z", print_hash_value);
    transparent_crc(p_908->g_130.w, "p_908->g_130.w", print_hash_value);
    transparent_crc(p_908->g_149.s0, "p_908->g_149.s0", print_hash_value);
    transparent_crc(p_908->g_149.s1, "p_908->g_149.s1", print_hash_value);
    transparent_crc(p_908->g_149.s2, "p_908->g_149.s2", print_hash_value);
    transparent_crc(p_908->g_149.s3, "p_908->g_149.s3", print_hash_value);
    transparent_crc(p_908->g_149.s4, "p_908->g_149.s4", print_hash_value);
    transparent_crc(p_908->g_149.s5, "p_908->g_149.s5", print_hash_value);
    transparent_crc(p_908->g_149.s6, "p_908->g_149.s6", print_hash_value);
    transparent_crc(p_908->g_149.s7, "p_908->g_149.s7", print_hash_value);
    transparent_crc(p_908->g_149.s8, "p_908->g_149.s8", print_hash_value);
    transparent_crc(p_908->g_149.s9, "p_908->g_149.s9", print_hash_value);
    transparent_crc(p_908->g_149.sa, "p_908->g_149.sa", print_hash_value);
    transparent_crc(p_908->g_149.sb, "p_908->g_149.sb", print_hash_value);
    transparent_crc(p_908->g_149.sc, "p_908->g_149.sc", print_hash_value);
    transparent_crc(p_908->g_149.sd, "p_908->g_149.sd", print_hash_value);
    transparent_crc(p_908->g_149.se, "p_908->g_149.se", print_hash_value);
    transparent_crc(p_908->g_149.sf, "p_908->g_149.sf", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_908->g_151[i], "p_908->g_151[i]", print_hash_value);

    }
    transparent_crc(p_908->g_152, "p_908->g_152", print_hash_value);
    transparent_crc(p_908->g_181.x, "p_908->g_181.x", print_hash_value);
    transparent_crc(p_908->g_181.y, "p_908->g_181.y", print_hash_value);
    transparent_crc(p_908->g_191.s0, "p_908->g_191.s0", print_hash_value);
    transparent_crc(p_908->g_191.s1, "p_908->g_191.s1", print_hash_value);
    transparent_crc(p_908->g_191.s2, "p_908->g_191.s2", print_hash_value);
    transparent_crc(p_908->g_191.s3, "p_908->g_191.s3", print_hash_value);
    transparent_crc(p_908->g_191.s4, "p_908->g_191.s4", print_hash_value);
    transparent_crc(p_908->g_191.s5, "p_908->g_191.s5", print_hash_value);
    transparent_crc(p_908->g_191.s6, "p_908->g_191.s6", print_hash_value);
    transparent_crc(p_908->g_191.s7, "p_908->g_191.s7", print_hash_value);
    transparent_crc(p_908->g_191.s8, "p_908->g_191.s8", print_hash_value);
    transparent_crc(p_908->g_191.s9, "p_908->g_191.s9", print_hash_value);
    transparent_crc(p_908->g_191.sa, "p_908->g_191.sa", print_hash_value);
    transparent_crc(p_908->g_191.sb, "p_908->g_191.sb", print_hash_value);
    transparent_crc(p_908->g_191.sc, "p_908->g_191.sc", print_hash_value);
    transparent_crc(p_908->g_191.sd, "p_908->g_191.sd", print_hash_value);
    transparent_crc(p_908->g_191.se, "p_908->g_191.se", print_hash_value);
    transparent_crc(p_908->g_191.sf, "p_908->g_191.sf", print_hash_value);
    transparent_crc(p_908->g_206.s0, "p_908->g_206.s0", print_hash_value);
    transparent_crc(p_908->g_206.s1, "p_908->g_206.s1", print_hash_value);
    transparent_crc(p_908->g_206.s2, "p_908->g_206.s2", print_hash_value);
    transparent_crc(p_908->g_206.s3, "p_908->g_206.s3", print_hash_value);
    transparent_crc(p_908->g_206.s4, "p_908->g_206.s4", print_hash_value);
    transparent_crc(p_908->g_206.s5, "p_908->g_206.s5", print_hash_value);
    transparent_crc(p_908->g_206.s6, "p_908->g_206.s6", print_hash_value);
    transparent_crc(p_908->g_206.s7, "p_908->g_206.s7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_908->g_214[i], "p_908->g_214[i]", print_hash_value);

    }
    transparent_crc(p_908->g_217, "p_908->g_217", print_hash_value);
    transparent_crc(p_908->g_235.s0, "p_908->g_235.s0", print_hash_value);
    transparent_crc(p_908->g_235.s1, "p_908->g_235.s1", print_hash_value);
    transparent_crc(p_908->g_235.s2, "p_908->g_235.s2", print_hash_value);
    transparent_crc(p_908->g_235.s3, "p_908->g_235.s3", print_hash_value);
    transparent_crc(p_908->g_235.s4, "p_908->g_235.s4", print_hash_value);
    transparent_crc(p_908->g_235.s5, "p_908->g_235.s5", print_hash_value);
    transparent_crc(p_908->g_235.s6, "p_908->g_235.s6", print_hash_value);
    transparent_crc(p_908->g_235.s7, "p_908->g_235.s7", print_hash_value);
    transparent_crc(p_908->g_235.s8, "p_908->g_235.s8", print_hash_value);
    transparent_crc(p_908->g_235.s9, "p_908->g_235.s9", print_hash_value);
    transparent_crc(p_908->g_235.sa, "p_908->g_235.sa", print_hash_value);
    transparent_crc(p_908->g_235.sb, "p_908->g_235.sb", print_hash_value);
    transparent_crc(p_908->g_235.sc, "p_908->g_235.sc", print_hash_value);
    transparent_crc(p_908->g_235.sd, "p_908->g_235.sd", print_hash_value);
    transparent_crc(p_908->g_235.se, "p_908->g_235.se", print_hash_value);
    transparent_crc(p_908->g_235.sf, "p_908->g_235.sf", print_hash_value);
    transparent_crc(p_908->g_252.f0, "p_908->g_252.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_908->g_271[i].f0, "p_908->g_271[i].f0", print_hash_value);

    }
    transparent_crc(p_908->g_304.f0, "p_908->g_304.f0", print_hash_value);
    transparent_crc(p_908->g_304.f1, "p_908->g_304.f1", print_hash_value);
    transparent_crc(p_908->g_304.f2, "p_908->g_304.f2", print_hash_value);
    transparent_crc(p_908->g_304.f3, "p_908->g_304.f3", print_hash_value);
    transparent_crc(p_908->g_304.f4, "p_908->g_304.f4", print_hash_value);
    transparent_crc(p_908->g_304.f5, "p_908->g_304.f5", print_hash_value);
    transparent_crc(p_908->g_304.f6, "p_908->g_304.f6", print_hash_value);
    transparent_crc(p_908->g_304.f7, "p_908->g_304.f7", print_hash_value);
    transparent_crc(p_908->g_338, "p_908->g_338", print_hash_value);
    transparent_crc(p_908->g_345.f0, "p_908->g_345.f0", print_hash_value);
    transparent_crc(p_908->g_358, "p_908->g_358", print_hash_value);
    transparent_crc(p_908->g_360, "p_908->g_360", print_hash_value);
    transparent_crc(p_908->g_367.s0, "p_908->g_367.s0", print_hash_value);
    transparent_crc(p_908->g_367.s1, "p_908->g_367.s1", print_hash_value);
    transparent_crc(p_908->g_367.s2, "p_908->g_367.s2", print_hash_value);
    transparent_crc(p_908->g_367.s3, "p_908->g_367.s3", print_hash_value);
    transparent_crc(p_908->g_367.s4, "p_908->g_367.s4", print_hash_value);
    transparent_crc(p_908->g_367.s5, "p_908->g_367.s5", print_hash_value);
    transparent_crc(p_908->g_367.s6, "p_908->g_367.s6", print_hash_value);
    transparent_crc(p_908->g_367.s7, "p_908->g_367.s7", print_hash_value);
    transparent_crc(p_908->g_367.s8, "p_908->g_367.s8", print_hash_value);
    transparent_crc(p_908->g_367.s9, "p_908->g_367.s9", print_hash_value);
    transparent_crc(p_908->g_367.sa, "p_908->g_367.sa", print_hash_value);
    transparent_crc(p_908->g_367.sb, "p_908->g_367.sb", print_hash_value);
    transparent_crc(p_908->g_367.sc, "p_908->g_367.sc", print_hash_value);
    transparent_crc(p_908->g_367.sd, "p_908->g_367.sd", print_hash_value);
    transparent_crc(p_908->g_367.se, "p_908->g_367.se", print_hash_value);
    transparent_crc(p_908->g_367.sf, "p_908->g_367.sf", print_hash_value);
    transparent_crc(p_908->g_379.f0, "p_908->g_379.f0", print_hash_value);
    transparent_crc(p_908->g_379.f1, "p_908->g_379.f1", print_hash_value);
    transparent_crc(p_908->g_379.f2, "p_908->g_379.f2", print_hash_value);
    transparent_crc(p_908->g_403.f0, "p_908->g_403.f0", print_hash_value);
    transparent_crc(p_908->g_403.f1, "p_908->g_403.f1", print_hash_value);
    transparent_crc(p_908->g_403.f2, "p_908->g_403.f2", print_hash_value);
    transparent_crc(p_908->g_403.f3, "p_908->g_403.f3", print_hash_value);
    transparent_crc(p_908->g_403.f4, "p_908->g_403.f4", print_hash_value);
    transparent_crc(p_908->g_403.f5, "p_908->g_403.f5", print_hash_value);
    transparent_crc(p_908->g_403.f6, "p_908->g_403.f6", print_hash_value);
    transparent_crc(p_908->g_403.f7, "p_908->g_403.f7", print_hash_value);
    transparent_crc(p_908->g_421.s0, "p_908->g_421.s0", print_hash_value);
    transparent_crc(p_908->g_421.s1, "p_908->g_421.s1", print_hash_value);
    transparent_crc(p_908->g_421.s2, "p_908->g_421.s2", print_hash_value);
    transparent_crc(p_908->g_421.s3, "p_908->g_421.s3", print_hash_value);
    transparent_crc(p_908->g_421.s4, "p_908->g_421.s4", print_hash_value);
    transparent_crc(p_908->g_421.s5, "p_908->g_421.s5", print_hash_value);
    transparent_crc(p_908->g_421.s6, "p_908->g_421.s6", print_hash_value);
    transparent_crc(p_908->g_421.s7, "p_908->g_421.s7", print_hash_value);
    transparent_crc(p_908->g_432.f0, "p_908->g_432.f0", print_hash_value);
    transparent_crc(p_908->g_459, "p_908->g_459", print_hash_value);
    transparent_crc(p_908->g_485.x, "p_908->g_485.x", print_hash_value);
    transparent_crc(p_908->g_485.y, "p_908->g_485.y", print_hash_value);
    transparent_crc(p_908->g_493.s0, "p_908->g_493.s0", print_hash_value);
    transparent_crc(p_908->g_493.s1, "p_908->g_493.s1", print_hash_value);
    transparent_crc(p_908->g_493.s2, "p_908->g_493.s2", print_hash_value);
    transparent_crc(p_908->g_493.s3, "p_908->g_493.s3", print_hash_value);
    transparent_crc(p_908->g_493.s4, "p_908->g_493.s4", print_hash_value);
    transparent_crc(p_908->g_493.s5, "p_908->g_493.s5", print_hash_value);
    transparent_crc(p_908->g_493.s6, "p_908->g_493.s6", print_hash_value);
    transparent_crc(p_908->g_493.s7, "p_908->g_493.s7", print_hash_value);
    transparent_crc(p_908->g_498.f0, "p_908->g_498.f0", print_hash_value);
    transparent_crc(p_908->g_524.s0, "p_908->g_524.s0", print_hash_value);
    transparent_crc(p_908->g_524.s1, "p_908->g_524.s1", print_hash_value);
    transparent_crc(p_908->g_524.s2, "p_908->g_524.s2", print_hash_value);
    transparent_crc(p_908->g_524.s3, "p_908->g_524.s3", print_hash_value);
    transparent_crc(p_908->g_524.s4, "p_908->g_524.s4", print_hash_value);
    transparent_crc(p_908->g_524.s5, "p_908->g_524.s5", print_hash_value);
    transparent_crc(p_908->g_524.s6, "p_908->g_524.s6", print_hash_value);
    transparent_crc(p_908->g_524.s7, "p_908->g_524.s7", print_hash_value);
    transparent_crc(p_908->g_524.s8, "p_908->g_524.s8", print_hash_value);
    transparent_crc(p_908->g_524.s9, "p_908->g_524.s9", print_hash_value);
    transparent_crc(p_908->g_524.sa, "p_908->g_524.sa", print_hash_value);
    transparent_crc(p_908->g_524.sb, "p_908->g_524.sb", print_hash_value);
    transparent_crc(p_908->g_524.sc, "p_908->g_524.sc", print_hash_value);
    transparent_crc(p_908->g_524.sd, "p_908->g_524.sd", print_hash_value);
    transparent_crc(p_908->g_524.se, "p_908->g_524.se", print_hash_value);
    transparent_crc(p_908->g_524.sf, "p_908->g_524.sf", print_hash_value);
    transparent_crc(p_908->g_585, "p_908->g_585", print_hash_value);
    transparent_crc(p_908->g_597.s0, "p_908->g_597.s0", print_hash_value);
    transparent_crc(p_908->g_597.s1, "p_908->g_597.s1", print_hash_value);
    transparent_crc(p_908->g_597.s2, "p_908->g_597.s2", print_hash_value);
    transparent_crc(p_908->g_597.s3, "p_908->g_597.s3", print_hash_value);
    transparent_crc(p_908->g_597.s4, "p_908->g_597.s4", print_hash_value);
    transparent_crc(p_908->g_597.s5, "p_908->g_597.s5", print_hash_value);
    transparent_crc(p_908->g_597.s6, "p_908->g_597.s6", print_hash_value);
    transparent_crc(p_908->g_597.s7, "p_908->g_597.s7", print_hash_value);
    transparent_crc(p_908->g_597.s8, "p_908->g_597.s8", print_hash_value);
    transparent_crc(p_908->g_597.s9, "p_908->g_597.s9", print_hash_value);
    transparent_crc(p_908->g_597.sa, "p_908->g_597.sa", print_hash_value);
    transparent_crc(p_908->g_597.sb, "p_908->g_597.sb", print_hash_value);
    transparent_crc(p_908->g_597.sc, "p_908->g_597.sc", print_hash_value);
    transparent_crc(p_908->g_597.sd, "p_908->g_597.sd", print_hash_value);
    transparent_crc(p_908->g_597.se, "p_908->g_597.se", print_hash_value);
    transparent_crc(p_908->g_597.sf, "p_908->g_597.sf", print_hash_value);
    transparent_crc(p_908->g_634.f0, "p_908->g_634.f0", print_hash_value);
    transparent_crc(p_908->g_634.f1, "p_908->g_634.f1", print_hash_value);
    transparent_crc(p_908->g_634.f2, "p_908->g_634.f2", print_hash_value);
    transparent_crc(p_908->g_634.f3, "p_908->g_634.f3", print_hash_value);
    transparent_crc(p_908->g_634.f4, "p_908->g_634.f4", print_hash_value);
    transparent_crc(p_908->g_634.f5, "p_908->g_634.f5", print_hash_value);
    transparent_crc(p_908->g_634.f6, "p_908->g_634.f6", print_hash_value);
    transparent_crc(p_908->g_634.f7, "p_908->g_634.f7", print_hash_value);
    transparent_crc(p_908->g_647.f0, "p_908->g_647.f0", print_hash_value);
    transparent_crc(p_908->g_681.s0, "p_908->g_681.s0", print_hash_value);
    transparent_crc(p_908->g_681.s1, "p_908->g_681.s1", print_hash_value);
    transparent_crc(p_908->g_681.s2, "p_908->g_681.s2", print_hash_value);
    transparent_crc(p_908->g_681.s3, "p_908->g_681.s3", print_hash_value);
    transparent_crc(p_908->g_681.s4, "p_908->g_681.s4", print_hash_value);
    transparent_crc(p_908->g_681.s5, "p_908->g_681.s5", print_hash_value);
    transparent_crc(p_908->g_681.s6, "p_908->g_681.s6", print_hash_value);
    transparent_crc(p_908->g_681.s7, "p_908->g_681.s7", print_hash_value);
    transparent_crc(p_908->g_681.s8, "p_908->g_681.s8", print_hash_value);
    transparent_crc(p_908->g_681.s9, "p_908->g_681.s9", print_hash_value);
    transparent_crc(p_908->g_681.sa, "p_908->g_681.sa", print_hash_value);
    transparent_crc(p_908->g_681.sb, "p_908->g_681.sb", print_hash_value);
    transparent_crc(p_908->g_681.sc, "p_908->g_681.sc", print_hash_value);
    transparent_crc(p_908->g_681.sd, "p_908->g_681.sd", print_hash_value);
    transparent_crc(p_908->g_681.se, "p_908->g_681.se", print_hash_value);
    transparent_crc(p_908->g_681.sf, "p_908->g_681.sf", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_908->g_704[i].f0.f0, "p_908->g_704[i].f0.f0", print_hash_value);
        transparent_crc(p_908->g_704[i].f0.f1, "p_908->g_704[i].f0.f1", print_hash_value);
        transparent_crc(p_908->g_704[i].f0.f2, "p_908->g_704[i].f0.f2", print_hash_value);
        transparent_crc(p_908->g_704[i].f0.f3, "p_908->g_704[i].f0.f3", print_hash_value);
        transparent_crc(p_908->g_704[i].f0.f4, "p_908->g_704[i].f0.f4", print_hash_value);
        transparent_crc(p_908->g_704[i].f0.f5, "p_908->g_704[i].f0.f5", print_hash_value);
        transparent_crc(p_908->g_704[i].f0.f6, "p_908->g_704[i].f0.f6", print_hash_value);
        transparent_crc(p_908->g_704[i].f0.f7, "p_908->g_704[i].f0.f7", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_908->g_705[i][j].f0.f0, "p_908->g_705[i][j].f0.f0", print_hash_value);
            transparent_crc(p_908->g_705[i][j].f0.f1, "p_908->g_705[i][j].f0.f1", print_hash_value);
            transparent_crc(p_908->g_705[i][j].f0.f2, "p_908->g_705[i][j].f0.f2", print_hash_value);
            transparent_crc(p_908->g_705[i][j].f0.f3, "p_908->g_705[i][j].f0.f3", print_hash_value);
            transparent_crc(p_908->g_705[i][j].f0.f4, "p_908->g_705[i][j].f0.f4", print_hash_value);
            transparent_crc(p_908->g_705[i][j].f0.f5, "p_908->g_705[i][j].f0.f5", print_hash_value);
            transparent_crc(p_908->g_705[i][j].f0.f6, "p_908->g_705[i][j].f0.f6", print_hash_value);
            transparent_crc(p_908->g_705[i][j].f0.f7, "p_908->g_705[i][j].f0.f7", print_hash_value);

        }
    }
    transparent_crc(p_908->g_803.x, "p_908->g_803.x", print_hash_value);
    transparent_crc(p_908->g_803.y, "p_908->g_803.y", print_hash_value);
    transparent_crc(p_908->g_803.z, "p_908->g_803.z", print_hash_value);
    transparent_crc(p_908->g_803.w, "p_908->g_803.w", print_hash_value);
    transparent_crc(p_908->g_813.x, "p_908->g_813.x", print_hash_value);
    transparent_crc(p_908->g_813.y, "p_908->g_813.y", print_hash_value);
    transparent_crc(p_908->g_813.z, "p_908->g_813.z", print_hash_value);
    transparent_crc(p_908->g_813.w, "p_908->g_813.w", print_hash_value);
    transparent_crc(p_908->g_879.x, "p_908->g_879.x", print_hash_value);
    transparent_crc(p_908->g_879.y, "p_908->g_879.y", print_hash_value);
    transparent_crc(p_908->g_879.z, "p_908->g_879.z", print_hash_value);
    transparent_crc(p_908->g_879.w, "p_908->g_879.w", print_hash_value);
    transparent_crc(p_908->g_904, "p_908->g_904", print_hash_value);
    transparent_crc(p_908->v_collective, "p_908->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 33; i++)
            transparent_crc(p_908->g_special_values[i + 33 * get_linear_group_id()], "p_908->g_special_values[i + 33 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 33; i++)
            transparent_crc(p_908->l_special_values[i], "p_908->l_special_values[i]", print_hash_value);
    transparent_crc(p_908->l_comm_values[get_linear_local_id()], "p_908->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_908->g_comm_values[get_linear_group_id() * 11 + get_linear_local_id()], "p_908->g_comm_values[get_linear_group_id() * 11 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
