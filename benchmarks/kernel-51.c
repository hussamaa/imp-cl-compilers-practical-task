// --atomics 96 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 73,22,4 -l 1,11,4
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

__constant uint32_t permutations[10][44] = {
{20,43,28,22,35,2,24,15,0,30,31,11,8,10,25,19,41,7,27,5,18,33,26,23,40,1,32,34,36,14,29,3,37,38,21,4,17,16,9,12,6,39,13,42}, // permutation 0
{20,18,3,1,41,31,15,12,5,4,39,0,29,33,9,14,10,27,8,17,7,6,26,28,16,19,36,25,40,34,24,21,11,22,2,32,42,30,13,37,23,43,38,35}, // permutation 1
{38,37,30,34,43,0,13,12,35,9,29,32,10,20,33,21,22,7,24,23,40,18,16,6,11,17,15,19,25,36,2,28,1,41,3,26,39,14,31,42,4,27,8,5}, // permutation 2
{33,4,3,38,6,30,18,21,29,34,15,5,42,1,16,35,23,27,19,9,22,2,32,31,13,20,8,39,26,0,7,36,37,40,28,11,14,12,41,10,17,25,24,43}, // permutation 3
{7,2,11,10,0,39,43,29,35,17,3,18,34,12,5,14,4,22,16,31,37,28,9,19,32,42,30,33,24,41,15,38,20,27,40,25,8,13,1,6,23,21,36,26}, // permutation 4
{19,26,41,23,5,43,36,29,22,11,20,42,4,2,32,30,15,38,18,35,21,13,39,27,31,24,6,12,14,34,9,25,40,8,28,3,7,1,17,0,33,37,10,16}, // permutation 5
{31,14,8,0,17,12,26,4,38,3,15,11,42,24,21,37,23,18,32,6,36,13,34,2,1,39,25,20,41,40,19,27,43,29,33,30,22,16,7,28,10,35,5,9}, // permutation 6
{19,35,24,37,43,33,2,31,5,30,10,0,27,22,14,1,42,25,39,21,11,40,36,8,4,23,17,32,20,41,6,16,7,13,18,9,15,34,28,26,29,12,3,38}, // permutation 7
{17,26,38,30,15,2,35,33,23,43,24,18,27,12,25,1,28,29,36,20,4,22,8,40,13,9,16,5,10,32,37,0,34,21,3,41,14,19,31,42,7,6,11,39}, // permutation 8
{24,12,4,34,11,32,8,36,40,37,42,0,2,30,28,5,9,16,10,17,14,38,33,26,23,19,13,31,35,21,41,6,1,43,29,18,20,25,15,39,3,7,27,22} // permutation 9
};

// Seed: 1808943945

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int64_t  f0;
   int16_t  f1;
   int32_t  f2;
   int32_t  f3;
   volatile uint32_t  f4;
};

union U1 {
   int32_t  f0;
   int16_t  f1;
   uint64_t  f2;
   int32_t  f3;
};

union U2 {
   volatile int8_t  f0;
   int8_t * f1;
   volatile int8_t  f2;
   volatile uint32_t  f3;
   volatile uint32_t  f4;
};

struct S3 {
    int8_t g_11;
    int8_t *g_10;
    int16_t g_30[1];
    volatile union U2 g_38;
    union U1 g_54[8];
    uint8_t g_61;
    int8_t *g_70;
    int32_t g_91;
    int16_t g_101;
    int8_t g_102;
    int32_t g_103;
    int32_t * volatile g_109[1][9][9];
    int32_t * volatile g_110;
    uint32_t g_120;
    volatile VECTOR(int8_t, 16) g_124;
    uint32_t g_141;
    union U0 g_147;
    uint32_t g_148;
    int32_t *g_152;
    int32_t **g_151;
    int32_t **g_154;
    volatile uint64_t g_161;
    volatile uint64_t * volatile g_160;
    VECTOR(int8_t, 4) g_175;
    VECTOR(int8_t, 16) g_176;
    VECTOR(int8_t, 8) g_177;
    uint32_t g_195;
    VECTOR(int32_t, 2) g_200;
    VECTOR(uint8_t, 2) g_205;
    uint8_t *g_212;
    volatile int32_t g_218;
    volatile int32_t *g_217;
    volatile int32_t ** volatile g_216;
    volatile VECTOR(int32_t, 8) g_226;
    union U0 g_267;
    volatile VECTOR(uint16_t, 4) g_287;
    VECTOR(uint16_t, 16) g_288;
    VECTOR(uint8_t, 4) g_290;
    VECTOR(uint16_t, 16) g_291;
    volatile int32_t ** volatile g_293;
    volatile union U1 *g_358;
    volatile VECTOR(uint64_t, 16) g_368;
    VECTOR(int32_t, 4) g_383;
    int32_t ***g_386;
    int32_t ****g_385;
    union U1 g_395;
    VECTOR(uint8_t, 8) g_400;
    VECTOR(int16_t, 16) g_424;
    uint64_t g_426;
    uint64_t *g_427;
    volatile union U0 g_451;
    uint32_t g_471;
    VECTOR(uint8_t, 2) g_501;
    volatile VECTOR(uint32_t, 2) g_528;
    volatile VECTOR(int16_t, 4) g_557;
    VECTOR(uint8_t, 16) g_625;
    int32_t g_793[6][1][6];
    int32_t * volatile g_807[5];
    int32_t * volatile g_808[6][2][4];
    int32_t * volatile g_809[2];
    int32_t * volatile g_810;
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
int16_t  func_1(struct S3 * p_826);
int32_t  func_2(int8_t * p_3, int32_t  p_4, int8_t * p_5, struct S3 * p_826);
int8_t * func_6(int8_t * p_7, int8_t * p_8, int64_t  p_9, struct S3 * p_826);
uint64_t  func_19(int8_t * p_20, struct S3 * p_826);
int32_t  func_22(uint64_t  p_23, int32_t  p_24, int8_t * p_25, union U1  p_26, int8_t * p_27, struct S3 * p_826);
int16_t  func_31(int16_t * p_32, struct S3 * p_826);
int16_t * func_33(int8_t * p_34, int32_t  p_35, uint32_t  p_36, uint16_t  p_37, struct S3 * p_826);
uint8_t  func_43(int8_t * p_44, uint8_t  p_45, struct S3 * p_826);
int8_t * func_46(int8_t * p_47, union U1  p_48, int16_t * p_49, uint32_t  p_50, uint64_t  p_51, struct S3 * p_826);
int8_t * func_52(union U1  p_53, struct S3 * p_826);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_826->g_10 p_826->g_comm_values p_826->g_38 p_826->g_30 p_826->g_54 p_826->g_54.f0 p_826->l_comm_values p_826->g_61 p_826->g_70 p_826->g_11 p_826->g_110 p_826->g_91 p_826->g_120 p_826->g_147 p_826->g_101 p_826->g_148 p_826->g_151 p_826->g_160 p_826->g_175 p_826->g_176 p_826->g_177 p_826->g_103 p_826->g_141 p_826->g_102 p_826->g_195 p_826->g_200 p_826->g_147.f0 p_826->g_205 p_826->g_152 p_826->g_216 p_826->g_226 p_826->g_161 p_826->g_267 p_826->g_287 p_826->g_288 p_826->g_290 p_826->g_291 p_826->g_217 p_826->g_293 p_826->g_267.f3 p_826->g_368 p_826->g_267.f0 p_826->g_383 p_826->g_385 p_826->g_395 p_826->g_400 p_826->g_147.f1 p_826->g_451 p_826->g_386 p_826->g_471 p_826->g_124 p_826->g_38.f0 p_826->g_625 p_826->g_557 p_826->g_427 p_826->g_793 p_826->g_528
 * writes: p_826->g_30 p_826->g_54.f0 p_826->g_11 p_826->g_61 p_826->g_91 p_826->g_120 p_826->g_141 p_826->g_148 p_826->g_154 p_826->g_152 p_826->g_101 p_826->g_195 p_826->g_212 p_826->g_177 p_826->g_217 p_826->g_267.f3 p_826->g_358 p_826->g_385 p_826->g_218 p_826->g_102 p_826->g_147.f1 p_826->g_426 p_826->g_471 p_826->g_288 p_826->g_395.f1 p_826->g_793 p_826->g_395.f2
 */
int16_t  func_1(struct S3 * p_826)
{ /* block id: 4 */
    int64_t l_18 = 0x00EEC299E885DC1BL;
    int8_t *l_21[3][8] = {{&p_826->g_11,&p_826->g_11,&p_826->g_11,&p_826->g_11,&p_826->g_11,&p_826->g_11,&p_826->g_11,&p_826->g_11},{&p_826->g_11,&p_826->g_11,&p_826->g_11,&p_826->g_11,&p_826->g_11,&p_826->g_11,&p_826->g_11,&p_826->g_11},{&p_826->g_11,&p_826->g_11,&p_826->g_11,&p_826->g_11,&p_826->g_11,&p_826->g_11,&p_826->g_11,&p_826->g_11}};
    union U1 l_794 = {0x69763054L};
    int8_t l_801 = (-1L);
    int64_t l_802 = 1L;
    uint64_t *l_803 = &p_826->g_395.f2;
    union U0 *l_811 = &p_826->g_147;
    union U0 **l_812 = &l_811;
    uint32_t *l_814 = &p_826->g_148;
    uint32_t **l_813 = &l_814;
    uint32_t ***l_815 = &l_813;
    int32_t *l_816 = &l_794.f0;
    int32_t *l_817 = &p_826->g_267.f2;
    int32_t *l_818 = &p_826->g_395.f0;
    int32_t *l_819[5];
    int32_t l_820 = 0x09D7DD55L;
    int32_t l_821 = 2L;
    int64_t l_822 = 0x380159EEF31D22E0L;
    uint8_t l_823 = 0x8BL;
    int i, j;
    for (i = 0; i < 5; i++)
        l_819[i] = &p_826->g_91;
    l_794.f0 = func_2(func_6(p_826->g_10, &p_826->g_11, (((*l_803) = (((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((7L <= (((safe_lshift_func_int8_t_s_u(l_18, ((func_19(l_21[2][4], p_826) ^ (l_794 , p_826->g_176.s9)) , (safe_mul_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((+((safe_add_func_int64_t_s_s(p_826->g_177.s3, (*p_826->g_160))) != l_801)) < p_826->g_288.s4), (-1L))) == l_794.f0), GROUP_DIVERGE(1, 1)))))) , l_18) ^ p_826->g_176.sf)), 0x66A7L)), l_794.f0)) && l_802) , 18446744073709551611UL)) , p_826->g_368.sb), p_826), p_826->g_200.y, p_826->g_70, p_826);
    (*l_812) = l_811;
    (*l_815) = l_813;
    l_823--;
    return p_826->g_528.x;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_2(int8_t * p_3, int32_t  p_4, int8_t * p_5, struct S3 * p_826)
{ /* block id: 333 */
    uint32_t l_806[2][10] = {{0x033A1D00L,9UL,0x033A1D00L,0x033A1D00L,9UL,0x033A1D00L,0x033A1D00L,9UL,0x033A1D00L,0x033A1D00L},{0x033A1D00L,9UL,0x033A1D00L,0x033A1D00L,9UL,0x033A1D00L,0x033A1D00L,9UL,0x033A1D00L,0x033A1D00L}};
    int i, j;
    return l_806[0][6];
}


/* ------------------------------------------ */
/* 
 * reads : p_826->g_216 p_826->g_217
 * writes: p_826->g_217
 */
int8_t * func_6(int8_t * p_7, int8_t * p_8, int64_t  p_9, struct S3 * p_826)
{ /* block id: 330 */
    volatile int32_t **l_804 = &p_826->g_217;
    int8_t *l_805 = (void*)0;
    (*l_804) = (*p_826->g_216);
    return l_805;
}


/* ------------------------------------------ */
/* 
 * reads : p_826->g_comm_values p_826->g_38 p_826->g_30 p_826->g_54 p_826->g_54.f0 p_826->g_10 p_826->l_comm_values p_826->g_61 p_826->g_70 p_826->g_11 p_826->g_110 p_826->g_91 p_826->g_120 p_826->g_147 p_826->g_101 p_826->g_148 p_826->g_151 p_826->g_160 p_826->g_175 p_826->g_176 p_826->g_177 p_826->g_103 p_826->g_141 p_826->g_102 p_826->g_195 p_826->g_200 p_826->g_147.f0 p_826->g_205 p_826->g_152 p_826->g_216 p_826->g_226 p_826->g_161 p_826->g_267 p_826->g_287 p_826->g_288 p_826->g_290 p_826->g_291 p_826->g_217 p_826->g_293 p_826->g_267.f3 p_826->g_368 p_826->g_267.f0 p_826->g_383 p_826->g_385 p_826->g_395 p_826->g_400 p_826->g_147.f1 p_826->g_451 p_826->g_386 p_826->g_471 p_826->g_124 p_826->g_38.f0 p_826->g_625 p_826->g_557 p_826->g_427 p_826->g_793
 * writes: p_826->g_30 p_826->g_54.f0 p_826->g_11 p_826->g_61 p_826->g_91 p_826->g_120 p_826->g_141 p_826->g_148 p_826->g_154 p_826->g_152 p_826->g_101 p_826->g_195 p_826->g_212 p_826->g_177 p_826->g_217 p_826->g_267.f3 p_826->g_358 p_826->g_385 p_826->g_218 p_826->g_102 p_826->g_147.f1 p_826->g_426 p_826->g_471 p_826->g_288 p_826->g_395.f1 p_826->g_793
 */
uint64_t  func_19(int8_t * p_20, struct S3 * p_826)
{ /* block id: 5 */
    uint32_t l_28 = 0x3E5EC352L;
    int16_t *l_29 = &p_826->g_30[0];
    union U1 l_71 = {0L};
    int16_t l_72[1][4][7] = {{{1L,(-1L),(-1L),0x2996L,(-1L),0x2996L,(-1L)},{1L,(-1L),(-1L),0x2996L,(-1L),0x2996L,(-1L)},{1L,(-1L),(-1L),0x2996L,(-1L),0x2996L,(-1L)},{1L,(-1L),(-1L),0x2996L,(-1L),0x2996L,(-1L)}}};
    int8_t *l_394 = (void*)0;
    int32_t *l_792 = &p_826->g_793[3][0][2];
    int i, j, k;
    (*l_792) |= func_22(l_28, ((((VECTOR(uint32_t, 16))(0xC698DC50L, (((*l_29) = p_826->g_comm_values[p_826->tid]) , ((0xE289L | func_31(func_33((p_20 = (p_826->g_38 , &p_826->g_11)), p_826->g_30[0], l_28, (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(func_43(func_46(func_52((l_28 , p_826->g_54[7]), p_826), l_71, &p_826->g_30[0], l_72[0][2][0], l_71.f0, p_826), l_72[0][2][2], p_826), 2)), l_72[0][2][0])), p_826), p_826)) != l_72[0][1][1])), ((VECTOR(uint32_t, 2))(4294967293UL)), 0UL, GROUP_DIVERGE(0, 1), 0x1FDAA674L, l_72[0][1][1], ((VECTOR(uint32_t, 4))(0xABB76ADBL)), 0x012F82A0L, ((VECTOR(uint32_t, 2))(4294967286UL)), 0UL)).s9 , l_28) && 5UL), l_394, p_826->g_395, p_826->g_70, p_826);
    return (*l_792);
}


/* ------------------------------------------ */
/* 
 * reads : p_826->g_160 p_826->g_161 p_826->g_200 p_826->g_400 p_826->g_101 p_826->g_10 p_826->g_11 p_826->g_147.f1 p_826->g_151 p_826->g_205 p_826->g_120 p_826->g_451 p_826->g_152 p_826->g_288 p_826->g_147.f0 p_826->g_385 p_826->g_386 p_826->g_471 p_826->g_102 p_826->g_124 p_826->g_30 p_826->g_comm_values p_826->g_38.f0 p_826->g_70 p_826->g_177 p_826->g_625 p_826->g_176 p_826->g_557 p_826->g_148 p_826->g_427
 * writes: p_826->g_147.f1 p_826->g_152 p_826->g_426 p_826->g_212 p_826->g_471 p_826->g_11 p_826->g_102 p_826->g_288 p_826->g_395.f1 p_826->g_30
 */
int32_t  func_22(uint64_t  p_23, int32_t  p_24, int8_t * p_25, union U1  p_26, int8_t * p_27, struct S3 * p_826)
{ /* block id: 142 */
    int64_t l_398 = 9L;
    VECTOR(uint8_t, 16) l_399 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL, (VECTOR(uint8_t, 2))(255UL, 1UL), (VECTOR(uint8_t, 2))(255UL, 1UL), 255UL, 1UL, 255UL, 1UL);
    VECTOR(uint8_t, 4) l_401 = (VECTOR(uint8_t, 4))(0xB3L, (VECTOR(uint8_t, 2))(0xB3L, 0UL), 0UL);
    VECTOR(uint8_t, 4) l_402 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL);
    VECTOR(uint8_t, 4) l_403 = (VECTOR(uint8_t, 4))(0x66L, (VECTOR(uint8_t, 2))(0x66L, 0x74L), 0x74L);
    int32_t l_412 = 1L;
    VECTOR(int32_t, 16) l_419 = (VECTOR(int32_t, 16))(0x09ED5514L, (VECTOR(int32_t, 4))(0x09ED5514L, (VECTOR(int32_t, 2))(0x09ED5514L, 0x3A77E884L), 0x3A77E884L), 0x3A77E884L, 0x09ED5514L, 0x3A77E884L, (VECTOR(int32_t, 2))(0x09ED5514L, 0x3A77E884L), (VECTOR(int32_t, 2))(0x09ED5514L, 0x3A77E884L), 0x09ED5514L, 0x3A77E884L, 0x09ED5514L, 0x3A77E884L);
    uint64_t *l_425 = &p_826->g_426;
    int32_t l_433 = (-4L);
    int32_t ****l_489 = &p_826->g_386;
    uint32_t *l_502[7] = {&p_826->g_141,&p_826->g_141,&p_826->g_141,&p_826->g_141,&p_826->g_141,&p_826->g_141,&p_826->g_141};
    VECTOR(int16_t, 8) l_533 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x644DL), 0x644DL), 0x644DL, (-1L), 0x644DL);
    int64_t l_537 = (-10L);
    union U1 *l_626 = (void*)0;
    int16_t l_645[8][10][3] = {{{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L}},{{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L}},{{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L}},{{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L}},{{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L}},{{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L}},{{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L}},{{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L},{0x515EL,0x6862L,7L}}};
    int32_t l_676 = (-1L);
    uint64_t l_678[3];
    VECTOR(int32_t, 8) l_681 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_678[i] = 0x639C57F2F451F0F8L;
    l_412 = ((*p_826->g_160) > (safe_mul_func_uint8_t_u_u(0x36L, ((l_398 , (p_826->g_200.x == (~((VECTOR(int32_t, 4))(0x56CEDE78L, 0x3B56E912L, (-5L), 0x7A2947E6L)).x))) ^ ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(p_23, ((VECTOR(uint8_t, 2))(l_399.s4c)), 1UL, 0x53L, ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 4))(p_826->g_400.s2140)).hi, ((VECTOR(uint8_t, 8))(l_401.wzzxzyzw)).s47))), 0x2CL))))).s76))), 1UL, 1UL)).zwxyxxyy)))).s0150156276004725)).even, ((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 2))(0xAAL, 1UL)).xyxyyyxy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_402.zyyyxxxw)).s2647705274766375)).odd))).odd, ((VECTOR(uint8_t, 2))(l_403.yw)).yyyy))), (safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(p_826->g_101, 1)) , (safe_sub_func_uint32_t_u_u(0xC0C030AAL, (safe_add_func_uint16_t_u_u((0x7A48L != p_24), p_26.f0))))) , p_23), (*p_826->g_10))), 0x68L, 0UL, 0xB3L)))).s02)).yxyx)).xwxzyxxzxwwwyzwy)).sf4)).yyxxxyyy)), ((VECTOR(uint8_t, 8))(2UL)))))))).s44)).hi))));
    for (p_826->g_147.f1 = 28; (p_826->g_147.f1 > 20); p_826->g_147.f1--)
    { /* block id: 146 */
        uint32_t l_428 = 0UL;
        uint64_t *l_429 = &p_826->g_426;
        VECTOR(uint8_t, 4) l_432 = (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 8UL), 8UL);
        int32_t l_440 = 0x11F4FE87L;
        int32_t l_441 = (-1L);
        int32_t l_442 = 0x047D8290L;
        int32_t l_443[3];
        uint32_t l_444 = 0xDCB58574L;
        VECTOR(int16_t, 4) l_534 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x60C6L), 0x60C6L);
        int32_t **l_536 = &p_826->g_152;
        uint16_t l_568 = 0x7037L;
        VECTOR(int32_t, 8) l_682 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x4026C756L), 0x4026C756L), 0x4026C756L, (-7L), 0x4026C756L);
        int i;
        for (i = 0; i < 3; i++)
            l_443[i] = 0x3FC340FFL;
        (*p_826->g_151) = &l_412;
        if ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(l_419.s13f853fab2241297)), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(4L, (safe_lshift_func_int8_t_s_u(l_401.z, 2)), 0x65E1A3B4L, 0x7FD0442BL, (safe_div_func_int16_t_s_s((p_826->g_175.x ^ (((l_433 |= ((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_826->g_424.s5a)).yxxx)).even)).even || ((((*l_429) = (((*p_826->g_70) ^= ((p_826->g_427 = l_425) != (l_428 , l_429))) < p_26.f0)) == (safe_lshift_func_int8_t_s_u(((((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_432.yx)).yyyyyxyyxyxxxyxy)).s7837, ((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 8))(0x09L, (GROUP_DIVERGE(0, 1) && ((void*)0 == &p_826->g_212)), 1UL, 0x8CL, (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))((((((l_428 , l_401.z) , (void*)0) == p_27) , (**p_826->g_151)) != l_419.s9), 253UL, ((VECTOR(uint8_t, 8))(0xA5L)), ((VECTOR(uint8_t, 4))(7UL)), 1UL, 0UL)), ((VECTOR(uint8_t, 16))(1UL)), ((VECTOR(uint8_t, 16))(0x66L))))).sd58f)).wwwwwxwx, ((VECTOR(uint8_t, 8))(0xEBL)), ((VECTOR(uint8_t, 8))(1UL))))).lo)).z >= p_826->g_424.s9), 254UL, 1UL, 6UL)).s1427527321065135, ((VECTOR(uint8_t, 16))(0x73L)), ((VECTOR(uint8_t, 16))(0xE9L))))).s603c))).y | p_826->g_124.s5) > p_23), 5))) > 0L)) > p_826->g_288.se)) ^ 0xA795L) < l_398)), p_24)), 0x57F697B7L, 0x429729D5L, 0x1475833DL, 0x38EB4A75L, ((VECTOR(int32_t, 2))(0x17A231E7L)), l_403.z, 0x4434F8EBL, 1L, 0x44478B5DL, 0x338EAC8AL)).sa8, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x516B679FL))))).xxxxyyyyxyyyyxyy))).s1d93, ((VECTOR(int32_t, 4))(0x15681E31L))))).x < p_826->g_205.y), 10)), p_26.f0)))
        { /* block id: 152 */
            int32_t *l_434 = &p_826->g_54[7].f0;
            int32_t *l_435 = &p_826->g_395.f0;
            int32_t *l_436 = &p_826->g_91;
            int32_t *l_437 = (void*)0;
            int32_t *l_438 = (void*)0;
            int32_t *l_439[10][6][4] = {{{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412}},{{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412}},{{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412}},{{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412}},{{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412}},{{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412}},{{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412}},{{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412}},{{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412}},{{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412},{&l_412,&l_412,&l_433,&l_412}}};
            int i, j, k;
            l_444++;
            (*p_826->g_151) = &l_433;
            p_26.f0 |= (8L & p_826->g_120);
        }
        else
        { /* block id: 156 */
            int32_t l_452 = 0L;
            uint8_t *l_453 = (void*)0;
            int32_t l_461 = 0L;
            VECTOR(uint16_t, 8) l_469 = (VECTOR(uint16_t, 8))(0x5933L, (VECTOR(uint16_t, 4))(0x5933L, (VECTOR(uint16_t, 2))(0x5933L, 0xEF65L), 0xEF65L), 0xEF65L, 0x5933L, 0xEF65L);
            VECTOR(uint64_t, 8) l_486 = (VECTOR(uint64_t, 8))(8UL, (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 1UL), 1UL), 1UL, 8UL, 1UL);
            uint32_t l_509 = 1UL;
            int32_t *l_514 = &l_440;
            VECTOR(int16_t, 2) l_532 = (VECTOR(int16_t, 2))(4L, 0x5920L);
            int32_t ****l_538 = &p_826->g_386;
            VECTOR(uint8_t, 4) l_547 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL);
            int32_t l_563 = (-9L);
            int32_t l_564 = 1L;
            uint32_t l_565 = 0x3AC5A514L;
            int64_t l_628 = (-1L);
            uint64_t *l_641 = &p_826->g_426;
            int32_t l_675[6];
            int i;
            for (i = 0; i < 6; i++)
                l_675[i] = 0x6DC1B6C4L;
            for (p_826->g_426 = (-29); (p_826->g_426 >= 9); p_826->g_426 = safe_add_func_int8_t_s_s(p_826->g_426, 5))
            { /* block id: 159 */
                uint8_t **l_454 = &p_826->g_212;
                int64_t *l_455 = &l_398;
                int64_t l_460 = 1L;
                int64_t *l_462 = &l_460;
                int32_t l_463[6][8][3] = {{{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L}},{{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L}},{{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L}},{{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L}},{{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L}},{{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L},{(-4L),0x3E661460L,1L}}};
                int8_t l_464 = 0x14L;
                int32_t ****l_490 = &p_826->g_386;
                uint32_t **l_531 = &l_502[2];
                VECTOR(int16_t, 16) l_535 = (VECTOR(int16_t, 16))(0x6F42L, (VECTOR(int16_t, 4))(0x6F42L, (VECTOR(int16_t, 2))(0x6F42L, 0x689EL), 0x689EL), 0x689EL, 0x6F42L, 0x689EL, (VECTOR(int16_t, 2))(0x6F42L, 0x689EL), (VECTOR(int16_t, 2))(0x6F42L, 0x689EL), 0x6F42L, 0x689EL, 0x6F42L, 0x689EL);
                int32_t **l_596 = &l_514;
                int32_t **l_597 = (void*)0;
                VECTOR(int16_t, 2) l_619 = (VECTOR(int16_t, 2))(0x1381L, 0x77B3L);
                int32_t *l_658 = &l_463[3][2][0];
                int32_t *l_659 = (void*)0;
                int32_t *l_660 = &l_442;
                int32_t *l_661 = &p_826->g_395.f0;
                int32_t *l_662 = &l_563;
                int32_t *l_663 = &l_440;
                int32_t *l_664 = &l_441;
                int32_t *l_665 = (void*)0;
                int32_t *l_666 = (void*)0;
                int32_t *l_667 = (void*)0;
                int32_t *l_668 = &p_826->g_395.f0;
                int32_t *l_669 = &p_826->g_54[7].f0;
                int32_t *l_670 = (void*)0;
                int32_t *l_671 = &l_463[5][3][2];
                int32_t *l_672 = &l_441;
                int32_t *l_673 = &l_442;
                int32_t *l_674[6][10] = {{(void*)0,&l_564,&l_564,(void*)0,(void*)0,&l_564,&l_564,(void*)0,(void*)0,&l_564},{(void*)0,&l_564,&l_564,(void*)0,(void*)0,&l_564,&l_564,(void*)0,(void*)0,&l_564},{(void*)0,&l_564,&l_564,(void*)0,(void*)0,&l_564,&l_564,(void*)0,(void*)0,&l_564},{(void*)0,&l_564,&l_564,(void*)0,(void*)0,&l_564,&l_564,(void*)0,(void*)0,&l_564},{(void*)0,&l_564,&l_564,(void*)0,(void*)0,&l_564,&l_564,(void*)0,(void*)0,&l_564},{(void*)0,&l_564,&l_564,(void*)0,(void*)0,&l_564,&l_564,(void*)0,(void*)0,&l_564}};
                int16_t l_677 = 1L;
                int i, j, k;
                (**p_826->g_151) = (safe_lshift_func_uint8_t_u_u((1L == ((((~((((p_826->g_451 , (void*)0) == &p_26) >= (p_23 , (l_452 != ((*l_455) ^= (((*l_454) = (l_453 = (void*)0)) != (void*)0))))) == (safe_rshift_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u((((*l_462) = (l_461 |= ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(0L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(1L, 0L)), 1L, 0x760F49AA7848E982L)), 0x15DD652B47B027DCL, ((VECTOR(int64_t, 4))(0x2840EFFD0A315EDFL)), 0x21356F67057A4D67L, (-5L), l_460, 0x130223DF25CE08F9L, 1L, 0x27AD74E89623E7BDL)))).s9bdb)).w)) , GROUP_DIVERGE(0, 1)), l_463[5][3][2])) ^ (**p_826->g_151)) | 0x58E5L), l_432.z)))) == l_463[5][3][2]) < FAKE_DIVERGE(p_826->local_2_offset, get_local_id(2), 10)) <= l_464)), p_826->g_288.s3));
                if (l_419.s2)
                { /* block id: 166 */
                    uint8_t l_495 = 0UL;
                    int8_t *l_496 = (void*)0;
                    int8_t *l_497 = (void*)0;
                    int8_t *l_498[4][6][5] = {{{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464}},{{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464}},{{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464}},{{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464},{&p_826->g_102,&l_464,&l_464,&l_464,&l_464}}};
                    uint32_t *l_504 = (void*)0;
                    uint32_t **l_503 = &l_504;
                    int32_t l_508 = (-9L);
                    int i, j, k;
                    for (l_412 = 11; (l_412 == 24); l_412 = safe_add_func_uint64_t_u_u(l_412, 2))
                    { /* block id: 169 */
                        return p_23;
                    }
                    if (p_26.f0)
                    { /* block id: 172 */
                        uint32_t *l_470 = &p_826->g_471;
                        uint32_t *l_472 = (void*)0;
                        uint32_t *l_473 = (void*)0;
                        int32_t l_474 = 1L;
                        int32_t l_475 = 1L;
                        int8_t *l_484 = (void*)0;
                        int8_t *l_485 = &p_826->g_102;
                        uint16_t *l_491 = (void*)0;
                        uint16_t *l_492 = (void*)0;
                        uint16_t *l_493 = (void*)0;
                        uint16_t *l_494[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_494[i] = (void*)0;
                        (*p_826->g_152) = (((((void*)0 != p_25) != (p_826->g_147.f0 >= p_826->g_11)) <= ((((0x20L | ((((VECTOR(uint64_t, 2))(18446744073709551615UL, 0x19F8074F60302927L)).lo < ((l_474 = ((*l_470) |= ((safe_div_func_int16_t_s_s(p_26.f0, ((VECTOR(uint16_t, 16))(l_469.s2434547337001577)).s5)) > ((void*)0 == (*p_826->g_385))))) , ((p_24 , (void*)0) != (void*)0))) >= l_475)) || 0x8F35L) < (*p_27)) >= p_23)) & (*p_826->g_10));
                        atomic_max(&p_826->g_atomic_reduction[get_linear_group_id()], (safe_mul_func_int8_t_s_s(((GROUP_DIVERGE(0, 1) , (7L > (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_444, l_460)), (((*l_485) &= ((l_419.s6 ^= (((*p_27) &= l_452) | 0UL)) , (*p_27))) < (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_486.s52)))).hi , ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(p_23, ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 16))(((((*l_455) = (((safe_div_func_int64_t_s_s(((p_826->g_288.sb = ((l_490 = l_489) != (void*)0)) != p_826->g_124.s4), p_26.f0)) >= p_26.f0) , p_26.f0)) || 5UL) ^ l_486.s1), ((VECTOR(uint8_t, 2))(255UL)), 0x46L, l_486.s5, 0x80L, GROUP_DIVERGE(1, 1), p_26.f0, 248UL, 0xF4L, ((VECTOR(uint8_t, 2))(1UL)), 4UL, ((VECTOR(uint8_t, 2))(8UL)), 4UL)).s6905, ((VECTOR(uint8_t, 4))(0xDCL))))), ((VECTOR(uint8_t, 4))(247UL))))).hi, ((VECTOR(uint8_t, 2))(252UL))))), 0x06L, 0x8EL, ((VECTOR(uint8_t, 4))(0x9CL)), ((VECTOR(uint8_t, 2))(0x28L)), ((VECTOR(uint8_t, 4))(255UL)), 0UL)).s98))).even)))), l_469.s2)))) , (-5L)), GROUP_DIVERGE(0, 1))));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_826->v_collective += p_826->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                    else
                    { /* block id: 183 */
                        (*p_826->g_151) = (*p_826->g_151);
                    }
                    (**p_826->g_151) |= ((l_461 = ((*p_826->g_10) &= (l_495 != p_26.f0))) <= ((p_26.f0 >= ((p_26.f0 > ((safe_sub_func_int64_t_s_s((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_826->g_501.yy)).xxyy)), ((VECTOR(uint8_t, 2))(0x18L, 0x92L)).yyxx))))).zxyxzyzw)).s0 >= (l_502[5] != ((*l_503) = &p_826->g_141))), p_826->g_30[0])) ^ 9UL)) , p_23)) | l_495));
                    for (l_444 = 0; (l_444 != 28); l_444++)
                    { /* block id: 192 */
                        int32_t *l_507[8] = {&l_443[2],&l_443[2],&l_443[2],&l_443[2],&l_443[2],&l_443[2],&l_443[2],&l_443[2]};
                        int i;
                        --l_509;
                    }
                }
                else
                { /* block id: 195 */
                    for (p_826->g_395.f1 = 0; (p_826->g_395.f1 <= 28); ++p_826->g_395.f1)
                    { /* block id: 198 */
                        l_514 = &l_461;
                    }
                    if ((atomic_inc(&p_826->g_atomic_input[96 * get_linear_group_id() + 15]) == 3))
                    { /* block id: 202 */
                        VECTOR(uint8_t, 4) l_515 = (VECTOR(uint8_t, 4))(0xCCL, (VECTOR(uint8_t, 2))(0xCCL, 0x4EL), 0x4EL);
                        uint64_t *l_519 = (void*)0;
                        uint64_t **l_518 = &l_519;
                        int32_t l_520 = 0L;
                        int32_t l_521 = (-5L);
                        int i;
                        l_515.w++;
                        l_518 = (void*)0;
                        l_521 = l_520;
                        unsigned int result = 0;
                        result += l_515.w;
                        result += l_515.z;
                        result += l_515.y;
                        result += l_515.x;
                        result += l_520;
                        result += l_521;
                        atomic_add(&p_826->g_special_values[96 * get_linear_group_id() + 15], result);
                    }
                    else
                    { /* block id: 206 */
                        (1 + 1);
                    }
                }
                if (((safe_add_func_int32_t_s_s((p_24 ^ 0xA12111935372708CL), (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((p_23 = ((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(p_826->g_528.yx)))).even && ((safe_sub_func_int16_t_s_s((((*l_531) = &p_826->g_141) != &l_444), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(l_532.xyxxyyyy)).odd, ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0L, 5L)), 6L, ((VECTOR(int16_t, 4))(l_533.s0736)), 0x7A14L)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_534.yz)))).xyyxxxyxyyxxyxyy, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 2))((-1L), 1L)).yxxx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(l_535.s83bed47a)).s57, ((VECTOR(int16_t, 2))(0x4C0CL, 0x5C45L))))).yyxyxyyx)).s56)).yyxx, ((VECTOR(int16_t, 4))(((~(*p_826->g_10)) & (l_536 == (void*)0)), ((VECTOR(int16_t, 2))(0x2776L, 1L)), 1L))))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x11L, 0x27L)))).hi >= (4294967288UL | 1L)) , GROUP_DIVERGE(0, 1)) , p_826->g_177.s1), ((VECTOR(int16_t, 2))(0x680DL)), 5L)), 0x0FCEL, ((VECTOR(int16_t, 2))(0x741FL)), 0x67C6L)).hi))).xwzzyzwwzwyxywww))).even)), ((VECTOR(int16_t, 8))(0x44DCL))))).odd))).wzzwzxyy)).s7)) | 3UL)) , 0x707791824622A7AAL)) > l_537), p_826->g_205.y)), p_826->g_comm_values[p_826->tid])))) , p_26.f0))
                { /* block id: 212 */
                    int16_t l_555 = 0L;
                    int32_t l_556 = 0x416093F9L;
                    int32_t **l_574[9][6][4] = {{{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0}},{{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0}},{{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0}},{{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0}},{{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0}},{{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0}},{{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0}},{{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0}},{{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0},{&p_826->g_152,&l_514,&p_826->g_152,(void*)0}}};
                    uint64_t *l_577 = (void*)0;
                    uint64_t *l_578 = (void*)0;
                    uint64_t *l_579 = (void*)0;
                    uint64_t *l_580 = (void*)0;
                    uint64_t *l_581 = (void*)0;
                    uint64_t *l_582 = (void*)0;
                    uint64_t *l_583 = (void*)0;
                    uint64_t *l_584 = (void*)0;
                    uint64_t *l_585 = (void*)0;
                    uint64_t *l_586 = (void*)0;
                    uint64_t *l_587 = (void*)0;
                    uint64_t *l_588 = (void*)0;
                    uint64_t *l_589 = (void*)0;
                    uint64_t *l_590 = (void*)0;
                    uint64_t *l_591 = (void*)0;
                    uint64_t *l_592 = (void*)0;
                    int16_t l_593 = 1L;
                    int i, j, k;
                    if ((((*p_826->g_152) , (l_490 = l_490)) != l_538))
                    { /* block id: 214 */
                        int32_t l_541 = 0x53824312L;
                        int8_t *l_548 = (void*)0;
                        int8_t *l_549 = (void*)0;
                        int8_t *l_550 = &l_464;
                        int32_t l_558 = 0x73E803AFL;
                        int32_t *l_559 = &l_556;
                        int32_t *l_560 = &l_443[2];
                        int32_t *l_561 = (void*)0;
                        int32_t *l_562[7] = {&l_463[0][3][2],&l_463[0][3][2],&l_463[0][3][2],&l_463[0][3][2],&l_463[0][3][2],&l_463[0][3][2],&l_463[0][3][2]};
                        int i;
                        (**p_826->g_151) |= ((8UL < 0x0C7BL) , (safe_mul_func_uint8_t_u_u(l_541, (l_556 ^= ((safe_unary_minus_func_uint16_t_u(p_826->g_11)) > ((safe_mod_func_int8_t_s_s(0x0AL, (l_555 &= ((p_26.f0 <= (safe_mul_func_uint8_t_u_u(0xA1L, ((*l_514) = ((*l_550) |= (p_826->g_38.f0 ^ ((VECTOR(uint8_t, 4))(l_547.zwyx)).y)))))) , ((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((&p_826->g_141 != l_514), 250UL)), p_26.f0)) >= (*p_826->g_160)))))) == (*p_27)))))));
                        (*l_514) = ((4L && ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_826->g_557.wyyw)).zyzyzyxzwyxyzxzy)).s7ed7)).z) , (**l_536));
                        l_565++;
                        l_568--;
                    }
                    else
                    { /* block id: 223 */
                        uint16_t l_571 = 0UL;
                        l_571++;
                        (**p_826->g_151) |= l_571;
                    }
                    (**l_536) &= (l_536 != l_574[1][0][1]);
                    (*l_514) = (!((**l_536) = (p_26.f0 = (safe_mod_func_uint64_t_u_u((l_593 = (**l_536)), (*p_826->g_160))))));
                }
                else
                { /* block id: 232 */
                    uint32_t l_600 = 9UL;
                    int32_t l_624 = 0x655328DFL;
                    VECTOR(int32_t, 4) l_627 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x55AD442EL), 0x55AD442EL);
                    int i;
                    if (((*p_826->g_70) & ((safe_mod_func_int8_t_s_s(((l_596 != l_597) , ((FAKE_DIVERGE(p_826->group_2_offset, get_group_id(2), 10) <= (safe_lshift_func_uint8_t_u_u(l_600, (l_627.y ^= (safe_div_func_uint16_t_u_u((~((**l_536) = ((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((p_25 == ((safe_mul_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s((-3L), (safe_div_func_uint64_t_u_u(0x6934461CECF6D837L, ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_826->local_2_offset, get_local_id(2), 10), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_619.xx)), ((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(l_624, ((VECTOR(uint8_t, 2))(p_826->g_625.sa1)).even)) != (((l_626 == (void*)0) || (*p_826->g_70)) || (*p_826->g_70))), p_24)) && 9L), 6L, p_23, 0x79A5L, 0x3A6CL, 0x3536L, 0x50FBL, p_23, (-9L), ((VECTOR(int16_t, 4))(0x0CB8L)), 0x4DEBL)).s6)), p_826->g_124.sf)) | (**l_596)))))) <= (-4L)) < (*p_826->g_10)), p_26.f0)) , (void*)0)), (*p_826->g_10))), 0xE30BL)), p_826->g_120)) != p_826->g_177.s4))), p_826->g_625.s1)))))) >= 2UL)), (-6L))) ^ l_624)))
                    { /* block id: 235 */
                        uint16_t *l_642 = &l_568;
                        int32_t l_643 = 0x4013F1F5L;
                        int16_t *l_644 = &p_826->g_30[0];
                        (**l_536) = ((l_628 || (p_826->g_176.s8 != p_826->g_557.y)) & (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(2L, p_826->g_148)), (((*l_644) = ((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((*p_27) ^= (p_26.f0 && (safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((*l_642) &= (&p_826->g_426 != l_641)), p_826->g_288.s6)), 8L)))), l_643)), p_23)) | FAKE_DIVERGE(p_826->global_0_offset, get_global_id(0), 10))) == l_645[0][9][0]))));
                        return p_24;
                    }
                    else
                    { /* block id: 241 */
                        int16_t l_646 = 3L;
                        int32_t l_657[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_657[i] = 0x4180F369L;
                        l_646 |= p_26.f0;
                        l_657[0] = ((**l_536) |= (safe_sub_func_int8_t_s_s(((safe_add_func_int64_t_s_s(p_826->g_625.s8, (safe_mul_func_uint8_t_u_u((l_502[5] == (void*)0), 255UL)))) == (*p_826->g_160)), ((*p_826->g_70) |= ((*l_514) < (safe_mul_func_int8_t_s_s(0x16L, (((safe_div_func_int16_t_s_s(0x4251L, 0x3BAEL)) , p_826->g_427) != (void*)0))))))));
                    }
                }
                --l_678[2];
            }
        }
        (**l_536) = (p_23 , ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(l_681.s2451634571242417)).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_682.s34)), 0x573F1267L, 1L)).xywxyzwx))).s5);
    }
    if ((atomic_inc(&p_826->l_atomic_input[89]) == 4))
    { /* block id: 254 */
        union U1 l_683 = {0x46AC89F2L};
        union U1 l_684 = {0x284F5C77L};
        int8_t l_685 = 0x1DL;
        union U1 l_686 = {-1L};
        uint16_t l_687 = 0x8330L;
        int64_t l_688 = 0x3C88F27A12A257E1L;
        uint8_t l_689 = 0x7EL;
        VECTOR(int32_t, 2) l_785 = (VECTOR(int32_t, 2))(0x1F2AD53DL, 0x2D49C88EL);
        uint8_t l_786 = 0xE3L;
        uint64_t l_787 = 18446744073709551614UL;
        uint32_t l_788 = 0UL;
        int8_t l_789 = 0x3DL;
        uint64_t l_790 = 6UL;
        uint8_t l_791 = 0x6FL;
        int i;
        if ((l_689 = ((l_684 = l_683) , (l_688 = (l_687 = (l_685 , (l_686 , 1L)))))))
        { /* block id: 259 */
            uint8_t l_690[3];
            union U0 l_691 = {0x57A7235D7BF56859L};/* VOLATILE GLOBAL l_691 */
            int8_t l_692[6] = {9L,9L,9L,9L,9L,9L};
            VECTOR(uint8_t, 16) l_693 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL, (VECTOR(uint8_t, 2))(1UL, 255UL), (VECTOR(uint8_t, 2))(1UL, 255UL), 1UL, 255UL, 1UL, 255UL);
            VECTOR(int8_t, 16) l_694 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int8_t, 2))(1L, (-1L)), (VECTOR(int8_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
            VECTOR(int8_t, 2) l_695 = (VECTOR(int8_t, 2))(0x23L, 9L);
            int64_t l_696[3];
            int32_t l_697 = 0x53440E05L;
            int32_t l_698[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            uint16_t l_699 = 65535UL;
            uint8_t l_700[9][1][5] = {{{6UL,253UL,255UL,254UL,255UL}},{{6UL,253UL,255UL,254UL,255UL}},{{6UL,253UL,255UL,254UL,255UL}},{{6UL,253UL,255UL,254UL,255UL}},{{6UL,253UL,255UL,254UL,255UL}},{{6UL,253UL,255UL,254UL,255UL}},{{6UL,253UL,255UL,254UL,255UL}},{{6UL,253UL,255UL,254UL,255UL}},{{6UL,253UL,255UL,254UL,255UL}}};
            VECTOR(uint64_t, 2) l_701 = (VECTOR(uint64_t, 2))(18446744073709551613UL, 18446744073709551608UL);
            int64_t l_702 = 0x28412F8ABD48F361L;
            VECTOR(uint8_t, 8) l_703 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x1BL), 0x1BL), 0x1BL, 255UL, 0x1BL);
            uint8_t l_753 = 0UL;
            int32_t l_754 = 0L;
            uint16_t l_755 = 0xB365L;
            int32_t *l_756 = &l_698[2];
            int32_t *l_757 = &l_691.f2;
            uint8_t l_758 = 250UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_690[i] = 248UL;
            for (i = 0; i < 3; i++)
                l_696[i] = (-6L);
            if ((l_690[1] , (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 8))(251UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))((l_691 , l_692[1]), 0x2AL, (l_689 = 0x80L), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_693.sffa72078)).s04)).even, GROUP_DIVERGE(2, 1), ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_694.sc2)).yxyx)).hi, ((VECTOR(int8_t, 8))(l_695.yyyxyyyy)).s55))), 1UL)).s41)).lo, (l_689 = l_696[2]), ((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(0xA5L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(255UL, 1UL)), (uint8_t)((l_698[2] = l_697) , ((l_700[4][0][1] = l_699) , (l_701.x , (l_702 , 0UL))))))), 0x19L, 0x16L)), ((VECTOR(uint8_t, 4))(1UL)), ((VECTOR(uint8_t, 4))(1UL)), 0x58L, 0UL, 4UL)))).s00b8))), 0xA9L)), ((VECTOR(uint8_t, 8))(0x64L)), ((VECTOR(uint8_t, 8))(0UL))))), ((VECTOR(uint8_t, 8))(0xA3L))))).lo)).x , l_703.s5)))
            { /* block id: 264 */
                VECTOR(int32_t, 4) l_704 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
                VECTOR(int32_t, 16) l_705 = (VECTOR(int32_t, 16))(0x7A7879D6L, (VECTOR(int32_t, 4))(0x7A7879D6L, (VECTOR(int32_t, 2))(0x7A7879D6L, 0x0412B064L), 0x0412B064L), 0x0412B064L, 0x7A7879D6L, 0x0412B064L, (VECTOR(int32_t, 2))(0x7A7879D6L, 0x0412B064L), (VECTOR(int32_t, 2))(0x7A7879D6L, 0x0412B064L), 0x7A7879D6L, 0x0412B064L, 0x7A7879D6L, 0x0412B064L);
                VECTOR(int32_t, 8) l_706 = (VECTOR(int32_t, 8))(0x046471A8L, (VECTOR(int32_t, 4))(0x046471A8L, (VECTOR(int32_t, 2))(0x046471A8L, (-8L)), (-8L)), (-8L), 0x046471A8L, (-8L));
                VECTOR(int32_t, 4) l_707 = (VECTOR(int32_t, 4))(0x0DAD47C1L, (VECTOR(int32_t, 2))(0x0DAD47C1L, (-10L)), (-10L));
                VECTOR(int32_t, 16) l_708 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
                VECTOR(int32_t, 8) l_709 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 6L), 6L), 6L, 1L, 6L);
                VECTOR(int32_t, 16) l_710 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 5L), 5L), 5L, 1L, 5L, (VECTOR(int32_t, 2))(1L, 5L), (VECTOR(int32_t, 2))(1L, 5L), 1L, 5L, 1L, 5L);
                uint32_t l_711[7][4][4] = {{{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL}},{{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL}},{{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL}},{{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL}},{{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL}},{{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL}},{{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL},{0x8243A6ABL,4294967287UL,0x4D780B2CL,4294967295UL}}};
                VECTOR(int32_t, 16) l_712 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
                uint32_t l_713 = 4294967295UL;
                uint64_t l_714[9] = {0xA88227865566C78CL,18446744073709551615UL,0xA88227865566C78CL,0xA88227865566C78CL,18446744073709551615UL,0xA88227865566C78CL,0xA88227865566C78CL,18446744073709551615UL,0xA88227865566C78CL};
                int8_t l_715 = 0x0CL;
                int16_t l_716 = 0x7525L;
                VECTOR(int32_t, 2) l_717 = (VECTOR(int32_t, 2))(0x4FDBF652L, 0x36FA26F6L);
                uint8_t l_718 = 252UL;
                uint64_t l_719 = 18446744073709551615UL;
                VECTOR(uint16_t, 4) l_720 = (VECTOR(uint16_t, 4))(0x97BBL, (VECTOR(uint16_t, 2))(0x97BBL, 0x3674L), 0x3674L);
                int64_t l_745 = 1L;
                VECTOR(int32_t, 4) l_746 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5A20920FL), 0x5A20920FL);
                uint32_t l_747 = 0x68A95AA8L;
                int i, j, k;
                if ((l_684.f0 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(5L, ((VECTOR(int32_t, 2))(0x6786C600L, 0L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0L, 0x0D6BCA8BL)), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_704.xyww)), ((VECTOR(int32_t, 2))(l_705.s6b)).xxyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_706.s25016314)).s50, ((VECTOR(int32_t, 2))(0x5372B091L, 0x539888A4L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_707.zzwwxwzyyywzzxww)).s1143)).lo))).yyyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_708.s022f)).ywzyyzwx)).lo)))))))), (-1L), 6L, 0x26E7A123L, 0x4391DDADL, (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(l_709.s6456574134664364)), ((VECTOR(int32_t, 2))(0x39E57F45L, (-7L))).xyxxyyyyyyxxxxyx))).sfbeb)), 0x6FD2E2C8L)).s42)).lo, (-1L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(l_710.s0c2186136d434f7f)).even, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))((-1L), 0x38947B91L)).yxxy, ((VECTOR(int32_t, 8))(0x7B418FB2L, l_711[3][2][3], ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x097A37A9L, 1L)), 0x4714FEEEL, (-1L))), 0x62D1EB9CL, (-10L))).even))), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 0x31F87989L)), 0L, (-8L))).hi, ((VECTOR(int32_t, 2))(1L, 0x1C52BCE5L))))).xyxx))))).zxxxyxyz, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_712.sc1)).yyxyyyxxxxxxyyxy)).even, (int32_t)l_713))))))))).s2231200014332331)).sca)).xxyxxxxx)), 0x21421379L, 0L, 0x7614E6E0L)).s6, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 2))(0x05C81683L, (-4L))).xxxyxxyxxxxyyxxx, (int32_t)l_714[7], (int32_t)((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(((l_715 , 0L) , l_716), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))((-1L), (-1L))).xyyxxxyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(l_717.xy)).xxyxyyyx, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(1L, 2L, 1L, 0x5709L, 0x5B56L, ((VECTOR(int16_t, 8))(0x1D81L, 0x167EL, l_718, 0x2E83L, ((VECTOR(int16_t, 2))(0x3010L)), (-3L), 0x1349L)), (-1L), (-1L), 0x67E9L)), ((VECTOR(uint16_t, 16))(65535UL))))).hi))).s0653277774624024)).even, ((VECTOR(int32_t, 8))(0x3048D25AL))))).s27)), 0x3785A579L, 1L)), l_719, l_720.z, ((VECTOR(int32_t, 8))((-4L))), 6L)).sae, ((VECTOR(int32_t, 2))(1L))))).xyxx)).wxxwzywwwzwwywyy)))).sb381))).z))).hi, ((VECTOR(int32_t, 8))((-1L)))))).s24, (int32_t)(-8L)))), 0x47ABE7B7L)).yyxzwyzy)).s5))
                { /* block id: 266 */
                    uint32_t l_721 = 0xDE259813L;
                    l_709.s6 = (FAKE_DIVERGE(p_826->local_0_offset, get_local_id(0), 10) , l_721);
                    for (l_721 = 0; (l_721 > 18); l_721 = safe_add_func_int64_t_s_s(l_721, 4))
                    { /* block id: 270 */
                        uint8_t l_724[1];
                        uint16_t l_725 = 0x37E3L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_724[i] = 0xF4L;
                        l_683.f0 = (l_725 = l_724[0]);
                    }
                }
                else
                { /* block id: 274 */
                    int32_t l_726 = 0x3A5894ECL;
                    union U1 l_742 = {-1L};
                    union U1 *l_741 = &l_742;
                    union U1 *l_743 = &l_742;
                    int64_t l_744 = 2L;
                    for (l_726 = 0; (l_726 != 6); l_726 = safe_add_func_uint8_t_u_u(l_726, 6))
                    { /* block id: 277 */
                        VECTOR(int32_t, 16) l_729 = (VECTOR(int32_t, 16))(0x6035AED7L, (VECTOR(int32_t, 4))(0x6035AED7L, (VECTOR(int32_t, 2))(0x6035AED7L, 0L), 0L), 0L, 0x6035AED7L, 0L, (VECTOR(int32_t, 2))(0x6035AED7L, 0L), (VECTOR(int32_t, 2))(0x6035AED7L, 0L), 0x6035AED7L, 0L, 0x6035AED7L, 0L);
                        VECTOR(int32_t, 8) l_730 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-9L)), (-9L)), (-9L), 1L, (-9L));
                        VECTOR(int32_t, 16) l_731 = (VECTOR(int32_t, 16))(0x4FD3DAD1L, (VECTOR(int32_t, 4))(0x4FD3DAD1L, (VECTOR(int32_t, 2))(0x4FD3DAD1L, 0x7903D74BL), 0x7903D74BL), 0x7903D74BL, 0x4FD3DAD1L, 0x7903D74BL, (VECTOR(int32_t, 2))(0x4FD3DAD1L, 0x7903D74BL), (VECTOR(int32_t, 2))(0x4FD3DAD1L, 0x7903D74BL), 0x4FD3DAD1L, 0x7903D74BL, 0x4FD3DAD1L, 0x7903D74BL);
                        VECTOR(int32_t, 4) l_732 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 4L), 4L);
                        VECTOR(int32_t, 16) l_733 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 4L), 4L), 4L, 0L, 4L, (VECTOR(int32_t, 2))(0L, 4L), (VECTOR(int32_t, 2))(0L, 4L), 0L, 4L, 0L, 4L);
                        uint16_t l_736[4][6][2] = {{{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL}},{{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL}},{{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL}},{{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL},{0x0FBEL,0xE31DL}}};
                        uint32_t l_737 = 0x8944D337L;
                        VECTOR(int32_t, 16) l_738 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0L), 0L), 0L, 4L, 0L, (VECTOR(int32_t, 2))(4L, 0L), (VECTOR(int32_t, 2))(4L, 0L), 4L, 0L, 4L, 0L);
                        uint64_t l_739 = 0xD965F67F62E50462L;
                        int16_t l_740[9][8] = {{0x73F6L,0x0350L,0x7B62L,0x33C6L,0x5A32L,0x5E7AL,0x4286L,0x6055L},{0x73F6L,0x0350L,0x7B62L,0x33C6L,0x5A32L,0x5E7AL,0x4286L,0x6055L},{0x73F6L,0x0350L,0x7B62L,0x33C6L,0x5A32L,0x5E7AL,0x4286L,0x6055L},{0x73F6L,0x0350L,0x7B62L,0x33C6L,0x5A32L,0x5E7AL,0x4286L,0x6055L},{0x73F6L,0x0350L,0x7B62L,0x33C6L,0x5A32L,0x5E7AL,0x4286L,0x6055L},{0x73F6L,0x0350L,0x7B62L,0x33C6L,0x5A32L,0x5E7AL,0x4286L,0x6055L},{0x73F6L,0x0350L,0x7B62L,0x33C6L,0x5A32L,0x5E7AL,0x4286L,0x6055L},{0x73F6L,0x0350L,0x7B62L,0x33C6L,0x5A32L,0x5E7AL,0x4286L,0x6055L},{0x73F6L,0x0350L,0x7B62L,0x33C6L,0x5A32L,0x5E7AL,0x4286L,0x6055L}};
                        int i, j, k;
                        l_739 &= ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(l_729.sc6)), 0x76C87171L)), ((VECTOR(int32_t, 16))(0x13A533B5L, 3L, ((VECTOR(int32_t, 2))(l_730.s33)), 1L, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(l_731.sd8df6612)), ((VECTOR(int32_t, 2))(l_732.yz)).xyxxxxyy))).odd)).hi, ((VECTOR(int32_t, 4))((l_707.y = ((VECTOR(int32_t, 2))(0x5166048EL, 1L)).lo), 0x03B6FD6AL, 0x6B13CAB7L, 0x63CD7545L)).lo, ((VECTOR(int32_t, 2))(l_733.s91))))), 0x4066B5FAL, 0L, (l_705.s1 = (l_683.f0 = ((l_700[7][0][3]++) , l_736[2][3][1]))), ((VECTOR(int32_t, 2))(0x2F3FA2BDL, 0x0A93EE1FL)), l_737, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(l_738.sb115fd5d)).s33, (int32_t)(FAKE_DIVERGE(p_826->group_2_offset, get_group_id(2), 10) , 0x274C42FDL)))), 0x605449CEL)).s58b0))).z;
                        l_717.x = 0x278801E4L;
                        l_698[1] = l_740[5][5];
                    }
                    l_743 = l_741;
                    l_683.f0 ^= l_744;
                }
                l_683.f0 ^= (l_686.f0 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_745, 1L, (-9L), 0x54B6BC8EL)).zxwwxwxy)))).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_746.xw)).xxyxxyyx)).hi))), 0x458F3429L, (l_717.y |= l_747), 1L, 0x6BA288FEL)).lo)).z);
            }
            else
            { /* block id: 292 */
                uint64_t l_748 = 0UL;
                int16_t l_749 = 1L;
                uint64_t l_750 = 0x444B5E55901F8C08L;
                l_748 = 1L;
                ++l_750;
            }
            l_756 = (l_757 = ((l_755 = (l_753 , (l_689 ^= l_754))) , l_756));
            l_684.f0 = l_758;
        }
        else
        { /* block id: 301 */
            int32_t l_760 = (-6L);
            int32_t *l_759 = &l_760;
            int32_t *l_761 = &l_760;
            int64_t l_762 = (-1L);
            VECTOR(int32_t, 4) l_763 = (VECTOR(int32_t, 4))(0x14E9440FL, (VECTOR(int32_t, 2))(0x14E9440FL, 0x507A1893L), 0x507A1893L);
            VECTOR(int32_t, 4) l_764 = (VECTOR(int32_t, 4))(0x6600585FL, (VECTOR(int32_t, 2))(0x6600585FL, 1L), 1L);
            int32_t l_765[8][9][3] = {{{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L}},{{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L}},{{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L}},{{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L}},{{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L}},{{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L}},{{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L}},{{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L},{0x26EC4AC1L,(-1L),0L}}};
            int32_t l_766 = 0L;
            int32_t l_767 = 0x109776EFL;
            int32_t l_768 = 0x5A25B700L;
            int64_t l_769 = (-5L);
            int32_t l_770 = (-7L);
            int64_t l_771 = 7L;
            VECTOR(int32_t, 4) l_772 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x74FB6AB7L), 0x74FB6AB7L);
            VECTOR(int32_t, 2) l_773 = (VECTOR(int32_t, 2))((-1L), (-1L));
            union U0 l_774 = {0x55FC6FAE6BB389D1L};/* VOLATILE GLOBAL l_774 */
            uint32_t l_775 = 4294967293UL;
            int64_t l_776 = (-1L);
            int32_t l_777 = 0L;
            int i, j, k;
            l_684.f0 = 0x59CD9E56L;
            l_761 = (l_759 = (void*)0);
            l_683.f0 ^= (l_762 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(l_763.xz)), (int32_t)(((VECTOR(int32_t, 8))(l_764.yyxyzwxw)).s2 , (l_686.f0 = (l_684.f0 = ((l_767 = (l_766 = l_765[5][6][0])) , ((l_769 = l_768) , l_770))))), (int32_t)l_771))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(l_772.yy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(l_773.xxxxxyxy)), (int32_t)(l_774 , (l_686.f0 = (l_775 , l_776))), (int32_t)l_777))).s1521505050021514, ((VECTOR(int32_t, 16))((-3L)))))).sb5))))), (-1L), 0x6B619B28L)), 0x6682DCD8L, 2L)).s5);
            for (l_763.w = 4; (l_763.w <= (-20)); --l_763.w)
            { /* block id: 314 */
                int16_t l_780 = 0x7519L;
                VECTOR(int8_t, 8) l_781 = (VECTOR(int8_t, 8))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0L), 0L), 0L, (-6L), 0L);
                uint16_t l_782[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_782[i] = 5UL;
                l_761 = (l_759 = (void*)0);
                l_782[0]--;
            }
        }
        l_683.f0 = (((l_785.y , l_786) , (-10L)) , l_787);
        l_789 = l_788;
        l_791 |= l_790;
        unsigned int result = 0;
        result += l_683.f0;
        result += l_683.f1;
        result += l_683.f2;
        result += l_683.f3;
        result += l_684.f0;
        result += l_684.f1;
        result += l_684.f2;
        result += l_684.f3;
        result += l_685;
        result += l_686.f0;
        result += l_686.f1;
        result += l_686.f2;
        result += l_686.f3;
        result += l_687;
        result += l_688;
        result += l_689;
        result += l_785.y;
        result += l_785.x;
        result += l_786;
        result += l_787;
        result += l_788;
        result += l_789;
        result += l_790;
        result += l_791;
        atomic_add(&p_826->l_special_values[89], result);
    }
    else
    { /* block id: 323 */
        (1 + 1);
    }
    return l_403.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_826->g_91 p_826->g_120 p_826->g_54.f0 p_826->g_147 p_826->g_101 p_826->g_30 p_826->l_comm_values p_826->g_148 p_826->g_151 p_826->g_160 p_826->g_175 p_826->g_176 p_826->g_177 p_826->g_103 p_826->g_141 p_826->g_102 p_826->g_10 p_826->g_11 p_826->g_comm_values p_826->g_195 p_826->g_200 p_826->g_110 p_826->g_147.f0 p_826->g_205 p_826->g_152 p_826->g_70 p_826->g_216 p_826->g_226 p_826->g_61 p_826->g_161 p_826->g_267 p_826->g_287 p_826->g_288 p_826->g_290 p_826->g_291 p_826->g_217 p_826->g_293 p_826->g_267.f3 p_826->g_38 p_826->g_368 p_826->g_267.f0 p_826->g_383 p_826->g_385
 * writes: p_826->g_91 p_826->g_61 p_826->g_120 p_826->g_54.f0 p_826->g_141 p_826->g_148 p_826->g_154 p_826->g_152 p_826->g_101 p_826->g_195 p_826->g_212 p_826->g_177 p_826->g_11 p_826->g_217 p_826->g_267.f3 p_826->g_358 p_826->g_385 p_826->g_218 p_826->g_102
 */
int16_t  func_31(int16_t * p_32, struct S3 * p_826)
{ /* block id: 29 */
    int64_t l_116 = 0x7A7B1138347E9BEEL;
    VECTOR(int8_t, 8) l_125 = (VECTOR(int8_t, 8))(0x72L, (VECTOR(int8_t, 4))(0x72L, (VECTOR(int8_t, 2))(0x72L, 0x44L), 0x44L), 0x44L, 0x72L, 0x44L);
    int32_t l_134 = 0x575B1656L;
    VECTOR(int16_t, 8) l_139 = (VECTOR(int16_t, 8))(0x46A6L, (VECTOR(int16_t, 4))(0x46A6L, (VECTOR(int16_t, 2))(0x46A6L, 1L), 1L), 1L, 0x46A6L, 1L);
    int32_t **l_153[7];
    uint8_t l_155 = 0xA5L;
    uint8_t l_156 = 0x1FL;
    uint64_t *l_162 = (void*)0;
    VECTOR(int64_t, 4) l_180 = (VECTOR(int64_t, 4))(0x2A2B0718E8B4E187L, (VECTOR(int64_t, 2))(0x2A2B0718E8B4E187L, 0L), 0L);
    int32_t **l_215 = &p_826->g_152;
    VECTOR(int8_t, 16) l_219 = (VECTOR(int8_t, 16))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x4CL), 0x4CL), 0x4CL, (-2L), 0x4CL, (VECTOR(int8_t, 2))((-2L), 0x4CL), (VECTOR(int8_t, 2))((-2L), 0x4CL), (-2L), 0x4CL, (-2L), 0x4CL);
    VECTOR(int8_t, 2) l_220 = (VECTOR(int8_t, 2))(1L, (-2L));
    int8_t *l_264 = &p_826->g_11;
    uint8_t **l_277 = &p_826->g_212;
    uint16_t l_300 = 5UL;
    int64_t l_301 = 0x01594FE416522CDCL;
    int32_t ****l_390[8] = {&p_826->g_386,&p_826->g_386,&p_826->g_386,&p_826->g_386,&p_826->g_386,&p_826->g_386,&p_826->g_386,&p_826->g_386};
    int i;
    for (i = 0; i < 7; i++)
        l_153[i] = &p_826->g_152;
    for (p_826->g_91 = 0; (p_826->g_91 != (-13)); p_826->g_91 = safe_sub_func_int16_t_s_s(p_826->g_91, 7))
    { /* block id: 32 */
        uint8_t *l_117 = (void*)0;
        uint8_t *l_118 = &p_826->g_61;
        uint32_t *l_119 = &p_826->g_120;
        int32_t l_123 = 0x451A53AFL;
        int32_t *l_126 = &p_826->g_54[7].f0;
        int32_t **l_129 = &l_126;
        int32_t **l_131 = &l_126;
        int32_t ***l_130 = &l_131;
        int32_t *l_133 = &p_826->g_54[7].f0;
        int32_t **l_132[3][6] = {{&l_133,&l_126,&l_133,&l_133,&l_126,&l_133},{&l_133,&l_126,&l_133,&l_133,&l_126,&l_133},{&l_133,&l_126,&l_133,&l_133,&l_126,&l_133}};
        uint32_t *l_140[7][3][6] = {{{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0},{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0},{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0}},{{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0},{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0},{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0}},{{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0},{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0},{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0}},{{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0},{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0},{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0}},{{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0},{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0},{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0}},{{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0},{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0},{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0}},{{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0},{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0},{&p_826->g_141,&p_826->g_141,(void*)0,(void*)0,&p_826->g_141,(void*)0}}};
        int32_t l_142 = 0x20E13958L;
        int i, j, k;
        (*l_126) |= (((((safe_sub_func_int64_t_s_s(l_116, 0UL)) | l_116) >= ((((*l_119) &= (((*l_118) = 252UL) & GROUP_DIVERGE(1, 1))) || (l_116 <= (safe_add_func_int32_t_s_s(l_123, ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(p_826->g_124.s3ecd)).zwzzzyzy, ((VECTOR(int8_t, 2))(l_125.s11)).yxyyyxyy))).s7450646220042125)).s1 & l_123) != l_125.s5))))) , 0L)) > l_123) == l_123);
        l_134 |= (((safe_sub_func_uint8_t_u_u(251UL, (*l_126))) | ((void*)0 == &l_123)) < (l_125.s6 || (l_129 != (l_132[1][3] = (FAKE_DIVERGE(p_826->local_1_offset, get_local_id(1), 10) , ((*l_130) = &l_126))))));
        p_826->g_148 |= ((**l_131) ^= ((safe_mod_func_uint8_t_u_u((0x2EL & 0xF5L), (safe_rshift_func_int16_t_s_u(((((VECTOR(int16_t, 8))(l_139.s56152677)).s1 , (p_826->g_141 = 0x9E7EE7FCL)) , (0x3204CE78L & (l_142 || (safe_rshift_func_int8_t_s_u(((*l_130) != &p_826->g_109[0][4][7]), (safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_826->group_1_offset, get_group_id(1), 10), (p_826->g_147 , (*p_32))))))))), p_826->g_30[0])))) >= p_826->l_comm_values[(safe_mod_func_uint32_t_u_u(p_826->tid, 44))]));
        l_155 = (p_826->g_91 , ((safe_div_func_uint32_t_u_u(3UL, l_134)) >= ((*l_126) = (((*l_130) = p_826->g_151) != (p_826->g_154 = l_153[6])))));
    }
    ++l_156;
    if ((safe_unary_minus_func_uint16_t_u((p_826->g_160 != l_162))))
    { /* block id: 48 */
        int32_t *l_167 = &p_826->g_91;
        VECTOR(int8_t, 2) l_174 = (VECTOR(int8_t, 2))(0x21L, (-1L));
        int32_t l_196 = (-1L);
        int i;
        for (p_826->g_91 = 0; (p_826->g_91 == (-23)); p_826->g_91 = safe_sub_func_uint16_t_u_u(p_826->g_91, 8))
        { /* block id: 51 */
            int32_t * volatile *l_166[10] = {&p_826->g_110,&p_826->g_110,&p_826->g_110,&p_826->g_110,&p_826->g_110,&p_826->g_110,&p_826->g_110,&p_826->g_110,&p_826->g_110,&p_826->g_110};
            int32_t * volatile **l_165 = &l_166[8];
            int i;
            (*l_165) = &p_826->g_109[0][4][7];
        }
        (*p_826->g_151) = l_167;
        l_196 |= (((*p_32) ^= (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(65530UL, GROUP_DIVERGE(1, 1))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(0x2DL, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_174.xxyx)).zwzxwyxx)), (-1L), 0x18L, 0x05L, (*l_167), 7L, 0x78L, (-1L))).odd)).hi)).yzxzzyzzxxyzxzxx)).s75)).xyxy, ((VECTOR(int8_t, 8))(p_826->g_175.wxxwzyyw)).odd))).hi)).xxxxyyyxyyxyxxxx, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(p_826->g_176.sb1603eda3869ade6)).s3d16))).odd))), ((VECTOR(int8_t, 4))(p_826->g_177.s7441)).hi))).xyxyxyyxxyxyxyyx))).hi)).s3)), ((*l_167) & p_826->g_148)))) , ((*l_167) = ((((safe_mul_func_uint16_t_u_u((p_826->g_176.s6 & ((VECTOR(int64_t, 8))(l_180.zzzyzxxz)).s3), (safe_lshift_func_uint16_t_u_s(p_826->g_103, 14)))) & 0x0A34L) | ((*l_167) && (safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((~((safe_sub_func_int8_t_s_s((((safe_add_func_int16_t_s_s((*p_32), p_826->g_141)) && (*l_167)) || p_826->g_102), (*p_826->g_10))) ^ p_826->g_141)), p_826->g_comm_values[p_826->tid])), (*l_167))), p_826->g_195)), (-9L))))) , (*l_167))));
        for (p_826->g_195 = 28; (p_826->g_195 == 17); p_826->g_195--)
        { /* block id: 60 */
            VECTOR(int32_t, 16) l_199 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 5L), 5L), 5L, 0L, 5L, (VECTOR(int32_t, 2))(0L, 5L), (VECTOR(int32_t, 2))(0L, 5L), 0L, 5L, 0L, 5L);
            int32_t ***l_201 = &l_153[6];
            VECTOR(uint8_t, 2) l_204 = (VECTOR(uint8_t, 2))(0x6FL, 0x36L);
            VECTOR(uint8_t, 16) l_206 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
            VECTOR(uint8_t, 16) l_207 = (VECTOR(uint8_t, 16))(0x6AL, (VECTOR(uint8_t, 4))(0x6AL, (VECTOR(uint8_t, 2))(0x6AL, 0xB0L), 0xB0L), 0xB0L, 0x6AL, 0xB0L, (VECTOR(uint8_t, 2))(0x6AL, 0xB0L), (VECTOR(uint8_t, 2))(0x6AL, 0xB0L), 0x6AL, 0xB0L, 0x6AL, 0xB0L);
            uint8_t *l_210 = (void*)0;
            uint8_t **l_211 = (void*)0;
            int i;
            (*l_167) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_199.sa22a9c7a)))).s03)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_826->g_200.xyyxyxxyyxxyxyyy)).hi)).s05))), 0x222E2F3DL, (-4L))).hi)).xyyxxxyxxyxyyyxy, (int32_t)(*p_826->g_110), (int32_t)((((*l_201) = &p_826->g_152) != ((safe_lshift_func_int8_t_s_u(0x1AL, (p_826->g_147.f0 <= ((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_204.xxyyyyyx)).s0, 0xC6L, 0x4AL, 0xD8L)).wxyyyyzx, ((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(p_826->g_205.yyxxxxxyxxxyyxyy)).se08a)).hi, ((VECTOR(uint8_t, 4))(l_206.s5d4e)).hi))).xyxyxyyyxyyxyxxy)).even, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_207.s151094ee)), (safe_add_func_int8_t_s_s(((l_210 == (p_826->g_212 = l_210)) & (safe_sub_func_int32_t_s_s(((void*)0 != l_215), (((((0UL >= p_826->l_comm_values[(safe_mod_func_uint32_t_u_u(p_826->tid, 44))]) < 0x3B8BL) , (**l_215)) > (*p_826->g_70)) != GROUP_DIVERGE(1, 1))))), (*l_167))), FAKE_DIVERGE(p_826->local_0_offset, get_local_id(0), 10), ((VECTOR(uint8_t, 4))(0x9EL)), 0x2EL, 0xD4L)).lo)))))).s2))) , &p_826->g_109[0][6][0])) & (*l_167))))))))).s2;
            if ((***l_201))
                continue;
        }
    }
    else
    { /* block id: 66 */
        int32_t ***l_225 = &l_153[6];
        uint32_t *l_235 = &p_826->g_120;
        uint8_t *l_236 = &p_826->g_61;
        int8_t *l_237 = (void*)0;
        int8_t *l_238 = (void*)0;
        int8_t *l_239[8][6] = {{(void*)0,&p_826->g_11,&p_826->g_102,(void*)0,(void*)0,(void*)0},{(void*)0,&p_826->g_11,&p_826->g_102,(void*)0,(void*)0,(void*)0},{(void*)0,&p_826->g_11,&p_826->g_102,(void*)0,(void*)0,(void*)0},{(void*)0,&p_826->g_11,&p_826->g_102,(void*)0,(void*)0,(void*)0},{(void*)0,&p_826->g_11,&p_826->g_102,(void*)0,(void*)0,(void*)0},{(void*)0,&p_826->g_11,&p_826->g_102,(void*)0,(void*)0,(void*)0},{(void*)0,&p_826->g_11,&p_826->g_102,(void*)0,(void*)0,(void*)0},{(void*)0,&p_826->g_11,&p_826->g_102,(void*)0,(void*)0,(void*)0}};
        int32_t l_308 = 0x6D712266L;
        VECTOR(int64_t, 2) l_361 = (VECTOR(int64_t, 2))((-1L), 0x4AD4095460780E83L);
        int i, j;
        if ((0x18L & (((void*)0 == p_826->g_216) , ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(l_219.sbc08)).hi, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_220.xyyxyyyxyyxxyxxy)).s6235)), ((VECTOR(int8_t, 8))(5L, ((safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u((&l_153[5] == l_225), ((VECTOR(int32_t, 4))(p_826->g_226.s5200)).w)), (safe_add_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), 0x3EL)))) , (p_826->g_177.s4 |= ((safe_sub_func_uint8_t_u_u(0xB8L, ((*l_236) = (&p_826->g_161 == (((~((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967292UL, 5UL)), 0x75A24C56L, 4294967287UL)).x) < ((*l_235) = (safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((~(&l_215 != &l_215)), (*p_826->g_10))) <= 251UL), (***l_225))))) , l_162))))) == 0xF085550C3F117C11L))), 0x1FL, (-3L), (**l_215), 0x56L, 5L, 0x72L)).odd))).xxyzxxyw)).hi, ((VECTOR(int8_t, 4))(0x3CL))))), ((VECTOR(int8_t, 4))(0x03L))))).wyzwzwxw)).s05))), ((VECTOR(int8_t, 2))(0x3AL))))).xyyxxxxxyyxxxyyx, ((VECTOR(int8_t, 16))(0x41L))))), ((VECTOR(int8_t, 16))(5L))))).se)))
        { /* block id: 70 */
            int8_t *l_240 = (void*)0;
            int32_t l_241 = 0x55B424FCL;
            VECTOR(uint8_t, 2) l_270 = (VECTOR(uint8_t, 2))(0xB8L, 0x65L);
            uint32_t *l_292 = &p_826->g_141;
            volatile int32_t **l_294 = &p_826->g_217;
            int32_t ****l_299 = &l_225;
            VECTOR(uint64_t, 2) l_326 = (VECTOR(uint64_t, 2))(18446744073709551606UL, 0xECD370320F7385F6L);
            int32_t *l_357 = &l_241;
            int i;
            if ((((*p_826->g_70) |= (***l_225)) <= ((void*)0 == l_240)))
            { /* block id: 72 */
                return l_241;
            }
            else
            { /* block id: 74 */
                uint32_t l_247 = 1UL;
                int8_t **l_265 = &l_239[2][2];
                int8_t **l_266 = &l_240;
                VECTOR(int8_t, 2) l_286 = (VECTOR(int8_t, 2))((-7L), (-7L));
                VECTOR(uint8_t, 2) l_289 = (VECTOR(uint8_t, 2))(7UL, 5UL);
                int i;
                for (p_826->g_61 = 28; (p_826->g_61 <= 18); p_826->g_61--)
                { /* block id: 77 */
                    uint8_t l_244 = 0UL;
                    if ((((void*)0 == &p_826->g_109[0][8][3]) && p_826->g_176.s5))
                    { /* block id: 78 */
                        l_244++;
                        l_247++;
                    }
                    else
                    { /* block id: 81 */
                        (**p_826->g_151) |= l_241;
                        return l_247;
                    }
                }
                l_241 &= ((((void*)0 != p_32) < ((***l_225) <= (safe_mod_func_uint64_t_u_u((((safe_add_func_uint64_t_u_u((~((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((p_826->g_103 == (safe_lshift_func_uint8_t_u_u((***l_225), ((!(((*l_265) = l_264) == ((*l_266) = l_237))) & ((-2L) >= 0x337C9961L))))) && (-5L)), 0L)), l_247)), 0x54E3L)), (*p_826->g_70))) & (*p_32))), (*p_826->g_160))) , p_826->g_267) , (*p_826->g_160)), l_247)))) , (**l_215));
                (**l_215) = (safe_mod_func_int64_t_s_s(l_241, (((VECTOR(uint8_t, 8))(l_270.xyxxyyxy)).s1 || (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_div_func_uint64_t_u_u((l_277 != l_277), (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((p_826->g_176.s9 >= (safe_lshift_func_uint16_t_u_u(0UL, 7))), 2)) != (***l_225)), (((safe_rshift_func_int8_t_s_s(((*p_826->g_70) = ((VECTOR(int8_t, 16))(l_286.yxyyxyyxxyxyxxxx)).se), (((0UL && ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(0xCBB6L, ((VECTOR(uint16_t, 4))(p_826->g_287.zyyz)), ((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(p_826->g_288.sf8)), ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_289.yx)).yyxx)).yzwzywwyxwzxxwzx, ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(p_826->g_290.xz))))).xyxyxxyyyyyxxyyy))).s23))).yyxxyyxyxyxxyyxy)).lo)), ((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0xE359L, 0x77F4L)).yxxyyyyx)))), ((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 8))(p_826->g_291.sabfc873e)).s37, (uint16_t)(l_292 == &p_826->g_141)))).yxxxyyyxyxxxxxyx)).s56a4)).even, ((VECTOR(uint16_t, 2))(0UL))))).xyyxxyyy, ((VECTOR(uint16_t, 8))(7UL))))), ((VECTOR(uint16_t, 8))(0UL)))))))), ((VECTOR(uint16_t, 2))(0UL)), 5UL)).sae)), 0x5927L, p_826->g_161, l_247, 0xF665L, 8UL, 1UL)).s0) , (void*)0) != l_153[3]))) < l_270.x) <= 0x6DB3L))))) && 0xA3FD96416AAD62A1L) <= 0x14L), l_241)), l_247)))));
                (*p_826->g_293) = (*p_826->g_216);
            }
            (*l_294) = (*p_826->g_216);
            if (((l_241 |= ((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int64_t_s_s(p_826->g_287.x, (&l_153[6] == ((*l_299) = (void*)0)))) & l_300), (l_301 ^ (safe_lshift_func_int8_t_s_u(((*p_826->g_10) >= ((safe_sub_func_uint16_t_u_u(((((((void*)0 != &p_826->g_102) , (safe_sub_func_uint64_t_u_u(p_826->g_195, 0xBC59CDDAF78F503FL))) | 4UL) , GROUP_DIVERGE(1, 1)) ^ 0x728B8A9CL), l_308)) , (-1L))), FAKE_DIVERGE(p_826->global_2_offset, get_global_id(2), 10)))))) & FAKE_DIVERGE(p_826->local_0_offset, get_local_id(0), 10))) != l_308))
            { /* block id: 96 */
                uint32_t l_321 = 0x2F456A4EL;
                int32_t l_337 = 1L;
                l_308 &= (safe_div_func_int32_t_s_s((l_337 = (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u((safe_add_func_int64_t_s_s(p_826->g_290.z, (safe_mul_func_int8_t_s_s(((((VECTOR(uint32_t, 4))(l_321, 0x7DFFA2B7L, 0xFB740927L, 1UL)).w || (safe_lshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(0UL, ((VECTOR(uint64_t, 4))(l_326.yxxy)), ((VECTOR(uint64_t, 2))(0x7C02BE83FFCD047AL, 18446744073709551615UL)), (((((safe_mul_func_int8_t_s_s((*p_826->g_70), 1L)) != ((((safe_add_func_uint16_t_u_u(p_826->g_290.x, ((!(*p_826->g_160)) < (safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_826->local_0_offset, get_local_id(0), 10), 0))))) != (safe_mod_func_int16_t_s_s((*p_32), l_321))) > (safe_lshift_func_uint16_t_u_u((l_321 && 0x82BEE0BD0EFFEF48L), 12))) || l_321)) < 1L) , p_826->g_290.w) >= p_826->g_120), 0x47E2376DFDD3D1E3L, ((VECTOR(uint64_t, 2))(0xE29CE6E52A64A254L)), ((VECTOR(uint64_t, 4))(0xB1FD80F594059C73L)), 0xF4F99FC73D9B70BCL)).sa, 1UL)), 0))) == p_826->g_102), l_321)))), (**l_215))) , (-5L)), p_826->g_205.y)) , GROUP_DIVERGE(2, 1)), (*p_826->g_10)))), 0x61E1F90EL));
            }
            else
            { /* block id: 99 */
                int32_t *l_338 = &p_826->g_147.f2;
                int32_t l_353 = (-1L);
                uint32_t l_354 = 0UL;
                (*p_826->g_151) = (*p_826->g_151);
                l_338 = (*p_826->g_151);
                for (p_826->g_267.f3 = (-21); (p_826->g_267.f3 <= (-21)); p_826->g_267.f3++)
                { /* block id: 104 */
                    uint32_t l_351 = 9UL;
                    VECTOR(uint32_t, 4) l_352 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xCB4A04C5L), 0xCB4A04C5L);
                    int i;
                    l_354 = (l_353 = (safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_826->local_2_offset, get_local_id(2), 10), ((*l_236) = ((*l_338) = (p_826->g_38 , (((safe_mod_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((void*)0 != &l_236), ((safe_mul_func_int16_t_s_s((&p_826->g_212 != (void*)0), (safe_sub_func_uint16_t_u_u(l_351, p_826->g_175.w)))) ^ (((VECTOR(uint32_t, 16))(l_352.zzwzyyxyyyxwxywy)).se , ((0x4801L && p_826->g_30[0]) || (*l_338)))))), (*l_338))) < (*l_338)) <= (**l_215))))))));
                    for (p_826->g_120 = 0; (p_826->g_120 < 38); p_826->g_120 = safe_add_func_int32_t_s_s(p_826->g_120, 2))
                    { /* block id: 111 */
                        l_357 = ((*l_215) = (*p_826->g_151));
                        (*l_294) = (*p_826->g_293);
                    }
                    p_826->g_358 = (void*)0;
                    if ((*l_338))
                        continue;
                }
                (*l_294) = (void*)0;
            }
            (*p_826->g_110) |= ((**l_215) = (safe_mod_func_int8_t_s_s((((void*)0 != &p_826->g_61) <= ((VECTOR(int64_t, 4))(l_361.xyxx)).w), (+1L))));
        }
        else
        { /* block id: 123 */
            int8_t l_366 = (-10L);
            uint64_t l_379 = 1UL;
            VECTOR(int32_t, 4) l_384 = (VECTOR(int32_t, 4))(0x413ED930L, (VECTOR(int32_t, 2))(0x413ED930L, 0x4D8F38D1L), 0x4D8F38D1L);
            int i;
            (**p_826->g_151) = ((***l_225) ^ (-1L));
            for (l_155 = 25; (l_155 == 29); l_155 = safe_add_func_int8_t_s_s(l_155, 1))
            { /* block id: 127 */
                uint64_t l_367 = 0UL;
                VECTOR(uint64_t, 8) l_369 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x5D09DC035A220A62L), 0x5D09DC035A220A62L), 0x5D09DC035A220A62L, 0UL, 0x5D09DC035A220A62L);
                VECTOR(int8_t, 16) l_374 = (VECTOR(int8_t, 16))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, 0L), 0L), 0L, 0x64L, 0L, (VECTOR(int8_t, 2))(0x64L, 0L), (VECTOR(int8_t, 2))(0x64L, 0L), 0x64L, 0L, 0x64L, 0L);
                VECTOR(int32_t, 2) l_382 = (VECTOR(int32_t, 2))(0x5F5A7021L, 0x50E3D36CL);
                int32_t *****l_387[2][2][2] = {{{&p_826->g_385,&p_826->g_385},{&p_826->g_385,&p_826->g_385}},{{&p_826->g_385,&p_826->g_385},{&p_826->g_385,&p_826->g_385}}};
                int i, j, k;
                (*p_826->g_217) = (safe_add_func_int8_t_s_s(((l_367 = l_366) || (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(p_826->g_368.s0096fda9)))).s52, ((VECTOR(uint64_t, 2))(l_369.s43)), ((VECTOR(uint64_t, 16))(0x9907E119511A08FEL, 18446744073709551613UL, l_367, FAKE_DIVERGE(p_826->global_0_offset, get_global_id(0), 10), 1UL, (safe_lshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(l_374.s67)).lo, (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((p_826->g_267.f0 , (l_379 | ((*p_826->g_152) ^ p_826->g_147.f0))), ((((((!(safe_add_func_int32_t_s_s(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_382.yy)).xxyx)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_826->g_383.yy)).yxxyyxyy)).even, ((VECTOR(int32_t, 8))(l_384.zyxzzwzw)).lo))).y, (&l_225 == (p_826->g_385 = p_826->g_385))))) ^ (safe_rshift_func_uint16_t_u_s(l_379, 3))) , (***l_225)) , l_390[1]) == l_390[4]) | (*p_32)))), 5)))) <= (***l_225)), 5)), 0x08F1CC6B48333D8CL, 18446744073709551612UL, ((VECTOR(uint64_t, 2))(0xCABFE7EAF6CD1184L)), (*p_826->g_160), 5UL, (*p_826->g_160), GROUP_DIVERGE(2, 1), 0x785BB232A8323D87L, 0x0524BC727A9CAA57L)).saa))).yyxx)).x != (***l_225))), p_826->g_102));
            }
        }
        (*p_826->g_110) = ((**p_826->g_151) = 0L);
    }
    for (p_826->g_102 = 19; (p_826->g_102 >= 4); p_826->g_102 = safe_sub_func_int32_t_s_s(p_826->g_102, 2))
    { /* block id: 138 */
        int32_t *l_393 = &l_134;
        (*p_826->g_151) = l_393;
    }
    return (*p_32);
}


/* ------------------------------------------ */
/* 
 * reads : p_826->g_110 p_826->g_91
 * writes: p_826->g_91
 */
int16_t * func_33(int8_t * p_34, int32_t  p_35, uint32_t  p_36, uint16_t  p_37, struct S3 * p_826)
{ /* block id: 26 */
    int16_t *l_111 = &p_826->g_101;
    (*p_826->g_110) |= p_35;
    return l_111;
}


/* ------------------------------------------ */
/* 
 * reads : p_826->g_54.f0
 * writes: p_826->g_54.f0
 */
uint8_t  func_43(int8_t * p_44, uint8_t  p_45, struct S3 * p_826)
{ /* block id: 23 */
    int32_t *l_108 = &p_826->g_54[7].f0;
    (*l_108) = p_45;
    return p_826->g_54[7].f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_826->g_comm_values p_826->g_61 p_826->g_54.f0 p_826->g_11 p_826->l_comm_values p_826->g_70
 * writes: p_826->g_54.f0 p_826->g_11 p_826->g_91
 */
int8_t * func_46(int8_t * p_47, union U1  p_48, int16_t * p_49, uint32_t  p_50, uint64_t  p_51, struct S3 * p_826)
{ /* block id: 15 */
    uint32_t l_77 = 0UL;
    int32_t *l_78 = &p_826->g_54[7].f0;
    int32_t **l_79 = &l_78;
    int32_t *l_90 = &p_826->g_91;
    int32_t *l_92 = &p_826->g_91;
    int32_t *l_93 = &p_826->g_91;
    int32_t l_94 = 1L;
    int32_t *l_95 = &p_826->g_54[7].f0;
    int32_t *l_96 = (void*)0;
    int32_t *l_97 = (void*)0;
    int32_t *l_98 = &l_94;
    int32_t *l_99 = (void*)0;
    int32_t *l_100[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t l_104 = 2UL;
    int8_t *l_107 = &p_826->g_11;
    int i;
    l_77 ^= (safe_rshift_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(((void*)0 == p_47), p_48.f0)) != p_826->g_comm_values[p_826->tid]), 4));
    (*l_79) = l_78;
    (*l_90) = ((safe_add_func_int64_t_s_s((((*p_47) = ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 8))((+((+(p_826->g_61 < ((0x147090205405EA32L > (safe_rshift_func_uint8_t_u_s((**l_79), 7))) , ((void*)0 == &l_78)))) & 0xD0DAL)), ((((*l_78) = p_826->g_11) | (((((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(p_826->g_comm_values[p_826->tid], p_826->g_comm_values[p_826->tid])), p_826->l_comm_values[(safe_mod_func_uint32_t_u_u(p_826->tid, 44))])), p_826->l_comm_values[(safe_mod_func_uint32_t_u_u(p_826->tid, 44))])) && p_826->l_comm_values[(safe_mod_func_uint32_t_u_u(p_826->tid, 44))]) < (*p_826->g_70)) | p_826->l_comm_values[(safe_mod_func_uint32_t_u_u(p_826->tid, 44))]) != 0x4BFBCC83L)) <= p_48.f0), ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 2))((-1L))), 0x49L, 0x58L)).s6530604130455701, ((VECTOR(int8_t, 16))(0x0EL))))).lo)).s0) >= 0x44L), 0x4ECC5629281337FBL)) , p_51);
    --l_104;
    return l_107;
}


/* ------------------------------------------ */
/* 
 * reads : p_826->g_54.f0 p_826->g_10 p_826->l_comm_values p_826->g_61 p_826->g_30 p_826->g_70
 * writes: p_826->g_54.f0 p_826->g_11 p_826->g_61
 */
int8_t * func_52(union U1  p_53, struct S3 * p_826)
{ /* block id: 8 */
    uint8_t l_55 = 0xAFL;
    uint64_t *l_59 = (void*)0;
    uint64_t *l_60 = (void*)0;
    uint8_t *l_68 = &l_55;
    int32_t l_69 = (-3L);
    p_826->g_54[7].f0 &= 0x06946CB4L;
    p_53.f0 = ((((*l_68) = ((l_55 < (safe_mul_func_int16_t_s_s(((FAKE_DIVERGE(p_826->local_0_offset, get_local_id(0), 10) >= p_53.f0) , ((((((*p_826->g_10) = (safe_unary_minus_func_int16_t_s(0x44BAL))) & (p_826->l_comm_values[(safe_mod_func_uint32_t_u_u(p_826->tid, 44))] | (p_826->g_61 |= l_55))) | 0x4FD57ECAL) >= (safe_mod_func_uint16_t_u_u(FAKE_DIVERGE(p_826->local_0_offset, get_local_id(0), 10), p_826->g_30[0]))) > ((((safe_rshift_func_int8_t_s_u((((safe_sub_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), l_55)) || 0xA98AL) | p_53.f0), 5)) , 5L) != 0x7488F575434BB1B2L) ^ 0UL))), p_53.f0))) != p_53.f0)) & (-8L)) ^ l_69);
    return p_826->g_70;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[96];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 96; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[96];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 96; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[44];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 44; i++)
            l_comm_values[i] = 1;
    struct S3 c_827;
    struct S3* p_826 = &c_827;
    struct S3 c_828 = {
        1L, // p_826->g_11
        &p_826->g_11, // p_826->g_10
        {0x05FAL}, // p_826->g_30
        {0L}, // p_826->g_38
        {{7L},{7L},{7L},{7L},{7L},{7L},{7L},{7L}}, // p_826->g_54
        255UL, // p_826->g_61
        &p_826->g_11, // p_826->g_70
        1L, // p_826->g_91
        1L, // p_826->g_101
        0x36L, // p_826->g_102
        0x24A879AFL, // p_826->g_103
        {{{&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91,&p_826->g_54[7].f0,&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91},{&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91,&p_826->g_54[7].f0,&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91},{&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91,&p_826->g_54[7].f0,&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91},{&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91,&p_826->g_54[7].f0,&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91},{&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91,&p_826->g_54[7].f0,&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91},{&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91,&p_826->g_54[7].f0,&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91},{&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91,&p_826->g_54[7].f0,&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91},{&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91,&p_826->g_54[7].f0,&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91},{&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91,&p_826->g_54[7].f0,&p_826->g_91,&p_826->g_91,(void*)0,&p_826->g_91}}}, // p_826->g_109
        &p_826->g_91, // p_826->g_110
        0xCB9137EFL, // p_826->g_120
        (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0L), 0L), 0L, (-9L), 0L, (VECTOR(int8_t, 2))((-9L), 0L), (VECTOR(int8_t, 2))((-9L), 0L), (-9L), 0L, (-9L), 0L), // p_826->g_124
        0xEEE36A70L, // p_826->g_141
        {-4L}, // p_826->g_147
        0x3F6A8FE6L, // p_826->g_148
        &p_826->g_54[7].f0, // p_826->g_152
        &p_826->g_152, // p_826->g_151
        (void*)0, // p_826->g_154
        0xE913C9C0DAB6F810L, // p_826->g_161
        &p_826->g_161, // p_826->g_160
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x16L), 0x16L), // p_826->g_175
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x0DL), 0x0DL), 0x0DL, (-1L), 0x0DL, (VECTOR(int8_t, 2))((-1L), 0x0DL), (VECTOR(int8_t, 2))((-1L), 0x0DL), (-1L), 0x0DL, (-1L), 0x0DL), // p_826->g_176
        (VECTOR(int8_t, 8))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), (-1L)), (-1L)), (-1L), (-10L), (-1L)), // p_826->g_177
        1UL, // p_826->g_195
        (VECTOR(int32_t, 2))(0x7094CEFBL, 0x5B17DAC2L), // p_826->g_200
        (VECTOR(uint8_t, 2))(0UL, 0x94L), // p_826->g_205
        (void*)0, // p_826->g_212
        0x25C74516L, // p_826->g_218
        &p_826->g_218, // p_826->g_217
        &p_826->g_217, // p_826->g_216
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0D5824C6L), 0x0D5824C6L), 0x0D5824C6L, (-1L), 0x0D5824C6L), // p_826->g_226
        {0x59A78E7382C6C0A4L}, // p_826->g_267
        (VECTOR(uint16_t, 4))(0xE031L, (VECTOR(uint16_t, 2))(0xE031L, 0xA7E1L), 0xA7E1L), // p_826->g_287
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), (VECTOR(uint16_t, 2))(65535UL, 1UL), 65535UL, 1UL, 65535UL, 1UL), // p_826->g_288
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x8FL), 0x8FL), // p_826->g_290
        (VECTOR(uint16_t, 16))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0xCD88L), 0xCD88L), 0xCD88L, 8UL, 0xCD88L, (VECTOR(uint16_t, 2))(8UL, 0xCD88L), (VECTOR(uint16_t, 2))(8UL, 0xCD88L), 8UL, 0xCD88L, 8UL, 0xCD88L), // p_826->g_291
        &p_826->g_217, // p_826->g_293
        (void*)0, // p_826->g_358
        (VECTOR(uint64_t, 16))(0x0F6DF1392A8D45E6L, (VECTOR(uint64_t, 4))(0x0F6DF1392A8D45E6L, (VECTOR(uint64_t, 2))(0x0F6DF1392A8D45E6L, 0xD5E0BF76F57C1E3BL), 0xD5E0BF76F57C1E3BL), 0xD5E0BF76F57C1E3BL, 0x0F6DF1392A8D45E6L, 0xD5E0BF76F57C1E3BL, (VECTOR(uint64_t, 2))(0x0F6DF1392A8D45E6L, 0xD5E0BF76F57C1E3BL), (VECTOR(uint64_t, 2))(0x0F6DF1392A8D45E6L, 0xD5E0BF76F57C1E3BL), 0x0F6DF1392A8D45E6L, 0xD5E0BF76F57C1E3BL, 0x0F6DF1392A8D45E6L, 0xD5E0BF76F57C1E3BL), // p_826->g_368
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-2L)), (-2L)), // p_826->g_383
        (void*)0, // p_826->g_386
        &p_826->g_386, // p_826->g_385
        {-7L}, // p_826->g_395
        (VECTOR(uint8_t, 8))(0x4DL, (VECTOR(uint8_t, 4))(0x4DL, (VECTOR(uint8_t, 2))(0x4DL, 0xD6L), 0xD6L), 0xD6L, 0x4DL, 0xD6L), // p_826->g_400
        (VECTOR(int16_t, 16))(0x0C62L, (VECTOR(int16_t, 4))(0x0C62L, (VECTOR(int16_t, 2))(0x0C62L, 0L), 0L), 0L, 0x0C62L, 0L, (VECTOR(int16_t, 2))(0x0C62L, 0L), (VECTOR(int16_t, 2))(0x0C62L, 0L), 0x0C62L, 0L, 0x0C62L, 0L), // p_826->g_424
        0x8082633B872EB84DL, // p_826->g_426
        (void*)0, // p_826->g_427
        {0x0902F3CB2A203BA1L}, // p_826->g_451
        4294967295UL, // p_826->g_471
        (VECTOR(uint8_t, 2))(1UL, 0x74L), // p_826->g_501
        (VECTOR(uint32_t, 2))(4294967295UL, 4294967289UL), // p_826->g_528
        (VECTOR(int16_t, 4))(0x2C12L, (VECTOR(int16_t, 2))(0x2C12L, 6L), 6L), // p_826->g_557
        (VECTOR(uint8_t, 16))(0x30L, (VECTOR(uint8_t, 4))(0x30L, (VECTOR(uint8_t, 2))(0x30L, 0xE4L), 0xE4L), 0xE4L, 0x30L, 0xE4L, (VECTOR(uint8_t, 2))(0x30L, 0xE4L), (VECTOR(uint8_t, 2))(0x30L, 0xE4L), 0x30L, 0xE4L, 0x30L, 0xE4L), // p_826->g_625
        {{{0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L}},{{0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L}},{{0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L}},{{0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L}},{{0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L}},{{0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L,0x3EA49976L}}}, // p_826->g_793
        {&p_826->g_793[2][0][0],&p_826->g_793[2][0][0],&p_826->g_793[2][0][0],&p_826->g_793[2][0][0],&p_826->g_793[2][0][0]}, // p_826->g_807
        {{{&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0},{&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0}},{{&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0},{&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0}},{{&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0},{&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0}},{{&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0},{&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0}},{{&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0},{&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0}},{{&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0},{&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0,&p_826->g_54[7].f0}}}, // p_826->g_808
        {&p_826->g_147.f2,&p_826->g_147.f2}, // p_826->g_809
        (void*)0, // p_826->g_810
        0, // p_826->v_collective
        sequence_input[get_global_id(0)], // p_826->global_0_offset
        sequence_input[get_global_id(1)], // p_826->global_1_offset
        sequence_input[get_global_id(2)], // p_826->global_2_offset
        sequence_input[get_local_id(0)], // p_826->local_0_offset
        sequence_input[get_local_id(1)], // p_826->local_1_offset
        sequence_input[get_local_id(2)], // p_826->local_2_offset
        sequence_input[get_group_id(0)], // p_826->group_0_offset
        sequence_input[get_group_id(1)], // p_826->group_1_offset
        sequence_input[get_group_id(2)], // p_826->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 44)), permutations[0][get_linear_local_id()])), // p_826->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_827 = c_828;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_826);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_826->g_11, "p_826->g_11", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_826->g_30[i], "p_826->g_30[i]", print_hash_value);

    }
    transparent_crc(p_826->g_38.f0, "p_826->g_38.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_826->g_54[i].f0, "p_826->g_54[i].f0", print_hash_value);

    }
    transparent_crc(p_826->g_61, "p_826->g_61", print_hash_value);
    transparent_crc(p_826->g_91, "p_826->g_91", print_hash_value);
    transparent_crc(p_826->g_101, "p_826->g_101", print_hash_value);
    transparent_crc(p_826->g_102, "p_826->g_102", print_hash_value);
    transparent_crc(p_826->g_103, "p_826->g_103", print_hash_value);
    transparent_crc(p_826->g_120, "p_826->g_120", print_hash_value);
    transparent_crc(p_826->g_124.s0, "p_826->g_124.s0", print_hash_value);
    transparent_crc(p_826->g_124.s1, "p_826->g_124.s1", print_hash_value);
    transparent_crc(p_826->g_124.s2, "p_826->g_124.s2", print_hash_value);
    transparent_crc(p_826->g_124.s3, "p_826->g_124.s3", print_hash_value);
    transparent_crc(p_826->g_124.s4, "p_826->g_124.s4", print_hash_value);
    transparent_crc(p_826->g_124.s5, "p_826->g_124.s5", print_hash_value);
    transparent_crc(p_826->g_124.s6, "p_826->g_124.s6", print_hash_value);
    transparent_crc(p_826->g_124.s7, "p_826->g_124.s7", print_hash_value);
    transparent_crc(p_826->g_124.s8, "p_826->g_124.s8", print_hash_value);
    transparent_crc(p_826->g_124.s9, "p_826->g_124.s9", print_hash_value);
    transparent_crc(p_826->g_124.sa, "p_826->g_124.sa", print_hash_value);
    transparent_crc(p_826->g_124.sb, "p_826->g_124.sb", print_hash_value);
    transparent_crc(p_826->g_124.sc, "p_826->g_124.sc", print_hash_value);
    transparent_crc(p_826->g_124.sd, "p_826->g_124.sd", print_hash_value);
    transparent_crc(p_826->g_124.se, "p_826->g_124.se", print_hash_value);
    transparent_crc(p_826->g_124.sf, "p_826->g_124.sf", print_hash_value);
    transparent_crc(p_826->g_141, "p_826->g_141", print_hash_value);
    transparent_crc(p_826->g_147.f0, "p_826->g_147.f0", print_hash_value);
    transparent_crc(p_826->g_148, "p_826->g_148", print_hash_value);
    transparent_crc(p_826->g_161, "p_826->g_161", print_hash_value);
    transparent_crc(p_826->g_175.x, "p_826->g_175.x", print_hash_value);
    transparent_crc(p_826->g_175.y, "p_826->g_175.y", print_hash_value);
    transparent_crc(p_826->g_175.z, "p_826->g_175.z", print_hash_value);
    transparent_crc(p_826->g_175.w, "p_826->g_175.w", print_hash_value);
    transparent_crc(p_826->g_176.s0, "p_826->g_176.s0", print_hash_value);
    transparent_crc(p_826->g_176.s1, "p_826->g_176.s1", print_hash_value);
    transparent_crc(p_826->g_176.s2, "p_826->g_176.s2", print_hash_value);
    transparent_crc(p_826->g_176.s3, "p_826->g_176.s3", print_hash_value);
    transparent_crc(p_826->g_176.s4, "p_826->g_176.s4", print_hash_value);
    transparent_crc(p_826->g_176.s5, "p_826->g_176.s5", print_hash_value);
    transparent_crc(p_826->g_176.s6, "p_826->g_176.s6", print_hash_value);
    transparent_crc(p_826->g_176.s7, "p_826->g_176.s7", print_hash_value);
    transparent_crc(p_826->g_176.s8, "p_826->g_176.s8", print_hash_value);
    transparent_crc(p_826->g_176.s9, "p_826->g_176.s9", print_hash_value);
    transparent_crc(p_826->g_176.sa, "p_826->g_176.sa", print_hash_value);
    transparent_crc(p_826->g_176.sb, "p_826->g_176.sb", print_hash_value);
    transparent_crc(p_826->g_176.sc, "p_826->g_176.sc", print_hash_value);
    transparent_crc(p_826->g_176.sd, "p_826->g_176.sd", print_hash_value);
    transparent_crc(p_826->g_176.se, "p_826->g_176.se", print_hash_value);
    transparent_crc(p_826->g_176.sf, "p_826->g_176.sf", print_hash_value);
    transparent_crc(p_826->g_177.s0, "p_826->g_177.s0", print_hash_value);
    transparent_crc(p_826->g_177.s1, "p_826->g_177.s1", print_hash_value);
    transparent_crc(p_826->g_177.s2, "p_826->g_177.s2", print_hash_value);
    transparent_crc(p_826->g_177.s3, "p_826->g_177.s3", print_hash_value);
    transparent_crc(p_826->g_177.s4, "p_826->g_177.s4", print_hash_value);
    transparent_crc(p_826->g_177.s5, "p_826->g_177.s5", print_hash_value);
    transparent_crc(p_826->g_177.s6, "p_826->g_177.s6", print_hash_value);
    transparent_crc(p_826->g_177.s7, "p_826->g_177.s7", print_hash_value);
    transparent_crc(p_826->g_195, "p_826->g_195", print_hash_value);
    transparent_crc(p_826->g_200.x, "p_826->g_200.x", print_hash_value);
    transparent_crc(p_826->g_200.y, "p_826->g_200.y", print_hash_value);
    transparent_crc(p_826->g_205.x, "p_826->g_205.x", print_hash_value);
    transparent_crc(p_826->g_205.y, "p_826->g_205.y", print_hash_value);
    transparent_crc(p_826->g_218, "p_826->g_218", print_hash_value);
    transparent_crc(p_826->g_226.s0, "p_826->g_226.s0", print_hash_value);
    transparent_crc(p_826->g_226.s1, "p_826->g_226.s1", print_hash_value);
    transparent_crc(p_826->g_226.s2, "p_826->g_226.s2", print_hash_value);
    transparent_crc(p_826->g_226.s3, "p_826->g_226.s3", print_hash_value);
    transparent_crc(p_826->g_226.s4, "p_826->g_226.s4", print_hash_value);
    transparent_crc(p_826->g_226.s5, "p_826->g_226.s5", print_hash_value);
    transparent_crc(p_826->g_226.s6, "p_826->g_226.s6", print_hash_value);
    transparent_crc(p_826->g_226.s7, "p_826->g_226.s7", print_hash_value);
    transparent_crc(p_826->g_267.f0, "p_826->g_267.f0", print_hash_value);
    transparent_crc(p_826->g_287.x, "p_826->g_287.x", print_hash_value);
    transparent_crc(p_826->g_287.y, "p_826->g_287.y", print_hash_value);
    transparent_crc(p_826->g_287.z, "p_826->g_287.z", print_hash_value);
    transparent_crc(p_826->g_287.w, "p_826->g_287.w", print_hash_value);
    transparent_crc(p_826->g_288.s0, "p_826->g_288.s0", print_hash_value);
    transparent_crc(p_826->g_288.s1, "p_826->g_288.s1", print_hash_value);
    transparent_crc(p_826->g_288.s2, "p_826->g_288.s2", print_hash_value);
    transparent_crc(p_826->g_288.s3, "p_826->g_288.s3", print_hash_value);
    transparent_crc(p_826->g_288.s4, "p_826->g_288.s4", print_hash_value);
    transparent_crc(p_826->g_288.s5, "p_826->g_288.s5", print_hash_value);
    transparent_crc(p_826->g_288.s6, "p_826->g_288.s6", print_hash_value);
    transparent_crc(p_826->g_288.s7, "p_826->g_288.s7", print_hash_value);
    transparent_crc(p_826->g_288.s8, "p_826->g_288.s8", print_hash_value);
    transparent_crc(p_826->g_288.s9, "p_826->g_288.s9", print_hash_value);
    transparent_crc(p_826->g_288.sa, "p_826->g_288.sa", print_hash_value);
    transparent_crc(p_826->g_288.sb, "p_826->g_288.sb", print_hash_value);
    transparent_crc(p_826->g_288.sc, "p_826->g_288.sc", print_hash_value);
    transparent_crc(p_826->g_288.sd, "p_826->g_288.sd", print_hash_value);
    transparent_crc(p_826->g_288.se, "p_826->g_288.se", print_hash_value);
    transparent_crc(p_826->g_288.sf, "p_826->g_288.sf", print_hash_value);
    transparent_crc(p_826->g_290.x, "p_826->g_290.x", print_hash_value);
    transparent_crc(p_826->g_290.y, "p_826->g_290.y", print_hash_value);
    transparent_crc(p_826->g_290.z, "p_826->g_290.z", print_hash_value);
    transparent_crc(p_826->g_290.w, "p_826->g_290.w", print_hash_value);
    transparent_crc(p_826->g_291.s0, "p_826->g_291.s0", print_hash_value);
    transparent_crc(p_826->g_291.s1, "p_826->g_291.s1", print_hash_value);
    transparent_crc(p_826->g_291.s2, "p_826->g_291.s2", print_hash_value);
    transparent_crc(p_826->g_291.s3, "p_826->g_291.s3", print_hash_value);
    transparent_crc(p_826->g_291.s4, "p_826->g_291.s4", print_hash_value);
    transparent_crc(p_826->g_291.s5, "p_826->g_291.s5", print_hash_value);
    transparent_crc(p_826->g_291.s6, "p_826->g_291.s6", print_hash_value);
    transparent_crc(p_826->g_291.s7, "p_826->g_291.s7", print_hash_value);
    transparent_crc(p_826->g_291.s8, "p_826->g_291.s8", print_hash_value);
    transparent_crc(p_826->g_291.s9, "p_826->g_291.s9", print_hash_value);
    transparent_crc(p_826->g_291.sa, "p_826->g_291.sa", print_hash_value);
    transparent_crc(p_826->g_291.sb, "p_826->g_291.sb", print_hash_value);
    transparent_crc(p_826->g_291.sc, "p_826->g_291.sc", print_hash_value);
    transparent_crc(p_826->g_291.sd, "p_826->g_291.sd", print_hash_value);
    transparent_crc(p_826->g_291.se, "p_826->g_291.se", print_hash_value);
    transparent_crc(p_826->g_291.sf, "p_826->g_291.sf", print_hash_value);
    transparent_crc(p_826->g_368.s0, "p_826->g_368.s0", print_hash_value);
    transparent_crc(p_826->g_368.s1, "p_826->g_368.s1", print_hash_value);
    transparent_crc(p_826->g_368.s2, "p_826->g_368.s2", print_hash_value);
    transparent_crc(p_826->g_368.s3, "p_826->g_368.s3", print_hash_value);
    transparent_crc(p_826->g_368.s4, "p_826->g_368.s4", print_hash_value);
    transparent_crc(p_826->g_368.s5, "p_826->g_368.s5", print_hash_value);
    transparent_crc(p_826->g_368.s6, "p_826->g_368.s6", print_hash_value);
    transparent_crc(p_826->g_368.s7, "p_826->g_368.s7", print_hash_value);
    transparent_crc(p_826->g_368.s8, "p_826->g_368.s8", print_hash_value);
    transparent_crc(p_826->g_368.s9, "p_826->g_368.s9", print_hash_value);
    transparent_crc(p_826->g_368.sa, "p_826->g_368.sa", print_hash_value);
    transparent_crc(p_826->g_368.sb, "p_826->g_368.sb", print_hash_value);
    transparent_crc(p_826->g_368.sc, "p_826->g_368.sc", print_hash_value);
    transparent_crc(p_826->g_368.sd, "p_826->g_368.sd", print_hash_value);
    transparent_crc(p_826->g_368.se, "p_826->g_368.se", print_hash_value);
    transparent_crc(p_826->g_368.sf, "p_826->g_368.sf", print_hash_value);
    transparent_crc(p_826->g_383.x, "p_826->g_383.x", print_hash_value);
    transparent_crc(p_826->g_383.y, "p_826->g_383.y", print_hash_value);
    transparent_crc(p_826->g_383.z, "p_826->g_383.z", print_hash_value);
    transparent_crc(p_826->g_383.w, "p_826->g_383.w", print_hash_value);
    transparent_crc(p_826->g_395.f2, "p_826->g_395.f2", print_hash_value);
    transparent_crc(p_826->g_400.s0, "p_826->g_400.s0", print_hash_value);
    transparent_crc(p_826->g_400.s1, "p_826->g_400.s1", print_hash_value);
    transparent_crc(p_826->g_400.s2, "p_826->g_400.s2", print_hash_value);
    transparent_crc(p_826->g_400.s3, "p_826->g_400.s3", print_hash_value);
    transparent_crc(p_826->g_400.s4, "p_826->g_400.s4", print_hash_value);
    transparent_crc(p_826->g_400.s5, "p_826->g_400.s5", print_hash_value);
    transparent_crc(p_826->g_400.s6, "p_826->g_400.s6", print_hash_value);
    transparent_crc(p_826->g_400.s7, "p_826->g_400.s7", print_hash_value);
    transparent_crc(p_826->g_424.s0, "p_826->g_424.s0", print_hash_value);
    transparent_crc(p_826->g_424.s1, "p_826->g_424.s1", print_hash_value);
    transparent_crc(p_826->g_424.s2, "p_826->g_424.s2", print_hash_value);
    transparent_crc(p_826->g_424.s3, "p_826->g_424.s3", print_hash_value);
    transparent_crc(p_826->g_424.s4, "p_826->g_424.s4", print_hash_value);
    transparent_crc(p_826->g_424.s5, "p_826->g_424.s5", print_hash_value);
    transparent_crc(p_826->g_424.s6, "p_826->g_424.s6", print_hash_value);
    transparent_crc(p_826->g_424.s7, "p_826->g_424.s7", print_hash_value);
    transparent_crc(p_826->g_424.s8, "p_826->g_424.s8", print_hash_value);
    transparent_crc(p_826->g_424.s9, "p_826->g_424.s9", print_hash_value);
    transparent_crc(p_826->g_424.sa, "p_826->g_424.sa", print_hash_value);
    transparent_crc(p_826->g_424.sb, "p_826->g_424.sb", print_hash_value);
    transparent_crc(p_826->g_424.sc, "p_826->g_424.sc", print_hash_value);
    transparent_crc(p_826->g_424.sd, "p_826->g_424.sd", print_hash_value);
    transparent_crc(p_826->g_424.se, "p_826->g_424.se", print_hash_value);
    transparent_crc(p_826->g_424.sf, "p_826->g_424.sf", print_hash_value);
    transparent_crc(p_826->g_426, "p_826->g_426", print_hash_value);
    transparent_crc(p_826->g_451.f0, "p_826->g_451.f0", print_hash_value);
    transparent_crc(p_826->g_471, "p_826->g_471", print_hash_value);
    transparent_crc(p_826->g_501.x, "p_826->g_501.x", print_hash_value);
    transparent_crc(p_826->g_501.y, "p_826->g_501.y", print_hash_value);
    transparent_crc(p_826->g_528.x, "p_826->g_528.x", print_hash_value);
    transparent_crc(p_826->g_528.y, "p_826->g_528.y", print_hash_value);
    transparent_crc(p_826->g_557.x, "p_826->g_557.x", print_hash_value);
    transparent_crc(p_826->g_557.y, "p_826->g_557.y", print_hash_value);
    transparent_crc(p_826->g_557.z, "p_826->g_557.z", print_hash_value);
    transparent_crc(p_826->g_557.w, "p_826->g_557.w", print_hash_value);
    transparent_crc(p_826->g_625.s0, "p_826->g_625.s0", print_hash_value);
    transparent_crc(p_826->g_625.s1, "p_826->g_625.s1", print_hash_value);
    transparent_crc(p_826->g_625.s2, "p_826->g_625.s2", print_hash_value);
    transparent_crc(p_826->g_625.s3, "p_826->g_625.s3", print_hash_value);
    transparent_crc(p_826->g_625.s4, "p_826->g_625.s4", print_hash_value);
    transparent_crc(p_826->g_625.s5, "p_826->g_625.s5", print_hash_value);
    transparent_crc(p_826->g_625.s6, "p_826->g_625.s6", print_hash_value);
    transparent_crc(p_826->g_625.s7, "p_826->g_625.s7", print_hash_value);
    transparent_crc(p_826->g_625.s8, "p_826->g_625.s8", print_hash_value);
    transparent_crc(p_826->g_625.s9, "p_826->g_625.s9", print_hash_value);
    transparent_crc(p_826->g_625.sa, "p_826->g_625.sa", print_hash_value);
    transparent_crc(p_826->g_625.sb, "p_826->g_625.sb", print_hash_value);
    transparent_crc(p_826->g_625.sc, "p_826->g_625.sc", print_hash_value);
    transparent_crc(p_826->g_625.sd, "p_826->g_625.sd", print_hash_value);
    transparent_crc(p_826->g_625.se, "p_826->g_625.se", print_hash_value);
    transparent_crc(p_826->g_625.sf, "p_826->g_625.sf", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_826->g_793[i][j][k], "p_826->g_793[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_826->v_collective, "p_826->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 96; i++)
            transparent_crc(p_826->g_special_values[i + 96 * get_linear_group_id()], "p_826->g_special_values[i + 96 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 96; i++)
            transparent_crc(p_826->l_special_values[i], "p_826->l_special_values[i]", print_hash_value);
    transparent_crc(p_826->l_comm_values[get_linear_local_id()], "p_826->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_826->g_comm_values[get_linear_group_id() * 44 + get_linear_local_id()], "p_826->g_comm_values[get_linear_group_id() * 44 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
