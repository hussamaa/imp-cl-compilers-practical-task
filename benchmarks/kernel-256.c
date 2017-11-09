// --atomics 77 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 8,46,24 -l 4,1,4
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

__constant uint32_t permutations[10][16] = {
{10,2,12,11,1,14,6,3,0,13,9,8,15,4,7,5}, // permutation 0
{13,0,3,11,14,10,7,4,6,8,1,2,12,5,15,9}, // permutation 1
{7,15,0,9,4,12,6,5,14,1,10,8,3,13,11,2}, // permutation 2
{1,6,9,15,7,14,0,4,5,3,2,13,8,12,11,10}, // permutation 3
{2,12,6,10,9,3,0,5,4,8,1,7,13,14,11,15}, // permutation 4
{12,0,13,6,7,4,3,14,10,8,9,1,15,2,11,5}, // permutation 5
{11,5,0,1,13,7,6,4,10,8,2,14,12,9,3,15}, // permutation 6
{15,10,5,6,12,2,0,4,1,9,11,3,13,7,14,8}, // permutation 7
{13,10,14,0,11,1,8,6,12,2,3,5,9,15,7,4}, // permutation 8
{13,7,0,12,11,10,3,4,6,9,5,2,14,1,15,8} // permutation 9
};

// Seed: 2618495754

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint8_t  f0;
   int32_t  f1;
   volatile uint32_t  f2;
   uint32_t  f3;
};

union U1 {
   uint32_t  f0;
   int8_t * f1;
};

struct S2 {
    uint8_t g_18;
    uint32_t g_20;
    uint32_t g_21;
    union U0 g_46;
    VECTOR(uint16_t, 4) g_49;
    int8_t g_62[7][9];
    int8_t *g_64;
    VECTOR(int8_t, 4) g_65;
    VECTOR(int8_t, 16) g_67;
    VECTOR(int16_t, 8) g_79;
    volatile VECTOR(int64_t, 8) g_80;
    int32_t g_87[10][3][2];
    int32_t *g_167[2];
    int32_t g_172;
    int32_t *g_171[8][2];
    union U0 g_190[10][10][2];
    volatile union U0 g_209;
    VECTOR(uint8_t, 2) g_212;
    union U1 g_227;
    volatile VECTOR(int16_t, 4) g_238;
    volatile VECTOR(uint16_t, 4) g_250;
    volatile VECTOR(int32_t, 4) g_258;
    VECTOR(int32_t, 8) g_260;
    VECTOR(int64_t, 8) g_269;
    volatile union U0 g_272;
    volatile VECTOR(uint32_t, 8) g_274;
    VECTOR(int8_t, 4) g_280;
    VECTOR(int32_t, 2) g_293;
    union U0 g_294;
    int32_t * volatile g_296;
    int32_t ** volatile g_340;
    uint32_t *g_392;
    uint32_t **g_391;
    uint32_t *** volatile g_390[10][8][3];
    uint64_t g_422[3];
    volatile VECTOR(int8_t, 2) g_448;
    VECTOR(int16_t, 8) g_452;
    VECTOR(int16_t, 2) g_455;
    union U0 *g_471;
    union U0 **g_470;
    int32_t **g_478;
    uint16_t g_522;
    uint16_t *g_521;
    uint16_t **g_520[9][9];
    VECTOR(int16_t, 2) g_537;
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
uint8_t  func_1(struct S2 * p_556);
int32_t * func_2(int64_t  p_3, struct S2 * p_556);
int64_t  func_4(int8_t * p_5, struct S2 * p_556);
union U0  func_6(int64_t  p_7, int32_t * p_8, int64_t  p_9, struct S2 * p_556);
int16_t  func_13(uint32_t  p_14, struct S2 * p_556);
union U0 * func_22(uint32_t * p_23, uint8_t * p_24, uint32_t  p_25, int8_t  p_26, uint32_t  p_27, struct S2 * p_556);
uint32_t * func_28(int32_t  p_29, int64_t  p_30, int32_t * p_31, uint32_t * p_32, struct S2 * p_556);
int8_t  func_33(uint32_t * p_34, uint8_t * p_35, uint64_t  p_36, int64_t  p_37, struct S2 * p_556);
uint32_t * func_38(int32_t * p_39, struct S2 * p_556);
uint32_t  func_40(uint32_t * p_41, int32_t  p_42, struct S2 * p_556);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_556->g_21 p_556->g_46 p_556->g_49 p_556->g_65 p_556->g_67 p_556->l_comm_values p_556->g_79 p_556->g_80 p_556->g_62 p_556->g_87 p_556->g_46.f0 p_556->g_171 p_556->g_172 p_556->g_209 p_556->g_212 p_556->g_64 p_556->g_18 p_556->g_258 p_556->g_260 p_556->g_269 p_556->g_272 p_556->g_274 p_556->g_280 p_556->g_227 p_556->g_293 p_556->g_294 p_556->g_296 p_556->g_422 p_556->g_167 p_556->g_20 p_556->g_391 p_556->g_392 p_556->g_250 p_556->g_478 p_556->g_455 p_556->g_comm_values p_556->g_227.f0 p_556->g_520 p_556->g_272.f0 p_556->g_190.f0 p_556->g_448 p_556->g_537 p_556->g_521 p_556->g_522 p_556->g_294.f3
 * writes: p_556->g_18 p_556->g_20 p_556->g_21 p_556->g_49 p_556->g_64 p_556->g_87 p_556->g_167 p_556->g_171 p_556->g_79 p_556->g_172 p_556->g_46.f3 p_556->g_comm_values p_556->g_46.f1 p_556->g_294.f1 p_556->g_294.f0 p_556->g_470 p_556->g_422 p_556->g_478 p_556->g_227.f0 p_556->g_520 p_556->g_62 p_556->g_522 p_556->g_294.f3
 */
uint8_t  func_1(struct S2 * p_556)
{ /* block id: 4 */
    VECTOR(int32_t, 4) l_10 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
    uint8_t *l_17 = &p_556->g_18;
    uint32_t *l_19 = &p_556->g_20;
    VECTOR(int8_t, 8) l_200 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x04L), 0x04L), 0x04L, (-1L), 0x04L);
    uint64_t l_201 = 18446744073709551607UL;
    int32_t *l_547[9];
    uint32_t l_548 = 0xC3740A3EL;
    int i;
    for (i = 0; i < 9; i++)
        l_547[i] = (void*)0;
    l_547[5] = func_2((l_10.z = func_4((func_6((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_10.yx)).xyyxxyxy)).s2 >= (safe_lshift_func_uint16_t_u_s(l_10.y, func_13((p_556->g_21 &= ((*l_19) = (safe_mul_func_uint8_t_u_u(((*l_17) = 0UL), FAKE_DIVERGE(p_556->global_0_offset, get_global_id(0), 10))))), p_556)))), &p_556->g_172, (safe_unary_minus_func_uint32_t_u(((((!4UL) == ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0L, 0x02183CB46D81FED2L)), 0x0418D95EC47EE0E8L, 8L)).w) , (((void*)0 != &p_556->g_62[1][8]) || (((((VECTOR(int8_t, 4))(l_200.s1701)).x > (l_201++)) ^ (safe_sub_func_int32_t_s_s((+(FAKE_DIVERGE(p_556->global_1_offset, get_global_id(1), 10) <= (p_556->g_62[1][8] > (safe_rshift_func_int8_t_s_s(l_10.y, p_556->g_62[1][8]))))), GROUP_DIVERGE(2, 1)))) > l_10.x))) < 0x9E427751L))), p_556) , &p_556->g_62[6][1]), p_556)), p_556);
    --l_548;
    for (p_556->g_294.f3 = 0; (p_556->g_294.f3 > 5); p_556->g_294.f3++)
    { /* block id: 221 */
        uint32_t l_553 = 1UL;
        uint8_t l_554 = 0x35L;
        uint32_t l_555 = 0xBAB5D368L;
        l_555 = (((*p_556->g_521) != l_553) <= (p_556->g_455.x >= (l_554 & 4294967287UL)));
    }
    (*p_556->g_478) = l_19;
    return p_556->g_172;
}


/* ------------------------------------------ */
/* 
 * reads : p_556->g_18 p_556->g_422 p_556->g_167 p_556->g_172 p_556->g_20 p_556->g_87 p_556->g_391 p_556->g_392 p_556->g_21 p_556->g_250 p_556->g_478 p_556->g_171 p_556->g_46 p_556->g_67 p_556->g_455 p_556->g_comm_values p_556->g_227.f0 p_556->g_49 p_556->l_comm_values p_556->g_520 p_556->g_269 p_556->g_272.f0 p_556->g_260 p_556->g_64 p_556->g_293 p_556->g_280 p_556->g_212 p_556->g_190.f0 p_556->g_448 p_556->g_537 p_556->g_521 p_556->g_522
 * writes: p_556->g_18 p_556->g_46.f1 p_556->g_294.f1 p_556->g_294.f0 p_556->g_87 p_556->g_470 p_556->g_422 p_556->g_478 p_556->g_227.f0 p_556->g_172 p_556->g_20 p_556->g_167 p_556->g_comm_values p_556->g_49 p_556->g_520 p_556->g_62 p_556->g_522 p_556->g_171
 */
int32_t * func_2(int64_t  p_3, struct S2 * p_556)
{ /* block id: 131 */
    uint32_t l_337 = 0UL;
    VECTOR(int32_t, 2) l_380 = (VECTOR(int32_t, 2))(0x0678D7CDL, 1L);
    int32_t l_384 = 0x4EE40708L;
    VECTOR(int16_t, 4) l_450 = (VECTOR(int16_t, 4))(0x47FFL, (VECTOR(int16_t, 2))(0x47FFL, 0x31BAL), 0x31BAL);
    uint16_t l_463 = 65532UL;
    union U0 *l_467 = &p_556->g_46;
    union U0 **l_466 = &l_467;
    int32_t **l_475 = &p_556->g_167[1];
    VECTOR(int8_t, 16) l_483 = (VECTOR(int8_t, 16))(0x55L, (VECTOR(int8_t, 4))(0x55L, (VECTOR(int8_t, 2))(0x55L, 0x59L), 0x59L), 0x59L, 0x55L, 0x59L, (VECTOR(int8_t, 2))(0x55L, 0x59L), (VECTOR(int8_t, 2))(0x55L, 0x59L), 0x55L, 0x59L, 0x55L, 0x59L);
    uint16_t *l_498 = (void*)0;
    uint16_t *l_499 = &l_463;
    int64_t *l_504 = (void*)0;
    int64_t *l_505 = (void*)0;
    int64_t *l_506 = (void*)0;
    int64_t *l_507 = (void*)0;
    int64_t *l_508 = (void*)0;
    int64_t *l_509[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int16_t *l_510 = (void*)0;
    int16_t *l_511 = (void*)0;
    int16_t *l_512[1];
    uint16_t *l_515 = (void*)0;
    uint16_t ***l_523 = &p_556->g_520[5][5];
    uint8_t *l_524 = &p_556->g_18;
    int64_t l_525[3];
    uint16_t l_526 = 65535UL;
    int32_t l_527 = 0x16FFC1FDL;
    uint8_t l_528 = 5UL;
    int32_t *l_529 = &p_556->g_87[9][2][0];
    VECTOR(uint16_t, 4) l_530 = (VECTOR(uint16_t, 4))(0x4631L, (VECTOR(uint16_t, 2))(0x4631L, 0xE989L), 0xE989L);
    VECTOR(uint16_t, 16) l_531 = (VECTOR(uint16_t, 16))(0xB145L, (VECTOR(uint16_t, 4))(0xB145L, (VECTOR(uint16_t, 2))(0xB145L, 0x8CEBL), 0x8CEBL), 0x8CEBL, 0xB145L, 0x8CEBL, (VECTOR(uint16_t, 2))(0xB145L, 0x8CEBL), (VECTOR(uint16_t, 2))(0xB145L, 0x8CEBL), 0xB145L, 0x8CEBL, 0xB145L, 0x8CEBL);
    VECTOR(uint16_t, 4) l_532 = (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 8UL), 8UL);
    VECTOR(uint16_t, 16) l_533 = (VECTOR(uint16_t, 16))(0xDBCFL, (VECTOR(uint16_t, 4))(0xDBCFL, (VECTOR(uint16_t, 2))(0xDBCFL, 9UL), 9UL), 9UL, 0xDBCFL, 9UL, (VECTOR(uint16_t, 2))(0xDBCFL, 9UL), (VECTOR(uint16_t, 2))(0xDBCFL, 9UL), 0xDBCFL, 9UL, 0xDBCFL, 9UL);
    VECTOR(uint16_t, 8) l_535 = (VECTOR(uint16_t, 8))(0xF045L, (VECTOR(uint16_t, 4))(0xF045L, (VECTOR(uint16_t, 2))(0xF045L, 0x811AL), 0x811AL), 0x811AL, 0xF045L, 0x811AL);
    VECTOR(uint16_t, 2) l_536 = (VECTOR(uint16_t, 2))(65532UL, 65535UL);
    VECTOR(uint16_t, 4) l_538 = (VECTOR(uint16_t, 4))(0x14BDL, (VECTOR(uint16_t, 2))(0x14BDL, 0x33F8L), 0x33F8L);
    int i, j;
    for (i = 0; i < 1; i++)
        l_512[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_525[i] = 1L;
    if ((safe_lshift_func_int8_t_s_s(p_3, 2)))
    { /* block id: 132 */
        union U0 **l_323 = (void*)0;
        int32_t l_382 = 0L;
        uint32_t *l_389[4][9][7] = {{{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0}},{{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0}},{{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0}},{{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0},{&p_556->g_20,(void*)0,&p_556->g_227.f0,&p_556->g_227.f0,&p_556->g_20,&p_556->g_20,&p_556->g_227.f0}}};
        uint32_t **l_388 = &l_389[0][8][3];
        int8_t l_442 = (-2L);
        VECTOR(int16_t, 16) l_451 = (VECTOR(int16_t, 16))(0x2146L, (VECTOR(int16_t, 4))(0x2146L, (VECTOR(int16_t, 2))(0x2146L, 0x6208L), 0x6208L), 0x6208L, 0x2146L, 0x6208L, (VECTOR(int16_t, 2))(0x2146L, 0x6208L), (VECTOR(int16_t, 2))(0x2146L, 0x6208L), 0x2146L, 0x6208L, 0x2146L, 0x6208L);
        VECTOR(uint64_t, 2) l_457 = (VECTOR(uint64_t, 2))(18446744073709551608UL, 18446744073709551615UL);
        int i, j, k;
        for (p_556->g_18 = 0; (p_556->g_18 < 42); p_556->g_18 = safe_add_func_int32_t_s_s(p_556->g_18, 7))
        { /* block id: 135 */
            union U0 *l_322 = &p_556->g_294;
            union U0 **l_321 = &l_322;
            int32_t *l_339 = &p_556->g_87[6][2][1];
            VECTOR(int32_t, 16) l_415 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2EF16101L), 0x2EF16101L), 0x2EF16101L, 0L, 0x2EF16101L, (VECTOR(int32_t, 2))(0L, 0x2EF16101L), (VECTOR(int32_t, 2))(0L, 0x2EF16101L), 0L, 0x2EF16101L, 0L, 0x2EF16101L);
            VECTOR(uint64_t, 8) l_456 = (VECTOR(uint64_t, 8))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0UL), 0UL), 0UL, 18446744073709551606UL, 0UL);
            union U0 ***l_468[4][5] = {{&l_466,(void*)0,(void*)0,&l_466,&l_466},{&l_466,(void*)0,(void*)0,&l_466,&l_466},{&l_466,(void*)0,(void*)0,&l_466,&l_466},{&l_466,(void*)0,(void*)0,&l_466,&l_466}};
            union U0 **l_469[1];
            uint64_t *l_472 = &p_556->g_422[0];
            int32_t ***l_476 = (void*)0;
            int32_t ***l_477 = (void*)0;
            int i, j;
            for (i = 0; i < 1; i++)
                l_469[i] = &l_322;
            for (p_556->g_46.f1 = 0; (p_556->g_46.f1 == 29); p_556->g_46.f1++)
            { /* block id: 138 */
                uint32_t l_325 = 0UL;
                int16_t *l_330 = (void*)0;
                int16_t *l_331 = (void*)0;
                int16_t *l_332 = (void*)0;
                int16_t *l_333[7];
                int32_t l_334 = 1L;
                uint32_t **l_394 = (void*)0;
                VECTOR(int8_t, 2) l_449 = (VECTOR(int8_t, 2))((-1L), 0x30L);
                int i;
                for (i = 0; i < 7; i++)
                    l_333[i] = (void*)0;
                for (p_556->g_294.f1 = 0; (p_556->g_294.f1 != 13); p_556->g_294.f1++)
                { /* block id: 141 */
                    int32_t l_324 = (-1L);
                    l_323 = l_321;
                    ++l_325;
                }
            }
            for (p_556->g_294.f0 = 0; (p_556->g_294.f0 == 14); p_556->g_294.f0 = safe_add_func_int64_t_s_s(p_556->g_294.f0, 9))
            { /* block id: 184 */
                for (l_442 = 10; (l_442 != (-6)); l_442 = safe_sub_func_uint8_t_u_u(l_442, 3))
                { /* block id: 187 */
                    (*l_339) = l_384;
                    if (l_463)
                        break;
                    if (p_3)
                        break;
                }
            }
            (**l_475) = ((p_3 ^ 0x1DAEL) | (safe_div_func_uint16_t_u_u(((-1L) & (((*l_472) |= (~((~(l_466 == (p_556->g_470 = (l_469[0] = &l_322)))) > ((void*)0 != &p_556->g_64)))) > (safe_mod_func_uint64_t_u_u((((((p_556->g_478 = l_475) != (((**p_556->g_391) = (safe_sub_func_uint16_t_u_u((**l_475), 0x03C1L))) , l_475)) || p_3) < p_556->g_21) > 0xDCD775D5FBFC2678L), 18446744073709551608UL)))), p_556->g_250.x)));
        }
    }
    else
    { /* block id: 200 */
        (*l_475) = (*p_556->g_478);
    }
    (*l_529) ^= (l_384 ^= ((((safe_rshift_func_uint8_t_u_s((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))((-3L), 1L)))).yyyxyxxy, ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_483.s2f31)).xxwxxwxy)).s23, (int8_t)(l_528 &= (((safe_mod_func_uint8_t_u_u(p_3, (((((safe_sub_func_uint16_t_u_u(p_3, (safe_lshift_func_uint16_t_u_u((((((safe_sub_func_int64_t_s_s((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((*l_467) , ((*l_524) = (p_556->g_67.sd <= (((*l_499) = GROUP_DIVERGE(1, 1)) || ((safe_div_func_int16_t_s_s((l_380.x = (p_3 ^ (p_556->g_comm_values[p_556->tid] |= (safe_rshift_func_int16_t_s_u(p_556->g_455.y, 8))))), ((*l_499) = p_556->g_227.f0))) > ((*p_556->g_64) = (((((safe_lshift_func_int16_t_s_u(((p_556->g_49.w--) ^ (safe_rshift_func_uint8_t_u_s((p_556->l_comm_values[(safe_mod_func_uint32_t_u_u(p_556->tid, 16))] || ((((*l_523) = p_556->g_520[5][3]) == &l_515) < p_556->g_269.s2)), p_3))), 11)) >= p_3) == 0x5FDD5F2B67EA167FL) | p_556->g_272.f0) < p_556->g_260.s7))))))), 5UL)), l_525[0])) , p_556->g_293.y), 0x54F3L)), FAKE_DIVERGE(p_556->global_0_offset, get_global_id(0), 10))) , l_526) != l_527) || p_556->g_280.y) == 0xB1D221E5A6E8B9E0L), p_3)))) ^ p_556->g_280.y) && p_556->g_250.w) , p_3) && 8UL))) >= l_450.z) < p_556->g_212.x))))).yyyyyyxy, ((VECTOR(uint8_t, 8))(0xACL)))))))).odd, ((VECTOR(int16_t, 4))(0x277CL))))).ywzyyyxxwwxzwxyx, ((VECTOR(int16_t, 16))(1L))))).s1c)).even , p_556->g_190[0][9][0].f0), p_3)) , p_3) <= 6L) || p_3));
    (*p_556->g_478) = func_28((p_556->g_269.s3 || ((VECTOR(uint32_t, 16))(0x573DA728L, 4294967295UL, p_3, (0x531E6EF9713CD4D8L != (((((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_530.yzywzxxzzxyyyzww)).s35)))))))).xyxy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_531.s4637dc73)).s24)))), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_532.xy)).yxyx)).xzwxxxxy)).s4, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 2))(l_533.sef)).xxxy, (uint16_t)(safe_unary_minus_func_int16_t_s(p_556->g_448.y)), (uint16_t)p_3))), ((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_535.s54630377)).s55)).xxyyxyxyxxyyxyyy)).s2de3, ((VECTOR(uint16_t, 2))(l_536.xx)).xyxy))).yxyywzyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0xD7E5L, 0x8D9CL)).xxyyyyxyyxyyyyyy)).s2bf5)).zzyyxwzz, ((VECTOR(uint16_t, 4))(5UL, 4UL, 0UL, 0x5C0AL)).yzxxywzz)))))).hi))).odd, ((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(0x4304L, 0x0933L, 0x6C11L, 0L)))))).zzxywwxxzxwxxxzy)).odd, ((VECTOR(int16_t, 4))(p_556->g_537.yyyx)).wwwyxxzw))).s57)))))).yxyxyxyyyyyxxyyy)).sf0)), ((VECTOR(uint16_t, 2))(9UL, 0UL)), 0UL)).lo, ((VECTOR(uint16_t, 2))(65535UL, 0x4CC4L)).xyxy))), 65535UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_538.zwywwzxz)).s75)), 0xF2BAL, 1UL, 0xDB89L, 0x2598L, (*p_556->g_521), 0x394DL, (+((safe_mod_func_uint8_t_u_u((p_3 == ((*p_556->g_521)++)), (safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((((*l_529) < 0x33916AF5L) == p_556->g_455.y) , p_556->g_190[0][9][0].f0) , (*l_529)), (*l_529))), (-1L))))) | p_556->g_422[0])), 65535UL, 0x54B2L)).hi, ((VECTOR(uint16_t, 8))(0xC4DFL))))).s2 & GROUP_DIVERGE(2, 1)) > 0x28C68B49L) || 0x77DEL)), 0xCFE52B2FL, 1UL, ((VECTOR(uint32_t, 8))(4294967295UL)), 1UL, 1UL)).s7), p_556->g_280.z, (*p_556->g_478), l_529, p_556);
    return (*l_475);
}


/* ------------------------------------------ */
/* 
 * reads : p_556->g_296 p_556->g_87 p_556->g_260
 * writes: p_556->g_87 p_556->g_172
 */
int64_t  func_4(int8_t * p_5, struct S2 * p_556)
{ /* block id: 125 */
    int32_t l_295[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t l_297 = (-10L);
    int32_t *l_298 = &p_556->g_172;
    int32_t *l_299 = &l_297;
    int32_t l_300 = 1L;
    int32_t *l_301 = &p_556->g_172;
    int32_t *l_302 = &l_300;
    int32_t l_303 = 0x271CF96CL;
    int32_t *l_304 = &l_303;
    int32_t *l_305 = (void*)0;
    int32_t *l_306 = (void*)0;
    int32_t *l_307 = &p_556->g_87[5][0][1];
    int32_t *l_308[9];
    int16_t l_309 = 0x30E3L;
    uint32_t l_310 = 8UL;
    int i;
    for (i = 0; i < 9; i++)
        l_308[i] = &p_556->g_190[0][9][0].f1;
    (*p_556->g_296) = l_295[4];
    l_310++;
    (*l_298) = (*l_307);
    return p_556->g_260.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_556->g_209 p_556->g_212 p_556->g_67 p_556->g_64 p_556->g_62 p_556->g_87 p_556->g_79 p_556->g_18 p_556->l_comm_values p_556->g_49 p_556->g_258 p_556->g_260 p_556->g_269 p_556->g_272 p_556->g_274 p_556->g_280 p_556->g_227 p_556->g_172 p_556->g_293 p_556->g_294
 * writes: p_556->g_171 p_556->g_79 p_556->g_167 p_556->g_172 p_556->g_87 p_556->g_46.f3 p_556->g_comm_values
 */
union U0  func_6(int64_t  p_7, int32_t * p_8, int64_t  p_9, struct S2 * p_556)
{ /* block id: 99 */
    int32_t **l_208 = &p_556->g_171[4][0];
    uint16_t *l_210 = (void*)0;
    VECTOR(int16_t, 2) l_211 = (VECTOR(int16_t, 2))(0x09FBL, 1L);
    uint32_t *l_214 = &p_556->g_21;
    uint32_t **l_213 = &l_214;
    int16_t *l_217 = (void*)0;
    int16_t *l_218[5][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t *l_220 = &p_556->g_172;
    VECTOR(int16_t, 8) l_236 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x1FF6L), 0x1FF6L), 0x1FF6L, 1L, 0x1FF6L);
    VECTOR(int16_t, 8) l_239 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4830L), 0x4830L), 0x4830L, 0L, 0x4830L);
    uint8_t *l_251[5];
    uint8_t l_289 = 253UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_251[i] = &p_556->g_190[0][9][0].f0;
    (*l_208) = &p_556->g_172;
    if (((p_556->g_209 , l_210) == ((((void*)0 != p_8) != ((((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 16))(l_211.xxyyyxyxxyxxyyxx)).see, ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x10L, 0L)).xyxxxyyx)))).s12, ((VECTOR(uint8_t, 16))(p_556->g_212.xyyyxyyxxyyxxxxy)).s98)))))).even != (p_556->g_79.s3 &= ((((void*)0 == l_213) || ((p_9 <= (safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(0x06L, 0x2EL, 0x27L, p_556->g_67.sc, ((VECTOR(uint8_t, 2))(0x27L, 0UL)), 255UL, 0x0DL)).s1, p_9))) , (*p_556->g_64))) , p_556->g_87[9][2][0]))) != p_556->g_62[1][8])) , (void*)0)))
    { /* block id: 102 */
        VECTOR(uint16_t, 8) l_219 = (VECTOR(uint16_t, 8))(0x9252L, (VECTOR(uint16_t, 4))(0x9252L, (VECTOR(uint16_t, 2))(0x9252L, 0x7E6AL), 0x7E6AL), 0x7E6AL, 0x9252L, 0x7E6AL);
        int32_t l_221 = 0x750AC017L;
        int i;
        p_556->g_167[1] = (l_220 = ((p_556->g_18 == ((VECTOR(uint16_t, 4))(l_219.s2673)).z) , p_8));
        l_221 = 1L;
    }
    else
    { /* block id: 106 */
        int32_t l_224 = 0L;
        int16_t l_234 = 0x4F9BL;
        VECTOR(int16_t, 8) l_235 = (VECTOR(int16_t, 8))(0x5099L, (VECTOR(int16_t, 4))(0x5099L, (VECTOR(int16_t, 2))(0x5099L, 0x253EL), 0x253EL), 0x253EL, 0x5099L, 0x253EL);
        VECTOR(int16_t, 8) l_237 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x286BL), 0x286BL), 0x286BL, 0L, 0x286BL);
        int32_t *l_257 = &p_556->g_46.f1;
        VECTOR(int32_t, 2) l_259 = (VECTOR(int32_t, 2))(1L, (-1L));
        union U0 *l_273 = &p_556->g_190[0][9][0];
        uint32_t *l_275[1];
        VECTOR(uint8_t, 8) l_281 = (VECTOR(uint8_t, 8))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 0x10L), 0x10L), 0x10L, 252UL, 0x10L);
        int64_t *l_290 = (void*)0;
        int64_t *l_291 = (void*)0;
        int32_t *l_292 = &p_556->g_87[9][2][0];
        int i;
        for (i = 0; i < 1; i++)
            l_275[i] = &p_556->g_46.f3;
        for (p_7 = 0; (p_7 == (-24)); p_7 = safe_sub_func_int32_t_s_s(p_7, 2))
        { /* block id: 109 */
            int64_t l_244 = 0x45A7BEBA78A4743BL;
            int32_t *l_245 = &p_556->g_87[4][2][1];
            uint8_t *l_252 = &p_556->g_46.f0;
            (*l_245) |= (!((*l_220) = ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x31482713L, 1L)), 1L, l_224, ((safe_rshift_func_uint8_t_u_s(((+(+0xC985221F519DDE95L)) , ((p_556->g_227 , (0x7972B7384CCD5397L != (safe_add_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(p_556->g_190[0][9][0].f0, (p_556->g_79.s4 ^= ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_234, ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 16))(l_235.s0127120112604053)).s16, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(l_236.s3025)).hi, ((VECTOR(int16_t, 8))(l_237.s77761724)).s61))), 0x7069L, 0x4E01L)).even, ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 4))(p_556->g_238.wxwy)).ywwwzyzwywwyywzx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_239.s4163137602765531)))).s6c)).yyyyxxyxxxyyyxxy))), ((VECTOR(int16_t, 8))(0x6E1CL, 0x0C4DL, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(((~(safe_add_func_uint64_t_u_u(l_235.s5, (safe_sub_func_uint16_t_u_u(0x7172L, p_7))))) , l_244), (*l_220), 0x472EL, ((VECTOR(int16_t, 4))(9L)), 0L, 6L, 8L, p_556->g_238.y, 1L, ((VECTOR(int16_t, 4))(1L)))).sc9, ((VECTOR(int16_t, 2))((-1L)))))), ((VECTOR(int16_t, 2))(0x60E2L)), (-1L), 0x104FL)).s7651361164067537))).sc6cf, ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 4))(3L))))), ((VECTOR(int16_t, 4))(9L))))).odd))), 0x243FL)).yxzyxzyx)).odd)).z))), p_556->g_46.f0)), p_7)))) | p_7)), 0)) != l_237.s5), (*p_8), 0x7E2EC41BL, 1L)).s50, ((VECTOR(int32_t, 2))(0x32A3C272L))))).lo));
            l_257 = (((safe_lshift_func_int16_t_s_s((((((((((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 2))(p_556->g_250.zx))))).even | p_556->g_62[1][8]) != (((p_556->g_62[0][5] & p_556->g_212.x) , l_251[1]) == (p_556->g_212.y , l_252))) && 0x13B8E99BC534D282L) && ((safe_mul_func_int8_t_s_s(p_9, (safe_sub_func_int64_t_s_s(((*l_245) ^= 0x358A45DB5CEE289EL), p_556->l_comm_values[(safe_mod_func_uint32_t_u_u(p_556->tid, 16))])))) ^ FAKE_DIVERGE(p_556->global_2_offset, get_global_id(2), 10))) >= p_9) <= l_237.s2) ^ l_237.s6), p_7)) | p_556->g_49.x) , (void*)0);
            (*p_8) = ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(p_556->g_258.zzxxxyyy)).lo))).zzwyzwzwwzxywwxz, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_259.yyxxyxyy)).s3471577130022273))))).odd, ((VECTOR(int32_t, 4))(p_556->g_260.s1355)).wzzyywxz, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x4CA799A6L, 0x1FEB01F5L)).yxyx)).yzxxyxwy))).s2;
        }
        (*l_292) = (safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((l_224 |= (safe_lshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 8))(p_556->g_269.s60372043)).s4, ((VECTOR(uint64_t, 2))(0x42D26658D1AE91BEL, 0xBA474D165CD4AB56L)).odd)), (safe_add_func_int64_t_s_s(p_7, ((((((p_556->g_272 , l_273) != (void*)0) , ((void*)0 != &p_556->g_18)) <= p_9) || ((*l_220) = (p_556->g_46.f3 = (!((VECTOR(uint32_t, 2))(p_556->g_274.s46)).odd)))) != ((VECTOR(uint8_t, 2))(0UL, 255UL)).even)))))), (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 2))(p_556->g_280.yw)).hi, ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_281.s0666)).even)).yxyx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(6UL, 1UL)))).xxyx)), ((VECTOR(uint8_t, 4))(0x86L, 248UL, 0xCAL, 250UL))))).xxyxyxyywxzwwzzx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 2))(255UL, 0x83L)).yyxxyxxy, (uint8_t)((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((p_556->g_comm_values[p_556->tid] = (safe_add_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(((p_556->g_227 , l_289) < p_7))), 0UL))) ^ GROUP_DIVERGE(2, 1)) && p_9), p_7)), p_7)) <= GROUP_DIVERGE(1, 1))))))), ((VECTOR(uint8_t, 8))(1UL))))).even)).zxxyxyzwwxyzwywy))).sf)), p_7)))), FAKE_DIVERGE(p_556->group_0_offset, get_group_id(0), 10)));
        (*l_292) |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(8L, 0x12C8F082L)), (+(*p_8)), ((VECTOR(int32_t, 2))(0x55AB4E19L, 1L)), 0x43B3CD1FL, ((VECTOR(int32_t, 8))(0x4FD2AAB7L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_556->g_293.yy)), 0L, 0x246E9270L)), 0L, 0L, 0L)), 1L, 0x44A9D169L)).s4;
    }
    return p_556->g_294;
}


/* ------------------------------------------ */
/* 
 * reads : p_556->g_46 p_556->g_49 p_556->g_21 p_556->g_65 p_556->g_67 p_556->l_comm_values p_556->g_79 p_556->g_80 p_556->g_62 p_556->g_87 p_556->g_46.f0 p_556->g_171 p_556->g_172
 * writes: p_556->g_49 p_556->g_64 p_556->g_18 p_556->g_87 p_556->g_167 p_556->g_171
 */
int16_t  func_13(uint32_t  p_14, struct S2 * p_556)
{ /* block id: 8 */
    uint32_t *l_43 = &p_556->g_21;
    uint16_t *l_47 = (void*)0;
    uint16_t *l_48[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_50 = 0x64A0435EL;
    int8_t *l_61 = &p_556->g_62[1][8];
    int8_t **l_63[2];
    VECTOR(int8_t, 4) l_66 = (VECTOR(int8_t, 4))(0x19L, (VECTOR(int8_t, 2))(0x19L, 0x63L), 0x63L);
    int32_t l_74 = 0x2EE25529L;
    uint8_t *l_75[6] = {&p_556->g_18,&p_556->g_18,&p_556->g_18,&p_556->g_18,&p_556->g_18,&p_556->g_18};
    uint32_t **l_162 = &l_43;
    union U0 *l_197 = &p_556->g_46;
    int32_t *l_198 = &p_556->g_87[9][2][0];
    int i;
    for (i = 0; i < 2; i++)
        l_63[i] = &l_61;
    l_197 = func_22(((*l_162) = func_28((func_33(((*l_162) = func_38((func_40(l_43, ((safe_mod_func_uint16_t_u_u((((p_556->g_46 , (p_556->g_49.z--)) , p_556->g_21) && (safe_div_func_int16_t_s_s(1L, p_556->g_21))), ((GROUP_DIVERGE(0, 1) <= (+(safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((p_556->g_18 = (safe_add_func_int32_t_s_s(p_14, ((((p_556->g_64 = l_61) == ((FAKE_DIVERGE(p_556->local_0_offset, get_local_id(0), 10) && ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_556->g_65.xwywwywx)), (((VECTOR(int8_t, 16))(l_66.zwxyxxzzyyzxwxwy)).sb == l_50), 1L, ((VECTOR(int8_t, 2))(1L, (-5L))), ((VECTOR(int8_t, 2))((-10L), 0x10L)), 0L, 0x06L)).s3d47, ((VECTOR(int8_t, 8))(p_556->g_67.s84a86307)).odd))).xxyzzyzy)).odd, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(1L, 0x51L)), ((VECTOR(int8_t, 4))(((safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s(l_74, (-4L))), p_556->l_comm_values[(safe_mod_func_uint32_t_u_u(p_556->tid, 16))])) < p_556->g_65.z), l_66.y)) == p_14), ((VECTOR(int8_t, 2))(0x27L)), 0x14L)).even))), 1L, 1L)).xzxwywwy)), ((VECTOR(int8_t, 8))((-1L)))))).hi, ((VECTOR(int8_t, 4))((-1L)))))).even, ((VECTOR(int8_t, 2))(0x7BL)), ((VECTOR(int8_t, 2))(1L))))), 0x1FL, 1L)).y) , &p_556->g_62[1][8])) & 0x039CL) && 0x62677E161529ABC0L)))) && l_66.w), l_66.y)), l_50)))) || l_50))) , (-1L)), p_556) , &l_50), p_556)), l_61, p_14, l_66.y, p_556) , p_14), p_556->g_46.f0, p_556->g_171[4][0], &p_556->g_21, p_556)), l_61, l_74, p_556->l_comm_values[(safe_mod_func_uint32_t_u_u(p_556->tid, 16))], p_556->g_79.s6, p_556);
    (*l_198) ^= 1L;
    return p_556->g_62[4][8];
}


/* ------------------------------------------ */
/* 
 * reads : p_556->g_46 p_556->g_62 p_556->g_172 p_556->g_67 p_556->g_171
 * writes: p_556->g_171 p_556->g_167
 */
union U0 * func_22(uint32_t * p_23, uint8_t * p_24, uint32_t  p_25, int8_t  p_26, uint32_t  p_27, struct S2 * p_556)
{ /* block id: 86 */
    uint64_t l_174 = 0x98DB74E30DE83DB4L;
    int32_t l_177 = (-9L);
    uint16_t *l_179 = (void*)0;
    uint16_t **l_178 = &l_179;
    VECTOR(int8_t, 4) l_186 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x60L), 0x60L);
    union U0 *l_189 = &p_556->g_190[0][9][0];
    uint32_t l_191 = 4294967287UL;
    int32_t **l_192 = &p_556->g_171[4][0];
    int32_t *l_193 = &p_556->g_46.f1;
    uint64_t l_194[5] = {1UL,1UL,1UL,1UL,1UL};
    int i;
    ++l_174;
    (*l_192) = func_38(func_38(func_38(func_38((p_556->g_167[1] = ((*l_192) = func_28((l_177 = (-1L)), ((void*)0 == l_178), (((((p_556->g_46 , (safe_mul_func_int8_t_s_s(p_27, ((safe_add_func_uint8_t_u_u((*p_24), (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_186.xx)))).yyxx)).z, 0x90L)))) && p_556->g_172)))) | (safe_lshift_func_uint16_t_u_s((l_189 == (void*)0), 11))) >= l_191) ^ p_556->g_67.sc) , (void*)0), &p_556->g_20, p_556))), p_556), p_556), p_556), p_556);
    ++l_194[4];
    (*l_192) = (*l_192);
    return l_189;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t * func_28(int32_t  p_29, int64_t  p_30, int32_t * p_31, uint32_t * p_32, struct S2 * p_556)
{ /* block id: 83 */
    uint32_t *l_173 = &p_556->g_20;
    return l_173;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_556->g_167
 */
int8_t  func_33(uint32_t * p_34, uint8_t * p_35, uint64_t  p_36, int64_t  p_37, struct S2 * p_556)
{ /* block id: 77 */
    uint32_t l_163 = 6UL;
    int32_t l_164 = (-8L);
    int32_t *l_166 = (void*)0;
    int32_t **l_165[2][1];
    int64_t l_168 = 1L;
    VECTOR(int32_t, 4) l_169 = (VECTOR(int32_t, 4))(0x784625BBL, (VECTOR(int32_t, 2))(0x784625BBL, 8L), 8L);
    uint8_t l_170[8][1][2] = {{{0xC3L,1UL}},{{0xC3L,1UL}},{{0xC3L,1UL}},{{0xC3L,1UL}},{{0xC3L,1UL}},{{0xC3L,1UL}},{{0xC3L,1UL}},{{0xC3L,1UL}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_165[i][j] = &l_166;
    }
    l_164 &= l_163;
    p_556->g_167[1] = &p_556->g_87[9][2][0];
    l_170[3][0][0] = ((l_168 = p_37) >= ((VECTOR(int32_t, 16))(l_169.wyzxzzwxzywyywww)).s5);
    return p_36;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t * func_38(int32_t * p_39, struct S2 * p_556)
{ /* block id: 73 */
    int32_t **l_159 = (void*)0;
    int32_t *l_161 = &p_556->g_87[5][2][0];
    int32_t **l_160 = &l_161;
    (*l_160) = (void*)0;
    return &p_556->g_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_556->g_79 p_556->g_80 p_556->g_65 p_556->g_62 p_556->g_87
 * writes: p_556->g_87
 */
uint32_t  func_40(uint32_t * p_41, int32_t  p_42, struct S2 * p_556)
{ /* block id: 12 */
    VECTOR(uint64_t, 4) l_76 = (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x2A33634C778C533BL), 0x2A33634C778C533BL);
    VECTOR(int32_t, 2) l_81 = (VECTOR(int32_t, 2))(0x30D2C86DL, 0x770407C5L);
    VECTOR(uint32_t, 4) l_82 = (VECTOR(uint32_t, 4))(0x1AC514D6L, (VECTOR(uint32_t, 2))(0x1AC514D6L, 0xA8502006L), 0xA8502006L);
    uint32_t l_85 = 4UL;
    int32_t *l_86[1][4][10] = {{{&p_556->g_87[9][2][0],(void*)0,(void*)0,&p_556->g_87[9][2][0],(void*)0,(void*)0,&p_556->g_87[9][2][0],(void*)0,(void*)0,(void*)0},{&p_556->g_87[9][2][0],(void*)0,(void*)0,&p_556->g_87[9][2][0],(void*)0,(void*)0,&p_556->g_87[9][2][0],(void*)0,(void*)0,(void*)0},{&p_556->g_87[9][2][0],(void*)0,(void*)0,&p_556->g_87[9][2][0],(void*)0,(void*)0,&p_556->g_87[9][2][0],(void*)0,(void*)0,(void*)0},{&p_556->g_87[9][2][0],(void*)0,(void*)0,&p_556->g_87[9][2][0],(void*)0,(void*)0,&p_556->g_87[9][2][0],(void*)0,(void*)0,(void*)0}}};
    int i, j, k;
    p_556->g_87[9][2][0] &= (((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 8))(l_76.wyyzwyww)).lo, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))((p_42 , (GROUP_DIVERGE(1, 1) <= (safe_lshift_func_uint16_t_u_s((&p_556->g_62[4][5] == (void*)0), ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(p_556->g_79.s10625060)).hi, ((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0L, ((VECTOR(int16_t, 8))(7L, ((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(1L, (p_42 & p_42), 0x650A9706E185721BL, 0x43C0C88640E9B690L)))), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(p_556->g_80.s61)).yyxxxxxyyxyyyxxx)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 4))(l_81.yxxy)), ((VECTOR(uint32_t, 16))(l_82.wxwxyxwyxwywyxzw)).sa37a))), (((0x1A62DAC3L >= (safe_rshift_func_uint16_t_u_s(65534UL, 15))) , (((l_81.y < ((((p_556->g_65.w >= 0L) >= l_82.y) == 0xCE55470A06C62CF0L) < l_82.x)) || l_81.y) != l_82.w)) == p_556->g_65.w), p_556->g_62[3][5], 0x338E40FFFF0E5992L, 0x28A4BD3C15F2FB4DL)).s15, ((VECTOR(int64_t, 2))(0x342EBA3859457360L))))).xxxyyyyy, ((VECTOR(int64_t, 8))(0x498C3E2E3E2A50B6L))))))), ((VECTOR(int64_t, 8))(0x34CEF870AB71361DL))))), ((VECTOR(int64_t, 8))(0x361C4DE7E0673044L)), ((VECTOR(int64_t, 8))((-6L)))))), ((VECTOR(int64_t, 8))((-7L)))))).s0043272357240574, ((VECTOR(int64_t, 16))((-4L)))))).hi, ((VECTOR(int64_t, 8))(0x5476A2755E220C4EL))))), 0x350BCEF862069947L, ((VECTOR(int64_t, 2))(0x3F6EB6F9E293F4BBL)), ((VECTOR(int64_t, 2))(0x1260E86605BB6F06L)), 1L, 0x59B7243D40911440L, 0x11C87380C2164845L)).s00a6)).wyzyxywxxzxzxwxw, ((VECTOR(int64_t, 16))((-8L)))))).s98, ((VECTOR(int64_t, 2))(0x20A5A07D0373D2EFL))))), 0x6352C4D3C6A4C7F9L, (-1L))), ((VECTOR(int64_t, 4))(0x380B9C827B285FCFL))))).even, ((VECTOR(int64_t, 2))(0L))))), (-5L), 0x4B234A561BD86D4AL)), 0x5BF62E6A661FA26FL, ((VECTOR(int64_t, 4))((-10L))), (-3L), (-10L), 0x743AC61AB63E390BL)).s5 ^ p_42) ^ l_82.z), ((VECTOR(int16_t, 2))((-1L))), (-1L), l_76.z, (-2L), 0L)), p_42, p_42, l_81.y, 5L, ((VECTOR(int16_t, 2))(0L)), 0x4F29L)).s79)).yyyyxxxy, ((VECTOR(int16_t, 8))(0x42E7L))))).odd))).z)))), p_42, ((VECTOR(uint64_t, 2))(0xC3ECA65C328A76B0L)), 0x88D2697764D01240L, ((VECTOR(uint64_t, 8))(18446744073709551614UL)), 1UL, 18446744073709551613UL, 0x3EA340A379BBF3D3L)).s04)), 18446744073709551614UL, 0x2FEE76F7154ECD3AL)))).zwzzzyzzywwxxzxx, ((VECTOR(uint64_t, 16))(0xB39B42ED1920081CL))))).odd, ((VECTOR(uint64_t, 8))(0x78AC6A97375CE82FL))))))), ((VECTOR(uint64_t, 4))(0UL)), 0xA62EB872B59225F1L, l_85, 0x93A13EA481B1F863L, 0xBB04AF86A2F89F94L)).s1f)).yyyxyxyx)).even))).w , p_42);
    if ((atomic_inc(&p_556->g_atomic_input[77 * get_linear_group_id() + 45]) == 1))
    { /* block id: 15 */
        int64_t l_88 = 0x151E35FF2B42947BL;
        int32_t l_89 = 0x796E21E6L;
        uint8_t l_153[3][6] = {{0x96L,253UL,0xABL,253UL,0x96L,0x96L},{0x96L,253UL,0xABL,253UL,0x96L,0x96L},{0x96L,253UL,0xABL,253UL,0x96L,0x96L}};
        uint8_t l_154 = 1UL;
        uint32_t l_155 = 2UL;
        int64_t l_156 = 0L;
        int8_t l_157 = (-4L);
        int32_t l_158 = 1L;
        int i, j;
        if ((l_89 = ((VECTOR(int32_t, 4))(0x2FDC62DBL, l_88, 0x055D8751L, 8L)).z))
        { /* block id: 17 */
            int32_t l_90 = 0x6E4F3F74L;
            for (l_90 = 22; (l_90 <= (-12)); l_90 = safe_sub_func_uint16_t_u_u(l_90, 3))
            { /* block id: 20 */
                int32_t l_95 = 0x741B6539L;
                int32_t *l_94[10][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t **l_93 = &l_94[2][3];
                int32_t l_96 = (-8L);
                union U1 l_139 = {4294967287UL};
                int32_t *l_140 = &l_96;
                int32_t *l_141 = &l_95;
                int i, j;
                l_93 = (void*)0;
                if (l_96)
                { /* block id: 22 */
                    uint64_t l_97[6] = {18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL};
                    uint32_t l_98 = 4294967293UL;
                    uint8_t l_99 = 0x7CL;
                    uint8_t l_100 = 0UL;
                    int i;
                    l_100 |= (l_99 = (l_98 = l_97[5]));
                }
                else
                { /* block id: 26 */
                    uint16_t l_101 = 0xE833L;
                    uint32_t l_119 = 1UL;
                    int64_t l_120[10][8];
                    union U0 l_121 = {248UL};/* VOLATILE GLOBAL l_121 */
                    int16_t l_122 = (-1L);
                    int64_t l_123 = 0x57FEED6841EEF570L;
                    int i, j;
                    for (i = 0; i < 10; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_120[i][j] = 0x7E41DE62A7540F12L;
                    }
                    ++l_101;
                    for (l_101 = 25; (l_101 != 52); l_101 = safe_add_func_int8_t_s_s(l_101, 8))
                    { /* block id: 30 */
                        VECTOR(int8_t, 8) l_106 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x4FL), 0x4FL), 0x4FL, 1L, 0x4FL);
                        uint16_t l_107 = 0UL;
                        VECTOR(int32_t, 2) l_108 = (VECTOR(int32_t, 2))(0L, 0L);
                        union U1 l_109 = {4294967290UL};
                        union U1 l_110 = {4294967295UL};
                        VECTOR(int32_t, 2) l_111 = (VECTOR(int32_t, 2))(2L, 0L);
                        VECTOR(int32_t, 2) l_112 = (VECTOR(int32_t, 2))(0x17866B3FL, (-7L));
                        VECTOR(int32_t, 16) l_113 = (VECTOR(int32_t, 16))(0x33846322L, (VECTOR(int32_t, 4))(0x33846322L, (VECTOR(int32_t, 2))(0x33846322L, 1L), 1L), 1L, 0x33846322L, 1L, (VECTOR(int32_t, 2))(0x33846322L, 1L), (VECTOR(int32_t, 2))(0x33846322L, 1L), 0x33846322L, 1L, 0x33846322L, 1L);
                        uint64_t l_114 = 0x3E29B3848CAB2400L;
                        uint8_t l_115 = 1UL;
                        VECTOR(int32_t, 4) l_116 = (VECTOR(int32_t, 4))(0x52053445L, (VECTOR(int32_t, 2))(0x52053445L, 9L), 9L);
                        VECTOR(int32_t, 16) l_117 = (VECTOR(int32_t, 16))(0x22D332A9L, (VECTOR(int32_t, 4))(0x22D332A9L, (VECTOR(int32_t, 2))(0x22D332A9L, 0x5975CF2BL), 0x5975CF2BL), 0x5975CF2BL, 0x22D332A9L, 0x5975CF2BL, (VECTOR(int32_t, 2))(0x22D332A9L, 0x5975CF2BL), (VECTOR(int32_t, 2))(0x22D332A9L, 0x5975CF2BL), 0x22D332A9L, 0x5975CF2BL, 0x22D332A9L, 0x5975CF2BL);
                        VECTOR(int32_t, 16) l_118 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5699354FL), 0x5699354FL), 0x5699354FL, 0L, 0x5699354FL, (VECTOR(int32_t, 2))(0L, 0x5699354FL), (VECTOR(int32_t, 2))(0L, 0x5699354FL), 0L, 0x5699354FL, 0L, 0x5699354FL);
                        int i;
                        l_107 &= (l_106.s7 = (-9L));
                        l_114 = (l_111.y = (((VECTOR(int32_t, 2))(l_108.xx)).odd , ((l_109 = (l_110 = l_109)) , ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_111.xxyxxxyyxyyxyxxy)).sf9)).yyyxyyxxyyyxxxxx, ((VECTOR(int32_t, 4))(l_112.xyyy)).xwxyzwyxxxzxywwx, ((VECTOR(int32_t, 8))(0x7EE8902DL, 0x65A55B72L, 3L, ((VECTOR(int32_t, 4))(l_113.saa76)), 0x7FDA6462L)).s4165130211773775))).s6)));
                        l_111.y ^= (l_112.y = l_115);
                        l_111.x |= ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(l_116.xzwyxxxyyyxzxzzz)).lo, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(l_117.s2128a055)), ((VECTOR(int32_t, 16))(l_118.sbc6739b9925d8bb3)).lo)))))).s1;
                    }
                    l_123 ^= (l_119 , ((l_120[0][7] , l_121) , l_122));
                    for (l_120[4][7] = 18; (l_120[4][7] != (-6)); l_120[4][7] = safe_sub_func_uint16_t_u_u(l_120[4][7], 1))
                    { /* block id: 44 */
                        uint16_t **l_126 = (void*)0;
                        uint16_t *l_128 = (void*)0;
                        uint16_t **l_127[2][4] = {{(void*)0,&l_128,(void*)0,(void*)0},{(void*)0,&l_128,(void*)0,(void*)0}};
                        uint8_t l_129 = 0xEEL;
                        uint32_t l_130 = 0x32C18788L;
                        int32_t l_132 = 0x2429CABEL;
                        int32_t *l_131[5];
                        int32_t *l_133 = (void*)0;
                        int8_t l_136 = 0x44L;
                        int8_t *l_135 = &l_136;
                        int8_t **l_134 = &l_135;
                        int8_t **l_137 = (void*)0;
                        uint32_t l_138 = 0UL;
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_131[i] = &l_132;
                        l_127[1][2] = (l_126 = l_126);
                        l_133 = (l_131[0] = ((l_130 = l_129) , l_131[2]));
                        l_137 = l_134;
                        (*l_133) = l_138;
                    }
                }
                l_141 = (l_139 , l_140);
            }
        }
        else
        { /* block id: 56 */
            VECTOR(uint64_t, 16) l_142 = (VECTOR(uint64_t, 16))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x092B1045D44334F4L), 0x092B1045D44334F4L), 0x092B1045D44334F4L, 18446744073709551614UL, 0x092B1045D44334F4L, (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x092B1045D44334F4L), (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x092B1045D44334F4L), 18446744073709551614UL, 0x092B1045D44334F4L, 18446744073709551614UL, 0x092B1045D44334F4L);
            uint16_t l_143[6][1] = {{0xD2A3L},{0xD2A3L},{0xD2A3L},{0xD2A3L},{0xD2A3L},{0xD2A3L}};
            uint64_t l_144 = 0x5A4DA50BC8C3AFF2L;
            int i, j;
            l_144 ^= (((VECTOR(uint64_t, 16))(l_142.s04dfaa35959f2637)).s2 , l_143[4][0]);
            for (l_142.s1 = 9; (l_142.s1 >= 52); ++l_142.s1)
            { /* block id: 60 */
                uint32_t l_147 = 0x3B515C9FL;
                int32_t l_151 = 0x51FF961AL;
                int32_t *l_150 = &l_151;
                int32_t *l_152 = (void*)0;
                --l_147;
                l_152 = l_150;
            }
        }
        l_154 = l_153[1][4];
        l_157 = (l_156 = l_155);
        l_158 = 0x4BCA9DBBL;
        unsigned int result = 0;
        result += l_88;
        result += l_89;
        int l_153_i0, l_153_i1;
        for (l_153_i0 = 0; l_153_i0 < 3; l_153_i0++) {
            for (l_153_i1 = 0; l_153_i1 < 6; l_153_i1++) {
                result += l_153[l_153_i0][l_153_i1];
            }
        }
        result += l_154;
        result += l_155;
        result += l_156;
        result += l_157;
        result += l_158;
        atomic_add(&p_556->g_special_values[77 * get_linear_group_id() + 45], result);
    }
    else
    { /* block id: 69 */
        (1 + 1);
    }
    return p_42;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[16];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 16; i++)
            l_comm_values[i] = 1;
    struct S2 c_557;
    struct S2* p_556 = &c_557;
    struct S2 c_558 = {
        0xDAL, // p_556->g_18
        4294967290UL, // p_556->g_20
        0x28405CEFL, // p_556->g_21
        {0x40L}, // p_556->g_46
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xA23AL), 0xA23AL), // p_556->g_49
        {{1L,0x4EL,0x4EL,1L,0x62L,0x72L,0x0DL,1L,0x79L},{1L,0x4EL,0x4EL,1L,0x62L,0x72L,0x0DL,1L,0x79L},{1L,0x4EL,0x4EL,1L,0x62L,0x72L,0x0DL,1L,0x79L},{1L,0x4EL,0x4EL,1L,0x62L,0x72L,0x0DL,1L,0x79L},{1L,0x4EL,0x4EL,1L,0x62L,0x72L,0x0DL,1L,0x79L},{1L,0x4EL,0x4EL,1L,0x62L,0x72L,0x0DL,1L,0x79L},{1L,0x4EL,0x4EL,1L,0x62L,0x72L,0x0DL,1L,0x79L}}, // p_556->g_62
        (void*)0, // p_556->g_64
        (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x5CL), 0x5CL), // p_556->g_65
        (VECTOR(int8_t, 16))(0x2CL, (VECTOR(int8_t, 4))(0x2CL, (VECTOR(int8_t, 2))(0x2CL, 0L), 0L), 0L, 0x2CL, 0L, (VECTOR(int8_t, 2))(0x2CL, 0L), (VECTOR(int8_t, 2))(0x2CL, 0L), 0x2CL, 0L, 0x2CL, 0L), // p_556->g_67
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 2L), 2L), 2L, 1L, 2L), // p_556->g_79
        (VECTOR(int64_t, 8))(0x75ABE080F98811FBL, (VECTOR(int64_t, 4))(0x75ABE080F98811FBL, (VECTOR(int64_t, 2))(0x75ABE080F98811FBL, 0x500C2479274D830BL), 0x500C2479274D830BL), 0x500C2479274D830BL, 0x75ABE080F98811FBL, 0x500C2479274D830BL), // p_556->g_80
        {{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}}}, // p_556->g_87
        {&p_556->g_87[9][2][0],&p_556->g_87[9][2][0]}, // p_556->g_167
        1L, // p_556->g_172
        {{&p_556->g_172,&p_556->g_172},{&p_556->g_172,&p_556->g_172},{&p_556->g_172,&p_556->g_172},{&p_556->g_172,&p_556->g_172},{&p_556->g_172,&p_556->g_172},{&p_556->g_172,&p_556->g_172},{&p_556->g_172,&p_556->g_172},{&p_556->g_172,&p_556->g_172}}, // p_556->g_171
        {{{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}}},{{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}}},{{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}}},{{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}}},{{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}}},{{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}}},{{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}}},{{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}}},{{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}}},{{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}},{{0x49L},{5UL}}}}, // p_556->g_190
        {255UL}, // p_556->g_209
        (VECTOR(uint8_t, 2))(252UL, 0xDCL), // p_556->g_212
        {7UL}, // p_556->g_227
        (VECTOR(int16_t, 4))(0x2A96L, (VECTOR(int16_t, 2))(0x2A96L, 0x4371L), 0x4371L), // p_556->g_238
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x4BE2L), 0x4BE2L), // p_556->g_250
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x64E6D5AFL), 0x64E6D5AFL), // p_556->g_258
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x39A41F48L), 0x39A41F48L), 0x39A41F48L, (-1L), 0x39A41F48L), // p_556->g_260
        (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-8L)), (-8L)), (-8L), 1L, (-8L)), // p_556->g_269
        {255UL}, // p_556->g_272
        (VECTOR(uint32_t, 8))(0x8BA12C1CL, (VECTOR(uint32_t, 4))(0x8BA12C1CL, (VECTOR(uint32_t, 2))(0x8BA12C1CL, 0xCD2D9167L), 0xCD2D9167L), 0xCD2D9167L, 0x8BA12C1CL, 0xCD2D9167L), // p_556->g_274
        (VECTOR(int8_t, 4))(0x12L, (VECTOR(int8_t, 2))(0x12L, 0x2BL), 0x2BL), // p_556->g_280
        (VECTOR(int32_t, 2))(1L, 1L), // p_556->g_293
        {0x81L}, // p_556->g_294
        &p_556->g_87[5][0][1], // p_556->g_296
        (void*)0, // p_556->g_340
        &p_556->g_227.f0, // p_556->g_392
        &p_556->g_392, // p_556->g_391
        {{{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0}},{{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0}},{{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0}},{{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0}},{{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0}},{{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0}},{{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0}},{{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0}},{{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0}},{{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0},{&p_556->g_391,&p_556->g_391,(void*)0}}}, // p_556->g_390
        {1UL,1UL,1UL}, // p_556->g_422
        (VECTOR(int8_t, 2))(0x5AL, 0x7FL), // p_556->g_448
        (VECTOR(int16_t, 8))(0x3D1AL, (VECTOR(int16_t, 4))(0x3D1AL, (VECTOR(int16_t, 2))(0x3D1AL, 1L), 1L), 1L, 0x3D1AL, 1L), // p_556->g_452
        (VECTOR(int16_t, 2))(0x067FL, 0x7A63L), // p_556->g_455
        &p_556->g_190[0][9][0], // p_556->g_471
        &p_556->g_471, // p_556->g_470
        &p_556->g_171[4][0], // p_556->g_478
        3UL, // p_556->g_522
        &p_556->g_522, // p_556->g_521
        {{&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521},{&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521},{&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521},{&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521},{&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521},{&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521},{&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521},{&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521},{&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521,&p_556->g_521}}, // p_556->g_520
        (VECTOR(int16_t, 2))(0x77BFL, 1L), // p_556->g_537
        0, // p_556->v_collective
        sequence_input[get_global_id(0)], // p_556->global_0_offset
        sequence_input[get_global_id(1)], // p_556->global_1_offset
        sequence_input[get_global_id(2)], // p_556->global_2_offset
        sequence_input[get_local_id(0)], // p_556->local_0_offset
        sequence_input[get_local_id(1)], // p_556->local_1_offset
        sequence_input[get_local_id(2)], // p_556->local_2_offset
        sequence_input[get_group_id(0)], // p_556->group_0_offset
        sequence_input[get_group_id(1)], // p_556->group_1_offset
        sequence_input[get_group_id(2)], // p_556->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 16)), permutations[0][get_linear_local_id()])), // p_556->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_557 = c_558;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_556);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_556->g_18, "p_556->g_18", print_hash_value);
    transparent_crc(p_556->g_20, "p_556->g_20", print_hash_value);
    transparent_crc(p_556->g_21, "p_556->g_21", print_hash_value);
    transparent_crc(p_556->g_49.x, "p_556->g_49.x", print_hash_value);
    transparent_crc(p_556->g_49.y, "p_556->g_49.y", print_hash_value);
    transparent_crc(p_556->g_49.z, "p_556->g_49.z", print_hash_value);
    transparent_crc(p_556->g_49.w, "p_556->g_49.w", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_556->g_62[i][j], "p_556->g_62[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_556->g_65.x, "p_556->g_65.x", print_hash_value);
    transparent_crc(p_556->g_65.y, "p_556->g_65.y", print_hash_value);
    transparent_crc(p_556->g_65.z, "p_556->g_65.z", print_hash_value);
    transparent_crc(p_556->g_65.w, "p_556->g_65.w", print_hash_value);
    transparent_crc(p_556->g_67.s0, "p_556->g_67.s0", print_hash_value);
    transparent_crc(p_556->g_67.s1, "p_556->g_67.s1", print_hash_value);
    transparent_crc(p_556->g_67.s2, "p_556->g_67.s2", print_hash_value);
    transparent_crc(p_556->g_67.s3, "p_556->g_67.s3", print_hash_value);
    transparent_crc(p_556->g_67.s4, "p_556->g_67.s4", print_hash_value);
    transparent_crc(p_556->g_67.s5, "p_556->g_67.s5", print_hash_value);
    transparent_crc(p_556->g_67.s6, "p_556->g_67.s6", print_hash_value);
    transparent_crc(p_556->g_67.s7, "p_556->g_67.s7", print_hash_value);
    transparent_crc(p_556->g_67.s8, "p_556->g_67.s8", print_hash_value);
    transparent_crc(p_556->g_67.s9, "p_556->g_67.s9", print_hash_value);
    transparent_crc(p_556->g_67.sa, "p_556->g_67.sa", print_hash_value);
    transparent_crc(p_556->g_67.sb, "p_556->g_67.sb", print_hash_value);
    transparent_crc(p_556->g_67.sc, "p_556->g_67.sc", print_hash_value);
    transparent_crc(p_556->g_67.sd, "p_556->g_67.sd", print_hash_value);
    transparent_crc(p_556->g_67.se, "p_556->g_67.se", print_hash_value);
    transparent_crc(p_556->g_67.sf, "p_556->g_67.sf", print_hash_value);
    transparent_crc(p_556->g_79.s0, "p_556->g_79.s0", print_hash_value);
    transparent_crc(p_556->g_79.s1, "p_556->g_79.s1", print_hash_value);
    transparent_crc(p_556->g_79.s2, "p_556->g_79.s2", print_hash_value);
    transparent_crc(p_556->g_79.s3, "p_556->g_79.s3", print_hash_value);
    transparent_crc(p_556->g_79.s4, "p_556->g_79.s4", print_hash_value);
    transparent_crc(p_556->g_79.s5, "p_556->g_79.s5", print_hash_value);
    transparent_crc(p_556->g_79.s6, "p_556->g_79.s6", print_hash_value);
    transparent_crc(p_556->g_79.s7, "p_556->g_79.s7", print_hash_value);
    transparent_crc(p_556->g_80.s0, "p_556->g_80.s0", print_hash_value);
    transparent_crc(p_556->g_80.s1, "p_556->g_80.s1", print_hash_value);
    transparent_crc(p_556->g_80.s2, "p_556->g_80.s2", print_hash_value);
    transparent_crc(p_556->g_80.s3, "p_556->g_80.s3", print_hash_value);
    transparent_crc(p_556->g_80.s4, "p_556->g_80.s4", print_hash_value);
    transparent_crc(p_556->g_80.s5, "p_556->g_80.s5", print_hash_value);
    transparent_crc(p_556->g_80.s6, "p_556->g_80.s6", print_hash_value);
    transparent_crc(p_556->g_80.s7, "p_556->g_80.s7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_556->g_87[i][j][k], "p_556->g_87[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_556->g_172, "p_556->g_172", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_556->g_190[i][j][k].f0, "p_556->g_190[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_556->g_209.f0, "p_556->g_209.f0", print_hash_value);
    transparent_crc(p_556->g_212.x, "p_556->g_212.x", print_hash_value);
    transparent_crc(p_556->g_212.y, "p_556->g_212.y", print_hash_value);
    transparent_crc(p_556->g_227.f0, "p_556->g_227.f0", print_hash_value);
    transparent_crc(p_556->g_238.x, "p_556->g_238.x", print_hash_value);
    transparent_crc(p_556->g_238.y, "p_556->g_238.y", print_hash_value);
    transparent_crc(p_556->g_238.z, "p_556->g_238.z", print_hash_value);
    transparent_crc(p_556->g_238.w, "p_556->g_238.w", print_hash_value);
    transparent_crc(p_556->g_250.x, "p_556->g_250.x", print_hash_value);
    transparent_crc(p_556->g_250.y, "p_556->g_250.y", print_hash_value);
    transparent_crc(p_556->g_250.z, "p_556->g_250.z", print_hash_value);
    transparent_crc(p_556->g_250.w, "p_556->g_250.w", print_hash_value);
    transparent_crc(p_556->g_258.x, "p_556->g_258.x", print_hash_value);
    transparent_crc(p_556->g_258.y, "p_556->g_258.y", print_hash_value);
    transparent_crc(p_556->g_258.z, "p_556->g_258.z", print_hash_value);
    transparent_crc(p_556->g_258.w, "p_556->g_258.w", print_hash_value);
    transparent_crc(p_556->g_260.s0, "p_556->g_260.s0", print_hash_value);
    transparent_crc(p_556->g_260.s1, "p_556->g_260.s1", print_hash_value);
    transparent_crc(p_556->g_260.s2, "p_556->g_260.s2", print_hash_value);
    transparent_crc(p_556->g_260.s3, "p_556->g_260.s3", print_hash_value);
    transparent_crc(p_556->g_260.s4, "p_556->g_260.s4", print_hash_value);
    transparent_crc(p_556->g_260.s5, "p_556->g_260.s5", print_hash_value);
    transparent_crc(p_556->g_260.s6, "p_556->g_260.s6", print_hash_value);
    transparent_crc(p_556->g_260.s7, "p_556->g_260.s7", print_hash_value);
    transparent_crc(p_556->g_269.s0, "p_556->g_269.s0", print_hash_value);
    transparent_crc(p_556->g_269.s1, "p_556->g_269.s1", print_hash_value);
    transparent_crc(p_556->g_269.s2, "p_556->g_269.s2", print_hash_value);
    transparent_crc(p_556->g_269.s3, "p_556->g_269.s3", print_hash_value);
    transparent_crc(p_556->g_269.s4, "p_556->g_269.s4", print_hash_value);
    transparent_crc(p_556->g_269.s5, "p_556->g_269.s5", print_hash_value);
    transparent_crc(p_556->g_269.s6, "p_556->g_269.s6", print_hash_value);
    transparent_crc(p_556->g_269.s7, "p_556->g_269.s7", print_hash_value);
    transparent_crc(p_556->g_272.f0, "p_556->g_272.f0", print_hash_value);
    transparent_crc(p_556->g_274.s0, "p_556->g_274.s0", print_hash_value);
    transparent_crc(p_556->g_274.s1, "p_556->g_274.s1", print_hash_value);
    transparent_crc(p_556->g_274.s2, "p_556->g_274.s2", print_hash_value);
    transparent_crc(p_556->g_274.s3, "p_556->g_274.s3", print_hash_value);
    transparent_crc(p_556->g_274.s4, "p_556->g_274.s4", print_hash_value);
    transparent_crc(p_556->g_274.s5, "p_556->g_274.s5", print_hash_value);
    transparent_crc(p_556->g_274.s6, "p_556->g_274.s6", print_hash_value);
    transparent_crc(p_556->g_274.s7, "p_556->g_274.s7", print_hash_value);
    transparent_crc(p_556->g_280.x, "p_556->g_280.x", print_hash_value);
    transparent_crc(p_556->g_280.y, "p_556->g_280.y", print_hash_value);
    transparent_crc(p_556->g_280.z, "p_556->g_280.z", print_hash_value);
    transparent_crc(p_556->g_280.w, "p_556->g_280.w", print_hash_value);
    transparent_crc(p_556->g_293.x, "p_556->g_293.x", print_hash_value);
    transparent_crc(p_556->g_293.y, "p_556->g_293.y", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_556->g_422[i], "p_556->g_422[i]", print_hash_value);

    }
    transparent_crc(p_556->g_448.x, "p_556->g_448.x", print_hash_value);
    transparent_crc(p_556->g_448.y, "p_556->g_448.y", print_hash_value);
    transparent_crc(p_556->g_452.s0, "p_556->g_452.s0", print_hash_value);
    transparent_crc(p_556->g_452.s1, "p_556->g_452.s1", print_hash_value);
    transparent_crc(p_556->g_452.s2, "p_556->g_452.s2", print_hash_value);
    transparent_crc(p_556->g_452.s3, "p_556->g_452.s3", print_hash_value);
    transparent_crc(p_556->g_452.s4, "p_556->g_452.s4", print_hash_value);
    transparent_crc(p_556->g_452.s5, "p_556->g_452.s5", print_hash_value);
    transparent_crc(p_556->g_452.s6, "p_556->g_452.s6", print_hash_value);
    transparent_crc(p_556->g_452.s7, "p_556->g_452.s7", print_hash_value);
    transparent_crc(p_556->g_455.x, "p_556->g_455.x", print_hash_value);
    transparent_crc(p_556->g_455.y, "p_556->g_455.y", print_hash_value);
    transparent_crc(p_556->g_522, "p_556->g_522", print_hash_value);
    transparent_crc(p_556->g_537.x, "p_556->g_537.x", print_hash_value);
    transparent_crc(p_556->g_537.y, "p_556->g_537.y", print_hash_value);
    transparent_crc(p_556->v_collective, "p_556->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 77; i++)
            transparent_crc(p_556->g_special_values[i + 77 * get_linear_group_id()], "p_556->g_special_values[i + 77 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_556->l_comm_values[get_linear_local_id()], "p_556->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_556->g_comm_values[get_linear_group_id() * 16 + get_linear_local_id()], "p_556->g_comm_values[get_linear_group_id() * 16 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
