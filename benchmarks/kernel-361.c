// --atomics 1 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 26,7,21 -l 2,1,1
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

__constant uint32_t permutations[10][2] = {
{1,0}, // permutation 0
{1,0}, // permutation 1
{1,0}, // permutation 2
{1,0}, // permutation 3
{1,0}, // permutation 4
{1,0}, // permutation 5
{1,0}, // permutation 6
{1,0}, // permutation 7
{1,0}, // permutation 8
{1,0} // permutation 9
};

// Seed: 2150316323

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_14;
    int32_t g_26;
    int16_t g_118;
    int32_t *g_123;
    int32_t ** volatile g_122;
    uint16_t g_127;
    VECTOR(uint64_t, 8) g_139;
    int32_t g_158;
    int32_t g_160;
    uint32_t g_163[3];
    uint16_t g_188;
    int64_t g_193[2];
    volatile int16_t g_194;
    volatile uint64_t g_195[2];
    int32_t ** volatile g_199;
    int8_t g_204;
    int64_t g_205;
    int64_t *g_225[9];
    int32_t g_227;
    volatile VECTOR(uint8_t, 4) g_242;
    int32_t * volatile g_252;
    int32_t * volatile g_253;
    VECTOR(uint16_t, 4) g_261;
    volatile VECTOR(uint16_t, 16) g_263;
    uint32_t *g_265;
    int32_t ** volatile g_269;
    int16_t g_272;
    int32_t ** volatile g_275;
    int8_t g_287;
    volatile int16_t g_288;
    int32_t g_289;
    uint8_t g_290;
    int32_t *g_300[6];
    int32_t ** volatile g_299;
    int32_t *g_308[4];
    int32_t **g_328;
    uint16_t g_343;
    volatile VECTOR(uint8_t, 16) g_354;
    VECTOR(uint8_t, 16) g_355;
    volatile VECTOR(uint8_t, 8) g_358;
    VECTOR(uint8_t, 2) g_359;
    volatile VECTOR(uint8_t, 2) g_360;
    volatile int64_t g_364;
    VECTOR(uint16_t, 8) g_369;
    VECTOR(uint16_t, 16) g_387;
    int32_t *g_468;
    int32_t **g_480;
    volatile VECTOR(uint32_t, 8) g_487;
    volatile VECTOR(uint32_t, 4) g_489;
    VECTOR(uint32_t, 4) g_491;
    volatile uint8_t g_501;
    VECTOR(uint64_t, 4) g_509;
    int64_t g_530;
    int64_t g_533;
    VECTOR(int8_t, 8) g_534;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S0 * p_543);
int32_t * func_2(uint32_t  p_3, uint8_t  p_4, uint32_t  p_5, int32_t * p_6, int32_t * p_7, struct S0 * p_543);
uint16_t  func_8(int32_t * p_9, struct S0 * p_543);
int32_t * func_10(int32_t  p_11, struct S0 * p_543);
int32_t * func_15(int32_t * p_16, uint16_t  p_17, uint64_t  p_18, uint64_t  p_19, int32_t * p_20, struct S0 * p_543);
int32_t * func_27(int64_t  p_28, struct S0 * p_543);
int32_t ** func_76(int32_t * p_77, int16_t  p_78, int32_t  p_79, int32_t ** p_80, int32_t ** p_81, struct S0 * p_543);
int16_t  func_83(int32_t * p_84, int32_t ** p_85, int32_t ** p_86, int32_t ** p_87, struct S0 * p_543);
int32_t * func_88(int32_t * p_89, struct S0 * p_543);
int32_t * func_90(uint64_t  p_91, int32_t  p_92, int32_t * p_93, int32_t ** p_94, int32_t ** p_95, struct S0 * p_543);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_543->l_comm_values p_543->g_26 p_543->g_comm_values p_543->g_122 p_543->g_118 p_543->g_139 p_543->g_123 p_543->g_163 p_543->g_188 p_543->g_158 p_543->g_195 p_543->g_199 p_543->g_204 p_543->g_194 p_543->g_227 p_543->g_127 p_543->g_242 p_543->g_160 p_543->g_253 p_543->g_261 p_543->g_263 p_543->g_205 p_543->g_272 p_543->g_275 p_543->g_290 p_543->g_287 p_543->g_299 p_543->g_289 p_543->g_343 p_543->g_354 p_543->g_355 p_543->g_358 p_543->g_359 p_543->g_360 p_543->g_364 p_543->g_193 p_543->g_300 p_543->g_468 p_543->g_387 p_543->g_14 p_543->g_487 p_543->g_489 p_543->g_491 p_543->g_369 p_543->g_501 p_543->g_509 p_543->g_534
 * writes: p_543->g_14 p_543->g_26 p_543->g_118 p_543->g_123 p_543->g_127 p_543->g_comm_values p_543->g_163 p_543->g_188 p_543->g_195 p_543->g_204 p_543->g_205 p_543->g_225 p_543->g_227 p_543->g_160 p_543->g_261 p_543->g_265 p_543->g_272 p_543->g_290 p_543->g_287 p_543->g_308 p_543->g_139 p_543->g_328 p_543->g_300 p_543->g_480 p_543->g_501 p_543->g_530 p_543->g_533 p_543->g_534
 */
int64_t  func_1(struct S0 * p_543)
{ /* block id: 4 */
    int32_t *l_12 = (void*)0;
    int32_t *l_13 = &p_543->g_14;
    VECTOR(uint32_t, 16) l_23 = (VECTOR(uint32_t, 16))(0x593F9BEAL, (VECTOR(uint32_t, 4))(0x593F9BEAL, (VECTOR(uint32_t, 2))(0x593F9BEAL, 0UL), 0UL), 0UL, 0x593F9BEAL, 0UL, (VECTOR(uint32_t, 2))(0x593F9BEAL, 0UL), (VECTOR(uint32_t, 2))(0x593F9BEAL, 0UL), 0x593F9BEAL, 0UL, 0x593F9BEAL, 0UL);
    int32_t *l_25 = &p_543->g_26;
    int32_t **l_24 = &l_25;
    VECTOR(uint8_t, 2) l_29 = (VECTOR(uint8_t, 2))(0x8FL, 5UL);
    VECTOR(int16_t, 2) l_347 = (VECTOR(int16_t, 2))(0x708AL, 0x1DB3L);
    VECTOR(uint8_t, 8) l_356 = (VECTOR(uint8_t, 8))(0x71L, (VECTOR(uint8_t, 4))(0x71L, (VECTOR(uint8_t, 2))(0x71L, 0x3AL), 0x3AL), 0x3AL, 0x71L, 0x3AL);
    VECTOR(uint8_t, 4) l_357 = (VECTOR(uint8_t, 4))(0x6CL, (VECTOR(uint8_t, 2))(0x6CL, 9UL), 9UL);
    uint32_t l_365 = 0UL;
    int32_t l_366 = 0x0370D91AL;
    uint32_t l_493 = 4294967289UL;
    VECTOR(uint64_t, 4) l_507 = (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 1UL), 1UL);
    VECTOR(uint64_t, 16) l_508 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xC462704C19BA6165L), 0xC462704C19BA6165L), 0xC462704C19BA6165L, 0UL, 0xC462704C19BA6165L, (VECTOR(uint64_t, 2))(0UL, 0xC462704C19BA6165L), (VECTOR(uint64_t, 2))(0UL, 0xC462704C19BA6165L), 0UL, 0xC462704C19BA6165L, 0UL, 0xC462704C19BA6165L);
    int32_t **l_524 = &p_543->g_300[3];
    int32_t **l_528 = &p_543->g_300[5];
    int i;
    (*l_24) = func_2(p_543->l_comm_values[(safe_mod_func_uint32_t_u_u(p_543->tid, 2))], (func_8(func_10(((((*l_13) = (l_12 != l_12)) , l_12) == ((*l_24) = func_15(((safe_mod_func_uint8_t_u_u((GROUP_DIVERGE(2, 1) <= ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(l_23.sa56c37fc)).s05, ((VECTOR(uint32_t, 2))(1UL, 0x27F08E22L))))).hi), ((((*l_24) = l_13) == ((*p_543->g_199) = func_27((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_29.yx)).xxyxyyxyxyxyxyyy)).s8 <= 0L), p_543))) && (safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_347.yyyy)).z, (safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s(((+((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 2))(0x31L, 0x55L)).yyxyyyxx, ((VECTOR(uint8_t, 2))(p_543->g_354.sa2)).yyyxyyyy, ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 4))(p_543->g_355.sed14)), ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_356.s06352272)).s63)).xxxyxxyy)).s7646400453276714)).s1f, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_357.wyxx)))).zyyyyywx)).s36))).xxxx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(p_543->g_358.s57)), 7UL, 0xDFL, 5UL, 0UL, ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_543->g_359.yyyx)))).even, ((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(p_543->g_360.xyyx)), ((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 8))(250UL, (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(0xC303L, 0x6360L)).hi, (safe_unary_minus_func_uint32_t_u(4294967291UL)))), 1UL, ((VECTOR(uint8_t, 2))(253UL)), 9UL, 0x3EL, 0x7CL)).s0535402115743435, ((VECTOR(uint8_t, 16))(1UL))))).sa29e))))), 255UL, ((VECTOR(uint8_t, 2))(0x9DL)), 4UL)), ((VECTOR(uint8_t, 8))(1UL)), ((VECTOR(uint8_t, 8))(246UL))))).s72))), ((VECTOR(uint8_t, 2))(1UL))))), p_543->g_364, 0xAFL, 0x91L, ((VECTOR(uint8_t, 4))(0x59L)), 6UL)).s11)).yyxy)))))).wwzzzzwx))).s5, 1)) , l_365)) || l_366), p_543->g_289)), p_543->g_193[1]))))))) , (void*)0), p_543->g_343, p_543->g_359.y, p_543->l_comm_values[(safe_mod_func_uint32_t_u_u(p_543->tid, 2))], p_543->g_300[2], p_543))), p_543), p_543) < l_493), p_543->g_359.x, p_543->g_468, l_12, p_543);
    if ((!1L))
    { /* block id: 239 */
        return p_543->g_193[1];
    }
    else
    { /* block id: 241 */
        uint16_t l_516[3][8][3] = {{{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL}},{{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL}},{{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL},{65531UL,0xD390L,1UL}}};
        uint8_t l_523 = 7UL;
        int32_t ***l_525 = (void*)0;
        int32_t ***l_526 = &l_524;
        int32_t ***l_527 = &p_543->g_480;
        int64_t *l_529 = &p_543->g_530;
        int64_t *l_531 = (void*)0;
        int64_t *l_532 = &p_543->g_533;
        uint32_t *l_537 = (void*)0;
        uint32_t *l_538 = (void*)0;
        uint32_t *l_539 = &l_493;
        uint64_t *l_540 = (void*)0;
        uint8_t l_541 = 0x23L;
        uint16_t *l_542 = &p_543->g_188;
        int i, j, k;
        for (p_543->g_127 = 0; (p_543->g_127 != 47); ++p_543->g_127)
        { /* block id: 244 */
            uint32_t l_506 = 1UL;
            if (l_506)
                break;
        }
        (*l_13) |= ((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 4))(l_507.xxwx)).odd, ((VECTOR(uint64_t, 8))(l_508.sf11f42cd)).s70, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 2))(0x918A449DAD4852F3L, 1UL)).xxxxyxxyyxxyyxyy, ((VECTOR(uint64_t, 4))(p_543->g_509.ywwx)).zxzxyxwzwxxywxxz))).lo)).s32))), 1UL, 0x6EAD5C7015829942L)).even)), ((VECTOR(uint64_t, 2))(0xD1DA0040BEFDB96FL, 1UL)), 0x22EB030BEB67A771L, 4UL, 0xAB5464103EEFFC40L, 18446744073709551613UL)).even)).y & (safe_sub_func_uint16_t_u_u(((*l_542) = (safe_rshift_func_uint8_t_u_s(((l_541 &= (safe_lshift_func_int8_t_s_s((((*l_539) = (((p_543->g_263.sb , p_543->g_204) ^ l_516[0][4][1]) , ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(((p_543->g_534.s0 ^= (l_523 , ((*l_532) = ((*l_529) = (+(((*l_527) = ((*l_526) = l_524)) != (l_528 = (p_543->g_489.z , (void*)0)))))))) , 0L), (safe_mul_func_uint16_t_u_u(0xA3AFL, p_543->g_163[0])))) != 0x1DL), GROUP_DIVERGE(0, 1))) > 0L))) && 0x2FBE0CA4L), p_543->g_343))) == l_516[1][2][2]), 1))), p_543->g_359.x))) , l_516[1][7][0]);
        (*l_24) = func_88((*p_543->g_122), p_543);
    }
    return p_543->g_205;
}


/* ------------------------------------------ */
/* 
 * reads : p_543->g_501
 * writes: p_543->g_501
 */
int32_t * func_2(uint32_t  p_3, uint8_t  p_4, uint32_t  p_5, int32_t * p_6, int32_t * p_7, struct S0 * p_543)
{ /* block id: 234 */
    uint64_t l_494 = 18446744073709551607UL;
    int32_t l_495 = 1L;
    int32_t *l_496 = &p_543->g_160;
    int32_t *l_497 = (void*)0;
    int32_t l_498 = 0x7DC4ABEAL;
    int32_t *l_499[9] = {&l_498,&l_498,&l_498,&l_498,&l_498,&l_498,&l_498,&l_498,&l_498};
    int16_t l_500[1];
    int i;
    for (i = 0; i < 1; i++)
        l_500[i] = 0L;
    l_494 = 0x5AC712B8L;
    p_543->g_501++;
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_543->g_195 p_543->g_387 p_543->g_14 p_543->g_487 p_543->g_489 p_543->g_491 p_543->g_263 p_543->g_369 p_543->g_359 p_543->g_118
 * writes: p_543->g_480
 */
uint16_t  func_8(int32_t * p_9, struct S0 * p_543)
{ /* block id: 225 */
    uint64_t l_471 = 0x76265818A63BE433L;
    uint16_t *l_485[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint32_t, 2) l_488 = (VECTOR(uint32_t, 2))(0xE844895EL, 6UL);
    VECTOR(uint32_t, 4) l_490 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x54679BCFL), 0x54679BCFL);
    int i;
    --l_471;
    if ((safe_add_func_uint64_t_u_u(p_543->g_195[1], 1UL)))
    { /* block id: 227 */
        int32_t l_476 = (-7L);
        int32_t **l_477 = &p_543->g_300[1];
        int32_t ***l_478 = (void*)0;
        int32_t ***l_479 = (void*)0;
        VECTOR(uint32_t, 2) l_486 = (VECTOR(uint32_t, 2))(0xCB6FB193L, 0x056F80C6L);
        int16_t l_492[3];
        int i;
        for (i = 0; i < 3; i++)
            l_492[i] = (-1L);
        l_476 = (l_476 > ((((((p_543->g_480 = l_477) == &p_543->g_300[2]) , (safe_mul_func_int16_t_s_s((((4294967295UL && ((safe_sub_func_int64_t_s_s(((p_543->g_387.s2 <= (l_485[3] == (p_543->g_14 , l_485[3]))) & ((((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 16))(0xEB5E62BFL, ((VECTOR(uint32_t, 4))(l_486.yxyx)), 0xABB81B7FL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(6UL, 4294967286UL)).xxxy)), ((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(0x4088AABAL, ((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 8))(4294967295UL, 0x004585E1L, 0x1DAC71D6L, ((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_543->g_487.s34061617)).lo)).even, ((VECTOR(uint32_t, 16))(l_488.xyxxyxxyyyyxyxxx)).s4c))), 4294967288UL, 1UL, 5UL)).s14, ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 2))(4294967295UL, 0xE8356469L)), ((VECTOR(uint32_t, 16))(p_543->g_489.ywzyyzzxyzzyyyxw)).s7d, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(l_490.wyzy)).even, ((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),uint32_t,((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 2))(p_543->g_491.wz)), ((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 16))(0x86B4E086L, (l_492[2] > 18446744073709551615UL), ((VECTOR(uint32_t, 2))(1UL)), ((VECTOR(uint32_t, 8))(1UL)), ((VECTOR(uint32_t, 2))(9UL)), 4294967295UL, 0xF68BA787L)).lo, (uint32_t)0xC303698BL))).s60))).yyxxyxyyyyxyyyyx, ((VECTOR(uint32_t, 16))(0x137E89CFL))))).s9dc0, (uint32_t)FAKE_DIVERGE(p_543->global_0_offset, get_global_id(0), 10), (uint32_t)p_543->g_263.sc))).wyxywwzxywxyxzwy, ((VECTOR(uint32_t, 16))(0x7DE6C006L))))).se7))).yyxxyyxyyyyyxyyy)).s2e)))))), 4294967287UL, ((VECTOR(uint32_t, 8))(0UL)), 0x7695F722L, 1UL, 4294967295UL, 0x524D913AL)))).sb47b)))))).lo, (uint32_t)0x6457AD3EL, (uint32_t)l_486.y))).yyxx)), l_476, 0xCA2B31E3L, 0x3DDB85AAL, 1UL, 0xF9EAA710L, 0x1A37A85FL)).lo, (uint32_t)l_488.x, (uint32_t)l_492[0]))).s1243211346074222, ((VECTOR(uint32_t, 16))(3UL))))).s50)).xyyy, ((VECTOR(uint32_t, 4))(0x63C8EF59L))))).w , l_488.x) , l_492[2])), l_490.y)) && l_488.x)) | l_476) ^ l_488.x), 0x899CL))) && p_543->g_369.s5) > l_490.y) && l_486.y));
        return p_543->g_359.y;
    }
    else
    { /* block id: 231 */
        return p_543->g_118;
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_543->g_199 p_543->g_123
 * writes: p_543->g_308
 */
int32_t * func_10(int32_t  p_11, struct S0 * p_543)
{ /* block id: 222 */
    int32_t *l_469 = &p_543->g_26;
    int32_t **l_470 = &p_543->g_308[0];
    (*l_470) = l_469;
    return (*p_543->g_199);
}


/* ------------------------------------------ */
/* 
 * reads : p_543->g_127 p_543->g_360 p_543->g_227 p_543->g_355 p_543->g_204 p_543->g_163 p_543->g_199 p_543->g_123 p_543->g_205 p_543->g_287 p_543->g_468
 * writes: p_543->g_127 p_543->g_227 p_543->g_163 p_543->g_300 p_543->g_204
 */
int32_t * func_15(int32_t * p_16, uint16_t  p_17, uint64_t  p_18, uint64_t  p_19, int32_t * p_20, struct S0 * p_543)
{ /* block id: 181 */
    int16_t l_374 = 0L;
    VECTOR(uint16_t, 2) l_388 = (VECTOR(uint16_t, 2))(65534UL, 65535UL);
    int32_t l_394 = 1L;
    int32_t *l_403 = &p_543->g_160;
    int32_t l_420 = (-8L);
    int32_t l_423 = 0x66694ED4L;
    int32_t l_425 = 1L;
    int32_t l_426 = 0x2D4F798EL;
    int32_t l_427 = (-10L);
    int32_t l_428 = 1L;
    int32_t l_429[5][9] = {{7L,6L,1L,0x370BA5D4L,0x717E2BF9L,7L,0x370BA5D4L,0x745DCFF6L,0x370BA5D4L},{7L,6L,1L,0x370BA5D4L,0x717E2BF9L,7L,0x370BA5D4L,0x745DCFF6L,0x370BA5D4L},{7L,6L,1L,0x370BA5D4L,0x717E2BF9L,7L,0x370BA5D4L,0x745DCFF6L,0x370BA5D4L},{7L,6L,1L,0x370BA5D4L,0x717E2BF9L,7L,0x370BA5D4L,0x745DCFF6L,0x370BA5D4L},{7L,6L,1L,0x370BA5D4L,0x717E2BF9L,7L,0x370BA5D4L,0x745DCFF6L,0x370BA5D4L}};
    int16_t l_430 = 0x4A30L;
    int32_t **l_456 = &p_543->g_300[3];
    VECTOR(int8_t, 16) l_463 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x4CL), 0x4CL), 0x4CL, 0L, 0x4CL, (VECTOR(int8_t, 2))(0L, 0x4CL), (VECTOR(int8_t, 2))(0L, 0x4CL), 0L, 0x4CL, 0L, 0x4CL);
    int8_t *l_464 = &p_543->g_204;
    int32_t *l_465[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_466[6] = {0x85F38D22L,0x85F38D22L,0x85F38D22L,0x85F38D22L,0x85F38D22L,0x85F38D22L};
    uint32_t l_467 = 0UL;
    int i, j;
    for (p_543->g_127 = 0; (p_543->g_127 > 20); p_543->g_127++)
    { /* block id: 184 */
        uint16_t *l_370 = (void*)0;
        uint16_t *l_371 = (void*)0;
        uint16_t *l_372[9] = {&p_543->g_127,&p_543->g_127,&p_543->g_127,&p_543->g_127,&p_543->g_127,&p_543->g_127,&p_543->g_127,&p_543->g_127,&p_543->g_127};
        int32_t l_393 = 0L;
        uint32_t l_395 = 0UL;
        int32_t l_421[2];
        int64_t l_424[3];
        int32_t l_444[8];
        int i;
        for (i = 0; i < 2; i++)
            l_421[i] = 0x61FD14A1L;
        for (i = 0; i < 3; i++)
            l_424[i] = 0x5E039C98A865B8D6L;
        for (i = 0; i < 8; i++)
            l_444[i] = 1L;
        (*p_20) = (l_393 = ((p_17 ^= ((VECTOR(uint16_t, 2))(p_543->g_369.s27)).lo) != (safe_unary_minus_func_uint16_t_u((FAKE_DIVERGE(p_543->local_2_offset, get_local_id(2), 10) < ((l_374 <= (safe_rshift_func_uint8_t_u_s(255UL, (safe_lshift_func_uint16_t_u_u(((((p_543->g_360.y & 0x3BC0L) , l_374) ^ ((p_19 > (safe_mod_func_uint8_t_u_u((l_394 = (0xAB1AL || (safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 2))(p_543->g_387.s2b)).yyyxxxxxxxyxyyxx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 4))(l_388.yyxy)).odd, ((VECTOR(uint16_t, 2))(0UL, 0xEC2EL))))).xyyyxyyxyxxxyyxy))))).sa, (safe_div_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(0xB23DL, GROUP_DIVERGE(0, 1), 65526UL, 0x4CB8L)).y, ((void*)0 == &p_543->g_227))) | p_543->g_227) , p_18), l_393)))), 5UL)), GROUP_DIVERGE(0, 1))))), l_395))) < p_19)) <= p_543->g_355.s1), p_543->g_204))))) , l_395))))));
        for (l_393 = 0; (l_393 != 12); l_393 = safe_add_func_int64_t_s_s(l_393, 9))
        { /* block id: 191 */
            uint32_t *l_398 = (void*)0;
            uint32_t *l_399 = (void*)0;
            uint32_t *l_400 = &p_543->g_163[0];
            int32_t l_416[10] = {0x1CFE5559L,0x1CFE5559L,0x1CFE5559L,0x1CFE5559L,0x1CFE5559L,0x1CFE5559L,0x1CFE5559L,0x1CFE5559L,0x1CFE5559L,0x1CFE5559L};
            int i;
            l_394 |= ((++(*l_400)) <= l_395);
            l_403 = p_16;
            for (l_374 = 6; (l_374 < (-20)); l_374 = safe_sub_func_uint16_t_u_u(l_374, 5))
            { /* block id: 197 */
                int64_t l_408[10][6][3] = {{{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL}},{{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL}},{{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL}},{{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL}},{{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL}},{{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL}},{{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL}},{{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL}},{{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL}},{{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL},{(-4L),1L,0x27FDFB3FA6A45C7DL}}};
                int32_t l_409 = 5L;
                int32_t l_414 = 0x648446DAL;
                int32_t l_417 = 0L;
                int32_t l_418 = 0x114663A4L;
                int32_t l_419 = 0x13A5B877L;
                int32_t l_422[3][6] = {{7L,0x6463645EL,7L,7L,0x6463645EL,7L},{7L,0x6463645EL,7L,7L,0x6463645EL,7L},{7L,0x6463645EL,7L,7L,0x6463645EL,7L}};
                int32_t l_431[9] = {1L,0x5B2EB361L,1L,1L,0x5B2EB361L,1L,1L,0x5B2EB361L,1L};
                uint32_t l_433 = 1UL;
                int32_t l_443 = (-1L);
                uint32_t l_448 = 0UL;
                int i, j, k;
                (1 + 1);
            }
        }
    }
    l_467 = (l_466[5] = (safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((*p_543->g_199) != (void*)0), ((safe_unary_minus_func_int32_t_s(((*p_20) &= (safe_mod_func_uint16_t_u_u(p_17, p_18))))) ^ (p_16 != ((*l_456) = p_20))))) & ((p_19 , p_17) == ((*l_464) ^= (safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((l_463.s1 > 0x602EL) , p_543->g_205), p_543->g_287)), 6)), l_388.y))))), 4)));
    return p_543->g_468;
}


/* ------------------------------------------ */
/* 
 * reads : p_543->g_26 p_543->l_comm_values p_543->g_comm_values p_543->g_122 p_543->g_118 p_543->g_139 p_543->g_123 p_543->g_163 p_543->g_188 p_543->g_158 p_543->g_195 p_543->g_199 p_543->g_204 p_543->g_194 p_543->g_227 p_543->g_127 p_543->g_242 p_543->g_160 p_543->g_253 p_543->g_261 p_543->g_263 p_543->g_205 p_543->g_272 p_543->g_275 p_543->g_290 p_543->g_287 p_543->g_299 p_543->g_289 p_543->g_343
 * writes: p_543->g_26 p_543->g_118 p_543->g_123 p_543->g_127 p_543->g_comm_values p_543->g_163 p_543->g_188 p_543->g_195 p_543->g_204 p_543->g_205 p_543->g_225 p_543->g_227 p_543->g_160 p_543->g_261 p_543->g_265 p_543->g_272 p_543->g_290 p_543->g_287 p_543->g_308 p_543->g_139 p_543->g_328
 */
int32_t * func_27(int64_t  p_28, struct S0 * p_543)
{ /* block id: 7 */
    int32_t *l_75 = &p_543->g_26;
    int32_t **l_273 = &l_75;
    uint64_t l_295 = 0x1C08928B453A4AA7L;
    int32_t l_296 = 0x3A4AB18DL;
    int32_t ** volatile l_301 = (void*)0;/* VOLATILE GLOBAL l_301 */
    int32_t *l_307[4];
    uint16_t l_339[3][3];
    int16_t *l_340 = &p_543->g_118;
    int16_t l_341 = 2L;
    int64_t l_342 = 0x380D268F8804C869L;
    int8_t l_344 = (-1L);
    int i, j;
    for (i = 0; i < 4; i++)
        l_307[i] = &p_543->g_26;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_339[i][j] = 0xA6CBL;
    }
    for (p_543->g_26 = (-18); (p_543->g_26 < 9); p_543->g_26 = safe_add_func_int8_t_s_s(p_543->g_26, 1))
    { /* block id: 10 */
        int32_t *l_82 = &p_543->g_26;
        int32_t *l_97[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        for (p_28 = (-10); (p_28 < (-10)); p_28 = safe_add_func_int32_t_s_s(p_28, 1))
        { /* block id: 13 */
            if ((atomic_inc(&p_543->l_atomic_input[0]) == 4))
            { /* block id: 15 */
                uint32_t l_34[10][8][3] = {{{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L}},{{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L}},{{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L}},{{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L}},{{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L}},{{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L}},{{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L}},{{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L}},{{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L}},{{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L},{4294967295UL,0xF4399391L,0x404FC4B6L}}};
                int16_t l_35 = (-2L);
                uint8_t l_36 = 248UL;
                VECTOR(int32_t, 4) l_48 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x0956685BL), 0x0956685BL);
                VECTOR(int32_t, 8) l_49 = (VECTOR(int32_t, 8))(0x2582781EL, (VECTOR(int32_t, 4))(0x2582781EL, (VECTOR(int32_t, 2))(0x2582781EL, (-5L)), (-5L)), (-5L), 0x2582781EL, (-5L));
                uint16_t l_50[2][8];
                int32_t *l_71[7][2][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int32_t *l_72 = (void*)0;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_50[i][j] = 65535UL;
                }
                l_36 = (l_35 = l_34[3][6][1]);
                for (l_34[3][5][1] = (-20); (l_34[3][5][1] == 34); l_34[3][5][1] = safe_add_func_int64_t_s_s(l_34[3][5][1], 1))
                { /* block id: 20 */
                    uint8_t l_39[8][10][2] = {{{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL}},{{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL}},{{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL}},{{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL}},{{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL}},{{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL}},{{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL}},{{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL},{0x10L,0xCEL}}};
                    int i, j, k;
                    if (l_39[3][4][0])
                    { /* block id: 21 */
                        uint8_t l_40 = 0UL;
                        uint64_t l_41 = 0x25383EB3D01D8AACL;
                        l_41 ^= ((GROUP_DIVERGE(1, 1) , l_40) , 0x25E9F1F6L);
                    }
                    else
                    { /* block id: 23 */
                        int64_t l_42[6][3][7] = {{{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL},{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL},{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL}},{{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL},{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL},{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL}},{{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL},{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL},{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL}},{{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL},{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL},{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL}},{{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL},{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL},{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL}},{{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL},{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL},{0x3ECF96537570C98FL,(-1L),0x1ACC98CB2CAB94E7L,5L,0x1ACC98CB2CAB94E7L,(-1L),0x3ECF96537570C98FL}}};
                        int32_t l_43[10] = {0x0C485E27L,0x3F0F01F9L,0x27F279ECL,0x3F0F01F9L,0x0C485E27L,0x0C485E27L,0x3F0F01F9L,0x27F279ECL,0x3F0F01F9L,0x0C485E27L};
                        int32_t l_44 = 1L;
                        uint8_t l_45 = 0x86L;
                        int i, j, k;
                        l_45--;
                    }
                }
                if (((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(l_48.zxwwxywwxwxzxwzw)).hi, ((VECTOR(int32_t, 4))(l_49.s4201)).xyxyxzxy))).s70, (int32_t)l_50[0][7]))).odd)
                { /* block id: 27 */
                    VECTOR(int16_t, 4) l_51 = (VECTOR(int16_t, 4))(0x3999L, (VECTOR(int16_t, 2))(0x3999L, (-4L)), (-4L));
                    VECTOR(int16_t, 8) l_52 = (VECTOR(int16_t, 8))(0x481CL, (VECTOR(int16_t, 4))(0x481CL, (VECTOR(int16_t, 2))(0x481CL, 0x4E70L), 0x4E70L), 0x4E70L, 0x481CL, 0x4E70L);
                    VECTOR(int16_t, 8) l_53 = (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x47C9L), 0x47C9L), 0x47C9L, 6L, 0x47C9L);
                    VECTOR(uint16_t, 8) l_54 = (VECTOR(uint16_t, 8))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0xED30L), 0xED30L), 0xED30L, 65531UL, 0xED30L);
                    int i;
                    if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(l_51.zwzy)), ((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(0x4845L, 0x263DL)).yyyy, ((VECTOR(int16_t, 2))(l_52.s22)).xyxy, ((VECTOR(int16_t, 4))(l_53.s4216)))))))).lo, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_54.s4037)).wyzzxzzywxwwyyyy)).s8b7c)).lo))))).xxyyyyyx)).s51)).even)
                    { /* block id: 28 */
                        int32_t l_56 = 0x0DF19FB5L;
                        int32_t *l_55[8][5][6] = {{{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0}},{{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0}},{{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0}},{{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0}},{{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0}},{{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0}},{{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0}},{{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0},{(void*)0,&l_56,(void*)0,&l_56,(void*)0,(void*)0}}};
                        int32_t *l_57 = &l_56;
                        int8_t l_58 = (-1L);
                        int8_t l_59 = 0x4EL;
                        int i, j, k;
                        l_55[2][4][5] = (l_57 = l_55[4][3][0]);
                        l_59 ^= l_58;
                    }
                    else
                    { /* block id: 32 */
                        uint64_t l_60[2];
                        int16_t l_61 = 0x3B40L;
                        int32_t *l_62 = (void*)0;
                        int32_t *l_63 = (void*)0;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_60[i] = 0x5BCAC1807002ECD4L;
                        l_49.s7 = l_60[0];
                        l_63 = (l_61 , l_62);
                    }
                }
                else
                { /* block id: 36 */
                    uint32_t l_64 = 4294967295UL;
                    int32_t l_69 = 0x2AF6034AL;
                    int32_t *l_68[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t **l_67 = &l_68[9];
                    int32_t **l_70[9] = {&l_68[4],&l_68[4],&l_68[4],&l_68[4],&l_68[4],&l_68[4],&l_68[4],&l_68[4],&l_68[4]};
                    int i;
                    ++l_64;
                    l_70[6] = l_67;
                }
                l_72 = l_71[0][0][2];
                unsigned int result = 0;
                int l_34_i0, l_34_i1, l_34_i2;
                for (l_34_i0 = 0; l_34_i0 < 10; l_34_i0++) {
                    for (l_34_i1 = 0; l_34_i1 < 8; l_34_i1++) {
                        for (l_34_i2 = 0; l_34_i2 < 3; l_34_i2++) {
                            result += l_34[l_34_i0][l_34_i1][l_34_i2];
                        }
                    }
                }
                result += l_35;
                result += l_36;
                result += l_48.w;
                result += l_48.z;
                result += l_48.y;
                result += l_48.x;
                result += l_49.s7;
                result += l_49.s6;
                result += l_49.s5;
                result += l_49.s4;
                result += l_49.s3;
                result += l_49.s2;
                result += l_49.s1;
                result += l_49.s0;
                int l_50_i0, l_50_i1;
                for (l_50_i0 = 0; l_50_i0 < 2; l_50_i0++) {
                    for (l_50_i1 = 0; l_50_i1 < 8; l_50_i1++) {
                        result += l_50[l_50_i0][l_50_i1];
                    }
                }
                atomic_add(&p_543->l_special_values[0], result);
            }
            else
            { /* block id: 41 */
                (1 + 1);
            }
        }
        for (p_28 = 4; (p_28 != (-1)); --p_28)
        { /* block id: 47 */
            uint8_t l_96[10] = {0x18L,7UL,0x18L,0x18L,7UL,0x18L,0x18L,7UL,0x18L,0x18L};
            int32_t **l_98 = (void*)0;
            int16_t *l_271 = &p_543->g_272;
            int32_t l_293 = (-1L);
            int32_t *l_294 = &p_543->g_227;
            int i;
            l_296 = ((4294967290UL < p_28) , (((*l_294) = (((void*)0 == l_75) | (l_293 ^= (((((p_28 , func_76(l_82, ((*l_271) |= func_83(func_88(func_90(((p_28 == ((((void*)0 == l_75) != 0UL) && 9L)) == p_543->l_comm_values[(safe_mod_func_uint32_t_u_u(p_543->tid, 2))]), l_96[1], l_97[1], &l_75, l_98, p_543), p_543), l_98, &l_82, l_98, p_543)), (*l_75), l_98, l_273, p_543)) == (void*)0) == 0x45L) || p_543->g_261.w) <= (*l_82))))) , l_295));
            return l_97[1];
        }
        return l_97[1];
    }
    for (p_543->g_287 = (-22); (p_543->g_287 <= (-13)); p_543->g_287 = safe_add_func_uint64_t_u_u(p_543->g_287, 5))
    { /* block id: 143 */
        l_301 = p_543->g_299;
    }
    for (p_543->g_26 = 0; (p_543->g_26 <= (-21)); p_543->g_26--)
    { /* block id: 148 */
        VECTOR(int16_t, 16) l_311 = (VECTOR(int16_t, 16))(0x20DDL, (VECTOR(int16_t, 4))(0x20DDL, (VECTOR(int16_t, 2))(0x20DDL, 0x2C38L), 0x2C38L), 0x2C38L, 0x20DDL, 0x2C38L, (VECTOR(int16_t, 2))(0x20DDL, 0x2C38L), (VECTOR(int16_t, 2))(0x20DDL, 0x2C38L), 0x20DDL, 0x2C38L, 0x20DDL, 0x2C38L);
        int8_t *l_312 = &p_543->g_204;
        int32_t l_322 = 0x19686D7CL;
        int32_t l_327[5][2] = {{2L,2L},{2L,2L},{2L,2L},{2L,2L},{2L,2L}};
        int i, j;
        for (p_543->g_204 = (-21); (p_543->g_204 > 15); p_543->g_204 = safe_add_func_int32_t_s_s(p_543->g_204, 8))
        { /* block id: 151 */
            int32_t **l_306 = &p_543->g_123;
            int8_t *l_316 = &p_543->g_204;
            uint16_t *l_317 = &p_543->g_188;
            int32_t l_318 = 0x7635F20FL;
            int32_t *l_319 = &p_543->g_227;
            uint64_t *l_320 = (void*)0;
            uint64_t *l_321[9][6][4] = {{{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295}},{{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295}},{{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295}},{{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295}},{{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295}},{{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295}},{{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295}},{{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295}},{{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295},{&l_295,(void*)0,&l_295,&l_295}}};
            int i, j, k;
            (*l_306) = ((*l_273) = (*p_543->g_275));
            p_543->g_308[2] = l_307[1];
            l_322 = (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_311.s36d9)).xyzwywxzzzxywzyz)).s5d)).hi, ((((void*)0 != l_312) != FAKE_DIVERGE(p_543->local_2_offset, get_local_id(2), 10)) || (p_543->g_139.s7 = (safe_unary_minus_func_uint32_t_u((safe_add_func_int32_t_s_s(p_28, (((*l_319) = (((*l_317) |= (((GROUP_DIVERGE(1, 1) , l_316) != &p_543->g_287) < p_28)) || (0x5FL < ((l_311.sd , func_76((*l_273), p_28, l_318, &p_543->g_308[2], &l_307[1], p_543)) == (void*)0)))) , p_28)))))))));
        }
        for (p_543->g_127 = (-7); (p_543->g_127 != 12); ++p_543->g_127)
        { /* block id: 162 */
            for (p_543->g_204 = 0; (p_543->g_204 != (-17)); p_543->g_204 = safe_sub_func_uint8_t_u_u(p_543->g_204, 7))
            { /* block id: 165 */
                (*l_273) = (*p_543->g_122);
            }
        }
        if (p_28)
            break;
        l_327[4][0] = (l_322 = 0x27A181BAL);
    }
    l_344 = ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((void*)0 == &p_543->g_308[3]), 9UL, 0UL, 0x2F76F492C0CD1903L)).wwzwwwyx)).s0 && (((*p_543->g_253) = p_28) || p_28)) && (((p_543->g_328 = &l_75) != (void*)0) > ((+p_28) <= (((safe_mul_func_int16_t_s_s(((((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))((((((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((l_341 = ((*l_340) &= (safe_add_func_int32_t_s_s((l_339[2][1] ^= (p_543->g_289 ^ p_28)), 0x44CD104CL)))) ^ p_28), 0)), p_28)) & 0x27E689C1L) | p_28) != p_543->g_290) || p_28), p_28, p_28, ((VECTOR(int64_t, 2))(0x6DD3903DF3D744F4L)), ((VECTOR(int64_t, 8))(3L)), l_342, 0L, (-6L))).s74)).yyyxyxxy, ((VECTOR(int64_t, 8))(0x6712B9C9078721B7L))))).hi, (int64_t)p_28, (int64_t)p_28))), 4L, p_28, (-9L), 1L)).s5401637557757467, ((VECTOR(int64_t, 16))((-9L))), ((VECTOR(int64_t, 16))(0x4919450E3BF4510FL))))).s9d)).hi, p_28)), ((VECTOR(uint8_t, 2))(0UL)), 0x8AL)).zwywzxzzyxxzxwxz)))), (uint8_t)255UL))).s7e, ((VECTOR(uint8_t, 2))(0x2BL))))).odd , 0x436E0F4EE46ED0B7L) & p_543->g_261.z), p_543->g_272)) , p_543->g_343) < p_543->g_263.s5))));
    return (*p_543->g_275);
}


/* ------------------------------------------ */
/* 
 * reads : p_543->g_275 p_543->g_123 p_543->g_160 p_543->g_26 p_543->g_139 p_543->g_290
 * writes: p_543->g_123 p_543->g_160 p_543->g_290
 */
int32_t ** func_76(int32_t * p_77, int16_t  p_78, int32_t  p_79, int32_t ** p_80, int32_t ** p_81, struct S0 * p_543)
{ /* block id: 129 */
    int32_t *l_274 = &p_543->g_160;
    VECTOR(int64_t, 16) l_280 = (VECTOR(int64_t, 16))(0x3AD0F18263FFD70FL, (VECTOR(int64_t, 4))(0x3AD0F18263FFD70FL, (VECTOR(int64_t, 2))(0x3AD0F18263FFD70FL, 0L), 0L), 0L, 0x3AD0F18263FFD70FL, 0L, (VECTOR(int64_t, 2))(0x3AD0F18263FFD70FL, 0L), (VECTOR(int64_t, 2))(0x3AD0F18263FFD70FL, 0L), 0x3AD0F18263FFD70FL, 0L, 0x3AD0F18263FFD70FL, 0L);
    VECTOR(int32_t, 4) l_281 = (VECTOR(int32_t, 4))(0x31190267L, (VECTOR(int32_t, 2))(0x31190267L, 0x5C7E6054L), 0x5C7E6054L);
    int32_t *l_282 = &p_543->g_160;
    int32_t *l_283 = &p_543->g_160;
    int32_t *l_284 = &p_543->g_160;
    int32_t *l_285[6][8][5] = {{{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160}},{{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160}},{{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160}},{{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160}},{{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160}},{{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160},{(void*)0,(void*)0,&p_543->g_26,(void*)0,&p_543->g_160}}};
    int8_t l_286 = 0L;
    int i, j, k;
    (*p_543->g_275) = l_274;
    (*l_274) = (((safe_mul_func_int8_t_s_s(((safe_add_func_int32_t_s_s((*p_543->g_123), (**p_81))) < ((void*)0 != &l_274)), p_543->g_139.s7)) || ((VECTOR(int64_t, 8))(0x208104924E5F42DEL, 0x10A87234B0044499L, ((VECTOR(int64_t, 2))(0x29AC5DE7C9B5BF3AL, 1L)), 0x17311C0FAB3579C4L, ((VECTOR(int64_t, 2))(l_280.s8f)), 0x1DCB4754EABB476BL)).s6) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_281.xzzz)).wyyxyxwwzzzywxxz)).s7);
    p_543->g_290++;
    return &p_543->g_123;
}


/* ------------------------------------------ */
/* 
 * reads : p_543->g_26
 * writes:
 */
int16_t  func_83(int32_t * p_84, int32_t ** p_85, int32_t ** p_86, int32_t ** p_87, struct S0 * p_543)
{ /* block id: 122 */
    uint32_t l_267 = 0x596DC5A1L;
    int32_t *l_268 = &p_543->g_26;
    int32_t **l_270 = &l_268;
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_543->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u(l_267, 10))][(safe_mod_func_uint32_t_u_u(p_543->tid, 2))]));
    (*l_270) = l_268;
    return (*l_268);
}


/* ------------------------------------------ */
/* 
 * reads : p_543->g_204 p_543->g_26 p_543->g_194 p_543->g_227 p_543->g_127 p_543->g_188 p_543->g_242 p_543->g_160 p_543->g_139 p_543->g_163 p_543->g_253 p_543->g_261 p_543->g_263 p_543->g_205 p_543->g_122 p_543->g_123
 * writes: p_543->g_204 p_543->g_205 p_543->g_225 p_543->g_227 p_543->g_127 p_543->g_188 p_543->g_160 p_543->g_261 p_543->g_265
 */
int32_t * func_88(int32_t * p_89, struct S0 * p_543)
{ /* block id: 101 */
    uint32_t *l_202 = &p_543->g_163[0];
    int8_t *l_203 = &p_543->g_204;
    int32_t l_212 = (-1L);
    int32_t l_215 = 0x7E05BBD4L;
    uint64_t *l_216 = (void*)0;
    uint64_t *l_217 = (void*)0;
    uint64_t *l_218 = (void*)0;
    uint64_t *l_219 = (void*)0;
    uint64_t *l_220 = (void*)0;
    uint64_t *l_221[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_222 = 0x529F4713L;
    int64_t *l_223[3];
    int64_t **l_224[2];
    int32_t *l_226 = &p_543->g_227;
    int32_t l_228 = 0x31B59EE1L;
    int32_t *l_229 = &l_228;
    VECTOR(uint16_t, 8) l_259 = (VECTOR(uint16_t, 8))(0x0F82L, (VECTOR(uint16_t, 4))(0x0F82L, (VECTOR(uint16_t, 2))(0x0F82L, 65535UL), 65535UL), 65535UL, 0x0F82L, 65535UL);
    VECTOR(uint16_t, 16) l_260 = (VECTOR(uint16_t, 16))(0xA203L, (VECTOR(uint16_t, 4))(0xA203L, (VECTOR(uint16_t, 2))(0xA203L, 0x8BD7L), 0x8BD7L), 0x8BD7L, 0xA203L, 0x8BD7L, (VECTOR(uint16_t, 2))(0xA203L, 0x8BD7L), (VECTOR(uint16_t, 2))(0xA203L, 0x8BD7L), 0xA203L, 0x8BD7L, 0xA203L, 0x8BD7L);
    VECTOR(uint16_t, 8) l_264 = (VECTOR(uint16_t, 8))(0x5056L, (VECTOR(uint16_t, 4))(0x5056L, (VECTOR(uint16_t, 2))(0x5056L, 0xF0ADL), 0xF0ADL), 0xF0ADL, 0x5056L, 0xF0ADL);
    int i, j;
    for (i = 0; i < 3; i++)
        l_223[i] = &p_543->g_193[1];
    for (i = 0; i < 2; i++)
        l_224[i] = &l_223[1];
    (*l_229) = (safe_mod_func_uint32_t_u_u(((p_543->g_205 = ((*l_203) |= ((void*)0 == l_202))) >= (((&p_543->g_163[0] != ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u(((((l_212 = ((safe_sub_func_int16_t_s_s((l_212 > (((*l_226) ^= ((safe_sub_func_uint64_t_u_u((l_222 = (l_215 = (l_203 != l_203))), l_212)) || ((+((p_543->g_26 , ((p_543->g_225[4] = l_223[1]) != &p_543->g_193[1])) & 0x7EL)) & p_543->g_194))) , 0x0FB4L)), 0UL)) , 0x07EFF87EL)) >= l_228) != 4294967288UL) >= (-1L)), p_543->g_26)) & 0x6137A7DFD5D40986L), 1)) , (void*)0)) | l_228) | l_228)), l_228));
    for (p_543->g_127 = 0; (p_543->g_127 >= 34); p_543->g_127 = safe_add_func_int16_t_s_s(p_543->g_127, 7))
    { /* block id: 112 */
        int32_t l_232 = 0x441F8642L;
        uint16_t *l_233[6] = {&p_543->g_188,&p_543->g_127,&p_543->g_188,&p_543->g_188,&p_543->g_127,&p_543->g_188};
        VECTOR(uint8_t, 2) l_240 = (VECTOR(uint8_t, 2))(4UL, 0x6FL);
        VECTOR(uint8_t, 8) l_241 = (VECTOR(uint8_t, 8))(0x92L, (VECTOR(uint8_t, 4))(0x92L, (VECTOR(uint8_t, 2))(0x92L, 1UL), 1UL), 1UL, 0x92L, 1UL);
        int8_t l_251 = 0x29L;
        VECTOR(uint16_t, 8) l_262 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
        int32_t l_266 = 1L;
        int i;
        (*p_543->g_253) = ((((p_543->g_188--) , &p_543->g_163[0]) != p_89) , ((safe_mod_func_int64_t_s_s(((*l_229) = ((safe_lshift_func_uint8_t_u_s((*l_229), ((((((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 16))(l_240.xxxxyyxyxxyyyyxy)), ((VECTOR(uint8_t, 8))(l_241.s56624062)).s4141263356217517, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_543->g_242.xzxx)))), FAKE_DIVERGE(p_543->global_0_offset, get_global_id(0), 10), (0L | (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(l_240.x, p_543->g_160)), (safe_add_func_int16_t_s_s(p_543->g_139.s7, ((safe_lshift_func_int8_t_s_s((!((0x50DF61B3L >= (0x1CF70450DAB84D86L || (-1L))) != (*l_229))), 5)) & 0x2FL)))))), 255UL, 0xD2L)).s3147514457231204))).sd7a1)).hi, ((VECTOR(uint8_t, 2))(0x19L))))).xxyxyyyx, ((VECTOR(uint8_t, 8))(0x92L))))).s6211442601265015, ((VECTOR(uint8_t, 16))(2UL))))).s5c, ((VECTOR(uint8_t, 2))(0UL))))), 0x3BL, 253UL)).ywxyzwxw, ((VECTOR(uint8_t, 8))(253UL))))).s4 < p_543->g_139.s6) > 1UL) , p_543->g_163[0]) <= l_251))) == 0x1399L)), l_241.s6)) && (*l_229)));
        l_266 |= (safe_add_func_uint8_t_u_u(FAKE_DIVERGE(p_543->group_1_offset, get_group_id(1), 10), (l_241.s2 & ((((p_89 != &p_543->g_163[0]) < 0xCCEF58C2C69E6B9AL) , (*l_229)) <= (safe_unary_minus_func_int64_t_s(((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_259.s11)))).xyyyxxxx, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 16))(l_260.sf92af3ba23b5e7a8)).sb4, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_543->g_261.wxyx)), 2UL, ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(65527UL, 0xEBCBL)), ((VECTOR(uint16_t, 2))(l_262.s31))))), 0x41A1L)).even)).odd))), ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 2))(0x4D0BL, 0xBB78L)).xyxyyyxy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(65535UL, 0x64FBL)), ((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(65529UL, 0xBC04L)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 16))(p_543->g_263.se566e3ebe734cb3e)).hi, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_264.s36)).yxxxyyyyyxyxxxyx)).sed)).xyxyxyyy))).s4051363267355450, (uint16_t)0x02CAL, (uint16_t)(p_543->g_261.z = (~65535UL))))))).s08cb)), ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 4))((((p_543->g_265 = (void*)0) == (void*)0) ^ 18446744073709551615UL), 0x19L, 0UL, 248UL)).yzwwxzyy, ((VECTOR(uint8_t, 8))(0x23L))))).lo))).y, 65535UL, (*l_229), ((VECTOR(uint16_t, 2))(5UL)), 65535UL, 0UL, p_543->g_205, 0x2CA9L, 65535UL)).lo, ((VECTOR(uint16_t, 8))(0x5E83L))))).s04))), 0UL, 0UL)).zxyyyzyz)), ((VECTOR(uint16_t, 8))(9UL))))))).s1755003240126355)), ((VECTOR(uint16_t, 16))(0xC616L))))).odd)).s57, ((VECTOR(uint16_t, 2))(65533UL)))))))).xxxyyxxx, ((VECTOR(uint16_t, 8))(0x7893L))))), ((VECTOR(uint16_t, 2))(0xE24FL)), 0xAD2AL, ((VECTOR(uint16_t, 4))(0x8533L)), 0xCC82L)).s4 || p_543->g_163[2]) <= (*l_229))))))));
        return p_89;
    }
    return (*p_543->g_122);
}


/* ------------------------------------------ */
/* 
 * reads : p_543->g_comm_values p_543->g_26 p_543->l_comm_values p_543->g_122 p_543->g_118 p_543->g_139 p_543->g_123 p_543->g_163 p_543->g_188 p_543->g_158 p_543->g_195 p_543->g_199
 * writes: p_543->g_118 p_543->g_123 p_543->g_127 p_543->g_comm_values p_543->g_163 p_543->g_188 p_543->g_195
 */
int32_t * func_90(uint64_t  p_91, int32_t  p_92, int32_t * p_93, int32_t ** p_94, int32_t ** p_95, struct S0 * p_543)
{ /* block id: 48 */
    int32_t *l_104 = &p_543->g_26;
    int32_t *l_105 = (void*)0;
    int32_t *l_106 = (void*)0;
    int16_t l_116[3];
    int32_t l_159 = 0x5445221CL;
    int32_t l_161 = 0x1AB4B5E3L;
    int i;
    for (i = 0; i < 3; i++)
        l_116[i] = (-1L);
    for (p_92 = 0; (p_92 <= 7); p_92 = safe_add_func_int8_t_s_s(p_92, 9))
    { /* block id: 51 */
        if (((0UL > 8L) < p_543->g_comm_values[p_543->tid]))
        { /* block id: 52 */
            for (p_91 = 8; (p_91 > 7); p_91 = safe_sub_func_int64_t_s_s(p_91, 5))
            { /* block id: 55 */
                int32_t *l_103 = &p_543->g_26;
                return l_103;
            }
        }
        else
        { /* block id: 58 */
            if (p_543->g_26)
                break;
        }
        return l_104;
    }
    p_92 = (p_543->l_comm_values[(safe_mod_func_uint32_t_u_u(p_543->tid, 2))] ^ GROUP_DIVERGE(2, 1));
    for (p_91 = 26; (p_91 == 39); p_91 = safe_add_func_int16_t_s_s(p_91, 3))
    { /* block id: 66 */
        int64_t l_109[6][6][2] = {{{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}},{{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}},{{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}},{{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}},{{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}},{{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}}};
        int16_t *l_117 = &p_543->g_118;
        int32_t l_128 = 0x27C10F7CL;
        int32_t l_151 = 0x458C7FB5L;
        int32_t l_162 = (-4L);
        int32_t *l_190 = &l_151;
        int32_t *l_191 = &l_159;
        int32_t *l_192[6][5] = {{&p_543->g_160,&l_162,&l_162,&p_543->g_160,&p_543->g_160},{&p_543->g_160,&l_162,&l_162,&p_543->g_160,&p_543->g_160},{&p_543->g_160,&l_162,&l_162,&p_543->g_160,&p_543->g_160},{&p_543->g_160,&l_162,&l_162,&p_543->g_160,&p_543->g_160},{&p_543->g_160,&l_162,&l_162,&p_543->g_160,&p_543->g_160},{&p_543->g_160,&l_162,&l_162,&p_543->g_160,&p_543->g_160}};
        int32_t **l_198 = &l_192[1][4];
        int i, j, k;
        l_109[1][3][1] = ((VECTOR(int32_t, 2))(9L, 0x33121430L)).even;
        if ((safe_div_func_uint64_t_u_u(FAKE_DIVERGE(p_543->group_2_offset, get_group_id(2), 10), ((safe_mul_func_int16_t_s_s(0x2437L, (safe_rshift_func_int8_t_s_u((l_116[0] <= 0x2038209DL), 3)))) & (((((*l_117) = (0L > ((void*)0 != l_104))) != (0x95D4EB7A0ED4F26BL & (0x268DE422L ^ ((safe_div_func_uint64_t_u_u((p_543->g_26 != p_543->g_26), 0xAC07EA974B9946C5L)) ^ 0x124DL)))) && p_92) , (-1L))))))
        { /* block id: 69 */
            int32_t *l_121 = &p_543->g_26;
            uint16_t *l_126[9];
            int64_t *l_142 = (void*)0;
            int64_t *l_143 = (void*)0;
            int64_t *l_144 = (void*)0;
            int64_t *l_145 = (void*)0;
            int64_t *l_146 = (void*)0;
            int64_t *l_147 = (void*)0;
            int64_t *l_148 = (void*)0;
            int64_t *l_149 = (void*)0;
            int64_t *l_150[8][2][4] = {{{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0},{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0}},{{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0},{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0}},{{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0},{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0}},{{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0},{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0}},{{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0},{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0}},{{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0},{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0}},{{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0},{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0}},{{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0},{&l_109[1][3][1],&l_109[1][5][0],&l_109[1][3][1],(void*)0}}};
            int32_t l_152 = 0x074867D2L;
            int16_t *l_153 = &l_116[0];
            int32_t l_154 = 0x1B7EFDFDL;
            int32_t *l_155 = &l_152;
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_126[i] = &p_543->g_127;
            (*p_543->g_122) = l_121;
            l_154 ^= (((*l_153) = (((p_92 & l_109[1][3][1]) ^ ((safe_sub_func_uint16_t_u_u((l_128 = (p_543->g_127 = p_92)), ((((l_152 = (((safe_lshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((((safe_div_func_uint16_t_u_u((*l_104), (+(safe_lshift_func_uint16_t_u_u((p_543->l_comm_values[(safe_mod_func_uint32_t_u_u(p_543->tid, 2))] && (safe_lshift_func_uint16_t_u_u((0xF31FL & ((*l_117) |= (&p_93 == (void*)0))), 9))), GROUP_DIVERGE(1, 1)))))) , (+(((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0x186F313AD8628B0EL, 0xEEF009D05E8D5C61L)), 0x10CDFC88F8C12510L, 18446744073709551615UL, 0x55944B89AB21B831L, 18446744073709551611UL, 0xADA375B8AA76C0FFL, 0x8DBA4FD995B201DBL)), ((VECTOR(uint64_t, 2))(p_543->g_139.s70)).xyyyyxxx))).s5 | (l_151 = (p_543->g_comm_values[p_543->tid] = (((safe_mul_func_int16_t_s_s((!(*l_121)), 0x118FL)) & 0xFAL) , (-9L))))))) , FAKE_DIVERGE(p_543->group_0_offset, get_group_id(0), 10)), p_543->l_comm_values[(safe_mod_func_uint32_t_u_u(p_543->tid, 2))])), p_543->l_comm_values[(safe_mod_func_uint32_t_u_u(p_543->tid, 2))])) || l_151) <= (*l_121))) | p_91) && p_92) && 0x7375C898L))) , GROUP_DIVERGE(2, 1))) | l_109[1][3][1])) , 0x3E861F7AL);
            l_155 = (*p_543->g_122);
        }
        else
        { /* block id: 80 */
            int32_t *l_156[7] = {&p_543->g_26,&l_151,&p_543->g_26,&p_543->g_26,&l_151,&p_543->g_26,&p_543->g_26};
            int64_t l_157 = 2L;
            int16_t l_168 = 0L;
            int i;
            --p_543->g_163[0];
            for (l_128 = 0; (l_128 <= 23); l_128 = safe_add_func_int16_t_s_s(l_128, 8))
            { /* block id: 84 */
                int64_t *l_183[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_184 = 0L;
                int32_t l_185 = 0x25527E9DL;
                uint32_t *l_189 = &p_543->g_163[2];
                int i, j;
                l_168 = 2L;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_543->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u(((*l_189) = ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),uint32_t,((VECTOR(uint32_t, 8))((safe_sub_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_int64_t_s_s(p_91, (l_184 = (safe_mod_func_int32_t_s_s((**p_94), p_91))))), p_543->l_comm_values[(safe_mod_func_uint32_t_u_u(p_543->tid, 2))])), 0L)), l_185)) & l_128), (FAKE_DIVERGE(p_543->local_2_offset, get_local_id(2), 10) , (((VECTOR(uint64_t, 2))(1UL, 0xB51E3D7954E52F0BL)).hi ^ (p_543->g_comm_values[p_543->tid] ^= ((VECTOR(int64_t, 2))((-9L), 0x26CCCF155A403EEFL)).odd))))) , FAKE_DIVERGE(p_543->group_2_offset, get_group_id(2), 10)) , ((safe_add_func_int64_t_s_s((p_543->g_188 &= (p_543->g_comm_values[p_543->tid] = ((+((*p_94) != (void*)0)) ^ p_543->g_163[0]))), FAKE_DIVERGE(p_543->local_2_offset, get_local_id(2), 10))) <= 0x71L)), p_543->g_158)), 0x0E34D3FBL, 4294967295UL, 0x8F5AF2D6L, p_92, ((VECTOR(uint32_t, 2))(0x5B0BACE0L)), 0x226A7185L)).odd, (uint32_t)p_543->g_118, (uint32_t)p_543->g_118))).hi, ((VECTOR(uint32_t, 2))(1UL))))), (uint32_t)p_543->g_139.s6))), ((VECTOR(uint32_t, 4))(1UL)), 0x4EE42DCAL, 1UL)).s7271553550053555)).odd)).s02)).yyyxxyyxyxxxyxyx)).s4), 10))][(safe_mod_func_uint32_t_u_u(p_543->tid, 2))]));
            }
        }
        p_543->g_195[1]++;
        (*p_543->g_199) = ((*l_198) = (*p_543->g_122));
    }
    return (*p_543->g_122);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_input[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S0 c_544;
    struct S0* p_543 = &c_544;
    struct S0 c_545 = {
        (-4L), // p_543->g_14
        0L, // p_543->g_26
        (-2L), // p_543->g_118
        (void*)0, // p_543->g_123
        &p_543->g_123, // p_543->g_122
        0x7361L, // p_543->g_127
        (VECTOR(uint64_t, 8))(0xFDF757B935A7FEA7L, (VECTOR(uint64_t, 4))(0xFDF757B935A7FEA7L, (VECTOR(uint64_t, 2))(0xFDF757B935A7FEA7L, 8UL), 8UL), 8UL, 0xFDF757B935A7FEA7L, 8UL), // p_543->g_139
        0x31B5973AL, // p_543->g_158
        (-7L), // p_543->g_160
        {0x0E68A72DL,0x0E68A72DL,0x0E68A72DL}, // p_543->g_163
        0xBC91L, // p_543->g_188
        {1L,1L}, // p_543->g_193
        0L, // p_543->g_194
        {0x9731A4E5B9BD4E5EL,0x9731A4E5B9BD4E5EL}, // p_543->g_195
        &p_543->g_123, // p_543->g_199
        0x26L, // p_543->g_204
        (-6L), // p_543->g_205
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_543->g_225
        0L, // p_543->g_227
        (VECTOR(uint8_t, 4))(0x0DL, (VECTOR(uint8_t, 2))(0x0DL, 0x73L), 0x73L), // p_543->g_242
        (void*)0, // p_543->g_252
        &p_543->g_160, // p_543->g_253
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xF7B3L), 0xF7B3L), // p_543->g_261
        (VECTOR(uint16_t, 16))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0x030BL), 0x030BL), 0x030BL, 65532UL, 0x030BL, (VECTOR(uint16_t, 2))(65532UL, 0x030BL), (VECTOR(uint16_t, 2))(65532UL, 0x030BL), 65532UL, 0x030BL, 65532UL, 0x030BL), // p_543->g_263
        (void*)0, // p_543->g_265
        (void*)0, // p_543->g_269
        (-6L), // p_543->g_272
        &p_543->g_123, // p_543->g_275
        0x62L, // p_543->g_287
        6L, // p_543->g_288
        0x70CE382FL, // p_543->g_289
        249UL, // p_543->g_290
        {&p_543->g_227,&p_543->g_227,&p_543->g_227,&p_543->g_227,&p_543->g_227,&p_543->g_227}, // p_543->g_300
        &p_543->g_300[2], // p_543->g_299
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_543->g_308
        &p_543->g_123, // p_543->g_328
        0x9506L, // p_543->g_343
        (VECTOR(uint8_t, 16))(0x4FL, (VECTOR(uint8_t, 4))(0x4FL, (VECTOR(uint8_t, 2))(0x4FL, 0x7CL), 0x7CL), 0x7CL, 0x4FL, 0x7CL, (VECTOR(uint8_t, 2))(0x4FL, 0x7CL), (VECTOR(uint8_t, 2))(0x4FL, 0x7CL), 0x4FL, 0x7CL, 0x4FL, 0x7CL), // p_543->g_354
        (VECTOR(uint8_t, 16))(0x53L, (VECTOR(uint8_t, 4))(0x53L, (VECTOR(uint8_t, 2))(0x53L, 0xBFL), 0xBFL), 0xBFL, 0x53L, 0xBFL, (VECTOR(uint8_t, 2))(0x53L, 0xBFL), (VECTOR(uint8_t, 2))(0x53L, 0xBFL), 0x53L, 0xBFL, 0x53L, 0xBFL), // p_543->g_355
        (VECTOR(uint8_t, 8))(0xA9L, (VECTOR(uint8_t, 4))(0xA9L, (VECTOR(uint8_t, 2))(0xA9L, 0x06L), 0x06L), 0x06L, 0xA9L, 0x06L), // p_543->g_358
        (VECTOR(uint8_t, 2))(1UL, 0x69L), // p_543->g_359
        (VECTOR(uint8_t, 2))(7UL, 1UL), // p_543->g_360
        0x61D6DC17AE839DA0L, // p_543->g_364
        (VECTOR(uint16_t, 8))(0x1A62L, (VECTOR(uint16_t, 4))(0x1A62L, (VECTOR(uint16_t, 2))(0x1A62L, 0x77E6L), 0x77E6L), 0x77E6L, 0x1A62L, 0x77E6L), // p_543->g_369
        (VECTOR(uint16_t, 16))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 65531UL), 65531UL), 65531UL, 65532UL, 65531UL, (VECTOR(uint16_t, 2))(65532UL, 65531UL), (VECTOR(uint16_t, 2))(65532UL, 65531UL), 65532UL, 65531UL, 65532UL, 65531UL), // p_543->g_387
        (void*)0, // p_543->g_468
        (void*)0, // p_543->g_480
        (VECTOR(uint32_t, 8))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 4294967293UL), 4294967293UL), 4294967293UL, 4294967294UL, 4294967293UL), // p_543->g_487
        (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 4294967295UL), 4294967295UL), // p_543->g_489
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL), // p_543->g_491
        0x0FL, // p_543->g_501
        (VECTOR(uint64_t, 4))(0xBDBB7FD2C7323DBCL, (VECTOR(uint64_t, 2))(0xBDBB7FD2C7323DBCL, 18446744073709551609UL), 18446744073709551609UL), // p_543->g_509
        (-7L), // p_543->g_530
        0x1C6750EE5B0BAB85L, // p_543->g_533
        (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x43L), 0x43L), 0x43L, (-5L), 0x43L), // p_543->g_534
        0, // p_543->v_collective
        sequence_input[get_global_id(0)], // p_543->global_0_offset
        sequence_input[get_global_id(1)], // p_543->global_1_offset
        sequence_input[get_global_id(2)], // p_543->global_2_offset
        sequence_input[get_local_id(0)], // p_543->local_0_offset
        sequence_input[get_local_id(1)], // p_543->local_1_offset
        sequence_input[get_local_id(2)], // p_543->local_2_offset
        sequence_input[get_group_id(0)], // p_543->group_0_offset
        sequence_input[get_group_id(1)], // p_543->group_1_offset
        sequence_input[get_group_id(2)], // p_543->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_543->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_544 = c_545;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_543);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_543->g_14, "p_543->g_14", print_hash_value);
    transparent_crc(p_543->g_26, "p_543->g_26", print_hash_value);
    transparent_crc(p_543->g_118, "p_543->g_118", print_hash_value);
    transparent_crc(p_543->g_127, "p_543->g_127", print_hash_value);
    transparent_crc(p_543->g_139.s0, "p_543->g_139.s0", print_hash_value);
    transparent_crc(p_543->g_139.s1, "p_543->g_139.s1", print_hash_value);
    transparent_crc(p_543->g_139.s2, "p_543->g_139.s2", print_hash_value);
    transparent_crc(p_543->g_139.s3, "p_543->g_139.s3", print_hash_value);
    transparent_crc(p_543->g_139.s4, "p_543->g_139.s4", print_hash_value);
    transparent_crc(p_543->g_139.s5, "p_543->g_139.s5", print_hash_value);
    transparent_crc(p_543->g_139.s6, "p_543->g_139.s6", print_hash_value);
    transparent_crc(p_543->g_139.s7, "p_543->g_139.s7", print_hash_value);
    transparent_crc(p_543->g_158, "p_543->g_158", print_hash_value);
    transparent_crc(p_543->g_160, "p_543->g_160", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_543->g_163[i], "p_543->g_163[i]", print_hash_value);

    }
    transparent_crc(p_543->g_188, "p_543->g_188", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_543->g_193[i], "p_543->g_193[i]", print_hash_value);

    }
    transparent_crc(p_543->g_194, "p_543->g_194", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_543->g_195[i], "p_543->g_195[i]", print_hash_value);

    }
    transparent_crc(p_543->g_204, "p_543->g_204", print_hash_value);
    transparent_crc(p_543->g_205, "p_543->g_205", print_hash_value);
    transparent_crc(p_543->g_227, "p_543->g_227", print_hash_value);
    transparent_crc(p_543->g_242.x, "p_543->g_242.x", print_hash_value);
    transparent_crc(p_543->g_242.y, "p_543->g_242.y", print_hash_value);
    transparent_crc(p_543->g_242.z, "p_543->g_242.z", print_hash_value);
    transparent_crc(p_543->g_242.w, "p_543->g_242.w", print_hash_value);
    transparent_crc(p_543->g_261.x, "p_543->g_261.x", print_hash_value);
    transparent_crc(p_543->g_261.y, "p_543->g_261.y", print_hash_value);
    transparent_crc(p_543->g_261.z, "p_543->g_261.z", print_hash_value);
    transparent_crc(p_543->g_261.w, "p_543->g_261.w", print_hash_value);
    transparent_crc(p_543->g_263.s0, "p_543->g_263.s0", print_hash_value);
    transparent_crc(p_543->g_263.s1, "p_543->g_263.s1", print_hash_value);
    transparent_crc(p_543->g_263.s2, "p_543->g_263.s2", print_hash_value);
    transparent_crc(p_543->g_263.s3, "p_543->g_263.s3", print_hash_value);
    transparent_crc(p_543->g_263.s4, "p_543->g_263.s4", print_hash_value);
    transparent_crc(p_543->g_263.s5, "p_543->g_263.s5", print_hash_value);
    transparent_crc(p_543->g_263.s6, "p_543->g_263.s6", print_hash_value);
    transparent_crc(p_543->g_263.s7, "p_543->g_263.s7", print_hash_value);
    transparent_crc(p_543->g_263.s8, "p_543->g_263.s8", print_hash_value);
    transparent_crc(p_543->g_263.s9, "p_543->g_263.s9", print_hash_value);
    transparent_crc(p_543->g_263.sa, "p_543->g_263.sa", print_hash_value);
    transparent_crc(p_543->g_263.sb, "p_543->g_263.sb", print_hash_value);
    transparent_crc(p_543->g_263.sc, "p_543->g_263.sc", print_hash_value);
    transparent_crc(p_543->g_263.sd, "p_543->g_263.sd", print_hash_value);
    transparent_crc(p_543->g_263.se, "p_543->g_263.se", print_hash_value);
    transparent_crc(p_543->g_263.sf, "p_543->g_263.sf", print_hash_value);
    transparent_crc(p_543->g_272, "p_543->g_272", print_hash_value);
    transparent_crc(p_543->g_287, "p_543->g_287", print_hash_value);
    transparent_crc(p_543->g_288, "p_543->g_288", print_hash_value);
    transparent_crc(p_543->g_289, "p_543->g_289", print_hash_value);
    transparent_crc(p_543->g_290, "p_543->g_290", print_hash_value);
    transparent_crc(p_543->g_343, "p_543->g_343", print_hash_value);
    transparent_crc(p_543->g_354.s0, "p_543->g_354.s0", print_hash_value);
    transparent_crc(p_543->g_354.s1, "p_543->g_354.s1", print_hash_value);
    transparent_crc(p_543->g_354.s2, "p_543->g_354.s2", print_hash_value);
    transparent_crc(p_543->g_354.s3, "p_543->g_354.s3", print_hash_value);
    transparent_crc(p_543->g_354.s4, "p_543->g_354.s4", print_hash_value);
    transparent_crc(p_543->g_354.s5, "p_543->g_354.s5", print_hash_value);
    transparent_crc(p_543->g_354.s6, "p_543->g_354.s6", print_hash_value);
    transparent_crc(p_543->g_354.s7, "p_543->g_354.s7", print_hash_value);
    transparent_crc(p_543->g_354.s8, "p_543->g_354.s8", print_hash_value);
    transparent_crc(p_543->g_354.s9, "p_543->g_354.s9", print_hash_value);
    transparent_crc(p_543->g_354.sa, "p_543->g_354.sa", print_hash_value);
    transparent_crc(p_543->g_354.sb, "p_543->g_354.sb", print_hash_value);
    transparent_crc(p_543->g_354.sc, "p_543->g_354.sc", print_hash_value);
    transparent_crc(p_543->g_354.sd, "p_543->g_354.sd", print_hash_value);
    transparent_crc(p_543->g_354.se, "p_543->g_354.se", print_hash_value);
    transparent_crc(p_543->g_354.sf, "p_543->g_354.sf", print_hash_value);
    transparent_crc(p_543->g_355.s0, "p_543->g_355.s0", print_hash_value);
    transparent_crc(p_543->g_355.s1, "p_543->g_355.s1", print_hash_value);
    transparent_crc(p_543->g_355.s2, "p_543->g_355.s2", print_hash_value);
    transparent_crc(p_543->g_355.s3, "p_543->g_355.s3", print_hash_value);
    transparent_crc(p_543->g_355.s4, "p_543->g_355.s4", print_hash_value);
    transparent_crc(p_543->g_355.s5, "p_543->g_355.s5", print_hash_value);
    transparent_crc(p_543->g_355.s6, "p_543->g_355.s6", print_hash_value);
    transparent_crc(p_543->g_355.s7, "p_543->g_355.s7", print_hash_value);
    transparent_crc(p_543->g_355.s8, "p_543->g_355.s8", print_hash_value);
    transparent_crc(p_543->g_355.s9, "p_543->g_355.s9", print_hash_value);
    transparent_crc(p_543->g_355.sa, "p_543->g_355.sa", print_hash_value);
    transparent_crc(p_543->g_355.sb, "p_543->g_355.sb", print_hash_value);
    transparent_crc(p_543->g_355.sc, "p_543->g_355.sc", print_hash_value);
    transparent_crc(p_543->g_355.sd, "p_543->g_355.sd", print_hash_value);
    transparent_crc(p_543->g_355.se, "p_543->g_355.se", print_hash_value);
    transparent_crc(p_543->g_355.sf, "p_543->g_355.sf", print_hash_value);
    transparent_crc(p_543->g_358.s0, "p_543->g_358.s0", print_hash_value);
    transparent_crc(p_543->g_358.s1, "p_543->g_358.s1", print_hash_value);
    transparent_crc(p_543->g_358.s2, "p_543->g_358.s2", print_hash_value);
    transparent_crc(p_543->g_358.s3, "p_543->g_358.s3", print_hash_value);
    transparent_crc(p_543->g_358.s4, "p_543->g_358.s4", print_hash_value);
    transparent_crc(p_543->g_358.s5, "p_543->g_358.s5", print_hash_value);
    transparent_crc(p_543->g_358.s6, "p_543->g_358.s6", print_hash_value);
    transparent_crc(p_543->g_358.s7, "p_543->g_358.s7", print_hash_value);
    transparent_crc(p_543->g_359.x, "p_543->g_359.x", print_hash_value);
    transparent_crc(p_543->g_359.y, "p_543->g_359.y", print_hash_value);
    transparent_crc(p_543->g_360.x, "p_543->g_360.x", print_hash_value);
    transparent_crc(p_543->g_360.y, "p_543->g_360.y", print_hash_value);
    transparent_crc(p_543->g_364, "p_543->g_364", print_hash_value);
    transparent_crc(p_543->g_369.s0, "p_543->g_369.s0", print_hash_value);
    transparent_crc(p_543->g_369.s1, "p_543->g_369.s1", print_hash_value);
    transparent_crc(p_543->g_369.s2, "p_543->g_369.s2", print_hash_value);
    transparent_crc(p_543->g_369.s3, "p_543->g_369.s3", print_hash_value);
    transparent_crc(p_543->g_369.s4, "p_543->g_369.s4", print_hash_value);
    transparent_crc(p_543->g_369.s5, "p_543->g_369.s5", print_hash_value);
    transparent_crc(p_543->g_369.s6, "p_543->g_369.s6", print_hash_value);
    transparent_crc(p_543->g_369.s7, "p_543->g_369.s7", print_hash_value);
    transparent_crc(p_543->g_387.s0, "p_543->g_387.s0", print_hash_value);
    transparent_crc(p_543->g_387.s1, "p_543->g_387.s1", print_hash_value);
    transparent_crc(p_543->g_387.s2, "p_543->g_387.s2", print_hash_value);
    transparent_crc(p_543->g_387.s3, "p_543->g_387.s3", print_hash_value);
    transparent_crc(p_543->g_387.s4, "p_543->g_387.s4", print_hash_value);
    transparent_crc(p_543->g_387.s5, "p_543->g_387.s5", print_hash_value);
    transparent_crc(p_543->g_387.s6, "p_543->g_387.s6", print_hash_value);
    transparent_crc(p_543->g_387.s7, "p_543->g_387.s7", print_hash_value);
    transparent_crc(p_543->g_387.s8, "p_543->g_387.s8", print_hash_value);
    transparent_crc(p_543->g_387.s9, "p_543->g_387.s9", print_hash_value);
    transparent_crc(p_543->g_387.sa, "p_543->g_387.sa", print_hash_value);
    transparent_crc(p_543->g_387.sb, "p_543->g_387.sb", print_hash_value);
    transparent_crc(p_543->g_387.sc, "p_543->g_387.sc", print_hash_value);
    transparent_crc(p_543->g_387.sd, "p_543->g_387.sd", print_hash_value);
    transparent_crc(p_543->g_387.se, "p_543->g_387.se", print_hash_value);
    transparent_crc(p_543->g_387.sf, "p_543->g_387.sf", print_hash_value);
    transparent_crc(p_543->g_487.s0, "p_543->g_487.s0", print_hash_value);
    transparent_crc(p_543->g_487.s1, "p_543->g_487.s1", print_hash_value);
    transparent_crc(p_543->g_487.s2, "p_543->g_487.s2", print_hash_value);
    transparent_crc(p_543->g_487.s3, "p_543->g_487.s3", print_hash_value);
    transparent_crc(p_543->g_487.s4, "p_543->g_487.s4", print_hash_value);
    transparent_crc(p_543->g_487.s5, "p_543->g_487.s5", print_hash_value);
    transparent_crc(p_543->g_487.s6, "p_543->g_487.s6", print_hash_value);
    transparent_crc(p_543->g_487.s7, "p_543->g_487.s7", print_hash_value);
    transparent_crc(p_543->g_489.x, "p_543->g_489.x", print_hash_value);
    transparent_crc(p_543->g_489.y, "p_543->g_489.y", print_hash_value);
    transparent_crc(p_543->g_489.z, "p_543->g_489.z", print_hash_value);
    transparent_crc(p_543->g_489.w, "p_543->g_489.w", print_hash_value);
    transparent_crc(p_543->g_491.x, "p_543->g_491.x", print_hash_value);
    transparent_crc(p_543->g_491.y, "p_543->g_491.y", print_hash_value);
    transparent_crc(p_543->g_491.z, "p_543->g_491.z", print_hash_value);
    transparent_crc(p_543->g_491.w, "p_543->g_491.w", print_hash_value);
    transparent_crc(p_543->g_501, "p_543->g_501", print_hash_value);
    transparent_crc(p_543->g_509.x, "p_543->g_509.x", print_hash_value);
    transparent_crc(p_543->g_509.y, "p_543->g_509.y", print_hash_value);
    transparent_crc(p_543->g_509.z, "p_543->g_509.z", print_hash_value);
    transparent_crc(p_543->g_509.w, "p_543->g_509.w", print_hash_value);
    transparent_crc(p_543->g_530, "p_543->g_530", print_hash_value);
    transparent_crc(p_543->g_533, "p_543->g_533", print_hash_value);
    transparent_crc(p_543->g_534.s0, "p_543->g_534.s0", print_hash_value);
    transparent_crc(p_543->g_534.s1, "p_543->g_534.s1", print_hash_value);
    transparent_crc(p_543->g_534.s2, "p_543->g_534.s2", print_hash_value);
    transparent_crc(p_543->g_534.s3, "p_543->g_534.s3", print_hash_value);
    transparent_crc(p_543->g_534.s4, "p_543->g_534.s4", print_hash_value);
    transparent_crc(p_543->g_534.s5, "p_543->g_534.s5", print_hash_value);
    transparent_crc(p_543->g_534.s6, "p_543->g_534.s6", print_hash_value);
    transparent_crc(p_543->g_534.s7, "p_543->g_534.s7", print_hash_value);
    transparent_crc(p_543->v_collective, "p_543->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 1; i++)
            transparent_crc(p_543->l_special_values[i], "p_543->l_special_values[i]", print_hash_value);
    transparent_crc(p_543->l_comm_values[get_linear_local_id()], "p_543->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_543->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_543->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
