// --atomics 12 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 50,79,1 -l 5,1,1
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

__constant uint32_t permutations[10][5] = {
{3,0,2,1,4}, // permutation 0
{4,3,0,2,1}, // permutation 1
{2,0,1,3,4}, // permutation 2
{2,3,1,4,0}, // permutation 3
{1,4,2,0,3}, // permutation 4
{4,0,2,3,1}, // permutation 5
{1,0,4,2,3}, // permutation 6
{3,0,2,4,1}, // permutation 7
{1,0,3,4,2}, // permutation 8
{1,4,0,3,2} // permutation 9
};

// Seed: 1018940483

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2;
    VECTOR(int8_t, 8) g_41;
    VECTOR(int32_t, 16) g_44;
    int64_t g_50;
    int32_t *g_60[8][6][3];
    int32_t ** volatile g_59;
    int64_t g_71;
    int32_t g_86;
    int32_t g_87;
    uint64_t g_101[10];
    VECTOR(int8_t, 8) g_102;
    uint32_t g_106;
    VECTOR(int16_t, 8) g_107;
    VECTOR(int16_t, 2) g_108;
    uint8_t g_113;
    volatile VECTOR(uint32_t, 2) g_119;
    uint16_t g_171;
    int32_t * volatile g_173;
    int32_t ** volatile g_178;
    int32_t * volatile g_197;
    volatile int8_t g_200[5][6];
    volatile int8_t *g_199;
    volatile int8_t ** volatile g_198;
    VECTOR(int8_t, 16) g_239;
    volatile VECTOR(int16_t, 4) g_248;
    volatile int16_t * volatile g_252;
    uint64_t g_253[4][10][6];
    VECTOR(int16_t, 2) g_288;
    uint32_t g_300;
    VECTOR(uint16_t, 4) g_311;
    VECTOR(int64_t, 4) g_317;
    int32_t ** volatile g_339;
    int32_t ** volatile g_340;
    int32_t ** volatile g_341[2];
    VECTOR(uint64_t, 8) g_352;
    VECTOR(int32_t, 8) g_368;
    volatile VECTOR(int32_t, 2) g_373;
    VECTOR(int32_t, 4) g_374;
    VECTOR(int32_t, 4) g_375;
    VECTOR(int32_t, 8) g_376;
    VECTOR(uint16_t, 4) g_383;
    uint64_t g_391;
    int64_t **g_410;
    uint32_t g_415;
    VECTOR(uint32_t, 16) g_428;
    VECTOR(int32_t, 4) g_429;
    volatile VECTOR(int32_t, 8) g_432;
    int32_t * volatile g_434;
    int32_t * volatile g_436;
    int32_t * volatile g_437;
    int32_t * volatile g_439;
    int32_t * volatile g_442;
    int32_t g_448[8];
    int32_t g_450;
    volatile VECTOR(uint64_t, 8) g_504;
    volatile VECTOR(uint64_t, 16) g_506;
    volatile VECTOR(int32_t, 2) g_559;
    uint32_t g_569;
    uint32_t g_575;
    uint64_t g_578;
    uint8_t g_580[9];
    int8_t g_583;
    uint32_t g_586;
    int32_t * volatile g_591;
    VECTOR(uint64_t, 2) g_602;
    VECTOR(uint64_t, 4) g_606;
    int16_t *g_608;
    int16_t **g_607[10][1][9];
    int32_t * volatile g_610;
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
int32_t  func_1(struct S0 * p_611);
int32_t  func_5(int32_t  p_6, struct S0 * p_611);
uint16_t  func_10(uint32_t  p_11, int8_t  p_12, struct S0 * p_611);
int64_t  func_13(int32_t  p_14, struct S0 * p_611);
int16_t  func_19(uint8_t  p_20, uint32_t  p_21, uint8_t  p_22, int32_t  p_23, struct S0 * p_611);
uint8_t  func_24(uint8_t  p_25, int8_t  p_26, uint32_t  p_27, struct S0 * p_611);
uint8_t  func_28(int32_t  p_29, uint16_t  p_30, uint16_t  p_31, struct S0 * p_611);
uint64_t  func_35(uint32_t  p_36, int32_t  p_37, uint32_t  p_38, struct S0 * p_611);
int32_t  func_45(int32_t  p_46, struct S0 * p_611);
uint8_t  func_47(int32_t  p_48, struct S0 * p_611);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_611->g_2 p_611->g_198 p_611->g_199 p_611->g_200 p_611->g_107 p_611->g_86 p_611->g_368 p_611->g_101 p_611->g_415 p_611->g_602 p_611->g_606 p_611->g_607 p_611->g_580 p_611->l_comm_values p_611->g_374 p_611->g_239 p_611->g_610
 * writes: p_611->g_2 p_611->g_107 p_611->g_101 p_611->g_580 p_611->g_87
 */
int32_t  func_1(struct S0 * p_611)
{ /* block id: 4 */
    int32_t l_592[6][5] = {{0x5BBC5F9AL,0x23E4748BL,0x5BBC5F9AL,0x5BBC5F9AL,0x23E4748BL},{0x5BBC5F9AL,0x23E4748BL,0x5BBC5F9AL,0x5BBC5F9AL,0x23E4748BL},{0x5BBC5F9AL,0x23E4748BL,0x5BBC5F9AL,0x5BBC5F9AL,0x23E4748BL},{0x5BBC5F9AL,0x23E4748BL,0x5BBC5F9AL,0x5BBC5F9AL,0x23E4748BL},{0x5BBC5F9AL,0x23E4748BL,0x5BBC5F9AL,0x5BBC5F9AL,0x23E4748BL},{0x5BBC5F9AL,0x23E4748BL,0x5BBC5F9AL,0x5BBC5F9AL,0x23E4748BL}};
    int16_t *l_593 = (void*)0;
    int16_t *l_594[9][4][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint64_t *l_595 = &p_611->g_101[1];
    VECTOR(int8_t, 2) l_596 = (VECTOR(int8_t, 2))(0L, 0x67L);
    VECTOR(uint64_t, 8) l_603 = (VECTOR(uint64_t, 8))(0x7885DE60D43BCA63L, (VECTOR(uint64_t, 4))(0x7885DE60D43BCA63L, (VECTOR(uint64_t, 2))(0x7885DE60D43BCA63L, 0x042AE447CCED5418L), 0x042AE447CCED5418L), 0x042AE447CCED5418L, 0x7885DE60D43BCA63L, 0x042AE447CCED5418L);
    VECTOR(uint64_t, 8) l_604 = (VECTOR(uint64_t, 8))(0xD6A4CD3E744250C5L, (VECTOR(uint64_t, 4))(0xD6A4CD3E744250C5L, (VECTOR(uint64_t, 2))(0xD6A4CD3E744250C5L, 0UL), 0UL), 0UL, 0xD6A4CD3E744250C5L, 0UL);
    VECTOR(uint64_t, 2) l_605 = (VECTOR(uint64_t, 2))(0x13FA5D168A6DC318L, 18446744073709551607UL);
    uint8_t *l_609 = &p_611->g_580[1];
    int i, j, k;
    for (p_611->g_2 = 0; (p_611->g_2 < 29); p_611->g_2 = safe_add_func_uint8_t_u_u(p_611->g_2, 3))
    { /* block id: 7 */
        (1 + 1);
    }
    (*p_611->g_610) = ((!(p_611->g_107.s4 |= (+((**p_611->g_198) ^ l_592[3][4])))) > ((p_611->g_86 ^ (+(p_611->g_368.s2 , (((l_592[4][0] != ((*l_595) &= GROUP_DIVERGE(2, 1))) >= ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 8))(l_596.xxxxxyxx))))))).s4) != (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((safe_lshift_func_uint16_t_u_u((p_611->g_415 != (~((*l_609) |= (((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(uint64_t, 4))(p_611->g_602.xyyy)).yyxyxzxw, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 2))(0x3A4C491F2C4EFA48L, 18446744073709551615UL)), ((VECTOR(uint64_t, 4))(l_603.s5200)).odd))), ((VECTOR(uint64_t, 16))(l_604.s1307525244741140)).sc4))).xyxy, ((VECTOR(uint64_t, 4))(l_605.xyyx))))).zzzzyxyz))))).even, (uint64_t)(0x9D816664L == l_604.s1)))).even)), ((VECTOR(uint64_t, 2))(p_611->g_606.yz))))).even , ((p_611->g_415 , p_611->g_607[2][0][5]) != &p_611->g_608))))), p_611->l_comm_values[(safe_mod_func_uint32_t_u_u(p_611->tid, 5))])) & p_611->g_374.w))), p_611->g_239.sc)))))) < 0x71F7L));
    return l_592[0][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_611->l_comm_values p_611->g_41 p_611->g_44 p_611->g_2 p_611->g_59 p_611->g_71 p_611->g_86 p_611->g_comm_values p_611->g_60 p_611->g_101 p_611->g_102 p_611->g_107 p_611->g_108 p_611->g_87 p_611->g_119 p_611->g_50 p_611->g_113 p_611->g_173 p_611->g_171 p_611->g_198 p_611->g_106 p_611->g_239 p_611->g_199 p_611->g_200 p_611->g_248 p_611->g_252 p_611->g_340 p_611->g_352 p_611->g_300 p_611->g_368 p_611->g_373 p_611->g_374 p_611->g_375 p_611->g_376 p_611->g_383 p_611->g_391 p_611->g_410 p_611->g_428 p_611->g_429 p_611->g_432 p_611->g_434 p_611->g_442 p_611->g_288 p_611->g_415 p_611->g_504 p_611->g_506 p_611->g_253 p_611->g_578 p_611->g_586 p_611->g_317
 * writes: p_611->g_50 p_611->g_60 p_611->g_86 p_611->g_87 p_611->g_comm_values p_611->g_101 p_611->g_106 p_611->g_41 p_611->g_71 p_611->g_171 p_611->g_198 p_611->g_107 p_611->g_253 p_611->g_300 p_611->g_391 p_611->g_415 p_611->g_448 p_611->g_450 p_611->g_410 p_611->g_113 p_611->g_578 p_611->g_583 p_611->g_586 p_611->g_317
 */
int32_t  func_5(int32_t  p_6, struct S0 * p_611)
{ /* block id: 8 */
    VECTOR(uint32_t, 16) l_9 = (VECTOR(uint32_t, 16))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0x88E00F68L), 0x88E00F68L), 0x88E00F68L, 4294967288UL, 0x88E00F68L, (VECTOR(uint32_t, 2))(4294967288UL, 0x88E00F68L), (VECTOR(uint32_t, 2))(4294967288UL, 0x88E00F68L), 4294967288UL, 0x88E00F68L, 4294967288UL, 0x88E00F68L);
    VECTOR(uint32_t, 4) l_565 = (VECTOR(uint32_t, 4))(0x7CF6B1C7L, (VECTOR(uint32_t, 2))(0x7CF6B1C7L, 0UL), 0UL);
    uint32_t *l_568[8][5][5] = {{{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569}},{{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569}},{{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569}},{{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569}},{{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569}},{{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569}},{{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569}},{{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569},{&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569,&p_611->g_569}}};
    int32_t l_570 = (-1L);
    uint32_t *l_574 = &p_611->g_575;
    uint32_t **l_573[6][9][4] = {{{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574}},{{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574}},{{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574}},{{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574}},{{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574}},{{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574},{&l_574,&l_574,(void*)0,&l_574}}};
    uint32_t ***l_576 = (void*)0;
    uint64_t *l_577 = &p_611->g_578;
    uint8_t *l_579[1][5] = {{&p_611->g_580[1],&p_611->g_580[1],&p_611->g_580[1],&p_611->g_580[1],&p_611->g_580[1]}};
    int8_t *l_581 = (void*)0;
    int8_t *l_582 = &p_611->g_583;
    int32_t l_584 = 0x0ABAAAE9L;
    uint32_t *l_585 = &p_611->g_586;
    int64_t *l_587 = (void*)0;
    int64_t *l_588[3][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_589[3][8] = {{0L,0x007B0EF6L,0L,0L,0x007B0EF6L,0L,0L,0x007B0EF6L},{0L,0x007B0EF6L,0L,0L,0x007B0EF6L,0L,0L,0x007B0EF6L},{0L,0x007B0EF6L,0L,0L,0x007B0EF6L,0L,0L,0x007B0EF6L}};
    int32_t *l_590 = &l_570;
    int i, j, k;
    (*l_590) = (l_589[2][4] |= ((p_611->g_317.x &= (safe_mod_func_int16_t_s_s((((VECTOR(uint32_t, 8))(l_9.s029989d2)).s2 , (func_10((func_13(l_9.s1, p_611) >= (((((VECTOR(uint32_t, 2))(l_565.wx)).hi >= ((*l_585) |= ((l_584 ^= (safe_sub_func_int8_t_s_s(((l_570 ^= p_611->g_239.sc) , ((*l_582) = ((65526UL == ((l_570 |= (p_611->g_383.w <= ((*l_577) |= (((safe_add_func_int32_t_s_s((-5L), l_9.sc)) != ((l_573[2][4][0] = l_573[4][7][3]) == (void*)0)) ^ GROUP_DIVERGE(0, 1))))) & 0L)) == 255UL))), 0x19L))) >= p_6))) , 0L) & 8L)), l_9.sf, p_611) & p_611->g_383.y)), p_6))) > p_611->g_383.x));
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_10(uint32_t  p_11, int8_t  p_12, struct S0 * p_611)
{ /* block id: 275 */
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_611->l_comm_values p_611->g_41 p_611->g_44 p_611->g_2 p_611->g_59 p_611->g_71 p_611->g_86 p_611->g_comm_values p_611->g_60 p_611->g_101 p_611->g_102 p_611->g_107 p_611->g_108 p_611->g_87 p_611->g_119 p_611->g_50 p_611->g_113 p_611->g_173 p_611->g_171 p_611->g_198 p_611->g_106 p_611->g_239 p_611->g_199 p_611->g_200 p_611->g_248 p_611->g_252 p_611->g_340 p_611->g_352 p_611->g_300 p_611->g_368 p_611->g_373 p_611->g_374 p_611->g_375 p_611->g_376 p_611->g_383 p_611->g_391 p_611->g_410 p_611->g_428 p_611->g_429 p_611->g_432 p_611->g_434 p_611->g_442 p_611->g_288 p_611->g_415 p_611->g_504 p_611->g_506 p_611->g_253
 * writes: p_611->g_50 p_611->g_60 p_611->g_86 p_611->g_87 p_611->g_comm_values p_611->g_101 p_611->g_106 p_611->g_41 p_611->g_71 p_611->g_171 p_611->g_198 p_611->g_107 p_611->g_253 p_611->g_300 p_611->g_391 p_611->g_415 p_611->g_448 p_611->g_450 p_611->g_410 p_611->g_113
 */
int64_t  func_13(int32_t  p_14, struct S0 * p_611)
{ /* block id: 9 */
    uint64_t l_34 = 0x77E06985BA5616D2L;
    VECTOR(uint8_t, 16) l_42 = (VECTOR(uint8_t, 16))(0xA6L, (VECTOR(uint8_t, 4))(0xA6L, (VECTOR(uint8_t, 2))(0xA6L, 0x9CL), 0x9CL), 0x9CL, 0xA6L, 0x9CL, (VECTOR(uint8_t, 2))(0xA6L, 0x9CL), (VECTOR(uint8_t, 2))(0xA6L, 0x9CL), 0xA6L, 0x9CL, 0xA6L, 0x9CL);
    int64_t *l_49 = &p_611->g_50;
    int32_t l_95 = 0x2B73F0FFL;
    uint64_t *l_142 = &p_611->g_101[1];
    int64_t l_245[5][5] = {{0x4FD4EE81691C3A0EL,1L,0x4FD4EE81691C3A0EL,0x4FD4EE81691C3A0EL,1L},{0x4FD4EE81691C3A0EL,1L,0x4FD4EE81691C3A0EL,0x4FD4EE81691C3A0EL,1L},{0x4FD4EE81691C3A0EL,1L,0x4FD4EE81691C3A0EL,0x4FD4EE81691C3A0EL,1L},{0x4FD4EE81691C3A0EL,1L,0x4FD4EE81691C3A0EL,0x4FD4EE81691C3A0EL,1L},{0x4FD4EE81691C3A0EL,1L,0x4FD4EE81691C3A0EL,0x4FD4EE81691C3A0EL,1L}};
    int32_t *l_435 = (void*)0;
    int32_t *l_438 = (void*)0;
    int32_t *l_440 = (void*)0;
    int32_t *l_441 = (void*)0;
    int32_t *l_447 = &p_611->g_448[3];
    int32_t *l_449 = &p_611->g_450;
    uint32_t **l_451 = (void*)0;
    uint32_t *l_453 = (void*)0;
    uint32_t **l_452 = &l_453;
    VECTOR(int8_t, 8) l_454 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L));
    int16_t *l_456 = (void*)0;
    int16_t *l_457 = (void*)0;
    int16_t *l_458 = (void*)0;
    int16_t *l_459 = (void*)0;
    int16_t *l_460 = (void*)0;
    int16_t *l_461 = (void*)0;
    int16_t *l_462 = (void*)0;
    int16_t *l_463 = (void*)0;
    int16_t *l_464 = (void*)0;
    int16_t *l_465 = (void*)0;
    int16_t *l_466 = (void*)0;
    int16_t *l_467 = (void*)0;
    int16_t *l_468 = (void*)0;
    int16_t *l_469 = (void*)0;
    int16_t *l_470[4][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t **l_485 = &l_441;
    int32_t ***l_484 = &l_485;
    int32_t ****l_483 = &l_484;
    int32_t l_490 = 0L;
    int32_t l_491[6] = {0x25B967A1L,0x25B967A1L,0x25B967A1L,0x25B967A1L,0x25B967A1L,0x25B967A1L};
    uint32_t l_501 = 0x15C8128CL;
    int64_t *l_509[3];
    int64_t **l_508 = &l_509[2];
    int64_t **l_513 = &l_509[2];
    VECTOR(int8_t, 8) l_521 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
    VECTOR(int16_t, 4) l_562 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-3L)), (-3L));
    int i, j;
    for (i = 0; i < 3; i++)
        l_509[i] = &p_611->g_71;
    (*p_611->g_434) = (p_14 = (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(func_19((p_14 != (p_611->l_comm_values[(safe_mod_func_uint32_t_u_u(p_611->tid, 5))] , ((func_24(func_28(((((*l_142) = (safe_mod_func_int8_t_s_s(((l_34 && func_35(((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_611->g_41.s01617716))))))).s6, ((VECTOR(uint8_t, 4))(l_42.s5c93)).y)) | l_34), ((safe_unary_minus_func_uint64_t_u(0x6DAAFD55BE9843C6L)) & ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(p_611->g_44.se60d)).ywzxwxyyxwzxyyzz, (int32_t)func_45((0x22L || (l_95 = func_47((((VECTOR(int8_t, 8))((((*l_49) = p_611->g_2) , (safe_div_func_uint8_t_u_u((p_14 | (safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u((p_14 > 0UL), p_14)), p_14))), l_42.sf))), ((VECTOR(int8_t, 4))(0x7CL)), 0x72L, (-1L), 0L)).s6 , p_611->g_41.s1), p_611))), p_611)))).s7), p_611->g_41.s5, p_611)) || p_611->g_113), (-7L)))) , 0x3F8AL) , p_611->g_108.y), p_611->g_44.s7, p_14, p_611), p_611->g_108.y, p_611->g_107.s5, p_611) < p_14) >= l_42.s2))), l_245[4][0], p_14, l_42.s4, p_611), 14)), GROUP_DIVERGE(0, 1))));
    (*p_611->g_442) = p_14;
    if ((((((((safe_add_func_uint32_t_u_u(((((*l_449) = ((*l_447) = 0x623E9BA2L)) , ((&p_611->g_415 != ((*l_452) = l_438)) && p_611->g_41.s2)) & (((VECTOR(int8_t, 8))(l_454.s71125516)).s1 <= (*p_611->g_199))), ((p_611->l_comm_values[(safe_mod_func_uint32_t_u_u(p_611->tid, 5))] > (safe_unary_minus_func_int16_t_s((~(((p_611->g_288.x || 1L) <= (((l_95 = 0x2ED3L) & 0x253EL) | p_611->g_415)) <= p_611->g_41.s2))))) , p_14))) > p_14) && 0UL) > p_14) >= 0L) < 0xDB559565L) | p_611->g_239.sa))
    { /* block id: 221 */
        for (p_611->g_106 = (-30); (p_611->g_106 != 15); p_611->g_106 = safe_add_func_uint64_t_u_u(p_611->g_106, 4))
        { /* block id: 224 */
            VECTOR(int32_t, 8) l_476 = (VECTOR(int32_t, 8))(0x0BBC7AF6L, (VECTOR(int32_t, 4))(0x0BBC7AF6L, (VECTOR(int32_t, 2))(0x0BBC7AF6L, 0x56F3D11DL), 0x56F3D11DL), 0x56F3D11DL, 0x0BBC7AF6L, 0x56F3D11DL);
            int i;
            for (p_611->g_87 = 0; (p_611->g_87 < 29); p_611->g_87 = safe_add_func_int32_t_s_s(p_611->g_87, 9))
            { /* block id: 227 */
                int32_t **l_475 = &l_440;
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_611->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 5)), permutations[(safe_mod_func_uint32_t_u_u(p_611->g_200[2][0], 10))][(safe_mod_func_uint32_t_u_u(p_611->tid, 5))]));
                (*l_475) = &p_14;
                (**l_475) = ((VECTOR(int32_t, 16))(l_476.s5643641561612502)).s0;
            }
        }
    }
    else
    { /* block id: 235 */
        int32_t ****l_481 = (void*)0;
        int32_t l_489 = 0L;
        int32_t *l_495 = &l_491[2];
        int32_t *l_496 = &l_491[5];
        int32_t *l_497 = &l_491[2];
        int32_t *l_498 = (void*)0;
        int32_t *l_499[4] = {&l_491[0],&l_491[0],&l_491[0],&l_491[0]};
        int32_t l_500 = 0x53CD66C7L;
        VECTOR(uint64_t, 16) l_505 = (VECTOR(uint64_t, 16))(0x35EF404012A5C6B3L, (VECTOR(uint64_t, 4))(0x35EF404012A5C6B3L, (VECTOR(uint64_t, 2))(0x35EF404012A5C6B3L, 0x8BB2942D23E519D0L), 0x8BB2942D23E519D0L), 0x8BB2942D23E519D0L, 0x35EF404012A5C6B3L, 0x8BB2942D23E519D0L, (VECTOR(uint64_t, 2))(0x35EF404012A5C6B3L, 0x8BB2942D23E519D0L), (VECTOR(uint64_t, 2))(0x35EF404012A5C6B3L, 0x8BB2942D23E519D0L), 0x35EF404012A5C6B3L, 0x8BB2942D23E519D0L, 0x35EF404012A5C6B3L, 0x8BB2942D23E519D0L);
        VECTOR(uint64_t, 16) l_507 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 8UL), 8UL), 8UL, 1UL, 8UL, (VECTOR(uint64_t, 2))(1UL, 8UL), (VECTOR(uint64_t, 2))(1UL, 8UL), 1UL, 8UL, 1UL, 8UL);
        int64_t ***l_510 = (void*)0;
        int64_t ***l_511 = (void*)0;
        int64_t ***l_512 = (void*)0;
        int64_t ***l_514 = &p_611->g_410;
        uint32_t *l_522 = &l_501;
        uint8_t *l_533 = &p_611->g_113;
        uint8_t l_536 = 0x00L;
        VECTOR(int32_t, 4) l_558 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x7C97A18DL), 0x7C97A18DL);
        int32_t ***l_564 = (void*)0;
        int i;
        for (p_611->g_300 = 0; (p_611->g_300 > 36); p_611->g_300++)
        { /* block id: 238 */
            int32_t *****l_482 = (void*)0;
            int32_t l_486 = 0x72DE4BD1L;
            int32_t *l_487 = &l_486;
            int32_t *l_488[2][3];
            uint64_t l_492[2];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_488[i][j] = (void*)0;
            }
            for (i = 0; i < 2; i++)
                l_492[i] = 0x81C143AC572380B8L;
            p_14 = (safe_rshift_func_int8_t_s_s((p_14 , ((l_481 = l_481) != l_483)), 4));
            l_492[1]++;
        }
        --l_501;
        if ((((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 2))(0x72F19E9F229C42BBL, 0xE30F86DF7CF42B48L)).xyyxyxxyyyyyyxyy, ((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 8))(p_611->g_504.s43430620)), ((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_505.s384d6385)).s1230074140707141)).s5d, ((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 4))(p_611->g_506.s98ca)), ((VECTOR(uint64_t, 8))(l_507.s7381840a)).odd))).even, (uint64_t)(((l_508 == ((*l_514) = (l_513 = &l_509[2]))) != p_14) || ((safe_sub_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(1L, 0x7AL, 0x06L, 0L)).zzyzxzzy)), ((VECTOR(int8_t, 4))(l_521.s1734)), ((VECTOR(int8_t, 2))((-1L), 0x69L)), 2L, 0x32L)).s7 && p_14) <= ((*l_142) = (!(p_14 < ((*l_522)--))))) > (safe_rshift_func_int16_t_s_u(((*l_497) = (FAKE_DIVERGE(p_611->global_2_offset, get_global_id(2), 10) & ((*l_533) = (safe_sub_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((((p_611->g_41.s0 , l_498) != &p_611->g_415) , ((void*)0 != l_481)), 3)), p_14)) >= FAKE_DIVERGE(p_611->local_2_offset, get_local_id(2), 10)), p_611->g_253[1][5][3]))))), 0))), p_14)), p_611->g_50)), p_14)) ^ p_14)))))))).yyxyxyxx))).s5211130244301623))).s0 & p_611->g_429.y))
        { /* block id: 250 */
            int32_t *l_534 = &l_489;
            int32_t l_535[7] = {(-7L),0x65BE59F1L,(-7L),(-7L),0x65BE59F1L,(-7L),(-7L)};
            int i;
            (***l_483) = l_534;
            (*l_534) ^= (-1L);
            l_536++;
        }
        else
        { /* block id: 254 */
            uint16_t l_544 = 0x3835L;
            int8_t *l_547 = (void*)0;
            int8_t *l_548 = (void*)0;
            int8_t *l_549[4];
            int i;
            for (i = 0; i < 4; i++)
                l_549[i] = (void*)0;
            p_14 = (safe_mod_func_uint8_t_u_u(((((VECTOR(int32_t, 4))(0x20F250D4L, ((VECTOR(int32_t, 2))(0x52C62A5AL, (-9L))), 0L)).z , &p_611->g_415) != (void*)0), (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((*l_495) = (((!0x66L) & (l_544--)) == p_14)))), 8L))));
        }
        for (p_611->g_415 = (-30); (p_611->g_415 > 39); ++p_611->g_415)
        { /* block id: 261 */
            VECTOR(int32_t, 16) l_552 = (VECTOR(int32_t, 16))(0x44D12F89L, (VECTOR(int32_t, 4))(0x44D12F89L, (VECTOR(int32_t, 2))(0x44D12F89L, (-1L)), (-1L)), (-1L), 0x44D12F89L, (-1L), (VECTOR(int32_t, 2))(0x44D12F89L, (-1L)), (VECTOR(int32_t, 2))(0x44D12F89L, (-1L)), 0x44D12F89L, (-1L), 0x44D12F89L, (-1L));
            VECTOR(int32_t, 8) l_553 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x462C45C4L), 0x462C45C4L), 0x462C45C4L, 0L, 0x462C45C4L);
            int16_t *l_556[3];
            int16_t **l_557 = &l_463;
            int32_t ***l_563 = &l_485;
            int i;
            for (i = 0; i < 3; i++)
                l_556[i] = (void*)0;
            (*l_497) = (!((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(4L, ((VECTOR(int32_t, 2))(l_552.s51)), 0L)).lo)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_553.s55166175)).s0333003430225045)).s26))).yxyxyyyxyyxxxxyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(((p_14 || 0L) || 6L), ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(0x5659B731L, (4L | (((*l_557) = l_556[0]) == p_611->g_252)), 0L, (-1L))).wxzxyxzy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_558.ywyy)).y, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(p_611->g_559.yxxxyxxxyyyyyyxx)).s50))), 0x1B166290L, (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_562.wy)).lo, ((((*l_483) == (l_564 = l_563)) <= p_14) | (**p_611->g_198)))), ((VECTOR(int32_t, 8))((-4L))), p_14, 0x7BE2D294L, 0L)).sf0ed)), ((VECTOR(int32_t, 4))(0x5F876A17L))))))), (-1L), ((VECTOR(int32_t, 2))(0L)), 0x61C6FE0FL, ((VECTOR(int32_t, 2))(1L)), 0x01319E6CL)).sca35, ((VECTOR(int32_t, 4))(0x2B17EB8EL))))).lo)), 0x05AAC9D4L, 0x0B6FD443L, (*l_497), p_14, 0x13AF5842L, p_14, ((VECTOR(int32_t, 8))(0x229E87BFL)))).s8c31)).wzwxwxxzxwzyzyww))).odd)).s3);
        }
    }
    return p_14;
}


/* ------------------------------------------ */
/* 
 * reads : p_611->g_119 p_611->g_173 p_611->g_248 p_611->g_101 p_611->g_252 p_611->g_198 p_611->g_199 p_611->g_200 p_611->g_171 p_611->g_340 p_611->g_352 p_611->g_50 p_611->g_300 p_611->g_86 p_611->g_106 p_611->g_368 p_611->g_373 p_611->g_374 p_611->g_375 p_611->g_376 p_611->g_383 p_611->g_391 p_611->g_44 p_611->g_410 p_611->g_428 p_611->g_429 p_611->g_432
 * writes: p_611->g_86 p_611->g_253 p_611->g_171 p_611->g_106 p_611->g_60 p_611->g_50 p_611->g_300 p_611->g_391 p_611->g_415
 */
int16_t  func_19(uint8_t  p_20, uint32_t  p_21, uint8_t  p_22, int32_t  p_23, struct S0 * p_611)
{ /* block id: 94 */
    uint32_t *l_246[9] = {&p_611->g_106,&p_611->g_106,&p_611->g_106,&p_611->g_106,&p_611->g_106,&p_611->g_106,&p_611->g_106,&p_611->g_106,&p_611->g_106};
    int32_t *l_247[3][8][8] = {{{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0}},{{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0}},{{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0},{&p_611->g_86,(void*)0,(void*)0,(void*)0,&p_611->g_86,&p_611->g_86,(void*)0,(void*)0}}};
    VECTOR(uint16_t, 8) l_249 = (VECTOR(uint16_t, 8))(0x37E8L, (VECTOR(uint16_t, 4))(0x37E8L, (VECTOR(uint16_t, 2))(0x37E8L, 0x7FC5L), 0x7FC5L), 0x7FC5L, 0x37E8L, 0x7FC5L);
    VECTOR(int8_t, 8) l_250 = (VECTOR(int8_t, 8))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0x11L), 0x11L), 0x11L, 3L, 0x11L);
    int16_t *l_251 = (void*)0;
    uint64_t l_272[7];
    uint16_t l_273 = 65529UL;
    VECTOR(uint32_t, 4) l_291 = (VECTOR(uint32_t, 4))(0xECECE441L, (VECTOR(uint32_t, 2))(0xECECE441L, 0x29F25575L), 0x29F25575L);
    int8_t l_304 = 5L;
    uint64_t l_305[6];
    int8_t *l_314[1];
    int8_t **l_313 = &l_314[0];
    VECTOR(int32_t, 8) l_351 = (VECTOR(int32_t, 8))(0x4349DDBAL, (VECTOR(int32_t, 4))(0x4349DDBAL, (VECTOR(int32_t, 2))(0x4349DDBAL, 0x50908E7AL), 0x50908E7AL), 0x50908E7AL, 0x4349DDBAL, 0x50908E7AL);
    uint64_t l_353 = 0x8A0AC1C53F75B024L;
    uint64_t l_378[8] = {0x334B7F8A7547D958L,0x334B7F8A7547D958L,0x334B7F8A7547D958L,0x334B7F8A7547D958L,0x334B7F8A7547D958L,0x334B7F8A7547D958L,0x334B7F8A7547D958L,0x334B7F8A7547D958L};
    int32_t **l_395[8][2][7] = {{{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]},{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]}},{{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]},{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]}},{{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]},{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]}},{{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]},{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]}},{{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]},{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]}},{{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]},{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]}},{{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]},{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]}},{{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]},{&l_247[0][3][1],&p_611->g_60[7][4][1],&p_611->g_60[7][5][0],(void*)0,&l_247[2][1][6],(void*)0,&l_247[1][3][2]}}};
    int32_t ***l_394 = &l_395[6][0][1];
    int64_t *l_419 = &p_611->g_50;
    int64_t *l_420 = &p_611->g_50;
    VECTOR(int32_t, 2) l_430 = (VECTOR(int32_t, 2))(0x73CC1213L, 1L);
    VECTOR(int32_t, 4) l_431 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x2A710321L), 0x2A710321L);
    VECTOR(uint32_t, 16) l_433 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_272[i] = 18446744073709551615UL;
    for (i = 0; i < 6; i++)
        l_305[i] = 0UL;
    for (i = 0; i < 1; i++)
        l_314[i] = (void*)0;
    p_611->g_253[1][1][5] = (((p_611->g_119.y , (((void*)0 != l_246[8]) != ((*p_611->g_173) = p_21))) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x3208CF20L, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_611->g_248.wywzxzzyxxzxwxzy)).sb82f)).even, ((VECTOR(uint16_t, 4))(l_249.s2436)).odd))), 1L, (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_250.s7641)).wwwzywzxwxwzyyxz)))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((l_251 == ((p_611->g_101[9] & (GROUP_DIVERGE(0, 1) < (-1L))) , p_611->g_252)), (**p_611->g_198), 0x09L, p_21, 1L, ((VECTOR(int8_t, 2))(1L)), (-1L))).s4151002637600451))))).sb2)).yyxx, ((VECTOR(int8_t, 4))(0x27L))))).yzwwzyyx)).s7 | GROUP_DIVERGE(0, 1)), ((VECTOR(int32_t, 4))(0x07B9FA78L)), p_20, 0x190F697BL, 1L, p_23, 0x7593E0B7L, 0x04707266L, 0x06334285L)).s1125)).y) , p_22);
    for (p_611->g_171 = 0; (p_611->g_171 >= 52); p_611->g_171++)
    { /* block id: 99 */
        uint64_t l_259 = 0x71214B1B1B573E32L;
        int32_t l_280 = (-10L);
        VECTOR(int32_t, 4) l_292 = (VECTOR(int32_t, 4))(0x0EA11A9AL, (VECTOR(int32_t, 2))(0x0EA11A9AL, 0x33173A65L), 0x33173A65L);
        VECTOR(uint16_t, 8) l_295 = (VECTOR(uint16_t, 8))(4UL, (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0x6776L), 0x6776L), 0x6776L, 4UL, 0x6776L);
        VECTOR(uint16_t, 16) l_310 = (VECTOR(uint16_t, 16))(0xD6D1L, (VECTOR(uint16_t, 4))(0xD6D1L, (VECTOR(uint16_t, 2))(0xD6D1L, 0x3E58L), 0x3E58L), 0x3E58L, 0xD6D1L, 0x3E58L, (VECTOR(uint16_t, 2))(0xD6D1L, 0x3E58L), (VECTOR(uint16_t, 2))(0xD6D1L, 0x3E58L), 0xD6D1L, 0x3E58L, 0xD6D1L, 0x3E58L);
        uint64_t *l_312 = &p_611->g_253[1][1][5];
        int16_t *l_320[9][3][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_321 = 0x62DF73BDL;
        int i, j, k;
        (1 + 1);
    }
    if (((safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u(18446744073709551615UL, (p_20 < ((VECTOR(uint16_t, 2))(65535UL, 0xAC0FL)).even))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x0D6D90EDL, 0x34376A23L, 0x6E5F3C94L, 1L)).xyxzywzxyzwxzyyy)).sa)) , p_21))
    { /* block id: 136 */
        int32_t l_328 = 0L;
        int32_t **l_342 = (void*)0;
        int32_t **l_343[5] = {&p_611->g_60[1][2][0],&p_611->g_60[1][2][0],&p_611->g_60[1][2][0],&p_611->g_60[1][2][0],&p_611->g_60[1][2][0]};
        VECTOR(int32_t, 2) l_350 = (VECTOR(int32_t, 2))((-5L), 0L);
        int i;
        for (p_21 = 0; (p_21 <= 8); ++p_21)
        { /* block id: 139 */
            l_328 = p_22;
            for (p_611->g_106 = 0; (p_611->g_106 <= 22); p_611->g_106 = safe_add_func_uint32_t_u_u(p_611->g_106, 2))
            { /* block id: 143 */
                uint32_t l_334 = 0x561029A0L;
                for (p_22 = 17; (p_22 <= 21); p_22 = safe_add_func_uint16_t_u_u(p_22, 8))
                { /* block id: 146 */
                    int32_t l_333 = 8L;
                    if (l_333)
                        break;
                }
                ++l_334;
                for (l_273 = 20; (l_273 == 28); l_273 = safe_add_func_uint64_t_u_u(l_273, 3))
                { /* block id: 152 */
                    (*p_611->g_173) = p_21;
                }
                (*p_611->g_340) = &l_328;
            }
        }
        l_247[2][7][0] = &l_328;
        l_353 = (safe_sub_func_uint64_t_u_u(FAKE_DIVERGE(p_611->global_0_offset, get_global_id(0), 10), (safe_add_func_uint16_t_u_u(65531UL, ((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_350.xxxx)).zwwywzwx)).s67, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_351.s73070774)))).s22))).yxyxxxxxyxxxyxxy))).s2, ((VECTOR(uint32_t, 2))(8UL, 4294967289UL)).even)) > ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(p_611->g_352.s11613113)).hi)).z)))));
    }
    else
    { /* block id: 160 */
        VECTOR(int8_t, 4) l_358 = (VECTOR(int8_t, 4))(0x3AL, (VECTOR(int8_t, 2))(0x3AL, 0x55L), 0x55L);
        VECTOR(int32_t, 8) l_359 = (VECTOR(int32_t, 8))(0x72344302L, (VECTOR(int32_t, 4))(0x72344302L, (VECTOR(int32_t, 2))(0x72344302L, 0x76C2014EL), 0x76C2014EL), 0x76C2014EL, 0x72344302L, 0x76C2014EL);
        VECTOR(int32_t, 4) l_365 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x2C54C533L), 0x2C54C533L);
        int32_t **l_370 = &l_247[0][3][1];
        VECTOR(int32_t, 4) l_377 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
        uint16_t *l_381 = (void*)0;
        VECTOR(int32_t, 16) l_384 = (VECTOR(int32_t, 16))(0x5D1FF4A8L, (VECTOR(int32_t, 4))(0x5D1FF4A8L, (VECTOR(int32_t, 2))(0x5D1FF4A8L, 0x0F598BC9L), 0x0F598BC9L), 0x0F598BC9L, 0x5D1FF4A8L, 0x0F598BC9L, (VECTOR(int32_t, 2))(0x5D1FF4A8L, 0x0F598BC9L), (VECTOR(int32_t, 2))(0x5D1FF4A8L, 0x0F598BC9L), 0x5D1FF4A8L, 0x0F598BC9L, 0x5D1FF4A8L, 0x0F598BC9L);
        VECTOR(int32_t, 8) l_385 = (VECTOR(int32_t, 8))(0x723A5255L, (VECTOR(int32_t, 4))(0x723A5255L, (VECTOR(int32_t, 2))(0x723A5255L, 0x102D2973L), 0x102D2973L), 0x102D2973L, 0x723A5255L, 0x102D2973L);
        int i;
        for (p_611->g_50 = 12; (p_611->g_50 > 19); p_611->g_50 = safe_add_func_int64_t_s_s(p_611->g_50, 5))
        { /* block id: 163 */
            l_359.s0 = (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_358.zzzy)).y, l_358.y));
        }
        for (p_611->g_300 = 0; (p_611->g_300 >= 5); p_611->g_300 = safe_add_func_uint32_t_u_u(p_611->g_300, 1))
        { /* block id: 168 */
            int8_t l_362 = (-4L);
            VECTOR(int32_t, 4) l_366 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
            VECTOR(int32_t, 4) l_367 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7370FB02L), 0x7370FB02L);
            int8_t l_389 = (-1L);
            int32_t ***l_396[9] = {(void*)0,&l_395[6][0][1],(void*)0,(void*)0,&l_395[6][0][1],(void*)0,(void*)0,&l_395[6][0][1],(void*)0};
            int64_t *l_400 = (void*)0;
            int i;
            l_362 &= (*p_611->g_173);
            for (p_611->g_106 = 0; (p_611->g_106 < 51); p_611->g_106++)
            { /* block id: 172 */
                return p_611->g_352.s6;
            }
            if (((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_365.zz)), 7L, 0x53689050L)).ywxyyxyzxzwwxywz))).s90, ((VECTOR(int32_t, 16))(l_366.xywyyzywxwwxwyzz)).s8f))).yyxyxxyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_367.xx)).yxxxyyyyxyxyyyyy)).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_611->g_368.s4760)).yxxwzwzwzxzwxyww)).lo))).s5)
            { /* block id: 175 */
                VECTOR(int8_t, 8) l_369 = (VECTOR(int8_t, 8))(0x5CL, (VECTOR(int8_t, 4))(0x5CL, (VECTOR(int8_t, 2))(0x5CL, 0x19L), 0x19L), 0x19L, 0x5CL, 0x19L);
                int32_t l_390 = (-1L);
                int64_t *l_399 = (void*)0;
                int64_t **l_398 = &l_399;
                int i;
                if (p_23)
                    break;
                if (l_369.s7)
                { /* block id: 177 */
                    int32_t ***l_371 = &l_370;
                    if ((*p_611->g_173))
                        break;
                    (*l_371) = l_370;
                }
                else
                { /* block id: 180 */
                    int32_t *l_372 = (void*)0;
                    uint16_t *l_382 = &p_611->g_171;
                    int32_t l_388 = 0x2ADD3D91L;
                    (*l_370) = l_372;
                    if (((VECTOR(int32_t, 8))((-10L), p_21, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(p_611->g_373.xx)).yxxyxxyy, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(p_611->g_374.ywxwwxywyxwwwwwz)))).s5f))).xyyyxyxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(2L, 0x622D4D04L)).xyyxyyxy)).hi)))).wyzwzwwy, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(p_611->g_375.wx)).yxyx))).yxxyyyxy)))))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 1L)), ((VECTOR(int32_t, 2))(p_611->g_376.s60)), ((VECTOR(int32_t, 2))(l_377.zz)).lo, ((VECTOR(int32_t, 8))(l_378[0], (p_21 , (safe_mod_func_uint16_t_u_u(((l_381 == (void*)0) , ((*l_382) = 65529UL)), ((VECTOR(uint16_t, 4))(p_611->g_383.ywxx)).z))), 0x64BF6EDBL, ((VECTOR(int32_t, 2))(l_384.s66)), 1L, 0L, 0x4431FEBAL)), 0x71C90956L, 0x11F8446EL, 1L)).odd))).even, ((VECTOR(int32_t, 2))(l_385.s67)).xxxx))), 1L, 0x335BD87EL)).s2)
                    { /* block id: 183 */
                        uint32_t l_386 = 6UL;
                        int32_t l_387 = 0x231BECA1L;
                        l_386 ^= p_20;
                        --p_611->g_391;
                    }
                    else
                    { /* block id: 186 */
                        int32_t ****l_397 = &l_396[5];
                        l_367.w = (l_394 == ((*l_397) = l_396[5]));
                        return p_21;
                    }
                }
                l_390 = (((*l_398) = &p_611->g_71) != l_400);
            }
            else
            { /* block id: 194 */
                int16_t l_403 = (-9L);
                int64_t **l_416 = &l_400;
                if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((safe_mul_func_uint16_t_u_u(p_611->g_44.s8, (((void*)0 != &p_611->g_113) , l_403))), (-1L), 0x03CB1ED0L, 8L)).zwyxwxzy)).s7)
                { /* block id: 195 */
                    return p_22;
                }
                else
                { /* block id: 197 */
                    VECTOR(int32_t, 4) l_413 = (VECTOR(int32_t, 4))(0x348E169FL, (VECTOR(int32_t, 2))(0x348E169FL, (-4L)), (-4L));
                    int i;
                    for (p_611->g_171 = 0; (p_611->g_171 != 26); p_611->g_171++)
                    { /* block id: 200 */
                        int32_t ****l_412 = &l_394;
                        int32_t *****l_411 = &l_412;
                        uint32_t *l_414 = &p_611->g_415;
                        l_384.sc = (safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((l_377.w = l_403), ((p_611->g_410 == (void*)0) < p_611->g_248.z))), ((p_611->g_410 != (((*l_414) = ((&p_611->g_106 == ((0x03L < (((((*l_411) = &l_394) == &l_394) != l_413.x) == 0x44L)) , l_246[4])) <= 1UL)) , l_416)) || 0x3564693519316094L)));
                    }
                }
            }
            if (p_21)
                continue;
        }
    }
    (*p_611->g_173) = (safe_add_func_int8_t_s_s((((p_20 > ((l_419 = l_419) != l_420)) & ((safe_sub_func_int8_t_s_s(p_22, (~0UL))) | ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))((&p_611->g_415 == ((safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((~p_611->g_352.s3), (p_20 | (safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_611->g_428.sde6c006e7f9665da)).s7f)).yyyx)).hi, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4294967291UL, 0x22549FC9L)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(p_611->g_429.zxywzywzzzxwywzz)).sdb49, ((VECTOR(int32_t, 4))(l_430.yyyx))))).zzwwyzwx, ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_431.zwwzxywx)).s55)).yyxy)).xzwzwwxyzyyyyzxz, ((VECTOR(int32_t, 16))(p_611->g_432.s4607422266150013))))).lo))).odd)), 0xC8EF5931L, 0x5469A8F2L)))).hi, ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 8))(l_433.scff9e339)).s16, (uint32_t)4294967290UL, (uint32_t)p_611->g_429.w))).yyyy))).ywzwxzyw, ((VECTOR(uint32_t, 8))(1UL))))).hi)).hi))), ((VECTOR(uint32_t, 4))(0xB4072899L)), 0x4FE0CE9CL, 4294967295UL)).s2))))), p_611->g_44.s1)) , &p_21)), ((VECTOR(uint16_t, 2))(65532UL)), 0xB89DL)))))).x, p_20, 65532UL, 0UL)), ((VECTOR(uint16_t, 4))(0xF70BL)), ((VECTOR(uint16_t, 4))(9UL))))).x)) == p_23), p_611->g_375.z));
    return p_611->g_248.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_611->g_59 p_611->g_171 p_611->g_239 p_611->g_198 p_611->g_199 p_611->g_200 p_611->g_87 p_611->g_106 p_611->g_173 p_611->g_86 p_611->g_101
 * writes: p_611->g_60 p_611->g_171 p_611->g_101 p_611->g_107 p_611->g_87
 */
uint8_t  func_24(uint8_t  p_25, int8_t  p_26, uint32_t  p_27, struct S0 * p_611)
{ /* block id: 85 */
    int32_t *l_204 = (void*)0;
    int32_t *l_205 = (void*)0;
    int32_t *l_206 = (void*)0;
    int32_t l_207[10][7][2] = {{{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L}},{{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L}},{{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L}},{{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L}},{{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L}},{{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L}},{{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L}},{{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L}},{{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L}},{{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L},{0x61929B63L,0x61929B63L}}};
    int32_t *l_208 = &p_611->g_87;
    int32_t *l_209[5][7][7] = {{{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87}},{{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87}},{{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87}},{{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87}},{{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87},{&l_207[0][6][1],&p_611->g_86,&p_611->g_87,(void*)0,&l_207[0][6][1],(void*)0,&p_611->g_87}}};
    int32_t l_210 = 7L;
    int32_t l_211 = (-9L);
    int64_t l_212 = 0x4B8C2E7D9015371EL;
    uint16_t l_213 = 1UL;
    uint16_t *l_222[4][9][2] = {{{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213}},{{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213}},{{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213}},{{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213},{&l_213,&l_213}}};
    uint64_t *l_227 = &p_611->g_101[7];
    VECTOR(int16_t, 16) l_236 = (VECTOR(int16_t, 16))(0x2507L, (VECTOR(int16_t, 4))(0x2507L, (VECTOR(int16_t, 2))(0x2507L, 0L), 0L), 0L, 0x2507L, 0L, (VECTOR(int16_t, 2))(0x2507L, 0L), (VECTOR(int16_t, 2))(0x2507L, 0L), 0x2507L, 0L, 0x2507L, 0L);
    int16_t *l_242 = (void*)0;
    int16_t *l_243[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    VECTOR(int16_t, 8) l_244 = (VECTOR(int16_t, 8))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0L), 0L), 0L, 8L, 0L);
    int i, j, k;
    l_213--;
    (*p_611->g_59) = (void*)0;
    (*l_208) = ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((((((((((((p_611->g_171--) >= ((safe_rshift_func_int16_t_s_s(p_25, (~p_25))) > ((*l_227) = (0UL & 0x37L)))) > (safe_sub_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((p_611->g_107.s0 = ((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(l_236.s158c)).zyxzwxzy, ((VECTOR(int16_t, 8))((safe_lshift_func_uint16_t_u_s((GROUP_DIVERGE(1, 1) | 0x57AFL), 11)), 0x1ADDL, (0x42F7L ^ (253UL < ((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 4))(p_611->g_239.s86b8)).zzxyywxz))).s6)), (safe_sub_func_int8_t_s_s((**p_611->g_198), (((p_27 , 0x95A3L) != p_26) , p_611->g_239.s5))), (-3L), p_25, 1L, 3L)), ((VECTOR(int16_t, 8))(0L))))).s7), (*l_208))), l_244.s2)), p_27)) & 246UL) ^ FAKE_DIVERGE(p_611->group_2_offset, get_group_id(2), 10)), p_611->g_239.s6))) >= p_611->g_106) <= p_26) , 0x7827F66A1259B346L) , p_27) == (*l_208)) < 0x4BD6L) <= p_25) && 0x4B6E4D21DA144566L), 0xEAB65C3F3B8ECD33L)), 0)), 12)) , (*p_611->g_173));
    (*l_208) = 0x3A6CB214L;
    return p_611->g_101[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_611->g_108 p_611->g_71 p_611->g_2 p_611->g_41 p_611->g_87 p_611->g_173 p_611->g_102 p_611->g_171 p_611->g_50 p_611->g_107 p_611->g_198 p_611->g_106
 * writes: p_611->g_71 p_611->g_86 p_611->g_101 p_611->g_87 p_611->g_171 p_611->g_198 p_611->g_106
 */
uint8_t  func_28(int32_t  p_29, uint16_t  p_30, uint16_t  p_31, struct S0 * p_611)
{ /* block id: 59 */
    int64_t *l_149 = (void*)0;
    int64_t *l_150 = (void*)0;
    int64_t *l_151[10];
    uint16_t l_156 = 65533UL;
    uint32_t *l_167 = &p_611->g_106;
    int16_t *l_168 = (void*)0;
    int32_t l_169 = 0x570C3BFCL;
    uint16_t *l_170[3][8] = {{(void*)0,&l_156,(void*)0,(void*)0,&l_156,(void*)0,(void*)0,&l_156},{(void*)0,&l_156,(void*)0,(void*)0,&l_156,(void*)0,(void*)0,&l_156},{(void*)0,&l_156,(void*)0,(void*)0,&l_156,(void*)0,(void*)0,&l_156}};
    int32_t l_172 = 9L;
    int16_t l_196 = (-1L);
    int i, j;
    for (i = 0; i < 10; i++)
        l_151[i] = &p_611->g_71;
    (*p_611->g_173) = (safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(p_611->g_108.x, (l_172 |= (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(255UL, (safe_sub_func_uint32_t_u_u(((p_611->g_71 ^= p_31) && ((VECTOR(int64_t, 8))((((!(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(l_156, p_611->g_2)), 7)) | (l_169 = (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((!0UL), (FAKE_DIVERGE(p_611->group_2_offset, get_group_id(2), 10) >= ((safe_mul_func_int16_t_s_s(0x4FCFL, 1L)) >= (safe_mul_func_int16_t_s_s((l_167 == &p_611->g_106), l_156)))))), p_611->g_41.s5)), p_611->g_87)))) > p_611->g_108.y)) ^ p_29) ^ l_156), ((VECTOR(int64_t, 2))(0x5B9BD4E5E22F4319L)), 0x42BC51397EB43B87L, p_30, 7L, (-3L), (-1L))).s4), 0x03F1265FL)), 0x82L, 6UL)), ((VECTOR(uint8_t, 2))(255UL)), 0xD3L, 2UL)).s0 , p_29)))), 4));
    for (p_30 = 28; (p_30 == 51); ++p_30)
    { /* block id: 66 */
        int32_t *l_180 = (void*)0;
        int32_t **l_188 = &p_611->g_60[3][4][1];
        int32_t ***l_187 = &l_188;
        uint64_t *l_193 = &p_611->g_101[1];
        int32_t *l_194 = &p_611->g_87;
        VECTOR(int32_t, 4) l_195 = (VECTOR(int32_t, 4))(0x117B5E37L, (VECTOR(int32_t, 2))(0x117B5E37L, 0x6F523E0AL), 0x6F523E0AL);
        int i;
        for (p_29 = 27; (p_29 >= 29); p_29 = safe_add_func_uint16_t_u_u(p_29, 3))
        { /* block id: 69 */
            int32_t **l_179 = (void*)0;
            l_180 = &l_169;
        }
        l_172 |= (safe_mul_func_int16_t_s_s((((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((((l_187 = l_187) == &p_611->g_178) | ((((((p_611->g_171 &= (safe_rshift_func_int8_t_s_s(p_611->g_102.s3, (safe_sub_func_uint64_t_u_u(1UL, (((*l_194) = (0UL || ((*l_193) = p_30))) & ((VECTOR(int32_t, 2))(l_195.xx)).lo)))))) ^ GROUP_DIVERGE(0, 1)) == (p_611->g_50 < ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((l_169 & 0x2F84L) <= p_611->g_107.s4), 0x3BL, 0x45L, p_611->g_107.s6, (-9L), (-1L), 4L, 0L)).lo)).hi, ((VECTOR(int8_t, 2))(0x07L))))))).lo)) ^ p_611->g_108.x) & l_196) , 8L)), p_29)), 0L)) > GROUP_DIVERGE(2, 1)) && (*l_194)), 0L));
        p_611->g_198 = p_611->g_198;
    }
    for (p_611->g_106 = 0; (p_611->g_106 == 6); p_611->g_106 = safe_add_func_int8_t_s_s(p_611->g_106, 8))
    { /* block id: 81 */
        int16_t l_203 = 1L;
        return l_203;
    }
    return p_29;
}


/* ------------------------------------------ */
/* 
 * reads : p_611->g_86 p_611->g_119 p_611->g_101 p_611->g_107 p_611->g_59 p_611->g_60 p_611->g_50 p_611->g_2 p_611->g_44
 * writes: p_611->g_50 p_611->g_41
 */
uint64_t  func_35(uint32_t  p_36, int32_t  p_37, uint32_t  p_38, struct S0 * p_611)
{ /* block id: 44 */
    int32_t l_118[9] = {0x62591527L,0x62591527L,0x62591527L,0x62591527L,0x62591527L,0x62591527L,0x62591527L,0x62591527L,0x62591527L};
    VECTOR(int16_t, 2) l_122 = (VECTOR(int16_t, 2))(0L, 0x11E6L);
    VECTOR(int16_t, 2) l_125 = (VECTOR(int16_t, 2))((-3L), 0L);
    int32_t *l_128 = (void*)0;
    int32_t *l_129[10][8] = {{&p_611->g_86,&l_118[1],(void*)0,&p_611->g_87,&l_118[8],(void*)0,&p_611->g_86,(void*)0},{&p_611->g_86,&l_118[1],(void*)0,&p_611->g_87,&l_118[8],(void*)0,&p_611->g_86,(void*)0},{&p_611->g_86,&l_118[1],(void*)0,&p_611->g_87,&l_118[8],(void*)0,&p_611->g_86,(void*)0},{&p_611->g_86,&l_118[1],(void*)0,&p_611->g_87,&l_118[8],(void*)0,&p_611->g_86,(void*)0},{&p_611->g_86,&l_118[1],(void*)0,&p_611->g_87,&l_118[8],(void*)0,&p_611->g_86,(void*)0},{&p_611->g_86,&l_118[1],(void*)0,&p_611->g_87,&l_118[8],(void*)0,&p_611->g_86,(void*)0},{&p_611->g_86,&l_118[1],(void*)0,&p_611->g_87,&l_118[8],(void*)0,&p_611->g_86,(void*)0},{&p_611->g_86,&l_118[1],(void*)0,&p_611->g_87,&l_118[8],(void*)0,&p_611->g_86,(void*)0},{&p_611->g_86,&l_118[1],(void*)0,&p_611->g_87,&l_118[8],(void*)0,&p_611->g_86,(void*)0},{&p_611->g_86,&l_118[1],(void*)0,&p_611->g_87,&l_118[8],(void*)0,&p_611->g_86,(void*)0}};
    VECTOR(int16_t, 2) l_134 = (VECTOR(int16_t, 2))((-2L), 0x7D23L);
    int i, j;
    p_37 = (safe_rshift_func_uint16_t_u_u((0x098A5312L >= ((p_38 , 65528UL) == (l_118[3] <= ((p_611->g_86 >= (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(p_611->g_119.yyyxyyxxxyyyxyyx)).hi)).s0 , (safe_sub_func_uint64_t_u_u((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_122.yx)), ((VECTOR(int16_t, 8))((safe_rshift_func_uint8_t_u_s((((VECTOR(int16_t, 2))(3L, 1L)).odd || p_611->g_101[6]), p_36)), ((VECTOR(int16_t, 2))(l_125.xy)), ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0x0869L, (safe_lshift_func_uint8_t_u_u(p_36, l_125.x)), ((VECTOR(int16_t, 2))(0x31F1L)), ((VECTOR(int16_t, 4))(0x204FL)), l_118[2], ((VECTOR(int16_t, 2))(0x63E7L)), (-1L), 0x3C8FL, ((VECTOR(int16_t, 2))(0x7383L)), 0x33A6L)).s5c)), ((VECTOR(int16_t, 2))((-3L)))))), ((VECTOR(int16_t, 2))(7L)), 0x7313L)), ((VECTOR(int16_t, 4))(0L)), (-1L), (-1L))).sf < p_38), 6L)))) != p_611->g_107.s0)))), p_36));
    p_37 = ((*p_611->g_59) != &l_118[3]);
    for (p_611->g_50 = 0; (p_611->g_50 != (-15)); p_611->g_50 = safe_sub_func_uint16_t_u_u(p_611->g_50, 9))
    { /* block id: 49 */
        int32_t l_132 = (-5L);
        VECTOR(int16_t, 2) l_135 = (VECTOR(int16_t, 2))(0x5C89L, 0x3EBFL);
        int32_t **l_136[7] = {&p_611->g_60[3][4][1],&p_611->g_60[3][0][2],&p_611->g_60[3][4][1],&p_611->g_60[3][4][1],&p_611->g_60[3][0][2],&p_611->g_60[3][4][1],&p_611->g_60[3][4][1]};
        int8_t *l_137 = (void*)0;
        int8_t *l_138[3][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        uint16_t l_141 = 1UL;
        int i, j;
        l_132 = 0x5D0CA2F3L;
        l_118[2] = (p_37 = (safe_unary_minus_func_int16_t_s(((VECTOR(int16_t, 16))((-8L), ((VECTOR(int16_t, 2))(0x726DL, 0x416FL)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-5L), 0x4805L)), (-5L), 0L)).xzzyzzyxxzwzwxxw))).s88, ((VECTOR(int16_t, 16))(l_134.yxyxxyxyxxxyxxyy)).sc1))), (-1L), 0x1F90L)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 8))(l_135.xyyxyyxy)).s4457525411236061, ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(1L, (p_611->g_41.s5 = (l_135.y ^ (p_38 < (l_136[3] == &p_611->g_60[7][4][2])))), (-8L), 2L)), ((VECTOR(int8_t, 4))(1L, ((safe_add_func_uint16_t_u_u(p_611->g_107.s7, (&l_118[3] == (p_611->g_2 , (l_129[4][3] = (*p_611->g_59)))))) & l_141), 9L, 1L))))))).lo)).yyyyyxxxxyxxyxxy, ((VECTOR(uint8_t, 16))(3UL)))))))).s87)), (-10L), 0L, p_37, 5L, 0x7DFEL, 0x3AAAL, 0x52F2L)).s1)));
        p_37 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), 0x2BD7763BL)).yyxy)).y;
    }
    return p_611->g_44.sd;
}


/* ------------------------------------------ */
/* 
 * reads : p_611->g_101 p_611->g_102 p_611->g_comm_values p_611->g_59 p_611->g_60 p_611->g_107 p_611->g_108 p_611->g_44 p_611->g_87
 * writes: p_611->g_101 p_611->g_106 p_611->g_87
 */
int32_t  func_45(int32_t  p_46, struct S0 * p_611)
{ /* block id: 38 */
    uint64_t *l_100 = &p_611->g_101[1];
    uint32_t *l_105 = &p_611->g_106;
    VECTOR(int16_t, 2) l_109 = (VECTOR(int16_t, 2))(0L, 0x2E9FL);
    uint8_t *l_112[10] = {&p_611->g_113,(void*)0,&p_611->g_113,&p_611->g_113,(void*)0,&p_611->g_113,&p_611->g_113,(void*)0,&p_611->g_113,&p_611->g_113};
    int32_t l_114 = 1L;
    int32_t *l_115 = &p_611->g_87;
    int i;
    (*l_115) ^= (safe_mod_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((*l_100) |= p_46), (((VECTOR(int8_t, 8))(p_611->g_102.s44135625)).s7 == ((safe_div_func_uint16_t_u_u(((p_611->g_comm_values[p_611->tid] , &p_46) == (FAKE_DIVERGE(p_611->global_0_offset, get_global_id(0), 10) , (((*l_105) = GROUP_DIVERGE(2, 1)) , (*p_611->g_59)))), ((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(p_611->g_107.s3473707720600064)).sdaef, ((VECTOR(int16_t, 4))(p_611->g_108.yyyy)), ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_109.xxxy)))).wyxwwxzz, (int16_t)((((l_114 |= ((safe_mul_func_uint8_t_u_u((l_109.x || ((((!9L) , l_109.y) ^ 18446744073709551610UL) & ((VECTOR(uint8_t, 16))(0xF1L, 0xCCL, 7UL, ((p_611->g_108.y | FAKE_DIVERGE(p_611->local_2_offset, get_local_id(2), 10)) && 0x221FL), 255UL, p_46, ((VECTOR(uint8_t, 2))(0x2FL)), l_109.x, 0x52L, 0x2CL, 7UL, 253UL, 0x3EL, 2UL, 0x57L)).s7)), l_109.x)) >= 0xEAA3L)) | l_109.x) , p_46) , 0x268DL), (int16_t)l_109.x))).lo, (int16_t)p_611->g_44.s7)))))).w)) , p_46)))), FAKE_DIVERGE(p_611->global_1_offset, get_global_id(1), 10)));
    return p_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_611->g_59 p_611->g_44 p_611->g_71 p_611->l_comm_values p_611->g_86 p_611->g_comm_values p_611->g_60 p_611->g_2
 * writes: p_611->g_60 p_611->g_86 p_611->g_87 p_611->g_comm_values
 */
uint8_t  func_47(int32_t  p_48, struct S0 * p_611)
{ /* block id: 11 */
    uint16_t l_61 = 1UL;
    int32_t **l_64[3];
    uint8_t l_72 = 0x65L;
    int32_t *l_94 = &p_611->g_87;
    int i;
    for (i = 0; i < 3; i++)
        l_64[i] = (void*)0;
    for (p_48 = 0; (p_48 > (-16)); --p_48)
    { /* block id: 14 */
        int32_t ***l_65 = &l_64[2];
        VECTOR(uint16_t, 8) l_68 = (VECTOR(uint16_t, 8))(0x15B5L, (VECTOR(uint16_t, 4))(0x15B5L, (VECTOR(uint16_t, 2))(0x15B5L, 0x1A88L), 0x1A88L), 0x1A88L, 0x15B5L, 0x1A88L);
        int32_t *l_85 = &p_611->g_86;
        int64_t *l_88 = (void*)0;
        int64_t *l_89[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        (*p_611->g_59) = &p_611->g_2;
        if (((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(0x4910L, 4L, 1L, 1L)).zwyxxxxwxxyxxzyx, ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(0UL, 0x0BABL, (l_61 &= FAKE_DIVERGE(p_611->group_2_offset, get_group_id(2), 10)), ((((safe_rshift_func_uint16_t_u_s((((*l_65) = l_64[2]) != ((p_611->g_comm_values[p_611->tid] &= (p_611->g_44.s2 & (safe_add_func_int16_t_s_s((~(((FAKE_DIVERGE(p_611->local_0_offset, get_local_id(0), 10) && ((VECTOR(uint16_t, 8))(l_68.s33401434)).s7) , (safe_add_func_uint8_t_u_u((((~(p_611->g_71 , 5L)) , p_48) == (l_72 > p_48)), (p_611->g_87 = (safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_add_func_uint16_t_u_u(0x2051L, ((safe_div_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((((VECTOR(uint32_t, 16))((((*l_85) = l_72) <= l_61), ((VECTOR(uint32_t, 2))(0x781EE239L)), ((VECTOR(uint32_t, 8))(0x10D8942CL)), 4294967295UL, ((VECTOR(uint32_t, 4))(0xB14099FAL)))).s6 , l_61), l_61)) , FAKE_DIVERGE(p_611->group_0_offset, get_group_id(0), 10)), p_611->l_comm_values[(safe_mod_func_uint32_t_u_u(p_611->tid, 5))])), 18446744073709551611UL)) , 65532UL))), l_72)), p_48)))))) || (*l_85))), p_48)))) , (void*)0)), 1)) || p_611->l_comm_values[(safe_mod_func_uint32_t_u_u(p_611->tid, 5))]) | 5L) , p_611->g_71), ((VECTOR(uint16_t, 4))(4UL)), (*l_85), p_48, ((VECTOR(uint16_t, 2))(0UL)), 65531UL, ((VECTOR(uint16_t, 2))(65526UL)), 0x89F2L)).s3b65, ((VECTOR(uint16_t, 4))(65535UL))))).xxzywxzxyxxwxxzz))).scd, ((VECTOR(int32_t, 2))(0x103A8737L))))), p_48, 0x10BB767BL, (-1L), p_48, 0x47AAA1B4L, 0x10050AECL)), ((VECTOR(int32_t, 2))(0x7CCE1356L)), p_48, 1L, 7L, ((VECTOR(int32_t, 2))(0x5E783BFBL)), 0x39C1A607L)).s2d, ((VECTOR(int32_t, 2))(0L))))), p_48, 0x626FEE09L, ((VECTOR(int32_t, 2))(0x5A935BBFL)), 1L)).s2)
        { /* block id: 21 */
            int16_t l_90[8][5];
            int i, j;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 5; j++)
                    l_90[i][j] = 0x4490L;
            }
            l_85 = (*p_611->g_59);
            if (l_90[3][0])
                break;
            if (p_48)
                continue;
            for (l_61 = (-19); (l_61 > 39); l_61 = safe_add_func_uint16_t_u_u(l_61, 7))
            { /* block id: 27 */
                (*p_611->g_59) = (*p_611->g_59);
                return p_48;
            }
        }
        else
        { /* block id: 31 */
            int32_t *l_93 = (void*)0;
            l_93 = (void*)0;
        }
    }
    (*p_611->g_59) = l_94;
    return p_611->g_2;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[5];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 5; i++)
            l_comm_values[i] = 1;
    struct S0 c_612;
    struct S0* p_611 = &c_612;
    struct S0 c_613 = {
        0x6EF20FE6L, // p_611->g_2
        (VECTOR(int8_t, 8))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x15L), 0x15L), 0x15L, (-7L), 0x15L), // p_611->g_41
        (VECTOR(int32_t, 16))(0x07AD46D2L, (VECTOR(int32_t, 4))(0x07AD46D2L, (VECTOR(int32_t, 2))(0x07AD46D2L, 1L), 1L), 1L, 0x07AD46D2L, 1L, (VECTOR(int32_t, 2))(0x07AD46D2L, 1L), (VECTOR(int32_t, 2))(0x07AD46D2L, 1L), 0x07AD46D2L, 1L, 0x07AD46D2L, 1L), // p_611->g_44
        0x57638FF43993911EL, // p_611->g_50
        {{{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2}},{{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2}},{{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2}},{{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2}},{{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2}},{{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2}},{{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2}},{{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2},{&p_611->g_2,&p_611->g_2,&p_611->g_2}}}, // p_611->g_60
        &p_611->g_60[3][4][1], // p_611->g_59
        1L, // p_611->g_71
        0x3A07B4D7L, // p_611->g_86
        (-1L), // p_611->g_87
        {5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL}, // p_611->g_101
        (VECTOR(int8_t, 8))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0x1BL), 0x1BL), 0x1BL, 2L, 0x1BL), // p_611->g_102
        0x655DCCE3L, // p_611->g_106
        (VECTOR(int16_t, 8))(0x0061L, (VECTOR(int16_t, 4))(0x0061L, (VECTOR(int16_t, 2))(0x0061L, 0x61E1L), 0x61E1L), 0x61E1L, 0x0061L, 0x61E1L), // p_611->g_107
        (VECTOR(int16_t, 2))(0L, 1L), // p_611->g_108
        255UL, // p_611->g_113
        (VECTOR(uint32_t, 2))(0x350D549EL, 0x2F01B28DL), // p_611->g_119
        0x740BL, // p_611->g_171
        &p_611->g_86, // p_611->g_173
        (void*)0, // p_611->g_178
        (void*)0, // p_611->g_197
        {{0x54L,1L,0x54L,0x54L,1L,0x54L},{0x54L,1L,0x54L,0x54L,1L,0x54L},{0x54L,1L,0x54L,0x54L,1L,0x54L},{0x54L,1L,0x54L,0x54L,1L,0x54L},{0x54L,1L,0x54L,0x54L,1L,0x54L}}, // p_611->g_200
        &p_611->g_200[2][3], // p_611->g_199
        &p_611->g_199, // p_611->g_198
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int8_t, 2))((-1L), 0L), (VECTOR(int8_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L), // p_611->g_239
        (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 8L), 8L), // p_611->g_248
        (void*)0, // p_611->g_252
        {{{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL}},{{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL}},{{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL}},{{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL},{0x90401ACA9A606DFFL,0UL,2UL,5UL,2UL,0UL}}}, // p_611->g_253
        (VECTOR(int16_t, 2))(0L, 1L), // p_611->g_288
        0x15C46B72L, // p_611->g_300
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 2UL), 2UL), // p_611->g_311
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x2F15180C7C3B9228L), 0x2F15180C7C3B9228L), // p_611->g_317
        (void*)0, // p_611->g_339
        &p_611->g_60[3][4][2], // p_611->g_340
        {(void*)0,(void*)0}, // p_611->g_341
        (VECTOR(uint64_t, 8))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x80EA3B6DB42D4E2BL), 0x80EA3B6DB42D4E2BL), 0x80EA3B6DB42D4E2BL, 18446744073709551609UL, 0x80EA3B6DB42D4E2BL), // p_611->g_352
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0E61AB86L), 0x0E61AB86L), 0x0E61AB86L, (-1L), 0x0E61AB86L), // p_611->g_368
        (VECTOR(int32_t, 2))(0L, 0x3C715AA2L), // p_611->g_373
        (VECTOR(int32_t, 4))(0x1D45F9D8L, (VECTOR(int32_t, 2))(0x1D45F9D8L, (-1L)), (-1L)), // p_611->g_374
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 3L), 3L), // p_611->g_375
        (VECTOR(int32_t, 8))(0x5B4F1BE8L, (VECTOR(int32_t, 4))(0x5B4F1BE8L, (VECTOR(int32_t, 2))(0x5B4F1BE8L, 0L), 0L), 0L, 0x5B4F1BE8L, 0L), // p_611->g_376
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65526UL), 65526UL), // p_611->g_383
        18446744073709551611UL, // p_611->g_391
        (void*)0, // p_611->g_410
        0x84C87B24L, // p_611->g_415
        (VECTOR(uint32_t, 16))(0x2417818EL, (VECTOR(uint32_t, 4))(0x2417818EL, (VECTOR(uint32_t, 2))(0x2417818EL, 1UL), 1UL), 1UL, 0x2417818EL, 1UL, (VECTOR(uint32_t, 2))(0x2417818EL, 1UL), (VECTOR(uint32_t, 2))(0x2417818EL, 1UL), 0x2417818EL, 1UL, 0x2417818EL, 1UL), // p_611->g_428
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), // p_611->g_429
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x124BA91BL), 0x124BA91BL), 0x124BA91BL, 1L, 0x124BA91BL), // p_611->g_432
        &p_611->g_87, // p_611->g_434
        (void*)0, // p_611->g_436
        (void*)0, // p_611->g_437
        (void*)0, // p_611->g_439
        &p_611->g_86, // p_611->g_442
        {1L,1L,1L,1L,1L,1L,1L,1L}, // p_611->g_448
        3L, // p_611->g_450
        (VECTOR(uint64_t, 8))(0xB24EE293D9EDCCE4L, (VECTOR(uint64_t, 4))(0xB24EE293D9EDCCE4L, (VECTOR(uint64_t, 2))(0xB24EE293D9EDCCE4L, 0UL), 0UL), 0UL, 0xB24EE293D9EDCCE4L, 0UL), // p_611->g_504
        (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 4UL), 4UL), 4UL, 18446744073709551615UL, 4UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 4UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 4UL), 18446744073709551615UL, 4UL, 18446744073709551615UL, 4UL), // p_611->g_506
        (VECTOR(int32_t, 2))(0L, 0x762F8090L), // p_611->g_559
        0UL, // p_611->g_569
        0x636B8A8DL, // p_611->g_575
        0x1E4077D4CFDF5447L, // p_611->g_578
        {0x29L,0x29L,0x29L,0x29L,0x29L,0x29L,0x29L,0x29L,0x29L}, // p_611->g_580
        (-6L), // p_611->g_583
        6UL, // p_611->g_586
        &p_611->g_86, // p_611->g_591
        (VECTOR(uint64_t, 2))(9UL, 1UL), // p_611->g_602
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 8UL), 8UL), // p_611->g_606
        (void*)0, // p_611->g_608
        {{{(void*)0,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,(void*)0}},{{(void*)0,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,(void*)0}},{{(void*)0,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,(void*)0}},{{(void*)0,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,(void*)0}},{{(void*)0,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,(void*)0}},{{(void*)0,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,(void*)0}},{{(void*)0,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,(void*)0}},{{(void*)0,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,(void*)0}},{{(void*)0,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,(void*)0}},{{(void*)0,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,&p_611->g_608,(void*)0}}}, // p_611->g_607
        &p_611->g_87, // p_611->g_610
        0, // p_611->v_collective
        sequence_input[get_global_id(0)], // p_611->global_0_offset
        sequence_input[get_global_id(1)], // p_611->global_1_offset
        sequence_input[get_global_id(2)], // p_611->global_2_offset
        sequence_input[get_local_id(0)], // p_611->local_0_offset
        sequence_input[get_local_id(1)], // p_611->local_1_offset
        sequence_input[get_local_id(2)], // p_611->local_2_offset
        sequence_input[get_group_id(0)], // p_611->group_0_offset
        sequence_input[get_group_id(1)], // p_611->group_1_offset
        sequence_input[get_group_id(2)], // p_611->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 5)), permutations[0][get_linear_local_id()])), // p_611->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_612 = c_613;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_611);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_611->g_2, "p_611->g_2", print_hash_value);
    transparent_crc(p_611->g_41.s0, "p_611->g_41.s0", print_hash_value);
    transparent_crc(p_611->g_41.s1, "p_611->g_41.s1", print_hash_value);
    transparent_crc(p_611->g_41.s2, "p_611->g_41.s2", print_hash_value);
    transparent_crc(p_611->g_41.s3, "p_611->g_41.s3", print_hash_value);
    transparent_crc(p_611->g_41.s4, "p_611->g_41.s4", print_hash_value);
    transparent_crc(p_611->g_41.s5, "p_611->g_41.s5", print_hash_value);
    transparent_crc(p_611->g_41.s6, "p_611->g_41.s6", print_hash_value);
    transparent_crc(p_611->g_41.s7, "p_611->g_41.s7", print_hash_value);
    transparent_crc(p_611->g_44.s0, "p_611->g_44.s0", print_hash_value);
    transparent_crc(p_611->g_44.s1, "p_611->g_44.s1", print_hash_value);
    transparent_crc(p_611->g_44.s2, "p_611->g_44.s2", print_hash_value);
    transparent_crc(p_611->g_44.s3, "p_611->g_44.s3", print_hash_value);
    transparent_crc(p_611->g_44.s4, "p_611->g_44.s4", print_hash_value);
    transparent_crc(p_611->g_44.s5, "p_611->g_44.s5", print_hash_value);
    transparent_crc(p_611->g_44.s6, "p_611->g_44.s6", print_hash_value);
    transparent_crc(p_611->g_44.s7, "p_611->g_44.s7", print_hash_value);
    transparent_crc(p_611->g_44.s8, "p_611->g_44.s8", print_hash_value);
    transparent_crc(p_611->g_44.s9, "p_611->g_44.s9", print_hash_value);
    transparent_crc(p_611->g_44.sa, "p_611->g_44.sa", print_hash_value);
    transparent_crc(p_611->g_44.sb, "p_611->g_44.sb", print_hash_value);
    transparent_crc(p_611->g_44.sc, "p_611->g_44.sc", print_hash_value);
    transparent_crc(p_611->g_44.sd, "p_611->g_44.sd", print_hash_value);
    transparent_crc(p_611->g_44.se, "p_611->g_44.se", print_hash_value);
    transparent_crc(p_611->g_44.sf, "p_611->g_44.sf", print_hash_value);
    transparent_crc(p_611->g_50, "p_611->g_50", print_hash_value);
    transparent_crc(p_611->g_71, "p_611->g_71", print_hash_value);
    transparent_crc(p_611->g_86, "p_611->g_86", print_hash_value);
    transparent_crc(p_611->g_87, "p_611->g_87", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_611->g_101[i], "p_611->g_101[i]", print_hash_value);

    }
    transparent_crc(p_611->g_102.s0, "p_611->g_102.s0", print_hash_value);
    transparent_crc(p_611->g_102.s1, "p_611->g_102.s1", print_hash_value);
    transparent_crc(p_611->g_102.s2, "p_611->g_102.s2", print_hash_value);
    transparent_crc(p_611->g_102.s3, "p_611->g_102.s3", print_hash_value);
    transparent_crc(p_611->g_102.s4, "p_611->g_102.s4", print_hash_value);
    transparent_crc(p_611->g_102.s5, "p_611->g_102.s5", print_hash_value);
    transparent_crc(p_611->g_102.s6, "p_611->g_102.s6", print_hash_value);
    transparent_crc(p_611->g_102.s7, "p_611->g_102.s7", print_hash_value);
    transparent_crc(p_611->g_106, "p_611->g_106", print_hash_value);
    transparent_crc(p_611->g_107.s0, "p_611->g_107.s0", print_hash_value);
    transparent_crc(p_611->g_107.s1, "p_611->g_107.s1", print_hash_value);
    transparent_crc(p_611->g_107.s2, "p_611->g_107.s2", print_hash_value);
    transparent_crc(p_611->g_107.s3, "p_611->g_107.s3", print_hash_value);
    transparent_crc(p_611->g_107.s4, "p_611->g_107.s4", print_hash_value);
    transparent_crc(p_611->g_107.s5, "p_611->g_107.s5", print_hash_value);
    transparent_crc(p_611->g_107.s6, "p_611->g_107.s6", print_hash_value);
    transparent_crc(p_611->g_107.s7, "p_611->g_107.s7", print_hash_value);
    transparent_crc(p_611->g_108.x, "p_611->g_108.x", print_hash_value);
    transparent_crc(p_611->g_108.y, "p_611->g_108.y", print_hash_value);
    transparent_crc(p_611->g_113, "p_611->g_113", print_hash_value);
    transparent_crc(p_611->g_119.x, "p_611->g_119.x", print_hash_value);
    transparent_crc(p_611->g_119.y, "p_611->g_119.y", print_hash_value);
    transparent_crc(p_611->g_171, "p_611->g_171", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_611->g_200[i][j], "p_611->g_200[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_611->g_239.s0, "p_611->g_239.s0", print_hash_value);
    transparent_crc(p_611->g_239.s1, "p_611->g_239.s1", print_hash_value);
    transparent_crc(p_611->g_239.s2, "p_611->g_239.s2", print_hash_value);
    transparent_crc(p_611->g_239.s3, "p_611->g_239.s3", print_hash_value);
    transparent_crc(p_611->g_239.s4, "p_611->g_239.s4", print_hash_value);
    transparent_crc(p_611->g_239.s5, "p_611->g_239.s5", print_hash_value);
    transparent_crc(p_611->g_239.s6, "p_611->g_239.s6", print_hash_value);
    transparent_crc(p_611->g_239.s7, "p_611->g_239.s7", print_hash_value);
    transparent_crc(p_611->g_239.s8, "p_611->g_239.s8", print_hash_value);
    transparent_crc(p_611->g_239.s9, "p_611->g_239.s9", print_hash_value);
    transparent_crc(p_611->g_239.sa, "p_611->g_239.sa", print_hash_value);
    transparent_crc(p_611->g_239.sb, "p_611->g_239.sb", print_hash_value);
    transparent_crc(p_611->g_239.sc, "p_611->g_239.sc", print_hash_value);
    transparent_crc(p_611->g_239.sd, "p_611->g_239.sd", print_hash_value);
    transparent_crc(p_611->g_239.se, "p_611->g_239.se", print_hash_value);
    transparent_crc(p_611->g_239.sf, "p_611->g_239.sf", print_hash_value);
    transparent_crc(p_611->g_248.x, "p_611->g_248.x", print_hash_value);
    transparent_crc(p_611->g_248.y, "p_611->g_248.y", print_hash_value);
    transparent_crc(p_611->g_248.z, "p_611->g_248.z", print_hash_value);
    transparent_crc(p_611->g_248.w, "p_611->g_248.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_611->g_253[i][j][k], "p_611->g_253[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_611->g_288.x, "p_611->g_288.x", print_hash_value);
    transparent_crc(p_611->g_288.y, "p_611->g_288.y", print_hash_value);
    transparent_crc(p_611->g_300, "p_611->g_300", print_hash_value);
    transparent_crc(p_611->g_311.x, "p_611->g_311.x", print_hash_value);
    transparent_crc(p_611->g_311.y, "p_611->g_311.y", print_hash_value);
    transparent_crc(p_611->g_311.z, "p_611->g_311.z", print_hash_value);
    transparent_crc(p_611->g_311.w, "p_611->g_311.w", print_hash_value);
    transparent_crc(p_611->g_317.x, "p_611->g_317.x", print_hash_value);
    transparent_crc(p_611->g_317.y, "p_611->g_317.y", print_hash_value);
    transparent_crc(p_611->g_317.z, "p_611->g_317.z", print_hash_value);
    transparent_crc(p_611->g_317.w, "p_611->g_317.w", print_hash_value);
    transparent_crc(p_611->g_352.s0, "p_611->g_352.s0", print_hash_value);
    transparent_crc(p_611->g_352.s1, "p_611->g_352.s1", print_hash_value);
    transparent_crc(p_611->g_352.s2, "p_611->g_352.s2", print_hash_value);
    transparent_crc(p_611->g_352.s3, "p_611->g_352.s3", print_hash_value);
    transparent_crc(p_611->g_352.s4, "p_611->g_352.s4", print_hash_value);
    transparent_crc(p_611->g_352.s5, "p_611->g_352.s5", print_hash_value);
    transparent_crc(p_611->g_352.s6, "p_611->g_352.s6", print_hash_value);
    transparent_crc(p_611->g_352.s7, "p_611->g_352.s7", print_hash_value);
    transparent_crc(p_611->g_368.s0, "p_611->g_368.s0", print_hash_value);
    transparent_crc(p_611->g_368.s1, "p_611->g_368.s1", print_hash_value);
    transparent_crc(p_611->g_368.s2, "p_611->g_368.s2", print_hash_value);
    transparent_crc(p_611->g_368.s3, "p_611->g_368.s3", print_hash_value);
    transparent_crc(p_611->g_368.s4, "p_611->g_368.s4", print_hash_value);
    transparent_crc(p_611->g_368.s5, "p_611->g_368.s5", print_hash_value);
    transparent_crc(p_611->g_368.s6, "p_611->g_368.s6", print_hash_value);
    transparent_crc(p_611->g_368.s7, "p_611->g_368.s7", print_hash_value);
    transparent_crc(p_611->g_373.x, "p_611->g_373.x", print_hash_value);
    transparent_crc(p_611->g_373.y, "p_611->g_373.y", print_hash_value);
    transparent_crc(p_611->g_374.x, "p_611->g_374.x", print_hash_value);
    transparent_crc(p_611->g_374.y, "p_611->g_374.y", print_hash_value);
    transparent_crc(p_611->g_374.z, "p_611->g_374.z", print_hash_value);
    transparent_crc(p_611->g_374.w, "p_611->g_374.w", print_hash_value);
    transparent_crc(p_611->g_375.x, "p_611->g_375.x", print_hash_value);
    transparent_crc(p_611->g_375.y, "p_611->g_375.y", print_hash_value);
    transparent_crc(p_611->g_375.z, "p_611->g_375.z", print_hash_value);
    transparent_crc(p_611->g_375.w, "p_611->g_375.w", print_hash_value);
    transparent_crc(p_611->g_376.s0, "p_611->g_376.s0", print_hash_value);
    transparent_crc(p_611->g_376.s1, "p_611->g_376.s1", print_hash_value);
    transparent_crc(p_611->g_376.s2, "p_611->g_376.s2", print_hash_value);
    transparent_crc(p_611->g_376.s3, "p_611->g_376.s3", print_hash_value);
    transparent_crc(p_611->g_376.s4, "p_611->g_376.s4", print_hash_value);
    transparent_crc(p_611->g_376.s5, "p_611->g_376.s5", print_hash_value);
    transparent_crc(p_611->g_376.s6, "p_611->g_376.s6", print_hash_value);
    transparent_crc(p_611->g_376.s7, "p_611->g_376.s7", print_hash_value);
    transparent_crc(p_611->g_383.x, "p_611->g_383.x", print_hash_value);
    transparent_crc(p_611->g_383.y, "p_611->g_383.y", print_hash_value);
    transparent_crc(p_611->g_383.z, "p_611->g_383.z", print_hash_value);
    transparent_crc(p_611->g_383.w, "p_611->g_383.w", print_hash_value);
    transparent_crc(p_611->g_391, "p_611->g_391", print_hash_value);
    transparent_crc(p_611->g_415, "p_611->g_415", print_hash_value);
    transparent_crc(p_611->g_428.s0, "p_611->g_428.s0", print_hash_value);
    transparent_crc(p_611->g_428.s1, "p_611->g_428.s1", print_hash_value);
    transparent_crc(p_611->g_428.s2, "p_611->g_428.s2", print_hash_value);
    transparent_crc(p_611->g_428.s3, "p_611->g_428.s3", print_hash_value);
    transparent_crc(p_611->g_428.s4, "p_611->g_428.s4", print_hash_value);
    transparent_crc(p_611->g_428.s5, "p_611->g_428.s5", print_hash_value);
    transparent_crc(p_611->g_428.s6, "p_611->g_428.s6", print_hash_value);
    transparent_crc(p_611->g_428.s7, "p_611->g_428.s7", print_hash_value);
    transparent_crc(p_611->g_428.s8, "p_611->g_428.s8", print_hash_value);
    transparent_crc(p_611->g_428.s9, "p_611->g_428.s9", print_hash_value);
    transparent_crc(p_611->g_428.sa, "p_611->g_428.sa", print_hash_value);
    transparent_crc(p_611->g_428.sb, "p_611->g_428.sb", print_hash_value);
    transparent_crc(p_611->g_428.sc, "p_611->g_428.sc", print_hash_value);
    transparent_crc(p_611->g_428.sd, "p_611->g_428.sd", print_hash_value);
    transparent_crc(p_611->g_428.se, "p_611->g_428.se", print_hash_value);
    transparent_crc(p_611->g_428.sf, "p_611->g_428.sf", print_hash_value);
    transparent_crc(p_611->g_429.x, "p_611->g_429.x", print_hash_value);
    transparent_crc(p_611->g_429.y, "p_611->g_429.y", print_hash_value);
    transparent_crc(p_611->g_429.z, "p_611->g_429.z", print_hash_value);
    transparent_crc(p_611->g_429.w, "p_611->g_429.w", print_hash_value);
    transparent_crc(p_611->g_432.s0, "p_611->g_432.s0", print_hash_value);
    transparent_crc(p_611->g_432.s1, "p_611->g_432.s1", print_hash_value);
    transparent_crc(p_611->g_432.s2, "p_611->g_432.s2", print_hash_value);
    transparent_crc(p_611->g_432.s3, "p_611->g_432.s3", print_hash_value);
    transparent_crc(p_611->g_432.s4, "p_611->g_432.s4", print_hash_value);
    transparent_crc(p_611->g_432.s5, "p_611->g_432.s5", print_hash_value);
    transparent_crc(p_611->g_432.s6, "p_611->g_432.s6", print_hash_value);
    transparent_crc(p_611->g_432.s7, "p_611->g_432.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_611->g_448[i], "p_611->g_448[i]", print_hash_value);

    }
    transparent_crc(p_611->g_450, "p_611->g_450", print_hash_value);
    transparent_crc(p_611->g_504.s0, "p_611->g_504.s0", print_hash_value);
    transparent_crc(p_611->g_504.s1, "p_611->g_504.s1", print_hash_value);
    transparent_crc(p_611->g_504.s2, "p_611->g_504.s2", print_hash_value);
    transparent_crc(p_611->g_504.s3, "p_611->g_504.s3", print_hash_value);
    transparent_crc(p_611->g_504.s4, "p_611->g_504.s4", print_hash_value);
    transparent_crc(p_611->g_504.s5, "p_611->g_504.s5", print_hash_value);
    transparent_crc(p_611->g_504.s6, "p_611->g_504.s6", print_hash_value);
    transparent_crc(p_611->g_504.s7, "p_611->g_504.s7", print_hash_value);
    transparent_crc(p_611->g_506.s0, "p_611->g_506.s0", print_hash_value);
    transparent_crc(p_611->g_506.s1, "p_611->g_506.s1", print_hash_value);
    transparent_crc(p_611->g_506.s2, "p_611->g_506.s2", print_hash_value);
    transparent_crc(p_611->g_506.s3, "p_611->g_506.s3", print_hash_value);
    transparent_crc(p_611->g_506.s4, "p_611->g_506.s4", print_hash_value);
    transparent_crc(p_611->g_506.s5, "p_611->g_506.s5", print_hash_value);
    transparent_crc(p_611->g_506.s6, "p_611->g_506.s6", print_hash_value);
    transparent_crc(p_611->g_506.s7, "p_611->g_506.s7", print_hash_value);
    transparent_crc(p_611->g_506.s8, "p_611->g_506.s8", print_hash_value);
    transparent_crc(p_611->g_506.s9, "p_611->g_506.s9", print_hash_value);
    transparent_crc(p_611->g_506.sa, "p_611->g_506.sa", print_hash_value);
    transparent_crc(p_611->g_506.sb, "p_611->g_506.sb", print_hash_value);
    transparent_crc(p_611->g_506.sc, "p_611->g_506.sc", print_hash_value);
    transparent_crc(p_611->g_506.sd, "p_611->g_506.sd", print_hash_value);
    transparent_crc(p_611->g_506.se, "p_611->g_506.se", print_hash_value);
    transparent_crc(p_611->g_506.sf, "p_611->g_506.sf", print_hash_value);
    transparent_crc(p_611->g_559.x, "p_611->g_559.x", print_hash_value);
    transparent_crc(p_611->g_559.y, "p_611->g_559.y", print_hash_value);
    transparent_crc(p_611->g_569, "p_611->g_569", print_hash_value);
    transparent_crc(p_611->g_575, "p_611->g_575", print_hash_value);
    transparent_crc(p_611->g_578, "p_611->g_578", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_611->g_580[i], "p_611->g_580[i]", print_hash_value);

    }
    transparent_crc(p_611->g_583, "p_611->g_583", print_hash_value);
    transparent_crc(p_611->g_586, "p_611->g_586", print_hash_value);
    transparent_crc(p_611->g_602.x, "p_611->g_602.x", print_hash_value);
    transparent_crc(p_611->g_602.y, "p_611->g_602.y", print_hash_value);
    transparent_crc(p_611->g_606.x, "p_611->g_606.x", print_hash_value);
    transparent_crc(p_611->g_606.y, "p_611->g_606.y", print_hash_value);
    transparent_crc(p_611->g_606.z, "p_611->g_606.z", print_hash_value);
    transparent_crc(p_611->g_606.w, "p_611->g_606.w", print_hash_value);
    transparent_crc(p_611->v_collective, "p_611->v_collective", print_hash_value);
    transparent_crc(p_611->l_comm_values[get_linear_local_id()], "p_611->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_611->g_comm_values[get_linear_group_id() * 5 + get_linear_local_id()], "p_611->g_comm_values[get_linear_group_id() * 5 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
