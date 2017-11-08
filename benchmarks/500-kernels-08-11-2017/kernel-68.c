// --atomics 62 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 97,42,2 -l 1,7,2
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

__constant uint32_t permutations[10][14] = {
{1,3,7,11,12,6,2,5,10,9,4,8,0,13}, // permutation 0
{5,9,12,2,4,7,0,11,10,6,8,13,1,3}, // permutation 1
{13,6,1,9,3,0,4,8,5,12,2,11,7,10}, // permutation 2
{10,0,1,9,13,5,6,4,2,11,12,8,7,3}, // permutation 3
{7,4,6,2,10,12,11,1,8,3,13,9,0,5}, // permutation 4
{1,13,11,12,4,10,5,0,8,3,2,6,7,9}, // permutation 5
{1,5,10,2,11,8,0,6,4,3,13,12,7,9}, // permutation 6
{3,9,2,12,6,4,10,7,5,13,0,11,1,8}, // permutation 7
{9,13,1,0,11,6,8,4,10,2,7,12,5,3}, // permutation 8
{6,13,4,12,5,11,1,10,0,9,7,8,3,2} // permutation 9
};

// Seed: 3605988881

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   volatile int32_t  f1;
};

struct S1 {
    volatile union U0 g_62[5];
    uint32_t g_68;
    int32_t g_70;
    int32_t g_78;
    VECTOR(int64_t, 8) g_81;
    volatile int32_t g_88;
    uint8_t g_90[8];
    volatile int64_t g_95;
    volatile int64_t *g_94;
    volatile int64_t **g_93;
    int16_t g_103;
    int64_t *g_117;
    int8_t g_128;
    int32_t *g_130;
    int32_t ** volatile g_129[6];
    volatile VECTOR(int16_t, 8) g_134;
    volatile VECTOR(int16_t, 16) g_135;
    uint32_t g_147;
    VECTOR(uint64_t, 16) g_157;
    VECTOR(uint64_t, 2) g_158;
    VECTOR(uint32_t, 8) g_159;
    VECTOR(uint32_t, 8) g_162;
    VECTOR(uint32_t, 16) g_163;
    VECTOR(uint32_t, 2) g_177;
    int32_t ** volatile g_226;
    union U0 g_236;
    VECTOR(int8_t, 4) g_249;
    volatile VECTOR(int8_t, 16) g_250;
    VECTOR(uint16_t, 2) g_260;
    VECTOR(uint16_t, 16) g_266;
    int32_t ** volatile g_272;
    VECTOR(uint8_t, 8) g_295;
    uint32_t g_304;
    VECTOR(uint32_t, 16) g_322;
    volatile VECTOR(int32_t, 16) g_337;
    volatile VECTOR(uint32_t, 4) g_345;
    uint16_t g_364;
    union U0 g_365;
    VECTOR(int32_t, 16) g_366;
    uint8_t *g_379;
    uint8_t **g_378[9][9][3];
    uint8_t *** volatile g_377[5];
    volatile VECTOR(int16_t, 16) g_438;
    uint16_t *g_488;
    uint16_t * volatile * volatile g_487;
    uint16_t * volatile * volatile * volatile g_489;
    int64_t g_496;
    int64_t *g_495;
    int32_t * volatile g_506;
    int32_t ** volatile g_521;
    int32_t **g_524;
    int32_t ***g_523[1][5][1];
    int32_t ** volatile g_527[3][2];
    VECTOR(int16_t, 2) g_533;
    int32_t ** volatile g_611[2][7][8];
    union U0 g_635;
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
int16_t  func_1(struct S1 * p_644);
int32_t * func_2(int32_t  p_3, struct S1 * p_644);
int8_t  func_6(uint32_t  p_7, uint32_t  p_8, uint32_t  p_9, int32_t  p_10, int32_t * p_11, struct S1 * p_644);
int64_t  func_13(int16_t  p_14, uint32_t  p_15, int32_t * p_16, int32_t * p_17, struct S1 * p_644);
uint32_t  func_19(uint64_t  p_20, int32_t  p_21, int32_t  p_22, int32_t * p_23, struct S1 * p_644);
uint64_t  func_24(int32_t * p_25, int32_t * p_26, uint16_t  p_27, int64_t  p_28, struct S1 * p_644);
int32_t * func_29(int16_t  p_30, struct S1 * p_644);
int32_t  func_31(uint32_t  p_32, int32_t * p_33, uint32_t  p_34, int32_t * p_35, uint8_t  p_36, struct S1 * p_644);
uint32_t  func_37(int64_t  p_38, uint32_t  p_39, int16_t  p_40, int32_t * p_41, int64_t  p_42, struct S1 * p_644);
int64_t  func_43(uint8_t  p_44, int64_t  p_45, int32_t  p_46, int32_t * p_47, int32_t  p_48, struct S1 * p_644);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_644->l_comm_values p_644->g_comm_values p_644->g_62 p_644->g_70 p_644->g_78 p_644->g_90 p_644->g_93 p_644->g_95 p_644->g_62.f0 p_644->g_117 p_644->g_128 p_644->g_129 p_644->g_81 p_644->g_134 p_644->g_135 p_644->g_88 p_644->g_147 p_644->g_157 p_644->g_158 p_644->g_159 p_644->g_162 p_644->g_163 p_644->g_177 p_644->g_130 p_644->g_68 p_644->g_226 p_644->g_365 p_644->g_366 p_644->g_272 p_644->g_364 p_644->g_438 p_644->g_295 p_644->g_322 p_644->g_103 p_644->g_487 p_644->g_489 p_644->g_523 p_644->g_266 p_644->g_533 p_644->g_249 p_644->g_260 p_644->g_304 p_644->g_379 p_644->g_236.f0 p_644->g_496 p_644->g_635
 * writes: p_644->g_68 p_644->g_comm_values p_644->g_81 p_644->l_comm_values p_644->g_90 p_644->g_93 p_644->g_70 p_644->g_128 p_644->g_103 p_644->g_147 p_644->g_157 p_644->g_78 p_644->g_364 p_644->g_130 p_644->g_378 p_644->g_366 p_644->g_487 p_644->g_495 p_644->g_304 p_644->g_533 p_644->g_496 p_644->g_260
 */
int16_t  func_1(struct S1 * p_644)
{ /* block id: 4 */
    VECTOR(uint16_t, 8) l_18 = (VECTOR(uint16_t, 8))(0x01BAL, (VECTOR(uint16_t, 4))(0x01BAL, (VECTOR(uint16_t, 2))(0x01BAL, 0xEA38L), 0xEA38L), 0xEA38L, 0x01BAL, 0xEA38L);
    int32_t *l_490 = (void*)0;
    int64_t *l_493 = (void*)0;
    int64_t **l_494[8][10][3] = {{{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493}},{{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493}},{{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493}},{{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493}},{{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493}},{{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493}},{{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493}},{{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493},{&l_493,&l_493,&l_493}}};
    uint32_t l_500 = 0xB9C7F3DDL;
    int32_t **l_612 = &l_490;
    uint64_t *l_621 = (void*)0;
    uint64_t *l_622 = (void*)0;
    uint64_t *l_623[10];
    int64_t l_628 = 0x1D954F8D5CAD57BFL;
    int8_t *l_638 = &p_644->g_128;
    uint16_t l_639 = 0x50DBL;
    int64_t l_640 = (-9L);
    uint16_t *l_641[10][9] = {{&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639},{&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639},{&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639},{&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639},{&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639},{&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639},{&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639},{&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639},{&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639},{&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639,&l_639,(void*)0,&l_639}};
    int32_t l_642 = 0x08BF647CL;
    int8_t l_643 = 1L;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_623[i] = (void*)0;
    (*l_612) = func_2(((safe_mod_func_int8_t_s_s(func_6((safe_unary_minus_func_int64_t_s(func_13(l_18.s0, func_19((l_18.s5 > (l_18.s1 , ((func_24(func_29(p_644->l_comm_values[(safe_mod_func_uint32_t_u_u(p_644->tid, 14))], p_644), ((~p_644->g_295.s4) , l_490), p_644->g_163.s3, (safe_sub_func_int32_t_s_s((((p_644->g_495 = l_493) == &p_644->g_496) < p_644->g_163.s1), l_18.s7)), p_644) & p_644->g_162.s1) > p_644->g_163.s2))), p_644->g_177.y, l_500, l_490, p_644), l_490, l_490, p_644))), p_644->g_159.s7, p_644->g_236.f0, l_18.s2, l_490, p_644), 0x71L)) , 2L), p_644);
    atomic_min(&p_644->l_atomic_reduction[0], ((safe_rshift_func_uint16_t_u_u((p_644->g_158.x , (p_644->g_260.y = ((l_500 , (l_643 = (l_642 = (((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(1L, (safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s(p_644->g_496, (++p_644->g_157.sd))), ((p_644->g_159.s0 <= (((VECTOR(uint16_t, 16))(((safe_rshift_func_uint16_t_u_s(0xD6ADL, (l_628 < (((safe_lshift_func_int8_t_s_u(((*l_638) = (safe_div_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((p_644->g_635 , ((safe_add_func_int8_t_s_s((!(&p_644->g_94 == &l_493)), l_500)) < p_644->g_260.x)), 0xA8L)) , 1UL), 5L))), 5)) , p_644->g_162.s3) , 1L)))) <= p_644->g_249.y), l_639, ((VECTOR(uint16_t, 8))(0UL)), 0x53F5L, ((VECTOR(uint16_t, 4))(65535UL)), 0UL)).sc != l_640)) | l_628))), (-1L))), 0x390EL, (-4L))).hi)).yyxy, ((VECTOR(int16_t, 4))((-1L)))))).z | p_644->g_266.se)))) & GROUP_DIVERGE(1, 1)))), l_18.s4)) && 0x2792L) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_644->v_collective += p_644->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return p_644->g_159.s0;
}


/* ------------------------------------------ */
/* 
 * reads : p_644->g_364 p_644->g_130
 * writes: p_644->g_364 p_644->g_70
 */
int32_t * func_2(int32_t  p_3, struct S1 * p_644)
{ /* block id: 286 */
    uint16_t *l_607 = &p_644->g_364;
    int32_t *l_610[6][4][1] = {{{&p_644->g_78},{&p_644->g_78},{&p_644->g_78},{&p_644->g_78}},{{&p_644->g_78},{&p_644->g_78},{&p_644->g_78},{&p_644->g_78}},{{&p_644->g_78},{&p_644->g_78},{&p_644->g_78},{&p_644->g_78}},{{&p_644->g_78},{&p_644->g_78},{&p_644->g_78},{&p_644->g_78}},{{&p_644->g_78},{&p_644->g_78},{&p_644->g_78},{&p_644->g_78}},{{&p_644->g_78},{&p_644->g_78},{&p_644->g_78},{&p_644->g_78}}};
    int i, j, k;
    (*p_644->g_130) = ((VECTOR(int32_t, 4))((safe_lshift_func_uint16_t_u_u((--(*l_607)), 8)), 0x3530A741L, (-2L), (-6L))).x;
    return l_610[2][3][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_644->g_496
 * writes: p_644->g_496
 */
int8_t  func_6(uint32_t  p_7, uint32_t  p_8, uint32_t  p_9, int32_t  p_10, int32_t * p_11, struct S1 * p_644)
{ /* block id: 277 */
    uint8_t l_598 = 251UL;
    int8_t *l_603[10];
    int8_t **l_602 = &l_603[8];
    int8_t ***l_604 = &l_602;
    int i;
    for (i = 0; i < 10; i++)
        l_603[i] = &p_644->g_128;
    for (p_644->g_496 = (-28); (p_644->g_496 != 7); p_644->g_496 = safe_add_func_int16_t_s_s(p_644->g_496, 4))
    { /* block id: 280 */
        uint64_t l_601 = 0x6D28953019F6E5C4L;
        l_598--;
        return l_601;
    }
    (*l_604) = l_602;
    return p_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_644->g_159 p_644->g_95 p_644->g_295 p_644->g_533 p_644->g_62.f0 p_644->g_130 p_644->g_272 p_644->g_70 p_644->g_249 p_644->g_260 p_644->g_304 p_644->g_379 p_644->g_90
 * writes: p_644->g_378 p_644->g_70 p_644->g_comm_values p_644->g_304 p_644->g_533 p_644->g_103
 */
int64_t  func_13(int16_t  p_14, uint32_t  p_15, int32_t * p_16, int32_t * p_17, struct S1 * p_644)
{ /* block id: 253 */
    uint8_t *l_529 = &p_644->g_90[4];
    VECTOR(int16_t, 16) l_532 = (VECTOR(int16_t, 16))(0x61E9L, (VECTOR(int16_t, 4))(0x61E9L, (VECTOR(int16_t, 2))(0x61E9L, (-5L)), (-5L)), (-5L), 0x61E9L, (-5L), (VECTOR(int16_t, 2))(0x61E9L, (-5L)), (VECTOR(int16_t, 2))(0x61E9L, (-5L)), 0x61E9L, (-5L), 0x61E9L, (-5L));
    int32_t l_534 = 0L;
    uint8_t ***l_535 = &p_644->g_378[4][7][1];
    uint8_t **l_537 = (void*)0;
    uint8_t ***l_536 = &l_537;
    VECTOR(uint64_t, 16) l_538 = (VECTOR(uint64_t, 16))(0x3C5C8E9D30DACD3CL, (VECTOR(uint64_t, 4))(0x3C5C8E9D30DACD3CL, (VECTOR(uint64_t, 2))(0x3C5C8E9D30DACD3CL, 0UL), 0UL), 0UL, 0x3C5C8E9D30DACD3CL, 0UL, (VECTOR(uint64_t, 2))(0x3C5C8E9D30DACD3CL, 0UL), (VECTOR(uint64_t, 2))(0x3C5C8E9D30DACD3CL, 0UL), 0x3C5C8E9D30DACD3CL, 0UL, 0x3C5C8E9D30DACD3CL, 0UL);
    int64_t *l_549 = (void*)0;
    int64_t *l_550 = (void*)0;
    int64_t *l_551 = (void*)0;
    int64_t *l_552 = (void*)0;
    int64_t *l_553 = (void*)0;
    int64_t *l_554 = (void*)0;
    int64_t *l_555 = (void*)0;
    int64_t *l_556 = (void*)0;
    int64_t *l_557 = (void*)0;
    int64_t *l_558 = (void*)0;
    int64_t *l_559 = (void*)0;
    int64_t *l_560 = (void*)0;
    int64_t *l_561 = (void*)0;
    int64_t *l_562 = (void*)0;
    int64_t *l_563[8][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_570[5];
    int i, j;
    for (i = 0; i < 5; i++)
        l_570[i] = 0x47F218BEL;
    (*p_644->g_130) = (+((p_644->g_159.s0 , l_529) != ((((((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))((~(p_644->g_95 & (safe_add_func_uint64_t_u_u((p_644->g_295.s4 , (p_14 & ((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 2))(l_532.s7e)).xyxyxyxxxyyyyxyx, ((VECTOR(int16_t, 2))(p_644->g_533.xy)).xxxxxxxyxyxyxxxy))).sc)), (((l_534 = 0x4812A10FA99D5E39L) , &l_529) != ((*l_536) = ((*l_535) = &l_529))))))), 0x9BC178DC66742B0FL, ((VECTOR(uint64_t, 2))(18446744073709551615UL, 0xE16E8A5562988685L)), ((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x5486B759D2FA7DD2L, 0x3BB68F0C3E78EBC6L)), 0xE48C223636F0699AL, 18446744073709551607UL)), ((VECTOR(uint64_t, 4))(l_538.s8ddc))))))).odd)).zzzxywzz, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))((l_532.sc >= 0x99BDDC05L), p_644->g_62[4].f0, 7UL, 3UL)).lo)).yyyyxyxx))).s7 ^ p_14) != 1L) && 0x5655CEE898E9E744L) , (**l_536))));
    (*p_644->g_130) = (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0x8FL, ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(255UL, 5UL)), ((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(((**p_644->g_272) | (p_644->g_249.y == (safe_add_func_uint64_t_u_u(l_534, (!(+(safe_div_func_int16_t_s_s((!(safe_sub_func_uint16_t_u_u((((GROUP_DIVERGE(2, 1) || (l_570[2] &= (safe_mod_func_int8_t_s_s((!((safe_sub_func_uint16_t_u_u(l_532.s7, ((p_644->g_comm_values[p_644->tid] = (-2L)) , ((safe_add_func_int16_t_s_s(p_644->g_260.y, ((0x829D64EF089F9BE2L == (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((((p_15 >= l_534) && GROUP_DIVERGE(0, 1)) , p_14), 2)), 0x7B80A10FL))) < l_532.s1))) > 0UL)))) > p_14)), GROUP_DIVERGE(1, 1))))) != l_538.s3) , p_15), 0x1685L))), p_15)))))))), l_532.sf, 0xDEL, ((VECTOR(uint8_t, 4))(0xA8L)), 0UL)).s63, ((VECTOR(uint8_t, 2))(1UL))))), 0xDFL, 0xA1L)).xywxxzwxyxywxyxx))).s29, ((VECTOR(uint8_t, 2))(0x50L))))), 3UL)))).y >= l_538.s6);
    for (p_644->g_70 = 0; (p_644->g_70 != 18); p_644->g_70 = safe_add_func_uint16_t_u_u(p_644->g_70, 1))
    { /* block id: 263 */
        int32_t *l_573 = (void*)0;
        int32_t *l_574 = (void*)0;
        int32_t *l_575 = (void*)0;
        int32_t *l_576 = (void*)0;
        int32_t *l_577 = (void*)0;
        int32_t *l_578[7][6][6] = {{{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]}},{{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]}},{{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]}},{{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]}},{{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]}},{{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]}},{{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]},{&p_644->g_78,&l_570[2],&l_570[2],(void*)0,&l_570[2],&l_570[2]}}};
        VECTOR(uint16_t, 2) l_585 = (VECTOR(uint16_t, 2))(1UL, 65527UL);
        int i, j, k;
        l_570[2] = 0x30B43027L;
        l_534 = (-1L);
        if (p_14)
            break;
        for (p_644->g_304 = 0; (p_644->g_304 <= 17); p_644->g_304 = safe_add_func_int32_t_s_s(p_644->g_304, 4))
        { /* block id: 269 */
            VECTOR(uint16_t, 4) l_583 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL);
            VECTOR(uint16_t, 2) l_584 = (VECTOR(uint16_t, 2))(65527UL, 0UL);
            VECTOR(uint16_t, 8) l_586 = (VECTOR(uint16_t, 8))(0x5DC6L, (VECTOR(uint16_t, 4))(0x5DC6L, (VECTOR(uint16_t, 2))(0x5DC6L, 5UL), 5UL), 5UL, 0x5DC6L, 5UL);
            int16_t *l_589 = &p_644->g_103;
            uint16_t l_594 = 0xD937L;
            int32_t l_595 = (-2L);
            int i;
            l_570[2] ^= (l_595 = ((safe_rshift_func_int16_t_s_s(l_538.s7, ((((&p_14 == (void*)0) <= 7L) , (((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(l_583.yzzxxzxx)).odd, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x8A73L, 0x05FAL)).xyyxxyyx)).hi))).xzwyxxxzzwywzwwz, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 8))(l_584.yyyyxxxy)).s25, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 2))(0x0463L, 1UL)).xxyyyxyyyxxxxxyx, ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_585.yy)))), ((VECTOR(uint16_t, 8))(l_586.s54577110)).s02))))).yxyx, (uint16_t)((safe_lshift_func_int16_t_s_s((((p_644->g_533.y &= l_538.s6) <= ((*l_589) = (-1L))) ^ ((0xA4L <= (safe_sub_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((l_594 ^ ((*p_644->g_379) , 252UL)) || l_594), (-4L))) < 4294967286UL), p_14))) , (-8L))), p_644->g_90[0])) == p_644->g_70)))).xywyxxxxxzwxwzyw))).sb6, ((VECTOR(uint16_t, 2))(0x47D6L)), ((VECTOR(uint16_t, 2))(0x4FF1L)))))))).yyyyxxxyxyyyyyyy, ((VECTOR(uint16_t, 16))(0xB45BL))))).s4 || l_583.x)) && p_15))) , l_583.z));
        }
    }
    return p_14;
}


/* ------------------------------------------ */
/* 
 * reads : p_644->g_70 p_644->g_128 p_644->g_272 p_644->g_130 p_644->g_103 p_644->g_523 p_644->g_78 p_644->g_266
 * writes: p_644->g_70 p_644->g_78 p_644->g_103
 */
uint32_t  func_19(uint64_t  p_20, int32_t  p_21, int32_t  p_22, int32_t * p_23, struct S1 * p_644)
{ /* block id: 235 */
    int32_t l_505[1][7][7] = {{{(-6L),1L,0x461110BFL,1L,(-6L),(-6L),1L},{(-6L),1L,0x461110BFL,1L,(-6L),(-6L),1L},{(-6L),1L,0x461110BFL,1L,(-6L),(-6L),1L},{(-6L),1L,0x461110BFL,1L,(-6L),(-6L),1L},{(-6L),1L,0x461110BFL,1L,(-6L),(-6L),1L},{(-6L),1L,0x461110BFL,1L,(-6L),(-6L),1L},{(-6L),1L,0x461110BFL,1L,(-6L),(-6L),1L}}};
    int32_t *l_508 = &p_644->g_70;
    int32_t *l_509 = (void*)0;
    int32_t *l_510 = (void*)0;
    int32_t *l_511 = &p_644->g_78;
    int32_t *l_512 = &p_644->g_70;
    int32_t *l_513[4][4] = {{&p_644->g_78,(void*)0,&p_644->g_78,&p_644->g_78},{&p_644->g_78,(void*)0,&p_644->g_78,&p_644->g_78},{&p_644->g_78,(void*)0,&p_644->g_78,&p_644->g_78},{&p_644->g_78,(void*)0,&p_644->g_78,&p_644->g_78}};
    int16_t l_514 = 0x4564L;
    uint16_t l_515 = 0x7562L;
    int32_t *l_520 = &p_644->g_78;
    int32_t ***l_525 = &p_644->g_524;
    int32_t ***l_526 = (void*)0;
    int32_t **l_528 = &l_511;
    int i, j, k;
    for (p_644->g_70 = 16; (p_644->g_70 >= (-18)); p_644->g_70 = safe_sub_func_uint32_t_u_u(p_644->g_70, 3))
    { /* block id: 238 */
        int32_t *l_507 = &p_644->g_78;
        l_505[0][2][3] = (safe_sub_func_uint64_t_u_u((((!p_644->g_128) == 0L) && (0x57L > 0x70L)), 0x5B70851879517B10L));
        (*l_507) = (**p_644->g_272);
    }
    ++l_515;
    for (p_644->g_103 = 0; (p_644->g_103 > 14); p_644->g_103++)
    { /* block id: 245 */
        int32_t **l_522 = &l_511;
        (*l_522) = (p_23 = l_520);
        (*l_511) |= ((l_525 = p_644->g_523[0][4][0]) != l_526);
    }
    (*l_528) = l_513[3][3];
    return p_644->g_266.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_644->g_comm_values p_644->l_comm_values p_644->g_62 p_644->g_70 p_644->g_78 p_644->g_90 p_644->g_93 p_644->g_147 p_644->g_117 p_644->g_128 p_644->g_129 p_644->g_158 p_644->g_68 p_644->g_157 p_644->g_163 p_644->g_130 p_644->g_177 p_644->g_226 p_644->g_365 p_644->g_272 p_644->g_295 p_644->g_322 p_644->g_366 p_644->g_487 p_644->g_489
 * writes: p_644->g_103 p_644->g_comm_values p_644->g_81 p_644->l_comm_values p_644->g_90 p_644->g_93 p_644->g_70 p_644->g_147 p_644->g_128 p_644->g_78 p_644->g_364 p_644->g_130 p_644->g_378 p_644->g_366 p_644->g_68 p_644->g_487
 */
uint64_t  func_24(int32_t * p_25, int32_t * p_26, uint16_t  p_27, int64_t  p_28, struct S1 * p_644)
{ /* block id: 231 */
    VECTOR(int8_t, 2) l_497 = (VECTOR(int8_t, 2))(0x79L, (-9L));
    int16_t *l_498 = &p_644->g_103;
    int32_t **l_499[6] = {&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130};
    int i;
    p_26 = func_29(((*l_498) = l_497.y), p_644);
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_644->g_comm_values p_644->l_comm_values p_644->g_62 p_644->g_70 p_644->g_78 p_644->g_90 p_644->g_93 p_644->g_95 p_644->g_62.f0 p_644->g_117 p_644->g_128 p_644->g_129 p_644->g_81 p_644->g_134 p_644->g_135 p_644->g_88 p_644->g_147 p_644->g_157 p_644->g_158 p_644->g_159 p_644->g_162 p_644->g_163 p_644->g_177 p_644->g_130 p_644->g_68 p_644->g_226 p_644->g_365 p_644->g_366 p_644->g_272 p_644->g_364 p_644->g_438 p_644->g_295 p_644->g_322 p_644->g_103 p_644->g_487 p_644->g_489
 * writes: p_644->g_68 p_644->g_comm_values p_644->g_81 p_644->l_comm_values p_644->g_90 p_644->g_93 p_644->g_70 p_644->g_128 p_644->g_103 p_644->g_147 p_644->g_157 p_644->g_78 p_644->g_364 p_644->g_130 p_644->g_378 p_644->g_366 p_644->g_487
 */
int32_t * func_29(int16_t  p_30, struct S1 * p_644)
{ /* block id: 5 */
    VECTOR(uint64_t, 8) l_49 = (VECTOR(uint64_t, 8))(0xDC1094D0E834AB46L, (VECTOR(uint64_t, 4))(0xDC1094D0E834AB46L, (VECTOR(uint64_t, 2))(0xDC1094D0E834AB46L, 0x77B69C93E32883E7L), 0x77B69C93E32883E7L), 0x77B69C93E32883E7L, 0xDC1094D0E834AB46L, 0x77B69C93E32883E7L);
    VECTOR(int16_t, 8) l_63 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
    int16_t *l_64 = (void*)0;
    int16_t *l_65 = (void*)0;
    int16_t *l_66 = (void*)0;
    int16_t *l_67[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_69 = &p_644->g_70;
    int32_t **l_71 = &l_69;
    int16_t l_72 = 0x48FFL;
    int64_t *l_73 = (void*)0;
    int64_t *l_74 = (void*)0;
    int64_t *l_75 = (void*)0;
    int64_t *l_76 = (void*)0;
    uint64_t l_77 = 0xF595C9828A5DA0DEL;
    int64_t *l_79 = (void*)0;
    int64_t *l_80[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_82 = (-3L);
    int64_t *l_83 = (void*)0;
    int64_t *l_84[1];
    int32_t *l_85 = &p_644->g_70;
    int16_t l_184 = (-2L);
    uint8_t **l_375 = (void*)0;
    VECTOR(int32_t, 2) l_433 = (VECTOR(int32_t, 2))((-6L), 0x272A4CA9L);
    uint16_t l_472 = 0UL;
    uint16_t l_480 = 65529UL;
    int32_t *l_483 = (void*)0;
    uint16_t l_484 = 0x45A5L;
    int i;
    for (i = 0; i < 1; i++)
        l_84[i] = (void*)0;
    if (func_31(func_37((p_644->l_comm_values[(safe_mod_func_uint32_t_u_u(p_644->tid, 14))] = (p_644->g_comm_values[p_644->tid] = func_43((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_49.s3167)).wwyxwwwy)).s3553522645661444)).sb , (!(safe_rshift_func_uint8_t_u_u(((((p_644->g_comm_values[p_644->tid] && (((p_644->l_comm_values[(safe_mod_func_uint32_t_u_u(p_644->tid, 14))] = (((p_644->g_81.s5 = (l_82 = (((safe_sub_func_int8_t_s_s(((~((safe_rshift_func_int16_t_s_u((-1L), 7)) ^ ((safe_mul_func_uint16_t_u_u((0x36042C8CL <= FAKE_DIVERGE(p_644->group_2_offset, get_group_id(2), 10)), (((safe_mod_func_int64_t_s_s((((GROUP_DIVERGE(0, 1) > p_644->l_comm_values[(safe_mod_func_uint32_t_u_u(p_644->tid, 14))]) , 0x1F916744L) , (p_644->g_comm_values[p_644->tid] = (((safe_rshift_func_int16_t_s_s((p_644->g_62[4] , ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))((-4L), ((VECTOR(int16_t, 2))(l_63.s11)), 0x0E95L)).xyxxxyxw, (int16_t)(p_644->g_68 = p_644->g_comm_values[p_644->tid])))).odd)).even)).odd), 7)) | ((((*l_71) = l_69) != ((l_72 = (~0xCFCCL)) , (void*)0)) != p_644->l_comm_values[(safe_mod_func_uint32_t_u_u(p_644->tid, 14))])) < p_644->l_comm_values[(safe_mod_func_uint32_t_u_u(p_644->tid, 14))]))), p_644->l_comm_values[(safe_mod_func_uint32_t_u_u(p_644->tid, 14))])) && l_77) , (*l_69)))) >= p_644->g_78))) && 0xA7A66B3E62993103L), 0x01L)) < p_644->g_78) > p_644->l_comm_values[(safe_mod_func_uint32_t_u_u(p_644->tid, 14))]))) , 0xD04141EDA73889CFL) < p_30)) | 18446744073709551610UL) > p_30)) > p_30) , p_30) & l_49.s0), 5)))), p_30, p_30, l_85, p_30, p_644))), p_644->g_163.s1, l_184, &p_644->g_78, p_30, p_644), p_644->g_130, p_30, p_644->g_130, p_30, p_644))
    { /* block id: 149 */
        uint32_t l_374 = 4294967295UL;
        for (l_77 = (-25); (l_77 >= 19); l_77 = safe_add_func_int64_t_s_s(l_77, 6))
        { /* block id: 152 */
            (*l_85) &= (safe_mul_func_int8_t_s_s((!(-7L)), l_374));
        }
    }
    else
    { /* block id: 155 */
        int16_t l_462 = 0x274DL;
        int32_t l_463 = 0x4B3D7C2DL;
        int32_t l_464 = 0x7C2E0CEEL;
        int32_t l_465 = (-4L);
        int32_t l_467 = 0x5F899499L;
        int32_t l_468 = (-8L);
        int32_t l_469 = (-6L);
        int32_t l_471 = 1L;
        if ((7UL || ((-1L) <= FAKE_DIVERGE(p_644->local_1_offset, get_local_id(1), 10))))
        { /* block id: 156 */
            uint8_t ***l_376 = &l_375;
            uint8_t ***l_380 = &p_644->g_378[0][2][1];
            (*l_85) &= 0x44B39CB5L;
            (*l_380) = ((*l_376) = l_375);
            if ((atomic_inc(&p_644->g_atomic_input[62 * get_linear_group_id() + 47]) == 3))
            { /* block id: 161 */
                uint32_t l_381 = 0xE664EA68L;
                VECTOR(uint32_t, 16) l_395 = (VECTOR(uint32_t, 16))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0UL), 0UL), 0UL, 4UL, 0UL, (VECTOR(uint32_t, 2))(4UL, 0UL), (VECTOR(uint32_t, 2))(4UL, 0UL), 4UL, 0UL, 4UL, 0UL);
                int64_t l_396[1];
                union U0 l_421[5][7][2] = {{{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}}},{{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}}},{{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}}},{{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}}},{{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}},{{0L},{-1L}}}};
                union U0 l_422 = {0x1024B543L};/* VOLATILE GLOBAL l_422 */
                uint32_t l_423 = 4294967291UL;
                VECTOR(int16_t, 8) l_424 = (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x26C8L), 0x26C8L), 0x26C8L, (-2L), 0x26C8L);
                int64_t **l_425[1];
                uint16_t l_426[10][2] = {{0xF5DEL,1UL},{0xF5DEL,1UL},{0xF5DEL,1UL},{0xF5DEL,1UL},{0xF5DEL,1UL},{0xF5DEL,1UL},{0xF5DEL,1UL},{0xF5DEL,1UL},{0xF5DEL,1UL},{0xF5DEL,1UL}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_396[i] = 0x305D3E4198391A6FL;
                for (i = 0; i < 1; i++)
                    l_425[i] = (void*)0;
                if (l_381)
                { /* block id: 162 */
                    uint32_t l_382 = 1UL;
                    uint64_t l_383 = 18446744073709551615UL;
                    uint32_t l_386 = 5UL;
                    int16_t l_387 = (-4L);
                    int32_t l_388 = 0x082B84FBL;
                    int64_t l_389 = 0x0FC9B504F2B35090L;
                    l_382 = (-1L);
                    ++l_383;
                    l_387 = l_386;
                    l_389 &= (l_388 , 1L);
                }
                else
                { /* block id: 167 */
                    VECTOR(uint64_t, 8) l_390 = (VECTOR(uint64_t, 8))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 9UL), 9UL), 9UL, 18446744073709551609UL, 9UL);
                    uint8_t l_391 = 0x5DL;
                    uint64_t l_392[7] = {0x8D5FAAE3616FCAE2L,0x8D5FAAE3616FCAE2L,0x8D5FAAE3616FCAE2L,0x8D5FAAE3616FCAE2L,0x8D5FAAE3616FCAE2L,0x8D5FAAE3616FCAE2L,0x8D5FAAE3616FCAE2L};
                    int8_t l_393 = 0x50L;
                    uint64_t l_394 = 0x6B14939EB4650914L;
                    int i;
                    l_394 = (l_393 = (((VECTOR(uint64_t, 2))(l_390.s34)).hi , (l_392[1] &= l_391)));
                }
                if ((l_396[0] = l_395.sd))
                { /* block id: 173 */
                    int8_t l_397 = 0x7CL;
                    uint16_t l_415 = 0UL;
                    int32_t l_416 = 0x1CB16496L;
                    if (l_397)
                    { /* block id: 174 */
                        uint64_t l_398 = 0x3EE623DF4E2175B5L;
                        int32_t l_401 = 0x23E99361L;
                        int32_t l_402 = 0x2776785EL;
                        uint8_t l_403[4][5][6] = {{{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL}},{{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL}},{{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL}},{{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL},{0x28L,0x28L,1UL,0xE4L,0x87L,255UL}}};
                        int i, j, k;
                        l_398++;
                        --l_403[1][0][5];
                    }
                    else
                    { /* block id: 177 */
                        int64_t l_406 = 0x0DB9A14C3500AF8CL;
                        int8_t l_407 = (-1L);
                        uint8_t l_408 = 8UL;
                        int32_t l_411 = 0L;
                        uint16_t l_412[10] = {0x7B7FL,5UL,0x819FL,5UL,0x7B7FL,0x7B7FL,5UL,0x819FL,5UL,0x7B7FL};
                        int i;
                        l_406 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(2L, 0x6292644BL)).xyyy)))).w;
                        ++l_408;
                        --l_412[7];
                    }
                    l_416 |= l_415;
                }
                else
                { /* block id: 183 */
                    int32_t l_417 = (-9L);
                    VECTOR(int32_t, 4) l_418 = (VECTOR(int32_t, 4))(0x1261577AL, (VECTOR(int32_t, 2))(0x1261577AL, (-3L)), (-3L));
                    VECTOR(int32_t, 8) l_419 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x294CD86EL), 0x294CD86EL), 0x294CD86EL, 0L, 0x294CD86EL);
                    uint16_t l_420 = 0x3879L;
                    int i;
                    l_420 = ((VECTOR(int32_t, 8))(l_417, ((VECTOR(int32_t, 2))(l_418.zx)).odd, ((VECTOR(int32_t, 4))(l_419.s4774)), 1L, 0x68EFD22FL)).s4;
                }
                l_425[0] = (l_421[3][4][1] , (((l_422 , l_423) , ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_424.s31)).xxyxyyyy)).s5) , (void*)0));
                l_426[2][1] &= ((VECTOR(int32_t, 8))((-1L), 0x3EFF9A2DL, 3L, 0L, (-1L), 0x774E0E85L, 0L, (-2L))).s2;
                unsigned int result = 0;
                result += l_381;
                result += l_395.sf;
                result += l_395.se;
                result += l_395.sd;
                result += l_395.sc;
                result += l_395.sb;
                result += l_395.sa;
                result += l_395.s9;
                result += l_395.s8;
                result += l_395.s7;
                result += l_395.s6;
                result += l_395.s5;
                result += l_395.s4;
                result += l_395.s3;
                result += l_395.s2;
                result += l_395.s1;
                result += l_395.s0;
                int l_396_i0;
                for (l_396_i0 = 0; l_396_i0 < 1; l_396_i0++) {
                    result += l_396[l_396_i0];
                }
                int l_421_i0, l_421_i1, l_421_i2;
                for (l_421_i0 = 0; l_421_i0 < 5; l_421_i0++) {
                    for (l_421_i1 = 0; l_421_i1 < 7; l_421_i1++) {
                        for (l_421_i2 = 0; l_421_i2 < 2; l_421_i2++) {
                            result += l_421[l_421_i0][l_421_i1][l_421_i2].f0;
                            result += l_421[l_421_i0][l_421_i1][l_421_i2].f1;
                        }
                    }
                }
                result += l_422.f0;
                result += l_422.f1;
                result += l_423;
                result += l_424.s7;
                result += l_424.s6;
                result += l_424.s5;
                result += l_424.s4;
                result += l_424.s3;
                result += l_424.s2;
                result += l_424.s1;
                result += l_424.s0;
                int l_426_i0, l_426_i1;
                for (l_426_i0 = 0; l_426_i0 < 10; l_426_i0++) {
                    for (l_426_i1 = 0; l_426_i1 < 2; l_426_i1++) {
                        result += l_426[l_426_i0][l_426_i1];
                    }
                }
                atomic_add(&p_644->g_special_values[62 * get_linear_group_id() + 47], result);
            }
            else
            { /* block id: 188 */
                (1 + 1);
            }
            for (p_644->g_70 = 2; (p_644->g_70 < 2); p_644->g_70++)
            { /* block id: 193 */
                for (p_644->g_364 = 0; (p_644->g_364 == 25); ++p_644->g_364)
                { /* block id: 196 */
                    atomic_sub(&p_644->g_atomic_reduction[get_linear_group_id()], ((-1L) >= p_30) + get_linear_global_id());
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_644->v_collective += p_644->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if ((*l_69))
                        break;
                }
                return (*p_644->g_226);
            }
        }
        else
        { /* block id: 202 */
            int32_t l_443 = 1L;
            VECTOR(int32_t, 2) l_451 = (VECTOR(int32_t, 2))(0x1AD6C5EDL, 0x29C2B25CL);
            int32_t l_466[3][5][3] = {{{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)}},{{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)}},{{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-7L)}}};
            int i, j, k;
            for (p_644->g_364 = 0; (p_644->g_364 <= 31); p_644->g_364 = safe_add_func_uint32_t_u_u(p_644->g_364, 6))
            { /* block id: 205 */
                uint16_t l_444 = 0x2647L;
                int32_t l_445 = (-1L);
                uint16_t *l_448 = (void*)0;
                uint16_t *l_449 = (void*)0;
                uint16_t *l_450 = (void*)0;
                uint64_t *l_452[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_453 = 0x766856DBL;
                int32_t l_459 = (-5L);
                int32_t *l_460 = (void*)0;
                int32_t *l_461[10][6] = {{(void*)0,(void*)0,(void*)0,&l_459,&p_644->g_78,&l_459},{(void*)0,(void*)0,(void*)0,&l_459,&p_644->g_78,&l_459},{(void*)0,(void*)0,(void*)0,&l_459,&p_644->g_78,&l_459},{(void*)0,(void*)0,(void*)0,&l_459,&p_644->g_78,&l_459},{(void*)0,(void*)0,(void*)0,&l_459,&p_644->g_78,&l_459},{(void*)0,(void*)0,(void*)0,&l_459,&p_644->g_78,&l_459},{(void*)0,(void*)0,(void*)0,&l_459,&p_644->g_78,&l_459},{(void*)0,(void*)0,(void*)0,&l_459,&p_644->g_78,&l_459},{(void*)0,(void*)0,(void*)0,&l_459,&p_644->g_78,&l_459},{(void*)0,(void*)0,(void*)0,&l_459,&p_644->g_78,&l_459}};
                int8_t l_470 = (-9L);
                int i, j;
                (*l_85) = ((VECTOR(int32_t, 4))(l_433.yxxy)).z;
                p_644->g_366.s7 |= ((((safe_add_func_int64_t_s_s((((safe_mod_func_uint8_t_u_u(p_30, (**l_71))) & ((VECTOR(int16_t, 16))(p_644->g_438.seb73c55102bb3ffa)).sd) >= (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((l_444 = (!(p_644->g_103 = (FAKE_DIVERGE(p_644->global_1_offset, get_global_id(1), 10) != l_443)))), 1)) & l_445), 4))), (l_453 = (safe_mod_func_int16_t_s_s(p_644->g_147, (l_451.y |= p_30)))))) ^ (((safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(p_644->g_295.s1, (l_459 |= (18446744073709551615UL < (0x7E4509C4B1261ABFL >= p_644->g_322.s6))))) | 0xE2L), p_30)))) ^ 0x52L) != p_644->g_128)) != 65535UL) , p_30);
                l_472--;
            }
        }
        (**l_71) ^= ((void*)0 == &l_80[5]);
    }
    for (p_644->g_68 = 12; (p_644->g_68 < 46); p_644->g_68 = safe_add_func_uint32_t_u_u(p_644->g_68, 9))
    { /* block id: 220 */
        for (p_644->g_103 = 0; (p_644->g_103 != (-8)); --p_644->g_103)
        { /* block id: 223 */
            int32_t *l_479 = &p_644->g_70;
            l_480++;
        }
    }
    l_484--;
    (*p_644->g_489) = p_644->g_487;
    return (*p_644->g_272);
}


/* ------------------------------------------ */
/* 
 * reads : p_644->g_147 p_644->g_70 p_644->g_226 p_644->g_130 p_644->g_365 p_644->g_366 p_644->g_272
 * writes: p_644->g_147 p_644->g_70 p_644->g_364 p_644->g_130
 */
int32_t  func_31(uint32_t  p_32, int32_t * p_33, uint32_t  p_34, int32_t * p_35, uint8_t  p_36, struct S1 * p_644)
{ /* block id: 58 */
    int64_t l_198 = 0x752318AF58D63BD2L;
    int32_t *l_225[5][8] = {{&p_644->g_70,&p_644->g_78,&p_644->g_70,&p_644->g_70,&p_644->g_78,&p_644->g_70,&p_644->g_70,&p_644->g_78},{&p_644->g_70,&p_644->g_78,&p_644->g_70,&p_644->g_70,&p_644->g_78,&p_644->g_70,&p_644->g_70,&p_644->g_78},{&p_644->g_70,&p_644->g_78,&p_644->g_70,&p_644->g_70,&p_644->g_78,&p_644->g_70,&p_644->g_70,&p_644->g_78},{&p_644->g_70,&p_644->g_78,&p_644->g_70,&p_644->g_70,&p_644->g_78,&p_644->g_70,&p_644->g_70,&p_644->g_78},{&p_644->g_70,&p_644->g_78,&p_644->g_70,&p_644->g_70,&p_644->g_78,&p_644->g_70,&p_644->g_70,&p_644->g_78}};
    int8_t *l_270 = &p_644->g_128;
    uint8_t l_359 = 255UL;
    int i, j;
    for (p_644->g_147 = 0; (p_644->g_147 > 41); p_644->g_147 = safe_add_func_int32_t_s_s(p_644->g_147, 4))
    { /* block id: 61 */
        int32_t l_199[2];
        int64_t **l_263 = &p_644->g_117;
        VECTOR(int16_t, 16) l_301 = (VECTOR(int16_t, 16))(0x49ECL, (VECTOR(int16_t, 4))(0x49ECL, (VECTOR(int16_t, 2))(0x49ECL, 0x0E64L), 0x0E64L), 0x0E64L, 0x49ECL, 0x0E64L, (VECTOR(int16_t, 2))(0x49ECL, 0x0E64L), (VECTOR(int16_t, 2))(0x49ECL, 0x0E64L), 0x49ECL, 0x0E64L, 0x49ECL, 0x0E64L);
        int64_t *l_336 = &l_198;
        VECTOR(uint16_t, 2) l_347 = (VECTOR(uint16_t, 2))(0xB190L, 65532UL);
        uint32_t l_361[9];
        int i;
        for (i = 0; i < 2; i++)
            l_199[i] = 0x3C691B77L;
        for (i = 0; i < 9; i++)
            l_361[i] = 0xA3F1A3C8L;
        l_198 |= (*p_33);
    }
    for (p_644->g_70 = 0; (p_644->g_70 != 10); ++p_644->g_70)
    { /* block id: 141 */
        uint64_t l_367 = 0UL;
        int32_t l_368 = 0x4D350E76L;
        int32_t **l_369 = &p_644->g_130;
        p_644->g_364 = (**p_644->g_226);
        l_368 = (p_644->g_365 , (l_367 &= ((VECTOR(int32_t, 8))(p_644->g_366.sf7023413)).s1));
        p_33 = ((*l_369) = (*p_644->g_272));
    }
    return (*p_644->g_130);
}


/* ------------------------------------------ */
/* 
 * reads : p_644->g_147 p_644->g_78 p_644->g_130 p_644->g_70 p_644->g_177
 * writes: p_644->g_147 p_644->g_78 p_644->g_70
 */
uint32_t  func_37(int64_t  p_38, uint32_t  p_39, int16_t  p_40, int32_t * p_41, int64_t  p_42, struct S1 * p_644)
{ /* block id: 37 */
    uint8_t l_193 = 0x41L;
    for (p_644->g_147 = 0; (p_644->g_147 == 45); ++p_644->g_147)
    { /* block id: 40 */
        for (p_644->g_78 = (-27); (p_644->g_78 != 16); ++p_644->g_78)
        { /* block id: 43 */
            VECTOR(uint8_t, 8) l_191 = (VECTOR(uint8_t, 8))(0x80L, (VECTOR(uint8_t, 4))(0x80L, (VECTOR(uint8_t, 2))(0x80L, 0x08L), 0x08L), 0x08L, 0x80L, 0x08L);
            int32_t l_192 = 0x2AB164A0L;
            int i;
            if ((atomic_inc(&p_644->l_atomic_input[8]) == 5))
            { /* block id: 45 */
                uint16_t l_189 = 0x31DAL;
                int32_t l_190 = 0x3AC6DDDAL;
                l_190 |= l_189;
                unsigned int result = 0;
                result += l_189;
                result += l_190;
                atomic_add(&p_644->l_special_values[8], result);
            }
            else
            { /* block id: 47 */
                (1 + 1);
            }
            (*p_644->g_130) = (((VECTOR(uint8_t, 16))(l_191.s6405250560165721)).s1 | p_644->g_147);
            --l_193;
        }
        if ((*p_644->g_130))
            break;
        if (l_193)
            break;
        return p_644->g_177.y;
    }
    return p_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_644->g_90 p_644->g_93 p_644->g_comm_values p_644->g_70 p_644->g_95 p_644->g_62.f0 p_644->g_117 p_644->g_128 p_644->l_comm_values p_644->g_129 p_644->g_81 p_644->g_134 p_644->g_135 p_644->g_88 p_644->g_78 p_644->g_147 p_644->g_62 p_644->g_157 p_644->g_158 p_644->g_159 p_644->g_162 p_644->g_163 p_644->g_177 p_644->g_130 p_644->g_68
 * writes: p_644->g_90 p_644->g_93 p_644->g_70 p_644->g_128 p_644->g_103 p_644->g_147 p_644->l_comm_values p_644->g_157
 */
int64_t  func_43(uint8_t  p_44, int64_t  p_45, int32_t  p_46, int32_t * p_47, int32_t  p_48, struct S1 * p_644)
{ /* block id: 13 */
    int32_t *l_86 = &p_644->g_70;
    int32_t *l_87 = &p_644->g_70;
    int32_t *l_89[8] = {&p_644->g_78,(void*)0,&p_644->g_78,&p_644->g_78,(void*)0,&p_644->g_78,&p_644->g_78,(void*)0};
    volatile int64_t ***l_96 = &p_644->g_93;
    VECTOR(int32_t, 16) l_97 = (VECTOR(int32_t, 16))(0x79BFF94FL, (VECTOR(int32_t, 4))(0x79BFF94FL, (VECTOR(int32_t, 2))(0x79BFF94FL, (-3L)), (-3L)), (-3L), 0x79BFF94FL, (-3L), (VECTOR(int32_t, 2))(0x79BFF94FL, (-3L)), (VECTOR(int32_t, 2))(0x79BFF94FL, (-3L)), 0x79BFF94FL, (-3L), 0x79BFF94FL, (-3L));
    int16_t *l_102[7] = {&p_644->g_103,&p_644->g_103,&p_644->g_103,&p_644->g_103,&p_644->g_103,&p_644->g_103,&p_644->g_103};
    VECTOR(uint8_t, 2) l_108 = (VECTOR(uint8_t, 2))(0x1DL, 0xB3L);
    int32_t l_111[10][9] = {{0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL},{0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL},{0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL},{0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL},{0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL},{0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL},{0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL},{0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL},{0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL},{0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL,0x13F97C6DL}};
    int32_t **l_124 = &l_89[6];
    VECTOR(int16_t, 4) l_133 = (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x2F3CL), 0x2F3CL);
    VECTOR(int16_t, 16) l_142 = (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 1L), 1L), 1L, 5L, 1L, (VECTOR(int16_t, 2))(5L, 1L), (VECTOR(int16_t, 2))(5L, 1L), 5L, 1L, 5L, 1L);
    VECTOR(uint16_t, 4) l_152 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65533UL), 65533UL);
    VECTOR(uint32_t, 16) l_160 = (VECTOR(uint32_t, 16))(0xA38B7765L, (VECTOR(uint32_t, 4))(0xA38B7765L, (VECTOR(uint32_t, 2))(0xA38B7765L, 0x0B4A55CDL), 0x0B4A55CDL), 0x0B4A55CDL, 0xA38B7765L, 0x0B4A55CDL, (VECTOR(uint32_t, 2))(0xA38B7765L, 0x0B4A55CDL), (VECTOR(uint32_t, 2))(0xA38B7765L, 0x0B4A55CDL), 0xA38B7765L, 0x0B4A55CDL, 0xA38B7765L, 0x0B4A55CDL);
    VECTOR(uint32_t, 2) l_161 = (VECTOR(uint32_t, 2))(0xC2B037CAL, 0UL);
    uint16_t l_176 = 65527UL;
    int64_t *l_178 = (void*)0;
    int64_t *l_179 = (void*)0;
    int64_t *l_180 = (void*)0;
    uint64_t *l_181 = (void*)0;
    uint64_t *l_182 = (void*)0;
    int8_t *l_183 = &p_644->g_128;
    int i, j;
    p_644->g_90[0]++;
    (*l_96) = p_644->g_93;
    if (((VECTOR(int32_t, 16))((-5L), ((VECTOR(int32_t, 4))(l_97.sd23a)), p_644->g_comm_values[p_644->tid], 0L, 0x15BC693EL, (FAKE_DIVERGE(p_644->global_2_offset, get_global_id(2), 10) > (safe_mul_func_int64_t_s_s((-1L), (((safe_mod_func_int32_t_s_s((*p_47), p_644->g_95)) , l_102[0]) == (void*)0)))), ((safe_mul_func_int16_t_s_s(p_48, 0xC112L)) , ((safe_mod_func_uint64_t_u_u(((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(0xBAL, ((VECTOR(uint8_t, 2))(0x91L, 0x08L)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_108.yxxx)))), 0xD3L)).lo)).y <= ((*l_87) = ((safe_mul_func_uint8_t_u_u(p_44, p_644->g_62[4].f0)) != 0x04F12CA1L))) <= 0UL), 0x756850E27E8F7B0EL)) , (-1L))), ((VECTOR(int32_t, 4))(1L)), (-7L), 1L)).s1)
    { /* block id: 17 */
        return l_111[3][2];
    }
    else
    { /* block id: 19 */
        uint64_t l_112 = 0x7B232BF5C28DFD1FL;
        int64_t *l_118 = (void*)0;
        int64_t *l_119 = (void*)0;
        int32_t **l_122 = &l_89[2];
        int32_t ***l_123 = &l_122;
        uint64_t *l_127[9][8] = {{&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112}};
        VECTOR(int16_t, 4) l_138 = (VECTOR(int16_t, 4))(0x3471L, (VECTOR(int16_t, 2))(0x3471L, 0x7D70L), 0x7D70L);
        VECTOR(int16_t, 16) l_141 = (VECTOR(int16_t, 16))(0x59CEL, (VECTOR(int16_t, 4))(0x59CEL, (VECTOR(int16_t, 2))(0x59CEL, 0x29A7L), 0x29A7L), 0x29A7L, 0x59CEL, 0x29A7L, (VECTOR(int16_t, 2))(0x59CEL, 0x29A7L), (VECTOR(int16_t, 2))(0x59CEL, 0x29A7L), 0x59CEL, 0x29A7L, 0x59CEL, 0x29A7L);
        int i, j;
        l_112--;
        atomic_xor(&p_644->l_atomic_reduction[0], ((*l_86) = (((FAKE_DIVERGE(p_644->group_0_offset, get_group_id(0), 10) == ((l_118 = p_644->g_117) != (FAKE_DIVERGE(p_644->group_2_offset, get_group_id(2), 10) , l_119))) != 0x5E95L) & (((safe_rshift_func_int16_t_s_u(((p_644->g_128 &= ((((*l_123) = l_122) != ((GROUP_DIVERGE(2, 1) || p_644->g_90[7]) , l_124)) & ((safe_rshift_func_uint16_t_u_u((p_45 != 7L), (0x4BL <= FAKE_DIVERGE(p_644->local_2_offset, get_local_id(2), 10)))) != (*p_47)))) <= p_46), p_644->l_comm_values[(safe_mod_func_uint32_t_u_u(p_644->tid, 14))])) , p_644->g_129[0]) != &p_47))) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_644->v_collective += p_644->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        (*l_86) |= (&p_48 != (**l_123));
        p_644->g_147 |= (((VECTOR(uint8_t, 16))(0x8EL, p_644->g_81.s0, ((safe_div_func_uint8_t_u_u((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 4))(l_133.zxyy)).xzxxwzyyzyzwwxwy, ((VECTOR(int16_t, 2))(p_644->g_134.s05)).xyxxyxxxyyyyyxyx))).s13, ((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 2))(p_644->g_135.sc8)).xxxxyyyyyyyxyyyx, (int16_t)(safe_add_func_uint64_t_u_u(((((((((p_644->g_88 & ((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(0x3C84L, 0x454FL)).xxyyxyyx, ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_138.zzwx)))), ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))((safe_lshift_func_int8_t_s_u((&l_89[4] == &l_86), 4)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(0x0682L, ((VECTOR(int16_t, 2))(0x0854L, (-1L))), 7L, p_644->l_comm_values[(safe_mod_func_uint32_t_u_u(p_644->tid, 14))], ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_141.s5a9e6d6167fd5a9a)).s7709)).hi)), 9L)).s23)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-5L), 5L)).xxxx)), 0x25F1L)).s40, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_142.s4299da232d690d09)).odd)).s71, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x5E26L, 0x0CC8L)).yyxxyyyxyxyyxxxx)).sd0, ((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x0D79L, 0x7AA8L, (p_644->g_103 = ((((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(0x4176L, 0UL)).xyxx, ((VECTOR(uint16_t, 2))(65531UL, 65529UL)).xxxy, ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 8))(FAKE_DIVERGE(p_644->local_2_offset, get_local_id(2), 10), 0x8AC1L, 0xBAE2L, 8UL, (&l_119 == (void*)0), (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((1UL || ((&p_644->g_130 == &p_644->g_130) | 0x9FL)), p_644->g_81.s4)), 1UL)), 0xA106L, 0x5C42L)).even, (uint16_t)p_644->g_81.s4, (uint16_t)p_644->g_78)))))).z && (-3L)) | p_44)), ((VECTOR(int16_t, 2))(0x2041L)), 0L, (-1L), 0x2181L)).lo)).wxwzxxxyxwzwxxww, ((VECTOR(int16_t, 16))((-5L)))))).s6d))).xxyyyxyxxyxyxxxy, ((VECTOR(int16_t, 16))(5L))))), ((VECTOR(int16_t, 16))(0x03A6L)), ((VECTOR(int16_t, 16))(0x6BFBL))))).s3f))))), 0x4A61L, 0x40B4L)).s74)).xyxyxxyyyxyxyxxy, ((VECTOR(int16_t, 16))(0x1005L))))).hi, ((VECTOR(int16_t, 8))((-7L)))))).s7) >= 0x155F76BBL) <= p_644->g_90[7]) < 1L) != p_644->l_comm_values[(safe_mod_func_uint32_t_u_u(p_644->tid, 14))]) != (*p_47)) | p_644->g_81.s5) && p_644->g_134.s0), 0x5C477C23372F705CL))))).scf))), ((VECTOR(int16_t, 4))(1L)), p_644->g_81.s0, 0x5867L, 7L, p_48, 0x6A3CL, 0x7E00L, ((VECTOR(int16_t, 2))(0x1B00L)), 0x4E1FL, (-4L))).even)).s0 >= p_46), p_48)) , (*l_86)), ((VECTOR(uint8_t, 2))(9UL)), ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 4))(0UL)), FAKE_DIVERGE(p_644->global_2_offset, get_global_id(2), 10), 0UL, ((VECTOR(uint8_t, 2))(0x6BL)), 0xA9L)).sc > 0xFBL);
    }
    (*p_47) = (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((p_644->g_comm_values[p_644->tid] != (p_644->g_62[1] , ((VECTOR(uint16_t, 2))(l_152.wy)).odd)), 3)), ((safe_div_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 2))(p_644->g_157.s0e)).xxyxxxyy, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(p_644->g_158.xxyxyxyxyxxyxxxy)).scb)).xxyxyyxx, ((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 2))(p_644->g_159.s32)).yyxyxyyxyxyyyxxy, ((VECTOR(uint32_t, 8))(l_160.s8020b3e3)).s2316127622247747))), ((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 8))(l_161.xxyxyyyx)).s62, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(abs(((VECTOR(uint32_t, 16))(p_644->g_162.s4451174700661606)).hi))).lo)).even))).xyyyyyxxyxyxxyyy))).s0b1b, ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(0x247686F9L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0xE8302DEFL, 0x5C19EB95L)))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_644->g_163.s23)).yyyx)), p_644->g_81.s7, (safe_mod_func_int64_t_s_s(p_46, (p_45 | GROUP_DIVERGE(2, 1)))), ((safe_lshift_func_uint8_t_u_u(((((*l_183) = (((((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((l_176 , (p_644->g_157.s7 = ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(18446744073709551608UL, ((VECTOR(uint64_t, 8))((((((p_644->l_comm_values[(safe_mod_func_uint32_t_u_u(p_644->tid, 14))] = ((-6L) == ((VECTOR(uint32_t, 16))(p_644->g_177.yyxyyyxxxxyyyxxy)).s3)) || p_46) , &p_644->g_94) != (*l_96)) != (*p_644->g_130)), ((VECTOR(uint64_t, 2))(0x42437FBEDF6B5423L)), 18446744073709551615UL, ((VECTOR(uint64_t, 4))(18446744073709551615UL)))), 0x9A174EF01CE23668L, 5UL, FAKE_DIVERGE(p_644->global_1_offset, get_global_id(1), 10), ((VECTOR(uint64_t, 2))(0UL)), 0UL, 5UL)).s2cbd)), ((VECTOR(uint64_t, 2))(0x2DC4D5CECC9AE339L)), 0x50142BC99A05796CL, 0x12ECCD64288B9456L)).s32)).lo)), p_644->g_163.s5)), p_44)), (*l_87))), 12)) >= 0x1E7CADE12A715A3DL) ^ p_44) < (*p_644->g_130)) , p_48)) && p_48) < p_644->g_68), p_644->g_159.s7)) , p_48), ((VECTOR(uint32_t, 2))(0xE61B92BAL)), ((VECTOR(uint32_t, 2))(1UL)), 4294967295UL, 4294967295UL)).s3f1a, ((VECTOR(uint32_t, 4))(0UL)))))))).zzzxwzzx))).s7245654166674354)).s2, p_644->g_158.x)), p_644->g_68)) || 0x6E85L)));
    return p_644->g_157.s2;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[62];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 62; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[62];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 62; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[14];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 14; i++)
            l_comm_values[i] = 1;
    struct S1 c_645;
    struct S1* p_644 = &c_645;
    struct S1 c_646 = {
        {{1L},{1L},{1L},{1L},{1L}}, // p_644->g_62
        4294967286UL, // p_644->g_68
        0x6ABE926FL, // p_644->g_70
        4L, // p_644->g_78
        (VECTOR(int64_t, 8))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x0474A89AEEB1CB69L), 0x0474A89AEEB1CB69L), 0x0474A89AEEB1CB69L, 3L, 0x0474A89AEEB1CB69L), // p_644->g_81
        0x3F00C75BL, // p_644->g_88
        {2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL}, // p_644->g_90
        0x636B02009A6D6C57L, // p_644->g_95
        &p_644->g_95, // p_644->g_94
        &p_644->g_94, // p_644->g_93
        (-1L), // p_644->g_103
        (void*)0, // p_644->g_117
        0x03L, // p_644->g_128
        &p_644->g_70, // p_644->g_130
        {&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130}, // p_644->g_129
        (VECTOR(int16_t, 8))(0x24D0L, (VECTOR(int16_t, 4))(0x24D0L, (VECTOR(int16_t, 2))(0x24D0L, 0x129CL), 0x129CL), 0x129CL, 0x24D0L, 0x129CL), // p_644->g_134
        (VECTOR(int16_t, 16))(0x3F5EL, (VECTOR(int16_t, 4))(0x3F5EL, (VECTOR(int16_t, 2))(0x3F5EL, 0L), 0L), 0L, 0x3F5EL, 0L, (VECTOR(int16_t, 2))(0x3F5EL, 0L), (VECTOR(int16_t, 2))(0x3F5EL, 0L), 0x3F5EL, 0L, 0x3F5EL, 0L), // p_644->g_135
        4294967290UL, // p_644->g_147
        (VECTOR(uint64_t, 16))(0x2BBBA2D269C2A357L, (VECTOR(uint64_t, 4))(0x2BBBA2D269C2A357L, (VECTOR(uint64_t, 2))(0x2BBBA2D269C2A357L, 0x1F490EF0FED554AEL), 0x1F490EF0FED554AEL), 0x1F490EF0FED554AEL, 0x2BBBA2D269C2A357L, 0x1F490EF0FED554AEL, (VECTOR(uint64_t, 2))(0x2BBBA2D269C2A357L, 0x1F490EF0FED554AEL), (VECTOR(uint64_t, 2))(0x2BBBA2D269C2A357L, 0x1F490EF0FED554AEL), 0x2BBBA2D269C2A357L, 0x1F490EF0FED554AEL, 0x2BBBA2D269C2A357L, 0x1F490EF0FED554AEL), // p_644->g_157
        (VECTOR(uint64_t, 2))(0xFB04089B8EC4C58FL, 0xBA664A59A87665D8L), // p_644->g_158
        (VECTOR(uint32_t, 8))(0x10550B35L, (VECTOR(uint32_t, 4))(0x10550B35L, (VECTOR(uint32_t, 2))(0x10550B35L, 0UL), 0UL), 0UL, 0x10550B35L, 0UL), // p_644->g_159
        (VECTOR(uint32_t, 8))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 4294967288UL), 4294967288UL), 4294967288UL, 5UL, 4294967288UL), // p_644->g_162
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967292UL), 4294967292UL), 4294967292UL, 0UL, 4294967292UL, (VECTOR(uint32_t, 2))(0UL, 4294967292UL), (VECTOR(uint32_t, 2))(0UL, 4294967292UL), 0UL, 4294967292UL, 0UL, 4294967292UL), // p_644->g_163
        (VECTOR(uint32_t, 2))(0x0E939A09L, 0xC2C58038L), // p_644->g_177
        &p_644->g_130, // p_644->g_226
        {0x16B7EB91L}, // p_644->g_236
        (VECTOR(int8_t, 4))(0x54L, (VECTOR(int8_t, 2))(0x54L, 0L), 0L), // p_644->g_249
        (VECTOR(int8_t, 16))(0x2BL, (VECTOR(int8_t, 4))(0x2BL, (VECTOR(int8_t, 2))(0x2BL, 0x24L), 0x24L), 0x24L, 0x2BL, 0x24L, (VECTOR(int8_t, 2))(0x2BL, 0x24L), (VECTOR(int8_t, 2))(0x2BL, 0x24L), 0x2BL, 0x24L, 0x2BL, 0x24L), // p_644->g_250
        (VECTOR(uint16_t, 2))(1UL, 0x872FL), // p_644->g_260
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65526UL), 65526UL), 65526UL, 0UL, 65526UL, (VECTOR(uint16_t, 2))(0UL, 65526UL), (VECTOR(uint16_t, 2))(0UL, 65526UL), 0UL, 65526UL, 0UL, 65526UL), // p_644->g_266
        &p_644->g_130, // p_644->g_272
        (VECTOR(uint8_t, 8))(0x18L, (VECTOR(uint8_t, 4))(0x18L, (VECTOR(uint8_t, 2))(0x18L, 0xA5L), 0xA5L), 0xA5L, 0x18L, 0xA5L), // p_644->g_295
        4294967287UL, // p_644->g_304
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL), // p_644->g_322
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x250AC84BL), 0x250AC84BL), 0x250AC84BL, (-1L), 0x250AC84BL, (VECTOR(int32_t, 2))((-1L), 0x250AC84BL), (VECTOR(int32_t, 2))((-1L), 0x250AC84BL), (-1L), 0x250AC84BL, (-1L), 0x250AC84BL), // p_644->g_337
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x2D6CDBC6L), 0x2D6CDBC6L), // p_644->g_345
        0x2097L, // p_644->g_364
        {0x53C80E12L}, // p_644->g_365
        (VECTOR(int32_t, 16))(0x52AD83A8L, (VECTOR(int32_t, 4))(0x52AD83A8L, (VECTOR(int32_t, 2))(0x52AD83A8L, 0x271E108FL), 0x271E108FL), 0x271E108FL, 0x52AD83A8L, 0x271E108FL, (VECTOR(int32_t, 2))(0x52AD83A8L, 0x271E108FL), (VECTOR(int32_t, 2))(0x52AD83A8L, 0x271E108FL), 0x52AD83A8L, 0x271E108FL, 0x52AD83A8L, 0x271E108FL), // p_644->g_366
        &p_644->g_90[4], // p_644->g_379
        {{{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0}},{{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0}},{{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0}},{{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0}},{{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0}},{{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0}},{{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0}},{{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0}},{{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0},{&p_644->g_379,&p_644->g_379,(void*)0}}}, // p_644->g_378
        {&p_644->g_378[0][2][1],&p_644->g_378[0][2][1],&p_644->g_378[0][2][1],&p_644->g_378[0][2][1],&p_644->g_378[0][2][1]}, // p_644->g_377
        (VECTOR(int16_t, 16))(0x623FL, (VECTOR(int16_t, 4))(0x623FL, (VECTOR(int16_t, 2))(0x623FL, (-2L)), (-2L)), (-2L), 0x623FL, (-2L), (VECTOR(int16_t, 2))(0x623FL, (-2L)), (VECTOR(int16_t, 2))(0x623FL, (-2L)), 0x623FL, (-2L), 0x623FL, (-2L)), // p_644->g_438
        (void*)0, // p_644->g_488
        &p_644->g_488, // p_644->g_487
        &p_644->g_487, // p_644->g_489
        0x0FDFA471C384494DL, // p_644->g_496
        &p_644->g_496, // p_644->g_495
        (void*)0, // p_644->g_506
        (void*)0, // p_644->g_521
        (void*)0, // p_644->g_524
        {{{&p_644->g_524},{&p_644->g_524},{&p_644->g_524},{&p_644->g_524},{&p_644->g_524}}}, // p_644->g_523
        {{&p_644->g_130,&p_644->g_130},{&p_644->g_130,&p_644->g_130},{&p_644->g_130,&p_644->g_130}}, // p_644->g_527
        (VECTOR(int16_t, 2))(0x4A36L, 0L), // p_644->g_533
        {{{&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130},{&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130},{&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130},{&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130},{&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130},{&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130},{&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130}},{{&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130},{&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130},{&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130},{&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130},{&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130},{&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130},{&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130,&p_644->g_130}}}, // p_644->g_611
        {0x6745C3A9L}, // p_644->g_635
        0, // p_644->v_collective
        sequence_input[get_global_id(0)], // p_644->global_0_offset
        sequence_input[get_global_id(1)], // p_644->global_1_offset
        sequence_input[get_global_id(2)], // p_644->global_2_offset
        sequence_input[get_local_id(0)], // p_644->local_0_offset
        sequence_input[get_local_id(1)], // p_644->local_1_offset
        sequence_input[get_local_id(2)], // p_644->local_2_offset
        sequence_input[get_group_id(0)], // p_644->group_0_offset
        sequence_input[get_group_id(1)], // p_644->group_1_offset
        sequence_input[get_group_id(2)], // p_644->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 14)), permutations[0][get_linear_local_id()])), // p_644->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_645 = c_646;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_644);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_644->g_62[i].f0, "p_644->g_62[i].f0", print_hash_value);

    }
    transparent_crc(p_644->g_68, "p_644->g_68", print_hash_value);
    transparent_crc(p_644->g_70, "p_644->g_70", print_hash_value);
    transparent_crc(p_644->g_78, "p_644->g_78", print_hash_value);
    transparent_crc(p_644->g_81.s0, "p_644->g_81.s0", print_hash_value);
    transparent_crc(p_644->g_81.s1, "p_644->g_81.s1", print_hash_value);
    transparent_crc(p_644->g_81.s2, "p_644->g_81.s2", print_hash_value);
    transparent_crc(p_644->g_81.s3, "p_644->g_81.s3", print_hash_value);
    transparent_crc(p_644->g_81.s4, "p_644->g_81.s4", print_hash_value);
    transparent_crc(p_644->g_81.s5, "p_644->g_81.s5", print_hash_value);
    transparent_crc(p_644->g_81.s6, "p_644->g_81.s6", print_hash_value);
    transparent_crc(p_644->g_81.s7, "p_644->g_81.s7", print_hash_value);
    transparent_crc(p_644->g_88, "p_644->g_88", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_644->g_90[i], "p_644->g_90[i]", print_hash_value);

    }
    transparent_crc(p_644->g_95, "p_644->g_95", print_hash_value);
    transparent_crc(p_644->g_103, "p_644->g_103", print_hash_value);
    transparent_crc(p_644->g_128, "p_644->g_128", print_hash_value);
    transparent_crc(p_644->g_134.s0, "p_644->g_134.s0", print_hash_value);
    transparent_crc(p_644->g_134.s1, "p_644->g_134.s1", print_hash_value);
    transparent_crc(p_644->g_134.s2, "p_644->g_134.s2", print_hash_value);
    transparent_crc(p_644->g_134.s3, "p_644->g_134.s3", print_hash_value);
    transparent_crc(p_644->g_134.s4, "p_644->g_134.s4", print_hash_value);
    transparent_crc(p_644->g_134.s5, "p_644->g_134.s5", print_hash_value);
    transparent_crc(p_644->g_134.s6, "p_644->g_134.s6", print_hash_value);
    transparent_crc(p_644->g_134.s7, "p_644->g_134.s7", print_hash_value);
    transparent_crc(p_644->g_135.s0, "p_644->g_135.s0", print_hash_value);
    transparent_crc(p_644->g_135.s1, "p_644->g_135.s1", print_hash_value);
    transparent_crc(p_644->g_135.s2, "p_644->g_135.s2", print_hash_value);
    transparent_crc(p_644->g_135.s3, "p_644->g_135.s3", print_hash_value);
    transparent_crc(p_644->g_135.s4, "p_644->g_135.s4", print_hash_value);
    transparent_crc(p_644->g_135.s5, "p_644->g_135.s5", print_hash_value);
    transparent_crc(p_644->g_135.s6, "p_644->g_135.s6", print_hash_value);
    transparent_crc(p_644->g_135.s7, "p_644->g_135.s7", print_hash_value);
    transparent_crc(p_644->g_135.s8, "p_644->g_135.s8", print_hash_value);
    transparent_crc(p_644->g_135.s9, "p_644->g_135.s9", print_hash_value);
    transparent_crc(p_644->g_135.sa, "p_644->g_135.sa", print_hash_value);
    transparent_crc(p_644->g_135.sb, "p_644->g_135.sb", print_hash_value);
    transparent_crc(p_644->g_135.sc, "p_644->g_135.sc", print_hash_value);
    transparent_crc(p_644->g_135.sd, "p_644->g_135.sd", print_hash_value);
    transparent_crc(p_644->g_135.se, "p_644->g_135.se", print_hash_value);
    transparent_crc(p_644->g_135.sf, "p_644->g_135.sf", print_hash_value);
    transparent_crc(p_644->g_147, "p_644->g_147", print_hash_value);
    transparent_crc(p_644->g_157.s0, "p_644->g_157.s0", print_hash_value);
    transparent_crc(p_644->g_157.s1, "p_644->g_157.s1", print_hash_value);
    transparent_crc(p_644->g_157.s2, "p_644->g_157.s2", print_hash_value);
    transparent_crc(p_644->g_157.s3, "p_644->g_157.s3", print_hash_value);
    transparent_crc(p_644->g_157.s4, "p_644->g_157.s4", print_hash_value);
    transparent_crc(p_644->g_157.s5, "p_644->g_157.s5", print_hash_value);
    transparent_crc(p_644->g_157.s6, "p_644->g_157.s6", print_hash_value);
    transparent_crc(p_644->g_157.s7, "p_644->g_157.s7", print_hash_value);
    transparent_crc(p_644->g_157.s8, "p_644->g_157.s8", print_hash_value);
    transparent_crc(p_644->g_157.s9, "p_644->g_157.s9", print_hash_value);
    transparent_crc(p_644->g_157.sa, "p_644->g_157.sa", print_hash_value);
    transparent_crc(p_644->g_157.sb, "p_644->g_157.sb", print_hash_value);
    transparent_crc(p_644->g_157.sc, "p_644->g_157.sc", print_hash_value);
    transparent_crc(p_644->g_157.sd, "p_644->g_157.sd", print_hash_value);
    transparent_crc(p_644->g_157.se, "p_644->g_157.se", print_hash_value);
    transparent_crc(p_644->g_157.sf, "p_644->g_157.sf", print_hash_value);
    transparent_crc(p_644->g_158.x, "p_644->g_158.x", print_hash_value);
    transparent_crc(p_644->g_158.y, "p_644->g_158.y", print_hash_value);
    transparent_crc(p_644->g_159.s0, "p_644->g_159.s0", print_hash_value);
    transparent_crc(p_644->g_159.s1, "p_644->g_159.s1", print_hash_value);
    transparent_crc(p_644->g_159.s2, "p_644->g_159.s2", print_hash_value);
    transparent_crc(p_644->g_159.s3, "p_644->g_159.s3", print_hash_value);
    transparent_crc(p_644->g_159.s4, "p_644->g_159.s4", print_hash_value);
    transparent_crc(p_644->g_159.s5, "p_644->g_159.s5", print_hash_value);
    transparent_crc(p_644->g_159.s6, "p_644->g_159.s6", print_hash_value);
    transparent_crc(p_644->g_159.s7, "p_644->g_159.s7", print_hash_value);
    transparent_crc(p_644->g_162.s0, "p_644->g_162.s0", print_hash_value);
    transparent_crc(p_644->g_162.s1, "p_644->g_162.s1", print_hash_value);
    transparent_crc(p_644->g_162.s2, "p_644->g_162.s2", print_hash_value);
    transparent_crc(p_644->g_162.s3, "p_644->g_162.s3", print_hash_value);
    transparent_crc(p_644->g_162.s4, "p_644->g_162.s4", print_hash_value);
    transparent_crc(p_644->g_162.s5, "p_644->g_162.s5", print_hash_value);
    transparent_crc(p_644->g_162.s6, "p_644->g_162.s6", print_hash_value);
    transparent_crc(p_644->g_162.s7, "p_644->g_162.s7", print_hash_value);
    transparent_crc(p_644->g_163.s0, "p_644->g_163.s0", print_hash_value);
    transparent_crc(p_644->g_163.s1, "p_644->g_163.s1", print_hash_value);
    transparent_crc(p_644->g_163.s2, "p_644->g_163.s2", print_hash_value);
    transparent_crc(p_644->g_163.s3, "p_644->g_163.s3", print_hash_value);
    transparent_crc(p_644->g_163.s4, "p_644->g_163.s4", print_hash_value);
    transparent_crc(p_644->g_163.s5, "p_644->g_163.s5", print_hash_value);
    transparent_crc(p_644->g_163.s6, "p_644->g_163.s6", print_hash_value);
    transparent_crc(p_644->g_163.s7, "p_644->g_163.s7", print_hash_value);
    transparent_crc(p_644->g_163.s8, "p_644->g_163.s8", print_hash_value);
    transparent_crc(p_644->g_163.s9, "p_644->g_163.s9", print_hash_value);
    transparent_crc(p_644->g_163.sa, "p_644->g_163.sa", print_hash_value);
    transparent_crc(p_644->g_163.sb, "p_644->g_163.sb", print_hash_value);
    transparent_crc(p_644->g_163.sc, "p_644->g_163.sc", print_hash_value);
    transparent_crc(p_644->g_163.sd, "p_644->g_163.sd", print_hash_value);
    transparent_crc(p_644->g_163.se, "p_644->g_163.se", print_hash_value);
    transparent_crc(p_644->g_163.sf, "p_644->g_163.sf", print_hash_value);
    transparent_crc(p_644->g_177.x, "p_644->g_177.x", print_hash_value);
    transparent_crc(p_644->g_177.y, "p_644->g_177.y", print_hash_value);
    transparent_crc(p_644->g_236.f0, "p_644->g_236.f0", print_hash_value);
    transparent_crc(p_644->g_249.x, "p_644->g_249.x", print_hash_value);
    transparent_crc(p_644->g_249.y, "p_644->g_249.y", print_hash_value);
    transparent_crc(p_644->g_249.z, "p_644->g_249.z", print_hash_value);
    transparent_crc(p_644->g_249.w, "p_644->g_249.w", print_hash_value);
    transparent_crc(p_644->g_250.s0, "p_644->g_250.s0", print_hash_value);
    transparent_crc(p_644->g_250.s1, "p_644->g_250.s1", print_hash_value);
    transparent_crc(p_644->g_250.s2, "p_644->g_250.s2", print_hash_value);
    transparent_crc(p_644->g_250.s3, "p_644->g_250.s3", print_hash_value);
    transparent_crc(p_644->g_250.s4, "p_644->g_250.s4", print_hash_value);
    transparent_crc(p_644->g_250.s5, "p_644->g_250.s5", print_hash_value);
    transparent_crc(p_644->g_250.s6, "p_644->g_250.s6", print_hash_value);
    transparent_crc(p_644->g_250.s7, "p_644->g_250.s7", print_hash_value);
    transparent_crc(p_644->g_250.s8, "p_644->g_250.s8", print_hash_value);
    transparent_crc(p_644->g_250.s9, "p_644->g_250.s9", print_hash_value);
    transparent_crc(p_644->g_250.sa, "p_644->g_250.sa", print_hash_value);
    transparent_crc(p_644->g_250.sb, "p_644->g_250.sb", print_hash_value);
    transparent_crc(p_644->g_250.sc, "p_644->g_250.sc", print_hash_value);
    transparent_crc(p_644->g_250.sd, "p_644->g_250.sd", print_hash_value);
    transparent_crc(p_644->g_250.se, "p_644->g_250.se", print_hash_value);
    transparent_crc(p_644->g_250.sf, "p_644->g_250.sf", print_hash_value);
    transparent_crc(p_644->g_260.x, "p_644->g_260.x", print_hash_value);
    transparent_crc(p_644->g_260.y, "p_644->g_260.y", print_hash_value);
    transparent_crc(p_644->g_266.s0, "p_644->g_266.s0", print_hash_value);
    transparent_crc(p_644->g_266.s1, "p_644->g_266.s1", print_hash_value);
    transparent_crc(p_644->g_266.s2, "p_644->g_266.s2", print_hash_value);
    transparent_crc(p_644->g_266.s3, "p_644->g_266.s3", print_hash_value);
    transparent_crc(p_644->g_266.s4, "p_644->g_266.s4", print_hash_value);
    transparent_crc(p_644->g_266.s5, "p_644->g_266.s5", print_hash_value);
    transparent_crc(p_644->g_266.s6, "p_644->g_266.s6", print_hash_value);
    transparent_crc(p_644->g_266.s7, "p_644->g_266.s7", print_hash_value);
    transparent_crc(p_644->g_266.s8, "p_644->g_266.s8", print_hash_value);
    transparent_crc(p_644->g_266.s9, "p_644->g_266.s9", print_hash_value);
    transparent_crc(p_644->g_266.sa, "p_644->g_266.sa", print_hash_value);
    transparent_crc(p_644->g_266.sb, "p_644->g_266.sb", print_hash_value);
    transparent_crc(p_644->g_266.sc, "p_644->g_266.sc", print_hash_value);
    transparent_crc(p_644->g_266.sd, "p_644->g_266.sd", print_hash_value);
    transparent_crc(p_644->g_266.se, "p_644->g_266.se", print_hash_value);
    transparent_crc(p_644->g_266.sf, "p_644->g_266.sf", print_hash_value);
    transparent_crc(p_644->g_295.s0, "p_644->g_295.s0", print_hash_value);
    transparent_crc(p_644->g_295.s1, "p_644->g_295.s1", print_hash_value);
    transparent_crc(p_644->g_295.s2, "p_644->g_295.s2", print_hash_value);
    transparent_crc(p_644->g_295.s3, "p_644->g_295.s3", print_hash_value);
    transparent_crc(p_644->g_295.s4, "p_644->g_295.s4", print_hash_value);
    transparent_crc(p_644->g_295.s5, "p_644->g_295.s5", print_hash_value);
    transparent_crc(p_644->g_295.s6, "p_644->g_295.s6", print_hash_value);
    transparent_crc(p_644->g_295.s7, "p_644->g_295.s7", print_hash_value);
    transparent_crc(p_644->g_304, "p_644->g_304", print_hash_value);
    transparent_crc(p_644->g_322.s0, "p_644->g_322.s0", print_hash_value);
    transparent_crc(p_644->g_322.s1, "p_644->g_322.s1", print_hash_value);
    transparent_crc(p_644->g_322.s2, "p_644->g_322.s2", print_hash_value);
    transparent_crc(p_644->g_322.s3, "p_644->g_322.s3", print_hash_value);
    transparent_crc(p_644->g_322.s4, "p_644->g_322.s4", print_hash_value);
    transparent_crc(p_644->g_322.s5, "p_644->g_322.s5", print_hash_value);
    transparent_crc(p_644->g_322.s6, "p_644->g_322.s6", print_hash_value);
    transparent_crc(p_644->g_322.s7, "p_644->g_322.s7", print_hash_value);
    transparent_crc(p_644->g_322.s8, "p_644->g_322.s8", print_hash_value);
    transparent_crc(p_644->g_322.s9, "p_644->g_322.s9", print_hash_value);
    transparent_crc(p_644->g_322.sa, "p_644->g_322.sa", print_hash_value);
    transparent_crc(p_644->g_322.sb, "p_644->g_322.sb", print_hash_value);
    transparent_crc(p_644->g_322.sc, "p_644->g_322.sc", print_hash_value);
    transparent_crc(p_644->g_322.sd, "p_644->g_322.sd", print_hash_value);
    transparent_crc(p_644->g_322.se, "p_644->g_322.se", print_hash_value);
    transparent_crc(p_644->g_322.sf, "p_644->g_322.sf", print_hash_value);
    transparent_crc(p_644->g_337.s0, "p_644->g_337.s0", print_hash_value);
    transparent_crc(p_644->g_337.s1, "p_644->g_337.s1", print_hash_value);
    transparent_crc(p_644->g_337.s2, "p_644->g_337.s2", print_hash_value);
    transparent_crc(p_644->g_337.s3, "p_644->g_337.s3", print_hash_value);
    transparent_crc(p_644->g_337.s4, "p_644->g_337.s4", print_hash_value);
    transparent_crc(p_644->g_337.s5, "p_644->g_337.s5", print_hash_value);
    transparent_crc(p_644->g_337.s6, "p_644->g_337.s6", print_hash_value);
    transparent_crc(p_644->g_337.s7, "p_644->g_337.s7", print_hash_value);
    transparent_crc(p_644->g_337.s8, "p_644->g_337.s8", print_hash_value);
    transparent_crc(p_644->g_337.s9, "p_644->g_337.s9", print_hash_value);
    transparent_crc(p_644->g_337.sa, "p_644->g_337.sa", print_hash_value);
    transparent_crc(p_644->g_337.sb, "p_644->g_337.sb", print_hash_value);
    transparent_crc(p_644->g_337.sc, "p_644->g_337.sc", print_hash_value);
    transparent_crc(p_644->g_337.sd, "p_644->g_337.sd", print_hash_value);
    transparent_crc(p_644->g_337.se, "p_644->g_337.se", print_hash_value);
    transparent_crc(p_644->g_337.sf, "p_644->g_337.sf", print_hash_value);
    transparent_crc(p_644->g_345.x, "p_644->g_345.x", print_hash_value);
    transparent_crc(p_644->g_345.y, "p_644->g_345.y", print_hash_value);
    transparent_crc(p_644->g_345.z, "p_644->g_345.z", print_hash_value);
    transparent_crc(p_644->g_345.w, "p_644->g_345.w", print_hash_value);
    transparent_crc(p_644->g_364, "p_644->g_364", print_hash_value);
    transparent_crc(p_644->g_365.f0, "p_644->g_365.f0", print_hash_value);
    transparent_crc(p_644->g_366.s0, "p_644->g_366.s0", print_hash_value);
    transparent_crc(p_644->g_366.s1, "p_644->g_366.s1", print_hash_value);
    transparent_crc(p_644->g_366.s2, "p_644->g_366.s2", print_hash_value);
    transparent_crc(p_644->g_366.s3, "p_644->g_366.s3", print_hash_value);
    transparent_crc(p_644->g_366.s4, "p_644->g_366.s4", print_hash_value);
    transparent_crc(p_644->g_366.s5, "p_644->g_366.s5", print_hash_value);
    transparent_crc(p_644->g_366.s6, "p_644->g_366.s6", print_hash_value);
    transparent_crc(p_644->g_366.s7, "p_644->g_366.s7", print_hash_value);
    transparent_crc(p_644->g_366.s8, "p_644->g_366.s8", print_hash_value);
    transparent_crc(p_644->g_366.s9, "p_644->g_366.s9", print_hash_value);
    transparent_crc(p_644->g_366.sa, "p_644->g_366.sa", print_hash_value);
    transparent_crc(p_644->g_366.sb, "p_644->g_366.sb", print_hash_value);
    transparent_crc(p_644->g_366.sc, "p_644->g_366.sc", print_hash_value);
    transparent_crc(p_644->g_366.sd, "p_644->g_366.sd", print_hash_value);
    transparent_crc(p_644->g_366.se, "p_644->g_366.se", print_hash_value);
    transparent_crc(p_644->g_366.sf, "p_644->g_366.sf", print_hash_value);
    transparent_crc(p_644->g_438.s0, "p_644->g_438.s0", print_hash_value);
    transparent_crc(p_644->g_438.s1, "p_644->g_438.s1", print_hash_value);
    transparent_crc(p_644->g_438.s2, "p_644->g_438.s2", print_hash_value);
    transparent_crc(p_644->g_438.s3, "p_644->g_438.s3", print_hash_value);
    transparent_crc(p_644->g_438.s4, "p_644->g_438.s4", print_hash_value);
    transparent_crc(p_644->g_438.s5, "p_644->g_438.s5", print_hash_value);
    transparent_crc(p_644->g_438.s6, "p_644->g_438.s6", print_hash_value);
    transparent_crc(p_644->g_438.s7, "p_644->g_438.s7", print_hash_value);
    transparent_crc(p_644->g_438.s8, "p_644->g_438.s8", print_hash_value);
    transparent_crc(p_644->g_438.s9, "p_644->g_438.s9", print_hash_value);
    transparent_crc(p_644->g_438.sa, "p_644->g_438.sa", print_hash_value);
    transparent_crc(p_644->g_438.sb, "p_644->g_438.sb", print_hash_value);
    transparent_crc(p_644->g_438.sc, "p_644->g_438.sc", print_hash_value);
    transparent_crc(p_644->g_438.sd, "p_644->g_438.sd", print_hash_value);
    transparent_crc(p_644->g_438.se, "p_644->g_438.se", print_hash_value);
    transparent_crc(p_644->g_438.sf, "p_644->g_438.sf", print_hash_value);
    transparent_crc(p_644->g_496, "p_644->g_496", print_hash_value);
    transparent_crc(p_644->g_533.x, "p_644->g_533.x", print_hash_value);
    transparent_crc(p_644->g_533.y, "p_644->g_533.y", print_hash_value);
    transparent_crc(p_644->g_635.f0, "p_644->g_635.f0", print_hash_value);
    transparent_crc(p_644->v_collective, "p_644->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 62; i++)
            transparent_crc(p_644->g_special_values[i + 62 * get_linear_group_id()], "p_644->g_special_values[i + 62 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 62; i++)
            transparent_crc(p_644->l_special_values[i], "p_644->l_special_values[i]", print_hash_value);
    transparent_crc(p_644->l_comm_values[get_linear_local_id()], "p_644->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_644->g_comm_values[get_linear_group_id() * 14 + get_linear_local_id()], "p_644->g_comm_values[get_linear_group_id() * 14 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
