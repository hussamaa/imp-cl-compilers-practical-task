// --atomics 39 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 75,57,1 -l 75,1,1
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

__constant uint32_t permutations[10][75] = {
{22,0,44,73,8,18,16,46,67,41,65,26,58,14,74,19,3,39,7,70,52,37,5,15,38,64,60,17,28,61,33,27,62,51,69,48,2,12,47,21,71,23,20,24,34,49,29,55,10,53,31,32,56,6,57,35,66,30,36,13,42,54,40,1,25,4,43,45,68,50,72,59,9,11,63}, // permutation 0
{18,36,11,67,4,59,40,2,17,47,39,33,54,41,15,21,74,49,3,66,24,71,44,52,38,42,8,51,65,32,30,10,60,56,9,62,13,48,12,26,0,46,31,34,55,58,64,29,50,57,1,61,25,20,69,68,22,28,45,37,16,7,53,27,35,14,43,23,70,19,73,63,5,72,6}, // permutation 1
{15,27,1,6,42,3,12,9,31,45,41,10,37,46,54,35,16,57,11,67,71,62,39,72,5,18,30,13,20,69,19,53,68,32,22,48,7,52,24,36,33,50,73,64,4,47,65,74,55,66,26,25,58,8,21,59,56,49,14,34,51,60,40,17,61,23,43,28,38,0,63,70,44,29,2}, // permutation 2
{3,4,18,45,72,24,57,31,5,26,69,41,51,15,6,50,63,34,21,62,29,56,66,8,44,42,13,33,14,27,11,9,0,1,52,38,59,12,20,2,19,65,60,37,46,68,71,48,10,28,64,49,73,30,43,40,61,54,16,7,47,17,58,25,67,36,32,70,55,35,39,22,23,53,74}, // permutation 3
{30,19,14,51,34,70,48,1,44,56,69,26,66,29,25,36,13,54,11,40,42,5,0,21,49,55,58,68,4,31,53,35,8,52,37,24,47,45,17,72,18,61,39,67,73,23,62,28,9,57,12,2,27,33,7,32,65,46,6,50,15,3,38,43,41,10,64,22,20,59,60,71,16,63,74}, // permutation 4
{1,5,54,53,73,57,15,10,62,3,13,9,45,65,19,74,47,0,14,64,18,7,21,2,67,52,32,35,6,66,42,59,22,26,72,38,51,30,12,58,34,24,4,37,23,56,29,43,28,8,11,20,25,50,69,33,41,63,44,70,55,39,60,49,17,27,48,71,61,31,40,16,36,68,46}, // permutation 5
{9,33,42,35,45,68,4,14,11,63,22,70,3,12,29,65,30,1,62,26,20,25,13,50,36,61,40,66,71,60,59,31,58,47,46,51,52,57,44,28,53,27,17,39,24,32,18,64,15,0,48,8,19,23,73,37,69,10,67,16,6,38,74,34,54,72,55,43,49,56,41,21,2,5,7}, // permutation 6
{54,8,69,29,49,53,26,24,58,16,7,0,4,37,20,40,12,5,3,62,60,47,57,18,73,35,13,55,50,28,66,68,19,45,34,31,38,27,23,9,52,56,42,74,1,43,6,21,65,61,72,46,11,25,44,15,48,59,36,10,63,32,17,51,14,39,64,70,22,71,67,2,30,41,33}, // permutation 7
{36,74,4,56,48,8,51,13,30,59,15,5,25,7,53,52,37,10,58,28,11,16,68,46,43,1,60,65,50,55,35,69,3,21,27,73,14,66,61,71,38,29,72,40,6,19,42,70,63,33,67,39,22,31,0,12,54,49,32,9,17,23,20,24,18,26,47,34,2,45,44,41,62,57,64}, // permutation 8
{5,29,9,64,27,22,1,17,11,37,26,24,50,63,72,8,56,51,34,45,18,47,10,69,52,32,55,7,42,15,13,73,14,44,0,4,21,33,41,59,60,66,58,31,2,68,19,39,53,67,36,48,23,65,28,38,16,70,30,71,3,6,54,46,61,49,74,57,62,43,35,25,12,20,40} // permutation 9
};

// Seed: 2964151632

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   uint32_t  f1;
   uint8_t  f2;
};

union U1 {
   volatile uint8_t  f0;
   volatile int64_t  f1;
   volatile uint16_t  f2;
   int16_t  f3;
};

union U2 {
   uint16_t  f0;
   uint64_t  f1;
   volatile int32_t  f2;
   int64_t  f3;
};

struct S3 {
    uint64_t g_4[6];
    uint8_t g_15;
    int16_t g_17;
    uint8_t g_26;
    uint8_t *g_25;
    int8_t g_30;
    int32_t g_32;
    volatile uint32_t g_38;
    struct S0 g_45;
    struct S0 * volatile g_44;
    int16_t g_61[5][9];
    VECTOR(uint16_t, 2) g_67;
    struct S0 g_82;
    struct S0 *g_81;
    int32_t ** volatile g_84;
    volatile int16_t *g_86;
    volatile int16_t ** volatile g_85;
    VECTOR(int32_t, 16) g_92;
    uint32_t *g_97;
    int32_t *g_109;
    int32_t ** volatile g_108;
    struct S0 *g_112;
    uint16_t g_117;
    int32_t *g_149;
    int32_t ** volatile g_148;
    VECTOR(int64_t, 16) g_159;
    uint64_t g_173;
    int16_t *g_214;
    int16_t **g_213;
    volatile VECTOR(int32_t, 8) g_220;
    uint32_t *g_230;
    volatile union U2 g_238;
    VECTOR(int8_t, 16) g_257;
    volatile VECTOR(int16_t, 16) g_273;
    VECTOR(int16_t, 8) g_274;
    int16_t *** volatile g_282;
    union U2 g_286;
    VECTOR(int32_t, 4) g_291;
    VECTOR(int32_t, 4) g_292;
    int32_t * volatile g_297;
    int32_t * volatile g_298[2][10][8];
    int32_t * volatile g_300;
    int32_t * volatile g_301[1];
    int32_t * volatile g_303;
    int32_t * volatile g_306[8];
    int32_t * volatile g_307;
    int32_t * volatile g_308;
    int32_t * volatile g_309[7];
    VECTOR(int64_t, 2) g_327;
    union U2 g_347;
    int32_t * volatile g_357;
    int32_t * volatile g_358;
    int32_t * volatile g_361;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S3 * p_364);
uint32_t  func_5(int64_t  p_6, struct S3 * p_364);
uint16_t  func_19(uint8_t * p_20, uint8_t * p_21, uint32_t  p_22, uint32_t  p_23, struct S3 * p_364);
struct S0  func_27(uint8_t * p_28, int64_t  p_29, struct S3 * p_364);
int16_t ** func_46(struct S0 * p_47, uint32_t  p_48, struct S0 * p_49, int16_t ** p_50, struct S3 * p_364);
struct S0 * func_51(int16_t ** p_52, uint32_t * p_53, int64_t  p_54, struct S3 * p_364);
int16_t ** func_57(int16_t ** p_58, struct S3 * p_364);
uint8_t * func_62(uint16_t  p_63, int32_t  p_64, int16_t * p_65, int32_t * p_66, struct S3 * p_364);
struct S0 * func_68(int16_t  p_69, struct S3 * p_364);
int8_t  func_70(int32_t  p_71, uint8_t * p_72, int16_t ** p_73, int16_t * p_74, struct S3 * p_364);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_364->g_comm_values p_364->l_comm_values p_364->g_17 p_364->g_25 p_364->g_26 p_364->g_30 p_364->g_38 p_364->g_44 p_364->g_67 p_364->g_45.f1 p_364->g_85 p_364->g_32 p_364->g_92 p_364->g_97 p_364->g_61 p_364->g_108 p_364->g_109 p_364->g_82.f0 p_364->g_117 p_364->g_148 p_364->g_159 p_364->g_86 p_364->g_173 p_364->g_112 p_364->g_45 p_364->g_213 p_364->g_82 p_364->g_282 p_364->g_214 p_364->g_286 p_364->g_291 p_364->g_292 p_364->g_286.f3 p_364->g_308 p_364->g_327 p_364->g_81 p_364->g_257 p_364->g_347 p_364->g_238.f0
 * writes: p_364->g_4 p_364->g_15 p_364->g_17 p_364->g_30 p_364->g_38 p_364->g_45 p_364->g_81 p_364->g_32 p_364->g_109 p_364->g_112 p_364->g_67 p_364->g_117 p_364->g_82.f0 p_364->g_108 p_364->g_149 p_364->g_173 p_364->g_213 p_364->g_61 p_364->g_286.f3 p_364->g_26
 */
int32_t  func_1(struct S3 * p_364)
{ /* block id: 4 */
    uint32_t l_2 = 4294967295UL;
    uint32_t *l_3 = (void*)0;
    VECTOR(int16_t, 8) l_9 = (VECTOR(int16_t, 8))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, (-1L)), (-1L)), (-1L), 3L, (-1L));
    uint8_t *l_14 = &p_364->g_15;
    int16_t *l_16 = &p_364->g_17;
    int64_t l_18 = 1L;
    uint8_t *l_24 = (void*)0;
    int32_t *l_351 = (void*)0;
    int32_t *l_352 = (void*)0;
    int32_t *l_353 = (void*)0;
    int32_t *l_354 = (void*)0;
    int32_t *l_355 = &p_364->g_32;
    int32_t *l_356 = (void*)0;
    int32_t *l_359 = (void*)0;
    int32_t *l_360 = (void*)0;
    int32_t *l_362[8][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
    int16_t l_363[6][4][6] = {{{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)}},{{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)}},{{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)}},{{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)}},{{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)}},{{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)},{(-10L),0x196BL,1L,(-5L),1L,(-10L)}}};
    int i, j, k;
    (*l_355) = ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(7L, ((p_364->g_4[2] = ((p_364->g_comm_values[p_364->tid] , (!l_2)) | (-9L))) | func_5(((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(l_9.s3257272412130575)).s5, p_364->l_comm_values[(safe_mod_func_uint32_t_u_u(p_364->tid, 75))])) == (((*p_364->g_214) = ((((safe_add_func_uint32_t_u_u((l_9.s0 < ((VECTOR(uint64_t, 16))((safe_mul_func_int16_t_s_s((l_18 = ((*l_16) &= (((*l_14) = GROUP_DIVERGE(1, 1)) ^ (-8L)))), func_19(l_24, l_24, ((void*)0 == p_364->g_25), p_364->g_26, p_364))), l_9.s4, 1UL, 18446744073709551608UL, l_2, p_364->g_82.f2, 18446744073709551607UL, ((VECTOR(uint64_t, 8))(0xA78A989C91ABEBC2L)), 6UL)).s2), l_2)) & l_9.s1) , (*p_364->g_44)) , 0x63D1L)) ^ FAKE_DIVERGE(p_364->group_1_offset, get_group_id(1), 10))), p_364)), ((VECTOR(int32_t, 8))(0x669C6C98L)), ((VECTOR(int32_t, 2))(0x4BD02528L)), 0x64B3E79EL, 0x040FC65DL, 0x0682CF4EL, (-4L))).sa952, (int32_t)0x643D52DFL))).z;
    l_363[0][1][0] = ((*l_355) &= (1L >= p_364->g_45.f0));
    return p_364->g_238.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_364->g_286.f3 p_364->g_32 p_364->g_308 p_364->g_327 p_364->g_214 p_364->g_81 p_364->g_25 p_364->g_26 p_364->g_30 p_364->g_92 p_364->g_257 p_364->g_117 p_364->g_213 p_364->g_347
 * writes: p_364->g_286.f3 p_364->g_32 p_364->g_61 p_364->g_45 p_364->g_117 p_364->g_26
 */
uint32_t  func_5(int64_t  p_6, struct S3 * p_364)
{ /* block id: 117 */
    uint8_t *l_314 = &p_364->g_15;
    uint8_t *l_316 = &p_364->g_82.f2;
    int32_t l_333 = 6L;
    int16_t l_334 = (-1L);
    uint32_t l_335[8][8][1] = {{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}};
    VECTOR(int16_t, 4) l_346 = (VECTOR(int16_t, 4))(0x0F1EL, (VECTOR(int16_t, 2))(0x0F1EL, 0x3618L), 0x3618L);
    int32_t l_348 = 0L;
    int32_t l_350 = 0x5D45A675L;
    int i, j, k;
    for (p_364->g_286.f3 = (-23); (p_364->g_286.f3 >= 4); p_364->g_286.f3++)
    { /* block id: 120 */
        uint8_t **l_315[5];
        int32_t *l_317 = (void*)0;
        int32_t *l_318 = &p_364->g_32;
        uint64_t *l_321 = (void*)0;
        uint64_t *l_322 = (void*)0;
        struct S0 l_332 = {0xA8D574B786491656L,4294967295UL,7UL};
        uint16_t *l_336 = &p_364->g_117;
        uint16_t l_337 = 0x7E69L;
        int32_t *l_349 = (void*)0;
        int i;
        for (i = 0; i < 5; i++)
            l_315[i] = &l_314;
        (*l_318) |= ((l_314 = l_314) == (l_316 = l_316));
        l_337 &= ((p_6 = p_6) , (safe_div_func_int16_t_s_s((l_321 != l_322), ((*l_336) &= (safe_sub_func_int64_t_s_s(0x16DCF82778B136FEL, (p_6 & (((((((*p_364->g_214) = (safe_mod_func_uint64_t_u_u(((void*)0 == p_364->g_308), ((VECTOR(int64_t, 2))(p_364->g_327.yy)).lo))) | ((safe_sub_func_uint16_t_u_u(((((((((*p_364->g_81) = l_332) , ((((-1L) > 0x6BL) , l_333) , l_333)) >= 0UL) & (*p_364->g_25)) , l_334) != l_334) == (-10L)), p_364->g_30)) <= l_335[0][1][0])) != p_364->g_92.s6) , p_364->g_257.s2) , 0x1AFF12191CCB3189L) , (*l_318)))))))));
        l_350 = ((*l_318) = (l_348 ^= (((!(safe_lshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((void*)0 == &p_364->g_15), ((((safe_div_func_uint16_t_u_u(((p_6 >= ((0x56A8L ^ ((**p_364->g_213) = (l_333 = (((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))((-8L), 0x0F00L)), ((VECTOR(int16_t, 16))(l_346.wxxyzxywxxwwzyyz)).s85))).odd ^ (((*p_364->g_25) = (*l_318)) == ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 2))(1UL, 251UL)).yyxx))).w))))) <= ((p_364->g_347 , (p_6 >= l_335[2][0][0])) && p_6))) && 0x5EC5L), 65530UL)) | 0x538EF27D77C0FCA1L) ^ l_335[0][1][0]) > p_6))) , (*p_364->g_25)), FAKE_DIVERGE(p_364->group_1_offset, get_group_id(1), 10)))) ^ 4294967294UL) , p_6)));
    }
    return l_348;
}


/* ------------------------------------------ */
/* 
 * reads : p_364->l_comm_values p_364->g_30 p_364->g_38 p_364->g_44 p_364->g_67 p_364->g_45.f1 p_364->g_25 p_364->g_26 p_364->g_85 p_364->g_32 p_364->g_92 p_364->g_97 p_364->g_61 p_364->g_108 p_364->g_109 p_364->g_82.f0 p_364->g_117 p_364->g_148 p_364->g_159 p_364->g_86 p_364->g_173 p_364->g_112 p_364->g_45 p_364->g_213 p_364->g_82 p_364->g_282 p_364->g_214 p_364->g_286 p_364->g_291 p_364->g_292
 * writes: p_364->g_30 p_364->g_38 p_364->g_45 p_364->g_81 p_364->g_32 p_364->g_109 p_364->g_112 p_364->g_67 p_364->g_117 p_364->g_82.f0 p_364->g_108 p_364->g_149 p_364->g_173 p_364->g_213 p_364->g_61
 */
uint16_t  func_19(uint8_t * p_20, uint8_t * p_21, uint32_t  p_22, uint32_t  p_23, struct S3 * p_364)
{ /* block id: 9 */
    struct S0 *l_42 = (void*)0;
    struct S0 *l_43 = (void*)0;
    int16_t *l_60 = &p_364->g_61[2][7];
    int16_t **l_59 = &l_60;
    VECTOR(uint16_t, 8) l_154 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL);
    uint32_t l_170 = 0x2B928BA4L;
    VECTOR(int64_t, 4) l_171 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x06F3C0F87B1ACB9FL), 0x06F3C0F87B1ACB9FL);
    uint32_t *l_172[1][5][9] = {{{&l_170,&l_170,&l_170,&l_170,&l_170,&l_170,&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170,&l_170,&l_170,&l_170,&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170,&l_170,&l_170,&l_170,&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170,&l_170,&l_170,&l_170,&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170,&l_170,&l_170,&l_170,&l_170,&l_170,&l_170}}};
    int16_t ***l_281 = (void*)0;
    VECTOR(int16_t, 2) l_289 = (VECTOR(int16_t, 2))((-1L), 0x24CAL);
    VECTOR(uint16_t, 2) l_290 = (VECTOR(uint16_t, 2))(65533UL, 0xA761L);
    struct S0 *l_293 = &p_364->g_45;
    int64_t *l_294[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_295 = 0x38727A0AL;
    uint64_t l_296 = 0UL;
    int32_t *l_299 = (void*)0;
    int32_t *l_302 = (void*)0;
    int32_t *l_304 = (void*)0;
    int32_t *l_305 = (void*)0;
    int32_t *l_310[3][9][8] = {{{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32}},{{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32}},{{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32},{(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32}}};
    VECTOR(int16_t, 4) l_311 = (VECTOR(int16_t, 4))(0x0DD1L, (VECTOR(int16_t, 2))(0x0DD1L, 0L), 0L);
    int i, j, k;
    (*p_364->g_44) = func_27(p_21, (p_364->g_30 |= p_364->l_comm_values[(safe_mod_func_uint32_t_u_u(p_364->tid, 75))]), p_364);
    (*p_364->g_282) = func_46(func_51(((safe_lshift_func_int8_t_s_u(0x42L, 3)) , func_57(l_59, p_364)), p_364->g_97, p_23, p_364), p_364->g_92.sc, l_43, ((p_364->g_173 = (((safe_lshift_func_int16_t_s_u((~(safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_154.s1313)).x, 15))), 4)) , ((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0xE9L, 0xF4L, 3UL, 0x5AL)))).x, 6)) || (safe_div_func_int32_t_s_s((((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 4))(p_364->g_159.s400f)).even, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(1L, 0x05E0CE5C9CA6B344L, ((safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(1L, l_154.s1)), l_170)) == 0x2E449F47L) || p_364->g_159.sb), 0)), GROUP_DIVERGE(1, 1))), 0x0BL)) , l_170), l_171.w, ((VECTOR(int64_t, 2))(1L)), 0x6D9E332CBFD598AEL, p_22, 1L, 0x5568F75EC2EFDB87L, ((VECTOR(int64_t, 2))(6L)), ((VECTOR(int64_t, 2))(0x0644564FD79D3253L)), 0x2326A62A6515E364L, 1L)).sb, ((VECTOR(int64_t, 2))(0x3725F03459CE884CL)), 1L, l_171.y, ((VECTOR(int64_t, 8))(0x5E78A2021EEE7737L)), (-1L), 0x1D97A7B511B0AF79L, 0x24C3FCAEC78794BDL)).s4, 0x02855B81632061BEL, ((VECTOR(int64_t, 2))(0x73B490FC01C5CEDBL)), 2L, (-2L), 0x7FF8A4D8716988ADL, (-1L))).s02))).lo , p_22), 3UL)))) == l_171.w)) , (void*)0), p_364);
    l_311.z = ((((((*p_364->g_214) &= (safe_add_func_int32_t_s_s(p_22, (p_22 || (safe_unary_minus_func_uint8_t_u(p_22)))))) , p_364->g_82.f2) <= (p_23 , (l_295 = (p_364->g_286 , ((((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(l_289.xxyy)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_290.xxyyyyxy)).s0603420124346445)).sab08))).yzxwyzxz, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_364->g_291.yyzw)).wwyxzzxzxzwxxzyy)).lo, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(p_364->g_292.wyzzxyyx)))))))).s5, l_289.y)) & ((void*)0 != l_293)) < FAKE_DIVERGE(p_364->local_0_offset, get_local_id(0), 10)) && l_171.x))))) | l_296) > p_22);
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_364->g_38
 * writes: p_364->g_38
 */
struct S0  func_27(uint8_t * p_28, int64_t  p_29, struct S3 * p_364)
{ /* block id: 11 */
    int32_t *l_31 = &p_364->g_32;
    int32_t *l_33 = &p_364->g_32;
    int32_t *l_34 = &p_364->g_32;
    int32_t *l_35 = &p_364->g_32;
    int32_t *l_36 = &p_364->g_32;
    int32_t *l_37[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    struct S0 l_41 = {1UL,0x5D55A9D4L,0xC5L};
    int i;
    p_364->g_38--;
    return l_41;
}


/* ------------------------------------------ */
/* 
 * reads : p_364->g_25 p_364->g_26 p_364->g_85 p_364->g_86 p_364->g_92 p_364->g_173 p_364->g_45.f1 p_364->g_112 p_364->g_45 p_364->g_213 p_364->g_82 p_364->g_44
 * writes: p_364->g_45.f1 p_364->g_45 p_364->g_109
 */
int16_t ** func_46(struct S0 * p_47, uint32_t  p_48, struct S0 * p_49, int16_t ** p_50, struct S3 * p_364)
{ /* block id: 66 */
    int16_t l_186 = 0x24E0L;
    uint8_t *l_197[4] = {&p_364->g_82.f2,&p_364->g_82.f2,&p_364->g_82.f2,&p_364->g_82.f2};
    uint8_t **l_198 = (void*)0;
    uint8_t **l_199 = &l_197[2];
    uint64_t *l_204[5][2][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    int32_t l_205[8][4][1] = {{{0x58C7D610L},{0x58C7D610L},{0x58C7D610L},{0x58C7D610L}},{{0x58C7D610L},{0x58C7D610L},{0x58C7D610L},{0x58C7D610L}},{{0x58C7D610L},{0x58C7D610L},{0x58C7D610L},{0x58C7D610L}},{{0x58C7D610L},{0x58C7D610L},{0x58C7D610L},{0x58C7D610L}},{{0x58C7D610L},{0x58C7D610L},{0x58C7D610L},{0x58C7D610L}},{{0x58C7D610L},{0x58C7D610L},{0x58C7D610L},{0x58C7D610L}},{{0x58C7D610L},{0x58C7D610L},{0x58C7D610L},{0x58C7D610L}},{{0x58C7D610L},{0x58C7D610L},{0x58C7D610L},{0x58C7D610L}}};
    VECTOR(int32_t, 4) l_221 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-8L)), (-8L));
    VECTOR(int16_t, 16) l_226 = (VECTOR(int16_t, 16))(0x072EL, (VECTOR(int16_t, 4))(0x072EL, (VECTOR(int16_t, 2))(0x072EL, 0x35B6L), 0x35B6L), 0x35B6L, 0x072EL, 0x35B6L, (VECTOR(int16_t, 2))(0x072EL, 0x35B6L), (VECTOR(int16_t, 2))(0x072EL, 0x35B6L), 0x072EL, 0x35B6L, 0x072EL, 0x35B6L);
    VECTOR(uint8_t, 16) l_260 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x2FL), 0x2FL), 0x2FL, 255UL, 0x2FL, (VECTOR(uint8_t, 2))(255UL, 0x2FL), (VECTOR(uint8_t, 2))(255UL, 0x2FL), 255UL, 0x2FL, 255UL, 0x2FL);
    int32_t l_263 = 0L;
    uint32_t l_272 = 0x4CE6D024L;
    int16_t **l_280 = &p_364->g_214;
    int i, j, k;
    if ((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), ((1L < ((~(*p_364->g_25)) != ((((safe_rshift_func_int8_t_s_s(0L, 0)) && (safe_mod_func_int8_t_s_s(l_186, (safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((*l_199) = l_197[2]) == (((((safe_mod_func_uint8_t_u_u(l_186, 1L)) < (l_205[0][2][0] = ((p_48 , (*p_364->g_85)) != &l_186))) , 0UL) | p_364->g_92.s2) , &p_364->g_26)), p_364->g_173)), 0UL)), 255UL)), p_48)), 0x32L))))) >= l_186) <= p_48))) && p_48))), p_48)))
    { /* block id: 69 */
        struct S0 l_212 = {0x6F0562B50104BB76L,4294967286UL,250UL};
        VECTOR(int32_t, 4) l_222 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L);
        VECTOR(int32_t, 4) l_223 = (VECTOR(int32_t, 4))(0x1977FC4CL, (VECTOR(int32_t, 2))(0x1977FC4CL, 0x16C565AAL), 0x16C565AAL);
        VECTOR(int32_t, 2) l_224 = (VECTOR(int32_t, 2))(0x61086328L, 0x20673951L);
        uint32_t *l_231 = &p_364->g_82.f1;
        VECTOR(uint32_t, 2) l_232 = (VECTOR(uint32_t, 2))(0xD9327C20L, 1UL);
        VECTOR(uint8_t, 16) l_261 = (VECTOR(uint8_t, 16))(0x89L, (VECTOR(uint8_t, 4))(0x89L, (VECTOR(uint8_t, 2))(0x89L, 0xC6L), 0xC6L), 0xC6L, 0x89L, 0xC6L, (VECTOR(uint8_t, 2))(0x89L, 0xC6L), (VECTOR(uint8_t, 2))(0x89L, 0xC6L), 0x89L, 0xC6L, 0x89L, 0xC6L);
        struct S0 l_262 = {0xC920B3F138F6F16FL,0xA17503E6L,0xEFL};
        uint64_t *l_267 = &p_364->g_173;
        int i;
        for (l_186 = 0; (l_186 <= (-16)); --l_186)
        { /* block id: 72 */
            for (p_364->g_45.f1 = 0; (p_364->g_45.f1 <= 43); ++p_364->g_45.f1)
            { /* block id: 75 */
                for (p_48 = (-29); (p_48 != 46); ++p_48)
                { /* block id: 78 */
                    l_212 = (*p_364->g_112);
                    return p_364->g_213;
                }
            }
        }
        (*p_364->g_112) = (*p_47);
        for (l_212.f2 = (-24); (l_212.f2 > 32); ++l_212.f2)
        { /* block id: 87 */
            VECTOR(int32_t, 8) l_225 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x14FBEF73L), 0x14FBEF73L), 0x14FBEF73L, 2L, 0x14FBEF73L);
            uint32_t **l_229 = &p_364->g_97;
            uint16_t *l_235[4][7] = {{(void*)0,&p_364->g_117,(void*)0,&p_364->g_117,(void*)0,&p_364->g_117,(void*)0},{(void*)0,&p_364->g_117,(void*)0,&p_364->g_117,(void*)0,&p_364->g_117,(void*)0},{(void*)0,&p_364->g_117,(void*)0,&p_364->g_117,(void*)0,&p_364->g_117,(void*)0},{(void*)0,&p_364->g_117,(void*)0,&p_364->g_117,(void*)0,&p_364->g_117,(void*)0}};
            int64_t *l_243 = (void*)0;
            int64_t *l_244 = (void*)0;
            int64_t *l_245[4][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            VECTOR(int32_t, 16) l_246 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0CC62C78L), 0x0CC62C78L), 0x0CC62C78L, 1L, 0x0CC62C78L, (VECTOR(int32_t, 2))(1L, 0x0CC62C78L), (VECTOR(int32_t, 2))(1L, 0x0CC62C78L), 1L, 0x0CC62C78L, 1L, 0x0CC62C78L);
            VECTOR(uint16_t, 4) l_252 = (VECTOR(uint16_t, 4))(0x3954L, (VECTOR(uint16_t, 2))(0x3954L, 0x7B9AL), 0x7B9AL);
            VECTOR(uint8_t, 8) l_258 = (VECTOR(uint8_t, 8))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 4UL), 4UL), 4UL, 9UL, 4UL);
            VECTOR(uint8_t, 2) l_259 = (VECTOR(uint8_t, 2))(255UL, 248UL);
            VECTOR(uint8_t, 2) l_264 = (VECTOR(uint8_t, 2))(0xA3L, 0xBEL);
            int32_t *l_279 = &l_205[0][3][0];
            int i, j;
            for (l_212.f0 = 1; (l_212.f0 == 50); l_212.f0 = safe_add_func_int32_t_s_s(l_212.f0, 2))
            { /* block id: 90 */
                int32_t **l_219 = &p_364->g_109;
                (*l_219) = (void*)0;
                if (l_212.f0)
                    break;
                (*p_364->g_112) = (*p_364->g_44);
            }
            l_246.s2 = ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_364->g_220.s72)), 0x5FE0EA12L, 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_221.zyxy)).xywxzxxy, ((VECTOR(int32_t, 8))(l_222.xwyxwxxy)), ((VECTOR(int32_t, 16))(l_223.ywxzzwyzyyzzzwzz)).even))).s23, ((VECTOR(int32_t, 16))(l_224.xxxxyxyxyyyyxxxy)).sf0))))), ((VECTOR(int32_t, 2))(l_225.s71)).odd, (~(l_222.z = ((((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_226.sdd22a97e7c0ef8d4)).lo)), (int16_t)((((p_364->g_230 = ((*l_229) = p_364->g_109)) == l_231) || ((void*)0 != &p_364->g_173)) , p_48)))).s1 ^ (p_364->g_67.y ^= (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_232.xx)).yxxx)).w || (l_225.s5 = (p_364->g_comm_values[p_364->tid] >= (safe_lshift_func_uint16_t_u_u(p_364->g_82.f2, 1))))))) && ((safe_add_func_int64_t_s_s((p_364->g_238 , (l_224.y = ((safe_lshift_func_uint8_t_u_s(((safe_div_func_uint64_t_u_u(FAKE_DIVERGE(p_364->local_2_offset, get_local_id(2), 10), p_364->g_220.s0)) >= 0x51L), p_48)) , 0x1B8707CB7B7E35E3L))), p_48)) & 7UL)))), ((VECTOR(int32_t, 8))(0x343E4174L)))).se2b2)).wwxzywzyzzyzywxw, ((VECTOR(int32_t, 16))(0x407BEE8EL))))).sd;
            l_263 ^= ((safe_sub_func_int64_t_s_s(p_48, ((((p_48 || (p_364->g_45.f1 , l_221.z)) && ((safe_mod_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(4294967293UL, ((VECTOR(uint32_t, 2))(4294967295UL, 0x3F403EBEL)), 0UL)).xzxzxwywzxyyyzzz)).se)) <= ((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_252.wwzxyyzy)))).s1 <= ((+((p_364->g_45.f1 & (((VECTOR(uint8_t, 16))((p_48 == p_48), (((*p_47) = ((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(0x05AC7BDA4903D656L, 0x1846EECE68CFEE64L)).lo, ((p_48 || ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(p_364->g_257.s5bfe8ef02d1d4523)).s0, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_258.s71)), 0x69L, 1UL)).yyxwxyxz, ((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 8))(l_259.xxxxxyyx)).s5145073335110255, ((VECTOR(uint8_t, 4))(l_260.seeda)).yxwzxwzxxyzyzxzy, ((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_261.s34)).yyxxyyyy)).s61, (uint8_t)254UL))).yxxx, ((VECTOR(uint8_t, 4))(255UL))))).zxwyzzzxzwyyyyyx, ((VECTOR(uint8_t, 16))(0xE5L)))))))).lo))), 1UL, ((VECTOR(uint8_t, 4))(0x93L)), 5UL, 0x96L, 255UL)).s0944)), 0x47L, 1UL, 253UL, 0xB5L)).s4)) <= FAKE_DIVERGE(p_364->local_0_offset, get_local_id(0), 10))) ^ 0x61L))) , l_262)) , (*p_364->g_25)), l_222.y, 0x6CL, 0xC1L, ((VECTOR(uint8_t, 8))(0x08L)), p_48, 0x03L, 0UL)).s4 | l_205[6][1][0])) <= 0xF8EDB4FBL)) <= GROUP_DIVERGE(1, 1))) , l_258.s2)), l_259.y)) & (-10L))) | GROUP_DIVERGE(2, 1)) <= 0x996B4E3AL))) , p_48);
            (*l_279) |= ((((VECTOR(uint8_t, 2))(l_264.yx)).lo & (((VECTOR(int16_t, 8))(0x049BL, 0x6601L, (safe_sub_func_uint8_t_u_u(((l_261.s9 & (~(l_267 == l_204[2][1][0]))) <= (p_48 < 4L)), ((safe_add_func_int8_t_s_s(((((**p_364->g_213) = (safe_sub_func_int64_t_s_s((l_272 >= (((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_364->g_273.s14c9)).wzyywyww)).lo)).even)).yyxx)), ((VECTOR(int16_t, 8))(p_364->g_274.s77151775)).lo))).w > 0x2E31L)), (GROUP_DIVERGE(2, 1) > (((0x76C4L < (safe_div_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u(247UL, 3L)) > (*p_364->g_214)) | l_226.s7), 0x0AL))) , 0L) ^ l_225.s5))))) & l_259.y) > p_364->g_159.se), (*p_364->g_25))) < (*p_364->g_25)))), l_246.s2, (**p_364->g_213), l_224.y, 0x43A5L, (-1L))).s0 && FAKE_DIVERGE(p_364->group_2_offset, get_group_id(2), 10))) >= l_261.sc);
        }
    }
    else
    { /* block id: 107 */
        return &p_364->g_214;
    }
    return l_280;
}


/* ------------------------------------------ */
/* 
 * reads : p_364->g_30 p_364->g_117 p_364->g_148
 * writes: p_364->g_30 p_364->g_82.f0 p_364->g_109 p_364->g_117 p_364->g_149
 */
struct S0 * func_51(int16_t ** p_52, uint32_t * p_53, int64_t  p_54, struct S3 * p_364)
{ /* block id: 47 */
    int32_t l_143 = 0L;
    int32_t *l_146 = (void*)0;
    for (p_364->g_30 = 0; (p_364->g_30 == 6); p_364->g_30++)
    { /* block id: 50 */
        for (p_364->g_82.f0 = (-10); (p_364->g_82.f0 > 37); ++p_364->g_82.f0)
        { /* block id: 53 */
            int32_t **l_142 = &p_364->g_109;
            (*l_142) = p_53;
            if (l_143)
                break;
        }
    }
    for (p_364->g_117 = (-9); (p_364->g_117 > 30); p_364->g_117 = safe_add_func_uint8_t_u_u(p_364->g_117, 3))
    { /* block id: 60 */
        int32_t **l_147 = &p_364->g_109;
        (*p_364->g_148) = ((*l_147) = l_146);
    }
    return &p_364->g_82;
}


/* ------------------------------------------ */
/* 
 * reads : p_364->g_67 p_364->g_45.f1 p_364->g_25 p_364->g_26 p_364->g_38 p_364->g_85 p_364->g_32 p_364->g_92 p_364->g_97 p_364->g_61 p_364->g_108 p_364->g_109 p_364->g_82.f0 p_364->g_44
 * writes: p_364->g_81 p_364->g_32 p_364->g_109 p_364->g_112 p_364->g_67 p_364->g_117 p_364->g_82.f0 p_364->g_108 p_364->g_38 p_364->g_45
 */
int16_t ** func_57(int16_t ** p_58, struct S3 * p_364)
{ /* block id: 15 */
    uint32_t l_75 = 0x44D42BE3L;
    uint8_t *l_76[1];
    int16_t **l_77 = (void*)0;
    int32_t l_99 = 0x6F6A3D77L;
    struct S0 **l_110 = (void*)0;
    struct S0 **l_111[5][10] = {{&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81},{&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81},{&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81},{&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81},{&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81,&p_364->g_81}};
    struct S0 *l_113 = &p_364->g_82;
    int8_t l_114 = 0x3AL;
    uint16_t *l_115 = (void*)0;
    uint16_t *l_116 = &p_364->g_117;
    int32_t *l_123 = &p_364->g_32;
    int32_t *l_124 = &p_364->g_32;
    int32_t *l_125 = &l_99;
    int32_t *l_126 = &p_364->g_32;
    int32_t l_127 = 0x152D19C5L;
    int32_t l_128 = 0x17702E8EL;
    int32_t *l_129 = &l_99;
    int32_t *l_130 = &l_99;
    int32_t *l_131[9][1][5] = {{{&l_99,(void*)0,&l_127,(void*)0,&l_99}},{{&l_99,(void*)0,&l_127,(void*)0,&l_99}},{{&l_99,(void*)0,&l_127,(void*)0,&l_99}},{{&l_99,(void*)0,&l_127,(void*)0,&l_99}},{{&l_99,(void*)0,&l_127,(void*)0,&l_99}},{{&l_99,(void*)0,&l_127,(void*)0,&l_99}},{{&l_99,(void*)0,&l_127,(void*)0,&l_99}},{{&l_99,(void*)0,&l_127,(void*)0,&l_99}},{{&l_99,(void*)0,&l_127,(void*)0,&l_99}}};
    int8_t l_132 = 0x62L;
    int8_t l_133[8][7] = {{0x38L,0x42L,0x77L,1L,0x42L,1L,0x77L},{0x38L,0x42L,0x77L,1L,0x42L,1L,0x77L},{0x38L,0x42L,0x77L,1L,0x42L,1L,0x77L},{0x38L,0x42L,0x77L,1L,0x42L,1L,0x77L},{0x38L,0x42L,0x77L,1L,0x42L,1L,0x77L},{0x38L,0x42L,0x77L,1L,0x42L,1L,0x77L},{0x38L,0x42L,0x77L,1L,0x42L,1L,0x77L},{0x38L,0x42L,0x77L,1L,0x42L,1L,0x77L}};
    int32_t l_134 = 0x5A6D7309L;
    uint64_t l_135[3][6] = {{0xA5562F0F951E7C54L,0xE643068DE9F75FF9L,0xA5562F0F951E7C54L,0xA5562F0F951E7C54L,0xE643068DE9F75FF9L,0xA5562F0F951E7C54L},{0xA5562F0F951E7C54L,0xE643068DE9F75FF9L,0xA5562F0F951E7C54L,0xA5562F0F951E7C54L,0xE643068DE9F75FF9L,0xA5562F0F951E7C54L},{0xA5562F0F951E7C54L,0xE643068DE9F75FF9L,0xA5562F0F951E7C54L,0xA5562F0F951E7C54L,0xE643068DE9F75FF9L,0xA5562F0F951E7C54L}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_76[i] = &p_364->g_26;
    (*p_364->g_44) = func_27(func_62(((*l_116) = (p_364->g_67.y = ((VECTOR(uint16_t, 16))(65535UL, 8UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(p_364->g_67.yxxxyxyy)).s66)), 65535UL, ((p_364->g_45.f1 != (&p_364->g_45 != (l_113 = (p_364->g_112 = func_68((l_99 |= ((*p_364->g_25) ^ func_70(l_75, l_76[0], l_77, (*p_58), p_364))), p_364))))) | (**p_58)), GROUP_DIVERGE(1, 1), ((VECTOR(uint16_t, 2))(0UL)), 65533UL, ((VECTOR(uint16_t, 2))(3UL)), l_114, 0xA7E5L, 65531UL, 0x27DBL)).sb)), l_114, &p_364->g_61[4][7], p_364->g_97, p_364), l_75, p_364);
    (*p_364->g_109) = l_114;
    ++l_135[1][4];
    return p_58;
}


/* ------------------------------------------ */
/* 
 * reads : p_364->g_109 p_364->g_82.f0 p_364->g_32
 * writes: p_364->g_32 p_364->g_82.f0 p_364->g_108
 */
uint8_t * func_62(uint16_t  p_63, int32_t  p_64, int16_t * p_65, int32_t * p_66, struct S3 * p_364)
{ /* block id: 33 */
    uint32_t **l_118 = &p_364->g_97;
    int32_t l_122 = (-1L);
    (*p_364->g_109) = ((void*)0 == l_118);
    for (p_364->g_82.f0 = 0; (p_364->g_82.f0 < 17); p_364->g_82.f0 = safe_add_func_int8_t_s_s(p_364->g_82.f0, 1))
    { /* block id: 37 */
        uint8_t *l_121 = &p_364->g_45.f2;
        return l_121;
    }
    (*p_364->g_109) ^= l_122;
    p_364->g_108 = &p_364->g_109;
    return &p_364->g_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_364->g_25 p_364->g_26 p_364->g_108
 * writes: p_364->g_109
 */
struct S0 * func_68(int16_t  p_69, struct S3 * p_364)
{ /* block id: 24 */
    uint32_t **l_100 = (void*)0;
    uint32_t ***l_101 = &l_100;
    VECTOR(uint8_t, 8) l_104 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xEBL), 0xEBL), 0xEBL, 255UL, 0xEBL);
    VECTOR(uint64_t, 8) l_105 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 0UL), 0UL, 18446744073709551615UL, 0UL);
    union U1 *l_106 = (void*)0;
    int32_t *l_107 = &p_364->g_32;
    int i;
    (*l_101) = l_100;
    l_106 = ((safe_div_func_int64_t_s_s((((*p_364->g_25) & ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_104.s16)))), 0x29L, 0xD6L)).y) | ((void*)0 != (*l_101))), ((VECTOR(uint64_t, 16))(l_105.s6533423561734761)).s9)) , l_106);
    (*p_364->g_108) = l_107;
    return &p_364->g_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_364->g_38 p_364->g_85 p_364->g_32 p_364->g_92 p_364->g_97 p_364->g_67 p_364->g_61
 * writes: p_364->g_81 p_364->g_32
 */
int8_t  func_70(int32_t  p_71, uint8_t * p_72, int16_t ** p_73, int16_t * p_74, struct S3 * p_364)
{ /* block id: 16 */
    struct S0 *l_78 = (void*)0;
    struct S0 **l_79 = (void*)0;
    struct S0 **l_80[4][9][3] = {{{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78}},{{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78}},{{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78}},{{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78},{&l_78,&l_78,&l_78}}};
    int32_t *l_83[3];
    VECTOR(int32_t, 2) l_87 = (VECTOR(int32_t, 2))(0x3D99A0A0L, (-10L));
    struct S0 **l_95[7];
    VECTOR(int32_t, 16) l_96 = (VECTOR(int32_t, 16))(0x4120E742L, (VECTOR(int32_t, 4))(0x4120E742L, (VECTOR(int32_t, 2))(0x4120E742L, 0x2BD0CEA3L), 0x2BD0CEA3L), 0x2BD0CEA3L, 0x4120E742L, 0x2BD0CEA3L, (VECTOR(int32_t, 2))(0x4120E742L, 0x2BD0CEA3L), (VECTOR(int32_t, 2))(0x4120E742L, 0x2BD0CEA3L), 0x4120E742L, 0x2BD0CEA3L, 0x4120E742L, 0x2BD0CEA3L);
    int16_t l_98[2];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_83[i] = &p_364->g_32;
    for (i = 0; i < 7; i++)
        l_95[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_98[i] = 0L;
    p_364->g_32 = ((((p_364->g_38 , l_78) == (p_364->g_81 = &p_364->g_45)) , &p_364->g_61[3][7]) != &p_364->g_61[4][2]);
    l_83[0] = &p_364->g_32;
    p_364->g_32 |= (((void*)0 == p_364->g_85) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_87.xyyy)).xwyxzwyyxwxzyxzy)).s5);
    l_98[0] = (safe_mul_func_int16_t_s_s(p_364->g_38, (safe_mul_func_int16_t_s_s(((((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(p_364->g_92.s59577ee7e4ebb7c4)).seae4, ((VECTOR(int32_t, 2))(0x2B653F56L, 0x37A17131L)).yyxy, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((0x263BL || (&l_78 != l_95[0])), 0x6DA29A6AL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-6L), 0x28131091L)), 0x5DCD3E82L, 1L)), 1L, 0x7660C929L)).odd)).ywxyzywx, (int32_t)((VECTOR(int32_t, 4))(l_96.s5dc6)).w))).hi))).x == ((void*)0 == p_364->g_97)) & p_364->g_67.x), (((VECTOR(uint16_t, 2))(0x7340L, 65528UL)).lo >= (*p_74))))));
    return p_364->g_67.x;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[75];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 75; i++)
            l_comm_values[i] = 1;
    struct S3 c_365;
    struct S3* p_364 = &c_365;
    struct S3 c_366 = {
        {18446744073709551615UL,0x66B17B722BA7B7E8L,18446744073709551615UL,18446744073709551615UL,0x66B17B722BA7B7E8L,18446744073709551615UL}, // p_364->g_4
        0x04L, // p_364->g_15
        0x628EL, // p_364->g_17
        0xBEL, // p_364->g_26
        &p_364->g_26, // p_364->g_25
        (-2L), // p_364->g_30
        0x6ED73489L, // p_364->g_32
        4294967293UL, // p_364->g_38
        {0x1BCF2EC28784865EL,1UL,0xBFL}, // p_364->g_45
        &p_364->g_45, // p_364->g_44
        {{(-1L),(-1L),1L,(-1L),(-2L),(-1L),1L,(-1L),(-1L)},{(-1L),(-1L),1L,(-1L),(-2L),(-1L),1L,(-1L),(-1L)},{(-1L),(-1L),1L,(-1L),(-2L),(-1L),1L,(-1L),(-1L)},{(-1L),(-1L),1L,(-1L),(-2L),(-1L),1L,(-1L),(-1L)},{(-1L),(-1L),1L,(-1L),(-2L),(-1L),1L,(-1L),(-1L)}}, // p_364->g_61
        (VECTOR(uint16_t, 2))(65529UL, 0x8375L), // p_364->g_67
        {1UL,0xA127326BL,0UL}, // p_364->g_82
        &p_364->g_82, // p_364->g_81
        (void*)0, // p_364->g_84
        (void*)0, // p_364->g_86
        &p_364->g_86, // p_364->g_85
        (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x323298C0L), 0x323298C0L), 0x323298C0L, (-4L), 0x323298C0L, (VECTOR(int32_t, 2))((-4L), 0x323298C0L), (VECTOR(int32_t, 2))((-4L), 0x323298C0L), (-4L), 0x323298C0L, (-4L), 0x323298C0L), // p_364->g_92
        (void*)0, // p_364->g_97
        &p_364->g_32, // p_364->g_109
        &p_364->g_109, // p_364->g_108
        &p_364->g_82, // p_364->g_112
        0xD50EL, // p_364->g_117
        (void*)0, // p_364->g_149
        &p_364->g_149, // p_364->g_148
        (VECTOR(int64_t, 16))(0x1F4AA1E9C32DDD9FL, (VECTOR(int64_t, 4))(0x1F4AA1E9C32DDD9FL, (VECTOR(int64_t, 2))(0x1F4AA1E9C32DDD9FL, (-1L)), (-1L)), (-1L), 0x1F4AA1E9C32DDD9FL, (-1L), (VECTOR(int64_t, 2))(0x1F4AA1E9C32DDD9FL, (-1L)), (VECTOR(int64_t, 2))(0x1F4AA1E9C32DDD9FL, (-1L)), 0x1F4AA1E9C32DDD9FL, (-1L), 0x1F4AA1E9C32DDD9FL, (-1L)), // p_364->g_159
        18446744073709551613UL, // p_364->g_173
        &p_364->g_61[2][7], // p_364->g_214
        &p_364->g_214, // p_364->g_213
        (VECTOR(int32_t, 8))(0x2FD4C529L, (VECTOR(int32_t, 4))(0x2FD4C529L, (VECTOR(int32_t, 2))(0x2FD4C529L, 0x43B42ED0L), 0x43B42ED0L), 0x43B42ED0L, 0x2FD4C529L, 0x43B42ED0L), // p_364->g_220
        &p_364->g_82.f1, // p_364->g_230
        {65530UL}, // p_364->g_238
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x50L), 0x50L), 0x50L, 0L, 0x50L, (VECTOR(int8_t, 2))(0L, 0x50L), (VECTOR(int8_t, 2))(0L, 0x50L), 0L, 0x50L, 0L, 0x50L), // p_364->g_257
        (VECTOR(int16_t, 16))(0x53CFL, (VECTOR(int16_t, 4))(0x53CFL, (VECTOR(int16_t, 2))(0x53CFL, 1L), 1L), 1L, 0x53CFL, 1L, (VECTOR(int16_t, 2))(0x53CFL, 1L), (VECTOR(int16_t, 2))(0x53CFL, 1L), 0x53CFL, 1L, 0x53CFL, 1L), // p_364->g_273
        (VECTOR(int16_t, 8))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0L), 0L), 0L, (-8L), 0L), // p_364->g_274
        &p_364->g_213, // p_364->g_282
        {0x4104L}, // p_364->g_286
        (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 1L), 1L), // p_364->g_291
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-6L)), (-6L)), // p_364->g_292
        (void*)0, // p_364->g_297
        {{{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0}},{{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0},{&p_364->g_32,(void*)0,&p_364->g_32,(void*)0,(void*)0,&p_364->g_32,(void*)0,(void*)0}}}, // p_364->g_298
        (void*)0, // p_364->g_300
        {(void*)0}, // p_364->g_301
        (void*)0, // p_364->g_303
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_364->g_306
        (void*)0, // p_364->g_307
        (void*)0, // p_364->g_308
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_364->g_309
        (VECTOR(int64_t, 2))(0x53AE8310E1F8B289L, 0x07CF9725A535950EL), // p_364->g_327
        {65532UL}, // p_364->g_347
        (void*)0, // p_364->g_357
        (void*)0, // p_364->g_358
        (void*)0, // p_364->g_361
        0, // p_364->v_collective
        sequence_input[get_global_id(0)], // p_364->global_0_offset
        sequence_input[get_global_id(1)], // p_364->global_1_offset
        sequence_input[get_global_id(2)], // p_364->global_2_offset
        sequence_input[get_local_id(0)], // p_364->local_0_offset
        sequence_input[get_local_id(1)], // p_364->local_1_offset
        sequence_input[get_local_id(2)], // p_364->local_2_offset
        sequence_input[get_group_id(0)], // p_364->group_0_offset
        sequence_input[get_group_id(1)], // p_364->group_1_offset
        sequence_input[get_group_id(2)], // p_364->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 75)), permutations[0][get_linear_local_id()])), // p_364->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_365 = c_366;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_364);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_364->g_4[i], "p_364->g_4[i]", print_hash_value);

    }
    transparent_crc(p_364->g_15, "p_364->g_15", print_hash_value);
    transparent_crc(p_364->g_17, "p_364->g_17", print_hash_value);
    transparent_crc(p_364->g_26, "p_364->g_26", print_hash_value);
    transparent_crc(p_364->g_30, "p_364->g_30", print_hash_value);
    transparent_crc(p_364->g_32, "p_364->g_32", print_hash_value);
    transparent_crc(p_364->g_38, "p_364->g_38", print_hash_value);
    transparent_crc(p_364->g_45.f0, "p_364->g_45.f0", print_hash_value);
    transparent_crc(p_364->g_45.f1, "p_364->g_45.f1", print_hash_value);
    transparent_crc(p_364->g_45.f2, "p_364->g_45.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_364->g_61[i][j], "p_364->g_61[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_364->g_67.x, "p_364->g_67.x", print_hash_value);
    transparent_crc(p_364->g_67.y, "p_364->g_67.y", print_hash_value);
    transparent_crc(p_364->g_82.f0, "p_364->g_82.f0", print_hash_value);
    transparent_crc(p_364->g_82.f1, "p_364->g_82.f1", print_hash_value);
    transparent_crc(p_364->g_82.f2, "p_364->g_82.f2", print_hash_value);
    transparent_crc(p_364->g_92.s0, "p_364->g_92.s0", print_hash_value);
    transparent_crc(p_364->g_92.s1, "p_364->g_92.s1", print_hash_value);
    transparent_crc(p_364->g_92.s2, "p_364->g_92.s2", print_hash_value);
    transparent_crc(p_364->g_92.s3, "p_364->g_92.s3", print_hash_value);
    transparent_crc(p_364->g_92.s4, "p_364->g_92.s4", print_hash_value);
    transparent_crc(p_364->g_92.s5, "p_364->g_92.s5", print_hash_value);
    transparent_crc(p_364->g_92.s6, "p_364->g_92.s6", print_hash_value);
    transparent_crc(p_364->g_92.s7, "p_364->g_92.s7", print_hash_value);
    transparent_crc(p_364->g_92.s8, "p_364->g_92.s8", print_hash_value);
    transparent_crc(p_364->g_92.s9, "p_364->g_92.s9", print_hash_value);
    transparent_crc(p_364->g_92.sa, "p_364->g_92.sa", print_hash_value);
    transparent_crc(p_364->g_92.sb, "p_364->g_92.sb", print_hash_value);
    transparent_crc(p_364->g_92.sc, "p_364->g_92.sc", print_hash_value);
    transparent_crc(p_364->g_92.sd, "p_364->g_92.sd", print_hash_value);
    transparent_crc(p_364->g_92.se, "p_364->g_92.se", print_hash_value);
    transparent_crc(p_364->g_92.sf, "p_364->g_92.sf", print_hash_value);
    transparent_crc(p_364->g_117, "p_364->g_117", print_hash_value);
    transparent_crc(p_364->g_159.s0, "p_364->g_159.s0", print_hash_value);
    transparent_crc(p_364->g_159.s1, "p_364->g_159.s1", print_hash_value);
    transparent_crc(p_364->g_159.s2, "p_364->g_159.s2", print_hash_value);
    transparent_crc(p_364->g_159.s3, "p_364->g_159.s3", print_hash_value);
    transparent_crc(p_364->g_159.s4, "p_364->g_159.s4", print_hash_value);
    transparent_crc(p_364->g_159.s5, "p_364->g_159.s5", print_hash_value);
    transparent_crc(p_364->g_159.s6, "p_364->g_159.s6", print_hash_value);
    transparent_crc(p_364->g_159.s7, "p_364->g_159.s7", print_hash_value);
    transparent_crc(p_364->g_159.s8, "p_364->g_159.s8", print_hash_value);
    transparent_crc(p_364->g_159.s9, "p_364->g_159.s9", print_hash_value);
    transparent_crc(p_364->g_159.sa, "p_364->g_159.sa", print_hash_value);
    transparent_crc(p_364->g_159.sb, "p_364->g_159.sb", print_hash_value);
    transparent_crc(p_364->g_159.sc, "p_364->g_159.sc", print_hash_value);
    transparent_crc(p_364->g_159.sd, "p_364->g_159.sd", print_hash_value);
    transparent_crc(p_364->g_159.se, "p_364->g_159.se", print_hash_value);
    transparent_crc(p_364->g_159.sf, "p_364->g_159.sf", print_hash_value);
    transparent_crc(p_364->g_173, "p_364->g_173", print_hash_value);
    transparent_crc(p_364->g_220.s0, "p_364->g_220.s0", print_hash_value);
    transparent_crc(p_364->g_220.s1, "p_364->g_220.s1", print_hash_value);
    transparent_crc(p_364->g_220.s2, "p_364->g_220.s2", print_hash_value);
    transparent_crc(p_364->g_220.s3, "p_364->g_220.s3", print_hash_value);
    transparent_crc(p_364->g_220.s4, "p_364->g_220.s4", print_hash_value);
    transparent_crc(p_364->g_220.s5, "p_364->g_220.s5", print_hash_value);
    transparent_crc(p_364->g_220.s6, "p_364->g_220.s6", print_hash_value);
    transparent_crc(p_364->g_220.s7, "p_364->g_220.s7", print_hash_value);
    transparent_crc(p_364->g_238.f0, "p_364->g_238.f0", print_hash_value);
    transparent_crc(p_364->g_257.s0, "p_364->g_257.s0", print_hash_value);
    transparent_crc(p_364->g_257.s1, "p_364->g_257.s1", print_hash_value);
    transparent_crc(p_364->g_257.s2, "p_364->g_257.s2", print_hash_value);
    transparent_crc(p_364->g_257.s3, "p_364->g_257.s3", print_hash_value);
    transparent_crc(p_364->g_257.s4, "p_364->g_257.s4", print_hash_value);
    transparent_crc(p_364->g_257.s5, "p_364->g_257.s5", print_hash_value);
    transparent_crc(p_364->g_257.s6, "p_364->g_257.s6", print_hash_value);
    transparent_crc(p_364->g_257.s7, "p_364->g_257.s7", print_hash_value);
    transparent_crc(p_364->g_257.s8, "p_364->g_257.s8", print_hash_value);
    transparent_crc(p_364->g_257.s9, "p_364->g_257.s9", print_hash_value);
    transparent_crc(p_364->g_257.sa, "p_364->g_257.sa", print_hash_value);
    transparent_crc(p_364->g_257.sb, "p_364->g_257.sb", print_hash_value);
    transparent_crc(p_364->g_257.sc, "p_364->g_257.sc", print_hash_value);
    transparent_crc(p_364->g_257.sd, "p_364->g_257.sd", print_hash_value);
    transparent_crc(p_364->g_257.se, "p_364->g_257.se", print_hash_value);
    transparent_crc(p_364->g_257.sf, "p_364->g_257.sf", print_hash_value);
    transparent_crc(p_364->g_273.s0, "p_364->g_273.s0", print_hash_value);
    transparent_crc(p_364->g_273.s1, "p_364->g_273.s1", print_hash_value);
    transparent_crc(p_364->g_273.s2, "p_364->g_273.s2", print_hash_value);
    transparent_crc(p_364->g_273.s3, "p_364->g_273.s3", print_hash_value);
    transparent_crc(p_364->g_273.s4, "p_364->g_273.s4", print_hash_value);
    transparent_crc(p_364->g_273.s5, "p_364->g_273.s5", print_hash_value);
    transparent_crc(p_364->g_273.s6, "p_364->g_273.s6", print_hash_value);
    transparent_crc(p_364->g_273.s7, "p_364->g_273.s7", print_hash_value);
    transparent_crc(p_364->g_273.s8, "p_364->g_273.s8", print_hash_value);
    transparent_crc(p_364->g_273.s9, "p_364->g_273.s9", print_hash_value);
    transparent_crc(p_364->g_273.sa, "p_364->g_273.sa", print_hash_value);
    transparent_crc(p_364->g_273.sb, "p_364->g_273.sb", print_hash_value);
    transparent_crc(p_364->g_273.sc, "p_364->g_273.sc", print_hash_value);
    transparent_crc(p_364->g_273.sd, "p_364->g_273.sd", print_hash_value);
    transparent_crc(p_364->g_273.se, "p_364->g_273.se", print_hash_value);
    transparent_crc(p_364->g_273.sf, "p_364->g_273.sf", print_hash_value);
    transparent_crc(p_364->g_274.s0, "p_364->g_274.s0", print_hash_value);
    transparent_crc(p_364->g_274.s1, "p_364->g_274.s1", print_hash_value);
    transparent_crc(p_364->g_274.s2, "p_364->g_274.s2", print_hash_value);
    transparent_crc(p_364->g_274.s3, "p_364->g_274.s3", print_hash_value);
    transparent_crc(p_364->g_274.s4, "p_364->g_274.s4", print_hash_value);
    transparent_crc(p_364->g_274.s5, "p_364->g_274.s5", print_hash_value);
    transparent_crc(p_364->g_274.s6, "p_364->g_274.s6", print_hash_value);
    transparent_crc(p_364->g_274.s7, "p_364->g_274.s7", print_hash_value);
    transparent_crc(p_364->g_286.f0, "p_364->g_286.f0", print_hash_value);
    transparent_crc(p_364->g_291.x, "p_364->g_291.x", print_hash_value);
    transparent_crc(p_364->g_291.y, "p_364->g_291.y", print_hash_value);
    transparent_crc(p_364->g_291.z, "p_364->g_291.z", print_hash_value);
    transparent_crc(p_364->g_291.w, "p_364->g_291.w", print_hash_value);
    transparent_crc(p_364->g_292.x, "p_364->g_292.x", print_hash_value);
    transparent_crc(p_364->g_292.y, "p_364->g_292.y", print_hash_value);
    transparent_crc(p_364->g_292.z, "p_364->g_292.z", print_hash_value);
    transparent_crc(p_364->g_292.w, "p_364->g_292.w", print_hash_value);
    transparent_crc(p_364->g_327.x, "p_364->g_327.x", print_hash_value);
    transparent_crc(p_364->g_327.y, "p_364->g_327.y", print_hash_value);
    transparent_crc(p_364->g_347.f0, "p_364->g_347.f0", print_hash_value);
    transparent_crc(p_364->v_collective, "p_364->v_collective", print_hash_value);
    transparent_crc(p_364->l_comm_values[get_linear_local_id()], "p_364->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_364->g_comm_values[get_linear_group_id() * 75 + get_linear_local_id()], "p_364->g_comm_values[get_linear_group_id() * 75 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
