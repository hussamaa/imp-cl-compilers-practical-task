// --atomics 38 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 1,39,33 -l 1,3,1
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

__constant uint32_t permutations[10][3] = {
{2,0,1}, // permutation 0
{1,0,2}, // permutation 1
{2,0,1}, // permutation 2
{1,0,2}, // permutation 3
{1,0,2}, // permutation 4
{1,2,0}, // permutation 5
{1,2,0}, // permutation 6
{1,2,0}, // permutation 7
{1,2,0}, // permutation 8
{1,2,0} // permutation 9
};

// Seed: 4275477052

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int16_t g_29;
    int16_t g_43;
    VECTOR(uint16_t, 4) g_45;
    VECTOR(uint16_t, 8) g_46;
    int32_t g_58;
    int8_t g_69;
    int64_t g_70[9][1];
    VECTOR(int16_t, 16) g_75;
    volatile VECTOR(int8_t, 16) g_76;
    int32_t g_83;
    int32_t g_96;
    uint16_t g_103[5][6];
    int32_t g_116;
    volatile int16_t *g_117;
    int32_t g_119;
    int32_t * volatile g_118;
    int32_t g_121;
    int32_t *g_120;
    int32_t g_136;
    int32_t **g_142;
    int16_t g_144;
    int16_t *g_143;
    uint8_t g_170;
    uint8_t g_172;
    VECTOR(int8_t, 4) g_173;
    VECTOR(int64_t, 4) g_182;
    volatile int64_t g_197;
    volatile int8_t g_198;
    volatile int8_t g_202;
    volatile int32_t g_203[8];
    volatile uint16_t g_205[3];
    uint16_t * volatile g_224;
    uint16_t * volatile *g_223;
    uint64_t g_242[1];
    uint16_t g_274;
    uint32_t g_279[5][2];
    int32_t * volatile g_284[3];
    int32_t * volatile *g_283;
    int32_t * volatile ** volatile g_285;
    int32_t g_298;
    uint64_t g_299;
    uint32_t g_317;
    uint32_t *g_316;
    uint32_t *g_322;
    int8_t g_344;
    volatile int8_t g_345[1][6][6];
    uint32_t g_346;
    uint64_t g_367[10][2];
    int32_t g_370;
    volatile int32_t g_387;
    int16_t g_388;
    int32_t g_390;
    uint8_t g_391;
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
uint64_t  func_1(struct S0 * p_397);
int32_t  func_2(int32_t  p_3, uint8_t  p_4, uint16_t  p_5, int64_t  p_6, struct S0 * p_397);
uint8_t  func_7(int16_t  p_8, uint32_t  p_9, int32_t  p_10, uint64_t  p_11, struct S0 * p_397);
uint64_t  func_13(int32_t  p_14, uint32_t  p_15, struct S0 * p_397);
int32_t  func_16(uint16_t  p_17, int32_t  p_18, struct S0 * p_397);
uint16_t  func_34(int64_t  p_35, uint64_t  p_36, int16_t * p_37, struct S0 * p_397);
int64_t  func_40(int32_t  p_41, struct S0 * p_397);
int32_t * func_54(int32_t  p_55, int32_t * p_56, struct S0 * p_397);
int32_t * func_59(int32_t * p_60, int32_t * p_61, int32_t * p_62, int32_t  p_63, struct S0 * p_397);
int32_t * func_64(int32_t  p_65, struct S0 * p_397);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_397->l_comm_values p_397->g_comm_values p_397->g_45 p_397->g_46 p_397->g_69 p_397->g_75 p_397->g_76 p_397->g_70 p_397->g_103 p_397->g_96 p_397->g_43 p_397->g_117 p_397->g_118 p_397->g_119 p_397->g_120 p_397->g_83 p_397->g_121 p_397->g_136 p_397->g_143 p_397->g_172 p_397->g_144 p_397->g_182 p_397->g_142 p_397->g_116 p_397->g_223 p_397->g_242 p_397->g_274 p_397->g_279 p_397->g_283 p_397->g_285 p_397->g_299 p_397->g_170 p_397->g_203 p_397->g_316 p_397->g_346 p_397->g_391 p_397->g_345
 * writes: p_397->g_29 p_397->g_43 p_397->g_58 p_397->g_69 p_397->g_70 p_397->g_83 p_397->g_96 p_397->g_103 p_397->g_75 p_397->g_116 p_397->g_119 p_397->g_136 p_397->g_142 p_397->g_172 p_397->g_120 p_397->g_121 p_397->g_223 p_397->g_242 p_397->g_274 p_397->g_279 p_397->g_283 p_397->g_299 p_397->g_170 p_397->g_316 p_397->g_322 p_397->g_346 p_397->g_391
 */
uint64_t  func_1(struct S0 * p_397)
{ /* block id: 4 */
    int32_t l_12 = 0x2374B1B0L;
    int16_t l_311 = 0x2935L;
    uint32_t **l_318 = (void*)0;
    uint32_t **l_319 = &p_397->g_316;
    uint32_t *l_321 = &p_397->g_317;
    uint32_t **l_320[4][1] = {{&l_321},{&l_321},{&l_321},{&l_321}};
    int32_t *l_396 = &p_397->g_83;
    int32_t **l_395 = &l_396;
    int32_t ***l_394 = &l_395;
    int i, j;
    l_12 = func_2(p_397->l_comm_values[(safe_mod_func_uint32_t_u_u(p_397->tid, 3))], (!func_7((!0x33F3L), l_12, l_12, p_397->g_comm_values[p_397->tid], p_397)), l_311, (safe_div_func_int16_t_s_s((*p_397->g_143), (safe_mod_func_uint64_t_u_u(((p_397->g_322 = ((*l_319) = p_397->g_316)) == &p_397->g_317), 0x62FFBBDEFA2FEFF6L)))), p_397);
    (*l_394) = (void*)0;
    return p_397->g_345[0][2][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_397->g_172 p_397->g_346 p_397->g_391 p_397->g_118 p_397->g_119
 * writes: p_397->g_172 p_397->g_346 p_397->g_391
 */
int32_t  func_2(int32_t  p_3, uint8_t  p_4, uint16_t  p_5, int64_t  p_6, struct S0 * p_397)
{ /* block id: 180 */
    int16_t l_325 = 0x621AL;
    int32_t l_329 = 4L;
    int32_t l_333 = 0x58690E24L;
    int32_t l_337 = 0x39658265L;
    int32_t l_340 = 0x100CA53AL;
    int32_t l_341 = 7L;
    int32_t l_342 = 1L;
    int32_t l_343[1][10] = {{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)}};
    VECTOR(uint8_t, 4) l_362 = (VECTOR(uint8_t, 4))(0x2DL, (VECTOR(uint8_t, 2))(0x2DL, 0UL), 0UL);
    int32_t **l_371 = (void*)0;
    VECTOR(uint8_t, 4) l_372 = (VECTOR(uint8_t, 4))(0x84L, (VECTOR(uint8_t, 2))(0x84L, 9UL), 9UL);
    VECTOR(uint8_t, 4) l_373 = (VECTOR(uint8_t, 4))(0xF5L, (VECTOR(uint8_t, 2))(0xF5L, 0x78L), 0x78L);
    int8_t l_379 = (-1L);
    int32_t *l_381 = &l_340;
    int16_t l_386 = 0L;
    int16_t l_389 = (-6L);
    int i, j;
    for (p_397->g_172 = 0; (p_397->g_172 != 56); p_397->g_172 = safe_add_func_int16_t_s_s(p_397->g_172, 6))
    { /* block id: 183 */
        int32_t *l_326 = &p_397->g_121;
        int32_t *l_327 = &p_397->g_96;
        int32_t *l_328 = &p_397->g_116;
        int32_t *l_330 = &p_397->g_116;
        int32_t *l_331 = &p_397->g_119;
        int32_t l_332 = 0L;
        int32_t *l_334 = &p_397->g_136;
        int32_t *l_335 = (void*)0;
        int32_t *l_336 = &l_332;
        int32_t *l_338[10] = {&p_397->g_136,&p_397->g_136,&p_397->g_136,&p_397->g_136,&p_397->g_136,&p_397->g_136,&p_397->g_136,&p_397->g_136,&p_397->g_136,&p_397->g_136};
        int32_t l_339 = 0x7C45ABC6L;
        int i;
        p_397->g_346--;
        if ((atomic_inc(&p_397->l_atomic_input[10]) == 6))
        { /* block id: 186 */
            int32_t l_350 = (-9L);
            int32_t *l_349 = &l_350;
            uint32_t l_351[4][10][5] = {{{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL}},{{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL}},{{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL}},{{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL},{0x26E32C7CL,4294967287UL,1UL,0x72286EECL,4294967295UL}}};
            uint32_t l_352 = 0x1C48D3F9L;
            int32_t l_353 = 0x49372ABCL;
            int64_t l_354 = (-3L);
            int i, j, k;
            l_349 = l_349;
            l_353 &= (l_352 &= l_351[3][7][0]);
            (*l_349) = (l_354 = (-1L));
            for (l_351[3][7][0] = (-18); (l_351[3][7][0] >= 41); l_351[3][7][0] = safe_add_func_uint64_t_u_u(l_351[3][7][0], 1))
            { /* block id: 194 */
                uint64_t l_357 = 0x26262A0CC3600163L;
                uint16_t l_358 = 0x29A7L;
                l_358 = l_357;
            }
            unsigned int result = 0;
            result += l_350;
            int l_351_i0, l_351_i1, l_351_i2;
            for (l_351_i0 = 0; l_351_i0 < 4; l_351_i0++) {
                for (l_351_i1 = 0; l_351_i1 < 10; l_351_i1++) {
                    for (l_351_i2 = 0; l_351_i2 < 5; l_351_i2++) {
                        result += l_351[l_351_i0][l_351_i1][l_351_i2];
                    }
                }
            }
            result += l_352;
            result += l_353;
            result += l_354;
            atomic_add(&p_397->l_special_values[10], result);
        }
        else
        { /* block id: 197 */
            (1 + 1);
        }
    }
    for (p_3 = 5; (p_3 != (-26)); p_3--)
    { /* block id: 203 */
        uint16_t l_363 = 0xEAC5L;
        int32_t ****l_364 = (void*)0;
        int32_t ***l_366 = (void*)0;
        int32_t ****l_365 = &l_366;
        int32_t *l_368 = (void*)0;
        int32_t *l_369 = &p_397->g_370;
        int64_t *l_378 = &p_397->g_70[2][0];
        int32_t *l_380 = &l_337;
        int32_t *l_382 = &l_333;
        int32_t *l_383 = (void*)0;
        int32_t *l_384 = &l_333;
        int32_t *l_385[5];
        int i;
        for (i = 0; i < 5; i++)
            l_385[i] = &p_397->g_121;
        (*l_380) |= (safe_unary_minus_func_uint8_t_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0xECL, 4UL)).xxyy)).zyzyxwywxyzwxyxy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_362.zzww)).yxwzzywy)).s6766312153720400, ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 8))(251UL, (((*l_369) = (l_363 || ((((*l_365) = &p_397->g_142) != &p_397->g_142) , p_397->g_367[5][0]))) , (p_397->g_69 , ((l_371 == (*p_397->g_285)) , ((VECTOR(uint8_t, 2))(l_372.xx)).hi))), ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 16))(254UL, ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_373.yz)).xxxx)).even)).xyyxxyxyyyxxyxxx, ((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(0x26L, 1L, 0x3BL, (((((*l_378) = ((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u((((void*)0 != l_371) >= p_4), p_6)), p_5)) || 1UL)) && l_379) >= p_397->g_345[0][3][1]) & (*p_397->g_322)), (-1L), p_397->g_173.y, 1L, 0x61L)).odd)).even, ((VECTOR(int8_t, 2))(0x29L))))).yxxyyxxyxxxyyxyx, ((VECTOR(int8_t, 16))((-1L)))))))).sfcbe, ((VECTOR(uint8_t, 4))(0x08L))))).xyxxxwxyzzwzxyxz))).sf67b, ((VECTOR(uint8_t, 4))(254UL)), ((VECTOR(uint8_t, 4))(1UL))))).odd, ((VECTOR(uint8_t, 2))(0x79L))))), 0UL, p_397->g_103[1][0], 0x59L, p_397->g_144, 0xCFL, 0xE7L, 246UL, 247UL, 0x5FL, l_373.w, 255UL, 255UL, 0xC1L)).s57b2, ((VECTOR(uint8_t, 4))(255UL)), ((VECTOR(uint8_t, 4))(0xC8L))))).hi, ((VECTOR(uint8_t, 2))(0x74L)), ((VECTOR(uint8_t, 2))(0x19L))))), (uint8_t)p_4))), ((VECTOR(uint8_t, 2))(248UL)), ((VECTOR(uint8_t, 2))(0x0AL))))).yxxx, ((VECTOR(uint8_t, 4))(255UL))))), 249UL, 0x9FL)).even, (uint8_t)p_6))).wxyyywzxxzxzxyzz))).scf)).yxxyxxxx)).hi)).w));
        l_381 = (void*)0;
        p_397->g_391--;
    }
    return (*p_397->g_118);
}


/* ------------------------------------------ */
/* 
 * reads : p_397->l_comm_values p_397->g_45 p_397->g_46 p_397->g_69 p_397->g_75 p_397->g_76 p_397->g_70 p_397->g_comm_values p_397->g_103 p_397->g_96 p_397->g_43 p_397->g_117 p_397->g_118 p_397->g_119 p_397->g_120 p_397->g_83 p_397->g_121 p_397->g_136 p_397->g_143 p_397->g_172 p_397->g_144 p_397->g_182 p_397->g_142 p_397->g_116 p_397->g_223 p_397->g_242 p_397->g_274 p_397->g_279 p_397->g_283 p_397->g_285 p_397->g_299 p_397->g_170 p_397->g_203
 * writes: p_397->g_29 p_397->g_43 p_397->g_58 p_397->g_69 p_397->g_70 p_397->g_83 p_397->g_96 p_397->g_103 p_397->g_75 p_397->g_116 p_397->g_119 p_397->g_136 p_397->g_142 p_397->g_172 p_397->g_120 p_397->g_121 p_397->g_223 p_397->g_242 p_397->g_274 p_397->g_279 p_397->g_283 p_397->g_299 p_397->g_170
 */
uint8_t  func_7(int16_t  p_8, uint32_t  p_9, int32_t  p_10, uint64_t  p_11, struct S0 * p_397)
{ /* block id: 5 */
    int16_t *l_28 = &p_397->g_29;
    int32_t l_137 = 0x0E501278L;
    uint16_t *l_138[1][4][5];
    int32_t l_139 = 0L;
    int32_t **l_140 = &p_397->g_120;
    int32_t ***l_141[9] = {&l_140,&l_140,&l_140,&l_140,&l_140,&l_140,&l_140,&l_140,&l_140};
    uint8_t *l_218 = &p_397->g_172;
    int16_t l_304[1][9][5] = {{{0x3FC0L,0x0886L,0x70EAL,(-6L),9L},{0x3FC0L,0x0886L,0x70EAL,(-6L),9L},{0x3FC0L,0x0886L,0x70EAL,(-6L),9L},{0x3FC0L,0x0886L,0x70EAL,(-6L),9L},{0x3FC0L,0x0886L,0x70EAL,(-6L),9L},{0x3FC0L,0x0886L,0x70EAL,(-6L),9L},{0x3FC0L,0x0886L,0x70EAL,(-6L),9L},{0x3FC0L,0x0886L,0x70EAL,(-6L),9L},{0x3FC0L,0x0886L,0x70EAL,(-6L),9L}}};
    int32_t *l_307[8] = {&p_397->g_83,&p_397->g_83,&p_397->g_83,&p_397->g_83,&p_397->g_83,&p_397->g_83,&p_397->g_83,&p_397->g_83};
    uint32_t *l_310[4] = {&p_397->g_279[4][1],&p_397->g_279[4][1],&p_397->g_279[4][1],&p_397->g_279[4][1]};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
                l_138[i][j][k] = (void*)0;
        }
    }
    (*p_397->g_118) = (func_13(func_16((safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((!(safe_rshift_func_uint8_t_u_u(((*l_218) |= ((18446744073709551609UL != (safe_sub_func_uint32_t_u_u(((((*l_28) = (safe_unary_minus_func_uint16_t_u(0x8716L))) >= p_8) > (safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(func_34((l_28 == ((func_40((+(FAKE_DIVERGE(p_397->group_1_offset, get_group_id(1), 10) , 0x057617C0L)), p_397) & (GROUP_DIVERGE(2, 1) < ((((-1L) && l_137) & (((p_397->g_142 = ((l_139 = 2UL) , l_140)) == (void*)0) , p_11)) , p_397->g_45.y))) , l_28)), p_397->g_45.y, p_397->g_143, p_397), (**l_140))), p_10))), 0x75DDE9F3L))) && GROUP_DIVERGE(1, 1))), p_397->g_144))), p_9)), 7UL)), p_397->g_182.z, p_397), p_397->g_comm_values[p_397->tid], p_397) & p_397->l_comm_values[(safe_mod_func_uint32_t_u_u(p_397->tid, 3))]);
    for (p_397->g_170 = 18; (p_397->g_170 > 53); p_397->g_170 = safe_add_func_uint32_t_u_u(p_397->g_170, 2))
    { /* block id: 165 */
        return l_304[0][2][2];
    }
    if ((atomic_inc(&p_397->g_atomic_input[38 * get_linear_group_id() + 5]) == 3))
    { /* block id: 169 */
        int8_t l_305[9][6][3] = {{{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L}},{{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L}},{{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L}},{{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L}},{{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L}},{{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L}},{{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L}},{{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L}},{{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L},{0x37L,7L,9L}}};
        uint32_t l_306 = 4294967287UL;
        int i, j, k;
        l_306 ^= l_305[6][4][1];
        unsigned int result = 0;
        int l_305_i0, l_305_i1, l_305_i2;
        for (l_305_i0 = 0; l_305_i0 < 9; l_305_i0++) {
            for (l_305_i1 = 0; l_305_i1 < 6; l_305_i1++) {
                for (l_305_i2 = 0; l_305_i2 < 3; l_305_i2++) {
                    result += l_305[l_305_i0][l_305_i1][l_305_i2];
                }
            }
        }
        result += l_306;
        atomic_add(&p_397->g_special_values[38 * get_linear_group_id() + 5], result);
    }
    else
    { /* block id: 171 */
        (1 + 1);
    }
    (*p_397->g_142) = func_54(p_10, ((*l_140) = func_54(p_9, func_59(l_307[2], func_54((p_8 && (p_397->g_279[4][1] = ((safe_mul_func_int16_t_s_s(p_11, (p_10 | (&p_397->g_142 == &p_397->g_142)))) <= (&p_397->g_142 == &l_140)))), (*l_140), p_397), (*l_140), p_9, p_397), p_397)), p_397);
    return p_397->g_203[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_397->g_120 p_397->g_116 p_397->g_223 p_397->g_119 p_397->g_121 p_397->g_142 p_397->g_242 p_397->g_118 p_397->g_274 p_397->g_279 p_397->g_283 p_397->g_285 p_397->g_299
 * writes: p_397->g_121 p_397->g_116 p_397->g_223 p_397->g_69 p_397->g_120 p_397->g_119 p_397->g_242 p_397->g_274 p_397->g_279 p_397->g_283 p_397->g_299
 */
uint64_t  func_13(int32_t  p_14, uint32_t  p_15, struct S0 * p_397)
{ /* block id: 106 */
    uint64_t l_219[8] = {0x969B5C3765FA4DD6L,5UL,0x969B5C3765FA4DD6L,0x969B5C3765FA4DD6L,5UL,0x969B5C3765FA4DD6L,0x969B5C3765FA4DD6L,5UL};
    uint16_t l_220[8] = {65532UL,5UL,65532UL,65532UL,5UL,65532UL,65532UL,5UL};
    int32_t l_239 = 0x251A42DCL;
    int32_t l_240[3];
    int32_t **l_282 = (void*)0;
    int32_t *l_286 = &p_397->g_136;
    int32_t *l_287 = &p_397->g_119;
    int32_t *l_288 = &p_397->g_119;
    int32_t *l_289 = (void*)0;
    int32_t *l_290 = &p_397->g_121;
    int32_t *l_291 = &p_397->g_136;
    int32_t *l_292 = &l_240[2];
    int32_t *l_293 = &l_239;
    int32_t *l_294 = &l_240[2];
    int32_t *l_295 = (void*)0;
    int32_t *l_296[3];
    int64_t l_297 = 0L;
    int i;
    for (i = 0; i < 3; i++)
        l_240[i] = 0L;
    for (i = 0; i < 3; i++)
        l_296[i] = (void*)0;
    (*p_397->g_120) = (((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-10L), 0x14L)))))).yyxxyyyx)).odd, (int8_t)l_219[5]))).w , l_220[7]);
    for (p_397->g_116 = 0; (p_397->g_116 != 23); ++p_397->g_116)
    { /* block id: 110 */
        uint16_t * volatile **l_225 = &p_397->g_223;
        int32_t l_238 = 0x6B1DDC82L;
        (*l_225) = p_397->g_223;
        for (p_15 = 0; (p_15 >= 33); p_15 = safe_add_func_uint64_t_u_u(p_15, 8))
        { /* block id: 114 */
            int32_t *l_232 = &p_397->g_58;
            if (((p_15 || (p_14 >= p_15)) , (!(*p_397->g_120))))
            { /* block id: 115 */
                uint32_t l_235 = 9UL;
                int32_t l_241[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_241[i] = 0x7218B3BFL;
                for (p_397->g_69 = (-19); (p_397->g_69 >= (-12)); p_397->g_69++)
                { /* block id: 118 */
                    int32_t *l_236 = &p_397->g_96;
                    int32_t *l_237[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_237[i] = &p_397->g_96;
                    (*p_397->g_142) = func_59(l_232, l_232, (*p_397->g_142), l_220[2], p_397);
                    l_235 |= ((**p_397->g_142) = (safe_mod_func_uint16_t_u_u(1UL, p_14)));
                    ++p_397->g_242[0];
                }
            }
            else
            { /* block id: 124 */
                if ((atomic_inc(&p_397->l_atomic_input[4]) == 6))
                { /* block id: 126 */
                    int32_t l_245 = 2L;
                    uint16_t l_252[8][5] = {{0x8618L,7UL,0xAB8CL,7UL,0x8618L},{0x8618L,7UL,0xAB8CL,7UL,0x8618L},{0x8618L,7UL,0xAB8CL,7UL,0x8618L},{0x8618L,7UL,0xAB8CL,7UL,0x8618L},{0x8618L,7UL,0xAB8CL,7UL,0x8618L},{0x8618L,7UL,0xAB8CL,7UL,0x8618L},{0x8618L,7UL,0xAB8CL,7UL,0x8618L},{0x8618L,7UL,0xAB8CL,7UL,0x8618L}};
                    uint8_t l_253 = 0UL;
                    uint8_t l_266 = 0xB7L;
                    uint16_t l_267 = 65532UL;
                    int32_t l_268[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_268[i] = (-1L);
                    for (l_245 = 0; (l_245 <= 12); l_245++)
                    { /* block id: 129 */
                        uint16_t l_248 = 0x4E70L;
                        uint16_t l_249[5][2];
                        uint32_t l_250[10];
                        int16_t l_251 = (-1L);
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_249[i][j] = 1UL;
                        }
                        for (i = 0; i < 10; i++)
                            l_250[i] = 0UL;
                        l_249[0][0] = l_248;
                        l_251 = l_250[8];
                    }
                    if ((l_253 = l_252[4][4]))
                    { /* block id: 134 */
                        int32_t *l_254 = (void*)0;
                        int32_t l_256 = 0x43741902L;
                        int32_t *l_255 = &l_256;
                        uint32_t l_257 = 1UL;
                        int32_t l_260 = 4L;
                        l_245 = (-4L);
                        l_255 = l_254;
                        l_257++;
                        l_245 = l_260;
                    }
                    else
                    { /* block id: 139 */
                        int32_t l_261 = 5L;
                        int32_t l_262 = 0x2B4AD35FL;
                        uint8_t l_263[1][7] = {{255UL,255UL,255UL,255UL,255UL,255UL,255UL}};
                        int i, j;
                        l_263[0][5]++;
                    }
                    l_268[1] &= (l_267 ^= l_266);
                    unsigned int result = 0;
                    result += l_245;
                    int l_252_i0, l_252_i1;
                    for (l_252_i0 = 0; l_252_i0 < 8; l_252_i0++) {
                        for (l_252_i1 = 0; l_252_i1 < 5; l_252_i1++) {
                            result += l_252[l_252_i0][l_252_i1];
                        }
                    }
                    result += l_253;
                    result += l_266;
                    result += l_267;
                    int l_268_i0;
                    for (l_268_i0 = 0; l_268_i0 < 3; l_268_i0++) {
                        result += l_268[l_268_i0];
                    }
                    atomic_add(&p_397->l_special_values[4], result);
                }
                else
                { /* block id: 144 */
                    (1 + 1);
                }
            }
        }
    }
    if ((*p_397->g_118))
    { /* block id: 150 */
        int32_t *l_269 = &p_397->g_116;
        int32_t *l_270 = &p_397->g_96;
        int32_t *l_271 = &l_239;
        int32_t *l_272 = &p_397->g_119;
        int32_t *l_273[8] = {&l_240[2],&l_240[2],&l_240[2],&l_240[2],&l_240[2],&l_240[2],&l_240[2],&l_240[2]};
        int i;
        p_397->g_274--;
    }
    else
    { /* block id: 152 */
        VECTOR(int32_t, 4) l_277 = (VECTOR(int32_t, 4))(0x3299ABA9L, (VECTOR(int32_t, 2))(0x3299ABA9L, 0x27FF40A6L), 0x27FF40A6L);
        uint32_t *l_278 = &p_397->g_279[4][1];
        int i;
        atomic_max(&p_397->l_atomic_reduction[0], (((*p_397->g_118) = 0x624E792CL) <= (((VECTOR(int32_t, 2))(l_277.zz)).hi == (((*l_278)--) >= ((void*)0 == l_282)))));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_397->v_collective += p_397->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        (*p_397->g_285) = p_397->g_283;
        (*p_397->g_142) = l_278;
        (*p_397->g_142) = (*p_397->g_142);
    }
    p_397->g_299--;
    return p_397->g_116;
}


/* ------------------------------------------ */
/* 
 * reads : p_397->g_142 p_397->g_120
 * writes: p_397->g_120
 */
int32_t  func_16(uint16_t  p_17, int32_t  p_18, struct S0 * p_397)
{ /* block id: 103 */
    (*p_397->g_142) = (*p_397->g_142);
    return p_18;
}


/* ------------------------------------------ */
/* 
 * reads : p_397->g_119 p_397->g_43
 * writes: p_397->g_119 p_397->g_43
 */
uint16_t  func_34(int64_t  p_35, uint64_t  p_36, int16_t * p_37, struct S0 * p_397)
{ /* block id: 63 */
    uint16_t l_192 = 0x3AFCL;
    int32_t l_195 = (-4L);
    for (p_397->g_119 = (-3); (p_397->g_119 <= (-24)); --p_397->g_119)
    { /* block id: 66 */
        uint16_t l_158 = 0x7C76L;
        int32_t ***l_184 = &p_397->g_142;
        int32_t ****l_183 = &l_184;
        int32_t l_196 = 0L;
        int32_t l_201 = 0x5D47F83BL;
        int32_t l_204 = 3L;
        int16_t *l_210 = &p_397->g_144;
        int32_t *l_211 = &p_397->g_83;
        for (p_397->g_43 = (-1); (p_397->g_43 == 5); ++p_397->g_43)
        { /* block id: 69 */
            int32_t ***l_165 = (void*)0;
            int32_t l_194 = 1L;
            int32_t l_200[3][6][8] = {{{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L},{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L},{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L},{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L},{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L},{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L}},{{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L},{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L},{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L},{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L},{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L},{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L}},{{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L},{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L},{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L},{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L},{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L},{0x7E9B06FFL,0x4341503CL,0L,0x2E641700L,(-3L),9L,0x2A5DF87EL,0L}}};
            int32_t l_217 = 0x3399677FL;
            int i, j, k;
            (1 + 1);
        }
    }
    return l_192;
}


/* ------------------------------------------ */
/* 
 * reads : p_397->l_comm_values p_397->g_45 p_397->g_46 p_397->g_69 p_397->g_75 p_397->g_76 p_397->g_70 p_397->g_comm_values p_397->g_103 p_397->g_96 p_397->g_43 p_397->g_117 p_397->g_118 p_397->g_119 p_397->g_120 p_397->g_83 p_397->g_121 p_397->g_136
 * writes: p_397->g_43 p_397->g_58 p_397->g_69 p_397->g_70 p_397->g_83 p_397->g_96 p_397->g_103 p_397->g_75 p_397->g_116 p_397->g_119 p_397->g_136
 */
int64_t  func_40(int32_t  p_41, struct S0 * p_397)
{ /* block id: 7 */
    int32_t *l_42 = (void*)0;
    VECTOR(int16_t, 16) l_44 = (VECTOR(int16_t, 16))(0x10EFL, (VECTOR(int16_t, 4))(0x10EFL, (VECTOR(int16_t, 2))(0x10EFL, (-9L)), (-9L)), (-9L), 0x10EFL, (-9L), (VECTOR(int16_t, 2))(0x10EFL, (-9L)), (VECTOR(int16_t, 2))(0x10EFL, (-9L)), 0x10EFL, (-9L), 0x10EFL, (-9L));
    VECTOR(uint16_t, 8) l_47 = (VECTOR(uint16_t, 8))(0x1FFDL, (VECTOR(uint16_t, 4))(0x1FFDL, (VECTOR(uint16_t, 2))(0x1FFDL, 0x3B69L), 0x3B69L), 0x3B69L, 0x1FFDL, 0x3B69L);
    VECTOR(int32_t, 16) l_48 = (VECTOR(int32_t, 16))(0x1BBDB817L, (VECTOR(int32_t, 4))(0x1BBDB817L, (VECTOR(int32_t, 2))(0x1BBDB817L, 0x5C02AC6AL), 0x5C02AC6AL), 0x5C02AC6AL, 0x1BBDB817L, 0x5C02AC6AL, (VECTOR(int32_t, 2))(0x1BBDB817L, 0x5C02AC6AL), (VECTOR(int32_t, 2))(0x1BBDB817L, 0x5C02AC6AL), 0x1BBDB817L, 0x5C02AC6AL, 0x1BBDB817L, 0x5C02AC6AL);
    VECTOR(int64_t, 8) l_49 = (VECTOR(int64_t, 8))(0x46C8ECDCC21D2CF1L, (VECTOR(int64_t, 4))(0x46C8ECDCC21D2CF1L, (VECTOR(int64_t, 2))(0x46C8ECDCC21D2CF1L, 0x04A86D6A6C34309EL), 0x04A86D6A6C34309EL), 0x04A86D6A6C34309EL, 0x46C8ECDCC21D2CF1L, 0x04A86D6A6C34309EL);
    int32_t *l_57 = &p_397->g_58;
    int8_t *l_68 = &p_397->g_69;
    uint32_t l_81 = 0xFE95B7CAL;
    int32_t *l_82[2];
    int32_t **l_123 = (void*)0;
    int32_t **l_124 = &l_42;
    uint32_t l_134 = 4294967295UL;
    int32_t *l_135 = &p_397->g_136;
    int i;
    for (i = 0; i < 2; i++)
        l_82[i] = &p_397->g_83;
    (*l_135) &= ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x09AB83EBL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((p_397->g_43 = p_397->l_comm_values[(safe_mod_func_uint32_t_u_u(p_397->tid, 3))]), 0x2796A450L, 0x17911697L, 1L)).hi)), ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(l_44.s4484)).wwyywyyz, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(p_397->g_45.xwyyzzwwzzyywxwy)).s063f)).wwwxwyxwxyyywwzz, ((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 2))(0xF2FFL, 0x6FE5L)).xyxxyyxxyxyxxyyy, ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 4))(p_397->g_46.s0115)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 8))(l_47.s10433410))))).s4661727333464253)).se8af))).xxxywyxwzwyxwzxy)))))))).even))).s54, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(l_48.sa04d)).hi, (int32_t)(((VECTOR(int64_t, 16))(1L, ((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_49.s15)), (-4L), 0x01CA8FD5F396434DL)).odd, ((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 16))(((+0L) & ((safe_sub_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), ((&p_41 == ((*l_124) = func_54(((*l_57) = p_397->l_comm_values[(safe_mod_func_uint32_t_u_u(p_397->tid, 3))]), ((*l_124) = func_59(func_64((p_397->g_83 = ((((safe_lshift_func_int8_t_s_s(((0x32A224D52A103ABEL <= ((p_397->g_46.s6 ^ (p_397->g_70[2][0] = ((*l_68) |= (p_41 > p_397->g_45.w)))) , (((((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(p_397->g_75.s2037c870)))).lo, (int16_t)(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_397->g_76.s5c)), 1L, (-1L), (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(0x3849L, l_81)), 11)), p_397->g_70[2][0], 0x7EL, 6L)).s7 && p_41)))).zyzywwzy, ((VECTOR(int16_t, 8))(0x1A75L))))).odd, ((VECTOR(int16_t, 4))((-1L)))))).y && p_397->g_comm_values[p_397->tid]) && p_397->g_46.s3) & l_47.s6), l_47.s7)), p_397->g_46.s1)) < p_41) ^ 0x358DD5D9L) , p_397->g_comm_values[p_397->tid]) , (-2L)))) | p_397->l_comm_values[(safe_mod_func_uint32_t_u_u(p_397->tid, 3))]), 2)) == p_397->g_75.se) | l_81) == FAKE_DIVERGE(p_397->local_0_offset, get_local_id(0), 10))), p_397), p_397->g_120, &p_397->g_121, p_41, p_397)), p_397))) & 3L))) && 9L) > p_397->g_121), 0x6828L)) , 18446744073709551615UL)), 0x2D627FB3206E961CL, 3L, p_41, ((VECTOR(int64_t, 4))(0x7032A699B7D3352EL)), (-1L), 0x7BEB0F35947468A1L, p_41, p_397->g_45.y, l_134, 0x3D763EE6F0E40F49L, 0x5CCDC5626D82A544L, 5L)).odd, ((VECTOR(int64_t, 8))((-8L)))))).s73, ((VECTOR(int64_t, 2))((-7L)))))), ((VECTOR(int64_t, 2))(5L)), ((VECTOR(int64_t, 2))(1L))))).yyyx)).xxxyyywx, ((VECTOR(int64_t, 8))(0x26205CD23E3A335CL))))), ((VECTOR(int64_t, 2))(0x3B19F011E324BC14L)), p_397->g_75.s8, ((VECTOR(int64_t, 4))(0x141200A2DC1931FAL)))).s8 || p_397->g_70[7][0])))), 1L, ((VECTOR(int32_t, 2))(0L)), 0L, 0x322D81C2L, (-6L))).even, ((VECTOR(int32_t, 4))(0x3AEEB665L))))), ((VECTOR(int32_t, 4))((-3L)))))).xxzxyyyy)).s01, ((VECTOR(int32_t, 2))(6L))))), 1L, 0x52546FF5L, ((VECTOR(int32_t, 2))(0L)), (-1L), (-8L))), ((VECTOR(int32_t, 8))(0x236358C7L)), ((VECTOR(int32_t, 8))(2L))))).s31))).yxxxxxxyxyyyxxxy, (int32_t)5L, (int32_t)p_41))).s8d)))).xxxx)).zzwxwywx, ((VECTOR(int32_t, 8))(0x014AE1D9L))))).s42)).yxyy)), ((VECTOR(int32_t, 2))(0x4E81A1E7L)), 1L, ((VECTOR(int32_t, 8))(0x3E6EA00FL)))).sd1)).yyxx)).zwyyxyyx, ((VECTOR(int32_t, 8))(1L))))).s5;
    return p_41;
}


/* ------------------------------------------ */
/* 
 * reads : p_397->g_69 p_397->g_83
 * writes: p_397->g_69 p_397->g_83
 */
int32_t * func_54(int32_t  p_55, int32_t * p_56, struct S0 * p_397)
{ /* block id: 45 */
    uint32_t l_130 = 4294967295UL;
    int32_t *l_133 = (void*)0;
    for (p_397->g_69 = 0; (p_397->g_69 <= (-13)); p_397->g_69 = safe_sub_func_uint8_t_u_u(p_397->g_69, 8))
    { /* block id: 48 */
        uint8_t l_129[3];
        int i;
        for (i = 0; i < 3; i++)
            l_129[i] = 250UL;
        for (p_397->g_83 = 17; (p_397->g_83 <= 11); p_397->g_83 = safe_sub_func_uint64_t_u_u(p_397->g_83, 1))
        { /* block id: 51 */
            if (l_129[0])
                break;
            return p_56;
        }
    }
    l_130--;
    return l_133;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_59(int32_t * p_60, int32_t * p_61, int32_t * p_62, int32_t  p_63, struct S0 * p_397)
{ /* block id: 42 */
    int32_t *l_122 = &p_397->g_119;
    return l_122;
}


/* ------------------------------------------ */
/* 
 * reads : p_397->g_75 p_397->l_comm_values p_397->g_103 p_397->g_96 p_397->g_43 p_397->g_45 p_397->g_70 p_397->g_117 p_397->g_118 p_397->g_119
 * writes: p_397->g_96 p_397->g_103 p_397->g_43 p_397->g_75 p_397->g_116 p_397->g_119
 */
int32_t * func_64(int32_t  p_65, struct S0 * p_397)
{ /* block id: 13 */
    uint32_t l_99 = 0x4D465192L;
    int32_t *l_100 = &p_397->g_96;
    int32_t *l_102 = (void*)0;
    int32_t **l_101 = &l_102;
    VECTOR(uint8_t, 2) l_110 = (VECTOR(uint8_t, 2))(0x7DL, 0xCFL);
    int16_t *l_111 = &p_397->g_43;
    int16_t *l_112 = (void*)0;
    int16_t *l_113 = (void*)0;
    int16_t *l_114[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_115 = &p_397->g_116;
    int i;
    for (p_65 = 15; (p_65 <= (-26)); p_65 = safe_sub_func_int8_t_s_s(p_65, 9))
    { /* block id: 16 */
        uint32_t l_94 = 0x468BD1E8L;
        int32_t *l_95 = &p_397->g_96;
        if ((atomic_inc(&p_397->l_atomic_input[12]) == 9))
        { /* block id: 18 */
            int32_t l_86 = 0L;
            uint8_t l_92 = 9UL;
            uint32_t l_93 = 6UL;
            for (l_86 = 0; (l_86 != (-10)); l_86--)
            { /* block id: 21 */
                int32_t l_90 = 0L;
                int32_t *l_89 = &l_90;
                int32_t *l_91 = &l_90;
                l_91 = l_89;
            }
            l_93 ^= l_92;
            unsigned int result = 0;
            result += l_86;
            result += l_92;
            result += l_93;
            atomic_add(&p_397->l_special_values[12], result);
        }
        else
        { /* block id: 25 */
            (1 + 1);
        }
        if (p_397->g_75.s9)
            continue;
        if (p_397->l_comm_values[(safe_mod_func_uint32_t_u_u(p_397->tid, 3))])
            continue;
        (*l_95) = l_94;
    }
    p_397->g_103[2][4] ^= (safe_sub_func_uint16_t_u_u((l_99 || ((*l_100) = (l_100 == ((*l_101) = &p_397->g_96)))), p_397->g_75.s7));
    (*l_100) = (*l_100);
    (*p_397->g_118) |= (safe_lshift_func_int16_t_s_u(p_65, (safe_mul_func_uint16_t_u_u(((((((((*l_101) = &p_397->g_96) == &p_397->g_96) & (*l_100)) > p_397->g_96) < (((*l_115) = (p_65 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(4L, 0x5FC1DD83L)), (int32_t)(p_397->g_96 & (((safe_sub_func_int16_t_s_s((((VECTOR(uint8_t, 16))(l_110.yxyxxyyxxxyxxyyx)).s6 < ((p_397->g_75.se = ((*l_111) &= 0x28A2L)) | (((p_397->g_45.z & 0x9B202198C4011989L) == (-7L)) || p_65))), p_397->g_70[2][0])) ^ (*l_100)) < 1L))))), 0x49A4CFDDL, 0x10E358E7L)), ((VECTOR(int32_t, 4))(0x7DCAD63BL)), ((VECTOR(int32_t, 4))((-4L)))))), 0x62AC5FADL, ((VECTOR(int32_t, 2))((-5L))), ((VECTOR(int32_t, 2))((-6L))), 0L, 0x624E5D96L, 0x7F4CF0FEL, p_65, 0x1D071B3EL, 7L, (-10L))).hi)).s7)) , p_65)) , &p_397->g_43) == p_397->g_117), p_397->g_96))));
    return &p_397->g_83;
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
    __local int64_t l_comm_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_comm_values[i] = 1;
    struct S0 c_398;
    struct S0* p_397 = &c_398;
    struct S0 c_399 = {
        0L, // p_397->g_29
        0x3579L, // p_397->g_43
        (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0xEF54L), 0xEF54L), // p_397->g_45
        (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0x2646L), 0x2646L), 0x2646L, 8UL, 0x2646L), // p_397->g_46
        0x5E77332EL, // p_397->g_58
        1L, // p_397->g_69
        {{0x57A232894124F91EL},{0x57A232894124F91EL},{0x57A232894124F91EL},{0x57A232894124F91EL},{0x57A232894124F91EL},{0x57A232894124F91EL},{0x57A232894124F91EL},{0x57A232894124F91EL},{0x57A232894124F91EL}}, // p_397->g_70
        (VECTOR(int16_t, 16))(0x2755L, (VECTOR(int16_t, 4))(0x2755L, (VECTOR(int16_t, 2))(0x2755L, 0x2997L), 0x2997L), 0x2997L, 0x2755L, 0x2997L, (VECTOR(int16_t, 2))(0x2755L, 0x2997L), (VECTOR(int16_t, 2))(0x2755L, 0x2997L), 0x2755L, 0x2997L, 0x2755L, 0x2997L), // p_397->g_75
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x0BL), 0x0BL), 0x0BL, 0L, 0x0BL, (VECTOR(int8_t, 2))(0L, 0x0BL), (VECTOR(int8_t, 2))(0L, 0x0BL), 0L, 0x0BL, 0L, 0x0BL), // p_397->g_76
        (-1L), // p_397->g_83
        0x46AF0F77L, // p_397->g_96
        {{1UL,0x5C41L,0x5C41L,1UL,1UL,0x5C41L},{1UL,0x5C41L,0x5C41L,1UL,1UL,0x5C41L},{1UL,0x5C41L,0x5C41L,1UL,1UL,0x5C41L},{1UL,0x5C41L,0x5C41L,1UL,1UL,0x5C41L},{1UL,0x5C41L,0x5C41L,1UL,1UL,0x5C41L}}, // p_397->g_103
        0L, // p_397->g_116
        (void*)0, // p_397->g_117
        0x15485A9BL, // p_397->g_119
        &p_397->g_119, // p_397->g_118
        0x25B5247BL, // p_397->g_121
        &p_397->g_121, // p_397->g_120
        0x5685DB3BL, // p_397->g_136
        (void*)0, // p_397->g_142
        4L, // p_397->g_144
        &p_397->g_144, // p_397->g_143
        6UL, // p_397->g_170
        0x85L, // p_397->g_172
        (VECTOR(int8_t, 4))(0x7AL, (VECTOR(int8_t, 2))(0x7AL, 8L), 8L), // p_397->g_173
        (VECTOR(int64_t, 4))(0x599C243D1E10FD7AL, (VECTOR(int64_t, 2))(0x599C243D1E10FD7AL, 5L), 5L), // p_397->g_182
        0x0F3FEDEC0B913E92L, // p_397->g_197
        (-1L), // p_397->g_198
        0L, // p_397->g_202
        {0x0CB5B8B1L,(-7L),0x0CB5B8B1L,0x0CB5B8B1L,(-7L),0x0CB5B8B1L,0x0CB5B8B1L,(-7L)}, // p_397->g_203
        {65535UL,65535UL,65535UL}, // p_397->g_205
        (void*)0, // p_397->g_224
        &p_397->g_224, // p_397->g_223
        {18446744073709551615UL}, // p_397->g_242
        65527UL, // p_397->g_274
        {{4294967295UL,4294967292UL},{4294967295UL,4294967292UL},{4294967295UL,4294967292UL},{4294967295UL,4294967292UL},{4294967295UL,4294967292UL}}, // p_397->g_279
        {(void*)0,(void*)0,(void*)0}, // p_397->g_284
        &p_397->g_284[1], // p_397->g_283
        &p_397->g_283, // p_397->g_285
        (-1L), // p_397->g_298
        0x2C2A70F420576873L, // p_397->g_299
        1UL, // p_397->g_317
        &p_397->g_317, // p_397->g_316
        &p_397->g_317, // p_397->g_322
        0L, // p_397->g_344
        {{{0x29L,(-5L),3L,0x71L,3L,(-5L)},{0x29L,(-5L),3L,0x71L,3L,(-5L)},{0x29L,(-5L),3L,0x71L,3L,(-5L)},{0x29L,(-5L),3L,0x71L,3L,(-5L)},{0x29L,(-5L),3L,0x71L,3L,(-5L)},{0x29L,(-5L),3L,0x71L,3L,(-5L)}}}, // p_397->g_345
        1UL, // p_397->g_346
        {{0x9CFB12D965E72275L,0x9CFB12D965E72275L},{0x9CFB12D965E72275L,0x9CFB12D965E72275L},{0x9CFB12D965E72275L,0x9CFB12D965E72275L},{0x9CFB12D965E72275L,0x9CFB12D965E72275L},{0x9CFB12D965E72275L,0x9CFB12D965E72275L},{0x9CFB12D965E72275L,0x9CFB12D965E72275L},{0x9CFB12D965E72275L,0x9CFB12D965E72275L},{0x9CFB12D965E72275L,0x9CFB12D965E72275L},{0x9CFB12D965E72275L,0x9CFB12D965E72275L},{0x9CFB12D965E72275L,0x9CFB12D965E72275L}}, // p_397->g_367
        0x0DC5F041L, // p_397->g_370
        (-4L), // p_397->g_387
        0L, // p_397->g_388
        0L, // p_397->g_390
        0x17L, // p_397->g_391
        0, // p_397->v_collective
        sequence_input[get_global_id(0)], // p_397->global_0_offset
        sequence_input[get_global_id(1)], // p_397->global_1_offset
        sequence_input[get_global_id(2)], // p_397->global_2_offset
        sequence_input[get_local_id(0)], // p_397->local_0_offset
        sequence_input[get_local_id(1)], // p_397->local_1_offset
        sequence_input[get_local_id(2)], // p_397->local_2_offset
        sequence_input[get_group_id(0)], // p_397->group_0_offset
        sequence_input[get_group_id(1)], // p_397->group_1_offset
        sequence_input[get_group_id(2)], // p_397->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[0][get_linear_local_id()])), // p_397->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_398 = c_399;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_397);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_397->g_29, "p_397->g_29", print_hash_value);
    transparent_crc(p_397->g_43, "p_397->g_43", print_hash_value);
    transparent_crc(p_397->g_45.x, "p_397->g_45.x", print_hash_value);
    transparent_crc(p_397->g_45.y, "p_397->g_45.y", print_hash_value);
    transparent_crc(p_397->g_45.z, "p_397->g_45.z", print_hash_value);
    transparent_crc(p_397->g_45.w, "p_397->g_45.w", print_hash_value);
    transparent_crc(p_397->g_46.s0, "p_397->g_46.s0", print_hash_value);
    transparent_crc(p_397->g_46.s1, "p_397->g_46.s1", print_hash_value);
    transparent_crc(p_397->g_46.s2, "p_397->g_46.s2", print_hash_value);
    transparent_crc(p_397->g_46.s3, "p_397->g_46.s3", print_hash_value);
    transparent_crc(p_397->g_46.s4, "p_397->g_46.s4", print_hash_value);
    transparent_crc(p_397->g_46.s5, "p_397->g_46.s5", print_hash_value);
    transparent_crc(p_397->g_46.s6, "p_397->g_46.s6", print_hash_value);
    transparent_crc(p_397->g_46.s7, "p_397->g_46.s7", print_hash_value);
    transparent_crc(p_397->g_58, "p_397->g_58", print_hash_value);
    transparent_crc(p_397->g_69, "p_397->g_69", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_397->g_70[i][j], "p_397->g_70[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_397->g_75.s0, "p_397->g_75.s0", print_hash_value);
    transparent_crc(p_397->g_75.s1, "p_397->g_75.s1", print_hash_value);
    transparent_crc(p_397->g_75.s2, "p_397->g_75.s2", print_hash_value);
    transparent_crc(p_397->g_75.s3, "p_397->g_75.s3", print_hash_value);
    transparent_crc(p_397->g_75.s4, "p_397->g_75.s4", print_hash_value);
    transparent_crc(p_397->g_75.s5, "p_397->g_75.s5", print_hash_value);
    transparent_crc(p_397->g_75.s6, "p_397->g_75.s6", print_hash_value);
    transparent_crc(p_397->g_75.s7, "p_397->g_75.s7", print_hash_value);
    transparent_crc(p_397->g_75.s8, "p_397->g_75.s8", print_hash_value);
    transparent_crc(p_397->g_75.s9, "p_397->g_75.s9", print_hash_value);
    transparent_crc(p_397->g_75.sa, "p_397->g_75.sa", print_hash_value);
    transparent_crc(p_397->g_75.sb, "p_397->g_75.sb", print_hash_value);
    transparent_crc(p_397->g_75.sc, "p_397->g_75.sc", print_hash_value);
    transparent_crc(p_397->g_75.sd, "p_397->g_75.sd", print_hash_value);
    transparent_crc(p_397->g_75.se, "p_397->g_75.se", print_hash_value);
    transparent_crc(p_397->g_75.sf, "p_397->g_75.sf", print_hash_value);
    transparent_crc(p_397->g_76.s0, "p_397->g_76.s0", print_hash_value);
    transparent_crc(p_397->g_76.s1, "p_397->g_76.s1", print_hash_value);
    transparent_crc(p_397->g_76.s2, "p_397->g_76.s2", print_hash_value);
    transparent_crc(p_397->g_76.s3, "p_397->g_76.s3", print_hash_value);
    transparent_crc(p_397->g_76.s4, "p_397->g_76.s4", print_hash_value);
    transparent_crc(p_397->g_76.s5, "p_397->g_76.s5", print_hash_value);
    transparent_crc(p_397->g_76.s6, "p_397->g_76.s6", print_hash_value);
    transparent_crc(p_397->g_76.s7, "p_397->g_76.s7", print_hash_value);
    transparent_crc(p_397->g_76.s8, "p_397->g_76.s8", print_hash_value);
    transparent_crc(p_397->g_76.s9, "p_397->g_76.s9", print_hash_value);
    transparent_crc(p_397->g_76.sa, "p_397->g_76.sa", print_hash_value);
    transparent_crc(p_397->g_76.sb, "p_397->g_76.sb", print_hash_value);
    transparent_crc(p_397->g_76.sc, "p_397->g_76.sc", print_hash_value);
    transparent_crc(p_397->g_76.sd, "p_397->g_76.sd", print_hash_value);
    transparent_crc(p_397->g_76.se, "p_397->g_76.se", print_hash_value);
    transparent_crc(p_397->g_76.sf, "p_397->g_76.sf", print_hash_value);
    transparent_crc(p_397->g_83, "p_397->g_83", print_hash_value);
    transparent_crc(p_397->g_96, "p_397->g_96", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_397->g_103[i][j], "p_397->g_103[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_397->g_116, "p_397->g_116", print_hash_value);
    transparent_crc(p_397->g_119, "p_397->g_119", print_hash_value);
    transparent_crc(p_397->g_121, "p_397->g_121", print_hash_value);
    transparent_crc(p_397->g_136, "p_397->g_136", print_hash_value);
    transparent_crc(p_397->g_144, "p_397->g_144", print_hash_value);
    transparent_crc(p_397->g_170, "p_397->g_170", print_hash_value);
    transparent_crc(p_397->g_172, "p_397->g_172", print_hash_value);
    transparent_crc(p_397->g_173.x, "p_397->g_173.x", print_hash_value);
    transparent_crc(p_397->g_173.y, "p_397->g_173.y", print_hash_value);
    transparent_crc(p_397->g_173.z, "p_397->g_173.z", print_hash_value);
    transparent_crc(p_397->g_173.w, "p_397->g_173.w", print_hash_value);
    transparent_crc(p_397->g_182.x, "p_397->g_182.x", print_hash_value);
    transparent_crc(p_397->g_182.y, "p_397->g_182.y", print_hash_value);
    transparent_crc(p_397->g_182.z, "p_397->g_182.z", print_hash_value);
    transparent_crc(p_397->g_182.w, "p_397->g_182.w", print_hash_value);
    transparent_crc(p_397->g_197, "p_397->g_197", print_hash_value);
    transparent_crc(p_397->g_198, "p_397->g_198", print_hash_value);
    transparent_crc(p_397->g_202, "p_397->g_202", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_397->g_203[i], "p_397->g_203[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_397->g_205[i], "p_397->g_205[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_397->g_242[i], "p_397->g_242[i]", print_hash_value);

    }
    transparent_crc(p_397->g_274, "p_397->g_274", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_397->g_279[i][j], "p_397->g_279[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_397->g_298, "p_397->g_298", print_hash_value);
    transparent_crc(p_397->g_299, "p_397->g_299", print_hash_value);
    transparent_crc(p_397->g_317, "p_397->g_317", print_hash_value);
    transparent_crc(p_397->g_344, "p_397->g_344", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_397->g_345[i][j][k], "p_397->g_345[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_397->g_346, "p_397->g_346", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_397->g_367[i][j], "p_397->g_367[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_397->g_370, "p_397->g_370", print_hash_value);
    transparent_crc(p_397->g_387, "p_397->g_387", print_hash_value);
    transparent_crc(p_397->g_388, "p_397->g_388", print_hash_value);
    transparent_crc(p_397->g_390, "p_397->g_390", print_hash_value);
    transparent_crc(p_397->g_391, "p_397->g_391", print_hash_value);
    transparent_crc(p_397->v_collective, "p_397->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 38; i++)
            transparent_crc(p_397->g_special_values[i + 38 * get_linear_group_id()], "p_397->g_special_values[i + 38 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 38; i++)
            transparent_crc(p_397->l_special_values[i], "p_397->l_special_values[i]", print_hash_value);
    transparent_crc(p_397->l_comm_values[get_linear_local_id()], "p_397->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_397->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()], "p_397->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
