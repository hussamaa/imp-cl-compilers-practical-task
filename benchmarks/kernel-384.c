// --atomics 96 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 87,8,6 -l 3,8,3
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

__constant uint32_t permutations[10][72] = {
{17,57,48,18,71,65,44,69,41,42,63,20,35,53,14,16,61,62,34,68,13,55,59,0,26,15,22,12,6,45,2,46,24,11,51,3,43,1,21,29,9,50,38,27,64,47,66,25,36,60,49,23,5,31,56,67,19,8,37,40,30,7,54,52,32,70,58,33,28,4,39,10}, // permutation 0
{45,71,58,21,37,47,54,22,20,49,5,60,2,50,68,14,69,39,13,44,8,46,41,23,53,25,57,28,0,59,12,48,15,63,55,64,67,65,11,9,52,29,27,24,35,31,16,18,30,42,32,6,61,70,33,43,10,17,56,7,36,51,62,40,3,4,26,66,19,1,38,34}, // permutation 1
{25,36,37,14,57,35,50,54,8,0,43,26,18,38,46,60,22,28,1,7,61,62,47,2,11,51,70,67,55,10,20,33,16,56,31,64,23,30,4,5,68,34,65,9,13,24,40,44,6,63,58,48,39,41,53,3,21,59,32,71,69,15,27,42,45,17,12,19,52,49,29,66}, // permutation 2
{42,19,53,43,67,32,37,46,58,59,15,68,55,10,52,23,56,25,30,69,13,14,50,20,64,9,61,51,47,57,5,70,63,7,54,26,65,16,41,34,3,45,17,0,2,71,28,27,36,29,22,31,44,49,1,38,60,39,40,21,48,11,24,66,6,12,4,18,8,62,33,35}, // permutation 3
{18,71,6,24,47,57,11,8,12,48,4,23,39,68,62,59,31,41,7,22,56,3,36,51,21,45,32,30,19,35,25,54,26,34,70,17,33,10,27,58,40,9,42,43,16,20,64,15,67,65,60,53,63,2,46,0,28,5,50,38,29,66,61,55,1,14,49,44,37,52,13,69}, // permutation 4
{23,37,38,46,15,61,58,8,10,39,33,59,4,66,5,64,50,6,19,69,67,28,54,48,3,56,57,0,9,32,68,27,47,11,40,25,34,45,2,13,43,44,52,26,60,17,31,20,42,41,51,24,1,62,22,36,65,29,7,70,21,18,30,63,14,53,12,55,16,71,49,35}, // permutation 5
{22,16,48,0,43,70,44,29,19,53,61,1,55,18,25,47,26,56,2,14,68,49,38,67,27,3,63,46,7,11,33,39,9,54,4,24,8,62,40,51,23,42,10,60,69,30,17,34,28,35,15,12,71,66,45,20,41,31,57,37,6,59,52,5,36,58,50,21,65,64,32,13}, // permutation 6
{43,34,32,39,56,11,3,10,20,38,6,30,40,55,18,49,47,67,61,58,24,21,68,29,57,48,37,54,19,27,64,15,16,28,51,59,60,42,13,14,52,22,5,8,45,62,65,44,33,69,23,70,26,7,36,46,66,1,4,41,63,25,35,0,31,9,50,71,53,2,12,17}, // permutation 7
{3,14,32,48,34,45,0,39,1,40,25,20,61,53,56,71,8,69,42,67,31,41,33,18,28,26,23,44,62,22,16,5,58,46,11,65,51,59,36,4,12,29,15,2,19,37,9,54,52,70,17,63,24,68,30,55,66,10,27,47,64,38,49,21,35,13,6,43,57,50,60,7}, // permutation 8
{35,37,52,42,15,31,33,56,2,58,1,67,48,69,34,55,51,12,8,16,13,36,9,68,45,11,6,17,38,27,3,60,50,7,46,57,71,53,64,24,30,70,20,61,29,21,40,32,39,63,54,18,4,44,43,22,14,41,19,28,25,65,0,62,49,23,26,47,5,66,10,59} // permutation 9
};

// Seed: 3919319277

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint16_t  f1;
   volatile int64_t  f2;
   volatile uint8_t  f3;
   int32_t  f4;
   volatile uint64_t  f5;
   volatile int64_t  f6;
   uint64_t  f7;
   uint64_t  f8;
};

struct S1 {
   int32_t  f0;
   uint16_t  f1;
};

struct S2 {
   volatile uint8_t  f0;
   uint16_t  f1;
   uint8_t  f2;
   volatile int32_t  f3;
   struct S0  f4;
   uint32_t  f5;
   volatile int64_t  f6;
   int32_t  f7;
   struct S0  f8;
};

struct S3 {
   int64_t  f0;
};

struct S4 {
    volatile VECTOR(int8_t, 16) g_8;
    VECTOR(int8_t, 4) g_34;
    VECTOR(int8_t, 2) g_35;
    VECTOR(int8_t, 4) g_36;
    uint8_t g_49;
    int64_t *g_68[7][6][6];
    int32_t g_70;
    struct S0 g_78;
    int16_t g_87;
    uint8_t g_88;
    VECTOR(int64_t, 8) g_95;
    uint32_t g_108;
    struct S1 g_230;
    VECTOR(uint8_t, 16) g_234;
    uint32_t g_249;
    VECTOR(int32_t, 2) g_257;
    struct S2 g_283[4];
    struct S2 *g_282;
    struct S2 g_286;
    volatile int64_t *g_299;
    int8_t *g_309[1];
    uint32_t g_312;
    int32_t g_323;
    volatile uint32_t g_330;
    volatile uint32_t *g_329;
    volatile uint32_t **g_328;
    int32_t *g_336;
    int8_t g_353;
    uint32_t g_366[9];
    struct S3 g_372;
    struct S3 *g_371[6][4];
    VECTOR(int8_t, 16) g_375;
    int64_t *g_380;
    volatile VECTOR(uint16_t, 2) g_396;
    VECTOR(uint64_t, 2) g_404;
    VECTOR(int16_t, 2) g_408;
    volatile struct S2 g_433;
    struct S0 g_457;
    volatile int32_t g_483[7][10];
    volatile uint64_t g_484[3][7];
    volatile struct S0 g_489;
    VECTOR(int32_t, 8) g_520;
    VECTOR(int16_t, 8) g_534;
    struct S2 g_550;
    volatile int32_t * volatile g_639;
    volatile int32_t * volatile * volatile g_638[6];
    int16_t g_653;
    volatile int32_t *g_691;
    volatile int32_t ** volatile g_690;
    VECTOR(uint8_t, 4) g_721;
    volatile VECTOR(uint16_t, 2) g_735;
    VECTOR(int64_t, 2) g_775;
    volatile VECTOR(int64_t, 8) g_776;
    VECTOR(int32_t, 8) g_869;
    struct S1 g_1080[3];
    struct S2 g_1081;
    struct S2 g_1082;
    volatile int32_t g_1120;
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
struct S1  func_1(struct S4 * p_1124);
int32_t  func_2(uint32_t  p_3, int16_t  p_4, int8_t  p_5, int32_t  p_6, struct S1  p_7, struct S4 * p_1124);
uint8_t  func_13(int16_t  p_14, struct S4 * p_1124);
int16_t  func_15(int64_t  p_16, uint64_t  p_17, uint16_t  p_18, struct S4 * p_1124);
uint32_t  func_21(int32_t  p_22, struct S3  p_23, struct S3  p_24, uint64_t  p_25, struct S4 * p_1124);
int32_t  func_37(int64_t * p_38, int64_t * p_39, int64_t * p_40, int64_t * p_41, int64_t * p_42, struct S4 * p_1124);
int64_t * func_43(uint8_t  p_44, uint32_t  p_45, int64_t * p_46, int32_t  p_47, int64_t  p_48, struct S4 * p_1124);
int64_t * func_55(uint64_t  p_56, int64_t * p_57, struct S4 * p_1124);
int32_t * func_58(int64_t * p_59, int16_t  p_60, int64_t * p_61, struct S4 * p_1124);
int64_t * func_62(int8_t  p_63, uint32_t  p_64, int32_t * p_65, uint32_t  p_66, struct S4 * p_1124);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1124->g_8 p_1124->g_comm_values p_1124->g_34 p_1124->g_35 p_1124->g_36 p_1124->g_49 p_1124->g_68 p_1124->g_88 p_1124->g_70 p_1124->g_78.f7 p_1124->g_95 p_1124->g_78.f1 p_1124->g_87 p_1124->g_230 p_1124->g_234 p_1124->g_249 p_1124->g_257 p_1124->g_282 p_1124->g_299 p_1124->g_286.f1 p_1124->g_309 p_1124->g_328 p_1124->g_336 p_1124->g_366 p_1124->g_380 p_1124->g_286.f5 p_1124->g_286.f8.f0 p_1124->g_283.f4.f4 p_1124->g_372 p_1124->g_283.f7 p_1124->g_283 p_1124->g_433 p_1124->g_457 p_1124->g_484 p_1124->g_489 p_1124->g_329 p_1124->g_330 p_1124->g_520 p_1124->g_286.f8.f2 p_1124->g_534 p_1124->g_550 p_1124->g_286.f8.f4 p_1124->g_78.f2 p_1124->g_638 p_1124->g_375 p_1124->g_78.f8 p_1124->g_653 p_1124->g_404 p_1124->g_690 p_1124->g_78.f4 p_1124->g_286.f4.f4 p_1124->g_721 p_1124->g_286.f4.f1 p_1124->g_735 p_1124->g_775 p_1124->g_776 p_1124->g_691 p_1124->g_483 p_1124->g_869 p_1124->g_286.f8.f7 p_1124->g_286.f2 p_1124->g_1080 p_1124->g_1081
 * writes: p_1124->l_comm_values p_1124->g_49 p_1124->g_88 p_1124->g_70 p_1124->g_108 p_1124->g_87 p_1124->g_230 p_1124->g_249 p_1124->g_78.f1 p_1124->g_282 p_1124->g_68 p_1124->g_257 p_1124->g_312 p_1124->g_323 p_1124->g_286.f4.f4 p_1124->g_328 p_1124->g_336 p_1124->g_283.f7 p_1124->g_366 p_1124->g_371 p_1124->g_78.f4 p_1124->g_309 p_1124->g_283 p_1124->g_484 p_1124->g_234 p_1124->g_520 p_1124->g_286.f8.f4 p_1124->g_286.f1 p_1124->g_691 p_1124->g_353 p_1124->g_286.f4.f7 p_1124->g_550.f7 p_1124->g_286.f4.f1 p_1124->g_483 p_1124->g_457.f4 p_1124->g_457.f7 p_1124->g_286.f2 p_1124->g_1082 p_1124->g_550.f4.f1 p_1124->g_286.f8.f7
 */
struct S1  func_1(struct S4 * p_1124)
{ /* block id: 4 */
    int64_t l_28 = 2L;
    int64_t *l_29[3][10][1];
    int32_t l_52 = 1L;
    uint16_t l_53 = 0UL;
    int8_t l_385 = 7L;
    struct S3 l_386 = {-1L};
    int8_t *l_1077 = (void*)0;
    int8_t *l_1078 = &p_1124->g_353;
    uint64_t l_1079 = 0x46E4AF1BAFDC0D14L;
    int32_t l_1111 = 0x09DEFCEDL;
    int32_t *l_1112 = (void*)0;
    int32_t *l_1113[2];
    uint64_t l_1114 = 0x2AACFDC4DFC67EA9L;
    struct S1 l_1119[6][4][5] = {{{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}}},{{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}}},{{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}}},{{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}}},{{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}}},{{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}},{{0x103D212EL,65535UL},{-1L,2UL},{0x4B45A089L,5UL},{0x0755249FL,65532UL},{-1L,2UL}}}};
    uint32_t l_1121 = 0xD558F98AL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 1; k++)
                l_29[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 2; i++)
        l_1113[i] = &p_1124->g_1082.f7;
    l_1111 ^= func_2((((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_1124->g_8.s76)), ((*l_1078) = (safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(0x31L, func_13(func_15(((safe_add_func_uint8_t_u_u((func_21((safe_mul_func_uint16_t_u_u((p_1124->g_comm_values[p_1124->tid] , (((p_1124->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1124->tid, 72))] = (p_1124->g_8.sf != l_28)) > (l_385 = (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(p_1124->g_34.yx)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(p_1124->g_35.yxyyxyxx)).s72, ((VECTOR(int8_t, 16))(p_1124->g_36.ywzwxwyzwwyzzxwy)).s09))).xxyxyyxx)).s37))))).xxxx, (int8_t)(func_37(func_43((((!(~((p_1124->g_34.w == 4294967295UL) | (p_1124->g_49 ^= l_28)))) <= (safe_rshift_func_uint8_t_u_u((0xF2L != ((l_52 = (+18446744073709551615UL)) , l_53)), p_1124->g_35.y))) , p_1124->g_49), p_1124->g_comm_values[p_1124->tid], &l_28, p_1124->g_comm_values[p_1124->tid], p_1124->g_35.y, p_1124), &l_28, p_1124->g_380, p_1124->g_380, p_1124->g_380, p_1124) == p_1124->g_286.f5), (int8_t)l_28))).zxxyzyxyzxyzywzx, ((VECTOR(int8_t, 16))(0x12L))))).s30))).odd, l_28)), l_28)))) == p_1124->g_286.f8.f0)), p_1124->g_283[3].f4.f4)), p_1124->g_372, l_386, p_1124->g_36.x, p_1124) ^ l_28), p_1124->g_534.s1)) < GROUP_DIVERGE(1, 1)), l_28, l_53, p_1124), p_1124))), p_1124->g_34.y))), ((VECTOR(int8_t, 2))(0L)), l_28, 0L, 1L)).s5552213365024700, (int8_t)l_385))).se > p_1124->g_721.z), p_1124->g_35.x, l_1079, p_1124->g_457.f0, p_1124->g_1080[0], p_1124);
    --l_1114;
    for (p_1124->g_286.f8.f7 = 0; (p_1124->g_286.f8.f7 < 27); p_1124->g_286.f8.f7 = safe_add_func_int8_t_s_s(p_1124->g_286.f8.f7, 7))
    { /* block id: 533 */
        (*p_1124->g_691) = 0x2BF7D805L;
        (*p_1124->g_691) = (**p_1124->g_690);
        return l_1119[3][3][2];
    }
    l_1121++;
    return l_1119[4][3][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_1081 p_1124->g_550.f4.f1 p_1124->g_336 p_1124->g_283.f7
 * writes: p_1124->g_1082 p_1124->g_550.f4.f1 p_1124->g_283.f7
 */
int32_t  func_2(uint32_t  p_3, int16_t  p_4, int8_t  p_5, int32_t  p_6, struct S1  p_7, struct S4 * p_1124)
{ /* block id: 518 */
    VECTOR(int64_t, 8) l_1093 = (VECTOR(int64_t, 8))(0x23B72312E4A47477L, (VECTOR(int64_t, 4))(0x23B72312E4A47477L, (VECTOR(int64_t, 2))(0x23B72312E4A47477L, 0x53C8008D251992B9L), 0x53C8008D251992B9L), 0x53C8008D251992B9L, 0x23B72312E4A47477L, 0x53C8008D251992B9L);
    int32_t l_1107[5];
    uint8_t l_1108[2];
    int i;
    for (i = 0; i < 5; i++)
        l_1107[i] = 2L;
    for (i = 0; i < 2; i++)
        l_1108[i] = 0xC1L;
    p_1124->g_1082 = p_1124->g_1081;
    for (p_1124->g_550.f4.f1 = 6; (p_1124->g_550.f4.f1 != 17); p_1124->g_550.f4.f1++)
    { /* block id: 522 */
        int8_t l_1085 = 0x36L;
        int32_t l_1098 = 1L;
        int32_t *l_1103 = (void*)0;
        int32_t *l_1104 = &p_1124->g_550.f7;
        int32_t *l_1105 = &p_1124->g_286.f7;
        int32_t *l_1106[4] = {&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70};
        int i;
        (*p_1124->g_336) ^= (((-1L) > ((+(l_1085 ^= p_5)) >= (p_4 & (safe_lshift_func_uint8_t_u_s(0UL, 6))))) < (((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(p_5, (safe_unary_minus_func_int16_t_s((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_1093.s7671)).wzzxxwwwzzyzywyz)).se >= 0x682598034CC477B4L))))), (+(p_7.f1 = (safe_sub_func_uint16_t_u_u((!(safe_mod_func_int32_t_s_s((l_1098 >= 0x8DL), (safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(p_5, (-1L))), l_1093.s2))))), p_7.f1)))))) != 1UL) & p_3));
        ++l_1108[0];
    }
    return l_1107[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_328 p_1124->g_329 p_1124->g_78.f2 p_1124->g_336 p_1124->g_283.f7 p_1124->g_638 p_1124->g_375 p_1124->g_78.f8 p_1124->g_35 p_1124->g_36 p_1124->g_70 p_1124->g_653 p_1124->g_404 p_1124->g_286.f1 p_1124->g_690 p_1124->g_283.f4.f1 p_1124->g_78.f4 p_1124->g_286.f4.f4 p_1124->g_721 p_1124->g_286.f4.f1 p_1124->g_735 p_1124->g_489.f4 p_1124->g_550.f8.f7 p_1124->g_330 p_1124->g_775 p_1124->g_776 p_1124->g_550.f7 p_1124->g_433.f8.f4 p_1124->g_691 p_1124->g_483 p_1124->g_457.f4 p_1124->g_457.f7 p_1124->g_433.f4.f7 p_1124->g_457.f8 p_1124->g_433.f1 p_1124->g_869 p_1124->g_283.f2 p_1124->g_286.f8.f7 p_1124->g_286.f2
 * writes: p_1124->g_283.f7 p_1124->g_70 p_1124->g_87 p_1124->g_286.f1 p_1124->g_691 p_1124->g_78.f4 p_1124->g_286.f4.f4 p_1124->g_353 p_1124->g_286.f4.f7 p_1124->g_550.f7 p_1124->g_286.f4.f1 p_1124->g_283.f2 p_1124->g_483 p_1124->g_457.f4 p_1124->g_457.f7 p_1124->g_312 p_1124->g_283.f4.f1 p_1124->g_286.f2
 */
uint8_t  func_13(int16_t  p_14, struct S4 * p_1124)
{ /* block id: 252 */
    int32_t *l_636 = &p_1124->g_286.f8.f4;
    int32_t **l_635 = &l_636;
    int32_t l_644 = 0x4475973FL;
    struct S1 l_656 = {0x353CD599L,65535UL};
    uint32_t *l_659 = &p_1124->g_312;
    uint32_t **l_658[6] = {&l_659,&l_659,&l_659,&l_659,&l_659,&l_659};
    uint32_t ***l_657[6][3] = {{&l_658[1],&l_658[4],&l_658[1]},{&l_658[1],&l_658[4],&l_658[1]},{&l_658[1],&l_658[4],&l_658[1]},{&l_658[1],&l_658[4],&l_658[1]},{&l_658[1],&l_658[4],&l_658[1]},{&l_658[1],&l_658[4],&l_658[1]}};
    VECTOR(int8_t, 4) l_669 = (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 1L), 1L);
    int64_t *l_676 = (void*)0;
    int32_t l_685 = (-9L);
    int8_t **l_740 = (void*)0;
    int32_t l_761 = 0x4946D64AL;
    int32_t l_762 = 0L;
    VECTOR(int32_t, 16) l_767 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), (-1L)), (-1L)), (-1L), (-3L), (-1L), (VECTOR(int32_t, 2))((-3L), (-1L)), (VECTOR(int32_t, 2))((-3L), (-1L)), (-3L), (-1L), (-3L), (-1L));
    VECTOR(int32_t, 16) l_862 = (VECTOR(int32_t, 16))(0x0CF5C175L, (VECTOR(int32_t, 4))(0x0CF5C175L, (VECTOR(int32_t, 2))(0x0CF5C175L, 0x3FE5DBE0L), 0x3FE5DBE0L), 0x3FE5DBE0L, 0x0CF5C175L, 0x3FE5DBE0L, (VECTOR(int32_t, 2))(0x0CF5C175L, 0x3FE5DBE0L), (VECTOR(int32_t, 2))(0x0CF5C175L, 0x3FE5DBE0L), 0x0CF5C175L, 0x3FE5DBE0L, 0x0CF5C175L, 0x3FE5DBE0L);
    VECTOR(int32_t, 4) l_868 = (VECTOR(int32_t, 4))(0x3AA61B90L, (VECTOR(int32_t, 2))(0x3AA61B90L, 1L), 1L);
    VECTOR(int32_t, 16) l_982 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7685E938L), 0x7685E938L), 0x7685E938L, 1L, 0x7685E938L, (VECTOR(int32_t, 2))(1L, 0x7685E938L), (VECTOR(int32_t, 2))(1L, 0x7685E938L), 1L, 0x7685E938L, 1L, 0x7685E938L);
    int32_t *l_1070 = &p_1124->g_286.f7;
    int32_t *l_1071[2];
    int32_t l_1072 = (-1L);
    uint8_t l_1073 = 0x06L;
    int8_t l_1076 = 3L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1071[i] = &p_1124->g_283[3].f7;
    if (((void*)0 == (*p_1124->g_328)))
    { /* block id: 253 */
        int32_t l_630 = 1L;
        int32_t ***l_637[1][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        struct S3 l_641 = {6L};
        int8_t *l_645 = (void*)0;
        int8_t *l_646 = (void*)0;
        int8_t *l_647 = (void*)0;
        int8_t *l_648[3];
        int32_t l_649 = 6L;
        int32_t *l_650 = &l_644;
        uint32_t ***l_660 = &l_658[1];
        int16_t *l_663 = (void*)0;
        int16_t *l_664 = &p_1124->g_87;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_648[i] = (void*)0;
        if ((atomic_inc(&p_1124->g_atomic_input[96 * get_linear_group_id() + 1]) == 3))
        { /* block id: 255 */
            VECTOR(int32_t, 16) l_560 = (VECTOR(int32_t, 16))(0x5E546F73L, (VECTOR(int32_t, 4))(0x5E546F73L, (VECTOR(int32_t, 2))(0x5E546F73L, 0x0F8B0267L), 0x0F8B0267L), 0x0F8B0267L, 0x5E546F73L, 0x0F8B0267L, (VECTOR(int32_t, 2))(0x5E546F73L, 0x0F8B0267L), (VECTOR(int32_t, 2))(0x5E546F73L, 0x0F8B0267L), 0x5E546F73L, 0x0F8B0267L, 0x5E546F73L, 0x0F8B0267L);
            uint32_t l_561 = 0UL;
            int8_t l_562[4][2] = {{0x26L,0x26L},{0x26L,0x26L},{0x26L,0x26L},{0x26L,0x26L}};
            int32_t *l_563 = (void*)0;
            int32_t *l_564 = (void*)0;
            uint64_t l_565 = 0x2B86278AFAC0C117L;
            VECTOR(int32_t, 16) l_626 = (VECTOR(int32_t, 16))(0x67C36757L, (VECTOR(int32_t, 4))(0x67C36757L, (VECTOR(int32_t, 2))(0x67C36757L, 0x0317E2ABL), 0x0317E2ABL), 0x0317E2ABL, 0x67C36757L, 0x0317E2ABL, (VECTOR(int32_t, 2))(0x67C36757L, 0x0317E2ABL), (VECTOR(int32_t, 2))(0x67C36757L, 0x0317E2ABL), 0x67C36757L, 0x0317E2ABL, 0x67C36757L, 0x0317E2ABL);
            uint8_t l_627 = 1UL;
            int i, j;
            l_562[3][0] ^= (l_561 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_560.s6a053d3e26623071)).see42)).yyzwwwxzxyyyzxwz)).odd, ((VECTOR(int32_t, 2))(1L, (-5L))).xxyxxxxx))))).s4);
            l_564 = l_563;
            if (l_565)
            { /* block id: 259 */
                int64_t l_566 = 0x2D2236D09B82E9A4L;
                int64_t l_567 = 0x3A8D58D306974B17L;
                uint32_t l_568 = 9UL;
                struct S1 l_572 = {0L,7UL};
                struct S1 *l_571[4][7][8] = {{{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572}},{{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572}},{{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572}},{{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572},{&l_572,&l_572,&l_572,&l_572,(void*)0,(void*)0,&l_572,&l_572}}};
                VECTOR(int32_t, 2) l_574 = (VECTOR(int32_t, 2))(0x6E339DACL, 0x576D5AB3L);
                int32_t *l_573 = (void*)0;
                uint32_t l_575 = 0UL;
                int32_t l_576[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_576[i] = (-9L);
                --l_568;
                l_571[3][6][5] = (void*)0;
                l_563 = (l_573 = (void*)0);
                if ((l_575 , l_576[0]))
                { /* block id: 264 */
                    struct S3 l_577 = {-6L};
                    struct S3 l_578 = {-3L};
                    struct S3 l_583 = {0L};
                    struct S2 l_586 = {1UL,0UL,253UL,0x19E26992L,{0xA9B1169DL,0xC59FL,9L,1UL,-9L,0x0FC08A76A3B66CA0L,0x49521CA48E8CBC47L,0x1689C885DDA3FBDFL,0UL},0xABEA551BL,0x04008ABCCD425197L,0x620E7058L,{4294967295UL,0xB46DL,1L,0x22L,0x7C3F2F27L,0xA43FB615D574EA00L,0x0D033DCA7788247EL,0xAEB027B7BED18C38L,0xD236094FBFE08509L}};/* VOLATILE GLOBAL l_586 */
                    struct S2 *l_585 = &l_586;
                    struct S2 **l_584[1][9] = {{&l_585,&l_585,&l_585,&l_585,&l_585,&l_585,&l_585,&l_585,&l_585}};
                    struct S2 **l_587 = &l_585;
                    int i, j;
                    l_578 = l_577;
                    for (l_578.f0 = 26; (l_578.f0 < (-5)); l_578.f0 = safe_sub_func_int8_t_s_s(l_578.f0, 1))
                    { /* block id: 268 */
                        struct S2 *l_582 = (void*)0;
                        struct S2 **l_581 = &l_582;
                        l_581 = (void*)0;
                    }
                    l_587 = (l_583 , l_584[0][6]);
                    for (l_586.f4.f0 = 0; (l_586.f4.f0 <= 5); ++l_586.f4.f0)
                    { /* block id: 274 */
                        uint64_t l_590 = 1UL;
                        VECTOR(uint32_t, 4) l_591 = (VECTOR(uint32_t, 4))(0x0E6268D2L, (VECTOR(uint32_t, 2))(0x0E6268D2L, 0xE3B93081L), 0xE3B93081L);
                        VECTOR(int32_t, 2) l_592 = (VECTOR(int32_t, 2))(0L, 0L);
                        int32_t l_593[3][3][2] = {{{1L,0x5DB6D1B9L},{1L,0x5DB6D1B9L},{1L,0x5DB6D1B9L}},{{1L,0x5DB6D1B9L},{1L,0x5DB6D1B9L},{1L,0x5DB6D1B9L}},{{1L,0x5DB6D1B9L},{1L,0x5DB6D1B9L},{1L,0x5DB6D1B9L}}};
                        struct S2 l_594 = {1UL,0UL,0UL,0x48671DE8L,{4294967292UL,1UL,-10L,0x13L,6L,0UL,0x586FF5C19F93AC91L,0xF906E750E502A851L,5UL},0x1BDE87F8L,1L,3L,{0x1CCCA1C8L,0xB625L,0x203BB09FC577ABD9L,0xBBL,0x3A363DD6L,0x77E7278FCFAB9B45L,4L,8UL,3UL}};/* VOLATILE GLOBAL l_594 */
                        uint8_t l_595 = 0x7EL;
                        int i, j, k;
                        l_560.s8 |= l_590;
                        l_593[2][0][1] |= (l_560.s3 = (((VECTOR(uint32_t, 16))(l_591.xzwwzywwyyyyyxyz)).se , (l_592.x = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_592.xyyyyxxyxxxyyxyy)).sa7)).even)));
                        l_594 = l_594;
                        l_574.x = l_595;
                    }
                }
                else
                { /* block id: 282 */
                    int32_t l_596[4] = {1L,1L,1L,1L};
                    int i;
                    for (l_596[2] = (-12); (l_596[2] <= (-26)); --l_596[2])
                    { /* block id: 285 */
                        struct S0 l_599 = {0x6C2BFAECL,0x797DL,-1L,0x8CL,-1L,1UL,1L,0x2BE95A58CEE78C21L,3UL};/* VOLATILE GLOBAL l_599 */
                        int8_t l_600 = 2L;
                        VECTOR(uint32_t, 4) l_601 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x93C79A13L), 0x93C79A13L);
                        int8_t l_602 = 1L;
                        struct S1 l_603 = {0x75774A3AL,65535UL};
                        struct S1 l_604 = {-7L,0xD9D4L};
                        struct S1 l_605[3][7][6] = {{{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}}},{{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}}},{{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}},{{1L,0UL},{0x44537636L,0xBBE2L},{-2L,65535UL},{0x64F991A5L,0xBDC7L},{-1L,65528UL},{0L,1UL}}}};
                        uint64_t l_606 = 4UL;
                        int i, j, k;
                        l_564 = (l_563 = (((VECTOR(uint32_t, 2))(0UL, 0x2FB18212L)).lo , (void*)0));
                        l_605[1][0][3] = (l_599 , (l_604 = (l_603 = (l_600 , ((l_602 = ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_601.yxxx)).zxwzzwyzwywyyzwz)).s1) , l_603)))));
                        l_606--;
                    }
                    l_564 = (l_573 = (void*)0);
                }
            }
            else
            { /* block id: 297 */
                VECTOR(int64_t, 4) l_609 = (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 1L), 1L);
                uint64_t l_610[8];
                int16_t l_611 = 1L;
                VECTOR(int64_t, 2) l_612 = (VECTOR(int64_t, 2))(0x185532D833311799L, 0x23A68DCACFF773F5L);
                int8_t l_613 = 0x7BL;
                int64_t l_614 = 0L;
                int8_t l_615 = 0x0FL;
                VECTOR(int64_t, 16) l_616 = (VECTOR(int64_t, 16))(0x1FEB26F3BCE7923FL, (VECTOR(int64_t, 4))(0x1FEB26F3BCE7923FL, (VECTOR(int64_t, 2))(0x1FEB26F3BCE7923FL, 0x310C6C2AAE000312L), 0x310C6C2AAE000312L), 0x310C6C2AAE000312L, 0x1FEB26F3BCE7923FL, 0x310C6C2AAE000312L, (VECTOR(int64_t, 2))(0x1FEB26F3BCE7923FL, 0x310C6C2AAE000312L), (VECTOR(int64_t, 2))(0x1FEB26F3BCE7923FL, 0x310C6C2AAE000312L), 0x1FEB26F3BCE7923FL, 0x310C6C2AAE000312L, 0x1FEB26F3BCE7923FL, 0x310C6C2AAE000312L);
                uint8_t l_617[5][9][5] = {{{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL}},{{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL}},{{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL}},{{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL}},{{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL},{0x30L,0x2BL,0x44L,0x21L,0UL}}};
                int16_t l_618 = (-3L);
                uint16_t l_619 = 0x1161L;
                uint64_t l_624 = 18446744073709551615UL;
                uint32_t l_625 = 4294967286UL;
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_610[i] = 1UL;
                if ((((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_609.xyzywzxw)), l_610[4], 0x676B701ECEC2DE4AL, l_611, (l_609.z = (l_614 = (l_613 = ((VECTOR(int64_t, 16))(l_612.yxxyxyxyyyyxyyxy)).s6))), 4L, l_615, 1L, 0x38E39360C3DA7BB0L)).s1085, ((VECTOR(int64_t, 8))(l_616.s4a43b6d0)).odd))).z , ((l_618 = l_617[1][2][2]) , l_619)))
                { /* block id: 302 */
                    int32_t l_621 = (-9L);
                    int32_t *l_620 = &l_621;
                    l_564 = l_620;
                }
                else
                { /* block id: 304 */
                    uint32_t l_622[9][6][4] = {{{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL}},{{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL}},{{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL}},{{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL}},{{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL}},{{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL}},{{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL}},{{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL}},{{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL},{4294967295UL,6UL,0x276EF02CL,0xDDAD8A0EL}}};
                    uint32_t l_623 = 1UL;
                    int i, j, k;
                    l_560.sd ^= l_622[6][4][2];
                    l_623 ^= 0x67D2B839L;
                }
                l_625 &= l_624;
            }
            l_627++;
            unsigned int result = 0;
            result += l_560.sf;
            result += l_560.se;
            result += l_560.sd;
            result += l_560.sc;
            result += l_560.sb;
            result += l_560.sa;
            result += l_560.s9;
            result += l_560.s8;
            result += l_560.s7;
            result += l_560.s6;
            result += l_560.s5;
            result += l_560.s4;
            result += l_560.s3;
            result += l_560.s2;
            result += l_560.s1;
            result += l_560.s0;
            result += l_561;
            int l_562_i0, l_562_i1;
            for (l_562_i0 = 0; l_562_i0 < 4; l_562_i0++) {
                for (l_562_i1 = 0; l_562_i1 < 2; l_562_i1++) {
                    result += l_562[l_562_i0][l_562_i1];
                }
            }
            result += l_565;
            result += l_626.sf;
            result += l_626.se;
            result += l_626.sd;
            result += l_626.sc;
            result += l_626.sb;
            result += l_626.sa;
            result += l_626.s9;
            result += l_626.s8;
            result += l_626.s7;
            result += l_626.s6;
            result += l_626.s5;
            result += l_626.s4;
            result += l_626.s3;
            result += l_626.s2;
            result += l_626.s1;
            result += l_626.s0;
            result += l_627;
            atomic_add(&p_1124->g_special_values[96 * get_linear_group_id() + 1], result);
        }
        else
        { /* block id: 311 */
            (1 + 1);
        }
        (*p_1124->g_336) &= (l_630 & p_1124->g_78.f2);
        p_1124->g_70 |= ((VECTOR(int32_t, 16))(((*l_650) = (safe_div_func_int8_t_s_s((l_649 = (((VECTOR(uint64_t, 16))(0UL, (((safe_mul_func_int32_t_s_s((((VECTOR(uint32_t, 4))(0x858EFE88L, ((l_635 = l_635) == p_1124->g_638[2]), 7UL, 1UL)).z < ((*p_1124->g_336) ^= 1L)), ((safe_unary_minus_func_uint8_t_u(((l_641 , (p_14 ^ ((safe_rshift_func_uint8_t_u_u((p_14 >= ((p_14 >= ((((l_630 && (p_14 && p_14)) || p_14) , 0xA2L) ^ 0xFAL)) ^ p_14)), 2)) , p_1124->g_375.s0))) >= p_1124->g_78.f8))) == l_641.f0))) > l_630) <= 0UL), 0UL, l_644, ((VECTOR(uint64_t, 4))(6UL)), p_1124->g_35.x, 18446744073709551609UL, ((VECTOR(uint64_t, 2))(18446744073709551611UL)), ((VECTOR(uint64_t, 4))(0x826ED1C01D6388C9L)))).s5 < l_630)), p_1124->g_36.x))), ((VECTOR(int32_t, 4))(0x149B40E5L)), (-1L), 9L, 6L, ((VECTOR(int32_t, 4))(1L)), 0x10369856L, (*p_1124->g_336), 7L, (-1L))).s9;
        (*p_1124->g_336) &= (l_644 > ((safe_add_func_int32_t_s_s(p_1124->g_653, ((safe_sub_func_int16_t_s_s(((*l_664) = ((*l_650) | (((l_656 , l_657[5][0]) != (l_660 = (void*)0)) <= (safe_mul_func_int16_t_s_s(((void*)0 != (*l_635)), 9UL))))), p_14)) <= FAKE_DIVERGE(p_1124->group_0_offset, get_group_id(0), 10)))) == GROUP_DIVERGE(2, 1)));
    }
    else
    { /* block id: 323 */
        struct S3 l_670 = {0x78E5175941960F72L};
        int32_t **l_673[4];
        int32_t ***l_674 = (void*)0;
        int32_t ***l_675 = &l_673[2];
        uint64_t *l_677 = &p_1124->g_286.f4.f7;
        uint64_t **l_678 = &l_677;
        int64_t *l_679 = (void*)0;
        int64_t *l_680 = (void*)0;
        int64_t *l_681 = (void*)0;
        int64_t *l_682 = (void*)0;
        int64_t *l_683 = (void*)0;
        int64_t *l_684[3][4][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_673[i] = (void*)0;
        l_685 = ((*p_1124->g_336) = (p_1124->g_404.x || (safe_div_func_uint64_t_u_u((((void*)0 != &p_1124->g_639) && (safe_lshift_func_uint8_t_u_s(0UL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_669.zxwywyxxzxyyyyzw)).sbe19)).x))), (l_644 &= ((l_670 , (!0x54L)) > (((((*l_678) = l_677) != l_676) <= p_14) & p_14)))))));
        for (p_1124->g_286.f1 = (-1); (p_1124->g_286.f1 > 1); ++p_1124->g_286.f1)
        { /* block id: 331 */
            int32_t l_688 = 0x17FEF184L;
            int32_t l_689 = 0x63C3B5D6L;
            l_689 |= l_688;
            (*p_1124->g_690) = &p_1124->g_483[4][3];
            return p_1124->g_283[3].f4.f1;
        }
        return l_685;
    }
    for (p_1124->g_78.f4 = 0; (p_1124->g_78.f4 != (-15)); p_1124->g_78.f4--)
    { /* block id: 340 */
        VECTOR(uint32_t, 16) l_718 = (VECTOR(uint32_t, 16))(9UL, (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0UL), 0UL), 0UL, 9UL, 0UL, (VECTOR(uint32_t, 2))(9UL, 0UL), (VECTOR(uint32_t, 2))(9UL, 0UL), 9UL, 0UL, 9UL, 0UL);
        int32_t l_754 = (-5L);
        int32_t l_764 = 0x4701D086L;
        int32_t l_768[4][8] = {{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L}};
        struct S3 **l_789 = (void*)0;
        VECTOR(uint32_t, 8) l_822 = (VECTOR(uint32_t, 8))(0x04C6C48BL, (VECTOR(uint32_t, 4))(0x04C6C48BL, (VECTOR(uint32_t, 2))(0x04C6C48BL, 1UL), 1UL), 1UL, 0x04C6C48BL, 1UL);
        VECTOR(uint8_t, 8) l_865 = (VECTOR(uint8_t, 8))(0xF1L, (VECTOR(uint8_t, 4))(0xF1L, (VECTOR(uint8_t, 2))(0xF1L, 0xCCL), 0xCCL), 0xCCL, 0xF1L, 0xCCL);
        uint8_t *l_880 = &p_1124->g_286.f2;
        VECTOR(int64_t, 4) l_977 = (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 2L), 2L);
        int i, j;
        for (p_1124->g_286.f4.f4 = 1; (p_1124->g_286.f4.f4 <= 15); ++p_1124->g_286.f4.f4)
        { /* block id: 343 */
            int8_t l_731[5] = {0x1EL,0x1EL,0x1EL,0x1EL,0x1EL};
            int32_t l_752 = 0L;
            int32_t l_755 = 0L;
            int32_t l_756[6][8][5];
            int32_t l_802 = 0x77C7F040L;
            struct S3 **l_803 = &p_1124->g_371[2][1];
            uint32_t l_804 = 0UL;
            int32_t l_812 = 0x749FEC5EL;
            int32_t l_821 = 0x5B60EC87L;
            uint8_t l_841 = 0xB5L;
            int32_t l_850 = 2L;
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 8; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_756[i][j][k] = 0x7027C251L;
                }
            }
            for (l_685 = 3; (l_685 > (-27)); --l_685)
            { /* block id: 346 */
                int8_t *l_714 = (void*)0;
                int8_t *l_715 = &p_1124->g_353;
                int8_t *l_716 = (void*)0;
                int8_t *l_717[2][10][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                uint64_t *l_719[7][7] = {{&p_1124->g_286.f8.f7,&p_1124->g_283[3].f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_283[3].f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_286.f8.f7},{&p_1124->g_286.f8.f7,&p_1124->g_283[3].f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_283[3].f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_286.f8.f7},{&p_1124->g_286.f8.f7,&p_1124->g_283[3].f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_283[3].f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_286.f8.f7},{&p_1124->g_286.f8.f7,&p_1124->g_283[3].f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_283[3].f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_286.f8.f7},{&p_1124->g_286.f8.f7,&p_1124->g_283[3].f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_283[3].f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_286.f8.f7},{&p_1124->g_286.f8.f7,&p_1124->g_283[3].f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_283[3].f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_286.f8.f7},{&p_1124->g_286.f8.f7,&p_1124->g_283[3].f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_283[3].f8.f7,&p_1124->g_286.f8.f7,&p_1124->g_286.f8.f7}};
                VECTOR(uint8_t, 16) l_720 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 6UL), 6UL), 6UL, 1UL, 6UL, (VECTOR(uint8_t, 2))(1UL, 6UL), (VECTOR(uint8_t, 2))(1UL, 6UL), 1UL, 6UL, 1UL, 6UL);
                int32_t *l_726 = (void*)0;
                int32_t *l_727 = (void*)0;
                int32_t *l_728 = (void*)0;
                int32_t *l_729 = &p_1124->g_550.f7;
                int32_t *l_730 = &p_1124->g_70;
                int32_t l_758[4][2][6] = {{{0x36DB63E2L,0x36DB63E2L,4L,(-7L),1L,(-7L)},{0x36DB63E2L,0x36DB63E2L,4L,(-7L),1L,(-7L)}},{{0x36DB63E2L,0x36DB63E2L,4L,(-7L),1L,(-7L)},{0x36DB63E2L,0x36DB63E2L,4L,(-7L),1L,(-7L)}},{{0x36DB63E2L,0x36DB63E2L,4L,(-7L),1L,(-7L)},{0x36DB63E2L,0x36DB63E2L,4L,(-7L),1L,(-7L)}},{{0x36DB63E2L,0x36DB63E2L,4L,(-7L),1L,(-7L)},{0x36DB63E2L,0x36DB63E2L,4L,(-7L),1L,(-7L)}}};
                int8_t l_765 = (-5L);
                int32_t *l_825 = &l_755;
                int32_t *l_826 = (void*)0;
                int32_t *l_827 = &l_802;
                int32_t *l_828 = &l_756[4][2][2];
                int32_t *l_829 = &l_761;
                int32_t *l_830 = &l_756[4][2][2];
                int32_t *l_831 = &p_1124->g_550.f7;
                int32_t *l_832 = (void*)0;
                int32_t *l_833 = &p_1124->g_70;
                int32_t *l_834 = &l_758[0][0][1];
                int32_t *l_835 = (void*)0;
                int32_t *l_836 = &l_768[3][1];
                int32_t *l_837 = &p_1124->g_70;
                int32_t *l_838 = (void*)0;
                int32_t *l_839 = (void*)0;
                int32_t *l_840[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_840[i] = &p_1124->g_286.f7;
                if ((safe_div_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((l_731[2] = ((safe_lshift_func_int8_t_s_s(p_14, 2)) < (p_14 != (safe_add_func_uint32_t_u_u(0x04803C05L, (safe_lshift_func_int8_t_s_u((((*p_1124->g_336) ^= ((safe_mod_func_int32_t_s_s(p_14, (~(safe_mul_func_int8_t_s_s((((*l_715) = ((void*)0 != &p_1124->g_638[3])) == (l_718.s3 = (-9L))), ((-7L) | (p_1124->g_286.f4.f7 = ((VECTOR(uint64_t, 2))(1UL, 1UL)).hi))))))) && (((VECTOR(uint8_t, 4))(l_720.s0888)).x ^ ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(p_1124->g_721.zwywyyyzwwwzxywy)).sb5b7)).zxwyywzy)).s3))) && ((*l_730) = ((*l_729) = (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((((void*)0 == l_659) >= 0x67L), 0L)), p_14))))), 7))))))), 1)) <= FAKE_DIVERGE(p_1124->group_1_offset, get_group_id(1), 10)), p_14)))
                { /* block id: 354 */
                    uint16_t *l_732 = &p_1124->g_286.f4.f1;
                    (*l_730) = ((--(*l_732)) & ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_1124->g_735.yyxyxyxxyyxxyyyx)).odd)).s3);
                }
                else
                { /* block id: 357 */
                    uint8_t *l_745 = (void*)0;
                    uint8_t *l_746 = (void*)0;
                    uint8_t *l_747 = &p_1124->g_283[3].f2;
                    int32_t l_753 = 0x63ABFCD9L;
                    int32_t l_757 = 1L;
                    int32_t l_759 = 0x3D79CEDEL;
                    int32_t l_760 = 2L;
                    int32_t l_763 = 0x0B2791F1L;
                    int32_t l_766 = 0x3BA29B26L;
                    int32_t l_769 = (-1L);
                    uint8_t l_770 = 0x8DL;
                    VECTOR(int64_t, 4) l_777 = (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0x5FA3E8CF075019B1L), 0x5FA3E8CF075019B1L);
                    int32_t l_820 = 0x0B6A2E56L;
                    int i;
                    if (((((((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 4))((-1L), (-9L), 0x5F90A64FL, 0x63F9C270L)).odd, ((VECTOR(uint32_t, 4))(5UL, ((VECTOR(uint32_t, 2))(0UL, 0x80C4A551L)), 0xAFED6E62L)).lo))).odd & (safe_mod_func_uint16_t_u_u(p_1124->g_489.f4, p_14))) < (l_731[1] < 0x61D97FC66A9810F3L)) <= ((*l_747) = (p_1124->g_550.f8.f7 , (((((void*)0 == l_740) <= ((safe_rshift_func_int8_t_s_u(0L, 7)) > ((((safe_mod_func_uint32_t_u_u(0xB83F9057L, l_731[2])) & p_14) >= l_718.sd) , p_14))) , (void*)0) != &p_1124->g_68[1][5][5])))) & p_14))
                    { /* block id: 359 */
                        int32_t *l_748 = (void*)0;
                        int32_t *l_749 = &p_1124->g_286.f7;
                        int32_t *l_750 = &l_644;
                        int32_t *l_751[9][3][4] = {{{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7}},{{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7}},{{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7}},{{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7}},{{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7}},{{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7}},{{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7}},{{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7}},{{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7},{&p_1124->g_286.f7,&l_685,&l_644,&p_1124->g_286.f7}}};
                        uint16_t *l_788 = &p_1124->g_286.f8.f1;
                        struct S3 ***l_790 = &l_789;
                        uint8_t l_801 = 1UL;
                        int64_t *l_805 = (void*)0;
                        int64_t *l_806 = (void*)0;
                        int64_t *l_807 = (void*)0;
                        int64_t *l_808 = (void*)0;
                        int64_t *l_809 = (void*)0;
                        int64_t *l_810 = (void*)0;
                        int16_t *l_811 = (void*)0;
                        int i, j, k;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1124->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 72)), permutations[(safe_mod_func_uint32_t_u_u(((*l_730) = (**p_1124->g_328)), 10))][(safe_mod_func_uint32_t_u_u(p_1124->tid, 72))]));
                        l_770--;
                        (*l_750) = 1L;
                        (*p_1124->g_691) = (((l_812 |= ((safe_rshift_func_uint8_t_u_s(((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 16))(p_1124->g_775.yyxxyxyxyyxyyyxx)).s3e4e, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(p_1124->g_776.s72)), 0x608F8A2292CE4A45L, ((((l_755 = ((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_777.xx)).xxyyyxyxyyxxyyyx)).s9e1f)).x , (safe_mod_func_int32_t_s_s((l_768[3][1] &= (safe_lshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s((((((VECTOR(uint16_t, 2))(65534UL, 1UL)).even ^ (safe_div_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(l_656.f0, 10)) , ((l_788 == (void*)0) , (((*l_790) = l_789) != ((((safe_mod_func_int8_t_s_s((l_802 |= ((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((*l_750), (p_14 || ((((((safe_mod_func_int16_t_s_s(5L, l_731[3])) ^ (safe_mul_func_uint16_t_u_u(p_14, l_669.x))) == l_767.sf) & (*p_1124->g_336)) , 0x20L) == l_769)))), l_801)) >= p_14)), FAKE_DIVERGE(p_1124->local_0_offset, get_local_id(0), 10))) ^ l_669.x) , 0xEF03A30417FCC25EL) , l_803)))), l_804))) & l_762) && l_767.s1), 0x5E5D5AEC42B66EB8L)), 1))), p_14))) > (*l_729))) , p_1124->g_433.f8.f4) , (*p_1124->g_336)) > p_14), l_760, (-9L), 0x3EEB0E53EB18DB94L, 4L)))).odd, ((VECTOR(int64_t, 4))(0x6ACF438507F41789L))))).hi))), ((VECTOR(int64_t, 2))(0x7B255C497238CCD5L))))).yyxx))).lo)).hi , (*p_1124->g_691)) ^ p_14), p_14)) && l_731[4])) <= p_14) <= p_14);
                    }
                    else
                    { /* block id: 372 */
                        int32_t l_813 = 0x656FBD4AL;
                        int32_t *l_814 = &l_769;
                        int32_t *l_815 = &p_1124->g_550.f7;
                        int32_t *l_816 = &l_758[0][0][1];
                        int32_t *l_817 = &l_764;
                        int32_t *l_818 = &l_812;
                        int32_t *l_819[9][4][7] = {{{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]}},{{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]}},{{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]}},{{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]}},{{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]}},{{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]}},{{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]}},{{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]}},{{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]},{&p_1124->g_70,&l_768[3][1],&l_768[3][1],&p_1124->g_70,&l_812,&l_768[0][5],&l_768[3][1]}}};
                        int i, j, k;
                        l_822.s7++;
                    }
                }
                l_841++;
            }
            for (p_1124->g_457.f4 = 0; (p_1124->g_457.f4 >= 18); p_1124->g_457.f4 = safe_add_func_uint64_t_u_u(p_1124->g_457.f4, 1))
            { /* block id: 380 */
                VECTOR(int8_t, 16) l_855 = (VECTOR(int8_t, 16))(0x22L, (VECTOR(int8_t, 4))(0x22L, (VECTOR(int8_t, 2))(0x22L, 0x3AL), 0x3AL), 0x3AL, 0x22L, 0x3AL, (VECTOR(int8_t, 2))(0x22L, 0x3AL), (VECTOR(int8_t, 2))(0x22L, 0x3AL), 0x22L, 0x3AL, 0x22L, 0x3AL);
                int i;
                for (p_1124->g_457.f7 = 0; (p_1124->g_457.f7 > 26); p_1124->g_457.f7++)
                { /* block id: 383 */
                    uint16_t *l_860 = (void*)0;
                    uint16_t *l_861 = &p_1124->g_283[3].f4.f1;
                    (*p_1124->g_691) = (safe_lshift_func_int8_t_s_s((l_850 | (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((*l_659) = ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_855.s1f1f)).yxxwzwzyzzxyzzzz)).s8 > 0x16L) < 0x0060L)), (((safe_add_func_int8_t_s_s(0L, ((((safe_sub_func_int16_t_s_s(p_14, ((p_14 , p_14) < GROUP_DIVERGE(2, 1)))) == ((*l_861) = p_1124->g_433.f4.f7)) , &l_803) == &l_789))) && 0x1EL) | p_14))), GROUP_DIVERGE(2, 1)))), l_656.f1));
                    return p_14;
                }
                return p_1124->g_457.f8;
            }
        }
        if (l_718.s1)
            continue;
        if ((((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(l_862.sb0fe52e3d582ff1f)).s7c, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((((1UL >= ((*l_880) ^= ((safe_rshift_func_int8_t_s_s(p_14, 6)) , (((VECTOR(uint8_t, 2))(l_865.s25)).hi < (1UL < (safe_sub_func_uint32_t_u_u((p_14 , (p_1124->g_433.f1 & (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_868.zyyywyzy)).s7500325266357222)).s5ad5, ((VECTOR(int32_t, 16))(p_1124->g_869.s6737202063564543)).sf94c))).even, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(1L, (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(p_14, l_656.f0)), (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((((1L & ((safe_div_func_int64_t_s_s(((!(safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u(1UL, p_14)), 4UL))) || p_1124->g_375.se), l_656.f1)) , 0x7574C7BCL)) <= p_1124->g_283[3].f2) ^ (*p_1124->g_336)) != 0x5DL), 0L, 0x26CD5BE0L, 0x7DA380FDL, ((VECTOR(int32_t, 2))(0L)), 0x383544FDL, 0x7BB265FCL)).s6572140117175276)).s0 , (*p_1124->g_336)))), 0x308989BBL, 0x64F07404L)).even, ((VECTOR(int32_t, 2))((-1L))))))))), l_822.s2, l_754, 0x1F386DEAL, ((VECTOR(int32_t, 2))(0x53AA78B9L)), 0x0A56EB9CL)).s0 ^ p_1124->g_286.f8.f7))), l_685))))))) == p_14) , 0x55BBE0B086DF169FL) || 0x5F21E312C42C799CL), ((VECTOR(int32_t, 4))(0x28FA354FL)), 1L, 0x7A75AC45L, (-1L))))).s61))), ((VECTOR(uint32_t, 2))(7UL))))).odd < p_14))
        { /* block id: 394 */
            struct S3 l_976[6][2][10] = {{{{0x28FC014A118BDCFAL},{0x426FD4ED008E7A8AL},{-1L},{-1L},{0x3D06864299663EC8L},{-1L},{-1L},{0x28FC014A118BDCFAL},{0x28FC014A118BDCFAL},{-1L}},{{0x28FC014A118BDCFAL},{0x426FD4ED008E7A8AL},{-1L},{-1L},{0x3D06864299663EC8L},{-1L},{-1L},{0x28FC014A118BDCFAL},{0x28FC014A118BDCFAL},{-1L}}},{{{0x28FC014A118BDCFAL},{0x426FD4ED008E7A8AL},{-1L},{-1L},{0x3D06864299663EC8L},{-1L},{-1L},{0x28FC014A118BDCFAL},{0x28FC014A118BDCFAL},{-1L}},{{0x28FC014A118BDCFAL},{0x426FD4ED008E7A8AL},{-1L},{-1L},{0x3D06864299663EC8L},{-1L},{-1L},{0x28FC014A118BDCFAL},{0x28FC014A118BDCFAL},{-1L}}},{{{0x28FC014A118BDCFAL},{0x426FD4ED008E7A8AL},{-1L},{-1L},{0x3D06864299663EC8L},{-1L},{-1L},{0x28FC014A118BDCFAL},{0x28FC014A118BDCFAL},{-1L}},{{0x28FC014A118BDCFAL},{0x426FD4ED008E7A8AL},{-1L},{-1L},{0x3D06864299663EC8L},{-1L},{-1L},{0x28FC014A118BDCFAL},{0x28FC014A118BDCFAL},{-1L}}},{{{0x28FC014A118BDCFAL},{0x426FD4ED008E7A8AL},{-1L},{-1L},{0x3D06864299663EC8L},{-1L},{-1L},{0x28FC014A118BDCFAL},{0x28FC014A118BDCFAL},{-1L}},{{0x28FC014A118BDCFAL},{0x426FD4ED008E7A8AL},{-1L},{-1L},{0x3D06864299663EC8L},{-1L},{-1L},{0x28FC014A118BDCFAL},{0x28FC014A118BDCFAL},{-1L}}},{{{0x28FC014A118BDCFAL},{0x426FD4ED008E7A8AL},{-1L},{-1L},{0x3D06864299663EC8L},{-1L},{-1L},{0x28FC014A118BDCFAL},{0x28FC014A118BDCFAL},{-1L}},{{0x28FC014A118BDCFAL},{0x426FD4ED008E7A8AL},{-1L},{-1L},{0x3D06864299663EC8L},{-1L},{-1L},{0x28FC014A118BDCFAL},{0x28FC014A118BDCFAL},{-1L}}},{{{0x28FC014A118BDCFAL},{0x426FD4ED008E7A8AL},{-1L},{-1L},{0x3D06864299663EC8L},{-1L},{-1L},{0x28FC014A118BDCFAL},{0x28FC014A118BDCFAL},{-1L}},{{0x28FC014A118BDCFAL},{0x426FD4ED008E7A8AL},{-1L},{-1L},{0x3D06864299663EC8L},{-1L},{-1L},{0x28FC014A118BDCFAL},{0x28FC014A118BDCFAL},{-1L}}}};
            int64_t *l_987 = (void*)0;
            int64_t *l_988 = (void*)0;
            int64_t *l_989[10][8][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
            int i, j, k;
            if ((atomic_inc(&p_1124->l_atomic_input[26]) == 6))
            { /* block id: 396 */
                int32_t l_881 = 0L;
                int32_t *l_907 = &l_881;
                VECTOR(int32_t, 16) l_908 = (VECTOR(int32_t, 16))(0x0F054E06L, (VECTOR(int32_t, 4))(0x0F054E06L, (VECTOR(int32_t, 2))(0x0F054E06L, 0x3984B644L), 0x3984B644L), 0x3984B644L, 0x0F054E06L, 0x3984B644L, (VECTOR(int32_t, 2))(0x0F054E06L, 0x3984B644L), (VECTOR(int32_t, 2))(0x0F054E06L, 0x3984B644L), 0x0F054E06L, 0x3984B644L, 0x0F054E06L, 0x3984B644L);
                uint32_t l_969[8][5][6] = {{{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L}},{{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L}},{{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L}},{{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L}},{{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L}},{{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L}},{{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L}},{{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L},{4294967291UL,0x35CFBA61L,0x3BC683D6L,0x4E84D18EL,0x511D8249L,0x03E0A012L}}};
                int i, j, k;
                for (l_881 = 0; (l_881 >= (-22)); l_881--)
                { /* block id: 399 */
                    int32_t l_884 = 0x367DDB1BL;
                    int8_t l_890 = 0x7EL;
                    struct S1 l_896 = {-1L,0xD268L};
                    struct S1 l_897 = {-10L,65535UL};
                    for (l_884 = 0; (l_884 < (-29)); l_884 = safe_sub_func_uint8_t_u_u(l_884, 7))
                    { /* block id: 402 */
                        int32_t l_887 = 1L;
                        uint32_t l_888 = 0x5B9E5663L;
                        int64_t l_889[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_889[i] = 0L;
                        l_889[0] |= (l_888 &= l_887);
                    }
                    if (l_890)
                    { /* block id: 406 */
                        uint32_t l_891 = 4294967293UL;
                        l_884 |= l_891;
                    }
                    else
                    { /* block id: 408 */
                        VECTOR(uint8_t, 16) l_892 = (VECTOR(uint8_t, 16))(0x5FL, (VECTOR(uint8_t, 4))(0x5FL, (VECTOR(uint8_t, 2))(0x5FL, 0xA2L), 0xA2L), 0xA2L, 0x5FL, 0xA2L, (VECTOR(uint8_t, 2))(0x5FL, 0xA2L), (VECTOR(uint8_t, 2))(0x5FL, 0xA2L), 0x5FL, 0xA2L, 0x5FL, 0xA2L);
                        struct S2 l_893 = {0x8CL,0x9BB0L,255UL,-1L,{7UL,0xC2E5L,6L,0x4BL,0x25604153L,0UL,0x391FB12B425FE476L,0x74FF82572ACA1475L,0xF767AE6712317C90L},0x0DAB7633L,0x0F06E5533F82DDB9L,0L,{0xA568715DL,0x83C0L,0x1945877C2AEA6AFFL,0x31L,0x6A2E3A46L,18446744073709551607UL,-6L,1UL,0x63BCC068F8EC201AL}};/* VOLATILE GLOBAL l_893 */
                        struct S2 l_894 = {1UL,0xBC4AL,0x20L,0L,{0x178AC923L,0xA03AL,0x3045F1E465AF2C8DL,0x94L,0x1F0899ADL,0UL,-1L,0x7AE12E1D969DC499L,0x46FE7CB7EC2450A8L},0x0997C9C3L,0x5C293A43EF11ECF8L,0x2D3BE08CL,{4294967294UL,0xCC24L,0x2E67680DBC806FC8L,1UL,0x1BB0139DL,3UL,0x1C7EDBBF91C8736AL,18446744073709551614UL,0x3ED886644C5EB784L}};/* VOLATILE GLOBAL l_894 */
                        uint16_t l_895 = 0UL;
                        int i;
                        l_894 = (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_892.sae891edd967ef4a4)))).s9 , l_893);
                        l_884 &= l_895;
                    }
                    l_897 = l_896;
                    for (l_897.f0 = (-7); (l_897.f0 >= 5); l_897.f0 = safe_add_func_int64_t_s_s(l_897.f0, 1))
                    { /* block id: 415 */
                        uint32_t *l_901 = (void*)0;
                        uint32_t **l_900 = &l_901;
                        int16_t l_902 = 1L;
                        uint16_t l_903 = 0x6F9DL;
                        int32_t l_904 = (-3L);
                        int8_t l_905 = (-6L);
                        int32_t l_906[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_906[i] = 0L;
                        l_900 = l_900;
                        l_906[1] |= (l_905 = ((l_903 |= l_902) , (l_884 = l_904)));
                    }
                }
                l_907 = (void*)0;
                if (((VECTOR(int32_t, 4))(l_908.s8372)).w)
                { /* block id: 424 */
                    VECTOR(int32_t, 4) l_909 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L);
                    VECTOR(int32_t, 16) l_910 = (VECTOR(int32_t, 16))(0x09DCC413L, (VECTOR(int32_t, 4))(0x09DCC413L, (VECTOR(int32_t, 2))(0x09DCC413L, 1L), 1L), 1L, 0x09DCC413L, 1L, (VECTOR(int32_t, 2))(0x09DCC413L, 1L), (VECTOR(int32_t, 2))(0x09DCC413L, 1L), 0x09DCC413L, 1L, 0x09DCC413L, 1L);
                    VECTOR(int32_t, 2) l_911 = (VECTOR(int32_t, 2))(0x0608045AL, (-6L));
                    VECTOR(int32_t, 8) l_912 = (VECTOR(int32_t, 8))(0x631C5A38L, (VECTOR(int32_t, 4))(0x631C5A38L, (VECTOR(int32_t, 2))(0x631C5A38L, 0x156F86FBL), 0x156F86FBL), 0x156F86FBL, 0x631C5A38L, 0x156F86FBL);
                    VECTOR(int32_t, 8) l_913 = (VECTOR(int32_t, 8))(0x6170C05DL, (VECTOR(int32_t, 4))(0x6170C05DL, (VECTOR(int32_t, 2))(0x6170C05DL, 1L), 1L), 1L, 0x6170C05DL, 1L);
                    VECTOR(int32_t, 2) l_914 = (VECTOR(int32_t, 2))(0L, 0x13CEADFAL);
                    VECTOR(int32_t, 8) l_915 = (VECTOR(int32_t, 8))(0x1D62D267L, (VECTOR(int32_t, 4))(0x1D62D267L, (VECTOR(int32_t, 2))(0x1D62D267L, 0x7C8C7ED4L), 0x7C8C7ED4L), 0x7C8C7ED4L, 0x1D62D267L, 0x7C8C7ED4L);
                    VECTOR(int32_t, 8) l_916 = (VECTOR(int32_t, 8))(0x43E1ACAEL, (VECTOR(int32_t, 4))(0x43E1ACAEL, (VECTOR(int32_t, 2))(0x43E1ACAEL, 9L), 9L), 9L, 0x43E1ACAEL, 9L);
                    VECTOR(int32_t, 4) l_917 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-10L)), (-10L));
                    uint16_t l_918 = 0x0340L;
                    int16_t l_919 = 0x63E5L;
                    VECTOR(int32_t, 16) l_920 = (VECTOR(int32_t, 16))(0x57C40889L, (VECTOR(int32_t, 4))(0x57C40889L, (VECTOR(int32_t, 2))(0x57C40889L, 0x78C8E78BL), 0x78C8E78BL), 0x78C8E78BL, 0x57C40889L, 0x78C8E78BL, (VECTOR(int32_t, 2))(0x57C40889L, 0x78C8E78BL), (VECTOR(int32_t, 2))(0x57C40889L, 0x78C8E78BL), 0x57C40889L, 0x78C8E78BL, 0x57C40889L, 0x78C8E78BL);
                    VECTOR(int32_t, 2) l_921 = (VECTOR(int32_t, 2))(0L, 0x32C88746L);
                    VECTOR(int32_t, 16) l_922 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-7L)), (-7L)), (-7L), 0L, (-7L), (VECTOR(int32_t, 2))(0L, (-7L)), (VECTOR(int32_t, 2))(0L, (-7L)), 0L, (-7L), 0L, (-7L));
                    int8_t l_923 = (-1L);
                    uint32_t l_924 = 0xF6D998FCL;
                    int8_t l_925 = 3L;
                    int16_t l_926 = 0L;
                    int64_t l_937 = 0L;
                    int8_t l_938 = 0x43L;
                    int i;
                    if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))((-10L), 4L, 0x012090C2L, 0x35594E51L, 0x6205C817L, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_909.xyzxxyzwxxyyzwzz)).s52, ((VECTOR(int32_t, 4))(l_910.s5c17)).lo))), 0x6176E45EL)).hi, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_911.xx)), ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(l_912.s2206)).wyyxzywz, (int32_t)(l_908.sf ^= 6L)))), ((VECTOR(int32_t, 4))(l_913.s5623)), 0x703109FCL, (-1L))))).sd3cf, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_914.xx)), 8L, 7L, 0x401658B5L, (-1L), ((VECTOR(int32_t, 8))(l_915.s46260420)).s0, ((VECTOR(int32_t, 8))(l_916.s00275174)), 0x40D3272FL)).lo)).s21, ((VECTOR(int32_t, 4))((l_912.s6 = 0x62DFBECBL), ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(l_917.ywwz)), ((VECTOR(int32_t, 2))(0x7A49470CL, 1L)).xxxx))).odd, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(0x05D8B9F4L, l_918, 0x7D1DD3E0L, ((VECTOR(int32_t, 2))(0x27F1BC7AL, 0x305ED395L)), l_919, ((VECTOR(int32_t, 4))(l_920.s37dc)), ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_921.xyxyyyxy)))).hi, ((VECTOR(int32_t, 16))(0x5E52DF8CL, 0x696B568EL, ((VECTOR(int32_t, 2))(l_922.s80)), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(0x5AA45DACL, 1L, 0x4D3BD51EL, 0x341C9861L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_923, ((VECTOR(int32_t, 2))(0x7E4C788BL)), 0x13DBF01BL, ((VECTOR(int32_t, 8))(0x05A509B7L)), 0x058E4EDDL, l_924, 1L, (-4L))))).s065a)).yzyxxwxz)), ((VECTOR(int32_t, 4))(7L)))).s8eb2, ((VECTOR(int32_t, 4))((-8L))), ((VECTOR(int32_t, 4))(0L))))), 9L, ((VECTOR(int32_t, 2))(0x4154F334L)), 9L, l_925, ((VECTOR(int32_t, 2))(6L)), 0x41B70003L)).sb87c, ((VECTOR(int32_t, 4))(0x65FFB1DBL))))), (-1L), 0L))))).s20, ((VECTOR(int32_t, 2))(0L))))), 0x148730E6L)).even))), l_926, ((VECTOR(int32_t, 4))(0x1BDCBFFFL)), 0x5742D4C7L)).even)))))).yzzwyyxx)).s2)
                    { /* block id: 427 */
                        struct S2 l_927 = {0xA4L,0xD0F5L,250UL,0L,{4294967295UL,65526UL,-7L,1UL,0x71AE3E4CL,0xEF86A80C3DB3F4BFL,-4L,5UL,7UL},7UL,0x59E3679A1B92F504L,0x14F5A314L,{0x61AB0900L,0UL,1L,0x8BL,0x3267821CL,0xDD644917FC5B5DD0L,0x26DB4356BD53B7E0L,0xF99D1CBF57BD9BF1L,0x899B1528F865E70FL}};/* VOLATILE GLOBAL l_927 */
                        uint8_t l_928 = 0xEEL;
                        int32_t l_929[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                        uint32_t l_930 = 0xF8C522A5L;
                        uint32_t l_931 = 4294967295UL;
                        int i;
                        l_921.y &= (l_927 , l_928);
                        l_913.s6 |= l_929[1];
                        l_911.x = l_930;
                        l_913.s1 = l_931;
                    }
                    else
                    { /* block id: 432 */
                        int32_t l_932 = 0L;
                        uint32_t l_933[4][10] = {{0x069D8F7FL,0xEC62771CL,0xEC62771CL,0x069D8F7FL,0xCE094695L,6UL,6UL,0xCE094695L,0x069D8F7FL,0xEC62771CL},{0x069D8F7FL,0xEC62771CL,0xEC62771CL,0x069D8F7FL,0xCE094695L,6UL,6UL,0xCE094695L,0x069D8F7FL,0xEC62771CL},{0x069D8F7FL,0xEC62771CL,0xEC62771CL,0x069D8F7FL,0xCE094695L,6UL,6UL,0xCE094695L,0x069D8F7FL,0xEC62771CL},{0x069D8F7FL,0xEC62771CL,0xEC62771CL,0x069D8F7FL,0xCE094695L,6UL,6UL,0xCE094695L,0x069D8F7FL,0xEC62771CL}};
                        int32_t *l_936 = (void*)0;
                        int i, j;
                        l_933[2][4]--;
                        l_936 = l_936;
                    }
                    l_881 = (l_937 , l_938);
                    for (l_922.s0 = 29; (l_922.s0 < 10); l_922.s0 = safe_sub_func_uint16_t_u_u(l_922.s0, 1))
                    { /* block id: 439 */
                        uint64_t l_941 = 1UL;
                        uint32_t l_944 = 0xFC8A06F4L;
                        int32_t l_948 = 9L;
                        int32_t *l_947 = &l_948;
                        ++l_941;
                        --l_944;
                        l_907 = l_947;
                    }
                    for (l_911.y = (-11); (l_911.y < 22); l_911.y = safe_add_func_uint8_t_u_u(l_911.y, 3))
                    { /* block id: 446 */
                        int32_t l_951[10] = {0x08594D97L,0x47D852B3L,0x08594D97L,0x08594D97L,0x47D852B3L,0x08594D97L,0x08594D97L,0x47D852B3L,0x08594D97L,0x08594D97L};
                        int32_t l_952 = 0x61EABFB8L;
                        VECTOR(int32_t, 4) l_953 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
                        int i;
                        l_921.y = (l_952 = l_951[2]);
                        l_909.y &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_953.zyyyyzzy)))).s05, ((VECTOR(int32_t, 2))(0x24050DDCL, 0x608B6465L))))).xxxyyyyyyxyxxyxy)))).sc;
                    }
                }
                else
                { /* block id: 451 */
                    VECTOR(int32_t, 16) l_954 = (VECTOR(int32_t, 16))(0x067252BFL, (VECTOR(int32_t, 4))(0x067252BFL, (VECTOR(int32_t, 2))(0x067252BFL, 0x409EDA1AL), 0x409EDA1AL), 0x409EDA1AL, 0x067252BFL, 0x409EDA1AL, (VECTOR(int32_t, 2))(0x067252BFL, 0x409EDA1AL), (VECTOR(int32_t, 2))(0x067252BFL, 0x409EDA1AL), 0x067252BFL, 0x409EDA1AL, 0x067252BFL, 0x409EDA1AL);
                    int8_t l_955 = 1L;
                    VECTOR(int32_t, 4) l_964 = (VECTOR(int32_t, 4))(0x656350A0L, (VECTOR(int32_t, 2))(0x656350A0L, (-6L)), (-6L));
                    int16_t l_965 = 0x10B1L;
                    struct S0 l_966 = {0xF02816D9L,0x2FF6L,-9L,0x8FL,1L,18446744073709551613UL,1L,18446744073709551615UL,3UL};/* VOLATILE GLOBAL l_966 */
                    int32_t *l_967[5];
                    int32_t *l_968 = (void*)0;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_967[i] = (void*)0;
                    l_955 |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_954.sfa7efa19)).even)).odd)).hi;
                    for (l_955 = 17; (l_955 >= 10); l_955--)
                    { /* block id: 455 */
                        VECTOR(int32_t, 16) l_958 = (VECTOR(int32_t, 16))(0x48406DB2L, (VECTOR(int32_t, 4))(0x48406DB2L, (VECTOR(int32_t, 2))(0x48406DB2L, 5L), 5L), 5L, 0x48406DB2L, 5L, (VECTOR(int32_t, 2))(0x48406DB2L, 5L), (VECTOR(int32_t, 2))(0x48406DB2L, 5L), 0x48406DB2L, 5L, 0x48406DB2L, 5L);
                        VECTOR(int32_t, 4) l_959 = (VECTOR(int32_t, 4))(0x29314F6FL, (VECTOR(int32_t, 2))(0x29314F6FL, (-1L)), (-1L));
                        VECTOR(int16_t, 2) l_960 = (VECTOR(int16_t, 2))(0x260DL, 0x0483L);
                        VECTOR(uint16_t, 16) l_961 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint16_t, 2))(0UL, 1UL), (VECTOR(uint16_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
                        VECTOR(uint16_t, 8) l_962 = (VECTOR(uint16_t, 8))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0xF4E5L), 0xF4E5L), 0xF4E5L, 65528UL, 0xF4E5L);
                        int32_t l_963 = 1L;
                        int i;
                        l_954.sb ^= ((VECTOR(int32_t, 8))(l_958.sb, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(l_959.yx)).xyyxyyxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(l_960.xxxyyyxyxxxxxxxx)).sd85d, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_961.s4662)).z, ((VECTOR(uint16_t, 4))(l_962.s7550)), 0UL, 0UL, 0xBD9CL)).hi))).wyyzyxyy)).s1345666423225124)).hi)).s52)).yyxx)), 0L, 0x417CCC30L, 6L, (-1L)))))).s45, ((VECTOR(int32_t, 4))(0L, (l_959.y = l_963), 0x2AF5B4E9L, 0x20D2A8BAL)).lo))), 0x157FB052L, ((VECTOR(int32_t, 4))(0x6ED82A9EL, 0x6F6A62CEL, 0L, 0x310F2A59L)))).s3;
                    }
                    l_968 = ((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_964.wyxywyyyyyxxwzzy)).s361a)).y , l_965) , (l_967[2] = (l_907 = (l_966 , l_967[2]))));
                }
                l_969[0][3][3]--;
                unsigned int result = 0;
                result += l_881;
                result += l_908.sf;
                result += l_908.se;
                result += l_908.sd;
                result += l_908.sc;
                result += l_908.sb;
                result += l_908.sa;
                result += l_908.s9;
                result += l_908.s8;
                result += l_908.s7;
                result += l_908.s6;
                result += l_908.s5;
                result += l_908.s4;
                result += l_908.s3;
                result += l_908.s2;
                result += l_908.s1;
                result += l_908.s0;
                int l_969_i0, l_969_i1, l_969_i2;
                for (l_969_i0 = 0; l_969_i0 < 8; l_969_i0++) {
                    for (l_969_i1 = 0; l_969_i1 < 5; l_969_i1++) {
                        for (l_969_i2 = 0; l_969_i2 < 6; l_969_i2++) {
                            result += l_969[l_969_i0][l_969_i1][l_969_i2];
                        }
                    }
                }
                atomic_add(&p_1124->l_special_values[26], result);
            }
            else
            { /* block id: 464 */
                (1 + 1);
            }
            (*p_1124->g_336) = ((safe_mod_func_int8_t_s_s(((((safe_mod_func_int32_t_s_s((l_976[2][0][8] , (0x025BL == ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0x67F9L, 0x16B7L)))).odd)), l_718.sf)) | ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_977.zwzzwxwwywywwyyx)).odd)).s7) , ((safe_div_func_uint64_t_u_u((0x62L != GROUP_DIVERGE(1, 1)), GROUP_DIVERGE(0, 1))) < ((((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 4))(l_982.se2cb)).z, (0x131CL & FAKE_DIVERGE(p_1124->local_2_offset, get_local_id(2), 10)))) , (l_768[3][1] = ((safe_sub_func_int16_t_s_s(((void*)0 == &p_1124->g_329), (safe_mul_func_uint8_t_u_u(p_14, p_14)))) , l_862.s6))) || p_14) > 7UL))) | l_977.z), p_14)) > l_977.z);
        }
        else
        { /* block id: 469 */
            if ((atomic_inc(&p_1124->l_atomic_input[92]) == 1))
            { /* block id: 471 */
                int32_t l_990 = 0x5CA5BB98L;
                VECTOR(int64_t, 8) l_1066 = (VECTOR(int64_t, 8))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0x7FC20693289338F2L), 0x7FC20693289338F2L), 0x7FC20693289338F2L, 2L, 0x7FC20693289338F2L);
                uint16_t l_1067 = 2UL;
                uint16_t l_1068 = 65529UL;
                uint32_t l_1069 = 1UL;
                int i;
                for (l_990 = 0; (l_990 == (-23)); --l_990)
                { /* block id: 474 */
                    VECTOR(uint16_t, 4) l_993 = (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 1UL), 1UL);
                    uint8_t l_994 = 0xE7L;
                    VECTOR(uint32_t, 2) l_995 = (VECTOR(uint32_t, 2))(4294967292UL, 4294967287UL);
                    VECTOR(uint32_t, 8) l_996 = (VECTOR(uint32_t, 8))(0x88957A10L, (VECTOR(uint32_t, 4))(0x88957A10L, (VECTOR(uint32_t, 2))(0x88957A10L, 0UL), 0UL), 0UL, 0x88957A10L, 0UL);
                    VECTOR(uint32_t, 16) l_997 = (VECTOR(uint32_t, 16))(0x99E189CEL, (VECTOR(uint32_t, 4))(0x99E189CEL, (VECTOR(uint32_t, 2))(0x99E189CEL, 4294967286UL), 4294967286UL), 4294967286UL, 0x99E189CEL, 4294967286UL, (VECTOR(uint32_t, 2))(0x99E189CEL, 4294967286UL), (VECTOR(uint32_t, 2))(0x99E189CEL, 4294967286UL), 0x99E189CEL, 4294967286UL, 0x99E189CEL, 4294967286UL);
                    struct S2 l_998 = {1UL,0xB10FL,1UL,0x7F0C9FD8L,{1UL,0x3CDCL,0x2CB6BB57924B8692L,255UL,0x77FE054AL,0x3F8F9FB5565B7FE8L,-2L,18446744073709551606UL,1UL},8UL,0L,0x38D16B4DL,{0xC8D352FCL,65526UL,0x7681C3C11E5390DAL,0x48L,-8L,0UL,0x2A26399E99BA0355L,5UL,1UL}};/* VOLATILE GLOBAL l_998 */
                    uint32_t l_999 = 4294967290UL;
                    int32_t l_1000 = 0x7A49FDF7L;
                    VECTOR(uint32_t, 8) l_1001 = (VECTOR(uint32_t, 8))(0x9EDA6738L, (VECTOR(uint32_t, 4))(0x9EDA6738L, (VECTOR(uint32_t, 2))(0x9EDA6738L, 0x9EFD0CACL), 0x9EFD0CACL), 0x9EFD0CACL, 0x9EDA6738L, 0x9EFD0CACL);
                    uint32_t l_1002 = 4294967295UL;
                    uint32_t l_1003 = 0x153F7878L;
                    VECTOR(uint32_t, 16) l_1004 = (VECTOR(uint32_t, 16))(0x7B89A8A1L, (VECTOR(uint32_t, 4))(0x7B89A8A1L, (VECTOR(uint32_t, 2))(0x7B89A8A1L, 0xF7772B35L), 0xF7772B35L), 0xF7772B35L, 0x7B89A8A1L, 0xF7772B35L, (VECTOR(uint32_t, 2))(0x7B89A8A1L, 0xF7772B35L), (VECTOR(uint32_t, 2))(0x7B89A8A1L, 0xF7772B35L), 0x7B89A8A1L, 0xF7772B35L, 0x7B89A8A1L, 0xF7772B35L);
                    int32_t l_1005 = 1L;
                    int8_t l_1006 = 0x7BL;
                    VECTOR(uint32_t, 2) l_1007 = (VECTOR(uint32_t, 2))(1UL, 0x44AEB7B0L);
                    VECTOR(uint32_t, 16) l_1008 = (VECTOR(uint32_t, 16))(0x24001483L, (VECTOR(uint32_t, 4))(0x24001483L, (VECTOR(uint32_t, 2))(0x24001483L, 0UL), 0UL), 0UL, 0x24001483L, 0UL, (VECTOR(uint32_t, 2))(0x24001483L, 0UL), (VECTOR(uint32_t, 2))(0x24001483L, 0UL), 0x24001483L, 0UL, 0x24001483L, 0UL);
                    VECTOR(uint32_t, 4) l_1009 = (VECTOR(uint32_t, 4))(0x692AAF1CL, (VECTOR(uint32_t, 2))(0x692AAF1CL, 0x380BB3ECL), 0x380BB3ECL);
                    VECTOR(uint32_t, 4) l_1010 = (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 1UL), 1UL);
                    int32_t l_1011 = 0x2BA8DF7DL;
                    VECTOR(uint32_t, 2) l_1012 = (VECTOR(uint32_t, 2))(4294967292UL, 0xD98CDAC2L);
                    uint16_t l_1013[6][1][1];
                    int16_t l_1014 = 0x0B5BL;
                    uint8_t l_1015 = 0xE1L;
                    VECTOR(int32_t, 2) l_1029 = (VECTOR(int32_t, 2))((-6L), (-10L));
                    int64_t l_1030 = 5L;
                    VECTOR(int32_t, 16) l_1031 = (VECTOR(int32_t, 16))(0x01005A48L, (VECTOR(int32_t, 4))(0x01005A48L, (VECTOR(int32_t, 2))(0x01005A48L, 0x01690688L), 0x01690688L), 0x01690688L, 0x01005A48L, 0x01690688L, (VECTOR(int32_t, 2))(0x01005A48L, 0x01690688L), (VECTOR(int32_t, 2))(0x01005A48L, 0x01690688L), 0x01005A48L, 0x01690688L, 0x01005A48L, 0x01690688L);
                    uint32_t l_1032 = 4294967286UL;
                    uint16_t l_1033[8] = {5UL,65531UL,5UL,5UL,65531UL,5UL,5UL,65531UL};
                    VECTOR(int32_t, 16) l_1034 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 9L), 9L), 9L, 7L, 9L, (VECTOR(int32_t, 2))(7L, 9L), (VECTOR(int32_t, 2))(7L, 9L), 7L, 9L, 7L, 9L);
                    int8_t l_1035[1][7][3] = {{{0x7CL,0x7CL,0x7CL},{0x7CL,0x7CL,0x7CL},{0x7CL,0x7CL,0x7CL},{0x7CL,0x7CL,0x7CL},{0x7CL,0x7CL,0x7CL},{0x7CL,0x7CL,0x7CL},{0x7CL,0x7CL,0x7CL}}};
                    uint16_t l_1036 = 65528UL;
                    int64_t l_1037 = 0x460CAD941DEDF353L;
                    int8_t l_1038 = 0L;
                    VECTOR(int32_t, 4) l_1039 = (VECTOR(int32_t, 4))(0x4C0F0ED3L, (VECTOR(int32_t, 2))(0x4C0F0ED3L, 0x40008284L), 0x40008284L);
                    VECTOR(int16_t, 16) l_1040 = (VECTOR(int16_t, 16))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 5L), 5L), 5L, 7L, 5L, (VECTOR(int16_t, 2))(7L, 5L), (VECTOR(int16_t, 2))(7L, 5L), 7L, 5L, 7L, 5L);
                    VECTOR(int16_t, 16) l_1041 = (VECTOR(int16_t, 16))(0x3B5BL, (VECTOR(int16_t, 4))(0x3B5BL, (VECTOR(int16_t, 2))(0x3B5BL, 0x7BA6L), 0x7BA6L), 0x7BA6L, 0x3B5BL, 0x7BA6L, (VECTOR(int16_t, 2))(0x3B5BL, 0x7BA6L), (VECTOR(int16_t, 2))(0x3B5BL, 0x7BA6L), 0x3B5BL, 0x7BA6L, 0x3B5BL, 0x7BA6L);
                    int32_t l_1042[3][4] = {{0x0035CF85L,0x206463EAL,9L,0x206463EAL},{0x0035CF85L,0x206463EAL,9L,0x206463EAL},{0x0035CF85L,0x206463EAL,9L,0x206463EAL}};
                    uint64_t l_1043 = 0x6769E543A4A569AAL;
                    int32_t l_1044 = (-1L);
                    int32_t l_1045[3];
                    uint32_t l_1046 = 0x25C68010L;
                    uint16_t l_1047 = 65535UL;
                    VECTOR(uint8_t, 4) l_1055 = (VECTOR(uint8_t, 4))(0xF2L, (VECTOR(uint8_t, 2))(0xF2L, 0UL), 0UL);
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1013[i][j][k] = 0xD383L;
                        }
                    }
                    for (i = 0; i < 3; i++)
                        l_1045[i] = 0x1CB0E72DL;
                    if (((l_1014 = (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_993.yxwzyxxy)).even)).w , (l_1013[3][0][0] ^= ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(0x98982E27L, l_994, ((VECTOR(uint32_t, 2))(l_995.yx)).odd, 0x0248231FL, ((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_996.s52)), 4294967295UL, 0x39CE1A42L)).wzzwzyzz, ((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 16))(0x7965D79FL, ((VECTOR(uint32_t, 2))(1UL, 0x1AB93B7DL)), ((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 2))(1UL, 0xA43AC66CL)).yxyyyxxy, ((VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL)).yyxyyyyy))), ((VECTOR(uint32_t, 4))(l_997.s290c)), 0xD4D6E9A6L)).s60ee, (uint32_t)FAKE_DIVERGE(p_1124->group_2_offset, get_group_id(2), 10)))).hi)).yxyy, ((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 16))(0x00666A71L, 0x3FB427EEL, 0x6E0185B5L, 0x7EB933ECL, GROUP_DIVERGE(2, 1), 0xCC7F3379L, ((VECTOR(uint32_t, 4))((l_998 , (l_1000 = l_999)), ((VECTOR(uint32_t, 2))(0x8E399C19L, 0x8AC5973EL)), 1UL)), 1UL, 0xCCACA829L, ((VECTOR(uint32_t, 4))(l_1001.s4365)))), ((VECTOR(uint32_t, 8))(l_1002, l_1003, ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 8))(l_1004.s1791b0e6)).lo))))).zwywzwwxzzwwxxxy, ((VECTOR(uint32_t, 2))(4294967286UL, 4294967295UL)).yxyyxyyxxyyyyxxx, ((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(l_1005, l_1006, 0x0DA1226FL, 0UL)).xyyxwwwx, ((VECTOR(uint32_t, 8))(l_1007.xxxxyyxx))))).s7334526657100730))).s93)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(l_1008.s63b9d4dc)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_1009.zzzxzzxyxxwwzwzw)))).even, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_1010.xxzz)), l_1011, 4294967289UL, ((VECTOR(uint32_t, 8))(l_1012.xyxyxyxy)), 4294967292UL, 0x4AB4DA19L)).even))).s03)), 1UL, 0x835F93B0L)).lo))), 0xB355D1C1L, 0x6A9FB717L, 1UL, 0xE5D30E14L)).s0571056445370147))).s01e6))).wwxxyxyx))), 4294967295UL, ((VECTOR(uint32_t, 2))(1UL)), 0x388BB74DL)).s3a57)).yzxzzxzx)).odd))).even, ((VECTOR(uint32_t, 2))(3UL))))), 0UL, 7UL)).z))) , l_1015))
                    { /* block id: 478 */
                        int32_t l_1017 = 0x0DC8A2C8L;
                        int32_t *l_1016 = &l_1017;
                        int32_t *l_1018 = &l_1017;
                        l_1018 = l_1016;
                        l_1016 = (void*)0;
                    }
                    else
                    { /* block id: 481 */
                        uint32_t l_1019 = 0UL;
                        struct S2 l_1020[7][4][2] = {{{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}}},{{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}}},{{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}}},{{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}}},{{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}}},{{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}}},{{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}},{{0xA8L,0UL,0xFAL,0x2B0B990AL,{9UL,6UL,0x78B3F573977B133EL,0UL,0x31E1175DL,8UL,0x68A7CA9BFB597341L,1UL,0xDA0D157866998D35L},4294967295UL,1L,0x69335173L,{0xC628E664L,1UL,0x19A228ED314EB66EL,0UL,1L,18446744073709551607UL,-5L,5UL,0x3230498F8CED1002L}},{251UL,1UL,255UL,-1L,{0UL,0x81F0L,-1L,0xD7L,0x5BE6B9BEL,0xBFB82A693EEE6258L,0x288D486E690C27F7L,0UL,0x2343929A864360B2L},6UL,0x430F1587F1F8A963L,5L,{0x86A83EBEL,0xACB6L,0x67BCBD71736D5750L,3UL,0x4DF5C515L,18446744073709551612UL,-1L,1UL,0xF434B433F11843E8L}}}}};
                        uint32_t l_1021 = 1UL;
                        uint32_t l_1022[3][8] = {{0xB68DD604L,0xB68DD604L,0xB68DD604L,0xB68DD604L,0xB68DD604L,0xB68DD604L,0xB68DD604L,0xB68DD604L},{0xB68DD604L,0xB68DD604L,0xB68DD604L,0xB68DD604L,0xB68DD604L,0xB68DD604L,0xB68DD604L,0xB68DD604L},{0xB68DD604L,0xB68DD604L,0xB68DD604L,0xB68DD604L,0xB68DD604L,0xB68DD604L,0xB68DD604L,0xB68DD604L}};
                        uint32_t l_1025 = 0x2221231FL;
                        int32_t *l_1028 = &l_1020[0][0][1].f7;
                        int i, j, k;
                        l_1000 = ((l_998.f2 = l_1019) , (l_1020[0][0][1] , l_1021));
                        l_1022[1][0]++;
                        l_1025++;
                        l_1028 = (void*)0;
                    }
                    l_1047 &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(1L, 0x5056E328L, 0x3EC0B63DL, 0x70C2165EL)).wwyywwzzzzywyyyy, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(0x35ADDFA3L, 0L)), (int32_t)((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(0x28D67E1FL, ((VECTOR(int32_t, 2))(l_1029.yy)), 0x3481987FL)).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_1030, (l_1032 &= ((VECTOR(int32_t, 2))(l_1031.s7d)).hi), 1L, l_1033[6], ((VECTOR(int32_t, 16))(l_1034.s6b8478d3e636f2cd)).s9, 0x7B3D0390L, (-10L), l_1035[0][4][1], (l_1034.s0 = l_1036), 4L, l_1037, l_1038, 0x6A8C4EBCL, 1L, 0x0C88D809L, 0x7992EA23L)).sf427, ((VECTOR(int32_t, 8))(0x0E79B899L, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(l_1039.xy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(2L, 0x488F28EDL)).yyyxyxxxxxxxxyxx)).s47))), ((VECTOR(int32_t, 2))(0x528F98D4L, 1L)), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(1L, ((VECTOR(int16_t, 2))(l_1040.s45)), 0x5044L)))).zyxzxyzwyxzxzzyy, ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-1L), 0x1A7DL)).yxxyyxxxxyxxxxyx)))).hi, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))((-9L), ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_1041.sd4cf622e507229be)).seb)).yyyxyyxx)), l_1042[1][2], 0L, l_1043, ((VECTOR(int16_t, 2))(0x5CB4L)), l_1044, 0x1D6EL, (-1L))).s1bb5, (int16_t)l_1045[0]))), 1L, 9L, 0x313AL)).s7227636746473577)).even))).s4702413743532277))).s8a, ((VECTOR(uint16_t, 2))(65535UL)))))))), ((VECTOR(int32_t, 2))(0x20BAD71DL)), 0x34E0184EL, 0L, 0L)).lo))).zwyxwzxwwzyxyzzz, ((VECTOR(int32_t, 16))((-1L)))))).odd)).s65, ((VECTOR(int32_t, 2))(0x52D3C5CAL)))))))))))), ((VECTOR(int32_t, 2))(0x00AD8661L)), ((VECTOR(int32_t, 2))(0x41AA1393L))))).yyxx)).lo, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(0x6D3B9D28L))))), 0x0E14A2C8L, 0x6D9BE83EL, 0x03D9BC30L, 1L, 0x258D417EL, 4L)).s1, (int32_t)l_1046))).yxyxxxyxxyyyyyxy))).s40)).hi;
                    for (l_998.f4.f1 = 18; (l_998.f4.f1 <= 55); l_998.f4.f1++)
                    { /* block id: 493 */
                        int32_t *l_1050 = (void*)0;
                        int32_t l_1052 = 2L;
                        int32_t *l_1051 = &l_1052;
                        struct S3 l_1053 = {-1L};
                        struct S3 l_1054 = {0x3F0DD9BC88CF9FD2L};
                        l_1051 = l_1050;
                        l_1054 = l_1053;
                    }
                    if (l_1055.x)
                    { /* block id: 497 */
                        int32_t l_1057[3];
                        int32_t *l_1056[9];
                        int32_t *l_1058 = &l_1057[1];
                        int32_t *l_1059 = &l_1057[0];
                        int32_t *l_1060 = &l_1057[0];
                        uint8_t l_1061 = 0UL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1057[i] = (-5L);
                        for (i = 0; i < 9; i++)
                            l_1056[i] = &l_1057[0];
                        l_1058 = l_1056[0];
                        l_1060 = l_1059;
                        l_1061--;
                    }
                    else
                    { /* block id: 501 */
                        VECTOR(int32_t, 16) l_1064 = (VECTOR(int32_t, 16))(0x5BB7325DL, (VECTOR(int32_t, 4))(0x5BB7325DL, (VECTOR(int32_t, 2))(0x5BB7325DL, 1L), 1L), 1L, 0x5BB7325DL, 1L, (VECTOR(int32_t, 2))(0x5BB7325DL, 1L), (VECTOR(int32_t, 2))(0x5BB7325DL, 1L), 0x5BB7325DL, 1L, 0x5BB7325DL, 1L);
                        int32_t l_1065 = 0x0E0E1E0BL;
                        int i;
                        l_1031.s9 ^= ((VECTOR(int32_t, 4))(l_1064.sba05)).w;
                        l_1031.s4 = l_1065;
                    }
                }
                l_1069 = (l_1068 = (((VECTOR(int64_t, 2))(l_1066.s22)).hi , l_1067));
                unsigned int result = 0;
                result += l_990;
                result += l_1066.s7;
                result += l_1066.s6;
                result += l_1066.s5;
                result += l_1066.s4;
                result += l_1066.s3;
                result += l_1066.s2;
                result += l_1066.s1;
                result += l_1066.s0;
                result += l_1067;
                result += l_1068;
                result += l_1069;
                atomic_add(&p_1124->l_special_values[92], result);
            }
            else
            { /* block id: 508 */
                (1 + 1);
            }
            return p_1124->g_78.f4;
        }
    }
    --l_1073;
    (*p_1124->g_691) &= p_14;
    return l_1076;
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_336 p_1124->g_283.f7 p_1124->g_286.f8.f4
 * writes: p_1124->g_283.f7 p_1124->g_286.f8.f4
 */
int16_t  func_15(int64_t  p_16, uint64_t  p_17, uint16_t  p_18, struct S4 * p_1124)
{ /* block id: 243 */
    int32_t *l_554[9][3][4] = {{{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7}},{{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7}},{{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7}},{{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7}},{{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7}},{{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7}},{{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7}},{{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7}},{{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7},{(void*)0,&p_1124->g_286.f7,&p_1124->g_550.f7,&p_1124->g_286.f7}}};
    int32_t **l_555 = &l_554[0][0][2];
    int i, j, k;
    (*p_1124->g_336) ^= p_18;
    (*l_555) = l_554[0][0][2];
    for (p_1124->g_286.f8.f4 = 0; (p_1124->g_286.f8.f4 < (-12)); p_1124->g_286.f8.f4 = safe_sub_func_int8_t_s_s(p_1124->g_286.f8.f4, 1))
    { /* block id: 248 */
        int64_t l_558[10][7][3] = {{{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L}},{{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L}},{{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L}},{{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L}},{{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L}},{{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L}},{{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L}},{{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L}},{{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L}},{{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L},{5L,0x58F9C5944BAF5DB2L,7L}}};
        int32_t l_559 = 0x444BC228L;
        int i, j, k;
        l_559 &= l_558[9][3][1];
    }
    return p_18;
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_249 p_1124->g_336 p_1124->g_283.f7 p_1124->g_282 p_1124->g_283 p_1124->g_433 p_1124->g_457 p_1124->g_484 p_1124->g_489 p_1124->g_35 p_1124->g_328 p_1124->g_329 p_1124->g_330 p_1124->g_520 p_1124->g_230 p_1124->g_286.f8.f2 p_1124->g_366 p_1124->g_534 p_1124->g_550 p_1124->g_70 p_1124->g_36 p_1124->g_299 p_1124->g_257
 * writes: p_1124->g_249 p_1124->g_286.f4.f4 p_1124->g_87 p_1124->g_78.f4 p_1124->g_309 p_1124->g_283 p_1124->g_70 p_1124->g_230.f1 p_1124->g_484 p_1124->g_49 p_1124->g_234 p_1124->g_230 p_1124->g_282 p_1124->g_68 p_1124->g_257 p_1124->g_520
 */
uint32_t  func_21(int32_t  p_22, struct S3  p_23, struct S3  p_24, uint64_t  p_25, struct S4 * p_1124)
{ /* block id: 180 */
    uint32_t l_395 = 0xB3673DBDL;
    VECTOR(uint16_t, 8) l_397 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x8909L), 0x8909L), 0x8909L, 65535UL, 0x8909L);
    VECTOR(uint64_t, 4) l_406 = (VECTOR(uint64_t, 4))(0x7B1D427FA3B8FBCAL, (VECTOR(uint64_t, 2))(0x7B1D427FA3B8FBCAL, 18446744073709551606UL), 18446744073709551606UL);
    int32_t l_422 = (-1L);
    int32_t l_441 = 0x3E6F98E2L;
    int32_t l_442 = 0x351D52C0L;
    int32_t l_443 = (-5L);
    int32_t l_444 = 0L;
    VECTOR(int32_t, 16) l_446 = (VECTOR(int32_t, 16))(0x3915D88BL, (VECTOR(int32_t, 4))(0x3915D88BL, (VECTOR(int32_t, 2))(0x3915D88BL, 0L), 0L), 0L, 0x3915D88BL, 0L, (VECTOR(int32_t, 2))(0x3915D88BL, 0L), (VECTOR(int32_t, 2))(0x3915D88BL, 0L), 0x3915D88BL, 0L, 0x3915D88BL, 0L);
    int16_t l_447 = 1L;
    int32_t *l_455 = (void*)0;
    uint16_t l_466 = 0x7328L;
    int64_t *l_472 = (void*)0;
    int8_t l_481 = (-5L);
    VECTOR(uint8_t, 8) l_527 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL);
    VECTOR(int16_t, 16) l_535 = (VECTOR(int16_t, 16))(0x7712L, (VECTOR(int16_t, 4))(0x7712L, (VECTOR(int16_t, 2))(0x7712L, 4L), 4L), 4L, 0x7712L, 4L, (VECTOR(int16_t, 2))(0x7712L, 4L), (VECTOR(int16_t, 2))(0x7712L, 4L), 0x7712L, 4L, 0x7712L, 4L);
    uint32_t *l_540 = &p_1124->g_108;
    uint32_t **l_539 = &l_540;
    uint32_t ***l_538 = &l_539;
    uint16_t l_541 = 65535UL;
    uint64_t *l_542 = (void*)0;
    uint64_t *l_543 = (void*)0;
    uint64_t *l_544[6][10][4] = {{{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7}},{{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7}},{{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7}},{{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7}},{{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7}},{{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7},{(void*)0,&p_1124->g_283[3].f8.f7,(void*)0,&p_1124->g_283[3].f4.f7}}};
    int16_t l_545[1];
    int64_t *l_546 = (void*)0;
    int64_t *l_547 = (void*)0;
    int64_t *l_548 = (void*)0;
    int64_t *l_549 = (void*)0;
    int32_t *l_552 = &p_1124->g_286.f4.f4;
    int32_t **l_551 = &l_552;
    int32_t l_553 = 6L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_545[i] = 5L;
    for (p_1124->g_249 = (-9); (p_1124->g_249 < 9); ++p_1124->g_249)
    { /* block id: 183 */
        uint8_t l_393 = 0UL;
        VECTOR(int16_t, 2) l_409 = (VECTOR(int16_t, 2))(0L, 0x224DL);
        VECTOR(int32_t, 2) l_419 = (VECTOR(int32_t, 2))(0x2F6F4ABCL, 0x22FE5B48L);
        int32_t *l_434 = &p_1124->g_286.f7;
        VECTOR(int32_t, 8) l_435 = (VECTOR(int32_t, 8))(0x02EDCC4BL, (VECTOR(int32_t, 4))(0x02EDCC4BL, (VECTOR(int32_t, 2))(0x02EDCC4BL, 1L), 1L), 1L, 0x02EDCC4BL, 1L);
        int32_t l_445[4][6];
        int8_t l_449 = 0x3AL;
        uint8_t l_450 = 253UL;
        int64_t *l_473 = (void*)0;
        int32_t *l_475 = (void*)0;
        int32_t *l_476 = &p_1124->g_286.f7;
        int32_t *l_477 = &l_442;
        int32_t *l_478 = (void*)0;
        int32_t *l_479 = &l_442;
        int32_t *l_480[1];
        int32_t l_482 = 1L;
        int64_t *l_498 = (void*)0;
        int64_t *l_499 = (void*)0;
        int64_t *l_500 = (void*)0;
        int64_t *l_501 = (void*)0;
        int64_t *l_502 = (void*)0;
        int64_t *l_503 = (void*)0;
        int64_t *l_504 = (void*)0;
        int64_t *l_505 = (void*)0;
        int64_t *l_506 = (void*)0;
        int64_t *l_507 = (void*)0;
        int64_t *l_508 = (void*)0;
        int64_t *l_509[4][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        VECTOR(uint8_t, 16) l_512 = (VECTOR(uint8_t, 16))(0x04L, (VECTOR(uint8_t, 4))(0x04L, (VECTOR(uint8_t, 2))(0x04L, 0UL), 0UL), 0UL, 0x04L, 0UL, (VECTOR(uint8_t, 2))(0x04L, 0UL), (VECTOR(uint8_t, 2))(0x04L, 0UL), 0x04L, 0UL, 0x04L, 0UL);
        VECTOR(uint16_t, 4) l_513 = (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 65534UL), 65534UL);
        VECTOR(uint64_t, 8) l_514 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL);
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 6; j++)
                l_445[i][j] = 0x793D96A8L;
        }
        for (i = 0; i < 1; i++)
            l_480[i] = &p_1124->g_283[3].f7;
        for (p_1124->g_286.f4.f4 = 3; (p_1124->g_286.f4.f4 > (-19)); p_1124->g_286.f4.f4--)
        { /* block id: 186 */
            int8_t *l_394[2][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
            VECTOR(uint64_t, 4) l_405 = (VECTOR(uint64_t, 4))(0x0B3168F6EF9368BCL, (VECTOR(uint64_t, 2))(0x0B3168F6EF9368BCL, 0x3B04BE8D7E177CEAL), 0x3B04BE8D7E177CEAL);
            VECTOR(uint64_t, 2) l_407 = (VECTOR(uint64_t, 2))(0UL, 0x78CDA6413EF62B4AL);
            int16_t *l_410 = (void*)0;
            int16_t *l_411 = (void*)0;
            int16_t *l_412 = &p_1124->g_87;
            int32_t *l_420 = (void*)0;
            int32_t *l_421[4][10][6] = {{{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7}},{{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7}},{{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7}},{{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7},{&p_1124->g_283[3].f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_283[3].f7,&p_1124->g_286.f7,&p_1124->g_286.f7}}};
            int i, j, k;
            l_422 |= ((l_419.y |= (((safe_rshift_func_int8_t_s_s((l_395 = l_393), 5)) , ((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 4))(p_1124->g_396.yxxy)).xzwzwzyxxwwzzyxw, ((VECTOR(uint16_t, 8))(l_397.s06040004)).s3235653651655072))).sc) >= (safe_add_func_int64_t_s_s(0L, ((l_397.s0 >= (safe_div_func_int16_t_s_s(p_24.f0, ((*l_412) = (safe_mul_func_uint16_t_u_u(((((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(4UL, ((VECTOR(uint64_t, 2))(0UL, 0x3BBD7D9C9AA60B38L)), 1UL)))), ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 2))(p_1124->g_404.xy)), ((VECTOR(uint64_t, 2))(l_405.wz))))).xxxxxyxyyyyxxxyy)).sc50e, ((VECTOR(uint64_t, 8))(l_406.zxwwxzxy)).lo, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_407.xyyx)))).wwxyxzzw)).odd))), ((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x1A35EB76F88AE0B0L, 0x9EE0F6D924F2173AL)), 0x79FDE5A4C0ACDB96L, 0UL)).xwzyyxxwyyywxyzx, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0xADD8FE94F1680B66L, 18446744073709551613UL)).yxxy)).ywzwzywzwxwyzzwy))).sd67f)).xzwzzyyyywxwxwxy)).s94db)))))).x & ((*p_1124->g_336) == l_393)) , p_23.f0), ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(0L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_1124->g_408.yxxxyxyx)).odd)).hi)), 0x260FL)).wwzyxyww, ((VECTOR(int16_t, 8))(l_409.xyyyyyyy))))).s6275251604371402, ((VECTOR(int16_t, 8))((-5L), 1L, 1L, 0x6B17L, 0x168FL, (-10L), (-5L), 0x7E39L)).s1120667645445463))).s7)))))) , ((safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((0x29BFL != (p_25 > l_407.x)), p_24.f0)), p_23.f0)) , 0xC479AD8A72D1DDE1L)))))) & 0x1EL);
            for (p_1124->g_78.f4 = 0; (p_1124->g_78.f4 != (-11)); p_1124->g_78.f4 = safe_sub_func_int32_t_s_s(p_1124->g_78.f4, 4))
            { /* block id: 193 */
                int8_t l_432 = 0x48L;
                if (((*p_1124->g_282) , l_393))
                { /* block id: 194 */
                    int8_t *l_428 = (void*)0;
                    int32_t l_429 = (-4L);
                    int32_t *l_430 = (void*)0;
                    for (p_1124->g_87 = 18; (p_1124->g_87 == (-1)); --p_1124->g_87)
                    { /* block id: 197 */
                        int8_t **l_427[4][8] = {{&p_1124->g_309[0],&p_1124->g_309[0],&p_1124->g_309[0],&p_1124->g_309[0],&l_394[1][1],&p_1124->g_309[0],&l_394[1][1],&l_394[0][1]},{&p_1124->g_309[0],&p_1124->g_309[0],&p_1124->g_309[0],&p_1124->g_309[0],&l_394[1][1],&p_1124->g_309[0],&l_394[1][1],&l_394[0][1]},{&p_1124->g_309[0],&p_1124->g_309[0],&p_1124->g_309[0],&p_1124->g_309[0],&l_394[1][1],&p_1124->g_309[0],&l_394[1][1],&l_394[0][1]},{&p_1124->g_309[0],&p_1124->g_309[0],&p_1124->g_309[0],&p_1124->g_309[0],&l_394[1][1],&p_1124->g_309[0],&l_394[1][1],&l_394[0][1]}};
                        int32_t **l_431 = &l_430;
                        int i, j;
                        l_419.y &= (&p_1124->g_323 != ((l_429 = (((p_1124->g_309[0] = &p_1124->g_353) == l_428) != FAKE_DIVERGE(p_1124->local_1_offset, get_local_id(1), 10))) , ((*l_431) = l_430)));
                    }
                }
                else
                { /* block id: 203 */
                    if (l_432)
                        break;
                    (*p_1124->g_282) = p_1124->g_433;
                }
            }
            l_434 = l_421[0][4][1];
        }
        if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_435.s5527)).xzyzxwyzyxzzzwww)).sf809)).w)
        { /* block id: 210 */
            int32_t *l_436 = &p_1124->g_286.f7;
            int32_t *l_437 = (void*)0;
            int32_t *l_438 = (void*)0;
            int32_t *l_439 = (void*)0;
            int32_t *l_440[2][1][2];
            int32_t l_448[6][4] = {{0x7F33C344L,0x7F33C344L,0x7F33C344L,0x7F33C344L},{0x7F33C344L,0x7F33C344L,0x7F33C344L,0x7F33C344L},{0x7F33C344L,0x7F33C344L,0x7F33C344L,0x7F33C344L},{0x7F33C344L,0x7F33C344L,0x7F33C344L,0x7F33C344L},{0x7F33C344L,0x7F33C344L,0x7F33C344L,0x7F33C344L},{0x7F33C344L,0x7F33C344L,0x7F33C344L,0x7F33C344L}};
            int32_t **l_453 = (void*)0;
            int32_t **l_454[10][8][3] = {{{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336}},{{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336}},{{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336}},{{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336}},{{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336}},{{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336}},{{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336}},{{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336}},{{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336}},{{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336},{&l_440[1][0][1],&l_437,&p_1124->g_336}}};
            int32_t *l_456 = (void*)0;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_440[i][j][k] = &l_422;
                }
            }
            l_450--;
            l_455 = &p_1124->g_70;
            (*l_455) = 0x40B786FEL;
            l_456 = &p_22;
        }
        else
        { /* block id: 215 */
            uint16_t *l_460[5];
            int32_t l_461 = 0x7198C870L;
            int32_t l_467[10][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
            VECTOR(int32_t, 2) l_474 = (VECTOR(int32_t, 2))(0x4BEBEB32L, 0x6F58A1B8L);
            int i, j;
            for (i = 0; i < 5; i++)
                l_460[i] = &p_1124->g_283[3].f8.f1;
            (*p_1124->g_336) = (p_1124->g_457 , (safe_mod_func_int8_t_s_s(((l_461 = p_25) | (safe_mul_func_uint16_t_u_u((p_1124->g_230.f1 = ((safe_lshift_func_int16_t_s_s(l_466, 12)) <= 253UL)), l_467[3][0]))), ((safe_mod_func_uint64_t_u_u(p_24.f0, (l_474.y ^= ((&l_447 != &p_1124->g_87) ^ (l_472 == l_473))))) & 0x583FC6F8L))));
            if ((*p_1124->g_336))
                break;
            (*p_1124->g_336) |= p_24.f0;
            (*p_1124->g_336) = p_25;
        }
        p_1124->g_484[1][0]++;
        if ((safe_lshift_func_uint8_t_u_s((p_1124->g_489 , (safe_div_func_uint32_t_u_u((!(((p_23.f0 <= ((&p_1124->g_372 != (void*)0) , 18446744073709551615UL)) <= (p_1124->g_49 = (safe_mul_func_int8_t_s_s(((((&p_1124->g_328 == &p_1124->g_328) < ((*l_477) = (p_24.f0 && ((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_1124->g_35.x, p_25)), 2)) || (**p_1124->g_328))))) >= p_22) & 1UL), 0x35L)))) , (**p_1124->g_328))), (*p_1124->g_336)))), l_395)))
        { /* block id: 227 */
            (*l_477) |= ((*p_1124->g_282) , ((((0L && (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 2))((-6L), 0x17L)).lo, 1))) != p_24.f0) || ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 2))(1UL, 4UL)), ((VECTOR(uint8_t, 2))(l_512.s1b))))).yyyyyyyx)).s7) || ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_513.yz)).yyyx)), 0x7EB6L, 65527UL, 0xD850L, 0x2A9AL)).s3));
            (*l_477) = ((*l_477) < ((VECTOR(uint64_t, 16))(l_514.s3406313453121323)).s7);
        }
        else
        { /* block id: 230 */
            uint8_t *l_519[10];
            int i;
            for (i = 0; i < 10; i++)
                l_519[i] = &p_1124->g_88;
            (*l_479) &= ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((p_1124->g_234.s7 = p_23.f0), 0)), ((void*)0 != &l_445[1][3]))) && (*p_1124->g_336));
            (*l_479) &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1124->g_520.s3723)).zzwyxwzx)).s0;
        }
    }
    (*p_1124->g_336) = ((VECTOR(int32_t, 2))(0L, 0x04DA76ABL)).lo;
    p_1124->g_520.s6 ^= ((VECTOR(int32_t, 4))(((safe_mul_func_int16_t_s_s((((0UL < ((*p_1124->g_336) = (p_1124->g_230 , (((*l_551) = func_58(l_472, (p_1124->g_286.f8.f2 , ((((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_527.s60)).yxyy)).xzzyzwwyzzywyyxw)))).s4, ((safe_mul_func_int16_t_s_s(p_1124->g_366[5], (((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(p_1124->g_534.s1575432324060726)).sc, 10)), ((VECTOR(int16_t, 2))(l_535.sba)).even)) <= p_1124->g_230.f1) > (l_443 = (safe_add_func_int64_t_s_s(((void*)0 != l_538), (l_545[0] = l_541))))))) & p_22))) != p_22) , p_1124->g_550) , p_22)), l_543, p_1124)) != p_1124->g_336)))) < 7UL) | 1UL), 1L)) <= l_553), ((VECTOR(int32_t, 2))(0x0EF79923L)), (-1L))).y;
    return (*p_1124->g_329);
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_336
 * writes: p_1124->g_283.f7
 */
int32_t  func_37(int64_t * p_38, int64_t * p_39, int64_t * p_40, int64_t * p_41, int64_t * p_42, struct S4 * p_1124)
{ /* block id: 176 */
    uint32_t *l_383 = &p_1124->g_312;
    uint32_t **l_382 = &l_383;
    uint32_t ***l_381 = &l_382;
    int32_t l_384 = 0x286FEB07L;
    (*p_1124->g_336) = ((void*)0 == l_381);
    return l_384;
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_35 p_1124->g_36 p_1124->g_68 p_1124->g_88 p_1124->g_70 p_1124->g_78.f7 p_1124->g_95 p_1124->g_comm_values p_1124->g_78.f1 p_1124->g_87 p_1124->g_49 p_1124->g_230 p_1124->g_234 p_1124->g_249 p_1124->g_257 p_1124->g_282 p_1124->g_299 p_1124->g_286.f1 p_1124->g_309 p_1124->g_328 p_1124->g_336 p_1124->g_366
 * writes: p_1124->g_88 p_1124->g_70 p_1124->g_108 p_1124->g_87 p_1124->g_49 p_1124->g_230 p_1124->g_249 p_1124->g_78.f1 p_1124->g_282 p_1124->g_68 p_1124->g_257 p_1124->g_312 p_1124->g_323 p_1124->g_286.f4.f4 p_1124->g_328 p_1124->g_336 p_1124->g_283.f7 p_1124->g_366 p_1124->g_371
 */
int64_t * func_43(uint8_t  p_44, uint32_t  p_45, int64_t * p_46, int32_t  p_47, int64_t  p_48, struct S4 * p_1124)
{ /* block id: 8 */
    int64_t *l_54[2];
    int64_t **l_306[4][3] = {{(void*)0,&p_1124->g_68[4][5][4],(void*)0},{(void*)0,&p_1124->g_68[4][5][4],(void*)0},{(void*)0,&p_1124->g_68[4][5][4],(void*)0},{(void*)0,&p_1124->g_68[4][5][4],(void*)0}};
    int32_t l_307[5];
    uint32_t *l_308 = &p_1124->g_108;
    int8_t *l_310 = (void*)0;
    uint32_t *l_311 = &p_1124->g_312;
    int8_t l_315 = 0x14L;
    int64_t l_316 = 0x7B5F2150038A56F9L;
    int16_t l_321 = 0x493FL;
    int32_t *l_335 = &p_1124->g_283[3].f7;
    struct S3 l_348 = {0x62B05023B0A0897EL};
    uint16_t l_378[6];
    int i, j;
    for (i = 0; i < 2; i++)
        l_54[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_307[i] = (-5L);
    for (i = 0; i < 6; i++)
        l_378[i] = 7UL;
    if ((((l_54[1] != (p_1124->g_68[0][0][2] = func_55(p_1124->g_35.x, p_46, p_1124))) , FAKE_DIVERGE(p_1124->local_1_offset, get_local_id(1), 10)) && (l_307[0] = ((((*l_308) = l_307[3]) > l_307[3]) & (6UL && (p_1124->g_286.f1 && (~(((*l_311) = (p_1124->g_309[0] == l_310)) , p_44))))))))
    { /* block id: 145 */
        int32_t *l_313 = (void*)0;
        int32_t *l_314[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_317 = (-7L);
        uint64_t l_318 = 0x4D4EB38D698F9D58L;
        int i;
        l_318--;
        l_321 &= p_45;
    }
    else
    { /* block id: 148 */
        int32_t *l_322 = &p_1124->g_323;
        int32_t **l_324 = (void*)0;
        int32_t *l_327 = &p_1124->g_286.f4.f4;
        volatile uint32_t ***l_331 = &p_1124->g_328;
        int32_t *l_332 = &p_1124->g_286.f7;
        VECTOR(int32_t, 16) l_338 = (VECTOR(int32_t, 16))(0x7CBE46A5L, (VECTOR(int32_t, 4))(0x7CBE46A5L, (VECTOR(int32_t, 2))(0x7CBE46A5L, (-3L)), (-3L)), (-3L), 0x7CBE46A5L, (-3L), (VECTOR(int32_t, 2))(0x7CBE46A5L, (-3L)), (VECTOR(int32_t, 2))(0x7CBE46A5L, (-3L)), 0x7CBE46A5L, (-3L), 0x7CBE46A5L, (-3L));
        int16_t *l_355[3][6][8] = {{{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0},{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0},{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0},{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0},{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0},{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0}},{{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0},{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0},{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0},{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0},{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0},{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0}},{{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0},{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0},{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0},{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0},{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0},{&p_1124->g_87,(void*)0,&l_321,&l_321,&p_1124->g_87,&l_321,&l_321,(void*)0}}};
        struct S3 *l_369[7] = {&l_348,&l_348,&l_348,&l_348,&l_348,&l_348,&l_348};
        VECTOR(uint16_t, 2) l_379 = (VECTOR(uint16_t, 2))(65535UL, 65535UL);
        int i, j, k;
        p_1124->g_70 = ((((*l_327) = (0L != (((((~(0x19L || ((((*l_322) = p_1124->g_35.x) , (p_46 = p_1124->g_68[5][4][0])) != (void*)0))) , ((l_324 == l_324) , (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x293BL, (-1L))).even, ((l_307[4] , (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(4294967295UL, (l_321 >= l_307[3]), 0x873195F4L, 4294967289UL)))).hi, ((VECTOR(uint32_t, 2))(4294967295UL))))), 1UL, ((VECTOR(uint32_t, 8))(0xC331D66AL)), 4294967290UL, p_48, 0xD97E1622L, 1UL, 0x72D64E67L)).s9 | p_1124->g_78.f1)) != FAKE_DIVERGE(p_1124->group_0_offset, get_group_id(0), 10)))))) , p_47) >= 0x544FA47F7E1DC9B0L) == p_48))) , 0xABL) , l_307[1]);
        (*l_331) = p_1124->g_328;
        l_332 = &p_1124->g_70;
        for (l_321 = 13; (l_321 > (-1)); l_321 = safe_sub_func_uint32_t_u_u(l_321, 4))
        { /* block id: 157 */
            VECTOR(int32_t, 4) l_337 = (VECTOR(int32_t, 4))(0x4ED2F058L, (VECTOR(int32_t, 2))(0x4ED2F058L, 0x53331D7EL), 0x53331D7EL);
            int16_t *l_343 = (void*)0;
            int16_t *l_344 = (void*)0;
            int16_t *l_345 = &p_1124->g_87;
            int8_t *l_349 = (void*)0;
            int8_t **l_350 = &p_1124->g_309[0];
            uint64_t l_354 = 0x5CBBB91D3C02A93CL;
            int i;
            p_1124->g_336 = l_335;
            if ((l_354 |= ((*l_335) = (((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_337.xxzwzxzzwywywxwz)).odd, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(l_338.s30a0c0d34c769216)).sbd02, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(0L, 0x5A2F214EL, 0x4CD9B15BL, 0x71AF1DA5L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x3667C42EL, 0x76EF841CL)))), 1L, 1L)))).s52, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(8L, 7L)), (-8L), 0x40BA3C26L, 0L, ((safe_mod_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u(((*l_345) ^= p_48), 5)) , (-5L)), (safe_mod_func_uint32_t_u_u(((l_348 , l_349) != ((*l_350) = l_349)), p_47)))) , ((safe_sub_func_uint16_t_u_u((253UL | (((*l_345) = (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(0xD0AF571070C99AFAL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 8))(2UL, (l_327 != (void*)0), p_47, 18446744073709551615UL, 18446744073709551615UL, 3UL, 0x1648D0FC2AB59CE2L, 0xAE5F7EF707963AC8L)), (uint64_t)l_337.y))).lo)), 0x368CADC770E13B36L, 0xAE035F032FDA677AL, 1UL)).s0612324715667725)).s30c5)).hi)).odd | p_1124->g_353)) >= 9L)), p_47)) , p_45)), 0x2945AE90L, 0x335274AFL)).s3060027561477026)).sd3, ((VECTOR(int32_t, 2))(0x2F3E26E2L))))).yyxy))).lo, ((VECTOR(int32_t, 2))((-1L)))))).xyyxxxyx, ((VECTOR(int32_t, 8))(0x6C570AC0L))))).s43, ((VECTOR(int32_t, 2))(0L))))).hi , (-4L)))))
            { /* block id: 164 */
                int32_t *l_356 = &p_1124->g_286.f7;
                int32_t *l_357 = (void*)0;
                int32_t *l_358 = &l_307[3];
                int32_t *l_359 = &p_1124->g_283[3].f7;
                int32_t *l_360 = &l_307[3];
                int32_t *l_361 = &l_307[3];
                int32_t *l_362 = &p_1124->g_70;
                int32_t *l_363 = (void*)0;
                int32_t *l_364 = (void*)0;
                int32_t *l_365 = (void*)0;
                struct S3 **l_370[8][4];
                int i, j;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_370[i][j] = &l_369[6];
                }
                (*l_332) &= ((*p_1124->g_336) = (&l_321 == l_355[2][5][5]));
                --p_1124->g_366[6];
                p_1124->g_371[1][0] = l_369[6];
            }
            else
            { /* block id: 169 */
                int32_t l_377 = 0x4CE8B3C0L;
                (*l_335) = ((safe_lshift_func_int8_t_s_u((GROUP_DIVERGE(0, 1) & ((VECTOR(int8_t, 8))(p_1124->g_375.s71a75eb2)).s4), (safe_unary_minus_func_uint16_t_u((l_378[5] &= l_377))))) < (((VECTOR(uint16_t, 16))(l_379.yyxxyxxyxyxxyxxy)).sa < ((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0x64F7L, 0x7E7FL)))).yxyxxxyx))).s3));
            }
        }
    }
    return p_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_36 p_1124->g_68 p_1124->g_35 p_1124->g_88 p_1124->g_70 p_1124->g_78.f7 p_1124->g_95 p_1124->g_comm_values p_1124->g_78.f1 p_1124->g_87 p_1124->g_49 p_1124->g_230 p_1124->g_234 p_1124->g_249 p_1124->g_257 p_1124->g_282 p_1124->g_299
 * writes: p_1124->g_88 p_1124->g_70 p_1124->g_108 p_1124->g_87 p_1124->g_49 p_1124->g_230 p_1124->g_249 p_1124->g_78.f1 p_1124->g_282 p_1124->g_68 p_1124->g_257
 */
int64_t * func_55(uint64_t  p_56, int64_t * p_57, struct S4 * p_1124)
{ /* block id: 9 */
    int64_t l_67 = (-1L);
    int32_t *l_69 = &p_1124->g_70;
    int32_t **l_305 = &l_69;
    (*l_305) = func_58(func_62(p_1124->g_36.w, (l_67 ^ (((0x202DL | 0xDBDFL) , &l_67) == (GROUP_DIVERGE(2, 1) , p_1124->g_68[4][5][4]))), l_69, p_1124->g_35.x, p_1124), p_1124->g_78.f7, p_1124->g_68[4][5][4], p_1124);
    return p_1124->g_68[4][5][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_87 p_1124->g_49 p_1124->g_230 p_1124->g_234 p_1124->g_78.f7 p_1124->g_35 p_1124->g_249 p_1124->g_257 p_1124->g_78.f1 p_1124->g_70 p_1124->g_282 p_1124->g_36 p_1124->g_299
 * writes: p_1124->g_87 p_1124->g_49 p_1124->g_230 p_1124->g_108 p_1124->g_249 p_1124->g_70 p_1124->g_78.f1 p_1124->g_282 p_1124->g_68 p_1124->g_257
 */
int32_t * func_58(int64_t * p_59, int16_t  p_60, int64_t * p_61, struct S4 * p_1124)
{ /* block id: 109 */
    VECTOR(uint8_t, 4) l_235 = (VECTOR(uint8_t, 4))(0x05L, (VECTOR(uint8_t, 2))(0x05L, 0UL), 0UL);
    int64_t *l_246 = (void*)0;
    uint32_t *l_247[8] = {(void*)0,&p_1124->g_108,(void*)0,(void*)0,&p_1124->g_108,(void*)0,(void*)0,&p_1124->g_108};
    uint32_t *l_248 = &p_1124->g_249;
    int32_t *l_250[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    VECTOR(uint64_t, 16) l_272 = (VECTOR(uint64_t, 16))(0xBC98EC5190CC3448L, (VECTOR(uint64_t, 4))(0xBC98EC5190CC3448L, (VECTOR(uint64_t, 2))(0xBC98EC5190CC3448L, 8UL), 8UL), 8UL, 0xBC98EC5190CC3448L, 8UL, (VECTOR(uint64_t, 2))(0xBC98EC5190CC3448L, 8UL), (VECTOR(uint64_t, 2))(0xBC98EC5190CC3448L, 8UL), 0xBC98EC5190CC3448L, 8UL, 0xBC98EC5190CC3448L, 8UL);
    struct S2 *l_285 = &p_1124->g_286;
    VECTOR(int8_t, 8) l_291 = (VECTOR(int8_t, 8))(0x22L, (VECTOR(int8_t, 4))(0x22L, (VECTOR(int8_t, 2))(0x22L, 0x76L), 0x76L), 0x76L, 0x22L, 0x76L);
    int32_t l_298 = 0L;
    struct S2 *l_301 = (void*)0;
    struct S2 **l_300[4][5] = {{&l_301,&l_301,&l_301,&l_301,&l_301},{&l_301,&l_301,&l_301,&l_301,&l_301},{&l_301,&l_301,&l_301,&l_301,&l_301},{&l_301,&l_301,&l_301,&l_301,&l_301}};
    VECTOR(int32_t, 8) l_303 = (VECTOR(int32_t, 8))(0x61243390L, (VECTOR(int32_t, 4))(0x61243390L, (VECTOR(int32_t, 2))(0x61243390L, 0L), 0L), 0L, 0x61243390L, 0L);
    int32_t *l_304 = &l_298;
    int i, j;
    for (p_1124->g_87 = (-11); (p_1124->g_87 <= 20); ++p_1124->g_87)
    { /* block id: 112 */
        for (p_1124->g_49 = 0; (p_1124->g_49 == 56); p_1124->g_49++)
        { /* block id: 115 */
            struct S1 *l_231 = &p_1124->g_230;
            if (p_60)
                break;
            (*l_231) = p_1124->g_230;
        }
    }
    p_1124->g_70 = (safe_add_func_uint8_t_u_u(p_60, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_1124->g_234.s0619)).lo)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 16))(l_235.yzxyyyzwwxxwwzwz)).odd, ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(0UL, 0xD3L, 255UL, 0xD9L)), 0x12L, (safe_div_func_uint64_t_u_u(p_1124->g_230.f1, 18446744073709551608UL)), 0x8BL, 255UL)).lo, (uint8_t)0x0AL, (uint8_t)((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((65535UL && (((*l_248) = (safe_div_func_int32_t_s_s(((-1L) < ((VECTOR(uint64_t, 16))((safe_rshift_func_uint8_t_u_s((((p_1124->g_108 = ((void*)0 != l_246)) , 0x4DB3F5A9L) ^ 0L), 7)), ((VECTOR(uint64_t, 4))(0x334DFD4293278506L)), 0x61E43FC740E43F0DL, ((VECTOR(uint64_t, 4))(0x6911E72491D7C01FL)), 18446744073709551612UL, ((VECTOR(uint64_t, 4))(0x89A63BA882B273C9L)), 18446744073709551615UL)).sa), p_1124->g_78.f7))) , (-3L))), 8)), l_235.y)) , 0UL)))).xxwzwyxz))), 9UL, 0x50L, p_60, 0x3FL, l_235.z, p_60, 0x30L, 255UL)).s3c)).xxyyxyyxyyyxxxxy)).s1, 0x17L, 4UL, 0x14L, ((VECTOR(uint8_t, 2))(248UL)), 3UL, p_60, 0xD1L, l_235.z, p_1124->g_35.x, 0x89L, ((VECTOR(uint8_t, 2))(0x73L)), 0xF5L, 248UL)).se1, ((VECTOR(uint8_t, 2))(0xBBL))))).xyyx)).x));
    if (p_1124->g_249)
    { /* block id: 123 */
        int32_t l_258 = 0x4461A249L;
        VECTOR(uint32_t, 16) l_261 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL), 4294967295UL, 1UL, 4294967295UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 1UL, 4294967295UL, 1UL, 4294967295UL);
        int16_t *l_268 = (void*)0;
        int16_t *l_269[10][2] = {{(void*)0,&p_1124->g_87},{(void*)0,&p_1124->g_87},{(void*)0,&p_1124->g_87},{(void*)0,&p_1124->g_87},{(void*)0,&p_1124->g_87},{(void*)0,&p_1124->g_87},{(void*)0,&p_1124->g_87},{(void*)0,&p_1124->g_87},{(void*)0,&p_1124->g_87},{(void*)0,&p_1124->g_87}};
        VECTOR(uint64_t, 16) l_273 = (VECTOR(uint64_t, 16))(0x0342B1AC3C38392EL, (VECTOR(uint64_t, 4))(0x0342B1AC3C38392EL, (VECTOR(uint64_t, 2))(0x0342B1AC3C38392EL, 0xE7512D4A1152798DL), 0xE7512D4A1152798DL), 0xE7512D4A1152798DL, 0x0342B1AC3C38392EL, 0xE7512D4A1152798DL, (VECTOR(uint64_t, 2))(0x0342B1AC3C38392EL, 0xE7512D4A1152798DL), (VECTOR(uint64_t, 2))(0x0342B1AC3C38392EL, 0xE7512D4A1152798DL), 0x0342B1AC3C38392EL, 0xE7512D4A1152798DL, 0x0342B1AC3C38392EL, 0xE7512D4A1152798DL);
        VECTOR(uint64_t, 4) l_274 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 1UL);
        int32_t l_277[3][10][8] = {{{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L}},{{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L}},{{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L},{1L,0x0BD7A3C5L,0x30B13288L,0x1C531537L,0x3EB84C35L,0x7AA1FBE2L,0x30B13288L,1L}}};
        uint16_t *l_278 = &p_1124->g_78.f1;
        uint16_t *l_279 = (void*)0;
        uint16_t *l_280 = (void*)0;
        uint16_t *l_281 = &p_1124->g_230.f1;
        int i, j, k;
        p_1124->g_70 |= (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((GROUP_DIVERGE(2, 1) || (safe_sub_func_int64_t_s_s(((safe_add_func_uint32_t_u_u(((0x8C4364A3L >= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(0x67E8D0DDL, 0x6D260FB1L)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_1124->g_257.xyyxxyyy)))).s71))).xyyxxxyy)).s7) >= l_258), (safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(l_261.s766876d673e7f411)).sa, (safe_lshift_func_uint8_t_u_u(l_261.s0, (safe_add_func_int32_t_s_s((p_60 && (~3L)), (GROUP_DIVERGE(1, 1) == ((safe_div_func_int16_t_s_s((p_1124->g_87 = (255UL && l_261.sf)), ((*l_281) ^= ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(1UL, 4UL)), ((*l_278) |= (0UL != (safe_add_func_uint32_t_u_u(((((l_277[1][7][5] = ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(0x70CE0AC1F914459BL, ((VECTOR(uint64_t, 2))(l_272.sd5)), ((VECTOR(uint64_t, 4))(l_273.sa47d)), ((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 4))(l_274.ywwz)).hi, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 8))(0xF00281290D929700L, 0x527C4655FF8F7150L, 0UL, (safe_mul_func_uint16_t_u_u(0x09DBL, 65535UL)), p_60, ((VECTOR(uint64_t, 2))(18446744073709551613UL)), 0UL)), ((VECTOR(uint64_t, 8))(0x852797F1FA50CE07L)), ((VECTOR(uint64_t, 8))(0xB1FF3E3909E9DBCFL))))).s1567631776657435)).sf5, ((VECTOR(uint64_t, 2))(0xCF57469ACD80AD72L))))).xyyxyxxy, ((VECTOR(uint64_t, 8))(0xE67A4216A6A1FEF0L))))).even)).xyzyxxxy, ((VECTOR(uint64_t, 8))(18446744073709551614UL))))), 1UL)).s7, 18446744073709551615UL, 18446744073709551615UL, 0UL)).x) || 0x14B7105DE8DD659BL) | (-2L)) || p_60), 4294967294UL)))), ((VECTOR(uint16_t, 4))(0UL)), 65535UL)))).s2))) , p_1124->g_35.x)))))))))) >= p_60), p_60))) == p_1124->g_49), 0x0A2EL, ((VECTOR(int16_t, 8))(0x622BL)), ((VECTOR(int16_t, 2))(0x556FL)), (-6L), 0x39AEL, 1L, 0x6EE1L)).sc8c7)).odd, ((VECTOR(int16_t, 2))(0x0369L)), ((VECTOR(int16_t, 2))(0L))))))).hi, 5L));
    }
    else
    { /* block id: 129 */
        struct S2 **l_284[1][10][3] = {{{&p_1124->g_282,&p_1124->g_282,&p_1124->g_282},{&p_1124->g_282,&p_1124->g_282,&p_1124->g_282},{&p_1124->g_282,&p_1124->g_282,&p_1124->g_282},{&p_1124->g_282,&p_1124->g_282,&p_1124->g_282},{&p_1124->g_282,&p_1124->g_282,&p_1124->g_282},{&p_1124->g_282,&p_1124->g_282,&p_1124->g_282},{&p_1124->g_282,&p_1124->g_282,&p_1124->g_282},{&p_1124->g_282,&p_1124->g_282,&p_1124->g_282},{&p_1124->g_282,&p_1124->g_282,&p_1124->g_282},{&p_1124->g_282,&p_1124->g_282,&p_1124->g_282}}};
        int8_t *l_292[7][8][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_293 = 1L;
        int64_t **l_294 = &p_1124->g_68[4][5][4];
        int64_t **l_295 = &l_246;
        int32_t l_302[3][9] = {{0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL},{0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL},{0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL,0x723B99BFL}};
        int i, j, k;
        p_1124->g_257.y |= ((((p_1124->g_282 = p_1124->g_282) != (l_285 = l_285)) >= (0x5123BF60199D5833L == (safe_rshift_func_int16_t_s_u((p_1124->g_36.w != (safe_sub_func_int8_t_s_s((l_293 &= ((VECTOR(int8_t, 8))(l_291.s35040240)).s3), ((((((*l_295) = ((*l_294) = p_59)) != ((safe_mod_func_int8_t_s_s(l_298, p_60)) , p_1124->g_299)) >= p_60) , l_300[3][1]) == (void*)0)))), l_302[2][2])))) == FAKE_DIVERGE(p_1124->local_0_offset, get_local_id(0), 10));
        l_302[2][8] = ((VECTOR(int32_t, 16))(l_303.s2334062604122474)).sd;
    }
    return &p_1124->g_70;
}


/* ------------------------------------------ */
/* 
 * reads : p_1124->g_88 p_1124->g_70 p_1124->g_78.f7 p_1124->g_95 p_1124->g_comm_values p_1124->g_78.f1 p_1124->g_35
 * writes: p_1124->g_88 p_1124->g_70 p_1124->g_108
 */
int64_t * func_62(int8_t  p_63, uint32_t  p_64, int32_t * p_65, uint32_t  p_66, struct S4 * p_1124)
{ /* block id: 10 */
    struct S0 *l_76 = (void*)0;
    int32_t l_83 = 0x6C64A282L;
    int32_t l_84 = 0x4DE9A657L;
    int32_t l_85 = 8L;
    int32_t l_86[9][4] = {{1L,0x1E08BDFDL,1L,1L},{1L,0x1E08BDFDL,1L,1L},{1L,0x1E08BDFDL,1L,1L},{1L,0x1E08BDFDL,1L,1L},{1L,0x1E08BDFDL,1L,1L},{1L,0x1E08BDFDL,1L,1L},{1L,0x1E08BDFDL,1L,1L},{1L,0x1E08BDFDL,1L,1L},{1L,0x1E08BDFDL,1L,1L}};
    VECTOR(int8_t, 16) l_96 = (VECTOR(int8_t, 16))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, 0x20L), 0x20L), 0x20L, 0x15L, 0x20L, (VECTOR(int8_t, 2))(0x15L, 0x20L), (VECTOR(int8_t, 2))(0x15L, 0x20L), 0x15L, 0x20L, 0x15L, 0x20L);
    uint32_t *l_107 = &p_1124->g_108;
    int64_t *l_225 = (void*)0;
    int i, j;
    for (p_63 = (-13); (p_63 >= 10); p_63 = safe_add_func_int16_t_s_s(p_63, 9))
    { /* block id: 13 */
        int64_t *l_75 = (void*)0;
        struct S0 *l_77 = &p_1124->g_78;
        int32_t *l_79 = &p_1124->g_70;
        int32_t *l_80 = &p_1124->g_70;
        int32_t *l_81 = (void*)0;
        int32_t *l_82[2][8][9] = {{{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70},{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70},{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70},{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70},{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70},{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70},{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70},{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70}},{{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70},{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70},{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70},{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70},{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70},{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70},{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70},{&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70,&p_1124->g_70}}};
        int i, j, k;
        for (p_64 = (-23); (p_64 > 41); p_64 = safe_add_func_uint16_t_u_u(p_64, 6))
        { /* block id: 16 */
            return l_75;
        }
        l_77 = l_76;
        ++p_1124->g_88;
    }
    (*p_65) = (*p_65);
    p_1124->g_70 = (((p_1124->g_78.f7 > (((safe_rshift_func_uint8_t_u_s(p_64, 2)) & (safe_add_func_uint64_t_u_u((((0xC011B9A2A759B898L & ((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 2))(0x0850C123E8B2B7EFL, (-1L))).yxyx, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(p_1124->g_95.s6670126464447366)))))).s6a)).xxxy))).w) , ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_96.s09c7e4f7)).s15)).odd) || (safe_rshift_func_uint16_t_u_s((((*l_107) = (safe_mod_func_int8_t_s_s(((p_66 , l_85) < ((safe_div_func_int64_t_s_s(5L, p_63)) <= (p_1124->g_comm_values[p_1124->tid] <= (p_66 >= (-9L))))), 1L))) >= l_96.sf), 3))), l_86[8][0]))) < (-1L))) == p_1124->g_78.f1) || p_1124->g_35.x);
    if ((atomic_inc(&p_1124->l_atomic_input[95]) == 1))
    { /* block id: 26 */
        int32_t l_109 = 0L;
        for (l_109 = (-9); (l_109 >= (-27)); l_109 = safe_sub_func_int16_t_s_s(l_109, 7))
        { /* block id: 29 */
            int32_t l_112 = 0x5E445A64L;
            VECTOR(uint16_t, 8) l_154 = (VECTOR(uint16_t, 8))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0x318DL), 0x318DL), 0x318DL, 7UL, 0x318DL);
            int32_t *l_155 = &l_112;
            VECTOR(int32_t, 2) l_156 = (VECTOR(int32_t, 2))(0L, (-10L));
            uint64_t l_157 = 1UL;
            int i;
            for (l_112 = 0; (l_112 > 12); ++l_112)
            { /* block id: 32 */
                int32_t l_115 = 0x5861C513L;
                if (l_115)
                { /* block id: 33 */
                    uint32_t l_116[4][7] = {{4294967289UL,4294967289UL,1UL,0xC68AEAC4L,1UL,0xC68AEAC4L,1UL},{4294967289UL,4294967289UL,1UL,0xC68AEAC4L,1UL,0xC68AEAC4L,1UL},{4294967289UL,4294967289UL,1UL,0xC68AEAC4L,1UL,0xC68AEAC4L,1UL},{4294967289UL,4294967289UL,1UL,0xC68AEAC4L,1UL,0xC68AEAC4L,1UL}};
                    VECTOR(int32_t, 2) l_117 = (VECTOR(int32_t, 2))(0x5B8FCCBCL, 0x5BB8F8D5L);
                    int i, j;
                    l_117.x &= l_116[0][1];
                }
                else
                { /* block id: 35 */
                    uint8_t l_118[1];
                    int8_t l_119[4][4] = {{(-2L),(-1L),0x56L,(-1L)},{(-2L),(-1L),0x56L,(-1L)},{(-2L),(-1L),0x56L,(-1L)},{(-2L),(-1L),0x56L,(-1L)}};
                    int64_t l_120 = 0x0F738818BC76B673L;
                    struct S1 l_121 = {0x61708793L,0UL};
                    int16_t l_122 = 0x3E8DL;
                    int32_t l_123 = 0x31147FA4L;
                    uint32_t l_124 = 4294967289UL;
                    int64_t l_127 = 0x39E97E82FD218401L;
                    uint16_t l_128 = 0x5127L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_118[i] = 1UL;
                    l_119[0][2] = (l_118[0] = (-1L));
                    if (((VECTOR(int32_t, 4))(l_120, (l_121 , ((l_122 ^= 0x6202L) , ((((l_124--) , l_127) , l_128) , (-1L)))), 5L, 0x203FFEE2L)).z)
                    { /* block id: 40 */
                        int32_t l_130 = 0x7ECBFEF2L;
                        int32_t *l_129 = &l_130;
                        int32_t *l_131[3];
                        struct S1 l_132[5][3][8] = {{{{-3L,65535UL},{1L,0x087EL},{1L,1UL},{-10L,0UL},{0L,0xC5C6L},{0x768AE125L,0xE72BL},{-1L,1UL},{-1L,65532UL}},{{-3L,65535UL},{1L,0x087EL},{1L,1UL},{-10L,0UL},{0L,0xC5C6L},{0x768AE125L,0xE72BL},{-1L,1UL},{-1L,65532UL}},{{-3L,65535UL},{1L,0x087EL},{1L,1UL},{-10L,0UL},{0L,0xC5C6L},{0x768AE125L,0xE72BL},{-1L,1UL},{-1L,65532UL}}},{{{-3L,65535UL},{1L,0x087EL},{1L,1UL},{-10L,0UL},{0L,0xC5C6L},{0x768AE125L,0xE72BL},{-1L,1UL},{-1L,65532UL}},{{-3L,65535UL},{1L,0x087EL},{1L,1UL},{-10L,0UL},{0L,0xC5C6L},{0x768AE125L,0xE72BL},{-1L,1UL},{-1L,65532UL}},{{-3L,65535UL},{1L,0x087EL},{1L,1UL},{-10L,0UL},{0L,0xC5C6L},{0x768AE125L,0xE72BL},{-1L,1UL},{-1L,65532UL}}},{{{-3L,65535UL},{1L,0x087EL},{1L,1UL},{-10L,0UL},{0L,0xC5C6L},{0x768AE125L,0xE72BL},{-1L,1UL},{-1L,65532UL}},{{-3L,65535UL},{1L,0x087EL},{1L,1UL},{-10L,0UL},{0L,0xC5C6L},{0x768AE125L,0xE72BL},{-1L,1UL},{-1L,65532UL}},{{-3L,65535UL},{1L,0x087EL},{1L,1UL},{-10L,0UL},{0L,0xC5C6L},{0x768AE125L,0xE72BL},{-1L,1UL},{-1L,65532UL}}},{{{-3L,65535UL},{1L,0x087EL},{1L,1UL},{-10L,0UL},{0L,0xC5C6L},{0x768AE125L,0xE72BL},{-1L,1UL},{-1L,65532UL}},{{-3L,65535UL},{1L,0x087EL},{1L,1UL},{-10L,0UL},{0L,0xC5C6L},{0x768AE125L,0xE72BL},{-1L,1UL},{-1L,65532UL}},{{-3L,65535UL},{1L,0x087EL},{1L,1UL},{-10L,0UL},{0L,0xC5C6L},{0x768AE125L,0xE72BL},{-1L,1UL},{-1L,65532UL}}},{{{-3L,65535UL},{1L,0x087EL},{1L,1UL},{-10L,0UL},{0L,0xC5C6L},{0x768AE125L,0xE72BL},{-1L,1UL},{-1L,65532UL}},{{-3L,65535UL},{1L,0x087EL},{1L,1UL},{-10L,0UL},{0L,0xC5C6L},{0x768AE125L,0xE72BL},{-1L,1UL},{-1L,65532UL}},{{-3L,65535UL},{1L,0x087EL},{1L,1UL},{-10L,0UL},{0L,0xC5C6L},{0x768AE125L,0xE72BL},{-1L,1UL},{-1L,65532UL}}}};
                        struct S1 l_133[9] = {{0x35D410D0L,0xFDC0L},{0x35D410D0L,0xFDC0L},{0x35D410D0L,0xFDC0L},{0x35D410D0L,0xFDC0L},{0x35D410D0L,0xFDC0L},{0x35D410D0L,0xFDC0L},{0x35D410D0L,0xFDC0L},{0x35D410D0L,0xFDC0L},{0x35D410D0L,0xFDC0L}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_131[i] = &l_130;
                        l_131[0] = l_129;
                        l_133[6] = l_132[1][0][2];
                        l_123 ^= 0x65C33B20L;
                        l_123 &= (-1L);
                    }
                    else
                    { /* block id: 45 */
                        VECTOR(int16_t, 16) l_134 = (VECTOR(int16_t, 16))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), (-1L)), (-1L)), (-1L), (-6L), (-1L), (VECTOR(int16_t, 2))((-6L), (-1L)), (VECTOR(int16_t, 2))((-6L), (-1L)), (-6L), (-1L), (-6L), (-1L));
                        int32_t l_136[5] = {0L,0L,0L,0L,0L};
                        int32_t *l_135 = &l_136[3];
                        int32_t *l_137 = &l_136[0];
                        int32_t l_138 = 1L;
                        uint16_t l_139[6][3][10] = {{{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L},{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L},{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L}},{{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L},{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L},{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L}},{{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L},{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L},{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L}},{{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L},{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L},{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L}},{{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L},{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L},{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L}},{{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L},{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L},{65535UL,0x7C70L,65535UL,0x44D2L,65535UL,0UL,0xC0F5L,3UL,0UL,0xD5C3L}}};
                        int i, j, k;
                        l_123 = l_134.sc;
                        l_137 = l_135;
                        ++l_139[2][1][3];
                    }
                    for (l_118[0] = (-24); (l_118[0] < 50); ++l_118[0])
                    { /* block id: 52 */
                        int32_t l_144 = 4L;
                        struct S1 l_145 = {-1L,0x8363L};
                        int32_t l_147 = 3L;
                        int32_t *l_146 = &l_147;
                        int32_t *l_148[1][4];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_148[i][j] = &l_147;
                        }
                        l_123 = 0x6CA850ECL;
                        l_121 = (l_144 , l_145);
                        l_148[0][0] = l_146;
                    }
                    for (l_123 = 0; (l_123 != (-20)); l_123 = safe_sub_func_uint64_t_u_u(l_123, 1))
                    { /* block id: 59 */
                        uint8_t l_151 = 1UL;
                        int32_t l_152 = 0x35E29509L;
                        int8_t l_153 = (-6L);
                        l_151 = 0x18BB56B6L;
                        l_153 &= l_152;
                    }
                }
            }
            l_155 = (l_154.s6 , (void*)0);
            l_157 |= (FAKE_DIVERGE(p_1124->global_0_offset, get_global_id(0), 10) , ((VECTOR(int32_t, 8))(l_156.xxxyyxxx)).s0);
            for (l_154.s4 = 5; (l_154.s4 < 19); ++l_154.s4)
            { /* block id: 69 */
                uint32_t l_160 = 0UL;
                struct S1 l_161 = {0x2C2AF841L,0x71EBL};
                uint64_t l_162 = 5UL;
                VECTOR(uint8_t, 8) l_163 = (VECTOR(uint8_t, 8))(0x22L, (VECTOR(uint8_t, 4))(0x22L, (VECTOR(uint8_t, 2))(0x22L, 1UL), 1UL), 1UL, 0x22L, 1UL);
                int16_t l_164 = 0x0DFBL;
                int i;
                l_112 &= (((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 4))(((FAKE_DIVERGE(p_1124->local_2_offset, get_local_id(2), 10) , l_160) , (l_161 , FAKE_DIVERGE(p_1124->local_0_offset, get_local_id(0), 10))), l_162, 0x89L, 1UL)).zwwywxyz, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_163.s4374)).wxzxzzxwzzzxwwxy)).odd, ((VECTOR(uint8_t, 2))(249UL, 247UL)).xxyyyxxy)))))).s0 , l_164);
            }
        }
        for (l_109 = 0; (l_109 < (-1)); l_109--)
        { /* block id: 75 */
            int32_t l_167 = 0x41AFD6C7L;
            struct S1 l_218[2] = {{1L,65535UL},{1L,65535UL}};
            struct S1 l_219 = {-1L,0x5CDDL};
            VECTOR(int32_t, 4) l_220 = (VECTOR(int32_t, 4))(0x5AEDB768L, (VECTOR(int32_t, 2))(0x5AEDB768L, 9L), 9L);
            VECTOR(int32_t, 16) l_221 = (VECTOR(int32_t, 16))(0x6DD9175AL, (VECTOR(int32_t, 4))(0x6DD9175AL, (VECTOR(int32_t, 2))(0x6DD9175AL, (-2L)), (-2L)), (-2L), 0x6DD9175AL, (-2L), (VECTOR(int32_t, 2))(0x6DD9175AL, (-2L)), (VECTOR(int32_t, 2))(0x6DD9175AL, (-2L)), 0x6DD9175AL, (-2L), 0x6DD9175AL, (-2L));
            uint32_t l_222 = 0xF595A54BL;
            VECTOR(int32_t, 4) l_223 = (VECTOR(int32_t, 4))(0x2E828B44L, (VECTOR(int32_t, 2))(0x2E828B44L, (-1L)), (-1L));
            int64_t l_224 = (-3L);
            int i;
            for (l_167 = 3; (l_167 != (-14)); l_167--)
            { /* block id: 78 */
                uint8_t l_170 = 0x37L;
                uint64_t l_171 = 18446744073709551615UL;
                int32_t l_174[8];
                int32_t *l_173 = &l_174[4];
                int32_t **l_172[4];
                int i;
                for (i = 0; i < 8; i++)
                    l_174[i] = (-1L);
                for (i = 0; i < 4; i++)
                    l_172[i] = &l_173;
                l_171 &= l_170;
                l_172[3] = (void*)0;
            }
            if ((GROUP_DIVERGE(2, 1) , 0x08ED0234L))
            { /* block id: 82 */
                int32_t l_175 = 0x44521320L;
                struct S0 l_205 = {0UL,0x328AL,5L,1UL,1L,0x262E34BF77ECFCCCL,0L,0x1B837C6D80C1CF77L,0x54DF2542F0818798L};/* VOLATILE GLOBAL l_205 */
                struct S0 *l_204 = &l_205;
                struct S0 l_207 = {4294967295UL,0x3CA4L,5L,1UL,0x7CEDDF5BL,0xBF0A7AF316F5AD84L,1L,0x102F56558FA1B864L,0x20151E4F78FD8D3FL};/* VOLATILE GLOBAL l_207 */
                struct S0 *l_206 = &l_207;
                uint32_t l_208 = 0x8710527BL;
                for (l_175 = 15; (l_175 == (-16)); l_175--)
                { /* block id: 85 */
                    VECTOR(uint16_t, 8) l_178 = (VECTOR(uint16_t, 8))(0xE6F3L, (VECTOR(uint16_t, 4))(0xE6F3L, (VECTOR(uint16_t, 2))(0xE6F3L, 0x9BFBL), 0x9BFBL), 0x9BFBL, 0xE6F3L, 0x9BFBL);
                    int16_t l_179 = (-1L);
                    VECTOR(int32_t, 8) l_180 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
                    VECTOR(int32_t, 2) l_181 = (VECTOR(int32_t, 2))((-1L), 2L);
                    VECTOR(int32_t, 8) l_182 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x6425BE33L), 0x6425BE33L), 0x6425BE33L, 9L, 0x6425BE33L);
                    VECTOR(int32_t, 4) l_183 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x1723A1A1L), 0x1723A1A1L);
                    int8_t l_184 = (-1L);
                    int32_t l_185 = (-6L);
                    int8_t l_186 = 6L;
                    VECTOR(int32_t, 16) l_187 = (VECTOR(int32_t, 16))(0x439DB3D4L, (VECTOR(int32_t, 4))(0x439DB3D4L, (VECTOR(int32_t, 2))(0x439DB3D4L, (-1L)), (-1L)), (-1L), 0x439DB3D4L, (-1L), (VECTOR(int32_t, 2))(0x439DB3D4L, (-1L)), (VECTOR(int32_t, 2))(0x439DB3D4L, (-1L)), 0x439DB3D4L, (-1L), 0x439DB3D4L, (-1L));
                    uint16_t l_188 = 65535UL;
                    int8_t l_189 = 1L;
                    uint32_t l_190 = 0x0AC9281EL;
                    uint32_t l_191 = 4294967294UL;
                    uint64_t l_192 = 0x002E632172F4E081L;
                    int8_t l_193 = 3L;
                    int16_t l_194 = 0x6469L;
                    uint32_t l_195 = 4294967295UL;
                    uint16_t l_196[1];
                    uint64_t l_197[7];
                    uint32_t l_198 = 4294967290UL;
                    int64_t l_199 = 1L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_196[i] = 65526UL;
                    for (i = 0; i < 7; i++)
                        l_197[i] = 0x442438CE79D49268L;
                    l_167 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(0x50B0L, 0x45EDL)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_178.s2134)).yxywwywzywxzywxw)).s8e))).xxxxxyyxxxxxyyyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(0x032D9598L, 0x785DE736L)).xyxx, ((VECTOR(int32_t, 16))((l_179 , (-1L)), 0x3B38C434L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(l_180.s74)).yyxy, ((VECTOR(int32_t, 16))(l_181.xxyyxxxyyxxxxxxx)).s47d6))).zxywzwzw, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(l_182.s70)).yxxxxyxy, ((VECTOR(int32_t, 2))(0x389B0D2AL, (-1L))).xyxxyxxx)))))), ((VECTOR(int32_t, 2))(l_183.yw)).xyyxxyyx, ((VECTOR(int32_t, 16))(0L, 0x3632D980L, 0x36C139F9L, 1L, 0x0911AC77L, l_184, (-1L), (((l_185 , l_186) , ((VECTOR(int32_t, 4))(l_187.s38b7)).w) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((((l_189 = l_188) , l_190) , 9L) , l_191), l_192, l_193, 0x544CC3E1L, ((VECTOR(int32_t, 2))(0x0E55875AL)), 0L, (-1L))), l_194, 0x744BDACFL, 1L, l_195, l_196[0], l_197[0], (-1L), 0x4233826AL)).sf), l_198, 0x55DCA3CAL, l_199, ((VECTOR(int32_t, 2))(0L)), 0x107501EDL, 0L, (-7L))).lo))).even)).zzwzxyxz)))).s41)), (-5L), 1L)), ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 4))(0x6E6F8D54L)), (-1L), 0x365FE046L)).sa1e6))).xwyxwwxz)).s2463565217415417))).s76))), 7L, 7L)).w;
                }
                for (l_175 = 0; (l_175 < (-19)); l_175 = safe_sub_func_int32_t_s_s(l_175, 2))
                { /* block id: 91 */
                    struct S2 l_203[1][3] = {{{0x1FL,0UL,0x51L,0x47532AD1L,{1UL,0xFFE1L,0x10FD701A3D08D108L,0x6CL,-8L,0xF6D8BA3A87524CA2L,1L,0xC1CFC9F6992F350EL,0xC6C223FEB27B658DL},4294967289UL,0L,1L,{0xA4715469L,65526UL,-7L,0xD5L,0L,0xDB5662893A887020L,4L,0UL,0UL}},{0x1FL,0UL,0x51L,0x47532AD1L,{1UL,0xFFE1L,0x10FD701A3D08D108L,0x6CL,-8L,0xF6D8BA3A87524CA2L,1L,0xC1CFC9F6992F350EL,0xC6C223FEB27B658DL},4294967289UL,0L,1L,{0xA4715469L,65526UL,-7L,0xD5L,0L,0xDB5662893A887020L,4L,0UL,0UL}},{0x1FL,0UL,0x51L,0x47532AD1L,{1UL,0xFFE1L,0x10FD701A3D08D108L,0x6CL,-8L,0xF6D8BA3A87524CA2L,1L,0xC1CFC9F6992F350EL,0xC6C223FEB27B658DL},4294967289UL,0L,1L,{0xA4715469L,65526UL,-7L,0xD5L,0L,0xDB5662893A887020L,4L,0UL,0UL}}}};
                    struct S2 *l_202 = &l_203[0][1];
                    int i, j;
                    l_202 = (void*)0;
                }
                l_206 = l_204;
                l_208--;
            }
            else
            { /* block id: 96 */
                int64_t l_211 = 0x6925BD9CED0956FBL;
                struct S3 l_212[6][3] = {{{4L},{4L},{0x0C415290609CFFEFL}},{{4L},{4L},{0x0C415290609CFFEFL}},{{4L},{4L},{0x0C415290609CFFEFL}},{{4L},{4L},{0x0C415290609CFFEFL}},{{4L},{4L},{0x0C415290609CFFEFL}},{{4L},{4L},{0x0C415290609CFFEFL}}};
                struct S3 l_213[7] = {{0x00D1C07B5D82D40DL},{0x00D1C07B5D82D40DL},{0x00D1C07B5D82D40DL},{0x00D1C07B5D82D40DL},{0x00D1C07B5D82D40DL},{0x00D1C07B5D82D40DL},{0x00D1C07B5D82D40DL}};
                struct S3 l_214[1] = {{0x33EBA5CBCEE99220L}};
                uint32_t l_215 = 0x88F5EB5AL;
                int8_t l_216 = 0x4AL;
                int64_t l_217 = (-8L);
                int i, j;
                l_167 &= l_211;
                l_214[0] = (l_213[1] = l_212[1][0]);
                l_217 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_215, 0x66685201L, 0x00CEB50AL, l_216, ((VECTOR(int32_t, 2))(0x6104320FL, 0x28AE212AL)), 1L, (-10L))).s45)).hi;
            }
            l_219 = l_218[0];
            l_224 = ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_220.wxwwyxwy)).s62)).yyxxxxyxyxyyyxyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_221.s1a89)), l_222, l_223.w, 0L, 0x1E934765L)).s0144472666567407))).s2;
        }
        unsigned int result = 0;
        result += l_109;
        atomic_add(&p_1124->l_special_values[95], result);
    }
    else
    { /* block id: 105 */
        (1 + 1);
    }
    return l_225;
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
    __local int64_t l_comm_values[72];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 72; i++)
            l_comm_values[i] = 1;
    struct S4 c_1125;
    struct S4* p_1124 = &c_1125;
    struct S4 c_1126 = {
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x3EL), 0x3EL), 0x3EL, 0L, 0x3EL, (VECTOR(int8_t, 2))(0L, 0x3EL), (VECTOR(int8_t, 2))(0L, 0x3EL), 0L, 0x3EL, 0L, 0x3EL), // p_1124->g_8
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), // p_1124->g_34
        (VECTOR(int8_t, 2))(0L, (-9L)), // p_1124->g_35
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x7EL), 0x7EL), // p_1124->g_36
        1UL, // p_1124->g_49
        {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}}, // p_1124->g_68
        (-2L), // p_1124->g_70
        {2UL,65535UL,1L,0UL,0x52A731ACL,18446744073709551614UL,-8L,0x4145F50B00A49797L,0x5BC9E733021B5A5EL}, // p_1124->g_78
        0x2104L, // p_1124->g_87
        1UL, // p_1124->g_88
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 2L), 2L), 2L, 0L, 2L), // p_1124->g_95
        0x330EBA2CL, // p_1124->g_108
        {-2L,0xC4D5L}, // p_1124->g_230
        (VECTOR(uint8_t, 16))(0x77L, (VECTOR(uint8_t, 4))(0x77L, (VECTOR(uint8_t, 2))(0x77L, 0xAEL), 0xAEL), 0xAEL, 0x77L, 0xAEL, (VECTOR(uint8_t, 2))(0x77L, 0xAEL), (VECTOR(uint8_t, 2))(0x77L, 0xAEL), 0x77L, 0xAEL, 0x77L, 0xAEL), // p_1124->g_234
        0x10D6E8F5L, // p_1124->g_249
        (VECTOR(int32_t, 2))((-10L), 0x026D05DBL), // p_1124->g_257
        {{0x1EL,6UL,0xADL,0x1C6A26EEL,{0x2EC9CF85L,7UL,0x64B22AB5E9305642L,255UL,0x3DAB4369L,1UL,9L,0xE8A9228AD69EA907L,0x6391D39C973EA4A8L},4294967288UL,0x2F9431CFBA7764C1L,-1L,{0x29C41C72L,1UL,0x21381323F425049EL,255UL,0x60F4BE20L,0xF3663DE434C83E27L,-6L,0xE8C0E02BEF89B483L,18446744073709551612UL}},{0x1EL,6UL,0xADL,0x1C6A26EEL,{0x2EC9CF85L,7UL,0x64B22AB5E9305642L,255UL,0x3DAB4369L,1UL,9L,0xE8A9228AD69EA907L,0x6391D39C973EA4A8L},4294967288UL,0x2F9431CFBA7764C1L,-1L,{0x29C41C72L,1UL,0x21381323F425049EL,255UL,0x60F4BE20L,0xF3663DE434C83E27L,-6L,0xE8C0E02BEF89B483L,18446744073709551612UL}},{0x1EL,6UL,0xADL,0x1C6A26EEL,{0x2EC9CF85L,7UL,0x64B22AB5E9305642L,255UL,0x3DAB4369L,1UL,9L,0xE8A9228AD69EA907L,0x6391D39C973EA4A8L},4294967288UL,0x2F9431CFBA7764C1L,-1L,{0x29C41C72L,1UL,0x21381323F425049EL,255UL,0x60F4BE20L,0xF3663DE434C83E27L,-6L,0xE8C0E02BEF89B483L,18446744073709551612UL}},{0x1EL,6UL,0xADL,0x1C6A26EEL,{0x2EC9CF85L,7UL,0x64B22AB5E9305642L,255UL,0x3DAB4369L,1UL,9L,0xE8A9228AD69EA907L,0x6391D39C973EA4A8L},4294967288UL,0x2F9431CFBA7764C1L,-1L,{0x29C41C72L,1UL,0x21381323F425049EL,255UL,0x60F4BE20L,0xF3663DE434C83E27L,-6L,0xE8C0E02BEF89B483L,18446744073709551612UL}}}, // p_1124->g_283
        &p_1124->g_283[3], // p_1124->g_282
        {255UL,65530UL,0xC1L,0x006E1FB8L,{0xCFDB7A51L,1UL,0x7A817026334D0800L,0x9FL,6L,18446744073709551613UL,1L,6UL,0x3F1F3ED4C5D184F5L},0x22B49ACCL,1L,-1L,{0x6A838DE7L,0xAE0BL,1L,249UL,0x0B581CB2L,0x1302F32D1B386BFEL,0x213A1EDDD83F40E0L,2UL,0x5F3D8B2D8139E0D0L}}, // p_1124->g_286
        (void*)0, // p_1124->g_299
        {(void*)0}, // p_1124->g_309
        0x400917E9L, // p_1124->g_312
        0x44DF94FEL, // p_1124->g_323
        0UL, // p_1124->g_330
        &p_1124->g_330, // p_1124->g_329
        &p_1124->g_329, // p_1124->g_328
        &p_1124->g_283[3].f7, // p_1124->g_336
        0L, // p_1124->g_353
        {0x3A969B98L,0x3A969B98L,0x3A969B98L,0x3A969B98L,0x3A969B98L,0x3A969B98L,0x3A969B98L,0x3A969B98L,0x3A969B98L}, // p_1124->g_366
        {0x2B6242CA2F4B49EEL}, // p_1124->g_372
        {{&p_1124->g_372,&p_1124->g_372,(void*)0,&p_1124->g_372},{&p_1124->g_372,&p_1124->g_372,(void*)0,&p_1124->g_372},{&p_1124->g_372,&p_1124->g_372,(void*)0,&p_1124->g_372},{&p_1124->g_372,&p_1124->g_372,(void*)0,&p_1124->g_372},{&p_1124->g_372,&p_1124->g_372,(void*)0,&p_1124->g_372},{&p_1124->g_372,&p_1124->g_372,(void*)0,&p_1124->g_372}}, // p_1124->g_371
        (VECTOR(int8_t, 16))(0x55L, (VECTOR(int8_t, 4))(0x55L, (VECTOR(int8_t, 2))(0x55L, 0L), 0L), 0L, 0x55L, 0L, (VECTOR(int8_t, 2))(0x55L, 0L), (VECTOR(int8_t, 2))(0x55L, 0L), 0x55L, 0L, 0x55L, 0L), // p_1124->g_375
        (void*)0, // p_1124->g_380
        (VECTOR(uint16_t, 2))(1UL, 0x00B5L), // p_1124->g_396
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x9D558FB9C51EFC15L), // p_1124->g_404
        (VECTOR(int16_t, 2))((-1L), 1L), // p_1124->g_408
        {0x62L,0xA268L,5UL,0x2B9E3028L,{0x01054EFCL,0x3E64L,0L,0xB0L,0x5C3795ADL,1UL,-8L,0x9F63837035CFAB24L,1UL},0x362F67A0L,0x0F55BD0DEF51E01AL,0x68ABCAA6L,{0x12AF9757L,0xEE99L,0x600519D1A3FE8340L,0x43L,0x2C5EDA07L,0xC22FD722A6285E58L,-1L,0UL,18446744073709551614UL}}, // p_1124->g_433
        {0xFCC0DE37L,65535UL,-1L,0x24L,0x65947C15L,0x2364BDF6EB651656L,0L,0x9CB07C3C84E4DBC5L,0x26885B75D4052C2EL}, // p_1124->g_457
        {{0x169B968CL,8L,0L,8L,0x169B968CL,0x169B968CL,8L,0L,8L,0x169B968CL},{0x169B968CL,8L,0L,8L,0x169B968CL,0x169B968CL,8L,0L,8L,0x169B968CL},{0x169B968CL,8L,0L,8L,0x169B968CL,0x169B968CL,8L,0L,8L,0x169B968CL},{0x169B968CL,8L,0L,8L,0x169B968CL,0x169B968CL,8L,0L,8L,0x169B968CL},{0x169B968CL,8L,0L,8L,0x169B968CL,0x169B968CL,8L,0L,8L,0x169B968CL},{0x169B968CL,8L,0L,8L,0x169B968CL,0x169B968CL,8L,0L,8L,0x169B968CL},{0x169B968CL,8L,0L,8L,0x169B968CL,0x169B968CL,8L,0L,8L,0x169B968CL}}, // p_1124->g_483
        {{7UL,1UL,7UL,7UL,1UL,7UL,7UL},{7UL,1UL,7UL,7UL,1UL,7UL,7UL},{7UL,1UL,7UL,7UL,1UL,7UL,7UL}}, // p_1124->g_484
        {5UL,0xCD85L,1L,0x25L,1L,0xB060E0886481E8A3L,1L,8UL,0xB49A4D7621D8B8C1L}, // p_1124->g_489
        (VECTOR(int32_t, 8))(0x48EBAC82L, (VECTOR(int32_t, 4))(0x48EBAC82L, (VECTOR(int32_t, 2))(0x48EBAC82L, 0x34B6C3D9L), 0x34B6C3D9L), 0x34B6C3D9L, 0x48EBAC82L, 0x34B6C3D9L), // p_1124->g_520
        (VECTOR(int16_t, 8))(0x499CL, (VECTOR(int16_t, 4))(0x499CL, (VECTOR(int16_t, 2))(0x499CL, 0x3098L), 0x3098L), 0x3098L, 0x499CL, 0x3098L), // p_1124->g_534
        {7UL,0x57EBL,251UL,0x5B357747L,{4294967291UL,65534UL,7L,0xECL,0x154433FCL,0xA64926BE9FDF4FB9L,-1L,0UL,0x65F2F9803CEF7F32L},0xF6BCF8E5L,0x0025112F93E5A6F5L,0x2AE306BEL,{0xEABD2730L,1UL,7L,0xC5L,0x03FBB255L,0x9F0C2A8DB56C59F4L,0x56F17E7961A3C661L,0x2433E2E208579C75L,6UL}}, // p_1124->g_550
        &p_1124->g_286.f3, // p_1124->g_639
        {&p_1124->g_639,&p_1124->g_639,&p_1124->g_639,&p_1124->g_639,&p_1124->g_639,&p_1124->g_639}, // p_1124->g_638
        0x4472L, // p_1124->g_653
        &p_1124->g_483[5][3], // p_1124->g_691
        &p_1124->g_691, // p_1124->g_690
        (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0xC4L), 0xC4L), // p_1124->g_721
        (VECTOR(uint16_t, 2))(1UL, 0xA1C3L), // p_1124->g_735
        (VECTOR(int64_t, 2))(0x0DDFD3B6FCBDAF8FL, 0L), // p_1124->g_775
        (VECTOR(int64_t, 8))(0x5C11A0A70EE41B7CL, (VECTOR(int64_t, 4))(0x5C11A0A70EE41B7CL, (VECTOR(int64_t, 2))(0x5C11A0A70EE41B7CL, 0x0DCAB062AC069733L), 0x0DCAB062AC069733L), 0x0DCAB062AC069733L, 0x5C11A0A70EE41B7CL, 0x0DCAB062AC069733L), // p_1124->g_776
        (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x5BBEC1F3L), 0x5BBEC1F3L), 0x5BBEC1F3L, (-10L), 0x5BBEC1F3L), // p_1124->g_869
        {{0x61791CF8L,3UL},{0x61791CF8L,3UL},{0x61791CF8L,3UL}}, // p_1124->g_1080
        {2UL,1UL,255UL,0x0D246969L,{4294967295UL,0x147FL,0x796E8FD0086B9124L,249UL,1L,0x9EC49D57E3B854DFL,1L,1UL,18446744073709551615UL},0xA71A6E90L,0x68888D2771B4CCF8L,0x78B6F4B0L,{6UL,0xA208L,-8L,1UL,0x153779D3L,0xCB0E734C612605C1L,-6L,0xAAD16DB55E5CAAC9L,7UL}}, // p_1124->g_1081
        {249UL,0x3094L,9UL,-10L,{0x576EE162L,0UL,0x32F8C43C7A9F9BFFL,0x06L,-10L,18446744073709551613UL,-1L,0x11BC83758556B40CL,0x98C0C48B26D0698AL},2UL,0x4EF7D73A7F1B3F1BL,-1L,{4294967295UL,65535UL,0L,0UL,0x03F5041CL,0x1DB0695B38505B0AL,-1L,18446744073709551615UL,0UL}}, // p_1124->g_1082
        0x1B653B33L, // p_1124->g_1120
        0, // p_1124->v_collective
        sequence_input[get_global_id(0)], // p_1124->global_0_offset
        sequence_input[get_global_id(1)], // p_1124->global_1_offset
        sequence_input[get_global_id(2)], // p_1124->global_2_offset
        sequence_input[get_local_id(0)], // p_1124->local_0_offset
        sequence_input[get_local_id(1)], // p_1124->local_1_offset
        sequence_input[get_local_id(2)], // p_1124->local_2_offset
        sequence_input[get_group_id(0)], // p_1124->group_0_offset
        sequence_input[get_group_id(1)], // p_1124->group_1_offset
        sequence_input[get_group_id(2)], // p_1124->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 72)), permutations[0][get_linear_local_id()])), // p_1124->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1125 = c_1126;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1124);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1124->g_8.s0, "p_1124->g_8.s0", print_hash_value);
    transparent_crc(p_1124->g_8.s1, "p_1124->g_8.s1", print_hash_value);
    transparent_crc(p_1124->g_8.s2, "p_1124->g_8.s2", print_hash_value);
    transparent_crc(p_1124->g_8.s3, "p_1124->g_8.s3", print_hash_value);
    transparent_crc(p_1124->g_8.s4, "p_1124->g_8.s4", print_hash_value);
    transparent_crc(p_1124->g_8.s5, "p_1124->g_8.s5", print_hash_value);
    transparent_crc(p_1124->g_8.s6, "p_1124->g_8.s6", print_hash_value);
    transparent_crc(p_1124->g_8.s7, "p_1124->g_8.s7", print_hash_value);
    transparent_crc(p_1124->g_8.s8, "p_1124->g_8.s8", print_hash_value);
    transparent_crc(p_1124->g_8.s9, "p_1124->g_8.s9", print_hash_value);
    transparent_crc(p_1124->g_8.sa, "p_1124->g_8.sa", print_hash_value);
    transparent_crc(p_1124->g_8.sb, "p_1124->g_8.sb", print_hash_value);
    transparent_crc(p_1124->g_8.sc, "p_1124->g_8.sc", print_hash_value);
    transparent_crc(p_1124->g_8.sd, "p_1124->g_8.sd", print_hash_value);
    transparent_crc(p_1124->g_8.se, "p_1124->g_8.se", print_hash_value);
    transparent_crc(p_1124->g_8.sf, "p_1124->g_8.sf", print_hash_value);
    transparent_crc(p_1124->g_34.x, "p_1124->g_34.x", print_hash_value);
    transparent_crc(p_1124->g_34.y, "p_1124->g_34.y", print_hash_value);
    transparent_crc(p_1124->g_34.z, "p_1124->g_34.z", print_hash_value);
    transparent_crc(p_1124->g_34.w, "p_1124->g_34.w", print_hash_value);
    transparent_crc(p_1124->g_35.x, "p_1124->g_35.x", print_hash_value);
    transparent_crc(p_1124->g_35.y, "p_1124->g_35.y", print_hash_value);
    transparent_crc(p_1124->g_36.x, "p_1124->g_36.x", print_hash_value);
    transparent_crc(p_1124->g_36.y, "p_1124->g_36.y", print_hash_value);
    transparent_crc(p_1124->g_36.z, "p_1124->g_36.z", print_hash_value);
    transparent_crc(p_1124->g_36.w, "p_1124->g_36.w", print_hash_value);
    transparent_crc(p_1124->g_49, "p_1124->g_49", print_hash_value);
    transparent_crc(p_1124->g_70, "p_1124->g_70", print_hash_value);
    transparent_crc(p_1124->g_78.f0, "p_1124->g_78.f0", print_hash_value);
    transparent_crc(p_1124->g_78.f1, "p_1124->g_78.f1", print_hash_value);
    transparent_crc(p_1124->g_78.f2, "p_1124->g_78.f2", print_hash_value);
    transparent_crc(p_1124->g_78.f3, "p_1124->g_78.f3", print_hash_value);
    transparent_crc(p_1124->g_78.f4, "p_1124->g_78.f4", print_hash_value);
    transparent_crc(p_1124->g_78.f5, "p_1124->g_78.f5", print_hash_value);
    transparent_crc(p_1124->g_78.f6, "p_1124->g_78.f6", print_hash_value);
    transparent_crc(p_1124->g_78.f7, "p_1124->g_78.f7", print_hash_value);
    transparent_crc(p_1124->g_78.f8, "p_1124->g_78.f8", print_hash_value);
    transparent_crc(p_1124->g_87, "p_1124->g_87", print_hash_value);
    transparent_crc(p_1124->g_88, "p_1124->g_88", print_hash_value);
    transparent_crc(p_1124->g_95.s0, "p_1124->g_95.s0", print_hash_value);
    transparent_crc(p_1124->g_95.s1, "p_1124->g_95.s1", print_hash_value);
    transparent_crc(p_1124->g_95.s2, "p_1124->g_95.s2", print_hash_value);
    transparent_crc(p_1124->g_95.s3, "p_1124->g_95.s3", print_hash_value);
    transparent_crc(p_1124->g_95.s4, "p_1124->g_95.s4", print_hash_value);
    transparent_crc(p_1124->g_95.s5, "p_1124->g_95.s5", print_hash_value);
    transparent_crc(p_1124->g_95.s6, "p_1124->g_95.s6", print_hash_value);
    transparent_crc(p_1124->g_95.s7, "p_1124->g_95.s7", print_hash_value);
    transparent_crc(p_1124->g_108, "p_1124->g_108", print_hash_value);
    transparent_crc(p_1124->g_230.f0, "p_1124->g_230.f0", print_hash_value);
    transparent_crc(p_1124->g_230.f1, "p_1124->g_230.f1", print_hash_value);
    transparent_crc(p_1124->g_234.s0, "p_1124->g_234.s0", print_hash_value);
    transparent_crc(p_1124->g_234.s1, "p_1124->g_234.s1", print_hash_value);
    transparent_crc(p_1124->g_234.s2, "p_1124->g_234.s2", print_hash_value);
    transparent_crc(p_1124->g_234.s3, "p_1124->g_234.s3", print_hash_value);
    transparent_crc(p_1124->g_234.s4, "p_1124->g_234.s4", print_hash_value);
    transparent_crc(p_1124->g_234.s5, "p_1124->g_234.s5", print_hash_value);
    transparent_crc(p_1124->g_234.s6, "p_1124->g_234.s6", print_hash_value);
    transparent_crc(p_1124->g_234.s7, "p_1124->g_234.s7", print_hash_value);
    transparent_crc(p_1124->g_234.s8, "p_1124->g_234.s8", print_hash_value);
    transparent_crc(p_1124->g_234.s9, "p_1124->g_234.s9", print_hash_value);
    transparent_crc(p_1124->g_234.sa, "p_1124->g_234.sa", print_hash_value);
    transparent_crc(p_1124->g_234.sb, "p_1124->g_234.sb", print_hash_value);
    transparent_crc(p_1124->g_234.sc, "p_1124->g_234.sc", print_hash_value);
    transparent_crc(p_1124->g_234.sd, "p_1124->g_234.sd", print_hash_value);
    transparent_crc(p_1124->g_234.se, "p_1124->g_234.se", print_hash_value);
    transparent_crc(p_1124->g_234.sf, "p_1124->g_234.sf", print_hash_value);
    transparent_crc(p_1124->g_249, "p_1124->g_249", print_hash_value);
    transparent_crc(p_1124->g_257.x, "p_1124->g_257.x", print_hash_value);
    transparent_crc(p_1124->g_257.y, "p_1124->g_257.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1124->g_283[i].f0, "p_1124->g_283[i].f0", print_hash_value);
        transparent_crc(p_1124->g_283[i].f1, "p_1124->g_283[i].f1", print_hash_value);
        transparent_crc(p_1124->g_283[i].f2, "p_1124->g_283[i].f2", print_hash_value);
        transparent_crc(p_1124->g_283[i].f3, "p_1124->g_283[i].f3", print_hash_value);
        transparent_crc(p_1124->g_283[i].f4.f0, "p_1124->g_283[i].f4.f0", print_hash_value);
        transparent_crc(p_1124->g_283[i].f4.f1, "p_1124->g_283[i].f4.f1", print_hash_value);
        transparent_crc(p_1124->g_283[i].f4.f2, "p_1124->g_283[i].f4.f2", print_hash_value);
        transparent_crc(p_1124->g_283[i].f4.f3, "p_1124->g_283[i].f4.f3", print_hash_value);
        transparent_crc(p_1124->g_283[i].f4.f4, "p_1124->g_283[i].f4.f4", print_hash_value);
        transparent_crc(p_1124->g_283[i].f4.f5, "p_1124->g_283[i].f4.f5", print_hash_value);
        transparent_crc(p_1124->g_283[i].f4.f6, "p_1124->g_283[i].f4.f6", print_hash_value);
        transparent_crc(p_1124->g_283[i].f4.f7, "p_1124->g_283[i].f4.f7", print_hash_value);
        transparent_crc(p_1124->g_283[i].f4.f8, "p_1124->g_283[i].f4.f8", print_hash_value);
        transparent_crc(p_1124->g_283[i].f5, "p_1124->g_283[i].f5", print_hash_value);
        transparent_crc(p_1124->g_283[i].f6, "p_1124->g_283[i].f6", print_hash_value);
        transparent_crc(p_1124->g_283[i].f7, "p_1124->g_283[i].f7", print_hash_value);
        transparent_crc(p_1124->g_283[i].f8.f0, "p_1124->g_283[i].f8.f0", print_hash_value);
        transparent_crc(p_1124->g_283[i].f8.f1, "p_1124->g_283[i].f8.f1", print_hash_value);
        transparent_crc(p_1124->g_283[i].f8.f2, "p_1124->g_283[i].f8.f2", print_hash_value);
        transparent_crc(p_1124->g_283[i].f8.f3, "p_1124->g_283[i].f8.f3", print_hash_value);
        transparent_crc(p_1124->g_283[i].f8.f4, "p_1124->g_283[i].f8.f4", print_hash_value);
        transparent_crc(p_1124->g_283[i].f8.f5, "p_1124->g_283[i].f8.f5", print_hash_value);
        transparent_crc(p_1124->g_283[i].f8.f6, "p_1124->g_283[i].f8.f6", print_hash_value);
        transparent_crc(p_1124->g_283[i].f8.f7, "p_1124->g_283[i].f8.f7", print_hash_value);
        transparent_crc(p_1124->g_283[i].f8.f8, "p_1124->g_283[i].f8.f8", print_hash_value);

    }
    transparent_crc(p_1124->g_286.f0, "p_1124->g_286.f0", print_hash_value);
    transparent_crc(p_1124->g_286.f1, "p_1124->g_286.f1", print_hash_value);
    transparent_crc(p_1124->g_286.f2, "p_1124->g_286.f2", print_hash_value);
    transparent_crc(p_1124->g_286.f3, "p_1124->g_286.f3", print_hash_value);
    transparent_crc(p_1124->g_286.f4.f0, "p_1124->g_286.f4.f0", print_hash_value);
    transparent_crc(p_1124->g_286.f4.f1, "p_1124->g_286.f4.f1", print_hash_value);
    transparent_crc(p_1124->g_286.f4.f2, "p_1124->g_286.f4.f2", print_hash_value);
    transparent_crc(p_1124->g_286.f4.f3, "p_1124->g_286.f4.f3", print_hash_value);
    transparent_crc(p_1124->g_286.f4.f4, "p_1124->g_286.f4.f4", print_hash_value);
    transparent_crc(p_1124->g_286.f4.f5, "p_1124->g_286.f4.f5", print_hash_value);
    transparent_crc(p_1124->g_286.f4.f6, "p_1124->g_286.f4.f6", print_hash_value);
    transparent_crc(p_1124->g_286.f4.f7, "p_1124->g_286.f4.f7", print_hash_value);
    transparent_crc(p_1124->g_286.f4.f8, "p_1124->g_286.f4.f8", print_hash_value);
    transparent_crc(p_1124->g_286.f5, "p_1124->g_286.f5", print_hash_value);
    transparent_crc(p_1124->g_286.f6, "p_1124->g_286.f6", print_hash_value);
    transparent_crc(p_1124->g_286.f7, "p_1124->g_286.f7", print_hash_value);
    transparent_crc(p_1124->g_286.f8.f0, "p_1124->g_286.f8.f0", print_hash_value);
    transparent_crc(p_1124->g_286.f8.f1, "p_1124->g_286.f8.f1", print_hash_value);
    transparent_crc(p_1124->g_286.f8.f2, "p_1124->g_286.f8.f2", print_hash_value);
    transparent_crc(p_1124->g_286.f8.f3, "p_1124->g_286.f8.f3", print_hash_value);
    transparent_crc(p_1124->g_286.f8.f4, "p_1124->g_286.f8.f4", print_hash_value);
    transparent_crc(p_1124->g_286.f8.f5, "p_1124->g_286.f8.f5", print_hash_value);
    transparent_crc(p_1124->g_286.f8.f6, "p_1124->g_286.f8.f6", print_hash_value);
    transparent_crc(p_1124->g_286.f8.f7, "p_1124->g_286.f8.f7", print_hash_value);
    transparent_crc(p_1124->g_286.f8.f8, "p_1124->g_286.f8.f8", print_hash_value);
    transparent_crc(p_1124->g_312, "p_1124->g_312", print_hash_value);
    transparent_crc(p_1124->g_323, "p_1124->g_323", print_hash_value);
    transparent_crc(p_1124->g_330, "p_1124->g_330", print_hash_value);
    transparent_crc(p_1124->g_353, "p_1124->g_353", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1124->g_366[i], "p_1124->g_366[i]", print_hash_value);

    }
    transparent_crc(p_1124->g_372.f0, "p_1124->g_372.f0", print_hash_value);
    transparent_crc(p_1124->g_375.s0, "p_1124->g_375.s0", print_hash_value);
    transparent_crc(p_1124->g_375.s1, "p_1124->g_375.s1", print_hash_value);
    transparent_crc(p_1124->g_375.s2, "p_1124->g_375.s2", print_hash_value);
    transparent_crc(p_1124->g_375.s3, "p_1124->g_375.s3", print_hash_value);
    transparent_crc(p_1124->g_375.s4, "p_1124->g_375.s4", print_hash_value);
    transparent_crc(p_1124->g_375.s5, "p_1124->g_375.s5", print_hash_value);
    transparent_crc(p_1124->g_375.s6, "p_1124->g_375.s6", print_hash_value);
    transparent_crc(p_1124->g_375.s7, "p_1124->g_375.s7", print_hash_value);
    transparent_crc(p_1124->g_375.s8, "p_1124->g_375.s8", print_hash_value);
    transparent_crc(p_1124->g_375.s9, "p_1124->g_375.s9", print_hash_value);
    transparent_crc(p_1124->g_375.sa, "p_1124->g_375.sa", print_hash_value);
    transparent_crc(p_1124->g_375.sb, "p_1124->g_375.sb", print_hash_value);
    transparent_crc(p_1124->g_375.sc, "p_1124->g_375.sc", print_hash_value);
    transparent_crc(p_1124->g_375.sd, "p_1124->g_375.sd", print_hash_value);
    transparent_crc(p_1124->g_375.se, "p_1124->g_375.se", print_hash_value);
    transparent_crc(p_1124->g_375.sf, "p_1124->g_375.sf", print_hash_value);
    transparent_crc(p_1124->g_396.x, "p_1124->g_396.x", print_hash_value);
    transparent_crc(p_1124->g_396.y, "p_1124->g_396.y", print_hash_value);
    transparent_crc(p_1124->g_404.x, "p_1124->g_404.x", print_hash_value);
    transparent_crc(p_1124->g_404.y, "p_1124->g_404.y", print_hash_value);
    transparent_crc(p_1124->g_408.x, "p_1124->g_408.x", print_hash_value);
    transparent_crc(p_1124->g_408.y, "p_1124->g_408.y", print_hash_value);
    transparent_crc(p_1124->g_433.f0, "p_1124->g_433.f0", print_hash_value);
    transparent_crc(p_1124->g_433.f1, "p_1124->g_433.f1", print_hash_value);
    transparent_crc(p_1124->g_433.f2, "p_1124->g_433.f2", print_hash_value);
    transparent_crc(p_1124->g_433.f3, "p_1124->g_433.f3", print_hash_value);
    transparent_crc(p_1124->g_433.f4.f0, "p_1124->g_433.f4.f0", print_hash_value);
    transparent_crc(p_1124->g_433.f4.f1, "p_1124->g_433.f4.f1", print_hash_value);
    transparent_crc(p_1124->g_433.f4.f2, "p_1124->g_433.f4.f2", print_hash_value);
    transparent_crc(p_1124->g_433.f4.f3, "p_1124->g_433.f4.f3", print_hash_value);
    transparent_crc(p_1124->g_433.f4.f4, "p_1124->g_433.f4.f4", print_hash_value);
    transparent_crc(p_1124->g_433.f4.f5, "p_1124->g_433.f4.f5", print_hash_value);
    transparent_crc(p_1124->g_433.f4.f6, "p_1124->g_433.f4.f6", print_hash_value);
    transparent_crc(p_1124->g_433.f4.f7, "p_1124->g_433.f4.f7", print_hash_value);
    transparent_crc(p_1124->g_433.f4.f8, "p_1124->g_433.f4.f8", print_hash_value);
    transparent_crc(p_1124->g_433.f5, "p_1124->g_433.f5", print_hash_value);
    transparent_crc(p_1124->g_433.f6, "p_1124->g_433.f6", print_hash_value);
    transparent_crc(p_1124->g_433.f7, "p_1124->g_433.f7", print_hash_value);
    transparent_crc(p_1124->g_433.f8.f0, "p_1124->g_433.f8.f0", print_hash_value);
    transparent_crc(p_1124->g_433.f8.f1, "p_1124->g_433.f8.f1", print_hash_value);
    transparent_crc(p_1124->g_433.f8.f2, "p_1124->g_433.f8.f2", print_hash_value);
    transparent_crc(p_1124->g_433.f8.f3, "p_1124->g_433.f8.f3", print_hash_value);
    transparent_crc(p_1124->g_433.f8.f4, "p_1124->g_433.f8.f4", print_hash_value);
    transparent_crc(p_1124->g_433.f8.f5, "p_1124->g_433.f8.f5", print_hash_value);
    transparent_crc(p_1124->g_433.f8.f6, "p_1124->g_433.f8.f6", print_hash_value);
    transparent_crc(p_1124->g_433.f8.f7, "p_1124->g_433.f8.f7", print_hash_value);
    transparent_crc(p_1124->g_433.f8.f8, "p_1124->g_433.f8.f8", print_hash_value);
    transparent_crc(p_1124->g_457.f0, "p_1124->g_457.f0", print_hash_value);
    transparent_crc(p_1124->g_457.f1, "p_1124->g_457.f1", print_hash_value);
    transparent_crc(p_1124->g_457.f2, "p_1124->g_457.f2", print_hash_value);
    transparent_crc(p_1124->g_457.f3, "p_1124->g_457.f3", print_hash_value);
    transparent_crc(p_1124->g_457.f4, "p_1124->g_457.f4", print_hash_value);
    transparent_crc(p_1124->g_457.f5, "p_1124->g_457.f5", print_hash_value);
    transparent_crc(p_1124->g_457.f6, "p_1124->g_457.f6", print_hash_value);
    transparent_crc(p_1124->g_457.f7, "p_1124->g_457.f7", print_hash_value);
    transparent_crc(p_1124->g_457.f8, "p_1124->g_457.f8", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1124->g_483[i][j], "p_1124->g_483[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1124->g_484[i][j], "p_1124->g_484[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1124->g_489.f0, "p_1124->g_489.f0", print_hash_value);
    transparent_crc(p_1124->g_489.f1, "p_1124->g_489.f1", print_hash_value);
    transparent_crc(p_1124->g_489.f2, "p_1124->g_489.f2", print_hash_value);
    transparent_crc(p_1124->g_489.f3, "p_1124->g_489.f3", print_hash_value);
    transparent_crc(p_1124->g_489.f4, "p_1124->g_489.f4", print_hash_value);
    transparent_crc(p_1124->g_489.f5, "p_1124->g_489.f5", print_hash_value);
    transparent_crc(p_1124->g_489.f6, "p_1124->g_489.f6", print_hash_value);
    transparent_crc(p_1124->g_489.f7, "p_1124->g_489.f7", print_hash_value);
    transparent_crc(p_1124->g_489.f8, "p_1124->g_489.f8", print_hash_value);
    transparent_crc(p_1124->g_520.s0, "p_1124->g_520.s0", print_hash_value);
    transparent_crc(p_1124->g_520.s1, "p_1124->g_520.s1", print_hash_value);
    transparent_crc(p_1124->g_520.s2, "p_1124->g_520.s2", print_hash_value);
    transparent_crc(p_1124->g_520.s3, "p_1124->g_520.s3", print_hash_value);
    transparent_crc(p_1124->g_520.s4, "p_1124->g_520.s4", print_hash_value);
    transparent_crc(p_1124->g_520.s5, "p_1124->g_520.s5", print_hash_value);
    transparent_crc(p_1124->g_520.s6, "p_1124->g_520.s6", print_hash_value);
    transparent_crc(p_1124->g_520.s7, "p_1124->g_520.s7", print_hash_value);
    transparent_crc(p_1124->g_534.s0, "p_1124->g_534.s0", print_hash_value);
    transparent_crc(p_1124->g_534.s1, "p_1124->g_534.s1", print_hash_value);
    transparent_crc(p_1124->g_534.s2, "p_1124->g_534.s2", print_hash_value);
    transparent_crc(p_1124->g_534.s3, "p_1124->g_534.s3", print_hash_value);
    transparent_crc(p_1124->g_534.s4, "p_1124->g_534.s4", print_hash_value);
    transparent_crc(p_1124->g_534.s5, "p_1124->g_534.s5", print_hash_value);
    transparent_crc(p_1124->g_534.s6, "p_1124->g_534.s6", print_hash_value);
    transparent_crc(p_1124->g_534.s7, "p_1124->g_534.s7", print_hash_value);
    transparent_crc(p_1124->g_550.f0, "p_1124->g_550.f0", print_hash_value);
    transparent_crc(p_1124->g_550.f1, "p_1124->g_550.f1", print_hash_value);
    transparent_crc(p_1124->g_550.f2, "p_1124->g_550.f2", print_hash_value);
    transparent_crc(p_1124->g_550.f3, "p_1124->g_550.f3", print_hash_value);
    transparent_crc(p_1124->g_550.f4.f0, "p_1124->g_550.f4.f0", print_hash_value);
    transparent_crc(p_1124->g_550.f4.f1, "p_1124->g_550.f4.f1", print_hash_value);
    transparent_crc(p_1124->g_550.f4.f2, "p_1124->g_550.f4.f2", print_hash_value);
    transparent_crc(p_1124->g_550.f4.f3, "p_1124->g_550.f4.f3", print_hash_value);
    transparent_crc(p_1124->g_550.f4.f4, "p_1124->g_550.f4.f4", print_hash_value);
    transparent_crc(p_1124->g_550.f4.f5, "p_1124->g_550.f4.f5", print_hash_value);
    transparent_crc(p_1124->g_550.f4.f6, "p_1124->g_550.f4.f6", print_hash_value);
    transparent_crc(p_1124->g_550.f4.f7, "p_1124->g_550.f4.f7", print_hash_value);
    transparent_crc(p_1124->g_550.f4.f8, "p_1124->g_550.f4.f8", print_hash_value);
    transparent_crc(p_1124->g_550.f5, "p_1124->g_550.f5", print_hash_value);
    transparent_crc(p_1124->g_550.f6, "p_1124->g_550.f6", print_hash_value);
    transparent_crc(p_1124->g_550.f7, "p_1124->g_550.f7", print_hash_value);
    transparent_crc(p_1124->g_550.f8.f0, "p_1124->g_550.f8.f0", print_hash_value);
    transparent_crc(p_1124->g_550.f8.f1, "p_1124->g_550.f8.f1", print_hash_value);
    transparent_crc(p_1124->g_550.f8.f2, "p_1124->g_550.f8.f2", print_hash_value);
    transparent_crc(p_1124->g_550.f8.f3, "p_1124->g_550.f8.f3", print_hash_value);
    transparent_crc(p_1124->g_550.f8.f4, "p_1124->g_550.f8.f4", print_hash_value);
    transparent_crc(p_1124->g_550.f8.f5, "p_1124->g_550.f8.f5", print_hash_value);
    transparent_crc(p_1124->g_550.f8.f6, "p_1124->g_550.f8.f6", print_hash_value);
    transparent_crc(p_1124->g_550.f8.f7, "p_1124->g_550.f8.f7", print_hash_value);
    transparent_crc(p_1124->g_550.f8.f8, "p_1124->g_550.f8.f8", print_hash_value);
    transparent_crc(p_1124->g_653, "p_1124->g_653", print_hash_value);
    transparent_crc(p_1124->g_721.x, "p_1124->g_721.x", print_hash_value);
    transparent_crc(p_1124->g_721.y, "p_1124->g_721.y", print_hash_value);
    transparent_crc(p_1124->g_721.z, "p_1124->g_721.z", print_hash_value);
    transparent_crc(p_1124->g_721.w, "p_1124->g_721.w", print_hash_value);
    transparent_crc(p_1124->g_735.x, "p_1124->g_735.x", print_hash_value);
    transparent_crc(p_1124->g_735.y, "p_1124->g_735.y", print_hash_value);
    transparent_crc(p_1124->g_775.x, "p_1124->g_775.x", print_hash_value);
    transparent_crc(p_1124->g_775.y, "p_1124->g_775.y", print_hash_value);
    transparent_crc(p_1124->g_776.s0, "p_1124->g_776.s0", print_hash_value);
    transparent_crc(p_1124->g_776.s1, "p_1124->g_776.s1", print_hash_value);
    transparent_crc(p_1124->g_776.s2, "p_1124->g_776.s2", print_hash_value);
    transparent_crc(p_1124->g_776.s3, "p_1124->g_776.s3", print_hash_value);
    transparent_crc(p_1124->g_776.s4, "p_1124->g_776.s4", print_hash_value);
    transparent_crc(p_1124->g_776.s5, "p_1124->g_776.s5", print_hash_value);
    transparent_crc(p_1124->g_776.s6, "p_1124->g_776.s6", print_hash_value);
    transparent_crc(p_1124->g_776.s7, "p_1124->g_776.s7", print_hash_value);
    transparent_crc(p_1124->g_869.s0, "p_1124->g_869.s0", print_hash_value);
    transparent_crc(p_1124->g_869.s1, "p_1124->g_869.s1", print_hash_value);
    transparent_crc(p_1124->g_869.s2, "p_1124->g_869.s2", print_hash_value);
    transparent_crc(p_1124->g_869.s3, "p_1124->g_869.s3", print_hash_value);
    transparent_crc(p_1124->g_869.s4, "p_1124->g_869.s4", print_hash_value);
    transparent_crc(p_1124->g_869.s5, "p_1124->g_869.s5", print_hash_value);
    transparent_crc(p_1124->g_869.s6, "p_1124->g_869.s6", print_hash_value);
    transparent_crc(p_1124->g_869.s7, "p_1124->g_869.s7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1124->g_1080[i].f0, "p_1124->g_1080[i].f0", print_hash_value);
        transparent_crc(p_1124->g_1080[i].f1, "p_1124->g_1080[i].f1", print_hash_value);

    }
    transparent_crc(p_1124->g_1081.f0, "p_1124->g_1081.f0", print_hash_value);
    transparent_crc(p_1124->g_1081.f1, "p_1124->g_1081.f1", print_hash_value);
    transparent_crc(p_1124->g_1081.f2, "p_1124->g_1081.f2", print_hash_value);
    transparent_crc(p_1124->g_1081.f3, "p_1124->g_1081.f3", print_hash_value);
    transparent_crc(p_1124->g_1081.f4.f0, "p_1124->g_1081.f4.f0", print_hash_value);
    transparent_crc(p_1124->g_1081.f4.f1, "p_1124->g_1081.f4.f1", print_hash_value);
    transparent_crc(p_1124->g_1081.f4.f2, "p_1124->g_1081.f4.f2", print_hash_value);
    transparent_crc(p_1124->g_1081.f4.f3, "p_1124->g_1081.f4.f3", print_hash_value);
    transparent_crc(p_1124->g_1081.f4.f4, "p_1124->g_1081.f4.f4", print_hash_value);
    transparent_crc(p_1124->g_1081.f4.f5, "p_1124->g_1081.f4.f5", print_hash_value);
    transparent_crc(p_1124->g_1081.f4.f6, "p_1124->g_1081.f4.f6", print_hash_value);
    transparent_crc(p_1124->g_1081.f4.f7, "p_1124->g_1081.f4.f7", print_hash_value);
    transparent_crc(p_1124->g_1081.f4.f8, "p_1124->g_1081.f4.f8", print_hash_value);
    transparent_crc(p_1124->g_1081.f5, "p_1124->g_1081.f5", print_hash_value);
    transparent_crc(p_1124->g_1081.f6, "p_1124->g_1081.f6", print_hash_value);
    transparent_crc(p_1124->g_1081.f7, "p_1124->g_1081.f7", print_hash_value);
    transparent_crc(p_1124->g_1081.f8.f0, "p_1124->g_1081.f8.f0", print_hash_value);
    transparent_crc(p_1124->g_1081.f8.f1, "p_1124->g_1081.f8.f1", print_hash_value);
    transparent_crc(p_1124->g_1081.f8.f2, "p_1124->g_1081.f8.f2", print_hash_value);
    transparent_crc(p_1124->g_1081.f8.f3, "p_1124->g_1081.f8.f3", print_hash_value);
    transparent_crc(p_1124->g_1081.f8.f4, "p_1124->g_1081.f8.f4", print_hash_value);
    transparent_crc(p_1124->g_1081.f8.f5, "p_1124->g_1081.f8.f5", print_hash_value);
    transparent_crc(p_1124->g_1081.f8.f6, "p_1124->g_1081.f8.f6", print_hash_value);
    transparent_crc(p_1124->g_1081.f8.f7, "p_1124->g_1081.f8.f7", print_hash_value);
    transparent_crc(p_1124->g_1081.f8.f8, "p_1124->g_1081.f8.f8", print_hash_value);
    transparent_crc(p_1124->g_1082.f0, "p_1124->g_1082.f0", print_hash_value);
    transparent_crc(p_1124->g_1082.f1, "p_1124->g_1082.f1", print_hash_value);
    transparent_crc(p_1124->g_1082.f2, "p_1124->g_1082.f2", print_hash_value);
    transparent_crc(p_1124->g_1082.f3, "p_1124->g_1082.f3", print_hash_value);
    transparent_crc(p_1124->g_1082.f4.f0, "p_1124->g_1082.f4.f0", print_hash_value);
    transparent_crc(p_1124->g_1082.f4.f1, "p_1124->g_1082.f4.f1", print_hash_value);
    transparent_crc(p_1124->g_1082.f4.f2, "p_1124->g_1082.f4.f2", print_hash_value);
    transparent_crc(p_1124->g_1082.f4.f3, "p_1124->g_1082.f4.f3", print_hash_value);
    transparent_crc(p_1124->g_1082.f4.f4, "p_1124->g_1082.f4.f4", print_hash_value);
    transparent_crc(p_1124->g_1082.f4.f5, "p_1124->g_1082.f4.f5", print_hash_value);
    transparent_crc(p_1124->g_1082.f4.f6, "p_1124->g_1082.f4.f6", print_hash_value);
    transparent_crc(p_1124->g_1082.f4.f7, "p_1124->g_1082.f4.f7", print_hash_value);
    transparent_crc(p_1124->g_1082.f4.f8, "p_1124->g_1082.f4.f8", print_hash_value);
    transparent_crc(p_1124->g_1082.f5, "p_1124->g_1082.f5", print_hash_value);
    transparent_crc(p_1124->g_1082.f6, "p_1124->g_1082.f6", print_hash_value);
    transparent_crc(p_1124->g_1082.f7, "p_1124->g_1082.f7", print_hash_value);
    transparent_crc(p_1124->g_1082.f8.f0, "p_1124->g_1082.f8.f0", print_hash_value);
    transparent_crc(p_1124->g_1082.f8.f1, "p_1124->g_1082.f8.f1", print_hash_value);
    transparent_crc(p_1124->g_1082.f8.f2, "p_1124->g_1082.f8.f2", print_hash_value);
    transparent_crc(p_1124->g_1082.f8.f3, "p_1124->g_1082.f8.f3", print_hash_value);
    transparent_crc(p_1124->g_1082.f8.f4, "p_1124->g_1082.f8.f4", print_hash_value);
    transparent_crc(p_1124->g_1082.f8.f5, "p_1124->g_1082.f8.f5", print_hash_value);
    transparent_crc(p_1124->g_1082.f8.f6, "p_1124->g_1082.f8.f6", print_hash_value);
    transparent_crc(p_1124->g_1082.f8.f7, "p_1124->g_1082.f8.f7", print_hash_value);
    transparent_crc(p_1124->g_1082.f8.f8, "p_1124->g_1082.f8.f8", print_hash_value);
    transparent_crc(p_1124->g_1120, "p_1124->g_1120", print_hash_value);
    transparent_crc(p_1124->v_collective, "p_1124->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 96; i++)
            transparent_crc(p_1124->g_special_values[i + 96 * get_linear_group_id()], "p_1124->g_special_values[i + 96 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 96; i++)
            transparent_crc(p_1124->l_special_values[i], "p_1124->l_special_values[i]", print_hash_value);
    transparent_crc(p_1124->l_comm_values[get_linear_local_id()], "p_1124->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1124->g_comm_values[get_linear_group_id() * 72 + get_linear_local_id()], "p_1124->g_comm_values[get_linear_group_id() * 72 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
