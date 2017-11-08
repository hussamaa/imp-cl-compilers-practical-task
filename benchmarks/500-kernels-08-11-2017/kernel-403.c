// --atomics 6 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 44,97,1 -l 2,1,1
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
{1,0} // permutation 9
};

// Seed: 1552669871

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   int32_t  f1;
   uint64_t  f2;
   volatile uint64_t  f3;
   uint32_t  f4;
   int64_t  f5;
   int32_t  f6;
};

struct S1 {
   int64_t  f0;
   volatile int8_t  f1;
   int64_t  f2;
   volatile int32_t  f3;
   int32_t  f4;
   uint8_t  f5;
};

struct S2 {
   struct S1  f0;
   volatile int32_t  f1;
   int8_t  f2;
   volatile struct S1  f3;
};

struct S3 {
    int32_t g_3;
    VECTOR(int32_t, 4) g_7;
    uint16_t g_8;
    int8_t g_22;
    uint32_t g_25;
    struct S0 g_28;
    volatile VECTOR(int32_t, 2) g_43;
    int32_t g_46;
    int32_t * volatile g_45;
    int16_t g_78;
    int32_t g_79[1];
    VECTOR(int64_t, 16) g_102;
    uint64_t g_109;
    struct S1 g_163[4][9][7];
    int64_t g_170;
    volatile struct S0 g_194[8];
    volatile struct S2 g_199;
    volatile struct S2 * volatile g_200;
    struct S1 *g_203;
    struct S1 ** volatile g_202;
    volatile struct S0 g_204;
    volatile struct S0 g_205;
    VECTOR(int32_t, 4) g_208;
    VECTOR(int32_t, 8) g_210;
    volatile VECTOR(int32_t, 16) g_214;
    struct S2 g_218;
    volatile struct S2 g_219[1][9][5];
    int32_t *g_222;
    int32_t **g_221[4][1];
    VECTOR(int64_t, 16) g_225;
    volatile VECTOR(int64_t, 4) g_228;
    VECTOR(uint8_t, 8) g_238;
    struct S2 g_251;
    int32_t * volatile g_272;
    volatile struct S0 g_368;
    volatile struct S0 * volatile g_369;
    VECTOR(int8_t, 2) g_375;
    VECTOR(uint64_t, 16) g_389;
    VECTOR(int16_t, 16) g_413;
    int32_t g_441;
    uint16_t g_442;
    volatile uint8_t *g_459;
    VECTOR(int8_t, 16) g_472;
    VECTOR(int8_t, 16) g_474;
    VECTOR(int8_t, 16) g_477;
    VECTOR(uint8_t, 16) g_479;
    int8_t *g_491[1][3];
    int8_t **g_490;
    int32_t * volatile g_512;
    int32_t * volatile g_513;
    int32_t * volatile g_514;
    int16_t g_539;
    uint16_t g_543;
    int32_t * volatile g_548;
    VECTOR(uint8_t, 2) g_563;
    volatile VECTOR(int16_t, 16) g_567;
    volatile VECTOR(int16_t, 16) g_568;
    volatile VECTOR(int32_t, 8) g_575;
    uint32_t g_583;
    volatile VECTOR(uint16_t, 16) g_588;
    VECTOR(int16_t, 2) g_619;
    uint64_t g_627;
    VECTOR(uint64_t, 4) g_667;
    struct S0 *g_678[10][2][5];
    int32_t * volatile g_681;
    volatile struct S0 g_684;
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
uint32_t  func_1(struct S3 * p_693);
struct S0  func_15(int8_t  p_16, struct S3 * p_693);
int8_t  func_29(int32_t ** p_30, int32_t * p_31, uint8_t  p_32, struct S3 * p_693);
int32_t ** func_33(uint32_t  p_34, int64_t  p_35, int32_t  p_36, int32_t * p_37, struct S3 * p_693);
int16_t  func_40(int32_t * p_41, int32_t  p_42, struct S3 * p_693);
int32_t * func_47(int32_t  p_48, struct S3 * p_693);
int32_t  func_49(int32_t  p_50, int32_t ** p_51, int32_t * p_52, struct S3 * p_693);
int32_t * func_57(uint64_t  p_58, int32_t ** p_59, int32_t *** p_60, int64_t  p_61, uint8_t  p_62, struct S3 * p_693);
uint8_t  func_65(int32_t *** p_66, uint16_t  p_67, int64_t  p_68, struct S3 * p_693);
int32_t *** func_69(int32_t  p_70, struct S3 * p_693);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_693->g_comm_values p_693->g_3 p_693->g_8 p_693->g_22 p_693->g_25 p_693->g_28 p_693->g_45 p_693->g_684 p_693->g_78
 * writes: p_693->g_3 p_693->g_8 p_693->g_7 p_693->g_22 p_693->g_25 p_693->g_46
 */
uint32_t  func_1(struct S3 * p_693)
{ /* block id: 4 */
    int32_t *l_2[1];
    int32_t **l_4 = &l_2[0];
    uint64_t l_17 = 0xA014801465EE6D54L;
    int16_t l_683 = 0x6688L;
    int16_t l_688 = 0x487DL;
    int i;
    for (i = 0; i < 1; i++)
        l_2[i] = &p_693->g_3;
    (*l_4) = (p_693->g_comm_values[p_693->tid] , l_2[0]);
    for (p_693->g_3 = 29; (p_693->g_3 != 24); p_693->g_3 = safe_sub_func_uint8_t_u_u(p_693->g_3, 6))
    { /* block id: 8 */
        int32_t l_537 = 0x3F6D8DF8L;
        int32_t l_540 = 0x19303B2EL;
        int32_t l_544 = (-1L);
        uint32_t *l_687 = &p_693->g_25;
        p_693->g_8 |= (!((VECTOR(int32_t, 16))(p_693->g_7.wyxywyzwxxyzzwxx)).s8);
        for (p_693->g_8 = 22; (p_693->g_8 != 57); p_693->g_8 = safe_add_func_int32_t_s_s(p_693->g_8, 3))
        { /* block id: 12 */
            VECTOR(uint64_t, 16) l_532 = (VECTOR(uint64_t, 16))(0xACEA655EE49F1334L, (VECTOR(uint64_t, 4))(0xACEA655EE49F1334L, (VECTOR(uint64_t, 2))(0xACEA655EE49F1334L, 3UL), 3UL), 3UL, 0xACEA655EE49F1334L, 3UL, (VECTOR(uint64_t, 2))(0xACEA655EE49F1334L, 3UL), (VECTOR(uint64_t, 2))(0xACEA655EE49F1334L, 3UL), 0xACEA655EE49F1334L, 3UL, 0xACEA655EE49F1334L, 3UL);
            int16_t *l_538[9][8][3] = {{{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539}},{{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539}},{{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539}},{{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539}},{{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539}},{{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539}},{{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539}},{{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539}},{{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539},{&p_693->g_539,&p_693->g_539,&p_693->g_539}}};
            uint16_t *l_541 = (void*)0;
            uint16_t *l_542[9] = {&p_693->g_543,&p_693->g_543,&p_693->g_543,&p_693->g_543,&p_693->g_543,&p_693->g_543,&p_693->g_543,&p_693->g_543,&p_693->g_543};
            int32_t *l_545 = (void*)0;
            int i, j, k;
            (*p_693->g_45) = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((func_15(l_17, p_693) , ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(func_29(func_33((safe_rshift_func_int16_t_s_s(func_40(&p_693->g_3, p_693->g_comm_values[p_693->tid], p_693), (p_693->g_225.s6 , (safe_lshift_func_uint8_t_u_u((FAKE_DIVERGE(p_693->local_1_offset, get_local_id(1), 10) == ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))((safe_mul_func_uint16_t_u_u((l_544 = (safe_add_func_int32_t_s_s((+l_532.se), (safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(0x18FFL, (l_540 ^= ((((p_693->g_251.f0.f2 == l_537) & 0x42L) & GROUP_DIVERGE(2, 1)) == p_693->g_479.sa)))), 0))))), 0x6C59L)), 0xA92DC48FL, ((VECTOR(uint32_t, 2))(0xA37E13ACL)), 1UL, 0xD1E379D6L, 1UL, 0xA5EC448EL)).hi)).hi)))), 0x1268832BL, 1UL)).even)).lo), l_537))))), l_532.s2, l_537, l_545, p_693), (*l_4), l_537, p_693), 0x7FL, 0x0BL, 0x1DL, (-5L), 0x16L, (-9L), ((VECTOR(int8_t, 8))(1L)), 0x1CL)).sdee1))).w), 4)), l_683));
        }
        (*l_4) = (p_693->g_684 , &l_544);
    }
    return p_693->g_78;
}


/* ------------------------------------------ */
/* 
 * reads : p_693->g_22 p_693->g_25 p_693->g_28
 * writes: p_693->g_7 p_693->g_22 p_693->g_25
 */
struct S0  func_15(int8_t  p_16, struct S3 * p_693)
{ /* block id: 13 */
    int64_t l_20 = (-2L);
    int32_t *l_21[7];
    int8_t l_23[5];
    int16_t l_24 = (-1L);
    int i;
    for (i = 0; i < 7; i++)
        l_21[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_23[i] = 1L;
    p_693->g_22 &= (p_693->g_7.z = (safe_add_func_int64_t_s_s((0x43421AD7L | l_20), l_20)));
    --p_693->g_25;
    return p_693->g_28;
}


/* ------------------------------------------ */
/* 
 * reads : p_693->g_563 p_693->g_567 p_693->g_568 p_693->g_28.f1 p_693->g_575 p_693->g_389 p_693->g_251.f0.f2 p_693->g_583 p_693->g_46 p_693->g_109 p_693->g_588 p_693->g_203 p_693->g_7 p_693->g_251.f3.f5 p_693->g_619 p_693->g_459 p_693->g_543 p_693->g_369 p_693->g_194 p_693->g_667 p_693->g_413 p_693->g_3 p_693->g_199.f2 p_693->g_218
 * writes: p_693->g_218.f0.f5 p_693->g_46 p_693->g_109 p_693->g_543 p_693->g_442 p_693->g_25 p_693->g_627 p_693->g_413 p_693->g_678 p_693->g_163.f2 p_693->g_218
 */
int8_t  func_29(int32_t ** p_30, int32_t * p_31, uint8_t  p_32, struct S3 * p_693)
{ /* block id: 235 */
    VECTOR(int8_t, 16) l_561 = (VECTOR(int8_t, 16))(5L, (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0x22L), 0x22L), 0x22L, 5L, 0x22L, (VECTOR(int8_t, 2))(5L, 0x22L), (VECTOR(int8_t, 2))(5L, 0x22L), 5L, 0x22L, 5L, 0x22L);
    VECTOR(uint8_t, 2) l_562 = (VECTOR(uint8_t, 2))(247UL, 0x67L);
    VECTOR(uint8_t, 8) l_564 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x97L), 0x97L), 0x97L, 255UL, 0x97L);
    VECTOR(int16_t, 2) l_565 = (VECTOR(int16_t, 2))((-1L), 2L);
    VECTOR(int16_t, 8) l_566 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0303L), 0x0303L), 0x0303L, (-1L), 0x0303L);
    VECTOR(int16_t, 16) l_569 = (VECTOR(int16_t, 16))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, (-8L)), (-8L)), (-8L), 7L, (-8L), (VECTOR(int16_t, 2))(7L, (-8L)), (VECTOR(int16_t, 2))(7L, (-8L)), 7L, (-8L), 7L, (-8L));
    VECTOR(int16_t, 8) l_570 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x4946L), 0x4946L), 0x4946L, 1L, 0x4946L);
    uint8_t l_576 = 251UL;
    uint8_t *l_577 = (void*)0;
    uint8_t *l_578 = &p_693->g_218.f0.f5;
    int32_t l_579 = 1L;
    int32_t *l_580 = &p_693->g_46;
    int32_t l_631 = 0x440DADEFL;
    int32_t l_641 = 1L;
    int32_t l_642 = (-2L);
    int32_t l_643 = (-4L);
    uint64_t l_644 = 3UL;
    struct S2 *l_648 = &p_693->g_218;
    struct S2 **l_647 = &l_648;
    struct S0 *l_677 = &p_693->g_28;
    int64_t *l_679 = &p_693->g_163[3][8][3].f2;
    uint32_t l_680 = 4294967289UL;
    int32_t *l_682 = &l_642;
    int i;
    if ((safe_lshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s(0x56F9L, (1UL > (safe_add_func_int32_t_s_s(((*l_580) = (safe_mod_func_uint64_t_u_u(18446744073709551606UL, (safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))(l_561.sb25336f5)).s63, ((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 4))(251UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(4UL, ((VECTOR(uint8_t, 2))(l_562.xx)), 0x32L, 255UL, ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 2))(p_693->g_563.yx)).xyxxxxxy))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_564.s1327)).even)), 0xD0L)).sec)), 0xAFL)).wzxywxzwzxyyzwxz))).s47))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_565.yy)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_566.s31)), ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))((-10L), 0L)).xyxy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-10L), 1L)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_693->g_567.s9b)))).xxxyyyxxyxxxyxyy)), ((VECTOR(int16_t, 8))(p_693->g_568.sc97cafc4)).s4346117137331510))).even, (int16_t)p_693->g_28.f1, (int16_t)(1L && l_562.y)))).odd, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))(l_569.sc296)).xywxyzxy))).s7402711460336156)).lo, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x3381L, 4L)), ((VECTOR(int16_t, 2))(l_570.s66)), 1L, (((safe_mul_func_uint16_t_u_u((((p_32 != ((VECTOR(int32_t, 4))(p_693->g_575.s6577)).z) > ((*l_578) = ((l_576 < l_569.s5) <= FAKE_DIVERGE(p_693->local_0_offset, get_local_id(0), 10)))) ^ l_579), 0x0E94L)) >= p_693->g_389.s3) <= l_576), 0x239DL, 0x5F0DL))))).s34)).yyxyxyxxxyxxxxxy, (int16_t)0x33F5L))).even)))).odd)).odd)), (-1L), (-7L)))))), ((VECTOR(int16_t, 4))((-5L)))))).zwxzyzww)).s00)), ((VECTOR(int16_t, 4))(0x3A05L)))).hi))), 0L, 0L)).hi)), (-1L), 0x13ADL)).s74))).yxyxxyxx)).s3, 1))))), p_693->g_251.f0.f2))))) || FAKE_DIVERGE(p_693->local_0_offset, get_local_id(0), 10)), 6)))
    { /* block id: 238 */
        VECTOR(uint32_t, 16) l_591 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x5EDC1C56L), 0x5EDC1C56L), 0x5EDC1C56L, 1UL, 0x5EDC1C56L, (VECTOR(uint32_t, 2))(1UL, 0x5EDC1C56L), (VECTOR(uint32_t, 2))(1UL, 0x5EDC1C56L), 1UL, 0x5EDC1C56L, 1UL, 0x5EDC1C56L);
        int64_t *l_609[3];
        int8_t *l_620 = (void*)0;
        int8_t *l_621 = (void*)0;
        int8_t *l_622[2][9] = {{&p_693->g_22,&p_693->g_22,&p_693->g_22,&p_693->g_22,&p_693->g_22,&p_693->g_22,&p_693->g_22,&p_693->g_22,&p_693->g_22},{&p_693->g_22,&p_693->g_22,&p_693->g_22,&p_693->g_22,&p_693->g_22,&p_693->g_22,&p_693->g_22,&p_693->g_22,&p_693->g_22}};
        int32_t l_623 = 1L;
        uint16_t *l_624 = &p_693->g_442;
        uint16_t *l_625 = &p_693->g_543;
        uint32_t *l_626[5] = {&p_693->g_25,&p_693->g_25,&p_693->g_25,&p_693->g_25,&p_693->g_25};
        int32_t *l_628 = (void*)0;
        int32_t *l_629 = (void*)0;
        int32_t *l_630 = (void*)0;
        int i, j;
        for (i = 0; i < 3; i++)
            l_609[i] = (void*)0;
        for (l_579 = 0; (l_579 > (-21)); l_579 = safe_sub_func_int8_t_s_s(l_579, 8))
        { /* block id: 241 */
            int64_t l_592 = 1L;
            int32_t l_601 = 0x0AE80CA8L;
            uint16_t *l_602 = &p_693->g_543;
            (*l_580) ^= p_693->g_583;
            for (p_693->g_109 = 0; (p_693->g_109 != 55); p_693->g_109 = safe_add_func_uint16_t_u_u(p_693->g_109, 9))
            { /* block id: 245 */
                return p_32;
            }
            (*l_580) = ((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_693->g_588.s88)).xxyxyyyx)).s0, 0)) > (safe_lshift_func_uint16_t_u_s(p_693->g_46, (((((p_693->g_203 == (void*)0) , (l_592 ^= (p_693->g_7.z , ((*l_580) | ((VECTOR(uint32_t, 16))(l_591.s8e82de0fde1c5684)).s0)))) != ((*l_602) = (((safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((18446744073709551614UL != (safe_mod_func_int32_t_s_s((0xD3L > (safe_div_func_int32_t_s_s((l_601 < p_32), 0xCFB7F168L))), 4294967289UL))), l_601)), (*l_580))) || GROUP_DIVERGE(2, 1)) && l_591.s2))) , &p_30) != (void*)0))));
            if ((*l_580))
                continue;
        }
        l_631 |= (((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((*l_580) , (~p_32)), 7)), 0x25C0L)) < (p_693->g_627 = (p_693->g_25 = ((l_579 ^= (l_591.sf == (p_32 && (0x353BL ^ (0x1D6EL >= p_693->g_251.f3.f5))))) || (safe_unary_minus_func_uint16_t_u(((*l_625) ^= (((((*l_624) = (safe_div_func_int8_t_s_s((l_623 = (safe_rshift_func_uint16_t_u_s(((safe_add_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_693->g_619.yxyy)), 0L, 7L, (-3L), 0x4C26L)))), ((VECTOR(int16_t, 2))((-9L))), ((VECTOR(int16_t, 4))((-7L))), 0x2A47L, 0x339CL)).sd731)).xzxxzxyz))))).even, ((VECTOR(int16_t, 4))(0x3E14L))))).w != l_591.s7), (*p_693->g_459))), p_32)) , p_32), 3))), p_32))) != p_32) & l_591.se) < 0UL)))))))) != 0x6BL);
    }
    else
    { /* block id: 260 */
        uint64_t l_632 = 0UL;
        int32_t l_633 = 0x322DA9CAL;
        int32_t l_634[10][10] = {{9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L},{9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L},{9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L},{9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L},{9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L},{9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L},{9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L},{9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L},{9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L},{9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L,0x1E5AB4EFL,9L,9L}};
        int32_t *l_635 = &l_631;
        int32_t *l_636 = &l_633;
        int32_t l_637 = 0x782F265EL;
        int32_t *l_638 = &l_633;
        int32_t *l_639 = &l_637;
        int32_t *l_640[10][1] = {{&l_637},{&l_637},{&l_637},{&l_637},{&l_637},{&l_637},{&l_637},{&l_637},{&l_637},{&l_637}};
        int16_t *l_668 = (void*)0;
        int16_t *l_669 = (void*)0;
        int16_t *l_670 = (void*)0;
        int16_t *l_671 = (void*)0;
        int16_t *l_672[1][8];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 8; j++)
                l_672[i][j] = (void*)0;
        }
        l_633 |= ((*l_580) = l_632);
        l_634[6][1] |= (*l_580);
        --l_644;
        (*l_635) &= (((void*)0 != l_647) || (safe_sub_func_int32_t_s_s((-10L), ((((safe_rshift_func_uint8_t_u_s(1UL, 1)) || ((*p_693->g_369) , (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((GROUP_DIVERGE(0, 1) & (((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(p_32, 3)), (safe_rshift_func_int8_t_s_u((*l_580), 1)))) && ((safe_div_func_uint16_t_u_u(((((((safe_mod_func_int16_t_s_s((0x7961A6765DC57A64L || ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(p_693->g_667.yxxw)).zwxyyzyywwwzwyyx)).sac)).lo), (p_693->g_413.sa ^= (p_32 ^ p_32)))) < (*l_636)) | GROUP_DIVERGE(2, 1)) , (*p_31)) > p_693->g_199.f2) <= (*l_580)), p_32)) == p_32)) & 0x72F3L)), 7)), 1L)))) <= (-1L)) | 255UL))));
    }
    (*l_682) ^= (+(safe_lshift_func_int8_t_s_s(((0x19L <= ((safe_add_func_uint16_t_u_u((1L <= 0x22E647CEL), (*l_580))) >= ((p_693->g_678[7][1][2] = l_677) != l_677))) <= ((*l_580) , ((((*l_679) = ((&p_31 == (void*)0) || 9UL)) == p_32) , (-4L)))), l_680)));
    (**l_647) = (**l_647);
    return (*l_580);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_33(uint32_t  p_34, int64_t  p_35, int32_t  p_36, int32_t * p_37, struct S3 * p_693)
{ /* block id: 231 */
    int16_t l_546 = (-3L);
    int32_t l_547 = (-7L);
    int32_t *l_549 = (void*)0;
    int32_t l_550 = 8L;
    l_550 = (l_547 = l_546);
    return &p_693->g_222;
}


/* ------------------------------------------ */
/* 
 * reads : p_693->g_43 p_693->g_8 p_693->g_7 p_693->g_45 p_693->g_46 p_693->g_comm_values p_693->g_78 p_693->g_28.f2 p_693->g_25 p_693->g_102 p_693->g_28.f4 p_693->l_comm_values p_693->g_109 p_693->g_163 p_693->g_3 p_693->g_194 p_693->g_199 p_693->g_200 p_693->g_202 p_693->g_204 p_693->g_218.f0.f2 p_693->g_221 p_693->g_218.f0.f5 p_693->g_225 p_693->g_79 p_693->g_228 p_693->g_238 p_693->g_28.f0 p_693->g_28.f6 p_693->g_251 p_693->g_218.f1 p_693->g_28.f5 p_693->g_368 p_693->g_369 p_693->g_375 p_693->g_219.f0.f2 p_693->g_389 p_693->g_222 p_693->g_218.f0.f4 p_693->g_218.f3.f5 p_693->g_413 p_693->g_203 p_693->g_218.f0.f0 p_693->g_442 p_693->g_205.f1 p_693->g_459 p_693->g_472 p_693->g_474 p_693->g_477 p_693->g_479 p_693->g_490 p_693->g_22 p_693->g_28
 * writes: p_693->g_7 p_693->g_46 p_693->g_28.f1 p_693->g_78 p_693->g_79 p_693->g_22 p_693->g_25 p_693->g_28.f4 p_693->g_109 p_693->l_comm_values p_693->g_199 p_693->g_203 p_693->g_205 p_693->g_163 p_693->g_28.f0 p_693->g_222 p_693->g_28.f6 p_693->g_102 p_693->g_170 p_693->g_28.f2 p_693->g_251.f0.f5 p_693->g_28.f5 p_693->g_194 p_693->g_442
 */
int16_t  func_40(int32_t * p_41, int32_t  p_42, struct S3 * p_693)
{ /* block id: 18 */
    int32_t *l_81 = &p_693->g_46;
    int32_t **l_80 = &l_81;
    VECTOR(int16_t, 2) l_374 = (VECTOR(int16_t, 2))(0x3B60L, 0x45EDL);
    VECTOR(uint8_t, 8) l_376 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x35L), 0x35L), 0x35L, 255UL, 0x35L);
    VECTOR(int8_t, 4) l_377 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x65L), 0x65L);
    int32_t l_398 = 1L;
    int32_t l_399 = 0x16A95D62L;
    VECTOR(int64_t, 8) l_412 = (VECTOR(int64_t, 8))(0x489042847103D9D3L, (VECTOR(int64_t, 4))(0x489042847103D9D3L, (VECTOR(int64_t, 2))(0x489042847103D9D3L, 0x4341F497C1AA5D36L), 0x4341F497C1AA5D36L), 0x4341F497C1AA5D36L, 0x489042847103D9D3L, 0x4341F497C1AA5D36L);
    int32_t l_434 = 7L;
    uint16_t l_435 = 0x97ADL;
    int64_t l_483 = (-5L);
    int8_t ***l_508 = &p_693->g_490;
    int i;
    if (((VECTOR(int32_t, 16))(p_693->g_43.xyyxxyyxxxyxyyxx)).sc)
    { /* block id: 19 */
        return p_693->g_8;
    }
    else
    { /* block id: 21 */
        int32_t *l_44 = (void*)0;
        int32_t *l_53 = &p_693->g_28.f1;
        int32_t ***l_54 = (void*)0;
        int32_t **l_56 = &l_44;
        int32_t ***l_55 = &l_56;
        int32_t **l_74 = (void*)0;
        int32_t ***l_73 = &l_74;
        int16_t *l_77 = &p_693->g_78;
        int8_t *l_82 = &p_693->g_22;
        (*p_693->g_45) = (p_693->g_7.z &= 0x3414C507L);
        (*l_80) = func_47(((*l_53) = func_49(((*l_53) = 0x1D9FC0A4L), ((*l_55) = &p_41), ((*l_80) = func_57((safe_sub_func_int64_t_s_s((p_42 <= ((func_65(func_69((((*l_82) = ((((0x595DB7A7L | (((*l_73) = (void*)0) == (p_693->g_7.z , (((+(safe_lshift_func_uint8_t_u_u((((p_693->g_79[0] = ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 2))(5UL, 0x5461A87E759864ECL)).xyyyxyxy, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 0xED03213856DD1CD0L)).yxyy)), (((*p_693->g_45) , (p_42 > ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((*l_77) = p_42), p_42, (-9L), 1L)).lo)), ((VECTOR(int16_t, 2))(0x78BCL))))).lo)) ^ GROUP_DIVERGE(0, 1)), 0x9C91ED130E403E3AL, 1UL, 0x5792D6E4BE99D439L)), ((VECTOR(uint64_t, 8))(0xDDFF55CBB879D152L))))), p_42, p_693->g_comm_values[p_693->tid], p_693->g_78, 7UL, 1UL, ((VECTOR(uint64_t, 2))(18446744073709551609UL)), 18446744073709551606UL)).odd)).s0) || p_693->g_28.f2) , 255UL), p_42))) == p_42) , l_80)))) != p_693->g_25) ^ 0L) , 1L)) <= p_42), p_693), p_42, p_42, p_693) & p_693->g_218.f0.f2) & 0xC58EDBC7L)), 0x5DE57CDF1BC1A3F1L)), p_693->g_221[3][0], &l_80, p_693->g_218.f0.f5, p_42, p_693)), p_693)), p_693);
        (**l_55) = (*l_80);
        if ((atomic_inc(&p_693->g_atomic_input[6 * get_linear_group_id() + 5]) == 6))
        { /* block id: 131 */
            int32_t l_282 = 0x7155CCBEL;
            int32_t *l_281 = &l_282;
            int32_t *l_283 = &l_282;
            int32_t *l_284 = &l_282;
            l_284 = (l_283 = l_281);
            for (l_282 = (-8); (l_282 <= 7); l_282 = safe_add_func_int16_t_s_s(l_282, 8))
            { /* block id: 136 */
                int32_t l_287[4] = {0L,0L,0L,0L};
                uint16_t l_326[6];
                VECTOR(uint16_t, 16) l_366 = (VECTOR(uint16_t, 16))(0xBFB0L, (VECTOR(uint16_t, 4))(0xBFB0L, (VECTOR(uint16_t, 2))(0xBFB0L, 4UL), 4UL), 4UL, 0xBFB0L, 4UL, (VECTOR(uint16_t, 2))(0xBFB0L, 4UL), (VECTOR(uint16_t, 2))(0xBFB0L, 4UL), 0xBFB0L, 4UL, 0xBFB0L, 4UL);
                int64_t l_367 = 0x02FBF15A4238CF56L;
                int i;
                for (i = 0; i < 6; i++)
                    l_326[i] = 5UL;
                for (l_287[2] = 0; (l_287[2] > 12); l_287[2] = safe_add_func_int16_t_s_s(l_287[2], 2))
                { /* block id: 139 */
                    int32_t l_290[4][2][3] = {{{0x66FF9816L,0x58260C0DL,0x66FF9816L},{0x66FF9816L,0x58260C0DL,0x66FF9816L}},{{0x66FF9816L,0x58260C0DL,0x66FF9816L},{0x66FF9816L,0x58260C0DL,0x66FF9816L}},{{0x66FF9816L,0x58260C0DL,0x66FF9816L},{0x66FF9816L,0x58260C0DL,0x66FF9816L}},{{0x66FF9816L,0x58260C0DL,0x66FF9816L},{0x66FF9816L,0x58260C0DL,0x66FF9816L}}};
                    int16_t l_291 = 0x108EL;
                    int64_t l_292 = 0x2E7BC6022C7CA74CL;
                    int32_t l_293 = 0x0C6AAE51L;
                    uint32_t l_294 = 0xD655FAEAL;
                    int i, j, k;
                    --l_294;
                }
                for (l_287[2] = (-22); (l_287[2] > 10); l_287[2] = safe_add_func_int64_t_s_s(l_287[2], 9))
                { /* block id: 144 */
                    int8_t l_299 = 0x48L;
                    uint64_t l_300 = 18446744073709551615UL;
                    uint64_t l_307 = 0xB2A57E7198275EFEL;
                    uint32_t l_308[9][9][3] = {{{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL}},{{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL}},{{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL}},{{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL}},{{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL}},{{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL}},{{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL}},{{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL}},{{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL},{4294967295UL,0xEEF9F349L,4294967295UL}}};
                    int8_t l_309 = (-1L);
                    uint32_t l_310 = 4294967295UL;
                    VECTOR(int32_t, 2) l_311 = (VECTOR(int32_t, 2))(0x787EDE97L, 0x3728D9FEL);
                    VECTOR(int32_t, 8) l_312 = (VECTOR(int32_t, 8))(0x5671276AL, (VECTOR(int32_t, 4))(0x5671276AL, (VECTOR(int32_t, 2))(0x5671276AL, 0x339AAF04L), 0x339AAF04L), 0x339AAF04L, 0x5671276AL, 0x339AAF04L);
                    uint64_t l_313[1];
                    uint32_t l_314 = 4294967289UL;
                    VECTOR(int32_t, 8) l_315 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 1L), 1L), 1L, (-3L), 1L);
                    VECTOR(int32_t, 4) l_316 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x5A0A2302L), 0x5A0A2302L);
                    VECTOR(int32_t, 4) l_317 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x5C9469ADL), 0x5C9469ADL);
                    uint16_t l_318 = 65535UL;
                    VECTOR(uint32_t, 8) l_319 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x9C318E78L), 0x9C318E78L), 0x9C318E78L, 1UL, 0x9C318E78L);
                    uint64_t l_320 = 7UL;
                    uint64_t l_321[6];
                    int32_t l_322 = 7L;
                    VECTOR(int16_t, 16) l_323 = (VECTOR(int16_t, 16))(0x319DL, (VECTOR(int16_t, 4))(0x319DL, (VECTOR(int16_t, 2))(0x319DL, 0x2590L), 0x2590L), 0x2590L, 0x319DL, 0x2590L, (VECTOR(int16_t, 2))(0x319DL, 0x2590L), (VECTOR(int16_t, 2))(0x319DL, 0x2590L), 0x319DL, 0x2590L, 0x319DL, 0x2590L);
                    uint32_t l_324 = 0x0816E08CL;
                    uint8_t l_325 = 0xB1L;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_313[i] = 0xE9F30989C779059DL;
                    for (i = 0; i < 6; i++)
                        l_321[i] = 18446744073709551608UL;
                    l_300--;
                    if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x2C284C97L, 1L, 0x12D5F432L, 0x67540314L)).xzwwzwxw)).s7)
                    { /* block id: 146 */
                        l_283 = (void*)0;
                    }
                    else
                    { /* block id: 148 */
                        int64_t l_303 = 1L;
                        int64_t l_304 = 0L;
                        int64_t l_305 = (-5L);
                        uint16_t l_306[10][3][8] = {{{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL}},{{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL}},{{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL}},{{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL}},{{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL}},{{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL}},{{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL}},{{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL}},{{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL}},{{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL},{65529UL,0xE72DL,0xCE3DL,3UL,0xCE3DL,0xE72DL,65529UL,1UL}}};
                        int i, j, k;
                        l_303 = 0x466C81FBL;
                        l_306[3][2][2] = (l_305 = l_304);
                    }
                    l_307 ^= 0L;
                    l_325 = ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((l_309 |= l_308[8][1][1]) , l_310), 0L, ((VECTOR(int32_t, 8))(l_311.yxyxxyxx)).s2, ((VECTOR(int32_t, 8))(l_312.s35501712)), l_313[0], ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((-3L), (-1L), 0L, 0x04F7A2B9L, (-8L), ((VECTOR(int32_t, 2))(0x1009B226L, 8L)), 0x44D6DB06L)).even)).lo, (int32_t)(l_312.s1 |= l_314)))), 0x0A051CF3L, 1L)).sda, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x64207A6AL, (-1L))).yxxyyxyy)).s61)), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x52CA686DL, 0x5ED77033L)), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_315.s7524544670735404)).sc2, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(l_316.zxwywzwywzxxxxzx)), ((VECTOR(int32_t, 2))(0x1A58352FL, 9L)).yyxyyxyyxyyxxxxx))).s78, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_317.zwzz)).odd)).yxyy, ((VECTOR(int32_t, 8))(0x4FAAFC78L, 0x4825D0DDL, 0L, l_318, (l_322 = (l_321[0] = (((VECTOR(uint32_t, 2))(l_319.s00)).even , (l_320 |= 0x52EA2DE0L)))), ((VECTOR(int32_t, 2))((-8L))), (-1L))).even))).hi, ((VECTOR(int32_t, 2))(0x7E8A2FB0L))))), ((VECTOR(int32_t, 8))((-6L))), (-3L), 0x6064F229L, l_323.s9, 0L, 0x68E0EFE5L, 0x6AF16A00L)).hi)).s00, ((VECTOR(int32_t, 2))(1L))))).xxxx)).x, ((VECTOR(int32_t, 2))(0L)), 0L, 0x28BC47FDL, l_324, (-1L), 0x209CE081L, ((VECTOR(int32_t, 2))(0x2F614C5DL)), ((VECTOR(int32_t, 2))(0x752903DBL)), ((VECTOR(int32_t, 2))(0x07FBEAF4L)), 1L, 0x6F97FD7DL)).s54, ((VECTOR(int32_t, 2))(6L)), ((VECTOR(int32_t, 2))(0x55458A09L))))), (-1L), ((VECTOR(int32_t, 2))((-1L))), 0x377505A9L)).s07)).yyxx)).odd)))))).yyyyyyyy, ((VECTOR(int32_t, 8))(1L))))).s3;
                }
                if (l_326[1])
                { /* block id: 161 */
                    uint32_t l_327 = 0xF37A4432L;
                    VECTOR(uint16_t, 8) l_328 = (VECTOR(uint16_t, 8))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x6158L), 0x6158L), 0x6158L, 6UL, 0x6158L);
                    VECTOR(uint16_t, 2) l_329 = (VECTOR(uint16_t, 2))(0xA7C8L, 0xBF80L);
                    int32_t l_330 = 0x05956F32L;
                    int32_t *l_331 = (void*)0;
                    int64_t l_332 = (-7L);
                    VECTOR(uint32_t, 8) l_333 = (VECTOR(uint32_t, 8))(0x5972E2A9L, (VECTOR(uint32_t, 4))(0x5972E2A9L, (VECTOR(uint32_t, 2))(0x5972E2A9L, 3UL), 3UL), 3UL, 0x5972E2A9L, 3UL);
                    uint64_t l_334 = 0UL;
                    VECTOR(uint32_t, 2) l_335 = (VECTOR(uint32_t, 2))(1UL, 0UL);
                    uint32_t l_336 = 0xA02096E2L;
                    VECTOR(uint32_t, 2) l_337 = (VECTOR(uint32_t, 2))(4294967295UL, 0xF1FDB78AL);
                    VECTOR(uint64_t, 4) l_338 = (VECTOR(uint64_t, 4))(0x9E12E63FC7476B6CL, (VECTOR(uint64_t, 2))(0x9E12E63FC7476B6CL, 0xD82D26793EF58B42L), 0xD82D26793EF58B42L);
                    int32_t l_339[3][3][7] = {{{0x23C59669L,9L,9L,0x23C59669L,(-5L),2L,1L},{0x23C59669L,9L,9L,0x23C59669L,(-5L),2L,1L},{0x23C59669L,9L,9L,0x23C59669L,(-5L),2L,1L}},{{0x23C59669L,9L,9L,0x23C59669L,(-5L),2L,1L},{0x23C59669L,9L,9L,0x23C59669L,(-5L),2L,1L},{0x23C59669L,9L,9L,0x23C59669L,(-5L),2L,1L}},{{0x23C59669L,9L,9L,0x23C59669L,(-5L),2L,1L},{0x23C59669L,9L,9L,0x23C59669L,(-5L),2L,1L},{0x23C59669L,9L,9L,0x23C59669L,(-5L),2L,1L}}};
                    uint16_t l_340 = 1UL;
                    uint64_t l_341[10] = {1UL,7UL,1UL,1UL,7UL,1UL,1UL,7UL,1UL,1UL};
                    int32_t l_342 = 0L;
                    uint32_t l_343 = 0xD8FC3F4AL;
                    uint32_t l_344 = 0UL;
                    struct S0 l_345 = {0L,0x47FA8BDAL,0x4F3B247D16E504ADL,0xB9F4D87B3F48EC7AL,0xFEDBFBC9L,-2L,1L};/* VOLATILE GLOBAL l_345 */
                    int64_t l_346[6][2] = {{0x2800783F09E444F0L,6L},{0x2800783F09E444F0L,6L},{0x2800783F09E444F0L,6L},{0x2800783F09E444F0L,6L},{0x2800783F09E444F0L,6L},{0x2800783F09E444F0L,6L}};
                    uint32_t l_358 = 0xB03BBC6DL;
                    VECTOR(int64_t, 2) l_359 = (VECTOR(int64_t, 2))(0x0FD47910ECB24DA9L, 0x7CBF056CEC13F42AL);
                    int i, j, k;
                    l_327 ^= (-3L);
                    l_284 = ((FAKE_DIVERGE(p_693->local_2_offset, get_local_id(2), 10) , (l_330 = ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 2))(l_328.s52)), ((VECTOR(uint16_t, 16))(l_329.xyxxyyxxxxyxxxxx)).s8e))).even)) , l_331);
                    if (((l_287[3] = l_332) , (((((l_333.s4 = ((((l_334 = ((VECTOR(uint32_t, 8))(0xEE7B0585L, 0xABD0E3FAL, 0xBE4CB969L, 0UL, 0x075EBBC2L, ((VECTOR(uint32_t, 2))(l_333.s07)), 4294967295UL)).s1) , ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_335.xy)), 0UL, 4294967292UL)).hi, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(0x36A1FABEL, l_336, ((VECTOR(uint32_t, 4))(l_337.xyxy)), 0x6D8FC0C5L, 0x42094444L)).s26)))).xyxy)).lo))), 18446744073709551607UL, 18446744073709551615UL)).y) , (((VECTOR(uint64_t, 2))(l_338.yw)).odd , 0x62B8F1DEL)) , (l_340 = l_339[1][2][6]))) , (((VECTOR(uint16_t, 2))(0xAB0BL, 0xED51L)).odd , (l_342 = l_341[9]))) , ((l_343 , l_344) , l_345)) , l_346[5][1]) , 0x0F33EAE0L)))
                    { /* block id: 170 */
                        int16_t l_347 = 0x5557L;
                        uint8_t l_348 = 9UL;
                        int64_t l_349[10][2] = {{0x18FFE6E21AA1CD6EL,0x18FFE6E21AA1CD6EL},{0x18FFE6E21AA1CD6EL,0x18FFE6E21AA1CD6EL},{0x18FFE6E21AA1CD6EL,0x18FFE6E21AA1CD6EL},{0x18FFE6E21AA1CD6EL,0x18FFE6E21AA1CD6EL},{0x18FFE6E21AA1CD6EL,0x18FFE6E21AA1CD6EL},{0x18FFE6E21AA1CD6EL,0x18FFE6E21AA1CD6EL},{0x18FFE6E21AA1CD6EL,0x18FFE6E21AA1CD6EL},{0x18FFE6E21AA1CD6EL,0x18FFE6E21AA1CD6EL},{0x18FFE6E21AA1CD6EL,0x18FFE6E21AA1CD6EL},{0x18FFE6E21AA1CD6EL,0x18FFE6E21AA1CD6EL}};
                        VECTOR(int32_t, 4) l_350 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 1L), 1L);
                        int i, j;
                        l_349[7][1] = (l_347 , l_348);
                        l_287[3] |= 0x21FC4A23L;
                        l_339[1][0][3] ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(l_350.zyywwzzxzzzyxyyy)).s4085, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x619FE329L, (-5L))).yxxyyyyxxyyyxxyx)).s18c2))))).x;
                        l_284 = (void*)0;
                    }
                    else
                    { /* block id: 175 */
                        int16_t l_351 = 2L;
                        int8_t l_352 = 0x55L;
                        int32_t l_353 = 1L;
                        uint64_t l_354 = 1UL;
                        int64_t l_357 = 0x6D92B63827D85E3FL;
                        l_354++;
                        l_357 |= 0x2C2884DFL;
                    }
                    l_359.x = (l_358 , (-1L));
                }
                else
                { /* block id: 180 */
                    uint64_t l_360 = 18446744073709551615UL;
                    struct S2 l_362 = {{0x1D78C6DC40E012EFL,1L,1L,1L,0x2FD8E77DL,0xE6L},-10L,7L,{0x3DBD0764BB0D008FL,1L,0x2676A39C093308F1L,1L,-9L,0xC6L}};/* VOLATILE GLOBAL l_362 */
                    struct S2 *l_361[3][10] = {{&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362},{&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362},{&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362}};
                    uint16_t l_363 = 0xFFB5L;
                    int i, j;
                    l_360 = 0x324F71A7L;
                    l_361[1][6] = (void*)0;
                    --l_363;
                }
                l_367 &= (l_287[3] |= l_366.s9);
            }
            unsigned int result = 0;
            result += l_282;
            atomic_add(&p_693->g_special_values[6 * get_linear_group_id() + 5], result);
        }
        else
        { /* block id: 188 */
            (1 + 1);
        }
    }
    (*p_693->g_369) = p_693->g_368;
    if ((~(p_42 , ((safe_sub_func_int16_t_s_s(p_42, (-7L))) == GROUP_DIVERGE(0, 1)))))
    { /* block id: 193 */
        VECTOR(int16_t, 4) l_380 = (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, (-4L)), (-4L));
        int32_t *l_392 = (void*)0;
        int32_t *l_393 = (void*)0;
        int32_t *l_394 = (void*)0;
        int32_t *l_395 = (void*)0;
        int32_t *l_396 = (void*)0;
        int32_t *l_397[6][1][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t ***l_410 = &p_693->g_221[3][0];
        VECTOR(uint16_t, 2) l_414 = (VECTOR(uint16_t, 2))(0xE36CL, 65533UL);
        int8_t l_445 = 1L;
        int32_t l_481 = 0x12819127L;
        uint16_t l_487 = 0UL;
        int i, j, k;
        if ((l_399 = (l_398 |= (((((((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_374.yx)).yxyxyyyx)).even)).w, (p_693->g_78 |= ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 16))(p_693->g_375.yyxyxxxxyxxxyyyy)).s4059, ((VECTOR(uint8_t, 4))(l_376.s2344))))))), l_377.y, (safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 8))(l_380.xyxyzxyx)), (int16_t)(((safe_add_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(l_380.z, (safe_add_func_uint8_t_u_u(0x7BL, (p_42 <= 0x6BL))))), p_693->g_219[0][1][4].f0.f2)) != (((VECTOR(uint64_t, 2))(p_693->g_389.s21)).lo < (p_42 ^ (((*p_693->g_222) == (safe_rshift_func_int16_t_s_u(0x634FL, p_42))) , p_42)))) != (-1L)) , p_693->g_218.f0.f4), l_380.x)) && p_693->g_204.f2) , 0L)))).s43)).even, p_693->g_109)), (-1L), 0x4714L)).s0))) && 0x4BL) , &p_693->g_203) != &p_693->g_203) != p_42) > 18446744073709551615UL) == p_42))))
        { /* block id: 197 */
            int32_t ***l_411 = (void*)0;
            VECTOR(int16_t, 16) l_415 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L, (VECTOR(int16_t, 2))((-1L), 3L), (VECTOR(int16_t, 2))((-1L), 3L), (-1L), 3L, (-1L), 3L);
            int32_t l_428 = 0x24CD7DD5L;
            uint64_t *l_429 = &p_693->g_109;
            int32_t l_432 = 1L;
            int32_t l_433 = 0x53356D40L;
            uint8_t *l_460[10] = {&p_693->g_218.f0.f5,&p_693->g_218.f0.f5,&p_693->g_218.f0.f5,&p_693->g_218.f0.f5,&p_693->g_218.f0.f5,&p_693->g_218.f0.f5,&p_693->g_218.f0.f5,&p_693->g_218.f0.f5,&p_693->g_218.f0.f5,&p_693->g_218.f0.f5};
            int i;
            if ((((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((p_693->g_218.f3.f5 <= (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((safe_add_func_int64_t_s_s(((l_410 != l_411) > GROUP_DIVERGE(1, 1)), ((!((*l_429) = (p_42 && (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(l_412.s20)), ((VECTOR(int64_t, 4))((((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(p_693->g_413.sc434d50063734aeb)), ((VECTOR(uint16_t, 16))(l_414.yyxyxyyyyxyyxxxy))))).s01ef, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_415.scb012cb8ff71e02a)).s96fc)))), ((VECTOR(uint16_t, 2))(65535UL, 7UL)).yxyx)))))).xzyywxyxwzwxxwww)))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((safe_mod_func_int16_t_s_s((p_42 & ((~(((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(p_42, 5)) || p_42) < p_42), (safe_rshift_func_uint16_t_u_s(((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s((((void*)0 == p_693->g_203) || p_693->g_238.s3), p_693->g_7.z)), p_42)) , GROUP_DIVERGE(0, 1)), 6)))) == p_693->l_comm_values[(safe_mod_func_uint32_t_u_u(p_693->tid, 2))]) <= p_693->g_218.f0.f0)) != p_42)), 1UL)), l_428, 1L, ((VECTOR(int32_t, 4))((-3L))), 0L)).even)).yxxzxzxwxwxwwywy))), ((VECTOR(int32_t, 16))(0x04353F0EL))))).sc | p_42), ((VECTOR(int64_t, 2))(0x20956BF68614C450L)), 1L)).lo))).xxxyyxxx, (int64_t)p_42))).s35)), 0x3F8DE79ACBBF2F7BL, 2L, 7L, ((VECTOR(int64_t, 2))(0x089A48AA3223BFC4L)), 0x3E991661A9E88B6AL)).s30)), (-3L), 0x7D0534080DF3B57DL)).x , p_42)))) & 1UL))) | FAKE_DIVERGE(p_693->local_1_offset, get_local_id(1), 10)), (-4L))), p_693->g_79[0]))) && 0x43F9D176396D6D5FL) , p_693->g_194[7].f6), p_42)), p_693->g_102.s1)) , 0x4CDEL) | 0x3D34L))
            { /* block id: 199 */
                VECTOR(int32_t, 16) l_430 = (VECTOR(int32_t, 16))(0x3F30B011L, (VECTOR(int32_t, 4))(0x3F30B011L, (VECTOR(int32_t, 2))(0x3F30B011L, 4L), 4L), 4L, 0x3F30B011L, 4L, (VECTOR(int32_t, 2))(0x3F30B011L, 4L), (VECTOR(int32_t, 2))(0x3F30B011L, 4L), 0x3F30B011L, 4L, 0x3F30B011L, 4L);
                VECTOR(int32_t, 4) l_431 = (VECTOR(int32_t, 4))(0x566763CEL, (VECTOR(int32_t, 2))(0x566763CEL, 0x0879DD51L), 0x0879DD51L);
                uint16_t *l_438 = (void*)0;
                uint16_t *l_439 = (void*)0;
                uint16_t *l_440[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int8_t *l_457 = &p_693->g_22;
                int8_t **l_458 = &l_457;
                int i;
                l_435--;
                l_432 |= (l_433 ^= l_431.y);
                l_399 &= (((((--p_693->g_442) ^ p_693->g_389.sc) , ((*p_693->g_45) = (l_445 & ((safe_unary_minus_func_int64_t_s(((safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(p_42, ((safe_mul_func_int8_t_s_s((((((!(safe_mul_func_uint8_t_u_u(((((FAKE_DIVERGE(p_693->local_0_offset, get_local_id(0), 10) || (((safe_sub_func_uint32_t_u_u(0x70615497L, (+l_430.sd))) <= (((l_431.y = (l_432 ^= (((((*l_458) = l_457) == &l_445) & p_693->g_205.f1) | (&p_693->g_78 != l_440[3])))) != p_42) >= p_693->g_251.f0.f2)) , p_693->g_368.f4)) | p_42) , p_693->g_459) != l_460[2]), 0xCFL))) <= (-1L)) == (*p_693->g_222)) && (*p_693->g_459)) , 0x5FL), 1L)) ^ p_693->g_25))), 3)) & (*p_693->g_222)))) < p_42)))) <= FAKE_DIVERGE(p_693->group_1_offset, get_group_id(1), 10)) || FAKE_DIVERGE(p_693->global_1_offset, get_global_id(1), 10));
                return p_42;
            }
            else
            { /* block id: 210 */
                (**l_410) = p_41;
            }
        }
        else
        { /* block id: 213 */
            VECTOR(int64_t, 16) l_469 = (VECTOR(int64_t, 16))(0x026C881C3F4FA927L, (VECTOR(int64_t, 4))(0x026C881C3F4FA927L, (VECTOR(int64_t, 2))(0x026C881C3F4FA927L, 0x13EA7E3095CF1542L), 0x13EA7E3095CF1542L), 0x13EA7E3095CF1542L, 0x026C881C3F4FA927L, 0x13EA7E3095CF1542L, (VECTOR(int64_t, 2))(0x026C881C3F4FA927L, 0x13EA7E3095CF1542L), (VECTOR(int64_t, 2))(0x026C881C3F4FA927L, 0x13EA7E3095CF1542L), 0x026C881C3F4FA927L, 0x13EA7E3095CF1542L, 0x026C881C3F4FA927L, 0x13EA7E3095CF1542L);
            VECTOR(int8_t, 16) l_473 = (VECTOR(int8_t, 16))(0x2CL, (VECTOR(int8_t, 4))(0x2CL, (VECTOR(int8_t, 2))(0x2CL, 0x16L), 0x16L), 0x16L, 0x2CL, 0x16L, (VECTOR(int8_t, 2))(0x2CL, 0x16L), (VECTOR(int8_t, 2))(0x2CL, 0x16L), 0x2CL, 0x16L, 0x2CL, 0x16L);
            VECTOR(int8_t, 4) l_478 = (VECTOR(int8_t, 4))(0x0EL, (VECTOR(int8_t, 2))(0x0EL, (-5L)), (-5L));
            int16_t *l_480 = (void*)0;
            int8_t *l_482 = &p_693->g_22;
            int32_t l_484 = (-1L);
            int32_t l_485 = 1L;
            int32_t l_486 = 0x7A3C1F2CL;
            int16_t *l_494 = (void*)0;
            int16_t *l_495 = (void*)0;
            int8_t **l_501 = (void*)0;
            int8_t ***l_500 = &l_501;
            int i;
            l_483 = (safe_lshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((*p_693->g_459) ^ ((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0UL, 0x4550L)))).odd, (p_693->g_225.s4 & (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(l_469.s3384c5130df2f6fd)).s2, ((safe_lshift_func_uint16_t_u_s(((((*l_482) = ((VECTOR(int8_t, 16))(0x24L, ((VECTOR(int8_t, 2))(p_693->g_472.sd9)), ((VECTOR(int8_t, 8))(l_473.s2dd58a95)), 0x25L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 2))(p_693->g_474.sc4)).xyyyyyxx, (int8_t)0x3CL, (int8_t)(249UL != (safe_add_func_int32_t_s_s(((p_42 && (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))((((p_693->g_78 &= (((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(p_693->g_477.s60890769)).s34, ((VECTOR(int8_t, 8))(l_478.xxwxxyxy)).s63))).xyyy)), ((VECTOR(uint8_t, 8))(p_693->g_479.s43922489)).lo))).w | (0x16E17C45L < 0L))) == ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((***l_410) , (l_481 & p_42)), p_693->g_251.f0.f2, 0x361FL, 6UL, 0xC101L, ((VECTOR(uint16_t, 2))(1UL)), 0UL, p_42, 0xFBD7L, 0xF844L, 1UL, 0x7D8FL, p_42, 0xE37AL, 0xFB39L)).odd)).s6) && p_42), p_693->g_375.x, ((VECTOR(int8_t, 2))(0x20L)), (-1L), 0x62L, p_693->g_109, 0x45L, p_42, ((VECTOR(int8_t, 4))((-6L))), (-10L), (-7L), 0x56L)))).s2 , p_693->g_7.w)) && p_693->g_251.f0.f4), l_473.s7)))))).s44)), 0x7FL, 0x12L)).s6) > 0x60L) | 0xB7FBL), 10)) && GROUP_DIVERGE(1, 1))))))) & 0x222FF502L)), p_42)), 2));
            --l_487;
            l_485 = (((6L || 4294967290UL) >= (((*p_693->g_45) = ((void*)0 != p_693->g_490)) >= (((p_693->g_375.y ^ (safe_rshift_func_uint16_t_u_u((p_42 && (l_486 = p_42)), (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((((*l_500) = &l_482) == &p_693->g_491[0][2]) >= 1UL), 2)), p_42))))) , p_693->g_25) <= l_469.s1))) & p_42);
        }
    }
    else
    { /* block id: 223 */
        int32_t l_511[4][2][10] = {{{0x6F2E9413L,0x61DA4A0CL,0x5CEAB8E1L,2L,0x749C9B0AL,2L,0x5CEAB8E1L,0x61DA4A0CL,0x6F2E9413L,1L},{0x6F2E9413L,0x61DA4A0CL,0x5CEAB8E1L,2L,0x749C9B0AL,2L,0x5CEAB8E1L,0x61DA4A0CL,0x6F2E9413L,1L}},{{0x6F2E9413L,0x61DA4A0CL,0x5CEAB8E1L,2L,0x749C9B0AL,2L,0x5CEAB8E1L,0x61DA4A0CL,0x6F2E9413L,1L},{0x6F2E9413L,0x61DA4A0CL,0x5CEAB8E1L,2L,0x749C9B0AL,2L,0x5CEAB8E1L,0x61DA4A0CL,0x6F2E9413L,1L}},{{0x6F2E9413L,0x61DA4A0CL,0x5CEAB8E1L,2L,0x749C9B0AL,2L,0x5CEAB8E1L,0x61DA4A0CL,0x6F2E9413L,1L},{0x6F2E9413L,0x61DA4A0CL,0x5CEAB8E1L,2L,0x749C9B0AL,2L,0x5CEAB8E1L,0x61DA4A0CL,0x6F2E9413L,1L}},{{0x6F2E9413L,0x61DA4A0CL,0x5CEAB8E1L,2L,0x749C9B0AL,2L,0x5CEAB8E1L,0x61DA4A0CL,0x6F2E9413L,1L},{0x6F2E9413L,0x61DA4A0CL,0x5CEAB8E1L,2L,0x749C9B0AL,2L,0x5CEAB8E1L,0x61DA4A0CL,0x6F2E9413L,1L}}};
        int32_t *l_515 = &l_398;
        int32_t *l_516 = (void*)0;
        int32_t *l_517 = &l_434;
        int32_t *l_518 = &l_511[1][0][4];
        int32_t *l_519 = &p_693->g_46;
        int32_t *l_520 = &l_434;
        int32_t *l_521 = &p_693->g_46;
        int32_t *l_522[9][4] = {{&l_434,&l_434,&p_693->g_46,&l_399},{&l_434,&l_434,&p_693->g_46,&l_399},{&l_434,&l_434,&p_693->g_46,&l_399},{&l_434,&l_434,&p_693->g_46,&l_399},{&l_434,&l_434,&p_693->g_46,&l_399},{&l_434,&l_434,&p_693->g_46,&l_399},{&l_434,&l_434,&p_693->g_46,&l_399},{&l_434,&l_434,&p_693->g_46,&l_399},{&l_434,&l_434,&p_693->g_46,&l_399}};
        uint16_t l_523[5][10] = {{0xF98BL,0xF98BL,0UL,0x75E7L,65535UL,0x75E7L,0UL,0xF98BL,0xF98BL,0UL},{0xF98BL,0xF98BL,0UL,0x75E7L,65535UL,0x75E7L,0UL,0xF98BL,0xF98BL,0UL},{0xF98BL,0xF98BL,0UL,0x75E7L,65535UL,0x75E7L,0UL,0xF98BL,0xF98BL,0UL},{0xF98BL,0xF98BL,0UL,0x75E7L,65535UL,0x75E7L,0UL,0xF98BL,0xF98BL,0UL},{0xF98BL,0xF98BL,0UL,0x75E7L,65535UL,0x75E7L,0UL,0xF98BL,0xF98BL,0UL}};
        int i, j, k;
        (*p_693->g_45) = ((safe_add_func_uint32_t_u_u(p_693->g_79[0], ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 2))(5L, 2L)).yxxy, (int32_t)((safe_add_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((((func_15(((void*)0 == l_508), p_693) , 0x3FFB2D5FDF7C9AA3L) > p_42) >= p_42) && (1UL != ((*l_508) == (*l_508)))), p_693->g_251.f0.f2)) == p_42), p_42)) > p_42), (int32_t)0x71040168L))).yzxxwxzz, ((VECTOR(int32_t, 8))((-10L)))))), ((VECTOR(int32_t, 4))(5L)), (*p_693->g_45), ((VECTOR(int32_t, 2))(0L)), 0x4DC30A8DL)))).sa76f, ((VECTOR(int32_t, 4))(0x738D6E93L))))).zxxxzwxzwwywwwyy, (int32_t)(*p_693->g_45)))).s3)) ^ l_511[1][0][4]);
        ++l_523[3][4];
    }
    (*l_80) = (*l_80);
    return p_42;
}


/* ------------------------------------------ */
/* 
 * reads : p_693->g_28.f2 p_693->g_251.f0.f5 p_693->g_45 p_693->g_28.f5
 * writes: p_693->g_28.f2 p_693->g_251.f0.f5 p_693->g_46 p_693->g_28.f5
 */
int32_t * func_47(int32_t  p_48, struct S3 * p_693)
{ /* block id: 107 */
    int32_t *l_271 = (void*)0;
    int32_t *l_273 = (void*)0;
    int32_t *l_274[1];
    VECTOR(int32_t, 16) l_279 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x10DB7468L), 0x10DB7468L), 0x10DB7468L, 0L, 0x10DB7468L, (VECTOR(int32_t, 2))(0L, 0x10DB7468L), (VECTOR(int32_t, 2))(0L, 0x10DB7468L), 0L, 0x10DB7468L, 0L, 0x10DB7468L);
    int i;
    for (i = 0; i < 1; i++)
        l_274[i] = (void*)0;
    for (p_693->g_28.f2 = 0; (p_693->g_28.f2 != 57); p_693->g_28.f2 = safe_add_func_uint64_t_u_u(p_693->g_28.f2, 4))
    { /* block id: 110 */
        struct S2 *l_267 = &p_693->g_218;
        struct S2 **l_266 = &l_267;
        int32_t *l_268 = &p_693->g_46;
        (*l_266) = &p_693->g_251;
        return l_268;
    }
    for (p_693->g_251.f0.f5 = (-9); (p_693->g_251.f0.f5 <= 29); p_693->g_251.f0.f5 = safe_add_func_uint16_t_u_u(p_693->g_251.f0.f5, 9))
    { /* block id: 116 */
        return l_271;
    }
    (*p_693->g_45) = (p_48 != 255UL);
    for (p_693->g_28.f5 = 0; (p_693->g_28.f5 == 21); p_693->g_28.f5++)
    { /* block id: 122 */
        uint16_t l_280 = 0xA792L;
        l_280 &= ((VECTOR(int32_t, 16))(((*p_693->g_45) = (safe_add_func_int8_t_s_s(0x29L, GROUP_DIVERGE(2, 1)))), 0x33F0C5EFL, 0x0F57C5D9L, ((VECTOR(int32_t, 2))(7L, 0x2EC9180DL)), 0L, (-1L), (-1L), p_48, 0x352E2389L, 0x5CCCCFEBL, ((VECTOR(int32_t, 2))(l_279.s50)), p_48, (-1L), 1L)).sa;
        return l_273;
    }
    return l_271;
}


/* ------------------------------------------ */
/* 
 * reads : p_693->g_28.f6 p_693->g_79 p_693->g_3 p_693->g_251 p_693->g_225 p_693->g_7 p_693->g_102 p_693->g_218.f1
 * writes: p_693->g_28.f6 p_693->g_46 p_693->g_22 p_693->g_109 p_693->g_102 p_693->g_170
 */
int32_t  func_49(int32_t  p_50, int32_t ** p_51, int32_t * p_52, struct S3 * p_693)
{ /* block id: 91 */
    int32_t *l_246 = (void*)0;
    int32_t *l_252 = &p_693->g_46;
    int8_t *l_257 = &p_693->g_22;
    uint64_t *l_258 = (void*)0;
    uint64_t *l_259 = &p_693->g_109;
    int64_t *l_260[3];
    uint8_t l_261 = 253UL;
    int32_t *l_262[2];
    int64_t l_263 = 1L;
    int i;
    for (i = 0; i < 3; i++)
        l_260[i] = &p_693->g_218.f0.f2;
    for (i = 0; i < 2; i++)
        l_262[i] = (void*)0;
    l_246 = (*p_51);
    for (p_693->g_28.f6 = 0; (p_693->g_28.f6 < (-21)); --p_693->g_28.f6)
    { /* block id: 95 */
        (*p_51) = (*p_51);
    }
    l_263 ^= (safe_rshift_func_uint16_t_u_u((p_693->g_79[0] ^ (((*l_246) != ((p_693->g_251 , p_50) != ((*l_252) = (*p_52)))) < (p_693->g_170 = (p_693->g_102.s7 &= (l_261 = (safe_mod_func_int32_t_s_s((((*l_259) = (safe_lshift_func_int8_t_s_s(((*l_257) = (0x2AF4L & p_693->g_225.s1)), ((*l_246) || p_693->g_7.w)))) >= p_50), 0x4A6C6382L))))))), 7));
    return p_693->g_218.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_693->g_225 p_693->g_163.f2 p_693->g_79 p_693->g_228 p_693->g_194.f4 p_693->g_238 p_693->g_163.f3 p_693->g_3 p_693->g_46 p_693->g_28.f0
 * writes: p_693->g_163.f2 p_693->g_46 p_693->g_28.f0 p_693->g_222
 */
int32_t * func_57(uint64_t  p_58, int32_t ** p_59, int32_t *** p_60, int64_t  p_61, uint8_t  p_62, struct S3 * p_693)
{ /* block id: 78 */
    VECTOR(uint32_t, 8) l_229 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x9A88A25FL), 0x9A88A25FL), 0x9A88A25FL, 0UL, 0x9A88A25FL);
    VECTOR(uint8_t, 16) l_232 = (VECTOR(uint8_t, 16))(0xF1L, (VECTOR(uint8_t, 4))(0xF1L, (VECTOR(uint8_t, 2))(0xF1L, 0xDBL), 0xDBL), 0xDBL, 0xF1L, 0xDBL, (VECTOR(uint8_t, 2))(0xF1L, 0xDBL), (VECTOR(uint8_t, 2))(0xF1L, 0xDBL), 0xF1L, 0xDBL, 0xF1L, 0xDBL);
    uint8_t *l_233 = &p_693->g_163[3][8][3].f5;
    uint8_t **l_234 = (void*)0;
    uint8_t **l_235 = &l_233;
    VECTOR(uint8_t, 2) l_236 = (VECTOR(uint8_t, 2))(0xE6L, 0UL);
    VECTOR(uint8_t, 8) l_237 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 250UL), 250UL), 250UL, 0UL, 250UL);
    uint8_t l_239[4] = {0xC9L,0xC9L,0xC9L,0xC9L};
    int32_t *l_245 = &p_693->g_3;
    int i;
    (***p_60) |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((safe_add_func_uint8_t_u_u((((p_693->g_163[3][8][3].f2 ^= ((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 4))(2L, (-7L), (-1L), 0L)).xywwyxzwyzwxyywz, ((VECTOR(int64_t, 2))(p_693->g_225.s8d)).xxyyxxxyyxxyxyyy))).s2) <= p_62) ^ (((p_693->g_79[0] < (safe_sub_func_uint64_t_u_u(p_58, ((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 8))(p_693->g_228.yzzwxyzz)), ((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 2))(2L, 0x7D0374A0L)).yyxyxxxxyyxyyxxy, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 4))(l_229.s0430)).xyxxywzw, ((VECTOR(uint32_t, 2))(0x08575AFBL, 0x8E5D2A18L)).xyxxyyxy))), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x1CL, (-1L))).yyyxxxxyyyxyxxyx)).s838d, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 4))(0x75L, 0x6EL, 0x07L, (-1L))).xzxzxzwzwyyywyzx, (int8_t)p_693->g_194[7].f4))).s7fdc))))).lo)).odd, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 2))(l_232.sa6)).yxyxyxxy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(0x0FL, 0xF0L)), (uint8_t)(((*l_235) = l_233) == (void*)0)))).yxxxyxxyxyxyxyxx)).s4f, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 4))(l_236.yxyx)), ((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(l_237.s07))))).yyxx, ((VECTOR(uint8_t, 2))(5UL, 0xA9L)).xxxx))).zzzwwxzw, ((VECTOR(uint8_t, 8))(p_693->g_238.s34314676)), ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0xDEL, 255UL)), 0x62L, 0x57L)).wxwyzyyz)).odd)).wxxzyywz)).s5605216227264031, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(l_232.s6, 0x73L, 255UL, 0xB2L)), (uint8_t)0UL))).wxwzxxwx)).hi))).zxzyxzwzzyxyxyxz)), ((VECTOR(uint8_t, 16))(255UL))))).s39d8, ((VECTOR(uint8_t, 4))(0UL)), ((VECTOR(uint8_t, 4))(0x09L))))).xyzzzyxxxwywzxxy, ((VECTOR(uint8_t, 16))(0x75L))))).hi))).even)))))).even))))), 2UL, 0xE5L)).wxwzzzzw))).hi)).x)), ((VECTOR(uint32_t, 4))(0x2E9CB8CFL)), 0xB1620BE4L, 2UL, 0UL)).s0140457766220675)).lo))).s74)).xyyyxxxxyxxxyyyx, (uint32_t)0UL, (uint32_t)p_693->g_163[3][8][3].f3))).s4d, ((VECTOR(uint32_t, 2))(0xBD002887L))))).yxyyyyxyxxxyyxyy)).seb)).yyxyyyyy)).s4352735076771330))).even))).s2))) <= 0x0032L) & l_239[2])), p_693->g_3)) | l_236.x), 0x7B271F1CL, ((VECTOR(int32_t, 2))((-6L))), ((VECTOR(int32_t, 8))(0x62193F55L)), ((VECTOR(int32_t, 4))(0L)))).s1c)).xxxx)).odd)).xxxxyxyy)), ((VECTOR(int32_t, 8))(0x159CBB96L))))), ((VECTOR(int32_t, 8))(0x40AD49DCL))))).s63, ((VECTOR(int32_t, 2))(0L))))))).lo;
    for (p_693->g_28.f0 = (-22); (p_693->g_28.f0 <= 3); p_693->g_28.f0 = safe_add_func_int16_t_s_s(p_693->g_28.f0, 3))
    { /* block id: 84 */
        uint64_t l_242 = 0x53FBAF237D2005FDL;
        (*p_59) = (**p_60);
        if (l_242)
            break;
    }
    (***p_60) = (safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_693->local_2_offset, get_local_id(2), 10), 4));
    return l_245;
}


/* ------------------------------------------ */
/* 
 * reads : p_693->g_109 p_693->g_163 p_693->g_comm_values p_693->g_3 p_693->g_78 p_693->g_102 p_693->g_194 p_693->g_45 p_693->g_46 p_693->g_199 p_693->g_200 p_693->g_202 p_693->g_204
 * writes: p_693->g_109 p_693->g_78 p_693->l_comm_values p_693->g_46 p_693->g_199 p_693->g_203 p_693->g_205 p_693->g_163
 */
uint8_t  func_65(int32_t *** p_66, uint16_t  p_67, int64_t  p_68, struct S3 * p_693)
{ /* block id: 50 */
    int32_t *l_152 = (void*)0;
    int32_t *l_153 = &p_693->g_46;
    int32_t *l_154 = (void*)0;
    int32_t *l_155[8][5][4] = {{{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0}},{{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0}},{{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0}},{{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0}},{{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0}},{{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0}},{{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0}},{{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0},{&p_693->g_46,&p_693->g_46,(void*)0,(void*)0}}};
    uint8_t l_156 = 0UL;
    VECTOR(uint64_t, 8) l_161 = (VECTOR(uint64_t, 8))(0x7033876E539E2D7BL, (VECTOR(uint64_t, 4))(0x7033876E539E2D7BL, (VECTOR(uint64_t, 2))(0x7033876E539E2D7BL, 0xF36016005261B61DL), 0xF36016005261B61DL), 0xF36016005261B61DL, 0x7033876E539E2D7BL, 0xF36016005261B61DL);
    uint64_t *l_162 = &p_693->g_109;
    int16_t *l_166[5] = {&p_693->g_78,&p_693->g_78,&p_693->g_78,&p_693->g_78,&p_693->g_78};
    int8_t *l_167 = &p_693->g_22;
    uint8_t *l_171 = (void*)0;
    uint8_t *l_172[5][3][5] = {{{&p_693->g_163[3][8][3].f5,&p_693->g_163[3][8][3].f5,&l_156,&p_693->g_163[3][8][3].f5,&l_156},{&p_693->g_163[3][8][3].f5,&p_693->g_163[3][8][3].f5,&l_156,&p_693->g_163[3][8][3].f5,&l_156},{&p_693->g_163[3][8][3].f5,&p_693->g_163[3][8][3].f5,&l_156,&p_693->g_163[3][8][3].f5,&l_156}},{{&p_693->g_163[3][8][3].f5,&p_693->g_163[3][8][3].f5,&l_156,&p_693->g_163[3][8][3].f5,&l_156},{&p_693->g_163[3][8][3].f5,&p_693->g_163[3][8][3].f5,&l_156,&p_693->g_163[3][8][3].f5,&l_156},{&p_693->g_163[3][8][3].f5,&p_693->g_163[3][8][3].f5,&l_156,&p_693->g_163[3][8][3].f5,&l_156}},{{&p_693->g_163[3][8][3].f5,&p_693->g_163[3][8][3].f5,&l_156,&p_693->g_163[3][8][3].f5,&l_156},{&p_693->g_163[3][8][3].f5,&p_693->g_163[3][8][3].f5,&l_156,&p_693->g_163[3][8][3].f5,&l_156},{&p_693->g_163[3][8][3].f5,&p_693->g_163[3][8][3].f5,&l_156,&p_693->g_163[3][8][3].f5,&l_156}},{{&p_693->g_163[3][8][3].f5,&p_693->g_163[3][8][3].f5,&l_156,&p_693->g_163[3][8][3].f5,&l_156},{&p_693->g_163[3][8][3].f5,&p_693->g_163[3][8][3].f5,&l_156,&p_693->g_163[3][8][3].f5,&l_156},{&p_693->g_163[3][8][3].f5,&p_693->g_163[3][8][3].f5,&l_156,&p_693->g_163[3][8][3].f5,&l_156}},{{&p_693->g_163[3][8][3].f5,&p_693->g_163[3][8][3].f5,&l_156,&p_693->g_163[3][8][3].f5,&l_156},{&p_693->g_163[3][8][3].f5,&p_693->g_163[3][8][3].f5,&l_156,&p_693->g_163[3][8][3].f5,&l_156},{&p_693->g_163[3][8][3].f5,&p_693->g_163[3][8][3].f5,&l_156,&p_693->g_163[3][8][3].f5,&l_156}}};
    uint64_t l_173[2];
    VECTOR(int64_t, 8) l_189 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x39A1F309C8CC324EL), 0x39A1F309C8CC324EL), 0x39A1F309C8CC324EL, 1L, 0x39A1F309C8CC324EL);
    struct S1 *l_201 = &p_693->g_163[1][2][0];
    VECTOR(int32_t, 16) l_209 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-1L)), (-1L)), (-1L), 2L, (-1L), (VECTOR(int32_t, 2))(2L, (-1L)), (VECTOR(int32_t, 2))(2L, (-1L)), 2L, (-1L), 2L, (-1L));
    VECTOR(int32_t, 8) l_215 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_173[i] = 0x275483D43F8D3BAAL;
    l_156++;
    if (((safe_sub_func_uint64_t_u_u(((*l_162) &= ((VECTOR(uint64_t, 2))(l_161.s45)).lo), ((p_693->g_163[3][8][3] , (safe_lshift_func_int16_t_s_s((p_693->g_78 = p_68), 2))) <= p_68))) >= ((l_167 != &p_693->g_22) != (((VECTOR(int32_t, 8))((safe_lshift_func_uint8_t_u_s((((l_173[1]--) >= (safe_div_func_uint8_t_u_u(8UL, ((((safe_mod_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(p_68, (p_693->g_163[3][8][3].f0 , p_693->g_comm_values[p_693->tid]))), p_68)) < 0x4F513D574E489B31L) ^ 0x896AL) | 0xC186C19286BF70BFL)))) == p_693->g_3), p_68)), 4L, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x56761363L)), (-4L), (-1L))).s7 | 0x2FC00396L))))
    { /* block id: 55 */
        VECTOR(int32_t, 4) l_184 = (VECTOR(int32_t, 4))(0x4786DD5BL, (VECTOR(int32_t, 2))(0x4786DD5BL, 0x01D4B723L), 0x01D4B723L);
        int16_t *l_185 = &p_693->g_78;
        int16_t **l_186[10] = {&l_166[3],&l_166[3],&l_166[3],&l_166[3],&l_166[3],&l_166[3],&l_166[3],&l_166[3],&l_166[3],&l_166[3]};
        int64_t *l_190 = (void*)0;
        uint32_t *l_193 = (void*)0;
        int i;
        (*p_693->g_45) = (safe_mul_func_int16_t_s_s(p_693->g_78, ((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_184.ywwyyzyy)).s5340210077374570)).lo, ((VECTOR(int32_t, 4))(((GROUP_DIVERGE(0, 1) > (((l_185 == (l_166[0] = l_185)) > (p_693->l_comm_values[(safe_mod_func_uint32_t_u_u(p_693->tid, 2))] = ((l_184.y > (safe_lshift_func_uint8_t_u_s(p_693->g_78, 7))) & ((VECTOR(int64_t, 4))(l_189.s1261)).w))) < (safe_add_func_uint64_t_u_u(((p_693->g_102.s7 ^ ((((l_193 == &p_693->g_25) , (p_693->g_194[7] , &l_156)) == &l_156) != p_68)) == 0x2127L), p_693->g_102.sb)))) & l_184.w), 4L, 0x44F4BF18L, 5L)).zzzxxxyz, ((VECTOR(int32_t, 8))(0L))))).hi)).x || p_693->g_194[7].f1) | p_693->g_163[3][8][3].f4)));
        p_693->g_46 &= (safe_mul_func_uint32_t_u_u(p_693->g_163[3][8][3].f1, (1UL == 0x77A95440L)));
        for (p_693->g_46 = 0; (p_693->g_46 < 7); p_693->g_46 = safe_add_func_uint64_t_u_u(p_693->g_46, 1))
        { /* block id: 62 */
            (*p_693->g_200) = p_693->g_199;
        }
    }
    else
    { /* block id: 65 */
        (*p_693->g_202) = l_201;
    }
    p_693->g_205 = p_693->g_204;
    for (p_68 = 0; (p_68 >= (-19)); --p_68)
    { /* block id: 71 */
        VECTOR(int32_t, 16) l_213 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x4B151E5AL), 0x4B151E5AL), 0x4B151E5AL, 2L, 0x4B151E5AL, (VECTOR(int32_t, 2))(2L, 0x4B151E5AL), (VECTOR(int32_t, 2))(2L, 0x4B151E5AL), 2L, 0x4B151E5AL, 2L, 0x4B151E5AL);
        int8_t **l_216 = &l_167;
        int32_t l_220 = 0x36676534L;
        int i;
        l_220 ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(p_693->g_208.xyywyyyy)).s0402325364576601, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(l_209.s226b)).even, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(0x42AF7E87L, 0L)), ((VECTOR(int32_t, 4))(p_693->g_210.s1175)).even))), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x1A7C559FL, 0L)).xyxx)).zyxywzyz, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 0x7D2A6672L)).yyxxxxyxxxyxxyxy)).s43, (int32_t)(safe_mul_func_uint8_t_u_u(3UL, 0x2EL))))).xyyxyxxy))).s34, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_213.s46834a6a2cb048df)).s69, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(p_693->g_214.s7fc17014830bdbf4)).sc341))).hi, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(l_215.s1533)).zwywxxwy, ((VECTOR(int32_t, 8))((*p_693->g_45), (((*p_693->g_200) , (*l_153)) , l_213.s6), ((((((*l_216) = l_172[2][1][1]) != ((((((VECTOR(uint8_t, 16))(((((safe_unary_minus_func_uint16_t_u((&p_693->g_22 == ((p_693->g_79[0] , p_693->g_218) , l_172[0][2][4])))) < l_213.se) , (*p_693->g_202)) != (void*)0), p_68, p_68, ((VECTOR(uint8_t, 8))(1UL)), 248UL, 0x75L, 0xEAL, 251UL, 0xFAL)).s4 >= GROUP_DIVERGE(1, 1)) | FAKE_DIVERGE(p_693->group_2_offset, get_group_id(2), 10)) , p_693->g_219[0][1][4]) , (void*)0)) & p_68) < p_68) , 0L), 0x0BFB858CL, p_68, 0x3185F234L, 0x69DE38F6L, 0x1B02EBABL))))).s67))), ((VECTOR(int32_t, 2))(1L))))), ((VECTOR(int32_t, 2))((-1L))))))))).yxyy, ((VECTOR(int32_t, 4))(5L))))).xwwwyzzzzzzyxyzz))))).sbf)).hi;
        (*l_201) = (*l_201);
        if ((*p_693->g_45))
            break;
    }
    return p_68;
}


/* ------------------------------------------ */
/* 
 * reads : p_693->g_45 p_693->g_46 p_693->g_43 p_693->g_102 p_693->g_28.f4 p_693->l_comm_values
 * writes: p_693->g_46 p_693->g_25 p_693->g_28.f4
 */
int32_t *** func_69(int32_t  p_70, struct S3 * p_693)
{ /* block id: 30 */
    int32_t *l_83 = (void*)0;
    int32_t *l_84[4] = {&p_693->g_46,&p_693->g_46,&p_693->g_46,&p_693->g_46};
    int32_t ***l_151 = (void*)0;
    int i;
    (*p_693->g_45) = 0x63353D15L;
    (*p_693->g_45) |= (&l_84[2] != (p_70 , &p_693->g_45));
    for (p_693->g_46 = 0; (p_693->g_46 > (-2)); p_693->g_46 = safe_sub_func_int16_t_s_s(p_693->g_46, 2))
    { /* block id: 35 */
        VECTOR(int8_t, 2) l_87 = (VECTOR(int8_t, 2))(1L, (-1L));
        uint32_t *l_107 = (void*)0;
        uint64_t *l_108[1][2];
        int32_t l_110 = 1L;
        int32_t l_111 = 1L;
        int32_t l_129 = 0L;
        int32_t l_134 = (-5L);
        int32_t l_138 = 0L;
        int32_t l_139 = (-1L);
        int32_t l_143 = 0x4599D9CEL;
        int32_t l_144 = 1L;
        int32_t l_145 = (-10L);
        int32_t l_146 = 0x76D7A650L;
        int32_t l_147 = 0x4DDB0EE1L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_108[i][j] = &p_693->g_109;
        }
        l_111 = ((p_70 , 0x6ECFL) >= (((0x0BL < ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 4))(l_87.yxxx)).xyywzzxx))).s75)).hi) == ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_693->g_43.x, ((((safe_div_func_int32_t_s_s(0L, l_87.y)) > 1UL) , (l_110 = (((VECTOR(int64_t, 8))(p_693->g_102.s78bf6e46)).s6 ^ (safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(0x2D08F565L, (p_693->g_25 = ((&p_693->g_78 != &p_693->g_78) | 0x35L)))), GROUP_DIVERGE(0, 1)))))) && 0L))), p_70)), 6)), p_693->g_28.f4)), p_70)) , p_70)) < 1UL));
        if ((*p_693->g_45))
            break;
        for (p_693->g_28.f4 = 11; (p_693->g_28.f4 < 40); p_693->g_28.f4 = safe_add_func_int64_t_s_s(p_693->g_28.f4, 1))
        { /* block id: 42 */
            int64_t l_116[8][5][6] = {{{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)}},{{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)}},{{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)}},{{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)}},{{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)}},{{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)}},{{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)}},{{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)},{0L,0L,(-1L),0x1071DA066FCE70BDL,(-1L),(-1L)}}};
            int64_t *l_125[7];
            VECTOR(int16_t, 2) l_126 = (VECTOR(int16_t, 2))(0L, 0x10C6L);
            int32_t l_127 = (-1L);
            int32_t l_128 = 0x1E387D5AL;
            int32_t l_130 = (-1L);
            int32_t l_131 = (-7L);
            int32_t l_132 = 0x2C53A9CDL;
            int32_t l_133 = (-1L);
            int32_t l_135 = 0x1AFFA9D3L;
            int32_t l_136 = 0x12315917L;
            int32_t l_137 = 0x00C8DFE3L;
            int32_t l_140 = (-9L);
            int32_t l_141 = 1L;
            int32_t l_142[6] = {1L,0x3408DA17L,1L,1L,0x3408DA17L,1L};
            uint16_t l_148 = 0x4D34L;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_125[i] = (void*)0;
            l_127 ^= ((safe_lshift_func_int16_t_s_s(((l_116[1][1][5] < (safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s(p_693->l_comm_values[(safe_mod_func_uint32_t_u_u(p_693->tid, 2))], (safe_mul_func_uint8_t_u_u((p_70 || p_70), p_693->g_46)))) ^ (l_126.x = (safe_lshift_func_int8_t_s_u((((l_107 == l_83) , 0x807ABEAB5F9293DCL) & (&p_693->g_3 == &p_693->g_3)), p_70)))), p_70))) & p_70), p_70)) >= p_693->g_102.s2);
            l_148--;
        }
        if ((*p_693->g_45))
            break;
    }
    return l_151;
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
    struct S3 c_694;
    struct S3* p_693 = &c_694;
    struct S3 c_695 = {
        0x1878ABC1L, // p_693->g_3
        (VECTOR(int32_t, 4))(0x47706695L, (VECTOR(int32_t, 2))(0x47706695L, (-1L)), (-1L)), // p_693->g_7
        0x6524L, // p_693->g_8
        1L, // p_693->g_22
        4294967292UL, // p_693->g_25
        {0x4AFB9B03F06E9126L,0L,0x5370A27EA102817AL,3UL,0xD4E1BE66L,0x7FE0AB02DA2EA94AL,0x7C395B56L}, // p_693->g_28
        (VECTOR(int32_t, 2))(0x51FAEF75L, (-1L)), // p_693->g_43
        0x205E82EFL, // p_693->g_46
        &p_693->g_46, // p_693->g_45
        (-1L), // p_693->g_78
        {1L}, // p_693->g_79
        (VECTOR(int64_t, 16))(0x3BB4DD17DDF17533L, (VECTOR(int64_t, 4))(0x3BB4DD17DDF17533L, (VECTOR(int64_t, 2))(0x3BB4DD17DDF17533L, 5L), 5L), 5L, 0x3BB4DD17DDF17533L, 5L, (VECTOR(int64_t, 2))(0x3BB4DD17DDF17533L, 5L), (VECTOR(int64_t, 2))(0x3BB4DD17DDF17533L, 5L), 0x3BB4DD17DDF17533L, 5L, 0x3BB4DD17DDF17533L, 5L), // p_693->g_102
        0UL, // p_693->g_109
        {{{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}}},{{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}}},{{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}}},{{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}},{{0x034F85F5BBE69026L,0L,9L,-1L,0x41356796L,253UL},{0x473109D701B9DBF9L,0x70L,0x69A3CA292C396BA7L,0L,0L,0xCDL},{1L,0x4FL,0L,0x7A2E7622L,6L,9UL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L},{-8L,0x0FL,0x56F7D28365250192L,0x020759C2L,1L,0x87L},{0x214107A232681D3FL,0x1CL,1L,3L,0x240A1BE3L,0xCFL},{-1L,0x4CL,0x0745E241E9D9C4ECL,0x609C7BAEL,-1L,0x85L}}}}, // p_693->g_163
        0x4F5B647A3EA6D4CDL, // p_693->g_170
        {{0x0FC3FA4910D2A02AL,0x7BCB2FD8L,0x6973867C85D77755L,18446744073709551613UL,0xC527FB78L,-1L,0L},{0x0FC3FA4910D2A02AL,0x7BCB2FD8L,0x6973867C85D77755L,18446744073709551613UL,0xC527FB78L,-1L,0L},{0x0FC3FA4910D2A02AL,0x7BCB2FD8L,0x6973867C85D77755L,18446744073709551613UL,0xC527FB78L,-1L,0L},{0x0FC3FA4910D2A02AL,0x7BCB2FD8L,0x6973867C85D77755L,18446744073709551613UL,0xC527FB78L,-1L,0L},{0x0FC3FA4910D2A02AL,0x7BCB2FD8L,0x6973867C85D77755L,18446744073709551613UL,0xC527FB78L,-1L,0L},{0x0FC3FA4910D2A02AL,0x7BCB2FD8L,0x6973867C85D77755L,18446744073709551613UL,0xC527FB78L,-1L,0L},{0x0FC3FA4910D2A02AL,0x7BCB2FD8L,0x6973867C85D77755L,18446744073709551613UL,0xC527FB78L,-1L,0L},{0x0FC3FA4910D2A02AL,0x7BCB2FD8L,0x6973867C85D77755L,18446744073709551613UL,0xC527FB78L,-1L,0L}}, // p_693->g_194
        {{4L,0x6FL,9L,2L,0L,0UL},0x1389EEF9L,0L,{0x01F0DA4032D073D3L,0L,-1L,0L,1L,0x35L}}, // p_693->g_199
        &p_693->g_199, // p_693->g_200
        (void*)0, // p_693->g_203
        &p_693->g_203, // p_693->g_202
        {-3L,0x61E4EF5BL,0xB27EC888AE71177DL,18446744073709551615UL,0xFE44D65AL,-5L,7L}, // p_693->g_204
        {0x404B858AB036FB4CL,0x6F7012F4L,18446744073709551606UL,18446744073709551615UL,0xBC316DBCL,4L,0x759EB1C2L}, // p_693->g_205
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), // p_693->g_208
        (VECTOR(int32_t, 8))(0x479676ECL, (VECTOR(int32_t, 4))(0x479676ECL, (VECTOR(int32_t, 2))(0x479676ECL, 0x0F78F879L), 0x0F78F879L), 0x0F78F879L, 0x479676ECL, 0x0F78F879L), // p_693->g_210
        (VECTOR(int32_t, 16))(0x3AAB3402L, (VECTOR(int32_t, 4))(0x3AAB3402L, (VECTOR(int32_t, 2))(0x3AAB3402L, 0L), 0L), 0L, 0x3AAB3402L, 0L, (VECTOR(int32_t, 2))(0x3AAB3402L, 0L), (VECTOR(int32_t, 2))(0x3AAB3402L, 0L), 0x3AAB3402L, 0L, 0x3AAB3402L, 0L), // p_693->g_214
        {{0x471E7D03FE365464L,0x38L,0x28733E3E3F2E87FBL,-1L,0L,2UL},0x3DB5D53CL,0x01L,{0L,-1L,-1L,1L,0L,1UL}}, // p_693->g_218
        {{{{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x1F152CF7A2851D28L,0x6BL,0x232DB23941A26595L,0x64D0BADDL,1L,1UL},0x566B085FL,4L,{3L,-9L,0x00E2DE9E9C53EB0BL,0L,0x37442E03L,1UL}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}}},{{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x1F152CF7A2851D28L,0x6BL,0x232DB23941A26595L,0x64D0BADDL,1L,1UL},0x566B085FL,4L,{3L,-9L,0x00E2DE9E9C53EB0BL,0L,0x37442E03L,1UL}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}}},{{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x1F152CF7A2851D28L,0x6BL,0x232DB23941A26595L,0x64D0BADDL,1L,1UL},0x566B085FL,4L,{3L,-9L,0x00E2DE9E9C53EB0BL,0L,0x37442E03L,1UL}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}}},{{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x1F152CF7A2851D28L,0x6BL,0x232DB23941A26595L,0x64D0BADDL,1L,1UL},0x566B085FL,4L,{3L,-9L,0x00E2DE9E9C53EB0BL,0L,0x37442E03L,1UL}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}}},{{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x1F152CF7A2851D28L,0x6BL,0x232DB23941A26595L,0x64D0BADDL,1L,1UL},0x566B085FL,4L,{3L,-9L,0x00E2DE9E9C53EB0BL,0L,0x37442E03L,1UL}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}}},{{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x1F152CF7A2851D28L,0x6BL,0x232DB23941A26595L,0x64D0BADDL,1L,1UL},0x566B085FL,4L,{3L,-9L,0x00E2DE9E9C53EB0BL,0L,0x37442E03L,1UL}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}}},{{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x1F152CF7A2851D28L,0x6BL,0x232DB23941A26595L,0x64D0BADDL,1L,1UL},0x566B085FL,4L,{3L,-9L,0x00E2DE9E9C53EB0BL,0L,0x37442E03L,1UL}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}}},{{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x1F152CF7A2851D28L,0x6BL,0x232DB23941A26595L,0x64D0BADDL,1L,1UL},0x566B085FL,4L,{3L,-9L,0x00E2DE9E9C53EB0BL,0L,0x37442E03L,1UL}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}}},{{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x1F152CF7A2851D28L,0x6BL,0x232DB23941A26595L,0x64D0BADDL,1L,1UL},0x566B085FL,4L,{3L,-9L,0x00E2DE9E9C53EB0BL,0L,0x37442E03L,1UL}},{{-8L,0x1BL,1L,0x3AD44C0EL,-1L,0x44L},-1L,0x70L,{1L,0x40L,5L,0x03700777L,0x3A038821L,8UL}},{{0x12B33DF54FF36FD3L,0x78L,-5L,0L,1L,0xA0L},0L,-1L,{0x3B4ACA498FFDDE28L,2L,0x6EC281CBDBB2071CL,0L,0x55E0D183L,0x72L}}}}}, // p_693->g_219
        &p_693->g_3, // p_693->g_222
        {{&p_693->g_222},{&p_693->g_222},{&p_693->g_222},{&p_693->g_222}}, // p_693->g_221
        (VECTOR(int64_t, 16))(0x7995461525CF2355L, (VECTOR(int64_t, 4))(0x7995461525CF2355L, (VECTOR(int64_t, 2))(0x7995461525CF2355L, 0L), 0L), 0L, 0x7995461525CF2355L, 0L, (VECTOR(int64_t, 2))(0x7995461525CF2355L, 0L), (VECTOR(int64_t, 2))(0x7995461525CF2355L, 0L), 0x7995461525CF2355L, 0L, 0x7995461525CF2355L, 0L), // p_693->g_225
        (VECTOR(int64_t, 4))(0x6565D28072122262L, (VECTOR(int64_t, 2))(0x6565D28072122262L, (-1L)), (-1L)), // p_693->g_228
        (VECTOR(uint8_t, 8))(0xCCL, (VECTOR(uint8_t, 4))(0xCCL, (VECTOR(uint8_t, 2))(0xCCL, 255UL), 255UL), 255UL, 0xCCL, 255UL), // p_693->g_238
        {{0x418785F2767B4F87L,0x56L,0L,0x31664368L,0L,0x95L},0x10383B0FL,-2L,{0x0F594564CCF9BC4EL,5L,0x3E540315ADEC742EL,0x0BFDC94BL,-8L,0xC4L}}, // p_693->g_251
        (void*)0, // p_693->g_272
        {6L,0x25CFB3D0L,1UL,18446744073709551614UL,4294967289UL,0x72419EDF8ED8F0DAL,0L}, // p_693->g_368
        &p_693->g_194[7], // p_693->g_369
        (VECTOR(int8_t, 2))(0x20L, 0x74L), // p_693->g_375
        (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x5BB0A13F29BBA4FEL), 0x5BB0A13F29BBA4FEL), 0x5BB0A13F29BBA4FEL, 18446744073709551615UL, 0x5BB0A13F29BBA4FEL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x5BB0A13F29BBA4FEL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x5BB0A13F29BBA4FEL), 18446744073709551615UL, 0x5BB0A13F29BBA4FEL, 18446744073709551615UL, 0x5BB0A13F29BBA4FEL), // p_693->g_389
        (VECTOR(int16_t, 16))(0x3DF6L, (VECTOR(int16_t, 4))(0x3DF6L, (VECTOR(int16_t, 2))(0x3DF6L, (-7L)), (-7L)), (-7L), 0x3DF6L, (-7L), (VECTOR(int16_t, 2))(0x3DF6L, (-7L)), (VECTOR(int16_t, 2))(0x3DF6L, (-7L)), 0x3DF6L, (-7L), 0x3DF6L, (-7L)), // p_693->g_413
        1L, // p_693->g_441
        0UL, // p_693->g_442
        &p_693->g_251.f3.f5, // p_693->g_459
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x69L), 0x69L), 0x69L, (-1L), 0x69L, (VECTOR(int8_t, 2))((-1L), 0x69L), (VECTOR(int8_t, 2))((-1L), 0x69L), (-1L), 0x69L, (-1L), 0x69L), // p_693->g_472
        (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x5CL), 0x5CL), 0x5CL, 8L, 0x5CL, (VECTOR(int8_t, 2))(8L, 0x5CL), (VECTOR(int8_t, 2))(8L, 0x5CL), 8L, 0x5CL, 8L, 0x5CL), // p_693->g_474
        (VECTOR(int8_t, 16))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x04L), 0x04L), 0x04L, (-7L), 0x04L, (VECTOR(int8_t, 2))((-7L), 0x04L), (VECTOR(int8_t, 2))((-7L), 0x04L), (-7L), 0x04L, (-7L), 0x04L), // p_693->g_477
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 252UL), 252UL), 252UL, 255UL, 252UL, (VECTOR(uint8_t, 2))(255UL, 252UL), (VECTOR(uint8_t, 2))(255UL, 252UL), 255UL, 252UL, 255UL, 252UL), // p_693->g_479
        {{(void*)0,(void*)0,(void*)0}}, // p_693->g_491
        &p_693->g_491[0][2], // p_693->g_490
        (void*)0, // p_693->g_512
        (void*)0, // p_693->g_513
        (void*)0, // p_693->g_514
        0x516EL, // p_693->g_539
        65533UL, // p_693->g_543
        (void*)0, // p_693->g_548
        (VECTOR(uint8_t, 2))(0x71L, 0x5FL), // p_693->g_563
        (VECTOR(int16_t, 16))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 6L), 6L), 6L, 3L, 6L, (VECTOR(int16_t, 2))(3L, 6L), (VECTOR(int16_t, 2))(3L, 6L), 3L, 6L, 3L, 6L), // p_693->g_567
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x3388L), 0x3388L), 0x3388L, 0L, 0x3388L, (VECTOR(int16_t, 2))(0L, 0x3388L), (VECTOR(int16_t, 2))(0L, 0x3388L), 0L, 0x3388L, 0L, 0x3388L), // p_693->g_568
        (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x442892EFL), 0x442892EFL), 0x442892EFL, 7L, 0x442892EFL), // p_693->g_575
        0x2709B9B4L, // p_693->g_583
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint16_t, 2))(0UL, 1UL), (VECTOR(uint16_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL), // p_693->g_588
        (VECTOR(int16_t, 2))(0x5C90L, 0x32E1L), // p_693->g_619
        0UL, // p_693->g_627
        (VECTOR(uint64_t, 4))(0xC1148ABE16734A8BL, (VECTOR(uint64_t, 2))(0xC1148ABE16734A8BL, 0x94801CBA2862B4B8L), 0x94801CBA2862B4B8L), // p_693->g_667
        {{{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28},{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28}},{{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28},{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28}},{{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28},{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28}},{{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28},{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28}},{{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28},{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28}},{{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28},{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28}},{{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28},{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28}},{{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28},{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28}},{{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28},{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28}},{{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28},{&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28,&p_693->g_28}}}, // p_693->g_678
        (void*)0, // p_693->g_681
        {1L,0x7B30D907L,0x1A65ABB93C05CDC0L,0x265887475A21C31EL,0UL,0x038C1BF690867D09L,0x1695B291L}, // p_693->g_684
        0, // p_693->v_collective
        sequence_input[get_global_id(0)], // p_693->global_0_offset
        sequence_input[get_global_id(1)], // p_693->global_1_offset
        sequence_input[get_global_id(2)], // p_693->global_2_offset
        sequence_input[get_local_id(0)], // p_693->local_0_offset
        sequence_input[get_local_id(1)], // p_693->local_1_offset
        sequence_input[get_local_id(2)], // p_693->local_2_offset
        sequence_input[get_group_id(0)], // p_693->group_0_offset
        sequence_input[get_group_id(1)], // p_693->group_1_offset
        sequence_input[get_group_id(2)], // p_693->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_693->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_694 = c_695;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_693);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_693->g_3, "p_693->g_3", print_hash_value);
    transparent_crc(p_693->g_7.x, "p_693->g_7.x", print_hash_value);
    transparent_crc(p_693->g_7.y, "p_693->g_7.y", print_hash_value);
    transparent_crc(p_693->g_7.z, "p_693->g_7.z", print_hash_value);
    transparent_crc(p_693->g_7.w, "p_693->g_7.w", print_hash_value);
    transparent_crc(p_693->g_8, "p_693->g_8", print_hash_value);
    transparent_crc(p_693->g_22, "p_693->g_22", print_hash_value);
    transparent_crc(p_693->g_25, "p_693->g_25", print_hash_value);
    transparent_crc(p_693->g_28.f0, "p_693->g_28.f0", print_hash_value);
    transparent_crc(p_693->g_28.f1, "p_693->g_28.f1", print_hash_value);
    transparent_crc(p_693->g_28.f2, "p_693->g_28.f2", print_hash_value);
    transparent_crc(p_693->g_28.f3, "p_693->g_28.f3", print_hash_value);
    transparent_crc(p_693->g_28.f4, "p_693->g_28.f4", print_hash_value);
    transparent_crc(p_693->g_28.f5, "p_693->g_28.f5", print_hash_value);
    transparent_crc(p_693->g_28.f6, "p_693->g_28.f6", print_hash_value);
    transparent_crc(p_693->g_43.x, "p_693->g_43.x", print_hash_value);
    transparent_crc(p_693->g_43.y, "p_693->g_43.y", print_hash_value);
    transparent_crc(p_693->g_46, "p_693->g_46", print_hash_value);
    transparent_crc(p_693->g_78, "p_693->g_78", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_693->g_79[i], "p_693->g_79[i]", print_hash_value);

    }
    transparent_crc(p_693->g_102.s0, "p_693->g_102.s0", print_hash_value);
    transparent_crc(p_693->g_102.s1, "p_693->g_102.s1", print_hash_value);
    transparent_crc(p_693->g_102.s2, "p_693->g_102.s2", print_hash_value);
    transparent_crc(p_693->g_102.s3, "p_693->g_102.s3", print_hash_value);
    transparent_crc(p_693->g_102.s4, "p_693->g_102.s4", print_hash_value);
    transparent_crc(p_693->g_102.s5, "p_693->g_102.s5", print_hash_value);
    transparent_crc(p_693->g_102.s6, "p_693->g_102.s6", print_hash_value);
    transparent_crc(p_693->g_102.s7, "p_693->g_102.s7", print_hash_value);
    transparent_crc(p_693->g_102.s8, "p_693->g_102.s8", print_hash_value);
    transparent_crc(p_693->g_102.s9, "p_693->g_102.s9", print_hash_value);
    transparent_crc(p_693->g_102.sa, "p_693->g_102.sa", print_hash_value);
    transparent_crc(p_693->g_102.sb, "p_693->g_102.sb", print_hash_value);
    transparent_crc(p_693->g_102.sc, "p_693->g_102.sc", print_hash_value);
    transparent_crc(p_693->g_102.sd, "p_693->g_102.sd", print_hash_value);
    transparent_crc(p_693->g_102.se, "p_693->g_102.se", print_hash_value);
    transparent_crc(p_693->g_102.sf, "p_693->g_102.sf", print_hash_value);
    transparent_crc(p_693->g_109, "p_693->g_109", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_693->g_163[i][j][k].f0, "p_693->g_163[i][j][k].f0", print_hash_value);
                transparent_crc(p_693->g_163[i][j][k].f1, "p_693->g_163[i][j][k].f1", print_hash_value);
                transparent_crc(p_693->g_163[i][j][k].f2, "p_693->g_163[i][j][k].f2", print_hash_value);
                transparent_crc(p_693->g_163[i][j][k].f3, "p_693->g_163[i][j][k].f3", print_hash_value);
                transparent_crc(p_693->g_163[i][j][k].f4, "p_693->g_163[i][j][k].f4", print_hash_value);
                transparent_crc(p_693->g_163[i][j][k].f5, "p_693->g_163[i][j][k].f5", print_hash_value);

            }
        }
    }
    transparent_crc(p_693->g_170, "p_693->g_170", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_693->g_194[i].f0, "p_693->g_194[i].f0", print_hash_value);
        transparent_crc(p_693->g_194[i].f1, "p_693->g_194[i].f1", print_hash_value);
        transparent_crc(p_693->g_194[i].f2, "p_693->g_194[i].f2", print_hash_value);
        transparent_crc(p_693->g_194[i].f3, "p_693->g_194[i].f3", print_hash_value);
        transparent_crc(p_693->g_194[i].f4, "p_693->g_194[i].f4", print_hash_value);
        transparent_crc(p_693->g_194[i].f5, "p_693->g_194[i].f5", print_hash_value);
        transparent_crc(p_693->g_194[i].f6, "p_693->g_194[i].f6", print_hash_value);

    }
    transparent_crc(p_693->g_199.f0.f0, "p_693->g_199.f0.f0", print_hash_value);
    transparent_crc(p_693->g_199.f0.f1, "p_693->g_199.f0.f1", print_hash_value);
    transparent_crc(p_693->g_199.f0.f2, "p_693->g_199.f0.f2", print_hash_value);
    transparent_crc(p_693->g_199.f0.f3, "p_693->g_199.f0.f3", print_hash_value);
    transparent_crc(p_693->g_199.f0.f4, "p_693->g_199.f0.f4", print_hash_value);
    transparent_crc(p_693->g_199.f0.f5, "p_693->g_199.f0.f5", print_hash_value);
    transparent_crc(p_693->g_199.f1, "p_693->g_199.f1", print_hash_value);
    transparent_crc(p_693->g_199.f2, "p_693->g_199.f2", print_hash_value);
    transparent_crc(p_693->g_199.f3.f0, "p_693->g_199.f3.f0", print_hash_value);
    transparent_crc(p_693->g_199.f3.f1, "p_693->g_199.f3.f1", print_hash_value);
    transparent_crc(p_693->g_199.f3.f2, "p_693->g_199.f3.f2", print_hash_value);
    transparent_crc(p_693->g_199.f3.f3, "p_693->g_199.f3.f3", print_hash_value);
    transparent_crc(p_693->g_199.f3.f4, "p_693->g_199.f3.f4", print_hash_value);
    transparent_crc(p_693->g_199.f3.f5, "p_693->g_199.f3.f5", print_hash_value);
    transparent_crc(p_693->g_204.f0, "p_693->g_204.f0", print_hash_value);
    transparent_crc(p_693->g_204.f1, "p_693->g_204.f1", print_hash_value);
    transparent_crc(p_693->g_204.f2, "p_693->g_204.f2", print_hash_value);
    transparent_crc(p_693->g_204.f3, "p_693->g_204.f3", print_hash_value);
    transparent_crc(p_693->g_204.f4, "p_693->g_204.f4", print_hash_value);
    transparent_crc(p_693->g_204.f5, "p_693->g_204.f5", print_hash_value);
    transparent_crc(p_693->g_204.f6, "p_693->g_204.f6", print_hash_value);
    transparent_crc(p_693->g_205.f0, "p_693->g_205.f0", print_hash_value);
    transparent_crc(p_693->g_205.f1, "p_693->g_205.f1", print_hash_value);
    transparent_crc(p_693->g_205.f2, "p_693->g_205.f2", print_hash_value);
    transparent_crc(p_693->g_205.f3, "p_693->g_205.f3", print_hash_value);
    transparent_crc(p_693->g_205.f4, "p_693->g_205.f4", print_hash_value);
    transparent_crc(p_693->g_205.f5, "p_693->g_205.f5", print_hash_value);
    transparent_crc(p_693->g_205.f6, "p_693->g_205.f6", print_hash_value);
    transparent_crc(p_693->g_208.x, "p_693->g_208.x", print_hash_value);
    transparent_crc(p_693->g_208.y, "p_693->g_208.y", print_hash_value);
    transparent_crc(p_693->g_208.z, "p_693->g_208.z", print_hash_value);
    transparent_crc(p_693->g_208.w, "p_693->g_208.w", print_hash_value);
    transparent_crc(p_693->g_210.s0, "p_693->g_210.s0", print_hash_value);
    transparent_crc(p_693->g_210.s1, "p_693->g_210.s1", print_hash_value);
    transparent_crc(p_693->g_210.s2, "p_693->g_210.s2", print_hash_value);
    transparent_crc(p_693->g_210.s3, "p_693->g_210.s3", print_hash_value);
    transparent_crc(p_693->g_210.s4, "p_693->g_210.s4", print_hash_value);
    transparent_crc(p_693->g_210.s5, "p_693->g_210.s5", print_hash_value);
    transparent_crc(p_693->g_210.s6, "p_693->g_210.s6", print_hash_value);
    transparent_crc(p_693->g_210.s7, "p_693->g_210.s7", print_hash_value);
    transparent_crc(p_693->g_214.s0, "p_693->g_214.s0", print_hash_value);
    transparent_crc(p_693->g_214.s1, "p_693->g_214.s1", print_hash_value);
    transparent_crc(p_693->g_214.s2, "p_693->g_214.s2", print_hash_value);
    transparent_crc(p_693->g_214.s3, "p_693->g_214.s3", print_hash_value);
    transparent_crc(p_693->g_214.s4, "p_693->g_214.s4", print_hash_value);
    transparent_crc(p_693->g_214.s5, "p_693->g_214.s5", print_hash_value);
    transparent_crc(p_693->g_214.s6, "p_693->g_214.s6", print_hash_value);
    transparent_crc(p_693->g_214.s7, "p_693->g_214.s7", print_hash_value);
    transparent_crc(p_693->g_214.s8, "p_693->g_214.s8", print_hash_value);
    transparent_crc(p_693->g_214.s9, "p_693->g_214.s9", print_hash_value);
    transparent_crc(p_693->g_214.sa, "p_693->g_214.sa", print_hash_value);
    transparent_crc(p_693->g_214.sb, "p_693->g_214.sb", print_hash_value);
    transparent_crc(p_693->g_214.sc, "p_693->g_214.sc", print_hash_value);
    transparent_crc(p_693->g_214.sd, "p_693->g_214.sd", print_hash_value);
    transparent_crc(p_693->g_214.se, "p_693->g_214.se", print_hash_value);
    transparent_crc(p_693->g_214.sf, "p_693->g_214.sf", print_hash_value);
    transparent_crc(p_693->g_218.f0.f0, "p_693->g_218.f0.f0", print_hash_value);
    transparent_crc(p_693->g_218.f0.f1, "p_693->g_218.f0.f1", print_hash_value);
    transparent_crc(p_693->g_218.f0.f2, "p_693->g_218.f0.f2", print_hash_value);
    transparent_crc(p_693->g_218.f0.f3, "p_693->g_218.f0.f3", print_hash_value);
    transparent_crc(p_693->g_218.f0.f4, "p_693->g_218.f0.f4", print_hash_value);
    transparent_crc(p_693->g_218.f0.f5, "p_693->g_218.f0.f5", print_hash_value);
    transparent_crc(p_693->g_218.f1, "p_693->g_218.f1", print_hash_value);
    transparent_crc(p_693->g_218.f2, "p_693->g_218.f2", print_hash_value);
    transparent_crc(p_693->g_218.f3.f0, "p_693->g_218.f3.f0", print_hash_value);
    transparent_crc(p_693->g_218.f3.f1, "p_693->g_218.f3.f1", print_hash_value);
    transparent_crc(p_693->g_218.f3.f2, "p_693->g_218.f3.f2", print_hash_value);
    transparent_crc(p_693->g_218.f3.f3, "p_693->g_218.f3.f3", print_hash_value);
    transparent_crc(p_693->g_218.f3.f4, "p_693->g_218.f3.f4", print_hash_value);
    transparent_crc(p_693->g_218.f3.f5, "p_693->g_218.f3.f5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_693->g_219[i][j][k].f0.f0, "p_693->g_219[i][j][k].f0.f0", print_hash_value);
                transparent_crc(p_693->g_219[i][j][k].f0.f1, "p_693->g_219[i][j][k].f0.f1", print_hash_value);
                transparent_crc(p_693->g_219[i][j][k].f0.f2, "p_693->g_219[i][j][k].f0.f2", print_hash_value);
                transparent_crc(p_693->g_219[i][j][k].f0.f3, "p_693->g_219[i][j][k].f0.f3", print_hash_value);
                transparent_crc(p_693->g_219[i][j][k].f0.f4, "p_693->g_219[i][j][k].f0.f4", print_hash_value);
                transparent_crc(p_693->g_219[i][j][k].f0.f5, "p_693->g_219[i][j][k].f0.f5", print_hash_value);
                transparent_crc(p_693->g_219[i][j][k].f1, "p_693->g_219[i][j][k].f1", print_hash_value);
                transparent_crc(p_693->g_219[i][j][k].f2, "p_693->g_219[i][j][k].f2", print_hash_value);
                transparent_crc(p_693->g_219[i][j][k].f3.f0, "p_693->g_219[i][j][k].f3.f0", print_hash_value);
                transparent_crc(p_693->g_219[i][j][k].f3.f1, "p_693->g_219[i][j][k].f3.f1", print_hash_value);
                transparent_crc(p_693->g_219[i][j][k].f3.f2, "p_693->g_219[i][j][k].f3.f2", print_hash_value);
                transparent_crc(p_693->g_219[i][j][k].f3.f3, "p_693->g_219[i][j][k].f3.f3", print_hash_value);
                transparent_crc(p_693->g_219[i][j][k].f3.f4, "p_693->g_219[i][j][k].f3.f4", print_hash_value);
                transparent_crc(p_693->g_219[i][j][k].f3.f5, "p_693->g_219[i][j][k].f3.f5", print_hash_value);

            }
        }
    }
    transparent_crc(p_693->g_225.s0, "p_693->g_225.s0", print_hash_value);
    transparent_crc(p_693->g_225.s1, "p_693->g_225.s1", print_hash_value);
    transparent_crc(p_693->g_225.s2, "p_693->g_225.s2", print_hash_value);
    transparent_crc(p_693->g_225.s3, "p_693->g_225.s3", print_hash_value);
    transparent_crc(p_693->g_225.s4, "p_693->g_225.s4", print_hash_value);
    transparent_crc(p_693->g_225.s5, "p_693->g_225.s5", print_hash_value);
    transparent_crc(p_693->g_225.s6, "p_693->g_225.s6", print_hash_value);
    transparent_crc(p_693->g_225.s7, "p_693->g_225.s7", print_hash_value);
    transparent_crc(p_693->g_225.s8, "p_693->g_225.s8", print_hash_value);
    transparent_crc(p_693->g_225.s9, "p_693->g_225.s9", print_hash_value);
    transparent_crc(p_693->g_225.sa, "p_693->g_225.sa", print_hash_value);
    transparent_crc(p_693->g_225.sb, "p_693->g_225.sb", print_hash_value);
    transparent_crc(p_693->g_225.sc, "p_693->g_225.sc", print_hash_value);
    transparent_crc(p_693->g_225.sd, "p_693->g_225.sd", print_hash_value);
    transparent_crc(p_693->g_225.se, "p_693->g_225.se", print_hash_value);
    transparent_crc(p_693->g_225.sf, "p_693->g_225.sf", print_hash_value);
    transparent_crc(p_693->g_228.x, "p_693->g_228.x", print_hash_value);
    transparent_crc(p_693->g_228.y, "p_693->g_228.y", print_hash_value);
    transparent_crc(p_693->g_228.z, "p_693->g_228.z", print_hash_value);
    transparent_crc(p_693->g_228.w, "p_693->g_228.w", print_hash_value);
    transparent_crc(p_693->g_238.s0, "p_693->g_238.s0", print_hash_value);
    transparent_crc(p_693->g_238.s1, "p_693->g_238.s1", print_hash_value);
    transparent_crc(p_693->g_238.s2, "p_693->g_238.s2", print_hash_value);
    transparent_crc(p_693->g_238.s3, "p_693->g_238.s3", print_hash_value);
    transparent_crc(p_693->g_238.s4, "p_693->g_238.s4", print_hash_value);
    transparent_crc(p_693->g_238.s5, "p_693->g_238.s5", print_hash_value);
    transparent_crc(p_693->g_238.s6, "p_693->g_238.s6", print_hash_value);
    transparent_crc(p_693->g_238.s7, "p_693->g_238.s7", print_hash_value);
    transparent_crc(p_693->g_251.f0.f0, "p_693->g_251.f0.f0", print_hash_value);
    transparent_crc(p_693->g_251.f0.f1, "p_693->g_251.f0.f1", print_hash_value);
    transparent_crc(p_693->g_251.f0.f2, "p_693->g_251.f0.f2", print_hash_value);
    transparent_crc(p_693->g_251.f0.f3, "p_693->g_251.f0.f3", print_hash_value);
    transparent_crc(p_693->g_251.f0.f4, "p_693->g_251.f0.f4", print_hash_value);
    transparent_crc(p_693->g_251.f0.f5, "p_693->g_251.f0.f5", print_hash_value);
    transparent_crc(p_693->g_251.f1, "p_693->g_251.f1", print_hash_value);
    transparent_crc(p_693->g_251.f2, "p_693->g_251.f2", print_hash_value);
    transparent_crc(p_693->g_251.f3.f0, "p_693->g_251.f3.f0", print_hash_value);
    transparent_crc(p_693->g_251.f3.f1, "p_693->g_251.f3.f1", print_hash_value);
    transparent_crc(p_693->g_251.f3.f2, "p_693->g_251.f3.f2", print_hash_value);
    transparent_crc(p_693->g_251.f3.f3, "p_693->g_251.f3.f3", print_hash_value);
    transparent_crc(p_693->g_251.f3.f4, "p_693->g_251.f3.f4", print_hash_value);
    transparent_crc(p_693->g_251.f3.f5, "p_693->g_251.f3.f5", print_hash_value);
    transparent_crc(p_693->g_368.f0, "p_693->g_368.f0", print_hash_value);
    transparent_crc(p_693->g_368.f1, "p_693->g_368.f1", print_hash_value);
    transparent_crc(p_693->g_368.f2, "p_693->g_368.f2", print_hash_value);
    transparent_crc(p_693->g_368.f3, "p_693->g_368.f3", print_hash_value);
    transparent_crc(p_693->g_368.f4, "p_693->g_368.f4", print_hash_value);
    transparent_crc(p_693->g_368.f5, "p_693->g_368.f5", print_hash_value);
    transparent_crc(p_693->g_368.f6, "p_693->g_368.f6", print_hash_value);
    transparent_crc(p_693->g_375.x, "p_693->g_375.x", print_hash_value);
    transparent_crc(p_693->g_375.y, "p_693->g_375.y", print_hash_value);
    transparent_crc(p_693->g_389.s0, "p_693->g_389.s0", print_hash_value);
    transparent_crc(p_693->g_389.s1, "p_693->g_389.s1", print_hash_value);
    transparent_crc(p_693->g_389.s2, "p_693->g_389.s2", print_hash_value);
    transparent_crc(p_693->g_389.s3, "p_693->g_389.s3", print_hash_value);
    transparent_crc(p_693->g_389.s4, "p_693->g_389.s4", print_hash_value);
    transparent_crc(p_693->g_389.s5, "p_693->g_389.s5", print_hash_value);
    transparent_crc(p_693->g_389.s6, "p_693->g_389.s6", print_hash_value);
    transparent_crc(p_693->g_389.s7, "p_693->g_389.s7", print_hash_value);
    transparent_crc(p_693->g_389.s8, "p_693->g_389.s8", print_hash_value);
    transparent_crc(p_693->g_389.s9, "p_693->g_389.s9", print_hash_value);
    transparent_crc(p_693->g_389.sa, "p_693->g_389.sa", print_hash_value);
    transparent_crc(p_693->g_389.sb, "p_693->g_389.sb", print_hash_value);
    transparent_crc(p_693->g_389.sc, "p_693->g_389.sc", print_hash_value);
    transparent_crc(p_693->g_389.sd, "p_693->g_389.sd", print_hash_value);
    transparent_crc(p_693->g_389.se, "p_693->g_389.se", print_hash_value);
    transparent_crc(p_693->g_389.sf, "p_693->g_389.sf", print_hash_value);
    transparent_crc(p_693->g_413.s0, "p_693->g_413.s0", print_hash_value);
    transparent_crc(p_693->g_413.s1, "p_693->g_413.s1", print_hash_value);
    transparent_crc(p_693->g_413.s2, "p_693->g_413.s2", print_hash_value);
    transparent_crc(p_693->g_413.s3, "p_693->g_413.s3", print_hash_value);
    transparent_crc(p_693->g_413.s4, "p_693->g_413.s4", print_hash_value);
    transparent_crc(p_693->g_413.s5, "p_693->g_413.s5", print_hash_value);
    transparent_crc(p_693->g_413.s6, "p_693->g_413.s6", print_hash_value);
    transparent_crc(p_693->g_413.s7, "p_693->g_413.s7", print_hash_value);
    transparent_crc(p_693->g_413.s8, "p_693->g_413.s8", print_hash_value);
    transparent_crc(p_693->g_413.s9, "p_693->g_413.s9", print_hash_value);
    transparent_crc(p_693->g_413.sa, "p_693->g_413.sa", print_hash_value);
    transparent_crc(p_693->g_413.sb, "p_693->g_413.sb", print_hash_value);
    transparent_crc(p_693->g_413.sc, "p_693->g_413.sc", print_hash_value);
    transparent_crc(p_693->g_413.sd, "p_693->g_413.sd", print_hash_value);
    transparent_crc(p_693->g_413.se, "p_693->g_413.se", print_hash_value);
    transparent_crc(p_693->g_413.sf, "p_693->g_413.sf", print_hash_value);
    transparent_crc(p_693->g_441, "p_693->g_441", print_hash_value);
    transparent_crc(p_693->g_442, "p_693->g_442", print_hash_value);
    transparent_crc(p_693->g_472.s0, "p_693->g_472.s0", print_hash_value);
    transparent_crc(p_693->g_472.s1, "p_693->g_472.s1", print_hash_value);
    transparent_crc(p_693->g_472.s2, "p_693->g_472.s2", print_hash_value);
    transparent_crc(p_693->g_472.s3, "p_693->g_472.s3", print_hash_value);
    transparent_crc(p_693->g_472.s4, "p_693->g_472.s4", print_hash_value);
    transparent_crc(p_693->g_472.s5, "p_693->g_472.s5", print_hash_value);
    transparent_crc(p_693->g_472.s6, "p_693->g_472.s6", print_hash_value);
    transparent_crc(p_693->g_472.s7, "p_693->g_472.s7", print_hash_value);
    transparent_crc(p_693->g_472.s8, "p_693->g_472.s8", print_hash_value);
    transparent_crc(p_693->g_472.s9, "p_693->g_472.s9", print_hash_value);
    transparent_crc(p_693->g_472.sa, "p_693->g_472.sa", print_hash_value);
    transparent_crc(p_693->g_472.sb, "p_693->g_472.sb", print_hash_value);
    transparent_crc(p_693->g_472.sc, "p_693->g_472.sc", print_hash_value);
    transparent_crc(p_693->g_472.sd, "p_693->g_472.sd", print_hash_value);
    transparent_crc(p_693->g_472.se, "p_693->g_472.se", print_hash_value);
    transparent_crc(p_693->g_472.sf, "p_693->g_472.sf", print_hash_value);
    transparent_crc(p_693->g_474.s0, "p_693->g_474.s0", print_hash_value);
    transparent_crc(p_693->g_474.s1, "p_693->g_474.s1", print_hash_value);
    transparent_crc(p_693->g_474.s2, "p_693->g_474.s2", print_hash_value);
    transparent_crc(p_693->g_474.s3, "p_693->g_474.s3", print_hash_value);
    transparent_crc(p_693->g_474.s4, "p_693->g_474.s4", print_hash_value);
    transparent_crc(p_693->g_474.s5, "p_693->g_474.s5", print_hash_value);
    transparent_crc(p_693->g_474.s6, "p_693->g_474.s6", print_hash_value);
    transparent_crc(p_693->g_474.s7, "p_693->g_474.s7", print_hash_value);
    transparent_crc(p_693->g_474.s8, "p_693->g_474.s8", print_hash_value);
    transparent_crc(p_693->g_474.s9, "p_693->g_474.s9", print_hash_value);
    transparent_crc(p_693->g_474.sa, "p_693->g_474.sa", print_hash_value);
    transparent_crc(p_693->g_474.sb, "p_693->g_474.sb", print_hash_value);
    transparent_crc(p_693->g_474.sc, "p_693->g_474.sc", print_hash_value);
    transparent_crc(p_693->g_474.sd, "p_693->g_474.sd", print_hash_value);
    transparent_crc(p_693->g_474.se, "p_693->g_474.se", print_hash_value);
    transparent_crc(p_693->g_474.sf, "p_693->g_474.sf", print_hash_value);
    transparent_crc(p_693->g_477.s0, "p_693->g_477.s0", print_hash_value);
    transparent_crc(p_693->g_477.s1, "p_693->g_477.s1", print_hash_value);
    transparent_crc(p_693->g_477.s2, "p_693->g_477.s2", print_hash_value);
    transparent_crc(p_693->g_477.s3, "p_693->g_477.s3", print_hash_value);
    transparent_crc(p_693->g_477.s4, "p_693->g_477.s4", print_hash_value);
    transparent_crc(p_693->g_477.s5, "p_693->g_477.s5", print_hash_value);
    transparent_crc(p_693->g_477.s6, "p_693->g_477.s6", print_hash_value);
    transparent_crc(p_693->g_477.s7, "p_693->g_477.s7", print_hash_value);
    transparent_crc(p_693->g_477.s8, "p_693->g_477.s8", print_hash_value);
    transparent_crc(p_693->g_477.s9, "p_693->g_477.s9", print_hash_value);
    transparent_crc(p_693->g_477.sa, "p_693->g_477.sa", print_hash_value);
    transparent_crc(p_693->g_477.sb, "p_693->g_477.sb", print_hash_value);
    transparent_crc(p_693->g_477.sc, "p_693->g_477.sc", print_hash_value);
    transparent_crc(p_693->g_477.sd, "p_693->g_477.sd", print_hash_value);
    transparent_crc(p_693->g_477.se, "p_693->g_477.se", print_hash_value);
    transparent_crc(p_693->g_477.sf, "p_693->g_477.sf", print_hash_value);
    transparent_crc(p_693->g_479.s0, "p_693->g_479.s0", print_hash_value);
    transparent_crc(p_693->g_479.s1, "p_693->g_479.s1", print_hash_value);
    transparent_crc(p_693->g_479.s2, "p_693->g_479.s2", print_hash_value);
    transparent_crc(p_693->g_479.s3, "p_693->g_479.s3", print_hash_value);
    transparent_crc(p_693->g_479.s4, "p_693->g_479.s4", print_hash_value);
    transparent_crc(p_693->g_479.s5, "p_693->g_479.s5", print_hash_value);
    transparent_crc(p_693->g_479.s6, "p_693->g_479.s6", print_hash_value);
    transparent_crc(p_693->g_479.s7, "p_693->g_479.s7", print_hash_value);
    transparent_crc(p_693->g_479.s8, "p_693->g_479.s8", print_hash_value);
    transparent_crc(p_693->g_479.s9, "p_693->g_479.s9", print_hash_value);
    transparent_crc(p_693->g_479.sa, "p_693->g_479.sa", print_hash_value);
    transparent_crc(p_693->g_479.sb, "p_693->g_479.sb", print_hash_value);
    transparent_crc(p_693->g_479.sc, "p_693->g_479.sc", print_hash_value);
    transparent_crc(p_693->g_479.sd, "p_693->g_479.sd", print_hash_value);
    transparent_crc(p_693->g_479.se, "p_693->g_479.se", print_hash_value);
    transparent_crc(p_693->g_479.sf, "p_693->g_479.sf", print_hash_value);
    transparent_crc(p_693->g_539, "p_693->g_539", print_hash_value);
    transparent_crc(p_693->g_543, "p_693->g_543", print_hash_value);
    transparent_crc(p_693->g_563.x, "p_693->g_563.x", print_hash_value);
    transparent_crc(p_693->g_563.y, "p_693->g_563.y", print_hash_value);
    transparent_crc(p_693->g_567.s0, "p_693->g_567.s0", print_hash_value);
    transparent_crc(p_693->g_567.s1, "p_693->g_567.s1", print_hash_value);
    transparent_crc(p_693->g_567.s2, "p_693->g_567.s2", print_hash_value);
    transparent_crc(p_693->g_567.s3, "p_693->g_567.s3", print_hash_value);
    transparent_crc(p_693->g_567.s4, "p_693->g_567.s4", print_hash_value);
    transparent_crc(p_693->g_567.s5, "p_693->g_567.s5", print_hash_value);
    transparent_crc(p_693->g_567.s6, "p_693->g_567.s6", print_hash_value);
    transparent_crc(p_693->g_567.s7, "p_693->g_567.s7", print_hash_value);
    transparent_crc(p_693->g_567.s8, "p_693->g_567.s8", print_hash_value);
    transparent_crc(p_693->g_567.s9, "p_693->g_567.s9", print_hash_value);
    transparent_crc(p_693->g_567.sa, "p_693->g_567.sa", print_hash_value);
    transparent_crc(p_693->g_567.sb, "p_693->g_567.sb", print_hash_value);
    transparent_crc(p_693->g_567.sc, "p_693->g_567.sc", print_hash_value);
    transparent_crc(p_693->g_567.sd, "p_693->g_567.sd", print_hash_value);
    transparent_crc(p_693->g_567.se, "p_693->g_567.se", print_hash_value);
    transparent_crc(p_693->g_567.sf, "p_693->g_567.sf", print_hash_value);
    transparent_crc(p_693->g_568.s0, "p_693->g_568.s0", print_hash_value);
    transparent_crc(p_693->g_568.s1, "p_693->g_568.s1", print_hash_value);
    transparent_crc(p_693->g_568.s2, "p_693->g_568.s2", print_hash_value);
    transparent_crc(p_693->g_568.s3, "p_693->g_568.s3", print_hash_value);
    transparent_crc(p_693->g_568.s4, "p_693->g_568.s4", print_hash_value);
    transparent_crc(p_693->g_568.s5, "p_693->g_568.s5", print_hash_value);
    transparent_crc(p_693->g_568.s6, "p_693->g_568.s6", print_hash_value);
    transparent_crc(p_693->g_568.s7, "p_693->g_568.s7", print_hash_value);
    transparent_crc(p_693->g_568.s8, "p_693->g_568.s8", print_hash_value);
    transparent_crc(p_693->g_568.s9, "p_693->g_568.s9", print_hash_value);
    transparent_crc(p_693->g_568.sa, "p_693->g_568.sa", print_hash_value);
    transparent_crc(p_693->g_568.sb, "p_693->g_568.sb", print_hash_value);
    transparent_crc(p_693->g_568.sc, "p_693->g_568.sc", print_hash_value);
    transparent_crc(p_693->g_568.sd, "p_693->g_568.sd", print_hash_value);
    transparent_crc(p_693->g_568.se, "p_693->g_568.se", print_hash_value);
    transparent_crc(p_693->g_568.sf, "p_693->g_568.sf", print_hash_value);
    transparent_crc(p_693->g_575.s0, "p_693->g_575.s0", print_hash_value);
    transparent_crc(p_693->g_575.s1, "p_693->g_575.s1", print_hash_value);
    transparent_crc(p_693->g_575.s2, "p_693->g_575.s2", print_hash_value);
    transparent_crc(p_693->g_575.s3, "p_693->g_575.s3", print_hash_value);
    transparent_crc(p_693->g_575.s4, "p_693->g_575.s4", print_hash_value);
    transparent_crc(p_693->g_575.s5, "p_693->g_575.s5", print_hash_value);
    transparent_crc(p_693->g_575.s6, "p_693->g_575.s6", print_hash_value);
    transparent_crc(p_693->g_575.s7, "p_693->g_575.s7", print_hash_value);
    transparent_crc(p_693->g_583, "p_693->g_583", print_hash_value);
    transparent_crc(p_693->g_588.s0, "p_693->g_588.s0", print_hash_value);
    transparent_crc(p_693->g_588.s1, "p_693->g_588.s1", print_hash_value);
    transparent_crc(p_693->g_588.s2, "p_693->g_588.s2", print_hash_value);
    transparent_crc(p_693->g_588.s3, "p_693->g_588.s3", print_hash_value);
    transparent_crc(p_693->g_588.s4, "p_693->g_588.s4", print_hash_value);
    transparent_crc(p_693->g_588.s5, "p_693->g_588.s5", print_hash_value);
    transparent_crc(p_693->g_588.s6, "p_693->g_588.s6", print_hash_value);
    transparent_crc(p_693->g_588.s7, "p_693->g_588.s7", print_hash_value);
    transparent_crc(p_693->g_588.s8, "p_693->g_588.s8", print_hash_value);
    transparent_crc(p_693->g_588.s9, "p_693->g_588.s9", print_hash_value);
    transparent_crc(p_693->g_588.sa, "p_693->g_588.sa", print_hash_value);
    transparent_crc(p_693->g_588.sb, "p_693->g_588.sb", print_hash_value);
    transparent_crc(p_693->g_588.sc, "p_693->g_588.sc", print_hash_value);
    transparent_crc(p_693->g_588.sd, "p_693->g_588.sd", print_hash_value);
    transparent_crc(p_693->g_588.se, "p_693->g_588.se", print_hash_value);
    transparent_crc(p_693->g_588.sf, "p_693->g_588.sf", print_hash_value);
    transparent_crc(p_693->g_619.x, "p_693->g_619.x", print_hash_value);
    transparent_crc(p_693->g_619.y, "p_693->g_619.y", print_hash_value);
    transparent_crc(p_693->g_627, "p_693->g_627", print_hash_value);
    transparent_crc(p_693->g_667.x, "p_693->g_667.x", print_hash_value);
    transparent_crc(p_693->g_667.y, "p_693->g_667.y", print_hash_value);
    transparent_crc(p_693->g_667.z, "p_693->g_667.z", print_hash_value);
    transparent_crc(p_693->g_667.w, "p_693->g_667.w", print_hash_value);
    transparent_crc(p_693->g_684.f0, "p_693->g_684.f0", print_hash_value);
    transparent_crc(p_693->g_684.f1, "p_693->g_684.f1", print_hash_value);
    transparent_crc(p_693->g_684.f2, "p_693->g_684.f2", print_hash_value);
    transparent_crc(p_693->g_684.f3, "p_693->g_684.f3", print_hash_value);
    transparent_crc(p_693->g_684.f4, "p_693->g_684.f4", print_hash_value);
    transparent_crc(p_693->g_684.f5, "p_693->g_684.f5", print_hash_value);
    transparent_crc(p_693->g_684.f6, "p_693->g_684.f6", print_hash_value);
    transparent_crc(p_693->v_collective, "p_693->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 6; i++)
            transparent_crc(p_693->g_special_values[i + 6 * get_linear_group_id()], "p_693->g_special_values[i + 6 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_693->l_comm_values[get_linear_local_id()], "p_693->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_693->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_693->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
