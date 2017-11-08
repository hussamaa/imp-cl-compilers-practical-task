// --atomics 73 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 50,64,2 -l 5,8,2
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

__constant uint32_t permutations[10][80] = {
{41,51,7,30,3,33,13,65,48,14,76,18,12,49,52,79,39,0,47,17,29,24,27,59,23,44,73,42,37,50,20,4,1,45,70,57,68,53,56,60,11,6,58,9,2,21,61,55,54,25,72,67,35,32,43,8,36,31,28,26,69,64,5,62,74,34,46,66,38,78,75,15,77,22,71,16,10,40,63,19}, // permutation 0
{10,75,61,2,68,37,53,7,72,29,8,56,45,25,71,44,77,14,9,0,76,73,33,23,20,40,1,69,3,24,36,32,31,12,63,58,21,19,60,34,4,35,55,79,50,28,13,54,46,74,26,51,38,41,43,59,39,65,66,70,47,64,52,57,11,49,42,67,30,16,27,6,18,48,62,17,78,22,15,5}, // permutation 1
{69,71,28,67,64,6,26,32,47,44,33,63,8,53,3,2,25,14,78,51,49,50,37,41,18,70,58,16,45,35,74,46,9,36,21,24,54,66,61,79,60,72,31,30,77,11,40,22,13,65,68,73,23,76,15,20,27,0,10,1,38,12,75,5,4,56,48,43,57,59,29,17,34,52,55,42,39,19,7,62}, // permutation 2
{1,30,52,61,23,17,57,51,34,9,47,7,5,43,70,50,64,63,10,54,21,74,35,39,32,0,71,20,40,3,45,41,11,31,19,59,37,66,56,58,78,2,42,16,75,73,46,22,77,29,76,6,15,33,18,26,28,79,36,53,27,38,49,55,44,24,68,72,25,62,8,65,14,60,12,67,4,48,69,13}, // permutation 3
{19,14,48,43,77,74,58,16,59,66,52,23,55,76,72,71,27,20,65,30,22,24,67,54,42,62,60,7,69,61,36,79,68,3,5,63,11,0,25,21,10,6,4,53,75,38,2,41,57,44,45,12,35,46,17,13,18,33,78,8,1,73,49,28,56,32,15,64,47,34,29,37,9,50,51,26,31,70,39,40}, // permutation 4
{66,54,42,5,3,10,17,44,11,52,26,38,76,73,48,12,61,19,28,30,47,15,60,14,72,34,62,24,4,21,75,39,58,49,50,20,69,33,36,55,40,13,45,53,0,7,79,43,18,78,77,51,27,74,9,2,25,31,59,29,63,56,6,71,65,8,67,35,41,1,64,32,46,16,70,57,37,68,22,23}, // permutation 5
{1,21,9,57,29,38,35,67,41,79,71,66,2,33,28,73,45,37,55,59,7,65,17,44,39,68,74,13,12,10,70,52,42,3,4,8,60,36,62,76,16,32,46,14,25,22,77,20,78,50,34,64,40,69,43,51,27,54,56,0,58,31,24,53,19,49,47,63,23,18,61,6,75,26,30,72,15,5,48,11}, // permutation 6
{62,32,11,58,5,14,26,66,27,0,52,21,60,53,79,57,25,28,19,13,2,71,33,44,22,24,46,78,10,77,16,30,59,31,12,61,29,7,6,15,76,18,49,23,73,41,55,34,70,36,63,67,51,42,35,64,40,17,68,56,65,69,74,9,75,37,3,8,39,4,1,54,50,38,48,43,47,72,45,20}, // permutation 7
{60,27,57,74,68,77,17,51,9,75,61,76,12,2,39,38,70,1,65,16,32,14,49,36,62,71,54,3,5,46,28,10,29,58,47,26,53,45,18,8,37,21,30,4,66,22,40,34,20,56,11,33,7,64,35,63,48,72,13,15,52,24,59,44,6,19,0,42,55,79,43,50,25,23,67,31,69,78,41,73}, // permutation 8
{69,63,65,2,23,40,28,35,55,26,7,38,6,18,9,54,58,33,0,49,37,47,19,45,57,60,29,34,62,72,43,51,17,39,13,50,20,27,10,61,79,56,76,31,77,52,74,16,25,11,21,5,59,24,64,46,70,1,22,32,15,41,44,67,71,75,8,48,36,14,12,66,73,4,30,53,42,3,68,78} // permutation 9
};

// Seed: 3834510974

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   uint32_t  f1;
   uint64_t  f2;
   volatile uint32_t  f3;
};

union U1 {
   volatile int64_t  f0;
   volatile uint32_t  f1;
};

struct S2 {
    int32_t g_55[9];
    int32_t *g_54[3][8];
    volatile union U0 g_69[9][7][4];
    uint16_t g_71[4][10][3];
    uint32_t g_73;
    int32_t g_75;
    volatile VECTOR(int16_t, 8) g_87;
    int64_t g_91[5][3];
    union U0 g_150;
    int8_t g_159;
    int32_t ** volatile g_160;
    volatile VECTOR(uint16_t, 8) g_166;
    VECTOR(uint16_t, 8) g_167;
    volatile VECTOR(int8_t, 16) g_173;
    int16_t g_175;
    int32_t ** volatile g_177;
    int32_t *g_179;
    union U0 g_183[3];
    int32_t ** volatile g_186;
    int32_t ** volatile g_187;
    uint32_t g_201;
    int32_t ** volatile g_224;
    volatile uint64_t *g_227;
    uint32_t g_242;
    int64_t g_267[6];
    VECTOR(uint32_t, 16) g_294;
    VECTOR(uint64_t, 2) g_304;
    VECTOR(uint64_t, 2) g_310;
    uint64_t *g_313;
    volatile VECTOR(uint32_t, 2) g_330;
    VECTOR(uint8_t, 4) g_331;
    volatile union U1 g_350[7][4][8];
    VECTOR(int8_t, 8) g_380;
    VECTOR(uint8_t, 4) g_381;
    uint32_t g_404;
    volatile uint16_t g_438;
    volatile uint64_t g_454;
    VECTOR(uint16_t, 4) g_463;
    uint32_t * volatile g_488[6][8][4];
    uint32_t * volatile * volatile g_487;
    VECTOR(uint64_t, 4) g_499;
    volatile union U0 ** volatile g_501;
    VECTOR(int64_t, 4) g_504;
    int64_t g_513;
    volatile VECTOR(uint16_t, 4) g_519;
    VECTOR(int16_t, 4) g_521;
    VECTOR(uint32_t, 8) g_528;
    volatile union U0 *g_532;
    uint32_t g_539;
    VECTOR(uint16_t, 16) g_548;
    volatile VECTOR(uint32_t, 16) g_555;
    volatile union U1 g_581;
    volatile VECTOR(int16_t, 8) g_608;
    volatile VECTOR(int16_t, 4) g_610;
    int32_t ** volatile g_620;
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
uint8_t  func_1(struct S2 * p_626);
int32_t * func_2(int32_t * p_3, int32_t * p_4, uint64_t  p_5, struct S2 * p_626);
int32_t * func_6(int32_t * p_7, int32_t * p_8, int32_t * p_9, int32_t * p_10, int64_t  p_11, struct S2 * p_626);
int32_t * func_12(uint32_t  p_13, int32_t * p_14, uint32_t  p_15, struct S2 * p_626);
int32_t * func_17(int32_t  p_18, uint32_t  p_19, struct S2 * p_626);
uint32_t  func_22(uint32_t  p_23, uint32_t  p_24, int32_t  p_25, int64_t  p_26, uint16_t  p_27, struct S2 * p_626);
uint16_t  func_30(int64_t  p_31, int32_t * p_32, int32_t * p_33, uint64_t  p_34, int32_t * p_35, struct S2 * p_626);
int64_t  func_36(int32_t  p_37, uint32_t  p_38, int32_t  p_39, int32_t * p_40, int64_t  p_41, struct S2 * p_626);
uint32_t  func_42(int32_t * p_43, uint64_t  p_44, int32_t  p_45, int32_t  p_46, uint32_t  p_47, struct S2 * p_626);
int32_t * func_48(int32_t * p_49, int32_t * p_50, int8_t  p_51, int32_t * p_52, struct S2 * p_626);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_626->g_comm_values p_626->g_54 p_626->g_55 p_626->g_69 p_626->g_71 p_626->g_75 p_626->g_87 p_626->l_comm_values p_626->g_73 p_626->g_91 p_626->g_150.f0 p_626->g_160 p_626->g_166 p_626->g_167 p_626->g_173 p_626->g_175 p_626->g_177 p_626->g_179 p_626->g_183 p_626->g_187 p_626->g_159 p_626->g_201 p_626->g_224 p_626->g_227 p_626->g_242 p_626->g_267 permutations p_626->g_294 p_626->g_304 p_626->g_310 p_626->g_313 p_626->g_330 p_626->g_331 p_626->g_350 p_626->g_150.f2 p_626->g_438 p_626->g_380 p_626->g_454 p_626->g_463 p_626->g_350.f0 p_626->g_487 p_626->g_499 p_626->g_501 p_626->g_504 p_626->g_519 p_626->g_521 p_626->g_528 p_626->g_532 p_626->g_539 p_626->g_548 p_626->g_555 p_626->g_381 p_626->g_581 p_626->g_608 p_626->g_610 p_626->g_404 p_626->g_581.f0 p_626->g_620
 * writes: p_626->g_71 p_626->g_73 p_626->g_55 p_626->g_75 p_626->g_91 p_626->g_54 p_626->g_175 p_626->g_150.f2 p_626->g_159 p_626->g_201 p_626->g_242 p_626->g_267 p_626->g_comm_values p_626->g_313 p_626->g_331 p_626->g_438 p_626->g_179 p_626->g_454 p_626->g_513 p_626->g_539 p_626->g_167
 */
uint8_t  func_1(struct S2 * p_626)
{ /* block id: 4 */
    int16_t l_16[5];
    int32_t *l_53 = (void*)0;
    uint32_t l_152 = 4294967293UL;
    uint32_t *l_200[9][4][3] = {{{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201}},{{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201}},{{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201}},{{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201}},{{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201}},{{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201}},{{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201}},{{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201}},{{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201}}};
    uint16_t l_202 = 0x7CE5L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_16[i] = 1L;
    l_53 = func_2(func_6(func_12(l_16[2], func_17(((l_202 &= (0xC0E3L <= (safe_add_func_int32_t_s_s(0x29DADE66L, func_22(l_16[2], (((safe_mul_func_uint8_t_u_u((((func_30(func_36(p_626->g_comm_values[p_626->tid], func_42(func_48(l_53, p_626->g_54[2][6], p_626->g_55[4], &p_626->g_55[4], p_626), p_626->g_150.f0, l_152, p_626->g_comm_values[p_626->tid], p_626->g_comm_values[p_626->tid], p_626), p_626->g_comm_values[p_626->tid], l_53, p_626->l_comm_values[(safe_mod_func_uint32_t_u_u(p_626->tid, 80))], p_626), l_53, l_53, p_626->g_comm_values[p_626->tid], p_626->g_179, p_626) <= 0x169FL) && p_626->g_87.s1) & p_626->g_comm_values[p_626->tid]), 0x4EL)) != p_626->g_159) != 0x2370E7266255C857L), p_626->g_comm_values[p_626->tid], p_626->g_167.s6, l_16[2], p_626))))) , (-2L)), p_626->g_comm_values[p_626->tid], p_626), p_626->g_comm_values[p_626->tid], p_626), l_200[3][3][2], l_200[2][2][0], p_626->g_179, p_626->g_comm_values[p_626->tid], p_626), l_200[6][3][1], p_626->g_381.z, p_626);
    if ((atomic_inc(&p_626->l_atomic_input[11]) == 6))
    { /* block id: 295 */
        int64_t l_621 = 0x0ABFC53AB49F041EL;
        int64_t l_622 = 0x7D7C31A2FCDDD675L;
        uint64_t l_623 = 0xA487C4DF376FA128L;
        ++l_623;
        unsigned int result = 0;
        result += l_621;
        result += l_622;
        result += l_623;
        atomic_add(&p_626->l_special_values[11], result);
    }
    else
    { /* block id: 297 */
        (1 + 1);
    }
    return p_626->g_504.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_608 p_626->g_610 p_626->g_404 p_626->g_166 p_626->g_581.f0 p_626->g_504 p_626->g_620
 * writes: p_626->g_175 p_626->g_75 p_626->g_179
 */
int32_t * func_2(int32_t * p_3, int32_t * p_4, uint64_t  p_5, struct S2 * p_626)
{ /* block id: 287 */
    VECTOR(int32_t, 8) l_603 = (VECTOR(int32_t, 8))(0x7B3197D5L, (VECTOR(int32_t, 4))(0x7B3197D5L, (VECTOR(int32_t, 2))(0x7B3197D5L, 0x4B28A20CL), 0x4B28A20CL), 0x4B28A20CL, 0x7B3197D5L, 0x4B28A20CL);
    union U0 *l_607 = &p_626->g_150;
    union U0 **l_606 = &l_607;
    VECTOR(int16_t, 16) l_609 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x7B30L), 0x7B30L), 0x7B30L, 0L, 0x7B30L, (VECTOR(int16_t, 2))(0L, 0x7B30L), (VECTOR(int16_t, 2))(0L, 0x7B30L), 0L, 0x7B30L, 0L, 0x7B30L);
    uint32_t *l_614 = &p_626->g_404;
    uint32_t **l_613 = &l_614;
    int16_t *l_615 = (void*)0;
    int16_t *l_616 = (void*)0;
    int16_t *l_617 = &p_626->g_175;
    uint32_t *l_618 = &p_626->g_242;
    int32_t *l_619 = &p_626->g_75;
    int i;
    (*l_619) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_603.s56)).yxxy, ((VECTOR(int32_t, 8))(0x73E41E47L, 6L, ((0x582F4AD1L != (safe_lshift_func_int8_t_s_s(p_5, 6))) < ((void*)0 != l_606)), 0L, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(p_626->g_608.s51)).yyyyyyxxxyxxyxxx, ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 8))(l_609.s89a22e8a)).s1114242235507043, ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(p_626->g_610.zyzxxxzyzwzwzzyx)).s30, ((VECTOR(int16_t, 4))(0x4870L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))((((((safe_sub_func_int16_t_s_s(p_5, ((((*l_617) = (!(p_5 || (((*l_613) = p_4) == p_3)))) ^ (l_618 == (void*)0)) && p_626->g_404))) , p_626->g_166.s6) ^ 0x74L) != p_5) && p_626->g_581.f0), 0L, p_626->g_504.x, 4L, 8L, ((VECTOR(int8_t, 4))(0L)), (-1L), 9L, ((VECTOR(int8_t, 4))(0x3EL)), 0x67L)).sa4, ((VECTOR(uint8_t, 2))(247UL))))), ((VECTOR(int16_t, 4))(0x285CL)), 0x1F46L, 0x1065L)).s3547435757535333)).s9f)), 0x0337L)).hi))).yyyy, ((VECTOR(int16_t, 4))(3L)), ((VECTOR(int16_t, 4))(0x2B5BL))))).wwxzyxzzyxywzxyz))), ((VECTOR(int16_t, 16))(0x43BCL))))).s107c, ((VECTOR(uint16_t, 4))(0xACC3L))))))).even, ((VECTOR(int32_t, 4))(0x1A7DBA27L))))).odd)).hi;
    (*p_626->g_620) = p_3;
    return p_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_183 p_626->g_55 p_626->g_167 p_626->g_91 p_626->g_242 p_626->g_comm_values p_626->g_227 p_626->g_166 p_626->g_267 permutations p_626->g_294 p_626->g_71 p_626->g_173 p_626->l_comm_values p_626->g_304 p_626->g_310 p_626->g_313 p_626->g_159 p_626->g_330 p_626->g_331 p_626->g_350 p_626->g_150.f2 p_626->g_87 p_626->g_438 p_626->g_380 p_626->g_187 p_626->g_454 p_626->g_463 p_626->g_350.f0 p_626->g_179 p_626->g_73 p_626->g_487 p_626->g_499 p_626->g_501 p_626->g_504 p_626->g_75 p_626->g_519 p_626->g_521 p_626->g_528 p_626->g_532 p_626->g_539 p_626->g_548 p_626->g_555 p_626->g_381 p_626->g_581
 * writes: p_626->g_159 p_626->g_267 p_626->g_comm_values p_626->g_313 p_626->g_55 p_626->g_150.f2 p_626->g_201 p_626->g_175 p_626->g_54 p_626->g_331 p_626->g_438 p_626->g_91 p_626->g_179 p_626->g_454 p_626->g_513 p_626->g_539 p_626->g_167 p_626->g_242
 */
int32_t * func_6(int32_t * p_7, int32_t * p_8, int32_t * p_9, int32_t * p_10, int64_t  p_11, struct S2 * p_626)
{ /* block id: 147 */
    uint32_t l_244 = 0UL;
    union U0 *l_246 = (void*)0;
    union U0 **l_245 = &l_246;
    int64_t *l_255 = &p_626->g_91[1][1];
    int8_t *l_260 = &p_626->g_159;
    uint32_t l_307 = 8UL;
    VECTOR(uint8_t, 4) l_332 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x75L), 0x75L);
    VECTOR(uint8_t, 2) l_333 = (VECTOR(uint8_t, 2))(7UL, 0x2BL);
    VECTOR(uint8_t, 16) l_334 = (VECTOR(uint8_t, 16))(0xA5L, (VECTOR(uint8_t, 4))(0xA5L, (VECTOR(uint8_t, 2))(0xA5L, 0x6EL), 0x6EL), 0x6EL, 0xA5L, 0x6EL, (VECTOR(uint8_t, 2))(0xA5L, 0x6EL), (VECTOR(uint8_t, 2))(0xA5L, 0x6EL), 0xA5L, 0x6EL, 0xA5L, 0x6EL);
    int32_t l_433 = 0x2A5C3DF0L;
    VECTOR(int32_t, 2) l_451 = (VECTOR(int32_t, 2))(3L, 3L);
    VECTOR(uint32_t, 8) l_472 = (VECTOR(uint32_t, 8))(0x411A5E79L, (VECTOR(uint32_t, 4))(0x411A5E79L, (VECTOR(uint32_t, 2))(0x411A5E79L, 1UL), 1UL), 1UL, 0x411A5E79L, 1UL);
    VECTOR(int32_t, 2) l_477 = (VECTOR(int32_t, 2))(0x29FBCA9AL, 0x493F199DL);
    VECTOR(uint16_t, 4) l_492 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL);
    VECTOR(int64_t, 4) l_502 = (VECTOR(int64_t, 4))(0x2D1977A8B547A5A4L, (VECTOR(int64_t, 2))(0x2D1977A8B547A5A4L, (-9L)), (-9L));
    VECTOR(int64_t, 8) l_503 = (VECTOR(int64_t, 8))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0x3D8377A5DEB66F10L), 0x3D8377A5DEB66F10L), 0x3D8377A5DEB66F10L, 9L, 0x3D8377A5DEB66F10L);
    VECTOR(int64_t, 4) l_505 = (VECTOR(int64_t, 4))(0x5D0A863BDB528CAFL, (VECTOR(int64_t, 2))(0x5D0A863BDB528CAFL, 0L), 0L);
    VECTOR(int64_t, 8) l_506 = (VECTOR(int64_t, 8))(0x59E99D366C1F1183L, (VECTOR(int64_t, 4))(0x59E99D366C1F1183L, (VECTOR(int64_t, 2))(0x59E99D366C1F1183L, 0x61B5F3A415992476L), 0x61B5F3A415992476L), 0x61B5F3A415992476L, 0x59E99D366C1F1183L, 0x61B5F3A415992476L);
    VECTOR(uint32_t, 16) l_510 = (VECTOR(uint32_t, 16))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0xAB48FF58L), 0xAB48FF58L), 0xAB48FF58L, 4294967294UL, 0xAB48FF58L, (VECTOR(uint32_t, 2))(4294967294UL, 0xAB48FF58L), (VECTOR(uint32_t, 2))(4294967294UL, 0xAB48FF58L), 4294967294UL, 0xAB48FF58L, 4294967294UL, 0xAB48FF58L);
    uint8_t l_515 = 0xD2L;
    union U0 ***l_584 = (void*)0;
    union U0 ***l_585 = &l_245;
    union U0 **l_586 = &l_246;
    uint64_t **l_599 = &p_626->g_313;
    int32_t l_600 = 1L;
    VECTOR(int8_t, 16) l_601 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int8_t, 2))(0L, (-1L)), (VECTOR(int8_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
    uint32_t l_602 = 4294967295UL;
    int i;
    if ((((void*)0 == &p_626->g_175) , ((l_244 <= ((p_626->g_183[1] , (l_245 = l_245)) == (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(p_11, 3)), (((safe_sub_func_int32_t_s_s((((*l_260) = (safe_sub_func_uint64_t_u_u((l_255 != &p_626->g_91[3][2]), (((((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(l_244, 3)), p_626->g_55[4])) & l_244) , p_626->g_167.s1) >= l_244) != 0xA75136717054EACAL) , p_626->g_91[4][1]) && p_626->g_242)))) <= p_626->g_comm_values[p_626->tid]), l_244)) , (void*)0) == p_626->g_227))) == 1L) , (void*)0))) && FAKE_DIVERGE(p_626->local_2_offset, get_local_id(2), 10))))
    { /* block id: 150 */
        union U0 *l_268[9] = {&p_626->g_183[0],&p_626->g_183[0],&p_626->g_183[0],&p_626->g_183[0],&p_626->g_183[0],&p_626->g_183[0],&p_626->g_183[0],&p_626->g_183[0],&p_626->g_183[0]};
        int16_t *l_271 = &p_626->g_175;
        int32_t l_274 = 0x57D083F3L;
        int64_t *l_275 = (void*)0;
        int64_t *l_276 = (void*)0;
        int64_t *l_277 = (void*)0;
        int64_t *l_278 = (void*)0;
        int64_t *l_279 = (void*)0;
        int64_t *l_280 = (void*)0;
        int64_t *l_281 = (void*)0;
        int64_t *l_282 = (void*)0;
        int64_t *l_283 = (void*)0;
        int32_t l_297 = 0x0EA519D7L;
        VECTOR(int32_t, 8) l_300 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x19F6EB00L), 0x19F6EB00L), 0x19F6EB00L, 1L, 0x19F6EB00L);
        VECTOR(uint64_t, 4) l_303 = (VECTOR(uint64_t, 4))(0x6CFBCF825A526491L, (VECTOR(uint64_t, 2))(0x6CFBCF825A526491L, 0x0A6FC1D8D492CE9EL), 0x0A6FC1D8D492CE9EL);
        uint64_t **l_314 = (void*)0;
        uint64_t **l_315[4];
        uint8_t l_316 = 0UL;
        int32_t *l_317 = &l_274;
        uint32_t *l_325[7] = {&p_626->g_242,&l_307,&p_626->g_242,&p_626->g_242,&l_307,&p_626->g_242,&p_626->g_242};
        uint32_t **l_324 = &l_325[3];
        uint16_t l_355 = 0x21BCL;
        int i, j;
        for (i = 0; i < 4; i++)
            l_315[i] = &p_626->g_313;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_626->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 80)), permutations[(safe_mod_func_uint32_t_u_u(p_626->g_166.s4, 10))][(safe_mod_func_uint32_t_u_u(p_626->tid, 80))]));
        l_297 ^= (safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((((!((p_626->g_267[0] &= 0xC5L) > (GROUP_DIVERGE(2, 1) != ((void*)0 == l_268[4])))) | (((*p_7) || permutations[(safe_mod_func_uint32_t_u_u(p_626->g_166.s4, 10))][(safe_mod_func_uint32_t_u_u(p_626->tid, 80))]) > ((safe_add_func_uint32_t_u_u((((((l_271 = (void*)0) == ((safe_div_func_uint16_t_u_u(((((p_626->g_comm_values[p_626->tid] = l_274) , (safe_unary_minus_func_uint64_t_u(((safe_div_func_int32_t_s_s((((((safe_mul_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((((safe_lshift_func_uint8_t_u_s(p_626->g_242, 6)) || ((VECTOR(uint32_t, 8))(p_626->g_294.s3eac9b55)).s2) , ((VECTOR(int32_t, 16))((safe_sub_func_uint16_t_u_u(p_11, p_626->g_91[3][0])), ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(0x1111DD00L)), (-1L), ((VECTOR(int32_t, 4))(0x702C7622L)), (-3L), 0x44B1F33FL)).s7))), 5L)) & p_626->g_55[7]), (-8L))) , p_626->g_71[1][9][1]) || p_11) != 0x39L) , l_244), 0x5DFE36CBL)) , l_274)))) && l_244) , FAKE_DIVERGE(p_626->local_0_offset, get_local_id(0), 10)), 0x3348L)) , (void*)0)) < 0x8BL) && l_244) >= l_274), l_244)) , p_626->g_167.s5))) , p_626->g_173.sb), 3)) , FAKE_DIVERGE(p_626->local_1_offset, get_local_id(1), 10)), 11)), p_626->l_comm_values[(safe_mod_func_uint32_t_u_u(p_626->tid, 80))]));
        (*p_7) = (safe_mod_func_int32_t_s_s((l_297 ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_300.s2537)).hi)), 0L, 0x00BEA74FL)).z), (((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_303.yyxy)))), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(p_626->g_304.yxyxxxxxxxxyxyyx)))).se6e3))).w, p_626->g_55[4])) & (safe_mod_func_int32_t_s_s(l_307, (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_626->g_310.xy)).xyxxyxyy)).s1, (safe_sub_func_int32_t_s_s(((*l_317) = (l_316 = ((p_626->g_313 = p_626->g_313) == l_255))), (((safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u((l_307 , ((-6L) == (((*p_7) != ((VECTOR(int32_t, 2))(0x27CEEB1FL, 1L)).hi) <= ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((*l_260) ^= 0x2AL), (((*l_324) = p_10) == &l_307), 1L, ((VECTOR(int8_t, 2))(0x33L)), 0x7DL, 0x42L, 0L)), ((VECTOR(int8_t, 8))((-10L))))).s2))), p_626->g_310.x)), 0x15D83151L)) > p_626->g_304.y) > l_244)))))))) , (*p_7))));
        (*l_317) = ((((safe_mod_func_int16_t_s_s(l_307, (safe_div_func_int16_t_s_s((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 8))(p_626->g_330.xyyyyxyx)).s5712031444172076, (uint32_t)(((0UL | ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_626->g_331.yyyz)).zywwwxxy)).lo)).w) , ((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(0xD2L, 0xCCL, ((VECTOR(uint8_t, 4))(0x98L, ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 4))(l_332.xxww)).lo, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(l_333.yy)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_334.s5ad4)))).odd))), ((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s((*l_317), (safe_rshift_func_uint16_t_u_s((!(GROUP_DIVERGE(2, 1) , ((void*)0 != &p_626->g_73))), 11)))) , ((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_333.x, (safe_unary_minus_func_uint8_t_u((safe_div_func_int16_t_s_s((p_626->g_350[0][3][2] , (safe_add_func_int64_t_s_s((p_626->g_267[0] = (safe_mul_func_uint8_t_u_u(((p_626->g_55[4] , p_11) ^ 0x27L), p_626->g_173.s6))), 18446744073709551615UL))), (-6L))))))), 0x88L)) >= l_332.z)) , 8L), 0xACF7L)), l_355)) || 18446744073709551607UL), 1UL, p_626->g_294.sf, ((VECTOR(uint8_t, 2))(0xDBL)), 6UL)).s06))), 0x74L)), ((VECTOR(uint8_t, 4))(0xBBL)), 249UL, l_334.se, 0xFCL, FAKE_DIVERGE(p_626->global_2_offset, get_global_id(2), 10), 0xF1L, 251UL)).even, ((VECTOR(uint8_t, 8))(1UL)), ((VECTOR(uint8_t, 8))(0x46L))))).s7) != l_332.z)))).s97)).lo , 0x2CF2L), p_626->g_91[4][2])))) , 1L) , 1L) , 0x0346A922L);
    }
    else
    { /* block id: 167 */
        int32_t *l_385[2][2][3] = {{{&p_626->g_75,&p_626->g_75,&p_626->g_75},{&p_626->g_75,&p_626->g_75,&p_626->g_75}},{{&p_626->g_75,&p_626->g_75,&p_626->g_75},{&p_626->g_75,&p_626->g_75,&p_626->g_75}}};
        VECTOR(int8_t, 16) l_395 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x4FL), 0x4FL), 0x4FL, (-1L), 0x4FL, (VECTOR(int8_t, 2))((-1L), 0x4FL), (VECTOR(int8_t, 2))((-1L), 0x4FL), (-1L), 0x4FL, (-1L), 0x4FL);
        int64_t l_453[6][6] = {{0x3CE7849A6F429334L,7L,1L,7L,0x3CE7849A6F429334L,0x3CE7849A6F429334L},{0x3CE7849A6F429334L,7L,1L,7L,0x3CE7849A6F429334L,0x3CE7849A6F429334L},{0x3CE7849A6F429334L,7L,1L,7L,0x3CE7849A6F429334L,0x3CE7849A6F429334L},{0x3CE7849A6F429334L,7L,1L,7L,0x3CE7849A6F429334L,0x3CE7849A6F429334L},{0x3CE7849A6F429334L,7L,1L,7L,0x3CE7849A6F429334L,0x3CE7849A6F429334L},{0x3CE7849A6F429334L,7L,1L,7L,0x3CE7849A6F429334L,0x3CE7849A6F429334L}};
        VECTOR(int64_t, 8) l_473 = (VECTOR(int64_t, 8))(0x5B2BDD87A6FCF836L, (VECTOR(int64_t, 4))(0x5B2BDD87A6FCF836L, (VECTOR(int64_t, 2))(0x5B2BDD87A6FCF836L, 0x340334A31CBDF713L), 0x340334A31CBDF713L), 0x340334A31CBDF713L, 0x5B2BDD87A6FCF836L, 0x340334A31CBDF713L);
        uint32_t *l_490 = &p_626->g_242;
        uint32_t **l_489 = &l_490;
        int64_t l_491 = 0L;
        VECTOR(uint64_t, 8) l_500 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 1UL), 1UL, 18446744073709551615UL, 1UL);
        VECTOR(uint32_t, 16) l_509 = (VECTOR(uint32_t, 16))(0x816681E7L, (VECTOR(uint32_t, 4))(0x816681E7L, (VECTOR(uint32_t, 2))(0x816681E7L, 7UL), 7UL), 7UL, 0x816681E7L, 7UL, (VECTOR(uint32_t, 2))(0x816681E7L, 7UL), (VECTOR(uint32_t, 2))(0x816681E7L, 7UL), 0x816681E7L, 7UL, 0x816681E7L, 7UL);
        union U0 **l_514 = &l_246;
        VECTOR(uint32_t, 16) l_530 = (VECTOR(uint32_t, 16))(0xD20F3475L, (VECTOR(uint32_t, 4))(0xD20F3475L, (VECTOR(uint32_t, 2))(0xD20F3475L, 1UL), 1UL), 1UL, 0xD20F3475L, 1UL, (VECTOR(uint32_t, 2))(0xD20F3475L, 1UL), (VECTOR(uint32_t, 2))(0xD20F3475L, 1UL), 0xD20F3475L, 1UL, 0xD20F3475L, 1UL);
        VECTOR(uint32_t, 2) l_556 = (VECTOR(uint32_t, 2))(6UL, 0x71735289L);
        VECTOR(uint32_t, 8) l_557 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xF6D5F545L), 0xF6D5F545L), 0xF6D5F545L, 0UL, 0xF6D5F545L);
        int i, j, k;
        for (p_626->g_150.f2 = 10; (p_626->g_150.f2 == 26); p_626->g_150.f2++)
        { /* block id: 170 */
            int32_t l_368 = 0x144D3AF9L;
            VECTOR(int8_t, 8) l_394 = (VECTOR(int8_t, 8))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, (-2L)), (-2L)), (-2L), 0x64L, (-2L));
            VECTOR(uint64_t, 2) l_398 = (VECTOR(uint64_t, 2))(4UL, 0xB8370272AC435D59L);
            int32_t l_405[10] = {0x09F26B18L,0x09F26B18L,0x09F26B18L,0x09F26B18L,0x09F26B18L,0x09F26B18L,0x09F26B18L,0x09F26B18L,0x09F26B18L,0x09F26B18L};
            int32_t **l_420 = &p_626->g_179;
            VECTOR(int32_t, 16) l_471 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
            int i;
            if ((atomic_inc(&p_626->g_atomic_input[73 * get_linear_group_id() + 1]) == 9))
            { /* block id: 172 */
                int32_t l_358 = 0L;
                int64_t l_359 = 0x3B5BA0EBD3525AA4L;
                int16_t l_360 = 0L;
                l_359 = l_358;
                l_360 = 0x416E9F44L;
                unsigned int result = 0;
                result += l_358;
                result += l_359;
                result += l_360;
                atomic_add(&p_626->g_special_values[73 * get_linear_group_id() + 1], result);
            }
            else
            { /* block id: 175 */
                (1 + 1);
            }
            if ((p_626->g_173.s3 , (safe_rshift_func_int16_t_s_u((p_11 ^ p_11), 13))))
            { /* block id: 178 */
                for (p_626->g_201 = (-30); (p_626->g_201 != 40); p_626->g_201++)
                { /* block id: 181 */
                    return p_9;
                }
            }
            else
            { /* block id: 184 */
                int32_t l_367 = 0L;
                (*p_7) &= ((!(safe_add_func_int32_t_s_s((p_626->g_87.s2 , 0x783A858DL), (l_367 > 0x5AB8L)))) , l_368);
                for (p_626->g_175 = 0; (p_626->g_175 <= (-9)); p_626->g_175--)
                { /* block id: 188 */
                    int32_t **l_371 = &p_626->g_54[2][3];
                    (*p_7) &= l_367;
                    (*l_371) = p_10;
                }
                if ((*p_7))
                    break;
            }
            for (l_244 = 22; (l_244 == 15); l_244--)
            { /* block id: 196 */
                VECTOR(uint8_t, 2) l_382 = (VECTOR(uint8_t, 2))(0x65L, 0xA4L);
                uint64_t *l_401 = &p_626->g_183[0].f2;
                uint16_t *l_402 = &p_626->g_71[1][0][0];
                uint32_t *l_403 = &p_626->g_404;
                uint16_t l_419 = 9UL;
                int32_t l_432[9];
                VECTOR(int16_t, 2) l_447 = (VECTOR(int16_t, 2))(0x780BL, 0x6D5BL);
                uint64_t l_448 = 8UL;
                int64_t l_452[8];
                uint32_t *l_464[4] = {&p_626->g_242,&p_626->g_242,&p_626->g_242,&p_626->g_242};
                int32_t l_465 = 0x594DFC18L;
                VECTOR(uint32_t, 16) l_466 = (VECTOR(uint32_t, 16))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 0xC94AA5E5L), 0xC94AA5E5L), 0xC94AA5E5L, 2UL, 0xC94AA5E5L, (VECTOR(uint32_t, 2))(2UL, 0xC94AA5E5L), (VECTOR(uint32_t, 2))(2UL, 0xC94AA5E5L), 2UL, 0xC94AA5E5L, 2UL, 0xC94AA5E5L);
                VECTOR(int64_t, 8) l_474 = (VECTOR(int64_t, 8))((-4L), (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0x5F3D40BCE2E6084CL), 0x5F3D40BCE2E6084CL), 0x5F3D40BCE2E6084CL, (-4L), 0x5F3D40BCE2E6084CL);
                int16_t *l_486 = (void*)0;
                int i;
                for (i = 0; i < 9; i++)
                    l_432[i] = 0x56F075B9L;
                for (i = 0; i < 8; i++)
                    l_452[i] = 0x1BDA587A5823A4E5L;
                if ((safe_mul_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 2))(p_626->g_380.s40)).yyxx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 8))(p_626->g_381.wwxyxywy)), ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 2))(l_382.xy)), ((VECTOR(uint8_t, 16))(GROUP_DIVERGE(0, 1), 0xF0L, 255UL, 0xE5L, 0UL, 0x6DL, 4UL, ((((VECTOR(uint64_t, 2))(0x3550DCA75E1FDB3BL, 1UL)).lo || (0x3A076BC2BE7EA8BAL & (l_332.w , 3UL))) ^ (safe_lshift_func_int8_t_s_u((((void*)0 == l_385[0][1][1]) ^ ((!(safe_mul_func_uint8_t_u_u(((((*l_403) = ((VECTOR(uint32_t, 8))(l_382.x, 0UL, ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((*l_402) |= ((safe_add_func_int32_t_s_s(8L, (((*l_401) = ((((0x48L != ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_394.s1214206627307533)))).sbb37)).yyyxwyyz)), ((VECTOR(int8_t, 16))(l_395.s585c511fbb4a3795)).even))).s0326102613513477)).sa) <= ((((safe_lshift_func_int8_t_s_u((((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 16))(l_398.xxyxyyxxyxxyxyyy)), ((VECTOR(uint64_t, 4))(0x00EE5D6FAA04FEC6L, ((VECTOR(uint64_t, 2))(0x4E4E9D23C24342D2L, 9UL)), 0UL)).wyyxwywwwzxzzzyz))).s4 | ((safe_rshift_func_uint16_t_u_s(((void*)0 != &p_626->g_159), p_626->g_242)) && p_11)), 0)) != 0x855E01D7L) < 0UL) | FAKE_DIVERGE(p_626->group_2_offset, get_group_id(2), 10))) , p_626->l_comm_values[(safe_mod_func_uint32_t_u_u(p_626->tid, 80))]) || p_626->g_267[0])) , (*p_7)))) < (-10L))), 3)), 1)) & 1L), 1UL, 0xF01B3505L, 0x4F04A663L, 0x54CCA481L, 0UL)).s3) , p_626->g_242) > (-1L)), p_626->g_294.s9))) | l_394.s2)), 6))), FAKE_DIVERGE(p_626->global_0_offset, get_global_id(0), 10), 255UL, 1UL, 255UL, ((VECTOR(uint8_t, 4))(0xD8L)))).s78))).xyyxyyxx, ((VECTOR(uint8_t, 8))(255UL))))).s36)).yxxx, (uint8_t)0x27L, (uint8_t)p_11))).hi)).yyyx))))).y)), p_626->g_167.s7)) & l_405[2]), p_11)))
                { /* block id: 200 */
                    uint64_t l_434 = 0x150657BC51A4926CL;
                    int32_t l_437 = 0x175EC5DBL;
                    for (p_626->g_175 = (-14); (p_626->g_175 > (-15)); p_626->g_175 = safe_sub_func_int16_t_s_s(p_626->g_175, 6))
                    { /* block id: 203 */
                        atomic_xor(&p_626->g_atomic_reduction[get_linear_group_id()], l_398.x + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_626->v_collective += p_626->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                    (*p_7) &= ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(1L, 0x15D5F986L)).yyxx))).w;
                    if ((atomic_inc(&p_626->g_atomic_input[73 * get_linear_group_id() + 65]) == 2))
                    { /* block id: 208 */
                        uint8_t l_408[1][7];
                        int8_t l_409 = 5L;
                        VECTOR(int32_t, 16) l_410 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x46BEC49EL), 0x46BEC49EL), 0x46BEC49EL, 3L, 0x46BEC49EL, (VECTOR(int32_t, 2))(3L, 0x46BEC49EL), (VECTOR(int32_t, 2))(3L, 0x46BEC49EL), 3L, 0x46BEC49EL, 3L, 0x46BEC49EL);
                        uint32_t l_411 = 4294967291UL;
                        int32_t l_412 = 0x1E95FB38L;
                        int8_t l_413 = 0x1BL;
                        int32_t l_414[7];
                        int8_t l_415[1];
                        uint16_t l_416 = 0x2970L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_408[i][j] = 0xA2L;
                        }
                        for (i = 0; i < 7; i++)
                            l_414[i] = 0x4CB8D17BL;
                        for (i = 0; i < 1; i++)
                            l_415[i] = 5L;
                        l_408[0][1] = (-3L);
                        l_411 = ((l_409 , 0x3F81BAC9L) , ((VECTOR(int32_t, 2))(l_410.s2a)).hi);
                        l_416--;
                        unsigned int result = 0;
                        int l_408_i0, l_408_i1;
                        for (l_408_i0 = 0; l_408_i0 < 1; l_408_i0++) {
                            for (l_408_i1 = 0; l_408_i1 < 7; l_408_i1++) {
                                result += l_408[l_408_i0][l_408_i1];
                            }
                        }
                        result += l_409;
                        result += l_410.sf;
                        result += l_410.se;
                        result += l_410.sd;
                        result += l_410.sc;
                        result += l_410.sb;
                        result += l_410.sa;
                        result += l_410.s9;
                        result += l_410.s8;
                        result += l_410.s7;
                        result += l_410.s6;
                        result += l_410.s5;
                        result += l_410.s4;
                        result += l_410.s3;
                        result += l_410.s2;
                        result += l_410.s1;
                        result += l_410.s0;
                        result += l_411;
                        result += l_412;
                        result += l_413;
                        int l_414_i0;
                        for (l_414_i0 = 0; l_414_i0 < 7; l_414_i0++) {
                            result += l_414[l_414_i0];
                        }
                        int l_415_i0;
                        for (l_415_i0 = 0; l_415_i0 < 1; l_415_i0++) {
                            result += l_415[l_415_i0];
                        }
                        result += l_416;
                        atomic_add(&p_626->g_special_values[73 * get_linear_group_id() + 65], result);
                    }
                    else
                    { /* block id: 212 */
                        (1 + 1);
                    }
                    if ((p_626->g_304.x , l_419))
                    { /* block id: 215 */
                        uint8_t *l_423 = (void*)0;
                        uint8_t *l_424 = (void*)0;
                        uint8_t *l_425[10][4][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                        int32_t l_426 = 0L;
                        int32_t l_427[4][4] = {{1L,0L,1L,1L},{1L,0L,1L,1L},{1L,0L,1L,1L},{1L,0L,1L,1L}};
                        int i, j, k;
                        (*p_7) = (FAKE_DIVERGE(p_626->global_2_offset, get_global_id(2), 10) >= p_626->g_87.s5);
                        if (l_333.x)
                            break;
                        (*p_7) = (((*l_260) &= (&p_626->g_54[2][6] != l_420)) != ((safe_rshift_func_uint8_t_u_u((p_626->g_331.z++), 4)) ^ 6UL));
                        (*p_7) = 0x34388ADBL;
                    }
                    else
                    { /* block id: 222 */
                        int16_t l_430 = 8L;
                        int32_t l_431[3][5] = {{0x61B0303EL,0x61B0303EL,0x61B0303EL,0x61B0303EL,0x61B0303EL},{0x61B0303EL,0x61B0303EL,0x61B0303EL,0x61B0303EL,0x61B0303EL},{0x61B0303EL,0x61B0303EL,0x61B0303EL,0x61B0303EL,0x61B0303EL}};
                        int i, j;
                        --l_434;
                        --p_626->g_438;
                        (*p_7) = 0x4EAB69C5L;
                        if ((*p_7))
                            break;
                    }
                }
                else
                { /* block id: 228 */
                    int64_t *l_441 = &p_626->g_91[4][0];
                    int32_t l_444 = (-1L);
                    (*p_7) = ((((void*)0 == l_441) , (safe_mod_func_uint32_t_u_u((l_444 ^ (safe_mul_func_uint16_t_u_u((p_626->g_350[5][1][7] , p_11), ((VECTOR(int16_t, 4))(l_447.yyxy)).y))), l_448))) > (((((*l_255) = ((safe_rshift_func_uint16_t_u_u(p_626->g_380.s0, 9)) , p_11)) , &p_626->g_404) != &p_626->g_404) < l_382.y));
                    (*l_420) = p_8;
                }
                (*p_626->g_187) = ((*l_420) = p_7);
                p_626->g_454--;
                l_405[2] |= ((((safe_sub_func_int8_t_s_s((p_626->g_91[4][1] , ((safe_div_func_int64_t_s_s((safe_div_func_int8_t_s_s((l_432[4] <= ((+((GROUP_DIVERGE(2, 1) > ((VECTOR(uint16_t, 16))(p_626->g_463.wwyxzywxxwyzzxxy)).sa) == p_11)) , ((l_465 &= FAKE_DIVERGE(p_626->local_2_offset, get_local_id(2), 10)) , ((VECTOR(uint32_t, 4))(l_466.sed36)).z))), (safe_rshift_func_int16_t_s_u(((((((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(1L, 0x3C303BB4B2494824L)), 0x3B773E2B31E68819L, 0x3CE1CE6D3A4313F6L)).wxxwzzzzywyyzwyx, ((VECTOR(int64_t, 2))(0x5EB7AF6B7484187CL, 0x6374C47196F94115L)).yyyyxyxxyxxyxyyy, ((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 2))(l_471.s92)).yyxy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(abs(((VECTOR(uint32_t, 16))(l_472.s3204352630327222)).even))).s62)).yyyx))).wyxxzxxwwxzzwyyz, ((VECTOR(int64_t, 4))(p_626->g_350[0][3][2].f0, ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(l_473.s73415326)).s56, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_474.s40)).yyxx)).ywzxwxxw, ((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(0x78FAE77A61D2C1A1L, (l_466.sc <= (safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_477.yy)), 1L, 4L)))).even, ((VECTOR(int32_t, 2))(0x12AC536DL, 0x6BE8A96DL))))).hi, ((safe_div_func_uint32_t_u_u(0UL, (safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((**l_420) = ((p_626->g_454 >= (0x178AL || 0x5A02L)) , 0x0A91L)) , p_626->g_463.z), p_626->g_159)), p_626->g_331.y)) & l_432[8]), l_451.x)))) || l_477.x)))), 0x4251EF09D8C72B0AL, 9L, 1L, p_626->g_91[4][2], ((VECTOR(int64_t, 2))(0x41FA365C5E325AECL)), 0x3647E2D973F3C82EL, ((VECTOR(int64_t, 2))(0L)), ((VECTOR(int64_t, 4))(0x5AF32BE493B070D7L)), 0L)))).s2, ((VECTOR(int64_t, 8))(0x41AC87DF1211DD32L)), ((VECTOR(int64_t, 4))(0x28FE511C42960D6FL)), ((VECTOR(int64_t, 2))(0x45CFE72650B9E252L)), 1L)).s5ffa, (int64_t)p_626->g_330.y, (int64_t)p_626->g_331.y))).wxxwzxzw))).even)).x, ((VECTOR(int64_t, 4))(0x1C7C0EEBAB74C25FL)), 0x1A4AC59E105EADD3L, 0L, 0x6546D521F6417C42L)).s22, ((VECTOR(int64_t, 2))((-1L)))))), (-3L))).xwywwxzwxwywxzzy)))))).sc2)), (-1L), p_11, 0L, ((VECTOR(int64_t, 2))(0x64A706589C26405DL)), 0L)).s4, p_626->g_463.x)) <= 255UL) <= p_626->g_73) >= l_474.s7) , p_626->g_487) != l_489), p_626->g_267[3])))), p_11)) >= p_626->g_71[1][9][1])), l_491)) || l_472.s0) || p_11) , l_447.x);
            }
        }
        if (((((l_333.x >= ((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(0xB374L, (((VECTOR(uint16_t, 8))(l_492.wxxyyywz)).s2 <= (!(((((safe_add_func_int8_t_s_s(0x4EL, (safe_sub_func_int8_t_s_s((((void*)0 == &p_626->g_267[0]) == (safe_mod_func_int64_t_s_s((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(p_626->g_499.xwzwwxwy)).s42)).hi | p_11), ((VECTOR(uint64_t, 4))(l_500.s0333)).z))), (p_11 & (l_433 = p_626->g_71[2][3][2])))))) , ((p_626->g_501 != ((p_626->g_513 = ((*l_255) = (((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 4))(0x09A265EFBB433E37L, ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(0x0B7B17648DAF6D79L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 16))(l_502.wwxwxyzywxyyyzxz)).sfc, ((VECTOR(int64_t, 2))(l_503.s71))))))), 1L)).lo)), ((VECTOR(int64_t, 2))((-9L), 0x72D1DDB1451F843FL)), ((VECTOR(int64_t, 8))(p_626->g_504.xwxzzwyx)).s42))), 0x181854B1E7EF0FC8L)), ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 8))(l_505.xzyzzzxw)).lo, ((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 4))(l_506.s0155)).odd, (int64_t)((safe_rshift_func_uint8_t_u_s((((VECTOR(uint64_t, 2))(0xA7FC431974B65FF5L, 0x9AC9F51C60971194L)).lo != ((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(0x3042DBF5L, 1UL)).yxxxxxxx, ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 8))(l_509.sec70f89b)).even, ((VECTOR(uint32_t, 16))(l_510.s670b584f6cc9eb55)).s86ec))).zwwzwyzw))).s0536265043247517)))).hi, ((VECTOR(uint32_t, 16))(0UL, 4294967290UL, (((((safe_mod_func_int16_t_s_s((l_505.z && 0xCE424767L), 0x33ACL)) == p_626->g_73) > (-10L)) & p_626->g_304.x) , p_626->g_167.s1), FAKE_DIVERGE(p_626->global_2_offset, get_global_id(2), 10), ((VECTOR(uint32_t, 4))(0x2ACB7E48L)), 0x7BB21CC0L, p_626->g_71[1][9][1], 0x97DD5C21L, l_451.y, ((VECTOR(uint32_t, 2))(0UL)), 0x0712EB33L, 0xDCB04BE7L)).even))).s3), p_626->g_75)) , p_11), (int64_t)p_11))).xxyxyxxxxxxyyxxx, ((VECTOR(int64_t, 16))(0L))))).s0099, ((VECTOR(int64_t, 4))(0x23DD054606A79BC5L)))))))).x >= l_503.s0))) , l_514)) || 0x6D39F78FL)) <= 1L) != p_626->g_331.y) || l_333.y))), 0xA1ABL, 0x47EBL)), ((VECTOR(uint16_t, 4))(0x808CL))))).wwyxyxxzyyxxyzzy, (uint16_t)GROUP_DIVERGE(1, 1), (uint16_t)p_11))).se) >= (-1L)) < l_515) || l_451.x))
        { /* block id: 244 */
            uint8_t l_516 = 0xE2L;
            VECTOR(uint16_t, 2) l_520 = (VECTOR(uint16_t, 2))(65527UL, 65535UL);
            VECTOR(uint32_t, 16) l_529 = (VECTOR(uint32_t, 16))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0x750D5DC5L), 0x750D5DC5L), 0x750D5DC5L, 5UL, 0x750D5DC5L, (VECTOR(uint32_t, 2))(5UL, 0x750D5DC5L), (VECTOR(uint32_t, 2))(5UL, 0x750D5DC5L), 5UL, 0x750D5DC5L, 5UL, 0x750D5DC5L);
            VECTOR(uint32_t, 2) l_531 = (VECTOR(uint32_t, 2))(0x43A2754AL, 0xB9885125L);
            int16_t *l_537 = (void*)0;
            int16_t *l_538 = &p_626->g_175;
            int32_t **l_540 = &p_626->g_179;
            int i;
            (*l_540) = (((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 4))(l_516, 1UL, 18446744073709551607UL, 0x2B8844F935A22F4AL)).wwzzzwyy, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(0x6877658737722817L, 0x079B1CED3632B3CEL, (((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(0xC75EL, ((VECTOR(uint16_t, 2))(0x7E8DL, 5UL)), 65535UL, ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(p_626->g_519.wyxwzwwx)).hi)), ((VECTOR(uint16_t, 4))(l_520.xxyx))))))).s3242161735445557)).sf, (7L & ((p_626->g_539 |= ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))((-9L), ((VECTOR(int16_t, 2))(0x072BL, 1L)), (-1L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(6L, 0x6E0DL)), 1L, (l_516 < p_626->g_304.y), (-6L), 0x2C7BL, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0L, 0x4133L)))), 0x72DCL, 0x62B3L, 0x1393L, 1L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_626->g_521.wzzx)), (-1L), 0x2A29L, 0L, 0x4D8DL, ((VECTOR(int16_t, 2))(0x670EL, 0x3884L)), 7L, (safe_lshift_func_int16_t_s_u(((*l_538) = (safe_lshift_func_uint16_t_u_s((((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 4))(p_626->g_528.s5670)).wyxxwzzy, ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_529.sec)).yyxyyyyx)).s51, ((VECTOR(uint32_t, 8))(l_530.s8aaf3e70)).s77, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_531.yxxyyyyx)).odd)).lo))).xyxyyyyy))), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0x0897L, 7L, ((VECTOR(int16_t, 16))(0x0F90L, (-2L), p_11, (-7L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))((((void*)0 != p_626->g_532) & (((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(5L, p_626->g_55[4])), p_11)) && p_11) && l_516)), 0L, 0x5DFAL, 0x2565L)), ((VECTOR(int16_t, 4))((-8L)))))).lo, ((VECTOR(int16_t, 2))(0x160BL))))))), ((VECTOR(int16_t, 8))(0x31F8L)), 0x3AC3L, 0x6C0DL)).sd, (-10L), ((VECTOR(int16_t, 4))(8L)), 0x7C02L, 7L, 0L, (-1L), (-6L), p_11, 8L, 0x23DAL)).hi)).s23))))), ((VECTOR(uint16_t, 4))(0xF336L)), 0x5471L, 1UL, ((VECTOR(uint16_t, 4))(0xE504L)), 65535UL, p_626->l_comm_values[(safe_mod_func_uint32_t_u_u(p_626->tid, 80))], 1UL, 0UL)).lo)).s65, ((VECTOR(uint16_t, 2))(0x8D07L))))).yxyy)).even, ((VECTOR(uint32_t, 2))(0x31978A7AL))))).yxyyyxxx)))).sbc, (uint32_t)0x4CE0E0EDL))).odd < 0UL), 5))), 10)), l_516, p_626->g_380.s3, 4L, 1L)).s3294)))).s8deb)))).s75, (int16_t)p_11))).even) == p_11)))) , 18446744073709551615UL) >= 7UL), ((VECTOR(uint64_t, 4))(0x767B41E21E7BB3A3L)), 0x8AC7B7A6B49F99FBL)))).s4670523711574323)).sc7b6, ((VECTOR(uint64_t, 4))(8UL)), ((VECTOR(uint64_t, 4))(0x6CEF482F4507F2D9L))))).even)).xyxxyxyx))).s1 , p_7);
            return p_7;
        }
        else
        { /* block id: 249 */
            uint64_t l_543[4] = {0x819E6C7974A7759EL,0x819E6C7974A7759EL,0x819E6C7974A7759EL,0x819E6C7974A7759EL};
            int32_t l_551 = 0x0CA66A3FL;
            int i;
            for (p_626->g_159 = 26; (p_626->g_159 > 0); p_626->g_159--)
            { /* block id: 252 */
                uint16_t *l_549 = (void*)0;
                uint16_t *l_550[2][7][5] = {{{&p_626->g_71[1][9][1],&p_626->g_71[1][8][0],&p_626->g_71[1][8][0],&p_626->g_71[1][9][1],(void*)0},{&p_626->g_71[1][9][1],&p_626->g_71[1][8][0],&p_626->g_71[1][8][0],&p_626->g_71[1][9][1],(void*)0},{&p_626->g_71[1][9][1],&p_626->g_71[1][8][0],&p_626->g_71[1][8][0],&p_626->g_71[1][9][1],(void*)0},{&p_626->g_71[1][9][1],&p_626->g_71[1][8][0],&p_626->g_71[1][8][0],&p_626->g_71[1][9][1],(void*)0},{&p_626->g_71[1][9][1],&p_626->g_71[1][8][0],&p_626->g_71[1][8][0],&p_626->g_71[1][9][1],(void*)0},{&p_626->g_71[1][9][1],&p_626->g_71[1][8][0],&p_626->g_71[1][8][0],&p_626->g_71[1][9][1],(void*)0},{&p_626->g_71[1][9][1],&p_626->g_71[1][8][0],&p_626->g_71[1][8][0],&p_626->g_71[1][9][1],(void*)0}},{{&p_626->g_71[1][9][1],&p_626->g_71[1][8][0],&p_626->g_71[1][8][0],&p_626->g_71[1][9][1],(void*)0},{&p_626->g_71[1][9][1],&p_626->g_71[1][8][0],&p_626->g_71[1][8][0],&p_626->g_71[1][9][1],(void*)0},{&p_626->g_71[1][9][1],&p_626->g_71[1][8][0],&p_626->g_71[1][8][0],&p_626->g_71[1][9][1],(void*)0},{&p_626->g_71[1][9][1],&p_626->g_71[1][8][0],&p_626->g_71[1][8][0],&p_626->g_71[1][9][1],(void*)0},{&p_626->g_71[1][9][1],&p_626->g_71[1][8][0],&p_626->g_71[1][8][0],&p_626->g_71[1][9][1],(void*)0},{&p_626->g_71[1][9][1],&p_626->g_71[1][8][0],&p_626->g_71[1][8][0],&p_626->g_71[1][9][1],(void*)0},{&p_626->g_71[1][9][1],&p_626->g_71[1][8][0],&p_626->g_71[1][8][0],&p_626->g_71[1][9][1],(void*)0}}};
                uint8_t *l_552 = &l_515;
                int8_t *l_558 = (void*)0;
                int32_t l_559 = 1L;
                int32_t l_560 = 0x4539FA5DL;
                int i, j, k;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_626->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 80)), permutations[(safe_mod_func_uint32_t_u_u(l_543[1], 10))][(safe_mod_func_uint32_t_u_u(p_626->tid, 80))]));
                l_451.y &= ((((VECTOR(uint32_t, 16))(((((*p_7) |= (safe_unary_minus_func_int16_t_s((safe_unary_minus_func_int64_t_s(p_11))))) , (safe_rshift_func_uint8_t_u_s(((*l_552) = (0x432EL < (l_551 = ((VECTOR(uint16_t, 2))(p_626->g_548.s33)).hi))), 0))) != (--p_626->g_167.s4)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_626->g_555.s715159ae8c5f1192)).s3b)))).xxxy)).even)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_556.xxyxxxyy)).lo)), 0x8D89FF22L, ((VECTOR(uint32_t, 8))(l_557.s10430732)))).s5 & (p_11 >= (!(((l_560 = (l_559 = 0x18L)) <= (p_626->g_304.x != (18446744073709551615UL && (((~p_11) >= ((safe_mod_func_uint8_t_u_u(p_626->g_294.se, (safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u(p_11, FAKE_DIVERGE(p_626->global_2_offset, get_global_id(2), 10))), p_626->g_71[1][9][1])))) | p_626->g_548.sa)) | p_626->g_381.y)))) || p_626->g_294.s7)))) && p_11);
                (*p_7) = (*p_7);
                for (l_491 = 0; (l_491 != 21); l_491 = safe_add_func_int16_t_s_s(l_491, 9))
                { /* block id: 266 */
                    uint16_t l_569 = 0x763EL;
                    ++l_569;
                    for (l_560 = 0; (l_560 >= (-28)); l_560--)
                    { /* block id: 270 */
                        return p_7;
                    }
                }
            }
        }
        for (p_626->g_242 = 0; (p_626->g_242 <= 43); p_626->g_242++)
        { /* block id: 278 */
            uint64_t l_576 = 0UL;
            l_576 ^= l_510.sd;
        }
    }
    l_602 = (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int64_t_s_s((p_626->g_581 , (((((safe_sub_func_int64_t_s_s(p_626->g_comm_values[p_626->tid], (((*l_585) = &l_246) == l_586))) && (+(safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((*p_7) = ((((~(safe_sub_func_int16_t_s_s(l_472.s0, l_505.y))) && (((safe_mod_func_int64_t_s_s((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 8))(((((safe_div_func_int64_t_s_s(p_11, GROUP_DIVERGE(2, 1))) | (((*l_599) = l_255) != l_255)) | p_11) ^ l_492.w), ((VECTOR(int16_t, 2))((-1L))), 0x3214L, l_332.x, p_626->g_438, 0x47A5L, 0x654DL)).s2, GROUP_DIVERGE(0, 1))), l_600)) == l_601.s8) , l_477.x)) , l_255) != (void*)0)), l_244)), 7)))) , &p_626->g_267[0]) == &p_626->g_267[4]) <= 0x28445D55L)), p_626->g_521.z)) < p_626->g_331.z), 0));
    return p_7;
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_201 p_626->g_55 p_626->g_224 p_626->g_73 p_626->g_227 p_626->g_87 p_626->g_166 p_626->g_71 p_626->g_167
 * writes: p_626->g_201 p_626->g_55 p_626->g_54 p_626->g_175 p_626->g_242
 */
int32_t * func_12(uint32_t  p_13, int32_t * p_14, uint32_t  p_15, struct S2 * p_626)
{ /* block id: 116 */
    uint32_t l_204 = 3UL;
    int32_t *l_207[8] = {&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4]};
    VECTOR(int16_t, 8) l_236 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x59E0L), 0x59E0L), 0x59E0L, 0L, 0x59E0L);
    int8_t *l_237 = &p_626->g_159;
    int i;
    --l_204;
    l_207[2] = l_207[4];
    for (p_626->g_201 = 0; (p_626->g_201 < 45); p_626->g_201 = safe_add_func_uint16_t_u_u(p_626->g_201, 3))
    { /* block id: 121 */
        uint16_t l_216[4];
        int32_t *l_223 = &p_626->g_55[4];
        int8_t **l_238[1];
        int8_t *l_239[10] = {&p_626->g_159,&p_626->g_159,&p_626->g_159,&p_626->g_159,&p_626->g_159,&p_626->g_159,&p_626->g_159,&p_626->g_159,&p_626->g_159,&p_626->g_159};
        int16_t *l_240 = (void*)0;
        int16_t *l_241[5];
        int32_t l_243[9][7] = {{1L,0x541C2E01L,(-5L),0x541C2E01L,1L,1L,0x541C2E01L},{1L,0x541C2E01L,(-5L),0x541C2E01L,1L,1L,0x541C2E01L},{1L,0x541C2E01L,(-5L),0x541C2E01L,1L,1L,0x541C2E01L},{1L,0x541C2E01L,(-5L),0x541C2E01L,1L,1L,0x541C2E01L},{1L,0x541C2E01L,(-5L),0x541C2E01L,1L,1L,0x541C2E01L},{1L,0x541C2E01L,(-5L),0x541C2E01L,1L,1L,0x541C2E01L},{1L,0x541C2E01L,(-5L),0x541C2E01L,1L,1L,0x541C2E01L},{1L,0x541C2E01L,(-5L),0x541C2E01L,1L,1L,0x541C2E01L},{1L,0x541C2E01L,(-5L),0x541C2E01L,1L,1L,0x541C2E01L}};
        int i, j;
        for (i = 0; i < 4; i++)
            l_216[i] = 1UL;
        for (i = 0; i < 1; i++)
            l_238[i] = &l_237;
        for (i = 0; i < 5; i++)
            l_241[i] = &p_626->g_175;
        if ((atomic_inc(&p_626->l_atomic_input[40]) == 9))
        { /* block id: 123 */
            uint64_t l_210 = 0xA3DAAC6DAB7E2050L;
            uint32_t l_211 = 1UL;
            l_211 = l_210;
            for (l_211 = 0; (l_211 >= 21); l_211++)
            { /* block id: 127 */
                int32_t l_215 = 0x3B32C21BL;
                int32_t *l_214[9] = {&l_215,&l_215,&l_215,&l_215,&l_215,&l_215,&l_215,&l_215,&l_215};
                int i;
                l_214[7] = (void*)0;
            }
            unsigned int result = 0;
            result += l_210;
            result += l_211;
            atomic_add(&p_626->l_special_values[40], result);
        }
        else
        { /* block id: 130 */
            (1 + 1);
        }
        if (l_216[1])
            break;
        if ((*p_14))
        { /* block id: 134 */
            uint16_t *l_219 = (void*)0;
            uint16_t *l_220 = &l_216[1];
            (*p_14) = (safe_rshift_func_uint16_t_u_u(p_13, (--(*l_220))));
        }
        else
        { /* block id: 137 */
            (*p_626->g_224) = l_223;
        }
        l_243[3][2] ^= (~(((safe_lshift_func_int8_t_s_u(0x2DL, (p_626->g_73 > 0x2FL))) >= ((void*)0 != p_626->g_227)) ^ (18446744073709551615UL > ((p_626->g_242 = (p_626->g_175 = ((*l_223) = ((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((p_626->g_87.s3 , ((*l_223) >= (((safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))(l_236.s5270)).zywyzwyy, ((VECTOR(int16_t, 2))(0x472BL, 0x78C3L)).yxyxxyyy))).s0223071637115677)), (int16_t)(((l_239[6] = l_237) == &p_626->g_159) <= p_626->g_166.s0), (int16_t)p_626->g_71[1][9][1]))), (int16_t)0x7FA7L))), ((VECTOR(int16_t, 16))(0L))))).sf, 10)) & p_13), 0x7ED8L)) ^ (-7L)) , p_626->g_167.s1))), p_13)), p_15)) > (*p_14))))) > p_626->g_201))));
    }
    return p_14;
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_177
 * writes: p_626->g_54
 */
int32_t * func_17(int32_t  p_18, uint32_t  p_19, struct S2 * p_626)
{ /* block id: 113 */
    int32_t **l_203[5][1] = {{&p_626->g_54[0][3]},{&p_626->g_54[0][3]},{&p_626->g_54[0][3]},{&p_626->g_54[0][3]},{&p_626->g_54[0][3]}};
    int i, j;
    (*p_626->g_177) = (void*)0;
    return &p_626->g_55[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_173 p_626->g_comm_values p_626->g_75 p_626->g_73 p_626->g_175 p_626->g_55
 * writes: p_626->g_159
 */
uint32_t  func_22(uint32_t  p_23, uint32_t  p_24, int32_t  p_25, int64_t  p_26, uint16_t  p_27, struct S2 * p_626)
{ /* block id: 107 */
    int32_t *l_192 = (void*)0;
    int8_t *l_195 = &p_626->g_159;
    int64_t *l_196 = (void*)0;
    int64_t *l_197 = (void*)0;
    int32_t l_198[2][4][9] = {{{0x0EB271F3L,0L,0L,0x7C341A53L,0L,0x7C341A53L,0L,0L,0x0EB271F3L},{0x0EB271F3L,0L,0L,0x7C341A53L,0L,0x7C341A53L,0L,0L,0x0EB271F3L},{0x0EB271F3L,0L,0L,0x7C341A53L,0L,0x7C341A53L,0L,0L,0x0EB271F3L},{0x0EB271F3L,0L,0L,0x7C341A53L,0L,0x7C341A53L,0L,0L,0x0EB271F3L}},{{0x0EB271F3L,0L,0L,0x7C341A53L,0L,0x7C341A53L,0L,0L,0x0EB271F3L},{0x0EB271F3L,0L,0L,0x7C341A53L,0L,0x7C341A53L,0L,0L,0x0EB271F3L},{0x0EB271F3L,0L,0L,0x7C341A53L,0L,0x7C341A53L,0L,0L,0x0EB271F3L},{0x0EB271F3L,0L,0L,0x7C341A53L,0L,0x7C341A53L,0L,0L,0x0EB271F3L}}};
    int32_t l_199 = 4L;
    int i, j, k;
    l_199 &= ((((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 8))(255UL, 0x50L, (0x8844572FAC39FD4BL || (0L != ((((safe_mod_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(p_626->g_173.sb, (((&p_626->g_55[4] != l_192) | (l_198[0][3][8] = (safe_mul_func_int16_t_s_s((((*l_195) = (p_24 | ((VECTOR(int16_t, 8))(p_626->g_comm_values[p_626->tid], p_626->g_75, p_24, 6L, 0L, 1L, 4L, 0L)).s4)) >= p_24), p_24)))) | 0UL))) == 0x2D6FL), p_626->g_73)) ^ p_626->g_175) < p_626->g_55[4]) == p_626->g_comm_values[p_626->tid]))), 0xE5L, 246UL, ((VECTOR(uint8_t, 2))(0xDDL)), 0xBBL)).s46, ((VECTOR(uint8_t, 2))(0xAFL))))).even != p_25) == p_626->g_175);
    return p_626->g_73;
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_183 p_626->g_187
 * writes: p_626->g_54
 */
uint16_t  func_30(int64_t  p_31, int32_t * p_32, int32_t * p_33, uint64_t  p_34, int32_t * p_35, struct S2 * p_626)
{ /* block id: 103 */
    VECTOR(uint64_t, 4) l_180 = (VECTOR(uint64_t, 4))(0x55D3BE87DA6A6FC2L, (VECTOR(uint64_t, 2))(0x55D3BE87DA6A6FC2L, 0x46E6FC7E2C9011E9L), 0x46E6FC7E2C9011E9L);
    union U0 *l_181 = (void*)0;
    union U0 **l_182 = &l_181;
    int32_t *l_184 = &p_626->g_55[4];
    int32_t *l_185 = &p_626->g_75;
    int i;
    (*l_182) = (((VECTOR(uint64_t, 16))(l_180.yxzwzxyzyzxzxxxz)).s6 , l_181);
    (*p_626->g_187) = (p_626->g_183[0] , l_185);
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_55 p_626->g_166 p_626->g_167 p_626->g_173 p_626->g_175 p_626->g_comm_values p_626->g_75 p_626->l_comm_values p_626->g_91 p_626->g_87 p_626->g_177
 * writes: p_626->g_175 p_626->g_150.f2 p_626->g_73 p_626->g_55 p_626->g_75 p_626->g_91 p_626->g_54
 */
int64_t  func_36(int32_t  p_37, uint32_t  p_38, int32_t  p_39, int32_t * p_40, int64_t  p_41, struct S2 * p_626)
{ /* block id: 98 */
    int32_t *l_161 = &p_626->g_55[4];
    int64_t *l_170 = &p_626->g_91[4][0];
    int16_t *l_174 = &p_626->g_175;
    uint64_t *l_176 = &p_626->g_150.f2;
    uint32_t l_178 = 0x9454B42CL;
    (*p_626->g_177) = func_48(l_161, func_48(&p_626->g_55[4], &p_37, (safe_div_func_int8_t_s_s((*l_161), (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(5UL, 1UL)).hi, ((*l_176) = (((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 2))(p_626->g_166.s35)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(p_626->g_167.s21175541)).even)).even))).hi || (safe_add_func_int16_t_s_s((*l_161), ((*l_174) |= ((((l_170 != &p_626->g_91[4][2]) , (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_626->g_173.s52317f37)).s7726722733677224)).s2, 0x33L))) > 0L) && 0xD6E7BBDDL)))))))))), &p_626->g_55[7], p_626), p_626->g_comm_values[p_626->tid], l_161, p_626);
    return l_178;
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_160 p_626->g_71
 * writes: p_626->g_54
 */
uint32_t  func_42(int32_t * p_43, uint64_t  p_44, int32_t  p_45, int32_t  p_46, uint32_t  p_47, struct S2 * p_626)
{ /* block id: 88 */
    int32_t *l_156 = &p_626->g_55[4];
    VECTOR(int32_t, 8) l_157 = (VECTOR(int32_t, 8))(0x15C3721EL, (VECTOR(int32_t, 4))(0x15C3721EL, (VECTOR(int32_t, 2))(0x15C3721EL, 1L), 1L), 1L, 0x15C3721EL, 1L);
    int8_t *l_158 = &p_626->g_159;
    int i;
    if ((atomic_inc(&p_626->l_atomic_input[19]) == 2))
    { /* block id: 90 */
        int16_t l_153[2];
        int32_t l_155 = 0x58C66C53L;
        int32_t *l_154 = &l_155;
        int i;
        for (i = 0; i < 2; i++)
            l_153[i] = (-1L);
        l_154 = (l_153[0] , (void*)0);
        unsigned int result = 0;
        int l_153_i0;
        for (l_153_i0 = 0; l_153_i0 < 2; l_153_i0++) {
            result += l_153[l_153_i0];
        }
        result += l_155;
        atomic_add(&p_626->l_special_values[19], result);
    }
    else
    { /* block id: 92 */
        (1 + 1);
    }
    (*p_626->g_160) = &p_45;
    return p_626->g_71[1][9][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_69 p_626->g_71 p_626->g_comm_values p_626->g_75 p_626->g_55 p_626->g_87 p_626->l_comm_values p_626->g_73 p_626->g_91
 * writes: p_626->g_71 p_626->g_73 p_626->g_55 p_626->g_75 p_626->g_91
 */
int32_t * func_48(int32_t * p_49, int32_t * p_50, int8_t  p_51, int32_t * p_52, struct S2 * p_626)
{ /* block id: 5 */
    int16_t l_64 = 0x2545L;
    uint32_t *l_81 = &p_626->g_73;
    VECTOR(uint8_t, 8) l_147 = (VECTOR(uint8_t, 8))(0xA2L, (VECTOR(uint8_t, 4))(0xA2L, (VECTOR(uint8_t, 2))(0xA2L, 255UL), 255UL), 255UL, 0xA2L, 255UL);
    int32_t l_148 = 0x7BF47076L;
    int i;
    for (p_51 = 11; (p_51 > 16); p_51 = safe_add_func_uint32_t_u_u(p_51, 4))
    { /* block id: 8 */
        int64_t l_67 = 0x5678D5680A256013L;
        VECTOR(int8_t, 4) l_68 = (VECTOR(int8_t, 4))(0x2FL, (VECTOR(int8_t, 2))(0x2FL, (-2L)), (-2L));
        uint16_t *l_70 = &p_626->g_71[1][9][1];
        uint32_t *l_72 = &p_626->g_73;
        int32_t *l_74 = &p_626->g_75;
        uint8_t l_96[2][2][9] = {{{0x01L,0UL,250UL,0x1FL,250UL,0UL,0x01L,0UL,0x00L},{0x01L,0UL,250UL,0x1FL,250UL,0UL,0x01L,0UL,0x00L}},{{0x01L,0UL,250UL,0x1FL,250UL,0UL,0x01L,0UL,0x00L},{0x01L,0UL,250UL,0x1FL,250UL,0UL,0x01L,0UL,0x00L}}};
        int i, j, k;
        if (((*l_74) ^= ((*p_52) = ((FAKE_DIVERGE(p_626->global_0_offset, get_global_id(0), 10) <= ((*l_72) = ((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((l_64 = (safe_rshift_func_int16_t_s_u(p_51, 4))) , (safe_add_func_uint8_t_u_u(FAKE_DIVERGE(p_626->global_0_offset, get_global_id(0), 10), ((~l_67) , (p_51 , ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_68.zwwxxwzz)).s1140561173243440)).odd)).odd, ((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 8))((-10L), 0x1EL, (-10L), (5UL & (((*l_70) &= (p_626->g_69[2][5][0] , ((p_51 <= p_51) , ((void*)0 == &p_626->g_55[0])))) || l_68.x)), p_626->g_71[2][5][0], (-3L), 0x34L, 0x74L)).s6531066753364325, ((VECTOR(int8_t, 16))(0x7FL)), ((VECTOR(int8_t, 16))((-1L)))))).sc8ef))).x))))), p_51)), p_626->g_comm_values[p_626->tid])) || l_64))) && p_626->g_comm_values[p_626->tid]))))
        { /* block id: 14 */
            int32_t *l_76[2][9] = {{&p_626->g_55[3],&p_626->g_55[3],&p_626->g_55[3],&p_626->g_55[3],&p_626->g_55[3],&p_626->g_55[3],&p_626->g_55[3],&p_626->g_55[3],&p_626->g_55[3]},{&p_626->g_55[3],&p_626->g_55[3],&p_626->g_55[3],&p_626->g_55[3],&p_626->g_55[3],&p_626->g_55[3],&p_626->g_55[3],&p_626->g_55[3],&p_626->g_55[3]}};
            int i, j;
            return l_76[0][5];
        }
        else
        { /* block id: 16 */
            uint32_t **l_79 = (void*)0;
            uint32_t **l_80 = &l_72;
            int32_t l_82[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int64_t *l_90 = &p_626->g_91[4][2];
            int i;
            (*p_52) = (((safe_mul_func_int8_t_s_s((((*l_80) = &p_626->g_73) != l_81), p_51)) , (l_82[2] && ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_626->g_55[4], 5)), 1)) && (0x50CCL && ((VECTOR(int16_t, 4))(p_626->g_87.s3503)).w)))) != (((*l_90) = ((((p_51 & 0x690CL) ^ (safe_rshift_func_int8_t_s_s(l_82[2], 7))) & l_64) != (*l_74))) , p_626->l_comm_values[(safe_mod_func_uint32_t_u_u(p_626->tid, 80))]));
            if (l_64)
                break;
            for (l_64 = 0; (l_64 < 16); ++l_64)
            { /* block id: 23 */
                for (p_626->g_73 = 0; (p_626->g_73 == 10); p_626->g_73++)
                { /* block id: 26 */
                    uint16_t l_97 = 0xBADFL;
                    (*p_52) |= l_96[0][0][4];
                    if (l_97)
                        continue;
                    return p_52;
                }
                (*l_74) = ((*p_52) = (*p_52));
                if ((atomic_inc(&p_626->g_atomic_input[73 * get_linear_group_id() + 61]) == 8))
                { /* block id: 34 */
                    int32_t l_98 = 2L;
                    uint32_t l_105 = 4294967295UL;
                    int64_t l_106 = 0x1CD2028979A2FC83L;
                    int32_t l_107 = 0x7A3C6A65L;
                    uint64_t l_108 = 0xFD6875ADD045E245L;
                    for (l_98 = 9; (l_98 < 15); ++l_98)
                    { /* block id: 37 */
                        int32_t l_102 = 9L;
                        int32_t *l_101 = &l_102;
                        VECTOR(int32_t, 4) l_103 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
                        uint64_t l_104 = 1UL;
                        int i;
                        l_101 = (void*)0;
                        l_104 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_103.wwwywzzz)).odd)).odd)).odd;
                    }
                    l_108 ^= (l_107 = (l_106 ^= l_105));
                    unsigned int result = 0;
                    result += l_98;
                    result += l_105;
                    result += l_106;
                    result += l_107;
                    result += l_108;
                    atomic_add(&p_626->g_special_values[73 * get_linear_group_id() + 61], result);
                }
                else
                { /* block id: 44 */
                    (1 + 1);
                }
                if ((atomic_inc(&p_626->l_atomic_input[29]) == 9))
                { /* block id: 48 */
                    int32_t l_109 = (-1L);
                    int8_t l_134 = (-5L);
                    uint16_t l_135 = 0x90C2L;
                    int32_t l_139 = 0x6DD16BD0L;
                    int32_t l_141 = 0x59F3A56AL;
                    int32_t *l_140 = &l_141;
                    int32_t *l_142 = &l_141;
                    if (l_109)
                    { /* block id: 49 */
                        int8_t l_110 = (-1L);
                        uint16_t l_111 = 0x49F7L;
                        int32_t **l_112 = (void*)0;
                        int32_t **l_113 = (void*)0;
                        int32_t l_116 = 0x145734C7L;
                        int32_t *l_115 = &l_116;
                        int32_t **l_114 = &l_115;
                        int16_t l_117 = 0x0061L;
                        int8_t l_118[3];
                        uint32_t l_119 = 2UL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_118[i] = 1L;
                        l_114 = (l_113 = (l_112 = ((l_110 , l_111) , (void*)0)));
                        ++l_119;
                    }
                    else
                    { /* block id: 54 */
                        uint8_t l_122 = 9UL;
                        uint32_t l_123 = 0x1547C547L;
                        int32_t l_125 = 0L;
                        int32_t *l_124[2];
                        int32_t *l_126 = &l_125;
                        int64_t l_127 = 0x42B3FC87B302CBC4L;
                        int16_t l_128 = 0x6E54L;
                        int32_t l_129 = 0x2A7700A2L;
                        uint32_t l_130 = 0x695F44C7L;
                        int8_t l_131 = (-1L);
                        int64_t l_132 = 0x417E047DFEB8C283L;
                        VECTOR(int32_t, 4) l_133 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L);
                        int i;
                        for (i = 0; i < 2; i++)
                            l_124[i] = &l_125;
                        l_123 |= l_122;
                        l_126 = l_124[1];
                        l_131 = (l_130 ^= (l_129 = (l_127 , l_128)));
                        l_133.z ^= l_132;
                    }
                    l_135 |= l_134;
                    for (l_109 = 0; (l_109 > (-30)); l_109 = safe_sub_func_uint8_t_u_u(l_109, 6))
                    { /* block id: 65 */
                        uint8_t l_138 = 0x0EL;
                        l_138 ^= 0x33B56967L;
                    }
                    l_142 = (l_139 , l_140);
                    unsigned int result = 0;
                    result += l_109;
                    result += l_134;
                    result += l_135;
                    result += l_139;
                    result += l_141;
                    atomic_add(&p_626->l_special_values[29], result);
                }
                else
                { /* block id: 69 */
                    (1 + 1);
                }
            }
            if ((*p_52))
                continue;
        }
    }
    for (p_51 = 0; (p_51 == 21); p_51 = safe_add_func_uint8_t_u_u(p_51, 1))
    { /* block id: 78 */
        union U0 *l_149 = &p_626->g_150;
        union U0 **l_151 = &l_149;
        for (p_626->g_73 = (-5); (p_626->g_73 <= 45); p_626->g_73 = safe_add_func_uint8_t_u_u(p_626->g_73, 1))
        { /* block id: 81 */
            (*p_52) |= (l_148 = (p_626->g_91[4][2] < (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_147.s1101070030437077)).even)).s7 && p_626->g_87.s7)));
        }
        (*l_151) = l_149;
    }
    return &p_626->g_55[6];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[73];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 73; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[73];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 73; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[80];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 80; i++)
            l_comm_values[i] = 1;
    struct S2 c_627;
    struct S2* p_626 = &c_627;
    struct S2 c_628 = {
        {0x6D20A2E7L,0x6D20A2E7L,0x6D20A2E7L,0x6D20A2E7L,0x6D20A2E7L,0x6D20A2E7L,0x6D20A2E7L,0x6D20A2E7L,0x6D20A2E7L}, // p_626->g_55
        {{&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4]},{&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4]},{&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4],&p_626->g_55[4]}}, // p_626->g_54
        {{{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}}},{{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}}},{{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}}},{{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}}},{{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}}},{{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}}},{{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}}},{{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}}},{{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}},{{-5L},{0x39976036L},{0L},{0x1FB133D7L}}}}, // p_626->g_69
        {{{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL}},{{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL}},{{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL}},{{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL},{6UL,65535UL,65535UL}}}, // p_626->g_71
        0x53368A3BL, // p_626->g_73
        0x0F66BB0FL, // p_626->g_75
        (VECTOR(int16_t, 8))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x2C59L), 0x2C59L), 0x2C59L, 7L, 0x2C59L), // p_626->g_87
        {{(-5L),(-5L),1L},{(-5L),(-5L),1L},{(-5L),(-5L),1L},{(-5L),(-5L),1L},{(-5L),(-5L),1L}}, // p_626->g_91
        {-2L}, // p_626->g_150
        0x32L, // p_626->g_159
        &p_626->g_54[0][5], // p_626->g_160
        (VECTOR(uint16_t, 8))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0xE584L), 0xE584L), 0xE584L, 65529UL, 0xE584L), // p_626->g_166
        (VECTOR(uint16_t, 8))(0xE2A7L, (VECTOR(uint16_t, 4))(0xE2A7L, (VECTOR(uint16_t, 2))(0xE2A7L, 0xD436L), 0xD436L), 0xD436L, 0xE2A7L, 0xD436L), // p_626->g_167
        (VECTOR(int8_t, 16))(0x42L, (VECTOR(int8_t, 4))(0x42L, (VECTOR(int8_t, 2))(0x42L, 6L), 6L), 6L, 0x42L, 6L, (VECTOR(int8_t, 2))(0x42L, 6L), (VECTOR(int8_t, 2))(0x42L, 6L), 0x42L, 6L, 0x42L, 6L), // p_626->g_173
        (-8L), // p_626->g_175
        &p_626->g_54[2][6], // p_626->g_177
        (void*)0, // p_626->g_179
        {{0x6D446BF5L},{0x6D446BF5L},{0x6D446BF5L}}, // p_626->g_183
        (void*)0, // p_626->g_186
        &p_626->g_54[2][6], // p_626->g_187
        0x9B53F0AEL, // p_626->g_201
        &p_626->g_54[1][5], // p_626->g_224
        (void*)0, // p_626->g_227
        0UL, // p_626->g_242
        {1L,1L,1L,1L,1L,1L}, // p_626->g_267
        (VECTOR(uint32_t, 16))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967288UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967288UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967288UL, 4294967295UL), 4294967288UL, 4294967295UL, 4294967288UL, 4294967295UL), // p_626->g_294
        (VECTOR(uint64_t, 2))(0xE3F2E614814FC1EBL, 0UL), // p_626->g_304
        (VECTOR(uint64_t, 2))(0x6861AB3F0FD0DADBL, 0xD1B6C724B2485EE6L), // p_626->g_310
        (void*)0, // p_626->g_313
        (VECTOR(uint32_t, 2))(0x250EAFDDL, 0x35D0B070L), // p_626->g_330
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x2DL), 0x2DL), // p_626->g_331
        {{{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}}},{{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}}},{{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}}},{{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}}},{{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}}},{{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}}},{{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}},{{0x70F10777FDD7758BL},{0x7C6CCAD6F9B76405L},{-1L},{0x63BD6451CC23A81BL},{0x62C9CAB9FE2A5CB4L},{0x381689C62AA49254L},{0x381689C62AA49254L},{0x62C9CAB9FE2A5CB4L}}}}, // p_626->g_350
        (VECTOR(int8_t, 8))(0x3EL, (VECTOR(int8_t, 4))(0x3EL, (VECTOR(int8_t, 2))(0x3EL, 2L), 2L), 2L, 0x3EL, 2L), // p_626->g_380
        (VECTOR(uint8_t, 4))(0x7AL, (VECTOR(uint8_t, 2))(0x7AL, 1UL), 1UL), // p_626->g_381
        0xB4C8C2C4L, // p_626->g_404
        0x7E28L, // p_626->g_438
        0xC37453181BFDBF40L, // p_626->g_454
        (VECTOR(uint16_t, 4))(0x1D4CL, (VECTOR(uint16_t, 2))(0x1D4CL, 0UL), 0UL), // p_626->g_463
        {{{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201}},{{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201}},{{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201}},{{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201}},{{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201}},{{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201},{&p_626->g_201,&p_626->g_201,&p_626->g_201,&p_626->g_201}}}, // p_626->g_488
        &p_626->g_488[5][0][3], // p_626->g_487
        (VECTOR(uint64_t, 4))(0x6AB2E2010DC4C360L, (VECTOR(uint64_t, 2))(0x6AB2E2010DC4C360L, 18446744073709551614UL), 18446744073709551614UL), // p_626->g_499
        (void*)0, // p_626->g_501
        (VECTOR(int64_t, 4))(0x49C85B3F388407C3L, (VECTOR(int64_t, 2))(0x49C85B3F388407C3L, 4L), 4L), // p_626->g_504
        5L, // p_626->g_513
        (VECTOR(uint16_t, 4))(0x5D00L, (VECTOR(uint16_t, 2))(0x5D00L, 0x3513L), 0x3513L), // p_626->g_519
        (VECTOR(int16_t, 4))(0x4EE7L, (VECTOR(int16_t, 2))(0x4EE7L, 0x7FB8L), 0x7FB8L), // p_626->g_521
        (VECTOR(uint32_t, 8))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 0UL), 0UL), 0UL, 8UL, 0UL), // p_626->g_528
        (void*)0, // p_626->g_532
        0UL, // p_626->g_539
        (VECTOR(uint16_t, 16))(0xCAEBL, (VECTOR(uint16_t, 4))(0xCAEBL, (VECTOR(uint16_t, 2))(0xCAEBL, 7UL), 7UL), 7UL, 0xCAEBL, 7UL, (VECTOR(uint16_t, 2))(0xCAEBL, 7UL), (VECTOR(uint16_t, 2))(0xCAEBL, 7UL), 0xCAEBL, 7UL, 0xCAEBL, 7UL), // p_626->g_548
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967293UL), 4294967293UL), 4294967293UL, 0UL, 4294967293UL, (VECTOR(uint32_t, 2))(0UL, 4294967293UL), (VECTOR(uint32_t, 2))(0UL, 4294967293UL), 0UL, 4294967293UL, 0UL, 4294967293UL), // p_626->g_555
        {0x1EAEA945B364328CL}, // p_626->g_581
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x6500L), 0x6500L), 0x6500L, 1L, 0x6500L), // p_626->g_608
        (VECTOR(int16_t, 4))(0x0923L, (VECTOR(int16_t, 2))(0x0923L, 0L), 0L), // p_626->g_610
        &p_626->g_179, // p_626->g_620
        0, // p_626->v_collective
        sequence_input[get_global_id(0)], // p_626->global_0_offset
        sequence_input[get_global_id(1)], // p_626->global_1_offset
        sequence_input[get_global_id(2)], // p_626->global_2_offset
        sequence_input[get_local_id(0)], // p_626->local_0_offset
        sequence_input[get_local_id(1)], // p_626->local_1_offset
        sequence_input[get_local_id(2)], // p_626->local_2_offset
        sequence_input[get_group_id(0)], // p_626->group_0_offset
        sequence_input[get_group_id(1)], // p_626->group_1_offset
        sequence_input[get_group_id(2)], // p_626->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 80)), permutations[0][get_linear_local_id()])), // p_626->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_627 = c_628;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_626);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_626->g_55[i], "p_626->g_55[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_626->g_69[i][j][k].f0, "p_626->g_69[i][j][k].f0", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_626->g_71[i][j][k], "p_626->g_71[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_626->g_73, "p_626->g_73", print_hash_value);
    transparent_crc(p_626->g_75, "p_626->g_75", print_hash_value);
    transparent_crc(p_626->g_87.s0, "p_626->g_87.s0", print_hash_value);
    transparent_crc(p_626->g_87.s1, "p_626->g_87.s1", print_hash_value);
    transparent_crc(p_626->g_87.s2, "p_626->g_87.s2", print_hash_value);
    transparent_crc(p_626->g_87.s3, "p_626->g_87.s3", print_hash_value);
    transparent_crc(p_626->g_87.s4, "p_626->g_87.s4", print_hash_value);
    transparent_crc(p_626->g_87.s5, "p_626->g_87.s5", print_hash_value);
    transparent_crc(p_626->g_87.s6, "p_626->g_87.s6", print_hash_value);
    transparent_crc(p_626->g_87.s7, "p_626->g_87.s7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_626->g_91[i][j], "p_626->g_91[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_626->g_150.f2, "p_626->g_150.f2", print_hash_value);
    transparent_crc(p_626->g_159, "p_626->g_159", print_hash_value);
    transparent_crc(p_626->g_166.s0, "p_626->g_166.s0", print_hash_value);
    transparent_crc(p_626->g_166.s1, "p_626->g_166.s1", print_hash_value);
    transparent_crc(p_626->g_166.s2, "p_626->g_166.s2", print_hash_value);
    transparent_crc(p_626->g_166.s3, "p_626->g_166.s3", print_hash_value);
    transparent_crc(p_626->g_166.s4, "p_626->g_166.s4", print_hash_value);
    transparent_crc(p_626->g_166.s5, "p_626->g_166.s5", print_hash_value);
    transparent_crc(p_626->g_166.s6, "p_626->g_166.s6", print_hash_value);
    transparent_crc(p_626->g_166.s7, "p_626->g_166.s7", print_hash_value);
    transparent_crc(p_626->g_167.s0, "p_626->g_167.s0", print_hash_value);
    transparent_crc(p_626->g_167.s1, "p_626->g_167.s1", print_hash_value);
    transparent_crc(p_626->g_167.s2, "p_626->g_167.s2", print_hash_value);
    transparent_crc(p_626->g_167.s3, "p_626->g_167.s3", print_hash_value);
    transparent_crc(p_626->g_167.s4, "p_626->g_167.s4", print_hash_value);
    transparent_crc(p_626->g_167.s5, "p_626->g_167.s5", print_hash_value);
    transparent_crc(p_626->g_167.s6, "p_626->g_167.s6", print_hash_value);
    transparent_crc(p_626->g_167.s7, "p_626->g_167.s7", print_hash_value);
    transparent_crc(p_626->g_173.s0, "p_626->g_173.s0", print_hash_value);
    transparent_crc(p_626->g_173.s1, "p_626->g_173.s1", print_hash_value);
    transparent_crc(p_626->g_173.s2, "p_626->g_173.s2", print_hash_value);
    transparent_crc(p_626->g_173.s3, "p_626->g_173.s3", print_hash_value);
    transparent_crc(p_626->g_173.s4, "p_626->g_173.s4", print_hash_value);
    transparent_crc(p_626->g_173.s5, "p_626->g_173.s5", print_hash_value);
    transparent_crc(p_626->g_173.s6, "p_626->g_173.s6", print_hash_value);
    transparent_crc(p_626->g_173.s7, "p_626->g_173.s7", print_hash_value);
    transparent_crc(p_626->g_173.s8, "p_626->g_173.s8", print_hash_value);
    transparent_crc(p_626->g_173.s9, "p_626->g_173.s9", print_hash_value);
    transparent_crc(p_626->g_173.sa, "p_626->g_173.sa", print_hash_value);
    transparent_crc(p_626->g_173.sb, "p_626->g_173.sb", print_hash_value);
    transparent_crc(p_626->g_173.sc, "p_626->g_173.sc", print_hash_value);
    transparent_crc(p_626->g_173.sd, "p_626->g_173.sd", print_hash_value);
    transparent_crc(p_626->g_173.se, "p_626->g_173.se", print_hash_value);
    transparent_crc(p_626->g_173.sf, "p_626->g_173.sf", print_hash_value);
    transparent_crc(p_626->g_175, "p_626->g_175", print_hash_value);
    transparent_crc(p_626->g_201, "p_626->g_201", print_hash_value);
    transparent_crc(p_626->g_242, "p_626->g_242", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_626->g_267[i], "p_626->g_267[i]", print_hash_value);

    }
    transparent_crc(p_626->g_294.s0, "p_626->g_294.s0", print_hash_value);
    transparent_crc(p_626->g_294.s1, "p_626->g_294.s1", print_hash_value);
    transparent_crc(p_626->g_294.s2, "p_626->g_294.s2", print_hash_value);
    transparent_crc(p_626->g_294.s3, "p_626->g_294.s3", print_hash_value);
    transparent_crc(p_626->g_294.s4, "p_626->g_294.s4", print_hash_value);
    transparent_crc(p_626->g_294.s5, "p_626->g_294.s5", print_hash_value);
    transparent_crc(p_626->g_294.s6, "p_626->g_294.s6", print_hash_value);
    transparent_crc(p_626->g_294.s7, "p_626->g_294.s7", print_hash_value);
    transparent_crc(p_626->g_294.s8, "p_626->g_294.s8", print_hash_value);
    transparent_crc(p_626->g_294.s9, "p_626->g_294.s9", print_hash_value);
    transparent_crc(p_626->g_294.sa, "p_626->g_294.sa", print_hash_value);
    transparent_crc(p_626->g_294.sb, "p_626->g_294.sb", print_hash_value);
    transparent_crc(p_626->g_294.sc, "p_626->g_294.sc", print_hash_value);
    transparent_crc(p_626->g_294.sd, "p_626->g_294.sd", print_hash_value);
    transparent_crc(p_626->g_294.se, "p_626->g_294.se", print_hash_value);
    transparent_crc(p_626->g_294.sf, "p_626->g_294.sf", print_hash_value);
    transparent_crc(p_626->g_304.x, "p_626->g_304.x", print_hash_value);
    transparent_crc(p_626->g_304.y, "p_626->g_304.y", print_hash_value);
    transparent_crc(p_626->g_310.x, "p_626->g_310.x", print_hash_value);
    transparent_crc(p_626->g_310.y, "p_626->g_310.y", print_hash_value);
    transparent_crc(p_626->g_330.x, "p_626->g_330.x", print_hash_value);
    transparent_crc(p_626->g_330.y, "p_626->g_330.y", print_hash_value);
    transparent_crc(p_626->g_331.x, "p_626->g_331.x", print_hash_value);
    transparent_crc(p_626->g_331.y, "p_626->g_331.y", print_hash_value);
    transparent_crc(p_626->g_331.z, "p_626->g_331.z", print_hash_value);
    transparent_crc(p_626->g_331.w, "p_626->g_331.w", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_626->g_350[i][j][k].f0, "p_626->g_350[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_626->g_380.s0, "p_626->g_380.s0", print_hash_value);
    transparent_crc(p_626->g_380.s1, "p_626->g_380.s1", print_hash_value);
    transparent_crc(p_626->g_380.s2, "p_626->g_380.s2", print_hash_value);
    transparent_crc(p_626->g_380.s3, "p_626->g_380.s3", print_hash_value);
    transparent_crc(p_626->g_380.s4, "p_626->g_380.s4", print_hash_value);
    transparent_crc(p_626->g_380.s5, "p_626->g_380.s5", print_hash_value);
    transparent_crc(p_626->g_380.s6, "p_626->g_380.s6", print_hash_value);
    transparent_crc(p_626->g_380.s7, "p_626->g_380.s7", print_hash_value);
    transparent_crc(p_626->g_381.x, "p_626->g_381.x", print_hash_value);
    transparent_crc(p_626->g_381.y, "p_626->g_381.y", print_hash_value);
    transparent_crc(p_626->g_381.z, "p_626->g_381.z", print_hash_value);
    transparent_crc(p_626->g_381.w, "p_626->g_381.w", print_hash_value);
    transparent_crc(p_626->g_404, "p_626->g_404", print_hash_value);
    transparent_crc(p_626->g_438, "p_626->g_438", print_hash_value);
    transparent_crc(p_626->g_454, "p_626->g_454", print_hash_value);
    transparent_crc(p_626->g_463.x, "p_626->g_463.x", print_hash_value);
    transparent_crc(p_626->g_463.y, "p_626->g_463.y", print_hash_value);
    transparent_crc(p_626->g_463.z, "p_626->g_463.z", print_hash_value);
    transparent_crc(p_626->g_463.w, "p_626->g_463.w", print_hash_value);
    transparent_crc(p_626->g_499.x, "p_626->g_499.x", print_hash_value);
    transparent_crc(p_626->g_499.y, "p_626->g_499.y", print_hash_value);
    transparent_crc(p_626->g_499.z, "p_626->g_499.z", print_hash_value);
    transparent_crc(p_626->g_499.w, "p_626->g_499.w", print_hash_value);
    transparent_crc(p_626->g_504.x, "p_626->g_504.x", print_hash_value);
    transparent_crc(p_626->g_504.y, "p_626->g_504.y", print_hash_value);
    transparent_crc(p_626->g_504.z, "p_626->g_504.z", print_hash_value);
    transparent_crc(p_626->g_504.w, "p_626->g_504.w", print_hash_value);
    transparent_crc(p_626->g_513, "p_626->g_513", print_hash_value);
    transparent_crc(p_626->g_519.x, "p_626->g_519.x", print_hash_value);
    transparent_crc(p_626->g_519.y, "p_626->g_519.y", print_hash_value);
    transparent_crc(p_626->g_519.z, "p_626->g_519.z", print_hash_value);
    transparent_crc(p_626->g_519.w, "p_626->g_519.w", print_hash_value);
    transparent_crc(p_626->g_521.x, "p_626->g_521.x", print_hash_value);
    transparent_crc(p_626->g_521.y, "p_626->g_521.y", print_hash_value);
    transparent_crc(p_626->g_521.z, "p_626->g_521.z", print_hash_value);
    transparent_crc(p_626->g_521.w, "p_626->g_521.w", print_hash_value);
    transparent_crc(p_626->g_528.s0, "p_626->g_528.s0", print_hash_value);
    transparent_crc(p_626->g_528.s1, "p_626->g_528.s1", print_hash_value);
    transparent_crc(p_626->g_528.s2, "p_626->g_528.s2", print_hash_value);
    transparent_crc(p_626->g_528.s3, "p_626->g_528.s3", print_hash_value);
    transparent_crc(p_626->g_528.s4, "p_626->g_528.s4", print_hash_value);
    transparent_crc(p_626->g_528.s5, "p_626->g_528.s5", print_hash_value);
    transparent_crc(p_626->g_528.s6, "p_626->g_528.s6", print_hash_value);
    transparent_crc(p_626->g_528.s7, "p_626->g_528.s7", print_hash_value);
    transparent_crc(p_626->g_539, "p_626->g_539", print_hash_value);
    transparent_crc(p_626->g_548.s0, "p_626->g_548.s0", print_hash_value);
    transparent_crc(p_626->g_548.s1, "p_626->g_548.s1", print_hash_value);
    transparent_crc(p_626->g_548.s2, "p_626->g_548.s2", print_hash_value);
    transparent_crc(p_626->g_548.s3, "p_626->g_548.s3", print_hash_value);
    transparent_crc(p_626->g_548.s4, "p_626->g_548.s4", print_hash_value);
    transparent_crc(p_626->g_548.s5, "p_626->g_548.s5", print_hash_value);
    transparent_crc(p_626->g_548.s6, "p_626->g_548.s6", print_hash_value);
    transparent_crc(p_626->g_548.s7, "p_626->g_548.s7", print_hash_value);
    transparent_crc(p_626->g_548.s8, "p_626->g_548.s8", print_hash_value);
    transparent_crc(p_626->g_548.s9, "p_626->g_548.s9", print_hash_value);
    transparent_crc(p_626->g_548.sa, "p_626->g_548.sa", print_hash_value);
    transparent_crc(p_626->g_548.sb, "p_626->g_548.sb", print_hash_value);
    transparent_crc(p_626->g_548.sc, "p_626->g_548.sc", print_hash_value);
    transparent_crc(p_626->g_548.sd, "p_626->g_548.sd", print_hash_value);
    transparent_crc(p_626->g_548.se, "p_626->g_548.se", print_hash_value);
    transparent_crc(p_626->g_548.sf, "p_626->g_548.sf", print_hash_value);
    transparent_crc(p_626->g_555.s0, "p_626->g_555.s0", print_hash_value);
    transparent_crc(p_626->g_555.s1, "p_626->g_555.s1", print_hash_value);
    transparent_crc(p_626->g_555.s2, "p_626->g_555.s2", print_hash_value);
    transparent_crc(p_626->g_555.s3, "p_626->g_555.s3", print_hash_value);
    transparent_crc(p_626->g_555.s4, "p_626->g_555.s4", print_hash_value);
    transparent_crc(p_626->g_555.s5, "p_626->g_555.s5", print_hash_value);
    transparent_crc(p_626->g_555.s6, "p_626->g_555.s6", print_hash_value);
    transparent_crc(p_626->g_555.s7, "p_626->g_555.s7", print_hash_value);
    transparent_crc(p_626->g_555.s8, "p_626->g_555.s8", print_hash_value);
    transparent_crc(p_626->g_555.s9, "p_626->g_555.s9", print_hash_value);
    transparent_crc(p_626->g_555.sa, "p_626->g_555.sa", print_hash_value);
    transparent_crc(p_626->g_555.sb, "p_626->g_555.sb", print_hash_value);
    transparent_crc(p_626->g_555.sc, "p_626->g_555.sc", print_hash_value);
    transparent_crc(p_626->g_555.sd, "p_626->g_555.sd", print_hash_value);
    transparent_crc(p_626->g_555.se, "p_626->g_555.se", print_hash_value);
    transparent_crc(p_626->g_555.sf, "p_626->g_555.sf", print_hash_value);
    transparent_crc(p_626->g_581.f0, "p_626->g_581.f0", print_hash_value);
    transparent_crc(p_626->g_608.s0, "p_626->g_608.s0", print_hash_value);
    transparent_crc(p_626->g_608.s1, "p_626->g_608.s1", print_hash_value);
    transparent_crc(p_626->g_608.s2, "p_626->g_608.s2", print_hash_value);
    transparent_crc(p_626->g_608.s3, "p_626->g_608.s3", print_hash_value);
    transparent_crc(p_626->g_608.s4, "p_626->g_608.s4", print_hash_value);
    transparent_crc(p_626->g_608.s5, "p_626->g_608.s5", print_hash_value);
    transparent_crc(p_626->g_608.s6, "p_626->g_608.s6", print_hash_value);
    transparent_crc(p_626->g_608.s7, "p_626->g_608.s7", print_hash_value);
    transparent_crc(p_626->g_610.x, "p_626->g_610.x", print_hash_value);
    transparent_crc(p_626->g_610.y, "p_626->g_610.y", print_hash_value);
    transparent_crc(p_626->g_610.z, "p_626->g_610.z", print_hash_value);
    transparent_crc(p_626->g_610.w, "p_626->g_610.w", print_hash_value);
    transparent_crc(p_626->v_collective, "p_626->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 73; i++)
            transparent_crc(p_626->g_special_values[i + 73 * get_linear_group_id()], "p_626->g_special_values[i + 73 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 73; i++)
            transparent_crc(p_626->l_special_values[i], "p_626->l_special_values[i]", print_hash_value);
    transparent_crc(p_626->l_comm_values[get_linear_local_id()], "p_626->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_626->g_comm_values[get_linear_group_id() * 80 + get_linear_local_id()], "p_626->g_comm_values[get_linear_group_id() * 80 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
