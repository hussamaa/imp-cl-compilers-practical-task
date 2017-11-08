// --atomics 2 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 19,5,79 -l 19,1,1
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

__constant uint32_t permutations[10][19] = {
{9,17,6,18,14,3,0,12,10,13,15,4,7,1,8,11,2,16,5}, // permutation 0
{1,18,7,3,2,0,17,16,5,8,6,9,14,13,15,12,10,11,4}, // permutation 1
{11,5,1,16,2,0,7,10,14,12,8,3,13,9,18,4,15,17,6}, // permutation 2
{3,17,6,15,7,16,10,18,1,2,14,8,13,9,5,11,4,12,0}, // permutation 3
{1,2,15,18,8,14,16,4,6,9,0,12,7,13,17,3,11,10,5}, // permutation 4
{11,18,5,9,6,17,7,10,14,8,3,2,15,12,0,1,16,13,4}, // permutation 5
{4,3,17,8,1,11,14,15,6,10,18,2,16,12,0,7,5,13,9}, // permutation 6
{4,8,3,7,14,13,10,15,0,6,16,5,1,11,9,18,12,17,2}, // permutation 7
{17,3,16,0,7,5,10,9,14,15,12,4,6,11,2,13,8,1,18}, // permutation 8
{10,8,5,1,16,6,0,7,12,9,3,13,17,11,15,2,14,18,4} // permutation 9
};

// Seed: 2769779744

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    VECTOR(int32_t, 8) g_2;
    volatile int32_t g_18[4];
    uint16_t g_31;
    int16_t g_32[1];
    int32_t *g_37[9][10];
    VECTOR(uint16_t, 16) g_41;
    uint16_t *g_66;
    VECTOR(int32_t, 8) g_78;
    uint32_t g_94;
    VECTOR(int16_t, 8) g_105;
    int8_t g_151;
    VECTOR(int16_t, 8) g_158;
    VECTOR(int16_t, 2) g_159;
    int64_t *g_163;
    VECTOR(uint16_t, 16) g_194;
    VECTOR(uint32_t, 8) g_197;
    uint16_t g_200;
    uint32_t g_224;
    uint32_t g_257;
    uint8_t g_262;
    uint64_t g_264;
    VECTOR(int32_t, 16) g_308;
    uint64_t g_358;
    uint64_t g_381[3];
    uint64_t *g_382;
    int32_t **g_392;
    VECTOR(int8_t, 2) g_406;
    VECTOR(int32_t, 2) g_436;
    int32_t g_465;
    uint64_t g_467;
    VECTOR(int16_t, 8) g_545;
    volatile VECTOR(int16_t, 8) g_549;
    int32_t *g_561;
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
uint64_t  func_1(struct S0 * p_667);
int16_t  func_15(uint16_t  p_16, int32_t * p_17, struct S0 * p_667);
uint16_t  func_19(int32_t * p_20, int32_t  p_21, uint8_t  p_22, struct S0 * p_667);
int32_t * func_23(uint64_t  p_24, uint16_t  p_25, uint64_t  p_26, int8_t  p_27, int32_t * p_28, struct S0 * p_667);
int32_t * func_33(int32_t * p_34, uint32_t  p_35, uint64_t  p_36, struct S0 * p_667);
int16_t  func_47(uint64_t  p_48, uint16_t * p_49, int64_t  p_50, uint16_t * p_51, struct S0 * p_667);
int32_t  func_56(int32_t * p_57, uint16_t  p_58, int32_t  p_59, int32_t * p_60, uint8_t  p_61, struct S0 * p_667);
int32_t * func_62(uint16_t * p_63, uint16_t * p_64, int16_t  p_65, struct S0 * p_667);
uint16_t * func_67(uint16_t * p_68, struct S0 * p_667);
int32_t * func_72(int16_t  p_73, struct S0 * p_667);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_667->g_2 p_667->g_18 p_667->g_comm_values p_667->g_37 p_667->g_41 p_667->g_308 p_667->g_381 p_667->g_105 p_667->g_406 p_667->g_257 p_667->g_197 p_667->g_436 p_667->g_465 p_667->g_467 p_667->g_358 p_667->g_32 p_667->g_194 p_667->g_262 p_667->g_545 p_667->g_549 p_667->g_561 p_667->l_comm_values p_667->g_158 p_667->g_224
 * writes: p_667->g_2 p_667->g_31 p_667->g_32 p_667->g_392 p_667->g_37 p_667->g_105 p_667->g_94 p_667->g_151 p_667->g_197 p_667->g_467 p_667->g_159 p_667->g_194 p_667->g_41 p_667->g_358 p_667->g_262
 */
uint64_t  func_1(struct S0 * p_667)
{ /* block id: 4 */
    VECTOR(int32_t, 16) l_3 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x21DED680L), 0x21DED680L), 0x21DED680L, 5L, 0x21DED680L, (VECTOR(int32_t, 2))(5L, 0x21DED680L), (VECTOR(int32_t, 2))(5L, 0x21DED680L), 5L, 0x21DED680L, 5L, 0x21DED680L);
    int32_t *l_4 = (void*)0;
    int32_t *l_5 = (void*)0;
    int32_t *l_6 = (void*)0;
    int32_t *l_7 = (void*)0;
    int32_t *l_8 = (void*)0;
    int32_t *l_9[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_12 = (void*)0;
    uint16_t *l_29 = (void*)0;
    uint16_t *l_30 = &p_667->g_31;
    VECTOR(uint32_t, 8) l_39 = (VECTOR(uint32_t, 8))(0x2CC684CAL, (VECTOR(uint32_t, 4))(0x2CC684CAL, (VECTOR(uint32_t, 2))(0x2CC684CAL, 0xB11082E7L), 0xB11082E7L), 0xB11082E7L, 0x2CC684CAL, 0xB11082E7L);
    VECTOR(uint32_t, 2) l_40 = (VECTOR(uint32_t, 2))(4UL, 4294967295UL);
    int32_t l_42 = (-3L);
    int32_t **l_556 = (void*)0;
    int32_t **l_557[1][10] = {{&l_6,&l_8,&l_6,&l_6,&l_8,&l_6,&l_6,&l_8,&l_6,&l_6}};
    int64_t l_665 = (-8L);
    VECTOR(int64_t, 8) l_666 = (VECTOR(int64_t, 8))(0x4899931B37007C97L, (VECTOR(int64_t, 4))(0x4899931B37007C97L, (VECTOR(int64_t, 2))(0x4899931B37007C97L, (-1L)), (-1L)), (-1L), 0x4899931B37007C97L, (-1L));
    int i, j;
    p_667->g_2.s1 = ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(p_667->g_2.s52)).yyxyxxxxxxyyxyxx, ((VECTOR(int32_t, 8))(l_3.s44455595)).s0707576451653527))).sf;
    l_666.s6 |= (((safe_mul_func_int8_t_s_s((((((void*)0 != l_12) , (safe_mod_func_int16_t_s_s(func_15((p_667->g_18[2] , func_19((p_667->g_37[7][6] = func_23(p_667->g_comm_values[p_667->tid], ((*l_30) = 0x62B2L), (p_667->g_32[0] = 0x33933B839BF5BF81L), p_667->g_18[2], func_33(p_667->g_37[2][6], ((safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 8))(l_39.s05555215)).lo, ((VECTOR(uint32_t, 4))(l_40.yxyx))))).yyxxzxwwzxzzxzwz)).s64bf)).xzywxwzzxzxwxxxz))).sd)) > ((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_667->g_41.s38e5efb48ca18188)).s55)).xyxx)).wxyxwyxzzzxwyzxw)).lo))).s1), l_42, p_667), p_667)), p_667->g_545.s2, p_667->g_308.sb, p_667)), p_667->g_561, p_667), p_667->l_comm_values[(safe_mod_func_uint32_t_u_u(p_667->tid, 19))]))) >= l_665) <= 0x4B378DD6CFB48D39L), p_667->g_158.s2)) , p_667->g_224) && 0x1CE4L);
    return p_667->g_308.sa;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_15(uint16_t  p_16, int32_t * p_17, struct S0 * p_667)
{ /* block id: 192 */
    int32_t l_562 = (-4L);
    int32_t l_563 = 1L;
    int32_t l_564 = (-3L);
    int32_t *l_565 = (void*)0;
    int32_t *l_566 = (void*)0;
    int32_t *l_567[8] = {&l_564,&l_564,&l_564,&l_564,&l_564,&l_564,&l_564,&l_564};
    uint32_t l_568 = 0xE00B2B2BL;
    uint8_t l_664 = 0UL;
    int i;
    l_568++;
    if ((atomic_inc(&p_667->g_atomic_input[2 * get_linear_group_id() + 0]) == 5))
    { /* block id: 195 */
        int32_t l_571[8];
        uint32_t l_661 = 1UL;
        int32_t l_662 = 1L;
        int64_t l_663 = (-1L);
        int i;
        for (i = 0; i < 8; i++)
            l_571[i] = (-7L);
        for (l_571[6] = (-21); (l_571[6] != 1); ++l_571[6])
        { /* block id: 198 */
            uint8_t l_574 = 0x42L;
            uint32_t l_575 = 4294967294UL;
            l_575 ^= l_574;
        }
        for (l_571[1] = 0; (l_571[1] > 12); ++l_571[1])
        { /* block id: 203 */
            int8_t l_578 = 0L;
            VECTOR(int32_t, 8) l_579 = (VECTOR(int32_t, 8))(0x3D02F03FL, (VECTOR(int32_t, 4))(0x3D02F03FL, (VECTOR(int32_t, 2))(0x3D02F03FL, 0x5DEFFF26L), 0x5DEFFF26L), 0x5DEFFF26L, 0x3D02F03FL, 0x5DEFFF26L);
            uint8_t l_580 = 0UL;
            uint64_t l_581 = 0x903DE8A74B97F7DDL;
            uint16_t l_582 = 1UL;
            int i;
            l_580 = ((l_578 = 0xB083D4E5L) , ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x201AA002L, ((VECTOR(int32_t, 2))(l_579.s71)), 0L)).zxwzyyxwywwxzzyx)), (int32_t)0x7601E5E1L))).s1);
            l_582 &= l_581;
            for (l_580 = 28; (l_580 > 49); l_580 = safe_add_func_uint8_t_u_u(l_580, 9))
            { /* block id: 209 */
                VECTOR(int16_t, 8) l_585 = (VECTOR(int16_t, 8))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 1L), 1L), 1L, 5L, 1L);
                int64_t l_586[7][10][3] = {{{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L}},{{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L}},{{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L}},{{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L}},{{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L}},{{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L}},{{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L},{(-5L),0x2BFC9F5C6934721FL,0x78B837A181A41311L}}};
                int8_t l_587[7] = {0x04L,0x08L,0x04L,0x04L,0x08L,0x04L,0x04L};
                int32_t l_588 = 0x449FED73L;
                uint32_t l_589 = 0x3DAF7148L;
                int8_t l_590 = 1L;
                VECTOR(uint16_t, 4) l_591 = (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0x8F13L), 0x8F13L);
                VECTOR(int32_t, 4) l_631 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x59F88700L), 0x59F88700L);
                VECTOR(int32_t, 16) l_632 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
                int32_t l_633[5];
                VECTOR(int32_t, 16) l_634 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x4AFAEB98L), 0x4AFAEB98L), 0x4AFAEB98L, 8L, 0x4AFAEB98L, (VECTOR(int32_t, 2))(8L, 0x4AFAEB98L), (VECTOR(int32_t, 2))(8L, 0x4AFAEB98L), 8L, 0x4AFAEB98L, 8L, 0x4AFAEB98L);
                uint64_t l_635 = 1UL;
                int16_t l_636 = 0x722EL;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_633[i] = 0x2DBB08ECL;
                if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 4))(l_585.s0246)).wywywzwwxywxyxwz, (int16_t)(l_589 = ((l_586[1][7][2] , l_587[2]) , (GROUP_DIVERGE(1, 1) , l_588))), (int16_t)l_590))).sf8, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_591.wzwzxyxzywyzzxzz)).lo)).s74))).yxxx)).z)
                { /* block id: 211 */
                    int32_t *l_592 = (void*)0;
                    int32_t l_594 = 6L;
                    int32_t *l_593 = &l_594;
                    int32_t *l_595 = (void*)0;
                    int32_t *l_596 = &l_594;
                    int32_t *l_605 = &l_594;
                    int32_t *l_606 = &l_594;
                    int16_t l_607 = (-5L);
                    uint32_t l_608 = 1UL;
                    l_596 = (l_595 = (l_593 = l_592));
                    for (l_594 = 18; (l_594 <= 26); l_594 = safe_add_func_uint64_t_u_u(l_594, 8))
                    { /* block id: 217 */
                        uint32_t l_599 = 4294967295UL;
                        uint32_t l_600 = 1UL;
                        uint8_t l_601 = 0xCFL;
                        int32_t l_603 = 2L;
                        int32_t *l_602 = &l_603;
                        int32_t *l_604 = &l_603;
                        l_600 = l_599;
                        l_602 = (l_601 , l_602);
                        l_595 = (void*)0;
                        l_592 = l_604;
                    }
                    l_606 = l_605;
                    l_608--;
                }
                else
                { /* block id: 225 */
                    int32_t l_611 = 1L;
                    int64_t l_622 = 0L;
                    int64_t *l_621 = &l_622;
                    int64_t **l_620 = &l_621;
                    int64_t **l_623[3][5] = {{&l_621,&l_621,&l_621,&l_621,&l_621},{&l_621,&l_621,&l_621,&l_621,&l_621},{&l_621,&l_621,&l_621,&l_621,&l_621}};
                    int i, j;
                    for (l_611 = (-2); (l_611 == 2); l_611++)
                    { /* block id: 228 */
                        int32_t *l_614 = (void*)0;
                        int32_t l_616 = 0L;
                        int32_t *l_615 = &l_616;
                        int32_t *l_617 = (void*)0;
                        uint8_t l_618 = 5UL;
                        VECTOR(int8_t, 4) l_619 = (VECTOR(int8_t, 4))(0x56L, (VECTOR(int8_t, 2))(0x56L, (-1L)), (-1L));
                        int i;
                        l_614 = (void*)0;
                        l_617 = l_615;
                        l_588 &= (l_618 , l_619.x);
                    }
                    l_623[2][0] = l_620;
                    for (l_611 = (-14); (l_611 > 7); l_611 = safe_add_func_int8_t_s_s(l_611, 1))
                    { /* block id: 236 */
                        int32_t l_626[7][8] = {{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L}};
                        int16_t l_627[2][8][6] = {{{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L},{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L},{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L},{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L},{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L},{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L},{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L},{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L}},{{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L},{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L},{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L},{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L},{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L},{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L},{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L},{0x4E97L,0L,0x54C9L,0x40BEL,0x54C9L,0L}}};
                        uint32_t l_628 = 0xFBF72026L;
                        int i, j, k;
                        l_628++;
                    }
                }
                l_635 = ((VECTOR(int32_t, 8))((l_633[2] = (l_579.s2 = ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(l_631.yyxywyyzxzzzzyxw)), ((VECTOR(int32_t, 16))(l_632.sa4a74803c1b71bc1))))).s4)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_634.s837b24e1)).even)), 0L, 0x485D5557L, 0L)).s2;
                l_631.y = l_636;
            }
            for (l_579.s1 = (-7); (l_579.s1 != (-20)); l_579.s1 = safe_sub_func_uint8_t_u_u(l_579.s1, 4))
            { /* block id: 247 */
                uint64_t l_639 = 18446744073709551613UL;
                uint32_t l_640[10] = {0x3088637BL,0x3088637BL,0x3088637BL,0x3088637BL,0x3088637BL,0x3088637BL,0x3088637BL,0x3088637BL,0x3088637BL,0x3088637BL};
                int32_t l_642[2];
                int32_t *l_641 = &l_642[1];
                uint16_t l_643 = 65533UL;
                uint32_t l_644 = 0xFD73CBD6L;
                uint64_t l_645[8] = {2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL};
                int32_t l_646 = (-1L);
                int16_t l_647 = 1L;
                VECTOR(int32_t, 4) l_648 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x42BC2AACL), 0x42BC2AACL);
                VECTOR(int32_t, 2) l_649 = (VECTOR(int32_t, 2))(0x689DD39BL, 0x558CFC5EL);
                VECTOR(int32_t, 8) l_650 = (VECTOR(int32_t, 8))(0x402F5634L, (VECTOR(int32_t, 4))(0x402F5634L, (VECTOR(int32_t, 2))(0x402F5634L, 0x3C702781L), 0x3C702781L), 0x3C702781L, 0x402F5634L, 0x3C702781L);
                VECTOR(int32_t, 4) l_651 = (VECTOR(int32_t, 4))(0x409144F3L, (VECTOR(int32_t, 2))(0x409144F3L, (-1L)), (-1L));
                int64_t l_652 = 0x63F67C1145C60737L;
                int16_t l_653[8];
                uint8_t l_654 = 246UL;
                int32_t l_655 = (-1L);
                int16_t l_656 = (-1L);
                int32_t l_657 = (-1L);
                uint16_t l_658[8] = {0xAB7EL,0xAB7EL,0xAB7EL,0xAB7EL,0xAB7EL,0xAB7EL,0xAB7EL,0xAB7EL};
                uint16_t l_659[8][8][4] = {{{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL}},{{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL}},{{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL}},{{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL}},{{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL}},{{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL}},{{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL}},{{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL},{0x8B8AL,1UL,0UL,65535UL}}};
                uint32_t l_660 = 0x1A60B2F9L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_642[i] = (-4L);
                for (i = 0; i < 8; i++)
                    l_653[i] = (-10L);
                l_640[4] ^= (l_639 = (-6L));
                l_641 = (void*)0;
                l_644 |= l_643;
                l_660 = ((VECTOR(int32_t, 16))((l_645[4] , l_646), 0x7B97681FL, l_647, ((VECTOR(int32_t, 2))(l_648.xw)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(l_649.xxxy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x4F23BE80L, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(l_650.s3362)).yzwzxzwwwwxyyxww, ((VECTOR(int32_t, 2))((-6L), 0x61507F50L)).yyxyxxyxxyyyyyyx, ((VECTOR(int32_t, 8))(l_651.zyxzwxyx)).s2202040123460575))).s382b)).hi, ((VECTOR(int32_t, 4))(l_652, (l_653[7] = 0x712DC30FL), (-9L), (-4L))).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((l_655 = l_654), (l_656 , (l_657 , (l_658[3] , l_659[7][7][3]))), 1L, (-1L), 0x1CD8A6B8L, ((VECTOR(int32_t, 8))(0x249ED4F4L)), (-8L), 8L, (-7L))).s4e))))).yxyx)).hi, ((VECTOR(int32_t, 2))(0x36C6FAC1L))))), 0x409435ABL)).odd)).yxyy))).lo)), ((VECTOR(int32_t, 2))(0x62C225A7L)), 4L, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0x1BA2D5C3L)), 6L, 0x19179DA8L)).s9;
            }
        }
        l_661 = 0x61E3A937L;
        l_663 = l_662;
        unsigned int result = 0;
        int l_571_i0;
        for (l_571_i0 = 0; l_571_i0 < 8; l_571_i0++) {
            result += l_571[l_571_i0];
        }
        result += l_661;
        result += l_662;
        result += l_663;
        atomic_add(&p_667->g_special_values[2 * get_linear_group_id() + 0], result);
    }
    else
    { /* block id: 259 */
        (1 + 1);
    }
    return l_664;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_19(int32_t * p_20, int32_t  p_21, uint8_t  p_22, struct S0 * p_667)
{ /* block id: 183 */
    int32_t l_560 = (-1L);
    if ((atomic_inc(&p_667->g_atomic_input[2 * get_linear_group_id() + 1]) == 0))
    { /* block id: 185 */
        uint32_t l_558 = 4294967292UL;
        int32_t l_559 = 1L;
        l_559 = (l_558 = 0L);
        unsigned int result = 0;
        result += l_558;
        result += l_559;
        atomic_add(&p_667->g_special_values[2 * get_linear_group_id() + 1], result);
    }
    else
    { /* block id: 188 */
        (1 + 1);
    }
    return l_560;
}


/* ------------------------------------------ */
/* 
 * reads : p_667->g_358 p_667->g_32 p_667->g_194 p_667->g_41 p_667->g_262 p_667->g_467 p_667->g_545 p_667->g_549 p_667->g_2 p_667->g_257 p_667->g_197
 * writes: p_667->g_37 p_667->g_159 p_667->g_194 p_667->g_41 p_667->g_358 p_667->g_262 p_667->g_32
 */
int32_t * func_23(uint64_t  p_24, uint16_t  p_25, uint64_t  p_26, int8_t  p_27, int32_t * p_28, struct S0 * p_667)
{ /* block id: 152 */
    int32_t **l_470 = &p_667->g_37[2][6];
    int32_t *l_473[1];
    uint32_t l_474 = 4294967289UL;
    VECTOR(int16_t, 4) l_507 = (VECTOR(int16_t, 4))(0x7231L, (VECTOR(int16_t, 2))(0x7231L, 1L), 1L);
    VECTOR(int16_t, 4) l_508 = (VECTOR(int16_t, 4))(0x0414L, (VECTOR(int16_t, 2))(0x0414L, 0x2971L), 0x2971L);
    VECTOR(int16_t, 4) l_546 = (VECTOR(int16_t, 4))(0x39C8L, (VECTOR(int16_t, 2))(0x39C8L, 0x55EAL), 0x55EAL);
    uint16_t *l_554[8];
    int64_t l_555 = 0L;
    int i;
    for (i = 0; i < 1; i++)
        l_473[i] = (void*)0;
    for (i = 0; i < 8; i++)
        l_554[i] = &p_667->g_200;
    (*l_470) = (void*)0;
    if ((l_474 = ((safe_sub_func_uint64_t_u_u(p_25, p_26)) == p_27)))
    { /* block id: 155 */
        int32_t *l_475 = (void*)0;
        return l_475;
    }
    else
    { /* block id: 157 */
        int32_t l_476[3];
        int32_t l_477 = 0x57B53487L;
        int32_t l_478 = (-10L);
        uint32_t l_479 = 0x43081936L;
        VECTOR(uint16_t, 2) l_494 = (VECTOR(uint16_t, 2))(3UL, 0xB6C1L);
        VECTOR(int16_t, 8) l_497 = (VECTOR(int16_t, 8))(0x4419L, (VECTOR(int16_t, 4))(0x4419L, (VECTOR(int16_t, 2))(0x4419L, 0x08ACL), 0x08ACL), 0x08ACL, 0x4419L, 0x08ACL);
        int64_t *l_516 = (void*)0;
        uint16_t **l_551[7][8] = {{&p_667->g_66,(void*)0,(void*)0,&p_667->g_66,&p_667->g_66,&p_667->g_66,(void*)0,(void*)0},{&p_667->g_66,(void*)0,(void*)0,&p_667->g_66,&p_667->g_66,&p_667->g_66,(void*)0,(void*)0},{&p_667->g_66,(void*)0,(void*)0,&p_667->g_66,&p_667->g_66,&p_667->g_66,(void*)0,(void*)0},{&p_667->g_66,(void*)0,(void*)0,&p_667->g_66,&p_667->g_66,&p_667->g_66,(void*)0,(void*)0},{&p_667->g_66,(void*)0,(void*)0,&p_667->g_66,&p_667->g_66,&p_667->g_66,(void*)0,(void*)0},{&p_667->g_66,(void*)0,(void*)0,&p_667->g_66,&p_667->g_66,&p_667->g_66,(void*)0,(void*)0},{&p_667->g_66,(void*)0,(void*)0,&p_667->g_66,&p_667->g_66,&p_667->g_66,(void*)0,(void*)0}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_476[i] = 0x3EBB7DCFL;
        --l_479;
        for (l_479 = 0; (l_479 >= 59); ++l_479)
        { /* block id: 161 */
            int16_t *l_498 = (void*)0;
            int16_t *l_499 = (void*)0;
            int16_t *l_500 = (void*)0;
            int64_t *l_511 = (void*)0;
            int64_t *l_512 = (void*)0;
            int32_t l_513 = (-10L);
            l_513 = ((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_494.yxxy)).x, (((safe_rshift_func_int16_t_s_s(p_27, (p_667->g_159.x = ((VECTOR(int16_t, 4))(l_497.s6451)).x))) & (p_24 , l_476[2])) , ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(0x5CA0L, (safe_mul_func_int16_t_s_s(p_27, (safe_add_func_uint8_t_u_u(p_25, (safe_mul_func_uint16_t_u_u(l_497.s3, FAKE_DIVERGE(p_667->local_2_offset, get_local_id(2), 10))))))), 0x72A4L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(l_507.yyzywwwzyyyzxxzw)).sbe9a, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_508.ywwxwywx)).s25)).yyyy))).hi)), (-1L), 0x7A3FL)))), 0x3850L)).s6203630335470051)).s5))), p_25)) | 0x76E19EFBEED16EEAL) > (safe_add_func_int64_t_s_s((l_477 = ((1L <= p_667->g_358) | 6UL)), 18446744073709551615UL))), 0x37A6L)) , p_27), p_667->g_32[0])) == l_513), 1L)) & 0x38D4E32DL);
        }
        for (l_479 = 0; (l_479 >= 6); l_479 = safe_add_func_uint64_t_u_u(l_479, 7))
        { /* block id: 168 */
            uint16_t *l_523 = (void*)0;
            int32_t l_524 = 0x0120204DL;
            uint16_t *l_525 = (void*)0;
            uint16_t *l_526 = (void*)0;
            uint16_t *l_527[9][5][5] = {{{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0}},{{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0}},{{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0}},{{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0}},{{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0}},{{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0}},{{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0}},{{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0}},{{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0},{&p_667->g_31,&p_667->g_31,&p_667->g_31,(void*)0,(void*)0}}};
            uint64_t *l_532 = &p_667->g_358;
            uint8_t *l_541 = &p_667->g_262;
            VECTOR(int16_t, 2) l_544 = (VECTOR(int16_t, 2))(0x702AL, 0x429EL);
            VECTOR(int16_t, 2) l_547 = (VECTOR(int16_t, 2))(0x0A24L, 0L);
            VECTOR(int16_t, 2) l_548 = (VECTOR(int16_t, 2))(0x5ED3L, (-1L));
            int16_t *l_550 = &p_667->g_32[0];
            int i, j, k;
            l_478 |= ((l_516 == (void*)0) == (safe_mod_func_int32_t_s_s((l_477 = (&p_667->g_66 == (((safe_lshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((p_25 || (p_667->g_41.s5 &= (--p_667->g_194.s4))) , 0xC61D6EBAL), 0UL, ((p_25 , (safe_rshift_func_int16_t_s_s((!(p_667->g_194.s5 < ((*l_532)++))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x7AB4L, 0L)))).xyxyxyxy)).s6))) == (safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_667->global_2_offset, get_global_id(2), 10), (safe_mul_func_int16_t_s_s((((++(*l_541)) < (((p_667->g_467 || ((*l_550) = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(l_544.xyyy)).even, ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(p_667->g_545.s2310)), ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(l_546.yz)).yyyx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(l_547.xyxy)).zxwwzwzz, ((VECTOR(int16_t, 2))(l_548.xx)).yyxyyxxy))).s6741110043216106)).s6453)), ((VECTOR(int16_t, 8))(p_667->g_549.s42704455)).hi)))))).odd))), 0L, ((VECTOR(int16_t, 2))(0L)), (-1L), 0L, (-10L))).s5)) , 0L) <= p_25)) || l_544.y), p_667->g_2.s2)))), p_667->g_257))), ((VECTOR(uint32_t, 2))(0xCEE93D7FL)), FAKE_DIVERGE(p_667->local_2_offset, get_local_id(2), 10), 4294967295UL, 0x98130A9CL)), ((VECTOR(uint32_t, 4))(4294967291UL)), 6UL, ((VECTOR(uint32_t, 2))(4294967288UL)), 4UL)), ((VECTOR(uint32_t, 16))(0UL)), ((VECTOR(uint32_t, 16))(1UL))))).sb, 0UL, ((VECTOR(uint32_t, 2))(0xDA089AD2L)), ((VECTOR(uint32_t, 4))(0xEEE0933BL)))).hi)).w , 1UL), 0xE5L)), p_667->g_197.s7)) || 0xF484DB90087F0568L) , l_551[2][3]))), p_26)));
            l_477 = (~(safe_mul_func_int8_t_s_s((&p_667->g_31 != l_554[7]), ((VECTOR(int8_t, 4))(0x7AL, 0L, (-1L), 1L)).y)));
            if (l_555)
                break;
        }
        (*l_470) = &l_477;
    }
    return l_473[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_667->g_comm_values p_667->g_308 p_667->g_381 p_667->g_105 p_667->g_37 p_667->g_406 p_667->g_2 p_667->g_257 p_667->g_197 p_667->g_436 p_667->g_465 p_667->g_467
 * writes: p_667->g_392 p_667->g_37 p_667->g_105 p_667->g_94 p_667->g_151 p_667->g_197 p_667->g_467
 */
int32_t * func_33(int32_t * p_34, uint32_t  p_35, uint64_t  p_36, struct S0 * p_667)
{ /* block id: 8 */
    uint32_t l_389 = 1UL;
    int32_t l_390 = 0x2A3E34CEL;
    uint16_t *l_398 = &p_667->g_200;
    int32_t l_400[4][9][3] = {{{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)}},{{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)}},{{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)}},{{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)},{2L,1L,(-1L)}}};
    VECTOR(int16_t, 16) l_405 = (VECTOR(int16_t, 16))(0x7C8EL, (VECTOR(int16_t, 4))(0x7C8EL, (VECTOR(int16_t, 2))(0x7C8EL, (-1L)), (-1L)), (-1L), 0x7C8EL, (-1L), (VECTOR(int16_t, 2))(0x7C8EL, (-1L)), (VECTOR(int16_t, 2))(0x7C8EL, (-1L)), 0x7C8EL, (-1L), 0x7C8EL, (-1L));
    uint8_t *l_407[1];
    int32_t *l_423 = (void*)0;
    int32_t *l_424 = (void*)0;
    int32_t l_425 = 0x229907CDL;
    VECTOR(int8_t, 2) l_428 = (VECTOR(int8_t, 2))(0L, 0L);
    int8_t *l_429 = &p_667->g_151;
    uint32_t *l_432 = (void*)0;
    uint32_t *l_433[8][1];
    int64_t *l_445 = (void*)0;
    int64_t *l_446 = (void*)0;
    int64_t *l_447[2];
    int32_t l_448 = 0x5C35F439L;
    int8_t *l_449 = (void*)0;
    int8_t *l_450 = (void*)0;
    int8_t *l_451 = (void*)0;
    int8_t *l_452 = (void*)0;
    int8_t *l_453 = (void*)0;
    int8_t *l_454 = (void*)0;
    int8_t *l_455 = (void*)0;
    int8_t *l_456 = (void*)0;
    int8_t *l_457 = (void*)0;
    int8_t *l_458 = (void*)0;
    int32_t l_459 = 0x24524DB4L;
    uint32_t l_464 = 1UL;
    VECTOR(uint32_t, 2) l_466 = (VECTOR(uint32_t, 2))(0x100E9961L, 3UL);
    int32_t *l_468[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_469 = 0x5DL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_407[i] = (void*)0;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
            l_433[i][j] = (void*)0;
    }
    for (i = 0; i < 2; i++)
        l_447[i] = (void*)0;
    for (p_35 = 0; (p_35 <= 28); ++p_35)
    { /* block id: 11 */
        uint16_t *l_71 = (void*)0;
        int32_t l_215 = 1L;
        uint16_t l_216[2];
        int32_t **l_393 = &p_667->g_37[2][6];
        int64_t l_411[8] = {0x06F7607D01DCAB14L,0x06F7607D01DCAB14L,0x06F7607D01DCAB14L,0x06F7607D01DCAB14L,0x06F7607D01DCAB14L,0x06F7607D01DCAB14L,0x06F7607D01DCAB14L,0x06F7607D01DCAB14L};
        uint64_t **l_412 = &p_667->g_382;
        int i;
        for (i = 0; i < 2; i++)
            l_216[i] = 0x1393L;
        for (p_36 = 22; (p_36 >= 46); ++p_36)
        { /* block id: 14 */
            uint32_t l_52 = 0x1CF56E03L;
            uint16_t *l_53 = (void*)0;
            uint16_t *l_70 = (void*)0;
            uint16_t **l_69[5] = {&l_70,&l_70,&l_70,&l_70,&l_70};
            int32_t **l_391 = (void*)0;
            uint32_t l_397 = 4294967295UL;
            int i;
            if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(func_47(l_52, l_53, ((safe_sub_func_int32_t_s_s(func_56(func_62(p_667->g_66, func_67((l_71 = (void*)0), p_667), p_667->g_2.s5, p_667), (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u((safe_mul_func_uint16_t_u_u((0x01395103CEEFD678L < ((VECTOR(int64_t, 8))((safe_lshift_func_uint16_t_u_u(0xA905L, l_52)), ((VECTOR(int64_t, 2))((-1L))), p_667->g_41.sc, ((VECTOR(int64_t, 4))((-4L))))).s1), 0x6765L)))), (-1L))), l_215)), l_215, &l_215, l_216[0], p_667), 0x0823372CL)) && 0L), &l_216[1], p_667), ((VECTOR(int16_t, 4))(7L)), (-1L), 0x7BD7L, p_667->g_105.s2, 0x2E08L, ((VECTOR(int16_t, 2))(0L)), ((VECTOR(int16_t, 4))(0x18E0L)), 0x2913L)).s0, p_667->l_comm_values[(safe_mod_func_uint32_t_u_u(p_667->tid, 19))], 0x7210L, 0x558FL)))).yzyyywwz)).s27, ((VECTOR(uint16_t, 2))(0x068FL))))).yxyyyxyyxxxxyxxx, ((VECTOR(int32_t, 16))(0x48280D94L))))).even)))).s2)
            { /* block id: 127 */
                int32_t *l_387 = (void*)0;
                int32_t *l_388[4][2][10] = {{{&l_215,&l_215,(void*)0,(void*)0,&l_215,(void*)0,&l_215,(void*)0,&l_215,(void*)0},{&l_215,&l_215,(void*)0,(void*)0,&l_215,(void*)0,&l_215,(void*)0,&l_215,(void*)0}},{{&l_215,&l_215,(void*)0,(void*)0,&l_215,(void*)0,&l_215,(void*)0,&l_215,(void*)0},{&l_215,&l_215,(void*)0,(void*)0,&l_215,(void*)0,&l_215,(void*)0,&l_215,(void*)0}},{{&l_215,&l_215,(void*)0,(void*)0,&l_215,(void*)0,&l_215,(void*)0,&l_215,(void*)0},{&l_215,&l_215,(void*)0,(void*)0,&l_215,(void*)0,&l_215,(void*)0,&l_215,(void*)0}},{{&l_215,&l_215,(void*)0,(void*)0,&l_215,(void*)0,&l_215,(void*)0,&l_215,(void*)0},{&l_215,&l_215,(void*)0,(void*)0,&l_215,(void*)0,&l_215,(void*)0,&l_215,(void*)0}}};
                int i, j, k;
                l_215 = ((VECTOR(int32_t, 2))(0L, (-7L))).even;
                l_390 = l_389;
                l_390 ^= l_389;
            }
            else
            { /* block id: 131 */
                int32_t l_396 = 0x31389CB0L;
                int32_t **l_399 = &p_667->g_37[7][1];
                int16_t *l_408 = (void*)0;
                uint32_t *l_413 = &p_667->g_94;
                int32_t *l_414 = &l_396;
                l_393 = (p_667->g_392 = l_391);
                l_397 = ((safe_mod_func_int64_t_s_s((p_667->g_comm_values[p_667->tid] > (l_396 ^= ((void*)0 == &p_667->g_200))), p_36)) <= p_667->g_308.s1);
                (*l_399) = func_62(l_398, l_398, p_667->g_381[2], p_667);
                (*l_414) |= (((l_400[2][3][2] < ((*l_413) = (safe_add_func_int8_t_s_s(((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 2))(l_405.s96)), (int16_t)(p_667->g_105.s3 = ((l_390 , ((((VECTOR(int8_t, 2))(p_667->g_406.yx)).odd | (GROUP_DIVERGE(0, 1) || l_400[2][3][2])) , l_407[0])) != &p_667->g_262)), (int16_t)(safe_mul_func_uint8_t_u_u(0xDBL, l_411[5]))))).xxxyxyxyxyyyyyxy)).s2e)).xxyxyxyxyxxxyyxy)).sd <= ((void*)0 != l_412)) , p_667->g_2.s6), p_667->g_406.x)))) , p_667->g_257) , 0x1FEF6223L);
            }
        }
    }
    l_469 |= (0x39BAL ^ (safe_add_func_int32_t_s_s(l_390, (p_667->g_467 &= ((p_36 , (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((l_425 &= l_400[0][4][1]), (p_667->g_94 = (safe_rshift_func_int16_t_s_s((((*l_429) = ((VECTOR(int8_t, 8))(l_428.xyxyxyyy)).s2) ^ (safe_div_func_uint32_t_u_u((--p_667->g_197.s4), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_667->g_436.yxxx)), (-1L), ((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_459 = (safe_add_func_int64_t_s_s(p_35, (l_448 = (safe_lshift_func_int16_t_s_s(p_35, 8)))))), (safe_div_func_int64_t_s_s(((safe_add_func_uint16_t_u_u(l_464, 1L)) || 0x4EL), p_35)))), p_667->g_436.x)) , p_667->g_465), 1L, 3L, l_466.y, 0x2C02451DL, 0x2063830FL, ((VECTOR(int32_t, 2))(1L)), 0L, (-6L), 0x1578B5FBL)).s8))), 2))))), 3)), l_400[2][3][2]))) ^ l_428.x)))));
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_667->g_224 p_667->g_159 p_667->g_197 p_667->g_257 p_667->g_2 p_667->g_163 p_667->g_37 p_667->l_comm_values p_667->g_comm_values p_667->g_41 p_667->g_105 p_667->g_94 p_667->g_264 p_667->g_262 p_667->g_78 p_667->g_200 p_667->g_194 p_667->g_358 p_667->g_158
 * writes: p_667->g_224 p_667->g_158 p_667->g_262 p_667->g_264 p_667->g_163 p_667->g_94 p_667->g_151 p_667->g_37 p_667->g_66 p_667->g_105 p_667->g_358
 */
int16_t  func_47(uint64_t  p_48, uint16_t * p_49, int64_t  p_50, uint16_t * p_51, struct S0 * p_667)
{ /* block id: 71 */
    int8_t l_218 = 0L;
    int32_t l_222[10] = {0x3E293BD1L,0x3E293BD1L,0x3E293BD1L,0x3E293BD1L,0x3E293BD1L,0x3E293BD1L,0x3E293BD1L,0x3E293BD1L,0x3E293BD1L,0x3E293BD1L};
    int32_t **l_248 = &p_667->g_37[7][5];
    uint16_t *l_266 = &p_667->g_200;
    int64_t *l_271 = (void*)0;
    int64_t **l_272 = &p_667->g_163;
    int32_t *l_274 = &l_222[4];
    int32_t **l_273 = &l_274;
    uint8_t *l_275 = &p_667->g_262;
    uint16_t **l_276[3];
    VECTOR(int32_t, 8) l_285 = (VECTOR(int32_t, 8))(0x58A2B8D3L, (VECTOR(int32_t, 4))(0x58A2B8D3L, (VECTOR(int32_t, 2))(0x58A2B8D3L, 9L), 9L), 9L, 0x58A2B8D3L, 9L);
    int64_t l_306 = (-8L);
    VECTOR(int32_t, 4) l_309 = (VECTOR(int32_t, 4))(0x151245E3L, (VECTOR(int32_t, 2))(0x151245E3L, 8L), 8L);
    int i;
    for (i = 0; i < 3; i++)
        l_276[i] = &p_667->g_66;
    l_218 = 0x4E128B6DL;
    for (p_50 = 0; (p_50 <= 29); p_50 = safe_add_func_int16_t_s_s(p_50, 7))
    { /* block id: 75 */
        int32_t *l_221[4][9][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int8_t l_223 = 0x38L;
        VECTOR(uint64_t, 4) l_237 = (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 8UL), 8UL);
        uint32_t *l_245 = (void*)0;
        int16_t *l_258 = (void*)0;
        int16_t *l_259 = (void*)0;
        int16_t *l_260[7];
        uint64_t *l_261[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t *l_263 = &p_667->g_264;
        uint32_t l_265 = 4294967294UL;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_260[i] = (void*)0;
        --p_667->g_224;
        l_222[6] |= (safe_mul_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), (((safe_sub_func_uint16_t_u_u((((*l_263) = ((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 16))(l_237.yyxzwzyzwxzwxzyw)).s66, (uint64_t)(p_667->g_262 = (safe_unary_minus_func_int16_t_s((((-6L) | (safe_add_func_int16_t_s_s((p_667->g_158.s6 = (0x617F145DL >= ((~(safe_add_func_uint8_t_u_u(p_667->g_159.x, ((safe_rshift_func_int16_t_s_u(((--p_667->g_224) , ((void*)0 != l_248)), (safe_mod_func_int64_t_s_s(((GROUP_DIVERGE(2, 1) | (((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(FAKE_DIVERGE(p_667->group_0_offset, get_group_id(0), 10), 0L)) , 0xF872L), p_667->g_197.s1)) && (safe_mod_func_int16_t_s_s(p_50, p_667->g_257))) , p_50)) <= 1UL), p_667->g_2.s3)))) && p_50)))) != 0x53104D5C85C97A0BL))), (*p_51)))) & 0x6A4F0AF4L))))))), ((VECTOR(uint64_t, 2))(1UL))))).lo) , 0x0683L), p_667->g_197.s2)) && FAKE_DIVERGE(p_667->group_1_offset, get_group_id(1), 10)) , p_667->g_224))), 0x1776FCDEE4A86C97L)), l_265)) , p_667->g_163) == (void*)0), p_48));
    }
    (*l_273) = func_62(l_266, (p_667->g_66 = func_67((((safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(((GROUP_DIVERGE(1, 1) , (*l_248)) == ((*l_273) = func_72((l_271 == ((*l_272) = l_271)), p_667))), 1)), l_218)) , (p_667->g_264 ^ ((((*l_275) ^= ((VECTOR(uint8_t, 4))(p_48, 249UL, 0x72L, 0x16L)).y) >= (-3L)) , (*p_51)))) , p_51), p_667)), p_667->g_2.s1, p_667);
    for (p_48 = 25; (p_48 != 39); p_48 = safe_add_func_int16_t_s_s(p_48, 7))
    { /* block id: 90 */
        int8_t l_281 = 0x4FL;
        int32_t *l_286 = (void*)0;
        int32_t *l_287 = (void*)0;
        int32_t *l_288 = (void*)0;
        int32_t *l_289 = &l_222[3];
        int16_t *l_307 = (void*)0;
        int32_t l_316 = (-6L);
        int32_t l_318 = (-1L);
        int32_t l_319 = 0x59EE0047L;
        int32_t l_325 = (-7L);
        int32_t l_326 = (-5L);
        int32_t l_327 = 0x2CC8D217L;
        int32_t l_328 = (-9L);
        VECTOR(int32_t, 4) l_329 = (VECTOR(int32_t, 4))(0x6A58A81EL, (VECTOR(int32_t, 2))(0x6A58A81EL, 0L), 0L);
        int i;
        for (l_218 = (-20); (l_218 > 26); l_218 = safe_add_func_int32_t_s_s(l_218, 8))
        { /* block id: 93 */
            uint32_t l_282[4][3][9] = {{{1UL,4294967291UL,0xC73B861FL,0x58DE11E3L,4294967295UL,0x9B07E79EL,0UL,0x9DBE0F00L,0UL},{1UL,4294967291UL,0xC73B861FL,0x58DE11E3L,4294967295UL,0x9B07E79EL,0UL,0x9DBE0F00L,0UL},{1UL,4294967291UL,0xC73B861FL,0x58DE11E3L,4294967295UL,0x9B07E79EL,0UL,0x9DBE0F00L,0UL}},{{1UL,4294967291UL,0xC73B861FL,0x58DE11E3L,4294967295UL,0x9B07E79EL,0UL,0x9DBE0F00L,0UL},{1UL,4294967291UL,0xC73B861FL,0x58DE11E3L,4294967295UL,0x9B07E79EL,0UL,0x9DBE0F00L,0UL},{1UL,4294967291UL,0xC73B861FL,0x58DE11E3L,4294967295UL,0x9B07E79EL,0UL,0x9DBE0F00L,0UL}},{{1UL,4294967291UL,0xC73B861FL,0x58DE11E3L,4294967295UL,0x9B07E79EL,0UL,0x9DBE0F00L,0UL},{1UL,4294967291UL,0xC73B861FL,0x58DE11E3L,4294967295UL,0x9B07E79EL,0UL,0x9DBE0F00L,0UL},{1UL,4294967291UL,0xC73B861FL,0x58DE11E3L,4294967295UL,0x9B07E79EL,0UL,0x9DBE0F00L,0UL}},{{1UL,4294967291UL,0xC73B861FL,0x58DE11E3L,4294967295UL,0x9B07E79EL,0UL,0x9DBE0F00L,0UL},{1UL,4294967291UL,0xC73B861FL,0x58DE11E3L,4294967295UL,0x9B07E79EL,0UL,0x9DBE0F00L,0UL},{1UL,4294967291UL,0xC73B861FL,0x58DE11E3L,4294967295UL,0x9B07E79EL,0UL,0x9DBE0F00L,0UL}}};
            int i, j, k;
            l_282[3][0][6]++;
        }
        (*l_289) ^= ((VECTOR(int32_t, 2))(l_285.s43)).lo;
        (*l_273) = (void*)0;
        if ((safe_div_func_int64_t_s_s((FAKE_DIVERGE(p_667->local_2_offset, get_local_id(2), 10) | p_667->g_41.s2), (0x34BFL && ((((safe_mod_func_uint16_t_u_u(p_667->g_78.s3, (safe_mul_func_int16_t_s_s((p_667->g_105.s6 = ((p_50 , p_667->g_94) > (safe_rshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u(1UL, ((safe_lshift_func_int8_t_s_u(p_50, 1)) & (p_667->g_159.x <= 4UL)))) , p_48), (-4L))), p_50)), l_306)))), 0xF1C5L)))) & p_667->l_comm_values[(safe_mod_func_uint32_t_u_u(p_667->tid, 19))]) == 0x0973L) , (*l_289))))))
        { /* block id: 99 */
            int8_t l_317[7];
            int32_t l_320 = 0x16335F98L;
            int32_t l_322 = 0x210C5DACL;
            int32_t l_323 = 0x0DB80E53L;
            int32_t l_324[4][2] = {{0L,0x270069FCL},{0L,0x270069FCL},{0L,0x270069FCL},{0L,0x270069FCL}};
            uint32_t l_330 = 0x022D939FL;
            uint64_t *l_361 = &p_667->g_358;
            VECTOR(uint32_t, 2) l_364 = (VECTOR(uint32_t, 2))(4294967295UL, 0xC3B6F16CL);
            int8_t *l_365[5] = {&l_317[6],&l_317[6],&l_317[6],&l_317[6],&l_317[6]};
            uint64_t *l_380 = &p_667->g_381[2];
            uint64_t **l_379 = &l_380;
            int i, j;
            for (i = 0; i < 7; i++)
                l_317[i] = 0L;
            (*l_289) &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(p_667->g_308.s0ba5)).yywyyzwyywxzwxwz, ((VECTOR(int32_t, 2))(l_309.xx)).yxxxxxxxxxxxxxyx))))).sb;
            for (l_281 = 0; (l_281 < 1); l_281 = safe_add_func_int32_t_s_s(l_281, 4))
            { /* block id: 103 */
                int32_t *l_312 = (void*)0;
                int32_t *l_313 = &l_222[4];
                int32_t *l_314 = &l_222[4];
                int32_t *l_315[6][2][4] = {{{(void*)0,(void*)0,&l_222[4],&l_222[7]},{(void*)0,(void*)0,&l_222[4],&l_222[7]}},{{(void*)0,(void*)0,&l_222[4],&l_222[7]},{(void*)0,(void*)0,&l_222[4],&l_222[7]}},{{(void*)0,(void*)0,&l_222[4],&l_222[7]},{(void*)0,(void*)0,&l_222[4],&l_222[7]}},{{(void*)0,(void*)0,&l_222[4],&l_222[7]},{(void*)0,(void*)0,&l_222[4],&l_222[7]}},{{(void*)0,(void*)0,&l_222[4],&l_222[7]},{(void*)0,(void*)0,&l_222[4],&l_222[7]}},{{(void*)0,(void*)0,&l_222[4],&l_222[7]},{(void*)0,(void*)0,&l_222[4],&l_222[7]}}};
                int32_t l_321[6][10][4] = {{{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L}},{{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L}},{{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L}},{{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L}},{{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L}},{{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L},{5L,0x4F744FA6L,(-2L),1L}}};
                int16_t *l_349 = (void*)0;
                int16_t *l_350 = (void*)0;
                int16_t *l_351 = (void*)0;
                int16_t *l_352 = (void*)0;
                int16_t *l_353 = (void*)0;
                int16_t *l_354 = (void*)0;
                int16_t *l_355 = (void*)0;
                int16_t *l_356 = (void*)0;
                uint64_t *l_357 = &p_667->g_358;
                int i, j, k;
                l_330++;
                (*l_314) = (((*l_357) = (((p_667->g_197.s4 == ((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 2))(0x26918606L, 0x47F2B78BL)).xyyxyxyyxxxxyyxx, ((VECTOR(uint32_t, 2))(4294967290UL, 0x05074098L)).yxyyyxxyxxyyyxxy))).s0385)).xwwzwxwyxzzywzxx))).s9 >= ((((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x78AFL, 0L)), 0x04A4L, 0x50FFL)))).xzwzzyzx))).s2 < ((p_667->g_105.s1 = ((safe_add_func_uint64_t_u_u(p_667->g_200, (!(safe_add_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(1UL, 14)), ((p_48 ^ p_50) ^ p_667->l_comm_values[(safe_mod_func_uint32_t_u_u(p_667->tid, 19))]))), (((*l_313) , ((void*)0 != &p_667->g_151)) || 0xBDDDL))) >= p_667->g_200), l_324[0][1]))))) ^ 0xFC896857L)) || l_317[6])) && 0x8E3A0EB3L)), 15)), l_323)), p_667->g_262)) >= 8L)) != 0x429C6FF4L) == p_667->g_41.s7)) == p_667->g_194.sd);
            }
            l_323 |= ((safe_rshift_func_int16_t_s_u(((((l_330 > ((*l_361)++)) >= ((void*)0 != l_274)) < (p_667->g_151 = (((VECTOR(uint32_t, 16))(l_364.yxxxyxxyyxxxxxxx)).s7 && p_667->g_200))) <= ((((safe_unary_minus_func_int8_t_s((l_322 = ((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((FAKE_DIVERGE(p_667->local_1_offset, get_local_id(1), 10) >= p_667->g_78.s5), (GROUP_DIVERGE(2, 1) == (safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s(l_320, (safe_mod_func_uint64_t_u_u(p_48, ((VECTOR(uint64_t, 8))(18446744073709551607UL, 0UL, (((p_667->g_382 = ((*l_379) = p_667->g_163)) != (void*)0) != p_50), ((VECTOR(uint64_t, 4))(0xA331635A15DC25C0L)), 0xE68AC02156A169BBL)).s6)))), p_667->g_194.s7))))), p_50)) == 1L), 0x12L)) , p_667->g_158.s5)))) , p_667->g_94) == (*p_51)) == p_667->g_158.s6)), (*p_51))) < p_667->g_94);
        }
        else
        { /* block id: 115 */
            int32_t ***l_386[8] = {&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273};
            int i;
            for (l_306 = 0; (l_306 > 23); l_306++)
            { /* block id: 118 */
                if (p_48)
                    break;
            }
            (*l_289) ^= (safe_unary_minus_func_int64_t_s(((((VECTOR(uint8_t, 2))(0xA8L, 0xFFL)).hi , &p_667->g_37[2][6]) == (l_248 = &p_667->g_37[3][6]))));
            return p_667->g_194.s5;
        }
    }
    return p_48;
}


/* ------------------------------------------ */
/* 
 * reads : p_667->g_94 p_667->l_comm_values p_667->g_comm_values p_667->g_41 p_667->g_105 p_667->g_159 p_667->g_37
 * writes: p_667->g_94 p_667->g_151 p_667->g_158 p_667->g_37
 */
int32_t  func_56(int32_t * p_57, uint16_t  p_58, int32_t  p_59, int32_t * p_60, uint8_t  p_61, struct S0 * p_667)
{ /* block id: 68 */
    int32_t **l_217 = &p_667->g_37[2][6];
    (*l_217) = func_72(p_667->g_94, p_667);
    return (*p_60);
}


/* ------------------------------------------ */
/* 
 * reads : p_667->g_105 p_667->g_194 p_667->g_94 p_667->l_comm_values p_667->g_comm_values p_667->g_41 p_667->g_159 p_667->g_37 p_667->g_197
 * writes: p_667->g_94 p_667->g_151 p_667->g_158 p_667->g_37 p_667->g_194 p_667->g_200
 */
int32_t * func_62(uint16_t * p_63, uint16_t * p_64, int16_t  p_65, struct S0 * p_667)
{ /* block id: 60 */
    int32_t **l_196 = &p_667->g_37[2][6];
    uint16_t *l_198 = (void*)0;
    uint16_t *l_199 = &p_667->g_200;
    int32_t l_201 = (-1L);
    uint16_t *l_202[1][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_203[3];
    VECTOR(int8_t, 4) l_204 = (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), (-1L)), (-1L));
    int32_t *l_205 = &l_203[0];
    int i, j;
    for (i = 0; i < 3; i++)
        l_203[i] = 0x2FEDE261L;
    l_203[2] = (safe_add_func_uint64_t_u_u(6UL, (safe_add_func_uint32_t_u_u(p_667->g_105.s4, ((-8L) ^ (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_667->g_194.sf2)), ((l_201 = (((safe_unary_minus_func_int16_t_s((((*l_196) = func_72(p_667->g_94, p_667)) != ((((((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(6UL, ((VECTOR(uint32_t, 4))(p_667->g_197.s7165)), 4294967291UL, 0x866A5DDAL, 0x993E52E9L)).s0745062746563725)), (uint32_t)p_667->g_105.s4, (uint32_t)((((FAKE_DIVERGE(p_667->group_2_offset, get_group_id(2), 10) || (0L > (((*l_199) = (p_667->g_194.s2 = (+p_667->g_159.x))) <= p_667->g_159.y))) && 0x185607DF4A3FD36FL) | 0UL) != p_65)))).sa , p_667->g_159.y) , 0UL) ^ l_201) , (void*)0)))) <= 0L) > p_65)) == 65535UL), ((VECTOR(uint16_t, 8))(0xA53CL)), l_201, ((VECTOR(uint16_t, 4))(0x750DL)))).s8 <= GROUP_DIVERGE(2, 1)))))));
    (*l_205) = (GROUP_DIVERGE(2, 1) || (p_667->g_105.s2 , l_204.x));
    return (*l_196);
}


/* ------------------------------------------ */
/* 
 * reads : p_667->g_78 p_667->g_94 p_667->g_2 p_667->g_105 p_667->g_41 p_667->l_comm_values p_667->g_comm_values p_667->g_159 p_667->g_37
 * writes: p_667->g_94 p_667->g_151 p_667->g_158 p_667->g_37
 */
uint16_t * func_67(uint16_t * p_68, struct S0 * p_667)
{ /* block id: 16 */
    int64_t l_76 = 0x495AE89E6D542D3FL;
    int32_t l_77 = 3L;
    VECTOR(int16_t, 8) l_79 = (VECTOR(int16_t, 8))(0x4A51L, (VECTOR(int16_t, 4))(0x4A51L, (VECTOR(int16_t, 2))(0x4A51L, 0x1AFBL), 0x1AFBL), 0x1AFBL, 0x4A51L, 0x1AFBL);
    VECTOR(uint16_t, 4) l_80 = (VECTOR(uint16_t, 4))(0x765CL, (VECTOR(uint16_t, 2))(0x765CL, 0UL), 0UL);
    uint32_t *l_93 = &p_667->g_94;
    VECTOR(uint32_t, 8) l_101 = (VECTOR(uint32_t, 8))(0x7A8BFC02L, (VECTOR(uint32_t, 4))(0x7A8BFC02L, (VECTOR(uint32_t, 2))(0x7A8BFC02L, 1UL), 1UL), 1UL, 0x7A8BFC02L, 1UL);
    VECTOR(uint32_t, 2) l_102 = (VECTOR(uint32_t, 2))(0xF4C626C4L, 4UL);
    int64_t *l_106 = (void*)0;
    int64_t *l_107[8] = {(void*)0,&l_76,(void*)0,(void*)0,&l_76,(void*)0,(void*)0,&l_76};
    int32_t l_108 = (-3L);
    int32_t **l_188 = &p_667->g_37[7][2];
    uint16_t *l_189 = (void*)0;
    int i;
    (*l_188) = func_72((safe_mul_func_uint16_t_u_u((5L < (((((l_77 = l_76) <= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(1L, 0L, ((VECTOR(int32_t, 2))(p_667->g_78.s64)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(l_79.s2633026220016462)).s45, ((VECTOR(uint16_t, 4))(l_80.wyxx)).even))).xxxxxyyyyyxyxyyx, (int32_t)((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((l_108 |= ((((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((l_76 | ((l_76 <= ((safe_lshift_func_int16_t_s_u((((((*l_93) &= 4294967295UL) , (safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 2))(l_101.s73)).yyyx, ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(1UL, 1UL, ((VECTOR(uint32_t, 16))(l_102.yxyyyyxyyyyxyyyy)).s9, (p_667->g_2.s4 >= (((safe_sub_func_int8_t_s_s(((((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_667->g_105.s22)), 1L, (-7L))).ywzwyxwwzxywyxyy)).s05, ((VECTOR(int16_t, 4))(l_102.y, 0x02C8L, 0x4FEEL, 0x1A11L)).even))).odd <= (-10L)) | l_102.y), l_79.s4)) & p_667->g_94) > 0x8F33L)), ((VECTOR(uint32_t, 8))(0xA40FDB04L)), ((VECTOR(uint32_t, 2))(1UL)), 1UL, 0xB4EC1833L)).sb1, ((VECTOR(uint32_t, 2))(0x7879CFBCL)), ((VECTOR(uint32_t, 2))(0UL))))).yxyx))).y, l_102.y)), l_79.s3)), 4294967288UL))) <= 1L) , p_667->g_41.sb), 7)) , p_667->g_105.s1)) > l_76)), p_667->g_41.sf)), p_667->g_105.s3)) ^ l_101.s2) , l_80.x) >= p_667->g_41.sd)) ^ GROUP_DIVERGE(0, 1)), p_667->g_105.s1)) , 0xF163L), l_76)) <= 9L), l_101.s1)) == l_101.s2), (int32_t)(-1L)))).s1f)), 0x61DEDA81L, 0x22B6A996L)), 5L, 8L, 0L, 0x5024A44AL, ((VECTOR(int32_t, 4))(0x20BB848FL)))).s3) >= 0x1AL) & 65535UL) , l_101.s7)), l_80.w)), p_667);
    return l_189;
}


/* ------------------------------------------ */
/* 
 * reads : p_667->l_comm_values p_667->g_comm_values p_667->g_41 p_667->g_105 p_667->g_159 p_667->g_94 p_667->g_37
 * writes: p_667->g_94 p_667->g_151 p_667->g_158
 */
int32_t * func_72(int16_t  p_73, struct S0 * p_667)
{ /* block id: 20 */
    int32_t l_136[10];
    int32_t l_144 = 0x15B1D915L;
    uint16_t **l_148 = &p_667->g_66;
    int64_t *l_162 = (void*)0;
    VECTOR(int16_t, 8) l_165 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4B1CL), 0x4B1CL), 0x4B1CL, 0L, 0x4B1CL);
    int16_t *l_177 = (void*)0;
    int64_t l_178 = 2L;
    uint32_t *l_185 = &p_667->g_94;
    int i, j;
    for (i = 0; i < 10; i++)
        l_136[i] = 0x248EFB74L;
    for (p_73 = (-5); (p_73 > 9); p_73 = safe_add_func_uint32_t_u_u(p_73, 7))
    { /* block id: 23 */
        uint16_t l_116 = 0x67E7L;
        int32_t l_145 = 0x5DCCCDC1L;
        VECTOR(uint8_t, 2) l_156 = (VECTOR(uint8_t, 2))(250UL, 3UL);
        VECTOR(int16_t, 16) l_157 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x4B0EL), 0x4B0EL), 0x4B0EL, 1L, 0x4B0EL, (VECTOR(int16_t, 2))(1L, 0x4B0EL), (VECTOR(int16_t, 2))(1L, 0x4B0EL), 1L, 0x4B0EL, 1L, 0x4B0EL);
        int16_t *l_164[8][1];
        int32_t *l_172 = &l_145;
        int8_t *l_173[1][6] = {{&p_667->g_151,&p_667->g_151,&p_667->g_151,&p_667->g_151,&p_667->g_151,&p_667->g_151}};
        int16_t **l_176[1];
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 1; j++)
                l_164[i][j] = (void*)0;
        }
        for (i = 0; i < 1; i++)
            l_176[i] = &l_164[6][0];
        for (p_667->g_94 = 0; (p_667->g_94 == 11); ++p_667->g_94)
        { /* block id: 26 */
            uint16_t l_113 = 0x6FBAL;
            uint32_t *l_123 = &p_667->g_94;
            int32_t l_139 = 1L;
            int32_t l_143 = (-7L);
            uint16_t **l_149 = (void*)0;
            int8_t *l_150 = &p_667->g_151;
            int32_t *l_152 = (void*)0;
            int32_t *l_153[10];
            int i;
            for (i = 0; i < 10; i++)
                l_153[i] = (void*)0;
            ++l_113;
            if (l_116)
                continue;
            for (l_116 = 0; (l_116 > 51); l_116 = safe_add_func_uint64_t_u_u(l_116, 6))
            { /* block id: 31 */
                int32_t *l_137 = (void*)0;
                int32_t *l_138[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint16_t *l_140 = &l_113;
                int16_t l_141 = (-7L);
                int64_t l_142[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_142[i] = 0x25DBB92B385C65EBL;
                l_145 = (l_116 && ((l_144 = ((l_143 &= (l_142[0] |= ((VECTOR(int32_t, 8))(((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(0x62F6D3EBDD5AF533L, ((void*)0 != l_123))), ((((+(0x2CE8EB2946C84E0FL != (((((*l_140) |= ((safe_mod_func_int32_t_s_s((l_139 = (safe_mod_func_uint64_t_u_u(0xCE2574B05BB3E853L, (4294967293UL && (!((safe_sub_func_int16_t_s_s((p_667->g_105.s4 > ((safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u(l_136[2], 0x7A96L)) ^ p_73), p_667->l_comm_values[(safe_mod_func_uint32_t_u_u(p_667->tid, 19))])), 1UL)) && 0UL)), 0x6B0AL)) != p_73)))))), 4294967295UL)) != l_116)) , &l_116) == (void*)0) && 0UL))) == l_116) | 1UL) > GROUP_DIVERGE(2, 1)))) , l_136[9]), l_136[6], 0x4CF6E19BL, l_141, ((VECTOR(int32_t, 4))(6L)))).s5)) && l_116)) == p_667->l_comm_values[(safe_mod_func_uint32_t_u_u(p_667->tid, 19))]));
                l_145 = p_73;
            }
            l_144 |= ((l_139 | (p_667->g_comm_values[p_667->tid] & ((p_73 < ((*l_150) = ((safe_rshift_func_int16_t_s_s((FAKE_DIVERGE(p_667->group_0_offset, get_group_id(0), 10) , (p_73 , (p_667->g_41.s3 , (l_136[2] <= ((p_73 , l_148) != l_149))))), 1)) != 1L))) == (-1L)))) < 0L);
        }
        (*l_172) = (0x0070889BL < ((safe_div_func_int32_t_s_s((((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(0x04L, (-4L))), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_156.xy)).xyxy)).odd)).xyxx)))).zwywxwyy)).s62))).lo > ((p_667->g_158.s6 = (l_144 &= ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(l_157.s1cb3e24e)).hi, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(p_667->g_158.s2477)), ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_667->g_159.yxyyxyxxyxxxyyyy)))).odd, ((VECTOR(int16_t, 2))((-3L), 0x167CL)).yxxxxxyy, ((VECTOR(int16_t, 16))((p_667->g_159.y = (safe_lshift_func_uint8_t_u_s((l_162 != p_667->g_163), p_667->g_comm_values[p_667->tid]))), 0L, (-3L), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(l_165.s67)), ((VECTOR(int16_t, 16))(p_667->g_159.y, (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((0x7FE45614L >= l_165.s5) <= p_73), ((safe_sub_func_uint64_t_u_u((((VECTOR(int16_t, 2))(0L, 0x56FDL)).lo >= 0x35DFL), 0x1733CD63981B1BC7L)) , 0L))), l_145)), ((VECTOR(int16_t, 4))((-1L))), 0x072CL, (-4L), 0x19D2L, 1L, 0x33F7L, ((VECTOR(int16_t, 2))(4L)), ((VECTOR(int16_t, 2))(0x38AAL)), 0x569BL)).sdc, ((VECTOR(int16_t, 2))((-1L)))))).yxyyyyxy)), ((VECTOR(int16_t, 2))(0x4198L)), ((VECTOR(int16_t, 2))(0x5170L)), 0x6E1FL)).lo))).odd)))))).z)) || l_156.x)), p_73)) || p_73));
        if (p_73)
            continue;
        (*l_172) = (!(l_144 = ((p_667->g_151 = p_667->g_105.s6) || ((safe_rshift_func_int8_t_s_u((((((l_177 = &p_73) != (void*)0) > (+l_178)) <= (((safe_mul_func_uint8_t_u_u(0x21L, p_667->g_41.s5)) == 0UL) != (((safe_mul_func_int8_t_s_s(p_73, (safe_sub_func_int16_t_s_s(((p_73 , p_667->g_159.x) , p_667->g_159.y), p_73)))) == p_73) <= p_73))) <= (*l_172)), (*l_172))) , p_667->g_94))));
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_667->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 19)), permutations[(safe_mod_func_uint32_t_u_u(((*l_185)--), 10))][(safe_mod_func_uint32_t_u_u(p_667->tid, 19))]));
    return p_667->g_37[2][6];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[19];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 19; i++)
            l_comm_values[i] = 1;
    struct S0 c_668;
    struct S0* p_667 = &c_668;
    struct S0 c_669 = {
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L), // p_667->g_2
        {0x73B8CFF2L,0x73B8CFF2L,0x73B8CFF2L,0x73B8CFF2L}, // p_667->g_18
        65526UL, // p_667->g_31
        {1L}, // p_667->g_32
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_667->g_37
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), (VECTOR(uint16_t, 2))(65535UL, 1UL), 65535UL, 1UL, 65535UL, 1UL), // p_667->g_41
        (void*)0, // p_667->g_66
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-6L)), (-6L)), (-6L), 1L, (-6L)), // p_667->g_78
        4294967295UL, // p_667->g_94
        (VECTOR(int16_t, 8))(0x0BACL, (VECTOR(int16_t, 4))(0x0BACL, (VECTOR(int16_t, 2))(0x0BACL, 0x35E5L), 0x35E5L), 0x35E5L, 0x0BACL, 0x35E5L), // p_667->g_105
        (-9L), // p_667->g_151
        (VECTOR(int16_t, 8))(0x6176L, (VECTOR(int16_t, 4))(0x6176L, (VECTOR(int16_t, 2))(0x6176L, (-10L)), (-10L)), (-10L), 0x6176L, (-10L)), // p_667->g_158
        (VECTOR(int16_t, 2))(1L, 6L), // p_667->g_159
        (void*)0, // p_667->g_163
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), 65535UL, 1UL, 65535UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), (VECTOR(uint16_t, 2))(1UL, 65535UL), 1UL, 65535UL, 1UL, 65535UL), // p_667->g_194
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x07C21493L), 0x07C21493L), 0x07C21493L, 0UL, 0x07C21493L), // p_667->g_197
        0xD31FL, // p_667->g_200
        0x51BAF4A8L, // p_667->g_224
        0x9CC18198L, // p_667->g_257
        1UL, // p_667->g_262
        0x362EB08A46075F68L, // p_667->g_264
        (VECTOR(int32_t, 16))(0x5E831855L, (VECTOR(int32_t, 4))(0x5E831855L, (VECTOR(int32_t, 2))(0x5E831855L, 2L), 2L), 2L, 0x5E831855L, 2L, (VECTOR(int32_t, 2))(0x5E831855L, 2L), (VECTOR(int32_t, 2))(0x5E831855L, 2L), 0x5E831855L, 2L, 0x5E831855L, 2L), // p_667->g_308
        0x14E3489EDA9596CEL, // p_667->g_358
        {18446744073709551612UL,18446744073709551612UL,18446744073709551612UL}, // p_667->g_381
        &p_667->g_381[2], // p_667->g_382
        &p_667->g_37[2][1], // p_667->g_392
        (VECTOR(int8_t, 2))(0x15L, 1L), // p_667->g_406
        (VECTOR(int32_t, 2))((-1L), 8L), // p_667->g_436
        0x488147B7L, // p_667->g_465
        0x814D49893CB89048L, // p_667->g_467
        (VECTOR(int16_t, 8))(0x3FEBL, (VECTOR(int16_t, 4))(0x3FEBL, (VECTOR(int16_t, 2))(0x3FEBL, 0x477FL), 0x477FL), 0x477FL, 0x3FEBL, 0x477FL), // p_667->g_545
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x057EL), 0x057EL), 0x057EL, 1L, 0x057EL), // p_667->g_549
        (void*)0, // p_667->g_561
        0, // p_667->v_collective
        sequence_input[get_global_id(0)], // p_667->global_0_offset
        sequence_input[get_global_id(1)], // p_667->global_1_offset
        sequence_input[get_global_id(2)], // p_667->global_2_offset
        sequence_input[get_local_id(0)], // p_667->local_0_offset
        sequence_input[get_local_id(1)], // p_667->local_1_offset
        sequence_input[get_local_id(2)], // p_667->local_2_offset
        sequence_input[get_group_id(0)], // p_667->group_0_offset
        sequence_input[get_group_id(1)], // p_667->group_1_offset
        sequence_input[get_group_id(2)], // p_667->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 19)), permutations[0][get_linear_local_id()])), // p_667->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_668 = c_669;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_667);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_667->g_2.s0, "p_667->g_2.s0", print_hash_value);
    transparent_crc(p_667->g_2.s1, "p_667->g_2.s1", print_hash_value);
    transparent_crc(p_667->g_2.s2, "p_667->g_2.s2", print_hash_value);
    transparent_crc(p_667->g_2.s3, "p_667->g_2.s3", print_hash_value);
    transparent_crc(p_667->g_2.s4, "p_667->g_2.s4", print_hash_value);
    transparent_crc(p_667->g_2.s5, "p_667->g_2.s5", print_hash_value);
    transparent_crc(p_667->g_2.s6, "p_667->g_2.s6", print_hash_value);
    transparent_crc(p_667->g_2.s7, "p_667->g_2.s7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_667->g_18[i], "p_667->g_18[i]", print_hash_value);

    }
    transparent_crc(p_667->g_31, "p_667->g_31", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_667->g_32[i], "p_667->g_32[i]", print_hash_value);

    }
    transparent_crc(p_667->g_41.s0, "p_667->g_41.s0", print_hash_value);
    transparent_crc(p_667->g_41.s1, "p_667->g_41.s1", print_hash_value);
    transparent_crc(p_667->g_41.s2, "p_667->g_41.s2", print_hash_value);
    transparent_crc(p_667->g_41.s3, "p_667->g_41.s3", print_hash_value);
    transparent_crc(p_667->g_41.s4, "p_667->g_41.s4", print_hash_value);
    transparent_crc(p_667->g_41.s5, "p_667->g_41.s5", print_hash_value);
    transparent_crc(p_667->g_41.s6, "p_667->g_41.s6", print_hash_value);
    transparent_crc(p_667->g_41.s7, "p_667->g_41.s7", print_hash_value);
    transparent_crc(p_667->g_41.s8, "p_667->g_41.s8", print_hash_value);
    transparent_crc(p_667->g_41.s9, "p_667->g_41.s9", print_hash_value);
    transparent_crc(p_667->g_41.sa, "p_667->g_41.sa", print_hash_value);
    transparent_crc(p_667->g_41.sb, "p_667->g_41.sb", print_hash_value);
    transparent_crc(p_667->g_41.sc, "p_667->g_41.sc", print_hash_value);
    transparent_crc(p_667->g_41.sd, "p_667->g_41.sd", print_hash_value);
    transparent_crc(p_667->g_41.se, "p_667->g_41.se", print_hash_value);
    transparent_crc(p_667->g_41.sf, "p_667->g_41.sf", print_hash_value);
    transparent_crc(p_667->g_78.s0, "p_667->g_78.s0", print_hash_value);
    transparent_crc(p_667->g_78.s1, "p_667->g_78.s1", print_hash_value);
    transparent_crc(p_667->g_78.s2, "p_667->g_78.s2", print_hash_value);
    transparent_crc(p_667->g_78.s3, "p_667->g_78.s3", print_hash_value);
    transparent_crc(p_667->g_78.s4, "p_667->g_78.s4", print_hash_value);
    transparent_crc(p_667->g_78.s5, "p_667->g_78.s5", print_hash_value);
    transparent_crc(p_667->g_78.s6, "p_667->g_78.s6", print_hash_value);
    transparent_crc(p_667->g_78.s7, "p_667->g_78.s7", print_hash_value);
    transparent_crc(p_667->g_94, "p_667->g_94", print_hash_value);
    transparent_crc(p_667->g_105.s0, "p_667->g_105.s0", print_hash_value);
    transparent_crc(p_667->g_105.s1, "p_667->g_105.s1", print_hash_value);
    transparent_crc(p_667->g_105.s2, "p_667->g_105.s2", print_hash_value);
    transparent_crc(p_667->g_105.s3, "p_667->g_105.s3", print_hash_value);
    transparent_crc(p_667->g_105.s4, "p_667->g_105.s4", print_hash_value);
    transparent_crc(p_667->g_105.s5, "p_667->g_105.s5", print_hash_value);
    transparent_crc(p_667->g_105.s6, "p_667->g_105.s6", print_hash_value);
    transparent_crc(p_667->g_105.s7, "p_667->g_105.s7", print_hash_value);
    transparent_crc(p_667->g_151, "p_667->g_151", print_hash_value);
    transparent_crc(p_667->g_158.s0, "p_667->g_158.s0", print_hash_value);
    transparent_crc(p_667->g_158.s1, "p_667->g_158.s1", print_hash_value);
    transparent_crc(p_667->g_158.s2, "p_667->g_158.s2", print_hash_value);
    transparent_crc(p_667->g_158.s3, "p_667->g_158.s3", print_hash_value);
    transparent_crc(p_667->g_158.s4, "p_667->g_158.s4", print_hash_value);
    transparent_crc(p_667->g_158.s5, "p_667->g_158.s5", print_hash_value);
    transparent_crc(p_667->g_158.s6, "p_667->g_158.s6", print_hash_value);
    transparent_crc(p_667->g_158.s7, "p_667->g_158.s7", print_hash_value);
    transparent_crc(p_667->g_159.x, "p_667->g_159.x", print_hash_value);
    transparent_crc(p_667->g_159.y, "p_667->g_159.y", print_hash_value);
    transparent_crc(p_667->g_194.s0, "p_667->g_194.s0", print_hash_value);
    transparent_crc(p_667->g_194.s1, "p_667->g_194.s1", print_hash_value);
    transparent_crc(p_667->g_194.s2, "p_667->g_194.s2", print_hash_value);
    transparent_crc(p_667->g_194.s3, "p_667->g_194.s3", print_hash_value);
    transparent_crc(p_667->g_194.s4, "p_667->g_194.s4", print_hash_value);
    transparent_crc(p_667->g_194.s5, "p_667->g_194.s5", print_hash_value);
    transparent_crc(p_667->g_194.s6, "p_667->g_194.s6", print_hash_value);
    transparent_crc(p_667->g_194.s7, "p_667->g_194.s7", print_hash_value);
    transparent_crc(p_667->g_194.s8, "p_667->g_194.s8", print_hash_value);
    transparent_crc(p_667->g_194.s9, "p_667->g_194.s9", print_hash_value);
    transparent_crc(p_667->g_194.sa, "p_667->g_194.sa", print_hash_value);
    transparent_crc(p_667->g_194.sb, "p_667->g_194.sb", print_hash_value);
    transparent_crc(p_667->g_194.sc, "p_667->g_194.sc", print_hash_value);
    transparent_crc(p_667->g_194.sd, "p_667->g_194.sd", print_hash_value);
    transparent_crc(p_667->g_194.se, "p_667->g_194.se", print_hash_value);
    transparent_crc(p_667->g_194.sf, "p_667->g_194.sf", print_hash_value);
    transparent_crc(p_667->g_197.s0, "p_667->g_197.s0", print_hash_value);
    transparent_crc(p_667->g_197.s1, "p_667->g_197.s1", print_hash_value);
    transparent_crc(p_667->g_197.s2, "p_667->g_197.s2", print_hash_value);
    transparent_crc(p_667->g_197.s3, "p_667->g_197.s3", print_hash_value);
    transparent_crc(p_667->g_197.s4, "p_667->g_197.s4", print_hash_value);
    transparent_crc(p_667->g_197.s5, "p_667->g_197.s5", print_hash_value);
    transparent_crc(p_667->g_197.s6, "p_667->g_197.s6", print_hash_value);
    transparent_crc(p_667->g_197.s7, "p_667->g_197.s7", print_hash_value);
    transparent_crc(p_667->g_200, "p_667->g_200", print_hash_value);
    transparent_crc(p_667->g_224, "p_667->g_224", print_hash_value);
    transparent_crc(p_667->g_257, "p_667->g_257", print_hash_value);
    transparent_crc(p_667->g_262, "p_667->g_262", print_hash_value);
    transparent_crc(p_667->g_264, "p_667->g_264", print_hash_value);
    transparent_crc(p_667->g_308.s0, "p_667->g_308.s0", print_hash_value);
    transparent_crc(p_667->g_308.s1, "p_667->g_308.s1", print_hash_value);
    transparent_crc(p_667->g_308.s2, "p_667->g_308.s2", print_hash_value);
    transparent_crc(p_667->g_308.s3, "p_667->g_308.s3", print_hash_value);
    transparent_crc(p_667->g_308.s4, "p_667->g_308.s4", print_hash_value);
    transparent_crc(p_667->g_308.s5, "p_667->g_308.s5", print_hash_value);
    transparent_crc(p_667->g_308.s6, "p_667->g_308.s6", print_hash_value);
    transparent_crc(p_667->g_308.s7, "p_667->g_308.s7", print_hash_value);
    transparent_crc(p_667->g_308.s8, "p_667->g_308.s8", print_hash_value);
    transparent_crc(p_667->g_308.s9, "p_667->g_308.s9", print_hash_value);
    transparent_crc(p_667->g_308.sa, "p_667->g_308.sa", print_hash_value);
    transparent_crc(p_667->g_308.sb, "p_667->g_308.sb", print_hash_value);
    transparent_crc(p_667->g_308.sc, "p_667->g_308.sc", print_hash_value);
    transparent_crc(p_667->g_308.sd, "p_667->g_308.sd", print_hash_value);
    transparent_crc(p_667->g_308.se, "p_667->g_308.se", print_hash_value);
    transparent_crc(p_667->g_308.sf, "p_667->g_308.sf", print_hash_value);
    transparent_crc(p_667->g_358, "p_667->g_358", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_667->g_381[i], "p_667->g_381[i]", print_hash_value);

    }
    transparent_crc(p_667->g_406.x, "p_667->g_406.x", print_hash_value);
    transparent_crc(p_667->g_406.y, "p_667->g_406.y", print_hash_value);
    transparent_crc(p_667->g_436.x, "p_667->g_436.x", print_hash_value);
    transparent_crc(p_667->g_436.y, "p_667->g_436.y", print_hash_value);
    transparent_crc(p_667->g_465, "p_667->g_465", print_hash_value);
    transparent_crc(p_667->g_467, "p_667->g_467", print_hash_value);
    transparent_crc(p_667->g_545.s0, "p_667->g_545.s0", print_hash_value);
    transparent_crc(p_667->g_545.s1, "p_667->g_545.s1", print_hash_value);
    transparent_crc(p_667->g_545.s2, "p_667->g_545.s2", print_hash_value);
    transparent_crc(p_667->g_545.s3, "p_667->g_545.s3", print_hash_value);
    transparent_crc(p_667->g_545.s4, "p_667->g_545.s4", print_hash_value);
    transparent_crc(p_667->g_545.s5, "p_667->g_545.s5", print_hash_value);
    transparent_crc(p_667->g_545.s6, "p_667->g_545.s6", print_hash_value);
    transparent_crc(p_667->g_545.s7, "p_667->g_545.s7", print_hash_value);
    transparent_crc(p_667->g_549.s0, "p_667->g_549.s0", print_hash_value);
    transparent_crc(p_667->g_549.s1, "p_667->g_549.s1", print_hash_value);
    transparent_crc(p_667->g_549.s2, "p_667->g_549.s2", print_hash_value);
    transparent_crc(p_667->g_549.s3, "p_667->g_549.s3", print_hash_value);
    transparent_crc(p_667->g_549.s4, "p_667->g_549.s4", print_hash_value);
    transparent_crc(p_667->g_549.s5, "p_667->g_549.s5", print_hash_value);
    transparent_crc(p_667->g_549.s6, "p_667->g_549.s6", print_hash_value);
    transparent_crc(p_667->g_549.s7, "p_667->g_549.s7", print_hash_value);
    transparent_crc(p_667->v_collective, "p_667->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 2; i++)
            transparent_crc(p_667->g_special_values[i + 2 * get_linear_group_id()], "p_667->g_special_values[i + 2 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_667->l_comm_values[get_linear_local_id()], "p_667->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_667->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()], "p_667->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
