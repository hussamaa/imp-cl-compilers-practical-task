// --atomics 38 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 3,37,53 -l 3,1,1
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

__constant uint32_t permutations[10][3] = {
{1,2,0}, // permutation 0
{1,0,2}, // permutation 1
{1,0,2}, // permutation 2
{1,0,2}, // permutation 3
{1,0,2}, // permutation 4
{2,0,1}, // permutation 5
{1,0,2}, // permutation 6
{1,2,0}, // permutation 7
{1,0,2}, // permutation 8
{1,2,0} // permutation 9
};

// Seed: 3038649040

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
   volatile uint16_t  f0;
   uint64_t  f1;
   int32_t  f2;
   int32_t  f3;
   volatile int32_t  f4;
   volatile int8_t  f5;
   volatile int32_t  f6;
   volatile int32_t  f7;
   int32_t  f8;
};

struct S2 {
   int32_t  f0;
   volatile int32_t  f1;
   struct S1  f2;
   uint32_t  f3;
   volatile uint8_t  f4;
};

union U3 {
   volatile struct S2  f0;
};

struct S4 {
    volatile int32_t g_2;
    VECTOR(int32_t, 4) g_3;
    volatile int32_t g_6;
    int32_t g_7;
    int32_t g_21;
    volatile uint16_t g_26;
    int16_t g_50;
    int16_t g_52;
    uint8_t g_55[2][3][6];
    uint32_t g_85[10][10][2];
    volatile uint32_t g_107;
    volatile uint32_t g_108;
    volatile uint32_t g_109;
    volatile uint32_t g_110;
    volatile uint32_t g_111;
    volatile uint32_t g_112;
    volatile uint32_t g_113;
    volatile uint32_t g_114;
    volatile uint32_t *g_106[3][1][9];
    uint16_t g_116;
    int32_t g_123;
    VECTOR(int32_t, 2) g_125;
    int64_t **g_130;
    int16_t g_146[9][3][8];
    uint32_t g_147;
    int64_t g_160;
    VECTOR(int64_t, 16) g_168;
    int64_t g_181;
    uint16_t g_204;
    int64_t g_227;
    int8_t g_231;
    int32_t g_234;
    int8_t g_240;
    uint64_t g_255;
    int8_t g_263;
    int32_t *g_270;
    int32_t **g_269;
    int8_t *g_277;
    int64_t *g_283;
    int32_t g_285;
    uint8_t g_295;
    volatile union U3 g_298;
    volatile struct S2 * volatile g_299[7][10][3];
    volatile struct S2 * volatile g_300;
    volatile struct S2 * volatile g_304;
    volatile struct S2 * volatile g_305;
    volatile struct S2 g_306;
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
uint32_t  func_1(struct S4 * p_307);
uint16_t  func_10(int32_t  p_11, int64_t  p_12, struct S4 * p_307);
uint32_t  func_37(uint8_t  p_38, int32_t  p_39, int64_t *** p_40, uint64_t  p_41, struct S4 * p_307);
int32_t * func_57(uint32_t  p_58, int16_t  p_59, int16_t * p_60, int64_t *** p_61, int64_t *** p_62, struct S4 * p_307);
uint64_t  func_63(int32_t  p_64, struct S4 * p_307);
int32_t  func_88(int64_t  p_89, uint32_t  p_90, uint32_t * p_91, uint64_t  p_92, int64_t ** p_93, struct S4 * p_307);
uint32_t * func_94(uint8_t * p_95, int64_t ** p_96, uint64_t  p_97, uint8_t * p_98, struct S4 * p_307);
uint8_t * func_99(int32_t  p_100, uint32_t  p_101, struct S4 * p_307);
int8_t  func_141(int8_t  p_142, struct S4 * p_307);
int32_t  func_152(uint64_t  p_153, int64_t  p_154, struct S4 * p_307);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_307->g_3 p_307->g_26 p_307->g_7 p_307->g_52 p_307->g_21 p_307->g_85 p_307->g_106 p_307->g_50 p_307->g_116 p_307->g_55 p_307->g_123 p_307->g_130 p_307->g_125 p_307->g_146 p_307->g_255 p_307->g_283 p_307->g_168 p_307->g_285 p_307->g_295 p_307->g_298 p_307->g_298.f0
 * writes: p_307->g_3 p_307->g_7 p_307->g_comm_values p_307->g_26 p_307->g_50 p_307->g_52 p_307->g_85 p_307->g_116 p_307->g_21 p_307->g_123 p_307->g_240 p_307->g_277 p_307->g_270 p_307->g_285 p_307->g_295 p_307->g_306
 */
uint32_t  func_1(struct S4 * p_307)
{ /* block id: 4 */
    VECTOR(uint8_t, 8) l_44 = (VECTOR(uint8_t, 8))(0xC9L, (VECTOR(uint8_t, 4))(0xC9L, (VECTOR(uint8_t, 2))(0xC9L, 0x90L), 0x90L), 0x90L, 0xC9L, 0x90L);
    int64_t *l_48 = (void*)0;
    int64_t **l_47 = &l_48;
    int16_t l_53 = 0x7F35L;
    int32_t l_56 = 1L;
    int32_t l_291[5];
    uint64_t l_292 = 18446744073709551612UL;
    volatile struct S2 *l_301 = &p_307->g_298.f0;
    volatile struct S2 *l_302 = &p_307->g_298.f0;
    volatile struct S2 *l_303 = &p_307->g_298.f0;
    int i;
    for (i = 0; i < 5; i++)
        l_291[i] = 0x2EF02EE0L;
    for (p_307->g_3.z = 0; (p_307->g_3.z == 4); ++p_307->g_3.z)
    { /* block id: 7 */
        uint64_t l_13 = 18446744073709551615UL;
        int32_t *l_286 = &p_307->g_21;
        int32_t *l_287 = &p_307->g_7;
        int32_t *l_288 = &p_307->g_21;
        int32_t *l_289 = &p_307->g_285;
        int32_t *l_290[5];
        int i;
        for (i = 0; i < 5; i++)
            l_290[i] = &p_307->g_7;
        for (p_307->g_7 = 0; (p_307->g_7 <= 29); p_307->g_7++)
        { /* block id: 10 */
            int64_t *l_14 = (void*)0;
            int64_t *l_15[1][9][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int32_t l_34[5][7][7] = {{{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L}},{{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L}},{{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L}},{{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L}},{{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L},{(-7L),0x4A2AE39BL,6L,0L,0x42BE3C69L,0x2CBD0316L,0x162DE1B4L}}};
            int16_t *l_49 = &p_307->g_50;
            int16_t *l_51 = &p_307->g_52;
            uint8_t *l_54[8] = {&p_307->g_55[1][2][2],&p_307->g_55[1][2][2],&p_307->g_55[1][2][2],&p_307->g_55[1][2][2],&p_307->g_55[1][2][2],&p_307->g_55[1][2][2],&p_307->g_55[1][2][2],&p_307->g_55[1][2][2]};
            int8_t *l_282 = &p_307->g_240;
            int32_t *l_284 = &p_307->g_285;
            int i, j, k;
            (*l_284) ^= (func_10(l_13, (p_307->g_comm_values[p_307->tid] = (1L ^ 0x7AB89BDD7770B168L)), p_307) >= (p_307->g_3.w >= (safe_sub_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((((l_34[2][1][2] , (((*l_282) = (safe_mod_func_uint32_t_u_u(func_37((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(l_44.s37)).odd, (((l_56 = (safe_div_func_int64_t_s_s(((void*)0 == l_47), ((((VECTOR(int16_t, 2))(1L, 0x3856L)).lo <= ((*l_51) &= ((*l_49) = p_307->g_7))) | l_53)))) <= l_44.s4) | p_307->g_21))), l_44.s1, &l_47, p_307->g_21, p_307), l_34[2][1][2]))) <= p_307->g_125.x)) , l_15[0][0][0]) == p_307->g_283), p_307->g_168.se)) , l_13), l_44.s1))));
        }
        --l_292;
        p_307->g_295++;
    }
    p_307->g_306 = (p_307->g_298 , p_307->g_298.f0);
    return l_44.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_307->g_26
 * writes: p_307->g_26
 */
uint16_t  func_10(int32_t  p_11, int64_t  p_12, struct S4 * p_307)
{ /* block id: 12 */
    int32_t l_23 = 0L;
    int32_t l_24 = 0L;
    VECTOR(int32_t, 4) l_25 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x395DFEA4L), 0x395DFEA4L);
    uint8_t l_29 = 0x56L;
    int i;
    for (p_11 = 0; (p_11 <= 27); p_11 = safe_add_func_int64_t_s_s(p_11, 1))
    { /* block id: 15 */
        int64_t ***l_18 = (void*)0;
        int64_t **l_19 = (void*)0;
        int32_t *l_20 = &p_307->g_21;
        int32_t *l_22[10][9] = {{(void*)0,&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,(void*)0,&p_307->g_7,&p_307->g_7},{(void*)0,&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,(void*)0,&p_307->g_7,&p_307->g_7},{(void*)0,&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,(void*)0,&p_307->g_7,&p_307->g_7},{(void*)0,&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,(void*)0,&p_307->g_7,&p_307->g_7},{(void*)0,&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,(void*)0,&p_307->g_7,&p_307->g_7},{(void*)0,&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,(void*)0,&p_307->g_7,&p_307->g_7},{(void*)0,&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,(void*)0,&p_307->g_7,&p_307->g_7},{(void*)0,&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,(void*)0,&p_307->g_7,&p_307->g_7},{(void*)0,&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,(void*)0,&p_307->g_7,&p_307->g_7},{(void*)0,&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,(void*)0,&p_307->g_7,&p_307->g_7}};
        int i, j;
        l_19 = (void*)0;
        p_307->g_26++;
    }
    return l_29;
}


/* ------------------------------------------ */
/* 
 * reads : p_307->g_85 p_307->g_52 p_307->g_7 p_307->g_3 p_307->g_106 p_307->g_50 p_307->g_116 p_307->g_55 p_307->g_21 p_307->g_123 p_307->g_130 p_307->g_125 p_307->g_147 p_307->g_168 p_307->g_160 p_307->g_146 p_307->g_231 p_307->g_234 p_307->g_240 p_307->g_204 p_307->g_255 p_307->l_comm_values p_307->g_263
 * writes: p_307->g_85 p_307->g_116 p_307->g_21 p_307->g_123 p_307->g_146 p_307->g_147 p_307->g_160 p_307->g_181 p_307->g_204 p_307->g_227 p_307->g_231 p_307->g_240 p_307->g_234 p_307->g_255 p_307->g_263 p_307->g_269 p_307->g_270 p_307->g_277
 */
uint32_t  func_37(uint8_t  p_38, int32_t  p_39, int64_t *** p_40, uint64_t  p_41, struct S4 * p_307)
{ /* block id: 23 */
    VECTOR(int8_t, 8) l_140 = (VECTOR(int8_t, 8))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, (-1L)), (-1L)), (-1L), 2L, (-1L));
    int16_t *l_145 = &p_307->g_146[6][0][6];
    VECTOR(int64_t, 8) l_150 = (VECTOR(int64_t, 8))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), 4L), 4L), 4L, (-5L), 4L);
    VECTOR(int64_t, 4) l_151 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 6L), 6L);
    int64_t *l_159 = &p_307->g_160;
    int64_t *l_236 = &p_307->g_227;
    uint8_t *l_238 = &p_307->g_55[0][0][5];
    uint8_t **l_237 = &l_238;
    int8_t *l_239 = &p_307->g_240;
    int64_t ***l_272 = &p_307->g_130;
    int32_t **l_281 = &p_307->g_270;
    int i;
    (*l_281) = func_57((func_63(p_38, p_307) | ((safe_lshift_func_int8_t_s_u(((*l_239) = ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 2))(l_140.s03)).yxxyyxyxxxxyyxxx, (int8_t)func_141(((*l_239) &= (safe_mul_func_uint16_t_u_u(p_307->g_50, ((p_307->g_147 = ((*l_145) = p_307->g_125.x)) && (safe_div_func_int16_t_s_s(0L, ((l_140.s1 && ((((((*l_236) = (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 2))(l_150.s21)).yxyyxyxyyyyyyyyx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 8))(l_151.wwzxyzyx)).hi, ((VECTOR(int64_t, 16))(((func_152(l_151.w, ((*l_159) = (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((p_307->g_125.x > ((l_145 != l_145) , 65529UL)), p_38)), 0x5EC5L))), p_307) && 0UL) | GROUP_DIVERGE(2, 1)), 0x09794D5BFBD02E40L, 0L, 0x59F503595D045B5DL, 0L, 0x0E86C6B0ADA18132L, 0x26B157E574C6D236L, ((VECTOR(int64_t, 2))(0x552E694BA9F67F97L)), (-10L), p_41, 4L, ((VECTOR(int64_t, 4))((-1L))))).s36db))).wywwxzyw)).odd)), 0L, 0x56DF752B4E3854A1L, (-1L), 0x68CA8C21EBF77952L)).s4343166324032457, ((VECTOR(int64_t, 16))(0x5D6AF2826348B1DDL))))))))).s97)).lo & l_140.s3)) >= 0x5C139FA897B0590FL) , (void*)0) == l_237) & FAKE_DIVERGE(p_307->group_1_offset, get_group_id(1), 10))) ^ p_39))))))), p_307), (int8_t)(-5L)))).sb), 7)) && l_140.s2)), l_151.z, &p_307->g_50, l_272, &p_307->g_130, p_307);
    return p_307->g_255;
}


/* ------------------------------------------ */
/* 
 * reads : p_307->g_146
 * writes: p_307->g_277 p_307->g_123
 */
int32_t * func_57(uint32_t  p_58, int16_t  p_59, int16_t * p_60, int64_t *** p_61, int64_t *** p_62, struct S4 * p_307)
{ /* block id: 140 */
    int8_t *l_276[6];
    int8_t **l_275[7];
    int32_t l_278 = (-1L);
    int32_t *l_279 = &p_307->g_123;
    int32_t *l_280[10][2][5] = {{{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7},{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7}},{{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7},{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7}},{{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7},{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7}},{{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7},{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7}},{{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7},{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7}},{{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7},{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7}},{{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7},{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7}},{{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7},{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7}},{{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7},{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7}},{{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7},{&l_278,&p_307->g_7,&p_307->g_7,&p_307->g_234,&p_307->g_7}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_276[i] = &p_307->g_231;
    for (i = 0; i < 7; i++)
        l_275[i] = &l_276[0];
    (*l_279) = (safe_div_func_int64_t_s_s((p_307->g_146[6][0][6] != ((p_307->g_277 = (void*)0) == &p_307->g_240)), l_278));
    return &p_307->g_123;
}


/* ------------------------------------------ */
/* 
 * reads : p_307->g_85 p_307->g_52 p_307->g_7 p_307->g_3 p_307->g_106 p_307->g_50 p_307->g_116 p_307->g_55 p_307->g_21 p_307->g_123 p_307->g_130 p_307->g_125
 * writes: p_307->g_85 p_307->g_116 p_307->g_21 p_307->g_123
 */
uint64_t  func_63(int32_t  p_64, struct S4 * p_307)
{ /* block id: 24 */
    int32_t l_82 = 1L;
    uint32_t *l_83 = (void*)0;
    uint32_t *l_84 = &p_307->g_85[5][1][1];
    uint16_t *l_115 = &p_307->g_116;
    uint8_t *l_129 = (void*)0;
    uint8_t **l_128 = &l_129;
    int64_t *l_133 = (void*)0;
    int64_t **l_132 = &l_133;
    int32_t *l_136 = &l_82;
    int32_t *l_137 = &p_307->g_123;
    if ((atomic_inc(&p_307->g_atomic_input[38 * get_linear_group_id() + 19]) == 2))
    { /* block id: 26 */
        int32_t l_65 = (-4L);
        int32_t l_76 = (-1L);
        uint8_t l_77[3];
        int i;
        for (i = 0; i < 3; i++)
            l_77[i] = 5UL;
        for (l_65 = (-5); (l_65 <= (-22)); l_65 = safe_sub_func_uint16_t_u_u(l_65, 8))
        { /* block id: 29 */
            VECTOR(int32_t, 8) l_68 = (VECTOR(int32_t, 8))(0x20E74272L, (VECTOR(int32_t, 4))(0x20E74272L, (VECTOR(int32_t, 2))(0x20E74272L, (-2L)), (-2L)), (-2L), 0x20E74272L, (-2L));
            VECTOR(int32_t, 2) l_69 = (VECTOR(int32_t, 2))(0x40F3C649L, (-3L));
            VECTOR(int32_t, 4) l_70 = (VECTOR(int32_t, 4))(0x6D442F44L, (VECTOR(int32_t, 2))(0x6D442F44L, (-1L)), (-1L));
            VECTOR(int32_t, 16) l_71 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
            uint64_t l_72 = 0x62F11252BC438EE5L;
            int32_t l_73 = 0x3EB9EEC2L;
            int32_t *l_74 = (void*)0;
            int32_t *l_75[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            l_75[1] = ((l_73 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_68.s4623554676073346)).s62)).xxyy)).w, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_69.yyyx)).wyxwwxxyxwzwxyxy)).se6, ((VECTOR(int32_t, 2))(0x3948B2FDL, 0x3997E345L)), ((VECTOR(int32_t, 2))(0x59BB015CL, 0x0A6AAB06L))))), 1L)))), ((VECTOR(int32_t, 8))(l_70.xwzwyzyz)).odd))), ((VECTOR(int32_t, 16))(l_71.secef6a3d77ae26bd)).s8041))), (l_72 = 4L), ((VECTOR(int32_t, 2))(0x22A4178BL, 0L)), 0x5510FED7L)).s2) , (l_74 = (void*)0));
        }
        l_77[2] ^= l_76;
        unsigned int result = 0;
        result += l_65;
        result += l_76;
        int l_77_i0;
        for (l_77_i0 = 0; l_77_i0 < 3; l_77_i0++) {
            result += l_77[l_77_i0];
        }
        atomic_add(&p_307->g_special_values[38 * get_linear_group_id() + 19], result);
    }
    else
    { /* block id: 36 */
        (1 + 1);
    }
    (*l_137) = ((*l_136) = (safe_mul_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s(l_82, GROUP_DIVERGE(0, 1))) == ((*l_84)--)) && p_307->g_52) > func_88(p_307->g_7, (p_64 <= p_307->g_3.x), (l_83 = func_94(((*l_128) = func_99((((safe_div_func_uint16_t_u_u(((*l_115) &= (safe_rshift_func_uint8_t_u_u((~p_64), (p_307->g_106[0][0][6] == ((l_82 , p_307->g_50) , l_84))))), l_82)) > FAKE_DIVERGE(p_307->local_2_offset, get_local_id(2), 10)) , p_307->g_55[1][2][2]), l_82, p_307)), p_307->g_130, p_64, &p_307->g_55[0][0][4], p_307)), p_307->g_55[1][2][2], l_132, p_307)), p_307->g_125.x)));
    return p_307->g_85[9][1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_307->g_123
 * writes:
 */
int32_t  func_88(int64_t  p_89, uint32_t  p_90, uint32_t * p_91, uint64_t  p_92, int64_t ** p_93, struct S4 * p_307)
{ /* block id: 58 */
    if ((atomic_inc(&p_307->l_atomic_input[31]) == 8))
    { /* block id: 60 */
        int32_t l_134[2];
        uint16_t l_135[8] = {65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL};
        int i;
        for (i = 0; i < 2; i++)
            l_134[i] = 0x37AFBAD6L;
        l_135[2] |= l_134[1];
        unsigned int result = 0;
        int l_134_i0;
        for (l_134_i0 = 0; l_134_i0 < 2; l_134_i0++) {
            result += l_134[l_134_i0];
        }
        int l_135_i0;
        for (l_135_i0 = 0; l_135_i0 < 8; l_135_i0++) {
            result += l_135[l_135_i0];
        }
        atomic_add(&p_307->l_special_values[31], result);
    }
    else
    { /* block id: 62 */
        (1 + 1);
    }
    return p_307->g_123;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t * func_94(uint8_t * p_95, int64_t ** p_96, uint64_t  p_97, uint8_t * p_98, struct S4 * p_307)
{ /* block id: 55 */
    uint32_t *l_131 = (void*)0;
    return l_131;
}


/* ------------------------------------------ */
/* 
 * reads : p_307->g_21 p_307->g_7 p_307->g_123
 * writes: p_307->g_21 p_307->g_123
 */
uint8_t * func_99(int32_t  p_100, uint32_t  p_101, struct S4 * p_307)
{ /* block id: 41 */
    uint8_t *l_121 = (void*)0;
    int32_t l_126 = 0x4EC94717L;
    uint8_t *l_127 = &p_307->g_55[0][2][5];
    for (p_307->g_21 = 0; (p_307->g_21 < 17); p_307->g_21 = safe_add_func_int32_t_s_s(p_307->g_21, 1))
    { /* block id: 44 */
        int32_t *l_122 = &p_307->g_123;
        int32_t *l_124[4][8][6] = {{{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21}},{{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21}},{{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21}},{{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21},{&p_307->g_7,&p_307->g_21,&p_307->g_21,(void*)0,&p_307->g_21,&p_307->g_21}}};
        int i, j, k;
        for (p_100 = (-14); (p_100 >= 21); ++p_100)
        { /* block id: 47 */
            return l_121;
        }
        l_126 = ((*l_122) |= p_307->g_7);
    }
    return l_127;
}


/* ------------------------------------------ */
/* 
 * reads : p_307->g_231 p_307->g_130 p_307->g_204 p_307->g_234 p_307->g_255 p_307->l_comm_values p_307->g_263
 * writes: p_307->g_231 p_307->g_234 p_307->g_204 p_307->g_255 p_307->g_263 p_307->g_269 p_307->g_146 p_307->g_270
 */
int8_t  func_141(int8_t  p_142, struct S4 * p_307)
{ /* block id: 115 */
    int32_t *l_242 = (void*)0;
    int32_t **l_241 = &l_242;
    VECTOR(int32_t, 2) l_243 = (VECTOR(int32_t, 2))(9L, (-1L));
    uint8_t *l_251[10] = {&p_307->g_55[1][2][2],&p_307->g_55[0][1][1],&p_307->g_55[1][2][2],&p_307->g_55[1][2][2],&p_307->g_55[0][1][1],&p_307->g_55[1][2][2],&p_307->g_55[1][2][2],&p_307->g_55[0][1][1],&p_307->g_55[1][2][2],&p_307->g_55[1][2][2]};
    int64_t *l_253 = &p_307->g_227;
    int64_t **l_252 = &l_253;
    uint64_t *l_254 = &p_307->g_255;
    VECTOR(int8_t, 4) l_262 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L);
    int32_t **l_267 = &l_242;
    int32_t ***l_268[9] = {&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267,&l_267};
    int16_t *l_271 = &p_307->g_146[0][1][3];
    int i;
    (*l_241) = &p_307->g_234;
    if (((VECTOR(int32_t, 16))(l_243.yyyyyxyxxxyyyxyy)).sf)
    { /* block id: 117 */
        int32_t l_248 = 0x1A5F5D61L;
        for (p_307->g_231 = 0; (p_307->g_231 <= (-10)); p_307->g_231 = safe_sub_func_int64_t_s_s(p_307->g_231, 8))
        { /* block id: 120 */
            int32_t *l_246 = (void*)0;
            int32_t *l_247 = (void*)0;
            l_243.x &= ((*l_242) = (((void*)0 == p_307->g_130) || 8UL));
            if (l_248)
                continue;
        }
        for (p_307->g_204 = (-10); (p_307->g_204 <= 52); ++p_307->g_204)
        { /* block id: 127 */
            (**l_241) = 0x2CBDC25AL;
        }
    }
    else
    { /* block id: 130 */
        return p_307->g_234;
    }
    p_307->g_270 = func_94(l_251[3], l_252, (((*l_254) ^= (*l_242)) & (safe_div_func_uint16_t_u_u(((p_307->l_comm_values[(safe_mod_func_uint32_t_u_u(p_307->tid, 3))] && (safe_rshift_func_int16_t_s_u(((*l_271) = ((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_262.wzzx)).w, (p_307->g_263 &= (**l_241)))) | (safe_unary_minus_func_int32_t_s((safe_div_func_uint64_t_u_u(((p_142 , (p_307->g_269 = l_267)) == &p_307->g_270), (-9L))))))), (**l_267)))) & p_142), (**l_241)))), &p_307->g_55[1][2][2], p_307);
    return p_142;
}


/* ------------------------------------------ */
/* 
 * reads : p_307->g_147 p_307->g_168 p_307->g_55 p_307->g_3 p_307->g_160 p_307->g_125 p_307->g_130 p_307->g_146 p_307->g_231 p_307->g_234
 * writes: p_307->g_147 p_307->g_146 p_307->g_181 p_307->g_204 p_307->g_227 p_307->g_231
 */
int32_t  func_152(uint64_t  p_153, int64_t  p_154, struct S4 * p_307)
{ /* block id: 72 */
    uint32_t l_163 = 0xE0AD08EFL;
    int32_t l_165 = 0x5A9EB16AL;
    uint64_t l_166 = 0UL;
    VECTOR(int64_t, 8) l_167 = (VECTOR(int64_t, 8))((-6L), (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), 0x4098CBD84F3E2910L), 0x4098CBD84F3E2910L), 0x4098CBD84F3E2910L, (-6L), 0x4098CBD84F3E2910L);
    VECTOR(int64_t, 16) l_169 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x1876BB3E926D7F8DL), 0x1876BB3E926D7F8DL), 0x1876BB3E926D7F8DL, 1L, 0x1876BB3E926D7F8DL, (VECTOR(int64_t, 2))(1L, 0x1876BB3E926D7F8DL), (VECTOR(int64_t, 2))(1L, 0x1876BB3E926D7F8DL), 1L, 0x1876BB3E926D7F8DL, 1L, 0x1876BB3E926D7F8DL);
    int16_t *l_175 = (void*)0;
    int64_t *l_222 = &p_307->g_181;
    int64_t **l_233 = &l_222;
    int64_t ***l_232 = &l_233;
    int32_t *l_235 = &p_307->g_234;
    int i;
    for (p_307->g_147 = (-16); (p_307->g_147 >= 45); p_307->g_147 = safe_add_func_uint8_t_u_u(p_307->g_147, 1))
    { /* block id: 75 */
        int16_t *l_164[2][2];
        VECTOR(int64_t, 8) l_170 = (VECTOR(int64_t, 8))(0x4C18AC3F26200834L, (VECTOR(int64_t, 4))(0x4C18AC3F26200834L, (VECTOR(int64_t, 2))(0x4C18AC3F26200834L, 2L), 2L), 2L, 0x4C18AC3F26200834L, 2L);
        int16_t **l_176 = &l_164[0][0];
        int16_t *l_178 = &p_307->g_146[2][0][2];
        int16_t **l_177 = &l_178;
        uint64_t *l_182 = &l_166;
        uint8_t *l_217 = (void*)0;
        uint16_t *l_225 = &p_307->g_204;
        uint16_t *l_226 = (void*)0;
        int32_t *l_229 = &l_165;
        int32_t **l_228 = &l_229;
        int32_t *l_230[10];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_164[i][j] = &p_307->g_146[6][0][6];
        }
        for (i = 0; i < 10; i++)
            l_230[i] = (void*)0;
        if ((p_307->g_147 <= ((*l_182) = ((((l_165 = l_163) > ((l_166 , ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 4))(l_167.s1366)).zywxxwzz, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_307->g_168.sfe77)).wxzyyzxxxxzyyzzy)).hi))).even, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(p_307->g_168.s4, ((VECTOR(int64_t, 2))(l_169.saa)), 0L)))), ((VECTOR(int64_t, 4))(l_170.s4767))))).even)).xxxy))))), ((0x61L & ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))((safe_lshift_func_int16_t_s_s((p_307->g_181 = ((safe_div_func_uint64_t_u_u(((p_307->g_146[0][2][6] = (((*l_176) = l_175) == ((*l_177) = l_175))) < p_307->g_55[1][2][2]), (safe_div_func_int16_t_s_s(p_153, l_170.s7)))) , 0x6AC3L)), p_307->g_3.w)), 0xCFL, ((VECTOR(uint8_t, 4))(0xC9L)), ((VECTOR(uint8_t, 8))(0xC9L)), 0xD1L, 0UL)).even)).s3) && (-2L)), ((VECTOR(int64_t, 2))(0L)), 0x38FA55F229590706L)))).s2) == 1L)) == 0x5E11C7F7L) | p_153))))
        { /* block id: 82 */
            uint8_t *l_183[1];
            int32_t l_184 = 0x22626586L;
            int32_t *l_196 = &l_165;
            int32_t **l_195 = &l_196;
            uint16_t *l_203 = &p_307->g_204;
            uint64_t *l_205 = &l_166;
            int32_t *l_206 = (void*)0;
            int32_t *l_207 = &l_165;
            int i;
            for (i = 0; i < 1; i++)
                l_183[i] = (void*)0;
            (*l_207) = ((FAKE_DIVERGE(p_307->group_2_offset, get_group_id(2), 10) && ((((l_184 = p_153) , 0x762014B1BB3E451EL) <= (l_182 == ((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((((*l_203) = ((safe_lshift_func_int16_t_s_s((-8L), (p_154 , (safe_sub_func_uint64_t_u_u(((((((*l_195) = &p_307->g_7) == (void*)0) ^ GROUP_DIVERGE(1, 1)) == ((safe_mul_func_int16_t_s_s(p_307->g_160, ((safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(0x29BAL, p_153)) , p_153), (-6L))) ^ 0x4521L))) && GROUP_DIVERGE(0, 1))) || l_169.s0), p_154))))) == 8L)) , p_154) | p_154), l_170.s7)), p_307->g_168.s2)) & 0xE311L), p_154)) , l_205))) | p_307->g_55[1][2][2])) > p_307->g_125.y);
        }
        else
        { /* block id: 87 */
            for (l_163 = 0; (l_163 >= 17); l_163 = safe_add_func_uint16_t_u_u(l_163, 5))
            { /* block id: 90 */
                if (p_307->g_3.z)
                    break;
                if ((atomic_inc(&p_307->g_atomic_input[38 * get_linear_group_id() + 22]) == 0))
                { /* block id: 93 */
                    int32_t l_210 = (-1L);
                    VECTOR(int32_t, 4) l_211 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x30BCA765L), 0x30BCA765L);
                    int32_t l_212 = (-1L);
                    uint32_t l_213 = 0UL;
                    uint8_t l_214 = 0x26L;
                    uint16_t l_215 = 0x2EE9L;
                    int8_t l_216 = 3L;
                    int i;
                    l_210 = 7L;
                    l_213 = (l_212 = ((VECTOR(int32_t, 8))(l_211.zzzywxzy)).s2);
                    l_214 = 1L;
                    l_216 |= l_215;
                    unsigned int result = 0;
                    result += l_210;
                    result += l_211.w;
                    result += l_211.z;
                    result += l_211.y;
                    result += l_211.x;
                    result += l_212;
                    result += l_213;
                    result += l_214;
                    result += l_215;
                    result += l_216;
                    atomic_add(&p_307->g_special_values[38 * get_linear_group_id() + 22], result);
                }
                else
                { /* block id: 99 */
                    (1 + 1);
                }
            }
            return l_170.s3;
        }
        p_307->g_231 ^= (&p_307->g_7 != ((*l_228) = func_94(l_217, p_307->g_130, (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((p_307->g_227 = ((l_222 != l_222) | (safe_mul_func_uint8_t_u_u((((*l_225) = p_153) ^ 2UL), (0x6FED9153L < ((p_307->g_55[1][2][2] <= p_307->g_146[6][0][6]) , l_166)))))), 65529UL)), p_307->g_125.x)), l_217, p_307)));
    }
    l_235 = func_94(&p_307->g_55[1][2][5], ((*l_232) = p_307->g_130), (p_307->g_234 , FAKE_DIVERGE(p_307->local_2_offset, get_local_id(2), 10)), &p_307->g_55[1][0][2], p_307);
    return p_153;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[38];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 38; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[38];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 38; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_comm_values[i] = 1;
    struct S4 c_308;
    struct S4* p_307 = &c_308;
    struct S4 c_309 = {
        (-1L), // p_307->g_2
        (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x776EC751L), 0x776EC751L), // p_307->g_3
        0x0A7084BCL, // p_307->g_6
        0x5069F498L, // p_307->g_7
        (-10L), // p_307->g_21
        0xF49CL, // p_307->g_26
        0x0311L, // p_307->g_50
        0x590BL, // p_307->g_52
        {{{0x32L,0x32L,253UL,1UL,0xABL,1UL},{0x32L,0x32L,253UL,1UL,0xABL,1UL},{0x32L,0x32L,253UL,1UL,0xABL,1UL}},{{0x32L,0x32L,253UL,1UL,0xABL,1UL},{0x32L,0x32L,253UL,1UL,0xABL,1UL},{0x32L,0x32L,253UL,1UL,0xABL,1UL}}}, // p_307->g_55
        {{{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL}},{{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL}},{{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL}},{{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL}},{{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL}},{{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL}},{{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL}},{{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL}},{{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL}},{{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL},{0x5434A3FDL,0x5434A3FDL}}}, // p_307->g_85
        0x78DD8142L, // p_307->g_107
        4294967295UL, // p_307->g_108
        0xBA46063AL, // p_307->g_109
        4294967295UL, // p_307->g_110
        0x77B01F99L, // p_307->g_111
        0UL, // p_307->g_112
        4294967295UL, // p_307->g_113
        4294967293UL, // p_307->g_114
        {{{&p_307->g_111,&p_307->g_107,&p_307->g_107,&p_307->g_111,&p_307->g_111,&p_307->g_107,&p_307->g_107,&p_307->g_111,&p_307->g_111}},{{&p_307->g_111,&p_307->g_107,&p_307->g_107,&p_307->g_111,&p_307->g_111,&p_307->g_107,&p_307->g_107,&p_307->g_111,&p_307->g_111}},{{&p_307->g_111,&p_307->g_107,&p_307->g_107,&p_307->g_111,&p_307->g_111,&p_307->g_107,&p_307->g_107,&p_307->g_111,&p_307->g_111}}}, // p_307->g_106
        0xDBC4L, // p_307->g_116
        0x13730F59L, // p_307->g_123
        (VECTOR(int32_t, 2))(0L, (-1L)), // p_307->g_125
        (void*)0, // p_307->g_130
        {{{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L}},{{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L}},{{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L}},{{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L}},{{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L}},{{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L}},{{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L}},{{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L}},{{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L},{0L,0x4888L,0x66B0L,0x2813L,(-7L),0x1233L,3L,1L}}}, // p_307->g_146
        0UL, // p_307->g_147
        1L, // p_307->g_160
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-8L)), (-8L)), (-8L), 1L, (-8L), (VECTOR(int64_t, 2))(1L, (-8L)), (VECTOR(int64_t, 2))(1L, (-8L)), 1L, (-8L), 1L, (-8L)), // p_307->g_168
        (-8L), // p_307->g_181
        0x6D55L, // p_307->g_204
        4L, // p_307->g_227
        0x69L, // p_307->g_231
        0x021AC233L, // p_307->g_234
        0x33L, // p_307->g_240
        0xE2CCA2613CCD52C4L, // p_307->g_255
        0x6FL, // p_307->g_263
        &p_307->g_7, // p_307->g_270
        &p_307->g_270, // p_307->g_269
        &p_307->g_263, // p_307->g_277
        (void*)0, // p_307->g_283
        1L, // p_307->g_285
        255UL, // p_307->g_295
        {{-5L,0x63F350D2L,{65526UL,0UL,1L,0x18D93EB9L,2L,7L,0x593E933AL,-3L,0x32431B78L},4294967289UL,0x8BL}}, // p_307->g_298
        {{{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0}},{{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0}},{{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0}},{{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0}},{{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0}},{{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0}},{{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0},{(void*)0,&p_307->g_298.f0,&p_307->g_298.f0}}}, // p_307->g_299
        (void*)0, // p_307->g_300
        &p_307->g_298.f0, // p_307->g_304
        &p_307->g_298.f0, // p_307->g_305
        {0x24B2532CL,0x498F07CFL,{0x1AE7L,18446744073709551606UL,1L,0x4C935555L,1L,0x20L,-1L,1L,0x53B0A820L},5UL,0x74L}, // p_307->g_306
        0, // p_307->v_collective
        sequence_input[get_global_id(0)], // p_307->global_0_offset
        sequence_input[get_global_id(1)], // p_307->global_1_offset
        sequence_input[get_global_id(2)], // p_307->global_2_offset
        sequence_input[get_local_id(0)], // p_307->local_0_offset
        sequence_input[get_local_id(1)], // p_307->local_1_offset
        sequence_input[get_local_id(2)], // p_307->local_2_offset
        sequence_input[get_group_id(0)], // p_307->group_0_offset
        sequence_input[get_group_id(1)], // p_307->group_1_offset
        sequence_input[get_group_id(2)], // p_307->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[0][get_linear_local_id()])), // p_307->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_308 = c_309;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_307);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_307->g_2, "p_307->g_2", print_hash_value);
    transparent_crc(p_307->g_3.x, "p_307->g_3.x", print_hash_value);
    transparent_crc(p_307->g_3.y, "p_307->g_3.y", print_hash_value);
    transparent_crc(p_307->g_3.z, "p_307->g_3.z", print_hash_value);
    transparent_crc(p_307->g_3.w, "p_307->g_3.w", print_hash_value);
    transparent_crc(p_307->g_6, "p_307->g_6", print_hash_value);
    transparent_crc(p_307->g_7, "p_307->g_7", print_hash_value);
    transparent_crc(p_307->g_21, "p_307->g_21", print_hash_value);
    transparent_crc(p_307->g_26, "p_307->g_26", print_hash_value);
    transparent_crc(p_307->g_50, "p_307->g_50", print_hash_value);
    transparent_crc(p_307->g_52, "p_307->g_52", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_307->g_55[i][j][k], "p_307->g_55[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_307->g_85[i][j][k], "p_307->g_85[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_307->g_107, "p_307->g_107", print_hash_value);
    transparent_crc(p_307->g_108, "p_307->g_108", print_hash_value);
    transparent_crc(p_307->g_109, "p_307->g_109", print_hash_value);
    transparent_crc(p_307->g_110, "p_307->g_110", print_hash_value);
    transparent_crc(p_307->g_111, "p_307->g_111", print_hash_value);
    transparent_crc(p_307->g_112, "p_307->g_112", print_hash_value);
    transparent_crc(p_307->g_113, "p_307->g_113", print_hash_value);
    transparent_crc(p_307->g_114, "p_307->g_114", print_hash_value);
    transparent_crc(p_307->g_116, "p_307->g_116", print_hash_value);
    transparent_crc(p_307->g_123, "p_307->g_123", print_hash_value);
    transparent_crc(p_307->g_125.x, "p_307->g_125.x", print_hash_value);
    transparent_crc(p_307->g_125.y, "p_307->g_125.y", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_307->g_146[i][j][k], "p_307->g_146[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_307->g_147, "p_307->g_147", print_hash_value);
    transparent_crc(p_307->g_160, "p_307->g_160", print_hash_value);
    transparent_crc(p_307->g_168.s0, "p_307->g_168.s0", print_hash_value);
    transparent_crc(p_307->g_168.s1, "p_307->g_168.s1", print_hash_value);
    transparent_crc(p_307->g_168.s2, "p_307->g_168.s2", print_hash_value);
    transparent_crc(p_307->g_168.s3, "p_307->g_168.s3", print_hash_value);
    transparent_crc(p_307->g_168.s4, "p_307->g_168.s4", print_hash_value);
    transparent_crc(p_307->g_168.s5, "p_307->g_168.s5", print_hash_value);
    transparent_crc(p_307->g_168.s6, "p_307->g_168.s6", print_hash_value);
    transparent_crc(p_307->g_168.s7, "p_307->g_168.s7", print_hash_value);
    transparent_crc(p_307->g_168.s8, "p_307->g_168.s8", print_hash_value);
    transparent_crc(p_307->g_168.s9, "p_307->g_168.s9", print_hash_value);
    transparent_crc(p_307->g_168.sa, "p_307->g_168.sa", print_hash_value);
    transparent_crc(p_307->g_168.sb, "p_307->g_168.sb", print_hash_value);
    transparent_crc(p_307->g_168.sc, "p_307->g_168.sc", print_hash_value);
    transparent_crc(p_307->g_168.sd, "p_307->g_168.sd", print_hash_value);
    transparent_crc(p_307->g_168.se, "p_307->g_168.se", print_hash_value);
    transparent_crc(p_307->g_168.sf, "p_307->g_168.sf", print_hash_value);
    transparent_crc(p_307->g_181, "p_307->g_181", print_hash_value);
    transparent_crc(p_307->g_204, "p_307->g_204", print_hash_value);
    transparent_crc(p_307->g_227, "p_307->g_227", print_hash_value);
    transparent_crc(p_307->g_231, "p_307->g_231", print_hash_value);
    transparent_crc(p_307->g_234, "p_307->g_234", print_hash_value);
    transparent_crc(p_307->g_240, "p_307->g_240", print_hash_value);
    transparent_crc(p_307->g_255, "p_307->g_255", print_hash_value);
    transparent_crc(p_307->g_263, "p_307->g_263", print_hash_value);
    transparent_crc(p_307->g_285, "p_307->g_285", print_hash_value);
    transparent_crc(p_307->g_295, "p_307->g_295", print_hash_value);
    transparent_crc(p_307->g_298.f0.f0, "p_307->g_298.f0.f0", print_hash_value);
    transparent_crc(p_307->g_298.f0.f1, "p_307->g_298.f0.f1", print_hash_value);
    transparent_crc(p_307->g_298.f0.f2.f0, "p_307->g_298.f0.f2.f0", print_hash_value);
    transparent_crc(p_307->g_298.f0.f2.f1, "p_307->g_298.f0.f2.f1", print_hash_value);
    transparent_crc(p_307->g_298.f0.f2.f2, "p_307->g_298.f0.f2.f2", print_hash_value);
    transparent_crc(p_307->g_298.f0.f2.f3, "p_307->g_298.f0.f2.f3", print_hash_value);
    transparent_crc(p_307->g_298.f0.f2.f4, "p_307->g_298.f0.f2.f4", print_hash_value);
    transparent_crc(p_307->g_298.f0.f2.f5, "p_307->g_298.f0.f2.f5", print_hash_value);
    transparent_crc(p_307->g_298.f0.f2.f6, "p_307->g_298.f0.f2.f6", print_hash_value);
    transparent_crc(p_307->g_298.f0.f2.f7, "p_307->g_298.f0.f2.f7", print_hash_value);
    transparent_crc(p_307->g_298.f0.f2.f8, "p_307->g_298.f0.f2.f8", print_hash_value);
    transparent_crc(p_307->g_298.f0.f3, "p_307->g_298.f0.f3", print_hash_value);
    transparent_crc(p_307->g_298.f0.f4, "p_307->g_298.f0.f4", print_hash_value);
    transparent_crc(p_307->g_306.f0, "p_307->g_306.f0", print_hash_value);
    transparent_crc(p_307->g_306.f1, "p_307->g_306.f1", print_hash_value);
    transparent_crc(p_307->g_306.f2.f0, "p_307->g_306.f2.f0", print_hash_value);
    transparent_crc(p_307->g_306.f2.f1, "p_307->g_306.f2.f1", print_hash_value);
    transparent_crc(p_307->g_306.f2.f2, "p_307->g_306.f2.f2", print_hash_value);
    transparent_crc(p_307->g_306.f2.f3, "p_307->g_306.f2.f3", print_hash_value);
    transparent_crc(p_307->g_306.f2.f4, "p_307->g_306.f2.f4", print_hash_value);
    transparent_crc(p_307->g_306.f2.f5, "p_307->g_306.f2.f5", print_hash_value);
    transparent_crc(p_307->g_306.f2.f6, "p_307->g_306.f2.f6", print_hash_value);
    transparent_crc(p_307->g_306.f2.f7, "p_307->g_306.f2.f7", print_hash_value);
    transparent_crc(p_307->g_306.f2.f8, "p_307->g_306.f2.f8", print_hash_value);
    transparent_crc(p_307->g_306.f3, "p_307->g_306.f3", print_hash_value);
    transparent_crc(p_307->g_306.f4, "p_307->g_306.f4", print_hash_value);
    transparent_crc(p_307->v_collective, "p_307->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 38; i++)
            transparent_crc(p_307->g_special_values[i + 38 * get_linear_group_id()], "p_307->g_special_values[i + 38 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 38; i++)
            transparent_crc(p_307->l_special_values[i], "p_307->l_special_values[i]", print_hash_value);
    transparent_crc(p_307->l_comm_values[get_linear_local_id()], "p_307->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_307->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()], "p_307->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
