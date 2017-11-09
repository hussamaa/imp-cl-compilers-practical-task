// --atomics 37 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 14,36,2 -l 1,12,2
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

__constant uint32_t permutations[10][24] = {
{14,8,3,9,0,4,6,7,11,13,16,15,10,19,12,18,1,17,2,5,21,23,20,22}, // permutation 0
{19,17,20,13,16,21,3,5,8,15,0,9,22,12,6,11,10,18,2,7,23,1,4,14}, // permutation 1
{1,11,4,23,3,12,2,14,9,6,7,18,19,13,16,17,15,0,10,5,22,21,20,8}, // permutation 2
{4,10,2,18,1,14,15,6,16,8,17,7,13,21,19,22,20,9,3,0,23,11,12,5}, // permutation 3
{5,0,10,16,21,18,3,23,6,2,4,22,19,17,12,20,9,13,1,8,14,15,11,7}, // permutation 4
{10,9,2,16,0,17,11,12,4,22,13,20,23,18,14,21,3,8,15,6,5,1,7,19}, // permutation 5
{15,7,10,20,0,14,2,19,16,1,17,3,23,11,12,21,8,6,22,5,18,13,9,4}, // permutation 6
{6,7,16,3,4,20,1,18,11,17,19,14,13,5,12,21,15,8,22,0,9,23,10,2}, // permutation 7
{21,5,2,14,22,18,4,6,17,15,20,11,16,7,8,13,0,19,23,10,9,1,12,3}, // permutation 8
{22,14,7,8,23,1,9,4,18,11,12,13,21,2,6,19,17,20,5,10,3,16,15,0} // permutation 9
};

// Seed: 1371260998

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    int32_t g_7;
    VECTOR(uint32_t, 2) g_20;
    uint32_t g_22;
    int32_t g_41;
    int8_t g_69;
    uint16_t g_73[3];
    int32_t g_76;
    int32_t *g_75[5];
    int32_t **g_74[5];
    int32_t g_78;
    int32_t * volatile g_77;
    uint8_t g_108;
    VECTOR(int16_t, 16) g_113;
    volatile VECTOR(uint32_t, 16) g_119;
    uint16_t g_127;
    int64_t * volatile g_142[5][4];
    int64_t *g_150;
    uint32_t g_154[9][4];
    uint8_t g_158;
    volatile int64_t g_165;
    int64_t g_244;
    VECTOR(int16_t, 16) g_283;
    uint64_t g_295;
    volatile uint32_t g_314;
    volatile VECTOR(uint8_t, 2) g_358;
    VECTOR(uint32_t, 16) g_365;
    int8_t g_370;
    volatile VECTOR(int16_t, 16) g_408;
    VECTOR(uint64_t, 4) g_469;
    VECTOR(int32_t, 8) g_481;
    volatile VECTOR(uint64_t, 8) g_482;
    uint32_t g_516;
    uint32_t *g_515;
    int32_t * volatile g_521;
    int32_t * volatile g_522[6][1][4];
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
int8_t  func_1(struct S1 * p_534);
int32_t  func_2(int64_t  p_3, struct S1 * p_534);
int8_t  func_16(uint32_t  p_17, int32_t * p_18, uint16_t  p_19, struct S1 * p_534);
uint32_t * func_25(uint64_t  p_26, int32_t * p_27, uint32_t  p_28, struct S1 * p_534);
uint64_t  func_29(int32_t * p_30, uint8_t  p_31, struct S1 * p_534);
int32_t ** func_32(int32_t  p_33, int64_t  p_34, int32_t * p_35, int32_t ** p_36, struct S1 * p_534);
uint32_t  func_37(uint64_t  p_38, struct S1 * p_534);
uint16_t  func_46(int32_t  p_47, uint32_t  p_48, int32_t  p_49, int32_t ** p_50, uint32_t * p_51, struct S1 * p_534);
int32_t  func_52(int32_t  p_53, int16_t  p_54, int32_t  p_55, uint32_t  p_56, uint32_t  p_57, struct S1 * p_534);
uint16_t  func_60(int64_t  p_61, uint32_t  p_62, struct S1 * p_534);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_534->g_7 p_534->g_20 p_534->g_41 p_534->g_comm_values p_534->g_69 p_534->g_74 p_534->g_75 p_534->g_76 p_534->g_77 p_534->g_78 p_534->g_158 p_534->g_119 p_534->g_73 p_534->g_244 p_534->g_283 p_534->g_150 p_534->g_314 p_534->g_295 p_534->g_358 p_534->g_365 p_534->g_408 p_534->g_127 p_534->g_154 p_534->g_469 p_534->g_481 p_534->g_482 p_534->g_113 p_534->g_22
 * writes: p_534->g_7 p_534->g_22 p_534->g_41 p_534->g_69 p_534->l_comm_values p_534->g_73 p_534->g_78 p_534->g_76 p_534->g_75 p_534->g_158 p_534->g_244 p_534->g_314 p_534->g_295 p_534->g_370 p_534->g_283 p_534->g_469 p_534->g_515 p_534->g_150
 */
int8_t  func_1(struct S1 * p_534)
{ /* block id: 4 */
    int16_t l_4 = 7L;
    int32_t *l_523 = &p_534->g_78;
    int64_t **l_526 = (void*)0;
    int64_t **l_527 = &p_534->g_150;
    (*l_523) = func_2(l_4, p_534);
    if ((safe_sub_func_int8_t_s_s((*l_523), (&p_534->g_165 == ((*l_527) = &p_534->g_244)))))
    { /* block id: 200 */
        uint32_t l_530 = 0x8E9E671EL;
        for (l_4 = 28; (l_4 < 27); l_4 = safe_sub_func_int8_t_s_s(l_4, 3))
        { /* block id: 203 */
            int32_t *l_531 = &p_534->g_76;
            if (l_530)
                break;
            (*l_523) = ((*l_531) |= (*l_523));
            return (*l_523);
        }
        (*l_523) = (!(*p_534->g_77));
    }
    else
    { /* block id: 210 */
        return p_534->g_365.s5;
    }
    for (p_534->g_22 = 29; (p_534->g_22 == 48); p_534->g_22 = safe_add_func_int8_t_s_s(p_534->g_22, 1))
    { /* block id: 215 */
        (*l_523) = (*l_523);
        if ((*l_523))
            break;
        return p_534->g_314;
    }
    return (*l_523);
}


/* ------------------------------------------ */
/* 
 * reads : p_534->g_7 p_534->g_20 p_534->g_41 p_534->g_comm_values p_534->g_69 p_534->g_74 p_534->g_75 p_534->g_76 p_534->g_77 p_534->g_78 p_534->g_158 p_534->g_119 p_534->g_73 p_534->g_244 p_534->g_283 p_534->g_150 p_534->g_314 p_534->g_295 p_534->g_358 p_534->g_365 p_534->g_408 p_534->g_127 p_534->g_154 p_534->g_469 p_534->g_481 p_534->g_482 p_534->g_113
 * writes: p_534->g_7 p_534->g_22 p_534->g_41 p_534->g_69 p_534->l_comm_values p_534->g_73 p_534->g_78 p_534->g_76 p_534->g_75 p_534->g_158 p_534->g_244 p_534->g_314 p_534->g_295 p_534->g_370 p_534->g_283 p_534->g_469 p_534->g_515
 */
int32_t  func_2(int64_t  p_3, struct S1 * p_534)
{ /* block id: 5 */
    VECTOR(int32_t, 16) l_5 = (VECTOR(int32_t, 16))(0x414173BFL, (VECTOR(int32_t, 4))(0x414173BFL, (VECTOR(int32_t, 2))(0x414173BFL, 6L), 6L), 6L, 0x414173BFL, 6L, (VECTOR(int32_t, 2))(0x414173BFL, 6L), (VECTOR(int32_t, 2))(0x414173BFL, 6L), 0x414173BFL, 6L, 0x414173BFL, 6L);
    int32_t *l_6 = &p_534->g_7;
    uint32_t *l_21 = &p_534->g_22;
    uint32_t **l_514[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    (*l_6) &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_5.s88)), (-4L), 0x5744D028L)).y;
    l_5.s1 = (safe_mul_func_uint16_t_u_u((((*l_6) = 0x38AE505BL) > (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(FAKE_DIVERGE(p_534->local_0_offset, get_local_id(0), 10), 14)), 0xE12AL))), ((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_534->group_2_offset, get_group_id(2), 10), func_16(((*l_21) = ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(p_534->g_20.yxxxyyxyyxyxxxyx)).even)))).s6), l_6, (((safe_mul_func_uint8_t_u_u(((((p_534->g_20.x & (l_21 != (p_534->g_515 = func_25(func_29(l_6, (4294967295UL == (p_534->g_20.x | (p_534->g_20.x | p_3))), p_534), l_21, p_3, p_534)))) >= p_3) >= p_534->g_481.s1) & p_3), p_534->g_113.s7)) ^ 0x65478DFE4E6167C8L) == p_3), p_534))) ^ 1UL)));
    return (*p_534->g_77);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_16(uint32_t  p_17, int32_t * p_18, uint16_t  p_19, struct S1 * p_534)
{ /* block id: 192 */
    uint16_t l_517 = 0xD75BL;
    int32_t l_520 = 0x2DEDAF43L;
    l_517++;
    l_520 = l_517;
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_534->g_158 p_534->g_119 p_534->g_76 p_534->g_73 p_534->g_244 p_534->g_283 p_534->g_150 p_534->g_20 p_534->g_314 p_534->g_69 p_534->g_295 p_534->g_358 p_534->g_365 p_534->g_comm_values p_534->g_78 p_534->g_408 p_534->g_77 p_534->g_127 p_534->g_154 p_534->g_41 p_534->g_469 p_534->g_481 p_534->g_482
 * writes: p_534->g_158 p_534->g_69 p_534->g_244 p_534->g_76 p_534->g_314 p_534->g_78 p_534->g_295 p_534->g_370 p_534->g_283 p_534->g_41 p_534->g_469 p_534->g_75
 */
uint32_t * func_25(uint64_t  p_26, int32_t * p_27, uint32_t  p_28, struct S1 * p_534)
{ /* block id: 97 */
    uint16_t l_256[4] = {0UL,0UL,0UL,0UL};
    int32_t l_261[10] = {(-9L),0x7E42F179L,0x1EE88A44L,0x7E42F179L,(-9L),(-9L),0x7E42F179L,0x1EE88A44L,0x7E42F179L,(-9L)};
    uint8_t *l_262[1][4][4];
    uint16_t *l_270 = &l_256[1];
    uint16_t **l_269 = &l_270;
    uint64_t *l_294[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(int64_t, 8) l_353 = (VECTOR(int64_t, 8))(0x3A5F47472B202181L, (VECTOR(int64_t, 4))(0x3A5F47472B202181L, (VECTOR(int64_t, 2))(0x3A5F47472B202181L, 0L), 0L), 0L, 0x3A5F47472B202181L, 0L);
    VECTOR(uint8_t, 8) l_360 = (VECTOR(uint8_t, 8))(0x46L, (VECTOR(uint8_t, 4))(0x46L, (VECTOR(uint8_t, 2))(0x46L, 1UL), 1UL), 1UL, 0x46L, 1UL);
    uint64_t l_377 = 1UL;
    int64_t *l_378 = (void*)0;
    VECTOR(uint16_t, 2) l_392 = (VECTOR(uint16_t, 2))(5UL, 0xD38AL);
    uint8_t l_443 = 255UL;
    uint64_t l_452[10] = {0x066F00F0D4FE460EL,0x066F00F0D4FE460EL,0x066F00F0D4FE460EL,0x066F00F0D4FE460EL,0x066F00F0D4FE460EL,0x066F00F0D4FE460EL,0x066F00F0D4FE460EL,0x066F00F0D4FE460EL,0x066F00F0D4FE460EL,0x066F00F0D4FE460EL};
    VECTOR(uint64_t, 16) l_470 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 0UL), 0UL, 18446744073709551615UL, 0UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL);
    VECTOR(uint8_t, 4) l_479 = (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 9UL), 9UL);
    int32_t l_487 = 0L;
    int32_t *l_490 = &p_534->g_76;
    int32_t *l_491 = &l_261[0];
    int32_t *l_492 = &p_534->g_78;
    int32_t *l_493 = &p_534->g_78;
    int32_t *l_494 = &l_487;
    int32_t *l_495 = &p_534->g_78;
    int32_t *l_496 = &l_261[1];
    int32_t *l_497 = &p_534->g_76;
    int32_t *l_498 = &l_487;
    int32_t *l_499 = &l_261[3];
    int32_t *l_500 = &l_487;
    int32_t *l_501 = &p_534->g_41;
    int32_t *l_502 = &l_261[0];
    int32_t *l_503 = &p_534->g_41;
    int32_t *l_504 = (void*)0;
    int32_t *l_505[2];
    int8_t l_506[2][6][10] = {{{0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L},{0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L},{0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L},{0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L},{0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L},{0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L}},{{0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L},{0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L},{0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L},{0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L},{0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L},{0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L,0L,0x62L,0x62L}}};
    int32_t l_507[6][2][7] = {{{0x390B3FC3L,0x330BE091L,0x21AB4201L,0x330BE091L,0x390B3FC3L,0x390B3FC3L,0x330BE091L},{0x390B3FC3L,0x330BE091L,0x21AB4201L,0x330BE091L,0x390B3FC3L,0x390B3FC3L,0x330BE091L}},{{0x390B3FC3L,0x330BE091L,0x21AB4201L,0x330BE091L,0x390B3FC3L,0x390B3FC3L,0x330BE091L},{0x390B3FC3L,0x330BE091L,0x21AB4201L,0x330BE091L,0x390B3FC3L,0x390B3FC3L,0x330BE091L}},{{0x390B3FC3L,0x330BE091L,0x21AB4201L,0x330BE091L,0x390B3FC3L,0x390B3FC3L,0x330BE091L},{0x390B3FC3L,0x330BE091L,0x21AB4201L,0x330BE091L,0x390B3FC3L,0x390B3FC3L,0x330BE091L}},{{0x390B3FC3L,0x330BE091L,0x21AB4201L,0x330BE091L,0x390B3FC3L,0x390B3FC3L,0x330BE091L},{0x390B3FC3L,0x330BE091L,0x21AB4201L,0x330BE091L,0x390B3FC3L,0x390B3FC3L,0x330BE091L}},{{0x390B3FC3L,0x330BE091L,0x21AB4201L,0x330BE091L,0x390B3FC3L,0x390B3FC3L,0x330BE091L},{0x390B3FC3L,0x330BE091L,0x21AB4201L,0x330BE091L,0x390B3FC3L,0x390B3FC3L,0x330BE091L}},{{0x390B3FC3L,0x330BE091L,0x21AB4201L,0x330BE091L,0x390B3FC3L,0x390B3FC3L,0x330BE091L},{0x390B3FC3L,0x330BE091L,0x21AB4201L,0x330BE091L,0x390B3FC3L,0x390B3FC3L,0x330BE091L}}};
    uint32_t l_508 = 0x58A8A831L;
    uint8_t l_511 = 1UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
                l_262[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 2; i++)
        l_505[i] = &p_534->g_41;
    --l_256[1];
    if (((l_256[2] || ((((--p_534->g_158) , (~(l_261[0] , (((safe_div_func_uint16_t_u_u(((p_534->g_69 = ((&p_534->g_69 == (void*)0) , p_534->g_119.s1)) < (2L > p_534->g_76)), 0x50EDL)) < (l_269 == (void*)0)) , l_261[0])))) < l_256[3]) == p_534->g_73[2])) > (-4L)))
    { /* block id: 101 */
        VECTOR(uint32_t, 8) l_278 = (VECTOR(uint32_t, 8))(0xE346D14AL, (VECTOR(uint32_t, 4))(0xE346D14AL, (VECTOR(uint32_t, 2))(0xE346D14AL, 2UL), 2UL), 2UL, 0xE346D14AL, 2UL);
        int32_t l_304 = 6L;
        int32_t l_308 = 1L;
        int32_t l_312 = 0x1BAE55C1L;
        VECTOR(int32_t, 2) l_313 = (VECTOR(int32_t, 2))(8L, 0x1D2A51F5L);
        VECTOR(uint64_t, 2) l_369 = (VECTOR(uint64_t, 2))(1UL, 0xA3604DBCB9E84D74L);
        uint8_t l_379 = 251UL;
        int32_t *l_424 = &l_261[0];
        int32_t *l_425 = &l_261[2];
        int32_t *l_426 = (void*)0;
        int32_t *l_427 = &l_304;
        int32_t *l_428 = &l_261[0];
        int32_t *l_429 = (void*)0;
        int32_t *l_430 = &l_308;
        int32_t *l_431 = &l_261[3];
        int32_t *l_432 = (void*)0;
        int32_t *l_433 = &l_308;
        int32_t *l_434 = &l_261[4];
        int32_t *l_435 = (void*)0;
        int32_t *l_436 = (void*)0;
        int32_t *l_437 = &l_261[1];
        int32_t *l_438 = &p_534->g_78;
        int32_t *l_439 = &p_534->g_41;
        int32_t *l_440 = &l_261[6];
        int32_t *l_441 = (void*)0;
        int32_t *l_442[6][4] = {{&p_534->g_76,&p_534->g_76,&p_534->g_76,&p_534->g_76},{&p_534->g_76,&p_534->g_76,&p_534->g_76,&p_534->g_76},{&p_534->g_76,&p_534->g_76,&p_534->g_76,&p_534->g_76},{&p_534->g_76,&p_534->g_76,&p_534->g_76,&p_534->g_76},{&p_534->g_76,&p_534->g_76,&p_534->g_76,&p_534->g_76},{&p_534->g_76,&p_534->g_76,&p_534->g_76,&p_534->g_76}};
        uint8_t l_460 = 254UL;
        int i, j;
        for (p_534->g_244 = 12; (p_534->g_244 == (-11)); p_534->g_244--)
        { /* block id: 104 */
            int32_t *l_273 = &p_534->g_76;
            VECTOR(int8_t, 8) l_284 = (VECTOR(int8_t, 8))(0x1FL, (VECTOR(int8_t, 4))(0x1FL, (VECTOR(int8_t, 2))(0x1FL, (-1L)), (-1L)), (-1L), 0x1FL, (-1L));
            VECTOR(int8_t, 4) l_285 = (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), (-5L)), (-5L));
            VECTOR(int64_t, 4) l_286 = (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), (-1L)), (-1L));
            VECTOR(int8_t, 16) l_287 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x27L), 0x27L), 0x27L, (-1L), 0x27L, (VECTOR(int8_t, 2))((-1L), 0x27L), (VECTOR(int8_t, 2))((-1L), 0x27L), (-1L), 0x27L, (-1L), 0x27L);
            int8_t l_288 = (-1L);
            uint64_t l_291 = 18446744073709551615UL;
            int32_t l_299 = 0L;
            int32_t l_305 = (-7L);
            VECTOR(int32_t, 16) l_382 = (VECTOR(int32_t, 16))(0x49A61A53L, (VECTOR(int32_t, 4))(0x49A61A53L, (VECTOR(int32_t, 2))(0x49A61A53L, 0x26FD3B57L), 0x26FD3B57L), 0x26FD3B57L, 0x49A61A53L, 0x26FD3B57L, (VECTOR(int32_t, 2))(0x49A61A53L, 0x26FD3B57L), (VECTOR(int32_t, 2))(0x49A61A53L, 0x26FD3B57L), 0x49A61A53L, 0x26FD3B57L, 0x49A61A53L, 0x26FD3B57L);
            VECTOR(uint64_t, 4) l_389 = (VECTOR(uint64_t, 4))(0xB29DD61B1F790AEDL, (VECTOR(uint64_t, 2))(0xB29DD61B1F790AEDL, 0x78A8936CAB4AA673L), 0x78A8936CAB4AA673L);
            int i;
            l_261[0] = ((*l_273) = p_28);
            atomic_and(&p_534->g_atomic_reduction[get_linear_group_id()], (safe_mul_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(((-5L) || (((VECTOR(uint32_t, 4))(l_278.s3713)).w == (((safe_rshift_func_uint8_t_u_s(0xD8L, 6)) , (((safe_add_func_int8_t_s_s((((VECTOR(int16_t, 2))(p_534->g_283.sda)).odd && p_28), ((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_284.s57)))).yxyyxxxxxyxyxxyx)))), ((VECTOR(int8_t, 2))(l_285.zx)).xxyyxyyxyyyyyyyy))).se)) ^ ((VECTOR(int64_t, 8))(l_286.wxwwywwx)).s6) <= FAKE_DIVERGE(p_534->group_1_offset, get_group_id(1), 10))) != (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_287.s67ec)).hi)).even <= 0x1BL)))), l_288)) , (*l_273)) | ((safe_mul_func_uint16_t_u_u(l_291, (safe_lshift_func_uint16_t_u_s(((((((p_28 , p_534->g_150) != l_294[1]) && p_28) != FAKE_DIVERGE(p_534->global_1_offset, get_global_id(1), 10)) , (*l_273)) , p_534->g_20.y), 14)))) < 5L)), (-2L))) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_534->v_collective += p_534->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            for (p_26 = 0; (p_26 == 50); ++p_26)
            { /* block id: 110 */
                int32_t *l_298 = &l_261[0];
                int32_t *l_300 = &p_534->g_78;
                int32_t *l_301 = &l_299;
                int32_t *l_302 = (void*)0;
                int32_t *l_303 = &p_534->g_78;
                int32_t *l_306 = (void*)0;
                int32_t *l_307 = &l_261[0];
                int32_t *l_309 = (void*)0;
                int32_t *l_310 = (void*)0;
                int32_t *l_311[8][5] = {{&p_534->g_76,&p_534->g_41,&l_304,&p_534->g_78,&p_534->g_78},{&p_534->g_76,&p_534->g_41,&l_304,&p_534->g_78,&p_534->g_78},{&p_534->g_76,&p_534->g_41,&l_304,&p_534->g_78,&p_534->g_78},{&p_534->g_76,&p_534->g_41,&l_304,&p_534->g_78,&p_534->g_78},{&p_534->g_76,&p_534->g_41,&l_304,&p_534->g_78,&p_534->g_78},{&p_534->g_76,&p_534->g_41,&l_304,&p_534->g_78,&p_534->g_78},{&p_534->g_76,&p_534->g_41,&l_304,&p_534->g_78,&p_534->g_78},{&p_534->g_76,&p_534->g_41,&l_304,&p_534->g_78,&p_534->g_78}};
                uint8_t *l_393 = &p_534->g_108;
                uint32_t *l_403 = &p_534->g_154[5][0];
                uint32_t **l_402 = &l_403;
                uint16_t l_423 = 0xCFF4L;
                int i, j;
                --p_534->g_314;
                if ((atomic_inc(&p_534->g_atomic_input[37 * get_linear_group_id() + 13]) == 1))
                { /* block id: 113 */
                    int8_t l_317 = 8L;
                    uint16_t l_318[5];
                    int16_t l_347 = 0x7E8EL;
                    uint32_t l_348[9] = {4294967295UL,0x83A9B56FL,4294967295UL,4294967295UL,0x83A9B56FL,4294967295UL,4294967295UL,0x83A9B56FL,4294967295UL};
                    int i;
                    for (i = 0; i < 5; i++)
                        l_318[i] = 0xAA77L;
                    l_317 &= (-8L);
                    if (l_318[0])
                    { /* block id: 115 */
                        uint64_t l_319[10][8] = {{0UL,1UL,3UL,0x46E68667795B5A58L,0x111CFF33B2AC8EA3L,0x111CFF33B2AC8EA3L,0x46E68667795B5A58L,3UL},{0UL,1UL,3UL,0x46E68667795B5A58L,0x111CFF33B2AC8EA3L,0x111CFF33B2AC8EA3L,0x46E68667795B5A58L,3UL},{0UL,1UL,3UL,0x46E68667795B5A58L,0x111CFF33B2AC8EA3L,0x111CFF33B2AC8EA3L,0x46E68667795B5A58L,3UL},{0UL,1UL,3UL,0x46E68667795B5A58L,0x111CFF33B2AC8EA3L,0x111CFF33B2AC8EA3L,0x46E68667795B5A58L,3UL},{0UL,1UL,3UL,0x46E68667795B5A58L,0x111CFF33B2AC8EA3L,0x111CFF33B2AC8EA3L,0x46E68667795B5A58L,3UL},{0UL,1UL,3UL,0x46E68667795B5A58L,0x111CFF33B2AC8EA3L,0x111CFF33B2AC8EA3L,0x46E68667795B5A58L,3UL},{0UL,1UL,3UL,0x46E68667795B5A58L,0x111CFF33B2AC8EA3L,0x111CFF33B2AC8EA3L,0x46E68667795B5A58L,3UL},{0UL,1UL,3UL,0x46E68667795B5A58L,0x111CFF33B2AC8EA3L,0x111CFF33B2AC8EA3L,0x46E68667795B5A58L,3UL},{0UL,1UL,3UL,0x46E68667795B5A58L,0x111CFF33B2AC8EA3L,0x111CFF33B2AC8EA3L,0x46E68667795B5A58L,3UL},{0UL,1UL,3UL,0x46E68667795B5A58L,0x111CFF33B2AC8EA3L,0x111CFF33B2AC8EA3L,0x46E68667795B5A58L,3UL}};
                        uint32_t l_320 = 0x8681D0E4L;
                        uint32_t l_321 = 0xD08C5919L;
                        int64_t l_322 = 1L;
                        int64_t l_323 = 0L;
                        int16_t l_324 = 0x1C28L;
                        int i, j;
                        l_320 = l_319[3][0];
                        l_322 |= l_321;
                        l_324 = l_323;
                    }
                    else
                    { /* block id: 119 */
                        VECTOR(int32_t, 8) l_325 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L);
                        uint8_t l_326 = 0xD9L;
                        int64_t l_327 = 0x1E3B1009D2D93F7CL;
                        int8_t l_328[3];
                        int16_t l_329[2];
                        VECTOR(int32_t, 2) l_330 = (VECTOR(int32_t, 2))((-1L), (-4L));
                        VECTOR(int32_t, 16) l_331 = (VECTOR(int32_t, 16))(0x2BED6D75L, (VECTOR(int32_t, 4))(0x2BED6D75L, (VECTOR(int32_t, 2))(0x2BED6D75L, (-2L)), (-2L)), (-2L), 0x2BED6D75L, (-2L), (VECTOR(int32_t, 2))(0x2BED6D75L, (-2L)), (VECTOR(int32_t, 2))(0x2BED6D75L, (-2L)), 0x2BED6D75L, (-2L), 0x2BED6D75L, (-2L));
                        VECTOR(int32_t, 2) l_332 = (VECTOR(int32_t, 2))(0x1CC8058CL, 0x01157953L);
                        VECTOR(int32_t, 4) l_333 = (VECTOR(int32_t, 4))(0x32C9AD87L, (VECTOR(int32_t, 2))(0x32C9AD87L, 1L), 1L);
                        int16_t l_334 = 0x62BFL;
                        int16_t l_335[4][10][6] = {{{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L}},{{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L}},{{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L}},{{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L},{(-3L),0x081AL,0L,0x3794L,0x3BE2L,9L}}};
                        int16_t l_336 = (-7L);
                        VECTOR(int32_t, 8) l_337 = (VECTOR(int32_t, 8))(0x1E357CEAL, (VECTOR(int32_t, 4))(0x1E357CEAL, (VECTOR(int32_t, 2))(0x1E357CEAL, 0x01F2127DL), 0x01F2127DL), 0x01F2127DL, 0x1E357CEAL, 0x01F2127DL);
                        VECTOR(int32_t, 16) l_338 = (VECTOR(int32_t, 16))(0x6B5A29B9L, (VECTOR(int32_t, 4))(0x6B5A29B9L, (VECTOR(int32_t, 2))(0x6B5A29B9L, (-1L)), (-1L)), (-1L), 0x6B5A29B9L, (-1L), (VECTOR(int32_t, 2))(0x6B5A29B9L, (-1L)), (VECTOR(int32_t, 2))(0x6B5A29B9L, (-1L)), 0x6B5A29B9L, (-1L), 0x6B5A29B9L, (-1L));
                        uint8_t l_339 = 1UL;
                        int32_t l_340[2];
                        VECTOR(int32_t, 4) l_341 = (VECTOR(int32_t, 4))(0x117F30D8L, (VECTOR(int32_t, 2))(0x117F30D8L, 9L), 9L);
                        int64_t l_342 = 0x4A5C979731293859L;
                        int8_t l_343 = 0x4CL;
                        int32_t l_344 = (-1L);
                        uint32_t l_345 = 0x657323E9L;
                        uint16_t l_346 = 7UL;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_328[i] = 0x42L;
                        for (i = 0; i < 2; i++)
                            l_329[i] = 0x5202L;
                        for (i = 0; i < 2; i++)
                            l_340[i] = 0L;
                        l_346 = (((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(l_325.s0717)).hi, ((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(1L, l_326, (-1L), (-10L), l_327, 0x5085FA09L, l_328[0], l_329[0], ((VECTOR(int32_t, 2))(0x3CA6CF48L, (-1L))), 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x2F89448AL, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_330.xxxy)))), ((VECTOR(int32_t, 2))(0x4B54E30DL, 0L)).xyxy))).lo, ((VECTOR(int32_t, 2))(l_331.s9b)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(6L, 6L)).xxxx)).yyyxxzwxxyxwxxww)).sab))), ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_332.yxyyyxxxxyyyxyyx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_333.zxxw)).lo)).yxxyyxxyyxyyyxxx))).odd, ((VECTOR(int32_t, 8))((l_336 = (l_335[1][4][5] ^= l_334)), 0x4BCFB077L, ((VECTOR(int32_t, 2))(0x3D3BFA65L, 6L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_337.s0307)))))), ((VECTOR(int32_t, 2))(l_338.s37)).yxxyyxyx))), (l_340[0] = l_339), 0x71FFBD9FL, 0x211C1A80L, 9L, 0x661EBABCL)).sda)), ((VECTOR(int32_t, 2))(0x170436DFL, 7L)), 0x1CB847CAL)).s4a9b)), ((VECTOR(int32_t, 4))(l_341.zwww)), ((VECTOR(int32_t, 2))(0x175CD81FL, 0x7D180341L)), ((VECTOR(int32_t, 2))((-1L), 0L)), ((l_343 |= l_342) , l_344), 5L, (-1L))).sd8, ((VECTOR(int32_t, 2))(0L))))).odd , l_345);
                    }
                    l_348[3]--;
                    unsigned int result = 0;
                    result += l_317;
                    int l_318_i0;
                    for (l_318_i0 = 0; l_318_i0 < 5; l_318_i0++) {
                        result += l_318[l_318_i0];
                    }
                    result += l_347;
                    int l_348_i0;
                    for (l_348_i0 = 0; l_348_i0 < 9; l_348_i0++) {
                        result += l_348[l_348_i0];
                    }
                    atomic_add(&p_534->g_special_values[37 * get_linear_group_id() + 13], result);
                }
                else
                { /* block id: 127 */
                    (1 + 1);
                }
                if (((*l_300) = 1L))
                { /* block id: 131 */
                    int16_t l_373 = 0x014DL;
                    uint8_t l_376 = 1UL;
                    for (p_534->g_69 = 0; (p_534->g_69 >= 20); p_534->g_69++)
                    { /* block id: 134 */
                        (*l_303) = (*l_273);
                        (*l_273) = l_353.s7;
                    }
                    for (p_534->g_295 = (-10); (p_534->g_295 == 23); p_534->g_295 = safe_add_func_int8_t_s_s(p_534->g_295, 8))
                    { /* block id: 140 */
                        VECTOR(uint8_t, 2) l_359 = (VECTOR(uint8_t, 2))(0x1CL, 250UL);
                        int32_t **l_368 = &l_311[0][3];
                        int i;
                        (*l_303) &= (((safe_mul_func_int16_t_s_s(((((VECTOR(uint8_t, 16))(8UL, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_534->g_358.xy)), 1UL, 0UL)).even)).xxyx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_359.yx)), 0xFCL, 248UL)))).zxwzzwwwywzwwxyw)).s1a9c))), 0xB8L, ((VECTOR(uint8_t, 4))(l_360.s2252)), l_359.y, 0x06L, (0x98L == (((((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(0x72L, 0x64L, ((safe_sub_func_int32_t_s_s(((*l_307) <= (safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(p_534->g_365.s2a023948)))).s1, (safe_lshift_func_int8_t_s_u((&p_27 == l_368), 1))))), (((VECTOR(uint64_t, 4))(18446744073709551615UL, ((VECTOR(uint64_t, 2))(l_369.yx)), 0x3E292FA83594A9BFL)).x > (p_534->g_370 = p_26)))) < (~((((((((safe_sub_func_int64_t_s_s(((l_373 > ((safe_lshift_func_uint16_t_u_u(((+((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 4))(1UL, (p_26 | l_376), 0xE48CA20C3A654627L, 0x318E5D3236BF669DL)), ((VECTOR(uint64_t, 4))(18446744073709551615UL)), ((VECTOR(uint64_t, 4))(18446744073709551615UL))))).lo)), p_26, ((VECTOR(uint64_t, 2))(5UL)), 0xAD08DF0B291B26C7L, ((VECTOR(uint64_t, 4))(0x5ACEAB802EFAD098L)), p_26, ((VECTOR(uint64_t, 4))(0xBB8F9924089EBD89L)), 18446744073709551615UL)), ((VECTOR(uint64_t, 16))(0x14CF81965B5E9356L))))).s2) & 6UL), 10)) & 0UL)) >= p_534->g_comm_values[p_534->tid]), 0x7526F2B3BF89C8AAL)) ^ (-10L)) , l_377) & FAKE_DIVERGE(p_534->group_2_offset, get_group_id(2), 10)) && GROUP_DIVERGE(1, 1)) , 0xA79B5EFEC0BA3F6FL) , 1L) || p_26))), l_304, p_26, (-1L), 0x43L, 0x60L)).s53, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(0L))))), 0L, 0x37L)).zxwyxywwwywzzyzx, ((VECTOR(uint8_t, 16))(0xF4L))))).s3b))).hi == FAKE_DIVERGE(p_534->global_2_offset, get_global_id(2), 10)) < p_28) > p_28)), 247UL, 0x1FL, 0xA2L)).s8 ^ p_26) , 0x66DEL), (-1L))) , l_378) != (void*)0);
                        if (l_369.x)
                            break;
                        --l_379;
                    }
                    (*l_300) = ((VECTOR(int32_t, 4))(l_382.sad20)).y;
                    return l_306;
                }
                else
                { /* block id: 148 */
                    int64_t *l_385 = (void*)0;
                    int32_t *l_386 = &l_261[0];
                    int64_t *l_394[10][5] = {{&p_534->g_244,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244},{&p_534->g_244,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244},{&p_534->g_244,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244},{&p_534->g_244,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244},{&p_534->g_244,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244},{&p_534->g_244,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244},{&p_534->g_244,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244},{&p_534->g_244,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244},{&p_534->g_244,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244},{&p_534->g_244,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244}};
                    int32_t l_395 = 0x158F571CL;
                    int i, j;
                    if (((safe_lshift_func_uint8_t_u_s((l_385 == &p_534->g_244), 5)) <= (l_386 == (void*)0)))
                    { /* block id: 149 */
                        (*l_303) = (((p_534->g_76 , &p_534->g_142[2][0]) == &l_378) , p_26);
                    }
                    else
                    { /* block id: 151 */
                        int32_t *l_387 = &l_305;
                        int32_t **l_388 = &l_386;
                        (*l_388) = l_387;
                        (*l_298) ^= (*l_273);
                    }
                    l_395 = (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_389.wyywzywxxzwzyzyw)).sbdc9)).y ^ (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_392.xyyyxyyy)).hi)).w, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 4))((p_534->g_283.s0 = (p_26 < ((*l_386) = (l_393 != (void*)0)))), ((VECTOR(int16_t, 2))(0x556FL, 0x5F84L)), 0x42E6L)).xyzxyyzx))))).s5)));
                }
                (*l_298) &= (safe_mul_func_uint16_t_u_u((*l_300), (safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((void*)0 == &l_270), (((((*l_402) = &p_534->g_154[5][2]) == &p_534->g_154[7][0]) || (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(FAKE_DIVERGE(p_534->global_2_offset, get_global_id(2), 10), 13)), (((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(p_534->g_408.sb1)).xyxyxyyy, ((VECTOR(int16_t, 16))(((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((*p_534->g_77), 1UL)), 11)) == (safe_rshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s((p_26 , ((safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x23L, 0x57L)).lo, (p_26 && 0x5DB39A8504BD5C50L))) & p_534->g_127), p_26)), (*l_300))) , l_353.s1)), 0x5806814153483DF4L)), 15))), l_278.s4, 0x63CEL, 0x7592L, 0L, (*l_273), 0x5D38L, ((VECTOR(int16_t, 4))(0L)), p_28, ((VECTOR(int16_t, 4))(0x5C5FL)))).lo, ((VECTOR(int16_t, 8))((-3L)))))), ((VECTOR(int16_t, 8))(0x411CL))))).lo, ((VECTOR(int16_t, 4))(0x20FFL))))), (int16_t)9L))).x ^ (*l_273))))) != p_28))), l_423))));
            }
        }
        ++l_443;
        for (p_534->g_78 = 0; (p_534->g_78 <= 2); ++p_534->g_78)
        { /* block id: 166 */
            uint32_t **l_453 = (void*)0;
            uint32_t *l_455 = &p_534->g_154[0][1];
            uint32_t **l_454 = &l_455;
            int8_t *l_461 = (void*)0;
            int8_t *l_462 = &p_534->g_69;
            (*l_428) ^= p_26;
            (*l_433) = (p_26 && ((safe_add_func_int16_t_s_s(p_534->g_358.x, 0x05B0L)) , ((~(safe_mul_func_uint8_t_u_u(l_452[0], (l_392.x != (p_534->g_76 < (((*l_462) = ((((*l_454) = l_442[1][3]) != &p_534->g_154[7][0]) & ((safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s(((*l_433) && FAKE_DIVERGE(p_534->local_0_offset, get_local_id(0), 10)), p_534->g_154[7][0])), l_460)) >= (-9L)))) & 0x80L)))))) , l_452[0])));
        }
        (*l_427) |= (safe_mod_func_uint16_t_u_u(0x680AL, p_26));
    }
    else
    { /* block id: 173 */
        int32_t l_477 = (-1L);
        VECTOR(uint64_t, 8) l_478 = (VECTOR(uint64_t, 8))(0x1A3AF077B08E3A86L, (VECTOR(uint64_t, 4))(0x1A3AF077B08E3A86L, (VECTOR(uint64_t, 2))(0x1A3AF077B08E3A86L, 3UL), 3UL), 3UL, 0x1A3AF077B08E3A86L, 3UL);
        int i;
        for (p_534->g_41 = 0; (p_534->g_41 <= 5); p_534->g_41++)
        { /* block id: 176 */
            int32_t *l_488 = &p_534->g_76;
            int32_t **l_489 = &p_534->g_75[0];
            for (p_28 = 0; (p_28 < 54); p_28 = safe_add_func_int32_t_s_s(p_28, 4))
            { /* block id: 179 */
                int64_t *l_480[10][4][6] = {{{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244}},{{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244}},{{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244}},{{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244}},{{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244}},{{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244}},{{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244}},{{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244}},{{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244}},{{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244},{(void*)0,(void*)0,&p_534->g_244,(void*)0,&p_534->g_244,&p_534->g_244}}};
                int32_t *l_485 = (void*)0;
                int32_t *l_486[2][1][5] = {{{&p_534->g_78,&p_534->g_41,&p_534->g_78,&p_534->g_78,&p_534->g_41}},{{&p_534->g_78,&p_534->g_41,&p_534->g_78,&p_534->g_78,&p_534->g_41}}};
                int i, j, k;
                l_487 &= (((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(p_534->g_469.yxwwwzzyyzxyzwzz)).scf)).yxyyxxyxxyyxyyyy, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 16))(l_470.s5f5e5127cf7b8f6e)).see67, (uint64_t)(p_534->g_469.y ^= p_26), (uint64_t)(0UL < (safe_mod_func_uint8_t_u_u(p_28, ((l_261[8] ^= (safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(l_477, 7)), ((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 16))(l_478.s7050166441226762)).s6454, (uint64_t)p_534->g_314, (uint64_t)(p_28 | ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_479.xwxwxwxz)).even)).z)))).w))) || (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_534->g_481.s7576)).yxyyzxwy)).s6704331423471403)).sa & 1UL)))))))), p_26, ((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 4))(p_534->g_482.s7603)), ((VECTOR(uint64_t, 4))((safe_lshift_func_uint16_t_u_u(0x853FL, 1)), 6UL, 0xA9EF6AB7303D0D9AL, 0x6E8CABCD4F48D166L))))), 0UL, 0x0CA1EF990127C028L, 0xBAB21079223D01E0L, p_26, ((VECTOR(uint64_t, 2))(9UL)), 18446744073709551607UL)).sec)).yyyxyxxxxxyxyxyx))).even, ((VECTOR(uint64_t, 8))(1UL))))).s6 >= 0x7F65004F0630614FL);
            }
            (*l_489) = l_488;
        }
        (*p_534->g_77) &= p_26;
    }
    --l_508;
    l_511--;
    return l_501;
}


/* ------------------------------------------ */
/* 
 * reads : p_534->g_41 p_534->g_comm_values p_534->g_20 p_534->g_69 p_534->g_74 p_534->g_75 p_534->g_76 p_534->g_77 p_534->g_78
 * writes: p_534->g_41 p_534->g_69 p_534->l_comm_values p_534->g_73 p_534->g_78 p_534->g_76 p_534->g_75
 */
uint64_t  func_29(int32_t * p_30, uint8_t  p_31, struct S1 * p_534)
{ /* block id: 9 */
    int32_t l_39 = 0x5F800085L;
    int32_t l_253 = 0x09D8D0A3L;
    int32_t **l_254 = (void*)0;
    l_254 = func_32((func_37(l_39, p_534) > (l_253 = (safe_add_func_uint64_t_u_u(0x77771FDA6603FA8BL, (l_39 , (l_39 && ((safe_sub_func_int64_t_s_s((GROUP_DIVERGE(0, 1) || func_46(func_52(p_31, l_39, ((l_39 , 0x27L) >= p_534->g_comm_values[p_534->tid]), l_39, p_534->g_20.y, p_534), l_39, l_39, p_534->g_74[3], p_30, p_534)), 0xF0BCE5FE1BB9BA46L)) ^ l_39))))))), p_31, &l_39, l_254, p_534);
    (*l_254) = p_30;
    return l_253;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_32(int32_t  p_33, int64_t  p_34, int32_t * p_35, int32_t ** p_36, struct S1 * p_534)
{ /* block id: 91 */
    int32_t *l_255 = &p_534->g_41;
    l_255 = l_255;
    return &p_534->g_75[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_534->g_41
 * writes: p_534->g_41
 */
uint32_t  func_37(uint64_t  p_38, struct S1 * p_534)
{ /* block id: 10 */
    int32_t *l_40[1];
    int i;
    for (i = 0; i < 1; i++)
        l_40[i] = &p_534->g_41;
    p_534->g_41 &= 0x600BF094L;
    return p_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_534->g_75 p_534->g_76 p_534->g_77 p_534->g_78
 * writes: p_534->g_78 p_534->g_76
 */
uint16_t  func_46(int32_t  p_47, uint32_t  p_48, int32_t  p_49, int32_t ** p_50, uint32_t * p_51, struct S1 * p_534)
{ /* block id: 22 */
    uint64_t l_111 = 18446744073709551615UL;
    VECTOR(uint32_t, 8) l_121 = (VECTOR(uint32_t, 8))(0x1D1304DEL, (VECTOR(uint32_t, 4))(0x1D1304DEL, (VECTOR(uint32_t, 2))(0x1D1304DEL, 0x1B022312L), 0x1B022312L), 0x1B022312L, 0x1D1304DEL, 0x1B022312L);
    VECTOR(uint32_t, 4) l_122 = (VECTOR(uint32_t, 4))(0x268510E3L, (VECTOR(uint32_t, 2))(0x268510E3L, 0x52B8ED34L), 0x52B8ED34L);
    VECTOR(uint32_t, 4) l_123 = (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 4294967290UL), 4294967290UL);
    uint16_t *l_126 = &p_534->g_127;
    int32_t l_149 = 0x77F9ADABL;
    int32_t l_188 = 0x725517FAL;
    uint16_t **l_214 = &l_126;
    uint16_t l_215 = 0x0AB1L;
    int32_t l_241 = 8L;
    int32_t l_242[8] = {0x04B40D20L,0x04B40D20L,0x04B40D20L,0x04B40D20L,0x04B40D20L,0x04B40D20L,0x04B40D20L,0x04B40D20L};
    int32_t l_243 = 0L;
    uint32_t l_249 = 0xD307E328L;
    uint64_t l_252 = 1UL;
    int i;
    (*p_534->g_77) |= (**p_50);
    if ((atomic_inc(&p_534->g_atomic_input[37 * get_linear_group_id() + 17]) == 8))
    { /* block id: 25 */
        int8_t l_79 = 0L;
        int32_t l_80 = (-9L);
        int64_t l_81 = 0x7EF0591FCF288C1BL;
        int8_t l_82 = (-3L);
        l_81 = (l_79 , l_80);
        if (((l_82 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((-4L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((-7L), 0x0768DD0FL, 0L, ((VECTOR(int32_t, 2))((-9L), 0x4ADB81C6L)).odd, 0L, 3L, (-1L), 2L)).s25)), 0x52369E1CL)).odd)).yyxxxxxyyxyyyxxx)).s7) , 0x52146605L))
        { /* block id: 28 */
            uint16_t l_83 = 65535UL;
            int16_t l_84[10] = {4L,4L,4L,4L,4L,4L,4L,4L,4L,4L};
            int8_t l_85 = (-10L);
            int i;
            l_85 = (l_83 , ((VECTOR(int32_t, 4))(l_84[9], 0x3FABC748L, 0x606EC161L, (-9L))).w);
        }
        else
        { /* block id: 30 */
            int8_t l_86 = 0x40L;
            VECTOR(uint32_t, 8) l_87 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x7E153341L), 0x7E153341L), 0x7E153341L, 1UL, 0x7E153341L);
            int32_t l_89 = 0x528475ADL;
            int32_t *l_88 = &l_89;
            int32_t *l_90 = &l_89;
            int32_t *l_91 = (void*)0;
            int32_t *l_92 = (void*)0;
            int i;
            l_90 = ((l_86 , ((VECTOR(uint32_t, 8))(abs(((VECTOR(uint32_t, 2))(l_87.s40)).xxyxyxxy))).s5) , (l_88 = (void*)0));
            l_92 = l_91;
        }
        unsigned int result = 0;
        result += l_79;
        result += l_80;
        result += l_81;
        result += l_82;
        atomic_add(&p_534->g_special_values[37 * get_linear_group_id() + 17], result);
    }
    else
    { /* block id: 35 */
        (1 + 1);
    }
    if ((atomic_inc(&p_534->l_atomic_input[14]) == 9))
    { /* block id: 39 */
        int8_t l_93 = 0x2FL;
        uint16_t l_94 = 65528UL;
        l_94 = l_93;
        unsigned int result = 0;
        result += l_93;
        result += l_94;
        atomic_add(&p_534->l_special_values[14], result);
    }
    else
    { /* block id: 41 */
        (1 + 1);
    }
    for (p_534->g_76 = 0; (p_534->g_76 <= (-13)); p_534->g_76--)
    { /* block id: 46 */
        uint16_t *l_99 = (void*)0;
        uint16_t *l_100 = (void*)0;
        uint16_t *l_101 = &p_534->g_73[1];
        int32_t l_106 = 0x5E43F789L;
        uint8_t *l_107[9] = {&p_534->g_108,&p_534->g_108,&p_534->g_108,&p_534->g_108,&p_534->g_108,&p_534->g_108,&p_534->g_108,&p_534->g_108,&p_534->g_108};
        int32_t *l_112 = &p_534->g_78;
        VECTOR(uint32_t, 8) l_120 = (VECTOR(uint32_t, 8))(0x2074A6A3L, (VECTOR(uint32_t, 4))(0x2074A6A3L, (VECTOR(uint32_t, 2))(0x2074A6A3L, 0x0413CF27L), 0x0413CF27L), 0x0413CF27L, 0x2074A6A3L, 0x0413CF27L);
        uint16_t **l_128[4];
        VECTOR(int32_t, 4) l_155 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x35D45CBCL), 0x35D45CBCL);
        uint8_t l_216[3][10] = {{1UL,255UL,0UL,0x01L,0UL,255UL,1UL,0x5AL,9UL,9UL},{1UL,255UL,0UL,0x01L,0UL,255UL,1UL,0x5AL,9UL,9UL},{1UL,255UL,0UL,0x01L,0UL,255UL,1UL,0x5AL,9UL,9UL}};
        VECTOR(uint16_t, 8) l_218 = (VECTOR(uint16_t, 8))(0x8978L, (VECTOR(uint16_t, 4))(0x8978L, (VECTOR(uint16_t, 2))(0x8978L, 65535UL), 65535UL), 65535UL, 0x8978L, 65535UL);
        VECTOR(int8_t, 4) l_225 = (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 2L), 2L);
        int8_t l_232 = (-2L);
        int32_t *l_233 = &l_149;
        int32_t *l_234 = &l_149;
        int32_t *l_235 = &p_534->g_78;
        int32_t *l_236 = &l_188;
        int32_t *l_237 = &p_534->g_78;
        int32_t *l_238 = (void*)0;
        int32_t *l_239 = &l_188;
        int32_t *l_240[4][10][2] = {{{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188}},{{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188}},{{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188}},{{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188},{(void*)0,&l_188}}};
        VECTOR(int32_t, 16) l_245 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x68DCBA84L), 0x68DCBA84L), 0x68DCBA84L, 0L, 0x68DCBA84L, (VECTOR(int32_t, 2))(0L, 0x68DCBA84L), (VECTOR(int32_t, 2))(0L, 0x68DCBA84L), 0L, 0x68DCBA84L, 0L, 0x68DCBA84L);
        int8_t l_246 = 0x18L;
        int32_t l_247 = (-1L);
        int8_t l_248 = 0x0FL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_128[i] = (void*)0;
        (1 + 1);
    }
    return l_252;
}


/* ------------------------------------------ */
/* 
 * reads : p_534->g_comm_values p_534->g_69 p_534->g_20
 * writes: p_534->g_69 p_534->l_comm_values p_534->g_73
 */
int32_t  func_52(int32_t  p_53, int16_t  p_54, int32_t  p_55, uint32_t  p_56, uint32_t  p_57, struct S1 * p_534)
{ /* block id: 13 */
    int64_t l_65 = 9L;
    int8_t *l_68 = &p_534->g_69;
    int64_t *l_70 = &l_65;
    p_534->g_73[1] = (safe_lshift_func_uint16_t_u_s(func_60((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(0x714E288A3D85AA7FL, (-3L), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))((-1L), 0L)).xxyy)), 0L, 0x32D45AB60A95A2E2L)).s0641652267043071)).s41)).yyxxyxxy)).s3325375771373135)).s2 , (p_55 & (((VECTOR(uint8_t, 8))(FAKE_DIVERGE(p_534->group_1_offset, get_group_id(1), 10), 0xAFL, ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 8))(246UL, ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 4))(((safe_add_func_uint32_t_u_u(1UL, ((l_65 = p_54) & (safe_add_func_int32_t_s_s(p_57, FAKE_DIVERGE(p_534->local_1_offset, get_local_id(1), 10)))))) < ((*l_68) = (-1L))), ((p_534->l_comm_values[(safe_mod_func_uint32_t_u_u(p_534->tid, 24))] = (p_534->g_comm_values[p_534->tid] , ((*l_70) = l_65))) >= ((safe_mul_func_uint8_t_u_u((0x6EL >= ((5L && 0x0E81D84CL) | 0xBA09L)), 0x44L)) & 0UL)), 0xB9L, 0x58L)).odd, ((VECTOR(uint8_t, 2))(0xE7L))))).xyxxyxxxxyyxyxyy)).s7ef5, ((VECTOR(uint8_t, 4))(0x13L))))), ((VECTOR(uint8_t, 2))(0UL)), 0xB9L)).hi, (uint8_t)p_534->g_69, (uint8_t)p_534->g_20.x))), 7UL, 1UL)).s1 | p_534->g_20.x))), p_534->g_20.x, p_534), p_57));
    return l_65;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_60(int64_t  p_61, uint32_t  p_62, struct S1 * p_534)
{ /* block id: 18 */
    return p_61;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[37];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 37; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[37];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 37; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[24];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 24; i++)
            l_comm_values[i] = 1;
    struct S1 c_535;
    struct S1* p_534 = &c_535;
    struct S1 c_536 = {
        0x19570A50L, // p_534->g_7
        (VECTOR(uint32_t, 2))(9UL, 0x045DCEFBL), // p_534->g_20
        0UL, // p_534->g_22
        (-2L), // p_534->g_41
        0x48L, // p_534->g_69
        {2UL,2UL,2UL}, // p_534->g_73
        0x74F6E089L, // p_534->g_76
        {&p_534->g_76,&p_534->g_76,&p_534->g_76,&p_534->g_76,&p_534->g_76}, // p_534->g_75
        {&p_534->g_75[4],&p_534->g_75[4],&p_534->g_75[4],&p_534->g_75[4],&p_534->g_75[4]}, // p_534->g_74
        0L, // p_534->g_78
        &p_534->g_78, // p_534->g_77
        0x93L, // p_534->g_108
        (VECTOR(int16_t, 16))(0x064FL, (VECTOR(int16_t, 4))(0x064FL, (VECTOR(int16_t, 2))(0x064FL, (-1L)), (-1L)), (-1L), 0x064FL, (-1L), (VECTOR(int16_t, 2))(0x064FL, (-1L)), (VECTOR(int16_t, 2))(0x064FL, (-1L)), 0x064FL, (-1L), 0x064FL, (-1L)), // p_534->g_113
        (VECTOR(uint32_t, 16))(0x53715829L, (VECTOR(uint32_t, 4))(0x53715829L, (VECTOR(uint32_t, 2))(0x53715829L, 0xEFF72AEAL), 0xEFF72AEAL), 0xEFF72AEAL, 0x53715829L, 0xEFF72AEAL, (VECTOR(uint32_t, 2))(0x53715829L, 0xEFF72AEAL), (VECTOR(uint32_t, 2))(0x53715829L, 0xEFF72AEAL), 0x53715829L, 0xEFF72AEAL, 0x53715829L, 0xEFF72AEAL), // p_534->g_119
        65528UL, // p_534->g_127
        {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}, // p_534->g_142
        (void*)0, // p_534->g_150
        {{1UL,0x4D920E91L,4UL,0x4D920E91L},{1UL,0x4D920E91L,4UL,0x4D920E91L},{1UL,0x4D920E91L,4UL,0x4D920E91L},{1UL,0x4D920E91L,4UL,0x4D920E91L},{1UL,0x4D920E91L,4UL,0x4D920E91L},{1UL,0x4D920E91L,4UL,0x4D920E91L},{1UL,0x4D920E91L,4UL,0x4D920E91L},{1UL,0x4D920E91L,4UL,0x4D920E91L},{1UL,0x4D920E91L,4UL,0x4D920E91L}}, // p_534->g_154
        8UL, // p_534->g_158
        1L, // p_534->g_165
        (-1L), // p_534->g_244
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x6CFEL), 0x6CFEL), 0x6CFEL, 0L, 0x6CFEL, (VECTOR(int16_t, 2))(0L, 0x6CFEL), (VECTOR(int16_t, 2))(0L, 0x6CFEL), 0L, 0x6CFEL, 0L, 0x6CFEL), // p_534->g_283
        0xC6D49A363C039C90L, // p_534->g_295
        4294967286UL, // p_534->g_314
        (VECTOR(uint8_t, 2))(9UL, 0xEFL), // p_534->g_358
        (VECTOR(uint32_t, 16))(0x6C34BFBCL, (VECTOR(uint32_t, 4))(0x6C34BFBCL, (VECTOR(uint32_t, 2))(0x6C34BFBCL, 4294967295UL), 4294967295UL), 4294967295UL, 0x6C34BFBCL, 4294967295UL, (VECTOR(uint32_t, 2))(0x6C34BFBCL, 4294967295UL), (VECTOR(uint32_t, 2))(0x6C34BFBCL, 4294967295UL), 0x6C34BFBCL, 4294967295UL, 0x6C34BFBCL, 4294967295UL), // p_534->g_365
        0x23L, // p_534->g_370
        (VECTOR(int16_t, 16))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, (-10L)), (-10L)), (-10L), 4L, (-10L), (VECTOR(int16_t, 2))(4L, (-10L)), (VECTOR(int16_t, 2))(4L, (-10L)), 4L, (-10L), 4L, (-10L)), // p_534->g_408
        (VECTOR(uint64_t, 4))(0x353DB959A32829D8L, (VECTOR(uint64_t, 2))(0x353DB959A32829D8L, 0UL), 0UL), // p_534->g_469
        (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x520B43CDL), 0x520B43CDL), 0x520B43CDL, 5L, 0x520B43CDL), // p_534->g_481
        (VECTOR(uint64_t, 8))(4UL, (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 1UL), 1UL), 1UL, 4UL, 1UL), // p_534->g_482
        0UL, // p_534->g_516
        &p_534->g_516, // p_534->g_515
        (void*)0, // p_534->g_521
        {{{&p_534->g_78,&p_534->g_78,&p_534->g_78,&p_534->g_78}},{{&p_534->g_78,&p_534->g_78,&p_534->g_78,&p_534->g_78}},{{&p_534->g_78,&p_534->g_78,&p_534->g_78,&p_534->g_78}},{{&p_534->g_78,&p_534->g_78,&p_534->g_78,&p_534->g_78}},{{&p_534->g_78,&p_534->g_78,&p_534->g_78,&p_534->g_78}},{{&p_534->g_78,&p_534->g_78,&p_534->g_78,&p_534->g_78}}}, // p_534->g_522
        0, // p_534->v_collective
        sequence_input[get_global_id(0)], // p_534->global_0_offset
        sequence_input[get_global_id(1)], // p_534->global_1_offset
        sequence_input[get_global_id(2)], // p_534->global_2_offset
        sequence_input[get_local_id(0)], // p_534->local_0_offset
        sequence_input[get_local_id(1)], // p_534->local_1_offset
        sequence_input[get_local_id(2)], // p_534->local_2_offset
        sequence_input[get_group_id(0)], // p_534->group_0_offset
        sequence_input[get_group_id(1)], // p_534->group_1_offset
        sequence_input[get_group_id(2)], // p_534->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 24)), permutations[0][get_linear_local_id()])), // p_534->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_535 = c_536;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_534);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_534->g_7, "p_534->g_7", print_hash_value);
    transparent_crc(p_534->g_20.x, "p_534->g_20.x", print_hash_value);
    transparent_crc(p_534->g_20.y, "p_534->g_20.y", print_hash_value);
    transparent_crc(p_534->g_22, "p_534->g_22", print_hash_value);
    transparent_crc(p_534->g_41, "p_534->g_41", print_hash_value);
    transparent_crc(p_534->g_69, "p_534->g_69", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_534->g_73[i], "p_534->g_73[i]", print_hash_value);

    }
    transparent_crc(p_534->g_76, "p_534->g_76", print_hash_value);
    transparent_crc(p_534->g_78, "p_534->g_78", print_hash_value);
    transparent_crc(p_534->g_108, "p_534->g_108", print_hash_value);
    transparent_crc(p_534->g_113.s0, "p_534->g_113.s0", print_hash_value);
    transparent_crc(p_534->g_113.s1, "p_534->g_113.s1", print_hash_value);
    transparent_crc(p_534->g_113.s2, "p_534->g_113.s2", print_hash_value);
    transparent_crc(p_534->g_113.s3, "p_534->g_113.s3", print_hash_value);
    transparent_crc(p_534->g_113.s4, "p_534->g_113.s4", print_hash_value);
    transparent_crc(p_534->g_113.s5, "p_534->g_113.s5", print_hash_value);
    transparent_crc(p_534->g_113.s6, "p_534->g_113.s6", print_hash_value);
    transparent_crc(p_534->g_113.s7, "p_534->g_113.s7", print_hash_value);
    transparent_crc(p_534->g_113.s8, "p_534->g_113.s8", print_hash_value);
    transparent_crc(p_534->g_113.s9, "p_534->g_113.s9", print_hash_value);
    transparent_crc(p_534->g_113.sa, "p_534->g_113.sa", print_hash_value);
    transparent_crc(p_534->g_113.sb, "p_534->g_113.sb", print_hash_value);
    transparent_crc(p_534->g_113.sc, "p_534->g_113.sc", print_hash_value);
    transparent_crc(p_534->g_113.sd, "p_534->g_113.sd", print_hash_value);
    transparent_crc(p_534->g_113.se, "p_534->g_113.se", print_hash_value);
    transparent_crc(p_534->g_113.sf, "p_534->g_113.sf", print_hash_value);
    transparent_crc(p_534->g_119.s0, "p_534->g_119.s0", print_hash_value);
    transparent_crc(p_534->g_119.s1, "p_534->g_119.s1", print_hash_value);
    transparent_crc(p_534->g_119.s2, "p_534->g_119.s2", print_hash_value);
    transparent_crc(p_534->g_119.s3, "p_534->g_119.s3", print_hash_value);
    transparent_crc(p_534->g_119.s4, "p_534->g_119.s4", print_hash_value);
    transparent_crc(p_534->g_119.s5, "p_534->g_119.s5", print_hash_value);
    transparent_crc(p_534->g_119.s6, "p_534->g_119.s6", print_hash_value);
    transparent_crc(p_534->g_119.s7, "p_534->g_119.s7", print_hash_value);
    transparent_crc(p_534->g_119.s8, "p_534->g_119.s8", print_hash_value);
    transparent_crc(p_534->g_119.s9, "p_534->g_119.s9", print_hash_value);
    transparent_crc(p_534->g_119.sa, "p_534->g_119.sa", print_hash_value);
    transparent_crc(p_534->g_119.sb, "p_534->g_119.sb", print_hash_value);
    transparent_crc(p_534->g_119.sc, "p_534->g_119.sc", print_hash_value);
    transparent_crc(p_534->g_119.sd, "p_534->g_119.sd", print_hash_value);
    transparent_crc(p_534->g_119.se, "p_534->g_119.se", print_hash_value);
    transparent_crc(p_534->g_119.sf, "p_534->g_119.sf", print_hash_value);
    transparent_crc(p_534->g_127, "p_534->g_127", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_534->g_154[i][j], "p_534->g_154[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_534->g_158, "p_534->g_158", print_hash_value);
    transparent_crc(p_534->g_165, "p_534->g_165", print_hash_value);
    transparent_crc(p_534->g_244, "p_534->g_244", print_hash_value);
    transparent_crc(p_534->g_283.s0, "p_534->g_283.s0", print_hash_value);
    transparent_crc(p_534->g_283.s1, "p_534->g_283.s1", print_hash_value);
    transparent_crc(p_534->g_283.s2, "p_534->g_283.s2", print_hash_value);
    transparent_crc(p_534->g_283.s3, "p_534->g_283.s3", print_hash_value);
    transparent_crc(p_534->g_283.s4, "p_534->g_283.s4", print_hash_value);
    transparent_crc(p_534->g_283.s5, "p_534->g_283.s5", print_hash_value);
    transparent_crc(p_534->g_283.s6, "p_534->g_283.s6", print_hash_value);
    transparent_crc(p_534->g_283.s7, "p_534->g_283.s7", print_hash_value);
    transparent_crc(p_534->g_283.s8, "p_534->g_283.s8", print_hash_value);
    transparent_crc(p_534->g_283.s9, "p_534->g_283.s9", print_hash_value);
    transparent_crc(p_534->g_283.sa, "p_534->g_283.sa", print_hash_value);
    transparent_crc(p_534->g_283.sb, "p_534->g_283.sb", print_hash_value);
    transparent_crc(p_534->g_283.sc, "p_534->g_283.sc", print_hash_value);
    transparent_crc(p_534->g_283.sd, "p_534->g_283.sd", print_hash_value);
    transparent_crc(p_534->g_283.se, "p_534->g_283.se", print_hash_value);
    transparent_crc(p_534->g_283.sf, "p_534->g_283.sf", print_hash_value);
    transparent_crc(p_534->g_295, "p_534->g_295", print_hash_value);
    transparent_crc(p_534->g_314, "p_534->g_314", print_hash_value);
    transparent_crc(p_534->g_358.x, "p_534->g_358.x", print_hash_value);
    transparent_crc(p_534->g_358.y, "p_534->g_358.y", print_hash_value);
    transparent_crc(p_534->g_365.s0, "p_534->g_365.s0", print_hash_value);
    transparent_crc(p_534->g_365.s1, "p_534->g_365.s1", print_hash_value);
    transparent_crc(p_534->g_365.s2, "p_534->g_365.s2", print_hash_value);
    transparent_crc(p_534->g_365.s3, "p_534->g_365.s3", print_hash_value);
    transparent_crc(p_534->g_365.s4, "p_534->g_365.s4", print_hash_value);
    transparent_crc(p_534->g_365.s5, "p_534->g_365.s5", print_hash_value);
    transparent_crc(p_534->g_365.s6, "p_534->g_365.s6", print_hash_value);
    transparent_crc(p_534->g_365.s7, "p_534->g_365.s7", print_hash_value);
    transparent_crc(p_534->g_365.s8, "p_534->g_365.s8", print_hash_value);
    transparent_crc(p_534->g_365.s9, "p_534->g_365.s9", print_hash_value);
    transparent_crc(p_534->g_365.sa, "p_534->g_365.sa", print_hash_value);
    transparent_crc(p_534->g_365.sb, "p_534->g_365.sb", print_hash_value);
    transparent_crc(p_534->g_365.sc, "p_534->g_365.sc", print_hash_value);
    transparent_crc(p_534->g_365.sd, "p_534->g_365.sd", print_hash_value);
    transparent_crc(p_534->g_365.se, "p_534->g_365.se", print_hash_value);
    transparent_crc(p_534->g_365.sf, "p_534->g_365.sf", print_hash_value);
    transparent_crc(p_534->g_370, "p_534->g_370", print_hash_value);
    transparent_crc(p_534->g_408.s0, "p_534->g_408.s0", print_hash_value);
    transparent_crc(p_534->g_408.s1, "p_534->g_408.s1", print_hash_value);
    transparent_crc(p_534->g_408.s2, "p_534->g_408.s2", print_hash_value);
    transparent_crc(p_534->g_408.s3, "p_534->g_408.s3", print_hash_value);
    transparent_crc(p_534->g_408.s4, "p_534->g_408.s4", print_hash_value);
    transparent_crc(p_534->g_408.s5, "p_534->g_408.s5", print_hash_value);
    transparent_crc(p_534->g_408.s6, "p_534->g_408.s6", print_hash_value);
    transparent_crc(p_534->g_408.s7, "p_534->g_408.s7", print_hash_value);
    transparent_crc(p_534->g_408.s8, "p_534->g_408.s8", print_hash_value);
    transparent_crc(p_534->g_408.s9, "p_534->g_408.s9", print_hash_value);
    transparent_crc(p_534->g_408.sa, "p_534->g_408.sa", print_hash_value);
    transparent_crc(p_534->g_408.sb, "p_534->g_408.sb", print_hash_value);
    transparent_crc(p_534->g_408.sc, "p_534->g_408.sc", print_hash_value);
    transparent_crc(p_534->g_408.sd, "p_534->g_408.sd", print_hash_value);
    transparent_crc(p_534->g_408.se, "p_534->g_408.se", print_hash_value);
    transparent_crc(p_534->g_408.sf, "p_534->g_408.sf", print_hash_value);
    transparent_crc(p_534->g_469.x, "p_534->g_469.x", print_hash_value);
    transparent_crc(p_534->g_469.y, "p_534->g_469.y", print_hash_value);
    transparent_crc(p_534->g_469.z, "p_534->g_469.z", print_hash_value);
    transparent_crc(p_534->g_469.w, "p_534->g_469.w", print_hash_value);
    transparent_crc(p_534->g_481.s0, "p_534->g_481.s0", print_hash_value);
    transparent_crc(p_534->g_481.s1, "p_534->g_481.s1", print_hash_value);
    transparent_crc(p_534->g_481.s2, "p_534->g_481.s2", print_hash_value);
    transparent_crc(p_534->g_481.s3, "p_534->g_481.s3", print_hash_value);
    transparent_crc(p_534->g_481.s4, "p_534->g_481.s4", print_hash_value);
    transparent_crc(p_534->g_481.s5, "p_534->g_481.s5", print_hash_value);
    transparent_crc(p_534->g_481.s6, "p_534->g_481.s6", print_hash_value);
    transparent_crc(p_534->g_481.s7, "p_534->g_481.s7", print_hash_value);
    transparent_crc(p_534->g_482.s0, "p_534->g_482.s0", print_hash_value);
    transparent_crc(p_534->g_482.s1, "p_534->g_482.s1", print_hash_value);
    transparent_crc(p_534->g_482.s2, "p_534->g_482.s2", print_hash_value);
    transparent_crc(p_534->g_482.s3, "p_534->g_482.s3", print_hash_value);
    transparent_crc(p_534->g_482.s4, "p_534->g_482.s4", print_hash_value);
    transparent_crc(p_534->g_482.s5, "p_534->g_482.s5", print_hash_value);
    transparent_crc(p_534->g_482.s6, "p_534->g_482.s6", print_hash_value);
    transparent_crc(p_534->g_482.s7, "p_534->g_482.s7", print_hash_value);
    transparent_crc(p_534->g_516, "p_534->g_516", print_hash_value);
    transparent_crc(p_534->v_collective, "p_534->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 37; i++)
            transparent_crc(p_534->g_special_values[i + 37 * get_linear_group_id()], "p_534->g_special_values[i + 37 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 37; i++)
            transparent_crc(p_534->l_special_values[i], "p_534->l_special_values[i]", print_hash_value);
    transparent_crc(p_534->l_comm_values[get_linear_local_id()], "p_534->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_534->g_comm_values[get_linear_group_id() * 24 + get_linear_local_id()], "p_534->g_comm_values[get_linear_group_id() * 24 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
