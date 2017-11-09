// --atomics 5 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 48,2,64 -l 2,2,1
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

__constant uint32_t permutations[10][4] = {
{1,0,2,3}, // permutation 0
{2,0,1,3}, // permutation 1
{3,2,0,1}, // permutation 2
{1,3,2,0}, // permutation 3
{3,2,0,1}, // permutation 4
{3,0,2,1}, // permutation 5
{1,3,2,0}, // permutation 6
{1,0,2,3}, // permutation 7
{3,2,0,1}, // permutation 8
{1,2,0,3} // permutation 9
};

// Seed: 911473074

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint32_t  f0;
};

union U1 {
   uint64_t  f0;
};

struct S2 {
    int32_t g_2;
    int32_t *g_11;
    int32_t ** volatile g_10;
    int32_t g_19;
    int32_t * volatile g_18;
    int32_t g_51;
    int32_t **g_65;
    int32_t *** volatile g_64[1][9];
    int32_t *** volatile g_66[10];
    int32_t *** volatile g_67[9];
    int32_t *** volatile g_68[9][6];
    int8_t g_84;
    volatile int8_t g_86[9][9][3];
    volatile union U0 g_103;
    union U0 g_104;
    volatile VECTOR(int16_t, 8) g_122;
    int8_t g_190[1];
    int64_t *g_191;
    VECTOR(int32_t, 8) g_219;
    volatile VECTOR(int32_t, 16) g_220;
    uint16_t g_248;
    uint16_t g_252;
    uint64_t g_273[3];
    volatile union U0 g_296;
    int32_t ***g_298[3];
    uint16_t g_300[10][1][4];
    int32_t *** volatile g_307;
    int32_t * volatile * volatile g_332;
    int32_t * volatile * volatile *g_331[6];
    int32_t * volatile * volatile **g_330;
    int32_t * volatile * volatile ***g_329;
    int16_t g_340;
    volatile VECTOR(int64_t, 8) g_358;
    uint32_t g_360;
    int64_t g_418;
    volatile VECTOR(int32_t, 2) g_459;
    VECTOR(int32_t, 4) g_461;
    VECTOR(int32_t, 2) g_462;
    VECTOR(int32_t, 4) g_467;
    VECTOR(int32_t, 16) g_468;
    VECTOR(int32_t, 2) g_469;
    VECTOR(int32_t, 16) g_471;
    VECTOR(int16_t, 16) g_472;
    uint64_t g_491;
    volatile union U0 g_494;
    volatile union U0 *g_493;
    volatile union U0 * volatile *g_492[6][7];
    uint8_t g_505[7][1][8];
    VECTOR(int8_t, 16) g_521;
    volatile uint64_t g_530;
    volatile uint64_t *g_529[2][4];
    volatile uint64_t * volatile * volatile g_528;
    int32_t g_547;
    union U1 g_548;
    uint64_t *g_557;
    uint64_t **g_556;
    int16_t g_566;
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
int32_t  func_1(struct S2 * p_572);
union U1  func_5(uint64_t  p_6, struct S2 * p_572);
uint64_t  func_7(int16_t  p_8, struct S2 * p_572);
uint64_t  func_12(int32_t * p_13, struct S2 * p_572);
int32_t * func_14(uint64_t  p_15, uint32_t  p_16, struct S2 * p_572);
int32_t * func_32(uint64_t  p_33, int32_t ** p_34, int8_t  p_35, struct S2 * p_572);
union U0  func_36(uint64_t  p_37, int32_t  p_38, int32_t * p_39, struct S2 * p_572);
int32_t * func_40(int32_t  p_41, int8_t  p_42, uint64_t  p_43, struct S2 * p_572);
int64_t  func_44(int32_t  p_45, struct S2 * p_572);
int32_t  func_59(uint16_t  p_60, int8_t  p_61, struct S2 * p_572);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_572->g_2 p_572->g_10 p_572->g_comm_values p_572->g_18 p_572->g_11 p_572->g_65 p_572->g_19 p_572->g_219 p_572->g_104.f0 p_572->g_296.f0 p_572->g_360 p_572->g_190 p_572->g_51 p_572->g_248 p_572->g_418 p_572->g_300 p_572->l_comm_values p_572->g_340 p_572->g_358 p_572->g_329 p_572->g_330 p_572->g_331 p_572->g_332 p_572->g_468 p_572->g_505 p_572->g_472 p_572->g_521 p_572->g_548 p_572->g_547
 * writes: p_572->g_2 p_572->g_11 p_572->g_19 p_572->g_84 p_572->g_360 p_572->g_418 p_572->g_190 p_572->g_300 p_572->g_248 p_572->g_340 p_572->g_505 p_572->g_528 p_572->g_547
 */
int32_t  func_1(struct S2 * p_572)
{ /* block id: 4 */
    uint32_t l_558[1];
    int32_t l_570 = 0x3DDD031CL;
    uint16_t l_571 = 65535UL;
    int i;
    for (i = 0; i < 1; i++)
        l_558[i] = 4UL;
    for (p_572->g_2 = 0; (p_572->g_2 > (-18)); p_572->g_2 = safe_sub_func_uint32_t_u_u(p_572->g_2, 4))
    { /* block id: 7 */
        uint64_t *l_554 = &p_572->g_491;
        uint64_t **l_553 = &l_554;
        uint64_t ***l_555[10] = {(void*)0,&l_553,(void*)0,&l_553,(void*)0,(void*)0,&l_553,(void*)0,&l_553,(void*)0};
        int32_t l_559 = 0x78B8B7D8L;
        int32_t *l_567 = (void*)0;
        int32_t *l_568 = &p_572->g_547;
        int32_t *l_569[9][5] = {{&p_572->g_19,(void*)0,(void*)0,&p_572->g_2,(void*)0},{&p_572->g_19,(void*)0,(void*)0,&p_572->g_2,(void*)0},{&p_572->g_19,(void*)0,(void*)0,&p_572->g_2,(void*)0},{&p_572->g_19,(void*)0,(void*)0,&p_572->g_2,(void*)0},{&p_572->g_19,(void*)0,(void*)0,&p_572->g_2,(void*)0},{&p_572->g_19,(void*)0,(void*)0,&p_572->g_2,(void*)0},{&p_572->g_19,(void*)0,(void*)0,&p_572->g_2,(void*)0},{&p_572->g_19,(void*)0,(void*)0,&p_572->g_2,(void*)0},{&p_572->g_19,(void*)0,(void*)0,&p_572->g_2,(void*)0}};
        int i, j;
        l_570 = (func_5(func_7(p_572->g_2, p_572), p_572) , ((*l_568) |= ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))((safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(((((+p_572->g_459.x) ^ ((p_572->g_556 = l_553) != &p_572->g_557)) ^ l_558[0]) < (l_559 , (safe_lshift_func_uint8_t_u_s(((((safe_div_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(0UL, p_572->g_566)) <= l_558[0]), l_558[0])) == l_558[0]) & 1L) , p_572->g_521.sd), 0)))), 0xC6L)) != 0UL), 1)), ((VECTOR(int32_t, 2))(1L)), (-7L), ((VECTOR(int32_t, 8))(0x49DD4C02L)), ((VECTOR(int32_t, 2))(0L)), 8L, 0x6C66A042L)), ((VECTOR(int32_t, 16))(0x7BFC7C85L))))).s7));
    }
    l_571 = l_558[0];
    return p_572->g_360;
}


/* ------------------------------------------ */
/* 
 * reads : p_572->g_548
 * writes:
 */
union U1  func_5(uint64_t  p_6, struct S2 * p_572)
{ /* block id: 240 */
    return p_572->g_548;
}


/* ------------------------------------------ */
/* 
 * reads : p_572->g_10 p_572->g_comm_values p_572->g_2 p_572->g_18 p_572->g_19 p_572->g_11 p_572->g_65 p_572->g_358 p_572->g_84 p_572->g_219 p_572->g_104.f0 p_572->g_296.f0 p_572->g_360 p_572->g_190 p_572->g_51 p_572->g_248 p_572->g_418 p_572->g_300 p_572->l_comm_values p_572->g_340 p_572->g_122 p_572->g_329 p_572->g_330 p_572->g_331 p_572->g_332 p_572->g_459 p_572->g_461 p_572->g_462 p_572->g_467 p_572->g_468 p_572->g_469 p_572->g_471 p_572->g_472 p_572->g_492 p_572->g_252 p_572->g_505 p_572->g_521 p_572->g_220 p_572->g_273
 * writes: p_572->g_11 p_572->g_19 p_572->g_360 p_572->l_comm_values p_572->g_84 p_572->g_418 p_572->g_190 p_572->g_300 p_572->g_248 p_572->g_340 p_572->g_491 p_572->g_505 p_572->g_528 p_572->g_273 p_572->g_547
 */
uint64_t  func_7(int16_t  p_8, struct S2 * p_572)
{ /* block id: 8 */
    int32_t *l_9 = (void*)0;
    int32_t ****l_532[5] = {&p_572->g_298[2],&p_572->g_298[2],&p_572->g_298[2],&p_572->g_298[2],&p_572->g_298[2]};
    int32_t *****l_531 = &l_532[2];
    uint32_t l_533 = 0x8337ECB5L;
    uint32_t l_534 = 1UL;
    VECTOR(uint32_t, 16) l_537 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x93CC0973L), 0x93CC0973L), 0x93CC0973L, 1UL, 0x93CC0973L, (VECTOR(uint32_t, 2))(1UL, 0x93CC0973L), (VECTOR(uint32_t, 2))(1UL, 0x93CC0973L), 1UL, 0x93CC0973L, 1UL, 0x93CC0973L);
    VECTOR(uint64_t, 16) l_542 = (VECTOR(uint64_t, 16))(0x5F4094488C67591AL, (VECTOR(uint64_t, 4))(0x5F4094488C67591AL, (VECTOR(uint64_t, 2))(0x5F4094488C67591AL, 0x98EBEE0127A55AD2L), 0x98EBEE0127A55AD2L), 0x98EBEE0127A55AD2L, 0x5F4094488C67591AL, 0x98EBEE0127A55AD2L, (VECTOR(uint64_t, 2))(0x5F4094488C67591AL, 0x98EBEE0127A55AD2L), (VECTOR(uint64_t, 2))(0x5F4094488C67591AL, 0x98EBEE0127A55AD2L), 0x5F4094488C67591AL, 0x98EBEE0127A55AD2L, 0x5F4094488C67591AL, 0x98EBEE0127A55AD2L);
    uint64_t *l_545 = (void*)0;
    uint64_t *l_546 = &p_572->g_273[1];
    int i;
    (*p_572->g_10) = l_9;
    l_534 = ((((((p_572->g_comm_values[p_572->tid] > p_572->g_2) || (&p_572->g_11 != &p_572->g_11)) != func_12(func_14(p_572->g_2, p_572->g_2, p_572), p_572)) ^ (l_531 == (void*)0)) ^ p_8) , l_533);
    p_572->g_547 = ((safe_rshift_func_int8_t_s_u(p_8, p_572->g_521.s1)) >= ((((VECTOR(uint32_t, 2))(l_537.s0c)).hi , ((VECTOR(uint32_t, 8))(0xDCB70D6EL, ((safe_add_func_uint64_t_u_u(8UL, ((!((*l_546) |= (safe_rshift_func_uint16_t_u_u(((((((*p_572->g_18) = (((VECTOR(uint64_t, 16))(l_542.sfd77983784e07378)).s0 > ((safe_rshift_func_int16_t_s_u(6L, 11)) | (p_572->g_467.x >= p_572->g_220.s9)))) , p_8) , p_572->g_252) | p_572->g_219.s5) != p_8), p_572->g_248)))) >= 18446744073709551615UL))) & 1L), p_8, FAKE_DIVERGE(p_572->local_0_offset, get_local_id(0), 10), FAKE_DIVERGE(p_572->local_1_offset, get_local_id(1), 10), p_8, 0x97585F5CL, 0x44A40841L)).s2) , 6UL));
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_572->g_358 p_572->g_84 p_572->g_comm_values p_572->g_219 p_572->g_104.f0 p_572->g_296.f0 p_572->g_360 p_572->g_2 p_572->g_190 p_572->g_51 p_572->g_248 p_572->g_418 p_572->g_300 p_572->l_comm_values p_572->g_340 p_572->g_19 p_572->g_122 p_572->g_18 p_572->g_65 p_572->g_329 p_572->g_330 p_572->g_331 p_572->g_332 p_572->g_459 p_572->g_461 p_572->g_11 p_572->g_462 p_572->g_467 p_572->g_468 p_572->g_469 p_572->g_471 p_572->g_472 p_572->g_492 p_572->g_252 p_572->g_505 p_572->g_521
 * writes: p_572->g_360 p_572->l_comm_values p_572->g_84 p_572->g_418 p_572->g_190 p_572->g_300 p_572->g_248 p_572->g_19 p_572->g_340 p_572->g_11 p_572->g_491 p_572->g_505 p_572->g_528
 */
uint64_t  func_12(int32_t * p_13, struct S2 * p_572)
{ /* block id: 174 */
    VECTOR(int8_t, 8) l_345 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x34L), 0x34L), 0x34L, (-1L), 0x34L);
    VECTOR(int8_t, 4) l_346 = (VECTOR(int8_t, 4))(0x58L, (VECTOR(int8_t, 2))(0x58L, 0x46L), 0x46L);
    int32_t *****l_347 = (void*)0;
    union U1 l_352[8][2] = {{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}}};
    uint32_t l_373 = 0x444A5737L;
    int32_t l_374 = 0x42CD64B7L;
    int32_t l_375 = (-1L);
    int32_t l_379 = (-1L);
    int32_t l_380 = 0x33FD33F5L;
    int32_t l_382 = (-1L);
    int32_t l_383 = 0L;
    int32_t l_385 = (-6L);
    int32_t l_386 = (-1L);
    int32_t l_387 = 0L;
    int32_t l_390 = 0x11EFC76FL;
    int32_t l_393 = 0x7BB600CDL;
    int32_t l_394 = 0x1656931AL;
    int32_t l_395 = 0x01088609L;
    int32_t l_396 = 0L;
    int32_t l_397[2][7] = {{2L,3L,2L,2L,3L,2L,2L},{2L,3L,2L,2L,3L,2L,2L}};
    uint32_t l_401 = 7UL;
    VECTOR(uint32_t, 8) l_416 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x4965E749L), 0x4965E749L), 0x4965E749L, 0UL, 0x4965E749L);
    int8_t l_422[2];
    int32_t l_423 = 0x7B703DBFL;
    int8_t l_451 = 0x2BL;
    VECTOR(int32_t, 8) l_460 = (VECTOR(int32_t, 8))(0x1CB9906EL, (VECTOR(int32_t, 4))(0x1CB9906EL, (VECTOR(int32_t, 2))(0x1CB9906EL, 0x3F9386A2L), 0x3F9386A2L), 0x3F9386A2L, 0x1CB9906EL, 0x3F9386A2L);
    int32_t l_488 = 0x12E24C3CL;
    union U0 **l_495 = (void*)0;
    int64_t *l_503 = (void*)0;
    union U1 *l_527 = &l_352[2][1];
    int i, j;
    for (i = 0; i < 2; i++)
        l_422[i] = 0x5EL;
    if ((((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_345.s26024565)).s5206143572611136)).sfa, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_346.xwxxyyxzwyyzyzwy)))).s1d))).odd , ((void*)0 == l_347)))
    { /* block id: 175 */
        union U1 *l_353 = &l_352[2][1];
        uint32_t *l_359 = &p_572->g_360;
        int32_t ***l_365[3];
        int16_t l_370 = 0x1952L;
        int64_t *l_371[7][6][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        VECTOR(uint32_t, 2) l_372 = (VECTOR(uint32_t, 2))(4294967295UL, 6UL);
        int64_t *l_417[9] = {&p_572->g_418,&p_572->g_418,&p_572->g_418,&p_572->g_418,&p_572->g_418,&p_572->g_418,&p_572->g_418,&p_572->g_418,&p_572->g_418};
        int8_t *l_419[3][9][6] = {{{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84}},{{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84}},{{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84},{(void*)0,&p_572->g_84,&p_572->g_190[0],(void*)0,(void*)0,&p_572->g_84}}};
        int16_t *l_420 = (void*)0;
        int16_t *l_421 = &l_370;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_365[i] = (void*)0;
        l_375 &= (safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))((((*l_353) = l_352[2][1]) , ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((*l_359) = (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(p_572->g_358.s20215212)).s5623112461571776)).s1 , (~FAKE_DIVERGE(p_572->local_2_offset, get_local_id(2), 10)))) ^ ((p_572->l_comm_values[(safe_mod_func_uint32_t_u_u(p_572->tid, 4))] = (((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((!((0x3BEC5C1AL && (((void*)0 == &l_352[2][1]) | ((void*)0 == l_365[1]))) || p_572->g_84)), (safe_rshift_func_int8_t_s_s((-1L), 4)))), ((safe_div_func_int32_t_s_s(l_346.z, 4294967295UL)) ^ 0x015717A754A29311L))) > FAKE_DIVERGE(p_572->group_0_offset, get_group_id(0), 10)) & l_370)) != l_372.x)), l_373)), p_572->g_comm_values[p_572->tid])) > 0x7301L)), ((VECTOR(uint8_t, 2))(1UL)), 0UL)).x, l_374)), p_572->g_219.s6));
        for (p_572->g_84 = (-9); (p_572->g_84 >= 9); p_572->g_84 = safe_add_func_int32_t_s_s(p_572->g_84, 4))
        { /* block id: 182 */
            int8_t l_378[6][5][2] = {{{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L}},{{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L}},{{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L}},{{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L}},{{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L}},{{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L},{0x45L,0x45L}}};
            int32_t l_381 = (-6L);
            int32_t l_384 = (-6L);
            int32_t l_388 = (-8L);
            int32_t l_389 = 0x43EEE192L;
            int32_t l_391 = 1L;
            int32_t l_392[7][3] = {{(-4L),1L,1L},{(-4L),1L,1L},{(-4L),1L,1L},{(-4L),1L,1L},{(-4L),1L,1L},{(-4L),1L,1L},{(-4L),1L,1L}};
            uint8_t l_398 = 0x52L;
            int i, j, k;
            l_398--;
            l_401 &= l_397[0][3];
            l_388 = 4L;
        }
        l_387 = ((!(p_572->g_104.f0 , (((0x42DFED0DL | ((*l_359) &= ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(p_572->g_296.f0, 7)), 3)) | (((l_393 = 3L) >= 0xE81DAA0B3B55C2E9L) , l_394)))) || (((l_423 = (p_572->g_2 && ((safe_mul_func_uint16_t_u_u((FAKE_DIVERGE(p_572->global_2_offset, get_global_id(2), 10) == ((*l_421) = (safe_sub_func_int8_t_s_s((p_572->g_190[0] = (l_385 &= ((p_572->g_418 ^= ((safe_sub_func_int64_t_s_s(((((VECTOR(int64_t, 2))((-1L), 0x6206FE42715B8BACL)).lo <= ((((safe_mod_func_int16_t_s_s((p_572->g_219.s3 && (safe_sub_func_uint32_t_u_u(p_572->g_190[0], p_572->g_219.s6))), p_572->g_104.f0)) || l_416.s2) != GROUP_DIVERGE(2, 1)) > 0x41A4ADD2L)) >= p_572->g_51), p_572->g_248)) | 4UL)) , p_572->g_300[1][0][1]))), 4UL)))), l_375)) == l_422[0]))) && p_572->l_comm_values[(safe_mod_func_uint32_t_u_u(p_572->tid, 4))]) ^ (-9L))) ^ p_572->g_340))) == p_572->g_300[1][0][1]);
        for (l_387 = (-12); (l_387 != (-5)); l_387 = safe_add_func_uint8_t_u_u(l_387, 6))
        { /* block id: 197 */
            return p_572->g_358.s0;
        }
    }
    else
    { /* block id: 200 */
        uint16_t *l_432 = (void*)0;
        uint16_t *l_433 = &p_572->g_300[1][0][2];
        int32_t l_436[2][10] = {{6L,4L,7L,0x3E02146CL,4L,0x3E02146CL,7L,4L,6L,6L},{6L,4L,7L,0x3E02146CL,4L,0x3E02146CL,7L,4L,6L,6L}};
        VECTOR(uint8_t, 16) l_439 = (VECTOR(uint8_t, 16))(0xD0L, (VECTOR(uint8_t, 4))(0xD0L, (VECTOR(uint8_t, 2))(0xD0L, 0UL), 0UL), 0UL, 0xD0L, 0UL, (VECTOR(uint8_t, 2))(0xD0L, 0UL), (VECTOR(uint8_t, 2))(0xD0L, 0UL), 0xD0L, 0UL, 0xD0L, 0UL);
        int16_t *l_440[3][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
        VECTOR(int32_t, 16) l_441 = (VECTOR(int32_t, 16))(0x444A4EEEL, (VECTOR(int32_t, 4))(0x444A4EEEL, (VECTOR(int32_t, 2))(0x444A4EEEL, 5L), 5L), 5L, 0x444A4EEEL, 5L, (VECTOR(int32_t, 2))(0x444A4EEEL, 5L), (VECTOR(int32_t, 2))(0x444A4EEEL, 5L), 0x444A4EEEL, 5L, 0x444A4EEEL, 5L);
        int8_t *l_442 = &p_572->g_84;
        int32_t l_443 = 0x6A7FF5CEL;
        uint16_t *l_444 = &p_572->g_248;
        uint32_t *l_445 = (void*)0;
        uint32_t *l_446 = (void*)0;
        uint32_t *l_447 = (void*)0;
        uint32_t *l_448 = &p_572->g_360;
        union U1 l_454 = {0x7C2344683F3A91DFL};
        VECTOR(int32_t, 2) l_470 = (VECTOR(int32_t, 2))(0x3C74415AL, 0x79A7B6A0L);
        int i, j;
        (*p_572->g_18) = ((l_347 == l_347) | ((*l_448) = (safe_div_func_int32_t_s_s((safe_sub_func_int64_t_s_s((((safe_add_func_uint16_t_u_u(((*l_433)++), ((*l_444) = ((((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((l_436[0][9] > (((((safe_div_func_int16_t_s_s((l_443 = (p_572->g_51 & (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_439.sd8)).xyyxxyyy)).s2 , ((*l_442) = (l_436[0][9] , ((((l_439.s8 != (l_380 && (l_441.s7 &= p_572->g_19))) == 0xBC6A8EBE8ABD83A4L) != p_572->g_84) , p_572->g_2)))))), l_439.s2)) , (void*)0) == &p_572->g_103) < p_572->g_122.s2) >= 1UL)) > 65534UL), 0L, 0x72L, 0x75L)).yywzyyyx)).s77, ((VECTOR(uint8_t, 2))(8UL))))).even != 0x60B5L) > l_439.sc)))) <= (-9L)) | 65527UL), l_439.sf)), 0x750FD09AL))));
        for (l_401 = 0; (l_401 > 31); l_401 = safe_add_func_uint32_t_u_u(l_401, 2))
        { /* block id: 210 */
            return l_451;
        }
        for (p_572->g_340 = 0; (p_572->g_340 != (-19)); p_572->g_340 = safe_sub_func_int32_t_s_s(p_572->g_340, 2))
        { /* block id: 215 */
            int32_t *l_455 = &l_394;
            int32_t **l_456[1];
            int64_t l_487 = 0x1944EFFFF730B868L;
            int i;
            for (i = 0; i < 1; i++)
                l_456[i] = &l_455;
            p_13 = ((*p_572->g_65) = (l_454 , l_455));
            (****p_572->g_329) = p_13;
            (**p_572->g_65) = (safe_lshift_func_uint8_t_u_s(FAKE_DIVERGE(p_572->local_1_offset, get_local_id(1), 10), (((VECTOR(int32_t, 8))(p_572->g_459.xyxyxxxy)).s1 <= ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(l_460.s01755511)).s4153456651302242, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(p_572->g_461.wzzw)).ywyyzwzx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))((**p_572->g_65), (-3L), 0x4232407DL, 5L, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(p_572->g_462.yx)).xyxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x2C39L, 0x3143L)).hi, (safe_lshift_func_int16_t_s_s(l_386, 14)))), 0x1B3893BEL, 0x53424A64L, 4L)).wwwxzxyx)).lo, ((VECTOR(int32_t, 2))(0x050C2F68L, (-1L))).xxyx))), 0x1F4B1341L, ((VECTOR(int32_t, 2))(p_572->g_467.xx)), 2L, 0x7C19BD21L, ((VECTOR(int32_t, 2))(0x0C05EEA3L, 0x4298E453L)), 0x56863FC3L)).odd, ((VECTOR(int32_t, 8))(p_572->g_468.s03c8415f))))).s04)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(p_572->g_469.yyxyyyxyyyxyyxxy)))).s2d, ((VECTOR(int32_t, 8))(l_470.xyyyyxxx)).s12))).xxyx)).xwwwyyxxwwzyxwwx))))).s6566)).yzzwyxwy))).s5161077057102710)).hi, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(0x356A09C9L, (-8L))).xyyyyxxy, ((VECTOR(int32_t, 8))(p_572->g_471.s816312cc))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(p_572->g_472.s457277823dc12e15)).sda, (int16_t)p_572->g_51))), 0x1E59L, (!((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s(p_572->g_360, ((safe_mul_func_int16_t_s_s((((((((safe_add_func_uint32_t_u_u((p_572->g_491 = ((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(l_487, (((l_383 , l_488) < (safe_add_func_uint32_t_u_u((l_439.s0 || p_572->g_19), 0x1F89EAC3L))) , (*l_455)))), (*l_455))) , l_470.x)), p_572->g_300[1][0][1])) , p_572->g_492[1][3]) != l_495) < p_572->g_467.y) & GROUP_DIVERGE(1, 1)) , p_572->g_467.y) >= p_572->g_418), 0x40B8L)) & 1L))), p_572->g_252)), p_572->g_190[0])) != (*p_13))), (-10L), p_572->g_471.s6, ((VECTOR(int16_t, 2))(1L)), 0x6B4CL, ((VECTOR(int16_t, 2))(0x5156L)), ((VECTOR(int16_t, 2))(0L)), p_572->g_19, 0L, 0x1D45L)).sf7, ((VECTOR(int16_t, 2))(0x53DBL))))).yyxx)), p_572->g_469.y, l_443, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 2))((-6L))), 1L, p_572->g_190[0], 0L, (-8L))).sf5d1)).wywxzwzz)).s1026411446431406, ((VECTOR(int16_t, 16))(0x23ACL))))).hi)).s0035114602302605, ((VECTOR(uint16_t, 16))(0x3A54L))))).sc44c)).zwyzwxwy))).s0453360474060270))).s4)));
        }
    }
    if ((*p_572->g_18))
    { /* block id: 223 */
        return p_572->g_468.sf;
    }
    else
    { /* block id: 225 */
        uint16_t l_502 = 1UL;
        uint8_t *l_504 = &p_572->g_505[0][0][7];
        VECTOR(int32_t, 2) l_508 = (VECTOR(int32_t, 2))(0x4C5B704AL, (-1L));
        VECTOR(int64_t, 8) l_511 = (VECTOR(int64_t, 8))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0x533787ACEA2DAE7AL), 0x533787ACEA2DAE7AL), 0x533787ACEA2DAE7AL, 9L, 0x533787ACEA2DAE7AL);
        int16_t *l_518 = (void*)0;
        int16_t *l_519 = &p_572->g_340;
        VECTOR(int8_t, 16) l_520 = (VECTOR(int8_t, 16))(0x32L, (VECTOR(int8_t, 4))(0x32L, (VECTOR(int8_t, 2))(0x32L, 0x70L), 0x70L), 0x70L, 0x32L, 0x70L, (VECTOR(int8_t, 2))(0x32L, 0x70L), (VECTOR(int8_t, 2))(0x32L, 0x70L), 0x32L, 0x70L, 0x32L, 0x70L);
        int8_t *l_522[3][1][10] = {{{&l_422[0],(void*)0,(void*)0,(void*)0,&l_422[0],&l_422[0],(void*)0,(void*)0,(void*)0,&l_422[0]}},{{&l_422[0],(void*)0,(void*)0,(void*)0,&l_422[0],&l_422[0],(void*)0,(void*)0,(void*)0,&l_422[0]}},{{&l_422[0],(void*)0,(void*)0,(void*)0,&l_422[0],&l_422[0],(void*)0,(void*)0,(void*)0,&l_422[0]}}};
        union U1 *l_524 = &l_352[2][1];
        union U1 **l_523 = &l_524;
        union U1 *l_526 = (void*)0;
        union U1 **l_525[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_525[i] = &l_526;
        l_390 ^= (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(p_572->g_358.s3, 4)), (((!(safe_sub_func_int16_t_s_s((l_502 & ((void*)0 == l_503)), ((++(*l_504)) || ((((VECTOR(int32_t, 2))(l_508.yy)).hi , (((safe_div_func_int16_t_s_s(l_508.y, l_508.x)) < (l_460.s6 , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_511.s4120)))).lo)).yyyx)).z)) > (safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s((((l_527 = ((*l_523) = (((((*l_519) = l_460.s6) < ((((p_572->g_190[0] = ((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))(l_520.s88)).xxxyyyyxxyyyyyyy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_572->g_521.s8b21557c84eb8d00))))))).s7) > 0x7AL) <= p_572->g_472.s5) ^ 6UL)) , l_375) , &l_352[2][1]))) == (void*)0) > l_520.s5), p_572->g_505[0][0][7])), l_520.sf)), l_508.x)))) && 0xD90FL))))) , l_508.y) >= 0UL)));
        p_572->g_528 = (void*)0;
    }
    return l_394;
}


/* ------------------------------------------ */
/* 
 * reads : p_572->g_18 p_572->g_19 p_572->g_11 p_572->g_65
 * writes: p_572->g_11 p_572->g_19
 */
int32_t * func_14(uint64_t  p_15, uint32_t  p_16, struct S2 * p_572)
{ /* block id: 10 */
    int32_t **l_17 = &p_572->g_11;
    VECTOR(uint8_t, 16) l_183 = (VECTOR(uint8_t, 16))(0x71L, (VECTOR(uint8_t, 4))(0x71L, (VECTOR(uint8_t, 2))(0x71L, 255UL), 255UL), 255UL, 0x71L, 255UL, (VECTOR(uint8_t, 2))(0x71L, 255UL), (VECTOR(uint8_t, 2))(0x71L, 255UL), 0x71L, 255UL, 0x71L, 255UL);
    uint16_t l_199 = 0xFBEAL;
    VECTOR(uint32_t, 8) l_318 = (VECTOR(uint32_t, 8))(0xDE3800C3L, (VECTOR(uint32_t, 4))(0xDE3800C3L, (VECTOR(uint32_t, 2))(0xDE3800C3L, 7UL), 7UL), 7UL, 0xDE3800C3L, 7UL);
    VECTOR(int64_t, 16) l_319 = (VECTOR(int64_t, 16))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 0x273353137C00744DL), 0x273353137C00744DL), 0x273353137C00744DL, (-2L), 0x273353137C00744DL, (VECTOR(int64_t, 2))((-2L), 0x273353137C00744DL), (VECTOR(int64_t, 2))((-2L), 0x273353137C00744DL), (-2L), 0x273353137C00744DL, (-2L), 0x273353137C00744DL);
    int32_t l_328 = 0x6444203EL;
    int32_t **l_341[1];
    int i;
    for (i = 0; i < 1; i++)
        l_341[i] = &p_572->g_11;
    (*l_17) = (void*)0;
    (*p_572->g_18) = (l_17 != (void*)0);
    for (p_16 = (-15); (p_16 == 26); p_16++)
    { /* block id: 15 */
        if ((atomic_inc(&p_572->l_atomic_input[4]) == 3))
        { /* block id: 17 */
            VECTOR(int32_t, 2) l_22 = (VECTOR(int32_t, 2))(0x54E2B79DL, (-1L));
            VECTOR(int32_t, 8) l_23 = (VECTOR(int32_t, 8))(0x1A4D91F0L, (VECTOR(int32_t, 4))(0x1A4D91F0L, (VECTOR(int32_t, 2))(0x1A4D91F0L, 0x05FCB444L), 0x05FCB444L), 0x05FCB444L, 0x1A4D91F0L, 0x05FCB444L);
            VECTOR(int32_t, 4) l_24 = (VECTOR(int32_t, 4))(0x3BCF59F8L, (VECTOR(int32_t, 2))(0x3BCF59F8L, 0x2E072305L), 0x2E072305L);
            uint32_t l_25 = 0x52DD8607L;
            int i;
            l_25 = ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_22.yyxy)))).odd, ((VECTOR(int32_t, 4))(l_23.s0110)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_24.zw)).xyxyxxyx)).s5721067074244013)))).se6))).hi;
            unsigned int result = 0;
            result += l_22.y;
            result += l_22.x;
            result += l_23.s7;
            result += l_23.s6;
            result += l_23.s5;
            result += l_23.s4;
            result += l_23.s3;
            result += l_23.s2;
            result += l_23.s1;
            result += l_23.s0;
            result += l_24.w;
            result += l_24.z;
            result += l_24.y;
            result += l_24.x;
            result += l_25;
            atomic_add(&p_572->l_special_values[4], result);
        }
        else
        { /* block id: 19 */
            (1 + 1);
        }
    }
    for (p_572->g_19 = (-14); (p_572->g_19 != (-23)); p_572->g_19 = safe_sub_func_uint8_t_u_u(p_572->g_19, 9))
    { /* block id: 25 */
        int8_t l_182 = 0x55L;
        int64_t *l_198 = (void*)0;
        int32_t *l_275 = &p_572->g_19;
        int32_t **l_274 = &l_275;
        uint8_t l_338 = 2UL;
        union U0 **l_342 = (void*)0;
        union U0 *l_343[10] = {(void*)0,&p_572->g_104,(void*)0,(void*)0,&p_572->g_104,(void*)0,(void*)0,&p_572->g_104,(void*)0,(void*)0};
        int32_t l_344 = 1L;
        int i;
        for (p_15 = (-29); (p_15 <= 2); p_15++)
        { /* block id: 28 */
            int32_t ***l_322 = &p_572->g_65;
            int32_t ***l_323 = &l_17;
            int64_t *l_324 = (void*)0;
            int64_t *l_325 = (void*)0;
            int64_t *l_326 = (void*)0;
            int64_t *l_327 = (void*)0;
            int8_t *l_335 = &p_572->g_190[0];
            int32_t ****l_337 = &l_322;
            int32_t *****l_336 = &l_337;
            int16_t *l_339 = &p_572->g_340;
            for (p_16 = (-30); (p_16 == 57); p_16 = safe_add_func_int16_t_s_s(p_16, 6))
            { /* block id: 31 */
                int8_t *l_188 = &p_572->g_84;
                int8_t *l_189 = &p_572->g_190[0];
                int64_t **l_192 = &p_572->g_191;
                int32_t l_197 = 0x0E31EE4CL;
                uint64_t *l_272 = &p_572->g_273[1];
                int32_t **l_306 = &p_572->g_11;
                (1 + 1);
            }
            (**l_322) = (*l_17);
        }
        if ((*p_572->g_18))
            break;
        l_343[3] = (void*)0;
        l_344 ^= p_15;
    }
    return (*l_17);
}


/* ------------------------------------------ */
/* 
 * reads : p_572->g_248 p_572->g_19 p_572->g_273 p_572->g_296 p_572->g_220 p_572->g_300 p_572->g_84 p_572->g_51 p_572->g_219 p_572->g_252 p_572->l_comm_values
 * writes: p_572->g_248 p_572->g_298 p_572->g_51 p_572->g_252
 */
int32_t * func_32(uint64_t  p_33, int32_t ** p_34, int8_t  p_35, struct S2 * p_572)
{ /* block id: 139 */
    int64_t **l_278 = &p_572->g_191;
    uint64_t l_279 = 18446744073709551613UL;
    int32_t ****l_280 = (void*)0;
    int16_t l_281[6][3];
    int32_t *l_282[10][8] = {{(void*)0,&p_572->g_19,&p_572->g_19,&p_572->g_19,&p_572->g_51,(void*)0,&p_572->g_19,&p_572->g_2},{(void*)0,&p_572->g_19,&p_572->g_19,&p_572->g_19,&p_572->g_51,(void*)0,&p_572->g_19,&p_572->g_2},{(void*)0,&p_572->g_19,&p_572->g_19,&p_572->g_19,&p_572->g_51,(void*)0,&p_572->g_19,&p_572->g_2},{(void*)0,&p_572->g_19,&p_572->g_19,&p_572->g_19,&p_572->g_51,(void*)0,&p_572->g_19,&p_572->g_2},{(void*)0,&p_572->g_19,&p_572->g_19,&p_572->g_19,&p_572->g_51,(void*)0,&p_572->g_19,&p_572->g_2},{(void*)0,&p_572->g_19,&p_572->g_19,&p_572->g_19,&p_572->g_51,(void*)0,&p_572->g_19,&p_572->g_2},{(void*)0,&p_572->g_19,&p_572->g_19,&p_572->g_19,&p_572->g_51,(void*)0,&p_572->g_19,&p_572->g_2},{(void*)0,&p_572->g_19,&p_572->g_19,&p_572->g_19,&p_572->g_51,(void*)0,&p_572->g_19,&p_572->g_2},{(void*)0,&p_572->g_19,&p_572->g_19,&p_572->g_19,&p_572->g_51,(void*)0,&p_572->g_19,&p_572->g_2},{(void*)0,&p_572->g_19,&p_572->g_19,&p_572->g_19,&p_572->g_51,(void*)0,&p_572->g_19,&p_572->g_2}};
    uint16_t l_283 = 7UL;
    uint64_t l_297 = 0xC05D77FBA968B25FL;
    int32_t l_299 = 2L;
    uint16_t *l_301 = &p_572->g_252;
    uint64_t l_302[10] = {0x611CEF4ADC2F53C5L,1UL,0x611CEF4ADC2F53C5L,0x611CEF4ADC2F53C5L,1UL,0x611CEF4ADC2F53C5L,0x611CEF4ADC2F53C5L,1UL,0x611CEF4ADC2F53C5L,0x611CEF4ADC2F53C5L};
    uint8_t l_303 = 0x1BL;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
            l_281[i][j] = (-1L);
    }
    l_283 &= (safe_lshift_func_int16_t_s_u((((((&p_572->g_191 == l_278) , 2L) & l_279) > (l_280 != l_280)) , p_33), l_281[0][1]));
    for (p_572->g_248 = 0; (p_572->g_248 > 2); p_572->g_248 = safe_add_func_uint64_t_u_u(p_572->g_248, 1))
    { /* block id: 143 */
        if ((**p_34))
            break;
    }
    l_303 = (safe_add_func_uint64_t_u_u((p_35 <= (p_572->g_273[1] , (p_35 > (safe_add_func_uint16_t_u_u(((*l_301) |= (((p_572->g_51 |= ((((((0UL && (safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s((p_572->g_273[1] >= (safe_div_func_int16_t_s_s((p_572->g_296 , ((l_297 = (p_572->g_220.se , (**p_34))) < ((p_572->g_298[1] = &p_34) != &p_34))), p_35))), l_299)), (-1L)))) ^ p_572->g_300[1][0][1]) , p_33) != p_33) && p_572->g_84) <= p_35)) < p_33) | p_572->g_219.s0)), l_302[6]))))), p_572->l_comm_values[(safe_mod_func_uint32_t_u_u(p_572->tid, 4))]));
    for (l_299 = (-12); (l_299 != (-4)); l_299 = safe_add_func_int64_t_s_s(l_299, 8))
    { /* block id: 153 */
        return (*p_34);
    }
    return (*p_34);
}


/* ------------------------------------------ */
/* 
 * reads : p_572->g_84 p_572->g_65 p_572->g_104 p_572->g_219 p_572->g_220 p_572->g_2 p_572->g_19 p_572->g_86 p_572->g_248 p_572->g_104.f0 p_572->g_51
 * writes: p_572->g_84 p_572->g_51 p_572->g_11 p_572->g_248
 */
union U0  func_36(uint64_t  p_37, int32_t  p_38, int32_t * p_39, struct S2 * p_572)
{ /* block id: 95 */
    VECTOR(int32_t, 16) l_223 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x6B67C4AAL), 0x6B67C4AAL), 0x6B67C4AAL, (-9L), 0x6B67C4AAL, (VECTOR(int32_t, 2))((-9L), 0x6B67C4AAL), (VECTOR(int32_t, 2))((-9L), 0x6B67C4AAL), (-9L), 0x6B67C4AAL, (-9L), 0x6B67C4AAL);
    VECTOR(int32_t, 4) l_225 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x4CA45347L), 0x4CA45347L);
    VECTOR(int32_t, 8) l_227 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x0A74FBB1L), 0x0A74FBB1L), 0x0A74FBB1L, 3L, 0x0A74FBB1L);
    VECTOR(int32_t, 2) l_237 = (VECTOR(int32_t, 2))(1L, 5L);
    int32_t *l_264 = &p_572->g_19;
    int32_t *l_265 = (void*)0;
    int32_t *l_266 = (void*)0;
    int32_t *l_267[3][4] = {{&p_572->g_51,&p_572->g_51,&p_572->g_51,&p_572->g_51},{&p_572->g_51,&p_572->g_51,&p_572->g_51,&p_572->g_51},{&p_572->g_51,&p_572->g_51,&p_572->g_51,&p_572->g_51}};
    int8_t l_268 = 3L;
    uint64_t l_269[2];
    int i, j;
    for (i = 0; i < 2; i++)
        l_269[i] = 0x02FD3F3F9A9F736FL;
    for (p_572->g_84 = 0; (p_572->g_84 != 4); p_572->g_84 = safe_add_func_int16_t_s_s(p_572->g_84, 8))
    { /* block id: 98 */
        int32_t *l_207 = &p_572->g_2;
        int32_t l_210 = 9L;
        for (p_572->g_51 = (-1); (p_572->g_51 >= (-17)); --p_572->g_51)
        { /* block id: 101 */
            (*p_572->g_65) = &p_38;
            for (p_37 = 0; (p_37 <= 24); p_37 = safe_add_func_int16_t_s_s(p_37, 9))
            { /* block id: 105 */
                p_39 = l_207;
                for (p_38 = 0; (p_38 < (-17)); --p_38)
                { /* block id: 109 */
                    return p_572->g_104;
                }
                (*p_572->g_65) = (void*)0;
            }
        }
        if (l_210)
            break;
    }
    for (p_572->g_84 = 13; (p_572->g_84 > (-25)); p_572->g_84 = safe_sub_func_uint8_t_u_u(p_572->g_84, 5))
    { /* block id: 119 */
        int32_t ***l_217 = &p_572->g_65;
        int32_t ****l_216 = &l_217;
        int32_t *****l_218 = &l_216;
        VECTOR(int32_t, 4) l_221 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x71EB6CD4L), 0x71EB6CD4L);
        VECTOR(int32_t, 8) l_222 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 9L), 9L), 9L, 1L, 9L);
        VECTOR(int32_t, 16) l_224 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 6L), 6L), 6L, 1L, 6L, (VECTOR(int32_t, 2))(1L, 6L), (VECTOR(int32_t, 2))(1L, 6L), 1L, 6L, 1L, 6L);
        VECTOR(int32_t, 4) l_226 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-3L)), (-3L));
        VECTOR(int32_t, 2) l_228 = (VECTOR(int32_t, 2))(0x63D96127L, 0x567B30ACL);
        VECTOR(int32_t, 4) l_229 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x36EDEB6AL), 0x36EDEB6AL);
        VECTOR(int32_t, 8) l_230 = (VECTOR(int32_t, 8))(0x76538981L, (VECTOR(int32_t, 4))(0x76538981L, (VECTOR(int32_t, 2))(0x76538981L, 0x6AB07489L), 0x6AB07489L), 0x6AB07489L, 0x76538981L, 0x6AB07489L);
        VECTOR(int32_t, 4) l_231 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5AB27499L), 0x5AB27499L);
        int32_t *l_232 = (void*)0;
        int32_t *l_233 = (void*)0;
        int32_t *l_234 = (void*)0;
        int32_t *l_235 = (void*)0;
        int32_t *l_236[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(int32_t, 8) l_238 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
        VECTOR(int32_t, 8) l_239 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 6L), 6L), 6L, 8L, 6L);
        VECTOR(int32_t, 8) l_240 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-3L)), (-3L)), (-3L), 0L, (-3L));
        uint16_t *l_247 = &p_572->g_248;
        uint16_t *l_251[8] = {&p_572->g_252,&p_572->g_252,&p_572->g_252,&p_572->g_252,&p_572->g_252,&p_572->g_252,&p_572->g_252,&p_572->g_252};
        int32_t l_253 = 4L;
        uint16_t l_258 = 0xD5AAL;
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_572->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 4)), permutations[(safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 4))((((*l_218) = l_216) != (((VECTOR(int32_t, 4))(0x550FB86DL, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_572->g_219.s3534370525516544)).even, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_572->g_220.s944c)).odd)).xxyxxyxx))).s62, ((VECTOR(int32_t, 8))(l_221.zyywzzwz)).s21, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(l_222.s5701014253714701)).s85, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_223.s7884dc0c)).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_224.s264d)).yyzwwwyzyzyzyzxy)).s4d)).xyyyxxxy)).s5013340270273103, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(l_225.zx)).xyxxxxyx, ((VECTOR(int32_t, 4))((l_225.y = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_226.xwww)).odd)), 6L, ((VECTOR(int32_t, 2))(1L, 0x585151EAL)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x318EA7C9L, 1L)), ((VECTOR(int32_t, 2))(l_227.s14)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_228.yxxx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(0x7705801BL, 0L, (-2L), 0x59132D1CL)), ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(l_229.wyyy)).yzzzzyzywyxxzyzx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(l_230.s24)).yyyxxxxyyyyyxxxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x4A13136EL, 9L)))).yyxxxyyyyxyyyyxx)).s6393)).wzyxyxwywyyxzwww))).s34)).xyxxyyyyxxxxyyyx))).s0cc5, ((VECTOR(int32_t, 16))(l_231.zzywwyzyxwyywwww)).sc6b9))))).odd)))), 8L, 0x3336FE4CL)).hi)))).s31)), 6L)).s5), 1L, 0x2BADA63FL, 0L)).xwxxwyxy))).s16, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(l_237.xy)).yxxy, (int32_t)(*p_39)))).xzzyyxzwzyzxxzxw)).lo)).s50, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_238.s66)), ((VECTOR(int32_t, 2))(7L, (-1L))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(l_239.s16472525)).s14, ((VECTOR(int32_t, 16))(5L, ((VECTOR(int32_t, 2))(l_240.s66)), (p_572->g_86[7][8][0] , l_227.s5), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x650195E2L, ((VECTOR(int32_t, 8))((safe_mod_func_int64_t_s_s(p_38, (safe_div_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u((l_223.sb ^= ((*l_247)--)), (-2L))) > (l_253 ^ (safe_mul_func_int8_t_s_s(p_38, ((safe_mod_func_uint64_t_u_u(p_38, l_227.s2)) != l_225.w))))) || p_572->g_219.s6), p_37)))), 0x09293B54L, ((VECTOR(int32_t, 2))(0x48E98D1AL)), 0x611F672AL, (*p_39), 0L, 1L)), ((VECTOR(int32_t, 2))(0x181D3445L)), (*p_39), 0x509F462CL, 0x74B93110L, 1L, (-1L))).lo)), 0x179F4EEFL, 0L, 0x04E72912L, 0x00CD2AE6L)).s9b))).yyxxxyxx, ((VECTOR(int32_t, 8))(0x5480133AL)), ((VECTOR(int32_t, 8))((-4L)))))).s22, ((VECTOR(int32_t, 2))(0x78087FA0L)), ((VECTOR(int32_t, 2))((-1L)))))).xyxyyyyx)).s42))), (-1L), 0x0D45560FL, ((VECTOR(int32_t, 2))(0x75525967L)), 1L, 0x0FD79D07L)).s45))).xyyxyxxxxyxxyyxy))))))).sdf00, ((VECTOR(int32_t, 4))(0x4B4B1744L))))).yzzxxwwz)).s23, ((VECTOR(int32_t, 2))(0x57B5DBADL)))))))), (-1L))).z , (void*)0)), p_572->g_104.f0, 1L, 9L)).yywzxywz))))).s3)), 0L)), 10))][(safe_mod_func_uint32_t_u_u(p_572->tid, 4))]));
        if (l_223.s5)
            continue;
        l_258--;
    }
    for (p_37 = 0; (p_37 > 37); p_37 = safe_add_func_int32_t_s_s(p_37, 3))
    { /* block id: 132 */
        int32_t *l_263 = &p_572->g_51;
        (*l_263) &= (l_223.s0 & p_38);
        (*p_572->g_65) = l_264;
    }
    --l_269[1];
    return p_572->g_104;
}


/* ------------------------------------------ */
/* 
 * reads : p_572->g_65
 * writes: p_572->g_11
 */
int32_t * func_40(int32_t  p_41, int8_t  p_42, uint64_t  p_43, struct S2 * p_572)
{ /* block id: 92 */
    int32_t *l_200 = &p_572->g_19;
    (*p_572->g_65) = l_200;
    return l_200;
}


/* ------------------------------------------ */
/* 
 * reads : p_572->g_51 p_572->g_2 p_572->g_65 p_572->g_11 p_572->g_19 p_572->g_103 p_572->g_104 p_572->g_104.f0 p_572->g_122 p_572->g_86 p_572->g_18
 * writes: p_572->g_51 p_572->l_comm_values p_572->g_11
 */
int64_t  func_44(int32_t  p_45, struct S2 * p_572)
{ /* block id: 32 */
    int32_t *l_46[6][8][5] = {{{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2}},{{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2}},{{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2}},{{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2}},{{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2}},{{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2},{&p_572->g_2,&p_572->g_2,&p_572->g_19,&p_572->g_2,&p_572->g_2}}};
    int32_t *l_47 = &p_572->g_19;
    int16_t l_82 = (-1L);
    uint64_t l_89 = 0x9F2272EF4E354F5FL;
    int64_t *l_92[10][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    VECTOR(uint8_t, 2) l_97 = (VECTOR(uint8_t, 2))(0x2AL, 7UL);
    VECTOR(int8_t, 2) l_100 = (VECTOR(int8_t, 2))((-9L), 0x1FL);
    int32_t ***l_101 = &p_572->g_65;
    int32_t ****l_102 = &l_101;
    int32_t ***l_106 = &p_572->g_65;
    int32_t ****l_105 = &l_106;
    int8_t l_107 = (-1L);
    uint32_t l_116 = 0x7382C1A4L;
    int64_t l_117 = 0L;
    VECTOR(int16_t, 2) l_118 = (VECTOR(int16_t, 2))((-1L), 0x55CDL);
    VECTOR(int16_t, 8) l_119 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
    uint64_t l_123 = 0x14CE5E2CB494B6A7L;
    VECTOR(int64_t, 4) l_134 = (VECTOR(int64_t, 4))(0x003008ED15AD85B4L, (VECTOR(int64_t, 2))(0x003008ED15AD85B4L, 0x0E0C7C52FBDF935EL), 0x0E0C7C52FBDF935EL);
    int32_t l_150 = 0x317DDDACL;
    int64_t l_170 = 1L;
    int32_t l_171 = 0x680B8834L;
    int8_t l_172[5];
    uint32_t l_174 = 0UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_172[i] = 1L;
    if ((l_46[2][6][1] == l_47))
    { /* block id: 33 */
        uint8_t l_56 = 0x95L;
        int32_t l_71 = 0L;
        for (p_45 = (-7); (p_45 == (-30)); p_45 = safe_sub_func_int32_t_s_s(p_45, 1))
        { /* block id: 36 */
            int32_t **l_50 = &l_47;
            int32_t l_55 = 1L;
            (*l_50) = l_47;
            for (p_572->g_51 = 0; (p_572->g_51 <= (-8)); p_572->g_51 = safe_sub_func_uint64_t_u_u(p_572->g_51, 3))
            { /* block id: 40 */
                uint16_t l_54 = 65535UL;
                return l_54;
            }
            l_56++;
        }
        l_71 |= ((func_59(p_45, l_56, p_572) , l_46[1][7][2]) != (*p_572->g_65));
    }
    else
    { /* block id: 49 */
        int16_t l_72 = 2L;
        int32_t l_73 = (-1L);
        int32_t l_74 = 7L;
        int32_t l_75 = 0x37A404EFL;
        int32_t l_76 = 0L;
        int32_t l_77 = 0x47FBB040L;
        int32_t l_78 = 0x029035E4L;
        int32_t l_79 = (-1L);
        int32_t l_80 = 0x16062B7EL;
        int32_t l_81[10][1];
        int64_t l_83 = (-1L);
        int32_t l_85 = 0x61C1880EL;
        int32_t l_87 = 0x130C64E2L;
        int32_t l_88[4][4][4] = {{{0L,6L,0x36F420A4L,0x36F420A4L},{0L,6L,0x36F420A4L,0x36F420A4L},{0L,6L,0x36F420A4L,0x36F420A4L},{0L,6L,0x36F420A4L,0x36F420A4L}},{{0L,6L,0x36F420A4L,0x36F420A4L},{0L,6L,0x36F420A4L,0x36F420A4L},{0L,6L,0x36F420A4L,0x36F420A4L},{0L,6L,0x36F420A4L,0x36F420A4L}},{{0L,6L,0x36F420A4L,0x36F420A4L},{0L,6L,0x36F420A4L,0x36F420A4L},{0L,6L,0x36F420A4L,0x36F420A4L},{0L,6L,0x36F420A4L,0x36F420A4L}},{{0L,6L,0x36F420A4L,0x36F420A4L},{0L,6L,0x36F420A4L,0x36F420A4L},{0L,6L,0x36F420A4L,0x36F420A4L},{0L,6L,0x36F420A4L,0x36F420A4L}}};
        int i, j, k;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 1; j++)
                l_81[i][j] = 0x38C9F0A9L;
        }
        ++l_89;
        l_81[7][0] |= (-9L);
    }
    l_107 = (4UL >= (p_45 == (((p_572->l_comm_values[(safe_mod_func_uint32_t_u_u(p_572->tid, 4))] = p_572->g_51) <= (safe_sub_func_uint64_t_u_u((*l_47), (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 2))(0x05L, 0x57L)).yxxxyxyy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_97.xxyx)).yxzzzyxx)).s1614001262331111)).lo))).s5, (safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_100.yxyy)).wzxzyyzy)).s2, ((!(((*l_102) = l_101) == ((*l_105) = ((p_572->g_103 , p_572->g_104) , &p_572->g_65)))) , ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(7L, ((VECTOR(int8_t, 2))(0L)), (-1L))).even)), (-3L), 0x69L, (-4L), ((VECTOR(int8_t, 2))(0x06L)), 1L)).s3)))))))) >= p_572->g_19)));
    if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((safe_add_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((-1L), (safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(p_572->g_104.f0, l_116)), l_117)))) && (!p_45)), (0x91F9L < ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))(l_118.xxxx)).wxyxwyyy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_119.s51)).xyxyyyxx))))).s5))), (l_123 = (safe_div_func_int16_t_s_s(((VECTOR(int16_t, 8))(1L, ((void*)0 != (**l_102)), 0x2521L, 9L, ((VECTOR(int16_t, 4))(p_572->g_122.s3142)))).s1, (*l_47)))), 0L, ((VECTOR(int32_t, 4))(0x4DE4B25AL)), p_45, ((VECTOR(int32_t, 2))((-6L))), (-2L), ((VECTOR(int32_t, 4))(0x2BE1988FL)), (-5L))).s94)).odd)
    { /* block id: 58 */
        int8_t l_127 = 0x08L;
        for (p_45 = 23; (p_45 > (-9)); p_45 = safe_sub_func_int64_t_s_s(p_45, 7))
        { /* block id: 61 */
            int32_t ****l_126 = &l_101;
            int32_t l_128 = (-4L);
            l_127 ^= (p_45 != ((void*)0 != l_126));
            l_128 |= (p_572->g_122.s7 >= FAKE_DIVERGE(p_572->local_2_offset, get_local_id(2), 10));
        }
    }
    else
    { /* block id: 65 */
        int32_t ****l_135 = &l_106;
        int8_t *l_138 = (void*)0;
        int8_t *l_139 = &l_107;
        uint64_t l_140 = 0xC7A06C4D78A4ADEAL;
        int64_t l_151 = 0x1A175C95F3D1AF90L;
        int32_t l_152 = 0x107BAB83L;
        int32_t l_153 = (-4L);
        int32_t l_154 = (-2L);
        int32_t l_155 = 0x1ACBA701L;
        int32_t l_156 = 0x3ED18ACDL;
        int32_t l_157 = (-9L);
        int32_t l_158 = 0x08D5C7EEL;
        int32_t l_159 = 0x0E57F7A5L;
        int32_t l_160 = 0x36387E98L;
        int32_t l_161 = 0L;
        int32_t l_162 = 0x105E9913L;
        int32_t l_163 = 0L;
        int16_t l_164 = (-4L);
        int32_t l_165 = 0L;
        int32_t l_166 = 0x1EE5B194L;
        int32_t l_167 = (-1L);
        int32_t l_168 = 0x5A4567D5L;
        int32_t l_169[6][7] = {{0x56E7B456L,1L,0x56E7B456L,0x56E7B456L,1L,0x56E7B456L,0x56E7B456L},{0x56E7B456L,1L,0x56E7B456L,0x56E7B456L,1L,0x56E7B456L,0x56E7B456L},{0x56E7B456L,1L,0x56E7B456L,0x56E7B456L,1L,0x56E7B456L,0x56E7B456L},{0x56E7B456L,1L,0x56E7B456L,0x56E7B456L,1L,0x56E7B456L,0x56E7B456L},{0x56E7B456L,1L,0x56E7B456L,0x56E7B456L,1L,0x56E7B456L,0x56E7B456L},{0x56E7B456L,1L,0x56E7B456L,0x56E7B456L,1L,0x56E7B456L,0x56E7B456L}};
        int32_t l_173 = (-8L);
        int8_t l_177 = 0x4FL;
        int8_t l_178 = 3L;
        uint8_t l_179[4][9] = {{0xEFL,0x21L,0x21L,0xEFL,0xEFL,0x21L,0x21L,0xEFL,0xEFL},{0xEFL,0x21L,0x21L,0xEFL,0xEFL,0x21L,0x21L,0xEFL,0xEFL},{0xEFL,0x21L,0x21L,0xEFL,0xEFL,0x21L,0x21L,0xEFL,0xEFL},{0xEFL,0x21L,0x21L,0xEFL,0xEFL,0x21L,0x21L,0xEFL,0xEFL}};
        int i, j;
        l_140 &= (safe_mul_func_uint8_t_u_u(((p_45 | (safe_unary_minus_func_int64_t_s(((VECTOR(int64_t, 16))((-1L), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x16EEFBF3D70697DDL, 0x428D75F4FC46E8A2L)).yxyx)), p_572->g_86[0][6][2], ((VECTOR(int64_t, 4))(l_134.xzzy)), p_572->g_122.s1, 0x5E76F72BF05E4498L, 0x270BE18EF67C42C5L, (-5L), 0x5442B1254AFA737EL, 1L)).sf))) | (l_135 != l_135)), (safe_rshift_func_int8_t_s_s(((*l_139) = p_572->g_19), 3))));
        for (l_89 = (-24); (l_89 == 49); l_89++)
        { /* block id: 70 */
            uint8_t l_143 = 255UL;
            l_143++;
            for (l_143 = (-17); (l_143 <= 48); l_143++)
            { /* block id: 74 */
                for (p_572->g_51 = 0; (p_572->g_51 > (-8)); p_572->g_51 = safe_sub_func_int8_t_s_s(p_572->g_51, 3))
                { /* block id: 77 */
                    (*p_572->g_65) = (***l_135);
                    if ((*p_572->g_18))
                        break;
                    return p_45;
                }
            }
            return p_45;
        }
        l_174--;
        --l_179[1][5];
    }
    return p_572->g_51;
}


/* ------------------------------------------ */
/* 
 * reads : p_572->g_2
 * writes:
 */
int32_t  func_59(uint16_t  p_60, int8_t  p_61, struct S2 * p_572)
{ /* block id: 45 */
    int32_t **l_62 = &p_572->g_11;
    int32_t ***l_63 = (void*)0;
    int32_t ***l_69[6][3][7] = {{{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65},{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65},{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65}},{{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65},{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65},{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65}},{{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65},{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65},{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65}},{{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65},{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65},{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65}},{{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65},{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65},{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65}},{{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65},{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65},{&l_62,&l_62,&p_572->g_65,&l_62,&l_62,&l_62,&p_572->g_65}}};
    int32_t **l_70 = &p_572->g_11;
    int i, j, k;
    l_70 = l_62;
    return p_572->g_2;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[5];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 5; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[5];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 5; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_comm_values[i] = 1;
    struct S2 c_573;
    struct S2* p_572 = &c_573;
    struct S2 c_574 = {
        0x505BA772L, // p_572->g_2
        &p_572->g_2, // p_572->g_11
        &p_572->g_11, // p_572->g_10
        0L, // p_572->g_19
        &p_572->g_19, // p_572->g_18
        (-1L), // p_572->g_51
        &p_572->g_11, // p_572->g_65
        {{&p_572->g_65,&p_572->g_65,&p_572->g_65,&p_572->g_65,&p_572->g_65,&p_572->g_65,&p_572->g_65,&p_572->g_65,&p_572->g_65}}, // p_572->g_64
        {&p_572->g_65,&p_572->g_65,&p_572->g_65,&p_572->g_65,&p_572->g_65,&p_572->g_65,&p_572->g_65,&p_572->g_65,&p_572->g_65,&p_572->g_65}, // p_572->g_66
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_572->g_67
        {{(void*)0,&p_572->g_65,&p_572->g_65,&p_572->g_65,(void*)0,(void*)0},{(void*)0,&p_572->g_65,&p_572->g_65,&p_572->g_65,(void*)0,(void*)0},{(void*)0,&p_572->g_65,&p_572->g_65,&p_572->g_65,(void*)0,(void*)0},{(void*)0,&p_572->g_65,&p_572->g_65,&p_572->g_65,(void*)0,(void*)0},{(void*)0,&p_572->g_65,&p_572->g_65,&p_572->g_65,(void*)0,(void*)0},{(void*)0,&p_572->g_65,&p_572->g_65,&p_572->g_65,(void*)0,(void*)0},{(void*)0,&p_572->g_65,&p_572->g_65,&p_572->g_65,(void*)0,(void*)0},{(void*)0,&p_572->g_65,&p_572->g_65,&p_572->g_65,(void*)0,(void*)0},{(void*)0,&p_572->g_65,&p_572->g_65,&p_572->g_65,(void*)0,(void*)0}}, // p_572->g_68
        0x20L, // p_572->g_84
        {{{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L}},{{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L}},{{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L}},{{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L}},{{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L}},{{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L}},{{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L}},{{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L}},{{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L},{(-1L),0x60L,0L}}}, // p_572->g_86
        {0x8855CF20L}, // p_572->g_103
        {0x265089CDL}, // p_572->g_104
        (VECTOR(int16_t, 8))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x3666L), 0x3666L), 0x3666L, (-10L), 0x3666L), // p_572->g_122
        {3L}, // p_572->g_190
        (void*)0, // p_572->g_191
        (VECTOR(int32_t, 8))(0x1FD7BD93L, (VECTOR(int32_t, 4))(0x1FD7BD93L, (VECTOR(int32_t, 2))(0x1FD7BD93L, 0x6E935176L), 0x6E935176L), 0x6E935176L, 0x1FD7BD93L, 0x6E935176L), // p_572->g_219
        (VECTOR(int32_t, 16))(0x61EEF216L, (VECTOR(int32_t, 4))(0x61EEF216L, (VECTOR(int32_t, 2))(0x61EEF216L, 0x1D5E637FL), 0x1D5E637FL), 0x1D5E637FL, 0x61EEF216L, 0x1D5E637FL, (VECTOR(int32_t, 2))(0x61EEF216L, 0x1D5E637FL), (VECTOR(int32_t, 2))(0x61EEF216L, 0x1D5E637FL), 0x61EEF216L, 0x1D5E637FL, 0x61EEF216L, 0x1D5E637FL), // p_572->g_220
        0xA482L, // p_572->g_248
        0x89A2L, // p_572->g_252
        {0x74513B79E5C5E1D0L,0x74513B79E5C5E1D0L,0x74513B79E5C5E1D0L}, // p_572->g_273
        {0x390318D0L}, // p_572->g_296
        {(void*)0,(void*)0,(void*)0}, // p_572->g_298
        {{{0xB075L,0xB075L,0xB075L,0xB075L}},{{0xB075L,0xB075L,0xB075L,0xB075L}},{{0xB075L,0xB075L,0xB075L,0xB075L}},{{0xB075L,0xB075L,0xB075L,0xB075L}},{{0xB075L,0xB075L,0xB075L,0xB075L}},{{0xB075L,0xB075L,0xB075L,0xB075L}},{{0xB075L,0xB075L,0xB075L,0xB075L}},{{0xB075L,0xB075L,0xB075L,0xB075L}},{{0xB075L,0xB075L,0xB075L,0xB075L}},{{0xB075L,0xB075L,0xB075L,0xB075L}}}, // p_572->g_300
        &p_572->g_65, // p_572->g_307
        &p_572->g_11, // p_572->g_332
        {&p_572->g_332,&p_572->g_332,&p_572->g_332,&p_572->g_332,&p_572->g_332,&p_572->g_332}, // p_572->g_331
        &p_572->g_331[5], // p_572->g_330
        &p_572->g_330, // p_572->g_329
        1L, // p_572->g_340
        (VECTOR(int64_t, 8))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 0x719E74BDE053925CL), 0x719E74BDE053925CL), 0x719E74BDE053925CL, 8L, 0x719E74BDE053925CL), // p_572->g_358
        0x45456FBCL, // p_572->g_360
        6L, // p_572->g_418
        (VECTOR(int32_t, 2))(0x4712FE71L, 0L), // p_572->g_459
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x23B6CBAAL), 0x23B6CBAAL), // p_572->g_461
        (VECTOR(int32_t, 2))((-7L), 0x09851F6FL), // p_572->g_462
        (VECTOR(int32_t, 4))(0x0FE246B8L, (VECTOR(int32_t, 2))(0x0FE246B8L, 0x5B167160L), 0x5B167160L), // p_572->g_467
        (VECTOR(int32_t, 16))(0x149F91BCL, (VECTOR(int32_t, 4))(0x149F91BCL, (VECTOR(int32_t, 2))(0x149F91BCL, 5L), 5L), 5L, 0x149F91BCL, 5L, (VECTOR(int32_t, 2))(0x149F91BCL, 5L), (VECTOR(int32_t, 2))(0x149F91BCL, 5L), 0x149F91BCL, 5L, 0x149F91BCL, 5L), // p_572->g_468
        (VECTOR(int32_t, 2))(0x273D1ED2L, 0x24EF95D2L), // p_572->g_469
        (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x5B5ADE12L), 0x5B5ADE12L), 0x5B5ADE12L, 8L, 0x5B5ADE12L, (VECTOR(int32_t, 2))(8L, 0x5B5ADE12L), (VECTOR(int32_t, 2))(8L, 0x5B5ADE12L), 8L, 0x5B5ADE12L, 8L, 0x5B5ADE12L), // p_572->g_471
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x55C9L), 0x55C9L), 0x55C9L, (-1L), 0x55C9L, (VECTOR(int16_t, 2))((-1L), 0x55C9L), (VECTOR(int16_t, 2))((-1L), 0x55C9L), (-1L), 0x55C9L, (-1L), 0x55C9L), // p_572->g_472
        2UL, // p_572->g_491
        {0x10A9AA3CL}, // p_572->g_494
        &p_572->g_494, // p_572->g_493
        {{&p_572->g_493,(void*)0,(void*)0,&p_572->g_493,&p_572->g_493,(void*)0,(void*)0},{&p_572->g_493,(void*)0,(void*)0,&p_572->g_493,&p_572->g_493,(void*)0,(void*)0},{&p_572->g_493,(void*)0,(void*)0,&p_572->g_493,&p_572->g_493,(void*)0,(void*)0},{&p_572->g_493,(void*)0,(void*)0,&p_572->g_493,&p_572->g_493,(void*)0,(void*)0},{&p_572->g_493,(void*)0,(void*)0,&p_572->g_493,&p_572->g_493,(void*)0,(void*)0},{&p_572->g_493,(void*)0,(void*)0,&p_572->g_493,&p_572->g_493,(void*)0,(void*)0}}, // p_572->g_492
        {{{0x71L,0xCEL,0x26L,0xE1L,1UL,0xE1L,0x26L,0xCEL}},{{0x71L,0xCEL,0x26L,0xE1L,1UL,0xE1L,0x26L,0xCEL}},{{0x71L,0xCEL,0x26L,0xE1L,1UL,0xE1L,0x26L,0xCEL}},{{0x71L,0xCEL,0x26L,0xE1L,1UL,0xE1L,0x26L,0xCEL}},{{0x71L,0xCEL,0x26L,0xE1L,1UL,0xE1L,0x26L,0xCEL}},{{0x71L,0xCEL,0x26L,0xE1L,1UL,0xE1L,0x26L,0xCEL}},{{0x71L,0xCEL,0x26L,0xE1L,1UL,0xE1L,0x26L,0xCEL}}}, // p_572->g_505
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-2L)), (-2L)), (-2L), 1L, (-2L), (VECTOR(int8_t, 2))(1L, (-2L)), (VECTOR(int8_t, 2))(1L, (-2L)), 1L, (-2L), 1L, (-2L)), // p_572->g_521
        0x1B05564B3E282314L, // p_572->g_530
        {{&p_572->g_530,&p_572->g_530,&p_572->g_530,&p_572->g_530},{&p_572->g_530,&p_572->g_530,&p_572->g_530,&p_572->g_530}}, // p_572->g_529
        &p_572->g_529[1][2], // p_572->g_528
        (-4L), // p_572->g_547
        {1UL}, // p_572->g_548
        &p_572->g_491, // p_572->g_557
        &p_572->g_557, // p_572->g_556
        0x5FD2L, // p_572->g_566
        0, // p_572->v_collective
        sequence_input[get_global_id(0)], // p_572->global_0_offset
        sequence_input[get_global_id(1)], // p_572->global_1_offset
        sequence_input[get_global_id(2)], // p_572->global_2_offset
        sequence_input[get_local_id(0)], // p_572->local_0_offset
        sequence_input[get_local_id(1)], // p_572->local_1_offset
        sequence_input[get_local_id(2)], // p_572->local_2_offset
        sequence_input[get_group_id(0)], // p_572->group_0_offset
        sequence_input[get_group_id(1)], // p_572->group_1_offset
        sequence_input[get_group_id(2)], // p_572->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 4)), permutations[0][get_linear_local_id()])), // p_572->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_573 = c_574;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_572);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_572->g_2, "p_572->g_2", print_hash_value);
    transparent_crc(p_572->g_19, "p_572->g_19", print_hash_value);
    transparent_crc(p_572->g_51, "p_572->g_51", print_hash_value);
    transparent_crc(p_572->g_84, "p_572->g_84", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_572->g_86[i][j][k], "p_572->g_86[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_572->g_103.f0, "p_572->g_103.f0", print_hash_value);
    transparent_crc(p_572->g_104.f0, "p_572->g_104.f0", print_hash_value);
    transparent_crc(p_572->g_122.s0, "p_572->g_122.s0", print_hash_value);
    transparent_crc(p_572->g_122.s1, "p_572->g_122.s1", print_hash_value);
    transparent_crc(p_572->g_122.s2, "p_572->g_122.s2", print_hash_value);
    transparent_crc(p_572->g_122.s3, "p_572->g_122.s3", print_hash_value);
    transparent_crc(p_572->g_122.s4, "p_572->g_122.s4", print_hash_value);
    transparent_crc(p_572->g_122.s5, "p_572->g_122.s5", print_hash_value);
    transparent_crc(p_572->g_122.s6, "p_572->g_122.s6", print_hash_value);
    transparent_crc(p_572->g_122.s7, "p_572->g_122.s7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_572->g_190[i], "p_572->g_190[i]", print_hash_value);

    }
    transparent_crc(p_572->g_219.s0, "p_572->g_219.s0", print_hash_value);
    transparent_crc(p_572->g_219.s1, "p_572->g_219.s1", print_hash_value);
    transparent_crc(p_572->g_219.s2, "p_572->g_219.s2", print_hash_value);
    transparent_crc(p_572->g_219.s3, "p_572->g_219.s3", print_hash_value);
    transparent_crc(p_572->g_219.s4, "p_572->g_219.s4", print_hash_value);
    transparent_crc(p_572->g_219.s5, "p_572->g_219.s5", print_hash_value);
    transparent_crc(p_572->g_219.s6, "p_572->g_219.s6", print_hash_value);
    transparent_crc(p_572->g_219.s7, "p_572->g_219.s7", print_hash_value);
    transparent_crc(p_572->g_220.s0, "p_572->g_220.s0", print_hash_value);
    transparent_crc(p_572->g_220.s1, "p_572->g_220.s1", print_hash_value);
    transparent_crc(p_572->g_220.s2, "p_572->g_220.s2", print_hash_value);
    transparent_crc(p_572->g_220.s3, "p_572->g_220.s3", print_hash_value);
    transparent_crc(p_572->g_220.s4, "p_572->g_220.s4", print_hash_value);
    transparent_crc(p_572->g_220.s5, "p_572->g_220.s5", print_hash_value);
    transparent_crc(p_572->g_220.s6, "p_572->g_220.s6", print_hash_value);
    transparent_crc(p_572->g_220.s7, "p_572->g_220.s7", print_hash_value);
    transparent_crc(p_572->g_220.s8, "p_572->g_220.s8", print_hash_value);
    transparent_crc(p_572->g_220.s9, "p_572->g_220.s9", print_hash_value);
    transparent_crc(p_572->g_220.sa, "p_572->g_220.sa", print_hash_value);
    transparent_crc(p_572->g_220.sb, "p_572->g_220.sb", print_hash_value);
    transparent_crc(p_572->g_220.sc, "p_572->g_220.sc", print_hash_value);
    transparent_crc(p_572->g_220.sd, "p_572->g_220.sd", print_hash_value);
    transparent_crc(p_572->g_220.se, "p_572->g_220.se", print_hash_value);
    transparent_crc(p_572->g_220.sf, "p_572->g_220.sf", print_hash_value);
    transparent_crc(p_572->g_248, "p_572->g_248", print_hash_value);
    transparent_crc(p_572->g_252, "p_572->g_252", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_572->g_273[i], "p_572->g_273[i]", print_hash_value);

    }
    transparent_crc(p_572->g_296.f0, "p_572->g_296.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_572->g_300[i][j][k], "p_572->g_300[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_572->g_340, "p_572->g_340", print_hash_value);
    transparent_crc(p_572->g_358.s0, "p_572->g_358.s0", print_hash_value);
    transparent_crc(p_572->g_358.s1, "p_572->g_358.s1", print_hash_value);
    transparent_crc(p_572->g_358.s2, "p_572->g_358.s2", print_hash_value);
    transparent_crc(p_572->g_358.s3, "p_572->g_358.s3", print_hash_value);
    transparent_crc(p_572->g_358.s4, "p_572->g_358.s4", print_hash_value);
    transparent_crc(p_572->g_358.s5, "p_572->g_358.s5", print_hash_value);
    transparent_crc(p_572->g_358.s6, "p_572->g_358.s6", print_hash_value);
    transparent_crc(p_572->g_358.s7, "p_572->g_358.s7", print_hash_value);
    transparent_crc(p_572->g_360, "p_572->g_360", print_hash_value);
    transparent_crc(p_572->g_418, "p_572->g_418", print_hash_value);
    transparent_crc(p_572->g_459.x, "p_572->g_459.x", print_hash_value);
    transparent_crc(p_572->g_459.y, "p_572->g_459.y", print_hash_value);
    transparent_crc(p_572->g_461.x, "p_572->g_461.x", print_hash_value);
    transparent_crc(p_572->g_461.y, "p_572->g_461.y", print_hash_value);
    transparent_crc(p_572->g_461.z, "p_572->g_461.z", print_hash_value);
    transparent_crc(p_572->g_461.w, "p_572->g_461.w", print_hash_value);
    transparent_crc(p_572->g_462.x, "p_572->g_462.x", print_hash_value);
    transparent_crc(p_572->g_462.y, "p_572->g_462.y", print_hash_value);
    transparent_crc(p_572->g_467.x, "p_572->g_467.x", print_hash_value);
    transparent_crc(p_572->g_467.y, "p_572->g_467.y", print_hash_value);
    transparent_crc(p_572->g_467.z, "p_572->g_467.z", print_hash_value);
    transparent_crc(p_572->g_467.w, "p_572->g_467.w", print_hash_value);
    transparent_crc(p_572->g_468.s0, "p_572->g_468.s0", print_hash_value);
    transparent_crc(p_572->g_468.s1, "p_572->g_468.s1", print_hash_value);
    transparent_crc(p_572->g_468.s2, "p_572->g_468.s2", print_hash_value);
    transparent_crc(p_572->g_468.s3, "p_572->g_468.s3", print_hash_value);
    transparent_crc(p_572->g_468.s4, "p_572->g_468.s4", print_hash_value);
    transparent_crc(p_572->g_468.s5, "p_572->g_468.s5", print_hash_value);
    transparent_crc(p_572->g_468.s6, "p_572->g_468.s6", print_hash_value);
    transparent_crc(p_572->g_468.s7, "p_572->g_468.s7", print_hash_value);
    transparent_crc(p_572->g_468.s8, "p_572->g_468.s8", print_hash_value);
    transparent_crc(p_572->g_468.s9, "p_572->g_468.s9", print_hash_value);
    transparent_crc(p_572->g_468.sa, "p_572->g_468.sa", print_hash_value);
    transparent_crc(p_572->g_468.sb, "p_572->g_468.sb", print_hash_value);
    transparent_crc(p_572->g_468.sc, "p_572->g_468.sc", print_hash_value);
    transparent_crc(p_572->g_468.sd, "p_572->g_468.sd", print_hash_value);
    transparent_crc(p_572->g_468.se, "p_572->g_468.se", print_hash_value);
    transparent_crc(p_572->g_468.sf, "p_572->g_468.sf", print_hash_value);
    transparent_crc(p_572->g_469.x, "p_572->g_469.x", print_hash_value);
    transparent_crc(p_572->g_469.y, "p_572->g_469.y", print_hash_value);
    transparent_crc(p_572->g_471.s0, "p_572->g_471.s0", print_hash_value);
    transparent_crc(p_572->g_471.s1, "p_572->g_471.s1", print_hash_value);
    transparent_crc(p_572->g_471.s2, "p_572->g_471.s2", print_hash_value);
    transparent_crc(p_572->g_471.s3, "p_572->g_471.s3", print_hash_value);
    transparent_crc(p_572->g_471.s4, "p_572->g_471.s4", print_hash_value);
    transparent_crc(p_572->g_471.s5, "p_572->g_471.s5", print_hash_value);
    transparent_crc(p_572->g_471.s6, "p_572->g_471.s6", print_hash_value);
    transparent_crc(p_572->g_471.s7, "p_572->g_471.s7", print_hash_value);
    transparent_crc(p_572->g_471.s8, "p_572->g_471.s8", print_hash_value);
    transparent_crc(p_572->g_471.s9, "p_572->g_471.s9", print_hash_value);
    transparent_crc(p_572->g_471.sa, "p_572->g_471.sa", print_hash_value);
    transparent_crc(p_572->g_471.sb, "p_572->g_471.sb", print_hash_value);
    transparent_crc(p_572->g_471.sc, "p_572->g_471.sc", print_hash_value);
    transparent_crc(p_572->g_471.sd, "p_572->g_471.sd", print_hash_value);
    transparent_crc(p_572->g_471.se, "p_572->g_471.se", print_hash_value);
    transparent_crc(p_572->g_471.sf, "p_572->g_471.sf", print_hash_value);
    transparent_crc(p_572->g_472.s0, "p_572->g_472.s0", print_hash_value);
    transparent_crc(p_572->g_472.s1, "p_572->g_472.s1", print_hash_value);
    transparent_crc(p_572->g_472.s2, "p_572->g_472.s2", print_hash_value);
    transparent_crc(p_572->g_472.s3, "p_572->g_472.s3", print_hash_value);
    transparent_crc(p_572->g_472.s4, "p_572->g_472.s4", print_hash_value);
    transparent_crc(p_572->g_472.s5, "p_572->g_472.s5", print_hash_value);
    transparent_crc(p_572->g_472.s6, "p_572->g_472.s6", print_hash_value);
    transparent_crc(p_572->g_472.s7, "p_572->g_472.s7", print_hash_value);
    transparent_crc(p_572->g_472.s8, "p_572->g_472.s8", print_hash_value);
    transparent_crc(p_572->g_472.s9, "p_572->g_472.s9", print_hash_value);
    transparent_crc(p_572->g_472.sa, "p_572->g_472.sa", print_hash_value);
    transparent_crc(p_572->g_472.sb, "p_572->g_472.sb", print_hash_value);
    transparent_crc(p_572->g_472.sc, "p_572->g_472.sc", print_hash_value);
    transparent_crc(p_572->g_472.sd, "p_572->g_472.sd", print_hash_value);
    transparent_crc(p_572->g_472.se, "p_572->g_472.se", print_hash_value);
    transparent_crc(p_572->g_472.sf, "p_572->g_472.sf", print_hash_value);
    transparent_crc(p_572->g_491, "p_572->g_491", print_hash_value);
    transparent_crc(p_572->g_494.f0, "p_572->g_494.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_572->g_505[i][j][k], "p_572->g_505[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_572->g_521.s0, "p_572->g_521.s0", print_hash_value);
    transparent_crc(p_572->g_521.s1, "p_572->g_521.s1", print_hash_value);
    transparent_crc(p_572->g_521.s2, "p_572->g_521.s2", print_hash_value);
    transparent_crc(p_572->g_521.s3, "p_572->g_521.s3", print_hash_value);
    transparent_crc(p_572->g_521.s4, "p_572->g_521.s4", print_hash_value);
    transparent_crc(p_572->g_521.s5, "p_572->g_521.s5", print_hash_value);
    transparent_crc(p_572->g_521.s6, "p_572->g_521.s6", print_hash_value);
    transparent_crc(p_572->g_521.s7, "p_572->g_521.s7", print_hash_value);
    transparent_crc(p_572->g_521.s8, "p_572->g_521.s8", print_hash_value);
    transparent_crc(p_572->g_521.s9, "p_572->g_521.s9", print_hash_value);
    transparent_crc(p_572->g_521.sa, "p_572->g_521.sa", print_hash_value);
    transparent_crc(p_572->g_521.sb, "p_572->g_521.sb", print_hash_value);
    transparent_crc(p_572->g_521.sc, "p_572->g_521.sc", print_hash_value);
    transparent_crc(p_572->g_521.sd, "p_572->g_521.sd", print_hash_value);
    transparent_crc(p_572->g_521.se, "p_572->g_521.se", print_hash_value);
    transparent_crc(p_572->g_521.sf, "p_572->g_521.sf", print_hash_value);
    transparent_crc(p_572->g_530, "p_572->g_530", print_hash_value);
    transparent_crc(p_572->g_547, "p_572->g_547", print_hash_value);
    transparent_crc(p_572->g_548.f0, "p_572->g_548.f0", print_hash_value);
    transparent_crc(p_572->g_566, "p_572->g_566", print_hash_value);
    transparent_crc(p_572->v_collective, "p_572->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 5; i++)
            transparent_crc(p_572->l_special_values[i], "p_572->l_special_values[i]", print_hash_value);
    transparent_crc(p_572->l_comm_values[get_linear_local_id()], "p_572->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_572->g_comm_values[get_linear_group_id() * 4 + get_linear_local_id()], "p_572->g_comm_values[get_linear_group_id() * 4 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
