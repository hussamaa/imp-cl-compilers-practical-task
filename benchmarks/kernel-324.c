// --atomics 2 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 52,25,1 -l 4,5,1
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

__constant uint32_t permutations[10][20] = {
{17,12,7,8,5,15,0,11,10,1,18,14,16,19,3,6,4,13,2,9}, // permutation 0
{12,0,18,17,7,8,10,2,6,13,9,5,11,19,15,1,3,16,4,14}, // permutation 1
{17,6,19,18,5,13,8,4,14,12,3,1,11,10,16,15,2,9,7,0}, // permutation 2
{11,2,12,0,15,4,16,18,10,17,14,1,7,8,13,9,5,6,19,3}, // permutation 3
{3,0,6,16,8,1,18,19,14,15,5,17,10,11,7,13,9,2,4,12}, // permutation 4
{4,11,0,16,9,2,5,6,17,13,3,10,8,19,12,18,14,7,15,1}, // permutation 5
{15,16,2,18,17,4,13,8,12,3,11,9,0,5,19,6,7,10,14,1}, // permutation 6
{3,16,11,7,1,18,14,6,5,8,10,0,9,4,12,13,19,17,15,2}, // permutation 7
{5,13,18,0,10,7,2,17,14,1,9,6,12,3,15,4,16,11,19,8}, // permutation 8
{3,11,0,9,14,15,19,1,12,5,17,2,10,7,4,8,18,13,16,6} // permutation 9
};

// Seed: 1532346327

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int32_t  f0;
   uint32_t  f1;
   int16_t  f2;
};

struct S1 {
    int32_t g_2[1][1];
    uint64_t g_17[5][1];
    int8_t g_38;
    int32_t g_49;
    int32_t * volatile g_48;
    int32_t *g_71;
    int32_t **g_70[6][9][4];
    volatile VECTOR(int8_t, 2) g_82;
    volatile int32_t g_84;
    volatile int32_t *g_83[3];
    uint16_t g_92[9];
    VECTOR(int16_t, 8) g_101;
    uint64_t g_125;
    VECTOR(int64_t, 16) g_149;
    uint32_t g_155;
    volatile VECTOR(int32_t, 8) g_175;
    uint16_t g_188;
    int64_t *g_201;
    union U0 g_232;
    uint8_t g_288;
    uint8_t *g_291[10];
    uint8_t **g_290;
    uint8_t *** volatile g_289;
    uint32_t g_298[3];
    int8_t g_302[7];
    int32_t g_308;
    uint32_t g_322;
    int32_t *** volatile g_325;
    volatile VECTOR(uint16_t, 8) g_330;
    uint16_t g_340;
    int32_t ** volatile g_358;
    volatile VECTOR(int32_t, 8) g_361;
    volatile VECTOR(int8_t, 8) g_367;
    int32_t ** volatile g_374;
    VECTOR(int8_t, 4) g_390;
    VECTOR(uint64_t, 8) g_395;
    VECTOR(uint8_t, 8) g_405;
    int32_t ** volatile g_409;
    int8_t *g_414;
    int64_t g_420;
    volatile union U0 g_427;
    int16_t *g_461;
    int32_t * volatile g_485;
    VECTOR(uint16_t, 8) g_488;
    int16_t g_493;
    VECTOR(int64_t, 2) g_494;
    int8_t *g_505;
    volatile VECTOR(int32_t, 16) g_527;
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
int32_t  func_1(struct S1 * p_552);
uint64_t  func_8(int8_t  p_9, int64_t  p_10, struct S1 * p_552);
int32_t  func_20(int64_t  p_21, uint64_t  p_22, struct S1 * p_552);
int32_t  func_23(int8_t  p_24, int32_t  p_25, uint64_t  p_26, struct S1 * p_552);
int8_t  func_29(int16_t  p_30, int8_t  p_31, int64_t  p_32, int64_t  p_33, struct S1 * p_552);
int16_t  func_45(int8_t * p_46, struct S1 * p_552);
int32_t ** func_50(int8_t * p_51, int8_t * p_52, int32_t  p_53, int32_t  p_54, int32_t ** p_55, struct S1 * p_552);
int8_t * func_56(uint32_t  p_57, uint32_t  p_58, int32_t  p_59, int32_t ** p_60, struct S1 * p_552);
uint32_t  func_61(int8_t * p_62, int16_t  p_63, int32_t * p_64, int8_t * p_65, int8_t * p_66, struct S1 * p_552);
int8_t * func_67(int32_t ** p_68, uint8_t  p_69, struct S1 * p_552);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_552->g_2 p_552->g_361
 * writes: p_552->g_2
 */
int32_t  func_1(struct S1 * p_552)
{ /* block id: 4 */
    uint8_t l_5 = 0UL;
    int32_t **l_507[5] = {&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71};
    int32_t **l_508 = &p_552->g_71;
    VECTOR(uint32_t, 16) l_510 = (VECTOR(uint32_t, 16))(0x9055A70FL, (VECTOR(uint32_t, 4))(0x9055A70FL, (VECTOR(uint32_t, 2))(0x9055A70FL, 4294967290UL), 4294967290UL), 4294967290UL, 0x9055A70FL, 4294967290UL, (VECTOR(uint32_t, 2))(0x9055A70FL, 4294967290UL), (VECTOR(uint32_t, 2))(0x9055A70FL, 4294967290UL), 0x9055A70FL, 4294967290UL, 0x9055A70FL, 4294967290UL);
    uint16_t l_541 = 0x4C5AL;
    VECTOR(int8_t, 4) l_547 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x6DL), 0x6DL);
    int i;
    for (p_552->g_2[0][0] = 22; (p_552->g_2[0][0] < (-24)); --p_552->g_2[0][0])
    { /* block id: 7 */
        int8_t *l_36 = (void*)0;
        int8_t *l_37 = &p_552->g_38;
        int32_t l_39 = 0x3D925D3CL;
        uint32_t l_512 = 4294967295UL;
        int64_t l_516 = 0x489C34FBE6D4F4E4L;
        int32_t l_517 = (-1L);
        int32_t l_518 = (-1L);
        uint8_t l_519 = 1UL;
        int32_t l_526 = 0L;
        int64_t l_546 = (-1L);
        (1 + 1);
    }
    return p_552->g_361.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_552->g_155 p_552->g_420 p_552->g_414 p_552->g_358 p_552->g_427 p_552->g_325 p_552->g_70 p_552->g_92 p_552->g_322 p_552->g_188 p_552->g_125 p_552->g_461 p_552->g_427.f0 p_552->g_38 p_552->g_49 p_552->g_485 p_552->g_71 p_552->g_2 p_552->g_488 p_552->g_493 p_552->g_494 p_552->g_367 p_552->g_101 p_552->g_298
 * writes: p_552->g_414 p_552->g_420 p_552->g_49 p_552->g_71 p_552->g_70 p_552->g_188 p_552->g_125 p_552->g_comm_values p_552->g_308 p_552->g_101
 */
uint64_t  func_8(int8_t  p_9, int64_t  p_10, struct S1 * p_552)
{ /* block id: 151 */
    int8_t *l_412 = &p_552->g_302[4];
    int32_t l_413 = 2L;
    int8_t *l_416 = &p_552->g_302[5];
    int8_t **l_415 = &l_416;
    int64_t *l_419 = &p_552->g_420;
    int32_t **l_445 = &p_552->g_71;
    uint8_t ***l_449 = &p_552->g_290;
    int32_t l_478 = 0x14D82896L;
    int32_t l_480[6][7][6] = {{{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L}},{{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L}},{{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L}},{{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L}},{{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L}},{{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L},{0L,0L,0x2B73D9C5L,(-3L),6L,0L}}};
    uint8_t l_481 = 0UL;
    int32_t *l_486 = &p_552->g_2[0][0];
    VECTOR(uint64_t, 8) l_487 = (VECTOR(uint64_t, 8))(0xEE380B185D4943B1L, (VECTOR(uint64_t, 4))(0xEE380B185D4943B1L, (VECTOR(uint64_t, 2))(0xEE380B185D4943B1L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xEE380B185D4943B1L, 18446744073709551615UL);
    int32_t l_499 = 6L;
    int64_t *l_500[3];
    int16_t *l_501[6][4] = {{&p_552->g_493,(void*)0,&p_552->g_493,(void*)0},{&p_552->g_493,(void*)0,&p_552->g_493,(void*)0},{&p_552->g_493,(void*)0,&p_552->g_493,(void*)0},{&p_552->g_493,(void*)0,&p_552->g_493,(void*)0},{&p_552->g_493,(void*)0,&p_552->g_493,(void*)0},{&p_552->g_493,(void*)0,&p_552->g_493,(void*)0}};
    int32_t *l_502 = &p_552->g_49;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_500[i] = (void*)0;
    if ((((l_412 == ((*l_415) = (p_552->g_414 = &p_9))) ^ ((safe_sub_func_uint32_t_u_u(FAKE_DIVERGE(p_552->local_1_offset, get_local_id(1), 10), p_10)) > (((*l_419) |= p_552->g_155) , 7L))) , l_413))
    { /* block id: 155 */
        int32_t *l_423 = (void*)0;
        int32_t *l_424 = &p_552->g_49;
        int32_t **l_425[9];
        int i;
        for (i = 0; i < 9; i++)
            l_425[i] = &l_424;
        l_413 = ((*l_424) = (safe_mul_func_uint8_t_u_u(0x0FL, (*p_552->g_414))));
        (*l_424) = (&p_552->g_302[0] != &p_9);
        (*p_552->g_358) = &l_413;
    }
    else
    { /* block id: 160 */
        uint16_t *l_426[6] = {(void*)0,&p_552->g_340,(void*)0,(void*)0,&p_552->g_340,(void*)0};
        int32_t l_432 = (-1L);
        int32_t ***l_446 = &p_552->g_70[1][4][3];
        uint8_t ****l_450 = &l_449;
        uint64_t *l_462[6][10][4] = {{{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]}},{{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]}},{{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]}},{{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]}},{{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]}},{{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]},{&p_552->g_17[0][0],&p_552->g_125,&p_552->g_17[1][0],&p_552->g_17[1][0]}}};
        int32_t l_477 = 6L;
        int32_t l_479[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_479[i] = 1L;
        if ((l_426[2] != ((p_552->g_427 , (safe_sub_func_int8_t_s_s((0x2CL < (safe_div_func_uint64_t_u_u((l_432 <= 1L), ((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((*l_450) = ((safe_mul_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(p_9, (((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((!(l_445 == ((*l_446) = (*p_552->g_325)))), (((safe_mul_func_uint16_t_u_u(((p_552->g_92[5] <= 0x5184L) < 9UL), 0x5C6BL)) & 6UL) && 0L))), p_9)) <= 0xB8L) || FAKE_DIVERGE(p_552->group_0_offset, get_group_id(0), 10)))) == p_10), 0xB9L)) , l_449)) != (void*)0), 0x7AL)), p_552->g_322)) || p_9)))), p_9))) , (void*)0)))
        { /* block id: 163 */
            int16_t l_467 = 0x2275L;
            int32_t *l_475 = &l_432;
            int32_t *l_476[6];
            int i;
            for (i = 0; i < 6; i++)
                l_476[i] = &l_413;
            for (p_552->g_188 = 0; (p_552->g_188 != 2); p_552->g_188 = safe_add_func_uint32_t_u_u(p_552->g_188, 9))
            { /* block id: 166 */
                int32_t l_457 = 0x0E26A3C6L;
                uint8_t **l_474 = &p_552->g_291[5];
                for (p_552->g_125 = 0; (p_552->g_125 < 2); p_552->g_125 = safe_add_func_int16_t_s_s(p_552->g_125, 1))
                { /* block id: 169 */
                    int32_t *l_455 = &l_432;
                    int32_t *l_456[8][2] = {{&p_552->g_49,&l_432},{&p_552->g_49,&l_432},{&p_552->g_49,&l_432},{&p_552->g_49,&l_432},{&p_552->g_49,&l_432},{&p_552->g_49,&l_432},{&p_552->g_49,&l_432},{&p_552->g_49,&l_432}};
                    uint16_t l_458 = 0UL;
                    int64_t *l_468 = (void*)0;
                    int64_t *l_469 = (void*)0;
                    int64_t *l_470[7];
                    uint8_t **l_473 = &p_552->g_291[3];
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_470[i] = (void*)0;
                    --l_458;
                    (*l_455) ^= ((void*)0 != p_552->g_461);
                    (*l_455) = ((l_462[0][7][1] != &p_552->g_125) ^ ((safe_rshift_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(p_9, ((0L >= (+(p_9 , (l_467 |= p_552->g_427.f0)))) , (p_552->g_comm_values[p_552->tid] = (p_552->g_38 , p_9))))) | (safe_add_func_uint32_t_u_u((l_473 == l_474), p_552->g_49))), l_457)) == p_9));
                }
            }
            l_481++;
        }
        else
        { /* block id: 178 */
            int32_t l_484 = 0x0E787DF1L;
            (*p_552->g_485) = l_484;
        }
    }
    (*l_445) = l_486;
    (*l_502) |= (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))((-2L), 1L)).xyyy, ((VECTOR(int64_t, 16))(((**l_445) == (p_552->g_101.s6 |= ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 8))(0x17L, ((((VECTOR(uint64_t, 2))(l_487.s14)).odd & (p_552->g_comm_values[p_552->tid] = ((((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 16))(p_552->g_488.s7463521277220412)).even, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(6UL, 7UL)).xyyxyyxxyyxxxxyy)).s1a63, ((VECTOR(uint16_t, 8))((safe_rshift_func_uint8_t_u_s((**l_445), (((0x1721E9462B17663AL | (p_9 == (safe_mul_func_int8_t_s_s((**l_445), 0x93L)))) | (p_552->g_493 , (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(2L, 0x29DE1CB875023B10L)), ((VECTOR(int64_t, 2))(p_552->g_494.xy)), ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 2))(0x6FDEF0B5L, 0x5FE336F4L)).xyyxyyyyxxxyyyxy, ((VECTOR(uint32_t, 4))(FAKE_DIVERGE(p_552->global_2_offset, get_global_id(2), 10), 4294967295UL, 0x75B404B2L, 0x52DABC66L)).xyzxxzwyyxxyxwxw))).s47ec, (int64_t)(p_10 |= ((safe_mul_func_int16_t_s_s((-3L), ((safe_mod_func_int8_t_s_s((((VECTOR(int32_t, 16))((**p_552->g_358), ((VECTOR(int32_t, 8))(0x09040723L)), (*l_486), (*l_486), ((VECTOR(int32_t, 4))((-1L))), 0x16745E3CL)).s3 , l_499), 1UL)) , p_552->g_367.s4))) < p_9))))))).s1 & FAKE_DIVERGE(p_552->group_0_offset, get_group_id(0), 10)))) >= p_9))), 65530UL, 0xD48BL, 0x1567L, 0x267CL, 65527UL, 65535UL, 0UL)).hi))).wyxxzzzz)).s75)), 0x1FB8L, 2UL)).yyywwyyy))).s47, ((VECTOR(uint16_t, 2))(0x9E6BL)), ((VECTOR(uint16_t, 2))(0x10C7L))))), 1UL, 0xB15EL)).wyzzyzzx, ((VECTOR(uint16_t, 8))(65535UL))))).s3 < 0x2AE5L) | 0xB595L))) ^ 18446744073709551615UL), p_10, 4L, ((VECTOR(int8_t, 2))((-1L))), 0x02L, 0x62L)), ((VECTOR(uint8_t, 8))(1UL))))).s2)), ((VECTOR(int64_t, 4))(0x54E8831A993E2E56L)), ((VECTOR(int64_t, 8))(0x451C025F8E835F33L)), 0x0ABE95F94338CA3CL, 0x77A597DFE9DF3FE0L, (-6L))).sdbef, ((VECTOR(int64_t, 4))(0x093D61938761B2B9L))))).xxwyxxzwwzwxwwxz)).se > p_9);
    return p_552->g_298[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_552->g_149 p_552->g_390 p_552->g_101 p_552->g_395 p_552->g_405 p_552->g_17 p_552->g_48 p_552->g_49 p_552->g_409
 * writes: p_552->g_49 p_552->g_71
 */
int32_t  func_20(int64_t  p_21, uint64_t  p_22, struct S1 * p_552)
{ /* block id: 145 */
    uint32_t l_375 = 4294967286UL;
    VECTOR(int8_t, 16) l_388 = (VECTOR(int8_t, 16))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 4L), 4L), 4L, 3L, 4L, (VECTOR(int8_t, 2))(3L, 4L), (VECTOR(int8_t, 2))(3L, 4L), 3L, 4L, 3L, 4L);
    VECTOR(int8_t, 2) l_389 = (VECTOR(int8_t, 2))(0L, (-9L));
    VECTOR(uint16_t, 4) l_400 = (VECTOR(uint16_t, 4))(0x8F9EL, (VECTOR(uint16_t, 2))(0x8F9EL, 1UL), 1UL);
    uint16_t *l_407 = (void*)0;
    uint16_t **l_406 = &l_407;
    int32_t l_408 = 0x247B44BBL;
    int i;
    l_375++;
    l_408 = (((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0x1DL, p_552->g_149.s1)), ((safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(l_388.s047e1c99)), ((VECTOR(int8_t, 4))(l_389.yyxy)).wwyzwzwx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_552->g_390.ww)), (-10L), 0x7AL)).wywzwxyz))).s1, p_21)) || ((((((VECTOR(uint16_t, 16))((p_552->g_101.s5 == (safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(p_552->g_395.s23276274)).lo)).y & (p_552->g_101.s6 >= (((VECTOR(uint16_t, 2))(1UL, 0UL)).even > ((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_400.wwxxwxyyxzwzxzyy)).sbb)), 0xC241L, 6UL)).w, 4)) > 0x2ADA6EE030ADFAF9L)))) & ((VECTOR(int32_t, 4))((!(1UL < (safe_sub_func_uint16_t_u_u(p_21, (safe_mod_func_uint16_t_u_u((((((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 16))(p_552->g_405.s4137322616553442)), (uint8_t)(l_406 == (void*)0), (uint8_t)l_388.sb))).sf >= p_21) > p_552->g_390.z) & FAKE_DIVERGE(p_552->group_2_offset, get_group_id(2), 10)), 0x26A0L)))))), 0x00CBC2F6L, (-1L), (-4L))).z) && p_21) != l_400.w), p_22)), l_388.s7))), p_552->g_101.s0, ((VECTOR(uint16_t, 2))(1UL)), p_22, ((VECTOR(uint16_t, 8))(1UL)), 1UL, 1UL, 65526UL)).s6 < p_552->g_390.x) , p_22) , p_21) , p_552->g_17[1][0])), 0x66F7A1EC9CCD4F23L)), p_22)) ^ l_389.x))) , 0xC57881B9L) ^ l_400.y);
    (*p_552->g_48) &= 2L;
    (*p_552->g_409) = (GROUP_DIVERGE(0, 1) , &l_408);
    return (*p_552->g_48);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_23(int8_t  p_24, int32_t  p_25, uint64_t  p_26, struct S1 * p_552)
{ /* block id: 143 */
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_552->g_2 p_552->g_48 p_552->g_49 p_552->g_70 p_552->g_82 p_552->g_17 p_552->g_83 p_552->l_comm_values p_552->g_92 p_552->g_101 p_552->g_comm_values p_552->g_125 p_552->g_71 p_552->g_149 p_552->g_155 p_552->g_38 p_552->g_175 p_552->g_201 p_552->g_232 p_552->g_288 p_552->g_289 p_552->g_298 p_552->g_302 p_552->g_322 p_552->g_325 p_552->g_330 p_552->g_308 p_552->g_340 p_552->g_358 p_552->g_374
 * writes: p_552->g_49 p_552->g_38 p_552->l_comm_values p_552->g_92 p_552->g_125 p_552->g_188 p_552->g_155 p_552->g_149 p_552->g_232.f2 p_552->g_70 p_552->g_101 p_552->g_288 p_552->g_290 p_552->g_298 p_552->g_322 p_552->g_340 p_552->g_71
 */
int8_t  func_29(int16_t  p_30, int8_t  p_31, int64_t  p_32, int64_t  p_33, struct S1 * p_552)
{ /* block id: 9 */
    int8_t *l_42 = &p_552->g_38;
    VECTOR(int16_t, 8) l_43 = (VECTOR(int16_t, 8))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x7085L), 0x7085L), 0x7085L, (-10L), 0x7085L);
    VECTOR(int16_t, 2) l_44 = (VECTOR(int16_t, 2))(0x6C1CL, 0x1297L);
    VECTOR(int64_t, 16) l_333 = (VECTOR(int64_t, 16))((-10L), (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 0x609A7D0FC8F1A829L), 0x609A7D0FC8F1A829L), 0x609A7D0FC8F1A829L, (-10L), 0x609A7D0FC8F1A829L, (VECTOR(int64_t, 2))((-10L), 0x609A7D0FC8F1A829L), (VECTOR(int64_t, 2))((-10L), 0x609A7D0FC8F1A829L), (-10L), 0x609A7D0FC8F1A829L, (-10L), 0x609A7D0FC8F1A829L);
    VECTOR(int64_t, 2) l_334 = (VECTOR(int64_t, 2))(0L, 1L);
    VECTOR(int64_t, 8) l_335 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L));
    uint64_t l_338 = 0xD593C2033496D3FFL;
    int8_t l_339 = (-3L);
    int32_t l_341 = 0x2BB90EBDL;
    int32_t *l_342 = (void*)0;
    int32_t *l_343 = &p_552->g_49;
    int32_t l_344 = 0L;
    int32_t *l_345 = &p_552->g_49;
    int32_t l_346 = 0x18019314L;
    int32_t l_347 = 7L;
    int32_t *l_348[10] = {&p_552->g_2[0][0],&p_552->g_308,&p_552->g_2[0][0],&p_552->g_2[0][0],&p_552->g_308,&p_552->g_2[0][0],&p_552->g_2[0][0],&p_552->g_308,&p_552->g_2[0][0],&p_552->g_2[0][0]};
    int16_t l_349 = 0x1D0DL;
    int8_t l_350 = 0x4BL;
    int16_t l_351 = 0x080DL;
    int16_t l_352 = 0x319AL;
    int32_t l_353 = 0x21C40D58L;
    int64_t l_354 = 0x4F1F3807859ACC1EL;
    uint32_t l_355[3];
    int i;
    for (i = 0; i < 3; i++)
        l_355[i] = 0xC6147332L;
    p_552->g_340 ^= (safe_add_func_uint16_t_u_u((l_42 == ((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(l_43.s77)).yyyxyxxx, ((VECTOR(int16_t, 4))(l_44.yxyx)).xxzwzxzx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(func_45(l_42, p_552), ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(5L, ((((safe_rshift_func_uint16_t_u_u(((((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_552->g_330.s45434222)).s5, p_30)) >= ((0x7919L | (safe_div_func_uint32_t_u_u(l_44.y, l_44.y))) >= ((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_333.s3c6370d1afef068e)).s41)).xyxx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))((-3L), (-8L))))), 0x00D47D5A1204D076L, 1L)), ((VECTOR(int64_t, 2))(l_334.yx)), 2L, 0x165486DC3EA2C5E2L)).hi)).hi)).yxyxxxxyyxxxxxyx)).s0d)), 1L, 0L, ((VECTOR(int64_t, 2))(l_335.s47)), 0x7680230BBEDCA049L, 0x2B63DDA6935B7406L)).even, ((VECTOR(int64_t, 8))((safe_sub_func_int8_t_s_s(l_338, l_335.s3)), l_338, p_31, l_339, 0x61E992D7C483359FL, ((VECTOR(int64_t, 2))((-1L))), (-1L))).even))).y)) & 0UL) | l_333.s7), l_338)) >= 0x7281002B008D0D54L) , 1L) | p_33), 0L, (-1L))))).even, ((VECTOR(int16_t, 2))((-1L)))))), l_334.x, ((VECTOR(int16_t, 2))(0x67A0L)), ((VECTOR(int16_t, 4))((-3L))), ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 4))((-5L))))).s41)), 1L, 0x6229L)).wwxwwzxy))), l_43.s5, ((VECTOR(int16_t, 2))((-1L))), l_334.y, 0x4531L, p_552->g_308, 0x35ACL, 0x7841L)).s6 != l_338) , &l_339)), p_552->g_17[1][0]));
    l_355[0]--;
    (*p_552->g_358) = &l_347;
    for (l_346 = 0; (l_346 == (-12)); --l_346)
    { /* block id: 134 */
        int16_t l_362 = 0x4F1FL;
        int8_t *l_365 = &l_350;
        int8_t **l_366 = &l_365;
        VECTOR(uint64_t, 2) l_368 = (VECTOR(uint64_t, 2))(0x01A879F88768C0D6L, 0x973B608DCEB0AF39L);
        int32_t ***l_370 = &p_552->g_70[2][8][0];
        int32_t ****l_369 = &l_370;
        VECTOR(uint16_t, 8) l_373 = (VECTOR(uint16_t, 8))(0x4A97L, (VECTOR(uint16_t, 4))(0x4A97L, (VECTOR(uint16_t, 2))(0x4A97L, 0xB6FFL), 0xB6FFL), 0xB6FFL, 0x4A97L, 0xB6FFL);
        int i;
        (*p_552->g_71) = ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(p_552->g_361.s65)).yyxx, ((VECTOR(int32_t, 8))(((*l_343) = (GROUP_DIVERGE(1, 1) | ((((l_362 , (((*l_343) | (safe_rshift_func_uint8_t_u_s((!(&p_31 == ((*l_366) = l_365))), ((VECTOR(int8_t, 4))(p_552->g_367.s7616)).x))) && l_362)) > 0x61L) > (((+((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 2))(l_368.yy)).xxxyxyyx, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(1UL, 0xACAC9A85D743792CL)).xxxxxyyx)).odd)).wxxyzwzy))).s4) , 0x5672E6C8L) >= ((((((VECTOR(uint16_t, 8))((((*l_369) = &p_552->g_70[0][1][3]) != ((safe_mul_func_int16_t_s_s((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_373.s34)))).lo ^ (p_30 == (*p_552->g_71))), p_552->g_298[1])) , (void*)0)), p_31, 65533UL, ((VECTOR(uint16_t, 2))(65530UL)), 65534UL, 0x8C53L, 0UL)).s5 & 0x4489L) | p_552->g_17[1][0]) | p_552->g_322) , 0x4ABFE4A1L))) , p_30))), ((VECTOR(int32_t, 2))(0x3CB5017AL)), ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))((-1L))), 0x26E45787L)).odd))).x;
        (*p_552->g_374) = &l_344;
        if ((*p_552->g_71))
            continue;
    }
    return p_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_552->g_2 p_552->g_48 p_552->g_49 p_552->g_70 p_552->g_82 p_552->g_17 p_552->g_83 p_552->l_comm_values p_552->g_92 p_552->g_101 p_552->g_comm_values p_552->g_125 p_552->g_71 p_552->g_149 p_552->g_155 p_552->g_38 p_552->g_175 p_552->g_201 p_552->g_232 p_552->g_288 p_552->g_289 p_552->g_298 p_552->g_302 p_552->g_322 p_552->g_325
 * writes: p_552->g_49 p_552->g_38 p_552->l_comm_values p_552->g_92 p_552->g_125 p_552->g_188 p_552->g_155 p_552->g_149 p_552->g_232.f2 p_552->g_70 p_552->g_101 p_552->g_288 p_552->g_290 p_552->g_298 p_552->g_322
 */
int16_t  func_45(int8_t * p_46, struct S1 * p_552)
{ /* block id: 10 */
    uint32_t l_47 = 0UL;
    int32_t *l_77 = &p_552->g_2[0][0];
    int32_t **l_78[7] = {&l_77,&l_77,&l_77,&l_77,&l_77,&l_77,&l_77};
    int32_t *l_79 = &p_552->g_49;
    int64_t *l_85[5];
    int8_t *l_301[7] = {&p_552->g_302[2],&p_552->g_302[2],&p_552->g_302[2],&p_552->g_302[2],&p_552->g_302[2],&p_552->g_302[2],&p_552->g_302[2]};
    int i;
    for (i = 0; i < 5; i++)
        l_85[i] = (void*)0;
    (*p_552->g_48) &= ((p_552->g_2[0][0] , l_47) > FAKE_DIVERGE(p_552->global_1_offset, get_global_id(1), 10));
    (*p_552->g_325) = func_50(func_56(func_61(func_67(p_552->g_70[0][1][3], (safe_lshift_func_uint16_t_u_s(0x7D6EL, (((safe_mod_func_int64_t_s_s(((void*)0 == &p_552->g_48), (p_552->l_comm_values[(safe_mod_func_uint32_t_u_u(p_552->tid, 20))] &= ((((safe_unary_minus_func_int64_t_s((((+(((l_79 = l_77) == (void*)0) <= ((*l_77) , 0x62AA969AL))) || ((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_552->g_82.yy)), 0x53L, (-1L))).w && ((((((*p_46) = 0x3DL) >= p_552->g_17[1][0]) && p_552->g_49) , (void*)0) == p_552->g_83[2])) && 250UL)) ^ 1L))) , p_46) != p_46) > GROUP_DIVERGE(2, 1))))) != 4294967292UL) || (*l_79)))), p_552), p_552->g_2[0][0], &p_552->g_2[0][0], l_301[0], p_46, p_552), (*l_77), (*l_77), &l_77, p_552), l_301[0], p_552->g_302[2], p_552->g_2[0][0], l_78[4], p_552);
    return p_552->g_92[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_552->g_322
 * writes: p_552->g_322
 */
int32_t ** func_50(int8_t * p_51, int8_t * p_52, int32_t  p_53, int32_t  p_54, int32_t ** p_55, struct S1 * p_552)
{ /* block id: 124 */
    int32_t *l_310 = &p_552->g_308;
    int32_t *l_311 = &p_552->g_49;
    int32_t *l_312 = &p_552->g_49;
    int32_t *l_313 = &p_552->g_49;
    int32_t *l_314 = &p_552->g_308;
    int32_t *l_315 = (void*)0;
    int32_t *l_316 = &p_552->g_308;
    int32_t *l_317 = &p_552->g_49;
    int32_t *l_318 = &p_552->g_49;
    int32_t *l_319 = &p_552->g_49;
    int32_t *l_320[3][2][9] = {{{&p_552->g_2[0][0],(void*)0,&p_552->g_308,&p_552->g_2[0][0],&p_552->g_308,(void*)0,&p_552->g_2[0][0],&p_552->g_308,&p_552->g_308},{&p_552->g_2[0][0],(void*)0,&p_552->g_308,&p_552->g_2[0][0],&p_552->g_308,(void*)0,&p_552->g_2[0][0],&p_552->g_308,&p_552->g_308}},{{&p_552->g_2[0][0],(void*)0,&p_552->g_308,&p_552->g_2[0][0],&p_552->g_308,(void*)0,&p_552->g_2[0][0],&p_552->g_308,&p_552->g_308},{&p_552->g_2[0][0],(void*)0,&p_552->g_308,&p_552->g_2[0][0],&p_552->g_308,(void*)0,&p_552->g_2[0][0],&p_552->g_308,&p_552->g_308}},{{&p_552->g_2[0][0],(void*)0,&p_552->g_308,&p_552->g_2[0][0],&p_552->g_308,(void*)0,&p_552->g_2[0][0],&p_552->g_308,&p_552->g_308},{&p_552->g_2[0][0],(void*)0,&p_552->g_308,&p_552->g_2[0][0],&p_552->g_308,(void*)0,&p_552->g_2[0][0],&p_552->g_308,&p_552->g_308}}};
    int32_t l_321 = 9L;
    int i, j, k;
    ++p_552->g_322;
    return &p_552->g_71;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_56(uint32_t  p_57, uint32_t  p_58, int32_t  p_59, int32_t ** p_60, struct S1 * p_552)
{ /* block id: 121 */
    int32_t *l_309 = &p_552->g_49;
    (*p_60) = l_309;
    return &p_552->g_302[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_552->g_49 p_552->g_2
 * writes: p_552->g_49
 */
uint32_t  func_61(int8_t * p_62, int16_t  p_63, int32_t * p_64, int8_t * p_65, int8_t * p_66, struct S1 * p_552)
{ /* block id: 112 */
    int32_t *l_307 = &p_552->g_308;
    for (p_552->g_49 = 0; (p_552->g_49 != 2); p_552->g_49 = safe_add_func_int8_t_s_s(p_552->g_49, 6))
    { /* block id: 115 */
        int32_t *l_305[1][4][4] = {{{&p_552->g_2[0][0],&p_552->g_2[0][0],&p_552->g_2[0][0],&p_552->g_2[0][0]},{&p_552->g_2[0][0],&p_552->g_2[0][0],&p_552->g_2[0][0],&p_552->g_2[0][0]},{&p_552->g_2[0][0],&p_552->g_2[0][0],&p_552->g_2[0][0],&p_552->g_2[0][0]},{&p_552->g_2[0][0],&p_552->g_2[0][0],&p_552->g_2[0][0],&p_552->g_2[0][0]}}};
        int32_t **l_306[6][3][7] = {{{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]},{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]},{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]}},{{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]},{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]},{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]}},{{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]},{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]},{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]}},{{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]},{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]},{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]}},{{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]},{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]},{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]}},{{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]},{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]},{(void*)0,(void*)0,&l_305[0][1][1],&l_305[0][3][2],&l_305[0][2][3],&l_305[0][3][2],&l_305[0][1][1]}}};
        int i, j, k;
        l_307 = l_305[0][0][0];
        l_307 = l_307;
        p_64 = p_64;
    }
    return p_552->g_2[0][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_552->g_92 p_552->g_101 p_552->g_17 p_552->g_48 p_552->g_49 p_552->g_comm_values p_552->g_2 p_552->g_125 p_552->g_71 p_552->g_149 p_552->g_155 p_552->g_38 p_552->g_175 p_552->g_201 p_552->l_comm_values p_552->g_232 p_552->g_82 p_552->g_288 p_552->g_289 p_552->g_298
 * writes: p_552->g_92 p_552->g_125 p_552->g_49 p_552->g_188 p_552->g_155 p_552->g_149 p_552->g_232.f2 p_552->g_70 p_552->g_101 p_552->g_288 p_552->g_290 p_552->g_298
 */
int8_t * func_67(int32_t ** p_68, uint8_t  p_69, struct S1 * p_552)
{ /* block id: 15 */
    int64_t l_88 = 0x46CB56AE7BB48DF9L;
    uint16_t *l_91[8][3] = {{&p_552->g_92[0],&p_552->g_92[0],&p_552->g_92[0]},{&p_552->g_92[0],&p_552->g_92[0],&p_552->g_92[0]},{&p_552->g_92[0],&p_552->g_92[0],&p_552->g_92[0]},{&p_552->g_92[0],&p_552->g_92[0],&p_552->g_92[0]},{&p_552->g_92[0],&p_552->g_92[0],&p_552->g_92[0]},{&p_552->g_92[0],&p_552->g_92[0],&p_552->g_92[0]},{&p_552->g_92[0],&p_552->g_92[0],&p_552->g_92[0]},{&p_552->g_92[0],&p_552->g_92[0],&p_552->g_92[0]}};
    int32_t l_93 = 0x71BB9DF8L;
    int32_t l_94[4] = {(-4L),(-4L),(-4L),(-4L)};
    VECTOR(int16_t, 8) l_99 = (VECTOR(int16_t, 8))(0x32DCL, (VECTOR(int16_t, 4))(0x32DCL, (VECTOR(int16_t, 2))(0x32DCL, (-5L)), (-5L)), (-5L), 0x32DCL, (-5L));
    VECTOR(int16_t, 4) l_100 = (VECTOR(int16_t, 4))(0x6616L, (VECTOR(int16_t, 2))(0x6616L, 0x683DL), 0x683DL);
    int64_t l_103 = 1L;
    int32_t *l_120 = &l_93;
    VECTOR(uint32_t, 16) l_121 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xCC2D3683L), 0xCC2D3683L), 0xCC2D3683L, 1UL, 0xCC2D3683L, (VECTOR(uint32_t, 2))(1UL, 0xCC2D3683L), (VECTOR(uint32_t, 2))(1UL, 0xCC2D3683L), 1UL, 0xCC2D3683L, 1UL, 0xCC2D3683L);
    int16_t l_122 = 0x24D0L;
    int8_t *l_123[7][3];
    uint64_t *l_124 = &p_552->g_125;
    uint8_t l_126[2][8] = {{255UL,253UL,253UL,255UL,255UL,253UL,253UL,255UL},{255UL,253UL,253UL,255UL,255UL,253UL,253UL,255UL}};
    uint8_t *l_127 = &l_126[0][4];
    int8_t l_144 = 0x44L;
    uint8_t l_163 = 0xFFL;
    VECTOR(uint32_t, 2) l_183 = (VECTOR(uint32_t, 2))(1UL, 0xFDC5E22EL);
    VECTOR(int64_t, 16) l_223 = (VECTOR(int64_t, 16))(0x53B5888D965F8DA9L, (VECTOR(int64_t, 4))(0x53B5888D965F8DA9L, (VECTOR(int64_t, 2))(0x53B5888D965F8DA9L, 0L), 0L), 0L, 0x53B5888D965F8DA9L, 0L, (VECTOR(int64_t, 2))(0x53B5888D965F8DA9L, 0L), (VECTOR(int64_t, 2))(0x53B5888D965F8DA9L, 0L), 0x53B5888D965F8DA9L, 0L, 0x53B5888D965F8DA9L, 0L);
    int32_t *l_235 = &p_552->g_2[0][0];
    int64_t l_294 = 0x20E4C8265B78EF11L;
    int32_t *l_295 = (void*)0;
    int32_t *l_296 = &l_94[0];
    int32_t *l_297[10] = {&l_94[0],&l_94[0],&l_94[0],&l_94[0],&l_94[0],&l_94[0],&l_94[0],&l_94[0],&l_94[0],&l_94[0]};
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
            l_123[i][j] = &p_552->g_38;
    }
    if ((safe_mul_func_uint8_t_u_u(((*l_127) = (l_88 == (safe_mod_func_uint8_t_u_u(((((p_552->g_92[0]++) >= ((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))((-1L), 0x394DD076L, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_99.s17363527)))).s63, ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(1L, (-1L))).yxxyyxxyxyxyxxyy, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_100.wx)), 4L, (-1L))).hi)))), ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(p_552->g_101.s3207441025643231)).sdca8, (int16_t)((safe_unary_minus_func_uint16_t_u(l_103)) >= ((*l_124) = ((((safe_rshift_func_int8_t_s_s(p_69, (l_94[0] ^= (safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_552->local_0_offset, get_local_id(0), 10), (((((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(p_552->g_17[1][0], ((((((void*)0 == l_120) || (((VECTOR(uint32_t, 2))(l_121.sba)).odd | l_122)) && ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(0x12L, (l_123[5][0] != l_123[6][0]), ((VECTOR(int8_t, 4))((-1L))), 0x54L, 0x31L)).hi, ((VECTOR(int8_t, 4))(3L))))).zzxyxxyy))))).s6) ^ (*l_120)) | p_552->g_17[3][0]))) > 0x274B1038L), (*p_552->g_48))), p_552->g_49)), p_552->g_comm_values[p_552->tid])) >= (-1L)), (-3L))), (*l_120))) , l_123[4][1]) == (void*)0) , (*l_120)) < p_69)))))) != p_552->g_2[0][0]) , (*l_120)) ^ 0x46L)))))).hi))).xxxx, ((VECTOR(int16_t, 4))(0x7C81L))))).wxwwyxyzyyyyywww))).s93, ((VECTOR(int16_t, 2))(0L))))).xxyxyxxxxyyyxxxx, ((VECTOR(int16_t, 16))((-2L)))))).s22, ((VECTOR(uint16_t, 2))(0x5725L))))), (*l_120), 1L, 0x7CFED7C6L, 0x09EE3F61L)), ((VECTOR(int32_t, 8))(8L))))).hi))).odd)).xxyx, ((VECTOR(int32_t, 4))(1L))))).odd)).even, (*l_120))) , 0x8DDBL)) , p_69) & p_552->g_2[0][0]), l_126[0][0])))), p_69)))
    { /* block id: 20 */
        int64_t l_132 = 0x4BB3E61ED58A6F27L;
        int32_t l_134[10][2][10] = {{{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L},{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L}},{{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L},{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L}},{{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L},{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L}},{{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L},{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L}},{{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L},{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L}},{{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L},{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L}},{{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L},{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L}},{{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L},{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L}},{{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L},{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L}},{{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L},{0x0858306EL,0L,0x3A6016F2L,(-1L),0x32C41968L,(-7L),0x4963A11EL,0x306CC1A3L,(-4L),0x66622833L}}};
        int i, j, k;
        for (p_552->g_125 = 0; (p_552->g_125 >= 53); p_552->g_125 = safe_add_func_int8_t_s_s(p_552->g_125, 2))
        { /* block id: 23 */
            int32_t *l_130 = &p_552->g_49;
            int32_t *l_131 = &l_94[0];
            int32_t *l_133[7][7][5] = {{{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]}},{{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]}},{{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]}},{{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]}},{{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]}},{{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]}},{{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]},{&p_552->g_2[0][0],&l_94[1],&p_552->g_2[0][0],&l_93,&l_94[2]}}};
            uint64_t l_135[5];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_135[i] = 1UL;
            --l_135[0];
            (*p_552->g_71) = l_134[2][1][0];
        }
    }
    else
    { /* block id: 27 */
        uint16_t **l_142 = (void*)0;
        uint16_t **l_143 = &l_91[7][1];
        int32_t *l_145 = &p_552->g_2[0][0];
        int32_t **l_146[5][2];
        VECTOR(int64_t, 16) l_150 = (VECTOR(int64_t, 16))(0x47D40A0E336E5AD5L, (VECTOR(int64_t, 4))(0x47D40A0E336E5AD5L, (VECTOR(int64_t, 2))(0x47D40A0E336E5AD5L, (-1L)), (-1L)), (-1L), 0x47D40A0E336E5AD5L, (-1L), (VECTOR(int64_t, 2))(0x47D40A0E336E5AD5L, (-1L)), (VECTOR(int64_t, 2))(0x47D40A0E336E5AD5L, (-1L)), 0x47D40A0E336E5AD5L, (-1L), 0x47D40A0E336E5AD5L, (-1L));
        uint32_t l_153 = 0x8549399DL;
        int64_t *l_154 = &l_103;
        int8_t *l_168 = (void*)0;
        VECTOR(int64_t, 16) l_173 = (VECTOR(int64_t, 16))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), (-7L)), (-7L)), (-7L), (-5L), (-7L), (VECTOR(int64_t, 2))((-5L), (-7L)), (VECTOR(int64_t, 2))((-5L), (-7L)), (-5L), (-7L), (-5L), (-7L));
        int64_t *l_202 = (void*)0;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
                l_146[i][j] = (void*)0;
        }
        l_93 ^= (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(1L, 1L, 0x28L, (-4L))).lo)), 0L, 4L)).odd, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((safe_mul_func_uint8_t_u_u((&p_552->g_92[8] == ((*l_143) = l_91[5][2])), l_144)), (((l_145 != (l_120 = l_145)) , (safe_mod_func_int64_t_s_s(((*l_154) = ((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))(0x62CE832F596B8FCFL, ((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 2))(p_552->g_149.s2f)), ((VECTOR(int64_t, 2))(l_150.sc1))))), ((safe_div_func_uint8_t_u_u(246UL, 0x4EL)) ^ l_153), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((p_552->g_49 < (*l_120)) & (*l_120)), ((VECTOR(int64_t, 4))(0x329D5222973494EFL)), ((VECTOR(int64_t, 2))(1L)), (-1L))).hi)), p_552->g_101.s7, ((VECTOR(int64_t, 4))(0L)), ((VECTOR(int64_t, 2))(0x54B9EDBE4F7C98B7L)), 0L)).s37))).xyyxxxxy, (int64_t)p_552->g_17[4][0], (int64_t)p_552->g_92[4]))).s5), (*l_145)))) && p_552->g_155), 0x65L, 4L)).zywwwxzzyxxyxywy)).sf3)))))), 0xBBL, ((VECTOR(uint8_t, 4))(255UL)), 248UL)).s4, p_69));
        for (l_144 = (-21); (l_144 <= (-29)); l_144--)
        { /* block id: 34 */
            int64_t l_160 = 0x7C40C1327159786DL;
            int32_t l_166 = (-1L);
            VECTOR(int64_t, 2) l_174 = (VECTOR(int64_t, 2))((-1L), (-1L));
            VECTOR(int32_t, 4) l_176 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-2L)), (-2L));
            int32_t l_189 = 2L;
            int i;
            if ((safe_mod_func_int8_t_s_s((l_160 = p_69), (*l_120))))
            { /* block id: 36 */
                for (p_552->g_125 = 0; (p_552->g_125 < 37); p_552->g_125 = safe_add_func_int64_t_s_s(p_552->g_125, 2))
                { /* block id: 39 */
                    return &p_552->g_38;
                }
                l_163++;
            }
            else
            { /* block id: 43 */
                int8_t *l_167[8][7] = {{&l_144,(void*)0,(void*)0,(void*)0,&l_144,&l_144,(void*)0},{&l_144,(void*)0,(void*)0,(void*)0,&l_144,&l_144,(void*)0},{&l_144,(void*)0,(void*)0,(void*)0,&l_144,&l_144,(void*)0},{&l_144,(void*)0,(void*)0,(void*)0,&l_144,&l_144,(void*)0},{&l_144,(void*)0,(void*)0,(void*)0,&l_144,&l_144,(void*)0},{&l_144,(void*)0,(void*)0,(void*)0,&l_144,&l_144,(void*)0},{&l_144,(void*)0,(void*)0,(void*)0,&l_144,&l_144,(void*)0},{&l_144,(void*)0,(void*)0,(void*)0,&l_144,&l_144,(void*)0}};
                int i, j;
                l_166 |= (*p_552->g_71);
                return l_168;
            }
            l_189 |= (safe_rshift_func_uint16_t_u_s(((**l_143) = (safe_sub_func_int64_t_s_s(p_552->g_38, 0x73D2FB577810F05BL))), (((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 4))(l_173.sf9dc)), ((VECTOR(int64_t, 8))(l_174.yyyxxxyy)).lo))).y > ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(p_552->g_175.s2722452475607056)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_176.xwyz)).xzxzwwzx)).s4552627540662326))).se22b)).ywwwyyyz)).s25)))).yxyy)).hi))).xyyyyyxx, ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 8))(p_552->g_101.s1, (p_69 > (p_552->g_188 = ((0x41L & (l_166 = (l_93 = (((p_69 & ((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))((-1L), 0x10D1609DL)), 1L)).y) , &l_103) != (void*)0)))) & (((*l_124) |= (((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((((VECTOR(uint32_t, 16))(l_183.yxyxyyyyyxxxyyxy)).sd & (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0x3BL, 0x2BL, p_552->g_49, (-1L), 0x78L, ((VECTOR(int8_t, 2))(1L)), 0x16L)).s1462625741331570)).s51b5, ((VECTOR(int8_t, 4))(5L))))), ((VECTOR(uint8_t, 4))(2UL))))).z , p_552->g_17[1][0]), p_69)), p_552->g_comm_values[p_552->tid]))), 7)), p_69)) , 0x2F48885BD3CE0F37L) , GROUP_DIVERGE(2, 1))) , p_69)))), 0x654CL, ((VECTOR(int16_t, 4))(0x1F86L)), 0L))))).lo)).yzzyzxxwyyyzyzyz, ((VECTOR(uint16_t, 16))(0xCF4CL))))).s56, ((VECTOR(uint16_t, 2))(1UL))))).xxxxyyxx))).s64, (int64_t)l_160, (int64_t)0x49E6F10A4F3221E7L))))).lo)));
        }
        for (l_103 = 3; (l_103 == 8); l_103 = safe_add_func_uint64_t_u_u(l_103, 8))
        { /* block id: 56 */
            int32_t l_218 = 0x22A8BAE1L;
            int32_t *l_236 = (void*)0;
            uint32_t *l_239 = (void*)0;
            int64_t *l_240 = (void*)0;
            int64_t *l_241 = (void*)0;
            int64_t *l_242 = (void*)0;
            int64_t *l_243 = (void*)0;
            int64_t *l_244 = (void*)0;
            int64_t *l_245 = (void*)0;
            int64_t *l_246 = (void*)0;
            int64_t *l_247 = (void*)0;
            int64_t *l_248[2];
            uint32_t *l_249 = (void*)0;
            uint32_t *l_250 = (void*)0;
            uint32_t *l_251 = (void*)0;
            uint32_t *l_252 = &l_153;
            int32_t l_271 = 0x1B6692F4L;
            int i;
            for (i = 0; i < 2; i++)
                l_248[i] = (void*)0;
            for (l_93 = 17; (l_93 > (-27)); l_93--)
            { /* block id: 59 */
                int64_t **l_200 = &l_154;
                int32_t l_213 = 8L;
                (*p_552->g_71) = (((((safe_sub_func_uint64_t_u_u(((((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(0xDD63L, 0UL)).hi, (p_552->g_92[0] = ((((safe_mod_func_int16_t_s_s((((*l_200) = (void*)0) != (l_202 = p_552->g_201)), ((safe_mod_func_uint8_t_u_u(FAKE_DIVERGE(p_552->global_1_offset, get_global_id(1), 10), p_552->g_2[0][0])) & (safe_div_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_213, (safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(p_552->g_92[0], 0x4DF3L)), p_69)))), p_552->l_comm_values[(safe_mod_func_uint32_t_u_u(p_552->tid, 20))])) == (((p_69 != p_552->g_49) , p_552->g_155) > p_552->g_38)), p_552->g_125)), FAKE_DIVERGE(p_552->local_0_offset, get_local_id(0), 10)))))) , (*l_143)) != (void*)0) <= l_218)))) , 0xF437CBE92CD4794FL) <= GROUP_DIVERGE(0, 1)) | l_218), p_69)) && p_69) , p_69) || FAKE_DIVERGE(p_552->global_0_offset, get_global_id(0), 10)) < FAKE_DIVERGE(p_552->global_0_offset, get_global_id(0), 10));
                (*p_552->g_71) ^= l_218;
                for (l_153 = 0; (l_153 != 12); l_153 = safe_add_func_int64_t_s_s(l_153, 6))
                { /* block id: 67 */
                    return l_168;
                }
            }
            l_94[0] &= ((*p_552->g_71) |= (((*l_252) ^= ((safe_div_func_int32_t_s_s((((VECTOR(int64_t, 16))(l_223.sb3a0864fac7e533c)).s7 <= 9UL), (safe_sub_func_int64_t_s_s((~(safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((p_552->g_149.sd = (safe_rshift_func_int8_t_s_u(((p_552->g_232 , (safe_add_func_uint32_t_u_u(l_218, ((l_120 = l_235) == l_236)))) && (((0L || (safe_add_func_uint16_t_u_u((255UL > (((0x453EFB3BL > (p_552->g_155 |= p_552->g_82.y)) ^ 0x58L) >= (-1L))), p_69))) , p_552->g_101.s4) && 0x053FL)), p_552->g_149.s8))) , p_552->g_2[0][0]), p_69)), GROUP_DIVERGE(1, 1)))), 0x3E4821012C4BCE4BL)))) == p_69)) >= 0x38D0DE64L));
            if (((*p_552->g_71) = (*p_552->g_48)))
            { /* block id: 78 */
                int16_t l_259 = 0x415FL;
                uint32_t *l_286[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_286[i] = &l_153;
                for (p_552->g_232.f2 = 15; (p_552->g_232.f2 < 15); ++p_552->g_232.f2)
                { /* block id: 81 */
                    int32_t *l_264 = &p_552->g_49;
                    l_120 = (void*)0;
                    (*p_552->g_48) = (safe_lshift_func_int16_t_s_u((((safe_mul_func_uint8_t_u_u((GROUP_DIVERGE(2, 1) , p_552->g_92[3]), p_552->g_155)) ^ 0x2CE38918L) < l_259), 3));
                    for (l_88 = 0; (l_88 >= 27); l_88 = safe_add_func_uint8_t_u_u(l_88, 7))
                    { /* block id: 86 */
                        int32_t ***l_274 = &l_146[2][0];
                        int16_t *l_275[9][6] = {{&l_259,&l_259,&l_122,&l_122,&l_122,&l_259},{&l_259,&l_259,&l_122,&l_122,&l_122,&l_259},{&l_259,&l_259,&l_122,&l_122,&l_122,&l_259},{&l_259,&l_259,&l_122,&l_122,&l_122,&l_259},{&l_259,&l_259,&l_122,&l_122,&l_122,&l_259},{&l_259,&l_259,&l_122,&l_122,&l_122,&l_259},{&l_259,&l_259,&l_122,&l_122,&l_122,&l_259},{&l_259,&l_259,&l_122,&l_122,&l_122,&l_259},{&l_259,&l_259,&l_122,&l_122,&l_122,&l_259}};
                        int32_t *l_287 = &l_218;
                        int i, j;
                        p_552->g_288 |= ((*l_287) ^= (safe_mul_func_uint8_t_u_u(((l_264 == (void*)0) , ((((safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_271, (safe_mul_func_uint32_t_u_u(((((*l_274) = p_68) != ((*l_235) , (p_552->g_70[0][1][3] = &p_552->g_71))) & (p_552->g_101.s0 |= ((VECTOR(int16_t, 2))(0x7B23L, 6L)).hi)), ((((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((*l_264), (safe_lshift_func_int16_t_s_u(p_69, 13)))), ((l_286[0] = (void*)0) == (void*)0))), p_69)), 4)) , p_69) | (*l_145)) > p_552->l_comm_values[(safe_mod_func_uint32_t_u_u(p_552->tid, 20))]))))), p_69)), p_69)) ^ p_69) && (-10L)) <= p_69)), p_552->g_175.s4)));
                    }
                }
                (*p_552->g_289) = &l_127;
            }
            else
            { /* block id: 96 */
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_552->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 20)), permutations[(safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u((p_552->g_92[0] = GROUP_DIVERGE(1, 1)), 7)) | (4294967288UL == p_69)) == 0xA7075D50L), 10))][(safe_mod_func_uint32_t_u_u(p_552->tid, 20))]));
                (*p_552->g_71) |= 8L;
                if (l_294)
                    break;
                return &p_552->g_38;
            }
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_552->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 20)), permutations[(safe_mod_func_uint32_t_u_u(p_69, 10))][(safe_mod_func_uint32_t_u_u(p_552->tid, 20))]));
    }
    --p_552->g_298[2];
    return &p_552->g_38;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_comm_values[i] = 1;
    struct S1 c_553;
    struct S1* p_552 = &c_553;
    struct S1 c_554 = {
        {{(-1L)}}, // p_552->g_2
        {{7UL},{7UL},{7UL},{7UL},{7UL}}, // p_552->g_17
        0x2BL, // p_552->g_38
        6L, // p_552->g_49
        &p_552->g_49, // p_552->g_48
        &p_552->g_49, // p_552->g_71
        {{{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71}},{{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71}},{{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71}},{{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71}},{{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71}},{{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71},{&p_552->g_71,&p_552->g_71,&p_552->g_71,&p_552->g_71}}}, // p_552->g_70
        (VECTOR(int8_t, 2))((-2L), (-10L)), // p_552->g_82
        (-4L), // p_552->g_84
        {&p_552->g_84,&p_552->g_84,&p_552->g_84}, // p_552->g_83
        {0x312BL,1UL,0x312BL,0x312BL,1UL,0x312BL,0x312BL,1UL,0x312BL}, // p_552->g_92
        (VECTOR(int16_t, 8))(0x5576L, (VECTOR(int16_t, 4))(0x5576L, (VECTOR(int16_t, 2))(0x5576L, (-5L)), (-5L)), (-5L), 0x5576L, (-5L)), // p_552->g_101
        0x8483835E1D1A91C2L, // p_552->g_125
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x367610C2F07F0165L), 0x367610C2F07F0165L), 0x367610C2F07F0165L, 0L, 0x367610C2F07F0165L, (VECTOR(int64_t, 2))(0L, 0x367610C2F07F0165L), (VECTOR(int64_t, 2))(0L, 0x367610C2F07F0165L), 0L, 0x367610C2F07F0165L, 0L, 0x367610C2F07F0165L), // p_552->g_149
        4294967295UL, // p_552->g_155
        (VECTOR(int32_t, 8))(0x529B11EEL, (VECTOR(int32_t, 4))(0x529B11EEL, (VECTOR(int32_t, 2))(0x529B11EEL, 0x76F68FCFL), 0x76F68FCFL), 0x76F68FCFL, 0x529B11EEL, 0x76F68FCFL), // p_552->g_175
        0xBE7BL, // p_552->g_188
        (void*)0, // p_552->g_201
        {0x04086164L}, // p_552->g_232
        1UL, // p_552->g_288
        {&p_552->g_288,&p_552->g_288,&p_552->g_288,&p_552->g_288,&p_552->g_288,&p_552->g_288,&p_552->g_288,&p_552->g_288,&p_552->g_288,&p_552->g_288}, // p_552->g_291
        &p_552->g_291[3], // p_552->g_290
        &p_552->g_290, // p_552->g_289
        {0x25512561L,0x25512561L,0x25512561L}, // p_552->g_298
        {0x18L,0x18L,0x18L,0x18L,0x18L,0x18L,0x18L}, // p_552->g_302
        0x379B9CB4L, // p_552->g_308
        0x6B8699B6L, // p_552->g_322
        &p_552->g_70[0][1][3], // p_552->g_325
        (VECTOR(uint16_t, 8))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 5UL), 5UL), 5UL, 65534UL, 5UL), // p_552->g_330
        0xD7DEL, // p_552->g_340
        &p_552->g_71, // p_552->g_358
        (VECTOR(int32_t, 8))(0x6345ED48L, (VECTOR(int32_t, 4))(0x6345ED48L, (VECTOR(int32_t, 2))(0x6345ED48L, 0x4FBC3F32L), 0x4FBC3F32L), 0x4FBC3F32L, 0x6345ED48L, 0x4FBC3F32L), // p_552->g_361
        (VECTOR(int8_t, 8))(0x03L, (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, 1L), 1L), 1L, 0x03L, 1L), // p_552->g_367
        &p_552->g_71, // p_552->g_374
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x6FL), 0x6FL), // p_552->g_390
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 1UL, 18446744073709551615UL), // p_552->g_395
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xF4L), 0xF4L), 0xF4L, 255UL, 0xF4L), // p_552->g_405
        &p_552->g_71, // p_552->g_409
        (void*)0, // p_552->g_414
        0x529979E94B7BAF8FL, // p_552->g_420
        {1L}, // p_552->g_427
        (void*)0, // p_552->g_461
        &p_552->g_308, // p_552->g_485
        (VECTOR(uint16_t, 8))(0xE2E8L, (VECTOR(uint16_t, 4))(0xE2E8L, (VECTOR(uint16_t, 2))(0xE2E8L, 65535UL), 65535UL), 65535UL, 0xE2E8L, 65535UL), // p_552->g_488
        0L, // p_552->g_493
        (VECTOR(int64_t, 2))(0x2F1DA74CBBDCAD49L, 0x0D554EECB2260DDEL), // p_552->g_494
        &p_552->g_302[2], // p_552->g_505
        (VECTOR(int32_t, 16))(0x11C61B8AL, (VECTOR(int32_t, 4))(0x11C61B8AL, (VECTOR(int32_t, 2))(0x11C61B8AL, 1L), 1L), 1L, 0x11C61B8AL, 1L, (VECTOR(int32_t, 2))(0x11C61B8AL, 1L), (VECTOR(int32_t, 2))(0x11C61B8AL, 1L), 0x11C61B8AL, 1L, 0x11C61B8AL, 1L), // p_552->g_527
        0, // p_552->v_collective
        sequence_input[get_global_id(0)], // p_552->global_0_offset
        sequence_input[get_global_id(1)], // p_552->global_1_offset
        sequence_input[get_global_id(2)], // p_552->global_2_offset
        sequence_input[get_local_id(0)], // p_552->local_0_offset
        sequence_input[get_local_id(1)], // p_552->local_1_offset
        sequence_input[get_local_id(2)], // p_552->local_2_offset
        sequence_input[get_group_id(0)], // p_552->group_0_offset
        sequence_input[get_group_id(1)], // p_552->group_1_offset
        sequence_input[get_group_id(2)], // p_552->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 20)), permutations[0][get_linear_local_id()])), // p_552->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_553 = c_554;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_552);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_552->g_2[i][j], "p_552->g_2[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_552->g_17[i][j], "p_552->g_17[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_552->g_38, "p_552->g_38", print_hash_value);
    transparent_crc(p_552->g_49, "p_552->g_49", print_hash_value);
    transparent_crc(p_552->g_82.x, "p_552->g_82.x", print_hash_value);
    transparent_crc(p_552->g_82.y, "p_552->g_82.y", print_hash_value);
    transparent_crc(p_552->g_84, "p_552->g_84", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_552->g_92[i], "p_552->g_92[i]", print_hash_value);

    }
    transparent_crc(p_552->g_101.s0, "p_552->g_101.s0", print_hash_value);
    transparent_crc(p_552->g_101.s1, "p_552->g_101.s1", print_hash_value);
    transparent_crc(p_552->g_101.s2, "p_552->g_101.s2", print_hash_value);
    transparent_crc(p_552->g_101.s3, "p_552->g_101.s3", print_hash_value);
    transparent_crc(p_552->g_101.s4, "p_552->g_101.s4", print_hash_value);
    transparent_crc(p_552->g_101.s5, "p_552->g_101.s5", print_hash_value);
    transparent_crc(p_552->g_101.s6, "p_552->g_101.s6", print_hash_value);
    transparent_crc(p_552->g_101.s7, "p_552->g_101.s7", print_hash_value);
    transparent_crc(p_552->g_125, "p_552->g_125", print_hash_value);
    transparent_crc(p_552->g_149.s0, "p_552->g_149.s0", print_hash_value);
    transparent_crc(p_552->g_149.s1, "p_552->g_149.s1", print_hash_value);
    transparent_crc(p_552->g_149.s2, "p_552->g_149.s2", print_hash_value);
    transparent_crc(p_552->g_149.s3, "p_552->g_149.s3", print_hash_value);
    transparent_crc(p_552->g_149.s4, "p_552->g_149.s4", print_hash_value);
    transparent_crc(p_552->g_149.s5, "p_552->g_149.s5", print_hash_value);
    transparent_crc(p_552->g_149.s6, "p_552->g_149.s6", print_hash_value);
    transparent_crc(p_552->g_149.s7, "p_552->g_149.s7", print_hash_value);
    transparent_crc(p_552->g_149.s8, "p_552->g_149.s8", print_hash_value);
    transparent_crc(p_552->g_149.s9, "p_552->g_149.s9", print_hash_value);
    transparent_crc(p_552->g_149.sa, "p_552->g_149.sa", print_hash_value);
    transparent_crc(p_552->g_149.sb, "p_552->g_149.sb", print_hash_value);
    transparent_crc(p_552->g_149.sc, "p_552->g_149.sc", print_hash_value);
    transparent_crc(p_552->g_149.sd, "p_552->g_149.sd", print_hash_value);
    transparent_crc(p_552->g_149.se, "p_552->g_149.se", print_hash_value);
    transparent_crc(p_552->g_149.sf, "p_552->g_149.sf", print_hash_value);
    transparent_crc(p_552->g_155, "p_552->g_155", print_hash_value);
    transparent_crc(p_552->g_175.s0, "p_552->g_175.s0", print_hash_value);
    transparent_crc(p_552->g_175.s1, "p_552->g_175.s1", print_hash_value);
    transparent_crc(p_552->g_175.s2, "p_552->g_175.s2", print_hash_value);
    transparent_crc(p_552->g_175.s3, "p_552->g_175.s3", print_hash_value);
    transparent_crc(p_552->g_175.s4, "p_552->g_175.s4", print_hash_value);
    transparent_crc(p_552->g_175.s5, "p_552->g_175.s5", print_hash_value);
    transparent_crc(p_552->g_175.s6, "p_552->g_175.s6", print_hash_value);
    transparent_crc(p_552->g_175.s7, "p_552->g_175.s7", print_hash_value);
    transparent_crc(p_552->g_188, "p_552->g_188", print_hash_value);
    transparent_crc(p_552->g_232.f0, "p_552->g_232.f0", print_hash_value);
    transparent_crc(p_552->g_288, "p_552->g_288", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_552->g_298[i], "p_552->g_298[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_552->g_302[i], "p_552->g_302[i]", print_hash_value);

    }
    transparent_crc(p_552->g_308, "p_552->g_308", print_hash_value);
    transparent_crc(p_552->g_322, "p_552->g_322", print_hash_value);
    transparent_crc(p_552->g_330.s0, "p_552->g_330.s0", print_hash_value);
    transparent_crc(p_552->g_330.s1, "p_552->g_330.s1", print_hash_value);
    transparent_crc(p_552->g_330.s2, "p_552->g_330.s2", print_hash_value);
    transparent_crc(p_552->g_330.s3, "p_552->g_330.s3", print_hash_value);
    transparent_crc(p_552->g_330.s4, "p_552->g_330.s4", print_hash_value);
    transparent_crc(p_552->g_330.s5, "p_552->g_330.s5", print_hash_value);
    transparent_crc(p_552->g_330.s6, "p_552->g_330.s6", print_hash_value);
    transparent_crc(p_552->g_330.s7, "p_552->g_330.s7", print_hash_value);
    transparent_crc(p_552->g_340, "p_552->g_340", print_hash_value);
    transparent_crc(p_552->g_361.s0, "p_552->g_361.s0", print_hash_value);
    transparent_crc(p_552->g_361.s1, "p_552->g_361.s1", print_hash_value);
    transparent_crc(p_552->g_361.s2, "p_552->g_361.s2", print_hash_value);
    transparent_crc(p_552->g_361.s3, "p_552->g_361.s3", print_hash_value);
    transparent_crc(p_552->g_361.s4, "p_552->g_361.s4", print_hash_value);
    transparent_crc(p_552->g_361.s5, "p_552->g_361.s5", print_hash_value);
    transparent_crc(p_552->g_361.s6, "p_552->g_361.s6", print_hash_value);
    transparent_crc(p_552->g_361.s7, "p_552->g_361.s7", print_hash_value);
    transparent_crc(p_552->g_367.s0, "p_552->g_367.s0", print_hash_value);
    transparent_crc(p_552->g_367.s1, "p_552->g_367.s1", print_hash_value);
    transparent_crc(p_552->g_367.s2, "p_552->g_367.s2", print_hash_value);
    transparent_crc(p_552->g_367.s3, "p_552->g_367.s3", print_hash_value);
    transparent_crc(p_552->g_367.s4, "p_552->g_367.s4", print_hash_value);
    transparent_crc(p_552->g_367.s5, "p_552->g_367.s5", print_hash_value);
    transparent_crc(p_552->g_367.s6, "p_552->g_367.s6", print_hash_value);
    transparent_crc(p_552->g_367.s7, "p_552->g_367.s7", print_hash_value);
    transparent_crc(p_552->g_390.x, "p_552->g_390.x", print_hash_value);
    transparent_crc(p_552->g_390.y, "p_552->g_390.y", print_hash_value);
    transparent_crc(p_552->g_390.z, "p_552->g_390.z", print_hash_value);
    transparent_crc(p_552->g_390.w, "p_552->g_390.w", print_hash_value);
    transparent_crc(p_552->g_395.s0, "p_552->g_395.s0", print_hash_value);
    transparent_crc(p_552->g_395.s1, "p_552->g_395.s1", print_hash_value);
    transparent_crc(p_552->g_395.s2, "p_552->g_395.s2", print_hash_value);
    transparent_crc(p_552->g_395.s3, "p_552->g_395.s3", print_hash_value);
    transparent_crc(p_552->g_395.s4, "p_552->g_395.s4", print_hash_value);
    transparent_crc(p_552->g_395.s5, "p_552->g_395.s5", print_hash_value);
    transparent_crc(p_552->g_395.s6, "p_552->g_395.s6", print_hash_value);
    transparent_crc(p_552->g_395.s7, "p_552->g_395.s7", print_hash_value);
    transparent_crc(p_552->g_405.s0, "p_552->g_405.s0", print_hash_value);
    transparent_crc(p_552->g_405.s1, "p_552->g_405.s1", print_hash_value);
    transparent_crc(p_552->g_405.s2, "p_552->g_405.s2", print_hash_value);
    transparent_crc(p_552->g_405.s3, "p_552->g_405.s3", print_hash_value);
    transparent_crc(p_552->g_405.s4, "p_552->g_405.s4", print_hash_value);
    transparent_crc(p_552->g_405.s5, "p_552->g_405.s5", print_hash_value);
    transparent_crc(p_552->g_405.s6, "p_552->g_405.s6", print_hash_value);
    transparent_crc(p_552->g_405.s7, "p_552->g_405.s7", print_hash_value);
    transparent_crc(p_552->g_420, "p_552->g_420", print_hash_value);
    transparent_crc(p_552->g_427.f0, "p_552->g_427.f0", print_hash_value);
    transparent_crc(p_552->g_488.s0, "p_552->g_488.s0", print_hash_value);
    transparent_crc(p_552->g_488.s1, "p_552->g_488.s1", print_hash_value);
    transparent_crc(p_552->g_488.s2, "p_552->g_488.s2", print_hash_value);
    transparent_crc(p_552->g_488.s3, "p_552->g_488.s3", print_hash_value);
    transparent_crc(p_552->g_488.s4, "p_552->g_488.s4", print_hash_value);
    transparent_crc(p_552->g_488.s5, "p_552->g_488.s5", print_hash_value);
    transparent_crc(p_552->g_488.s6, "p_552->g_488.s6", print_hash_value);
    transparent_crc(p_552->g_488.s7, "p_552->g_488.s7", print_hash_value);
    transparent_crc(p_552->g_493, "p_552->g_493", print_hash_value);
    transparent_crc(p_552->g_494.x, "p_552->g_494.x", print_hash_value);
    transparent_crc(p_552->g_494.y, "p_552->g_494.y", print_hash_value);
    transparent_crc(p_552->g_527.s0, "p_552->g_527.s0", print_hash_value);
    transparent_crc(p_552->g_527.s1, "p_552->g_527.s1", print_hash_value);
    transparent_crc(p_552->g_527.s2, "p_552->g_527.s2", print_hash_value);
    transparent_crc(p_552->g_527.s3, "p_552->g_527.s3", print_hash_value);
    transparent_crc(p_552->g_527.s4, "p_552->g_527.s4", print_hash_value);
    transparent_crc(p_552->g_527.s5, "p_552->g_527.s5", print_hash_value);
    transparent_crc(p_552->g_527.s6, "p_552->g_527.s6", print_hash_value);
    transparent_crc(p_552->g_527.s7, "p_552->g_527.s7", print_hash_value);
    transparent_crc(p_552->g_527.s8, "p_552->g_527.s8", print_hash_value);
    transparent_crc(p_552->g_527.s9, "p_552->g_527.s9", print_hash_value);
    transparent_crc(p_552->g_527.sa, "p_552->g_527.sa", print_hash_value);
    transparent_crc(p_552->g_527.sb, "p_552->g_527.sb", print_hash_value);
    transparent_crc(p_552->g_527.sc, "p_552->g_527.sc", print_hash_value);
    transparent_crc(p_552->g_527.sd, "p_552->g_527.sd", print_hash_value);
    transparent_crc(p_552->g_527.se, "p_552->g_527.se", print_hash_value);
    transparent_crc(p_552->g_527.sf, "p_552->g_527.sf", print_hash_value);
    transparent_crc(p_552->v_collective, "p_552->v_collective", print_hash_value);
    transparent_crc(p_552->l_comm_values[get_linear_local_id()], "p_552->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_552->g_comm_values[get_linear_group_id() * 20 + get_linear_local_id()], "p_552->g_comm_values[get_linear_group_id() * 20 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
