// --atomics 37 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 7,40,18 -l 1,4,3
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

__constant uint32_t permutations[10][12] = {
{8,4,5,10,0,9,6,11,2,7,3,1}, // permutation 0
{2,7,9,3,5,10,6,11,0,1,8,4}, // permutation 1
{11,8,4,6,5,3,9,2,0,10,1,7}, // permutation 2
{8,10,1,0,4,11,9,5,7,2,3,6}, // permutation 3
{11,9,2,7,0,3,6,4,5,10,8,1}, // permutation 4
{11,0,7,6,9,10,5,2,1,3,8,4}, // permutation 5
{5,9,1,10,8,7,0,11,4,6,3,2}, // permutation 6
{7,0,11,1,5,10,9,2,4,3,6,8}, // permutation 7
{6,9,4,7,2,0,1,8,11,5,3,10}, // permutation 8
{1,10,11,5,0,6,3,2,9,8,4,7} // permutation 9
};

// Seed: 1458430789

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3[4][1][6];
    uint32_t g_5;
    uint8_t g_9;
    uint32_t g_17;
    volatile uint32_t g_27;
    volatile uint32_t * volatile g_26;
    VECTOR(int16_t, 16) g_28;
    int32_t *g_37;
    VECTOR(int32_t, 4) g_70;
    uint64_t g_79;
    VECTOR(int16_t, 16) g_89;
    VECTOR(int32_t, 8) g_136;
    VECTOR(int32_t, 16) g_137;
    VECTOR(uint64_t, 4) g_158;
    int64_t *g_186;
    VECTOR(uint16_t, 8) g_204;
    uint32_t g_211;
    uint32_t g_214;
    uint32_t *g_213;
    int32_t ***g_226;
    int32_t * volatile * volatile * volatile *g_228;
    int32_t * volatile *g_230;
    int32_t * volatile * volatile *g_229;
    VECTOR(uint16_t, 16) g_235;
    VECTOR(uint16_t, 16) g_236;
    VECTOR(uint64_t, 16) g_242;
    int32_t g_244;
    VECTOR(int8_t, 4) g_270;
    VECTOR(uint8_t, 8) g_294;
    uint32_t g_316;
    int32_t g_337;
    volatile uint16_t g_380;
    volatile uint16_t *g_379;
    uint32_t g_429[8][9][1];
    VECTOR(uint32_t, 2) g_434;
    int8_t *g_467;
    uint64_t *g_471;
    uint64_t **g_470;
    VECTOR(uint32_t, 8) g_473;
    VECTOR(uint32_t, 8) g_474;
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
int32_t  func_1(struct S0 * p_485);
int32_t * func_10(int32_t * p_11, int32_t * p_12, int32_t * p_13, struct S0 * p_485);
uint8_t  func_20(uint32_t  p_21, int64_t  p_22, int32_t * p_23, uint32_t  p_24, int32_t * p_25, struct S0 * p_485);
int16_t  func_29(uint32_t  p_30, uint32_t * p_31, int64_t  p_32, struct S0 * p_485);
int32_t ** func_38(int32_t ** p_39, struct S0 * p_485);
int32_t ** func_40(int32_t  p_41, uint32_t  p_42, int32_t  p_43, struct S0 * p_485);
int32_t  func_44(int64_t  p_45, int32_t  p_46, uint32_t  p_47, int32_t ** p_48, struct S0 * p_485);
uint8_t  func_53(uint64_t  p_54, uint32_t * p_55, int32_t  p_56, uint32_t * p_57, uint32_t  p_58, struct S0 * p_485);
uint32_t * func_59(int32_t ** p_60, struct S0 * p_485);
int32_t ** func_61(uint32_t * p_62, uint64_t  p_63, int64_t  p_64, int8_t  p_65, uint32_t  p_66, struct S0 * p_485);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_485->g_5 p_485->g_17 p_485->g_26 p_485->g_9 p_485->g_28 p_485->l_comm_values p_485->g_3 p_485->g_79 p_485->g_37 p_485->g_70 p_485->g_comm_values p_485->g_89 p_485->g_137 p_485->g_136 p_485->g_186 p_485->g_158 p_485->g_204 p_485->g_213 p_485->g_226 p_485->g_228 p_485->g_229 p_485->g_235 p_485->g_236 p_485->g_242 p_485->g_270 p_485->g_294 p_485->g_214 p_485->g_211 p_485->g_337 p_485->g_379 p_485->g_316 p_485->g_434 p_485->g_429 p_485->g_470 p_485->g_473 p_485->g_474 p_485->g_230 p_485->g_380
 * writes: p_485->g_5 p_485->g_9 p_485->g_17 p_485->g_37 p_485->g_70 p_485->g_comm_values p_485->g_79 p_485->g_137 p_485->g_136 p_485->g_89 p_485->g_211 p_485->g_226 p_485->g_244 p_485->g_294 p_485->g_214 p_485->g_316 p_485->g_270 p_485->g_429 p_485->g_467 p_485->g_3
 */
int32_t  func_1(struct S0 * p_485)
{ /* block id: 4 */
    uint32_t *l_2 = (void*)0;
    uint32_t *l_4[8][4][6] = {{{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5}},{{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5}},{{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5}},{{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5}},{{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5}},{{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5}},{{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5}},{{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5},{&p_485->g_5,&p_485->g_5,&p_485->g_5,&p_485->g_5,(void*)0,&p_485->g_5}}};
    int32_t l_6[3];
    uint32_t *l_16[8] = {&p_485->g_17,&p_485->g_17,&p_485->g_17,&p_485->g_17,&p_485->g_17,&p_485->g_17,&p_485->g_17,&p_485->g_17};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_6[i] = 1L;
    (*p_485->g_230) = ((p_485->g_9 = (++p_485->g_5)) , func_10(&l_6[0], ((((65535UL | (safe_div_func_uint32_t_u_u((--p_485->g_17), p_485->g_5))) & func_20((l_16[5] != p_485->g_26), (p_485->g_9 , (((VECTOR(int16_t, 8))(p_485->g_28.s35c52658)).s7 ^ (((((VECTOR(int64_t, 4))((5L ^ func_29(p_485->l_comm_values[(safe_mod_func_uint32_t_u_u(p_485->tid, 12))], l_4[6][0][2], l_6[2], p_485)), ((VECTOR(int64_t, 2))(0x3DC35C32B37EF48AL)), 0x66905623DA49DF42L)).w , l_4[2][0][4]) == (void*)0) || 1UL))), &l_6[2], p_485->g_242.sf, p_485->g_213, p_485)) , p_485->g_380) , &l_6[2]), l_2, p_485));
    return p_485->g_294.s4;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_10(int32_t * p_11, int32_t * p_12, int32_t * p_13, struct S0 * p_485)
{ /* block id: 224 */
    int32_t *l_484[2][5] = {{&p_485->g_3[1][0][5],&p_485->g_3[1][0][5],&p_485->g_3[1][0][5],&p_485->g_3[1][0][5],&p_485->g_3[1][0][5]},{&p_485->g_3[1][0][5],&p_485->g_3[1][0][5],&p_485->g_3[1][0][5],&p_485->g_3[1][0][5],&p_485->g_3[1][0][5]}};
    int i, j;
    return l_484[0][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_485->g_214 p_485->g_229 p_485->g_230 p_485->g_37 p_485->g_3
 * writes: p_485->g_37 p_485->g_3
 */
uint8_t  func_20(uint32_t  p_21, int64_t  p_22, int32_t * p_23, uint32_t  p_24, int32_t * p_25, struct S0 * p_485)
{ /* block id: 216 */
    int32_t *l_481[10] = {&p_485->g_3[1][0][5],&p_485->g_3[1][0][5],&p_485->g_3[1][0][5],&p_485->g_3[1][0][5],&p_485->g_3[1][0][5],&p_485->g_3[1][0][5],&p_485->g_3[1][0][5],&p_485->g_3[1][0][5],&p_485->g_3[1][0][5],&p_485->g_3[1][0][5]};
    int32_t **l_482 = &l_481[5];
    int32_t *l_483[6];
    int i;
    for (i = 0; i < 6; i++)
        l_483[i] = &p_485->g_3[1][0][2];
    (*p_23) &= (*p_25);
    p_25 = ((*l_482) = l_481[4]);
    (**p_485->g_229) = ((*l_482) = l_483[5]);
    (***p_485->g_229) ^= (0x9223310FL && p_21);
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_485->g_3 p_485->g_9 p_485->g_5 p_485->l_comm_values p_485->g_28 p_485->g_79 p_485->g_37 p_485->g_70 p_485->g_comm_values p_485->g_89 p_485->g_137 p_485->g_136 p_485->g_186 p_485->g_158 p_485->g_204 p_485->g_213 p_485->g_226 p_485->g_228 p_485->g_229 p_485->g_235 p_485->g_236 p_485->g_242 p_485->g_270 p_485->g_294 p_485->g_214 p_485->g_211 p_485->g_337 p_485->g_379 p_485->g_316 p_485->g_434 p_485->g_429 p_485->g_470 p_485->g_473 p_485->g_474
 * writes: p_485->g_37 p_485->g_70 p_485->g_comm_values p_485->g_79 p_485->g_137 p_485->g_136 p_485->g_89 p_485->g_211 p_485->g_226 p_485->g_244 p_485->g_9 p_485->g_294 p_485->g_214 p_485->g_316 p_485->g_270 p_485->g_429 p_485->g_467 p_485->g_3
 */
int16_t  func_29(uint32_t  p_30, uint32_t * p_31, int64_t  p_32, struct S0 * p_485)
{ /* block id: 8 */
    int32_t *l_34 = &p_485->g_3[0][0][1];
    int32_t **l_33 = &l_34;
    int32_t *l_36 = &p_485->g_3[2][0][3];
    int32_t **l_35[8][7][4];
    int i, j, k;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
                l_35[i][j][k] = &l_36;
        }
    }
    p_485->g_37 = ((*l_33) = (void*)0);
    (*l_33) = (void*)0;
    l_35[4][4][3] = func_38(func_40(p_32, p_485->g_3[1][0][5], (!func_44(p_485->g_9, (safe_mod_func_uint8_t_u_u(p_485->g_5, 0x12L)), (((p_485->l_comm_values[(safe_mod_func_uint32_t_u_u(p_485->tid, 12))] != p_485->g_28.s1) | (safe_rshift_func_uint8_t_u_u(func_53(p_32, func_59(func_61(p_31, p_30, p_485->g_3[1][0][5], p_30, p_30, p_485), p_485), p_485->g_28.s9, p_485->g_213, p_485->g_158.x, p_485), p_485->g_3[3][0][4]))) != p_30), &l_34, p_485)), p_485), p_485);
    return p_32;
}


/* ------------------------------------------ */
/* 
 * reads : p_485->g_79 p_485->g_3 p_485->g_37 p_485->g_470 p_485->g_158 p_485->g_213 p_485->g_473 p_485->g_474
 * writes: p_485->g_79 p_485->g_9 p_485->g_467 p_485->g_3 p_485->g_37 p_485->g_214
 */
int32_t ** func_38(int32_t ** p_39, struct S0 * p_485)
{ /* block id: 199 */
    uint32_t l_464[5] = {0x9752282EL,0x9752282EL,0x9752282EL,0x9752282EL,0x9752282EL};
    int32_t l_468 = (-5L);
    VECTOR(uint32_t, 4) l_475 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x6E61A8A0L), 0x6E61A8A0L);
    VECTOR(uint32_t, 16) l_476 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967289UL), 4294967289UL), 4294967289UL, 0UL, 4294967289UL, (VECTOR(uint32_t, 2))(0UL, 4294967289UL), (VECTOR(uint32_t, 2))(0UL, 4294967289UL), 0UL, 4294967289UL, 0UL, 4294967289UL);
    int32_t l_479 = 1L;
    int32_t l_480 = 0x0F0D2B9DL;
    int i;
    for (p_485->g_79 = 0; (p_485->g_79 <= 47); p_485->g_79 = safe_add_func_int32_t_s_s(p_485->g_79, 6))
    { /* block id: 202 */
        VECTOR(int32_t, 2) l_465 = (VECTOR(int32_t, 2))(0x0FC95097L, 0x7479B521L);
        uint8_t *l_466 = &p_485->g_9;
        int32_t *l_469 = &p_485->g_3[1][0][5];
        VECTOR(uint32_t, 2) l_472 = (VECTOR(uint32_t, 2))(0x76070B1BL, 4294967290UL);
        VECTOR(uint32_t, 2) l_477 = (VECTOR(uint32_t, 2))(0x8414C053L, 0x102A218BL);
        uint32_t *l_478 = (void*)0;
        int i;
        (*l_469) ^= (((safe_div_func_uint16_t_u_u(l_464[0], (-6L))) == (((((((*l_466) = (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_465.yyxy)).wzyzwzyz)).s3 | (0UL != 1UL))) | (l_464[0] , 0x7EL)) , l_466) == (p_485->g_467 = (void*)0)) > ((-1L) || l_464[0])) != l_464[2])) != l_468);
        (*p_39) = (*p_39);
        l_480 = (((void*)0 != p_485->g_470) ^ ((l_479 = ((*l_469) = ((VECTOR(uint32_t, 16))(0UL, 0x3165D0F0L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 8))(((*p_485->g_213) = (((&p_485->g_5 != &p_485->g_5) == (!l_464[3])) | p_485->g_158.w)), 0x2A4DDFE5L, 0UL, 0x47C7C3BBL, ((VECTOR(uint32_t, 2))(0x1D7168AAL, 0xE64BB152L)), 0x96829F85L, 1UL)).odd, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_472.yyyy)).wzzyzxzzyzwywzxy)).sc812))))), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(p_485->g_473.s64)))), ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 4))(p_485->g_474.s2306)).even, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 2))(0xA17043C5L, 0UL)), ((VECTOR(uint32_t, 8))(l_475.wywwwwyx)).s15)))))), 8UL, 0x82C186CBL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 2))(l_476.sc4)).yyxx))).even)))), ((VECTOR(uint32_t, 16))(l_477.xxxxyyxyxyyyyxxy)).se0))), 0xD8C09BBAL, 4294967288UL)))))).sa)) || ((*l_469) > l_475.z)));
    }
    (*p_39) = &l_480;
    return &p_485->g_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_485->g_9 p_485->g_comm_values
 * writes: p_485->g_9
 */
int32_t ** func_40(int32_t  p_41, uint32_t  p_42, int32_t  p_43, struct S0 * p_485)
{ /* block id: 191 */
    int32_t *l_457 = (void*)0;
    int32_t l_458[5][6][8] = {{{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L}},{{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L}},{{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L}},{{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L}},{{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L},{0x62C7F46DL,0x7E488B10L,0x14093FA9L,0x5163BCD9L,2L,0x40FEF1A9L,7L,1L}}};
    int32_t **l_459 = &p_485->g_37;
    int i, j, k;
    for (p_485->g_9 = 17; (p_485->g_9 <= 33); p_485->g_9 = safe_add_func_int64_t_s_s(p_485->g_9, 8))
    { /* block id: 194 */
        int32_t *l_456 = (void*)0;
        l_458[2][2][7] = ((safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(FAKE_DIVERGE(p_485->global_1_offset, get_global_id(1), 10), GROUP_DIVERGE(2, 1))), (!(safe_lshift_func_uint8_t_u_s((l_456 != (l_457 = (void*)0)), 3))))) > p_485->g_comm_values[p_485->tid]);
    }
    return l_459;
}


/* ------------------------------------------ */
/* 
 * reads : p_485->g_3 p_485->g_9 p_485->g_226 p_485->g_228 p_485->g_229 p_485->g_235 p_485->g_236 p_485->g_242 p_485->g_270 p_485->g_294 p_485->g_213 p_485->g_214 p_485->g_211 p_485->g_28 p_485->g_137 p_485->g_70 p_485->g_136 p_485->g_337 p_485->g_79 p_485->g_379 p_485->g_comm_values p_485->g_316 p_485->g_89 p_485->g_158 p_485->g_434 p_485->g_37 p_485->g_5 p_485->l_comm_values p_485->g_186 p_485->g_204 p_485->g_429
 * writes: p_485->g_226 p_485->g_244 p_485->g_9 p_485->g_294 p_485->g_214 p_485->g_316 p_485->g_136 p_485->g_37 p_485->g_270 p_485->g_429 p_485->g_70 p_485->g_comm_values p_485->g_79 p_485->g_137 p_485->g_89 p_485->g_211
 */
int32_t  func_44(int64_t  p_45, int32_t  p_46, uint32_t  p_47, int32_t ** p_48, struct S0 * p_485)
{ /* block id: 92 */
    int16_t *l_218[6][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_231 = 0x2626DBABL;
    VECTOR(uint32_t, 4) l_232 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL);
    VECTOR(uint64_t, 8) l_237 = (VECTOR(uint64_t, 8))(0x94C3BD628E3145CBL, (VECTOR(uint64_t, 4))(0x94C3BD628E3145CBL, (VECTOR(uint64_t, 2))(0x94C3BD628E3145CBL, 4UL), 4UL), 4UL, 0x94C3BD628E3145CBL, 4UL);
    uint64_t *l_238 = (void*)0;
    int32_t *l_246 = (void*)0;
    int32_t *l_247 = (void*)0;
    int32_t *l_248 = (void*)0;
    int32_t *l_249 = &l_231;
    int32_t *l_250 = &l_231;
    int32_t *l_251 = (void*)0;
    int32_t *l_252 = (void*)0;
    int32_t *l_253 = &l_231;
    int32_t l_254 = 0x06748D05L;
    int32_t *l_255 = (void*)0;
    int32_t *l_256 = (void*)0;
    int32_t *l_257 = (void*)0;
    int32_t *l_258 = (void*)0;
    int32_t *l_259 = &l_231;
    int32_t *l_260[9];
    uint16_t l_261 = 65535UL;
    VECTOR(int8_t, 4) l_268 = (VECTOR(int8_t, 4))(0x14L, (VECTOR(int8_t, 2))(0x14L, 0x72L), 0x72L);
    VECTOR(int8_t, 8) l_269 = (VECTOR(int8_t, 8))(0x55L, (VECTOR(int8_t, 4))(0x55L, (VECTOR(int8_t, 2))(0x55L, 0x03L), 0x03L), 0x03L, 0x55L, 0x03L);
    VECTOR(int8_t, 8) l_290 = (VECTOR(int8_t, 8))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, (-1L)), (-1L)), (-1L), 6L, (-1L));
    uint8_t *l_291 = &p_485->g_9;
    VECTOR(uint64_t, 2) l_295 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xC8B719433418E9AFL);
    uint8_t *l_307 = (void*)0;
    uint8_t *l_308[8][2][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int16_t l_309 = 0L;
    int8_t *l_310 = (void*)0;
    int8_t *l_311 = (void*)0;
    int8_t *l_312 = (void*)0;
    int8_t *l_313 = (void*)0;
    int8_t *l_314 = (void*)0;
    int8_t *l_315[8][7][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    int64_t l_317[2];
    int64_t l_334 = (-6L);
    uint32_t l_335[6] = {0x822A5E9BL,0x822A5E9BL,0x822A5E9BL,0x822A5E9BL,0x822A5E9BL,0x822A5E9BL};
    VECTOR(uint64_t, 4) l_411 = (VECTOR(uint64_t, 4))(0x857C1E255D05E43CL, (VECTOR(uint64_t, 2))(0x857C1E255D05E43CL, 0x0C92ECC818A4E67DL), 0x0C92ECC818A4E67DL);
    int32_t l_443 = 1L;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_260[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_317[i] = (-3L);
    if ((safe_rshift_func_uint16_t_u_s(((void*)0 == l_218[5][3]), 5)))
    { /* block id: 93 */
        VECTOR(int8_t, 8) l_223 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 8L), 8L), 8L, 0L, 8L);
        VECTOR(int8_t, 16) l_224 = (VECTOR(int8_t, 16))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, 7L), 7L), 7L, 0x64L, 7L, (VECTOR(int8_t, 2))(0x64L, 7L), (VECTOR(int8_t, 2))(0x64L, 7L), 0x64L, 7L, 0x64L, 7L);
        VECTOR(int8_t, 4) l_225 = (VECTOR(int8_t, 4))(0x00L, (VECTOR(int8_t, 2))(0x00L, 0L), 0L);
        int32_t ****l_227 = &p_485->g_226;
        int i;
        l_231 &= (!(0UL & (safe_div_func_int8_t_s_s(p_485->g_3[0][0][3], (safe_mul_func_int8_t_s_s(((0xACL | (~((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x17L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_223.s41551610)).s60)), 0x3FL, (-1L), 0x1AL, 0L, 0x16L, 4L)), ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x51L, (-1L))).xyxxxxxyxyyxxyyy)).sfb0a, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(l_224.se0)).yxyx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_225.yyyzzwxy)).lo)), (-9L), 0L, p_485->g_9, 0x69L, 0L, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))((((*l_227) = p_485->g_226) == ((GROUP_DIVERGE(1, 1) , ((void*)0 != p_485->g_228)) , p_485->g_229)), (-1L), ((VECTOR(int8_t, 4))((-1L))), 9L, (-9L))).s66, ((VECTOR(int8_t, 2))(0x0EL))))).even, (-1L), p_46, ((VECTOR(int8_t, 2))(0x2BL)), 0x1EL, 0x56L)).sdb8b)))))).hi, ((VECTOR(int8_t, 2))(0x30L)), ((VECTOR(int8_t, 2))(4L))))), (-1L), ((VECTOR(int8_t, 4))(0x5BL)))).s6, ((VECTOR(int8_t, 4))((-2L))), 0x7DL, (-8L), ((VECTOR(int8_t, 2))(8L)), 0x75L, ((VECTOR(int8_t, 4))(0x29L)), 1L, 0x48L)).sb)) == p_485->g_3[0][0][4]), p_46))))));
    }
    else
    { /* block id: 96 */
        uint64_t **l_239 = (void*)0;
        uint64_t **l_240[10][6][4] = {{{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238}},{{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238}},{{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238}},{{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238}},{{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238}},{{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238}},{{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238}},{{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238}},{{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238}},{{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0,&l_238}}};
        int32_t l_241 = 5L;
        int32_t *l_243 = &p_485->g_244;
        uint32_t l_245 = 0xC0DA838EL;
        int i, j, k;
        l_246 = ((((VECTOR(uint32_t, 4))(l_232.ywwy)).w , ((safe_div_func_int8_t_s_s(((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 16))(p_485->g_235.s371569283143ddfe)), ((VECTOR(uint16_t, 16))(p_485->g_236.sd6179ae9cc7936f8)), ((VECTOR(uint16_t, 4))((((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 2))(l_237.s74)), ((VECTOR(uint64_t, 8))((((l_238 = l_238) == ((l_241 || ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(p_485->g_242.s6bc0fe9d)), 0xC154CD35E4459345L, 18446744073709551606UL, ((VECTOR(uint64_t, 2))(4UL, 18446744073709551606UL)), 0x2871C56A95073DC1L, ((VECTOR(uint64_t, 2))(18446744073709551611UL, 7UL)), 3UL)).s4) , &p_485->g_79)) , (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(0x7C3EL, 0xE674L)), (uint16_t)p_45))).xxxy)).x & 1UL)), 0xBBA16F17C7B480B5L, (p_46 , ((-2L) < ((p_45 , (((((*l_243) = 4L) , (void*)0) != (void*)0) >= p_46)) == l_241))), 18446744073709551615UL, l_231, 0x1706491E01E2FD99L, 0xB7AA1AE933EC5F40L, 18446744073709551615UL)).s77))).hi , l_245), 0xA582L, 0x2AAAL, 0x858BL)).xyyyyxzxwzzzwyzy))).lo)).s4 && 2UL) < (-6L)), (-4L))) , 0x02F5D9F5L)) , (void*)0);
    }
    ++l_261;
    if ((safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_268.wzzxwzyw)))).s76, ((VECTOR(int8_t, 16))((-3L), (-10L), ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(l_269.s6351544517177607)).hi, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 2))(p_485->g_270.xz)).xxxxxxyx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(1L, (0x7664853EBDB8DE8FL == (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0xADBBC01CL, 4294967293UL)).yxyyyxyxxyxyyxyy)).s0 , p_47), 12)) < 0x8FL), 13))), (-1L), (-1L))).xxwywywx))))), ((VECTOR(int8_t, 2))(0x4CL, 6L)).xyxyyyxy))), (-1L), ((VECTOR(int8_t, 2))((-8L), 7L)), 0x6EL, 0L, 1L)).sc0))).odd, p_46)) & (0x931BB254L <= (p_45 > ((safe_rshift_func_uint16_t_u_s(GROUP_DIVERGE(2, 1), ((p_485->g_316 = (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((safe_add_func_uint8_t_u_u((((*p_485->g_213) = ((safe_add_func_int32_t_s_s(0x01D45485L, (safe_sub_func_uint8_t_u_u((p_485->g_294.s6 = ((((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(l_290.s36530630)).s2, ((*l_291)++))) >= ((VECTOR(uint8_t, 4))(p_485->g_294.s5627)).z) < ((VECTOR(uint64_t, 2))(l_295.yx)).lo) , ((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((*p_485->g_213) && p_45), 4294967286UL)), (*l_250))) || 0x4D3CE2FFL) & (*l_259)), 0x3FA9L)), 65527UL)))), 0x49L)) , 0x4FL))), p_485->g_235.s2)))) != l_309)) & p_46), 0L)))), p_485->g_211)), 251UL))) | l_317[0]))) & p_46)))), p_485->g_28.sc)))
    { /* block id: 106 */
        int16_t l_318 = 7L;
        int32_t l_333 = 0x6CB71BEDL;
        int32_t l_336 = 0x337BF107L;
        (*l_250) = l_318;
        p_485->g_136.s5 &= ((l_336 &= (GROUP_DIVERGE(2, 1) , (safe_sub_func_uint16_t_u_u(((((VECTOR(int64_t, 2))(0x5E2A29A3E9E912E2L, 0x43314C88515E6A3BL)).hi && ((((((void*)0 == &p_485->g_230) , (((safe_mod_func_int64_t_s_s(((((safe_div_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((((p_46 , 0x0CC5L) && ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_485->g_3[1][0][5], 0xDC1CL, 0UL, 65527UL)).xyywyyzw)).s7) > ((*l_249) &= 0x1ECF2833L)), (0x4433ED1DL ^ (safe_lshift_func_int8_t_s_u((l_333 = p_485->g_236.s7), 4))))) == p_485->g_211), p_485->g_137.s6)) && p_47), l_334)) ^ (*p_485->g_213)) > p_485->g_70.y) , 0x4DA46E2B63FD903DL), 6L)) | l_318) & 0L)) == (-1L)) && l_333) ^ p_485->g_235.sc)) || 0x29L), l_335[2])))) & p_46);
        (*l_249) |= p_485->g_337;
        if ((atomic_inc(&p_485->g_atomic_input[37 * get_linear_group_id() + 7]) == 9))
        { /* block id: 114 */
            uint32_t l_338 = 0x0F9A3BEBL;
            int64_t l_339 = 0x1766D96599E091EBL;
            uint64_t l_346 = 1UL;
            l_339 ^= l_338;
            for (l_338 = (-27); (l_338 >= 27); l_338 = safe_add_func_uint16_t_u_u(l_338, 3))
            { /* block id: 118 */
                int8_t l_342 = 0x64L;
                uint32_t l_343[2][5] = {{0x742D97CEL,0x8067BE08L,0x742D97CEL,0x742D97CEL,0x8067BE08L},{0x742D97CEL,0x8067BE08L,0x742D97CEL,0x742D97CEL,0x8067BE08L}};
                int i, j;
                ++l_343[1][0];
            }
            l_346 &= ((VECTOR(int32_t, 2))(7L, 0x72DF971FL)).odd;
            for (l_346 = 0; (l_346 >= 14); l_346 = safe_add_func_uint64_t_u_u(l_346, 5))
            { /* block id: 124 */
                int32_t l_349[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_349[i] = 0L;
                for (l_349[0] = 10; (l_349[0] == (-28)); l_349[0] = safe_sub_func_uint16_t_u_u(l_349[0], 7))
                { /* block id: 127 */
                    uint64_t l_352 = 0xB8C4EB826DE9DDC7L;
                    uint32_t l_353 = 0x1B31FA73L;
                    uint32_t l_354 = 0x37D2C511L;
                    int32_t *l_355 = (void*)0;
                    int32_t l_357 = 0x2A573B12L;
                    int32_t *l_356 = &l_357;
                    l_354 |= (l_353 &= l_352);
                    l_356 = l_355;
                }
                for (l_349[0] = 28; (l_349[0] <= (-24)); l_349[0] = safe_sub_func_int32_t_s_s(l_349[0], 7))
                { /* block id: 134 */
                    uint32_t l_360 = 0x9773ACBEL;
                    int32_t l_361 = (-1L);
                    int32_t l_363[7][1];
                    int32_t *l_362 = &l_363[6][0];
                    int32_t *l_364 = (void*)0;
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_363[i][j] = 1L;
                    }
                    l_361 = l_360;
                    l_364 = l_362;
                    for (l_363[4][0] = 15; (l_363[4][0] == (-16)); l_363[4][0] = safe_sub_func_int8_t_s_s(l_363[4][0], 5))
                    { /* block id: 139 */
                        uint64_t l_367 = 18446744073709551607UL;
                        uint64_t *l_369 = &l_367;
                        uint64_t **l_368 = &l_369;
                        uint64_t **l_370 = &l_369;
                        int32_t l_372 = 0x3193A14BL;
                        int32_t *l_371 = &l_372;
                        uint32_t l_373 = 4294967292UL;
                        VECTOR(int64_t, 8) l_374 = (VECTOR(int64_t, 8))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 1L), 1L), 1L, (-2L), 1L);
                        int i;
                        l_367 = 0x05BF8901L;
                        l_370 = l_368;
                        l_362 = l_371;
                        (*l_362) |= (l_373 , l_374.s2);
                    }
                }
            }
            unsigned int result = 0;
            result += l_338;
            result += l_339;
            result += l_346;
            atomic_add(&p_485->g_special_values[37 * get_linear_group_id() + 7], result);
        }
        else
        { /* block id: 147 */
            (1 + 1);
        }
    }
    else
    { /* block id: 150 */
        uint16_t *l_382[1][7];
        uint16_t **l_381 = &l_382[0][6];
        int32_t l_391 = 0x101FCE30L;
        int32_t l_392 = 0x485FBB34L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_382[i][j] = (void*)0;
        }
        p_485->g_136.s7 ^= (safe_sub_func_uint32_t_u_u(p_46, (8UL ^ (((safe_mul_func_uint16_t_u_u((p_485->g_79 && ((p_485->g_379 != ((*l_381) = (void*)0)) , (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((*p_485->g_213)--) && ((safe_mul_func_uint8_t_u_u((p_485->g_294.s0 , (l_391 = p_485->g_242.s6)), GROUP_DIVERGE(0, 1))) < (l_382[0][6] == ((((~0x6CEEA973L) < (*l_250)) < p_485->g_comm_values[p_485->tid]) , p_485->g_379)))), 0x3D34L)) | 0x3DBDFC09L), p_45)))), l_392)) == l_392) && p_47))));
        for (p_46 = 0; (p_46 > (-28)); p_46 = safe_sub_func_int8_t_s_s(p_46, 2))
        { /* block id: 157 */
            int32_t **l_395[4][8] = {{&l_260[0],&l_260[1],&l_260[0],&l_260[0],&l_260[1],&l_260[0],&l_260[0],&l_260[1]},{&l_260[0],&l_260[1],&l_260[0],&l_260[0],&l_260[1],&l_260[0],&l_260[0],&l_260[1]},{&l_260[0],&l_260[1],&l_260[0],&l_260[0],&l_260[1],&l_260[0],&l_260[0],&l_260[1]},{&l_260[0],&l_260[1],&l_260[0],&l_260[0],&l_260[1],&l_260[0],&l_260[0],&l_260[1]}};
            int i, j;
            p_485->g_37 = ((*p_48) = (*p_48));
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_485->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 12)), permutations[(safe_mod_func_uint32_t_u_u(p_45, 10))][(safe_mod_func_uint32_t_u_u(p_485->tid, 12))]));
        return p_47;
    }
    for (p_46 = 0; (p_46 <= 19); p_46 = safe_add_func_int64_t_s_s(p_46, 3))
    { /* block id: 168 */
        VECTOR(int32_t, 16) l_398 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L, (VECTOR(int32_t, 2))((-4L), 0L), (VECTOR(int32_t, 2))((-4L), 0L), (-4L), 0L, (-4L), 0L);
        VECTOR(int8_t, 4) l_420 = (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, (-2L)), (-2L));
        int64_t *l_430 = &l_334;
        VECTOR(uint32_t, 4) l_433 = (VECTOR(uint32_t, 4))(0xA052F839L, (VECTOR(uint32_t, 2))(0xA052F839L, 0x2BEEC092L), 0x2BEEC092L);
        uint32_t **l_444 = (void*)0;
        uint32_t *l_446 = &p_485->g_5;
        uint32_t **l_445 = &l_446;
        int32_t l_447 = 0L;
        int i;
        (*l_259) = ((VECTOR(int32_t, 2))(l_398.s0a)).lo;
        for (p_485->g_316 = 2; (p_485->g_316 >= 51); p_485->g_316++)
        { /* block id: 172 */
            VECTOR(int16_t, 8) l_401 = (VECTOR(int16_t, 8))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), (-5L)), (-5L)), (-5L), (-5L), (-5L));
            int64_t *l_410 = &l_317[0];
            int32_t l_412 = 9L;
            uint64_t l_413 = 0x8325ED279CE8B7ACL;
            int32_t l_416[7][7] = {{(-6L),1L,0x6BEEC44BL,(-1L),0x6BEEC44BL,1L,(-6L)},{(-6L),1L,0x6BEEC44BL,(-1L),0x6BEEC44BL,1L,(-6L)},{(-6L),1L,0x6BEEC44BL,(-1L),0x6BEEC44BL,1L,(-6L)},{(-6L),1L,0x6BEEC44BL,(-1L),0x6BEEC44BL,1L,(-6L)},{(-6L),1L,0x6BEEC44BL,(-1L),0x6BEEC44BL,1L,(-6L)},{(-6L),1L,0x6BEEC44BL,(-1L),0x6BEEC44BL,1L,(-6L)},{(-6L),1L,0x6BEEC44BL,(-1L),0x6BEEC44BL,1L,(-6L)}};
            uint8_t l_417 = 0xE7L;
            int i, j;
            (*l_249) = (((VECTOR(int16_t, 8))(l_401.s36012712)).s7 , (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(p_45, (((*l_410) = (*l_249)) && ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_411.wwxxyxzwxywzwwyx)).even)).s7))), (*p_485->g_213))), 3)), 2)));
            if (l_398.sc)
                break;
            --l_413;
            l_417++;
        }
        l_398.s6 = (((VECTOR(int8_t, 8))(l_420.zzwyyxzz)).s5 ^ (FAKE_DIVERGE(p_485->global_2_offset, get_global_id(2), 10) , (safe_mod_func_uint8_t_u_u((((l_238 == &p_485->g_79) >= ((safe_rshift_func_int16_t_s_u((0x22L < ((*l_291)++)), ((((p_45 || ((*l_430) = (safe_sub_func_uint16_t_u_u(((((void*)0 != &p_485->g_230) != (((((void*)0 == (*p_48)) < ((p_485->g_429[4][0][0] = (p_485->g_270.w ^= p_46)) , l_398.s4)) , p_485->g_89.sa) || p_485->g_158.x)) >= 4UL), 65534UL)))) && 0UL) || p_46) < 3UL))) > p_485->g_242.s2)) , 0x2AL), p_485->g_294.s4))));
        atomic_max(&p_485->l_atomic_reduction[0], (safe_sub_func_uint16_t_u_u(0xD210L, (~((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(l_433.wxyxzywy)).odd, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_485->g_434.xxyyyyyx)).s4, (*p_485->g_213), 4294967295UL, 4294967295UL)).xwzwzxzw)).even))))).yzzyyywz)).s3 , 1UL) , (l_447 = (((l_420.x >= (((safe_rshift_func_int16_t_s_s((((l_398.sd = l_433.w) <= (safe_mul_func_int16_t_s_s(p_485->g_28.s2, (&l_261 == ((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((((*l_430) &= (((*l_445) = func_59(func_61(&p_485->g_5, (*l_249), (*l_250), p_485->g_3[3][0][1], l_443, p_485), p_485)) == &p_485->g_5)) >= p_45), p_45)) , p_485->g_214), p_485->g_158.w)) , p_485->g_379))))) < 0x2737AC33L), l_433.y)) , p_45) ^ FAKE_DIVERGE(p_485->local_0_offset, get_local_id(0), 10))) <= 1L) == p_485->g_429[4][0][0])))))));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_485->v_collective += p_485->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    return p_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_485->g_3
 * writes:
 */
uint8_t  func_53(uint64_t  p_54, uint32_t * p_55, int32_t  p_56, uint32_t * p_57, uint32_t  p_58, struct S0 * p_485)
{ /* block id: 89 */
    int32_t *l_215 = (void*)0;
    l_215 = &p_485->g_3[1][0][5];
    return p_485->g_3[3][0][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_485->g_79 p_485->g_37 p_485->g_5 p_485->g_9 p_485->g_28 p_485->g_70 p_485->l_comm_values p_485->g_comm_values p_485->g_89 p_485->g_3 p_485->g_137 p_485->g_136 p_485->g_186 p_485->g_158 p_485->g_204
 * writes: p_485->g_79 p_485->g_37 p_485->g_70 p_485->g_137 p_485->g_136 p_485->g_89 p_485->g_211
 */
uint32_t * func_59(int32_t ** p_60, struct S0 * p_485)
{ /* block id: 19 */
    int32_t *l_86 = (void*)0;
    int32_t *l_87 = (void*)0;
    int32_t *l_88[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_90 = 0x1FA81E3AL;
    int8_t l_91[3];
    int64_t l_92 = (-1L);
    uint64_t l_93[3][8][5] = {{{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL}},{{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL}},{{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL},{0x064898B4B1B4561CL,0xA3EB5BA548985155L,1UL,0xA3EB5BA548985155L,0x064898B4B1B4561CL}}};
    uint64_t *l_128 = &l_93[1][7][2];
    int64_t l_197 = 1L;
    VECTOR(uint16_t, 8) l_205 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
    uint32_t *l_212[4] = {&p_485->g_211,&p_485->g_211,&p_485->g_211,&p_485->g_211};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_91[i] = (-5L);
    l_93[2][6][4]++;
    for (p_485->g_79 = 0; (p_485->g_79 <= 14); ++p_485->g_79)
    { /* block id: 23 */
        uint32_t *l_98 = &p_485->g_5;
        uint32_t **l_99 = &l_98;
        uint32_t *l_101 = (void*)0;
        uint32_t **l_100 = &l_101;
        int32_t l_133[1][1];
        uint64_t *l_167 = &l_93[2][7][0];
        uint16_t l_187 = 0x9732L;
        uint64_t *l_190 = &p_485->g_79;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_133[i][j] = 0x75DFC347L;
        }
        if ((((*l_99) = l_98) != ((*l_100) = &p_485->g_5)))
        { /* block id: 26 */
            int32_t l_106 = 0x7F152E6DL;
            uint64_t *l_129[3][7][9] = {{{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]}},{{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]}},{{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]},{(void*)0,&l_93[2][6][4],&l_93[0][6][2],&l_93[2][6][4],&p_485->g_79,&p_485->g_79,&l_93[2][3][0],&l_93[0][6][2],&l_93[2][5][0]}}};
            VECTOR(int32_t, 2) l_138 = (VECTOR(int32_t, 2))((-7L), 0x1B74578EL);
            VECTOR(uint64_t, 16) l_148 = (VECTOR(uint64_t, 16))(0x8F597F90B8BAF473L, (VECTOR(uint64_t, 4))(0x8F597F90B8BAF473L, (VECTOR(uint64_t, 2))(0x8F597F90B8BAF473L, 0xE5F672533188E24EL), 0xE5F672533188E24EL), 0xE5F672533188E24EL, 0x8F597F90B8BAF473L, 0xE5F672533188E24EL, (VECTOR(uint64_t, 2))(0x8F597F90B8BAF473L, 0xE5F672533188E24EL), (VECTOR(uint64_t, 2))(0x8F597F90B8BAF473L, 0xE5F672533188E24EL), 0x8F597F90B8BAF473L, 0xE5F672533188E24EL, 0x8F597F90B8BAF473L, 0xE5F672533188E24EL);
            VECTOR(uint64_t, 2) l_159 = (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xECB8A3075B59948BL);
            int32_t **l_175[8][1];
            VECTOR(uint8_t, 2) l_180 = (VECTOR(uint8_t, 2))(255UL, 255UL);
            int32_t **l_185[10][5] = {{(void*)0,(void*)0,&p_485->g_37,&l_88[2],&l_88[8]},{(void*)0,(void*)0,&p_485->g_37,&l_88[2],&l_88[8]},{(void*)0,(void*)0,&p_485->g_37,&l_88[2],&l_88[8]},{(void*)0,(void*)0,&p_485->g_37,&l_88[2],&l_88[8]},{(void*)0,(void*)0,&p_485->g_37,&l_88[2],&l_88[8]},{(void*)0,(void*)0,&p_485->g_37,&l_88[2],&l_88[8]},{(void*)0,(void*)0,&p_485->g_37,&l_88[2],&l_88[8]},{(void*)0,(void*)0,&p_485->g_37,&l_88[2],&l_88[8]},{(void*)0,(void*)0,&p_485->g_37,&l_88[2],&l_88[8]},{(void*)0,(void*)0,&p_485->g_37,&l_88[2],&l_88[8]}};
            int32_t ***l_184 = &l_185[2][0];
            int i, j, k;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 1; j++)
                    l_175[i][j] = (void*)0;
            }
            for (l_92 = (-10); (l_92 != 27); l_92 = safe_add_func_uint16_t_u_u(l_92, 4))
            { /* block id: 29 */
                int32_t *l_104 = &p_485->g_3[0][0][2];
                VECTOR(int32_t, 4) l_105 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x004560B1L), 0x004560B1L);
                int i;
                (*p_60) = l_104;
                l_106 = ((VECTOR(int32_t, 8))(l_105.xzzzzxwy)).s2;
            }
            for (l_90 = 0; (l_90 != (-9)); l_90 = safe_sub_func_int32_t_s_s(l_90, 8))
            { /* block id: 35 */
                (*p_60) = (*p_60);
            }
            for (l_90 = 0; (l_90 >= (-18)); l_90 = safe_sub_func_uint32_t_u_u(l_90, 7))
            { /* block id: 40 */
                uint64_t **l_125 = (void*)0;
                uint64_t *l_127 = &l_93[2][6][4];
                uint64_t **l_126[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t **l_132 = &l_86;
                int32_t l_135 = (-4L);
                VECTOR(int32_t, 8) l_139 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x492445BCL), 0x492445BCL), 0x492445BCL, (-1L), 0x492445BCL);
                int16_t *l_176 = (void*)0;
                int16_t *l_177[5][3][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int32_t ****l_181 = (void*)0;
                int32_t ***l_183 = &l_132;
                int32_t ****l_182[6][10][4] = {{{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183}},{{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183}},{{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183}},{{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183}},{{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183}},{{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183},{(void*)0,&l_183,&l_183,&l_183}}};
                uint16_t *l_188 = &l_187;
                int i, j, k;
                if (((safe_rshift_func_uint8_t_u_s(((((safe_mod_func_int8_t_s_s(((+(((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((~(safe_sub_func_int64_t_s_s(((p_485->g_70.y = p_485->g_5) , ((safe_rshift_func_uint16_t_u_s((p_485->g_37 == (void*)0), 4)) | (((3L <= ((((((~(((1UL >= l_106) | (safe_mod_func_int16_t_s_s(((l_128 = &p_485->g_79) != l_129[0][3][5]), (safe_rshift_func_uint16_t_u_u(p_485->g_9, p_485->g_28.s0))))) , 0UL)) , 9UL) & l_106) < 5UL) , l_132) == (void*)0)) || p_485->g_70.w) , 0x77L))), 3L))) > p_485->l_comm_values[(safe_mod_func_uint32_t_u_u(p_485->tid, 12))]) , p_485->g_comm_values[p_485->tid]), l_106)), 0xDEL)) , l_106) != l_133[0][0])) && FAKE_DIVERGE(p_485->local_0_offset, get_local_id(0), 10)), FAKE_DIVERGE(p_485->local_0_offset, get_local_id(0), 10))) ^ 0x90540248992C6C6DL) == p_485->g_89.s9) && GROUP_DIVERGE(1, 1)), p_485->g_3[0][0][4])) > l_106))
                { /* block id: 43 */
                    uint16_t l_134 = 65533UL;
                    uint32_t **l_142 = &l_101;
                    int32_t l_143 = 0x58A86DAAL;
                    int32_t l_144 = 0L;
                    uint32_t l_145 = 0x2FE954CAL;
                    l_135 = l_134;
                    p_485->g_70.z &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_485->g_136.s77151066)).s23)), 0x0FB87828L, 1L)))), ((VECTOR(int32_t, 8))(p_485->g_137.sb5eeb1fc)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_138.xyxyxxxyxyxxyxxy)).s8d6b))))), ((VECTOR(int32_t, 2))(l_139.s35)), 0x6F4F3722L, 1L)).s0;
                    for (l_134 = 0; (l_134 > 51); l_134++)
                    { /* block id: 48 */
                        p_485->g_136.s2 = (p_485->g_137.sb &= ((void*)0 != l_142));
                        ++l_145;
                    }
                    p_485->g_137.s6 = (l_135 = p_485->g_5);
                }
                else
                { /* block id: 55 */
                    uint64_t *l_153 = (void*)0;
                    VECTOR(uint64_t, 2) l_154 = (VECTOR(uint64_t, 2))(1UL, 3UL);
                    int64_t *l_155 = &l_92;
                    VECTOR(int16_t, 16) l_166 = (VECTOR(int16_t, 16))(0x3B10L, (VECTOR(int16_t, 4))(0x3B10L, (VECTOR(int16_t, 2))(0x3B10L, 0L), 0L), 0L, 0x3B10L, 0L, (VECTOR(int16_t, 2))(0x3B10L, 0L), (VECTOR(int16_t, 2))(0x3B10L, 0L), 0x3B10L, 0L, 0x3B10L, 0L);
                    int i;
                    l_139.s1 = (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_148.s2038)).yzzyzyywyzyxxwxw)).sb || (safe_mod_func_uint8_t_u_u(249UL, ((safe_div_func_uint8_t_u_u((p_485->g_136.s5 < ((l_153 = l_129[2][6][8]) != (((((p_485->g_9 , ((VECTOR(uint64_t, 2))(l_154.xy)).odd) == ((*l_155) = 0x05D11EB618804051L)) == ((((safe_rshift_func_int16_t_s_s((((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(p_485->g_158.xyxwyyyy)))).s06, ((VECTOR(uint64_t, 16))(l_159.xyyyyxxyyxyyxyxy)).s94))).even , (safe_div_func_uint32_t_u_u(((((safe_add_func_uint8_t_u_u(p_485->g_28.s2, (safe_sub_func_uint8_t_u_u(255UL, GROUP_DIVERGE(0, 1))))) || 0UL) & GROUP_DIVERGE(0, 1)) | ((p_485->g_5 < 0x7EL) > l_154.x)), l_133[0][0]))), 12)) <= 0xF6L) || l_138.x) == p_485->l_comm_values[(safe_mod_func_uint32_t_u_u(p_485->tid, 12))])) , l_166.s6) , l_167))), 0x8DL)) | p_485->g_136.s7))));
                    (*l_132) = &p_485->g_3[0][0][1];
                }
                for (l_135 = (-7); (l_135 > 1); ++l_135)
                { /* block id: 63 */
                    int16_t l_172 = (-1L);
                    p_485->g_137.s3 |= (safe_mod_func_int32_t_s_s(p_485->g_9, l_172));
                }
                l_138.y = 0x31E767B2L;
                p_485->g_137.s2 = ((safe_add_func_uint8_t_u_u(8UL, (((l_138.y != ((*l_188) = (((+(p_485->g_89.s4 = (p_60 == l_175[2][0]))) != (safe_add_func_uint64_t_u_u((((VECTOR(uint8_t, 2))(0xEAL, 0xC0L)).odd > (((((((VECTOR(uint8_t, 2))(l_180.yx)).hi <= FAKE_DIVERGE(p_485->global_0_offset, get_global_id(0), 10)) , &l_175[2][0]) == (l_184 = &p_60)) | (((p_485->g_186 != (p_485->l_comm_values[(safe_mod_func_uint32_t_u_u(p_485->tid, 12))] , l_127)) || l_133[0][0]) != p_485->g_comm_values[p_485->tid])) , l_133[0][0])), l_187))) | p_485->g_28.se))) || p_485->g_136.s2) , l_133[0][0]))) == p_485->g_137.s1);
            }
        }
        else
        { /* block id: 72 */
            uint32_t l_189 = 8UL;
            l_133[0][0] |= l_189;
        }
        atomic_max(&p_485->g_atomic_reduction[get_linear_group_id()], ((void*)0 == l_190));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_485->v_collective += p_485->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        for (l_187 = 29; (l_187 < 32); ++l_187)
        { /* block id: 78 */
            uint32_t **l_193 = &l_101;
            int32_t l_194 = (-7L);
            int16_t *l_195 = (void*)0;
            int16_t *l_196 = (void*)0;
            uint32_t *l_210 = &p_485->g_211;
            (*p_60) = (void*)0;
            atomic_or(&p_485->g_atomic_reduction[get_linear_group_id()], ((&l_101 == (l_193 = l_193)) >= (l_194 , ((l_197 |= l_187) >= (((VECTOR(int64_t, 8))(((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((l_133[0][0] , p_485->g_158.x), (((VECTOR(uint16_t, 2))(p_485->g_204.s46)).lo && (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_205.s40773205)).s1701564741075132)).s1 <= ((safe_add_func_uint64_t_u_u((((p_485->g_137.se && (safe_add_func_int32_t_s_s((p_485->g_70.x |= p_485->g_79), ((*l_210) = p_485->g_9)))) < GROUP_DIVERGE(0, 1)) > 0xC09B54BBL), p_485->g_204.s5)) || FAKE_DIVERGE(p_485->global_0_offset, get_global_id(0), 10)))))), l_133[0][0])) , 0x7541C69828AE5848L), ((VECTOR(int64_t, 4))(0x0D98AD0A1748FBCAL)), p_485->g_136.s2, (-1L), 0x5E1DF802B541B65DL)).s1 >= 0L)))));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_485->v_collective += p_485->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        if (l_133[0][0])
            break;
    }
    return l_212[0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_485->g_70 p_485->g_comm_values p_485->g_79
 */
int32_t ** func_61(uint32_t * p_62, uint64_t  p_63, int64_t  p_64, int8_t  p_65, uint32_t  p_66, struct S0 * p_485)
{ /* block id: 12 */
    int32_t **l_68 = (void*)0;
    int32_t ***l_67 = &l_68;
    int32_t *l_69 = (void*)0;
    int32_t *l_71 = (void*)0;
    VECTOR(int64_t, 16) l_72 = (VECTOR(int64_t, 16))(0x27032CD4B48EDA29L, (VECTOR(int64_t, 4))(0x27032CD4B48EDA29L, (VECTOR(int64_t, 2))(0x27032CD4B48EDA29L, 0L), 0L), 0L, 0x27032CD4B48EDA29L, 0L, (VECTOR(int64_t, 2))(0x27032CD4B48EDA29L, 0L), (VECTOR(int64_t, 2))(0x27032CD4B48EDA29L, 0L), 0x27032CD4B48EDA29L, 0L, 0x27032CD4B48EDA29L, 0L);
    int64_t *l_73 = (void*)0;
    int64_t *l_74 = (void*)0;
    int64_t *l_75 = (void*)0;
    int64_t *l_76 = (void*)0;
    int64_t *l_77 = (void*)0;
    uint64_t *l_78 = &p_485->g_79;
    int32_t *l_80 = (void*)0;
    int32_t *l_81 = (void*)0;
    int32_t *l_82 = (void*)0;
    int32_t *l_83 = (void*)0;
    int32_t *l_84 = (void*)0;
    int32_t l_85[10] = {1L,0x18CFE46DL,0x0476F2A9L,0x18CFE46DL,1L,1L,0x18CFE46DL,0x0476F2A9L,0x18CFE46DL,1L};
    int i;
    (*l_67) = (void*)0;
    p_485->g_70.w = (-1L);
    l_85[8] = (3L & ((*l_78) = ((p_485->g_comm_values[p_485->tid] = ((VECTOR(int64_t, 2))(l_72.sbb)).hi) && p_65)));
    return &p_485->g_37;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[12];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 12; i++)
            l_comm_values[i] = 1;
    struct S0 c_486;
    struct S0* p_485 = &c_486;
    struct S0 c_487 = {
        {{{0x6DA5043CL,7L,0x2D2086BDL,0L,7L,0L}},{{0x6DA5043CL,7L,0x2D2086BDL,0L,7L,0L}},{{0x6DA5043CL,7L,0x2D2086BDL,0L,7L,0L}},{{0x6DA5043CL,7L,0x2D2086BDL,0L,7L,0L}}}, // p_485->g_3
        0UL, // p_485->g_5
        0x4FL, // p_485->g_9
        0x5604491DL, // p_485->g_17
        4294967295UL, // p_485->g_27
        &p_485->g_27, // p_485->g_26
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x1AA4L), 0x1AA4L), 0x1AA4L, (-1L), 0x1AA4L, (VECTOR(int16_t, 2))((-1L), 0x1AA4L), (VECTOR(int16_t, 2))((-1L), 0x1AA4L), (-1L), 0x1AA4L, (-1L), 0x1AA4L), // p_485->g_28
        &p_485->g_3[0][0][0], // p_485->g_37
        (VECTOR(int32_t, 4))(0x51A38AD7L, (VECTOR(int32_t, 2))(0x51A38AD7L, 0L), 0L), // p_485->g_70
        0x30C926164A3C8053L, // p_485->g_79
        (VECTOR(int16_t, 16))(0x7AAFL, (VECTOR(int16_t, 4))(0x7AAFL, (VECTOR(int16_t, 2))(0x7AAFL, 0x7B9EL), 0x7B9EL), 0x7B9EL, 0x7AAFL, 0x7B9EL, (VECTOR(int16_t, 2))(0x7AAFL, 0x7B9EL), (VECTOR(int16_t, 2))(0x7AAFL, 0x7B9EL), 0x7AAFL, 0x7B9EL, 0x7AAFL, 0x7B9EL), // p_485->g_89
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L), // p_485->g_136
        (VECTOR(int32_t, 16))(0x7CD8053AL, (VECTOR(int32_t, 4))(0x7CD8053AL, (VECTOR(int32_t, 2))(0x7CD8053AL, (-10L)), (-10L)), (-10L), 0x7CD8053AL, (-10L), (VECTOR(int32_t, 2))(0x7CD8053AL, (-10L)), (VECTOR(int32_t, 2))(0x7CD8053AL, (-10L)), 0x7CD8053AL, (-10L), 0x7CD8053AL, (-10L)), // p_485->g_137
        (VECTOR(uint64_t, 4))(0x0A0EFF4E26B6B827L, (VECTOR(uint64_t, 2))(0x0A0EFF4E26B6B827L, 1UL), 1UL), // p_485->g_158
        (void*)0, // p_485->g_186
        (VECTOR(uint16_t, 8))(0x2EB4L, (VECTOR(uint16_t, 4))(0x2EB4L, (VECTOR(uint16_t, 2))(0x2EB4L, 65532UL), 65532UL), 65532UL, 0x2EB4L, 65532UL), // p_485->g_204
        0x9C1D78DCL, // p_485->g_211
        0x54B015BFL, // p_485->g_214
        &p_485->g_214, // p_485->g_213
        (void*)0, // p_485->g_226
        (void*)0, // p_485->g_228
        &p_485->g_37, // p_485->g_230
        &p_485->g_230, // p_485->g_229
        (VECTOR(uint16_t, 16))(0x5DADL, (VECTOR(uint16_t, 4))(0x5DADL, (VECTOR(uint16_t, 2))(0x5DADL, 0x5AD1L), 0x5AD1L), 0x5AD1L, 0x5DADL, 0x5AD1L, (VECTOR(uint16_t, 2))(0x5DADL, 0x5AD1L), (VECTOR(uint16_t, 2))(0x5DADL, 0x5AD1L), 0x5DADL, 0x5AD1L, 0x5DADL, 0x5AD1L), // p_485->g_235
        (VECTOR(uint16_t, 16))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 65535UL), 65535UL), 65535UL, 5UL, 65535UL, (VECTOR(uint16_t, 2))(5UL, 65535UL), (VECTOR(uint16_t, 2))(5UL, 65535UL), 5UL, 65535UL, 5UL, 65535UL), // p_485->g_236
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint64_t, 2))(0UL, 1UL), (VECTOR(uint64_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL), // p_485->g_242
        0x2B10585EL, // p_485->g_244
        (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, (-6L)), (-6L)), // p_485->g_270
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL), // p_485->g_294
        0x6653C8BCL, // p_485->g_316
        0L, // p_485->g_337
        8UL, // p_485->g_380
        &p_485->g_380, // p_485->g_379
        {{{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL}},{{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL}},{{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL}},{{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL}},{{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL}},{{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL}},{{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL}},{{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL},{0x492F7D0FL}}}, // p_485->g_429
        (VECTOR(uint32_t, 2))(0x93647C40L, 4294967293UL), // p_485->g_434
        (void*)0, // p_485->g_467
        (void*)0, // p_485->g_471
        &p_485->g_471, // p_485->g_470
        (VECTOR(uint32_t, 8))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0x9AA07ADAL), 0x9AA07ADAL), 0x9AA07ADAL, 4294967289UL, 0x9AA07ADAL), // p_485->g_473
        (VECTOR(uint32_t, 8))(0xD99BB7E1L, (VECTOR(uint32_t, 4))(0xD99BB7E1L, (VECTOR(uint32_t, 2))(0xD99BB7E1L, 0x53EA986BL), 0x53EA986BL), 0x53EA986BL, 0xD99BB7E1L, 0x53EA986BL), // p_485->g_474
        0, // p_485->v_collective
        sequence_input[get_global_id(0)], // p_485->global_0_offset
        sequence_input[get_global_id(1)], // p_485->global_1_offset
        sequence_input[get_global_id(2)], // p_485->global_2_offset
        sequence_input[get_local_id(0)], // p_485->local_0_offset
        sequence_input[get_local_id(1)], // p_485->local_1_offset
        sequence_input[get_local_id(2)], // p_485->local_2_offset
        sequence_input[get_group_id(0)], // p_485->group_0_offset
        sequence_input[get_group_id(1)], // p_485->group_1_offset
        sequence_input[get_group_id(2)], // p_485->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 12)), permutations[0][get_linear_local_id()])), // p_485->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_486 = c_487;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_485);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_485->g_3[i][j][k], "p_485->g_3[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_485->g_5, "p_485->g_5", print_hash_value);
    transparent_crc(p_485->g_9, "p_485->g_9", print_hash_value);
    transparent_crc(p_485->g_17, "p_485->g_17", print_hash_value);
    transparent_crc(p_485->g_27, "p_485->g_27", print_hash_value);
    transparent_crc(p_485->g_28.s0, "p_485->g_28.s0", print_hash_value);
    transparent_crc(p_485->g_28.s1, "p_485->g_28.s1", print_hash_value);
    transparent_crc(p_485->g_28.s2, "p_485->g_28.s2", print_hash_value);
    transparent_crc(p_485->g_28.s3, "p_485->g_28.s3", print_hash_value);
    transparent_crc(p_485->g_28.s4, "p_485->g_28.s4", print_hash_value);
    transparent_crc(p_485->g_28.s5, "p_485->g_28.s5", print_hash_value);
    transparent_crc(p_485->g_28.s6, "p_485->g_28.s6", print_hash_value);
    transparent_crc(p_485->g_28.s7, "p_485->g_28.s7", print_hash_value);
    transparent_crc(p_485->g_28.s8, "p_485->g_28.s8", print_hash_value);
    transparent_crc(p_485->g_28.s9, "p_485->g_28.s9", print_hash_value);
    transparent_crc(p_485->g_28.sa, "p_485->g_28.sa", print_hash_value);
    transparent_crc(p_485->g_28.sb, "p_485->g_28.sb", print_hash_value);
    transparent_crc(p_485->g_28.sc, "p_485->g_28.sc", print_hash_value);
    transparent_crc(p_485->g_28.sd, "p_485->g_28.sd", print_hash_value);
    transparent_crc(p_485->g_28.se, "p_485->g_28.se", print_hash_value);
    transparent_crc(p_485->g_28.sf, "p_485->g_28.sf", print_hash_value);
    transparent_crc(p_485->g_70.x, "p_485->g_70.x", print_hash_value);
    transparent_crc(p_485->g_70.y, "p_485->g_70.y", print_hash_value);
    transparent_crc(p_485->g_70.z, "p_485->g_70.z", print_hash_value);
    transparent_crc(p_485->g_70.w, "p_485->g_70.w", print_hash_value);
    transparent_crc(p_485->g_79, "p_485->g_79", print_hash_value);
    transparent_crc(p_485->g_89.s0, "p_485->g_89.s0", print_hash_value);
    transparent_crc(p_485->g_89.s1, "p_485->g_89.s1", print_hash_value);
    transparent_crc(p_485->g_89.s2, "p_485->g_89.s2", print_hash_value);
    transparent_crc(p_485->g_89.s3, "p_485->g_89.s3", print_hash_value);
    transparent_crc(p_485->g_89.s4, "p_485->g_89.s4", print_hash_value);
    transparent_crc(p_485->g_89.s5, "p_485->g_89.s5", print_hash_value);
    transparent_crc(p_485->g_89.s6, "p_485->g_89.s6", print_hash_value);
    transparent_crc(p_485->g_89.s7, "p_485->g_89.s7", print_hash_value);
    transparent_crc(p_485->g_89.s8, "p_485->g_89.s8", print_hash_value);
    transparent_crc(p_485->g_89.s9, "p_485->g_89.s9", print_hash_value);
    transparent_crc(p_485->g_89.sa, "p_485->g_89.sa", print_hash_value);
    transparent_crc(p_485->g_89.sb, "p_485->g_89.sb", print_hash_value);
    transparent_crc(p_485->g_89.sc, "p_485->g_89.sc", print_hash_value);
    transparent_crc(p_485->g_89.sd, "p_485->g_89.sd", print_hash_value);
    transparent_crc(p_485->g_89.se, "p_485->g_89.se", print_hash_value);
    transparent_crc(p_485->g_89.sf, "p_485->g_89.sf", print_hash_value);
    transparent_crc(p_485->g_136.s0, "p_485->g_136.s0", print_hash_value);
    transparent_crc(p_485->g_136.s1, "p_485->g_136.s1", print_hash_value);
    transparent_crc(p_485->g_136.s2, "p_485->g_136.s2", print_hash_value);
    transparent_crc(p_485->g_136.s3, "p_485->g_136.s3", print_hash_value);
    transparent_crc(p_485->g_136.s4, "p_485->g_136.s4", print_hash_value);
    transparent_crc(p_485->g_136.s5, "p_485->g_136.s5", print_hash_value);
    transparent_crc(p_485->g_136.s6, "p_485->g_136.s6", print_hash_value);
    transparent_crc(p_485->g_136.s7, "p_485->g_136.s7", print_hash_value);
    transparent_crc(p_485->g_137.s0, "p_485->g_137.s0", print_hash_value);
    transparent_crc(p_485->g_137.s1, "p_485->g_137.s1", print_hash_value);
    transparent_crc(p_485->g_137.s2, "p_485->g_137.s2", print_hash_value);
    transparent_crc(p_485->g_137.s3, "p_485->g_137.s3", print_hash_value);
    transparent_crc(p_485->g_137.s4, "p_485->g_137.s4", print_hash_value);
    transparent_crc(p_485->g_137.s5, "p_485->g_137.s5", print_hash_value);
    transparent_crc(p_485->g_137.s6, "p_485->g_137.s6", print_hash_value);
    transparent_crc(p_485->g_137.s7, "p_485->g_137.s7", print_hash_value);
    transparent_crc(p_485->g_137.s8, "p_485->g_137.s8", print_hash_value);
    transparent_crc(p_485->g_137.s9, "p_485->g_137.s9", print_hash_value);
    transparent_crc(p_485->g_137.sa, "p_485->g_137.sa", print_hash_value);
    transparent_crc(p_485->g_137.sb, "p_485->g_137.sb", print_hash_value);
    transparent_crc(p_485->g_137.sc, "p_485->g_137.sc", print_hash_value);
    transparent_crc(p_485->g_137.sd, "p_485->g_137.sd", print_hash_value);
    transparent_crc(p_485->g_137.se, "p_485->g_137.se", print_hash_value);
    transparent_crc(p_485->g_137.sf, "p_485->g_137.sf", print_hash_value);
    transparent_crc(p_485->g_158.x, "p_485->g_158.x", print_hash_value);
    transparent_crc(p_485->g_158.y, "p_485->g_158.y", print_hash_value);
    transparent_crc(p_485->g_158.z, "p_485->g_158.z", print_hash_value);
    transparent_crc(p_485->g_158.w, "p_485->g_158.w", print_hash_value);
    transparent_crc(p_485->g_204.s0, "p_485->g_204.s0", print_hash_value);
    transparent_crc(p_485->g_204.s1, "p_485->g_204.s1", print_hash_value);
    transparent_crc(p_485->g_204.s2, "p_485->g_204.s2", print_hash_value);
    transparent_crc(p_485->g_204.s3, "p_485->g_204.s3", print_hash_value);
    transparent_crc(p_485->g_204.s4, "p_485->g_204.s4", print_hash_value);
    transparent_crc(p_485->g_204.s5, "p_485->g_204.s5", print_hash_value);
    transparent_crc(p_485->g_204.s6, "p_485->g_204.s6", print_hash_value);
    transparent_crc(p_485->g_204.s7, "p_485->g_204.s7", print_hash_value);
    transparent_crc(p_485->g_211, "p_485->g_211", print_hash_value);
    transparent_crc(p_485->g_214, "p_485->g_214", print_hash_value);
    transparent_crc(p_485->g_235.s0, "p_485->g_235.s0", print_hash_value);
    transparent_crc(p_485->g_235.s1, "p_485->g_235.s1", print_hash_value);
    transparent_crc(p_485->g_235.s2, "p_485->g_235.s2", print_hash_value);
    transparent_crc(p_485->g_235.s3, "p_485->g_235.s3", print_hash_value);
    transparent_crc(p_485->g_235.s4, "p_485->g_235.s4", print_hash_value);
    transparent_crc(p_485->g_235.s5, "p_485->g_235.s5", print_hash_value);
    transparent_crc(p_485->g_235.s6, "p_485->g_235.s6", print_hash_value);
    transparent_crc(p_485->g_235.s7, "p_485->g_235.s7", print_hash_value);
    transparent_crc(p_485->g_235.s8, "p_485->g_235.s8", print_hash_value);
    transparent_crc(p_485->g_235.s9, "p_485->g_235.s9", print_hash_value);
    transparent_crc(p_485->g_235.sa, "p_485->g_235.sa", print_hash_value);
    transparent_crc(p_485->g_235.sb, "p_485->g_235.sb", print_hash_value);
    transparent_crc(p_485->g_235.sc, "p_485->g_235.sc", print_hash_value);
    transparent_crc(p_485->g_235.sd, "p_485->g_235.sd", print_hash_value);
    transparent_crc(p_485->g_235.se, "p_485->g_235.se", print_hash_value);
    transparent_crc(p_485->g_235.sf, "p_485->g_235.sf", print_hash_value);
    transparent_crc(p_485->g_236.s0, "p_485->g_236.s0", print_hash_value);
    transparent_crc(p_485->g_236.s1, "p_485->g_236.s1", print_hash_value);
    transparent_crc(p_485->g_236.s2, "p_485->g_236.s2", print_hash_value);
    transparent_crc(p_485->g_236.s3, "p_485->g_236.s3", print_hash_value);
    transparent_crc(p_485->g_236.s4, "p_485->g_236.s4", print_hash_value);
    transparent_crc(p_485->g_236.s5, "p_485->g_236.s5", print_hash_value);
    transparent_crc(p_485->g_236.s6, "p_485->g_236.s6", print_hash_value);
    transparent_crc(p_485->g_236.s7, "p_485->g_236.s7", print_hash_value);
    transparent_crc(p_485->g_236.s8, "p_485->g_236.s8", print_hash_value);
    transparent_crc(p_485->g_236.s9, "p_485->g_236.s9", print_hash_value);
    transparent_crc(p_485->g_236.sa, "p_485->g_236.sa", print_hash_value);
    transparent_crc(p_485->g_236.sb, "p_485->g_236.sb", print_hash_value);
    transparent_crc(p_485->g_236.sc, "p_485->g_236.sc", print_hash_value);
    transparent_crc(p_485->g_236.sd, "p_485->g_236.sd", print_hash_value);
    transparent_crc(p_485->g_236.se, "p_485->g_236.se", print_hash_value);
    transparent_crc(p_485->g_236.sf, "p_485->g_236.sf", print_hash_value);
    transparent_crc(p_485->g_242.s0, "p_485->g_242.s0", print_hash_value);
    transparent_crc(p_485->g_242.s1, "p_485->g_242.s1", print_hash_value);
    transparent_crc(p_485->g_242.s2, "p_485->g_242.s2", print_hash_value);
    transparent_crc(p_485->g_242.s3, "p_485->g_242.s3", print_hash_value);
    transparent_crc(p_485->g_242.s4, "p_485->g_242.s4", print_hash_value);
    transparent_crc(p_485->g_242.s5, "p_485->g_242.s5", print_hash_value);
    transparent_crc(p_485->g_242.s6, "p_485->g_242.s6", print_hash_value);
    transparent_crc(p_485->g_242.s7, "p_485->g_242.s7", print_hash_value);
    transparent_crc(p_485->g_242.s8, "p_485->g_242.s8", print_hash_value);
    transparent_crc(p_485->g_242.s9, "p_485->g_242.s9", print_hash_value);
    transparent_crc(p_485->g_242.sa, "p_485->g_242.sa", print_hash_value);
    transparent_crc(p_485->g_242.sb, "p_485->g_242.sb", print_hash_value);
    transparent_crc(p_485->g_242.sc, "p_485->g_242.sc", print_hash_value);
    transparent_crc(p_485->g_242.sd, "p_485->g_242.sd", print_hash_value);
    transparent_crc(p_485->g_242.se, "p_485->g_242.se", print_hash_value);
    transparent_crc(p_485->g_242.sf, "p_485->g_242.sf", print_hash_value);
    transparent_crc(p_485->g_244, "p_485->g_244", print_hash_value);
    transparent_crc(p_485->g_270.x, "p_485->g_270.x", print_hash_value);
    transparent_crc(p_485->g_270.y, "p_485->g_270.y", print_hash_value);
    transparent_crc(p_485->g_270.z, "p_485->g_270.z", print_hash_value);
    transparent_crc(p_485->g_270.w, "p_485->g_270.w", print_hash_value);
    transparent_crc(p_485->g_294.s0, "p_485->g_294.s0", print_hash_value);
    transparent_crc(p_485->g_294.s1, "p_485->g_294.s1", print_hash_value);
    transparent_crc(p_485->g_294.s2, "p_485->g_294.s2", print_hash_value);
    transparent_crc(p_485->g_294.s3, "p_485->g_294.s3", print_hash_value);
    transparent_crc(p_485->g_294.s4, "p_485->g_294.s4", print_hash_value);
    transparent_crc(p_485->g_294.s5, "p_485->g_294.s5", print_hash_value);
    transparent_crc(p_485->g_294.s6, "p_485->g_294.s6", print_hash_value);
    transparent_crc(p_485->g_294.s7, "p_485->g_294.s7", print_hash_value);
    transparent_crc(p_485->g_316, "p_485->g_316", print_hash_value);
    transparent_crc(p_485->g_337, "p_485->g_337", print_hash_value);
    transparent_crc(p_485->g_380, "p_485->g_380", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_485->g_429[i][j][k], "p_485->g_429[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_485->g_434.x, "p_485->g_434.x", print_hash_value);
    transparent_crc(p_485->g_434.y, "p_485->g_434.y", print_hash_value);
    transparent_crc(p_485->g_473.s0, "p_485->g_473.s0", print_hash_value);
    transparent_crc(p_485->g_473.s1, "p_485->g_473.s1", print_hash_value);
    transparent_crc(p_485->g_473.s2, "p_485->g_473.s2", print_hash_value);
    transparent_crc(p_485->g_473.s3, "p_485->g_473.s3", print_hash_value);
    transparent_crc(p_485->g_473.s4, "p_485->g_473.s4", print_hash_value);
    transparent_crc(p_485->g_473.s5, "p_485->g_473.s5", print_hash_value);
    transparent_crc(p_485->g_473.s6, "p_485->g_473.s6", print_hash_value);
    transparent_crc(p_485->g_473.s7, "p_485->g_473.s7", print_hash_value);
    transparent_crc(p_485->g_474.s0, "p_485->g_474.s0", print_hash_value);
    transparent_crc(p_485->g_474.s1, "p_485->g_474.s1", print_hash_value);
    transparent_crc(p_485->g_474.s2, "p_485->g_474.s2", print_hash_value);
    transparent_crc(p_485->g_474.s3, "p_485->g_474.s3", print_hash_value);
    transparent_crc(p_485->g_474.s4, "p_485->g_474.s4", print_hash_value);
    transparent_crc(p_485->g_474.s5, "p_485->g_474.s5", print_hash_value);
    transparent_crc(p_485->g_474.s6, "p_485->g_474.s6", print_hash_value);
    transparent_crc(p_485->g_474.s7, "p_485->g_474.s7", print_hash_value);
    transparent_crc(p_485->v_collective, "p_485->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 37; i++)
            transparent_crc(p_485->g_special_values[i + 37 * get_linear_group_id()], "p_485->g_special_values[i + 37 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_485->l_comm_values[get_linear_local_id()], "p_485->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_485->g_comm_values[get_linear_group_id() * 12 + get_linear_local_id()], "p_485->g_comm_values[get_linear_group_id() * 12 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
