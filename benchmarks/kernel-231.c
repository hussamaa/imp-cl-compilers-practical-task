// --atomics 38 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 3,1,39 -l 3,1,3
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
{1,6,7,4,5,3,0,8,2}, // permutation 0
{7,5,6,8,4,2,0,3,1}, // permutation 1
{5,6,7,3,1,2,0,8,4}, // permutation 2
{6,4,1,7,8,5,2,3,0}, // permutation 3
{7,5,8,3,4,0,6,1,2}, // permutation 4
{7,2,0,6,4,5,1,8,3}, // permutation 5
{4,7,8,1,3,2,6,0,5}, // permutation 6
{3,2,5,7,6,0,8,4,1}, // permutation 7
{5,7,6,1,3,4,0,2,8}, // permutation 8
{8,2,4,6,7,3,5,0,1} // permutation 9
};

// Seed: 2991045440

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile VECTOR(uint8_t, 16) g_19;
    VECTOR(uint8_t, 16) g_20;
    int32_t g_36;
    int32_t *g_35;
    VECTOR(int8_t, 16) g_101;
    int16_t g_112[10];
    int64_t g_132;
    int16_t g_134;
    int16_t *g_133;
    int64_t g_141;
    int64_t *g_140[2][6][2];
    uint64_t g_158[7];
    int32_t g_162;
    int8_t g_166;
    int16_t g_171;
    uint8_t g_172;
    uint16_t g_285;
    uint8_t g_292;
    int8_t g_299;
    uint32_t g_301;
    VECTOR(uint16_t, 4) g_317;
    uint64_t g_331;
    uint32_t g_335;
    int32_t g_339[4][7][2];
    int32_t * volatile g_338;
    VECTOR(uint16_t, 16) g_376;
    VECTOR(int8_t, 4) g_380;
    int32_t g_392[3][6];
    volatile VECTOR(uint16_t, 16) g_414;
    VECTOR(uint32_t, 2) g_418;
    volatile VECTOR(uint16_t, 4) g_419;
    volatile VECTOR(uint64_t, 2) g_420;
    int32_t g_438;
    VECTOR(uint32_t, 16) g_452;
    int32_t * volatile g_454;
    int32_t ** volatile g_456;
    uint32_t g_469;
    VECTOR(int32_t, 4) g_473;
    int32_t * volatile g_482;
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
uint8_t  func_1(struct S0 * p_486);
int32_t * func_2(uint32_t  p_3, struct S0 * p_486);
uint64_t  func_5(uint64_t  p_6, int64_t  p_7, int16_t  p_8, struct S0 * p_486);
uint64_t  func_23(int32_t * p_24, int32_t  p_25, uint32_t  p_26, int32_t * p_27, int64_t  p_28, struct S0 * p_486);
int32_t * func_29(uint8_t  p_30, int32_t * p_31, int32_t * p_32, int32_t * p_33, int32_t * p_34, struct S0 * p_486);
uint16_t  func_40(uint64_t  p_41, struct S0 * p_486);
int8_t  func_104(uint8_t  p_105, int16_t  p_106, int32_t ** p_107, int8_t  p_108, struct S0 * p_486);
int32_t  func_120(int32_t ** p_121, uint64_t  p_122, int32_t ** p_123, int32_t ** p_124, int32_t * p_125, struct S0 * p_486);
int32_t ** func_126(int16_t * p_127, uint64_t  p_128, int64_t  p_129, int64_t  p_130, struct S0 * p_486);
uint32_t  func_136(int64_t * p_137, int64_t  p_138, uint8_t  p_139, struct S0 * p_486);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_486->g_comm_values p_486->l_comm_values p_486->g_19 p_486->g_20 p_486->g_35 p_486->g_36 p_486->g_101 p_486->g_133 p_486->g_140 p_486->g_158 p_486->g_166 p_486->g_172 p_486->g_134 p_486->g_301 p_486->g_317 p_486->g_162 p_486->g_331 p_486->g_132 p_486->g_141 p_486->g_335 p_486->g_292 p_486->g_338 p_486->g_285 p_486->g_376 p_486->g_380 p_486->g_392 p_486->g_339 p_486->g_414 p_486->g_418 p_486->g_419 p_486->g_420 p_486->g_438 p_486->g_452 p_486->g_299 p_486->g_454 p_486->g_456 p_486->g_469 p_486->g_473
 * writes: p_486->g_36 p_486->g_35 p_486->g_112 p_486->g_132 p_486->g_133 p_486->g_20 p_486->g_158 p_486->g_162 p_486->g_166 p_486->g_172 p_486->g_285 p_486->g_134 p_486->g_292 p_486->g_301 p_486->g_331 p_486->g_335 p_486->g_339 p_486->g_438 p_486->g_140 p_486->g_418 p_486->g_392 p_486->g_469
 */
uint8_t  func_1(struct S0 * p_486)
{ /* block id: 4 */
    int64_t l_4 = 2L;
    int32_t *l_391 = &p_486->g_392[0][4];
    int64_t l_396 = 0x03875E01DEE14E41L;
    uint32_t *l_397 = &p_486->g_301;
    uint32_t *l_462 = (void*)0;
    uint8_t l_465 = 0xE5L;
    uint64_t *l_468[1][10][8] = {{{(void*)0,&p_486->g_331,&p_486->g_331,(void*)0,&p_486->g_158[1],(void*)0,(void*)0,&p_486->g_158[0]},{(void*)0,&p_486->g_331,&p_486->g_331,(void*)0,&p_486->g_158[1],(void*)0,(void*)0,&p_486->g_158[0]},{(void*)0,&p_486->g_331,&p_486->g_331,(void*)0,&p_486->g_158[1],(void*)0,(void*)0,&p_486->g_158[0]},{(void*)0,&p_486->g_331,&p_486->g_331,(void*)0,&p_486->g_158[1],(void*)0,(void*)0,&p_486->g_158[0]},{(void*)0,&p_486->g_331,&p_486->g_331,(void*)0,&p_486->g_158[1],(void*)0,(void*)0,&p_486->g_158[0]},{(void*)0,&p_486->g_331,&p_486->g_331,(void*)0,&p_486->g_158[1],(void*)0,(void*)0,&p_486->g_158[0]},{(void*)0,&p_486->g_331,&p_486->g_331,(void*)0,&p_486->g_158[1],(void*)0,(void*)0,&p_486->g_158[0]},{(void*)0,&p_486->g_331,&p_486->g_331,(void*)0,&p_486->g_158[1],(void*)0,(void*)0,&p_486->g_158[0]},{(void*)0,&p_486->g_331,&p_486->g_331,(void*)0,&p_486->g_158[1],(void*)0,(void*)0,&p_486->g_158[0]},{(void*)0,&p_486->g_331,&p_486->g_331,(void*)0,&p_486->g_158[1],(void*)0,(void*)0,&p_486->g_158[0]}}};
    int32_t l_472 = 0x74A12256L;
    VECTOR(int64_t, 2) l_476 = (VECTOR(int64_t, 2))(7L, 0x5C35F43969868C86L);
    int32_t l_481[1][10][5] = {{{0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL},{0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL},{0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL},{0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL},{0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL},{0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL},{0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL},{0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL},{0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL},{0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL,0x391B8A0DL}}};
    int32_t *l_483 = (void*)0;
    int32_t *l_484 = (void*)0;
    int32_t *l_485 = &p_486->g_36;
    int i, j, k;
    (*p_486->g_456) = func_2(((l_4 , (18446744073709551615UL <= func_5(l_4, (safe_mul_func_int16_t_s_s((p_486->g_comm_values[p_486->tid] | l_4), l_4)), ((safe_mul_func_int16_t_s_s((((*l_397) = ((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(p_486->l_comm_values[(safe_mod_func_uint32_t_u_u(p_486->tid, 9))], ((safe_lshift_func_int8_t_s_s((((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_486->g_19.sc9a1)))), 5UL, ((VECTOR(uint8_t, 2))(p_486->g_20.s12)), 0x4FL, (p_486->g_19.s4 , (safe_add_func_uint64_t_u_u(func_23(func_29((255UL > (-1L)), p_486->g_35, &p_486->g_36, &p_486->g_36, &p_486->g_36, p_486), p_486->g_101.s9, p_486->g_141, l_391, (*l_391), p_486), (*l_391)))), (*l_391), p_486->g_36, (*l_391), p_486->g_339[2][5][0], ((VECTOR(uint8_t, 2))(0xF4L)), 0x42L)), ((VECTOR(uint8_t, 16))(0xC6L)), ((VECTOR(uint8_t, 16))(0xF4L))))).s38c0)).xyzyywwwyzyxxwzz)), ((VECTOR(uint8_t, 16))(0x31L))))).odd, (uint8_t)(*l_391), (uint8_t)GROUP_DIVERGE(2, 1)))), 0x2BL, 0x4FL, ((VECTOR(uint8_t, 2))(0x4EL)), GROUP_DIVERGE(0, 1), (*l_391), 253UL, 251UL)).sbd77, ((VECTOR(uint8_t, 4))(255UL))))).w || l_396), (*l_391))) > (*l_391)))) <= p_486->g_376.s4), (*l_391))) < GROUP_DIVERGE(2, 1))) , (*l_391)), p_486->g_376.sb)) , 0x648BL), p_486))) , p_486->g_317.y), p_486);
    (*l_485) = (safe_add_func_int64_t_s_s((((safe_unary_minus_func_uint32_t_u(((safe_div_func_uint32_t_u_u(((*l_391) |= (!((*l_397) = 0xABDD607CL))), (l_472 = (safe_sub_func_uint32_t_u_u(l_465, (safe_div_func_uint64_t_u_u((p_486->g_414.s8 , (p_486->g_469--)), p_486->l_comm_values[(safe_mod_func_uint32_t_u_u(p_486->tid, 9))]))))))) < p_486->g_20.s4))) == ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x0978FC63L, (-1L))))), 0x52232DE3L, 3L, 0L, 0x536A3E8BL, 7L, 0x378843F5L)).s05, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_486->g_473.yy))))))).odd) != (0x6019L ^ (safe_lshift_func_int8_t_s_s((p_486->g_158[5] | ((VECTOR(int64_t, 16))(l_476.yxyxyyxyxxyyxyyy)).s0), ((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))((((safe_rshift_func_uint8_t_u_s(p_486->g_380.w, l_481[0][4][1])) ^ (-2L)) <= p_486->g_285), l_476.y, ((VECTOR(int8_t, 4))((-10L))), 0x09L, 0x3DL)).s42, (int8_t)(-4L)))).yxyyyyyx)))), ((VECTOR(int8_t, 8))((-1L))), ((VECTOR(int8_t, 8))(0L))))).s2645302202767245)).s24db, ((VECTOR(int8_t, 4))(1L))))).w, (-9L))) > p_486->g_132))))), p_486->g_438));
    return p_486->g_452.s3;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_2(uint32_t  p_3, struct S0 * p_486)
{ /* block id: 243 */
    int32_t *l_455 = &p_486->g_392[0][4];
    return l_455;
}


/* ------------------------------------------ */
/* 
 * reads : p_486->g_172 p_486->g_380 p_486->g_317 p_486->g_338 p_486->g_133 p_486->g_134 p_486->g_335 p_486->g_414 p_486->g_418 p_486->g_419 p_486->g_420 p_486->g_331 p_486->g_285 p_486->g_339 p_486->l_comm_values p_486->g_438 p_486->g_452 p_486->g_299 p_486->g_35 p_486->g_454 p_486->g_36
 * writes: p_486->g_339 p_486->g_35 p_486->g_331 p_486->g_285 p_486->g_438 p_486->g_140 p_486->g_418 p_486->g_335 p_486->g_36
 */
uint64_t  func_5(uint64_t  p_6, int64_t  p_7, int16_t  p_8, struct S0 * p_486)
{ /* block id: 220 */
    int32_t **l_398 = &p_486->g_35;
    uint32_t l_405 = 4294967295UL;
    VECTOR(uint64_t, 8) l_415 = (VECTOR(uint64_t, 8))(0x83F6B17746CD1033L, (VECTOR(uint64_t, 4))(0x83F6B17746CD1033L, (VECTOR(uint64_t, 2))(0x83F6B17746CD1033L, 0x08B81208BEEAF6CEL), 0x08B81208BEEAF6CEL), 0x08B81208BEEAF6CEL, 0x83F6B17746CD1033L, 0x08B81208BEEAF6CEL);
    int64_t *l_421 = (void*)0;
    int64_t *l_422 = (void*)0;
    int32_t l_423 = (-1L);
    int32_t *l_426 = &p_486->g_339[2][1][0];
    uint64_t *l_427 = &p_486->g_331;
    uint16_t *l_428 = &p_486->g_285;
    uint16_t *l_429 = (void*)0;
    uint16_t *l_430 = (void*)0;
    uint16_t *l_431 = (void*)0;
    uint16_t *l_432 = (void*)0;
    uint16_t *l_433[1];
    int32_t l_434 = 0x131F3B27L;
    int8_t *l_435[1][6][7] = {{{(void*)0,&p_486->g_299,&p_486->g_166,(void*)0,(void*)0,(void*)0,&p_486->g_166},{(void*)0,&p_486->g_299,&p_486->g_166,(void*)0,(void*)0,(void*)0,&p_486->g_166},{(void*)0,&p_486->g_299,&p_486->g_166,(void*)0,(void*)0,(void*)0,&p_486->g_166},{(void*)0,&p_486->g_299,&p_486->g_166,(void*)0,(void*)0,(void*)0,&p_486->g_166},{(void*)0,&p_486->g_299,&p_486->g_166,(void*)0,(void*)0,(void*)0,&p_486->g_166},{(void*)0,&p_486->g_299,&p_486->g_166,(void*)0,(void*)0,(void*)0,&p_486->g_166}}};
    uint8_t l_436[5];
    int32_t *l_437 = &p_486->g_438;
    VECTOR(int32_t, 16) l_449 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x5943739BL), 0x5943739BL), 0x5943739BL, 2L, 0x5943739BL, (VECTOR(int32_t, 2))(2L, 0x5943739BL), (VECTOR(int32_t, 2))(2L, 0x5943739BL), 2L, 0x5943739BL, 2L, 0x5943739BL);
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_433[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_436[i] = 0x30L;
    (*p_486->g_338) = (p_486->g_172 ^ (1UL && (p_486->g_380.x | p_486->g_317.z)));
    (*l_398) = (void*)0;
    if (((*p_486->g_133) ^ ((safe_div_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((p_486->g_335 , l_405), 3UL)) , ((VECTOR(int8_t, 8))((((*l_437) |= (safe_div_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(2, 1), (l_436[3] = (safe_add_func_uint16_t_u_u((l_434 = ((*l_428) &= (safe_mod_func_int16_t_s_s((p_8 ^= (((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_486->g_414.s4e82)).xyywwxzz)).s34)).xxyy, ((VECTOR(uint16_t, 8))(GROUP_DIVERGE(2, 1), ((0x45CBE32688C6A88DL | ((VECTOR(uint64_t, 8))(l_415.s04253362)).s3) || (l_423 = (safe_div_func_int64_t_s_s(l_415.s0, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 8))(0x1AFFFFF6L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(p_486->g_418.yxyxxyyy)).s45)).yyyx)), 3UL, 0UL, 0xFA6E7BFBL)).s04, ((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0x10BDL, 65532UL, 0x7BD7L, 0UL)).wzzzyyzw)), ((VECTOR(uint16_t, 8))(p_486->g_419.xzxxyzyy))))).s30))).yxxxyxyxyxyxxxyy)).s8f, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(p_486->g_420.xxxx)))).lo))).xxxxyyxy)))).hi))).even)).even)))), 65535UL, 0xF799L, 65535UL, 0xF420L, 0x9131L, 65529UL)).odd))).z != (safe_sub_func_uint16_t_u_u((l_415.s6 && ((*l_427) |= ((((((*l_426) = (((0L >= (*p_486->g_133)) && 5L) && (-1L))) <= p_7) <= 0L) , &p_486->g_162) != &p_486->g_162))), p_7)))), (*p_486->g_133))))), 0x9CAEL))))) , p_486->g_339[2][3][0]), p_486->l_comm_values[(safe_mod_func_uint32_t_u_u(p_486->tid, 9))]))) , 0x4FL), 0x08L, ((VECTOR(int8_t, 2))(0x32L)), p_6, p_7, 4L, 0x71L)).s0), FAKE_DIVERGE(p_486->group_2_offset, get_group_id(2), 10))) > p_486->g_172)))
    { /* block id: 231 */
        int64_t *l_443 = &p_486->g_132;
        int64_t **l_444 = &l_443;
        int64_t **l_445[4];
        int32_t l_448 = 0x4C3E1F6EL;
        uint32_t *l_450[8][4][4] = {{{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405}},{{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405}},{{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405}},{{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405}},{{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405}},{{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405}},{{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405}},{{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405},{(void*)0,&l_405,&l_405,&l_405}}};
        uint32_t *l_451 = &p_486->g_335;
        int32_t l_453 = 0x3A1CD3E2L;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_445[i] = (void*)0;
        l_453 &= (safe_lshift_func_int8_t_s_s((((((p_486->g_140[1][2][0] = ((*l_444) = l_443)) == ((safe_lshift_func_int16_t_s_u(((l_448 && ((VECTOR(int32_t, 16))(l_449.se8eebd60ad73292d)).sc) < (*p_486->g_338)), 15)) , l_427)) & (((((p_486->g_418.x = 4294967288UL) , ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(9UL, ((*l_451) = p_8), p_486->g_317.z, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 16))(p_486->g_452.sd01dcab14ce9748e)).sc6, ((VECTOR(uint32_t, 2))(1UL, 0x87F6EF56L))))), 0x1C22D52EL, ((&l_436[1] != &l_436[3]) || p_486->g_299), 8UL, p_486->g_380.y, 0x3160F2FEL, FAKE_DIVERGE(p_486->group_1_offset, get_group_id(1), 10), 2UL, ((VECTOR(uint32_t, 2))(0x9DDECCE4L)), 4294967293UL, 4UL)))).odd)).s4) > GROUP_DIVERGE(2, 1)) <= GROUP_DIVERGE(2, 1)) <= 8UL)) ^ 1UL) , p_486->g_317.z), l_448));
    }
    else
    { /* block id: 237 */
        (*l_398) = (*l_398);
        (*p_486->g_454) |= ((*l_426) = (*l_426));
    }
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_486->g_292 p_486->g_380
 * writes: p_486->g_292 p_486->g_35
 */
uint64_t  func_23(int32_t * p_24, int32_t  p_25, uint32_t  p_26, int32_t * p_27, int64_t  p_28, struct S0 * p_486)
{ /* block id: 212 */
    for (p_486->g_292 = 10; (p_486->g_292 >= 36); p_486->g_292 = safe_add_func_int8_t_s_s(p_486->g_292, 8))
    { /* block id: 215 */
        int32_t **l_395 = &p_486->g_35;
        (*l_395) = (void*)0;
    }
    return p_486->g_380.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_486->g_36 p_486->g_35 p_486->g_101 p_486->g_19 p_486->g_133 p_486->g_140 p_486->l_comm_values p_486->g_20 p_486->g_158 p_486->g_166 p_486->g_172 p_486->g_134 p_486->g_301 p_486->g_317 p_486->g_162 p_486->g_331 p_486->g_132 p_486->g_141 p_486->g_335 p_486->g_292 p_486->g_338 p_486->g_285 p_486->g_376 p_486->g_380
 * writes: p_486->g_36 p_486->g_35 p_486->g_112 p_486->g_132 p_486->g_133 p_486->g_20 p_486->g_158 p_486->g_162 p_486->g_166 p_486->g_172 p_486->g_285 p_486->g_134 p_486->g_292 p_486->g_301 p_486->g_331 p_486->g_335 p_486->g_339
 */
int32_t * func_29(uint8_t  p_30, int32_t * p_31, int32_t * p_32, int32_t * p_33, int32_t * p_34, struct S0 * p_486)
{ /* block id: 5 */
    VECTOR(int64_t, 4) l_42 = (VECTOR(int64_t, 4))(0x781606DC06892764L, (VECTOR(int64_t, 2))(0x781606DC06892764L, 0x10B2811FFBE62699L), 0x10B2811FFBE62699L);
    int16_t *l_367[2];
    VECTOR(uint32_t, 2) l_377 = (VECTOR(uint32_t, 2))(1UL, 9UL);
    VECTOR(uint32_t, 4) l_379 = (VECTOR(uint32_t, 4))(0x5C336B4BL, (VECTOR(uint32_t, 2))(0x5C336B4BL, 4294967292UL), 4294967292UL);
    int32_t l_385 = 1L;
    int8_t l_386 = (-3L);
    int64_t *l_387 = (void*)0;
    int64_t *l_388 = (void*)0;
    int32_t l_389 = (-1L);
    int32_t *l_390 = (void*)0;
    int i;
    for (i = 0; i < 2; i++)
        l_367[i] = (void*)0;
    for (p_30 = 0; (p_30 >= 11); p_30 = safe_add_func_int64_t_s_s(p_30, 9))
    { /* block id: 8 */
        int32_t *l_39 = &p_486->g_36;
        (*p_33) = (*p_32);
        return l_39;
    }
    (*p_31) = ((p_486->g_112[2] = (func_40((((VECTOR(int64_t, 2))(l_42.ww)).lo ^ p_30), p_486) , (safe_unary_minus_func_int16_t_s((*p_486->g_133))))) , (~(((safe_mul_func_uint16_t_u_u(p_486->g_285, (!l_42.z))) , ((safe_mod_func_uint64_t_u_u((0x17D52D262ADCFAA5L != (safe_add_func_int64_t_s_s((l_389 = ((((safe_rshift_func_int8_t_s_u(((~p_486->g_20.sc) || ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 2))(9UL, 0xD008L)).yxxyxyyyyxxyyxxx, ((VECTOR(uint16_t, 16))(p_486->g_376.se989f7269186064a))))))).s4), 7)) >= (((VECTOR(uint32_t, 8))(l_377.yxxxxyxx)).s0 , (((VECTOR(int8_t, 16))((safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 4))(l_379.ywzx)).x)), 0x6BL, (-3L), ((VECTOR(int8_t, 4))(p_486->g_380.wxyy)), ((VECTOR(int8_t, 2))((-1L), 0x2FL)), (safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(p_30, (p_30 ^ 0L))), l_385)), (-1L), 7L, ((VECTOR(int8_t, 4))(0x4AL)))).sd & p_486->g_317.z))) <= l_386) | l_385)), l_377.y))), p_30)) && l_377.y)) != 0x8257L)));
    return l_390;
}


/* ------------------------------------------ */
/* 
 * reads : p_486->g_35 p_486->g_36 p_486->g_101 p_486->g_19 p_486->g_133 p_486->g_140 p_486->l_comm_values p_486->g_20 p_486->g_158 p_486->g_166 p_486->g_172 p_486->g_134 p_486->g_301 p_486->g_317 p_486->g_162 p_486->g_331 p_486->g_132 p_486->g_141 p_486->g_335 p_486->g_292 p_486->g_338
 * writes: p_486->g_35 p_486->g_36 p_486->g_112 p_486->g_132 p_486->g_133 p_486->g_20 p_486->g_158 p_486->g_162 p_486->g_166 p_486->g_172 p_486->g_285 p_486->g_134 p_486->g_292 p_486->g_301 p_486->g_331 p_486->g_335 p_486->g_339
 */
uint16_t  func_40(uint64_t  p_41, struct S0 * p_486)
{ /* block id: 12 */
    uint32_t l_49 = 0UL;
    int32_t l_87 = 0x631664A1L;
    uint8_t l_103 = 0xAFL;
    int64_t *l_276 = &p_486->g_141;
    int32_t **l_337 = &p_486->g_35;
    int32_t l_344 = 0x6B41BF8BL;
    int32_t l_347 = (-9L);
    int32_t l_348 = 0x1D959476L;
    int32_t l_349 = (-1L);
    int32_t l_350 = 0L;
    int32_t l_351[5];
    uint32_t l_363 = 4294967287UL;
    int i;
    for (i = 0; i < 5; i++)
        l_351[i] = 0L;
    for (p_41 = 0; (p_41 <= 38); p_41 = safe_add_func_int16_t_s_s(p_41, 3))
    { /* block id: 15 */
        int32_t *l_45 = &p_486->g_36;
        int32_t *l_46 = (void*)0;
        int32_t l_47 = 0x6D761E7FL;
        int32_t *l_48 = (void*)0;
        if ((*p_486->g_35))
            break;
        l_49--;
        if ((atomic_inc(&p_486->g_atomic_input[38 * get_linear_group_id() + 35]) == 6))
        { /* block id: 19 */
            VECTOR(uint32_t, 4) l_52 = (VECTOR(uint32_t, 4))(0xD6326003L, (VECTOR(uint32_t, 2))(0xD6326003L, 4294967295UL), 4294967295UL);
            VECTOR(uint32_t, 8) l_53 = (VECTOR(uint32_t, 8))(0x7820EAADL, (VECTOR(uint32_t, 4))(0x7820EAADL, (VECTOR(uint32_t, 2))(0x7820EAADL, 0x8D98C683L), 0x8D98C683L), 0x8D98C683L, 0x7820EAADL, 0x8D98C683L);
            int32_t l_54 = 0x0F0C0ED6L;
            uint8_t l_55 = 1UL;
            VECTOR(uint32_t, 4) l_56 = (VECTOR(uint32_t, 4))(0xB047C147L, (VECTOR(uint32_t, 2))(0xB047C147L, 4294967288UL), 4294967288UL);
            uint32_t l_57 = 4294967288UL;
            int32_t l_58 = 0x122E3BD6L;
            uint32_t l_59 = 2UL;
            VECTOR(uint32_t, 4) l_60 = (VECTOR(uint32_t, 4))(0xD1BD9F01L, (VECTOR(uint32_t, 2))(0xD1BD9F01L, 0x5C01CF56L), 0x5C01CF56L);
            VECTOR(uint32_t, 4) l_61 = (VECTOR(uint32_t, 4))(0x8F29ADBEL, (VECTOR(uint32_t, 2))(0x8F29ADBEL, 4294967295UL), 4294967295UL);
            uint8_t l_62 = 1UL;
            VECTOR(uint32_t, 8) l_63 = (VECTOR(uint32_t, 8))(0xD8FDC3C1L, (VECTOR(uint32_t, 4))(0xD8FDC3C1L, (VECTOR(uint32_t, 2))(0xD8FDC3C1L, 9UL), 9UL), 9UL, 0xD8FDC3C1L, 9UL);
            int64_t l_64 = 6L;
            int32_t l_65[10][10][2] = {{{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L}},{{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L}},{{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L}},{{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L}},{{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L}},{{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L}},{{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L}},{{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L}},{{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L}},{{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L},{1L,6L}}};
            int32_t l_66[8][4][7] = {{{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)}},{{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)}},{{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)}},{{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)}},{{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)}},{{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)}},{{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)}},{{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)},{7L,(-7L),1L,(-7L),7L,7L,(-7L)}}};
            uint32_t l_67 = 0x8D1DFF66L;
            int32_t l_68 = 0x33F4C626L;
            VECTOR(int32_t, 16) l_69 = (VECTOR(int32_t, 16))(0x3F29F9B9L, (VECTOR(int32_t, 4))(0x3F29F9B9L, (VECTOR(int32_t, 2))(0x3F29F9B9L, 0x69E501E4L), 0x69E501E4L), 0x69E501E4L, 0x3F29F9B9L, 0x69E501E4L, (VECTOR(int32_t, 2))(0x3F29F9B9L, 0x69E501E4L), (VECTOR(int32_t, 2))(0x3F29F9B9L, 0x69E501E4L), 0x3F29F9B9L, 0x69E501E4L, 0x3F29F9B9L, 0x69E501E4L);
            int8_t l_70[9][10] = {{0x54L,0x0FL,8L,0x6EL,0L,0x6EL,8L,0x0FL,0x54L,8L},{0x54L,0x0FL,8L,0x6EL,0L,0x6EL,8L,0x0FL,0x54L,8L},{0x54L,0x0FL,8L,0x6EL,0L,0x6EL,8L,0x0FL,0x54L,8L},{0x54L,0x0FL,8L,0x6EL,0L,0x6EL,8L,0x0FL,0x54L,8L},{0x54L,0x0FL,8L,0x6EL,0L,0x6EL,8L,0x0FL,0x54L,8L},{0x54L,0x0FL,8L,0x6EL,0L,0x6EL,8L,0x0FL,0x54L,8L},{0x54L,0x0FL,8L,0x6EL,0L,0x6EL,8L,0x0FL,0x54L,8L},{0x54L,0x0FL,8L,0x6EL,0L,0x6EL,8L,0x0FL,0x54L,8L},{0x54L,0x0FL,8L,0x6EL,0L,0x6EL,8L,0x0FL,0x54L,8L}};
            int i, j, k;
            l_68 = (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(0xC84060A3L, ((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(4294967295UL, 1UL)).xyyy, ((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(l_52.yyzxzxwyxzxyzzzw)).sdfe9, ((VECTOR(uint32_t, 2))(0x942FAFECL, 0x2CFB1158L)).yxxy))).xzwxwyxyxwyywyzw))).s1d57))), 5UL, 4294967290UL, 0xE70D5DD2L)))), ((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 4))(l_53.s3606)), ((VECTOR(uint32_t, 8))((l_54 = FAKE_DIVERGE(p_486->group_0_offset, get_group_id(0), 10)), 0UL, 0UL, l_55, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_56.zx)))).yyxxyxyx)).s74)).yyyxxyyy, ((VECTOR(uint32_t, 16))(0xEFAB77C1L, (l_57 , (l_59 = l_58)), (((VECTOR(uint32_t, 8))(l_60.zxwyyzyw)).s0 , ((VECTOR(uint32_t, 4))(l_61.wzxw)).w), FAKE_DIVERGE(p_486->global_0_offset, get_global_id(0), 10), GROUP_DIVERGE(0, 1), ((VECTOR(uint32_t, 4))(2UL, ((VECTOR(uint32_t, 2))(0xE0795B17L, 8UL)), 0xC348FB8AL)), l_62, ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 2))(l_63.s60)).yyxx, ((VECTOR(uint32_t, 8))(0x5D261810L, 4294967291UL, 3UL, 0x16A1EA56L, 0xCDB7CFF1L, (l_64 , l_65[5][0][1]), 0xA1293870L, 0xDC3D349FL)).even))), 1UL, 0xCAF44556L)).even))).s26)), 0x3A29C5D0L, 0x270D6E0DL)).hi))).xxwzxwxy))).s6624543511202000)).s1 , (l_67 ^= (l_66[3][2][2] |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 7L)), 1L, 0x4771C756L)).z)));
            if ((l_70[7][3] |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_69.s5a2dc96f)).s0177147326333674)).s6))
            { /* block id: 26 */
                uint32_t l_71 = 1UL;
                uint64_t l_72 = 0x7879CFBC8947EB49L;
                l_68 &= (-6L);
                if ((l_72 = l_71))
                { /* block id: 29 */
                    int64_t l_73 = 0x03A75F9311F6BCDCL;
                    int16_t l_74 = 0x3389L;
                    l_74 = l_73;
                }
                else
                { /* block id: 31 */
                    int32_t l_76 = 0x222DE5CCL;
                    int32_t *l_75 = &l_76;
                    int32_t *l_77 = &l_76;
                    uint8_t l_78 = 0x90L;
                    l_77 = l_75;
                    l_68 = l_78;
                }
            }
            else
            { /* block id: 35 */
                uint32_t l_79 = 4294967292UL;
                l_79++;
            }
            for (l_60.x = (-22); (l_60.x < 10); l_60.x = safe_add_func_int64_t_s_s(l_60.x, 3))
            { /* block id: 40 */
                int32_t *l_85 = (void*)0;
                int32_t **l_84 = &l_85;
                int32_t **l_86 = &l_85;
                l_86 = ((l_64 = (-8L)) , l_84);
            }
            unsigned int result = 0;
            result += l_52.w;
            result += l_52.z;
            result += l_52.y;
            result += l_52.x;
            result += l_53.s7;
            result += l_53.s6;
            result += l_53.s5;
            result += l_53.s4;
            result += l_53.s3;
            result += l_53.s2;
            result += l_53.s1;
            result += l_53.s0;
            result += l_54;
            result += l_55;
            result += l_56.w;
            result += l_56.z;
            result += l_56.y;
            result += l_56.x;
            result += l_57;
            result += l_58;
            result += l_59;
            result += l_60.w;
            result += l_60.z;
            result += l_60.y;
            result += l_60.x;
            result += l_61.w;
            result += l_61.z;
            result += l_61.y;
            result += l_61.x;
            result += l_62;
            result += l_63.s7;
            result += l_63.s6;
            result += l_63.s5;
            result += l_63.s4;
            result += l_63.s3;
            result += l_63.s2;
            result += l_63.s1;
            result += l_63.s0;
            result += l_64;
            int l_65_i0, l_65_i1, l_65_i2;
            for (l_65_i0 = 0; l_65_i0 < 10; l_65_i0++) {
                for (l_65_i1 = 0; l_65_i1 < 10; l_65_i1++) {
                    for (l_65_i2 = 0; l_65_i2 < 2; l_65_i2++) {
                        result += l_65[l_65_i0][l_65_i1][l_65_i2];
                    }
                }
            }
            int l_66_i0, l_66_i1, l_66_i2;
            for (l_66_i0 = 0; l_66_i0 < 8; l_66_i0++) {
                for (l_66_i1 = 0; l_66_i1 < 4; l_66_i1++) {
                    for (l_66_i2 = 0; l_66_i2 < 7; l_66_i2++) {
                        result += l_66[l_66_i0][l_66_i1][l_66_i2];
                    }
                }
            }
            result += l_67;
            result += l_68;
            result += l_69.sf;
            result += l_69.se;
            result += l_69.sd;
            result += l_69.sc;
            result += l_69.sb;
            result += l_69.sa;
            result += l_69.s9;
            result += l_69.s8;
            result += l_69.s7;
            result += l_69.s6;
            result += l_69.s5;
            result += l_69.s4;
            result += l_69.s3;
            result += l_69.s2;
            result += l_69.s1;
            result += l_69.s0;
            int l_70_i0, l_70_i1;
            for (l_70_i0 = 0; l_70_i0 < 9; l_70_i0++) {
                for (l_70_i1 = 0; l_70_i1 < 10; l_70_i1++) {
                    result += l_70[l_70_i0][l_70_i1];
                }
            }
            atomic_add(&p_486->g_special_values[38 * get_linear_group_id() + 35], result);
        }
        else
        { /* block id: 44 */
            (1 + 1);
        }
        if (l_87)
            continue;
    }
    for (p_41 = 0; (p_41 > 58); p_41++)
    { /* block id: 51 */
        int32_t **l_90 = &p_486->g_35;
        int32_t l_342 = 0x10CB7C8BL;
        int32_t l_343 = 1L;
        int32_t l_345 = 1L;
        int32_t l_346[2];
        uint32_t l_352 = 0xD37360B3L;
        int i;
        for (i = 0; i < 2; i++)
            l_346[i] = 0x2D643A89L;
        (*l_90) = &l_87;
        for (l_49 = 0; (l_49 > 5); l_49++)
        { /* block id: 55 */
            int32_t *l_98 = &l_87;
            int32_t l_340 = 0x2FFCAD72L;
            int32_t *l_341[8][1][5] = {{{&p_486->g_36,&p_486->g_36,(void*)0,(void*)0,&p_486->g_339[0][5][1]}},{{&p_486->g_36,&p_486->g_36,(void*)0,(void*)0,&p_486->g_339[0][5][1]}},{{&p_486->g_36,&p_486->g_36,(void*)0,(void*)0,&p_486->g_339[0][5][1]}},{{&p_486->g_36,&p_486->g_36,(void*)0,(void*)0,&p_486->g_339[0][5][1]}},{{&p_486->g_36,&p_486->g_36,(void*)0,(void*)0,&p_486->g_339[0][5][1]}},{{&p_486->g_36,&p_486->g_36,(void*)0,(void*)0,&p_486->g_339[0][5][1]}},{{&p_486->g_36,&p_486->g_36,(void*)0,(void*)0,&p_486->g_339[0][5][1]}},{{&p_486->g_36,&p_486->g_36,(void*)0,(void*)0,&p_486->g_339[0][5][1]}}};
            int i, j, k;
            for (p_486->g_36 = 0; (p_486->g_36 >= (-24)); p_486->g_36--)
            { /* block id: 58 */
                uint32_t l_95 = 0xFE39EBDDL;
                VECTOR(int8_t, 16) l_102 = (VECTOR(int8_t, 16))(0x11L, (VECTOR(int8_t, 4))(0x11L, (VECTOR(int8_t, 2))(0x11L, 1L), 1L), 1L, 0x11L, 1L, (VECTOR(int8_t, 2))(0x11L, 1L), (VECTOR(int8_t, 2))(0x11L, 1L), 0x11L, 1L, 0x11L, 1L);
                int16_t *l_111 = &p_486->g_112[2];
                VECTOR(int16_t, 8) l_115 = (VECTOR(int16_t, 8))(0x5D0BL, (VECTOR(int16_t, 4))(0x5D0BL, (VECTOR(int16_t, 2))(0x5D0BL, 0x39ADL), 0x39ADL), 0x39ADL, 0x5D0BL, 0x39ADL);
                int64_t *l_131 = &p_486->g_132;
                int16_t **l_135 = &p_486->g_133;
                int32_t l_294 = 0x4A253925L;
                int i;
                l_95++;
                l_98 = l_98;
                (*p_486->g_338) = ((*p_486->g_35) = (safe_div_func_int32_t_s_s(((((VECTOR(int8_t, 2))(0x33L, 0x04L)).lo == ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_486->g_101.s75f9727a2c14779b)))))).s98)).yyxxyxxxxyyxyyyx, ((VECTOR(int8_t, 2))(l_102.s4a)).xxyyxyyxxyyyxxyy))).hi)).s6) >= ((VECTOR(uint8_t, 16))(l_103, p_41, ((VECTOR(uint8_t, 4))(1UL, 8UL, 0x51L, 0xDCL)), 255UL, (func_104((l_102.s6 , (safe_mul_func_int16_t_s_s((**l_90), ((*l_111) = p_486->g_101.s1)))), (safe_lshift_func_int8_t_s_s(((((((((GROUP_DIVERGE(1, 1) , ((VECTOR(int16_t, 2))(l_115.s67)).even) == p_486->g_19.s5) & ((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((func_120(func_126(((*l_135) = (((*l_131) = (-1L)) , p_486->g_133)), (((func_136(p_486->g_140[1][2][0], l_102.s1, l_95, p_486) , (void*)0) == l_276) , 0x516BBA4375D10261L), p_41, p_41, p_486), l_294, &p_486->g_35, &l_98, &l_87, p_486) & p_486->l_comm_values[(safe_mod_func_uint32_t_u_u(p_486->tid, 9))]), p_486->g_36)), p_486->g_101.s1)) > p_41)) , 4294967292UL) || p_486->g_292) | l_103) >= p_486->g_101.sa) && p_41), p_486->g_141)), l_337, p_41, p_486) == 1L), ((VECTOR(uint8_t, 2))(0x09L)), 0xA1L, ((VECTOR(uint8_t, 4))(0x28L)), 251UL)).sd), (*p_486->g_35))));
                (*l_98) |= (-8L);
            }
            l_352--;
            if ((**l_337))
                break;
            for (l_349 = 21; (l_349 <= 22); ++l_349)
            { /* block id: 196 */
                (*l_98) |= 0x440F5263L;
            }
        }
        for (l_349 = (-9); (l_349 > (-22)); l_349 = safe_sub_func_uint16_t_u_u(l_349, 2))
        { /* block id: 202 */
            int32_t *l_359[7] = {&p_486->g_339[2][3][0],&p_486->g_339[2][3][0],&p_486->g_339[2][3][0],&p_486->g_339[2][3][0],&p_486->g_339[2][3][0],&p_486->g_339[2][3][0],&p_486->g_339[2][3][0]};
            uint8_t l_360[1][10][9] = {{{0xADL,0xAEL,0x40L,0xC3L,0x40L,0xAEL,0xADL,250UL,0xEAL},{0xADL,0xAEL,0x40L,0xC3L,0x40L,0xAEL,0xADL,250UL,0xEAL},{0xADL,0xAEL,0x40L,0xC3L,0x40L,0xAEL,0xADL,250UL,0xEAL},{0xADL,0xAEL,0x40L,0xC3L,0x40L,0xAEL,0xADL,250UL,0xEAL},{0xADL,0xAEL,0x40L,0xC3L,0x40L,0xAEL,0xADL,250UL,0xEAL},{0xADL,0xAEL,0x40L,0xC3L,0x40L,0xAEL,0xADL,250UL,0xEAL},{0xADL,0xAEL,0x40L,0xC3L,0x40L,0xAEL,0xADL,250UL,0xEAL},{0xADL,0xAEL,0x40L,0xC3L,0x40L,0xAEL,0xADL,250UL,0xEAL},{0xADL,0xAEL,0x40L,0xC3L,0x40L,0xAEL,0xADL,250UL,0xEAL},{0xADL,0xAEL,0x40L,0xC3L,0x40L,0xAEL,0xADL,250UL,0xEAL}}};
            int i, j, k;
            --l_360[0][2][8];
            l_363--;
        }
    }
    return p_486->g_166;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_104(uint8_t  p_105, int16_t  p_106, int32_t ** p_107, int8_t  p_108, struct S0 * p_486)
{ /* block id: 186 */
    return p_105;
}


/* ------------------------------------------ */
/* 
 * reads : p_486->g_301 p_486->g_101 p_486->g_35 p_486->g_317 p_486->g_158 p_486->g_133 p_486->g_162 p_486->g_331 p_486->g_20 p_486->g_132 p_486->g_36 p_486->g_166 p_486->g_141 p_486->g_335
 * writes: p_486->g_301 p_486->g_158 p_486->g_134 p_486->g_331 p_486->g_335
 */
int32_t  func_120(int32_t ** p_121, uint64_t  p_122, int32_t ** p_123, int32_t ** p_124, int32_t * p_125, struct S0 * p_486)
{ /* block id: 178 */
    int64_t l_295 = (-2L);
    int32_t l_296 = 0x1E248C8CL;
    int32_t *l_297 = &l_296;
    int32_t *l_298 = &l_296;
    int32_t *l_300[8][7] = {{&p_486->g_36,&l_296,(void*)0,&p_486->g_36,&l_296,&p_486->g_36,(void*)0},{&p_486->g_36,&l_296,(void*)0,&p_486->g_36,&l_296,&p_486->g_36,(void*)0},{&p_486->g_36,&l_296,(void*)0,&p_486->g_36,&l_296,&p_486->g_36,(void*)0},{&p_486->g_36,&l_296,(void*)0,&p_486->g_36,&l_296,&p_486->g_36,(void*)0},{&p_486->g_36,&l_296,(void*)0,&p_486->g_36,&l_296,&p_486->g_36,(void*)0},{&p_486->g_36,&l_296,(void*)0,&p_486->g_36,&l_296,&p_486->g_36,(void*)0},{&p_486->g_36,&l_296,(void*)0,&p_486->g_36,&l_296,&p_486->g_36,(void*)0},{&p_486->g_36,&l_296,(void*)0,&p_486->g_36,&l_296,&p_486->g_36,(void*)0}};
    VECTOR(uint16_t, 16) l_314 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xAC5FL), 0xAC5FL), 0xAC5FL, 0UL, 0xAC5FL, (VECTOR(uint16_t, 2))(0UL, 0xAC5FL), (VECTOR(uint16_t, 2))(0UL, 0xAC5FL), 0UL, 0xAC5FL, 0UL, 0xAC5FL);
    VECTOR(uint16_t, 16) l_315 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x41BDL), 0x41BDL), 0x41BDL, 65535UL, 0x41BDL, (VECTOR(uint16_t, 2))(65535UL, 0x41BDL), (VECTOR(uint16_t, 2))(65535UL, 0x41BDL), 65535UL, 0x41BDL, 65535UL, 0x41BDL);
    VECTOR(uint16_t, 8) l_316 = (VECTOR(uint16_t, 8))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0x7AFCL), 0x7AFCL), 0x7AFCL, 65530UL, 0x7AFCL);
    VECTOR(uint64_t, 8) l_322 = (VECTOR(uint64_t, 8))(8UL, (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 0x0AA29DE70FEE4B1FL), 0x0AA29DE70FEE4B1FL), 0x0AA29DE70FEE4B1FL, 8UL, 0x0AA29DE70FEE4B1FL);
    VECTOR(uint64_t, 2) l_325 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL);
    uint64_t *l_326 = &p_486->g_158[3];
    int8_t l_329 = (-1L);
    uint64_t *l_330 = &p_486->g_331;
    uint8_t *l_332 = (void*)0;
    uint8_t *l_333[10] = {&p_486->g_172,(void*)0,&p_486->g_172,&p_486->g_172,(void*)0,&p_486->g_172,&p_486->g_172,(void*)0,&p_486->g_172,&p_486->g_172};
    int16_t l_334[4] = {0x7465L,0x7465L,0x7465L,0x7465L};
    int16_t l_336 = 0x47C4L;
    int i, j;
    p_486->g_301--;
    p_486->g_335 |= ((safe_div_func_int64_t_s_s(p_486->g_101.sa, (FAKE_DIVERGE(p_486->local_2_offset, get_local_id(2), 10) || (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(4294967287UL, ((safe_sub_func_uint8_t_u_u((l_334[0] = (((**p_123) == (0x9CL > (safe_mod_func_uint64_t_u_u((((1L == ((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 2))(0xA465L, 65528UL)).yxxy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_314.s6222eaac3adba4f4)))).s1078))).lo, ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(l_315.sddd12492)).s05, ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_316.s3541)), ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_486->g_317.wzyxyzwxxyyyywxy)).s50)).yyyy, ((VECTOR(uint16_t, 16))((((VECTOR(int8_t, 2))(0L, 0x7BL)).even != (((*l_297) && (safe_mod_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(18446744073709551608UL, ((VECTOR(uint64_t, 2))(l_322.s40)), 3UL)).yywxywyxwwzwyxxw)).even))).s1 | ((*l_330) |= ((((p_122 & ((safe_mul_func_int16_t_s_s(((*p_486->g_133) = ((((VECTOR(uint64_t, 8))(l_325.yxxxxyxy)).s6 > ((*l_326)--)) <= (*l_297))), p_486->g_162)) > l_329)) > p_122) < 3UL) , p_486->g_101.s2))), 0x25BD9EA4978A3B0EL)) & p_486->g_101.sc), p_486->g_20.sf))) , p_486->g_132)), FAKE_DIVERGE(p_486->local_2_offset, get_local_id(2), 10), p_122, ((VECTOR(uint16_t, 8))(0x3E78L)), ((VECTOR(uint16_t, 2))(0xBBBDL)), p_486->g_36, 65528UL, 0UL)).se194, ((VECTOR(uint16_t, 4))(0x7DD9L))))), ((VECTOR(uint16_t, 2))(9UL)), 65535UL, p_486->g_101.s9, ((VECTOR(uint16_t, 4))(65535UL)))).s9842, ((VECTOR(uint16_t, 4))(0x3425L)), ((VECTOR(uint16_t, 4))(0xAB80L))))).odd))), ((VECTOR(uint16_t, 2))(0UL))))).even) && p_486->g_166) && 254UL), 0x1350084BEE1A4851L)))) | p_122)), p_486->g_141)) , 4294967295UL))), 0x84L))))) && 1L);
    return l_336;
}


/* ------------------------------------------ */
/* 
 * reads : p_486->l_comm_values p_486->g_166 p_486->g_133 p_486->g_134 p_486->g_20 p_486->g_158
 * writes: p_486->g_166 p_486->g_285 p_486->g_134 p_486->g_172 p_486->g_20 p_486->g_292
 */
int32_t ** func_126(int16_t * p_127, uint64_t  p_128, int64_t  p_129, int64_t  p_130, struct S0 * p_486)
{ /* block id: 168 */
    int8_t *l_279 = &p_486->g_166;
    uint16_t *l_284 = &p_486->g_285;
    int32_t l_286[3];
    int32_t l_287 = (-8L);
    uint8_t *l_288 = &p_486->g_172;
    uint8_t *l_289 = (void*)0;
    uint8_t *l_290 = (void*)0;
    uint8_t *l_291 = &p_486->g_292;
    int32_t **l_293 = &p_486->g_35;
    int i;
    for (i = 0; i < 3; i++)
        l_286[i] = 0x6936A677L;
    l_287 = (p_130 ^ ((*l_291) = (p_486->g_20.s9 = ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xDBL, 9UL)), 0x2EL, (safe_lshift_func_int8_t_s_s(((*l_279) &= p_486->l_comm_values[(safe_mod_func_uint32_t_u_u(p_486->tid, 9))]), (((*l_288) = ((0xD0FCF4C6L == ((l_286[2] = (safe_mod_func_uint64_t_u_u(6UL, (safe_mul_func_uint16_t_u_u(((p_128 , ((*l_284) = 0x4264L)) | ((*p_486->g_133) = (l_286[0] , (*p_486->g_133)))), p_486->g_20.s6))))) ^ l_287)) != l_287)) & p_486->g_158[1]))), 0xA1L, 0xF8L, 0x35L, ((VECTOR(uint8_t, 4))(0x61L)), 0UL, p_486->g_134, p_130, 0x69L, 0x18L)).sc)));
    return l_293;
}


/* ------------------------------------------ */
/* 
 * reads : p_486->l_comm_values p_486->g_20 p_486->g_101 p_486->g_158 p_486->g_166 p_486->g_172
 * writes: p_486->g_20 p_486->g_158 p_486->g_162 p_486->g_166 p_486->g_172
 */
uint32_t  func_136(int64_t * p_137, int64_t  p_138, uint8_t  p_139, struct S0 * p_486)
{ /* block id: 64 */
    uint16_t l_144 = 0x9C07L;
    VECTOR(int8_t, 2) l_149 = (VECTOR(int8_t, 2))(0x75L, 0L);
    VECTOR(int8_t, 2) l_150 = (VECTOR(int8_t, 2))(1L, (-1L));
    uint64_t *l_157 = &p_486->g_158[3];
    int32_t *l_161 = &p_486->g_162;
    uint16_t *l_163 = &l_144;
    int32_t l_164 = 1L;
    int32_t *l_165[7];
    int32_t **l_275 = &l_165[2];
    int i;
    for (i = 0; i < 7; i++)
        l_165[i] = (void*)0;
    p_486->g_166 |= ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))((safe_mod_func_uint64_t_u_u(p_486->l_comm_values[(safe_mod_func_uint32_t_u_u(p_486->tid, 9))], l_144)), 0x59A5CC0BL, ((VECTOR(int32_t, 8))((safe_mul_func_uint16_t_u_u((&p_486->g_35 == ((!(safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 4))(l_149.yxxy)).odd, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_150.xxxxyxyyxyxxyxyx)).odd)).lo)).even))), ((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 8))(254UL, (--p_486->g_20.s5), 0xA6L, p_486->g_101.s7, (safe_add_func_uint16_t_u_u(p_139, (l_164 &= ((*l_163) = ((safe_mod_func_int64_t_s_s(p_486->g_101.s6, ((*l_157) |= p_486->l_comm_values[(safe_mod_func_uint32_t_u_u(p_486->tid, 9))]))) | (((*l_161) = ((1UL ^ (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(65528UL, 65535UL)).hi, l_149.x))) & (-1L))) , p_139)))))), p_486->g_158[1], 1UL, 0xCDL)), (uint8_t)p_138))), ((VECTOR(uint8_t, 8))(255UL)), ((VECTOR(uint8_t, 8))(0UL))))).s44))), 0UL, 0xFCL)).z, 5))) , &p_486->g_35)), 65535UL)), l_164, 0x2123EC83L, 2L, ((VECTOR(int32_t, 2))(0L)), 0x68ABCB01L, 0x3B904D00L)), 0x493F2732L, 0L, ((VECTOR(int32_t, 4))(0x4B63E776L)))).s9f, ((VECTOR(int32_t, 2))(0x0AFF555BL)), ((VECTOR(int32_t, 2))(0x299B2AD0L))))))).xyxyyxxx, ((VECTOR(int32_t, 8))((-8L)))))), 0x6865313BL, 0x751AD0A0L, ((VECTOR(int32_t, 2))((-5L))), 0L, 0x70EA3918L, 0x1DB0B106L, 0x0104EED9L)).s0 , (-5L)) || p_139);
    for (l_164 = 0; (l_164 <= (-19)); --l_164)
    { /* block id: 73 */
        int16_t l_169 = 0x6ADEL;
        int32_t l_170 = 1L;
        VECTOR(int32_t, 2) l_274 = (VECTOR(int32_t, 2))(0x5A31A032L, 0x4BC3A3F2L);
        int i;
        --p_486->g_172;
        if (p_139)
            break;
        if ((atomic_inc(&p_486->l_atomic_input[5]) == 7))
        { /* block id: 77 */
            int32_t l_175 = (-8L);
            int32_t l_176[7][6][5] = {{{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL}},{{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL}},{{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL}},{{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL}},{{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL}},{{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL}},{{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL},{0x26268CB1L,0x46BF440EL,0L,0L,0x3166068CL}}};
            int64_t l_177 = 0x4D63981B1BC71CFCL;
            uint16_t l_178 = 0xC768L;
            uint16_t l_179 = 0UL;
            int64_t l_180 = 0x2580673BC7C59C4CL;
            VECTOR(int32_t, 8) l_181 = (VECTOR(int32_t, 8))(0x1DBFA455L, (VECTOR(int32_t, 4))(0x1DBFA455L, (VECTOR(int32_t, 2))(0x1DBFA455L, 1L), 1L), 1L, 0x1DBFA455L, 1L);
            uint16_t l_182 = 0UL;
            uint8_t l_183 = 255UL;
            int32_t l_184 = 0x47B6A198L;
            int i, j, k;
            l_177 |= ((l_176[5][4][3] = l_175) , (-1L));
            if (((l_179 ^= ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(0x72CB3382L, ((VECTOR(uint32_t, 2))(0x81EA7A17L, 0xD2B88D7CL)), 0xF7625D64L)), l_178, 5UL, 0x47AC9419L, 0UL)).s5) , ((l_180 = ((VECTOR(int16_t, 2))(3L, 0x6C3CL)).lo) , ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(l_181.s1625)).xxwyyxwzxyzywzzx, (int32_t)(l_182 , l_183), (int32_t)l_184))).s9)))
            { /* block id: 82 */
                uint64_t l_185[6] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                int8_t l_204 = 0L;
                int64_t l_205 = (-3L);
                uint32_t l_206 = 0x17463E53L;
                VECTOR(uint32_t, 16) l_207 = (VECTOR(uint32_t, 16))(0x978347ABL, (VECTOR(uint32_t, 4))(0x978347ABL, (VECTOR(uint32_t, 2))(0x978347ABL, 0x10F041E9L), 0x10F041E9L), 0x10F041E9L, 0x978347ABL, 0x10F041E9L, (VECTOR(uint32_t, 2))(0x978347ABL, 0x10F041E9L), (VECTOR(uint32_t, 2))(0x978347ABL, 0x10F041E9L), 0x978347ABL, 0x10F041E9L, 0x978347ABL, 0x10F041E9L);
                int8_t l_208[2];
                VECTOR(int32_t, 16) l_209 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0L), 0L), 0L, 3L, 0L, (VECTOR(int32_t, 2))(3L, 0L), (VECTOR(int32_t, 2))(3L, 0L), 3L, 0L, 3L, 0L);
                VECTOR(int32_t, 2) l_210 = (VECTOR(int32_t, 2))((-7L), (-7L));
                VECTOR(int32_t, 8) l_211 = (VECTOR(int32_t, 8))(0x3614F71BL, (VECTOR(int32_t, 4))(0x3614F71BL, (VECTOR(int32_t, 2))(0x3614F71BL, 0x568F5A85L), 0x568F5A85L), 0x568F5A85L, 0x3614F71BL, 0x568F5A85L);
                VECTOR(int32_t, 8) l_212 = (VECTOR(int32_t, 8))(0x62993E52L, (VECTOR(int32_t, 4))(0x62993E52L, (VECTOR(int32_t, 2))(0x62993E52L, 0x07CD8EA7L), 0x07CD8EA7L), 0x07CD8EA7L, 0x62993E52L, 0x07CD8EA7L);
                VECTOR(int32_t, 4) l_213 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
                uint32_t l_214[5];
                VECTOR(int32_t, 4) l_215 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-9L)), (-9L));
                VECTOR(uint32_t, 4) l_216 = (VECTOR(uint32_t, 4))(0x18B52019L, (VECTOR(uint32_t, 2))(0x18B52019L, 0UL), 0UL);
                VECTOR(uint32_t, 8) l_217 = (VECTOR(uint32_t, 8))(0xA7AC4E5CL, (VECTOR(uint32_t, 4))(0xA7AC4E5CL, (VECTOR(uint32_t, 2))(0xA7AC4E5CL, 0x9971AD17L), 0x9971AD17L), 0x9971AD17L, 0xA7AC4E5CL, 0x9971AD17L);
                uint8_t l_218[6][10] = {{7UL,7UL,1UL,255UL,1UL,255UL,1UL,7UL,7UL,1UL},{7UL,7UL,1UL,255UL,1UL,255UL,1UL,7UL,7UL,1UL},{7UL,7UL,1UL,255UL,1UL,255UL,1UL,7UL,7UL,1UL},{7UL,7UL,1UL,255UL,1UL,255UL,1UL,7UL,7UL,1UL},{7UL,7UL,1UL,255UL,1UL,255UL,1UL,7UL,7UL,1UL},{7UL,7UL,1UL,255UL,1UL,255UL,1UL,7UL,7UL,1UL}};
                int32_t l_263[5] = {1L,1L,1L,1L,1L};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_208[i] = 0x65L;
                for (i = 0; i < 5; i++)
                    l_214[i] = 0UL;
                if ((l_181.s7 ^= l_185[4]))
                { /* block id: 84 */
                    int32_t *l_186 = (void*)0;
                    int32_t l_188 = 0x5245C51EL;
                    int32_t *l_187 = &l_188;
                    l_187 = l_186;
                }
                else
                { /* block id: 86 */
                    int32_t l_190 = 0x361AE5F7L;
                    int32_t *l_189 = &l_190;
                    int32_t *l_191 = &l_190;
                    int32_t *l_192 = &l_190;
                    int32_t *l_193 = &l_190;
                    l_193 = (l_192 = (l_191 = l_189));
                    for (l_190 = 11; (l_190 > 4); l_190 = safe_sub_func_uint32_t_u_u(l_190, 1))
                    { /* block id: 92 */
                        VECTOR(int16_t, 4) l_196 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3E37L), 0x3E37L);
                        uint32_t l_197[7] = {4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL};
                        uint16_t l_198 = 65535UL;
                        int64_t *l_200 = (void*)0;
                        int64_t **l_199 = &l_200;
                        int64_t **l_201 = &l_200;
                        int i;
                        l_196.x = 5L;
                        l_198 |= l_197[3];
                        l_201 = l_199;
                    }
                    for (l_190 = 0; (l_190 == 1); l_190 = safe_add_func_uint32_t_u_u(l_190, 2))
                    { /* block id: 99 */
                        l_189 = (void*)0;
                    }
                }
                if (((VECTOR(int32_t, 8))((l_205 &= l_204), 0x1327C09DL, 0x45D63032L, 0x1D99575FL, l_206, (l_181.s7 = (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_207.s59)).xxxx)).xwxywzyzzzxwzxzx, ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))((-5L), l_208[1], 1L, (-1L))).yxxzzxyzxzywyyyw, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(l_209.sf2dfd3fb)).s5455424405721110, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_210.yxxxxxyy)).s36)).yyxxxxxxxyxxxxxy))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_211.s7177)).xwyzzxwx)).s2141371657501360, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_212.s4656)), ((VECTOR(int32_t, 4))(l_213.wyxy)))).s2526160151171452))).s917b)), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(0x125EB5E7L, 0x50621BF3L, 0x2FF55C6AL, 7L)), ((VECTOR(int32_t, 8))((l_175 = 0x0EA68498L), ((VECTOR(int32_t, 4))(l_214[1], (-1L), 0x1D09D160L, 0x1FF24D7EL)), 0L, (-8L), (-1L))).lo))))).s5607574237536744))).odd, ((VECTOR(int32_t, 16))(l_215.wyxzzyzxxxxyzyyz)).hi))).s2555657736777553, ((VECTOR(int32_t, 2))(1L, 0x200B79E9L)).yyxyxyxyxxyxxyxy))).sdd, ((VECTOR(uint32_t, 2))(l_216.zy))))).xyxyxxyyyyyxxxyy, ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 16))(l_217.s1054743051700265)).sa28a, (uint32_t)0x17761125L))).yyyxxzxxxzxyyxyw))).odd)).s1 , l_218[1][5])), 0x7957FE21L, 0x750D81AAL)).s3)
                { /* block id: 106 */
                    int16_t l_219 = 0x1A4EL;
                    l_184 = l_219;
                }
                else
                { /* block id: 108 */
                    uint64_t l_220 = 0xE6D592381AE7CB9AL;
                    int32_t l_234[8] = {(-2L),0x6BE5335BL,(-2L),(-2L),0x6BE5335BL,(-2L),(-2L),0x6BE5335BL};
                    int32_t *l_233 = &l_234[7];
                    int32_t *l_235 = &l_234[7];
                    int i;
                    l_184 &= l_220;
                    for (l_220 = 0; (l_220 == 36); l_220++)
                    { /* block id: 112 */
                        int32_t l_223[5] = {(-7L),(-7L),(-7L),(-7L),(-7L)};
                        VECTOR(int32_t, 4) l_224 = (VECTOR(int32_t, 4))(0x5C38A905L, (VECTOR(int32_t, 2))(0x5C38A905L, 0x4143BCCAL), 0x4143BCCAL);
                        uint8_t l_225 = 1UL;
                        VECTOR(int32_t, 2) l_226 = (VECTOR(int32_t, 2))(1L, 0x56C543C7L);
                        VECTOR(int32_t, 16) l_227 = (VECTOR(int32_t, 16))(0x5BC32845L, (VECTOR(int32_t, 4))(0x5BC32845L, (VECTOR(int32_t, 2))(0x5BC32845L, (-4L)), (-4L)), (-4L), 0x5BC32845L, (-4L), (VECTOR(int32_t, 2))(0x5BC32845L, (-4L)), (VECTOR(int32_t, 2))(0x5BC32845L, (-4L)), 0x5BC32845L, (-4L), 0x5BC32845L, (-4L));
                        VECTOR(int32_t, 4) l_228 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x160BBCD6L), 0x160BBCD6L);
                        uint32_t l_229 = 0xFD860E4EL;
                        uint32_t l_232 = 5UL;
                        int i;
                        l_181.s6 |= ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x6AB1E3EFL, 1L)).xxxyxxxxyyyxxyyx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((l_223[1] , ((VECTOR(int32_t, 4))(l_224.ywwx)).y), l_225, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(l_226.yyyxyyxyyyxyxyyy)).lo))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_227.sd27c613937ddb646)).s55)).xxyxyyyyyxxyyyyy)).hi)).s5, 0x0F761038L, 0x0702C48DL, ((VECTOR(int32_t, 2))(l_228.yw)), 0x6128B6DCL)).sfaa1)).wzyywyyxxwxywyzy))).sf;
                        --l_229;
                        l_184 ^= (l_181.s5 = l_232);
                    }
                    l_235 = l_233;
                    for (l_234[7] = 0; (l_234[7] != 8); ++l_234[7])
                    { /* block id: 121 */
                        int64_t l_238[4][5];
                        int32_t l_239 = 0L;
                        int64_t l_240[6][6] = {{6L,0x2B50BC0549B17201L,0x28841FF7031D5101L,0x2B50BC0549B17201L,6L,6L},{6L,0x2B50BC0549B17201L,0x28841FF7031D5101L,0x2B50BC0549B17201L,6L,6L},{6L,0x2B50BC0549B17201L,0x28841FF7031D5101L,0x2B50BC0549B17201L,6L,6L},{6L,0x2B50BC0549B17201L,0x28841FF7031D5101L,0x2B50BC0549B17201L,6L,6L},{6L,0x2B50BC0549B17201L,0x28841FF7031D5101L,0x2B50BC0549B17201L,6L,6L},{6L,0x2B50BC0549B17201L,0x28841FF7031D5101L,0x2B50BC0549B17201L,6L,6L}};
                        int32_t l_241 = 0x3DFDB656L;
                        int32_t l_242[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                        uint32_t l_243[6][1][1] = {{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}}};
                        uint32_t l_246 = 1UL;
                        uint8_t l_247 = 0x06L;
                        VECTOR(int32_t, 4) l_248 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-1L)), (-1L));
                        uint32_t l_249 = 0x5E941047L;
                        int32_t *l_250 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_238[i][j] = 0x4204A9637FF1DA43L;
                        }
                        l_243[3][0][0]++;
                        l_184 = (l_247 = (FAKE_DIVERGE(p_486->global_1_offset, get_global_id(1), 10) , l_246));
                        l_249 ^= ((VECTOR(int32_t, 16))(l_248.yxzwwxzwywyxxwxy)).s6;
                        l_235 = (l_250 = l_250);
                    }
                }
                for (l_215.y = (-25); (l_215.y != 29); l_215.y++)
                { /* block id: 132 */
                    int32_t l_253 = 0x4D792688L;
                    l_176[5][4][3] |= l_253;
                    for (l_253 = 5; (l_253 <= (-19)); l_253--)
                    { /* block id: 136 */
                        uint8_t l_256[8] = {0x9CL,0UL,0x9CL,0x9CL,0UL,0x9CL,0x9CL,0UL};
                        int16_t l_257 = 0x099BL;
                        uint32_t l_258 = 8UL;
                        uint32_t l_259 = 4294967293UL;
                        uint32_t l_260 = 0x0FE71AB9L;
                        int i;
                        l_257 &= ((l_179 = 65527UL) , l_256[4]);
                        l_259 = (l_181.s6 ^= l_258);
                        l_260--;
                    }
                }
                l_176[5][4][3] = l_263[4];
            }
            else
            { /* block id: 145 */
                VECTOR(uint64_t, 2) l_264 = (VECTOR(uint64_t, 2))(0x201EBDC434A21424L, 18446744073709551615UL);
                int8_t l_265 = 0x42L;
                uint16_t l_266 = 0UL;
                int16_t l_267 = (-8L);
                int64_t l_268 = 0L;
                int i;
                l_268 ^= (l_267 = (l_266 |= (l_176[4][5][0] |= (l_184 = (l_181.s6 = (l_265 = l_264.y))))));
                l_184 = 1L;
            }
            for (l_175 = 0; (l_175 != (-12)); l_175 = safe_sub_func_uint8_t_u_u(l_175, 1))
            { /* block id: 157 */
                int32_t l_271 = 0L;
                uint32_t l_272 = 4294967295UL;
                uint8_t l_273[5][10] = {{0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L},{0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L},{0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L},{0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L},{0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L}};
                int i, j;
                l_176[0][4][0] &= 1L;
                l_176[4][3][2] |= (l_271 , (l_272 , l_273[2][6]));
            }
            unsigned int result = 0;
            result += l_175;
            int l_176_i0, l_176_i1, l_176_i2;
            for (l_176_i0 = 0; l_176_i0 < 7; l_176_i0++) {
                for (l_176_i1 = 0; l_176_i1 < 6; l_176_i1++) {
                    for (l_176_i2 = 0; l_176_i2 < 5; l_176_i2++) {
                        result += l_176[l_176_i0][l_176_i1][l_176_i2];
                    }
                }
            }
            result += l_177;
            result += l_178;
            result += l_179;
            result += l_180;
            result += l_181.s7;
            result += l_181.s6;
            result += l_181.s5;
            result += l_181.s4;
            result += l_181.s3;
            result += l_181.s2;
            result += l_181.s1;
            result += l_181.s0;
            result += l_182;
            result += l_183;
            result += l_184;
            atomic_add(&p_486->l_special_values[5], result);
        }
        else
        { /* block id: 161 */
            (1 + 1);
        }
        l_274.y = ((VECTOR(int32_t, 2))(l_274.xy)).lo;
    }
    (*l_275) = &p_486->g_36;
    return p_486->l_comm_values[(safe_mod_func_uint32_t_u_u(p_486->tid, 9))];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[38];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 38; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[38];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 38; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[9];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 9; i++)
            l_comm_values[i] = 1;
    struct S0 c_487;
    struct S0* p_486 = &c_487;
    struct S0 c_488 = {
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xF2L), 0xF2L), 0xF2L, 1UL, 0xF2L, (VECTOR(uint8_t, 2))(1UL, 0xF2L), (VECTOR(uint8_t, 2))(1UL, 0xF2L), 1UL, 0xF2L, 1UL, 0xF2L), // p_486->g_19
        (VECTOR(uint8_t, 16))(0xA7L, (VECTOR(uint8_t, 4))(0xA7L, (VECTOR(uint8_t, 2))(0xA7L, 0x04L), 0x04L), 0x04L, 0xA7L, 0x04L, (VECTOR(uint8_t, 2))(0xA7L, 0x04L), (VECTOR(uint8_t, 2))(0xA7L, 0x04L), 0xA7L, 0x04L, 0xA7L, 0x04L), // p_486->g_20
        0x27C6DD3EL, // p_486->g_36
        &p_486->g_36, // p_486->g_35
        (VECTOR(int8_t, 16))(0x5CL, (VECTOR(int8_t, 4))(0x5CL, (VECTOR(int8_t, 2))(0x5CL, 0x2BL), 0x2BL), 0x2BL, 0x5CL, 0x2BL, (VECTOR(int8_t, 2))(0x5CL, 0x2BL), (VECTOR(int8_t, 2))(0x5CL, 0x2BL), 0x5CL, 0x2BL, 0x5CL, 0x2BL), // p_486->g_101
        {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}, // p_486->g_112
        (-1L), // p_486->g_132
        0x248EL, // p_486->g_134
        &p_486->g_134, // p_486->g_133
        (-1L), // p_486->g_141
        {{{&p_486->g_141,&p_486->g_141},{&p_486->g_141,&p_486->g_141},{&p_486->g_141,&p_486->g_141},{&p_486->g_141,&p_486->g_141},{&p_486->g_141,&p_486->g_141},{&p_486->g_141,&p_486->g_141}},{{&p_486->g_141,&p_486->g_141},{&p_486->g_141,&p_486->g_141},{&p_486->g_141,&p_486->g_141},{&p_486->g_141,&p_486->g_141},{&p_486->g_141,&p_486->g_141},{&p_486->g_141,&p_486->g_141}}}, // p_486->g_140
        {1UL,0x803E92686379E6B5L,1UL,1UL,0x803E92686379E6B5L,1UL,1UL}, // p_486->g_158
        0x45475998L, // p_486->g_162
        0L, // p_486->g_166
        0x3250L, // p_486->g_171
        3UL, // p_486->g_172
        0x35C8L, // p_486->g_285
        1UL, // p_486->g_292
        0x6DL, // p_486->g_299
        0x04C94ED6L, // p_486->g_301
        (VECTOR(uint16_t, 4))(0xF9F0L, (VECTOR(uint16_t, 2))(0xF9F0L, 0xB460L), 0xB460L), // p_486->g_317
        0x956980EBA00EA8EFL, // p_486->g_331
        0x6D59C3A3L, // p_486->g_335
        {{{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L}},{{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L}},{{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L}},{{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L},{0x66814783L,0x09135310L}}}, // p_486->g_339
        &p_486->g_339[0][5][1], // p_486->g_338
        (VECTOR(uint16_t, 16))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 65529UL), 65529UL), 65529UL, 9UL, 65529UL, (VECTOR(uint16_t, 2))(9UL, 65529UL), (VECTOR(uint16_t, 2))(9UL, 65529UL), 9UL, 65529UL, 9UL, 65529UL), // p_486->g_376
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x16L), 0x16L), // p_486->g_380
        {{3L,3L,7L,(-10L),0x5B30765AL,(-10L)},{3L,3L,7L,(-10L),0x5B30765AL,(-10L)},{3L,3L,7L,(-10L),0x5B30765AL,(-10L)}}, // p_486->g_392
        (VECTOR(uint16_t, 16))(0xE52BL, (VECTOR(uint16_t, 4))(0xE52BL, (VECTOR(uint16_t, 2))(0xE52BL, 0xB7A5L), 0xB7A5L), 0xB7A5L, 0xE52BL, 0xB7A5L, (VECTOR(uint16_t, 2))(0xE52BL, 0xB7A5L), (VECTOR(uint16_t, 2))(0xE52BL, 0xB7A5L), 0xE52BL, 0xB7A5L, 0xE52BL, 0xB7A5L), // p_486->g_414
        (VECTOR(uint32_t, 2))(0x6AC72CEAL, 0xE763667AL), // p_486->g_418
        (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0x31D1L), 0x31D1L), // p_486->g_419
        (VECTOR(uint64_t, 2))(0x2F5068F9C57D891EL, 18446744073709551611UL), // p_486->g_420
        (-6L), // p_486->g_438
        (VECTOR(uint32_t, 16))(0x19D1906FL, (VECTOR(uint32_t, 4))(0x19D1906FL, (VECTOR(uint32_t, 2))(0x19D1906FL, 4294967295UL), 4294967295UL), 4294967295UL, 0x19D1906FL, 4294967295UL, (VECTOR(uint32_t, 2))(0x19D1906FL, 4294967295UL), (VECTOR(uint32_t, 2))(0x19D1906FL, 4294967295UL), 0x19D1906FL, 4294967295UL, 0x19D1906FL, 4294967295UL), // p_486->g_452
        &p_486->g_36, // p_486->g_454
        &p_486->g_35, // p_486->g_456
        0x24088F70L, // p_486->g_469
        (VECTOR(int32_t, 4))(0x54A41F7AL, (VECTOR(int32_t, 2))(0x54A41F7AL, (-10L)), (-10L)), // p_486->g_473
        (void*)0, // p_486->g_482
        0, // p_486->v_collective
        sequence_input[get_global_id(0)], // p_486->global_0_offset
        sequence_input[get_global_id(1)], // p_486->global_1_offset
        sequence_input[get_global_id(2)], // p_486->global_2_offset
        sequence_input[get_local_id(0)], // p_486->local_0_offset
        sequence_input[get_local_id(1)], // p_486->local_1_offset
        sequence_input[get_local_id(2)], // p_486->local_2_offset
        sequence_input[get_group_id(0)], // p_486->group_0_offset
        sequence_input[get_group_id(1)], // p_486->group_1_offset
        sequence_input[get_group_id(2)], // p_486->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 9)), permutations[0][get_linear_local_id()])), // p_486->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_487 = c_488;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_486);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_486->g_19.s0, "p_486->g_19.s0", print_hash_value);
    transparent_crc(p_486->g_19.s1, "p_486->g_19.s1", print_hash_value);
    transparent_crc(p_486->g_19.s2, "p_486->g_19.s2", print_hash_value);
    transparent_crc(p_486->g_19.s3, "p_486->g_19.s3", print_hash_value);
    transparent_crc(p_486->g_19.s4, "p_486->g_19.s4", print_hash_value);
    transparent_crc(p_486->g_19.s5, "p_486->g_19.s5", print_hash_value);
    transparent_crc(p_486->g_19.s6, "p_486->g_19.s6", print_hash_value);
    transparent_crc(p_486->g_19.s7, "p_486->g_19.s7", print_hash_value);
    transparent_crc(p_486->g_19.s8, "p_486->g_19.s8", print_hash_value);
    transparent_crc(p_486->g_19.s9, "p_486->g_19.s9", print_hash_value);
    transparent_crc(p_486->g_19.sa, "p_486->g_19.sa", print_hash_value);
    transparent_crc(p_486->g_19.sb, "p_486->g_19.sb", print_hash_value);
    transparent_crc(p_486->g_19.sc, "p_486->g_19.sc", print_hash_value);
    transparent_crc(p_486->g_19.sd, "p_486->g_19.sd", print_hash_value);
    transparent_crc(p_486->g_19.se, "p_486->g_19.se", print_hash_value);
    transparent_crc(p_486->g_19.sf, "p_486->g_19.sf", print_hash_value);
    transparent_crc(p_486->g_20.s0, "p_486->g_20.s0", print_hash_value);
    transparent_crc(p_486->g_20.s1, "p_486->g_20.s1", print_hash_value);
    transparent_crc(p_486->g_20.s2, "p_486->g_20.s2", print_hash_value);
    transparent_crc(p_486->g_20.s3, "p_486->g_20.s3", print_hash_value);
    transparent_crc(p_486->g_20.s4, "p_486->g_20.s4", print_hash_value);
    transparent_crc(p_486->g_20.s5, "p_486->g_20.s5", print_hash_value);
    transparent_crc(p_486->g_20.s6, "p_486->g_20.s6", print_hash_value);
    transparent_crc(p_486->g_20.s7, "p_486->g_20.s7", print_hash_value);
    transparent_crc(p_486->g_20.s8, "p_486->g_20.s8", print_hash_value);
    transparent_crc(p_486->g_20.s9, "p_486->g_20.s9", print_hash_value);
    transparent_crc(p_486->g_20.sa, "p_486->g_20.sa", print_hash_value);
    transparent_crc(p_486->g_20.sb, "p_486->g_20.sb", print_hash_value);
    transparent_crc(p_486->g_20.sc, "p_486->g_20.sc", print_hash_value);
    transparent_crc(p_486->g_20.sd, "p_486->g_20.sd", print_hash_value);
    transparent_crc(p_486->g_20.se, "p_486->g_20.se", print_hash_value);
    transparent_crc(p_486->g_20.sf, "p_486->g_20.sf", print_hash_value);
    transparent_crc(p_486->g_36, "p_486->g_36", print_hash_value);
    transparent_crc(p_486->g_101.s0, "p_486->g_101.s0", print_hash_value);
    transparent_crc(p_486->g_101.s1, "p_486->g_101.s1", print_hash_value);
    transparent_crc(p_486->g_101.s2, "p_486->g_101.s2", print_hash_value);
    transparent_crc(p_486->g_101.s3, "p_486->g_101.s3", print_hash_value);
    transparent_crc(p_486->g_101.s4, "p_486->g_101.s4", print_hash_value);
    transparent_crc(p_486->g_101.s5, "p_486->g_101.s5", print_hash_value);
    transparent_crc(p_486->g_101.s6, "p_486->g_101.s6", print_hash_value);
    transparent_crc(p_486->g_101.s7, "p_486->g_101.s7", print_hash_value);
    transparent_crc(p_486->g_101.s8, "p_486->g_101.s8", print_hash_value);
    transparent_crc(p_486->g_101.s9, "p_486->g_101.s9", print_hash_value);
    transparent_crc(p_486->g_101.sa, "p_486->g_101.sa", print_hash_value);
    transparent_crc(p_486->g_101.sb, "p_486->g_101.sb", print_hash_value);
    transparent_crc(p_486->g_101.sc, "p_486->g_101.sc", print_hash_value);
    transparent_crc(p_486->g_101.sd, "p_486->g_101.sd", print_hash_value);
    transparent_crc(p_486->g_101.se, "p_486->g_101.se", print_hash_value);
    transparent_crc(p_486->g_101.sf, "p_486->g_101.sf", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_486->g_112[i], "p_486->g_112[i]", print_hash_value);

    }
    transparent_crc(p_486->g_132, "p_486->g_132", print_hash_value);
    transparent_crc(p_486->g_134, "p_486->g_134", print_hash_value);
    transparent_crc(p_486->g_141, "p_486->g_141", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_486->g_158[i], "p_486->g_158[i]", print_hash_value);

    }
    transparent_crc(p_486->g_162, "p_486->g_162", print_hash_value);
    transparent_crc(p_486->g_166, "p_486->g_166", print_hash_value);
    transparent_crc(p_486->g_171, "p_486->g_171", print_hash_value);
    transparent_crc(p_486->g_172, "p_486->g_172", print_hash_value);
    transparent_crc(p_486->g_285, "p_486->g_285", print_hash_value);
    transparent_crc(p_486->g_292, "p_486->g_292", print_hash_value);
    transparent_crc(p_486->g_299, "p_486->g_299", print_hash_value);
    transparent_crc(p_486->g_301, "p_486->g_301", print_hash_value);
    transparent_crc(p_486->g_317.x, "p_486->g_317.x", print_hash_value);
    transparent_crc(p_486->g_317.y, "p_486->g_317.y", print_hash_value);
    transparent_crc(p_486->g_317.z, "p_486->g_317.z", print_hash_value);
    transparent_crc(p_486->g_317.w, "p_486->g_317.w", print_hash_value);
    transparent_crc(p_486->g_331, "p_486->g_331", print_hash_value);
    transparent_crc(p_486->g_335, "p_486->g_335", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_486->g_339[i][j][k], "p_486->g_339[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_486->g_376.s0, "p_486->g_376.s0", print_hash_value);
    transparent_crc(p_486->g_376.s1, "p_486->g_376.s1", print_hash_value);
    transparent_crc(p_486->g_376.s2, "p_486->g_376.s2", print_hash_value);
    transparent_crc(p_486->g_376.s3, "p_486->g_376.s3", print_hash_value);
    transparent_crc(p_486->g_376.s4, "p_486->g_376.s4", print_hash_value);
    transparent_crc(p_486->g_376.s5, "p_486->g_376.s5", print_hash_value);
    transparent_crc(p_486->g_376.s6, "p_486->g_376.s6", print_hash_value);
    transparent_crc(p_486->g_376.s7, "p_486->g_376.s7", print_hash_value);
    transparent_crc(p_486->g_376.s8, "p_486->g_376.s8", print_hash_value);
    transparent_crc(p_486->g_376.s9, "p_486->g_376.s9", print_hash_value);
    transparent_crc(p_486->g_376.sa, "p_486->g_376.sa", print_hash_value);
    transparent_crc(p_486->g_376.sb, "p_486->g_376.sb", print_hash_value);
    transparent_crc(p_486->g_376.sc, "p_486->g_376.sc", print_hash_value);
    transparent_crc(p_486->g_376.sd, "p_486->g_376.sd", print_hash_value);
    transparent_crc(p_486->g_376.se, "p_486->g_376.se", print_hash_value);
    transparent_crc(p_486->g_376.sf, "p_486->g_376.sf", print_hash_value);
    transparent_crc(p_486->g_380.x, "p_486->g_380.x", print_hash_value);
    transparent_crc(p_486->g_380.y, "p_486->g_380.y", print_hash_value);
    transparent_crc(p_486->g_380.z, "p_486->g_380.z", print_hash_value);
    transparent_crc(p_486->g_380.w, "p_486->g_380.w", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_486->g_392[i][j], "p_486->g_392[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_486->g_414.s0, "p_486->g_414.s0", print_hash_value);
    transparent_crc(p_486->g_414.s1, "p_486->g_414.s1", print_hash_value);
    transparent_crc(p_486->g_414.s2, "p_486->g_414.s2", print_hash_value);
    transparent_crc(p_486->g_414.s3, "p_486->g_414.s3", print_hash_value);
    transparent_crc(p_486->g_414.s4, "p_486->g_414.s4", print_hash_value);
    transparent_crc(p_486->g_414.s5, "p_486->g_414.s5", print_hash_value);
    transparent_crc(p_486->g_414.s6, "p_486->g_414.s6", print_hash_value);
    transparent_crc(p_486->g_414.s7, "p_486->g_414.s7", print_hash_value);
    transparent_crc(p_486->g_414.s8, "p_486->g_414.s8", print_hash_value);
    transparent_crc(p_486->g_414.s9, "p_486->g_414.s9", print_hash_value);
    transparent_crc(p_486->g_414.sa, "p_486->g_414.sa", print_hash_value);
    transparent_crc(p_486->g_414.sb, "p_486->g_414.sb", print_hash_value);
    transparent_crc(p_486->g_414.sc, "p_486->g_414.sc", print_hash_value);
    transparent_crc(p_486->g_414.sd, "p_486->g_414.sd", print_hash_value);
    transparent_crc(p_486->g_414.se, "p_486->g_414.se", print_hash_value);
    transparent_crc(p_486->g_414.sf, "p_486->g_414.sf", print_hash_value);
    transparent_crc(p_486->g_418.x, "p_486->g_418.x", print_hash_value);
    transparent_crc(p_486->g_418.y, "p_486->g_418.y", print_hash_value);
    transparent_crc(p_486->g_419.x, "p_486->g_419.x", print_hash_value);
    transparent_crc(p_486->g_419.y, "p_486->g_419.y", print_hash_value);
    transparent_crc(p_486->g_419.z, "p_486->g_419.z", print_hash_value);
    transparent_crc(p_486->g_419.w, "p_486->g_419.w", print_hash_value);
    transparent_crc(p_486->g_420.x, "p_486->g_420.x", print_hash_value);
    transparent_crc(p_486->g_420.y, "p_486->g_420.y", print_hash_value);
    transparent_crc(p_486->g_438, "p_486->g_438", print_hash_value);
    transparent_crc(p_486->g_452.s0, "p_486->g_452.s0", print_hash_value);
    transparent_crc(p_486->g_452.s1, "p_486->g_452.s1", print_hash_value);
    transparent_crc(p_486->g_452.s2, "p_486->g_452.s2", print_hash_value);
    transparent_crc(p_486->g_452.s3, "p_486->g_452.s3", print_hash_value);
    transparent_crc(p_486->g_452.s4, "p_486->g_452.s4", print_hash_value);
    transparent_crc(p_486->g_452.s5, "p_486->g_452.s5", print_hash_value);
    transparent_crc(p_486->g_452.s6, "p_486->g_452.s6", print_hash_value);
    transparent_crc(p_486->g_452.s7, "p_486->g_452.s7", print_hash_value);
    transparent_crc(p_486->g_452.s8, "p_486->g_452.s8", print_hash_value);
    transparent_crc(p_486->g_452.s9, "p_486->g_452.s9", print_hash_value);
    transparent_crc(p_486->g_452.sa, "p_486->g_452.sa", print_hash_value);
    transparent_crc(p_486->g_452.sb, "p_486->g_452.sb", print_hash_value);
    transparent_crc(p_486->g_452.sc, "p_486->g_452.sc", print_hash_value);
    transparent_crc(p_486->g_452.sd, "p_486->g_452.sd", print_hash_value);
    transparent_crc(p_486->g_452.se, "p_486->g_452.se", print_hash_value);
    transparent_crc(p_486->g_452.sf, "p_486->g_452.sf", print_hash_value);
    transparent_crc(p_486->g_469, "p_486->g_469", print_hash_value);
    transparent_crc(p_486->g_473.x, "p_486->g_473.x", print_hash_value);
    transparent_crc(p_486->g_473.y, "p_486->g_473.y", print_hash_value);
    transparent_crc(p_486->g_473.z, "p_486->g_473.z", print_hash_value);
    transparent_crc(p_486->g_473.w, "p_486->g_473.w", print_hash_value);
    transparent_crc(p_486->v_collective, "p_486->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 38; i++)
            transparent_crc(p_486->g_special_values[i + 38 * get_linear_group_id()], "p_486->g_special_values[i + 38 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 38; i++)
            transparent_crc(p_486->l_special_values[i], "p_486->l_special_values[i]", print_hash_value);
    transparent_crc(p_486->l_comm_values[get_linear_local_id()], "p_486->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_486->g_comm_values[get_linear_group_id() * 9 + get_linear_local_id()], "p_486->g_comm_values[get_linear_group_id() * 9 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
