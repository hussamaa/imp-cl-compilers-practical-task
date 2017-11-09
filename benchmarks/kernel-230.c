// --atomics 39 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 43,49,3 -l 43,1,1
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

__constant uint32_t permutations[10][43] = {
{29,25,40,6,36,30,23,11,22,31,19,27,3,21,20,1,10,0,5,41,2,18,42,35,7,13,4,37,28,39,12,32,38,33,14,24,26,9,17,15,8,34,16}, // permutation 0
{39,0,40,2,4,19,3,10,11,5,23,13,24,9,28,17,8,38,16,42,1,21,31,35,30,34,32,36,20,29,14,27,37,33,7,25,18,6,41,15,26,12,22}, // permutation 1
{10,0,15,25,27,19,20,1,11,26,3,5,34,22,9,30,13,35,36,40,14,28,18,39,6,23,7,17,21,4,29,38,12,2,41,24,42,37,33,31,16,32,8}, // permutation 2
{34,17,23,41,18,11,33,37,8,16,35,7,32,0,36,24,13,15,30,22,2,42,39,3,31,21,9,14,4,27,28,10,6,19,25,12,38,40,1,20,26,5,29}, // permutation 3
{15,0,11,36,39,13,4,5,17,7,25,26,29,41,23,12,1,35,32,8,34,3,6,9,19,38,10,2,40,42,33,24,20,27,28,16,21,31,37,14,30,18,22}, // permutation 4
{28,20,21,38,24,30,6,5,3,14,1,19,17,35,25,2,9,13,0,7,40,11,41,22,16,8,26,37,23,39,36,32,34,42,10,29,18,31,12,4,33,27,15}, // permutation 5
{13,40,42,31,14,34,22,41,21,12,8,35,19,33,24,2,0,9,10,28,39,26,11,27,20,16,29,30,7,36,32,1,23,3,25,38,37,6,18,5,15,4,17}, // permutation 6
{12,30,32,4,25,34,16,21,5,22,35,40,28,26,41,39,37,10,24,38,8,33,13,3,17,29,42,27,6,1,23,11,9,19,15,18,0,2,14,36,31,7,20}, // permutation 7
{5,16,21,36,31,33,20,37,14,41,11,38,22,12,17,1,4,28,9,32,2,34,6,10,7,24,19,30,29,42,39,27,40,3,23,26,13,25,15,18,8,35,0}, // permutation 8
{9,11,42,13,38,37,8,12,4,15,14,2,34,35,6,31,24,0,39,40,26,16,20,33,30,7,41,19,17,18,1,32,36,22,29,27,10,28,21,23,25,5,3} // permutation 9
};

// Seed: 2873783896

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint8_t  f0;
   uint8_t  f1;
};

struct S1 {
   int64_t  f0;
   volatile uint32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
};

struct S2 {
    int32_t g_18;
    volatile int32_t g_19;
    volatile VECTOR(uint64_t, 8) g_25;
    int32_t *g_63;
    int32_t **g_62[3][1];
    int32_t ** volatile g_88[2][8][8];
    struct S0 g_96;
    VECTOR(int16_t, 8) g_110;
    uint64_t g_113;
    uint16_t g_115;
    volatile struct S1 g_116;
    volatile struct S1 * volatile g_117;
    volatile VECTOR(int64_t, 8) g_127;
    int16_t g_137;
    int32_t g_150;
    int32_t *g_149[5];
    volatile VECTOR(int8_t, 2) g_170;
    VECTOR(uint64_t, 4) g_181;
    volatile VECTOR(uint64_t, 16) g_183;
    VECTOR(uint64_t, 2) g_185;
    volatile VECTOR(uint64_t, 2) g_186;
    VECTOR(uint32_t, 2) g_218;
    VECTOR(int16_t, 2) g_226;
    volatile VECTOR(int16_t, 4) g_227;
    int32_t ** volatile g_233[3];
    volatile struct S1 g_261;
    volatile struct S1 g_273;
    volatile struct S1 * volatile g_274;
    volatile VECTOR(uint16_t, 4) g_286;
    VECTOR(uint16_t, 16) g_287;
    int32_t g_299[2];
    struct S1 g_310;
    struct S1 *g_311;
    uint16_t g_323;
    VECTOR(uint32_t, 16) g_330;
    VECTOR(uint32_t, 4) g_331;
    VECTOR(uint32_t, 8) g_334;
    struct S1 **g_358;
    VECTOR(int64_t, 8) g_359;
    volatile uint8_t g_364;
    volatile uint8_t *g_363;
    int16_t g_368;
    int32_t ** volatile g_372;
    volatile struct S1 g_377;
    struct S0 * volatile g_378[9];
    volatile VECTOR(int32_t, 8) g_405;
    VECTOR(uint8_t, 4) g_408;
    struct S0 g_419;
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
struct S0  func_1(struct S2 * p_420);
uint8_t  func_7(int32_t  p_8, struct S2 * p_420);
int32_t * func_9(int32_t * p_10, struct S2 * p_420);
int32_t * func_11(int32_t * p_12, uint32_t  p_13, int32_t * p_14, int32_t * p_15, int32_t * p_16, struct S2 * p_420);
uint64_t  func_20(int32_t * p_21, int32_t * p_22, int32_t * p_23, struct S2 * p_420);
int32_t * func_26(int32_t * p_27, uint32_t  p_28, int32_t * p_29, uint64_t  p_30, int32_t * p_31, struct S2 * p_420);
int32_t * func_32(int8_t  p_33, uint16_t  p_34, int32_t * p_35, int32_t * p_36, struct S0  p_37, struct S2 * p_420);
uint64_t  func_40(int32_t * p_41, uint64_t  p_42, struct S2 * p_420);
int32_t * func_43(int32_t  p_44, uint32_t  p_45, int32_t * p_46, struct S2 * p_420);
int32_t * func_47(int32_t * p_48, int32_t * p_49, int16_t  p_50, uint16_t  p_51, struct S2 * p_420);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_420->g_comm_values p_420->l_comm_values p_420->g_19 p_420->g_25 p_420->g_18 p_420->g_63 p_420->g_96 p_420->g_110 p_420->g_116 p_420->g_117 p_420->g_127 p_420->g_149 p_420->g_170 p_420->g_113 p_420->g_181 p_420->g_183 p_420->g_185 p_420->g_186 p_420->g_137 p_420->g_150 p_420->g_218 p_420->g_226 p_420->g_227 p_420->g_115 p_420->g_261 p_420->g_273 p_420->g_274 p_420->g_286 p_420->g_287 p_420->g_299 p_420->g_323 p_420->g_330 p_420->g_331 p_420->g_310.f0 p_420->g_310.f3 p_420->g_334 p_420->g_359 p_420->g_363 p_420->g_372 p_420->g_377 p_420->g_405 p_420->g_408 p_420->g_364 p_420->g_419
 * writes: p_420->g_62 p_420->g_63 p_420->g_113 p_420->g_115 p_420->g_116 p_420->g_comm_values p_420->g_137 p_420->g_18 p_420->g_96 p_420->g_110 p_420->g_150 p_420->g_149 p_420->g_273 p_420->g_299 p_420->g_311 p_420->g_334 p_420->g_358 p_420->g_368 p_420->g_310.f3
 */
struct S0  func_1(struct S2 * p_420)
{ /* block id: 4 */
    VECTOR(uint8_t, 8) l_6 = (VECTOR(uint8_t, 8))(8UL, (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0x5BL), 0x5BL), 0x5BL, 8UL, 0x5BL);
    VECTOR(uint16_t, 2) l_285 = (VECTOR(uint16_t, 2))(0xF8FBL, 1UL);
    VECTOR(uint8_t, 8) l_296 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xEAL), 0xEAL), 0xEAL, 0UL, 0xEAL);
    int64_t l_297 = 1L;
    int32_t *l_298[3][5] = {{&p_420->g_299[0],&p_420->g_299[0],&p_420->g_299[0],&p_420->g_299[0],&p_420->g_299[0]},{&p_420->g_299[0],&p_420->g_299[0],&p_420->g_299[0],&p_420->g_299[0],&p_420->g_299[0]},{&p_420->g_299[0],&p_420->g_299[0],&p_420->g_299[0],&p_420->g_299[0],&p_420->g_299[0]}};
    int32_t l_304 = 0x48E3FE83L;
    struct S1 *l_307 = (void*)0;
    struct S1 **l_308 = &l_307;
    struct S1 *l_309 = &p_420->g_310;
    VECTOR(int32_t, 4) l_312 = (VECTOR(int32_t, 4))(0x237A56C9L, (VECTOR(int32_t, 2))(0x237A56C9L, 0L), 0L);
    int8_t l_313 = 0L;
    uint64_t *l_345 = &p_420->g_113;
    uint32_t l_346[4][8][4] = {{{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL}},{{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL}},{{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL}},{{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL},{0xCD176FABL,0x7482EF7BL,0xD532E8A6L,1UL}}};
    struct S0 l_352 = {0x52L,0UL};
    struct S1 ***l_357[7] = {(void*)0,&l_308,(void*)0,(void*)0,&l_308,(void*)0,(void*)0};
    int16_t *l_360 = &p_420->g_137;
    uint8_t l_365 = 0xAAL;
    uint8_t l_366 = 0xABL;
    int8_t *l_367 = (void*)0;
    VECTOR(uint32_t, 8) l_374 = (VECTOR(uint32_t, 8))(0x44498443L, (VECTOR(uint32_t, 4))(0x44498443L, (VECTOR(uint32_t, 2))(0x44498443L, 0xE01247C2L), 0xE01247C2L), 0xE01247C2L, 0x44498443L, 0xE01247C2L);
    VECTOR(int8_t, 2) l_412 = (VECTOR(int8_t, 2))(0x5CL, 9L);
    uint64_t l_417 = 18446744073709551615UL;
    int i, j, k;
    p_420->g_299[1] &= (safe_rshift_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((p_420->g_comm_values[p_420->tid] , ((VECTOR(uint16_t, 8))(65535UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0xAE64L, 65531UL)).xxxyxxyx)).hi)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 4))(254UL, ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(246UL, 254UL)), 0UL, 0UL)).even, ((VECTOR(uint8_t, 16))(l_6.s7366763732441243)).sdc))), 0xCDL)).odd, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(0xB0L, 255UL, (~func_7(l_6.s3, p_420)), ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 2))(0x48L, 0xFDL)).xyxx, (uint8_t)((((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_285.xxyx)).even)).yyyxxxxyxxyxxxxx)).lo)).even, ((VECTOR(uint16_t, 8))(0x94C7L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_420->g_286.yx)).xxyy)), ((VECTOR(uint16_t, 16))(p_420->g_287.s1a58a38b850916fa)).sb, 0xD386L, 7UL)).even))).x, (FAKE_DIVERGE(p_420->local_0_offset, get_local_id(0), 10) | ((VECTOR(uint8_t, 16))((((safe_mul_func_uint16_t_u_u((p_420->g_287.s8 > ((((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(p_420->g_287.sa, ((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_296.s65257352)).s4, p_420->g_181.x)) ^ FAKE_DIVERGE(p_420->group_0_offset, get_group_id(0), 10)))), 3)) == l_6.s4) && p_420->g_113) , GROUP_DIVERGE(0, 1))), l_296.s0)) > l_285.y) > p_420->g_110.s0), 255UL, p_420->g_181.w, ((VECTOR(uint8_t, 2))(0x43L)), 0xF4L, 0xC3L, 0x18L, ((VECTOR(uint8_t, 4))(254UL)), 0x0EL, 0x19L, 1UL, 0x7AL)).s9))) , (void*)0) == &p_420->g_96) || GROUP_DIVERGE(2, 1)), (uint8_t)l_297))), p_420->g_116.f3, ((VECTOR(uint8_t, 8))(0x79L)))).s310b)).odd))), ((VECTOR(uint8_t, 2))(0x61L))))), ((VECTOR(uint16_t, 2))(0x2730L))))))), 0UL)).s1), l_296.s3)) , 0xEA49E31DL) && p_420->g_261.f2), 6));
    if ((!((0x4A7F8C88961CDD0FL > (safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0UL, (l_304 | (safe_add_func_int64_t_s_s((((*l_308) = l_307) != (p_420->g_311 = l_309)), l_312.x))))), l_313))) >= p_420->g_115)))
    { /* block id: 120 */
        struct S0 l_314 = {0x1BL,255UL};
        return l_314;
    }
    else
    { /* block id: 122 */
        uint8_t *l_319 = (void*)0;
        uint8_t *l_320 = &p_420->g_96.f1;
        int32_t l_332 = (-1L);
        int32_t l_333 = (-8L);
        uint32_t *l_335 = (void*)0;
        uint32_t *l_336 = (void*)0;
        uint32_t *l_337 = (void*)0;
        uint32_t *l_338 = (void*)0;
        uint32_t *l_339 = (void*)0;
        uint32_t *l_340 = (void*)0;
        uint64_t *l_342 = (void*)0;
        uint64_t **l_341 = &l_342;
        uint64_t *l_344 = (void*)0;
        uint64_t **l_343[8][5][6] = {{{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344}},{{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344}},{{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344}},{{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344}},{{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344}},{{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344}},{{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344}},{{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344},{&l_344,&l_344,(void*)0,&l_344,&l_344,&l_344}}};
        uint16_t l_347 = 0xC1C6L;
        int i, j, k;
        l_333 ^= (safe_add_func_uint8_t_u_u(p_420->g_127.s1, (((safe_add_func_uint8_t_u_u((--(*l_320)), GROUP_DIVERGE(2, 1))) == p_420->g_323) & ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 4))(((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((0xB7L > (1UL > (((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 8))(0x18016193L, 0x6BE0E4C3L, ((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, 0x6BF7B63EL)).xxyyxyyyyxxyyxyx)).se6)), 7L)), 0x4C5922FDL, 0x70251785L)).even, ((VECTOR(uint32_t, 8))(0x9BE7E88EL, (safe_rshift_func_int16_t_s_s((-1L), 6)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 2))(p_420->g_330.sb9)), ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(0xF40B3492L, 0UL)).yxxyxxxy, ((VECTOR(uint32_t, 2))(4294967295UL, 0xAB18FE55L)).yyxyyxxx))).s72))), ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 16))(p_420->g_331.yyxxwzyzxxyyxwzy)).s1e, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(4294967288UL, (p_420->g_185.x < 0x7CL), (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(9UL, 0x6417F505A122E43EL)).yxyyyxxyyyxxxxyy)).s6 > (4294967295UL && 0x59B7D033L)), 0x03A193DEL, 0UL, 4294967295UL, 1UL, 0xF51782F0L)), l_332, 0x92278984L, ((VECTOR(uint32_t, 2))(0x500DC684L)), 0x07C1C026L, 0xC3D7947BL, 1UL, 4UL)).sd9, ((VECTOR(uint32_t, 2))(1UL))))), p_420->g_287.sc, ((VECTOR(uint32_t, 2))(1UL)), 1UL)).lo)), 4294967291UL, 4294967295UL)).hi))).x , p_420->g_299[0]))) ^ p_420->g_310.f0), p_420->g_310.f3)), GROUP_DIVERGE(0, 1))) && p_420->g_96.f0), ((VECTOR(int8_t, 2))(0x70L)), 0x7AL)).yxyzxwywwzwxyyzy))).s1)));
        l_347 = ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 8))(0UL, 0xEC13A8EBL, 0x8992270FL, 4294967295UL, ((VECTOR(uint32_t, 2))(4294967286UL, 0xA014E2C9L)), 0xFC52A63DL, 0x9E29EF9DL)).lo))).ywywzyzz, ((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(p_420->g_334.s51600526)).s5154574650767754)).even)).even)), ((VECTOR(uint32_t, 2))(0UL, 0x8271138AL)).yyxy))).zxzyyzxx, ((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0UL, 0x70F32B3BL)), ((((p_420->g_183.s6 != 0x38567CC2EE4D830DL) < (((l_333 &= (p_420->g_310.f3 || ((*l_320) = p_420->g_110.s7))) >= (p_420->g_334.s4 &= 0x3BD49D5AL)) | (((*l_341) = &p_420->g_113) != (l_345 = &p_420->g_113)))) != (l_346[3][7][3] != l_332)) ^ p_420->g_330.s3), ((VECTOR(uint32_t, 2))(1UL)), 1UL, 4294967295UL, 0x3C5C08EEL)).lo, ((VECTOR(uint32_t, 4))(4294967295UL))))).wyyzxzzz))).even)).x || 0x33202F81L) <= p_420->g_330.sd);
    }
    if ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((l_352 , (((p_420->g_170.x | (p_420->g_368 = ((safe_add_func_int64_t_s_s((-9L), ((p_420->g_330.sc || (safe_mod_func_uint8_t_u_u(((p_420->g_358 = &p_420->g_311) != (((((((VECTOR(int64_t, 8))(p_420->g_359.s25260101)).s3 == (((*l_360) |= (&p_420->g_96 != &p_420->g_96)) || (safe_div_func_int32_t_s_s((((void*)0 != p_420->g_363) ^ p_420->g_331.w), l_365)))) & p_420->g_323) == 0x106BCD91L) | p_420->g_310.f3) , &p_420->g_311)), p_420->g_96.f0))) || l_366))) & p_420->g_334.s2))) <= 0xE3550220C45C0F7CL) || p_420->g_273.f0)) && p_420->g_186.x), 0)), p_420->l_comm_values[(safe_mod_func_uint32_t_u_u(p_420->tid, 43))])))
    { /* block id: 135 */
        uint32_t l_369[5];
        int32_t l_373[4] = {0x295FCBD7L,0x295FCBD7L,0x295FCBD7L,0x295FCBD7L};
        int i;
        for (i = 0; i < 5; i++)
            l_369[i] = 0xF13DFFC1L;
        l_369[4]++;
        (*p_420->g_372) = &l_304;
        l_374.s4++;
    }
    else
    { /* block id: 139 */
        struct S0 *l_379 = &p_420->g_96;
        int32_t l_401[1];
        int32_t l_415 = 0x17DB93F8L;
        int i;
        for (i = 0; i < 1; i++)
            l_401[i] = 0x2C01416CL;
        (*l_379) = (p_420->g_377 , l_352);
        for (p_420->g_310.f3 = (-25); (p_420->g_310.f3 <= 18); ++p_420->g_310.f3)
        { /* block id: 143 */
            uint32_t l_392 = 0xA7BA8BBBL;
            VECTOR(int32_t, 2) l_404 = (VECTOR(int32_t, 2))(0x7D2C9963L, 3L);
            int32_t l_409 = 0x1F5C4282L;
            int32_t l_416[5];
            int32_t l_418 = 0x5C3B0559L;
            int i;
            for (i = 0; i < 5; i++)
                l_416[i] = 0x70DBDB0DL;
            l_418 ^= ((safe_mod_func_int32_t_s_s(((!(safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_div_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((((l_392 , l_392) <= ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))((safe_sub_func_uint64_t_u_u(((*l_345) = (((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(1L, (safe_lshift_func_int16_t_s_s(l_401[0], ((0x334C12990B2F6BB7L <= (safe_rshift_func_uint16_t_u_s((0x673F03C8L ^ ((VECTOR(int32_t, 16))(l_404.xxyxyyxyxxxyyxyx)).s5), 9))) <= (l_416[2] = (l_415 = ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_420->g_405.s04)), (l_409 = ((safe_rshift_func_int8_t_s_u(l_404.y, 7)) != ((VECTOR(uint8_t, 4))(p_420->g_408.xyxy)).x)), (safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(l_412.xyxy)), ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(1L, ((((safe_add_func_uint16_t_u_u((+p_420->g_comm_values[p_420->tid]), (p_420->g_110.s0 | (-1L)))) , (*p_420->g_363)) > p_420->g_287.s1) && l_401[0]), ((VECTOR(int8_t, 2))(3L)), p_420->g_226.y, 0x5AL, 0L, 0x4FL)).lo, ((VECTOR(int8_t, 4))(0x73L))))).ywxyxzwz, ((VECTOR(int8_t, 8))(4L))))).even, ((VECTOR(int8_t, 4))(0x17L))))).lo)).xxxxxyxx, ((VECTOR(int8_t, 8))(0x15L))))).s06, ((VECTOR(int8_t, 2))(6L)), ((VECTOR(int8_t, 2))(0x6AL))))).yyxxyxxy, (int8_t)p_420->g_170.x, (int8_t)(-1L)))).s0667041111135054, ((VECTOR(int8_t, 16))(0x43L))))).sae, ((VECTOR(int8_t, 2))(0x4EL))))).xxxxxyyxxxyyxxxy, ((VECTOR(uint8_t, 16))(0xBDL))))).s0, 13)), 1L, l_392, 0x0FC442F3L, 1L)), ((VECTOR(int32_t, 8))(3L)), ((VECTOR(int32_t, 8))(0L))))).s2))))))), p_420->g_330.s7)) >= 65528UL) != p_420->g_96.f0)), l_401[0])), p_420->g_226.x, 3UL, p_420->g_287.se, l_401[0], ((VECTOR(uint32_t, 4))(4294967290UL)), ((VECTOR(uint32_t, 2))(4294967287UL)), 0UL, p_420->g_261.f0, p_420->g_116.f3, 1UL, 0xA15E00BEL)))).sf7a4)).x) & p_420->g_310.f0), l_404.x)) > 252UL) < 253UL), p_420->g_18)) | 7L), (-1L))), l_404.y))) & l_417), 0xCEC0CD67L)) , l_392);
            return l_352;
        }
    }
    return p_420->g_419;
}


/* ------------------------------------------ */
/* 
 * reads : p_420->l_comm_values p_420->g_comm_values p_420->g_19 p_420->g_25 p_420->g_18 p_420->g_63 p_420->g_96 p_420->g_110 p_420->g_116 p_420->g_117 p_420->g_127 p_420->g_149 p_420->g_170 p_420->g_113 p_420->g_181 p_420->g_183 p_420->g_185 p_420->g_186 p_420->g_137 p_420->g_150 p_420->g_218 p_420->g_226 p_420->g_227 p_420->g_115 p_420->g_261 p_420->g_273 p_420->g_274
 * writes: p_420->g_62 p_420->g_63 p_420->g_113 p_420->g_115 p_420->g_116 p_420->g_comm_values p_420->g_137 p_420->g_18 p_420->g_96 p_420->g_110 p_420->g_150 p_420->g_149 p_420->g_273
 */
uint8_t  func_7(int32_t  p_8, struct S2 * p_420)
{ /* block id: 5 */
    int32_t *l_17 = &p_420->g_18;
    VECTOR(uint64_t, 8) l_24 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x7EB6652F093D7F28L), 0x7EB6652F093D7F28L), 0x7EB6652F093D7F28L, 1UL, 0x7EB6652F093D7F28L);
    uint8_t l_52 = 255UL;
    int32_t **l_154[5];
    int32_t *l_155[7] = {&p_420->g_150,&p_420->g_18,&p_420->g_150,&p_420->g_150,&p_420->g_18,&p_420->g_150,&p_420->g_150};
    int32_t *l_156[3];
    uint16_t l_159 = 0x95F1L;
    int32_t *l_160[2][1][6] = {{{&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18}},{{&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18}}};
    int32_t *l_278 = &p_420->g_18;
    int32_t l_279[5];
    uint16_t l_280[10];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_154[i] = &p_420->g_63;
    for (i = 0; i < 3; i++)
        l_156[i] = &p_420->g_150;
    for (i = 0; i < 5; i++)
        l_279[i] = 4L;
    for (i = 0; i < 10; i++)
        l_280[i] = 0x593AL;
    l_278 = func_9(func_11(l_17, p_420->l_comm_values[(safe_mod_func_uint32_t_u_u(p_420->tid, 43))], (((((p_420->g_comm_values[p_420->tid] , p_420->g_19) , (((func_20(l_17, (l_155[1] = (((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 16))(l_24.s5740236277577747)).s57b1, ((VECTOR(uint64_t, 16))(p_420->g_25.s4125413014021711)).s7ec5))).w , func_26(func_32((((safe_mod_func_uint64_t_u_u(func_40(func_43((*l_17), p_420->g_19, func_47(l_17, (p_420->l_comm_values[(safe_mod_func_uint32_t_u_u(p_420->tid, 43))] , (void*)0), l_52, p_8, p_420), p_420), (*l_17), p_420), p_8)) || (*l_17)) > FAKE_DIVERGE(p_420->group_1_offset, get_group_id(1), 10)), p_8, &p_420->g_18, l_17, p_420->g_96, p_420), p_420->g_96.f1, p_420->g_149[3], p_8, &p_420->g_150, p_420))), l_156[2], p_420) <= 0x677126209F7C56E5L) || GROUP_DIVERGE(2, 1)) <= p_8)) > p_420->g_110.s2) != l_159) , l_160[1][0][4]), &p_420->g_150, &p_420->g_150, p_420), p_420);
    ++l_280[0];
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_420->g_273 p_420->g_274
 * writes: p_420->g_273
 */
int32_t * func_9(int32_t * p_10, struct S2 * p_420)
{ /* block id: 109 */
    int32_t *l_268 = &p_420->g_18;
    int32_t *l_269[4] = {&p_420->g_150,&p_420->g_150,&p_420->g_150,&p_420->g_150};
    uint32_t l_270 = 4294967286UL;
    uint8_t l_275[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    int i;
    ++l_270;
    (*p_420->g_274) = p_420->g_273;
    --l_275[7];
    return l_268;
}


/* ------------------------------------------ */
/* 
 * reads : p_420->g_110 p_420->g_170 p_420->g_comm_values p_420->g_113 p_420->g_181 p_420->g_183 p_420->g_185 p_420->g_186 p_420->l_comm_values p_420->g_25 p_420->g_137 p_420->g_150 p_420->g_18 p_420->g_218 p_420->g_226 p_420->g_227 p_420->g_115 p_420->g_261 p_420->g_117
 * writes: p_420->g_113 p_420->g_96.f1 p_420->g_137 p_420->g_18 p_420->g_110 p_420->g_150 p_420->g_115 p_420->g_149 p_420->g_116
 */
int32_t * func_11(int32_t * p_12, uint32_t  p_13, int32_t * p_14, int32_t * p_15, int32_t * p_16, struct S2 * p_420)
{ /* block id: 65 */
    int64_t *l_166 = (void*)0;
    int64_t *l_167 = (void*)0;
    int32_t l_168 = 6L;
    VECTOR(int8_t, 8) l_169 = (VECTOR(int8_t, 8))(0x31L, (VECTOR(int8_t, 4))(0x31L, (VECTOR(int8_t, 2))(0x31L, (-6L)), (-6L)), (-6L), 0x31L, (-6L));
    VECTOR(int8_t, 16) l_171 = (VECTOR(int8_t, 16))(0x4BL, (VECTOR(int8_t, 4))(0x4BL, (VECTOR(int8_t, 2))(0x4BL, 0x48L), 0x48L), 0x48L, 0x4BL, 0x48L, (VECTOR(int8_t, 2))(0x4BL, 0x48L), (VECTOR(int8_t, 2))(0x4BL, 0x48L), 0x4BL, 0x48L, 0x4BL, 0x48L);
    uint16_t l_174 = 0x34B0L;
    VECTOR(uint64_t, 4) l_182 = (VECTOR(uint64_t, 4))(0xF0471E1CBA1B39F6L, (VECTOR(uint64_t, 2))(0xF0471E1CBA1B39F6L, 0x0623DC06B8AFC5FDL), 0x0623DC06B8AFC5FDL);
    VECTOR(uint64_t, 4) l_184 = (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 0x318096DA207F8621L), 0x318096DA207F8621L);
    uint8_t *l_195 = &p_420->g_96.f1;
    int32_t ***l_198 = &p_420->g_62[0][0];
    int16_t *l_199 = (void*)0;
    int16_t *l_200[3][3][6] = {{{&p_420->g_137,&p_420->g_137,&p_420->g_137,&p_420->g_137,(void*)0,&p_420->g_137},{&p_420->g_137,&p_420->g_137,&p_420->g_137,&p_420->g_137,(void*)0,&p_420->g_137},{&p_420->g_137,&p_420->g_137,&p_420->g_137,&p_420->g_137,(void*)0,&p_420->g_137}},{{&p_420->g_137,&p_420->g_137,&p_420->g_137,&p_420->g_137,(void*)0,&p_420->g_137},{&p_420->g_137,&p_420->g_137,&p_420->g_137,&p_420->g_137,(void*)0,&p_420->g_137},{&p_420->g_137,&p_420->g_137,&p_420->g_137,&p_420->g_137,(void*)0,&p_420->g_137}},{{&p_420->g_137,&p_420->g_137,&p_420->g_137,&p_420->g_137,(void*)0,&p_420->g_137},{&p_420->g_137,&p_420->g_137,&p_420->g_137,&p_420->g_137,(void*)0,&p_420->g_137},{&p_420->g_137,&p_420->g_137,&p_420->g_137,&p_420->g_137,(void*)0,&p_420->g_137}}};
    uint32_t l_206 = 4294967292UL;
    uint16_t *l_214 = &p_420->g_115;
    uint16_t **l_213 = &l_214;
    VECTOR(uint32_t, 16) l_217 = (VECTOR(uint32_t, 16))(0x9D22A20EL, (VECTOR(uint32_t, 4))(0x9D22A20EL, (VECTOR(uint32_t, 2))(0x9D22A20EL, 1UL), 1UL), 1UL, 0x9D22A20EL, 1UL, (VECTOR(uint32_t, 2))(0x9D22A20EL, 1UL), (VECTOR(uint32_t, 2))(0x9D22A20EL, 1UL), 0x9D22A20EL, 1UL, 0x9D22A20EL, 1UL);
    VECTOR(int16_t, 8) l_228 = (VECTOR(int16_t, 8))(0x0738L, (VECTOR(int16_t, 4))(0x0738L, (VECTOR(int16_t, 2))(0x0738L, 1L), 1L), 1L, 0x0738L, 1L);
    VECTOR(int16_t, 8) l_229 = (VECTOR(int16_t, 8))(0x38AEL, (VECTOR(int16_t, 4))(0x38AEL, (VECTOR(int16_t, 2))(0x38AEL, 0x2F70L), 0x2F70L), 0x2F70L, 0x38AEL, 0x2F70L);
    VECTOR(uint32_t, 4) l_230 = (VECTOR(uint32_t, 4))(0x0BA3940CL, (VECTOR(uint32_t, 2))(0x0BA3940CL, 0UL), 0UL);
    int32_t l_239 = 6L;
    int32_t l_240 = 0x2FE0149AL;
    int32_t l_241[9] = {0x54FFE9F7L,0x42285C87L,0x54FFE9F7L,0x54FFE9F7L,0x42285C87L,0x54FFE9F7L,0x54FFE9F7L,0x42285C87L,0x54FFE9F7L};
    uint16_t l_262 = 0x7C88L;
    int32_t *l_263[7] = {&l_240,&l_240,&l_240,&l_240,&l_240,&l_240,&l_240};
    int32_t l_264[8][10] = {{0x1036A033L,0x69AEC497L,0x69AEC497L,0x1036A033L,0x6AC74344L,(-1L),(-1L),0x6AC74344L,0x1036A033L,0x69AEC497L},{0x1036A033L,0x69AEC497L,0x69AEC497L,0x1036A033L,0x6AC74344L,(-1L),(-1L),0x6AC74344L,0x1036A033L,0x69AEC497L},{0x1036A033L,0x69AEC497L,0x69AEC497L,0x1036A033L,0x6AC74344L,(-1L),(-1L),0x6AC74344L,0x1036A033L,0x69AEC497L},{0x1036A033L,0x69AEC497L,0x69AEC497L,0x1036A033L,0x6AC74344L,(-1L),(-1L),0x6AC74344L,0x1036A033L,0x69AEC497L},{0x1036A033L,0x69AEC497L,0x69AEC497L,0x1036A033L,0x6AC74344L,(-1L),(-1L),0x6AC74344L,0x1036A033L,0x69AEC497L},{0x1036A033L,0x69AEC497L,0x69AEC497L,0x1036A033L,0x6AC74344L,(-1L),(-1L),0x6AC74344L,0x1036A033L,0x69AEC497L},{0x1036A033L,0x69AEC497L,0x69AEC497L,0x1036A033L,0x6AC74344L,(-1L),(-1L),0x6AC74344L,0x1036A033L,0x69AEC497L},{0x1036A033L,0x69AEC497L,0x69AEC497L,0x1036A033L,0x6AC74344L,(-1L),(-1L),0x6AC74344L,0x1036A033L,0x69AEC497L}};
    uint8_t l_265 = 6UL;
    int i, j, k;
    (*p_12) &= (safe_add_func_uint32_t_u_u(0xA417AA07L, (safe_mod_func_int16_t_s_s((p_420->g_137 &= (((safe_unary_minus_func_int64_t_s((l_168 = p_420->g_110.s5))) , ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(l_169.s2707)).even, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_420->g_170.xxxxxxxyyxxyyyyy)).s86)), ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_171.s19)), 0x09L, (-8L))).even, ((VECTOR(int8_t, 16))((((safe_mul_func_uint8_t_u_u(l_174, (safe_rshift_func_int8_t_s_s(l_171.s0, ((p_420->g_comm_values[p_420->tid] ^ (p_420->g_113++)) >= ((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 16))(18446744073709551612UL, ((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 4))(p_420->g_181.wwzy)).odd, ((VECTOR(uint64_t, 2))(5UL, 8UL)), ((VECTOR(uint64_t, 16))(l_182.wwxzzzwywxywyzxz)).s5d))).yyyxxxxxyxxxxyyx)).lo, ((VECTOR(uint64_t, 2))(p_420->g_183.s90)).xyxyyyyx))), ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 4))(l_184.xwzz)).odd, ((VECTOR(uint64_t, 4))(p_420->g_185.xxxx)).odd, ((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 8))(p_420->g_186.xxxxyxyx)).s1302005652063546, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0xDBB3080555A09A9EL, 1UL)).xxyy)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))((((l_168 &= ((safe_mod_func_uint16_t_u_u(p_13, (safe_add_func_int64_t_s_s(l_171.sa, (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(((*l_195) = 255UL), (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 4))(p_13, p_13, 3L, 0x30423C1866E46557L)).z, 0x2293B63C9BB6DF10L)))) ^ p_13) == l_182.z), l_174)))))) || GROUP_DIVERGE(0, 1))) , (void*)0) == (void*)0), 0x76B064C719AA14C0L, 0x9720ECE5EC5E385FL, 18446744073709551609UL)).wzzyyyyw)).hi, ((VECTOR(uint64_t, 4))(1UL))))), 0x9CB063B3B1A930ACL, p_420->g_185.x, 0x409EFDA9F7B7DE32L, l_171.s3, 0UL, 0xF2281E60A541CA58L, 18446744073709551608UL, 1UL, ((VECTOR(uint64_t, 2))(0x21E32876BD8309EDL)), 0xE8B5572DAFAD3BD0L, 0xD29158F6FA15BBDBL)).s3903)), ((VECTOR(uint64_t, 4))(0x0DC7968EF9162A7CL)), ((VECTOR(uint64_t, 4))(0x95F1018CC1155B47L))))))).wyyywxwxwxwwwwzw))).s92))), (uint64_t)p_420->l_comm_values[(safe_mod_func_uint32_t_u_u(p_420->tid, 43))]))), ((VECTOR(uint64_t, 2))(0x90BD286198F1B2D3L)), ((VECTOR(uint64_t, 2))(0x343486B52A1DFCF9L)), 7UL)).sb9, ((VECTOR(uint64_t, 2))(0x783FFCBA9512BAA6L))))).lo, p_13)) > 0UL)))))) , (void*)0) != l_198), ((VECTOR(int8_t, 4))(0x6DL)), 0L, ((VECTOR(int8_t, 8))(0x5DL)), 2L, 7L)).s4d))).yxyyyxyy, ((VECTOR(int8_t, 8))(0L)), ((VECTOR(int8_t, 8))(1L))))).s54))).even) && p_420->g_25.s3)), p_420->g_150))));
    (*p_16) |= ((*p_12) = (~(safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), ((safe_unary_minus_func_int64_t_s(l_206)) , p_13))), (safe_sub_func_uint64_t_u_u(p_13, (safe_rshift_func_uint16_t_u_u((!p_13), ((safe_mod_func_int16_t_s_s((((*l_213) = &p_420->g_115) == &p_420->g_115), (safe_div_func_uint64_t_u_u((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_217.s8c)), ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 16))(p_420->g_218.yyxyyxxyyxyyyxyy)).sef))), ((+((+(safe_div_func_int16_t_s_s(p_13, (safe_unary_minus_func_int8_t_s((safe_add_func_int32_t_s_s((-2L), (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(p_420->g_226.yyyx)), ((VECTOR(int16_t, 2))(p_420->g_227.zz)).xxxx))), 0L, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(l_228.s6516)).odd, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x120FL, (-7L))), ((VECTOR(int16_t, 8))(l_229.s14173242)), (p_420->g_110.s3 = (((((void*)0 == l_198) | 65528UL) , p_420->g_185.y) <= 0x53F3E70DL)), 0x4CD2L, 0x4E53L, 1L, 0x4D71L, 0x7853L)).s66))), 0x37ADL)).s4, p_420->g_18))))))))) | p_13)) != p_13), ((VECTOR(uint32_t, 2))(4294967288UL)), 0x2D70AFE8L)).s24)).hi != p_13), p_13)))) >= l_230.z)))))))));
    for (p_420->g_115 = 0; (p_420->g_115 == 8); p_420->g_115 = safe_add_func_int16_t_s_s(p_420->g_115, 8))
    { /* block id: 78 */
        int32_t **l_234 = &p_420->g_149[0];
        int32_t l_242[9][10][2] = {{{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)}},{{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)}},{{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)}},{{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)}},{{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)}},{{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)}},{{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)}},{{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)}},{{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)},{0x29ADFA59L,(-1L)}}};
        int16_t l_246 = 1L;
        uint16_t l_247 = 0xF53EL;
        int i, j, k;
        (*l_234) = p_15;
        for (p_420->g_137 = 0; (p_420->g_137 != (-26)); p_420->g_137 = safe_sub_func_uint8_t_u_u(p_420->g_137, 6))
        { /* block id: 82 */
            int32_t *l_237 = &p_420->g_150;
            int32_t *l_238[4];
            int8_t l_243[6] = {0x4AL,0x46L,0x4AL,0x4AL,0x46L,0x4AL};
            int8_t l_244 = 0x4FL;
            int8_t l_245 = 0x08L;
            int i;
            for (i = 0; i < 4; i++)
                l_238[i] = &p_420->g_150;
            atomic_min(&p_420->l_atomic_reduction[0], (*p_16) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_420->v_collective += p_420->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            (*l_234) = (void*)0;
            l_247++;
        }
        if ((*p_16))
            break;
        for (p_13 = 0; (p_13 == 54); p_13 = safe_add_func_uint64_t_u_u(p_13, 6))
        { /* block id: 90 */
            if ((atomic_inc(&p_420->l_atomic_input[5]) == 8))
            { /* block id: 92 */
                int16_t l_252 = 0x5BA4L;
                int32_t l_253 = 0x70CE4459L;
                int8_t l_254[3][2][8] = {{{0x69L,0x4BL,0x5CL,0x53L,1L,1L,0x53L,0x5CL},{0x69L,0x4BL,0x5CL,0x53L,1L,1L,0x53L,0x5CL}},{{0x69L,0x4BL,0x5CL,0x53L,1L,1L,0x53L,0x5CL},{0x69L,0x4BL,0x5CL,0x53L,1L,1L,0x53L,0x5CL}},{{0x69L,0x4BL,0x5CL,0x53L,1L,1L,0x53L,0x5CL},{0x69L,0x4BL,0x5CL,0x53L,1L,1L,0x53L,0x5CL}}};
                int32_t l_255 = (-1L);
                uint64_t l_256 = 0x211514C04C149F11L;
                int i, j, k;
                l_252 ^= 0x18B64A7CL;
                l_254[2][1][1] = l_253;
                ++l_256;
                unsigned int result = 0;
                result += l_252;
                result += l_253;
                int l_254_i0, l_254_i1, l_254_i2;
                for (l_254_i0 = 0; l_254_i0 < 3; l_254_i0++) {
                    for (l_254_i1 = 0; l_254_i1 < 2; l_254_i1++) {
                        for (l_254_i2 = 0; l_254_i2 < 8; l_254_i2++) {
                            result += l_254[l_254_i0][l_254_i1][l_254_i2];
                        }
                    }
                }
                result += l_255;
                result += l_256;
                atomic_add(&p_420->l_special_values[5], result);
            }
            else
            { /* block id: 96 */
                (1 + 1);
            }
            for (l_246 = 23; (l_246 < (-25)); l_246 = safe_sub_func_uint8_t_u_u(l_246, 9))
            { /* block id: 101 */
                (*p_420->g_117) = p_420->g_261;
                if (l_262)
                    break;
            }
        }
    }
    l_265++;
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_420->g_96
 */
uint64_t  func_20(int32_t * p_21, int32_t * p_22, int32_t * p_23, struct S2 * p_420)
{ /* block id: 62 */
    struct S0 l_157 = {0x8CL,0x98L};
    struct S0 *l_158 = &p_420->g_96;
    (*l_158) = l_157;
    return l_157.f1;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_26(int32_t * p_27, uint32_t  p_28, int32_t * p_29, uint64_t  p_30, int32_t * p_31, struct S2 * p_420)
{ /* block id: 58 */
    uint16_t l_151 = 0x9A40L;
    ++l_151;
    return p_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_420->g_comm_values p_420->g_25 p_420->g_110 p_420->g_96.f1 p_420->g_116 p_420->g_117 p_420->g_127 p_420->g_96.f0
 * writes: p_420->g_113 p_420->g_115 p_420->g_116 p_420->g_comm_values p_420->g_137 p_420->g_18
 */
int32_t * func_32(int8_t  p_33, uint16_t  p_34, int32_t * p_35, int32_t * p_36, struct S0  p_37, struct S2 * p_420)
{ /* block id: 34 */
    int32_t **l_97 = &p_420->g_63;
    int32_t l_98 = 0x5642D32AL;
    VECTOR(int64_t, 2) l_104 = (VECTOR(int64_t, 2))(5L, 0x0CCC043B8F3440FCL);
    VECTOR(int64_t, 16) l_126 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x55C1E0805CE0736AL), 0x55C1E0805CE0736AL), 0x55C1E0805CE0736AL, (-1L), 0x55C1E0805CE0736AL, (VECTOR(int64_t, 2))((-1L), 0x55C1E0805CE0736AL), (VECTOR(int64_t, 2))((-1L), 0x55C1E0805CE0736AL), (-1L), 0x55C1E0805CE0736AL, (-1L), 0x55C1E0805CE0736AL);
    VECTOR(uint64_t, 4) l_130 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xF2E0697B8A6DA849L), 0xF2E0697B8A6DA849L);
    VECTOR(uint64_t, 4) l_131 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 8UL), 8UL);
    VECTOR(uint32_t, 8) l_132 = (VECTOR(uint32_t, 8))(0xF9CF0709L, (VECTOR(uint32_t, 4))(0xF9CF0709L, (VECTOR(uint32_t, 2))(0xF9CF0709L, 0x4E212550L), 0x4E212550L), 0x4E212550L, 0xF9CF0709L, 0x4E212550L);
    int32_t *l_138 = &p_420->g_18;
    int32_t *l_139 = &p_420->g_18;
    int32_t *l_140[6];
    int64_t l_141 = 0L;
    int8_t l_142 = 0x43L;
    VECTOR(int8_t, 2) l_143 = (VECTOR(int8_t, 2))(0x01L, 0x2DL);
    int32_t l_144 = (-8L);
    int32_t l_145 = 2L;
    uint32_t l_146[7] = {4294967295UL,4294967291UL,4294967295UL,4294967295UL,4294967291UL,4294967295UL,4294967295UL};
    int i;
    for (i = 0; i < 6; i++)
        l_140[i] = (void*)0;
    if ((l_98 ^= ((void*)0 != l_97)))
    { /* block id: 36 */
        int32_t *l_99 = &l_98;
        int16_t l_109[4] = {0x3F4DL,0x3F4DL,0x3F4DL,0x3F4DL};
        int32_t ***l_111 = &l_97;
        uint64_t *l_112[5][5] = {{&p_420->g_113,&p_420->g_113,(void*)0,&p_420->g_113,&p_420->g_113},{&p_420->g_113,&p_420->g_113,(void*)0,&p_420->g_113,&p_420->g_113},{&p_420->g_113,&p_420->g_113,(void*)0,&p_420->g_113,&p_420->g_113},{&p_420->g_113,&p_420->g_113,(void*)0,&p_420->g_113,&p_420->g_113},{&p_420->g_113,&p_420->g_113,(void*)0,&p_420->g_113,&p_420->g_113}};
        uint16_t *l_114 = &p_420->g_115;
        int i, j;
        l_99 = l_99;
        (*l_99) &= (((safe_mod_func_int16_t_s_s(p_33, ((*l_114) = (safe_mul_func_int8_t_s_s((((VECTOR(int64_t, 2))(l_104.xy)).even | p_420->g_comm_values[p_420->tid]), (safe_mul_func_uint8_t_u_u((((p_37.f0 < (p_420->g_113 = (safe_div_func_uint32_t_u_u(((((p_420->g_25.s1 | (0x42485C87E2E2487DL >= (l_109[2] , (((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 16))(p_420->g_110.s0125002257005115)).lo, ((VECTOR(int16_t, 2))(0x49A1L, 0x31ABL)).xxyyxyyy))).s4 && ((void*)0 == l_111))))) , l_104.x) && (-1L)) & 1L), GROUP_DIVERGE(0, 1))))) > p_420->g_96.f1) | 0x7FL), 0x79L))))))) >= p_33) ^ 65534UL);
        return p_36;
    }
    else
    { /* block id: 42 */
        (*p_420->g_117) = p_420->g_116;
    }
    if ((atomic_inc(&p_420->l_atomic_input[29]) == 7))
    { /* block id: 46 */
        int32_t l_119 = 0x6BA6C640L;
        int32_t *l_118 = &l_119;
        int32_t *l_120 = &l_119;
        int64_t l_121[8];
        int32_t *l_122 = &l_119;
        int32_t *l_123 = &l_119;
        int i;
        for (i = 0; i < 8; i++)
            l_121[i] = 0L;
        l_120 = l_118;
        l_122 = (l_121[5] , (void*)0);
        l_123 = (void*)0;
        unsigned int result = 0;
        result += l_119;
        int l_121_i0;
        for (l_121_i0 = 0; l_121_i0 < 8; l_121_i0++) {
            result += l_121[l_121_i0];
        }
        atomic_add(&p_420->l_special_values[29], result);
    }
    else
    { /* block id: 50 */
        (1 + 1);
    }
    (*p_35) = (((safe_sub_func_int8_t_s_s((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 8))(l_126.s644c7829)).s7003233404715727, ((VECTOR(int64_t, 16))(p_420->g_127.s2154225150234603))))).sed, (int64_t)0x0149C1215010C314L, (int64_t)(((p_37.f1 | 0x2D74585EL) , ((&p_420->g_63 != l_97) , 0UL)) , p_33)))))).odd , p_37.f1), (safe_mul_func_int16_t_s_s(((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_130.wywx)).wxwzwwxyxwxxyzyy)).s5 && ((VECTOR(uint64_t, 2))(l_131.xw)).even) >= (p_420->g_137 = (p_420->g_comm_values[p_420->tid] = ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_132.s3336111761442605)).sa821)).w ^ ((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(p_420->g_comm_values[p_420->tid], p_420->g_96.f0)), p_33)) == 0x29CAEAABL)) , 0x75FF728952072D0BL)))), FAKE_DIVERGE(p_420->local_2_offset, get_local_id(2), 10))))) != 0xED05F3529B9CDFA4L) && p_420->g_127.s4);
    l_146[4]++;
    return p_36;
}


/* ------------------------------------------ */
/* 
 * reads : p_420->g_18 p_420->g_19
 * writes: p_420->g_63
 */
uint64_t  func_40(int32_t * p_41, uint64_t  p_42, struct S2 * p_420)
{ /* block id: 28 */
    int32_t *l_90 = &p_420->g_18;
    int32_t **l_91 = (void*)0;
    uint16_t l_92 = 65528UL;
    int32_t l_93 = 0x12E01139L;
    int32_t **l_94 = &p_420->g_63;
    int16_t l_95 = 0x15C3L;
    p_41 = (l_90 = l_90);
    (*l_94) = func_43(p_42, (*l_90), (p_420->g_19 , ((l_93 = l_92) , (void*)0)), p_420);
    return l_95;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_43(int32_t  p_44, uint32_t  p_45, int32_t * p_46, struct S2 * p_420)
{ /* block id: 25 */
    int32_t *l_89 = &p_420->g_18;
    l_89 = p_46;
    return l_89;
}


/* ------------------------------------------ */
/* 
 * reads : p_420->g_comm_values p_420->g_18 p_420->g_63
 * writes: p_420->g_62
 */
int32_t * func_47(int32_t * p_48, int32_t * p_49, int16_t  p_50, uint16_t  p_51, struct S2 * p_420)
{ /* block id: 6 */
    int32_t *l_55[10][10] = {{&p_420->g_18,&p_420->g_18,&p_420->g_18,(void*)0,(void*)0,(void*)0,&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18},{&p_420->g_18,&p_420->g_18,&p_420->g_18,(void*)0,(void*)0,(void*)0,&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18},{&p_420->g_18,&p_420->g_18,&p_420->g_18,(void*)0,(void*)0,(void*)0,&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18},{&p_420->g_18,&p_420->g_18,&p_420->g_18,(void*)0,(void*)0,(void*)0,&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18},{&p_420->g_18,&p_420->g_18,&p_420->g_18,(void*)0,(void*)0,(void*)0,&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18},{&p_420->g_18,&p_420->g_18,&p_420->g_18,(void*)0,(void*)0,(void*)0,&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18},{&p_420->g_18,&p_420->g_18,&p_420->g_18,(void*)0,(void*)0,(void*)0,&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18},{&p_420->g_18,&p_420->g_18,&p_420->g_18,(void*)0,(void*)0,(void*)0,&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18},{&p_420->g_18,&p_420->g_18,&p_420->g_18,(void*)0,(void*)0,(void*)0,&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18},{&p_420->g_18,&p_420->g_18,&p_420->g_18,(void*)0,(void*)0,(void*)0,&p_420->g_18,&p_420->g_18,&p_420->g_18,&p_420->g_18}};
    VECTOR(uint16_t, 2) l_75 = (VECTOR(uint16_t, 2))(65529UL, 0UL);
    VECTOR(uint8_t, 8) l_82 = (VECTOR(uint8_t, 8))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 1UL), 1UL), 1UL, 254UL, 1UL);
    int32_t ***l_85 = &p_420->g_62[0][0];
    int i, j;
    for (p_51 = 19; (p_51 != 8); p_51--)
    { /* block id: 9 */
        int32_t **l_56[2][7] = {{&l_55[9][2],&l_55[5][4],&l_55[9][2],&l_55[9][2],&l_55[5][4],&l_55[9][2],&l_55[9][2]},{&l_55[9][2],&l_55[5][4],&l_55[9][2],&l_55[9][2],&l_55[5][4],&l_55[9][2],&l_55[9][2]}};
        int i, j;
        p_49 = l_55[4][7];
    }
    for (p_51 = 0; (p_51 > 29); ++p_51)
    { /* block id: 14 */
        int32_t **l_59 = &l_55[4][7];
        int32_t ***l_60 = (void*)0;
        int32_t ***l_61[3];
        VECTOR(int8_t, 16) l_78 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x6DL), 0x6DL), 0x6DL, (-1L), 0x6DL, (VECTOR(int8_t, 2))((-1L), 0x6DL), (VECTOR(int8_t, 2))((-1L), 0x6DL), (-1L), 0x6DL, (-1L), 0x6DL);
        VECTOR(int8_t, 2) l_79 = (VECTOR(int8_t, 2))((-4L), (-2L));
        int32_t l_86 = 3L;
        uint64_t l_87 = 0x1EDEFA84F3720B21L;
        int i;
        for (i = 0; i < 3; i++)
            l_61[i] = &l_59;
        p_420->g_62[0][0] = l_59;
        for (p_50 = 0; (p_50 == (-14)); --p_50)
        { /* block id: 18 */
            (*l_59) = (p_420->g_comm_values[p_420->tid] , p_48);
            return l_55[4][7];
        }
        l_87 |= (safe_sub_func_int8_t_s_s((&p_49 == &l_55[4][7]), (safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((0UL || p_50), (safe_unary_minus_func_int32_t_s(((((((((((((void*)0 != p_49) | (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(l_75.xyyxyxyyyxxyyyxy)).sf, 0UL))) || ((safe_mod_func_uint8_t_u_u(p_420->g_comm_values[p_420->tid], ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_78.s79)), 0x7CL, 9L)).wywxzwzw, ((VECTOR(int8_t, 2))(l_79.xx)).yyxxxyyy))).s5)) , (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 8))(l_82.s17566132)).s1055067100466422))).lo)), ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 4))((safe_div_func_int64_t_s_s((((void*)0 == l_85) != FAKE_DIVERGE(p_420->local_2_offset, get_local_id(2), 10)), 0x8F9F05BB7EAB3286L)), FAKE_DIVERGE(p_420->local_2_offset, get_local_id(2), 10), 0x19L, 0x5EL)), ((VECTOR(uint8_t, 4))(0xC9L))))), 255UL, 0UL, 250UL, 0UL)).hi, ((VECTOR(uint8_t, 4))(0xE4L))))).zxxxyxxw))))).s5, 0x7065L)))) <= 1L) , (*p_48)) >= (*p_48)) < l_86) <= p_51) == p_50) > 0xFB082E28L) , (*p_420->g_63)))))), 4294967295UL))));
    }
    return p_49;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[39];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 39; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[39];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 39; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[43];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 43; i++)
            l_comm_values[i] = 1;
    struct S2 c_421;
    struct S2* p_420 = &c_421;
    struct S2 c_422 = {
        0x0813C27FL, // p_420->g_18
        0x067A7BF7L, // p_420->g_19
        (VECTOR(uint64_t, 8))(0x298C245E320525C7L, (VECTOR(uint64_t, 4))(0x298C245E320525C7L, (VECTOR(uint64_t, 2))(0x298C245E320525C7L, 0xDDBB7A2E255BB5FBL), 0xDDBB7A2E255BB5FBL), 0xDDBB7A2E255BB5FBL, 0x298C245E320525C7L, 0xDDBB7A2E255BB5FBL), // p_420->g_25
        &p_420->g_18, // p_420->g_63
        {{&p_420->g_63},{&p_420->g_63},{&p_420->g_63}}, // p_420->g_62
        {{{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63},{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63},{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63},{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63},{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63},{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63},{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63},{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63}},{{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63},{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63},{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63},{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63},{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63},{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63},{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63},{&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,&p_420->g_63,(void*)0,(void*)0,&p_420->g_63}}}, // p_420->g_88
        {0UL,247UL}, // p_420->g_96
        (VECTOR(int16_t, 8))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x7BBAL), 0x7BBAL), 0x7BBAL, (-8L), 0x7BBAL), // p_420->g_110
        0UL, // p_420->g_113
        0xED31L, // p_420->g_115
        {0x65BD8F16D91DA8F8L,0xD024E14CL,0x3F783815L,0x0886FBCFL}, // p_420->g_116
        &p_420->g_116, // p_420->g_117
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x185A425B5E633137L), 0x185A425B5E633137L), 0x185A425B5E633137L, 0L, 0x185A425B5E633137L), // p_420->g_127
        0x4B16L, // p_420->g_137
        0x3B4845BDL, // p_420->g_150
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_420->g_149
        (VECTOR(int8_t, 2))(0x41L, 0x45L), // p_420->g_170
        (VECTOR(uint64_t, 4))(0xC773F36A349A6F94L, (VECTOR(uint64_t, 2))(0xC773F36A349A6F94L, 9UL), 9UL), // p_420->g_181
        (VECTOR(uint64_t, 16))(0xDB0CEC7D19381F14L, (VECTOR(uint64_t, 4))(0xDB0CEC7D19381F14L, (VECTOR(uint64_t, 2))(0xDB0CEC7D19381F14L, 0UL), 0UL), 0UL, 0xDB0CEC7D19381F14L, 0UL, (VECTOR(uint64_t, 2))(0xDB0CEC7D19381F14L, 0UL), (VECTOR(uint64_t, 2))(0xDB0CEC7D19381F14L, 0UL), 0xDB0CEC7D19381F14L, 0UL, 0xDB0CEC7D19381F14L, 0UL), // p_420->g_183
        (VECTOR(uint64_t, 2))(18446744073709551608UL, 0UL), // p_420->g_185
        (VECTOR(uint64_t, 2))(5UL, 0UL), // p_420->g_186
        (VECTOR(uint32_t, 2))(0xAB7D97D9L, 4294967293UL), // p_420->g_218
        (VECTOR(int16_t, 2))(0x49B0L, 6L), // p_420->g_226
        (VECTOR(int16_t, 4))(0x1AA2L, (VECTOR(int16_t, 2))(0x1AA2L, (-1L)), (-1L)), // p_420->g_227
        {&p_420->g_149[1],&p_420->g_149[1],&p_420->g_149[1]}, // p_420->g_233
        {1L,7UL,0x0543076AL,0UL}, // p_420->g_261
        {0x5FCBA62367ABEDC6L,4294967287UL,4294967287UL,4294967295UL}, // p_420->g_273
        &p_420->g_273, // p_420->g_274
        (VECTOR(uint16_t, 4))(0x0889L, (VECTOR(uint16_t, 2))(0x0889L, 65534UL), 65534UL), // p_420->g_286
        (VECTOR(uint16_t, 16))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 1UL), 1UL), 1UL, 65532UL, 1UL, (VECTOR(uint16_t, 2))(65532UL, 1UL), (VECTOR(uint16_t, 2))(65532UL, 1UL), 65532UL, 1UL, 65532UL, 1UL), // p_420->g_287
        {(-10L),(-10L)}, // p_420->g_299
        {0x1BB420D29B817403L,4294967291UL,0x3E6019CDL,4294967295UL}, // p_420->g_310
        &p_420->g_310, // p_420->g_311
        0xC116L, // p_420->g_323
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x9889FBE6L), 0x9889FBE6L), 0x9889FBE6L, 1UL, 0x9889FBE6L, (VECTOR(uint32_t, 2))(1UL, 0x9889FBE6L), (VECTOR(uint32_t, 2))(1UL, 0x9889FBE6L), 1UL, 0x9889FBE6L, 1UL, 0x9889FBE6L), // p_420->g_330
        (VECTOR(uint32_t, 4))(0x98FB900BL, (VECTOR(uint32_t, 2))(0x98FB900BL, 4294967289UL), 4294967289UL), // p_420->g_331
        (VECTOR(uint32_t, 8))(0x395B898AL, (VECTOR(uint32_t, 4))(0x395B898AL, (VECTOR(uint32_t, 2))(0x395B898AL, 0xF93BC8A5L), 0xF93BC8A5L), 0xF93BC8A5L, 0x395B898AL, 0xF93BC8A5L), // p_420->g_334
        &p_420->g_311, // p_420->g_358
        (VECTOR(int64_t, 8))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0x4A28B79777D5FCF2L), 0x4A28B79777D5FCF2L), 0x4A28B79777D5FCF2L, 9L, 0x4A28B79777D5FCF2L), // p_420->g_359
        255UL, // p_420->g_364
        &p_420->g_364, // p_420->g_363
        (-3L), // p_420->g_368
        &p_420->g_149[4], // p_420->g_372
        {0x67514AE6B460BF0BL,4294967291UL,4294967294UL,4294967295UL}, // p_420->g_377
        {&p_420->g_96,&p_420->g_96,&p_420->g_96,&p_420->g_96,&p_420->g_96,&p_420->g_96,&p_420->g_96,&p_420->g_96,&p_420->g_96}, // p_420->g_378
        (VECTOR(int32_t, 8))(0x7DEF0C85L, (VECTOR(int32_t, 4))(0x7DEF0C85L, (VECTOR(int32_t, 2))(0x7DEF0C85L, 1L), 1L), 1L, 0x7DEF0C85L, 1L), // p_420->g_405
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x1CL), 0x1CL), // p_420->g_408
        {1UL,0xD5L}, // p_420->g_419
        0, // p_420->v_collective
        sequence_input[get_global_id(0)], // p_420->global_0_offset
        sequence_input[get_global_id(1)], // p_420->global_1_offset
        sequence_input[get_global_id(2)], // p_420->global_2_offset
        sequence_input[get_local_id(0)], // p_420->local_0_offset
        sequence_input[get_local_id(1)], // p_420->local_1_offset
        sequence_input[get_local_id(2)], // p_420->local_2_offset
        sequence_input[get_group_id(0)], // p_420->group_0_offset
        sequence_input[get_group_id(1)], // p_420->group_1_offset
        sequence_input[get_group_id(2)], // p_420->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 43)), permutations[0][get_linear_local_id()])), // p_420->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_421 = c_422;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_420);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_420->g_18, "p_420->g_18", print_hash_value);
    transparent_crc(p_420->g_19, "p_420->g_19", print_hash_value);
    transparent_crc(p_420->g_25.s0, "p_420->g_25.s0", print_hash_value);
    transparent_crc(p_420->g_25.s1, "p_420->g_25.s1", print_hash_value);
    transparent_crc(p_420->g_25.s2, "p_420->g_25.s2", print_hash_value);
    transparent_crc(p_420->g_25.s3, "p_420->g_25.s3", print_hash_value);
    transparent_crc(p_420->g_25.s4, "p_420->g_25.s4", print_hash_value);
    transparent_crc(p_420->g_25.s5, "p_420->g_25.s5", print_hash_value);
    transparent_crc(p_420->g_25.s6, "p_420->g_25.s6", print_hash_value);
    transparent_crc(p_420->g_25.s7, "p_420->g_25.s7", print_hash_value);
    transparent_crc(p_420->g_96.f0, "p_420->g_96.f0", print_hash_value);
    transparent_crc(p_420->g_96.f1, "p_420->g_96.f1", print_hash_value);
    transparent_crc(p_420->g_110.s0, "p_420->g_110.s0", print_hash_value);
    transparent_crc(p_420->g_110.s1, "p_420->g_110.s1", print_hash_value);
    transparent_crc(p_420->g_110.s2, "p_420->g_110.s2", print_hash_value);
    transparent_crc(p_420->g_110.s3, "p_420->g_110.s3", print_hash_value);
    transparent_crc(p_420->g_110.s4, "p_420->g_110.s4", print_hash_value);
    transparent_crc(p_420->g_110.s5, "p_420->g_110.s5", print_hash_value);
    transparent_crc(p_420->g_110.s6, "p_420->g_110.s6", print_hash_value);
    transparent_crc(p_420->g_110.s7, "p_420->g_110.s7", print_hash_value);
    transparent_crc(p_420->g_113, "p_420->g_113", print_hash_value);
    transparent_crc(p_420->g_115, "p_420->g_115", print_hash_value);
    transparent_crc(p_420->g_116.f0, "p_420->g_116.f0", print_hash_value);
    transparent_crc(p_420->g_116.f1, "p_420->g_116.f1", print_hash_value);
    transparent_crc(p_420->g_116.f2, "p_420->g_116.f2", print_hash_value);
    transparent_crc(p_420->g_116.f3, "p_420->g_116.f3", print_hash_value);
    transparent_crc(p_420->g_127.s0, "p_420->g_127.s0", print_hash_value);
    transparent_crc(p_420->g_127.s1, "p_420->g_127.s1", print_hash_value);
    transparent_crc(p_420->g_127.s2, "p_420->g_127.s2", print_hash_value);
    transparent_crc(p_420->g_127.s3, "p_420->g_127.s3", print_hash_value);
    transparent_crc(p_420->g_127.s4, "p_420->g_127.s4", print_hash_value);
    transparent_crc(p_420->g_127.s5, "p_420->g_127.s5", print_hash_value);
    transparent_crc(p_420->g_127.s6, "p_420->g_127.s6", print_hash_value);
    transparent_crc(p_420->g_127.s7, "p_420->g_127.s7", print_hash_value);
    transparent_crc(p_420->g_137, "p_420->g_137", print_hash_value);
    transparent_crc(p_420->g_150, "p_420->g_150", print_hash_value);
    transparent_crc(p_420->g_170.x, "p_420->g_170.x", print_hash_value);
    transparent_crc(p_420->g_170.y, "p_420->g_170.y", print_hash_value);
    transparent_crc(p_420->g_181.x, "p_420->g_181.x", print_hash_value);
    transparent_crc(p_420->g_181.y, "p_420->g_181.y", print_hash_value);
    transparent_crc(p_420->g_181.z, "p_420->g_181.z", print_hash_value);
    transparent_crc(p_420->g_181.w, "p_420->g_181.w", print_hash_value);
    transparent_crc(p_420->g_183.s0, "p_420->g_183.s0", print_hash_value);
    transparent_crc(p_420->g_183.s1, "p_420->g_183.s1", print_hash_value);
    transparent_crc(p_420->g_183.s2, "p_420->g_183.s2", print_hash_value);
    transparent_crc(p_420->g_183.s3, "p_420->g_183.s3", print_hash_value);
    transparent_crc(p_420->g_183.s4, "p_420->g_183.s4", print_hash_value);
    transparent_crc(p_420->g_183.s5, "p_420->g_183.s5", print_hash_value);
    transparent_crc(p_420->g_183.s6, "p_420->g_183.s6", print_hash_value);
    transparent_crc(p_420->g_183.s7, "p_420->g_183.s7", print_hash_value);
    transparent_crc(p_420->g_183.s8, "p_420->g_183.s8", print_hash_value);
    transparent_crc(p_420->g_183.s9, "p_420->g_183.s9", print_hash_value);
    transparent_crc(p_420->g_183.sa, "p_420->g_183.sa", print_hash_value);
    transparent_crc(p_420->g_183.sb, "p_420->g_183.sb", print_hash_value);
    transparent_crc(p_420->g_183.sc, "p_420->g_183.sc", print_hash_value);
    transparent_crc(p_420->g_183.sd, "p_420->g_183.sd", print_hash_value);
    transparent_crc(p_420->g_183.se, "p_420->g_183.se", print_hash_value);
    transparent_crc(p_420->g_183.sf, "p_420->g_183.sf", print_hash_value);
    transparent_crc(p_420->g_185.x, "p_420->g_185.x", print_hash_value);
    transparent_crc(p_420->g_185.y, "p_420->g_185.y", print_hash_value);
    transparent_crc(p_420->g_186.x, "p_420->g_186.x", print_hash_value);
    transparent_crc(p_420->g_186.y, "p_420->g_186.y", print_hash_value);
    transparent_crc(p_420->g_218.x, "p_420->g_218.x", print_hash_value);
    transparent_crc(p_420->g_218.y, "p_420->g_218.y", print_hash_value);
    transparent_crc(p_420->g_226.x, "p_420->g_226.x", print_hash_value);
    transparent_crc(p_420->g_226.y, "p_420->g_226.y", print_hash_value);
    transparent_crc(p_420->g_227.x, "p_420->g_227.x", print_hash_value);
    transparent_crc(p_420->g_227.y, "p_420->g_227.y", print_hash_value);
    transparent_crc(p_420->g_227.z, "p_420->g_227.z", print_hash_value);
    transparent_crc(p_420->g_227.w, "p_420->g_227.w", print_hash_value);
    transparent_crc(p_420->g_261.f0, "p_420->g_261.f0", print_hash_value);
    transparent_crc(p_420->g_261.f1, "p_420->g_261.f1", print_hash_value);
    transparent_crc(p_420->g_261.f2, "p_420->g_261.f2", print_hash_value);
    transparent_crc(p_420->g_261.f3, "p_420->g_261.f3", print_hash_value);
    transparent_crc(p_420->g_273.f0, "p_420->g_273.f0", print_hash_value);
    transparent_crc(p_420->g_273.f1, "p_420->g_273.f1", print_hash_value);
    transparent_crc(p_420->g_273.f2, "p_420->g_273.f2", print_hash_value);
    transparent_crc(p_420->g_273.f3, "p_420->g_273.f3", print_hash_value);
    transparent_crc(p_420->g_286.x, "p_420->g_286.x", print_hash_value);
    transparent_crc(p_420->g_286.y, "p_420->g_286.y", print_hash_value);
    transparent_crc(p_420->g_286.z, "p_420->g_286.z", print_hash_value);
    transparent_crc(p_420->g_286.w, "p_420->g_286.w", print_hash_value);
    transparent_crc(p_420->g_287.s0, "p_420->g_287.s0", print_hash_value);
    transparent_crc(p_420->g_287.s1, "p_420->g_287.s1", print_hash_value);
    transparent_crc(p_420->g_287.s2, "p_420->g_287.s2", print_hash_value);
    transparent_crc(p_420->g_287.s3, "p_420->g_287.s3", print_hash_value);
    transparent_crc(p_420->g_287.s4, "p_420->g_287.s4", print_hash_value);
    transparent_crc(p_420->g_287.s5, "p_420->g_287.s5", print_hash_value);
    transparent_crc(p_420->g_287.s6, "p_420->g_287.s6", print_hash_value);
    transparent_crc(p_420->g_287.s7, "p_420->g_287.s7", print_hash_value);
    transparent_crc(p_420->g_287.s8, "p_420->g_287.s8", print_hash_value);
    transparent_crc(p_420->g_287.s9, "p_420->g_287.s9", print_hash_value);
    transparent_crc(p_420->g_287.sa, "p_420->g_287.sa", print_hash_value);
    transparent_crc(p_420->g_287.sb, "p_420->g_287.sb", print_hash_value);
    transparent_crc(p_420->g_287.sc, "p_420->g_287.sc", print_hash_value);
    transparent_crc(p_420->g_287.sd, "p_420->g_287.sd", print_hash_value);
    transparent_crc(p_420->g_287.se, "p_420->g_287.se", print_hash_value);
    transparent_crc(p_420->g_287.sf, "p_420->g_287.sf", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_420->g_299[i], "p_420->g_299[i]", print_hash_value);

    }
    transparent_crc(p_420->g_310.f0, "p_420->g_310.f0", print_hash_value);
    transparent_crc(p_420->g_310.f1, "p_420->g_310.f1", print_hash_value);
    transparent_crc(p_420->g_310.f2, "p_420->g_310.f2", print_hash_value);
    transparent_crc(p_420->g_310.f3, "p_420->g_310.f3", print_hash_value);
    transparent_crc(p_420->g_323, "p_420->g_323", print_hash_value);
    transparent_crc(p_420->g_330.s0, "p_420->g_330.s0", print_hash_value);
    transparent_crc(p_420->g_330.s1, "p_420->g_330.s1", print_hash_value);
    transparent_crc(p_420->g_330.s2, "p_420->g_330.s2", print_hash_value);
    transparent_crc(p_420->g_330.s3, "p_420->g_330.s3", print_hash_value);
    transparent_crc(p_420->g_330.s4, "p_420->g_330.s4", print_hash_value);
    transparent_crc(p_420->g_330.s5, "p_420->g_330.s5", print_hash_value);
    transparent_crc(p_420->g_330.s6, "p_420->g_330.s6", print_hash_value);
    transparent_crc(p_420->g_330.s7, "p_420->g_330.s7", print_hash_value);
    transparent_crc(p_420->g_330.s8, "p_420->g_330.s8", print_hash_value);
    transparent_crc(p_420->g_330.s9, "p_420->g_330.s9", print_hash_value);
    transparent_crc(p_420->g_330.sa, "p_420->g_330.sa", print_hash_value);
    transparent_crc(p_420->g_330.sb, "p_420->g_330.sb", print_hash_value);
    transparent_crc(p_420->g_330.sc, "p_420->g_330.sc", print_hash_value);
    transparent_crc(p_420->g_330.sd, "p_420->g_330.sd", print_hash_value);
    transparent_crc(p_420->g_330.se, "p_420->g_330.se", print_hash_value);
    transparent_crc(p_420->g_330.sf, "p_420->g_330.sf", print_hash_value);
    transparent_crc(p_420->g_331.x, "p_420->g_331.x", print_hash_value);
    transparent_crc(p_420->g_331.y, "p_420->g_331.y", print_hash_value);
    transparent_crc(p_420->g_331.z, "p_420->g_331.z", print_hash_value);
    transparent_crc(p_420->g_331.w, "p_420->g_331.w", print_hash_value);
    transparent_crc(p_420->g_334.s0, "p_420->g_334.s0", print_hash_value);
    transparent_crc(p_420->g_334.s1, "p_420->g_334.s1", print_hash_value);
    transparent_crc(p_420->g_334.s2, "p_420->g_334.s2", print_hash_value);
    transparent_crc(p_420->g_334.s3, "p_420->g_334.s3", print_hash_value);
    transparent_crc(p_420->g_334.s4, "p_420->g_334.s4", print_hash_value);
    transparent_crc(p_420->g_334.s5, "p_420->g_334.s5", print_hash_value);
    transparent_crc(p_420->g_334.s6, "p_420->g_334.s6", print_hash_value);
    transparent_crc(p_420->g_334.s7, "p_420->g_334.s7", print_hash_value);
    transparent_crc(p_420->g_359.s0, "p_420->g_359.s0", print_hash_value);
    transparent_crc(p_420->g_359.s1, "p_420->g_359.s1", print_hash_value);
    transparent_crc(p_420->g_359.s2, "p_420->g_359.s2", print_hash_value);
    transparent_crc(p_420->g_359.s3, "p_420->g_359.s3", print_hash_value);
    transparent_crc(p_420->g_359.s4, "p_420->g_359.s4", print_hash_value);
    transparent_crc(p_420->g_359.s5, "p_420->g_359.s5", print_hash_value);
    transparent_crc(p_420->g_359.s6, "p_420->g_359.s6", print_hash_value);
    transparent_crc(p_420->g_359.s7, "p_420->g_359.s7", print_hash_value);
    transparent_crc(p_420->g_364, "p_420->g_364", print_hash_value);
    transparent_crc(p_420->g_368, "p_420->g_368", print_hash_value);
    transparent_crc(p_420->g_377.f0, "p_420->g_377.f0", print_hash_value);
    transparent_crc(p_420->g_377.f1, "p_420->g_377.f1", print_hash_value);
    transparent_crc(p_420->g_377.f2, "p_420->g_377.f2", print_hash_value);
    transparent_crc(p_420->g_377.f3, "p_420->g_377.f3", print_hash_value);
    transparent_crc(p_420->g_405.s0, "p_420->g_405.s0", print_hash_value);
    transparent_crc(p_420->g_405.s1, "p_420->g_405.s1", print_hash_value);
    transparent_crc(p_420->g_405.s2, "p_420->g_405.s2", print_hash_value);
    transparent_crc(p_420->g_405.s3, "p_420->g_405.s3", print_hash_value);
    transparent_crc(p_420->g_405.s4, "p_420->g_405.s4", print_hash_value);
    transparent_crc(p_420->g_405.s5, "p_420->g_405.s5", print_hash_value);
    transparent_crc(p_420->g_405.s6, "p_420->g_405.s6", print_hash_value);
    transparent_crc(p_420->g_405.s7, "p_420->g_405.s7", print_hash_value);
    transparent_crc(p_420->g_408.x, "p_420->g_408.x", print_hash_value);
    transparent_crc(p_420->g_408.y, "p_420->g_408.y", print_hash_value);
    transparent_crc(p_420->g_408.z, "p_420->g_408.z", print_hash_value);
    transparent_crc(p_420->g_408.w, "p_420->g_408.w", print_hash_value);
    transparent_crc(p_420->g_419.f0, "p_420->g_419.f0", print_hash_value);
    transparent_crc(p_420->g_419.f1, "p_420->g_419.f1", print_hash_value);
    transparent_crc(p_420->v_collective, "p_420->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 39; i++)
            transparent_crc(p_420->l_special_values[i], "p_420->l_special_values[i]", print_hash_value);
    transparent_crc(p_420->l_comm_values[get_linear_local_id()], "p_420->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_420->g_comm_values[get_linear_group_id() * 43 + get_linear_local_id()], "p_420->g_comm_values[get_linear_group_id() * 43 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
