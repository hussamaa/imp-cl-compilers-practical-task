// --atomics 23 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 74,27,5 -l 2,1,1
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

__constant uint32_t permutations[10][2] = {
{1,0}, // permutation 0
{1,0}, // permutation 1
{1,0}, // permutation 2
{1,0}, // permutation 3
{1,0}, // permutation 4
{1,0}, // permutation 5
{1,0}, // permutation 6
{1,0}, // permutation 7
{1,0}, // permutation 8
{0,1} // permutation 9
};

// Seed: 915037731

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint32_t  f1;
   uint8_t  f2;
   volatile int32_t  f3;
   int32_t  f4;
   uint32_t  f5;
   volatile uint32_t  f6;
};

struct S2 {
    int32_t g_21;
    uint64_t g_34;
    volatile struct S0 g_61;
    volatile uint64_t **g_69;
    uint8_t g_76;
    uint64_t g_78;
    int8_t g_95;
    volatile VECTOR(uint16_t, 16) g_103;
    int64_t g_118;
    int16_t g_125;
    uint32_t g_126[2][6];
    uint16_t g_128;
    volatile uint16_t g_143;
    uint64_t g_146;
    int32_t g_161;
    int32_t g_167[6];
    int32_t *g_166;
    VECTOR(int8_t, 2) g_227;
    int32_t ** volatile g_234;
    volatile struct S0 g_237;
    volatile VECTOR(int32_t, 8) g_243;
    struct S0 g_284;
    struct S0 *g_286;
    struct S0 **g_285;
    uint16_t *g_290;
    int32_t ** volatile g_311[9][10][2];
    volatile VECTOR(int32_t, 8) g_353;
    VECTOR(int32_t, 2) g_354;
    struct S0 g_355;
    struct S0 g_361;
    struct S0 g_363;
    volatile VECTOR(int32_t, 16) g_366;
    VECTOR(int16_t, 16) g_371;
    volatile uint16_t g_395;
    int64_t g_399;
    VECTOR(int64_t, 16) g_407;
    uint8_t g_413;
    struct S0 g_416;
    struct S0 g_417;
    int32_t * volatile g_427[1][4];
    int32_t * volatile g_428;
    int32_t ** volatile g_434;
    int32_t * volatile g_469[9];
    uint32_t *g_472;
    uint32_t **g_471;
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
int32_t  func_1(struct S2 * p_473);
uint16_t  func_7(int8_t  p_8, int32_t  p_9, int32_t  p_10, uint16_t  p_11, struct S2 * p_473);
int32_t * func_16(uint32_t  p_17, int32_t * p_18, int32_t * p_19, struct S2 * p_473);
int32_t * func_22(int32_t * p_23, int32_t * p_24, struct S2 * p_473);
int32_t * func_25(int32_t  p_26, int32_t * p_27, int64_t  p_28, uint64_t  p_29, struct S2 * p_473);
int32_t * func_30(int64_t  p_31, uint64_t  p_32, struct S2 * p_473);
uint8_t  func_38(uint64_t  p_39, int32_t  p_40, int32_t  p_41, int32_t * p_42, uint64_t * p_43, struct S2 * p_473);
uint64_t  func_44(int32_t * p_45, uint64_t * p_46, int32_t  p_47, int32_t * p_48, uint16_t  p_49, struct S2 * p_473);
int32_t * func_50(int64_t  p_51, int32_t * p_52, struct S2 * p_473);
int32_t * func_53(uint64_t * p_54, uint64_t * p_55, uint16_t  p_56, struct S2 * p_473);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_473->g_comm_values p_473->l_comm_values p_473->g_237.f5 p_473->g_243 p_473->g_126 p_473->g_434 p_473->g_166 p_473->g_167 p_473->g_354 p_473->g_355.f4 p_473->g_234 p_473->g_21 p_473->g_284.f1 p_473->g_284.f5 p_473->g_76 p_473->g_471
 * writes: p_473->g_comm_values p_473->g_167 p_473->g_413 p_473->g_126 p_473->g_166 p_473->g_355.f4 p_473->g_128 p_473->g_416.f4 p_473->g_21 p_473->g_284.f4 p_473->g_471
 */
int32_t  func_1(struct S2 * p_473)
{ /* block id: 4 */
    VECTOR(uint16_t, 8) l_2 = (VECTOR(uint16_t, 8))(0xD8F6L, (VECTOR(uint16_t, 4))(0xD8F6L, (VECTOR(uint16_t, 2))(0xD8F6L, 0xBA1AL), 0xBA1AL), 0xBA1AL, 0xD8F6L, 0xBA1AL);
    uint16_t *l_450 = &p_473->g_128;
    struct S0 ***l_464[7][9][4] = {{{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0}},{{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0}},{{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0}},{{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0}},{{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0}},{{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0}},{{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0},{&p_473->g_285,&p_473->g_285,(void*)0,(void*)0}}};
    struct S0 ****l_463 = &l_464[6][6][1];
    struct S0 ***l_465[7] = {&p_473->g_285,&p_473->g_285,&p_473->g_285,&p_473->g_285,&p_473->g_285,&p_473->g_285,&p_473->g_285};
    struct S0 ***l_466 = &p_473->g_285;
    int32_t l_467 = 0x3496A92CL;
    int32_t *l_468 = &p_473->g_21;
    int32_t *l_470 = &p_473->g_284.f4;
    int i, j, k;
    (*l_470) = ((*l_468) = (((VECTOR(uint16_t, 16))(l_2.s4563200600760021)).s9 >= ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(((((*l_450) = func_7(p_473->g_comm_values[p_473->tid], l_2.s2, p_473->l_comm_values[(safe_mod_func_uint32_t_u_u(p_473->tid, 2))], p_473->l_comm_values[(safe_mod_func_uint32_t_u_u(p_473->tid, 2))], p_473)) >= ((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_473->g_21, (safe_div_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u(((p_473->g_284.f1 >= ((p_473->g_416.f4 = ((((VECTOR(uint64_t, 4))(0x7100C9E40F311822L, (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(250UL, 255UL)).yyyxyyxxxyxxyxxx)).s2, (((((l_465[6] = ((*l_463) = &p_473->g_285)) != l_466) >= 0x3DL) < 1L) > GROUP_DIVERGE(1, 1)))), 6)), 18446744073709551612UL, 18446744073709551608UL)).x <= p_473->g_284.f5) <= p_473->g_76)) , l_2.s4)) <= l_2.s2), l_2.s4)) != 0L) > l_2.s0) < l_2.s6), l_2.s0)))), 0x2477L)) ^ l_2.s6)) & l_2.s2), l_2.s5)), l_2.s4)) , l_467)));
    p_473->g_471 = p_473->g_471;
    return (*l_468);
}


/* ------------------------------------------ */
/* 
 * reads : p_473->g_237.f5 p_473->g_comm_values p_473->g_243 p_473->g_126 p_473->g_434 p_473->g_166 p_473->g_167 p_473->g_354 p_473->g_355.f4 p_473->g_234
 * writes: p_473->g_comm_values p_473->g_167 p_473->g_413 p_473->g_126 p_473->g_166 p_473->g_355.f4
 */
uint16_t  func_7(int8_t  p_8, int32_t  p_9, int32_t  p_10, uint16_t  p_11, struct S2 * p_473)
{ /* block id: 5 */
    int32_t *l_299 = &p_473->g_167[3];
    int32_t l_314 = 0x5B56AAC1L;
    int32_t l_319 = 1L;
    int32_t l_320 = 0x1E6B9A1AL;
    int32_t l_323 = 0L;
    VECTOR(uint16_t, 2) l_350 = (VECTOR(uint16_t, 2))(0UL, 65535UL);
    uint64_t *l_364 = (void*)0;
    uint16_t l_397 = 0UL;
    VECTOR(int64_t, 4) l_408 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-6L)), (-6L));
    uint8_t l_421 = 9UL;
    VECTOR(int32_t, 8) l_435 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
    VECTOR(int16_t, 16) l_436 = (VECTOR(int16_t, 16))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x3F59L), 0x3F59L), 0x3F59L, (-10L), 0x3F59L, (VECTOR(int16_t, 2))((-10L), 0x3F59L), (VECTOR(int16_t, 2))((-10L), 0x3F59L), (-10L), 0x3F59L, (-10L), 0x3F59L);
    VECTOR(uint8_t, 2) l_439 = (VECTOR(uint8_t, 2))(0x80L, 0x26L);
    VECTOR(int64_t, 16) l_444 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int64_t, 2))(1L, 1L), (VECTOR(int64_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
    uint64_t **l_445 = &l_364;
    uint64_t ***l_446 = &l_445;
    int32_t *l_447 = (void*)0;
    int32_t *l_448[3][4];
    int32_t **l_449[8] = {&l_448[2][0],&l_448[2][0],&l_448[2][0],&l_448[2][0],&l_448[2][0],&l_448[2][0],&l_448[2][0],&l_448[2][0]};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_448[i][j] = &p_473->g_21;
    }
    if ((((VECTOR(uint32_t, 2))(0x31FBF685L, 0xF9BEAB1DL)).hi & p_8))
    { /* block id: 6 */
        int64_t l_313 = 0x4183433B3293D30DL;
        int32_t l_318[4] = {0x63E62613L,0x63E62613L,0x63E62613L,0x63E62613L};
        uint16_t l_324 = 1UL;
        VECTOR(int64_t, 4) l_377 = (VECTOR(int64_t, 4))(0x40E2FA64CB8C2E7DL, (VECTOR(int64_t, 2))(0x40E2FA64CB8C2E7DL, 0x15371E21106AA308L), 0x15371E21106AA308L);
        int64_t *l_418 = (void*)0;
        int64_t *l_419 = (void*)0;
        int64_t *l_420[7][4] = {{&l_313,&l_313,(void*)0,&l_313},{&l_313,&l_313,(void*)0,&l_313},{&l_313,&l_313,(void*)0,&l_313},{&l_313,&l_313,(void*)0,&l_313},{&l_313,&l_313,(void*)0,&l_313},{&l_313,&l_313,(void*)0,&l_313},{&l_313,&l_313,(void*)0,&l_313}};
        uint8_t *l_424 = &p_473->g_413;
        int32_t *l_429[6][6] = {{&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4},{&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4},{&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4},{&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4},{&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4},{&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4}};
        uint32_t *l_430 = (void*)0;
        uint32_t *l_431 = &p_473->g_126[1][0];
        int i, j;
        for (p_8 = 0; (p_8 == (-25)); p_8 = safe_sub_func_int64_t_s_s(p_8, 6))
        { /* block id: 9 */
            int32_t l_35 = 0x1BF0BB9AL;
            int32_t l_321 = (-5L);
            VECTOR(int32_t, 8) l_322 = (VECTOR(int32_t, 8))(0x5E7A8B45L, (VECTOR(int32_t, 4))(0x5E7A8B45L, (VECTOR(int32_t, 2))(0x5E7A8B45L, (-1L)), (-1L)), (-1L), 0x5E7A8B45L, (-1L));
            uint64_t *l_332[1][2][5] = {{{&p_473->g_34,&p_473->g_34,&p_473->g_34,&p_473->g_34,&p_473->g_34},{&p_473->g_34,&p_473->g_34,&p_473->g_34,&p_473->g_34,&p_473->g_34}}};
            uint64_t **l_331[10][5] = {{&l_332[0][0][0],(void*)0,&l_332[0][1][4],&l_332[0][0][0],&l_332[0][1][4]},{&l_332[0][0][0],(void*)0,&l_332[0][1][4],&l_332[0][0][0],&l_332[0][1][4]},{&l_332[0][0][0],(void*)0,&l_332[0][1][4],&l_332[0][0][0],&l_332[0][1][4]},{&l_332[0][0][0],(void*)0,&l_332[0][1][4],&l_332[0][0][0],&l_332[0][1][4]},{&l_332[0][0][0],(void*)0,&l_332[0][1][4],&l_332[0][0][0],&l_332[0][1][4]},{&l_332[0][0][0],(void*)0,&l_332[0][1][4],&l_332[0][0][0],&l_332[0][1][4]},{&l_332[0][0][0],(void*)0,&l_332[0][1][4],&l_332[0][0][0],&l_332[0][1][4]},{&l_332[0][0][0],(void*)0,&l_332[0][1][4],&l_332[0][0][0],&l_332[0][1][4]},{&l_332[0][0][0],(void*)0,&l_332[0][1][4],&l_332[0][0][0],&l_332[0][1][4]},{&l_332[0][0][0],(void*)0,&l_332[0][1][4],&l_332[0][0][0],&l_332[0][1][4]}};
            int32_t l_400 = 1L;
            int i, j, k;
            if (p_10)
                break;
        }
        l_320 = ((((p_473->g_comm_values[p_473->tid] ^= p_473->g_237.f5) && ((*l_299) = l_421)) && (p_473->g_243.s7 , (((safe_add_func_uint8_t_u_u((FAKE_DIVERGE(p_473->local_1_offset, get_local_id(1), 10) , (p_11 , ((*l_424) = 0x22L))), l_318[3])) , &l_324) != &l_397))) <= (safe_sub_func_int64_t_s_s((-6L), 0x3663A3BC37A10379L)));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_473->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u(((*l_431)--), 10))][(safe_mod_func_uint32_t_u_u(p_473->tid, 2))]));
        (*p_473->g_434) = &l_323;
    }
    else
    { /* block id: 212 */
        (*p_473->g_166) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_435.s6522)).yzzwwxwy)).s1;
    }
    p_473->g_355.f4 ^= ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_436.s3e0b7a3847072663)).lo)).even, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))((((safe_div_func_uint16_t_u_u(((((void*)0 == &p_473->g_126[1][3]) >= 0x35054B308C2293C4L) != ((VECTOR(uint8_t, 8))(l_439.yyxxyxyy)).s0), p_9)) >= FAKE_DIVERGE(p_473->group_2_offset, get_group_id(2), 10)) , (*l_299)), ((VECTOR(int16_t, 8))(p_11, ((VECTOR(int16_t, 2))((-1L), 7L)), (safe_mod_func_int64_t_s_s((((0x243AA1151E71A03AL && (safe_mul_func_int8_t_s_s(((((VECTOR(int64_t, 8))(l_444.scabc6cd8)).s4 <= (((&l_364 == ((*l_446) = l_445)) | p_473->g_354.y) || (*l_299))) >= (**p_473->g_434)), 0UL))) | 0x1D23L) , 0x5C68B40395D64C1AL), 18446744073709551606UL)), p_473->g_243.s0, (*l_299), 1L, 0x5B54L)), ((VECTOR(int16_t, 2))(0x15F4L)), (-1L), 0L, ((VECTOR(int16_t, 2))(0x2C06L)), 1L)).hi)).even))), ((VECTOR(uint16_t, 4))(0UL))))).y;
    (*p_473->g_234) = (l_447 = &l_320);
    return (*l_299);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_16(uint32_t  p_17, int32_t * p_18, int32_t * p_19, struct S2 * p_473)
{ /* block id: 151 */
    int32_t *l_300 = &p_473->g_161;
    int32_t *l_301 = &p_473->g_167[5];
    int32_t *l_302 = &p_473->g_21;
    int32_t *l_303 = &p_473->g_167[3];
    int32_t *l_304 = &p_473->g_167[3];
    int32_t *l_305[8][4] = {{&p_473->g_161,&p_473->g_161,&p_473->g_167[3],&p_473->g_167[3]},{&p_473->g_161,&p_473->g_161,&p_473->g_167[3],&p_473->g_167[3]},{&p_473->g_161,&p_473->g_161,&p_473->g_167[3],&p_473->g_167[3]},{&p_473->g_161,&p_473->g_161,&p_473->g_167[3],&p_473->g_167[3]},{&p_473->g_161,&p_473->g_161,&p_473->g_167[3],&p_473->g_167[3]},{&p_473->g_161,&p_473->g_161,&p_473->g_167[3],&p_473->g_167[3]},{&p_473->g_161,&p_473->g_161,&p_473->g_167[3],&p_473->g_167[3]},{&p_473->g_161,&p_473->g_161,&p_473->g_167[3],&p_473->g_167[3]}};
    int32_t l_306 = 0x18C01C7BL;
    int8_t l_307 = 0x03L;
    uint32_t l_308 = 2UL;
    int i, j;
    --l_308;
    return p_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_473->g_21 p_473->g_167 p_473->g_125 p_473->g_78 p_473->g_161 p_473->g_118 p_473->g_61.f4 p_473->g_comm_values p_473->g_227 p_473->g_166 p_473->g_234 p_473->g_237 p_473->g_126 p_473->g_34 p_473->g_103 p_473->g_285
 * writes: p_473->g_21 p_473->g_167 p_473->g_161 p_473->g_125 p_473->g_78 p_473->g_118 p_473->g_128 p_473->g_166 p_473->g_237 p_473->g_146 p_473->g_285 p_473->g_290 p_473->g_284.f0
 */
int32_t * func_22(int32_t * p_23, int32_t * p_24, struct S2 * p_473)
{ /* block id: 74 */
    int8_t l_184 = (-1L);
    int32_t l_200 = 0x277C611EL;
    volatile struct S0 *l_203[1];
    uint8_t *l_216 = &p_473->g_76;
    uint8_t *l_217 = &p_473->g_76;
    struct S0 **l_281 = (void*)0;
    uint16_t *l_287 = &p_473->g_128;
    int i;
    for (i = 0; i < 1; i++)
        l_203[i] = &p_473->g_61;
    for (p_473->g_21 = 0; (p_473->g_21 <= 14); p_473->g_21++)
    { /* block id: 77 */
        (*p_23) = ((*p_24) ^= 0x17F9317DL);
    }
    for (p_473->g_125 = 0; (p_473->g_125 <= 19); p_473->g_125 = safe_add_func_uint8_t_u_u(p_473->g_125, 8))
    { /* block id: 83 */
        uint16_t *l_172 = (void*)0;
        int64_t *l_173 = (void*)0;
        int64_t *l_174 = (void*)0;
        int64_t *l_175 = (void*)0;
        int64_t *l_176[1];
        int32_t l_177 = (-1L);
        int i;
        for (i = 0; i < 1; i++)
            l_176[i] = &p_473->g_118;
        (*p_24) = (0x0AB67BE3AB8C6AB6L == (l_177 &= (l_172 != (void*)0)));
        for (p_473->g_78 = 0; (p_473->g_78 < 46); p_473->g_78 = safe_add_func_int32_t_s_s(p_473->g_78, 4))
        { /* block id: 88 */
            if ((*p_24))
                break;
        }
        if ((*p_23))
            continue;
    }
    for (p_473->g_118 = 0; (p_473->g_118 < (-22)); --p_473->g_118)
    { /* block id: 95 */
        volatile struct S0 *l_183 = &p_473->g_61;
        volatile struct S0 **l_182 = &l_183;
        int32_t l_228[9][1] = {{0x04E518A1L},{0x04E518A1L},{0x04E518A1L},{0x04E518A1L},{0x04E518A1L},{0x04E518A1L},{0x04E518A1L},{0x04E518A1L},{0x04E518A1L}};
        uint64_t *l_231 = &p_473->g_146;
        int32_t l_265 = 0x45B85297L;
        struct S0 *l_283 = &p_473->g_284;
        struct S0 **l_282 = &l_283;
        int i, j;
        (*l_182) = &p_473->g_61;
        if (l_184)
            continue;
        if ((*p_24))
        { /* block id: 98 */
            uint64_t *l_189 = &p_473->g_34;
            int16_t *l_199 = &p_473->g_125;
            uint8_t *l_214 = (void*)0;
            uint8_t **l_215[6];
            int32_t l_232 = 0x73F102FCL;
            uint64_t l_233 = 18446744073709551615UL;
            int i;
            for (i = 0; i < 6; i++)
                l_215[i] = &l_214;
            for (p_473->g_128 = 5; (p_473->g_128 > 44); ++p_473->g_128)
            { /* block id: 101 */
                uint32_t l_192 = 0UL;
                int8_t *l_193 = (void*)0;
                int8_t *l_194 = &l_184;
                l_203[0] = (((safe_rshift_func_int16_t_s_u(((void*)0 == l_189), 5)) , (p_473->g_61.f4 && (safe_div_func_int8_t_s_s(((*l_194) = (l_192 & ((VECTOR(int64_t, 2))(0x0018B1378FC9453CL, 0x57A25A1EA19F92D8L)).lo)), (safe_rshift_func_uint16_t_u_s(((safe_div_func_int16_t_s_s((-8L), (((void*)0 != l_199) ^ l_200))) >= (safe_sub_func_int64_t_s_s(l_200, 1UL))), 9)))))) , &p_473->g_61);
                if ((*p_24))
                    continue;
            }
            (*p_473->g_234) = func_50((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((p_473->g_125 = ((0x0B4C8DAEL > ((safe_lshift_func_int8_t_s_u((safe_div_func_int64_t_s_s(p_473->g_61.f4, ((((l_216 = l_214) != (l_217 = &p_473->g_76)) ^ (safe_add_func_int64_t_s_s((safe_unary_minus_func_uint8_t_u((safe_div_func_uint64_t_u_u((safe_add_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 16))(p_473->g_227.yyyxxyyyxyyxxyyy)).sf, ((l_228[3][0] != FAKE_DIVERGE(p_473->group_2_offset, get_group_id(2), 10)) >= p_473->g_comm_values[p_473->tid]))) , (safe_rshift_func_uint16_t_u_s(0x118FL, ((GROUP_DIVERGE(0, 1) , &p_473->g_146) != l_231)))), l_232)), 4L)))), 0x0810DBFEEEC83478L))) , p_473->g_227.y))), FAKE_DIVERGE(p_473->global_1_offset, get_global_id(1), 10))) > (*p_473->g_166))) , l_233)), l_184)) && l_228[3][0]), 4)), 3)), p_24, p_473);
            for (p_473->g_161 = 0; (p_473->g_161 != (-17)); p_473->g_161--)
            { /* block id: 112 */
                p_473->g_237 = p_473->g_237;
            }
            for (p_473->g_146 = (-20); (p_473->g_146 != 53); ++p_473->g_146)
            { /* block id: 117 */
                int32_t l_246 = (-8L);
                for (l_184 = 0; (l_184 > (-1)); l_184 = safe_sub_func_uint64_t_u_u(l_184, 9))
                { /* block id: 120 */
                    VECTOR(uint64_t, 2) l_242 = (VECTOR(uint64_t, 2))(18446744073709551607UL, 0x5FD2DC1123E861F7L);
                    uint32_t *l_253 = (void*)0;
                    int i;
                    if ((((VECTOR(uint64_t, 16))(l_242.xxyyyyxyyxxxxyxx)).sf >= GROUP_DIVERGE(0, 1)))
                    { /* block id: 121 */
                        return p_24;
                    }
                    else
                    { /* block id: 123 */
                        int16_t l_264 = 1L;
                        (*p_23) = ((VECTOR(int32_t, 2))(p_473->g_243.s02)).odd;
                        (*p_24) = (safe_sub_func_int8_t_s_s((l_246 >= (&p_473->g_125 == ((safe_mod_func_int16_t_s_s(((l_233 | ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((~(l_233 == ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((l_253 != &p_473->g_126[0][0]), 0x61L, 0x4BL, 3L)).lo)).lo)) , ((void*)0 != p_23)), 1)), (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint32_t_u_u((safe_add_func_int64_t_s_s((safe_div_func_int8_t_s_s((l_264 && l_232), 0x20L)), 0x2A5173ACA9B24F8DL)), l_246)) > p_473->g_167[3]), p_473->g_126[1][0])) < 0x51E414F8L), l_264)))) < l_232)) < l_265), 0x6543L)) , l_199))), p_473->g_34));
                    }
                }
                if ((*p_24))
                    break;
            }
        }
        else
        { /* block id: 130 */
            uint64_t l_268 = 0x7763B51E3D7954E5L;
            struct S0 **l_279[3];
            struct S0 ***l_280[9] = {(void*)0,&l_279[1],(void*)0,(void*)0,&l_279[1],(void*)0,(void*)0,&l_279[1],(void*)0};
            uint16_t *l_288 = &p_473->g_128;
            uint16_t **l_289[8][2];
            VECTOR(uint8_t, 16) l_293 = (VECTOR(uint8_t, 16))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0UL), 0UL), 0UL, 9UL, 0UL, (VECTOR(uint8_t, 2))(9UL, 0UL), (VECTOR(uint8_t, 2))(9UL, 0UL), 9UL, 0UL, 9UL, 0UL);
            int i, j;
            for (i = 0; i < 3; i++)
                l_279[i] = (void*)0;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 2; j++)
                    l_289[i][j] = &l_288;
            }
            (*p_473->g_166) &= (safe_sub_func_int32_t_s_s((l_184 & l_268), ((safe_mul_func_uint8_t_u_u((p_473->g_237.f4 , (safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(((l_281 = l_279[1]) != (p_473->g_285 = l_282)), ((l_287 == (p_473->g_290 = l_288)) >= (safe_add_func_uint16_t_u_u((((l_265 != ((VECTOR(uint8_t, 8))(l_293.s6e74e6fd)).s7) == l_200) ^ l_265), p_473->g_103.sa))))), l_265)), 0x5EF6L)), 1UL))), 0xB5L)) & l_228[3][0])));
            for (p_473->g_284.f0 = 0; (p_473->g_284.f0 > 25); p_473->g_284.f0 = safe_add_func_int64_t_s_s(p_473->g_284.f0, 6))
            { /* block id: 137 */
                int32_t **l_298 = &p_473->g_166;
                for (p_473->g_125 = (-1); (p_473->g_125 >= (-15)); p_473->g_125--)
                { /* block id: 140 */
                    (*p_473->g_285) = (*p_473->g_285);
                    if ((*p_24))
                        break;
                }
                (*l_298) = (*p_473->g_234);
            }
            (*p_24) = (*p_24);
        }
    }
    return p_23;
}


/* ------------------------------------------ */
/* 
 * reads : p_473->g_61.f6 p_473->g_21 p_473->g_161 p_473->g_61.f4
 * writes: p_473->g_128 p_473->g_21 p_473->g_146 p_473->g_161
 */
int32_t * func_25(int32_t  p_26, int32_t * p_27, int64_t  p_28, uint64_t  p_29, struct S2 * p_473)
{ /* block id: 55 */
    uint16_t *l_127 = &p_473->g_128;
    VECTOR(int16_t, 2) l_131 = (VECTOR(int16_t, 2))(0x7AF3L, 0x784EL);
    uint8_t *l_132 = &p_473->g_76;
    uint8_t *l_133 = &p_473->g_76;
    uint64_t l_134 = 0xDC50425FF9347886L;
    VECTOR(int32_t, 8) l_147 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-9L)), (-9L)), (-9L), 6L, (-9L));
    int i;
    (*p_27) ^= (((*l_127) = p_473->g_61.f6) , (((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_131.yyyyyyxx)).even)).y, ((void*)0 == &p_473->g_118))) , l_132) == l_133));
    l_134++;
    for (l_134 = 0; (l_134 <= 45); l_134 = safe_add_func_int32_t_s_s(l_134, 7))
    { /* block id: 61 */
        VECTOR(uint16_t, 2) l_144 = (VECTOR(uint16_t, 2))(65526UL, 1UL);
        uint64_t *l_145 = &p_473->g_146;
        int16_t *l_150 = (void*)0;
        uint32_t *l_155 = &p_473->g_126[0][0];
        int32_t *l_160 = &p_473->g_161;
        int i;
        (*l_160) ^= (((*l_145) = (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(1UL, (safe_lshift_func_uint16_t_u_u(p_473->g_143, (!p_28))), ((VECTOR(uint16_t, 2))(65527UL, 0UL)), 0x364EL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_144.yyxy)).zwwwwywz)).s00)), 0x493DL)).s4333474642505202)).odd)).s7, 0x8DDCL))) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_147.s56)).xxxyxyyx)), 0x51B2B73FL, (safe_sub_func_uint32_t_u_u((((*p_27) >= ((l_150 != &p_473->g_125) < (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(p_29, ((*l_155)++))), ((safe_mod_func_int32_t_s_s((((-1L) ^ p_473->g_61.f4) < p_26), p_473->g_78)) != 1L))))) == 0x30238D5DL), (*p_27))), ((VECTOR(int32_t, 4))(0x78FF20E8L)), 0x64DAEF12L, 0x72307333L)).sb);
        p_27 = (void*)0;
    }
    for (p_473->g_161 = 16; (p_473->g_161 <= (-13)); p_473->g_161 = safe_sub_func_uint64_t_u_u(p_473->g_161, 2))
    { /* block id: 69 */
        int32_t *l_164 = &p_473->g_21;
        int32_t *l_165 = (void*)0;
        l_147.s4 = ((*l_164) = p_473->g_61.f4);
    }
    return &p_473->g_161;
}


/* ------------------------------------------ */
/* 
 * reads : p_473->g_61 p_473->l_comm_values p_473->g_69 p_473->g_76 p_473->g_34 p_473->g_21 p_473->g_comm_values p_473->g_78 p_473->g_95 p_473->g_103 p_473->g_125
 * writes: p_473->g_61 p_473->g_76 p_473->g_78 p_473->g_95 p_473->g_comm_values p_473->g_118 p_473->g_125 p_473->g_126 p_473->g_21
 */
int32_t * func_30(int64_t  p_31, uint64_t  p_32, struct S2 * p_473)
{ /* block id: 13 */
    uint64_t *l_58 = &p_473->g_34;
    uint64_t **l_57 = &l_58;
    uint32_t l_59 = 0x45C5BB08L;
    uint64_t *l_63 = (void*)0;
    int32_t *l_64[9] = {&p_473->g_21,(void*)0,&p_473->g_21,&p_473->g_21,(void*)0,&p_473->g_21,&p_473->g_21,(void*)0,&p_473->g_21};
    int16_t *l_124 = &p_473->g_125;
    int i;
    p_473->g_21 = (((p_473->g_126[1][0] = ((*l_124) &= (func_38((func_44(func_50(p_32, func_53(((*l_57) = (void*)0), &p_473->g_34, l_59, p_473), p_473), l_63, p_473->l_comm_values[(safe_mod_func_uint32_t_u_u(p_473->tid, 2))], l_64[5], p_31, p_473) , 1UL), p_32, p_473->g_95, l_64[5], &p_473->g_34, p_473) != p_473->g_21))) | FAKE_DIVERGE(p_473->group_0_offset, get_group_id(0), 10)) , p_473->g_103.s7);
    return &p_473->g_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_473->g_103 p_473->l_comm_values p_473->g_76 p_473->g_comm_values p_473->g_34 p_473->g_69
 * writes: p_473->g_95 p_473->g_comm_values p_473->g_118
 */
uint8_t  func_38(uint64_t  p_39, int32_t  p_40, int32_t  p_41, int32_t * p_42, uint64_t * p_43, struct S2 * p_473)
{ /* block id: 44 */
    uint32_t l_102 = 0xD880D918L;
    int8_t *l_106 = (void*)0;
    int8_t *l_107 = &p_473->g_95;
    VECTOR(int16_t, 2) l_114 = (VECTOR(int16_t, 2))(0x0942L, (-6L));
    VECTOR(int16_t, 16) l_115 = (VECTOR(int16_t, 16))(0x7386L, (VECTOR(int16_t, 4))(0x7386L, (VECTOR(int16_t, 2))(0x7386L, 0x460DL), 0x460DL), 0x460DL, 0x7386L, 0x460DL, (VECTOR(int16_t, 2))(0x7386L, 0x460DL), (VECTOR(int16_t, 2))(0x7386L, 0x460DL), 0x7386L, 0x460DL, 0x7386L, 0x460DL);
    VECTOR(uint32_t, 8) l_116 = (VECTOR(uint32_t, 8))(9UL, (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0xA13C8451L), 0xA13C8451L), 0xA13C8451L, 9UL, 0xA13C8451L);
    int64_t *l_117[9][5] = {{&p_473->g_118,(void*)0,&p_473->g_118,&p_473->g_118,(void*)0},{&p_473->g_118,(void*)0,&p_473->g_118,&p_473->g_118,(void*)0},{&p_473->g_118,(void*)0,&p_473->g_118,&p_473->g_118,(void*)0},{&p_473->g_118,(void*)0,&p_473->g_118,&p_473->g_118,(void*)0},{&p_473->g_118,(void*)0,&p_473->g_118,&p_473->g_118,(void*)0},{&p_473->g_118,(void*)0,&p_473->g_118,&p_473->g_118,(void*)0},{&p_473->g_118,(void*)0,&p_473->g_118,&p_473->g_118,(void*)0},{&p_473->g_118,(void*)0,&p_473->g_118,&p_473->g_118,(void*)0},{&p_473->g_118,(void*)0,&p_473->g_118,&p_473->g_118,(void*)0}};
    int32_t *l_121[5][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
    int64_t l_122 = (-1L);
    int64_t l_123 = 0x4DF10050AECCFC7CL;
    int i, j;
    l_123 &= ((((l_122 = (safe_mul_func_int8_t_s_s((~(safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_102, (!((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_473->g_103.s8f2c1609a65e11ed)).s7a)))).even))), 0x5E4DL))), ((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((*l_107) = l_102), (p_473->l_comm_values[(safe_mod_func_uint32_t_u_u(p_473->tid, 2))] , p_473->g_76), 0x4AL, 1L)))), (-1L), ((safe_sub_func_int64_t_s_s((p_473->g_118 = (+(p_473->g_comm_values[p_473->tid] &= (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(((((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))(l_114.yx)).yyyyxxyy, ((VECTOR(int16_t, 16))(l_115.s0fb0ce4c8d1ea510)).odd))).s0 != 1L) | ((VECTOR(uint32_t, 16))(l_116.s1263575714270240)).s1), 6)), 0x7022C981DF76934EL))))), (safe_sub_func_uint64_t_u_u((((p_40 ^ (+GROUP_DIVERGE(0, 1))) , p_473->l_comm_values[(safe_mod_func_uint32_t_u_u(p_473->tid, 2))]) , (*p_43)), l_114.y)))) <= 249UL), (-1L), ((VECTOR(int8_t, 4))(0x6CL)), (-10L), ((VECTOR(int8_t, 2))(0L)), 0x6FL, (-1L))).se, l_116.s1)) >= l_115.s4)))) < 0x90BB767BL) , (void*)0) == p_473->g_69);
    return p_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_473->g_61.f4 p_473->g_69 p_473->l_comm_values p_473->g_76 p_473->g_34 p_473->g_21 p_473->g_comm_values p_473->g_78
 * writes: p_473->g_76 p_473->g_78
 */
uint64_t  func_44(int32_t * p_45, uint64_t * p_46, int32_t  p_47, int32_t * p_48, uint16_t  p_49, struct S2 * p_473)
{ /* block id: 21 */
    uint32_t l_74 = 4294967287UL;
    uint8_t *l_75 = &p_473->g_76;
    uint32_t l_77 = 0UL;
    p_473->g_78 &= ((((((safe_div_func_uint64_t_u_u(p_473->g_61.f4, ((!(safe_add_func_int16_t_s_s((p_473->g_69 == (((safe_mul_func_uint8_t_u_u(((*l_75) ^= (safe_div_func_int32_t_s_s((l_74 = ((void*)0 == &p_46)), p_473->l_comm_values[(safe_mod_func_uint32_t_u_u(p_473->tid, 2))]))), (((250UL || (p_473->g_34 || p_473->g_21)) != (p_473->g_comm_values[p_473->tid] || p_473->g_21)) >= p_49))) ^ p_473->l_comm_values[(safe_mod_func_uint32_t_u_u(p_473->tid, 2))]) , &p_46)), p_47))) , l_77))) , l_74) ^ 0x5EB25383L) , l_74) ^ GROUP_DIVERGE(1, 1)) | 0x3458E53ADD1EB108L);
    if ((atomic_inc(&p_473->g_atomic_input[23 * get_linear_group_id() + 19]) == 1))
    { /* block id: 26 */
        int32_t l_79 = (-1L);
        struct S0 *l_90 = (void*)0;
        struct S0 *l_91 = (void*)0;
        int32_t *l_92 = (void*)0;
        int32_t *l_93 = &l_79;
        int32_t *l_94 = (void*)0;
        for (l_79 = 0; (l_79 == 19); l_79++)
        { /* block id: 29 */
            int32_t l_82 = 0x352FFB46L;
            for (l_82 = 0; (l_82 <= 26); ++l_82)
            { /* block id: 32 */
                int32_t l_85 = 0x1F9A5DE3L;
                int32_t l_86 = 0x1DDA348DL;
                uint16_t l_87 = 0xC708L;
                l_87--;
            }
        }
        l_79 = 0x292B6F80L;
        l_91 = l_90;
        l_94 = (l_93 = l_92);
        unsigned int result = 0;
        result += l_79;
        atomic_add(&p_473->g_special_values[23 * get_linear_group_id() + 19], result);
    }
    else
    { /* block id: 40 */
        (1 + 1);
    }
    return l_77;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_50(int64_t  p_51, int32_t * p_52, struct S2 * p_473)
{ /* block id: 19 */
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_473->g_61
 * writes: p_473->g_61
 */
int32_t * func_53(uint64_t * p_54, uint64_t * p_55, uint16_t  p_56, struct S2 * p_473)
{ /* block id: 15 */
    int32_t *l_60 = &p_473->g_21;
    volatile struct S0 *l_62 = &p_473->g_61;
    l_60 = l_60;
    (*l_62) = p_473->g_61;
    return l_60;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S2 c_474;
    struct S2* p_473 = &c_474;
    struct S2 c_475 = {
        (-4L), // p_473->g_21
        9UL, // p_473->g_34
        {4294967295UL,0xB57606ABL,0UL,0x34EA65D3L,0x04F7A324L,1UL,9UL}, // p_473->g_61
        (void*)0, // p_473->g_69
        4UL, // p_473->g_76
        0UL, // p_473->g_78
        (-4L), // p_473->g_95
        (VECTOR(uint16_t, 16))(0x5375L, (VECTOR(uint16_t, 4))(0x5375L, (VECTOR(uint16_t, 2))(0x5375L, 3UL), 3UL), 3UL, 0x5375L, 3UL, (VECTOR(uint16_t, 2))(0x5375L, 3UL), (VECTOR(uint16_t, 2))(0x5375L, 3UL), 0x5375L, 3UL, 0x5375L, 3UL), // p_473->g_103
        0x1E20859F89EB2EF1L, // p_473->g_118
        (-7L), // p_473->g_125
        {{4UL,1UL,4UL,4UL,1UL,4UL},{4UL,1UL,4UL,4UL,1UL,4UL}}, // p_473->g_126
        65532UL, // p_473->g_128
        0x30BCL, // p_473->g_143
        1UL, // p_473->g_146
        (-9L), // p_473->g_161
        {0x2CFB6CEFL,0x2CFB6CEFL,0x2CFB6CEFL,0x2CFB6CEFL,0x2CFB6CEFL,0x2CFB6CEFL}, // p_473->g_167
        &p_473->g_167[3], // p_473->g_166
        (VECTOR(int8_t, 2))(0x3AL, 0x59L), // p_473->g_227
        &p_473->g_166, // p_473->g_234
        {7UL,0UL,0x09L,0L,0x3ED8970BL,4294967295UL,0xA48057C8L}, // p_473->g_237
        (VECTOR(int32_t, 8))(0x2D96BE51L, (VECTOR(int32_t, 4))(0x2D96BE51L, (VECTOR(int32_t, 2))(0x2D96BE51L, (-5L)), (-5L)), (-5L), 0x2D96BE51L, (-5L)), // p_473->g_243
        {0xE796FE6EL,4294967295UL,0xE9L,0x3A045BBCL,0x14B757B2L,4294967289UL,1UL}, // p_473->g_284
        &p_473->g_284, // p_473->g_286
        &p_473->g_286, // p_473->g_285
        (void*)0, // p_473->g_290
        {{{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166}},{{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166}},{{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166}},{{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166}},{{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166}},{{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166}},{{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166}},{{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166}},{{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166},{&p_473->g_166,&p_473->g_166}}}, // p_473->g_311
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L), // p_473->g_353
        (VECTOR(int32_t, 2))((-9L), 0x52170CCAL), // p_473->g_354
        {9UL,1UL,6UL,1L,-1L,1UL,4294967292UL}, // p_473->g_355
        {5UL,1UL,0xB0L,0x2A3D6773L,0x7F36DEE7L,0x16F0C6B0L,4294967295UL}, // p_473->g_361
        {0xF8D9338EL,4294967295UL,1UL,-7L,1L,0xE6B259F2L,0x0D221EA3L}, // p_473->g_363
        (VECTOR(int32_t, 16))(0x22CC31B7L, (VECTOR(int32_t, 4))(0x22CC31B7L, (VECTOR(int32_t, 2))(0x22CC31B7L, (-9L)), (-9L)), (-9L), 0x22CC31B7L, (-9L), (VECTOR(int32_t, 2))(0x22CC31B7L, (-9L)), (VECTOR(int32_t, 2))(0x22CC31B7L, (-9L)), 0x22CC31B7L, (-9L), 0x22CC31B7L, (-9L)), // p_473->g_366
        (VECTOR(int16_t, 16))(0x3452L, (VECTOR(int16_t, 4))(0x3452L, (VECTOR(int16_t, 2))(0x3452L, (-1L)), (-1L)), (-1L), 0x3452L, (-1L), (VECTOR(int16_t, 2))(0x3452L, (-1L)), (VECTOR(int16_t, 2))(0x3452L, (-1L)), 0x3452L, (-1L), 0x3452L, (-1L)), // p_473->g_371
        0xA02BL, // p_473->g_395
        (-1L), // p_473->g_399
        (VECTOR(int64_t, 16))(0x038A89A34895A382L, (VECTOR(int64_t, 4))(0x038A89A34895A382L, (VECTOR(int64_t, 2))(0x038A89A34895A382L, 1L), 1L), 1L, 0x038A89A34895A382L, 1L, (VECTOR(int64_t, 2))(0x038A89A34895A382L, 1L), (VECTOR(int64_t, 2))(0x038A89A34895A382L, 1L), 0x038A89A34895A382L, 1L, 0x038A89A34895A382L, 1L), // p_473->g_407
        0x66L, // p_473->g_413
        {0UL,4294967295UL,0UL,-1L,2L,0x95750D68L,1UL}, // p_473->g_416
        {4294967292UL,4294967295UL,0x66L,-3L,0L,0x436AF0B5L,0UL}, // p_473->g_417
        {{&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4,&p_473->g_361.f4}}, // p_473->g_427
        (void*)0, // p_473->g_428
        &p_473->g_166, // p_473->g_434
        {&p_473->g_363.f4,&p_473->g_361.f4,&p_473->g_363.f4,&p_473->g_363.f4,&p_473->g_361.f4,&p_473->g_363.f4,&p_473->g_363.f4,&p_473->g_361.f4,&p_473->g_363.f4}, // p_473->g_469
        &p_473->g_126[1][0], // p_473->g_472
        &p_473->g_472, // p_473->g_471
        0, // p_473->v_collective
        sequence_input[get_global_id(0)], // p_473->global_0_offset
        sequence_input[get_global_id(1)], // p_473->global_1_offset
        sequence_input[get_global_id(2)], // p_473->global_2_offset
        sequence_input[get_local_id(0)], // p_473->local_0_offset
        sequence_input[get_local_id(1)], // p_473->local_1_offset
        sequence_input[get_local_id(2)], // p_473->local_2_offset
        sequence_input[get_group_id(0)], // p_473->group_0_offset
        sequence_input[get_group_id(1)], // p_473->group_1_offset
        sequence_input[get_group_id(2)], // p_473->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_473->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_474 = c_475;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_473);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_473->g_21, "p_473->g_21", print_hash_value);
    transparent_crc(p_473->g_34, "p_473->g_34", print_hash_value);
    transparent_crc(p_473->g_61.f0, "p_473->g_61.f0", print_hash_value);
    transparent_crc(p_473->g_61.f1, "p_473->g_61.f1", print_hash_value);
    transparent_crc(p_473->g_61.f2, "p_473->g_61.f2", print_hash_value);
    transparent_crc(p_473->g_61.f3, "p_473->g_61.f3", print_hash_value);
    transparent_crc(p_473->g_61.f4, "p_473->g_61.f4", print_hash_value);
    transparent_crc(p_473->g_61.f5, "p_473->g_61.f5", print_hash_value);
    transparent_crc(p_473->g_61.f6, "p_473->g_61.f6", print_hash_value);
    transparent_crc(p_473->g_76, "p_473->g_76", print_hash_value);
    transparent_crc(p_473->g_78, "p_473->g_78", print_hash_value);
    transparent_crc(p_473->g_95, "p_473->g_95", print_hash_value);
    transparent_crc(p_473->g_103.s0, "p_473->g_103.s0", print_hash_value);
    transparent_crc(p_473->g_103.s1, "p_473->g_103.s1", print_hash_value);
    transparent_crc(p_473->g_103.s2, "p_473->g_103.s2", print_hash_value);
    transparent_crc(p_473->g_103.s3, "p_473->g_103.s3", print_hash_value);
    transparent_crc(p_473->g_103.s4, "p_473->g_103.s4", print_hash_value);
    transparent_crc(p_473->g_103.s5, "p_473->g_103.s5", print_hash_value);
    transparent_crc(p_473->g_103.s6, "p_473->g_103.s6", print_hash_value);
    transparent_crc(p_473->g_103.s7, "p_473->g_103.s7", print_hash_value);
    transparent_crc(p_473->g_103.s8, "p_473->g_103.s8", print_hash_value);
    transparent_crc(p_473->g_103.s9, "p_473->g_103.s9", print_hash_value);
    transparent_crc(p_473->g_103.sa, "p_473->g_103.sa", print_hash_value);
    transparent_crc(p_473->g_103.sb, "p_473->g_103.sb", print_hash_value);
    transparent_crc(p_473->g_103.sc, "p_473->g_103.sc", print_hash_value);
    transparent_crc(p_473->g_103.sd, "p_473->g_103.sd", print_hash_value);
    transparent_crc(p_473->g_103.se, "p_473->g_103.se", print_hash_value);
    transparent_crc(p_473->g_103.sf, "p_473->g_103.sf", print_hash_value);
    transparent_crc(p_473->g_118, "p_473->g_118", print_hash_value);
    transparent_crc(p_473->g_125, "p_473->g_125", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_473->g_126[i][j], "p_473->g_126[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_473->g_128, "p_473->g_128", print_hash_value);
    transparent_crc(p_473->g_143, "p_473->g_143", print_hash_value);
    transparent_crc(p_473->g_146, "p_473->g_146", print_hash_value);
    transparent_crc(p_473->g_161, "p_473->g_161", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_473->g_167[i], "p_473->g_167[i]", print_hash_value);

    }
    transparent_crc(p_473->g_227.x, "p_473->g_227.x", print_hash_value);
    transparent_crc(p_473->g_227.y, "p_473->g_227.y", print_hash_value);
    transparent_crc(p_473->g_237.f0, "p_473->g_237.f0", print_hash_value);
    transparent_crc(p_473->g_237.f1, "p_473->g_237.f1", print_hash_value);
    transparent_crc(p_473->g_237.f2, "p_473->g_237.f2", print_hash_value);
    transparent_crc(p_473->g_237.f3, "p_473->g_237.f3", print_hash_value);
    transparent_crc(p_473->g_237.f4, "p_473->g_237.f4", print_hash_value);
    transparent_crc(p_473->g_237.f5, "p_473->g_237.f5", print_hash_value);
    transparent_crc(p_473->g_237.f6, "p_473->g_237.f6", print_hash_value);
    transparent_crc(p_473->g_243.s0, "p_473->g_243.s0", print_hash_value);
    transparent_crc(p_473->g_243.s1, "p_473->g_243.s1", print_hash_value);
    transparent_crc(p_473->g_243.s2, "p_473->g_243.s2", print_hash_value);
    transparent_crc(p_473->g_243.s3, "p_473->g_243.s3", print_hash_value);
    transparent_crc(p_473->g_243.s4, "p_473->g_243.s4", print_hash_value);
    transparent_crc(p_473->g_243.s5, "p_473->g_243.s5", print_hash_value);
    transparent_crc(p_473->g_243.s6, "p_473->g_243.s6", print_hash_value);
    transparent_crc(p_473->g_243.s7, "p_473->g_243.s7", print_hash_value);
    transparent_crc(p_473->g_284.f0, "p_473->g_284.f0", print_hash_value);
    transparent_crc(p_473->g_284.f1, "p_473->g_284.f1", print_hash_value);
    transparent_crc(p_473->g_284.f2, "p_473->g_284.f2", print_hash_value);
    transparent_crc(p_473->g_284.f3, "p_473->g_284.f3", print_hash_value);
    transparent_crc(p_473->g_284.f4, "p_473->g_284.f4", print_hash_value);
    transparent_crc(p_473->g_284.f5, "p_473->g_284.f5", print_hash_value);
    transparent_crc(p_473->g_284.f6, "p_473->g_284.f6", print_hash_value);
    transparent_crc(p_473->g_353.s0, "p_473->g_353.s0", print_hash_value);
    transparent_crc(p_473->g_353.s1, "p_473->g_353.s1", print_hash_value);
    transparent_crc(p_473->g_353.s2, "p_473->g_353.s2", print_hash_value);
    transparent_crc(p_473->g_353.s3, "p_473->g_353.s3", print_hash_value);
    transparent_crc(p_473->g_353.s4, "p_473->g_353.s4", print_hash_value);
    transparent_crc(p_473->g_353.s5, "p_473->g_353.s5", print_hash_value);
    transparent_crc(p_473->g_353.s6, "p_473->g_353.s6", print_hash_value);
    transparent_crc(p_473->g_353.s7, "p_473->g_353.s7", print_hash_value);
    transparent_crc(p_473->g_354.x, "p_473->g_354.x", print_hash_value);
    transparent_crc(p_473->g_354.y, "p_473->g_354.y", print_hash_value);
    transparent_crc(p_473->g_355.f0, "p_473->g_355.f0", print_hash_value);
    transparent_crc(p_473->g_355.f1, "p_473->g_355.f1", print_hash_value);
    transparent_crc(p_473->g_355.f2, "p_473->g_355.f2", print_hash_value);
    transparent_crc(p_473->g_355.f3, "p_473->g_355.f3", print_hash_value);
    transparent_crc(p_473->g_355.f4, "p_473->g_355.f4", print_hash_value);
    transparent_crc(p_473->g_355.f5, "p_473->g_355.f5", print_hash_value);
    transparent_crc(p_473->g_355.f6, "p_473->g_355.f6", print_hash_value);
    transparent_crc(p_473->g_361.f0, "p_473->g_361.f0", print_hash_value);
    transparent_crc(p_473->g_361.f1, "p_473->g_361.f1", print_hash_value);
    transparent_crc(p_473->g_361.f2, "p_473->g_361.f2", print_hash_value);
    transparent_crc(p_473->g_361.f3, "p_473->g_361.f3", print_hash_value);
    transparent_crc(p_473->g_361.f4, "p_473->g_361.f4", print_hash_value);
    transparent_crc(p_473->g_361.f5, "p_473->g_361.f5", print_hash_value);
    transparent_crc(p_473->g_361.f6, "p_473->g_361.f6", print_hash_value);
    transparent_crc(p_473->g_363.f0, "p_473->g_363.f0", print_hash_value);
    transparent_crc(p_473->g_363.f1, "p_473->g_363.f1", print_hash_value);
    transparent_crc(p_473->g_363.f2, "p_473->g_363.f2", print_hash_value);
    transparent_crc(p_473->g_363.f3, "p_473->g_363.f3", print_hash_value);
    transparent_crc(p_473->g_363.f4, "p_473->g_363.f4", print_hash_value);
    transparent_crc(p_473->g_363.f5, "p_473->g_363.f5", print_hash_value);
    transparent_crc(p_473->g_363.f6, "p_473->g_363.f6", print_hash_value);
    transparent_crc(p_473->g_366.s0, "p_473->g_366.s0", print_hash_value);
    transparent_crc(p_473->g_366.s1, "p_473->g_366.s1", print_hash_value);
    transparent_crc(p_473->g_366.s2, "p_473->g_366.s2", print_hash_value);
    transparent_crc(p_473->g_366.s3, "p_473->g_366.s3", print_hash_value);
    transparent_crc(p_473->g_366.s4, "p_473->g_366.s4", print_hash_value);
    transparent_crc(p_473->g_366.s5, "p_473->g_366.s5", print_hash_value);
    transparent_crc(p_473->g_366.s6, "p_473->g_366.s6", print_hash_value);
    transparent_crc(p_473->g_366.s7, "p_473->g_366.s7", print_hash_value);
    transparent_crc(p_473->g_366.s8, "p_473->g_366.s8", print_hash_value);
    transparent_crc(p_473->g_366.s9, "p_473->g_366.s9", print_hash_value);
    transparent_crc(p_473->g_366.sa, "p_473->g_366.sa", print_hash_value);
    transparent_crc(p_473->g_366.sb, "p_473->g_366.sb", print_hash_value);
    transparent_crc(p_473->g_366.sc, "p_473->g_366.sc", print_hash_value);
    transparent_crc(p_473->g_366.sd, "p_473->g_366.sd", print_hash_value);
    transparent_crc(p_473->g_366.se, "p_473->g_366.se", print_hash_value);
    transparent_crc(p_473->g_366.sf, "p_473->g_366.sf", print_hash_value);
    transparent_crc(p_473->g_371.s0, "p_473->g_371.s0", print_hash_value);
    transparent_crc(p_473->g_371.s1, "p_473->g_371.s1", print_hash_value);
    transparent_crc(p_473->g_371.s2, "p_473->g_371.s2", print_hash_value);
    transparent_crc(p_473->g_371.s3, "p_473->g_371.s3", print_hash_value);
    transparent_crc(p_473->g_371.s4, "p_473->g_371.s4", print_hash_value);
    transparent_crc(p_473->g_371.s5, "p_473->g_371.s5", print_hash_value);
    transparent_crc(p_473->g_371.s6, "p_473->g_371.s6", print_hash_value);
    transparent_crc(p_473->g_371.s7, "p_473->g_371.s7", print_hash_value);
    transparent_crc(p_473->g_371.s8, "p_473->g_371.s8", print_hash_value);
    transparent_crc(p_473->g_371.s9, "p_473->g_371.s9", print_hash_value);
    transparent_crc(p_473->g_371.sa, "p_473->g_371.sa", print_hash_value);
    transparent_crc(p_473->g_371.sb, "p_473->g_371.sb", print_hash_value);
    transparent_crc(p_473->g_371.sc, "p_473->g_371.sc", print_hash_value);
    transparent_crc(p_473->g_371.sd, "p_473->g_371.sd", print_hash_value);
    transparent_crc(p_473->g_371.se, "p_473->g_371.se", print_hash_value);
    transparent_crc(p_473->g_371.sf, "p_473->g_371.sf", print_hash_value);
    transparent_crc(p_473->g_395, "p_473->g_395", print_hash_value);
    transparent_crc(p_473->g_399, "p_473->g_399", print_hash_value);
    transparent_crc(p_473->g_407.s0, "p_473->g_407.s0", print_hash_value);
    transparent_crc(p_473->g_407.s1, "p_473->g_407.s1", print_hash_value);
    transparent_crc(p_473->g_407.s2, "p_473->g_407.s2", print_hash_value);
    transparent_crc(p_473->g_407.s3, "p_473->g_407.s3", print_hash_value);
    transparent_crc(p_473->g_407.s4, "p_473->g_407.s4", print_hash_value);
    transparent_crc(p_473->g_407.s5, "p_473->g_407.s5", print_hash_value);
    transparent_crc(p_473->g_407.s6, "p_473->g_407.s6", print_hash_value);
    transparent_crc(p_473->g_407.s7, "p_473->g_407.s7", print_hash_value);
    transparent_crc(p_473->g_407.s8, "p_473->g_407.s8", print_hash_value);
    transparent_crc(p_473->g_407.s9, "p_473->g_407.s9", print_hash_value);
    transparent_crc(p_473->g_407.sa, "p_473->g_407.sa", print_hash_value);
    transparent_crc(p_473->g_407.sb, "p_473->g_407.sb", print_hash_value);
    transparent_crc(p_473->g_407.sc, "p_473->g_407.sc", print_hash_value);
    transparent_crc(p_473->g_407.sd, "p_473->g_407.sd", print_hash_value);
    transparent_crc(p_473->g_407.se, "p_473->g_407.se", print_hash_value);
    transparent_crc(p_473->g_407.sf, "p_473->g_407.sf", print_hash_value);
    transparent_crc(p_473->g_413, "p_473->g_413", print_hash_value);
    transparent_crc(p_473->g_416.f0, "p_473->g_416.f0", print_hash_value);
    transparent_crc(p_473->g_416.f1, "p_473->g_416.f1", print_hash_value);
    transparent_crc(p_473->g_416.f2, "p_473->g_416.f2", print_hash_value);
    transparent_crc(p_473->g_416.f3, "p_473->g_416.f3", print_hash_value);
    transparent_crc(p_473->g_416.f4, "p_473->g_416.f4", print_hash_value);
    transparent_crc(p_473->g_416.f5, "p_473->g_416.f5", print_hash_value);
    transparent_crc(p_473->g_416.f6, "p_473->g_416.f6", print_hash_value);
    transparent_crc(p_473->g_417.f0, "p_473->g_417.f0", print_hash_value);
    transparent_crc(p_473->g_417.f1, "p_473->g_417.f1", print_hash_value);
    transparent_crc(p_473->g_417.f2, "p_473->g_417.f2", print_hash_value);
    transparent_crc(p_473->g_417.f3, "p_473->g_417.f3", print_hash_value);
    transparent_crc(p_473->g_417.f4, "p_473->g_417.f4", print_hash_value);
    transparent_crc(p_473->g_417.f5, "p_473->g_417.f5", print_hash_value);
    transparent_crc(p_473->g_417.f6, "p_473->g_417.f6", print_hash_value);
    transparent_crc(p_473->v_collective, "p_473->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 23; i++)
            transparent_crc(p_473->g_special_values[i + 23 * get_linear_group_id()], "p_473->g_special_values[i + 23 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_473->l_comm_values[get_linear_local_id()], "p_473->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_473->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_473->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
