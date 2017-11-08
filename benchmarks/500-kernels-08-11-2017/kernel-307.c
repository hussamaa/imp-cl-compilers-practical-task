// --atomics 18 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 88,21,3 -l 4,3,1
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
{3,7,6,1,8,0,4,2,9,11,10,5}, // permutation 0
{9,2,10,11,3,4,0,8,1,5,6,7}, // permutation 1
{5,2,4,8,0,1,11,9,10,3,7,6}, // permutation 2
{6,9,2,11,7,3,8,5,1,0,10,4}, // permutation 3
{9,6,2,0,8,5,7,3,1,4,11,10}, // permutation 4
{1,2,11,5,9,7,8,10,6,4,0,3}, // permutation 5
{5,0,10,2,3,8,1,7,6,11,9,4}, // permutation 6
{1,7,10,2,8,9,6,0,3,5,4,11}, // permutation 7
{10,0,9,11,6,3,1,2,5,4,8,7}, // permutation 8
{1,10,3,4,11,7,9,6,8,2,5,0} // permutation 9
};

// Seed: 2426617383

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   int64_t  f1;
   volatile int64_t  f2;
   int32_t  f3;
   volatile int32_t  f4;
   uint64_t  f5;
   int32_t  f6;
   uint8_t  f7;
   volatile uint32_t  f8;
};

struct S1 {
    int64_t g_14;
    int16_t g_33;
    int8_t g_35;
    int8_t *g_34;
    volatile VECTOR(uint8_t, 4) g_157;
    struct S0 g_164;
    struct S0 g_166;
    volatile int32_t *g_176[10];
    int32_t g_183;
    int32_t * volatile g_182;
    uint64_t g_196[5];
    int32_t *g_230;
    int32_t **g_229[5];
    VECTOR(int64_t, 16) g_241;
    uint32_t g_243;
    int32_t * volatile g_246;
    struct S0 g_248;
    volatile VECTOR(int8_t, 4) g_257;
    uint32_t g_265;
    int16_t *g_272;
    int16_t **g_271;
    volatile struct S0 g_279;
    volatile struct S0 *g_278;
    int32_t * volatile g_283[9];
    int32_t * volatile g_284;
    int16_t g_304;
    struct S0 g_327;
    struct S0 *g_326[3];
    uint64_t g_332;
    uint64_t g_333;
    int64_t *g_345;
    struct S0 g_359;
    uint16_t g_366[9];
    VECTOR(int8_t, 4) g_373;
    volatile VECTOR(uint8_t, 2) g_376;
    volatile VECTOR(int8_t, 2) g_382;
    VECTOR(int8_t, 4) g_394;
    VECTOR(uint8_t, 2) g_395;
    int64_t **g_407;
    int16_t *** volatile g_409;
    struct S0 g_416[2][6];
    VECTOR(uint32_t, 16) g_429;
    VECTOR(int8_t, 8) g_436;
    VECTOR(int8_t, 4) g_438;
    VECTOR(int8_t, 4) g_446;
    struct S0 g_494;
    volatile VECTOR(int16_t, 4) g_505;
    VECTOR(int32_t, 4) g_512;
    VECTOR(uint64_t, 4) g_513;
    VECTOR(uint32_t, 4) g_534;
    volatile VECTOR(uint32_t, 4) g_535;
    volatile VECTOR(int32_t, 16) g_537;
    struct S0 g_566;
    volatile VECTOR(uint8_t, 8) g_582;
    struct S0 g_600;
    struct S0 g_630[8];
    volatile VECTOR(int8_t, 8) g_661;
    volatile VECTOR(int8_t, 2) g_662;
    struct S0 ** volatile g_695[9][6][4];
    struct S0 ** volatile g_696;
    struct S0 ** volatile g_697;
    volatile VECTOR(int8_t, 16) g_987;
    struct S0 g_1000[4];
    volatile VECTOR(int16_t, 2) g_1007;
    VECTOR(uint8_t, 16) g_1038;
    volatile VECTOR(uint8_t, 16) g_1040;
    int32_t * volatile g_1042;
    int16_t ***g_1091;
    int8_t *g_1115;
    VECTOR(uint8_t, 2) g_1136;
    int32_t ** volatile g_1140;
    struct S0 g_1209;
    volatile VECTOR(uint16_t, 4) g_1256;
    struct S0 g_1260;
    VECTOR(int16_t, 2) g_1276;
    volatile VECTOR(uint16_t, 8) g_1277;
    volatile VECTOR(uint64_t, 2) g_1286;
    VECTOR(uint32_t, 4) g_1287;
    VECTOR(int8_t, 4) g_1301;
    VECTOR(uint16_t, 16) g_1304;
    volatile VECTOR(int32_t, 4) g_1353;
    VECTOR(int16_t, 16) g_1398;
    volatile struct S0 g_1412[4];
    VECTOR(int64_t, 4) g_1413;
    VECTOR(uint32_t, 16) g_1428;
    int32_t g_1536;
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
uint32_t  func_1(struct S1 * p_1537);
int8_t  func_4(int8_t  p_5, int16_t  p_6, int64_t  p_7, int32_t  p_8, int32_t  p_9, struct S1 * p_1537);
int8_t  func_10(uint64_t  p_11, struct S1 * p_1537);
int8_t * func_18(uint32_t  p_19, int64_t  p_20, uint32_t  p_21, int8_t * p_22, struct S1 * p_1537);
uint64_t  func_23(int8_t * p_24, int16_t  p_25, struct S1 * p_1537);
int8_t * func_26(int16_t  p_27, int8_t * p_28, uint64_t  p_29, int32_t  p_30, int8_t * p_31, struct S1 * p_1537);
int32_t * func_150(uint16_t  p_151, uint32_t  p_152, uint16_t  p_153, int16_t ** p_154, struct S1 * p_1537);
struct S0  func_201(uint8_t  p_202, struct S1 * p_1537);
int32_t  func_224(int32_t ** p_225, int32_t  p_226, int32_t ** p_227, uint32_t  p_228, struct S1 * p_1537);
struct S0  func_234(struct S0 * p_235, int32_t  p_236, uint64_t  p_237, int64_t  p_238, int32_t ** p_239, struct S1 * p_1537);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1537->g_comm_values p_1537->l_comm_values p_1537->g_34 p_1537->g_33 p_1537->g_166.f0 p_1537->g_166.f6 p_1537->g_164.f0 p_1537->g_35 p_1537->g_176 p_1537->g_164.f5 p_1537->g_182 p_1537->g_183 p_1537->g_600.f2 p_1537->g_271 p_1537->g_272 p_1537->g_248.f0 p_1537->g_246 p_1537->g_166 p_1537->g_366 p_1537->g_416.f5 p_1537->g_1042 permutations p_1537->g_1000.f3 p_1537->g_494.f0 p_1537->g_164.f1 p_1537->g_164.f3 p_1537->g_265 p_1537->g_279.f0 p_1537->g_332 p_1537->g_284 p_1537->g_1115 p_1537->g_1000.f6 p_1537->g_382 p_1537->g_630.f1 p_1537->g_248.f5 p_1537->g_304 p_1537->g_1000.f7 p_1537->g_534 p_1537->g_1140 p_1537->g_1209 p_1537->g_327.f0 p_1537->g_1091 p_1537->g_1260 p_1537->g_278 p_1537->g_230 p_1537->g_600.f7 p_1537->g_566.f7 p_1537->g_164.f2 p_1537->g_494.f7 p_1537->g_409 p_1537->g_416.f0 p_1537->g_1276 p_1537->g_1000.f1 p_1537->g_359 p_1537->g_1412 p_1537->g_1413 p_1537->g_1428 p_1537->g_1536
 * writes: p_1537->g_14 p_1537->g_33 p_1537->g_35 p_1537->g_164.f3 p_1537->g_183 p_1537->g_566.f5 p_1537->g_265 p_1537->g_566.f7 permutations p_1537->g_1091 p_1537->g_494.f0 p_1537->g_326 p_1537->g_332 p_1537->g_34 p_1537->g_196 p_1537->g_230 p_1537->g_566.f3 p_1537->g_566.f0 p_1537->g_436 p_1537->g_359.f0 p_1537->g_600.f7 p_1537->g_494.f5 p_1537->g_279 p_1537->g_304 p_1537->g_166.f6 p_1537->g_1260.f6 p_1537->g_513 p_1537->g_1115 p_1537->g_248.f7 p_1537->g_1209.f3 p_1537->g_327.f5 p_1537->g_1536
 */
uint32_t  func_1(struct S1 * p_1537)
{ /* block id: 4 */
    int8_t *l_13[5][1];
    VECTOR(uint32_t, 2) l_15 = (VECTOR(uint32_t, 2))(0xA83AFD47L, 0x0FC35327L);
    int16_t *l_32 = &p_1537->g_33;
    uint64_t *l_1109 = &p_1537->g_332;
    int8_t **l_1113 = &p_1537->g_34;
    int8_t *l_1114 = (void*)0;
    int32_t *l_1535 = &p_1537->g_1536;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_13[i][j] = (void*)0;
    }
    (*l_1535) &= ((safe_lshift_func_int8_t_s_u((+func_4((p_1537->g_14 = func_10(p_1537->g_comm_values[p_1537->tid], p_1537)), ((*p_1537->g_272) = (((VECTOR(uint32_t, 4))(l_15.yxyy)).y , ((safe_mod_func_int32_t_s_s((((l_1114 = ((*l_1113) = func_18(l_15.y, ((func_10(((*l_1109) &= func_23(func_26(((*l_32) = (p_1537->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1537->tid, 12))] ^ (l_15.x >= p_1537->g_comm_values[p_1537->tid]))), p_1537->g_34, l_15.x, (l_15.y & l_15.y), l_13[3][0], p_1537), l_15.y, p_1537)), p_1537) || FAKE_DIVERGE(p_1537->global_1_offset, get_global_id(1), 10)) >= l_15.x), l_15.x, l_13[3][0], p_1537))) != p_1537->g_1115) , (-8L)), 0x4329E879L)) != 4294967292UL))), l_15.y, p_1537->g_1000[3].f6, l_15.x, p_1537)), 5)) != l_15.x);
    return (*l_1535);
}


/* ------------------------------------------ */
/* 
 * reads : p_1537->g_382 p_1537->g_1136 p_1537->g_630.f1 p_1537->g_248.f5 p_1537->g_304 p_1537->g_1000.f7 p_1537->g_534 p_1537->g_182 p_1537->g_183 p_1537->g_1140 p_1537->g_566.f3 p_1537->g_566.f0 p_1537->g_1209 p_1537->g_284 p_1537->g_327.f0 p_1537->g_246 p_1537->g_1042 p_1537->g_359.f0 p_1537->g_1091 p_1537->g_271 p_1537->g_272 p_1537->g_33 p_1537->g_1260 p_1537->g_278 p_1537->g_230 p_1537->g_600.f7 p_1537->g_1276 p_1537->g_1277 p_1537->g_1286 p_1537->g_1287 p_1537->g_566.f7 p_1537->g_1301 p_1537->g_394 p_1537->g_1304 p_1537->g_157 p_1537->g_446 p_1537->g_395 p_1537->g_166.f6 p_1537->g_164.f2 p_1537->g_494.f7 p_1537->g_409 p_1537->g_416.f0 p_1537->g_1000.f1 p_1537->g_359 p_1537->g_1412 p_1537->g_1413 p_1537->g_248.f7 p_1537->g_1428 p_1537->g_327.f5
 * writes: p_1537->g_196 p_1537->g_164.f3 p_1537->g_183 p_1537->g_230 p_1537->g_566.f3 p_1537->g_566.f0 p_1537->g_436 p_1537->g_359.f0 p_1537->g_600.f7 p_1537->g_33 p_1537->g_494.f5 p_1537->g_279 p_1537->g_304 p_1537->g_248.f0 p_1537->g_35 p_1537->g_394 p_1537->g_166.f6 p_1537->g_1260.f6 p_1537->g_513 p_1537->g_34 p_1537->g_1115 p_1537->g_248.f7 p_1537->g_1209.f3 p_1537->g_327.f5
 */
int8_t  func_4(int8_t  p_5, int16_t  p_6, int64_t  p_7, int32_t  p_8, int32_t  p_9, struct S1 * p_1537)
{ /* block id: 573 */
    VECTOR(uint64_t, 8) l_1120 = (VECTOR(uint64_t, 8))(0xFB24B1B5D8F7A4B0L, (VECTOR(uint64_t, 4))(0xFB24B1B5D8F7A4B0L, (VECTOR(uint64_t, 2))(0xFB24B1B5D8F7A4B0L, 5UL), 5UL), 5UL, 0xFB24B1B5D8F7A4B0L, 5UL);
    uint64_t *l_1121 = &p_1537->g_196[0];
    int16_t **l_1139 = (void*)0;
    VECTOR(uint16_t, 8) l_1213 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
    VECTOR(int32_t, 8) l_1214 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x32AB5D11L), 0x32AB5D11L), 0x32AB5D11L, (-3L), 0x32AB5D11L);
    int32_t *l_1261 = (void*)0;
    int32_t *l_1262 = &p_1537->g_183;
    uint64_t l_1289[3];
    VECTOR(int8_t, 4) l_1300 = (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, (-2L)), (-2L));
    int8_t l_1347 = 0x23L;
    VECTOR(uint64_t, 16) l_1382 = (VECTOR(uint64_t, 16))(0xE0AEA511F9E1189BL, (VECTOR(uint64_t, 4))(0xE0AEA511F9E1189BL, (VECTOR(uint64_t, 2))(0xE0AEA511F9E1189BL, 18446744073709551611UL), 18446744073709551611UL), 18446744073709551611UL, 0xE0AEA511F9E1189BL, 18446744073709551611UL, (VECTOR(uint64_t, 2))(0xE0AEA511F9E1189BL, 18446744073709551611UL), (VECTOR(uint64_t, 2))(0xE0AEA511F9E1189BL, 18446744073709551611UL), 0xE0AEA511F9E1189BL, 18446744073709551611UL, 0xE0AEA511F9E1189BL, 18446744073709551611UL);
    uint8_t l_1402[10][1][7] = {{{1UL,250UL,4UL,250UL,1UL,1UL,250UL}},{{1UL,250UL,4UL,250UL,1UL,1UL,250UL}},{{1UL,250UL,4UL,250UL,1UL,1UL,250UL}},{{1UL,250UL,4UL,250UL,1UL,1UL,250UL}},{{1UL,250UL,4UL,250UL,1UL,1UL,250UL}},{{1UL,250UL,4UL,250UL,1UL,1UL,250UL}},{{1UL,250UL,4UL,250UL,1UL,1UL,250UL}},{{1UL,250UL,4UL,250UL,1UL,1UL,250UL}},{{1UL,250UL,4UL,250UL,1UL,1UL,250UL}},{{1UL,250UL,4UL,250UL,1UL,1UL,250UL}}};
    int8_t *l_1417[9][9];
    int8_t *l_1419 = (void*)0;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1289[i] = 18446744073709551615UL;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
            l_1417[i][j] = &l_1347;
    }
    (*p_1537->g_1140) = func_150(((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((*l_1121) = ((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_1120.s1776065463137474)).even)).s60, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(18446744073709551608UL, 0x86D8E539FF0161FDL)).xxyyxyxxyxxyxxyx)).sd7))).even) , ((safe_mul_func_int8_t_s_s(((p_6 || (((safe_mod_func_uint32_t_u_u(p_1537->g_382.x, (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(255UL, (safe_mod_func_uint8_t_u_u(p_6, 1L)), 247UL, 0x7FL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_1537->g_1136.yyyxyyyy)).s04)).xyxy)).xyywzzzyxxwwxzzx)).s95)).yyxx)))).s6, 9L)), ((((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 4))((safe_mul_func_int16_t_s_s(0x197BL, p_9)), ((VECTOR(uint64_t, 2))(0x573E4010ECA4A9D1L, 0xDEA3857C5FE2610DL)).odd, 0UL, 0UL)), ((VECTOR(uint64_t, 2))(18446744073709551615UL, 7UL)).yxyx))).w > 1L) & (p_6 , GROUP_DIVERGE(1, 1))))), p_1537->g_630[0].f1)), p_1537->g_248.f5)))) , p_1537->g_304) ^ p_5)) > 0UL), 0x2AL)) >= GROUP_DIVERGE(2, 1))), l_1120.s4)), p_1537->g_304)) != FAKE_DIVERGE(p_1537->global_0_offset, get_global_id(0), 10)), p_1537->g_1000[3].f7, p_1537->g_534.w, l_1139, p_1537);
    for (p_1537->g_566.f3 = 0; (p_1537->g_566.f3 != 13); ++p_1537->g_566.f3)
    { /* block id: 578 */
        int8_t l_1143 = 0x2CL;
        return l_1143;
    }
    for (p_1537->g_566.f0 = 0; (p_1537->g_566.f0 <= 44); p_1537->g_566.f0 = safe_add_func_int64_t_s_s(p_1537->g_566.f0, 4))
    { /* block id: 583 */
        int32_t l_1204 = 3L;
        uint32_t l_1210 = 0x53A41A05L;
        if ((atomic_inc(&p_1537->g_atomic_input[18 * get_linear_group_id() + 11]) == 6))
        { /* block id: 585 */
            uint64_t **l_1146 = (void*)0;
            int32_t l_1147[5] = {0x07AAF812L,0x07AAF812L,0x07AAF812L,0x07AAF812L,0x07AAF812L};
            uint16_t l_1197 = 0x46A0L;
            struct S0 l_1198 = {0x08A380B0L,-10L,0x6A08A34040697D46L,0x3F13EF4EL,0x7EA68273L,0x27D94B3EE9793F5EL,-1L,0x7FL,0xA8228E54L};/* VOLATILE GLOBAL l_1198 */
            struct S0 l_1199 = {4294967295UL,0x27FE6E7661562853L,0L,6L,1L,0x6D3DAD2E892146E1L,-2L,0x50L,0UL};/* VOLATILE GLOBAL l_1199 */
            int i;
            l_1146 = l_1146;
            for (l_1147[4] = 0; (l_1147[4] != (-6)); l_1147[4] = safe_sub_func_uint32_t_u_u(l_1147[4], 6))
            { /* block id: 589 */
                int32_t l_1150 = 9L;
                for (l_1150 = 0; (l_1150 != (-29)); --l_1150)
                { /* block id: 592 */
                    int32_t l_1153 = 0x6E8031F9L;
                    VECTOR(int32_t, 2) l_1184 = (VECTOR(int32_t, 2))(0x0507EB27L, (-1L));
                    uint64_t l_1185 = 0x70712998F60CECAFL;
                    uint64_t l_1186[9] = {0x66515F0F693B9A6EL,0x66515F0F693B9A6EL,0x66515F0F693B9A6EL,0x66515F0F693B9A6EL,0x66515F0F693B9A6EL,0x66515F0F693B9A6EL,0x66515F0F693B9A6EL,0x66515F0F693B9A6EL,0x66515F0F693B9A6EL};
                    int32_t l_1187 = 0L;
                    uint64_t l_1195[5];
                    int32_t *l_1196[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1195[i] = 0UL;
                    for (l_1153 = 13; (l_1153 <= (-27)); l_1153 = safe_sub_func_uint32_t_u_u(l_1153, 6))
                    { /* block id: 595 */
                        uint16_t l_1156 = 1UL;
                        int32_t l_1157 = (-3L);
                        int64_t l_1158 = 1L;
                        int32_t l_1159 = (-7L);
                        int16_t l_1160 = (-1L);
                        int16_t l_1161 = 1L;
                        int64_t l_1162 = 0L;
                        uint32_t l_1163[10] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                        int64_t l_1166 = 0x4AB0C7BF828808E1L;
                        uint32_t l_1167 = 1UL;
                        uint16_t l_1168 = 0xD194L;
                        VECTOR(uint8_t, 2) l_1169 = (VECTOR(uint8_t, 2))(248UL, 0x2EL);
                        int8_t l_1170 = 1L;
                        uint32_t l_1171 = 4294967295UL;
                        int32_t l_1172 = 0x547FB879L;
                        int8_t l_1173 = (-1L);
                        VECTOR(uint8_t, 16) l_1174 = (VECTOR(uint8_t, 16))(0xB5L, (VECTOR(uint8_t, 4))(0xB5L, (VECTOR(uint8_t, 2))(0xB5L, 249UL), 249UL), 249UL, 0xB5L, 249UL, (VECTOR(uint8_t, 2))(0xB5L, 249UL), (VECTOR(uint8_t, 2))(0xB5L, 249UL), 0xB5L, 249UL, 0xB5L, 249UL);
                        uint16_t l_1175[9] = {0x5FB3L,0x5FB3L,0x5FB3L,0x5FB3L,0x5FB3L,0x5FB3L,0x5FB3L,0x5FB3L,0x5FB3L};
                        uint64_t l_1176 = 18446744073709551615UL;
                        uint32_t l_1177 = 4294967289UL;
                        int16_t l_1178 = 0x6F12L;
                        int32_t l_1179 = 0L;
                        int32_t *l_1180 = (void*)0;
                        VECTOR(uint64_t, 16) l_1181 = (VECTOR(uint64_t, 16))(0xDB942998ADE0A4DCL, (VECTOR(uint64_t, 4))(0xDB942998ADE0A4DCL, (VECTOR(uint64_t, 2))(0xDB942998ADE0A4DCL, 0x60FD450BE7F06A9FL), 0x60FD450BE7F06A9FL), 0x60FD450BE7F06A9FL, 0xDB942998ADE0A4DCL, 0x60FD450BE7F06A9FL, (VECTOR(uint64_t, 2))(0xDB942998ADE0A4DCL, 0x60FD450BE7F06A9FL), (VECTOR(uint64_t, 2))(0xDB942998ADE0A4DCL, 0x60FD450BE7F06A9FL), 0xDB942998ADE0A4DCL, 0x60FD450BE7F06A9FL, 0xDB942998ADE0A4DCL, 0x60FD450BE7F06A9FL);
                        uint32_t l_1182 = 0xCCAAD76BL;
                        int16_t l_1183 = 0x387FL;
                        int i;
                        l_1180 = ((l_1156 , ((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))((l_1163[5]++), ((l_1168 = (l_1166 , l_1167)) , 4UL), 0UL, 0xD2B0716DL)).yzzzzxwx, ((VECTOR(uint32_t, 16))(0x4CD109EAL, 0UL, 0xD112DC4DL, 0x7CE8559FL, FAKE_DIVERGE(p_1537->global_2_offset, get_global_id(2), 10), (l_1176 |= (((VECTOR(uint8_t, 4))(l_1169.yxyy)).y , (l_1175[5] ^= ((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967290UL, 0xEE36E2A0L)).xyyx)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_1170, l_1171, 0x7AC1F2B3L, 4294967290UL, ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 8))(0UL, 0x97474BA8L, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(0x95437173L, 0xDAF1338AL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0UL, 0x014D0E08L)), 0x55C8A441L, 0xEBA658CDL)), ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 4))(1UL, ((VECTOR(uint32_t, 4))(0x9A0CAAC1L, FAKE_DIVERGE(p_1537->local_2_offset, get_local_id(2), 10), 0xB56907F6L, 2UL)).y, 0xEA1A11D8L, 0x55CE6BD9L)), ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 16))(0x4A7DD759L, 0x4BFCCE66L, ((VECTOR(int32_t, 4))(0x5788E4F1L, 1L, 6L, 0x37AC984BL)), 0x59B9FCFBL, l_1172, ((VECTOR(int32_t, 4))(0x211F7978L)), 0x7343C87EL, 4L, 4L, (-4L))).s93d8, ((VECTOR(int32_t, 4))(0x0EB1FEBCL))))).zzzwxyyzwyzyzyzx)).s628e, ((VECTOR(uint32_t, 4))(4294967295UL)))))))), ((VECTOR(uint32_t, 4))(0UL)), 4294967289UL, 0x15860B70L)).s7, l_1173, 4294967295UL, 0UL)))).lo)), ((VECTOR(uint32_t, 2))(0x3617DF7AL))))), ((VECTOR(uint32_t, 4))(8UL)))), ((VECTOR(uint32_t, 8))(0x57165855L))))), ((VECTOR(uint32_t, 8))(0x0DA1BA9AL))))).s73)))))), ((VECTOR(uint32_t, 2))(0UL))))), l_1174.s1, ((VECTOR(uint32_t, 4))(4294967293UL)), 0x25139A55L, ((VECTOR(uint32_t, 4))(3UL)))).s85)).xxxxyxyyyxxxyxyx)).sb5b0))).z))), l_1177, GROUP_DIVERGE(0, 1), ((VECTOR(uint32_t, 2))(1UL)), l_1178, ((VECTOR(uint32_t, 2))(4294967294UL)), l_1179, 4294967286UL, 0x14168FB1L)).hi, ((VECTOR(uint32_t, 8))(1UL))))).s4) , (void*)0);
                        l_1183 = (l_1181.s8 , (l_1182 = 5L));
                    }
                    l_1185 |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1184.xy)))))).hi;
                    if ((l_1186[1] , l_1187))
                    { /* block id: 605 */
                        int16_t l_1188[7][9][4] = {{{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L}},{{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L}},{{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L}},{{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L}},{{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L}},{{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L}},{{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L},{(-1L),(-1L),0x1E24L,1L}}};
                        int i, j, k;
                        l_1153 = (l_1184.x &= l_1188[5][4][0]);
                    }
                    else
                    { /* block id: 608 */
                        int32_t l_1190[7][7][3] = {{{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)}},{{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)}},{{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)}},{{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)}},{{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)}},{{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)}},{{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)},{(-1L),0L,(-1L)}}};
                        int32_t *l_1189 = &l_1190[0][1][0];
                        int32_t *l_1191 = &l_1190[6][4][0];
                        struct S0 l_1192[5][1] = {{{0xEB40BB3DL,8L,2L,0x4CE9DF88L,-9L,0x532628477BFF526FL,-1L,0x47L,4294967289UL}},{{0xEB40BB3DL,8L,2L,0x4CE9DF88L,-9L,0x532628477BFF526FL,-1L,0x47L,4294967289UL}},{{0xEB40BB3DL,8L,2L,0x4CE9DF88L,-9L,0x532628477BFF526FL,-1L,0x47L,4294967289UL}},{{0xEB40BB3DL,8L,2L,0x4CE9DF88L,-9L,0x532628477BFF526FL,-1L,0x47L,4294967289UL}},{{0xEB40BB3DL,8L,2L,0x4CE9DF88L,-9L,0x532628477BFF526FL,-1L,0x47L,4294967289UL}}};
                        struct S0 l_1193 = {0xBCCE54A7L,1L,-1L,0x6DC874A1L,0x3D6FB2C9L,0x5148D89221EEF4BDL,0x26818AE7L,0x6CL,0x72816DAAL};/* VOLATILE GLOBAL l_1193 */
                        VECTOR(int16_t, 8) l_1194 = (VECTOR(int16_t, 8))(0x1658L, (VECTOR(int16_t, 4))(0x1658L, (VECTOR(int16_t, 2))(0x1658L, 0x4553L), 0x4553L), 0x4553L, 0x1658L, 0x4553L);
                        int i, j, k;
                        l_1191 = l_1189;
                        l_1193 = l_1192[3][0];
                        l_1184.y ^= (l_1153 ^= l_1194.s7);
                    }
                    l_1196[1] = (l_1195[2] , (void*)0);
                }
            }
            l_1199 = (l_1197 , l_1198);
            unsigned int result = 0;
            int l_1147_i0;
            for (l_1147_i0 = 0; l_1147_i0 < 5; l_1147_i0++) {
                result += l_1147[l_1147_i0];
            }
            result += l_1197;
            result += l_1198.f0;
            result += l_1198.f1;
            result += l_1198.f2;
            result += l_1198.f3;
            result += l_1198.f4;
            result += l_1198.f5;
            result += l_1198.f6;
            result += l_1198.f7;
            result += l_1198.f8;
            result += l_1199.f0;
            result += l_1199.f1;
            result += l_1199.f2;
            result += l_1199.f3;
            result += l_1199.f4;
            result += l_1199.f5;
            result += l_1199.f6;
            result += l_1199.f7;
            result += l_1199.f8;
            atomic_add(&p_1537->g_special_values[18 * get_linear_group_id() + 11], result);
        }
        else
        { /* block id: 618 */
            (1 + 1);
        }
        (*p_1537->g_246) = (((safe_sub_func_int8_t_s_s((safe_div_func_uint64_t_u_u(FAKE_DIVERGE(p_1537->group_2_offset, get_group_id(2), 10), (-1L))), (l_1204 , (safe_div_func_int8_t_s_s(0x4CL, (safe_lshift_func_int8_t_s_s((p_1537->g_436.s3 = 0x0DL), (((((p_1537->g_1209 , ((&p_1537->g_265 != (void*)0) , func_18(p_6, p_9, l_1204, &p_1537->g_35, p_1537))) != (void*)0) , l_1120.s7) , 4294967289UL) , l_1120.s4)))))))) ^ l_1210) > p_1537->g_327.f0);
    }
    if ((GROUP_DIVERGE(0, 1) , (FAKE_DIVERGE(p_1537->global_2_offset, get_global_id(2), 10) , ((safe_lshift_func_int16_t_s_u(((*p_1537->g_1042) > 1L), ((VECTOR(uint16_t, 16))(l_1213.s2115370273312205)).sf)) , ((VECTOR(int32_t, 2))(l_1214.s32)).hi))))
    { /* block id: 624 */
        int32_t *l_1218 = &p_1537->g_183;
        VECTOR(int8_t, 16) l_1230 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-9L)), (-9L)), (-9L), 0L, (-9L), (VECTOR(int8_t, 2))(0L, (-9L)), (VECTOR(int8_t, 2))(0L, (-9L)), 0L, (-9L), 0L, (-9L));
        int16_t ***l_1258 = &l_1139;
        VECTOR(int32_t, 8) l_1278 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-6L)), (-6L)), (-6L), (-2L), (-6L));
        struct S0 *l_1281 = &p_1537->g_416[1][3];
        int16_t **l_1293 = &p_1537->g_272;
        int8_t *l_1295 = (void*)0;
        int8_t *l_1296 = (void*)0;
        int8_t *l_1297 = &p_1537->g_35;
        VECTOR(int8_t, 8) l_1302 = (VECTOR(int8_t, 8))(0x7FL, (VECTOR(int8_t, 4))(0x7FL, (VECTOR(int8_t, 2))(0x7FL, 0x48L), 0x48L), 0x48L, 0x7FL, 0x48L);
        int8_t *l_1303 = (void*)0;
        int32_t l_1341 = 0x49E89799L;
        uint16_t *l_1346[2][8][9] = {{{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]},{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]},{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]},{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]},{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]},{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]},{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]},{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]}},{{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]},{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]},{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]},{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]},{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]},{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]},{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]},{&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[1],(void*)0,&p_1537->g_366[8],&p_1537->g_366[1],&p_1537->g_366[1],&p_1537->g_366[8],&p_1537->g_366[1]}}};
        int32_t **l_1348 = (void*)0;
        int i, j, k;
        for (p_1537->g_359.f0 = (-7); (p_1537->g_359.f0 != 31); ++p_1537->g_359.f0)
        { /* block id: 627 */
            int32_t *l_1217 = (void*)0;
            l_1218 = (FAKE_DIVERGE(p_1537->local_2_offset, get_local_id(2), 10) , l_1217);
        }
        for (p_1537->g_566.f0 = (-13); (p_1537->g_566.f0 == 49); p_1537->g_566.f0++)
        { /* block id: 632 */
            int32_t *l_1221[6][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint64_t l_1225 = 1UL;
            uint16_t *l_1255 = (void*)0;
            int64_t **l_1275 = &p_1537->g_345;
            int16_t l_1292 = 0x1BCEL;
            int i, j;
            l_1218 = l_1221[3][6];
            if ((*p_1537->g_182))
                continue;
            for (p_1537->g_600.f7 = 0; (p_1537->g_600.f7 > 45); ++p_1537->g_600.f7)
            { /* block id: 637 */
                int32_t l_1224 = 5L;
                int16_t ***l_1259 = &l_1139;
                uint32_t *l_1288 = &p_1537->g_248.f0;
                struct S0 *l_1290 = &p_1537->g_164;
                int32_t l_1291[4];
                int32_t **l_1294[9][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1291[i] = 1L;
                ++l_1225;
                if ((((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 2))(l_1230.s93)).even, 6)) != ((***p_1537->g_1091) = (***p_1537->g_1091))) , (safe_sub_func_int32_t_s_s(p_5, p_7))))
                { /* block id: 640 */
                    uint16_t l_1257 = 65535UL;
                    if ((atomic_inc(&p_1537->g_atomic_input[18 * get_linear_group_id() + 6]) == 3))
                    { /* block id: 642 */
                        uint32_t l_1233 = 0xA80F947FL;
                        VECTOR(int32_t, 4) l_1234 = (VECTOR(int32_t, 4))(0x03439A10L, (VECTOR(int32_t, 2))(0x03439A10L, (-1L)), (-1L));
                        VECTOR(int32_t, 4) l_1235 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 2L), 2L);
                        VECTOR(int32_t, 2) l_1236 = (VECTOR(int32_t, 2))(0x3CF8F212L, (-7L));
                        uint64_t l_1237 = 0x73A342E78408D2E3L;
                        uint64_t l_1238 = 0x9958BBDD6026932BL;
                        int32_t l_1239 = 0x59172C70L;
                        int16_t l_1240[7] = {0x2315L,0x2315L,0x2315L,0x2315L,0x2315L,0x2315L,0x2315L};
                        VECTOR(int32_t, 16) l_1241 = (VECTOR(int32_t, 16))(0x208B9D65L, (VECTOR(int32_t, 4))(0x208B9D65L, (VECTOR(int32_t, 2))(0x208B9D65L, 0L), 0L), 0L, 0x208B9D65L, 0L, (VECTOR(int32_t, 2))(0x208B9D65L, 0L), (VECTOR(int32_t, 2))(0x208B9D65L, 0L), 0x208B9D65L, 0L, 0x208B9D65L, 0L);
                        int32_t l_1242[5];
                        int64_t l_1243 = (-1L);
                        int64_t l_1244 = 0x0C27956618841078L;
                        VECTOR(int16_t, 8) l_1245 = (VECTOR(int16_t, 8))(0x01CDL, (VECTOR(int16_t, 4))(0x01CDL, (VECTOR(int16_t, 2))(0x01CDL, 1L), 1L), 1L, 0x01CDL, 1L);
                        VECTOR(int16_t, 2) l_1246 = (VECTOR(int16_t, 2))(0x6DD8L, 0x3778L);
                        int32_t l_1247 = 0x42D8840DL;
                        int8_t l_1248 = (-2L);
                        uint8_t l_1249 = 3UL;
                        int32_t l_1250[2];
                        VECTOR(uint16_t, 2) l_1251 = (VECTOR(uint16_t, 2))(1UL, 0xD17BL);
                        VECTOR(int32_t, 4) l_1252 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 1L), 1L);
                        struct S0 l_1253 = {1UL,0x050EBCAE8C475CC2L,0x6E500200E644271EL,-1L,0x358D727CL,0xC1F915A0B4B97832L,0x1BF7D81CL,255UL,0xBC17E0DCL};/* VOLATILE GLOBAL l_1253 */
                        int32_t *l_1254 = (void*)0;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1242[i] = 0x6F272D58L;
                        for (i = 0; i < 2; i++)
                            l_1250[i] = 0L;
                        l_1233 = (-1L);
                        l_1238 = (l_1237 = ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(l_1234.yy)).yyyyxxyxxxxxxyxx, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1235.xzzzzxwy)).s1410634064107114)).s56b6)).xzzzwzzw)).s74)).xyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_1236.xx)).yyyyyxxyxyyyyxyx)).scce9))).xxwywwwxwzzyzyyx))).sb);
                        l_1240[3] &= (l_1234.z = l_1239);
                        l_1254 = (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x3E5B2F70L, 1L, (-6L), 3L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1241.s6c59)).hi)).xxxxxxyx)), (l_1243 = l_1242[4]), l_1244, (-6L), 1L)).s91)).xyyyyyyy)).s22, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 2))(l_1245.s44)).xxxx, ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 16))(l_1246.yyyyxyyyyyxyyyxy)).hi, (int16_t)l_1247, (int16_t)(l_1248 , (l_1250[1] = l_1249)))))))).lo))).yxzxxyxzwywyzzyx)).odd)).s01, ((VECTOR(uint16_t, 4))(l_1251.xyyy)).odd))).yyxx, ((VECTOR(int32_t, 2))(0x00BF7970L, (-3L))).yxyx))).zwxwxzwz, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_1252.xzyzwzwxyzyyywwx)).s24)).xyxxxyyx))).s17))).xyyxxyyy)).s2 , (l_1253 , (void*)0));
                        unsigned int result = 0;
                        result += l_1233;
                        result += l_1234.w;
                        result += l_1234.z;
                        result += l_1234.y;
                        result += l_1234.x;
                        result += l_1235.w;
                        result += l_1235.z;
                        result += l_1235.y;
                        result += l_1235.x;
                        result += l_1236.y;
                        result += l_1236.x;
                        result += l_1237;
                        result += l_1238;
                        result += l_1239;
                        int l_1240_i0;
                        for (l_1240_i0 = 0; l_1240_i0 < 7; l_1240_i0++) {
                            result += l_1240[l_1240_i0];
                        }
                        result += l_1241.sf;
                        result += l_1241.se;
                        result += l_1241.sd;
                        result += l_1241.sc;
                        result += l_1241.sb;
                        result += l_1241.sa;
                        result += l_1241.s9;
                        result += l_1241.s8;
                        result += l_1241.s7;
                        result += l_1241.s6;
                        result += l_1241.s5;
                        result += l_1241.s4;
                        result += l_1241.s3;
                        result += l_1241.s2;
                        result += l_1241.s1;
                        result += l_1241.s0;
                        int l_1242_i0;
                        for (l_1242_i0 = 0; l_1242_i0 < 5; l_1242_i0++) {
                            result += l_1242[l_1242_i0];
                        }
                        result += l_1243;
                        result += l_1244;
                        result += l_1245.s7;
                        result += l_1245.s6;
                        result += l_1245.s5;
                        result += l_1245.s4;
                        result += l_1245.s3;
                        result += l_1245.s2;
                        result += l_1245.s1;
                        result += l_1245.s0;
                        result += l_1246.y;
                        result += l_1246.x;
                        result += l_1247;
                        result += l_1248;
                        result += l_1249;
                        int l_1250_i0;
                        for (l_1250_i0 = 0; l_1250_i0 < 2; l_1250_i0++) {
                            result += l_1250[l_1250_i0];
                        }
                        result += l_1251.y;
                        result += l_1251.x;
                        result += l_1252.w;
                        result += l_1252.z;
                        result += l_1252.y;
                        result += l_1252.x;
                        result += l_1253.f0;
                        result += l_1253.f1;
                        result += l_1253.f2;
                        result += l_1253.f3;
                        result += l_1253.f4;
                        result += l_1253.f5;
                        result += l_1253.f6;
                        result += l_1253.f7;
                        result += l_1253.f8;
                        atomic_add(&p_1537->g_special_values[18 * get_linear_group_id() + 6], result);
                    }
                    else
                    { /* block id: 651 */
                        (1 + 1);
                    }
                    if ((*p_1537->g_1042))
                        break;
                    (*p_1537->g_278) = ((((l_1255 == &p_1537->g_366[1]) | (l_1224 & (p_1537->g_494.f5 = (((VECTOR(uint16_t, 4))(p_1537->g_1256.yxxw)).z > l_1257)))) , (l_1258 == l_1259)) , p_1537->g_1260);
                    return p_8;
                }
                else
                { /* block id: 658 */
                    int32_t *l_1268[2][8] = {{(void*)0,&p_1537->g_183,&p_1537->g_183,(void*)0,(void*)0,&p_1537->g_183,&p_1537->g_183,(void*)0},{(void*)0,&p_1537->g_183,&p_1537->g_183,(void*)0,(void*)0,&p_1537->g_183,&p_1537->g_183,(void*)0}};
                    int i, j;
                    l_1262 = (l_1261 = (*p_1537->g_1140));
                    for (p_1537->g_304 = 0; (p_1537->g_304 == (-16)); p_1537->g_304 = safe_sub_func_int32_t_s_s(p_1537->g_304, 5))
                    { /* block id: 663 */
                        int32_t *l_1265 = &p_1537->g_183;
                        int32_t **l_1266 = (void*)0;
                        int32_t **l_1267 = &l_1265;
                        if ((*p_1537->g_246))
                            break;
                        l_1268[1][0] = ((*l_1267) = (l_1221[2][0] = (((p_1537->g_600.f7 , &p_1537->g_333) != &l_1225) , l_1265)));
                    }
                    if ((atomic_inc(&p_1537->l_atomic_input[10]) == 9))
                    { /* block id: 670 */
                        uint16_t l_1269 = 65529UL;
                        int32_t l_1273 = (-5L);
                        int32_t *l_1272[9] = {&l_1273,&l_1273,&l_1273,&l_1273,&l_1273,&l_1273,&l_1273,&l_1273,&l_1273};
                        int32_t *l_1274 = &l_1273;
                        int i;
                        l_1269--;
                        l_1274 = l_1272[1];
                        unsigned int result = 0;
                        result += l_1269;
                        result += l_1273;
                        atomic_add(&p_1537->l_special_values[10], result);
                    }
                    else
                    { /* block id: 673 */
                        (1 + 1);
                    }
                }
                l_1292 = (((void*)0 == l_1275) , ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(p_1537->g_1276.xxyxyyyx)).even, ((VECTOR(uint16_t, 8))(p_1537->g_1277.s51304455)).even))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1278.s37)))), (-1L), ((!GROUP_DIVERGE(2, 1)) != ((FAKE_DIVERGE(p_1537->local_0_offset, get_local_id(0), 10) && (l_1291[1] = (safe_add_func_int64_t_s_s((4294967292UL || ((VECTOR(int32_t, 2))(0x426727A2L, 0x7B6DE1CEL)).hi), ((((l_1281 == ((safe_div_func_int64_t_s_s((((*l_1288) = (safe_sub_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), ((((VECTOR(uint64_t, 8))(p_1537->g_1286.yyyxyxyy)).s1 <= ((((*p_1537->g_272) = (*p_1537->g_272)) != (p_5 || ((*l_1258) == (((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(p_1537->g_1287.wzzwyzzw)).odd, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(GROUP_DIVERGE(1, 1), (p_5 , ((void*)0 == l_1218)), ((VECTOR(uint32_t, 4))(1UL)), 0x5290AA4FL, 0x0107513BL)))), ((VECTOR(uint32_t, 8))(0x66B1D28FL))))).hi))).lo, ((VECTOR(uint32_t, 2))(0xAC17E33BL))))).odd , (void*)0)))) , p_7)) ^ 6UL)))) , 0x63033B39767F7E40L), l_1289[0])) , l_1290)) , l_1218) == l_1221[3][6]) && p_1537->g_248.f5))))) & 0UL)), (-8L), ((VECTOR(int32_t, 2))(0x403A46B1L)), 8L)).lo, ((VECTOR(int32_t, 4))(0x09AB0A5EL))))).lo)).xxxy, ((VECTOR(int32_t, 4))(0x30E38983L))))).wzyywxxyzxxwwwzz)).even, ((VECTOR(int32_t, 8))(0x25FEDADCL))))), ((VECTOR(int32_t, 8))(0x3F566D0EL))))).s4);
                l_1218 = func_150(p_7, p_5, p_1537->g_566.f7, l_1293, p_1537);
            }
        }
        l_1218 = func_150(((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x67DFD77AL, 0x51ABDAEFL)).yxyx)).ywxyxzxw)).s5 == (((*l_1297) = l_1230.s0) != (safe_mul_func_uint16_t_u_u((((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_1300.wwzwyzzywxzxzwyx)).sd4)), 0x5DL, 0x07L)))).xxywywwyyxxxyyxy))).s15, ((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(p_1537->g_1301.yx)).xxyxxxxxxxxxyxxx, ((VECTOR(int8_t, 16))(l_1302.s5367607545173620)), ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(0x3EL, (p_1537->g_394.y ^= 0L), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))((!((l_1347 = ((p_7 , (((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 16))(0x2B70L, ((VECTOR(uint16_t, 8))(p_1537->g_1304.sdc53c2d4)), 0UL, (p_7 != (safe_div_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((&l_1281 != (void*)0), (!((((-1L) > (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((!((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((~((safe_mod_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(l_1341, (safe_div_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(4UL, 1)) < 1UL), 18446744073709551615UL)))), 0x2C55A689D5A8D9F0L)), p_1537->g_157.z)), p_1537->g_1209.f7)), p_7)), p_1537->g_446.w)) ^ p_7)), l_1278.s5)), FAKE_DIVERGE(p_1537->global_2_offset, get_global_id(2), 10))), 6)), 0x48L)), p_1537->g_1287.y)), (-1L))) == p_5)), 3UL)), 3)), p_5))) ^ (-1L)) <= 1L)))), p_5)) == p_9) <= (***p_1537->g_1091)), p_1537->g_395.y))), p_6, 1UL, 0x6ED8L, 1UL, 0x628EL)), ((VECTOR(uint16_t, 16))(1UL))))).s6 || p_7)) & p_1537->g_534.y)) && FAKE_DIVERGE(p_1537->group_2_offset, get_group_id(2), 10))), ((VECTOR(int8_t, 4))(0x4AL)), 0x1CL, (-1L), 3L)).lo)).ywwzywxz, ((VECTOR(int8_t, 8))((-6L)))))), ((VECTOR(int8_t, 8))((-1L)))))).hi, ((VECTOR(int8_t, 4))(0L))))).xzzzzzyz, ((VECTOR(int8_t, 8))((-1L)))))).hi)).lo)))), (int8_t)0x2CL))), 0x4CL, (-10L))), p_6, 0x41L, 1L, ((VECTOR(int8_t, 2))(0x2CL)), p_5, (-1L), ((VECTOR(int8_t, 2))(9L)), 0x3DL)).s1b, ((VECTOR(int8_t, 2))(3L))))).xxxxyxyxxxxyyyxy))).s73))), ((VECTOR(int8_t, 2))((-5L))), ((VECTOR(int8_t, 2))(1L))))).lo != 1L), p_8)))) > 0x780FC660L), p_1537->g_1209.f5, p_5, l_1139, p_1537);
    }
    else
    { /* block id: 688 */
        VECTOR(int16_t, 8) l_1381 = (VECTOR(int16_t, 8))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0x5DCEL), 0x5DCEL), 0x5DCEL, 3L, 0x5DCEL);
        VECTOR(int16_t, 2) l_1384 = (VECTOR(int16_t, 2))(0x5FDBL, (-5L));
        uint16_t *l_1394 = &p_1537->g_366[1];
        int64_t *l_1403 = &p_1537->g_1000[3].f1;
        VECTOR(int32_t, 8) l_1407 = (VECTOR(int32_t, 8))(0x71047CE2L, (VECTOR(int32_t, 4))(0x71047CE2L, (VECTOR(int32_t, 2))(0x71047CE2L, (-1L)), (-1L)), (-1L), 0x71047CE2L, (-1L));
        int8_t *l_1414 = (void*)0;
        uint32_t l_1427 = 0x1DEE6D10L;
        int i;
        (*l_1262) &= 0x2DFDDD27L;
        for (p_1537->g_166.f6 = 13; (p_1537->g_166.f6 < (-27)); p_1537->g_166.f6--)
        { /* block id: 692 */
            int64_t l_1371 = 0L;
            VECTOR(int16_t, 2) l_1380 = (VECTOR(int16_t, 2))(1L, (-10L));
            VECTOR(uint16_t, 2) l_1390 = (VECTOR(uint16_t, 2))(0xF31BL, 1UL);
            struct S0 *l_1397 = &p_1537->g_359;
            int16_t *l_1399 = &p_1537->g_304;
            int32_t **l_1404 = &l_1261;
            VECTOR(int32_t, 16) l_1405 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x0F872B94L), 0x0F872B94L), 0x0F872B94L, (-3L), 0x0F872B94L, (VECTOR(int32_t, 2))((-3L), 0x0F872B94L), (VECTOR(int32_t, 2))((-3L), 0x0F872B94L), (-3L), 0x0F872B94L, (-3L), 0x0F872B94L);
            VECTOR(int32_t, 8) l_1406 = (VECTOR(int32_t, 8))(0x2A96469EL, (VECTOR(int32_t, 4))(0x2A96469EL, (VECTOR(int32_t, 2))(0x2A96469EL, 0x76BBB191L), 0x76BBB191L), 0x76BBB191L, 0x2A96469EL, 0x76BBB191L);
            VECTOR(int32_t, 16) l_1408 = (VECTOR(int32_t, 16))(0x32AF10A7L, (VECTOR(int32_t, 4))(0x32AF10A7L, (VECTOR(int32_t, 2))(0x32AF10A7L, 0x7E1C2900L), 0x7E1C2900L), 0x7E1C2900L, 0x32AF10A7L, 0x7E1C2900L, (VECTOR(int32_t, 2))(0x32AF10A7L, 0x7E1C2900L), (VECTOR(int32_t, 2))(0x32AF10A7L, 0x7E1C2900L), 0x32AF10A7L, 0x7E1C2900L, 0x32AF10A7L, 0x7E1C2900L);
            VECTOR(int32_t, 2) l_1409 = (VECTOR(int32_t, 2))(0x5C4E41EEL, (-10L));
            int8_t **l_1415 = &p_1537->g_34;
            int8_t **l_1416 = &p_1537->g_1115;
            int8_t **l_1418[8][1][5] = {{{&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2]}},{{&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2]}},{{&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2]}},{{&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2]}},{{&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2]}},{{&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2]}},{{&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2]}},{{&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2],&l_1417[4][2]}}};
            uint32_t *l_1420 = (void*)0;
            uint32_t *l_1421[10][4][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
            int64_t **l_1422 = &p_1537->g_345;
            int i, j, k;
            for (p_1537->g_1260.f6 = (-20); (p_1537->g_1260.f6 < (-25)); --p_1537->g_1260.f6)
            { /* block id: 695 */
                uint32_t l_1362[4];
                uint16_t *l_1363 = (void*)0;
                int32_t l_1364 = 0x7D8B9FBDL;
                uint64_t *l_1383 = &p_1537->g_196[4];
                VECTOR(uint16_t, 2) l_1385 = (VECTOR(uint16_t, 2))(0UL, 65535UL);
                int32_t l_1393[9];
                uint16_t **l_1395 = (void*)0;
                uint16_t **l_1396[2];
                int i;
                for (i = 0; i < 4; i++)
                    l_1362[i] = 2UL;
                for (i = 0; i < 9; i++)
                    l_1393[i] = 0x01591186L;
                for (i = 0; i < 2; i++)
                    l_1396[i] = &l_1394;
                l_1371 = ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((-6L), ((VECTOR(int32_t, 8))(p_1537->g_1353.xyxwxyyw)), (-1L), (0xCE49L > ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((l_1364 = (safe_rshift_func_int8_t_s_s(0x7AL, ((safe_sub_func_int64_t_s_s(l_1362[1], p_1537->g_436.s2)) , p_8)))), (safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), (-1L))), (-7L), 0x3252L)).ywxwzywzyyyzzyzw))).s3, 7)))), (~p_5))) >= (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((p_6 > (((p_9 != ((&p_1537->g_243 == &p_1537->g_243) , p_9)) || p_1537->g_446.y) > p_6)), 5)), (*l_1262))))), ((VECTOR(int32_t, 2))(0x324C14ACL)), ((VECTOR(int32_t, 2))(0x3E08C7D7L)), 0x6F190879L)).lo)).s4102456670521112))).s4;
                l_1393[4] |= ((safe_sub_func_uint64_t_u_u(p_1537->g_164.f2, ((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_1380.xyyxxyyyyxyxxyxx)).s6d)).yyyxxxxyxyxyyyyy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 8))((l_1364 |= (***p_1537->g_1091)), ((VECTOR(int16_t, 2))((-1L), (-1L))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_1381.s66156155)).s77)), (***p_1537->g_1091), 7L, (-1L))), (int16_t)(~(((VECTOR(uint64_t, 2))(l_1382.sa0)).odd >= ((void*)0 == l_1383)))))))).s6005055256617127))).s49)).yxyyyxyy)).s50, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_1384.xx)).yxxyxyyx)).lo)).even))), ((VECTOR(uint16_t, 16))(l_1385.xyyyyxxxyxxyyyyy)).s66))).xxyxxxyx)).s3, (-1L))), 7)), 7)) <= (safe_mod_func_uint16_t_u_u(p_7, (safe_sub_func_uint64_t_u_u(0xD7514B679F025040L, FAKE_DIVERGE(p_1537->local_2_offset, get_local_id(2), 10)))))) > (!((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(0x903DL, 1UL)).yyxyxxxy, ((VECTOR(uint16_t, 2))(1UL, 0xB536L)).xxxxxxyx))).s42, ((VECTOR(uint16_t, 8))(l_1390.xxyyyxxy)).s11))))).xyxxxyyyyyyxyxxy)).even)).s6)) == (safe_add_func_int16_t_s_s(((+(p_1537->g_513.w = p_1537->g_494.f7)) != p_8), p_8))))) ^ l_1362[1]);
                (*l_1262) = 7L;
                (*l_1262) &= (((l_1394 = l_1394) == &p_1537->g_366[1]) , 9L);
            }
            (*p_1537->g_278) = func_234(l_1397, p_8, ((&p_1537->g_246 == (((((***p_1537->g_409) |= 0x1100L) == (p_1537->g_416[1][4].f0 != (((*l_1399) = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_1537->g_1398.s21128e9a)).s71)).yxxxyxyx)).s1) & (safe_lshift_func_int16_t_s_u(l_1380.x, (p_5 <= (((l_1402[7][0][3] , (((*l_1262) = ((void*)0 == l_1403)) >= p_1537->g_1276.x)) == 1UL) != 0x768CD6C8L))))))) != 0x40F867A160D7A1B6L) , &p_1537->g_182)) != 0L), p_1537->g_1000[3].f1, l_1404, p_1537);
            atomic_sub(&p_1537->l_atomic_reduction[0], ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(l_1405.sb9)), 0x0D86C24CL)).lo, ((VECTOR(int32_t, 8))(l_1406.s27450505)).s04))))), 0x6194B11BL, 3L)).odd, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(0x2125A018L, 0L)).yyxyyyxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1407.s5353453263002273)).odd))))), ((VECTOR(int32_t, 2))(l_1408.sb4)).xxxyxyyy, ((VECTOR(int32_t, 4))(l_1409.xyyy)).xywzzzyz))).s16))).yyxyxyxxyyxyyyxy)).sc19d)), 0x5B98CA52L, 0x2212BBACL, ((VECTOR(int32_t, 4))(0x07BBFAF5L, (-1L), 0x2DDC236EL, 9L)), (safe_div_func_int8_t_s_s((!((~((&l_1403 == (((*l_1262) , (((((p_1537->g_1412[0] , &l_1139) == (void*)0) && p_7) | (l_1407.s7 = (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0L, 0x05ED0EC25430D499L)))), 0x012EEEB71F1CC94EL, ((VECTOR(int64_t, 4))(p_1537->g_1413.ywxx)), 1L)).s2 < (((*l_1416) = ((*l_1415) = l_1414)) == (l_1419 = l_1417[4][2]))))) , 0x6AB837BEBB52F1E3L)) , l_1422)) != 1L)) | 3UL)), 1UL)), ((VECTOR(int32_t, 2))(0x188C06D5L)), ((VECTOR(int32_t, 2))(0x316FDCBEL)), (-1L))).s2 + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1537->v_collective += p_1537->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        for (p_1537->g_248.f7 = (-14); (p_1537->g_248.f7 < 44); p_1537->g_248.f7 = safe_add_func_uint32_t_u_u(p_1537->g_248.f7, 8))
        { /* block id: 717 */
            int32_t l_1431 = 0L;
            int32_t l_1434 = 0x53C783B9L;
            uint16_t l_1435[8];
            uint8_t l_1438 = 0xC2L;
            int i, j;
            for (i = 0; i < 8; i++)
                l_1435[i] = 5UL;
            for (p_1537->g_1209.f3 = 0; (p_1537->g_1209.f3 < (-23)); --p_1537->g_1209.f3)
            { /* block id: 720 */
                l_1427 = (0x414F63BA2BAD4633L && p_1537->g_1276.x);
            }
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1537->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 12)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(p_1537->g_1428.s03fb6b48)).s4, 10))][(safe_mod_func_uint32_t_u_u(p_1537->tid, 12))]));
            for (p_1537->g_327.f5 = 0; (p_1537->g_327.f5 < 57); p_1537->g_327.f5 = safe_add_func_int8_t_s_s(p_1537->g_327.f5, 4))
            { /* block id: 728 */
                int32_t *l_1432 = (void*)0;
                int32_t *l_1433[8][10][3] = {{{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183}},{{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183}},{{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183}},{{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183}},{{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183}},{{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183}},{{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183}},{{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183},{&l_1431,&l_1431,&p_1537->g_183}}};
                int i, j, k;
                if (p_6)
                    break;
                --l_1435[7];
                if (l_1438)
                    continue;
                return p_7;
            }
            if ((atomic_inc(&p_1537->l_atomic_input[16]) == 4))
            { /* block id: 735 */
                int8_t l_1439 = 0L;
                VECTOR(uint64_t, 4) l_1440 = (VECTOR(uint64_t, 4))(0xB22472FD6E6B4AE6L, (VECTOR(uint64_t, 2))(0xB22472FD6E6B4AE6L, 0UL), 0UL);
                VECTOR(uint64_t, 2) l_1441 = (VECTOR(uint64_t, 2))(0x02A91795E62A2225L, 7UL);
                VECTOR(uint64_t, 4) l_1442 = (VECTOR(uint64_t, 4))(0x5CC3115EB7FAEC13L, (VECTOR(uint64_t, 2))(0x5CC3115EB7FAEC13L, 1UL), 1UL);
                VECTOR(uint64_t, 16) l_1443 = (VECTOR(uint64_t, 16))(0x0614E98102CA4502L, (VECTOR(uint64_t, 4))(0x0614E98102CA4502L, (VECTOR(uint64_t, 2))(0x0614E98102CA4502L, 5UL), 5UL), 5UL, 0x0614E98102CA4502L, 5UL, (VECTOR(uint64_t, 2))(0x0614E98102CA4502L, 5UL), (VECTOR(uint64_t, 2))(0x0614E98102CA4502L, 5UL), 0x0614E98102CA4502L, 5UL, 0x0614E98102CA4502L, 5UL);
                VECTOR(uint64_t, 16) l_1444 = (VECTOR(uint64_t, 16))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 0xDE4C5E55E9F95A1AL), 0xDE4C5E55E9F95A1AL), 0xDE4C5E55E9F95A1AL, 3UL, 0xDE4C5E55E9F95A1AL, (VECTOR(uint64_t, 2))(3UL, 0xDE4C5E55E9F95A1AL), (VECTOR(uint64_t, 2))(3UL, 0xDE4C5E55E9F95A1AL), 3UL, 0xDE4C5E55E9F95A1AL, 3UL, 0xDE4C5E55E9F95A1AL);
                uint8_t l_1445 = 0x4BL;
                uint64_t l_1504 = 0x56FF827B160A0CB4L;
                int64_t l_1505[4];
                VECTOR(uint32_t, 2) l_1506 = (VECTOR(uint32_t, 2))(0xE5945730L, 0x6DE95BE1L);
                VECTOR(uint32_t, 16) l_1507 = (VECTOR(uint32_t, 16))(0x2ED36AB8L, (VECTOR(uint32_t, 4))(0x2ED36AB8L, (VECTOR(uint32_t, 2))(0x2ED36AB8L, 0x6ECA9622L), 0x6ECA9622L), 0x6ECA9622L, 0x2ED36AB8L, 0x6ECA9622L, (VECTOR(uint32_t, 2))(0x2ED36AB8L, 0x6ECA9622L), (VECTOR(uint32_t, 2))(0x2ED36AB8L, 0x6ECA9622L), 0x2ED36AB8L, 0x6ECA9622L, 0x2ED36AB8L, 0x6ECA9622L);
                int32_t l_1508 = 0x1195679EL;
                VECTOR(uint32_t, 16) l_1509 = (VECTOR(uint32_t, 16))(0xE0D0CDC5L, (VECTOR(uint32_t, 4))(0xE0D0CDC5L, (VECTOR(uint32_t, 2))(0xE0D0CDC5L, 4294967293UL), 4294967293UL), 4294967293UL, 0xE0D0CDC5L, 4294967293UL, (VECTOR(uint32_t, 2))(0xE0D0CDC5L, 4294967293UL), (VECTOR(uint32_t, 2))(0xE0D0CDC5L, 4294967293UL), 0xE0D0CDC5L, 4294967293UL, 0xE0D0CDC5L, 4294967293UL);
                uint8_t l_1510 = 255UL;
                VECTOR(uint32_t, 8) l_1511 = (VECTOR(uint32_t, 8))(0x6E9D545EL, (VECTOR(uint32_t, 4))(0x6E9D545EL, (VECTOR(uint32_t, 2))(0x6E9D545EL, 0x4765A63DL), 0x4765A63DL), 0x4765A63DL, 0x6E9D545EL, 0x4765A63DL);
                uint8_t l_1512 = 0x72L;
                uint32_t l_1513 = 0xD1023527L;
                uint16_t l_1514[7] = {0xBDDDL,0xBDDDL,0xBDDDL,0xBDDDL,0xBDDDL,0xBDDDL,0xBDDDL};
                VECTOR(uint32_t, 4) l_1515 = (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0x70984EB8L), 0x70984EB8L);
                VECTOR(uint32_t, 2) l_1516 = (VECTOR(uint32_t, 2))(0xC73B03DEL, 0xD25C758DL);
                VECTOR(uint32_t, 2) l_1517 = (VECTOR(uint32_t, 2))(0x1144A0C6L, 0xE7A25B08L);
                VECTOR(uint32_t, 4) l_1518 = (VECTOR(uint32_t, 4))(0xAB7C0666L, (VECTOR(uint32_t, 2))(0xAB7C0666L, 0x076DE0CBL), 0x076DE0CBL);
                VECTOR(uint32_t, 4) l_1519 = (VECTOR(uint32_t, 4))(0xBE70C722L, (VECTOR(uint32_t, 2))(0xBE70C722L, 0xEC6137E2L), 0xEC6137E2L);
                VECTOR(uint32_t, 2) l_1520 = (VECTOR(uint32_t, 2))(0xF6732055L, 0x0B0F461FL);
                VECTOR(uint32_t, 4) l_1521 = (VECTOR(uint32_t, 4))(0xDEF32426L, (VECTOR(uint32_t, 2))(0xDEF32426L, 0x1F6A7D7CL), 0x1F6A7D7CL);
                VECTOR(uint32_t, 2) l_1522 = (VECTOR(uint32_t, 2))(0x16F9A3FFL, 4294967286UL);
                VECTOR(uint32_t, 4) l_1523 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL);
                VECTOR(uint32_t, 4) l_1524 = (VECTOR(uint32_t, 4))(0xC2E3693FL, (VECTOR(uint32_t, 2))(0xC2E3693FL, 0UL), 0UL);
                VECTOR(uint32_t, 8) l_1525 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x3F69C729L), 0x3F69C729L), 0x3F69C729L, 4294967295UL, 0x3F69C729L);
                VECTOR(uint32_t, 4) l_1526 = (VECTOR(uint32_t, 4))(0xE1D8CFA3L, (VECTOR(uint32_t, 2))(0xE1D8CFA3L, 0x62C5A1BEL), 0x62C5A1BEL);
                VECTOR(uint32_t, 16) l_1527 = (VECTOR(uint32_t, 16))(0x10C31FBBL, (VECTOR(uint32_t, 4))(0x10C31FBBL, (VECTOR(uint32_t, 2))(0x10C31FBBL, 4UL), 4UL), 4UL, 0x10C31FBBL, 4UL, (VECTOR(uint32_t, 2))(0x10C31FBBL, 4UL), (VECTOR(uint32_t, 2))(0x10C31FBBL, 4UL), 0x10C31FBBL, 4UL, 0x10C31FBBL, 4UL);
                VECTOR(uint32_t, 4) l_1528 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xDC9F4CF1L), 0xDC9F4CF1L);
                VECTOR(uint32_t, 8) l_1529 = (VECTOR(uint32_t, 8))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0x148B7BFFL), 0x148B7BFFL), 0x148B7BFFL, 4294967294UL, 0x148B7BFFL);
                uint16_t l_1530 = 0x89F2L;
                uint32_t l_1531 = 4294967292UL;
                VECTOR(uint32_t, 4) l_1532 = (VECTOR(uint32_t, 4))(0x1E6C4C98L, (VECTOR(uint32_t, 2))(0x1E6C4C98L, 0x012F6D59L), 0x012F6D59L);
                int16_t l_1533 = 0L;
                struct S0 l_1534 = {0xED387994L,-1L,-1L,0x71905649L,0x232CA5D4L,1UL,-8L,0xD5L,0x08C22FCAL};/* VOLATILE GLOBAL l_1534 */
                int i;
                for (i = 0; i < 4; i++)
                    l_1505[i] = 0L;
                if ((((VECTOR(uint64_t, 16))(l_1439, FAKE_DIVERGE(p_1537->local_0_offset, get_local_id(0), 10), 0x3D5B30E0525FE381L, ((VECTOR(uint64_t, 2))(l_1440.xx)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_1441.yxyyxyxyyyyyyxxx)).seb)).hi, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 5UL)), 7UL, 0UL)), GROUP_DIVERGE(1, 1), 18446744073709551615UL, ((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 16))(l_1442.xxxyywxyzxwxxzxy)).s6f, ((VECTOR(uint64_t, 16))(FAKE_DIVERGE(p_1537->local_2_offset, get_local_id(2), 10), 0x85FDA2AE04BA2C30L, 0x3F1F796B26B575F6L, ((VECTOR(uint64_t, 8))(l_1443.s1e1b7f84)), ((VECTOR(uint64_t, 4))(l_1444.s6044)), 0UL)).s11))), 0xC2CA7B640E7361B8L, 0x0D979836EC534FBFL)).s5 , (l_1445 = (-6L))))
                { /* block id: 737 */
                    uint32_t l_1446 = 4294967287UL;
                    int8_t l_1447 = 0x79L;
                    int32_t l_1448 = 0x4D4C4B9DL;
                    VECTOR(int32_t, 16) l_1449 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0L), 0L), 0L, 5L, 0L, (VECTOR(int32_t, 2))(5L, 0L), (VECTOR(int32_t, 2))(5L, 0L), 5L, 0L, 5L, 0L);
                    VECTOR(int32_t, 4) l_1450 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-10L)), (-10L));
                    VECTOR(int32_t, 2) l_1451 = (VECTOR(int32_t, 2))((-1L), 2L);
                    VECTOR(uint16_t, 4) l_1452 = (VECTOR(uint16_t, 4))(0x91F9L, (VECTOR(uint16_t, 2))(0x91F9L, 9UL), 9UL);
                    VECTOR(uint16_t, 2) l_1453 = (VECTOR(uint16_t, 2))(0UL, 65529UL);
                    int32_t l_1454 = 8L;
                    int8_t l_1455 = 4L;
                    uint16_t l_1456 = 8UL;
                    int32_t l_1457 = 0x0304B2F3L;
                    VECTOR(uint16_t, 2) l_1458 = (VECTOR(uint16_t, 2))(65535UL, 0xB47CL);
                    VECTOR(uint16_t, 2) l_1459 = (VECTOR(uint16_t, 2))(0UL, 65535UL);
                    VECTOR(uint16_t, 2) l_1460 = (VECTOR(uint16_t, 2))(0UL, 4UL);
                    int32_t l_1461 = 0x69BD9E3CL;
                    VECTOR(uint16_t, 8) l_1462 = (VECTOR(uint16_t, 8))(0x7B94L, (VECTOR(uint16_t, 4))(0x7B94L, (VECTOR(uint16_t, 2))(0x7B94L, 0x1BD8L), 0x1BD8L), 0x1BD8L, 0x7B94L, 0x1BD8L);
                    VECTOR(int8_t, 2) l_1463 = (VECTOR(int8_t, 2))(0x13L, 0x3DL);
                    VECTOR(int8_t, 16) l_1464 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-9L)), (-9L)), (-9L), (-1L), (-9L), (VECTOR(int8_t, 2))((-1L), (-9L)), (VECTOR(int8_t, 2))((-1L), (-9L)), (-1L), (-9L), (-1L), (-9L));
                    struct S0 l_1465 = {0xC0C5E492L,0x5A21D70E56378357L,0L,0L,8L,0xC85DFAB6B8CAE443L,0x7F28AEA2L,0UL,0x57BECABAL};/* VOLATILE GLOBAL l_1465 */
                    VECTOR(uint32_t, 8) l_1466 = (VECTOR(uint32_t, 8))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 4294967295UL), 4294967295UL), 4294967295UL, 5UL, 4294967295UL);
                    int16_t l_1467 = 0x1885L;
                    VECTOR(int8_t, 4) l_1468 = (VECTOR(int8_t, 4))(0x47L, (VECTOR(int8_t, 2))(0x47L, 0x32L), 0x32L);
                    VECTOR(int8_t, 8) l_1469 = (VECTOR(int8_t, 8))(0x50L, (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, 0x53L), 0x53L), 0x53L, 0x50L, 0x53L);
                    VECTOR(int8_t, 4) l_1470 = (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 5L), 5L);
                    VECTOR(int8_t, 16) l_1471 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x70L), 0x70L), 0x70L, 1L, 0x70L, (VECTOR(int8_t, 2))(1L, 0x70L), (VECTOR(int8_t, 2))(1L, 0x70L), 1L, 0x70L, 1L, 0x70L);
                    VECTOR(int8_t, 2) l_1472 = (VECTOR(int8_t, 2))(0x59L, 0x25L);
                    VECTOR(int8_t, 2) l_1473 = (VECTOR(int8_t, 2))((-4L), 9L);
                    VECTOR(int8_t, 2) l_1474 = (VECTOR(int8_t, 2))(0x42L, 0x16L);
                    VECTOR(uint32_t, 16) l_1475 = (VECTOR(uint32_t, 16))(0xAD02D9B9L, (VECTOR(uint32_t, 4))(0xAD02D9B9L, (VECTOR(uint32_t, 2))(0xAD02D9B9L, 0x569550D7L), 0x569550D7L), 0x569550D7L, 0xAD02D9B9L, 0x569550D7L, (VECTOR(uint32_t, 2))(0xAD02D9B9L, 0x569550D7L), (VECTOR(uint32_t, 2))(0xAD02D9B9L, 0x569550D7L), 0xAD02D9B9L, 0x569550D7L, 0xAD02D9B9L, 0x569550D7L);
                    VECTOR(int8_t, 4) l_1476 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L));
                    VECTOR(int8_t, 2) l_1477 = (VECTOR(int8_t, 2))((-1L), 0x05L);
                    uint32_t l_1478 = 0x559B0D00L;
                    int64_t l_1479 = 1L;
                    uint64_t l_1480 = 4UL;
                    uint8_t l_1481 = 0xE9L;
                    VECTOR(uint8_t, 16) l_1482 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL, (VECTOR(uint8_t, 2))(255UL, 1UL), (VECTOR(uint8_t, 2))(255UL, 1UL), 255UL, 1UL, 255UL, 1UL);
                    int8_t l_1483 = 0x02L;
                    uint32_t l_1484 = 0x328E6ED0L;
                    int32_t l_1485 = 5L;
                    uint32_t l_1486 = 0UL;
                    int i;
                    l_1447 = l_1446;
                    l_1448 &= 0x734C2810L;
                    l_1485 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_1449.s32ab0a73d1559706)).s94, ((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(l_1450.zxwxxzxzywyywzxz)).s8a09, ((VECTOR(int32_t, 8))(1L, (((VECTOR(int32_t, 16))(l_1451.xxxyyyyyyxxxxyxy)).s7 , (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 4))(l_1452.xzzx)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 2))(l_1453.xy)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(0UL, (l_1454 , l_1455), ((VECTOR(uint16_t, 8))(65532UL, l_1456, 0UL, 1UL, l_1457, 0xB16EL, 1UL, 1UL)), 0x880FL, 0xD982L, ((VECTOR(uint16_t, 2))(l_1458.xy)), 2UL, 0xB9FCL)).s74ac)).even))), 0x8A7FL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_1459.xyxxyxyy)).s62)), (l_1461 = ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_1460.xyyx)).wyxyxzywyyzwyyxz)).sf), 0x4613L, 7UL)).lo, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_1462.s67)).xyxxyxxy)).odd)).zwzxywxxzyywwxzw)).s75ea))).lo)).lo , (((((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 8))(l_1463.xyxyyxxy)).s1102144773017467, ((VECTOR(int8_t, 16))((-1L), ((VECTOR(int8_t, 4))(l_1464.sbfb7)), (l_1465 , (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_1466.s0366)).hi)).even , l_1467)), 0x5AL, ((VECTOR(int8_t, 2))(l_1468.yw)), ((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(l_1469.s47567046)).hi, ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(l_1470.wwxw)), ((VECTOR(int8_t, 2))(l_1471.s91)).xyxx)))))), 0x43L, 0x5AL, 0x6CL))))).even, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(l_1472.yxyy)), ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(l_1473.yy)).yxxy)))))).zzwywzzw)).s10, ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(1L, 6L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))(l_1474.xyyyyxxx)), ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))((-1L), (-1L), ((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(GROUP_DIVERGE(1, 1), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_1475.s242391d9)).s53)), 0x9A8316C5L)).odd)).lo , FAKE_DIVERGE(p_1537->global_1_offset, get_global_id(1), 10)) , ((VECTOR(int8_t, 4))(0x53L, ((VECTOR(int8_t, 2))(0x18L, 1L)), 0x50L)).z), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(0x75L, ((VECTOR(int8_t, 2))(l_1476.yx)), 8L)).yxyzxwzyyywzywyz, ((VECTOR(int8_t, 16))(0x79L, ((VECTOR(int8_t, 4))(l_1477.yyxx)), 0x6BL, (-1L), l_1478, (l_1439 = 0x40L), l_1479, l_1480, 0L, 0x6AL, 0x00L, 0L, 0x40L))))).s36)), (-3L), 0x69L, 1L)).hi)).odd, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 2))((-10L)))))).yyyyxyyy))).lo)).zyxyzxwx)), ((VECTOR(int8_t, 4))((-4L))), 0x6EL, 1L)).s33, ((VECTOR(int8_t, 2))(0x17L)))))))).yyxyxyxy))).s4 , l_1481) , 1UL) , l_1482.s0))), 0x4615B450L, (-9L), l_1483, (-6L), (-7L), 0x0F4D3DC4L)).odd, ((VECTOR(int32_t, 4))((-4L)))))), 0x0894A47BL, 0L, l_1484, ((VECTOR(int32_t, 8))(0x619FF00AL)))).sd6))), (-7L), 0x1CB988B2L)).y;
                    ++l_1486;
                }
                else
                { /* block id: 744 */
                    int16_t l_1489[5][7][5] = {{{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)}},{{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)}},{{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)}},{{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)}},{{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)},{(-1L),6L,6L,(-1L),(-7L)}}};
                    uint32_t l_1490 = 8UL;
                    uint32_t l_1491 = 4294967295UL;
                    int32_t l_1492 = (-1L);
                    int64_t l_1493 = 7L;
                    uint8_t l_1494[6];
                    int64_t l_1500 = 0x13DE16B27BC94491L;
                    int32_t l_1501[5][3];
                    struct S0 l_1502 = {4294967286UL,0x6F5A4F55BB66B886L,3L,0L,6L,1UL,0x1B27E558L,250UL,0x4C76A0AAL};/* VOLATILE GLOBAL l_1502 */
                    struct S0 l_1503 = {0xD8846CDCL,0x10FFA5A71215338CL,0x71328352845873F8L,0x4A33990EL,0x194F4FF2L,0xB2C337AF58FB2951L,1L,1UL,4294967287UL};/* VOLATILE GLOBAL l_1503 */
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1494[i] = 246UL;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1501[i][j] = (-1L);
                    }
                    l_1490 ^= l_1489[3][6][0];
                    l_1494[4] = ((l_1491 , l_1492) , l_1493);
                    for (l_1494[4] = 0; (l_1494[4] <= 50); l_1494[4] = safe_add_func_int32_t_s_s(l_1494[4], 7))
                    { /* block id: 749 */
                        uint16_t l_1497 = 0xA3D3L;
                        l_1497++;
                    }
                    l_1503 = (((l_1500 = 1UL) , l_1501[3][0]) , l_1502);
                }
                l_1505[3] = l_1504;
                l_1534 = (((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 2))(l_1506.xx)).yxxyyxxyyyyxxyyy, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x311E108EL, 7UL)).xxxyyyyyyyxyyyyy))))).s43, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 16))(l_1507.s1b99dbc235e1c102)).even, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(9UL, 2UL)), l_1508, (((VECTOR(uint32_t, 2))(l_1509.scb)).even , l_1510), 1UL, 0x4ED5D632L, 1UL, 4294967295UL))))).even, ((VECTOR(uint32_t, 8))(l_1511.s22626114)).odd, ((VECTOR(uint32_t, 16))((l_1512 = 3UL), 0xBDF09C30L, ((l_1514[1] &= l_1513) , ((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 2))(5UL, 0xEF04D7E9L)).yyyyxxyyyxxyxxyx, ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 8))(l_1515.zyxxyxyz)).hi, ((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_1516.yyxyxxxx)).odd)).odd, ((VECTOR(uint32_t, 2))(l_1517.xx))))).xxxx)).zwwxxwyzwzzywzzz, ((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(4294967295UL, ((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(l_1518.yz)), ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(0xA1F9C58CL, ((VECTOR(uint32_t, 2))(l_1519.zw)), 0xC8FA975CL)).yyyzyzyzwxwxywxz, ((VECTOR(uint32_t, 4))(l_1520.yyyx)).zxwxzyyzzyyxyyxz, ((VECTOR(uint32_t, 2))(l_1521.wx)).xyyxyxyxxxxyxyxx))), ((VECTOR(uint32_t, 4))(l_1522.yyxx)).xxyzwyzwywzwzxzy))).sda))), ((VECTOR(uint32_t, 2))(1UL, 4294967295UL)).lo, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_1523.xwxx)), 0UL, 1UL, 0UL, 0x3B4AF7B2L)).s5231515670420515)).s49)), 0xDC389CDBL, 0x63715CF3L)).s5452660042245501)).sb085, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 16))(l_1524.zzzxwxxwzwzzwyyw)).s2104, ((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(4294967295UL, 1UL, 0xE92F1628L, 4294967295UL)).wxwzyxxz, ((VECTOR(uint32_t, 2))(0x427AEE8BL, 0xCB45F766L)).xxxyyxxy))).even, ((VECTOR(uint32_t, 2))(l_1525.s61)).xyyx))).zzwxywzzxwxxwyxy)).odd, ((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 16))(l_1526.xxxyzwwzywyzyyyw)), ((VECTOR(uint32_t, 8))(l_1527.s76f489b9)).s1204427774437634))).odd))).s4157377061331521)).odd)).odd)), ((VECTOR(uint32_t, 2))(4UL, 4294967295UL)).xxxy))).wwzwwzwzzxwxyyyx, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_1528.xz)), 1UL, 0UL)).yzzwxyyyxzyyyyyy))).s477a))).ywzywwzyxywxxzxx))).s3), ((VECTOR(uint32_t, 2))(l_1529.s57)), 0UL, 0xCE55E592L, l_1530, 0xED696B51L, l_1531, 0x14AF4B1BL, ((VECTOR(uint32_t, 4))(l_1532.xwzw)), 0x9EBC214BL)).sdecd))).zwyzywzzxzyyywww)).s79, ((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 16))(l_1533, 4294967295UL, 0x7F9825FCL, ((VECTOR(uint32_t, 2))(7UL)), 4294967287UL, 0UL, 1UL, 1UL, GROUP_DIVERGE(2, 1), 0xA2D33D5DL, 6UL, 0UL, ((VECTOR(uint32_t, 2))(1UL)), 8UL)).s6a, ((VECTOR(uint32_t, 2))(4294967295UL)), ((VECTOR(uint32_t, 2))(0x238C7AB3L))))).yyxx, ((VECTOR(uint32_t, 4))(4294967292UL)), ((VECTOR(uint32_t, 4))(0UL))))).yyywzxzz, ((VECTOR(uint32_t, 8))(0xD3482C16L))))).s7101247751206775)).sbb, ((VECTOR(uint32_t, 2))(5UL)))))))).lo , l_1534);
                unsigned int result = 0;
                result += l_1439;
                result += l_1440.w;
                result += l_1440.z;
                result += l_1440.y;
                result += l_1440.x;
                result += l_1441.y;
                result += l_1441.x;
                result += l_1442.w;
                result += l_1442.z;
                result += l_1442.y;
                result += l_1442.x;
                result += l_1443.sf;
                result += l_1443.se;
                result += l_1443.sd;
                result += l_1443.sc;
                result += l_1443.sb;
                result += l_1443.sa;
                result += l_1443.s9;
                result += l_1443.s8;
                result += l_1443.s7;
                result += l_1443.s6;
                result += l_1443.s5;
                result += l_1443.s4;
                result += l_1443.s3;
                result += l_1443.s2;
                result += l_1443.s1;
                result += l_1443.s0;
                result += l_1444.sf;
                result += l_1444.se;
                result += l_1444.sd;
                result += l_1444.sc;
                result += l_1444.sb;
                result += l_1444.sa;
                result += l_1444.s9;
                result += l_1444.s8;
                result += l_1444.s7;
                result += l_1444.s6;
                result += l_1444.s5;
                result += l_1444.s4;
                result += l_1444.s3;
                result += l_1444.s2;
                result += l_1444.s1;
                result += l_1444.s0;
                result += l_1445;
                result += l_1504;
                int l_1505_i0;
                for (l_1505_i0 = 0; l_1505_i0 < 4; l_1505_i0++) {
                    result += l_1505[l_1505_i0];
                }
                result += l_1506.y;
                result += l_1506.x;
                result += l_1507.sf;
                result += l_1507.se;
                result += l_1507.sd;
                result += l_1507.sc;
                result += l_1507.sb;
                result += l_1507.sa;
                result += l_1507.s9;
                result += l_1507.s8;
                result += l_1507.s7;
                result += l_1507.s6;
                result += l_1507.s5;
                result += l_1507.s4;
                result += l_1507.s3;
                result += l_1507.s2;
                result += l_1507.s1;
                result += l_1507.s0;
                result += l_1508;
                result += l_1509.sf;
                result += l_1509.se;
                result += l_1509.sd;
                result += l_1509.sc;
                result += l_1509.sb;
                result += l_1509.sa;
                result += l_1509.s9;
                result += l_1509.s8;
                result += l_1509.s7;
                result += l_1509.s6;
                result += l_1509.s5;
                result += l_1509.s4;
                result += l_1509.s3;
                result += l_1509.s2;
                result += l_1509.s1;
                result += l_1509.s0;
                result += l_1510;
                result += l_1511.s7;
                result += l_1511.s6;
                result += l_1511.s5;
                result += l_1511.s4;
                result += l_1511.s3;
                result += l_1511.s2;
                result += l_1511.s1;
                result += l_1511.s0;
                result += l_1512;
                result += l_1513;
                int l_1514_i0;
                for (l_1514_i0 = 0; l_1514_i0 < 7; l_1514_i0++) {
                    result += l_1514[l_1514_i0];
                }
                result += l_1515.w;
                result += l_1515.z;
                result += l_1515.y;
                result += l_1515.x;
                result += l_1516.y;
                result += l_1516.x;
                result += l_1517.y;
                result += l_1517.x;
                result += l_1518.w;
                result += l_1518.z;
                result += l_1518.y;
                result += l_1518.x;
                result += l_1519.w;
                result += l_1519.z;
                result += l_1519.y;
                result += l_1519.x;
                result += l_1520.y;
                result += l_1520.x;
                result += l_1521.w;
                result += l_1521.z;
                result += l_1521.y;
                result += l_1521.x;
                result += l_1522.y;
                result += l_1522.x;
                result += l_1523.w;
                result += l_1523.z;
                result += l_1523.y;
                result += l_1523.x;
                result += l_1524.w;
                result += l_1524.z;
                result += l_1524.y;
                result += l_1524.x;
                result += l_1525.s7;
                result += l_1525.s6;
                result += l_1525.s5;
                result += l_1525.s4;
                result += l_1525.s3;
                result += l_1525.s2;
                result += l_1525.s1;
                result += l_1525.s0;
                result += l_1526.w;
                result += l_1526.z;
                result += l_1526.y;
                result += l_1526.x;
                result += l_1527.sf;
                result += l_1527.se;
                result += l_1527.sd;
                result += l_1527.sc;
                result += l_1527.sb;
                result += l_1527.sa;
                result += l_1527.s9;
                result += l_1527.s8;
                result += l_1527.s7;
                result += l_1527.s6;
                result += l_1527.s5;
                result += l_1527.s4;
                result += l_1527.s3;
                result += l_1527.s2;
                result += l_1527.s1;
                result += l_1527.s0;
                result += l_1528.w;
                result += l_1528.z;
                result += l_1528.y;
                result += l_1528.x;
                result += l_1529.s7;
                result += l_1529.s6;
                result += l_1529.s5;
                result += l_1529.s4;
                result += l_1529.s3;
                result += l_1529.s2;
                result += l_1529.s1;
                result += l_1529.s0;
                result += l_1530;
                result += l_1531;
                result += l_1532.w;
                result += l_1532.z;
                result += l_1532.y;
                result += l_1532.x;
                result += l_1533;
                result += l_1534.f0;
                result += l_1534.f1;
                result += l_1534.f2;
                result += l_1534.f3;
                result += l_1534.f4;
                result += l_1534.f5;
                result += l_1534.f6;
                result += l_1534.f7;
                result += l_1534.f8;
                atomic_add(&p_1537->l_special_values[16], result);
            }
            else
            { /* block id: 759 */
                (1 + 1);
            }
        }
    }
    return l_1289[0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_10(uint64_t  p_11, struct S1 * p_1537)
{ /* block id: 5 */
    int32_t l_12[2];
    int i;
    for (i = 0; i < 2; i++)
        l_12[i] = 0x36B0E1B1L;
    return l_12[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1537->g_284 p_1537->g_183
 * writes:
 */
int8_t * func_18(uint32_t  p_19, int64_t  p_20, uint32_t  p_21, int8_t * p_22, struct S1 * p_1537)
{ /* block id: 566 */
    VECTOR(int32_t, 2) l_1110 = (VECTOR(int32_t, 2))(0x140E456BL, (-5L));
    int32_t *l_1111[7];
    uint8_t l_1112[7][7][5] = {{{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L}},{{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L}},{{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L}},{{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L}},{{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L}},{{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L}},{{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L},{0x8BL,0UL,9UL,0xB5L,0x33L}}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1111[i] = (void*)0;
    l_1110.x = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1110.yxxxxxyx)).s3661504137267502)).s3e)).odd;
    l_1112[6][3][3] ^= (*p_1537->g_284);
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_1537->g_1042 p_1537->g_265 p_1537->g_272 p_1537->g_33 p_1537->g_279.f0 permutations p_1537->g_1000.f3 p_1537->g_34 p_1537->g_494.f7 p_1537->g_35 p_1537->g_183 p_1537->g_494.f0 p_1537->g_164.f1 p_1537->g_164.f3
 * writes: p_1537->g_183 p_1537->g_326 p_1537->g_33 permutations p_1537->g_1091 p_1537->g_494.f0
 */
uint64_t  func_23(int8_t * p_24, int16_t  p_25, struct S1 * p_1537)
{ /* block id: 550 */
    uint32_t l_1041 = 0x94549C25L;
    VECTOR(int64_t, 4) l_1047 = (VECTOR(int64_t, 4))(0x6B744997DD7C0BD0L, (VECTOR(int64_t, 2))(0x6B744997DD7C0BD0L, 0x4535A1FA653BCBEAL), 0x4535A1FA653BCBEAL);
    uint64_t l_1052 = 0x50B9BFD9A1F2713AL;
    struct S0 *l_1053[2][2][5] = {{{&p_1537->g_416[1][4],&p_1537->g_359,&p_1537->g_630[0],&p_1537->g_248,&p_1537->g_359},{&p_1537->g_416[1][4],&p_1537->g_359,&p_1537->g_630[0],&p_1537->g_248,&p_1537->g_359}},{{&p_1537->g_416[1][4],&p_1537->g_359,&p_1537->g_630[0],&p_1537->g_248,&p_1537->g_359},{&p_1537->g_416[1][4],&p_1537->g_359,&p_1537->g_630[0],&p_1537->g_248,&p_1537->g_359}}};
    struct S0 **l_1054 = &p_1537->g_326[2];
    int64_t ***l_1055 = &p_1537->g_407;
    int32_t l_1056[6];
    int32_t *l_1057 = &l_1056[0];
    int32_t *l_1058 = &l_1056[0];
    int32_t *l_1059 = &p_1537->g_183;
    int32_t *l_1060 = &l_1056[4];
    int32_t *l_1061[9] = {&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183};
    uint32_t l_1062 = 0x02A0802EL;
    VECTOR(uint32_t, 8) l_1071 = (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0x397FCD42L), 0x397FCD42L), 0x397FCD42L, 4294967288UL, 0x397FCD42L);
    uint32_t *l_1072 = (void*)0;
    uint32_t *l_1073 = (void*)0;
    uint32_t *l_1074 = &permutations[(safe_mod_func_uint32_t_u_u(((l_1041 && (((safe_rshift_func_uint8_t_u_u((((((VECTOR(int64_t, 4))(l_1047.yyyz)).x & (safe_lshift_func_uint16_t_u_u((p_1537->g_265 , (safe_sub_func_uint16_t_u_u(65532UL, (l_1052 > (((*l_1054) = l_1053[1][0][3]) != (void*)0))))), (((*p_1537->g_272) |= 0L) ^ l_1047.y)))) & (l_1055 != &p_1537->g_407)) >= p_1537->g_279.f0), 5)) <= GROUP_DIVERGE(0, 1)) == l_1041)) || (*p_1537->g_272)), 10))][(safe_mod_func_uint32_t_u_u(p_1537->tid, 12))];
    int16_t ****l_1090 = (void*)0;
    int16_t ***l_1092 = &p_1537->g_271;
    uint16_t *l_1093[1][4][1];
    uint32_t *l_1094[3];
    uint8_t l_1105 = 3UL;
    uint16_t l_1106 = 0x5480L;
    uint64_t l_1107 = 0x0C2963597FBA1B27L;
    uint32_t l_1108 = 0UL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1056[i] = 6L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_1093[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 3; i++)
        l_1094[i] = (void*)0;
    (*p_1537->g_1042) = (~l_1041);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1537->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 12)), permutations[(safe_mod_func_uint32_t_u_u(((l_1041 && (((safe_rshift_func_uint8_t_u_u((((((VECTOR(int64_t, 4))(l_1047.yyyz)).x & (safe_lshift_func_uint16_t_u_u((p_1537->g_265 , (safe_sub_func_uint16_t_u_u(65532UL, (l_1052 > (((*l_1054) = l_1053[1][0][3]) != (void*)0))))), (((*p_1537->g_272) |= 0L) ^ l_1047.y)))) & (l_1055 != &p_1537->g_407)) >= p_1537->g_279.f0), 5)) <= GROUP_DIVERGE(0, 1)) == l_1041)) || (*p_1537->g_272)), 10))][(safe_mod_func_uint32_t_u_u(p_1537->tid, 12))]));
    ++l_1062;
    (*l_1058) = (safe_mod_func_uint64_t_u_u((p_25 | (l_1107 |= (((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(l_1071.s4125354704342024)).sf, (++(*l_1074)))), (safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((p_1537->g_1000[3].f3 , (safe_lshift_func_uint8_t_u_s((((safe_unary_minus_func_int16_t_s(p_25)) , ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((*l_1059) ^= (safe_lshift_func_uint8_t_u_s(((p_1537->g_1091 = &p_1537->g_271) == l_1092), (*p_1537->g_34)))), 3)), (((p_1537->g_494.f0++) , (safe_mul_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_s((p_25 , (safe_rshift_func_uint8_t_u_u(p_1537->g_164.f1, 0))), 0)) | (GROUP_DIVERGE(0, 1) || (~(((((((VECTOR(uint8_t, 2))(8UL, 0x15L)).hi < ((safe_div_func_uint32_t_u_u(0x3F15C631L, p_1537->g_164.f3)) != 9UL)) & p_25) <= 0x9DCE93F9BC40F559L) , p_25) != 1L)))) , l_1105) != l_1106), (-1L)))) >= (*l_1060)))) <= (*p_1537->g_34))) && p_25), (*p_1537->g_34)))), 0xB8D7L)), (*p_1537->g_34))))) , FAKE_DIVERGE(p_1537->global_1_offset, get_global_id(1), 10)) | p_25))), p_25));
    return l_1108;
}


/* ------------------------------------------ */
/* 
 * reads : p_1537->g_35 p_1537->g_33 p_1537->g_166.f0 p_1537->g_166.f6 p_1537->g_164.f0 p_1537->g_34 p_1537->g_494.f7 p_1537->g_176 p_1537->g_164.f5 p_1537->g_182 p_1537->g_183 p_1537->g_600.f2 p_1537->g_271 p_1537->g_272 p_1537->g_661 p_1537->g_662 p_1537->g_630.f5 p_1537->g_494.f8 p_1537->g_409 p_1537->g_513 p_1537->g_566.f5 p_1537->g_265 p_1537->g_987 p_1537->g_166.f1 p_1537->g_1000 p_1537->g_1007 p_1537->g_446 p_1537->g_246 p_1537->g_241 p_1537->g_566.f7 p_1537->g_248.f0 p_1537->g_1038 p_1537->g_1040 p_1537->g_166 p_1537->g_366 p_1537->g_416.f5
 * writes: p_1537->g_35 p_1537->g_164.f3 p_1537->g_183 p_1537->g_630.f7 p_1537->g_438 p_1537->g_566.f5 p_1537->g_265 p_1537->g_494.f7 p_1537->g_566.f7
 */
int8_t * func_26(int16_t  p_27, int8_t * p_28, uint64_t  p_29, int32_t  p_30, int8_t * p_31, struct S1 * p_1537)
{ /* block id: 9 */
    struct S0 *l_165 = &p_1537->g_166;
    int32_t l_175 = 0x01F4D0ACL;
    int32_t *l_645 = &p_1537->g_183;
    VECTOR(int8_t, 4) l_656 = (VECTOR(int8_t, 4))(0x61L, (VECTOR(int8_t, 2))(0x61L, 0x4BL), 0x4BL);
    VECTOR(int8_t, 2) l_657 = (VECTOR(int8_t, 2))(0x76L, 5L);
    int32_t *l_663 = &p_1537->g_183;
    int32_t *l_665[1][5][7] = {{{(void*)0,(void*)0,&l_175,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&l_175},{(void*)0,(void*)0,&l_175,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&l_175},{(void*)0,(void*)0,&l_175,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&l_175},{(void*)0,(void*)0,&l_175,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&l_175},{(void*)0,(void*)0,&l_175,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&l_175}}};
    VECTOR(uint8_t, 2) l_672 = (VECTOR(uint8_t, 2))(0x5BL, 0xDCL);
    VECTOR(uint8_t, 16) l_673 = (VECTOR(uint8_t, 16))(0x4EL, (VECTOR(uint8_t, 4))(0x4EL, (VECTOR(uint8_t, 2))(0x4EL, 0x5AL), 0x5AL), 0x5AL, 0x4EL, 0x5AL, (VECTOR(uint8_t, 2))(0x4EL, 0x5AL), (VECTOR(uint8_t, 2))(0x4EL, 0x5AL), 0x4EL, 0x5AL, 0x4EL, 0x5AL);
    VECTOR(int8_t, 2) l_676 = (VECTOR(int8_t, 2))(6L, 0x4CL);
    VECTOR(int8_t, 8) l_680 = (VECTOR(int8_t, 8))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), (-1L)), (-1L)), (-1L), (-2L), (-1L));
    VECTOR(int8_t, 2) l_986 = (VECTOR(int8_t, 2))(0x18L, 0L);
    int i, j, k;
    if ((atomic_inc(&p_1537->l_atomic_input[0]) == 1))
    { /* block id: 11 */
        int32_t l_37 = 0x2BC92CEBL;
        int32_t *l_36[6][5][3] = {{{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37}},{{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37}},{{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37}},{{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37}},{{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37}},{{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37},{&l_37,&l_37,&l_37}}};
        int32_t *l_38 = &l_37;
        VECTOR(int32_t, 2) l_39 = (VECTOR(int32_t, 2))(0L, 0x4B87840EL);
        int i, j, k;
        l_36[3][4][0] = (l_38 = l_36[3][4][0]);
        if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_39.yyyy)))).z)
        { /* block id: 14 */
            uint64_t l_40 = 0xFCE3BADF38E70E9EL;
            int8_t l_41 = 1L;
            uint16_t l_122[3][8] = {{8UL,0UL,1UL,8UL,0UL,8UL,1UL,0UL},{8UL,0UL,1UL,8UL,0UL,8UL,1UL,0UL},{8UL,0UL,1UL,8UL,0UL,8UL,1UL,0UL}};
            uint8_t l_123 = 248UL;
            int8_t l_124 = 0x04L;
            int i, j;
            if (((l_41 &= l_40) , 0x798870B3L))
            { /* block id: 16 */
                int64_t l_42 = 0L;
                int64_t l_43[3];
                uint64_t l_44 = 0x2090F9CF50E4B461L;
                uint32_t l_47 = 0xA42DA4CBL;
                uint64_t l_48 = 1UL;
                struct S0 l_76 = {4294967289UL,-3L,0x1C95261AE0F1B3FFL,0x6EBA2134L,0x5B464587L,18446744073709551615UL,0x0A4B5A34L,1UL,0x144E5585L};/* VOLATILE GLOBAL l_76 */
                struct S0 l_77 = {4294967290UL,0x773854AF0FF7F8D1L,0L,-1L,0x2D646978L,0x4A5BE0B327883477L,1L,0x2CL,0UL};/* VOLATILE GLOBAL l_77 */
                VECTOR(int32_t, 16) l_78 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x74A4090DL), 0x74A4090DL), 0x74A4090DL, 6L, 0x74A4090DL, (VECTOR(int32_t, 2))(6L, 0x74A4090DL), (VECTOR(int32_t, 2))(6L, 0x74A4090DL), 6L, 0x74A4090DL, 6L, 0x74A4090DL);
                int i;
                for (i = 0; i < 3; i++)
                    l_43[i] = 0L;
                --l_44;
                if (((l_47 = 0x67F3E8E0L) , l_48))
                { /* block id: 19 */
                    int32_t l_49 = (-1L);
                    struct S0 l_60 = {4294967295UL,1L,0x3AC0F7833775BA80L,0x3897E00CL,4L,0UL,0L,0x4EL,0x983536F1L};/* VOLATILE GLOBAL l_60 */
                    struct S0 l_61[5] = {{0x3C6E3A6DL,0L,-1L,-1L,0x10AD7A22L,0xBBAC67CE96EA6506L,-1L,0UL,0x126B21CEL},{0x3C6E3A6DL,0L,-1L,-1L,0x10AD7A22L,0xBBAC67CE96EA6506L,-1L,0UL,0x126B21CEL},{0x3C6E3A6DL,0L,-1L,-1L,0x10AD7A22L,0xBBAC67CE96EA6506L,-1L,0UL,0x126B21CEL},{0x3C6E3A6DL,0L,-1L,-1L,0x10AD7A22L,0xBBAC67CE96EA6506L,-1L,0UL,0x126B21CEL},{0x3C6E3A6DL,0L,-1L,-1L,0x10AD7A22L,0xBBAC67CE96EA6506L,-1L,0UL,0x126B21CEL}};
                    uint16_t l_62 = 65535UL;
                    VECTOR(int32_t, 8) l_71 = (VECTOR(int32_t, 8))(0x5EF93A2FL, (VECTOR(int32_t, 4))(0x5EF93A2FL, (VECTOR(int32_t, 2))(0x5EF93A2FL, 4L), 4L), 4L, 0x5EF93A2FL, 4L);
                    int32_t l_72 = 0x608A2E4BL;
                    int i;
                    for (l_49 = 18; (l_49 >= (-21)); l_49--)
                    { /* block id: 22 */
                        VECTOR(uint16_t, 2) l_52 = (VECTOR(uint16_t, 2))(1UL, 0UL);
                        VECTOR(uint32_t, 16) l_53 = (VECTOR(uint32_t, 16))(0x5D4863FCL, (VECTOR(uint32_t, 4))(0x5D4863FCL, (VECTOR(uint32_t, 2))(0x5D4863FCL, 4294967295UL), 4294967295UL), 4294967295UL, 0x5D4863FCL, 4294967295UL, (VECTOR(uint32_t, 2))(0x5D4863FCL, 4294967295UL), (VECTOR(uint32_t, 2))(0x5D4863FCL, 4294967295UL), 0x5D4863FCL, 4294967295UL, 0x5D4863FCL, 4294967295UL);
                        int16_t l_54 = 0x3C82L;
                        int32_t l_56 = 0L;
                        int32_t *l_55[6] = {&l_56,&l_56,&l_56,&l_56,&l_56,&l_56};
                        VECTOR(uint8_t, 4) l_57 = (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0x58L), 0x58L);
                        uint32_t l_58 = 0UL;
                        int32_t **l_59[3][8][7] = {{{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]}},{{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]}},{{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]},{(void*)0,&l_55[5],&l_55[2],&l_55[2],&l_55[2],&l_55[1],&l_55[2]}}};
                        int i, j, k;
                        l_53.sd ^= l_52.x;
                        l_38 = ((l_47 |= l_54) , l_55[2]);
                        l_59[0][1][3] = ((l_58 = ((VECTOR(uint8_t, 16))(l_57.yywzwwzxxzzxxzxy)).s7) , (void*)0);
                    }
                    l_61[3] = l_60;
                    if ((l_62 |= (-8L)))
                    { /* block id: 31 */
                        uint64_t l_63[8][9] = {{18446744073709551611UL,0x38CF3A2ABDB3BF0DL,0x38CF3A2ABDB3BF0DL,18446744073709551611UL,0UL,0xC46B23711835E00EL,0xC46B23711835E00EL,0UL,18446744073709551611UL},{18446744073709551611UL,0x38CF3A2ABDB3BF0DL,0x38CF3A2ABDB3BF0DL,18446744073709551611UL,0UL,0xC46B23711835E00EL,0xC46B23711835E00EL,0UL,18446744073709551611UL},{18446744073709551611UL,0x38CF3A2ABDB3BF0DL,0x38CF3A2ABDB3BF0DL,18446744073709551611UL,0UL,0xC46B23711835E00EL,0xC46B23711835E00EL,0UL,18446744073709551611UL},{18446744073709551611UL,0x38CF3A2ABDB3BF0DL,0x38CF3A2ABDB3BF0DL,18446744073709551611UL,0UL,0xC46B23711835E00EL,0xC46B23711835E00EL,0UL,18446744073709551611UL},{18446744073709551611UL,0x38CF3A2ABDB3BF0DL,0x38CF3A2ABDB3BF0DL,18446744073709551611UL,0UL,0xC46B23711835E00EL,0xC46B23711835E00EL,0UL,18446744073709551611UL},{18446744073709551611UL,0x38CF3A2ABDB3BF0DL,0x38CF3A2ABDB3BF0DL,18446744073709551611UL,0UL,0xC46B23711835E00EL,0xC46B23711835E00EL,0UL,18446744073709551611UL},{18446744073709551611UL,0x38CF3A2ABDB3BF0DL,0x38CF3A2ABDB3BF0DL,18446744073709551611UL,0UL,0xC46B23711835E00EL,0xC46B23711835E00EL,0UL,18446744073709551611UL},{18446744073709551611UL,0x38CF3A2ABDB3BF0DL,0x38CF3A2ABDB3BF0DL,18446744073709551611UL,0UL,0xC46B23711835E00EL,0xC46B23711835E00EL,0UL,18446744073709551611UL}};
                        VECTOR(int32_t, 8) l_64 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x02F93315L), 0x02F93315L), 0x02F93315L, 8L, 0x02F93315L);
                        int32_t l_65 = 0x6E79906CL;
                        int64_t l_66 = 0x5AE403142C01D27EL;
                        int32_t *l_67 = (void*)0;
                        int32_t *l_68 = &l_65;
                        int i, j;
                        l_63[3][1] = 0x327A36CEL;
                        l_66 |= (l_65 ^= ((VECTOR(int32_t, 4))(l_64.s7052)).w);
                        l_68 = l_67;
                    }
                    else
                    { /* block id: 36 */
                        int16_t l_69 = (-1L);
                        uint64_t l_70 = 5UL;
                        l_70 = l_69;
                    }
                    l_72 = ((VECTOR(int32_t, 4))(l_71.s6161)).z;
                }
                else
                { /* block id: 40 */
                    int32_t l_73[10] = {(-1L),2L,(-1L),(-1L),2L,(-1L),(-1L),2L,(-1L),(-1L)};
                    int32_t l_74 = 0L;
                    int8_t l_75 = 0x6FL;
                    int i;
                    l_73[8] = 0x5DFEAAC5L;
                    l_75 ^= l_74;
                }
                l_77 = l_76;
                if (((VECTOR(int32_t, 4))(l_78.s02f7)).z)
                { /* block id: 45 */
                    int32_t l_79 = 4L;
                    uint64_t l_89[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_89[i] = 1UL;
                    for (l_79 = 25; (l_79 != (-25)); l_79 = safe_sub_func_uint8_t_u_u(l_79, 3))
                    { /* block id: 48 */
                        uint8_t l_82 = 0x9DL;
                        uint16_t l_83[6] = {0xFFEDL,0xFFEDL,0xFFEDL,0xFFEDL,0xFFEDL,0xFFEDL};
                        VECTOR(int32_t, 4) l_84 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
                        int16_t l_85 = 0x42A8L;
                        uint32_t l_86 = 3UL;
                        int i;
                        l_83[0] = l_82;
                        --l_86;
                    }
                    l_79 &= l_89[0];
                }
                else
                { /* block id: 53 */
                    uint16_t l_90 = 1UL;
                    uint64_t l_93 = 0x74765F4E788166B7L;
                    int16_t l_94 = 0x6C97L;
                    int32_t *l_95 = (void*)0;
                    int32_t *l_96 = (void*)0;
                    uint8_t l_97 = 250UL;
                    l_90--;
                    l_94 = l_93;
                    l_96 = l_95;
                    if ((l_97 = 0x2FCF300BL))
                    { /* block id: 58 */
                        uint32_t l_98 = 4294967295UL;
                        struct S0 l_100[4] = {{0xCE371FA2L,-1L,1L,0x6E965D02L,0x7AF9F913L,0x683201E6285BD8C4L,0x16985C78L,6UL,4UL},{0xCE371FA2L,-1L,1L,0x6E965D02L,0x7AF9F913L,0x683201E6285BD8C4L,0x16985C78L,6UL,4UL},{0xCE371FA2L,-1L,1L,0x6E965D02L,0x7AF9F913L,0x683201E6285BD8C4L,0x16985C78L,6UL,4UL},{0xCE371FA2L,-1L,1L,0x6E965D02L,0x7AF9F913L,0x683201E6285BD8C4L,0x16985C78L,6UL,4UL}};
                        struct S0 *l_99 = &l_100[2];
                        struct S0 *l_101 = &l_100[2];
                        int64_t l_102 = 2L;
                        int8_t l_103 = (-1L);
                        uint64_t l_104 = 0x9961D603A4C91E03L;
                        int16_t l_109 = 0L;
                        int16_t *l_108 = &l_109;
                        int16_t **l_107 = &l_108;
                        int16_t **l_110 = &l_108;
                        int i;
                        l_101 = (l_99 = (l_98 , (void*)0));
                        l_104++;
                        l_110 = l_107;
                    }
                    else
                    { /* block id: 63 */
                        struct S0 l_111 = {0x48727989L,0x17B070683A552D6EL,-1L,0x3B554753L,0x2FEFF4B0L,0x32E89E7A35014F3CL,1L,5UL,0x8495B1B1L};/* VOLATILE GLOBAL l_111 */
                        struct S0 l_112 = {1UL,-2L,6L,0x2DA0BF80L,1L,0UL,0x02FFE034L,1UL,4294967291UL};/* VOLATILE GLOBAL l_112 */
                        int32_t l_114 = (-5L);
                        int32_t *l_113 = &l_114;
                        l_77 = l_111;
                        l_112 = l_112;
                        l_38 = l_113;
                    }
                }
            }
            else
            { /* block id: 69 */
                uint8_t l_115 = 1UL;
                struct S0 l_116[10][1] = {{{6UL,0x565414BF27C866F7L,-1L,-1L,-1L,0x73BA9B9AA81E76E4L,0x6A4509C4L,0x38L,4294967289UL}},{{6UL,0x565414BF27C866F7L,-1L,-1L,-1L,0x73BA9B9AA81E76E4L,0x6A4509C4L,0x38L,4294967289UL}},{{6UL,0x565414BF27C866F7L,-1L,-1L,-1L,0x73BA9B9AA81E76E4L,0x6A4509C4L,0x38L,4294967289UL}},{{6UL,0x565414BF27C866F7L,-1L,-1L,-1L,0x73BA9B9AA81E76E4L,0x6A4509C4L,0x38L,4294967289UL}},{{6UL,0x565414BF27C866F7L,-1L,-1L,-1L,0x73BA9B9AA81E76E4L,0x6A4509C4L,0x38L,4294967289UL}},{{6UL,0x565414BF27C866F7L,-1L,-1L,-1L,0x73BA9B9AA81E76E4L,0x6A4509C4L,0x38L,4294967289UL}},{{6UL,0x565414BF27C866F7L,-1L,-1L,-1L,0x73BA9B9AA81E76E4L,0x6A4509C4L,0x38L,4294967289UL}},{{6UL,0x565414BF27C866F7L,-1L,-1L,-1L,0x73BA9B9AA81E76E4L,0x6A4509C4L,0x38L,4294967289UL}},{{6UL,0x565414BF27C866F7L,-1L,-1L,-1L,0x73BA9B9AA81E76E4L,0x6A4509C4L,0x38L,4294967289UL}},{{6UL,0x565414BF27C866F7L,-1L,-1L,-1L,0x73BA9B9AA81E76E4L,0x6A4509C4L,0x38L,4294967289UL}}};
                struct S0 l_117 = {0x176E7A2AL,0x4F3850F382EBA428L,0L,0x1E9F69F1L,0x45AFB680L,0xFEF549EFD0B409ACL,1L,0xF4L,0x152AAD25L};/* VOLATILE GLOBAL l_117 */
                int i, j;
                l_117 = (l_115 , l_116[7][0]);
                for (l_117.f6 = 0; (l_117.f6 < (-25)); l_117.f6--)
                { /* block id: 73 */
                    int32_t l_121 = 0x512C228CL;
                    int32_t *l_120 = &l_121;
                    l_38 = l_120;
                }
            }
            l_124 = ((l_122[1][7] , 0x4757F89DL) , l_123);
        }
        else
        { /* block id: 78 */
            VECTOR(int32_t, 8) l_125 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 4L), 4L), 4L, 1L, 4L);
            struct S0 l_142 = {0xC86E61B7L,0x4E2D081C9F17B183L,0x7D8896D12CF00CDCL,0x73CE81F6L,0x096F18D4L,0x564C520DF3EF8793L,0L,0x3CL,1UL};/* VOLATILE GLOBAL l_142 */
            int16_t l_143 = 0L;
            int32_t *l_144 = (void*)0;
            int64_t l_145 = (-8L);
            int i;
            if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_125.s4475)).xxzxzwwzzyzyywyx)).sa)
            { /* block id: 79 */
                int64_t l_126 = 1L;
                if (l_126)
                { /* block id: 80 */
                    int16_t l_127 = 1L;
                    uint8_t l_128 = 249UL;
                    ++l_128;
                }
                else
                { /* block id: 82 */
                    int32_t l_131 = 0x1C675AF4L;
                    int16_t l_132 = 0x536CL;
                    uint16_t l_133 = 9UL;
                    l_133--;
                }
            }
            else
            { /* block id: 85 */
                uint8_t l_136 = 255UL;
                uint32_t l_139 = 4294967295UL;
                l_136--;
                --l_139;
            }
            l_144 = (l_36[4][0][0] = ((l_142 , 6L) , (l_143 , l_144)));
            l_145 |= ((VECTOR(int32_t, 2))(0x79D1F0E5L, 0x1752728AL)).lo;
        }
        unsigned int result = 0;
        result += l_37;
        result += l_39.y;
        result += l_39.x;
        atomic_add(&p_1537->l_special_values[0], result);
    }
    else
    { /* block id: 93 */
        (1 + 1);
    }
    for (p_1537->g_35 = 0; (p_1537->g_35 <= (-5)); p_1537->g_35 = safe_sub_func_uint16_t_u_u(p_1537->g_35, 6))
    { /* block id: 98 */
        struct S0 *l_163 = &p_1537->g_164;
        int16_t *l_178 = &p_1537->g_33;
        int16_t **l_177 = &l_178;
        int8_t l_646 = 0x7FL;
        int64_t **l_655 = &p_1537->g_345;
        int32_t *l_660[7][4] = {{&l_175,&l_175,&l_175,&l_175},{&l_175,&l_175,&l_175,&l_175},{&l_175,&l_175,&l_175,&l_175},{&l_175,&l_175,&l_175,&l_175},{&l_175,&l_175,&l_175,&l_175},{&l_175,&l_175,&l_175,&l_175},{&l_175,&l_175,&l_175,&l_175}};
        int32_t **l_664[3];
        VECTOR(uint8_t, 8) l_674 = (VECTOR(uint8_t, 8))(0xD9L, (VECTOR(uint8_t, 4))(0xD9L, (VECTOR(uint8_t, 2))(0xD9L, 0x8AL), 0x8AL), 0x8AL, 0xD9L, 0x8AL);
        uint8_t *l_675[4][4] = {{&p_1537->g_600.f7,(void*)0,(void*)0,&p_1537->g_600.f7},{&p_1537->g_600.f7,(void*)0,(void*)0,&p_1537->g_600.f7},{&p_1537->g_600.f7,(void*)0,(void*)0,&p_1537->g_600.f7},{&p_1537->g_600.f7,(void*)0,(void*)0,&p_1537->g_600.f7}};
        VECTOR(int8_t, 8) l_677 = (VECTOR(int8_t, 8))(0x16L, (VECTOR(int8_t, 4))(0x16L, (VECTOR(int8_t, 2))(0x16L, 0x23L), 0x23L), 0x23L, 0x16L, 0x23L);
        VECTOR(int8_t, 2) l_678 = (VECTOR(int8_t, 2))(1L, (-7L));
        VECTOR(int8_t, 8) l_679 = (VECTOR(int8_t, 8))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x1AL), 0x1AL), 0x1AL, (-3L), 0x1AL);
        int i, j;
        for (i = 0; i < 3; i++)
            l_664[i] = &l_660[2][3];
        for (p_29 = 29; (p_29 != 42); p_29 = safe_add_func_int32_t_s_s(p_29, 5))
        { /* block id: 101 */
            l_645 = func_150(((((safe_mod_func_int16_t_s_s((((VECTOR(uint8_t, 2))(p_1537->g_157.zw)).hi > ((safe_unary_minus_func_uint32_t_u((((((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(p_1537->g_33, (l_163 != (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))((func_10(p_27, p_1537) , 0x48151721L), GROUP_DIVERGE(1, 1), 1UL, 4294967295UL)).odd)), 0x4AD4DC78L, 4294967295UL)).y , l_165)))), (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_165 == (void*)0), func_10((safe_mod_func_int32_t_s_s(((((0x5FD8L != p_1537->g_166.f0) || FAKE_DIVERGE(p_1537->group_0_offset, get_group_id(0), 10)) < 0UL) == p_29), p_1537->g_166.f6)), p_1537))), GROUP_DIVERGE(1, 1))))) , l_175) && p_1537->g_164.f0) , p_1537->g_166.f0) == (-1L)))) || 0x1613DEACBA7C000DL)), p_1537->g_164.f0)) , (*p_1537->g_34)) , p_1537->g_176[9]) != (void*)0), p_1537->g_166.f6, p_1537->g_164.f5, l_177, p_1537);
        }
        if ((*p_1537->g_182))
            break;
        l_175 ^= (((l_646 | ((void*)0 != &p_1537->g_34)) <= (+(safe_mul_func_uint16_t_u_u(p_1537->g_600.f2, (safe_mul_func_int16_t_s_s((**p_1537->g_271), (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((l_655 == &p_1537->g_345), ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(0L, 0x54L, ((VECTOR(int8_t, 2))(l_656.ww)), ((VECTOR(int8_t, 2))(l_657.xy)), 0L, ((VECTOR(int8_t, 2))(0L, 0x7BL)).odd, 0x67L, (+((p_30 & 0x340E4CB6L) != 0L)), ((VECTOR(int8_t, 2))(0x7FL)), 1L, ((VECTOR(int8_t, 2))((-1L))), 1L)), ((VECTOR(int8_t, 16))(1L)), ((VECTOR(int8_t, 16))(0x29L))))).sb)), 0L)))))))) == (*p_1537->g_34));
        if ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_1537->g_661.s50)), ((VECTOR(int8_t, 2))(p_1537->g_662.yx)), 1L, 0x75L, ((l_665[0][4][3] = l_663) == &l_175), 1L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(0x5EL, 0L, (p_1537->g_438.w = (safe_div_func_uint16_t_u_u(p_1537->g_630[0].f5, (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(8UL, 0x35D1L, (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_672.yxyxxxxy)).s3, (p_30 , (p_1537->g_630[0].f7 = ((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 4))(l_673.s349d)).xzwxwwzw, ((VECTOR(uint8_t, 16))(l_674.s7173225455247471)).hi))).s0)))), ((VECTOR(uint16_t, 2))(8UL, 0UL)), 65535UL, 65535UL, 0x4951L)).s0, p_1537->g_494.f8))))), 0x39L, 4L, 0x55L, 0x0DL, 0x20L)).odd)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_676.xyyy)).xzxxxwywwxwzzxzx)).s5a, ((VECTOR(int8_t, 2))(0x52L, (-8L))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(l_677.s4476)).hi, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_678.yy)), 0x52L, 7L)).lo, ((VECTOR(int8_t, 16))(l_679.s1363776003702702)).sba))).xxyy)).ywxwzzxx)).s37))), 0x1AL, 0x15L)), ((VECTOR(int8_t, 2))(l_680.s62)), 1L, 0L)).hi, (int8_t)(safe_mul_func_int16_t_s_s(((0x68E02A66L ^ (safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_s(((((*p_1537->g_34) && ((p_27 , (safe_sub_func_uint64_t_u_u(0x86A615BD063D2651L, GROUP_DIVERGE(0, 1)))) || 0x6EL)) >= (***p_1537->g_409)) && p_27), 3)) == GROUP_DIVERGE(2, 1)) ^ GROUP_DIVERGE(2, 1)) | p_29), p_1537->g_513.w))) && p_29), (**p_1537->g_271)))))))))).sb != 0x49L))
        { /* block id: 332 */
            uint32_t l_689[8] = {1UL,0xAF8A716CL,1UL,1UL,0xAF8A716CL,1UL,1UL,0xAF8A716CL};
            int i;
            l_689[3] |= p_29;
            return p_31;
        }
        else
        { /* block id: 335 */
            uint8_t l_692 = 247UL;
            struct S0 **l_698 = &l_165;
            for (p_1537->g_566.f5 = (-4); (p_1537->g_566.f5 >= 52); p_1537->g_566.f5 = safe_add_func_uint16_t_u_u(p_1537->g_566.f5, 5))
            { /* block id: 338 */
                l_692++;
            }
            (*l_698) = l_165;
        }
    }
    for (p_1537->g_265 = 0; (p_1537->g_265 > 32); p_1537->g_265 = safe_add_func_int64_t_s_s(p_1537->g_265, 7))
    { /* block id: 346 */
        VECTOR(int32_t, 8) l_995 = (VECTOR(int32_t, 8))(0x757353E8L, (VECTOR(int32_t, 4))(0x757353E8L, (VECTOR(int32_t, 2))(0x757353E8L, 0x242C2CA0L), 0x242C2CA0L), 0x242C2CA0L, 0x757353E8L, 0x242C2CA0L);
        uint64_t l_1017[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1017[i] = 0xBC5D09C135C454DFL;
        if ((atomic_inc(&p_1537->g_atomic_input[18 * get_linear_group_id() + 8]) == 8))
        { /* block id: 348 */
            uint16_t l_701 = 0UL;
            int8_t l_702[2];
            int8_t l_895 = 0x5AL;
            int i;
            for (i = 0; i < 2; i++)
                l_702[i] = 0x41L;
            if ((l_701 , l_702[1]))
            { /* block id: 349 */
                int32_t l_703 = 0L;
                int32_t l_750[1];
                uint8_t l_751 = 0x0FL;
                int32_t l_752[1][8] = {{0x54B0FDFAL,0x54B0FDFAL,0x54B0FDFAL,0x54B0FDFAL,0x54B0FDFAL,0x54B0FDFAL,0x54B0FDFAL,0x54B0FDFAL}};
                uint32_t l_753 = 0xEDC28D56L;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_750[i] = 0x24A78B2FL;
                for (l_703 = 0; (l_703 < 12); l_703 = safe_add_func_uint16_t_u_u(l_703, 4))
                { /* block id: 352 */
                    int32_t l_706 = 0x72762EA5L;
                    uint16_t l_707 = 0x67CBL;
                    int8_t l_730 = 0x1EL;
                    uint8_t l_731 = 0xCBL;
                    uint32_t l_734 = 0x94991D8CL;
                    uint16_t l_735 = 0x8BE0L;
                    if ((l_706 , (l_707 = 2L)))
                    { /* block id: 354 */
                        struct S0 l_708 = {0x3EE909AAL,6L,0x6FB029801DE94F09L,0x60893991L,-3L,0xE9C0FB525F14020EL,0L,5UL,0x9795C0F1L};/* VOLATILE GLOBAL l_708 */
                        struct S0 l_709 = {0x796EC208L,0x5742732DBB605492L,0x4DEF1EEFB49A3568L,1L,0x33705583L,3UL,0x6FC45604L,0x6FL,0xEF7B8031L};/* VOLATILE GLOBAL l_709 */
                        uint16_t l_710 = 0xF9CAL;
                        int32_t l_714 = 1L;
                        int32_t *l_713 = &l_714;
                        int32_t *l_715 = &l_714;
                        l_709 = l_708;
                        --l_710;
                        l_715 = l_713;
                    }
                    else
                    { /* block id: 358 */
                        uint32_t l_716 = 7UL;
                        VECTOR(int32_t, 2) l_717 = (VECTOR(int32_t, 2))((-1L), 0x485DF0A0L);
                        VECTOR(int32_t, 4) l_718 = (VECTOR(int32_t, 4))(0x6B1CBA7BL, (VECTOR(int32_t, 2))(0x6B1CBA7BL, (-3L)), (-3L));
                        uint8_t l_719 = 0x8AL;
                        uint16_t l_720[2];
                        int32_t l_723 = (-9L);
                        int64_t l_724 = 0L;
                        uint64_t l_725[10] = {0xA87D5A3C774D32FDL,0x5557E19671B54ED3L,0xA87D5A3C774D32FDL,0xA87D5A3C774D32FDL,0x5557E19671B54ED3L,0xA87D5A3C774D32FDL,0xA87D5A3C774D32FDL,0x5557E19671B54ED3L,0xA87D5A3C774D32FDL,0xA87D5A3C774D32FDL};
                        uint64_t l_728 = 0x9D6BD049D76B39DFL;
                        uint64_t l_729 = 18446744073709551615UL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_720[i] = 1UL;
                        l_719 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(3L, (l_706 = l_716), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_717.yxxxyxxy)).odd)), (-1L), 0x452F7251L)).s54, ((VECTOR(int32_t, 2))(l_718.xw))))), 0x55F436F3L, 1L)).x;
                        l_706 ^= ((l_720[0]--) , l_723);
                        ++l_725[1];
                        l_706 ^= (l_729 = l_728);
                    }
                    ++l_731;
                    l_735 = l_734;
                    for (l_734 = 27; (l_734 > 1); l_734 = safe_sub_func_uint64_t_u_u(l_734, 7))
                    { /* block id: 371 */
                        VECTOR(uint32_t, 8) l_738 = (VECTOR(uint32_t, 8))(0x76E521D5L, (VECTOR(uint32_t, 4))(0x76E521D5L, (VECTOR(uint32_t, 2))(0x76E521D5L, 6UL), 6UL), 6UL, 0x76E521D5L, 6UL);
                        VECTOR(uint32_t, 8) l_739 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xFB8EA443L), 0xFB8EA443L), 0xFB8EA443L, 4294967295UL, 0xFB8EA443L);
                        uint32_t l_740 = 0UL;
                        uint32_t l_741 = 4294967295UL;
                        struct S0 l_743 = {0UL,0x70B2F5F8EB2C694CL,0L,0x53693D82L,4L,0x2B1977DB3EEF7F81L,1L,0xA6L,0x6BC54A02L};/* VOLATILE GLOBAL l_743 */
                        struct S0 *l_742[4];
                        struct S0 *l_744 = &l_743;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_742[i] = &l_743;
                        l_744 = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 8))(l_738.s13652261)).s6172347226403541, (uint32_t)((VECTOR(uint32_t, 2))(l_739.s02)).lo, (uint32_t)l_740))).s61)).odd , (l_742[3] = (l_741 , (void*)0)));
                    }
                }
                for (l_703 = 0; (l_703 == 11); l_703 = safe_add_func_int8_t_s_s(l_703, 6))
                { /* block id: 378 */
                    int32_t l_747 = 0x2A4C7528L;
                    int32_t l_748 = (-1L);
                    uint8_t l_749 = 0xA7L;
                    l_749 = (l_747 , l_748);
                    l_747 = 0x367A8D5CL;
                }
                l_703 ^= l_750[0];
                l_753 |= (l_751 , l_752[0][4]);
            }
            else
            { /* block id: 384 */
                int32_t l_754 = 0x270A4D3AL;
                uint8_t l_801 = 252UL;
                int8_t l_802 = 9L;
                VECTOR(int32_t, 2) l_803 = (VECTOR(int32_t, 2))(1L, (-7L));
                VECTOR(int32_t, 8) l_804 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x6291DFB5L), 0x6291DFB5L), 0x6291DFB5L, 5L, 0x6291DFB5L);
                VECTOR(int32_t, 16) l_805 = (VECTOR(int32_t, 16))(0x07E0E5BCL, (VECTOR(int32_t, 4))(0x07E0E5BCL, (VECTOR(int32_t, 2))(0x07E0E5BCL, 0x1FD32FFBL), 0x1FD32FFBL), 0x1FD32FFBL, 0x07E0E5BCL, 0x1FD32FFBL, (VECTOR(int32_t, 2))(0x07E0E5BCL, 0x1FD32FFBL), (VECTOR(int32_t, 2))(0x07E0E5BCL, 0x1FD32FFBL), 0x07E0E5BCL, 0x1FD32FFBL, 0x07E0E5BCL, 0x1FD32FFBL);
                int64_t l_806 = 0x03DE2124DFE81468L;
                VECTOR(int32_t, 16) l_807 = (VECTOR(int32_t, 16))(0x5A15BC73L, (VECTOR(int32_t, 4))(0x5A15BC73L, (VECTOR(int32_t, 2))(0x5A15BC73L, 0x363A8E10L), 0x363A8E10L), 0x363A8E10L, 0x5A15BC73L, 0x363A8E10L, (VECTOR(int32_t, 2))(0x5A15BC73L, 0x363A8E10L), (VECTOR(int32_t, 2))(0x5A15BC73L, 0x363A8E10L), 0x5A15BC73L, 0x363A8E10L, 0x5A15BC73L, 0x363A8E10L);
                uint16_t l_808 = 0x7846L;
                int32_t l_809 = 0x529FCFC6L;
                uint8_t l_810 = 252UL;
                uint64_t l_870[4][2][1];
                uint8_t l_873 = 2UL;
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_870[i][j][k] = 5UL;
                    }
                }
                for (l_754 = (-9); (l_754 > 19); l_754 = safe_add_func_int8_t_s_s(l_754, 1))
                { /* block id: 387 */
                    int32_t l_757 = 0x2CA546A6L;
                    if (l_757)
                    { /* block id: 388 */
                        uint8_t l_758 = 254UL;
                        ++l_758;
                    }
                    else
                    { /* block id: 390 */
                        uint32_t l_761 = 0xD43B56BBL;
                        int16_t l_762[7] = {0x460EL,0x460EL,0x460EL,0x460EL,0x460EL,0x460EL,0x460EL};
                        uint64_t l_763 = 2UL;
                        uint32_t l_766 = 4294967295UL;
                        uint16_t l_767 = 0x2EDAL;
                        uint32_t l_768 = 0x68992F42L;
                        int8_t l_769 = 0x40L;
                        uint64_t l_770 = 18446744073709551615UL;
                        VECTOR(int32_t, 2) l_771 = (VECTOR(int32_t, 2))((-1L), 0L);
                        int32_t l_772 = (-1L);
                        VECTOR(int32_t, 4) l_773 = (VECTOR(int32_t, 4))(0x22EC68ADL, (VECTOR(int32_t, 2))(0x22EC68ADL, 7L), 7L);
                        uint64_t l_774 = 0x8CDBAF12AA952810L;
                        VECTOR(int32_t, 16) l_775 = (VECTOR(int32_t, 16))(0x664BA3BDL, (VECTOR(int32_t, 4))(0x664BA3BDL, (VECTOR(int32_t, 2))(0x664BA3BDL, 0x27196719L), 0x27196719L), 0x27196719L, 0x664BA3BDL, 0x27196719L, (VECTOR(int32_t, 2))(0x664BA3BDL, 0x27196719L), (VECTOR(int32_t, 2))(0x664BA3BDL, 0x27196719L), 0x664BA3BDL, 0x27196719L, 0x664BA3BDL, 0x27196719L);
                        VECTOR(int32_t, 2) l_776 = (VECTOR(int32_t, 2))((-9L), 0x12D6BFB0L);
                        VECTOR(int32_t, 16) l_777 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x2AE1119DL), 0x2AE1119DL), 0x2AE1119DL, (-10L), 0x2AE1119DL, (VECTOR(int32_t, 2))((-10L), 0x2AE1119DL), (VECTOR(int32_t, 2))((-10L), 0x2AE1119DL), (-10L), 0x2AE1119DL, (-10L), 0x2AE1119DL);
                        VECTOR(int32_t, 8) l_778 = (VECTOR(int32_t, 8))(0x6A66EE93L, (VECTOR(int32_t, 4))(0x6A66EE93L, (VECTOR(int32_t, 2))(0x6A66EE93L, 0x0708A79BL), 0x0708A79BL), 0x0708A79BL, 0x6A66EE93L, 0x0708A79BL);
                        uint64_t l_779 = 18446744073709551607UL;
                        uint32_t l_780 = 0x2FEB072AL;
                        VECTOR(uint32_t, 2) l_781 = (VECTOR(uint32_t, 2))(0x0DD09F9FL, 0UL);
                        uint32_t l_782[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_782[i] = 0xA7F73502L;
                        l_761 ^= 1L;
                        l_763--;
                        l_757 &= (((l_766 , (l_767 , l_768)) , (l_769 , l_770)) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(l_771.xyyyyyxy)).hi, (int32_t)l_772))).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(l_773.zz)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_774, ((VECTOR(int32_t, 2))((-2L), 0x3EC5F146L)), 1L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_775.se8)).xxxx)))), ((VECTOR(int32_t, 2))(0x3170230CL, 0L)).yxyxyyyy))))).odd)).xyzywxww)).s07))))).yxyxyyyxyyyxxxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(l_776.yyxy)).lo, ((VECTOR(int32_t, 8))(l_777.s99c7e439)).s45))).xyxy)).lo)), 0x1503A445L, 0x0B7BA4ECL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_778.s43052133)).s53)), 5L, (-4L))).lo)), 2L, (-1L))).s1304473101704611))).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x5C231CB4L, 1L)), 4L, (-1L))).wzwyxwxwzxwxxwzy, ((VECTOR(int32_t, 2))(0x26CD4A39L, 0x4BC58385L)).xyxxyyyxxyyxxyyx, ((VECTOR(int32_t, 2))(0x01DC48DEL, 1L)).xxyxyyyyyxyxxxxx))).s2844)).yxwwxwzy))))).hi, (int32_t)(((l_779 |= (-4L)) , (l_780 , l_781.y)) , 0x40F9AD93L)))).wzyyyyyyxxwzxwxy)).s2e, ((VECTOR(int32_t, 2))(0x114651D2L)), ((VECTOR(int32_t, 2))(9L))))).xyxx)).lo))).yxxyyyyx)).s36)), 0x0027D71FL, 0x569878F3L)))).w);
                        --l_782[5];
                    }
                    for (l_757 = 0; (l_757 <= (-6)); l_757--)
                    { /* block id: 399 */
                        int8_t l_787 = 4L;
                        int64_t l_788 = (-10L);
                        l_788 |= l_787;
                    }
                    for (l_757 = (-23); (l_757 != (-15)); l_757++)
                    { /* block id: 404 */
                        int32_t l_791 = 0x346A47DEL;
                        int32_t l_792 = 0x02C45C32L;
                        uint16_t l_793 = 0x1F8EL;
                        int32_t l_796[7][6] = {{(-1L),3L,3L,(-1L),0x3A1A0F5EL,0L},{(-1L),3L,3L,(-1L),0x3A1A0F5EL,0L},{(-1L),3L,3L,(-1L),0x3A1A0F5EL,0L},{(-1L),3L,3L,(-1L),0x3A1A0F5EL,0L},{(-1L),3L,3L,(-1L),0x3A1A0F5EL,0L},{(-1L),3L,3L,(-1L),0x3A1A0F5EL,0L},{(-1L),3L,3L,(-1L),0x3A1A0F5EL,0L}};
                        uint32_t l_797 = 1UL;
                        uint32_t l_800[10] = {4294967287UL,1UL,4294967287UL,4294967287UL,1UL,4294967287UL,4294967287UL,1UL,4294967287UL,4294967287UL};
                        int i, j;
                        ++l_793;
                        ++l_797;
                        l_800[0] = 0L;
                    }
                }
                if ((l_810 |= ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))((l_802 = l_801), 0x26394BBDL, (-4L), 1L)).zwwzwwwwwyzzyxzy, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(l_803.yxxxyxxx)).s3431726454420501))), ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(l_804.s3474577053431112)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_805.s23fc)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((l_806 , 0x35C2CD27L), ((VECTOR(int32_t, 4))(l_807.s1342)), ((VECTOR(int32_t, 2))(0x263FCDCEL, 0x3B1CEE09L)), 0x20AB7FAAL)).s40)), 4L, (-1L))).s0276556405412644)))))).s0e, (int32_t)(l_808 , (-1L)), (int32_t)l_809))).odd))
                { /* block id: 412 */
                    int32_t l_811 = 9L;
                    int32_t l_839 = 0x2BEA50DFL;
                    uint8_t l_851 = 0x03L;
                    uint32_t l_852 = 0x8533E181L;
                    for (l_811 = 0; (l_811 >= 3); l_811++)
                    { /* block id: 415 */
                        uint8_t l_814 = 0xDCL;
                        VECTOR(int8_t, 4) l_815 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x2AL), 0x2AL);
                        uint16_t l_816[2][4][2] = {{{65527UL,65527UL},{65527UL,65527UL},{65527UL,65527UL},{65527UL,65527UL}},{{65527UL,65527UL},{65527UL,65527UL},{65527UL,65527UL},{65527UL,65527UL}}};
                        VECTOR(int32_t, 4) l_817 = (VECTOR(int32_t, 4))(0x76E2CE3BL, (VECTOR(int32_t, 2))(0x76E2CE3BL, 0x49A9CB6FL), 0x49A9CB6FL);
                        VECTOR(int32_t, 8) l_818 = (VECTOR(int32_t, 8))(0x37D808F6L, (VECTOR(int32_t, 4))(0x37D808F6L, (VECTOR(int32_t, 2))(0x37D808F6L, 0L), 0L), 0L, 0x37D808F6L, 0L);
                        VECTOR(int32_t, 8) l_819 = (VECTOR(int32_t, 8))(0x019EFCB1L, (VECTOR(int32_t, 4))(0x019EFCB1L, (VECTOR(int32_t, 2))(0x019EFCB1L, 2L), 2L), 2L, 0x019EFCB1L, 2L);
                        VECTOR(int32_t, 2) l_820 = (VECTOR(int32_t, 2))(0L, 0x471D3A17L);
                        VECTOR(int32_t, 16) l_821 = (VECTOR(int32_t, 16))(0x0ABF1933L, (VECTOR(int32_t, 4))(0x0ABF1933L, (VECTOR(int32_t, 2))(0x0ABF1933L, 1L), 1L), 1L, 0x0ABF1933L, 1L, (VECTOR(int32_t, 2))(0x0ABF1933L, 1L), (VECTOR(int32_t, 2))(0x0ABF1933L, 1L), 0x0ABF1933L, 1L, 0x0ABF1933L, 1L);
                        VECTOR(int16_t, 8) l_822 = (VECTOR(int16_t, 8))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0x573AL), 0x573AL), 0x573AL, 3L, 0x573AL);
                        VECTOR(int16_t, 4) l_823 = (VECTOR(int16_t, 4))(0x704BL, (VECTOR(int16_t, 2))(0x704BL, 1L), 1L);
                        int8_t l_824 = 0x57L;
                        uint32_t l_825 = 0x8ADEF8BEL;
                        int16_t l_826 = 0x36D3L;
                        int32_t l_827[7][4][6] = {{{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL}},{{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL}},{{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL}},{{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL}},{{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL}},{{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL}},{{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL},{0x59F0F27BL,0x59F0F27BL,(-1L),0L,0x6C7CCBE0L,0x33D7C67DL}}};
                        uint8_t l_828 = 249UL;
                        uint8_t l_829 = 0x1BL;
                        int64_t l_830[9] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
                        int32_t l_831 = 0x0F08C083L;
                        struct S0 *l_833 = (void*)0;
                        struct S0 **l_832 = &l_833;
                        struct S0 **l_834 = (void*)0;
                        uint64_t l_837[1];
                        uint64_t *l_836 = &l_837[0];
                        uint64_t **l_835[4] = {&l_836,&l_836,&l_836,&l_836};
                        int8_t l_838 = 0x32L;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_837[i] = 18446744073709551613UL;
                        l_805.s1 |= (l_807.sf &= 0x50404CBAL);
                        l_834 = (((l_702[1] = l_814) , ((VECTOR(int8_t, 8))(0x43L, 0x01L, 4L, 0x46L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 16))(l_815.zyxywywxyyxzxxyz)).s23, (int8_t)(-1L), (int8_t)((l_754 = ((FAKE_DIVERGE(p_1537->global_1_offset, get_global_id(1), 10) , (l_816[0][3][1] , 6L)) , ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))((-7L), (-4L), ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(l_817.xy)).yxxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_818.s53)).yyyy)).odd)).xyxxxyyxxyyyyxyx)).lo)).odd))), (int32_t)((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_819.s4751216073122550)).sa, ((VECTOR(int32_t, 8))((-8L), 0x460F6160L, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(l_820.xxyyxyxyyxxxxyxx)).s80, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_821.s87)), 0x6C3A6483L, 0x0454685FL)).xzwxywwx, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_822.s17)), 0x0926L, 0x6D70L)).lo, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(l_823.zx)).yyyyxyxx, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((l_824 , (l_826 = (l_822.s5 |= ((l_825 = 0L) , (-1L))))), l_827[6][1][2], 7L, 1L)).wzxyzzwx))))).s4, ((VECTOR(int16_t, 2))(0L)), 0x7EBBL, 0x5C82L, (-6L), l_828, ((VECTOR(int16_t, 8))(0x0BAEL)), (-1L))))).s30, ((VECTOR(int16_t, 2))(0x6337L))))), ((VECTOR(uint16_t, 2))(0x161BL))))).xxxxyxxx, ((VECTOR(int32_t, 8))((-1L)))))), ((VECTOR(int32_t, 8))(0L))))).even)).odd))))), (-10L), l_829, 0x38566F99L, 4L)).s3, ((VECTOR(int32_t, 4))(0x7EFEDD18L)), 0x2ED7C8ADL, ((VECTOR(int32_t, 8))(0x2031AE04L)), 0x7382936DL)).sb))), 0x2A84806CL, l_830[0], ((VECTOR(int32_t, 2))((-7L))), 0x0D098FC6L, ((VECTOR(int32_t, 4))(0x32BCBF49L)), 5L)).lo, ((VECTOR(int32_t, 8))((-2L))), ((VECTOR(int32_t, 8))((-2L)))))).s6)) , l_831)))).xxxx)))).s1) , l_832);
                        l_835[2] = (void*)0;
                        l_807.sb = l_838;
                    }
                    if ((l_803.y = l_839))
                    { /* block id: 428 */
                        int32_t l_840 = (-1L);
                        uint16_t l_841[6] = {0x8A39L,0UL,0x8A39L,0x8A39L,0UL,0x8A39L};
                        VECTOR(uint32_t, 2) l_842 = (VECTOR(uint32_t, 2))(0x27AD9606L, 0x92B91E01L);
                        int16_t l_843 = 0L;
                        uint16_t l_844 = 0xAB42L;
                        int32_t l_846 = 0x547D65E0L;
                        int32_t *l_845 = &l_846;
                        int32_t *l_847 = &l_846;
                        int i;
                        l_754 = l_840;
                        l_807.s4 = l_841[1];
                        l_843 = l_842.x;
                        l_847 = (l_844 , l_845);
                    }
                    else
                    { /* block id: 433 */
                        uint32_t l_848 = 0x82849B6EL;
                        int32_t l_850 = 0x6DF68D4AL;
                        int32_t *l_849 = &l_850;
                        l_807.sf = l_848;
                        l_849 = (void*)0;
                    }
                    l_852 ^= l_851;
                }
                else
                { /* block id: 438 */
                    uint32_t l_853 = 0x2A0418ABL;
                    VECTOR(int8_t, 2) l_854 = (VECTOR(int8_t, 2))(0L, 0x61L);
                    struct S0 l_855 = {1UL,-1L,0x50557A6AF1388FF9L,1L,0x61B08DD2L,0x547F6BDF7CB2AB21L,0x7B0DDFA1L,255UL,0xD7F78ECBL};/* VOLATILE GLOBAL l_855 */
                    int32_t l_856 = (-1L);
                    VECTOR(uint8_t, 16) l_857 = (VECTOR(uint8_t, 16))(0xA3L, (VECTOR(uint8_t, 4))(0xA3L, (VECTOR(uint8_t, 2))(0xA3L, 0x06L), 0x06L), 0x06L, 0xA3L, 0x06L, (VECTOR(uint8_t, 2))(0xA3L, 0x06L), (VECTOR(uint8_t, 2))(0xA3L, 0x06L), 0xA3L, 0x06L, 0xA3L, 0x06L);
                    uint64_t l_860 = 0xF586FB0809D2ACC5L;
                    VECTOR(uint8_t, 2) l_861 = (VECTOR(uint8_t, 2))(0x94L, 255UL);
                    int8_t l_862 = (-1L);
                    uint32_t l_863 = 0xBF1D4C8AL;
                    int16_t l_864 = (-1L);
                    int32_t l_865 = (-1L);
                    uint32_t l_866 = 0x249DAF35L;
                    int8_t l_867[1];
                    int32_t *l_868 = &l_856;
                    uint64_t l_869 = 0x68764651A0E0D95CL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_867[i] = 0x3CL;
                    l_868 = (((l_810 = FAKE_DIVERGE(p_1537->local_2_offset, get_local_id(2), 10)) , (l_856 = ((l_853 , (l_854.y , l_855)) , 0x06E633042E98A1D6L))) , (((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 2))(l_857.s5a)).xyxxyxxxyyyyyxyy, ((VECTOR(uint8_t, 2))(254UL, 0xB4L)).yxyxxyyxxxyxyyxx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(0x44L, 0xD7L, (l_810 = (++l_801)), ((VECTOR(uint8_t, 2))(0xDAL, 255UL)), 2UL, 0xF0L, (l_810 = l_860), ((VECTOR(uint8_t, 2))(l_861.xy)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_862, l_863, l_864, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_865, l_866, 0xB8L, ((VECTOR(uint8_t, 4))(0UL)), 0x80L)))).s04)).xyyxxyxx)), l_867[0], ((VECTOR(uint8_t, 2))(0x9DL)), 0x53L, 0xC0L)).s9ce7)), 255UL, 254UL)))).s01)).xyyxyxxx)).s1271062632506100))).s3 , l_868));
                    l_804.s1 ^= l_869;
                }
                ++l_870[3][1][0];
                l_873--;
            }
            for (l_702[1] = 0; (l_702[1] >= (-17)); l_702[1] = safe_sub_func_int16_t_s_s(l_702[1], 6))
            { /* block id: 452 */
                int16_t l_878[1];
                uint32_t l_879 = 0x00B43B0CL;
                uint16_t l_880 = 0UL;
                VECTOR(uint64_t, 2) l_881 = (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x4AC649E76C3D071BL);
                VECTOR(uint64_t, 16) l_882 = (VECTOR(uint64_t, 16))(0xB9CA8446BFA453C6L, (VECTOR(uint64_t, 4))(0xB9CA8446BFA453C6L, (VECTOR(uint64_t, 2))(0xB9CA8446BFA453C6L, 3UL), 3UL), 3UL, 0xB9CA8446BFA453C6L, 3UL, (VECTOR(uint64_t, 2))(0xB9CA8446BFA453C6L, 3UL), (VECTOR(uint64_t, 2))(0xB9CA8446BFA453C6L, 3UL), 0xB9CA8446BFA453C6L, 3UL, 0xB9CA8446BFA453C6L, 3UL);
                VECTOR(uint64_t, 4) l_883 = (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 1UL), 1UL);
                VECTOR(uint64_t, 4) l_884 = (VECTOR(uint64_t, 4))(0x3E7AA8AF20B834A6L, (VECTOR(uint64_t, 2))(0x3E7AA8AF20B834A6L, 0UL), 0UL);
                int64_t l_885[2][9] = {{(-4L),0L,0L,(-4L),(-4L),0L,0L,(-4L),(-4L)},{(-4L),0L,0L,(-4L),(-4L),0L,0L,(-4L),(-4L)}};
                uint8_t l_886 = 0UL;
                int16_t l_887 = 0x41B8L;
                uint32_t l_888 = 0UL;
                int32_t l_890 = 0x097F4D6BL;
                int32_t *l_889[9] = {(void*)0,&l_890,(void*)0,(void*)0,&l_890,(void*)0,(void*)0,&l_890,(void*)0};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_878[i] = (-1L);
                l_880 = (l_878[0] , l_879);
                l_889[6] = (((l_885[0][8] &= ((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 2))(18446744073709551614UL, 18446744073709551611UL)).yxxxxxyyyxxyyxxy, ((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_881.yx)).xyxxxxxyxxyyxxyx)).s78, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_882.s9e38a03665ac0bf2)))).lo, ((VECTOR(uint64_t, 4))(l_883.zxwz)).yxxxzzxz))).s21))))).xyxyyyxyyyxxxxxx, ((VECTOR(uint64_t, 8))(l_884.xyxxyzwz)).s2377430071050371))).sc) , l_886) , ((l_888 = l_887) , (void*)0));
                for (l_879 = (-30); (l_879 <= 40); l_879++)
                { /* block id: 459 */
                    int32_t l_894 = (-1L);
                    int32_t *l_893 = &l_894;
                    l_889[8] = l_893;
                }
            }
            if (l_895)
            { /* block id: 463 */
                uint32_t l_896[4] = {8UL,8UL,8UL,8UL};
                int i;
                l_896[1]++;
            }
            else
            { /* block id: 465 */
                int32_t l_899 = 0x435E8AFBL;
                l_899 ^= (-1L);
            }
            unsigned int result = 0;
            result += l_701;
            int l_702_i0;
            for (l_702_i0 = 0; l_702_i0 < 2; l_702_i0++) {
                result += l_702[l_702_i0];
            }
            result += l_895;
            atomic_add(&p_1537->g_special_values[18 * get_linear_group_id() + 8], result);
        }
        else
        { /* block id: 468 */
            (1 + 1);
        }
        for (p_27 = (-5); (p_27 >= (-24)); p_27--)
        { /* block id: 473 */
            int64_t l_1008 = 0L;
            int64_t **l_1009[6];
            int32_t l_1010 = 1L;
            VECTOR(uint8_t, 2) l_1039 = (VECTOR(uint8_t, 2))(0UL, 0xBBL);
            int i;
            for (i = 0; i < 6; i++)
                l_1009[i] = (void*)0;
            if ((atomic_inc(&p_1537->l_atomic_input[7]) == 8))
            { /* block id: 475 */
                uint64_t l_902 = 0x880F0F1AAE91CDE6L;
                uint16_t l_905[1][7];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_905[i][j] = 0xA364L;
                }
                ++l_902;
                if (l_905[0][3])
                { /* block id: 477 */
                    int32_t l_906 = 0L;
                    int32_t l_911 = (-2L);
                    uint64_t l_912 = 9UL;
                    int64_t l_915[5][7][5] = {{{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L}},{{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L}},{{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L}},{{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L}},{{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L},{0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L,0x06D6FBCCB5976C10L}}};
                    struct S0 l_934 = {4294967287UL,0x4B97321BE5EDD539L,0x5F4F312CDB18CF5FL,0x71AC1FD3L,0x495C3131L,0xA781CD055A01DDF4L,0L,1UL,0x2154EE80L};/* VOLATILE GLOBAL l_934 */
                    int64_t *l_936 = &l_934.f1;
                    int64_t **l_935 = &l_936;
                    int64_t **l_937 = &l_936;
                    int i, j, k;
                    for (l_906 = 0; (l_906 >= (-4)); l_906 = safe_sub_func_int16_t_s_s(l_906, 8))
                    { /* block id: 480 */
                        int32_t l_910 = (-2L);
                        int32_t *l_909 = &l_910;
                        l_909 = (void*)0;
                    }
                    --l_912;
                    if (l_915[4][6][0])
                    { /* block id: 484 */
                        int32_t l_916 = 4L;
                        int8_t l_917 = 0x5AL;
                        VECTOR(int8_t, 4) l_918 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 4L), 4L);
                        int64_t l_919[2][10] = {{0x68D5AB4C4B3F9440L,0x68D5AB4C4B3F9440L,0x568B363E52847331L,(-4L),0x609B08DAF22E2DD9L,(-4L),0x568B363E52847331L,0x68D5AB4C4B3F9440L,0x68D5AB4C4B3F9440L,0x568B363E52847331L},{0x68D5AB4C4B3F9440L,0x68D5AB4C4B3F9440L,0x568B363E52847331L,(-4L),0x609B08DAF22E2DD9L,(-4L),0x568B363E52847331L,0x68D5AB4C4B3F9440L,0x68D5AB4C4B3F9440L,0x568B363E52847331L}};
                        uint64_t l_920[10] = {2UL,0x9ACB9AD81240C5C7L,2UL,2UL,0x9ACB9AD81240C5C7L,2UL,2UL,0x9ACB9AD81240C5C7L,2UL,2UL};
                        int i, j;
                        l_911 = l_916;
                        l_906 = 0x5E223A96L;
                        l_920[9] = ((l_917 , ((VECTOR(int8_t, 4))(l_918.xzxw)).z) , (l_911 ^= l_919[0][1]));
                    }
                    else
                    { /* block id: 489 */
                        uint32_t l_921 = 4294967295UL;
                        VECTOR(int32_t, 2) l_922 = (VECTOR(int32_t, 2))(1L, 1L);
                        uint64_t l_923 = 0UL;
                        struct S0 l_924 = {0x4DA4FEA6L,0x4EEEB8E3B8B73BD2L,0x261CDC8E656BBE6FL,-8L,0x1F296810L,0x7072A4EC6BE8CCE6L,0x4EF4D46EL,0UL,1UL};/* VOLATILE GLOBAL l_924 */
                        int32_t l_925 = 1L;
                        VECTOR(uint64_t, 2) l_926 = (VECTOR(uint64_t, 2))(1UL, 0x27F95BCA10E27BF8L);
                        int32_t l_927[5][2][8] = {{{(-1L),(-1L),0x040568AEL,8L,0x19DC4232L,(-1L),4L,0x040568AEL},{(-1L),(-1L),0x040568AEL,8L,0x19DC4232L,(-1L),4L,0x040568AEL}},{{(-1L),(-1L),0x040568AEL,8L,0x19DC4232L,(-1L),4L,0x040568AEL},{(-1L),(-1L),0x040568AEL,8L,0x19DC4232L,(-1L),4L,0x040568AEL}},{{(-1L),(-1L),0x040568AEL,8L,0x19DC4232L,(-1L),4L,0x040568AEL},{(-1L),(-1L),0x040568AEL,8L,0x19DC4232L,(-1L),4L,0x040568AEL}},{{(-1L),(-1L),0x040568AEL,8L,0x19DC4232L,(-1L),4L,0x040568AEL},{(-1L),(-1L),0x040568AEL,8L,0x19DC4232L,(-1L),4L,0x040568AEL}},{{(-1L),(-1L),0x040568AEL,8L,0x19DC4232L,(-1L),4L,0x040568AEL},{(-1L),(-1L),0x040568AEL,8L,0x19DC4232L,(-1L),4L,0x040568AEL}}};
                        VECTOR(int64_t, 8) l_928 = (VECTOR(int64_t, 8))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, (-1L)), (-1L)), (-1L), 2L, (-1L));
                        uint32_t l_929[6][9][2];
                        int8_t l_930 = 8L;
                        uint32_t l_931 = 4294967286UL;
                        int32_t l_932 = 0x7B7AD077L;
                        struct S0 *l_933 = &l_924;
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 9; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_929[i][j][k] = 0xEAD3CB74L;
                            }
                        }
                        l_933 = ((l_932 = ((((l_923 = (l_921 , ((VECTOR(int32_t, 4))(l_922.yxyx)).w)) , l_924) , (l_925 , (((VECTOR(uint64_t, 8))(l_926.xxxyxyyy)).s1 , (((l_905[0][3] = 65535UL) , (l_902 = l_927[2][0][6])) , (l_911 = ((((VECTOR(int64_t, 4))(l_928.s1772)).y , l_929[4][0][1]) , (l_930 , 0L))))))) , l_931)) , (void*)0);
                    }
                    l_937 = (l_935 = (l_934 , (void*)0));
                }
                else
                { /* block id: 499 */
                    int32_t l_938 = (-2L);
                    uint32_t l_959 = 0xFD091596L;
                    uint32_t l_960 = 9UL;
                    VECTOR(uint16_t, 16) l_961 = (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0xA50DL), 0xA50DL), 0xA50DL, 6UL, 0xA50DL, (VECTOR(uint16_t, 2))(6UL, 0xA50DL), (VECTOR(uint16_t, 2))(6UL, 0xA50DL), 6UL, 0xA50DL, 6UL, 0xA50DL);
                    struct S0 l_962 = {0xF4882922L,0x23BC9BE6822926F5L,0x4BC631229CD015CDL,0x7464B6B8L,0x461A22CDL,2UL,0x607B2695L,1UL,0xF67389DDL};/* VOLATILE GLOBAL l_962 */
                    int64_t l_963 = 0L;
                    VECTOR(int8_t, 4) l_964 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x3CL), 0x3CL);
                    VECTOR(int32_t, 8) l_965 = (VECTOR(int32_t, 8))(0x4CD876E4L, (VECTOR(int32_t, 4))(0x4CD876E4L, (VECTOR(int32_t, 2))(0x4CD876E4L, 2L), 2L), 2L, 0x4CD876E4L, 2L);
                    int i;
                    for (l_938 = 0; (l_938 != 20); l_938++)
                    { /* block id: 502 */
                        int32_t l_941 = 5L;
                        int64_t l_942 = 0L;
                        uint32_t l_943 = 1UL;
                        l_941 |= 0x6CD4F300L;
                        l_943 |= l_942;
                    }
                    for (l_938 = 0; (l_938 == 23); l_938 = safe_add_func_uint16_t_u_u(l_938, 6))
                    { /* block id: 508 */
                        struct S0 l_946 = {3UL,0x6E983D65EB3D24C4L,0x1AC21205D7A5AC5CL,-1L,0L,0x670ABF5610FE92F6L,0x7620C55FL,0UL,0xEDB0FF6EL};/* VOLATILE GLOBAL l_946 */
                        struct S0 l_947 = {1UL,-1L,-1L,0L,2L,0x8F8694FB45D86052L,0x6222EC17L,0UL,0x4BCCA59EL};/* VOLATILE GLOBAL l_947 */
                        uint16_t l_948 = 6UL;
                        int16_t l_951 = 0L;
                        int32_t l_952 = 1L;
                        uint32_t l_953 = 4294967295UL;
                        uint64_t l_954 = 0UL;
                        int64_t l_955 = (-1L);
                        uint8_t l_956 = 255UL;
                        int32_t l_957 = 1L;
                        uint32_t l_958 = 4294967287UL;
                        l_947 = l_946;
                        l_948--;
                        l_956 = ((l_952 = l_951) , ((l_954 ^= l_953) , l_955));
                        l_958 |= l_957;
                    }
                    if ((((VECTOR(int8_t, 16))(l_959, 9L, l_960, 0x10L, 1L, ((l_961.s3 , l_962) , l_963), (-1L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x29L, 0x72L)))), 0L, 8L, 0L, ((VECTOR(int8_t, 2))(l_964.zy)), 6L, 0x7AL)).sd , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_965.s7414476705521133)).hi)).s2))
                    { /* block id: 516 */
                        VECTOR(int32_t, 4) l_966 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3F9C3EFFL), 0x3F9C3EFFL);
                        VECTOR(int16_t, 2) l_967 = (VECTOR(int16_t, 2))(0L, 0x20F9L);
                        VECTOR(int32_t, 16) l_968 = (VECTOR(int32_t, 16))(0x1112634DL, (VECTOR(int32_t, 4))(0x1112634DL, (VECTOR(int32_t, 2))(0x1112634DL, 0x2FB9C3B8L), 0x2FB9C3B8L), 0x2FB9C3B8L, 0x1112634DL, 0x2FB9C3B8L, (VECTOR(int32_t, 2))(0x1112634DL, 0x2FB9C3B8L), (VECTOR(int32_t, 2))(0x1112634DL, 0x2FB9C3B8L), 0x1112634DL, 0x2FB9C3B8L, 0x1112634DL, 0x2FB9C3B8L);
                        VECTOR(int32_t, 16) l_969 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                        VECTOR(int32_t, 16) l_970 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                        VECTOR(int32_t, 8) l_971 = (VECTOR(int32_t, 8))(0x09CB4CACL, (VECTOR(int32_t, 4))(0x09CB4CACL, (VECTOR(int32_t, 2))(0x09CB4CACL, 0x790AF2B7L), 0x790AF2B7L), 0x790AF2B7L, 0x09CB4CACL, 0x790AF2B7L);
                        VECTOR(int32_t, 8) l_972 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                        VECTOR(int32_t, 16) l_973 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-2L)), (-2L)), (-2L), 8L, (-2L), (VECTOR(int32_t, 2))(8L, (-2L)), (VECTOR(int32_t, 2))(8L, (-2L)), 8L, (-2L), 8L, (-2L));
                        uint32_t l_974 = 0x31A4C062L;
                        int64_t l_975 = 0x46FE1ECDF209AE69L;
                        uint32_t l_976 = 0x56693DD1L;
                        uint8_t l_979 = 0x7DL;
                        int i;
                        l_965.s6 |= l_966.z;
                        l_974 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(0L, 1L, 0x2BE2D148L, (((VECTOR(int16_t, 4))(l_967.yyyy)).w , ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_968.s51a0fd12)), 0x016C154BL, 5L, ((VECTOR(int32_t, 2))(l_969.s74)), ((VECTOR(int32_t, 2))(l_970.sd1)), 0x7441E160L, 8L)).odd, ((VECTOR(int32_t, 16))(l_971.s7360756710336520)).even, ((VECTOR(int32_t, 4))(l_972.s2150)).wxwyyzyx))).s7), 0L, (l_938 = (-1L)), ((VECTOR(int32_t, 8))(0x56286551L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_973.s046e)))), 0L, 1L, (-3L))), 7L, 0x2D5646F4L)).s429c))))).w;
                        l_976--;
                        l_979++;
                    }
                    else
                    { /* block id: 522 */
                        uint32_t l_982 = 4294967295UL;
                        int32_t l_983 = 0x1548B8ACL;
                        l_983 ^= l_982;
                    }
                }
                unsigned int result = 0;
                result += l_902;
                int l_905_i0, l_905_i1;
                for (l_905_i0 = 0; l_905_i0 < 1; l_905_i0++) {
                    for (l_905_i1 = 0; l_905_i1 < 7; l_905_i1++) {
                        result += l_905[l_905_i0][l_905_i1];
                    }
                }
                atomic_add(&p_1537->l_special_values[7], result);
            }
            else
            { /* block id: 526 */
                (1 + 1);
            }
            if ((safe_rshift_func_int8_t_s_u(((*p_1537->g_34) = ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_986.yyyx)).odd)), 1L, 0x7FL)), ((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1537->g_987.s0e)), 0x37L, 0x4CL)).wxwyzzzwzwyyzxww, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(0L, ((l_1010 ^= (safe_lshift_func_uint16_t_u_s((((safe_rshift_func_uint8_t_u_u(p_29, 4)) && (safe_sub_func_int64_t_s_s(((safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x5547E0A3L, 1UL)), 0x1ABD89AAL, 0xC8EE6FF3L)).w)) >= (*p_28)), ((((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(0x137FC95CL, 1L)), ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((-1L), 0L, 0x4430316EL, (-1L), (p_27 , p_29), 0x7E5D01AAL, (-1L), ((VECTOR(int32_t, 2))(l_995.s13)), 0x6CFCED27L, 0x53D0BD2AL, 0x4FBC7C1EL, 0x3F0E30A2L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))((safe_div_func_uint64_t_u_u(p_1537->g_166.f1, (safe_sub_func_int8_t_s_s(((p_1537->g_1000[3] , ((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((~(safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(0x25D4L, 0x46A2L)).xyxx, ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 4))(p_1537->g_1007.xyyy)).xyxxzwyy, (int16_t)(((void*)0 == &p_1537->g_333) >= 0xF8929F40L), (int16_t)l_1008))).even))).z, 10))), 0)) , GROUP_DIVERGE(0, 1)), l_995.s0)) == p_1537->g_630[0].f5)) , (*p_1537->g_34)), p_1537->g_446.z)))), ((VECTOR(int32_t, 2))(0L)), 0L, (-7L), ((VECTOR(int32_t, 4))(2L)), p_30, 0x63ADA434L, (*p_1537->g_246), ((VECTOR(int32_t, 4))((-2L))))).s895c, ((VECTOR(int32_t, 4))(0x1063CCEEL))))).hi)), 0x6FEE3239L)))).lo, ((VECTOR(int32_t, 8))(0x7A7DE024L))))).s12))), p_1537->g_241.s7, ((VECTOR(int32_t, 8))(0x656AC421L)), ((VECTOR(int32_t, 4))(1L)))).sc , (void*)0) != l_1009[0])))) == 0x7426L), 11))) & 0x192625CDL), l_995.s6, 0x49L, 0x46L, ((VECTOR(int8_t, 2))(0x6BL)), 0x4CL)).s66)), ((VECTOR(int8_t, 2))((-1L)))))).yxxy)).wywzzyxyxxzwyzwx))).s5058))).z), 3)))
            { /* block id: 531 */
                uint32_t l_1015 = 0x9EDBA4E2L;
                for (p_29 = (-30); (p_29 == 20); p_29 = safe_add_func_uint8_t_u_u(p_29, 8))
                { /* block id: 534 */
                    for (p_1537->g_566.f7 = 0; (p_1537->g_566.f7 < 4); p_1537->g_566.f7 = safe_add_func_int8_t_s_s(p_1537->g_566.f7, 1))
                    { /* block id: 537 */
                        if (p_27)
                            break;
                        (*l_663) |= l_1015;
                    }
                }
            }
            else
            { /* block id: 542 */
                int32_t l_1016[7][6][2] = {{{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L}},{{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L}},{{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L}},{{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L}},{{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L}},{{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L}},{{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L},{0x78A84926L,0x78A84926L}}};
                int i, j, k;
                l_1017[2]++;
            }
            (*l_663) = (safe_mod_func_uint32_t_u_u(p_27, (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s(l_1008, ((safe_sub_func_int32_t_s_s((((((l_995.s7 = (safe_div_func_int32_t_s_s(p_27, 0x5B0B715AL))) >= ((safe_add_func_int8_t_s_s((((func_234(l_165, (safe_unary_minus_func_uint32_t_u(p_1537->g_248.f0)), (safe_rshift_func_uint8_t_u_u(0xD5L, ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(p_1537->g_1038.s76)), ((VECTOR(uint8_t, 16))(l_1039.xxxxxyxyyxyyxyyx)).s23, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(p_1537->g_1040.s827abd36bebec069)).s474d)), l_1017[2], ((VECTOR(uint8_t, 2))(0xD1L, 0x27L)), 0xD3L)).s20))).lo)), (0x77L <= GROUP_DIVERGE(0, 1)), &p_1537->g_230, p_1537) , 0x0F2CL) > l_1017[2]) != 0x0BL), p_27)) < l_1039.y)) != l_1017[1]) & 0x79363837L) , (*p_1537->g_182)), p_1537->g_366[1])) || 0xBBCCL))), 1)))), p_1537->g_416[1][4].f5))));
        }
    }
    return &p_1537->g_35;
}


/* ------------------------------------------ */
/* 
 * reads : p_1537->g_164.f3 p_1537->g_182 p_1537->g_183
 * writes: p_1537->g_164.f3 p_1537->g_183
 */
int32_t * func_150(uint16_t  p_151, uint32_t  p_152, uint16_t  p_153, int16_t ** p_154, struct S1 * p_1537)
{ /* block id: 102 */
    uint32_t l_181 = 2UL;
    VECTOR(uint32_t, 4) l_187 = (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0UL), 0UL);
    VECTOR(uint8_t, 2) l_192 = (VECTOR(uint8_t, 2))(255UL, 0xEEL);
    int8_t *l_640 = &p_1537->g_35;
    int32_t l_641 = 0x5AB3AFDEL;
    int32_t *l_642 = &l_641;
    int32_t *l_643 = &l_641;
    int32_t *l_644 = (void*)0;
    int i;
    for (p_1537->g_164.f3 = 0; (p_1537->g_164.f3 <= 24); p_1537->g_164.f3 = safe_add_func_uint16_t_u_u(p_1537->g_164.f3, 5))
    { /* block id: 105 */
        uint16_t l_184 = 0x940BL;
        uint64_t *l_195 = &p_1537->g_196[4];
        int32_t l_197 = (-1L);
        uint32_t *l_198 = &l_181;
        uint8_t *l_638 = &p_1537->g_494.f7;
        int8_t **l_639 = &p_1537->g_34;
        if (p_153)
            break;
        (*p_1537->g_182) |= l_181;
        l_641 ^= (l_184 , (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(l_187.wxwzyxwx)).s3, (((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_192.xy)), GROUP_DIVERGE(0, 1), 0x17L, (((*l_639) = ((safe_lshift_func_int8_t_s_u((func_10(((*l_195) = l_184), p_1537) == ((*l_198)++)), ((func_201(p_153, p_1537) , GROUP_DIVERGE(2, 1)) <= ((l_192.x , ((((safe_sub_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((p_1537->g_366[1] = l_187.z), 0x32DAL)) <= ((safe_unary_minus_func_uint16_t_u(p_151)) > l_192.y)), p_1537->g_327.f7)) , l_638) != p_1537->g_34) , (-6L))) | 0x06EFEAA6L)))) , l_638)) != l_640), l_184, 255UL, ((VECTOR(uint8_t, 4))(0xA1L)), ((VECTOR(uint8_t, 4))(0x08L)), 0x18L)).sa, 2)), 4)) == 0x42F85AF2L) && p_152))));
    }
    return l_644;
}


/* ------------------------------------------ */
/* 
 * reads : p_1537->g_166.f7 p_1537->g_166.f6 p_1537->g_630
 * writes: p_1537->g_166.f7 p_1537->g_166.f6
 */
struct S0  func_201(uint8_t  p_202, struct S1 * p_1537)
{ /* block id: 110 */
    int16_t l_211 = (-1L);
    int32_t l_212 = 7L;
    int32_t l_213 = 0x709860C6L;
    int32_t l_214 = 0x26F1CBDCL;
    int32_t l_215 = 0x6C0A3C0FL;
    int32_t l_216 = 1L;
    int32_t l_217 = (-6L);
    int32_t **l_231 = &p_1537->g_230;
    int16_t **l_273 = (void*)0;
    struct S0 *l_277[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    uint32_t l_280 = 0x541B0275L;
    int8_t *l_297[1][9][9] = {{{(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,&p_1537->g_35,(void*)0,&p_1537->g_35},{(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,&p_1537->g_35,(void*)0,&p_1537->g_35},{(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,&p_1537->g_35,(void*)0,&p_1537->g_35},{(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,&p_1537->g_35,(void*)0,&p_1537->g_35},{(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,&p_1537->g_35,(void*)0,&p_1537->g_35},{(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,&p_1537->g_35,(void*)0,&p_1537->g_35},{(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,&p_1537->g_35,(void*)0,&p_1537->g_35},{(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,&p_1537->g_35,(void*)0,&p_1537->g_35},{(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,(void*)0,&p_1537->g_35,&p_1537->g_35,(void*)0,&p_1537->g_35}}};
    VECTOR(int8_t, 4) l_305 = (VECTOR(int8_t, 4))(0x16L, (VECTOR(int8_t, 2))(0x16L, 0x69L), 0x69L);
    int32_t *l_318[8][10][3] = {{{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215}},{{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215}},{{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215}},{{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215}},{{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215}},{{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215}},{{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215}},{{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215},{&l_215,(void*)0,&l_215}}};
    int64_t *l_346 = &p_1537->g_166.f1;
    VECTOR(int8_t, 2) l_360 = (VECTOR(int8_t, 2))(0x77L, 1L);
    VECTOR(int8_t, 4) l_468 = (VECTOR(int8_t, 4))(0x17L, (VECTOR(int8_t, 2))(0x17L, 0x05L), 0x05L);
    VECTOR(int64_t, 2) l_511 = (VECTOR(int64_t, 2))(0x6237CF20034D2861L, 0x3E21C9C50A01EF59L);
    uint8_t *l_515 = (void*)0;
    uint8_t **l_514 = &l_515;
    VECTOR(uint8_t, 2) l_583 = (VECTOR(uint8_t, 2))(0x3AL, 0xF4L);
    int32_t l_599 = (-7L);
    int i, j, k;
    for (p_1537->g_166.f7 = (-10); (p_1537->g_166.f7 != 38); p_1537->g_166.f7 = safe_add_func_int64_t_s_s(p_1537->g_166.f7, 1))
    { /* block id: 113 */
        int32_t *l_205 = &p_1537->g_183;
        int32_t *l_206 = (void*)0;
        int32_t *l_207 = &p_1537->g_183;
        int32_t *l_208 = &p_1537->g_183;
        int32_t *l_209 = &p_1537->g_183;
        int32_t *l_210[2][4] = {{&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183},{&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183}};
        uint32_t l_218 = 4294967288UL;
        int i, j;
        ++l_218;
        if (p_202)
            continue;
    }
    for (p_1537->g_166.f6 = 0; (p_1537->g_166.f6 <= 15); ++p_1537->g_166.f6)
    { /* block id: 119 */
        int32_t l_223[5][3][2] = {{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}}};
        int8_t l_281[10];
        int16_t l_298 = 0x1865L;
        uint8_t *l_308[6][3] = {{&p_1537->g_166.f7,(void*)0,&p_1537->g_166.f7},{&p_1537->g_166.f7,(void*)0,&p_1537->g_166.f7},{&p_1537->g_166.f7,(void*)0,&p_1537->g_166.f7},{&p_1537->g_166.f7,(void*)0,&p_1537->g_166.f7},{&p_1537->g_166.f7,(void*)0,&p_1537->g_166.f7},{&p_1537->g_166.f7,(void*)0,&p_1537->g_166.f7}};
        int64_t *l_309 = (void*)0;
        int64_t **l_310 = &l_309;
        VECTOR(uint8_t, 4) l_316 = (VECTOR(uint8_t, 4))(0xDFL, (VECTOR(uint8_t, 2))(0xDFL, 255UL), 255UL);
        int32_t l_334 = (-1L);
        struct S0 *l_354 = &p_1537->g_164;
        VECTOR(int64_t, 16) l_364 = (VECTOR(int64_t, 16))(0x329C04EB5AAD7CB8L, (VECTOR(int64_t, 4))(0x329C04EB5AAD7CB8L, (VECTOR(int64_t, 2))(0x329C04EB5AAD7CB8L, 0L), 0L), 0L, 0x329C04EB5AAD7CB8L, 0L, (VECTOR(int64_t, 2))(0x329C04EB5AAD7CB8L, 0L), (VECTOR(int64_t, 2))(0x329C04EB5AAD7CB8L, 0L), 0x329C04EB5AAD7CB8L, 0L, 0x329C04EB5AAD7CB8L, 0L);
        VECTOR(int64_t, 16) l_393 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x2C122325088D0563L), 0x2C122325088D0563L), 0x2C122325088D0563L, 1L, 0x2C122325088D0563L, (VECTOR(int64_t, 2))(1L, 0x2C122325088D0563L), (VECTOR(int64_t, 2))(1L, 0x2C122325088D0563L), 1L, 0x2C122325088D0563L, 1L, 0x2C122325088D0563L);
        uint64_t l_465[2][1];
        uint64_t l_598 = 0UL;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_281[i] = 0x6CL;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_465[i][j] = 0xB678B7F9CC394D7FL;
        }
        if (l_223[1][1][1])
            break;
    }
    return p_1537->g_630[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1537->g_164.f0 p_1537->g_241 p_1537->g_243 p_1537->g_246 p_1537->g_164 p_1537->g_183
 * writes: p_1537->g_243 p_1537->g_183 p_1537->g_248
 */
int32_t  func_224(int32_t ** p_225, int32_t  p_226, int32_t ** p_227, uint32_t  p_228, struct S1 * p_1537)
{ /* block id: 121 */
    int32_t l_240 = 0x47DCFAD3L;
    uint32_t *l_242[5];
    int32_t l_244 = 0x41B177A2L;
    struct S0 *l_247 = &p_1537->g_248;
    int i;
    for (i = 0; i < 5; i++)
        l_242[i] = &p_1537->g_243;
    if ((atomic_inc(&p_1537->l_atomic_input[12]) == 8))
    { /* block id: 123 */
        struct S0 l_232 = {1UL,4L,0L,1L,1L,0xBCC67CEFE5D314C6L,0x78A72ED0L,0xA0L,4294967295UL};/* VOLATILE GLOBAL l_232 */
        struct S0 l_233 = {0xDE78825FL,0x558DB3B0995512F6L,0x2CA21FA9E6380777L,0L,0x2FB5A596L,0x84EBD323E343D0A1L,0x4710281FL,1UL,0x01E21867L};/* VOLATILE GLOBAL l_233 */
        l_233 = l_232;
        unsigned int result = 0;
        result += l_232.f0;
        result += l_232.f1;
        result += l_232.f2;
        result += l_232.f3;
        result += l_232.f4;
        result += l_232.f5;
        result += l_232.f6;
        result += l_232.f7;
        result += l_232.f8;
        result += l_233.f0;
        result += l_233.f1;
        result += l_233.f2;
        result += l_233.f3;
        result += l_233.f4;
        result += l_233.f5;
        result += l_233.f6;
        result += l_233.f7;
        result += l_233.f8;
        atomic_add(&p_1537->l_special_values[12], result);
    }
    else
    { /* block id: 125 */
        (1 + 1);
    }
    (*l_247) = func_234(&p_1537->g_164, ((!0x01L) , l_240), (p_1537->g_164.f0 < (p_1537->g_243 ^= ((0x3F09B2C3D9B55EE1L > 0x1C71C74B5333EBFEL) | ((0x593CD7597B5B3C7AL > p_226) , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_1537->g_241.sd9)).yyyx)).z)))), l_244, p_227, p_1537);
    return (*p_1537->g_246);
}


/* ------------------------------------------ */
/* 
 * reads : p_1537->g_246 p_1537->g_164 p_1537->g_166 p_1537->g_359
 * writes: p_1537->g_183
 */
struct S0  func_234(struct S0 * p_235, int32_t  p_236, uint64_t  p_237, int64_t  p_238, int32_t ** p_239, struct S1 * p_1537)
{ /* block id: 129 */
    int32_t l_245 = 0x360831A3L;
    (*p_1537->g_246) = l_245;
    return (*p_235);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[18];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 18; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[18];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 18; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[12];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 12; i++)
            l_comm_values[i] = 1;
    struct S1 c_1538;
    struct S1* p_1537 = &c_1538;
    struct S1 c_1539 = {
        0x0D7D2A7E9F21C9B6L, // p_1537->g_14
        1L, // p_1537->g_33
        1L, // p_1537->g_35
        &p_1537->g_35, // p_1537->g_34
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL), // p_1537->g_157
        {0x01ECD67BL,0x398DE55A139966ABL,1L,-3L,8L,4UL,0x5AC7D607L,0xDEL,0x0926870BL}, // p_1537->g_164
        {0xDFFD33DCL,0x6FFE3AE467651C14L,-6L,0x131955D0L,0x0CB3F817L,2UL,4L,0x15L,0UL}, // p_1537->g_166
        {&p_1537->g_166.f4,&p_1537->g_166.f4,&p_1537->g_166.f4,&p_1537->g_166.f4,&p_1537->g_166.f4,&p_1537->g_166.f4,&p_1537->g_166.f4,&p_1537->g_166.f4,&p_1537->g_166.f4,&p_1537->g_166.f4}, // p_1537->g_176
        1L, // p_1537->g_183
        &p_1537->g_183, // p_1537->g_182
        {0x81EC1E3B16488FA2L,0x81EC1E3B16488FA2L,0x81EC1E3B16488FA2L,0x81EC1E3B16488FA2L,0x81EC1E3B16488FA2L}, // p_1537->g_196
        (void*)0, // p_1537->g_230
        {&p_1537->g_230,&p_1537->g_230,&p_1537->g_230,&p_1537->g_230,&p_1537->g_230}, // p_1537->g_229
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x40A989A4C346C34DL), 0x40A989A4C346C34DL), 0x40A989A4C346C34DL, 0L, 0x40A989A4C346C34DL, (VECTOR(int64_t, 2))(0L, 0x40A989A4C346C34DL), (VECTOR(int64_t, 2))(0L, 0x40A989A4C346C34DL), 0L, 0x40A989A4C346C34DL, 0L, 0x40A989A4C346C34DL), // p_1537->g_241
        4294967290UL, // p_1537->g_243
        &p_1537->g_183, // p_1537->g_246
        {0UL,1L,0L,0L,9L,18446744073709551615UL,0L,255UL,0x1271EE75L}, // p_1537->g_248
        (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0x59L), 0x59L), // p_1537->g_257
        0xB146499EL, // p_1537->g_265
        &p_1537->g_33, // p_1537->g_272
        &p_1537->g_272, // p_1537->g_271
        {1UL,-1L,1L,7L,0x44C8BBC0L,18446744073709551608UL,0x4662EF9FL,0xF2L,0x4D37D37DL}, // p_1537->g_279
        &p_1537->g_279, // p_1537->g_278
        {&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183,&p_1537->g_183}, // p_1537->g_283
        &p_1537->g_183, // p_1537->g_284
        0x43F2L, // p_1537->g_304
        {1UL,0x3FC8E0ECB7D06C7DL,1L,0x0EC34155L,1L,18446744073709551615UL,0x3C1E5B77L,6UL,9UL}, // p_1537->g_327
        {&p_1537->g_327,&p_1537->g_327,&p_1537->g_327}, // p_1537->g_326
        0x45B6BA929C3598E5L, // p_1537->g_332
        5UL, // p_1537->g_333
        (void*)0, // p_1537->g_345
        {8UL,0x4A0DFCC948DEA454L,9L,0x0E0EAA6FL,3L,0x93E394B79F2A6C5EL,9L,247UL,4294967292UL}, // p_1537->g_359
        {3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL}, // p_1537->g_366
        (VECTOR(int8_t, 4))(0x35L, (VECTOR(int8_t, 2))(0x35L, 0x62L), 0x62L), // p_1537->g_373
        (VECTOR(uint8_t, 2))(3UL, 0x4EL), // p_1537->g_376
        (VECTOR(int8_t, 2))((-1L), 1L), // p_1537->g_382
        (VECTOR(int8_t, 4))(0x4FL, (VECTOR(int8_t, 2))(0x4FL, 0x7DL), 0x7DL), // p_1537->g_394
        (VECTOR(uint8_t, 2))(0x6EL, 0xC0L), // p_1537->g_395
        (void*)0, // p_1537->g_407
        &p_1537->g_271, // p_1537->g_409
        {{{2UL,2L,0x4FED93C9B7DA3E7CL,0x0ECF267CL,1L,18446744073709551615UL,0L,0x10L,9UL},{2UL,2L,0x4FED93C9B7DA3E7CL,0x0ECF267CL,1L,18446744073709551615UL,0L,0x10L,9UL},{2UL,2L,0x4FED93C9B7DA3E7CL,0x0ECF267CL,1L,18446744073709551615UL,0L,0x10L,9UL},{2UL,2L,0x4FED93C9B7DA3E7CL,0x0ECF267CL,1L,18446744073709551615UL,0L,0x10L,9UL},{2UL,2L,0x4FED93C9B7DA3E7CL,0x0ECF267CL,1L,18446744073709551615UL,0L,0x10L,9UL},{2UL,2L,0x4FED93C9B7DA3E7CL,0x0ECF267CL,1L,18446744073709551615UL,0L,0x10L,9UL}},{{2UL,2L,0x4FED93C9B7DA3E7CL,0x0ECF267CL,1L,18446744073709551615UL,0L,0x10L,9UL},{2UL,2L,0x4FED93C9B7DA3E7CL,0x0ECF267CL,1L,18446744073709551615UL,0L,0x10L,9UL},{2UL,2L,0x4FED93C9B7DA3E7CL,0x0ECF267CL,1L,18446744073709551615UL,0L,0x10L,9UL},{2UL,2L,0x4FED93C9B7DA3E7CL,0x0ECF267CL,1L,18446744073709551615UL,0L,0x10L,9UL},{2UL,2L,0x4FED93C9B7DA3E7CL,0x0ECF267CL,1L,18446744073709551615UL,0L,0x10L,9UL},{2UL,2L,0x4FED93C9B7DA3E7CL,0x0ECF267CL,1L,18446744073709551615UL,0L,0x10L,9UL}}}, // p_1537->g_416
        (VECTOR(uint32_t, 16))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 0x80BFA922L), 0x80BFA922L), 0x80BFA922L, 7UL, 0x80BFA922L, (VECTOR(uint32_t, 2))(7UL, 0x80BFA922L), (VECTOR(uint32_t, 2))(7UL, 0x80BFA922L), 7UL, 0x80BFA922L, 7UL, 0x80BFA922L), // p_1537->g_429
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x22L), 0x22L), 0x22L, (-1L), 0x22L), // p_1537->g_436
        (VECTOR(int8_t, 4))(0x27L, (VECTOR(int8_t, 2))(0x27L, 0x7CL), 0x7CL), // p_1537->g_438
        (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, 8L), 8L), // p_1537->g_446
        {4294967288UL,6L,0x21C313AE0275B6B0L,0x3C4F4953L,6L,1UL,0x731CF2AFL,0x43L,4294967295UL}, // p_1537->g_494
        (VECTOR(int16_t, 4))(0x27ABL, (VECTOR(int16_t, 2))(0x27ABL, 0L), 0L), // p_1537->g_505
        (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-3L)), (-3L)), // p_1537->g_512
        (VECTOR(uint64_t, 4))(0xE3DBD8ACCC0A1A2EL, (VECTOR(uint64_t, 2))(0xE3DBD8ACCC0A1A2EL, 0xFB117DE1BD8A0667L), 0xFB117DE1BD8A0667L), // p_1537->g_513
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), // p_1537->g_534
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL), // p_1537->g_535
        (VECTOR(int32_t, 16))(0x49FE42AFL, (VECTOR(int32_t, 4))(0x49FE42AFL, (VECTOR(int32_t, 2))(0x49FE42AFL, (-4L)), (-4L)), (-4L), 0x49FE42AFL, (-4L), (VECTOR(int32_t, 2))(0x49FE42AFL, (-4L)), (VECTOR(int32_t, 2))(0x49FE42AFL, (-4L)), 0x49FE42AFL, (-4L), 0x49FE42AFL, (-4L)), // p_1537->g_537
        {5UL,-1L,0L,1L,-6L,5UL,1L,255UL,0x2779504BL}, // p_1537->g_566
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 2UL), 2UL), 2UL, 1UL, 2UL), // p_1537->g_582
        {0xAC075156L,1L,0x6B538BBB495471A3L,-2L,-1L,0UL,-1L,255UL,4294967295UL}, // p_1537->g_600
        {{0xEC32F683L,6L,0x16B0BF7E039D2A1CL,0x69C75B09L,0x37FB04A8L,18446744073709551611UL,7L,253UL,0UL},{1UL,0x46CBB58C459044ABL,-3L,0x0479B50AL,-1L,0x60318504DFEC6DD1L,1L,0x45L,0xFAA70DA3L},{0xEC32F683L,6L,0x16B0BF7E039D2A1CL,0x69C75B09L,0x37FB04A8L,18446744073709551611UL,7L,253UL,0UL},{0xEC32F683L,6L,0x16B0BF7E039D2A1CL,0x69C75B09L,0x37FB04A8L,18446744073709551611UL,7L,253UL,0UL},{1UL,0x46CBB58C459044ABL,-3L,0x0479B50AL,-1L,0x60318504DFEC6DD1L,1L,0x45L,0xFAA70DA3L},{0xEC32F683L,6L,0x16B0BF7E039D2A1CL,0x69C75B09L,0x37FB04A8L,18446744073709551611UL,7L,253UL,0UL},{0xEC32F683L,6L,0x16B0BF7E039D2A1CL,0x69C75B09L,0x37FB04A8L,18446744073709551611UL,7L,253UL,0UL},{1UL,0x46CBB58C459044ABL,-3L,0x0479B50AL,-1L,0x60318504DFEC6DD1L,1L,0x45L,0xFAA70DA3L}}, // p_1537->g_630
        (VECTOR(int8_t, 8))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x5AL), 0x5AL), 0x5AL, (-6L), 0x5AL), // p_1537->g_661
        (VECTOR(int8_t, 2))(0x37L, (-2L)), // p_1537->g_662
        {{{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0}},{{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0}},{{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0}},{{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0}},{{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0}},{{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0}},{{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0}},{{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0}},{{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0},{&p_1537->g_326[2],&p_1537->g_326[2],&p_1537->g_326[0],(void*)0}}}, // p_1537->g_695
        (void*)0, // p_1537->g_696
        (void*)0, // p_1537->g_697
        (VECTOR(int8_t, 16))(0x07L, (VECTOR(int8_t, 4))(0x07L, (VECTOR(int8_t, 2))(0x07L, 0x31L), 0x31L), 0x31L, 0x07L, 0x31L, (VECTOR(int8_t, 2))(0x07L, 0x31L), (VECTOR(int8_t, 2))(0x07L, 0x31L), 0x07L, 0x31L, 0x07L, 0x31L), // p_1537->g_987
        {{0UL,0x4956915B8E826234L,0x0F1E4E8E08F90624L,0x284391E3L,0x3B8D4518L,0UL,0x694574F1L,0UL,4294967293UL},{0UL,0x4956915B8E826234L,0x0F1E4E8E08F90624L,0x284391E3L,0x3B8D4518L,0UL,0x694574F1L,0UL,4294967293UL},{0UL,0x4956915B8E826234L,0x0F1E4E8E08F90624L,0x284391E3L,0x3B8D4518L,0UL,0x694574F1L,0UL,4294967293UL},{0UL,0x4956915B8E826234L,0x0F1E4E8E08F90624L,0x284391E3L,0x3B8D4518L,0UL,0x694574F1L,0UL,4294967293UL}}, // p_1537->g_1000
        (VECTOR(int16_t, 2))(0x0EDFL, 4L), // p_1537->g_1007
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x92L), 0x92L), 0x92L, 255UL, 0x92L, (VECTOR(uint8_t, 2))(255UL, 0x92L), (VECTOR(uint8_t, 2))(255UL, 0x92L), 255UL, 0x92L, 255UL, 0x92L), // p_1537->g_1038
        (VECTOR(uint8_t, 16))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 1UL), 1UL), 1UL, 5UL, 1UL, (VECTOR(uint8_t, 2))(5UL, 1UL), (VECTOR(uint8_t, 2))(5UL, 1UL), 5UL, 1UL, 5UL, 1UL), // p_1537->g_1040
        &p_1537->g_183, // p_1537->g_1042
        &p_1537->g_271, // p_1537->g_1091
        (void*)0, // p_1537->g_1115
        (VECTOR(uint8_t, 2))(0x0BL, 0x37L), // p_1537->g_1136
        &p_1537->g_230, // p_1537->g_1140
        {0x79372920L,0L,0x24A11E2E39E95D74L,0x28A402DDL,1L,18446744073709551615UL,1L,255UL,0x65619F11L}, // p_1537->g_1209
        (VECTOR(uint16_t, 4))(0x6B34L, (VECTOR(uint16_t, 2))(0x6B34L, 0x5C45L), 0x5C45L), // p_1537->g_1256
        {1UL,-1L,-1L,-6L,0x008EE5C3L,6UL,0x1CABC812L,0xA3L,0xE260A862L}, // p_1537->g_1260
        (VECTOR(int16_t, 2))((-1L), 0x34BAL), // p_1537->g_1276
        (VECTOR(uint16_t, 8))(0x8970L, (VECTOR(uint16_t, 4))(0x8970L, (VECTOR(uint16_t, 2))(0x8970L, 6UL), 6UL), 6UL, 0x8970L, 6UL), // p_1537->g_1277
        (VECTOR(uint64_t, 2))(0x0F8A51EABECF4B14L, 0x59FA813866709D67L), // p_1537->g_1286
        (VECTOR(uint32_t, 4))(0xAA0527B7L, (VECTOR(uint32_t, 2))(0xAA0527B7L, 0UL), 0UL), // p_1537->g_1287
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), // p_1537->g_1301
        (VECTOR(uint16_t, 16))(0x167CL, (VECTOR(uint16_t, 4))(0x167CL, (VECTOR(uint16_t, 2))(0x167CL, 0xF4A1L), 0xF4A1L), 0xF4A1L, 0x167CL, 0xF4A1L, (VECTOR(uint16_t, 2))(0x167CL, 0xF4A1L), (VECTOR(uint16_t, 2))(0x167CL, 0xF4A1L), 0x167CL, 0xF4A1L, 0x167CL, 0xF4A1L), // p_1537->g_1304
        (VECTOR(int32_t, 4))(0x7FF0D4CCL, (VECTOR(int32_t, 2))(0x7FF0D4CCL, 0x418F450EL), 0x418F450EL), // p_1537->g_1353
        (VECTOR(int16_t, 16))(0x658CL, (VECTOR(int16_t, 4))(0x658CL, (VECTOR(int16_t, 2))(0x658CL, 0x6093L), 0x6093L), 0x6093L, 0x658CL, 0x6093L, (VECTOR(int16_t, 2))(0x658CL, 0x6093L), (VECTOR(int16_t, 2))(0x658CL, 0x6093L), 0x658CL, 0x6093L, 0x658CL, 0x6093L), // p_1537->g_1398
        {{4294967290UL,0x4C86074F53067A59L,0L,-5L,0x68718C80L,1UL,0x2F78A265L,1UL,0x0735A138L},{4294967290UL,0x4C86074F53067A59L,0L,-5L,0x68718C80L,1UL,0x2F78A265L,1UL,0x0735A138L},{4294967290UL,0x4C86074F53067A59L,0L,-5L,0x68718C80L,1UL,0x2F78A265L,1UL,0x0735A138L},{4294967290UL,0x4C86074F53067A59L,0L,-5L,0x68718C80L,1UL,0x2F78A265L,1UL,0x0735A138L}}, // p_1537->g_1412
        (VECTOR(int64_t, 4))(0x10EDFCAE12C51BD3L, (VECTOR(int64_t, 2))(0x10EDFCAE12C51BD3L, 4L), 4L), // p_1537->g_1413
        (VECTOR(uint32_t, 16))(0x29C8EAD6L, (VECTOR(uint32_t, 4))(0x29C8EAD6L, (VECTOR(uint32_t, 2))(0x29C8EAD6L, 0x8885FEF8L), 0x8885FEF8L), 0x8885FEF8L, 0x29C8EAD6L, 0x8885FEF8L, (VECTOR(uint32_t, 2))(0x29C8EAD6L, 0x8885FEF8L), (VECTOR(uint32_t, 2))(0x29C8EAD6L, 0x8885FEF8L), 0x29C8EAD6L, 0x8885FEF8L, 0x29C8EAD6L, 0x8885FEF8L), // p_1537->g_1428
        1L, // p_1537->g_1536
        0, // p_1537->v_collective
        sequence_input[get_global_id(0)], // p_1537->global_0_offset
        sequence_input[get_global_id(1)], // p_1537->global_1_offset
        sequence_input[get_global_id(2)], // p_1537->global_2_offset
        sequence_input[get_local_id(0)], // p_1537->local_0_offset
        sequence_input[get_local_id(1)], // p_1537->local_1_offset
        sequence_input[get_local_id(2)], // p_1537->local_2_offset
        sequence_input[get_group_id(0)], // p_1537->group_0_offset
        sequence_input[get_group_id(1)], // p_1537->group_1_offset
        sequence_input[get_group_id(2)], // p_1537->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 12)), permutations[0][get_linear_local_id()])), // p_1537->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1538 = c_1539;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1537);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1537->g_14, "p_1537->g_14", print_hash_value);
    transparent_crc(p_1537->g_33, "p_1537->g_33", print_hash_value);
    transparent_crc(p_1537->g_35, "p_1537->g_35", print_hash_value);
    transparent_crc(p_1537->g_157.x, "p_1537->g_157.x", print_hash_value);
    transparent_crc(p_1537->g_157.y, "p_1537->g_157.y", print_hash_value);
    transparent_crc(p_1537->g_157.z, "p_1537->g_157.z", print_hash_value);
    transparent_crc(p_1537->g_157.w, "p_1537->g_157.w", print_hash_value);
    transparent_crc(p_1537->g_164.f0, "p_1537->g_164.f0", print_hash_value);
    transparent_crc(p_1537->g_164.f1, "p_1537->g_164.f1", print_hash_value);
    transparent_crc(p_1537->g_164.f2, "p_1537->g_164.f2", print_hash_value);
    transparent_crc(p_1537->g_164.f3, "p_1537->g_164.f3", print_hash_value);
    transparent_crc(p_1537->g_164.f4, "p_1537->g_164.f4", print_hash_value);
    transparent_crc(p_1537->g_164.f5, "p_1537->g_164.f5", print_hash_value);
    transparent_crc(p_1537->g_164.f6, "p_1537->g_164.f6", print_hash_value);
    transparent_crc(p_1537->g_164.f7, "p_1537->g_164.f7", print_hash_value);
    transparent_crc(p_1537->g_164.f8, "p_1537->g_164.f8", print_hash_value);
    transparent_crc(p_1537->g_166.f0, "p_1537->g_166.f0", print_hash_value);
    transparent_crc(p_1537->g_166.f1, "p_1537->g_166.f1", print_hash_value);
    transparent_crc(p_1537->g_166.f2, "p_1537->g_166.f2", print_hash_value);
    transparent_crc(p_1537->g_166.f3, "p_1537->g_166.f3", print_hash_value);
    transparent_crc(p_1537->g_166.f4, "p_1537->g_166.f4", print_hash_value);
    transparent_crc(p_1537->g_166.f5, "p_1537->g_166.f5", print_hash_value);
    transparent_crc(p_1537->g_166.f6, "p_1537->g_166.f6", print_hash_value);
    transparent_crc(p_1537->g_166.f7, "p_1537->g_166.f7", print_hash_value);
    transparent_crc(p_1537->g_166.f8, "p_1537->g_166.f8", print_hash_value);
    transparent_crc(p_1537->g_183, "p_1537->g_183", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1537->g_196[i], "p_1537->g_196[i]", print_hash_value);

    }
    transparent_crc(p_1537->g_241.s0, "p_1537->g_241.s0", print_hash_value);
    transparent_crc(p_1537->g_241.s1, "p_1537->g_241.s1", print_hash_value);
    transparent_crc(p_1537->g_241.s2, "p_1537->g_241.s2", print_hash_value);
    transparent_crc(p_1537->g_241.s3, "p_1537->g_241.s3", print_hash_value);
    transparent_crc(p_1537->g_241.s4, "p_1537->g_241.s4", print_hash_value);
    transparent_crc(p_1537->g_241.s5, "p_1537->g_241.s5", print_hash_value);
    transparent_crc(p_1537->g_241.s6, "p_1537->g_241.s6", print_hash_value);
    transparent_crc(p_1537->g_241.s7, "p_1537->g_241.s7", print_hash_value);
    transparent_crc(p_1537->g_241.s8, "p_1537->g_241.s8", print_hash_value);
    transparent_crc(p_1537->g_241.s9, "p_1537->g_241.s9", print_hash_value);
    transparent_crc(p_1537->g_241.sa, "p_1537->g_241.sa", print_hash_value);
    transparent_crc(p_1537->g_241.sb, "p_1537->g_241.sb", print_hash_value);
    transparent_crc(p_1537->g_241.sc, "p_1537->g_241.sc", print_hash_value);
    transparent_crc(p_1537->g_241.sd, "p_1537->g_241.sd", print_hash_value);
    transparent_crc(p_1537->g_241.se, "p_1537->g_241.se", print_hash_value);
    transparent_crc(p_1537->g_241.sf, "p_1537->g_241.sf", print_hash_value);
    transparent_crc(p_1537->g_243, "p_1537->g_243", print_hash_value);
    transparent_crc(p_1537->g_248.f0, "p_1537->g_248.f0", print_hash_value);
    transparent_crc(p_1537->g_248.f1, "p_1537->g_248.f1", print_hash_value);
    transparent_crc(p_1537->g_248.f2, "p_1537->g_248.f2", print_hash_value);
    transparent_crc(p_1537->g_248.f3, "p_1537->g_248.f3", print_hash_value);
    transparent_crc(p_1537->g_248.f4, "p_1537->g_248.f4", print_hash_value);
    transparent_crc(p_1537->g_248.f5, "p_1537->g_248.f5", print_hash_value);
    transparent_crc(p_1537->g_248.f6, "p_1537->g_248.f6", print_hash_value);
    transparent_crc(p_1537->g_248.f7, "p_1537->g_248.f7", print_hash_value);
    transparent_crc(p_1537->g_248.f8, "p_1537->g_248.f8", print_hash_value);
    transparent_crc(p_1537->g_257.x, "p_1537->g_257.x", print_hash_value);
    transparent_crc(p_1537->g_257.y, "p_1537->g_257.y", print_hash_value);
    transparent_crc(p_1537->g_257.z, "p_1537->g_257.z", print_hash_value);
    transparent_crc(p_1537->g_257.w, "p_1537->g_257.w", print_hash_value);
    transparent_crc(p_1537->g_265, "p_1537->g_265", print_hash_value);
    transparent_crc(p_1537->g_279.f0, "p_1537->g_279.f0", print_hash_value);
    transparent_crc(p_1537->g_279.f1, "p_1537->g_279.f1", print_hash_value);
    transparent_crc(p_1537->g_279.f2, "p_1537->g_279.f2", print_hash_value);
    transparent_crc(p_1537->g_279.f3, "p_1537->g_279.f3", print_hash_value);
    transparent_crc(p_1537->g_279.f4, "p_1537->g_279.f4", print_hash_value);
    transparent_crc(p_1537->g_279.f5, "p_1537->g_279.f5", print_hash_value);
    transparent_crc(p_1537->g_279.f6, "p_1537->g_279.f6", print_hash_value);
    transparent_crc(p_1537->g_279.f7, "p_1537->g_279.f7", print_hash_value);
    transparent_crc(p_1537->g_279.f8, "p_1537->g_279.f8", print_hash_value);
    transparent_crc(p_1537->g_304, "p_1537->g_304", print_hash_value);
    transparent_crc(p_1537->g_327.f0, "p_1537->g_327.f0", print_hash_value);
    transparent_crc(p_1537->g_327.f1, "p_1537->g_327.f1", print_hash_value);
    transparent_crc(p_1537->g_327.f2, "p_1537->g_327.f2", print_hash_value);
    transparent_crc(p_1537->g_327.f3, "p_1537->g_327.f3", print_hash_value);
    transparent_crc(p_1537->g_327.f4, "p_1537->g_327.f4", print_hash_value);
    transparent_crc(p_1537->g_327.f5, "p_1537->g_327.f5", print_hash_value);
    transparent_crc(p_1537->g_327.f6, "p_1537->g_327.f6", print_hash_value);
    transparent_crc(p_1537->g_327.f7, "p_1537->g_327.f7", print_hash_value);
    transparent_crc(p_1537->g_327.f8, "p_1537->g_327.f8", print_hash_value);
    transparent_crc(p_1537->g_332, "p_1537->g_332", print_hash_value);
    transparent_crc(p_1537->g_333, "p_1537->g_333", print_hash_value);
    transparent_crc(p_1537->g_359.f0, "p_1537->g_359.f0", print_hash_value);
    transparent_crc(p_1537->g_359.f1, "p_1537->g_359.f1", print_hash_value);
    transparent_crc(p_1537->g_359.f2, "p_1537->g_359.f2", print_hash_value);
    transparent_crc(p_1537->g_359.f3, "p_1537->g_359.f3", print_hash_value);
    transparent_crc(p_1537->g_359.f4, "p_1537->g_359.f4", print_hash_value);
    transparent_crc(p_1537->g_359.f5, "p_1537->g_359.f5", print_hash_value);
    transparent_crc(p_1537->g_359.f6, "p_1537->g_359.f6", print_hash_value);
    transparent_crc(p_1537->g_359.f7, "p_1537->g_359.f7", print_hash_value);
    transparent_crc(p_1537->g_359.f8, "p_1537->g_359.f8", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1537->g_366[i], "p_1537->g_366[i]", print_hash_value);

    }
    transparent_crc(p_1537->g_373.x, "p_1537->g_373.x", print_hash_value);
    transparent_crc(p_1537->g_373.y, "p_1537->g_373.y", print_hash_value);
    transparent_crc(p_1537->g_373.z, "p_1537->g_373.z", print_hash_value);
    transparent_crc(p_1537->g_373.w, "p_1537->g_373.w", print_hash_value);
    transparent_crc(p_1537->g_376.x, "p_1537->g_376.x", print_hash_value);
    transparent_crc(p_1537->g_376.y, "p_1537->g_376.y", print_hash_value);
    transparent_crc(p_1537->g_382.x, "p_1537->g_382.x", print_hash_value);
    transparent_crc(p_1537->g_382.y, "p_1537->g_382.y", print_hash_value);
    transparent_crc(p_1537->g_394.x, "p_1537->g_394.x", print_hash_value);
    transparent_crc(p_1537->g_394.y, "p_1537->g_394.y", print_hash_value);
    transparent_crc(p_1537->g_394.z, "p_1537->g_394.z", print_hash_value);
    transparent_crc(p_1537->g_394.w, "p_1537->g_394.w", print_hash_value);
    transparent_crc(p_1537->g_395.x, "p_1537->g_395.x", print_hash_value);
    transparent_crc(p_1537->g_395.y, "p_1537->g_395.y", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1537->g_416[i][j].f0, "p_1537->g_416[i][j].f0", print_hash_value);
            transparent_crc(p_1537->g_416[i][j].f1, "p_1537->g_416[i][j].f1", print_hash_value);
            transparent_crc(p_1537->g_416[i][j].f2, "p_1537->g_416[i][j].f2", print_hash_value);
            transparent_crc(p_1537->g_416[i][j].f3, "p_1537->g_416[i][j].f3", print_hash_value);
            transparent_crc(p_1537->g_416[i][j].f4, "p_1537->g_416[i][j].f4", print_hash_value);
            transparent_crc(p_1537->g_416[i][j].f5, "p_1537->g_416[i][j].f5", print_hash_value);
            transparent_crc(p_1537->g_416[i][j].f6, "p_1537->g_416[i][j].f6", print_hash_value);
            transparent_crc(p_1537->g_416[i][j].f7, "p_1537->g_416[i][j].f7", print_hash_value);
            transparent_crc(p_1537->g_416[i][j].f8, "p_1537->g_416[i][j].f8", print_hash_value);

        }
    }
    transparent_crc(p_1537->g_429.s0, "p_1537->g_429.s0", print_hash_value);
    transparent_crc(p_1537->g_429.s1, "p_1537->g_429.s1", print_hash_value);
    transparent_crc(p_1537->g_429.s2, "p_1537->g_429.s2", print_hash_value);
    transparent_crc(p_1537->g_429.s3, "p_1537->g_429.s3", print_hash_value);
    transparent_crc(p_1537->g_429.s4, "p_1537->g_429.s4", print_hash_value);
    transparent_crc(p_1537->g_429.s5, "p_1537->g_429.s5", print_hash_value);
    transparent_crc(p_1537->g_429.s6, "p_1537->g_429.s6", print_hash_value);
    transparent_crc(p_1537->g_429.s7, "p_1537->g_429.s7", print_hash_value);
    transparent_crc(p_1537->g_429.s8, "p_1537->g_429.s8", print_hash_value);
    transparent_crc(p_1537->g_429.s9, "p_1537->g_429.s9", print_hash_value);
    transparent_crc(p_1537->g_429.sa, "p_1537->g_429.sa", print_hash_value);
    transparent_crc(p_1537->g_429.sb, "p_1537->g_429.sb", print_hash_value);
    transparent_crc(p_1537->g_429.sc, "p_1537->g_429.sc", print_hash_value);
    transparent_crc(p_1537->g_429.sd, "p_1537->g_429.sd", print_hash_value);
    transparent_crc(p_1537->g_429.se, "p_1537->g_429.se", print_hash_value);
    transparent_crc(p_1537->g_429.sf, "p_1537->g_429.sf", print_hash_value);
    transparent_crc(p_1537->g_436.s0, "p_1537->g_436.s0", print_hash_value);
    transparent_crc(p_1537->g_436.s1, "p_1537->g_436.s1", print_hash_value);
    transparent_crc(p_1537->g_436.s2, "p_1537->g_436.s2", print_hash_value);
    transparent_crc(p_1537->g_436.s3, "p_1537->g_436.s3", print_hash_value);
    transparent_crc(p_1537->g_436.s4, "p_1537->g_436.s4", print_hash_value);
    transparent_crc(p_1537->g_436.s5, "p_1537->g_436.s5", print_hash_value);
    transparent_crc(p_1537->g_436.s6, "p_1537->g_436.s6", print_hash_value);
    transparent_crc(p_1537->g_436.s7, "p_1537->g_436.s7", print_hash_value);
    transparent_crc(p_1537->g_438.x, "p_1537->g_438.x", print_hash_value);
    transparent_crc(p_1537->g_438.y, "p_1537->g_438.y", print_hash_value);
    transparent_crc(p_1537->g_438.z, "p_1537->g_438.z", print_hash_value);
    transparent_crc(p_1537->g_438.w, "p_1537->g_438.w", print_hash_value);
    transparent_crc(p_1537->g_446.x, "p_1537->g_446.x", print_hash_value);
    transparent_crc(p_1537->g_446.y, "p_1537->g_446.y", print_hash_value);
    transparent_crc(p_1537->g_446.z, "p_1537->g_446.z", print_hash_value);
    transparent_crc(p_1537->g_446.w, "p_1537->g_446.w", print_hash_value);
    transparent_crc(p_1537->g_494.f0, "p_1537->g_494.f0", print_hash_value);
    transparent_crc(p_1537->g_494.f1, "p_1537->g_494.f1", print_hash_value);
    transparent_crc(p_1537->g_494.f2, "p_1537->g_494.f2", print_hash_value);
    transparent_crc(p_1537->g_494.f3, "p_1537->g_494.f3", print_hash_value);
    transparent_crc(p_1537->g_494.f4, "p_1537->g_494.f4", print_hash_value);
    transparent_crc(p_1537->g_494.f5, "p_1537->g_494.f5", print_hash_value);
    transparent_crc(p_1537->g_494.f6, "p_1537->g_494.f6", print_hash_value);
    transparent_crc(p_1537->g_494.f7, "p_1537->g_494.f7", print_hash_value);
    transparent_crc(p_1537->g_494.f8, "p_1537->g_494.f8", print_hash_value);
    transparent_crc(p_1537->g_505.x, "p_1537->g_505.x", print_hash_value);
    transparent_crc(p_1537->g_505.y, "p_1537->g_505.y", print_hash_value);
    transparent_crc(p_1537->g_505.z, "p_1537->g_505.z", print_hash_value);
    transparent_crc(p_1537->g_505.w, "p_1537->g_505.w", print_hash_value);
    transparent_crc(p_1537->g_512.x, "p_1537->g_512.x", print_hash_value);
    transparent_crc(p_1537->g_512.y, "p_1537->g_512.y", print_hash_value);
    transparent_crc(p_1537->g_512.z, "p_1537->g_512.z", print_hash_value);
    transparent_crc(p_1537->g_512.w, "p_1537->g_512.w", print_hash_value);
    transparent_crc(p_1537->g_513.x, "p_1537->g_513.x", print_hash_value);
    transparent_crc(p_1537->g_513.y, "p_1537->g_513.y", print_hash_value);
    transparent_crc(p_1537->g_513.z, "p_1537->g_513.z", print_hash_value);
    transparent_crc(p_1537->g_513.w, "p_1537->g_513.w", print_hash_value);
    transparent_crc(p_1537->g_534.x, "p_1537->g_534.x", print_hash_value);
    transparent_crc(p_1537->g_534.y, "p_1537->g_534.y", print_hash_value);
    transparent_crc(p_1537->g_534.z, "p_1537->g_534.z", print_hash_value);
    transparent_crc(p_1537->g_534.w, "p_1537->g_534.w", print_hash_value);
    transparent_crc(p_1537->g_535.x, "p_1537->g_535.x", print_hash_value);
    transparent_crc(p_1537->g_535.y, "p_1537->g_535.y", print_hash_value);
    transparent_crc(p_1537->g_535.z, "p_1537->g_535.z", print_hash_value);
    transparent_crc(p_1537->g_535.w, "p_1537->g_535.w", print_hash_value);
    transparent_crc(p_1537->g_537.s0, "p_1537->g_537.s0", print_hash_value);
    transparent_crc(p_1537->g_537.s1, "p_1537->g_537.s1", print_hash_value);
    transparent_crc(p_1537->g_537.s2, "p_1537->g_537.s2", print_hash_value);
    transparent_crc(p_1537->g_537.s3, "p_1537->g_537.s3", print_hash_value);
    transparent_crc(p_1537->g_537.s4, "p_1537->g_537.s4", print_hash_value);
    transparent_crc(p_1537->g_537.s5, "p_1537->g_537.s5", print_hash_value);
    transparent_crc(p_1537->g_537.s6, "p_1537->g_537.s6", print_hash_value);
    transparent_crc(p_1537->g_537.s7, "p_1537->g_537.s7", print_hash_value);
    transparent_crc(p_1537->g_537.s8, "p_1537->g_537.s8", print_hash_value);
    transparent_crc(p_1537->g_537.s9, "p_1537->g_537.s9", print_hash_value);
    transparent_crc(p_1537->g_537.sa, "p_1537->g_537.sa", print_hash_value);
    transparent_crc(p_1537->g_537.sb, "p_1537->g_537.sb", print_hash_value);
    transparent_crc(p_1537->g_537.sc, "p_1537->g_537.sc", print_hash_value);
    transparent_crc(p_1537->g_537.sd, "p_1537->g_537.sd", print_hash_value);
    transparent_crc(p_1537->g_537.se, "p_1537->g_537.se", print_hash_value);
    transparent_crc(p_1537->g_537.sf, "p_1537->g_537.sf", print_hash_value);
    transparent_crc(p_1537->g_566.f0, "p_1537->g_566.f0", print_hash_value);
    transparent_crc(p_1537->g_566.f1, "p_1537->g_566.f1", print_hash_value);
    transparent_crc(p_1537->g_566.f2, "p_1537->g_566.f2", print_hash_value);
    transparent_crc(p_1537->g_566.f3, "p_1537->g_566.f3", print_hash_value);
    transparent_crc(p_1537->g_566.f4, "p_1537->g_566.f4", print_hash_value);
    transparent_crc(p_1537->g_566.f5, "p_1537->g_566.f5", print_hash_value);
    transparent_crc(p_1537->g_566.f6, "p_1537->g_566.f6", print_hash_value);
    transparent_crc(p_1537->g_566.f7, "p_1537->g_566.f7", print_hash_value);
    transparent_crc(p_1537->g_566.f8, "p_1537->g_566.f8", print_hash_value);
    transparent_crc(p_1537->g_582.s0, "p_1537->g_582.s0", print_hash_value);
    transparent_crc(p_1537->g_582.s1, "p_1537->g_582.s1", print_hash_value);
    transparent_crc(p_1537->g_582.s2, "p_1537->g_582.s2", print_hash_value);
    transparent_crc(p_1537->g_582.s3, "p_1537->g_582.s3", print_hash_value);
    transparent_crc(p_1537->g_582.s4, "p_1537->g_582.s4", print_hash_value);
    transparent_crc(p_1537->g_582.s5, "p_1537->g_582.s5", print_hash_value);
    transparent_crc(p_1537->g_582.s6, "p_1537->g_582.s6", print_hash_value);
    transparent_crc(p_1537->g_582.s7, "p_1537->g_582.s7", print_hash_value);
    transparent_crc(p_1537->g_600.f0, "p_1537->g_600.f0", print_hash_value);
    transparent_crc(p_1537->g_600.f1, "p_1537->g_600.f1", print_hash_value);
    transparent_crc(p_1537->g_600.f2, "p_1537->g_600.f2", print_hash_value);
    transparent_crc(p_1537->g_600.f3, "p_1537->g_600.f3", print_hash_value);
    transparent_crc(p_1537->g_600.f4, "p_1537->g_600.f4", print_hash_value);
    transparent_crc(p_1537->g_600.f5, "p_1537->g_600.f5", print_hash_value);
    transparent_crc(p_1537->g_600.f6, "p_1537->g_600.f6", print_hash_value);
    transparent_crc(p_1537->g_600.f7, "p_1537->g_600.f7", print_hash_value);
    transparent_crc(p_1537->g_600.f8, "p_1537->g_600.f8", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1537->g_630[i].f0, "p_1537->g_630[i].f0", print_hash_value);
        transparent_crc(p_1537->g_630[i].f1, "p_1537->g_630[i].f1", print_hash_value);
        transparent_crc(p_1537->g_630[i].f2, "p_1537->g_630[i].f2", print_hash_value);
        transparent_crc(p_1537->g_630[i].f3, "p_1537->g_630[i].f3", print_hash_value);
        transparent_crc(p_1537->g_630[i].f4, "p_1537->g_630[i].f4", print_hash_value);
        transparent_crc(p_1537->g_630[i].f5, "p_1537->g_630[i].f5", print_hash_value);
        transparent_crc(p_1537->g_630[i].f6, "p_1537->g_630[i].f6", print_hash_value);
        transparent_crc(p_1537->g_630[i].f7, "p_1537->g_630[i].f7", print_hash_value);
        transparent_crc(p_1537->g_630[i].f8, "p_1537->g_630[i].f8", print_hash_value);

    }
    transparent_crc(p_1537->g_661.s0, "p_1537->g_661.s0", print_hash_value);
    transparent_crc(p_1537->g_661.s1, "p_1537->g_661.s1", print_hash_value);
    transparent_crc(p_1537->g_661.s2, "p_1537->g_661.s2", print_hash_value);
    transparent_crc(p_1537->g_661.s3, "p_1537->g_661.s3", print_hash_value);
    transparent_crc(p_1537->g_661.s4, "p_1537->g_661.s4", print_hash_value);
    transparent_crc(p_1537->g_661.s5, "p_1537->g_661.s5", print_hash_value);
    transparent_crc(p_1537->g_661.s6, "p_1537->g_661.s6", print_hash_value);
    transparent_crc(p_1537->g_661.s7, "p_1537->g_661.s7", print_hash_value);
    transparent_crc(p_1537->g_662.x, "p_1537->g_662.x", print_hash_value);
    transparent_crc(p_1537->g_662.y, "p_1537->g_662.y", print_hash_value);
    transparent_crc(p_1537->g_987.s0, "p_1537->g_987.s0", print_hash_value);
    transparent_crc(p_1537->g_987.s1, "p_1537->g_987.s1", print_hash_value);
    transparent_crc(p_1537->g_987.s2, "p_1537->g_987.s2", print_hash_value);
    transparent_crc(p_1537->g_987.s3, "p_1537->g_987.s3", print_hash_value);
    transparent_crc(p_1537->g_987.s4, "p_1537->g_987.s4", print_hash_value);
    transparent_crc(p_1537->g_987.s5, "p_1537->g_987.s5", print_hash_value);
    transparent_crc(p_1537->g_987.s6, "p_1537->g_987.s6", print_hash_value);
    transparent_crc(p_1537->g_987.s7, "p_1537->g_987.s7", print_hash_value);
    transparent_crc(p_1537->g_987.s8, "p_1537->g_987.s8", print_hash_value);
    transparent_crc(p_1537->g_987.s9, "p_1537->g_987.s9", print_hash_value);
    transparent_crc(p_1537->g_987.sa, "p_1537->g_987.sa", print_hash_value);
    transparent_crc(p_1537->g_987.sb, "p_1537->g_987.sb", print_hash_value);
    transparent_crc(p_1537->g_987.sc, "p_1537->g_987.sc", print_hash_value);
    transparent_crc(p_1537->g_987.sd, "p_1537->g_987.sd", print_hash_value);
    transparent_crc(p_1537->g_987.se, "p_1537->g_987.se", print_hash_value);
    transparent_crc(p_1537->g_987.sf, "p_1537->g_987.sf", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1537->g_1000[i].f0, "p_1537->g_1000[i].f0", print_hash_value);
        transparent_crc(p_1537->g_1000[i].f1, "p_1537->g_1000[i].f1", print_hash_value);
        transparent_crc(p_1537->g_1000[i].f2, "p_1537->g_1000[i].f2", print_hash_value);
        transparent_crc(p_1537->g_1000[i].f3, "p_1537->g_1000[i].f3", print_hash_value);
        transparent_crc(p_1537->g_1000[i].f4, "p_1537->g_1000[i].f4", print_hash_value);
        transparent_crc(p_1537->g_1000[i].f5, "p_1537->g_1000[i].f5", print_hash_value);
        transparent_crc(p_1537->g_1000[i].f6, "p_1537->g_1000[i].f6", print_hash_value);
        transparent_crc(p_1537->g_1000[i].f7, "p_1537->g_1000[i].f7", print_hash_value);
        transparent_crc(p_1537->g_1000[i].f8, "p_1537->g_1000[i].f8", print_hash_value);

    }
    transparent_crc(p_1537->g_1007.x, "p_1537->g_1007.x", print_hash_value);
    transparent_crc(p_1537->g_1007.y, "p_1537->g_1007.y", print_hash_value);
    transparent_crc(p_1537->g_1038.s0, "p_1537->g_1038.s0", print_hash_value);
    transparent_crc(p_1537->g_1038.s1, "p_1537->g_1038.s1", print_hash_value);
    transparent_crc(p_1537->g_1038.s2, "p_1537->g_1038.s2", print_hash_value);
    transparent_crc(p_1537->g_1038.s3, "p_1537->g_1038.s3", print_hash_value);
    transparent_crc(p_1537->g_1038.s4, "p_1537->g_1038.s4", print_hash_value);
    transparent_crc(p_1537->g_1038.s5, "p_1537->g_1038.s5", print_hash_value);
    transparent_crc(p_1537->g_1038.s6, "p_1537->g_1038.s6", print_hash_value);
    transparent_crc(p_1537->g_1038.s7, "p_1537->g_1038.s7", print_hash_value);
    transparent_crc(p_1537->g_1038.s8, "p_1537->g_1038.s8", print_hash_value);
    transparent_crc(p_1537->g_1038.s9, "p_1537->g_1038.s9", print_hash_value);
    transparent_crc(p_1537->g_1038.sa, "p_1537->g_1038.sa", print_hash_value);
    transparent_crc(p_1537->g_1038.sb, "p_1537->g_1038.sb", print_hash_value);
    transparent_crc(p_1537->g_1038.sc, "p_1537->g_1038.sc", print_hash_value);
    transparent_crc(p_1537->g_1038.sd, "p_1537->g_1038.sd", print_hash_value);
    transparent_crc(p_1537->g_1038.se, "p_1537->g_1038.se", print_hash_value);
    transparent_crc(p_1537->g_1038.sf, "p_1537->g_1038.sf", print_hash_value);
    transparent_crc(p_1537->g_1040.s0, "p_1537->g_1040.s0", print_hash_value);
    transparent_crc(p_1537->g_1040.s1, "p_1537->g_1040.s1", print_hash_value);
    transparent_crc(p_1537->g_1040.s2, "p_1537->g_1040.s2", print_hash_value);
    transparent_crc(p_1537->g_1040.s3, "p_1537->g_1040.s3", print_hash_value);
    transparent_crc(p_1537->g_1040.s4, "p_1537->g_1040.s4", print_hash_value);
    transparent_crc(p_1537->g_1040.s5, "p_1537->g_1040.s5", print_hash_value);
    transparent_crc(p_1537->g_1040.s6, "p_1537->g_1040.s6", print_hash_value);
    transparent_crc(p_1537->g_1040.s7, "p_1537->g_1040.s7", print_hash_value);
    transparent_crc(p_1537->g_1040.s8, "p_1537->g_1040.s8", print_hash_value);
    transparent_crc(p_1537->g_1040.s9, "p_1537->g_1040.s9", print_hash_value);
    transparent_crc(p_1537->g_1040.sa, "p_1537->g_1040.sa", print_hash_value);
    transparent_crc(p_1537->g_1040.sb, "p_1537->g_1040.sb", print_hash_value);
    transparent_crc(p_1537->g_1040.sc, "p_1537->g_1040.sc", print_hash_value);
    transparent_crc(p_1537->g_1040.sd, "p_1537->g_1040.sd", print_hash_value);
    transparent_crc(p_1537->g_1040.se, "p_1537->g_1040.se", print_hash_value);
    transparent_crc(p_1537->g_1040.sf, "p_1537->g_1040.sf", print_hash_value);
    transparent_crc(p_1537->g_1136.x, "p_1537->g_1136.x", print_hash_value);
    transparent_crc(p_1537->g_1136.y, "p_1537->g_1136.y", print_hash_value);
    transparent_crc(p_1537->g_1209.f0, "p_1537->g_1209.f0", print_hash_value);
    transparent_crc(p_1537->g_1209.f1, "p_1537->g_1209.f1", print_hash_value);
    transparent_crc(p_1537->g_1209.f2, "p_1537->g_1209.f2", print_hash_value);
    transparent_crc(p_1537->g_1209.f3, "p_1537->g_1209.f3", print_hash_value);
    transparent_crc(p_1537->g_1209.f4, "p_1537->g_1209.f4", print_hash_value);
    transparent_crc(p_1537->g_1209.f5, "p_1537->g_1209.f5", print_hash_value);
    transparent_crc(p_1537->g_1209.f6, "p_1537->g_1209.f6", print_hash_value);
    transparent_crc(p_1537->g_1209.f7, "p_1537->g_1209.f7", print_hash_value);
    transparent_crc(p_1537->g_1209.f8, "p_1537->g_1209.f8", print_hash_value);
    transparent_crc(p_1537->g_1256.x, "p_1537->g_1256.x", print_hash_value);
    transparent_crc(p_1537->g_1256.y, "p_1537->g_1256.y", print_hash_value);
    transparent_crc(p_1537->g_1256.z, "p_1537->g_1256.z", print_hash_value);
    transparent_crc(p_1537->g_1256.w, "p_1537->g_1256.w", print_hash_value);
    transparent_crc(p_1537->g_1260.f0, "p_1537->g_1260.f0", print_hash_value);
    transparent_crc(p_1537->g_1260.f1, "p_1537->g_1260.f1", print_hash_value);
    transparent_crc(p_1537->g_1260.f2, "p_1537->g_1260.f2", print_hash_value);
    transparent_crc(p_1537->g_1260.f3, "p_1537->g_1260.f3", print_hash_value);
    transparent_crc(p_1537->g_1260.f4, "p_1537->g_1260.f4", print_hash_value);
    transparent_crc(p_1537->g_1260.f5, "p_1537->g_1260.f5", print_hash_value);
    transparent_crc(p_1537->g_1260.f6, "p_1537->g_1260.f6", print_hash_value);
    transparent_crc(p_1537->g_1260.f7, "p_1537->g_1260.f7", print_hash_value);
    transparent_crc(p_1537->g_1260.f8, "p_1537->g_1260.f8", print_hash_value);
    transparent_crc(p_1537->g_1276.x, "p_1537->g_1276.x", print_hash_value);
    transparent_crc(p_1537->g_1276.y, "p_1537->g_1276.y", print_hash_value);
    transparent_crc(p_1537->g_1277.s0, "p_1537->g_1277.s0", print_hash_value);
    transparent_crc(p_1537->g_1277.s1, "p_1537->g_1277.s1", print_hash_value);
    transparent_crc(p_1537->g_1277.s2, "p_1537->g_1277.s2", print_hash_value);
    transparent_crc(p_1537->g_1277.s3, "p_1537->g_1277.s3", print_hash_value);
    transparent_crc(p_1537->g_1277.s4, "p_1537->g_1277.s4", print_hash_value);
    transparent_crc(p_1537->g_1277.s5, "p_1537->g_1277.s5", print_hash_value);
    transparent_crc(p_1537->g_1277.s6, "p_1537->g_1277.s6", print_hash_value);
    transparent_crc(p_1537->g_1277.s7, "p_1537->g_1277.s7", print_hash_value);
    transparent_crc(p_1537->g_1286.x, "p_1537->g_1286.x", print_hash_value);
    transparent_crc(p_1537->g_1286.y, "p_1537->g_1286.y", print_hash_value);
    transparent_crc(p_1537->g_1287.x, "p_1537->g_1287.x", print_hash_value);
    transparent_crc(p_1537->g_1287.y, "p_1537->g_1287.y", print_hash_value);
    transparent_crc(p_1537->g_1287.z, "p_1537->g_1287.z", print_hash_value);
    transparent_crc(p_1537->g_1287.w, "p_1537->g_1287.w", print_hash_value);
    transparent_crc(p_1537->g_1301.x, "p_1537->g_1301.x", print_hash_value);
    transparent_crc(p_1537->g_1301.y, "p_1537->g_1301.y", print_hash_value);
    transparent_crc(p_1537->g_1301.z, "p_1537->g_1301.z", print_hash_value);
    transparent_crc(p_1537->g_1301.w, "p_1537->g_1301.w", print_hash_value);
    transparent_crc(p_1537->g_1304.s0, "p_1537->g_1304.s0", print_hash_value);
    transparent_crc(p_1537->g_1304.s1, "p_1537->g_1304.s1", print_hash_value);
    transparent_crc(p_1537->g_1304.s2, "p_1537->g_1304.s2", print_hash_value);
    transparent_crc(p_1537->g_1304.s3, "p_1537->g_1304.s3", print_hash_value);
    transparent_crc(p_1537->g_1304.s4, "p_1537->g_1304.s4", print_hash_value);
    transparent_crc(p_1537->g_1304.s5, "p_1537->g_1304.s5", print_hash_value);
    transparent_crc(p_1537->g_1304.s6, "p_1537->g_1304.s6", print_hash_value);
    transparent_crc(p_1537->g_1304.s7, "p_1537->g_1304.s7", print_hash_value);
    transparent_crc(p_1537->g_1304.s8, "p_1537->g_1304.s8", print_hash_value);
    transparent_crc(p_1537->g_1304.s9, "p_1537->g_1304.s9", print_hash_value);
    transparent_crc(p_1537->g_1304.sa, "p_1537->g_1304.sa", print_hash_value);
    transparent_crc(p_1537->g_1304.sb, "p_1537->g_1304.sb", print_hash_value);
    transparent_crc(p_1537->g_1304.sc, "p_1537->g_1304.sc", print_hash_value);
    transparent_crc(p_1537->g_1304.sd, "p_1537->g_1304.sd", print_hash_value);
    transparent_crc(p_1537->g_1304.se, "p_1537->g_1304.se", print_hash_value);
    transparent_crc(p_1537->g_1304.sf, "p_1537->g_1304.sf", print_hash_value);
    transparent_crc(p_1537->g_1353.x, "p_1537->g_1353.x", print_hash_value);
    transparent_crc(p_1537->g_1353.y, "p_1537->g_1353.y", print_hash_value);
    transparent_crc(p_1537->g_1353.z, "p_1537->g_1353.z", print_hash_value);
    transparent_crc(p_1537->g_1353.w, "p_1537->g_1353.w", print_hash_value);
    transparent_crc(p_1537->g_1398.s0, "p_1537->g_1398.s0", print_hash_value);
    transparent_crc(p_1537->g_1398.s1, "p_1537->g_1398.s1", print_hash_value);
    transparent_crc(p_1537->g_1398.s2, "p_1537->g_1398.s2", print_hash_value);
    transparent_crc(p_1537->g_1398.s3, "p_1537->g_1398.s3", print_hash_value);
    transparent_crc(p_1537->g_1398.s4, "p_1537->g_1398.s4", print_hash_value);
    transparent_crc(p_1537->g_1398.s5, "p_1537->g_1398.s5", print_hash_value);
    transparent_crc(p_1537->g_1398.s6, "p_1537->g_1398.s6", print_hash_value);
    transparent_crc(p_1537->g_1398.s7, "p_1537->g_1398.s7", print_hash_value);
    transparent_crc(p_1537->g_1398.s8, "p_1537->g_1398.s8", print_hash_value);
    transparent_crc(p_1537->g_1398.s9, "p_1537->g_1398.s9", print_hash_value);
    transparent_crc(p_1537->g_1398.sa, "p_1537->g_1398.sa", print_hash_value);
    transparent_crc(p_1537->g_1398.sb, "p_1537->g_1398.sb", print_hash_value);
    transparent_crc(p_1537->g_1398.sc, "p_1537->g_1398.sc", print_hash_value);
    transparent_crc(p_1537->g_1398.sd, "p_1537->g_1398.sd", print_hash_value);
    transparent_crc(p_1537->g_1398.se, "p_1537->g_1398.se", print_hash_value);
    transparent_crc(p_1537->g_1398.sf, "p_1537->g_1398.sf", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1537->g_1412[i].f0, "p_1537->g_1412[i].f0", print_hash_value);
        transparent_crc(p_1537->g_1412[i].f1, "p_1537->g_1412[i].f1", print_hash_value);
        transparent_crc(p_1537->g_1412[i].f2, "p_1537->g_1412[i].f2", print_hash_value);
        transparent_crc(p_1537->g_1412[i].f3, "p_1537->g_1412[i].f3", print_hash_value);
        transparent_crc(p_1537->g_1412[i].f4, "p_1537->g_1412[i].f4", print_hash_value);
        transparent_crc(p_1537->g_1412[i].f5, "p_1537->g_1412[i].f5", print_hash_value);
        transparent_crc(p_1537->g_1412[i].f6, "p_1537->g_1412[i].f6", print_hash_value);
        transparent_crc(p_1537->g_1412[i].f7, "p_1537->g_1412[i].f7", print_hash_value);
        transparent_crc(p_1537->g_1412[i].f8, "p_1537->g_1412[i].f8", print_hash_value);

    }
    transparent_crc(p_1537->g_1413.x, "p_1537->g_1413.x", print_hash_value);
    transparent_crc(p_1537->g_1413.y, "p_1537->g_1413.y", print_hash_value);
    transparent_crc(p_1537->g_1413.z, "p_1537->g_1413.z", print_hash_value);
    transparent_crc(p_1537->g_1413.w, "p_1537->g_1413.w", print_hash_value);
    transparent_crc(p_1537->g_1428.s0, "p_1537->g_1428.s0", print_hash_value);
    transparent_crc(p_1537->g_1428.s1, "p_1537->g_1428.s1", print_hash_value);
    transparent_crc(p_1537->g_1428.s2, "p_1537->g_1428.s2", print_hash_value);
    transparent_crc(p_1537->g_1428.s3, "p_1537->g_1428.s3", print_hash_value);
    transparent_crc(p_1537->g_1428.s4, "p_1537->g_1428.s4", print_hash_value);
    transparent_crc(p_1537->g_1428.s5, "p_1537->g_1428.s5", print_hash_value);
    transparent_crc(p_1537->g_1428.s6, "p_1537->g_1428.s6", print_hash_value);
    transparent_crc(p_1537->g_1428.s7, "p_1537->g_1428.s7", print_hash_value);
    transparent_crc(p_1537->g_1428.s8, "p_1537->g_1428.s8", print_hash_value);
    transparent_crc(p_1537->g_1428.s9, "p_1537->g_1428.s9", print_hash_value);
    transparent_crc(p_1537->g_1428.sa, "p_1537->g_1428.sa", print_hash_value);
    transparent_crc(p_1537->g_1428.sb, "p_1537->g_1428.sb", print_hash_value);
    transparent_crc(p_1537->g_1428.sc, "p_1537->g_1428.sc", print_hash_value);
    transparent_crc(p_1537->g_1428.sd, "p_1537->g_1428.sd", print_hash_value);
    transparent_crc(p_1537->g_1428.se, "p_1537->g_1428.se", print_hash_value);
    transparent_crc(p_1537->g_1428.sf, "p_1537->g_1428.sf", print_hash_value);
    transparent_crc(p_1537->g_1536, "p_1537->g_1536", print_hash_value);
    transparent_crc(p_1537->v_collective, "p_1537->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 18; i++)
            transparent_crc(p_1537->g_special_values[i + 18 * get_linear_group_id()], "p_1537->g_special_values[i + 18 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 18; i++)
            transparent_crc(p_1537->l_special_values[i], "p_1537->l_special_values[i]", print_hash_value);
    transparent_crc(p_1537->l_comm_values[get_linear_local_id()], "p_1537->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1537->g_comm_values[get_linear_group_id() * 12 + get_linear_local_id()], "p_1537->g_comm_values[get_linear_group_id() * 12 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
