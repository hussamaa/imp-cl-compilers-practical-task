// --atomics 86 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 71,53,1 -l 71,1,1
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

__constant uint32_t permutations[10][71] = {
{18,51,39,21,32,26,17,50,34,33,29,15,46,53,19,25,61,56,5,63,55,1,0,28,62,10,69,4,6,7,8,66,20,3,60,41,45,52,44,49,12,31,57,58,13,27,38,37,23,9,16,59,48,70,67,40,54,68,2,36,22,14,30,11,24,65,47,64,43,42,35}, // permutation 0
{64,19,55,22,16,60,5,13,30,38,46,35,23,53,67,59,70,0,17,54,26,51,63,25,8,56,14,57,52,1,50,62,7,29,11,39,6,41,44,61,43,31,49,33,2,40,9,68,47,20,10,15,12,24,65,48,32,58,3,36,4,21,34,45,37,69,27,42,28,18,66}, // permutation 1
{9,19,5,70,43,44,24,6,65,49,17,38,50,32,28,37,53,7,22,34,39,35,29,69,27,67,46,8,13,26,14,42,64,1,3,31,66,55,11,58,62,2,59,56,0,61,20,21,54,68,36,30,57,63,60,4,51,12,18,33,23,15,48,10,41,52,45,40,25,47,16}, // permutation 2
{35,15,10,14,41,37,0,43,46,55,40,50,48,24,5,58,7,18,62,45,17,70,31,9,52,60,2,12,64,53,26,32,22,8,49,25,28,34,39,42,21,11,65,27,66,51,6,57,67,63,61,59,20,33,56,30,23,19,16,38,4,1,68,29,13,36,54,69,3,47,44}, // permutation 3
{61,37,36,1,59,8,29,44,62,45,53,52,20,34,9,11,66,14,33,3,65,56,48,46,68,64,6,58,41,60,21,67,51,69,54,35,0,24,10,26,28,22,19,17,23,57,12,49,5,43,70,40,4,16,13,63,27,50,30,32,39,55,31,25,7,47,18,15,38,2,42}, // permutation 4
{64,19,44,47,27,49,24,28,63,65,41,36,56,16,45,8,55,1,12,67,59,61,25,20,70,17,3,38,15,2,18,13,26,4,29,53,68,54,46,10,42,9,48,34,11,39,60,21,35,5,51,0,62,58,30,66,40,32,50,31,14,52,23,6,69,43,37,33,57,7,22}, // permutation 5
{13,29,21,5,11,30,26,33,39,34,16,24,27,51,53,32,62,58,36,49,31,12,48,70,7,60,9,20,40,17,41,19,35,47,22,15,66,65,54,52,64,0,23,68,4,67,63,44,45,61,59,14,43,1,6,69,57,8,28,42,50,37,55,46,2,18,3,10,56,25,38}, // permutation 6
{70,28,5,32,59,57,23,17,30,44,43,21,52,18,46,15,50,67,55,19,53,56,37,66,2,45,65,4,34,0,16,7,38,29,39,22,10,60,64,33,61,26,1,13,6,48,25,49,24,47,3,8,62,69,40,27,68,36,12,41,54,31,14,63,51,9,42,11,58,20,35}, // permutation 7
{7,36,32,65,45,58,49,11,18,41,64,3,12,68,67,21,38,6,24,69,55,61,13,54,63,66,59,33,48,44,60,57,34,29,70,46,4,16,28,47,15,51,20,23,53,22,14,17,9,37,40,25,0,39,30,52,31,1,56,10,8,50,27,42,35,19,26,5,2,62,43}, // permutation 8
{31,10,45,2,13,15,29,44,14,5,36,9,17,27,42,50,62,8,65,7,1,11,3,60,4,41,57,58,68,28,64,25,19,26,47,51,38,67,52,22,70,21,0,59,69,63,46,53,16,34,66,54,40,55,48,33,49,30,39,24,61,32,23,35,18,43,37,56,12,20,6} // permutation 9
};

// Seed: 3054605760

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
};

struct S1 {
   int8_t  f0;
   int32_t  f1;
   int32_t  f2;
   int32_t  f3;
   int64_t  f4;
   uint32_t  f5;
};

struct S2 {
   int32_t  f0;
   uint16_t  f1;
};

struct S3 {
    int32_t g_3[7];
    int16_t g_18;
    struct S2 g_67;
    struct S2 g_71;
    struct S2 * volatile g_70[1][10];
    struct S2 * volatile g_72;
    VECTOR(int32_t, 8) g_80;
    int32_t * volatile g_83[2];
    int32_t * volatile g_84;
    int32_t *g_278;
    int32_t ** volatile g_283[8];
    int16_t g_306;
    volatile VECTOR(int16_t, 8) g_308;
    volatile VECTOR(int64_t, 8) g_309;
    uint32_t g_319;
    struct S2 *g_333;
    struct S2 **g_332;
    int16_t *g_340;
    int32_t g_352;
    int64_t g_358;
    int64_t g_359;
    VECTOR(int8_t, 16) g_365;
    volatile VECTOR(int32_t, 4) g_368;
    VECTOR(int32_t, 16) g_373;
    VECTOR(int8_t, 2) g_378;
    volatile VECTOR(int8_t, 2) g_420;
    uint32_t g_433[7];
    VECTOR(uint8_t, 2) g_442;
    struct S0 g_456;
    struct S0 * volatile g_455;
    struct S0 * volatile g_458;
    int32_t ** volatile g_462;
    VECTOR(int16_t, 4) g_475;
    VECTOR(int16_t, 2) g_516;
    VECTOR(int16_t, 2) g_517;
    volatile VECTOR(uint32_t, 8) g_525;
    VECTOR(int64_t, 4) g_528;
    volatile uint32_t **g_529;
    VECTOR(int16_t, 4) g_549;
    volatile VECTOR(int32_t, 2) g_561;
    volatile uint8_t g_570;
    volatile uint8_t * volatile g_569;
    VECTOR(uint16_t, 16) g_579;
    VECTOR(int8_t, 4) g_597;
    volatile struct S1 g_610[4][10][2];
    volatile struct S1 *g_609[8];
    struct S1 g_681;
    struct S1 *g_680;
    int32_t ** volatile g_688;
    volatile VECTOR(uint32_t, 8) g_708;
    struct S0 * volatile g_718[2];
    uint64_t g_740;
    int32_t ** volatile g_748;
    int32_t ** volatile g_749;
    VECTOR(int16_t, 4) g_771;
    uint32_t g_784;
    VECTOR(int32_t, 4) g_785;
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
int32_t  func_1(struct S3 * p_786);
struct S0  func_14(int32_t * p_15, uint16_t  p_16, int32_t * p_17, struct S3 * p_786);
int32_t * func_21(int32_t * p_22, struct S3 * p_786);
int32_t * func_23(int32_t * p_24, struct S3 * p_786);
int32_t * func_25(uint8_t  p_26, int8_t  p_27, int32_t * p_28, int32_t * p_29, int32_t * p_30, struct S3 * p_786);
struct S2  func_31(struct S2  p_32, struct S1  p_33, int32_t * p_34, struct S3 * p_786);
struct S1  func_36(int64_t  p_37, uint8_t  p_38, uint16_t  p_39, int32_t  p_40, struct S3 * p_786);
int32_t * func_47(int32_t * p_48, int32_t  p_49, struct S3 * p_786);
int16_t  func_57(int32_t * p_58, int32_t  p_59, struct S3 * p_786);
uint16_t  func_60(int32_t  p_61, uint64_t  p_62, uint16_t  p_63, uint32_t  p_64, struct S3 * p_786);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_786->g_18 p_786->g_3 p_786->g_comm_values p_786->l_comm_values p_786->g_67 p_786->g_80 p_786->g_71.f0 p_786->g_71.f1 p_786->g_278 p_786->g_308 p_786->g_309 p_786->g_332 p_786->g_365 p_786->g_368 p_786->g_373 p_786->g_378 p_786->g_433 p_786->g_442 p_786->g_359 p_786->g_455 p_786->g_458 p_786->g_462 p_786->g_333 p_786->g_475 p_786->g_456 p_786->g_340 p_786->g_516 p_786->g_517 p_786->g_306 p_786->g_319 p_786->g_525 p_786->g_528 p_786->g_529 p_786->g_358 p_786->g_549 p_786->g_561 p_786->g_569 p_786->g_579 p_786->g_597 p_786->g_609 p_786->g_570 p_786->g_680 p_786->g_688 p_786->g_740 p_786->g_749 p_786->g_681.f1 p_786->g_681 p_786->g_610.f0 p_786->g_771 p_786->g_352 p_786->g_784 p_786->g_785
 * writes: p_786->g_67 p_786->g_71 p_786->g_70 p_786->g_83 p_786->g_278 p_786->g_306 p_786->g_332 p_786->g_340 p_786->g_378 p_786->g_3 p_786->g_433 p_786->g_456 p_786->g_442 p_786->g_319 p_786->g_680 p_786->g_681.f1 p_786->g_358 p_786->g_681 p_786->g_610 p_786->g_740 p_786->g_365 p_786->g_784
 */
int32_t  func_1(struct S3 * p_786)
{ /* block id: 4 */
    int32_t *l_2[3][2] = {{&p_786->g_3[1],&p_786->g_3[1]},{&p_786->g_3[1],&p_786->g_3[1]},{&p_786->g_3[1],&p_786->g_3[1]}};
    int64_t l_4 = 0x01606DC068927649L;
    int32_t l_5[4][8][8] = {{{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L}},{{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L}},{{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L}},{{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L},{0x50187E52L,(-1L),(-1L),0x50187E52L,3L,0L,0L,3L}}};
    int32_t l_6 = 0x3D65BDF5L;
    int32_t l_7 = 0x7D66A435L;
    int64_t l_8 = (-6L);
    uint32_t l_9[4] = {0UL,0UL,0UL,0UL};
    struct S2 l_35 = {-10L,0x6030L};
    uint64_t l_45 = 0x26C4802A3EDB7DE5L;
    uint16_t l_46 = 0xE45AL;
    struct S0 *l_783[9][2] = {{(void*)0,&p_786->g_456},{(void*)0,&p_786->g_456},{(void*)0,&p_786->g_456},{(void*)0,&p_786->g_456},{(void*)0,&p_786->g_456},{(void*)0,&p_786->g_456},{(void*)0,&p_786->g_456},{(void*)0,&p_786->g_456},{(void*)0,&p_786->g_456}};
    int i, j, k;
    ++l_9[3];
    p_786->g_784 |= ((safe_add_func_uint64_t_u_u((((((*p_786->g_458) = func_14(&p_786->g_3[2], (p_786->g_18 , (safe_mod_func_uint32_t_u_u(4294967295UL, FAKE_DIVERGE(p_786->group_0_offset, get_group_id(0), 10)))), func_21(func_23(func_25(p_786->g_3[1], p_786->g_comm_values[p_786->tid], (func_31(l_35, (p_786->g_18 , func_36((safe_mul_func_uint16_t_u_u(p_786->l_comm_values[(safe_mod_func_uint32_t_u_u(p_786->tid, 71))], (safe_rshift_func_int16_t_s_u(p_786->l_comm_values[(safe_mod_func_uint32_t_u_u(p_786->tid, 71))], p_786->g_18)))), l_45, p_786->g_18, l_46, p_786)), &p_786->g_3[1], p_786) , &l_6), &l_6, &p_786->g_3[1], p_786), p_786), p_786), p_786)) , p_786->g_525.s1) >= GROUP_DIVERGE(0, 1)) , p_786->g_740), (-1L))) != 3L);
    (*p_786->g_278) ^= ((VECTOR(int32_t, 8))(p_786->g_785.yxwwxyzx)).s1;
    return p_786->g_308.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_786->g_610.f0 p_786->g_771 p_786->g_comm_values p_786->g_3 p_786->g_319 p_786->g_365 p_786->g_67.f0 p_786->g_352 p_786->g_458 p_786->g_456
 * writes: p_786->g_365 p_786->g_681.f0 p_786->g_740 p_786->g_3 p_786->g_278
 */
struct S0  func_14(int32_t * p_15, uint16_t  p_16, int32_t * p_17, struct S3 * p_786)
{ /* block id: 332 */
    uint8_t l_761[1][10][6] = {{{255UL,0x5CL,0x5CL,255UL,0x89L,0xBAL},{255UL,0x5CL,0x5CL,255UL,0x89L,0xBAL},{255UL,0x5CL,0x5CL,255UL,0x89L,0xBAL},{255UL,0x5CL,0x5CL,255UL,0x89L,0xBAL},{255UL,0x5CL,0x5CL,255UL,0x89L,0xBAL},{255UL,0x5CL,0x5CL,255UL,0x89L,0xBAL},{255UL,0x5CL,0x5CL,255UL,0x89L,0xBAL},{255UL,0x5CL,0x5CL,255UL,0x89L,0xBAL},{255UL,0x5CL,0x5CL,255UL,0x89L,0xBAL},{255UL,0x5CL,0x5CL,255UL,0x89L,0xBAL}}};
    VECTOR(uint32_t, 16) l_764 = (VECTOR(uint32_t, 16))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967293UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967293UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967293UL, 4294967295UL), 4294967293UL, 4294967295UL, 4294967293UL, 4294967295UL);
    VECTOR(int64_t, 16) l_778 = (VECTOR(int64_t, 16))(0x22C920AC4626F95FL, (VECTOR(int64_t, 4))(0x22C920AC4626F95FL, (VECTOR(int64_t, 2))(0x22C920AC4626F95FL, 1L), 1L), 1L, 0x22C920AC4626F95FL, 1L, (VECTOR(int64_t, 2))(0x22C920AC4626F95FL, 1L), (VECTOR(int64_t, 2))(0x22C920AC4626F95FL, 1L), 0x22C920AC4626F95FL, 1L, 0x22C920AC4626F95FL, 1L);
    int8_t *l_779 = (void*)0;
    int8_t *l_780 = &p_786->g_681.f0;
    int32_t **l_781 = &p_786->g_278;
    uint64_t *l_782 = &p_786->g_740;
    int i, j, k;
    (*p_15) = ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((p_16 >= 2UL), ((p_16 | p_16) == ((*l_782) = (l_761[0][1][3] < (safe_add_func_uint8_t_u_u(((((((((*l_780) = (p_786->g_365.s7 &= (((VECTOR(uint32_t, 16))(l_764.s359028314fbb7a3b)).s6 , ((safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((p_786->g_610[1][8][1].f0 > ((safe_add_func_int16_t_s_s(l_761[0][1][3], ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(9L, 0x46E6L)).xxxy, ((VECTOR(int16_t, 8))(p_786->g_771.xwxxyywx)).even))).x)) & (((GROUP_DIVERGE(1, 1) || ((safe_mod_func_int32_t_s_s((safe_sub_func_int64_t_s_s((safe_add_func_uint16_t_u_u(p_786->g_comm_values[p_786->tid], (((VECTOR(int64_t, 8))(l_778.s368795e6)).s3 || p_16))), 0L)), 4294967295UL)) && (*p_15))) , 0x24L) & p_786->g_319))), 4)), 0x795A7433927B4A56L)) != l_761[0][1][4])))) , 7L) ^ (*p_17)) , l_781) == &p_786->g_278) >= p_16) ^ l_764.s1), 0x15L))))))), p_16)) && p_786->g_352);
    (*l_781) = func_21(((*l_781) = p_17), p_786);
    return (*p_786->g_458);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_21(int32_t * p_22, struct S3 * p_786)
{ /* block id: 330 */
    int32_t *l_756 = &p_786->g_67.f0;
    return l_756;
}


/* ------------------------------------------ */
/* 
 * reads : p_786->g_71.f1 p_786->g_comm_values p_786->g_308 p_786->g_309 p_786->g_71.f0 p_786->g_18 p_786->g_332 p_786->g_3 p_786->g_365 p_786->g_368 p_786->g_373 p_786->l_comm_values p_786->g_278 p_786->g_378 p_786->g_80 p_786->g_433 p_786->g_442 p_786->g_359 p_786->g_455 p_786->g_458 p_786->g_462 p_786->g_333 p_786->g_475 p_786->g_456 p_786->g_340 p_786->g_516 p_786->g_517 p_786->g_306 p_786->g_319 p_786->g_525 p_786->g_528 p_786->g_529 p_786->g_358 p_786->g_549 p_786->g_561 p_786->g_569 p_786->g_579 p_786->g_67.f0 p_786->g_597 p_786->g_609 p_786->g_570 p_786->g_680 p_786->g_67 p_786->g_688 p_786->g_740 p_786->g_749 p_786->g_681.f1 p_786->g_681
 * writes: p_786->g_71.f1 p_786->g_306 p_786->g_71.f0 p_786->g_332 p_786->g_67.f1 p_786->g_340 p_786->g_278 p_786->g_378 p_786->g_3 p_786->g_433 p_786->g_456 p_786->g_442 p_786->g_70 p_786->g_319 p_786->g_67.f0 p_786->g_680 p_786->g_67 p_786->g_71 p_786->g_83 p_786->g_681.f1 p_786->g_358 p_786->g_681 p_786->g_610 p_786->g_740
 */
int32_t * func_23(int32_t * p_24, struct S3 * p_786)
{ /* block id: 135 */
    int32_t l_291[6];
    uint8_t l_296 = 0xA4L;
    int16_t *l_327[10][10][2] = {{{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306}},{{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306}},{{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306}},{{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306}},{{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306}},{{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306}},{{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306}},{{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306}},{{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306}},{{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306},{&p_786->g_18,&p_786->g_306}}};
    uint16_t l_376 = 65529UL;
    uint32_t *l_391 = &p_786->g_319;
    int8_t l_399 = 1L;
    struct S1 l_428[3][6] = {{{-6L,8L,0x51E0C273L,9L,6L,4294967295UL},{-6L,8L,0x51E0C273L,9L,6L,4294967295UL},{0x6DL,0x17DFF864L,1L,1L,0x047C9DF72A45D010L,1UL},{0x4EL,0x26ADFA97L,0x21D78CFFL,5L,0x358EB3C0CCDA5011L,6UL},{1L,0x7BCB5F8AL,0x73DD5727L,0x6C7A3F15L,-1L,0xEA8BE30BL},{0x4EL,0x26ADFA97L,0x21D78CFFL,5L,0x358EB3C0CCDA5011L,6UL}},{{-6L,8L,0x51E0C273L,9L,6L,4294967295UL},{-6L,8L,0x51E0C273L,9L,6L,4294967295UL},{0x6DL,0x17DFF864L,1L,1L,0x047C9DF72A45D010L,1UL},{0x4EL,0x26ADFA97L,0x21D78CFFL,5L,0x358EB3C0CCDA5011L,6UL},{1L,0x7BCB5F8AL,0x73DD5727L,0x6C7A3F15L,-1L,0xEA8BE30BL},{0x4EL,0x26ADFA97L,0x21D78CFFL,5L,0x358EB3C0CCDA5011L,6UL}},{{-6L,8L,0x51E0C273L,9L,6L,4294967295UL},{-6L,8L,0x51E0C273L,9L,6L,4294967295UL},{0x6DL,0x17DFF864L,1L,1L,0x047C9DF72A45D010L,1UL},{0x4EL,0x26ADFA97L,0x21D78CFFL,5L,0x358EB3C0CCDA5011L,6UL},{1L,0x7BCB5F8AL,0x73DD5727L,0x6C7A3F15L,-1L,0xEA8BE30BL},{0x4EL,0x26ADFA97L,0x21D78CFFL,5L,0x358EB3C0CCDA5011L,6UL}}};
    int32_t l_452 = 0x5D66B430L;
    VECTOR(int8_t, 4) l_465 = (VECTOR(int8_t, 4))(0x3FL, (VECTOR(int8_t, 2))(0x3FL, 0x61L), 0x61L);
    uint64_t l_502[5][3][1] = {{{18446744073709551610UL},{18446744073709551610UL},{18446744073709551610UL}},{{18446744073709551610UL},{18446744073709551610UL},{18446744073709551610UL}},{{18446744073709551610UL},{18446744073709551610UL},{18446744073709551610UL}},{{18446744073709551610UL},{18446744073709551610UL},{18446744073709551610UL}},{{18446744073709551610UL},{18446744073709551610UL},{18446744073709551610UL}}};
    struct S0 l_509 = {0x937466989037601EL};
    uint32_t l_550 = 0x4E986F8EL;
    VECTOR(uint64_t, 2) l_551 = (VECTOR(uint64_t, 2))(0xD5886B7EAB73470CL, 18446744073709551609UL);
    struct S2 l_552 = {0x14D69BD1L,1UL};
    int8_t *l_555 = &l_399;
    uint16_t l_558 = 65535UL;
    volatile struct S1 *l_611 = &p_786->g_610[2][5][0];
    uint32_t l_685 = 0xC1AC9058L;
    VECTOR(int32_t, 4) l_698 = (VECTOR(int32_t, 4))(0x7FDDBAC2L, (VECTOR(int32_t, 2))(0x7FDDBAC2L, (-9L)), (-9L));
    VECTOR(int32_t, 4) l_704 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
    VECTOR(int32_t, 16) l_716 = (VECTOR(int32_t, 16))(0x35CFF39CL, (VECTOR(int32_t, 4))(0x35CFF39CL, (VECTOR(int32_t, 2))(0x35CFF39CL, 0x3AD78D22L), 0x3AD78D22L), 0x3AD78D22L, 0x35CFF39CL, 0x3AD78D22L, (VECTOR(int32_t, 2))(0x35CFF39CL, 0x3AD78D22L), (VECTOR(int32_t, 2))(0x35CFF39CL, 0x3AD78D22L), 0x35CFF39CL, 0x3AD78D22L, 0x35CFF39CL, 0x3AD78D22L);
    VECTOR(int8_t, 16) l_752 = (VECTOR(int8_t, 16))(0x36L, (VECTOR(int8_t, 4))(0x36L, (VECTOR(int8_t, 2))(0x36L, (-9L)), (-9L)), (-9L), 0x36L, (-9L), (VECTOR(int8_t, 2))(0x36L, (-9L)), (VECTOR(int8_t, 2))(0x36L, (-9L)), 0x36L, (-9L), 0x36L, (-9L));
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_291[i] = 5L;
    for (p_786->g_71.f1 = 0; (p_786->g_71.f1 != 8); p_786->g_71.f1 = safe_add_func_int32_t_s_s(p_786->g_71.f1, 8))
    { /* block id: 138 */
        int32_t *l_287 = &p_786->g_71.f0;
        int32_t *l_288 = (void*)0;
        int32_t *l_289 = (void*)0;
        int32_t *l_290[5][9][2] = {{{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0}},{{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0}},{{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0}},{{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0}},{{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0},{&p_786->g_67.f0,&p_786->g_67.f0}}};
        int64_t l_292 = 0x245E3DE9200326CEL;
        int64_t l_293 = (-8L);
        int32_t l_294 = (-1L);
        int32_t l_295 = (-10L);
        int16_t *l_305 = &p_786->g_306;
        VECTOR(uint8_t, 16) l_307 = (VECTOR(uint8_t, 16))(0x44L, (VECTOR(uint8_t, 4))(0x44L, (VECTOR(uint8_t, 2))(0x44L, 0x7CL), 0x7CL), 0x7CL, 0x44L, 0x7CL, (VECTOR(uint8_t, 2))(0x44L, 0x7CL), (VECTOR(uint8_t, 2))(0x44L, 0x7CL), 0x44L, 0x7CL, 0x44L, 0x7CL);
        VECTOR(uint16_t, 16) l_314 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
        VECTOR(int8_t, 16) l_366 = (VECTOR(int8_t, 16))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, 5L), 5L), 5L, 0x64L, 5L, (VECTOR(int8_t, 2))(0x64L, 5L), (VECTOR(int8_t, 2))(0x64L, 5L), 0x64L, 5L, 0x64L, 5L);
        struct S2 ***l_375 = (void*)0;
        struct S0 l_454 = {5UL};
        uint32_t l_494 = 0UL;
        VECTOR(uint8_t, 16) l_518 = (VECTOR(uint8_t, 16))(0x9CL, (VECTOR(uint8_t, 4))(0x9CL, (VECTOR(uint8_t, 2))(0x9CL, 0x71L), 0x71L), 0x71L, 0x9CL, 0x71L, (VECTOR(uint8_t, 2))(0x9CL, 0x71L), (VECTOR(uint8_t, 2))(0x9CL, 0x71L), 0x9CL, 0x71L, 0x9CL, 0x71L);
        int i, j, k;
        l_296--;
        if ((safe_lshift_func_int16_t_s_u(p_786->g_comm_values[p_786->tid], ((-1L) && (safe_sub_func_uint64_t_u_u(0x34648B2AE1FBEB08L, ((l_291[3] >= (safe_mul_func_uint16_t_u_u(((l_291[3] <= ((*l_305) = 0x3CD8L)) != ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_307.s68c2)).xwzwyzwxyxyyzxxw)).s60db, (uint8_t)2UL))).x), ((VECTOR(int16_t, 16))(p_786->g_308.s0722560261375416)).sc))) , ((VECTOR(int64_t, 2))(p_786->g_309.s20)).even)))))))
        { /* block id: 141 */
            uint32_t l_320 = 4294967286UL;
            VECTOR(int8_t, 2) l_363 = (VECTOR(int8_t, 2))(6L, 0x5CL);
            int16_t *l_371 = &p_786->g_18;
            VECTOR(int32_t, 2) l_372 = (VECTOR(int32_t, 2))((-1L), (-1L));
            uint64_t l_400 = 18446744073709551615UL;
            int32_t l_429 = 0L;
            uint64_t l_434 = 18446744073709551610UL;
            struct S0 l_457 = {0xB90087F0568EAC41L};
            int i;
            for (p_786->g_71.f0 = 4; (p_786->g_71.f0 != 1); p_786->g_71.f0--)
            { /* block id: 144 */
                uint16_t l_317 = 0x0158L;
                uint32_t *l_318 = &p_786->g_319;
                struct S2 **l_335 = &p_786->g_333;
                uint32_t l_360 = 0x9987C9B9L;
                VECTOR(int8_t, 8) l_364 = (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0L), 0L), 0L, 7L, 0L);
                VECTOR(int32_t, 4) l_370 = (VECTOR(int32_t, 4))(0x21932A30L, (VECTOR(int32_t, 2))(0x21932A30L, 0x29907CD3L), 0x29907CD3L);
                VECTOR(uint16_t, 2) l_380 = (VECTOR(uint16_t, 2))(0x4E9CL, 65535UL);
                VECTOR(int32_t, 4) l_425 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
                int i;
                if (((l_296 || (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_314.s7a54)).z, (*l_287)))) != (((VECTOR(int32_t, 16))(l_291[3], 0x65B7DD79L, ((VECTOR(int32_t, 4))(0x45CBE326L, (-4L), 0L, 0x21CE9808L)), (&p_786->g_306 != (void*)0), ((VECTOR(int32_t, 2))(0x2F6CE8CAL, (-4L))), ((VECTOR(int32_t, 4))(((safe_rshift_func_uint8_t_u_u((1UL == ((*l_318) = ((((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(0xCEACCE763667A1A5L, 0x3F14D9336402D9BBL, ((((void*)0 == &p_786->g_84) || FAKE_DIVERGE(p_786->group_1_offset, get_group_id(1), 10)) != p_786->g_80.s2), 0xDA7EAE0860E1631DL, ((VECTOR(uint64_t, 2))(18446744073709551614UL)), 18446744073709551615UL, 0xFEA67ABEF210A255L)), 4UL, 0x068F9C57D891E444L, 1UL, ((VECTOR(uint64_t, 2))(0x280D94F229DFF944L)), ((VECTOR(uint64_t, 2))(0xB80AF941CD03C4DAL)), 0x3A05FC92375F7998L)).sd7)).yxxy))).x ^ l_317) & l_296))), 3)) >= l_320), (*p_786->g_278), (-5L), 0x5A7A95B4L)), (-1L), 9L, 0x43FC3822L)).s7 != p_786->g_18)))
                { /* block id: 146 */
                    struct S2 ***l_334 = &p_786->g_332;
                    uint16_t *l_338 = &p_786->g_67.f1;
                    int16_t **l_339[7][6] = {{&l_327[6][0][1],(void*)0,&l_327[6][0][1],(void*)0,&l_327[6][0][1],&l_327[6][0][1]},{&l_327[6][0][1],(void*)0,&l_327[6][0][1],(void*)0,&l_327[6][0][1],&l_327[6][0][1]},{&l_327[6][0][1],(void*)0,&l_327[6][0][1],(void*)0,&l_327[6][0][1],&l_327[6][0][1]},{&l_327[6][0][1],(void*)0,&l_327[6][0][1],(void*)0,&l_327[6][0][1],&l_327[6][0][1]},{&l_327[6][0][1],(void*)0,&l_327[6][0][1],(void*)0,&l_327[6][0][1],&l_327[6][0][1]},{&l_327[6][0][1],(void*)0,&l_327[6][0][1],(void*)0,&l_327[6][0][1],&l_327[6][0][1]},{&l_327[6][0][1],(void*)0,&l_327[6][0][1],(void*)0,&l_327[6][0][1],&l_327[6][0][1]}};
                    VECTOR(int32_t, 2) l_369 = (VECTOR(int32_t, 2))((-8L), 3L);
                    uint8_t *l_374 = &l_296;
                    int32_t l_430 = 0x467BC11BL;
                    VECTOR(uint8_t, 16) l_440 = (VECTOR(uint8_t, 16))(0x66L, (VECTOR(uint8_t, 4))(0x66L, (VECTOR(uint8_t, 2))(0x66L, 250UL), 250UL), 250UL, 0x66L, 250UL, (VECTOR(uint8_t, 2))(0x66L, 250UL), (VECTOR(uint8_t, 2))(0x66L, 250UL), 0x66L, 250UL, 0x66L, 250UL);
                    VECTOR(uint8_t, 2) l_441 = (VECTOR(uint8_t, 2))(255UL, 250UL);
                    struct S0 l_451 = {18446744073709551615UL};
                    uint32_t l_453 = 0x7D9FCDCEL;
                    int i, j;
                    if ((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s(((l_327[6][0][1] != ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(l_291[1], (~(((*l_334) = p_786->g_332) == l_335)))), ((safe_sub_func_uint8_t_u_u(246UL, p_786->g_71.f1)) , ((*l_338) = 0x58F3L)))) , (p_786->g_340 = (void*)0))) || ((FAKE_DIVERGE(p_786->local_0_offset, get_local_id(0), 10) >= ((!FAKE_DIVERGE(p_786->local_1_offset, get_local_id(1), 10)) , 0x76L)) <= 0x0AD2882CL)), p_786->g_3[1])) > l_291[2]) , l_291[3]), l_320)), 0UL)))
                    { /* block id: 150 */
                        int32_t **l_341 = &p_786->g_278;
                        int32_t **l_342 = &l_290[2][3][1];
                        uint8_t *l_349 = &l_296;
                        uint8_t *l_353 = (void*)0;
                        uint8_t *l_354 = (void*)0;
                        uint8_t *l_355 = (void*)0;
                        uint8_t *l_356 = (void*)0;
                        uint8_t *l_357[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        VECTOR(int32_t, 8) l_367 = (VECTOR(int32_t, 8))(0x3D4FAA9CL, (VECTOR(int32_t, 4))(0x3D4FAA9CL, (VECTOR(int32_t, 2))(0x3D4FAA9CL, (-3L)), (-3L)), (-3L), 0x3D4FAA9CL, (-3L));
                        int8_t *l_377[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_377[i] = (void*)0;
                        (*l_342) = ((*l_341) = p_24);
                        atomic_or(&p_786->l_atomic_reduction[0], (65535UL < ((((((((p_786->g_378.x ^= (safe_rshift_func_uint8_t_u_u((((((&p_24 == (((safe_sub_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u(((*l_349)++), (--l_360))) && (((*l_305) = (FAKE_DIVERGE(p_786->local_1_offset, get_local_id(1), 10) >= ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 2))(2UL, 0xC680L)).xyxyyxxy, ((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))(l_363.xxyxyxyx)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(l_364.s26)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(p_786->g_365.s0f2f)).zwxwywzwzzzxxxwz, ((VECTOR(int8_t, 16))(l_366.se3fa74fe007c8829))))).sdf, ((VECTOR(int8_t, 8))((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(6L, (-1L))), ((VECTOR(int32_t, 4))(l_367.s2461)).w, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_786->g_368.zzyz)).yyyywxzx)).s5470335535075751)).s9951, ((VECTOR(int32_t, 4))(l_369.xxxy))))).xwzyzzxz)).s1356645657110705, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_370.xyyxxyxw)), 6L, l_363.x, (&p_786->g_18 != l_371), l_363.y, 0x211E5328L, 0x083879A0L, (-1L), 1L)).sa137, ((VECTOR(int32_t, 2))(l_372.xx)).xxyx))).zwwyxwzzzyywzwyz))).s38)), ((VECTOR(int32_t, 2))(p_786->g_373.sdd)), (-2L))).s0 , ((void*)0 == l_374)), ((p_786->l_comm_values[(safe_mod_func_uint32_t_u_u(p_786->tid, 71))] , (void*)0) == l_375), ((VECTOR(int8_t, 2))((-2L))), ((VECTOR(int8_t, 4))((-2L))))).s63, ((VECTOR(int8_t, 2))(0x3AL))))).yyyyxxyx)).s56))).yyxx))))).xxyyyyzw)))).s2536236035601573, ((VECTOR(int8_t, 16))(0x08L))))))).even))).hi, ((VECTOR(uint8_t, 4))(255UL))))).yxzxxywxyxzxywwz, ((VECTOR(int16_t, 16))(0x3F41L))))).lo))).s05, (uint16_t)l_360, (uint16_t)l_376))).xyxyyyyy, ((VECTOR(uint16_t, 8))(0x2610L))))).s6543574316106040)).s6)) , l_376)) && 5L), 0x33FEA3F2L)) , l_296) , &p_24)) || l_296) | (*p_786->g_278)) || p_786->g_373.se) > 0x1B8AL), 5))) == 0x6CL) || 1L) > 0x09L) > p_786->g_comm_values[p_786->tid]) >= l_364.s7) && l_369.y) , GROUP_DIVERGE(2, 1))) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_786->v_collective += p_786->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        return p_24;
                    }
                    else
                    { /* block id: 159 */
                        uint32_t **l_389 = (void*)0;
                        uint32_t **l_390[6];
                        int32_t l_398[8] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
                        int i;
                        for (i = 0; i < 6; i++)
                            l_390[i] = &l_318;
                        (*p_24) = ((VECTOR(int32_t, 4))((l_369.x && (safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(0UL, 0x6638L)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_380.xxyyxyxyyyxxyxxy)))).sd8))), (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((GROUP_DIVERGE(1, 1) && (p_786->g_365.s4 < (((l_372.y | (safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((l_391 = &p_786->g_319) == (void*)0), (l_398[1] = (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((~l_369.x), l_398[1])), (p_786->g_319 = (((p_786->g_18 <= l_398[1]) > l_398[1]) || l_399)))), GROUP_DIVERGE(2, 1)))))), l_400))) , 0x32EEE65AL) ^ (*p_24)))), p_786->g_71.f1)), 2)), 65533UL, ((VECTOR(uint16_t, 4))(1UL)), 0x166DL, 65535UL, l_363.x, l_370.y, 65526UL, 0x63C3L, 0x2D8EL, 0x007DL)).s70)).even))), ((VECTOR(int32_t, 2))((-1L))), 4L)).z;
                        (*p_24) = (p_786->g_80.s6 & ((VECTOR(uint8_t, 2))(0x19L, 0x02L)).even);
                        if ((*p_24))
                            continue;
                    }
                    for (l_360 = 0; (l_360 >= 30); l_360++)
                    { /* block id: 169 */
                        int16_t l_413 = 1L;
                        int8_t *l_431 = (void*)0;
                        int8_t *l_432 = &l_399;
                        VECTOR(int32_t, 16) l_435 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-9L)), (-9L)), (-9L), (-5L), (-9L), (VECTOR(int32_t, 2))((-5L), (-9L)), (VECTOR(int32_t, 2))((-5L), (-9L)), (-5L), (-9L), (-5L), (-9L));
                        int i, j;
                        l_435.se = ((safe_add_func_uint16_t_u_u(((((p_786->g_433[0] |= (l_372.x , ((((((l_335 != (p_786->g_332 = &p_786->g_333)) < (safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))((-3L), (GROUP_DIVERGE(1, 1) & (safe_sub_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(l_413, (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 4))(p_786->g_420.xyxx)).z, ((*l_432) = ((l_430 |= ((safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_425.wwxw)).zwwzxwxxyywzwxzz)).s1e)).even || ((((p_786->g_373.se || ((((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0L, (func_31((p_786->g_67 = (**l_335)), l_428[2][1], &p_786->g_3[1], p_786) , l_363.x), ((VECTOR(int16_t, 2))(0x7CABL)), ((VECTOR(int16_t, 4))(0x55C0L)), l_370.y, ((VECTOR(int16_t, 4))(0x6724L)), 1L, 0x5244L, 0x09D4L)).s6c)).xyyyxxxyxxxxxyxx)), ((VECTOR(int16_t, 16))(0x7DA9L))))).s4, 5)) >= l_413) || (*p_24)) ^ 1UL)) & l_369.x) > FAKE_DIVERGE(p_786->global_0_offset, get_global_id(0), 10)) == p_786->g_80.s1)) , l_425.w), 0)) && l_429) != 0x0D4EL), l_425.x)) == 1L)) >= GROUP_DIVERGE(1, 1))))) == l_413), 0x36L)), 0xCC251EA6L)))) & l_369.y), 0x56L))), 6L, 0x2FL, 1L, ((VECTOR(int8_t, 2))((-7L))), 0x2FL)), ((VECTOR(int8_t, 8))(0x6AL))))).lo, ((VECTOR(int8_t, 4))(0L))))).y, 255UL)), 3))) || l_413) < l_413) <= l_364.s6) & FAKE_DIVERGE(p_786->local_0_offset, get_local_id(0), 10)))) & p_786->g_365.s3) > 0xD0F615277C0CB202L) & l_429), p_786->g_3[2])) && l_434);
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_786->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 71)), permutations[(safe_mod_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s(((((*p_786->g_278) |= 0x769DFB14L) < l_360) & (l_369.y != ((safe_mul_func_int8_t_s_s(l_428[2][1].f0, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_440.s86ef9441)), 1UL, ((VECTOR(uint8_t, 2))(1UL, 6UL)), ((VECTOR(uint8_t, 2))(l_441.xy)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_786->g_442.xxxxxxyx)).s6606113177425465)).lo)), ((VECTOR(uint8_t, 2))(1UL, 255UL)).xxxyxxyy, ((VECTOR(uint8_t, 8))(255UL, (0L != ((safe_add_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_s((p_786->g_80.s7 || (~(l_441.x < (safe_mul_func_int16_t_s_s(l_364.s3, (((FAKE_DIVERGE(p_786->local_2_offset, get_local_id(2), 10) >= l_435.se) < 0x77FAB185L) < 0x355EA16113010B4AL)))))), l_441.y)) ^ GROUP_DIVERGE(2, 1)) , l_451) , l_380.y), FAKE_DIVERGE(p_786->local_0_offset, get_local_id(0), 10))) | p_786->g_80.s6), l_452)) > l_291[1])), p_786->g_359, 0xA7L, GROUP_DIVERGE(0, 1), 255UL, 0x75L, 0x9AL))))).s25, (uint8_t)l_453, (uint8_t)0UL))))), 255UL)).sa)) , 0x3AL))), l_296)) ^ 0x7CL) != l_430), 10))][(safe_mod_func_uint32_t_u_u(p_786->tid, 71))]));
                        if (l_291[3])
                            break;
                    }
                    (*p_786->g_455) = l_454;
                    if (l_363.x)
                        continue;
                }
                else
                { /* block id: 184 */
                    (*p_786->g_458) = l_457;
                    if ((atomic_inc(&p_786->l_atomic_input[37]) == 9))
                    { /* block id: 187 */
                        uint16_t l_459 = 0xDE59L;
                        ++l_459;
                        unsigned int result = 0;
                        result += l_459;
                        atomic_add(&p_786->l_special_values[37], result);
                    }
                    else
                    { /* block id: 189 */
                        (1 + 1);
                    }
                    return p_24;
                }
                if ((*p_24))
                    continue;
                (*p_786->g_462) = &l_295;
            }
            return p_24;
        }
        else
        { /* block id: 198 */
            uint32_t l_468 = 6UL;
            struct S2 *l_469 = (void*)0;
            VECTOR(int16_t, 2) l_474 = (VECTOR(int16_t, 2))(3L, 0x7019L);
            struct S2 *l_491 = &p_786->g_67;
            struct S2 **l_492 = &l_491;
            struct S2 *l_493[7][7][5] = {{{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0}},{{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0}},{{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0}},{{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0}},{{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0}},{{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0}},{{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0},{&p_786->g_71,(void*)0,&p_786->g_71,&p_786->g_71,(void*)0}}};
            int8_t *l_495[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_496 = &l_428[2][1].f3;
            int32_t **l_497 = (void*)0;
            int32_t **l_498 = &l_290[2][4][1];
            int32_t l_499 = 1L;
            int32_t l_500 = (-2L);
            int32_t l_501[4][9] = {{0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL},{0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL},{0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL},{0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL,0x36E1EACDL}};
            int i, j, k;
            (*l_498) = func_25((p_786->g_442.y = l_291[1]), (l_428[2][1].f2 = (p_24 != ((!(safe_mod_func_int32_t_s_s((((((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(l_465.wyyxyzww)).s1656521275403326, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((safe_mul_func_uint8_t_u_u(l_468, ((l_469 = (*p_786->g_332)) == (((*l_496) &= (0x9A5FL >= ((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(l_474.yx)).yxyy, ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(p_786->g_475.wx)).yxxy)))))).y, ((*p_786->g_458) , ((VECTOR(uint16_t, 4))(((((safe_mul_func_uint8_t_u_u(247UL, (p_786->g_378.x = (safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((((*p_786->g_340) = (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(l_474.y, 0)), (!(((*l_492) = l_491) == l_493[1][6][4]))))) >= p_786->g_18))), 0xEA69L)), l_494)), l_291[3])) , l_468), l_428[2][1].f4))))) & (*l_287)) | 0x2B8F9AA5L) ^ 1L), ((VECTOR(uint16_t, 2))(9UL)), 0xF2D0L)).x))), (*p_786->g_278))) || 0xD2L))) , (*l_492))))) & p_786->g_80.s5), 0x7DL, 0x27L, ((VECTOR(int8_t, 4))(0x27L)), (-5L))))).s0001761674131360, ((VECTOR(int8_t, 16))(0x7EL))))).s0 , 0xAF9EE9152644046EL) < l_474.x) , (*p_24)), (*p_24)))) , &l_291[3]))), p_24, &p_786->g_3[4], p_24, p_786);
            --l_502[4][2][0];
            (*p_786->g_278) |= ((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((1UL && (1L ^ (l_509 , FAKE_DIVERGE(p_786->group_2_offset, get_group_id(2), 10)))), (p_786->g_442.y || l_428[2][1].f4))), (((p_786->g_442.y , (void*)0) != p_24) ^ (safe_add_func_int64_t_s_s((((safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 8))(5L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 16))(p_786->g_516.xxxxxxyxxyyxxyxy)), ((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_786->g_517.xxxy)).even)).xyxyxyyy)).s3666465420225512, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(1L, 0x5AL, (-9L), 1L)).hi, ((VECTOR(uint8_t, 2))(l_518.s33))))), (-1L), (-5L))).wxyzwyyyzxyzxxxx)))))), ((VECTOR(int16_t, 16))(((p_786->g_332 = &p_786->g_333) == &p_786->g_333), (*p_786->g_340), (*p_786->g_340), ((VECTOR(int16_t, 8))(0x7013L)), l_428[2][1].f4, 0x5A49L, ((VECTOR(int16_t, 2))(0L)), 0x130FL)), ((VECTOR(int16_t, 16))(0x375DL))))).sd8)), ((VECTOR(int16_t, 2))(4L)), 0x0D9AL, 0x03EBL, (-1L))).s6, l_474.x)), (*p_786->g_340))) , p_786->g_433[0]) == 1L), 0x4A650550E3739400L))))) | l_428[2][1].f1);
        }
    }
    for (p_786->g_319 = (-15); (p_786->g_319 == 48); p_786->g_319++)
    { /* block id: 214 */
        int64_t l_532 = 0x50F77E3D4F5005C2L;
        int32_t *l_543 = &l_291[2];
        int32_t *l_544 = &l_428[2][1].f1;
        (*l_544) ^= (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))((((safe_mod_func_int16_t_s_s((((VECTOR(uint32_t, 8))(p_786->g_525.s15737132)).s1 != (safe_sub_func_uint32_t_u_u(p_786->g_80.s1, (p_786->g_365.s0 , (((VECTOR(int64_t, 2))(p_786->g_528.zy)).odd , (l_502[4][2][0] || (((p_786->g_529 == (void*)0) < ((safe_mod_func_uint32_t_u_u(FAKE_DIVERGE(p_786->global_0_offset, get_global_id(0), 10), (l_532 , (p_786->g_456.f0 , (safe_mod_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((+l_532), ((((*l_543) |= ((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((((+GROUP_DIVERGE(2, 1)) != l_465.z) , 0x6D73L), (*p_786->g_340))), (*p_24))) , l_452)) | 1L) != p_786->g_358))), l_509.f0)), l_428[2][1].f0)))))) >= l_465.w)) ^ l_502[4][2][0]))))))), (*p_786->g_340))) >= 251UL) < p_786->g_378.y), ((VECTOR(int8_t, 4))((-1L))), 0L, 0x10L, 0x73L)).s3, l_376));
    }
    if ((safe_mul_func_uint16_t_u_u(l_291[5], (~(safe_sub_func_int8_t_s_s((((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_786->g_549.wzxzyyxxxzyzyzxz)))).sa && (9L | (65535UL || ((*p_786->g_340) &= l_550)))) == ((+((VECTOR(uint64_t, 8))(l_551.yyxxxyyx)).s0) || ((l_552 , l_550) != (l_552 , (safe_div_func_int8_t_s_s(((*l_555) = p_786->g_456.f0), (safe_div_func_uint32_t_u_u(((l_428[2][1].f1 = (l_558 <= p_786->g_525.s2)) | 65529UL), 0x1EF1BC0BL)))))))) | p_786->g_18), l_558))))))
    { /* block id: 221 */
        VECTOR(int32_t, 16) l_562 = (VECTOR(int32_t, 16))(0x56B5D20CL, (VECTOR(int32_t, 4))(0x56B5D20CL, (VECTOR(int32_t, 2))(0x56B5D20CL, 1L), 1L), 1L, 0x56B5D20CL, 1L, (VECTOR(int32_t, 2))(0x56B5D20CL, 1L), (VECTOR(int32_t, 2))(0x56B5D20CL, 1L), 0x56B5D20CL, 1L, 0x56B5D20CL, 1L);
        VECTOR(int32_t, 8) l_568 = (VECTOR(int32_t, 8))(0x55571410L, (VECTOR(int32_t, 4))(0x55571410L, (VECTOR(int32_t, 2))(0x55571410L, (-1L)), (-1L)), (-1L), 0x55571410L, (-1L));
        VECTOR(int32_t, 4) l_582 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x6E49B3D5L), 0x6E49B3D5L);
        struct S1 l_653 = {0x0AL,-1L,-1L,0x27FE39BCL,1L,0UL};
        uint32_t l_665 = 0xE8A10D19L;
        int32_t *l_668 = &l_653.f1;
        int32_t *l_669 = (void*)0;
        int i;
        for (l_509.f0 = 0; (l_509.f0 >= 9); l_509.f0 = safe_add_func_int16_t_s_s(l_509.f0, 8))
        { /* block id: 224 */
            VECTOR(int32_t, 16) l_567 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L), (VECTOR(int32_t, 2))(0L, (-6L)), (VECTOR(int32_t, 2))(0L, (-6L)), 0L, (-6L), 0L, (-6L));
            VECTOR(uint8_t, 16) l_596 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 254UL), 254UL), 254UL, 1UL, 254UL, (VECTOR(uint8_t, 2))(1UL, 254UL), (VECTOR(uint8_t, 2))(1UL, 254UL), 1UL, 254UL, 1UL, 254UL);
            VECTOR(int8_t, 4) l_598 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L);
            struct S2 **l_603 = &p_786->g_333;
            struct S1 *l_658 = &l_653;
            int i;
            (*p_24) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(p_786->g_561.yyyxxyyyyxxxxxxy)).s0c, ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(l_562.sf7f7)).zxyyyxyywxxwxxyy, (int32_t)((safe_div_func_uint64_t_u_u((l_562.sc || (safe_add_func_uint32_t_u_u(((*l_391) = 4294967294UL), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_567.s37b24e15)).s76)).yxxxxxxy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_568.s23026622)).s43)).yxxxyyxx))).hi)).odd, ((VECTOR(int32_t, 16))(0x61C3ADC2L, ((((p_786->g_569 != (void*)0) ^ (safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((-1L), (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((void*)0 == &p_786->g_333), ((VECTOR(uint16_t, 2))(p_786->g_579.sd6)).even)), (safe_div_func_int64_t_s_s(p_786->g_579.s0, ((((VECTOR(int32_t, 16))(l_582.zyzyzywzyyxxwwyy)).s6 , ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((((safe_sub_func_int32_t_s_s(l_582.z, 0x32B689DDL)) , 0x58CFC5E6L) > l_428[2][1].f2) | 0x4F19D4BB59CB7857L), l_567.sb)), l_568.s3)) >= (*p_786->g_278))) , FAKE_DIVERGE(p_786->local_1_offset, get_local_id(1), 10)))))))), l_562.s4))) > l_568.s1) != 0UL), l_509.f0, (*p_24), 0x1AB4E8DFL, 0x02B81C34L, 0x5F18D516L, 1L, ((VECTOR(int32_t, 2))(3L)), ((VECTOR(int32_t, 2))((-1L))), 0x3BEAAC6AL, 0x2DC30F3CL, 2L, (-10L))).sf9))).hi))), l_567.s9)) || l_562.s9), (int32_t)(-7L)))).sad))).xxxxyxyy)).even)).x;
            if (((&p_786->g_332 == &p_786->g_332) , (*p_24)))
            { /* block id: 227 */
                int32_t *l_589 = &p_786->g_67.f0;
                uint16_t *l_590 = &l_376;
                uint8_t *l_604 = &l_296;
                int32_t *l_605 = &l_428[2][1].f3;
                uint32_t l_608[8] = {4294967286UL,7UL,4294967286UL,4294967286UL,7UL,4294967286UL,4294967286UL,7UL};
                int i;
                (*l_589) &= ((*p_786->g_278) = (*p_24));
                l_608[6] &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(((++(*l_590)) >= (safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(l_596.sa3)), ((VECTOR(uint8_t, 16))(0x7EL, 0x54L, (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((*l_589), l_562.se, ((VECTOR(int8_t, 4))(p_786->g_597.yxwy)), 0L, 0x05L)).s2047501073766517)).s31, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_598.xxzy)).even))))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x6DL, (-10L))), 0L, 0L)), (-1L), 0L)), ((VECTOR(int8_t, 4))((l_291[4] = ((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_604) = (l_603 != (void*)0)), ((p_786->l_comm_values[(safe_mod_func_uint32_t_u_u(p_786->tid, 71))] , func_47(&l_291[3], ((*l_605) |= 1L), p_786)) != ((safe_add_func_uint16_t_u_u(0x9E44L, GROUP_DIVERGE(2, 1))) , (void*)0)))), l_598.w)) || (*l_589))), l_428[2][1].f4, 0x2AL, 7L)), (-2L), (-1L), 1L, 0x6FL)).sa < l_465.x), ((VECTOR(uint8_t, 4))(3UL)), 0x59L, 0x1CL, 255UL, 5UL, (*l_589), 2UL, l_291[3], 255UL, 0UL)).sda, ((VECTOR(uint8_t, 2))(0x92L))))).odd, 5))))), 1L, (-1L), (-9L), l_582.y, ((VECTOR(int32_t, 4))((-7L))), (-2L), l_598.x, ((VECTOR(int32_t, 4))(0L)), (-4L))).s167b))), ((VECTOR(int32_t, 8))(3L)), ((VECTOR(int32_t, 2))(7L)), 0L, 9L)).s3;
                l_611 = p_786->g_609[4];
            }
            else
            { /* block id: 236 */
                int32_t l_654 = (-1L);
                struct S2 *l_657 = &p_786->g_67;
                if ((atomic_inc(&p_786->l_atomic_input[81]) == 6))
                { /* block id: 238 */
                    VECTOR(uint16_t, 2) l_612 = (VECTOR(uint16_t, 2))(0x3DDEL, 0xEAB6L);
                    int32_t l_651 = 0x5D4B9109L;
                    int32_t l_652 = 0x578069EEL;
                    int i;
                    if (((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x6268L, 5L)).yyyyxxxxxyyxxxxy)).s026e, ((VECTOR(uint16_t, 8))(l_612.xxxyyxxx)).even))).z)
                    { /* block id: 239 */
                        int64_t l_613[8] = {0x67E177B8F9271DD0L,0x67E177B8F9271DD0L,0x67E177B8F9271DD0L,0x67E177B8F9271DD0L,0x67E177B8F9271DD0L,0x67E177B8F9271DD0L,0x67E177B8F9271DD0L,0x67E177B8F9271DD0L};
                        uint16_t l_614 = 0x1798L;
                        VECTOR(int32_t, 2) l_615 = (VECTOR(int32_t, 2))(0x0F8410CBL, 0x245FCD59L);
                        int8_t l_616 = (-4L);
                        VECTOR(int32_t, 8) l_617 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-5L)), (-5L)), (-5L), (-1L), (-5L));
                        int64_t l_618[8][2] = {{0x57766CD10ABD4D4FL,0x57766CD10ABD4D4FL},{0x57766CD10ABD4D4FL,0x57766CD10ABD4D4FL},{0x57766CD10ABD4D4FL,0x57766CD10ABD4D4FL},{0x57766CD10ABD4D4FL,0x57766CD10ABD4D4FL},{0x57766CD10ABD4D4FL,0x57766CD10ABD4D4FL},{0x57766CD10ABD4D4FL,0x57766CD10ABD4D4FL},{0x57766CD10ABD4D4FL,0x57766CD10ABD4D4FL},{0x57766CD10ABD4D4FL,0x57766CD10ABD4D4FL}};
                        VECTOR(int32_t, 4) l_619 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6926A9B0L), 0x6926A9B0L);
                        VECTOR(int32_t, 4) l_620 = (VECTOR(int32_t, 4))(0x3B6A7F65L, (VECTOR(int32_t, 2))(0x3B6A7F65L, 0x5D6FAD4DL), 0x5D6FAD4DL);
                        VECTOR(int32_t, 2) l_621 = (VECTOR(int32_t, 2))(0L, (-8L));
                        struct S1 l_622[7][3][2] = {{{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}},{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}},{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}}},{{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}},{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}},{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}}},{{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}},{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}},{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}}},{{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}},{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}},{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}}},{{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}},{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}},{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}}},{{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}},{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}},{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}}},{{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}},{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}},{{7L,0x0C192C67L,-2L,0x75C0EF71L,0x16C244FDA8258719L,4294967295UL},{0L,-1L,-7L,0x5FB5A6ABL,0L,9UL}}}};
                        struct S1 l_623 = {1L,0L,-7L,1L,0L,0x293CCB31L};
                        struct S1 l_624[1][4][4] = {{{{0L,0x56DB16CBL,9L,1L,-1L,4294967292UL},{0L,0x56DB16CBL,9L,1L,-1L,4294967292UL},{0x1EL,0x3BFB0986L,-3L,0L,0x0073D0D9CC387AD4L,0xA5D46E62L},{0x48L,0L,0x33C137F2L,1L,1L,4294967292UL}},{{0L,0x56DB16CBL,9L,1L,-1L,4294967292UL},{0L,0x56DB16CBL,9L,1L,-1L,4294967292UL},{0x1EL,0x3BFB0986L,-3L,0L,0x0073D0D9CC387AD4L,0xA5D46E62L},{0x48L,0L,0x33C137F2L,1L,1L,4294967292UL}},{{0L,0x56DB16CBL,9L,1L,-1L,4294967292UL},{0L,0x56DB16CBL,9L,1L,-1L,4294967292UL},{0x1EL,0x3BFB0986L,-3L,0L,0x0073D0D9CC387AD4L,0xA5D46E62L},{0x48L,0L,0x33C137F2L,1L,1L,4294967292UL}},{{0L,0x56DB16CBL,9L,1L,-1L,4294967292UL},{0L,0x56DB16CBL,9L,1L,-1L,4294967292UL},{0x1EL,0x3BFB0986L,-3L,0L,0x0073D0D9CC387AD4L,0xA5D46E62L},{0x48L,0L,0x33C137F2L,1L,1L,4294967292UL}}}};
                        int64_t l_625[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
                        VECTOR(int32_t, 16) l_626 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0E02B5AFL), 0x0E02B5AFL), 0x0E02B5AFL, 1L, 0x0E02B5AFL, (VECTOR(int32_t, 2))(1L, 0x0E02B5AFL), (VECTOR(int32_t, 2))(1L, 0x0E02B5AFL), 1L, 0x0E02B5AFL, 1L, 0x0E02B5AFL);
                        int32_t l_627[7][6][4] = {{{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L}},{{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L}},{{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L}},{{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L}},{{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L}},{{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L}},{{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L},{1L,(-10L),(-1L),1L}}};
                        VECTOR(uint32_t, 16) l_628 = (VECTOR(uint32_t, 16))(0xF63334CAL, (VECTOR(uint32_t, 4))(0xF63334CAL, (VECTOR(uint32_t, 2))(0xF63334CAL, 0UL), 0UL), 0UL, 0xF63334CAL, 0UL, (VECTOR(uint32_t, 2))(0xF63334CAL, 0UL), (VECTOR(uint32_t, 2))(0xF63334CAL, 0UL), 0xF63334CAL, 0UL, 0xF63334CAL, 0UL);
                        uint8_t l_629 = 1UL;
                        VECTOR(uint32_t, 16) l_630 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint32_t, 2))(0UL, 1UL), (VECTOR(uint32_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
                        int16_t l_631 = 0L;
                        uint16_t l_632[5][4][4] = {{{0xF029L,0xBAC7L,0xCAAAL,7UL},{0xF029L,0xBAC7L,0xCAAAL,7UL},{0xF029L,0xBAC7L,0xCAAAL,7UL},{0xF029L,0xBAC7L,0xCAAAL,7UL}},{{0xF029L,0xBAC7L,0xCAAAL,7UL},{0xF029L,0xBAC7L,0xCAAAL,7UL},{0xF029L,0xBAC7L,0xCAAAL,7UL},{0xF029L,0xBAC7L,0xCAAAL,7UL}},{{0xF029L,0xBAC7L,0xCAAAL,7UL},{0xF029L,0xBAC7L,0xCAAAL,7UL},{0xF029L,0xBAC7L,0xCAAAL,7UL},{0xF029L,0xBAC7L,0xCAAAL,7UL}},{{0xF029L,0xBAC7L,0xCAAAL,7UL},{0xF029L,0xBAC7L,0xCAAAL,7UL},{0xF029L,0xBAC7L,0xCAAAL,7UL},{0xF029L,0xBAC7L,0xCAAAL,7UL}},{{0xF029L,0xBAC7L,0xCAAAL,7UL},{0xF029L,0xBAC7L,0xCAAAL,7UL},{0xF029L,0xBAC7L,0xCAAAL,7UL},{0xF029L,0xBAC7L,0xCAAAL,7UL}}};
                        int64_t l_633[8] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
                        uint16_t l_634 = 65535UL;
                        int64_t l_635 = 1L;
                        uint64_t l_636[3][2][3] = {{{0x856FE30B5722FD8DL,1UL,1UL},{0x856FE30B5722FD8DL,1UL,1UL}},{{0x856FE30B5722FD8DL,1UL,1UL},{0x856FE30B5722FD8DL,1UL,1UL}},{{0x856FE30B5722FD8DL,1UL,1UL},{0x856FE30B5722FD8DL,1UL,1UL}}};
                        int16_t l_637 = 1L;
                        int8_t l_638 = 0x02L;
                        uint32_t l_639[2][9] = {{0xF90838F0L,0x182F077EL,4294967295UL,0x182F077EL,0xF90838F0L,0xF90838F0L,0x182F077EL,4294967295UL,0x182F077EL},{0xF90838F0L,0x182F077EL,4294967295UL,0x182F077EL,0xF90838F0L,0xF90838F0L,0x182F077EL,4294967295UL,0x182F077EL}};
                        int16_t l_640 = 0L;
                        struct S0 l_641 = {0x2B93E52510A9AC4FL};
                        int8_t l_642 = 6L;
                        int8_t l_643 = (-1L);
                        uint8_t l_644[2];
                        int16_t l_645 = 3L;
                        int8_t l_646 = 0x35L;
                        uint32_t l_647 = 0x7DD34B2DL;
                        uint64_t l_648[9][2][1] = {{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}}};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_644[i] = 0x5CL;
                        l_643 ^= (((((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(1L, 0L)).xyyx))), 0x534456AFL, (l_614 ^= l_613[5]), (-1L), 0x5AE43B5CL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_615.xxxyxxyx)).lo)), 0x286BFC3DL, 7L, 0x73781FD6L)).lo)), (l_616 = 0x382C2341L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_617.s0726)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_618[0][1] = (-6L)), 1L, 6L, 6L)), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(l_619.zyzwzyyywyzyxzzw)).see, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_620.wxyx)).zyxwyywz)).s45))))), 0L, (-6L))).lo, ((VECTOR(int32_t, 16))(l_621.yxyxxyxyxyxxxyxx)).s0550))).hi)), 0L)).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((((l_624[0][3][2] = (l_623 = l_622[4][1][0])) , ((l_627[0][0][1] = (l_625[7] , ((VECTOR(int32_t, 8))(l_626.s39fee614)).s0)) , ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 16))(l_628.s6a06ddeec45817a5)).hi, (uint32_t)l_629))).s52, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_630.sbf08)).ywyzxyzzyywwxzzz)).sff, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 8))(((l_633[7] ^= (l_632[3][1][1] = l_631)) , ((l_635 |= l_634) , l_636[0][0][0])), 1UL, ((VECTOR(uint32_t, 2))(0x91BC0E0BL)), 0x7FADD95BL, 0x2B106AD3L, 0x6EB8B305L, 0x953636A2L)).odd, ((VECTOR(uint32_t, 4))(0xB51C87B9L))))).zzzzzzwzwywzxwyy)).s31))), 0x6DE33A29L, 0xE77F1D5AL, 0x331CF10DL, 4294967289UL, 0x2DCD76F1L, 0xAE3B8FF6L)).s34))).hi)) , 0x54EB3932L), 0x0A7C55B6L, 0x08B15C2EL, ((VECTOR(int32_t, 8))(0L)), l_637, 0x2792DFF2L, ((VECTOR(int32_t, 2))(0x1F35BEC1L)), 0x4CE0FADDL)).s8d94)), ((VECTOR(int32_t, 4))(0x6F25B569L)), l_638, ((VECTOR(int32_t, 2))(1L)), 0x039EB559L, ((VECTOR(int32_t, 4))(0x64C8AFE8L)))).even, ((VECTOR(int32_t, 8))((-1L)))))).odd)).odd, (int32_t)(-6L), (int32_t)l_639[0][2]))).xyyyxxyxxyxxyyyy)).sf5, ((VECTOR(int32_t, 2))(0x2FE6BACCL)), ((VECTOR(int32_t, 2))(1L))))).odd , l_640) , l_641) , l_642);
                        l_645 = l_644[1];
                        l_648[4][1][0] = (l_647 = (l_646 , 0x0B7E4C8FL));
                    }
                    else
                    { /* block id: 253 */
                        struct S0 *l_649 = (void*)0;
                        struct S0 *l_650 = (void*)0;
                        l_650 = l_649;
                    }
                    l_652 ^= l_651;
                    unsigned int result = 0;
                    result += l_612.y;
                    result += l_612.x;
                    result += l_651;
                    result += l_652;
                    atomic_add(&p_786->l_special_values[81], result);
                }
                else
                { /* block id: 257 */
                    (1 + 1);
                }
                l_428[2][1].f2 ^= ((l_653 , l_654) > (safe_mul_func_uint8_t_u_u(((*p_786->g_332) == (l_657 = l_657)), ((l_562.sc = (l_596.s2 , (l_567.s8 ^= (p_786->g_517.x != ((void*)0 == l_658))))) , (*p_786->g_569)))));
            }
            (*p_24) = 0x6241AD58L;
        }
        if (((*p_786->g_278) = (l_399 != l_562.se)))
        { /* block id: 268 */
            int32_t *l_659 = &l_552.f0;
            int32_t *l_660 = &p_786->g_67.f0;
            int32_t *l_661 = &l_291[0];
            int32_t *l_662 = (void*)0;
            int32_t *l_663[6][8] = {{&p_786->g_3[1],&p_786->g_3[1],&l_428[2][1].f1,&l_653.f1,&l_291[3],(void*)0,&l_291[3],&p_786->g_71.f0},{&p_786->g_3[1],&p_786->g_3[1],&l_428[2][1].f1,&l_653.f1,&l_291[3],(void*)0,&l_291[3],&p_786->g_71.f0},{&p_786->g_3[1],&p_786->g_3[1],&l_428[2][1].f1,&l_653.f1,&l_291[3],(void*)0,&l_291[3],&p_786->g_71.f0},{&p_786->g_3[1],&p_786->g_3[1],&l_428[2][1].f1,&l_653.f1,&l_291[3],(void*)0,&l_291[3],&p_786->g_71.f0},{&p_786->g_3[1],&p_786->g_3[1],&l_428[2][1].f1,&l_653.f1,&l_291[3],(void*)0,&l_291[3],&p_786->g_71.f0},{&p_786->g_3[1],&p_786->g_3[1],&l_428[2][1].f1,&l_653.f1,&l_291[3],(void*)0,&l_291[3],&p_786->g_71.f0}};
            int32_t l_664 = 0x1797BED2L;
            int i, j;
            ++l_665;
            return p_24;
        }
        else
        { /* block id: 271 */
            return l_669;
        }
    }
    else
    { /* block id: 274 */
        uint32_t l_684 = 0UL;
        struct S2 l_686[5][2] = {{{-8L,0x24BCL},{-8L,0x24BCL}},{{-8L,0x24BCL},{-8L,0x24BCL}},{{-8L,0x24BCL},{-8L,0x24BCL}},{{-8L,0x24BCL},{-8L,0x24BCL}},{{-8L,0x24BCL},{-8L,0x24BCL}}};
        struct S2 *l_703 = &p_786->g_67;
        int32_t *l_726 = &p_786->g_681.f1;
        uint32_t *l_753 = &p_786->g_433[2];
        struct S2 *l_754 = &l_686[4][1];
        struct S1 l_755[1][9][10] = {{{{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0L,0L,0x390B0BEEL,0x262763C5L,7L,1UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL}},{{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0L,0L,0x390B0BEEL,0x262763C5L,7L,1UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL}},{{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0L,0L,0x390B0BEEL,0x262763C5L,7L,1UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL}},{{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0L,0L,0x390B0BEEL,0x262763C5L,7L,1UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL}},{{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0L,0L,0x390B0BEEL,0x262763C5L,7L,1UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL}},{{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0L,0L,0x390B0BEEL,0x262763C5L,7L,1UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL}},{{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0L,0L,0x390B0BEEL,0x262763C5L,7L,1UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL}},{{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0L,0L,0x390B0BEEL,0x262763C5L,7L,1UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL}},{{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0L,0L,0x390B0BEEL,0x262763C5L,7L,1UL},{0x3EL,0x2042CD2AL,0x4F87A5AEL,0x1D3273ECL,0x74D6CA39D765041DL,4UL},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{1L,0x6B43EEB1L,0x0B015AB9L,0x10ED85D9L,0x6DD6DC86C84A9ACEL,0xDABDD1A5L},{0x47L,0x05769F4DL,0x4B66D735L,4L,0x6E0454409AF6ABE2L,4294967291UL}}}};
        int i, j, k;
        for (l_509.f0 = 0; (l_509.f0 != 56); l_509.f0 = safe_add_func_uint32_t_u_u(l_509.f0, 1))
        { /* block id: 277 */
            int8_t *l_672 = &l_428[2][1].f0;
            int32_t l_673 = (-1L);
            struct S1 **l_747[5];
            int i;
            for (i = 0; i < 5; i++)
                l_747[i] = &p_786->g_680;
            if (((void*)0 == l_672))
            { /* block id: 278 */
                struct S1 *l_677[4] = {&l_428[0][5],&l_428[0][5],&l_428[0][5],&l_428[0][5]};
                struct S1 **l_676 = &l_677[1];
                struct S1 **l_682 = &p_786->g_680;
                int32_t l_683[10];
                int32_t **l_687 = (void*)0;
                int i;
                for (i = 0; i < 10; i++)
                    l_683[i] = 0L;
                (*p_24) = (&p_786->g_332 != (void*)0);
                (*p_786->g_688) = (l_673 , func_25((func_36((safe_rshift_func_int16_t_s_s(l_673, 3)), (((*l_676) = (void*)0) == (void*)0), l_673, ((*p_786->g_455) , ((safe_lshift_func_int8_t_s_u(((*l_555) |= ((*l_672) |= (((*p_786->g_333) = (((!GROUP_DIVERGE(0, 1)) | ((((*l_682) = p_786->g_680) == (((func_36(l_683[6], l_684, l_685, l_552.f1, p_786) , 0x4992L) != FAKE_DIVERGE(p_786->local_0_offset, get_local_id(0), 10)) , (void*)0)) & l_502[4][1][0])) , l_686[2][0])) , p_786->g_308.s0))), 0)) , 0x3989F325L)), p_786) , l_683[6]), l_673, &l_683[2], p_24, &p_786->g_3[1], p_786));
            }
            else
            { /* block id: 286 */
                int64_t l_713 = 0x7F25231103DFD8BCL;
                uint8_t *l_724[3][8] = {{(void*)0,&l_296,(void*)0,&l_296,&l_296,&l_296,(void*)0,&l_296},{(void*)0,&l_296,(void*)0,&l_296,&l_296,&l_296,(void*)0,&l_296},{(void*)0,&l_296,(void*)0,&l_296,&l_296,&l_296,(void*)0,&l_296}};
                uint8_t **l_725 = &l_724[2][5];
                int32_t **l_727 = (void*)0;
                int32_t **l_728 = &p_786->g_278;
                uint16_t *l_729 = &p_786->g_71.f1;
                int i, j;
                for (p_786->g_681.f1 = (-10); (p_786->g_681.f1 >= (-26)); p_786->g_681.f1--)
                { /* block id: 289 */
                    uint64_t *l_707[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int64_t *l_714 = &p_786->g_681.f4;
                    int64_t *l_715 = &p_786->g_358;
                    int32_t l_721 = 0x0BEF1569L;
                    int i;
                    if ((((*l_715) = ((safe_unary_minus_func_int8_t_s((safe_mod_func_int32_t_s_s(((*p_24) &= (safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(l_698.wwxw)).xzywxxzwywzxzwxx, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(0x3A6EL, 65531UL)), 4)), (((l_703 = (void*)0) != (*p_786->g_332)) || p_786->g_368.w), 0x1EAEL, 0L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))(0x29CFL, ((VECTOR(int16_t, 2))(5L, 0x3B66L)), 1L)).xyyyyxwzwzwzyxww))).s45, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 2))(0x7C0CL, 0x3144L)), (int16_t)l_686[2][0].f1, (int16_t)(((((VECTOR(int32_t, 2))(l_704.wy)).lo < (safe_sub_func_int64_t_s_s(((l_698.w ^= FAKE_DIVERGE(p_786->group_0_offset, get_group_id(0), 10)) , (l_684 != ((*l_714) = (((*l_391) = ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 8))(3UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_786->g_708.s27)).yyyxxxyxyxxxyxyx)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(0xCB30E068L, (safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(0UL, ((l_713 ^ 0x6CL) , (*p_786->g_340)))), p_786->l_comm_values[(safe_mod_func_uint32_t_u_u(p_786->tid, 71))])), 0xB39118C2L, 0x41765759L)).ywwyzzzzwzwwxzxw)), ((VECTOR(uint32_t, 16))(0x0C62E865L))))).odd)).even)), ((VECTOR(uint32_t, 2))(0xC34E7D9BL)), 0UL)), ((VECTOR(uint32_t, 8))(0xADF0DE32L))))).s5317054511572671)).s9) && l_399)))), 0x16CAA364E721D726L))) < l_713) == l_686[2][0].f1)))).xxxy, ((VECTOR(int16_t, 4))((-1L)))))), ((VECTOR(int16_t, 4))(4L)), 0x75AFL, 0x130EL, (*p_786->g_340), 0L, (-1L), 0x76FCL, 1L, 0x7B5FL)).s54, ((VECTOR(int16_t, 2))(0x4537L))))).hi, ((VECTOR(int16_t, 4))(0x35A0L)), 1L, (-3L), 0x4A83L)), 0x389DL, 0x0964L, 0L, 0x156BL)).s01, ((VECTOR(uint16_t, 2))(4UL))))).xyyxyyyyyxxyyxyx))).sa, p_786->l_comm_values[(safe_mod_func_uint32_t_u_u(p_786->tid, 71))])), GROUP_DIVERGE(2, 1)))), 0x6477DED4L)))) , l_684)) <= p_786->g_597.w))
                    { /* block id: 296 */
                        atomic_max(&p_786->l_atomic_reduction[0], ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_716.s13ff)).xywyxxzw)).s2 + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_786->v_collective += p_786->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                    else
                    { /* block id: 298 */
                        struct S0 l_717 = {2UL};
                        (*p_786->g_458) = l_717;
                        l_673 |= (((safe_mod_func_uint32_t_u_u((l_721 | 0x6EDBL), l_552.f0)) >= GROUP_DIVERGE(0, 1)) , (*p_24));
                    }
                }
                (*l_611) = ((*p_786->g_680) = func_36((safe_rshift_func_uint16_t_u_s((((*l_725) = l_724[2][5]) != (void*)0), 14)), l_713, ((*l_729) |= (l_726 == (l_673 , ((*l_728) = p_24)))), (((safe_sub_func_uint8_t_u_u(((l_502[4][2][0] & ((safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(p_786->g_319, 13)) ^ ((safe_mod_func_int16_t_s_s((*p_786->g_340), p_786->g_561.x)) < l_428[2][1].f3)), l_673)) != p_786->g_3[0])) == l_673), l_673)) , FAKE_DIVERGE(p_786->group_0_offset, get_group_id(0), 10)) , p_786->g_740), p_786));
            }
            if ((atomic_inc(&p_786->l_atomic_input[66]) == 8))
            { /* block id: 310 */
                uint16_t l_741 = 0x5DB7L;
                uint8_t l_742 = 0xAFL;
                uint8_t l_743 = 0xCCL;
                VECTOR(uint16_t, 8) l_744 = (VECTOR(uint16_t, 8))(0xF624L, (VECTOR(uint16_t, 4))(0xF624L, (VECTOR(uint16_t, 2))(0xF624L, 1UL), 1UL), 1UL, 0xF624L, 1UL);
                int i;
                l_742 |= l_741;
                l_744.s5 = l_743;
                unsigned int result = 0;
                result += l_741;
                result += l_742;
                result += l_743;
                result += l_744.s7;
                result += l_744.s6;
                result += l_744.s5;
                result += l_744.s4;
                result += l_744.s3;
                result += l_744.s2;
                result += l_744.s1;
                result += l_744.s0;
                atomic_add(&p_786->l_special_values[66], result);
            }
            else
            { /* block id: 313 */
                (1 + 1);
            }
            for (p_786->g_740 = 0; (p_786->g_740 >= 39); p_786->g_740 = safe_add_func_int8_t_s_s(p_786->g_740, 8))
            { /* block id: 318 */
                (*p_786->g_278) = ((&l_611 != l_747[1]) && ((VECTOR(int64_t, 2))(0x13A2ACAFC7DEBDA6L, (-1L))).odd);
                (*p_786->g_749) = p_24;
            }
        }
        (*l_726) = (*l_726);
        (*p_786->g_278) = (((((0x52494D2A9CEE3CC0L < (safe_add_func_uint16_t_u_u((((VECTOR(int8_t, 16))(l_752.sd34b6704aeeb64e9)).s4 , FAKE_DIVERGE(p_786->global_0_offset, get_global_id(0), 10)), (*l_726)))) < (((*l_753) = (*l_726)) , (*l_726))) == (*l_726)) , (((*l_754) = ((*p_786->g_333) = l_686[2][0])) , &p_786->g_570)) == (l_755[0][6][5] , (func_31(l_552, (*p_786->g_680), (*p_786->g_749), p_786) , &l_296)));
    }
    return (*p_786->g_688);
}


/* ------------------------------------------ */
/* 
 * reads : p_786->g_278
 * writes: p_786->g_71.f0 p_786->g_70 p_786->g_278
 */
int32_t * func_25(uint8_t  p_26, int8_t  p_27, int32_t * p_28, int32_t * p_29, int32_t * p_30, struct S3 * p_786)
{ /* block id: 131 */
    struct S2 *l_281[8][7][1] = {{{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67}},{{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67}},{{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67}},{{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67}},{{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67}},{{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67}},{{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67}},{{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67},{&p_786->g_67}}};
    struct S2 **l_280 = &l_281[7][4][0];
    int32_t l_282 = 1L;
    int32_t **l_284 = &p_786->g_278;
    int i, j, k;
    p_28 = func_47(p_28, (((+((l_280 != (void*)0) < (p_26 >= GROUP_DIVERGE(0, 1)))) || l_282) >= l_282), p_786);
    (*l_284) = &p_786->g_3[1];
    return (*l_284);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
struct S2  func_31(struct S2  p_32, struct S1  p_33, int32_t * p_34, struct S3 * p_786)
{ /* block id: 129 */
    struct S2 l_279[5] = {{0x22F1BEE1L,0xFE99L},{0x22F1BEE1L,0xFE99L},{0x22F1BEE1L,0xFE99L},{0x22F1BEE1L,0xFE99L},{0x22F1BEE1L,0xFE99L}};
    int i;
    return l_279[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_786->l_comm_values p_786->g_18 p_786->g_67 p_786->g_80 p_786->g_71.f0 p_786->g_3 p_786->g_71.f1
 * writes: p_786->g_67 p_786->g_71 p_786->g_70 p_786->g_83 p_786->g_278
 */
struct S1  func_36(int64_t  p_37, uint8_t  p_38, uint16_t  p_39, int32_t  p_40, struct S3 * p_786)
{ /* block id: 6 */
    int32_t *l_50 = (void*)0;
    struct S1 l_86[9][2] = {{{1L,0L,0x22D7867EL,7L,0x241C05FA5AF98DCAL,4294967291UL},{-5L,-10L,0x2555199DL,-5L,-1L,0x60EB54A4L}},{{1L,0L,0x22D7867EL,7L,0x241C05FA5AF98DCAL,4294967291UL},{-5L,-10L,0x2555199DL,-5L,-1L,0x60EB54A4L}},{{1L,0L,0x22D7867EL,7L,0x241C05FA5AF98DCAL,4294967291UL},{-5L,-10L,0x2555199DL,-5L,-1L,0x60EB54A4L}},{{1L,0L,0x22D7867EL,7L,0x241C05FA5AF98DCAL,4294967291UL},{-5L,-10L,0x2555199DL,-5L,-1L,0x60EB54A4L}},{{1L,0L,0x22D7867EL,7L,0x241C05FA5AF98DCAL,4294967291UL},{-5L,-10L,0x2555199DL,-5L,-1L,0x60EB54A4L}},{{1L,0L,0x22D7867EL,7L,0x241C05FA5AF98DCAL,4294967291UL},{-5L,-10L,0x2555199DL,-5L,-1L,0x60EB54A4L}},{{1L,0L,0x22D7867EL,7L,0x241C05FA5AF98DCAL,4294967291UL},{-5L,-10L,0x2555199DL,-5L,-1L,0x60EB54A4L}},{{1L,0L,0x22D7867EL,7L,0x241C05FA5AF98DCAL,4294967291UL},{-5L,-10L,0x2555199DL,-5L,-1L,0x60EB54A4L}},{{1L,0L,0x22D7867EL,7L,0x241C05FA5AF98DCAL,4294967291UL},{-5L,-10L,0x2555199DL,-5L,-1L,0x60EB54A4L}}};
    int32_t **l_263[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_264 = 4294967286UL;
    VECTOR(int64_t, 4) l_267 = (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), 0x344387E8C3443746L), 0x344387E8C3443746L);
    struct S0 l_270[7] = {{0xD68A0E271EE97659L},{0x471B374B03E8A2A8L},{0xD68A0E271EE97659L},{0xD68A0E271EE97659L},{0x471B374B03E8A2A8L},{0xD68A0E271EE97659L},{0xD68A0E271EE97659L}};
    VECTOR(int32_t, 4) l_277 = (VECTOR(int32_t, 4))(0x1A76D4F9L, (VECTOR(int32_t, 2))(0x1A76D4F9L, 9L), 9L);
    int i, j;
    p_786->g_83[0] = func_47(l_50, (p_786->l_comm_values[(safe_mod_func_uint32_t_u_u(p_786->tid, 71))] < ((((((safe_div_func_int64_t_s_s(p_40, ((safe_lshift_func_uint8_t_u_u(p_40, (safe_add_func_int16_t_s_s(func_57(l_50, p_40, p_786), ((l_86[0][1] , p_786->g_3[1]) >= 1UL))))) && l_86[0][1].f3))) & GROUP_DIVERGE(2, 1)) , p_40) , 8UL) | p_786->g_80.s3) && l_86[0][1].f0)), p_786);
    l_264--;
    p_786->g_83[0] = func_47((p_786->g_278 = func_47(&p_786->g_3[1], (((((VECTOR(int64_t, 4))(l_267.wzxx)).x || (((p_786->g_71.f1 <= (0x53L != (((+((safe_mod_func_int32_t_s_s((-5L), (((void*)0 != &p_786->g_3[1]) , (l_270[4] , p_786->g_3[6])))) >= ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((18446744073709551613UL >= p_38), p_786->l_comm_values[(safe_mod_func_uint32_t_u_u(p_786->tid, 71))])), p_786->g_71.f0)), p_40)) , p_786->l_comm_values[(safe_mod_func_uint32_t_u_u(p_786->tid, 71))]))) == 0x08L) , 9UL))) , 0x497DL) == p_39)) & l_277.y) , p_786->g_80.s5), p_786)), p_40, p_786);
    return l_86[4][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_786->g_71.f0
 * writes: p_786->g_71.f0 p_786->g_70
 */
int32_t * func_47(int32_t * p_48, int32_t  p_49, struct S3 * p_786)
{ /* block id: 20 */
    struct S2 *l_262 = &p_786->g_71;
    struct S2 **l_261[2][2] = {{&l_262,&l_262},{&l_262,&l_262}};
    int i, j;
    if ((atomic_inc(&p_786->g_atomic_input[86 * get_linear_group_id() + 4]) == 8))
    { /* block id: 22 */
        int32_t l_87 = 0x7389711EL;
        for (l_87 = 0; (l_87 > 23); l_87 = safe_add_func_uint8_t_u_u(l_87, 2))
        { /* block id: 25 */
            VECTOR(int32_t, 16) l_90 = (VECTOR(int32_t, 16))(0x6F16DAB5L, (VECTOR(int32_t, 4))(0x6F16DAB5L, (VECTOR(int32_t, 2))(0x6F16DAB5L, 0x2CA7B4D5L), 0x2CA7B4D5L), 0x2CA7B4D5L, 0x6F16DAB5L, 0x2CA7B4D5L, (VECTOR(int32_t, 2))(0x6F16DAB5L, 0x2CA7B4D5L), (VECTOR(int32_t, 2))(0x6F16DAB5L, 0x2CA7B4D5L), 0x6F16DAB5L, 0x2CA7B4D5L, 0x6F16DAB5L, 0x2CA7B4D5L);
            VECTOR(int32_t, 2) l_109 = (VECTOR(int32_t, 2))(0x55790580L, (-6L));
            int32_t *l_255 = (void*)0;
            int32_t *l_256 = (void*)0;
            int i;
            if (((VECTOR(int32_t, 4))(5L, ((VECTOR(int32_t, 2))(l_90.sce)), 0x74B05BB3L)).z)
            { /* block id: 26 */
                int32_t l_92 = (-2L);
                int32_t *l_91 = &l_92;
                int32_t *l_93[3][5] = {{&l_92,&l_92,(void*)0,&l_92,&l_92},{&l_92,&l_92,(void*)0,&l_92,&l_92},{&l_92,&l_92,(void*)0,&l_92,&l_92}};
                int i, j;
                l_93[0][2] = l_91;
            }
            else
            { /* block id: 28 */
                int32_t l_94 = 0x1248EFB7L;
                int64_t l_95 = 0x1B2D93A861C211F7L;
                int64_t l_96[1];
                int8_t l_97[6];
                uint8_t l_98 = 0xDDL;
                int32_t *l_101 = &l_94;
                int32_t *l_102[8];
                struct S2 l_104 = {0x58DA1D73L,8UL};
                struct S2 *l_103 = &l_104;
                struct S2 *l_105 = &l_104;
                int32_t *l_106 = &l_94;
                int32_t *l_107 = &l_94;
                int32_t *l_108 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_96[i] = 0x26F71A791DEB0A87L;
                for (i = 0; i < 6; i++)
                    l_97[i] = 0x59L;
                for (i = 0; i < 8; i++)
                    l_102[i] = &l_94;
                l_98--;
                l_102[4] = (l_101 = (void*)0);
                l_105 = l_103;
                l_108 = (l_107 = l_106);
            }
            if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_109.xx)).yxyy)).x)
            { /* block id: 36 */
                int32_t l_110 = 0L;
                struct S0 l_188 = {18446744073709551613UL};
                int8_t l_189[5][3] = {{(-7L),(-1L),0x78L},{(-7L),(-1L),0x78L},{(-7L),(-1L),0x78L},{(-7L),(-1L),0x78L},{(-7L),(-1L),0x78L}};
                int64_t l_190 = (-8L);
                int64_t l_191 = 0x23C6B0DC29E29881L;
                int32_t *l_192 = &l_110;
                int32_t *l_193 = &l_110;
                int i, j;
                for (l_110 = (-6); (l_110 > (-15)); l_110 = safe_sub_func_int16_t_s_s(l_110, 6))
                { /* block id: 39 */
                    int32_t l_114 = 1L;
                    int32_t *l_113[7][7] = {{(void*)0,(void*)0,&l_114,&l_114,(void*)0,(void*)0,&l_114},{(void*)0,(void*)0,&l_114,&l_114,(void*)0,(void*)0,&l_114},{(void*)0,(void*)0,&l_114,&l_114,(void*)0,(void*)0,&l_114},{(void*)0,(void*)0,&l_114,&l_114,(void*)0,(void*)0,&l_114},{(void*)0,(void*)0,&l_114,&l_114,(void*)0,(void*)0,&l_114},{(void*)0,(void*)0,&l_114,&l_114,(void*)0,(void*)0,&l_114},{(void*)0,(void*)0,&l_114,&l_114,(void*)0,(void*)0,&l_114}};
                    int32_t *l_115 = &l_114;
                    int32_t *l_116 = &l_114;
                    int32_t *l_117 = &l_114;
                    int i, j;
                    l_117 = (l_116 = (l_115 = l_113[1][3]));
                }
                for (l_110 = (-21); (l_110 > 2); ++l_110)
                { /* block id: 46 */
                    int32_t l_120 = 6L;
                    struct S2 l_169 = {3L,65529UL};
                    struct S2 *l_168 = &l_169;
                    struct S2 **l_167 = &l_168;
                    struct S2 **l_170[7] = {&l_168,&l_168,&l_168,&l_168,&l_168,&l_168,&l_168};
                    int i;
                    for (l_120 = 0; (l_120 < (-15)); l_120 = safe_sub_func_int32_t_s_s(l_120, 3))
                    { /* block id: 49 */
                        int16_t l_123 = 0L;
                        int64_t l_124[9][5] = {{(-1L),0L,0x4DC14FE9C12CE41FL,0L,0L},{(-1L),0L,0x4DC14FE9C12CE41FL,0L,0L},{(-1L),0L,0x4DC14FE9C12CE41FL,0L,0L},{(-1L),0L,0x4DC14FE9C12CE41FL,0L,0L},{(-1L),0L,0x4DC14FE9C12CE41FL,0L,0L},{(-1L),0L,0x4DC14FE9C12CE41FL,0L,0L},{(-1L),0L,0x4DC14FE9C12CE41FL,0L,0L},{(-1L),0L,0x4DC14FE9C12CE41FL,0L,0L},{(-1L),0L,0x4DC14FE9C12CE41FL,0L,0L}};
                        VECTOR(uint16_t, 8) l_125 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 7UL), 7UL), 7UL, 0UL, 7UL);
                        VECTOR(int16_t, 4) l_126 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x379EL), 0x379EL);
                        VECTOR(uint16_t, 4) l_127 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL);
                        VECTOR(uint16_t, 8) l_128 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xF70AL), 0xF70AL), 0xF70AL, 65535UL, 0xF70AL);
                        VECTOR(uint16_t, 8) l_129 = (VECTOR(uint16_t, 8))(0xA804L, (VECTOR(uint16_t, 4))(0xA804L, (VECTOR(uint16_t, 2))(0xA804L, 65528UL), 65528UL), 65528UL, 0xA804L, 65528UL);
                        int32_t l_130 = (-1L);
                        uint16_t l_131[3];
                        VECTOR(uint64_t, 2) l_132 = (VECTOR(uint64_t, 2))(0xC000487FC3788430L, 0x75795804E8CAA09BL);
                        VECTOR(uint64_t, 2) l_133 = (VECTOR(uint64_t, 2))(0x8709DC6AD9C61CCEL, 0UL);
                        VECTOR(uint64_t, 4) l_134 = (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x3FAE4BFFE45614CEL), 0x3FAE4BFFE45614CEL);
                        struct S0 l_135[5] = {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}};
                        VECTOR(uint64_t, 8) l_136 = (VECTOR(uint64_t, 8))(0xD2B88D7C33F7625DL, (VECTOR(uint64_t, 4))(0xD2B88D7C33F7625DL, (VECTOR(uint64_t, 2))(0xD2B88D7C33F7625DL, 0xD038AAF2569BDC76L), 0xD038AAF2569BDC76L), 0xD038AAF2569BDC76L, 0xD2B88D7C33F7625DL, 0xD038AAF2569BDC76L);
                        struct S0 l_137 = {18446744073709551610UL};
                        VECTOR(uint16_t, 4) l_138 = (VECTOR(uint16_t, 4))(0x1C35L, (VECTOR(uint16_t, 2))(0x1C35L, 0UL), 0UL);
                        uint32_t l_139 = 1UL;
                        int8_t l_140 = 1L;
                        int64_t l_141[2][10] = {{0x080A19A2165D2405L,0x7705220B7D190524L,0x4C53010FE33B61AEL,2L,0x7705220B7D190524L,2L,0x4C53010FE33B61AEL,0x7705220B7D190524L,0x080A19A2165D2405L,0x080A19A2165D2405L},{0x080A19A2165D2405L,0x7705220B7D190524L,0x4C53010FE33B61AEL,2L,0x7705220B7D190524L,2L,0x4C53010FE33B61AEL,0x7705220B7D190524L,0x080A19A2165D2405L,0x080A19A2165D2405L}};
                        int32_t l_142 = 0x6266AF2FL;
                        int16_t l_143 = 0x3F69L;
                        uint64_t l_144 = 0x0103624ADBFCEA1EL;
                        struct S2 l_147 = {0x26E07A8EL,1UL};
                        struct S2 *l_146 = &l_147;
                        struct S2 **l_145 = &l_146;
                        struct S2 **l_148 = &l_146;
                        struct S2 **l_149 = &l_146;
                        struct S2 **l_150 = (void*)0;
                        struct S2 **l_151 = &l_146;
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_131[i] = 0x9C74L;
                        l_109.y = l_123;
                        l_151 = (l_150 = (l_149 = (l_148 = (l_124[3][2] , (((VECTOR(uint16_t, 16))(0xAAD6L, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_125.s3045)).xxzxzwzz)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 16))(l_126.xzwxwxyyywwyxxyx)).hi))).even, ((VECTOR(uint16_t, 2))(l_127.yw)).yxyy))).zyzwwwwy, ((VECTOR(uint16_t, 2))(l_128.s77)).yyyyyxyy))).s32)))), ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 16))(l_129.s1560653133425720)).s279d, ((VECTOR(uint16_t, 8))(7UL, 0x0A0FL, 0x41A0L, ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(255UL, 0xDBL)), (l_143 = (((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 16))(0x7DE1560B615696D6L, 0x557DD34D88E7D84EL, 0x2E85F59071E43657L, 8UL, ((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 16))(GROUP_DIVERGE(0, 1), 0x259ABB1F7435F219L, 0x6FF7F16177B4B0E1L, (l_130 , 0x6E3802CFFAFFF13CL), l_131[2], ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(0x7B94B598FB1967CBL, ((VECTOR(uint64_t, 2))(0xB37A05F2A7C57E4FL, 18446744073709551613UL)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(abs(((VECTOR(uint64_t, 4))(l_132.xxyy)).xxxzzwyzxwwwxxxw))).s1f)), ((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 4))(l_133.xyxy)).lo, ((VECTOR(uint64_t, 4))(1UL, ((VECTOR(uint64_t, 2))(0x608D486CFEE31660L, 0xC90CB26268CB1CE7L)), 18446744073709551615UL)).hi))), 18446744073709551615UL)).s37)), 0x18BB1ADA6F621B4FL, ((VECTOR(uint64_t, 4))(l_134.zywx)), 0xDD9ACFF28DE542F5L, 1UL, 7UL, 1UL)).sa3, ((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 16))(0x35DF793C2613D90FL, 0x2692C9271733CD63L, (l_135[0] , FAKE_DIVERGE(p_786->group_2_offset, get_group_id(2), 10)), ((VECTOR(uint64_t, 4))(l_136.s0721)), (l_137 , ((l_138.z , 0L) , GROUP_DIVERGE(2, 1))), 0UL, 0x59C4CCA3F0311DD1L, 0UL, 18446744073709551612UL, l_139, l_140, 0x760C5D1EC6DD82FEL, 0UL)).lo, ((VECTOR(uint64_t, 8))(0x104350C7B6A1989BL))))).s6625300726741603, (uint64_t)l_141[1][7]))).s8c))), 1UL, 18446744073709551613UL)).odd))), 0x908AECDC9E869F92L, 3UL, ((VECTOR(uint64_t, 2))(0xD90661D1CEF0AC72L)), FAKE_DIVERGE(p_786->group_2_offset, get_group_id(2), 10), 1UL, ((VECTOR(uint64_t, 2))(0x407581B478E8836BL)), 0x201CB5AC61B89C92L, 1UL)).saf))).odd , l_142)), 246UL, ((VECTOR(uint8_t, 4))(2UL)), 248UL, 0x32L, ((VECTOR(uint8_t, 2))(255UL)), 7UL, l_144, 0xD3L, 0x83L)).s47ab, ((VECTOR(uint8_t, 4))(0x41L))))), 0x041EL)).odd))), 65535UL)).s0 , l_145)))));
                    }
                    for (l_120 = (-5); (l_120 < (-4)); l_120++)
                    { /* block id: 59 */
                        uint8_t l_154 = 1UL;
                        int16_t l_155 = 0x1133L;
                        int32_t l_156[1];
                        int16_t l_157 = 0x4AAAL;
                        int8_t l_158 = (-1L);
                        uint16_t l_159 = 0x14F7L;
                        struct S1 l_162 = {-1L,-1L,-1L,9L,0x6DFD013E866A5DDAL,7UL};
                        struct S1 l_163[5][7] = {{{-4L,0x0B79E957L,-1L,-9L,0x41467E5DD029318BL,0x2019D559L},{0x1FL,0L,0x7E94F4A1L,9L,0x3985607DF4A3FD36L,0xC4771298L},{0x51L,1L,0x4661E40CL,4L,0x1A525DDED77BE777L,0xDB8EC8C7L},{0x1FL,0L,0x7E94F4A1L,9L,0x3985607DF4A3FD36L,0xC4771298L},{-4L,0x0B79E957L,-1L,-9L,0x41467E5DD029318BL,0x2019D559L},{-4L,0x0B79E957L,-1L,-9L,0x41467E5DD029318BL,0x2019D559L},{0x1FL,0L,0x7E94F4A1L,9L,0x3985607DF4A3FD36L,0xC4771298L}},{{-4L,0x0B79E957L,-1L,-9L,0x41467E5DD029318BL,0x2019D559L},{0x1FL,0L,0x7E94F4A1L,9L,0x3985607DF4A3FD36L,0xC4771298L},{0x51L,1L,0x4661E40CL,4L,0x1A525DDED77BE777L,0xDB8EC8C7L},{0x1FL,0L,0x7E94F4A1L,9L,0x3985607DF4A3FD36L,0xC4771298L},{-4L,0x0B79E957L,-1L,-9L,0x41467E5DD029318BL,0x2019D559L},{-4L,0x0B79E957L,-1L,-9L,0x41467E5DD029318BL,0x2019D559L},{0x1FL,0L,0x7E94F4A1L,9L,0x3985607DF4A3FD36L,0xC4771298L}},{{-4L,0x0B79E957L,-1L,-9L,0x41467E5DD029318BL,0x2019D559L},{0x1FL,0L,0x7E94F4A1L,9L,0x3985607DF4A3FD36L,0xC4771298L},{0x51L,1L,0x4661E40CL,4L,0x1A525DDED77BE777L,0xDB8EC8C7L},{0x1FL,0L,0x7E94F4A1L,9L,0x3985607DF4A3FD36L,0xC4771298L},{-4L,0x0B79E957L,-1L,-9L,0x41467E5DD029318BL,0x2019D559L},{-4L,0x0B79E957L,-1L,-9L,0x41467E5DD029318BL,0x2019D559L},{0x1FL,0L,0x7E94F4A1L,9L,0x3985607DF4A3FD36L,0xC4771298L}},{{-4L,0x0B79E957L,-1L,-9L,0x41467E5DD029318BL,0x2019D559L},{0x1FL,0L,0x7E94F4A1L,9L,0x3985607DF4A3FD36L,0xC4771298L},{0x51L,1L,0x4661E40CL,4L,0x1A525DDED77BE777L,0xDB8EC8C7L},{0x1FL,0L,0x7E94F4A1L,9L,0x3985607DF4A3FD36L,0xC4771298L},{-4L,0x0B79E957L,-1L,-9L,0x41467E5DD029318BL,0x2019D559L},{-4L,0x0B79E957L,-1L,-9L,0x41467E5DD029318BL,0x2019D559L},{0x1FL,0L,0x7E94F4A1L,9L,0x3985607DF4A3FD36L,0xC4771298L}},{{-4L,0x0B79E957L,-1L,-9L,0x41467E5DD029318BL,0x2019D559L},{0x1FL,0L,0x7E94F4A1L,9L,0x3985607DF4A3FD36L,0xC4771298L},{0x51L,1L,0x4661E40CL,4L,0x1A525DDED77BE777L,0xDB8EC8C7L},{0x1FL,0L,0x7E94F4A1L,9L,0x3985607DF4A3FD36L,0xC4771298L},{-4L,0x0B79E957L,-1L,-9L,0x41467E5DD029318BL,0x2019D559L},{-4L,0x0B79E957L,-1L,-9L,0x41467E5DD029318BL,0x2019D559L},{0x1FL,0L,0x7E94F4A1L,9L,0x3985607DF4A3FD36L,0xC4771298L}}};
                        uint64_t l_164 = 18446744073709551606UL;
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_156[i] = 0x6E17F405L;
                        l_155 = l_154;
                        --l_159;
                        l_163[2][1] = l_162;
                        --l_164;
                    }
                    l_170[3] = l_167;
                    for (l_169.f0 = 0; (l_169.f0 == (-22)); --l_169.f0)
                    { /* block id: 68 */
                        VECTOR(int8_t, 2) l_173 = (VECTOR(int8_t, 2))((-1L), 0x77L);
                        VECTOR(int8_t, 16) l_174 = (VECTOR(int8_t, 16))(0x6EL, (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, 0L), 0L), 0L, 0x6EL, 0L, (VECTOR(int8_t, 2))(0x6EL, 0L), (VECTOR(int8_t, 2))(0x6EL, 0L), 0x6EL, 0L, 0x6EL, 0L);
                        int8_t l_175 = (-6L);
                        VECTOR(uint64_t, 8) l_176 = (VECTOR(uint64_t, 8))(18446744073709551612UL, (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x8CA9B3D71B0492FCL), 0x8CA9B3D71B0492FCL), 0x8CA9B3D71B0492FCL, 18446744073709551612UL, 0x8CA9B3D71B0492FCL);
                        uint32_t l_177[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                        int16_t l_178 = 0x3C32L;
                        int64_t l_179 = 0x5B64655A230B5BDBL;
                        struct S1 l_180 = {0L,6L,0x02C48DB3L,-8L,0L,0x960BBCD6L};
                        struct S0 l_181 = {0x0A924ABB9B91C458L};
                        struct S0 l_182[6] = {{0x106815FF81F1C5D3L},{0x106815FF81F1C5D3L},{0x106815FF81F1C5D3L},{0x106815FF81F1C5D3L},{0x106815FF81F1C5D3L},{0x106815FF81F1C5D3L}};
                        struct S0 l_183 = {3UL};
                        struct S0 l_184 = {0xD58CD3D53B09113BL};
                        struct S0 l_185 = {0UL};
                        int32_t *l_186 = &l_180.f1;
                        int32_t *l_187 = (void*)0;
                        int i;
                        l_187 = ((l_185 = (l_184 = (l_183 = ((((l_175 = ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_173.xx)).yyxy)).xwyyzzxzwywzzwxy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_174.s8dba)).xzwxzzyzzzyxwxzy))))).s0) , (l_176.s4 , l_177[6])) , l_178) , (l_179 , (l_182[4] = (l_180 , (l_181 = l_181)))))))) , l_186);
                    }
                }
                l_193 = ((l_191 |= (l_188 , (l_190 = l_189[0][2]))) , l_192);
                for (l_189[0][2] = 9; (l_189[0][2] >= 14); l_189[0][2]++)
                { /* block id: 83 */
                    int32_t l_196 = 0x55E27A0AL;
                    for (l_196 = (-23); (l_196 > (-14)); l_196++)
                    { /* block id: 86 */
                        VECTOR(int32_t, 8) l_199 = (VECTOR(int32_t, 8))(0x70D411CFL, (VECTOR(int32_t, 4))(0x70D411CFL, (VECTOR(int32_t, 2))(0x70D411CFL, 5L), 5L), 5L, 0x70D411CFL, 5L);
                        VECTOR(int32_t, 16) l_200 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x009B3B63L), 0x009B3B63L), 0x009B3B63L, (-1L), 0x009B3B63L, (VECTOR(int32_t, 2))((-1L), 0x009B3B63L), (VECTOR(int32_t, 2))((-1L), 0x009B3B63L), (-1L), 0x009B3B63L, (-1L), 0x009B3B63L);
                        VECTOR(int32_t, 4) l_201 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 6L), 6L);
                        uint32_t l_202 = 4294967290UL;
                        VECTOR(int32_t, 8) l_203 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x6C631E3EL), 0x6C631E3EL), 0x6C631E3EL, 5L, 0x6C631E3EL);
                        VECTOR(int32_t, 16) l_204 = (VECTOR(int32_t, 16))(0x7DE8DAFFL, (VECTOR(int32_t, 4))(0x7DE8DAFFL, (VECTOR(int32_t, 2))(0x7DE8DAFFL, 0x69DA9D15L), 0x69DA9D15L), 0x69DA9D15L, 0x7DE8DAFFL, 0x69DA9D15L, (VECTOR(int32_t, 2))(0x7DE8DAFFL, 0x69DA9D15L), (VECTOR(int32_t, 2))(0x7DE8DAFFL, 0x69DA9D15L), 0x7DE8DAFFL, 0x69DA9D15L, 0x7DE8DAFFL, 0x69DA9D15L);
                        VECTOR(int16_t, 2) l_205 = (VECTOR(int16_t, 2))((-2L), 0x791FL);
                        VECTOR(uint16_t, 4) l_206 = (VECTOR(uint16_t, 4))(0xD2E3L, (VECTOR(uint16_t, 2))(0xD2E3L, 0UL), 0UL);
                        VECTOR(int32_t, 4) l_207 = (VECTOR(int32_t, 4))(0x5DEA7871L, (VECTOR(int32_t, 2))(0x5DEA7871L, 0x6F4DC4D7L), 0x6F4DC4D7L);
                        VECTOR(int32_t, 2) l_208 = (VECTOR(int32_t, 2))(0x3445DA4CL, 0x0E1D8DCDL);
                        uint32_t l_209[2];
                        VECTOR(int32_t, 16) l_210 = (VECTOR(int32_t, 16))(0x29B597B5L, (VECTOR(int32_t, 4))(0x29B597B5L, (VECTOR(int32_t, 2))(0x29B597B5L, (-6L)), (-6L)), (-6L), 0x29B597B5L, (-6L), (VECTOR(int32_t, 2))(0x29B597B5L, (-6L)), (VECTOR(int32_t, 2))(0x29B597B5L, (-6L)), 0x29B597B5L, (-6L), 0x29B597B5L, (-6L));
                        VECTOR(int32_t, 8) l_211 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L);
                        VECTOR(int32_t, 4) l_212 = (VECTOR(int32_t, 4))(0x5D38E617L, (VECTOR(int32_t, 2))(0x5D38E617L, 0L), 0L);
                        VECTOR(int32_t, 2) l_213 = (VECTOR(int32_t, 2))(0x1732A5C8L, 0x1E699FB9L);
                        uint16_t l_214[7] = {65529UL,0xC881L,65529UL,65529UL,0xC881L,65529UL,65529UL};
                        uint16_t l_215 = 4UL;
                        int8_t l_216[8] = {1L,8L,1L,1L,8L,1L,1L,8L};
                        uint32_t l_217 = 0x6CC17CFAL;
                        struct S0 l_218 = {18446744073709551607UL};
                        uint16_t l_219[4][4] = {{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}};
                        uint8_t l_220 = 0x15L;
                        int32_t l_221[8];
                        uint32_t l_222 = 6UL;
                        int8_t l_223 = 1L;
                        uint32_t l_224 = 0x0FCF4C61L;
                        uint16_t l_225 = 65534UL;
                        int32_t l_226 = 0x666FFBF4L;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_209[i] = 0xC60C495EL;
                        for (i = 0; i < 8; i++)
                            l_221[i] = 0L;
                        l_109.y = ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(0L, 0x7201F38DL, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_199.s2630)))).even, (int32_t)5L))), (l_90.s1 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_200.sd6)).odd, ((VECTOR(int32_t, 4))(l_201.wwww)), 0x0797314FL, l_202, 1L, ((*l_192) = 0x703896E1L), ((VECTOR(int32_t, 2))(l_203.s20)), 0x152E5FB8L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_204.s133c6b0b576518f1)).s46)), 0x0AB97504L, (-1L))).s3b71, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(l_205.xxxy)).wyxzzyyz, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_206.wx)))).xxxyxxxy))).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(l_207.yzzx)).xxxxywwyxxyzxzzx, ((VECTOR(int32_t, 2))(l_208.yx)).xxxyyxyxyxxxyyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))((-1L), l_209[0], (-1L), (-10L))).lo, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(0x315CE64BL, 0x74EE3F9EL)).yyxxxyxy, ((VECTOR(int32_t, 4))(l_210.sdbf7)).zzxwwwwy, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_211.s1313)), ((VECTOR(int32_t, 2))(0x4E47EAB3L, 0L)).yyxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_212.ywyywyzx)).s1635443422142404)).s0b11))).yzwywxzz))).s16, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_213.xxyyxyyxyxxxyxxx)).s6d41)).even))))))).xxyyxxyxyxxxxyyx))))).sccea))))).hi)).odd), 0L, l_214[4], 0x79B6EA8FL, l_215, l_216[5], ((VECTOR(int32_t, 2))((-8L))), 0x2CACBC3AL, l_217, (-8L), (-1L))), ((VECTOR(int32_t, 16))((-8L)))))).s0;
                        l_188 = l_218;
                        (*l_192) = ((l_223 = (l_222 = ((l_220 = (l_191 &= (l_190 = l_219[0][2]))) , (GROUP_DIVERGE(0, 1) , l_221[3])))) , ((l_226 = (l_225 = l_224)) , 0x461A2151L));
                    }
                }
            }
            else
            { /* block id: 101 */
                uint64_t l_227 = 1UL;
                int32_t *l_228 = (void*)0;
                int32_t l_230 = 0x136A677BL;
                int32_t *l_229 = &l_230;
                VECTOR(int32_t, 8) l_231 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x70AE9239L), 0x70AE9239L), 0x70AE9239L, 6L, 0x70AE9239L);
                VECTOR(int32_t, 8) l_232 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                VECTOR(int32_t, 2) l_233 = (VECTOR(int32_t, 2))((-8L), (-1L));
                VECTOR(int32_t, 4) l_234 = (VECTOR(int32_t, 4))(0x05BAB2BBL, (VECTOR(int32_t, 2))(0x05BAB2BBL, 0L), 0L);
                VECTOR(uint8_t, 4) l_235 = (VECTOR(uint8_t, 4))(0xF3L, (VECTOR(uint8_t, 2))(0xF3L, 0UL), 0UL);
                VECTOR(int32_t, 4) l_236 = (VECTOR(int32_t, 4))(0x3D935774L, (VECTOR(int32_t, 2))(0x3D935774L, 0x43F378C7L), 0x43F378C7L);
                VECTOR(int32_t, 16) l_237 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x6AD80EDCL), 0x6AD80EDCL), 0x6AD80EDCL, 6L, 0x6AD80EDCL, (VECTOR(int32_t, 2))(6L, 0x6AD80EDCL), (VECTOR(int32_t, 2))(6L, 0x6AD80EDCL), 6L, 0x6AD80EDCL, 6L, 0x6AD80EDCL);
                int32_t l_238 = 1L;
                int8_t l_239 = 0x36L;
                int64_t l_240 = 0x0E34BD4938FE4805L;
                struct S1 l_241 = {-5L,0x225DDFBCL,0x2AA58F52L,0x1EB5ED7DL,0x58F780C5D144D0A4L,0UL};
                VECTOR(int32_t, 16) l_242 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), (-5L)), (-5L)), (-5L), (-8L), (-5L), (VECTOR(int32_t, 2))((-8L), (-5L)), (VECTOR(int32_t, 2))((-8L), (-5L)), (-8L), (-5L), (-8L), (-5L));
                int64_t l_243 = 0x01FB460BE9092F00L;
                uint16_t l_244 = 0xC33FL;
                int64_t l_245 = 0x45E64348B5250FE5L;
                VECTOR(int32_t, 16) l_246 = (VECTOR(int32_t, 16))(0x4A67104AL, (VECTOR(int32_t, 4))(0x4A67104AL, (VECTOR(int32_t, 2))(0x4A67104AL, 1L), 1L), 1L, 0x4A67104AL, 1L, (VECTOR(int32_t, 2))(0x4A67104AL, 1L), (VECTOR(int32_t, 2))(0x4A67104AL, 1L), 0x4A67104AL, 1L, 0x4A67104AL, 1L);
                struct S0 l_247 = {18446744073709551608UL};
                uint32_t l_248 = 1UL;
                uint8_t l_249 = 4UL;
                uint64_t l_250 = 18446744073709551615UL;
                uint32_t l_251 = 0x8FA6BBBDL;
                struct S2 l_253[4][2][2] = {{{{-3L,0x649DL},{-9L,0x2E19L}},{{-3L,0x649DL},{-9L,0x2E19L}}},{{{-3L,0x649DL},{-9L,0x2E19L}},{{-3L,0x649DL},{-9L,0x2E19L}}},{{{-3L,0x649DL},{-9L,0x2E19L}},{{-3L,0x649DL},{-9L,0x2E19L}}},{{{-3L,0x649DL},{-9L,0x2E19L}},{{-3L,0x649DL},{-9L,0x2E19L}}}};
                struct S2 *l_252[4][4][2] = {{{&l_253[2][0][0],&l_253[2][0][0]},{&l_253[2][0][0],&l_253[2][0][0]},{&l_253[2][0][0],&l_253[2][0][0]},{&l_253[2][0][0],&l_253[2][0][0]}},{{&l_253[2][0][0],&l_253[2][0][0]},{&l_253[2][0][0],&l_253[2][0][0]},{&l_253[2][0][0],&l_253[2][0][0]},{&l_253[2][0][0],&l_253[2][0][0]}},{{&l_253[2][0][0],&l_253[2][0][0]},{&l_253[2][0][0],&l_253[2][0][0]},{&l_253[2][0][0],&l_253[2][0][0]},{&l_253[2][0][0],&l_253[2][0][0]}},{{&l_253[2][0][0],&l_253[2][0][0]},{&l_253[2][0][0],&l_253[2][0][0]},{&l_253[2][0][0],&l_253[2][0][0]},{&l_253[2][0][0],&l_253[2][0][0]}}};
                struct S2 *l_254 = (void*)0;
                int i, j, k;
                l_109.y = l_227;
                l_229 = l_228;
                l_90.sa = (l_109.y = ((l_250 = ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_231.s02521177)).s04)).xyyyyyxxxxyxxyyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x1D018CBEL, (-7L))))).xxxxxxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((l_235.x = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(l_232.s12504601)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(l_233.xyxyyyyxyyxyxyyy)).hi))).s1116240404451230)).odd, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 0L)).yxxxxyxx)).s65, ((VECTOR(int32_t, 16))(l_234.xywwxyzzyzyzwywz)).sf2))).xyxxxxxy))).hi)).y), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_236.zy)), (-1L), (-1L))).hi))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_237.s81)).yyyx)), (-3L))).s5763044146567605)).sbe, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))((-5L), 1L, (l_239 ^= l_238), 0x0204A155L, (-1L), ((l_240 , l_241) , ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(l_242.sb382)), ((VECTOR(int32_t, 2))((-1L), 0L)).yxyy))))).lo, (int32_t)l_243))).yyyyyxyyxyyyyyxx)).s78, (int32_t)l_244, (int32_t)(l_245 = 1L)))).even), ((VECTOR(int32_t, 2))(l_246.s09)), (-1L), 0x66FDB41FL, 0L, 0x77142EE2L, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(0x5D7C5358L, 0x27D40B09L, (l_247 , 1L), l_248, l_249, ((VECTOR(int32_t, 2))(0x5458DFCEL)), 0x1296C2F9L)).s0215124350344131, ((VECTOR(int32_t, 16))(6L)), ((VECTOR(int32_t, 16))(0L))))))).hi, ((VECTOR(int32_t, 8))((-3L)))))), ((VECTOR(int32_t, 8))(6L)))))))).s11, ((VECTOR(int32_t, 2))(0x64DED225L))))), 0x22FDED5EL, 0x7E6A233AL)).even, ((VECTOR(int32_t, 8))((-5L)))))).s56)))))).yxxx)).wzxxzzxz))).s73, ((VECTOR(int32_t, 2))((-5L))), ((VECTOR(int32_t, 2))(0x2A01E9A5L))))).yyyx, ((VECTOR(int32_t, 4))(0x4978A3B0L))))).even)), (-1L), 0L)), ((VECTOR(int32_t, 4))((-2L)))))))).wwzwwwwy, ((VECTOR(int32_t, 8))(0x0C111F8AL))))).s56)).yxxxxyxyxyyyxyxx))).s1) , l_251));
                l_254 = l_252[2][1][1];
            }
            l_256 = l_255;
        }
        unsigned int result = 0;
        result += l_87;
        atomic_add(&p_786->g_special_values[86 * get_linear_group_id() + 4], result);
    }
    else
    { /* block id: 114 */
        (1 + 1);
    }
    for (p_786->g_71.f0 = 0; (p_786->g_71.f0 == (-4)); p_786->g_71.f0--)
    { /* block id: 119 */
        int32_t *l_260[6];
        int32_t **l_259 = &l_260[3];
        int i;
        for (i = 0; i < 6; i++)
            l_260[i] = &p_786->g_71.f0;
        (*l_259) = &p_786->g_3[0];
    }
    p_786->g_70[0][7] = &p_786->g_67;
    return &p_786->g_3[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_786->g_18 p_786->l_comm_values p_786->g_67 p_786->g_80 p_786->g_71.f0
 * writes: p_786->g_67 p_786->g_71
 */
int16_t  func_57(int32_t * p_58, int32_t  p_59, struct S3 * p_786)
{ /* block id: 7 */
    int64_t l_65 = 0x4EC1833B1D7879CFL;
    int32_t l_82 = (-4L);
    int32_t *l_85 = &p_786->g_71.f0;
    (*l_85) = (func_60(p_59, l_65, p_786->g_18, p_786->l_comm_values[(safe_mod_func_uint32_t_u_u(p_786->tid, 71))], p_786) < ((l_65 ^ 0x5EDA819422B6A996L) <= l_82));
    return p_786->g_71.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_786->g_67 p_786->g_80
 * writes: p_786->g_67 p_786->g_71
 */
uint16_t  func_60(int32_t  p_61, uint64_t  p_62, uint16_t  p_63, uint32_t  p_64, struct S3 * p_786)
{ /* block id: 8 */
    struct S1 l_66 = {0L,0x311F6BCDL,1L,0L,0x389D4FE02E2238E9L,0x1F222DE5L};
    struct S2 *l_68 = &p_786->g_67;
    struct S2 *l_69 = (void*)0;
    struct S2 *l_73 = (void*)0;
    struct S2 *l_74 = (void*)0;
    struct S2 *l_75 = &p_786->g_71;
    int32_t *l_77 = &p_786->g_67.f0;
    int32_t **l_76 = &l_77;
    (*l_75) = (l_66 , ((*l_68) = p_786->g_67));
    (*l_76) = (void*)0;
    for (p_786->g_67.f0 = 21; (p_786->g_67.f0 != (-10)); p_786->g_67.f0 = safe_sub_func_uint64_t_u_u(p_786->g_67.f0, 1))
    { /* block id: 14 */
        int32_t *l_81 = &l_66.f2;
        (*l_81) ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_786->g_80.s4235617347611560)).even)).s1;
    }
    return p_61;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[86];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 86; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[86];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 86; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[71];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 71; i++)
            l_comm_values[i] = 1;
    struct S3 c_787;
    struct S3* p_786 = &c_787;
    struct S3 c_788 = {
        {(-9L),0x00444555L,(-9L),(-9L),0x00444555L,(-9L),(-9L)}, // p_786->g_3
        0x1AFBL, // p_786->g_18
        {-4L,0x5FF2L}, // p_786->g_67
        {-1L,3UL}, // p_786->g_71
        {{(void*)0,&p_786->g_71,&p_786->g_71,&p_786->g_71,(void*)0,(void*)0,&p_786->g_71,&p_786->g_71,&p_786->g_71,(void*)0}}, // p_786->g_70
        (void*)0, // p_786->g_72
        (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 1L), 1L), 1L, 2L, 1L), // p_786->g_80
        {(void*)0,(void*)0}, // p_786->g_83
        (void*)0, // p_786->g_84
        &p_786->g_71.f0, // p_786->g_278
        {&p_786->g_278,&p_786->g_278,&p_786->g_278,&p_786->g_278,&p_786->g_278,&p_786->g_278,&p_786->g_278,&p_786->g_278}, // p_786->g_283
        2L, // p_786->g_306
        (VECTOR(int16_t, 8))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x478EL), 0x478EL), 0x478EL, (-5L), 0x478EL), // p_786->g_308
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L)), // p_786->g_309
        0xA109D727L, // p_786->g_319
        &p_786->g_71, // p_786->g_333
        &p_786->g_333, // p_786->g_332
        &p_786->g_306, // p_786->g_340
        (-7L), // p_786->g_352
        0x6F3C3F3ACA325603L, // p_786->g_358
        0x184138294204A808L, // p_786->g_359
        (VECTOR(int8_t, 16))(0x5AL, (VECTOR(int8_t, 4))(0x5AL, (VECTOR(int8_t, 2))(0x5AL, 0x16L), 0x16L), 0x16L, 0x5AL, 0x16L, (VECTOR(int8_t, 2))(0x5AL, 0x16L), (VECTOR(int8_t, 2))(0x5AL, 0x16L), 0x5AL, 0x16L, 0x5AL, 0x16L), // p_786->g_365
        (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-3L)), (-3L)), // p_786->g_368
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x65C6776FL), 0x65C6776FL), 0x65C6776FL, 0L, 0x65C6776FL, (VECTOR(int32_t, 2))(0L, 0x65C6776FL), (VECTOR(int32_t, 2))(0L, 0x65C6776FL), 0L, 0x65C6776FL, 0L, 0x65C6776FL), // p_786->g_373
        (VECTOR(int8_t, 2))(0x6CL, 0L), // p_786->g_378
        (VECTOR(int8_t, 2))(1L, 0x59L), // p_786->g_420
        {1UL,1UL,1UL,1UL,1UL,1UL,1UL}, // p_786->g_433
        (VECTOR(uint8_t, 2))(0xF1L, 0x60L), // p_786->g_442
        {4UL}, // p_786->g_456
        &p_786->g_456, // p_786->g_455
        &p_786->g_456, // p_786->g_458
        &p_786->g_278, // p_786->g_462
        (VECTOR(int16_t, 4))(0x6D78L, (VECTOR(int16_t, 2))(0x6D78L, 0x3F66L), 0x3F66L), // p_786->g_475
        (VECTOR(int16_t, 2))(0x1D47L, 0x2799L), // p_786->g_516
        (VECTOR(int16_t, 2))(0x166AL, 0x644FL), // p_786->g_517
        (VECTOR(uint32_t, 8))(0xF3E46595L, (VECTOR(uint32_t, 4))(0xF3E46595L, (VECTOR(uint32_t, 2))(0xF3E46595L, 0xAABEA3F6L), 0xAABEA3F6L), 0xAABEA3F6L, 0xF3E46595L, 0xAABEA3F6L), // p_786->g_525
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L)), // p_786->g_528
        (void*)0, // p_786->g_529
        (VECTOR(int16_t, 4))(0x49C8L, (VECTOR(int16_t, 2))(0x49C8L, (-1L)), (-1L)), // p_786->g_549
        (VECTOR(int32_t, 2))(0x383C9791L, 0x0997BFEFL), // p_786->g_561
        0x54L, // p_786->g_570
        &p_786->g_570, // p_786->g_569
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x73CBL), 0x73CBL), 0x73CBL, 1UL, 0x73CBL, (VECTOR(uint16_t, 2))(1UL, 0x73CBL), (VECTOR(uint16_t, 2))(1UL, 0x73CBL), 1UL, 0x73CBL, 1UL, 0x73CBL), // p_786->g_579
        (VECTOR(int8_t, 4))(0x04L, (VECTOR(int8_t, 2))(0x04L, (-1L)), (-1L)), // p_786->g_597
        {{{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}}},{{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}}},{{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}}},{{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}},{{0x32L,0x4349C3CAL,3L,0x60FB0DCEL,0x540D1E487B7D0874L,0x023BB94BL},{0x7BL,5L,0L,0L,-9L,5UL}}}}, // p_786->g_610
        {&p_786->g_610[1][8][1],&p_786->g_610[1][8][1],&p_786->g_610[1][8][1],&p_786->g_610[1][8][1],&p_786->g_610[1][8][1],&p_786->g_610[1][8][1],&p_786->g_610[1][8][1],&p_786->g_610[1][8][1]}, // p_786->g_609
        {3L,0x12426CFEL,0x3B9FAA27L,0x0D39E325L,3L,1UL}, // p_786->g_681
        &p_786->g_681, // p_786->g_680
        &p_786->g_278, // p_786->g_688
        (VECTOR(uint32_t, 8))(0xB51A6A4BL, (VECTOR(uint32_t, 4))(0xB51A6A4BL, (VECTOR(uint32_t, 2))(0xB51A6A4BL, 0x780842BEL), 0x780842BEL), 0x780842BEL, 0xB51A6A4BL, 0x780842BEL), // p_786->g_708
        {&p_786->g_456,&p_786->g_456}, // p_786->g_718
        0x3771F8FDFA206AA7L, // p_786->g_740
        (void*)0, // p_786->g_748
        &p_786->g_278, // p_786->g_749
        (VECTOR(int16_t, 4))(0x0650L, (VECTOR(int16_t, 2))(0x0650L, 0x5082L), 0x5082L), // p_786->g_771
        1UL, // p_786->g_784
        (VECTOR(int32_t, 4))(0x62E24534L, (VECTOR(int32_t, 2))(0x62E24534L, 3L), 3L), // p_786->g_785
        0, // p_786->v_collective
        sequence_input[get_global_id(0)], // p_786->global_0_offset
        sequence_input[get_global_id(1)], // p_786->global_1_offset
        sequence_input[get_global_id(2)], // p_786->global_2_offset
        sequence_input[get_local_id(0)], // p_786->local_0_offset
        sequence_input[get_local_id(1)], // p_786->local_1_offset
        sequence_input[get_local_id(2)], // p_786->local_2_offset
        sequence_input[get_group_id(0)], // p_786->group_0_offset
        sequence_input[get_group_id(1)], // p_786->group_1_offset
        sequence_input[get_group_id(2)], // p_786->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 71)), permutations[0][get_linear_local_id()])), // p_786->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_787 = c_788;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_786);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_786->g_3[i], "p_786->g_3[i]", print_hash_value);

    }
    transparent_crc(p_786->g_18, "p_786->g_18", print_hash_value);
    transparent_crc(p_786->g_67.f0, "p_786->g_67.f0", print_hash_value);
    transparent_crc(p_786->g_67.f1, "p_786->g_67.f1", print_hash_value);
    transparent_crc(p_786->g_71.f0, "p_786->g_71.f0", print_hash_value);
    transparent_crc(p_786->g_71.f1, "p_786->g_71.f1", print_hash_value);
    transparent_crc(p_786->g_80.s0, "p_786->g_80.s0", print_hash_value);
    transparent_crc(p_786->g_80.s1, "p_786->g_80.s1", print_hash_value);
    transparent_crc(p_786->g_80.s2, "p_786->g_80.s2", print_hash_value);
    transparent_crc(p_786->g_80.s3, "p_786->g_80.s3", print_hash_value);
    transparent_crc(p_786->g_80.s4, "p_786->g_80.s4", print_hash_value);
    transparent_crc(p_786->g_80.s5, "p_786->g_80.s5", print_hash_value);
    transparent_crc(p_786->g_80.s6, "p_786->g_80.s6", print_hash_value);
    transparent_crc(p_786->g_80.s7, "p_786->g_80.s7", print_hash_value);
    transparent_crc(p_786->g_306, "p_786->g_306", print_hash_value);
    transparent_crc(p_786->g_308.s0, "p_786->g_308.s0", print_hash_value);
    transparent_crc(p_786->g_308.s1, "p_786->g_308.s1", print_hash_value);
    transparent_crc(p_786->g_308.s2, "p_786->g_308.s2", print_hash_value);
    transparent_crc(p_786->g_308.s3, "p_786->g_308.s3", print_hash_value);
    transparent_crc(p_786->g_308.s4, "p_786->g_308.s4", print_hash_value);
    transparent_crc(p_786->g_308.s5, "p_786->g_308.s5", print_hash_value);
    transparent_crc(p_786->g_308.s6, "p_786->g_308.s6", print_hash_value);
    transparent_crc(p_786->g_308.s7, "p_786->g_308.s7", print_hash_value);
    transparent_crc(p_786->g_309.s0, "p_786->g_309.s0", print_hash_value);
    transparent_crc(p_786->g_309.s1, "p_786->g_309.s1", print_hash_value);
    transparent_crc(p_786->g_309.s2, "p_786->g_309.s2", print_hash_value);
    transparent_crc(p_786->g_309.s3, "p_786->g_309.s3", print_hash_value);
    transparent_crc(p_786->g_309.s4, "p_786->g_309.s4", print_hash_value);
    transparent_crc(p_786->g_309.s5, "p_786->g_309.s5", print_hash_value);
    transparent_crc(p_786->g_309.s6, "p_786->g_309.s6", print_hash_value);
    transparent_crc(p_786->g_309.s7, "p_786->g_309.s7", print_hash_value);
    transparent_crc(p_786->g_319, "p_786->g_319", print_hash_value);
    transparent_crc(p_786->g_352, "p_786->g_352", print_hash_value);
    transparent_crc(p_786->g_358, "p_786->g_358", print_hash_value);
    transparent_crc(p_786->g_359, "p_786->g_359", print_hash_value);
    transparent_crc(p_786->g_365.s0, "p_786->g_365.s0", print_hash_value);
    transparent_crc(p_786->g_365.s1, "p_786->g_365.s1", print_hash_value);
    transparent_crc(p_786->g_365.s2, "p_786->g_365.s2", print_hash_value);
    transparent_crc(p_786->g_365.s3, "p_786->g_365.s3", print_hash_value);
    transparent_crc(p_786->g_365.s4, "p_786->g_365.s4", print_hash_value);
    transparent_crc(p_786->g_365.s5, "p_786->g_365.s5", print_hash_value);
    transparent_crc(p_786->g_365.s6, "p_786->g_365.s6", print_hash_value);
    transparent_crc(p_786->g_365.s7, "p_786->g_365.s7", print_hash_value);
    transparent_crc(p_786->g_365.s8, "p_786->g_365.s8", print_hash_value);
    transparent_crc(p_786->g_365.s9, "p_786->g_365.s9", print_hash_value);
    transparent_crc(p_786->g_365.sa, "p_786->g_365.sa", print_hash_value);
    transparent_crc(p_786->g_365.sb, "p_786->g_365.sb", print_hash_value);
    transparent_crc(p_786->g_365.sc, "p_786->g_365.sc", print_hash_value);
    transparent_crc(p_786->g_365.sd, "p_786->g_365.sd", print_hash_value);
    transparent_crc(p_786->g_365.se, "p_786->g_365.se", print_hash_value);
    transparent_crc(p_786->g_365.sf, "p_786->g_365.sf", print_hash_value);
    transparent_crc(p_786->g_368.x, "p_786->g_368.x", print_hash_value);
    transparent_crc(p_786->g_368.y, "p_786->g_368.y", print_hash_value);
    transparent_crc(p_786->g_368.z, "p_786->g_368.z", print_hash_value);
    transparent_crc(p_786->g_368.w, "p_786->g_368.w", print_hash_value);
    transparent_crc(p_786->g_373.s0, "p_786->g_373.s0", print_hash_value);
    transparent_crc(p_786->g_373.s1, "p_786->g_373.s1", print_hash_value);
    transparent_crc(p_786->g_373.s2, "p_786->g_373.s2", print_hash_value);
    transparent_crc(p_786->g_373.s3, "p_786->g_373.s3", print_hash_value);
    transparent_crc(p_786->g_373.s4, "p_786->g_373.s4", print_hash_value);
    transparent_crc(p_786->g_373.s5, "p_786->g_373.s5", print_hash_value);
    transparent_crc(p_786->g_373.s6, "p_786->g_373.s6", print_hash_value);
    transparent_crc(p_786->g_373.s7, "p_786->g_373.s7", print_hash_value);
    transparent_crc(p_786->g_373.s8, "p_786->g_373.s8", print_hash_value);
    transparent_crc(p_786->g_373.s9, "p_786->g_373.s9", print_hash_value);
    transparent_crc(p_786->g_373.sa, "p_786->g_373.sa", print_hash_value);
    transparent_crc(p_786->g_373.sb, "p_786->g_373.sb", print_hash_value);
    transparent_crc(p_786->g_373.sc, "p_786->g_373.sc", print_hash_value);
    transparent_crc(p_786->g_373.sd, "p_786->g_373.sd", print_hash_value);
    transparent_crc(p_786->g_373.se, "p_786->g_373.se", print_hash_value);
    transparent_crc(p_786->g_373.sf, "p_786->g_373.sf", print_hash_value);
    transparent_crc(p_786->g_378.x, "p_786->g_378.x", print_hash_value);
    transparent_crc(p_786->g_378.y, "p_786->g_378.y", print_hash_value);
    transparent_crc(p_786->g_420.x, "p_786->g_420.x", print_hash_value);
    transparent_crc(p_786->g_420.y, "p_786->g_420.y", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_786->g_433[i], "p_786->g_433[i]", print_hash_value);

    }
    transparent_crc(p_786->g_442.x, "p_786->g_442.x", print_hash_value);
    transparent_crc(p_786->g_442.y, "p_786->g_442.y", print_hash_value);
    transparent_crc(p_786->g_456.f0, "p_786->g_456.f0", print_hash_value);
    transparent_crc(p_786->g_475.x, "p_786->g_475.x", print_hash_value);
    transparent_crc(p_786->g_475.y, "p_786->g_475.y", print_hash_value);
    transparent_crc(p_786->g_475.z, "p_786->g_475.z", print_hash_value);
    transparent_crc(p_786->g_475.w, "p_786->g_475.w", print_hash_value);
    transparent_crc(p_786->g_516.x, "p_786->g_516.x", print_hash_value);
    transparent_crc(p_786->g_516.y, "p_786->g_516.y", print_hash_value);
    transparent_crc(p_786->g_517.x, "p_786->g_517.x", print_hash_value);
    transparent_crc(p_786->g_517.y, "p_786->g_517.y", print_hash_value);
    transparent_crc(p_786->g_525.s0, "p_786->g_525.s0", print_hash_value);
    transparent_crc(p_786->g_525.s1, "p_786->g_525.s1", print_hash_value);
    transparent_crc(p_786->g_525.s2, "p_786->g_525.s2", print_hash_value);
    transparent_crc(p_786->g_525.s3, "p_786->g_525.s3", print_hash_value);
    transparent_crc(p_786->g_525.s4, "p_786->g_525.s4", print_hash_value);
    transparent_crc(p_786->g_525.s5, "p_786->g_525.s5", print_hash_value);
    transparent_crc(p_786->g_525.s6, "p_786->g_525.s6", print_hash_value);
    transparent_crc(p_786->g_525.s7, "p_786->g_525.s7", print_hash_value);
    transparent_crc(p_786->g_528.x, "p_786->g_528.x", print_hash_value);
    transparent_crc(p_786->g_528.y, "p_786->g_528.y", print_hash_value);
    transparent_crc(p_786->g_528.z, "p_786->g_528.z", print_hash_value);
    transparent_crc(p_786->g_528.w, "p_786->g_528.w", print_hash_value);
    transparent_crc(p_786->g_549.x, "p_786->g_549.x", print_hash_value);
    transparent_crc(p_786->g_549.y, "p_786->g_549.y", print_hash_value);
    transparent_crc(p_786->g_549.z, "p_786->g_549.z", print_hash_value);
    transparent_crc(p_786->g_549.w, "p_786->g_549.w", print_hash_value);
    transparent_crc(p_786->g_561.x, "p_786->g_561.x", print_hash_value);
    transparent_crc(p_786->g_561.y, "p_786->g_561.y", print_hash_value);
    transparent_crc(p_786->g_570, "p_786->g_570", print_hash_value);
    transparent_crc(p_786->g_579.s0, "p_786->g_579.s0", print_hash_value);
    transparent_crc(p_786->g_579.s1, "p_786->g_579.s1", print_hash_value);
    transparent_crc(p_786->g_579.s2, "p_786->g_579.s2", print_hash_value);
    transparent_crc(p_786->g_579.s3, "p_786->g_579.s3", print_hash_value);
    transparent_crc(p_786->g_579.s4, "p_786->g_579.s4", print_hash_value);
    transparent_crc(p_786->g_579.s5, "p_786->g_579.s5", print_hash_value);
    transparent_crc(p_786->g_579.s6, "p_786->g_579.s6", print_hash_value);
    transparent_crc(p_786->g_579.s7, "p_786->g_579.s7", print_hash_value);
    transparent_crc(p_786->g_579.s8, "p_786->g_579.s8", print_hash_value);
    transparent_crc(p_786->g_579.s9, "p_786->g_579.s9", print_hash_value);
    transparent_crc(p_786->g_579.sa, "p_786->g_579.sa", print_hash_value);
    transparent_crc(p_786->g_579.sb, "p_786->g_579.sb", print_hash_value);
    transparent_crc(p_786->g_579.sc, "p_786->g_579.sc", print_hash_value);
    transparent_crc(p_786->g_579.sd, "p_786->g_579.sd", print_hash_value);
    transparent_crc(p_786->g_579.se, "p_786->g_579.se", print_hash_value);
    transparent_crc(p_786->g_579.sf, "p_786->g_579.sf", print_hash_value);
    transparent_crc(p_786->g_597.x, "p_786->g_597.x", print_hash_value);
    transparent_crc(p_786->g_597.y, "p_786->g_597.y", print_hash_value);
    transparent_crc(p_786->g_597.z, "p_786->g_597.z", print_hash_value);
    transparent_crc(p_786->g_597.w, "p_786->g_597.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_786->g_610[i][j][k].f0, "p_786->g_610[i][j][k].f0", print_hash_value);
                transparent_crc(p_786->g_610[i][j][k].f1, "p_786->g_610[i][j][k].f1", print_hash_value);
                transparent_crc(p_786->g_610[i][j][k].f2, "p_786->g_610[i][j][k].f2", print_hash_value);
                transparent_crc(p_786->g_610[i][j][k].f3, "p_786->g_610[i][j][k].f3", print_hash_value);
                transparent_crc(p_786->g_610[i][j][k].f4, "p_786->g_610[i][j][k].f4", print_hash_value);
                transparent_crc(p_786->g_610[i][j][k].f5, "p_786->g_610[i][j][k].f5", print_hash_value);

            }
        }
    }
    transparent_crc(p_786->g_681.f0, "p_786->g_681.f0", print_hash_value);
    transparent_crc(p_786->g_681.f1, "p_786->g_681.f1", print_hash_value);
    transparent_crc(p_786->g_681.f2, "p_786->g_681.f2", print_hash_value);
    transparent_crc(p_786->g_681.f3, "p_786->g_681.f3", print_hash_value);
    transparent_crc(p_786->g_681.f4, "p_786->g_681.f4", print_hash_value);
    transparent_crc(p_786->g_681.f5, "p_786->g_681.f5", print_hash_value);
    transparent_crc(p_786->g_708.s0, "p_786->g_708.s0", print_hash_value);
    transparent_crc(p_786->g_708.s1, "p_786->g_708.s1", print_hash_value);
    transparent_crc(p_786->g_708.s2, "p_786->g_708.s2", print_hash_value);
    transparent_crc(p_786->g_708.s3, "p_786->g_708.s3", print_hash_value);
    transparent_crc(p_786->g_708.s4, "p_786->g_708.s4", print_hash_value);
    transparent_crc(p_786->g_708.s5, "p_786->g_708.s5", print_hash_value);
    transparent_crc(p_786->g_708.s6, "p_786->g_708.s6", print_hash_value);
    transparent_crc(p_786->g_708.s7, "p_786->g_708.s7", print_hash_value);
    transparent_crc(p_786->g_740, "p_786->g_740", print_hash_value);
    transparent_crc(p_786->g_771.x, "p_786->g_771.x", print_hash_value);
    transparent_crc(p_786->g_771.y, "p_786->g_771.y", print_hash_value);
    transparent_crc(p_786->g_771.z, "p_786->g_771.z", print_hash_value);
    transparent_crc(p_786->g_771.w, "p_786->g_771.w", print_hash_value);
    transparent_crc(p_786->g_784, "p_786->g_784", print_hash_value);
    transparent_crc(p_786->g_785.x, "p_786->g_785.x", print_hash_value);
    transparent_crc(p_786->g_785.y, "p_786->g_785.y", print_hash_value);
    transparent_crc(p_786->g_785.z, "p_786->g_785.z", print_hash_value);
    transparent_crc(p_786->g_785.w, "p_786->g_785.w", print_hash_value);
    transparent_crc(p_786->v_collective, "p_786->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 86; i++)
            transparent_crc(p_786->g_special_values[i + 86 * get_linear_group_id()], "p_786->g_special_values[i + 86 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 86; i++)
            transparent_crc(p_786->l_special_values[i], "p_786->l_special_values[i]", print_hash_value);
    transparent_crc(p_786->l_comm_values[get_linear_local_id()], "p_786->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_786->g_comm_values[get_linear_group_id() * 71 + get_linear_local_id()], "p_786->g_comm_values[get_linear_group_id() * 71 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
