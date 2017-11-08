// -g 64,98,1 -l 1,98,1
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


// Seed: 267493850

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint64_t  f0;
   int16_t  f1;
   int64_t  f2;
   volatile int16_t  f3;
};

struct S1 {
    int32_t g_5;
    uint32_t g_32;
    volatile int32_t g_44[1];
    volatile int32_t g_45;
    volatile int32_t g_46[1];
    volatile int32_t g_47;
    volatile int32_t g_48;
    int32_t g_49[6];
    int32_t g_52;
    uint16_t g_67;
    uint32_t g_73;
    uint16_t g_82[7][2][10];
    uint16_t *g_81;
    int32_t ** volatile g_88;
    int32_t g_94;
    int16_t g_115[2][1];
    int8_t g_124;
    volatile union U0 g_125;
    volatile int16_t g_165;
    volatile int16_t *g_164;
    volatile int16_t **g_163;
    volatile uint64_t * volatile g_240;
    uint64_t g_254;
    int16_t g_263;
    volatile union U0 g_265;
    volatile uint16_t g_274;
    volatile int32_t *g_283;
    volatile int32_t ** volatile g_282;
    union U0 g_288;
    uint32_t * volatile g_290[3][4];
    uint32_t * volatile * volatile g_289;
    uint32_t * volatile * volatile * volatile g_291;
    uint32_t * volatile * volatile * volatile g_292;
    uint8_t g_299;
    uint64_t g_330[6][9][1];
    volatile uint64_t * volatile *g_386;
    int8_t g_387;
    int8_t g_388;
    uint16_t g_389;
    int64_t g_395;
    int64_t *g_394;
    int64_t **g_393;
    int64_t *** volatile g_392;
    union U0 g_404;
    union U0 *g_403;
    union U0 *g_406;
    union U0 g_408;
    union U0 *g_407;
    int16_t g_445[4];
    int32_t *g_450[3];
    int32_t ** volatile g_449[8][7];
    int32_t ** volatile g_451;
    int32_t ** volatile g_452;
    uint32_t g_475;
    int32_t ** volatile g_482;
    uint32_t g_526;
    volatile int32_t ** volatile g_560;
    int32_t ** volatile g_561;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S1 * p_564);
int32_t * func_7(int32_t  p_8, int32_t  p_9, int32_t  p_10, uint32_t  p_11, struct S1 * p_564);
int32_t * func_12(uint32_t  p_13, int32_t * p_14, int32_t  p_15, uint8_t  p_16, int32_t  p_17, struct S1 * p_564);
uint32_t  func_18(uint32_t  p_19, int32_t * p_20, int32_t * p_21, int32_t * p_22, int32_t * p_23, struct S1 * p_564);
int64_t  func_35(uint32_t * p_36, uint32_t * p_37, int32_t  p_38, uint32_t  p_39, int32_t * p_40, struct S1 * p_564);
uint32_t * func_41(uint32_t * p_42, uint32_t * p_43, struct S1 * p_564);
int32_t * func_55(int32_t * p_56, struct S1 * p_564);
int32_t  func_59(uint64_t  p_60, uint32_t * p_61, struct S1 * p_564);
uint32_t  func_68(uint32_t * p_69, int32_t * p_70, int16_t  p_71, struct S1 * p_564);
int16_t  func_74(uint32_t * p_75, int64_t  p_76, uint32_t  p_77, int32_t  p_78, uint16_t * p_79, struct S1 * p_564);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_564->g_5 p_564->g_32 p_564->g_49 p_564->g_81 p_564->g_46 p_564->g_82 p_564->g_48 p_564->g_94 p_564->g_125 p_564->g_163 p_564->g_164 p_564->g_165 p_564->g_124 p_564->g_115 p_564->g_125.f0 p_564->g_47 p_564->g_73 p_564->g_240 p_564->g_52 p_564->g_265 p_564->g_88 p_564->g_274 p_564->g_44 p_564->g_282 p_564->g_283 p_564->g_45 p_564->g_289 p_564->g_292 p_564->g_299 p_564->g_330 p_564->g_263 p_564->g_386 p_564->g_388 p_564->g_389 p_564->g_392 p_564->g_394 p_564->g_290 p_564->g_403 p_564->g_407 p_564->g_395 p_564->g_408.f0 p_564->g_451 p_564->g_452 p_564->g_450 p_564->g_404.f0 p_564->g_254 p_564->g_404.f1 p_564->g_482 p_564->g_475 p_564->g_526 p_564->g_288.f2 p_564->g_560 p_564->g_561
 * writes: p_564->g_5 p_564->g_32 p_564->g_49 p_564->g_52 p_564->g_48 p_564->g_44 p_564->g_67 p_564->g_115 p_564->g_124 p_564->g_94 p_564->g_163 p_564->g_73 p_564->g_283 p_564->g_289 p_564->g_299 p_564->g_45 p_564->g_330 p_564->g_82 p_564->g_387 p_564->g_393 p_564->g_395 p_564->g_403 p_564->g_406 p_564->g_445 p_564->g_388 p_564->g_450 p_564->g_407 p_564->g_404.f1 p_564->g_404.f0 p_564->g_394 p_564->g_475 p_564->g_526 p_564->g_288.f2 p_564->g_408.f0
 */
int32_t  func_1(struct S1 * p_564)
{ /* block id: 4 */
    int8_t l_3 = 0x1CL;
    int32_t *l_4[1];
    int8_t l_6 = 0x57L;
    int16_t l_28 = 0x534AL;
    uint32_t *l_31 = &p_564->g_32;
    uint32_t *l_474[10];
    uint32_t *l_523 = (void*)0;
    uint32_t *l_524 = (void*)0;
    uint32_t *l_525 = &p_564->g_526;
    int32_t l_529 = 0x0C008499L;
    uint8_t l_562 = 5UL;
    int16_t l_563 = (-1L);
    int i;
    for (i = 0; i < 1; i++)
        l_4[i] = &p_564->g_5;
    for (i = 0; i < 10; i++)
        l_474[i] = &p_564->g_475;
    l_6 = ((safe_unary_minus_func_int64_t_s((0x6BL && 0xB9L))) <= l_3);
    p_564->g_5 = p_564->g_5;
    (*p_564->g_561) = func_7(p_564->g_5, p_564->g_5, (((~(((l_529 ^= ((l_4[0] = func_12(((*l_525) = func_18(((safe_lshift_func_uint16_t_u_s(((safe_div_func_uint16_t_u_u(l_28, (safe_lshift_func_int8_t_s_s((p_564->g_5 == ((*l_31)++)), (+((&p_564->g_5 != (void*)0) == func_35(func_41(l_31, l_4[0], p_564), l_474[4], p_564->g_404.f0, p_564->g_254, &p_564->g_5, p_564))))))) < 0x14D3L), p_564->g_475)) & p_564->g_389), l_31, l_474[4], l_474[1], &p_564->g_5, p_564)), l_525, p_564->g_5, p_564->g_389, p_564->g_263, p_564)) == &p_564->g_5)) == 1UL) || p_564->g_526)) > l_6) , p_564->g_44[0]), p_564->g_254, p_564);
    l_563 &= l_562;
    return p_564->g_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_564->g_299 p_564->g_288.f2 p_564->g_475 p_564->g_32 p_564->g_282 p_564->g_283 p_564->g_45 p_564->g_48 p_564->g_526 p_564->g_408.f0 p_564->g_5 p_564->g_82 p_564->g_560
 * writes: p_564->g_299 p_564->g_288.f2 p_564->g_475 p_564->g_32 p_564->g_283 p_564->g_45 p_564->g_48 p_564->g_526 p_564->g_408.f0 p_564->g_5
 */
int32_t * func_7(int32_t  p_8, int32_t  p_9, int32_t  p_10, uint32_t  p_11, struct S1 * p_564)
{ /* block id: 234 */
    int32_t *l_538[4][1][2] = {{{&p_564->g_49[3],(void*)0}},{{&p_564->g_49[3],(void*)0}},{{&p_564->g_49[3],(void*)0}},{{&p_564->g_49[3],(void*)0}}};
    uint32_t l_540 = 0xF78BDB11L;
    int i, j, k;
    for (p_564->g_299 = 0; (p_564->g_299 < 48); p_564->g_299 = safe_add_func_uint16_t_u_u(p_564->g_299, 7))
    { /* block id: 237 */
        int32_t l_539 = (-3L);
        for (p_564->g_288.f2 = 25; (p_564->g_288.f2 < (-27)); p_564->g_288.f2 = safe_sub_func_int8_t_s_s(p_564->g_288.f2, 4))
        { /* block id: 240 */
            for (p_564->g_475 = 15; (p_564->g_475 >= 55); p_564->g_475++)
            { /* block id: 243 */
                for (p_564->g_32 = 0; (p_564->g_32 > 21); p_564->g_32 = safe_add_func_uint32_t_u_u(p_564->g_32, 1))
                { /* block id: 246 */
                    p_8 = p_11;
                }
                (*p_564->g_282) = (void*)0;
                return l_538[3][0][1];
            }
            if (l_539)
                continue;
        }
        (*p_564->g_283) ^= (-1L);
    }
    (*p_564->g_283) = l_540;
    for (p_564->g_526 = 0; (p_564->g_526 < 42); p_564->g_526 = safe_add_func_uint16_t_u_u(p_564->g_526, 1))
    { /* block id: 259 */
        union U0 *l_543 = &p_564->g_404;
        uint32_t *l_548 = &p_564->g_526;
        for (p_8 = 0; (p_8 <= 2); p_8 += 1)
        { /* block id: 262 */
            union U0 **l_544 = &l_543;
            uint64_t *l_554 = &p_564->g_288.f0;
            int i;
            (*l_544) = l_543;
            (*p_564->g_283) = 3L;
            for (p_564->g_408.f0 = 0; (p_564->g_408.f0 <= 1); p_564->g_408.f0 += 1)
            { /* block id: 267 */
                int64_t l_551 = (-6L);
                uint32_t *l_557 = &p_564->g_32;
                int i, j, k;
                for (p_564->g_5 = 1; (p_564->g_5 >= 0); p_564->g_5 -= 1)
                { /* block id: 270 */
                    uint16_t l_545[5][10] = {{0x5CA2L,0x9323L,0x1319L,0x7759L,0x065AL,0x7759L,0x1319L,0x9323L,0x5CA2L,0x1319L},{0x5CA2L,0x9323L,0x1319L,0x7759L,0x065AL,0x7759L,0x1319L,0x9323L,0x5CA2L,0x1319L},{0x5CA2L,0x9323L,0x1319L,0x7759L,0x065AL,0x7759L,0x1319L,0x9323L,0x5CA2L,0x1319L},{0x5CA2L,0x9323L,0x1319L,0x7759L,0x065AL,0x7759L,0x1319L,0x9323L,0x5CA2L,0x1319L},{0x5CA2L,0x9323L,0x1319L,0x7759L,0x065AL,0x7759L,0x1319L,0x9323L,0x5CA2L,0x1319L}};
                    int i, j;
                    l_545[4][6]++;
                }
                (*p_564->g_283) |= ((l_548 == ((p_564->g_82[(p_564->g_408.f0 + 3)][p_564->g_408.f0][(p_8 + 6)] ^ ((l_551 < (safe_mod_func_uint64_t_u_u(p_10, ((l_554 == (void*)0) || (((*l_557) &= (safe_rshift_func_uint16_t_u_u(p_9, 4))) < (safe_sub_func_uint64_t_u_u((&p_564->g_526 == &p_564->g_526), 18446744073709551608UL))))))) <= p_9)) , l_557)) >= p_8);
                (*p_564->g_560) = (*p_564->g_282);
            }
        }
    }
    return l_538[1][0][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_564->g_526
 * writes: p_564->g_526
 */
int32_t * func_12(uint32_t  p_13, int32_t * p_14, int32_t  p_15, uint8_t  p_16, int32_t  p_17, struct S1 * p_564)
{ /* block id: 229 */
    int16_t l_527[4][2];
    int32_t *l_528[3][8][8] = {{{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0}},{{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0}},{{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0},{&p_564->g_52,&p_564->g_94,&p_564->g_94,&p_564->g_52,(void*)0,&p_564->g_49[0],(void*)0,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_527[i][j] = 0x6A72L;
    }
    (*p_14) ^= l_527[0][1];
    return l_528[0][1][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_564->g_404.f0 p_564->g_44 p_564->g_282 p_564->g_283 p_564->g_45 p_564->g_48 p_564->g_81 p_564->g_82 p_564->g_47 p_564->g_475 p_564->g_32
 * writes: p_564->g_404.f0 p_564->g_299 p_564->g_82 p_564->g_394 p_564->g_124 p_564->g_32 p_564->g_475 p_564->g_45 p_564->g_48
 */
uint32_t  func_18(uint32_t  p_19, int32_t * p_20, int32_t * p_21, int32_t * p_22, int32_t * p_23, struct S1 * p_564)
{ /* block id: 209 */
    int8_t l_499 = 1L;
    int32_t l_502[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint8_t *l_506 = &p_564->g_299;
    int64_t *l_507 = (void*)0;
    int64_t *l_510[2];
    int64_t **l_511 = &l_510[1];
    int64_t **l_512 = &p_564->g_394;
    int64_t *l_514[1][1];
    int64_t **l_513 = &l_514[0][0];
    int8_t *l_519 = &p_564->g_124;
    uint32_t l_522 = 1UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_510[i] = &p_564->g_395;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_514[i][j] = &p_564->g_395;
    }
    for (p_564->g_404.f0 = 0; (p_564->g_404.f0 <= 0); p_564->g_404.f0 += 1)
    { /* block id: 212 */
        int32_t *l_500 = &p_564->g_94;
        int32_t *l_501[6] = {&p_564->g_49[1],(void*)0,&p_564->g_49[1],&p_564->g_49[1],(void*)0,&p_564->g_49[1]};
        uint32_t l_503 = 0x62E44AEDL;
        int i;
        --l_503;
        return p_564->g_44[p_564->g_404.f0];
    }
    (*p_20) |= ((((l_502[9] != (((*l_506) = 1UL) && (l_502[2] <= ((**p_564->g_282) , p_19)))) , ((((l_507 = &p_564->g_395) != ((*l_513) = ((*l_512) = ((0x4D0FL != (--(*p_564->g_81))) , ((*l_511) = l_510[0]))))) != (!(safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((*l_519) = p_19), p_564->g_47)) >= l_502[9]), l_502[0])))) ^ (*p_22))) != 0x01L) && p_19);
    (*p_564->g_283) |= ((*p_21) = (safe_div_func_int32_t_s_s((-9L), (-3L))));
    p_22 = &l_502[9];
    return l_522;
}


/* ------------------------------------------ */
/* 
 * reads : p_564->g_283 p_564->g_45 p_564->g_48 p_564->g_404.f0 p_564->g_404.f1 p_564->g_482 p_564->g_73 p_564->g_81 p_564->g_475 p_564->g_394 p_564->g_395
 * writes: p_564->g_45 p_564->g_48 p_564->g_404.f1 p_564->g_450 p_564->g_73 p_564->g_82 p_564->g_124
 */
int64_t  func_35(uint32_t * p_36, uint32_t * p_37, int32_t  p_38, uint32_t  p_39, int32_t * p_40, struct S1 * p_564)
{ /* block id: 195 */
    int16_t l_476 = 1L;
    int32_t l_479 = (-1L);
    uint32_t l_491 = 0x64A395DEL;
    int8_t l_497[2];
    int i;
    for (i = 0; i < 2; i++)
        l_497[i] = (-1L);
    (*p_564->g_283) = (&p_564->g_125 != &p_564->g_408);
    l_479 ^= ((l_476 = (*p_564->g_283)) || (safe_div_func_uint8_t_u_u(p_564->g_404.f0, l_476)));
    for (p_564->g_404.f1 = 0; (p_564->g_404.f1 != (-26)); --p_564->g_404.f1)
    { /* block id: 201 */
        uint32_t *l_496[4][4] = {{&p_564->g_475,&p_564->g_475,&l_491,&p_564->g_475},{&p_564->g_475,&p_564->g_475,&l_491,&p_564->g_475},{&p_564->g_475,&p_564->g_475,&l_491,&p_564->g_475},{&p_564->g_475,&p_564->g_475,&l_491,&p_564->g_475}};
        int8_t *l_498 = &p_564->g_124;
        int i, j;
        (*p_564->g_482) = p_37;
        (*p_564->g_283) |= ((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_s(((&l_479 != &l_479) < (l_491 <= (~(l_479 ^ (l_476 > ((*p_36)++)))))), ((*l_498) = (safe_add_func_int16_t_s_s(((255UL & ((((-2L) & ((*p_564->g_81) = ((void*)0 != l_496[2][1]))) && l_497[0]) == 4UL)) == l_479), p_39))))) > 0x1C114250L), 12)), 65535UL)) <= (*p_37));
    }
    return (*p_564->g_394);
}


/* ------------------------------------------ */
/* 
 * reads : p_564->g_49 p_564->g_5 p_564->g_81 p_564->g_46 p_564->g_82 p_564->g_48 p_564->g_94 p_564->g_125 p_564->g_163 p_564->g_164 p_564->g_165 p_564->g_124 p_564->g_115 p_564->g_125.f0 p_564->g_47 p_564->g_73 p_564->g_240 p_564->g_52 p_564->g_265 p_564->g_88 p_564->g_274 p_564->g_44 p_564->g_282 p_564->g_283 p_564->g_45 p_564->g_289 p_564->g_292 p_564->g_299 p_564->g_330 p_564->g_263 p_564->g_386 p_564->g_388 p_564->g_389 p_564->g_392 p_564->g_394 p_564->g_290 p_564->g_403 p_564->g_407 p_564->g_395 p_564->g_408.f0 p_564->g_451 p_564->g_452 p_564->g_450
 * writes: p_564->g_49 p_564->g_52 p_564->g_48 p_564->g_44 p_564->g_67 p_564->g_115 p_564->g_124 p_564->g_94 p_564->g_163 p_564->g_73 p_564->g_283 p_564->g_289 p_564->g_299 p_564->g_45 p_564->g_330 p_564->g_82 p_564->g_387 p_564->g_393 p_564->g_395 p_564->g_403 p_564->g_406 p_564->g_445 p_564->g_388 p_564->g_450 p_564->g_407
 */
uint32_t * func_41(uint32_t * p_42, uint32_t * p_43, struct S1 * p_564)
{ /* block id: 8 */
    uint32_t *l_72 = &p_564->g_73;
    int32_t l_454[9][6][4] = {{{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL}},{{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL}},{{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL}},{{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL}},{{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL}},{{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL}},{{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL}},{{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL}},{{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL},{0x5D2DFEEFL,0L,1L,0x5D2DFEEFL}}};
    int i, j, k;
    for (p_564->g_49[4] = 0; (p_564->g_49[4] < (-16)); p_564->g_49[4] = safe_sub_func_int8_t_s_s(p_564->g_49[4], 5))
    { /* block id: 11 */
        int8_t l_64 = (-4L);
        uint16_t *l_65 = (void*)0;
        uint16_t *l_66 = &p_564->g_67;
        uint32_t *l_80 = &p_564->g_73;
        int32_t **l_455 = &p_564->g_450[0];
        for (p_564->g_52 = 0; (p_564->g_52 <= 27); ++p_564->g_52)
        { /* block id: 14 */
            for (p_564->g_48 = 0; p_564->g_48 < 1; p_564->g_48 += 1)
            {
                p_564->g_44[p_564->g_48] = (-5L);
            }
        }
        (*l_455) = func_55(((*l_455) = ((safe_sub_func_uint16_t_u_u(((func_59((safe_mod_func_uint16_t_u_u(((*l_66) = (l_64 == (*p_43))), (func_68(l_72, p_43, func_74(l_80, p_564->g_49[4], l_64, p_564->g_5, p_564->g_81, p_564), p_564) , l_64))), p_42, p_564) && 0x29B3BE91L) != 6L), l_454[0][0][0])) , (void*)0)), p_564);
        (*l_455) = &l_454[0][0][0];
    }
    return &p_564->g_73;
}


/* ------------------------------------------ */
/* 
 * reads : p_564->g_408.f0 p_564->g_283 p_564->g_45 p_564->g_48 p_564->g_451 p_564->g_450
 * writes: p_564->g_407 p_564->g_45 p_564->g_48
 */
int32_t * func_55(int32_t * p_56, struct S1 * p_564)
{ /* block id: 185 */
    uint64_t l_458 = 0x9E3116022ABFBEE0L;
    union U0 **l_459 = (void*)0;
    union U0 **l_460 = &p_564->g_407;
    int32_t l_461 = (-8L);
    int32_t *l_462 = &l_461;
    int32_t *l_463 = &p_564->g_94;
    int32_t l_464 = 0x4EBBEE3FL;
    int32_t *l_465 = &l_461;
    int32_t *l_466 = &p_564->g_52;
    int32_t l_467 = (-5L);
    int32_t *l_468 = &p_564->g_94;
    int32_t *l_469[10] = {&l_461,&l_461,&l_461,&l_461,&l_461,&l_461,&l_461,&l_461,&l_461,&l_461};
    int16_t l_470 = 0x1DCDL;
    uint32_t l_471 = 0x42B6D261L;
    int i;
    (*p_564->g_283) &= (l_461 = (safe_sub_func_int32_t_s_s(l_458, (l_458 , (p_564->g_408.f0 , (&p_564->g_408 != ((*l_460) = &p_564->g_408)))))));
    --l_471;
    return (*p_564->g_451);
}


/* ------------------------------------------ */
/* 
 * reads : p_564->g_388 p_564->g_282 p_564->g_283 p_564->g_45 p_564->g_48 p_564->g_451 p_564->g_452
 * writes: p_564->g_388 p_564->g_45 p_564->g_48 p_564->g_450
 */
int32_t  func_59(uint64_t  p_60, uint32_t * p_61, struct S1 * p_564)
{ /* block id: 175 */
    int32_t l_453 = 0x11866EBDL;
    for (p_564->g_388 = (-19); (p_564->g_388 == 14); p_564->g_388 = safe_add_func_int32_t_s_s(p_564->g_388, 1))
    { /* block id: 178 */
        (*p_564->g_283) = (**p_564->g_282);
        (*p_564->g_451) = p_61;
    }
    (*p_564->g_452) = p_61;
    return l_453;
}


/* ------------------------------------------ */
/* 
 * reads : p_564->g_94 p_564->g_73 p_564->g_394 p_564->g_289 p_564->g_290 p_564->g_403 p_564->g_407 p_564->g_52 p_564->g_283 p_564->g_45 p_564->g_48 p_564->g_395 p_564->g_5 p_564->g_408.f0 p_564->g_299
 * writes: p_564->g_94 p_564->g_73 p_564->g_395 p_564->g_403 p_564->g_406 p_564->g_52 p_564->g_45 p_564->g_48 p_564->g_299 p_564->g_445
 */
uint32_t  func_68(uint32_t * p_69, int32_t * p_70, int16_t  p_71, struct S1 * p_564)
{ /* block id: 153 */
    int32_t l_396 = 0x18E3EB7BL;
    union U0 **l_405[9][3] = {{&p_564->g_403,&p_564->g_403,&p_564->g_403},{&p_564->g_403,&p_564->g_403,&p_564->g_403},{&p_564->g_403,&p_564->g_403,&p_564->g_403},{&p_564->g_403,&p_564->g_403,&p_564->g_403},{&p_564->g_403,&p_564->g_403,&p_564->g_403},{&p_564->g_403,&p_564->g_403,&p_564->g_403},{&p_564->g_403,&p_564->g_403,&p_564->g_403},{&p_564->g_403,&p_564->g_403,&p_564->g_403},{&p_564->g_403,&p_564->g_403,&p_564->g_403}};
    uint32_t *l_412[2];
    uint32_t **l_411 = &l_412[0];
    uint32_t ***l_410 = &l_411;
    int32_t *l_413 = &p_564->g_52;
    int16_t *l_433 = &p_564->g_115[1][0];
    int16_t **l_432 = &l_433;
    uint8_t *l_434 = &p_564->g_299;
    int32_t *l_446 = &p_564->g_94;
    int i, j;
    for (i = 0; i < 2; i++)
        l_412[i] = &p_564->g_73;
    for (p_564->g_94 = 1; (p_564->g_94 >= 0); p_564->g_94 -= 1)
    { /* block id: 156 */
        for (p_564->g_73 = 0; (p_564->g_73 <= 1); p_564->g_73 += 1)
        { /* block id: 159 */
            return l_396;
        }
        return (*p_69);
    }
    (*l_413) |= (0x1EL > (((*p_564->g_394) = 5L) > (safe_lshift_func_uint16_t_u_s(((((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(65535UL, 11)), 4)) && (l_396 != (**p_564->g_289))) ^ ((p_564->g_406 = (p_564->g_403 = p_564->g_403)) == p_564->g_407)) , 5UL), (safe_unary_minus_func_int32_t_s(((l_410 == &l_411) != l_396)))))));
    (*p_564->g_283) = (((safe_unary_minus_func_uint16_t_u(((*p_564->g_283) == ((safe_rshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s((*p_564->g_394), (safe_rshift_func_uint16_t_u_s(((p_71 , p_564->g_395) , (0x04796CDE82CD16F8L < (0x1DC9098EL <= ((*l_413) &= ((((*l_411) = (*l_411)) == p_70) == 0UL))))), 13)))), 8)) <= 4UL)))) && 1UL) <= (-1L));
    (*l_446) &= (safe_mul_func_int8_t_s_s(((*p_564->g_283) ^ (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint16_t_u_u(1UL, 7)))), 1)), 10))), (((safe_lshift_func_int8_t_s_s(p_564->g_5, p_564->g_408.f0)) & ((((*l_413) & ((&p_564->g_164 != l_432) == (((*l_434)--) <= (p_564->g_445[0] = (((safe_rshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((*l_413) > (safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s((*p_70), (*l_413))), 0xFA6C644FDAC93FF6L))), p_71)) , (-1L)), 0)) || 1UL) || (*l_413)))))) <= p_71) , 18446744073709551615UL)) ^ (*l_413))));
    return (*p_69);
}


/* ------------------------------------------ */
/* 
 * reads : p_564->g_52 p_564->g_46 p_564->g_49 p_564->g_81 p_564->g_82 p_564->g_48 p_564->g_94 p_564->g_125 p_564->g_163 p_564->g_164 p_564->g_165 p_564->g_124 p_564->g_115 p_564->g_125.f0 p_564->g_47 p_564->g_73 p_564->g_240 p_564->g_265 p_564->g_88 p_564->g_274 p_564->g_44 p_564->g_282 p_564->g_283 p_564->g_289 p_564->g_292 p_564->g_299 p_564->g_330 p_564->g_263 p_564->g_386 p_564->g_388 p_564->g_389 p_564->g_392 p_564->g_45
 * writes: p_564->g_52 p_564->g_115 p_564->g_124 p_564->g_94 p_564->g_163 p_564->g_73 p_564->g_283 p_564->g_289 p_564->g_299 p_564->g_48 p_564->g_330 p_564->g_82 p_564->g_387 p_564->g_393 p_564->g_45
 */
int16_t  func_74(uint32_t * p_75, int64_t  p_76, uint32_t  p_77, int32_t  p_78, uint16_t * p_79, struct S1 * p_564)
{ /* block id: 18 */
    uint32_t l_98 = 4294967295UL;
    int32_t *l_107 = (void*)0;
    int32_t l_137 = 9L;
    int32_t l_143 = 0x3E0B9256L;
    int32_t l_147 = 0x7823F9BEL;
    int32_t l_148 = 0x00EF88CBL;
    int32_t l_150 = 0x6A8E11CFL;
    int32_t l_151[7];
    uint16_t l_188[2];
    int16_t *l_193 = &p_564->g_115[1][0];
    uint64_t *l_253 = &p_564->g_254;
    uint8_t l_322 = 255UL;
    uint64_t **l_332 = &l_253;
    uint64_t ***l_331 = &l_332;
    uint8_t *l_355 = (void*)0;
    uint32_t l_390 = 0UL;
    int64_t **l_391 = (void*)0;
    int i;
    for (i = 0; i < 7; i++)
        l_151[i] = 0L;
    for (i = 0; i < 2; i++)
        l_188[i] = 0xC879L;
    for (p_564->g_52 = (-27); (p_564->g_52 >= 7); p_564->g_52 = safe_add_func_uint8_t_u_u(p_564->g_52, 4))
    { /* block id: 21 */
        int32_t *l_87 = &p_564->g_49[5];
        int32_t l_105 = (-8L);
        int32_t l_152 = 0x67006BDAL;
        int32_t l_153[7];
        uint16_t *l_186 = &p_564->g_82[3][1][6];
        int32_t *l_320 = (void*)0;
        int32_t *l_321[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t **l_325 = &l_321[4];
        uint8_t *l_341 = &l_322;
        union U0 *l_351 = &p_564->g_288;
        union U0 **l_350 = &l_351;
        union U0 *l_352 = &p_564->g_288;
        int16_t *l_356 = (void*)0;
        int16_t *l_357 = (void*)0;
        int16_t *l_358[1];
        int32_t l_359 = 6L;
        int i;
        for (i = 0; i < 7; i++)
            l_153[i] = 0x52075E55L;
        for (i = 0; i < 1; i++)
            l_358[i] = &p_564->g_288.f1;
        for (p_78 = 0; (p_78 >= 19); p_78++)
        { /* block id: 24 */
            uint64_t l_131 = 1UL;
            int32_t l_144 = 4L;
            int8_t l_146 = 0x36L;
            int32_t l_149[5] = {6L,6L,6L,6L,6L};
            uint64_t l_160[6];
            uint16_t *l_187 = &p_564->g_82[2][1][6];
            int32_t l_206 = 7L;
            int64_t l_210[8];
            int16_t **l_235 = &l_193;
            uint64_t *l_256 = &l_160[4];
            int i;
            for (i = 0; i < 6; i++)
                l_160[i] = 18446744073709551614UL;
            for (i = 0; i < 8; i++)
                l_210[i] = 0x4E106F96AAEAA367L;
            for (p_77 = 0; (p_77 <= 0); p_77 += 1)
            { /* block id: 27 */
                int32_t **l_89 = (void*)0;
                int32_t **l_90 = &l_87;
                (*l_90) = l_87;
            }
            for (p_77 = 0; (p_77 <= 47); p_77 = safe_add_func_uint16_t_u_u(p_77, 9))
            { /* block id: 32 */
                int32_t *l_93 = &p_564->g_94;
                int32_t *l_95 = &p_564->g_94;
                int32_t *l_96 = (void*)0;
                int32_t *l_97 = (void*)0;
                int32_t l_154 = (-1L);
                int32_t l_155 = 0x383B62BCL;
                int32_t l_158 = 0L;
                int32_t l_159 = 0x7BE084E5L;
                int32_t *l_207 = &l_159;
                int32_t *l_208 = (void*)0;
                int32_t *l_209[5][9] = {{&l_154,&l_155,&l_155,&l_154,&l_154,&l_155,&l_155,&l_154,&l_154},{&l_154,&l_155,&l_155,&l_154,&l_154,&l_155,&l_155,&l_154,&l_154},{&l_154,&l_155,&l_155,&l_154,&l_154,&l_155,&l_155,&l_154,&l_154},{&l_154,&l_155,&l_155,&l_154,&l_154,&l_155,&l_155,&l_154,&l_154},{&l_154,&l_155,&l_155,&l_154,&l_154,&l_155,&l_155,&l_154,&l_154}};
                uint16_t l_211 = 0UL;
                int i, j;
                --l_98;
                if ((!(p_77 > (safe_lshift_func_uint16_t_u_s((p_564->g_46[0] && 0L), 10)))))
                { /* block id: 34 */
                    int16_t *l_114[4][2] = {{&p_564->g_115[1][0],&p_564->g_115[1][0]},{&p_564->g_115[1][0],&p_564->g_115[1][0]},{&p_564->g_115[1][0],&p_564->g_115[1][0]},{&p_564->g_115[1][0],&p_564->g_115[1][0]}};
                    int8_t *l_123 = &p_564->g_124;
                    int32_t l_126 = 0x7772618AL;
                    int32_t l_127 = 1L;
                    int i, j;
                    for (p_76 = (-2); (p_76 > (-13)); p_76 = safe_sub_func_int64_t_s_s(p_76, 2))
                    { /* block id: 37 */
                        int32_t **l_106[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_106[i] = &l_87;
                        l_105 = p_76;
                        l_93 = (l_107 = &p_78);
                    }
                    l_127 |= (safe_mod_func_int64_t_s_s(((((p_77 & (safe_rshift_func_int8_t_s_u(p_76, 3))) ^ (p_76 == (p_564->g_115[0][0] = ((-1L) != (~0x226E329CL))))) >= ((((*l_95) &= ((((0x7216L > (((*l_87) ^ (safe_unary_minus_func_uint16_t_u((safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((*l_123) = 0L), 0xF7L)) <= p_564->g_49[4]), (*p_564->g_81))), (*p_564->g_81)))))) ^ 0UL)) > 0x04ACL) || 0x611122A84738BD3CL) & p_564->g_48)) , p_564->g_125) , p_564->g_82[3][1][6])) , 0x6A924D9C5E1620D8L), l_126));
                }
                else
                { /* block id: 46 */
                    int16_t l_130 = 1L;
                    int32_t l_142 = 0x4D927889L;
                    int32_t l_145 = 0x0D1CDFBEL;
                    int32_t l_156 = (-2L);
                    int32_t l_157[9][10][2] = {{{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)}},{{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)}},{{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)}},{{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)}},{{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)}},{{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)}},{{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)}},{{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)}},{{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)},{3L,(-1L)}}};
                    int8_t *l_172 = (void*)0;
                    int8_t *l_173 = &l_146;
                    uint8_t l_204 = 0xF3L;
                    int i, j, k;
                    for (p_76 = (-1); (p_76 > (-8)); --p_76)
                    { /* block id: 49 */
                        (*l_95) = (-7L);
                    }
                    l_131--;
                    if (p_76)
                    { /* block id: 53 */
                        int32_t *l_134 = &p_564->g_94;
                        int32_t *l_135 = &p_564->g_94;
                        int32_t *l_136 = (void*)0;
                        int32_t *l_138 = &p_564->g_94;
                        int32_t *l_139 = &l_137;
                        int32_t *l_140 = &l_137;
                        int32_t *l_141[3][9] = {{&l_137,&l_137,&l_137,&l_137,&l_137,&l_137,&l_137,&l_137,&l_137},{&l_137,&l_137,&l_137,&l_137,&l_137,&l_137,&l_137,&l_137,&l_137},{&l_137,&l_137,&l_137,&l_137,&l_137,&l_137,&l_137,&l_137,&l_137}};
                        int i, j;
                        if (p_77)
                            break;
                        --l_160[5];
                    }
                    else
                    { /* block id: 56 */
                        if (p_76)
                            break;
                        p_564->g_163 = p_564->g_163;
                        return (**p_564->g_163);
                    }
                    if ((safe_mul_func_int8_t_s_s((0x5BL && 0xACL), ((-2L) < ((safe_sub_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u((((*l_173) = p_564->g_82[3][1][6]) , (safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((l_156 = (l_157[4][1][1] < (safe_div_func_int8_t_s_s(p_564->g_49[4], (safe_div_func_int8_t_s_s(((((safe_div_func_int64_t_s_s(p_564->g_46[0], (p_78 | 255UL))) , l_186) != l_187) & (-3L)), p_76)))))), (*p_564->g_81))), l_188[1])) || p_564->g_124), p_564->g_115[0][0]))), 1)) && p_76) != p_564->g_115[1][0]), p_564->g_115[1][0])) <= l_160[0])))))
                    { /* block id: 63 */
                        int16_t *l_192 = &p_564->g_115[1][0];
                        int16_t **l_191 = &l_192;
                        uint64_t *l_202 = &l_131;
                        int32_t l_203[10];
                        int32_t *l_205 = &l_147;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_203[i] = 0x7DB6C3E7L;
                        (*l_205) = (l_204 = ((*l_93) |= (safe_rshift_func_uint16_t_u_u(((!(((*p_564->g_163) != (*p_564->g_163)) , (((*l_191) = p_79) != ((p_79 == (*p_564->g_163)) , l_193)))) && (safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((*l_202) = 0x21FD321574C0D45AL) > (p_564->g_46[0] == p_77)), 7)), 255UL)) > l_203[3]), (*p_79))), l_130))), 5))));
                    }
                    else
                    { /* block id: 69 */
                        return l_206;
                    }
                }
                --l_211;
            }
            for (l_150 = 17; (l_150 != 0); --l_150)
            { /* block id: 77 */
                int16_t l_222 = (-9L);
                int32_t *l_231 = &l_152;
                int8_t l_297 = 0L;
                int64_t l_315 = 0x2982E34CCA1ABCA9L;
                for (p_564->g_73 = 0; (p_564->g_73 <= 38); ++p_564->g_73)
                { /* block id: 80 */
                    uint32_t l_227 = 0UL;
                    int32_t l_241[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_241[i] = (-1L);
                    p_564->g_94 &= p_564->g_125.f0;
                    for (p_564->g_94 = 4; (p_564->g_94 >= 0); p_564->g_94 -= 1)
                    { /* block id: 84 */
                        int32_t *l_218 = &l_151[3];
                        int32_t *l_219 = &l_144;
                        int32_t *l_220 = &l_153[5];
                        int32_t *l_221 = (void*)0;
                        int32_t *l_223 = &l_149[p_564->g_94];
                        int32_t *l_224 = &l_143;
                        int32_t *l_225 = &l_144;
                        int32_t *l_226[7][7][2] = {{{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152}},{{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152}},{{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152}},{{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152}},{{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152}},{{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152}},{{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152},{&l_153[5],&l_152}}};
                        int32_t **l_230[5][8] = {{&l_87,&l_87,&l_107,(void*)0,&l_223,(void*)0,&l_107,&l_87},{&l_87,&l_87,&l_107,(void*)0,&l_223,(void*)0,&l_107,&l_87},{&l_87,&l_87,&l_107,(void*)0,&l_223,(void*)0,&l_107,&l_87},{&l_87,&l_87,&l_107,(void*)0,&l_223,(void*)0,&l_107,&l_87},{&l_87,&l_87,&l_107,(void*)0,&l_223,(void*)0,&l_107,&l_87}};
                        int i, j, k;
                        --l_227;
                        l_87 = &p_78;
                        l_231 = &p_78;
                        if (p_78)
                            continue;
                    }
                    for (l_152 = 0; (l_152 > (-4)); l_152 = safe_sub_func_uint32_t_u_u(l_152, 1))
                    { /* block id: 92 */
                        int32_t *l_234[7][4] = {{&l_137,(void*)0,&l_137,&l_137},{&l_137,(void*)0,&l_137,&l_137},{&l_137,(void*)0,&l_137,&l_137},{&l_137,(void*)0,&l_137,&l_137},{&l_137,(void*)0,&l_137,&l_137},{&l_137,(void*)0,&l_137,&l_137},{&l_137,(void*)0,&l_137,&l_137}};
                        uint32_t l_246[7];
                        uint64_t **l_255[7] = {&l_253,&l_253,&l_253,&l_253,&l_253,&l_253,&l_253};
                        int16_t *l_261 = &l_222;
                        int16_t *l_262[6];
                        int8_t *l_264 = &p_564->g_124;
                        int32_t **l_269 = &l_87;
                        int32_t ***l_268 = &l_269;
                        int i, j;
                        for (i = 0; i < 7; i++)
                            l_246[i] = 4294967295UL;
                        for (i = 0; i < 6; i++)
                            l_262[i] = &p_564->g_263;
                        l_153[5] |= 0x6354BE98L;
                        l_241[0] ^= ((l_235 != &p_564->g_164) == ((4L & ((safe_rshift_func_uint16_t_u_u((((p_564->g_48 , (((l_227 , ((((((p_564->g_49[5] < (p_77 || (safe_mul_func_int16_t_s_s((*p_564->g_164), (*l_231))))) , p_564->g_47) ^ 0x9FL) <= 0x12L) , 3L) >= p_564->g_73)) | 18446744073709551609UL) || p_564->g_46[0])) , p_564->g_240) == (void*)0), (*l_87))) | 0UL)) >= p_564->g_115[0][0]));
                        p_564->g_94 &= (safe_mul_func_int16_t_s_s((+(safe_mod_func_uint32_t_u_u(((*p_79) == l_246[2]), (safe_div_func_uint64_t_u_u((safe_add_func_int8_t_s_s(((p_76 , (((p_564->g_115[0][0] != ((l_256 = l_253) == &p_564->g_254)) & (65528UL >= ((((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((*l_264) &= (((*p_564->g_81) <= (l_241[1] = (+((*l_261) = ((((p_564->g_73 | (*l_87)) >= (**p_564->g_163)) != (*p_564->g_81)) | l_160[5]))))) == p_78)), p_564->g_115[1][0])), 0xE3F64EC9L)) != p_564->g_52) != (*p_564->g_81)) < 255UL))) , 0x662457B24ACD0642L)) && l_241[0]), 0x60L)), p_564->g_52))))), 65529UL));
                        l_151[1] = ((p_564->g_265 , (((safe_lshift_func_int8_t_s_s(p_76, ((p_564->g_88 == ((*l_268) = (void*)0)) && (0x583B0049AFED366BL || (0x4F4CL && (safe_sub_func_int64_t_s_s(((*l_87) > (((((*p_564->g_81) | (safe_add_func_uint16_t_u_u(0x1E8CL, 0x6B93L))) || 2UL) > p_564->g_115[1][0]) > 0x340BL)), 0x6A4DE43C07B6ACC9L))))))) || p_564->g_274) && l_147)) , p_76);
                    }
                    if (l_210[3])
                        break;
                }
                for (l_147 = 3; (l_147 >= (-9)); l_147 = safe_sub_func_uint16_t_u_u(l_147, 4))
                { /* block id: 107 */
                    int32_t l_281[1][7][3] = {{{7L,7L,0x35C9429CL},{7L,7L,0x35C9429CL},{7L,7L,0x35C9429CL},{7L,7L,0x35C9429CL},{7L,7L,0x35C9429CL},{7L,7L,0x35C9429CL},{7L,7L,0x35C9429CL}}};
                    int i, j, k;
                    for (l_148 = (-23); (l_148 != (-3)); l_148++)
                    { /* block id: 110 */
                        int32_t *l_279 = (void*)0;
                        int32_t *l_280 = (void*)0;
                        l_105 |= (l_281[0][4][0] |= p_564->g_44[0]);
                        (*p_564->g_282) = &p_564->g_45;
                        return l_146;
                    }
                    l_152 = 0x0297E417L;
                }
                if ((**p_564->g_282))
                    continue;
                for (l_152 = 0; (l_152 <= (-26)); l_152--)
                { /* block id: 121 */
                    union U0 *l_287 = &p_564->g_288;
                    union U0 **l_286 = &l_287;
                    uint8_t *l_298 = &p_564->g_299;
                    int8_t *l_308 = &l_297;
                    int16_t ***l_309 = (void*)0;
                    int16_t ***l_310 = &l_235;
                    int16_t **l_312 = &l_193;
                    int16_t ***l_311 = &l_312;
                    uint64_t **l_314 = &l_256;
                    uint64_t ***l_313 = &l_314;
                    int64_t *l_316 = (void*)0;
                    int64_t *l_317 = &l_210[3];
                    (*l_286) = (void*)0;
                    (*p_564->g_292) = p_564->g_289;
                    (*p_564->g_283) = (safe_sub_func_int64_t_s_s(((*l_317) |= (((safe_lshift_func_uint16_t_u_s(l_297, 14)) , (((p_77 , ((*l_298)++)) != (safe_mul_func_uint16_t_u_u(((~(safe_div_func_int8_t_s_s(((*p_564->g_81) <= p_76), (safe_mul_func_int8_t_s_s(((*l_308) = p_78), ((((*l_310) = (void*)0) == ((*l_311) = (void*)0)) | (((*l_313) = &l_256) == (void*)0))))))) , (*p_564->g_81)), l_315))) < (*l_231))) >= p_76)), 0xC2CFD8280D7D4098L));
                    return p_78;
                }
            }
            (*p_564->g_283) = (safe_div_func_uint8_t_u_u(l_149[1], 1L));
        }
        l_322++;
        (*l_325) = (void*)0;
        (*p_564->g_283) = (((*l_193) = ((l_359 &= ((safe_sub_func_int32_t_s_s(((-1L) && (((p_564->g_330[0][4][0] ^= p_564->g_299) , (void*)0) == l_331)), ((((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u(65530UL, ((65532UL < ((safe_lshift_func_int16_t_s_s((+((safe_mul_func_int16_t_s_s(((++(*l_341)) && (((*l_186)--) <= (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((((*l_350) = &p_564->g_288) == l_352), ((((((safe_sub_func_uint8_t_u_u(((((*l_87) <= p_76) <= p_77) ^ p_78), p_564->g_115[1][0])) > p_78) , p_76) | 0x353EA8B326D28A6EL) < p_78) || p_77))), 9)))), p_76)) ^ p_76)), 14)) || 0x35L)) && p_78))) >= 1L), p_564->g_263)) , 0x15C263F2L) , l_341) == l_355))) > p_78)) , (**p_564->g_163))) , p_78);
    }
    (*p_564->g_283) = (((0x6207L >= (*p_564->g_81)) < (((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((p_77 <= (((safe_rshift_func_int8_t_s_s(l_322, (safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((!((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((*p_75) = (p_564->g_47 ^ (((safe_lshift_func_int8_t_s_s((safe_div_func_int64_t_s_s((!(safe_mod_func_uint16_t_u_u((*p_564->g_81), ((*l_193) = ((safe_rshift_func_int16_t_s_s((((p_564->g_387 = (0L & (((*l_331) = (*l_331)) != p_564->g_386))) ^ p_78) , 0x4605L), p_564->g_124)) && p_564->g_388))))), p_77)), 7)) < p_77) || p_564->g_115[0][0]))), p_564->g_82[4][0][4])), p_564->g_330[0][4][0])) <= (-1L))), (*p_564->g_81))), p_564->g_94)), 1L)) < (*p_564->g_81)), 5UL)))) && p_564->g_389) == p_564->g_389)), (*p_564->g_81))), l_143)) < l_390) , 4294967295UL)) , 0x5A2B6227L);
    (*p_564->g_392) = l_391;
    return p_76;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_565;
    struct S1* p_564 = &c_565;
    struct S1 c_566 = {
        0L, // p_564->g_5
        0x624B6749L, // p_564->g_32
        {0x4087B332L}, // p_564->g_44
        0x563ADE45L, // p_564->g_45
        {0x72C2E8B5L}, // p_564->g_46
        0x411E69D0L, // p_564->g_47
        (-1L), // p_564->g_48
        {0x2A227283L,0x2A227283L,0x2A227283L,0x2A227283L,0x2A227283L,0x2A227283L}, // p_564->g_49
        0x61CF2BBAL, // p_564->g_52
        7UL, // p_564->g_67
        4294967289UL, // p_564->g_73
        {{{0x4D02L,65534UL,65534UL,0x4D02L,1UL,0x98E5L,0x98E5L,1UL,0x4D02L,65534UL},{0x4D02L,65534UL,65534UL,0x4D02L,1UL,0x98E5L,0x98E5L,1UL,0x4D02L,65534UL}},{{0x4D02L,65534UL,65534UL,0x4D02L,1UL,0x98E5L,0x98E5L,1UL,0x4D02L,65534UL},{0x4D02L,65534UL,65534UL,0x4D02L,1UL,0x98E5L,0x98E5L,1UL,0x4D02L,65534UL}},{{0x4D02L,65534UL,65534UL,0x4D02L,1UL,0x98E5L,0x98E5L,1UL,0x4D02L,65534UL},{0x4D02L,65534UL,65534UL,0x4D02L,1UL,0x98E5L,0x98E5L,1UL,0x4D02L,65534UL}},{{0x4D02L,65534UL,65534UL,0x4D02L,1UL,0x98E5L,0x98E5L,1UL,0x4D02L,65534UL},{0x4D02L,65534UL,65534UL,0x4D02L,1UL,0x98E5L,0x98E5L,1UL,0x4D02L,65534UL}},{{0x4D02L,65534UL,65534UL,0x4D02L,1UL,0x98E5L,0x98E5L,1UL,0x4D02L,65534UL},{0x4D02L,65534UL,65534UL,0x4D02L,1UL,0x98E5L,0x98E5L,1UL,0x4D02L,65534UL}},{{0x4D02L,65534UL,65534UL,0x4D02L,1UL,0x98E5L,0x98E5L,1UL,0x4D02L,65534UL},{0x4D02L,65534UL,65534UL,0x4D02L,1UL,0x98E5L,0x98E5L,1UL,0x4D02L,65534UL}},{{0x4D02L,65534UL,65534UL,0x4D02L,1UL,0x98E5L,0x98E5L,1UL,0x4D02L,65534UL},{0x4D02L,65534UL,65534UL,0x4D02L,1UL,0x98E5L,0x98E5L,1UL,0x4D02L,65534UL}}}, // p_564->g_82
        &p_564->g_82[3][1][6], // p_564->g_81
        (void*)0, // p_564->g_88
        2L, // p_564->g_94
        {{0x34AAL},{0x34AAL}}, // p_564->g_115
        0x4AL, // p_564->g_124
        {2UL}, // p_564->g_125
        2L, // p_564->g_165
        &p_564->g_165, // p_564->g_164
        &p_564->g_164, // p_564->g_163
        &p_564->g_125.f0, // p_564->g_240
        0x174E8299416B4806L, // p_564->g_254
        0L, // p_564->g_263
        {0x34851EF81353EE15L}, // p_564->g_265
        0xB30AL, // p_564->g_274
        &p_564->g_48, // p_564->g_283
        &p_564->g_283, // p_564->g_282
        {18446744073709551613UL}, // p_564->g_288
        {{&p_564->g_73,&p_564->g_73,&p_564->g_73,&p_564->g_73},{&p_564->g_73,&p_564->g_73,&p_564->g_73,&p_564->g_73},{&p_564->g_73,&p_564->g_73,&p_564->g_73,&p_564->g_73}}, // p_564->g_290
        &p_564->g_290[0][3], // p_564->g_289
        (void*)0, // p_564->g_291
        &p_564->g_289, // p_564->g_292
        4UL, // p_564->g_299
        {{{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L}},{{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L}},{{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L}},{{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L}},{{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L}},{{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L},{0xC9A7F4A1E99C80B2L}}}, // p_564->g_330
        (void*)0, // p_564->g_386
        0x69L, // p_564->g_387
        0x72L, // p_564->g_388
        6UL, // p_564->g_389
        0x6EDB600DA550092BL, // p_564->g_395
        &p_564->g_395, // p_564->g_394
        &p_564->g_394, // p_564->g_393
        &p_564->g_393, // p_564->g_392
        {18446744073709551615UL}, // p_564->g_404
        &p_564->g_404, // p_564->g_403
        (void*)0, // p_564->g_406
        {7UL}, // p_564->g_408
        &p_564->g_408, // p_564->g_407
        {0L,0L,0L,0L}, // p_564->g_445
        {(void*)0,(void*)0,(void*)0}, // p_564->g_450
        {{&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[1],&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[0],(void*)0},{&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[1],&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[0],(void*)0},{&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[1],&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[0],(void*)0},{&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[1],&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[0],(void*)0},{&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[1],&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[0],(void*)0},{&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[1],&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[0],(void*)0},{&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[1],&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[0],(void*)0},{&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[1],&p_564->g_450[0],&p_564->g_450[0],&p_564->g_450[0],(void*)0}}, // p_564->g_449
        &p_564->g_450[2], // p_564->g_451
        &p_564->g_450[0], // p_564->g_452
        4294967295UL, // p_564->g_475
        &p_564->g_450[2], // p_564->g_482
        0x4B506A3AL, // p_564->g_526
        &p_564->g_283, // p_564->g_560
        &p_564->g_450[1], // p_564->g_561
    };
    c_565 = c_566;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_564);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_564->g_5, "p_564->g_5", print_hash_value);
    transparent_crc(p_564->g_32, "p_564->g_32", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_564->g_44[i], "p_564->g_44[i]", print_hash_value);

    }
    transparent_crc(p_564->g_45, "p_564->g_45", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_564->g_46[i], "p_564->g_46[i]", print_hash_value);

    }
    transparent_crc(p_564->g_47, "p_564->g_47", print_hash_value);
    transparent_crc(p_564->g_48, "p_564->g_48", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_564->g_49[i], "p_564->g_49[i]", print_hash_value);

    }
    transparent_crc(p_564->g_52, "p_564->g_52", print_hash_value);
    transparent_crc(p_564->g_67, "p_564->g_67", print_hash_value);
    transparent_crc(p_564->g_73, "p_564->g_73", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_564->g_82[i][j][k], "p_564->g_82[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_564->g_94, "p_564->g_94", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_564->g_115[i][j], "p_564->g_115[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_564->g_124, "p_564->g_124", print_hash_value);
    transparent_crc(p_564->g_125.f0, "p_564->g_125.f0", print_hash_value);
    transparent_crc(p_564->g_165, "p_564->g_165", print_hash_value);
    transparent_crc(p_564->g_254, "p_564->g_254", print_hash_value);
    transparent_crc(p_564->g_263, "p_564->g_263", print_hash_value);
    transparent_crc(p_564->g_265.f0, "p_564->g_265.f0", print_hash_value);
    transparent_crc(p_564->g_274, "p_564->g_274", print_hash_value);
    transparent_crc(p_564->g_288.f0, "p_564->g_288.f0", print_hash_value);
    transparent_crc(p_564->g_299, "p_564->g_299", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_564->g_330[i][j][k], "p_564->g_330[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_564->g_387, "p_564->g_387", print_hash_value);
    transparent_crc(p_564->g_388, "p_564->g_388", print_hash_value);
    transparent_crc(p_564->g_389, "p_564->g_389", print_hash_value);
    transparent_crc(p_564->g_395, "p_564->g_395", print_hash_value);
    transparent_crc(p_564->g_404.f0, "p_564->g_404.f0", print_hash_value);
    transparent_crc(p_564->g_408.f0, "p_564->g_408.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_564->g_445[i], "p_564->g_445[i]", print_hash_value);

    }
    transparent_crc(p_564->g_475, "p_564->g_475", print_hash_value);
    transparent_crc(p_564->g_526, "p_564->g_526", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
