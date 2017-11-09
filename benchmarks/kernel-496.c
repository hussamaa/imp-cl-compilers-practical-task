// --atomics 6 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 49,63,1 -l 49,1,1
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

__constant uint32_t permutations[10][49] = {
{36,0,26,41,38,40,6,31,22,23,44,7,21,20,32,19,4,9,13,17,46,35,25,16,5,12,39,48,8,43,28,3,42,2,47,29,37,34,24,1,18,33,27,15,30,10,14,11,45}, // permutation 0
{47,4,8,31,37,32,34,5,1,20,24,35,23,39,13,3,48,43,38,15,21,18,2,33,40,29,42,14,6,36,26,7,28,17,27,19,12,0,10,22,11,25,41,30,44,9,45,16,46}, // permutation 1
{6,12,8,2,22,19,13,21,48,37,18,27,32,25,14,5,23,42,39,47,41,34,31,3,16,20,29,30,24,36,7,33,40,44,26,0,11,28,38,1,9,10,43,46,35,15,4,45,17}, // permutation 2
{42,10,28,6,22,48,41,30,1,45,19,27,11,8,9,43,23,20,17,0,31,7,37,18,24,46,33,32,40,47,26,16,12,34,25,4,29,39,38,5,44,13,3,2,36,21,15,35,14}, // permutation 3
{40,19,6,17,30,36,31,0,23,47,11,29,41,18,44,43,4,13,32,15,10,20,27,35,24,14,39,7,8,9,42,1,46,12,21,25,5,22,37,45,34,2,33,38,16,48,3,26,28}, // permutation 4
{35,43,28,21,11,41,16,25,26,45,46,40,18,7,15,17,39,34,24,32,2,42,20,44,19,31,23,22,48,9,6,27,3,5,33,47,14,30,8,37,0,10,12,4,36,38,29,1,13}, // permutation 5
{40,31,18,12,13,15,27,20,8,26,17,29,3,24,9,43,23,21,7,19,45,11,36,37,47,38,30,14,35,25,22,0,6,33,39,28,48,4,2,44,34,10,42,5,16,46,41,1,32}, // permutation 6
{14,8,23,34,46,38,12,16,15,41,6,7,17,2,13,47,21,37,10,0,9,4,42,3,20,32,24,1,5,18,48,25,30,29,22,31,45,27,39,40,36,44,35,43,26,28,11,19,33}, // permutation 7
{22,11,29,0,47,12,31,14,9,26,24,21,25,39,48,33,20,42,36,4,3,43,28,44,34,46,45,8,7,16,17,19,2,30,6,10,40,5,1,13,35,32,27,23,41,15,37,38,18}, // permutation 8
{18,45,6,41,21,43,34,23,20,38,32,37,16,40,39,1,0,42,44,31,24,2,36,15,10,35,26,33,14,4,13,9,46,29,3,48,17,11,8,7,12,22,25,28,47,27,19,5,30} // permutation 9
};

// Seed: 3023639580

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint8_t  f0;
   uint64_t  f1;
   int32_t  f2;
   int16_t  f3;
   int8_t  f4;
   volatile int32_t  f5;
   int64_t  f6;
   volatile uint32_t  f7;
   uint32_t  f8;
};

struct S1 {
   int8_t  f0;
   uint8_t  f1;
   volatile uint32_t  f2;
   uint32_t  f3;
   volatile int16_t  f4;
};

struct S2 {
   uint32_t  f0;
   volatile uint64_t  f1;
   int16_t  f2;
   uint8_t  f3;
   struct S1  f4;
   int64_t  f5;
   struct S0  f6;
};

struct S3 {
    VECTOR(int32_t, 8) g_11;
    int32_t *g_10[5][5];
    int32_t g_14;
    int16_t g_19;
    VECTOR(uint32_t, 4) g_50;
    volatile struct S1 g_74;
    uint32_t g_84[10];
    int16_t g_108;
    VECTOR(uint32_t, 16) g_109;
    int16_t g_110;
    int8_t g_112;
    VECTOR(int8_t, 4) g_119;
    VECTOR(int8_t, 4) g_121;
    volatile VECTOR(int8_t, 16) g_122;
    struct S2 g_134;
    int32_t g_137;
    volatile VECTOR(int16_t, 8) g_162;
    uint32_t g_168;
    int32_t ** volatile g_171;
    int32_t * volatile g_200;
    int32_t * volatile g_202[4][5][4];
    int32_t * volatile g_203[10];
    int32_t * volatile g_204;
    int32_t * volatile g_205;
    int32_t * volatile g_206;
    int32_t * volatile g_210;
    volatile VECTOR(uint16_t, 16) g_215;
    volatile VECTOR(uint16_t, 16) g_225;
    int32_t * volatile g_234;
    int32_t *g_257;
    int32_t **g_256[9][5];
    int32_t *** volatile g_255[9][2];
    int32_t *g_316;
    int32_t ** volatile g_315;
    volatile VECTOR(int32_t, 16) g_327;
    struct S2 g_335;
    struct S2 *g_334;
    volatile struct S1 g_336;
    volatile struct S1 g_337;
    volatile struct S2 g_344;
    VECTOR(int32_t, 2) g_360;
    int32_t ** volatile g_371;
    volatile uint8_t * volatile *g_374;
    int32_t g_379;
    volatile int16_t g_380;
    volatile VECTOR(int64_t, 2) g_392;
    struct S0 g_415;
    VECTOR(int64_t, 4) g_433;
    struct S2 ** volatile g_436;
    struct S2 ** volatile *g_435;
    int32_t g_483;
    VECTOR(int32_t, 4) g_510;
    VECTOR(uint32_t, 8) g_513;
    volatile VECTOR(int32_t, 2) g_525;
    volatile uint32_t g_532;
    volatile VECTOR(int32_t, 4) g_537;
    volatile VECTOR(int32_t, 16) g_538;
    struct S0 g_543;
    uint64_t g_551;
    struct S0 g_577;
    volatile uint16_t * volatile g_580;
    uint16_t g_582;
    uint16_t *g_581;
    volatile VECTOR(int16_t, 16) g_609;
    volatile uint8_t g_625;
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
uint32_t  func_1(struct S3 * p_632);
int32_t * func_5(int32_t * p_6, int32_t  p_7, int32_t * p_8, int32_t * p_9, struct S3 * p_632);
int32_t * func_16(int64_t  p_17, int32_t * p_18, struct S3 * p_632);
int32_t * func_20(int32_t * p_21, int64_t  p_22, int32_t * p_23, int16_t  p_24, struct S3 * p_632);
uint32_t  func_29(int32_t * p_30, struct S3 * p_632);
int32_t  func_31(int32_t  p_32, uint64_t  p_33, int32_t * p_34, int64_t  p_35, struct S3 * p_632);
uint8_t  func_36(int32_t * p_37, int32_t  p_38, int32_t * p_39, struct S3 * p_632);
int32_t * func_40(uint32_t  p_41, uint32_t  p_42, int32_t * p_43, uint64_t  p_44, struct S3 * p_632);
int16_t  func_63(int32_t  p_64, int32_t * p_65, uint32_t  p_66, uint32_t * p_67, struct S3 * p_632);
int32_t  func_68(int32_t * p_69, int32_t * p_70, int32_t * p_71, int64_t  p_72, struct S3 * p_632);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_632->g_10 p_632->l_comm_values p_632->g_11 p_632->g_74 p_632->g_50 p_632->g_84 p_632->g_108 p_632->g_110 p_632->g_112 p_632->g_119 p_632->g_121 p_632->g_122 p_632->g_134 p_632->g_162 p_632->g_14 p_632->g_168 p_632->g_comm_values p_632->g_137 p_632->g_215 p_632->g_225 p_632->g_315 p_632->g_336 p_632->g_335.f6.f4 p_632->g_360 p_632->g_335.f5 p_632->g_433 p_632->g_435 p_632->g_335.f0 p_632->g_335.f3 p_632->g_415.f8 p_632->g_335.f6.f2 p_632->g_415.f2 p_632->g_335.f6.f1 p_632->g_344.f5 p_632->g_379 p_632->g_335.f4.f0 p_632->g_109 p_632->g_415.f0 p_632->g_532 p_632->g_316 p_632->g_371 p_632->g_577 p_632->g_335.f6.f3 p_632->g_580 p_632->g_205 p_632->g_581 p_632->g_582 p_632->g_334 p_632->g_335 p_632->g_625 p_632->g_344.f1
 * writes: p_632->g_19 p_632->g_84 p_632->g_108 p_632->g_109 p_632->g_112 p_632->g_121 p_632->g_134 p_632->g_137 p_632->g_110 p_632->g_168 p_632->g_256 p_632->g_14 p_632->g_316 p_632->g_334 p_632->g_337 p_632->g_335.f2 p_632->g_335.f5 p_632->g_415.f0 p_632->g_415.f4 p_632->g_483 p_632->g_532 p_632->g_581 p_632->g_344.f4 p_632->g_comm_values p_632->g_625
 */
uint32_t  func_1(struct S3 * p_632)
{ /* block id: 4 */
    uint64_t l_2 = 1UL;
    int32_t l_12 = 0x0EFA97F5L;
    int32_t *l_13[7][7] = {{&l_12,(void*)0,&l_12,&p_632->g_14,(void*)0,(void*)0,&p_632->g_14},{&l_12,(void*)0,&l_12,&p_632->g_14,(void*)0,(void*)0,&p_632->g_14},{&l_12,(void*)0,&l_12,&p_632->g_14,(void*)0,(void*)0,&p_632->g_14},{&l_12,(void*)0,&l_12,&p_632->g_14,(void*)0,(void*)0,&p_632->g_14},{&l_12,(void*)0,&l_12,&p_632->g_14,(void*)0,(void*)0,&p_632->g_14},{&l_12,(void*)0,&l_12,&p_632->g_14,(void*)0,(void*)0,&p_632->g_14},{&l_12,(void*)0,&l_12,&p_632->g_14,(void*)0,(void*)0,&p_632->g_14}};
    int32_t l_15 = 0x52AE857BL;
    int32_t *l_248 = &l_12;
    int32_t **l_629 = &p_632->g_316;
    uint32_t l_630 = 0xE55E7A4EL;
    int32_t l_631 = 0L;
    int i, j;
    l_2--;
    (*l_629) = func_5(p_632->g_10[2][4], (l_15 ^= (l_12 & 0x95L)), func_16((p_632->g_19 = (p_632->l_comm_values[(safe_mod_func_uint32_t_u_u(p_632->tid, 49))] , p_632->l_comm_values[(safe_mod_func_uint32_t_u_u(p_632->tid, 49))])), func_20(&p_632->g_14, (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(func_29(l_13[2][5], p_632), 0x28C992A3L)), p_632->l_comm_values[(safe_mod_func_uint32_t_u_u(p_632->tid, 49))])), l_248, p_632->g_50.y, p_632), p_632), l_13[3][2], p_632);
    l_631 ^= l_630;
    return p_632->g_344.f1;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_5(int32_t * p_6, int32_t  p_7, int32_t * p_8, int32_t * p_9, struct S3 * p_632)
{ /* block id: 257 */
    uint32_t l_628 = 4294967295UL;
    l_628 = ((void*)0 != &p_632->g_551);
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_632->g_14 p_632->g_134.f4.f0 p_632->g_315 p_632->g_336 p_632->g_134.f6.f6 p_632->g_335.f6.f4 p_632->g_134.f4.f1 p_632->g_50 p_632->g_134 p_632->g_360 p_632->g_335.f5 p_632->g_433 p_632->g_435 p_632->g_122 p_632->g_335.f0 p_632->g_335.f3 p_632->g_415.f8 p_632->g_335.f6.f2 p_632->g_415.f2 p_632->g_335.f6.f1 p_632->g_84 p_632->g_344.f5 p_632->g_168 p_632->g_379 p_632->g_335.f4.f0 p_632->g_109 p_632->g_415.f0 p_632->g_532 p_632->g_316 p_632->g_371 p_632->g_121 p_632->g_577 p_632->g_335.f6.f3 p_632->g_580 p_632->g_205 p_632->g_581 p_632->g_582 p_632->g_110 p_632->g_119 p_632->g_334 p_632->g_335 p_632->g_comm_values p_632->g_625
 * writes: p_632->g_256 p_632->g_14 p_632->g_134.f4.f0 p_632->g_134.f6.f1 p_632->g_316 p_632->g_334 p_632->g_337 p_632->g_134.f6.f6 p_632->g_335.f2 p_632->g_335.f5 p_632->g_110 p_632->g_415.f0 p_632->g_134.f6.f4 p_632->g_415.f4 p_632->g_483 p_632->g_168 p_632->g_532 p_632->g_581 p_632->g_344.f4 p_632->g_comm_values p_632->g_625
 */
int32_t * func_16(int64_t  p_17, int32_t * p_18, struct S3 * p_632)
{ /* block id: 88 */
    int32_t *l_253 = &p_632->g_14;
    int32_t **l_252[10][6] = {{(void*)0,&l_253,&l_253,&l_253,&l_253,&l_253},{(void*)0,&l_253,&l_253,&l_253,&l_253,&l_253},{(void*)0,&l_253,&l_253,&l_253,&l_253,&l_253},{(void*)0,&l_253,&l_253,&l_253,&l_253,&l_253},{(void*)0,&l_253,&l_253,&l_253,&l_253,&l_253},{(void*)0,&l_253,&l_253,&l_253,&l_253,&l_253},{(void*)0,&l_253,&l_253,&l_253,&l_253,&l_253},{(void*)0,&l_253,&l_253,&l_253,&l_253,&l_253},{(void*)0,&l_253,&l_253,&l_253,&l_253,&l_253},{(void*)0,&l_253,&l_253,&l_253,&l_253,&l_253}};
    int32_t ***l_254 = &l_252[1][1];
    int32_t ***l_258 = &p_632->g_256[6][3];
    VECTOR(int32_t, 8) l_259 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
    VECTOR(int32_t, 16) l_328 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
    VECTOR(uint8_t, 8) l_363 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL);
    VECTOR(uint8_t, 8) l_364 = (VECTOR(uint8_t, 8))(0xF7L, (VECTOR(uint8_t, 4))(0xF7L, (VECTOR(uint8_t, 2))(0xF7L, 0x29L), 0x29L), 0x29L, 0xF7L, 0x29L);
    uint8_t *l_376 = (void*)0;
    uint8_t **l_375 = &l_376;
    VECTOR(uint32_t, 4) l_390 = (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 2UL), 2UL);
    int64_t l_397 = 0x32A6517F6B34E829L;
    int32_t *l_421 = (void*)0;
    VECTOR(int16_t, 4) l_461 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 7L), 7L);
    struct S2 **l_480[8][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    struct S2 ***l_479 = &l_480[6][0];
    VECTOR(uint32_t, 4) l_512 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL);
    int64_t l_523 = (-1L);
    uint32_t **l_594 = (void*)0;
    uint32_t ***l_593 = &l_594;
    int64_t *l_606 = &p_632->g_415.f6;
    int i, j;
    (*l_258) = ((*l_254) = l_252[5][3]);
    if (((*p_18) ^= ((VECTOR(int32_t, 2))(l_259.s37)).hi))
    { /* block id: 92 */
        struct S2 ***l_260 = (void*)0;
        struct S2 ***l_261 = (void*)0;
        struct S2 *l_264 = &p_632->g_134;
        struct S2 **l_263 = &l_264;
        struct S2 ***l_262 = &l_263;
        int32_t l_317 = 0L;
        int32_t l_320 = 0x79283981L;
        int32_t l_321 = 0L;
        int32_t l_322 = 9L;
        int32_t l_323 = (-1L);
        VECTOR(int32_t, 2) l_329 = (VECTOR(int32_t, 2))(8L, 0x3A935475L);
        VECTOR(int32_t, 4) l_356 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x394E5E61L), 0x394E5E61L);
        VECTOR(int32_t, 16) l_357 = (VECTOR(int32_t, 16))(0x4EEBD542L, (VECTOR(int32_t, 4))(0x4EEBD542L, (VECTOR(int32_t, 2))(0x4EEBD542L, 0L), 0L), 0L, 0x4EEBD542L, 0L, (VECTOR(int32_t, 2))(0x4EEBD542L, 0L), (VECTOR(int32_t, 2))(0x4EEBD542L, 0L), 0x4EEBD542L, 0L, 0x4EEBD542L, 0L);
        VECTOR(int32_t, 2) l_391 = (VECTOR(int32_t, 2))(0x50E0AAF3L, 0x2187F322L);
        uint8_t **l_404[4] = {&l_376,&l_376,&l_376,&l_376};
        int8_t *l_418[2];
        uint32_t l_419[5][2][10] = {{{0UL,0UL,0x37DF4D30L,4294967295UL,0xA9D6C2FFL,1UL,0x8852724EL,0x2EEB631BL,0x8852724EL,1UL},{0UL,0UL,0x37DF4D30L,4294967295UL,0xA9D6C2FFL,1UL,0x8852724EL,0x2EEB631BL,0x8852724EL,1UL}},{{0UL,0UL,0x37DF4D30L,4294967295UL,0xA9D6C2FFL,1UL,0x8852724EL,0x2EEB631BL,0x8852724EL,1UL},{0UL,0UL,0x37DF4D30L,4294967295UL,0xA9D6C2FFL,1UL,0x8852724EL,0x2EEB631BL,0x8852724EL,1UL}},{{0UL,0UL,0x37DF4D30L,4294967295UL,0xA9D6C2FFL,1UL,0x8852724EL,0x2EEB631BL,0x8852724EL,1UL},{0UL,0UL,0x37DF4D30L,4294967295UL,0xA9D6C2FFL,1UL,0x8852724EL,0x2EEB631BL,0x8852724EL,1UL}},{{0UL,0UL,0x37DF4D30L,4294967295UL,0xA9D6C2FFL,1UL,0x8852724EL,0x2EEB631BL,0x8852724EL,1UL},{0UL,0UL,0x37DF4D30L,4294967295UL,0xA9D6C2FFL,1UL,0x8852724EL,0x2EEB631BL,0x8852724EL,1UL}},{{0UL,0UL,0x37DF4D30L,4294967295UL,0xA9D6C2FFL,1UL,0x8852724EL,0x2EEB631BL,0x8852724EL,1UL},{0UL,0UL,0x37DF4D30L,4294967295UL,0xA9D6C2FFL,1UL,0x8852724EL,0x2EEB631BL,0x8852724EL,1UL}}};
        int32_t **l_420[7][7] = {{&p_632->g_10[1][1],&p_632->g_10[2][3],&p_632->g_10[2][4],&p_632->g_10[2][3],&p_632->g_10[1][1],&p_632->g_10[1][1],&p_632->g_10[2][3]},{&p_632->g_10[1][1],&p_632->g_10[2][3],&p_632->g_10[2][4],&p_632->g_10[2][3],&p_632->g_10[1][1],&p_632->g_10[1][1],&p_632->g_10[2][3]},{&p_632->g_10[1][1],&p_632->g_10[2][3],&p_632->g_10[2][4],&p_632->g_10[2][3],&p_632->g_10[1][1],&p_632->g_10[1][1],&p_632->g_10[2][3]},{&p_632->g_10[1][1],&p_632->g_10[2][3],&p_632->g_10[2][4],&p_632->g_10[2][3],&p_632->g_10[1][1],&p_632->g_10[1][1],&p_632->g_10[2][3]},{&p_632->g_10[1][1],&p_632->g_10[2][3],&p_632->g_10[2][4],&p_632->g_10[2][3],&p_632->g_10[1][1],&p_632->g_10[1][1],&p_632->g_10[2][3]},{&p_632->g_10[1][1],&p_632->g_10[2][3],&p_632->g_10[2][4],&p_632->g_10[2][3],&p_632->g_10[1][1],&p_632->g_10[1][1],&p_632->g_10[2][3]},{&p_632->g_10[1][1],&p_632->g_10[2][3],&p_632->g_10[2][4],&p_632->g_10[2][3],&p_632->g_10[1][1],&p_632->g_10[1][1],&p_632->g_10[2][3]}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_418[i] = &p_632->g_134.f6.f4;
        (*l_262) = (void*)0;
        for (p_632->g_134.f4.f0 = (-5); (p_632->g_134.f4.f0 >= (-15)); p_632->g_134.f4.f0 = safe_sub_func_uint32_t_u_u(p_632->g_134.f4.f0, 6))
        { /* block id: 96 */
            int32_t *l_318 = &l_317;
            int32_t *l_319[6] = {&l_317,&l_317,&l_317,&l_317,&l_317,&l_317};
            uint32_t l_324[9][3][1] = {{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL}}};
            VECTOR(int32_t, 16) l_358 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-10L)), (-10L)), (-10L), 8L, (-10L), (VECTOR(int32_t, 2))(8L, (-10L)), (VECTOR(int32_t, 2))(8L, (-10L)), 8L, (-10L), 8L, (-10L));
            int i, j, k;
            if ((atomic_inc(&p_632->g_atomic_input[6 * get_linear_group_id() + 0]) == 9))
            { /* block id: 98 */
                int8_t l_267 = 0x5BL;
                int64_t l_268[1];
                int64_t l_269 = 0x0B17181840488C37L;
                uint8_t l_270 = 0x68L;
                uint64_t l_273 = 0xCE6AA63A2ED1A2A8L;
                int i;
                for (i = 0; i < 1; i++)
                    l_268[i] = 0x39E5BC21278764A2L;
                l_270--;
                if (l_273)
                { /* block id: 100 */
                    uint8_t l_274[7][1];
                    uint16_t l_275 = 1UL;
                    int32_t l_277[6][4][6] = {{{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL}},{{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL}},{{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL}},{{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL}},{{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL}},{{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL},{0x0FFDCB38L,(-6L),1L,(-7L),0x4D02EC44L,0x0ECF1C8CL}}};
                    int32_t *l_276 = &l_277[1][2][0];
                    int32_t *l_278 = &l_277[1][2][0];
                    int32_t *l_279 = &l_277[1][1][5];
                    int8_t l_280[9] = {0x2DL,0x2DL,0x2DL,0x2DL,0x2DL,0x2DL,0x2DL,0x2DL,0x2DL};
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_274[i][j] = 0x5EL;
                    }
                    l_275 = (l_274[4][0] ^= 1L);
                    l_279 = (l_278 = l_276);
                    if (l_280[3])
                    { /* block id: 105 */
                        uint16_t l_281[10] = {0xC345L,0xC345L,0xC345L,0xC345L,0xC345L,0xC345L,0xC345L,0xC345L,0xC345L,0xC345L};
                        int i;
                        l_281[7]--;
                    }
                    else
                    { /* block id: 107 */
                        VECTOR(int32_t, 16) l_284 = (VECTOR(int32_t, 16))(0x47910791L, (VECTOR(int32_t, 4))(0x47910791L, (VECTOR(int32_t, 2))(0x47910791L, 0x029F15E4L), 0x029F15E4L), 0x029F15E4L, 0x47910791L, 0x029F15E4L, (VECTOR(int32_t, 2))(0x47910791L, 0x029F15E4L), (VECTOR(int32_t, 2))(0x47910791L, 0x029F15E4L), 0x47910791L, 0x029F15E4L, 0x47910791L, 0x029F15E4L);
                        int32_t l_285 = 0x3D80BB3DL;
                        int8_t l_286[1][2][8] = {{{0x7CL,0x7CL,0x7CL,0x7CL,0x7CL,0x7CL,0x7CL,0x7CL},{0x7CL,0x7CL,0x7CL,0x7CL,0x7CL,0x7CL,0x7CL,0x7CL}}};
                        int16_t l_287 = 0L;
                        int64_t l_288 = 1L;
                        uint64_t l_289 = 18446744073709551615UL;
                        int16_t l_292 = 0x7D12L;
                        int i, j, k;
                        l_286[0][1][2] ^= ((*l_278) = ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_284.s6916117551b62534)).lo)).s6641213271654266, (int32_t)l_285))).s1);
                        (*l_279) = (l_285 = 0x395D2CEBL);
                        --l_289;
                        (*l_276) = l_292;
                    }
                }
                else
                { /* block id: 115 */
                    VECTOR(uint64_t, 16) l_293 = (VECTOR(uint64_t, 16))(0xA3BE19D1D845EB48L, (VECTOR(uint64_t, 4))(0xA3BE19D1D845EB48L, (VECTOR(uint64_t, 2))(0xA3BE19D1D845EB48L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xA3BE19D1D845EB48L, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0xA3BE19D1D845EB48L, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0xA3BE19D1D845EB48L, 18446744073709551615UL), 0xA3BE19D1D845EB48L, 18446744073709551615UL, 0xA3BE19D1D845EB48L, 18446744073709551615UL);
                    uint8_t l_294 = 0x36L;
                    uint32_t l_295 = 0xDFA04C87L;
                    int8_t l_296 = (-1L);
                    uint32_t l_297 = 4294967291UL;
                    int i;
                    l_293.sa &= 4L;
                    if ((l_297 |= ((l_294 , FAKE_DIVERGE(p_632->global_2_offset, get_global_id(2), 10)) , ((l_295 = 0x1719A44CD39AF578L) , l_296))))
                    { /* block id: 119 */
                        uint8_t l_298 = 1UL;
                        int32_t l_302 = 0x04B87F05L;
                        int32_t *l_301 = &l_302;
                        int32_t *l_303 = &l_302;
                        int32_t *l_304 = &l_302;
                        int32_t l_305[8];
                        int32_t l_306 = (-1L);
                        uint8_t l_307 = 0x05L;
                        int i;
                        for (i = 0; i < 8; i++)
                            l_305[i] = 0x4F187992L;
                        l_298++;
                        l_301 = (void*)0;
                        l_304 = l_303;
                        l_307--;
                    }
                    else
                    { /* block id: 124 */
                        int16_t l_310 = (-3L);
                        l_310 |= 0x3692279FL;
                    }
                }
                unsigned int result = 0;
                result += l_267;
                int l_268_i0;
                for (l_268_i0 = 0; l_268_i0 < 1; l_268_i0++) {
                    result += l_268[l_268_i0];
                }
                result += l_269;
                result += l_270;
                result += l_273;
                atomic_add(&p_632->g_special_values[6 * get_linear_group_id() + 0], result);
            }
            else
            { /* block id: 128 */
                (1 + 1);
            }
            for (p_632->g_134.f6.f1 = 0; (p_632->g_134.f6.f1 > 19); p_632->g_134.f6.f1++)
            { /* block id: 133 */
                for (p_632->g_14 = (-1); (p_632->g_14 > (-11)); p_632->g_14 = safe_sub_func_int8_t_s_s(p_632->g_14, 7))
                { /* block id: 136 */
                    (*p_632->g_315) = p_18;
                }
            }
            --l_324[7][2][0];
            if (((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(p_632->g_327.s7ddba5227e1b0a81)), ((VECTOR(int32_t, 16))(l_328.s32e63b7fde957bf9))))).se565)).zyyyyxywxyyzzxww)).s25e1, ((VECTOR(int32_t, 8))(l_329.yyxyxyxx)).odd))).y)
            { /* block id: 141 */
                uint64_t l_332 = 0x45C48BDE9DC1AA43L;
                struct S2 *l_333 = &p_632->g_134;
                for (l_323 = (-17); (l_323 <= (-16)); l_323 = safe_add_func_uint16_t_u_u(l_323, 4))
                { /* block id: 144 */
                    if (l_332)
                        break;
                    return p_18;
                }
                p_632->g_334 = l_333;
                p_632->g_337 = (GROUP_DIVERGE(2, 1) , p_632->g_336);
                if (l_329.y)
                    continue;
            }
            else
            { /* block id: 151 */
                uint8_t *l_354 = &p_632->g_335.f4.f1;
                int32_t l_389 = (-5L);
                int32_t *l_398 = &p_632->g_137;
                int16_t *l_399 = (void*)0;
                int16_t *l_400 = &p_632->g_335.f2;
                int32_t **l_401[10] = {&p_632->g_316,&p_632->g_316,&p_632->g_316,&p_632->g_316,&p_632->g_316,&p_632->g_316,&p_632->g_316,&p_632->g_316,&p_632->g_316,&p_632->g_316};
                int i;
                for (p_632->g_134.f6.f6 = 0; (p_632->g_134.f6.f6 >= (-21)); p_632->g_134.f6.f6 = safe_sub_func_int8_t_s_s(p_632->g_134.f6.f6, 2))
                { /* block id: 154 */
                    uint8_t *l_353 = &p_632->g_335.f3;
                    VECTOR(int32_t, 4) l_359 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
                    int32_t ***l_369 = &l_252[2][4];
                    int i;
                    (1 + 1);
                }
                (*p_18) = l_328.s6;
                l_356.y |= ((p_632->g_134.f6.f6 || (p_632->g_335.f6.f4 < 65535UL)) || ((safe_rshift_func_uint8_t_u_s(((((*l_400) = ((((safe_mod_func_int32_t_s_s((*p_18), (safe_mul_func_uint8_t_u_u((((l_389 = FAKE_DIVERGE(p_632->group_2_offset, get_group_id(2), 10)) <= (*p_18)) > ((0x1C756387L & ((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 4))(l_390.zywx)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 2))((-9L), (-3L))).yyyyxyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_391.xyxxxyyy)).s7300073167343633)).odd))).s61)), 4294967291UL, 0x02C6AA22L))))).w) | ((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(p_632->g_392.yxyxxxyxyyyxxxyy)).s08)), (((safe_div_func_uint32_t_u_u(0xB4BD69DBL, (safe_mul_func_uint8_t_u_u(l_397, (((((*l_398) = (p_632->g_134.f2 , 1L)) , 255UL) > l_322) | 9UL))))) == 3L) & p_17), (-8L), 0x2D05CBD456A31D1CL, ((VECTOR(int64_t, 2))(0x50574128965A8C63L)), (-5L))).s60)).lo , p_17) ^ 0UL))), 0x87L)))) <= p_632->g_134.f4.f1) <= 4UL) , 0x6470L)) || 0xD4E9L) & (*l_318)), p_632->g_134.f6.f6)) >= p_632->g_50.x));
                p_18 = ((*l_264) , p_18);
            }
        }
        l_421 = ((*p_632->g_315) = (p_18 = (p_632->g_360.x , p_18)));
    }
    else
    { /* block id: 189 */
        uint64_t l_429 = 0xEB0016C54924208BL;
        int32_t *l_432[1];
        int64_t *l_434[5][2] = {{&l_397,&p_632->g_134.f5},{&l_397,&p_632->g_134.f5},{&l_397,&p_632->g_134.f5},{&l_397,&p_632->g_134.f5},{&l_397,&p_632->g_134.f5}};
        int16_t *l_453 = &p_632->g_110;
        VECTOR(uint16_t, 4) l_454 = (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0x5526L), 0x5526L);
        VECTOR(int32_t, 8) l_466 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
        uint32_t *l_469[10][9][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        uint8_t l_472 = 0x70L;
        uint8_t *l_473 = &l_472;
        uint8_t *l_474 = &p_632->g_415.f0;
        uint64_t *l_475 = &l_429;
        int32_t l_476 = 0x6710EBD2L;
        int8_t *l_477 = &p_632->g_134.f6.f4;
        int8_t *l_478 = &p_632->g_415.f4;
        struct S2 ****l_481 = &l_479;
        int64_t *l_482 = (void*)0;
        int32_t **l_484 = &l_421;
        VECTOR(int32_t, 8) l_535 = (VECTOR(int32_t, 8))(0x206D5FCEL, (VECTOR(int32_t, 4))(0x206D5FCEL, (VECTOR(int32_t, 2))(0x206D5FCEL, (-1L)), (-1L)), (-1L), 0x206D5FCEL, (-1L));
        int64_t l_558 = 0x7391E21ABC9B0463L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_432[i] = &p_632->g_379;
        for (p_632->g_335.f5 = 9; (p_632->g_335.f5 >= (-21)); p_632->g_335.f5--)
        { /* block id: 192 */
            int32_t *l_424 = (void*)0;
            int32_t *l_425 = (void*)0;
            int32_t *l_426 = (void*)0;
            int32_t *l_427 = (void*)0;
            int32_t *l_428[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            --l_429;
        }
        (*l_484) = func_20(l_432[0], (p_632->g_483 = (l_429 , ((((((p_632->g_134.f6.f6 = ((VECTOR(int64_t, 8))(p_632->g_433.yxwyyzyx)).s6) , p_632->g_435) == ((*l_481) = ((((p_17 || (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((*l_478) = (safe_mul_func_uint8_t_u_u(((((safe_sub_func_uint64_t_u_u(GROUP_DIVERGE(1, 1), (safe_lshift_func_uint8_t_u_u(((((*l_477) = (safe_add_func_uint32_t_u_u((((p_632->g_122.s1 <= (safe_rshift_func_int8_t_s_u((((safe_mul_func_int16_t_s_s(((*l_453) = 0x3BADL), (!(((((VECTOR(uint16_t, 4))(l_454.yxyy)).w && (safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(((*l_475) &= (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_461.wx)).even, ((safe_add_func_uint32_t_u_u(p_632->g_335.f0, ((!(safe_div_func_int32_t_s_s(((*p_18) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_466.s42610047)), ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 8))((-9L), 0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((safe_div_func_uint8_t_u_u(((*l_474) = ((*l_473) = (((l_466.s3 &= p_632->g_335.f3) > (((safe_mul_func_uint8_t_u_u(l_454.x, p_632->g_415.f8)) , l_472) & GROUP_DIVERGE(1, 1))) , p_632->g_335.f6.f2))), (-10L))) > 1L), 0x2E478CD3L, 0x74C8EF0DL, 0x5DC21CE7L)).odd, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0x3C8258A4L))))), ((VECTOR(int32_t, 2))(8L)), ((VECTOR(int32_t, 2))((-10L)))))), 0x4D878B44L, 4L)), (-9L), 2L)), ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))(1L))))))).s6), p_17))) ^ 5L))) >= 0L)))), p_632->g_415.f2)), l_454.y))) , p_632->g_335.f6.f1) <= p_632->g_84[7])))) <= l_454.z) && 9L), p_632->g_335.f3))) ^ p_17) > 0x557A249DL), l_476))) , 1L) & p_632->g_134.f4.f1), 7)))) , p_632->g_344.f5) != p_632->g_335.f0) < p_17), GROUP_DIVERGE(1, 1)))), 4)), 0))) || l_466.s0) > 0x8AB64B3191E6CDAAL) , l_479))) != 0UL) && 0x1E08L) >= p_17))), p_18, p_17, p_632);
        for (p_632->g_168 = 0; (p_632->g_168 <= 30); p_632->g_168++)
        { /* block id: 209 */
            int32_t l_501 = 0x2CD5CFEAL;
            uint32_t *l_506[9][1][5] = {{{&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168}},{{&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168}},{{&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168}},{{&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168}},{{&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168}},{{&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168}},{{&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168}},{{&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168}},{{&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168,&p_632->g_168}}};
            uint32_t **l_505 = &l_506[0][0][2];
            uint32_t l_516 = 1UL;
            int32_t l_524 = 0x2CF5A64AL;
            struct S2 *l_544 = &p_632->g_335;
            uint32_t l_570[7][2] = {{0x0D91EF33L,0x144D5B07L},{0x0D91EF33L,0x144D5B07L},{0x0D91EF33L,0x144D5B07L},{0x0D91EF33L,0x144D5B07L},{0x0D91EF33L,0x144D5B07L},{0x0D91EF33L,0x144D5B07L},{0x0D91EF33L,0x144D5B07L}};
            int32_t **l_586 = (void*)0;
            VECTOR(int8_t, 2) l_596 = (VECTOR(int8_t, 2))(0L, 0x2EL);
            int32_t *l_623 = &l_501;
            int32_t *l_624[6][6] = {{(void*)0,(void*)0,&l_524,(void*)0,&l_524,(void*)0},{(void*)0,(void*)0,&l_524,(void*)0,&l_524,(void*)0},{(void*)0,(void*)0,&l_524,(void*)0,&l_524,(void*)0},{(void*)0,(void*)0,&l_524,(void*)0,&l_524,(void*)0},{(void*)0,(void*)0,&l_524,(void*)0,&l_524,(void*)0},{(void*)0,(void*)0,&l_524,(void*)0,&l_524,(void*)0}};
            int i, j, k;
            if ((safe_lshift_func_int8_t_s_s((-3L), 5)))
            { /* block id: 210 */
                uint8_t l_502 = 0x85L;
                VECTOR(uint32_t, 8) l_511 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967290UL), 4294967290UL), 4294967290UL, 0UL, 4294967290UL);
                int32_t *l_526 = &l_524;
                int32_t *l_527 = &l_524;
                int32_t *l_528 = (void*)0;
                int32_t *l_529 = &l_524;
                int32_t *l_530 = (void*)0;
                int32_t *l_531[8][6][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                struct S2 *l_536 = &p_632->g_335;
                uint64_t *l_549 = (void*)0;
                uint64_t *l_550 = &p_632->g_551;
                int i, j, k;
                for (p_632->g_134.f6.f1 = 0; (p_632->g_134.f6.f1 < 19); ++p_632->g_134.f6.f1)
                { /* block id: 213 */
                    int32_t *l_491 = (void*)0;
                    int32_t *l_492 = (void*)0;
                    int32_t *l_493 = (void*)0;
                    int32_t *l_494 = (void*)0;
                    int32_t *l_495 = (void*)0;
                    int32_t *l_496 = (void*)0;
                    int32_t *l_497 = (void*)0;
                    int32_t *l_498 = (void*)0;
                    int32_t *l_499 = (void*)0;
                    int32_t *l_500[5][2][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    VECTOR(int32_t, 4) l_509 = (VECTOR(int32_t, 4))(0x23C7B043L, (VECTOR(int32_t, 2))(0x23C7B043L, (-3L)), (-3L));
                    int i, j, k;
                    l_502--;
                    l_524 = ((((*p_18) == p_632->g_134.f4.f4) , l_505) != ((p_17 || (safe_mod_func_int8_t_s_s((p_17 | ((((((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 8))(l_509.wywzzwxw)).s5105050211510072, ((VECTOR(int32_t, 8))(0x5442B9C0L, 0x65129237L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(p_632->g_510.xwzw)))), 1L, (-5L))).s6206001063420620))).s05eb, ((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 2))(l_511.s33)).yyxy, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_512.xxzyzwyx)))).even))).lo, ((VECTOR(uint32_t, 4))(p_632->g_513.s6473)).even))).xyxy))).z > (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_632->group_1_offset, get_group_id(1), 10), (l_516 ^ p_632->g_335.f0)))) , ((((*l_475) = (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((!(~(*l_421))) != (p_632->g_335.f4.f0 & 65532UL)), p_632->g_109.sa)), l_523)) & 0x211EF632L), 5))) , p_632->g_415.f0) && 255UL)) != p_17) ^ 0x64F7E527L)), p_632->g_335.f0))) , (void*)0));
                    (*p_18) ^= ((VECTOR(int32_t, 16))(p_632->g_525.xyxyxxxyyxxyxyxx)).sa;
                }
                p_632->g_532--;
                (*p_632->g_315) = (((*p_18) = (+((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(l_535.s7233)).hi, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))((l_536 != (void*)0), 0x732CB90CL, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(1L, 0x238239A0L)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))((-1L), 0x2E45EB86L)).xyyy, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_632->g_537.yxxwxxyz)).s4726651045305651)), ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(p_632->g_538.sa0)).yyyyxxxxxyxxxyxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((((*l_550) ^= ((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x5B31ADB4L, 5L)))).lo, ((safe_rshift_func_int8_t_s_u(((p_632->g_134.f6.f0 >= ((*l_475) = (&p_632->g_134 != (p_632->g_543 , l_544)))) | (((((((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((((*l_421) = (safe_mul_func_int8_t_s_s(p_17, ((safe_rshift_func_uint16_t_u_s(p_632->g_50.z, 0)) >= (0UL && p_632->g_513.s7))))) | 1L) > p_17), ((VECTOR(uint8_t, 8))(0UL)), GROUP_DIVERGE(0, 1), ((VECTOR(uint8_t, 4))(252UL)), 0x22L, 250UL)).odd)).s6 > p_632->g_134.f4.f3) , p_632->g_134.f6.f4) , p_17) ^ 7UL) || (**l_484)) >= p_17) == p_632->g_335.f4.f1)), p_17)) , (-2L)))) == 0x464373F044457B48L)) , (**l_484)), 0x0C8B9314L, ((VECTOR(int32_t, 2))((-1L))), (*p_18), 0x325E7478L, 0x6FBE0CEFL, 0x4AE8408DL)).s3, (*l_421), 0x4F157C6EL, 4L)).zwwzzyzwwyxzzxzy)))))).s6a8b, ((VECTOR(int32_t, 4))(0x511B301CL))))).yyywzyywxyywxyzz)).s1a))), ((VECTOR(int32_t, 2))(0x6BEB0606L)), (*p_18), ((VECTOR(int32_t, 8))((-1L))), 0x2E8F1632L)).s0776, ((VECTOR(int32_t, 4))(0x3F09A8C3L))))).odd))), ((VECTOR(int32_t, 2))(0x392E5E09L))))).xyxxyyyx))).s7)) , (*p_632->g_315));
            }
            else
            { /* block id: 225 */
                int32_t l_569 = (-1L);
                int16_t l_583 = (-9L);
                int8_t l_587 = 0x5AL;
                uint32_t ***l_592 = &l_505;
                uint32_t ****l_595 = &l_593;
                VECTOR(int8_t, 2) l_601 = (VECTOR(int8_t, 2))(0x27L, (-9L));
                uint64_t l_618 = 18446744073709551608UL;
                int i;
                for (p_632->g_415.f4 = (-19); (p_632->g_415.f4 != (-7)); p_632->g_415.f4++)
                { /* block id: 228 */
                    uint32_t l_559 = 5UL;
                    int32_t l_568 = 1L;
                    int32_t *l_585 = &p_632->g_137;
                    int32_t **l_584 = &l_585;
                    if (((*p_18) = ((+((safe_lshift_func_int8_t_s_s(p_17, 7)) ^ (safe_mod_func_uint64_t_u_u(((*l_475) = l_558), l_559)))) ^ ((VECTOR(uint8_t, 2))(0UL, 0x61L)).even)))
                    { /* block id: 231 */
                        return (*p_632->g_371);
                    }
                    else
                    { /* block id: 233 */
                        int32_t *l_560 = (void*)0;
                        int32_t *l_561 = (void*)0;
                        int32_t *l_562 = (void*)0;
                        int32_t *l_563 = (void*)0;
                        int32_t *l_564 = &l_524;
                        int32_t *l_565 = (void*)0;
                        int32_t *l_566 = (void*)0;
                        int32_t *l_567[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                        int i, j;
                        l_570[6][0]--;
                    }
                    if ((((*l_453) = p_632->g_121.w) || (p_632->g_168 && ((((safe_div_func_int32_t_s_s(((((VECTOR(uint32_t, 2))(4294967290UL, 0UL)).odd & (safe_mod_func_int8_t_s_s((p_17 >= (((p_632->g_577 , p_632->g_335.f6.f3) , (((safe_add_func_uint16_t_u_u((*l_421), (p_632->g_580 == (p_632->g_581 = l_453)))) && (!((0x51FC1162L < 0x1D8E311FL) >= l_501))) >= 0x5C80L)) == p_632->g_335.f3)), l_583))) , (*p_18)), 0x595DF0D2L)) != p_17) == 0x4BL) , 18446744073709551615UL))))
                    { /* block id: 238 */
                        (*p_18) |= ((l_584 != l_586) != ((void*)0 != p_632->g_205));
                        (*p_18) = l_524;
                    }
                    else
                    { /* block id: 241 */
                        l_587 = 1L;
                    }
                }
                (*p_18) = (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0L, (~0x2EL))), (((l_592 == ((*l_595) = l_593)) <= (((VECTOR(int8_t, 4))(l_596.yxxy)).z >= ((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_601.xyyxyxyxyyyxyyxy)).lo)).s2, (safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(l_601.x, ((l_606 == (((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(p_632->g_609.s0f47)).z, ((3UL != ((safe_sub_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((*p_632->g_581), ((safe_div_func_uint16_t_u_u((l_569 != (**l_484)), p_17)) , p_632->g_119.z))), (**l_484))) , 251UL) , (*l_421)), 0xF8L)) ^ p_632->g_360.x)) < (**l_484)))) >= 0x553C68008EB68C43L) , (void*)0)) , p_17))), (*p_632->g_581))))), 0x6DD6L)) ^ l_618))) > (**l_484))));
                return p_18;
            }
            p_632->g_344.f4 = p_632->g_336;
            (*l_484) = func_20((l_432[0] = ((*p_632->g_334) , p_18)), p_17, func_20(&l_501, (safe_sub_func_uint64_t_u_u(7UL, (p_17 , ((((p_632->g_comm_values[p_632->tid] ^= (safe_mul_func_uint8_t_u_u(p_17, FAKE_DIVERGE(p_632->local_2_offset, get_local_id(2), 10)))) && (~(p_17 , (l_596.y , p_17)))) , (**l_484)) != l_501)))), l_623, l_596.x, p_632), p_17, p_632);
            p_632->g_625--;
        }
    }
    return (*p_632->g_371);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_20(int32_t * p_21, int64_t  p_22, int32_t * p_23, int16_t  p_24, struct S3 * p_632)
{ /* block id: 85 */
    uint64_t l_249 = 0UL;
    --l_249;
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_632->g_11 p_632->g_10 p_632->g_74 p_632->g_50 p_632->g_84 p_632->g_108 p_632->g_110 p_632->g_112 p_632->g_119 p_632->g_121 p_632->g_122 p_632->g_134 p_632->g_162 p_632->g_14 p_632->g_168 p_632->l_comm_values p_632->g_comm_values p_632->g_137 p_632->g_215 p_632->g_225
 * writes: p_632->g_84 p_632->g_108 p_632->g_109 p_632->g_112 p_632->g_121 p_632->g_134 p_632->g_137 p_632->g_110 p_632->g_168
 */
uint32_t  func_29(int32_t * p_30, struct S3 * p_632)
{ /* block id: 8 */
    int64_t l_45 = (-7L);
    int32_t l_46 = 0x3D47CDD5L;
    uint32_t *l_49 = (void*)0;
    uint32_t *l_51 = (void*)0;
    uint32_t *l_52 = (void*)0;
    uint32_t *l_53 = (void*)0;
    uint32_t *l_54[2];
    int32_t l_55[7][7] = {{5L,0L,0x5C02AC6AL,2L,0L,2L,0x5C02AC6AL},{5L,0L,0x5C02AC6AL,2L,0L,2L,0x5C02AC6AL},{5L,0L,0x5C02AC6AL,2L,0L,2L,0x5C02AC6AL},{5L,0L,0x5C02AC6AL,2L,0L,2L,0x5C02AC6AL},{5L,0L,0x5C02AC6AL,2L,0L,2L,0x5C02AC6AL},{5L,0L,0x5C02AC6AL,2L,0L,2L,0x5C02AC6AL},{5L,0L,0x5C02AC6AL,2L,0L,2L,0x5C02AC6AL}};
    VECTOR(uint32_t, 16) l_56 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x9E95372AL), 0x9E95372AL), 0x9E95372AL, 4294967295UL, 0x9E95372AL, (VECTOR(uint32_t, 2))(4294967295UL, 0x9E95372AL), (VECTOR(uint32_t, 2))(4294967295UL, 0x9E95372AL), 4294967295UL, 0x9E95372AL, 4294967295UL, 0x9E95372AL);
    int i, j;
    for (i = 0; i < 2; i++)
        l_54[i] = (void*)0;
    l_55[5][4] = func_31((func_36(func_40((+(l_45 = FAKE_DIVERGE(p_632->global_2_offset, get_global_id(2), 10))), l_46, &l_46, (safe_add_func_int16_t_s_s(p_632->g_11.s2, ((l_55[5][3] = (&l_46 != p_632->g_10[2][4])) , (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_56.s71)))).hi <= (l_55[3][3] = l_55[5][3]))))), p_632), l_56.sd, l_51, p_632) != 246UL), p_632->g_comm_values[p_632->tid], &p_632->g_14, p_632->g_119.y, p_632);
    return l_55[5][6];
}


/* ------------------------------------------ */
/* 
 * reads : p_632->g_137 p_632->g_10 p_632->g_215 p_632->g_122 p_632->g_50 p_632->g_11 p_632->g_225 p_632->g_84 p_632->g_119 p_632->g_134.f6.f8
 * writes: p_632->g_137
 */
int32_t  func_31(int32_t  p_32, uint64_t  p_33, int32_t * p_34, int64_t  p_35, struct S3 * p_632)
{ /* block id: 59 */
    uint64_t l_211 = 0x5A99F62E3C097C9CL;
    int32_t l_229[6][1][6];
    uint32_t *l_245 = (void*)0;
    uint32_t **l_244 = &l_245;
    uint32_t ***l_246 = &l_244;
    uint32_t **l_247[6][4] = {{&l_245,(void*)0,(void*)0,(void*)0},{&l_245,(void*)0,(void*)0,(void*)0},{&l_245,(void*)0,(void*)0,(void*)0},{&l_245,(void*)0,(void*)0,(void*)0},{&l_245,(void*)0,(void*)0,(void*)0},{&l_245,(void*)0,(void*)0,(void*)0}};
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
                l_229[i][j][k] = 3L;
        }
    }
    for (p_632->g_137 = (-20); (p_632->g_137 != (-16)); ++p_632->g_137)
    { /* block id: 62 */
        int32_t *l_197 = (void*)0;
        int32_t **l_196 = &l_197;
        int32_t *l_198 = (void*)0;
        int32_t *l_199 = (void*)0;
        int32_t *l_201 = (void*)0;
        int32_t *l_207 = (void*)0;
        int32_t *l_208 = (void*)0;
        int32_t *l_209 = (void*)0;
        VECTOR(uint16_t, 4) l_214 = (VECTOR(uint16_t, 4))(0x86A3L, (VECTOR(uint16_t, 2))(0x86A3L, 0UL), 0UL);
        VECTOR(uint16_t, 16) l_220 = (VECTOR(uint16_t, 16))(0xECC1L, (VECTOR(uint16_t, 4))(0xECC1L, (VECTOR(uint16_t, 2))(0xECC1L, 1UL), 1UL), 1UL, 0xECC1L, 1UL, (VECTOR(uint16_t, 2))(0xECC1L, 1UL), (VECTOR(uint16_t, 2))(0xECC1L, 1UL), 0xECC1L, 1UL, 0xECC1L, 1UL);
        uint32_t l_228[5] = {0x81140B68L,0x81140B68L,0x81140B68L,0x81140B68L,0x81140B68L};
        int16_t *l_230 = (void*)0;
        int32_t l_236 = 0x51B2AB06L;
        int32_t l_240 = (-8L);
        int i;
        (*l_196) = p_632->g_10[3][2];
        (*l_196) = &p_32;
        l_211 &= p_32;
        if ((((l_229[5][0][0] &= ((((safe_add_func_int64_t_s_s((((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(0x9A28L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 2))(6L, 0x2125L)).yyyx))).wyxwyyxyxwwwwywz, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(l_214.wxyzxwyw)), ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 2))(p_632->g_215.s71)).yyyxyxyxyyxyxyxx, ((VECTOR(uint16_t, 8))((safe_rshift_func_int8_t_s_u((0x7EL > p_632->g_122.s1), (l_211 && (safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_632->global_0_offset, get_global_id(0), 10), 2))))), ((VECTOR(uint16_t, 2))(l_220.s06)), (p_35 , p_632->g_50.w), (p_33 , GROUP_DIVERGE(0, 1)), (safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((**l_196), p_632->g_11.s0)), 2)), 0xC3DDL, 65535UL)).s3613733623133116))).s77f9, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(p_632->g_225.s1f)).yyxyyxxx))).s30)), (safe_lshift_func_uint8_t_u_s(p_33, l_228[1])), 9UL, ((VECTOR(uint16_t, 8))(0xB4AEL)), p_33, ((VECTOR(uint16_t, 2))(0UL)), 0xC87EL)).s67c6))))).zxzzxwxy, ((VECTOR(uint16_t, 8))(0x5D7BL))))).s02, ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 2))(1UL))))).yxxxyxxyyyyyxxyx))).odd, ((VECTOR(uint16_t, 8))(0x492EL))))).s17)), p_632->g_84[1], 1UL, ((VECTOR(uint16_t, 2))(0UL)), 65533UL)).odd)).odd)).odd && p_632->g_119.y) && 0x7258C9E95FC9310AL) < 0L), 1UL)) == FAKE_DIVERGE(p_632->global_2_offset, get_global_id(2), 10)) | FAKE_DIVERGE(p_632->local_1_offset, get_local_id(1), 10)) >= p_632->g_134.f6.f8)) , l_230) != &p_632->g_108))
        { /* block id: 67 */
            int64_t l_231[6] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
            int32_t *l_232 = &l_229[5][0][0];
            int32_t *l_233 = (void*)0;
            int32_t *l_235 = (void*)0;
            int i;
            (**l_196) &= l_231[1];
            l_236 = ((*l_232) = ((**l_196) = p_32));
            if (l_229[1][0][4])
                break;
        }
        else
        { /* block id: 73 */
            int32_t *l_237 = &l_236;
            int32_t *l_238 = &l_229[5][0][0];
            int32_t *l_239[8];
            uint8_t l_241 = 7UL;
            int i;
            for (i = 0; i < 8; i++)
                l_239[i] = &l_229[5][0][0];
            (*l_196) = &p_32;
            (*l_196) = &p_32;
            if (p_35)
                continue;
            l_241++;
        }
    }
    l_247[2][3] = ((*l_246) = l_244);
    return l_229[1][0][4];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_36(int32_t * p_37, int32_t  p_38, int32_t * p_39, struct S3 * p_632)
{ /* block id: 57 */
    VECTOR(int64_t, 4) l_193 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-1L)), (-1L));
    int i;
    return l_193.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_632->g_74 p_632->g_50 p_632->g_84 p_632->g_108 p_632->g_110 p_632->g_112 p_632->g_10 p_632->g_119 p_632->g_121 p_632->g_122 p_632->g_134 p_632->g_162 p_632->g_11 p_632->g_14 p_632->g_168 p_632->l_comm_values
 * writes: p_632->g_84 p_632->g_108 p_632->g_109 p_632->g_112 p_632->g_121 p_632->g_134 p_632->g_137 p_632->g_110 p_632->g_168
 */
int32_t * func_40(uint32_t  p_41, uint32_t  p_42, int32_t * p_43, uint64_t  p_44, struct S3 * p_632)
{ /* block id: 12 */
    int32_t *l_73 = (void*)0;
    int32_t *l_136 = &p_632->g_137;
    int16_t *l_141 = &p_632->g_110;
    uint16_t l_148 = 0x7A9BL;
    int32_t l_161 = 0x4F1A2F3BL;
    int8_t *l_165[2];
    int32_t **l_173[8][5][3] = {{{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73}},{{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73}},{{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73}},{{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73}},{{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73}},{{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73}},{{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73}},{{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73},{(void*)0,&l_73,&l_73}}};
    int32_t *l_174[10] = {&l_161,(void*)0,&l_161,(void*)0,&l_161,&l_161,(void*)0,&l_161,(void*)0,&l_161};
    int32_t **l_182 = &l_136;
    uint32_t *l_189 = &p_632->g_168;
    int16_t *l_190 = (void*)0;
    uint16_t *l_191 = &l_148;
    int8_t l_192 = 0x2EL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_165[i] = (void*)0;
    (*p_43) &= (safe_sub_func_int64_t_s_s((-1L), (safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((!1UL) >= ((*l_141) = func_63(((*l_136) = func_68(l_73, l_73, l_73, (p_632->g_74 , ((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(0L, (p_632->g_74.f0 , p_632->g_50.x))), p_42)) , 0x766F2FC99F15FC87L)), p_632)), p_632->g_10[4][1], p_44, p_632->g_10[3][4], p_632))), 1UL)), p_632->g_119.w))));
    if ((safe_add_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s(((p_632->g_112 = ((safe_div_func_uint32_t_u_u((l_148 < ((p_42 , (((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((((safe_div_func_int64_t_s_s(0x246280EF9A41DA26L, ((safe_lshift_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u((((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((249UL | ((((safe_mod_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), ((l_148 == l_161) ^ p_42))) <= ((VECTOR(int16_t, 8))(p_632->g_162.s75660152)).s3) & GROUP_DIVERGE(1, 1)) <= ((((VECTOR(uint64_t, 16))(18446744073709551614UL, (safe_add_func_int16_t_s_s((p_42 , (~p_632->g_134.f6.f2)), p_632->g_119.x)), 0UL, ((VECTOR(uint64_t, 2))(1UL)), ((VECTOR(uint64_t, 8))(0xE0753CE67C050FD7L)), p_632->g_11.s2, 0UL, 0x334AB61E80D83C71L)).sb & p_632->g_84[5]) , p_632->g_84[7]))), 2)), p_632->g_14)) <= p_632->g_121.w) , p_632->g_122.s1), p_44)) && p_42) ^ (*p_43)), 7)) , FAKE_DIVERGE(p_632->group_2_offset, get_group_id(2), 10)))) >= 0x3BA542B8L) < (*p_43)) == (-2L)), 0x3BL, 0L, 0x06L)))).zzwzzywz)), ((VECTOR(int8_t, 8))(0x51L))))).s4 || 0UL)) > p_44)), (*p_43))) <= GROUP_DIVERGE(0, 1))) > 0L), 1)) , 65531UL) || 0x22FEL), p_632->g_110)))
    { /* block id: 45 */
        int8_t *l_166 = &p_632->g_134.f4.f0;
        uint32_t *l_167 = &p_632->g_168;
        (*p_43) = (l_166 != (((*l_167)++) , l_165[1]));
    }
    else
    { /* block id: 48 */
        int32_t **l_172 = &l_73;
        (*l_172) = p_43;
    }
    l_174[7] = &l_161;
    l_192 |= (safe_sub_func_uint32_t_u_u(p_44, (((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_int16_t_s((&p_632->g_10[3][2] != (void*)0))) || (((((*l_182) = &p_632->g_137) == (void*)0) > ((*l_191) = ((((*l_189) = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_632->l_comm_values[(safe_mod_func_uint32_t_u_u(p_632->tid, 49))], (safe_add_func_int32_t_s_s(2L, p_42)))), p_42))) , (void*)0) == l_190))) && (*p_43))), p_44)) >= p_632->g_134.f6.f8) , 0UL)));
    return p_43;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_63(int32_t  p_64, int32_t * p_65, uint32_t  p_66, uint32_t * p_67, struct S3 * p_632)
{ /* block id: 35 */
    int32_t *l_138 = (void*)0;
    int32_t *l_139[2];
    int16_t l_140 = 1L;
    int i;
    for (i = 0; i < 2; i++)
        l_139[i] = (void*)0;
    l_140 = 1L;
    if (p_64)
    { /* block id: 37 */
        return p_64;
    }
    else
    { /* block id: 39 */
        return p_64;
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_632->g_84 p_632->g_74.f1 p_632->g_108 p_632->g_110 p_632->g_112 p_632->g_10 p_632->g_119 p_632->g_121 p_632->g_122 p_632->g_134
 * writes: p_632->g_84 p_632->g_108 p_632->g_109 p_632->g_112 p_632->g_121 p_632->g_134
 */
int32_t  func_68(int32_t * p_69, int32_t * p_70, int32_t * p_71, int64_t  p_72, struct S3 * p_632)
{ /* block id: 13 */
    uint32_t l_79 = 4294967295UL;
    VECTOR(int32_t, 4) l_80 = (VECTOR(int32_t, 4))(0x4CBB7A79L, (VECTOR(int32_t, 2))(0x4CBB7A79L, (-10L)), (-10L));
    int32_t l_117 = 0x53539CACL;
    int i;
    if ((l_80.x = l_79))
    { /* block id: 15 */
        uint8_t *l_83 = (void*)0;
        int32_t l_99 = 0L;
        int32_t l_100 = 0L;
        int16_t *l_107 = &p_632->g_108;
        int8_t *l_111 = &p_632->g_112;
        int32_t *l_113 = (void*)0;
        int32_t *l_114 = (void*)0;
        int32_t *l_115 = (void*)0;
        int32_t *l_116[7];
        int i;
        for (i = 0; i < 7; i++)
            l_116[i] = (void*)0;
        l_117 &= (+((((safe_rshift_func_int8_t_s_u(((*l_111) &= (((p_632->g_84[7]++) | p_632->g_74.f1) , ((safe_lshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(p_72, (1L & (safe_sub_func_int8_t_s_s(((((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(l_99, l_99)) < (((((l_100 = p_72) && 0x0AB2L) && (((safe_lshift_func_int8_t_s_u((((safe_div_func_uint32_t_u_u((l_99 || (((p_632->g_109.sb = ((*l_107) &= (p_72 , p_72))) == p_632->g_74.f1) <= l_99)), l_80.x)) > l_100) > p_72), 7)) < 0xBE7CA3003AF45EF5L) , p_72)) , (void*)0) == p_70)), l_79)) , (void*)0) == (void*)0) < 0x38870407L), p_632->g_110))))) , p_72), p_72)) < l_99))), 5)) , p_69) == p_632->g_10[2][4]) < l_79));
    }
    else
    { /* block id: 22 */
        int32_t *l_118 = &l_117;
        VECTOR(int8_t, 8) l_120 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x0FL), 0x0FL), 0x0FL, (-1L), 0x0FL);
        VECTOR(int8_t, 16) l_123 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x6BL), 0x6BL), 0x6BL, 8L, 0x6BL, (VECTOR(int8_t, 2))(8L, 0x6BL), (VECTOR(int8_t, 2))(8L, 0x6BL), 8L, 0x6BL, 8L, 0x6BL);
        VECTOR(int8_t, 16) l_124 = (VECTOR(int8_t, 16))(0x24L, (VECTOR(int8_t, 4))(0x24L, (VECTOR(int8_t, 2))(0x24L, 2L), 2L), 2L, 0x24L, 2L, (VECTOR(int8_t, 2))(0x24L, 2L), (VECTOR(int8_t, 2))(0x24L, 2L), 0x24L, 2L, 0x24L, 2L);
        int8_t *l_125 = (void*)0;
        int8_t *l_126 = (void*)0;
        int32_t *l_127 = (void*)0;
        int32_t *l_128 = (void*)0;
        int32_t *l_129 = (void*)0;
        int32_t *l_130 = &l_117;
        int i;
        (*l_130) ^= ((l_118 = (void*)0) == ((0x51L | (p_632->g_121.w = ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(0x6BL, 0x7CL)).yyyxyxyxxxyyyxxy, ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(0x46L, 0L)).yyyy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_632->g_119.xyww))))))).ywzzyxwyxxxwwxwx, ((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 2))(0x63L, 0x39L)).yyyxxxyx))), ((VECTOR(int8_t, 4))(l_120.s5061)).yzzzyyyy))).s4621144511367111))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 2))(p_632->g_121.yx)).yxxx, ((VECTOR(int8_t, 16))(p_632->g_122.sdcc4ab3051342b15)).sac17))).wyyxxzxz)).s0714510211700356))), ((VECTOR(int8_t, 2))(l_123.sd0)).yxyyxyxxxyyxyyyx))))).odd)).s00, ((VECTOR(int8_t, 16))(l_124.scce49b202198c401)).s19))).lo)) , l_127));
        for (p_72 = (-8); (p_72 <= 26); p_72 = safe_add_func_uint32_t_u_u(p_72, 5))
        { /* block id: 28 */
            uint64_t l_133 = 0xCF0FE1AEB3B6C1D0L;
            struct S2 *l_135 = &p_632->g_134;
            if (l_133)
                break;
            (*l_135) = p_632->g_134;
        }
    }
    return p_632->g_134.f6.f8;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[49];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 49; i++)
            l_comm_values[i] = 1;
    struct S3 c_633;
    struct S3* p_632 = &c_633;
    struct S3 c_634 = {
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x6F5D870AL), 0x6F5D870AL), 0x6F5D870AL, 1L, 0x6F5D870AL), // p_632->g_11
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_632->g_10
        (-9L), // p_632->g_14
        0L, // p_632->g_19
        (VECTOR(uint32_t, 4))(0xEAE26468L, (VECTOR(uint32_t, 2))(0xEAE26468L, 0UL), 0UL), // p_632->g_50
        {1L,0UL,0x52DBC402L,4294967295UL,0x7C65L}, // p_632->g_74
        {0xAA229768L,0xAA229768L,0xAA229768L,0xAA229768L,0xAA229768L,0xAA229768L,0xAA229768L,0xAA229768L,0xAA229768L,0xAA229768L}, // p_632->g_84
        0L, // p_632->g_108
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint32_t, 2))(1UL, 0UL), (VECTOR(uint32_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL), // p_632->g_109
        0x1F67L, // p_632->g_110
        0x02L, // p_632->g_112
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x17L), 0x17L), // p_632->g_119
        (VECTOR(int8_t, 4))(0x09L, (VECTOR(int8_t, 2))(0x09L, 0x57L), 0x57L), // p_632->g_121
        (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), (-1L)), (-1L)), (-1L), (-4L), (-1L), (VECTOR(int8_t, 2))((-4L), (-1L)), (VECTOR(int8_t, 2))((-4L), (-1L)), (-4L), (-1L), (-4L), (-1L)), // p_632->g_122
        {0x5FCB09B1L,1UL,0L,0xBBL,{0x40L,0x5AL,0x63199CE3L,1UL,0x0D36L},0x18C3B0D5B00EC888L,{255UL,0x5485A9B4FB0B04AAL,-9L,1L,-1L,0x7ABF6489L,0x7D56046493B66AF9L,4294967295UL,5UL}}, // p_632->g_134
        (-1L), // p_632->g_137
        (VECTOR(int16_t, 8))(0x534DL, (VECTOR(int16_t, 4))(0x534DL, (VECTOR(int16_t, 2))(0x534DL, 0x750BL), 0x750BL), 0x750BL, 0x534DL, 0x750BL), // p_632->g_162
        0xD3D94BFEL, // p_632->g_168
        (void*)0, // p_632->g_171
        (void*)0, // p_632->g_200
        {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}}, // p_632->g_202
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_632->g_203
        (void*)0, // p_632->g_204
        (void*)0, // p_632->g_205
        (void*)0, // p_632->g_206
        (void*)0, // p_632->g_210
        (VECTOR(uint16_t, 16))(0xE131L, (VECTOR(uint16_t, 4))(0xE131L, (VECTOR(uint16_t, 2))(0xE131L, 0UL), 0UL), 0UL, 0xE131L, 0UL, (VECTOR(uint16_t, 2))(0xE131L, 0UL), (VECTOR(uint16_t, 2))(0xE131L, 0UL), 0xE131L, 0UL, 0xE131L, 0UL), // p_632->g_215
        (VECTOR(uint16_t, 16))(0x808FL, (VECTOR(uint16_t, 4))(0x808FL, (VECTOR(uint16_t, 2))(0x808FL, 0UL), 0UL), 0UL, 0x808FL, 0UL, (VECTOR(uint16_t, 2))(0x808FL, 0UL), (VECTOR(uint16_t, 2))(0x808FL, 0UL), 0x808FL, 0UL, 0x808FL, 0UL), // p_632->g_225
        (void*)0, // p_632->g_234
        &p_632->g_134.f6.f2, // p_632->g_257
        {{&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257},{&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257},{&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257},{&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257},{&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257},{&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257},{&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257},{&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257},{&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257,&p_632->g_257}}, // p_632->g_256
        {{&p_632->g_256[8][4],&p_632->g_256[6][3]},{&p_632->g_256[8][4],&p_632->g_256[6][3]},{&p_632->g_256[8][4],&p_632->g_256[6][3]},{&p_632->g_256[8][4],&p_632->g_256[6][3]},{&p_632->g_256[8][4],&p_632->g_256[6][3]},{&p_632->g_256[8][4],&p_632->g_256[6][3]},{&p_632->g_256[8][4],&p_632->g_256[6][3]},{&p_632->g_256[8][4],&p_632->g_256[6][3]},{&p_632->g_256[8][4],&p_632->g_256[6][3]}}, // p_632->g_255
        (void*)0, // p_632->g_316
        &p_632->g_316, // p_632->g_315
        (VECTOR(int32_t, 16))(0x33FA989CL, (VECTOR(int32_t, 4))(0x33FA989CL, (VECTOR(int32_t, 2))(0x33FA989CL, 0L), 0L), 0L, 0x33FA989CL, 0L, (VECTOR(int32_t, 2))(0x33FA989CL, 0L), (VECTOR(int32_t, 2))(0x33FA989CL, 0L), 0x33FA989CL, 0L, 0x33FA989CL, 0L), // p_632->g_327
        {0xC998FD2FL,18446744073709551613UL,-7L,0x0FL,{2L,0xE2L,0xFBBDEFA2L,5UL,0L},0L,{0xF1L,0xCF3876A514F412A1L,6L,1L,0x29L,0L,-1L,1UL,0x71F31376L}}, // p_632->g_335
        &p_632->g_335, // p_632->g_334
        {-4L,0x4AL,1UL,0x3AF5D0D1L,0x14D5L}, // p_632->g_336
        {0x41L,1UL,4UL,1UL,0L}, // p_632->g_337
        {4294967295UL,18446744073709551613UL,0L,0x62L,{0x5AL,0x4FL,0x8F441279L,1UL,0x4705L},0L,{0xFCL,0xCD1B16B52EB8251BL,0x2FE9BC3CL,5L,6L,0L,-4L,0x5C44A373L,0UL}}, // p_632->g_344
        (VECTOR(int32_t, 2))(0x47F41241L, 0x0D34EAE2L), // p_632->g_360
        &p_632->g_316, // p_632->g_371
        (void*)0, // p_632->g_374
        1L, // p_632->g_379
        0x4F61L, // p_632->g_380
        (VECTOR(int64_t, 2))(1L, 0x032613B4B8722DBCL), // p_632->g_392
        {0xA3L,0x3D06A86FCC0C62ABL,0x300E2166L,9L,0x39L,-1L,0x0746E424C73AF02DL,4UL,4294967287UL}, // p_632->g_415
        (VECTOR(int64_t, 4))(0x107C03FB2D9FF47AL, (VECTOR(int64_t, 2))(0x107C03FB2D9FF47AL, 0x34066393B35133E9L), 0x34066393B35133E9L), // p_632->g_433
        (void*)0, // p_632->g_436
        &p_632->g_436, // p_632->g_435
        1L, // p_632->g_483
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4E0BD187L), 0x4E0BD187L), // p_632->g_510
        (VECTOR(uint32_t, 8))(0x68EE927BL, (VECTOR(uint32_t, 4))(0x68EE927BL, (VECTOR(uint32_t, 2))(0x68EE927BL, 0x15D4280DL), 0x15D4280DL), 0x15D4280DL, 0x68EE927BL, 0x15D4280DL), // p_632->g_513
        (VECTOR(int32_t, 2))(7L, 9L), // p_632->g_525
        0x2E8B4CA2L, // p_632->g_532
        (VECTOR(int32_t, 4))(0x28A8ACC4L, (VECTOR(int32_t, 2))(0x28A8ACC4L, (-3L)), (-3L)), // p_632->g_537
        (VECTOR(int32_t, 16))(0x5CA7A6CAL, (VECTOR(int32_t, 4))(0x5CA7A6CAL, (VECTOR(int32_t, 2))(0x5CA7A6CAL, 0x6CA4E442L), 0x6CA4E442L), 0x6CA4E442L, 0x5CA7A6CAL, 0x6CA4E442L, (VECTOR(int32_t, 2))(0x5CA7A6CAL, 0x6CA4E442L), (VECTOR(int32_t, 2))(0x5CA7A6CAL, 0x6CA4E442L), 0x5CA7A6CAL, 0x6CA4E442L, 0x5CA7A6CAL, 0x6CA4E442L), // p_632->g_538
        {255UL,0x8A707459B70D9161L,5L,0x3473L,0x21L,0x02673A52L,-8L,0x79577162L,0xB8886723L}, // p_632->g_543
        0x46C0BA1A18642A53L, // p_632->g_551
        {0x30L,0x288E2C7616EFBC49L,-1L,0x2C7BL,0x27L,-1L,0x5B50102A837C04A6L,4294967295UL,0x74AE0FD2L}, // p_632->g_577
        (void*)0, // p_632->g_580
        0UL, // p_632->g_582
        &p_632->g_582, // p_632->g_581
        (VECTOR(int16_t, 16))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0x6E29L), 0x6E29L), 0x6E29L, 9L, 0x6E29L, (VECTOR(int16_t, 2))(9L, 0x6E29L), (VECTOR(int16_t, 2))(9L, 0x6E29L), 9L, 0x6E29L, 9L, 0x6E29L), // p_632->g_609
        1UL, // p_632->g_625
        0, // p_632->v_collective
        sequence_input[get_global_id(0)], // p_632->global_0_offset
        sequence_input[get_global_id(1)], // p_632->global_1_offset
        sequence_input[get_global_id(2)], // p_632->global_2_offset
        sequence_input[get_local_id(0)], // p_632->local_0_offset
        sequence_input[get_local_id(1)], // p_632->local_1_offset
        sequence_input[get_local_id(2)], // p_632->local_2_offset
        sequence_input[get_group_id(0)], // p_632->group_0_offset
        sequence_input[get_group_id(1)], // p_632->group_1_offset
        sequence_input[get_group_id(2)], // p_632->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 49)), permutations[0][get_linear_local_id()])), // p_632->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_633 = c_634;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_632);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_632->g_11.s0, "p_632->g_11.s0", print_hash_value);
    transparent_crc(p_632->g_11.s1, "p_632->g_11.s1", print_hash_value);
    transparent_crc(p_632->g_11.s2, "p_632->g_11.s2", print_hash_value);
    transparent_crc(p_632->g_11.s3, "p_632->g_11.s3", print_hash_value);
    transparent_crc(p_632->g_11.s4, "p_632->g_11.s4", print_hash_value);
    transparent_crc(p_632->g_11.s5, "p_632->g_11.s5", print_hash_value);
    transparent_crc(p_632->g_11.s6, "p_632->g_11.s6", print_hash_value);
    transparent_crc(p_632->g_11.s7, "p_632->g_11.s7", print_hash_value);
    transparent_crc(p_632->g_14, "p_632->g_14", print_hash_value);
    transparent_crc(p_632->g_19, "p_632->g_19", print_hash_value);
    transparent_crc(p_632->g_50.x, "p_632->g_50.x", print_hash_value);
    transparent_crc(p_632->g_50.y, "p_632->g_50.y", print_hash_value);
    transparent_crc(p_632->g_50.z, "p_632->g_50.z", print_hash_value);
    transparent_crc(p_632->g_50.w, "p_632->g_50.w", print_hash_value);
    transparent_crc(p_632->g_74.f0, "p_632->g_74.f0", print_hash_value);
    transparent_crc(p_632->g_74.f1, "p_632->g_74.f1", print_hash_value);
    transparent_crc(p_632->g_74.f2, "p_632->g_74.f2", print_hash_value);
    transparent_crc(p_632->g_74.f3, "p_632->g_74.f3", print_hash_value);
    transparent_crc(p_632->g_74.f4, "p_632->g_74.f4", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_632->g_84[i], "p_632->g_84[i]", print_hash_value);

    }
    transparent_crc(p_632->g_108, "p_632->g_108", print_hash_value);
    transparent_crc(p_632->g_109.s0, "p_632->g_109.s0", print_hash_value);
    transparent_crc(p_632->g_109.s1, "p_632->g_109.s1", print_hash_value);
    transparent_crc(p_632->g_109.s2, "p_632->g_109.s2", print_hash_value);
    transparent_crc(p_632->g_109.s3, "p_632->g_109.s3", print_hash_value);
    transparent_crc(p_632->g_109.s4, "p_632->g_109.s4", print_hash_value);
    transparent_crc(p_632->g_109.s5, "p_632->g_109.s5", print_hash_value);
    transparent_crc(p_632->g_109.s6, "p_632->g_109.s6", print_hash_value);
    transparent_crc(p_632->g_109.s7, "p_632->g_109.s7", print_hash_value);
    transparent_crc(p_632->g_109.s8, "p_632->g_109.s8", print_hash_value);
    transparent_crc(p_632->g_109.s9, "p_632->g_109.s9", print_hash_value);
    transparent_crc(p_632->g_109.sa, "p_632->g_109.sa", print_hash_value);
    transparent_crc(p_632->g_109.sb, "p_632->g_109.sb", print_hash_value);
    transparent_crc(p_632->g_109.sc, "p_632->g_109.sc", print_hash_value);
    transparent_crc(p_632->g_109.sd, "p_632->g_109.sd", print_hash_value);
    transparent_crc(p_632->g_109.se, "p_632->g_109.se", print_hash_value);
    transparent_crc(p_632->g_109.sf, "p_632->g_109.sf", print_hash_value);
    transparent_crc(p_632->g_110, "p_632->g_110", print_hash_value);
    transparent_crc(p_632->g_112, "p_632->g_112", print_hash_value);
    transparent_crc(p_632->g_119.x, "p_632->g_119.x", print_hash_value);
    transparent_crc(p_632->g_119.y, "p_632->g_119.y", print_hash_value);
    transparent_crc(p_632->g_119.z, "p_632->g_119.z", print_hash_value);
    transparent_crc(p_632->g_119.w, "p_632->g_119.w", print_hash_value);
    transparent_crc(p_632->g_121.x, "p_632->g_121.x", print_hash_value);
    transparent_crc(p_632->g_121.y, "p_632->g_121.y", print_hash_value);
    transparent_crc(p_632->g_121.z, "p_632->g_121.z", print_hash_value);
    transparent_crc(p_632->g_121.w, "p_632->g_121.w", print_hash_value);
    transparent_crc(p_632->g_122.s0, "p_632->g_122.s0", print_hash_value);
    transparent_crc(p_632->g_122.s1, "p_632->g_122.s1", print_hash_value);
    transparent_crc(p_632->g_122.s2, "p_632->g_122.s2", print_hash_value);
    transparent_crc(p_632->g_122.s3, "p_632->g_122.s3", print_hash_value);
    transparent_crc(p_632->g_122.s4, "p_632->g_122.s4", print_hash_value);
    transparent_crc(p_632->g_122.s5, "p_632->g_122.s5", print_hash_value);
    transparent_crc(p_632->g_122.s6, "p_632->g_122.s6", print_hash_value);
    transparent_crc(p_632->g_122.s7, "p_632->g_122.s7", print_hash_value);
    transparent_crc(p_632->g_122.s8, "p_632->g_122.s8", print_hash_value);
    transparent_crc(p_632->g_122.s9, "p_632->g_122.s9", print_hash_value);
    transparent_crc(p_632->g_122.sa, "p_632->g_122.sa", print_hash_value);
    transparent_crc(p_632->g_122.sb, "p_632->g_122.sb", print_hash_value);
    transparent_crc(p_632->g_122.sc, "p_632->g_122.sc", print_hash_value);
    transparent_crc(p_632->g_122.sd, "p_632->g_122.sd", print_hash_value);
    transparent_crc(p_632->g_122.se, "p_632->g_122.se", print_hash_value);
    transparent_crc(p_632->g_122.sf, "p_632->g_122.sf", print_hash_value);
    transparent_crc(p_632->g_134.f0, "p_632->g_134.f0", print_hash_value);
    transparent_crc(p_632->g_134.f1, "p_632->g_134.f1", print_hash_value);
    transparent_crc(p_632->g_134.f2, "p_632->g_134.f2", print_hash_value);
    transparent_crc(p_632->g_134.f3, "p_632->g_134.f3", print_hash_value);
    transparent_crc(p_632->g_134.f4.f0, "p_632->g_134.f4.f0", print_hash_value);
    transparent_crc(p_632->g_134.f4.f1, "p_632->g_134.f4.f1", print_hash_value);
    transparent_crc(p_632->g_134.f4.f2, "p_632->g_134.f4.f2", print_hash_value);
    transparent_crc(p_632->g_134.f4.f3, "p_632->g_134.f4.f3", print_hash_value);
    transparent_crc(p_632->g_134.f4.f4, "p_632->g_134.f4.f4", print_hash_value);
    transparent_crc(p_632->g_134.f5, "p_632->g_134.f5", print_hash_value);
    transparent_crc(p_632->g_134.f6.f0, "p_632->g_134.f6.f0", print_hash_value);
    transparent_crc(p_632->g_134.f6.f1, "p_632->g_134.f6.f1", print_hash_value);
    transparent_crc(p_632->g_134.f6.f2, "p_632->g_134.f6.f2", print_hash_value);
    transparent_crc(p_632->g_134.f6.f3, "p_632->g_134.f6.f3", print_hash_value);
    transparent_crc(p_632->g_134.f6.f4, "p_632->g_134.f6.f4", print_hash_value);
    transparent_crc(p_632->g_134.f6.f5, "p_632->g_134.f6.f5", print_hash_value);
    transparent_crc(p_632->g_134.f6.f6, "p_632->g_134.f6.f6", print_hash_value);
    transparent_crc(p_632->g_134.f6.f7, "p_632->g_134.f6.f7", print_hash_value);
    transparent_crc(p_632->g_134.f6.f8, "p_632->g_134.f6.f8", print_hash_value);
    transparent_crc(p_632->g_137, "p_632->g_137", print_hash_value);
    transparent_crc(p_632->g_162.s0, "p_632->g_162.s0", print_hash_value);
    transparent_crc(p_632->g_162.s1, "p_632->g_162.s1", print_hash_value);
    transparent_crc(p_632->g_162.s2, "p_632->g_162.s2", print_hash_value);
    transparent_crc(p_632->g_162.s3, "p_632->g_162.s3", print_hash_value);
    transparent_crc(p_632->g_162.s4, "p_632->g_162.s4", print_hash_value);
    transparent_crc(p_632->g_162.s5, "p_632->g_162.s5", print_hash_value);
    transparent_crc(p_632->g_162.s6, "p_632->g_162.s6", print_hash_value);
    transparent_crc(p_632->g_162.s7, "p_632->g_162.s7", print_hash_value);
    transparent_crc(p_632->g_168, "p_632->g_168", print_hash_value);
    transparent_crc(p_632->g_215.s0, "p_632->g_215.s0", print_hash_value);
    transparent_crc(p_632->g_215.s1, "p_632->g_215.s1", print_hash_value);
    transparent_crc(p_632->g_215.s2, "p_632->g_215.s2", print_hash_value);
    transparent_crc(p_632->g_215.s3, "p_632->g_215.s3", print_hash_value);
    transparent_crc(p_632->g_215.s4, "p_632->g_215.s4", print_hash_value);
    transparent_crc(p_632->g_215.s5, "p_632->g_215.s5", print_hash_value);
    transparent_crc(p_632->g_215.s6, "p_632->g_215.s6", print_hash_value);
    transparent_crc(p_632->g_215.s7, "p_632->g_215.s7", print_hash_value);
    transparent_crc(p_632->g_215.s8, "p_632->g_215.s8", print_hash_value);
    transparent_crc(p_632->g_215.s9, "p_632->g_215.s9", print_hash_value);
    transparent_crc(p_632->g_215.sa, "p_632->g_215.sa", print_hash_value);
    transparent_crc(p_632->g_215.sb, "p_632->g_215.sb", print_hash_value);
    transparent_crc(p_632->g_215.sc, "p_632->g_215.sc", print_hash_value);
    transparent_crc(p_632->g_215.sd, "p_632->g_215.sd", print_hash_value);
    transparent_crc(p_632->g_215.se, "p_632->g_215.se", print_hash_value);
    transparent_crc(p_632->g_215.sf, "p_632->g_215.sf", print_hash_value);
    transparent_crc(p_632->g_225.s0, "p_632->g_225.s0", print_hash_value);
    transparent_crc(p_632->g_225.s1, "p_632->g_225.s1", print_hash_value);
    transparent_crc(p_632->g_225.s2, "p_632->g_225.s2", print_hash_value);
    transparent_crc(p_632->g_225.s3, "p_632->g_225.s3", print_hash_value);
    transparent_crc(p_632->g_225.s4, "p_632->g_225.s4", print_hash_value);
    transparent_crc(p_632->g_225.s5, "p_632->g_225.s5", print_hash_value);
    transparent_crc(p_632->g_225.s6, "p_632->g_225.s6", print_hash_value);
    transparent_crc(p_632->g_225.s7, "p_632->g_225.s7", print_hash_value);
    transparent_crc(p_632->g_225.s8, "p_632->g_225.s8", print_hash_value);
    transparent_crc(p_632->g_225.s9, "p_632->g_225.s9", print_hash_value);
    transparent_crc(p_632->g_225.sa, "p_632->g_225.sa", print_hash_value);
    transparent_crc(p_632->g_225.sb, "p_632->g_225.sb", print_hash_value);
    transparent_crc(p_632->g_225.sc, "p_632->g_225.sc", print_hash_value);
    transparent_crc(p_632->g_225.sd, "p_632->g_225.sd", print_hash_value);
    transparent_crc(p_632->g_225.se, "p_632->g_225.se", print_hash_value);
    transparent_crc(p_632->g_225.sf, "p_632->g_225.sf", print_hash_value);
    transparent_crc(p_632->g_327.s0, "p_632->g_327.s0", print_hash_value);
    transparent_crc(p_632->g_327.s1, "p_632->g_327.s1", print_hash_value);
    transparent_crc(p_632->g_327.s2, "p_632->g_327.s2", print_hash_value);
    transparent_crc(p_632->g_327.s3, "p_632->g_327.s3", print_hash_value);
    transparent_crc(p_632->g_327.s4, "p_632->g_327.s4", print_hash_value);
    transparent_crc(p_632->g_327.s5, "p_632->g_327.s5", print_hash_value);
    transparent_crc(p_632->g_327.s6, "p_632->g_327.s6", print_hash_value);
    transparent_crc(p_632->g_327.s7, "p_632->g_327.s7", print_hash_value);
    transparent_crc(p_632->g_327.s8, "p_632->g_327.s8", print_hash_value);
    transparent_crc(p_632->g_327.s9, "p_632->g_327.s9", print_hash_value);
    transparent_crc(p_632->g_327.sa, "p_632->g_327.sa", print_hash_value);
    transparent_crc(p_632->g_327.sb, "p_632->g_327.sb", print_hash_value);
    transparent_crc(p_632->g_327.sc, "p_632->g_327.sc", print_hash_value);
    transparent_crc(p_632->g_327.sd, "p_632->g_327.sd", print_hash_value);
    transparent_crc(p_632->g_327.se, "p_632->g_327.se", print_hash_value);
    transparent_crc(p_632->g_327.sf, "p_632->g_327.sf", print_hash_value);
    transparent_crc(p_632->g_335.f0, "p_632->g_335.f0", print_hash_value);
    transparent_crc(p_632->g_335.f1, "p_632->g_335.f1", print_hash_value);
    transparent_crc(p_632->g_335.f2, "p_632->g_335.f2", print_hash_value);
    transparent_crc(p_632->g_335.f3, "p_632->g_335.f3", print_hash_value);
    transparent_crc(p_632->g_335.f4.f0, "p_632->g_335.f4.f0", print_hash_value);
    transparent_crc(p_632->g_335.f4.f1, "p_632->g_335.f4.f1", print_hash_value);
    transparent_crc(p_632->g_335.f4.f2, "p_632->g_335.f4.f2", print_hash_value);
    transparent_crc(p_632->g_335.f4.f3, "p_632->g_335.f4.f3", print_hash_value);
    transparent_crc(p_632->g_335.f4.f4, "p_632->g_335.f4.f4", print_hash_value);
    transparent_crc(p_632->g_335.f5, "p_632->g_335.f5", print_hash_value);
    transparent_crc(p_632->g_335.f6.f0, "p_632->g_335.f6.f0", print_hash_value);
    transparent_crc(p_632->g_335.f6.f1, "p_632->g_335.f6.f1", print_hash_value);
    transparent_crc(p_632->g_335.f6.f2, "p_632->g_335.f6.f2", print_hash_value);
    transparent_crc(p_632->g_335.f6.f3, "p_632->g_335.f6.f3", print_hash_value);
    transparent_crc(p_632->g_335.f6.f4, "p_632->g_335.f6.f4", print_hash_value);
    transparent_crc(p_632->g_335.f6.f5, "p_632->g_335.f6.f5", print_hash_value);
    transparent_crc(p_632->g_335.f6.f6, "p_632->g_335.f6.f6", print_hash_value);
    transparent_crc(p_632->g_335.f6.f7, "p_632->g_335.f6.f7", print_hash_value);
    transparent_crc(p_632->g_335.f6.f8, "p_632->g_335.f6.f8", print_hash_value);
    transparent_crc(p_632->g_336.f0, "p_632->g_336.f0", print_hash_value);
    transparent_crc(p_632->g_336.f1, "p_632->g_336.f1", print_hash_value);
    transparent_crc(p_632->g_336.f2, "p_632->g_336.f2", print_hash_value);
    transparent_crc(p_632->g_336.f3, "p_632->g_336.f3", print_hash_value);
    transparent_crc(p_632->g_336.f4, "p_632->g_336.f4", print_hash_value);
    transparent_crc(p_632->g_337.f0, "p_632->g_337.f0", print_hash_value);
    transparent_crc(p_632->g_337.f1, "p_632->g_337.f1", print_hash_value);
    transparent_crc(p_632->g_337.f2, "p_632->g_337.f2", print_hash_value);
    transparent_crc(p_632->g_337.f3, "p_632->g_337.f3", print_hash_value);
    transparent_crc(p_632->g_337.f4, "p_632->g_337.f4", print_hash_value);
    transparent_crc(p_632->g_344.f0, "p_632->g_344.f0", print_hash_value);
    transparent_crc(p_632->g_344.f1, "p_632->g_344.f1", print_hash_value);
    transparent_crc(p_632->g_344.f2, "p_632->g_344.f2", print_hash_value);
    transparent_crc(p_632->g_344.f3, "p_632->g_344.f3", print_hash_value);
    transparent_crc(p_632->g_344.f4.f0, "p_632->g_344.f4.f0", print_hash_value);
    transparent_crc(p_632->g_344.f4.f1, "p_632->g_344.f4.f1", print_hash_value);
    transparent_crc(p_632->g_344.f4.f2, "p_632->g_344.f4.f2", print_hash_value);
    transparent_crc(p_632->g_344.f4.f3, "p_632->g_344.f4.f3", print_hash_value);
    transparent_crc(p_632->g_344.f4.f4, "p_632->g_344.f4.f4", print_hash_value);
    transparent_crc(p_632->g_344.f5, "p_632->g_344.f5", print_hash_value);
    transparent_crc(p_632->g_344.f6.f0, "p_632->g_344.f6.f0", print_hash_value);
    transparent_crc(p_632->g_344.f6.f1, "p_632->g_344.f6.f1", print_hash_value);
    transparent_crc(p_632->g_344.f6.f2, "p_632->g_344.f6.f2", print_hash_value);
    transparent_crc(p_632->g_344.f6.f3, "p_632->g_344.f6.f3", print_hash_value);
    transparent_crc(p_632->g_344.f6.f4, "p_632->g_344.f6.f4", print_hash_value);
    transparent_crc(p_632->g_344.f6.f5, "p_632->g_344.f6.f5", print_hash_value);
    transparent_crc(p_632->g_344.f6.f6, "p_632->g_344.f6.f6", print_hash_value);
    transparent_crc(p_632->g_344.f6.f7, "p_632->g_344.f6.f7", print_hash_value);
    transparent_crc(p_632->g_344.f6.f8, "p_632->g_344.f6.f8", print_hash_value);
    transparent_crc(p_632->g_360.x, "p_632->g_360.x", print_hash_value);
    transparent_crc(p_632->g_360.y, "p_632->g_360.y", print_hash_value);
    transparent_crc(p_632->g_379, "p_632->g_379", print_hash_value);
    transparent_crc(p_632->g_380, "p_632->g_380", print_hash_value);
    transparent_crc(p_632->g_392.x, "p_632->g_392.x", print_hash_value);
    transparent_crc(p_632->g_392.y, "p_632->g_392.y", print_hash_value);
    transparent_crc(p_632->g_415.f0, "p_632->g_415.f0", print_hash_value);
    transparent_crc(p_632->g_415.f1, "p_632->g_415.f1", print_hash_value);
    transparent_crc(p_632->g_415.f2, "p_632->g_415.f2", print_hash_value);
    transparent_crc(p_632->g_415.f3, "p_632->g_415.f3", print_hash_value);
    transparent_crc(p_632->g_415.f4, "p_632->g_415.f4", print_hash_value);
    transparent_crc(p_632->g_415.f5, "p_632->g_415.f5", print_hash_value);
    transparent_crc(p_632->g_415.f6, "p_632->g_415.f6", print_hash_value);
    transparent_crc(p_632->g_415.f7, "p_632->g_415.f7", print_hash_value);
    transparent_crc(p_632->g_415.f8, "p_632->g_415.f8", print_hash_value);
    transparent_crc(p_632->g_433.x, "p_632->g_433.x", print_hash_value);
    transparent_crc(p_632->g_433.y, "p_632->g_433.y", print_hash_value);
    transparent_crc(p_632->g_433.z, "p_632->g_433.z", print_hash_value);
    transparent_crc(p_632->g_433.w, "p_632->g_433.w", print_hash_value);
    transparent_crc(p_632->g_483, "p_632->g_483", print_hash_value);
    transparent_crc(p_632->g_510.x, "p_632->g_510.x", print_hash_value);
    transparent_crc(p_632->g_510.y, "p_632->g_510.y", print_hash_value);
    transparent_crc(p_632->g_510.z, "p_632->g_510.z", print_hash_value);
    transparent_crc(p_632->g_510.w, "p_632->g_510.w", print_hash_value);
    transparent_crc(p_632->g_513.s0, "p_632->g_513.s0", print_hash_value);
    transparent_crc(p_632->g_513.s1, "p_632->g_513.s1", print_hash_value);
    transparent_crc(p_632->g_513.s2, "p_632->g_513.s2", print_hash_value);
    transparent_crc(p_632->g_513.s3, "p_632->g_513.s3", print_hash_value);
    transparent_crc(p_632->g_513.s4, "p_632->g_513.s4", print_hash_value);
    transparent_crc(p_632->g_513.s5, "p_632->g_513.s5", print_hash_value);
    transparent_crc(p_632->g_513.s6, "p_632->g_513.s6", print_hash_value);
    transparent_crc(p_632->g_513.s7, "p_632->g_513.s7", print_hash_value);
    transparent_crc(p_632->g_525.x, "p_632->g_525.x", print_hash_value);
    transparent_crc(p_632->g_525.y, "p_632->g_525.y", print_hash_value);
    transparent_crc(p_632->g_532, "p_632->g_532", print_hash_value);
    transparent_crc(p_632->g_537.x, "p_632->g_537.x", print_hash_value);
    transparent_crc(p_632->g_537.y, "p_632->g_537.y", print_hash_value);
    transparent_crc(p_632->g_537.z, "p_632->g_537.z", print_hash_value);
    transparent_crc(p_632->g_537.w, "p_632->g_537.w", print_hash_value);
    transparent_crc(p_632->g_538.s0, "p_632->g_538.s0", print_hash_value);
    transparent_crc(p_632->g_538.s1, "p_632->g_538.s1", print_hash_value);
    transparent_crc(p_632->g_538.s2, "p_632->g_538.s2", print_hash_value);
    transparent_crc(p_632->g_538.s3, "p_632->g_538.s3", print_hash_value);
    transparent_crc(p_632->g_538.s4, "p_632->g_538.s4", print_hash_value);
    transparent_crc(p_632->g_538.s5, "p_632->g_538.s5", print_hash_value);
    transparent_crc(p_632->g_538.s6, "p_632->g_538.s6", print_hash_value);
    transparent_crc(p_632->g_538.s7, "p_632->g_538.s7", print_hash_value);
    transparent_crc(p_632->g_538.s8, "p_632->g_538.s8", print_hash_value);
    transparent_crc(p_632->g_538.s9, "p_632->g_538.s9", print_hash_value);
    transparent_crc(p_632->g_538.sa, "p_632->g_538.sa", print_hash_value);
    transparent_crc(p_632->g_538.sb, "p_632->g_538.sb", print_hash_value);
    transparent_crc(p_632->g_538.sc, "p_632->g_538.sc", print_hash_value);
    transparent_crc(p_632->g_538.sd, "p_632->g_538.sd", print_hash_value);
    transparent_crc(p_632->g_538.se, "p_632->g_538.se", print_hash_value);
    transparent_crc(p_632->g_538.sf, "p_632->g_538.sf", print_hash_value);
    transparent_crc(p_632->g_543.f0, "p_632->g_543.f0", print_hash_value);
    transparent_crc(p_632->g_543.f1, "p_632->g_543.f1", print_hash_value);
    transparent_crc(p_632->g_543.f2, "p_632->g_543.f2", print_hash_value);
    transparent_crc(p_632->g_543.f3, "p_632->g_543.f3", print_hash_value);
    transparent_crc(p_632->g_543.f4, "p_632->g_543.f4", print_hash_value);
    transparent_crc(p_632->g_543.f5, "p_632->g_543.f5", print_hash_value);
    transparent_crc(p_632->g_543.f6, "p_632->g_543.f6", print_hash_value);
    transparent_crc(p_632->g_543.f7, "p_632->g_543.f7", print_hash_value);
    transparent_crc(p_632->g_543.f8, "p_632->g_543.f8", print_hash_value);
    transparent_crc(p_632->g_551, "p_632->g_551", print_hash_value);
    transparent_crc(p_632->g_577.f0, "p_632->g_577.f0", print_hash_value);
    transparent_crc(p_632->g_577.f1, "p_632->g_577.f1", print_hash_value);
    transparent_crc(p_632->g_577.f2, "p_632->g_577.f2", print_hash_value);
    transparent_crc(p_632->g_577.f3, "p_632->g_577.f3", print_hash_value);
    transparent_crc(p_632->g_577.f4, "p_632->g_577.f4", print_hash_value);
    transparent_crc(p_632->g_577.f5, "p_632->g_577.f5", print_hash_value);
    transparent_crc(p_632->g_577.f6, "p_632->g_577.f6", print_hash_value);
    transparent_crc(p_632->g_577.f7, "p_632->g_577.f7", print_hash_value);
    transparent_crc(p_632->g_577.f8, "p_632->g_577.f8", print_hash_value);
    transparent_crc(p_632->g_582, "p_632->g_582", print_hash_value);
    transparent_crc(p_632->g_609.s0, "p_632->g_609.s0", print_hash_value);
    transparent_crc(p_632->g_609.s1, "p_632->g_609.s1", print_hash_value);
    transparent_crc(p_632->g_609.s2, "p_632->g_609.s2", print_hash_value);
    transparent_crc(p_632->g_609.s3, "p_632->g_609.s3", print_hash_value);
    transparent_crc(p_632->g_609.s4, "p_632->g_609.s4", print_hash_value);
    transparent_crc(p_632->g_609.s5, "p_632->g_609.s5", print_hash_value);
    transparent_crc(p_632->g_609.s6, "p_632->g_609.s6", print_hash_value);
    transparent_crc(p_632->g_609.s7, "p_632->g_609.s7", print_hash_value);
    transparent_crc(p_632->g_609.s8, "p_632->g_609.s8", print_hash_value);
    transparent_crc(p_632->g_609.s9, "p_632->g_609.s9", print_hash_value);
    transparent_crc(p_632->g_609.sa, "p_632->g_609.sa", print_hash_value);
    transparent_crc(p_632->g_609.sb, "p_632->g_609.sb", print_hash_value);
    transparent_crc(p_632->g_609.sc, "p_632->g_609.sc", print_hash_value);
    transparent_crc(p_632->g_609.sd, "p_632->g_609.sd", print_hash_value);
    transparent_crc(p_632->g_609.se, "p_632->g_609.se", print_hash_value);
    transparent_crc(p_632->g_609.sf, "p_632->g_609.sf", print_hash_value);
    transparent_crc(p_632->g_625, "p_632->g_625", print_hash_value);
    transparent_crc(p_632->v_collective, "p_632->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 6; i++)
            transparent_crc(p_632->g_special_values[i + 6 * get_linear_group_id()], "p_632->g_special_values[i + 6 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_632->l_comm_values[get_linear_local_id()], "p_632->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_632->g_comm_values[get_linear_group_id() * 49 + get_linear_local_id()], "p_632->g_comm_values[get_linear_group_id() * 49 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
