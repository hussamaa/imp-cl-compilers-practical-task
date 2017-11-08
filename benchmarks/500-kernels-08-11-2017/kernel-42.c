// --atomics 76 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 93,86,1 -l 1,43,1
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

__constant uint32_t permutations[10][43] = {
{36,4,10,40,33,2,17,12,35,27,19,38,5,31,13,22,7,32,30,37,41,21,16,14,42,28,24,0,39,34,26,20,23,6,9,25,18,3,15,8,11,29,1}, // permutation 0
{24,18,11,26,34,14,9,13,39,21,28,3,27,30,40,29,5,36,35,41,4,20,33,31,23,19,32,22,7,25,10,12,37,1,17,15,38,8,6,0,42,16,2}, // permutation 1
{32,27,9,8,28,16,34,18,19,7,20,35,6,10,3,15,23,24,33,13,14,2,4,17,12,31,38,29,41,37,21,1,25,11,42,39,40,36,0,26,30,22,5}, // permutation 2
{32,12,7,20,13,1,35,9,34,4,37,42,38,8,27,14,36,28,23,2,26,31,18,15,41,40,11,21,33,30,25,16,29,39,3,24,0,10,19,6,5,22,17}, // permutation 3
{40,26,37,18,20,13,21,15,12,36,4,32,24,28,38,17,25,42,41,33,3,16,1,7,34,14,27,29,39,5,10,31,8,35,0,6,9,30,11,2,23,19,22}, // permutation 4
{4,35,5,19,10,29,39,8,33,12,36,17,20,41,11,32,28,14,27,25,34,40,7,37,31,3,30,9,13,1,16,23,2,42,24,0,26,18,38,6,15,21,22}, // permutation 5
{9,19,16,39,22,27,8,28,7,30,33,11,1,0,21,26,41,40,31,18,23,24,2,4,42,34,38,15,32,35,6,3,5,12,29,17,14,10,25,13,20,36,37}, // permutation 6
{24,27,2,30,22,35,29,1,7,33,20,31,42,17,9,11,13,32,41,16,6,25,26,12,38,0,14,39,37,15,34,36,21,8,28,23,19,10,18,40,3,5,4}, // permutation 7
{25,21,12,13,41,3,8,11,16,7,39,18,26,10,33,24,9,28,36,40,22,15,4,5,20,19,6,34,1,14,30,38,17,23,37,35,2,0,29,31,32,27,42}, // permutation 8
{36,14,1,15,33,7,41,3,27,42,29,16,13,38,18,30,32,39,23,17,26,34,20,11,24,28,37,25,22,12,35,4,8,40,5,9,31,21,2,19,10,0,6} // permutation 9
};

// Seed: 3322873201

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    VECTOR(int32_t, 2) g_11;
    int32_t g_19;
    int8_t g_38;
    volatile int32_t g_44;
    volatile int32_t *g_43;
    uint64_t g_61;
    uint8_t g_83;
    int16_t g_85[2];
    int8_t **g_108;
    int32_t g_112;
    VECTOR(uint8_t, 2) g_125;
    volatile VECTOR(int32_t, 16) g_140;
    VECTOR(int32_t, 16) g_142;
    volatile VECTOR(int64_t, 2) g_145;
    uint8_t *g_146;
    int64_t g_152;
    uint16_t g_166;
    VECTOR(uint32_t, 4) g_170;
    int32_t g_174;
    int8_t g_184;
    int32_t *g_188;
    int64_t g_195;
    volatile VECTOR(uint16_t, 8) g_217;
    volatile int32_t ** volatile g_237;
    volatile VECTOR(uint32_t, 4) g_251;
    int32_t *g_282[4][1][3];
    VECTOR(int16_t, 16) g_295;
    uint64_t *g_317;
    uint64_t **g_316;
    VECTOR(uint64_t, 16) g_342;
    uint64_t g_367;
    int32_t g_382[9];
    VECTOR(int8_t, 2) g_393;
    volatile VECTOR(int8_t, 8) g_394;
    uint16_t g_416[4];
    uint16_t *g_415;
    VECTOR(uint64_t, 4) g_418;
    int8_t *g_421;
    VECTOR(int8_t, 8) g_438;
    volatile VECTOR(int32_t, 8) g_475;
    uint32_t g_502;
    volatile VECTOR(int32_t, 8) g_507;
    volatile VECTOR(int32_t, 16) g_508;
    VECTOR(int32_t, 8) g_509;
    int64_t g_516;
    VECTOR(uint16_t, 8) g_522;
    VECTOR(int32_t, 16) g_536;
    VECTOR(int32_t, 2) g_537;
    VECTOR(int64_t, 16) g_539;
    VECTOR(uint32_t, 2) g_540;
    VECTOR(int32_t, 16) g_562;
    uint64_t g_581;
    uint64_t ****g_600;
    volatile VECTOR(int32_t, 4) g_609;
    int32_t g_614;
    VECTOR(int32_t, 2) g_617;
    VECTOR(int32_t, 4) g_619;
    VECTOR(int32_t, 2) g_621;
    int8_t *g_630[3];
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
int32_t  func_1(struct S0 * p_640);
int32_t  func_2(uint32_t  p_3, uint16_t  p_4, int32_t  p_5, struct S0 * p_640);
uint16_t  func_6(int32_t  p_7, uint32_t  p_8, int16_t  p_9, uint16_t  p_10, struct S0 * p_640);
uint32_t  func_14(uint16_t  p_15, struct S0 * p_640);
uint32_t  func_20(uint16_t  p_21, struct S0 * p_640);
int16_t  func_23(int64_t  p_24, uint64_t  p_25, struct S0 * p_640);
int32_t  func_26(int32_t * p_27, int32_t * p_28, uint8_t  p_29, struct S0 * p_640);
int32_t * func_30(uint32_t  p_31, uint16_t  p_32, int64_t  p_33, uint64_t  p_34, struct S0 * p_640);
uint16_t  func_45(int8_t * p_46, struct S0 * p_640);
int8_t ** func_47(int32_t  p_48, int64_t  p_49, int8_t ** p_50, uint32_t  p_51, int32_t  p_52, struct S0 * p_640);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_640->l_comm_values p_640->g_11 p_640->g_comm_values p_640->g_19 p_640->g_43 p_640->g_44 p_640->g_85 p_640->g_83 p_640->g_112 p_640->g_61 p_640->g_152 p_640->g_166 p_640->g_170 p_640->g_174 p_640->g_38 p_640->g_142 p_640->g_140 p_640->g_188 p_640->g_195 p_640->g_237 p_640->g_282 p_640->g_125 p_640->g_251 p_640->g_316 p_640->g_342 p_640->g_367 p_640->g_184 p_640->g_317 p_640->g_145 p_640->g_217 p_640->g_415 p_640->g_418 p_640->g_146 p_640->g_438 p_640->g_475 p_640->g_416 p_640->g_502 p_640->g_516 p_640->g_562 p_640->g_581 p_640->g_394 p_640->g_600 p_640->g_539 p_640->g_609 p_640->g_537 p_640->g_614 p_640->g_617 p_640->g_619 p_640->g_621 p_640->g_508 p_640->g_540
 * writes: p_640->g_11 p_640->g_19 p_640->g_38 p_640->g_61 p_640->g_44 p_640->g_108 p_640->g_112 p_640->g_152 p_640->g_166 p_640->g_174 p_640->g_184 p_640->g_188 p_640->g_comm_values p_640->g_195 p_640->g_85 p_640->g_83 p_640->g_43 p_640->g_282 p_640->g_316 p_640->g_170 p_640->g_367 p_640->g_382 p_640->g_421 p_640->g_125 p_640->g_502 p_640->g_516 p_640->g_146 p_640->g_600 p_640->g_295 p_640->g_630
 */
int32_t  func_1(struct S0 * p_640)
{ /* block id: 4 */
    int32_t *l_12 = (void*)0;
    int32_t *l_13[8][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int8_t *l_417[2];
    int8_t *l_420 = (void*)0;
    int8_t **l_419[10][9][1] = {{{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]}},{{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]}},{{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]}},{{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]}},{{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]}},{{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]}},{{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]}},{{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]}},{{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]}},{{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]},{&l_417[1]}}};
    int16_t l_497 = 0x049BL;
    int16_t l_498 = 0x5950L;
    VECTOR(uint16_t, 2) l_524 = (VECTOR(uint16_t, 2))(0x1218L, 0x0A56L);
    VECTOR(int32_t, 4) l_538 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 9L), 9L);
    VECTOR(uint16_t, 8) l_561 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
    uint64_t l_582 = 4UL;
    int32_t l_583[4];
    int32_t l_587 = 1L;
    int64_t l_589[1];
    uint64_t ****l_602 = (void*)0;
    int8_t l_606 = (-10L);
    VECTOR(int32_t, 8) l_610 = (VECTOR(int32_t, 8))(0x7E75795DL, (VECTOR(int32_t, 4))(0x7E75795DL, (VECTOR(int32_t, 2))(0x7E75795DL, 0x7D8E6DA9L), 0x7D8E6DA9L), 0x7D8E6DA9L, 0x7E75795DL, 0x7D8E6DA9L);
    uint32_t l_613 = 0UL;
    VECTOR(int32_t, 8) l_618 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7C8A5378L), 0x7C8A5378L), 0x7C8A5378L, 1L, 0x7C8A5378L);
    int32_t l_620[6] = {0x25E44A5DL,0x25E44A5DL,0x25E44A5DL,0x25E44A5DL,0x25E44A5DL,0x25E44A5DL};
    VECTOR(int32_t, 2) l_622 = (VECTOR(int32_t, 2))(0x055D38F0L, 9L);
    int32_t *l_623 = &p_640->g_382[7];
    int16_t *l_626 = (void*)0;
    int16_t **l_625 = &l_626;
    int16_t ***l_624[1];
    int16_t **l_627 = (void*)0;
    uint32_t l_628[8][9] = {{1UL,0UL,1UL,0xDFDD78A5L,0xF6FDB664L,0x9D76F6C9L,0xF9A74531L,1UL,0xABECAB85L},{1UL,0UL,1UL,0xDFDD78A5L,0xF6FDB664L,0x9D76F6C9L,0xF9A74531L,1UL,0xABECAB85L},{1UL,0UL,1UL,0xDFDD78A5L,0xF6FDB664L,0x9D76F6C9L,0xF9A74531L,1UL,0xABECAB85L},{1UL,0UL,1UL,0xDFDD78A5L,0xF6FDB664L,0x9D76F6C9L,0xF9A74531L,1UL,0xABECAB85L},{1UL,0UL,1UL,0xDFDD78A5L,0xF6FDB664L,0x9D76F6C9L,0xF9A74531L,1UL,0xABECAB85L},{1UL,0UL,1UL,0xDFDD78A5L,0xF6FDB664L,0x9D76F6C9L,0xF9A74531L,1UL,0xABECAB85L},{1UL,0UL,1UL,0xDFDD78A5L,0xF6FDB664L,0x9D76F6C9L,0xF9A74531L,1UL,0xABECAB85L},{1UL,0UL,1UL,0xDFDD78A5L,0xF6FDB664L,0x9D76F6C9L,0xF9A74531L,1UL,0xABECAB85L}};
    int8_t *l_629[2];
    uint32_t *l_631 = &l_613;
    int32_t l_638 = 6L;
    uint16_t l_639 = 0x20A0L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_417[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_583[i] = 7L;
    for (i = 0; i < 1; i++)
        l_589[i] = (-1L);
    for (i = 0; i < 1; i++)
        l_624[i] = &l_625;
    for (i = 0; i < 2; i++)
        l_629[i] = (void*)0;
    if (func_2(p_640->l_comm_values[(safe_mod_func_uint32_t_u_u(p_640->tid, 43))], func_6((p_640->g_11.x = ((VECTOR(int32_t, 4))(p_640->g_11.yxxx)).x), (~func_14(p_640->g_comm_values[p_640->tid], p_640)), p_640->g_125.y, (p_640->g_415 != ((l_417[1] == (((VECTOR(uint64_t, 16))(p_640->g_418.wwyxwwwzwwyzxxzz)).s3 , (p_640->g_421 = p_640->g_146))) , &p_640->g_416[3])), p_640), p_640->g_438.s0, p_640))
    { /* block id: 205 */
        uint64_t l_480 = 0x118914E43B0452F2L;
        int32_t l_488 = 0x272B9F3CL;
        int32_t l_490 = 2L;
        int32_t l_492 = 0x116F0671L;
        int32_t l_493 = (-9L);
        int32_t l_495[4][2] = {{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}};
        uint8_t l_499 = 0x34L;
        VECTOR(uint16_t, 16) l_523 = (VECTOR(uint16_t, 16))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 0UL), 0UL), 0UL, 3UL, 0UL, (VECTOR(uint16_t, 2))(3UL, 0UL), (VECTOR(uint16_t, 2))(3UL, 0UL), 3UL, 0UL, 3UL, 0UL);
        uint32_t l_525 = 0x52E886C4L;
        int64_t *l_546[9] = {&p_640->g_516,&p_640->g_516,&p_640->g_516,&p_640->g_516,&p_640->g_516,&p_640->g_516,&p_640->g_516,&p_640->g_516,&p_640->g_516};
        VECTOR(uint8_t, 2) l_565 = (VECTOR(uint8_t, 2))(0UL, 0xB8L);
        uint8_t *l_570 = &p_640->g_83;
        uint8_t **l_571 = (void*)0;
        uint8_t **l_572[9] = {&p_640->g_146,&p_640->g_146,&p_640->g_146,&p_640->g_146,&p_640->g_146,&p_640->g_146,&p_640->g_146,&p_640->g_146,&p_640->g_146};
        int32_t l_584 = 0x21342B04L;
        int32_t l_591[8][5] = {{0x5668AA02L,0L,0x47DBF801L,0x5EBBCABBL,0L},{0x5668AA02L,0L,0x47DBF801L,0x5EBBCABBL,0L},{0x5668AA02L,0L,0x47DBF801L,0x5EBBCABBL,0L},{0x5668AA02L,0L,0x47DBF801L,0x5EBBCABBL,0L},{0x5668AA02L,0L,0x47DBF801L,0x5EBBCABBL,0L},{0x5668AA02L,0L,0x47DBF801L,0x5EBBCABBL,0L},{0x5668AA02L,0L,0x47DBF801L,0x5EBBCABBL,0L},{0x5668AA02L,0L,0x47DBF801L,0x5EBBCABBL,0L}};
        int16_t l_593 = 6L;
        int i, j;
        l_480++;
        for (p_640->g_367 = 8; (p_640->g_367 >= 27); p_640->g_367 = safe_add_func_uint32_t_u_u(p_640->g_367, 2))
        { /* block id: 209 */
            int8_t l_485 = (-1L);
            int32_t l_486 = 0x63F1882AL;
            int32_t l_487 = (-9L);
            int32_t l_489 = 0x10AEF6A1L;
            int32_t l_491 = (-8L);
            VECTOR(int32_t, 16) l_494 = (VECTOR(int32_t, 16))(0x7D380D2BL, (VECTOR(int32_t, 4))(0x7D380D2BL, (VECTOR(int32_t, 2))(0x7D380D2BL, 0x5C796784L), 0x5C796784L), 0x5C796784L, 0x7D380D2BL, 0x5C796784L, (VECTOR(int32_t, 2))(0x7D380D2BL, 0x5C796784L), (VECTOR(int32_t, 2))(0x7D380D2BL, 0x5C796784L), 0x7D380D2BL, 0x5C796784L, 0x7D380D2BL, 0x5C796784L);
            int32_t l_496 = (-6L);
            int32_t *l_514 = (void*)0;
            int64_t *l_515 = &p_640->g_516;
            volatile int32_t **l_517 = &p_640->g_43;
            uint8_t l_548 = 252UL;
            int i;
            l_499--;
            p_640->g_502--;
            (*l_517) = (((*l_515) &= ((safe_sub_func_uint32_t_u_u((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(p_640->g_507.s3430270430531223)).s0a90, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(p_640->g_508.s208106fe)).s6760513660363123, (int32_t)l_493))).sbbd5, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(p_640->g_509.s76144000)).s56, (int32_t)l_493, (int32_t)(0UL && (*p_640->g_415))))).xyyx))).yzyzywyz)).s7 , (safe_mod_func_uint64_t_u_u(18446744073709551613UL, (safe_lshift_func_uint8_t_u_s((((((l_492 | p_640->l_comm_values[(safe_mod_func_uint32_t_u_u(p_640->tid, 43))]) > (l_514 != &p_640->g_382[4])) , 0x7C68756BA809D9BFL) && 1L) & 0x4C7CA80F05F94E32L), l_494.sc))))), l_491)) > (-3L))) , (*p_640->g_237));
            for (l_497 = 0; (l_497 != 1); l_497 = safe_add_func_int8_t_s_s(l_497, 9))
            { /* block id: 216 */
                uint64_t l_545 = 0x7B5DEBBEDBDDBDAAL;
                int64_t *l_547 = &p_640->g_195;
                l_490 &= (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))((*p_640->g_415), ((VECTOR(uint16_t, 4))(p_640->g_522.s0007)), ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 4))(0UL, (*p_640->g_415), 0x680BL, 0x6719L)).xyzxxxwx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 8))(l_523.s8cba19e4)).s07, ((VECTOR(uint16_t, 4))(l_524.yxyx)).hi, ((VECTOR(uint16_t, 16))(1UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 16))(((l_525 == ((safe_mod_func_uint64_t_u_u(0x9CEBB4E06BDC8026L, (safe_div_func_int8_t_s_s(l_480, ((**l_517) | (safe_mod_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(FAKE_DIVERGE(p_640->group_1_offset, get_group_id(1), 10), (safe_add_func_int64_t_s_s(((*l_547) &= (((((VECTOR(int32_t, 4))(p_640->g_536.s287a)).y < (l_492 &= ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((-7L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_640->g_537.yxxxyxyyxxxyyyxy)).sf, ((VECTOR(int32_t, 2))(l_538.xy)).lo, 0x608EAA47L, 0x02497A15L)).hi)).even, 2L, (-1L))).yzxywxyzxzwzwzwz)).hi)).s1 <= (-2L)) > ((VECTOR(int64_t, 16))(p_640->g_539.sad9a5fe9c54e68d0)).s5))) , 0x1FL) <= (p_640->g_184 = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(p_640->g_540.xxyyyxxx)).s73)).even ^ (((l_494.s3 = (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((l_488 & l_545) , l_546[7]) != (void*)0), p_640->g_536.s4)), 3))) && l_499) >= FAKE_DIVERGE(p_640->local_0_offset, get_local_id(0), 10)))))), p_640->g_142.sd)))), l_495[0][1]))))))) <= l_488)) > l_525), ((VECTOR(int16_t, 4))(0x4420L)), ((VECTOR(int16_t, 8))((-3L))), 0x06BBL, 0x39D7L, 0x2FFAL)).sa76d, ((VECTOR(int16_t, 4))(0x1C6DL))))).odd)), ((VECTOR(uint16_t, 4))(1UL)), 1UL, 65535UL, 65535UL, 1UL, ((VECTOR(uint16_t, 4))(0x1A63L)), 0xBED6L)).s88))), 7UL, ((VECTOR(uint16_t, 8))(0UL)), (*p_640->g_415), 0xBE2AL, 0x9019L, 65528UL, 0xC68DL)).lo))).lo, ((VECTOR(uint16_t, 4))(0xBEE2L))))), 0xB85BL, (**l_517), 0x03D6L, (*p_640->g_415), (*p_640->g_415), 65532UL, 0xD0CCL)).sdf)), FAKE_DIVERGE(p_640->group_0_offset, get_group_id(0), 10), ((VECTOR(uint16_t, 4))(1UL)), 65535UL)).s1, l_548));
                (*l_517) = (void*)0;
                if ((atomic_inc(&p_640->l_atomic_input[7]) == 9))
                { /* block id: 224 */
                    int32_t l_550 = (-5L);
                    int32_t *l_549[5] = {&l_550,&l_550,&l_550,&l_550,&l_550};
                    int16_t l_551 = 1L;
                    int32_t *l_552[4] = {&l_550,&l_550,&l_550,&l_550};
                    int32_t *l_553 = &l_550;
                    VECTOR(int32_t, 8) l_554 = (VECTOR(int32_t, 8))(0x742B3301L, (VECTOR(int32_t, 4))(0x742B3301L, (VECTOR(int32_t, 2))(0x742B3301L, 0L), 0L), 0L, 0x742B3301L, 0L);
                    uint8_t l_555 = 0xCAL;
                    int i;
                    l_549[3] = (void*)0;
                    l_551 ^= 0x38F758A8L;
                    l_553 = l_552[3];
                    l_555 &= ((VECTOR(int32_t, 2))(l_554.s15)).hi;
                    unsigned int result = 0;
                    result += l_550;
                    result += l_551;
                    result += l_554.s7;
                    result += l_554.s6;
                    result += l_554.s5;
                    result += l_554.s4;
                    result += l_554.s3;
                    result += l_554.s2;
                    result += l_554.s1;
                    result += l_554.s0;
                    result += l_555;
                    atomic_add(&p_640->l_special_values[7], result);
                }
                else
                { /* block id: 229 */
                    (1 + 1);
                }
                (*l_517) = (*p_640->g_237);
            }
        }
        l_492 = (safe_rshift_func_uint8_t_u_s(1UL, (safe_mod_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((l_584 = (((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_561.s1042)))).zzyyyzxyyyzzxwwz)), (uint16_t)(((VECTOR(int32_t, 2))(p_640->g_562.s5a)).odd >= (safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(l_565.xxyy)).x, ((((0x21L <= ((safe_add_func_int16_t_s_s(((((0x57C5L ^ (l_565.y && (l_490 ^= ((safe_sub_func_uint64_t_u_u((&p_640->g_83 != (p_640->g_146 = (l_570 = &p_640->g_83))), (safe_add_func_uint64_t_u_u((*p_640->g_317), (!(l_523.s7 & (safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((!(safe_div_func_uint64_t_u_u(0x20F40DBDE9D7FEA0L, p_640->g_581))) , l_582), l_495[0][1])), 2)))))))) , l_583[2])))) > 1L) < l_565.x) ^ p_640->g_394.s0), l_488)) , 1L)) , &l_498) == &p_640->g_85[1]) , l_480)))), (uint16_t)(*p_640->g_415)))).sb <= (*p_640->g_415))))), (*p_640->g_415)))));
        for (l_584 = 0; (l_584 == 16); l_584++)
        { /* block id: 242 */
            int64_t l_588[5][9][5] = {{{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L}},{{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L}},{{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L}},{{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L}},{{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L},{0x1CD60863E6060991L,0x5BDE6DCCD0722B9CL,0x15A8B77FE276815AL,0x3EDEE1DECB244D2DL,0x4FA7E85788F12AC7L}}};
            int32_t l_590 = 8L;
            VECTOR(int32_t, 16) l_592 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1CB72B3EL), 0x1CB72B3EL), 0x1CB72B3EL, 1L, 0x1CB72B3EL, (VECTOR(int32_t, 2))(1L, 0x1CB72B3EL), (VECTOR(int32_t, 2))(1L, 0x1CB72B3EL), 1L, 0x1CB72B3EL, 1L, 0x1CB72B3EL);
            uint8_t l_594 = 0x8EL;
            uint64_t l_597 = 0xF9D9C9085ABD95C9L;
            int i, j, k;
            l_594--;
            --l_597;
        }
    }
    else
    { /* block id: 246 */
        uint64_t *****l_601 = &p_640->g_600;
        VECTOR(uint8_t, 8) l_605 = (VECTOR(uint8_t, 8))(0x45L, (VECTOR(uint8_t, 4))(0x45L, (VECTOR(uint8_t, 2))(0x45L, 6UL), 6UL), 6UL, 0x45L, 6UL);
        int i;
        (*p_640->g_43) = ((((*l_601) = p_640->g_600) != ((!p_640->g_19) , l_602)) , (safe_mod_func_uint8_t_u_u((1UL | ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_605.s50)))).yyyy, ((VECTOR(uint8_t, 8))((p_640->g_539.se ^ (*p_640->g_415)), 0xC6L, 0xC3L, (0x3FC7FB33L < l_605.s1), (~l_605.s2), ((VECTOR(uint8_t, 2))(0x3EL)), 1UL)).hi))).hi, ((VECTOR(uint8_t, 2))(0x3FL))))), 0xAEL, 0x9DL)).zxzyxyzwzzxwxwzy)).s3), l_605.s2)));
    }
    l_627 = (((l_606 , p_640->g_195) , ((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_640->g_609.zwwzywzxwywzyzxw)).s3ced)).even, ((VECTOR(int32_t, 8))(l_610.s36630701)).s70))).odd, (p_640->g_537.y <= (safe_add_func_int32_t_s_s(l_613, p_640->g_614))))) >= (safe_rshift_func_int8_t_s_s((((*l_623) = ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(p_640->g_617.xxxyyyxyyyyyxyyx)).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_618.s5107)).zwxzxzyx)), ((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 2))(0L, (-3L))).hi, 0L, 0x68EB1DEBL, ((VECTOR(int32_t, 2))(0x09877A58L, 1L)), ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_640->g_619.zyzwwzzz))))))).odd)).zwxzyxzx, (int32_t)l_620[5]))), 0x53F20748L, 0x761E2CD9L)).lo))).s4472225673250771)).sd1, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_640->g_621.yxyxxxxx)))).s42, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_622.xxxy)), 0x2AC51F74L, (-4L), 0x10170886L, 0x57455463L)).s05))).lo) , p_640->g_438.s0), ((p_640->g_438.s3 | (*p_640->g_415)) | 0UL))))) , (void*)0);
    l_639 |= (l_628[3][7] ^ (((p_640->g_295.s4 = p_640->g_508.s4) | (0x01BDL | ((((l_629[0] == (p_640->g_630[1] = (p_640->g_421 = &p_640->g_184))) == (((*l_631) &= FAKE_DIVERGE(p_640->local_2_offset, get_local_id(2), 10)) & (p_640->g_562.s4 || (safe_sub_func_uint32_t_u_u(((*p_640->g_317) == ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((p_640->g_85[1] ^= ((((p_640->g_342.s2 || (p_640->g_166 && p_640->g_621.x)) && 0x21L) , (void*)0) != &l_419[9][7][0])), (*p_640->g_415))), (*p_640->g_415))) == p_640->g_11.x)), l_638))))) | FAKE_DIVERGE(p_640->group_2_offset, get_group_id(2), 10)) == p_640->g_540.x))) <= p_640->g_619.z));
    return p_640->g_609.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_43
 * writes: p_640->g_44
 */
int32_t  func_2(uint32_t  p_3, uint16_t  p_4, int32_t  p_5, struct S0 * p_640)
{ /* block id: 202 */
    uint16_t l_479 = 65535UL;
    (*p_640->g_43) = p_5;
    return l_479;
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_237 p_640->g_43 p_640->g_44 p_640->g_438 p_640->g_85 p_640->g_174 p_640->g_184 p_640->g_166 p_640->g_475 p_640->g_416 p_640->g_415 p_640->g_38
 * writes: p_640->g_43 p_640->g_282 p_640->g_112 p_640->g_44 p_640->g_166 p_640->g_152 p_640->g_83 p_640->g_125 p_640->g_382
 */
uint16_t  func_6(int32_t  p_7, uint32_t  p_8, int16_t  p_9, uint16_t  p_10, struct S0 * p_640)
{ /* block id: 176 */
    VECTOR(int32_t, 2) l_422 = (VECTOR(int32_t, 2))(0x1685E31DL, 0x7F52FE27L);
    VECTOR(int16_t, 16) l_427 = (VECTOR(int16_t, 16))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x5AFAL), 0x5AFAL), 0x5AFAL, 6L, 0x5AFAL, (VECTOR(int16_t, 2))(6L, 0x5AFAL), (VECTOR(int16_t, 2))(6L, 0x5AFAL), 6L, 0x5AFAL, 6L, 0x5AFAL);
    uint16_t *l_428 = &p_640->g_166;
    uint32_t *l_447 = (void*)0;
    uint8_t l_454 = 0x38L;
    VECTOR(int64_t, 16) l_457 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
    uint64_t ***l_458 = (void*)0;
    uint64_t ****l_459 = &l_458;
    uint64_t ***l_460 = &p_640->g_316;
    uint64_t ****l_461 = &l_460;
    uint8_t *l_462 = (void*)0;
    uint8_t *l_463 = &p_640->g_83;
    uint8_t *l_464 = (void*)0;
    uint8_t *l_465 = (void*)0;
    uint8_t *l_466 = (void*)0;
    uint8_t *l_467 = (void*)0;
    uint8_t *l_468 = (void*)0;
    uint8_t *l_469 = (void*)0;
    uint8_t *l_470 = (void*)0;
    VECTOR(int32_t, 2) l_476 = (VECTOR(int32_t, 2))(0L, 0x6E49208AL);
    int32_t l_477 = (-8L);
    int32_t *l_478 = (void*)0;
    int i;
    if (((VECTOR(int32_t, 16))(l_422.yxxxxxyyxxyxxyyy)).s4)
    { /* block id: 177 */
        return p_8;
    }
    else
    { /* block id: 179 */
        uint16_t **l_424 = (void*)0;
        uint16_t ***l_423 = &l_424;
        VECTOR(int8_t, 4) l_437 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x73L), 0x73L);
        int64_t *l_439[7][4] = {{&p_640->g_195,&p_640->g_195,&p_640->g_195,(void*)0},{&p_640->g_195,&p_640->g_195,&p_640->g_195,(void*)0},{&p_640->g_195,&p_640->g_195,&p_640->g_195,(void*)0},{&p_640->g_195,&p_640->g_195,&p_640->g_195,(void*)0},{&p_640->g_195,&p_640->g_195,&p_640->g_195,(void*)0},{&p_640->g_195,&p_640->g_195,&p_640->g_195,(void*)0},{&p_640->g_195,&p_640->g_195,&p_640->g_195,(void*)0}};
        int32_t **l_440 = &p_640->g_282[0][0][0];
        int32_t *l_441 = &p_640->g_112;
        int8_t *l_442[2][1];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_442[i][j] = (void*)0;
        }
        (*p_640->g_237) = (*p_640->g_237);
        (*l_423) = (void*)0;
        (*p_640->g_43) = (((((p_10 & ((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(0L, (-1L))).xxyx))).wxzwzwyw)).s4600034711517742)), ((VECTOR(int16_t, 8))(l_427.sbd3ae065)).s1530333721151576))).sd) , 0x52750F9503BDCEF8L) != (((l_428 = &p_640->g_166) != (void*)0) < (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 2))(0x0DL, 1L))))))).odd || (FAKE_DIVERGE(p_640->global_2_offset, get_global_id(2), 10) , FAKE_DIVERGE(p_640->global_2_offset, get_global_id(2), 10))))) | ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((**p_640->g_237), 0x1556DF89L, (-1L), 9L)))).y) & (FAKE_DIVERGE(p_640->group_2_offset, get_group_id(2), 10) || (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((l_422.x = (!(safe_div_func_int32_t_s_s(((((((*l_441) = ((p_9 = ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(0x230BL, (safe_mul_func_int8_t_s_s((((VECTOR(int8_t, 2))(l_437.xw)).hi , ((VECTOR(int8_t, 4))(p_640->g_438.s1604)).w), (l_439[3][1] != &p_640->g_152))), 0x487FL, 0x4DA7L)).yxxyyxzx, (int16_t)(((((0x24L || (((*l_440) = &p_7) == (void*)0)) == p_10) && p_640->g_85[0]) & l_427.s3) | 0L)))).s14)).hi, 0x09CEL, 0x57A7L, ((VECTOR(int16_t, 8))(0x2177L)), p_640->g_174, l_422.y, p_640->g_184, 0x58E0L, 0x35F5L)), ((VECTOR(int16_t, 16))((-1L)))))).sd) == p_640->g_438.s1)) ^ l_422.y) || l_422.x) <= (-5L)) , 0x2825FBDCL), l_427.sd)))), 5)), 1))));
    }
    (*p_640->g_43) = (((safe_sub_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s(((l_422.y < (l_477 |= ((((void*)0 == l_447) , (safe_sub_func_int32_t_s_s((+(safe_sub_func_uint16_t_u_u(((*l_428)--), (l_454 = l_427.s7)))), ((((p_640->g_125.y = ((*l_463) = (safe_mul_func_int16_t_s_s(((p_640->g_152 = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_457.s579a3ab49be81abb)).s1ad0)).z) == GROUP_DIVERGE(1, 1)), (((*l_459) = l_458) == ((*l_461) = l_460)))))) == (l_476.y &= ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((l_427.s6 , ((p_640->g_382[8] = (+(GROUP_DIVERGE(1, 1) , ((VECTOR(int32_t, 16))(p_640->g_475.s2445311223245271)).s8))) , (void*)0)) == (void*)0), l_422.x)), p_7)) < (-10L)))) & p_640->g_416[1]) < l_427.s4)))) && p_7))) , l_457.sc), l_422.y)) == (*p_640->g_415)) , 0x27915107CC1C3E08L) <= l_457.sf), l_422.y)) || p_640->g_38) & l_422.x);
    l_478 = &p_7;
    return (*p_640->g_415);
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_19 p_640->g_comm_values p_640->g_43 p_640->g_44 p_640->g_85 p_640->g_83 p_640->g_112 p_640->g_61 p_640->g_152 p_640->g_166 p_640->l_comm_values p_640->g_170 p_640->g_174 p_640->g_38 p_640->g_142 p_640->g_140 p_640->g_188 p_640->g_195 p_640->g_237 p_640->g_282 p_640->g_125 p_640->g_251 p_640->g_316 p_640->g_342 p_640->g_367 p_640->g_184 p_640->g_317 p_640->g_145 p_640->g_217
 * writes: p_640->g_19 p_640->g_38 p_640->g_61 p_640->g_44 p_640->g_108 p_640->g_112 p_640->g_152 p_640->g_166 p_640->g_174 p_640->g_184 p_640->g_188 p_640->g_comm_values p_640->g_195 p_640->g_85 p_640->g_83 p_640->g_43 p_640->g_282 p_640->g_316 p_640->g_170 p_640->g_367 p_640->g_382
 */
uint32_t  func_14(uint16_t  p_15, struct S0 * p_640)
{ /* block id: 6 */
    int32_t *l_22 = (void*)0;
    int32_t l_283 = 0x34F3DEE8L;
    int32_t *l_406 = &p_640->g_19;
    int32_t *l_407 = &p_640->g_112;
    int32_t *l_408 = &p_640->g_112;
    int32_t *l_409 = &p_640->g_174;
    int32_t *l_410 = (void*)0;
    int32_t *l_411[3][3] = {{(void*)0,&p_640->g_112,(void*)0},{(void*)0,&p_640->g_112,(void*)0},{(void*)0,&p_640->g_112,(void*)0}};
    uint8_t l_412 = 249UL;
    int i, j;
    for (p_15 = (-3); (p_15 >= 8); p_15++)
    { /* block id: 9 */
        int32_t *l_18 = &p_640->g_19;
        int8_t *l_37[1];
        int32_t **l_276 = &p_640->g_188;
        int32_t **l_277 = &p_640->g_188;
        int32_t **l_278 = &p_640->g_188;
        int32_t **l_279 = &p_640->g_188;
        int32_t **l_280 = &p_640->g_188;
        int32_t *l_281[6][4][3] = {{{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112}},{{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112}},{{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112}},{{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112}},{{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112}},{{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112},{&p_640->g_112,&p_640->g_174,&p_640->g_112}}};
        uint32_t *l_365 = (void*)0;
        uint32_t *l_366 = (void*)0;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_37[i] = &p_640->g_38;
        if ((p_640->g_367 |= ((p_15 , ((*l_18) &= 8L)) | (p_640->g_170.y = func_20(((l_22 == (func_23((func_26((l_281[4][0][1] = func_30(((safe_sub_func_int8_t_s_s((p_640->g_38 = p_15), (((safe_add_func_int32_t_s_s(p_640->g_comm_values[p_640->tid], 0x70C0F3ADL)) < (p_640->g_43 != l_18)) >= p_15))) , 0x58D81C91L), p_15, p_15, p_15, p_640)), p_640->g_282[0][0][0], l_283, p_640) , p_640->g_152), p_640->g_170.z, p_640) , &l_283)) , p_15), p_640)))))
        { /* block id: 154 */
            uint32_t l_370 = 0x2F59E23EL;
            uint64_t *l_371[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_372 = &p_640->g_19;
            int i;
            (*p_640->g_43) = p_15;
            l_370 ^= (safe_rshift_func_uint16_t_u_u(p_640->g_184, 5));
            p_640->g_282[0][0][0] = ((!(p_15 && (p_640->g_367 &= (*p_640->g_317)))) , l_372);
        }
        else
        { /* block id: 159 */
            uint32_t l_377[3];
            int32_t *l_380 = (void*)0;
            int32_t *l_381 = &p_640->g_382[8];
            int i;
            for (i = 0; i < 3; i++)
                l_377[i] = 0UL;
            if ((((((VECTOR(uint8_t, 2))(0x92L, 255UL)).lo , (p_640->g_145.x , ((*l_381) = ((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((+l_377[1]), ((&p_640->g_188 == &p_640->g_188) , p_15))), p_640->g_174)) < (p_15 | ((((safe_mul_func_uint16_t_u_u(65535UL, (((&l_283 != (*p_640->g_237)) != 2L) && l_377[1]))) == p_15) , p_15) >= 1L)))))) , p_640->g_184) , 0x2B9A405DL))
            { /* block id: 161 */
                uint64_t l_383 = 0UL;
                (*l_277) = ((~((FAKE_DIVERGE(p_640->group_2_offset, get_group_id(2), 10) & p_15) , GROUP_DIVERGE(1, 1))) , &l_283);
                if (p_15)
                    break;
                l_383++;
            }
            else
            { /* block id: 165 */
                return p_640->g_217.s5;
            }
            (**l_277) = (safe_lshift_func_uint8_t_u_s(p_15, 3));
            (**l_280) ^= ((safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u(((safe_add_func_int64_t_s_s((((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(p_640->g_393.xy)).yyxx, ((VECTOR(int8_t, 8))(p_640->g_394.s02123434)).lo))).z == (safe_lshift_func_int16_t_s_u(((safe_mod_func_int64_t_s_s((((*p_640->g_317) != (~((void*)0 != &p_640->g_85[1]))) , (~(((safe_div_func_uint32_t_u_u((&l_22 != &p_640->g_188), ((((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(6L)), p_640->g_142.s2)), p_15)) , 0x19L) & p_15) || 1L))) >= l_377[2]) , 1L))), (*l_18))) , (*l_18)), 11))), p_15)) <= l_377[2]))), 0x1B73FF0630B20F8BL)) , l_377[0]);
        }
        if (p_15)
            continue;
    }
    l_412++;
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_295 p_640->g_43 p_640->g_251 p_640->g_195 p_640->g_142 p_640->g_61 p_640->g_184 p_640->g_44 p_640->g_316 p_640->g_342 p_640->g_217 p_640->g_317 p_640->g_comm_values p_640->g_85 p_640->g_83 p_640->g_112 p_640->g_152 p_640->g_166 p_640->l_comm_values p_640->g_170 p_640->g_174 p_640->g_38 p_640->g_140 p_640->g_188 p_640->g_237
 * writes: p_640->g_44 p_640->g_184 p_640->g_61 p_640->g_316 p_640->g_108 p_640->g_112 p_640->g_152 p_640->g_166 p_640->g_174 p_640->g_38 p_640->g_188 p_640->g_comm_values p_640->g_195 p_640->g_85 p_640->g_83 p_640->g_43
 */
uint32_t  func_20(uint16_t  p_21, struct S0 * p_640)
{ /* block id: 119 */
    uint32_t l_292 = 4294967295UL;
    VECTOR(int16_t, 2) l_296 = (VECTOR(int16_t, 2))(9L, (-1L));
    int8_t *l_308 = (void*)0;
    uint8_t **l_309 = &p_640->g_146;
    uint8_t ***l_310 = &l_309;
    int32_t l_311 = 0x74ED6389L;
    VECTOR(uint16_t, 16) l_333 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xF261L), 0xF261L), 0xF261L, 65535UL, 0xF261L, (VECTOR(uint16_t, 2))(65535UL, 0xF261L), (VECTOR(uint16_t, 2))(65535UL, 0xF261L), 65535UL, 0xF261L, 65535UL, 0xF261L);
    int32_t *l_353 = &l_311;
    int32_t l_358 = 9L;
    VECTOR(int32_t, 2) l_364 = (VECTOR(int32_t, 2))(2L, 1L);
    int i;
    (*p_640->g_43) = (GROUP_DIVERGE(2, 1) , (l_292 <= (safe_mul_func_uint16_t_u_u(p_21, ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_640->g_295.sa7e399c612458e79)).sab5f)))).hi, ((VECTOR(int16_t, 4))(l_296.yxxx)).odd))).hi))));
    if ((l_311 = (p_640->g_251.x < (((safe_mul_func_uint16_t_u_u(p_640->g_195, (l_296.y , p_640->g_142.s6))) <= ((safe_lshift_func_int16_t_s_u(((p_640->g_61 | p_21) , (safe_unary_minus_func_int16_t_s((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(p_21, ((((*l_310) = ((safe_lshift_func_int16_t_s_u(((FAKE_DIVERGE(p_640->local_2_offset, get_local_id(2), 10) | ((void*)0 != l_308)) > l_296.x), l_296.x)) , l_309)) == (void*)0) || p_21))) | l_296.x), p_21))))), 2)) & p_21)) ^ GROUP_DIVERGE(2, 1)))))
    { /* block id: 123 */
        uint64_t ***l_318 = &p_640->g_316;
        uint64_t **l_320 = (void*)0;
        uint64_t ***l_319 = &l_320;
        int32_t l_332 = 0x3F5E9370L;
        int64_t l_343 = (-4L);
        uint64_t l_352 = 0xDA9CD144D20F8E48L;
        for (p_640->g_184 = 16; (p_640->g_184 != 9); p_640->g_184 = safe_sub_func_int64_t_s_s(p_640->g_184, 5))
        { /* block id: 126 */
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_640->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 43)), permutations[(safe_mod_func_uint32_t_u_u(FAKE_DIVERGE(p_640->global_2_offset, get_global_id(2), 10), 10))][(safe_mod_func_uint32_t_u_u(p_640->tid, 43))]));
            (*p_640->g_43) &= 0x665E62D5L;
            (*p_640->g_43) = ((VECTOR(int32_t, 2))(3L, (-5L))).odd;
            for (p_640->g_61 = 0; (p_640->g_61 >= 50); p_640->g_61 = safe_add_func_int8_t_s_s(p_640->g_61, 2))
            { /* block id: 134 */
                return l_296.y;
            }
        }
        (*l_319) = ((*l_318) = (l_311 , p_640->g_316));
        l_353 = func_30((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((+(((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))((((safe_mul_func_uint16_t_u_u((+(+(safe_unary_minus_func_int16_t_s(l_332)))), ((VECTOR(uint16_t, 4))(l_333.sf9e8)).w)) || (1UL >= ((safe_rshift_func_int16_t_s_s((p_21 || p_21), 12)) < (safe_rshift_func_int16_t_s_u((((safe_add_func_uint16_t_u_u((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 16))(0x39D849D0B793383DL, 0UL, 1UL, l_311, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(p_640->g_342.s3023)))).xwzzyywxxzxywzwz)).s94)), ((VECTOR(uint64_t, 4))(18446744073709551608UL, 0x11B82DC54080EC65L, 0xAEED7DAFB3F48BA5L, 0x3D42AAD9C1954BABL)), 18446744073709551615UL, (l_343 | ((safe_sub_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(p_21, (safe_div_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(((l_332 == 0x64DC92E5CFBAB2FBL) | l_343), p_640->g_251.x)) == 0x9A0E57AB407BED13L), FAKE_DIVERGE(p_640->local_2_offset, get_local_id(2), 10))))) == l_352), l_332)) ^ (-9L))), 0xEE13CED05DD11A3AL, 3UL, 18446744073709551615UL, 0UL)), ((VECTOR(uint64_t, 16))(0x956CEE686AA94C0AL)), ((VECTOR(uint64_t, 16))(0xCF92B8A44879D84CL))))).sd1)), FAKE_DIVERGE(p_640->group_1_offset, get_group_id(1), 10), ((VECTOR(uint64_t, 2))(0x97EB6BC0C592D1E1L)), 0x3C80E120C080BE2EL, 0x2AD83A83BA71E108L, 18446744073709551614UL)).s2 , p_640->g_217.s1), l_296.y)) , p_21) > (**p_640->g_316)), 10))))) != 0x17L), 255UL, 0UL, 255UL, 0UL, 255UL, 255UL, ((VECTOR(uint8_t, 2))(0xC8L)), 0x84L, p_21, 255UL, 0xF0L, 255UL, 1UL, 1UL)).s7, 5)) && p_21) > FAKE_DIVERGE(p_640->group_0_offset, get_group_id(0), 10))), l_343)) || p_640->g_342.s5), 6)), 0xEEBFF7D4L)), l_332, l_352, l_332, p_640);
    }
    else
    { /* block id: 141 */
        uint64_t l_359 = 0x071DC19AD11F4823L;
        for (p_640->g_166 = (-27); (p_640->g_166 >= 45); p_640->g_166 = safe_add_func_uint8_t_u_u(p_640->g_166, 2))
        { /* block id: 144 */
            int32_t *l_356 = &p_640->g_174;
            int32_t *l_357[9][3] = {{&l_311,(void*)0,&p_640->g_174},{&l_311,(void*)0,&p_640->g_174},{&l_311,(void*)0,&p_640->g_174},{&l_311,(void*)0,&p_640->g_174},{&l_311,(void*)0,&p_640->g_174},{&l_311,(void*)0,&p_640->g_174},{&l_311,(void*)0,&p_640->g_174},{&l_311,(void*)0,&p_640->g_174},{&l_311,(void*)0,&p_640->g_174}};
            int i, j;
            ++l_359;
        }
    }
    (*p_640->g_43) ^= ((*l_353) |= 2L);
    (*p_640->g_43) = ((VECTOR(int32_t, 8))((safe_add_func_uint16_t_u_u(0xAE20L, (*l_353))), 0L, 0x6EC00EF6L, ((VECTOR(int32_t, 4))(l_364.yxyy)), (-1L))).s6;
    return p_640->g_comm_values[p_640->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_61 p_640->g_125
 * writes: p_640->g_61 p_640->g_282
 */
int16_t  func_23(int64_t  p_24, uint64_t  p_25, struct S0 * p_640)
{ /* block id: 111 */
    int64_t l_290 = (-5L);
    int32_t **l_291 = &p_640->g_282[0][0][0];
    for (p_640->g_61 = (-12); (p_640->g_61 == 10); p_640->g_61++)
    { /* block id: 114 */
        return l_290;
    }
    (*l_291) = (void*)0;
    return p_640->g_125.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_195
 * writes: p_640->g_195 p_640->g_112
 */
int32_t  func_26(int32_t * p_27, int32_t * p_28, uint8_t  p_29, struct S0 * p_640)
{ /* block id: 103 */
    int16_t l_287 = 0x2DB2L;
    for (p_640->g_195 = 0; (p_640->g_195 > 19); p_640->g_195 = safe_add_func_int64_t_s_s(p_640->g_195, 3))
    { /* block id: 106 */
        int16_t l_286 = 0x213EL;
        return l_286;
    }
    (*p_27) = 0x7AA1F7A9L;
    return l_287;
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_comm_values p_640->g_38 p_640->l_comm_values p_640->g_85 p_640->g_43 p_640->g_44 p_640->g_83 p_640->g_112 p_640->g_61 p_640->g_125 p_640->g_140 p_640->g_142 p_640->g_145 p_640->g_146 p_640->g_152 p_640->g_166 p_640->g_170 p_640->g_174 p_640->g_188 p_640->g_195 p_640->g_237
 * writes: p_640->g_61 p_640->g_83 p_640->g_85 p_640->g_44 p_640->g_108 p_640->g_112 p_640->g_152 p_640->g_166 p_640->g_174 p_640->g_38 p_640->g_184 p_640->g_188 p_640->g_comm_values p_640->g_195 p_640->g_43
 */
int32_t * func_30(uint32_t  p_31, uint16_t  p_32, int64_t  p_33, uint64_t  p_34, struct S0 * p_640)
{ /* block id: 12 */
    uint16_t l_157 = 0xFF1DL;
    int32_t l_160 = 1L;
    uint16_t *l_165 = &p_640->g_166;
    uint8_t **l_169[4][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,&p_640->g_146,&p_640->g_146,&p_640->g_146,&p_640->g_146,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_640->g_146,&p_640->g_146,&p_640->g_146,&p_640->g_146,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_640->g_146,&p_640->g_146,&p_640->g_146,&p_640->g_146,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_640->g_146,&p_640->g_146,&p_640->g_146,&p_640->g_146,(void*)0}};
    uint8_t **l_171 = &p_640->g_146;
    VECTOR(int32_t, 2) l_172 = (VECTOR(int32_t, 2))(0x5C2B037CL, 0x47049EDBL);
    int32_t *l_173 = &p_640->g_174;
    uint16_t l_179 = 0x0158L;
    int8_t *l_182 = &p_640->g_38;
    int8_t *l_183 = &p_640->g_184;
    int32_t **l_187[6] = {&l_173,&l_173,&l_173,&l_173,&l_173,&l_173};
    uint64_t *l_189[5][9][3] = {{{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61}},{{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61}},{{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61}},{{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61}},{{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61},{&p_640->g_61,&p_640->g_61,&p_640->g_61}}};
    int64_t *l_192 = &p_640->g_152;
    int64_t *l_193 = (void*)0;
    int64_t *l_194 = &p_640->g_195;
    uint64_t l_216 = 0UL;
    int i, j, k;
    (*l_173) ^= (func_45(&p_640->g_38, p_640) && (safe_mod_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(l_157, 0xCFL)) <= (safe_add_func_uint64_t_u_u((l_160 < ((((l_172.y &= (((((safe_sub_func_uint16_t_u_u((++(*l_165)), ((p_640->g_comm_values[p_640->tid] , p_640->l_comm_values[(safe_mod_func_uint32_t_u_u(p_640->tid, 43))]) > ((l_169[1][1] != (((VECTOR(uint32_t, 2))(p_640->g_170.zw)).hi , l_171)) , 0UL)))) , FAKE_DIVERGE(p_640->local_1_offset, get_local_id(1), 10)) && 0x34A5L) != 0UL) | 0x612F6A2AC77CF8A1L)) <= 0x93L) && FAKE_DIVERGE(p_640->group_0_offset, get_group_id(0), 10)) > l_157)), p_640->g_83))), p_640->g_170.w)));
    (*l_173) = (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((l_179 ^= 251UL), ((((safe_sub_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), ((((*l_183) = ((*l_182) |= p_33)) , &p_640->g_166) == (((safe_rshift_func_uint8_t_u_s(((((((*l_194) = (p_640->g_comm_values[p_640->tid] |= (((*l_192) = (((p_640->g_188 = &l_160) != &p_640->g_174) >= ((GROUP_DIVERGE(2, 1) ^ ((l_189[1][5][2] == (void*)0) && ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0xBC99A05796CAE12EL, 0UL)))).lo)) > (safe_div_func_int32_t_s_s((*p_640->g_43), 0x10197DAFL))))) == p_640->g_142.s1))) , p_640->g_174) || p_640->g_140.sa) && p_32) || FAKE_DIVERGE(p_640->global_2_offset, get_global_id(2), 10)), (*l_173))) , (-6L)) , (void*)0)))) , p_32) > 0L) & p_34))) > GROUP_DIVERGE(0, 1)), p_34));
    (*p_640->g_188) = p_33;
    for (p_640->g_166 = (-30); (p_640->g_166 < 30); p_640->g_166 = safe_add_func_int8_t_s_s(p_640->g_166, 8))
    { /* block id: 52 */
        VECTOR(int8_t, 16) l_205 = (VECTOR(int8_t, 16))(0x7BL, (VECTOR(int8_t, 4))(0x7BL, (VECTOR(int8_t, 2))(0x7BL, (-1L)), (-1L)), (-1L), 0x7BL, (-1L), (VECTOR(int8_t, 2))(0x7BL, (-1L)), (VECTOR(int8_t, 2))(0x7BL, (-1L)), 0x7BL, (-1L), 0x7BL, (-1L));
        VECTOR(uint16_t, 8) l_218 = (VECTOR(uint16_t, 8))(0x63BDL, (VECTOR(uint16_t, 4))(0x63BDL, (VECTOR(uint16_t, 2))(0x63BDL, 0x7505L), 0x7505L), 0x7505L, 0x63BDL, 0x7505L);
        int16_t *l_219 = (void*)0;
        int16_t *l_220 = &p_640->g_85[1];
        int32_t l_221 = (-5L);
        uint16_t *l_222 = &l_157;
        int32_t l_228 = 1L;
        int32_t l_230[8][1][4] = {{{0x390613F1L,7L,0x0617D44FL,7L}},{{0x390613F1L,7L,0x0617D44FL,7L}},{{0x390613F1L,7L,0x0617D44FL,7L}},{{0x390613F1L,7L,0x0617D44FL,7L}},{{0x390613F1L,7L,0x0617D44FL,7L}},{{0x390613F1L,7L,0x0617D44FL,7L}},{{0x390613F1L,7L,0x0617D44FL,7L}},{{0x390613F1L,7L,0x0617D44FL,7L}}};
        VECTOR(int32_t, 16) l_250 = (VECTOR(int32_t, 16))(0x30785065L, (VECTOR(int32_t, 4))(0x30785065L, (VECTOR(int32_t, 2))(0x30785065L, 1L), 1L), 1L, 0x30785065L, 1L, (VECTOR(int32_t, 2))(0x30785065L, 1L), (VECTOR(int32_t, 2))(0x30785065L, 1L), 0x30785065L, 1L, 0x30785065L, 1L);
        volatile int32_t **l_275 = &p_640->g_43;
        int i, j, k;
        if ((safe_add_func_int32_t_s_s(((*l_173) = ((safe_unary_minus_func_uint16_t_u(6UL)) & ((((safe_sub_func_int64_t_s_s(((*l_192) = 0x3DCF168B12120846L), p_640->g_195)) <= (safe_mul_func_int16_t_s_s(l_205.s7, ((safe_lshift_func_int16_t_s_s(p_32, (p_31 & ((safe_div_func_uint8_t_u_u((p_640->g_83 = ((safe_rshift_func_int8_t_s_s((((!(p_31 <= (((*l_222) ^= (safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(l_216, (l_221 |= ((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(p_640->g_217.s0303)).yxyxwxww, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_218.s47)), 1UL, 4UL)).wywywxxw))).s51)).odd >= (((*l_220) = ((&p_640->g_61 != &p_640->g_61) > (*p_640->g_188))) & p_640->g_174)) < 0xE58AL)))), p_33))) != l_205.sb))) ^ p_33) != GROUP_DIVERGE(0, 1)), 0)) , p_33)), (-10L))) , p_31)))) || (*p_640->g_43))))) , l_183) == l_183))), 4294967290UL)))
        { /* block id: 59 */
            uint64_t l_223[8][3] = {{0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L},{0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L},{0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L},{0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L},{0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L},{0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L},{0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L},{0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L,0xD8023FC29F5B1E06L}};
            int32_t l_226 = 1L;
            int16_t l_227 = 0x3A3AL;
            int32_t l_229 = 0L;
            int32_t l_231[9];
            uint8_t l_232 = 6UL;
            int i, j;
            for (i = 0; i < 9; i++)
                l_231[i] = 0x273AA586L;
            if ((*p_640->g_188))
                break;
            l_223[7][1]++;
            (*l_173) ^= 1L;
            l_232--;
        }
        else
        { /* block id: 64 */
            int16_t l_246 = 0L;
            VECTOR(int32_t, 2) l_249 = (VECTOR(int32_t, 2))(0x056212C0L, 0x26EA2F8BL);
            int32_t l_263 = 0x4162AAECL;
            int32_t l_264 = (-3L);
            int32_t l_265 = 1L;
            int32_t l_266 = 1L;
            int32_t l_267 = (-1L);
            int i;
            for (p_640->g_38 = 0; (p_640->g_38 == (-4)); --p_640->g_38)
            { /* block id: 67 */
                (*p_640->g_237) = &p_640->g_44;
                if ((atomic_inc(&p_640->g_atomic_input[76 * get_linear_group_id() + 28]) == 6))
                { /* block id: 70 */
                    int32_t l_239 = 1L;
                    int32_t *l_238 = &l_239;
                    int32_t *l_240 = &l_239;
                    l_240 = l_238;
                    for (l_239 = 0; (l_239 > (-11)); --l_239)
                    { /* block id: 74 */
                        int32_t l_244 = (-5L);
                        int32_t *l_243 = &l_244;
                        int32_t *l_245 = &l_244;
                        l_240 = l_243;
                        l_238 = (void*)0;
                        l_240 = (void*)0;
                        l_240 = l_245;
                    }
                    unsigned int result = 0;
                    result += l_239;
                    atomic_add(&p_640->g_special_values[76 * get_linear_group_id() + 28], result);
                }
                else
                { /* block id: 80 */
                    (1 + 1);
                }
            }
            (*l_173) = (((*l_182) &= l_246) <= (safe_rshift_func_uint8_t_u_u((p_640->g_comm_values[p_640->tid] == (((0UL > (((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(l_249.xy)), 4L)).xwzwwxyy, (int32_t)((VECTOR(int32_t, 2))(1L, 1L)).lo))).s67, ((VECTOR(int32_t, 4))(l_250.s8e97)).hi))).xxyxyxyx)), ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(0x6190955EL, (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_640->g_251.yyzw)).wwwwxzyz)).s0 | ((((safe_mul_func_uint16_t_u_u(((*l_222) = (((p_640->g_142.s8 || (safe_unary_minus_func_int64_t_s(((safe_rshift_func_int16_t_s_s(p_640->g_83, 12)) & (safe_sub_func_uint8_t_u_u(0x33L, (((safe_add_func_int8_t_s_s((l_249.y = 0x7DL), (safe_add_func_int64_t_s_s(((*l_192) |= ((--p_640->g_61) != (((*l_194) = (((safe_rshift_func_int8_t_s_s(p_640->g_195, p_33)) <= l_264) >= p_33)) | 0x761D3EE78ADC5B04L))), GROUP_DIVERGE(0, 1))))) , 0x59FDBCDAL) ^ p_32))))))) & 1UL) >= 0x77C7L)), l_246)) | l_218.s3) | 0xDDEEL) , p_32)), 0x798DF2CFL, (-9L), 0x6F3BF3C0L, ((VECTOR(int32_t, 2))(1L)), (-3L))), (int32_t)(*l_173)))).s25, ((VECTOR(int32_t, 2))(1L))))).xyxx)).zzxxwwzyzzxzxwwz, ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))(0L))))).even))).lo, ((VECTOR(int32_t, 4))(0x436C75DEL))))).z , p_33)) , l_250.s2) , p_33)), 3)));
        }
        for (p_640->g_152 = 0; (p_640->g_152 <= (-2)); --p_640->g_152)
        { /* block id: 94 */
            int32_t *l_274 = &p_640->g_112;
            p_640->g_188 = l_274;
            if (l_230[4][0][3])
                continue;
        }
        (*p_640->g_43) ^= (*p_640->g_188);
        (*l_275) = (*p_640->g_237);
    }
    return &p_640->g_112;
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_comm_values p_640->g_38 p_640->l_comm_values p_640->g_85 p_640->g_43 p_640->g_44 p_640->g_83 p_640->g_112 p_640->g_61 p_640->g_125 p_640->g_140 p_640->g_142 p_640->g_145 p_640->g_146 p_640->g_152
 * writes: p_640->g_61 p_640->g_83 p_640->g_85 p_640->g_44 p_640->g_108 p_640->g_112 p_640->g_152
 */
uint16_t  func_45(int8_t * p_46, struct S0 * p_640)
{ /* block id: 13 */
    uint32_t l_59 = 0UL;
    uint64_t *l_60 = &p_640->g_61;
    VECTOR(int32_t, 4) l_65 = (VECTOR(int32_t, 4))(0x1E1D77F5L, (VECTOR(int32_t, 2))(0x1E1D77F5L, 0x49828A5DL), 0x49828A5DL);
    uint8_t *l_82 = &p_640->g_83;
    int16_t *l_84 = &p_640->g_85[1];
    int8_t *l_87 = (void*)0;
    int8_t **l_86 = &l_87;
    int8_t ***l_114 = &p_640->g_108;
    VECTOR(int16_t, 8) l_130 = (VECTOR(int16_t, 8))(0x50F0L, (VECTOR(int16_t, 4))(0x50F0L, (VECTOR(int16_t, 2))(0x50F0L, 0x199BL), 0x199BL), 0x199BL, 0x50F0L, 0x199BL);
    VECTOR(int32_t, 8) l_137 = (VECTOR(int32_t, 8))(0x05CCE5ABL, (VECTOR(int32_t, 4))(0x05CCE5ABL, (VECTOR(int32_t, 2))(0x05CCE5ABL, 0x2EAC40E4L), 0x2EAC40E4L), 0x2EAC40E4L, 0x05CCE5ABL, 0x2EAC40E4L);
    VECTOR(int32_t, 16) l_139 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0L), 0L), 0L, (-6L), 0L, (VECTOR(int32_t, 2))((-6L), 0L), (VECTOR(int32_t, 2))((-6L), 0L), (-6L), 0L, (-6L), 0L);
    int32_t l_151 = (-9L);
    int i;
    (*l_114) = func_47(((((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((-1L), FAKE_DIVERGE(p_640->group_0_offset, get_group_id(0), 10))), (l_59 || (18446744073709551615UL >= ((*l_60) = 0x312446B8CC39B987L))))) > (0xAEB8EFB6675F713EL > (((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 2))(0xC8ECEA67F41B6ADDL, 0x81DC493A780915D2L)).yyyy, (uint64_t)(((safe_rshift_func_uint8_t_u_u(((safe_unary_minus_func_uint64_t_u(((l_65.w = ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_65.zxyzyxzwzyzzxwxx)).sf59f)).wyywyzxx, ((VECTOR(int32_t, 2))(1L, 1L)).yyxxxyyy))).s1) < (safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((((*l_84) &= (((safe_add_func_uint8_t_u_u(((*l_82) = ((3L > GROUP_DIVERGE(1, 1)) < ((l_59 <= 0x7BL) & (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((p_640->g_comm_values[p_640->tid] < (*p_46)), p_640->g_comm_values[p_640->tid])) , 0x43L), 0x31L)), l_59)), FAKE_DIVERGE(p_640->local_1_offset, get_local_id(1), 10))), p_640->l_comm_values[(safe_mod_func_uint32_t_u_u(p_640->tid, 43))]))))), p_640->g_38)) != p_640->g_38) > 0UL)) , 0x72L), 1UL)) != l_59), 0x7EL))))) , 0x4AL), p_640->g_comm_values[p_640->tid])) ^ l_59) , l_65.y)))).w & 0UL))) & p_640->g_comm_values[p_640->tid]) , l_59), l_59, l_86, l_59, l_59, p_640);
    for (p_640->g_61 = 0; (p_640->g_61 >= 22); ++p_640->g_61)
    { /* block id: 29 */
        int32_t *l_117[1];
        int32_t **l_118 = &l_117[0];
        VECTOR(uint16_t, 8) l_126 = (VECTOR(uint16_t, 8))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0x3C03L), 0x3C03L), 0x3C03L, 7UL, 0x3C03L);
        uint8_t *l_127[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(int32_t, 2) l_133 = (VECTOR(int32_t, 2))(0x6113701FL, 1L);
        VECTOR(uint8_t, 8) l_134 = (VECTOR(uint8_t, 8))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0x4DL), 0x4DL), 0x4DL, 2UL, 0x4DL);
        VECTOR(int32_t, 8) l_138 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x55B95D3AL), 0x55B95D3AL), 0x55B95D3AL, 0L, 0x55B95D3AL);
        VECTOR(int32_t, 4) l_141 = (VECTOR(int32_t, 4))(0x4EB6A9A7L, (VECTOR(int32_t, 2))(0x4EB6A9A7L, 0x1E6D6167L), 0x1E6D6167L);
        int i;
        for (i = 0; i < 1; i++)
            l_117[i] = (void*)0;
        (*l_118) = l_117[0];
        p_640->g_152 ^= (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 4))(0UL, ((safe_div_func_uint8_t_u_u((l_65.w = ((*l_82) = (l_65.y < ((*l_84) ^= (safe_add_func_int16_t_s_s((p_640->g_83 , (l_65.z >= ((VECTOR(uint8_t, 4))(p_640->g_125.xyxy)).y)), ((VECTOR(uint16_t, 2))(l_126.s22)).hi)))))), (safe_div_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_130.s5312)).w, (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(4UL, 1UL, 6UL, ((VECTOR(uint8_t, 4))(255UL, ((~((VECTOR(int32_t, 2))(l_133.yy)).even) , 0xF3L), 0x0DL, 0xACL)), 0xE9L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_134.s0231214056500320)).even)).s33)), 0x18L, (safe_rshift_func_int8_t_s_s(((l_151 &= ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_137.s05)), (-2L), (-1L))).yyzzxwwy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_138.s26300143)).even)).xxywxyxw))).s2017415237003235)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_139.sfd70)).zzwxxzzxzywzzywy))))).s2562))).hi, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_640->g_140.sef3d604849eaacea)).s8682)).xxxzzxxy, ((VECTOR(int32_t, 2))(0x5B709881L, (-5L))).yxxyyyyy, ((VECTOR(int32_t, 8))(l_141.wyyzyzww))))).s01))), 0x39B2B9B8L, 0x6D89A753L)).xxzxwwzywyxxxwwz, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(p_640->g_142.s42)).yyyxxyxyxyxyxyyy, ((VECTOR(int32_t, 4))((-3L), ((safe_rshift_func_int16_t_s_s((((FAKE_DIVERGE(p_640->local_2_offset, get_local_id(2), 10) <= ((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 2))(p_640->g_145.xy)).yxxyyxyy, ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 16))(0x64176206L, (-6L), (((p_640->g_146 != l_127[0]) || ((safe_rshift_func_uint8_t_u_u(p_640->g_145.y, 6)) >= (safe_mod_func_int8_t_s_s(l_130.s4, p_640->g_112)))) <= l_137.s7), ((VECTOR(int32_t, 4))(1L)), 0x0F0CF813L, (-10L), p_640->g_125.y, 0x64A6F612L, p_640->l_comm_values[(safe_mod_func_uint32_t_u_u(p_640->tid, 43))], ((VECTOR(int32_t, 4))(0L)))).sb9, ((VECTOR(uint32_t, 2))(1UL))))).yxyyxxxx))).s0) & 0x56FD9218137C7680L) , p_640->g_142.s8), l_130.s4)) && 0L), 0x04A610A4L, 1L)).xxyxyxxwwyzwxwxz))).lo)).s2100576377011122)), ((VECTOR(int32_t, 16))(0x6CE155F7L))))).s6bb7)).even, ((VECTOR(int32_t, 2))(0x0F8F3257L))))).lo) | FAKE_DIVERGE(p_640->group_0_offset, get_group_id(0), 10)), 3)), l_137.s7, l_139.s7, 249UL, 0x65L)).sd, l_130.s7)))))) , FAKE_DIVERGE(p_640->group_0_offset, get_group_id(0), 10)), 0x44E9L, 1UL)).wxzywzzx, ((VECTOR(uint16_t, 8))(6UL))))).s6606456255657312)).sfb)).even, p_640->g_61));
    }
    return l_139.s9;
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_43 p_640->g_44 p_640->g_85 p_640->g_83 p_640->g_112
 * writes: p_640->g_44 p_640->g_108 p_640->g_112
 */
int8_t ** func_47(int32_t  p_48, int64_t  p_49, int8_t ** p_50, uint32_t  p_51, int32_t  p_52, struct S0 * p_640)
{ /* block id: 18 */
    uint8_t *l_89 = &p_640->g_83;
    uint8_t **l_88 = &l_89;
    int32_t l_96 = 0L;
    int8_t *l_107 = &p_640->g_38;
    int8_t **l_106[5][3] = {{&l_107,&l_107,&l_107},{&l_107,&l_107,&l_107},{&l_107,&l_107,&l_107},{&l_107,&l_107,&l_107},{&l_107,&l_107,&l_107}};
    int8_t ***l_105[5][10] = {{&l_106[2][1],&l_106[4][0],&l_106[4][0],&l_106[2][1],&l_106[4][0],&l_106[1][2],&l_106[4][0],&l_106[4][0],&l_106[1][2],&l_106[4][0]},{&l_106[2][1],&l_106[4][0],&l_106[4][0],&l_106[2][1],&l_106[4][0],&l_106[1][2],&l_106[4][0],&l_106[4][0],&l_106[1][2],&l_106[4][0]},{&l_106[2][1],&l_106[4][0],&l_106[4][0],&l_106[2][1],&l_106[4][0],&l_106[1][2],&l_106[4][0],&l_106[4][0],&l_106[1][2],&l_106[4][0]},{&l_106[2][1],&l_106[4][0],&l_106[4][0],&l_106[2][1],&l_106[4][0],&l_106[1][2],&l_106[4][0],&l_106[4][0],&l_106[1][2],&l_106[4][0]},{&l_106[2][1],&l_106[4][0],&l_106[4][0],&l_106[2][1],&l_106[4][0],&l_106[1][2],&l_106[4][0],&l_106[4][0],&l_106[1][2],&l_106[4][0]}};
    int32_t l_109 = 0x01A7A66DL;
    int32_t *l_110 = &l_96;
    int32_t *l_111 = &p_640->g_112;
    int8_t **l_113 = (void*)0;
    int i, j;
    (*p_640->g_43) = (&p_640->g_83 == ((*l_88) = (void*)0));
    (*l_111) ^= ((*l_110) = (safe_add_func_int16_t_s_s((0x3C3EL > ((+(*p_640->g_43)) < ((safe_div_func_uint64_t_u_u((l_96 & (safe_mul_func_uint16_t_u_u((l_109 = (l_96 || ((((p_48 <= (safe_lshift_func_uint8_t_u_u(0xDEL, GROUP_DIVERGE(0, 1)))) != (safe_sub_func_uint32_t_u_u((((p_50 != (p_640->g_108 = ((((safe_mod_func_int32_t_s_s(l_96, ((((((0x414AL >= p_52) != 0x6EF0L) || l_96) & 0UL) & FAKE_DIVERGE(p_640->group_0_offset, get_group_id(0), 10)) , l_96))) , 0x0FL) != l_96) , (void*)0))) , FAKE_DIVERGE(p_640->global_0_offset, get_global_id(0), 10)) , 0x85852762L), p_51))) & l_109) != p_48))), p_640->g_85[1]))), 8L)) == l_96))), p_640->g_83)));
    return l_113;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[76];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 76; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[76];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 76; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[43];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 43; i++)
            l_comm_values[i] = 1;
    struct S0 c_641;
    struct S0* p_640 = &c_641;
    struct S0 c_642 = {
        (VECTOR(int32_t, 2))(0L, 6L), // p_640->g_11
        0x4A0BECC3L, // p_640->g_19
        8L, // p_640->g_38
        0x2755584EL, // p_640->g_44
        &p_640->g_44, // p_640->g_43
        0x6F594A39B7B3FA87L, // p_640->g_61
        255UL, // p_640->g_83
        {(-10L),(-10L)}, // p_640->g_85
        (void*)0, // p_640->g_108
        (-1L), // p_640->g_112
        (VECTOR(uint8_t, 2))(252UL, 248UL), // p_640->g_125
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L)), // p_640->g_140
        (VECTOR(int32_t, 16))(0x3B90B52BL, (VECTOR(int32_t, 4))(0x3B90B52BL, (VECTOR(int32_t, 2))(0x3B90B52BL, 0L), 0L), 0L, 0x3B90B52BL, 0L, (VECTOR(int32_t, 2))(0x3B90B52BL, 0L), (VECTOR(int32_t, 2))(0x3B90B52BL, 0L), 0x3B90B52BL, 0L, 0x3B90B52BL, 0L), // p_640->g_142
        (VECTOR(int64_t, 2))(1L, 1L), // p_640->g_145
        (void*)0, // p_640->g_146
        0x7B8A6804FA82FB5AL, // p_640->g_152
        65532UL, // p_640->g_166
        (VECTOR(uint32_t, 4))(0x88931105L, (VECTOR(uint32_t, 2))(0x88931105L, 0xB35E963BL), 0xB35E963BL), // p_640->g_170
        1L, // p_640->g_174
        0x54L, // p_640->g_184
        &p_640->g_174, // p_640->g_188
        1L, // p_640->g_195
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x7330L), 0x7330L), 0x7330L, 1UL, 0x7330L), // p_640->g_217
        &p_640->g_43, // p_640->g_237
        (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 4294967292UL), 4294967292UL), // p_640->g_251
        {{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}}}, // p_640->g_282
        (VECTOR(int16_t, 16))(0x7D9DL, (VECTOR(int16_t, 4))(0x7D9DL, (VECTOR(int16_t, 2))(0x7D9DL, (-3L)), (-3L)), (-3L), 0x7D9DL, (-3L), (VECTOR(int16_t, 2))(0x7D9DL, (-3L)), (VECTOR(int16_t, 2))(0x7D9DL, (-3L)), 0x7D9DL, (-3L), 0x7D9DL, (-3L)), // p_640->g_295
        &p_640->g_61, // p_640->g_317
        &p_640->g_317, // p_640->g_316
        (VECTOR(uint64_t, 16))(0x597F03475F8472ADL, (VECTOR(uint64_t, 4))(0x597F03475F8472ADL, (VECTOR(uint64_t, 2))(0x597F03475F8472ADL, 0x4567FAADBBC287C2L), 0x4567FAADBBC287C2L), 0x4567FAADBBC287C2L, 0x597F03475F8472ADL, 0x4567FAADBBC287C2L, (VECTOR(uint64_t, 2))(0x597F03475F8472ADL, 0x4567FAADBBC287C2L), (VECTOR(uint64_t, 2))(0x597F03475F8472ADL, 0x4567FAADBBC287C2L), 0x597F03475F8472ADL, 0x4567FAADBBC287C2L, 0x597F03475F8472ADL, 0x4567FAADBBC287C2L), // p_640->g_342
        0xF1AB05D3E4198391L, // p_640->g_367
        {0x4F48E3EBL,0x4F48E3EBL,0x4F48E3EBL,0x4F48E3EBL,0x4F48E3EBL,0x4F48E3EBL,0x4F48E3EBL,0x4F48E3EBL,0x4F48E3EBL}, // p_640->g_382
        (VECTOR(int8_t, 2))(0L, 0L), // p_640->g_393
        (VECTOR(int8_t, 8))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), (-4L)), (-4L)), (-4L), (-6L), (-4L)), // p_640->g_394
        {0xDD50L,0xDD50L,0xDD50L,0xDD50L}, // p_640->g_416
        &p_640->g_416[3], // p_640->g_415
        (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x98F301BB163F8E2AL), 0x98F301BB163F8E2AL), // p_640->g_418
        (void*)0, // p_640->g_421
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x2CL), 0x2CL), 0x2CL, 0L, 0x2CL), // p_640->g_438
        (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-2L)), (-2L)), (-2L), 8L, (-2L)), // p_640->g_475
        0xF5DA1053L, // p_640->g_502
        (VECTOR(int32_t, 8))(0x73026D93L, (VECTOR(int32_t, 4))(0x73026D93L, (VECTOR(int32_t, 2))(0x73026D93L, 0x441CE5B0L), 0x441CE5B0L), 0x441CE5B0L, 0x73026D93L, 0x441CE5B0L), // p_640->g_507
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-6L)), (-6L)), (-6L), 1L, (-6L), (VECTOR(int32_t, 2))(1L, (-6L)), (VECTOR(int32_t, 2))(1L, (-6L)), 1L, (-6L), 1L, (-6L)), // p_640->g_508
        (VECTOR(int32_t, 8))(0x7D3F2D15L, (VECTOR(int32_t, 4))(0x7D3F2D15L, (VECTOR(int32_t, 2))(0x7D3F2D15L, (-1L)), (-1L)), (-1L), 0x7D3F2D15L, (-1L)), // p_640->g_509
        0x4F060E531D99F27BL, // p_640->g_516
        (VECTOR(uint16_t, 8))(0xA639L, (VECTOR(uint16_t, 4))(0xA639L, (VECTOR(uint16_t, 2))(0xA639L, 0UL), 0UL), 0UL, 0xA639L, 0UL), // p_640->g_522
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L, (VECTOR(int32_t, 2))((-1L), 2L), (VECTOR(int32_t, 2))((-1L), 2L), (-1L), 2L, (-1L), 2L), // p_640->g_536
        (VECTOR(int32_t, 2))(0x2BA4CD95L, (-7L)), // p_640->g_537
        (VECTOR(int64_t, 16))(0x27ED9374FF80EC02L, (VECTOR(int64_t, 4))(0x27ED9374FF80EC02L, (VECTOR(int64_t, 2))(0x27ED9374FF80EC02L, 1L), 1L), 1L, 0x27ED9374FF80EC02L, 1L, (VECTOR(int64_t, 2))(0x27ED9374FF80EC02L, 1L), (VECTOR(int64_t, 2))(0x27ED9374FF80EC02L, 1L), 0x27ED9374FF80EC02L, 1L, 0x27ED9374FF80EC02L, 1L), // p_640->g_539
        (VECTOR(uint32_t, 2))(4294967295UL, 0x44139F96L), // p_640->g_540
        (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x750F215AL), 0x750F215AL), 0x750F215AL, (-4L), 0x750F215AL, (VECTOR(int32_t, 2))((-4L), 0x750F215AL), (VECTOR(int32_t, 2))((-4L), 0x750F215AL), (-4L), 0x750F215AL, (-4L), 0x750F215AL), // p_640->g_562
        1UL, // p_640->g_581
        (void*)0, // p_640->g_600
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-2L)), (-2L)), // p_640->g_609
        0x564CD7B9L, // p_640->g_614
        (VECTOR(int32_t, 2))(0x624CAD22L, (-10L)), // p_640->g_617
        (VECTOR(int32_t, 4))(0x558C7370L, (VECTOR(int32_t, 2))(0x558C7370L, 0x6EC7148EL), 0x6EC7148EL), // p_640->g_619
        (VECTOR(int32_t, 2))(0x0D56D5ABL, (-1L)), // p_640->g_621
        {(void*)0,(void*)0,(void*)0}, // p_640->g_630
        0, // p_640->v_collective
        sequence_input[get_global_id(0)], // p_640->global_0_offset
        sequence_input[get_global_id(1)], // p_640->global_1_offset
        sequence_input[get_global_id(2)], // p_640->global_2_offset
        sequence_input[get_local_id(0)], // p_640->local_0_offset
        sequence_input[get_local_id(1)], // p_640->local_1_offset
        sequence_input[get_local_id(2)], // p_640->local_2_offset
        sequence_input[get_group_id(0)], // p_640->group_0_offset
        sequence_input[get_group_id(1)], // p_640->group_1_offset
        sequence_input[get_group_id(2)], // p_640->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 43)), permutations[0][get_linear_local_id()])), // p_640->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_641 = c_642;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_640);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_640->g_11.x, "p_640->g_11.x", print_hash_value);
    transparent_crc(p_640->g_11.y, "p_640->g_11.y", print_hash_value);
    transparent_crc(p_640->g_19, "p_640->g_19", print_hash_value);
    transparent_crc(p_640->g_38, "p_640->g_38", print_hash_value);
    transparent_crc(p_640->g_44, "p_640->g_44", print_hash_value);
    transparent_crc(p_640->g_61, "p_640->g_61", print_hash_value);
    transparent_crc(p_640->g_83, "p_640->g_83", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_640->g_85[i], "p_640->g_85[i]", print_hash_value);

    }
    transparent_crc(p_640->g_112, "p_640->g_112", print_hash_value);
    transparent_crc(p_640->g_125.x, "p_640->g_125.x", print_hash_value);
    transparent_crc(p_640->g_125.y, "p_640->g_125.y", print_hash_value);
    transparent_crc(p_640->g_140.s0, "p_640->g_140.s0", print_hash_value);
    transparent_crc(p_640->g_140.s1, "p_640->g_140.s1", print_hash_value);
    transparent_crc(p_640->g_140.s2, "p_640->g_140.s2", print_hash_value);
    transparent_crc(p_640->g_140.s3, "p_640->g_140.s3", print_hash_value);
    transparent_crc(p_640->g_140.s4, "p_640->g_140.s4", print_hash_value);
    transparent_crc(p_640->g_140.s5, "p_640->g_140.s5", print_hash_value);
    transparent_crc(p_640->g_140.s6, "p_640->g_140.s6", print_hash_value);
    transparent_crc(p_640->g_140.s7, "p_640->g_140.s7", print_hash_value);
    transparent_crc(p_640->g_140.s8, "p_640->g_140.s8", print_hash_value);
    transparent_crc(p_640->g_140.s9, "p_640->g_140.s9", print_hash_value);
    transparent_crc(p_640->g_140.sa, "p_640->g_140.sa", print_hash_value);
    transparent_crc(p_640->g_140.sb, "p_640->g_140.sb", print_hash_value);
    transparent_crc(p_640->g_140.sc, "p_640->g_140.sc", print_hash_value);
    transparent_crc(p_640->g_140.sd, "p_640->g_140.sd", print_hash_value);
    transparent_crc(p_640->g_140.se, "p_640->g_140.se", print_hash_value);
    transparent_crc(p_640->g_140.sf, "p_640->g_140.sf", print_hash_value);
    transparent_crc(p_640->g_142.s0, "p_640->g_142.s0", print_hash_value);
    transparent_crc(p_640->g_142.s1, "p_640->g_142.s1", print_hash_value);
    transparent_crc(p_640->g_142.s2, "p_640->g_142.s2", print_hash_value);
    transparent_crc(p_640->g_142.s3, "p_640->g_142.s3", print_hash_value);
    transparent_crc(p_640->g_142.s4, "p_640->g_142.s4", print_hash_value);
    transparent_crc(p_640->g_142.s5, "p_640->g_142.s5", print_hash_value);
    transparent_crc(p_640->g_142.s6, "p_640->g_142.s6", print_hash_value);
    transparent_crc(p_640->g_142.s7, "p_640->g_142.s7", print_hash_value);
    transparent_crc(p_640->g_142.s8, "p_640->g_142.s8", print_hash_value);
    transparent_crc(p_640->g_142.s9, "p_640->g_142.s9", print_hash_value);
    transparent_crc(p_640->g_142.sa, "p_640->g_142.sa", print_hash_value);
    transparent_crc(p_640->g_142.sb, "p_640->g_142.sb", print_hash_value);
    transparent_crc(p_640->g_142.sc, "p_640->g_142.sc", print_hash_value);
    transparent_crc(p_640->g_142.sd, "p_640->g_142.sd", print_hash_value);
    transparent_crc(p_640->g_142.se, "p_640->g_142.se", print_hash_value);
    transparent_crc(p_640->g_142.sf, "p_640->g_142.sf", print_hash_value);
    transparent_crc(p_640->g_145.x, "p_640->g_145.x", print_hash_value);
    transparent_crc(p_640->g_145.y, "p_640->g_145.y", print_hash_value);
    transparent_crc(p_640->g_152, "p_640->g_152", print_hash_value);
    transparent_crc(p_640->g_166, "p_640->g_166", print_hash_value);
    transparent_crc(p_640->g_170.x, "p_640->g_170.x", print_hash_value);
    transparent_crc(p_640->g_170.y, "p_640->g_170.y", print_hash_value);
    transparent_crc(p_640->g_170.z, "p_640->g_170.z", print_hash_value);
    transparent_crc(p_640->g_170.w, "p_640->g_170.w", print_hash_value);
    transparent_crc(p_640->g_174, "p_640->g_174", print_hash_value);
    transparent_crc(p_640->g_184, "p_640->g_184", print_hash_value);
    transparent_crc(p_640->g_195, "p_640->g_195", print_hash_value);
    transparent_crc(p_640->g_217.s0, "p_640->g_217.s0", print_hash_value);
    transparent_crc(p_640->g_217.s1, "p_640->g_217.s1", print_hash_value);
    transparent_crc(p_640->g_217.s2, "p_640->g_217.s2", print_hash_value);
    transparent_crc(p_640->g_217.s3, "p_640->g_217.s3", print_hash_value);
    transparent_crc(p_640->g_217.s4, "p_640->g_217.s4", print_hash_value);
    transparent_crc(p_640->g_217.s5, "p_640->g_217.s5", print_hash_value);
    transparent_crc(p_640->g_217.s6, "p_640->g_217.s6", print_hash_value);
    transparent_crc(p_640->g_217.s7, "p_640->g_217.s7", print_hash_value);
    transparent_crc(p_640->g_251.x, "p_640->g_251.x", print_hash_value);
    transparent_crc(p_640->g_251.y, "p_640->g_251.y", print_hash_value);
    transparent_crc(p_640->g_251.z, "p_640->g_251.z", print_hash_value);
    transparent_crc(p_640->g_251.w, "p_640->g_251.w", print_hash_value);
    transparent_crc(p_640->g_295.s0, "p_640->g_295.s0", print_hash_value);
    transparent_crc(p_640->g_295.s1, "p_640->g_295.s1", print_hash_value);
    transparent_crc(p_640->g_295.s2, "p_640->g_295.s2", print_hash_value);
    transparent_crc(p_640->g_295.s3, "p_640->g_295.s3", print_hash_value);
    transparent_crc(p_640->g_295.s4, "p_640->g_295.s4", print_hash_value);
    transparent_crc(p_640->g_295.s5, "p_640->g_295.s5", print_hash_value);
    transparent_crc(p_640->g_295.s6, "p_640->g_295.s6", print_hash_value);
    transparent_crc(p_640->g_295.s7, "p_640->g_295.s7", print_hash_value);
    transparent_crc(p_640->g_295.s8, "p_640->g_295.s8", print_hash_value);
    transparent_crc(p_640->g_295.s9, "p_640->g_295.s9", print_hash_value);
    transparent_crc(p_640->g_295.sa, "p_640->g_295.sa", print_hash_value);
    transparent_crc(p_640->g_295.sb, "p_640->g_295.sb", print_hash_value);
    transparent_crc(p_640->g_295.sc, "p_640->g_295.sc", print_hash_value);
    transparent_crc(p_640->g_295.sd, "p_640->g_295.sd", print_hash_value);
    transparent_crc(p_640->g_295.se, "p_640->g_295.se", print_hash_value);
    transparent_crc(p_640->g_295.sf, "p_640->g_295.sf", print_hash_value);
    transparent_crc(p_640->g_342.s0, "p_640->g_342.s0", print_hash_value);
    transparent_crc(p_640->g_342.s1, "p_640->g_342.s1", print_hash_value);
    transparent_crc(p_640->g_342.s2, "p_640->g_342.s2", print_hash_value);
    transparent_crc(p_640->g_342.s3, "p_640->g_342.s3", print_hash_value);
    transparent_crc(p_640->g_342.s4, "p_640->g_342.s4", print_hash_value);
    transparent_crc(p_640->g_342.s5, "p_640->g_342.s5", print_hash_value);
    transparent_crc(p_640->g_342.s6, "p_640->g_342.s6", print_hash_value);
    transparent_crc(p_640->g_342.s7, "p_640->g_342.s7", print_hash_value);
    transparent_crc(p_640->g_342.s8, "p_640->g_342.s8", print_hash_value);
    transparent_crc(p_640->g_342.s9, "p_640->g_342.s9", print_hash_value);
    transparent_crc(p_640->g_342.sa, "p_640->g_342.sa", print_hash_value);
    transparent_crc(p_640->g_342.sb, "p_640->g_342.sb", print_hash_value);
    transparent_crc(p_640->g_342.sc, "p_640->g_342.sc", print_hash_value);
    transparent_crc(p_640->g_342.sd, "p_640->g_342.sd", print_hash_value);
    transparent_crc(p_640->g_342.se, "p_640->g_342.se", print_hash_value);
    transparent_crc(p_640->g_342.sf, "p_640->g_342.sf", print_hash_value);
    transparent_crc(p_640->g_367, "p_640->g_367", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_640->g_382[i], "p_640->g_382[i]", print_hash_value);

    }
    transparent_crc(p_640->g_393.x, "p_640->g_393.x", print_hash_value);
    transparent_crc(p_640->g_393.y, "p_640->g_393.y", print_hash_value);
    transparent_crc(p_640->g_394.s0, "p_640->g_394.s0", print_hash_value);
    transparent_crc(p_640->g_394.s1, "p_640->g_394.s1", print_hash_value);
    transparent_crc(p_640->g_394.s2, "p_640->g_394.s2", print_hash_value);
    transparent_crc(p_640->g_394.s3, "p_640->g_394.s3", print_hash_value);
    transparent_crc(p_640->g_394.s4, "p_640->g_394.s4", print_hash_value);
    transparent_crc(p_640->g_394.s5, "p_640->g_394.s5", print_hash_value);
    transparent_crc(p_640->g_394.s6, "p_640->g_394.s6", print_hash_value);
    transparent_crc(p_640->g_394.s7, "p_640->g_394.s7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_640->g_416[i], "p_640->g_416[i]", print_hash_value);

    }
    transparent_crc(p_640->g_418.x, "p_640->g_418.x", print_hash_value);
    transparent_crc(p_640->g_418.y, "p_640->g_418.y", print_hash_value);
    transparent_crc(p_640->g_418.z, "p_640->g_418.z", print_hash_value);
    transparent_crc(p_640->g_418.w, "p_640->g_418.w", print_hash_value);
    transparent_crc(p_640->g_438.s0, "p_640->g_438.s0", print_hash_value);
    transparent_crc(p_640->g_438.s1, "p_640->g_438.s1", print_hash_value);
    transparent_crc(p_640->g_438.s2, "p_640->g_438.s2", print_hash_value);
    transparent_crc(p_640->g_438.s3, "p_640->g_438.s3", print_hash_value);
    transparent_crc(p_640->g_438.s4, "p_640->g_438.s4", print_hash_value);
    transparent_crc(p_640->g_438.s5, "p_640->g_438.s5", print_hash_value);
    transparent_crc(p_640->g_438.s6, "p_640->g_438.s6", print_hash_value);
    transparent_crc(p_640->g_438.s7, "p_640->g_438.s7", print_hash_value);
    transparent_crc(p_640->g_475.s0, "p_640->g_475.s0", print_hash_value);
    transparent_crc(p_640->g_475.s1, "p_640->g_475.s1", print_hash_value);
    transparent_crc(p_640->g_475.s2, "p_640->g_475.s2", print_hash_value);
    transparent_crc(p_640->g_475.s3, "p_640->g_475.s3", print_hash_value);
    transparent_crc(p_640->g_475.s4, "p_640->g_475.s4", print_hash_value);
    transparent_crc(p_640->g_475.s5, "p_640->g_475.s5", print_hash_value);
    transparent_crc(p_640->g_475.s6, "p_640->g_475.s6", print_hash_value);
    transparent_crc(p_640->g_475.s7, "p_640->g_475.s7", print_hash_value);
    transparent_crc(p_640->g_502, "p_640->g_502", print_hash_value);
    transparent_crc(p_640->g_507.s0, "p_640->g_507.s0", print_hash_value);
    transparent_crc(p_640->g_507.s1, "p_640->g_507.s1", print_hash_value);
    transparent_crc(p_640->g_507.s2, "p_640->g_507.s2", print_hash_value);
    transparent_crc(p_640->g_507.s3, "p_640->g_507.s3", print_hash_value);
    transparent_crc(p_640->g_507.s4, "p_640->g_507.s4", print_hash_value);
    transparent_crc(p_640->g_507.s5, "p_640->g_507.s5", print_hash_value);
    transparent_crc(p_640->g_507.s6, "p_640->g_507.s6", print_hash_value);
    transparent_crc(p_640->g_507.s7, "p_640->g_507.s7", print_hash_value);
    transparent_crc(p_640->g_508.s0, "p_640->g_508.s0", print_hash_value);
    transparent_crc(p_640->g_508.s1, "p_640->g_508.s1", print_hash_value);
    transparent_crc(p_640->g_508.s2, "p_640->g_508.s2", print_hash_value);
    transparent_crc(p_640->g_508.s3, "p_640->g_508.s3", print_hash_value);
    transparent_crc(p_640->g_508.s4, "p_640->g_508.s4", print_hash_value);
    transparent_crc(p_640->g_508.s5, "p_640->g_508.s5", print_hash_value);
    transparent_crc(p_640->g_508.s6, "p_640->g_508.s6", print_hash_value);
    transparent_crc(p_640->g_508.s7, "p_640->g_508.s7", print_hash_value);
    transparent_crc(p_640->g_508.s8, "p_640->g_508.s8", print_hash_value);
    transparent_crc(p_640->g_508.s9, "p_640->g_508.s9", print_hash_value);
    transparent_crc(p_640->g_508.sa, "p_640->g_508.sa", print_hash_value);
    transparent_crc(p_640->g_508.sb, "p_640->g_508.sb", print_hash_value);
    transparent_crc(p_640->g_508.sc, "p_640->g_508.sc", print_hash_value);
    transparent_crc(p_640->g_508.sd, "p_640->g_508.sd", print_hash_value);
    transparent_crc(p_640->g_508.se, "p_640->g_508.se", print_hash_value);
    transparent_crc(p_640->g_508.sf, "p_640->g_508.sf", print_hash_value);
    transparent_crc(p_640->g_509.s0, "p_640->g_509.s0", print_hash_value);
    transparent_crc(p_640->g_509.s1, "p_640->g_509.s1", print_hash_value);
    transparent_crc(p_640->g_509.s2, "p_640->g_509.s2", print_hash_value);
    transparent_crc(p_640->g_509.s3, "p_640->g_509.s3", print_hash_value);
    transparent_crc(p_640->g_509.s4, "p_640->g_509.s4", print_hash_value);
    transparent_crc(p_640->g_509.s5, "p_640->g_509.s5", print_hash_value);
    transparent_crc(p_640->g_509.s6, "p_640->g_509.s6", print_hash_value);
    transparent_crc(p_640->g_509.s7, "p_640->g_509.s7", print_hash_value);
    transparent_crc(p_640->g_516, "p_640->g_516", print_hash_value);
    transparent_crc(p_640->g_522.s0, "p_640->g_522.s0", print_hash_value);
    transparent_crc(p_640->g_522.s1, "p_640->g_522.s1", print_hash_value);
    transparent_crc(p_640->g_522.s2, "p_640->g_522.s2", print_hash_value);
    transparent_crc(p_640->g_522.s3, "p_640->g_522.s3", print_hash_value);
    transparent_crc(p_640->g_522.s4, "p_640->g_522.s4", print_hash_value);
    transparent_crc(p_640->g_522.s5, "p_640->g_522.s5", print_hash_value);
    transparent_crc(p_640->g_522.s6, "p_640->g_522.s6", print_hash_value);
    transparent_crc(p_640->g_522.s7, "p_640->g_522.s7", print_hash_value);
    transparent_crc(p_640->g_536.s0, "p_640->g_536.s0", print_hash_value);
    transparent_crc(p_640->g_536.s1, "p_640->g_536.s1", print_hash_value);
    transparent_crc(p_640->g_536.s2, "p_640->g_536.s2", print_hash_value);
    transparent_crc(p_640->g_536.s3, "p_640->g_536.s3", print_hash_value);
    transparent_crc(p_640->g_536.s4, "p_640->g_536.s4", print_hash_value);
    transparent_crc(p_640->g_536.s5, "p_640->g_536.s5", print_hash_value);
    transparent_crc(p_640->g_536.s6, "p_640->g_536.s6", print_hash_value);
    transparent_crc(p_640->g_536.s7, "p_640->g_536.s7", print_hash_value);
    transparent_crc(p_640->g_536.s8, "p_640->g_536.s8", print_hash_value);
    transparent_crc(p_640->g_536.s9, "p_640->g_536.s9", print_hash_value);
    transparent_crc(p_640->g_536.sa, "p_640->g_536.sa", print_hash_value);
    transparent_crc(p_640->g_536.sb, "p_640->g_536.sb", print_hash_value);
    transparent_crc(p_640->g_536.sc, "p_640->g_536.sc", print_hash_value);
    transparent_crc(p_640->g_536.sd, "p_640->g_536.sd", print_hash_value);
    transparent_crc(p_640->g_536.se, "p_640->g_536.se", print_hash_value);
    transparent_crc(p_640->g_536.sf, "p_640->g_536.sf", print_hash_value);
    transparent_crc(p_640->g_537.x, "p_640->g_537.x", print_hash_value);
    transparent_crc(p_640->g_537.y, "p_640->g_537.y", print_hash_value);
    transparent_crc(p_640->g_539.s0, "p_640->g_539.s0", print_hash_value);
    transparent_crc(p_640->g_539.s1, "p_640->g_539.s1", print_hash_value);
    transparent_crc(p_640->g_539.s2, "p_640->g_539.s2", print_hash_value);
    transparent_crc(p_640->g_539.s3, "p_640->g_539.s3", print_hash_value);
    transparent_crc(p_640->g_539.s4, "p_640->g_539.s4", print_hash_value);
    transparent_crc(p_640->g_539.s5, "p_640->g_539.s5", print_hash_value);
    transparent_crc(p_640->g_539.s6, "p_640->g_539.s6", print_hash_value);
    transparent_crc(p_640->g_539.s7, "p_640->g_539.s7", print_hash_value);
    transparent_crc(p_640->g_539.s8, "p_640->g_539.s8", print_hash_value);
    transparent_crc(p_640->g_539.s9, "p_640->g_539.s9", print_hash_value);
    transparent_crc(p_640->g_539.sa, "p_640->g_539.sa", print_hash_value);
    transparent_crc(p_640->g_539.sb, "p_640->g_539.sb", print_hash_value);
    transparent_crc(p_640->g_539.sc, "p_640->g_539.sc", print_hash_value);
    transparent_crc(p_640->g_539.sd, "p_640->g_539.sd", print_hash_value);
    transparent_crc(p_640->g_539.se, "p_640->g_539.se", print_hash_value);
    transparent_crc(p_640->g_539.sf, "p_640->g_539.sf", print_hash_value);
    transparent_crc(p_640->g_540.x, "p_640->g_540.x", print_hash_value);
    transparent_crc(p_640->g_540.y, "p_640->g_540.y", print_hash_value);
    transparent_crc(p_640->g_562.s0, "p_640->g_562.s0", print_hash_value);
    transparent_crc(p_640->g_562.s1, "p_640->g_562.s1", print_hash_value);
    transparent_crc(p_640->g_562.s2, "p_640->g_562.s2", print_hash_value);
    transparent_crc(p_640->g_562.s3, "p_640->g_562.s3", print_hash_value);
    transparent_crc(p_640->g_562.s4, "p_640->g_562.s4", print_hash_value);
    transparent_crc(p_640->g_562.s5, "p_640->g_562.s5", print_hash_value);
    transparent_crc(p_640->g_562.s6, "p_640->g_562.s6", print_hash_value);
    transparent_crc(p_640->g_562.s7, "p_640->g_562.s7", print_hash_value);
    transparent_crc(p_640->g_562.s8, "p_640->g_562.s8", print_hash_value);
    transparent_crc(p_640->g_562.s9, "p_640->g_562.s9", print_hash_value);
    transparent_crc(p_640->g_562.sa, "p_640->g_562.sa", print_hash_value);
    transparent_crc(p_640->g_562.sb, "p_640->g_562.sb", print_hash_value);
    transparent_crc(p_640->g_562.sc, "p_640->g_562.sc", print_hash_value);
    transparent_crc(p_640->g_562.sd, "p_640->g_562.sd", print_hash_value);
    transparent_crc(p_640->g_562.se, "p_640->g_562.se", print_hash_value);
    transparent_crc(p_640->g_562.sf, "p_640->g_562.sf", print_hash_value);
    transparent_crc(p_640->g_581, "p_640->g_581", print_hash_value);
    transparent_crc(p_640->g_609.x, "p_640->g_609.x", print_hash_value);
    transparent_crc(p_640->g_609.y, "p_640->g_609.y", print_hash_value);
    transparent_crc(p_640->g_609.z, "p_640->g_609.z", print_hash_value);
    transparent_crc(p_640->g_609.w, "p_640->g_609.w", print_hash_value);
    transparent_crc(p_640->g_614, "p_640->g_614", print_hash_value);
    transparent_crc(p_640->g_617.x, "p_640->g_617.x", print_hash_value);
    transparent_crc(p_640->g_617.y, "p_640->g_617.y", print_hash_value);
    transparent_crc(p_640->g_619.x, "p_640->g_619.x", print_hash_value);
    transparent_crc(p_640->g_619.y, "p_640->g_619.y", print_hash_value);
    transparent_crc(p_640->g_619.z, "p_640->g_619.z", print_hash_value);
    transparent_crc(p_640->g_619.w, "p_640->g_619.w", print_hash_value);
    transparent_crc(p_640->g_621.x, "p_640->g_621.x", print_hash_value);
    transparent_crc(p_640->g_621.y, "p_640->g_621.y", print_hash_value);
    transparent_crc(p_640->v_collective, "p_640->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 76; i++)
            transparent_crc(p_640->g_special_values[i + 76 * get_linear_group_id()], "p_640->g_special_values[i + 76 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 76; i++)
            transparent_crc(p_640->l_special_values[i], "p_640->l_special_values[i]", print_hash_value);
    transparent_crc(p_640->l_comm_values[get_linear_local_id()], "p_640->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_640->g_comm_values[get_linear_group_id() * 43 + get_linear_local_id()], "p_640->g_comm_values[get_linear_group_id() * 43 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
