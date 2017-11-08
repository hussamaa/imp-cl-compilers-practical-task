// -g 31,25,7 -l 1,25,7
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


// Seed: 4261701320

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   int32_t  f1;
};

struct S1 {
    int32_t g_8;
    union U0 g_15;
    int8_t g_26;
    uint16_t g_64;
    int16_t g_73[3];
    uint64_t g_74;
    uint8_t g_109;
    int8_t ** volatile g_112;
    uint16_t g_117;
    int32_t g_121;
    int32_t * volatile g_126[3];
    int32_t * volatile g_127;
    int64_t g_129;
    int64_t g_143;
    int64_t *g_146;
    uint32_t g_162;
    int32_t g_176;
    uint32_t g_177;
    uint16_t **g_187;
    uint16_t *g_192;
    uint16_t **g_191[4];
    volatile int32_t g_214[3][4][5];
    int32_t *g_254;
    int32_t ** volatile g_253;
    uint8_t g_268[5];
    uint32_t g_299;
    int32_t ** volatile g_335[9][1][1];
    int32_t ** volatile g_336;
    int8_t g_354;
    int16_t g_379;
    int32_t g_382;
    int32_t g_384;
    int8_t g_407;
    volatile uint16_t *g_413;
    volatile uint16_t * volatile * volatile g_412;
    volatile uint16_t * volatile * volatile *g_411[4];
    volatile uint16_t * volatile * volatile **g_410;
    uint16_t ***g_415[4][8][8];
    uint16_t ****g_414[9];
    volatile uint32_t * volatile * volatile g_418;
    int32_t ** volatile g_422[7][5];
    uint64_t g_515;
    volatile int64_t g_542[3];
    int32_t ** volatile g_587;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S1 * p_598);
int32_t * func_2(uint16_t  p_3, uint64_t  p_4, struct S1 * p_598);
uint16_t  func_5(int32_t * p_6, struct S1 * p_598);
union U0  func_13(uint32_t  p_14, struct S1 * p_598);
int32_t  func_16(uint32_t  p_17, struct S1 * p_598);
int32_t * func_27(int8_t * p_28, int8_t * p_29, int8_t * p_30, int32_t * p_31, uint32_t  p_32, struct S1 * p_598);
int8_t * func_33(int32_t * p_34, uint32_t  p_35, int64_t  p_36, struct S1 * p_598);
int32_t * func_37(int32_t * p_38, struct S1 * p_598);
int32_t * func_39(int8_t * p_40, int32_t  p_41, int8_t  p_42, struct S1 * p_598);
int8_t * func_43(int8_t * p_44, int64_t  p_45, union U0  p_46, struct S1 * p_598);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_598->g_8 p_598->g_121 p_598->g_542 p_598->g_146 p_598->g_143 p_598->g_73 p_598->g_192 p_598->g_64 p_598->g_176 p_598->g_384 p_598->g_15 p_598->g_354 p_598->g_74 p_598->g_299 p_598->g_254 p_598->g_253 p_598->g_15.f0 p_598->g_336 p_598->g_268 p_598->g_515
 * writes: p_598->g_8 p_598->g_121 p_598->g_26 p_598->g_73 p_598->g_176 p_598->g_384 p_598->g_64 p_598->g_143 p_598->g_268 p_598->g_354 p_598->g_74 p_598->g_15.f1 p_598->g_299 p_598->g_15.f0
 */
uint32_t  func_1(struct S1 * p_598)
{ /* block id: 4 */
    int32_t *l_7 = &p_598->g_8;
    int32_t l_548 = 0x0F91E9B2L;
    int32_t **l_588 = &l_7;
    int32_t *l_589 = &l_548;
    int32_t *l_590 = (void*)0;
    int32_t *l_591 = &p_598->g_8;
    int32_t *l_592 = &p_598->g_15.f0;
    int32_t *l_593[5];
    uint8_t l_594 = 7UL;
    int64_t l_597 = 0L;
    int i;
    for (i = 0; i < 5; i++)
        l_593[i] = &l_548;
    (*l_588) = func_2(((*l_7) = func_5(l_7, p_598)), l_548, p_598);
    --l_594;
    return l_597;
}


/* ------------------------------------------ */
/* 
 * reads : p_598->g_176 p_598->g_384 p_598->g_15 p_598->g_192 p_598->g_146 p_598->g_143 p_598->g_354 p_598->g_74 p_598->g_299 p_598->g_254 p_598->g_253 p_598->g_15.f0 p_598->g_336 p_598->g_268 p_598->g_515 p_598->g_73
 * writes: p_598->g_176 p_598->g_384 p_598->g_64 p_598->g_143 p_598->g_268 p_598->g_354 p_598->g_74 p_598->g_15.f1 p_598->g_299 p_598->g_15.f0
 */
int32_t * func_2(uint16_t  p_3, uint64_t  p_4, struct S1 * p_598)
{ /* block id: 244 */
    uint32_t l_557[7] = {1UL,0xEE1ACEA5L,1UL,1UL,0xEE1ACEA5L,1UL,1UL};
    int32_t *l_586 = &p_598->g_121;
    int i;
    for (p_598->g_176 = 0; (p_598->g_176 != (-7)); p_598->g_176 = safe_sub_func_uint64_t_u_u(p_598->g_176, 3))
    { /* block id: 247 */
        int8_t *l_553 = &p_598->g_354;
        int32_t l_564 = (-1L);
        int64_t l_577 = (-2L);
        int32_t l_583[5];
        int i;
        for (i = 0; i < 5; i++)
            l_583[i] = (-1L);
        for (p_598->g_384 = 0; (p_598->g_384 < (-18)); p_598->g_384 = safe_sub_func_int64_t_s_s(p_598->g_384, 6))
        { /* block id: 250 */
            union U0 l_556 = {0L};
            uint8_t *l_562[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t l_563 = 0UL;
            uint64_t *l_565 = &p_598->g_74;
            int32_t *l_566 = &l_556.f0;
            int64_t *l_582[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            l_566 = func_39(l_553, (((*l_565) |= (((((~(safe_lshift_func_uint16_t_u_s(((((*l_553) ^= (((l_556 = p_598->g_15) , (l_557[2] , (p_598->g_268[4] = (((((((((*p_598->g_146) |= (safe_mod_func_uint32_t_u_u((l_556.f0 >= (safe_rshift_func_int16_t_s_s(((~(l_557[2] >= p_4)) < (~(((&p_598->g_146 != (void*)0) , ((*p_598->g_192) = l_557[2])) , p_3))), p_3))), l_556.f0))) || l_556.f0) < l_556.f0) >= (-1L)) && l_556.f0) < p_3) & p_3) || l_556.f0)))) <= p_4)) , p_598->g_384) , l_563), 1))) & 65535UL) || l_563) != l_564) , p_4)) ^ 0x08C6C41D8366D133L), l_564, p_598);
            l_556.f0 = ((*p_598->g_254) = (((*l_566) && (safe_sub_func_int32_t_s_s((**p_598->g_336), ((l_564 ^ (((((((p_598->g_268[0]++) , (safe_rshift_func_int16_t_s_u((((safe_div_func_uint64_t_u_u((((p_4 , &l_566) == (((p_3 == ((l_583[1] &= (safe_mul_func_int8_t_s_s(p_598->g_15.f0, ((l_577 < ((safe_mod_func_int8_t_s_s(((safe_div_func_int64_t_s_s(p_4, (*p_598->g_146))) ^ (*l_566)), p_598->g_515)) < p_598->g_73[0])) >= 0x46EC1913L)))) | p_4)) != l_577) , (void*)0)) | p_4), (*p_598->g_146))) & p_3) < 0L), 15))) < p_598->g_74) ^ (*p_598->g_254)) != p_598->g_176) | (*p_598->g_254)) & 0x32L)) >= 0UL)))) ^ 0xE4L));
            (*p_598->g_254) = (safe_lshift_func_int16_t_s_s((l_577 < (*l_566)), p_598->g_299));
        }
        return l_586;
    }
    return (*p_598->g_253);
}


/* ------------------------------------------ */
/* 
 * reads : p_598->g_8 p_598->g_121 p_598->g_542 p_598->g_146 p_598->g_143 p_598->g_73 p_598->g_192 p_598->g_64
 * writes: p_598->g_8 p_598->g_121 p_598->g_26 p_598->g_73
 */
uint16_t  func_5(int32_t * p_6, struct S1 * p_598)
{ /* block id: 5 */
    uint8_t l_18 = 0x73L;
    int32_t l_71 = 0x0AC77ACAL;
    int8_t *l_76 = &p_598->g_26;
    int8_t **l_75[3];
    int32_t *l_466 = &l_71;
    int i;
    for (i = 0; i < 3; i++)
        l_75[i] = &l_76;
    for (p_598->g_8 = (-29); (p_598->g_8 >= (-2)); p_598->g_8 = safe_add_func_int32_t_s_s(p_598->g_8, 1))
    { /* block id: 8 */
        int64_t l_22 = (-8L);
        int8_t *l_25 = &p_598->g_26;
        int32_t l_446 = (-1L);
        uint64_t *l_514 = &p_598->g_515;
        int32_t l_516 = (-1L);
        int8_t l_517 = (-5L);
        uint16_t ****l_538 = (void*)0;
        (1 + 1);
    }
    for (p_598->g_121 = 2; (p_598->g_121 >= 0); p_598->g_121 -= 1)
    { /* block id: 237 */
        int16_t *l_547 = &p_598->g_73[1];
        int i;
        (*l_466) = (p_598->g_542[0] == ((*l_547) ^= (0x6F7F3574L ^ ((*l_466) > (safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s(((*l_76) = (*l_466)), 4)) , p_598->g_8), (*p_598->g_146)))))));
    }
    return (*p_598->g_192);
}


/* ------------------------------------------ */
/* 
 * reads : p_598->g_15
 * writes:
 */
union U0  func_13(uint32_t  p_14, struct S1 * p_598)
{ /* block id: 9 */
    return p_598->g_15;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_16(uint32_t  p_17, struct S1 * p_598)
{ /* block id: 11 */
    int64_t l_19 = 0x541145714FFD8143L;
    return l_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_598->g_253 p_598->g_254 p_598->g_336 p_598->g_176 p_598->g_15.f0 p_598->g_146 p_598->g_143 p_598->g_162 p_598->g_127 p_598->g_121
 * writes: p_598->g_254 p_598->g_162 p_598->g_73
 */
int32_t * func_27(int8_t * p_28, int8_t * p_29, int8_t * p_30, int32_t * p_31, uint32_t  p_32, struct S1 * p_598)
{ /* block id: 196 */
    int32_t *l_420 = &p_598->g_384;
    int32_t **l_421 = &l_420;
    int32_t **l_423[1][3][1];
    int8_t *l_424 = &p_598->g_26;
    uint32_t *l_433 = &p_598->g_162;
    int16_t *l_438 = &p_598->g_73[1];
    uint32_t l_439 = 0xA7CF2185L;
    int16_t l_440 = 0x415DL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_423[i][j][k] = &p_598->g_254;
        }
    }
    (*p_598->g_336) = ((*l_421) = (*p_598->g_253));
    p_31 = p_31;
    (*p_31) = ((safe_div_func_uint8_t_u_u((((((*l_438) = (p_598->g_176 , ((p_598->g_15.f0 && p_32) && ((*p_598->g_146) != (safe_mod_func_int8_t_s_s(0x7BL, (safe_add_func_int8_t_s_s(0L, (((*l_433) |= (safe_sub_func_uint16_t_u_u(0x9313L, p_32))) <= ((((safe_mul_func_uint8_t_u_u((+(safe_rshift_func_uint16_t_u_s((l_438 != l_438), 0))), p_32)) , (*p_598->g_127)) || l_439) | 0x12C75C99L)))))))))) >= l_440) , 1UL) == (*p_598->g_146)), p_598->g_121)) <= (*p_598->g_146));
    return (*p_598->g_336);
}


/* ------------------------------------------ */
/* 
 * reads : p_598->g_254 p_598->g_15.f0 p_598->g_336 p_598->g_176 p_598->g_109 p_598->g_121 p_598->g_73 p_598->g_146 p_598->g_143 p_598->g_192 p_598->g_64 p_598->g_382 p_598->g_384 p_598->g_127 p_598->g_268 p_598->g_354 p_598->g_26 p_598->g_407 p_598->g_410 p_598->g_414 p_598->g_418
 * writes: p_598->g_254 p_598->g_176 p_598->g_109 p_598->g_15.f0 p_598->g_121 p_598->g_26 p_598->g_354 p_598->g_379 p_598->g_382 p_598->g_384 p_598->g_73 p_598->g_407 p_598->g_418
 */
int8_t * func_33(int32_t * p_34, uint32_t  p_35, int64_t  p_36, struct S1 * p_598)
{ /* block id: 136 */
    uint32_t l_333 = 0x4B7888E8L;
    int32_t *l_334[4] = {&p_598->g_121,&p_598->g_121,&p_598->g_121,&p_598->g_121};
    int64_t l_342 = 3L;
    uint8_t l_364 = 248UL;
    int8_t *l_419 = &p_598->g_354;
    int i;
    l_333 = (*p_598->g_254);
    (*p_598->g_336) = l_334[3];
    for (p_598->g_176 = 0; (p_598->g_176 <= 0); p_598->g_176 += 1)
    { /* block id: 141 */
        int8_t *l_337 = &p_598->g_26;
        return l_337;
    }
    for (p_598->g_109 = 1; (p_598->g_109 < 42); p_598->g_109++)
    { /* block id: 146 */
        uint64_t l_346[3];
        int32_t *l_383[8][9][3] = {{{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8}},{{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8}},{{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8}},{{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8}},{{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8}},{{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8}},{{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8}},{{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8},{&p_598->g_121,(void*)0,&p_598->g_8}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_346[i] = 0UL;
        for (p_598->g_15.f0 = 2; (p_598->g_15.f0 >= 0); p_598->g_15.f0 -= 1)
        { /* block id: 149 */
            uint16_t ***l_345 = (void*)0;
            int32_t l_351 = 0x4CB37EDDL;
            int8_t *l_387 = &p_598->g_354;
            for (p_598->g_121 = 0; (p_598->g_121 <= 2); p_598->g_121 += 1)
            { /* block id: 152 */
                int8_t *l_352 = &p_598->g_26;
                int8_t *l_353 = &p_598->g_354;
                int32_t l_355[2][8] = {{3L,0x14E8A97BL,7L,0x14E8A97BL,3L,3L,0x14E8A97BL,7L},{3L,0x14E8A97BL,7L,0x14E8A97BL,3L,3L,0x14E8A97BL,7L}};
                int32_t l_392 = 0L;
                uint16_t ****l_417 = &p_598->g_415[2][4][3];
                int i, j;
                l_355[1][3] |= ((safe_mul_func_int16_t_s_s((p_598->g_73[p_598->g_15.f0] , p_36), (l_342 | (((safe_sub_func_int8_t_s_s(((*l_353) = (((l_345 == (void*)0) < l_346[1]) & (((~(safe_lshift_func_int8_t_s_u(((((((p_598->g_73[p_598->g_15.f0] > (((*l_352) = (safe_div_func_int32_t_s_s(((*p_34) == (l_351 == 0x2B45L)), p_598->g_73[p_598->g_15.f0]))) | l_351)) , l_352) != (void*)0) <= 0UL) & (*p_598->g_146)) & p_36), p_36))) , l_346[1]) | p_36))), p_35)) < l_346[1]) | p_35)))) <= 65535UL);
                for (p_36 = 0; (p_36 <= 2); p_36 += 1)
                { /* block id: 158 */
                    uint32_t l_376 = 0x217F3F56L;
                    if ((*p_34))
                        break;
                    if (((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((-1L), (safe_add_func_uint32_t_u_u(0x16F301F7L, p_35)))), (*p_598->g_192))) & p_36))
                    { /* block id: 160 */
                        uint32_t l_375[6][10][4] = {{{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL}},{{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL}},{{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL}},{{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL}},{{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL}},{{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL},{0x5DC86D78L,0x0B7AB3F3L,0x2325A27AL,1UL}}};
                        int16_t *l_377 = (void*)0;
                        int16_t *l_378 = &p_598->g_379;
                        int32_t *l_380 = (void*)0;
                        int32_t *l_381 = &p_598->g_382;
                        int32_t **l_385[2];
                        int8_t *l_386 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_385[i] = &l_334[3];
                        p_34 = (l_383[2][1][1] = (((*l_381) |= (safe_rshift_func_int8_t_s_u((((l_364 = 1L) && (+((safe_mul_func_uint8_t_u_u(p_598->g_73[1], 0UL)) & p_598->g_73[p_598->g_15.f0]))) | ((*l_378) = (((safe_add_func_int16_t_s_s(((0x979CL < 0xB184L) >= (safe_mul_func_uint8_t_u_u((l_355[0][3] ^ (safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u((((((((0x0F9CL > (0x55L && p_598->g_15.f0)) , &p_598->g_268[3]) != l_352) != 4294967295UL) || l_375[0][3][0]) != l_376) , p_598->g_73[1]), 0x297AA096L)) != (*p_598->g_146)), 2))), p_35))), p_36)) | 0L) && 0x50L))), p_35))) , (*p_598->g_336)));
                        return l_386;
                    }
                    else
                    { /* block id: 167 */
                        if ((*p_34))
                            break;
                        return l_387;
                    }
                }
                for (p_598->g_384 = (-13); (p_598->g_384 < 3); p_598->g_384 = safe_add_func_int8_t_s_s(p_598->g_384, 3))
                { /* block id: 174 */
                    uint8_t *l_394 = &p_598->g_109;
                    uint8_t **l_393 = &l_394;
                    int32_t l_401 = (-4L);
                    uint32_t *l_404 = (void*)0;
                    uint64_t *l_405 = &l_346[1];
                    int16_t *l_406 = &p_598->g_379;
                    p_598->g_407 |= ((safe_sub_func_int8_t_s_s((p_598->g_73[1] , (+(l_392 < (((&p_598->g_268[3] != ((*l_393) = l_387)) && (safe_add_func_int16_t_s_s((p_598->g_73[2] = ((*l_406) = ((((*l_405) = ((((l_351 = ((!(p_36 > (safe_lshift_func_uint16_t_u_s(65535UL, ((safe_mul_func_int8_t_s_s(((l_401 <= ((safe_div_func_uint16_t_u_u(p_35, (p_36 ^ p_35))) > (*p_598->g_127))) , l_401), l_401)) > p_598->g_268[3]))))) < p_598->g_354)) < l_401) > 0x22A5402AL) == p_598->g_176)) == p_36) != p_35))), 0L))) & p_598->g_26)))), p_598->g_268[3])) || l_351);
                    l_351 &= (-1L);
                }
                for (l_351 = (-3); (l_351 >= (-21)); l_351 = safe_sub_func_int16_t_s_s(l_351, 6))
                { /* block id: 185 */
                    uint16_t *****l_416 = (void*)0;
                    if ((*p_34))
                        break;
                    l_355[1][3] = (p_598->g_410 == (l_417 = p_598->g_414[3]));
                    p_598->g_418 = p_598->g_418;
                }
            }
        }
        return l_419;
    }
    return l_419;
}


/* ------------------------------------------ */
/* 
 * reads : p_598->g_64 p_598->g_268 p_598->g_117 p_598->g_214 p_598->g_8 p_598->g_127 p_598->g_121 p_598->g_15.f0 p_598->g_73 p_598->g_26 p_598->g_254
 * writes: p_598->g_64 p_598->g_268 p_598->g_74 p_598->g_109 p_598->g_15.f0 p_598->g_254
 */
int32_t * func_37(int32_t * p_38, struct S1 * p_598)
{ /* block id: 122 */
    uint16_t l_312[6][6] = {{0x2716L,0x2716L,0x2716L,0x2716L,0x2716L,0x2716L},{0x2716L,0x2716L,0x2716L,0x2716L,0x2716L,0x2716L},{0x2716L,0x2716L,0x2716L,0x2716L,0x2716L,0x2716L},{0x2716L,0x2716L,0x2716L,0x2716L,0x2716L,0x2716L},{0x2716L,0x2716L,0x2716L,0x2716L,0x2716L,0x2716L},{0x2716L,0x2716L,0x2716L,0x2716L,0x2716L,0x2716L}};
    int64_t *l_315 = (void*)0;
    int32_t l_317 = 1L;
    uint32_t *l_323 = (void*)0;
    uint16_t ***l_326 = &p_598->g_191[3];
    uint32_t l_331 = 4294967291UL;
    int32_t **l_332 = &p_598->g_254;
    int i, j;
    for (p_598->g_64 = 1; (p_598->g_64 <= 4); p_598->g_64 += 1)
    { /* block id: 125 */
        uint64_t *l_314 = &p_598->g_74;
        int32_t l_316 = 0x0878E658L;
        uint8_t *l_318 = &p_598->g_109;
        int i;
        (*p_38) &= ((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((*l_318) = (safe_sub_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u(p_598->g_268[p_598->g_64], 0x284DL)) , ((*l_314) = ((p_598->g_117 == (safe_mod_func_uint64_t_u_u(l_312[0][1], (safe_unary_minus_func_uint64_t_u(8UL))))) | (p_598->g_268[p_598->g_64] = p_598->g_214[2][3][1])))), (p_598->g_8 | (l_317 = (1UL < ((&p_598->g_143 == l_315) , l_316)))))), 7L))), p_598->g_117)), 6UL)) , (*p_598->g_127));
        return p_38;
    }
    (*p_598->g_254) = (safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((!(((p_598->g_121 && (((void*)0 != l_323) , (safe_mul_func_uint16_t_u_u(((void*)0 == l_326), (safe_div_func_int32_t_s_s(((safe_add_func_int8_t_s_s((l_331 && 0x74D1L), (((p_598->g_73[1] , 0xBF45L) || l_331) | p_598->g_26))) ^ 0x87L), 0x7A7FA219L)))))) && 0x124B31A8L) > l_331)), 0x785EL)) <= 255UL), l_317));
    (*l_332) = p_38;
    return p_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_598->g_15.f1 p_598->g_74 p_598->g_299 p_598->g_254 p_598->g_253
 * writes: p_598->g_15.f1 p_598->g_74 p_598->g_299 p_598->g_15.f0
 */
int32_t * func_39(int8_t * p_40, int32_t  p_41, int8_t  p_42, struct S1 * p_598)
{ /* block id: 24 */
    int32_t l_113 = 5L;
    int32_t l_160 = 0x75F8F1AFL;
    int16_t l_224 = 0x1C48L;
    int32_t l_271 = (-5L);
    int32_t l_272 = (-1L);
    int64_t l_275 = 1L;
    int32_t l_278[8];
    uint64_t *l_285[3][5][5] = {{{(void*)0,(void*)0,&p_598->g_74,&p_598->g_74,&p_598->g_74},{(void*)0,(void*)0,&p_598->g_74,&p_598->g_74,&p_598->g_74},{(void*)0,(void*)0,&p_598->g_74,&p_598->g_74,&p_598->g_74},{(void*)0,(void*)0,&p_598->g_74,&p_598->g_74,&p_598->g_74},{(void*)0,(void*)0,&p_598->g_74,&p_598->g_74,&p_598->g_74}},{{(void*)0,(void*)0,&p_598->g_74,&p_598->g_74,&p_598->g_74},{(void*)0,(void*)0,&p_598->g_74,&p_598->g_74,&p_598->g_74},{(void*)0,(void*)0,&p_598->g_74,&p_598->g_74,&p_598->g_74},{(void*)0,(void*)0,&p_598->g_74,&p_598->g_74,&p_598->g_74},{(void*)0,(void*)0,&p_598->g_74,&p_598->g_74,&p_598->g_74}},{{(void*)0,(void*)0,&p_598->g_74,&p_598->g_74,&p_598->g_74},{(void*)0,(void*)0,&p_598->g_74,&p_598->g_74,&p_598->g_74},{(void*)0,(void*)0,&p_598->g_74,&p_598->g_74,&p_598->g_74},{(void*)0,(void*)0,&p_598->g_74,&p_598->g_74,&p_598->g_74},{(void*)0,(void*)0,&p_598->g_74,&p_598->g_74,&p_598->g_74}}};
    int32_t l_290 = 0L;
    uint16_t *l_296 = (void*)0;
    int32_t **l_297[9][5] = {{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254},{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254},{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254},{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254},{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254},{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254},{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254},{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254},{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254}};
    uint32_t *l_298 = &p_598->g_299;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_278[i] = 1L;
    for (p_41 = 2; (p_41 >= 0); p_41 -= 1)
    { /* block id: 27 */
        uint32_t l_110 = 1UL;
        int32_t *l_120 = &p_598->g_121;
        int64_t *l_142 = &p_598->g_143;
        uint16_t *l_184 = &p_598->g_117;
        uint16_t **l_189 = (void*)0;
        uint16_t ***l_200 = &p_598->g_191[1];
        int32_t l_238[2][10][4] = {{{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)}},{{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)},{(-5L),0x37701A7DL,0x37701A7DL,(-5L)}}};
        uint8_t *l_247 = &p_598->g_109;
        union U0 l_266 = {0x6E2E2142L};
        int32_t l_270 = (-1L);
        int32_t l_274 = 0x02231ABCL;
        int32_t l_279 = (-6L);
        int i, j, k;
        for (p_598->g_15.f1 = 2; (p_598->g_15.f1 >= 0); p_598->g_15.f1 -= 1)
        { /* block id: 30 */
            int32_t l_107 = (-10L);
            uint8_t *l_108 = &p_598->g_109;
            uint16_t *l_111 = &p_598->g_64;
            uint16_t **l_114 = &l_111;
            uint16_t *l_116[7] = {&p_598->g_117,&p_598->g_117,&p_598->g_117,&p_598->g_117,&p_598->g_117,&p_598->g_117,&p_598->g_117};
            uint16_t **l_115 = &l_116[5];
            uint16_t *l_119 = &p_598->g_117;
            uint16_t **l_118 = &l_119;
            int64_t *l_144[9][1] = {{&p_598->g_143},{&p_598->g_143},{&p_598->g_143},{&p_598->g_143},{&p_598->g_143},{&p_598->g_143},{&p_598->g_143},{&p_598->g_143},{&p_598->g_143}};
            int32_t l_213 = 0L;
            int32_t l_273[4] = {(-1L),(-1L),(-1L),(-1L)};
            int32_t l_276 = 0x311FA8A9L;
            int32_t l_277[2][2][5] = {{{0L,0L,0x1535540FL,0L,0x4A2F955FL},{0L,0L,0x1535540FL,0L,0x4A2F955FL}},{{0L,0L,0x1535540FL,0L,0x4A2F955FL},{0L,0L,0x1535540FL,0L,0x4A2F955FL}}};
            uint32_t l_280 = 4294967295UL;
            int i, j, k;
            (1 + 1);
        }
    }
    (*p_598->g_254) = (((safe_lshift_func_uint16_t_u_u((0x6F7269C6L & ((++p_598->g_74) == (((safe_rshift_func_uint8_t_u_u(l_290, 0)) , (safe_unary_minus_func_int16_t_s(p_41))) , p_41))), (safe_unary_minus_func_uint32_t_u((safe_add_func_uint8_t_u_u((((safe_unary_minus_func_uint16_t_u(p_41)) > (((*l_298) ^= (l_272 ^ ((((((~((p_42 , 0x0FCEL) | ((void*)0 != l_296))) >= 6L) , (void*)0) != l_297[8][2]) , (void*)0) == &l_224))) , 0x334EL)) , 0xFBL), p_41)))))) || p_42) , p_42);
    return (*p_598->g_253);
}


/* ------------------------------------------ */
/* 
 * reads : p_598->g_15.f0
 * writes: p_598->g_15.f0
 */
int8_t * func_43(int8_t * p_44, int64_t  p_45, union U0  p_46, struct S1 * p_598)
{ /* block id: 15 */
    int8_t *l_47 = &p_598->g_26;
    int8_t **l_48[7] = {&l_47,&l_47,&l_47,&l_47,&l_47,&l_47,&l_47};
    int32_t *l_49 = &p_598->g_15.f0;
    int8_t *l_50 = &p_598->g_26;
    int i;
    (*l_49) &= ((p_44 = l_47) == (((void*)0 == &l_47) , &p_598->g_26));
    return l_50;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_599;
    struct S1* p_598 = &c_599;
    struct S1 c_600 = {
        0x1AC48889L, // p_598->g_8
        {3L}, // p_598->g_15
        0x4BL, // p_598->g_26
        1UL, // p_598->g_64
        {4L,4L,4L}, // p_598->g_73
        2UL, // p_598->g_74
        0x52L, // p_598->g_109
        (void*)0, // p_598->g_112
        0x68CBL, // p_598->g_117
        (-3L), // p_598->g_121
        {&p_598->g_121,&p_598->g_121,&p_598->g_121}, // p_598->g_126
        &p_598->g_121, // p_598->g_127
        (-1L), // p_598->g_129
        0x03F0CD8B2F8DC5A2L, // p_598->g_143
        &p_598->g_143, // p_598->g_146
        0xFC8C377FL, // p_598->g_162
        0x7AA63A17L, // p_598->g_176
        0xE3977822L, // p_598->g_177
        (void*)0, // p_598->g_187
        &p_598->g_64, // p_598->g_192
        {&p_598->g_192,&p_598->g_192,&p_598->g_192,&p_598->g_192}, // p_598->g_191
        {{{0x144486E5L,0x70F45DD7L,0x76DDF6E1L,(-9L),0x56720C7BL},{0x144486E5L,0x70F45DD7L,0x76DDF6E1L,(-9L),0x56720C7BL},{0x144486E5L,0x70F45DD7L,0x76DDF6E1L,(-9L),0x56720C7BL},{0x144486E5L,0x70F45DD7L,0x76DDF6E1L,(-9L),0x56720C7BL}},{{0x144486E5L,0x70F45DD7L,0x76DDF6E1L,(-9L),0x56720C7BL},{0x144486E5L,0x70F45DD7L,0x76DDF6E1L,(-9L),0x56720C7BL},{0x144486E5L,0x70F45DD7L,0x76DDF6E1L,(-9L),0x56720C7BL},{0x144486E5L,0x70F45DD7L,0x76DDF6E1L,(-9L),0x56720C7BL}},{{0x144486E5L,0x70F45DD7L,0x76DDF6E1L,(-9L),0x56720C7BL},{0x144486E5L,0x70F45DD7L,0x76DDF6E1L,(-9L),0x56720C7BL},{0x144486E5L,0x70F45DD7L,0x76DDF6E1L,(-9L),0x56720C7BL},{0x144486E5L,0x70F45DD7L,0x76DDF6E1L,(-9L),0x56720C7BL}}}, // p_598->g_214
        &p_598->g_15.f0, // p_598->g_254
        &p_598->g_254, // p_598->g_253
        {4UL,4UL,4UL,4UL,4UL}, // p_598->g_268
        4294967295UL, // p_598->g_299
        {{{&p_598->g_254}},{{&p_598->g_254}},{{&p_598->g_254}},{{&p_598->g_254}},{{&p_598->g_254}},{{&p_598->g_254}},{{&p_598->g_254}},{{&p_598->g_254}},{{&p_598->g_254}}}, // p_598->g_335
        &p_598->g_254, // p_598->g_336
        0L, // p_598->g_354
        0x18B0L, // p_598->g_379
        (-1L), // p_598->g_382
        0L, // p_598->g_384
        (-7L), // p_598->g_407
        (void*)0, // p_598->g_413
        &p_598->g_413, // p_598->g_412
        {&p_598->g_412,&p_598->g_412,&p_598->g_412,&p_598->g_412}, // p_598->g_411
        &p_598->g_411[1], // p_598->g_410
        {{{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187}},{{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187}},{{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187}},{{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187},{&p_598->g_191[0],&p_598->g_191[2],&p_598->g_191[0],&p_598->g_191[1],&p_598->g_191[0],&p_598->g_191[0],&p_598->g_187,&p_598->g_187}}}, // p_598->g_415
        {&p_598->g_415[2][4][3],&p_598->g_415[2][4][3],&p_598->g_415[2][4][3],&p_598->g_415[2][4][3],&p_598->g_415[2][4][3],&p_598->g_415[2][4][3],&p_598->g_415[2][4][3],&p_598->g_415[2][4][3],&p_598->g_415[2][4][3]}, // p_598->g_414
        (void*)0, // p_598->g_418
        {{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254},{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254},{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254},{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254},{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254},{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254},{&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254,&p_598->g_254}}, // p_598->g_422
        1UL, // p_598->g_515
        {(-1L),(-1L),(-1L)}, // p_598->g_542
        (void*)0, // p_598->g_587
    };
    c_599 = c_600;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_598);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_598->g_8, "p_598->g_8", print_hash_value);
    transparent_crc(p_598->g_15.f0, "p_598->g_15.f0", print_hash_value);
    transparent_crc(p_598->g_26, "p_598->g_26", print_hash_value);
    transparent_crc(p_598->g_64, "p_598->g_64", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_598->g_73[i], "p_598->g_73[i]", print_hash_value);

    }
    transparent_crc(p_598->g_74, "p_598->g_74", print_hash_value);
    transparent_crc(p_598->g_109, "p_598->g_109", print_hash_value);
    transparent_crc(p_598->g_117, "p_598->g_117", print_hash_value);
    transparent_crc(p_598->g_121, "p_598->g_121", print_hash_value);
    transparent_crc(p_598->g_129, "p_598->g_129", print_hash_value);
    transparent_crc(p_598->g_143, "p_598->g_143", print_hash_value);
    transparent_crc(p_598->g_162, "p_598->g_162", print_hash_value);
    transparent_crc(p_598->g_176, "p_598->g_176", print_hash_value);
    transparent_crc(p_598->g_177, "p_598->g_177", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_598->g_214[i][j][k], "p_598->g_214[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_598->g_268[i], "p_598->g_268[i]", print_hash_value);

    }
    transparent_crc(p_598->g_299, "p_598->g_299", print_hash_value);
    transparent_crc(p_598->g_354, "p_598->g_354", print_hash_value);
    transparent_crc(p_598->g_379, "p_598->g_379", print_hash_value);
    transparent_crc(p_598->g_382, "p_598->g_382", print_hash_value);
    transparent_crc(p_598->g_384, "p_598->g_384", print_hash_value);
    transparent_crc(p_598->g_407, "p_598->g_407", print_hash_value);
    transparent_crc(p_598->g_515, "p_598->g_515", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_598->g_542[i], "p_598->g_542[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
