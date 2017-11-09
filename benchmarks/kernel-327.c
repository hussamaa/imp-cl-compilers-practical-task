// --atomics 9 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 2,71,29 -l 1,1,1
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

__constant uint32_t permutations[10][1] = {
{0}, // permutation 0
{0}, // permutation 1
{0}, // permutation 2
{0}, // permutation 3
{0}, // permutation 4
{0}, // permutation 5
{0}, // permutation 6
{0}, // permutation 7
{0}, // permutation 8
{0} // permutation 9
};

// Seed: 2024107627

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    VECTOR(int32_t, 16) g_2;
    volatile int32_t g_24;
    volatile int32_t *g_23;
    uint16_t g_30;
    uint32_t g_39;
    int16_t g_46;
    int8_t g_88;
    int8_t g_90[7];
    VECTOR(int8_t, 8) g_91;
    VECTOR(int8_t, 4) g_93;
    VECTOR(int32_t, 2) g_98;
    int64_t g_105;
    int32_t *g_108;
    uint8_t g_139;
    volatile VECTOR(uint32_t, 4) g_141;
    VECTOR(uint16_t, 16) g_142;
    volatile VECTOR(uint32_t, 16) g_143;
    volatile uint32_t g_146[4];
    uint16_t g_195;
    uint8_t g_203;
    uint8_t g_209;
    uint8_t *g_208[2];
    volatile uint32_t g_216[5];
    uint64_t g_232;
    int16_t g_402;
    int32_t g_404;
    int8_t g_405;
    int16_t g_406;
    int8_t g_408[4][7];
    uint8_t g_409[5];
    volatile int16_t g_422;
    volatile uint32_t g_443;
    uint64_t g_447;
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
uint64_t  func_1(struct S0 * p_449);
uint64_t  func_9(int32_t * p_10, uint64_t  p_11, int32_t * p_12, struct S0 * p_449);
int32_t * func_13(uint32_t  p_14, int16_t  p_15, int32_t  p_16, int64_t  p_17, struct S0 * p_449);
uint32_t  func_18(uint64_t  p_19, int32_t * p_20, int32_t * p_21, uint32_t  p_22, struct S0 * p_449);
int32_t * func_25(int32_t  p_26, int32_t * p_27, uint32_t  p_28, struct S0 * p_449);
uint16_t  func_41(int64_t  p_42, struct S0 * p_449);
int32_t * func_49(int16_t * p_50, int16_t * p_51, uint32_t * p_52, int16_t * p_53, struct S0 * p_449);
int16_t * func_54(int16_t * p_55, int32_t  p_56, struct S0 * p_449);
int16_t * func_58(int16_t * p_59, struct S0 * p_449);
uint32_t * func_71(int32_t  p_72, uint16_t  p_73, struct S0 * p_449);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_449->g_2 p_449->l_comm_values p_449->g_23 p_449->g_30 p_449->g_24 p_449->g_comm_values p_449->g_39 p_449->g_46 p_449->g_88 p_449->g_91 p_449->g_93 p_449->g_98 p_449->g_105 p_449->g_108 p_449->g_90 p_449->g_139 p_449->g_141 p_449->g_142 p_449->g_143 p_449->g_146 p_449->g_195 p_449->g_203 p_449->g_208 p_449->g_216 p_449->g_209 p_449->g_232 p_449->g_409 p_449->g_422 p_449->g_408 p_449->g_404 p_449->g_443 p_449->g_447
 * writes: p_449->g_30 p_449->g_39 p_449->g_46 p_449->g_2 p_449->g_88 p_449->g_90 p_449->g_105 p_449->g_24 p_449->g_108 p_449->g_139 p_449->g_98 p_449->g_195 p_449->g_203 p_449->g_232 p_449->g_409 p_449->g_408 p_449->g_443 p_449->g_447
 */
uint64_t  func_1(struct S0 * p_449)
{ /* block id: 4 */
    int32_t *l_3 = (void*)0;
    int32_t *l_4 = (void*)0;
    int32_t *l_5 = (void*)0;
    int32_t *l_6 = (void*)0;
    int32_t *l_7[1][3];
    uint8_t l_8 = 0x75L;
    uint16_t *l_29[6];
    uint32_t *l_37 = (void*)0;
    uint32_t *l_38[9];
    uint8_t l_133[3][7][7] = {{{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L}},{{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L}},{{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L},{0xC2L,0UL,0x92L,247UL,0x92L,0UL,0xC2L}}};
    uint32_t l_448 = 0UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_7[i][j] = (void*)0;
    }
    for (i = 0; i < 6; i++)
        l_29[i] = &p_449->g_30;
    for (i = 0; i < 9; i++)
        l_38[i] = &p_449->g_39;
    l_8 = ((VECTOR(int32_t, 16))(p_449->g_2.s417be18795010f7a)).s7;
    p_449->g_447 |= (p_449->l_comm_values[(safe_mod_func_uint32_t_u_u(p_449->tid, 1))] > func_9(func_13(func_18((p_449->g_23 == &p_449->g_24), l_4, func_25(((l_5 != &p_449->g_24) >= ((--p_449->g_30) == p_449->g_24)), l_4, (safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((p_449->g_39 = (p_449->g_23 != p_449->g_23)) & p_449->g_2.s4), p_449->l_comm_values[(safe_mod_func_uint32_t_u_u(p_449->tid, 1))])), p_449->l_comm_values[(safe_mod_func_uint32_t_u_u(p_449->tid, 1))])), p_449), p_449->l_comm_values[(safe_mod_func_uint32_t_u_u(p_449->tid, 1))], p_449), p_449->g_93.z, p_449->g_98.y, l_133[1][2][4], p_449), p_449->g_404, &p_449->g_404, p_449));
    return l_448;
}


/* ------------------------------------------ */
/* 
 * reads : p_449->g_23 p_449->g_24 p_449->g_443 p_449->g_141
 * writes: p_449->g_24 p_449->g_443
 */
uint64_t  func_9(int32_t * p_10, uint64_t  p_11, int32_t * p_12, struct S0 * p_449)
{ /* block id: 190 */
    int32_t l_440 = 1L;
    int32_t *l_441 = &p_449->g_404;
    int32_t *l_442[5][10][5] = {{{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404}},{{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404}},{{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404}},{{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404}},{{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404},{&p_449->g_404,&p_449->g_404,(void*)0,(void*)0,&p_449->g_404}}};
    volatile int32_t *l_446 = &p_449->g_24;
    int i, j, k;
    (*p_449->g_23) = (*p_449->g_23);
    --p_449->g_443;
    l_446 = &p_449->g_24;
    return p_449->g_141.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_449->g_139 p_449->g_comm_values p_449->g_141 p_449->g_142 p_449->g_143 p_449->g_146 p_449->g_93 p_449->g_90 p_449->g_88 p_449->g_23 p_449->g_24 p_449->g_98 p_449->g_108 p_449->g_30 p_449->g_195 p_449->g_203 p_449->g_208 p_449->g_105 p_449->g_216 p_449->g_209 p_449->g_2 p_449->g_232 p_449->g_39 p_449->g_409 p_449->g_422 p_449->g_408
 * writes: p_449->g_139 p_449->g_39 p_449->g_24 p_449->g_98 p_449->g_30 p_449->g_195 p_449->g_203 p_449->g_105 p_449->g_232 p_449->g_409 p_449->g_408
 */
int32_t * func_13(uint32_t  p_14, int16_t  p_15, int32_t  p_16, int64_t  p_17, struct S0 * p_449)
{ /* block id: 55 */
    int32_t *l_136 = (void*)0;
    VECTOR(uint32_t, 2) l_137 = (VECTOR(uint32_t, 2))(0xFC0AEFA7L, 0x1663C647L);
    uint8_t *l_138 = &p_449->g_139;
    VECTOR(uint32_t, 4) l_140 = (VECTOR(uint32_t, 4))(0x1836AFDFL, (VECTOR(uint32_t, 2))(0x1836AFDFL, 0x18FA24BEL), 0x18FA24BEL);
    int16_t *l_158 = &p_449->g_46;
    int32_t l_166 = 0x76F8C7CCL;
    int32_t l_217 = 0L;
    int64_t l_238 = (-3L);
    VECTOR(uint64_t, 16) l_240 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 0UL, 18446744073709551607UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551607UL), (VECTOR(uint64_t, 2))(0UL, 18446744073709551607UL), 0UL, 18446744073709551607UL, 0UL, 18446744073709551607UL);
    VECTOR(int16_t, 16) l_369 = (VECTOR(int16_t, 16))(0x4910L, (VECTOR(int16_t, 4))(0x4910L, (VECTOR(int16_t, 2))(0x4910L, 0x20E5L), 0x20E5L), 0x20E5L, 0x4910L, 0x20E5L, (VECTOR(int16_t, 2))(0x4910L, 0x20E5L), (VECTOR(int16_t, 2))(0x4910L, 0x20E5L), 0x4910L, 0x20E5L, 0x4910L, 0x20E5L);
    uint32_t *l_393 = (void*)0;
    uint32_t *l_394 = (void*)0;
    uint32_t *l_401[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_403 = 0x529EB063L;
    int32_t l_407 = 0x42027B56L;
    VECTOR(int32_t, 2) l_412 = (VECTOR(int32_t, 2))(8L, 0x3999D381L);
    int16_t l_419 = 0x47E4L;
    int64_t *l_423 = &l_238;
    VECTOR(int64_t, 4) l_424 = (VECTOR(int64_t, 4))(0x416AC3CC480CAD9BL, (VECTOR(int64_t, 2))(0x416AC3CC480CAD9BL, 0x1AC8B83718306D8AL), 0x1AC8B83718306D8AL);
    VECTOR(int8_t, 16) l_429 = (VECTOR(int8_t, 16))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, 0x38L), 0x38L), 0x38L, 0x15L, 0x38L, (VECTOR(int8_t, 2))(0x15L, 0x38L), (VECTOR(int8_t, 2))(0x15L, 0x38L), 0x15L, 0x38L, 0x15L, 0x38L);
    int8_t *l_430 = &p_449->g_408[0][0];
    VECTOR(int64_t, 16) l_438 = (VECTOR(int64_t, 16))(0x4322BBD3E6B5CA20L, (VECTOR(int64_t, 4))(0x4322BBD3E6B5CA20L, (VECTOR(int64_t, 2))(0x4322BBD3E6B5CA20L, (-1L)), (-1L)), (-1L), 0x4322BBD3E6B5CA20L, (-1L), (VECTOR(int64_t, 2))(0x4322BBD3E6B5CA20L, (-1L)), (VECTOR(int64_t, 2))(0x4322BBD3E6B5CA20L, (-1L)), 0x4322BBD3E6B5CA20L, (-1L), 0x4322BBD3E6B5CA20L, (-1L));
    uint32_t **l_439 = &l_394;
    int i;
    if (((((GROUP_DIVERGE(2, 1) , (((*l_138) ^= (((p_15 , l_136) == (((VECTOR(uint32_t, 16))(l_137.xxxyyxyxyxyxxxyy)).sb , &p_449->g_24)) , p_15)) <= ((VECTOR(uint8_t, 2))(0UL, 7UL)).lo)) | (0x5FL < p_449->g_comm_values[p_449->tid])) == ((((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 2))(l_140.zx)).yxxx, ((VECTOR(uint32_t, 8))(0x3DDF55D2L, 0x0E7AEBFCL, ((VECTOR(uint32_t, 4))(p_449->g_141.wwwz)), 4UL, 0xB2EDB8FDL)).lo))).odd, ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 8))(p_449->g_142.s14fff49a)).hi, ((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0L, 0x1067L)))).yxxx)).zywzzzyyyyzwxzzw, ((VECTOR(int16_t, 2))(0x757BL, 0x0D89L)).yxxxyyxxyxyxxyyy))).sd61c))).wyyywwxx, ((VECTOR(uint32_t, 16))(0x5683EFAFL, ((VECTOR(uint32_t, 8))(p_449->g_143.s68ad1b2b)), 4294967286UL, (safe_sub_func_int32_t_s_s((p_449->g_146[0] >= p_14), p_15)), 0x1556D0B4L, p_449->g_93.w, p_449->g_90[1], 0x9A82547FL, 4294967294UL)).even, ((VECTOR(uint32_t, 8))(1UL))))).s55))).yyxyyyyx, ((VECTOR(uint32_t, 8))(0x819652D5L))))).s4 != p_449->g_88) & p_449->g_90[4])) == 0x3753L))
    { /* block id: 57 */
        int16_t **l_153 = (void*)0;
        int16_t *l_155 = &p_449->g_46;
        int16_t **l_154 = &l_155;
        int16_t *l_157 = &p_449->g_46;
        int16_t **l_156 = &l_157;
        uint16_t *l_165[8][10][1] = {{{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30}},{{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30}},{{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30}},{{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30}},{{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30}},{{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30}},{{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30}},{{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30},{&p_449->g_30}}};
        int32_t l_171 = 1L;
        int i, j, k;
        (*p_449->g_23) = ((safe_mod_func_uint32_t_u_u((((4294967291UL > ((void*)0 == l_138)) , ((safe_add_func_uint32_t_u_u((((((*l_154) = func_58(&p_449->g_46, p_449)) != (l_158 = ((*l_156) = (void*)0))) && ((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((18446744073709551615UL >= (safe_mod_func_int32_t_s_s(((l_166 = p_449->g_88) <= (+(safe_rshift_func_int16_t_s_s((((((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(255UL, 0xDCL)).yyxyyxyy)).s6 > (safe_mod_func_uint64_t_u_u(((0x10L ^ 255UL) == (-1L)), p_15))) , p_449->g_comm_values[p_449->tid]) > GROUP_DIVERGE(2, 1)) & p_14) >= p_14), p_449->g_139)))), p_14))), 255UL)), p_16)) > l_171)) ^ p_449->g_98.x), l_171)) >= FAKE_DIVERGE(p_449->local_2_offset, get_local_id(2), 10))) || l_171), p_15)) != 0x8C450E8BA25EF8F9L);
        return p_449->g_108;
    }
    else
    { /* block id: 64 */
        uint16_t *l_181 = (void*)0;
        int32_t l_215 = (-5L);
        int32_t l_222[5] = {0x0D5BA451L,0x0D5BA451L,0x0D5BA451L,0x0D5BA451L,0x0D5BA451L};
        uint64_t *l_231[10] = {&p_449->g_232,&p_449->g_232,&p_449->g_232,&p_449->g_232,&p_449->g_232,&p_449->g_232,&p_449->g_232,&p_449->g_232,&p_449->g_232,&p_449->g_232};
        int32_t **l_235[3][4];
        VECTOR(uint64_t, 16) l_239 = (VECTOR(uint64_t, 16))(0xD7328853CA8674CCL, (VECTOR(uint64_t, 4))(0xD7328853CA8674CCL, (VECTOR(uint64_t, 2))(0xD7328853CA8674CCL, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 0xD7328853CA8674CCL, 18446744073709551607UL, (VECTOR(uint64_t, 2))(0xD7328853CA8674CCL, 18446744073709551607UL), (VECTOR(uint64_t, 2))(0xD7328853CA8674CCL, 18446744073709551607UL), 0xD7328853CA8674CCL, 18446744073709551607UL, 0xD7328853CA8674CCL, 18446744073709551607UL);
        int8_t *l_370 = &p_449->g_90[4];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
                l_235[i][j] = &l_136;
        }
        if ((p_449->g_98.x = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x161A0642L, (-1L), 0x3B60CE8AL, (-1L))).wxyzyzyw)).s1))
        { /* block id: 66 */
            uint16_t *l_178 = &p_449->g_30;
            int32_t l_192[8][9] = {{0x0A341D8FL,(-1L),0x3C7C4FD4L,1L,(-7L),0L,0x0A341D8FL,(-1L),(-2L)},{0x0A341D8FL,(-1L),0x3C7C4FD4L,1L,(-7L),0L,0x0A341D8FL,(-1L),(-2L)},{0x0A341D8FL,(-1L),0x3C7C4FD4L,1L,(-7L),0L,0x0A341D8FL,(-1L),(-2L)},{0x0A341D8FL,(-1L),0x3C7C4FD4L,1L,(-7L),0L,0x0A341D8FL,(-1L),(-2L)},{0x0A341D8FL,(-1L),0x3C7C4FD4L,1L,(-7L),0L,0x0A341D8FL,(-1L),(-2L)},{0x0A341D8FL,(-1L),0x3C7C4FD4L,1L,(-7L),0L,0x0A341D8FL,(-1L),(-2L)},{0x0A341D8FL,(-1L),0x3C7C4FD4L,1L,(-7L),0L,0x0A341D8FL,(-1L),(-2L)},{0x0A341D8FL,(-1L),0x3C7C4FD4L,1L,(-7L),0L,0x0A341D8FL,(-1L),(-2L)}};
            uint8_t *l_202 = &p_449->g_203;
            int64_t *l_210 = (void*)0;
            int64_t *l_211 = (void*)0;
            int64_t *l_212 = (void*)0;
            int64_t *l_213 = (void*)0;
            int64_t *l_214 = &p_449->g_105;
            int i, j;
            l_217 |= (((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((++(*l_178)) , (void*)0) != l_181), ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(0x3EL, 0x06L)).yyxy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 16))(9UL, ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 8))((safe_add_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((*l_138)++), (p_449->g_195--))), (((VECTOR(int64_t, 2))(0x361AB7B014ADF549L, 0x1CA12BF3FEF99F4FL)).lo ^ ((((p_449->g_comm_values[p_449->tid] >= p_15) == 0L) != 0x0F82L) , ((*l_214) &= (((safe_lshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((*l_202)++) & ((~(safe_mul_func_int8_t_s_s(((void*)0 == p_449->g_208[1]), 0x39L))) && p_15)), l_192[0][4])), p_15)) > l_166) <= 9L)))))), GROUP_DIVERGE(2, 1))) < l_215), l_192[7][0])), 254UL, l_215, 255UL, 249UL, FAKE_DIVERGE(p_449->group_1_offset, get_group_id(1), 10), 255UL, 0UL)).s77, (uint8_t)p_14, (uint8_t)l_215))), ((VECTOR(uint8_t, 8))(0xA3L)), 0x37L, ((VECTOR(uint8_t, 2))(0x9EL)), 9UL, 0xFEL)).hi, ((VECTOR(uint8_t, 8))(0x49L))))).s05, ((VECTOR(uint8_t, 2))(0x04L))))).yxyyxxyyyyxyxyyx, ((VECTOR(uint8_t, 16))(0xCAL))))).s09)).yyyx))), 253UL, 0xE1L, l_215, p_449->g_216[2], 0x33L, 0xFAL, 247UL, ((VECTOR(uint8_t, 4))(255UL)), 253UL)).s3023)).w, l_215)) || p_15))), p_16)), l_140.x)) , &p_449->g_46) == (void*)0);
            (*p_449->g_23) ^= l_215;
        }
        else
        { /* block id: 74 */
            int32_t *l_223 = &l_166;
            int32_t *l_224 = &l_217;
            (*p_449->g_23) |= ((*l_224) = (safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(l_215, p_449->g_90[2])), ((p_15 && (-10L)) & ((*l_223) = (l_222[1] = ((VECTOR(int32_t, 2))(0x2A67BABFL, 0L)).odd))))));
        }
        atomic_max(&p_449->l_atomic_reduction[0], ((safe_rshift_func_uint8_t_u_u((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(1UL, 255UL)), 248UL, 249UL)).ywyzxzyy)).s1 && ((safe_mul_func_uint16_t_u_u(65535UL, (safe_add_func_uint64_t_u_u((l_181 != l_181), (p_449->g_232 = (&p_449->g_139 != (void*)0)))))) , (safe_mod_func_uint16_t_u_u(((((((p_449->g_209 , l_235[2][0]) != (((safe_sub_func_int8_t_s_s(l_238, (((((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 2))(7UL, 0xF78D238EB0DDB8EAL)).xyxx, ((VECTOR(uint64_t, 8))(0xEF097FE925A3130AL, 0xBBD2EF351D795C9BL, ((VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL)), ((VECTOR(uint64_t, 2))(l_239.sd6)), 18446744073709551613UL, 0x640EFCA2EE276909L)).hi))).z || ((VECTOR(uint64_t, 8))(0xE8969E6188F7C297L, ((VECTOR(uint64_t, 2))(1UL, 18446744073709551614UL)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_240.s96d4)))), 5UL)).s4) != p_14) & p_16))) != p_449->g_88) , &l_136)) >= p_17) , (*p_449->g_23)) != p_449->g_142.sd) != 0x01A5F3E66D628401L), p_449->g_30)))), 6)) && p_17) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_449->v_collective += p_449->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if ((atomic_inc(&p_449->l_atomic_input[3]) == 2))
        { /* block id: 83 */
            VECTOR(uint16_t, 4) l_241 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x3250L), 0x3250L);
            VECTOR(int32_t, 4) l_242 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-4L)), (-4L));
            uint16_t l_243 = 0x9369L;
            VECTOR(int32_t, 2) l_244 = (VECTOR(int32_t, 2))(0x48941EFCL, (-1L));
            VECTOR(int32_t, 4) l_245 = (VECTOR(int32_t, 4))(0x50FEA91BL, (VECTOR(int32_t, 2))(0x50FEA91BL, 3L), 3L);
            VECTOR(int32_t, 16) l_246 = (VECTOR(int32_t, 16))(0x65D0CD89L, (VECTOR(int32_t, 4))(0x65D0CD89L, (VECTOR(int32_t, 2))(0x65D0CD89L, 1L), 1L), 1L, 0x65D0CD89L, 1L, (VECTOR(int32_t, 2))(0x65D0CD89L, 1L), (VECTOR(int32_t, 2))(0x65D0CD89L, 1L), 0x65D0CD89L, 1L, 0x65D0CD89L, 1L);
            VECTOR(int32_t, 4) l_247 = (VECTOR(int32_t, 4))(0x7F76D717L, (VECTOR(int32_t, 2))(0x7F76D717L, 0x30BC3B02L), 0x30BC3B02L);
            VECTOR(int32_t, 2) l_248 = (VECTOR(int32_t, 2))(0x27B079A7L, 1L);
            uint64_t l_249 = 0x8DFAD1FED27EC4DDL;
            int8_t l_325 = 0x6FL;
            uint16_t l_326 = 0x2DB4L;
            VECTOR(int32_t, 2) l_327 = (VECTOR(int32_t, 2))(0x0AAC8C82L, 0x5BF541D3L);
            uint64_t l_354 = 1UL;
            int64_t l_355 = 0x45581D9E53581991L;
            int64_t l_356 = 0L;
            int i;
            if ((l_249 = ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))((l_241.y , 0L), ((VECTOR(int32_t, 8))(l_242.y, l_243, (-5L), ((VECTOR(int32_t, 2))(0x2028FAF6L, (-1L))), ((VECTOR(int32_t, 2))(0x1D2F2F3AL, 0x3A026879L)), 0x3A5F7D97L)), 6L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_244.yxyy)).lo)), ((VECTOR(int32_t, 4))(l_245.xyxy)))).s27e3, ((VECTOR(int32_t, 8))(0L, 0x750B1588L, 2L, ((VECTOR(int32_t, 4))(l_246.sd62e)), 2L)).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_247.x, 0x79AEE05EL, ((VECTOR(int32_t, 4))(l_248.xyyy)), (-1L), 0L)).odd)).xwyyzyzy)).odd))).x))
            { /* block id: 85 */
                int64_t l_250[5];
                uint8_t l_295 = 247UL;
                VECTOR(uint32_t, 2) l_296 = (VECTOR(uint32_t, 2))(0UL, 4UL);
                int i;
                for (i = 0; i < 5; i++)
                    l_250[i] = 0x271999272A6A57EFL;
                if (l_250[1])
                { /* block id: 86 */
                    int32_t l_251 = (-10L);
                    for (l_251 = 1; (l_251 > 5); l_251++)
                    { /* block id: 89 */
                        VECTOR(int32_t, 4) l_254 = (VECTOR(int32_t, 4))(0x1A24570CL, (VECTOR(int32_t, 2))(0x1A24570CL, 0x2EFA34E4L), 0x2EFA34E4L);
                        VECTOR(int32_t, 8) l_255 = (VECTOR(int32_t, 8))(0x7CCE5200L, (VECTOR(int32_t, 4))(0x7CCE5200L, (VECTOR(int32_t, 2))(0x7CCE5200L, 1L), 1L), 1L, 0x7CCE5200L, 1L);
                        int16_t l_256 = 0x75B6L;
                        uint32_t l_257 = 0xA55AB99AL;
                        int16_t l_258 = 1L;
                        VECTOR(int32_t, 16) l_259 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                        int64_t l_260 = 1L;
                        VECTOR(uint64_t, 8) l_261 = (VECTOR(uint64_t, 8))(0x13A423967E32B0C3L, (VECTOR(uint64_t, 4))(0x13A423967E32B0C3L, (VECTOR(uint64_t, 2))(0x13A423967E32B0C3L, 0UL), 0UL), 0UL, 0x13A423967E32B0C3L, 0UL);
                        VECTOR(uint64_t, 16) l_262 = (VECTOR(uint64_t, 16))(0x7E25A2E3E00FD490L, (VECTOR(uint64_t, 4))(0x7E25A2E3E00FD490L, (VECTOR(uint64_t, 2))(0x7E25A2E3E00FD490L, 5UL), 5UL), 5UL, 0x7E25A2E3E00FD490L, 5UL, (VECTOR(uint64_t, 2))(0x7E25A2E3E00FD490L, 5UL), (VECTOR(uint64_t, 2))(0x7E25A2E3E00FD490L, 5UL), 0x7E25A2E3E00FD490L, 5UL, 0x7E25A2E3E00FD490L, 5UL);
                        VECTOR(int32_t, 2) l_263 = (VECTOR(int32_t, 2))((-3L), 0x6B9474F2L);
                        int16_t l_264 = 7L;
                        VECTOR(int32_t, 16) l_265 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x36089E21L), 0x36089E21L), 0x36089E21L, 1L, 0x36089E21L, (VECTOR(int32_t, 2))(1L, 0x36089E21L), (VECTOR(int32_t, 2))(1L, 0x36089E21L), 1L, 0x36089E21L, 1L, 0x36089E21L);
                        int32_t l_266 = (-7L);
                        int32_t *l_267 = (void*)0;
                        int32_t *l_268 = (void*)0;
                        int i;
                        l_266 |= ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_254.yzxx)).wzxxzzxzwyzxwyyw)), ((VECTOR(int32_t, 16))((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_255.s0602)))).y , l_256), (-5L), ((VECTOR(int32_t, 2))(0x7A942357L, 0x74CCD762L)), l_257, (l_258 , (l_244.x = ((VECTOR(int32_t, 4))(l_259.sac79)).z)), (-5L), (-1L), 0x4985C6CCL, 0x43005221L, ((l_260 , ((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 8))(l_261.s71677344)).even, ((VECTOR(uint64_t, 2))(l_262.sfe)).yxyy))).w) , 6L), 0x493E7D09L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_263.yxxxyxyx)))).s3, l_264, 0x3CF16949L, 0x534E1FA7L)), ((VECTOR(int32_t, 8))(l_265.s254f27d1)).s0415727623711014)))))).s8;
                        l_268 = l_267;
                    }
                    for (l_251 = 0; (l_251 > 2); l_251++)
                    { /* block id: 96 */
                        int32_t l_271 = 7L;
                        int16_t l_272 = 8L;
                        uint16_t l_273 = 0x518CL;
                        int8_t l_274 = (-3L);
                        int8_t l_275 = 0L;
                        uint32_t l_276 = 4294967288UL;
                        int32_t l_280 = 8L;
                        int32_t *l_279 = &l_280;
                        int32_t *l_281 = (void*)0;
                        l_274 ^= (l_273 |= (l_246.s5 = (l_272 ^= l_271)));
                        l_276++;
                        l_281 = l_279;
                    }
                }
                else
                { /* block id: 104 */
                    uint32_t l_282 = 7UL;
                    uint32_t l_285 = 0x190A5AF9L;
                    uint32_t l_294 = 0x3F6DD1D8L;
                    --l_282;
                    l_285--;
                    for (l_282 = 10; (l_282 != 26); l_282 = safe_add_func_int32_t_s_s(l_282, 8))
                    { /* block id: 109 */
                        int8_t l_290 = 0x09L;
                        int32_t l_292 = (-3L);
                        int32_t *l_291 = &l_292;
                        int32_t *l_293 = (void*)0;
                        l_247.y = (l_242.w = 0x7AF88E16L);
                        l_244.x = (l_290 , 0x539E8009L);
                        l_291 = (l_293 = l_291);
                    }
                    l_248.y = l_294;
                }
                l_296.x &= (l_246.s9 |= (l_248.y = l_295));
                for (l_250[1] = 0; (l_250[1] >= (-22)); l_250[1] = safe_sub_func_int8_t_s_s(l_250[1], 6))
                { /* block id: 123 */
                    uint8_t l_299 = 255UL;
                    l_299--;
                }
            }
            else
            { /* block id: 126 */
                int32_t l_302[8][3][2] = {{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}}};
                int32_t l_324 = 1L;
                int i, j, k;
                for (l_302[6][1][1] = (-23); (l_302[6][1][1] < 26); l_302[6][1][1]++)
                { /* block id: 129 */
                    uint32_t l_307 = 4UL;
                    uint32_t *l_306 = &l_307;
                    uint32_t **l_305 = &l_306;
                    uint32_t **l_308 = &l_306;
                    l_308 = l_305;
                    for (l_307 = 0; (l_307 < 24); l_307 = safe_add_func_uint32_t_u_u(l_307, 5))
                    { /* block id: 133 */
                        int16_t l_311 = 0x120FL;
                        uint16_t l_312 = 1UL;
                        int64_t l_313 = 0x5C6A7331B43B850CL;
                        uint16_t l_314 = 0x14F9L;
                        uint16_t l_315 = 0UL;
                        VECTOR(int32_t, 8) l_316 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), (-7L)), (-7L)), (-7L), (-9L), (-7L));
                        int32_t l_317 = (-9L);
                        int16_t l_318[3];
                        int16_t l_319 = 0x1EFCL;
                        int64_t l_320 = (-1L);
                        uint64_t l_321 = 0x2337D7B04C0DBBB1L;
                        VECTOR(int32_t, 16) l_322 = (VECTOR(int32_t, 16))(0x38D3C8C1L, (VECTOR(int32_t, 4))(0x38D3C8C1L, (VECTOR(int32_t, 2))(0x38D3C8C1L, 7L), 7L), 7L, 0x38D3C8C1L, 7L, (VECTOR(int32_t, 2))(0x38D3C8C1L, 7L), (VECTOR(int32_t, 2))(0x38D3C8C1L, 7L), 0x38D3C8C1L, 7L, 0x38D3C8C1L, 7L);
                        int32_t *l_323 = &l_317;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_318[i] = (-8L);
                        l_244.x = ((VECTOR(int32_t, 8))(l_311, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))((l_246.sa = 0x2B0DF9F3L), 1L, l_312, (l_246.sf ^= (l_313 , 0L)), 0x7B55635CL, 0x755D46ABL, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(0x6F154D8FL, (-8L))).yyxxxyxx, (int32_t)l_314))).s1, l_315, 1L, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 0x72232335L)).yxxyxxxx)).s10))).xxyxyyxxxxyyxxxy)).s35, ((VECTOR(int32_t, 16))(l_316.s7525663461651744)).s5d))), 0x700E3CF9L, ((l_317 , (GROUP_DIVERGE(2, 1) , l_318[1])) , l_319), ((VECTOR(int32_t, 2))(0L)), 1L, 7L)), ((VECTOR(int32_t, 8))(0x085D790CL))))))).s05, ((VECTOR(int32_t, 2))(0L))))).xyyy, ((VECTOR(int32_t, 4))(0L))))), 0x5B919CC3L, 0x40FA8D58L, 0L)).hi, ((VECTOR(int32_t, 8))(4L))))).s03, ((VECTOR(int32_t, 2))(0x74C6E71AL)), ((VECTOR(int32_t, 2))(0x376B37A1L))))), 8L, (-6L), ((VECTOR(int32_t, 2))(0L)), 0x224AA467L)).s2;
                        l_321 = l_320;
                        l_248.x = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_322.s94)), 0x765B70BBL, 0x3FC12177L)).w;
                        l_323 = l_323;
                    }
                }
                l_248.y = l_324;
            }
            l_326 = l_325;
            if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x2B34B194L, (-4L))), (-7L), 4L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_327.xy)))), 2L, 0x18AAB4A7L)).s30)), 0x2AF69D36L, 0x16652E78L)).xyxzyxxw)).s5)
            { /* block id: 145 */
                int32_t l_328 = 0x7D3D4BE4L;
                uint8_t l_329 = 0x06L;
                l_247.w = (-1L);
                l_246.s3 = l_328;
                l_329--;
            }
            else
            { /* block id: 149 */
                int32_t l_332 = 3L;
                uint16_t l_333 = 0xA19FL;
                uint32_t l_334[6][2][8] = {{{1UL,6UL,1UL,1UL,6UL,1UL,1UL,6UL},{1UL,6UL,1UL,1UL,6UL,1UL,1UL,6UL}},{{1UL,6UL,1UL,1UL,6UL,1UL,1UL,6UL},{1UL,6UL,1UL,1UL,6UL,1UL,1UL,6UL}},{{1UL,6UL,1UL,1UL,6UL,1UL,1UL,6UL},{1UL,6UL,1UL,1UL,6UL,1UL,1UL,6UL}},{{1UL,6UL,1UL,1UL,6UL,1UL,1UL,6UL},{1UL,6UL,1UL,1UL,6UL,1UL,1UL,6UL}},{{1UL,6UL,1UL,1UL,6UL,1UL,1UL,6UL},{1UL,6UL,1UL,1UL,6UL,1UL,1UL,6UL}},{{1UL,6UL,1UL,1UL,6UL,1UL,1UL,6UL},{1UL,6UL,1UL,1UL,6UL,1UL,1UL,6UL}}};
                uint32_t l_335 = 0xC9F9C56EL;
                int i, j, k;
                l_247.w = (l_333 = l_332);
                l_335 = l_334[3][1][3];
                for (l_334[5][1][2] = 0; (l_334[5][1][2] <= 20); l_334[5][1][2] = safe_add_func_uint64_t_u_u(l_334[5][1][2], 1))
                { /* block id: 155 */
                    int32_t l_338 = 0L;
                    int32_t l_350 = 0x1877D3E9L;
                    int32_t *l_349 = &l_350;
                    int32_t *l_351 = &l_350;
                    int32_t *l_352 = &l_350;
                    int32_t *l_353 = (void*)0;
                    if (l_338)
                    { /* block id: 156 */
                        VECTOR(uint64_t, 16) l_339 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 1UL, 18446744073709551608UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551608UL), (VECTOR(uint64_t, 2))(1UL, 18446744073709551608UL), 1UL, 18446744073709551608UL, 1UL, 18446744073709551608UL);
                        uint16_t l_340 = 0UL;
                        uint64_t l_341 = 0UL;
                        int32_t l_343 = 0x197CB180L;
                        int32_t *l_342[8][5][6] = {{{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343}},{{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343}},{{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343}},{{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343}},{{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343}},{{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343}},{{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343}},{{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343,&l_343,&l_343,&l_343}}};
                        int32_t *l_344[9][2][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                        int i, j, k;
                        l_247.w |= l_339.s3;
                        l_247.x = l_340;
                        l_344[6][1][0] = (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x49E4L, 0x352CL)).yyxyxyxx)).s1 , (l_341 , l_342[5][3][2]));
                    }
                    else
                    { /* block id: 160 */
                        int16_t l_345 = 0x7C06L;
                        uint32_t l_346 = 0xC0A9890DL;
                        --l_346;
                    }
                    l_352 = (l_351 = l_349);
                    l_353 = (void*)0;
                }
            }
            l_356 = (l_354 , l_355);
            unsigned int result = 0;
            result += l_241.w;
            result += l_241.z;
            result += l_241.y;
            result += l_241.x;
            result += l_242.w;
            result += l_242.z;
            result += l_242.y;
            result += l_242.x;
            result += l_243;
            result += l_244.y;
            result += l_244.x;
            result += l_245.w;
            result += l_245.z;
            result += l_245.y;
            result += l_245.x;
            result += l_246.sf;
            result += l_246.se;
            result += l_246.sd;
            result += l_246.sc;
            result += l_246.sb;
            result += l_246.sa;
            result += l_246.s9;
            result += l_246.s8;
            result += l_246.s7;
            result += l_246.s6;
            result += l_246.s5;
            result += l_246.s4;
            result += l_246.s3;
            result += l_246.s2;
            result += l_246.s1;
            result += l_246.s0;
            result += l_247.w;
            result += l_247.z;
            result += l_247.y;
            result += l_247.x;
            result += l_248.y;
            result += l_248.x;
            result += l_249;
            result += l_325;
            result += l_326;
            result += l_327.y;
            result += l_327.x;
            result += l_354;
            result += l_355;
            result += l_356;
            atomic_add(&p_449->l_special_values[3], result);
        }
        else
        { /* block id: 169 */
            (1 + 1);
        }
        (*p_449->g_23) = (l_217 = (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((void*)0 != l_231[4]), (safe_lshift_func_int16_t_s_s(p_14, (safe_mod_func_int16_t_s_s(((!(+(safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_369.s2f)).xxyyxxxy)).lo, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(0x381CL, 0x2E41L, 0x5E07L, (-1L)))))))).y, p_15)), (l_370 == l_370))))) & ((safe_mul_func_int8_t_s_s(((void*)0 == l_136), (safe_mul_func_int32_t_s_s((l_166 &= (safe_div_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((1UL <= p_16), p_16)), p_449->g_146[0])) , p_16), 18446744073709551615UL))), 0L)))) || 0UL)), p_17)))))), p_449->g_2.s1)));
    }
    for (p_449->g_232 = 21; (p_449->g_232 <= 49); p_449->g_232 = safe_add_func_int32_t_s_s(p_449->g_232, 7))
    { /* block id: 178 */
        return p_449->g_108;
    }
    atomic_add(&p_449->g_atomic_reduction[get_linear_group_id()], (FAKE_DIVERGE(p_449->group_2_offset, get_group_id(2), 10) & (safe_sub_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(p_449->g_142.s4, (safe_div_func_int16_t_s_s((safe_div_func_uint32_t_u_u((p_449->g_39--), p_16)), 0x4198L)))) & (safe_mul_func_uint16_t_u_u(0xDDACL, ((((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(2UL, (p_449->g_90[4] != ((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(0xC5FE19E6L, 0x5859390DL, (p_449->g_409[0]--), 0x4F939530L, ((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 16))(4294967293UL, 0x48B76258L, 4UL, 0x6BD14FECL, 4294967294UL, ((VECTOR(uint32_t, 2))(2UL, 4294967295UL)), ((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_412.yxxyyyyy)).s4, ((VECTOR(int32_t, 4))(0x07DFD150L, (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(l_419, (l_240.sd || 0UL))), (safe_rshift_func_int16_t_s_u(p_17, p_15)))), p_449->g_2.sc)), 0x216A934AL, 0x5E051273L)), ((VECTOR(int32_t, 2))(1L)), 0x0E301268L)).s7126102633071512, ((VECTOR(int32_t, 16))(0x7A281651L))))).se5, ((VECTOR(uint32_t, 2))(0x89AAFE97L)), ((VECTOR(uint32_t, 2))(9UL))))), ((VECTOR(uint32_t, 2))(0xFA90737FL)), 0UL, ((VECTOR(uint32_t, 4))(0x4E06BF33L)))).s2b, ((VECTOR(uint32_t, 2))(0x0223307EL))))).xxyx)).odd, (uint32_t)GROUP_DIVERGE(1, 1)))), 0x154802E1L, 0x7F1656DCL)).s4, (*p_449->g_23))) < p_449->g_90[0])), 0UL, 0UL)), ((VECTOR(uint16_t, 4))(0x507EL))))), ((VECTOR(uint16_t, 4))(0x2EB2L)), ((VECTOR(uint16_t, 4))(65535UL))))).x && p_449->g_422) == 0x71E102065E3F7735L)))), 0x5D63L))));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_449->v_collective += p_449->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    (*p_449->g_23) ^= ((((((((*l_423) = 0x4A117D471371B883L) , (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_424.wy)).xyyxyxyxyxyyyxxy)).sb > ((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 2))((-1L), 0x7EEC87AE34F98D62L)).even, GROUP_DIVERGE(1, 1))) && (safe_lshift_func_uint16_t_u_u(l_424.y, 3))))) , ((((*l_430) &= ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_429.se5b3d8c43d121dce)).sb913)).w) >= (safe_lshift_func_int16_t_s_u(p_14, 11))) || (p_16 || (+((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(0x1126L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((safe_mul_func_uint8_t_u_u(l_166, (p_15 < 1UL))) && ((safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))((safe_div_func_int64_t_s_s(((*l_423) = p_449->g_93.z), ((VECTOR(int64_t, 2))(l_438.sfc)).hi)), ((((*l_439) = l_401[2]) != &p_449->g_216[2]) == p_449->g_408[0][0]), 0x547BDA15L, 1L)).xywywyzyxxwzwxyw))).s2)) < (-1L))), l_137.x, ((VECTOR(int16_t, 4))(0L)), 0x6BD2L, ((VECTOR(int16_t, 4))((-5L))), p_449->g_105, 0x183AL, ((VECTOR(int16_t, 2))(0x1845L)), 0L)).s1d)), p_449->g_2.s7, ((VECTOR(int16_t, 4))(0x5D43L)), (-3L), (-8L), 0x1F1BL, ((VECTOR(int16_t, 4))((-10L))), 0x1D72L)), ((VECTOR(int16_t, 16))(1L))))).se)))) == 1L) , l_419) , p_15) ^ 0x2BL);
    return &p_449->g_404;
}


/* ------------------------------------------ */
/* 
 * reads : p_449->g_90 p_449->g_98 p_449->g_91 p_449->g_30 p_449->g_24 p_449->g_39 p_449->g_93 p_449->g_23 p_449->l_comm_values
 * writes: p_449->g_24 p_449->g_30
 */
uint32_t  func_18(uint64_t  p_19, int32_t * p_20, int32_t * p_21, uint32_t  p_22, struct S0 * p_449)
{ /* block id: 46 */
    int8_t l_116[1][9][8] = {{{4L,4L,0x71L,0x29L,(-1L),0x5BL,1L,(-9L)},{4L,4L,0x71L,0x29L,(-1L),0x5BL,1L,(-9L)},{4L,4L,0x71L,0x29L,(-1L),0x5BL,1L,(-9L)},{4L,4L,0x71L,0x29L,(-1L),0x5BL,1L,(-9L)},{4L,4L,0x71L,0x29L,(-1L),0x5BL,1L,(-9L)},{4L,4L,0x71L,0x29L,(-1L),0x5BL,1L,(-9L)},{4L,4L,0x71L,0x29L,(-1L),0x5BL,1L,(-9L)},{4L,4L,0x71L,0x29L,(-1L),0x5BL,1L,(-9L)},{4L,4L,0x71L,0x29L,(-1L),0x5BL,1L,(-9L)}}};
    VECTOR(uint64_t, 8) l_127 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 18446744073709551615UL, 18446744073709551608UL);
    uint8_t l_128[1][7][3] = {{{0x6BL,8UL,0x6BL},{0x6BL,8UL,0x6BL},{0x6BL,8UL,0x6BL},{0x6BL,8UL,0x6BL},{0x6BL,8UL,0x6BL},{0x6BL,8UL,0x6BL},{0x6BL,8UL,0x6BL}}};
    int32_t **l_129 = &p_449->g_108;
    int32_t l_132 = 2L;
    int i, j, k;
    (*p_449->g_23) = (((safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s((l_116[0][0][2] || (safe_mod_func_int16_t_s_s((l_116[0][0][2] ^ (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_div_func_int16_t_s_s(l_116[0][0][2], p_449->g_90[4])), ((((safe_div_func_uint8_t_u_u((((VECTOR(uint64_t, 2))(l_127.s32)).odd == 0x10B79F681533B3F4L), p_449->g_98.x)) != p_449->g_91.s2) >= (((p_449->g_30 >= l_128[0][2][1]) , l_129) != &p_21)) >= p_449->g_24))), p_449->g_91.s4))), p_449->g_39))), p_19)), p_449->g_90[4])) < 0x9411D375A9F46BEDL) & p_449->g_93.x);
    for (p_449->g_30 = 0; (p_449->g_30 == 46); p_449->g_30++)
    { /* block id: 50 */
        if ((*p_449->g_23))
            break;
        l_132 ^= (*p_449->g_23);
    }
    return p_449->l_comm_values[(safe_mod_func_uint32_t_u_u(p_449->tid, 1))];
}


/* ------------------------------------------ */
/* 
 * reads : p_449->g_comm_values p_449->g_30 p_449->g_2 p_449->g_39 p_449->g_23 p_449->g_24 p_449->g_46 p_449->l_comm_values p_449->g_88 p_449->g_91 p_449->g_93 p_449->g_98 p_449->g_105 p_449->g_108
 * writes: p_449->g_46 p_449->g_2 p_449->g_39 p_449->g_88 p_449->g_90 p_449->g_105 p_449->g_24 p_449->g_108
 */
int32_t * func_25(int32_t  p_26, int32_t * p_27, uint32_t  p_28, struct S0 * p_449)
{ /* block id: 8 */
    uint32_t l_40 = 0x90EB1F0CL;
    int16_t *l_45 = &p_449->g_46;
    int16_t *l_47 = (void*)0;
    int32_t l_48 = 0x6D2926A0L;
    (*p_449->g_23) = ((l_40 ^ func_41((((p_449->g_2.s5 ^= (safe_div_func_int16_t_s_s((l_48 = ((*l_45) = p_449->g_comm_values[p_449->tid])), (p_449->g_30 , (-8L))))) > ((((void*)0 == &p_449->g_24) , ((void*)0 != l_45)) | ((VECTOR(uint16_t, 16))(65526UL, l_40, 0x33E6L, ((VECTOR(uint16_t, 8))(65531UL)), p_26, 65531UL, 2UL, 0x97A2L, 65532UL)).s8)) || l_48), p_449)) || (-8L));
    p_449->g_108 = p_27;
    for (p_28 = 21; (p_28 == 26); p_28++)
    { /* block id: 42 */
        int32_t *l_111 = (void*)0;
        return l_111;
    }
    return p_449->g_108;
}


/* ------------------------------------------ */
/* 
 * reads : p_449->g_39 p_449->g_23 p_449->g_24 p_449->g_46 p_449->g_2 p_449->l_comm_values p_449->g_88 p_449->g_91 p_449->g_93 p_449->g_98 p_449->g_105 p_449->g_30
 * writes: p_449->g_39 p_449->g_2 p_449->g_88 p_449->g_90 p_449->g_105
 */
uint16_t  func_41(int64_t  p_42, struct S0 * p_449)
{ /* block id: 12 */
    uint8_t l_57 = 255UL;
    int16_t *l_64 = &p_449->g_46;
    int16_t **l_63 = &l_64;
    int16_t *l_66[10];
    int16_t **l_65 = &l_66[2];
    int16_t *l_68 = &p_449->g_46;
    int16_t **l_67 = &l_68;
    int32_t *l_76 = (void*)0;
    int32_t *l_77 = (void*)0;
    int32_t *l_78 = (void*)0;
    int32_t *l_79 = (void*)0;
    int32_t *l_80 = (void*)0;
    int32_t *l_81 = (void*)0;
    int32_t *l_82 = (void*)0;
    int32_t *l_83[2];
    int32_t **l_107 = &l_78;
    int i;
    for (i = 0; i < 10; i++)
        l_66[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_83[i] = (void*)0;
    (*l_107) = func_49(func_54(((*l_67) = (l_57 , ((*l_65) = ((*l_63) = func_58(&p_449->g_46, p_449))))), p_42, p_449), &p_449->g_46, func_71(((safe_mod_func_uint8_t_u_u(((p_449->g_2.s8 |= ((((l_76 = l_76) != (void*)0) > (p_449->g_46 & 0x7F0D54DF9633F8A1L)) , 0x58C04388L)) < p_449->l_comm_values[(safe_mod_func_uint32_t_u_u(p_449->tid, 1))]), p_449->g_46)) , 0x0CCF5D46L), p_42, p_449), &p_449->g_46, p_449);
    return p_449->g_30;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_49(int16_t * p_50, int16_t * p_51, uint32_t * p_52, int16_t * p_53, struct S0 * p_449)
{ /* block id: 34 */
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t * func_54(int16_t * p_55, int32_t  p_56, struct S0 * p_449)
{ /* block id: 24 */
    int32_t *l_70[9][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
    int32_t **l_69 = &l_70[3][0];
    int i, j;
    (*l_69) = (void*)0;
    return p_55;
}


/* ------------------------------------------ */
/* 
 * reads : p_449->g_39 p_449->g_23 p_449->g_24
 * writes: p_449->g_39
 */
int16_t * func_58(int16_t * p_59, struct S0 * p_449)
{ /* block id: 13 */
    for (p_449->g_39 = (-22); (p_449->g_39 == 11); p_449->g_39 = safe_add_func_int16_t_s_s(p_449->g_39, 1))
    { /* block id: 16 */
        int64_t l_62 = (-1L);
        l_62 = 0x0BDD0C5DL;
        if ((*p_449->g_23))
            continue;
    }
    return &p_449->g_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_449->g_88 p_449->g_46 p_449->g_91 p_449->g_93 p_449->g_2 p_449->g_98 p_449->g_105
 * writes: p_449->g_88 p_449->g_90 p_449->g_105
 */
uint32_t * func_71(int32_t  p_72, uint16_t  p_73, struct S0 * p_449)
{ /* block id: 29 */
    uint32_t l_84 = 0xFF84D070L;
    int8_t *l_87 = &p_449->g_88;
    int8_t *l_89 = &p_449->g_90[4];
    VECTOR(int8_t, 8) l_92 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 6L), 6L), 6L, (-1L), 6L);
    VECTOR(int8_t, 8) l_94 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
    VECTOR(int32_t, 8) l_97 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2A7A6E09L), 0x2A7A6E09L), 0x2A7A6E09L, 1L, 0x2A7A6E09L);
    uint32_t *l_106 = (void*)0;
    int i;
    p_449->g_105 |= ((l_84 >= (l_84 <= ((safe_mod_func_uint16_t_u_u((((*l_87) |= 5L) | ((*l_89) = (+((VECTOR(int8_t, 2))(0x5EL, (-1L))).even))), p_449->g_46)) , (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_449->g_91.s0041)).zzwyxzyzxzzzwwzy)).se7)).xxxxxxyxxxxxxyxy, ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(0L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-3L), 0x4BL)).xyyy)), ((VECTOR(int8_t, 2))(0x1CL, 1L)), 0x67L)).even)).xzxyxyxyxzxywxyx)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(l_92.s24143740)).lo, ((VECTOR(int8_t, 2))(p_449->g_93.xy)).yyyy))).hi)).xyxxyxyyyxxxyyxx)))), ((VECTOR(int8_t, 2))((-4L), 0x31L)).yyxxyxxxxyxxyxxy))), ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(l_94.s5065)).lo, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x4DL, (-4L))).yyxxxyyx)).s04))).yyyyxxxxxyyxyyyy)))))).sd9cf)).wxzzxwwy)).s1501575715751001)).s1 && (safe_div_func_int64_t_s_s(0x6650442C135D3F9AL, p_449->g_2.s1)))))) | ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_97.s21)).yyxx)).wxxzzywzxzzwwxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_449->g_98.xxyxyxyx)).hi)).wwwwyyxy)).s74, (int32_t)(safe_rshift_func_int16_t_s_s(0x3ABFL, (safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(p_449->g_91.s0, p_449->g_98.y)), p_72)))), (int32_t)0x579A822CL))))).xxxyyyyy)).s5543555771044675))).even)).s2166324706545376)).s4);
    return l_106;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[9];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 9; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[9];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 9; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_comm_values[i] = 1;
    struct S0 c_450;
    struct S0* p_449 = &c_450;
    struct S0 c_451 = {
        (VECTOR(int32_t, 16))(0x27689351L, (VECTOR(int32_t, 4))(0x27689351L, (VECTOR(int32_t, 2))(0x27689351L, 0x00025260L), 0x00025260L), 0x00025260L, 0x27689351L, 0x00025260L, (VECTOR(int32_t, 2))(0x27689351L, 0x00025260L), (VECTOR(int32_t, 2))(0x27689351L, 0x00025260L), 0x27689351L, 0x00025260L, 0x27689351L, 0x00025260L), // p_449->g_2
        1L, // p_449->g_24
        &p_449->g_24, // p_449->g_23
        0x2AFDL, // p_449->g_30
        1UL, // p_449->g_39
        0x0DD3L, // p_449->g_46
        (-3L), // p_449->g_88
        {0x39L,0x39L,0x39L,0x39L,0x39L,0x39L,0x39L}, // p_449->g_90
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L), // p_449->g_91
        (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, (-6L)), (-6L)), // p_449->g_93
        (VECTOR(int32_t, 2))(0x08204A9FL, 0x05C4B446L), // p_449->g_98
        0x31A92BC7F3FAEFD0L, // p_449->g_105
        (void*)0, // p_449->g_108
        0x07L, // p_449->g_139
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x27924F71L), 0x27924F71L), // p_449->g_141
        (VECTOR(uint16_t, 16))(0xDCE9L, (VECTOR(uint16_t, 4))(0xDCE9L, (VECTOR(uint16_t, 2))(0xDCE9L, 65530UL), 65530UL), 65530UL, 0xDCE9L, 65530UL, (VECTOR(uint16_t, 2))(0xDCE9L, 65530UL), (VECTOR(uint16_t, 2))(0xDCE9L, 65530UL), 0xDCE9L, 65530UL, 0xDCE9L, 65530UL), // p_449->g_142
        (VECTOR(uint32_t, 16))(0xD20E6345L, (VECTOR(uint32_t, 4))(0xD20E6345L, (VECTOR(uint32_t, 2))(0xD20E6345L, 0xC1FB7A57L), 0xC1FB7A57L), 0xC1FB7A57L, 0xD20E6345L, 0xC1FB7A57L, (VECTOR(uint32_t, 2))(0xD20E6345L, 0xC1FB7A57L), (VECTOR(uint32_t, 2))(0xD20E6345L, 0xC1FB7A57L), 0xD20E6345L, 0xC1FB7A57L, 0xD20E6345L, 0xC1FB7A57L), // p_449->g_143
        {0UL,0UL,0UL,0UL}, // p_449->g_146
        2UL, // p_449->g_195
        0x22L, // p_449->g_203
        0UL, // p_449->g_209
        {&p_449->g_209,&p_449->g_209}, // p_449->g_208
        {4294967294UL,4294967294UL,4294967294UL,4294967294UL,4294967294UL}, // p_449->g_216
        0x4101EE616D3F465CL, // p_449->g_232
        0L, // p_449->g_402
        (-9L), // p_449->g_404
        4L, // p_449->g_405
        1L, // p_449->g_406
        {{0x7CL,0x4DL,0x7CL,0x7CL,0x4DL,0x7CL,0x7CL},{0x7CL,0x4DL,0x7CL,0x7CL,0x4DL,0x7CL,0x7CL},{0x7CL,0x4DL,0x7CL,0x7CL,0x4DL,0x7CL,0x7CL},{0x7CL,0x4DL,0x7CL,0x7CL,0x4DL,0x7CL,0x7CL}}, // p_449->g_408
        {0x7CL,0x7CL,0x7CL,0x7CL,0x7CL}, // p_449->g_409
        (-1L), // p_449->g_422
        2UL, // p_449->g_443
        18446744073709551615UL, // p_449->g_447
        0, // p_449->v_collective
        sequence_input[get_global_id(0)], // p_449->global_0_offset
        sequence_input[get_global_id(1)], // p_449->global_1_offset
        sequence_input[get_global_id(2)], // p_449->global_2_offset
        sequence_input[get_local_id(0)], // p_449->local_0_offset
        sequence_input[get_local_id(1)], // p_449->local_1_offset
        sequence_input[get_local_id(2)], // p_449->local_2_offset
        sequence_input[get_group_id(0)], // p_449->group_0_offset
        sequence_input[get_group_id(1)], // p_449->group_1_offset
        sequence_input[get_group_id(2)], // p_449->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[0][get_linear_local_id()])), // p_449->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_450 = c_451;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_449);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_449->g_2.s0, "p_449->g_2.s0", print_hash_value);
    transparent_crc(p_449->g_2.s1, "p_449->g_2.s1", print_hash_value);
    transparent_crc(p_449->g_2.s2, "p_449->g_2.s2", print_hash_value);
    transparent_crc(p_449->g_2.s3, "p_449->g_2.s3", print_hash_value);
    transparent_crc(p_449->g_2.s4, "p_449->g_2.s4", print_hash_value);
    transparent_crc(p_449->g_2.s5, "p_449->g_2.s5", print_hash_value);
    transparent_crc(p_449->g_2.s6, "p_449->g_2.s6", print_hash_value);
    transparent_crc(p_449->g_2.s7, "p_449->g_2.s7", print_hash_value);
    transparent_crc(p_449->g_2.s8, "p_449->g_2.s8", print_hash_value);
    transparent_crc(p_449->g_2.s9, "p_449->g_2.s9", print_hash_value);
    transparent_crc(p_449->g_2.sa, "p_449->g_2.sa", print_hash_value);
    transparent_crc(p_449->g_2.sb, "p_449->g_2.sb", print_hash_value);
    transparent_crc(p_449->g_2.sc, "p_449->g_2.sc", print_hash_value);
    transparent_crc(p_449->g_2.sd, "p_449->g_2.sd", print_hash_value);
    transparent_crc(p_449->g_2.se, "p_449->g_2.se", print_hash_value);
    transparent_crc(p_449->g_2.sf, "p_449->g_2.sf", print_hash_value);
    transparent_crc(p_449->g_24, "p_449->g_24", print_hash_value);
    transparent_crc(p_449->g_30, "p_449->g_30", print_hash_value);
    transparent_crc(p_449->g_39, "p_449->g_39", print_hash_value);
    transparent_crc(p_449->g_46, "p_449->g_46", print_hash_value);
    transparent_crc(p_449->g_88, "p_449->g_88", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_449->g_90[i], "p_449->g_90[i]", print_hash_value);

    }
    transparent_crc(p_449->g_91.s0, "p_449->g_91.s0", print_hash_value);
    transparent_crc(p_449->g_91.s1, "p_449->g_91.s1", print_hash_value);
    transparent_crc(p_449->g_91.s2, "p_449->g_91.s2", print_hash_value);
    transparent_crc(p_449->g_91.s3, "p_449->g_91.s3", print_hash_value);
    transparent_crc(p_449->g_91.s4, "p_449->g_91.s4", print_hash_value);
    transparent_crc(p_449->g_91.s5, "p_449->g_91.s5", print_hash_value);
    transparent_crc(p_449->g_91.s6, "p_449->g_91.s6", print_hash_value);
    transparent_crc(p_449->g_91.s7, "p_449->g_91.s7", print_hash_value);
    transparent_crc(p_449->g_93.x, "p_449->g_93.x", print_hash_value);
    transparent_crc(p_449->g_93.y, "p_449->g_93.y", print_hash_value);
    transparent_crc(p_449->g_93.z, "p_449->g_93.z", print_hash_value);
    transparent_crc(p_449->g_93.w, "p_449->g_93.w", print_hash_value);
    transparent_crc(p_449->g_98.x, "p_449->g_98.x", print_hash_value);
    transparent_crc(p_449->g_98.y, "p_449->g_98.y", print_hash_value);
    transparent_crc(p_449->g_105, "p_449->g_105", print_hash_value);
    transparent_crc(p_449->g_139, "p_449->g_139", print_hash_value);
    transparent_crc(p_449->g_141.x, "p_449->g_141.x", print_hash_value);
    transparent_crc(p_449->g_141.y, "p_449->g_141.y", print_hash_value);
    transparent_crc(p_449->g_141.z, "p_449->g_141.z", print_hash_value);
    transparent_crc(p_449->g_141.w, "p_449->g_141.w", print_hash_value);
    transparent_crc(p_449->g_142.s0, "p_449->g_142.s0", print_hash_value);
    transparent_crc(p_449->g_142.s1, "p_449->g_142.s1", print_hash_value);
    transparent_crc(p_449->g_142.s2, "p_449->g_142.s2", print_hash_value);
    transparent_crc(p_449->g_142.s3, "p_449->g_142.s3", print_hash_value);
    transparent_crc(p_449->g_142.s4, "p_449->g_142.s4", print_hash_value);
    transparent_crc(p_449->g_142.s5, "p_449->g_142.s5", print_hash_value);
    transparent_crc(p_449->g_142.s6, "p_449->g_142.s6", print_hash_value);
    transparent_crc(p_449->g_142.s7, "p_449->g_142.s7", print_hash_value);
    transparent_crc(p_449->g_142.s8, "p_449->g_142.s8", print_hash_value);
    transparent_crc(p_449->g_142.s9, "p_449->g_142.s9", print_hash_value);
    transparent_crc(p_449->g_142.sa, "p_449->g_142.sa", print_hash_value);
    transparent_crc(p_449->g_142.sb, "p_449->g_142.sb", print_hash_value);
    transparent_crc(p_449->g_142.sc, "p_449->g_142.sc", print_hash_value);
    transparent_crc(p_449->g_142.sd, "p_449->g_142.sd", print_hash_value);
    transparent_crc(p_449->g_142.se, "p_449->g_142.se", print_hash_value);
    transparent_crc(p_449->g_142.sf, "p_449->g_142.sf", print_hash_value);
    transparent_crc(p_449->g_143.s0, "p_449->g_143.s0", print_hash_value);
    transparent_crc(p_449->g_143.s1, "p_449->g_143.s1", print_hash_value);
    transparent_crc(p_449->g_143.s2, "p_449->g_143.s2", print_hash_value);
    transparent_crc(p_449->g_143.s3, "p_449->g_143.s3", print_hash_value);
    transparent_crc(p_449->g_143.s4, "p_449->g_143.s4", print_hash_value);
    transparent_crc(p_449->g_143.s5, "p_449->g_143.s5", print_hash_value);
    transparent_crc(p_449->g_143.s6, "p_449->g_143.s6", print_hash_value);
    transparent_crc(p_449->g_143.s7, "p_449->g_143.s7", print_hash_value);
    transparent_crc(p_449->g_143.s8, "p_449->g_143.s8", print_hash_value);
    transparent_crc(p_449->g_143.s9, "p_449->g_143.s9", print_hash_value);
    transparent_crc(p_449->g_143.sa, "p_449->g_143.sa", print_hash_value);
    transparent_crc(p_449->g_143.sb, "p_449->g_143.sb", print_hash_value);
    transparent_crc(p_449->g_143.sc, "p_449->g_143.sc", print_hash_value);
    transparent_crc(p_449->g_143.sd, "p_449->g_143.sd", print_hash_value);
    transparent_crc(p_449->g_143.se, "p_449->g_143.se", print_hash_value);
    transparent_crc(p_449->g_143.sf, "p_449->g_143.sf", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_449->g_146[i], "p_449->g_146[i]", print_hash_value);

    }
    transparent_crc(p_449->g_195, "p_449->g_195", print_hash_value);
    transparent_crc(p_449->g_203, "p_449->g_203", print_hash_value);
    transparent_crc(p_449->g_209, "p_449->g_209", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_449->g_216[i], "p_449->g_216[i]", print_hash_value);

    }
    transparent_crc(p_449->g_232, "p_449->g_232", print_hash_value);
    transparent_crc(p_449->g_402, "p_449->g_402", print_hash_value);
    transparent_crc(p_449->g_404, "p_449->g_404", print_hash_value);
    transparent_crc(p_449->g_405, "p_449->g_405", print_hash_value);
    transparent_crc(p_449->g_406, "p_449->g_406", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_449->g_408[i][j], "p_449->g_408[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_449->g_409[i], "p_449->g_409[i]", print_hash_value);

    }
    transparent_crc(p_449->g_422, "p_449->g_422", print_hash_value);
    transparent_crc(p_449->g_443, "p_449->g_443", print_hash_value);
    transparent_crc(p_449->g_447, "p_449->g_447", print_hash_value);
    transparent_crc(p_449->v_collective, "p_449->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 9; i++)
            transparent_crc(p_449->l_special_values[i], "p_449->l_special_values[i]", print_hash_value);
    transparent_crc(p_449->l_comm_values[get_linear_local_id()], "p_449->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_449->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()], "p_449->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
