// --atomics 54 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 44,82,2 -l 1,41,2
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

__constant uint32_t permutations[10][82] = {
{23,44,41,73,38,59,40,62,9,3,17,34,60,52,49,12,43,70,24,11,18,77,47,78,56,27,5,68,64,19,67,15,4,32,14,66,1,48,21,30,81,71,10,35,6,39,58,79,76,55,50,22,13,16,36,25,54,29,28,80,72,42,63,8,0,45,65,2,74,57,75,33,53,46,20,31,69,7,26,51,37,61}, // permutation 0
{9,62,23,44,79,70,66,32,37,30,67,24,31,53,10,3,27,11,43,29,61,50,80,60,49,15,77,52,22,46,75,63,57,38,40,25,12,16,26,0,5,58,34,71,73,18,51,1,72,35,74,8,4,56,64,39,78,36,59,54,68,69,7,65,55,6,76,42,45,28,81,47,17,20,41,2,13,48,19,33,14,21}, // permutation 1
{36,24,62,17,77,80,34,23,27,46,32,43,63,56,55,58,18,78,75,50,33,72,19,12,61,81,21,74,54,48,28,14,45,40,7,60,41,51,6,71,65,30,15,25,22,9,4,52,59,79,57,2,76,68,13,38,73,66,64,39,69,47,44,35,70,20,3,31,42,67,29,37,5,8,16,1,11,53,26,49,0,10}, // permutation 2
{47,51,52,43,28,46,8,33,63,2,6,54,48,50,17,0,1,80,12,11,56,62,15,18,14,24,49,32,29,23,65,70,74,21,78,31,45,57,40,68,27,67,42,77,76,66,71,25,72,34,19,9,81,53,79,35,30,69,22,55,26,5,58,75,36,37,16,41,64,73,3,10,13,44,4,7,20,61,39,59,60,38}, // permutation 3
{65,68,23,0,25,40,38,64,73,50,35,59,27,28,79,58,66,11,53,43,44,19,45,12,17,67,36,4,51,78,3,61,7,41,37,48,13,63,33,1,56,52,2,77,42,39,74,46,62,5,72,10,15,14,81,30,29,76,9,55,24,21,57,6,54,31,71,75,60,47,32,34,70,26,16,69,18,49,22,80,20,8}, // permutation 4
{24,68,78,16,73,75,81,57,11,40,0,71,32,3,6,48,67,39,47,42,34,25,26,51,37,52,62,10,33,53,35,61,36,77,5,22,55,43,41,4,59,38,23,29,80,31,27,15,63,70,79,44,72,54,17,69,21,8,13,60,66,76,18,64,58,7,2,1,28,12,30,50,74,14,56,46,19,65,49,20,9,45}, // permutation 5
{61,21,58,73,32,33,2,15,68,13,57,23,64,20,1,60,36,74,67,18,54,16,5,17,63,49,47,38,51,37,24,14,4,22,43,39,72,59,40,42,66,81,55,7,9,27,35,70,44,78,28,48,80,75,3,77,11,19,25,10,30,6,76,0,56,71,31,53,46,69,8,41,26,65,34,62,50,52,45,12,29,79}, // permutation 6
{35,68,66,36,74,29,56,57,62,42,7,77,65,15,9,79,0,20,54,25,27,47,18,55,23,44,30,11,78,63,75,50,72,5,14,61,2,43,13,76,6,69,17,64,73,51,71,40,22,70,10,49,24,59,12,53,81,41,45,19,60,33,80,52,28,67,3,4,38,37,21,32,1,34,39,48,46,31,8,16,26,58}, // permutation 7
{7,59,77,49,20,31,37,63,56,54,73,26,3,44,27,76,0,22,45,23,15,36,13,28,18,6,34,52,17,16,9,11,12,64,81,38,14,25,75,80,53,69,72,24,35,39,78,55,61,29,58,48,21,60,79,66,43,5,30,2,57,47,67,33,46,4,40,51,42,68,8,32,1,50,10,70,65,71,74,41,19,62}, // permutation 8
{67,5,50,15,8,60,32,29,54,26,80,37,23,12,44,28,70,7,24,40,39,20,43,68,72,18,79,22,53,66,13,55,48,46,73,9,64,25,31,52,10,49,62,19,30,61,74,3,75,33,41,56,65,2,59,34,63,1,11,81,69,17,4,57,14,27,77,71,76,36,51,6,78,0,45,58,38,16,35,47,21,42} // permutation 9
};

// Seed: 1596247634

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int8_t  f0;
   int32_t  f1;
   volatile uint32_t  f2;
   int64_t  f3;
   int16_t  f4;
   int64_t  f5;
   int64_t  f6;
};

struct S1 {
   int32_t  f0;
   volatile int64_t  f1;
   volatile struct S0  f2;
   volatile uint64_t  f3;
};

struct S2 {
   int8_t  f0;
   int32_t  f1;
   struct S1  f2;
};

struct S3 {
    int16_t g_15;
    VECTOR(uint32_t, 4) g_40;
    int32_t g_61;
    int32_t *g_72;
    uint32_t g_95;
    volatile VECTOR(int8_t, 8) g_110;
    volatile int16_t g_119;
    volatile int16_t *g_118[6][8][1];
    int32_t g_125;
    struct S1 g_133;
    int8_t g_151;
    uint32_t g_153;
    int64_t g_154;
    volatile uint16_t g_159;
    volatile VECTOR(int32_t, 8) g_162;
    uint64_t g_182;
    uint64_t g_184;
    int8_t g_187[10];
    uint16_t g_188;
    int16_t g_193[9];
    VECTOR(uint8_t, 2) g_229;
    int32_t ** volatile g_232[10];
    struct S2 g_236;
    struct S1 g_275;
    struct S2 g_276;
    volatile uint32_t g_298;
    int32_t *g_322;
    int32_t *g_326;
    int32_t ** volatile g_325;
    VECTOR(int8_t, 16) g_341;
    uint8_t g_344;
    uint32_t g_352;
    volatile uint32_t **g_355;
    int32_t * volatile g_362;
    int32_t * volatile g_363;
    volatile struct S2 g_364[2][8][2];
    int32_t *g_369[6][5][7];
    struct S2 g_370;
    struct S2 g_371;
    volatile struct S0 g_374;
    VECTOR(int32_t, 2) g_378;
    volatile VECTOR(int16_t, 8) g_380;
    volatile VECTOR(int32_t, 16) g_381;
    struct S0 g_406;
    struct S0 *g_408;
    struct S0 ** volatile g_407;
    int32_t g_433;
    int32_t * volatile g_436[6];
    struct S0 g_437;
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
uint32_t  func_1(struct S3 * p_439);
struct S0  func_2(uint64_t  p_3, int32_t  p_4, int32_t  p_5, uint64_t  p_6, struct S3 * p_439);
uint64_t  func_7(uint32_t  p_8, int16_t  p_9, uint64_t  p_10, int16_t  p_11, int8_t  p_12, struct S3 * p_439);
struct S1  func_16(int16_t * p_17, uint32_t  p_18, uint64_t  p_19, int16_t  p_20, int16_t * p_21, struct S3 * p_439);
int16_t * func_22(uint64_t  p_23, uint64_t  p_24, struct S3 * p_439);
int32_t * func_27(uint32_t  p_28, int32_t  p_29, int16_t * p_30, struct S3 * p_439);
int32_t  func_33(uint8_t  p_34, int16_t  p_35, int16_t * p_36, struct S3 * p_439);
uint8_t  func_41(int16_t  p_42, uint8_t  p_43, uint32_t  p_44, struct S3 * p_439);
int32_t  func_47(int16_t * p_48, int32_t  p_49, int64_t  p_50, int64_t  p_51, struct S3 * p_439);
int16_t * func_52(uint64_t  p_53, int32_t * p_54, int16_t  p_55, int32_t  p_56, struct S3 * p_439);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_439->g_comm_values p_439->g_61 p_439->g_133.f2 p_439->g_187 p_439->g_40 p_439->g_184 p_439->g_72 p_439->g_236 p_439->g_275 p_439->g_276 p_439->g_298 p_439->g_193 p_439->g_325 p_439->g_352 p_439->g_355 p_439->g_363 p_439->g_364 p_439->g_369 p_439->g_229 p_439->g_188 p_439->g_370 p_439->g_371.f2 p_439->g_374 p_439->g_378 p_439->g_380 p_439->g_381 p_439->g_125 p_439->g_153 p_439->g_162 p_439->g_154 p_439->g_344 p_439->g_407 p_439->g_433 p_439->g_437
 * writes: p_439->g_15 p_439->g_184 p_439->g_133.f0 p_439->g_61 p_439->g_72 p_439->g_125 p_439->g_236 p_439->g_182 p_439->g_298 p_439->g_322 p_439->g_151 p_439->g_193 p_439->g_326 p_439->g_95 p_439->g_344 p_439->l_comm_values p_439->g_364 p_439->g_371 p_439->g_187 p_439->g_154 p_439->g_408 p_439->g_437
 */
uint32_t  func_1(struct S3 * p_439)
{ /* block id: 4 */
    uint8_t l_13 = 255UL;
    int16_t *l_14[1][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_368 = (void*)0;
    int8_t l_402 = (-1L);
    struct S0 *l_438 = &p_439->g_437;
    int i, j;
    (*l_438) = func_2(func_7(p_439->g_comm_values[p_439->tid], (p_439->g_15 = (p_439->g_comm_values[p_439->tid] | l_13)), (l_13 , (func_16(func_22(p_439->g_comm_values[p_439->tid], l_13, p_439), (((((l_13 ^ GROUP_DIVERGE(0, 1)) , l_368) != p_439->g_369[3][0][3]) | p_439->g_229.x) || 0UL), p_439->g_352, p_439->g_188, l_14[0][2], p_439) , l_13)), p_439->g_378.y, l_402, p_439), l_13, p_439->g_378.x, p_439->g_275.f0, p_439);
    return l_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_439->g_344 p_439->g_407 p_439->g_162 p_439->g_433 p_439->g_437
 * writes: p_439->g_344 p_439->g_408
 */
struct S0  func_2(uint64_t  p_3, int32_t  p_4, int32_t  p_5, uint64_t  p_6, struct S3 * p_439)
{ /* block id: 170 */
    struct S0 **l_430 = &p_439->g_408;
    int32_t l_431 = (-1L);
    VECTOR(int64_t, 16) l_432 = (VECTOR(int64_t, 16))(0x2FD3F3F9A9F736F9L, (VECTOR(int64_t, 4))(0x2FD3F3F9A9F736F9L, (VECTOR(int64_t, 2))(0x2FD3F3F9A9F736F9L, 1L), 1L), 1L, 0x2FD3F3F9A9F736F9L, 1L, (VECTOR(int64_t, 2))(0x2FD3F3F9A9F736F9L, 1L), (VECTOR(int64_t, 2))(0x2FD3F3F9A9F736F9L, 1L), 0x2FD3F3F9A9F736F9L, 1L, 0x2FD3F3F9A9F736F9L, 1L);
    uint32_t *l_435 = &p_439->g_95;
    uint32_t **l_434[5] = {&l_435,&l_435,&l_435,&l_435,&l_435};
    int i;
    for (p_439->g_344 = 17; (p_439->g_344 >= 2); p_439->g_344 = safe_sub_func_int8_t_s_s(p_439->g_344, 6))
    { /* block id: 173 */
        struct S0 *l_405[7] = {(void*)0,&p_439->g_406,(void*)0,(void*)0,&p_439->g_406,(void*)0,(void*)0};
        int32_t l_423[6] = {0x3F960336L,0x72E4F712L,0x3F960336L,0x3F960336L,0x72E4F712L,0x3F960336L};
        int8_t l_424 = 0x0BL;
        struct S0 ***l_427 = (void*)0;
        struct S0 **l_429 = &l_405[0];
        struct S0 ***l_428[8] = {&l_429,&l_429,&l_429,&l_429,&l_429,&l_429,&l_429,&l_429};
        int i;
        (*p_439->g_407) = l_405[0];
        if ((atomic_inc(&p_439->g_atomic_input[54 * get_linear_group_id() + 34]) == 3))
        { /* block id: 176 */
            uint16_t l_409 = 2UL;
            struct S0 *l_412 = (void*)0;
            struct S0 l_414[6] = {{0x3DL,0x69847B15L,0UL,2L,0x62BEL,-1L,0x495CD86355212790L},{0x3DL,0x69847B15L,0UL,2L,0x62BEL,-1L,0x495CD86355212790L},{0x3DL,0x69847B15L,0UL,2L,0x62BEL,-1L,0x495CD86355212790L},{0x3DL,0x69847B15L,0UL,2L,0x62BEL,-1L,0x495CD86355212790L},{0x3DL,0x69847B15L,0UL,2L,0x62BEL,-1L,0x495CD86355212790L},{0x3DL,0x69847B15L,0UL,2L,0x62BEL,-1L,0x495CD86355212790L}};
            struct S0 *l_413[2][5] = {{&l_414[2],&l_414[0],&l_414[2],&l_414[0],&l_414[2]},{&l_414[2],&l_414[0],&l_414[2],&l_414[0],&l_414[2]}};
            uint16_t l_415[1][1][8] = {{{65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL}}};
            int16_t l_416 = (-1L);
            VECTOR(int64_t, 4) l_417 = (VECTOR(int64_t, 4))(0x13E8454FC031D3BCL, (VECTOR(int64_t, 2))(0x13E8454FC031D3BCL, 5L), 5L);
            uint32_t l_418 = 0x9B6D16E8L;
            struct S1 l_419 = {0x5385AB5FL,0x40EF5166529EA2CFL,{0x24L,-1L,0xCA573D8DL,0x5232DBBB214EE00BL,1L,0x24FF1681735BC743L,0x675A49328860F435L},18446744073709551611UL};/* VOLATILE GLOBAL l_419 */
            uint8_t l_420[1];
            struct S1 l_421[5][5] = {{{0x181A16ABL,0x7489ACD7724A055FL,{-6L,0x6C93340AL,0x3084A131L,0x6EEE3BF38E63BF30L,0L,2L,3L},0xBAD850BDF1DCE3FBL},{0x09D56D58L,0L,{8L,0x03A74259L,0x318EA7C9L,0x793489E2C55E10A7L,0x7BB1L,-8L,0x7E947467363D9612L},0x0BD67B30AC9E6E62L},{0x4EA092BAL,1L,{1L,1L,4294967295UL,7L,0x59E2L,1L,0L},18446744073709551606UL},{0x09D56D58L,0L,{8L,0x03A74259L,0x318EA7C9L,0x793489E2C55E10A7L,0x7BB1L,-8L,0x7E947467363D9612L},0x0BD67B30AC9E6E62L},{0x181A16ABL,0x7489ACD7724A055FL,{-6L,0x6C93340AL,0x3084A131L,0x6EEE3BF38E63BF30L,0L,2L,3L},0xBAD850BDF1DCE3FBL}},{{0x181A16ABL,0x7489ACD7724A055FL,{-6L,0x6C93340AL,0x3084A131L,0x6EEE3BF38E63BF30L,0L,2L,3L},0xBAD850BDF1DCE3FBL},{0x09D56D58L,0L,{8L,0x03A74259L,0x318EA7C9L,0x793489E2C55E10A7L,0x7BB1L,-8L,0x7E947467363D9612L},0x0BD67B30AC9E6E62L},{0x4EA092BAL,1L,{1L,1L,4294967295UL,7L,0x59E2L,1L,0L},18446744073709551606UL},{0x09D56D58L,0L,{8L,0x03A74259L,0x318EA7C9L,0x793489E2C55E10A7L,0x7BB1L,-8L,0x7E947467363D9612L},0x0BD67B30AC9E6E62L},{0x181A16ABL,0x7489ACD7724A055FL,{-6L,0x6C93340AL,0x3084A131L,0x6EEE3BF38E63BF30L,0L,2L,3L},0xBAD850BDF1DCE3FBL}},{{0x181A16ABL,0x7489ACD7724A055FL,{-6L,0x6C93340AL,0x3084A131L,0x6EEE3BF38E63BF30L,0L,2L,3L},0xBAD850BDF1DCE3FBL},{0x09D56D58L,0L,{8L,0x03A74259L,0x318EA7C9L,0x793489E2C55E10A7L,0x7BB1L,-8L,0x7E947467363D9612L},0x0BD67B30AC9E6E62L},{0x4EA092BAL,1L,{1L,1L,4294967295UL,7L,0x59E2L,1L,0L},18446744073709551606UL},{0x09D56D58L,0L,{8L,0x03A74259L,0x318EA7C9L,0x793489E2C55E10A7L,0x7BB1L,-8L,0x7E947467363D9612L},0x0BD67B30AC9E6E62L},{0x181A16ABL,0x7489ACD7724A055FL,{-6L,0x6C93340AL,0x3084A131L,0x6EEE3BF38E63BF30L,0L,2L,3L},0xBAD850BDF1DCE3FBL}},{{0x181A16ABL,0x7489ACD7724A055FL,{-6L,0x6C93340AL,0x3084A131L,0x6EEE3BF38E63BF30L,0L,2L,3L},0xBAD850BDF1DCE3FBL},{0x09D56D58L,0L,{8L,0x03A74259L,0x318EA7C9L,0x793489E2C55E10A7L,0x7BB1L,-8L,0x7E947467363D9612L},0x0BD67B30AC9E6E62L},{0x4EA092BAL,1L,{1L,1L,4294967295UL,7L,0x59E2L,1L,0L},18446744073709551606UL},{0x09D56D58L,0L,{8L,0x03A74259L,0x318EA7C9L,0x793489E2C55E10A7L,0x7BB1L,-8L,0x7E947467363D9612L},0x0BD67B30AC9E6E62L},{0x181A16ABL,0x7489ACD7724A055FL,{-6L,0x6C93340AL,0x3084A131L,0x6EEE3BF38E63BF30L,0L,2L,3L},0xBAD850BDF1DCE3FBL}},{{0x181A16ABL,0x7489ACD7724A055FL,{-6L,0x6C93340AL,0x3084A131L,0x6EEE3BF38E63BF30L,0L,2L,3L},0xBAD850BDF1DCE3FBL},{0x09D56D58L,0L,{8L,0x03A74259L,0x318EA7C9L,0x793489E2C55E10A7L,0x7BB1L,-8L,0x7E947467363D9612L},0x0BD67B30AC9E6E62L},{0x4EA092BAL,1L,{1L,1L,4294967295UL,7L,0x59E2L,1L,0L},18446744073709551606UL},{0x09D56D58L,0L,{8L,0x03A74259L,0x318EA7C9L,0x793489E2C55E10A7L,0x7BB1L,-8L,0x7E947467363D9612L},0x0BD67B30AC9E6E62L},{0x181A16ABL,0x7489ACD7724A055FL,{-6L,0x6C93340AL,0x3084A131L,0x6EEE3BF38E63BF30L,0L,2L,3L},0xBAD850BDF1DCE3FBL}}};
            struct S1 l_422[9][3][1] = {{{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}}},{{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}}},{{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}}},{{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}}},{{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}}},{{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}}},{{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}}},{{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}}},{{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}},{{-1L,0L,{0x66L,-1L,8UL,-1L,-9L,-6L,0x38D6D6C96DC3A5EBL},0xCACCFC526BA69AAAL}}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_420[i] = 0xBEL;
            l_409++;
            l_413[1][1] = l_412;
            l_422[3][2][0] = (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))((l_415[0][0][6] , l_416), (-3L), ((VECTOR(int64_t, 2))(l_417.zw)), 0x03B087DB51E6FFA7L, (l_418 &= 5L), 0x3B103985E2D41837L, 0x14FED4E281F1ADDBL)))))).s2735115045765515)))).s5 , (l_419 , (l_420[0] , l_421[0][3])));
            unsigned int result = 0;
            result += l_409;
            int l_414_i0;
            for (l_414_i0 = 0; l_414_i0 < 6; l_414_i0++) {
                result += l_414[l_414_i0].f0;
                result += l_414[l_414_i0].f1;
                result += l_414[l_414_i0].f2;
                result += l_414[l_414_i0].f3;
                result += l_414[l_414_i0].f4;
                result += l_414[l_414_i0].f5;
                result += l_414[l_414_i0].f6;
            }
            int l_415_i0, l_415_i1, l_415_i2;
            for (l_415_i0 = 0; l_415_i0 < 1; l_415_i0++) {
                for (l_415_i1 = 0; l_415_i1 < 1; l_415_i1++) {
                    for (l_415_i2 = 0; l_415_i2 < 8; l_415_i2++) {
                        result += l_415[l_415_i0][l_415_i1][l_415_i2];
                    }
                }
            }
            result += l_416;
            result += l_417.w;
            result += l_417.z;
            result += l_417.y;
            result += l_417.x;
            result += l_418;
            result += l_419.f0;
            result += l_419.f1;
            result += l_419.f2.f0;
            result += l_419.f2.f1;
            result += l_419.f2.f2;
            result += l_419.f2.f3;
            result += l_419.f2.f4;
            result += l_419.f2.f5;
            result += l_419.f2.f6;
            result += l_419.f3;
            int l_420_i0;
            for (l_420_i0 = 0; l_420_i0 < 1; l_420_i0++) {
                result += l_420[l_420_i0];
            }
            int l_421_i0, l_421_i1;
            for (l_421_i0 = 0; l_421_i0 < 5; l_421_i0++) {
                for (l_421_i1 = 0; l_421_i1 < 5; l_421_i1++) {
                    result += l_421[l_421_i0][l_421_i1].f0;
                    result += l_421[l_421_i0][l_421_i1].f1;
                    result += l_421[l_421_i0][l_421_i1].f2.f0;
                    result += l_421[l_421_i0][l_421_i1].f2.f1;
                    result += l_421[l_421_i0][l_421_i1].f2.f2;
                    result += l_421[l_421_i0][l_421_i1].f2.f3;
                    result += l_421[l_421_i0][l_421_i1].f2.f4;
                    result += l_421[l_421_i0][l_421_i1].f2.f5;
                    result += l_421[l_421_i0][l_421_i1].f2.f6;
                    result += l_421[l_421_i0][l_421_i1].f3;
                }
            }
            int l_422_i0, l_422_i1, l_422_i2;
            for (l_422_i0 = 0; l_422_i0 < 9; l_422_i0++) {
                for (l_422_i1 = 0; l_422_i1 < 3; l_422_i1++) {
                    for (l_422_i2 = 0; l_422_i2 < 1; l_422_i2++) {
                        result += l_422[l_422_i0][l_422_i1][l_422_i2].f0;
                        result += l_422[l_422_i0][l_422_i1][l_422_i2].f1;
                        result += l_422[l_422_i0][l_422_i1][l_422_i2].f2.f0;
                        result += l_422[l_422_i0][l_422_i1][l_422_i2].f2.f1;
                        result += l_422[l_422_i0][l_422_i1][l_422_i2].f2.f2;
                        result += l_422[l_422_i0][l_422_i1][l_422_i2].f2.f3;
                        result += l_422[l_422_i0][l_422_i1][l_422_i2].f2.f4;
                        result += l_422[l_422_i0][l_422_i1][l_422_i2].f2.f5;
                        result += l_422[l_422_i0][l_422_i1][l_422_i2].f2.f6;
                        result += l_422[l_422_i0][l_422_i1][l_422_i2].f3;
                    }
                }
            }
            atomic_add(&p_439->g_special_values[54 * get_linear_group_id() + 34], result);
        }
        else
        { /* block id: 181 */
            (1 + 1);
        }
        p_5 &= ((l_423[2] , p_439->g_162.s1) ^ (l_424 & (safe_sub_func_int32_t_s_s(((((l_430 = (void*)0) != &p_439->g_408) != (l_431 ^ (((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(1L, ((VECTOR(int64_t, 2))(l_432.s90)), (-3L))).lo)).xyxyyyyx)).s5 != (p_439->g_433 & p_439->g_433)) , ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 4))((l_434[2] != (void*)0), ((VECTOR(int64_t, 2))(0x47266C507624869AL)), 0x72F0160E8BC382DCL)), ((VECTOR(int64_t, 4))(0x175A9AC23745C091L))))).w) == 0x939EC19FB8E3F978L))) <= l_424), 4294967295UL))));
        p_4 ^= l_423[2];
    }
    return p_439->g_437;
}


/* ------------------------------------------ */
/* 
 * reads : p_439->g_236.f2.f2.f2
 * writes:
 */
uint64_t  func_7(uint32_t  p_8, int16_t  p_9, uint64_t  p_10, int16_t  p_11, int8_t  p_12, struct S3 * p_439)
{ /* block id: 168 */
    return p_439->g_236.f2.f2.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_439->g_370 p_439->g_371.f2 p_439->g_374 p_439->g_378 p_439->g_380 p_439->g_381 p_439->g_125 p_439->g_153 p_439->g_162 p_439->g_325 p_439->g_154 p_439->g_364.f2
 * writes: p_439->g_371 p_439->g_187 p_439->g_326 p_439->g_154
 */
struct S1  func_16(int16_t * p_17, uint32_t  p_18, uint64_t  p_19, int16_t  p_20, int16_t * p_21, struct S3 * p_439)
{ /* block id: 144 */
    int16_t *l_373 = &p_439->g_193[8];
    int16_t **l_372[4][1] = {{&l_373},{&l_373},{&l_373},{&l_373}};
    int32_t l_377 = 3L;
    VECTOR(int32_t, 2) l_379 = (VECTOR(int32_t, 2))(8L, 5L);
    int16_t l_382 = 2L;
    int8_t *l_383 = &p_439->g_187[9];
    int32_t l_384 = 0L;
    int32_t **l_385[2][6][4] = {{{(void*)0,(void*)0,&p_439->g_326,&p_439->g_72},{(void*)0,(void*)0,&p_439->g_326,&p_439->g_72},{(void*)0,(void*)0,&p_439->g_326,&p_439->g_72},{(void*)0,(void*)0,&p_439->g_326,&p_439->g_72},{(void*)0,(void*)0,&p_439->g_326,&p_439->g_72},{(void*)0,(void*)0,&p_439->g_326,&p_439->g_72}},{{(void*)0,(void*)0,&p_439->g_326,&p_439->g_72},{(void*)0,(void*)0,&p_439->g_326,&p_439->g_72},{(void*)0,(void*)0,&p_439->g_326,&p_439->g_72},{(void*)0,(void*)0,&p_439->g_326,&p_439->g_72},{(void*)0,(void*)0,&p_439->g_326,&p_439->g_72},{(void*)0,(void*)0,&p_439->g_326,&p_439->g_72}}};
    uint16_t l_399 = 1UL;
    int i, j, k;
    p_439->g_371 = p_439->g_370;
    (*p_439->g_325) = ((&p_17 != l_372[1][0]) , (((((((p_439->g_371.f2 , p_439->g_374) , (((safe_add_func_int8_t_s_s(((*l_383) = (((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(0x4FED21FEL, l_377, 7L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(p_439->g_378.yyyyyxxxyxyyyyxy)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_379.xxyxxxxy)).odd)).yyywwxwx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(p_439->g_380.s3736)), ((VECTOR(uint16_t, 2))(0xB0C1L, 4UL)).xxxy))).wxxxwyyzzyxyzxyz)).s63c0)).yzxwyyzy))).lo, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(p_439->g_381.sea933236)).odd, ((VECTOR(int32_t, 8))(((p_18 >= ((l_377 , (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x319BL, 0x4EFAL)).yyyxxyyy)).s2 | (l_382 < l_379.x))) & (-8L))) || l_379.x), 3L, ((VECTOR(int32_t, 2))((-1L))), 0x2ED631FDL, ((VECTOR(int32_t, 2))(0x15C780BEL)), 2L)).odd))).zwyxwywx, ((VECTOR(int32_t, 8))(0x21743C2DL))))).hi))).zwwxyxyx)).lo)), 0x464521CDL))))).s6 && l_379.x)), l_384)) , p_18) ^ p_439->g_125)) , l_379.x) == p_439->g_153) , p_439->g_162.s2) < 0x47BDAC3BL) , &l_377));
    for (p_439->g_154 = 0; (p_439->g_154 >= 24); ++p_439->g_154)
    { /* block id: 150 */
        int32_t *l_388 = &p_439->g_61;
        int32_t *l_389 = &l_377;
        int32_t l_398 = 0L;
        l_389 = l_388;
        if ((atomic_inc(&p_439->l_atomic_input[45]) == 2))
        { /* block id: 153 */
            VECTOR(int32_t, 4) l_390 = (VECTOR(int32_t, 4))(0x144C30C1L, (VECTOR(int32_t, 2))(0x144C30C1L, 0x253EA0AAL), 0x253EA0AAL);
            uint32_t l_394[8];
            int32_t l_395[6] = {(-5L),(-4L),(-5L),(-5L),(-4L),(-5L)};
            int8_t l_396 = 0x02L;
            uint32_t l_397 = 0xADF4839CL;
            int i;
            for (i = 0; i < 8; i++)
                l_394[i] = 0xB59D6375L;
            if (((VECTOR(int32_t, 2))(l_390.yy)).odd)
            { /* block id: 154 */
                int32_t l_392 = 0L;
                int32_t *l_391[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_391[i] = &l_392;
                l_391[1] = (void*)0;
            }
            else
            { /* block id: 156 */
                int32_t l_393 = 0L;
                l_390.x &= l_393;
            }
            l_395[2] |= l_394[4];
            l_397 ^= (l_396 = 0L);
            unsigned int result = 0;
            result += l_390.w;
            result += l_390.z;
            result += l_390.y;
            result += l_390.x;
            int l_394_i0;
            for (l_394_i0 = 0; l_394_i0 < 8; l_394_i0++) {
                result += l_394[l_394_i0];
            }
            int l_395_i0;
            for (l_395_i0 = 0; l_395_i0 < 6; l_395_i0++) {
                result += l_395[l_395_i0];
            }
            result += l_396;
            result += l_397;
            atomic_add(&p_439->l_special_values[45], result);
        }
        else
        { /* block id: 162 */
            (1 + 1);
        }
        --l_399;
    }
    return p_439->g_364[1][5][0].f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_439->g_comm_values p_439->g_61 p_439->g_133.f2 p_439->g_187 p_439->g_40 p_439->g_184 p_439->g_72 p_439->g_236 p_439->g_275 p_439->g_276 p_439->g_298 p_439->g_193 p_439->g_325 p_439->g_352 p_439->g_355 p_439->g_363 p_439->g_364
 * writes: p_439->g_184 p_439->g_133.f0 p_439->g_61 p_439->g_72 p_439->g_125 p_439->g_236 p_439->g_182 p_439->g_298 p_439->g_322 p_439->g_151 p_439->g_193 p_439->g_326 p_439->g_95 p_439->g_344 p_439->l_comm_values p_439->g_364
 */
int16_t * func_22(uint64_t  p_23, uint64_t  p_24, struct S3 * p_439)
{ /* block id: 6 */
    int16_t *l_32 = (void*)0;
    int32_t l_348 = 0L;
    int32_t l_349 = 0x6D170E35L;
    volatile struct S2 *l_365 = &p_439->g_364[1][5][0];
    for (p_23 = 0; (p_23 == 20); p_23 = safe_add_func_uint32_t_u_u(p_23, 8))
    { /* block id: 9 */
        int64_t l_31 = (-1L);
        int32_t **l_346 = &p_439->g_72;
        int32_t **l_347 = &p_439->g_326;
        int32_t l_358[7][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
        int32_t *l_359 = &p_439->g_236.f2.f0;
        struct S2 *l_360 = &p_439->g_276;
        int32_t *l_361 = &l_349;
        int i, j;
        (*l_347) = ((*l_346) = func_27(p_439->g_comm_values[p_439->tid], l_31, l_32, p_439));
        l_349 &= ((GROUP_DIVERGE(2, 1) , (l_348 == p_24)) && (-1L));
        (*p_439->g_363) = (((*l_361) |= (65535UL && ((((*l_359) = ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-2L), 0x4ABC1B01L)).xyyyyxxx)).s54, (int32_t)(((safe_mod_func_int32_t_s_s(p_24, 0x1F2A23B5L)) ^ (!p_24)) == (p_439->g_352 , ((safe_lshift_func_uint8_t_u_s((((void*)0 == p_439->g_355) , (safe_mul_func_uint8_t_u_u(p_23, ((((p_439->l_comm_values[(safe_mod_func_uint32_t_u_u(p_439->tid, 82))] = (p_24 ^ p_23)) , p_439->g_187[9]) & 254UL) > p_23)))), 2)) > l_358[2][0])))))), ((VECTOR(int32_t, 2))(0x7A14A86CL))))).odd) , l_360) != l_360))) || GROUP_DIVERGE(1, 1));
    }
    l_349 = ((*p_439->g_363) ^= (-1L));
    (*l_365) = p_439->g_364[1][5][0];
    return l_32;
}


/* ------------------------------------------ */
/* 
 * reads : p_439->g_40 p_439->g_comm_values p_439->l_comm_values p_439->g_61 p_439->g_110 p_439->g_118 p_439->g_125 p_439->g_133 p_439->g_151 p_439->g_153 p_439->g_159 p_439->g_162 p_439->g_187 p_439->g_188 p_439->g_184 p_439->g_229 p_439->g_72 p_439->g_236 p_439->g_275 p_439->g_276 p_439->g_298 p_439->g_193 p_439->g_325 p_439->g_95 p_439->g_341
 * writes: p_439->g_72 p_439->g_95 p_439->g_125 p_439->l_comm_values p_439->g_151 p_439->g_153 p_439->g_154 p_439->g_61 p_439->g_159 p_439->g_182 p_439->g_184 p_439->g_187 p_439->g_188 p_439->g_133.f0 p_439->g_193 p_439->g_236 p_439->g_298 p_439->g_322 p_439->g_326 p_439->g_344
 */
int32_t * func_27(uint32_t  p_28, int32_t  p_29, int16_t * p_30, struct S3 * p_439)
{ /* block id: 10 */
    int32_t l_37 = 6L;
    VECTOR(int64_t, 4) l_57 = (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 0x216D7279364560F9L), 0x216D7279364560F9L);
    int32_t l_58 = 0x22937BBCL;
    uint32_t *l_155 = &p_439->g_153;
    uint8_t l_191 = 246UL;
    int16_t *l_192 = &p_439->g_193[8];
    int32_t *l_343[7] = {&l_37,&l_58,&l_37,&l_37,&l_58,&l_37,&l_37};
    int32_t *l_345 = (void*)0;
    int i;
    p_439->g_344 = (func_33(l_37, ((safe_mul_func_int8_t_s_s(((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 8))(p_439->g_40.wyyxzyzz)).lo, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x76E9F81AL, 8UL)).xxxyxxyy)))).even))).odd)).hi > 0x557D38C4L) >= 0x0EL), ((((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(func_41(p_439->g_comm_values[p_439->tid], l_37, ((*l_155) = (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x9426CEFCL, 4294967295UL)))).even, (p_29 , func_47(func_52((l_58 = ((p_439->g_comm_values[p_439->tid] > ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 4))(0x29564FCBDFAC86E8L, ((VECTOR(int64_t, 2))(0x0DDD7AD251A65455L, 0x654A13735CA718BAL)), 1L)).zxwwxxxx, ((VECTOR(int64_t, 8))(l_57.yxwyywyy))))))).s7) , p_439->g_40.y)), &l_37, p_439->l_comm_values[(safe_mod_func_uint32_t_u_u(p_439->tid, 82))], l_37, p_439), l_57.w, p_28, p_29, p_439))))), p_439), p_28, 248UL, 255UL)), 1UL, 0x65L, ((VECTOR(uint8_t, 4))(0xD7L)), 0x1BL, 255UL, ((VECTOR(uint8_t, 2))(0x28L)), 0xAFL, 0UL)).even, ((VECTOR(uint8_t, 8))(255UL))))))).s4 >= 0x83L) , l_57.y) || p_29) & l_37))) <= l_191), l_192, p_439) , p_29);
    return l_345;
}


/* ------------------------------------------ */
/* 
 * reads : p_439->g_184 p_439->g_133.f0 p_439->g_61 p_439->g_133.f2 p_439->g_187 p_439->g_162 p_439->g_153 p_439->g_125 p_439->g_40 p_439->g_229 p_439->g_72 p_439->g_236 p_439->g_275 p_439->g_276 p_439->g_298 p_439->g_193 p_439->g_325 p_439->g_95 p_439->g_341
 * writes: p_439->g_184 p_439->g_133.f0 p_439->g_61 p_439->g_193 p_439->g_72 p_439->g_125 p_439->g_236 p_439->g_182 p_439->g_298 p_439->g_322 p_439->g_151 p_439->g_326 p_439->g_95
 */
int32_t  func_33(uint8_t  p_34, int16_t  p_35, int16_t * p_36, struct S3 * p_439)
{ /* block id: 44 */
    VECTOR(int16_t, 4) l_208 = (VECTOR(int16_t, 4))(0x41F3L, (VECTOR(int16_t, 2))(0x41F3L, 0x1A40L), 0x1A40L);
    int16_t *l_213 = (void*)0;
    int32_t l_216[6] = {0L,0L,0L,0L,0L,0L};
    int32_t *l_217 = (void*)0;
    int32_t *l_218 = (void*)0;
    int32_t *l_219 = &l_216[1];
    int32_t *l_220[8] = {&p_439->g_61,&p_439->g_61,&p_439->g_61,&p_439->g_61,&p_439->g_61,&p_439->g_61,&p_439->g_61,&p_439->g_61};
    int32_t l_221 = 0x5B38FF28L;
    uint8_t l_222[9][6] = {{7UL,0x4CL,0x9BL,0xCCL,0x9BL,0x4CL},{7UL,0x4CL,0x9BL,0xCCL,0x9BL,0x4CL},{7UL,0x4CL,0x9BL,0xCCL,0x9BL,0x4CL},{7UL,0x4CL,0x9BL,0xCCL,0x9BL,0x4CL},{7UL,0x4CL,0x9BL,0xCCL,0x9BL,0x4CL},{7UL,0x4CL,0x9BL,0xCCL,0x9BL,0x4CL},{7UL,0x4CL,0x9BL,0xCCL,0x9BL,0x4CL},{7UL,0x4CL,0x9BL,0xCCL,0x9BL,0x4CL},{7UL,0x4CL,0x9BL,0xCCL,0x9BL,0x4CL}};
    int16_t *l_308 = (void*)0;
    int32_t *l_321[10][3][8] = {{{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0}},{{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0}},{{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0}},{{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0}},{{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0}},{{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0}},{{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0}},{{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0}},{{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0}},{{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0},{&p_439->g_125,(void*)0,&p_439->g_125,&l_221,&l_221,&p_439->g_236.f1,&p_439->g_125,(void*)0}}};
    int i, j, k;
    for (p_439->g_184 = (-13); (p_439->g_184 == 44); ++p_439->g_184)
    { /* block id: 47 */
        int8_t l_201 = 6L;
        int32_t l_202 = (-3L);
        VECTOR(uint8_t, 4) l_205 = (VECTOR(uint8_t, 4))(0x12L, (VECTOR(uint8_t, 2))(0x12L, 0xCEL), 0xCEL);
        uint32_t l_209 = 0xF69CA4C6L;
        int16_t **l_210 = (void*)0;
        int16_t *l_212 = &p_439->g_193[5];
        int16_t **l_211 = &l_212;
        uint16_t l_214 = 1UL;
        int32_t *l_215[7];
        int i;
        for (i = 0; i < 7; i++)
            l_215[i] = (void*)0;
        for (p_439->g_133.f0 = 0; (p_439->g_133.f0 != (-15)); p_439->g_133.f0--)
        { /* block id: 50 */
            int32_t *l_198[10][2][5] = {{{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0},{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0}},{{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0},{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0}},{{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0},{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0}},{{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0},{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0}},{{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0},{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0}},{{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0},{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0}},{{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0},{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0}},{{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0},{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0}},{{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0},{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0}},{{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0},{&p_439->g_61,(void*)0,&p_439->g_61,&p_439->g_61,(void*)0}}};
            int i, j, k;
            p_439->g_61 &= p_35;
            l_202 = (((safe_add_func_uint32_t_u_u(p_34, 4UL)) == (p_439->g_133.f2 , l_201)) == ((p_35 == (!p_439->g_187[9])) > p_34));
        }
        l_216[1] = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0x16FDL, ((safe_lshift_func_int16_t_s_s((((*l_211) = func_52(p_439->g_162.s1, ((!(248UL == ((VECTOR(uint8_t, 8))(l_205.xwyzxxyz)).s2)) , &p_439->g_61), ((*p_36) = (p_35 , (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 8))(l_208.xyxzzzzy)).s6102654651640434))).sa, (l_209 = 0x0A4BL))))), p_439->g_153, p_439)) == l_213), 14)) || p_35), (-2L), 0x7A08L, 0x4EB1L, 0x4841L, 0x2B66L, 1L, 0x40D3L, ((VECTOR(int16_t, 2))(0x6550L)), ((VECTOR(int16_t, 2))(0x04C2L)), 0x4E27L, 0x6998L, 0x60BFL)).even)).s6025336631314257, ((VECTOR(int16_t, 16))(0x778AL))))).sa5)).yxyyyyxy, ((VECTOR(uint16_t, 8))(1UL))))), l_214, 0L, ((VECTOR(int32_t, 2))((-1L))), p_439->g_125, 9L, 0x1526F599L, 0x3A29A52EL)))).s5f91)).z;
    }
    l_222[5][2]--;
    if ((((GROUP_DIVERGE(1, 1) > p_439->g_133.f2.f3) <= (p_34 , (safe_add_func_int16_t_s_s((safe_add_func_uint64_t_u_u((p_439->g_40.z <= ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_439->g_229.yxxx)))).x), p_439->g_184)), 65532UL)))) < (safe_sub_func_uint64_t_u_u(p_34, p_439->g_187[5]))))
    { /* block id: 60 */
        int32_t **l_233 = &p_439->g_72;
        VECTOR(int8_t, 8) l_241 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
        int16_t *l_246 = &p_439->g_193[7];
        uint32_t *l_250[1];
        int16_t **l_254[6] = {&l_213,&l_213,&l_213,&l_213,&l_213,&l_213};
        uint8_t l_283[7];
        int32_t l_288 = (-1L);
        int32_t l_291 = 0x1FFB4F04L;
        int32_t l_297[1];
        int i;
        for (i = 0; i < 1; i++)
            l_250[i] = &p_439->g_153;
        for (i = 0; i < 7; i++)
            l_283[i] = 0x16L;
        for (i = 0; i < 1; i++)
            l_297[i] = 0x3E8D4C09L;
        (*l_233) = &p_439->g_61;
        for (p_439->g_125 = 5; (p_439->g_125 > (-15)); p_439->g_125 = safe_sub_func_int32_t_s_s(p_439->g_125, 9))
        { /* block id: 64 */
            struct S2 *l_237[10] = {&p_439->g_236,&p_439->g_236,&p_439->g_236,&p_439->g_236,&p_439->g_236,&p_439->g_236,&p_439->g_236,&p_439->g_236,&p_439->g_236,&p_439->g_236};
            uint64_t l_238 = 0xB87F2F1D17CBE859L;
            int16_t **l_247 = (void*)0;
            int16_t **l_248 = &l_246;
            int32_t **l_249[2];
            uint32_t **l_251 = (void*)0;
            uint32_t **l_252 = &l_250[0];
            int32_t *l_253 = &l_221;
            VECTOR(uint32_t, 8) l_274 = (VECTOR(uint32_t, 8))(0x0973C63EL, (VECTOR(uint32_t, 4))(0x0973C63EL, (VECTOR(uint32_t, 2))(0x0973C63EL, 0x7B47BBFCL), 0x7B47BBFCL), 0x7B47BBFCL, 0x0973C63EL, 0x7B47BBFCL);
            int i;
            for (i = 0; i < 2; i++)
                l_249[i] = &l_218;
            if ((*p_439->g_72))
                break;
            p_439->g_236 = p_439->g_236;
            l_238++;
            if ((((VECTOR(int8_t, 8))(l_241.s01275000)).s0 == (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((((*l_248) = l_246) != &p_35), ((((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(3L, 0x5E6C3C61L, ((*l_253) &= ((&p_439->g_72 == l_249[1]) != ((p_34 , (void*)0) != ((*l_252) = l_250[0])))), (-1L), 1L, (&p_36 != l_254[1]), 0x760B1892L, 0x50107AFFL)).s4131010015642626, ((VECTOR(int32_t, 16))(0x31279222L)), ((VECTOR(int32_t, 16))(0L))))).s1e, ((VECTOR(int32_t, 2))(0x4D3D3DFEL)), ((VECTOR(int32_t, 2))(0x709425E2L))))).odd , (**l_233)) <= p_439->g_133.f2.f6))), 6))))
            { /* block id: 71 */
                int32_t l_273 = 0x0C09D12EL;
                int32_t l_286 = 0x1E28F916L;
                int32_t l_287 = 0x4A3F60B6L;
                int32_t l_289 = (-10L);
                int32_t l_290 = 0x6F67C42CL;
                int32_t l_292 = 0x2DEA55A6L;
                int32_t l_293 = (-6L);
                int32_t l_294 = 0x4E5D51ADL;
                int32_t l_295 = 0x175C95F3L;
                int32_t l_296[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_296[i] = 0x5C54A5D2L;
                for (p_439->g_236.f0 = (-16); (p_439->g_236.f0 > 28); p_439->g_236.f0 = safe_add_func_uint8_t_u_u(p_439->g_236.f0, 8))
                { /* block id: 74 */
                    if ((atomic_inc(&p_439->g_atomic_input[54 * get_linear_group_id() + 17]) == 6))
                    { /* block id: 76 */
                        int16_t l_257 = 6L;
                        int32_t l_258 = 0x17816C64L;
                        int8_t l_259[9];
                        uint32_t l_260[6];
                        VECTOR(int8_t, 8) l_261 = (VECTOR(int8_t, 8))(0x02L, (VECTOR(int8_t, 4))(0x02L, (VECTOR(int8_t, 2))(0x02L, 1L), 1L), 1L, 0x02L, 1L);
                        int8_t l_262[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                        int16_t l_263 = 0x270AL;
                        VECTOR(uint8_t, 2) l_264 = (VECTOR(uint8_t, 2))(0xBFL, 0x5FL);
                        int i;
                        for (i = 0; i < 9; i++)
                            l_259[i] = 8L;
                        for (i = 0; i < 6; i++)
                            l_260[i] = 4294967286UL;
                        l_257 = 1L;
                        l_258 = (l_260[5] = (l_258 , l_259[2]));
                        l_258 ^= (l_262[4] &= (((VECTOR(int8_t, 2))(l_261.s24)).hi , (-1L)));
                        l_264.y--;
                        unsigned int result = 0;
                        result += l_257;
                        result += l_258;
                        int l_259_i0;
                        for (l_259_i0 = 0; l_259_i0 < 9; l_259_i0++) {
                            result += l_259[l_259_i0];
                        }
                        int l_260_i0;
                        for (l_260_i0 = 0; l_260_i0 < 6; l_260_i0++) {
                            result += l_260[l_260_i0];
                        }
                        result += l_261.s7;
                        result += l_261.s6;
                        result += l_261.s5;
                        result += l_261.s4;
                        result += l_261.s3;
                        result += l_261.s2;
                        result += l_261.s1;
                        result += l_261.s0;
                        int l_262_i0;
                        for (l_262_i0 = 0; l_262_i0 < 9; l_262_i0++) {
                            result += l_262[l_262_i0];
                        }
                        result += l_263;
                        result += l_264.y;
                        result += l_264.x;
                        atomic_add(&p_439->g_special_values[54 * get_linear_group_id() + 17], result);
                    }
                    else
                    { /* block id: 83 */
                        (1 + 1);
                    }
                }
                for (p_439->g_182 = (-2); (p_439->g_182 == 11); p_439->g_182++)
                { /* block id: 89 */
                    int32_t *l_279 = &p_439->g_236.f1;
                    uint64_t *l_284 = &p_439->g_184;
                    int32_t l_285 = 0x24E99E25L;
                    for (p_439->g_61 = (-5); (p_439->g_61 > (-29)); p_439->g_61--)
                    { /* block id: 92 */
                        int32_t *l_280 = &p_439->g_61;
                        l_285 &= (((VECTOR(int32_t, 2))(1L, 1L)).hi > ((safe_mod_func_uint32_t_u_u(l_273, ((VECTOR(uint32_t, 4))(l_274.s0355)).y)) || (p_439->g_275 , (p_439->g_276 , (safe_lshift_func_int8_t_s_u((((l_279 == (((void*)0 != l_280) , l_280)) == (((**l_233) ^ (((((safe_div_func_int64_t_s_s((l_283[5] && (**l_233)), FAKE_DIVERGE(p_439->group_1_offset, get_group_id(1), 10))) > p_35) && 9L) , l_284) == &p_439->g_182)) < 0x2178FB9EL)) , (-9L)), GROUP_DIVERGE(0, 1)))))));
                    }
                    return l_273;
                }
                p_439->g_298--;
                (*p_439->g_72) |= 8L;
            }
            else
            { /* block id: 99 */
                uint32_t *l_302 = (void*)0;
                uint32_t **l_301 = &l_302;
                int16_t *l_307 = (void*)0;
                int32_t l_323 = 6L;
                int8_t *l_324 = &p_439->g_151;
                (*l_219) ^= (((*p_36) = (((((*l_301) = &p_439->g_95) != (void*)0) > ((*l_324) = (+(FAKE_DIVERGE(p_439->local_0_offset, get_local_id(0), 10) > (safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s((((*l_248) = &p_439->g_193[4]) == (l_308 = l_307)), (p_439->g_236.f2.f2 , (safe_rshift_func_uint8_t_u_s(0x05L, 4))))), (((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((*p_36), (((**l_233) , (l_323 = ((~((((p_439->g_322 = l_321[1][2][1]) == (void*)0) , p_439->g_236.f0) , 4294967295UL)) != 0x6979E7A4L))) , l_323))), FAKE_DIVERGE(p_439->local_2_offset, get_local_id(2), 10))) , p_35) ^ (-1L)), 0)) == p_439->g_184) , p_439->g_275.f0), p_35)), p_34)) < 0x79B283DA6919E9BAL) == p_439->g_61))))))) , (**l_233))) == p_439->g_276.f1);
            }
        }
        (*p_439->g_325) = ((*l_233) = &l_216[5]);
    }
    else
    { /* block id: 112 */
        uint32_t l_342 = 4294967294UL;
        for (p_439->g_236.f2.f0 = (-15); (p_439->g_236.f2.f0 > 26); p_439->g_236.f2.f0 = safe_add_func_uint64_t_u_u(p_439->g_236.f2.f0, 2))
        { /* block id: 115 */
            int32_t *l_331 = &l_216[2];
            for (p_439->g_95 = 0; (p_439->g_95 <= 11); p_439->g_95 = safe_add_func_uint16_t_u_u(p_439->g_95, 4))
            { /* block id: 118 */
                int32_t *l_332[6][10][4] = {{{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0}},{{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0}},{{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0}},{{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0}},{{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0}},{{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0},{&p_439->g_61,&p_439->g_61,(void*)0,(void*)0}}};
                int i, j, k;
                l_332[3][2][2] = l_331;
                for (p_35 = 0; (p_35 <= (-10)); p_35 = safe_sub_func_uint32_t_u_u(p_35, 9))
                { /* block id: 122 */
                    return p_439->g_236.f2.f3;
                }
            }
        }
        l_342 = (safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_35, (p_439->g_276 , p_35))), 0x26L)), ((VECTOR(int8_t, 8))(p_439->g_341.s1f6353ce)).s2));
    }
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_439->g_159 p_439->g_162 p_439->g_125 p_439->g_133.f2.f1 p_439->g_151 p_439->g_61 p_439->g_40 p_439->g_187 p_439->g_133.f0 p_439->g_153 p_439->g_188
 * writes: p_439->g_159 p_439->g_182 p_439->g_184 p_439->g_187 p_439->g_61 p_439->g_188
 */
uint8_t  func_41(int16_t  p_42, uint8_t  p_43, uint32_t  p_44, struct S3 * p_439)
{ /* block id: 35 */
    int32_t **l_156 = (void*)0;
    int32_t *l_157 = (void*)0;
    int32_t *l_158[9] = {&p_439->g_61,&p_439->g_61,&p_439->g_61,&p_439->g_61,&p_439->g_61,&p_439->g_61,&p_439->g_61,&p_439->g_61,&p_439->g_61};
    VECTOR(int32_t, 4) l_163 = (VECTOR(int32_t, 4))(0x1590D368L, (VECTOR(int32_t, 2))(0x1590D368L, (-7L)), (-7L));
    VECTOR(int16_t, 8) l_164 = (VECTOR(int16_t, 8))(0x1E50L, (VECTOR(int16_t, 4))(0x1E50L, (VECTOR(int16_t, 2))(0x1E50L, 0L), 0L), 0L, 0x1E50L, 0L);
    uint64_t *l_183 = &p_439->g_184;
    int8_t *l_185 = (void*)0;
    int8_t *l_186 = &p_439->g_187[9];
    int i;
    l_157 = (void*)0;
    p_439->g_159--;
    p_439->g_61 = ((VECTOR(int32_t, 16))((0x9E99L <= p_44), ((VECTOR(int32_t, 2))(0x61ECBF7EL, 0x50FF4D6FL)), (-5L), ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 7L)).yxxyyxyx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(p_439->g_162.s7126351651601614)).sf0c0, ((VECTOR(int32_t, 16))(0x056FB5C4L, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_163.xxyyyxzzxwxxyxyz)).s1533, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(0x4ECCB6E1L, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(3L, 0L)).yxyyxxyx))).s05)).xyyy, ((VECTOR(int16_t, 4))(l_164.s2016))))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0xFF27L, 0UL)))), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))((safe_add_func_uint8_t_u_u(255UL, (safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_s(((*l_186) |= (safe_div_func_uint64_t_u_u(((*l_183) = (safe_add_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(p_439->g_125, ((((((p_439->g_182 = (p_44 <= ((((l_158[1] != &p_439->g_61) , p_43) < p_44) != 0x62L))) , FAKE_DIVERGE(p_439->global_1_offset, get_global_id(1), 10)) | 0L) == p_439->g_133.f2.f1) ^ 0L) || 0x074EB9CEF92868C9L))), p_43)), 6)) | p_439->g_151) | p_439->g_61), p_439->g_40.z))), 0x1CA1E3233A39EEE2L))), p_44)))))), FAKE_DIVERGE(p_439->local_0_offset, get_local_id(0), 10), 0xD6F5L, 65528UL, p_42, p_439->g_133.f0, ((VECTOR(uint16_t, 4))(0x9BC6L)), 0x826DL, p_439->g_187[5], 65533UL, ((VECTOR(uint16_t, 2))(2UL)), 0x9E47L)))).se5, ((VECTOR(uint16_t, 2))(9UL))))), 0xB098L, 65535UL))))), ((VECTOR(int32_t, 4))(0x4ECDF4C6L))))), p_44, (-2L), 1L)).s73, ((VECTOR(int32_t, 2))(0x3D5D16FAL)), ((VECTOR(int32_t, 2))(0L))))), 8L, 2L))))))).xwxxxzzx, ((VECTOR(int32_t, 8))(3L))))).even, ((VECTOR(int32_t, 4))(0x464BD908L))))), ((VECTOR(int32_t, 2))(0x643A7AF2L)), p_439->g_133.f0, ((VECTOR(int32_t, 8))(1L)))).sf238))).even)), 6L, 0L, ((VECTOR(int32_t, 4))(0x6CE4B447L)))).sf4b4, ((VECTOR(int32_t, 4))(0x15BE1782L))))), 0L, 0x4256981CL, p_439->g_153, 0x6E11B995L, (-10L), ((VECTOR(int32_t, 2))((-1L))), (-1L))).s5;
    --p_439->g_188;
    return p_439->g_40.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_439->g_61 p_439->g_40 p_439->g_110 p_439->g_118 p_439->l_comm_values p_439->g_comm_values p_439->g_125 p_439->g_133 p_439->g_151 p_439->g_153
 * writes: p_439->g_72 p_439->g_95 p_439->g_125 p_439->l_comm_values p_439->g_151 p_439->g_153 p_439->g_154 p_439->g_61
 */
int32_t  func_47(int16_t * p_48, int32_t  p_49, int64_t  p_50, int64_t  p_51, struct S3 * p_439)
{ /* block id: 14 */
    int32_t *l_60[5];
    uint32_t l_62 = 0UL;
    int32_t **l_65 = &l_60[4];
    int32_t **l_70 = (void*)0;
    int32_t **l_71[5][2][10] = {{{&l_60[4],&l_60[4],(void*)0,&l_60[4],&l_60[1],&l_60[4],(void*)0,(void*)0,&l_60[4],(void*)0},{&l_60[4],&l_60[4],(void*)0,&l_60[4],&l_60[1],&l_60[4],(void*)0,(void*)0,&l_60[4],(void*)0}},{{&l_60[4],&l_60[4],(void*)0,&l_60[4],&l_60[1],&l_60[4],(void*)0,(void*)0,&l_60[4],(void*)0},{&l_60[4],&l_60[4],(void*)0,&l_60[4],&l_60[1],&l_60[4],(void*)0,(void*)0,&l_60[4],(void*)0}},{{&l_60[4],&l_60[4],(void*)0,&l_60[4],&l_60[1],&l_60[4],(void*)0,(void*)0,&l_60[4],(void*)0},{&l_60[4],&l_60[4],(void*)0,&l_60[4],&l_60[1],&l_60[4],(void*)0,(void*)0,&l_60[4],(void*)0}},{{&l_60[4],&l_60[4],(void*)0,&l_60[4],&l_60[1],&l_60[4],(void*)0,(void*)0,&l_60[4],(void*)0},{&l_60[4],&l_60[4],(void*)0,&l_60[4],&l_60[1],&l_60[4],(void*)0,(void*)0,&l_60[4],(void*)0}},{{&l_60[4],&l_60[4],(void*)0,&l_60[4],&l_60[1],&l_60[4],(void*)0,(void*)0,&l_60[4],(void*)0},{&l_60[4],&l_60[4],(void*)0,&l_60[4],&l_60[1],&l_60[4],(void*)0,(void*)0,&l_60[4],(void*)0}}};
    uint32_t *l_73 = &l_62;
    VECTOR(uint16_t, 4) l_85 = (VECTOR(uint16_t, 4))(0x767AL, (VECTOR(uint16_t, 2))(0x767AL, 65535UL), 65535UL);
    VECTOR(uint16_t, 16) l_86 = (VECTOR(uint16_t, 16))(0x4F79L, (VECTOR(uint16_t, 4))(0x4F79L, (VECTOR(uint16_t, 2))(0x4F79L, 0xD326L), 0xD326L), 0xD326L, 0x4F79L, 0xD326L, (VECTOR(uint16_t, 2))(0x4F79L, 0xD326L), (VECTOR(uint16_t, 2))(0x4F79L, 0xD326L), 0x4F79L, 0xD326L, 0x4F79L, 0xD326L);
    VECTOR(uint16_t, 2) l_87 = (VECTOR(uint16_t, 2))(7UL, 6UL);
    int64_t l_111 = 0L;
    uint32_t l_120 = 0x53E6A3F3L;
    uint32_t l_122[1];
    int64_t l_124 = 0x53EDD010A2F6955CL;
    int8_t l_152 = 0x64L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_60[i] = &p_439->g_61;
    for (i = 0; i < 1; i++)
        l_122[i] = 9UL;
    l_62++;
    l_65 = (void*)0;
    if ((((*l_73) = (safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_439->global_1_offset, get_global_id(1), 10), (((p_50 || ((p_439->g_72 = (void*)0) == (void*)0)) , 1L) || p_439->g_61))) ^ FAKE_DIVERGE(p_439->local_0_offset, get_local_id(0), 10)), 0))) >= 4294967295UL))
    { /* block id: 19 */
        VECTOR(uint16_t, 16) l_84 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL), 65535UL, 65535UL, 65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL, 65535UL, 65535UL, 65535UL);
        VECTOR(int8_t, 16) l_92 = (VECTOR(int8_t, 16))(0x0FL, (VECTOR(int8_t, 4))(0x0FL, (VECTOR(int8_t, 2))(0x0FL, 0x6DL), 0x6DL), 0x6DL, 0x0FL, 0x6DL, (VECTOR(int8_t, 2))(0x0FL, 0x6DL), (VECTOR(int8_t, 2))(0x0FL, 0x6DL), 0x0FL, 0x6DL, 0x0FL, 0x6DL);
        int32_t l_93 = 0x1440D3F7L;
        int8_t *l_94 = (void*)0;
        int8_t *l_96 = (void*)0;
        int8_t *l_97 = (void*)0;
        int8_t *l_98 = (void*)0;
        int8_t *l_99[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_100 = (-6L);
        uint32_t l_103 = 0x404EFFBFL;
        int32_t **l_121 = &p_439->g_72;
        int32_t **l_123 = (void*)0;
        int i;
        p_439->g_125 ^= (((p_439->g_61 && (safe_div_func_uint8_t_u_u(FAKE_DIVERGE(p_439->local_2_offset, get_local_id(2), 10), (l_124 |= (0x2E9CL | ((((safe_lshift_func_int16_t_s_s((((((VECTOR(int64_t, 8))(1L, (((safe_rshift_func_int8_t_s_s(((((((p_439->g_40.y < ((((VECTOR(uint16_t, 2))(0xDDEEL, 65535UL)).hi != ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_84.sc463)).hi)).xxxy, ((VECTOR(uint16_t, 8))(l_85.zwwzyzwx)).lo, ((VECTOR(uint16_t, 8))(0UL, ((VECTOR(uint16_t, 2))(l_86.s5e)).even, ((VECTOR(uint16_t, 4))(l_87.xyxy)), 0x4F54L, 65531UL)).hi))).z) >= ((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((-6L), ((VECTOR(int8_t, 2))(0x47L, 0x46L)), ((VECTOR(int8_t, 2))(0x26L, 0L)), ((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((l_100 = (p_439->g_95 = (l_93 = ((VECTOR(int8_t, 4))(l_92.s53b0)).z))), (safe_mod_func_uint64_t_u_u((((1UL ^ l_103) | (safe_mul_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 8))(p_439->g_110.s03266311)), (int8_t)((l_111 < p_50) < (4294967289UL || ((safe_rshift_func_int8_t_s_u(((safe_div_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((void*)0 != p_439->g_118[0][4][0]), p_50)), 18446744073709551615UL)) ^ p_50), l_92.s7)) < 65531UL))), (int8_t)l_120))).s1342575047733040))).s3, p_439->l_comm_values[(safe_mod_func_uint32_t_u_u(p_439->tid, 82))])) || p_439->g_40.y), 0x29L)) | FAKE_DIVERGE(p_439->global_2_offset, get_global_id(2), 10)) < l_103), FAKE_DIVERGE(p_439->local_0_offset, get_local_id(0), 10)))) | l_84.s6), p_439->g_40.w)))), p_439->g_40.x)) && p_50), (-8L), (-5L))).s6040756051170217)), ((VECTOR(int8_t, 16))(0x77L))))).s2)) , l_121) == &p_439->g_72) == p_439->g_40.x) | l_122[0]) <= 255UL), p_50)) == GROUP_DIVERGE(0, 1)) | p_439->g_40.z), 1L, p_50, ((VECTOR(int64_t, 4))((-1L))))).s5 ^ 0L) , l_123) != &p_439->g_72), 14)) , p_439->g_40.y) > p_439->g_40.z) < p_439->l_comm_values[(safe_mod_func_uint32_t_u_u(p_439->tid, 82))])))))) <= p_50) != p_439->g_comm_values[p_439->tid]);
    }
    else
    { /* block id: 25 */
        int16_t l_128 = (-6L);
        VECTOR(int16_t, 8) l_144 = (VECTOR(int16_t, 8))(0x6D7AL, (VECTOR(int16_t, 4))(0x6D7AL, (VECTOR(int16_t, 2))(0x6D7AL, 0x5FA4L), 0x5FA4L), 0x5FA4L, 0x6D7AL, 0x5FA4L);
        int32_t l_145 = (-3L);
        int64_t *l_150[8] = {&l_111,&l_111,&l_111,&l_111,&l_111,&l_111,&l_111,&l_111};
        int i;
        p_439->g_61 &= (safe_mul_func_int8_t_s_s(p_439->g_40.w, (l_128 != (~(safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((p_439->g_154 = ((p_439->g_133 , FAKE_DIVERGE(p_439->group_2_offset, get_group_id(2), 10)) || (p_439->g_153 &= (p_439->g_133.f2.f5 || (safe_div_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u((p_49 || (safe_mul_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(((p_49 != (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_144.s64)).xyyxxyyyxxxyyyxx)).s6 >= (l_145 = l_128))) ^ ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(0UL, 0xF46DL)).hi, ((-8L) == (((safe_add_func_int64_t_s_s((p_439->g_151 = (p_439->l_comm_values[(safe_mod_func_uint32_t_u_u(p_439->tid, 82))] = ((p_49 != p_49) , 0x76D8C3317FEB4686L))), 0UL)) , l_144.s5) & p_439->g_40.w)))), (-6L), p_50, 4L, p_50, ((VECTOR(int8_t, 4))(0L)), 0x19L, 0L, l_144.s4, 1L, ((VECTOR(int8_t, 2))(0x2AL)), (-9L))).even, ((VECTOR(int8_t, 8))(0L))))).s4166177665321531, ((VECTOR(int8_t, 16))(0L))))).sf656, ((VECTOR(int8_t, 4))(0L))))))))).yywzxzzw))).odd, ((VECTOR(int8_t, 4))(0x59L))))), ((VECTOR(int8_t, 4))(0x5DL))))).w), 0)), (-9L))) && p_439->g_151), 0x4E88L))), l_152)) <= p_439->g_133.f2.f0) == 1UL), l_144.s2)))))), p_439->g_40.y)), 1UL))))));
    }
    return p_51;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t * func_52(uint64_t  p_53, int32_t * p_54, int16_t  p_55, int32_t  p_56, struct S3 * p_439)
{ /* block id: 12 */
    int16_t *l_59 = (void*)0;
    return l_59;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[54];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 54; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[54];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 54; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[82];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 82; i++)
            l_comm_values[i] = 1;
    struct S3 c_440;
    struct S3* p_439 = &c_440;
    struct S3 c_441 = {
        0x39C2L, // p_439->g_15
        (VECTOR(uint32_t, 4))(0x6F4846E1L, (VECTOR(uint32_t, 2))(0x6F4846E1L, 1UL), 1UL), // p_439->g_40
        0x7DCAE364L, // p_439->g_61
        &p_439->g_61, // p_439->g_72
        0x125C8CE6L, // p_439->g_95
        (VECTOR(int8_t, 8))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x41L), 0x41L), 0x41L, (-3L), 0x41L), // p_439->g_110
        (-1L), // p_439->g_119
        {{{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119}},{{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119}},{{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119}},{{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119}},{{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119}},{{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119},{&p_439->g_119}}}, // p_439->g_118
        0x1E669498L, // p_439->g_125
        {0L,0x55570B09ED61E283L,{-3L,2L,1UL,0x45E172707FB85FA9L,0L,0x53E7E88078DF31DCL,0x0424657F329DDE60L},0x98F6BB93CCABF06CL}, // p_439->g_133
        1L, // p_439->g_151
        1UL, // p_439->g_153
        (-4L), // p_439->g_154
        0xFA39L, // p_439->g_159
        (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 1L), 1L), 1L, 5L, 1L), // p_439->g_162
        0x768CD56C25D7B920L, // p_439->g_182
        0xB2D896DF7017AF08L, // p_439->g_184
        {0x04L,0x04L,0x04L,0x04L,0x04L,0x04L,0x04L,0x04L,0x04L,0x04L}, // p_439->g_187
        8UL, // p_439->g_188
        {0x25EFL,0x25EFL,0x25EFL,0x25EFL,0x25EFL,0x25EFL,0x25EFL,0x25EFL,0x25EFL}, // p_439->g_193
        (VECTOR(uint8_t, 2))(0xC6L, 0xACL), // p_439->g_229
        {&p_439->g_72,&p_439->g_72,&p_439->g_72,&p_439->g_72,&p_439->g_72,&p_439->g_72,&p_439->g_72,&p_439->g_72,&p_439->g_72,&p_439->g_72}, // p_439->g_232
        {0x19L,0x5B5B27B6L,{0x687006EAL,0x178CA02759C4D771L,{0x50L,1L,4294967287UL,0x1792E09EF83DF6CBL,-10L,0x405694DDA16972C5L,1L},0x4DD62C0C1F5A1C23L}}, // p_439->g_236
        {0x4CE6EBF3L,1L,{0x76L,0L,0x7DE8538CL,-5L,0L,-9L,0x4290874800EBDDEAL},0x0532F453972F012CL}, // p_439->g_275
        {0x1BL,0x32AECA1DL,{-10L,4L,{7L,1L,4294967295UL,0x686E4F013D18E2FBL,0x5118L,0x68F93DBE3D278928L,1L},0x4BB2AAA4A64453E6L}}, // p_439->g_276
        0xE31191B3L, // p_439->g_298
        &p_439->g_236.f1, // p_439->g_322
        &p_439->g_61, // p_439->g_326
        &p_439->g_326, // p_439->g_325
        (VECTOR(int8_t, 16))(0x77L, (VECTOR(int8_t, 4))(0x77L, (VECTOR(int8_t, 2))(0x77L, 0x7BL), 0x7BL), 0x7BL, 0x77L, 0x7BL, (VECTOR(int8_t, 2))(0x77L, 0x7BL), (VECTOR(int8_t, 2))(0x77L, 0x7BL), 0x77L, 0x7BL, 0x77L, 0x7BL), // p_439->g_341
        0x85L, // p_439->g_344
        9UL, // p_439->g_352
        (void*)0, // p_439->g_355
        (void*)0, // p_439->g_362
        &p_439->g_61, // p_439->g_363
        {{{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}},{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}},{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}},{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}},{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}},{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}},{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}},{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}}},{{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}},{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}},{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}},{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}},{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}},{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}},{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}},{{0L,0x59883886L,{9L,0L,{0x6CL,0L,1UL,3L,1L,0x763D20D3F6026F67L,0x732DC3F6B30E7C98L},1UL}},{0x21L,0L,{0L,8L,{-5L,0x7C7A2B2AL,0x2066F9AEL,0x580D712672F7EDB5L,3L,-2L,0L},0UL}}}}}, // p_439->g_364
        {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}}, // p_439->g_369
        {0L,0x5CD3ABDFL,{1L,-9L,{0x07L,0x426F647DL,0x300EE48AL,6L,0x4A5AL,-1L,-1L},0xBBA4CB45986C8885L}}, // p_439->g_370
        {-8L,0x4773D663L,{0x608A6CA8L,0L,{0x52L,0x250F0BB9L,0x5BB5120BL,-1L,3L,0x5C478AC81F1EE984L,-1L},0x8163D10FB34797DDL}}, // p_439->g_371
        {1L,0x03C76696L,0x5335D4D9L,0x3653DF2D228F0CC3L,-3L,0x5D5F45DA57D213EAL,-1L}, // p_439->g_374
        (VECTOR(int32_t, 2))(0x0FC95E85L, 0x21F4D014L), // p_439->g_378
        (VECTOR(int16_t, 8))(0x1D5DL, (VECTOR(int16_t, 4))(0x1D5DL, (VECTOR(int16_t, 2))(0x1D5DL, 0x382AL), 0x382AL), 0x382AL, 0x1D5DL, 0x382AL), // p_439->g_380
        (VECTOR(int32_t, 16))(0x0347B399L, (VECTOR(int32_t, 4))(0x0347B399L, (VECTOR(int32_t, 2))(0x0347B399L, (-7L)), (-7L)), (-7L), 0x0347B399L, (-7L), (VECTOR(int32_t, 2))(0x0347B399L, (-7L)), (VECTOR(int32_t, 2))(0x0347B399L, (-7L)), 0x0347B399L, (-7L), 0x0347B399L, (-7L)), // p_439->g_381
        {6L,0x7532C777L,0xFBB92C0CL,0x742C88820BE524BBL,0x7EEAL,0x4D31ADC18C2686D8L,0x0A262A2626DDBD07L}, // p_439->g_406
        &p_439->g_406, // p_439->g_408
        &p_439->g_408, // p_439->g_407
        7L, // p_439->g_433
        {(void*)0,&p_439->g_61,(void*)0,(void*)0,&p_439->g_61,(void*)0}, // p_439->g_436
        {0x50L,1L,0x1B4BBC41L,-5L,0x4FEEL,0x058D4E66CE7D2F1EL,0x46DDC2CBB4904646L}, // p_439->g_437
        0, // p_439->v_collective
        sequence_input[get_global_id(0)], // p_439->global_0_offset
        sequence_input[get_global_id(1)], // p_439->global_1_offset
        sequence_input[get_global_id(2)], // p_439->global_2_offset
        sequence_input[get_local_id(0)], // p_439->local_0_offset
        sequence_input[get_local_id(1)], // p_439->local_1_offset
        sequence_input[get_local_id(2)], // p_439->local_2_offset
        sequence_input[get_group_id(0)], // p_439->group_0_offset
        sequence_input[get_group_id(1)], // p_439->group_1_offset
        sequence_input[get_group_id(2)], // p_439->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 82)), permutations[0][get_linear_local_id()])), // p_439->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_440 = c_441;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_439);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_439->g_15, "p_439->g_15", print_hash_value);
    transparent_crc(p_439->g_40.x, "p_439->g_40.x", print_hash_value);
    transparent_crc(p_439->g_40.y, "p_439->g_40.y", print_hash_value);
    transparent_crc(p_439->g_40.z, "p_439->g_40.z", print_hash_value);
    transparent_crc(p_439->g_40.w, "p_439->g_40.w", print_hash_value);
    transparent_crc(p_439->g_61, "p_439->g_61", print_hash_value);
    transparent_crc(p_439->g_95, "p_439->g_95", print_hash_value);
    transparent_crc(p_439->g_110.s0, "p_439->g_110.s0", print_hash_value);
    transparent_crc(p_439->g_110.s1, "p_439->g_110.s1", print_hash_value);
    transparent_crc(p_439->g_110.s2, "p_439->g_110.s2", print_hash_value);
    transparent_crc(p_439->g_110.s3, "p_439->g_110.s3", print_hash_value);
    transparent_crc(p_439->g_110.s4, "p_439->g_110.s4", print_hash_value);
    transparent_crc(p_439->g_110.s5, "p_439->g_110.s5", print_hash_value);
    transparent_crc(p_439->g_110.s6, "p_439->g_110.s6", print_hash_value);
    transparent_crc(p_439->g_110.s7, "p_439->g_110.s7", print_hash_value);
    transparent_crc(p_439->g_119, "p_439->g_119", print_hash_value);
    transparent_crc(p_439->g_125, "p_439->g_125", print_hash_value);
    transparent_crc(p_439->g_133.f0, "p_439->g_133.f0", print_hash_value);
    transparent_crc(p_439->g_133.f1, "p_439->g_133.f1", print_hash_value);
    transparent_crc(p_439->g_133.f2.f0, "p_439->g_133.f2.f0", print_hash_value);
    transparent_crc(p_439->g_133.f2.f1, "p_439->g_133.f2.f1", print_hash_value);
    transparent_crc(p_439->g_133.f2.f2, "p_439->g_133.f2.f2", print_hash_value);
    transparent_crc(p_439->g_133.f2.f3, "p_439->g_133.f2.f3", print_hash_value);
    transparent_crc(p_439->g_133.f2.f4, "p_439->g_133.f2.f4", print_hash_value);
    transparent_crc(p_439->g_133.f2.f5, "p_439->g_133.f2.f5", print_hash_value);
    transparent_crc(p_439->g_133.f2.f6, "p_439->g_133.f2.f6", print_hash_value);
    transparent_crc(p_439->g_133.f3, "p_439->g_133.f3", print_hash_value);
    transparent_crc(p_439->g_151, "p_439->g_151", print_hash_value);
    transparent_crc(p_439->g_153, "p_439->g_153", print_hash_value);
    transparent_crc(p_439->g_154, "p_439->g_154", print_hash_value);
    transparent_crc(p_439->g_159, "p_439->g_159", print_hash_value);
    transparent_crc(p_439->g_162.s0, "p_439->g_162.s0", print_hash_value);
    transparent_crc(p_439->g_162.s1, "p_439->g_162.s1", print_hash_value);
    transparent_crc(p_439->g_162.s2, "p_439->g_162.s2", print_hash_value);
    transparent_crc(p_439->g_162.s3, "p_439->g_162.s3", print_hash_value);
    transparent_crc(p_439->g_162.s4, "p_439->g_162.s4", print_hash_value);
    transparent_crc(p_439->g_162.s5, "p_439->g_162.s5", print_hash_value);
    transparent_crc(p_439->g_162.s6, "p_439->g_162.s6", print_hash_value);
    transparent_crc(p_439->g_162.s7, "p_439->g_162.s7", print_hash_value);
    transparent_crc(p_439->g_182, "p_439->g_182", print_hash_value);
    transparent_crc(p_439->g_184, "p_439->g_184", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_439->g_187[i], "p_439->g_187[i]", print_hash_value);

    }
    transparent_crc(p_439->g_188, "p_439->g_188", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_439->g_193[i], "p_439->g_193[i]", print_hash_value);

    }
    transparent_crc(p_439->g_229.x, "p_439->g_229.x", print_hash_value);
    transparent_crc(p_439->g_229.y, "p_439->g_229.y", print_hash_value);
    transparent_crc(p_439->g_236.f0, "p_439->g_236.f0", print_hash_value);
    transparent_crc(p_439->g_236.f1, "p_439->g_236.f1", print_hash_value);
    transparent_crc(p_439->g_236.f2.f0, "p_439->g_236.f2.f0", print_hash_value);
    transparent_crc(p_439->g_236.f2.f1, "p_439->g_236.f2.f1", print_hash_value);
    transparent_crc(p_439->g_236.f2.f2.f0, "p_439->g_236.f2.f2.f0", print_hash_value);
    transparent_crc(p_439->g_236.f2.f2.f1, "p_439->g_236.f2.f2.f1", print_hash_value);
    transparent_crc(p_439->g_236.f2.f2.f2, "p_439->g_236.f2.f2.f2", print_hash_value);
    transparent_crc(p_439->g_236.f2.f2.f3, "p_439->g_236.f2.f2.f3", print_hash_value);
    transparent_crc(p_439->g_236.f2.f2.f4, "p_439->g_236.f2.f2.f4", print_hash_value);
    transparent_crc(p_439->g_236.f2.f2.f5, "p_439->g_236.f2.f2.f5", print_hash_value);
    transparent_crc(p_439->g_236.f2.f2.f6, "p_439->g_236.f2.f2.f6", print_hash_value);
    transparent_crc(p_439->g_236.f2.f3, "p_439->g_236.f2.f3", print_hash_value);
    transparent_crc(p_439->g_275.f0, "p_439->g_275.f0", print_hash_value);
    transparent_crc(p_439->g_275.f1, "p_439->g_275.f1", print_hash_value);
    transparent_crc(p_439->g_275.f2.f0, "p_439->g_275.f2.f0", print_hash_value);
    transparent_crc(p_439->g_275.f2.f1, "p_439->g_275.f2.f1", print_hash_value);
    transparent_crc(p_439->g_275.f2.f2, "p_439->g_275.f2.f2", print_hash_value);
    transparent_crc(p_439->g_275.f2.f3, "p_439->g_275.f2.f3", print_hash_value);
    transparent_crc(p_439->g_275.f2.f4, "p_439->g_275.f2.f4", print_hash_value);
    transparent_crc(p_439->g_275.f2.f5, "p_439->g_275.f2.f5", print_hash_value);
    transparent_crc(p_439->g_275.f2.f6, "p_439->g_275.f2.f6", print_hash_value);
    transparent_crc(p_439->g_275.f3, "p_439->g_275.f3", print_hash_value);
    transparent_crc(p_439->g_276.f0, "p_439->g_276.f0", print_hash_value);
    transparent_crc(p_439->g_276.f1, "p_439->g_276.f1", print_hash_value);
    transparent_crc(p_439->g_276.f2.f0, "p_439->g_276.f2.f0", print_hash_value);
    transparent_crc(p_439->g_276.f2.f1, "p_439->g_276.f2.f1", print_hash_value);
    transparent_crc(p_439->g_276.f2.f2.f0, "p_439->g_276.f2.f2.f0", print_hash_value);
    transparent_crc(p_439->g_276.f2.f2.f1, "p_439->g_276.f2.f2.f1", print_hash_value);
    transparent_crc(p_439->g_276.f2.f2.f2, "p_439->g_276.f2.f2.f2", print_hash_value);
    transparent_crc(p_439->g_276.f2.f2.f3, "p_439->g_276.f2.f2.f3", print_hash_value);
    transparent_crc(p_439->g_276.f2.f2.f4, "p_439->g_276.f2.f2.f4", print_hash_value);
    transparent_crc(p_439->g_276.f2.f2.f5, "p_439->g_276.f2.f2.f5", print_hash_value);
    transparent_crc(p_439->g_276.f2.f2.f6, "p_439->g_276.f2.f2.f6", print_hash_value);
    transparent_crc(p_439->g_276.f2.f3, "p_439->g_276.f2.f3", print_hash_value);
    transparent_crc(p_439->g_298, "p_439->g_298", print_hash_value);
    transparent_crc(p_439->g_341.s0, "p_439->g_341.s0", print_hash_value);
    transparent_crc(p_439->g_341.s1, "p_439->g_341.s1", print_hash_value);
    transparent_crc(p_439->g_341.s2, "p_439->g_341.s2", print_hash_value);
    transparent_crc(p_439->g_341.s3, "p_439->g_341.s3", print_hash_value);
    transparent_crc(p_439->g_341.s4, "p_439->g_341.s4", print_hash_value);
    transparent_crc(p_439->g_341.s5, "p_439->g_341.s5", print_hash_value);
    transparent_crc(p_439->g_341.s6, "p_439->g_341.s6", print_hash_value);
    transparent_crc(p_439->g_341.s7, "p_439->g_341.s7", print_hash_value);
    transparent_crc(p_439->g_341.s8, "p_439->g_341.s8", print_hash_value);
    transparent_crc(p_439->g_341.s9, "p_439->g_341.s9", print_hash_value);
    transparent_crc(p_439->g_341.sa, "p_439->g_341.sa", print_hash_value);
    transparent_crc(p_439->g_341.sb, "p_439->g_341.sb", print_hash_value);
    transparent_crc(p_439->g_341.sc, "p_439->g_341.sc", print_hash_value);
    transparent_crc(p_439->g_341.sd, "p_439->g_341.sd", print_hash_value);
    transparent_crc(p_439->g_341.se, "p_439->g_341.se", print_hash_value);
    transparent_crc(p_439->g_341.sf, "p_439->g_341.sf", print_hash_value);
    transparent_crc(p_439->g_344, "p_439->g_344", print_hash_value);
    transparent_crc(p_439->g_352, "p_439->g_352", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_439->g_364[i][j][k].f0, "p_439->g_364[i][j][k].f0", print_hash_value);
                transparent_crc(p_439->g_364[i][j][k].f1, "p_439->g_364[i][j][k].f1", print_hash_value);
                transparent_crc(p_439->g_364[i][j][k].f2.f0, "p_439->g_364[i][j][k].f2.f0", print_hash_value);
                transparent_crc(p_439->g_364[i][j][k].f2.f1, "p_439->g_364[i][j][k].f2.f1", print_hash_value);
                transparent_crc(p_439->g_364[i][j][k].f2.f2.f0, "p_439->g_364[i][j][k].f2.f2.f0", print_hash_value);
                transparent_crc(p_439->g_364[i][j][k].f2.f2.f1, "p_439->g_364[i][j][k].f2.f2.f1", print_hash_value);
                transparent_crc(p_439->g_364[i][j][k].f2.f2.f2, "p_439->g_364[i][j][k].f2.f2.f2", print_hash_value);
                transparent_crc(p_439->g_364[i][j][k].f2.f2.f3, "p_439->g_364[i][j][k].f2.f2.f3", print_hash_value);
                transparent_crc(p_439->g_364[i][j][k].f2.f2.f4, "p_439->g_364[i][j][k].f2.f2.f4", print_hash_value);
                transparent_crc(p_439->g_364[i][j][k].f2.f2.f5, "p_439->g_364[i][j][k].f2.f2.f5", print_hash_value);
                transparent_crc(p_439->g_364[i][j][k].f2.f2.f6, "p_439->g_364[i][j][k].f2.f2.f6", print_hash_value);
                transparent_crc(p_439->g_364[i][j][k].f2.f3, "p_439->g_364[i][j][k].f2.f3", print_hash_value);

            }
        }
    }
    transparent_crc(p_439->g_370.f0, "p_439->g_370.f0", print_hash_value);
    transparent_crc(p_439->g_370.f1, "p_439->g_370.f1", print_hash_value);
    transparent_crc(p_439->g_370.f2.f0, "p_439->g_370.f2.f0", print_hash_value);
    transparent_crc(p_439->g_370.f2.f1, "p_439->g_370.f2.f1", print_hash_value);
    transparent_crc(p_439->g_370.f2.f2.f0, "p_439->g_370.f2.f2.f0", print_hash_value);
    transparent_crc(p_439->g_370.f2.f2.f1, "p_439->g_370.f2.f2.f1", print_hash_value);
    transparent_crc(p_439->g_370.f2.f2.f2, "p_439->g_370.f2.f2.f2", print_hash_value);
    transparent_crc(p_439->g_370.f2.f2.f3, "p_439->g_370.f2.f2.f3", print_hash_value);
    transparent_crc(p_439->g_370.f2.f2.f4, "p_439->g_370.f2.f2.f4", print_hash_value);
    transparent_crc(p_439->g_370.f2.f2.f5, "p_439->g_370.f2.f2.f5", print_hash_value);
    transparent_crc(p_439->g_370.f2.f2.f6, "p_439->g_370.f2.f2.f6", print_hash_value);
    transparent_crc(p_439->g_370.f2.f3, "p_439->g_370.f2.f3", print_hash_value);
    transparent_crc(p_439->g_371.f0, "p_439->g_371.f0", print_hash_value);
    transparent_crc(p_439->g_371.f1, "p_439->g_371.f1", print_hash_value);
    transparent_crc(p_439->g_371.f2.f0, "p_439->g_371.f2.f0", print_hash_value);
    transparent_crc(p_439->g_371.f2.f1, "p_439->g_371.f2.f1", print_hash_value);
    transparent_crc(p_439->g_371.f2.f2.f0, "p_439->g_371.f2.f2.f0", print_hash_value);
    transparent_crc(p_439->g_371.f2.f2.f1, "p_439->g_371.f2.f2.f1", print_hash_value);
    transparent_crc(p_439->g_371.f2.f2.f2, "p_439->g_371.f2.f2.f2", print_hash_value);
    transparent_crc(p_439->g_371.f2.f2.f3, "p_439->g_371.f2.f2.f3", print_hash_value);
    transparent_crc(p_439->g_371.f2.f2.f4, "p_439->g_371.f2.f2.f4", print_hash_value);
    transparent_crc(p_439->g_371.f2.f2.f5, "p_439->g_371.f2.f2.f5", print_hash_value);
    transparent_crc(p_439->g_371.f2.f2.f6, "p_439->g_371.f2.f2.f6", print_hash_value);
    transparent_crc(p_439->g_371.f2.f3, "p_439->g_371.f2.f3", print_hash_value);
    transparent_crc(p_439->g_374.f0, "p_439->g_374.f0", print_hash_value);
    transparent_crc(p_439->g_374.f1, "p_439->g_374.f1", print_hash_value);
    transparent_crc(p_439->g_374.f2, "p_439->g_374.f2", print_hash_value);
    transparent_crc(p_439->g_374.f3, "p_439->g_374.f3", print_hash_value);
    transparent_crc(p_439->g_374.f4, "p_439->g_374.f4", print_hash_value);
    transparent_crc(p_439->g_374.f5, "p_439->g_374.f5", print_hash_value);
    transparent_crc(p_439->g_374.f6, "p_439->g_374.f6", print_hash_value);
    transparent_crc(p_439->g_378.x, "p_439->g_378.x", print_hash_value);
    transparent_crc(p_439->g_378.y, "p_439->g_378.y", print_hash_value);
    transparent_crc(p_439->g_380.s0, "p_439->g_380.s0", print_hash_value);
    transparent_crc(p_439->g_380.s1, "p_439->g_380.s1", print_hash_value);
    transparent_crc(p_439->g_380.s2, "p_439->g_380.s2", print_hash_value);
    transparent_crc(p_439->g_380.s3, "p_439->g_380.s3", print_hash_value);
    transparent_crc(p_439->g_380.s4, "p_439->g_380.s4", print_hash_value);
    transparent_crc(p_439->g_380.s5, "p_439->g_380.s5", print_hash_value);
    transparent_crc(p_439->g_380.s6, "p_439->g_380.s6", print_hash_value);
    transparent_crc(p_439->g_380.s7, "p_439->g_380.s7", print_hash_value);
    transparent_crc(p_439->g_381.s0, "p_439->g_381.s0", print_hash_value);
    transparent_crc(p_439->g_381.s1, "p_439->g_381.s1", print_hash_value);
    transparent_crc(p_439->g_381.s2, "p_439->g_381.s2", print_hash_value);
    transparent_crc(p_439->g_381.s3, "p_439->g_381.s3", print_hash_value);
    transparent_crc(p_439->g_381.s4, "p_439->g_381.s4", print_hash_value);
    transparent_crc(p_439->g_381.s5, "p_439->g_381.s5", print_hash_value);
    transparent_crc(p_439->g_381.s6, "p_439->g_381.s6", print_hash_value);
    transparent_crc(p_439->g_381.s7, "p_439->g_381.s7", print_hash_value);
    transparent_crc(p_439->g_381.s8, "p_439->g_381.s8", print_hash_value);
    transparent_crc(p_439->g_381.s9, "p_439->g_381.s9", print_hash_value);
    transparent_crc(p_439->g_381.sa, "p_439->g_381.sa", print_hash_value);
    transparent_crc(p_439->g_381.sb, "p_439->g_381.sb", print_hash_value);
    transparent_crc(p_439->g_381.sc, "p_439->g_381.sc", print_hash_value);
    transparent_crc(p_439->g_381.sd, "p_439->g_381.sd", print_hash_value);
    transparent_crc(p_439->g_381.se, "p_439->g_381.se", print_hash_value);
    transparent_crc(p_439->g_381.sf, "p_439->g_381.sf", print_hash_value);
    transparent_crc(p_439->g_406.f0, "p_439->g_406.f0", print_hash_value);
    transparent_crc(p_439->g_406.f1, "p_439->g_406.f1", print_hash_value);
    transparent_crc(p_439->g_406.f2, "p_439->g_406.f2", print_hash_value);
    transparent_crc(p_439->g_406.f3, "p_439->g_406.f3", print_hash_value);
    transparent_crc(p_439->g_406.f4, "p_439->g_406.f4", print_hash_value);
    transparent_crc(p_439->g_406.f5, "p_439->g_406.f5", print_hash_value);
    transparent_crc(p_439->g_406.f6, "p_439->g_406.f6", print_hash_value);
    transparent_crc(p_439->g_433, "p_439->g_433", print_hash_value);
    transparent_crc(p_439->g_437.f0, "p_439->g_437.f0", print_hash_value);
    transparent_crc(p_439->g_437.f1, "p_439->g_437.f1", print_hash_value);
    transparent_crc(p_439->g_437.f2, "p_439->g_437.f2", print_hash_value);
    transparent_crc(p_439->g_437.f3, "p_439->g_437.f3", print_hash_value);
    transparent_crc(p_439->g_437.f4, "p_439->g_437.f4", print_hash_value);
    transparent_crc(p_439->g_437.f5, "p_439->g_437.f5", print_hash_value);
    transparent_crc(p_439->g_437.f6, "p_439->g_437.f6", print_hash_value);
    transparent_crc(p_439->v_collective, "p_439->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 54; i++)
            transparent_crc(p_439->g_special_values[i + 54 * get_linear_group_id()], "p_439->g_special_values[i + 54 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 54; i++)
            transparent_crc(p_439->l_special_values[i], "p_439->l_special_values[i]", print_hash_value);
    transparent_crc(p_439->l_comm_values[get_linear_local_id()], "p_439->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_439->g_comm_values[get_linear_group_id() * 82 + get_linear_local_id()], "p_439->g_comm_values[get_linear_group_id() * 82 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
