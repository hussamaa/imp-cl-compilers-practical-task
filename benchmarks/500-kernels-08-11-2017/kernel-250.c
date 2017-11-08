// --atomics 59 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 26,96,2 -l 1,12,2
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

__constant uint32_t permutations[10][24] = {
{20,7,5,0,6,9,16,3,21,17,8,18,22,12,2,15,11,23,13,10,19,14,4,1}, // permutation 0
{15,17,13,23,16,20,9,3,12,7,19,0,11,5,4,6,14,21,8,22,18,2,1,10}, // permutation 1
{14,7,12,2,21,18,5,4,9,20,11,23,19,1,10,13,16,8,17,3,0,6,15,22}, // permutation 2
{19,0,3,20,4,13,1,6,2,14,11,21,18,15,10,16,9,22,17,7,23,5,8,12}, // permutation 3
{4,16,5,12,14,23,7,3,1,9,15,2,10,17,22,21,18,8,20,11,0,19,6,13}, // permutation 4
{13,23,12,4,11,7,10,9,3,19,15,22,0,8,18,2,17,16,20,1,5,21,14,6}, // permutation 5
{1,22,9,2,23,6,21,19,13,8,7,18,20,3,17,11,0,12,4,15,16,5,10,14}, // permutation 6
{11,10,21,23,19,1,7,16,20,15,2,9,12,5,17,14,6,4,18,22,8,0,3,13}, // permutation 7
{20,5,23,15,3,18,0,17,21,6,4,13,16,8,10,14,7,11,19,22,9,1,12,2}, // permutation 8
{20,13,0,16,18,7,2,14,12,6,3,10,1,23,17,21,11,4,5,8,15,22,9,19} // permutation 9
};

// Seed: 2120720406

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   int8_t  f1;
   uint32_t  f2;
   int8_t  f3;
   uint8_t  f4;
   uint64_t  f5;
};

struct S1 {
   int64_t  f0;
   struct S0  f1;
   uint32_t  f2;
   volatile int64_t  f3;
   volatile uint64_t  f4;
   uint32_t  f5;
};

struct S2 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    int32_t g_14;
    int16_t g_17;
    int16_t g_19;
    int32_t g_20;
    uint32_t g_61;
    int32_t g_66[2][6];
    uint64_t g_92;
    struct S0 g_109[9][2][5];
    uint16_t g_116[2][2];
    int32_t *g_151;
    uint64_t *g_161;
    uint64_t **g_160;
    int32_t *g_293;
    struct S1 g_297;
    VECTOR(int32_t, 16) g_307;
    struct S1 g_325;
    VECTOR(int32_t, 4) g_332;
    int32_t g_335[8][4];
    int32_t g_337;
    struct S1 g_382;
    volatile struct S1 g_385;
    volatile struct S1 *g_384;
    int32_t g_407;
    volatile struct S1 g_409;
    VECTOR(uint16_t, 2) g_423;
    VECTOR(uint16_t, 4) g_425;
    int64_t g_427[7];
    int16_t g_429;
    volatile struct S1 g_430;
    volatile uint16_t g_442;
    int32_t **g_458[4][6][3];
    int32_t ***g_457;
    struct S0 * volatile g_459;
    uint32_t g_488;
    uint8_t *g_496;
    volatile struct S1 g_554;
    struct S0 * volatile g_557[5][5][10];
    struct S0 * volatile g_558[6][2];
    VECTOR(int8_t, 16) g_586;
    volatile struct S1 * volatile * volatile g_639;
    volatile struct S1 * volatile * volatile * volatile g_638;
    int32_t * volatile g_641[10][10][1];
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
int32_t  func_1(struct S2 * p_643);
int32_t  func_21(int32_t  p_22, int32_t  p_23, int16_t * p_24, int16_t * p_25, uint8_t  p_26, struct S2 * p_643);
int16_t * func_28(int16_t * p_29, int32_t  p_30, uint8_t  p_31, int64_t  p_32, struct S0  p_33, struct S2 * p_643);
uint8_t  func_34(uint16_t  p_35, uint16_t  p_36, int32_t * p_37, struct S2 * p_643);
uint64_t  func_45(int16_t  p_46, int32_t * p_47, struct S2 * p_643);
int16_t  func_48(int16_t * p_49, int32_t  p_50, int8_t  p_51, uint64_t  p_52, struct S2 * p_643);
int16_t * func_53(int32_t * p_54, struct S0  p_55, struct S2 * p_643);
int32_t * func_56(uint32_t  p_57, uint16_t  p_58, uint32_t  p_59, struct S2 * p_643);
int32_t  func_75(struct S0  p_76, uint16_t  p_77, uint32_t * p_78, int64_t  p_79, struct S2 * p_643);
struct S0  func_80(int64_t  p_81, int32_t * p_82, int64_t  p_83, struct S2 * p_643);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_643->g_4 p_643->g_14 p_643->g_3 p_643->g_19 p_643->g_20 p_643->g_2 p_643->l_comm_values p_643->g_61 p_643->g_comm_values p_643->g_92 p_643->g_109 p_643->g_116 p_643->g_17 p_643->g_307 p_643->g_151 p_643->g_66 p_643->g_297.f1.f5 p_643->g_332 p_643->g_335 p_643->g_325.f0 p_643->g_384 p_643->g_297.f1.f2 p_643->g_325.f1 p_643->g_325.f4 p_643->g_382.f1.f0 p_643->g_297.f1.f1 p_643->g_382.f5 p_643->g_385.f2 p_643->g_385 p_643->g_427 p_643->g_430 p_643->g_442 p_643->g_457 p_643->g_459 p_643->g_382.f3 p_643->g_161 p_643->g_382.f1.f5 p_643->g_496 p_643->g_409.f0 p_643->g_409.f1.f3 p_643->g_382.f0 p_643->g_409.f4 p_643->g_638 p_643->g_297.f1.f4
 * writes: p_643->g_4 p_643->g_14 p_643->g_17 p_643->g_19 p_643->g_20 p_643->g_61 p_643->g_66 p_643->g_92 p_643->g_116 p_643->g_151 p_643->g_160 p_643->g_293 p_643->g_109 p_643->g_335 p_643->g_337 p_643->g_307 p_643->g_407 p_643->g_382.f1.f4 p_643->g_409 p_643->g_427 p_643->g_385 p_643->g_382.f1.f0 p_643->g_442 p_643->g_297.f1 p_643->g_382.f0 p_643->g_554 p_643->g_488
 */
int32_t  func_1(struct S2 * p_643)
{ /* block id: 4 */
    int32_t l_11 = 0x3026D8D3L;
    int16_t *l_27 = &p_643->g_19;
    VECTOR(uint64_t, 4) l_44 = (VECTOR(uint64_t, 4))(0xC73EE49CE5708880L, (VECTOR(uint64_t, 2))(0xC73EE49CE5708880L, 0xE101EAE883781CDFL), 0xE101EAE883781CDFL);
    uint32_t *l_60 = &p_643->g_61;
    struct S0 l_321 = {0x06815ADCL,-1L,0x9F384445L,0x10L,0x91L,0xDB20D380EEE377AAL};
    int32_t *l_642 = &l_11;
    int i;
    for (p_643->g_4 = 0; (p_643->g_4 <= 2); p_643->g_4++)
    { /* block id: 7 */
        int32_t *l_12 = (void*)0;
        int32_t *l_13[5];
        int16_t *l_18 = &p_643->g_19;
        int i;
        for (i = 0; i < 5; i++)
            l_13[i] = &p_643->g_14;
        p_643->g_20 |= (((safe_sub_func_uint32_t_u_u(1UL, (l_11 = (p_643->g_17 = (safe_div_func_int32_t_s_s((p_643->g_14 ^= l_11), (safe_mod_func_uint32_t_u_u((0x74BE76D238E486AEL < 0x3EC93CC254292978L), 0x7068CD54L)))))))) || (&p_643->g_4 == (void*)0)) ^ ((*l_18) |= p_643->g_3));
    }
    (*l_642) = func_21(p_643->g_4, p_643->g_14, l_27, func_28(l_27, p_643->g_2, func_34((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((((VECTOR(uint64_t, 4))(l_44.wzxw)).x < func_45((p_643->l_comm_values[(safe_mod_func_uint32_t_u_u(p_643->tid, 24))] , ((((func_48(func_53(func_56((++(*l_60)), p_643->g_4, p_643->g_20, p_643), l_321, p_643), l_44.w, l_321.f0, p_643->g_297.f1.f5, p_643) , l_27) != &p_643->g_19) ^ p_643->g_325.f0) != p_643->g_comm_values[p_643->tid])), &p_643->g_4, p_643)) & l_321.f4) || l_44.y), 15)), 0x2BDCL)), 5)), l_321.f4, &p_643->g_14, p_643), p_643->g_297.f1.f2, p_643->g_325.f1, p_643), l_321.f4, p_643);
    return p_643->g_297.f1.f4;
}


/* ------------------------------------------ */
/* 
 * reads : p_643->g_384 p_643->g_385 p_643->g_19 p_643->g_151 p_643->g_427 p_643->g_17 p_643->g_430 p_643->g_442 p_643->g_457 p_643->g_109 p_643->g_459 p_643->g_382.f3 p_643->g_66 p_643->g_161 p_643->g_382.f1.f5 p_643->g_496 p_643->g_297.f1.f2 p_643->g_409.f0 p_643->g_335 p_643->g_409.f1.f3 p_643->g_61 p_643->g_382.f0 p_643->g_comm_values p_643->g_4 p_643->g_92 p_643->g_116 p_643->g_14 p_643->g_297.f1.f5 p_643->g_409.f4 p_643->g_325.f1.f5 p_643->g_382.f1.f0 p_643->g_297.f1.f1 p_643->g_382.f5 p_643->g_638
 * writes: p_643->g_409 p_643->g_19 p_643->g_66 p_643->g_427 p_643->g_17 p_643->g_385 p_643->g_382.f1.f0 p_643->g_442 p_643->g_297.f1 p_643->g_61 p_643->g_109.f5 p_643->g_382.f0 p_643->g_554 p_643->g_488 p_643->g_92 p_643->g_116 p_643->g_151 p_643->g_160 p_643->g_293 p_643->g_109 p_643->g_14 p_643->g_407 p_643->g_382.f1.f4
 */
int32_t  func_21(int32_t  p_22, int32_t  p_23, int16_t * p_24, int16_t * p_25, uint8_t  p_26, struct S2 * p_643)
{ /* block id: 176 */
    VECTOR(uint16_t, 8) l_416 = (VECTOR(uint16_t, 8))(0x8622L, (VECTOR(uint16_t, 4))(0x8622L, (VECTOR(uint16_t, 2))(0x8622L, 7UL), 7UL), 7UL, 0x8622L, 7UL);
    VECTOR(uint16_t, 4) l_417 = (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 1UL), 1UL);
    int32_t l_436 = 1L;
    int32_t l_437 = 0x28437FD5L;
    int32_t l_438 = (-7L);
    int32_t l_448 = 0x7744D1FCL;
    int32_t l_449 = 0x38CE6E16L;
    int32_t l_450 = 0x6B5ED568L;
    int32_t *l_454 = &l_437;
    int32_t **l_456[7] = {(void*)0,&l_454,(void*)0,(void*)0,&l_454,(void*)0,(void*)0};
    int32_t ***l_455 = &l_456[3];
    int32_t *l_463 = (void*)0;
    uint8_t l_494 = 0x7DL;
    uint64_t *l_498 = &p_643->g_297.f1.f5;
    int64_t l_500 = (-1L);
    uint32_t l_580 = 0xE8466EE7L;
    uint32_t l_600 = 4UL;
    uint16_t l_603 = 0x22C0L;
    int16_t *l_612 = &p_643->g_19;
    struct S1 *l_637 = &p_643->g_325;
    struct S1 **l_636[9] = {(void*)0,&l_637,(void*)0,(void*)0,&l_637,(void*)0,(void*)0,&l_637,(void*)0};
    struct S1 ***l_635 = &l_636[7];
    int32_t l_640 = (-8L);
    int i;
    p_643->g_409 = (*p_643->g_384);
    for (p_643->g_19 = (-4); (p_643->g_19 <= 26); p_643->g_19++)
    { /* block id: 180 */
        VECTOR(int32_t, 2) l_420 = (VECTOR(int32_t, 2))((-4L), 0x1B291B10L);
        VECTOR(uint16_t, 2) l_424 = (VECTOR(uint16_t, 2))(1UL, 0xBE20L);
        int16_t *l_428[9][7][3] = {{{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429}},{{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429}},{{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429}},{{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429}},{{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429}},{{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429}},{{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429}},{{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429}},{{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429},{&p_643->g_429,&p_643->g_19,&p_643->g_429}}};
        int32_t l_440 = 8L;
        int16_t l_441 = 0L;
        uint32_t l_451 = 1UL;
        uint16_t l_495 = 0xCA76L;
        uint64_t *l_499 = &p_643->g_297.f1.f5;
        int32_t l_574 = 0x1AA20C2DL;
        int i, j, k;
        if ((((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(p_23, ((*p_643->g_151) = p_26))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 2))(0xA831L, 1UL)).xxxxxxxyxxxxxyyy, ((VECTOR(uint16_t, 16))(l_416.s0762321337266434))))).s97b0, (uint16_t)GROUP_DIVERGE(1, 1)))).even, ((VECTOR(uint16_t, 8))(l_417.zwwxwxww)).s12))), 65531UL, 0x8469L)).y)) > ((l_420.x = (p_643->g_17 &= (safe_rshift_func_uint8_t_u_u(0x1FL, (((p_643->g_427[2] |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(0x5D5EF782L, 0x4BFBA2E1L)).yyxy, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))((+(p_23 , (-2L))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_420.yyxxyxyy)).s61, ((VECTOR(int32_t, 8))((safe_add_func_int16_t_s_s((0x1540AEF8L & ((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))(p_643->g_423.xyyx)), ((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 16))(l_424.yyyyxyyxyxyxyxxx)), ((VECTOR(uint16_t, 2))(p_643->g_425.xy)).yxxxyyxxyxyxyyxy))).sa187))).w), (0x65B62D307DB1A815L || (safe_unary_minus_func_uint64_t_u((((l_416.s7 == (0x4BB794DFL != p_22)) >= p_26) , GROUP_DIVERGE(2, 1))))))), 0x1BF1FD92L, l_424.y, p_22, ((VECTOR(int32_t, 4))(0x01D64C47L)))).s20, ((VECTOR(int32_t, 2))(0x39133AEEL))))), 0x085771A7L, 0x0B0F517BL)), (-1L), 1L, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 4))(1L)), l_420.x, 5L, 7L)).sf4, ((VECTOR(int32_t, 2))(1L))))).xyxx))).xwzxwzzwwyyyyxwx, (int32_t)l_416.s4))))).s2) , p_25) == (void*)0))))) > p_22)) >= p_643->g_385.f1.f0))
        { /* block id: 185 */
            int32_t l_439 = (-1L);
            int32_t l_445 = 0L;
            int32_t l_446[5][6][7] = {{{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L}},{{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L}},{{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L}},{{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L}},{{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L},{(-7L),(-10L),(-8L),9L,(-1L),1L,0x7FB4E142L}}};
            int i, j, k;
            (*p_643->g_384) = p_643->g_430;
            atomic_xor(&p_643->g_atomic_reduction[get_linear_group_id()], 1L + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_643->v_collective += p_643->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            for (p_643->g_382.f1.f0 = 0; (p_643->g_382.f1.f0 > 37); ++p_643->g_382.f1.f0)
            { /* block id: 190 */
                int32_t *l_433 = &p_643->g_14;
                int32_t *l_434 = (void*)0;
                int32_t *l_435[6];
                int32_t l_447 = 0x34FECA43L;
                uint8_t l_460 = 0x6EL;
                int i;
                for (i = 0; i < 6; i++)
                    l_435[i] = &p_643->g_14;
                --p_643->g_442;
                ++l_451;
                (*p_643->g_459) = func_80(l_436, l_454, (l_455 == p_643->g_457), p_643);
                ++l_460;
            }
        }
        else
        { /* block id: 196 */
            int32_t *l_464 = (void*)0;
            l_464 = (p_643->g_382.f3 , l_463);
            (*p_643->g_151) &= (-1L);
            for (p_643->g_61 = 0; (p_643->g_61 != 40); p_643->g_61 = safe_add_func_uint32_t_u_u(p_643->g_61, 1))
            { /* block id: 201 */
                VECTOR(int32_t, 4) l_475 = (VECTOR(int32_t, 4))(0x18B67A2FL, (VECTOR(int32_t, 2))(0x18B67A2FL, 0x1BAEE764L), 0x1BAEE764L);
                uint8_t *l_484 = &p_643->g_109[7][1][1].f4;
                uint32_t *l_487 = &p_643->g_488;
                uint8_t *l_493 = &p_643->g_297.f1.f4;
                uint8_t **l_497 = &l_484;
                int i;
                l_420.x = ((((safe_add_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((((((((*p_643->g_161) = (*p_643->g_161)) , p_23) < (safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((((*l_497) = (((*p_643->g_151) = (((*l_454) = ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_475.wxxwzwyxwzzwxxxy)))).s4734, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(0x1F78BAA9L, 0L)).yxyxxyyyxyyxyyxy, ((VECTOR(int32_t, 8))((((safe_sub_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s((((*l_484) = 0x58L) <= ((((*p_643->g_384) , ((p_643->g_307.se | 0x6C8E058CF4827078L) , (*p_643->g_384))) , p_26) >= (safe_add_func_uint32_t_u_u(((*l_487)--), (safe_rshift_func_uint8_t_u_u(((*l_493) &= p_22), p_643->g_20)))))), p_643->g_425.x)), 1UL)), 9L)) > p_643->g_382.f2), l_494)) <= p_643->g_66[1][1]) | p_26), 0x0481E898L, l_495, 9L, 0x3199B08EL, ((VECTOR(int32_t, 2))(0x050C3239L)), 0x0E3D09E4L)).s3011774065312155))).s02ae, ((VECTOR(int32_t, 4))(0x466BED02L))))), ((VECTOR(int32_t, 4))((-7L)))))).w) ^ p_643->g_382.f1.f5)) , p_643->g_496)) == (void*)0), l_424.x)) | 0L), 0UL))) || 0x2931ED3C673B87A0L) & p_643->g_297.f1.f2) | 0x4DL), p_643->g_297.f1.f2)) , p_643->g_409.f0), p_22)) , l_498) == l_499) <= 8L);
            }
        }
        (*p_643->g_151) = l_500;
        for (l_450 = 6; (l_450 > (-13)); --l_450)
        { /* block id: 215 */
            uint8_t l_505[9][6][4] = {{{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL}},{{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL}},{{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL}},{{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL}},{{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL}},{{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL}},{{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL}},{{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL}},{{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL},{0UL,0x62L,1UL,1UL}}};
            struct S0 l_560 = {4294967289UL,1L,0xEEE66013L,-1L,0UL,18446744073709551615UL};
            int32_t l_577 = 0L;
            int32_t l_579 = 0x10717167L;
            int32_t *l_602[4][8][8] = {{{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577}},{{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577}},{{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577}},{{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577},{&l_577,&l_577,&l_440,&l_437,(void*)0,&l_437,&l_440,&l_577}}};
            int32_t *l_606 = (void*)0;
            int i, j, k;
            for (p_643->g_382.f0 = 0; (p_643->g_382.f0 >= (-16)); --p_643->g_382.f0)
            { /* block id: 218 */
                int16_t l_547 = 0x06FFL;
                VECTOR(int32_t, 16) l_578 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5D5CB4FAL), 0x5D5CB4FAL), 0x5D5CB4FAL, 0L, 0x5D5CB4FAL, (VECTOR(int32_t, 2))(0L, 0x5D5CB4FAL), (VECTOR(int32_t, 2))(0L, 0x5D5CB4FAL), 0L, 0x5D5CB4FAL, 0L, 0x5D5CB4FAL);
                VECTOR(int16_t, 8) l_590 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3F8CL), 0x3F8CL), 0x3F8CL, 1L, 0x3F8CL);
                int32_t l_591 = 0L;
                int16_t l_601[7] = {0x0B9CL,3L,0x0B9CL,0x0B9CL,3L,0x0B9CL,0x0B9CL};
                int i;
                if (l_505[0][2][0])
                { /* block id: 219 */
                    uint16_t l_555 = 1UL;
                    int32_t *l_556 = (void*)0;
                    if ((atomic_inc(&p_643->l_atomic_input[42]) == 0))
                    { /* block id: 221 */
                        VECTOR(uint32_t, 8) l_506 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
                        VECTOR(int32_t, 4) l_507 = (VECTOR(int32_t, 4))(0x3A62F8C0L, (VECTOR(int32_t, 2))(0x3A62F8C0L, 0x27F4BFF0L), 0x27F4BFF0L);
                        VECTOR(int32_t, 2) l_508 = (VECTOR(int32_t, 2))((-7L), 0x2062FED1L);
                        VECTOR(uint32_t, 2) l_509 = (VECTOR(uint32_t, 2))(1UL, 0UL);
                        VECTOR(int32_t, 4) l_510 = (VECTOR(int32_t, 4))(0x49682E14L, (VECTOR(int32_t, 2))(0x49682E14L, 0x66FD3C82L), 0x66FD3C82L);
                        VECTOR(uint32_t, 4) l_511 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL);
                        VECTOR(int32_t, 8) l_512 = (VECTOR(int32_t, 8))(0x2049BE55L, (VECTOR(int32_t, 4))(0x2049BE55L, (VECTOR(int32_t, 2))(0x2049BE55L, (-7L)), (-7L)), (-7L), 0x2049BE55L, (-7L));
                        uint32_t l_513 = 4294967290UL;
                        VECTOR(uint32_t, 16) l_514 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
                        uint32_t l_515 = 0x1E8451CDL;
                        VECTOR(uint32_t, 4) l_518 = (VECTOR(uint32_t, 4))(0x135E6720L, (VECTOR(uint32_t, 2))(0x135E6720L, 0x04CB66E3L), 0x04CB66E3L);
                        VECTOR(uint32_t, 16) l_519 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint32_t, 2))(1UL, 0UL), (VECTOR(uint32_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
                        VECTOR(uint32_t, 16) l_520 = (VECTOR(uint32_t, 16))(0xC5D0CD93L, (VECTOR(uint32_t, 4))(0xC5D0CD93L, (VECTOR(uint32_t, 2))(0xC5D0CD93L, 0x2CF50E25L), 0x2CF50E25L), 0x2CF50E25L, 0xC5D0CD93L, 0x2CF50E25L, (VECTOR(uint32_t, 2))(0xC5D0CD93L, 0x2CF50E25L), (VECTOR(uint32_t, 2))(0xC5D0CD93L, 0x2CF50E25L), 0xC5D0CD93L, 0x2CF50E25L, 0xC5D0CD93L, 0x2CF50E25L);
                        int32_t l_521 = 0x5B23885CL;
                        uint64_t l_522[8] = {0xEA912E9C02041ED4L,0xC6BC798F244A1FC7L,0xEA912E9C02041ED4L,0xEA912E9C02041ED4L,0xC6BC798F244A1FC7L,0xEA912E9C02041ED4L,0xEA912E9C02041ED4L,0xC6BC798F244A1FC7L};
                        struct S1 l_523[6] = {{2L,{0x9C7CE600L,0x09L,0xD694EB5CL,1L,255UL,6UL},0x69AE1EECL,0x0C70BFCDA6595CA0L,0x55FF5114BE83A3D9L,0x0F7E07F0L},{0x4B8E2AB8E7DF4700L,{4294967293UL,0x50L,6UL,-1L,3UL,18446744073709551612UL},0x08684959L,0x57D906862827F972L,0x4C72EC67F0F5DD57L,0x6D7B29A5L},{2L,{0x9C7CE600L,0x09L,0xD694EB5CL,1L,255UL,6UL},0x69AE1EECL,0x0C70BFCDA6595CA0L,0x55FF5114BE83A3D9L,0x0F7E07F0L},{2L,{0x9C7CE600L,0x09L,0xD694EB5CL,1L,255UL,6UL},0x69AE1EECL,0x0C70BFCDA6595CA0L,0x55FF5114BE83A3D9L,0x0F7E07F0L},{0x4B8E2AB8E7DF4700L,{4294967293UL,0x50L,6UL,-1L,3UL,18446744073709551612UL},0x08684959L,0x57D906862827F972L,0x4C72EC67F0F5DD57L,0x6D7B29A5L},{2L,{0x9C7CE600L,0x09L,0xD694EB5CL,1L,255UL,6UL},0x69AE1EECL,0x0C70BFCDA6595CA0L,0x55FF5114BE83A3D9L,0x0F7E07F0L}};
                        int64_t l_524 = 0x6DF211B1A18C7767L;
                        int16_t l_525 = 0x739DL;
                        VECTOR(uint32_t, 16) l_526 = (VECTOR(uint32_t, 16))(6UL, (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 4294967290UL), 4294967290UL), 4294967290UL, 6UL, 4294967290UL, (VECTOR(uint32_t, 2))(6UL, 4294967290UL), (VECTOR(uint32_t, 2))(6UL, 4294967290UL), 6UL, 4294967290UL, 6UL, 4294967290UL);
                        VECTOR(uint32_t, 16) l_527 = (VECTOR(uint32_t, 16))(0xBB40DB9EL, (VECTOR(uint32_t, 4))(0xBB40DB9EL, (VECTOR(uint32_t, 2))(0xBB40DB9EL, 0x7124F79EL), 0x7124F79EL), 0x7124F79EL, 0xBB40DB9EL, 0x7124F79EL, (VECTOR(uint32_t, 2))(0xBB40DB9EL, 0x7124F79EL), (VECTOR(uint32_t, 2))(0xBB40DB9EL, 0x7124F79EL), 0xBB40DB9EL, 0x7124F79EL, 0xBB40DB9EL, 0x7124F79EL);
                        int32_t l_528 = 0x107A8459L;
                        VECTOR(int32_t, 8) l_529 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x469B7DA3L), 0x469B7DA3L), 0x469B7DA3L, 0L, 0x469B7DA3L);
                        VECTOR(uint32_t, 8) l_530 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), 4294967295UL, 0UL, 4294967295UL);
                        int32_t l_531 = 1L;
                        VECTOR(uint32_t, 4) l_532 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xA18D548CL), 0xA18D548CL);
                        VECTOR(uint32_t, 2) l_533 = (VECTOR(uint32_t, 2))(0x5DE47ACCL, 0UL);
                        uint16_t l_534 = 0x0993L;
                        uint64_t l_535 = 0x99354117804A507AL;
                        uint64_t l_536 = 0x4514FA17F318FBB2L;
                        uint32_t l_537 = 0x257A144BL;
                        uint8_t l_538 = 9UL;
                        int32_t l_539 = (-1L);
                        uint8_t l_540[3][1][9] = {{{0x23L,0x23L,0xECL,3UL,0x78L,0x34L,0UL,255UL,0UL}},{{0x23L,0x23L,0xECL,3UL,0x78L,0x34L,0UL,255UL,0UL}},{{0x23L,0x23L,0xECL,3UL,0x78L,0x34L,0UL,255UL,0UL}}};
                        struct S1 l_541 = {0x1CE1325CDC1B5F16L,{1UL,4L,4294967295UL,0x7CL,3UL,0x8C0E297089A4B5B1L},0xC5E60AD1L,1L,18446744073709551611UL,9UL};/* VOLATILE GLOBAL l_541 */
                        struct S1 l_542 = {0L,{0xB97B8745L,0L,4294967295UL,0L,0xE5L,18446744073709551615UL},0xC189BE2FL,-1L,0xD842F3DF5D3D0B6EL,0x6BE5B320L};/* VOLATILE GLOBAL l_542 */
                        int i, j, k;
                        l_513 |= (((VECTOR(uint32_t, 16))(8UL, ((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 2))(4294967295UL, 7UL)).xxyyxxyy))), 0x22C3F23EL, 0x2E243EFEL, 0x99359B6DL, ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 8))(0xC5E826D4L, ((VECTOR(uint32_t, 4))(l_506.s7572)), ((VECTOR(uint32_t, 2))(0UL, 0x0F78311CL)), 1UL)).s74, ((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_507.yxzwxwzwzxxxwyxy)))).s7c)).yyxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_508.yy)), 0x091E3B4EL, 0x435E44AFL))))).even, ((VECTOR(uint32_t, 8))(abs(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 2))(0UL, 0xFCB6ECACL)).xyxyxyyx, ((VECTOR(uint32_t, 2))(4294967295UL, 0x0727AB60L)).yxxyxyyy))).lo))))).lo, ((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(0x185D6511L, 0x28AAAC73L, 0xDF0D374DL, ((VECTOR(uint32_t, 4))(l_509.yyyy)), ((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_510.ww)), (-9L), 0L)).wzxzwwzz))), 4294967294UL)), ((VECTOR(uint32_t, 8))(l_511.zxxwwxwy)).s0232077021715445))).s7e))))).yyyxxyyy))).s77))), 0xAE8C6DB5L, 0x2A3F97EBL)).s1 , ((VECTOR(int32_t, 4))(l_512.s3005)).y);
                        l_536 = (l_535 &= (((VECTOR(uint32_t, 8))(4294967295UL, 1UL, ((VECTOR(uint32_t, 4))(4294967287UL, ((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(l_514.s1aa8c201)).odd, ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 4))(0x23EC9200L, ((VECTOR(uint32_t, 4))(0xF09642B9L, (++l_515), 4294967295UL, 0xF92B650DL)).z, 1UL, 0xB633477AL)).wyywxzwxxxyyyzww, ((VECTOR(uint32_t, 2))(l_518.xz)).xyxyxyxyxyxxyyxx, ((VECTOR(uint32_t, 2))(0UL, 1UL)).xxyyxyyyxxxyxxxy))).lo, ((VECTOR(uint32_t, 8))(l_519.s1b240f7e)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_520.s9380316c)).s74)).yxyyxxxy))).even))).even, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(0x4F156F24L, 1UL, (l_521 , (l_522[0] , (l_523[3] , l_524))), l_525, 0UL, ((VECTOR(uint32_t, 2))(l_526.sa4)), 0x2611CBDCL, ((VECTOR(uint32_t, 4))(l_527.sa8c8)), l_528, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_529.s3020546221042436)).even)).hi, ((VECTOR(int32_t, 2))(1L, 0L)).xxyx))).yxyxyxwy, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 16))(l_530.s5477010163051654)).sf7, (uint32_t)l_531))).xxxxxxxx, ((VECTOR(uint32_t, 2))(4294967295UL, 1UL)).xxxyyyyy))).s2125172231403114)).lo))).s73, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 2))(l_532.wx)), ((VECTOR(uint32_t, 8))(l_533.xxxxxxyy)).s27, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 16))(2UL, 0UL, ((VECTOR(uint32_t, 4))(4294967295UL)), ((VECTOR(uint32_t, 4))(0xE330BBB8L)), l_534, 4294967295UL, ((VECTOR(uint32_t, 2))(4294967294UL)), 0x2C5F2546L, 0x38CC701EL)).s222e, ((VECTOR(uint32_t, 4))(2UL))))).even))))))).yyxxxyyx)).s66, ((VECTOR(uint32_t, 2))(0x41496AE9L))))))), 4294967294UL)).hi)).s11))), 0x8186A22BL)), 0xD4061613L, 0x664BCC37L)).s2 , (-1L)));
                        l_538 &= l_537;
                        l_542 = (l_539 , (l_540[2][0][8] , l_541));
                        unsigned int result = 0;
                        result += l_506.s7;
                        result += l_506.s6;
                        result += l_506.s5;
                        result += l_506.s4;
                        result += l_506.s3;
                        result += l_506.s2;
                        result += l_506.s1;
                        result += l_506.s0;
                        result += l_507.w;
                        result += l_507.z;
                        result += l_507.y;
                        result += l_507.x;
                        result += l_508.y;
                        result += l_508.x;
                        result += l_509.y;
                        result += l_509.x;
                        result += l_510.w;
                        result += l_510.z;
                        result += l_510.y;
                        result += l_510.x;
                        result += l_511.w;
                        result += l_511.z;
                        result += l_511.y;
                        result += l_511.x;
                        result += l_512.s7;
                        result += l_512.s6;
                        result += l_512.s5;
                        result += l_512.s4;
                        result += l_512.s3;
                        result += l_512.s2;
                        result += l_512.s1;
                        result += l_512.s0;
                        result += l_513;
                        result += l_514.sf;
                        result += l_514.se;
                        result += l_514.sd;
                        result += l_514.sc;
                        result += l_514.sb;
                        result += l_514.sa;
                        result += l_514.s9;
                        result += l_514.s8;
                        result += l_514.s7;
                        result += l_514.s6;
                        result += l_514.s5;
                        result += l_514.s4;
                        result += l_514.s3;
                        result += l_514.s2;
                        result += l_514.s1;
                        result += l_514.s0;
                        result += l_515;
                        result += l_518.w;
                        result += l_518.z;
                        result += l_518.y;
                        result += l_518.x;
                        result += l_519.sf;
                        result += l_519.se;
                        result += l_519.sd;
                        result += l_519.sc;
                        result += l_519.sb;
                        result += l_519.sa;
                        result += l_519.s9;
                        result += l_519.s8;
                        result += l_519.s7;
                        result += l_519.s6;
                        result += l_519.s5;
                        result += l_519.s4;
                        result += l_519.s3;
                        result += l_519.s2;
                        result += l_519.s1;
                        result += l_519.s0;
                        result += l_520.sf;
                        result += l_520.se;
                        result += l_520.sd;
                        result += l_520.sc;
                        result += l_520.sb;
                        result += l_520.sa;
                        result += l_520.s9;
                        result += l_520.s8;
                        result += l_520.s7;
                        result += l_520.s6;
                        result += l_520.s5;
                        result += l_520.s4;
                        result += l_520.s3;
                        result += l_520.s2;
                        result += l_520.s1;
                        result += l_520.s0;
                        result += l_521;
                        int l_522_i0;
                        for (l_522_i0 = 0; l_522_i0 < 8; l_522_i0++) {
                            result += l_522[l_522_i0];
                        }
                        int l_523_i0;
                        for (l_523_i0 = 0; l_523_i0 < 6; l_523_i0++) {
                            result += l_523[l_523_i0].f0;
                            result += l_523[l_523_i0].f1.f0;
                            result += l_523[l_523_i0].f1.f1;
                            result += l_523[l_523_i0].f1.f2;
                            result += l_523[l_523_i0].f1.f3;
                            result += l_523[l_523_i0].f1.f4;
                            result += l_523[l_523_i0].f1.f5;
                            result += l_523[l_523_i0].f2;
                            result += l_523[l_523_i0].f3;
                            result += l_523[l_523_i0].f4;
                            result += l_523[l_523_i0].f5;
                        }
                        result += l_524;
                        result += l_525;
                        result += l_526.sf;
                        result += l_526.se;
                        result += l_526.sd;
                        result += l_526.sc;
                        result += l_526.sb;
                        result += l_526.sa;
                        result += l_526.s9;
                        result += l_526.s8;
                        result += l_526.s7;
                        result += l_526.s6;
                        result += l_526.s5;
                        result += l_526.s4;
                        result += l_526.s3;
                        result += l_526.s2;
                        result += l_526.s1;
                        result += l_526.s0;
                        result += l_527.sf;
                        result += l_527.se;
                        result += l_527.sd;
                        result += l_527.sc;
                        result += l_527.sb;
                        result += l_527.sa;
                        result += l_527.s9;
                        result += l_527.s8;
                        result += l_527.s7;
                        result += l_527.s6;
                        result += l_527.s5;
                        result += l_527.s4;
                        result += l_527.s3;
                        result += l_527.s2;
                        result += l_527.s1;
                        result += l_527.s0;
                        result += l_528;
                        result += l_529.s7;
                        result += l_529.s6;
                        result += l_529.s5;
                        result += l_529.s4;
                        result += l_529.s3;
                        result += l_529.s2;
                        result += l_529.s1;
                        result += l_529.s0;
                        result += l_530.s7;
                        result += l_530.s6;
                        result += l_530.s5;
                        result += l_530.s4;
                        result += l_530.s3;
                        result += l_530.s2;
                        result += l_530.s1;
                        result += l_530.s0;
                        result += l_531;
                        result += l_532.w;
                        result += l_532.z;
                        result += l_532.y;
                        result += l_532.x;
                        result += l_533.y;
                        result += l_533.x;
                        result += l_534;
                        result += l_535;
                        result += l_536;
                        result += l_537;
                        result += l_538;
                        result += l_539;
                        int l_540_i0, l_540_i1, l_540_i2;
                        for (l_540_i0 = 0; l_540_i0 < 3; l_540_i0++) {
                            for (l_540_i1 = 0; l_540_i1 < 1; l_540_i1++) {
                                for (l_540_i2 = 0; l_540_i2 < 9; l_540_i2++) {
                                    result += l_540[l_540_i0][l_540_i1][l_540_i2];
                                }
                            }
                        }
                        result += l_541.f0;
                        result += l_541.f1.f0;
                        result += l_541.f1.f1;
                        result += l_541.f1.f2;
                        result += l_541.f1.f3;
                        result += l_541.f1.f4;
                        result += l_541.f1.f5;
                        result += l_541.f2;
                        result += l_541.f3;
                        result += l_541.f4;
                        result += l_541.f5;
                        result += l_542.f0;
                        result += l_542.f1.f0;
                        result += l_542.f1.f1;
                        result += l_542.f1.f2;
                        result += l_542.f1.f3;
                        result += l_542.f1.f4;
                        result += l_542.f1.f5;
                        result += l_542.f2;
                        result += l_542.f3;
                        result += l_542.f4;
                        result += l_542.f5;
                        atomic_add(&p_643->l_special_values[42], result);
                    }
                    else
                    { /* block id: 228 */
                        (1 + 1);
                    }
                    if (p_22)
                        break;
                    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((&l_456[3] != &p_643->g_458[2][1][1]) , (p_643->g_442 || (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s(l_547, (l_420.y = (*p_25)))), (((safe_mul_func_uint8_t_u_u((((0x999EBB5FL <= (safe_add_func_int32_t_s_s(((p_643->g_488 , (safe_rshift_func_uint16_t_u_s((0xB9BBD658952DE26BL || ((*p_24) >= p_643->g_442)), 4))) != 1L), 0x95C51929L))) == p_22) < p_643->g_423.x), 0x26L)) , 0x45C615DBBAAD14FEL) | 0x3219AF1B2C9BAB01L))))), ((VECTOR(int32_t, 2))((-4L))), 0L)), l_420.y, 0x690DB00CL, ((VECTOR(int32_t, 4))(1L)), 0x783CAB8DL, 0x35798C20L, l_547, l_547, (-1L), 0x763C0B77L)).sc)
                    { /* block id: 233 */
                        p_643->g_554 = (*p_643->g_384);
                        return l_555;
                    }
                    else
                    { /* block id: 236 */
                        struct S0 *l_559[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_559[i] = &p_643->g_109[4][0][1];
                        l_560 = func_80(p_643->g_335[7][0], &l_440, (l_556 != &l_440), p_643);
                        return (*p_643->g_151);
                    }
                }
                else
                { /* block id: 240 */
                    int32_t l_565 = 0x6FDEB87DL;
                    uint16_t *l_573[6] = {&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0]};
                    int32_t l_575 = 1L;
                    VECTOR(int32_t, 8) l_576 = (VECTOR(int32_t, 8))(0x268D2FA2L, (VECTOR(int32_t, 4))(0x268D2FA2L, (VECTOR(int32_t, 2))(0x268D2FA2L, 0x271440B9L), 0x271440B9L), 0x271440B9L, 0x268D2FA2L, 0x271440B9L);
                    uint32_t *l_583 = &p_643->g_61;
                    int8_t *l_587 = &l_560.f1;
                    int i;
                    l_574 = (safe_mod_func_uint16_t_u_u((l_420.x = (~((GROUP_DIVERGE(1, 1) > p_643->g_409.f1.f3) >= (safe_div_func_int16_t_s_s(((p_643->g_488 = l_565) && (0x41533CD243710346L || ((VECTOR(int64_t, 4))(p_23, 1L, 0x4583486166400F95L, 0x7E200B3F0756A138L)).z)), ((l_440 = (safe_rshift_func_uint8_t_u_u(p_22, 4))) & ((VECTOR(uint8_t, 8))((8UL >= ((p_23 | (*p_643->g_496)) != (safe_add_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u((((safe_sub_func_int16_t_s_s((((((0L == p_643->l_comm_values[(safe_mod_func_uint32_t_u_u(p_643->tid, 24))]) && (*p_643->g_496)) <= 0x447CL) > 6L) , 1L), 1L)) , 0UL) == l_565))), p_22)))), FAKE_DIVERGE(p_643->group_1_offset, get_group_id(1), 10), 0x91L, ((VECTOR(uint8_t, 4))(0x1BL)), 248UL)).s7)))))), GROUP_DIVERGE(2, 1)));
                    --l_580;
                    l_602[0][1][1] = func_56(((*l_583)++), (((*l_587) = ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x60L, 0x3BL)), p_643->g_385.f0, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_643->g_586.s9f)), 0x3AL, 0x26L)), 0L)).s1) > ((l_578.s1 , p_643->g_382.f0) ^ ((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 16))(0x2B25L, 0xAE0AL, ((VECTOR(uint16_t, 4))((safe_lshift_func_uint8_t_u_u(((~(p_643->g_325.f0 , (p_22 && 0L))) || ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(l_590.s1254615337000060)).lo, ((VECTOR(int16_t, 16))(0x4ECDL, (l_591 ^= l_505[8][2][1]), 0x765AL, 0x4E22L, ((((safe_rshift_func_uint8_t_u_u(((*p_643->g_496) || ((*p_643->g_496) = (safe_add_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(18446744073709551606UL, l_560.f3)), 4294967295UL)), l_578.s3)))), 1)) != p_26) | l_600) && 0xE7L), ((VECTOR(int16_t, 4))((-1L))), (*p_25), p_643->g_20, 0x1262L, (*p_25), ((VECTOR(int16_t, 2))(0x32E0L)), 0x1F90L)).hi))).s0), p_23)), ((VECTOR(uint16_t, 2))(1UL)), 4UL)), ((VECTOR(uint16_t, 2))(0xAB9EL)), ((VECTOR(uint16_t, 2))(0xBE0EL)), 0x0446L, p_643->g_66[1][1], p_23, l_601[6], 9UL, 4UL)).s122b, ((VECTOR(uint16_t, 4))(0xC55DL))))).ywywxwxwxwwwzzzy, (uint16_t)p_643->g_382.f1.f0, (uint16_t)p_643->g_337))).odd)).odd)), 0x5AEDL, ((VECTOR(uint16_t, 2))(0UL)), 0x400BL)), ((VECTOR(uint16_t, 8))(0xD6D8L)))), ((VECTOR(uint16_t, 16))(0xEA38L)), ((VECTOR(uint16_t, 16))(65535UL))))).se)), p_643->g_comm_values[p_643->tid], p_643);
                }
                --l_603;
                l_606 = &l_440;
            }
        }
    }
    for (p_643->g_14 = 0; (p_643->g_14 >= 15); p_643->g_14 = safe_add_func_uint16_t_u_u(p_643->g_14, 4))
    { /* block id: 259 */
        uint64_t l_609 = 0xB1F66F9F5F7F33A1L;
        int16_t **l_613 = &l_612;
        uint16_t *l_620 = &l_603;
        int32_t l_630 = (-1L);
        int16_t *l_632 = (void*)0;
        int16_t **l_631 = &l_632;
        l_609--;
        (*l_454) |= ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((((((*l_613) = l_612) != ((*l_631) = func_28(&p_643->g_17, ((safe_add_func_uint8_t_u_u(0UL, ((safe_div_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(l_609, ((*l_620) &= (~p_643->g_297.f1.f5)))) == ((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint8_t_u(l_609)), 6)) < ((safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s(0x2B8CFF4C51214A57L, (safe_sub_func_int8_t_s_s(1L, (0UL && 0L))))), GROUP_DIVERGE(1, 1))) , l_609))), p_643->g_409.f4)) , 1UL))) != l_630), p_26, p_643->g_325.f1.f5, p_643->g_109[0][1][4], p_643))) || p_22) ^ 1L), ((VECTOR(int32_t, 2))(0x6B8C01A0L)), 0x30FB0D7CL)).hi)).yxyyxxyx))).hi, ((VECTOR(int32_t, 4))(0x38DDF964L))))).y;
        if (l_630)
            break;
    }
    (*l_454) ^= (safe_mod_func_int64_t_s_s((l_635 != p_643->g_638), 0x098F03253B9F3A50L));
    return l_640;
}


/* ------------------------------------------ */
/* 
 * reads : p_643->g_116 p_643->g_325.f4 p_643->g_382.f1.f0 p_643->g_109.f5 p_643->g_297.f1.f1 p_643->g_382.f5 p_643->g_385.f2 p_643->g_151
 * writes: p_643->g_116 p_643->g_407 p_643->g_382.f1.f4 p_643->g_66
 */
int16_t * func_28(int16_t * p_29, int32_t  p_30, uint8_t  p_31, int64_t  p_32, struct S0  p_33, struct S2 * p_643)
{ /* block id: 169 */
    uint16_t *l_391[9][10] = {{&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],(void*)0,&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[0][0],&p_643->g_116[1][0],&p_643->g_116[1][0]},{&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],(void*)0,&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[0][0],&p_643->g_116[1][0],&p_643->g_116[1][0]},{&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],(void*)0,&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[0][0],&p_643->g_116[1][0],&p_643->g_116[1][0]},{&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],(void*)0,&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[0][0],&p_643->g_116[1][0],&p_643->g_116[1][0]},{&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],(void*)0,&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[0][0],&p_643->g_116[1][0],&p_643->g_116[1][0]},{&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],(void*)0,&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[0][0],&p_643->g_116[1][0],&p_643->g_116[1][0]},{&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],(void*)0,&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[0][0],&p_643->g_116[1][0],&p_643->g_116[1][0]},{&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],(void*)0,&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[0][0],&p_643->g_116[1][0],&p_643->g_116[1][0]},{&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],(void*)0,&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[1][0],&p_643->g_116[0][0],&p_643->g_116[1][0],&p_643->g_116[1][0]}};
    int32_t l_392 = 0x676AA565L;
    VECTOR(uint8_t, 8) l_401 = (VECTOR(uint8_t, 8))(0x37L, (VECTOR(uint8_t, 4))(0x37L, (VECTOR(uint8_t, 2))(0x37L, 0x93L), 0x93L), 0x93L, 0x37L, 0x93L);
    VECTOR(uint8_t, 2) l_402 = (VECTOR(uint8_t, 2))(5UL, 0x94L);
    uint8_t *l_408 = &p_643->g_382.f1.f4;
    int i, j;
    (*p_643->g_151) = (safe_sub_func_int64_t_s_s((((*l_408) = (safe_mul_func_uint16_t_u_u((--p_643->g_116[1][0]), (p_33.f3 & (((((((((((p_643->g_407 = (l_392 = (0xBAL ^ ((((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(4L, (safe_div_func_int8_t_s_s((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(1UL, p_643->g_325.f4, 255UL, 9UL)).xxyyzwzw)).lo, ((VECTOR(uint8_t, 2))(l_401.s07)).yyyx, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 16))(l_402.yxxxxxxxxyxyyxxy)).even, ((VECTOR(uint8_t, 2))(247UL, 0UL)).xyxxxxyx))).lo))).yyxzxzzwwyxxxyww)).s4 == (((p_643->g_382.f1.f0 & p_31) || ((l_402.y >= ((safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((~0L) && l_392) ^ 0x7362L), 0x782BC16F3DD1B876L)), 65530UL)) <= p_643->g_109[7][1][1].f5)) <= (-6L))) <= 0x7BE38F06L)), 0x90L)))), (-1L))) , &l_392) == &l_392) > l_392)))) < p_643->g_297.f1.f1) != FAKE_DIVERGE(p_643->local_1_offset, get_local_id(1), 10)) <= p_33.f4) ^ (-1L)) > l_401.s6) < l_401.s5) , p_643->g_382.f5) , FAKE_DIVERGE(p_643->group_0_offset, get_group_id(0), 10)) , p_643->g_385.f2) > 4294967291UL))))) > (-1L)), l_401.s7));
    return p_29;
}


/* ------------------------------------------ */
/* 
 * reads : p_643->g_116 p_643->g_151 p_643->g_66 p_643->g_384 p_643->g_92 p_643->g_4 p_643->g_comm_values p_643->g_61 p_643->g_109 p_643->g_19 p_643->g_14 p_643->g_307
 * writes: p_643->g_66 p_643->g_92 p_643->g_116 p_643->g_151 p_643->g_160 p_643->g_17 p_643->g_293 p_643->g_109 p_643->g_307
 */
uint8_t  func_34(uint16_t  p_35, uint16_t  p_36, int32_t * p_37, struct S2 * p_643)
{ /* block id: 160 */
    int32_t *l_343 = (void*)0;
    int32_t *l_344 = &p_643->g_66[1][1];
    int32_t *l_345 = &p_643->g_66[1][1];
    int32_t *l_346 = &p_643->g_66[1][1];
    int32_t *l_347 = (void*)0;
    int32_t *l_348 = &p_643->g_66[1][1];
    int32_t *l_349 = &p_643->g_66[1][2];
    int32_t *l_350 = (void*)0;
    int32_t *l_351 = &p_643->g_66[1][1];
    int32_t *l_352 = &p_643->g_66[0][2];
    int32_t *l_353 = &p_643->g_66[1][3];
    int32_t *l_354[10][4] = {{&p_643->g_66[1][1],&p_643->g_4,(void*)0,&p_643->g_14},{&p_643->g_66[1][1],&p_643->g_4,(void*)0,&p_643->g_14},{&p_643->g_66[1][1],&p_643->g_4,(void*)0,&p_643->g_14},{&p_643->g_66[1][1],&p_643->g_4,(void*)0,&p_643->g_14},{&p_643->g_66[1][1],&p_643->g_4,(void*)0,&p_643->g_14},{&p_643->g_66[1][1],&p_643->g_4,(void*)0,&p_643->g_14},{&p_643->g_66[1][1],&p_643->g_4,(void*)0,&p_643->g_14},{&p_643->g_66[1][1],&p_643->g_4,(void*)0,&p_643->g_14},{&p_643->g_66[1][1],&p_643->g_4,(void*)0,&p_643->g_14},{&p_643->g_66[1][1],&p_643->g_4,(void*)0,&p_643->g_14}};
    uint16_t l_355 = 65528UL;
    VECTOR(uint32_t, 2) l_370 = (VECTOR(uint32_t, 2))(4294967290UL, 0x9377ED88L);
    VECTOR(uint32_t, 8) l_371 = (VECTOR(uint32_t, 8))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 7UL), 7UL), 7UL, 4294967289UL, 7UL);
    VECTOR(int16_t, 4) l_376 = (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0x6ACAL), 0x6ACAL);
    struct S1 *l_381 = &p_643->g_382;
    struct S1 **l_383 = &l_381;
    int32_t **l_386 = &l_354[1][1];
    int i, j;
    --l_355;
    (*l_386) = func_56(p_643->g_116[1][1], (p_35 = (+((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((((((safe_div_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_36, 3)), ((*p_643->g_151) & ((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(l_370.xyxxyxxy)).lo, ((VECTOR(uint32_t, 16))((~4294967289UL), 7UL, 0UL, ((VECTOR(uint32_t, 8))(l_371.s25643562)), ((p_36 == (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 8))(0x25C6L, p_36, 0x1D80L, (safe_rshift_func_uint16_t_u_s(1UL, 7)), ((VECTOR(int16_t, 4))(l_376.zwwz)))).s2, (safe_add_func_int16_t_s_s(((safe_add_func_int32_t_s_s((((*l_383) = l_381) != p_643->g_384), 0x9001113BL)) , p_643->g_66[1][1]), p_35))))) | p_36), 4294967289UL, ((VECTOR(uint32_t, 2))(0UL)), 1UL)).s82ac))).y))) , (*l_352)) >= p_643->g_92), 0x484AL)) || (*l_346)) == p_36) <= 1L) <= (*l_346)) != p_36), (*l_344))), 2)), (*p_643->g_151))) >= 0x57A9L))), (*l_344), p_643);
    p_643->g_307.s4 &= ((*l_351) = (*p_643->g_151));
    p_643->g_293 = (void*)0;
    return p_643->g_116[1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_643->g_109.f0
 * writes:
 */
uint64_t  func_45(int16_t  p_46, int32_t * p_47, struct S2 * p_643)
{ /* block id: 158 */
    return p_643->g_109[7][1][1].f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_643->g_332 p_643->g_335 p_643->g_17 p_643->g_109.f3
 * writes: p_643->g_335 p_643->g_337
 */
int16_t  func_48(int16_t * p_49, int32_t  p_50, int8_t  p_51, uint64_t  p_52, struct S2 * p_643)
{ /* block id: 151 */
    VECTOR(int8_t, 4) l_329 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L));
    VECTOR(int8_t, 4) l_330 = (VECTOR(int8_t, 4))(0x2AL, (VECTOR(int8_t, 2))(0x2AL, 0x2CL), 0x2CL);
    VECTOR(uint32_t, 4) l_331 = (VECTOR(uint32_t, 4))(0x0035F318L, (VECTOR(uint32_t, 2))(0x0035F318L, 4294967288UL), 4294967288UL);
    int32_t *l_333 = (void*)0;
    int32_t *l_334 = &p_643->g_335[7][0];
    int32_t *l_336[4][3] = {{&p_643->g_337,&p_643->g_337,&p_643->g_337},{&p_643->g_337,&p_643->g_337,&p_643->g_337},{&p_643->g_337,&p_643->g_337,&p_643->g_337},{&p_643->g_337,&p_643->g_337,&p_643->g_337}};
    int32_t l_338 = 0x067F7095L;
    int32_t **l_339 = &p_643->g_293;
    int32_t ***l_340 = &l_339;
    int i, j;
    atomic_sub(&p_643->g_atomic_reduction[get_linear_group_id()], ((p_50 ^ ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(0x7FL, ((VECTOR(int8_t, 2))(l_329.wz)), 0x15L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_330.yz)), 0x64L, 0x29L)))).s52, ((VECTOR(int8_t, 2))(0x13L, 1L)), ((VECTOR(int8_t, 16))((((VECTOR(uint32_t, 4))(l_331.yyzw)).x , l_331.z), 0x77L, (l_331.w | 7UL), ((p_643->g_337 = (l_338 = ((*l_334) &= ((VECTOR(int32_t, 2))(p_643->g_332.xz)).lo))) , (l_329.y > ((*p_49) && ((((*l_340) = l_339) != &p_643->g_293) , (safe_rshift_func_uint8_t_u_s(p_643->g_109[7][1][1].f3, 2)))))), 0x1DL, ((VECTOR(int8_t, 8))(4L)), (-7L), 0x0FL, 0x73L)).sf3))).hi) >= p_51) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_643->v_collective += p_643->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return (*p_49);
}


/* ------------------------------------------ */
/* 
 * reads : p_643->g_109.f5 p_643->g_66 p_643->g_307 p_643->g_4 p_643->g_comm_values p_643->g_92 p_643->g_61 p_643->g_109 p_643->g_19 p_643->g_116 p_643->g_14 p_643->g_151
 * writes: p_643->g_61 p_643->g_66 p_643->g_92 p_643->g_116 p_643->g_151 p_643->g_160 p_643->g_17 p_643->g_293 p_643->g_109
 */
int16_t * func_53(int32_t * p_54, struct S0  p_55, struct S2 * p_643)
{ /* block id: 147 */
    struct S1 *l_324 = &p_643->g_325;
    uint32_t *l_326[7] = {&p_643->g_61,&p_643->g_61,&p_643->g_61,&p_643->g_61,&p_643->g_61,&p_643->g_61,&p_643->g_61};
    int32_t **l_327 = &p_643->g_293;
    int16_t *l_328 = &p_643->g_17;
    int i;
    (*l_327) = func_56(p_643->g_109[7][1][1].f5, p_643->g_66[1][1], (p_643->g_61 = ((safe_rshift_func_uint16_t_u_s((l_324 == l_324), 14)) <= p_643->g_307.s7)), p_643);
    return l_328;
}


/* ------------------------------------------ */
/* 
 * reads : p_643->g_4 p_643->g_comm_values p_643->g_92 p_643->g_61 p_643->g_109 p_643->g_19 p_643->g_116 p_643->g_14 p_643->g_17 p_643->g_307 p_643->g_151
 * writes: p_643->g_66 p_643->g_92 p_643->g_116 p_643->g_151 p_643->g_160 p_643->g_17 p_643->g_293 p_643->g_109
 */
int32_t * func_56(uint32_t  p_57, uint16_t  p_58, uint32_t  p_59, struct S2 * p_643)
{ /* block id: 15 */
    uint8_t l_64 = 0xEBL;
    int32_t l_71 = (-5L);
    uint8_t l_72 = 0x17L;
    VECTOR(uint8_t, 16) l_86 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL, (VECTOR(uint8_t, 2))(1UL, 255UL), (VECTOR(uint8_t, 2))(1UL, 255UL), 1UL, 255UL, 1UL, 255UL);
    uint64_t *l_159 = &p_643->g_92;
    uint64_t **l_158 = &l_159;
    VECTOR(uint8_t, 4) l_170 = (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0UL), 0UL);
    VECTOR(uint16_t, 16) l_288 = (VECTOR(uint16_t, 16))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0UL), 0UL), 0UL, 65526UL, 0UL, (VECTOR(uint16_t, 2))(65526UL, 0UL), (VECTOR(uint16_t, 2))(65526UL, 0UL), 65526UL, 0UL, 65526UL, 0UL);
    struct S1 *l_296 = &p_643->g_297;
    struct S1 **l_295 = &l_296;
    struct S1 ***l_298 = &l_295;
    VECTOR(int32_t, 4) l_310 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x1DDF33E5L), 0x1DDF33E5L);
    VECTOR(int32_t, 2) l_311 = (VECTOR(int32_t, 2))((-1L), 0x16FD3B7EL);
    VECTOR(int32_t, 2) l_314 = (VECTOR(int32_t, 2))(1L, 1L);
    VECTOR(int32_t, 4) l_315 = (VECTOR(int32_t, 4))(0x6C0DB6F2L, (VECTOR(int32_t, 2))(0x6C0DB6F2L, 0x1AFE16A8L), 0x1AFE16A8L);
    VECTOR(int8_t, 2) l_318 = (VECTOR(int8_t, 2))(0x43L, 0x32L);
    uint8_t l_319 = 0xBCL;
    int32_t *l_320 = (void*)0;
    int i;
    if (l_64)
    { /* block id: 16 */
        uint8_t l_95 = 7UL;
        uint32_t *l_110 = &p_643->g_61;
        int32_t l_168[5] = {(-9L),(-9L),(-9L),(-9L),(-9L)};
        int i;
        if (((VECTOR(int32_t, 2))(1L, (-1L))).odd)
        { /* block id: 17 */
            int32_t *l_65 = &p_643->g_66[1][1];
            int32_t *l_67 = (void*)0;
            int32_t *l_68 = (void*)0;
            int32_t *l_69 = (void*)0;
            int32_t *l_70[5][3][1] = {{{&p_643->g_66[1][1]},{&p_643->g_66[1][1]},{&p_643->g_66[1][1]}},{{&p_643->g_66[1][1]},{&p_643->g_66[1][1]},{&p_643->g_66[1][1]}},{{&p_643->g_66[1][1]},{&p_643->g_66[1][1]},{&p_643->g_66[1][1]}},{{&p_643->g_66[1][1]},{&p_643->g_66[1][1]},{&p_643->g_66[1][1]}},{{&p_643->g_66[1][1]},{&p_643->g_66[1][1]},{&p_643->g_66[1][1]}}};
            int i, j, k;
            l_72--;
            p_643->g_66[1][1] = 8L;
        }
        else
        { /* block id: 20 */
            int32_t *l_88 = &p_643->g_14;
            int32_t **l_87 = &l_88;
            uint64_t *l_91[9][1][5] = {{{&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92}},{{&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92}},{{&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92}},{{&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92}},{{&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92}},{{&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92}},{{&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92}},{{&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92}},{{&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92,&p_643->g_92}}};
            int32_t l_155 = 0x457197BDL;
            int32_t *l_162 = &p_643->g_66[1][1];
            int32_t *l_163 = &p_643->g_66[1][1];
            int32_t *l_164 = (void*)0;
            int32_t *l_165 = &l_155;
            int32_t *l_166 = &l_155;
            int32_t *l_167 = &l_71;
            int32_t *l_169[6][10][4] = {{{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71}},{{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71}},{{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71}},{{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71}},{{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71}},{{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71},{(void*)0,(void*)0,&l_155,&l_71}}};
            int i, j, k;
            l_155 &= (((!func_75(func_80(p_643->g_4, (p_643->g_comm_values[p_643->tid] , ((p_643->g_92 |= (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_86.s2cf2d060)).s1, (3L == ((&l_71 == ((*l_87) = &p_643->g_14)) <= (safe_add_func_uint32_t_u_u(p_643->g_comm_values[p_643->tid], p_59))))))) , &p_643->g_4)), (safe_add_func_int64_t_s_s((l_95 != p_643->g_61), l_95)), p_643), l_95, l_110, l_72, p_643)) >= p_643->g_14) , 0x0D5BF3B3L);
            for (l_72 = 24; (l_72 >= 32); l_72++)
            { /* block id: 40 */
                l_158 = (p_643->g_160 = l_158);
            }
            ++l_170.y;
        }
    }
    else
    { /* block id: 46 */
        uint8_t l_286 = 255UL;
        int16_t *l_292 = &p_643->g_19;
        if ((atomic_inc(&p_643->g_atomic_input[59 * get_linear_group_id() + 20]) == 6))
        { /* block id: 48 */
            int32_t l_173 = 2L;
            int16_t l_180[10][6][4] = {{{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L}},{{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L}},{{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L}},{{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L}},{{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L}},{{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L}},{{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L}},{{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L}},{{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L}},{{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L},{0L,0x0B6AL,0x5CA6L,0L}}};
            int32_t l_181 = 0x38D94905L;
            int32_t l_182[2][8][10] = {{{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)},{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)},{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)},{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)},{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)},{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)},{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)},{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)}},{{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)},{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)},{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)},{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)},{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)},{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)},{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)},{(-4L),(-4L),(-1L),(-1L),(-8L),(-1L),(-1L),(-4L),(-4L),(-1L)}}};
            int32_t l_183 = 4L;
            uint16_t l_184 = 0x0DCFL;
            int i, j, k;
            for (l_173 = (-13); (l_173 == (-10)); ++l_173)
            { /* block id: 51 */
                int32_t l_176 = 1L;
                uint32_t l_177 = 0xB185C60FL;
                --l_177;
            }
            l_180[8][4][1] ^= 0x09482EB3L;
            ++l_184;
            for (l_181 = 0; (l_181 <= (-30)); l_181 = safe_sub_func_uint8_t_u_u(l_181, 8))
            { /* block id: 58 */
                int32_t l_189[10][3] = {{(-6L),0x7397FF54L,0x7397FF54L},{(-6L),0x7397FF54L,0x7397FF54L},{(-6L),0x7397FF54L,0x7397FF54L},{(-6L),0x7397FF54L,0x7397FF54L},{(-6L),0x7397FF54L,0x7397FF54L},{(-6L),0x7397FF54L,0x7397FF54L},{(-6L),0x7397FF54L,0x7397FF54L},{(-6L),0x7397FF54L,0x7397FF54L},{(-6L),0x7397FF54L,0x7397FF54L},{(-6L),0x7397FF54L,0x7397FF54L}};
                int8_t l_237 = (-10L);
                VECTOR(uint16_t, 16) l_271 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 7UL), 7UL), 7UL, 65535UL, 7UL, (VECTOR(uint16_t, 2))(65535UL, 7UL), (VECTOR(uint16_t, 2))(65535UL, 7UL), 65535UL, 7UL, 65535UL, 7UL);
                VECTOR(int32_t, 2) l_272 = (VECTOR(int32_t, 2))(0x01A8D8E2L, (-7L));
                uint16_t l_273 = 0xFF4CL;
                int32_t l_274 = 0x62B0E5FFL;
                int32_t l_275 = 0L;
                int32_t l_276 = 0x3C1C5B0AL;
                int8_t l_277 = 0x7EL;
                int8_t l_278 = 0x28L;
                int16_t l_279 = (-1L);
                int16_t l_280 = 0x604BL;
                int32_t l_281 = 0x77C956BAL;
                int32_t l_282 = (-4L);
                int16_t l_283 = 0x2045L;
                int i, j;
                for (l_189[7][2] = 8; (l_189[7][2] != 20); l_189[7][2] = safe_add_func_uint16_t_u_u(l_189[7][2], 5))
                { /* block id: 61 */
                    int64_t l_192 = 0x786C04805B41BC4CL;
                    int32_t l_193 = 0x6C7848A5L;
                    uint64_t l_230 = 0UL;
                    VECTOR(int32_t, 2) l_231 = (VECTOR(int32_t, 2))(0x60CDCB29L, 9L);
                    int16_t l_232[9][4];
                    VECTOR(uint32_t, 16) l_233 = (VECTOR(uint32_t, 16))(0x22580578L, (VECTOR(uint32_t, 4))(0x22580578L, (VECTOR(uint32_t, 2))(0x22580578L, 0x193AE4F5L), 0x193AE4F5L), 0x193AE4F5L, 0x22580578L, 0x193AE4F5L, (VECTOR(uint32_t, 2))(0x22580578L, 0x193AE4F5L), (VECTOR(uint32_t, 2))(0x22580578L, 0x193AE4F5L), 0x22580578L, 0x193AE4F5L, 0x22580578L, 0x193AE4F5L);
                    uint8_t l_234 = 0x81L;
                    uint8_t l_235[7][10][3] = {{{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL}},{{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL}},{{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL}},{{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL}},{{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL}},{{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL}},{{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL},{249UL,0x6EL,255UL}}};
                    uint32_t l_236 = 0x3B370140L;
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_232[i][j] = 0x539DL;
                    }
                    l_183 |= 0x115B618AL;
                    if ((l_192 , l_193))
                    { /* block id: 63 */
                        uint32_t l_194[6][7];
                        VECTOR(uint64_t, 4) l_195 = (VECTOR(uint64_t, 4))(0x20187AD862C61CD7L, (VECTOR(uint64_t, 2))(0x20187AD862C61CD7L, 0x47F9239230E06A7DL), 0x47F9239230E06A7DL);
                        uint32_t l_196[3][2];
                        uint32_t l_197 = 0xF2593E8AL;
                        int8_t l_198 = (-4L);
                        int64_t l_199 = 0x24FB894513EA799CL;
                        int32_t *l_200 = (void*)0;
                        int i, j;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_194[i][j] = 0x7CF72669L;
                        }
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_196[i][j] = 0xC8A64BDDL;
                        }
                        l_193 &= (l_182[1][6][5] = (((l_194[1][4] ^= ((VECTOR(uint32_t, 2))(1UL, 0x2666E5DAL)).odd) , (l_195.y , (l_197 = l_196[1][1]))) , (GROUP_DIVERGE(1, 1) , l_198)));
                        l_182[0][4][8] = (l_193 ^= l_199);
                        l_183 = (l_193 = 0x62DD90E1L);
                        l_200 = (void*)0;
                    }
                    else
                    { /* block id: 73 */
                        VECTOR(int32_t, 2) l_201 = (VECTOR(int32_t, 2))(0x402623FBL, (-1L));
                        uint64_t l_202[8] = {0xA28D7F8C02F5C1E7L,18446744073709551611UL,0xA28D7F8C02F5C1E7L,0xA28D7F8C02F5C1E7L,18446744073709551611UL,0xA28D7F8C02F5C1E7L,0xA28D7F8C02F5C1E7L,18446744073709551611UL};
                        int32_t l_203[10][10] = {{0L,9L,6L,8L,2L,1L,0x77942790L,0x4D24582EL,0x430E8CCEL,0x2E618702L},{0L,9L,6L,8L,2L,1L,0x77942790L,0x4D24582EL,0x430E8CCEL,0x2E618702L},{0L,9L,6L,8L,2L,1L,0x77942790L,0x4D24582EL,0x430E8CCEL,0x2E618702L},{0L,9L,6L,8L,2L,1L,0x77942790L,0x4D24582EL,0x430E8CCEL,0x2E618702L},{0L,9L,6L,8L,2L,1L,0x77942790L,0x4D24582EL,0x430E8CCEL,0x2E618702L},{0L,9L,6L,8L,2L,1L,0x77942790L,0x4D24582EL,0x430E8CCEL,0x2E618702L},{0L,9L,6L,8L,2L,1L,0x77942790L,0x4D24582EL,0x430E8CCEL,0x2E618702L},{0L,9L,6L,8L,2L,1L,0x77942790L,0x4D24582EL,0x430E8CCEL,0x2E618702L},{0L,9L,6L,8L,2L,1L,0x77942790L,0x4D24582EL,0x430E8CCEL,0x2E618702L},{0L,9L,6L,8L,2L,1L,0x77942790L,0x4D24582EL,0x430E8CCEL,0x2E618702L}};
                        VECTOR(int32_t, 2) l_204 = (VECTOR(int32_t, 2))((-1L), 0L);
                        struct S0 l_205[5][9][5] = {{{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}}},{{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}}},{{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}}},{{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}}},{{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}},{{0x421330A6L,1L,4294967295UL,0L,255UL,4UL},{0x76AD7E54L,0x21L,1UL,0x56L,0x6DL,18446744073709551606UL},{0xE87846DEL,0x6DL,7UL,0x21L,0UL,0xEF8654FC09946895L},{4294967295UL,7L,0xC46D36BFL,0x3BL,0xB5L,0xBF6AE2B54E87A81CL},{4UL,6L,0x48E8005BL,0x56L,250UL,0x7B25D7DF1F51B593L}}}};
                        uint32_t l_206 = 0x7A398E4BL;
                        int64_t l_207 = 1L;
                        uint32_t l_208 = 0UL;
                        int64_t l_209[9] = {0x268097A9AF58B078L,0x268097A9AF58B078L,0x268097A9AF58B078L,0x268097A9AF58B078L,0x268097A9AF58B078L,0x268097A9AF58B078L,0x268097A9AF58B078L,0x268097A9AF58B078L,0x268097A9AF58B078L};
                        uint64_t l_210 = 0x150289F0EA6DABB3L;
                        int i, j, k;
                        l_173 = ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_201.yxyxyyxxyyyxxyxx)).s91)))).yxyyyyxx, ((VECTOR(int32_t, 4))(0x4C18B79AL, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))((l_203[7][4] = (l_182[1][4][6] = l_202[4])), ((VECTOR(int32_t, 2))((-1L), 9L)), 1L, 0x5B98BCBDL, ((VECTOR(int32_t, 2))((-1L), 0x1476D01AL)), 0x2D6CBAB8L)).even, ((VECTOR(int32_t, 2))(l_204.xy)).xyxx))).lo, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-4L), 0x46A02E83L)).xyyx)).lo)), ((VECTOR(int32_t, 8))(0L, (l_205[3][2][1] , 0L), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(0L, l_206, (-1L), 0x703124CAL)).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_207, 0x0F367BC0L, 0x21A2EB81L, (-1L))).hi)), 0x503B91AAL, 4L)).lo))), l_208, 0x4561179FL, 0x434738FFL, 0L)).s73, ((VECTOR(int32_t, 4))(((l_209[5] = (-1L)) , l_210), 0x6D979773L, 0x75629949L, 0L)).lo))), ((VECTOR(int32_t, 2))(0L))))), 0x69632345L)).zyzzxxyw))).s0;
                    }
                    for (l_193 = 0; (l_193 < 13); l_193 = safe_add_func_uint8_t_u_u(l_193, 1))
                    { /* block id: 81 */
                        int16_t l_213 = 0x4511L;
                        uint32_t l_216 = 0xD45097BDL;
                        uint32_t *l_215 = &l_216;
                        uint32_t **l_214 = &l_215;
                        uint32_t **l_217 = &l_215;
                        struct S0 l_218 = {0xBC3AC4F9L,0x21L,0xD6CD1FB1L,-1L,0x07L,1UL};
                        struct S0 l_219 = {0xAB61EA68L,0x4DL,8UL,0L,0xF6L,18446744073709551607UL};
                        struct S0 l_220 = {0x879E92FFL,1L,5UL,0x3FL,255UL,0xC306D34E91FE035CL};
                        struct S0 l_221 = {0x8146B0B0L,0x2EL,0UL,0L,252UL,0x64A897BB4D0AD04CL};
                        struct S0 l_222 = {1UL,0x40L,4UL,-5L,250UL,0xC1107DFCD7036725L};
                        int16_t l_223[4][1][4];
                        struct S0 l_224 = {0xFF3A252AL,9L,4294967293UL,0x58L,0xC9L,7UL};
                        struct S0 l_225 = {1UL,0x59L,4294967291UL,7L,0x3AL,18446744073709551607UL};
                        struct S0 l_226 = {0x59984276L,2L,1UL,0x03L,247UL,18446744073709551612UL};
                        struct S0 l_227[10] = {{1UL,0x1AL,4294967295UL,0x2DL,0xF9L,1UL},{0x720BD1C2L,0x37L,4294967287UL,0x05L,0x28L,18446744073709551610UL},{4294967295UL,0x2CL,1UL,0x38L,0xC7L,18446744073709551611UL},{0x720BD1C2L,0x37L,4294967287UL,0x05L,0x28L,18446744073709551610UL},{1UL,0x1AL,4294967295UL,0x2DL,0xF9L,1UL},{1UL,0x1AL,4294967295UL,0x2DL,0xF9L,1UL},{0x720BD1C2L,0x37L,4294967287UL,0x05L,0x28L,18446744073709551610UL},{4294967295UL,0x2CL,1UL,0x38L,0xC7L,18446744073709551611UL},{0x720BD1C2L,0x37L,4294967287UL,0x05L,0x28L,18446744073709551610UL},{1UL,0x1AL,4294967295UL,0x2DL,0xF9L,1UL}};
                        int32_t l_228 = 1L;
                        uint64_t l_229 = 18446744073709551611UL;
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 4; k++)
                                    l_223[i][j][k] = 0x1F92L;
                            }
                        }
                        l_183 |= l_213;
                        l_217 = l_214;
                        l_227[8] = (l_226 = ((l_222 = (l_221 = (l_220 = (l_219 = l_218)))) , (l_225 = (l_223[1][0][1] , l_224))));
                        l_229 |= (l_173 &= l_228);
                    }
                    l_182[0][6][3] = (((VECTOR(uint64_t, 8))(l_230, 1UL, 1UL, 0xDF3053A24B9DCB56L, 18446744073709551613UL, (((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_231.yx)), 0x042A84B2L, 0x4EAF69B9L)).x , (l_232[0][2] , 4294967295UL)) , ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_233.s18)).yxxx)).z) , l_234), 0x51F9B399C48B1EB2L, 18446744073709551606UL)).s5 , (l_235[3][9][1] , l_236));
                }
                l_183 ^= 1L;
                if ((l_182[0][3][7] = l_237))
                { /* block id: 98 */
                    int8_t l_238 = (-9L);
                    VECTOR(int32_t, 16) l_239 = (VECTOR(int32_t, 16))(0x67559BA1L, (VECTOR(int32_t, 4))(0x67559BA1L, (VECTOR(int32_t, 2))(0x67559BA1L, 7L), 7L), 7L, 0x67559BA1L, 7L, (VECTOR(int32_t, 2))(0x67559BA1L, 7L), (VECTOR(int32_t, 2))(0x67559BA1L, 7L), 0x67559BA1L, 7L, 0x67559BA1L, 7L);
                    int i;
                    l_183 = l_238;
                    if (((VECTOR(int32_t, 16))(l_239.s152ea28efc4ca0e2)).s4)
                    { /* block id: 100 */
                        uint32_t l_240 = 0xCBA3685BL;
                        int32_t l_244 = 0x3621E4D7L;
                        int32_t *l_243 = &l_244;
                        l_240--;
                        l_243 = (void*)0;
                    }
                    else
                    { /* block id: 103 */
                        int8_t l_245 = 0L;
                        struct S0 l_246 = {5UL,0L,0x5CEE56FBL,0x06L,0UL,0x635C4C8D017B6232L};
                        uint64_t l_247 = 0UL;
                        VECTOR(int32_t, 4) l_248 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x6F412E92L), 0x6F412E92L);
                        int i;
                        l_183 |= (l_189[8][0] |= (l_245 , (l_239.s8 = ((l_246 , l_247) , ((VECTOR(int32_t, 16))(l_248.ywwzzzwywwywzyzx)).s5))));
                    }
                    for (l_239.s3 = 8; (l_239.s3 == (-4)); --l_239.s3)
                    { /* block id: 110 */
                        uint8_t l_251[4][10][3] = {{{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L}},{{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L}},{{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L}},{{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L},{0x7FL,7UL,0x40L}}};
                        uint32_t l_254 = 0xBE423C22L;
                        uint32_t *l_253 = &l_254;
                        uint32_t **l_252 = &l_253;
                        uint32_t **l_255 = &l_253;
                        uint32_t **l_256 = &l_253;
                        uint64_t l_257 = 1UL;
                        uint64_t l_258 = 0xD5BA97DD37DADE59L;
                        int i, j, k;
                        l_182[1][2][5] = l_251[2][2][2];
                        l_256 = (l_255 = l_252);
                        l_189[1][1] = l_257;
                        l_258--;
                    }
                }
                else
                { /* block id: 117 */
                    int32_t l_261 = 0x566C300EL;
                    for (l_261 = (-29); (l_261 != 9); l_261 = safe_add_func_int32_t_s_s(l_261, 2))
                    { /* block id: 120 */
                        struct S0 l_264 = {0x4F803288L,-9L,0xEE6CA22EL,0x21L,0x50L,18446744073709551612UL};
                        struct S0 l_265 = {0x498C0669L,-10L,0x5B64B8E8L,0L,255UL,0x03BD73B93F00FE59L};
                        int32_t l_266[2];
                        int32_t l_267[10][3][4] = {{{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL}},{{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL}},{{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL}},{{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL}},{{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL}},{{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL}},{{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL}},{{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL}},{{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL}},{{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL},{0x3D04E26FL,0x6D7F5DF7L,0x3D04E26FL,0x3D04E26FL}}};
                        uint32_t l_268 = 0xA4E2D683L;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_266[i] = 8L;
                        l_265 = l_264;
                        --l_268;
                    }
                }
                l_182[0][2][2] = ((l_282 = ((l_273 = ((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 16))(l_271.s43614ef60a16bf02)).odd, ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 16))(((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_272.yyyyxyxyyyyyyyyy)).s7347)).w , FAKE_DIVERGE(p_643->global_2_offset, get_global_id(2), 10)) , (GROUP_DIVERGE(0, 1) , (l_184 = l_273))), l_274, (GROUP_DIVERGE(0, 1) , (l_275 , (l_276 , 0x072AL))), (l_184 &= l_277), 0x1993L, 0x38C6L, ((VECTOR(uint16_t, 4))(0UL, (((l_278 , 1UL) , l_279) , l_280), 2UL, 8UL)), 0x55B0L, 1UL, 0xFD4DL, ((VECTOR(uint16_t, 2))(65535UL)), 1UL)).hi, ((VECTOR(uint16_t, 8))(65528UL)), ((VECTOR(uint16_t, 8))(9UL))))), ((VECTOR(uint16_t, 8))(65526UL)), ((VECTOR(uint16_t, 8))(0UL)))))))), ((VECTOR(uint16_t, 8))(0x39F6L))))).s6737612250107600, ((VECTOR(uint16_t, 16))(4UL))))).sd) , l_281)) , l_283);
            }
            unsigned int result = 0;
            result += l_173;
            int l_180_i0, l_180_i1, l_180_i2;
            for (l_180_i0 = 0; l_180_i0 < 10; l_180_i0++) {
                for (l_180_i1 = 0; l_180_i1 < 6; l_180_i1++) {
                    for (l_180_i2 = 0; l_180_i2 < 4; l_180_i2++) {
                        result += l_180[l_180_i0][l_180_i1][l_180_i2];
                    }
                }
            }
            result += l_181;
            int l_182_i0, l_182_i1, l_182_i2;
            for (l_182_i0 = 0; l_182_i0 < 2; l_182_i0++) {
                for (l_182_i1 = 0; l_182_i1 < 8; l_182_i1++) {
                    for (l_182_i2 = 0; l_182_i2 < 10; l_182_i2++) {
                        result += l_182[l_182_i0][l_182_i1][l_182_i2];
                    }
                }
            }
            result += l_183;
            result += l_184;
            atomic_add(&p_643->g_special_values[59 * get_linear_group_id() + 20], result);
        }
        else
        { /* block id: 131 */
            (1 + 1);
        }
        for (p_643->g_17 = 0; (p_643->g_17 < (-22)); p_643->g_17--)
        { /* block id: 136 */
            int32_t *l_287 = &p_643->g_66[1][1];
            int32_t **l_289 = &p_643->g_151;
            struct S0 *l_294 = &p_643->g_109[6][0][4];
            (*l_287) = l_286;
            (*l_294) = func_80(((((p_643->g_109[7][1][1].f2 && ((VECTOR(uint16_t, 4))(l_288.s7e73)).x) , ((((*l_289) = &p_643->g_66[1][4]) != (void*)0) > (safe_rshift_func_int16_t_s_u((-5L), (l_287 == &p_57))))) , &p_643->g_19) == l_292), (p_643->g_293 = &l_71), p_643->g_109[7][1][1].f0, p_643);
        }
    }
    (*l_298) = l_295;
    p_643->g_151 = &p_643->g_66[1][1];
    (*p_643->g_151) = ((safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s((p_59 >= (safe_div_func_uint64_t_u_u((l_71 > (safe_sub_func_uint32_t_u_u(((GROUP_DIVERGE(2, 1) , ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(p_643->g_307.s7865)), (int32_t)(p_58 > (safe_add_func_uint32_t_u_u(p_643->g_109[7][1][1].f1, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_310.zxxx)).ywwywzwyzyzzyzwz)).lo, ((VECTOR(int32_t, 16))(l_311.yyyyxyxyyyxyyxyx)).lo))).s6))), (int32_t)1L))).z) == ((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_64, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x4180406FL, 9L)))).xyxxxxxx)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_314.yyxyyxxx)), (-6L), ((VECTOR(int32_t, 2))((-7L), 0x28593850L)), ((VECTOR(int32_t, 2))(0x3C4642A1L, 0x74A95140L)), ((VECTOR(int32_t, 2))(0x459483E7L, 0x3407743AL)), 9L)).lo))).s16, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(l_315.yywzxwzz)), (int32_t)(~(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((-1L), ((VECTOR(int8_t, 2))(l_318.yy)), 9L)).even)).hi < ((void*)0 == (**l_298))))))).s71))), 0x4BA1DD80L)))))).z, l_288.sb)) >= 0x23E2L)), 0x1E04881BL))), 18446744073709551615UL))), 0x77L)) <= l_319), 3)) , (-2L));
    return l_320;
}


/* ------------------------------------------ */
/* 
 * reads : p_643->g_19 p_643->g_116 p_643->g_109.f0 p_643->g_92
 * writes: p_643->g_116 p_643->g_151
 */
int32_t  func_75(struct S0  p_76, uint16_t  p_77, uint32_t * p_78, int64_t  p_79, struct S2 * p_643)
{ /* block id: 26 */
    uint32_t l_111[8];
    struct S0 l_112 = {0x4344FC8FL,-7L,0UL,0x4CL,0UL,18446744073709551615UL};
    uint16_t *l_115 = &p_643->g_116[1][0];
    int32_t *l_121[1][3];
    uint16_t l_122 = 0UL;
    int8_t l_145 = 0x42L;
    uint32_t l_147 = 0UL;
    int8_t l_154 = 0x3EL;
    int i, j;
    for (i = 0; i < 8; i++)
        l_111[i] = 0xC60711D4L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_121[i][j] = (void*)0;
    }
    l_122 = ((l_111[0] < p_643->g_19) & (1L >= (+(((p_76.f4 , ((p_76.f5 > (-1L)) < (l_112 , ((((safe_lshift_func_uint16_t_u_s((++(*l_115)), (safe_sub_func_int32_t_s_s(l_112.f1, p_76.f4)))) > 0xF4L) == p_643->g_109[7][1][1].f0) , p_643->g_92)))) < 0x0EL) == l_112.f5))));
    for (p_76.f3 = 0; (p_76.f3 < (-21)); p_76.f3 = safe_sub_func_uint16_t_u_u(p_76.f3, 4))
    { /* block id: 31 */
        int16_t l_125 = 0x0D4BL;
        int32_t l_126 = 0x0560A057L;
        int32_t l_127 = 8L;
        int32_t l_128 = 5L;
        int32_t l_129 = (-3L);
        int32_t l_130 = 0L;
        int32_t l_131 = 1L;
        int32_t l_132 = 0x6CC7ADD9L;
        int32_t l_133 = 0L;
        int32_t l_134 = 0x53DE24A4L;
        int32_t l_135 = 1L;
        int32_t l_136 = (-1L);
        int32_t l_137 = 1L;
        int32_t l_138 = 0x3750C1D0L;
        int32_t l_139 = 0x238BE1AEL;
        int32_t l_140 = 0x73AD263BL;
        int32_t l_141 = 0x49C438BBL;
        int32_t l_142 = (-2L);
        int32_t l_143 = 0x6D2A347AL;
        int32_t l_144[2];
        int32_t l_146[2][6][8] = {{{1L,1L,0x36CEE076L,0x51362EE1L,(-1L),(-1L),0x51362EE1L,0x36CEE076L},{1L,1L,0x36CEE076L,0x51362EE1L,(-1L),(-1L),0x51362EE1L,0x36CEE076L},{1L,1L,0x36CEE076L,0x51362EE1L,(-1L),(-1L),0x51362EE1L,0x36CEE076L},{1L,1L,0x36CEE076L,0x51362EE1L,(-1L),(-1L),0x51362EE1L,0x36CEE076L},{1L,1L,0x36CEE076L,0x51362EE1L,(-1L),(-1L),0x51362EE1L,0x36CEE076L},{1L,1L,0x36CEE076L,0x51362EE1L,(-1L),(-1L),0x51362EE1L,0x36CEE076L}},{{1L,1L,0x36CEE076L,0x51362EE1L,(-1L),(-1L),0x51362EE1L,0x36CEE076L},{1L,1L,0x36CEE076L,0x51362EE1L,(-1L),(-1L),0x51362EE1L,0x36CEE076L},{1L,1L,0x36CEE076L,0x51362EE1L,(-1L),(-1L),0x51362EE1L,0x36CEE076L},{1L,1L,0x36CEE076L,0x51362EE1L,(-1L),(-1L),0x51362EE1L,0x36CEE076L},{1L,1L,0x36CEE076L,0x51362EE1L,(-1L),(-1L),0x51362EE1L,0x36CEE076L},{1L,1L,0x36CEE076L,0x51362EE1L,(-1L),(-1L),0x51362EE1L,0x36CEE076L}}};
        int32_t **l_150[6] = {&l_121[0][1],&l_121[0][1],&l_121[0][1],&l_121[0][1],&l_121[0][1],&l_121[0][1]};
        struct S1 *l_152 = (void*)0;
        struct S1 **l_153 = &l_152;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_144[i] = (-8L);
        ++l_147;
        p_643->g_151 = l_121[0][2];
        (*l_153) = l_152;
    }
    return l_154;
}


/* ------------------------------------------ */
/* 
 * reads : p_643->g_109
 * writes:
 */
struct S0  func_80(int64_t  p_81, int32_t * p_82, int64_t  p_83, struct S2 * p_643)
{ /* block id: 23 */
    int32_t *l_96 = &p_643->g_66[1][1];
    int32_t l_97[9] = {0x66801B04L,0x66801B04L,0x66801B04L,0x66801B04L,0x66801B04L,0x66801B04L,0x66801B04L,0x66801B04L,0x66801B04L};
    int32_t *l_98 = &l_97[0];
    int32_t *l_99 = &p_643->g_66[0][5];
    int32_t *l_100 = &p_643->g_66[1][1];
    int32_t *l_101 = &l_97[2];
    int32_t *l_102 = &p_643->g_66[1][1];
    int32_t *l_103[4];
    int16_t l_104 = 0x11B7L;
    int16_t l_105 = 0x6819L;
    uint32_t l_106 = 1UL;
    int i;
    for (i = 0; i < 4; i++)
        l_103[i] = &p_643->g_66[1][1];
    l_106--;
    return p_643->g_109[7][1][1];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[59];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 59; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[59];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 59; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[24];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 24; i++)
            l_comm_values[i] = 1;
    struct S2 c_644;
    struct S2* p_643 = &c_644;
    struct S2 c_645 = {
        (-1L), // p_643->g_2
        0L, // p_643->g_3
        (-1L), // p_643->g_4
        0x72D714F9L, // p_643->g_14
        0L, // p_643->g_17
        0L, // p_643->g_19
        1L, // p_643->g_20
        6UL, // p_643->g_61
        {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}}, // p_643->g_66
        0xBDFBFBE831782E4DL, // p_643->g_92
        {{{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}},{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}}},{{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}},{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}}},{{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}},{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}}},{{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}},{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}}},{{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}},{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}}},{{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}},{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}}},{{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}},{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}}},{{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}},{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}}},{{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}},{{4294967295UL,0x04L,1UL,-6L,0x80L,0x701CCAA109753663L},{0x01AE01D7L,1L,0x3162A55EL,0x28L,246UL,18446744073709551611UL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL},{4294967295UL,0x14L,4294967295UL,3L,250UL,0x41E4D89ECE45356EL},{0x8C16D013L,1L,0x5FF7BA7BL,0x16L,0xC2L,0UL}}}}, // p_643->g_109
        {{0x343AL,0x343AL},{0x343AL,0x343AL}}, // p_643->g_116
        (void*)0, // p_643->g_151
        &p_643->g_109[7][1][1].f5, // p_643->g_161
        &p_643->g_161, // p_643->g_160
        (void*)0, // p_643->g_293
        {0x0FA22693592F9006L,{0x69A736B2L,0x30L,1UL,-6L,0UL,0UL},0x03D52B50L,0x5137B58B6E548B2BL,0x5BBBD1D20C5E9B8AL,0xB8F95EBDL}, // p_643->g_297
        (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, (-3L)), (-3L)), (-3L), 4L, (-3L), (VECTOR(int32_t, 2))(4L, (-3L)), (VECTOR(int32_t, 2))(4L, (-3L)), 4L, (-3L), 4L, (-3L)), // p_643->g_307
        {-5L,{0x874DD887L,0x2CL,4294967295UL,0x6FL,0x9EL,0x5BFDD633D50D6AADL},4294967292UL,-9L,0UL,0x19C1D5E6L}, // p_643->g_325
        (VECTOR(int32_t, 4))(0x36D60BB5L, (VECTOR(int32_t, 2))(0x36D60BB5L, (-5L)), (-5L)), // p_643->g_332
        {{5L,0x432A8A94L,0x432A8A94L,5L},{5L,0x432A8A94L,0x432A8A94L,5L},{5L,0x432A8A94L,0x432A8A94L,5L},{5L,0x432A8A94L,0x432A8A94L,5L},{5L,0x432A8A94L,0x432A8A94L,5L},{5L,0x432A8A94L,0x432A8A94L,5L},{5L,0x432A8A94L,0x432A8A94L,5L},{5L,0x432A8A94L,0x432A8A94L,5L}}, // p_643->g_335
        0x267EAECDL, // p_643->g_337
        {0x7CF0C4822256AF57L,{0xD2400230L,0x1CL,0xAE1448DFL,0x5AL,0x98L,0x78DC329F5B34B88DL},0x20466BECL,0x7DCA204065E25FE5L,0x280ABCBDDF6D6762L,4294967295UL}, // p_643->g_382
        {0x01433C092AE74400L,{0UL,8L,0xB06B7622L,0L,0x71L,0UL},0x1AAA1142L,5L,0x143F33EE4D375C35L,4294967294UL}, // p_643->g_385
        &p_643->g_385, // p_643->g_384
        0x4F373AE2L, // p_643->g_407
        {0x48837498686A73B0L,{0xFF2831B1L,-9L,0xC7184408L,0x4CL,0x8CL,18446744073709551615UL},0x88F6A7C8L,0x3A98A0E97A4C8850L,0x3412A59EBC3FE0A5L,0UL}, // p_643->g_409
        (VECTOR(uint16_t, 2))(0x54BFL, 0UL), // p_643->g_423
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xBBECL), 0xBBECL), // p_643->g_425
        {0x106F3E371D5D2954L,(-5L),0x106F3E371D5D2954L,0x106F3E371D5D2954L,(-5L),0x106F3E371D5D2954L,0x106F3E371D5D2954L}, // p_643->g_427
        (-1L), // p_643->g_429
        {0x0443DF415F39A45AL,{0UL,-1L,0x7EE5B0C1L,0x2EL,8UL,0xAB3E17ED84F6CA23L},0xD47C7E69L,7L,0x5C0B02FA694F03BEL,0x1EC7EC1FL}, // p_643->g_430
        0x02FFL, // p_643->g_442
        {{{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293}},{{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293}},{{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293}},{{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293},{&p_643->g_151,&p_643->g_151,&p_643->g_293}}}, // p_643->g_458
        &p_643->g_458[2][1][1], // p_643->g_457
        &p_643->g_297.f1, // p_643->g_459
        6UL, // p_643->g_488
        &p_643->g_325.f1.f4, // p_643->g_496
        {0x72FA8558E332002EL,{0xB03C8D9DL,0x30L,1UL,0x33L,0x4DL,9UL},5UL,-1L,2UL,0x3A801628L}, // p_643->g_554
        {{{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1}},{{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1}},{{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1}},{{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1}},{{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1},{&p_643->g_382.f1,&p_643->g_109[7][1][1],(void*)0,&p_643->g_382.f1,&p_643->g_297.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1,&p_643->g_382.f1}}}, // p_643->g_557
        {{&p_643->g_109[2][0][3],&p_643->g_297.f1},{&p_643->g_109[2][0][3],&p_643->g_297.f1},{&p_643->g_109[2][0][3],&p_643->g_297.f1},{&p_643->g_109[2][0][3],&p_643->g_297.f1},{&p_643->g_109[2][0][3],&p_643->g_297.f1},{&p_643->g_109[2][0][3],&p_643->g_297.f1}}, // p_643->g_558
        (VECTOR(int8_t, 16))(5L, (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0x74L), 0x74L), 0x74L, 5L, 0x74L, (VECTOR(int8_t, 2))(5L, 0x74L), (VECTOR(int8_t, 2))(5L, 0x74L), 5L, 0x74L, 5L, 0x74L), // p_643->g_586
        &p_643->g_384, // p_643->g_639
        &p_643->g_639, // p_643->g_638
        {{{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14}},{{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14}},{{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14}},{{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14}},{{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14}},{{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14}},{{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14}},{{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14}},{{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14}},{{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14},{&p_643->g_14}}}, // p_643->g_641
        0, // p_643->v_collective
        sequence_input[get_global_id(0)], // p_643->global_0_offset
        sequence_input[get_global_id(1)], // p_643->global_1_offset
        sequence_input[get_global_id(2)], // p_643->global_2_offset
        sequence_input[get_local_id(0)], // p_643->local_0_offset
        sequence_input[get_local_id(1)], // p_643->local_1_offset
        sequence_input[get_local_id(2)], // p_643->local_2_offset
        sequence_input[get_group_id(0)], // p_643->group_0_offset
        sequence_input[get_group_id(1)], // p_643->group_1_offset
        sequence_input[get_group_id(2)], // p_643->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 24)), permutations[0][get_linear_local_id()])), // p_643->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_644 = c_645;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_643);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_643->g_2, "p_643->g_2", print_hash_value);
    transparent_crc(p_643->g_3, "p_643->g_3", print_hash_value);
    transparent_crc(p_643->g_4, "p_643->g_4", print_hash_value);
    transparent_crc(p_643->g_14, "p_643->g_14", print_hash_value);
    transparent_crc(p_643->g_17, "p_643->g_17", print_hash_value);
    transparent_crc(p_643->g_19, "p_643->g_19", print_hash_value);
    transparent_crc(p_643->g_20, "p_643->g_20", print_hash_value);
    transparent_crc(p_643->g_61, "p_643->g_61", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_643->g_66[i][j], "p_643->g_66[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_643->g_92, "p_643->g_92", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_643->g_109[i][j][k].f0, "p_643->g_109[i][j][k].f0", print_hash_value);
                transparent_crc(p_643->g_109[i][j][k].f1, "p_643->g_109[i][j][k].f1", print_hash_value);
                transparent_crc(p_643->g_109[i][j][k].f2, "p_643->g_109[i][j][k].f2", print_hash_value);
                transparent_crc(p_643->g_109[i][j][k].f3, "p_643->g_109[i][j][k].f3", print_hash_value);
                transparent_crc(p_643->g_109[i][j][k].f4, "p_643->g_109[i][j][k].f4", print_hash_value);
                transparent_crc(p_643->g_109[i][j][k].f5, "p_643->g_109[i][j][k].f5", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_643->g_116[i][j], "p_643->g_116[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_643->g_297.f0, "p_643->g_297.f0", print_hash_value);
    transparent_crc(p_643->g_297.f1.f0, "p_643->g_297.f1.f0", print_hash_value);
    transparent_crc(p_643->g_297.f1.f1, "p_643->g_297.f1.f1", print_hash_value);
    transparent_crc(p_643->g_297.f1.f2, "p_643->g_297.f1.f2", print_hash_value);
    transparent_crc(p_643->g_297.f1.f3, "p_643->g_297.f1.f3", print_hash_value);
    transparent_crc(p_643->g_297.f1.f4, "p_643->g_297.f1.f4", print_hash_value);
    transparent_crc(p_643->g_297.f1.f5, "p_643->g_297.f1.f5", print_hash_value);
    transparent_crc(p_643->g_297.f2, "p_643->g_297.f2", print_hash_value);
    transparent_crc(p_643->g_297.f3, "p_643->g_297.f3", print_hash_value);
    transparent_crc(p_643->g_297.f4, "p_643->g_297.f4", print_hash_value);
    transparent_crc(p_643->g_297.f5, "p_643->g_297.f5", print_hash_value);
    transparent_crc(p_643->g_307.s0, "p_643->g_307.s0", print_hash_value);
    transparent_crc(p_643->g_307.s1, "p_643->g_307.s1", print_hash_value);
    transparent_crc(p_643->g_307.s2, "p_643->g_307.s2", print_hash_value);
    transparent_crc(p_643->g_307.s3, "p_643->g_307.s3", print_hash_value);
    transparent_crc(p_643->g_307.s4, "p_643->g_307.s4", print_hash_value);
    transparent_crc(p_643->g_307.s5, "p_643->g_307.s5", print_hash_value);
    transparent_crc(p_643->g_307.s6, "p_643->g_307.s6", print_hash_value);
    transparent_crc(p_643->g_307.s7, "p_643->g_307.s7", print_hash_value);
    transparent_crc(p_643->g_307.s8, "p_643->g_307.s8", print_hash_value);
    transparent_crc(p_643->g_307.s9, "p_643->g_307.s9", print_hash_value);
    transparent_crc(p_643->g_307.sa, "p_643->g_307.sa", print_hash_value);
    transparent_crc(p_643->g_307.sb, "p_643->g_307.sb", print_hash_value);
    transparent_crc(p_643->g_307.sc, "p_643->g_307.sc", print_hash_value);
    transparent_crc(p_643->g_307.sd, "p_643->g_307.sd", print_hash_value);
    transparent_crc(p_643->g_307.se, "p_643->g_307.se", print_hash_value);
    transparent_crc(p_643->g_307.sf, "p_643->g_307.sf", print_hash_value);
    transparent_crc(p_643->g_325.f0, "p_643->g_325.f0", print_hash_value);
    transparent_crc(p_643->g_325.f1.f0, "p_643->g_325.f1.f0", print_hash_value);
    transparent_crc(p_643->g_325.f1.f1, "p_643->g_325.f1.f1", print_hash_value);
    transparent_crc(p_643->g_325.f1.f2, "p_643->g_325.f1.f2", print_hash_value);
    transparent_crc(p_643->g_325.f1.f3, "p_643->g_325.f1.f3", print_hash_value);
    transparent_crc(p_643->g_325.f1.f4, "p_643->g_325.f1.f4", print_hash_value);
    transparent_crc(p_643->g_325.f1.f5, "p_643->g_325.f1.f5", print_hash_value);
    transparent_crc(p_643->g_325.f2, "p_643->g_325.f2", print_hash_value);
    transparent_crc(p_643->g_325.f3, "p_643->g_325.f3", print_hash_value);
    transparent_crc(p_643->g_325.f4, "p_643->g_325.f4", print_hash_value);
    transparent_crc(p_643->g_325.f5, "p_643->g_325.f5", print_hash_value);
    transparent_crc(p_643->g_332.x, "p_643->g_332.x", print_hash_value);
    transparent_crc(p_643->g_332.y, "p_643->g_332.y", print_hash_value);
    transparent_crc(p_643->g_332.z, "p_643->g_332.z", print_hash_value);
    transparent_crc(p_643->g_332.w, "p_643->g_332.w", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_643->g_335[i][j], "p_643->g_335[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_643->g_337, "p_643->g_337", print_hash_value);
    transparent_crc(p_643->g_382.f0, "p_643->g_382.f0", print_hash_value);
    transparent_crc(p_643->g_382.f1.f0, "p_643->g_382.f1.f0", print_hash_value);
    transparent_crc(p_643->g_382.f1.f1, "p_643->g_382.f1.f1", print_hash_value);
    transparent_crc(p_643->g_382.f1.f2, "p_643->g_382.f1.f2", print_hash_value);
    transparent_crc(p_643->g_382.f1.f3, "p_643->g_382.f1.f3", print_hash_value);
    transparent_crc(p_643->g_382.f1.f4, "p_643->g_382.f1.f4", print_hash_value);
    transparent_crc(p_643->g_382.f1.f5, "p_643->g_382.f1.f5", print_hash_value);
    transparent_crc(p_643->g_382.f2, "p_643->g_382.f2", print_hash_value);
    transparent_crc(p_643->g_382.f3, "p_643->g_382.f3", print_hash_value);
    transparent_crc(p_643->g_382.f4, "p_643->g_382.f4", print_hash_value);
    transparent_crc(p_643->g_382.f5, "p_643->g_382.f5", print_hash_value);
    transparent_crc(p_643->g_385.f0, "p_643->g_385.f0", print_hash_value);
    transparent_crc(p_643->g_385.f1.f0, "p_643->g_385.f1.f0", print_hash_value);
    transparent_crc(p_643->g_385.f1.f1, "p_643->g_385.f1.f1", print_hash_value);
    transparent_crc(p_643->g_385.f1.f2, "p_643->g_385.f1.f2", print_hash_value);
    transparent_crc(p_643->g_385.f1.f3, "p_643->g_385.f1.f3", print_hash_value);
    transparent_crc(p_643->g_385.f1.f4, "p_643->g_385.f1.f4", print_hash_value);
    transparent_crc(p_643->g_385.f1.f5, "p_643->g_385.f1.f5", print_hash_value);
    transparent_crc(p_643->g_385.f2, "p_643->g_385.f2", print_hash_value);
    transparent_crc(p_643->g_385.f3, "p_643->g_385.f3", print_hash_value);
    transparent_crc(p_643->g_385.f4, "p_643->g_385.f4", print_hash_value);
    transparent_crc(p_643->g_385.f5, "p_643->g_385.f5", print_hash_value);
    transparent_crc(p_643->g_407, "p_643->g_407", print_hash_value);
    transparent_crc(p_643->g_409.f0, "p_643->g_409.f0", print_hash_value);
    transparent_crc(p_643->g_409.f1.f0, "p_643->g_409.f1.f0", print_hash_value);
    transparent_crc(p_643->g_409.f1.f1, "p_643->g_409.f1.f1", print_hash_value);
    transparent_crc(p_643->g_409.f1.f2, "p_643->g_409.f1.f2", print_hash_value);
    transparent_crc(p_643->g_409.f1.f3, "p_643->g_409.f1.f3", print_hash_value);
    transparent_crc(p_643->g_409.f1.f4, "p_643->g_409.f1.f4", print_hash_value);
    transparent_crc(p_643->g_409.f1.f5, "p_643->g_409.f1.f5", print_hash_value);
    transparent_crc(p_643->g_409.f2, "p_643->g_409.f2", print_hash_value);
    transparent_crc(p_643->g_409.f3, "p_643->g_409.f3", print_hash_value);
    transparent_crc(p_643->g_409.f4, "p_643->g_409.f4", print_hash_value);
    transparent_crc(p_643->g_409.f5, "p_643->g_409.f5", print_hash_value);
    transparent_crc(p_643->g_423.x, "p_643->g_423.x", print_hash_value);
    transparent_crc(p_643->g_423.y, "p_643->g_423.y", print_hash_value);
    transparent_crc(p_643->g_425.x, "p_643->g_425.x", print_hash_value);
    transparent_crc(p_643->g_425.y, "p_643->g_425.y", print_hash_value);
    transparent_crc(p_643->g_425.z, "p_643->g_425.z", print_hash_value);
    transparent_crc(p_643->g_425.w, "p_643->g_425.w", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_643->g_427[i], "p_643->g_427[i]", print_hash_value);

    }
    transparent_crc(p_643->g_429, "p_643->g_429", print_hash_value);
    transparent_crc(p_643->g_430.f0, "p_643->g_430.f0", print_hash_value);
    transparent_crc(p_643->g_430.f1.f0, "p_643->g_430.f1.f0", print_hash_value);
    transparent_crc(p_643->g_430.f1.f1, "p_643->g_430.f1.f1", print_hash_value);
    transparent_crc(p_643->g_430.f1.f2, "p_643->g_430.f1.f2", print_hash_value);
    transparent_crc(p_643->g_430.f1.f3, "p_643->g_430.f1.f3", print_hash_value);
    transparent_crc(p_643->g_430.f1.f4, "p_643->g_430.f1.f4", print_hash_value);
    transparent_crc(p_643->g_430.f1.f5, "p_643->g_430.f1.f5", print_hash_value);
    transparent_crc(p_643->g_430.f2, "p_643->g_430.f2", print_hash_value);
    transparent_crc(p_643->g_430.f3, "p_643->g_430.f3", print_hash_value);
    transparent_crc(p_643->g_430.f4, "p_643->g_430.f4", print_hash_value);
    transparent_crc(p_643->g_430.f5, "p_643->g_430.f5", print_hash_value);
    transparent_crc(p_643->g_442, "p_643->g_442", print_hash_value);
    transparent_crc(p_643->g_488, "p_643->g_488", print_hash_value);
    transparent_crc(p_643->g_554.f0, "p_643->g_554.f0", print_hash_value);
    transparent_crc(p_643->g_554.f1.f0, "p_643->g_554.f1.f0", print_hash_value);
    transparent_crc(p_643->g_554.f1.f1, "p_643->g_554.f1.f1", print_hash_value);
    transparent_crc(p_643->g_554.f1.f2, "p_643->g_554.f1.f2", print_hash_value);
    transparent_crc(p_643->g_554.f1.f3, "p_643->g_554.f1.f3", print_hash_value);
    transparent_crc(p_643->g_554.f1.f4, "p_643->g_554.f1.f4", print_hash_value);
    transparent_crc(p_643->g_554.f1.f5, "p_643->g_554.f1.f5", print_hash_value);
    transparent_crc(p_643->g_554.f2, "p_643->g_554.f2", print_hash_value);
    transparent_crc(p_643->g_554.f3, "p_643->g_554.f3", print_hash_value);
    transparent_crc(p_643->g_554.f4, "p_643->g_554.f4", print_hash_value);
    transparent_crc(p_643->g_554.f5, "p_643->g_554.f5", print_hash_value);
    transparent_crc(p_643->g_586.s0, "p_643->g_586.s0", print_hash_value);
    transparent_crc(p_643->g_586.s1, "p_643->g_586.s1", print_hash_value);
    transparent_crc(p_643->g_586.s2, "p_643->g_586.s2", print_hash_value);
    transparent_crc(p_643->g_586.s3, "p_643->g_586.s3", print_hash_value);
    transparent_crc(p_643->g_586.s4, "p_643->g_586.s4", print_hash_value);
    transparent_crc(p_643->g_586.s5, "p_643->g_586.s5", print_hash_value);
    transparent_crc(p_643->g_586.s6, "p_643->g_586.s6", print_hash_value);
    transparent_crc(p_643->g_586.s7, "p_643->g_586.s7", print_hash_value);
    transparent_crc(p_643->g_586.s8, "p_643->g_586.s8", print_hash_value);
    transparent_crc(p_643->g_586.s9, "p_643->g_586.s9", print_hash_value);
    transparent_crc(p_643->g_586.sa, "p_643->g_586.sa", print_hash_value);
    transparent_crc(p_643->g_586.sb, "p_643->g_586.sb", print_hash_value);
    transparent_crc(p_643->g_586.sc, "p_643->g_586.sc", print_hash_value);
    transparent_crc(p_643->g_586.sd, "p_643->g_586.sd", print_hash_value);
    transparent_crc(p_643->g_586.se, "p_643->g_586.se", print_hash_value);
    transparent_crc(p_643->g_586.sf, "p_643->g_586.sf", print_hash_value);
    transparent_crc(p_643->v_collective, "p_643->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 59; i++)
            transparent_crc(p_643->g_special_values[i + 59 * get_linear_group_id()], "p_643->g_special_values[i + 59 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 59; i++)
            transparent_crc(p_643->l_special_values[i], "p_643->l_special_values[i]", print_hash_value);
    transparent_crc(p_643->l_comm_values[get_linear_local_id()], "p_643->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_643->g_comm_values[get_linear_group_id() * 24 + get_linear_local_id()], "p_643->g_comm_values[get_linear_group_id() * 24 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
