// --atomics 2 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 99,33,2 -l 11,1,1
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
{9,3,7,5,10,4,1,0,8,6,2}, // permutation 0
{7,2,0,10,6,4,1,8,5,3,9}, // permutation 1
{8,6,3,1,2,4,7,9,10,0,5}, // permutation 2
{10,4,1,3,6,9,5,2,7,0,8}, // permutation 3
{6,7,4,5,0,3,9,10,2,1,8}, // permutation 4
{2,4,7,9,5,10,1,6,0,8,3}, // permutation 5
{8,2,10,6,5,7,3,9,1,4,0}, // permutation 6
{7,6,0,8,3,10,5,9,1,4,2}, // permutation 7
{3,4,0,9,2,8,10,1,6,5,7}, // permutation 8
{5,0,1,8,10,6,3,2,9,4,7} // permutation 9
};

// Seed: 3334115272

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int32_t  f0;
   volatile uint32_t  f1;
   volatile int32_t  f2;
   uint32_t  f3;
   volatile int32_t  f4;
   volatile int64_t  f5;
   int16_t  f6;
   int16_t  f7;
   int32_t  f8;
};

struct S1 {
   uint32_t  f0;
   volatile uint8_t  f1;
   uint32_t  f2;
   struct S0  f3;
   uint32_t  f4;
   int16_t  f5;
   uint32_t  f6;
};

union U2 {
   int32_t  f0;
};

struct S3 {
    union U2 g_8[7][3];
    int32_t g_48[6][9];
    VECTOR(int32_t, 4) g_50;
    int32_t * volatile g_49;
    int32_t * volatile g_52;
    int32_t g_83;
    volatile int32_t g_86;
    int32_t g_87[9];
    struct S0 g_101[6][5][8];
    VECTOR(int64_t, 4) g_106;
    uint32_t g_118;
    volatile int32_t g_121;
    int32_t g_137;
    int32_t *g_143;
    int32_t ** volatile g_142;
    struct S0 *g_148;
    struct S0 ** volatile g_147[3];
    volatile struct S1 g_166;
    VECTOR(uint32_t, 8) g_179;
    int64_t *g_181;
    uint8_t g_190;
    VECTOR(int8_t, 8) g_191;
    volatile VECTOR(int8_t, 8) g_197;
    VECTOR(int8_t, 16) g_199;
    int32_t g_214[2];
    VECTOR(uint8_t, 2) g_215;
    VECTOR(uint64_t, 8) g_220;
    VECTOR(uint8_t, 8) g_221;
    VECTOR(uint8_t, 16) g_222;
    volatile struct S0 g_236;
    volatile struct S0 *g_235;
    volatile struct S0 **g_234[7];
    volatile struct S0 ** volatile *g_233;
    int32_t *g_266;
    int8_t g_274;
    int64_t g_292;
    int32_t ** volatile g_296;
    int32_t **g_298;
    int32_t *** volatile g_297[7][5][1];
    int32_t *** volatile g_299;
    struct S1 g_306;
    int8_t * volatile g_325;
    int8_t * volatile *g_324[1];
    int8_t * volatile ** volatile g_326;
    uint16_t g_333;
    struct S0 g_337[1][4][1];
    struct S0 g_338;
    uint64_t g_364[6][3];
    int32_t g_377;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S3 * p_395);
int64_t  func_4(int32_t  p_5, union U2  p_6, struct S3 * p_395);
struct S0  func_13(int64_t  p_14, uint16_t  p_15, uint8_t  p_16, struct S3 * p_395);
uint8_t  func_28(uint32_t  p_29, uint32_t  p_30, union U2  p_31, int8_t  p_32, uint32_t  p_33, struct S3 * p_395);
int16_t  func_36(int8_t  p_37, int32_t  p_38, int32_t  p_39, int64_t  p_40, int16_t  p_41, struct S3 * p_395);
int32_t  func_43(int64_t  p_44, uint32_t  p_45, int8_t  p_46, struct S3 * p_395);
int32_t ** func_57(uint64_t  p_58, int32_t ** p_59, int32_t * p_60, int32_t * p_61, int64_t  p_62, struct S3 * p_395);
union U2  func_69(uint32_t  p_70, int32_t ** p_71, uint32_t  p_72, uint32_t  p_73, struct S3 * p_395);
uint8_t  func_76(uint32_t  p_77, uint16_t  p_78, struct S3 * p_395);
struct S0 * func_91(int32_t * p_92, uint8_t  p_93, union U2  p_94, int32_t * p_95, struct S3 * p_395);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_395->l_comm_values p_395->g_8 p_395->g_comm_values p_395->g_50 p_395->g_48 p_395->g_121 p_395->g_137 p_395->g_142 p_395->g_147 p_395->g_87 p_395->g_166 p_395->g_143 p_395->g_191 p_395->g_197 p_395->g_199 p_395->g_101.f3 p_395->g_220 p_395->g_221 p_395->g_222 p_395->g_190 p_395->g_8.f0 p_395->g_233 p_395->g_266 p_395->g_234 p_395->g_296 p_395->g_299 p_395->g_298 p_395->g_306 p_395->g_83 p_395->g_118 p_395->g_324 p_395->g_326 p_395->g_333 p_395->g_101.f4 p_395->g_337 p_395->g_364 p_395->g_325 p_395->g_377
 * writes: p_395->g_48 p_395->g_50 p_395->g_83 p_395->g_87 p_395->g_118 p_395->g_49 p_395->g_137 p_395->g_143 p_395->g_101.f7 p_395->g_214 p_395->g_215 p_395->g_190 p_395->g_221 p_395->g_220 p_395->g_235 p_395->g_298 p_395->g_274 p_395->g_181 p_395->g_266 p_395->g_324 p_395->g_333 p_395->g_338 p_395->g_306.f6 p_395->g_364 p_395->g_377
 */
uint32_t  func_1(struct S3 * p_395)
{ /* block id: 4 */
    uint8_t l_7 = 248UL;
    uint64_t *l_362 = (void*)0;
    uint64_t *l_363 = &p_395->g_364[2][0];
    int8_t *l_372 = &p_395->g_274;
    int8_t **l_371 = &l_372;
    uint16_t l_375[10] = {65535UL,0x3C43L,0xA6CEL,0x3C43L,65535UL,65535UL,0x3C43L,0xA6CEL,0x3C43L,65535UL};
    int32_t *l_376 = &p_395->g_377;
    int i;
    (*l_376) &= ((((VECTOR(uint16_t, 2))(0UL, 0xB32AL)).odd >= (safe_mod_func_int64_t_s_s(func_4((p_395->l_comm_values[(safe_mod_func_uint32_t_u_u(p_395->tid, 11))] || l_7), p_395->g_8[4][2], p_395), (--(*l_363))))) , (safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(4294967295UL, 0x86733284L)).hi, l_7)), ((((*l_371) = &p_395->g_274) != (**p_395->g_326)) , (p_395->g_197.s5 , (safe_lshift_func_uint16_t_u_u(l_375[1], 7)))))));
    if ((atomic_inc(&p_395->g_atomic_input[2 * get_linear_group_id() + 1]) == 0))
    { /* block id: 152 */
        int16_t l_378 = 0x14E6L;
        uint16_t l_379 = 8UL;
        int32_t l_393 = 7L;
        int16_t l_394 = 1L;
        --l_379;
        for (l_379 = 0; (l_379 < 50); l_379 = safe_add_func_uint32_t_u_u(l_379, 9))
        { /* block id: 156 */
            uint32_t l_384 = 0UL;
            uint16_t l_387[3][3] = {{0x411AL,1UL,0x411AL},{0x411AL,1UL,0x411AL},{0x411AL,1UL,0x411AL}};
            int32_t l_391 = 1L;
            int32_t *l_390[5][5][8] = {{{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391}},{{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391}},{{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391}},{{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391}},{{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391},{&l_391,(void*)0,&l_391,(void*)0,&l_391,&l_391,(void*)0,&l_391}}};
            int32_t *l_392 = &l_391;
            int i, j, k;
            l_384++;
            l_387[1][2]++;
            l_392 = l_390[3][4][2];
        }
        l_394 = l_393;
        unsigned int result = 0;
        result += l_378;
        result += l_379;
        result += l_393;
        result += l_394;
        atomic_add(&p_395->g_special_values[2 * get_linear_group_id() + 1], result);
    }
    else
    { /* block id: 162 */
        (1 + 1);
    }
    return p_395->g_306.f3.f8;
}


/* ------------------------------------------ */
/* 
 * reads : p_395->l_comm_values p_395->g_comm_values p_395->g_50 p_395->g_48 p_395->g_8 p_395->g_121 p_395->g_137 p_395->g_142 p_395->g_147 p_395->g_87 p_395->g_166 p_395->g_143 p_395->g_191 p_395->g_197 p_395->g_199 p_395->g_101.f3 p_395->g_220 p_395->g_221 p_395->g_222 p_395->g_190 p_395->g_8.f0 p_395->g_233 p_395->g_266 p_395->g_234 p_395->g_296 p_395->g_299 p_395->g_298 p_395->g_306 p_395->g_83 p_395->g_118 p_395->g_324 p_395->g_326 p_395->g_333 p_395->g_101.f4 p_395->g_337
 * writes: p_395->g_48 p_395->g_50 p_395->g_83 p_395->g_87 p_395->g_118 p_395->g_49 p_395->g_137 p_395->g_143 p_395->g_101.f7 p_395->g_214 p_395->g_215 p_395->g_190 p_395->g_221 p_395->g_220 p_395->g_235 p_395->g_298 p_395->g_274 p_395->g_181 p_395->g_266 p_395->g_324 p_395->g_333 p_395->g_338 p_395->g_306.f6
 */
int64_t  func_4(int32_t  p_5, union U2  p_6, struct S3 * p_395)
{ /* block id: 5 */
    struct S0 **l_345 = &p_395->g_148;
    int32_t l_360 = 1L;
    for (p_6.f0 = 18; (p_6.f0 < 7); p_6.f0--)
    { /* block id: 8 */
        struct S0 **l_347 = &p_395->g_148;
        int8_t *l_353 = &p_395->g_274;
        int8_t **l_352[4] = {&l_353,&l_353,&l_353,&l_353};
        int8_t ***l_351 = &l_352[1];
        int32_t l_359[5] = {0x432EABEFL,0x432EABEFL,0x432EABEFL,0x432EABEFL,0x432EABEFL};
        int i;
        for (p_5 = 0; (p_5 > (-15)); p_5 = safe_sub_func_uint16_t_u_u(p_5, 7))
        { /* block id: 11 */
            struct S0 ***l_346[9][6][4] = {{{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345}},{{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345}},{{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345}},{{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345}},{{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345}},{{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345}},{{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345}},{{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345}},{{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345},{(void*)0,&l_345,&l_345,&l_345}}};
            uint32_t *l_348[10] = {&p_395->g_118,&p_395->g_118,&p_395->g_118,&p_395->g_118,&p_395->g_118,&p_395->g_118,&p_395->g_118,&p_395->g_118,&p_395->g_118,&p_395->g_118};
            int8_t ****l_354 = (void*)0;
            int8_t ****l_355 = &l_351;
            int16_t *l_358 = &p_395->g_337[0][0][0].f7;
            int32_t l_361[2][9][4] = {{{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL}},{{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL},{(-6L),0x2EB1299AL,0x59CE284FL,0x513BF5ABL}}};
            int i, j, k;
            p_395->g_338 = func_13(p_5, p_6.f0, p_395->l_comm_values[(safe_mod_func_uint32_t_u_u(p_395->tid, 11))], p_395);
            l_361[1][8][3] = (~(safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(p_395->g_337[0][0][0].f7, 0)), (safe_sub_func_int8_t_s_s((((p_5 , ((p_395->g_306.f6 = ((l_347 = l_345) != (void*)0)) || FAKE_DIVERGE(p_395->group_1_offset, get_group_id(1), 10))) && ((func_13(((safe_lshift_func_int16_t_s_u((((((*l_355) = l_351) != &p_395->g_324[0]) , (safe_mul_func_int8_t_s_s((FAKE_DIVERGE(p_395->local_2_offset, get_local_id(2), 10) == (((void*)0 != l_358) && (l_359[2] , l_359[1]))), l_360))) , l_361[0][5][2]), p_395->g_337[0][0][0].f5)) , (-9L)), p_5, l_360, p_395) , l_360) == p_395->g_306.f0)) && 0x5DE1L), p_5)))));
        }
        (*p_395->g_143) = 0x1063BA99L;
    }
    return l_360;
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_comm_values p_395->g_50 p_395->g_48 p_395->g_8 p_395->g_121 p_395->g_137 p_395->g_142 p_395->g_147 p_395->g_87 p_395->g_166 p_395->g_143 p_395->g_191 p_395->g_197 p_395->g_199 p_395->g_101.f3 p_395->g_220 p_395->g_221 p_395->g_222 p_395->g_190 p_395->g_8.f0 p_395->g_233 p_395->g_266 p_395->g_234 p_395->g_296 p_395->g_299 p_395->g_298 p_395->g_306 p_395->g_83 p_395->g_118 p_395->g_324 p_395->g_326 p_395->g_333 p_395->g_101.f4 p_395->g_337
 * writes: p_395->g_48 p_395->g_50 p_395->g_83 p_395->g_87 p_395->g_118 p_395->g_49 p_395->g_137 p_395->g_143 p_395->g_101.f7 p_395->g_214 p_395->g_215 p_395->g_190 p_395->g_221 p_395->g_220 p_395->g_235 p_395->g_298 p_395->g_274 p_395->g_181 p_395->g_266 p_395->g_324 p_395->g_333
 */
struct S0  func_13(int64_t  p_14, uint16_t  p_15, uint8_t  p_16, struct S3 * p_395)
{ /* block id: 12 */
    VECTOR(int16_t, 16) l_25 = (VECTOR(int16_t, 16))(0x149CL, (VECTOR(int16_t, 4))(0x149CL, (VECTOR(int16_t, 2))(0x149CL, 0x29C2L), 0x29C2L), 0x29C2L, 0x149CL, 0x29C2L, (VECTOR(int16_t, 2))(0x149CL, 0x29C2L), (VECTOR(int16_t, 2))(0x149CL, 0x29C2L), 0x149CL, 0x29C2L, 0x149CL, 0x29C2L);
    uint32_t l_42 = 0x12D49381L;
    int32_t l_314[5][2] = {{0x1160D823L,0x16C547C9L},{0x1160D823L,0x16C547C9L},{0x1160D823L,0x16C547C9L},{0x1160D823L,0x16C547C9L},{0x1160D823L,0x16C547C9L}};
    union U2 l_315[9] = {{0x56BBDED5L},{-1L},{0x56BBDED5L},{0x56BBDED5L},{-1L},{0x56BBDED5L},{0x56BBDED5L},{-1L},{0x56BBDED5L}};
    int i, j;
    l_314[1][1] = (safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((safe_div_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(l_25.s14f16367)).s1, (safe_div_func_int16_t_s_s((func_28((l_314[1][1] |= ((safe_sub_func_int16_t_s_s(func_36(p_395->g_comm_values[p_395->tid], l_42, func_43(p_395->g_comm_values[p_395->tid], l_25.s7, l_25.s3, p_395), (p_14 = p_16), p_15, p_395), l_42)) && p_14)), p_395->g_306.f4, l_315[4], l_25.sd, p_16, p_395) , p_395->g_101[3][3][2].f4), p_395->g_199.s6)))) != l_25.sd), 0x29649104L)) >= 0x7E42F7637BE341A8L), p_15)), 9UL));
    return p_395->g_337[0][0][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_118 p_395->g_298 p_395->g_266 p_395->g_143 p_395->g_324 p_395->g_326 p_395->g_333 p_395->g_306 p_395->g_83
 * writes: p_395->g_118 p_395->g_266 p_395->g_48 p_395->g_324 p_395->g_333
 */
uint8_t  func_28(uint32_t  p_29, uint32_t  p_30, union U2  p_31, int8_t  p_32, uint32_t  p_33, struct S3 * p_395)
{ /* block id: 125 */
    int32_t ***l_323 = &p_395->g_298;
    int32_t l_329 = 0x6C69BE24L;
    uint16_t *l_332 = &p_395->g_333;
    int32_t l_336 = (-1L);
    for (p_395->g_118 = 7; (p_395->g_118 == 14); ++p_395->g_118)
    { /* block id: 128 */
        int32_t ****l_318 = (void*)0;
        int32_t ****l_319 = (void*)0;
        int32_t ****l_320 = (void*)0;
        int32_t ***l_322 = &p_395->g_298;
        int32_t ****l_321 = &l_322;
        (*p_395->g_298) = (*p_395->g_298);
        (*p_395->g_143) = (((*l_321) = &p_395->g_298) == l_323);
    }
    (*p_395->g_326) = p_395->g_324[0];
    (**l_323) = ((p_30 >= ((safe_add_func_uint32_t_u_u((l_329 == FAKE_DIVERGE(p_395->group_1_offset, get_group_id(1), 10)), (safe_rshift_func_int8_t_s_u((GROUP_DIVERGE(0, 1) >= ((*l_332)++)), 3)))) && l_336)) , (p_395->g_306 , (void*)0));
    return p_395->g_83;
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_306 p_395->g_233 p_395->g_234 p_395->g_298 p_395->g_266 p_395->g_143 p_395->g_48 p_395->g_83 p_395->g_220 p_395->g_296
 * writes: p_395->g_181 p_395->g_137 p_395->g_220 p_395->g_235 p_395->g_143 p_395->g_298
 */
int16_t  func_36(int8_t  p_37, int32_t  p_38, int32_t  p_39, int64_t  p_40, int16_t  p_41, struct S3 * p_395)
{ /* block id: 120 */
    int64_t **l_307 = &p_395->g_181;
    int32_t **l_308 = &p_395->g_266;
    int64_t *l_311 = (void*)0;
    int32_t ***l_312 = &p_395->g_298;
    uint8_t l_313 = 249UL;
    (*l_312) = func_57((p_395->g_306 , (&p_40 != (((void*)0 == (*p_395->g_233)) , ((*l_307) = &p_40)))), l_308, (*p_395->g_298), (*p_395->g_298), (safe_div_func_int64_t_s_s(((+((l_311 == (void*)0) > (*p_395->g_143))) & p_39), 0x5CD3B6AD5CA4A8E8L)), p_395);
    return l_313;
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_comm_values p_395->g_50 p_395->g_48 p_395->g_8 p_395->g_121 p_395->g_137 p_395->g_142 p_395->g_147 p_395->g_87 p_395->g_166 p_395->g_143 p_395->g_191 p_395->g_197 p_395->g_199 p_395->g_101.f3 p_395->g_220 p_395->g_221 p_395->g_222 p_395->g_190 p_395->g_8.f0 p_395->g_233 p_395->g_266 p_395->g_234 p_395->g_296 p_395->g_299 p_395->g_298
 * writes: p_395->g_48 p_395->g_50 p_395->g_83 p_395->g_87 p_395->g_118 p_395->g_49 p_395->g_137 p_395->g_143 p_395->g_101.f7 p_395->g_214 p_395->g_215 p_395->g_190 p_395->g_221 p_395->g_220 p_395->g_235 p_395->g_298 p_395->g_274
 */
int32_t  func_43(int64_t  p_44, uint32_t  p_45, int8_t  p_46, struct S3 * p_395)
{ /* block id: 13 */
    int32_t *l_47 = &p_395->g_48[2][5];
    int32_t *l_51 = (void*)0;
    int32_t *l_53 = (void*)0;
    int32_t *l_54 = (void*)0;
    int16_t l_303 = 1L;
    int64_t **l_304 = &p_395->g_181;
    int32_t *l_305 = &p_395->g_83;
    p_395->g_50.z &= ((*l_47) = p_395->g_comm_values[p_395->tid]);
    for (p_44 = (-6); (p_44 != (-21)); p_44--)
    { /* block id: 18 */
        union U2 l_228 = {0x3B7261D1L};
        uint64_t l_237 = 0x22E93CFB2F08A162L;
        int32_t **l_265 = (void*)0;
        int8_t *l_302 = &p_395->g_274;
        (*p_395->g_299) = func_57(((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(p_44, (func_69((safe_add_func_uint64_t_u_u((func_76(p_395->g_48[5][8], (((VECTOR(uint64_t, 4))(8UL, 1UL, 0UL, 0x5F1D345D19045039L)).z > (&p_395->g_49 == &p_395->g_52)), p_395) <= (l_228 , ((safe_div_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((~(((p_395->g_233 == (void*)0) | p_395->g_220.s1) == p_44)), GROUP_DIVERGE(1, 1))), p_395->g_222.s9)) == p_395->g_191.s3))), (-1L))), &l_51, p_395->g_50.w, l_237, p_395) , p_45))), p_45)), 1)) ^ 1L), l_265, p_395->g_266, p_395->g_266, p_45, p_395);
        l_303 &= (safe_sub_func_int8_t_s_s(((*l_302) = p_44), ((*p_395->g_233) != (*p_395->g_233))));
        (*l_47) = ((void*)0 == l_304);
    }
    (*l_305) = ((*l_47) = ((*p_395->g_298) == l_54));
    return p_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_137 p_395->g_220 p_395->g_48 p_395->g_87 p_395->g_83 p_395->g_292 p_395->g_233 p_395->g_234 p_395->g_296
 * writes: p_395->g_137 p_395->g_220 p_395->g_292 p_395->g_235 p_395->g_143
 */
int32_t ** func_57(uint64_t  p_58, int32_t ** p_59, int32_t * p_60, int32_t * p_61, int64_t  p_62, struct S3 * p_395)
{ /* block id: 99 */
    int32_t *l_267 = &p_395->g_48[2][5];
    int32_t *l_268 = (void*)0;
    int32_t *l_269 = &p_395->g_48[2][5];
    int32_t *l_270 = &p_395->g_48[3][6];
    int32_t *l_271 = &p_395->g_87[1];
    int32_t l_272[2][7];
    int32_t *l_273[7][6] = {{&p_395->g_87[7],&p_395->g_48[5][0],&p_395->g_87[7],&p_395->g_87[7],&p_395->g_48[5][0],&p_395->g_87[7]},{&p_395->g_87[7],&p_395->g_48[5][0],&p_395->g_87[7],&p_395->g_87[7],&p_395->g_48[5][0],&p_395->g_87[7]},{&p_395->g_87[7],&p_395->g_48[5][0],&p_395->g_87[7],&p_395->g_87[7],&p_395->g_48[5][0],&p_395->g_87[7]},{&p_395->g_87[7],&p_395->g_48[5][0],&p_395->g_87[7],&p_395->g_87[7],&p_395->g_48[5][0],&p_395->g_87[7]},{&p_395->g_87[7],&p_395->g_48[5][0],&p_395->g_87[7],&p_395->g_87[7],&p_395->g_48[5][0],&p_395->g_87[7]},{&p_395->g_87[7],&p_395->g_48[5][0],&p_395->g_87[7],&p_395->g_87[7],&p_395->g_48[5][0],&p_395->g_87[7]},{&p_395->g_87[7],&p_395->g_48[5][0],&p_395->g_87[7],&p_395->g_87[7],&p_395->g_48[5][0],&p_395->g_87[7]}};
    uint16_t l_275 = 0UL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
            l_272[i][j] = (-3L);
    }
    ++l_275;
    for (p_395->g_137 = 14; (p_395->g_137 != 1); p_395->g_137--)
    { /* block id: 103 */
        VECTOR(uint8_t, 2) l_286 = (VECTOR(uint8_t, 2))(252UL, 255UL);
        VECTOR(int32_t, 8) l_287 = (VECTOR(int32_t, 8))(0x197C6EF2L, (VECTOR(int32_t, 4))(0x197C6EF2L, (VECTOR(int32_t, 2))(0x197C6EF2L, 1L), 1L), 1L, 0x197C6EF2L, 1L);
        union U2 l_290 = {-2L};
        int64_t *l_291 = &p_395->g_292;
        int32_t l_295[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int i;
        l_295[3] |= ((GROUP_DIVERGE(1, 1) == ((++p_395->g_220.s6) || (safe_mul_func_int16_t_s_s((*l_270), (safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(0x09L, ((VECTOR(int8_t, 2))((-1L), 0x44L)), (-1L))).odd, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_286.xyyy)).even))))).lo, FAKE_DIVERGE(p_395->local_0_offset, get_local_id(0), 10))))))) , ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(0x1CFA0F71L, 0L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))((!(-2L)), (-2L), 1L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_287.s3417442172575625)).se0)).xxxyyxxy)).s1663053641743025)).odd)), 2L, 0x4D4982FDL, (p_58 == ((+GROUP_DIVERGE(2, 1)) == (safe_add_func_int64_t_s_s((l_290 , (~(*l_271))), (((*l_291) ^= p_395->g_83) , (safe_rshift_func_int8_t_s_u(p_58, (!0x3BL)))))))), 0x60DCC9AEL, 1L)), ((VECTOR(int32_t, 16))(1L)), ((VECTOR(int32_t, 16))(9L))))).sbb9d)).lo))).lo);
    }
    (**p_395->g_233) = (void*)0;
    (*p_395->g_296) = &p_395->g_48[0][4];
    return &p_395->g_266;
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_166.f3.f7 p_395->g_199 p_395->g_179 p_395->g_48
 * writes: p_395->g_48
 */
union U2  func_69(uint32_t  p_70, int32_t ** p_71, uint32_t  p_72, uint32_t  p_73, struct S3 * p_395)
{ /* block id: 93 */
    int16_t l_242 = 0x66C8L;
    int32_t *l_251 = &p_395->g_87[1];
    VECTOR(uint8_t, 4) l_252 = (VECTOR(uint8_t, 4))(0xB6L, (VECTOR(uint8_t, 2))(0xB6L, 0UL), 0UL);
    int32_t l_255 = (-1L);
    int32_t *l_256 = &p_395->g_48[2][5];
    int32_t *l_257 = &p_395->g_87[6];
    int32_t *l_258 = &p_395->g_83;
    int32_t *l_259 = &p_395->g_83;
    int32_t *l_260[1];
    uint8_t l_261[5][4][7] = {{{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L},{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L},{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L},{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L}},{{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L},{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L},{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L},{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L}},{{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L},{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L},{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L},{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L}},{{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L},{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L},{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L},{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L}},{{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L},{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L},{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L},{0x2FL,0xE4L,0x54L,0xE4L,0x2FL,0x2FL,0xE4L}}};
    union U2 l_264 = {0x4F1E2E06L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_260[i] = (void*)0;
    (*l_256) |= (safe_lshift_func_int16_t_s_u((p_395->g_166.f3.f7 | (safe_sub_func_int64_t_s_s(l_242, (p_73 , (safe_add_func_int64_t_s_s(((safe_sub_func_int16_t_s_s((p_395->g_199.s8 && (safe_mul_func_int8_t_s_s(0x17L, (l_255 = (((safe_lshift_func_int8_t_s_u((&p_395->g_87[6] != (l_251 = (*p_71))), ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))(l_252.zywxwzxx)).s37, ((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 4))(0x72L, ((VECTOR(uint8_t, 2))(0x1CL, 0x2EL)), 252UL)).wxzywwxw, (uint8_t)((safe_mod_func_uint32_t_u_u((((p_72 > 0x9BL) , &l_242) != &l_242), p_395->g_179.s0)) , FAKE_DIVERGE(p_395->global_2_offset, get_global_id(2), 10))))).s05, ((VECTOR(uint8_t, 2))(248UL))))).odd)) && p_73) && p_70))))), 1UL)) & 3UL), l_242)))))), 3));
    l_261[0][3][4]--;
    return l_264;
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_8 p_395->g_121 p_395->g_48 p_395->g_137 p_395->g_142 p_395->g_147 p_395->g_comm_values p_395->g_87 p_395->l_comm_values p_395->g_166 p_395->g_143 p_395->g_179 p_395->g_181 p_395->g_50 p_395->g_191 p_395->g_197 p_395->g_199 p_395->g_101.f3 p_395->g_220 p_395->g_221 p_395->g_222 p_395->g_190 p_395->g_8.f0
 * writes: p_395->g_83 p_395->g_87 p_395->g_48 p_395->g_118 p_395->g_49 p_395->g_137 p_395->g_143 p_395->g_101.f7 p_395->g_181 p_395->g_190 p_395->g_214 p_395->g_215 p_395->g_221
 */
uint8_t  func_76(uint32_t  p_77, uint16_t  p_78, struct S3 * p_395)
{ /* block id: 19 */
    int32_t *l_96 = &p_395->g_87[2];
    struct S0 *l_100[2][5][1] = {{{&p_395->g_101[3][3][2]},{&p_395->g_101[3][3][2]},{&p_395->g_101[3][3][2]},{&p_395->g_101[3][3][2]},{&p_395->g_101[3][3][2]}},{{&p_395->g_101[3][3][2]},{&p_395->g_101[3][3][2]},{&p_395->g_101[3][3][2]},{&p_395->g_101[3][3][2]},{&p_395->g_101[3][3][2]}}};
    uint32_t l_136 = 0xA4AC0D40L;
    int32_t l_155[6] = {0x39D7BC26L,8L,0x39D7BC26L,0x39D7BC26L,8L,0x39D7BC26L};
    int32_t **l_167 = &p_395->g_143;
    VECTOR(uint16_t, 4) l_170 = (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x5820L), 0x5820L);
    uint64_t l_173 = 0x432B5EFD4EDF9DBFL;
    int16_t *l_178 = (void*)0;
    VECTOR(uint32_t, 16) l_180 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x2ADD3FD6L), 0x2ADD3FD6L), 0x2ADD3FD6L, 1UL, 0x2ADD3FD6L, (VECTOR(uint32_t, 2))(1UL, 0x2ADD3FD6L), (VECTOR(uint32_t, 2))(1UL, 0x2ADD3FD6L), 1UL, 0x2ADD3FD6L, 1UL, 0x2ADD3FD6L);
    VECTOR(int8_t, 4) l_192 = (VECTOR(int8_t, 4))(0x59L, (VECTOR(int8_t, 2))(0x59L, 0x63L), 0x63L);
    VECTOR(int8_t, 16) l_193 = (VECTOR(int8_t, 16))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), (-1L)), (-1L)), (-1L), (-5L), (-1L), (VECTOR(int8_t, 2))((-5L), (-1L)), (VECTOR(int8_t, 2))((-5L), (-1L)), (-5L), (-1L), (-5L), (-1L));
    VECTOR(int8_t, 2) l_194 = (VECTOR(int8_t, 2))(0x1AL, 0x74L);
    VECTOR(int8_t, 4) l_195 = (VECTOR(int8_t, 4))(0x57L, (VECTOR(int8_t, 2))(0x57L, 4L), 4L);
    VECTOR(int8_t, 4) l_196 = (VECTOR(int8_t, 4))(0x14L, (VECTOR(int8_t, 2))(0x14L, (-1L)), (-1L));
    VECTOR(int8_t, 4) l_198 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 9L), 9L);
    VECTOR(uint8_t, 2) l_200 = (VECTOR(uint8_t, 2))(4UL, 1UL);
    VECTOR(uint8_t, 16) l_201 = (VECTOR(uint8_t, 16))(0xB2L, (VECTOR(uint8_t, 4))(0xB2L, (VECTOR(uint8_t, 2))(0xB2L, 0x29L), 0x29L), 0x29L, 0xB2L, 0x29L, (VECTOR(uint8_t, 2))(0xB2L, 0x29L), (VECTOR(uint8_t, 2))(0xB2L, 0x29L), 0xB2L, 0x29L, 0xB2L, 0x29L);
    VECTOR(uint8_t, 2) l_202 = (VECTOR(uint8_t, 2))(1UL, 253UL);
    uint16_t *l_205 = (void*)0;
    uint16_t *l_206 = (void*)0;
    uint16_t *l_207[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint8_t, 8) l_223 = (VECTOR(uint8_t, 8))(0xF9L, (VECTOR(uint8_t, 4))(0xF9L, (VECTOR(uint8_t, 2))(0xF9L, 0UL), 0UL), 0UL, 0xF9L, 0UL);
    uint8_t *l_226[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_227 = (-4L);
    int i, j, k;
    for (p_78 = (-11); (p_78 >= 23); p_78++)
    { /* block id: 22 */
        VECTOR(int8_t, 4) l_99 = (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 4L), 4L);
        int32_t *l_104[10][5] = {{&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5]},{&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5]},{&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5]},{&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5]},{&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5]},{&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5]},{&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5]},{&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5]},{&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5]},{&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5],&p_395->g_48[0][5]}};
        struct S0 **l_144 = &l_100[0][0][0];
        int64_t l_161 = 0x18AA5284081ED5E9L;
        int32_t l_162 = 1L;
        uint32_t l_163 = 4294967287UL;
        int i, j;
        for (p_77 = 0; (p_77 < 41); ++p_77)
        { /* block id: 25 */
            int32_t *l_102 = &p_395->g_87[7];
            int32_t l_156 = 0x1F302E52L;
            int32_t l_159[7] = {8L,0x2FBE9AB3L,8L,8L,0x2FBE9AB3L,8L,8L};
            int i;
            for (p_395->g_83 = 0; (p_395->g_83 >= (-1)); p_395->g_83 = safe_sub_func_uint8_t_u_u(p_395->g_83, 3))
            { /* block id: 28 */
                int32_t l_157[3][6][8] = {{{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL},{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL},{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL},{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL},{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL},{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL}},{{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL},{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL},{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL},{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL},{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL},{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL}},{{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL},{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL},{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL},{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL},{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL},{(-8L),0L,7L,0x6EC6A9ADL,7L,0L,(-8L),0x3613173FL}}};
                int32_t l_158 = 0x6E2E2142L;
                int32_t l_160[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_160[i] = 0L;
                for (p_395->g_87[6] = (-19); (p_395->g_87[6] == 14); p_395->g_87[6]++)
                { /* block id: 31 */
                    uint32_t l_90 = 4294967295UL;
                    int32_t **l_103 = &l_102;
                    struct S0 **l_135 = &l_100[1][4][0];
                    if (l_90)
                        break;
                    (*l_135) = func_91(l_96, ((((safe_lshift_func_int8_t_s_u((~(!((VECTOR(int8_t, 2))(l_99.xy)).hi)), 1)) & 0x173BL) , l_100[0][0][0]) == (void*)0), p_395->g_8[4][2], (l_104[3][0] = ((*l_103) = l_102)), p_395);
                    return l_136;
                }
                (*l_96) = p_395->g_137;
                for (p_395->g_118 = (-11); (p_395->g_118 < 10); p_395->g_118++)
                { /* block id: 51 */
                    int16_t l_151 = 0x147CL;
                    p_395->g_49 = (void*)0;
                    (*l_102) = 6L;
                    for (p_395->g_137 = 0; (p_395->g_137 > (-25)); p_395->g_137 = safe_sub_func_uint8_t_u_u(p_395->g_137, 8))
                    { /* block id: 56 */
                        struct S0 ***l_145 = (void*)0;
                        struct S0 ***l_146 = &l_144;
                        int16_t *l_154 = &p_395->g_101[3][3][2].f7;
                        (*p_395->g_142) = l_102;
                        (*l_96) = ((0UL | ((((*l_146) = l_144) == p_395->g_147[0]) == ((l_151 != 0x69L) < ((*l_154) = (((p_395->g_comm_values[p_395->tid] >= 252UL) , (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 16))(abs(((VECTOR(uint64_t, 4))(p_395->g_87[2], (safe_lshift_func_int8_t_s_s((~0x14L), p_395->l_comm_values[(safe_mod_func_uint32_t_u_u(p_395->tid, 11))])), 0xBA4091520A11C632L, 0xEC8C5487940BFAE5L)).yxywzzzywxxwzzwx))).lo, ((VECTOR(uint64_t, 8))(0x47F40BF26BA33B8EL))))).hi, ((VECTOR(uint64_t, 4))(0xE4CC4E5DE65A9168L)), ((VECTOR(uint64_t, 4))(3UL))))).zxyxyyzz, ((VECTOR(uint64_t, 8))(1UL)), ((VECTOR(uint64_t, 8))(0xA055E4C580974543L))))).s27, ((VECTOR(uint64_t, 2))(4UL))))))).yxxy))).wwxyzzxw)).s31, ((VECTOR(uint64_t, 2))(0xD496808D468FBE2EL))))).xxxyxxyyxxyxyyxx)).lo)).s7157273470544620, ((VECTOR(uint64_t, 16))(0x0D2CAD3D6EBB9BF2L))))).s1d4a)).even)).lo || 1UL)) == p_77))))) & 0x6450L);
                    }
                    if ((*l_102))
                        continue;
                }
                l_163--;
            }
            (*l_102) |= (p_395->g_166 , (~0x32AE1FD4L));
        }
        (*l_96) = (&p_395->g_148 != l_144);
    }
    (*l_167) = &l_155[1];
    for (p_395->g_137 = 0; (p_395->g_137 != 29); p_395->g_137++)
    { /* block id: 73 */
        int32_t *l_171 = &p_395->g_48[2][4];
        int32_t *l_172 = &p_395->g_48[2][5];
        int64_t **l_182 = (void*)0;
        int64_t **l_183 = &p_395->g_181;
        uint32_t l_186 = 2UL;
        uint8_t *l_189 = &p_395->g_190;
        (**l_167) ^= 0x4AE886E2L;
        (*p_395->g_143) = ((**l_167) & ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 4))(l_170.yzyy)).xxyywxxxwxxxwxzx))).s08)).yyxyxyyx)).s5);
        l_173--;
        (*l_172) = (safe_mul_func_int16_t_s_s((*l_172), (((void*)0 == l_178) && ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_395->g_179.s0404)).wyyyzwywxzzyzyxw)).odd, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_180.sed)), 4294967295UL, 1UL)).xyzxxzyx))), p_395->g_166.f3.f6, 0x016306CEL, (((*l_183) = p_395->g_181) != ((safe_mul_func_int16_t_s_s(((**l_167) = p_395->g_50.z), (l_186 | ((safe_mod_func_int8_t_s_s((((*l_189) = p_77) > ((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 16))(0x4CL, p_395->g_comm_values[p_395->tid], 247UL, (*l_171), (*l_96), ((VECTOR(uint8_t, 2))(0UL)), FAKE_DIVERGE(p_395->global_1_offset, get_global_id(1), 10), ((VECTOR(uint8_t, 8))(255UL)))).odd, ((VECTOR(uint8_t, 8))(1UL))))).s4), 6UL)) == FAKE_DIVERGE(p_395->group_1_offset, get_group_id(1), 10))))) , (void*)0)), p_395->g_179.s7, p_77, 0x5DB8D7A7L, 0x219F3411L, 4294967295UL)).even)).s2062317431207056, ((VECTOR(uint32_t, 16))(0xC200120BL))))).s9359)).hi)))).xyyyyxyxxxxxxxyy, ((VECTOR(uint32_t, 16))(0xAF20C6C9L)), ((VECTOR(uint32_t, 16))(2UL))))).sf7)).odd)));
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_395->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 11)), permutations[(safe_mod_func_uint32_t_u_u((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(p_395->g_191.s5222)).odd))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_192.wy)).even, ((VECTOR(int8_t, 2))(0x35L, 0x60L)), 0x38L)), ((VECTOR(int8_t, 4))(p_77, ((VECTOR(int8_t, 2))(l_193.sfe)), 1L)), 5L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_194.xy)))).yyyyxxxyxyyxyxxx)).s92)), 0x1CL, 0x34L)), 0x56L)).s7d46, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(l_195.zyxzywyxyzzwyxyy)).s75b0)))))).zxyzxxyz, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(l_196.zz)), ((VECTOR(int8_t, 2))(p_395->g_197.s24))))).xxxxxyyy))))).s22, ((VECTOR(int8_t, 8))(l_198.wzwwxyzx)).s66))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_395->g_199.s8bf8)))).hi))))).hi <= (p_395->g_101[3][3][2].f3 > ((VECTOR(int16_t, 16))((((VECTOR(uint16_t, 8))(65530UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 16))(l_200.xyyyxxyxyyxyxyyy)).lo, ((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(l_201.sa008)).odd, ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_202.xyyy)), (safe_lshift_func_uint16_t_u_s(((**l_167) = (~p_395->g_48[4][0])), (((safe_div_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((p_395->g_215.x = (p_395->g_214[0] = (--p_78))), (safe_sub_func_int32_t_s_s((-1L), ((*l_167) == ((safe_sub_func_uint16_t_u_u(((((VECTOR(uint64_t, 8))(p_395->g_220.s10555320)).s0 ^ (-1L)) ^ ((p_395->g_221.s2 = (p_395->g_190 |= ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_395->g_221.s1267)), 0xDCL, 0x2DL, ((VECTOR(uint8_t, 2))(p_395->g_222.sb8)), ((VECTOR(uint8_t, 2))(l_223.s21)), 0x17L, 246UL, 0xB5L, ((*l_96) = (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 8))((~p_77), (l_226[8] != &p_395->g_190), 1L, ((VECTOR(int8_t, 4))(0x40L)), 0x13L)).s7, 6))), 255UL, 255UL)).s189c, ((VECTOR(uint8_t, 4))(250UL))))).zxxyzyzxzwyxzyyy, ((VECTOR(uint8_t, 16))(0x8FL))))).s9)) >= p_395->g_8[4][2].f0)), GROUP_DIVERGE(0, 1))) , &p_395->g_87[7])))))), p_395->g_220.s5)) , GROUP_DIVERGE(1, 1)) == p_77))), 5UL, 0x7FL, 1UL, ((VECTOR(uint8_t, 2))(0x7AL)), 0x05L, ((VECTOR(uint8_t, 4))(0xCEL)), 254UL)), ((VECTOR(uint8_t, 16))(0xCEL))))).sde, ((VECTOR(uint8_t, 2))(0x8DL))))).yyxyxxyy, ((VECTOR(uint8_t, 8))(0UL)))))))).s25)).xxyxxyyx)).s3436277717211666)).s53)))).xyxxxyxy)).lo)), FAKE_DIVERGE(p_395->local_0_offset, get_local_id(0), 10), 0xD81BL, 65533UL)).s2 > p_395->g_220.s0), 0x5C86L, 0x0697L, ((VECTOR(int16_t, 2))((-1L))), ((VECTOR(int16_t, 4))(0x35A8L)), p_395->g_222.s1, (-8L), (**l_167), 4L, 6L, 0L, 0x1C48L)).s3)), 10))][(safe_mod_func_uint32_t_u_u(p_395->tid, 11))]));
    return l_227;
}


/* ------------------------------------------ */
/* 
 * reads : p_395->g_106 p_395->l_comm_values p_395->g_87 p_395->g_121 p_395->g_48
 * writes: p_395->g_118 p_395->g_101.f7 p_395->g_106 p_395->g_48
 */
struct S0 * func_91(int32_t * p_92, uint8_t  p_93, union U2  p_94, int32_t * p_95, struct S3 * p_395)
{ /* block id: 35 */
    int32_t l_105 = 0L;
    int32_t l_109 = 0L;
    int64_t l_110 = 1L;
    int32_t l_115 = 8L;
    int16_t *l_119[7][10] = {{&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f7,(void*)0,&p_395->g_101[3][3][2].f6,(void*)0,&p_395->g_101[3][3][2].f7,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f7},{&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f7,(void*)0,&p_395->g_101[3][3][2].f6,(void*)0,&p_395->g_101[3][3][2].f7,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f7},{&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f7,(void*)0,&p_395->g_101[3][3][2].f6,(void*)0,&p_395->g_101[3][3][2].f7,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f7},{&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f7,(void*)0,&p_395->g_101[3][3][2].f6,(void*)0,&p_395->g_101[3][3][2].f7,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f7},{&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f7,(void*)0,&p_395->g_101[3][3][2].f6,(void*)0,&p_395->g_101[3][3][2].f7,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f7},{&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f7,(void*)0,&p_395->g_101[3][3][2].f6,(void*)0,&p_395->g_101[3][3][2].f7,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f7},{&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f7,(void*)0,&p_395->g_101[3][3][2].f6,(void*)0,&p_395->g_101[3][3][2].f7,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f6,&p_395->g_101[3][3][2].f7}};
    int64_t *l_120 = (void*)0;
    int32_t *l_122 = &p_395->g_48[2][5];
    int8_t l_123[8][10] = {{0x6CL,0x02L,0L,0x06L,0x02L,0x06L,0L,0x02L,0x6CL,0x6CL},{0x6CL,0x02L,0L,0x06L,0x02L,0x06L,0L,0x02L,0x6CL,0x6CL},{0x6CL,0x02L,0L,0x06L,0x02L,0x06L,0L,0x02L,0x6CL,0x6CL},{0x6CL,0x02L,0L,0x06L,0x02L,0x06L,0L,0x02L,0x6CL,0x6CL},{0x6CL,0x02L,0L,0x06L,0x02L,0x06L,0L,0x02L,0x6CL,0x6CL},{0x6CL,0x02L,0L,0x06L,0x02L,0x06L,0L,0x02L,0x6CL,0x6CL},{0x6CL,0x02L,0L,0x06L,0x02L,0x06L,0L,0x02L,0x6CL,0x6CL},{0x6CL,0x02L,0L,0x06L,0x02L,0x06L,0L,0x02L,0x6CL,0x6CL}};
    int32_t *l_124 = &p_395->g_48[2][0];
    int32_t *l_125 = &l_109;
    int32_t *l_126 = &p_395->g_48[5][6];
    int32_t *l_127 = (void*)0;
    int32_t *l_128 = &l_115;
    int32_t *l_129 = &p_395->g_48[2][5];
    int32_t *l_130 = &p_395->g_48[3][6];
    int32_t *l_131[8][9] = {{&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5],&l_115,&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5]},{&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5],&l_115,&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5]},{&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5],&l_115,&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5]},{&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5],&l_115,&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5]},{&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5],&l_115,&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5]},{&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5],&l_115,&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5]},{&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5],&l_115,&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5]},{&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5],&l_115,&l_115,&p_395->g_48[2][5],&p_395->g_48[1][3],&p_395->g_48[2][5]}};
    uint64_t l_132[8];
    int i, j;
    for (i = 0; i < 8; i++)
        l_132[i] = 0x1D0A50024F6DA58DL;
    (*l_122) ^= ((GROUP_DIVERGE(1, 1) , ((VECTOR(int64_t, 8))(l_105, ((VECTOR(int64_t, 2))(p_395->g_106.xz)), 0L, (p_395->g_106.y = (p_395->l_comm_values[(safe_mod_func_uint32_t_u_u(p_395->tid, 11))] , (safe_rshift_func_uint16_t_u_s((((l_110 &= (l_109 |= (l_105 &= (*p_95)))) || p_395->l_comm_values[(safe_mod_func_uint32_t_u_u(p_395->tid, 11))]) >= 18446744073709551615UL), (p_395->g_101[3][3][2].f7 = (safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((((((l_115 && p_94.f0) >= ((p_395->g_118 = (safe_lshift_func_int16_t_s_s(0x119EL, ((((void*)0 != &p_395->g_101[3][3][2]) < 0x4D75B2834994D0E7L) , (-7L))))) | l_115)) > 65528UL) | p_395->l_comm_values[(safe_mod_func_uint32_t_u_u(p_395->tid, 11))]) == l_115) ^ l_115), 0L)), 7))))))), ((VECTOR(int64_t, 2))(0x5C2E7BD33CEA4A79L)), (-6L))).s5) | p_395->g_121);
    l_132[4]--;
    return &p_395->g_101[3][3][2];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[11];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 11; i++)
            l_comm_values[i] = 1;
    struct S3 c_396;
    struct S3* p_395 = &c_396;
    struct S3 c_397 = {
        {{{-1L},{3L},{0x4924B541L}},{{-1L},{3L},{0x4924B541L}},{{-1L},{3L},{0x4924B541L}},{{-1L},{3L},{0x4924B541L}},{{-1L},{3L},{0x4924B541L}},{{-1L},{3L},{0x4924B541L}},{{-1L},{3L},{0x4924B541L}}}, // p_395->g_8
        {{0x08F98093L,3L,3L,0x08F98093L,0L,1L,1L,0L,0x08F98093L},{0x08F98093L,3L,3L,0x08F98093L,0L,1L,1L,0L,0x08F98093L},{0x08F98093L,3L,3L,0x08F98093L,0L,1L,1L,0L,0x08F98093L},{0x08F98093L,3L,3L,0x08F98093L,0L,1L,1L,0L,0x08F98093L},{0x08F98093L,3L,3L,0x08F98093L,0L,1L,1L,0L,0x08F98093L},{0x08F98093L,3L,3L,0x08F98093L,0L,1L,1L,0L,0x08F98093L}}, // p_395->g_48
        (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-8L)), (-8L)), // p_395->g_50
        (void*)0, // p_395->g_49
        (void*)0, // p_395->g_52
        (-1L), // p_395->g_83
        0x4EEEC855L, // p_395->g_86
        {0L,0L,0L,0L,0L,0L,0L,0L,0L}, // p_395->g_87
        {{{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}}},{{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}}},{{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}}},{{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}}},{{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}}},{{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}},{{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{0x354A90BBL,4294967289UL,-8L,1UL,0L,0x6112DD267AFBDFE8L,0L,0x7BECL,0x3046699CL},{4L,4294967289UL,0x32CFE06CL,0x9296E562L,0x5DC7DF63L,1L,0x64DFL,0x45D4L,7L}}}}, // p_395->g_101
        (VECTOR(int64_t, 4))(0x1EC5D866FAEDDA49L, (VECTOR(int64_t, 2))(0x1EC5D866FAEDDA49L, 0x1F153C6A96B58146L), 0x1F153C6A96B58146L), // p_395->g_106
        4294967295UL, // p_395->g_118
        1L, // p_395->g_121
        0x1B231F37L, // p_395->g_137
        &p_395->g_83, // p_395->g_143
        &p_395->g_143, // p_395->g_142
        &p_395->g_101[3][3][2], // p_395->g_148
        {&p_395->g_148,&p_395->g_148,&p_395->g_148}, // p_395->g_147
        {0x7C15CB5FL,0x59L,4294967286UL,{0x34185503L,4294967286UL,0x6AFCF35AL,0x17E0B46EL,1L,-1L,5L,0x1954L,0x47DD839CL},0xDF7FA71AL,0x16F1L,0x1FA9AA87L}, // p_395->g_166
        (VECTOR(uint32_t, 8))(0x2F10878EL, (VECTOR(uint32_t, 4))(0x2F10878EL, (VECTOR(uint32_t, 2))(0x2F10878EL, 4294967288UL), 4294967288UL), 4294967288UL, 0x2F10878EL, 4294967288UL), // p_395->g_179
        (void*)0, // p_395->g_181
        255UL, // p_395->g_190
        (VECTOR(int8_t, 8))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), (-8L)), (-8L)), (-8L), (-10L), (-8L)), // p_395->g_191
        (VECTOR(int8_t, 8))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x4DL), 0x4DL), 0x4DL, 4L, 0x4DL), // p_395->g_197
        (VECTOR(int8_t, 16))(0x4DL, (VECTOR(int8_t, 4))(0x4DL, (VECTOR(int8_t, 2))(0x4DL, 1L), 1L), 1L, 0x4DL, 1L, (VECTOR(int8_t, 2))(0x4DL, 1L), (VECTOR(int8_t, 2))(0x4DL, 1L), 0x4DL, 1L, 0x4DL, 1L), // p_395->g_199
        {0x58814E8AL,0x58814E8AL}, // p_395->g_214
        (VECTOR(uint8_t, 2))(0UL, 0x04L), // p_395->g_215
        (VECTOR(uint64_t, 8))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 9UL, 18446744073709551615UL), // p_395->g_220
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xBCL), 0xBCL), 0xBCL, 1UL, 0xBCL), // p_395->g_221
        (VECTOR(uint8_t, 16))(0x36L, (VECTOR(uint8_t, 4))(0x36L, (VECTOR(uint8_t, 2))(0x36L, 0x67L), 0x67L), 0x67L, 0x36L, 0x67L, (VECTOR(uint8_t, 2))(0x36L, 0x67L), (VECTOR(uint8_t, 2))(0x36L, 0x67L), 0x36L, 0x67L, 0x36L, 0x67L), // p_395->g_222
        {1L,0x96E82DC9L,0L,4294967294UL,0L,0x4EDC7A96BA0FE350L,0x0165L,8L,-1L}, // p_395->g_236
        &p_395->g_236, // p_395->g_235
        {&p_395->g_235,&p_395->g_235,&p_395->g_235,&p_395->g_235,&p_395->g_235,&p_395->g_235,&p_395->g_235}, // p_395->g_234
        &p_395->g_234[1], // p_395->g_233
        (void*)0, // p_395->g_266
        (-1L), // p_395->g_274
        4L, // p_395->g_292
        &p_395->g_143, // p_395->g_296
        &p_395->g_266, // p_395->g_298
        {{{&p_395->g_298},{&p_395->g_298},{&p_395->g_298},{&p_395->g_298},{&p_395->g_298}},{{&p_395->g_298},{&p_395->g_298},{&p_395->g_298},{&p_395->g_298},{&p_395->g_298}},{{&p_395->g_298},{&p_395->g_298},{&p_395->g_298},{&p_395->g_298},{&p_395->g_298}},{{&p_395->g_298},{&p_395->g_298},{&p_395->g_298},{&p_395->g_298},{&p_395->g_298}},{{&p_395->g_298},{&p_395->g_298},{&p_395->g_298},{&p_395->g_298},{&p_395->g_298}},{{&p_395->g_298},{&p_395->g_298},{&p_395->g_298},{&p_395->g_298},{&p_395->g_298}},{{&p_395->g_298},{&p_395->g_298},{&p_395->g_298},{&p_395->g_298},{&p_395->g_298}}}, // p_395->g_297
        &p_395->g_298, // p_395->g_299
        {1UL,255UL,4294967294UL,{0x5B47E454L,0xC38B53E1L,0x1F151CA1L,0xB9EDBCD4L,0x37710792L,-1L,1L,0x7960L,0x4165BA99L},4294967290UL,1L,0x9C17993CL}, // p_395->g_306
        (void*)0, // p_395->g_325
        {&p_395->g_325}, // p_395->g_324
        &p_395->g_324[0], // p_395->g_326
        0x2156L, // p_395->g_333
        {{{{8L,0UL,-10L,0xC044965DL,0x7B92988BL,1L,1L,-1L,0x521ED9DAL}},{{8L,0UL,-10L,0xC044965DL,0x7B92988BL,1L,1L,-1L,0x521ED9DAL}},{{8L,0UL,-10L,0xC044965DL,0x7B92988BL,1L,1L,-1L,0x521ED9DAL}},{{8L,0UL,-10L,0xC044965DL,0x7B92988BL,1L,1L,-1L,0x521ED9DAL}}}}, // p_395->g_337
        {1L,1UL,0x3BF3470EL,0x59121E00L,-6L,0L,-1L,-6L,0x5C97F864L}, // p_395->g_338
        {{0x70A3C57D527129BBL,0xD3039F23441F0301L,0xD3039F23441F0301L},{0x70A3C57D527129BBL,0xD3039F23441F0301L,0xD3039F23441F0301L},{0x70A3C57D527129BBL,0xD3039F23441F0301L,0xD3039F23441F0301L},{0x70A3C57D527129BBL,0xD3039F23441F0301L,0xD3039F23441F0301L},{0x70A3C57D527129BBL,0xD3039F23441F0301L,0xD3039F23441F0301L},{0x70A3C57D527129BBL,0xD3039F23441F0301L,0xD3039F23441F0301L}}, // p_395->g_364
        (-5L), // p_395->g_377
        0, // p_395->v_collective
        sequence_input[get_global_id(0)], // p_395->global_0_offset
        sequence_input[get_global_id(1)], // p_395->global_1_offset
        sequence_input[get_global_id(2)], // p_395->global_2_offset
        sequence_input[get_local_id(0)], // p_395->local_0_offset
        sequence_input[get_local_id(1)], // p_395->local_1_offset
        sequence_input[get_local_id(2)], // p_395->local_2_offset
        sequence_input[get_group_id(0)], // p_395->group_0_offset
        sequence_input[get_group_id(1)], // p_395->group_1_offset
        sequence_input[get_group_id(2)], // p_395->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 11)), permutations[0][get_linear_local_id()])), // p_395->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_396 = c_397;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_395);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_395->g_8[i][j].f0, "p_395->g_8[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_395->g_48[i][j], "p_395->g_48[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_395->g_50.x, "p_395->g_50.x", print_hash_value);
    transparent_crc(p_395->g_50.y, "p_395->g_50.y", print_hash_value);
    transparent_crc(p_395->g_50.z, "p_395->g_50.z", print_hash_value);
    transparent_crc(p_395->g_50.w, "p_395->g_50.w", print_hash_value);
    transparent_crc(p_395->g_83, "p_395->g_83", print_hash_value);
    transparent_crc(p_395->g_86, "p_395->g_86", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_395->g_87[i], "p_395->g_87[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_395->g_101[i][j][k].f0, "p_395->g_101[i][j][k].f0", print_hash_value);
                transparent_crc(p_395->g_101[i][j][k].f1, "p_395->g_101[i][j][k].f1", print_hash_value);
                transparent_crc(p_395->g_101[i][j][k].f2, "p_395->g_101[i][j][k].f2", print_hash_value);
                transparent_crc(p_395->g_101[i][j][k].f3, "p_395->g_101[i][j][k].f3", print_hash_value);
                transparent_crc(p_395->g_101[i][j][k].f4, "p_395->g_101[i][j][k].f4", print_hash_value);
                transparent_crc(p_395->g_101[i][j][k].f5, "p_395->g_101[i][j][k].f5", print_hash_value);
                transparent_crc(p_395->g_101[i][j][k].f6, "p_395->g_101[i][j][k].f6", print_hash_value);
                transparent_crc(p_395->g_101[i][j][k].f7, "p_395->g_101[i][j][k].f7", print_hash_value);
                transparent_crc(p_395->g_101[i][j][k].f8, "p_395->g_101[i][j][k].f8", print_hash_value);

            }
        }
    }
    transparent_crc(p_395->g_106.x, "p_395->g_106.x", print_hash_value);
    transparent_crc(p_395->g_106.y, "p_395->g_106.y", print_hash_value);
    transparent_crc(p_395->g_106.z, "p_395->g_106.z", print_hash_value);
    transparent_crc(p_395->g_106.w, "p_395->g_106.w", print_hash_value);
    transparent_crc(p_395->g_118, "p_395->g_118", print_hash_value);
    transparent_crc(p_395->g_121, "p_395->g_121", print_hash_value);
    transparent_crc(p_395->g_137, "p_395->g_137", print_hash_value);
    transparent_crc(p_395->g_166.f0, "p_395->g_166.f0", print_hash_value);
    transparent_crc(p_395->g_166.f1, "p_395->g_166.f1", print_hash_value);
    transparent_crc(p_395->g_166.f2, "p_395->g_166.f2", print_hash_value);
    transparent_crc(p_395->g_166.f3.f0, "p_395->g_166.f3.f0", print_hash_value);
    transparent_crc(p_395->g_166.f3.f1, "p_395->g_166.f3.f1", print_hash_value);
    transparent_crc(p_395->g_166.f3.f2, "p_395->g_166.f3.f2", print_hash_value);
    transparent_crc(p_395->g_166.f3.f3, "p_395->g_166.f3.f3", print_hash_value);
    transparent_crc(p_395->g_166.f3.f4, "p_395->g_166.f3.f4", print_hash_value);
    transparent_crc(p_395->g_166.f3.f5, "p_395->g_166.f3.f5", print_hash_value);
    transparent_crc(p_395->g_166.f3.f6, "p_395->g_166.f3.f6", print_hash_value);
    transparent_crc(p_395->g_166.f3.f7, "p_395->g_166.f3.f7", print_hash_value);
    transparent_crc(p_395->g_166.f3.f8, "p_395->g_166.f3.f8", print_hash_value);
    transparent_crc(p_395->g_166.f4, "p_395->g_166.f4", print_hash_value);
    transparent_crc(p_395->g_166.f5, "p_395->g_166.f5", print_hash_value);
    transparent_crc(p_395->g_166.f6, "p_395->g_166.f6", print_hash_value);
    transparent_crc(p_395->g_179.s0, "p_395->g_179.s0", print_hash_value);
    transparent_crc(p_395->g_179.s1, "p_395->g_179.s1", print_hash_value);
    transparent_crc(p_395->g_179.s2, "p_395->g_179.s2", print_hash_value);
    transparent_crc(p_395->g_179.s3, "p_395->g_179.s3", print_hash_value);
    transparent_crc(p_395->g_179.s4, "p_395->g_179.s4", print_hash_value);
    transparent_crc(p_395->g_179.s5, "p_395->g_179.s5", print_hash_value);
    transparent_crc(p_395->g_179.s6, "p_395->g_179.s6", print_hash_value);
    transparent_crc(p_395->g_179.s7, "p_395->g_179.s7", print_hash_value);
    transparent_crc(p_395->g_190, "p_395->g_190", print_hash_value);
    transparent_crc(p_395->g_191.s0, "p_395->g_191.s0", print_hash_value);
    transparent_crc(p_395->g_191.s1, "p_395->g_191.s1", print_hash_value);
    transparent_crc(p_395->g_191.s2, "p_395->g_191.s2", print_hash_value);
    transparent_crc(p_395->g_191.s3, "p_395->g_191.s3", print_hash_value);
    transparent_crc(p_395->g_191.s4, "p_395->g_191.s4", print_hash_value);
    transparent_crc(p_395->g_191.s5, "p_395->g_191.s5", print_hash_value);
    transparent_crc(p_395->g_191.s6, "p_395->g_191.s6", print_hash_value);
    transparent_crc(p_395->g_191.s7, "p_395->g_191.s7", print_hash_value);
    transparent_crc(p_395->g_197.s0, "p_395->g_197.s0", print_hash_value);
    transparent_crc(p_395->g_197.s1, "p_395->g_197.s1", print_hash_value);
    transparent_crc(p_395->g_197.s2, "p_395->g_197.s2", print_hash_value);
    transparent_crc(p_395->g_197.s3, "p_395->g_197.s3", print_hash_value);
    transparent_crc(p_395->g_197.s4, "p_395->g_197.s4", print_hash_value);
    transparent_crc(p_395->g_197.s5, "p_395->g_197.s5", print_hash_value);
    transparent_crc(p_395->g_197.s6, "p_395->g_197.s6", print_hash_value);
    transparent_crc(p_395->g_197.s7, "p_395->g_197.s7", print_hash_value);
    transparent_crc(p_395->g_199.s0, "p_395->g_199.s0", print_hash_value);
    transparent_crc(p_395->g_199.s1, "p_395->g_199.s1", print_hash_value);
    transparent_crc(p_395->g_199.s2, "p_395->g_199.s2", print_hash_value);
    transparent_crc(p_395->g_199.s3, "p_395->g_199.s3", print_hash_value);
    transparent_crc(p_395->g_199.s4, "p_395->g_199.s4", print_hash_value);
    transparent_crc(p_395->g_199.s5, "p_395->g_199.s5", print_hash_value);
    transparent_crc(p_395->g_199.s6, "p_395->g_199.s6", print_hash_value);
    transparent_crc(p_395->g_199.s7, "p_395->g_199.s7", print_hash_value);
    transparent_crc(p_395->g_199.s8, "p_395->g_199.s8", print_hash_value);
    transparent_crc(p_395->g_199.s9, "p_395->g_199.s9", print_hash_value);
    transparent_crc(p_395->g_199.sa, "p_395->g_199.sa", print_hash_value);
    transparent_crc(p_395->g_199.sb, "p_395->g_199.sb", print_hash_value);
    transparent_crc(p_395->g_199.sc, "p_395->g_199.sc", print_hash_value);
    transparent_crc(p_395->g_199.sd, "p_395->g_199.sd", print_hash_value);
    transparent_crc(p_395->g_199.se, "p_395->g_199.se", print_hash_value);
    transparent_crc(p_395->g_199.sf, "p_395->g_199.sf", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_395->g_214[i], "p_395->g_214[i]", print_hash_value);

    }
    transparent_crc(p_395->g_215.x, "p_395->g_215.x", print_hash_value);
    transparent_crc(p_395->g_215.y, "p_395->g_215.y", print_hash_value);
    transparent_crc(p_395->g_220.s0, "p_395->g_220.s0", print_hash_value);
    transparent_crc(p_395->g_220.s1, "p_395->g_220.s1", print_hash_value);
    transparent_crc(p_395->g_220.s2, "p_395->g_220.s2", print_hash_value);
    transparent_crc(p_395->g_220.s3, "p_395->g_220.s3", print_hash_value);
    transparent_crc(p_395->g_220.s4, "p_395->g_220.s4", print_hash_value);
    transparent_crc(p_395->g_220.s5, "p_395->g_220.s5", print_hash_value);
    transparent_crc(p_395->g_220.s6, "p_395->g_220.s6", print_hash_value);
    transparent_crc(p_395->g_220.s7, "p_395->g_220.s7", print_hash_value);
    transparent_crc(p_395->g_221.s0, "p_395->g_221.s0", print_hash_value);
    transparent_crc(p_395->g_221.s1, "p_395->g_221.s1", print_hash_value);
    transparent_crc(p_395->g_221.s2, "p_395->g_221.s2", print_hash_value);
    transparent_crc(p_395->g_221.s3, "p_395->g_221.s3", print_hash_value);
    transparent_crc(p_395->g_221.s4, "p_395->g_221.s4", print_hash_value);
    transparent_crc(p_395->g_221.s5, "p_395->g_221.s5", print_hash_value);
    transparent_crc(p_395->g_221.s6, "p_395->g_221.s6", print_hash_value);
    transparent_crc(p_395->g_221.s7, "p_395->g_221.s7", print_hash_value);
    transparent_crc(p_395->g_222.s0, "p_395->g_222.s0", print_hash_value);
    transparent_crc(p_395->g_222.s1, "p_395->g_222.s1", print_hash_value);
    transparent_crc(p_395->g_222.s2, "p_395->g_222.s2", print_hash_value);
    transparent_crc(p_395->g_222.s3, "p_395->g_222.s3", print_hash_value);
    transparent_crc(p_395->g_222.s4, "p_395->g_222.s4", print_hash_value);
    transparent_crc(p_395->g_222.s5, "p_395->g_222.s5", print_hash_value);
    transparent_crc(p_395->g_222.s6, "p_395->g_222.s6", print_hash_value);
    transparent_crc(p_395->g_222.s7, "p_395->g_222.s7", print_hash_value);
    transparent_crc(p_395->g_222.s8, "p_395->g_222.s8", print_hash_value);
    transparent_crc(p_395->g_222.s9, "p_395->g_222.s9", print_hash_value);
    transparent_crc(p_395->g_222.sa, "p_395->g_222.sa", print_hash_value);
    transparent_crc(p_395->g_222.sb, "p_395->g_222.sb", print_hash_value);
    transparent_crc(p_395->g_222.sc, "p_395->g_222.sc", print_hash_value);
    transparent_crc(p_395->g_222.sd, "p_395->g_222.sd", print_hash_value);
    transparent_crc(p_395->g_222.se, "p_395->g_222.se", print_hash_value);
    transparent_crc(p_395->g_222.sf, "p_395->g_222.sf", print_hash_value);
    transparent_crc(p_395->g_236.f0, "p_395->g_236.f0", print_hash_value);
    transparent_crc(p_395->g_236.f1, "p_395->g_236.f1", print_hash_value);
    transparent_crc(p_395->g_236.f2, "p_395->g_236.f2", print_hash_value);
    transparent_crc(p_395->g_236.f3, "p_395->g_236.f3", print_hash_value);
    transparent_crc(p_395->g_236.f4, "p_395->g_236.f4", print_hash_value);
    transparent_crc(p_395->g_236.f5, "p_395->g_236.f5", print_hash_value);
    transparent_crc(p_395->g_236.f6, "p_395->g_236.f6", print_hash_value);
    transparent_crc(p_395->g_236.f7, "p_395->g_236.f7", print_hash_value);
    transparent_crc(p_395->g_236.f8, "p_395->g_236.f8", print_hash_value);
    transparent_crc(p_395->g_274, "p_395->g_274", print_hash_value);
    transparent_crc(p_395->g_292, "p_395->g_292", print_hash_value);
    transparent_crc(p_395->g_306.f0, "p_395->g_306.f0", print_hash_value);
    transparent_crc(p_395->g_306.f1, "p_395->g_306.f1", print_hash_value);
    transparent_crc(p_395->g_306.f2, "p_395->g_306.f2", print_hash_value);
    transparent_crc(p_395->g_306.f3.f0, "p_395->g_306.f3.f0", print_hash_value);
    transparent_crc(p_395->g_306.f3.f1, "p_395->g_306.f3.f1", print_hash_value);
    transparent_crc(p_395->g_306.f3.f2, "p_395->g_306.f3.f2", print_hash_value);
    transparent_crc(p_395->g_306.f3.f3, "p_395->g_306.f3.f3", print_hash_value);
    transparent_crc(p_395->g_306.f3.f4, "p_395->g_306.f3.f4", print_hash_value);
    transparent_crc(p_395->g_306.f3.f5, "p_395->g_306.f3.f5", print_hash_value);
    transparent_crc(p_395->g_306.f3.f6, "p_395->g_306.f3.f6", print_hash_value);
    transparent_crc(p_395->g_306.f3.f7, "p_395->g_306.f3.f7", print_hash_value);
    transparent_crc(p_395->g_306.f3.f8, "p_395->g_306.f3.f8", print_hash_value);
    transparent_crc(p_395->g_306.f4, "p_395->g_306.f4", print_hash_value);
    transparent_crc(p_395->g_306.f5, "p_395->g_306.f5", print_hash_value);
    transparent_crc(p_395->g_306.f6, "p_395->g_306.f6", print_hash_value);
    transparent_crc(p_395->g_333, "p_395->g_333", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_395->g_337[i][j][k].f0, "p_395->g_337[i][j][k].f0", print_hash_value);
                transparent_crc(p_395->g_337[i][j][k].f1, "p_395->g_337[i][j][k].f1", print_hash_value);
                transparent_crc(p_395->g_337[i][j][k].f2, "p_395->g_337[i][j][k].f2", print_hash_value);
                transparent_crc(p_395->g_337[i][j][k].f3, "p_395->g_337[i][j][k].f3", print_hash_value);
                transparent_crc(p_395->g_337[i][j][k].f4, "p_395->g_337[i][j][k].f4", print_hash_value);
                transparent_crc(p_395->g_337[i][j][k].f5, "p_395->g_337[i][j][k].f5", print_hash_value);
                transparent_crc(p_395->g_337[i][j][k].f6, "p_395->g_337[i][j][k].f6", print_hash_value);
                transparent_crc(p_395->g_337[i][j][k].f7, "p_395->g_337[i][j][k].f7", print_hash_value);
                transparent_crc(p_395->g_337[i][j][k].f8, "p_395->g_337[i][j][k].f8", print_hash_value);

            }
        }
    }
    transparent_crc(p_395->g_338.f0, "p_395->g_338.f0", print_hash_value);
    transparent_crc(p_395->g_338.f1, "p_395->g_338.f1", print_hash_value);
    transparent_crc(p_395->g_338.f2, "p_395->g_338.f2", print_hash_value);
    transparent_crc(p_395->g_338.f3, "p_395->g_338.f3", print_hash_value);
    transparent_crc(p_395->g_338.f4, "p_395->g_338.f4", print_hash_value);
    transparent_crc(p_395->g_338.f5, "p_395->g_338.f5", print_hash_value);
    transparent_crc(p_395->g_338.f6, "p_395->g_338.f6", print_hash_value);
    transparent_crc(p_395->g_338.f7, "p_395->g_338.f7", print_hash_value);
    transparent_crc(p_395->g_338.f8, "p_395->g_338.f8", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_395->g_364[i][j], "p_395->g_364[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_395->g_377, "p_395->g_377", print_hash_value);
    transparent_crc(p_395->v_collective, "p_395->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 2; i++)
            transparent_crc(p_395->g_special_values[i + 2 * get_linear_group_id()], "p_395->g_special_values[i + 2 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_395->l_comm_values[get_linear_local_id()], "p_395->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_395->g_comm_values[get_linear_group_id() * 11 + get_linear_local_id()], "p_395->g_comm_values[get_linear_group_id() * 11 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
