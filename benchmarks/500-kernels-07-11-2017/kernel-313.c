// -g 19,81,1 -l 19,9,1
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


// Seed: 592482448

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   int8_t  f1;
   uint8_t  f2;
   volatile uint32_t  f3;
};

union U1 {
   int32_t  f0;
   int64_t  f1;
};

struct S2 {
    int32_t g_6;
    int32_t *g_8;
    int32_t ** volatile g_7;
    int32_t g_27[1];
    int32_t g_38;
    volatile uint32_t g_45;
    union U0 g_83[3];
    uint64_t g_94;
    uint32_t g_110;
    int8_t g_124;
    int32_t * volatile g_125[2][3];
    int32_t * volatile g_126;
    uint64_t g_163[1][1];
    int16_t g_166;
    uint64_t g_169;
    int64_t g_187;
    uint16_t g_190;
    int16_t g_196;
    int32_t ** volatile g_210;
    volatile union U1 * volatile g_211;
    volatile union U1 * volatile * volatile g_212;
    int16_t g_228[4];
    uint32_t g_230[7][10][3];
    uint8_t *g_250;
    uint8_t g_254;
    int32_t *g_264;
    int32_t ** volatile g_263;
    uint16_t g_282[7];
    int32_t g_283;
    union U0 *g_290;
    union U1 g_304;
    uint32_t g_327;
    union U0 **g_342;
    uint16_t *g_364;
    uint16_t **g_363[6][7][3];
    union U0 g_365;
    int64_t g_466;
    uint8_t ***g_476;
    int32_t ** volatile g_515[2];
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S2 * p_519);
int32_t * func_13(uint32_t  p_14, int32_t ** p_15, int64_t  p_16, struct S2 * p_519);
uint8_t  func_17(int32_t ** p_18, int32_t * p_19, struct S2 * p_519);
int32_t ** func_20(uint64_t  p_21, int64_t  p_22, uint32_t  p_23, int32_t * p_24, int32_t ** p_25, struct S2 * p_519);
union U0 * func_28(int16_t  p_29, union U0 * p_30, struct S2 * p_519);
union U0 * func_31(int32_t ** p_32, uint8_t  p_33, int32_t  p_34, int32_t ** p_35, struct S2 * p_519);
int8_t  func_50(uint32_t  p_51, int8_t  p_52, uint32_t  p_53, int64_t  p_54, struct S2 * p_519);
int16_t  func_57(int8_t  p_58, uint64_t  p_59, int8_t  p_60, struct S2 * p_519);
int16_t  func_63(int8_t  p_64, uint32_t  p_65, union U1  p_66, int64_t  p_67, struct S2 * p_519);
int8_t  func_68(int16_t  p_69, int32_t * p_70, uint32_t  p_71, int32_t  p_72, int32_t * p_73, struct S2 * p_519);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_519->g_7 p_519->g_6 p_519->g_8 p_519->g_342 p_519->g_290 p_519->g_83 p_519->g_230 p_519->g_125 p_519->g_190 p_519->g_264 p_519->g_38 p_519->g_210 p_519->g_327 p_519->g_476 p_519->g_282 p_519->g_110 p_519->g_304 p_519->g_27 p_519->g_228 p_519->g_212 p_519->g_211
 * writes: p_519->g_8 p_519->g_254 p_519->g_327 p_519->g_282 p_519->g_365.f2 p_519->g_38 p_519->g_83 p_519->g_187 p_519->g_476 p_519->g_166 p_519->g_190 p_519->g_304.f0 p_519->g_6 p_519->g_228 p_519->g_264
 */
uint64_t  func_1(struct S2 * p_519)
{ /* block id: 4 */
    int8_t l_2 = 0x26L;
    uint32_t l_418 = 1UL;
    int32_t l_423[1];
    union U1 *l_447 = &p_519->g_304;
    uint8_t l_493[5];
    uint64_t l_517[8][10][1] = {{{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL}},{{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL}},{{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL}},{{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL}},{{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL}},{{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL}},{{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL}},{{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL},{18446744073709551613UL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_423[i] = 0x190F09F6L;
    for (i = 0; i < 5; i++)
        l_493[i] = 1UL;
lbl_518:
    if (l_2)
    { /* block id: 5 */
        uint32_t l_26 = 4294967286UL;
        int32_t l_407 = 0x049B00E6L;
        int32_t l_431[4][2] = {{0x7728D24CL,0x2257BD63L},{0x7728D24CL,0x2257BD63L},{0x7728D24CL,0x2257BD63L},{0x7728D24CL,0x2257BD63L}};
        int i, j;
        for (l_2 = (-24); (l_2 != 13); l_2 = safe_add_func_int16_t_s_s(l_2, 5))
        { /* block id: 8 */
            int32_t *l_5 = &p_519->g_6;
            int32_t **l_373 = &p_519->g_8;
            int32_t ***l_372 = &l_373;
            int32_t **l_406 = &l_5;
            (*p_519->g_7) = l_5;
            (*p_519->g_264) = (l_407 &= ((1UL <= (safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u((((*l_406) = ((*p_519->g_210) = func_13(p_519->g_6, &p_519->g_8, (((18446744073709551612UL | p_519->g_6) < ((p_519->g_6 | 1UL) != 0L)) == func_17(((*l_372) = func_20(l_26, p_519->g_6, (*l_5), l_5, &p_519->g_8, p_519)), (*p_519->g_7), p_519)), p_519))) != &p_519->g_6), l_26)) & 0L), 4))) , l_26));
            if (l_407)
                break;
        }
        (*p_519->g_264) = l_2;
    }
    else
    { /* block id: 275 */
        return p_519->g_327;
    }
    for (p_519->g_38 = 0; (p_519->g_38 > (-24)); p_519->g_38 = safe_sub_func_int64_t_s_s(p_519->g_38, 2))
    { /* block id: 280 */
        uint8_t ***l_474 = (void*)0;
        int32_t l_475 = 1L;
        int8_t *l_497[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        union U1 **l_502 = &l_447;
        union U1 *l_504 = &p_519->g_304;
        union U1 **l_503 = &l_504;
        int16_t *l_511 = &p_519->g_228[1];
        uint32_t *l_512 = &p_519->g_230[4][5][2];
        int i;
        for (p_519->g_187 = (-30); (p_519->g_187 <= (-3)); p_519->g_187++)
        { /* block id: 283 */
            uint8_t ****l_477 = &p_519->g_476;
            uint8_t *l_478 = &p_519->g_365.f2;
            int16_t *l_483 = &p_519->g_166;
            uint16_t *l_486 = (void*)0;
            uint16_t *l_487 = &p_519->g_190;
            union U0 ****l_490 = (void*)0;
            union U0 ***l_492 = &p_519->g_342;
            union U0 ****l_491 = &l_492;
            int16_t *l_494[1][5][7] = {{{(void*)0,&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196,(void*)0},{(void*)0,&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196,(void*)0},{(void*)0,&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196,(void*)0},{(void*)0,&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196,(void*)0},{(void*)0,&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196,(void*)0}}};
            int16_t l_495[5] = {0x2146L,0x2146L,0x2146L,0x2146L,0x2146L};
            int32_t l_496 = 0x280B8F6FL;
            int i, j, k;
            l_475 = (((*l_478) = (safe_lshift_func_uint16_t_u_u((l_474 != ((*l_477) = (l_475 , p_519->g_476))), 1))) > ((l_495[1] = (safe_sub_func_int32_t_s_s((l_493[3] = (safe_sub_func_int16_t_s_s(((((*l_483) = p_519->g_282[0]) <= (((0x097FFD16L <= (((*l_487)++) < p_519->g_110)) < (((*l_447) , &p_519->g_342) == ((*l_491) = &p_519->g_342))) , l_423[0])) >= 4294967295UL), p_519->g_27[0]))), l_475))) >= l_496));
        }
        (*p_519->g_8) = ((l_423[0] = l_493[3]) & p_519->g_228[1]);
        l_423[0] &= (safe_mod_func_uint32_t_u_u(((((((*l_511) = ((safe_lshift_func_int8_t_s_u(((0L == (((*l_503) = ((*l_502) = l_447)) != (*p_519->g_212))) | (safe_rshift_func_int16_t_s_s((((void*)0 != &p_519->g_124) != (0x10L | ((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(((0x2C5EL | l_475) , (-1L)), (-10L))), 3)) <= 0x61D4E597F0CCF32BL))), p_519->g_282[3]))), 5)) > l_493[2])) >= l_493[4]) , l_512) == (void*)0) , 7UL), (*p_519->g_264)));
    }
    for (l_418 = 27; (l_418 >= 20); l_418--)
    { /* block id: 302 */
        int32_t **l_516 = &p_519->g_264;
        (*l_516) = (*p_519->g_210);
        return l_517[2][4][0];
    }
    if (p_519->g_6)
        goto lbl_518;
    return l_493[3];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_13(uint32_t  p_14, int32_t ** p_15, int64_t  p_16, struct S2 * p_519)
{ /* block id: 215 */
    uint16_t l_402 = 0x8C84L;
    int32_t *l_405 = &p_519->g_304.f0;
    l_402++;
    return l_405;
}


/* ------------------------------------------ */
/* 
 * reads : p_519->g_254 p_519->g_342 p_519->g_290 p_519->g_83 p_519->g_230 p_519->g_125 p_519->g_6 p_519->g_190 p_519->g_264 p_519->g_38
 * writes: p_519->g_254 p_519->g_327 p_519->g_282 p_519->g_365.f2 p_519->g_38 p_519->g_83
 */
uint8_t  func_17(int32_t ** p_18, int32_t * p_19, struct S2 * p_519)
{ /* block id: 202 */
    uint16_t *l_384 = &p_519->g_282[0];
    int32_t l_386 = (-8L);
    int8_t *l_389 = (void*)0;
    int32_t l_396 = 0x33C505BFL;
    int16_t l_397 = 0x5730L;
    int32_t l_398[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
    uint64_t l_399 = 0x9B0F3FEBD9CC5EBAL;
    int i;
    for (p_519->g_254 = 0; (p_519->g_254 < 28); p_519->g_254++)
    { /* block id: 205 */
        uint16_t *l_385 = &p_519->g_282[0];
        uint32_t *l_387[2];
        uint64_t l_388 = 18446744073709551606UL;
        uint8_t *l_390 = &p_519->g_365.f2;
        int8_t l_391 = 0x05L;
        int32_t *l_392 = &l_386;
        int32_t *l_393 = &l_386;
        int32_t l_394 = 0x4DFA43F4L;
        int32_t *l_395[3];
        int i;
        for (i = 0; i < 2; i++)
            l_387[i] = &p_519->g_230[2][5][1];
        for (i = 0; i < 3; i++)
            l_395[i] = &p_519->g_38;
        (*p_519->g_264) ^= ((safe_sub_func_uint8_t_u_u(((**p_519->g_342) , ((*l_390) = (((safe_unary_minus_func_int8_t_s(p_519->g_230[4][5][2])) && (((((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((safe_div_func_uint32_t_u_u((l_384 == l_385), (p_519->g_327 = l_386))))), ((*l_384) = l_388))) , ((void*)0 != p_519->g_125[1][2])) < (((0x6BEA63802CE8FD7EL & p_519->g_6) , l_389) != &p_519->g_124)) || l_388) , 0x7027L)) ^ p_519->g_190))), l_386)) ^ l_388);
        if (l_391)
            break;
        for (p_519->g_365.f2 = 0; p_519->g_365.f2 < 3; p_519->g_365.f2 += 1)
        {
            union U0 tmp = {{-1L}};
            p_519->g_83[p_519->g_365.f2] = tmp;
        }
        l_399--;
    }
    return l_397;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_20(uint64_t  p_21, int64_t  p_22, uint32_t  p_23, int32_t * p_24, int32_t ** p_25, struct S2 * p_519)
{ /* block id: 10 */
    int32_t **l_36 = &p_519->g_8;
    for (p_22 = 0; (p_22 <= 0); p_22 += 1)
    { /* block id: 13 */
        int i;
        (1 + 1);
    }
    return l_36;
}


/* ------------------------------------------ */
/* 
 * reads : p_519->g_38 p_519->g_94 p_519->g_163 p_519->g_27 p_519->g_6 p_519->g_8 p_519->g_190 p_519->g_166 p_519->g_110 p_519->g_304.f1 p_519->g_264 p_519->g_126
 * writes: p_519->g_187 p_519->g_190 p_519->g_166 p_519->g_38 p_519->g_110 p_519->g_94 p_519->g_304.f1
 */
union U0 * func_28(int16_t  p_29, union U0 * p_30, struct S2 * p_519)
{ /* block id: 64 */
    int64_t *l_186[5];
    int32_t l_188 = (-8L);
    uint16_t *l_189 = &p_519->g_190;
    int32_t l_191 = 1L;
    int16_t *l_192 = (void*)0;
    int16_t *l_193 = &p_519->g_166;
    int16_t *l_194 = (void*)0;
    int16_t *l_195[1][9] = {{&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196,&p_519->g_196}};
    int32_t l_197 = 0x0154E251L;
    int64_t l_272 = 0L;
    union U1 l_284 = {5L};
    uint64_t l_294 = 0x4462B6A1B3597BFAL;
    uint16_t l_326 = 0x33FCL;
    int32_t l_354 = (-1L);
    union U0 *l_368 = &p_519->g_83[0];
    int i, j;
    for (i = 0; i < 5; i++)
        l_186[i] = &p_519->g_187;
    (*p_519->g_8) = ((safe_add_func_uint32_t_u_u(p_519->g_38, p_519->g_94)) | ((((safe_mul_func_int16_t_s_s((((p_519->g_163[0][0] , 0x09L) && 2UL) > (((safe_lshift_func_int16_t_s_s((l_191 = ((p_519->g_27[0] | (safe_mod_func_uint64_t_u_u((((*l_193) |= ((((*l_189) &= (((safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_u((((((p_29 , (p_519->g_187 = p_519->g_6)) ^ (l_188 &= ((p_519->g_163[0][0] <= 65528UL) ^ 7UL))) >= 4294967295UL) , (-1L)) & p_29), 8)) < p_29) > (*p_519->g_8)), 3)) | p_29) & 0x0AB0L)) < p_29) & l_191)) , 18446744073709551613UL), p_29))) , l_191)), l_197)) | 0x1BL) != l_197)), 0x6B9EL)) , p_519->g_94) , l_188) >= p_519->g_94));
    for (p_519->g_110 = 0; (p_519->g_110 <= 2); p_519->g_110 += 1)
    { /* block id: 73 */
        uint32_t l_201[4];
        uint64_t *l_208 = &p_519->g_163[0][0];
        int32_t l_231 = (-6L);
        int16_t l_233[1][3];
        int32_t l_234 = 0x28862E0CL;
        uint8_t *l_253 = &p_519->g_254;
        uint16_t *l_332 = &p_519->g_282[3];
        int i, j;
        for (i = 0; i < 4; i++)
            l_201[i] = 0xB4AE9B51L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_233[i][j] = 0x77DDL;
        }
        for (p_519->g_94 = 0; (p_519->g_94 <= 2); p_519->g_94 += 1)
        { /* block id: 76 */
            uint8_t l_206 = 6UL;
            int64_t *l_219 = (void*)0;
            union U0 *l_223 = &p_519->g_83[2];
            int32_t l_227 = (-9L);
            int32_t l_232 = (-1L);
            int8_t l_259[7] = {4L,4L,4L,4L,4L,4L,4L};
            uint8_t l_349 = 0xB4L;
            uint32_t l_366 = 4294967286UL;
            int32_t *l_367 = &p_519->g_27[0];
            int i;
            (1 + 1);
        }
        for (p_519->g_304.f1 = 0; (p_519->g_304.f1 <= 0); p_519->g_304.f1 += 1)
        { /* block id: 189 */
            (*p_519->g_264) = 0x1B8B5A0EL;
        }
        if ((*p_519->g_126))
            break;
    }
    return l_368;
}


/* ------------------------------------------ */
/* 
 * reads : p_519->g_45 p_519->g_27 p_519->g_6 p_519->g_38 p_519->g_7 p_519->g_8 p_519->g_94 p_519->g_110 p_519->g_124 p_519->g_83.f0 p_519->g_163 p_519->g_169
 * writes: p_519->g_45 p_519->g_8 p_519->g_94 p_519->g_38 p_519->g_163 p_519->g_166 p_519->g_83.f2 p_519->g_169
 */
union U0 * func_31(int32_t ** p_32, uint8_t  p_33, int32_t  p_34, int32_t ** p_35, struct S2 * p_519)
{ /* block id: 14 */
    int32_t *l_37 = &p_519->g_38;
    int32_t *l_39 = &p_519->g_38;
    int32_t *l_40 = &p_519->g_38;
    int32_t *l_41 = &p_519->g_38;
    int32_t *l_42 = &p_519->g_38;
    int32_t *l_43 = &p_519->g_38;
    int32_t *l_44[2];
    int32_t *l_74[10][3] = {{(void*)0,&p_519->g_38,&p_519->g_6},{(void*)0,&p_519->g_38,&p_519->g_6},{(void*)0,&p_519->g_38,&p_519->g_6},{(void*)0,&p_519->g_38,&p_519->g_6},{(void*)0,&p_519->g_38,&p_519->g_6},{(void*)0,&p_519->g_38,&p_519->g_6},{(void*)0,&p_519->g_38,&p_519->g_6},{(void*)0,&p_519->g_38,&p_519->g_6},{(void*)0,&p_519->g_38,&p_519->g_6},{(void*)0,&p_519->g_38,&p_519->g_6}};
    union U0 *l_82 = &p_519->g_83[2];
    union U1 l_86 = {0x3AC3F408L};
    int8_t *l_127 = (void*)0;
    int8_t *l_128[3];
    uint16_t l_129 = 0xB163L;
    uint32_t *l_158 = &p_519->g_110;
    uint32_t **l_159 = (void*)0;
    uint32_t **l_160 = &l_158;
    int8_t l_164 = 0x0CL;
    int16_t *l_165 = &p_519->g_166;
    uint8_t *l_167[7];
    uint64_t l_168 = 18446744073709551615UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_44[i] = &p_519->g_38;
    for (i = 0; i < 3; i++)
        l_128[i] = &p_519->g_124;
    for (i = 0; i < 7; i++)
        l_167[i] = &p_519->g_83[2].f2;
    ++p_519->g_45;
    (*l_41) = (safe_mod_func_int8_t_s_s(func_50(p_519->g_27[0], (l_129 = (safe_mul_func_int16_t_s_s(func_57((((p_519->g_6 | p_519->g_27[0]) , ((safe_lshift_func_int16_t_s_s(func_63(((func_68(p_34, l_74[1][0], ((safe_rshift_func_int8_t_s_s((((0x64F69674L == 0L) & (safe_unary_minus_func_uint64_t_u((safe_mod_func_int8_t_s_s(((void*)0 == l_82), 0x51L))))) <= p_34), 5)) < p_519->g_6), (*l_41), (*p_519->g_7), p_519) , (void*)0) == l_82), p_34, l_86, p_519->g_6, p_519), 14)) & p_519->g_110)) < 0xDCB7496171667F30L), p_519->g_110, p_519->g_124, p_519), p_519->g_83[2].f0))), p_33, p_34, p_519), 1L));
    p_519->g_169 ^= ((safe_add_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(((l_41 = (*p_35)) != (void*)0), 5)), (safe_add_func_int64_t_s_s((((*l_39) , p_33) > ((safe_div_func_int64_t_s_s((+((p_519->g_83[2].f2 = ((((*l_165) = ((((safe_sub_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(((((safe_mul_func_uint16_t_u_u(1UL, ((((p_33 , (safe_sub_func_int64_t_s_s((((((safe_mul_func_int16_t_s_s((p_519->g_163[0][0] = (p_519->g_38 | ((((*l_160) = l_158) != ((((safe_div_func_uint32_t_u_u(((p_34 && p_519->g_124) && 0x5D022AC7L), p_34)) >= p_34) != p_519->g_124) , l_39)) | 0UL))), p_519->g_110)) <= p_34) , 0x105C8CF0L) > (**p_35)) >= p_519->g_110), 0x35975D7C08194481L))) != l_164) && 0xE451L) & (*l_40)))) > p_33) , p_519->g_163[0][0]) < (*l_43)), 9L)), p_34)), 3)), (**p_32))) || 0x2EL), (*l_37))) != p_519->g_94) > 0x7EL) , 0x1A3BL)) && 0x29CEL) | (**p_519->g_7))) != 0x36L)), (*l_40))) != 1L)), l_168)))), p_33)) > p_34) && 0x26L), (-5L))) , (**p_32));
    (*p_519->g_7) = (*p_32);
    return l_82;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_50(uint32_t  p_51, int8_t  p_52, uint32_t  p_53, int64_t  p_54, struct S2 * p_519)
{ /* block id: 53 */
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_519->g_38
 * writes:
 */
int16_t  func_57(int8_t  p_58, uint64_t  p_59, int8_t  p_60, struct S2 * p_519)
{ /* block id: 50 */
    return p_519->g_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_519->g_8 p_519->g_38 p_519->g_7 p_519->g_27 p_519->g_94 p_519->g_6
 * writes: p_519->g_94 p_519->g_38
 */
int16_t  func_63(int8_t  p_64, uint32_t  p_65, union U1  p_66, int64_t  p_67, struct S2 * p_519)
{ /* block id: 19 */
    uint32_t l_87 = 0x03168F1DL;
    int32_t l_105 = 0x2C5A173FL;
    uint64_t *l_108 = (void*)0;
    l_87--;
    for (p_65 = 0; (p_65 <= 2); p_65 += 1)
    { /* block id: 23 */
        uint32_t l_92[8][7] = {{6UL,0x1C1BBB80L,0UL,0x1C1BBB80L,6UL,6UL,0x1C1BBB80L},{6UL,0x1C1BBB80L,0UL,0x1C1BBB80L,6UL,6UL,0x1C1BBB80L},{6UL,0x1C1BBB80L,0UL,0x1C1BBB80L,6UL,6UL,0x1C1BBB80L},{6UL,0x1C1BBB80L,0UL,0x1C1BBB80L,6UL,6UL,0x1C1BBB80L},{6UL,0x1C1BBB80L,0UL,0x1C1BBB80L,6UL,6UL,0x1C1BBB80L},{6UL,0x1C1BBB80L,0UL,0x1C1BBB80L,6UL,6UL,0x1C1BBB80L},{6UL,0x1C1BBB80L,0UL,0x1C1BBB80L,6UL,6UL,0x1C1BBB80L},{6UL,0x1C1BBB80L,0UL,0x1C1BBB80L,6UL,6UL,0x1C1BBB80L}};
        int i, j;
        if ((*p_519->g_8))
            break;
        for (p_64 = 0; (p_64 <= 2); p_64 += 1)
        { /* block id: 27 */
            uint64_t *l_93[1][5] = {{&p_519->g_94,&p_519->g_94,&p_519->g_94,&p_519->g_94,&p_519->g_94}};
            int i, j;
            if ((**p_519->g_7))
                break;
            (*p_519->g_8) |= (safe_div_func_int8_t_s_s((l_92[3][4] >= (p_519->g_94 ^= p_519->g_27[0])), p_66.f0));
            (*p_519->g_8) = (((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(p_66.f0, 12)), (0x7EL >= 1UL))), 0)) >= p_67) | ((l_105 = (((safe_div_func_int16_t_s_s(l_87, (p_519->g_94 ^ ((safe_mul_func_uint16_t_u_u((p_67 >= (p_67 < ((0x09L | p_64) , p_519->g_6))), p_64)) , (-3L))))) >= 0x4120L) , l_92[2][0])) && 0x733D3A0D67432329L));
        }
        if (p_65)
            continue;
    }
    for (l_105 = (-4); (l_105 > (-3)); l_105 = safe_add_func_int32_t_s_s(l_105, 6))
    { /* block id: 38 */
        uint32_t *l_109 = &p_519->g_110;
        int32_t **l_113 = &p_519->g_8;
        int32_t *l_120[4] = {&p_519->g_83[2].f0,&p_519->g_83[2].f0,&p_519->g_83[2].f0,&p_519->g_83[2].f0};
        int8_t l_121 = 1L;
        int8_t *l_122 = &l_121;
        int8_t *l_123 = &p_519->g_124;
        int i;
        (1 + 1);
    }
    return l_105;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_519->g_8
 */
int8_t  func_68(int16_t  p_69, int32_t * p_70, uint32_t  p_71, int32_t  p_72, int32_t * p_73, struct S2 * p_519)
{ /* block id: 16 */
    int32_t *l_84 = &p_519->g_38;
    int32_t **l_85 = &p_519->g_8;
    (*l_85) = l_84;
    return p_71;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_520;
    struct S2* p_519 = &c_520;
    struct S2 c_521 = {
        8L, // p_519->g_6
        &p_519->g_6, // p_519->g_8
        &p_519->g_8, // p_519->g_7
        {0x637B3047L}, // p_519->g_27
        1L, // p_519->g_38
        1UL, // p_519->g_45
        {{-1L},{-1L},{-1L}}, // p_519->g_83
        0xBA864CC4390AC9F7L, // p_519->g_94
        0xCD3E82D7L, // p_519->g_110
        0L, // p_519->g_124
        {{&p_519->g_38,(void*)0,&p_519->g_38},{&p_519->g_38,(void*)0,&p_519->g_38}}, // p_519->g_125
        &p_519->g_38, // p_519->g_126
        {{0x56B4AE7F92F19563L}}, // p_519->g_163
        0x63EAL, // p_519->g_166
        0x601976A6A2F9622FL, // p_519->g_169
        9L, // p_519->g_187
        0x1BADL, // p_519->g_190
        0x637CL, // p_519->g_196
        &p_519->g_8, // p_519->g_210
        (void*)0, // p_519->g_211
        &p_519->g_211, // p_519->g_212
        {0x0834L,0x0834L,0x0834L,0x0834L}, // p_519->g_228
        {{{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL}},{{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL}},{{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL}},{{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL}},{{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL}},{{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL}},{{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL},{4294967291UL,8UL,0UL}}}, // p_519->g_230
        (void*)0, // p_519->g_250
        0UL, // p_519->g_254
        &p_519->g_38, // p_519->g_264
        &p_519->g_264, // p_519->g_263
        {0x1C7DL,0x813BL,0x1C7DL,0x1C7DL,0x813BL,0x1C7DL,0x1C7DL}, // p_519->g_282
        1L, // p_519->g_283
        &p_519->g_83[2], // p_519->g_290
        {-1L}, // p_519->g_304
        4294967293UL, // p_519->g_327
        &p_519->g_290, // p_519->g_342
        (void*)0, // p_519->g_364
        {{{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364}},{{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364}},{{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364}},{{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364}},{{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364}},{{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364},{&p_519->g_364,&p_519->g_364,&p_519->g_364}}}, // p_519->g_363
        {0x41BFAFFBL}, // p_519->g_365
        (-1L), // p_519->g_466
        (void*)0, // p_519->g_476
        {&p_519->g_8,&p_519->g_8}, // p_519->g_515
    };
    c_520 = c_521;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_519);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_519->g_6, "p_519->g_6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_519->g_27[i], "p_519->g_27[i]", print_hash_value);

    }
    transparent_crc(p_519->g_38, "p_519->g_38", print_hash_value);
    transparent_crc(p_519->g_45, "p_519->g_45", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_519->g_83[i].f0, "p_519->g_83[i].f0", print_hash_value);

    }
    transparent_crc(p_519->g_94, "p_519->g_94", print_hash_value);
    transparent_crc(p_519->g_110, "p_519->g_110", print_hash_value);
    transparent_crc(p_519->g_124, "p_519->g_124", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_519->g_163[i][j], "p_519->g_163[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_519->g_166, "p_519->g_166", print_hash_value);
    transparent_crc(p_519->g_169, "p_519->g_169", print_hash_value);
    transparent_crc(p_519->g_187, "p_519->g_187", print_hash_value);
    transparent_crc(p_519->g_190, "p_519->g_190", print_hash_value);
    transparent_crc(p_519->g_196, "p_519->g_196", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_519->g_228[i], "p_519->g_228[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_519->g_230[i][j][k], "p_519->g_230[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_519->g_254, "p_519->g_254", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_519->g_282[i], "p_519->g_282[i]", print_hash_value);

    }
    transparent_crc(p_519->g_283, "p_519->g_283", print_hash_value);
    transparent_crc(p_519->g_327, "p_519->g_327", print_hash_value);
    transparent_crc(p_519->g_466, "p_519->g_466", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
