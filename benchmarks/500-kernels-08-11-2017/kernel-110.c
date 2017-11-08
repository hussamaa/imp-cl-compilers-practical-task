// --atomics 30 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 63,85,1 -l 9,1,1
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

__constant uint32_t permutations[10][9] = {
{5,3,0,8,1,7,4,2,6}, // permutation 0
{1,5,7,3,0,6,4,2,8}, // permutation 1
{4,6,2,8,1,3,7,5,0}, // permutation 2
{7,0,6,8,4,5,1,3,2}, // permutation 3
{3,6,2,1,8,0,4,5,7}, // permutation 4
{5,6,1,8,2,4,7,0,3}, // permutation 5
{6,8,1,4,0,5,2,7,3}, // permutation 6
{5,8,2,4,6,3,1,0,7}, // permutation 7
{5,2,3,8,6,7,4,1,0}, // permutation 8
{5,0,4,2,8,3,7,1,6} // permutation 9
};

// Seed: 1587001288

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_5[10][7];
    int32_t *g_4;
    int32_t g_16;
    volatile VECTOR(uint8_t, 2) g_47;
    VECTOR(uint8_t, 4) g_49;
    uint64_t g_60;
    int32_t g_74;
    int32_t g_76[10][2][7];
    uint16_t g_78;
    uint32_t g_93;
    int16_t g_108;
    int32_t * volatile g_109[9];
    VECTOR(uint8_t, 2) g_133;
    uint16_t g_159;
    uint16_t *g_158[6];
    volatile VECTOR(int16_t, 16) g_163;
    int32_t g_348;
    uint64_t g_359;
    int32_t ** volatile g_366;
    volatile uint16_t * volatile * volatile *g_377;
    volatile VECTOR(int64_t, 16) g_423;
    int32_t ** volatile g_429[8];
    int32_t ** volatile g_431;
    VECTOR(int8_t, 16) g_434;
    volatile VECTOR(int8_t, 16) g_436;
    VECTOR(int64_t, 8) g_459;
    uint16_t **g_476;
    uint16_t ***g_475[5];
    volatile VECTOR(int16_t, 16) g_499;
    int32_t * volatile g_507;
    int32_t * volatile g_510;
    VECTOR(uint8_t, 16) g_525;
    int32_t ** volatile g_544[6][1][4];
    VECTOR(int16_t, 4) g_546;
    uint16_t ****g_555[4][5];
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
uint8_t  func_1(struct S0 * p_560);
int32_t * func_2(int32_t * p_3, struct S0 * p_560);
int32_t  func_6(uint8_t  p_7, uint16_t  p_8, uint64_t  p_9, int64_t  p_10, int32_t  p_11, struct S0 * p_560);
int32_t * func_13(int32_t * p_14, struct S0 * p_560);
int32_t  func_19(int32_t * p_20, int32_t * p_21, struct S0 * p_560);
int32_t * func_22(int8_t  p_23, int32_t  p_24, uint8_t  p_25, uint32_t  p_26, int64_t  p_27, struct S0 * p_560);
uint32_t  func_28(int32_t * p_29, int64_t  p_30, int32_t * p_31, int32_t  p_32, struct S0 * p_560);
uint8_t  func_37(int32_t * p_38, uint64_t  p_39, int32_t * p_40, struct S0 * p_560);
int32_t * func_41(uint16_t  p_42, int8_t  p_43, int32_t  p_44, int32_t * p_45, uint64_t  p_46, struct S0 * p_560);
int32_t  func_53(uint32_t  p_54, uint8_t  p_55, int32_t * p_56, uint64_t  p_57, int32_t  p_58, struct S0 * p_560);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_560->g_4 p_560->l_comm_values p_560->g_16 p_560->g_49 p_560->g_5 p_560->g_78 p_560->g_93 p_560->g_76 p_560->g_47 p_560->g_comm_values p_560->g_74 p_560->g_108 p_560->g_60 p_560->g_133 p_560->g_348 p_560->g_359 p_560->g_159 p_560->g_366 p_560->g_377 p_560->g_423 p_560->g_431 p_560->g_434 p_560->g_436 p_560->g_459 p_560->g_475 p_560->g_499 p_560->g_507 p_560->g_525 p_560->g_546
 * writes: p_560->g_16 p_560->g_4 p_560->g_5 p_560->g_74 p_560->g_76 p_560->g_78 p_560->g_49 p_560->g_93 p_560->g_comm_values p_560->g_108 p_560->g_60 p_560->g_158 p_560->g_109 p_560->g_133 p_560->g_159 p_560->g_359 p_560->l_comm_values p_560->g_475 p_560->g_459 p_560->g_434 p_560->g_555 p_560->g_348
 */
uint8_t  func_1(struct S0 * p_560)
{ /* block id: 4 */
    int32_t *l_545 = &p_560->g_16;
    uint32_t *l_551 = &p_560->g_93;
    VECTOR(uint64_t, 16) l_552 = (VECTOR(uint64_t, 16))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 6UL, 18446744073709551606UL, (VECTOR(uint64_t, 2))(6UL, 18446744073709551606UL), (VECTOR(uint64_t, 2))(6UL, 18446744073709551606UL), 6UL, 18446744073709551606UL, 6UL, 18446744073709551606UL);
    uint16_t ***l_558[1][3];
    uint16_t ****l_559 = &p_560->g_475[2];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_558[i][j] = &p_560->g_476;
    }
    l_545 = func_2(p_560->g_4, p_560);
    (*l_545) = (((VECTOR(int16_t, 4))(p_560->g_546.wzyw)).z && ((safe_sub_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((*l_545), 0UL)) == 0x8A14L) , ((((*l_545) , &p_560->g_476) == ((*l_559) = (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(0x56166D079B577497L, (((*l_551) = (*l_545)) > (((VECTOR(uint64_t, 4))(l_552.s8c6a)).x , (safe_sub_func_int16_t_s_s(((p_560->g_555[0][3] = &p_560->g_475[4]) != (void*)0), (~(safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), 0x41DEL)), 0x472FL, 0L)).z, (*l_545)))))))), ((VECTOR(uint64_t, 2))(0x2B6D9226CE06E7F3L)), 1UL, 6UL, 18446744073709551615UL, 1UL)))).lo)).zzwzxyxx, ((VECTOR(uint64_t, 8))(0x152F3F7DBEAE5FDFL))))), ((VECTOR(uint64_t, 8))(1UL)))).even))))).lo)).y , l_558[0][2]))) ^ 0xFC7BL)), 246UL)) != p_560->g_348));
    return (*l_545);
}


/* ------------------------------------------ */
/* 
 * reads : p_560->l_comm_values p_560->g_16 p_560->g_49 p_560->g_5 p_560->g_78 p_560->g_93 p_560->g_76 p_560->g_47 p_560->g_comm_values p_560->g_74 p_560->g_108 p_560->g_60 p_560->g_4 p_560->g_133 p_560->g_348 p_560->g_359 p_560->g_159 p_560->g_366 p_560->g_377 p_560->g_423 p_560->g_431 p_560->g_434 p_560->g_436 p_560->g_459 p_560->g_475 p_560->g_499 p_560->g_507 p_560->g_525
 * writes: p_560->g_16 p_560->g_4 p_560->g_5 p_560->g_74 p_560->g_76 p_560->g_78 p_560->g_49 p_560->g_93 p_560->g_comm_values p_560->g_108 p_560->g_60 p_560->g_158 p_560->g_109 p_560->g_133 p_560->g_159 p_560->g_359 p_560->l_comm_values p_560->g_475 p_560->g_459 p_560->g_434
 */
int32_t * func_2(int32_t * p_3, struct S0 * p_560)
{ /* block id: 5 */
    int16_t l_12 = 0L;
    int32_t *l_15 = &p_560->g_5[2][0];
    int32_t l_354 = 0x7BBA0EE3L;
    uint16_t *l_357 = &p_560->g_159;
    uint64_t *l_358 = &p_560->g_359;
    uint16_t **l_398[4][6];
    uint16_t ***l_397 = &l_398[3][4];
    VECTOR(int64_t, 8) l_424 = (VECTOR(int64_t, 8))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, (-2L)), (-2L)), (-2L), 4L, (-2L));
    uint8_t *l_467 = (void*)0;
    VECTOR(uint32_t, 16) l_486 = (VECTOR(uint32_t, 16))(0x9CAAC2DDL, (VECTOR(uint32_t, 4))(0x9CAAC2DDL, (VECTOR(uint32_t, 2))(0x9CAAC2DDL, 9UL), 9UL), 9UL, 0x9CAAC2DDL, 9UL, (VECTOR(uint32_t, 2))(0x9CAAC2DDL, 9UL), (VECTOR(uint32_t, 2))(0x9CAAC2DDL, 9UL), 0x9CAAC2DDL, 9UL, 0x9CAAC2DDL, 9UL);
    int32_t *l_515[10][4] = {{(void*)0,&p_560->g_76[8][1][0],(void*)0,(void*)0},{(void*)0,&p_560->g_76[8][1][0],(void*)0,(void*)0},{(void*)0,&p_560->g_76[8][1][0],(void*)0,(void*)0},{(void*)0,&p_560->g_76[8][1][0],(void*)0,(void*)0},{(void*)0,&p_560->g_76[8][1][0],(void*)0,(void*)0},{(void*)0,&p_560->g_76[8][1][0],(void*)0,(void*)0},{(void*)0,&p_560->g_76[8][1][0],(void*)0,(void*)0},{(void*)0,&p_560->g_76[8][1][0],(void*)0,(void*)0},{(void*)0,&p_560->g_76[8][1][0],(void*)0,(void*)0},{(void*)0,&p_560->g_76[8][1][0],(void*)0,(void*)0}};
    uint16_t *l_516 = &p_560->g_78;
    uint16_t *l_517 = &p_560->g_159;
    uint16_t l_534 = 6UL;
    int64_t *l_535 = (void*)0;
    int64_t *l_536[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_537 = 0x04842256L;
    int8_t l_538 = 0x09L;
    int8_t *l_539 = (void*)0;
    int8_t *l_540 = &l_538;
    int8_t *l_541 = (void*)0;
    int8_t *l_542 = (void*)0;
    int8_t *l_543[5][9][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
            l_398[i][j] = (void*)0;
    }
    if (func_6(p_560->l_comm_values[(safe_mod_func_uint32_t_u_u(p_560->tid, 9))], (l_12 , (p_3 != (p_560->l_comm_values[(safe_mod_func_uint32_t_u_u(p_560->tid, 9))] , func_13(l_15, p_560)))), l_354, (((*l_358) |= (l_12 & ((*l_357) = (safe_mul_func_uint8_t_u_u(((l_12 | l_12) < l_12), p_560->g_348))))) >= (-8L)), p_560->g_348, p_560))
    { /* block id: 158 */
        return &p_560->g_348;
    }
    else
    { /* block id: 160 */
        uint16_t l_361 = 0x5D15L;
        int32_t l_369[1][1];
        uint16_t ***l_378 = (void*)0;
        int64_t *l_425 = (void*)0;
        int64_t *l_426 = (void*)0;
        int64_t *l_427 = (void*)0;
        int64_t *l_428 = (void*)0;
        int16_t l_453 = 2L;
        VECTOR(int16_t, 16) l_497 = (VECTOR(int16_t, 16))(0x6D64L, (VECTOR(int16_t, 4))(0x6D64L, (VECTOR(int16_t, 2))(0x6D64L, 0x63A6L), 0x63A6L), 0x63A6L, 0x6D64L, 0x63A6L, (VECTOR(int16_t, 2))(0x6D64L, 0x63A6L), (VECTOR(int16_t, 2))(0x6D64L, 0x63A6L), 0x6D64L, 0x63A6L, 0x6D64L, 0x63A6L);
        VECTOR(int16_t, 8) l_498 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x2C9BL), 0x2C9BL), 0x2C9BL, 0L, 0x2C9BL);
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_369[i][j] = 0x7A71856CL;
        }
        if (l_361)
        { /* block id: 161 */
            uint32_t *l_370 = &p_560->g_93;
            uint16_t ****l_379 = &l_378;
            int32_t l_386[4] = {0x11382418L,0x11382418L,0x11382418L,0x11382418L};
            int32_t l_391 = 0L;
            int64_t *l_392[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (p_560->g_159 = 0; (p_560->g_159 > 28); p_560->g_159 = safe_add_func_int64_t_s_s(p_560->g_159, 7))
            { /* block id: 164 */
                uint16_t **l_365 = &p_560->g_158[4];
                uint16_t ***l_364 = &l_365;
                (*l_364) = &l_357;
                (*p_560->g_366) = &p_560->g_5[1][1];
            }
            if ((+(safe_mod_func_int64_t_s_s((p_560->l_comm_values[(safe_mod_func_uint32_t_u_u(p_560->tid, 9))] = (((*l_370)--) <= (safe_rshift_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((p_560->g_377 != ((*l_379) = l_378)), (((((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((*p_560->g_4) &= (safe_sub_func_uint64_t_u_u(p_560->g_76[4][1][0], l_386[1]))), (FAKE_DIVERGE(p_560->local_2_offset, get_local_id(2), 10) , l_361))), (safe_mod_func_int16_t_s_s(l_12, (safe_mod_func_uint16_t_u_u(l_369[0][0], l_354)))))) & (l_361 < 0x30178D58L)) >= l_386[1]) <= 0x4B0FAD27L) || 4L))) == l_386[1]), l_391)))), p_560->g_74))))
            { /* block id: 172 */
                (*p_560->g_4) = (safe_add_func_int64_t_s_s(p_560->g_47.y, ((VECTOR(uint64_t, 2))(18446744073709551606UL, 18446744073709551606UL)).lo));
                atomic_min(&p_560->g_atomic_reduction[get_linear_group_id()], ((safe_rshift_func_int8_t_s_s(((l_397 == (void*)0) >= l_386[3]), 1)) ^ l_391));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_560->v_collective += p_560->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            else
            { /* block id: 175 */
                return p_3;
            }
        }
        else
        { /* block id: 178 */
            for (p_560->g_159 = 0; (p_560->g_159 > 51); p_560->g_159 = safe_add_func_uint64_t_u_u(p_560->g_159, 7))
            { /* block id: 181 */
                if ((**p_560->g_366))
                    break;
            }
            if ((atomic_inc(&p_560->g_atomic_input[30 * get_linear_group_id() + 6]) == 6))
            { /* block id: 185 */
                int32_t l_401 = 0L;
                int32_t l_402 = 0x6B0E5B57L;
                uint32_t l_403[8];
                uint32_t l_406 = 4294967295UL;
                VECTOR(int16_t, 4) l_407 = (VECTOR(int16_t, 4))(0x52DDL, (VECTOR(int16_t, 2))(0x52DDL, 0x2950L), 0x2950L);
                int32_t l_408 = 0x1FF4767FL;
                VECTOR(uint64_t, 16) l_409 = (VECTOR(uint64_t, 16))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 9UL), 9UL), 9UL, 5UL, 9UL, (VECTOR(uint64_t, 2))(5UL, 9UL), (VECTOR(uint64_t, 2))(5UL, 9UL), 5UL, 9UL, 5UL, 9UL);
                uint64_t l_410[1];
                uint8_t l_411 = 3UL;
                int32_t l_412 = 0x18CE9AA0L;
                int32_t l_413 = 0L;
                VECTOR(uint32_t, 16) l_414 = (VECTOR(uint32_t, 16))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 1UL), 1UL), 1UL, 4294967291UL, 1UL, (VECTOR(uint32_t, 2))(4294967291UL, 1UL), (VECTOR(uint32_t, 2))(4294967291UL, 1UL), 4294967291UL, 1UL, 4294967291UL, 1UL);
                VECTOR(uint32_t, 4) l_415 = (VECTOR(uint32_t, 4))(0xCD2546AEL, (VECTOR(uint32_t, 2))(0xCD2546AEL, 0x315BFE59L), 0x315BFE59L);
                uint64_t l_416 = 6UL;
                uint64_t l_417 = 18446744073709551615UL;
                int32_t l_418 = 6L;
                int32_t l_419 = 0x7C79F229L;
                int32_t l_420 = 0x28861751L;
                VECTOR(int32_t, 2) l_421 = (VECTOR(int32_t, 2))(0x0AF2A789L, 0L);
                uint64_t l_422 = 7UL;
                int i;
                for (i = 0; i < 8; i++)
                    l_403[i] = 0x1EDFF912L;
                for (i = 0; i < 1; i++)
                    l_410[i] = 0x6AE8B2CF0D54F0BAL;
                l_422 &= ((l_408 = ((l_406 = (l_403[2]--)) , l_407.y)) , ((l_412 = (l_411 = (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_409.s0a7633ee)).odd)).even)).even , l_410[0]))) , ((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(0xB470E492L, GROUP_DIVERGE(2, 1), l_413, ((VECTOR(uint32_t, 4))(l_414.s3cd8)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_415.xzywzzxy)).s74)).lo, l_416, l_417, 4294967290UL, 0xCA349E40L, l_418, l_419, 0UL, 0x04C37E2BL)).even)).s63)).even , ((VECTOR(uint32_t, 2))(3UL, 1UL)).odd) , (l_420 , ((VECTOR(int32_t, 2))(l_421.xy)).lo))));
                unsigned int result = 0;
                result += l_401;
                result += l_402;
                int l_403_i0;
                for (l_403_i0 = 0; l_403_i0 < 8; l_403_i0++) {
                    result += l_403[l_403_i0];
                }
                result += l_406;
                result += l_407.w;
                result += l_407.z;
                result += l_407.y;
                result += l_407.x;
                result += l_408;
                result += l_409.sf;
                result += l_409.se;
                result += l_409.sd;
                result += l_409.sc;
                result += l_409.sb;
                result += l_409.sa;
                result += l_409.s9;
                result += l_409.s8;
                result += l_409.s7;
                result += l_409.s6;
                result += l_409.s5;
                result += l_409.s4;
                result += l_409.s3;
                result += l_409.s2;
                result += l_409.s1;
                result += l_409.s0;
                int l_410_i0;
                for (l_410_i0 = 0; l_410_i0 < 1; l_410_i0++) {
                    result += l_410[l_410_i0];
                }
                result += l_411;
                result += l_412;
                result += l_413;
                result += l_414.sf;
                result += l_414.se;
                result += l_414.sd;
                result += l_414.sc;
                result += l_414.sb;
                result += l_414.sa;
                result += l_414.s9;
                result += l_414.s8;
                result += l_414.s7;
                result += l_414.s6;
                result += l_414.s5;
                result += l_414.s4;
                result += l_414.s3;
                result += l_414.s2;
                result += l_414.s1;
                result += l_414.s0;
                result += l_415.w;
                result += l_415.z;
                result += l_415.y;
                result += l_415.x;
                result += l_416;
                result += l_417;
                result += l_418;
                result += l_419;
                result += l_420;
                result += l_421.y;
                result += l_421.x;
                result += l_422;
                atomic_add(&p_560->g_special_values[30 * get_linear_group_id() + 6], result);
            }
            else
            { /* block id: 192 */
                (1 + 1);
            }
        }
        l_15 = p_3;
        if ((((l_369[0][0] = ((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 4))(((*l_15) < 1L), 0x3F97296046895164L, 0x27C743D4EE43AF47L, 2L)).xyywxwywwxxzxyzy, ((VECTOR(int64_t, 8))(p_560->g_423.sf961a59d)).s0756045103001065, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_424.s1054)).ywxwxyxxxwwwzxwx))))).s2) ^ ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(18446744073709551615UL, 0x6490838AF6222A9EL, 18446744073709551612UL, 0x4050C344CCDD1B2DL)))).zwyxxxzxwyyzwxwz)).s0) & (*l_15)))
        { /* block id: 198 */
            int32_t *l_430 = &p_560->g_16;
            VECTOR(int8_t, 8) l_435 = (VECTOR(int8_t, 8))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), (-1L)), (-1L)), (-1L), (-10L), (-1L));
            int8_t l_478[9];
            int i;
            for (i = 0; i < 9; i++)
                l_478[i] = 0x46L;
            l_430 = &l_369[0][0];
            if (l_369[0][0])
            { /* block id: 200 */
                (*p_560->g_431) = &l_369[0][0];
            }
            else
            { /* block id: 202 */
                int32_t **l_432 = (void*)0;
                int32_t **l_433 = &l_15;
                VECTOR(int8_t, 16) l_437 = (VECTOR(int8_t, 16))(0x3EL, (VECTOR(int8_t, 4))(0x3EL, (VECTOR(int8_t, 2))(0x3EL, 5L), 5L), 5L, 0x3EL, 5L, (VECTOR(int8_t, 2))(0x3EL, 5L), (VECTOR(int8_t, 2))(0x3EL, 5L), 0x3EL, 5L, 0x3EL, 5L);
                uint16_t **l_452 = &p_560->g_158[3];
                uint32_t *l_454 = &p_560->g_93;
                int64_t *l_462 = (void*)0;
                int64_t *l_463 = (void*)0;
                int64_t *l_464 = (void*)0;
                int32_t l_470[1];
                uint16_t ****l_477 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_470[i] = 0x586EC8ADL;
                (*l_430) ^= (*p_3);
                l_430 = ((*l_433) = &l_354);
                p_560->g_74 |= ((((VECTOR(int8_t, 4))((-5L), ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 4))(p_560->g_434.s92d0)).zwxwxyxyyzwzwwxy, (int8_t)((VECTOR(int8_t, 8))((-1L), ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))((*l_430), ((VECTOR(int8_t, 8))(l_435.s51562223)), ((VECTOR(int8_t, 4))(0x6FL, p_560->l_comm_values[(safe_mod_func_uint32_t_u_u(p_560->tid, 9))], 0x2CL, 2L)), ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 2))(p_560->g_436.s1e))))), 0L)).s79, ((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 16))(l_437.s10bcd2d6704d1c6a)), (int8_t)(safe_mod_func_uint32_t_u_u(((((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((((safe_unary_minus_func_int64_t_s((5L != (**l_433)))) , ((safe_rshift_func_int8_t_s_u((safe_add_func_int64_t_s_s(((*p_3) >= (*p_3)), (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u(((((*l_454) = (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 16))((safe_rshift_func_int8_t_s_s(0x40L, (l_452 != ((*l_397) = (*l_397))))), (*l_430), (**l_433), 1UL, l_369[0][0], l_369[0][0], l_453, ((VECTOR(uint16_t, 8))(65535UL)), 0xE573L)).s7, FAKE_DIVERGE(p_560->local_2_offset, get_local_id(2), 10)))) , l_369[0][0]) | p_560->g_436.sa))), (*l_430))))), 6)) , l_453)) == FAKE_DIVERGE(p_560->group_0_offset, get_group_id(0), 10)), 0x79C2L, 0x0400L, 0x1455L)).x, 0x01D4L, ((VECTOR(int16_t, 2))(0x78A7L)), 0x17AEL, ((VECTOR(int16_t, 2))(0x7AAAL)), 1L)).even, ((VECTOR(int16_t, 4))(0x3760L))))), ((VECTOR(int16_t, 4))(0x734BL))))).zxywxzxx, ((VECTOR(int16_t, 8))(0x10E4L)), ((VECTOR(int16_t, 8))(1L))))).s0 <= p_560->g_76[1][1][5]) , 0xB133CA85L), p_560->g_16))))).s8b, ((VECTOR(int8_t, 2))(0x51L))))), 0x14L, (**l_433), (-3L), 0x03L, (-1L))).s1, (int8_t)0L))).sb, 1L, 1L)).x >= p_560->g_49.y) >= (*l_430));
                (*p_560->g_4) = ((((**l_433) = ((*l_454) = (p_560->g_74 && (safe_rshift_func_int16_t_s_s((*l_430), (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 8))(1L, ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_560->g_459.s3772)).lo)).xxxx)), ((VECTOR(int64_t, 2))((-8L), (-10L))).xyyx))), (safe_lshift_func_uint16_t_u_u(((l_369[0][0] = l_369[0][0]) ^ (((safe_sub_func_uint8_t_u_u((((l_467 != (void*)0) , (18446744073709551615UL && (safe_mul_func_uint8_t_u_u((l_470[0] >= p_560->g_47.y), ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((p_560->g_475[4] = p_560->g_475[2]) == &l_452), l_478[4])), l_361)) <= p_560->g_60))))) <= l_361), p_560->g_348)) == 0x73L) && 65535UL)), 4)), (-4L), 0x5143A596BB040F64L)).s6454564640107526, ((VECTOR(int64_t, 16))(5L))))).sf, FAKE_DIVERGE(p_560->global_0_offset, get_global_id(0), 10)))))))) == p_560->g_434.s1) , (*p_3));
            }
        }
        else
        { /* block id: 215 */
            int32_t **l_500 = &p_560->g_4;
            int64_t *l_503 = (void*)0;
            int32_t l_505 = (-1L);
            for (l_453 = 27; (l_453 == (-28)); l_453 = safe_sub_func_int16_t_s_s(l_453, 3))
            { /* block id: 218 */
                uint16_t l_481 = 0x0506L;
                uint8_t *l_493 = (void*)0;
                uint8_t *l_494 = (void*)0;
                int32_t ***l_501 = &l_500;
                int64_t *l_502 = (void*)0;
                int16_t l_504 = 1L;
                int32_t *l_506 = (void*)0;
                int16_t l_512 = 1L;
                (*p_560->g_507) = ((0x47BAD13F58BB468BL <= (l_481 , (0x59L && (((safe_lshift_func_int8_t_s_u((l_481 >= (safe_mul_func_uint8_t_u_u(((((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_560->g_5[5][2], 9UL, 4294967287UL, 0x4A1C35CDL)).even)), ((VECTOR(uint32_t, 2))(l_486.s86)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 4))((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x3EF8L, 0x5789L)).hi, ((*l_15) = (((safe_lshift_func_int16_t_s_u((((l_369[0][0] || (p_560->g_49.x++)) , (((((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(0x7346E0706D2075DBL, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x2070732FAD8BB3EFL, 0x1A0CE8DD2CFD0C9FL)))), 4L)).odd))).even , ((((VECTOR(int16_t, 16))((-1L), ((VECTOR(int16_t, 4))(l_497.s86e8)), ((VECTOR(int16_t, 4))(l_498.s2374)), 0x0DDDL, 9L, ((VECTOR(int16_t, 4))(p_560->g_499.s11ba)), 1L)).s2 & ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0xAAF8L, 0x4136L)).xyxyxxyxxxyxxxxy)).sf) , (((*l_501) = l_500) != (void*)0))) , l_502) != l_503)) | l_504), 1)) || (**l_500)) ^ 1L)))), l_505)), p_560->g_93, 0UL, 4294967295UL)), ((VECTOR(uint32_t, 4))(4294967295UL)), ((VECTOR(uint32_t, 4))(0xC3A334F1L))))), 4294967295UL, ((VECTOR(uint32_t, 2))(0xA1487E6DL)), ((VECTOR(uint32_t, 8))(0xD8FA7ECCL)), 0xD0DF008FL)).s65)))), 0xB87255B3L, 0x15D29AF4L)).even))).yyyx, ((VECTOR(uint32_t, 4))(0x2B98B582L))))).x <= p_560->g_434.s9) == 0x23D6646BE2029D44L), 5UL))), l_369[0][0])) != l_505) || (**l_500))))) ^ 0x02D02769D47070B9L);
                for (p_560->g_78 = 0; (p_560->g_78 >= 28); p_560->g_78++)
                { /* block id: 225 */
                    int32_t *l_511[10] = {&l_369[0][0],&l_354,&l_369[0][0],&l_369[0][0],&l_354,&l_369[0][0],&l_369[0][0],&l_354,&l_369[0][0],&l_369[0][0]};
                    int i;
                    l_354 &= (*p_3);
                }
                if (l_512)
                    continue;
            }
            return (*p_560->g_431);
        }
    }
    for (p_560->g_16 = (-2); (p_560->g_16 >= (-7)); --p_560->g_16)
    { /* block id: 235 */
        return p_3;
    }
    p_560->g_76[0][1][0] |= ((l_516 == l_517) , (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 4))(4L, (-9L), 0x08L, 0x3BL)).x, (p_560->g_434.s2 = ((*l_540) = ((((VECTOR(uint16_t, 16))(((&l_515[6][1] != (void*)0) > ((++(*l_357)) & (safe_unary_minus_func_uint8_t_u(((safe_sub_func_int16_t_s_s((p_560->g_108 ^ ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(p_560->g_525.s028d9fd7a8be28a5)).s22)).hi), ((*l_15) = ((*p_3) == (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 8))((!(*p_3)), (-9L), (safe_div_func_int64_t_s_s((p_560->g_459.s0 = (safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((void*)0 != &p_560->g_109[2]), l_534)), GROUP_DIVERGE(2, 1)))), p_560->g_423.sd)), ((VECTOR(int32_t, 2))(5L)), (-8L), 0x52B6FADFL, (-4L))).s4, l_537)))))) , (*l_15)))))), 65530UL, ((VECTOR(uint16_t, 2))(1UL)), ((VECTOR(uint16_t, 2))(0UL)), 0x8E5DL, ((VECTOR(uint16_t, 2))(0UL)), 0x27EEL, ((VECTOR(uint16_t, 4))(0UL)), 0xB488L, 1UL)).s0 & l_538) , 0x3BL))))));
    return p_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_4
 * writes: p_560->g_5
 */
int32_t  func_6(uint8_t  p_7, uint16_t  p_8, uint64_t  p_9, int64_t  p_10, int32_t  p_11, struct S0 * p_560)
{ /* block id: 155 */
    VECTOR(int32_t, 4) l_360 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x47CA6D87L), 0x47CA6D87L);
    int i;
    (*p_560->g_4) = ((-4L) || (((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(l_360.wx)).yxyxyyyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x46D8648EL, 0L)).xxxy)).wzwwzwxy))).s6 , p_10));
    return l_360.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_16 p_560->g_49 p_560->g_5 p_560->g_78 p_560->g_93 p_560->g_76 p_560->g_47 p_560->g_comm_values p_560->g_74 p_560->g_108 p_560->g_60 p_560->l_comm_values p_560->g_4 p_560->g_133
 * writes: p_560->g_16 p_560->g_4 p_560->g_5 p_560->g_74 p_560->g_76 p_560->g_78 p_560->g_49 p_560->g_93 p_560->g_comm_values p_560->g_108 p_560->g_60 p_560->g_158 p_560->g_109 p_560->g_133
 */
int32_t * func_13(int32_t * p_14, struct S0 * p_560)
{ /* block id: 6 */
    int32_t *l_33 = &p_560->g_16;
    VECTOR(uint32_t, 8) l_52 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL);
    uint16_t l_99[7][9][4] = {{{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL}},{{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL}},{{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL}},{{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL}},{{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL}},{{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL}},{{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL},{0x309CL,0UL,0x908BL,0x309CL}}};
    int32_t l_353 = 0x41265369L;
    int i, j, k;
    for (p_560->g_16 = 0; (p_560->g_16 < (-11)); --p_560->g_16)
    { /* block id: 9 */
        int32_t l_36 = (-1L);
        uint32_t l_48 = 4294967291UL;
        uint8_t *l_50[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_51 = 4L;
        uint64_t *l_59[1][8] = {{&p_560->g_60,&p_560->g_60,&p_560->g_60,&p_560->g_60,&p_560->g_60,&p_560->g_60,&p_560->g_60,&p_560->g_60}};
        int32_t **l_70[2];
        int64_t *l_98[7][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        uint32_t *l_112 = (void*)0;
        uint32_t *l_113 = &p_560->g_93;
        int i, j;
        for (i = 0; i < 2; i++)
            l_70[i] = &p_560->g_4;
        l_353 = func_19(func_22((((*l_113) = func_28(l_33, (safe_mod_func_uint8_t_u_u(((p_560->g_comm_values[p_560->tid] = ((l_36 == (func_37(func_41(((void*)0 == &l_36), ((p_14 = ((((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(251UL, 0x8AL, 0xA7L, 0UL)).odd, ((VECTOR(uint8_t, 2))(0x39L, 251UL)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0xD6L, 0x8DL)).xyxyxxyy)))).s33))).yxxxxyyy))))).s3573412541301402, ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_560->g_47.xyyy)).zywzxyyy)).even)), ((VECTOR(uint8_t, 4))(l_48, (l_51 = ((VECTOR(uint8_t, 2))(p_560->g_49.yz)).hi), 0x1AL, 0xA4L)), ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 4))((((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_52.s2027603755145601)))).even, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 16))((func_53(p_560->l_comm_values[(safe_mod_func_uint32_t_u_u(p_560->tid, 9))], (((((18446744073709551613UL || (p_560->g_60++)) >= ((safe_div_func_uint32_t_u_u((~((safe_add_func_uint32_t_u_u(((((safe_mul_func_uint16_t_u_u(((p_14 != p_14) <= p_560->g_5[5][2]), 2UL)) < 0x3DL) , 0x29A3L) && (*l_33)), (*p_560->g_4))) > 5L)), (*p_560->g_4))) < (-1L))) & FAKE_DIVERGE(p_560->group_1_offset, get_group_id(1), 10)) , 0x33887E981C310705L) , l_48), &p_560->g_16, l_51, (*p_14), p_560) == p_560->l_comm_values[(safe_mod_func_uint32_t_u_u(p_560->tid, 9))]), 7UL, ((VECTOR(uint32_t, 8))(5UL)), l_48, (*l_33), 1UL, p_560->g_60, 0xC6B665F1L, 0x74372BB1L)).s34, ((VECTOR(uint32_t, 2))(0xF2784030L))))).xyxxxxxx)), ((VECTOR(uint32_t, 8))(0xF5C685B3L))))).s5 && (*l_33)), ((VECTOR(uint8_t, 2))(249UL)), 249UL)).lo, ((VECTOR(uint8_t, 2))(255UL)), ((VECTOR(uint8_t, 2))(0x44L))))).yxxx))).zxyywyzzywzyxyyx))).s6798, ((VECTOR(uint8_t, 4))(0x4EL))))).z <= (*l_33)) , p_14)) != l_33), (*l_33), &p_560->g_5[5][2], p_560->g_49.w, p_560), (*l_33), l_33, p_560) & p_560->g_16)) & (*l_33))) != 0x9004F71531938C4DL), (*l_33))), l_33, l_99[0][7][1], p_560)) == p_560->l_comm_values[(safe_mod_func_uint32_t_u_u(p_560->tid, 9))]), (*l_33), p_560->g_16, p_560->g_16, p_560->g_16, p_560), l_33, p_560);
        if ((*p_14))
            break;
        p_560->g_109[2] = (p_14 = &l_353);
    }
    return &p_560->g_74;
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_163 p_560->g_159 p_560->g_133 p_560->g_5 p_560->g_4
 * writes: p_560->g_133 p_560->g_5
 */
int32_t  func_19(int32_t * p_20, int32_t * p_21, struct S0 * p_560)
{ /* block id: 50 */
    int16_t l_162[9];
    VECTOR(int8_t, 4) l_164 = (VECTOR(int8_t, 4))(0x06L, (VECTOR(int8_t, 2))(0x06L, (-5L)), (-5L));
    VECTOR(int8_t, 8) l_165 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x1AL), 0x1AL), 0x1AL, 0L, 0x1AL);
    VECTOR(uint8_t, 8) l_166 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 253UL), 253UL), 253UL, 255UL, 253UL);
    VECTOR(uint8_t, 8) l_167 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xE4L), 0xE4L), 0xE4L, 1UL, 0xE4L);
    uint8_t *l_170 = (void*)0;
    uint8_t *l_171 = (void*)0;
    uint8_t *l_172 = (void*)0;
    uint8_t *l_173 = (void*)0;
    uint16_t *l_174 = (void*)0;
    uint16_t **l_175 = &p_560->g_158[4];
    uint16_t **l_176 = &l_174;
    uint16_t **l_177 = (void*)0;
    uint16_t **l_178[2];
    uint16_t *l_179[6][10][2] = {{{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78}},{{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78}},{{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78}},{{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78}},{{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78}},{{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78},{(void*)0,&p_560->g_78}}};
    int32_t l_329[1][4] = {{2L,2L,2L,2L}};
    int8_t l_330 = 1L;
    int64_t l_331 = 0L;
    int32_t l_332 = 0x392A701CL;
    uint16_t **l_341 = &p_560->g_158[4];
    uint16_t ***l_342 = &l_177;
    int32_t *l_345 = &p_560->g_76[8][1][0];
    int32_t *l_346[3];
    int32_t l_347 = 0x23654E69L;
    int32_t l_349 = (-10L);
    VECTOR(uint8_t, 8) l_350 = (VECTOR(uint8_t, 8))(0x76L, (VECTOR(uint8_t, 4))(0x76L, (VECTOR(uint8_t, 2))(0x76L, 255UL), 255UL), 255UL, 0x76L, 255UL);
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_162[i] = 0x731CL;
    for (i = 0; i < 2; i++)
        l_178[i] = &p_560->g_158[4];
    for (i = 0; i < 3; i++)
        l_346[i] = &p_560->g_76[7][0][3];
    if (((safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(0, 1), ((l_162[7] || (((VECTOR(int16_t, 8))(p_560->g_163.s0829ef2f)).s3 & ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_164.zxxzyzwwzzyxzzwz)).lo)).hi, ((VECTOR(int8_t, 16))(l_165.s0461213316702741)).s06d2))), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_166.s35160707)).s52)), ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 8))(l_167.s62704751)).even, (uint8_t)p_560->g_159))), 0xA6L, 2UL)).odd))).y)) ^ ((safe_lshift_func_int8_t_s_u(l_165.s5, (FAKE_DIVERGE(p_560->global_1_offset, get_global_id(1), 10) == 5UL))) == l_162[7])))) == ((0xECL ^ (p_560->g_133.x &= FAKE_DIVERGE(p_560->group_2_offset, get_group_id(2), 10))) , (((*p_20) &= ((l_179[0][2][0] = ((*l_176) = l_174)) != ((safe_rshift_func_uint16_t_u_s((1L == ((1L ^ l_164.w) | 4294967294UL)), 2)) , (void*)0))) > l_164.y))))
    { /* block id: 55 */
        int32_t *l_182 = &p_560->g_76[0][1][4];
        int32_t *l_183 = (void*)0;
        int32_t *l_184 = (void*)0;
        int32_t *l_185 = &p_560->g_76[8][1][0];
        int32_t *l_186 = &p_560->g_74;
        int32_t *l_187 = &p_560->g_76[8][1][0];
        int32_t *l_188 = (void*)0;
        int32_t *l_189 = &p_560->g_76[9][1][1];
        int32_t *l_190 = (void*)0;
        int32_t *l_191[1][5];
        uint64_t l_192 = 18446744073709551607UL;
        int32_t l_333 = 2L;
        uint64_t l_334 = 0x97DE20BC243EE1ACL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_191[i][j] = &p_560->g_5[5][2];
        }
        --l_192;
        if ((atomic_inc(&p_560->l_atomic_input[3]) == 6))
        { /* block id: 58 */
            uint64_t l_195 = 6UL;
            uint16_t l_198 = 2UL;
            VECTOR(int32_t, 2) l_199 = (VECTOR(int32_t, 2))(0x4C52C173L, 1L);
            VECTOR(int32_t, 4) l_200 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
            VECTOR(int32_t, 16) l_201 = (VECTOR(int32_t, 16))(0x6BF453BBL, (VECTOR(int32_t, 4))(0x6BF453BBL, (VECTOR(int32_t, 2))(0x6BF453BBL, 0x79242BF8L), 0x79242BF8L), 0x79242BF8L, 0x6BF453BBL, 0x79242BF8L, (VECTOR(int32_t, 2))(0x6BF453BBL, 0x79242BF8L), (VECTOR(int32_t, 2))(0x6BF453BBL, 0x79242BF8L), 0x6BF453BBL, 0x79242BF8L, 0x6BF453BBL, 0x79242BF8L);
            uint64_t l_202 = 18446744073709551606UL;
            VECTOR(int64_t, 4) l_203 = (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 5L), 5L);
            VECTOR(uint32_t, 16) l_204 = (VECTOR(uint32_t, 16))(0xAF20C6C9L, (VECTOR(uint32_t, 4))(0xAF20C6C9L, (VECTOR(uint32_t, 2))(0xAF20C6C9L, 0x4F73E1BCL), 0x4F73E1BCL), 0x4F73E1BCL, 0xAF20C6C9L, 0x4F73E1BCL, (VECTOR(uint32_t, 2))(0xAF20C6C9L, 0x4F73E1BCL), (VECTOR(uint32_t, 2))(0xAF20C6C9L, 0x4F73E1BCL), 0xAF20C6C9L, 0x4F73E1BCL, 0xAF20C6C9L, 0x4F73E1BCL);
            int32_t *l_205 = (void*)0;
            int32_t *l_206[1][3][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t *l_207[1];
            int8_t l_208 = 5L;
            uint32_t l_209 = 0x5B989AAFL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_207[i] = (void*)0;
            l_195--;
            l_207[0] = (l_198 , (((GROUP_DIVERGE(1, 1) , (l_203.x = (l_202 ^= (((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 4))(l_199.xyxx)).zyxwxwxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(l_200.yyyy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_201.scb43)).wyzxwyww)).lo))))).zywwwwzy))).s5 , (GROUP_DIVERGE(1, 1) , (-1L)))))) , 0L) , (l_206[0][2][3] = (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_204.sf0158a44)))).s0 , l_205))));
            l_209 ^= l_208;
            for (l_199.y = 19; (l_199.y == (-3)); --l_199.y)
            { /* block id: 67 */
                uint32_t l_212 = 0UL;
                uint32_t l_213 = 4294967292UL;
                int32_t l_214 = 1L;
                uint64_t l_215 = 0UL;
                VECTOR(int32_t, 4) l_244 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x53DDF38AL), 0x53DDF38AL);
                int32_t l_245 = (-2L);
                VECTOR(uint16_t, 4) l_246 = (VECTOR(uint16_t, 4))(0x2D6FL, (VECTOR(uint16_t, 2))(0x2D6FL, 0x3F50L), 0x3F50L);
                VECTOR(int16_t, 4) l_247 = (VECTOR(int16_t, 4))(0x5D2EL, (VECTOR(int16_t, 2))(0x5D2EL, (-1L)), (-1L));
                VECTOR(uint16_t, 16) l_248 = (VECTOR(uint16_t, 16))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0UL), 0UL), 0UL, 7UL, 0UL, (VECTOR(uint16_t, 2))(7UL, 0UL), (VECTOR(uint16_t, 2))(7UL, 0UL), 7UL, 0UL, 7UL, 0UL);
                VECTOR(uint16_t, 4) l_249 = (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0UL), 0UL);
                int16_t l_250 = 2L;
                uint64_t l_251 = 0xB522DBA9DB8B5F7BL;
                VECTOR(uint16_t, 8) l_252 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x9BEFL), 0x9BEFL), 0x9BEFL, 65535UL, 0x9BEFL);
                VECTOR(uint16_t, 4) l_253 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x020EL), 0x020EL);
                VECTOR(uint16_t, 8) l_254 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x2A86L), 0x2A86L), 0x2A86L, 1UL, 0x2A86L);
                VECTOR(uint16_t, 4) l_255 = (VECTOR(uint16_t, 4))(0x67B7L, (VECTOR(uint16_t, 2))(0x67B7L, 65530UL), 65530UL);
                VECTOR(uint16_t, 2) l_256 = (VECTOR(uint16_t, 2))(0x8ECAL, 0UL);
                VECTOR(uint16_t, 16) l_257 = (VECTOR(uint16_t, 16))(0x5F3CL, (VECTOR(uint16_t, 4))(0x5F3CL, (VECTOR(uint16_t, 2))(0x5F3CL, 3UL), 3UL), 3UL, 0x5F3CL, 3UL, (VECTOR(uint16_t, 2))(0x5F3CL, 3UL), (VECTOR(uint16_t, 2))(0x5F3CL, 3UL), 0x5F3CL, 3UL, 0x5F3CL, 3UL);
                VECTOR(uint16_t, 2) l_258 = (VECTOR(uint16_t, 2))(0x22A5L, 65532UL);
                VECTOR(uint16_t, 16) l_259 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xE293L), 0xE293L), 0xE293L, 1UL, 0xE293L, (VECTOR(uint16_t, 2))(1UL, 0xE293L), (VECTOR(uint16_t, 2))(1UL, 0xE293L), 1UL, 0xE293L, 1UL, 0xE293L);
                VECTOR(uint16_t, 2) l_260 = (VECTOR(uint16_t, 2))(0x0FE3L, 0x6632L);
                VECTOR(uint16_t, 4) l_261 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x93FCL), 0x93FCL);
                VECTOR(uint16_t, 8) l_262 = (VECTOR(uint16_t, 8))(0x5B7BL, (VECTOR(uint16_t, 4))(0x5B7BL, (VECTOR(uint16_t, 2))(0x5B7BL, 0x859AL), 0x859AL), 0x859AL, 0x5B7BL, 0x859AL);
                VECTOR(uint16_t, 2) l_263 = (VECTOR(uint16_t, 2))(0UL, 65528UL);
                int16_t l_264[3][8] = {{0x0BA1L,0x760AL,0x0BA1L,0x0BA1L,0x760AL,0x0BA1L,0x0BA1L,0x760AL},{0x0BA1L,0x760AL,0x0BA1L,0x0BA1L,0x760AL,0x0BA1L,0x0BA1L,0x760AL},{0x0BA1L,0x760AL,0x0BA1L,0x0BA1L,0x760AL,0x0BA1L,0x0BA1L,0x760AL}};
                int8_t l_265 = 1L;
                int32_t l_266 = 0x36FDA832L;
                VECTOR(uint8_t, 16) l_267 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 254UL), 254UL), 254UL, 1UL, 254UL, (VECTOR(uint8_t, 2))(1UL, 254UL), (VECTOR(uint8_t, 2))(1UL, 254UL), 1UL, 254UL, 1UL, 254UL);
                int8_t l_268 = 0x31L;
                uint32_t l_269 = 4294967294UL;
                VECTOR(int32_t, 8) l_283 = (VECTOR(int32_t, 8))(0x38D5E67BL, (VECTOR(int32_t, 4))(0x38D5E67BL, (VECTOR(int32_t, 2))(0x38D5E67BL, 0x463FF350L), 0x463FF350L), 0x463FF350L, 0x38D5E67BL, 0x463FF350L);
                VECTOR(int32_t, 8) l_284 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x383328BEL), 0x383328BEL), 0x383328BEL, (-1L), 0x383328BEL);
                uint16_t l_285 = 0x5C99L;
                int64_t l_286 = 0x75956892712D6447L;
                uint16_t l_287 = 0UL;
                VECTOR(int32_t, 2) l_288 = (VECTOR(int32_t, 2))(0x4835956CL, 0x773BA368L);
                VECTOR(int32_t, 16) l_289 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x14259A3EL), 0x14259A3EL), 0x14259A3EL, 8L, 0x14259A3EL, (VECTOR(int32_t, 2))(8L, 0x14259A3EL), (VECTOR(int32_t, 2))(8L, 0x14259A3EL), 8L, 0x14259A3EL, 8L, 0x14259A3EL);
                VECTOR(int32_t, 2) l_290 = (VECTOR(int32_t, 2))((-2L), 9L);
                uint16_t l_291 = 0xF1C2L;
                VECTOR(int64_t, 16) l_292 = (VECTOR(int64_t, 16))(0x40EE63E62D6348DCL, (VECTOR(int64_t, 4))(0x40EE63E62D6348DCL, (VECTOR(int64_t, 2))(0x40EE63E62D6348DCL, 7L), 7L), 7L, 0x40EE63E62D6348DCL, 7L, (VECTOR(int64_t, 2))(0x40EE63E62D6348DCL, 7L), (VECTOR(int64_t, 2))(0x40EE63E62D6348DCL, 7L), 0x40EE63E62D6348DCL, 7L, 0x40EE63E62D6348DCL, 7L);
                VECTOR(int32_t, 8) l_293 = (VECTOR(int32_t, 8))(0x65F1AFBDL, (VECTOR(int32_t, 4))(0x65F1AFBDL, (VECTOR(int32_t, 2))(0x65F1AFBDL, 7L), 7L), 7L, 0x65F1AFBDL, 7L);
                uint32_t l_294 = 4294967295UL;
                int8_t l_295 = 0x56L;
                VECTOR(int32_t, 2) l_296 = (VECTOR(int32_t, 2))(5L, 0x2D9EEF6EL);
                VECTOR(int32_t, 16) l_297 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
                VECTOR(int32_t, 16) l_298 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
                int i, j;
                l_214 = (l_213 = (l_212 = 0x23E8C22AL));
                if (l_215)
                { /* block id: 71 */
                    uint32_t l_216 = 4294967286UL;
                    uint32_t l_217 = 0x68C0C089L;
                    l_217 &= (l_216 ^= 0L);
                }
                else
                { /* block id: 74 */
                    uint32_t l_218 = 0x812B45DFL;
                    uint32_t l_219 = 1UL;
                    VECTOR(int64_t, 8) l_220 = (VECTOR(int64_t, 8))(0x27480D821A32C9F2L, (VECTOR(int64_t, 4))(0x27480D821A32C9F2L, (VECTOR(int64_t, 2))(0x27480D821A32C9F2L, 0x718FD0311AFBF1C9L), 0x718FD0311AFBF1C9L), 0x718FD0311AFBF1C9L, 0x27480D821A32C9F2L, 0x718FD0311AFBF1C9L);
                    int32_t l_223 = 9L;
                    int8_t l_224 = 1L;
                    VECTOR(uint32_t, 16) l_225 = (VECTOR(uint32_t, 16))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 4294967286UL), 4294967286UL), 4294967286UL, 4294967293UL, 4294967286UL, (VECTOR(uint32_t, 2))(4294967293UL, 4294967286UL), (VECTOR(uint32_t, 2))(4294967293UL, 4294967286UL), 4294967293UL, 4294967286UL, 4294967293UL, 4294967286UL);
                    VECTOR(uint16_t, 2) l_226 = (VECTOR(uint16_t, 2))(0x113FL, 0x6EE9L);
                    VECTOR(uint16_t, 4) l_227 = (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 65534UL), 65534UL);
                    VECTOR(uint32_t, 16) l_228 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xB6D6A342L), 0xB6D6A342L), 0xB6D6A342L, 0UL, 0xB6D6A342L, (VECTOR(uint32_t, 2))(0UL, 0xB6D6A342L), (VECTOR(uint32_t, 2))(0UL, 0xB6D6A342L), 0UL, 0xB6D6A342L, 0UL, 0xB6D6A342L);
                    VECTOR(uint32_t, 2) l_229 = (VECTOR(uint32_t, 2))(0UL, 0UL);
                    VECTOR(uint32_t, 8) l_230 = (VECTOR(uint32_t, 8))(0x453F8A4FL, (VECTOR(uint32_t, 4))(0x453F8A4FL, (VECTOR(uint32_t, 2))(0x453F8A4FL, 0x4D634411L), 0x4D634411L), 0x4D634411L, 0x453F8A4FL, 0x4D634411L);
                    VECTOR(uint32_t, 16) l_231 = (VECTOR(uint32_t, 16))(0xE71CDC07L, (VECTOR(uint32_t, 4))(0xE71CDC07L, (VECTOR(uint32_t, 2))(0xE71CDC07L, 0x2DF8BF00L), 0x2DF8BF00L), 0x2DF8BF00L, 0xE71CDC07L, 0x2DF8BF00L, (VECTOR(uint32_t, 2))(0xE71CDC07L, 0x2DF8BF00L), (VECTOR(uint32_t, 2))(0xE71CDC07L, 0x2DF8BF00L), 0xE71CDC07L, 0x2DF8BF00L, 0xE71CDC07L, 0x2DF8BF00L);
                    VECTOR(uint32_t, 4) l_232 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967292UL), 4294967292UL);
                    VECTOR(uint32_t, 2) l_233 = (VECTOR(uint32_t, 2))(5UL, 0x79CFFEB1L);
                    uint32_t l_234 = 0x9C130200L;
                    int16_t l_235 = 0x3D4EL;
                    uint32_t l_236 = 0x1A5533B8L;
                    VECTOR(uint8_t, 8) l_237 = (VECTOR(uint8_t, 8))(0x12L, (VECTOR(uint8_t, 4))(0x12L, (VECTOR(uint8_t, 2))(0x12L, 0x97L), 0x97L), 0x97L, 0x12L, 0x97L);
                    uint8_t l_238 = 255UL;
                    VECTOR(uint16_t, 8) l_239 = (VECTOR(uint16_t, 8))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 0x42ECL), 0x42ECL), 0x42ECL, 9UL, 0x42ECL);
                    uint32_t l_240[1];
                    VECTOR(uint16_t, 4) l_241 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65530UL), 65530UL);
                    int32_t l_242 = (-3L);
                    uint8_t l_243[7] = {0x6DL,0x6DL,0x6DL,0x6DL,0x6DL,0x6DL,0x6DL};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_240[i] = 0x50B7AB3FL;
                    l_206[0][2][3] = (((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(0x60ACL, ((VECTOR(uint16_t, 2))(65531UL, 0x549FL)), ((l_237.s4 &= ((l_235 = ((l_218 , ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 4))(0xBB856073L, ((VECTOR(uint32_t, 16))(0xC3DCDBF5L, ((l_219 , (((VECTOR(int64_t, 8))(l_220.s63501466)).s3 , (l_223 &= (l_213 = (++l_204.s4))))) , l_224), ((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 16))(l_225.s392dc4278f18d7c3)).even, ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 4))(l_226.xyyx)).lo))), ((VECTOR(uint16_t, 4))(l_227.wwxx)).even))), ((VECTOR(uint32_t, 4))(1UL, GROUP_DIVERGE(1, 1), 0x3302C104L, 0x2E093A66L)).hi))), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_228.scf)), 0x3885F111L, 0x68D6C9D1L)).zwwxywwx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_229.yyyyxxxy))))))))).s65, ((VECTOR(uint32_t, 4))(l_230.s1130)).hi))).yxyyyyyx, ((VECTOR(uint32_t, 8))(l_231.s36b767b8))))), 1UL, 1UL, 0x943293B1L, ((VECTOR(uint32_t, 2))(l_232.wx)), 0x4D757702L)).sa, 0UL, 7UL)).zxzyywwyxzzzzyxz, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 4))(0x3228F538L, ((VECTOR(uint32_t, 2))(l_233.xx)), 4294967289UL)).ywzwxwzx, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(0x8EA9E55EL, 0x081E52A8L, 4294967295UL, 0xCB6A71BAL)).even)).xxyxxyxy))).s0004077622576577))).s0) , l_234)) , (l_203.y = l_236))) , (l_226.x |= l_238)), ((VECTOR(uint16_t, 4))(l_239.s2375)))).odd, ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 8))((l_226.y = l_240[0]), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_241.ywwx)).odd)), 0UL, l_242, ((VECTOR(uint16_t, 2))(0x299EL)), 0UL)), ((VECTOR(uint16_t, 8))(1UL))))).s4234106664655762, ((VECTOR(uint16_t, 16))(0UL))))).hi)))), ((VECTOR(uint16_t, 8))(65535UL))))).even, ((VECTOR(uint16_t, 4))(65528UL)))))))).y , (void*)0);
                    l_243[4] = 5L;
                }
                if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x51B6FB1FL, 0x209DB0E4L, ((VECTOR(int32_t, 2))(0L, 1L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0x5FE38EC4L, 0x1229C483L)).xyyxxxxxyxxyxyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_244.yyxwywxz)).s2143063333121302)), ((VECTOR(int32_t, 2))(0x2D8DB439L, 1L)).xxxyxyyxyyyyyyxy))).sa5d0))), 0x38274297L, (l_245 , 0x284EDC7AL), (-4L), 0x6350B816L)).odd)), (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 2))(0xA19D07E7L, 0xD3353B18L)).yxxyxyyxxxyyyxxx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0UL, 0x4499DD3CL)).yyyyyyxyxyxyyyyx)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(1UL, 7UL, 0xBBB0L, 0xBC0EL, ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(65535UL, 0x7432L, 0x9A32L, 0x93CFL)).lo)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_246.yy)).yxyxyxyy)).s64))).yxyy, ((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 4))(l_247.zxxy)).yyywxyxx))).odd, ((VECTOR(uint16_t, 2))(0xF132L, 0xF6A5L)).yxyx))), ((VECTOR(uint16_t, 2))(0xDAF8L, 1UL)).xxxy))))).s0073023244020575)).s17, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65532UL, 65535UL)).yxyx)).even))).yxxx)).even, ((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 2))(l_248.s19)), ((VECTOR(uint16_t, 2))(1UL, 0xFE40L))))).xxyy, ((VECTOR(uint16_t, 16))(0UL, 0xAE7EL, 65532UL, 0x65AAL, 65535UL, ((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 2))(l_249.wz)).xxyyyyxx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_250, 0UL, l_251, ((VECTOR(uint16_t, 4))(l_252.s6620)), 0UL)).s27)).xyyxxyxx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_253.yyzy)).xywwzwwywzwwwwyy)).even))), 0xBD04L, 65527UL, 65535UL)).s0cfa, ((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_254.s3546)).even))))).xxxyyyxxxxyxyyyy)), ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 16))(0xB245L, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_255.yxwx)).zwxzwyww)), ((VECTOR(uint16_t, 4))(l_256.yxxy)), ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 2))(65535UL, 65528UL)), ((VECTOR(uint16_t, 4))(l_257.seba1)).lo))), 0x2D2BL)).s79, ((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 2))(l_258.xx)).xxxxyxxx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(l_259.se5168bc2bdd61a87)).secd7, ((VECTOR(uint16_t, 8))(l_260.yyxyxyyy)).hi))).even)).xyxxyyyx, ((VECTOR(uint16_t, 4))(l_261.zwyw)).yxyyxxyy))).s7, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(0UL, 0x732DL, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 4))(l_262.s2206)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 4))(GROUP_DIVERGE(0, 1), ((VECTOR(uint16_t, 2))(l_263.yx)), 0xDBBEL)).hi))), 0x80ADL, 2UL)).wywxxzxy, ((VECTOR(uint16_t, 16))(0xF0DBL, l_264[1][1], l_265, l_266, 0UL, 65527UL, 0UL, 65526UL, l_267.sb, l_268, 0xA25AL, 0UL, ((VECTOR(uint16_t, 4))(0x2434L)))).even))).odd)))).xxzxzzxxwwwwxzyw, ((VECTOR(uint16_t, 16))(0x0F9EL))))).s5b)), 0x184AL, 0x1BB2L)), ((VECTOR(uint16_t, 4))(1UL))))).even)).yyyy))).xxyzwyyzwyzyywyz)).s0, 65529UL, ((VECTOR(uint16_t, 4))(0x84D0L)))))).s0, 0xC4ADL, 0xC8B4L)).hi)).yyxyyyxxyyxyxyxx, ((VECTOR(uint16_t, 16))(65535UL)), ((VECTOR(uint16_t, 16))(4UL))))).sdd, ((VECTOR(uint16_t, 2))(0x4E7CL))))).xyxxxyyyyxyyyxyy, ((VECTOR(uint16_t, 16))(0x881AL)))))))).s7689))).odd))).yxyyxyxx, ((VECTOR(uint16_t, 8))(65535UL))))).s6312404062710135))))).odd)).s2 , l_269), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(6L)), ((VECTOR(int32_t, 2))((-1L))), 0L)))).sb)
                { /* block id: 86 */
                    int32_t l_270 = (-6L);
                    for (l_270 = 0; (l_270 > (-17)); l_270 = safe_sub_func_int64_t_s_s(l_270, 4))
                    { /* block id: 89 */
                        uint32_t l_273 = 4294967295UL;
                        uint32_t l_274[1][9] = {{4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL}};
                        int i, j;
                        l_274[0][1] = l_273;
                    }
                }
                else
                { /* block id: 92 */
                    int32_t l_275 = 1L;
                    for (l_275 = 11; (l_275 <= (-22)); l_275 = safe_sub_func_int16_t_s_s(l_275, 6))
                    { /* block id: 95 */
                        int32_t l_279 = 0x71183D35L;
                        int32_t *l_278 = &l_279;
                        VECTOR(int32_t, 2) l_280 = (VECTOR(int32_t, 2))(0x1C93AB68L, 1L);
                        int8_t l_281 = 0x3AL;
                        uint16_t l_282 = 0xDDAEL;
                        int i;
                        l_207[0] = l_278;
                        (*l_278) ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_280.xxxxxyxx)).s0003177327114570)).s1;
                        l_282 ^= l_281;
                    }
                    l_275 ^= 6L;
                }
                if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(l_283.s17626316)), ((VECTOR(int32_t, 16))((-3L), ((VECTOR(int32_t, 2))(l_284.s17)), ((l_208 = l_285) , (-1L)), (-8L), l_286, l_287, ((VECTOR(int32_t, 8))(l_288.yyxxxxyx)), 0L)).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_289.s50)), (l_292.sc ^= (l_291 = ((VECTOR(int32_t, 16))(l_290.xyyyxyxxxxxxxyyy)).sd)), ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(l_293.s47054042)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))((-8L), (l_295 = (l_283.s2 = l_294)), ((VECTOR(int32_t, 2))(0x3502A0FDL, (-1L))), 5L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_296.xxxyxxxy)).s12)), 8L)).hi, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0L, 0x390D629EL)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_297.s05)).xyxy)).even))).xyyy))).yxyywxyxywwyyzzx)).even, ((VECTOR(int32_t, 2))(0x725B496DL, 4L)).xyxyxxyx))), 0x71824B5AL, 1L, ((VECTOR(int32_t, 4))(l_298.sd193)).w, 0x67964357L, 9L)).odd))).lo)).zxxyyzxx)).s7)
                { /* block id: 107 */
                    int32_t l_299[1][1];
                    int32_t *l_312 = &l_299[0][0];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_299[i][j] = 0x45E04DB1L;
                    }
                    for (l_299[0][0] = 0; (l_299[0][0] == 1); l_299[0][0]++)
                    { /* block id: 110 */
                        int16_t l_302 = 0x06E8L;
                        int32_t l_303[6][6][7] = {{{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L}},{{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L}},{{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L}},{{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L}},{{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L}},{{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L},{0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L,0x637CEB4EL,0x637CEB4EL,0x4F99A9E5L,0x4F99A9E5L}}};
                        int32_t l_305 = 0x12EB95AFL;
                        int32_t *l_304 = &l_305;
                        int32_t *l_306 = &l_305;
                        uint8_t l_307 = 0UL;
                        uint8_t l_308[2][7];
                        int32_t *l_309[3][9] = {{&l_305,&l_305,&l_305,&l_305,&l_305,&l_305,&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305,&l_305,&l_305,&l_305,&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305,&l_305,&l_305,&l_305,&l_305,&l_305,&l_305}};
                        int32_t *l_310 = &l_305;
                        int16_t l_311 = 0x582CL;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_308[i][j] = 0x60L;
                        }
                        l_303[1][3][2] = (l_302 &= (-1L));
                        l_306 = (l_304 = l_304);
                        l_310 = (l_307 , (FAKE_DIVERGE(p_560->global_2_offset, get_global_id(2), 10) , (l_308[0][3] , (l_207[0] = l_309[0][2]))));
                        (*l_310) &= l_311;
                    }
                    l_206[0][2][3] = l_312;
                    for (l_299[0][0] = (-24); (l_299[0][0] == 28); ++l_299[0][0])
                    { /* block id: 122 */
                        int32_t l_316 = 0x6424097CL;
                        int32_t *l_315 = &l_316;
                        VECTOR(uint64_t, 2) l_317 = (VECTOR(uint64_t, 2))(1UL, 1UL);
                        int32_t l_318 = 0L;
                        int8_t l_319 = (-5L);
                        uint64_t l_320 = 0xFCB02DF14B8F8CD4L;
                        VECTOR(uint64_t, 4) l_321 = (VECTOR(uint64_t, 4))(0xFE7A8B4A64203FD3L, (VECTOR(uint64_t, 2))(0xFE7A8B4A64203FD3L, 0x8500FCC9972FAF3BL), 0x8500FCC9972FAF3BL);
                        VECTOR(uint32_t, 16) l_322 = (VECTOR(uint32_t, 16))(0x5C99DA52L, (VECTOR(uint32_t, 4))(0x5C99DA52L, (VECTOR(uint32_t, 2))(0x5C99DA52L, 0UL), 0UL), 0UL, 0x5C99DA52L, 0UL, (VECTOR(uint32_t, 2))(0x5C99DA52L, 0UL), (VECTOR(uint32_t, 2))(0x5C99DA52L, 0UL), 0x5C99DA52L, 0UL, 0x5C99DA52L, 0UL);
                        VECTOR(int32_t, 4) l_323 = (VECTOR(int32_t, 4))(0x63465458L, (VECTOR(int32_t, 2))(0x63465458L, 5L), 5L);
                        int i;
                        l_205 = l_315;
                        l_207[0] = ((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_317.xyxxxyyxyxxyyyxx)))).odd, ((VECTOR(uint64_t, 8))(l_318, l_319, 0x43F397CFA197C6EFL, (l_195 ^= ((l_267.s1 = 254UL) , l_320)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_321.xyzw))))))))).s5271366540263721)).sc , ((VECTOR(uint32_t, 16))(l_322.s24bf5854cd0c41b4)).s8) , (l_315 = (void*)0));
                        (*l_205) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_323.zwxz)).wwzxzxwzwxxzywxx)).s9;
                    }
                }
                else
                { /* block id: 130 */
                    int32_t l_324 = 6L;
                    uint32_t l_325 = 1UL;
                    VECTOR(uint8_t, 4) l_326 = (VECTOR(uint8_t, 4))(0x65L, (VECTOR(uint8_t, 2))(0x65L, 1UL), 1UL);
                    int i;
                    l_325 |= l_324;
                    ++l_326.w;
                }
            }
            unsigned int result = 0;
            result += l_195;
            result += l_198;
            result += l_199.y;
            result += l_199.x;
            result += l_200.w;
            result += l_200.z;
            result += l_200.y;
            result += l_200.x;
            result += l_201.sf;
            result += l_201.se;
            result += l_201.sd;
            result += l_201.sc;
            result += l_201.sb;
            result += l_201.sa;
            result += l_201.s9;
            result += l_201.s8;
            result += l_201.s7;
            result += l_201.s6;
            result += l_201.s5;
            result += l_201.s4;
            result += l_201.s3;
            result += l_201.s2;
            result += l_201.s1;
            result += l_201.s0;
            result += l_202;
            result += l_203.w;
            result += l_203.z;
            result += l_203.y;
            result += l_203.x;
            result += l_204.sf;
            result += l_204.se;
            result += l_204.sd;
            result += l_204.sc;
            result += l_204.sb;
            result += l_204.sa;
            result += l_204.s9;
            result += l_204.s8;
            result += l_204.s7;
            result += l_204.s6;
            result += l_204.s5;
            result += l_204.s4;
            result += l_204.s3;
            result += l_204.s2;
            result += l_204.s1;
            result += l_204.s0;
            result += l_208;
            result += l_209;
            atomic_add(&p_560->l_special_values[3], result);
        }
        else
        { /* block id: 135 */
            (1 + 1);
        }
        ++l_334;
        p_21 = p_20;
    }
    else
    { /* block id: 140 */
        return (*p_20);
    }
    (*p_20) = (~((((safe_rshift_func_uint16_t_u_u(((l_330 && 0xFBE9L) && ((void*)0 != &l_179[3][9][0])), 15)) , ((*l_342) = l_341)) == &l_179[0][2][0]) | (safe_rshift_func_int16_t_s_u(((0x7A54L < 0x564CL) != GROUP_DIVERGE(0, 1)), 10))));
    l_350.s1--;
    return (*p_560->g_4);
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_16 p_560->g_76 p_560->g_60 p_560->g_comm_values p_560->g_133 p_560->g_47 p_560->g_49 p_560->g_4 p_560->g_5 p_560->g_78
 * writes: p_560->g_60 p_560->g_78 p_560->g_133 p_560->g_5 p_560->g_49 p_560->g_4 p_560->g_74 p_560->g_76 p_560->g_158 p_560->g_109
 */
int32_t * func_22(int8_t  p_23, int32_t  p_24, uint8_t  p_25, uint32_t  p_26, int64_t  p_27, struct S0 * p_560)
{ /* block id: 34 */
    int32_t **l_114[2][3] = {{&p_560->g_4,&p_560->g_4,&p_560->g_4},{&p_560->g_4,&p_560->g_4,&p_560->g_4}};
    uint64_t *l_123 = &p_560->g_60;
    uint8_t *l_130[2];
    VECTOR(int8_t, 8) l_134 = (VECTOR(int8_t, 8))(0x11L, (VECTOR(int8_t, 4))(0x11L, (VECTOR(int8_t, 2))(0x11L, 1L), 1L), 1L, 0x11L, 1L);
    int8_t l_143 = 0x51L;
    uint16_t *l_144[9] = {&p_560->g_78,&p_560->g_78,&p_560->g_78,&p_560->g_78,&p_560->g_78,&p_560->g_78,&p_560->g_78,&p_560->g_78,&p_560->g_78};
    uint16_t l_145[7][6][3] = {{{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL}},{{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL}},{{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL}},{{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL}},{{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL}},{{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL}},{{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL},{65527UL,65528UL,65527UL}}};
    int32_t *l_146 = &p_560->g_5[3][0];
    VECTOR(int64_t, 4) l_147 = (VECTOR(int64_t, 4))(0x321BD9B3265BCB94L, (VECTOR(int64_t, 2))(0x321BD9B3265BCB94L, 0x5EEF02D27C786321L), 0x5EEF02D27C786321L);
    uint16_t **l_156 = (void*)0;
    uint16_t **l_157[1];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_130[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_157[i] = &l_144[4];
    (*p_560->g_4) = ((l_114[0][0] != ((safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(p_560->g_16, ((2UL | ((((p_560->g_76[8][1][0] ^ ((l_145[5][2][2] = (safe_sub_func_uint64_t_u_u((--(*l_123)), ((((safe_mod_func_uint8_t_u_u((((((VECTOR(int32_t, 16))(0x3231F37CL, (1UL < ((safe_mul_func_uint8_t_u_u(0x02L, (p_25 = p_560->g_comm_values[p_560->tid]))) != (safe_sub_func_uint16_t_u_u((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 2))(p_560->g_133.xx)).xxyyxyyyxyyxxxyy, ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 2))(5L, (-1L))).yyxxxyxxyxyyyyyx, ((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(l_134.s74)).xxyxyxyyyxyxxyxy, (int8_t)(safe_rshift_func_uint8_t_u_s((p_560->g_133.y &= ((p_560->g_78 = (safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(p_560->g_47.y, ((safe_add_func_uint32_t_u_u((l_143 && (-1L)), 4294967295UL)) > p_24))), 0xBA409152L))) ^ 0xF2A6L)), p_560->g_49.z)))))))).even)).hi, ((VECTOR(uint8_t, 4))(0x16L))))).xyxyyzzyzwzzxyyz))).s4c)).yxxyyxyx, ((VECTOR(uint8_t, 8))(0UL))))).s77)).xyxxyyyxyxxxyyyy))))).sd || p_560->g_49.w), p_26)))), (-1L), ((VECTOR(int32_t, 8))(0x3C0C79DFL)), 2L, ((VECTOR(int32_t, 2))((-2L))), (-1L), (-6L))).sa , p_25) , p_26) <= p_560->g_49.x), (-4L))) , FAKE_DIVERGE(p_560->global_2_offset, get_global_id(2), 10)) && 1L) > 0xD6B2CBE3L)))) ^ 0x3849L)) & 18446744073709551615UL) != p_26) < p_560->g_76[3][1][4])) >= p_24))), p_23)), p_24)) , l_114[0][0])) >= 5L);
    l_146 = func_41(p_560->g_16, (0x01DACA5692F92BE1L | ((*l_123) = p_25)), (((&p_27 == (void*)0) != (p_25 , ((p_23 & ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967288UL, 1UL)), 0x38E576FCL, 3UL)))))).zxwywxzwwywzwxxw)).sb56d)))).x) | (6UL | (p_560->g_49.z = (1L | p_26)))))) , p_23), &p_560->g_76[7][0][5], p_560->g_76[7][1][3], p_560);
    p_560->g_109[5] = func_41(((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_147.zzzy)))))).wxzyzxzw)).s0 != (safe_add_func_uint64_t_u_u(p_26, ((*l_123) = GROUP_DIVERGE(0, 1))))) <= (&p_560->g_93 == (void*)0)), p_26, p_560->g_49.w, &p_560->g_5[5][2], (safe_rshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u((p_560->g_78 ^= ((*l_146) = (safe_lshift_func_int8_t_s_u((~p_560->g_76[1][1][3]), 5)))), (p_560->g_133.y == ((p_560->g_158[4] = &l_145[5][2][2]) != (void*)0)))) == p_25), p_23)), p_560);
    return &p_560->g_5[5][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_76 p_560->g_5 p_560->g_93 p_560->g_78 p_560->g_49 p_560->g_108 p_560->g_60
 * writes: p_560->g_108
 */
uint32_t  func_28(int32_t * p_29, int64_t  p_30, int32_t * p_31, int32_t  p_32, struct S0 * p_560)
{ /* block id: 29 */
    int32_t *l_104 = &p_560->g_76[2][1][6];
    int16_t *l_107 = &p_560->g_108;
    int32_t *l_110[6] = {&p_560->g_74,&p_560->g_74,&p_560->g_74,&p_560->g_74,&p_560->g_74,&p_560->g_74};
    uint8_t l_111 = 1UL;
    int i;
    l_111 ^= (((*l_107) ^= (((((9L ^ (18446744073709551614UL & (safe_lshift_func_uint16_t_u_s(((0x0864EB220E445E5FL & (((&p_560->g_74 != l_104) , (+((safe_sub_func_int16_t_s_s(p_32, (((*l_104) > 0x44B6F7AEC48A50E5L) && 0x29L))) > p_560->g_5[1][3]))) == p_560->g_93)) && p_560->g_78), 15)))) & p_560->g_49.y) && (*l_104)) >= (*l_104)) && p_560->g_49.y)) | p_560->g_60);
    return p_560->g_108;
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_78 p_560->g_49 p_560->g_93 p_560->g_16 p_560->g_76 p_560->g_47 p_560->g_comm_values p_560->g_74 p_560->g_5
 * writes: p_560->g_78 p_560->g_49 p_560->g_93 p_560->g_4 p_560->g_5 p_560->g_74 p_560->g_76
 */
uint8_t  func_37(int32_t * p_38, uint64_t  p_39, int32_t * p_40, struct S0 * p_560)
{ /* block id: 22 */
    uint16_t *l_77 = &p_560->g_78;
    uint8_t *l_91 = (void*)0;
    uint32_t *l_92 = &p_560->g_93;
    int32_t l_96[7][6][6] = {{{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL}},{{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL}},{{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL}},{{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL}},{{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL}},{{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL}},{{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL},{0x50493E9EL,0x7A5B985AL,0L,0x50493E9EL,0x7F43755EL,0x06FB93DBL}}};
    int32_t **l_97[5] = {&p_560->g_4,&p_560->g_4,&p_560->g_4,&p_560->g_4,&p_560->g_4};
    int i, j, k;
    p_38 = func_41(((*l_77)--), (((safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(0x3D7553AF010A3715L, (safe_sub_func_int32_t_s_s((0x36661290L & (safe_add_func_int64_t_s_s(((p_560->g_49.w--) , (((void*)0 == l_91) < ((++(*l_92)) < 0xF4AA1FF7L))), p_39))), (*p_40))))), 4)) != ((p_560->g_76[1][0][2] & ((p_39 >= p_560->g_47.y) <= 0x21L)) > p_560->g_comm_values[p_560->tid])) >= p_560->g_74), l_96[1][2][2], &p_560->g_5[4][5], p_560->g_76[8][1][0], p_560);
    return p_560->g_74;
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_5
 * writes: p_560->g_4 p_560->g_5 p_560->g_74 p_560->g_76
 */
int32_t * func_41(uint16_t  p_42, int8_t  p_43, int32_t  p_44, int32_t * p_45, uint64_t  p_46, struct S0 * p_560)
{ /* block id: 16 */
    int32_t *l_71 = &p_560->g_5[8][4];
    int32_t *l_72 = &p_560->g_5[5][2];
    int32_t *l_73 = &p_560->g_74;
    int32_t *l_75 = &p_560->g_76[8][1][0];
    p_560->g_4 = l_71;
    (*l_75) = ((*l_73) = ((*l_71) ^= ((void*)0 != l_72)));
    return l_73;
}


/* ------------------------------------------ */
/* 
 * reads : p_560->g_4 p_560->g_16
 * writes: p_560->g_4
 */
int32_t  func_53(uint32_t  p_54, uint8_t  p_55, int32_t * p_56, uint64_t  p_57, int32_t  p_58, struct S0 * p_560)
{ /* block id: 12 */
    int32_t **l_69[2];
    int i;
    for (i = 0; i < 2; i++)
        l_69[i] = &p_560->g_4;
    p_560->g_4 = &p_560->g_16;
    return (*p_560->g_4);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[30];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 30; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[30];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 30; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[9];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 9; i++)
            l_comm_values[i] = 1;
    struct S0 c_561;
    struct S0* p_560 = &c_561;
    struct S0 c_562 = {
        {{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L},{0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L,0x72D4EA68L}}, // p_560->g_5
        &p_560->g_5[5][2], // p_560->g_4
        9L, // p_560->g_16
        (VECTOR(uint8_t, 2))(0xF0L, 0x18L), // p_560->g_47
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xB2L), 0xB2L), // p_560->g_49
        0x0421A16747B1D005L, // p_560->g_60
        (-1L), // p_560->g_74
        {{{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L},{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L}},{{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L},{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L}},{{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L},{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L}},{{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L},{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L}},{{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L},{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L}},{{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L},{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L}},{{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L},{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L}},{{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L},{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L}},{{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L},{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L}},{{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L},{0x5FDFBAD2L,0x5FDFBAD2L,(-7L),0x2C85E55DL,6L,0x63BBBF13L,0L}}}, // p_560->g_76
        2UL, // p_560->g_78
        4294967288UL, // p_560->g_93
        0x7A59L, // p_560->g_108
        {&p_560->g_16,(void*)0,&p_560->g_16,&p_560->g_16,(void*)0,&p_560->g_16,&p_560->g_16,(void*)0,&p_560->g_16}, // p_560->g_109
        (VECTOR(uint8_t, 2))(255UL, 0xABL), // p_560->g_133
        0x103EL, // p_560->g_159
        {&p_560->g_159,&p_560->g_159,&p_560->g_159,&p_560->g_159,&p_560->g_159,&p_560->g_159}, // p_560->g_158
        (VECTOR(int16_t, 16))(0x27D1L, (VECTOR(int16_t, 4))(0x27D1L, (VECTOR(int16_t, 2))(0x27D1L, 1L), 1L), 1L, 0x27D1L, 1L, (VECTOR(int16_t, 2))(0x27D1L, 1L), (VECTOR(int16_t, 2))(0x27D1L, 1L), 0x27D1L, 1L, 0x27D1L, 1L), // p_560->g_163
        0x63D85014L, // p_560->g_348
        0xF42B1A88B5D86F78L, // p_560->g_359
        &p_560->g_4, // p_560->g_366
        (void*)0, // p_560->g_377
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 9L), 9L), 9L, 1L, 9L, (VECTOR(int64_t, 2))(1L, 9L), (VECTOR(int64_t, 2))(1L, 9L), 1L, 9L, 1L, 9L), // p_560->g_423
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_560->g_429
        &p_560->g_4, // p_560->g_431
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x16L), 0x16L), 0x16L, (-1L), 0x16L, (VECTOR(int8_t, 2))((-1L), 0x16L), (VECTOR(int8_t, 2))((-1L), 0x16L), (-1L), 0x16L, (-1L), 0x16L), // p_560->g_434
        (VECTOR(int8_t, 16))(0x2EL, (VECTOR(int8_t, 4))(0x2EL, (VECTOR(int8_t, 2))(0x2EL, 1L), 1L), 1L, 0x2EL, 1L, (VECTOR(int8_t, 2))(0x2EL, 1L), (VECTOR(int8_t, 2))(0x2EL, 1L), 0x2EL, 1L, 0x2EL, 1L), // p_560->g_436
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 7L), 7L), 7L, (-1L), 7L), // p_560->g_459
        &p_560->g_158[1], // p_560->g_476
        {&p_560->g_476,&p_560->g_476,&p_560->g_476,&p_560->g_476,&p_560->g_476}, // p_560->g_475
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x297AL), 0x297AL), 0x297AL, 1L, 0x297AL, (VECTOR(int16_t, 2))(1L, 0x297AL), (VECTOR(int16_t, 2))(1L, 0x297AL), 1L, 0x297AL, 1L, 0x297AL), // p_560->g_499
        &p_560->g_76[8][1][0], // p_560->g_507
        (void*)0, // p_560->g_510
        (VECTOR(uint8_t, 16))(0x43L, (VECTOR(uint8_t, 4))(0x43L, (VECTOR(uint8_t, 2))(0x43L, 0x46L), 0x46L), 0x46L, 0x43L, 0x46L, (VECTOR(uint8_t, 2))(0x43L, 0x46L), (VECTOR(uint8_t, 2))(0x43L, 0x46L), 0x43L, 0x46L, 0x43L, 0x46L), // p_560->g_525
        {{{&p_560->g_4,&p_560->g_4,&p_560->g_4,&p_560->g_4}},{{&p_560->g_4,&p_560->g_4,&p_560->g_4,&p_560->g_4}},{{&p_560->g_4,&p_560->g_4,&p_560->g_4,&p_560->g_4}},{{&p_560->g_4,&p_560->g_4,&p_560->g_4,&p_560->g_4}},{{&p_560->g_4,&p_560->g_4,&p_560->g_4,&p_560->g_4}},{{&p_560->g_4,&p_560->g_4,&p_560->g_4,&p_560->g_4}}}, // p_560->g_544
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x3529L), 0x3529L), // p_560->g_546
        {{&p_560->g_475[2],&p_560->g_475[2],&p_560->g_475[2],&p_560->g_475[2],&p_560->g_475[2]},{&p_560->g_475[2],&p_560->g_475[2],&p_560->g_475[2],&p_560->g_475[2],&p_560->g_475[2]},{&p_560->g_475[2],&p_560->g_475[2],&p_560->g_475[2],&p_560->g_475[2],&p_560->g_475[2]},{&p_560->g_475[2],&p_560->g_475[2],&p_560->g_475[2],&p_560->g_475[2],&p_560->g_475[2]}}, // p_560->g_555
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
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 9)), permutations[0][get_linear_local_id()])), // p_560->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
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
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_560->g_5[i][j], "p_560->g_5[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_560->g_16, "p_560->g_16", print_hash_value);
    transparent_crc(p_560->g_47.x, "p_560->g_47.x", print_hash_value);
    transparent_crc(p_560->g_47.y, "p_560->g_47.y", print_hash_value);
    transparent_crc(p_560->g_49.x, "p_560->g_49.x", print_hash_value);
    transparent_crc(p_560->g_49.y, "p_560->g_49.y", print_hash_value);
    transparent_crc(p_560->g_49.z, "p_560->g_49.z", print_hash_value);
    transparent_crc(p_560->g_49.w, "p_560->g_49.w", print_hash_value);
    transparent_crc(p_560->g_60, "p_560->g_60", print_hash_value);
    transparent_crc(p_560->g_74, "p_560->g_74", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_560->g_76[i][j][k], "p_560->g_76[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_560->g_78, "p_560->g_78", print_hash_value);
    transparent_crc(p_560->g_93, "p_560->g_93", print_hash_value);
    transparent_crc(p_560->g_108, "p_560->g_108", print_hash_value);
    transparent_crc(p_560->g_133.x, "p_560->g_133.x", print_hash_value);
    transparent_crc(p_560->g_133.y, "p_560->g_133.y", print_hash_value);
    transparent_crc(p_560->g_159, "p_560->g_159", print_hash_value);
    transparent_crc(p_560->g_163.s0, "p_560->g_163.s0", print_hash_value);
    transparent_crc(p_560->g_163.s1, "p_560->g_163.s1", print_hash_value);
    transparent_crc(p_560->g_163.s2, "p_560->g_163.s2", print_hash_value);
    transparent_crc(p_560->g_163.s3, "p_560->g_163.s3", print_hash_value);
    transparent_crc(p_560->g_163.s4, "p_560->g_163.s4", print_hash_value);
    transparent_crc(p_560->g_163.s5, "p_560->g_163.s5", print_hash_value);
    transparent_crc(p_560->g_163.s6, "p_560->g_163.s6", print_hash_value);
    transparent_crc(p_560->g_163.s7, "p_560->g_163.s7", print_hash_value);
    transparent_crc(p_560->g_163.s8, "p_560->g_163.s8", print_hash_value);
    transparent_crc(p_560->g_163.s9, "p_560->g_163.s9", print_hash_value);
    transparent_crc(p_560->g_163.sa, "p_560->g_163.sa", print_hash_value);
    transparent_crc(p_560->g_163.sb, "p_560->g_163.sb", print_hash_value);
    transparent_crc(p_560->g_163.sc, "p_560->g_163.sc", print_hash_value);
    transparent_crc(p_560->g_163.sd, "p_560->g_163.sd", print_hash_value);
    transparent_crc(p_560->g_163.se, "p_560->g_163.se", print_hash_value);
    transparent_crc(p_560->g_163.sf, "p_560->g_163.sf", print_hash_value);
    transparent_crc(p_560->g_348, "p_560->g_348", print_hash_value);
    transparent_crc(p_560->g_359, "p_560->g_359", print_hash_value);
    transparent_crc(p_560->g_423.s0, "p_560->g_423.s0", print_hash_value);
    transparent_crc(p_560->g_423.s1, "p_560->g_423.s1", print_hash_value);
    transparent_crc(p_560->g_423.s2, "p_560->g_423.s2", print_hash_value);
    transparent_crc(p_560->g_423.s3, "p_560->g_423.s3", print_hash_value);
    transparent_crc(p_560->g_423.s4, "p_560->g_423.s4", print_hash_value);
    transparent_crc(p_560->g_423.s5, "p_560->g_423.s5", print_hash_value);
    transparent_crc(p_560->g_423.s6, "p_560->g_423.s6", print_hash_value);
    transparent_crc(p_560->g_423.s7, "p_560->g_423.s7", print_hash_value);
    transparent_crc(p_560->g_423.s8, "p_560->g_423.s8", print_hash_value);
    transparent_crc(p_560->g_423.s9, "p_560->g_423.s9", print_hash_value);
    transparent_crc(p_560->g_423.sa, "p_560->g_423.sa", print_hash_value);
    transparent_crc(p_560->g_423.sb, "p_560->g_423.sb", print_hash_value);
    transparent_crc(p_560->g_423.sc, "p_560->g_423.sc", print_hash_value);
    transparent_crc(p_560->g_423.sd, "p_560->g_423.sd", print_hash_value);
    transparent_crc(p_560->g_423.se, "p_560->g_423.se", print_hash_value);
    transparent_crc(p_560->g_423.sf, "p_560->g_423.sf", print_hash_value);
    transparent_crc(p_560->g_434.s0, "p_560->g_434.s0", print_hash_value);
    transparent_crc(p_560->g_434.s1, "p_560->g_434.s1", print_hash_value);
    transparent_crc(p_560->g_434.s2, "p_560->g_434.s2", print_hash_value);
    transparent_crc(p_560->g_434.s3, "p_560->g_434.s3", print_hash_value);
    transparent_crc(p_560->g_434.s4, "p_560->g_434.s4", print_hash_value);
    transparent_crc(p_560->g_434.s5, "p_560->g_434.s5", print_hash_value);
    transparent_crc(p_560->g_434.s6, "p_560->g_434.s6", print_hash_value);
    transparent_crc(p_560->g_434.s7, "p_560->g_434.s7", print_hash_value);
    transparent_crc(p_560->g_434.s8, "p_560->g_434.s8", print_hash_value);
    transparent_crc(p_560->g_434.s9, "p_560->g_434.s9", print_hash_value);
    transparent_crc(p_560->g_434.sa, "p_560->g_434.sa", print_hash_value);
    transparent_crc(p_560->g_434.sb, "p_560->g_434.sb", print_hash_value);
    transparent_crc(p_560->g_434.sc, "p_560->g_434.sc", print_hash_value);
    transparent_crc(p_560->g_434.sd, "p_560->g_434.sd", print_hash_value);
    transparent_crc(p_560->g_434.se, "p_560->g_434.se", print_hash_value);
    transparent_crc(p_560->g_434.sf, "p_560->g_434.sf", print_hash_value);
    transparent_crc(p_560->g_436.s0, "p_560->g_436.s0", print_hash_value);
    transparent_crc(p_560->g_436.s1, "p_560->g_436.s1", print_hash_value);
    transparent_crc(p_560->g_436.s2, "p_560->g_436.s2", print_hash_value);
    transparent_crc(p_560->g_436.s3, "p_560->g_436.s3", print_hash_value);
    transparent_crc(p_560->g_436.s4, "p_560->g_436.s4", print_hash_value);
    transparent_crc(p_560->g_436.s5, "p_560->g_436.s5", print_hash_value);
    transparent_crc(p_560->g_436.s6, "p_560->g_436.s6", print_hash_value);
    transparent_crc(p_560->g_436.s7, "p_560->g_436.s7", print_hash_value);
    transparent_crc(p_560->g_436.s8, "p_560->g_436.s8", print_hash_value);
    transparent_crc(p_560->g_436.s9, "p_560->g_436.s9", print_hash_value);
    transparent_crc(p_560->g_436.sa, "p_560->g_436.sa", print_hash_value);
    transparent_crc(p_560->g_436.sb, "p_560->g_436.sb", print_hash_value);
    transparent_crc(p_560->g_436.sc, "p_560->g_436.sc", print_hash_value);
    transparent_crc(p_560->g_436.sd, "p_560->g_436.sd", print_hash_value);
    transparent_crc(p_560->g_436.se, "p_560->g_436.se", print_hash_value);
    transparent_crc(p_560->g_436.sf, "p_560->g_436.sf", print_hash_value);
    transparent_crc(p_560->g_459.s0, "p_560->g_459.s0", print_hash_value);
    transparent_crc(p_560->g_459.s1, "p_560->g_459.s1", print_hash_value);
    transparent_crc(p_560->g_459.s2, "p_560->g_459.s2", print_hash_value);
    transparent_crc(p_560->g_459.s3, "p_560->g_459.s3", print_hash_value);
    transparent_crc(p_560->g_459.s4, "p_560->g_459.s4", print_hash_value);
    transparent_crc(p_560->g_459.s5, "p_560->g_459.s5", print_hash_value);
    transparent_crc(p_560->g_459.s6, "p_560->g_459.s6", print_hash_value);
    transparent_crc(p_560->g_459.s7, "p_560->g_459.s7", print_hash_value);
    transparent_crc(p_560->g_499.s0, "p_560->g_499.s0", print_hash_value);
    transparent_crc(p_560->g_499.s1, "p_560->g_499.s1", print_hash_value);
    transparent_crc(p_560->g_499.s2, "p_560->g_499.s2", print_hash_value);
    transparent_crc(p_560->g_499.s3, "p_560->g_499.s3", print_hash_value);
    transparent_crc(p_560->g_499.s4, "p_560->g_499.s4", print_hash_value);
    transparent_crc(p_560->g_499.s5, "p_560->g_499.s5", print_hash_value);
    transparent_crc(p_560->g_499.s6, "p_560->g_499.s6", print_hash_value);
    transparent_crc(p_560->g_499.s7, "p_560->g_499.s7", print_hash_value);
    transparent_crc(p_560->g_499.s8, "p_560->g_499.s8", print_hash_value);
    transparent_crc(p_560->g_499.s9, "p_560->g_499.s9", print_hash_value);
    transparent_crc(p_560->g_499.sa, "p_560->g_499.sa", print_hash_value);
    transparent_crc(p_560->g_499.sb, "p_560->g_499.sb", print_hash_value);
    transparent_crc(p_560->g_499.sc, "p_560->g_499.sc", print_hash_value);
    transparent_crc(p_560->g_499.sd, "p_560->g_499.sd", print_hash_value);
    transparent_crc(p_560->g_499.se, "p_560->g_499.se", print_hash_value);
    transparent_crc(p_560->g_499.sf, "p_560->g_499.sf", print_hash_value);
    transparent_crc(p_560->g_525.s0, "p_560->g_525.s0", print_hash_value);
    transparent_crc(p_560->g_525.s1, "p_560->g_525.s1", print_hash_value);
    transparent_crc(p_560->g_525.s2, "p_560->g_525.s2", print_hash_value);
    transparent_crc(p_560->g_525.s3, "p_560->g_525.s3", print_hash_value);
    transparent_crc(p_560->g_525.s4, "p_560->g_525.s4", print_hash_value);
    transparent_crc(p_560->g_525.s5, "p_560->g_525.s5", print_hash_value);
    transparent_crc(p_560->g_525.s6, "p_560->g_525.s6", print_hash_value);
    transparent_crc(p_560->g_525.s7, "p_560->g_525.s7", print_hash_value);
    transparent_crc(p_560->g_525.s8, "p_560->g_525.s8", print_hash_value);
    transparent_crc(p_560->g_525.s9, "p_560->g_525.s9", print_hash_value);
    transparent_crc(p_560->g_525.sa, "p_560->g_525.sa", print_hash_value);
    transparent_crc(p_560->g_525.sb, "p_560->g_525.sb", print_hash_value);
    transparent_crc(p_560->g_525.sc, "p_560->g_525.sc", print_hash_value);
    transparent_crc(p_560->g_525.sd, "p_560->g_525.sd", print_hash_value);
    transparent_crc(p_560->g_525.se, "p_560->g_525.se", print_hash_value);
    transparent_crc(p_560->g_525.sf, "p_560->g_525.sf", print_hash_value);
    transparent_crc(p_560->g_546.x, "p_560->g_546.x", print_hash_value);
    transparent_crc(p_560->g_546.y, "p_560->g_546.y", print_hash_value);
    transparent_crc(p_560->g_546.z, "p_560->g_546.z", print_hash_value);
    transparent_crc(p_560->g_546.w, "p_560->g_546.w", print_hash_value);
    transparent_crc(p_560->v_collective, "p_560->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 30; i++)
            transparent_crc(p_560->g_special_values[i + 30 * get_linear_group_id()], "p_560->g_special_values[i + 30 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 30; i++)
            transparent_crc(p_560->l_special_values[i], "p_560->l_special_values[i]", print_hash_value);
    transparent_crc(p_560->l_comm_values[get_linear_local_id()], "p_560->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_560->g_comm_values[get_linear_group_id() * 9 + get_linear_local_id()], "p_560->g_comm_values[get_linear_group_id() * 9 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
