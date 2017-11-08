// --atomics 61 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 22,31,7 -l 2,1,1
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

// Seed: 2743200715

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   int64_t  f1;
};

union U1 {
   uint64_t  f0;
};

struct S2 {
    int32_t g_15[9];
    int32_t g_27;
    int32_t * volatile g_31;
    int8_t g_38;
    int8_t *g_37;
    int32_t * volatile g_43[4][10];
    uint32_t g_58;
    int32_t g_68[10];
    int32_t *g_91[7][4][6];
    int32_t ** volatile g_90;
    int32_t * volatile g_141;
    volatile VECTOR(uint64_t, 8) g_156;
    volatile VECTOR(uint64_t, 8) g_157;
    VECTOR(uint64_t, 4) g_159;
    uint8_t g_169;
    int16_t g_171;
    int32_t g_173;
    int32_t g_184[7];
    int32_t *g_183;
    uint16_t g_201[2];
    VECTOR(uint8_t, 8) g_212;
    volatile VECTOR(uint8_t, 2) g_213;
    VECTOR(uint8_t, 2) g_214;
    VECTOR(int8_t, 16) g_216;
    volatile union U0 g_238;
    int8_t g_261[9];
    volatile VECTOR(int64_t, 8) g_343;
    int32_t g_364;
    int32_t *g_387;
    volatile VECTOR(int32_t, 16) g_388;
    volatile VECTOR(int32_t, 16) g_390;
    union U0 g_441;
    int32_t *g_444;
    int32_t * volatile *g_443;
    VECTOR(int32_t, 4) g_446;
    volatile VECTOR(uint32_t, 16) g_453;
    union U1 g_468;
    int32_t g_482;
    int32_t *g_481;
    int32_t ** volatile g_487;
    int32_t ** volatile g_488;
    VECTOR(uint16_t, 4) g_493;
    int32_t g_503;
    VECTOR(int8_t, 4) g_511;
    volatile VECTOR(int8_t, 8) g_512;
    int8_t g_533;
    uint64_t g_544;
    union U1 *g_551[7];
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
int32_t  func_1(struct S2 * p_560);
union U0  func_2(union U1  p_3, int64_t  p_4, int32_t  p_5, int64_t  p_6, struct S2 * p_560);
union U1  func_7(union U1  p_8, struct S2 * p_560);
union U1  func_9(uint32_t  p_10, int32_t  p_11, uint16_t  p_12, struct S2 * p_560);
int64_t  func_16(uint16_t  p_17, int32_t * p_18, struct S2 * p_560);
int32_t * func_19(int8_t  p_20, struct S2 * p_560);
int32_t * func_32(int8_t * p_33, int32_t * p_34, struct S2 * p_560);
int8_t * func_35(int8_t * p_36, struct S2 * p_560);
int32_t * func_46(uint64_t  p_47, struct S2 * p_560);
int32_t  func_51(uint32_t  p_52, struct S2 * p_560);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_560->l_comm_values p_560->g_31 p_560->g_15 p_560->g_387 p_560->g_183 p_560->g_184 p_560->g_390 p_560->g_488 p_560->g_441.f0 p_560->g_493 p_560->g_37 p_560->g_38 p_560->g_503 p_560->g_388 p_560->g_481 p_560->g_482 p_560->g_511 p_560->g_512 p_560->g_212 p_560->g_68 p_560->g_201 p_560->g_27 p_560->g_468 p_560->g_544 p_560->g_441
 * writes: p_560->g_15 p_560->g_27 p_560->g_184 p_560->g_91 p_560->g_441.f0 p_560->g_503 p_560->g_482 p_560->g_551
 */
int32_t  func_1(struct S2 * p_560)
{ /* block id: 4 */
    int64_t l_13[10][8] = {{0L,0x1A5A165F5C9B8DB3L,1L,1L,0L,9L,0x1A5A165F5C9B8DB3L,0L},{0L,0x1A5A165F5C9B8DB3L,1L,1L,0L,9L,0x1A5A165F5C9B8DB3L,0L},{0L,0x1A5A165F5C9B8DB3L,1L,1L,0L,9L,0x1A5A165F5C9B8DB3L,0L},{0L,0x1A5A165F5C9B8DB3L,1L,1L,0L,9L,0x1A5A165F5C9B8DB3L,0L},{0L,0x1A5A165F5C9B8DB3L,1L,1L,0L,9L,0x1A5A165F5C9B8DB3L,0L},{0L,0x1A5A165F5C9B8DB3L,1L,1L,0L,9L,0x1A5A165F5C9B8DB3L,0L},{0L,0x1A5A165F5C9B8DB3L,1L,1L,0L,9L,0x1A5A165F5C9B8DB3L,0L},{0L,0x1A5A165F5C9B8DB3L,1L,1L,0L,9L,0x1A5A165F5C9B8DB3L,0L},{0L,0x1A5A165F5C9B8DB3L,1L,1L,0L,9L,0x1A5A165F5C9B8DB3L,0L},{0L,0x1A5A165F5C9B8DB3L,1L,1L,0L,9L,0x1A5A165F5C9B8DB3L,0L}};
    int32_t *l_14 = &p_560->g_15[2];
    uint16_t l_539 = 0x0DBEL;
    int16_t l_548 = 9L;
    union U1 *l_550 = (void*)0;
    uint64_t l_557 = 0x71729133904F9896L;
    int i, j;
    if ((((*l_14) = (func_2(func_7(func_9(p_560->l_comm_values[(safe_mod_func_uint32_t_u_u(p_560->tid, 2))], (l_13[9][3] , ((*l_14) = l_13[9][3])), p_560->l_comm_values[(safe_mod_func_uint32_t_u_u(p_560->tid, 2))], p_560), p_560), ((((safe_lshift_func_int8_t_s_u((l_539 , ((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((((*p_560->g_37) <= 255UL) , 0x23FC6351L), p_560->g_493.w)), 11)) && p_560->g_212.s5)), 5)) , p_560->g_201[1]) , 9UL) <= 0x0BB09BDF68FD7355L), p_560->g_544, l_539, p_560) , l_548)) < 0x61973A50L))
    { /* block id: 235 */
        uint32_t l_549 = 0x575D2A00L;
        return l_549;
    }
    else
    { /* block id: 237 */
        int32_t *l_552 = &p_560->g_68[6];
        int32_t *l_553 = &p_560->g_68[6];
        int32_t *l_554 = &p_560->g_27;
        int32_t *l_555 = &p_560->g_184[1];
        int32_t *l_556[4];
        int i;
        for (i = 0; i < 4; i++)
            l_556[i] = &p_560->g_184[0];
        p_560->g_551[3] = l_550;
        (*l_14) = 5L;
        l_557--;
    }
    return (*l_14);
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_441
 * writes:
 */
union U0  func_2(union U1  p_3, int64_t  p_4, int32_t  p_5, int64_t  p_6, struct S2 * p_560)
{ /* block id: 231 */
    uint32_t l_545 = 0xF9F0DEF8L;
    l_545++;
    return p_560->g_441;
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_511 p_560->g_512 p_560->g_212 p_560->g_68 p_560->g_482 p_560->g_201 p_560->g_184 p_560->g_27 p_560->g_468
 * writes:
 */
union U1  func_7(union U1  p_8, struct S2 * p_560)
{ /* block id: 227 */
    uint16_t l_508 = 0xFB5CL;
    VECTOR(int8_t, 8) l_513 = (VECTOR(int8_t, 8))(0x30L, (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 0x5DL), 0x5DL), 0x5DL, 0x30L, 0x5DL);
    VECTOR(int8_t, 16) l_514 = (VECTOR(int8_t, 16))(0x41L, (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, (-1L)), (-1L)), (-1L), 0x41L, (-1L), (VECTOR(int8_t, 2))(0x41L, (-1L)), (VECTOR(int8_t, 2))(0x41L, (-1L)), 0x41L, (-1L), 0x41L, (-1L));
    VECTOR(int8_t, 16) l_515 = (VECTOR(int8_t, 16))(0x4DL, (VECTOR(int8_t, 4))(0x4DL, (VECTOR(int8_t, 2))(0x4DL, 0x4BL), 0x4BL), 0x4BL, 0x4DL, 0x4BL, (VECTOR(int8_t, 2))(0x4DL, 0x4BL), (VECTOR(int8_t, 2))(0x4DL, 0x4BL), 0x4DL, 0x4BL, 0x4DL, 0x4BL);
    int16_t l_530 = (-5L);
    int32_t l_531[5];
    int32_t *l_532[6][4] = {{&p_560->g_482,&l_531[2],&l_531[2],&p_560->g_482},{&p_560->g_482,&l_531[2],&l_531[2],&p_560->g_482},{&p_560->g_482,&l_531[2],&l_531[2],&p_560->g_482},{&p_560->g_482,&l_531[2],&l_531[2],&p_560->g_482},{&p_560->g_482,&l_531[2],&l_531[2],&p_560->g_482},{&p_560->g_482,&l_531[2],&l_531[2],&p_560->g_482}};
    VECTOR(uint16_t, 4) l_534 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65531UL), 65531UL);
    int i, j;
    for (i = 0; i < 5; i++)
        l_531[i] = 0x5D829721L;
    l_531[1] &= (((((((l_508 | (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(p_560->g_511.wz)).yxyxxyyxyyyyxxyy, ((VECTOR(int8_t, 8))(p_560->g_512.s14550303)).s2331663154373274, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 2))(l_513.s62)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_514.s9b)).yxyxxyxy)).s5156260141516011)).s50, ((VECTOR(int8_t, 16))(l_515.s80e968d1d730281e)).sa5))).yxyxxxxxyxyyxyyx))).s5, l_514.sd))) && (safe_lshift_func_uint8_t_u_u(l_513.s0, 0))) | (safe_lshift_func_uint16_t_u_s(65531UL, ((safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(p_560->g_212.s7, (((((safe_add_func_uint32_t_u_u((p_8.f0 & 0x4AC9CD9E6D22AD18L), (((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0x5AD1L, (safe_rshift_func_uint8_t_u_u((p_560->g_68[6] , ((4294967295UL & 7UL) >= 0x4EE2L)), 3)), p_560->g_482, ((VECTOR(int16_t, 2))(8L)), l_513.s0, 1L, p_560->g_201[0], 0x4247L, ((VECTOR(int16_t, 2))(0x73D5L)), ((VECTOR(int16_t, 2))(9L)), ((VECTOR(int16_t, 2))((-5L))), (-1L))).even)).s1301224275104413, ((VECTOR(uint16_t, 16))(0UL))))).s5 | p_8.f0))) < (-1L)) <= l_508) && p_560->g_184[6]) == 0x2500CD77L))), l_530)), p_560->g_27)) != l_515.s4)))) && p_560->g_201[0]) < 0L) != l_514.sd) , l_508);
    l_534.z++;
    return p_560->g_468;
}


/* ------------------------------------------ */
/* 
 * reads : p_560->l_comm_values p_560->g_31 p_560->g_15 p_560->g_387 p_560->g_183 p_560->g_184 p_560->g_390 p_560->g_488 p_560->g_441.f0 p_560->g_493 p_560->g_37 p_560->g_38 p_560->g_503 p_560->g_388 p_560->g_481 p_560->g_482
 * writes: p_560->g_27 p_560->g_15 p_560->g_184 p_560->g_91 p_560->g_441.f0 p_560->g_503 p_560->g_482
 */
union U1  func_9(uint32_t  p_10, int32_t  p_11, uint16_t  p_12, struct S2 * p_560)
{ /* block id: 6 */
    VECTOR(int8_t, 8) l_21 = (VECTOR(int8_t, 8))(0x1AL, (VECTOR(int8_t, 4))(0x1AL, (VECTOR(int8_t, 2))(0x1AL, 0x19L), 0x19L), 0x19L, 0x1AL, 0x19L);
    VECTOR(int8_t, 2) l_22 = (VECTOR(int8_t, 2))(0x46L, (-3L));
    int8_t *l_23[10][6][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int32_t l_24[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
    VECTOR(int16_t, 4) l_492 = (VECTOR(int16_t, 4))(0x433BL, (VECTOR(int16_t, 2))(0x433BL, 0x29B3L), 0x29B3L);
    int32_t *l_502 = &p_560->g_503;
    uint16_t l_504 = 0x441AL;
    union U1 l_507[8] = {{0x93ED4A91E3E66523L},{0x93ED4A91E3E66523L},{0x93ED4A91E3E66523L},{0x93ED4A91E3E66523L},{0x93ED4A91E3E66523L},{0x93ED4A91E3E66523L},{0x93ED4A91E3E66523L},{0x93ED4A91E3E66523L}};
    int i, j, k;
    (*p_560->g_481) &= ((func_16(p_560->l_comm_values[(safe_mod_func_uint32_t_u_u(p_560->tid, 2))], func_19((l_24[8] = ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(l_21.s1154)).even, ((VECTOR(int8_t, 2))(l_22.xx))))).xyxyyyxyxxxxyxxx)).s6), p_560), p_560) | l_22.x) , ((((((*l_502) |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(0x3ED8L, 7L)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x3C3FL, 2L)), (-1L), (-1L))))).wzzzwywzyzwxwwyx))))).s18, ((VECTOR(int16_t, 16))(l_492.zxyxwzzxzwwzyyzz)).sc1))), 0x41C3L, 0x0270L)).yywwyxxy, ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 8))(p_560->g_493.wxwzzwxz)).s5613306722517264, (uint16_t)(((VECTOR(uint16_t, 2))(0x5357L, 8UL)).hi , (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(250UL, (((safe_add_func_int64_t_s_s(l_492.x, (-2L))) >= (safe_lshift_func_uint8_t_u_s(1UL, (*p_560->g_37)))) , (*p_560->g_37)))), 247UL)))))).s12)), (uint16_t)l_492.y))).yxyyyxxx))).s1023075625215634))), ((VECTOR(int32_t, 16))((-1L))), ((VECTOR(int32_t, 16))(0x152882CFL))))).odd)).s4) , 247UL) , (-5L)) && 4294967288UL) > p_560->g_388.sc));
    l_504--;
    return l_507[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_390 p_560->g_183 p_560->g_184 p_560->g_488 p_560->g_441.f0
 * writes: p_560->g_184 p_560->g_91 p_560->g_441.f0
 */
int64_t  func_16(uint16_t  p_17, int32_t * p_18, struct S2 * p_560)
{ /* block id: 211 */
    if (((VECTOR(int32_t, 2))((-5L), 1L)).lo)
    { /* block id: 212 */
        int32_t *l_486 = &p_560->g_184[3];
        (*p_560->g_183) &= (safe_lshift_func_int16_t_s_u(p_560->g_390.s4, 13));
        (*p_560->g_488) = l_486;
    }
    else
    { /* block id: 215 */
        int16_t l_491 = (-1L);
        for (p_560->g_441.f0 = 15; (p_560->g_441.f0 > 43); p_560->g_441.f0 = safe_add_func_int32_t_s_s(p_560->g_441.f0, 6))
        { /* block id: 218 */
            return l_491;
        }
    }
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_31 p_560->g_15 p_560->g_387 p_560->g_183 p_560->g_184
 * writes: p_560->g_27 p_560->g_15 p_560->g_184
 */
int32_t * func_19(int8_t  p_20, struct S2 * p_560)
{ /* block id: 8 */
    int32_t *l_479 = (void*)0;
    int32_t *l_483 = &p_560->g_482;
    for (p_20 = 0; (p_20 < (-2)); p_20 = safe_sub_func_int8_t_s_s(p_20, 5))
    { /* block id: 11 */
        uint8_t l_30 = 0xFCL;
        int32_t **l_476 = (void*)0;
        int32_t **l_477 = &p_560->g_91[4][1][1];
        int32_t **l_478 = &p_560->g_183;
        int32_t **l_480[4] = {&l_479,&l_479,&l_479,&l_479};
        int i;
        for (p_560->g_27 = 0; (p_560->g_27 > 17); p_560->g_27 = safe_add_func_int8_t_s_s(p_560->g_27, 4))
        { /* block id: 14 */
            (*p_560->g_31) ^= (l_30 < p_20);
        }
    }
    (*p_560->g_183) &= ((*p_560->g_387) = p_20);
    return l_483;
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_38 p_560->g_156 p_560->g_183 p_560->g_37 p_560->g_173 p_560->g_201 p_560->g_212 p_560->g_213 p_560->g_214 p_560->g_216 p_560->g_184 p_560->g_169 p_560->g_68 p_560->g_157 p_560->g_238 p_560->g_171 p_560->g_261 p_560->g_15 p_560->g_238.f0 p_560->g_31 p_560->g_364 p_560->g_387 p_560->g_388 p_560->g_390 p_560->g_27 p_560->g_90 p_560->g_91 p_560->g_443 p_560->g_444 p_560->g_446 p_560->g_453 p_560->g_343 p_560->l_comm_values p_560->g_comm_values p_560->g_468
 * writes: p_560->g_38 p_560->g_58 p_560->g_171 p_560->g_184 p_560->g_173 p_560->g_183 p_560->g_201 p_560->g_68 p_560->g_216 p_560->g_169 p_560->g_15 p_560->g_364 p_560->g_91 p_560->g_443 p_560->g_444 p_560->g_comm_values
 */
int32_t * func_32(int8_t * p_33, int32_t * p_34, struct S2 * p_560)
{ /* block id: 97 */
    int32_t *l_207 = &p_560->g_184[0];
    int32_t l_251 = (-7L);
    int32_t l_257[8][10] = {{0x3195D9D1L,0L,0x15A85423L,7L,0x3195D9D1L,0x2B8E166FL,0L,0x135A29DEL,7L,0x2B8E166FL},{0x3195D9D1L,0L,0x15A85423L,7L,0x3195D9D1L,0x2B8E166FL,0L,0x135A29DEL,7L,0x2B8E166FL},{0x3195D9D1L,0L,0x15A85423L,7L,0x3195D9D1L,0x2B8E166FL,0L,0x135A29DEL,7L,0x2B8E166FL},{0x3195D9D1L,0L,0x15A85423L,7L,0x3195D9D1L,0x2B8E166FL,0L,0x135A29DEL,7L,0x2B8E166FL},{0x3195D9D1L,0L,0x15A85423L,7L,0x3195D9D1L,0x2B8E166FL,0L,0x135A29DEL,7L,0x2B8E166FL},{0x3195D9D1L,0L,0x15A85423L,7L,0x3195D9D1L,0x2B8E166FL,0L,0x135A29DEL,7L,0x2B8E166FL},{0x3195D9D1L,0L,0x15A85423L,7L,0x3195D9D1L,0x2B8E166FL,0L,0x135A29DEL,7L,0x2B8E166FL},{0x3195D9D1L,0L,0x15A85423L,7L,0x3195D9D1L,0x2B8E166FL,0L,0x135A29DEL,7L,0x2B8E166FL}};
    int64_t l_269 = 0x387591BBE33D9CB2L;
    VECTOR(uint16_t, 4) l_283 = (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0x1D52L), 0x1D52L);
    int32_t l_354[1];
    uint16_t *l_361 = (void*)0;
    VECTOR(int8_t, 2) l_365 = (VECTOR(int8_t, 2))(7L, 0x64L);
    VECTOR(int32_t, 16) l_389 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x50712B0EL), 0x50712B0EL), 0x50712B0EL, 0L, 0x50712B0EL, (VECTOR(int32_t, 2))(0L, 0x50712B0EL), (VECTOR(int32_t, 2))(0L, 0x50712B0EL), 0L, 0x50712B0EL, 0L, 0x50712B0EL);
    int32_t **l_397 = &p_560->g_91[3][0][3];
    int32_t ***l_396 = &l_397;
    VECTOR(int8_t, 8) l_402 = (VECTOR(int8_t, 8))(0x00L, (VECTOR(int8_t, 4))(0x00L, (VECTOR(int8_t, 2))(0x00L, 0x11L), 0x11L), 0x11L, 0x00L, 0x11L);
    uint64_t l_408 = 0xAD93B6698D30D498L;
    uint32_t l_432 = 0x3779E0B5L;
    uint8_t *l_448 = (void*)0;
    uint8_t **l_447 = &l_448;
    uint16_t *l_449 = &p_560->g_201[1];
    int32_t **l_450 = &p_560->g_444;
    uint64_t *l_460 = &l_408;
    int64_t *l_461[8][6] = {{&l_269,&l_269,(void*)0,(void*)0,(void*)0,(void*)0},{&l_269,&l_269,(void*)0,(void*)0,(void*)0,(void*)0},{&l_269,&l_269,(void*)0,(void*)0,(void*)0,(void*)0},{&l_269,&l_269,(void*)0,(void*)0,(void*)0,(void*)0},{&l_269,&l_269,(void*)0,(void*)0,(void*)0,(void*)0},{&l_269,&l_269,(void*)0,(void*)0,(void*)0,(void*)0},{&l_269,&l_269,(void*)0,(void*)0,(void*)0,(void*)0},{&l_269,&l_269,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint32_t l_469 = 0x04AFEF80L;
    VECTOR(uint64_t, 16) l_470 = (VECTOR(uint64_t, 16))(0xF8CC15AD2D4142B8L, (VECTOR(uint64_t, 4))(0xF8CC15AD2D4142B8L, (VECTOR(uint64_t, 2))(0xF8CC15AD2D4142B8L, 1UL), 1UL), 1UL, 0xF8CC15AD2D4142B8L, 1UL, (VECTOR(uint64_t, 2))(0xF8CC15AD2D4142B8L, 1UL), (VECTOR(uint64_t, 2))(0xF8CC15AD2D4142B8L, 1UL), 0xF8CC15AD2D4142B8L, 1UL, 0xF8CC15AD2D4142B8L, 1UL);
    VECTOR(uint64_t, 4) l_471 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL);
    int i, j;
    for (i = 0; i < 1; i++)
        l_354[i] = 0x1E9B0BFCL;
    for (p_560->g_38 = 0; (p_560->g_38 == 7); p_560->g_38++)
    { /* block id: 100 */
        VECTOR(int16_t, 16) l_189 = (VECTOR(int16_t, 16))(0x3832L, (VECTOR(int16_t, 4))(0x3832L, (VECTOR(int16_t, 2))(0x3832L, 0x0494L), 0x0494L), 0x0494L, 0x3832L, 0x0494L, (VECTOR(int16_t, 2))(0x3832L, 0x0494L), (VECTOR(int16_t, 2))(0x3832L, 0x0494L), 0x3832L, 0x0494L, 0x3832L, 0x0494L);
        VECTOR(int16_t, 4) l_194 = (VECTOR(int16_t, 4))(0x43ACL, (VECTOR(int16_t, 2))(0x43ACL, 0x0841L), 0x0841L);
        int64_t l_232 = 0L;
        int32_t l_241 = 0x24CE6B55L;
        int32_t l_253 = 0x2E38BD59L;
        int32_t l_254 = 0x0106B097L;
        int32_t l_255 = 0x3B5A4707L;
        int32_t l_262 = (-3L);
        int32_t l_263 = (-10L);
        int32_t l_265 = (-1L);
        int32_t l_266 = (-4L);
        int32_t l_270 = 1L;
        int32_t l_273 = 3L;
        int32_t l_274 = 0x052CD5BAL;
        int32_t l_275 = 0L;
        int32_t l_277 = (-1L);
        int32_t l_278 = 4L;
        int32_t l_279 = 0x6A1BB2AEL;
        int32_t l_281 = 1L;
        int32_t l_282 = 0L;
        VECTOR(int16_t, 16) l_288 = (VECTOR(int16_t, 16))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x1EB3L), 0x1EB3L), 0x1EB3L, (-10L), 0x1EB3L, (VECTOR(int16_t, 2))((-10L), 0x1EB3L), (VECTOR(int16_t, 2))((-10L), 0x1EB3L), (-10L), 0x1EB3L, (-10L), 0x1EB3L);
        VECTOR(int16_t, 16) l_318 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x4A86L), 0x4A86L), 0x4A86L, 1L, 0x4A86L, (VECTOR(int16_t, 2))(1L, 0x4A86L), (VECTOR(int16_t, 2))(1L, 0x4A86L), 1L, 0x4A86L, 1L, 0x4A86L);
        uint32_t *l_348 = &p_560->g_58;
        VECTOR(int16_t, 2) l_392 = (VECTOR(int16_t, 2))((-1L), (-1L));
        VECTOR(uint8_t, 4) l_403 = (VECTOR(uint8_t, 4))(0x9CL, (VECTOR(uint8_t, 2))(0x9CL, 255UL), 255UL);
        union U1 l_438 = {1UL};
        int i;
        for (p_560->g_58 = 0; (p_560->g_58 != 9); p_560->g_58 = safe_add_func_uint32_t_u_u(p_560->g_58, 7))
        { /* block id: 103 */
            VECTOR(int8_t, 16) l_224 = (VECTOR(int8_t, 16))(0x0EL, (VECTOR(int8_t, 4))(0x0EL, (VECTOR(int8_t, 2))(0x0EL, 0L), 0L), 0L, 0x0EL, 0L, (VECTOR(int8_t, 2))(0x0EL, 0L), (VECTOR(int8_t, 2))(0x0EL, 0L), 0x0EL, 0L, 0x0EL, 0L);
            int32_t l_252 = 0x25096C6FL;
            int32_t l_256 = 0L;
            int32_t l_258 = 1L;
            int32_t l_259 = 0x59E7C6FAL;
            int32_t l_260 = 0x2BFB5B3BL;
            int32_t l_264 = (-1L);
            int32_t l_267 = (-1L);
            int32_t l_268 = 0L;
            int32_t l_271 = 0L;
            int32_t l_272 = 0x7B84C776L;
            int32_t l_276[9][10][2] = {{{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL}},{{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL}},{{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL}},{{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL}},{{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL}},{{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL}},{{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL}},{{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL}},{{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL},{0x5CF9498FL,0x6E97CBFDL}}};
            int32_t l_286 = 0x10A90C2DL;
            int32_t *l_310[10][5] = {{&l_276[7][0][0],&l_253,&l_253,&l_276[7][0][0],&p_560->g_184[5]},{&l_276[7][0][0],&l_253,&l_253,&l_276[7][0][0],&p_560->g_184[5]},{&l_276[7][0][0],&l_253,&l_253,&l_276[7][0][0],&p_560->g_184[5]},{&l_276[7][0][0],&l_253,&l_253,&l_276[7][0][0],&p_560->g_184[5]},{&l_276[7][0][0],&l_253,&l_253,&l_276[7][0][0],&p_560->g_184[5]},{&l_276[7][0][0],&l_253,&l_253,&l_276[7][0][0],&p_560->g_184[5]},{&l_276[7][0][0],&l_253,&l_253,&l_276[7][0][0],&p_560->g_184[5]},{&l_276[7][0][0],&l_253,&l_253,&l_276[7][0][0],&p_560->g_184[5]},{&l_276[7][0][0],&l_253,&l_253,&l_276[7][0][0],&p_560->g_184[5]},{&l_276[7][0][0],&l_253,&l_253,&l_276[7][0][0],&p_560->g_184[5]}};
            uint32_t l_332 = 0xF4FCF177L;
            VECTOR(int64_t, 4) l_339 = (VECTOR(int64_t, 4))(0x39C2C9F82D43B185L, (VECTOR(int64_t, 2))(0x39C2C9F82D43B185L, 1L), 1L);
            union U1 l_353[3][9] = {{{7UL},{1UL},{7UL},{7UL},{1UL},{7UL},{7UL},{1UL},{7UL}},{{7UL},{1UL},{7UL},{7UL},{1UL},{7UL},{7UL},{1UL},{7UL}},{{7UL},{1UL},{7UL},{7UL},{1UL},{7UL},{7UL},{1UL},{7UL}}};
            uint8_t l_356 = 0x9AL;
            uint8_t l_381 = 1UL;
            int64_t *l_391[8][5] = {{&l_232,(void*)0,&l_232,(void*)0,&l_232},{&l_232,(void*)0,&l_232,(void*)0,&l_232},{&l_232,(void*)0,&l_232,(void*)0,&l_232},{&l_232,(void*)0,&l_232,(void*)0,&l_232},{&l_232,(void*)0,&l_232,(void*)0,&l_232},{&l_232,(void*)0,&l_232,(void*)0,&l_232},{&l_232,(void*)0,&l_232,(void*)0,&l_232},{&l_232,(void*)0,&l_232,(void*)0,&l_232}};
            VECTOR(int16_t, 4) l_393 = (VECTOR(int16_t, 4))(0x4A8DL, (VECTOR(int16_t, 2))(0x4A8DL, 0x21FEL), 0x21FEL);
            uint16_t *l_405[1];
            union U0 *l_439 = (void*)0;
            int16_t l_442[2][9] = {{0x6710L,0x4267L,1L,0x4267L,0x6710L,0x6710L,0x4267L,1L,0x4267L},{0x6710L,0x4267L,1L,0x4267L,0x6710L,0x6710L,0x4267L,1L,0x4267L}};
            int32_t * volatile **l_445 = &p_560->g_443;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_405[i] = &p_560->g_201[1];
            if ((((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(0x0FB0L, (-5L))).xxyyyxxxyxxxyyxy, ((VECTOR(int16_t, 4))(l_189.s8ac9)).wzzxzxyzwwzwyxzz))), (int16_t)1L))).sb >= 0x58E8L))
            { /* block id: 104 */
                int32_t *l_206 = &p_560->g_68[6];
                int32_t l_235 = 0x0C9854E4L;
                int32_t *l_248 = &p_560->g_15[2];
                int32_t *l_249 = &p_560->g_173;
                int32_t *l_250[2][8] = {{&p_560->g_15[2],(void*)0,&p_560->g_184[0],(void*)0,&p_560->g_15[2],&p_560->g_15[2],(void*)0,&p_560->g_184[0]},{&p_560->g_15[2],(void*)0,&p_560->g_184[0],(void*)0,&p_560->g_15[2],&p_560->g_15[2],(void*)0,&p_560->g_184[0]}};
                int64_t l_280[6][3] = {{0x52843755C66E6F55L,0x52843755C66E6F55L,0x52843755C66E6F55L},{0x52843755C66E6F55L,0x52843755C66E6F55L,0x52843755C66E6F55L},{0x52843755C66E6F55L,0x52843755C66E6F55L,0x52843755C66E6F55L},{0x52843755C66E6F55L,0x52843755C66E6F55L,0x52843755C66E6F55L},{0x52843755C66E6F55L,0x52843755C66E6F55L,0x52843755C66E6F55L},{0x52843755C66E6F55L,0x52843755C66E6F55L,0x52843755C66E6F55L}};
                int64_t l_287 = (-1L);
                uint32_t l_289 = 4294967287UL;
                int32_t **l_299 = &l_249;
                int32_t ***l_298 = &l_299;
                uint16_t *l_311[3][8][8] = {{{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]}},{{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]}},{{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]},{&p_560->g_201[1],&p_560->g_201[1],&p_560->g_201[0],&p_560->g_201[0],&p_560->g_201[1],(void*)0,&p_560->g_201[0],&p_560->g_201[1]}}};
                int64_t *l_312 = &l_287;
                int i, j, k;
                for (p_560->g_171 = 0; (p_560->g_171 > 1); p_560->g_171 = safe_add_func_uint32_t_u_u(p_560->g_171, 4))
                { /* block id: 107 */
                    uint32_t l_199 = 0UL;
                    VECTOR(int8_t, 16) l_215 = (VECTOR(int8_t, 16))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x39L), 0x39L), 0x39L, (-10L), 0x39L, (VECTOR(int8_t, 2))((-10L), 0x39L), (VECTOR(int8_t, 2))((-10L), 0x39L), (-10L), 0x39L, (-10L), 0x39L);
                    int32_t l_217 = (-1L);
                    int16_t *l_239 = (void*)0;
                    int16_t *l_240[2];
                    uint8_t *l_244 = (void*)0;
                    uint8_t *l_245 = &p_560->g_169;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_240[i] = (void*)0;
                    (*p_560->g_183) = (safe_mul_func_int16_t_s_s(p_560->g_156.s6, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(l_194.zzww)).even, (int16_t)0x164CL))))).even));
                    for (p_560->g_173 = (-2); (p_560->g_173 <= (-4)); p_560->g_173 = safe_sub_func_int32_t_s_s(p_560->g_173, 4))
                    { /* block id: 111 */
                        int32_t *l_197 = &p_560->g_184[0];
                        int32_t **l_198 = &p_560->g_183;
                        uint16_t *l_200 = &p_560->g_201[1];
                        int8_t *l_227 = (void*)0;
                        int8_t *l_228 = (void*)0;
                        int8_t *l_229[6][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int i, j;
                        (*p_560->g_183) = ((*p_560->g_37) >= p_560->g_173);
                        (*l_198) = l_197;
                        atomic_min(&p_560->g_atomic_reduction[get_linear_group_id()], (((void*)0 != p_34) < ((l_199 && (--(*l_200))) == (safe_div_func_int64_t_s_s((l_206 == (l_207 = (*l_198))), (((safe_mul_func_uint16_t_u_u((l_217 |= (((safe_lshift_func_uint8_t_u_s((FAKE_DIVERGE(p_560->global_2_offset, get_global_id(2), 10) , ((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(p_560->g_212.s0401653400677460)))).even)).even)).ywxzwxyy, ((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(0UL, p_560->g_212.s5, ((VECTOR(uint8_t, 2))(p_560->g_213.xy)), 0xD0L, ((VECTOR(uint8_t, 2))(p_560->g_214.xx)), (((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))((-1L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_215.s031b194bb3c66bcc)).sf5)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 4))(p_560->g_216.sfc90)).xzwwyzxwxzyxxxyy, (int8_t)(+((-3L) <= (**l_198)))))).hi)).s4437240720550061)).s44)).yyxx)), (-2L), ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x737224AAL, 1UL)).yyxxxxyxxyyyyxyx)).s9454)).w <= GROUP_DIVERGE(1, 1)) <= (((0xBF5D3B38D3C8C136L || 0x48C765B70BB0A3FCL) & 0UL) == 0UL)), (-3L), 0x03L, (-1L), ((VECTOR(int8_t, 4))(0x20L)))).even)).hi, ((VECTOR(int8_t, 4))(0L)), ((VECTOR(int8_t, 4))((-1L)))))).z <= (*p_33)), 251UL, ((VECTOR(uint8_t, 4))(0x3FL)), 1UL, 0xC0L, 0x50L)).lo, ((VECTOR(uint8_t, 8))(0xF2L)), ((VECTOR(uint8_t, 8))(3UL))))), ((VECTOR(uint8_t, 8))(1UL))))).s7), (*p_33))) || p_560->g_169) , 0x7C63L)), 0UL)) || GROUP_DIVERGE(0, 1)) , l_217))))));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_560->v_collective += p_560->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        l_235 |= (safe_mod_func_int32_t_s_s(((*l_206) ^= (*p_34)), ((safe_mod_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), ((!(p_560->g_216.s7 = ((safe_mul_func_int16_t_s_s(l_224.s9, FAKE_DIVERGE(p_560->global_0_offset, get_global_id(0), 10))) != (safe_mul_func_uint16_t_u_u(l_224.se, (**l_198)))))) | ((((((((safe_mul_func_int8_t_s_s((p_560->g_184[0] , ((((l_232 , &l_217) != (void*)0) < (safe_add_func_uint32_t_u_u((((0xE7D540C0L & (-1L)) == l_189.s4) & 0L), l_215.sa))) != p_560->g_214.x)), 0x93L)) != 0x19L) >= FAKE_DIVERGE(p_560->group_2_offset, get_group_id(2), 10)) > 0x106665DCFFCC7A82L) > (**l_198)) <= 0x598CCE82L) & p_560->g_38) >= p_560->g_157.s4)))) , l_215.s9)));
                    }
                    (*l_206) |= (safe_mul_func_uint8_t_u_u((l_199 <= 0x1CB72E411B5E07C7L), ((l_241 &= (p_560->g_238 , ((*l_207) = p_560->g_184[0]))) > (safe_mod_func_int64_t_s_s((((*p_560->g_37) == ((*l_245)++)) , 0x5B345530E1C3836FL), p_560->g_173)))));
                }
                ++l_283.y;
                --l_289;
                (*l_248) ^= (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((((&p_34 == ((*l_298) = &p_34)) && (l_276[7][0][0] > (p_560->g_213.y < (*l_207)))) , &p_560->g_38) != ((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(0x5AL, ((safe_sub_func_int64_t_s_s(((*l_312) = ((safe_sub_func_int16_t_s_s((((l_310[4][0] = p_34) != ((((l_282 |= p_560->g_171) > 0x586AL) && l_258) , &p_560->g_173)) == l_277), 0x7F22L)) && p_560->g_261[8])), 0UL)) || p_560->g_184[0]))), (*p_33))) , p_33)), 2)), 0)) , 0x8A5CL), 0x1857L));
            }
            else
            { /* block id: 134 */
                int64_t l_316 = 0x745896FA061C81E7L;
                int32_t l_317 = 0x6B4BC146L;
                int32_t l_319 = (-1L);
                int32_t l_320 = 0L;
                int32_t l_321 = 0x1A3B281CL;
                int32_t l_322 = (-1L);
                int32_t l_323 = 0x6188CC9DL;
                int32_t l_324 = (-5L);
                int32_t l_326[9][7][4] = {{{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L}},{{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L}},{{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L}},{{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L}},{{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L}},{{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L}},{{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L}},{{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L}},{{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L},{0x17D02466L,5L,0x54B2EB11L,0L}}};
                VECTOR(int64_t, 2) l_342 = (VECTOR(int64_t, 2))((-6L), (-4L));
                VECTOR(int8_t, 8) l_355 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x44L), 0x44L), 0x44L, 1L, 0x44L);
                uint16_t *l_360 = &p_560->g_201[1];
                int32_t l_404 = (-1L);
                union U0 *l_440 = &p_560->g_441;
                int i, j, k;
                for (l_267 = 0; (l_267 <= (-18)); l_267 = safe_sub_func_uint32_t_u_u(l_267, 9))
                { /* block id: 137 */
                    int32_t l_315 = 6L;
                    int32_t l_325 = (-2L);
                    int32_t l_327 = 2L;
                    int32_t l_328 = 0x09BF9A61L;
                    int32_t l_329 = 0L;
                    int32_t l_330 = 0L;
                    int32_t l_331[2];
                    int64_t *l_357 = &l_232;
                    uint64_t *l_362 = &l_353[2][8].f0;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_331[i] = 0x789D7B81L;
                    --l_332;
                    (*p_34) &= (safe_lshift_func_uint16_t_u_u(0UL, 14));
                    (*l_207) = (safe_mod_func_int64_t_s_s((~(8L != (((VECTOR(int64_t, 8))(0L, ((VECTOR(int64_t, 4))(l_339.zyyw)), 0x2D463B88482BB972L, 5L, 0x62E2860078D11FEAL)).s3 , (l_274 &= (*p_34))))), (safe_div_func_uint32_t_u_u((((((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_342.xyxx)).wzzwyxyzwywzzwyw)))), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_560->g_343.s5271)).hi)).xxyxxyxyyyxyxxyx))).s94, (int64_t)(safe_mul_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(l_315, ((l_348 = l_348) != &p_560->g_58))) && (safe_sub_func_int32_t_s_s(((safe_div_func_uint16_t_u_u(((l_353[2][8] , p_560->g_159.x) | l_327), l_330)) > (*p_560->g_37)), l_331[1]))), l_354[0])), (int64_t)l_324))).xyxx, ((VECTOR(int64_t, 4))(0x50CAE1753B7B43F4L))))), ((VECTOR(int64_t, 4))((-8L))), 0L, p_560->g_201[1], l_317, (-1L), ((VECTOR(int64_t, 2))(0x161C2A5EFCA0324DL)), 0x36B67ACA381FBE12L, 0x6FAB4CC3E22D7906L)).se && p_560->g_238.f0) , p_560->g_184[0]) <= GROUP_DIVERGE(2, 1)) || FAKE_DIVERGE(p_560->group_2_offset, get_group_id(2), 10)) || p_560->g_173), 4L))));
                    l_251 |= (0xC5L | ((((VECTOR(int8_t, 4))(l_355.s1265)).z >= ((l_356 = p_560->g_15[2]) && (((*l_357) = 0x73B3B2938D1B6D45L) , ((*l_207) = (l_241 || (&p_560->g_201[1] == (l_361 = l_360))))))) <= (((void*)0 == l_360) <= ((*l_362) = l_342.y))));
                }
                if (((VECTOR(int32_t, 2))((-8L), 0L)).hi)
                { /* block id: 150 */
                    uint64_t l_377 = 1UL;
                    int32_t l_379 = 0x1617B9A9L;
                    int32_t l_380[1];
                    uint16_t l_384 = 0xB036L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_380[i] = (-1L);
                    if ((*p_34))
                    { /* block id: 151 */
                        (*p_560->g_183) = (*p_560->g_31);
                    }
                    else
                    { /* block id: 153 */
                        int32_t *l_363 = &p_560->g_364;
                        int32_t l_370 = 0x221F849FL;
                        int32_t l_378 = 0x0B03CFD2L;
                        l_378 ^= (((*l_363) = p_560->g_213.x) , (((VECTOR(int8_t, 16))(l_365.yxyxyxyyxxyxyyyx)).sc & (((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(l_370, 7)), ((((p_560->g_364 , (safe_mul_func_int8_t_s_s(((*p_34) && ((VECTOR(uint32_t, 2))(0x2974C294L, 0UL)).even), (*p_560->g_37)))) && (safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_241, (p_560->g_15[0] >= l_377))), (0L ^ (*p_34))))) , (-1L)) ^ (*p_560->g_37)))) <= 0x5E0D26D759138A2DL) , 255UL)));
                        l_381++;
                        --l_384;
                    }
                    if ((*p_34))
                        break;
                }
                else
                { /* block id: 160 */
                    return p_560->g_387;
                }
                if ((((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x72593D2FL, 0L, 0x70CBA8AAL, 0x6784B70BL, 0x217A4DDBL, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_560->g_388.s5a77f680)))).s65, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(l_389.s81709257)).s75, ((VECTOR(int32_t, 16))(0x58968BF2L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))((-1L), 1L)).yxxy, ((VECTOR(int32_t, 16))(p_560->g_390.s08238eecdf32efa9)).s2de9))), (int32_t)(-6L), (int32_t)(((((((void*)0 == l_391[5][1]) == ((GROUP_DIVERGE(1, 1) , (p_560->g_184[2] > ((((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 16))(1L, ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(l_392.yyxyyyyyyyyyyxyx)).even, ((VECTOR(int16_t, 8))(l_393.zyyxwwxy))))), 6L, (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x644401F7L, 0x15A4E367L, (p_560->g_27 == (((safe_rshift_func_int8_t_s_s(((((*p_560->g_183) , l_396) != (void*)0) > (((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_402.s3473762004446676)).s4, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_403.yy)), 0UL, 255UL)).zxxyywzwxxwzxxzz)).s6)), 0xC2L)) && 0UL) != (*p_34))), 6)) ^ p_560->g_261[8]) <= l_319)), (*l_207), ((VECTOR(int32_t, 2))(0x7362C79AL)), 0L, 0x575A4D8BL)).odd)).y <= l_342.y), (-3L), ((VECTOR(int16_t, 4))(1L))))))).sa8, ((VECTOR(int16_t, 2))(0x2AF5L))))).even & GROUP_DIVERGE(0, 1)) && l_404))) == p_560->g_238.f0)) <= (*p_34)) == p_560->g_201[1]) , l_405[0]) == l_360)))))), (*p_34), l_278, (*p_34), ((VECTOR(int32_t, 8))(0x311C54A5L)))).sa7)))))), 0x47ADCF2CL)).s13)).xxyxyyyy)).s07)), 0x36B57B2CL, 0x3D104C00L)).xywyxzyw, ((VECTOR(int32_t, 8))((-1L)))))), ((VECTOR(int32_t, 8))(1L))))))), (-2L), ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 2))((-5L))), 0L)).lo))).s3 , (*p_560->g_183)))
                { /* block id: 163 */
                    union U1 l_419 = {18446744073709551615UL};
                    uint8_t *l_433 = (void*)0;
                    for (l_232 = 21; (l_232 <= (-9)); l_232--)
                    { /* block id: 166 */
                        uint32_t l_420 = 2UL;
                        uint8_t **l_434 = &l_433;
                        int32_t l_435 = 0x5DA3B731L;
                        if (l_408)
                            break;
                        (*p_560->g_387) ^= (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((p_560->g_184[0] <= ((l_435 = (((*l_360) = (~(safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((safe_sub_func_int16_t_s_s(l_316, (0x195DE0A7F441937AL == 9UL))) > (l_419 , l_420)) == (safe_unary_minus_func_uint16_t_u((((*l_434) = ((safe_rshift_func_int8_t_s_u(((safe_div_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((p_560->g_169 && (safe_mul_func_int8_t_s_s((*p_33), (safe_mod_func_uint32_t_u_u(((((VECTOR(uint8_t, 8))(l_355.s0, ((VECTOR(uint8_t, 2))(246UL)), ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 2))(0xCEL)), 0x11L)).s4 , (*p_34)) , GROUP_DIVERGE(1, 1)), (*p_34)))))), l_432)), l_419.f0)) >= (*l_207)), l_279)) , l_433)) == &l_356)))), 0x79BE8608L)), l_232)))) && p_560->g_171)) && 0xEDAFL)), p_560->g_388.se)), (-2L)));
                        if (l_419.f0)
                            break;
                    }
                    (*p_34) = (*p_34);
                }
                else
                { /* block id: 175 */
                    for (l_279 = 0; (l_279 < (-9)); l_279--)
                    { /* block id: 178 */
                        l_440 = (l_438 , l_439);
                        (*l_397) = (*p_560->g_90);
                        if (l_442[0][0])
                            continue;
                    }
                }
            }
            (*l_445) = p_560->g_443;
            if ((*p_34))
                break;
            (*p_34) &= ((**l_445) != (void*)0);
        }
        if (l_263)
            continue;
    }
    (*p_560->g_387) &= ((*p_34) > (((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(p_560->g_446.wyzywywyxzxzzyxz)), ((VECTOR(int32_t, 4))(((((*l_449) = ((((*l_447) = p_33) == (void*)0) , ((*l_207) < FAKE_DIVERGE(p_560->group_0_offset, get_group_id(0), 10)))) ^ (*l_207)) , ((l_207 != ((*l_450) = l_207)) == ((((((p_560->g_comm_values[p_560->tid] ^= (safe_add_func_uint8_t_u_u((+(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 16))(p_560->g_453.s8b4ee7ae3ff43b40)).s8a6b, ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 4))(((safe_sub_func_int32_t_s_s(((((((((safe_div_func_uint64_t_u_u(((*l_460) = (((0UL | (safe_mul_func_int8_t_s_s(((*p_34) || (*p_34)), (*l_207)))) , (*l_207)) > 1UL)), (*l_207))) > 0x3876139685EDD1C0L) , (*p_560->g_37)) , FAKE_DIVERGE(p_560->global_0_offset, get_global_id(0), 10)) , 0x9E2BB2B60EF07A29L) & (*l_207)) & p_560->g_343.s7) >= (*l_207)), p_560->l_comm_values[(safe_mod_func_uint32_t_u_u(p_560->tid, 2))])) ^ (*l_207)), 0x8A80L, 7UL, 0x1A35L)).lo, ((VECTOR(uint16_t, 2))(0xE7EBL))))).yyxy))).even))).yxxyyyyyxxxyxyxx, ((VECTOR(uint32_t, 16))(0x0CCE508FL))))).s4 >= (*l_207))), (*l_207)))) < p_560->g_261[8]) || p_560->g_201[0]) , (void*)0) == l_450) && 0xB3F33E0B8606DCC4L))), ((VECTOR(int32_t, 2))(0x36B0081BL)), 0x1D0AB942L)).zywxwzwxyxxyyywz))).even)), ((VECTOR(int32_t, 8))(1L))))).s1 , p_560->g_27));
    (*l_207) = ((*l_207) > ((((safe_div_func_int8_t_s_s(((*p_33) = ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 8))(((p_560->g_468 , (*p_560->g_443)) != (l_469 , (*p_560->g_443))), 18446744073709551615UL, 0UL, ((VECTOR(uint64_t, 4))(l_470.s0c5f)), 1UL)).s61, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_471.xzwz)).yxxyxwxywyyzzwxx)).hi)).s21))).odd, (((safe_div_func_int16_t_s_s(((p_560->g_390.s3 > ((((safe_sub_func_int8_t_s_s(((p_560->g_171 < (!(*p_33))) & (((p_560->l_comm_values[(safe_mod_func_uint32_t_u_u(p_560->tid, 2))] != (*p_34)) > p_560->g_68[4]) || (*l_207))), (*p_33))) || 0xE252L) < p_560->g_184[5]) <= p_560->g_261[8])) | 0L), p_560->g_364)) == 0x0DADL) , p_560->g_184[0]))), (*p_33))) <= p_560->g_169)), (*l_207))) ^ (*l_207)) , p_560->g_446.w) ^ 0x0A5BAF2EF90687FBL));
    (*l_207) ^= (*p_560->g_31);
    return (*p_560->g_90);
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_27 p_560->g_38 p_560->l_comm_values p_560->g_37 p_560->g_comm_values p_560->g_31 p_560->g_68 p_560->g_90 p_560->g_58 p_560->g_15 p_560->g_156 p_560->g_157 p_560->g_159 p_560->g_171 p_560->g_173
 * writes: p_560->g_27 p_560->g_58 p_560->g_15 p_560->g_68 p_560->g_91 p_560->g_38 p_560->g_169 p_560->g_171 p_560->g_173
 */
int8_t * func_35(int8_t * p_36, struct S2 * p_560)
{ /* block id: 17 */
    uint32_t l_39 = 0xB09DE24EL;
    int32_t *l_40 = &p_560->g_27;
    int32_t *l_142 = &p_560->g_15[3];
    VECTOR(uint64_t, 4) l_154 = (VECTOR(uint64_t, 4))(0xC81CA3231BC1E316L, (VECTOR(uint64_t, 2))(0xC81CA3231BC1E316L, 0xFEA91B572109CD27L), 0xFEA91B572109CD27L);
    VECTOR(int16_t, 4) l_162 = (VECTOR(int16_t, 4))(0x2AC7L, (VECTOR(int16_t, 2))(0x2AC7L, 1L), 1L);
    int32_t l_177 = 1L;
    int32_t l_178 = (-3L);
    uint8_t l_179[5][2][7] = {{{0x8EL,248UL,0x08L,251UL,0x1BL,251UL,0x08L},{0x8EL,248UL,0x08L,251UL,0x1BL,251UL,0x08L}},{{0x8EL,248UL,0x08L,251UL,0x1BL,251UL,0x08L},{0x8EL,248UL,0x08L,251UL,0x1BL,251UL,0x08L}},{{0x8EL,248UL,0x08L,251UL,0x1BL,251UL,0x08L},{0x8EL,248UL,0x08L,251UL,0x1BL,251UL,0x08L}},{{0x8EL,248UL,0x08L,251UL,0x1BL,251UL,0x08L},{0x8EL,248UL,0x08L,251UL,0x1BL,251UL,0x08L}},{{0x8EL,248UL,0x08L,251UL,0x1BL,251UL,0x08L},{0x8EL,248UL,0x08L,251UL,0x1BL,251UL,0x08L}}};
    int8_t *l_182 = &p_560->g_38;
    int i, j, k;
    if (((*l_40) = l_39))
    { /* block id: 19 */
        int32_t *l_44[9][1] = {{&p_560->g_15[2]},{&p_560->g_15[2]},{&p_560->g_15[2]},{&p_560->g_15[2]},{&p_560->g_15[2]},{&p_560->g_15[2]},{&p_560->g_15[2]},{&p_560->g_15[2]},{&p_560->g_15[2]}};
        uint8_t l_45 = 0UL;
        int i, j;
        l_45 = (safe_div_func_int32_t_s_s(((*l_40) |= 0x7C888BC0L), l_39));
    }
    else
    { /* block id: 22 */
        uint16_t l_48 = 0x0CA9L;
        int32_t **l_89 = (void*)0;
        (*p_560->g_90) = func_46(l_48, p_560);
        if ((atomic_inc(&p_560->g_atomic_input[61 * get_linear_group_id() + 39]) == 9))
        { /* block id: 38 */
            uint16_t l_92 = 1UL;
            if (l_92)
            { /* block id: 39 */
                int32_t l_94 = 0L;
                int32_t *l_93 = &l_94;
                int32_t *l_95[4][2] = {{&l_94,&l_94},{&l_94,&l_94},{&l_94,&l_94},{&l_94,&l_94}};
                int32_t *l_96 = &l_94;
                uint32_t l_97 = 0xFC1ADAE8L;
                int i, j;
                l_96 = (l_95[1][1] = l_93);
                --l_97;
            }
            else
            { /* block id: 43 */
                union U1 l_100 = {1UL};
                VECTOR(int32_t, 4) l_101 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x2D59F2A3L), 0x2D59F2A3L);
                int i;
                if ((l_100 , l_101.x))
                { /* block id: 44 */
                    VECTOR(int32_t, 4) l_102 = (VECTOR(int32_t, 4))(0x15631CF8L, (VECTOR(int32_t, 2))(0x15631CF8L, 7L), 7L);
                    VECTOR(int32_t, 16) l_103 = (VECTOR(int32_t, 16))(0x7B9BF6C6L, (VECTOR(int32_t, 4))(0x7B9BF6C6L, (VECTOR(int32_t, 2))(0x7B9BF6C6L, 0x3354124CL), 0x3354124CL), 0x3354124CL, 0x7B9BF6C6L, 0x3354124CL, (VECTOR(int32_t, 2))(0x7B9BF6C6L, 0x3354124CL), (VECTOR(int32_t, 2))(0x7B9BF6C6L, 0x3354124CL), 0x7B9BF6C6L, 0x3354124CL, 0x7B9BF6C6L, 0x3354124CL);
                    int8_t l_104 = (-1L);
                    VECTOR(int32_t, 8) l_105 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x19F4FE02L), 0x19F4FE02L), 0x19F4FE02L, 1L, 0x19F4FE02L);
                    VECTOR(int32_t, 2) l_106 = (VECTOR(int32_t, 2))(0x2876FB9FL, 0x42C4E7C1L);
                    VECTOR(int32_t, 8) l_107 = (VECTOR(int32_t, 8))(0x10C65574L, (VECTOR(int32_t, 4))(0x10C65574L, (VECTOR(int32_t, 2))(0x10C65574L, 0x5438A0F6L), 0x5438A0F6L), 0x5438A0F6L, 0x10C65574L, 0x5438A0F6L);
                    VECTOR(int32_t, 8) l_108 = (VECTOR(int32_t, 8))(0x329CA2B8L, (VECTOR(int32_t, 4))(0x329CA2B8L, (VECTOR(int32_t, 2))(0x329CA2B8L, 0x31379AC7L), 0x31379AC7L), 0x31379AC7L, 0x329CA2B8L, 0x31379AC7L);
                    VECTOR(int32_t, 2) l_109 = (VECTOR(int32_t, 2))(0x39BD89DFL, 1L);
                    VECTOR(int32_t, 8) l_110 = (VECTOR(int32_t, 8))(0x60D9F0A5L, (VECTOR(int32_t, 4))(0x60D9F0A5L, (VECTOR(int32_t, 2))(0x60D9F0A5L, 0x6D3DB75EL), 0x6D3DB75EL), 0x6D3DB75EL, 0x60D9F0A5L, 0x6D3DB75EL);
                    int32_t l_111 = 0x41CCE74EL;
                    VECTOR(int32_t, 2) l_112 = (VECTOR(int32_t, 2))(3L, 1L);
                    VECTOR(int32_t, 16) l_113 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x193FB84FL), 0x193FB84FL), 0x193FB84FL, 3L, 0x193FB84FL, (VECTOR(int32_t, 2))(3L, 0x193FB84FL), (VECTOR(int32_t, 2))(3L, 0x193FB84FL), 3L, 0x193FB84FL, 3L, 0x193FB84FL);
                    VECTOR(int32_t, 2) l_114 = (VECTOR(int32_t, 2))(4L, 0x1E399F47L);
                    int32_t l_115 = (-4L);
                    VECTOR(int32_t, 16) l_116 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
                    uint16_t l_117 = 1UL;
                    uint32_t l_118 = 0xC53249FFL;
                    VECTOR(uint8_t, 16) l_119 = (VECTOR(uint8_t, 16))(0x30L, (VECTOR(uint8_t, 4))(0x30L, (VECTOR(uint8_t, 2))(0x30L, 0x78L), 0x78L), 0x78L, 0x30L, 0x78L, (VECTOR(uint8_t, 2))(0x30L, 0x78L), (VECTOR(uint8_t, 2))(0x30L, 0x78L), 0x30L, 0x78L, 0x30L, 0x78L);
                    int16_t l_120 = 0x17A3L;
                    uint32_t l_121 = 0x1D963C8BL;
                    uint64_t l_122 = 0x128589467803C6ADL;
                    int8_t l_123 = (-1L);
                    uint16_t l_124 = 1UL;
                    VECTOR(int32_t, 16) l_127 = (VECTOR(int32_t, 16))(0x01EE616DL, (VECTOR(int32_t, 4))(0x01EE616DL, (VECTOR(int32_t, 2))(0x01EE616DL, 8L), 8L), 8L, 0x01EE616DL, 8L, (VECTOR(int32_t, 2))(0x01EE616DL, 8L), (VECTOR(int32_t, 2))(0x01EE616DL, 8L), 0x01EE616DL, 8L, 0x01EE616DL, 8L);
                    uint32_t l_128 = 5UL;
                    int i;
                    l_123 = (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((-1L), 0x370667C2L, 0L, ((VECTOR(int32_t, 16))(l_102.wzwxwxxwyxwxywwx)).sa, 0x02BDA32AL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(l_103.s9f92e4c4278173ff)), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(7L, l_104, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(l_105.s42166263)).s54, ((VECTOR(int32_t, 4))(l_106.yxxy)).hi))), 1L, 0x6B0F8228L, 0x0EFDCEB6L, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_107.s10)), 0x03036340L, (-1L))).even, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_108.s53626773)))), ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_109.yyxy)).z, 0x75236C3EL, 0x4317B74FL, (-1L))).wwwxzwyw, ((VECTOR(int32_t, 4))(l_110.s0217)).ywyxzyzz)))))).s63))), (l_110.s0 = 0x06F0957DL), 0x4B53B084L, l_111, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(l_112.yxxyyxxxxxyyxxxy)), ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(l_113.s7e7f)).even, ((VECTOR(int32_t, 8))(l_114.yxxyxyxy)).s40))).xyxyyxxy)).s73, ((VECTOR(int32_t, 4))(9L, l_115, 0x1A3AA631L, 0x5A902683L)).lo, ((VECTOR(int32_t, 4))(l_116.s8540)).odd))).xyxyyxyxxxxxyyyy, ((VECTOR(int32_t, 16))((-1L), l_117, 0x0BEFD341L, l_118, 0x445C7B11L, ((VECTOR(int32_t, 4))(0x5E75B743L, 0x341BA907L, 0x73F3ED43L, 3L)), ((VECTOR(int32_t, 8))(0x1E5974C5L, 9L, 0x188DA372L, ((VECTOR(int32_t, 4))(1L)), 1L)).s1, l_119.s3, l_120, 0x64C70D5BL, 0x49DFD79EL, (-5L), 0x1AB92CD8L)))))))).s0b03, ((VECTOR(int32_t, 4))((-6L)))))))).s8479)), ((VECTOR(int32_t, 4))(0x355BF927L))))).wywzwyzwzxzxxxww))).s612e)).lo)), 0x364FACB0L, 1L, ((VECTOR(int32_t, 4))(0x00201516L)))), l_121, 0x47116D0EL, (-9L))).sd8)).hi , l_122);
                    l_124++;
                    l_128 = ((VECTOR(int32_t, 8))(l_127.s5c63001b)).s2;
                    for (l_109.x = 10; (l_109.x < (-11)); l_109.x--)
                    { /* block id: 51 */
                        int32_t l_131 = (-8L);
                        uint64_t l_132 = 0x44E969EF097FE925L;
                        int32_t l_134 = 5L;
                        int32_t *l_133 = &l_134;
                        int32_t *l_135 = &l_134;
                        int32_t *l_136 = (void*)0;
                        int64_t l_137 = (-8L);
                        l_111 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(1L, ((l_131 = 0x9DL) , ((VECTOR(int32_t, 2))(0L, 1L)).lo), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 0x564C8054L)), 0x649DD7CAL, 0x3EB13191L)), 0x5CA25D32L, (-2L))).even)).y;
                        l_127.s9 |= (l_132 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-8L), (-9L))))).odd);
                        l_136 = (l_135 = l_133);
                        l_111 ^= (l_127.sc = l_137);
                    }
                }
                else
                { /* block id: 60 */
                    uint16_t l_138 = 0x8F7CL;
                    ++l_138;
                }
            }
            unsigned int result = 0;
            result += l_92;
            atomic_add(&p_560->g_special_values[61 * get_linear_group_id() + 39], result);
        }
        else
        { /* block id: 64 */
            (1 + 1);
        }
    }
    (*l_142) ^= (((&p_560->g_58 == l_40) | (*l_40)) | p_560->g_58);
    for (p_560->g_38 = 1; (p_560->g_38 < 28); p_560->g_38 = safe_add_func_uint16_t_u_u(p_560->g_38, 1))
    { /* block id: 71 */
        uint32_t l_145 = 5UL;
        VECTOR(int32_t, 2) l_149 = (VECTOR(int32_t, 2))(0x4B782C43L, (-1L));
        union U0 l_152 = {1UL};
        uint32_t *l_153 = &l_145;
        VECTOR(uint64_t, 8) l_155 = (VECTOR(uint64_t, 8))(0xF65D0CD89F1C9D62L, (VECTOR(uint64_t, 4))(0xF65D0CD89F1C9D62L, (VECTOR(uint64_t, 2))(0xF65D0CD89F1C9D62L, 0xD086245629CD995CL), 0xD086245629CD995CL), 0xD086245629CD995CL, 0xF65D0CD89F1C9D62L, 0xD086245629CD995CL);
        VECTOR(uint64_t, 16) l_158 = (VECTOR(uint64_t, 16))(0xF600EE0E75A0F95BL, (VECTOR(uint64_t, 4))(0xF600EE0E75A0F95BL, (VECTOR(uint64_t, 2))(0xF600EE0E75A0F95BL, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 0xF600EE0E75A0F95BL, 18446744073709551606UL, (VECTOR(uint64_t, 2))(0xF600EE0E75A0F95BL, 18446744073709551606UL), (VECTOR(uint64_t, 2))(0xF600EE0E75A0F95BL, 18446744073709551606UL), 0xF600EE0E75A0F95BL, 18446744073709551606UL, 0xF600EE0E75A0F95BL, 18446744073709551606UL);
        uint8_t *l_167 = (void*)0;
        uint8_t *l_168 = &p_560->g_169;
        int16_t *l_170 = &p_560->g_171;
        int32_t *l_172 = &p_560->g_173;
        int32_t *l_174 = &p_560->g_173;
        int32_t *l_175 = (void*)0;
        int32_t *l_176[8];
        int i;
        for (i = 0; i < 8; i++)
            l_176[i] = &p_560->g_15[2];
        if (((*l_40) = (-1L)))
        { /* block id: 73 */
            int8_t *l_146[1];
            int i;
            for (i = 0; i < 1; i++)
                l_146[i] = &p_560->g_38;
            if ((*p_560->g_31))
            { /* block id: 74 */
                if (l_145)
                    break;
            }
            else
            { /* block id: 76 */
                return l_146[0];
            }
            atomic_add(&p_560->g_atomic_reduction[get_linear_group_id()], l_145);
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_560->v_collective += p_560->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            for (p_560->g_58 = (-20); (p_560->g_58 <= 44); p_560->g_58 = safe_add_func_int32_t_s_s(p_560->g_58, 8))
            { /* block id: 82 */
                (*l_142) = ((VECTOR(int32_t, 4))(l_149.xyyy)).x;
                return l_146[0];
            }
        }
        else
        { /* block id: 86 */
            int32_t **l_150 = &l_40;
            int32_t **l_151 = &p_560->g_91[1][1][4];
            (*l_151) = ((*l_150) = func_46(p_560->g_15[8], p_560));
        }
        (*l_172) &= (((l_152 , ((*l_153) &= FAKE_DIVERGE(p_560->global_0_offset, get_global_id(0), 10))) == ((((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_154.zw)).xxyxyxyxyyxyyyxx)).s1b6f)))).lo, ((VECTOR(uint64_t, 8))(l_155.s10547077)).s77))).xyyy, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_152.f0, ((VECTOR(uint64_t, 4))(p_560->g_156.s1075)).y, 0x29A4D2738DFAD1FEL, 0UL)).xxyyzywyyxzzzxwx)).s2719, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 16))(p_560->g_157.s5157571224570451)).s2efa, ((VECTOR(uint64_t, 16))(l_158.s7e2e718daa797cce)).s5200, ((VECTOR(uint64_t, 8))(p_560->g_159.wzzxwyzx)).hi))).xxwzyxzw)), (uint64_t)(((safe_lshift_func_int16_t_s_u(((*l_170) ^= (((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(65529UL, 0xCF1BL)))).yyxxyyyx, ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(int16_t, 8))(l_162.zwyyyzww)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(1L, 1L)))).yxxyyyxyxyxyyyxy, ((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(0x05E5L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 8))(4L, ((VECTOR(int8_t, 4))((safe_mul_func_uint8_t_u_u((p_560->g_156.s6 | (safe_lshift_func_uint8_t_u_s((p_560->g_68[6] != (!(*l_40))), (l_149.x > (*l_142))))), ((*l_168) = p_560->g_27))), 0x77L, 0x04L, 0x0BL)), l_158.sb, 0x09L, 1L)), ((VECTOR(uint8_t, 8))(0x4FL))))).s2751041572762371)), ((VECTOR(int16_t, 16))(3L))))).sc8))), 0x460EL, 0x29A2L)), ((VECTOR(int16_t, 8))(1L)), ((VECTOR(int16_t, 2))((-1L))), 0x3382L)).even, ((VECTOR(int16_t, 8))(0L))))).s3605645625153457, ((VECTOR(int16_t, 16))(0L)))))))))).even)))))).s3 != 0x7083L)), p_560->g_68[6])) ^ (*l_142)) ^ (*p_36))))).odd))))).y && p_560->g_58) & (*l_142))) > (-8L));
        --l_179[3][1][3];
    }
    return l_182;
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_38 p_560->g_27 p_560->l_comm_values p_560->g_37 p_560->g_comm_values p_560->g_31 p_560->g_68
 * writes: p_560->g_58 p_560->g_15 p_560->g_68
 */
int32_t * func_46(uint64_t  p_47, struct S2 * p_560)
{ /* block id: 23 */
    uint8_t l_53[3][7][10] = {{{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L}},{{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L}},{{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L},{0xA9L,1UL,251UL,0x0EL,4UL,0x46L,255UL,0x05L,0x46L,0xA9L}}};
    int32_t l_69 = (-6L);
    int32_t l_70 = (-1L);
    int32_t l_71 = 0x6ACFB34DL;
    int32_t l_72 = 1L;
    int32_t l_73 = 0x63C60D9BL;
    int32_t l_74 = 0x0E7AEBFCL;
    int32_t l_75 = 1L;
    int32_t l_76 = 1L;
    int32_t l_77 = (-5L);
    int32_t l_78 = 1L;
    int32_t l_79 = (-1L);
    int32_t l_80 = 1L;
    int32_t l_81 = 0x2E1E7B9FL;
    int32_t l_82 = 0x68046F23L;
    int32_t l_83 = 0x06554C54L;
    int32_t l_84 = (-3L);
    int32_t l_85[2];
    uint16_t l_86 = 0x1A99L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_85[i] = 0x51EC5715L;
    for (p_47 = 13; (p_47 < 2); --p_47)
    { /* block id: 26 */
        int32_t *l_67[3][9][9] = {{{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27}},{{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27}},{{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27},{&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27,&p_560->g_68[6],&p_560->g_68[6],&p_560->g_27,&p_560->g_27,&p_560->g_27}}};
        int i, j, k;
        p_560->g_68[4] &= func_51(l_53[2][5][0], p_560);
        ++l_86;
    }
    return &p_560->g_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_38 p_560->g_27 p_560->l_comm_values p_560->g_37 p_560->g_comm_values p_560->g_31
 * writes: p_560->g_58 p_560->g_15
 */
int32_t  func_51(uint32_t  p_52, struct S2 * p_560)
{ /* block id: 27 */
    union U1 l_56[7][6] = {{{1UL},{0xCE469C6BC52267D0L},{0xCE469C6BC52267D0L},{1UL},{1UL},{0xCE469C6BC52267D0L}},{{1UL},{0xCE469C6BC52267D0L},{0xCE469C6BC52267D0L},{1UL},{1UL},{0xCE469C6BC52267D0L}},{{1UL},{0xCE469C6BC52267D0L},{0xCE469C6BC52267D0L},{1UL},{1UL},{0xCE469C6BC52267D0L}},{{1UL},{0xCE469C6BC52267D0L},{0xCE469C6BC52267D0L},{1UL},{1UL},{0xCE469C6BC52267D0L}},{{1UL},{0xCE469C6BC52267D0L},{0xCE469C6BC52267D0L},{1UL},{1UL},{0xCE469C6BC52267D0L}},{{1UL},{0xCE469C6BC52267D0L},{0xCE469C6BC52267D0L},{1UL},{1UL},{0xCE469C6BC52267D0L}},{{1UL},{0xCE469C6BC52267D0L},{0xCE469C6BC52267D0L},{1UL},{1UL},{0xCE469C6BC52267D0L}}};
    uint32_t *l_57[1];
    int32_t **l_65[3];
    int32_t *l_66 = (void*)0;
    int i, j;
    for (i = 0; i < 1; i++)
        l_57[i] = &p_560->g_58;
    for (i = 0; i < 3; i++)
        l_65[i] = (void*)0;
    (*p_560->g_31) = (safe_rshift_func_int16_t_s_u((((((p_52 <= (l_56[2][2] , (p_560->g_58 = p_52))) >= (((((p_52 && 0UL) > (safe_mul_func_int8_t_s_s(((l_56[2][2].f0 || ((safe_rshift_func_uint16_t_u_u(((-10L) < (safe_mod_func_uint32_t_u_u(((((l_66 = (void*)0) == ((((0x30B00257L <= p_52) || p_52) >= p_560->g_38) , &p_560->g_27)) | p_560->g_27) & p_52), 0x7A3E983FL))), 5)) == p_52)) , p_52), p_560->g_38))) , p_560->l_comm_values[(safe_mod_func_uint32_t_u_u(p_560->tid, 2))]) , (*p_560->g_37)) == p_52)) >= p_560->g_38) || p_560->g_comm_values[p_560->tid]) , p_52), 12));
    return p_52;
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
    struct S2 c_561;
    struct S2* p_560 = &c_561;
    struct S2 c_562 = {
        {0x2BFD090DL,0x2BFD090DL,0x2BFD090DL,0x2BFD090DL,0x2BFD090DL,0x2BFD090DL,0x2BFD090DL,0x2BFD090DL,0x2BFD090DL}, // p_560->g_15
        0x0A50D0CEL, // p_560->g_27
        &p_560->g_15[6], // p_560->g_31
        (-1L), // p_560->g_38
        &p_560->g_38, // p_560->g_37
        {{(void*)0,(void*)0,&p_560->g_15[2],(void*)0,&p_560->g_15[2],(void*)0,&p_560->g_15[2],(void*)0,(void*)0,&p_560->g_15[2]},{(void*)0,(void*)0,&p_560->g_15[2],(void*)0,&p_560->g_15[2],(void*)0,&p_560->g_15[2],(void*)0,(void*)0,&p_560->g_15[2]},{(void*)0,(void*)0,&p_560->g_15[2],(void*)0,&p_560->g_15[2],(void*)0,&p_560->g_15[2],(void*)0,(void*)0,&p_560->g_15[2]},{(void*)0,(void*)0,&p_560->g_15[2],(void*)0,&p_560->g_15[2],(void*)0,&p_560->g_15[2],(void*)0,(void*)0,&p_560->g_15[2]}}, // p_560->g_43
        0xDC513BADL, // p_560->g_58
        {1L,(-1L),1L,1L,(-1L),1L,1L,(-1L),1L,1L}, // p_560->g_68
        {{{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]}},{{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]}},{{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]}},{{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]}},{{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]}},{{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]}},{{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]},{&p_560->g_27,&p_560->g_68[1],&p_560->g_68[3],&p_560->g_27,&p_560->g_15[2],&p_560->g_68[3]}}}, // p_560->g_91
        &p_560->g_91[4][1][1], // p_560->g_90
        (void*)0, // p_560->g_141
        (VECTOR(uint64_t, 8))(0xE05E7DDFA2A7B079L, (VECTOR(uint64_t, 4))(0xE05E7DDFA2A7B079L, (VECTOR(uint64_t, 2))(0xE05E7DDFA2A7B079L, 0xC3D983DDCAA069C6L), 0xC3D983DDCAA069C6L), 0xC3D983DDCAA069C6L, 0xE05E7DDFA2A7B079L, 0xC3D983DDCAA069C6L), // p_560->g_156
        (VECTOR(uint64_t, 8))(0x50EFE6FD8733CB2EL, (VECTOR(uint64_t, 4))(0x50EFE6FD8733CB2EL, (VECTOR(uint64_t, 2))(0x50EFE6FD8733CB2EL, 0x8B8E5CF12730BE47L), 0x8B8E5CF12730BE47L), 0x8B8E5CF12730BE47L, 0x50EFE6FD8733CB2EL, 0x8B8E5CF12730BE47L), // p_560->g_157
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xAFDE5E681E818775L), 0xAFDE5E681E818775L), // p_560->g_159
        0xF2L, // p_560->g_169
        0x1BE1L, // p_560->g_171
        0x7F92C7C0L, // p_560->g_173
        {1L,1L,1L,1L,1L,1L,1L}, // p_560->g_184
        &p_560->g_184[0], // p_560->g_183
        {0x635CL,0x635CL}, // p_560->g_201
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xC1L), 0xC1L), 0xC1L, 255UL, 0xC1L), // p_560->g_212
        (VECTOR(uint8_t, 2))(0x07L, 249UL), // p_560->g_213
        (VECTOR(uint8_t, 2))(0x3BL, 0UL), // p_560->g_214
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x1EL), 0x1EL), 0x1EL, 0L, 0x1EL, (VECTOR(int8_t, 2))(0L, 0x1EL), (VECTOR(int8_t, 2))(0L, 0x1EL), 0L, 0x1EL, 0L, 0x1EL), // p_560->g_216
        {4294967292UL}, // p_560->g_238
        {0x2AL,0L,0x2AL,0x2AL,0L,0x2AL,0x2AL,0L,0x2AL}, // p_560->g_261
        (VECTOR(int64_t, 8))(0x300FEEB227F45578L, (VECTOR(int64_t, 4))(0x300FEEB227F45578L, (VECTOR(int64_t, 2))(0x300FEEB227F45578L, 0L), 0L), 0L, 0x300FEEB227F45578L, 0L), // p_560->g_343
        1L, // p_560->g_364
        &p_560->g_15[2], // p_560->g_387
        (VECTOR(int32_t, 16))(0x166D5F6CL, (VECTOR(int32_t, 4))(0x166D5F6CL, (VECTOR(int32_t, 2))(0x166D5F6CL, (-4L)), (-4L)), (-4L), 0x166D5F6CL, (-4L), (VECTOR(int32_t, 2))(0x166D5F6CL, (-4L)), (VECTOR(int32_t, 2))(0x166D5F6CL, (-4L)), 0x166D5F6CL, (-4L), 0x166D5F6CL, (-4L)), // p_560->g_388
        (VECTOR(int32_t, 16))(0x26543FF4L, (VECTOR(int32_t, 4))(0x26543FF4L, (VECTOR(int32_t, 2))(0x26543FF4L, 0L), 0L), 0L, 0x26543FF4L, 0L, (VECTOR(int32_t, 2))(0x26543FF4L, 0L), (VECTOR(int32_t, 2))(0x26543FF4L, 0L), 0x26543FF4L, 0L, 0x26543FF4L, 0L), // p_560->g_390
        {0xCD1EC6F3L}, // p_560->g_441
        &p_560->g_364, // p_560->g_444
        &p_560->g_444, // p_560->g_443
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x503DED50L), 0x503DED50L), // p_560->g_446
        (VECTOR(uint32_t, 16))(0x6A152780L, (VECTOR(uint32_t, 4))(0x6A152780L, (VECTOR(uint32_t, 2))(0x6A152780L, 0x9DA5B048L), 0x9DA5B048L), 0x9DA5B048L, 0x6A152780L, 0x9DA5B048L, (VECTOR(uint32_t, 2))(0x6A152780L, 0x9DA5B048L), (VECTOR(uint32_t, 2))(0x6A152780L, 0x9DA5B048L), 0x6A152780L, 0x9DA5B048L, 0x6A152780L, 0x9DA5B048L), // p_560->g_453
        {18446744073709551615UL}, // p_560->g_468
        0x2953E367L, // p_560->g_482
        &p_560->g_482, // p_560->g_481
        (void*)0, // p_560->g_487
        &p_560->g_91[4][0][0], // p_560->g_488
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 6UL), 6UL), // p_560->g_493
        0x59825578L, // p_560->g_503
        (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, 0x76L), 0x76L), // p_560->g_511
        (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x07L), 0x07L), 0x07L, 7L, 0x07L), // p_560->g_512
        7L, // p_560->g_533
        18446744073709551614UL, // p_560->g_544
        {&p_560->g_468,&p_560->g_468,&p_560->g_468,&p_560->g_468,&p_560->g_468,&p_560->g_468,&p_560->g_468}, // p_560->g_551
        0, // p_560->v_collective
        sequence_input[get_global_id(0)], // p_560->global_0_offset
        sequence_input[get_global_id(1)], // p_560->global_1_offset
        sequence_input[get_global_id(2)], // p_560->global_2_offset
        sequence_input[get_local_id(0)], // p_560->local_0_offset
        sequence_input[get_local_id(1)], // p_560->local_1_offset
        sequence_input[get_local_id(2)], // p_560->local_2_offset
        sequence_input[get_group_id(0)], // p_560->group_0_offset
        sequence_input[get_group_id(1)], // p_560->group_1_offset
        sequence_input[get_group_id(2)], // p_560->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_560->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_561 = c_562;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_560);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_560->g_15[i], "p_560->g_15[i]", print_hash_value);

    }
    transparent_crc(p_560->g_27, "p_560->g_27", print_hash_value);
    transparent_crc(p_560->g_38, "p_560->g_38", print_hash_value);
    transparent_crc(p_560->g_58, "p_560->g_58", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_560->g_68[i], "p_560->g_68[i]", print_hash_value);

    }
    transparent_crc(p_560->g_156.s0, "p_560->g_156.s0", print_hash_value);
    transparent_crc(p_560->g_156.s1, "p_560->g_156.s1", print_hash_value);
    transparent_crc(p_560->g_156.s2, "p_560->g_156.s2", print_hash_value);
    transparent_crc(p_560->g_156.s3, "p_560->g_156.s3", print_hash_value);
    transparent_crc(p_560->g_156.s4, "p_560->g_156.s4", print_hash_value);
    transparent_crc(p_560->g_156.s5, "p_560->g_156.s5", print_hash_value);
    transparent_crc(p_560->g_156.s6, "p_560->g_156.s6", print_hash_value);
    transparent_crc(p_560->g_156.s7, "p_560->g_156.s7", print_hash_value);
    transparent_crc(p_560->g_157.s0, "p_560->g_157.s0", print_hash_value);
    transparent_crc(p_560->g_157.s1, "p_560->g_157.s1", print_hash_value);
    transparent_crc(p_560->g_157.s2, "p_560->g_157.s2", print_hash_value);
    transparent_crc(p_560->g_157.s3, "p_560->g_157.s3", print_hash_value);
    transparent_crc(p_560->g_157.s4, "p_560->g_157.s4", print_hash_value);
    transparent_crc(p_560->g_157.s5, "p_560->g_157.s5", print_hash_value);
    transparent_crc(p_560->g_157.s6, "p_560->g_157.s6", print_hash_value);
    transparent_crc(p_560->g_157.s7, "p_560->g_157.s7", print_hash_value);
    transparent_crc(p_560->g_159.x, "p_560->g_159.x", print_hash_value);
    transparent_crc(p_560->g_159.y, "p_560->g_159.y", print_hash_value);
    transparent_crc(p_560->g_159.z, "p_560->g_159.z", print_hash_value);
    transparent_crc(p_560->g_159.w, "p_560->g_159.w", print_hash_value);
    transparent_crc(p_560->g_169, "p_560->g_169", print_hash_value);
    transparent_crc(p_560->g_171, "p_560->g_171", print_hash_value);
    transparent_crc(p_560->g_173, "p_560->g_173", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_560->g_184[i], "p_560->g_184[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_560->g_201[i], "p_560->g_201[i]", print_hash_value);

    }
    transparent_crc(p_560->g_212.s0, "p_560->g_212.s0", print_hash_value);
    transparent_crc(p_560->g_212.s1, "p_560->g_212.s1", print_hash_value);
    transparent_crc(p_560->g_212.s2, "p_560->g_212.s2", print_hash_value);
    transparent_crc(p_560->g_212.s3, "p_560->g_212.s3", print_hash_value);
    transparent_crc(p_560->g_212.s4, "p_560->g_212.s4", print_hash_value);
    transparent_crc(p_560->g_212.s5, "p_560->g_212.s5", print_hash_value);
    transparent_crc(p_560->g_212.s6, "p_560->g_212.s6", print_hash_value);
    transparent_crc(p_560->g_212.s7, "p_560->g_212.s7", print_hash_value);
    transparent_crc(p_560->g_213.x, "p_560->g_213.x", print_hash_value);
    transparent_crc(p_560->g_213.y, "p_560->g_213.y", print_hash_value);
    transparent_crc(p_560->g_214.x, "p_560->g_214.x", print_hash_value);
    transparent_crc(p_560->g_214.y, "p_560->g_214.y", print_hash_value);
    transparent_crc(p_560->g_216.s0, "p_560->g_216.s0", print_hash_value);
    transparent_crc(p_560->g_216.s1, "p_560->g_216.s1", print_hash_value);
    transparent_crc(p_560->g_216.s2, "p_560->g_216.s2", print_hash_value);
    transparent_crc(p_560->g_216.s3, "p_560->g_216.s3", print_hash_value);
    transparent_crc(p_560->g_216.s4, "p_560->g_216.s4", print_hash_value);
    transparent_crc(p_560->g_216.s5, "p_560->g_216.s5", print_hash_value);
    transparent_crc(p_560->g_216.s6, "p_560->g_216.s6", print_hash_value);
    transparent_crc(p_560->g_216.s7, "p_560->g_216.s7", print_hash_value);
    transparent_crc(p_560->g_216.s8, "p_560->g_216.s8", print_hash_value);
    transparent_crc(p_560->g_216.s9, "p_560->g_216.s9", print_hash_value);
    transparent_crc(p_560->g_216.sa, "p_560->g_216.sa", print_hash_value);
    transparent_crc(p_560->g_216.sb, "p_560->g_216.sb", print_hash_value);
    transparent_crc(p_560->g_216.sc, "p_560->g_216.sc", print_hash_value);
    transparent_crc(p_560->g_216.sd, "p_560->g_216.sd", print_hash_value);
    transparent_crc(p_560->g_216.se, "p_560->g_216.se", print_hash_value);
    transparent_crc(p_560->g_216.sf, "p_560->g_216.sf", print_hash_value);
    transparent_crc(p_560->g_238.f0, "p_560->g_238.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_560->g_261[i], "p_560->g_261[i]", print_hash_value);

    }
    transparent_crc(p_560->g_343.s0, "p_560->g_343.s0", print_hash_value);
    transparent_crc(p_560->g_343.s1, "p_560->g_343.s1", print_hash_value);
    transparent_crc(p_560->g_343.s2, "p_560->g_343.s2", print_hash_value);
    transparent_crc(p_560->g_343.s3, "p_560->g_343.s3", print_hash_value);
    transparent_crc(p_560->g_343.s4, "p_560->g_343.s4", print_hash_value);
    transparent_crc(p_560->g_343.s5, "p_560->g_343.s5", print_hash_value);
    transparent_crc(p_560->g_343.s6, "p_560->g_343.s6", print_hash_value);
    transparent_crc(p_560->g_343.s7, "p_560->g_343.s7", print_hash_value);
    transparent_crc(p_560->g_364, "p_560->g_364", print_hash_value);
    transparent_crc(p_560->g_388.s0, "p_560->g_388.s0", print_hash_value);
    transparent_crc(p_560->g_388.s1, "p_560->g_388.s1", print_hash_value);
    transparent_crc(p_560->g_388.s2, "p_560->g_388.s2", print_hash_value);
    transparent_crc(p_560->g_388.s3, "p_560->g_388.s3", print_hash_value);
    transparent_crc(p_560->g_388.s4, "p_560->g_388.s4", print_hash_value);
    transparent_crc(p_560->g_388.s5, "p_560->g_388.s5", print_hash_value);
    transparent_crc(p_560->g_388.s6, "p_560->g_388.s6", print_hash_value);
    transparent_crc(p_560->g_388.s7, "p_560->g_388.s7", print_hash_value);
    transparent_crc(p_560->g_388.s8, "p_560->g_388.s8", print_hash_value);
    transparent_crc(p_560->g_388.s9, "p_560->g_388.s9", print_hash_value);
    transparent_crc(p_560->g_388.sa, "p_560->g_388.sa", print_hash_value);
    transparent_crc(p_560->g_388.sb, "p_560->g_388.sb", print_hash_value);
    transparent_crc(p_560->g_388.sc, "p_560->g_388.sc", print_hash_value);
    transparent_crc(p_560->g_388.sd, "p_560->g_388.sd", print_hash_value);
    transparent_crc(p_560->g_388.se, "p_560->g_388.se", print_hash_value);
    transparent_crc(p_560->g_388.sf, "p_560->g_388.sf", print_hash_value);
    transparent_crc(p_560->g_390.s0, "p_560->g_390.s0", print_hash_value);
    transparent_crc(p_560->g_390.s1, "p_560->g_390.s1", print_hash_value);
    transparent_crc(p_560->g_390.s2, "p_560->g_390.s2", print_hash_value);
    transparent_crc(p_560->g_390.s3, "p_560->g_390.s3", print_hash_value);
    transparent_crc(p_560->g_390.s4, "p_560->g_390.s4", print_hash_value);
    transparent_crc(p_560->g_390.s5, "p_560->g_390.s5", print_hash_value);
    transparent_crc(p_560->g_390.s6, "p_560->g_390.s6", print_hash_value);
    transparent_crc(p_560->g_390.s7, "p_560->g_390.s7", print_hash_value);
    transparent_crc(p_560->g_390.s8, "p_560->g_390.s8", print_hash_value);
    transparent_crc(p_560->g_390.s9, "p_560->g_390.s9", print_hash_value);
    transparent_crc(p_560->g_390.sa, "p_560->g_390.sa", print_hash_value);
    transparent_crc(p_560->g_390.sb, "p_560->g_390.sb", print_hash_value);
    transparent_crc(p_560->g_390.sc, "p_560->g_390.sc", print_hash_value);
    transparent_crc(p_560->g_390.sd, "p_560->g_390.sd", print_hash_value);
    transparent_crc(p_560->g_390.se, "p_560->g_390.se", print_hash_value);
    transparent_crc(p_560->g_390.sf, "p_560->g_390.sf", print_hash_value);
    transparent_crc(p_560->g_441.f0, "p_560->g_441.f0", print_hash_value);
    transparent_crc(p_560->g_446.x, "p_560->g_446.x", print_hash_value);
    transparent_crc(p_560->g_446.y, "p_560->g_446.y", print_hash_value);
    transparent_crc(p_560->g_446.z, "p_560->g_446.z", print_hash_value);
    transparent_crc(p_560->g_446.w, "p_560->g_446.w", print_hash_value);
    transparent_crc(p_560->g_453.s0, "p_560->g_453.s0", print_hash_value);
    transparent_crc(p_560->g_453.s1, "p_560->g_453.s1", print_hash_value);
    transparent_crc(p_560->g_453.s2, "p_560->g_453.s2", print_hash_value);
    transparent_crc(p_560->g_453.s3, "p_560->g_453.s3", print_hash_value);
    transparent_crc(p_560->g_453.s4, "p_560->g_453.s4", print_hash_value);
    transparent_crc(p_560->g_453.s5, "p_560->g_453.s5", print_hash_value);
    transparent_crc(p_560->g_453.s6, "p_560->g_453.s6", print_hash_value);
    transparent_crc(p_560->g_453.s7, "p_560->g_453.s7", print_hash_value);
    transparent_crc(p_560->g_453.s8, "p_560->g_453.s8", print_hash_value);
    transparent_crc(p_560->g_453.s9, "p_560->g_453.s9", print_hash_value);
    transparent_crc(p_560->g_453.sa, "p_560->g_453.sa", print_hash_value);
    transparent_crc(p_560->g_453.sb, "p_560->g_453.sb", print_hash_value);
    transparent_crc(p_560->g_453.sc, "p_560->g_453.sc", print_hash_value);
    transparent_crc(p_560->g_453.sd, "p_560->g_453.sd", print_hash_value);
    transparent_crc(p_560->g_453.se, "p_560->g_453.se", print_hash_value);
    transparent_crc(p_560->g_453.sf, "p_560->g_453.sf", print_hash_value);
    transparent_crc(p_560->g_468.f0, "p_560->g_468.f0", print_hash_value);
    transparent_crc(p_560->g_482, "p_560->g_482", print_hash_value);
    transparent_crc(p_560->g_493.x, "p_560->g_493.x", print_hash_value);
    transparent_crc(p_560->g_493.y, "p_560->g_493.y", print_hash_value);
    transparent_crc(p_560->g_493.z, "p_560->g_493.z", print_hash_value);
    transparent_crc(p_560->g_493.w, "p_560->g_493.w", print_hash_value);
    transparent_crc(p_560->g_503, "p_560->g_503", print_hash_value);
    transparent_crc(p_560->g_511.x, "p_560->g_511.x", print_hash_value);
    transparent_crc(p_560->g_511.y, "p_560->g_511.y", print_hash_value);
    transparent_crc(p_560->g_511.z, "p_560->g_511.z", print_hash_value);
    transparent_crc(p_560->g_511.w, "p_560->g_511.w", print_hash_value);
    transparent_crc(p_560->g_512.s0, "p_560->g_512.s0", print_hash_value);
    transparent_crc(p_560->g_512.s1, "p_560->g_512.s1", print_hash_value);
    transparent_crc(p_560->g_512.s2, "p_560->g_512.s2", print_hash_value);
    transparent_crc(p_560->g_512.s3, "p_560->g_512.s3", print_hash_value);
    transparent_crc(p_560->g_512.s4, "p_560->g_512.s4", print_hash_value);
    transparent_crc(p_560->g_512.s5, "p_560->g_512.s5", print_hash_value);
    transparent_crc(p_560->g_512.s6, "p_560->g_512.s6", print_hash_value);
    transparent_crc(p_560->g_512.s7, "p_560->g_512.s7", print_hash_value);
    transparent_crc(p_560->g_533, "p_560->g_533", print_hash_value);
    transparent_crc(p_560->g_544, "p_560->g_544", print_hash_value);
    transparent_crc(p_560->v_collective, "p_560->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 61; i++)
            transparent_crc(p_560->g_special_values[i + 61 * get_linear_group_id()], "p_560->g_special_values[i + 61 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_560->l_comm_values[get_linear_local_id()], "p_560->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_560->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_560->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
