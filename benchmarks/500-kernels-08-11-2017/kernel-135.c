// --atomics 11 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 13,71,3 -l 13,1,1
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

__constant uint32_t permutations[10][13] = {
{1,8,7,11,0,9,2,6,5,3,10,4,12}, // permutation 0
{1,3,5,4,12,9,10,6,8,11,2,0,7}, // permutation 1
{1,7,9,12,5,0,3,8,10,4,2,6,11}, // permutation 2
{9,5,11,1,10,2,4,0,8,6,3,12,7}, // permutation 3
{11,4,6,12,2,7,9,3,0,5,1,10,8}, // permutation 4
{6,0,12,4,10,11,5,3,9,1,2,8,7}, // permutation 5
{8,0,6,9,11,1,7,12,2,4,5,10,3}, // permutation 6
{8,0,10,4,6,9,12,3,5,1,2,11,7}, // permutation 7
{10,3,1,12,0,11,9,6,2,5,7,8,4}, // permutation 8
{12,8,9,11,7,0,10,6,3,4,2,5,1} // permutation 9
};

// Seed: 2649605652

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int16_t  f0;
   volatile uint8_t  f1;
   uint64_t  f2;
};

struct S1 {
   int64_t  f0;
   uint32_t  f1;
   volatile struct S0  f2;
   volatile uint16_t  f3;
   uint64_t  f4;
   volatile int32_t  f5;
   int64_t  f6;
   volatile uint32_t  f7;
   int32_t  f8;
   uint64_t  f9;
};

struct S2 {
   uint32_t  f0;
   int64_t  f1;
   volatile uint32_t  f2;
   volatile uint32_t  f3;
   volatile int16_t  f4;
   volatile uint32_t  f5;
   struct S1  f6;
   uint16_t  f7;
};

union U3 {
   int8_t * f0;
   struct S2  f1;
   struct S1  f2;
};

union U4 {
   uint64_t  f0;
   struct S0  f1;
   uint16_t  f2;
   volatile int8_t  f3;
   int16_t  f4;
};

union U5 {
   struct S0  f0;
   int32_t  f1;
   uint32_t  f2;
   struct S0  f3;
};

union U6 {
   uint32_t  f0;
};

struct S7 {
    int8_t g_7;
    int32_t g_9;
    int16_t g_11;
    union U3 g_30;
    volatile union U3 g_50;
    volatile union U3 *g_49;
    volatile union U3 **g_48[9];
    volatile union U6 g_64;
    int16_t g_66;
    uint32_t g_69;
    volatile struct S2 g_73;
    volatile struct S2 * volatile g_74;
    volatile union U4 g_349;
    int32_t *g_352;
    int8_t *g_363;
    int8_t **g_362;
    union U5 g_365[3];
    struct S2 g_373;
    uint8_t g_375;
    union U3 g_378;
    uint32_t *g_383;
    union U3 *g_385;
    volatile struct S1 g_386;
    union U6 g_390;
    int32_t g_391;
    volatile uint32_t g_397;
    volatile int64_t g_401;
    union U6 *g_411;
    VECTOR(uint32_t, 16) g_414;
    VECTOR(uint32_t, 2) g_418;
    int32_t g_442;
    volatile union U3 g_487;
    int32_t g_497;
    int8_t g_499;
    union U6 *g_507;
    volatile union U5 g_508;
    int32_t ** volatile g_512;
    union U6 ** volatile g_520;
    uint64_t g_532;
    int32_t *g_553[8];
    struct S2 *g_555;
    union U6 ** volatile g_582;
    union U6 ** volatile g_583;
    VECTOR(int32_t, 8) g_595;
    VECTOR(int8_t, 4) g_627;
    VECTOR(uint8_t, 2) g_634;
    uint16_t g_638;
    VECTOR(int8_t, 2) g_649;
    VECTOR(uint8_t, 4) g_650;
    VECTOR(uint8_t, 16) g_655;
    VECTOR(uint8_t, 2) g_656;
    volatile VECTOR(int64_t, 8) g_659;
    volatile VECTOR(int64_t, 8) g_660;
    volatile int64_t *g_663;
    VECTOR(int16_t, 4) g_670;
    union U5 g_673[1][2][9];
    VECTOR(int8_t, 16) g_692;
    volatile struct S2 g_696;
    union U3 g_705;
    int32_t *g_709;
    int32_t g_723[5];
    VECTOR(uint8_t, 16) g_726;
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
uint64_t  func_1(struct S7 * p_727);
uint8_t  func_4(int32_t  p_5, struct S7 * p_727);
int8_t * func_12(int32_t * p_13, struct S7 * p_727);
int8_t  func_14(int8_t  p_15, uint32_t  p_16, struct S7 * p_727);
uint8_t  func_23(int8_t * p_24, struct S7 * p_727);
struct S0  func_31(int64_t  p_32, int8_t  p_33, int8_t * p_34, uint32_t  p_35, uint64_t  p_36, struct S7 * p_727);
int16_t  func_40(int32_t  p_41, uint32_t  p_42, union U3 * p_43, int32_t * p_44, struct S7 * p_727);
union U3 * func_51(int32_t * p_52, struct S7 * p_727);
int32_t * func_53(uint32_t  p_54, union U3 * p_55, int8_t * p_56, int32_t * p_57, uint64_t  p_58, struct S7 * p_727);
union U3 * func_59(uint64_t  p_60, int16_t * p_61, int8_t * p_62, uint32_t  p_63, struct S7 * p_727);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_727->l_comm_values p_727->g_comm_values p_727->g_11 p_727->g_48 p_727->g_64 p_727->g_64.f0 p_727->g_73 p_727->g_74 p_727->g_50.f1.f4 p_727->g_349 p_727->g_352 p_727->g_362 p_727->g_365 p_727->g_373.f7 p_727->g_373.f6.f9 p_727->g_373.f6.f0 p_727->g_9 p_727->g_386 p_727->g_363 p_727->g_7 p_727->g_373.f6.f8 p_727->g_375 p_727->g_373 p_727->g_397 p_727->g_442 p_727->g_391 p_727->g_487 p_727->g_414 p_727->g_497 p_727->g_508 p_727->g_512 p_727->g_508.f0.f1 p_727->g_520 p_727->g_532 p_727->g_583 p_727->g_595 p_727->g_390.f0 p_727->g_66 p_727->g_627 p_727->g_418 p_727->g_634 p_727->g_499 p_727->g_553 p_727->g_638 p_727->g_508.f0 p_727->g_723 p_727->g_726 p_727->g_696.f6.f7
 * writes: p_727->g_9 p_727->g_11 p_727->g_66 p_727->g_50.f1 p_727->g_352 p_727->g_362 p_727->g_375 p_727->g_30.f2.f6 p_727->g_373.f1 p_727->g_383 p_727->g_385 p_727->g_397 p_727->g_7 p_727->g_373.f6.f8 p_727->g_411 p_727->g_373.f7 p_727->g_442 p_727->g_378.f2.f8 p_727->g_391 p_727->g_507 p_727->g_365.f3 p_727->g_30.f2.f8 p_727->g_553 p_727->g_555 p_727->g_373.f6.f1 p_727->g_30.f1.f6.f8 p_727->g_499 p_727->g_378.f1.f6.f8 p_727->g_638 p_727->g_373.f6.f4
 */
uint64_t  func_1(struct S7 * p_727)
{ /* block id: 4 */
    int8_t *l_6 = &p_727->g_7;
    struct S2 *l_554 = (void*)0;
    int32_t l_557 = 0x6442C9BAL;
    int32_t l_560 = 0x35B5C50FL;
    int32_t l_561 = (-4L);
    int32_t l_562[2][6][8] = {{{0x5F99AD08L,8L,8L,0x5F99AD08L,0x5F99AD08L,8L,8L,0x5F99AD08L},{0x5F99AD08L,8L,8L,0x5F99AD08L,0x5F99AD08L,8L,8L,0x5F99AD08L},{0x5F99AD08L,8L,8L,0x5F99AD08L,0x5F99AD08L,8L,8L,0x5F99AD08L},{0x5F99AD08L,8L,8L,0x5F99AD08L,0x5F99AD08L,8L,8L,0x5F99AD08L},{0x5F99AD08L,8L,8L,0x5F99AD08L,0x5F99AD08L,8L,8L,0x5F99AD08L},{0x5F99AD08L,8L,8L,0x5F99AD08L,0x5F99AD08L,8L,8L,0x5F99AD08L}},{{0x5F99AD08L,8L,8L,0x5F99AD08L,0x5F99AD08L,8L,8L,0x5F99AD08L},{0x5F99AD08L,8L,8L,0x5F99AD08L,0x5F99AD08L,8L,8L,0x5F99AD08L},{0x5F99AD08L,8L,8L,0x5F99AD08L,0x5F99AD08L,8L,8L,0x5F99AD08L},{0x5F99AD08L,8L,8L,0x5F99AD08L,0x5F99AD08L,8L,8L,0x5F99AD08L},{0x5F99AD08L,8L,8L,0x5F99AD08L,0x5F99AD08L,8L,8L,0x5F99AD08L},{0x5F99AD08L,8L,8L,0x5F99AD08L,0x5F99AD08L,8L,8L,0x5F99AD08L}}};
    int64_t l_565 = (-5L);
    int32_t **l_623 = &p_727->g_553[7];
    union U3 **l_624 = &p_727->g_385;
    uint32_t l_676 = 1UL;
    int i, j, k;
    if (((safe_sub_func_int32_t_s_s(p_727->l_comm_values[(safe_mod_func_uint32_t_u_u(p_727->tid, 13))], p_727->g_comm_values[p_727->tid])) == func_4((l_6 != &p_727->g_7), p_727)))
    { /* block id: 331 */
        int32_t *l_551 = &p_727->g_9;
        int32_t **l_552 = &p_727->g_352;
        p_727->g_553[0] = ((~GROUP_DIVERGE(2, 1)) , ((*l_552) = l_551));
        p_727->g_555 = l_554;
    }
    else
    { /* block id: 335 */
        int32_t *l_556 = (void*)0;
        int32_t *l_558 = &l_557;
        int32_t *l_559[9];
        int16_t l_563 = (-1L);
        int32_t l_564 = 0x68B169BEL;
        uint64_t l_566 = 0x8A74E7DC10DD0C11L;
        int i;
        for (i = 0; i < 9; i++)
            l_559[i] = &p_727->g_391;
        ++l_566;
        for (p_727->g_11 = 0; (p_727->g_11 <= (-22)); p_727->g_11 = safe_sub_func_uint32_t_u_u(p_727->g_11, 9))
        { /* block id: 339 */
            uint32_t l_574 = 1UL;
            union U6 *l_581 = &p_727->g_390;
            int32_t l_637[5][5][6] = {{{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L}},{{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L}},{{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L}},{{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L}},{{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L},{0x01EFA467L,1L,1L,0L,0x4588F05AL,0x01EFA467L}}};
            int i, j, k;
            for (l_557 = 0; (l_557 < (-6)); l_557 = safe_sub_func_uint32_t_u_u(l_557, 4))
            { /* block id: 342 */
                int16_t l_573 = 0x0C5AL;
                l_561 ^= (-6L);
                --l_574;
            }
            for (p_727->g_373.f6.f8 = 29; (p_727->g_373.f6.f8 > (-14)); p_727->g_373.f6.f8--)
            { /* block id: 348 */
                uint64_t l_590 = 0x4D8BF19EBFEB5769L;
                uint32_t *l_609 = (void*)0;
                uint32_t *l_610 = &p_727->g_69;
                uint32_t *l_613 = &p_727->g_373.f6.f1;
                int32_t l_619 = 9L;
                uint64_t *l_620[8] = {&p_727->g_378.f1.f6.f9,&p_727->g_378.f1.f6.f9,&p_727->g_378.f1.f6.f9,&p_727->g_378.f1.f6.f9,&p_727->g_378.f1.f6.f9,&p_727->g_378.f1.f6.f9,&p_727->g_378.f1.f6.f9,&p_727->g_378.f1.f6.f9};
                int32_t **l_622 = &l_559[3];
                int32_t ***l_621 = &l_622;
                int8_t *l_635 = (void*)0;
                int8_t *l_636 = &p_727->g_499;
                int i;
                for (p_727->g_373.f6.f1 = 0; (p_727->g_373.f6.f1 <= 35); p_727->g_373.f6.f1++)
                { /* block id: 351 */
                    (*p_727->g_352) = 0x2C2B2F38L;
                    (*p_727->g_583) = l_581;
                    (*p_727->g_352) = (safe_mod_func_int64_t_s_s((safe_div_func_int64_t_s_s((((-6L) | ((safe_mul_func_int16_t_s_s((((l_590 = p_727->g_64.f0) ^ (!0x0F3BC4E1L)) , (safe_sub_func_int64_t_s_s((safe_div_func_uint64_t_u_u((p_727->g_349 , ((*p_727->g_363) & (p_727->g_386.f2.f1 | ((VECTOR(int32_t, 2))(p_727->g_595.s32)).lo))), (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(l_590, ((safe_unary_minus_func_int32_t_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_574 && (safe_rshift_func_uint16_t_u_s(p_727->g_390.f0, 2))), 2)), l_590)))) != p_727->g_66))), p_727->g_comm_values[p_727->tid])))), p_727->g_373.f0))), p_727->g_11)) == (**p_727->g_362))) || p_727->g_73.f7), 0xF731D3C426650D44L)), 18446744073709551609UL));
                }
                (*p_727->g_512) = (*p_727->g_512);
                (*l_558) = (l_637[0][0][5] |= (p_727->g_373.f6.f7 >= ((*l_636) &= (safe_mod_func_uint8_t_u_u(0xB8L, ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))((*p_727->g_363), 0x3BL, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(p_727->g_627.xyyyxzxz)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))((((safe_mul_func_uint8_t_u_u(((***l_621) != (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_727->g_373.f1, p_727->g_418.y)), 7))), ((VECTOR(uint8_t, 4))(p_727->g_634.yyxx)).w)) <= (-5L)) , (**l_622)), 0x77L, (-2L), (**p_727->g_362), ((VECTOR(int8_t, 2))(0x1BL)), 0x10L, 0x4DL)).even, ((VECTOR(int8_t, 4))(1L)), ((VECTOR(int8_t, 4))(0L))))).lo)).xxxyxxxy, ((VECTOR(int8_t, 8))(0x37L))))).even)).zxywwyww)).s0, l_574, 0x02L, (-6L), l_557, ((VECTOR(int8_t, 4))((-1L))), ((VECTOR(int8_t, 2))(0x5DL)), (**p_727->g_362), 0x39L, 9L)).odd, ((VECTOR(int8_t, 8))((-8L)))))).s3)))));
            }
        }
        (**l_623) = 1L;
        p_727->g_638++;
    }
    for (p_727->g_373.f7 = 0; (p_727->g_373.f7 < 18); p_727->g_373.f7 = safe_add_func_uint8_t_u_u(p_727->g_373.f7, 6))
    { /* block id: 374 */
        int16_t l_643 = 0x7D96L;
        VECTOR(int8_t, 16) l_648 = (VECTOR(int8_t, 16))(0x25L, (VECTOR(int8_t, 4))(0x25L, (VECTOR(int8_t, 2))(0x25L, 0x11L), 0x11L), 0x11L, 0x25L, 0x11L, (VECTOR(int8_t, 2))(0x25L, 0x11L), (VECTOR(int8_t, 2))(0x25L, 0x11L), 0x25L, 0x11L, 0x25L, 0x11L);
        int32_t l_654[4][1];
        int64_t *l_662 = (void*)0;
        int32_t l_675[6] = {0x704E34FFL,0x704E34FFL,0x704E34FFL,0x704E34FFL,0x704E34FFL,0x704E34FFL};
        int32_t *l_686 = (void*)0;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_654[i][j] = 0x7FD37F0FL;
        }
        if (l_643)
            break;
        for (p_727->g_499 = (-12); (p_727->g_499 == (-28)); p_727->g_499 = safe_sub_func_int8_t_s_s(p_727->g_499, 6))
        { /* block id: 378 */
            uint16_t l_653 = 65531UL;
            int32_t l_661 = 0x0BAC1A91L;
            int64_t *l_674[1][4];
            int32_t *l_707 = &p_727->g_442;
            uint16_t l_720 = 0x1F6EL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_674[i][j] = &p_727->g_373.f6.f6;
            }
            l_675[2] &= (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(0x3061L, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_648.sc6f633cc)))).s47, ((VECTOR(int8_t, 8))(p_727->g_649.xxyxxxxy)).s11))))), 0x2DL, ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x90L, 255UL)).yxxy)), ((VECTOR(uint8_t, 16))(p_727->g_650.yzyxxyxzxzwwyzzx)).sadc4))), 0x4FL)).odd)).wwyxzxywzxxwywwx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 8))((safe_mul_func_int8_t_s_s((l_654[3][0] &= l_653), 0x11L)), 0xFCL, ((VECTOR(uint8_t, 2))(p_727->g_655.s1c)), 247UL, 254UL, 0x0DL, 0UL)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_727->g_656.xxxx)))), 0x76L, 0xDBL, 249UL, 0x1EL)).s77)).yxyyxxyy, ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 2))(0xDCL, 1UL)).xyxyyxyyyxyxyxyx, ((VECTOR(uint8_t, 4))((safe_mod_func_int64_t_s_s((p_727->l_comm_values[(safe_mod_func_uint32_t_u_u(p_727->tid, 13))] = (-1L)), (l_661 &= ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 2))(p_727->g_659.s61)).xyyxyyyy, ((VECTOR(int64_t, 8))(p_727->g_660.s35144757))))))).s6020772761565545)).sb))), ((l_662 == (((((void*)0 != p_727->g_663) , ((safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((*p_727->g_363) != 0x1AL), ((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 2))((-9L), (-1L))).yyyy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_727->g_670.xwxzzzxz)).s4170376177126517)).s1c65, ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 2))(0x510EL, 0L)).yyxy, (int16_t)((safe_sub_func_int32_t_s_s((p_727->g_673[0][1][5] , l_661), 0x43BAC2FFL)) | 0x4A98DF1AL), (int16_t)p_727->g_349.f0)))))).w)), 0x50L)), 1UL)) == (-2L))) <= l_661) , l_674[0][3])) , l_661), 0xBDL, 0x9BL)).wwzxxwyzyywwzzzw))).lo))).s41)).yxxyyxyxyyyyyyyx))).hi, ((VECTOR(uint16_t, 8))(0x54FEL))))))), l_654[3][0], l_661, 65535UL, 0UL, 0x222FL, 0x6D4DL, 0xB516L)).hi)).even, ((VECTOR(uint16_t, 4))(0x5716L))))).wxxzzwzx)).s5, p_727->g_373.f1));
            if ((l_676 , 1L))
            { /* block id: 383 */
                uint8_t l_677 = 0x33L;
                int32_t *l_678 = &l_560;
                union U3 **l_683[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_683[i] = (void*)0;
                if (l_677)
                    break;
                (*l_623) = l_678;
                if ((safe_add_func_int8_t_s_s((l_661 != l_653), (l_654[0][0] = ((void*)0 != &p_727->g_69)))))
                { /* block id: 387 */
                    union U3 **l_685 = &p_727->g_385;
                    int32_t l_688 = 0x1A9E2D7DL;
                    for (p_727->g_373.f6.f4 = 0; (p_727->g_373.f6.f4 > 36); ++p_727->g_373.f6.f4)
                    { /* block id: 390 */
                        union U3 ***l_684[7][9] = {{&l_624,&l_683[1],&l_624,&l_624,&l_683[1],&l_624,&l_624,&l_683[1],&l_624},{&l_624,&l_683[1],&l_624,&l_624,&l_683[1],&l_624,&l_624,&l_683[1],&l_624},{&l_624,&l_683[1],&l_624,&l_624,&l_683[1],&l_624,&l_624,&l_683[1],&l_624},{&l_624,&l_683[1],&l_624,&l_624,&l_683[1],&l_624,&l_624,&l_683[1],&l_624},{&l_624,&l_683[1],&l_624,&l_624,&l_683[1],&l_624,&l_624,&l_683[1],&l_624},{&l_624,&l_683[1],&l_624,&l_624,&l_683[1],&l_624,&l_624,&l_683[1],&l_624},{&l_624,&l_683[1],&l_624,&l_624,&l_683[1],&l_624,&l_624,&l_683[1],&l_624}};
                        int32_t *l_687 = &l_675[2];
                        int i, j;
                        (*l_623) = l_687;
                        return l_688;
                    }
                }
                else
                { /* block id: 395 */
                    uint8_t *l_691 = &p_727->g_375;
                    (*p_727->g_352) = (safe_mul_func_uint8_t_u_u(((*l_691) = p_727->g_73.f6.f9), ((VECTOR(int8_t, 4))(p_727->g_692.s9670)).w));
                    (*l_678) &= 1L;
                }
            }
            else
            { /* block id: 400 */
                uint64_t l_693 = 18446744073709551615UL;
                int32_t l_715 = 0L;
                int32_t l_716 = 0L;
                int32_t l_717 = 0x02BCD09EL;
                int32_t l_718 = (-1L);
                int32_t l_719 = 0x7268C028L;
                if ((p_727->g_508.f0 , l_693))
                { /* block id: 401 */
                    union U3 *l_704[9][8][3];
                    int8_t *l_706 = &p_727->g_499;
                    int32_t **l_708[1];
                    uint32_t *l_710[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int8_t l_711[3];
                    int32_t l_712[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 8; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_704[i][j][k] = &p_727->g_705;
                        }
                    }
                    for (i = 0; i < 1; i++)
                        l_708[i] = &l_707;
                    for (i = 0; i < 3; i++)
                        l_711[i] = 0x4EL;
                    (*p_727->g_352) = (&p_727->g_401 != ((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 16))(((p_727->g_696 , ((l_661 == p_727->g_401) || (((safe_mul_func_int8_t_s_s(((l_711[2] = (p_727->g_414.s4 || (((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_s(((p_727->g_709 = l_707) == &p_727->g_442), 11)))), l_661)) || 0xE1L) >= p_727->g_73.f6.f0))) != 1UL), GROUP_DIVERGE(0, 1))) != l_712[5]) & l_661))) >= l_693), l_693, ((VECTOR(int8_t, 8))((-1L))), ((VECTOR(int8_t, 4))(0x31L)), 0x76L, 0x4CL)).sf51c, (int8_t)l_653, (int8_t)l_712[1]))).even)).odd, GROUP_DIVERGE(1, 1))) , (void*)0));
                }
                else
                { /* block id: 406 */
                    int32_t *l_713 = &l_654[2][0];
                    int32_t *l_714[7][4][1] = {{{&p_727->g_391},{&p_727->g_391},{&p_727->g_391},{&p_727->g_391}},{{&p_727->g_391},{&p_727->g_391},{&p_727->g_391},{&p_727->g_391}},{{&p_727->g_391},{&p_727->g_391},{&p_727->g_391},{&p_727->g_391}},{{&p_727->g_391},{&p_727->g_391},{&p_727->g_391},{&p_727->g_391}},{{&p_727->g_391},{&p_727->g_391},{&p_727->g_391},{&p_727->g_391}},{{&p_727->g_391},{&p_727->g_391},{&p_727->g_391},{&p_727->g_391}},{{&p_727->g_391},{&p_727->g_391},{&p_727->g_391},{&p_727->g_391}}};
                    int i, j, k;
                    l_720--;
                }
                if (p_727->g_723[4])
                    break;
            }
        }
        (*p_727->g_352) = (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 4))(p_727->g_726.sdbf4)).xwyzyxxzzwxxxyzz))).even))))).s4, 1));
    }
    (*l_623) = (void*)0;
    return p_727->g_696.f6.f7;
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_comm_values p_727->g_11 p_727->g_48 p_727->g_64 p_727->g_64.f0 p_727->g_73 p_727->g_74 p_727->g_50.f1.f4 p_727->g_349 p_727->g_352 p_727->g_362 p_727->g_365 p_727->g_373.f7 p_727->g_373.f6.f9 p_727->g_373.f6.f0 p_727->g_9 p_727->g_386 p_727->g_363 p_727->g_7 p_727->g_373.f6.f8 p_727->g_375 p_727->g_373 p_727->g_397 p_727->l_comm_values p_727->g_442 p_727->g_391 p_727->g_487 p_727->g_414 p_727->g_497 p_727->g_508 p_727->g_512 p_727->g_508.f0.f1 p_727->g_520 p_727->g_532
 * writes: p_727->g_9 p_727->g_11 p_727->g_66 p_727->g_50.f1 p_727->g_352 p_727->g_362 p_727->g_375 p_727->g_30.f2.f6 p_727->g_373.f1 p_727->g_383 p_727->g_385 p_727->g_397 p_727->g_7 p_727->g_373.f6.f8 p_727->g_411 p_727->g_373.f7 p_727->g_442 p_727->g_378.f2.f8 p_727->g_391 p_727->g_507 p_727->g_365.f3 p_727->g_30.f2.f8
 */
uint8_t  func_4(int32_t  p_5, struct S7 * p_727)
{ /* block id: 5 */
    int32_t *l_8 = &p_727->g_9;
    int16_t *l_10 = &p_727->g_11;
    union U6 l_516 = {1UL};
    int8_t *l_550 = &p_727->g_499;
    (*l_8) = (-3L);
    (*l_8) = ((((((*l_10) = 0x24C8L) , func_12(((0xEF3B0639L ^ ((1L != func_14(p_727->g_comm_values[p_727->tid], ((safe_lshift_func_int16_t_s_u(p_5, (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(func_23(&p_727->g_7, p_727), (safe_sub_func_int16_t_s_s((l_516 , (safe_add_func_int16_t_s_s(((0x539FL == 0UL) | 18446744073709551615UL), p_5))), 0x304DL)))), p_5)))) <= p_727->g_373.f6.f4), p_727)) , p_5)) , l_8), p_727)) == l_550) | p_727->l_comm_values[(safe_mod_func_uint32_t_u_u(p_727->tid, 13))]) ^ p_5);
    return p_727->l_comm_values[(safe_mod_func_uint32_t_u_u(p_727->tid, 13))];
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_9 p_727->g_386.f0 p_727->g_7 p_727->g_532 p_727->g_414 p_727->g_391
 * writes: p_727->g_9 p_727->g_391 p_727->g_30.f2.f8
 */
int8_t * func_12(int32_t * p_13, struct S7 * p_727)
{ /* block id: 319 */
    VECTOR(uint64_t, 8) l_521 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x5CB67193DD4582B7L), 0x5CB67193DD4582B7L), 0x5CB67193DD4582B7L, 1UL, 0x5CB67193DD4582B7L);
    union U6 l_526 = {0x6233E695L};
    int64_t l_527 = 0x68A35E01B47ED295L;
    uint32_t l_533 = 3UL;
    int32_t l_534 = 0x6975483FL;
    int32_t *l_535 = &p_727->g_30.f1.f6.f8;
    int32_t *l_536 = &p_727->g_391;
    int32_t *l_537 = &p_727->g_30.f2.f8;
    int32_t *l_538 = &p_727->g_378.f1.f6.f8;
    int32_t *l_539 = (void*)0;
    int32_t *l_540 = &p_727->g_30.f2.f8;
    int32_t *l_541 = &l_534;
    int32_t *l_542 = &p_727->g_30.f2.f8;
    int32_t *l_543[8][5] = {{(void*)0,(void*)0,&p_727->g_373.f6.f8,&p_727->g_391,&l_534},{(void*)0,(void*)0,&p_727->g_373.f6.f8,&p_727->g_391,&l_534},{(void*)0,(void*)0,&p_727->g_373.f6.f8,&p_727->g_391,&l_534},{(void*)0,(void*)0,&p_727->g_373.f6.f8,&p_727->g_391,&l_534},{(void*)0,(void*)0,&p_727->g_373.f6.f8,&p_727->g_391,&l_534},{(void*)0,(void*)0,&p_727->g_373.f6.f8,&p_727->g_391,&l_534},{(void*)0,(void*)0,&p_727->g_373.f6.f8,&p_727->g_391,&l_534},{(void*)0,(void*)0,&p_727->g_373.f6.f8,&p_727->g_391,&l_534}};
    uint16_t l_544 = 0x8B0DL;
    uint8_t *l_547[10] = {&p_727->g_375,&p_727->g_375,&p_727->g_375,&p_727->g_375,&p_727->g_375,&p_727->g_375,&p_727->g_375,&p_727->g_375,&p_727->g_375,&p_727->g_375};
    uint8_t *l_549 = &p_727->g_375;
    uint8_t **l_548 = &l_549;
    int i, j;
    (*p_13) |= (((VECTOR(uint64_t, 16))(l_521.s7535637726167004)).s6 == l_521.s4);
    (*l_536) ^= ((safe_div_func_uint32_t_u_u(l_521.s6, (p_727->g_386.f0 | ((l_534 = ((GROUP_DIVERGE(0, 1) , (l_533 = (((safe_rshift_func_int16_t_s_s((l_526 , (((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-5L), 0x52365E07L)).yyyx)).w <= (((l_527 && 4UL) & (p_727->g_7 , l_527)) , ((*p_13) = (safe_div_func_int64_t_s_s((safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_727->local_0_offset, get_local_id(0), 10), (l_527 && (&p_727->g_66 == &p_727->g_66)))), 18446744073709551615UL))))) || p_727->g_532) , p_727->g_414.sa)), l_521.s3)) , l_526.f0) ^ l_527))) ^ FAKE_DIVERGE(p_727->global_1_offset, get_global_id(1), 10))) >= l_526.f0)))) <= 5UL);
    l_544++;
    (*l_540) = (l_547[0] == ((*l_548) = l_547[1]));
    return l_549;
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_520
 * writes: p_727->g_411
 */
int8_t  func_14(int8_t  p_15, uint32_t  p_16, struct S7 * p_727)
{ /* block id: 316 */
    union U6 *l_519 = &p_727->g_390;
    (*p_727->g_520) = l_519;
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_11 p_727->g_comm_values p_727->g_48 p_727->g_64 p_727->g_64.f0 p_727->g_73 p_727->g_74 p_727->g_50.f1.f4 p_727->g_349 p_727->g_352 p_727->g_362 p_727->g_365 p_727->g_373.f7 p_727->g_373.f6.f9 p_727->g_373.f6.f0 p_727->g_9 p_727->g_386 p_727->g_363 p_727->g_7 p_727->g_373.f6.f8 p_727->g_375 p_727->g_373 p_727->g_397 p_727->l_comm_values p_727->g_442 p_727->g_391 p_727->g_487 p_727->g_414 p_727->g_497 p_727->g_508 p_727->g_512 p_727->g_508.f0.f1
 * writes: p_727->g_11 p_727->g_66 p_727->g_50.f1 p_727->g_352 p_727->g_362 p_727->g_375 p_727->g_30.f2.f6 p_727->g_373.f1 p_727->g_383 p_727->g_385 p_727->g_9 p_727->g_397 p_727->g_7 p_727->g_373.f6.f8 p_727->g_411 p_727->g_373.f7 p_727->g_442 p_727->g_378.f2.f8 p_727->g_391 p_727->g_507 p_727->g_365.f3
 */
uint8_t  func_23(int8_t * p_24, struct S7 * p_727)
{ /* block id: 8 */
    uint8_t l_37 = 252UL;
    union U3 *l_47 = &p_727->g_30;
    union U3 **l_46[5];
    int16_t *l_71 = &p_727->g_11;
    int8_t *l_72 = (void*)0;
    int i;
    for (i = 0; i < 5; i++)
        l_46[i] = &l_47;
    for (p_727->g_11 = 17; (p_727->g_11 <= (-2)); p_727->g_11 = safe_sub_func_uint64_t_u_u(p_727->g_11, 5))
    { /* block id: 11 */
        union U3 *l_27 = (void*)0;
        union U3 **l_28[6] = {&l_27,&l_27,&l_27,&l_27,&l_27,&l_27};
        union U3 *l_29 = &p_727->g_30;
        int32_t l_45 = 0x6798564DL;
        int16_t *l_65 = &p_727->g_66;
        uint32_t *l_67 = (void*)0;
        uint32_t *l_68[4][3][7] = {{{&p_727->g_69,(void*)0,&p_727->g_69,(void*)0,&p_727->g_69,&p_727->g_69,(void*)0},{&p_727->g_69,(void*)0,&p_727->g_69,(void*)0,&p_727->g_69,&p_727->g_69,(void*)0},{&p_727->g_69,(void*)0,&p_727->g_69,(void*)0,&p_727->g_69,&p_727->g_69,(void*)0}},{{&p_727->g_69,(void*)0,&p_727->g_69,(void*)0,&p_727->g_69,&p_727->g_69,(void*)0},{&p_727->g_69,(void*)0,&p_727->g_69,(void*)0,&p_727->g_69,&p_727->g_69,(void*)0},{&p_727->g_69,(void*)0,&p_727->g_69,(void*)0,&p_727->g_69,&p_727->g_69,(void*)0}},{{&p_727->g_69,(void*)0,&p_727->g_69,(void*)0,&p_727->g_69,&p_727->g_69,(void*)0},{&p_727->g_69,(void*)0,&p_727->g_69,(void*)0,&p_727->g_69,&p_727->g_69,(void*)0},{&p_727->g_69,(void*)0,&p_727->g_69,(void*)0,&p_727->g_69,&p_727->g_69,(void*)0}},{{&p_727->g_69,(void*)0,&p_727->g_69,(void*)0,&p_727->g_69,&p_727->g_69,(void*)0},{&p_727->g_69,(void*)0,&p_727->g_69,(void*)0,&p_727->g_69,&p_727->g_69,(void*)0},{&p_727->g_69,(void*)0,&p_727->g_69,(void*)0,&p_727->g_69,&p_727->g_69,(void*)0}}};
        int32_t l_70 = (-8L);
        int8_t *l_498 = &p_727->g_499;
        uint32_t l_500 = 0UL;
        struct S0 *l_513 = &p_727->g_365[0].f3;
        int i, j, k;
        l_29 = l_27;
        (*l_513) = func_31((l_37 ^ p_727->g_comm_values[p_727->tid]), (safe_mod_func_int32_t_s_s(((func_40(l_45, (l_46[3] != p_727->g_48[0]), func_51(func_53(l_45, func_59(((l_70 = (p_727->g_64 , (GROUP_DIVERGE(2, 1) ^ ((*l_65) = p_727->g_64.f0)))) | l_37), l_71, l_72, p_727->g_11, p_727), p_24, &l_45, l_45, p_727), p_727), &p_727->g_391, p_727) , &l_70) == (void*)0), l_45)), l_498, l_500, l_45, p_727);
    }
    return p_727->g_508.f0.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_508 p_727->g_73 p_727->g_74 p_727->g_373.f0 p_727->g_50.f1.f4 p_727->g_349 p_727->g_352 p_727->g_391 p_727->g_362 p_727->g_365 p_727->g_373.f7 p_727->g_373.f6.f9 p_727->g_373.f6.f0 p_727->g_9 p_727->g_386 p_727->g_363 p_727->g_7 p_727->g_373.f6.f8 p_727->g_375 p_727->g_373 p_727->g_512
 * writes: p_727->g_411 p_727->g_507 p_727->g_50.f1 p_727->g_352 p_727->g_66 p_727->g_362 p_727->g_375 p_727->g_30.f2.f6 p_727->g_373.f1 p_727->g_383 p_727->g_385 p_727->g_9
 */
struct S0  func_31(int64_t  p_32, int8_t  p_33, int8_t * p_34, uint32_t  p_35, uint64_t  p_36, struct S7 * p_727)
{ /* block id: 306 */
    union U6 **l_501 = &p_727->g_411;
    union U6 *l_502 = &p_727->g_390;
    union U6 *l_504[7] = {&p_727->g_390,&p_727->g_390,&p_727->g_390,&p_727->g_390,&p_727->g_390,&p_727->g_390,&p_727->g_390};
    union U6 **l_503 = &l_504[1];
    union U6 *l_506 = &p_727->g_390;
    union U6 **l_505[5][10] = {{&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506},{&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506},{&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506},{&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506},{&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506,&l_506}};
    struct S2 *l_509 = &p_727->g_373;
    int8_t *l_510[1];
    int32_t *l_511 = &p_727->g_391;
    int i, j;
    for (i = 0; i < 1; i++)
        l_510[i] = &p_727->g_7;
    (*p_727->g_512) = func_53(p_33, func_51(func_53(p_35, func_59((((&p_727->g_390 == (p_727->g_507 = ((*l_503) = (l_502 = ((*l_501) = &p_727->g_390))))) == p_33) && ((p_727->g_508 , l_509) != l_509)), &p_727->g_11, l_510[0], p_32, p_727), l_510[0], l_511, p_727->g_373.f0, p_727), p_727), l_510[0], l_511, p_33, p_727);
    return p_727->g_386.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_397 p_727->g_7 p_727->g_373.f6.f8 p_727->g_386.f1 p_727->g_11 p_727->g_373.f6.f0 p_727->g_373.f7 p_727->l_comm_values p_727->g_9 p_727->g_442 p_727->g_373.f1 p_727->g_363 p_727->g_391 p_727->g_352 p_727->g_487 p_727->g_comm_values p_727->g_414 p_727->g_497
 * writes: p_727->g_397 p_727->g_7 p_727->g_373.f6.f8 p_727->g_411 p_727->g_373.f7 p_727->g_66 p_727->g_442 p_727->g_378.f2.f8 p_727->g_391 p_727->g_9
 */
int16_t  func_40(int32_t  p_41, uint32_t  p_42, union U3 * p_43, int32_t * p_44, struct S7 * p_727)
{ /* block id: 248 */
    int32_t *l_393 = &p_727->g_378.f2.f8;
    int32_t l_394[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t *l_395 = &p_727->g_373.f6.f8;
    int32_t *l_396[7] = {&l_394[0],&p_727->g_373.f6.f8,&l_394[0],&l_394[0],&p_727->g_373.f6.f8,&l_394[0],&l_394[0]};
    int64_t l_400 = 0x2C439D6EDA7A60C5L;
    uint32_t l_402 = 0xD7D2B312L;
    VECTOR(uint32_t, 2) l_417 = (VECTOR(uint32_t, 2))(3UL, 0xF7FB535BL);
    int8_t l_445 = 1L;
    int i;
    p_727->g_397--;
    --l_402;
    for (p_727->g_7 = 0; (p_727->g_7 < (-23)); p_727->g_7 = safe_sub_func_int64_t_s_s(p_727->g_7, 4))
    { /* block id: 253 */
        int32_t l_407 = 0x6583B993L;
        union U6 **l_408 = (void*)0;
        union U6 *l_410[9] = {&p_727->g_390,&p_727->g_390,&p_727->g_390,&p_727->g_390,&p_727->g_390,&p_727->g_390,&p_727->g_390,&p_727->g_390,&p_727->g_390};
        union U6 **l_409 = &l_410[8];
        VECTOR(uint32_t, 2) l_415 = (VECTOR(uint32_t, 2))(6UL, 4294967289UL);
        VECTOR(uint32_t, 2) l_416 = (VECTOR(uint32_t, 2))(0xE78E2932L, 0xC430ABA8L);
        uint16_t *l_429 = &p_727->g_373.f7;
        int16_t *l_432 = &p_727->g_66;
        int32_t *l_439 = &p_727->g_365[0].f1;
        int32_t *l_440 = &p_727->g_365[0].f1;
        int32_t *l_441[6] = {&p_727->g_442,&p_727->g_442,&p_727->g_442,&p_727->g_442,&p_727->g_442,&p_727->g_442};
        int i;
        (*l_395) |= l_407;
        p_727->g_411 = ((*l_409) = &p_727->g_390);
        (*p_44) &= (l_407 = ((*l_393) = ((*l_395) = (((p_727->g_386.f1 != (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(p_727->g_414.s74bc17ea55484bcc)).s6a, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 2))(0xA058415EL, 4294967295UL)).yxyyxyxyxyyyyyyx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_415.xyxy)).lo)).xyyyxxyx, ((VECTOR(uint32_t, 16))(l_416.yyyyyxyyxyyyyxyy)).odd))).hi)).even))).yxyyyxyx)).s7571021733707127))).lo)).s51)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_417.yxxx)).lo))))).yyxxyyyxyyyxyxxy)).sf7b0, ((VECTOR(uint32_t, 8))(p_727->g_418.yyxyyyxy)).lo))).y, (4294967289UL | (safe_div_func_uint16_t_u_u(p_41, (safe_lshift_func_uint8_t_u_s(p_727->g_11, ((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u(65534UL, p_727->g_373.f6.f0)) == (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x6AL, 0xD5L)).xxyyyxyyyyxxyyyx)).s9 != (((*l_429) = l_415.x) , ((p_727->g_442 &= (safe_mul_func_int16_t_s_s((((*l_432) = p_41) & (safe_add_func_int64_t_s_s((((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((p_727->g_373.f7 > p_727->g_11), FAKE_DIVERGE(p_727->group_0_offset, get_group_id(0), 10))), 0x9795L)) >= p_727->l_comm_values[(safe_mod_func_uint32_t_u_u(p_727->tid, 13))]) <= p_42), p_42))), p_727->g_9))) , p_727->g_373.f1)))), l_415.y)) & (*p_727->g_363)))))))))) & (*l_395)) >= (*l_395)))));
    }
    for (p_727->g_373.f7 = 0; (p_727->g_373.f7 >= 17); p_727->g_373.f7 = safe_add_func_uint8_t_u_u(p_727->g_373.f7, 4))
    { /* block id: 267 */
        int32_t *l_488 = &p_727->g_373.f6.f8;
        int32_t **l_489 = &l_488;
        int32_t l_496 = 0x5B4D6AE3L;
        (*p_727->g_352) ^= l_445;
        if ((atomic_inc(&p_727->g_atomic_input[11 * get_linear_group_id() + 10]) == 4))
        { /* block id: 270 */
            int32_t l_446 = 0x00752BE8L;
            uint32_t l_479 = 5UL;
            int16_t l_480 = 0x0B16L;
            for (l_446 = 0; (l_446 == (-8)); --l_446)
            { /* block id: 273 */
                int32_t l_449 = 0x145041A9L;
                for (l_449 = 0; (l_449 < (-27)); l_449 = safe_sub_func_uint32_t_u_u(l_449, 4))
                { /* block id: 276 */
                    int32_t *l_452[5];
                    int32_t l_454 = 1L;
                    int32_t *l_453[8] = {&l_454,&l_454,&l_454,&l_454,&l_454,&l_454,&l_454,&l_454};
                    uint8_t l_455 = 1UL;
                    int32_t *l_476 = &l_454;
                    int32_t *l_477 = &l_454;
                    int32_t *l_478 = (void*)0;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_452[i] = (void*)0;
                    l_452[2] = (l_453[1] = l_452[2]);
                    l_455 = 1L;
                    for (l_455 = 4; (l_455 < 17); l_455 = safe_add_func_uint16_t_u_u(l_455, 7))
                    { /* block id: 282 */
                        int32_t *l_458[3][1];
                        int32_t l_460 = 1L;
                        int32_t *l_459[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint16_t l_461 = 65535UL;
                        VECTOR(uint32_t, 8) l_462 = (VECTOR(uint32_t, 8))(0x500B04E7L, (VECTOR(uint32_t, 4))(0x500B04E7L, (VECTOR(uint32_t, 2))(0x500B04E7L, 0x9A9C783EL), 0x9A9C783EL), 0x9A9C783EL, 0x500B04E7L, 0x9A9C783EL);
                        VECTOR(uint32_t, 16) l_463 = (VECTOR(uint32_t, 16))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 4UL), 4UL), 4UL, 4294967294UL, 4UL, (VECTOR(uint32_t, 2))(4294967294UL, 4UL), (VECTOR(uint32_t, 2))(4294967294UL, 4UL), 4294967294UL, 4UL, 4294967294UL, 4UL);
                        VECTOR(uint32_t, 2) l_464 = (VECTOR(uint32_t, 2))(4294967294UL, 4294967295UL);
                        VECTOR(uint8_t, 16) l_465 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL, 255UL, 255UL, 255UL);
                        VECTOR(uint8_t, 2) l_466 = (VECTOR(uint8_t, 2))(4UL, 255UL);
                        VECTOR(uint32_t, 2) l_467 = (VECTOR(uint32_t, 2))(0xC92BFF20L, 2UL);
                        union U6 l_468 = {0xFCE04A02L};
                        struct S1 l_469 = {0x343A1702E8E05BA5L,0x25768797L,{-1L,0xBFL,0UL},7UL,0x777BEC2BC42A497CL,0L,0x7A492D1C6FF8191CL,4294967293UL,0x62182D0FL,0xE93516083A32D902L};/* VOLATILE GLOBAL l_469 */
                        int32_t l_470[4][3] = {{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L}};
                        uint8_t l_471 = 248UL;
                        int32_t l_472 = (-1L);
                        uint32_t l_473[8][5][6] = {{{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL}},{{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL}},{{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL}},{{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL}},{{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL}},{{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL}},{{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL}},{{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL},{0UL,0xBBB1012DL,4294967291UL,0x6B976835L,4294967295UL,1UL}}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_458[i][j] = (void*)0;
                        }
                        l_459[0] = (l_453[1] = l_458[1][0]);
                        l_461 |= 0x2619D7EBL;
                        l_471 |= ((((((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 4))(l_462.s7633)), ((VECTOR(uint32_t, 8))(l_463.sd6ecc84d)).hi, ((VECTOR(uint32_t, 2))(l_464.yx)).yxyy))).y , (l_467.x = ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 16))(l_465.s076cde7594582adc)), ((VECTOR(uint8_t, 4))(l_466.yyyx)).zywywzxywyyxzwwy))))).sc)) , l_468) , l_469) , l_470[0][0]);
                        --l_473[7][3][3];
                    }
                    l_478 = (l_477 = l_476);
                }
            }
            l_480 |= l_479;
            unsigned int result = 0;
            result += l_446;
            result += l_479;
            result += l_480;
            atomic_add(&p_727->g_special_values[11 * get_linear_group_id() + 10], result);
        }
        else
        { /* block id: 295 */
            (1 + 1);
        }
        (*p_727->g_352) |= 0x57EFF2B5L;
        (*p_44) = ((((((safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s((GROUP_DIVERGE(1, 1) || ((!(l_496 = ((*p_727->g_363) = (safe_div_func_int32_t_s_s((p_727->g_487 , ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(0x18C75034L, (-1L))).yyyxyyxy))).s1), ((*p_727->g_352) = (((p_727->g_comm_values[p_727->tid] >= (((*l_489) = l_488) == &l_394[3])) , (safe_rshift_func_int8_t_s_u((*l_488), ((safe_add_func_int64_t_s_s((l_488 != l_488), ((safe_add_func_int16_t_s_s(((*p_44) != ((*p_44) && (*l_488))), 1L)) == GROUP_DIVERGE(0, 1)))) > (**l_489))))) ^ (*p_727->g_352)))))))) >= 0x2AL)), p_42)), 0x4BL)) & 1L) > p_727->g_414.s8) , p_727->g_497) == 0x72C2DA52L) > 1L);
    }
    return p_42;
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_73.f6.f2 p_727->g_352 p_727->g_362 p_727->g_365 p_727->g_373.f7 p_727->g_373.f6.f9 p_727->g_373.f6.f0 p_727->g_50.f1.f4 p_727->g_349 p_727->g_373.f1 p_727->g_9 p_727->g_386 p_727->g_363 p_727->g_7 p_727->g_390 p_727->g_391 p_727->g_373.f6.f8 p_727->g_375 p_727->g_373
 * writes: p_727->g_362 p_727->g_375 p_727->g_30.f2.f6 p_727->g_352 p_727->g_66 p_727->g_373.f1 p_727->g_383 p_727->g_385 p_727->g_9
 */
union U3 * func_51(int32_t * p_52, struct S7 * p_727)
{ /* block id: 226 */
    uint16_t l_361 = 65528UL;
    int8_t ***l_364 = &p_727->g_362;
    int8_t **l_366[9] = {&p_727->g_363,&p_727->g_363,&p_727->g_363,&p_727->g_363,&p_727->g_363,&p_727->g_363,&p_727->g_363,&p_727->g_363,&p_727->g_363};
    VECTOR(uint16_t, 8) l_367 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0UL), 0UL), 0UL, 65526UL, 0UL);
    int64_t *l_368 = &p_727->g_30.f2.f6;
    int64_t *l_369 = &p_727->g_30.f1.f6.f6;
    int64_t *l_370[3];
    int32_t l_371 = 0L;
    struct S2 *l_372 = &p_727->g_373;
    uint8_t *l_374 = &p_727->g_375;
    int32_t l_376 = 0L;
    union U3 *l_377 = &p_727->g_378;
    int32_t **l_379 = &p_727->g_352;
    uint32_t *l_382 = (void*)0;
    int8_t l_392 = 0x62L;
    int i;
    for (i = 0; i < 3; i++)
        l_370[i] = &p_727->g_30.f1.f6.f6;
    (*l_379) = func_53(((~(((p_727->g_30.f2.f6 = (l_376 = ((((*l_374) = (18446744073709551614UL < (((p_727->g_73.f6.f2 , ((((l_371 ^= ((((safe_mod_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), (safe_rshift_func_int8_t_s_s(l_361, 4)))) ^ (*p_727->g_352)) > (0x324CA10DL & (((*l_364) = p_727->g_362) != (p_727->g_365[0] , l_366[5])))) != ((VECTOR(uint16_t, 16))(l_367.s4117053446100312)).s5)) <= (((l_361 , l_372) == l_372) != p_727->g_373.f7)) <= p_727->g_373.f6.f9) || 0xF5EAL)) < 1L) < l_361))) & l_367.s0) == p_727->g_373.f6.f0))) >= l_361) != l_361)) | 0x164838D6L), l_377, &p_727->g_7, &p_727->g_9, l_367.s1, p_727);
    for (p_727->g_373.f1 = 0; (p_727->g_373.f1 == (-19)); p_727->g_373.f1 = safe_sub_func_uint16_t_u_u(p_727->g_373.f1, 5))
    { /* block id: 235 */
        union U3 **l_384 = &l_377;
        int32_t l_387 = 0x49186945L;
        if ((*p_727->g_352))
            break;
        (*l_379) = func_53((l_382 != (p_727->g_383 = p_52)), (p_727->g_385 = ((*l_384) = &p_727->g_378)), (p_727->g_386 , (*p_727->g_362)), &p_727->g_9, ((GROUP_DIVERGE(1, 1) == (((!(l_387 = (~((**l_379) = (*p_52))))) && ((*p_727->g_363) & ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))((safe_lshift_func_int8_t_s_s(((p_727->g_390 , 249UL) | p_727->g_391), 4)), ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 4))(0x6CL)), l_387, ((VECTOR(int8_t, 8))(0x04L)))).s7, 0x4CL, 0L, 0x7CL)).wzzwwxyyyzwwwwzx)).se4d9)).y)) < p_727->g_373.f6.f8)) , p_727->g_375), p_727);
        return l_377;
    }
    (*p_727->g_352) = (l_392 = ((*l_372) , 1L));
    return &p_727->g_30;
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_50.f1.f4 p_727->g_349 p_727->g_66
 * writes: p_727->g_352 p_727->g_66
 */
int32_t * func_53(uint32_t  p_54, union U3 * p_55, int8_t * p_56, int32_t * p_57, uint64_t  p_58, struct S7 * p_727)
{ /* block id: 217 */
    int32_t *l_351 = (void*)0;
    int32_t **l_350[3];
    int i;
    for (i = 0; i < 3; i++)
        l_350[i] = &l_351;
    p_727->g_352 = (p_727->g_50.f1.f4 , (p_57 = (p_727->g_349 , p_57)));
    for (p_727->g_66 = 0; (p_727->g_66 <= 24); p_727->g_66 = safe_add_func_int8_t_s_s(p_727->g_66, 4))
    { /* block id: 222 */
        return &p_727->g_9;
    }
    return p_57;
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_73 p_727->g_74
 * writes: p_727->g_50.f1
 */
union U3 * func_59(uint64_t  p_60, int16_t * p_61, int8_t * p_62, uint32_t  p_63, struct S7 * p_727)
{ /* block id: 15 */
    (*p_727->g_74) = p_727->g_73;
    if ((atomic_inc(&p_727->g_atomic_input[11 * get_linear_group_id() + 8]) == 0))
    { /* block id: 18 */
        int32_t l_75 = (-10L);
        int32_t l_288 = 0x6DC23566L;
        for (l_75 = 24; (l_75 <= 17); l_75--)
        { /* block id: 21 */
            int8_t l_78 = 0x01L;
            struct S2 l_142[10] = {{4294967294UL,0x2F2D61EB4871747DL,0x5B839079L,4294967295UL,0x04B9L,1UL,{0x7ABC4D6030DAD6C1L,4294967290UL,{-1L,6UL,0x468D6D82E6C5166AL},0x4887L,0UL,9L,1L,1UL,-4L,0xD7966237C08B2C5EL},0xF491L},{4294967294UL,0x2F2D61EB4871747DL,0x5B839079L,4294967295UL,0x04B9L,1UL,{0x7ABC4D6030DAD6C1L,4294967290UL,{-1L,6UL,0x468D6D82E6C5166AL},0x4887L,0UL,9L,1L,1UL,-4L,0xD7966237C08B2C5EL},0xF491L},{4294967294UL,0x2F2D61EB4871747DL,0x5B839079L,4294967295UL,0x04B9L,1UL,{0x7ABC4D6030DAD6C1L,4294967290UL,{-1L,6UL,0x468D6D82E6C5166AL},0x4887L,0UL,9L,1L,1UL,-4L,0xD7966237C08B2C5EL},0xF491L},{4294967294UL,0x2F2D61EB4871747DL,0x5B839079L,4294967295UL,0x04B9L,1UL,{0x7ABC4D6030DAD6C1L,4294967290UL,{-1L,6UL,0x468D6D82E6C5166AL},0x4887L,0UL,9L,1L,1UL,-4L,0xD7966237C08B2C5EL},0xF491L},{4294967294UL,0x2F2D61EB4871747DL,0x5B839079L,4294967295UL,0x04B9L,1UL,{0x7ABC4D6030DAD6C1L,4294967290UL,{-1L,6UL,0x468D6D82E6C5166AL},0x4887L,0UL,9L,1L,1UL,-4L,0xD7966237C08B2C5EL},0xF491L},{4294967294UL,0x2F2D61EB4871747DL,0x5B839079L,4294967295UL,0x04B9L,1UL,{0x7ABC4D6030DAD6C1L,4294967290UL,{-1L,6UL,0x468D6D82E6C5166AL},0x4887L,0UL,9L,1L,1UL,-4L,0xD7966237C08B2C5EL},0xF491L},{4294967294UL,0x2F2D61EB4871747DL,0x5B839079L,4294967295UL,0x04B9L,1UL,{0x7ABC4D6030DAD6C1L,4294967290UL,{-1L,6UL,0x468D6D82E6C5166AL},0x4887L,0UL,9L,1L,1UL,-4L,0xD7966237C08B2C5EL},0xF491L},{4294967294UL,0x2F2D61EB4871747DL,0x5B839079L,4294967295UL,0x04B9L,1UL,{0x7ABC4D6030DAD6C1L,4294967290UL,{-1L,6UL,0x468D6D82E6C5166AL},0x4887L,0UL,9L,1L,1UL,-4L,0xD7966237C08B2C5EL},0xF491L},{4294967294UL,0x2F2D61EB4871747DL,0x5B839079L,4294967295UL,0x04B9L,1UL,{0x7ABC4D6030DAD6C1L,4294967290UL,{-1L,6UL,0x468D6D82E6C5166AL},0x4887L,0UL,9L,1L,1UL,-4L,0xD7966237C08B2C5EL},0xF491L},{4294967294UL,0x2F2D61EB4871747DL,0x5B839079L,4294967295UL,0x04B9L,1UL,{0x7ABC4D6030DAD6C1L,4294967290UL,{-1L,6UL,0x468D6D82E6C5166AL},0x4887L,0UL,9L,1L,1UL,-4L,0xD7966237C08B2C5EL},0xF491L}};
            union U5 l_143[1] = {{{1L,250UL,18446744073709551615UL}}};
            int64_t l_144[7] = {0L,0x61FAAB5558DF00F4L,0L,0L,0x61FAAB5558DF00F4L,0L,0L};
            union U3 l_146 = {0};/* VOLATILE GLOBAL l_146 */
            union U3 *l_145 = &l_146;
            union U3 *l_147 = &l_146;
            union U4 l_148 = {3UL};/* VOLATILE GLOBAL l_148 */
            uint64_t l_149 = 0xF9DCFB939A52B00BL;
            int32_t l_150 = 0x61322146L;
            int8_t l_151 = 0x74L;
            uint32_t l_152 = 1UL;
            int i;
            if (l_78)
            { /* block id: 22 */
                int32_t l_79 = 5L;
                int64_t l_103 = 0x7D95232D534F4898L;
                union U3 l_136 = {0};/* VOLATILE GLOBAL l_136 */
                union U3 *l_135 = &l_136;
                union U3 *l_137 = &l_136;
                VECTOR(int32_t, 4) l_138 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x4FB932FEL), 0x4FB932FEL);
                uint8_t l_139 = 1UL;
                int i;
                for (l_79 = 0; (l_79 != 11); ++l_79)
                { /* block id: 25 */
                    VECTOR(int32_t, 2) l_82 = (VECTOR(int32_t, 2))(0x42BA5173L, 0x77313610L);
                    int32_t *l_98 = (void*)0;
                    int32_t *l_99[3][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    VECTOR(uint16_t, 4) l_100 = (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 3UL), 3UL);
                    int i, j;
                    if (((VECTOR(int32_t, 2))(l_82.yy)).hi)
                    { /* block id: 26 */
                        struct S2 l_83 = {0UL,-5L,0x6F706C0AL,4294967295UL,-1L,0UL,{0x3C9AF00AFC62902DL,1UL,{8L,0xE5L,0x3B4242223AA5B3E5L},65535UL,0x7BAD64B6C7F14991L,0x5F91B207L,0x11369F8C36B4ADBCL,4294967294UL,0x384D8593L,1UL},65535UL};/* VOLATILE GLOBAL l_83 */
                        uint64_t l_84 = 0x57CE1196B4A016C9L;
                        int32_t l_85 = (-1L);
                        uint8_t l_86 = 0x90L;
                        uint32_t l_87[4][8] = {{0x549F135BL,0x29568EBAL,0x29568EBAL,0x549F135BL,0x549F135BL,0x29568EBAL,0x29568EBAL,0x549F135BL},{0x549F135BL,0x29568EBAL,0x29568EBAL,0x549F135BL,0x549F135BL,0x29568EBAL,0x29568EBAL,0x549F135BL},{0x549F135BL,0x29568EBAL,0x29568EBAL,0x549F135BL,0x549F135BL,0x29568EBAL,0x29568EBAL,0x549F135BL},{0x549F135BL,0x29568EBAL,0x29568EBAL,0x549F135BL,0x549F135BL,0x29568EBAL,0x29568EBAL,0x549F135BL}};
                        uint8_t l_88 = 3UL;
                        struct S0 l_89 = {0x5214L,255UL,0x875C6BA716740609L};/* VOLATILE GLOBAL l_89 */
                        struct S0 l_90[9][6][4] = {{{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}}},{{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}}},{{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}}},{{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}}},{{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}}},{{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}}},{{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}}},{{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}}},{{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}},{{-1L,251UL,18446744073709551610UL},{0x38BEL,1UL,0xB7537BB743FEE94DL},{8L,0xF6L,0xC249806CA2BCBDF4L},{-6L,0UL,18446744073709551608UL}}}};
                        int i, j, k;
                        l_86 = (l_85 = (l_83 , (l_82.y = l_84)));
                        l_88 &= (l_82.x = l_87[3][7]);
                        l_90[2][5][3] = l_89;
                    }
                    else
                    { /* block id: 33 */
                        int32_t l_92 = 1L;
                        int32_t *l_91 = &l_92;
                        uint8_t l_93[4][8][7] = {{{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL}},{{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL}},{{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL}},{{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL},{247UL,246UL,0xAEL,0UL,0xAEL,0xA6L,0x1BL}}};
                        int32_t *l_96 = (void*)0;
                        int32_t *l_97[5] = {&l_92,&l_92,&l_92,&l_92,&l_92};
                        int i, j, k;
                        l_91 = (void*)0;
                        --l_93[2][5][6];
                        l_97[3] = l_96;
                    }
                    l_99[1][9] = l_98;
                    l_100.w--;
                }
                if ((l_103 = 0x3E89911EL))
                { /* block id: 42 */
                    uint16_t l_104[8] = {65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL,65526UL};
                    int64_t l_105 = 0x56EBF7B4E91CA70FL;
                    int i;
                    if ((l_105 = l_104[3]))
                    { /* block id: 44 */
                        int32_t l_106 = 0x596F6F01L;
                        struct S1 l_107 = {0x315DE78DB23535E1L,7UL,{0x02E6L,0x18L,1UL},0xB6B9L,18446744073709551615UL,0x4EC19F97L,0x6154029CE55DAC31L,4294967295UL,-2L,0x1CB93B745A2F1ED5L};/* VOLATILE GLOBAL l_107 */
                        struct S1 l_108 = {0x38DB84F2A5F7610EL,0x47D80A4BL,{1L,0xE8L,18446744073709551608UL},0UL,0x8E0F7AC18CAC2623L,-5L,0x2E1D0CBB2B50047DL,0UL,0x016B02DDL,3UL};/* VOLATILE GLOBAL l_108 */
                        uint16_t l_109 = 0xE25FL;
                        l_79 = l_106;
                        l_108 = l_107;
                        l_109++;
                    }
                    else
                    { /* block id: 48 */
                        uint32_t l_112 = 4294967290UL;
                        int8_t *l_114 = (void*)0;
                        int8_t **l_113 = &l_114;
                        l_113 = (l_112 , (void*)0);
                    }
                }
                else
                { /* block id: 51 */
                    struct S2 l_115 = {1UL,7L,4294967295UL,2UL,7L,5UL,{0L,0x68BD2B6BL,{6L,0x1CL,0UL},1UL,18446744073709551610UL,1L,0x1C12841510BD41EAL,1UL,0L,7UL},0x5C68L};/* VOLATILE GLOBAL l_115 */
                    uint8_t l_116 = 0x2FL;
                    VECTOR(int32_t, 8) l_126 = (VECTOR(int32_t, 8))(0x2FDB3C9BL, (VECTOR(int32_t, 4))(0x2FDB3C9BL, (VECTOR(int32_t, 2))(0x2FDB3C9BL, 1L), 1L), 1L, 0x2FDB3C9BL, 1L);
                    VECTOR(int32_t, 4) l_127 = (VECTOR(int32_t, 4))(0x3FB8AFD3L, (VECTOR(int32_t, 2))(0x3FB8AFD3L, (-1L)), (-1L));
                    union U6 l_128 = {0x191F7D20L};
                    union U3 l_131 = {0};/* VOLATILE GLOBAL l_131 */
                    union U3 *l_130 = &l_131;
                    union U3 **l_129[8] = {&l_130,&l_130,&l_130,&l_130,&l_130,&l_130,&l_130,&l_130};
                    union U3 **l_132 = &l_130;
                    union U3 **l_133[2][6] = {{&l_130,&l_130,&l_130,&l_130,&l_130,&l_130},{&l_130,&l_130,&l_130,&l_130,&l_130,&l_130}};
                    union U3 **l_134 = &l_130;
                    int i, j;
                    if ((l_115 , l_116))
                    { /* block id: 52 */
                        int8_t l_117 = (-10L);
                        int32_t l_118 = 1L;
                        uint16_t l_119 = 3UL;
                        l_118 ^= l_117;
                        l_79 ^= l_119;
                    }
                    else
                    { /* block id: 55 */
                        struct S0 l_121 = {0x4279L,1UL,1UL};/* VOLATILE GLOBAL l_121 */
                        struct S0 *l_120 = &l_121;
                        struct S0 *l_122[8][6][4] = {{{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121}},{{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121}},{{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121}},{{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121}},{{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121}},{{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121}},{{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121}},{{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121},{&l_121,&l_121,&l_121,&l_121}}};
                        int8_t l_123[4] = {6L,6L,6L,6L};
                        uint32_t l_124 = 1UL;
                        uint32_t l_125 = 0x204BD958L;
                        int i, j, k;
                        l_122[0][2][0] = l_120;
                        l_123[3] ^= (l_115.f6.f8 |= (l_79 = 0L));
                        l_115.f6.f8 = (l_79 |= l_124);
                        l_79 = l_125;
                    }
                    l_79 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_126.s04)), ((VECTOR(int32_t, 2))((-4L), 0L)), 0x156C5B6AL, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_127.wyxwzyzxwyxyzywz)).even)).s0217164517501661)).s9, 0x3A37B5F1L, 0x08B0E266L)).s7;
                    l_134 = (l_128 , (l_133[1][3] = (l_132 = l_129[3])));
                }
                l_137 = l_135;
                l_139 = ((VECTOR(int32_t, 2))(l_138.yz)).lo;
            }
            else
            { /* block id: 71 */
                int32_t l_141 = 1L;
                int32_t *l_140 = &l_141;
                l_140 = (void*)0;
            }
            l_147 = (l_142[0] , ((l_143[0] , l_144[3]) , l_145));
            l_150 = (l_148 , l_149);
            l_152 &= l_151;
        }
        for (l_75 = 0; (l_75 > 23); l_75++)
        { /* block id: 80 */
            int32_t l_155 = 0x03F4B73FL;
            int16_t l_284 = 1L;
            uint32_t l_285 = 0x2D331804L;
            for (l_155 = (-29); (l_155 == (-17)); l_155 = safe_add_func_uint64_t_u_u(l_155, 7))
            { /* block id: 83 */
                int32_t l_158 = 5L;
                l_158 ^= 0x4D39F2E5L;
                for (l_158 = 0; (l_158 > 1); l_158++)
                { /* block id: 87 */
                    uint32_t l_161 = 0xF64DE006L;
                    if (l_161)
                    { /* block id: 88 */
                        VECTOR(int32_t, 8) l_162 = (VECTOR(int32_t, 8))(0x2EA79D7EL, (VECTOR(int32_t, 4))(0x2EA79D7EL, (VECTOR(int32_t, 2))(0x2EA79D7EL, 4L), 4L), 4L, 0x2EA79D7EL, 4L);
                        VECTOR(int32_t, 8) l_163 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x7A06AB12L), 0x7A06AB12L), 0x7A06AB12L, (-7L), 0x7A06AB12L);
                        uint32_t l_164 = 0x1AEE968AL;
                        int8_t l_165 = 0x09L;
                        int64_t l_166 = 4L;
                        int8_t l_167 = 0x79L;
                        uint32_t l_168 = 1UL;
                        VECTOR(int32_t, 2) l_169 = (VECTOR(int32_t, 2))(0x56E5E30FL, 3L);
                        VECTOR(int32_t, 16) l_170 = (VECTOR(int32_t, 16))(0x77520031L, (VECTOR(int32_t, 4))(0x77520031L, (VECTOR(int32_t, 2))(0x77520031L, 0L), 0L), 0L, 0x77520031L, 0L, (VECTOR(int32_t, 2))(0x77520031L, 0L), (VECTOR(int32_t, 2))(0x77520031L, 0L), 0x77520031L, 0L, 0x77520031L, 0L);
                        int64_t l_171 = 0x4EA6253B305B964CL;
                        VECTOR(int32_t, 2) l_172 = (VECTOR(int32_t, 2))((-1L), 0x43FEE604L);
                        VECTOR(int32_t, 16) l_173 = (VECTOR(int32_t, 16))(0x28AB6EC9L, (VECTOR(int32_t, 4))(0x28AB6EC9L, (VECTOR(int32_t, 2))(0x28AB6EC9L, 4L), 4L), 4L, 0x28AB6EC9L, 4L, (VECTOR(int32_t, 2))(0x28AB6EC9L, 4L), (VECTOR(int32_t, 2))(0x28AB6EC9L, 4L), 0x28AB6EC9L, 4L, 0x28AB6EC9L, 4L);
                        VECTOR(int32_t, 2) l_174 = (VECTOR(int32_t, 2))(0x4F96347AL, (-1L));
                        VECTOR(int32_t, 8) l_175 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x54301AFEL), 0x54301AFEL), 0x54301AFEL, (-3L), 0x54301AFEL);
                        VECTOR(int32_t, 4) l_176 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x651773A4L), 0x651773A4L);
                        int32_t l_177 = 7L;
                        uint8_t l_178 = 1UL;
                        int8_t l_179 = 0L;
                        VECTOR(uint8_t, 2) l_180 = (VECTOR(uint8_t, 2))(249UL, 255UL);
                        int i;
                        l_179 ^= (l_178 &= (l_177 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_162.s0466440356677466)).lo, ((VECTOR(int32_t, 8))(l_163.s32766457)), ((VECTOR(int32_t, 16))(0x63E0678FL, l_164, (l_165 , l_166), l_167, 0x290134D3L, l_168, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_169.yyxxyyxxxyxxyyxx)).s5b11)))).z, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_170.sf9)).yyyy)), l_171, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(0x5BCC31C5L, (-1L))).xxyx, ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_172.yxxy)).odd)).yyyyyyxyyxyxxyxx, ((VECTOR(int32_t, 4))(l_173.s92d6)).zzzwyzyywyxxxzyy))))).hi, ((VECTOR(int32_t, 2))(l_174.xx)).yyyxyxyx, ((VECTOR(int32_t, 2))(0L, 0x342D46C6L)).yxyxyyxx))).lo))).yzzwxxzz)).s3161422302751260)).saa)).yxxx)).odd, ((VECTOR(int32_t, 8))(l_175.s77203773)).s30))), ((VECTOR(int32_t, 2))((-4L), (-8L)))))), 0x19D4D782L, (-1L))).hi))))).s1215346531160355, ((VECTOR(int32_t, 4))(l_176.xwww)).yzwyxyyxxwwyyzww))).hi)).s21)).even));
                        l_180.y++;
                    }
                    else
                    { /* block id: 93 */
                        VECTOR(int32_t, 2) l_183 = (VECTOR(int32_t, 2))((-1L), 0x2427DBADL);
                        uint16_t l_184[5][7] = {{0xC804L,0xD6E6L,0xC804L,0xC804L,0xD6E6L,0xC804L,0xC804L},{0xC804L,0xD6E6L,0xC804L,0xC804L,0xD6E6L,0xC804L,0xC804L},{0xC804L,0xD6E6L,0xC804L,0xC804L,0xD6E6L,0xC804L,0xC804L},{0xC804L,0xD6E6L,0xC804L,0xC804L,0xD6E6L,0xC804L,0xC804L},{0xC804L,0xD6E6L,0xC804L,0xC804L,0xD6E6L,0xC804L,0xC804L}};
                        int i, j;
                        l_184[0][6] &= ((VECTOR(int32_t, 2))(l_183.yy)).even;
                    }
                    for (l_161 = (-11); (l_161 != 25); l_161 = safe_add_func_int8_t_s_s(l_161, 3))
                    { /* block id: 98 */
                        int16_t l_187 = 1L;
                        struct S2 *l_188 = (void*)0;
                        uint8_t l_189 = 0x55L;
                        int32_t l_190 = 1L;
                        int8_t l_191 = 1L;
                        int64_t l_192 = (-5L);
                        struct S1 l_193[4] = {{0x47DBC72E0A35E8C6L,0UL,{0x398AL,253UL,0UL},65533UL,0xE556765D163BB0C6L,0x62EE7345L,0x76D528FEA07E3D8DL,0UL,0x0A9068FDL,0xEE3A75C545DF848EL},{0x47DBC72E0A35E8C6L,0UL,{0x398AL,253UL,0UL},65533UL,0xE556765D163BB0C6L,0x62EE7345L,0x76D528FEA07E3D8DL,0UL,0x0A9068FDL,0xEE3A75C545DF848EL},{0x47DBC72E0A35E8C6L,0UL,{0x398AL,253UL,0UL},65533UL,0xE556765D163BB0C6L,0x62EE7345L,0x76D528FEA07E3D8DL,0UL,0x0A9068FDL,0xEE3A75C545DF848EL},{0x47DBC72E0A35E8C6L,0UL,{0x398AL,253UL,0UL},65533UL,0xE556765D163BB0C6L,0x62EE7345L,0x76D528FEA07E3D8DL,0UL,0x0A9068FDL,0xEE3A75C545DF848EL}};
                        VECTOR(uint32_t, 16) l_194 = (VECTOR(uint32_t, 16))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967290UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967290UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967290UL, 4294967295UL), 4294967290UL, 4294967295UL, 4294967290UL, 4294967295UL);
                        uint32_t l_195 = 4294967286UL;
                        uint32_t l_196 = 0x7A992267L;
                        uint32_t l_197 = 0x24607D91L;
                        uint16_t l_198 = 0x1A70L;
                        int32_t *l_199[1];
                        int32_t *l_200 = (void*)0;
                        int32_t *l_201 = &l_193[2].f8;
                        struct S0 l_202 = {0L,4UL,0UL};/* VOLATILE GLOBAL l_202 */
                        union U6 l_203 = {0xC65725EEL};
                        union U6 l_204 = {4UL};
                        union U6 l_205 = {0UL};
                        VECTOR(int32_t, 4) l_206 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
                        uint64_t l_207 = 0x98844D54A62370B2L;
                        uint16_t l_208 = 0x2A04L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_199[i] = &l_190;
                        l_188 = ((l_187 , 1L) , (void*)0);
                        l_200 = (((l_190 = l_189) , (l_191 , (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x7924034DBA47CB31L, 8L)), 0L, 0x048BA4317E708576L, ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 8))((l_197 |= ((l_195 = (l_192 , (l_193[2] , ((VECTOR(uint32_t, 2))(l_194.s77)).hi))) , l_196)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((-8L), 1L, 1L, 0x48C4EDC7D4696B21L)).lo)).yxyx)), 1L, (-1L), 0L)).s63, (int64_t)0x34273FCD9E7DDAC2L, (int64_t)0x31C9E5FE33B10EE1L))).xyyyyyyx)).s31)).yxxxyxyxyxyxxyyy)).even, ((VECTOR(int64_t, 4))(l_198, 0x7A3A65D18B561D6EL, 0x15C516F006D62DF4L, 1L)).wyywyxwx))))).s64))), ((VECTOR(int64_t, 8))(4L)), (-2L), (-5L))).s3 , 0x13L))) , l_199[0]);
                        l_201 = (void*)0;
                        l_208 = (l_207 ^= ((l_203 = (l_205 = (l_202 , ((l_204 = l_203) , l_205)))) , ((VECTOR(int32_t, 2))(l_206.yw)).lo));
                    }
                }
                for (l_158 = 29; (l_158 == 21); --l_158)
                { /* block id: 114 */
                    VECTOR(int32_t, 4) l_211 = (VECTOR(int32_t, 4))(0x41BE1509L, (VECTOR(int32_t, 2))(0x41BE1509L, (-7L)), (-7L));
                    VECTOR(int32_t, 16) l_212 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                    VECTOR(int32_t, 2) l_213 = (VECTOR(int32_t, 2))(1L, (-10L));
                    VECTOR(int32_t, 2) l_214 = (VECTOR(int32_t, 2))(0x6797F390L, 0L);
                    uint32_t l_215 = 0x773EDEE3L;
                    uint32_t l_216 = 0UL;
                    int32_t l_217 = 0x5608EFB1L;
                    int64_t l_218 = 1L;
                    VECTOR(int32_t, 16) l_219 = (VECTOR(int32_t, 16))(0x4BC2341EL, (VECTOR(int32_t, 4))(0x4BC2341EL, (VECTOR(int32_t, 2))(0x4BC2341EL, 1L), 1L), 1L, 0x4BC2341EL, 1L, (VECTOR(int32_t, 2))(0x4BC2341EL, 1L), (VECTOR(int32_t, 2))(0x4BC2341EL, 1L), 0x4BC2341EL, 1L, 0x4BC2341EL, 1L);
                    VECTOR(int32_t, 2) l_220 = (VECTOR(int32_t, 2))(0x1200FA1EL, 0x111F079EL);
                    VECTOR(int32_t, 4) l_221 = (VECTOR(int32_t, 4))(0x674B6A46L, (VECTOR(int32_t, 2))(0x674B6A46L, 0x358B0D0BL), 0x358B0D0BL);
                    int16_t l_222 = (-8L);
                    VECTOR(int32_t, 4) l_223 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x7B5A121EL), 0x7B5A121EL);
                    VECTOR(uint8_t, 8) l_224 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), 255UL, 0UL, 255UL);
                    VECTOR(uint32_t, 16) l_225 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), 4294967295UL, 0UL, 4294967295UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 0UL, 4294967295UL, 0UL, 4294967295UL);
                    VECTOR(uint32_t, 16) l_226 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint32_t, 2))(1UL, 0UL), (VECTOR(uint32_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
                    int8_t l_227 = (-1L);
                    union U5 l_228[3][7] = {{{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}}},{{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}}},{{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}},{{0x26A3L,0xD7L,0x3A6776AFE39425CAL}}}};
                    struct S2 l_229 = {9UL,1L,0UL,4294967294UL,-5L,0xFB161355L,{7L,0xD02CCC27L,{0L,6UL,0x1F6D0D217EABC095L},0x8E1DL,0x876606C33CF6B19CL,0x53509191L,0x35FB93EAB8D326D1L,4294967295UL,0x5048DAA4L,0x02179823730888E4L},0UL};/* VOLATILE GLOBAL l_229 */
                    uint32_t l_230 = 0UL;
                    uint64_t l_231 = 0x12FACD6FC0DC3151L;
                    uint64_t l_232 = 0x21D5573BACF7F68FL;
                    struct S0 l_233[6] = {{-7L,255UL,0xCB194F73EE0B1472L},{-7L,255UL,0xCB194F73EE0B1472L},{-7L,255UL,0xCB194F73EE0B1472L},{-7L,255UL,0xCB194F73EE0B1472L},{-7L,255UL,0xCB194F73EE0B1472L},{-7L,255UL,0xCB194F73EE0B1472L}};
                    int32_t l_234[4];
                    int32_t l_235 = 0L;
                    uint32_t l_236 = 4294967295UL;
                    uint16_t l_237 = 0x3E0AL;
                    int32_t l_238[7] = {0x6BC25593L,(-9L),0x6BC25593L,0x6BC25593L,(-9L),0x6BC25593L,0x6BC25593L};
                    VECTOR(int32_t, 16) l_239 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x639F5223L), 0x639F5223L), 0x639F5223L, (-1L), 0x639F5223L, (VECTOR(int32_t, 2))((-1L), 0x639F5223L), (VECTOR(int32_t, 2))((-1L), 0x639F5223L), (-1L), 0x639F5223L, (-1L), 0x639F5223L);
                    uint8_t l_240 = 255UL;
                    uint32_t l_241 = 4294967287UL;
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_234[i] = 0x231AFB0EL;
                    if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(l_211.xz)), ((VECTOR(int32_t, 8))(l_212.s02c3c963)).s15))).xyxx, ((VECTOR(int32_t, 16))(l_213.xyyxyxyxxyyyyyxy)).sfc44, ((VECTOR(int32_t, 16))((l_215 = (l_211.x = ((VECTOR(int32_t, 2))(l_214.xy)).lo)), (l_216 , l_217), 0L, 1L, l_218, (-1L), (-3L), 0x35C964AAL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_219.s19d0)).hi)).yyyyyyyy, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(l_220.xxyyyxyxyyxyyxyx)).sb2ae))).wxywxwyy))).s15, ((VECTOR(int32_t, 16))(1L, 0x1CBC9E0DL, (-1L), ((VECTOR(int32_t, 4))(0x468B27A0L, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_221.yy)).yxyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_222, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_223.yyyyxywxyyzzxwwz)).s1, 0x203FE1B8L, 1L, ((VECTOR(int32_t, 4))((l_238[1] = (((VECTOR(uint8_t, 16))(l_224.s7456155210737010)).s0 , (((VECTOR(uint32_t, 8))(9UL, ((VECTOR(uint32_t, 4))(l_225.s129c)), ((VECTOR(uint32_t, 2))(1UL, 4294967295UL)), 0UL)).s3 , (l_237 ^= (((((VECTOR(uint32_t, 8))(l_226.sbdc8bf43)).s2 , (((l_227 , (l_228[2][6] , l_229)) , ((l_231 = (l_230 |= 1L)) , (l_232 , l_233[1]))) , l_234[3])) , l_235) , l_236))))), 0x017CB9F2L, 0x0B818053L, (-1L))), 0x2D6AC200L)).s6611116475365743, (int32_t)l_239.s8))).even)).s3341343753466125, (int32_t)l_240))).s8b, ((VECTOR(int32_t, 2))(0x4D878617L))))).lo, 0x43B92452L, ((VECTOR(int32_t, 4))(0L)), 0x35295905L)).s7366705467270330, ((VECTOR(int32_t, 16))((-6L))), ((VECTOR(int32_t, 16))(0x4349F0A6L))))))).sae48, ((VECTOR(int32_t, 4))(0x7679390FL))))).lo, ((VECTOR(int32_t, 2))(0x14B5F1D5L)), ((VECTOR(int32_t, 2))((-3L)))))).xxxxxxxx)), ((VECTOR(int32_t, 8))(0x08F2CCD2L))))).s75)).xyxyxyxy)).s32, ((VECTOR(int32_t, 2))(0L))))), (-1L))), l_241, ((VECTOR(int32_t, 8))(1L)))).sba))).xyyx)), 0L, ((VECTOR(int32_t, 2))((-1L))), 0x7DF09AB0L)).s1052))).lo)), ((VECTOR(int32_t, 2))(0x4ABFE956L)), ((VECTOR(int32_t, 4))(0x6B75CB66L)))).s1)
                    { /* block id: 121 */
                        uint64_t l_242[9] = {2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL};
                        uint32_t l_243 = 0xD67A6BB6L;
                        union U5 l_244 = {{0x795CL,3UL,18446744073709551610UL}};/* VOLATILE GLOBAL l_244 */
                        uint32_t l_245 = 0xFAD99BF3L;
                        uint64_t l_246 = 7UL;
                        VECTOR(int32_t, 8) l_247 = (VECTOR(int32_t, 8))(0x2B15B341L, (VECTOR(int32_t, 4))(0x2B15B341L, (VECTOR(int32_t, 2))(0x2B15B341L, (-1L)), (-1L)), (-1L), 0x2B15B341L, (-1L));
                        VECTOR(int32_t, 8) l_248 = (VECTOR(int32_t, 8))(0x41FB1205L, (VECTOR(int32_t, 4))(0x41FB1205L, (VECTOR(int32_t, 2))(0x41FB1205L, 0x4A733B53L), 0x4A733B53L), 0x4A733B53L, 0x41FB1205L, 0x4A733B53L);
                        VECTOR(int32_t, 4) l_249 = (VECTOR(int32_t, 4))(0x79965478L, (VECTOR(int32_t, 2))(0x79965478L, 1L), 1L);
                        VECTOR(int32_t, 16) l_250 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 1L), 1L), 1L, 9L, 1L, (VECTOR(int32_t, 2))(9L, 1L), (VECTOR(int32_t, 2))(9L, 1L), 9L, 1L, 9L, 1L);
                        VECTOR(int32_t, 4) l_251 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x26CC64DCL), 0x26CC64DCL);
                        VECTOR(int32_t, 4) l_252 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x73E84B7FL), 0x73E84B7FL);
                        VECTOR(int32_t, 2) l_253 = (VECTOR(int32_t, 2))((-8L), (-10L));
                        VECTOR(int32_t, 16) l_254 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
                        VECTOR(int32_t, 16) l_255 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
                        VECTOR(int32_t, 16) l_256 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x50E5614AL), 0x50E5614AL), 0x50E5614AL, 1L, 0x50E5614AL, (VECTOR(int32_t, 2))(1L, 0x50E5614AL), (VECTOR(int32_t, 2))(1L, 0x50E5614AL), 1L, 0x50E5614AL, 1L, 0x50E5614AL);
                        union U6 l_257 = {0UL};
                        int8_t l_258 = 0L;
                        uint16_t l_259 = 0xBF4AL;
                        int16_t l_260 = 0x6239L;
                        uint8_t l_261[1][10] = {{0xE4L,0xE4L,0xE4L,0xE4L,0xE4L,0xE4L,0xE4L,0xE4L,0xE4L,0xE4L}};
                        VECTOR(int32_t, 4) l_262 = (VECTOR(int32_t, 4))(0x249AC67BL, (VECTOR(int32_t, 2))(0x249AC67BL, 0x53C8734CL), 0x53C8734CL);
                        union U4 l_263[1][5][10] = {{{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}}};
                        union U5 l_264 = {{1L,0x4BL,0x19BC063194C8E7FFL}};/* VOLATILE GLOBAL l_264 */
                        int64_t l_265 = 0x1DF26746A2940855L;
                        uint8_t l_266 = 1UL;
                        uint32_t l_267 = 4294967295UL;
                        uint8_t l_268[10][6] = {{6UL,0x46L,0UL,0x46L,6UL,6UL},{6UL,0x46L,0UL,0x46L,6UL,6UL},{6UL,0x46L,0UL,0x46L,6UL,6UL},{6UL,0x46L,0UL,0x46L,6UL,6UL},{6UL,0x46L,0UL,0x46L,6UL,6UL},{6UL,0x46L,0UL,0x46L,6UL,6UL},{6UL,0x46L,0UL,0x46L,6UL,6UL},{6UL,0x46L,0UL,0x46L,6UL,6UL},{6UL,0x46L,0UL,0x46L,6UL,6UL},{6UL,0x46L,0UL,0x46L,6UL,6UL}};
                        int32_t *l_269 = (void*)0;
                        int32_t *l_270 = (void*)0;
                        int32_t *l_271[10][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                        uint8_t l_272[9][3] = {{0UL,1UL,1UL},{0UL,1UL,1UL},{0UL,1UL,1UL},{0UL,1UL,1UL},{0UL,1UL,1UL},{0UL,1UL,1UL},{0UL,1UL,1UL},{0UL,1UL,1UL},{0UL,1UL,1UL}};
                        int i, j, k;
                        l_229.f6.f8 ^= ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x27F859E7L, ((VECTOR(int32_t, 2))(0x3D1C8521L, 1L)).even, 0L, ((VECTOR(int32_t, 4))((l_243 = l_242[0]), (l_246 = (l_244 , l_245)), (-1L), 0x0691C0B4L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 0x1AB98661L)))).yxxxyxxxxxxyyxyx)).lo)).s75)).even, 0x476CDACCL, (l_220.x = (l_219.s3 = (l_211.y = ((VECTOR(int32_t, 8))(l_247.s41611061)).s4))), 6L, ((VECTOR(int32_t, 2))((-2L), 0x327F99DEL)).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_248.s7346705703422540)).s60)), 0x68864CA1L, 0x4AE1B7B4L)).s22)))).yyyyyxyxxyyxxxxy, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(l_249.xwwxyxwz)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_250.s5d92)).zzxyyxywwzwzzxxx)).s88, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_251.wxyxwzywzxzywxzy)).s5e)).xyxxxyyxyxyxxyxy)).sa6c4, ((VECTOR(int32_t, 2))(0x03492EB2L, 1L)).yxyy))))).even))).xxyyyxxy, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_252.xxxx)).z, ((VECTOR(int32_t, 16))(l_253.yxxxxyyxyyyyxyyy)).sc, 0x4EE4CC71L, (-9L))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_254.s8a)))), 1L, 0x6D6066F4L)))).yzzwxzywxzxywwyw)).s600e)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(0x72002460L, 1L)).yyxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 1L)).xxyy)))))))))).xxzwwzwx))).s0226717634074322)).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_255.s12af)), (-1L), ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 2))(l_256.s70)).yxyyxxxy, (int32_t)(l_257 , l_258), (int32_t)((l_213.x = l_259) , l_260)))).s7, 0x44CB75A3L, 0x7A77A25AL, (-7L), ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(l_261[0][9], ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(4L, 0x7E97366CL, ((VECTOR(int32_t, 8))(l_262.wwxyzywz)), ((l_263[0][2][6] , l_264) , l_265), ((VECTOR(int32_t, 2))(5L)), 0x24934287L, 1L, 2L)).even, ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))(0x25278A2FL))))).s36, ((VECTOR(int32_t, 2))(0x742F48DAL))))).yyxxyyxxxxyyxyxy)).hi)).s71, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0x7D9D8ADDL))))).yxyyxyxx)), (-8L), (-7L), (-3L), 4L, ((VECTOR(int32_t, 2))(2L)), (-3L))).odd, ((VECTOR(int32_t, 8))(0x32F8F7E6L))))).s1, 0x2C2437B8L, 0x0267DA74L, l_266, l_267, 0x5DFC2707L, 0x05D4C12DL, ((VECTOR(int32_t, 2))(0x2672867EL)), l_268[1][1], 0x1EDEA32FL, 0L)).sf19c)).yyxyxzyz, ((VECTOR(int32_t, 8))(0x428E9D31L))))).s7, 0L, 0L, ((VECTOR(int32_t, 2))(0x599AB853L)), 0x714CB2E0L, ((VECTOR(int32_t, 4))(0x0F213D79L)), (-8L))).hi))).s7303054020215363))).s2;
                        l_271[4][1] = (l_270 = l_269);
                        l_214.x |= (l_229.f6.f8 = 0x564D94ACL);
                        l_221.y = l_272[5][1];
                    }
                    else
                    { /* block id: 134 */
                        struct S2 l_273 = {0UL,1L,0xD8EE51C5L,0x4BEFF6F1L,-10L,1UL,{2L,2UL,{0x6678L,255UL,0xED22A2BCF5824F43L},0x2A0EL,0x83F6BCE999EBE10AL,-9L,0x230CD1E362D200BDL,1UL,0x0224942BL,0x4F6B617320914B85L},1UL};/* VOLATILE GLOBAL l_273 */
                        uint32_t l_274 = 0x0D3A76F4L;
                        l_229 = l_273;
                        --l_274;
                    }
                    l_211.z = ((VECTOR(int32_t, 2))((-7L), 0x09FCEF07L)).odd;
                    for (l_231 = 28; (l_231 > 23); l_231--)
                    { /* block id: 141 */
                        uint64_t l_279 = 0xF68868C3DF0D1874L;
                        int64_t l_280 = (-6L);
                        l_280 &= l_279;
                    }
                    for (l_230 = 13; (l_230 < 46); ++l_230)
                    { /* block id: 146 */
                        int32_t l_283 = (-7L);
                        l_283 = l_283;
                    }
                }
            }
            --l_285;
        }
        if (l_288)
        { /* block id: 153 */
            int32_t l_289 = 0L;
            struct S2 l_310[3][8] = {{{0xE396BB49L,0x6F1CAE3E673C8E27L,7UL,0x1DDC988CL,0x249BL,0xB3E40B87L,{-1L,4294967293UL,{9L,0UL,1UL},65535UL,0xFA95DB249513B74CL,0x303E1229L,-2L,8UL,5L,0x554E0264B7174BC4L},1UL},{1UL,0x2659EDAC41D2F0A7L,0x75E1975DL,0x9FEEB1A5L,0x1B3CL,0UL,{-1L,1UL,{-3L,0x83L,18446744073709551615UL},65529UL,1UL,0x37EC118FL,3L,0xBCCE2CAFL,0x6CDC36DCL,18446744073709551608UL},7UL},{0xE396BB49L,0x6F1CAE3E673C8E27L,7UL,0x1DDC988CL,0x249BL,0xB3E40B87L,{-1L,4294967293UL,{9L,0UL,1UL},65535UL,0xFA95DB249513B74CL,0x303E1229L,-2L,8UL,5L,0x554E0264B7174BC4L},1UL},{0xE396BB49L,0x6F1CAE3E673C8E27L,7UL,0x1DDC988CL,0x249BL,0xB3E40B87L,{-1L,4294967293UL,{9L,0UL,1UL},65535UL,0xFA95DB249513B74CL,0x303E1229L,-2L,8UL,5L,0x554E0264B7174BC4L},1UL},{1UL,0x2659EDAC41D2F0A7L,0x75E1975DL,0x9FEEB1A5L,0x1B3CL,0UL,{-1L,1UL,{-3L,0x83L,18446744073709551615UL},65529UL,1UL,0x37EC118FL,3L,0xBCCE2CAFL,0x6CDC36DCL,18446744073709551608UL},7UL},{0xE396BB49L,0x6F1CAE3E673C8E27L,7UL,0x1DDC988CL,0x249BL,0xB3E40B87L,{-1L,4294967293UL,{9L,0UL,1UL},65535UL,0xFA95DB249513B74CL,0x303E1229L,-2L,8UL,5L,0x554E0264B7174BC4L},1UL},{0xE396BB49L,0x6F1CAE3E673C8E27L,7UL,0x1DDC988CL,0x249BL,0xB3E40B87L,{-1L,4294967293UL,{9L,0UL,1UL},65535UL,0xFA95DB249513B74CL,0x303E1229L,-2L,8UL,5L,0x554E0264B7174BC4L},1UL},{1UL,0x2659EDAC41D2F0A7L,0x75E1975DL,0x9FEEB1A5L,0x1B3CL,0UL,{-1L,1UL,{-3L,0x83L,18446744073709551615UL},65529UL,1UL,0x37EC118FL,3L,0xBCCE2CAFL,0x6CDC36DCL,18446744073709551608UL},7UL}},{{0xE396BB49L,0x6F1CAE3E673C8E27L,7UL,0x1DDC988CL,0x249BL,0xB3E40B87L,{-1L,4294967293UL,{9L,0UL,1UL},65535UL,0xFA95DB249513B74CL,0x303E1229L,-2L,8UL,5L,0x554E0264B7174BC4L},1UL},{1UL,0x2659EDAC41D2F0A7L,0x75E1975DL,0x9FEEB1A5L,0x1B3CL,0UL,{-1L,1UL,{-3L,0x83L,18446744073709551615UL},65529UL,1UL,0x37EC118FL,3L,0xBCCE2CAFL,0x6CDC36DCL,18446744073709551608UL},7UL},{0xE396BB49L,0x6F1CAE3E673C8E27L,7UL,0x1DDC988CL,0x249BL,0xB3E40B87L,{-1L,4294967293UL,{9L,0UL,1UL},65535UL,0xFA95DB249513B74CL,0x303E1229L,-2L,8UL,5L,0x554E0264B7174BC4L},1UL},{0xE396BB49L,0x6F1CAE3E673C8E27L,7UL,0x1DDC988CL,0x249BL,0xB3E40B87L,{-1L,4294967293UL,{9L,0UL,1UL},65535UL,0xFA95DB249513B74CL,0x303E1229L,-2L,8UL,5L,0x554E0264B7174BC4L},1UL},{1UL,0x2659EDAC41D2F0A7L,0x75E1975DL,0x9FEEB1A5L,0x1B3CL,0UL,{-1L,1UL,{-3L,0x83L,18446744073709551615UL},65529UL,1UL,0x37EC118FL,3L,0xBCCE2CAFL,0x6CDC36DCL,18446744073709551608UL},7UL},{0xE396BB49L,0x6F1CAE3E673C8E27L,7UL,0x1DDC988CL,0x249BL,0xB3E40B87L,{-1L,4294967293UL,{9L,0UL,1UL},65535UL,0xFA95DB249513B74CL,0x303E1229L,-2L,8UL,5L,0x554E0264B7174BC4L},1UL},{0xE396BB49L,0x6F1CAE3E673C8E27L,7UL,0x1DDC988CL,0x249BL,0xB3E40B87L,{-1L,4294967293UL,{9L,0UL,1UL},65535UL,0xFA95DB249513B74CL,0x303E1229L,-2L,8UL,5L,0x554E0264B7174BC4L},1UL},{1UL,0x2659EDAC41D2F0A7L,0x75E1975DL,0x9FEEB1A5L,0x1B3CL,0UL,{-1L,1UL,{-3L,0x83L,18446744073709551615UL},65529UL,1UL,0x37EC118FL,3L,0xBCCE2CAFL,0x6CDC36DCL,18446744073709551608UL},7UL}},{{0xE396BB49L,0x6F1CAE3E673C8E27L,7UL,0x1DDC988CL,0x249BL,0xB3E40B87L,{-1L,4294967293UL,{9L,0UL,1UL},65535UL,0xFA95DB249513B74CL,0x303E1229L,-2L,8UL,5L,0x554E0264B7174BC4L},1UL},{1UL,0x2659EDAC41D2F0A7L,0x75E1975DL,0x9FEEB1A5L,0x1B3CL,0UL,{-1L,1UL,{-3L,0x83L,18446744073709551615UL},65529UL,1UL,0x37EC118FL,3L,0xBCCE2CAFL,0x6CDC36DCL,18446744073709551608UL},7UL},{0xE396BB49L,0x6F1CAE3E673C8E27L,7UL,0x1DDC988CL,0x249BL,0xB3E40B87L,{-1L,4294967293UL,{9L,0UL,1UL},65535UL,0xFA95DB249513B74CL,0x303E1229L,-2L,8UL,5L,0x554E0264B7174BC4L},1UL},{0xE396BB49L,0x6F1CAE3E673C8E27L,7UL,0x1DDC988CL,0x249BL,0xB3E40B87L,{-1L,4294967293UL,{9L,0UL,1UL},65535UL,0xFA95DB249513B74CL,0x303E1229L,-2L,8UL,5L,0x554E0264B7174BC4L},1UL},{1UL,0x2659EDAC41D2F0A7L,0x75E1975DL,0x9FEEB1A5L,0x1B3CL,0UL,{-1L,1UL,{-3L,0x83L,18446744073709551615UL},65529UL,1UL,0x37EC118FL,3L,0xBCCE2CAFL,0x6CDC36DCL,18446744073709551608UL},7UL},{0xE396BB49L,0x6F1CAE3E673C8E27L,7UL,0x1DDC988CL,0x249BL,0xB3E40B87L,{-1L,4294967293UL,{9L,0UL,1UL},65535UL,0xFA95DB249513B74CL,0x303E1229L,-2L,8UL,5L,0x554E0264B7174BC4L},1UL},{0xE396BB49L,0x6F1CAE3E673C8E27L,7UL,0x1DDC988CL,0x249BL,0xB3E40B87L,{-1L,4294967293UL,{9L,0UL,1UL},65535UL,0xFA95DB249513B74CL,0x303E1229L,-2L,8UL,5L,0x554E0264B7174BC4L},1UL},{1UL,0x2659EDAC41D2F0A7L,0x75E1975DL,0x9FEEB1A5L,0x1B3CL,0UL,{-1L,1UL,{-3L,0x83L,18446744073709551615UL},65529UL,1UL,0x37EC118FL,3L,0xBCCE2CAFL,0x6CDC36DCL,18446744073709551608UL},7UL}}};
            struct S2 *l_309[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            struct S2 *l_311 = &l_310[0][4];
            uint32_t l_312 = 0x72A79D60L;
            int32_t l_313 = 0x633AE3DAL;
            int i, j;
            for (l_289 = 22; (l_289 > (-9)); --l_289)
            { /* block id: 156 */
                int32_t l_292[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_292[i] = 0x3BA02064L;
                l_75 ^= 1L;
                l_75 &= 0x59F5103AL;
                for (l_292[1] = 20; (l_292[1] == 27); ++l_292[1])
                { /* block id: 161 */
                    uint8_t l_295 = 0xC6L;
                    union U3 l_298 = {0};/* VOLATILE GLOBAL l_298 */
                    int32_t *l_299 = &l_298.f2.f8;
                    uint64_t l_300 = 0xB4BBBE6DD32B8167L;
                    l_295--;
                    l_299 = (l_298 , (void*)0);
                    if ((l_75 = l_300))
                    { /* block id: 165 */
                        union U5 l_301 = {{1L,246UL,0x024130CED23C342EL}};/* VOLATILE GLOBAL l_301 */
                        struct S2 l_303 = {0x7CCD2810L,0L,0xC474B8D6L,0xC7CFEDC1L,0x659EL,3UL,{-6L,4294967293UL,{0x5136L,0xB3L,18446744073709551614UL},0xEF8AL,0x1724CF205C796044L,0x4670791FL,0x43280F156B2362DCL,0x8CFB7E95L,-6L,7UL},2UL};/* VOLATILE GLOBAL l_303 */
                        struct S2 *l_302 = &l_303;
                        struct S2 *l_304[2];
                        struct S2 *l_305 = &l_303;
                        struct S2 l_306 = {8UL,0x08BD3E0D62B8F4BFL,1UL,0xBE36C76AL,0x7E3FL,1UL,{0x0C66CDE4A85ADF76L,0x661E04C2L,{1L,0x2CL,0xCDDD93D23FBD7917L},0x957AL,0x9C11E29855776FC0L,8L,-1L,4294967292UL,0x7083E0E3L,2UL},65535UL};/* VOLATILE GLOBAL l_306 */
                        int32_t *l_307 = &l_306.f6.f8;
                        uint32_t l_308 = 4294967295UL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_304[i] = &l_303;
                        l_305 = (l_301 , (l_304[1] = l_302));
                        l_299 = (l_306 , l_307);
                        l_308 |= ((*l_299) &= (-4L));
                        l_75 = (l_298.f2.f8 = ((*l_299) = (-1L)));
                    }
                    else
                    { /* block id: 174 */
                        l_75 &= 9L;
                    }
                }
            }
            l_311 = l_309[5];
            l_75 ^= l_312;
            l_313 = (l_75 &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x02DA0436L, (-7L))))).lo);
        }
        else
        { /* block id: 183 */
            int32_t l_314 = 0x4AAAF882L;
            for (l_314 = 23; (l_314 >= (-14)); l_314 = safe_sub_func_uint8_t_u_u(l_314, 4))
            { /* block id: 186 */
                int64_t l_317 = 0x327D551FBB733201L;
                VECTOR(int32_t, 4) l_318 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-10L)), (-10L));
                int16_t l_319 = 0x05AEL;
                int i;
                l_317 = (-1L);
                l_75 = ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(l_318.zx)).xxxyxyyxxyyxxyyx))).s5;
                if (l_319)
                { /* block id: 189 */
                    int32_t l_320 = 0x452DA981L;
                    uint64_t l_332[4][10] = {{0x83DF086F0F9B321AL,0xAD671444BBD445AFL,9UL,18446744073709551615UL,9UL,0xAD671444BBD445AFL,0x83DF086F0F9B321AL,1UL,0x3362CA9CE9B3E6EBL,0x3362CA9CE9B3E6EBL},{0x83DF086F0F9B321AL,0xAD671444BBD445AFL,9UL,18446744073709551615UL,9UL,0xAD671444BBD445AFL,0x83DF086F0F9B321AL,1UL,0x3362CA9CE9B3E6EBL,0x3362CA9CE9B3E6EBL},{0x83DF086F0F9B321AL,0xAD671444BBD445AFL,9UL,18446744073709551615UL,9UL,0xAD671444BBD445AFL,0x83DF086F0F9B321AL,1UL,0x3362CA9CE9B3E6EBL,0x3362CA9CE9B3E6EBL},{0x83DF086F0F9B321AL,0xAD671444BBD445AFL,9UL,18446744073709551615UL,9UL,0xAD671444BBD445AFL,0x83DF086F0F9B321AL,1UL,0x3362CA9CE9B3E6EBL,0x3362CA9CE9B3E6EBL}};
                    int i, j;
                    for (l_320 = 0; (l_320 >= (-29)); l_320 = safe_sub_func_uint8_t_u_u(l_320, 1))
                    { /* block id: 192 */
                        uint64_t l_323 = 0xDCFFBF41D3029490L;
                        uint32_t l_326 = 4294967295UL;
                        int32_t l_330[2][4] = {{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)}};
                        int32_t *l_329[1][9][4] = {{{&l_330[0][0],&l_330[0][0],&l_330[0][0],&l_330[0][0]},{&l_330[0][0],&l_330[0][0],&l_330[0][0],&l_330[0][0]},{&l_330[0][0],&l_330[0][0],&l_330[0][0],&l_330[0][0]},{&l_330[0][0],&l_330[0][0],&l_330[0][0],&l_330[0][0]},{&l_330[0][0],&l_330[0][0],&l_330[0][0],&l_330[0][0]},{&l_330[0][0],&l_330[0][0],&l_330[0][0],&l_330[0][0]},{&l_330[0][0],&l_330[0][0],&l_330[0][0],&l_330[0][0]},{&l_330[0][0],&l_330[0][0],&l_330[0][0],&l_330[0][0]},{&l_330[0][0],&l_330[0][0],&l_330[0][0],&l_330[0][0]}}};
                        int32_t *l_331 = &l_330[0][0];
                        int i, j, k;
                        l_323--;
                        l_326++;
                        l_75 = (l_318.y ^= 0x21E2ACB7L);
                        l_331 = l_329[0][1][0];
                    }
                    l_318.y |= (-1L);
                    --l_332[0][8];
                }
                else
                { /* block id: 201 */
                    int32_t *l_335 = (void*)0;
                    int32_t l_337[6][9][3] = {{{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L}},{{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L}},{{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L}},{{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L}},{{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L}},{{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L},{0x50B85E18L,0x50B85E18L,0x0E57E910L}}};
                    int32_t *l_336 = &l_337[3][7][2];
                    int16_t l_338 = (-10L);
                    int16_t l_339 = 1L;
                    int64_t l_340 = 0x1E0575497174C5CFL;
                    int64_t l_341 = 0x3DEB58F4B5DFF840L;
                    int32_t l_342 = 0x4C8518E5L;
                    uint8_t l_343 = 0xB3L;
                    int i, j, k;
                    l_336 = l_335;
                    --l_343;
                    for (l_339 = 8; (l_339 >= 21); l_339++)
                    { /* block id: 206 */
                        int16_t l_348 = (-2L);
                        l_335 = (void*)0;
                        l_318.x = l_348;
                    }
                }
            }
        }
        unsigned int result = 0;
        result += l_75;
        result += l_288;
        atomic_add(&p_727->g_special_values[11 * get_linear_group_id() + 8], result);
    }
    else
    { /* block id: 213 */
        (1 + 1);
    }
    return &p_727->g_30;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[13];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 13; i++)
            l_comm_values[i] = 1;
    struct S7 c_728;
    struct S7* p_727 = &c_728;
    struct S7 c_729 = {
        9L, // p_727->g_7
        1L, // p_727->g_9
        0x6712L, // p_727->g_11
        {0}, // p_727->g_30
        {0}, // p_727->g_50
        &p_727->g_50, // p_727->g_49
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_727->g_48
        {4294967295UL}, // p_727->g_64
        0x73E6L, // p_727->g_66
        0UL, // p_727->g_69
        {0UL,0x728F0E43DA7D8E2DL,4294967292UL,0x6A86E60EL,-9L,0UL,{0x6CCC853D3C4855F0L,0UL,{0x7E6EL,255UL,0xAA8C97D735F31A33L},0UL,0x361F882D77871239L,0x759721CBL,0x750F898D4ED1E225L,0x7922C1E9L,0x00CE5FA5L,0UL},0xBFDBL}, // p_727->g_73
        &p_727->g_50.f1, // p_727->g_74
        {0xF3982312BEA5F64CL}, // p_727->g_349
        &p_727->g_30.f1.f6.f8, // p_727->g_352
        &p_727->g_7, // p_727->g_363
        &p_727->g_363, // p_727->g_362
        {{{0x34E2L,0UL,0UL}},{{0x34E2L,0UL,0UL}},{{0x34E2L,0UL,0UL}}}, // p_727->g_365
        {0x36A92AA2L,0x3F103C5FEE60ADF7L,4294967295UL,0x0E411EFFL,0x26BAL,4294967286UL,{0x4C8AE57ECF6DC530L,0x706E7EBCL,{-1L,1UL,0x5B9237BF76D025A6L},0x32AEL,18446744073709551615UL,0x6596CF20L,0L,0x1F12AEC7L,0x654CC02CL,6UL},65529UL}, // p_727->g_373
        0xAAL, // p_727->g_375
        {0}, // p_727->g_378
        &p_727->g_69, // p_727->g_383
        &p_727->g_30, // p_727->g_385
        {1L,5UL,{1L,2UL,18446744073709551607UL},0xE91CL,6UL,0x72055626L,0x7CF2B3E526E3349AL,0UL,-3L,0x284EDE8DD4FD84C8L}, // p_727->g_386
        {0x6E0D96C5L}, // p_727->g_390
        (-10L), // p_727->g_391
        0x481F43A8L, // p_727->g_397
        0x2D91F824CC4A7248L, // p_727->g_401
        (void*)0, // p_727->g_411
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), 1UL, 4294967295UL, 1UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 4294967295UL, 1UL, 4294967295UL, 1UL), // p_727->g_414
        (VECTOR(uint32_t, 2))(0x202752DBL, 0x7DBCFA83L), // p_727->g_418
        0x5F87C6A1L, // p_727->g_442
        {0}, // p_727->g_487
        0x2AB6BA77L, // p_727->g_497
        (-3L), // p_727->g_499
        &p_727->g_390, // p_727->g_507
        {{0x777FL,0x13L,0x3A429845AC08C4E5L}}, // p_727->g_508
        &p_727->g_352, // p_727->g_512
        &p_727->g_411, // p_727->g_520
        0x6CF835F7E6944D10L, // p_727->g_532
        {&p_727->g_378.f1.f6.f8,&p_727->g_378.f1.f6.f8,&p_727->g_378.f1.f6.f8,&p_727->g_378.f1.f6.f8,&p_727->g_378.f1.f6.f8,&p_727->g_378.f1.f6.f8,&p_727->g_378.f1.f6.f8,&p_727->g_378.f1.f6.f8}, // p_727->g_553
        &p_727->g_378.f1, // p_727->g_555
        (void*)0, // p_727->g_582
        &p_727->g_507, // p_727->g_583
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-7L)), (-7L)), (-7L), 0L, (-7L)), // p_727->g_595
        (VECTOR(int8_t, 4))(0x1AL, (VECTOR(int8_t, 2))(0x1AL, 0x7CL), 0x7CL), // p_727->g_627
        (VECTOR(uint8_t, 2))(0xDBL, 0x1CL), // p_727->g_634
        0x43C7L, // p_727->g_638
        (VECTOR(int8_t, 2))(0x2EL, (-1L)), // p_727->g_649
        (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 255UL), 255UL), // p_727->g_650
        (VECTOR(uint8_t, 16))(0xF7L, (VECTOR(uint8_t, 4))(0xF7L, (VECTOR(uint8_t, 2))(0xF7L, 255UL), 255UL), 255UL, 0xF7L, 255UL, (VECTOR(uint8_t, 2))(0xF7L, 255UL), (VECTOR(uint8_t, 2))(0xF7L, 255UL), 0xF7L, 255UL, 0xF7L, 255UL), // p_727->g_655
        (VECTOR(uint8_t, 2))(8UL, 0x64L), // p_727->g_656
        (VECTOR(int64_t, 8))(0x16172FB055578924L, (VECTOR(int64_t, 4))(0x16172FB055578924L, (VECTOR(int64_t, 2))(0x16172FB055578924L, 0x6FF06A038EFAA17EL), 0x6FF06A038EFAA17EL), 0x6FF06A038EFAA17EL, 0x16172FB055578924L, 0x6FF06A038EFAA17EL), // p_727->g_659
        (VECTOR(int64_t, 8))(0x10279B1DB0D11090L, (VECTOR(int64_t, 4))(0x10279B1DB0D11090L, (VECTOR(int64_t, 2))(0x10279B1DB0D11090L, 0x5719819B916DE902L), 0x5719819B916DE902L), 0x5719819B916DE902L, 0x10279B1DB0D11090L, 0x5719819B916DE902L), // p_727->g_660
        &p_727->g_386.f6, // p_727->g_663
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-7L)), (-7L)), // p_727->g_670
        {{{{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}}},{{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}},{{0x1181L,0xB1L,0x85D8729FB320D609L}}}}}, // p_727->g_673
        (VECTOR(int8_t, 16))(0x0DL, (VECTOR(int8_t, 4))(0x0DL, (VECTOR(int8_t, 2))(0x0DL, 1L), 1L), 1L, 0x0DL, 1L, (VECTOR(int8_t, 2))(0x0DL, 1L), (VECTOR(int8_t, 2))(0x0DL, 1L), 0x0DL, 1L, 0x0DL, 1L), // p_727->g_692
        {0x7126CDEAL,-1L,0xFF174ED5L,0xE5C793D5L,0x1C80L,0x8C7D5273L,{8L,4294967295UL,{0x39C8L,255UL,0UL},0UL,0x5F54CD28BB97B472L,0L,0x6797AE80537A340DL,0UL,0x61A898D8L,3UL},65535UL}, // p_727->g_696
        {0}, // p_727->g_705
        &p_727->g_365[0].f1, // p_727->g_709
        {0x28FF9204L,0x28FF9204L,0x28FF9204L,0x28FF9204L,0x28FF9204L}, // p_727->g_723
        (VECTOR(uint8_t, 16))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 9UL), 9UL), 9UL, 5UL, 9UL, (VECTOR(uint8_t, 2))(5UL, 9UL), (VECTOR(uint8_t, 2))(5UL, 9UL), 5UL, 9UL, 5UL, 9UL), // p_727->g_726
        0, // p_727->v_collective
        sequence_input[get_global_id(0)], // p_727->global_0_offset
        sequence_input[get_global_id(1)], // p_727->global_1_offset
        sequence_input[get_global_id(2)], // p_727->global_2_offset
        sequence_input[get_local_id(0)], // p_727->local_0_offset
        sequence_input[get_local_id(1)], // p_727->local_1_offset
        sequence_input[get_local_id(2)], // p_727->local_2_offset
        sequence_input[get_group_id(0)], // p_727->group_0_offset
        sequence_input[get_group_id(1)], // p_727->group_1_offset
        sequence_input[get_group_id(2)], // p_727->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 13)), permutations[0][get_linear_local_id()])), // p_727->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_728 = c_729;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_727);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_727->g_7, "p_727->g_7", print_hash_value);
    transparent_crc(p_727->g_9, "p_727->g_9", print_hash_value);
    transparent_crc(p_727->g_11, "p_727->g_11", print_hash_value);
    transparent_crc(p_727->g_64.f0, "p_727->g_64.f0", print_hash_value);
    transparent_crc(p_727->g_66, "p_727->g_66", print_hash_value);
    transparent_crc(p_727->g_69, "p_727->g_69", print_hash_value);
    transparent_crc(p_727->g_73.f0, "p_727->g_73.f0", print_hash_value);
    transparent_crc(p_727->g_73.f1, "p_727->g_73.f1", print_hash_value);
    transparent_crc(p_727->g_73.f2, "p_727->g_73.f2", print_hash_value);
    transparent_crc(p_727->g_73.f3, "p_727->g_73.f3", print_hash_value);
    transparent_crc(p_727->g_73.f4, "p_727->g_73.f4", print_hash_value);
    transparent_crc(p_727->g_73.f5, "p_727->g_73.f5", print_hash_value);
    transparent_crc(p_727->g_73.f6.f0, "p_727->g_73.f6.f0", print_hash_value);
    transparent_crc(p_727->g_73.f6.f1, "p_727->g_73.f6.f1", print_hash_value);
    transparent_crc(p_727->g_73.f6.f2.f0, "p_727->g_73.f6.f2.f0", print_hash_value);
    transparent_crc(p_727->g_73.f6.f2.f1, "p_727->g_73.f6.f2.f1", print_hash_value);
    transparent_crc(p_727->g_73.f6.f2.f2, "p_727->g_73.f6.f2.f2", print_hash_value);
    transparent_crc(p_727->g_73.f6.f3, "p_727->g_73.f6.f3", print_hash_value);
    transparent_crc(p_727->g_73.f6.f4, "p_727->g_73.f6.f4", print_hash_value);
    transparent_crc(p_727->g_73.f6.f5, "p_727->g_73.f6.f5", print_hash_value);
    transparent_crc(p_727->g_73.f6.f6, "p_727->g_73.f6.f6", print_hash_value);
    transparent_crc(p_727->g_73.f6.f7, "p_727->g_73.f6.f7", print_hash_value);
    transparent_crc(p_727->g_73.f6.f8, "p_727->g_73.f6.f8", print_hash_value);
    transparent_crc(p_727->g_73.f6.f9, "p_727->g_73.f6.f9", print_hash_value);
    transparent_crc(p_727->g_73.f7, "p_727->g_73.f7", print_hash_value);
    transparent_crc(p_727->g_349.f0, "p_727->g_349.f0", print_hash_value);
    transparent_crc(p_727->g_373.f0, "p_727->g_373.f0", print_hash_value);
    transparent_crc(p_727->g_373.f1, "p_727->g_373.f1", print_hash_value);
    transparent_crc(p_727->g_373.f2, "p_727->g_373.f2", print_hash_value);
    transparent_crc(p_727->g_373.f3, "p_727->g_373.f3", print_hash_value);
    transparent_crc(p_727->g_373.f4, "p_727->g_373.f4", print_hash_value);
    transparent_crc(p_727->g_373.f5, "p_727->g_373.f5", print_hash_value);
    transparent_crc(p_727->g_373.f6.f0, "p_727->g_373.f6.f0", print_hash_value);
    transparent_crc(p_727->g_373.f6.f1, "p_727->g_373.f6.f1", print_hash_value);
    transparent_crc(p_727->g_373.f6.f2.f0, "p_727->g_373.f6.f2.f0", print_hash_value);
    transparent_crc(p_727->g_373.f6.f2.f1, "p_727->g_373.f6.f2.f1", print_hash_value);
    transparent_crc(p_727->g_373.f6.f2.f2, "p_727->g_373.f6.f2.f2", print_hash_value);
    transparent_crc(p_727->g_373.f6.f3, "p_727->g_373.f6.f3", print_hash_value);
    transparent_crc(p_727->g_373.f6.f4, "p_727->g_373.f6.f4", print_hash_value);
    transparent_crc(p_727->g_373.f6.f5, "p_727->g_373.f6.f5", print_hash_value);
    transparent_crc(p_727->g_373.f6.f6, "p_727->g_373.f6.f6", print_hash_value);
    transparent_crc(p_727->g_373.f6.f7, "p_727->g_373.f6.f7", print_hash_value);
    transparent_crc(p_727->g_373.f6.f8, "p_727->g_373.f6.f8", print_hash_value);
    transparent_crc(p_727->g_373.f6.f9, "p_727->g_373.f6.f9", print_hash_value);
    transparent_crc(p_727->g_373.f7, "p_727->g_373.f7", print_hash_value);
    transparent_crc(p_727->g_375, "p_727->g_375", print_hash_value);
    transparent_crc(p_727->g_386.f0, "p_727->g_386.f0", print_hash_value);
    transparent_crc(p_727->g_386.f1, "p_727->g_386.f1", print_hash_value);
    transparent_crc(p_727->g_386.f2.f0, "p_727->g_386.f2.f0", print_hash_value);
    transparent_crc(p_727->g_386.f2.f1, "p_727->g_386.f2.f1", print_hash_value);
    transparent_crc(p_727->g_386.f2.f2, "p_727->g_386.f2.f2", print_hash_value);
    transparent_crc(p_727->g_386.f3, "p_727->g_386.f3", print_hash_value);
    transparent_crc(p_727->g_386.f4, "p_727->g_386.f4", print_hash_value);
    transparent_crc(p_727->g_386.f5, "p_727->g_386.f5", print_hash_value);
    transparent_crc(p_727->g_386.f6, "p_727->g_386.f6", print_hash_value);
    transparent_crc(p_727->g_386.f7, "p_727->g_386.f7", print_hash_value);
    transparent_crc(p_727->g_386.f8, "p_727->g_386.f8", print_hash_value);
    transparent_crc(p_727->g_386.f9, "p_727->g_386.f9", print_hash_value);
    transparent_crc(p_727->g_390.f0, "p_727->g_390.f0", print_hash_value);
    transparent_crc(p_727->g_391, "p_727->g_391", print_hash_value);
    transparent_crc(p_727->g_397, "p_727->g_397", print_hash_value);
    transparent_crc(p_727->g_401, "p_727->g_401", print_hash_value);
    transparent_crc(p_727->g_414.s0, "p_727->g_414.s0", print_hash_value);
    transparent_crc(p_727->g_414.s1, "p_727->g_414.s1", print_hash_value);
    transparent_crc(p_727->g_414.s2, "p_727->g_414.s2", print_hash_value);
    transparent_crc(p_727->g_414.s3, "p_727->g_414.s3", print_hash_value);
    transparent_crc(p_727->g_414.s4, "p_727->g_414.s4", print_hash_value);
    transparent_crc(p_727->g_414.s5, "p_727->g_414.s5", print_hash_value);
    transparent_crc(p_727->g_414.s6, "p_727->g_414.s6", print_hash_value);
    transparent_crc(p_727->g_414.s7, "p_727->g_414.s7", print_hash_value);
    transparent_crc(p_727->g_414.s8, "p_727->g_414.s8", print_hash_value);
    transparent_crc(p_727->g_414.s9, "p_727->g_414.s9", print_hash_value);
    transparent_crc(p_727->g_414.sa, "p_727->g_414.sa", print_hash_value);
    transparent_crc(p_727->g_414.sb, "p_727->g_414.sb", print_hash_value);
    transparent_crc(p_727->g_414.sc, "p_727->g_414.sc", print_hash_value);
    transparent_crc(p_727->g_414.sd, "p_727->g_414.sd", print_hash_value);
    transparent_crc(p_727->g_414.se, "p_727->g_414.se", print_hash_value);
    transparent_crc(p_727->g_414.sf, "p_727->g_414.sf", print_hash_value);
    transparent_crc(p_727->g_418.x, "p_727->g_418.x", print_hash_value);
    transparent_crc(p_727->g_418.y, "p_727->g_418.y", print_hash_value);
    transparent_crc(p_727->g_442, "p_727->g_442", print_hash_value);
    transparent_crc(p_727->g_497, "p_727->g_497", print_hash_value);
    transparent_crc(p_727->g_499, "p_727->g_499", print_hash_value);
    transparent_crc(p_727->g_508.f0.f0, "p_727->g_508.f0.f0", print_hash_value);
    transparent_crc(p_727->g_508.f0.f1, "p_727->g_508.f0.f1", print_hash_value);
    transparent_crc(p_727->g_508.f0.f2, "p_727->g_508.f0.f2", print_hash_value);
    transparent_crc(p_727->g_532, "p_727->g_532", print_hash_value);
    transparent_crc(p_727->g_595.s0, "p_727->g_595.s0", print_hash_value);
    transparent_crc(p_727->g_595.s1, "p_727->g_595.s1", print_hash_value);
    transparent_crc(p_727->g_595.s2, "p_727->g_595.s2", print_hash_value);
    transparent_crc(p_727->g_595.s3, "p_727->g_595.s3", print_hash_value);
    transparent_crc(p_727->g_595.s4, "p_727->g_595.s4", print_hash_value);
    transparent_crc(p_727->g_595.s5, "p_727->g_595.s5", print_hash_value);
    transparent_crc(p_727->g_595.s6, "p_727->g_595.s6", print_hash_value);
    transparent_crc(p_727->g_595.s7, "p_727->g_595.s7", print_hash_value);
    transparent_crc(p_727->g_627.x, "p_727->g_627.x", print_hash_value);
    transparent_crc(p_727->g_627.y, "p_727->g_627.y", print_hash_value);
    transparent_crc(p_727->g_627.z, "p_727->g_627.z", print_hash_value);
    transparent_crc(p_727->g_627.w, "p_727->g_627.w", print_hash_value);
    transparent_crc(p_727->g_634.x, "p_727->g_634.x", print_hash_value);
    transparent_crc(p_727->g_634.y, "p_727->g_634.y", print_hash_value);
    transparent_crc(p_727->g_638, "p_727->g_638", print_hash_value);
    transparent_crc(p_727->g_649.x, "p_727->g_649.x", print_hash_value);
    transparent_crc(p_727->g_649.y, "p_727->g_649.y", print_hash_value);
    transparent_crc(p_727->g_650.x, "p_727->g_650.x", print_hash_value);
    transparent_crc(p_727->g_650.y, "p_727->g_650.y", print_hash_value);
    transparent_crc(p_727->g_650.z, "p_727->g_650.z", print_hash_value);
    transparent_crc(p_727->g_650.w, "p_727->g_650.w", print_hash_value);
    transparent_crc(p_727->g_655.s0, "p_727->g_655.s0", print_hash_value);
    transparent_crc(p_727->g_655.s1, "p_727->g_655.s1", print_hash_value);
    transparent_crc(p_727->g_655.s2, "p_727->g_655.s2", print_hash_value);
    transparent_crc(p_727->g_655.s3, "p_727->g_655.s3", print_hash_value);
    transparent_crc(p_727->g_655.s4, "p_727->g_655.s4", print_hash_value);
    transparent_crc(p_727->g_655.s5, "p_727->g_655.s5", print_hash_value);
    transparent_crc(p_727->g_655.s6, "p_727->g_655.s6", print_hash_value);
    transparent_crc(p_727->g_655.s7, "p_727->g_655.s7", print_hash_value);
    transparent_crc(p_727->g_655.s8, "p_727->g_655.s8", print_hash_value);
    transparent_crc(p_727->g_655.s9, "p_727->g_655.s9", print_hash_value);
    transparent_crc(p_727->g_655.sa, "p_727->g_655.sa", print_hash_value);
    transparent_crc(p_727->g_655.sb, "p_727->g_655.sb", print_hash_value);
    transparent_crc(p_727->g_655.sc, "p_727->g_655.sc", print_hash_value);
    transparent_crc(p_727->g_655.sd, "p_727->g_655.sd", print_hash_value);
    transparent_crc(p_727->g_655.se, "p_727->g_655.se", print_hash_value);
    transparent_crc(p_727->g_655.sf, "p_727->g_655.sf", print_hash_value);
    transparent_crc(p_727->g_656.x, "p_727->g_656.x", print_hash_value);
    transparent_crc(p_727->g_656.y, "p_727->g_656.y", print_hash_value);
    transparent_crc(p_727->g_659.s0, "p_727->g_659.s0", print_hash_value);
    transparent_crc(p_727->g_659.s1, "p_727->g_659.s1", print_hash_value);
    transparent_crc(p_727->g_659.s2, "p_727->g_659.s2", print_hash_value);
    transparent_crc(p_727->g_659.s3, "p_727->g_659.s3", print_hash_value);
    transparent_crc(p_727->g_659.s4, "p_727->g_659.s4", print_hash_value);
    transparent_crc(p_727->g_659.s5, "p_727->g_659.s5", print_hash_value);
    transparent_crc(p_727->g_659.s6, "p_727->g_659.s6", print_hash_value);
    transparent_crc(p_727->g_659.s7, "p_727->g_659.s7", print_hash_value);
    transparent_crc(p_727->g_660.s0, "p_727->g_660.s0", print_hash_value);
    transparent_crc(p_727->g_660.s1, "p_727->g_660.s1", print_hash_value);
    transparent_crc(p_727->g_660.s2, "p_727->g_660.s2", print_hash_value);
    transparent_crc(p_727->g_660.s3, "p_727->g_660.s3", print_hash_value);
    transparent_crc(p_727->g_660.s4, "p_727->g_660.s4", print_hash_value);
    transparent_crc(p_727->g_660.s5, "p_727->g_660.s5", print_hash_value);
    transparent_crc(p_727->g_660.s6, "p_727->g_660.s6", print_hash_value);
    transparent_crc(p_727->g_660.s7, "p_727->g_660.s7", print_hash_value);
    transparent_crc(p_727->g_670.x, "p_727->g_670.x", print_hash_value);
    transparent_crc(p_727->g_670.y, "p_727->g_670.y", print_hash_value);
    transparent_crc(p_727->g_670.z, "p_727->g_670.z", print_hash_value);
    transparent_crc(p_727->g_670.w, "p_727->g_670.w", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_727->g_673[i][j][k].f0.f0, "p_727->g_673[i][j][k].f0.f0", print_hash_value);
                transparent_crc(p_727->g_673[i][j][k].f0.f1, "p_727->g_673[i][j][k].f0.f1", print_hash_value);
                transparent_crc(p_727->g_673[i][j][k].f0.f2, "p_727->g_673[i][j][k].f0.f2", print_hash_value);

            }
        }
    }
    transparent_crc(p_727->g_692.s0, "p_727->g_692.s0", print_hash_value);
    transparent_crc(p_727->g_692.s1, "p_727->g_692.s1", print_hash_value);
    transparent_crc(p_727->g_692.s2, "p_727->g_692.s2", print_hash_value);
    transparent_crc(p_727->g_692.s3, "p_727->g_692.s3", print_hash_value);
    transparent_crc(p_727->g_692.s4, "p_727->g_692.s4", print_hash_value);
    transparent_crc(p_727->g_692.s5, "p_727->g_692.s5", print_hash_value);
    transparent_crc(p_727->g_692.s6, "p_727->g_692.s6", print_hash_value);
    transparent_crc(p_727->g_692.s7, "p_727->g_692.s7", print_hash_value);
    transparent_crc(p_727->g_692.s8, "p_727->g_692.s8", print_hash_value);
    transparent_crc(p_727->g_692.s9, "p_727->g_692.s9", print_hash_value);
    transparent_crc(p_727->g_692.sa, "p_727->g_692.sa", print_hash_value);
    transparent_crc(p_727->g_692.sb, "p_727->g_692.sb", print_hash_value);
    transparent_crc(p_727->g_692.sc, "p_727->g_692.sc", print_hash_value);
    transparent_crc(p_727->g_692.sd, "p_727->g_692.sd", print_hash_value);
    transparent_crc(p_727->g_692.se, "p_727->g_692.se", print_hash_value);
    transparent_crc(p_727->g_692.sf, "p_727->g_692.sf", print_hash_value);
    transparent_crc(p_727->g_696.f0, "p_727->g_696.f0", print_hash_value);
    transparent_crc(p_727->g_696.f1, "p_727->g_696.f1", print_hash_value);
    transparent_crc(p_727->g_696.f2, "p_727->g_696.f2", print_hash_value);
    transparent_crc(p_727->g_696.f3, "p_727->g_696.f3", print_hash_value);
    transparent_crc(p_727->g_696.f4, "p_727->g_696.f4", print_hash_value);
    transparent_crc(p_727->g_696.f5, "p_727->g_696.f5", print_hash_value);
    transparent_crc(p_727->g_696.f6.f0, "p_727->g_696.f6.f0", print_hash_value);
    transparent_crc(p_727->g_696.f6.f1, "p_727->g_696.f6.f1", print_hash_value);
    transparent_crc(p_727->g_696.f6.f2.f0, "p_727->g_696.f6.f2.f0", print_hash_value);
    transparent_crc(p_727->g_696.f6.f2.f1, "p_727->g_696.f6.f2.f1", print_hash_value);
    transparent_crc(p_727->g_696.f6.f2.f2, "p_727->g_696.f6.f2.f2", print_hash_value);
    transparent_crc(p_727->g_696.f6.f3, "p_727->g_696.f6.f3", print_hash_value);
    transparent_crc(p_727->g_696.f6.f4, "p_727->g_696.f6.f4", print_hash_value);
    transparent_crc(p_727->g_696.f6.f5, "p_727->g_696.f6.f5", print_hash_value);
    transparent_crc(p_727->g_696.f6.f6, "p_727->g_696.f6.f6", print_hash_value);
    transparent_crc(p_727->g_696.f6.f7, "p_727->g_696.f6.f7", print_hash_value);
    transparent_crc(p_727->g_696.f6.f8, "p_727->g_696.f6.f8", print_hash_value);
    transparent_crc(p_727->g_696.f6.f9, "p_727->g_696.f6.f9", print_hash_value);
    transparent_crc(p_727->g_696.f7, "p_727->g_696.f7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_727->g_723[i], "p_727->g_723[i]", print_hash_value);

    }
    transparent_crc(p_727->g_726.s0, "p_727->g_726.s0", print_hash_value);
    transparent_crc(p_727->g_726.s1, "p_727->g_726.s1", print_hash_value);
    transparent_crc(p_727->g_726.s2, "p_727->g_726.s2", print_hash_value);
    transparent_crc(p_727->g_726.s3, "p_727->g_726.s3", print_hash_value);
    transparent_crc(p_727->g_726.s4, "p_727->g_726.s4", print_hash_value);
    transparent_crc(p_727->g_726.s5, "p_727->g_726.s5", print_hash_value);
    transparent_crc(p_727->g_726.s6, "p_727->g_726.s6", print_hash_value);
    transparent_crc(p_727->g_726.s7, "p_727->g_726.s7", print_hash_value);
    transparent_crc(p_727->g_726.s8, "p_727->g_726.s8", print_hash_value);
    transparent_crc(p_727->g_726.s9, "p_727->g_726.s9", print_hash_value);
    transparent_crc(p_727->g_726.sa, "p_727->g_726.sa", print_hash_value);
    transparent_crc(p_727->g_726.sb, "p_727->g_726.sb", print_hash_value);
    transparent_crc(p_727->g_726.sc, "p_727->g_726.sc", print_hash_value);
    transparent_crc(p_727->g_726.sd, "p_727->g_726.sd", print_hash_value);
    transparent_crc(p_727->g_726.se, "p_727->g_726.se", print_hash_value);
    transparent_crc(p_727->g_726.sf, "p_727->g_726.sf", print_hash_value);
    transparent_crc(p_727->v_collective, "p_727->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 11; i++)
            transparent_crc(p_727->g_special_values[i + 11 * get_linear_group_id()], "p_727->g_special_values[i + 11 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_727->l_comm_values[get_linear_local_id()], "p_727->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_727->g_comm_values[get_linear_group_id() * 13 + get_linear_local_id()], "p_727->g_comm_values[get_linear_group_id() * 13 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
