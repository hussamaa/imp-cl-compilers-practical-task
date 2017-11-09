// --atomics 71 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 70,84,1 -l 1,12,1
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

__constant uint32_t permutations[10][12] = {
{10,3,2,7,9,11,1,4,0,8,5,6}, // permutation 0
{1,9,6,8,4,0,5,11,10,3,7,2}, // permutation 1
{4,5,3,1,10,6,0,9,8,2,11,7}, // permutation 2
{7,10,2,9,8,0,1,4,6,5,3,11}, // permutation 3
{1,9,7,6,2,0,4,8,10,5,3,11}, // permutation 4
{4,3,1,9,7,6,2,10,0,11,5,8}, // permutation 5
{2,5,3,1,8,6,0,9,10,11,7,4}, // permutation 6
{8,0,1,7,11,5,9,3,6,10,2,4}, // permutation 7
{7,0,1,3,5,10,2,6,11,9,8,4}, // permutation 8
{11,0,4,6,5,1,8,7,3,10,9,2} // permutation 9
};

// Seed: 3484251646

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   uint32_t  f1;
   int32_t  f2;
   uint32_t  f3;
};

union U1 {
   int8_t * f0;
   volatile struct S0  f1;
};

union U2 {
   int8_t * f0;
};

union U3 {
   struct S0  f0;
   volatile struct S0  f1;
   volatile int8_t  f2;
   volatile int32_t  f3;
   uint32_t  f4;
};

union U4 {
   int64_t  f0;
   int64_t  f1;
   struct S0  f2;
   int64_t  f3;
   uint64_t  f4;
};

struct S5 {
    int8_t g_14;
    union U3 g_47;
    volatile union U1 g_65;
    volatile VECTOR(uint16_t, 4) g_83;
    int8_t g_85;
    volatile int32_t g_90;
    volatile int32_t * volatile g_89[7][1];
    union U4 g_91;
    uint8_t g_93;
    VECTOR(uint32_t, 16) g_94;
    uint64_t g_96[5][4];
    volatile VECTOR(uint8_t, 4) g_113;
    int8_t *g_127;
    int8_t **g_126[6][3][10];
    int16_t g_130;
    union U2 g_131[3][8][10];
    int64_t *g_132;
    union U3 g_135;
    union U3 g_136;
    volatile VECTOR(int32_t, 8) g_153;
    struct S0 * volatile g_167;
    struct S0 * volatile g_168;
    struct S0 * volatile g_169[5];
    struct S0 * volatile g_170;
    int32_t *g_172;
    int32_t ** volatile g_171[9];
    volatile union U3 g_185;
    int32_t ** volatile g_208;
    int32_t ** volatile g_210[5];
    struct S0 * volatile g_214;
    volatile int32_t g_225;
    volatile uint64_t g_227;
    int32_t g_247[2][3][5];
    struct S0 * volatile g_266[1][8];
    uint16_t g_293[3][1];
    int32_t *g_300[2];
    int32_t ** volatile g_299[7][3][5];
    uint16_t g_304;
    int32_t g_323;
    volatile VECTOR(int8_t, 8) g_324;
    struct S0 * volatile g_331;
    int32_t g_347;
    VECTOR(uint16_t, 16) g_363;
    union U1 g_371;
    union U1 *g_373;
    union U1 ** volatile g_372[1][5];
    union U1 ** volatile g_374;
    union U3 *g_380;
    union U3 **g_379;
    VECTOR(int32_t, 2) g_382;
    uint64_t *g_395;
    VECTOR(int8_t, 16) g_396;
    int32_t g_704;
    volatile union U2 g_707;
    volatile union U2 * volatile g_706;
    volatile union U2 * volatile * volatile g_705;
    uint64_t g_717[1][3][7];
    union U3 g_726;
    int32_t g_729;
    int32_t ** volatile g_731;
    volatile uint32_t g_751;
    VECTOR(uint64_t, 8) g_763;
    VECTOR(int32_t, 16) g_784;
    VECTOR(int32_t, 4) g_787;
    VECTOR(int32_t, 8) g_789;
    volatile VECTOR(uint16_t, 4) g_791;
    VECTOR(uint16_t, 2) g_793;
    VECTOR(uint16_t, 2) g_794;
    int32_t ** volatile g_807;
    volatile VECTOR(int64_t, 16) g_810;
    volatile VECTOR(int64_t, 2) g_811;
    VECTOR(int64_t, 16) g_813;
    volatile union U3 g_818;
    VECTOR(int8_t, 4) g_819;
    int16_t *g_829;
    int16_t **g_828;
    uint32_t g_830;
    volatile VECTOR(uint16_t, 16) g_846;
    int32_t *g_886[1];
    int32_t **g_885;
    union U2 *g_889[4];
    union U2 **g_888;
    VECTOR(uint8_t, 2) g_904;
    VECTOR(int8_t, 4) g_907;
    volatile VECTOR(uint8_t, 2) g_931;
    uint64_t g_934;
    volatile VECTOR(int8_t, 8) g_939;
    VECTOR(int8_t, 8) g_943;
    VECTOR(uint32_t, 8) g_961;
    volatile VECTOR(uint16_t, 4) g_971;
    VECTOR(int64_t, 16) g_972;
    uint32_t g_974;
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
uint64_t  func_1(struct S5 * p_1023);
int32_t  func_3(int32_t  p_4, int64_t  p_5, int32_t  p_6, struct S5 * p_1023);
int64_t  func_7(int8_t * p_8, int8_t * p_9, int32_t  p_10, int32_t * p_11, int8_t * p_12, struct S5 * p_1023);
uint32_t  func_21(uint64_t  p_22, int8_t * p_23, int8_t * p_24, int8_t * p_25, int8_t * p_26, struct S5 * p_1023);
int8_t * func_29(uint16_t  p_30, uint32_t  p_31, int32_t  p_32, uint64_t  p_33, int8_t ** p_34, struct S5 * p_1023);
uint16_t  func_35(uint8_t  p_36, int8_t * p_37, int32_t * p_38, uint64_t  p_39, struct S5 * p_1023);
int8_t * func_41(int16_t  p_42, uint32_t  p_43, struct S5 * p_1023);
union U3  func_51(int32_t  p_52, int8_t ** p_53, int32_t * p_54, struct S5 * p_1023);
int32_t  func_55(uint64_t  p_56, uint32_t  p_57, struct S5 * p_1023);
union U3 * func_59(int8_t ** p_60, uint32_t  p_61, uint32_t  p_62, struct S5 * p_1023);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1023->g_14 p_1023->g_comm_values p_1023->l_comm_values p_1023->g_47.f0.f1 p_1023->g_172 p_1023->g_91.f0 p_1023->g_91.f2.f3 p_1023->g_185.f0.f3 p_1023->g_94 p_1023->g_93 p_1023->g_132 p_1023->g_127 p_1023->g_136.f0.f2 p_1023->g_185.f0.f1 p_1023->g_96 p_1023->g_47.f0.f2 p_1023->g_136.f0.f0 p_1023->g_153 p_1023->g_304 p_1023->g_65 p_1023->g_323 p_1023->g_227 p_1023->g_47 p_1023->g_331 p_1023->g_135.f0.f1 p_1023->g_247 p_1023->g_347 p_1023->g_363 p_1023->g_374 p_1023->g_47.f4 p_1023->g_136.f0.f1 p_1023->g_379 p_1023->g_382 p_1023->g_324 p_1023->g_396 p_1023->g_293 p_1023->g_91.f2.f0 p_1023->g_85 p_1023->g_91.f4 p_1023->g_704 p_1023->g_135.f0.f0 p_1023->g_91.f2.f2 p_1023->g_726 p_1023->g_731 p_1023->g_135.f0.f3 p_1023->g_751 p_1023->g_784 p_1023->g_787 p_1023->g_789 p_1023->g_791 p_1023->g_83 p_1023->g_793 p_1023->g_794 p_1023->g_90 p_1023->g_136.f0.f3 p_1023->g_807 p_1023->g_810 p_1023->g_811 p_1023->g_813 p_1023->g_818 p_1023->g_819 p_1023->g_818.f0.f0 p_1023->g_828 p_1023->g_829 p_1023->g_830 p_1023->g_726.f0.f0 p_1023->g_130 p_1023->g_706 p_1023->g_707 p_1023->g_208 p_1023->g_888 p_1023->g_904 p_1023->g_907 p_1023->g_91 p_1023->g_931 p_1023->g_939 p_1023->g_943 p_1023->g_885 p_1023->g_729 p_1023->g_380 p_1023->g_705 p_1023->g_961 p_1023->g_373 p_1023->g_371 p_1023->g_971 p_1023->g_972 p_1023->g_818.f0.f2 p_1023->g_726.f0.f1 p_1023->g_889
 * writes: p_1023->g_14 p_1023->g_47.f0.f2 p_1023->g_91.f2.f3 p_1023->g_135.f0 p_1023->g_93 p_1023->g_293 p_1023->g_96 p_1023->g_172 p_1023->g_136.f0.f0 p_1023->g_304 p_1023->g_91.f0 p_1023->g_323 p_1023->g_227 p_1023->g_85 p_1023->g_130 p_1023->g_47.f0 p_1023->g_347 p_1023->g_247 p_1023->g_373 p_1023->g_47.f4 p_1023->g_379 p_1023->g_395 p_1023->g_91.f2.f0 p_1023->g_91.f4 p_1023->g_300 p_1023->g_704 p_1023->g_705 p_1023->g_91.f2.f2 p_1023->g_717 p_1023->g_729 p_1023->g_94 p_1023->g_751 p_1023->g_136.f0.f3 p_1023->g_830 p_1023->g_726.f0.f0 p_1023->g_885 p_1023->g_888 p_1023->g_934 p_1023->g_974 p_1023->g_904 p_1023->g_726.f0.f1 p_1023->g_889
 */
uint64_t  func_1(struct S5 * p_1023)
{ /* block id: 4 */
    int32_t *l_2 = (void*)0;
    int8_t *l_13[7] = {&p_1023->g_14,&p_1023->g_14,&p_1023->g_14,&p_1023->g_14,&p_1023->g_14,&p_1023->g_14,&p_1023->g_14};
    int32_t l_20[10][9][2] = {{{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)}},{{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)}},{{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)}},{{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)}},{{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)}},{{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)}},{{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)}},{{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)}},{{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)}},{{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)},{0L,(-9L)}}};
    int8_t *l_27 = (void*)0;
    int8_t **l_28 = &l_27;
    uint64_t l_40 = 0x19C85691F3A4B440L;
    int8_t *l_296[9] = {&p_1023->g_85,&p_1023->g_85,&p_1023->g_85,&p_1023->g_85,&p_1023->g_85,&p_1023->g_85,&p_1023->g_85,&p_1023->g_85,&p_1023->g_85};
    uint64_t l_344 = 0xD9490654CEB2A3E3L;
    int32_t *l_345 = (void*)0;
    int32_t *l_346 = &p_1023->g_347;
    int32_t *l_348 = &p_1023->g_247[0][1][0];
    int32_t *l_703 = &p_1023->g_704;
    int8_t l_743 = 0x26L;
    VECTOR(int16_t, 16) l_758 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x6044L), 0x6044L), 0x6044L, 1L, 0x6044L, (VECTOR(int16_t, 2))(1L, 0x6044L), (VECTOR(int16_t, 2))(1L, 0x6044L), 1L, 0x6044L, 1L, 0x6044L);
    VECTOR(int16_t, 2) l_779 = (VECTOR(int16_t, 2))(0x2D13L, 0x0FA2L);
    VECTOR(int32_t, 2) l_786 = (VECTOR(int32_t, 2))(0x32F5D994L, 0x7648DF29L);
    union U3 **l_800 = &p_1023->g_380;
    VECTOR(int64_t, 2) l_812 = (VECTOR(int64_t, 2))((-1L), 0x42FF2F75C2191903L);
    uint32_t l_831 = 3UL;
    uint32_t l_852 = 2UL;
    uint32_t l_865 = 0xEE93FFACL;
    int32_t l_876 = (-1L);
    struct S0 l_880 = {-4L,4294967295UL,0x0BC404B7L,0x325EECA9L};
    union U1 *l_910 = &p_1023->g_371;
    int32_t *l_1012 = &l_20[1][1][0];
    int32_t *l_1013 = &p_1023->g_704;
    int32_t *l_1014 = &p_1023->g_247[1][1][2];
    int32_t *l_1015 = &p_1023->g_726.f0.f2;
    int32_t *l_1016[3][5][2] = {{{&p_1023->g_135.f0.f2,&l_20[1][1][0]},{&p_1023->g_135.f0.f2,&l_20[1][1][0]},{&p_1023->g_135.f0.f2,&l_20[1][1][0]},{&p_1023->g_135.f0.f2,&l_20[1][1][0]},{&p_1023->g_135.f0.f2,&l_20[1][1][0]}},{{&p_1023->g_135.f0.f2,&l_20[1][1][0]},{&p_1023->g_135.f0.f2,&l_20[1][1][0]},{&p_1023->g_135.f0.f2,&l_20[1][1][0]},{&p_1023->g_135.f0.f2,&l_20[1][1][0]},{&p_1023->g_135.f0.f2,&l_20[1][1][0]}},{{&p_1023->g_135.f0.f2,&l_20[1][1][0]},{&p_1023->g_135.f0.f2,&l_20[1][1][0]},{&p_1023->g_135.f0.f2,&l_20[1][1][0]},{&p_1023->g_135.f0.f2,&l_20[1][1][0]},{&p_1023->g_135.f0.f2,&l_20[1][1][0]}}};
    int8_t l_1017 = 0x43L;
    int8_t l_1018[3][7] = {{8L,(-3L),(-3L),8L,8L,(-3L),(-3L)},{8L,(-3L),(-3L),8L,8L,(-3L),(-3L)},{8L,(-3L),(-3L),8L,8L,(-3L),(-3L)}};
    int32_t l_1019 = 0x137A318CL;
    uint32_t l_1020 = 0UL;
    int i, j, k;
    l_2 = l_2;
    if (((*l_703) &= (func_3(((func_7(l_13[5], l_13[5], ((*l_346) |= (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int8_t_s(0x06L)), (((((safe_rshift_func_int8_t_s_s(((((p_1023->g_14 , (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(0x5702377DL, 0x46BD29A2L, 0x7F6A191AL, 4294967295UL)), l_20[1][1][0], func_21(p_1023->g_comm_values[p_1023->tid], ((*l_28) = l_27), func_29(func_35(l_40, func_41(p_1023->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1023->tid, 12))], p_1023->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1023->tid, 12))], p_1023), &l_20[5][8][1], p_1023->g_91.f0, p_1023), l_40, p_1023->g_185.f0.f3, p_1023->g_94.sf, &p_1023->g_127, p_1023), l_13[5], l_296[4], p_1023), 0xDE786BADL, 0UL)).s6632473446143760)).s2b)).hi , 4294967295UL)) >= p_1023->g_247[1][1][2]) < p_1023->g_247[0][1][2]) > l_40), 6)) | l_344) >= p_1023->g_247[1][0][2]) || 7L) < p_1023->g_247[0][1][2])))), l_348, l_13[5], p_1023) , p_1023->g_382.x) ^ p_1023->g_396.s9), p_1023->g_396.s4, l_344, p_1023) , (*l_348))))
    { /* block id: 400 */
        p_1023->g_705 = (GROUP_DIVERGE(1, 1) , (void*)0);
    }
    else
    { /* block id: 402 */
        int16_t *l_716[5] = {&p_1023->g_130,&p_1023->g_130,&p_1023->g_130,&p_1023->g_130,&p_1023->g_130};
        int8_t ***l_718[2];
        int32_t l_720 = (-1L);
        VECTOR(uint32_t, 4) l_721 = (VECTOR(uint32_t, 4))(0x952A7910L, (VECTOR(uint32_t, 2))(0x952A7910L, 8UL), 8UL);
        uint32_t *l_727[6][3][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t *l_728 = &p_1023->g_729;
        int32_t l_744 = 0x31AE2A30L;
        int32_t l_745 = 0x3B4EEA84L;
        int32_t l_748 = 1L;
        uint32_t l_760 = 4294967287UL;
        VECTOR(uint16_t, 16) l_792 = (VECTOR(uint16_t, 16))(0x53C5L, (VECTOR(uint16_t, 4))(0x53C5L, (VECTOR(uint16_t, 2))(0x53C5L, 65527UL), 65527UL), 65527UL, 0x53C5L, 65527UL, (VECTOR(uint16_t, 2))(0x53C5L, 65527UL), (VECTOR(uint16_t, 2))(0x53C5L, 65527UL), 0x53C5L, 65527UL, 0x53C5L, 65527UL);
        union U3 **l_801 = &p_1023->g_380;
        union U1 *l_823 = &p_1023->g_371;
        struct S0 *l_851 = &p_1023->g_47.f0;
        struct S0 **l_850 = &l_851;
        uint8_t l_946 = 0xDBL;
        VECTOR(int64_t, 8) l_973 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-3L)), (-3L)), (-3L), 1L, (-3L));
        int8_t l_999 = 0x44L;
        int32_t *l_1009 = &l_745;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_718[i] = (void*)0;
        for (p_1023->g_135.f0.f0 = (-18); (p_1023->g_135.f0.f0 >= 2); p_1023->g_135.f0.f0 = safe_add_func_int64_t_s_s(p_1023->g_135.f0.f0, 5))
        { /* block id: 405 */
            for (p_1023->g_91.f2.f2 = 0; (p_1023->g_91.f2.f2 <= (-6)); p_1023->g_91.f2.f2 = safe_sub_func_int32_t_s_s(p_1023->g_91.f2.f2, 3))
            { /* block id: 408 */
                (*l_703) = ((safe_lshift_func_int8_t_s_s(0x06L, 3)) , 0x38CF89A2L);
            }
        }
        if (((safe_mul_func_int16_t_s_s((p_1023->g_717[0][0][3] = (p_1023->g_130 = (*l_348))), (&p_1023->g_126[2][0][8] != l_718[0]))) == ((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))((((*l_728) = ((0xEBB75A22L <= (safe_unary_minus_func_uint8_t_u(l_720))) , ((*l_346) = (((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0UL, 0x81DA5B42L)).yxxyxyyyxyyxyyyy)), ((VECTOR(uint32_t, 8))(l_721.wzxzwxxw)).s5774521346317032))).s0 < (~(l_720 = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((p_1023->g_726 , l_720), 1)), (*l_703))))))))) , (p_1023->g_94.sb ^= (l_721.z , 0xACFFFC64L))), 0x379A2A5CL, 0x1CC47DB2L, FAKE_DIVERGE(p_1023->group_2_offset, get_group_id(2), 10), 0x2B6E25ACL, 0x2DFBC76BL, 1UL, 0xD46A5C82L)))).odd, ((VECTOR(uint32_t, 4))(0x203D1D23L)), ((VECTOR(uint32_t, 4))(0xE2F0A468L))))).z))
        { /* block id: 418 */
            int32_t *l_730 = (void*)0;
            int32_t l_759 = 0x74C2DCB4L;
            struct S0 l_768 = {-2L,4294967289UL,0x42B373FAL,7UL};
            uint8_t *l_771 = &p_1023->g_93;
            VECTOR(int16_t, 16) l_781 = (VECTOR(int16_t, 16))(0x1341L, (VECTOR(int16_t, 4))(0x1341L, (VECTOR(int16_t, 2))(0x1341L, 0x01A9L), 0x01A9L), 0x01A9L, 0x1341L, 0x01A9L, (VECTOR(int16_t, 2))(0x1341L, 0x01A9L), (VECTOR(int16_t, 2))(0x1341L, 0x01A9L), 0x1341L, 0x01A9L, 0x1341L, 0x01A9L);
            VECTOR(int32_t, 4) l_788 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0AF38D5EL), 0x0AF38D5EL);
            VECTOR(int32_t, 8) l_892 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 1L), 1L), 1L, (-8L), 1L);
            VECTOR(int32_t, 8) l_893 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x22E624D3L), 0x22E624D3L), 0x22E624D3L, 8L, 0x22E624D3L);
            int32_t l_937 = 1L;
            union U4 l_940 = {0x6C5C3AF57F87875FL};
            int i;
            (*p_1023->g_731) = l_730;
            for (p_1023->g_135.f0.f3 = 0; (p_1023->g_135.f0.f3 < 37); p_1023->g_135.f0.f3++)
            { /* block id: 422 */
                int32_t l_747 = 0x3AF183EAL;
                int32_t l_749 = (-3L);
                VECTOR(int32_t, 2) l_750 = (VECTOR(int32_t, 2))(0x46B4BC3BL, 0x11808772L);
                int i;
                for (p_1023->g_304 = 0; (p_1023->g_304 != 31); p_1023->g_304++)
                { /* block id: 425 */
                    int64_t l_736 = 0x0A2FEE025B8A2ABDL;
                    int32_t *l_737 = &p_1023->g_91.f2.f2;
                    int32_t *l_738 = &l_20[1][1][0];
                    int32_t *l_739 = &p_1023->g_47.f0.f2;
                    int32_t *l_740 = (void*)0;
                    int32_t *l_741 = (void*)0;
                    int32_t *l_742[2][4] = {{&l_720,&p_1023->g_247[1][2][2],&l_720,&l_720},{&l_720,&p_1023->g_247[1][2][2],&l_720,&l_720}};
                    int64_t l_746 = 0L;
                    int i, j;
                    p_1023->g_751++;
                    return p_1023->g_382.x;
                }
            }
            if (((*l_348) = ((p_1023->g_94.s2++) | (safe_mul_func_int16_t_s_s((l_720 |= ((*l_703) = l_745)), ((l_759 = ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_758.s8c)).yxxy)).x) == l_760))))))
            { /* block id: 435 */
                uint64_t l_776 = 0UL;
                VECTOR(int32_t, 4) l_785 = (VECTOR(int32_t, 4))(0x6CBB4ED3L, (VECTOR(int32_t, 2))(0x6CBB4ED3L, (-1L)), (-1L));
                VECTOR(uint16_t, 4) l_795 = (VECTOR(uint16_t, 4))(0x8EECL, (VECTOR(uint16_t, 2))(0x8EECL, 1UL), 1UL);
                int32_t l_843[5][4] = {{0x26305AF5L,0x1F927567L,0x26305AF5L,0x26305AF5L},{0x26305AF5L,0x1F927567L,0x26305AF5L,0x26305AF5L},{0x26305AF5L,0x1F927567L,0x26305AF5L,0x26305AF5L},{0x26305AF5L,0x1F927567L,0x26305AF5L,0x26305AF5L},{0x26305AF5L,0x1F927567L,0x26305AF5L,0x26305AF5L}};
                VECTOR(int16_t, 4) l_845 = (VECTOR(int16_t, 4))(0x6AFBL, (VECTOR(int16_t, 2))(0x6AFBL, 0x299DL), 0x299DL);
                union U4 l_848 = {0x5BBAF2B585D6813AL};
                struct S0 l_872 = {-1L,0x6D380D31L,0x62ED103FL,0x89FE2312L};
                VECTOR(int32_t, 2) l_873 = (VECTOR(int32_t, 2))(0L, 0x5B0A089CL);
                int i, j;
                if (((l_771 = &p_1023->g_93) != &p_1023->g_93))
                { /* block id: 438 */
                    VECTOR(int16_t, 16) l_780 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 5L), 5L), 5L, (-1L), 5L, (VECTOR(int16_t, 2))((-1L), 5L), (VECTOR(int16_t, 2))((-1L), 5L), (-1L), 5L, (-1L), 5L);
                    VECTOR(uint16_t, 4) l_790 = (VECTOR(uint16_t, 4))(0x96A0L, (VECTOR(uint16_t, 2))(0x96A0L, 65535UL), 65535UL);
                    int i;
                    (*l_348) = ((((7L & (*l_348)) ^ (((safe_lshift_func_int16_t_s_u((l_776 || (safe_sub_func_uint64_t_u_u(p_1023->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1023->tid, 12))], ((*p_1023->g_132) = (((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 2))(l_779.xx)).xxyx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(l_780.s3b70fa5c91a9559b)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_781.sdc1447c7)))).s5211132555614023))).s09c8)).y, (safe_mod_func_int32_t_s_s(((*l_703) = ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(p_1023->g_784.s9cef380e)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_785.ywzwwyxzyyywwyzz)).s2c)).xxyy, ((VECTOR(int32_t, 4))(l_786.yxyy)), ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(p_1023->g_787.xxyxyzywwwzzxwyy)).sb4))).yyyyxxyxyyyyxxyy, ((VECTOR(int32_t, 8))(l_788.zxxzxyxz)).s0573161026672056, ((VECTOR(int32_t, 2))(p_1023->g_789.s47)).yxxxyyxyyyxxxyyy))).s3d6f))))).zyxyzzyy))).s6), (*l_348))), 0x51EBL, (-2L))).yxywyzzwzxywxxxw, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-3L), 0x4D2FL)).xxyyxxxx)))).s6753527020330155))))).sa02b))).hi, ((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_790.yywwwzxwyxzzyywx)).s47)).yxxy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 8))(p_1023->g_791.wzxwzwxy)), ((VECTOR(uint16_t, 4))(p_1023->g_83.w, ((VECTOR(uint16_t, 2))(0xB2DBL, 65535UL)), 0x90D5L)).yxzwyxyz))).s50)).xxxx, ((VECTOR(uint16_t, 4))(l_792.se92e))))).yyzzyxxzxxyzyxwx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x8E53L, 0xCBE5L)).yxyx)), ((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 16))(p_1023->g_793.xxyyyyyyyxyxyyxx)).s2b, ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_1023->g_794.xxyxyyxxyyxyxxxx)).even)).odd, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_795.wzyw)))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 4))((l_785.x |= (((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((-1L), (l_800 == (p_1023->g_379 = l_800)))), 7)) >= (-9L)) != 0x005CL)), 65535UL, 0xB02AL, 0UL)), ((VECTOR(uint16_t, 4))(65535UL)), ((VECTOR(uint16_t, 4))(0xD82FL)))))))))).odd))).xyxx)).zwwxxxwz, (uint16_t)p_1023->g_90))).s4, ((VECTOR(uint16_t, 2))(1UL)), 4UL)).s2151064011331550, ((VECTOR(uint16_t, 16))(0x2C7EL))))).s71db)))).xwwzxwwxwxwxzzzw, (uint16_t)5UL))).s49, ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 2))(0x44A1L)))))))).lo , (*l_348)))))), GROUP_DIVERGE(2, 1))) , (void*)0) == l_801)) == (-1L)) == 0x3FA7L);
                }
                else
                { /* block id: 444 */
                    return l_785.x;
                }
                for (p_1023->g_136.f0.f3 = (-5); (p_1023->g_136.f0.f3 == 11); ++p_1023->g_136.f0.f3)
                { /* block id: 449 */
                    if ((atomic_inc(&p_1023->g_atomic_input[71 * get_linear_group_id() + 14]) == 3))
                    { /* block id: 451 */
                        uint8_t l_804 = 1UL;
                        --l_804;
                        unsigned int result = 0;
                        result += l_804;
                        atomic_add(&p_1023->g_special_values[71 * get_linear_group_id() + 14], result);
                    }
                    else
                    { /* block id: 453 */
                        (1 + 1);
                    }
                }
                (*p_1023->g_807) = &l_759;
                if ((*p_1023->g_172))
                { /* block id: 458 */
                    VECTOR(int64_t, 4) l_814 = (VECTOR(int64_t, 4))(0x28BE0000C262600AL, (VECTOR(int64_t, 2))(0x28BE0000C262600AL, 0x6B46DB37FF9A63C2L), 0x6B46DB37FF9A63C2L);
                    VECTOR(int64_t, 2) l_815 = (VECTOR(int64_t, 2))(0x4C1A4DD755092406L, 0x46093698A677C00BL);
                    uint16_t *l_820 = &p_1023->g_293[0][0];
                    union U1 *l_824 = (void*)0;
                    VECTOR(uint64_t, 16) l_849 = (VECTOR(uint64_t, 16))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 7UL), 7UL), 7UL, 5UL, 7UL, (VECTOR(uint64_t, 2))(5UL, 7UL), (VECTOR(uint64_t, 2))(5UL, 7UL), 5UL, 7UL, 5UL, 7UL);
                    int32_t l_864 = 0x284F6958L;
                    int i;
                    l_831 = ((safe_add_func_int16_t_s_s(((!((((((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_1023->g_810.s857e)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 16))(p_1023->g_811.yxxxxxyyyxxxyxxx)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_812.yx)), 0x527C1D2903BE392BL, 0L)))).xzxzzzzxxxzyzwwz))))).s48, ((VECTOR(int64_t, 2))(p_1023->g_813.sbf)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))((-6L), 2L)).yyyyxyxy)).s10))))).xxyx)))), ((VECTOR(int64_t, 8))(l_814.zzyyxywx)), ((VECTOR(int64_t, 8))((-1L), ((VECTOR(int64_t, 2))((-10L), 1L)), ((VECTOR(int64_t, 4))(l_815.xyxx)), 0x243CF3B400DBCAA1L))))), 0x0DAE2DD6C8DD532CL, ((*p_1023->g_132) != ((safe_mul_func_uint16_t_u_u(p_1023->g_323, l_792.sd)) > (GROUP_DIVERGE(2, 1) > (p_1023->g_818 , ((((VECTOR(int8_t, 4))(p_1023->g_819.wyzx)).z < (((((--(*l_820)) <= (l_785.x = p_1023->g_818.f0.f0)) , l_823) != l_824) , (safe_unary_minus_func_int8_t_s((safe_add_func_int16_t_s_s((p_1023->g_830 &= ((*p_1023->g_829) = (p_1023->g_828 == (void*)0))), p_1023->g_293[0][0])))))) & l_814.z))))), ((VECTOR(int64_t, 2))((-9L))), (*p_1023->g_132), (*l_703), 0x3D554A0114DBB638L, 1L)).s25, ((VECTOR(int64_t, 2))(0x6F808E18BF73FA5BL))))).odd >= l_795.z) | l_814.z) & p_1023->g_136.f0.f0) & 1UL)) && l_720), p_1023->g_726.f0.f0)) && 0UL);
                    for (p_1023->g_726.f0.f0 = 0; (p_1023->g_726.f0.f0 >= 6); p_1023->g_726.f0.f0 = safe_add_func_int16_t_s_s(p_1023->g_726.f0.f0, 1))
                    { /* block id: 466 */
                        int32_t **l_836 = &l_728;
                        int32_t l_844 = 0x13076367L;
                        VECTOR(int32_t, 16) l_847 = (VECTOR(int32_t, 16))(0x45CE1761L, (VECTOR(int32_t, 4))(0x45CE1761L, (VECTOR(int32_t, 2))(0x45CE1761L, 0x0EFAF505L), 0x0EFAF505L), 0x0EFAF505L, 0x45CE1761L, 0x0EFAF505L, (VECTOR(int32_t, 2))(0x45CE1761L, 0x0EFAF505L), (VECTOR(int32_t, 2))(0x45CE1761L, 0x0EFAF505L), 0x45CE1761L, 0x0EFAF505L, 0x45CE1761L, 0x0EFAF505L);
                        int32_t *l_853 = &p_1023->g_135.f0.f2;
                        int32_t *l_854 = &p_1023->g_47.f0.f2;
                        int32_t *l_855 = &l_745;
                        int32_t *l_856 = (void*)0;
                        int32_t *l_857 = &p_1023->g_704;
                        int32_t *l_858 = &l_748;
                        int32_t *l_859 = (void*)0;
                        int32_t *l_860 = &l_848.f2.f2;
                        int32_t *l_861 = &l_844;
                        int32_t *l_862 = (void*)0;
                        int32_t *l_863[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_863[i] = (void*)0;
                        (*l_703) = (((*p_1023->g_127) <= (safe_mul_func_uint16_t_u_u((((*l_836) = l_730) != (void*)0), (safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((*p_1023->g_829), (l_815.x || (((*p_1023->g_132) = ((((((FAKE_DIVERGE(p_1023->group_1_offset, get_group_id(1), 10) , (safe_mul_func_uint8_t_u_u(l_843[0][0], ((p_1023->g_726.f0.f0 ^ l_844) <= (((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(0x2B18434EL, 0L)).yyxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(l_845.ywyxxyyw)).s7430210245733077, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_1023->g_846.s6a)).yyxy)).even)).yxxyyxxxyyxyyxxx))))).sab, ((VECTOR(int32_t, 4))(0x2678E890L, (-9L), 0x6E158325L, 0x4B4CF809L)).lo))).xyyyyxyx)).even))).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_847.sca95)), 0L, 0x1F440019L, 0x383C70EFL, 0x702A359DL)).s64))).lo , (((*p_1023->g_706) , l_848) , 0x5ADBL)))))) == p_1023->g_789.s7) != l_849.s7) , l_850) != (void*)0) >= l_852)) , 0xA1F9B8427F17615EL)))), (*p_1023->g_172)))))) | 0UL);
                        --l_865;
                    }
                    (*l_703) = l_864;
                }
                else
                { /* block id: 473 */
                    VECTOR(uint32_t, 4) l_868 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL);
                    uint32_t **l_871 = &l_727[2][2][1];
                    int32_t *l_874 = (void*)0;
                    int32_t *l_875[6] = {(void*)0,&l_745,(void*)0,(void*)0,&l_745,(void*)0};
                    uint32_t l_877[7][2] = {{1UL,0xF59A4438L},{1UL,0xF59A4438L},{1UL,0xF59A4438L},{1UL,0xF59A4438L},{1UL,0xF59A4438L},{1UL,0xF59A4438L},{1UL,0xF59A4438L}};
                    int i, j;
                    (**p_1023->g_208) ^= (((p_1023->g_94.s5 ^= ((VECTOR(uint32_t, 8))(l_868.zxyzyzwx)).s3) & (safe_sub_func_int64_t_s_s((((*l_871) = p_1023->g_172) == (l_872 , (((VECTOR(int32_t, 8))(l_873.yxxxyxxx)).s4 , l_730))), (*p_1023->g_132)))) >= p_1023->g_293[0][0]);
                    --l_877[2][0];
                    (**l_850) = l_880;
                }
            }
            else
            { /* block id: 480 */
                int32_t **l_884 = &l_346;
                int32_t ***l_883 = &l_884;
                int32_t l_887 = (-3L);
                union U2 ***l_890 = (void*)0;
                union U2 ***l_891 = &p_1023->g_888;
                union U3 ***l_900 = &p_1023->g_379;
                union U3 ***l_901 = &l_801;
                union U3 **l_903 = &p_1023->g_380;
                union U3 ***l_902 = &l_903;
                union U4 l_908 = {0L};
                union U1 *l_909 = &p_1023->g_371;
                union U1 **l_911[2][8][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                int8_t **l_912 = &l_296[5];
                VECTOR(int8_t, 16) l_944 = (VECTOR(int8_t, 16))(0x0AL, (VECTOR(int8_t, 4))(0x0AL, (VECTOR(int8_t, 2))(0x0AL, (-2L)), (-2L)), (-2L), 0x0AL, (-2L), (VECTOR(int8_t, 2))(0x0AL, (-2L)), (VECTOR(int8_t, 2))(0x0AL, (-2L)), 0x0AL, (-2L), 0x0AL, (-2L));
                struct S0 l_948 = {0x4318B7DDF3222D16L,4294967288UL,0x43881B3CL,0xBF024A51L};
                VECTOR(uint32_t, 8) l_960 = (VECTOR(uint32_t, 8))(0x0162661EL, (VECTOR(uint32_t, 4))(0x0162661EL, (VECTOR(uint32_t, 2))(0x0162661EL, 0x9B2CC3D3L), 0x9B2CC3D3L), 0x9B2CC3D3L, 0x0162661EL, 0x9B2CC3D3L);
                VECTOR(uint32_t, 2) l_962 = (VECTOR(uint32_t, 2))(0x99132873L, 0UL);
                int8_t l_975 = 1L;
                struct S0 l_976 = {0x18991E6F13DD2983L,6UL,-1L,9UL};
                int i, j, k;
                (*l_703) = (((*l_771) = (safe_add_func_uint64_t_u_u(GROUP_DIVERGE(1, 1), ((((&l_346 != (p_1023->g_885 = ((*l_883) = &l_728))) | p_1023->g_789.s0) && (*l_348)) , ((~((**l_884) = l_887)) , (*p_1023->g_132)))))) & (((VECTOR(int32_t, 16))((((*l_891) = p_1023->g_888) != &p_1023->g_706), ((VECTOR(int32_t, 2))(l_892.s04)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 0L)).yxyyxyyx)), ((VECTOR(int32_t, 2))(l_893.s77)), (safe_mul_func_int8_t_s_s(l_887, l_792.sa)), 0x595EEF0AL, 0x690EDC6BL)).s0 != l_887));
                if ((safe_lshift_func_uint16_t_u_s((((VECTOR(uint32_t, 4))(6UL, 0x44FBD07EL, 0x79834AF0L, 0x2170E1A2L)).w || ((safe_add_func_int64_t_s_s((((l_800 != ((*l_902) = ((*l_901) = ((*l_900) = &p_1023->g_380)))) <= ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(p_1023->g_904.yxxyyxxy)).hi)).z) , ((*p_1023->g_132) = ((safe_div_func_uint8_t_u_u((+((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))((-10L), 1L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0L, 0L)))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_1023->g_907.xyzxzzyxzxywwzww)).s77)), ((VECTOR(int8_t, 8))((&p_1023->g_93 == &p_1023->g_93), (l_908 , (l_909 != (l_823 = l_910))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0L, 5L)))), 1L, 0x34L, 0x46L, 0x4FL)), 0L, (-2L), (-1L), (*l_703), 5L, 0x0FL)).s4b8f, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(1L, (&l_13[5] == l_912), ((VECTOR(int8_t, 4))(3L)), 0x3BL, 0x60L)).s73)).yyyx)).zxxwzxwz, ((VECTOR(int8_t, 8))(0x74L))))).s7713103635717571)).s79a1))))), 0x4BL, 0x78L, 0x04L, 7L, ((VECTOR(int8_t, 4))(1L)))).odd)).odd)).wzwzxyxzxzzyxzyx, ((VECTOR(int8_t, 16))(0x59L))))), ((VECTOR(int8_t, 16))(0x7BL))))).sbb))))), 2UL, 1UL)).xzxwxyyxyyzyxzxx)).sf7, ((VECTOR(uint8_t, 2))(0UL))))).xyyxxxyxyxxxxxxy))).sf), 0x56L)) > 1UL))), p_1023->g_85)) == l_908.f0)), 13)))
                { /* block id: 492 */
                    for (l_40 = (-18); (l_40 > 11); l_40++)
                    { /* block id: 495 */
                        (*l_703) ^= l_744;
                    }
                    (*l_348) ^= (p_1023->g_91 , 0x2E00B9DCL);
                    if ((atomic_inc(&p_1023->g_atomic_input[71 * get_linear_group_id() + 44]) == 9))
                    { /* block id: 500 */
                        uint64_t l_915[6][7] = {{18446744073709551613UL,18446744073709551613UL,0xFAFB322E8483B5DEL,4UL,0x5B6C33111F14C7C8L,4UL,0xFAFB322E8483B5DEL},{18446744073709551613UL,18446744073709551613UL,0xFAFB322E8483B5DEL,4UL,0x5B6C33111F14C7C8L,4UL,0xFAFB322E8483B5DEL},{18446744073709551613UL,18446744073709551613UL,0xFAFB322E8483B5DEL,4UL,0x5B6C33111F14C7C8L,4UL,0xFAFB322E8483B5DEL},{18446744073709551613UL,18446744073709551613UL,0xFAFB322E8483B5DEL,4UL,0x5B6C33111F14C7C8L,4UL,0xFAFB322E8483B5DEL},{18446744073709551613UL,18446744073709551613UL,0xFAFB322E8483B5DEL,4UL,0x5B6C33111F14C7C8L,4UL,0xFAFB322E8483B5DEL},{18446744073709551613UL,18446744073709551613UL,0xFAFB322E8483B5DEL,4UL,0x5B6C33111F14C7C8L,4UL,0xFAFB322E8483B5DEL}};
                        int64_t l_916 = 0x08ED52895C278D69L;
                        struct S0 l_917 = {-9L,0x7376CCDBL,0L,0xC23D977AL};
                        struct S0 l_918 = {-5L,0x0D251559L,4L,0xD6604ABDL};
                        int32_t l_919 = 0x16C161EFL;
                        int32_t l_920 = 0x4A47B746L;
                        int32_t l_921 = (-6L);
                        int32_t l_922 = 9L;
                        int32_t l_923[2];
                        uint16_t l_924[2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_923[i] = (-1L);
                        for (i = 0; i < 2; i++)
                            l_924[i] = 65526UL;
                        l_916 = l_915[1][2];
                        l_918 = l_917;
                        l_924[0]++;
                        unsigned int result = 0;
                        int l_915_i0, l_915_i1;
                        for (l_915_i0 = 0; l_915_i0 < 6; l_915_i0++) {
                            for (l_915_i1 = 0; l_915_i1 < 7; l_915_i1++) {
                                result += l_915[l_915_i0][l_915_i1];
                            }
                        }
                        result += l_916;
                        result += l_917.f0;
                        result += l_917.f1;
                        result += l_917.f2;
                        result += l_917.f3;
                        result += l_918.f0;
                        result += l_918.f1;
                        result += l_918.f2;
                        result += l_918.f3;
                        result += l_919;
                        result += l_920;
                        result += l_921;
                        result += l_922;
                        int l_923_i0;
                        for (l_923_i0 = 0; l_923_i0 < 2; l_923_i0++) {
                            result += l_923[l_923_i0];
                        }
                        int l_924_i0;
                        for (l_924_i0 = 0; l_924_i0 < 2; l_924_i0++) {
                            result += l_924[l_924_i0];
                        }
                        atomic_add(&p_1023->g_special_values[71 * get_linear_group_id() + 44], result);
                    }
                    else
                    { /* block id: 504 */
                        (1 + 1);
                    }
                }
                else
                { /* block id: 507 */
                    int32_t l_945[3][2] = {{0L,0L},{0L,0L},{0L,0L}};
                    int i, j;
                    for (p_1023->g_14 = 0; (p_1023->g_14 <= (-4)); --p_1023->g_14)
                    { /* block id: 510 */
                        VECTOR(uint64_t, 4) l_932 = (VECTOR(uint64_t, 4))(0xA1CB08FB5EF9CA58L, (VECTOR(uint64_t, 2))(0xA1CB08FB5EF9CA58L, 1UL), 1UL);
                        uint64_t *l_933 = &p_1023->g_934;
                        int16_t *l_938[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        struct S0 *l_947 = &l_768;
                        int i;
                        (*l_947) = ((*l_851) = (((((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(248UL, ((VECTOR(uint8_t, 2))(p_1023->g_931.xy)), 0xD2L)).ywxzxwzw)).s7203266076625427)).s0, (*l_348))) && (((((((*l_933) = ((VECTOR(uint64_t, 8))(l_932.wwzxwwyx)).s0) , ((safe_lshift_func_uint8_t_u_s((1L | l_937), 4)) < (((((*l_348) , ((void*)0 == l_938[5])) & (((VECTOR(int32_t, 2))(1L, 0x724698C5L)).odd , ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1023->g_939.s5566036713151310)))).sb)) && ((l_940 , (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 2))(p_1023->g_943.s42)).xxyxxxxyxxxxxyxy, ((VECTOR(int8_t, 8))(l_944.s5e494f43)).s7413011415047637))).odd, (int8_t)(((**p_1023->g_885) , &l_884) == &p_1023->g_885)))), 0x62L, 0x3AL, (*p_1023->g_127), 0x7AL, 0L, ((VECTOR(int8_t, 2))(1L)), 0x0CL)).s4, l_945[2][1]))) == l_946)) == (*p_1023->g_132)))) & l_932.y) , (**p_1023->g_379)) , (**p_1023->g_705)) , (*p_1023->g_132))) , (void*)0) != p_1023->g_132) , l_768));
                    }
                    (*l_851) = l_948;
                    if ((atomic_inc(&p_1023->g_atomic_input[71 * get_linear_group_id() + 11]) == 0))
                    { /* block id: 517 */
                        union U1 l_949 = {0};/* VOLATILE GLOBAL l_949 */
                        uint16_t l_950 = 0x8221L;
                        int32_t l_951 = 0x0CD45B43L;
                        uint8_t l_952 = 0xB6L;
                        int32_t *l_953 = (void*)0;
                        uint16_t l_954 = 65528UL;
                        l_951 = (l_949 , l_950);
                        l_952 &= 0L;
                        l_953 = l_953;
                        l_954++;
                        unsigned int result = 0;
                        result += l_949.f0;
                        result += l_949.f1.f0;
                        result += l_949.f1.f1;
                        result += l_949.f1.f2;
                        result += l_949.f1.f3;
                        result += l_950;
                        result += l_951;
                        result += l_952;
                        result += l_954;
                        atomic_add(&p_1023->g_special_values[71 * get_linear_group_id() + 11], result);
                    }
                    else
                    { /* block id: 522 */
                        (1 + 1);
                    }
                }
                for (l_768.f3 = 3; (l_768.f3 > 18); l_768.f3 = safe_add_func_uint8_t_u_u(l_768.f3, 4))
                { /* block id: 528 */
                    VECTOR(int16_t, 2) l_959 = (VECTOR(int16_t, 2))(0x161FL, 0L);
                    union U1 *l_979[3][6][5] = {{{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371},{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371},{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371},{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371},{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371},{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371}},{{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371},{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371},{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371},{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371},{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371},{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371}},{{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371},{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371},{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371},{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371},{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371},{(void*)0,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371,&p_1023->g_371}}};
                    int i, j, k;
                    if (l_959.y)
                        break;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1023->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 12)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_960.s4506222107547442)).s7f)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(0x797C51C3L, ((VECTOR(uint32_t, 2))(p_1023->g_961.s13)), GROUP_DIVERGE(1, 1), ((VECTOR(uint32_t, 4))(l_962.yyyy)), (safe_add_func_int8_t_s_s((*l_348), GROUP_DIVERGE(0, 1))), (((safe_mul_func_int16_t_s_s((*p_1023->g_829), ((((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 8))(((*p_1023->g_373) , (p_1023->g_974 = (((safe_add_func_int64_t_s_s(((*p_1023->g_132) ^= (l_792.s9 == GROUP_DIVERGE(2, 1))), (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_1023->g_971.xwzx)).xxxxyyzyyxzyyzwx)).s4, 3)))) & ((*p_1023->g_828) == (((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 16))(p_1023->g_972.s11adeb8720652613)).hi, ((VECTOR(int64_t, 16))(l_973.s7122144055542204)).hi))).s0 , (void*)0))) ^ l_959.x))), 0x181FL, 0L, (l_745 = (((p_1023->g_931.y > l_975) || 0x1A5D29155450E738L) <= 0x30185848L)), 0x47D0L, ((VECTOR(int16_t, 2))((-6L))), 0x7147L)), ((VECTOR(int16_t, 8))(4L))))).s3 & FAKE_DIVERGE(p_1023->group_1_offset, get_group_id(1), 10)) , 65527UL))) , l_976) , 0x4FAB7937L), p_1023->g_961.s6, 0xEAE702ADL, l_744, ((VECTOR(uint32_t, 2))(0x2E10E37FL)), 4294967295UL)).se51a)).zxwxywyw, ((VECTOR(uint32_t, 8))(1UL)), ((VECTOR(uint32_t, 8))(9UL))))).odd)).xxywxxww)).even))).lo))))).odd, 10))][(safe_mod_func_uint32_t_u_u(p_1023->tid, 12))]));
                    for (l_940.f4 = (-8); (l_940.f4 != 15); l_940.f4 = safe_add_func_uint16_t_u_u(l_940.f4, 6))
                    { /* block id: 538 */
                        (*p_1023->g_374) = (l_979[0][2][2] = (l_823 = (void*)0));
                        (*l_348) = l_948.f1;
                        if (l_768.f1)
                            break;
                    }
                }
            }
        }
        else
        { /* block id: 547 */
            int32_t *l_982 = &p_1023->g_323;
            int32_t l_989[3][5] = {{0x7229F288L,0x7229F288L,0x7229F288L,0x7229F288L,0x7229F288L},{0x7229F288L,0x7229F288L,0x7229F288L,0x7229F288L,0x7229F288L},{0x7229F288L,0x7229F288L,0x7229F288L,0x7229F288L,0x7229F288L}};
            uint8_t *l_990[6];
            VECTOR(uint16_t, 4) l_993 = (VECTOR(uint16_t, 4))(0xCCCEL, (VECTOR(uint16_t, 2))(0xCCCEL, 0x94ACL), 0x94ACL);
            uint64_t *l_996 = &p_1023->g_96[3][2];
            uint16_t *l_997[3];
            int64_t l_998 = 3L;
            uint64_t l_1003 = 0x48EF5508BAF3C6DBL;
            int i, j;
            for (i = 0; i < 6; i++)
                l_990[i] = (void*)0;
            for (i = 0; i < 3; i++)
                l_997[i] = &p_1023->g_304;
            (*l_703) = ((VECTOR(int32_t, 4))((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 16))((((*l_982) = (-8L)) , (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 4))((-4L), 0x7B00L, 0x4CC9L, 0x5AF1L)).y, (((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(l_989[2][3], (p_1023->g_904.y = (*l_703)))) && ((*l_348) = (l_999 &= (((l_989[0][4] = (safe_mul_func_uint16_t_u_u((*l_348), ((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_993.ywwxxzyzxwxyywzy)).sb29f)).lo))).xyxxyxxy, ((VECTOR(uint16_t, 8))(65535UL, ((VECTOR(uint16_t, 2))(0UL, 0x480CL)), ((VECTOR(uint16_t, 2))(0xE1F4L, 0UL)), ((*p_1023->g_132) && (((safe_mod_func_int64_t_s_s((*p_1023->g_132), ((*l_996) |= p_1023->g_818.f0.f0))) & (((l_744 = ((((*p_1023->g_829) && 0x7095L) || (*l_348)) & 1L)) < 0x8E61C148L) & p_1023->g_793.x)) != 0x157FB2657ECA3B1EL)), 65529UL, 0UL))))).s6))) , FAKE_DIVERGE(p_1023->local_1_offset, get_local_id(1), 10)) , l_998)))), (*p_1023->g_829))) && p_1023->g_818.f0.f2) <= l_998)))), ((VECTOR(int64_t, 4))(0x285EB4EAF7509774L)), 9L, ((VECTOR(int64_t, 8))(0L)), 0x7A9C555D38AF4754L, 8L)).sb, l_993.w)), 0x1C168452L, 1L, 2L)).z;
            (*l_703) = ((-9L) < l_989[2][3]);
            (*l_348) |= l_993.x;
            for (l_880.f3 = (-28); (l_880.f3 >= 11); l_880.f3++)
            { /* block id: 560 */
                int32_t l_1002 = 0x3CB9882AL;
                if (l_1002)
                    break;
                if (l_1003)
                    break;
                for (p_1023->g_347 = 10; (p_1023->g_347 >= (-8)); --p_1023->g_347)
                { /* block id: 565 */
                    int32_t *l_1008 = &l_744;
                    for (p_1023->g_726.f0.f1 = 0; (p_1023->g_726.f0.f1 >= 25); ++p_1023->g_726.f0.f1)
                    { /* block id: 568 */
                        l_1009 = l_1008;
                    }
                    return p_1023->g_704;
                }
            }
        }
        (*p_1023->g_731) = &l_745;
    }
    for (l_40 = 27; (l_40 != 7); --l_40)
    { /* block id: 579 */
        (*p_1023->g_888) = (*p_1023->g_888);
    }
    ++l_1020;
    return p_1023->g_47.f0.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->g_91.f2.f0 p_1023->g_85 p_1023->g_47.f0.f2 p_1023->g_91.f4
 * writes: p_1023->g_91.f2.f0 p_1023->g_47.f0.f2 p_1023->g_91.f4 p_1023->g_300
 */
int32_t  func_3(int32_t  p_4, int64_t  p_5, int32_t  p_6, struct S5 * p_1023)
{ /* block id: 177 */
    uint32_t l_698 = 1UL;
    int32_t *l_701 = &p_1023->g_247[0][2][3];
    if ((atomic_inc(&p_1023->l_atomic_input[51]) == 7))
    { /* block id: 179 */
        int16_t l_397 = 4L;
        uint8_t l_398 = 0UL;
        uint8_t l_423 = 247UL;
        VECTOR(int32_t, 8) l_595 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
        VECTOR(int32_t, 4) l_596 = (VECTOR(int32_t, 4))(0x7DC58861L, (VECTOR(int32_t, 2))(0x7DC58861L, (-1L)), (-1L));
        VECTOR(int32_t, 8) l_597 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x52301C0BL), 0x52301C0BL), 0x52301C0BL, 0L, 0x52301C0BL);
        VECTOR(int32_t, 2) l_598 = (VECTOR(int32_t, 2))(0x52179F7EL, 0x45BF1F74L);
        VECTOR(int32_t, 16) l_599 = (VECTOR(int32_t, 16))(0x6D9E2458L, (VECTOR(int32_t, 4))(0x6D9E2458L, (VECTOR(int32_t, 2))(0x6D9E2458L, (-1L)), (-1L)), (-1L), 0x6D9E2458L, (-1L), (VECTOR(int32_t, 2))(0x6D9E2458L, (-1L)), (VECTOR(int32_t, 2))(0x6D9E2458L, (-1L)), 0x6D9E2458L, (-1L), 0x6D9E2458L, (-1L));
        uint64_t l_600 = 0UL;
        int i;
        if ((l_398 = l_397))
        { /* block id: 181 */
            uint32_t l_399[4] = {0x771B0955L,0x771B0955L,0x771B0955L,0x771B0955L};
            int64_t l_400 = 5L;
            int i;
            l_400 = (l_399[1] , 0x37B0DCEDL);
        }
        else
        { /* block id: 183 */
            int32_t l_401 = 0L;
            VECTOR(int8_t, 16) l_416 = (VECTOR(int8_t, 16))(0x14L, (VECTOR(int8_t, 4))(0x14L, (VECTOR(int8_t, 2))(0x14L, 1L), 1L), 1L, 0x14L, 1L, (VECTOR(int8_t, 2))(0x14L, 1L), (VECTOR(int8_t, 2))(0x14L, 1L), 0x14L, 1L, 0x14L, 1L);
            int8_t l_417 = 6L;
            int32_t l_418 = (-4L);
            uint16_t l_419 = 1UL;
            int16_t l_420[8];
            uint16_t l_421 = 1UL;
            int32_t *l_422 = &l_401;
            int i;
            for (i = 0; i < 8; i++)
                l_420[i] = 0x0473L;
            for (l_401 = 0; (l_401 < (-3)); l_401--)
            { /* block id: 186 */
                int32_t l_404[7][5][6] = {{{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L}},{{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L}},{{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L}},{{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L}},{{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L}},{{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L}},{{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L},{0x15CF07E0L,0x2A94B103L,0x631AE3A4L,0x15CF07E0L,0x4F65712BL,0x631AE3A4L}}};
                int32_t l_405 = 0x3891A35CL;
                int32_t l_406[2];
                int32_t l_407 = 4L;
                uint16_t l_408 = 65529UL;
                VECTOR(int32_t, 8) l_411 = (VECTOR(int32_t, 8))(0x64CCBD88L, (VECTOR(int32_t, 4))(0x64CCBD88L, (VECTOR(int32_t, 2))(0x64CCBD88L, 2L), 2L), 2L, 0x64CCBD88L, 2L);
                int8_t l_412 = 0x08L;
                int32_t l_413 = 0x4ECD24DBL;
                uint64_t l_414 = 9UL;
                int16_t l_415[3];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_406[i] = 0x633937C4L;
                for (i = 0; i < 3; i++)
                    l_415[i] = 0x37E6L;
                --l_408;
                l_415[1] &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(l_411.s27474662)).s0364100467206453, ((VECTOR(int32_t, 16))(0x4E148007L, 1L, (-8L), l_412, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x4DF84AB6L, 0x5F84D055L, 0x1301B47AL, 0x11BCEE16L)).zyzxwxwx)), (l_405 = (l_414 = l_413)), 0x17EBFC53L, 6L, 0x745A544FL))))))).sd;
            }
            l_417 = l_416.s7;
            l_421 = (l_401 = (l_420[6] = ((l_419 = l_418) , 0x1DDC86BAL)));
            l_422 = (void*)0;
        }
        if (l_423)
        { /* block id: 199 */
            uint8_t l_424 = 252UL;
            int8_t l_427 = 0x37L;
            uint64_t l_428 = 0x5A409303A34FAE5EL;
            int32_t l_442 = 7L;
            int32_t *l_441 = &l_442;
            int32_t *l_443[9][5][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
            int i, j, k;
            l_424++;
            l_428 = ((VECTOR(int32_t, 4))(l_427, 0x4DDF5017L, 0x23CB6774L, 0L)).x;
            for (l_424 = (-10); (l_424 != 47); l_424 = safe_add_func_uint32_t_u_u(l_424, 3))
            { /* block id: 204 */
                int32_t l_431[3][10] = {{(-3L),(-3L),0x0AF5EC41L,0x0CBF2E0BL,0L,0x0CBF2E0BL,0x0AF5EC41L,(-3L),(-3L),0x0AF5EC41L},{(-3L),(-3L),0x0AF5EC41L,0x0CBF2E0BL,0L,0x0CBF2E0BL,0x0AF5EC41L,(-3L),(-3L),0x0AF5EC41L},{(-3L),(-3L),0x0AF5EC41L,0x0CBF2E0BL,0L,0x0CBF2E0BL,0x0AF5EC41L,(-3L),(-3L),0x0AF5EC41L}};
                int64_t l_436 = (-9L);
                int16_t l_437 = (-3L);
                union U4 l_439 = {9L};
                union U4 *l_438 = &l_439;
                union U4 *l_440[1][3][9] = {{{&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439},{&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439},{&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439}}};
                int i, j, k;
                for (l_431[2][1] = 0; (l_431[2][1] != (-6)); l_431[2][1] = safe_sub_func_int64_t_s_s(l_431[2][1], 5))
                { /* block id: 207 */
                    uint32_t l_434 = 1UL;
                    int32_t l_435 = 8L;
                    l_435 = l_434;
                }
                l_437 = (l_436 = 0x57154D09L);
                l_440[0][1][7] = (l_438 = (void*)0);
            }
            l_443[1][2][0] = l_441;
        }
        else
        { /* block id: 216 */
            int32_t l_445 = (-1L);
            int32_t *l_444 = &l_445;
            int32_t *l_446 = (void*)0;
            int32_t *l_447 = (void*)0;
            int32_t *l_448 = &l_445;
            l_446 = l_444;
            l_448 = l_447;
        }
        for (l_397 = (-28); (l_397 < 25); l_397++)
        { /* block id: 222 */
            int64_t l_451[10][2][4] = {{{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL},{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL}},{{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL},{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL}},{{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL},{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL}},{{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL},{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL}},{{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL},{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL}},{{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL},{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL}},{{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL},{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL}},{{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL},{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL}},{{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL},{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL}},{{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL},{0x53DF7DD08CF52F6FL,0L,0x79E5E86A3BEF1C31L,0x2CBB774B55E0C45AL}}};
            int8_t l_452 = 0L;
            VECTOR(int32_t, 2) l_453 = (VECTOR(int32_t, 2))(0x3D4FF247L, 0x3856D5B7L);
            VECTOR(int32_t, 4) l_454 = (VECTOR(int32_t, 4))(0x1DFE5B9BL, (VECTOR(int32_t, 2))(0x1DFE5B9BL, 0x162E6C23L), 0x162E6C23L);
            VECTOR(int32_t, 4) l_455 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x73DFA652L), 0x73DFA652L);
            VECTOR(int32_t, 4) l_456 = (VECTOR(int32_t, 4))(0x0A6357C4L, (VECTOR(int32_t, 2))(0x0A6357C4L, (-1L)), (-1L));
            VECTOR(int32_t, 2) l_457 = (VECTOR(int32_t, 2))((-1L), 0L);
            VECTOR(int32_t, 4) l_458 = (VECTOR(int32_t, 4))(0x49ABC7C0L, (VECTOR(int32_t, 2))(0x49ABC7C0L, 0x7A978A62L), 0x7A978A62L);
            uint8_t l_459 = 247UL;
            int32_t l_460 = 0x11E24DE4L;
            VECTOR(int32_t, 4) l_461 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x21EE5475L), 0x21EE5475L);
            int32_t l_462 = 0L;
            uint8_t l_463 = 1UL;
            VECTOR(int32_t, 16) l_464 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x11370699L), 0x11370699L), 0x11370699L, 1L, 0x11370699L, (VECTOR(int32_t, 2))(1L, 0x11370699L), (VECTOR(int32_t, 2))(1L, 0x11370699L), 1L, 0x11370699L, 1L, 0x11370699L);
            VECTOR(int32_t, 16) l_465 = (VECTOR(int32_t, 16))(0x4CF6A103L, (VECTOR(int32_t, 4))(0x4CF6A103L, (VECTOR(int32_t, 2))(0x4CF6A103L, 0x749B7E59L), 0x749B7E59L), 0x749B7E59L, 0x4CF6A103L, 0x749B7E59L, (VECTOR(int32_t, 2))(0x4CF6A103L, 0x749B7E59L), (VECTOR(int32_t, 2))(0x4CF6A103L, 0x749B7E59L), 0x4CF6A103L, 0x749B7E59L, 0x4CF6A103L, 0x749B7E59L);
            uint32_t l_466 = 0x6706623FL;
            VECTOR(int32_t, 4) l_467 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
            VECTOR(int32_t, 8) l_468 = (VECTOR(int32_t, 8))(0x2941051AL, (VECTOR(int32_t, 4))(0x2941051AL, (VECTOR(int32_t, 2))(0x2941051AL, (-6L)), (-6L)), (-6L), 0x2941051AL, (-6L));
            uint16_t l_469 = 65535UL;
            VECTOR(int32_t, 4) l_470 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x067ADDD2L), 0x067ADDD2L);
            VECTOR(int32_t, 16) l_471 = (VECTOR(int32_t, 16))(0x7C2CB0CDL, (VECTOR(int32_t, 4))(0x7C2CB0CDL, (VECTOR(int32_t, 2))(0x7C2CB0CDL, 0x747F1B7FL), 0x747F1B7FL), 0x747F1B7FL, 0x7C2CB0CDL, 0x747F1B7FL, (VECTOR(int32_t, 2))(0x7C2CB0CDL, 0x747F1B7FL), (VECTOR(int32_t, 2))(0x7C2CB0CDL, 0x747F1B7FL), 0x7C2CB0CDL, 0x747F1B7FL, 0x7C2CB0CDL, 0x747F1B7FL);
            int32_t l_533 = (-1L);
            int i, j, k;
            l_452 = (l_451[2][1][3] = (-8L));
            if (((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(0x74D0144CL, ((VECTOR(int32_t, 4))(l_453.yxyy)), (-3L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_454.xxxzxzzxyzzxwxzy)))).sea)), ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x0FE7AC9FL, (-5L))))).xyyyxyyy, ((VECTOR(int32_t, 16))(l_455.xywxwwwzwyxxywwy)).odd))).odd))), (-1L), 0L, 3L, 4L)).sdf, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x2A030E39L, 0x25190229L)).xyyxxxxx)).s63)).even, ((VECTOR(int32_t, 2))(1L, 1L)), 0x76058D02L)), ((VECTOR(int32_t, 8))(l_456.xwwzzxyy)).hi))), (l_469 &= ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(l_457.yxyy)).wzzzwyww, ((VECTOR(int32_t, 4))(l_458.zzzw)).wwxzywwz, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(6L, (-1L))), l_459, l_460, 6L, ((VECTOR(int32_t, 2))(1L, (-9L))), 0x1C491C5CL)).s2653706304574534, ((VECTOR(int32_t, 4))(l_461.wywx)).xzzwyyzwyyzzyzxz, ((VECTOR(int32_t, 8))((l_463 &= l_462), ((VECTOR(int32_t, 4))(l_464.s4398)), (l_466 &= ((VECTOR(int32_t, 16))(l_465.s92d7db35c6a99e34)).s6), 0x5365784EL, 0x12DF7985L)).s5243345113056262))))).s61, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(l_467.wyyw)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_468.s42657754)).s4265572115222233)).s5156))).ywxxwxxwzxxwxyyz)).s2a, ((VECTOR(int32_t, 2))(1L, (-1L)))))))).xxyxyyyy))).s3), ((VECTOR(int32_t, 2))(l_470.yz)), 0L)).s75))).yxxyxxyxxxxxyyxx, ((VECTOR(int32_t, 16))(l_471.sd7344329d806a87b))))).s9)
            { /* block id: 228 */
                int32_t l_473 = (-3L);
                int32_t *l_472 = &l_473;
                int32_t *l_474 = (void*)0;
                int8_t l_477 = 0x2BL;
                int8_t *l_476 = &l_477;
                int8_t **l_475 = &l_476;
                int8_t **l_478[5];
                union U4 l_480 = {0L};
                union U4 *l_479 = &l_480;
                union U4 *l_481[9][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_478[i] = &l_476;
                l_474 = l_472;
                l_478[0] = l_475;
                l_481[1][1] = l_479;
            }
            else
            { /* block id: 232 */
                int32_t l_482 = 3L;
                union U2 l_495[8][10] = {{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}};
                union U2 l_496 = {0};
                uint64_t l_497 = 0x14C24D0D1F04F9B0L;
                struct S0 l_498 = {0x16ADC7F885C5605CL,0xF8AD1B15L,0x293CA48FL,0x05825EE8L};
                struct S0 l_499 = {-9L,5UL,0x6CBBDB04L,1UL};
                int i, j;
                l_468.s0 ^= l_482;
                for (l_482 = 0; (l_482 == (-13)); l_482 = safe_sub_func_int64_t_s_s(l_482, 8))
                { /* block id: 236 */
                    int32_t l_485[6][10] = {{0x36672B9DL,0x36672B9DL,0x46B2387DL,0x53071482L,0x02741DBBL,0x53071482L,0x46B2387DL,0x36672B9DL,0x36672B9DL,0x46B2387DL},{0x36672B9DL,0x36672B9DL,0x46B2387DL,0x53071482L,0x02741DBBL,0x53071482L,0x46B2387DL,0x36672B9DL,0x36672B9DL,0x46B2387DL},{0x36672B9DL,0x36672B9DL,0x46B2387DL,0x53071482L,0x02741DBBL,0x53071482L,0x46B2387DL,0x36672B9DL,0x36672B9DL,0x46B2387DL},{0x36672B9DL,0x36672B9DL,0x46B2387DL,0x53071482L,0x02741DBBL,0x53071482L,0x46B2387DL,0x36672B9DL,0x36672B9DL,0x46B2387DL},{0x36672B9DL,0x36672B9DL,0x46B2387DL,0x53071482L,0x02741DBBL,0x53071482L,0x46B2387DL,0x36672B9DL,0x36672B9DL,0x46B2387DL},{0x36672B9DL,0x36672B9DL,0x46B2387DL,0x53071482L,0x02741DBBL,0x53071482L,0x46B2387DL,0x36672B9DL,0x36672B9DL,0x46B2387DL}};
                    uint64_t l_493 = 0x3380BABCE7849A6FL;
                    uint64_t l_494 = 0xF5641C079181C547L;
                    int i, j;
                    for (l_485[3][1] = (-3); (l_485[3][1] <= 22); ++l_485[3][1])
                    { /* block id: 239 */
                        uint32_t l_488 = 0xC7B75965L;
                        int32_t *l_491 = (void*)0;
                        int16_t l_492 = 0L;
                        l_488++;
                        l_491 = (void*)0;
                        l_470.w |= l_492;
                    }
                    l_464.s9 = l_493;
                    l_457.x |= (-5L);
                    l_465.s0 = l_494;
                }
                l_499 = (((l_496 = l_495[5][3]) , l_497) , l_498);
                for (l_498.f1 = (-4); (l_498.f1 != 54); l_498.f1 = safe_add_func_int32_t_s_s(l_498.f1, 1))
                { /* block id: 252 */
                    uint64_t l_502[7][7][3] = {{{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL}},{{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL}},{{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL}},{{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL}},{{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL}},{{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL}},{{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL},{18446744073709551606UL,0UL,0UL}}};
                    int i, j, k;
                    if ((l_502[6][6][0] , (-1L)))
                    { /* block id: 253 */
                        int32_t l_505 = 0L;
                        int32_t *l_504 = &l_505;
                        int32_t **l_503 = &l_504;
                        int32_t **l_506 = &l_504;
                        l_506 = l_503;
                        l_462 |= (-1L);
                    }
                    else
                    { /* block id: 256 */
                        int32_t l_507 = 0x3CE1CE6DL;
                        uint32_t l_508 = 4294967295UL;
                        int32_t *l_511[3];
                        int32_t *l_512[2][2];
                        int32_t *l_513 = &l_507;
                        VECTOR(int8_t, 4) l_514 = (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, 0x7FL), 0x7FL);
                        VECTOR(int8_t, 8) l_515 = (VECTOR(int8_t, 8))(0x52L, (VECTOR(int8_t, 4))(0x52L, (VECTOR(int8_t, 2))(0x52L, 0x0BL), 0x0BL), 0x0BL, 0x52L, 0x0BL);
                        VECTOR(int8_t, 4) l_516 = (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x18L), 0x18L);
                        VECTOR(int8_t, 8) l_517 = (VECTOR(int8_t, 8))(0x5CL, (VECTOR(int8_t, 4))(0x5CL, (VECTOR(int8_t, 2))(0x5CL, 0x71L), 0x71L), 0x71L, 0x5CL, 0x71L);
                        VECTOR(int8_t, 4) l_518 = (VECTOR(int8_t, 4))(0x01L, (VECTOR(int8_t, 2))(0x01L, 0x1AL), 0x1AL);
                        VECTOR(int8_t, 8) l_519 = (VECTOR(int8_t, 8))(0x4DL, (VECTOR(int8_t, 4))(0x4DL, (VECTOR(int8_t, 2))(0x4DL, 0x29L), 0x29L), 0x29L, 0x4DL, 0x29L);
                        uint8_t l_520 = 0x37L;
                        uint32_t l_521 = 5UL;
                        VECTOR(int8_t, 8) l_522 = (VECTOR(int8_t, 8))(0x7BL, (VECTOR(int8_t, 4))(0x7BL, (VECTOR(int8_t, 2))(0x7BL, 0x3FL), 0x3FL), 0x3FL, 0x7BL, 0x3FL);
                        VECTOR(int8_t, 16) l_523 = (VECTOR(int8_t, 16))(0x03L, (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, 0x20L), 0x20L), 0x20L, 0x03L, 0x20L, (VECTOR(int8_t, 2))(0x03L, 0x20L), (VECTOR(int8_t, 2))(0x03L, 0x20L), 0x03L, 0x20L, 0x03L, 0x20L);
                        VECTOR(int8_t, 4) l_524 = (VECTOR(int8_t, 4))(0x7CL, (VECTOR(int8_t, 2))(0x7CL, 0x28L), 0x28L);
                        VECTOR(int8_t, 4) l_525 = (VECTOR(int8_t, 4))(0x61L, (VECTOR(int8_t, 2))(0x61L, 0L), 0L);
                        int32_t l_526 = 0L;
                        int64_t l_527 = 0x6C113647E2D973F3L;
                        uint16_t l_528 = 0xC2A7L;
                        int32_t *l_529 = &l_507;
                        int32_t *l_530 = &l_526;
                        VECTOR(int32_t, 4) l_531 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x25248CC5L), 0x25248CC5L);
                        VECTOR(int32_t, 16) l_532 = (VECTOR(int32_t, 16))(0x3B7B62FBL, (VECTOR(int32_t, 4))(0x3B7B62FBL, (VECTOR(int32_t, 2))(0x3B7B62FBL, 0L), 0L), 0L, 0x3B7B62FBL, 0L, (VECTOR(int32_t, 2))(0x3B7B62FBL, 0L), (VECTOR(int32_t, 2))(0x3B7B62FBL, 0L), 0x3B7B62FBL, 0L, 0x3B7B62FBL, 0L);
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_511[i] = &l_507;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_512[i][j] = &l_507;
                        }
                        ++l_508;
                        l_513 = (l_512[1][1] = l_511[1]);
                        l_530 = (((VECTOR(int8_t, 16))((l_515.s0 = ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_514.yzwy)).yxyxzxyyzyzwyzxy)).odd, ((VECTOR(int8_t, 16))(l_515.s2722216273103140)).lo))).s0073422755650710)).odd)).s16, ((VECTOR(int8_t, 8))(l_516.ywzwyyxw)).s26))).odd), ((VECTOR(int8_t, 8))(0x4AL, (-1L), (-1L), ((VECTOR(int8_t, 4))(1L, 0x5EL, (-1L), 0x7EL)), 6L)), ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(0x3DL, 0x54L)).xyxx, ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 4))(l_517.s3173)).wxwzzwwzzyyzxyzy, ((VECTOR(int8_t, 2))(l_518.ww)).yxyyyxyxyxyxxxxx))).lo)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_519.s7342)).even)).xxyxyyyy, ((VECTOR(int8_t, 4))(1L, 0L, (-1L), 0x08L)).yzzxywzy))).s61, ((VECTOR(int8_t, 8))(l_520, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_521, 0x44L, ((VECTOR(int8_t, 4))(l_522.s5232)), 0x5CL, 0L)).s4025255164765143)).sd2ae)), 0L, 0x5DL, (-9L))).s70))))).xxxxyxxx, ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))((l_514.x ^= l_523.sc), (-10L), (-2L), (-1L), 1L, 1L, 0x3AL, 0x59L)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_524.xw)).xyxxxxxxyyxyxxyy)).even))), ((VECTOR(int8_t, 2))(0x1EL, 1L)).xxyxyxxy))).even, ((VECTOR(int8_t, 2))(l_525.yz)).xyxy))), (l_526 , l_527), 0x2EL, 0x09L)).s4 , ((l_460 = l_528) , l_529));
                        l_462 = ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))((-1L), (-1L), 1L, (-1L))).even, ((VECTOR(int32_t, 8))(l_531.wwzwywzw)).s23, ((VECTOR(int32_t, 8))(l_532.s33b9f0cf)).s20))).lo;
                    }
                }
            }
            l_533 &= ((VECTOR(int32_t, 2))(0x3AB74C25L, 0x3DFDEE74L)).odd;
            for (l_461.x = 0; (l_461.x <= 26); l_461.x = safe_add_func_uint16_t_u_u(l_461.x, 6))
            { /* block id: 271 */
                union U3 l_536 = {{0x442227BBEE8F0B9FL,0x06303DBCL,-9L,0x22BCCBC9L}};/* VOLATILE GLOBAL l_536 */
                VECTOR(int32_t, 16) l_537 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x3EB6E56FL), 0x3EB6E56FL), 0x3EB6E56FL, 6L, 0x3EB6E56FL, (VECTOR(int32_t, 2))(6L, 0x3EB6E56FL), (VECTOR(int32_t, 2))(6L, 0x3EB6E56FL), 6L, 0x3EB6E56FL, 6L, 0x3EB6E56FL);
                VECTOR(uint64_t, 2) l_538 = (VECTOR(uint64_t, 2))(0x0E7A45CF17FF1CD0L, 0UL);
                int32_t l_553 = 0L;
                int32_t l_592 = 0x02E2588CL;
                int32_t *l_593 = &l_536.f0.f2;
                int32_t *l_594 = (void*)0;
                int i;
                l_538.y |= (l_536 , ((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 4))(l_537.s1c64)), ((VECTOR(int32_t, 2))(0L, (-2L))), (-1L))).s4);
                for (l_538.y = 24; (l_538.y >= 41); l_538.y++)
                { /* block id: 275 */
                    int32_t l_541 = 0x1A771941L;
                    int16_t l_549[5] = {0x7B6AL,0x7B6AL,0x7B6AL,0x7B6AL,0x7B6AL};
                    union U3 l_551 = {{9L,9UL,-1L,0UL}};/* VOLATILE GLOBAL l_551 */
                    union U3 *l_550 = &l_551;
                    union U3 *l_552[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_552[i] = &l_551;
                    for (l_541 = (-8); (l_541 <= 4); l_541++)
                    { /* block id: 278 */
                        int16_t l_548 = 0x61D6L;
                        int16_t *l_547 = &l_548;
                        int16_t **l_546 = &l_547;
                        l_546 = ((l_459 = (l_463++)) , l_546);
                    }
                    l_552[0] = (l_549[2] , l_550);
                }
                if (l_553)
                { /* block id: 285 */
                    int32_t l_554 = 0x743B28B5L;
                    uint16_t l_559 = 65535UL;
                    int32_t l_560 = 0x4E59491EL;
                    uint8_t l_561 = 7UL;
                    union U4 l_562 = {-5L};
                    for (l_554 = 0; (l_554 < (-11)); l_554--)
                    { /* block id: 288 */
                        int32_t l_557 = 0x55FC6759L;
                        int32_t l_558 = (-9L);
                        l_465.sa = l_557;
                        l_467.w = l_558;
                    }
                    l_537.s0 ^= ((l_559 , l_560) , l_561);
                    if ((l_562 , (-7L)))
                    { /* block id: 293 */
                        union U2 l_564[9] = {{0},{0},{0},{0},{0},{0},{0},{0},{0}};
                        union U2 *l_563 = &l_564[3];
                        union U2 *l_565[1][10][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                        int i, j, k;
                        l_457.y = (-1L);
                        l_565[0][7][3] = l_563;
                    }
                    else
                    { /* block id: 296 */
                        int32_t l_567 = 0L;
                        int32_t *l_566 = &l_567;
                        int32_t *l_568 = &l_567;
                        int32_t *l_569 = (void*)0;
                        int32_t *l_570 = (void*)0;
                        int32_t *l_571[2][8][4] = {{{&l_567,&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567,&l_567}},{{&l_567,&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567,&l_567}}};
                        int i, j, k;
                        l_568 = (l_566 = (void*)0);
                        l_569 = (void*)0;
                        l_571[0][2][2] = l_570;
                    }
                }
                else
                { /* block id: 302 */
                    VECTOR(int8_t, 16) l_572 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x05L), 0x05L), 0x05L, 0L, 0x05L, (VECTOR(int8_t, 2))(0L, 0x05L), (VECTOR(int8_t, 2))(0L, 0x05L), 0L, 0x05L, 0L, 0x05L);
                    uint64_t l_573[6][8] = {{0x4576F8F0F7643245L,18446744073709551614UL,18446744073709551614UL,0x4576F8F0F7643245L,0x0BEDBAB3D8377A5DL,0xF10F9BA7B60EBFF9L,0x77A8B547A5A4D1C1L,0xED2E70A35D0A863BL},{0x4576F8F0F7643245L,18446744073709551614UL,18446744073709551614UL,0x4576F8F0F7643245L,0x0BEDBAB3D8377A5DL,0xF10F9BA7B60EBFF9L,0x77A8B547A5A4D1C1L,0xED2E70A35D0A863BL},{0x4576F8F0F7643245L,18446744073709551614UL,18446744073709551614UL,0x4576F8F0F7643245L,0x0BEDBAB3D8377A5DL,0xF10F9BA7B60EBFF9L,0x77A8B547A5A4D1C1L,0xED2E70A35D0A863BL},{0x4576F8F0F7643245L,18446744073709551614UL,18446744073709551614UL,0x4576F8F0F7643245L,0x0BEDBAB3D8377A5DL,0xF10F9BA7B60EBFF9L,0x77A8B547A5A4D1C1L,0xED2E70A35D0A863BL},{0x4576F8F0F7643245L,18446744073709551614UL,18446744073709551614UL,0x4576F8F0F7643245L,0x0BEDBAB3D8377A5DL,0xF10F9BA7B60EBFF9L,0x77A8B547A5A4D1C1L,0xED2E70A35D0A863BL},{0x4576F8F0F7643245L,18446744073709551614UL,18446744073709551614UL,0x4576F8F0F7643245L,0x0BEDBAB3D8377A5DL,0xF10F9BA7B60EBFF9L,0x77A8B547A5A4D1C1L,0xED2E70A35D0A863BL}};
                    uint8_t l_574 = 0x86L;
                    struct S0 l_575[2] = {{0x366C1F11836BE1B5L,0UL,0x15992476L,4294967295UL},{0x366C1F11836BE1B5L,0UL,0x15992476L,4294967295UL}};
                    uint64_t l_576 = 0x7104AA6C096DE22CL;
                    int32_t *l_577 = (void*)0;
                    int32_t *l_578 = &l_575[0].f2;
                    int32_t l_579 = (-1L);
                    uint8_t l_580 = 0x15L;
                    int i, j;
                    l_471.s6 = (((VECTOR(int8_t, 2))(l_572.sbb)).hi , ((l_573[5][3] , l_574) , (l_464.s2 = ((l_575[0] , 0x711945CAA89F37D2L) , l_576))));
                    l_578 = l_577;
                    l_580++;
                    if ((l_454.y = (-1L)))
                    { /* block id: 308 */
                        l_577 = (void*)0;
                    }
                    else
                    { /* block id: 310 */
                        union U4 l_584 = {0x5AB55CDE38CE4247L};
                        union U4 *l_583 = &l_584;
                        union U4 *l_585 = (void*)0;
                        uint16_t l_586 = 1UL;
                        int32_t l_590 = 1L;
                        int32_t *l_589 = &l_590;
                        int16_t l_591[10][10] = {{(-4L),0L,0x337CL,0x5F29L,0x0A19L,3L,1L,0x08D7L,0x08D7L,1L},{(-4L),0L,0x337CL,0x5F29L,0x0A19L,3L,1L,0x08D7L,0x08D7L,1L},{(-4L),0L,0x337CL,0x5F29L,0x0A19L,3L,1L,0x08D7L,0x08D7L,1L},{(-4L),0L,0x337CL,0x5F29L,0x0A19L,3L,1L,0x08D7L,0x08D7L,1L},{(-4L),0L,0x337CL,0x5F29L,0x0A19L,3L,1L,0x08D7L,0x08D7L,1L},{(-4L),0L,0x337CL,0x5F29L,0x0A19L,3L,1L,0x08D7L,0x08D7L,1L},{(-4L),0L,0x337CL,0x5F29L,0x0A19L,3L,1L,0x08D7L,0x08D7L,1L},{(-4L),0L,0x337CL,0x5F29L,0x0A19L,3L,1L,0x08D7L,0x08D7L,1L},{(-4L),0L,0x337CL,0x5F29L,0x0A19L,3L,1L,0x08D7L,0x08D7L,1L},{(-4L),0L,0x337CL,0x5F29L,0x0A19L,3L,1L,0x08D7L,0x08D7L,1L}};
                        int i, j;
                        l_585 = l_583;
                        l_586--;
                        l_577 = l_589;
                        (*l_577) ^= l_591[0][9];
                    }
                }
                l_594 = ((l_592 &= (-1L)) , l_593);
            }
        }
        if ((l_600 = ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_595.s70711321)).s23, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_596.zz)).yyxxyyyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_597.s3746)).wxzwzwyz))))), ((VECTOR(int32_t, 2))(l_598.xy)).yyyxxxyy))).s10, ((VECTOR(int32_t, 16))(l_599.sd6e2b8844f935a22)).sf4))).xyyxxxyyyxyyxxxy))).s5))
        { /* block id: 322 */
            if ((l_595.s3 |= 0x39079B1CL))
            { /* block id: 324 */
                int32_t l_670 = 0x11B24981L;
                int64_t l_671 = 0x7C2309E880D7C93BL;
                if ((l_599.s5 = 0x540E1DD6L))
                { /* block id: 326 */
                    int64_t l_601 = (-1L);
                    VECTOR(uint8_t, 4) l_602 = (VECTOR(uint8_t, 4))(0x74L, (VECTOR(uint8_t, 2))(0x74L, 1UL), 1UL);
                    union U3 l_605[3][5] = {{{{4L,4294967291UL,0x05D0DFF8L,0x2BBA6B41L}},{{4L,4294967291UL,0x05D0DFF8L,0x2BBA6B41L}},{{-9L,0xC725040EL,0x2C1FFA96L,4294967295UL}},{{-5L,0x57750AB5L,-5L,0xB3849279L}},{{9L,1UL,-9L,0xB4EE75C7L}}},{{{4L,4294967291UL,0x05D0DFF8L,0x2BBA6B41L}},{{4L,4294967291UL,0x05D0DFF8L,0x2BBA6B41L}},{{-9L,0xC725040EL,0x2C1FFA96L,4294967295UL}},{{-5L,0x57750AB5L,-5L,0xB3849279L}},{{9L,1UL,-9L,0xB4EE75C7L}}},{{{4L,4294967291UL,0x05D0DFF8L,0x2BBA6B41L}},{{4L,4294967291UL,0x05D0DFF8L,0x2BBA6B41L}},{{-9L,0xC725040EL,0x2C1FFA96L,4294967295UL}},{{-5L,0x57750AB5L,-5L,0xB3849279L}},{{9L,1UL,-9L,0xB4EE75C7L}}}};
                    union U1 l_606 = {0};/* VOLATILE GLOBAL l_606 */
                    uint32_t l_607[6] = {0xA29BC62CL,0xA29BC62CL,0xA29BC62CL,0xA29BC62CL,0xA29BC62CL,0xA29BC62CL};
                    int32_t l_608 = 0x7D2A36CFL;
                    int i, j;
                    ++l_602.w;
                    l_595.s3 |= ((l_605[2][1] , l_606) , l_607[4]);
                    if (l_608)
                    { /* block id: 329 */
                        uint8_t l_609 = 0x5EL;
                        struct S0 l_610 = {0L,5UL,-9L,1UL};
                        struct S0 l_611[4] = {{5L,0x1D20F347L,0x3B9D8AAFL,0xE70F7D5AL},{5L,0x1D20F347L,0x3B9D8AAFL,0xE70F7D5AL},{5L,0x1D20F347L,0x3B9D8AAFL,0xE70F7D5AL},{5L,0x1D20F347L,0x3B9D8AAFL,0xE70F7D5AL}};
                        uint8_t l_612 = 0UL;
                        int32_t *l_613 = &l_610.f2;
                        int32_t *l_614 = (void*)0;
                        int32_t *l_615 = &l_611[3].f2;
                        int32_t *l_616 = &l_610.f2;
                        int32_t *l_617[1][4] = {{&l_611[3].f2,&l_611[3].f2,&l_611[3].f2,&l_611[3].f2}};
                        int i, j;
                        l_611[3] = (l_609 , (l_605[2][1].f0 = l_610));
                        l_616 = (l_615 = (l_614 = (l_612 , l_613)));
                        l_616 = (l_617[0][0] = (void*)0);
                    }
                    else
                    { /* block id: 337 */
                        uint8_t l_618 = 0UL;
                        union U4 l_621 = {0x31F8C53AC334EC0DL};
                        int32_t l_622[8][8] = {{2L,0x1CE50425L,(-6L),6L,0x1CE50425L,6L,(-6L),0x1CE50425L},{2L,0x1CE50425L,(-6L),6L,0x1CE50425L,6L,(-6L),0x1CE50425L},{2L,0x1CE50425L,(-6L),6L,0x1CE50425L,6L,(-6L),0x1CE50425L},{2L,0x1CE50425L,(-6L),6L,0x1CE50425L,6L,(-6L),0x1CE50425L},{2L,0x1CE50425L,(-6L),6L,0x1CE50425L,6L,(-6L),0x1CE50425L},{2L,0x1CE50425L,(-6L),6L,0x1CE50425L,6L,(-6L),0x1CE50425L},{2L,0x1CE50425L,(-6L),6L,0x1CE50425L,6L,(-6L),0x1CE50425L},{2L,0x1CE50425L,(-6L),6L,0x1CE50425L,6L,(-6L),0x1CE50425L}};
                        int8_t l_623 = (-9L);
                        int8_t l_624 = 1L;
                        int64_t l_625 = 0x44EF47D10ECA6BB1L;
                        uint16_t l_626 = 0x8914L;
                        int i, j;
                        ++l_618;
                        l_595.s7 ^= (l_597.s5 = (l_621 , (l_599.sf = l_622[2][7])));
                        l_626--;
                    }
                    for (l_602.w = (-22); (l_602.w < 8); l_602.w = safe_add_func_uint32_t_u_u(l_602.w, 2))
                    { /* block id: 346 */
                        uint8_t l_631 = 0UL;
                        VECTOR(int16_t, 2) l_632 = (VECTOR(int16_t, 2))(0x3B8AL, 0x37A6L);
                        VECTOR(int16_t, 4) l_633 = (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x276CL), 0x276CL);
                        uint32_t l_634 = 6UL;
                        VECTOR(int16_t, 16) l_635 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x281DL), 0x281DL), 0x281DL, 1L, 0x281DL, (VECTOR(int16_t, 2))(1L, 0x281DL), (VECTOR(int16_t, 2))(1L, 0x281DL), 1L, 0x281DL, 1L, 0x281DL);
                        VECTOR(int16_t, 16) l_636 = (VECTOR(int16_t, 16))(0x6A09L, (VECTOR(int16_t, 4))(0x6A09L, (VECTOR(int16_t, 2))(0x6A09L, 0x72CAL), 0x72CAL), 0x72CAL, 0x6A09L, 0x72CAL, (VECTOR(int16_t, 2))(0x6A09L, 0x72CAL), (VECTOR(int16_t, 2))(0x6A09L, 0x72CAL), 0x6A09L, 0x72CAL, 0x6A09L, 0x72CAL);
                        int8_t l_637 = 2L;
                        VECTOR(int16_t, 2) l_638 = (VECTOR(int16_t, 2))(0x630CL, 0x38DCL);
                        VECTOR(int16_t, 16) l_639 = (VECTOR(int16_t, 16))(0x6C75L, (VECTOR(int16_t, 4))(0x6C75L, (VECTOR(int16_t, 2))(0x6C75L, 0x14D3L), 0x14D3L), 0x14D3L, 0x6C75L, 0x14D3L, (VECTOR(int16_t, 2))(0x6C75L, 0x14D3L), (VECTOR(int16_t, 2))(0x6C75L, 0x14D3L), 0x6C75L, 0x14D3L, 0x6C75L, 0x14D3L);
                        VECTOR(int16_t, 2) l_640 = (VECTOR(int16_t, 2))(0x69F0L, 0x060EL);
                        VECTOR(int16_t, 8) l_641 = (VECTOR(int16_t, 8))(0x42F6L, (VECTOR(int16_t, 4))(0x42F6L, (VECTOR(int16_t, 2))(0x42F6L, 0L), 0L), 0L, 0x42F6L, 0L);
                        VECTOR(int16_t, 2) l_642 = (VECTOR(int16_t, 2))(0x08C9L, (-1L));
                        VECTOR(int16_t, 4) l_643 = (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 3L), 3L);
                        VECTOR(int16_t, 8) l_644 = (VECTOR(int16_t, 8))(0x4A66L, (VECTOR(int16_t, 4))(0x4A66L, (VECTOR(int16_t, 2))(0x4A66L, (-1L)), (-1L)), (-1L), 0x4A66L, (-1L));
                        VECTOR(int16_t, 16) l_645 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x480FL), 0x480FL), 0x480FL, (-1L), 0x480FL, (VECTOR(int16_t, 2))((-1L), 0x480FL), (VECTOR(int16_t, 2))((-1L), 0x480FL), (-1L), 0x480FL, (-1L), 0x480FL);
                        int32_t l_646[4][6] = {{5L,5L,1L,5L,5L,5L},{5L,5L,1L,5L,5L,5L},{5L,5L,1L,5L,5L,5L},{5L,5L,1L,5L,5L,5L}};
                        VECTOR(int16_t, 4) l_647 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L);
                        VECTOR(int16_t, 2) l_648 = (VECTOR(int16_t, 2))(0x2529L, 0x1672L);
                        int8_t l_649 = 0x5CL;
                        VECTOR(int16_t, 4) l_650 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x0A38L), 0x0A38L);
                        int32_t l_651 = 1L;
                        uint8_t l_652 = 8UL;
                        int64_t l_653 = 0x0F4E98351B228AE2L;
                        uint32_t l_654 = 1UL;
                        VECTOR(uint64_t, 8) l_655 = (VECTOR(uint64_t, 8))(4UL, (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0x7DACEA5308210D83L), 0x7DACEA5308210D83L), 0x7DACEA5308210D83L, 4UL, 0x7DACEA5308210D83L);
                        int32_t l_656 = 0x364DB99BL;
                        int16_t l_657 = 4L;
                        uint64_t l_658 = 0xA3FEC750E855B988L;
                        struct S0 l_659 = {1L,0x0B2ADB01L,0x104F463EL,0UL};
                        struct S0 l_660 = {-1L,0xD4318F90L,0L,0xAB214ACEL};
                        int32_t *l_661 = &l_660.f2;
                        int32_t *l_662 = &l_646[2][5];
                        int32_t *l_663 = &l_660.f2;
                        int i, j;
                        l_606.f1 = (((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_631, (l_599.sa = ((((((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_632.yxyyyyyyxxyxyxyy)).odd)).hi, ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 16))(l_633.zwxxzwxyxwwzyyxx)).s1c43, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(0x27C3L, 0x73FAL, l_634, 1L, (-8L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_635.s2ba6779d819e6c79)).s74)), 0x759EL)))).odd))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(0L, ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(l_636.s6e)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(0x1A64L, 0x5814L)).yxxy, ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x4314L, 1L)), 0x79A9L, 0x2F54L)).wyzyxxwzwzwzxxxz, (int16_t)l_637))).s3b20, ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(l_638.xx)).xxyy, ((VECTOR(int16_t, 16))(l_639.s0b5c884cf80bc0ee)).sfacc))).lo, ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 8))(0L, 0x4C94L, (l_633.x ^= ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_640.xxyyyxxxyyxxxyxx)).sa7)).xyyxxxxy)).s3), 0x34E7L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(l_641.s52)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_642.yxxxxyyy)))).s62, ((VECTOR(int16_t, 2))(l_643.zz))))).xxyxyyxyxxxyxyyy, ((VECTOR(int16_t, 4))(0x6647L, 1L, 0x3082L, 0x163CL)).wyywxzyzzxwyzzxw))).sbd)), 0x69F4L, 0x7E0EL)), ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(6L, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 2))(0x0205L, (-1L))), ((VECTOR(int16_t, 4))(l_644.s4326)).odd))), ((VECTOR(int16_t, 4))((-1L), 0x5BF4L, 0x6D8EL, 0L)), 0L)).s15, ((VECTOR(int16_t, 2))(2L, (-1L)))))).yxxxyyyx))))), (int16_t)0x5DB1L, (int16_t)((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 16))(l_645.s53c2ace615c6cbb7)).hi, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(l_646[2][5], ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_647.yyxxwxww)).s25)).xxxy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_648.xy)), 0L, 0x48B1L)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 8))(l_649, 0x2BC8L, 3L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(l_650.wyzwwzxxywzxzyyz)).s49a1, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((l_605[2][1].f0.f0 &= ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x5EC5984CD57BB395L, 0L)), ((VECTOR(int64_t, 2))(1L, 1L)), l_651, ((VECTOR(int64_t, 2))((-1L))), 1L)).even, ((VECTOR(int64_t, 4))(0x139CA2DB15801EDAL))))).y) , 7L), ((VECTOR(int16_t, 2))(0x6772L)), (-1L))).wwwyyxyx)).hi))).xyxyyxyxzyxxyyzx)).lo, (int16_t)(-1L), (int16_t)l_652))).s51, ((VECTOR(int16_t, 2))(0x6176L))))).yxxy)), 0x02FCL)).even))).odd)).xyxx))), 0x3E1CL, ((VECTOR(int16_t, 2))(1L)), 0x2138L, ((VECTOR(int16_t, 2))(9L)), l_653, ((VECTOR(int16_t, 2))(8L)), 0x099FL, 0x4A72L)).s18, ((VECTOR(int16_t, 2))((-1L)))))).xyxxyyxx))).s62)).yxxyyxyyyyyyxyyx, ((VECTOR(int16_t, 16))(0L))))).sf))).s11))).xxxxyxyx, ((VECTOR(int16_t, 8))(0x6A94L)))))))).odd))).odd))))), 9L)).zxxxxwxz, ((VECTOR(int16_t, 8))(8L))))), l_654, ((VECTOR(int16_t, 2))((-7L))), 7L, l_655.s5, (-2L), (-2L), (-1L))).s58f7))))).y , l_656) , l_657) , 18446744073709551615UL) , l_658)), 1L, (-1L))).wywxyywwyzxyzywz)).s8 , (-1L)) , l_659) , l_660);
                        l_663 = (FAKE_DIVERGE(p_1023->global_1_offset, get_global_id(1), 10) , (l_662 = l_661));
                    }
                }
                else
                { /* block id: 354 */
                    int32_t l_665 = 7L;
                    int32_t *l_664 = &l_665;
                    int32_t *l_666 = &l_665;
                    uint32_t l_667[1][3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_667[i][j] = 4294967287UL;
                    }
                    l_666 = (l_664 = (void*)0);
                    --l_667[0][0];
                }
                l_596.w ^= l_670;
                l_599.sa &= l_671;
            }
            else
            { /* block id: 361 */
                struct S0 l_672 = {1L,0x197D56D4L,-10L,0x20CDEDAAL};
                struct S0 l_673[6] = {{0x4AD16056078A82E5L,0x2F4AD19CL,0L,0x7AAB6A3CL},{0x4AD16056078A82E5L,0x2F4AD19CL,0L,0x7AAB6A3CL},{0x4AD16056078A82E5L,0x2F4AD19CL,0L,0x7AAB6A3CL},{0x4AD16056078A82E5L,0x2F4AD19CL,0L,0x7AAB6A3CL},{0x4AD16056078A82E5L,0x2F4AD19CL,0L,0x7AAB6A3CL},{0x4AD16056078A82E5L,0x2F4AD19CL,0L,0x7AAB6A3CL}};
                int8_t l_686 = 0L;
                int i;
                l_673[2] = l_672;
                for (l_672.f1 = 0; (l_672.f1 == 5); ++l_672.f1)
                { /* block id: 365 */
                    int32_t l_676 = 8L;
                    for (l_676 = 17; (l_676 <= 25); ++l_676)
                    { /* block id: 368 */
                        VECTOR(int32_t, 8) l_679 = (VECTOR(int32_t, 8))(0x6D830DBCL, (VECTOR(int32_t, 4))(0x6D830DBCL, (VECTOR(int32_t, 2))(0x6D830DBCL, (-7L)), (-7L)), (-7L), 0x6D830DBCL, (-7L));
                        VECTOR(int32_t, 2) l_680 = (VECTOR(int32_t, 2))(1L, 0x74AAAF3FL);
                        VECTOR(int32_t, 4) l_681 = (VECTOR(int32_t, 4))(0x170BBFDFL, (VECTOR(int32_t, 2))(0x170BBFDFL, 0x243A52A9L), 0x243A52A9L);
                        int32_t l_682 = 0x722BEF3EL;
                        VECTOR(uint16_t, 2) l_683 = (VECTOR(uint16_t, 2))(1UL, 0x9745L);
                        int i;
                        l_682 = ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_679.s05643521)))).s72, ((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 2))(l_680.xy)), ((VECTOR(int32_t, 4))(l_681.wyxx)), 0x359E5522L)).s54, ((VECTOR(int32_t, 2))(0x0E9C6DE6L, (-1L)))))).odd;
                        l_683.x--;
                    }
                }
                l_597.s4 ^= l_686;
                for (l_673[2].f3 = (-6); (l_673[2].f3 > 36); l_673[2].f3 = safe_add_func_uint32_t_u_u(l_673[2].f3, 1))
                { /* block id: 376 */
                    l_596.x |= (-6L);
                }
            }
        }
        else
        { /* block id: 380 */
            uint64_t l_691 = 0xEAE920BA4370B50EL;
            uint64_t *l_690[7] = {&l_691,&l_691,&l_691,&l_691,&l_691,&l_691,&l_691};
            uint64_t **l_689 = &l_690[0];
            int i;
            l_689 = (void*)0;
        }
        unsigned int result = 0;
        result += l_397;
        result += l_398;
        result += l_423;
        result += l_595.s7;
        result += l_595.s6;
        result += l_595.s5;
        result += l_595.s4;
        result += l_595.s3;
        result += l_595.s2;
        result += l_595.s1;
        result += l_595.s0;
        result += l_596.w;
        result += l_596.z;
        result += l_596.y;
        result += l_596.x;
        result += l_597.s7;
        result += l_597.s6;
        result += l_597.s5;
        result += l_597.s4;
        result += l_597.s3;
        result += l_597.s2;
        result += l_597.s1;
        result += l_597.s0;
        result += l_598.y;
        result += l_598.x;
        result += l_599.sf;
        result += l_599.se;
        result += l_599.sd;
        result += l_599.sc;
        result += l_599.sb;
        result += l_599.sa;
        result += l_599.s9;
        result += l_599.s8;
        result += l_599.s7;
        result += l_599.s6;
        result += l_599.s5;
        result += l_599.s4;
        result += l_599.s3;
        result += l_599.s2;
        result += l_599.s1;
        result += l_599.s0;
        result += l_600;
        atomic_add(&p_1023->l_special_values[51], result);
    }
    else
    { /* block id: 383 */
        (1 + 1);
    }
    for (p_1023->g_91.f2.f0 = 7; (p_1023->g_91.f2.f0 <= 3); p_1023->g_91.f2.f0 = safe_sub_func_uint32_t_u_u(p_1023->g_91.f2.f0, 1))
    { /* block id: 388 */
        union U4 **l_696 = (void*)0;
        int32_t *l_697 = &p_1023->g_47.f0.f2;
        (*l_697) = ((safe_lshift_func_int8_t_s_u((l_696 == l_696), p_1023->g_85)) <= 0x5FD35BB3L);
        return (*l_697);
    }
    l_698 ^= p_6;
    for (p_1023->g_91.f4 = 0; (p_1023->g_91.f4 > 36); p_1023->g_91.f4++)
    { /* block id: 395 */
        int32_t **l_702 = &p_1023->g_300[0];
        (*l_702) = l_701;
    }
    return p_1023->g_85;
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->g_93 p_1023->g_227 p_1023->g_363 p_1023->g_132 p_1023->g_91.f0 p_1023->g_47.f0.f2 p_1023->g_127 p_1023->g_47 p_1023->g_304 p_1023->g_374 p_1023->g_47.f4 p_1023->g_47.f0.f1 p_1023->g_136.f0.f1 p_1023->g_379 p_1023->g_382 p_1023->g_247 p_1023->g_323 p_1023->g_153 p_1023->g_14 p_1023->g_324 p_1023->g_396 p_1023->g_293
 * writes: p_1023->g_93 p_1023->g_247 p_1023->g_47.f0.f2 p_1023->g_227 p_1023->g_85 p_1023->g_304 p_1023->g_373 p_1023->g_47.f4 p_1023->g_379 p_1023->g_395 p_1023->g_14
 */
int64_t  func_7(int8_t * p_8, int8_t * p_9, int32_t  p_10, int32_t * p_11, int8_t * p_12, struct S5 * p_1023)
{ /* block id: 149 */
    VECTOR(int32_t, 16) l_349 = (VECTOR(int32_t, 16))(0x231DF79AL, (VECTOR(int32_t, 4))(0x231DF79AL, (VECTOR(int32_t, 2))(0x231DF79AL, 0x0D9E61DBL), 0x0D9E61DBL), 0x0D9E61DBL, 0x231DF79AL, 0x0D9E61DBL, (VECTOR(int32_t, 2))(0x231DF79AL, 0x0D9E61DBL), (VECTOR(int32_t, 2))(0x231DF79AL, 0x0D9E61DBL), 0x231DF79AL, 0x0D9E61DBL, 0x231DF79AL, 0x0D9E61DBL);
    uint8_t *l_360[3][7][4] = {{{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0}},{{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0}},{{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0},{&p_1023->g_93,&p_1023->g_93,(void*)0,(void*)0}}};
    struct S0 l_366 = {0x6C14887EBCF771EEL,9UL,0x1C4815D5L,0x9869B04FL};
    int32_t *l_367 = &p_1023->g_47.f0.f2;
    int8_t **l_368 = &p_1023->g_127;
    uint16_t *l_369 = &p_1023->g_304;
    union U3 **l_384 = (void*)0;
    union U3 **l_387 = (void*)0;
    uint64_t *l_394 = &p_1023->g_96[3][2];
    uint64_t **l_393[6];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_393[i] = &l_394;
    if ((((*p_11) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))(l_349.s1226e430)).lo, (int32_t)0x60121709L, (int32_t)(safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((*l_369) ^= (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0UL, 0x35L)), 0UL, 6UL)).z , (safe_mul_func_uint8_t_u_u(0x81L, ((func_51((l_349.sa , ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((p_1023->g_93++), (l_349.sa ^= ((0x74502A24L <= ((p_10 < p_1023->g_227) >= ((VECTOR(uint16_t, 8))(p_1023->g_363.s0943bd1d)).s6)) >= (safe_div_func_int64_t_s_s((*p_1023->g_132), ((l_366 , ((*p_11) = 0x18116AECL)) && 0x13F45A3FL))))))), 0x5AF7L)), ((VECTOR(int32_t, 2))(0x59E95FB3L)), ((VECTOR(int32_t, 4))((-6L))), 0x36C5DF4CL)).s30, ((VECTOR(int32_t, 2))(9L)), ((VECTOR(int32_t, 2))(2L))))).odd), &p_1023->g_127, l_367, p_1023) , (void*)0) == l_368))))), 0xC228L)), p_10))))).wwzywzyx, ((VECTOR(int32_t, 8))(0x3450046DL)), ((VECTOR(int32_t, 8))((-3L)))))).hi)).ywxyxyzxwywzxyzz)).hi, ((VECTOR(int32_t, 8))(0x4FCCA987L))))).hi)).x) != p_10))
    { /* block id: 155 */
        union U1 *l_370[7];
        int i, j;
        for (i = 0; i < 7; i++)
            l_370[i] = &p_1023->g_371;
        (*p_1023->g_374) = l_370[4];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1023->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 12)), permutations[(safe_mod_func_uint32_t_u_u(FAKE_DIVERGE(p_1023->group_1_offset, get_group_id(1), 10), 10))][(safe_mod_func_uint32_t_u_u(p_1023->tid, 12))]));
    }
    else
    { /* block id: 160 */
        uint32_t l_383 = 6UL;
        int32_t l_388 = 1L;
        for (p_1023->g_47.f4 = 11; (p_1023->g_47.f4 != 40); p_1023->g_47.f4 = safe_add_func_int8_t_s_s(p_1023->g_47.f4, 3))
        { /* block id: 163 */
            union U3 ***l_381 = &p_1023->g_379;
            union U3 **l_385 = &p_1023->g_380;
            union U3 ***l_386 = &l_384;
            l_388 ^= ((p_1023->g_47.f0.f1 ^ ((safe_sub_func_uint8_t_u_u((p_1023->g_93 = p_1023->g_136.f0.f1), (((*l_381) = p_1023->g_379) == (l_387 = ((*l_386) = (l_385 = ((((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(p_1023->g_382.xyyyyxxxxyxxyxxy)), ((VECTOR(int32_t, 16))((*l_367), ((*p_11) > 0x6C9350D8L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((l_383 > p_1023->g_323), (*p_11), l_383, 0x092F1E72L, 0x3BE8912FL, ((VECTOR(int32_t, 8))((-7L))), ((VECTOR(int32_t, 2))(5L)), (-1L))))).sfdfd, ((VECTOR(int32_t, 4))(2L)), ((VECTOR(int32_t, 4))(0x135BB8A3L))))).odd)), 0x31D8BF52L, 1L)).hi)), 0x7C89FE49L, 0x64AD3AE1L, 0x6FE70771L, ((VECTOR(int32_t, 2))(0x2936209BL)), ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 2))(0x1DEB2513L)), (-1L)))))).sd == p_1023->g_153.s0) , l_384))))))) > (*p_9))) && p_1023->g_323);
        }
        return p_1023->g_324.s3;
    }
    (*p_11) ^= (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(((p_1023->g_395 = (void*)0) == &p_1023->g_96[4][3]), 7)), (((VECTOR(int8_t, 2))(p_1023->g_396.sa6)).lo && ((*p_1023->g_127) = (*p_12)))));
    return p_1023->g_293[1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->g_136.f0.f0 p_1023->g_153 p_1023->g_304 p_1023->g_91.f0 p_1023->g_14 p_1023->g_65 p_1023->g_323 p_1023->g_227 p_1023->g_47 p_1023->l_comm_values p_1023->g_331 p_1023->g_135.f0.f1
 * writes: p_1023->g_172 p_1023->g_136.f0.f0 p_1023->g_304 p_1023->g_91.f0 p_1023->g_14 p_1023->g_323 p_1023->g_227 p_1023->g_85 p_1023->g_130 p_1023->g_135.f0.f0 p_1023->g_47.f0
 */
uint32_t  func_21(uint64_t  p_22, int8_t * p_23, int8_t * p_24, int8_t * p_25, int8_t * p_26, struct S5 * p_1023)
{ /* block id: 105 */
    int32_t *l_297[7];
    int32_t **l_298 = &p_1023->g_172;
    int32_t *l_301[4] = {&p_1023->g_91.f2.f2,&p_1023->g_91.f2.f2,&p_1023->g_91.f2.f2,&p_1023->g_91.f2.f2};
    VECTOR(uint16_t, 16) l_310 = (VECTOR(uint16_t, 16))(0xAE76L, (VECTOR(uint16_t, 4))(0xAE76L, (VECTOR(uint16_t, 2))(0xAE76L, 0x3BD6L), 0x3BD6L), 0x3BD6L, 0xAE76L, 0x3BD6L, (VECTOR(uint16_t, 2))(0xAE76L, 0x3BD6L), (VECTOR(uint16_t, 2))(0xAE76L, 0x3BD6L), 0xAE76L, 0x3BD6L, 0xAE76L, 0x3BD6L);
    int i;
    for (i = 0; i < 7; i++)
        l_297[i] = (void*)0;
    l_301[1] = ((*l_298) = (l_297[1] = l_297[5]));
    for (p_1023->g_136.f0.f0 = 0; (p_1023->g_136.f0.f0 == 13); p_1023->g_136.f0.f0++)
    { /* block id: 111 */
        return p_22;
    }
    p_1023->g_304 ^= (p_1023->g_153.s1 , 0L);
    for (p_1023->g_91.f0 = (-24); (p_1023->g_91.f0 == 23); p_1023->g_91.f0++)
    { /* block id: 117 */
        int32_t *l_307 = (void*)0;
        int32_t l_313 = 2L;
        int32_t l_335 = 0x171E0888L;
        int32_t l_336 = 1L;
        int32_t l_338 = 0x5C511FBBL;
        (*l_298) = l_307;
        l_313 &= (0x0C63A200067A72BEL && (safe_mul_func_uint16_t_u_u(0UL, (((VECTOR(uint16_t, 16))(l_310.s451cc23a81bd4e09)).s6 != (safe_sub_func_int8_t_s_s(0x2DL, 4UL))))));
        for (p_1023->g_14 = 0; (p_1023->g_14 != 12); p_1023->g_14 = safe_add_func_uint16_t_u_u(p_1023->g_14, 5))
        { /* block id: 122 */
            uint16_t l_316 = 0x78E5L;
            int64_t *l_321 = (void*)0;
            union U2 l_325 = {0};
            int32_t *l_333 = &p_1023->g_135.f0.f2;
            int32_t l_334 = 0L;
            int32_t l_337 = 0x61412417L;
            uint64_t l_339 = 18446744073709551615UL;
            union U4 *l_343 = &p_1023->g_91;
            union U4 **l_342 = &l_343;
            --l_316;
            for (l_313 = 0; (l_313 > (-12)); --l_313)
            { /* block id: 126 */
                int32_t *l_322 = &p_1023->g_323;
                int16_t *l_326[3];
                int32_t l_327[8][4] = {{(-1L),(-1L),0x2A0234A3L,0x58D1DCFFL},{(-1L),(-1L),0x2A0234A3L,0x58D1DCFFL},{(-1L),(-1L),0x2A0234A3L,0x58D1DCFFL},{(-1L),(-1L),0x2A0234A3L,0x58D1DCFFL},{(-1L),(-1L),0x2A0234A3L,0x58D1DCFFL},{(-1L),(-1L),0x2A0234A3L,0x58D1DCFFL},{(-1L),(-1L),0x2A0234A3L,0x58D1DCFFL},{(-1L),(-1L),0x2A0234A3L,0x58D1DCFFL}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_326[i] = (void*)0;
                if ((FAKE_DIVERGE(p_1023->group_2_offset, get_group_id(2), 10) <= (p_1023->g_65 , (((func_51(((*l_322) = ((void*)0 != l_321)), &p_24, l_322, p_1023) , ((VECTOR(int8_t, 8))(p_1023->g_324.s00341224)).s1) & p_1023->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1023->tid, 12))]) <= (l_327[1][1] = (l_325 , (p_1023->g_130 = p_22)))))))
                { /* block id: 130 */
                    struct S0 l_330 = {-1L,8UL,7L,4294967295UL};
                    int32_t l_332 = 4L;
                    for (p_1023->g_135.f0.f0 = 15; (p_1023->g_135.f0.f0 >= (-20)); p_1023->g_135.f0.f0--)
                    { /* block id: 133 */
                        (*p_1023->g_331) = l_330;
                    }
                    l_332 ^= (l_330.f2 = ((&p_1023->g_135 != (void*)0) && 1L));
                }
                else
                { /* block id: 138 */
                    (*l_298) = l_333;
                }
            }
            l_339--;
            (*l_342) = (void*)0;
        }
        return p_1023->g_135.f0.f1;
    }
    return p_1023->g_153.s4;
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->g_93 p_1023->g_132 p_1023->g_91.f0 p_1023->g_127 p_1023->g_14 p_1023->g_136.f0.f2 p_1023->g_185.f0.f1 p_1023->g_96 p_1023->g_172 p_1023->g_47.f0.f2
 * writes: p_1023->g_93 p_1023->g_293 p_1023->g_96 p_1023->g_14 p_1023->g_47.f0.f2
 */
int8_t * func_29(uint16_t  p_30, uint32_t  p_31, int32_t  p_32, uint64_t  p_33, int8_t ** p_34, struct S5 * p_1023)
{ /* block id: 97 */
    uint8_t *l_272 = &p_1023->g_93;
    union U2 l_279 = {0};
    int32_t l_282 = 0x00CA3028L;
    uint32_t l_291[3][1];
    uint16_t *l_292 = &p_1023->g_293[0][0];
    VECTOR(uint64_t, 4) l_294 = (VECTOR(uint64_t, 4))(0x6D2EE6C1B3C04639L, (VECTOR(uint64_t, 2))(0x6D2EE6C1B3C04639L, 0xB1F58D6F8AA3A57CL), 0xB1F58D6F8AA3A57CL);
    uint64_t *l_295 = &p_1023->g_96[3][2];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_291[i][j] = 0x7DF3C1CDL;
    }
    (*p_1023->g_172) ^= (~(safe_rshift_func_uint8_t_u_u((++(*l_272)), (((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(1UL, 4294967295UL)), (l_279 , ((**p_34) = (((safe_mod_func_int16_t_s_s((l_279 , l_282), (safe_mod_func_int64_t_s_s((*p_1023->g_132), ((*l_295) |= ((**p_34) != ((((((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((*l_292) = l_291[0][0]), (p_30 = ((*p_1023->g_127) == (**p_34))))), p_1023->g_136.f0.f2)) | 0xCFBDE1BF113D22CCL) >= p_32) < p_1023->g_185.f0.f1) >= l_294.z) <= 255UL))))))) <= GROUP_DIVERGE(1, 1)) <= l_291[0][0]))))) | l_294.w) < (*p_1023->g_132)))));
    return l_272;
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->g_91.f2.f3
 * writes: p_1023->g_91.f2.f3 p_1023->g_135.f0
 */
uint16_t  func_35(uint8_t  p_36, int8_t * p_37, int32_t * p_38, uint64_t  p_39, struct S5 * p_1023)
{ /* block id: 90 */
    int8_t l_269 = 0x13L;
    for (p_1023->g_91.f2.f3 = 0; (p_1023->g_91.f2.f3 != 50); p_1023->g_91.f2.f3 = safe_add_func_int16_t_s_s(p_1023->g_91.f2.f3, 6))
    { /* block id: 93 */
        struct S0 l_265 = {0L,4294967295UL,0x559FA5CEL,4294967288UL};
        struct S0 *l_267 = (void*)0;
        struct S0 *l_268 = &p_1023->g_135.f0;
        (*l_268) = l_265;
    }
    return l_269;
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->g_14 p_1023->g_47.f0.f1 p_1023->g_172
 * writes: p_1023->g_14 p_1023->g_47.f0.f2
 */
int8_t * func_41(int16_t  p_42, uint32_t  p_43, struct S5 * p_1023)
{ /* block id: 7 */
    union U3 *l_46 = &p_1023->g_47;
    int32_t l_58[1][1];
    VECTOR(uint16_t, 2) l_254 = (VECTOR(uint16_t, 2))(0xE614L, 5UL);
    int32_t *l_260 = (void*)0;
    int32_t *l_261 = &l_58[0][0];
    int8_t *l_262 = &p_1023->g_14;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_58[i][j] = 0x4BD0D794L;
    }
    for (p_1023->g_14 = 0; (p_1023->g_14 != (-17)); p_1023->g_14--)
    { /* block id: 10 */
        union U3 **l_48 = (void*)0;
        int8_t **l_216 = &p_1023->g_127;
        int32_t *l_217 = &p_1023->g_135.f0.f2;
        int32_t **l_218 = (void*)0;
        int32_t **l_219 = &l_217;
        int32_t *l_246 = &p_1023->g_247[1][1][2];
        int8_t *l_257 = &p_1023->g_14;
        l_46 = l_46;
    }
    (*p_1023->g_172) = (((*l_261) ^= (safe_add_func_uint32_t_u_u(p_1023->g_47.f0.f1, p_43))) != 4294967295UL);
    return l_262;
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->g_135.f0.f2 p_1023->g_127 p_1023->g_227 p_1023->g_85 p_1023->g_47 p_1023->g_323 p_1023->g_47.f0.f2
 * writes: p_1023->g_135.f0.f2 p_1023->g_227 p_1023->g_85 p_1023->g_323 p_1023->g_47.f0.f2
 */
union U3  func_51(int32_t  p_52, int8_t ** p_53, int32_t * p_54, struct S5 * p_1023)
{ /* block id: 68 */
    int8_t *l_220 = &p_1023->g_14;
    int32_t l_223 = 0x42ECA86FL;
    VECTOR(int32_t, 2) l_224 = (VECTOR(int32_t, 2))(1L, 0x6FB75AE6L);
    int8_t l_226 = 0x12L;
    uint64_t l_243 = 18446744073709551611UL;
    int i;
    (*p_54) |= (-5L);
    if ((l_220 != (*p_53)))
    { /* block id: 70 */
        int32_t *l_221 = &p_1023->g_47.f0.f2;
        int32_t *l_222[2][3][4] = {{{&p_1023->g_136.f0.f2,&p_1023->g_47.f0.f2,&p_1023->g_135.f0.f2,&p_1023->g_135.f0.f2},{&p_1023->g_136.f0.f2,&p_1023->g_47.f0.f2,&p_1023->g_135.f0.f2,&p_1023->g_135.f0.f2},{&p_1023->g_136.f0.f2,&p_1023->g_47.f0.f2,&p_1023->g_135.f0.f2,&p_1023->g_135.f0.f2}},{{&p_1023->g_136.f0.f2,&p_1023->g_47.f0.f2,&p_1023->g_135.f0.f2,&p_1023->g_135.f0.f2},{&p_1023->g_136.f0.f2,&p_1023->g_47.f0.f2,&p_1023->g_135.f0.f2,&p_1023->g_135.f0.f2},{&p_1023->g_136.f0.f2,&p_1023->g_47.f0.f2,&p_1023->g_135.f0.f2,&p_1023->g_135.f0.f2}}};
        union U3 *l_232 = &p_1023->g_47;
        int i, j, k;
        p_1023->g_227--;
        for (p_1023->g_85 = (-21); (p_1023->g_85 < (-22)); p_1023->g_85--)
        { /* block id: 74 */
            if ((*p_54))
                break;
            (*p_54) &= ((void*)0 != l_232);
        }
    }
    else
    { /* block id: 78 */
        int32_t *l_233 = (void*)0;
        int32_t *l_234 = &p_1023->g_135.f0.f2;
        int32_t *l_235 = &l_223;
        int32_t *l_236 = &p_1023->g_47.f0.f2;
        int32_t *l_237 = &p_1023->g_91.f2.f2;
        int32_t *l_238 = (void*)0;
        int32_t l_239 = (-5L);
        int32_t *l_240 = (void*)0;
        int32_t *l_241 = &p_1023->g_91.f2.f2;
        int32_t *l_242[8];
        int i;
        for (i = 0; i < 8; i++)
            l_242[i] = (void*)0;
        l_243++;
    }
    return p_1023->g_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->l_comm_values p_1023->g_65 p_1023->g_47.f0.f3 p_1023->g_47.f0.f1 p_1023->g_47.f0.f2 p_1023->g_83 p_1023->g_85 p_1023->g_89 p_1023->g_91 p_1023->g_94 p_1023->g_14 p_1023->g_113 p_1023->g_126 p_1023->g_93 p_1023->g_130 p_1023->g_131 p_1023->g_132 p_1023->g_136.f0.f2 p_1023->g_91.f0 p_1023->g_91.f2.f1 p_1023->g_153 p_1023->g_135.f0 p_1023->g_170 p_1023->g_185 p_1023->g_90 p_1023->g_96 p_1023->g_172 p_1023->g_127 p_1023->g_208
 * writes: p_1023->g_85 p_1023->g_130 p_1023->g_91.f2.f1 p_1023->g_136.f0.f2 p_1023->g_91.f2 p_1023->g_172 p_1023->g_47.f0.f2
 */
int32_t  func_55(uint64_t  p_56, uint32_t  p_57, struct S5 * p_1023)
{ /* block id: 12 */
    int8_t **l_63 = (void*)0;
    int32_t l_64 = 0x7CEC4EE8L;
    int32_t l_70 = 0x4D35A08CL;
    union U3 *l_209[3];
    int32_t *l_211 = &p_1023->g_47.f0.f2;
    struct S0 l_212 = {0x5C0CC7F17F3DB083L,0x230FADCDL,0x3B8CB34AL,0x73CB27E7L};
    struct S0 *l_213 = (void*)0;
    int32_t l_215 = 0x79E67336L;
    int i;
    for (i = 0; i < 3; i++)
        l_209[i] = &p_1023->g_47;
    l_209[2] = func_59(l_63, (p_1023->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1023->tid, 12))] ^ ((p_56 , (~(l_64 = 4294967288UL))) , l_64)), (p_1023->g_65 , (((safe_add_func_int16_t_s_s(((p_1023->g_65 , (safe_mod_func_uint64_t_u_u(GROUP_DIVERGE(1, 1), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(p_56, 0x3FB9E2BF2DCFCB68L, l_70, 0x3C5EACAA091CDDC1L, ((VECTOR(int64_t, 2))((-4L))), ((VECTOR(int64_t, 4))(0x64374F1E5EB906A3L)), p_1023->g_47.f0.f3, p_1023->g_47.f0.f3, p_57, ((VECTOR(int64_t, 2))(0L)), 0x45B50A70091F4D94L)).s0354)).z))) > p_1023->g_47.f0.f1), 0xABE6L)) <= GROUP_DIVERGE(1, 1)) , p_1023->g_47.f0.f3)), p_1023);
    l_64 = p_57;
    l_211 = &l_64;
    l_212 = l_212;
    return l_215;
}


/* ------------------------------------------ */
/* 
 * reads : p_1023->g_47.f0.f1 p_1023->g_47.f0.f2 p_1023->g_83 p_1023->g_85 p_1023->g_89 p_1023->g_91 p_1023->g_94 p_1023->g_14 p_1023->g_113 p_1023->g_126 p_1023->g_93 p_1023->g_130 p_1023->g_131 p_1023->g_132 p_1023->g_136.f0.f2 p_1023->g_91.f0 p_1023->g_91.f2.f1 p_1023->g_153 p_1023->g_135.f0 p_1023->g_170 p_1023->g_185 p_1023->g_90 p_1023->g_96 p_1023->g_172 p_1023->g_127 p_1023->g_208
 * writes: p_1023->g_85 p_1023->g_130 p_1023->g_91.f2.f1 p_1023->g_136.f0.f2 p_1023->g_91.f2 p_1023->g_172 p_1023->g_47.f0.f2
 */
union U3 * func_59(int8_t ** p_60, uint32_t  p_61, uint32_t  p_62, struct S5 * p_1023)
{ /* block id: 14 */
    int64_t *l_77 = (void*)0;
    int64_t *l_78 = (void*)0;
    int64_t *l_79 = (void*)0;
    int64_t *l_80 = (void*)0;
    int64_t *l_81[5];
    int32_t l_82 = 1L;
    int8_t *l_84 = &p_1023->g_85;
    int32_t l_86 = 0x575FB747L;
    uint8_t *l_92[7][5];
    uint64_t *l_95[10] = {&p_1023->g_96[3][2],&p_1023->g_96[3][2],&p_1023->g_96[3][2],&p_1023->g_96[3][2],&p_1023->g_96[3][2],&p_1023->g_96[3][2],&p_1023->g_96[3][2],&p_1023->g_96[3][2],&p_1023->g_96[3][2],&p_1023->g_96[3][2]};
    int32_t l_99 = 0x2BC13523L;
    int32_t *l_110 = &l_99;
    VECTOR(int16_t, 8) l_122 = (VECTOR(int16_t, 8))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x2CFCL), 0x2CFCL), 0x2CFCL, 8L, 0x2CFCL);
    VECTOR(int16_t, 8) l_123 = (VECTOR(int16_t, 8))(0x2AD3L, (VECTOR(int16_t, 4))(0x2AD3L, (VECTOR(int16_t, 2))(0x2AD3L, 0x41DCL), 0x41DCL), 0x41DCL, 0x2AD3L, 0x41DCL);
    VECTOR(int16_t, 8) l_124 = (VECTOR(int16_t, 8))(0x0BD7L, (VECTOR(int16_t, 4))(0x0BD7L, (VECTOR(int16_t, 2))(0x0BD7L, (-4L)), (-4L)), (-4L), 0x0BD7L, (-4L));
    VECTOR(int16_t, 8) l_125 = (VECTOR(int16_t, 8))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x696DL), 0x696DL), 0x696DL, (-5L), 0x696DL);
    int8_t ***l_128 = (void*)0;
    int16_t *l_129[8][2][10] = {{{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130},{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130}},{{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130},{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130}},{{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130},{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130}},{{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130},{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130}},{{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130},{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130}},{{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130},{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130}},{{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130},{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130}},{{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130},{(void*)0,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,&p_1023->g_130,&p_1023->g_130,(void*)0,(void*)0,&p_1023->g_130}}};
    int64_t **l_133 = &l_80;
    union U3 *l_134[1][4] = {{&p_1023->g_135,&p_1023->g_135,&p_1023->g_135,&p_1023->g_135}};
    struct S0 *l_148 = (void*)0;
    VECTOR(int64_t, 16) l_162 = (VECTOR(int64_t, 16))(0x1A4E49BDC695E739L, (VECTOR(int64_t, 4))(0x1A4E49BDC695E739L, (VECTOR(int64_t, 2))(0x1A4E49BDC695E739L, (-1L)), (-1L)), (-1L), 0x1A4E49BDC695E739L, (-1L), (VECTOR(int64_t, 2))(0x1A4E49BDC695E739L, (-1L)), (VECTOR(int64_t, 2))(0x1A4E49BDC695E739L, (-1L)), 0x1A4E49BDC695E739L, (-1L), 0x1A4E49BDC695E739L, (-1L));
    uint64_t l_176 = 0xB9ADD7577FCF7A0FL;
    union U2 l_188 = {0};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_81[i] = (void*)0;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
            l_92[i][j] = &p_1023->g_93;
    }
    l_86 &= (safe_lshift_func_int8_t_s_s((+1L), ((*l_84) &= (safe_rshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s(p_61, ((l_82 = 0x4400D43E6B0C5DECL) || (p_1023->g_47.f0.f1 , p_1023->g_47.f0.f2)))) && p_62), ((VECTOR(uint16_t, 2))(p_1023->g_83.wz)).lo)))));
    (*l_110) = ((l_86 = ((safe_rshift_func_uint16_t_u_s(((void*)0 == p_1023->g_89[3][0]), ((l_82 ^= ((p_1023->g_91 , 0x5D5FB3F51ED022C1L) , ((!6UL) | l_86))) ^ FAKE_DIVERGE(p_1023->group_1_offset, get_group_id(1), 10)))) ^ ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(p_1023->g_94.sd2)))).even)) != (safe_rshift_func_int8_t_s_s((l_99 | (safe_add_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((((!(((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(((&p_1023->g_93 == &p_1023->g_93) > l_99), 0x9DL)), p_1023->g_14)) , p_1023->g_47.f0.f2) > (-1L))) <= l_99) || 0x9DEFB7DDE48D4527L), l_99)), 6L)), p_61))), p_1023->g_47.f0.f1)));
    if ((safe_mul_func_int32_t_s_s((*l_110), ((((((*l_110) , (((VECTOR(uint8_t, 16))(p_1023->g_113.zxwwzyxzyyyxxyxy)).sb < (safe_lshift_func_uint16_t_u_u(((((((safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 4))((-10L), ((VECTOR(int16_t, 2))(l_122.s21)), 0x59DFL)).xxyzzxywxzzwyzxx, ((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_123.s2716)))).yzwxzywx, ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 4))(l_124.s4257)).yyxxxxxxxwyxxxyy, (int16_t)p_1023->g_94.s0))).lo, ((VECTOR(int16_t, 4))(l_125.s4603)).xyxyxywz))).s5761602565112502))).s9, (((p_60 = p_1023->g_126[0][0][0]) == &l_84) && (((((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((((p_1023->g_130 ^= p_1023->g_93) || (GROUP_DIVERGE(2, 1) > p_1023->g_94.s8)) < ((((*l_133) = (p_1023->g_131[0][6][8] , p_1023->g_132)) == p_1023->g_132) , GROUP_DIVERGE(1, 1))) | 65535UL), ((VECTOR(int32_t, 4))(0x3AF78C48L)), 0x219F56D6L, 0x1C3B6F68L, 1L)).s33)).xxxx))).z , l_134[0][2]) != l_134[0][2]) , p_1023->g_47.f0.f1)))), (*l_110))), (*l_110))) ^ 0x52D2F77AL) > p_1023->g_136.f0.f2) < (*p_1023->g_132)) >= p_62) < p_1023->g_47.f0.f1), FAKE_DIVERGE(p_1023->global_1_offset, get_global_id(1), 10))))) , p_62) , 0x4FD0DEDDL) , (void*)0) == &l_86))))
    { /* block id: 24 */
        int32_t l_142[6][9] = {{0x1878830CL,1L,0x1878830CL,0x1878830CL,1L,0x1878830CL,0x1878830CL,1L,0x1878830CL},{0x1878830CL,1L,0x1878830CL,0x1878830CL,1L,0x1878830CL,0x1878830CL,1L,0x1878830CL},{0x1878830CL,1L,0x1878830CL,0x1878830CL,1L,0x1878830CL,0x1878830CL,1L,0x1878830CL},{0x1878830CL,1L,0x1878830CL,0x1878830CL,1L,0x1878830CL,0x1878830CL,1L,0x1878830CL},{0x1878830CL,1L,0x1878830CL,0x1878830CL,1L,0x1878830CL,0x1878830CL,1L,0x1878830CL},{0x1878830CL,1L,0x1878830CL,0x1878830CL,1L,0x1878830CL,0x1878830CL,1L,0x1878830CL}};
        int8_t l_146 = (-1L);
        int8_t **l_163 = &p_1023->g_127;
        int32_t **l_173 = &p_1023->g_172;
        int i, j;
        for (p_1023->g_91.f2.f1 = 0; (p_1023->g_91.f2.f1 <= 18); p_1023->g_91.f2.f1 = safe_add_func_uint64_t_u_u(p_1023->g_91.f2.f1, 2))
        { /* block id: 27 */
            union U3 **l_141 = &l_134[0][0];
            (*l_110) |= (safe_mod_func_int64_t_s_s((*p_1023->g_132), (((void*)0 == l_141) ^ p_61)));
            if (l_142[1][0])
            { /* block id: 29 */
                if ((atomic_inc(&p_1023->l_atomic_input[60]) == 8))
                { /* block id: 31 */
                    union U2 l_144 = {0};
                    union U2 *l_143 = &l_144;
                    union U2 *l_145 = (void*)0;
                    l_145 = (l_143 = l_143);
                    unsigned int result = 0;
                    result += l_144.f0;
                    atomic_add(&p_1023->l_special_values[60], result);
                }
                else
                { /* block id: 34 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 37 */
                uint32_t l_147 = 4294967295UL;
                l_146 ^= p_61;
                if (p_62)
                    continue;
                if (l_147)
                    break;
            }
        }
        if (p_62)
        { /* block id: 43 */
            return &p_1023->g_136;
        }
        else
        { /* block id: 45 */
            struct S0 **l_149 = (void*)0;
            struct S0 **l_150 = &l_148;
            VECTOR(int32_t, 4) l_159 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x568E7AC0L), 0x568E7AC0L);
            int32_t *l_166 = &p_1023->g_136.f0.f2;
            int i, j;
            (*l_150) = l_148;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1023->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 12)), permutations[(safe_mod_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_u(((((0xB7F54350L ^ ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1023->g_153.s20)).xyyyxxxyxyyyxyxy)).sc) | ((((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 16))(0xFCF7L, (safe_div_func_int64_t_s_s((*p_1023->g_132), ((safe_rshift_func_uint16_t_u_s(((((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 8))((safe_unary_minus_func_int32_t_s(((*l_166) = ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(l_159.yywxyxxy)), ((VECTOR(int32_t, 8))((safe_mul_func_uint8_t_u_u(((((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 4))(l_162.sae28)).zwzyzzwyzwzxwzwx))).se != ((((void*)0 != l_163) <= GROUP_DIVERGE(2, 1)) != (0x14L || 0x17L))) <= (~0x72L)), p_1023->g_93)), ((*l_110) = (safe_mul_func_uint16_t_u_u((*l_110), (*l_110)))), p_1023->g_93, 0x0045C730L, (-1L), (-1L), 0x10F39FE9L, 0L))))).s4242771064016537, ((VECTOR(int32_t, 16))(0x3BD7E15EL))))).s0))), 0xFF2D55D3BE87DA6AL, ((VECTOR(uint64_t, 4))(1UL)), 8UL, 0xC7E2C9011E99CA76L)).even, ((VECTOR(uint64_t, 4))(18446744073709551611UL))))))).odd, ((VECTOR(uint64_t, 2))(0xA440665D72AE1B05L)), ((VECTOR(uint64_t, 2))(18446744073709551613UL))))).yyxxyyxxxxyyxxyy, ((VECTOR(uint64_t, 16))(18446744073709551615UL)), ((VECTOR(uint64_t, 16))(0x12C9E7346D446BF5L))))).s2 & p_61) && GROUP_DIVERGE(0, 1)), 11)) , 4L))), 65535UL, ((VECTOR(uint16_t, 8))(65535UL)), ((VECTOR(uint16_t, 4))(1UL)), 65527UL)).odd, ((VECTOR(uint16_t, 8))(0x908FL))))).s0 <= 0L) <= 18446744073709551607UL)) >= p_61) == 1UL), l_142[4][2])) < FAKE_DIVERGE(p_1023->global_2_offset, get_global_id(2), 10)) < GROUP_DIVERGE(2, 1)), 10))][(safe_mod_func_uint32_t_u_u(p_1023->tid, 12))]));
            (*p_1023->g_170) = p_1023->g_135.f0;
        }
        (*l_173) = &l_142[4][8];
    }
    else
    { /* block id: 55 */
        int8_t l_191 = 1L;
        (*p_1023->g_172) &= ((safe_rshift_func_int8_t_s_u((l_191 |= ((*l_84) = (l_176 > (((safe_rshift_func_uint16_t_u_s(0xFFE6L, (safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((*l_110), (safe_sub_func_uint8_t_u_u((0x5D70L & (p_1023->g_185 , (p_1023->g_131[0][6][8] , ((safe_lshift_func_uint8_t_u_s(p_1023->g_90, 7)) & ((l_188 , (((safe_lshift_func_int8_t_s_s(((-2L) > 0x32929257CBEC5B98L), 7)) <= (*l_110)) > (*l_110))) > (*p_1023->g_132)))))), p_1023->g_96[3][3])))), FAKE_DIVERGE(p_1023->global_1_offset, get_global_id(1), 10))))) ^ (*l_110)) ^ p_1023->g_14)))), p_1023->g_14)) ^ 18446744073709551608UL);
    }
    (*p_1023->g_208) = ((((VECTOR(uint8_t, 2))(0x53L, 0x75L)).even && ((((p_1023->g_130 , p_1023->g_185) , ((safe_div_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u((0UL & (((safe_rshift_func_int16_t_s_u((&p_60 == (p_1023->g_91 , l_128)), (safe_rshift_func_uint16_t_u_u((&l_176 != (void*)0), 12)))) < ((VECTOR(int8_t, 4))((-6L), 0x02L, 7L, 0x66L)).z) , (safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s((p_62 | (*p_1023->g_127)), 0xFF8BL)), 0x36DEEBD24BBF9249L)))), p_61)) == p_62) | (*l_110)), (*l_110))), (*l_110))) , (-1L)), 0x090CL)) , GROUP_DIVERGE(0, 1))) || 18446744073709551610UL) != (*l_110))) , &l_86);
    return &p_1023->g_136;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[71];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 71; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[71];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 71; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[12];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 12; i++)
            l_comm_values[i] = 1;
    struct S5 c_1024;
    struct S5* p_1023 = &c_1024;
    struct S5 c_1025 = {
        (-2L), // p_1023->g_14
        {{0x4D24406997B9FFBDL,0x2A48B755L,0x70C8C580L,0x0B8B0E31L}}, // p_1023->g_47
        {0}, // p_1023->g_65
        (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0x7817L), 0x7817L), // p_1023->g_83
        0x38L, // p_1023->g_85
        0x06974D82L, // p_1023->g_90
        {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}, // p_1023->g_89
        {0x33B4CC26152D756AL}, // p_1023->g_91
        6UL, // p_1023->g_93
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x4AF2C2A8L), 0x4AF2C2A8L), 0x4AF2C2A8L, 4294967295UL, 0x4AF2C2A8L, (VECTOR(uint32_t, 2))(4294967295UL, 0x4AF2C2A8L), (VECTOR(uint32_t, 2))(4294967295UL, 0x4AF2C2A8L), 4294967295UL, 0x4AF2C2A8L, 4294967295UL, 0x4AF2C2A8L), // p_1023->g_94
        {{1UL,0xC8BA4A5683E25FC2L,1UL,1UL},{1UL,0xC8BA4A5683E25FC2L,1UL,1UL},{1UL,0xC8BA4A5683E25FC2L,1UL,1UL},{1UL,0xC8BA4A5683E25FC2L,1UL,1UL},{1UL,0xC8BA4A5683E25FC2L,1UL,1UL}}, // p_1023->g_96
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL), // p_1023->g_113
        &p_1023->g_14, // p_1023->g_127
        {{{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127},{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127},{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127}},{{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127},{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127},{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127}},{{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127},{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127},{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127}},{{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127},{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127},{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127}},{{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127},{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127},{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127}},{{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127},{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127},{&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127,&p_1023->g_127}}}, // p_1023->g_126
        (-8L), // p_1023->g_130
        {{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}}}, // p_1023->g_131
        &p_1023->g_91.f0, // p_1023->g_132
        {{-1L,0UL,0x500EE54DL,0x97AA7700L}}, // p_1023->g_135
        {{7L,6UL,0x7A7E671BL,4294967295UL}}, // p_1023->g_136
        (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-9L)), (-9L)), (-9L), 6L, (-9L)), // p_1023->g_153
        (void*)0, // p_1023->g_167
        (void*)0, // p_1023->g_168
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1023->g_169
        &p_1023->g_91.f2, // p_1023->g_170
        &p_1023->g_47.f0.f2, // p_1023->g_172
        {&p_1023->g_172,&p_1023->g_172,&p_1023->g_172,&p_1023->g_172,&p_1023->g_172,&p_1023->g_172,&p_1023->g_172,&p_1023->g_172,&p_1023->g_172}, // p_1023->g_171
        {{0x725E2EDC91CA63CDL,0x322C40B4L,1L,5UL}}, // p_1023->g_185
        &p_1023->g_172, // p_1023->g_208
        {&p_1023->g_172,&p_1023->g_172,&p_1023->g_172,&p_1023->g_172,&p_1023->g_172}, // p_1023->g_210
        (void*)0, // p_1023->g_214
        8L, // p_1023->g_225
        6UL, // p_1023->g_227
        {{{0x17F77FB0L,(-1L),0x17F77FB0L,0x17F77FB0L,(-1L)},{0x17F77FB0L,(-1L),0x17F77FB0L,0x17F77FB0L,(-1L)},{0x17F77FB0L,(-1L),0x17F77FB0L,0x17F77FB0L,(-1L)}},{{0x17F77FB0L,(-1L),0x17F77FB0L,0x17F77FB0L,(-1L)},{0x17F77FB0L,(-1L),0x17F77FB0L,0x17F77FB0L,(-1L)},{0x17F77FB0L,(-1L),0x17F77FB0L,0x17F77FB0L,(-1L)}}}, // p_1023->g_247
        {{&p_1023->g_47.f0,&p_1023->g_47.f0,&p_1023->g_47.f0,&p_1023->g_47.f0,&p_1023->g_47.f0,&p_1023->g_47.f0,&p_1023->g_47.f0,&p_1023->g_47.f0}}, // p_1023->g_266
        {{0x076BL},{0x076BL},{0x076BL}}, // p_1023->g_293
        {&p_1023->g_47.f0.f2,&p_1023->g_47.f0.f2}, // p_1023->g_300
        {{{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0},{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0},{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0}},{{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0},{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0},{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0}},{{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0},{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0},{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0}},{{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0},{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0},{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0}},{{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0},{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0},{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0}},{{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0},{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0},{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0}},{{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0},{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0},{&p_1023->g_300[0],(void*)0,&p_1023->g_300[0],&p_1023->g_300[0],(void*)0}}}, // p_1023->g_299
        0UL, // p_1023->g_304
        1L, // p_1023->g_323
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L)), // p_1023->g_324
        &p_1023->g_47.f0, // p_1023->g_331
        0x5E01D76AL, // p_1023->g_347
        (VECTOR(uint16_t, 16))(0xD72AL, (VECTOR(uint16_t, 4))(0xD72AL, (VECTOR(uint16_t, 2))(0xD72AL, 0x789DL), 0x789DL), 0x789DL, 0xD72AL, 0x789DL, (VECTOR(uint16_t, 2))(0xD72AL, 0x789DL), (VECTOR(uint16_t, 2))(0xD72AL, 0x789DL), 0xD72AL, 0x789DL, 0xD72AL, 0x789DL), // p_1023->g_363
        {0}, // p_1023->g_371
        &p_1023->g_371, // p_1023->g_373
        {{&p_1023->g_373,&p_1023->g_373,&p_1023->g_373,&p_1023->g_373,&p_1023->g_373}}, // p_1023->g_372
        &p_1023->g_373, // p_1023->g_374
        &p_1023->g_47, // p_1023->g_380
        &p_1023->g_380, // p_1023->g_379
        (VECTOR(int32_t, 2))(1L, 0x620DDF82L), // p_1023->g_382
        (void*)0, // p_1023->g_395
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x38L), 0x38L), 0x38L, 0L, 0x38L, (VECTOR(int8_t, 2))(0L, 0x38L), (VECTOR(int8_t, 2))(0L, 0x38L), 0L, 0x38L, 0L, 0x38L), // p_1023->g_396
        0L, // p_1023->g_704
        {0}, // p_1023->g_707
        &p_1023->g_707, // p_1023->g_706
        &p_1023->g_706, // p_1023->g_705
        {{{0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL},{0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL},{0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL,0xA32858A1A04E0A3CL}}}, // p_1023->g_717
        {{0x13A3A3CD1AD4FF8AL,0xDF13689EL,0L,0xE5E037C2L}}, // p_1023->g_726
        1L, // p_1023->g_729
        &p_1023->g_172, // p_1023->g_731
        0x4C778AF8L, // p_1023->g_751
        (VECTOR(uint64_t, 8))(0xBFD7E7EF57992EA4L, (VECTOR(uint64_t, 4))(0xBFD7E7EF57992EA4L, (VECTOR(uint64_t, 2))(0xBFD7E7EF57992EA4L, 0x6B8782407CB11ABDL), 0x6B8782407CB11ABDL), 0x6B8782407CB11ABDL, 0xBFD7E7EF57992EA4L, 0x6B8782407CB11ABDL), // p_1023->g_763
        (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x42B7A2C3L), 0x42B7A2C3L), 0x42B7A2C3L, (-8L), 0x42B7A2C3L, (VECTOR(int32_t, 2))((-8L), 0x42B7A2C3L), (VECTOR(int32_t, 2))((-8L), 0x42B7A2C3L), (-8L), 0x42B7A2C3L, (-8L), 0x42B7A2C3L), // p_1023->g_784
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0E29E01FL), 0x0E29E01FL), // p_1023->g_787
        (VECTOR(int32_t, 8))(0x02234DA8L, (VECTOR(int32_t, 4))(0x02234DA8L, (VECTOR(int32_t, 2))(0x02234DA8L, 0x542A1CC6L), 0x542A1CC6L), 0x542A1CC6L, 0x02234DA8L, 0x542A1CC6L), // p_1023->g_789
        (VECTOR(uint16_t, 4))(0x5FBDL, (VECTOR(uint16_t, 2))(0x5FBDL, 0x359AL), 0x359AL), // p_1023->g_791
        (VECTOR(uint16_t, 2))(0x4573L, 65529UL), // p_1023->g_793
        (VECTOR(uint16_t, 2))(1UL, 0x3A95L), // p_1023->g_794
        &p_1023->g_172, // p_1023->g_807
        (VECTOR(int64_t, 16))(0x717BACDFD4BEC89DL, (VECTOR(int64_t, 4))(0x717BACDFD4BEC89DL, (VECTOR(int64_t, 2))(0x717BACDFD4BEC89DL, 0L), 0L), 0L, 0x717BACDFD4BEC89DL, 0L, (VECTOR(int64_t, 2))(0x717BACDFD4BEC89DL, 0L), (VECTOR(int64_t, 2))(0x717BACDFD4BEC89DL, 0L), 0x717BACDFD4BEC89DL, 0L, 0x717BACDFD4BEC89DL, 0L), // p_1023->g_810
        (VECTOR(int64_t, 2))(0x5FB1E774EC10266DL, 2L), // p_1023->g_811
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x5E1D366F5847D50EL), 0x5E1D366F5847D50EL), 0x5E1D366F5847D50EL, (-1L), 0x5E1D366F5847D50EL, (VECTOR(int64_t, 2))((-1L), 0x5E1D366F5847D50EL), (VECTOR(int64_t, 2))((-1L), 0x5E1D366F5847D50EL), (-1L), 0x5E1D366F5847D50EL, (-1L), 0x5E1D366F5847D50EL), // p_1023->g_813
        {{9L,4294967295UL,0x3FF65DCBL,0xA0163469L}}, // p_1023->g_818
        (VECTOR(int8_t, 4))(0x47L, (VECTOR(int8_t, 2))(0x47L, 4L), 4L), // p_1023->g_819
        &p_1023->g_130, // p_1023->g_829
        &p_1023->g_829, // p_1023->g_828
        0xFB24DC73L, // p_1023->g_830
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65534UL), 65534UL), 65534UL, 0UL, 65534UL, (VECTOR(uint16_t, 2))(0UL, 65534UL), (VECTOR(uint16_t, 2))(0UL, 65534UL), 0UL, 65534UL, 0UL, 65534UL), // p_1023->g_846
        {&p_1023->g_347}, // p_1023->g_886
        &p_1023->g_886[0], // p_1023->g_885
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_1023->g_889
        &p_1023->g_889[3], // p_1023->g_888
        (VECTOR(uint8_t, 2))(0xAFL, 1UL), // p_1023->g_904
        (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x37L), 0x37L), // p_1023->g_907
        (VECTOR(uint8_t, 2))(250UL, 0x22L), // p_1023->g_931
        4UL, // p_1023->g_934
        (VECTOR(int8_t, 8))(0x05L, (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, 0x41L), 0x41L), 0x41L, 0x05L, 0x41L), // p_1023->g_939
        (VECTOR(int8_t, 8))(0x2FL, (VECTOR(int8_t, 4))(0x2FL, (VECTOR(int8_t, 2))(0x2FL, 0x76L), 0x76L), 0x76L, 0x2FL, 0x76L), // p_1023->g_943
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xAA9B16FCL), 0xAA9B16FCL), 0xAA9B16FCL, 4294967295UL, 0xAA9B16FCL), // p_1023->g_961
        (VECTOR(uint16_t, 4))(0xAC3DL, (VECTOR(uint16_t, 2))(0xAC3DL, 0x31A6L), 0x31A6L), // p_1023->g_971
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x18BD9CE0BA329D91L), 0x18BD9CE0BA329D91L), 0x18BD9CE0BA329D91L, (-1L), 0x18BD9CE0BA329D91L, (VECTOR(int64_t, 2))((-1L), 0x18BD9CE0BA329D91L), (VECTOR(int64_t, 2))((-1L), 0x18BD9CE0BA329D91L), (-1L), 0x18BD9CE0BA329D91L, (-1L), 0x18BD9CE0BA329D91L), // p_1023->g_972
        0x17DA45A0L, // p_1023->g_974
        0, // p_1023->v_collective
        sequence_input[get_global_id(0)], // p_1023->global_0_offset
        sequence_input[get_global_id(1)], // p_1023->global_1_offset
        sequence_input[get_global_id(2)], // p_1023->global_2_offset
        sequence_input[get_local_id(0)], // p_1023->local_0_offset
        sequence_input[get_local_id(1)], // p_1023->local_1_offset
        sequence_input[get_local_id(2)], // p_1023->local_2_offset
        sequence_input[get_group_id(0)], // p_1023->group_0_offset
        sequence_input[get_group_id(1)], // p_1023->group_1_offset
        sequence_input[get_group_id(2)], // p_1023->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 12)), permutations[0][get_linear_local_id()])), // p_1023->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1024 = c_1025;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1023);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1023->g_14, "p_1023->g_14", print_hash_value);
    transparent_crc(p_1023->g_47.f0.f0, "p_1023->g_47.f0.f0", print_hash_value);
    transparent_crc(p_1023->g_47.f0.f1, "p_1023->g_47.f0.f1", print_hash_value);
    transparent_crc(p_1023->g_47.f0.f2, "p_1023->g_47.f0.f2", print_hash_value);
    transparent_crc(p_1023->g_47.f0.f3, "p_1023->g_47.f0.f3", print_hash_value);
    transparent_crc(p_1023->g_83.x, "p_1023->g_83.x", print_hash_value);
    transparent_crc(p_1023->g_83.y, "p_1023->g_83.y", print_hash_value);
    transparent_crc(p_1023->g_83.z, "p_1023->g_83.z", print_hash_value);
    transparent_crc(p_1023->g_83.w, "p_1023->g_83.w", print_hash_value);
    transparent_crc(p_1023->g_85, "p_1023->g_85", print_hash_value);
    transparent_crc(p_1023->g_90, "p_1023->g_90", print_hash_value);
    transparent_crc(p_1023->g_91.f0, "p_1023->g_91.f0", print_hash_value);
    transparent_crc(p_1023->g_93, "p_1023->g_93", print_hash_value);
    transparent_crc(p_1023->g_94.s0, "p_1023->g_94.s0", print_hash_value);
    transparent_crc(p_1023->g_94.s1, "p_1023->g_94.s1", print_hash_value);
    transparent_crc(p_1023->g_94.s2, "p_1023->g_94.s2", print_hash_value);
    transparent_crc(p_1023->g_94.s3, "p_1023->g_94.s3", print_hash_value);
    transparent_crc(p_1023->g_94.s4, "p_1023->g_94.s4", print_hash_value);
    transparent_crc(p_1023->g_94.s5, "p_1023->g_94.s5", print_hash_value);
    transparent_crc(p_1023->g_94.s6, "p_1023->g_94.s6", print_hash_value);
    transparent_crc(p_1023->g_94.s7, "p_1023->g_94.s7", print_hash_value);
    transparent_crc(p_1023->g_94.s8, "p_1023->g_94.s8", print_hash_value);
    transparent_crc(p_1023->g_94.s9, "p_1023->g_94.s9", print_hash_value);
    transparent_crc(p_1023->g_94.sa, "p_1023->g_94.sa", print_hash_value);
    transparent_crc(p_1023->g_94.sb, "p_1023->g_94.sb", print_hash_value);
    transparent_crc(p_1023->g_94.sc, "p_1023->g_94.sc", print_hash_value);
    transparent_crc(p_1023->g_94.sd, "p_1023->g_94.sd", print_hash_value);
    transparent_crc(p_1023->g_94.se, "p_1023->g_94.se", print_hash_value);
    transparent_crc(p_1023->g_94.sf, "p_1023->g_94.sf", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1023->g_96[i][j], "p_1023->g_96[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1023->g_113.x, "p_1023->g_113.x", print_hash_value);
    transparent_crc(p_1023->g_113.y, "p_1023->g_113.y", print_hash_value);
    transparent_crc(p_1023->g_113.z, "p_1023->g_113.z", print_hash_value);
    transparent_crc(p_1023->g_113.w, "p_1023->g_113.w", print_hash_value);
    transparent_crc(p_1023->g_130, "p_1023->g_130", print_hash_value);
    transparent_crc(p_1023->g_135.f0.f0, "p_1023->g_135.f0.f0", print_hash_value);
    transparent_crc(p_1023->g_135.f0.f1, "p_1023->g_135.f0.f1", print_hash_value);
    transparent_crc(p_1023->g_135.f0.f2, "p_1023->g_135.f0.f2", print_hash_value);
    transparent_crc(p_1023->g_135.f0.f3, "p_1023->g_135.f0.f3", print_hash_value);
    transparent_crc(p_1023->g_136.f0.f0, "p_1023->g_136.f0.f0", print_hash_value);
    transparent_crc(p_1023->g_136.f0.f1, "p_1023->g_136.f0.f1", print_hash_value);
    transparent_crc(p_1023->g_136.f0.f2, "p_1023->g_136.f0.f2", print_hash_value);
    transparent_crc(p_1023->g_136.f0.f3, "p_1023->g_136.f0.f3", print_hash_value);
    transparent_crc(p_1023->g_153.s0, "p_1023->g_153.s0", print_hash_value);
    transparent_crc(p_1023->g_153.s1, "p_1023->g_153.s1", print_hash_value);
    transparent_crc(p_1023->g_153.s2, "p_1023->g_153.s2", print_hash_value);
    transparent_crc(p_1023->g_153.s3, "p_1023->g_153.s3", print_hash_value);
    transparent_crc(p_1023->g_153.s4, "p_1023->g_153.s4", print_hash_value);
    transparent_crc(p_1023->g_153.s5, "p_1023->g_153.s5", print_hash_value);
    transparent_crc(p_1023->g_153.s6, "p_1023->g_153.s6", print_hash_value);
    transparent_crc(p_1023->g_153.s7, "p_1023->g_153.s7", print_hash_value);
    transparent_crc(p_1023->g_185.f0.f0, "p_1023->g_185.f0.f0", print_hash_value);
    transparent_crc(p_1023->g_185.f0.f1, "p_1023->g_185.f0.f1", print_hash_value);
    transparent_crc(p_1023->g_185.f0.f2, "p_1023->g_185.f0.f2", print_hash_value);
    transparent_crc(p_1023->g_185.f0.f3, "p_1023->g_185.f0.f3", print_hash_value);
    transparent_crc(p_1023->g_225, "p_1023->g_225", print_hash_value);
    transparent_crc(p_1023->g_227, "p_1023->g_227", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1023->g_247[i][j][k], "p_1023->g_247[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1023->g_293[i][j], "p_1023->g_293[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1023->g_304, "p_1023->g_304", print_hash_value);
    transparent_crc(p_1023->g_323, "p_1023->g_323", print_hash_value);
    transparent_crc(p_1023->g_324.s0, "p_1023->g_324.s0", print_hash_value);
    transparent_crc(p_1023->g_324.s1, "p_1023->g_324.s1", print_hash_value);
    transparent_crc(p_1023->g_324.s2, "p_1023->g_324.s2", print_hash_value);
    transparent_crc(p_1023->g_324.s3, "p_1023->g_324.s3", print_hash_value);
    transparent_crc(p_1023->g_324.s4, "p_1023->g_324.s4", print_hash_value);
    transparent_crc(p_1023->g_324.s5, "p_1023->g_324.s5", print_hash_value);
    transparent_crc(p_1023->g_324.s6, "p_1023->g_324.s6", print_hash_value);
    transparent_crc(p_1023->g_324.s7, "p_1023->g_324.s7", print_hash_value);
    transparent_crc(p_1023->g_347, "p_1023->g_347", print_hash_value);
    transparent_crc(p_1023->g_363.s0, "p_1023->g_363.s0", print_hash_value);
    transparent_crc(p_1023->g_363.s1, "p_1023->g_363.s1", print_hash_value);
    transparent_crc(p_1023->g_363.s2, "p_1023->g_363.s2", print_hash_value);
    transparent_crc(p_1023->g_363.s3, "p_1023->g_363.s3", print_hash_value);
    transparent_crc(p_1023->g_363.s4, "p_1023->g_363.s4", print_hash_value);
    transparent_crc(p_1023->g_363.s5, "p_1023->g_363.s5", print_hash_value);
    transparent_crc(p_1023->g_363.s6, "p_1023->g_363.s6", print_hash_value);
    transparent_crc(p_1023->g_363.s7, "p_1023->g_363.s7", print_hash_value);
    transparent_crc(p_1023->g_363.s8, "p_1023->g_363.s8", print_hash_value);
    transparent_crc(p_1023->g_363.s9, "p_1023->g_363.s9", print_hash_value);
    transparent_crc(p_1023->g_363.sa, "p_1023->g_363.sa", print_hash_value);
    transparent_crc(p_1023->g_363.sb, "p_1023->g_363.sb", print_hash_value);
    transparent_crc(p_1023->g_363.sc, "p_1023->g_363.sc", print_hash_value);
    transparent_crc(p_1023->g_363.sd, "p_1023->g_363.sd", print_hash_value);
    transparent_crc(p_1023->g_363.se, "p_1023->g_363.se", print_hash_value);
    transparent_crc(p_1023->g_363.sf, "p_1023->g_363.sf", print_hash_value);
    transparent_crc(p_1023->g_382.x, "p_1023->g_382.x", print_hash_value);
    transparent_crc(p_1023->g_382.y, "p_1023->g_382.y", print_hash_value);
    transparent_crc(p_1023->g_396.s0, "p_1023->g_396.s0", print_hash_value);
    transparent_crc(p_1023->g_396.s1, "p_1023->g_396.s1", print_hash_value);
    transparent_crc(p_1023->g_396.s2, "p_1023->g_396.s2", print_hash_value);
    transparent_crc(p_1023->g_396.s3, "p_1023->g_396.s3", print_hash_value);
    transparent_crc(p_1023->g_396.s4, "p_1023->g_396.s4", print_hash_value);
    transparent_crc(p_1023->g_396.s5, "p_1023->g_396.s5", print_hash_value);
    transparent_crc(p_1023->g_396.s6, "p_1023->g_396.s6", print_hash_value);
    transparent_crc(p_1023->g_396.s7, "p_1023->g_396.s7", print_hash_value);
    transparent_crc(p_1023->g_396.s8, "p_1023->g_396.s8", print_hash_value);
    transparent_crc(p_1023->g_396.s9, "p_1023->g_396.s9", print_hash_value);
    transparent_crc(p_1023->g_396.sa, "p_1023->g_396.sa", print_hash_value);
    transparent_crc(p_1023->g_396.sb, "p_1023->g_396.sb", print_hash_value);
    transparent_crc(p_1023->g_396.sc, "p_1023->g_396.sc", print_hash_value);
    transparent_crc(p_1023->g_396.sd, "p_1023->g_396.sd", print_hash_value);
    transparent_crc(p_1023->g_396.se, "p_1023->g_396.se", print_hash_value);
    transparent_crc(p_1023->g_396.sf, "p_1023->g_396.sf", print_hash_value);
    transparent_crc(p_1023->g_704, "p_1023->g_704", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1023->g_717[i][j][k], "p_1023->g_717[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1023->g_726.f0.f0, "p_1023->g_726.f0.f0", print_hash_value);
    transparent_crc(p_1023->g_726.f0.f1, "p_1023->g_726.f0.f1", print_hash_value);
    transparent_crc(p_1023->g_726.f0.f2, "p_1023->g_726.f0.f2", print_hash_value);
    transparent_crc(p_1023->g_726.f0.f3, "p_1023->g_726.f0.f3", print_hash_value);
    transparent_crc(p_1023->g_729, "p_1023->g_729", print_hash_value);
    transparent_crc(p_1023->g_751, "p_1023->g_751", print_hash_value);
    transparent_crc(p_1023->g_763.s0, "p_1023->g_763.s0", print_hash_value);
    transparent_crc(p_1023->g_763.s1, "p_1023->g_763.s1", print_hash_value);
    transparent_crc(p_1023->g_763.s2, "p_1023->g_763.s2", print_hash_value);
    transparent_crc(p_1023->g_763.s3, "p_1023->g_763.s3", print_hash_value);
    transparent_crc(p_1023->g_763.s4, "p_1023->g_763.s4", print_hash_value);
    transparent_crc(p_1023->g_763.s5, "p_1023->g_763.s5", print_hash_value);
    transparent_crc(p_1023->g_763.s6, "p_1023->g_763.s6", print_hash_value);
    transparent_crc(p_1023->g_763.s7, "p_1023->g_763.s7", print_hash_value);
    transparent_crc(p_1023->g_784.s0, "p_1023->g_784.s0", print_hash_value);
    transparent_crc(p_1023->g_784.s1, "p_1023->g_784.s1", print_hash_value);
    transparent_crc(p_1023->g_784.s2, "p_1023->g_784.s2", print_hash_value);
    transparent_crc(p_1023->g_784.s3, "p_1023->g_784.s3", print_hash_value);
    transparent_crc(p_1023->g_784.s4, "p_1023->g_784.s4", print_hash_value);
    transparent_crc(p_1023->g_784.s5, "p_1023->g_784.s5", print_hash_value);
    transparent_crc(p_1023->g_784.s6, "p_1023->g_784.s6", print_hash_value);
    transparent_crc(p_1023->g_784.s7, "p_1023->g_784.s7", print_hash_value);
    transparent_crc(p_1023->g_784.s8, "p_1023->g_784.s8", print_hash_value);
    transparent_crc(p_1023->g_784.s9, "p_1023->g_784.s9", print_hash_value);
    transparent_crc(p_1023->g_784.sa, "p_1023->g_784.sa", print_hash_value);
    transparent_crc(p_1023->g_784.sb, "p_1023->g_784.sb", print_hash_value);
    transparent_crc(p_1023->g_784.sc, "p_1023->g_784.sc", print_hash_value);
    transparent_crc(p_1023->g_784.sd, "p_1023->g_784.sd", print_hash_value);
    transparent_crc(p_1023->g_784.se, "p_1023->g_784.se", print_hash_value);
    transparent_crc(p_1023->g_784.sf, "p_1023->g_784.sf", print_hash_value);
    transparent_crc(p_1023->g_787.x, "p_1023->g_787.x", print_hash_value);
    transparent_crc(p_1023->g_787.y, "p_1023->g_787.y", print_hash_value);
    transparent_crc(p_1023->g_787.z, "p_1023->g_787.z", print_hash_value);
    transparent_crc(p_1023->g_787.w, "p_1023->g_787.w", print_hash_value);
    transparent_crc(p_1023->g_789.s0, "p_1023->g_789.s0", print_hash_value);
    transparent_crc(p_1023->g_789.s1, "p_1023->g_789.s1", print_hash_value);
    transparent_crc(p_1023->g_789.s2, "p_1023->g_789.s2", print_hash_value);
    transparent_crc(p_1023->g_789.s3, "p_1023->g_789.s3", print_hash_value);
    transparent_crc(p_1023->g_789.s4, "p_1023->g_789.s4", print_hash_value);
    transparent_crc(p_1023->g_789.s5, "p_1023->g_789.s5", print_hash_value);
    transparent_crc(p_1023->g_789.s6, "p_1023->g_789.s6", print_hash_value);
    transparent_crc(p_1023->g_789.s7, "p_1023->g_789.s7", print_hash_value);
    transparent_crc(p_1023->g_791.x, "p_1023->g_791.x", print_hash_value);
    transparent_crc(p_1023->g_791.y, "p_1023->g_791.y", print_hash_value);
    transparent_crc(p_1023->g_791.z, "p_1023->g_791.z", print_hash_value);
    transparent_crc(p_1023->g_791.w, "p_1023->g_791.w", print_hash_value);
    transparent_crc(p_1023->g_793.x, "p_1023->g_793.x", print_hash_value);
    transparent_crc(p_1023->g_793.y, "p_1023->g_793.y", print_hash_value);
    transparent_crc(p_1023->g_794.x, "p_1023->g_794.x", print_hash_value);
    transparent_crc(p_1023->g_794.y, "p_1023->g_794.y", print_hash_value);
    transparent_crc(p_1023->g_810.s0, "p_1023->g_810.s0", print_hash_value);
    transparent_crc(p_1023->g_810.s1, "p_1023->g_810.s1", print_hash_value);
    transparent_crc(p_1023->g_810.s2, "p_1023->g_810.s2", print_hash_value);
    transparent_crc(p_1023->g_810.s3, "p_1023->g_810.s3", print_hash_value);
    transparent_crc(p_1023->g_810.s4, "p_1023->g_810.s4", print_hash_value);
    transparent_crc(p_1023->g_810.s5, "p_1023->g_810.s5", print_hash_value);
    transparent_crc(p_1023->g_810.s6, "p_1023->g_810.s6", print_hash_value);
    transparent_crc(p_1023->g_810.s7, "p_1023->g_810.s7", print_hash_value);
    transparent_crc(p_1023->g_810.s8, "p_1023->g_810.s8", print_hash_value);
    transparent_crc(p_1023->g_810.s9, "p_1023->g_810.s9", print_hash_value);
    transparent_crc(p_1023->g_810.sa, "p_1023->g_810.sa", print_hash_value);
    transparent_crc(p_1023->g_810.sb, "p_1023->g_810.sb", print_hash_value);
    transparent_crc(p_1023->g_810.sc, "p_1023->g_810.sc", print_hash_value);
    transparent_crc(p_1023->g_810.sd, "p_1023->g_810.sd", print_hash_value);
    transparent_crc(p_1023->g_810.se, "p_1023->g_810.se", print_hash_value);
    transparent_crc(p_1023->g_810.sf, "p_1023->g_810.sf", print_hash_value);
    transparent_crc(p_1023->g_811.x, "p_1023->g_811.x", print_hash_value);
    transparent_crc(p_1023->g_811.y, "p_1023->g_811.y", print_hash_value);
    transparent_crc(p_1023->g_813.s0, "p_1023->g_813.s0", print_hash_value);
    transparent_crc(p_1023->g_813.s1, "p_1023->g_813.s1", print_hash_value);
    transparent_crc(p_1023->g_813.s2, "p_1023->g_813.s2", print_hash_value);
    transparent_crc(p_1023->g_813.s3, "p_1023->g_813.s3", print_hash_value);
    transparent_crc(p_1023->g_813.s4, "p_1023->g_813.s4", print_hash_value);
    transparent_crc(p_1023->g_813.s5, "p_1023->g_813.s5", print_hash_value);
    transparent_crc(p_1023->g_813.s6, "p_1023->g_813.s6", print_hash_value);
    transparent_crc(p_1023->g_813.s7, "p_1023->g_813.s7", print_hash_value);
    transparent_crc(p_1023->g_813.s8, "p_1023->g_813.s8", print_hash_value);
    transparent_crc(p_1023->g_813.s9, "p_1023->g_813.s9", print_hash_value);
    transparent_crc(p_1023->g_813.sa, "p_1023->g_813.sa", print_hash_value);
    transparent_crc(p_1023->g_813.sb, "p_1023->g_813.sb", print_hash_value);
    transparent_crc(p_1023->g_813.sc, "p_1023->g_813.sc", print_hash_value);
    transparent_crc(p_1023->g_813.sd, "p_1023->g_813.sd", print_hash_value);
    transparent_crc(p_1023->g_813.se, "p_1023->g_813.se", print_hash_value);
    transparent_crc(p_1023->g_813.sf, "p_1023->g_813.sf", print_hash_value);
    transparent_crc(p_1023->g_818.f0.f0, "p_1023->g_818.f0.f0", print_hash_value);
    transparent_crc(p_1023->g_818.f0.f1, "p_1023->g_818.f0.f1", print_hash_value);
    transparent_crc(p_1023->g_818.f0.f2, "p_1023->g_818.f0.f2", print_hash_value);
    transparent_crc(p_1023->g_818.f0.f3, "p_1023->g_818.f0.f3", print_hash_value);
    transparent_crc(p_1023->g_819.x, "p_1023->g_819.x", print_hash_value);
    transparent_crc(p_1023->g_819.y, "p_1023->g_819.y", print_hash_value);
    transparent_crc(p_1023->g_819.z, "p_1023->g_819.z", print_hash_value);
    transparent_crc(p_1023->g_819.w, "p_1023->g_819.w", print_hash_value);
    transparent_crc(p_1023->g_830, "p_1023->g_830", print_hash_value);
    transparent_crc(p_1023->g_846.s0, "p_1023->g_846.s0", print_hash_value);
    transparent_crc(p_1023->g_846.s1, "p_1023->g_846.s1", print_hash_value);
    transparent_crc(p_1023->g_846.s2, "p_1023->g_846.s2", print_hash_value);
    transparent_crc(p_1023->g_846.s3, "p_1023->g_846.s3", print_hash_value);
    transparent_crc(p_1023->g_846.s4, "p_1023->g_846.s4", print_hash_value);
    transparent_crc(p_1023->g_846.s5, "p_1023->g_846.s5", print_hash_value);
    transparent_crc(p_1023->g_846.s6, "p_1023->g_846.s6", print_hash_value);
    transparent_crc(p_1023->g_846.s7, "p_1023->g_846.s7", print_hash_value);
    transparent_crc(p_1023->g_846.s8, "p_1023->g_846.s8", print_hash_value);
    transparent_crc(p_1023->g_846.s9, "p_1023->g_846.s9", print_hash_value);
    transparent_crc(p_1023->g_846.sa, "p_1023->g_846.sa", print_hash_value);
    transparent_crc(p_1023->g_846.sb, "p_1023->g_846.sb", print_hash_value);
    transparent_crc(p_1023->g_846.sc, "p_1023->g_846.sc", print_hash_value);
    transparent_crc(p_1023->g_846.sd, "p_1023->g_846.sd", print_hash_value);
    transparent_crc(p_1023->g_846.se, "p_1023->g_846.se", print_hash_value);
    transparent_crc(p_1023->g_846.sf, "p_1023->g_846.sf", print_hash_value);
    transparent_crc(p_1023->g_904.x, "p_1023->g_904.x", print_hash_value);
    transparent_crc(p_1023->g_904.y, "p_1023->g_904.y", print_hash_value);
    transparent_crc(p_1023->g_907.x, "p_1023->g_907.x", print_hash_value);
    transparent_crc(p_1023->g_907.y, "p_1023->g_907.y", print_hash_value);
    transparent_crc(p_1023->g_907.z, "p_1023->g_907.z", print_hash_value);
    transparent_crc(p_1023->g_907.w, "p_1023->g_907.w", print_hash_value);
    transparent_crc(p_1023->g_931.x, "p_1023->g_931.x", print_hash_value);
    transparent_crc(p_1023->g_931.y, "p_1023->g_931.y", print_hash_value);
    transparent_crc(p_1023->g_934, "p_1023->g_934", print_hash_value);
    transparent_crc(p_1023->g_939.s0, "p_1023->g_939.s0", print_hash_value);
    transparent_crc(p_1023->g_939.s1, "p_1023->g_939.s1", print_hash_value);
    transparent_crc(p_1023->g_939.s2, "p_1023->g_939.s2", print_hash_value);
    transparent_crc(p_1023->g_939.s3, "p_1023->g_939.s3", print_hash_value);
    transparent_crc(p_1023->g_939.s4, "p_1023->g_939.s4", print_hash_value);
    transparent_crc(p_1023->g_939.s5, "p_1023->g_939.s5", print_hash_value);
    transparent_crc(p_1023->g_939.s6, "p_1023->g_939.s6", print_hash_value);
    transparent_crc(p_1023->g_939.s7, "p_1023->g_939.s7", print_hash_value);
    transparent_crc(p_1023->g_943.s0, "p_1023->g_943.s0", print_hash_value);
    transparent_crc(p_1023->g_943.s1, "p_1023->g_943.s1", print_hash_value);
    transparent_crc(p_1023->g_943.s2, "p_1023->g_943.s2", print_hash_value);
    transparent_crc(p_1023->g_943.s3, "p_1023->g_943.s3", print_hash_value);
    transparent_crc(p_1023->g_943.s4, "p_1023->g_943.s4", print_hash_value);
    transparent_crc(p_1023->g_943.s5, "p_1023->g_943.s5", print_hash_value);
    transparent_crc(p_1023->g_943.s6, "p_1023->g_943.s6", print_hash_value);
    transparent_crc(p_1023->g_943.s7, "p_1023->g_943.s7", print_hash_value);
    transparent_crc(p_1023->g_961.s0, "p_1023->g_961.s0", print_hash_value);
    transparent_crc(p_1023->g_961.s1, "p_1023->g_961.s1", print_hash_value);
    transparent_crc(p_1023->g_961.s2, "p_1023->g_961.s2", print_hash_value);
    transparent_crc(p_1023->g_961.s3, "p_1023->g_961.s3", print_hash_value);
    transparent_crc(p_1023->g_961.s4, "p_1023->g_961.s4", print_hash_value);
    transparent_crc(p_1023->g_961.s5, "p_1023->g_961.s5", print_hash_value);
    transparent_crc(p_1023->g_961.s6, "p_1023->g_961.s6", print_hash_value);
    transparent_crc(p_1023->g_961.s7, "p_1023->g_961.s7", print_hash_value);
    transparent_crc(p_1023->g_971.x, "p_1023->g_971.x", print_hash_value);
    transparent_crc(p_1023->g_971.y, "p_1023->g_971.y", print_hash_value);
    transparent_crc(p_1023->g_971.z, "p_1023->g_971.z", print_hash_value);
    transparent_crc(p_1023->g_971.w, "p_1023->g_971.w", print_hash_value);
    transparent_crc(p_1023->g_972.s0, "p_1023->g_972.s0", print_hash_value);
    transparent_crc(p_1023->g_972.s1, "p_1023->g_972.s1", print_hash_value);
    transparent_crc(p_1023->g_972.s2, "p_1023->g_972.s2", print_hash_value);
    transparent_crc(p_1023->g_972.s3, "p_1023->g_972.s3", print_hash_value);
    transparent_crc(p_1023->g_972.s4, "p_1023->g_972.s4", print_hash_value);
    transparent_crc(p_1023->g_972.s5, "p_1023->g_972.s5", print_hash_value);
    transparent_crc(p_1023->g_972.s6, "p_1023->g_972.s6", print_hash_value);
    transparent_crc(p_1023->g_972.s7, "p_1023->g_972.s7", print_hash_value);
    transparent_crc(p_1023->g_972.s8, "p_1023->g_972.s8", print_hash_value);
    transparent_crc(p_1023->g_972.s9, "p_1023->g_972.s9", print_hash_value);
    transparent_crc(p_1023->g_972.sa, "p_1023->g_972.sa", print_hash_value);
    transparent_crc(p_1023->g_972.sb, "p_1023->g_972.sb", print_hash_value);
    transparent_crc(p_1023->g_972.sc, "p_1023->g_972.sc", print_hash_value);
    transparent_crc(p_1023->g_972.sd, "p_1023->g_972.sd", print_hash_value);
    transparent_crc(p_1023->g_972.se, "p_1023->g_972.se", print_hash_value);
    transparent_crc(p_1023->g_972.sf, "p_1023->g_972.sf", print_hash_value);
    transparent_crc(p_1023->g_974, "p_1023->g_974", print_hash_value);
    transparent_crc(p_1023->v_collective, "p_1023->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 71; i++)
            transparent_crc(p_1023->g_special_values[i + 71 * get_linear_group_id()], "p_1023->g_special_values[i + 71 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 71; i++)
            transparent_crc(p_1023->l_special_values[i], "p_1023->l_special_values[i]", print_hash_value);
    transparent_crc(p_1023->l_comm_values[get_linear_local_id()], "p_1023->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1023->g_comm_values[get_linear_group_id() * 12 + get_linear_local_id()], "p_1023->g_comm_values[get_linear_group_id() * 12 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
