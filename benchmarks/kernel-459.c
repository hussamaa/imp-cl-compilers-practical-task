// --atomics 71 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 59,88,1 -l 1,88,1
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

__constant uint32_t permutations[10][88] = {
{26,78,17,54,80,13,75,1,48,0,37,82,11,69,51,47,35,31,79,49,77,57,19,65,73,59,87,68,62,29,39,72,34,76,52,10,41,3,24,64,71,4,42,12,44,70,50,83,14,22,23,61,45,8,15,67,25,36,2,27,32,28,38,86,55,81,6,16,60,33,9,85,63,43,20,74,53,40,18,56,7,46,21,66,5,58,30,84}, // permutation 0
{1,28,81,56,47,29,58,31,38,43,79,82,23,39,0,67,71,59,6,11,61,42,48,12,35,80,74,36,26,54,63,66,37,34,53,84,13,24,86,45,2,68,65,78,18,5,25,19,69,41,10,50,60,49,8,55,52,62,14,85,17,83,40,27,77,76,15,16,7,9,51,21,3,57,33,75,30,70,64,32,87,46,22,4,72,20,44,73}, // permutation 1
{20,54,23,78,56,38,12,9,16,29,6,42,55,41,79,72,35,40,49,27,61,48,5,70,81,33,66,15,57,4,45,10,74,7,32,37,17,14,24,2,73,71,22,51,69,19,84,47,67,76,46,77,21,11,82,64,44,3,59,1,0,80,65,53,30,62,8,68,18,86,13,39,75,87,36,83,34,85,26,60,58,28,63,50,25,52,43,31}, // permutation 2
{7,38,26,17,70,43,80,67,51,6,24,1,63,54,15,14,33,0,59,29,62,45,78,57,44,37,2,39,3,9,41,32,31,53,47,27,16,11,74,50,35,22,60,55,87,86,40,52,13,5,42,68,71,28,10,56,82,73,65,49,64,61,4,48,77,75,20,25,46,36,18,58,76,72,81,12,66,85,8,30,83,69,21,84,79,23,19,34}, // permutation 3
{7,29,76,12,43,41,61,25,45,81,63,10,47,31,19,14,44,13,55,56,37,68,86,39,23,85,65,73,30,74,51,17,21,82,69,0,26,35,3,33,5,84,49,16,71,32,75,34,77,24,53,54,8,40,4,48,50,62,42,78,1,27,59,87,72,20,83,60,70,9,66,57,46,52,6,15,58,38,64,67,36,22,11,2,28,79,18,80}, // permutation 4
{30,35,69,3,0,57,41,27,44,53,5,76,45,66,43,34,32,62,72,47,71,78,15,1,55,4,22,33,77,74,67,38,61,86,20,49,13,16,64,59,42,17,56,2,14,11,12,48,68,54,24,80,63,70,87,83,51,21,50,18,25,36,73,23,81,60,39,9,85,46,84,52,7,37,82,6,40,31,79,19,8,65,58,26,75,28,29,10}, // permutation 5
{47,72,24,53,59,80,4,39,16,79,61,1,8,9,55,10,85,7,40,38,64,18,70,43,32,74,42,36,2,21,57,50,27,63,44,67,68,17,41,82,84,58,0,62,69,31,51,77,87,52,37,29,60,73,83,23,14,71,48,46,78,76,11,56,35,15,20,12,30,34,19,86,22,54,81,25,75,3,13,66,28,65,5,49,26,33,6,45}, // permutation 6
{3,82,51,6,57,26,33,68,75,79,8,7,45,13,23,15,41,55,63,32,10,62,56,59,70,36,74,42,34,27,49,19,0,20,60,29,14,73,54,31,61,53,87,50,44,69,5,1,17,4,39,21,64,84,24,67,83,25,46,48,80,40,85,65,2,58,18,12,11,77,30,16,78,72,71,37,35,28,47,43,38,86,76,22,66,9,52,81}, // permutation 7
{36,54,50,20,24,48,28,87,77,57,79,34,72,44,64,3,30,43,42,22,58,12,14,1,5,63,74,51,39,0,46,71,19,69,8,68,62,56,47,52,13,21,66,38,80,49,84,25,11,37,2,10,81,35,9,16,27,67,61,70,17,53,33,4,40,18,73,29,41,86,82,75,6,31,76,65,55,83,23,32,45,59,85,60,7,15,78,26}, // permutation 8
{87,81,33,76,58,62,0,7,83,64,50,74,60,24,18,67,47,59,77,55,39,85,13,66,5,17,69,84,71,42,53,10,19,61,68,54,21,44,22,8,38,26,37,6,23,11,49,63,70,40,45,48,31,52,75,51,1,82,12,29,16,28,2,78,15,72,86,4,27,73,30,32,20,80,3,43,79,36,34,35,9,46,25,41,57,14,56,65} // permutation 9
};

// Seed: 553104517

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S1 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4;
    int32_t g_5;
    VECTOR(int32_t, 2) g_31;
    int16_t g_40;
    int64_t *g_41;
    uint8_t g_63;
    uint8_t g_72;
    uint32_t g_89[7][9][1];
    int64_t g_96;
    uint8_t g_97;
    VECTOR(int32_t, 2) g_186;
    volatile int16_t g_203;
    volatile int16_t * volatile g_202;
    volatile int16_t * volatile g_204;
    volatile int16_t g_206;
    volatile int16_t *g_205;
    volatile int16_t * volatile *g_201[10];
    VECTOR(int16_t, 8) g_216;
    VECTOR(int64_t, 2) g_251;
    uint32_t g_261;
    int32_t *g_265;
    int32_t * volatile *g_264;
    uint32_t g_273;
    VECTOR(uint16_t, 8) g_278;
    VECTOR(int64_t, 4) g_280;
    VECTOR(int32_t, 2) g_301;
    int8_t g_307;
    int32_t g_309;
    VECTOR(uint16_t, 2) g_315;
    uint8_t g_322[9];
    uint32_t g_324;
    VECTOR(int16_t, 16) g_341;
    VECTOR(int16_t, 2) g_345;
    VECTOR(int16_t, 4) g_346;
    VECTOR(int16_t, 8) g_348;
    VECTOR(int16_t, 4) g_430;
    uint64_t g_432[5][2][7];
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
int32_t  func_1(struct S1 * p_446);
int32_t * func_8(int16_t  p_9, int32_t  p_10, uint32_t  p_11, int32_t * p_12, struct S1 * p_446);
int16_t  func_24(int32_t  p_25, struct S1 * p_446);
int16_t  func_26(int16_t  p_27, uint32_t  p_28, int64_t * p_29, struct S1 * p_446);
uint16_t  func_34(int64_t * p_35, struct S1 * p_446);
int8_t  func_47(int64_t * p_48, struct S1 * p_446);
int32_t  func_49(int8_t  p_50, int64_t * p_51, struct S1 * p_446);
int64_t * func_53(int64_t * p_54, uint64_t  p_55, int64_t * p_56, struct S1 * p_446);
int32_t * func_58(uint32_t  p_59, struct S1 * p_446);
int32_t  func_64(int32_t * p_65, int16_t  p_66, uint8_t  p_67, struct S1 * p_446);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_446->g_5 p_446->g_4 p_446->g_comm_values p_446->l_comm_values p_446->g_348 p_446->g_264 p_446->g_265 p_446->g_273 p_446->g_261 p_446->g_430 p_446->g_432 p_446->g_205 p_446->g_206
 * writes: p_446->g_5 p_446->l_comm_values p_446->g_265 p_446->g_273 p_446->g_261 p_446->g_432 p_446->g_307
 */
int32_t  func_1(struct S1 * p_446)
{ /* block id: 4 */
    int32_t l_38 = 1L;
    int32_t *l_408 = (void*)0;
    int32_t *l_409 = (void*)0;
    int32_t *l_410 = (void*)0;
    int32_t *l_411 = (void*)0;
    int32_t *l_412 = &p_446->g_5;
    int32_t *l_413 = (void*)0;
    int32_t *l_414 = (void*)0;
    int32_t *l_415 = (void*)0;
    int32_t *l_416 = &l_38;
    int32_t *l_417 = &p_446->g_5;
    int32_t *l_418[1][7][6] = {{{&l_38,(void*)0,&l_38,&l_38,(void*)0,&l_38},{&l_38,(void*)0,&l_38,&l_38,(void*)0,&l_38},{&l_38,(void*)0,&l_38,&l_38,(void*)0,&l_38},{&l_38,(void*)0,&l_38,&l_38,(void*)0,&l_38},{&l_38,(void*)0,&l_38,&l_38,(void*)0,&l_38},{&l_38,(void*)0,&l_38,&l_38,(void*)0,&l_38},{&l_38,(void*)0,&l_38,&l_38,(void*)0,&l_38}}};
    uint16_t l_419 = 1UL;
    int64_t l_426 = 0x7198DC54B8A9A325L;
    VECTOR(int16_t, 4) l_435 = (VECTOR(int16_t, 4))(0x0CE6L, (VECTOR(int16_t, 2))(0x0CE6L, 0x0A81L), 0x0A81L);
    int8_t l_445 = 0L;
    int i, j, k;
    for (p_446->g_5 = 0; (p_446->g_5 != (-15)); p_446->g_5 = safe_sub_func_uint32_t_u_u(p_446->g_5, 1))
    { /* block id: 7 */
        uint16_t l_15 = 6UL;
        int64_t *l_16 = (void*)0;
        int64_t *l_17 = (void*)0;
        int64_t *l_18 = (void*)0;
        int64_t *l_19 = (void*)0;
        int64_t *l_20 = (void*)0;
        int64_t *l_21 = (void*)0;
        int64_t *l_36[6][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int16_t *l_39 = &p_446->g_40;
        int32_t **l_406 = &p_446->g_265;
        int32_t **l_407 = (void*)0;
        int i, j;
        l_409 = (l_408 = ((*l_406) = func_8(p_446->g_4, (p_446->g_comm_values[p_446->tid] ^ p_446->g_5), ((((p_446->l_comm_values[(safe_mod_func_uint32_t_u_u(p_446->tid, 88))] , (safe_div_func_int64_t_s_s((p_446->l_comm_values[(safe_mod_func_uint32_t_u_u(p_446->tid, 88))] = l_15), GROUP_DIVERGE(1, 1)))) , ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(6L, 0x78L)).xyxx))).odd, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((safe_rshift_func_int16_t_s_s(func_24(((p_446->g_comm_values[p_446->tid] == func_26((safe_unary_minus_func_int16_t_s(((*l_39) &= ((p_446->g_5 && ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_446->g_31.xyyx)).xzyzyzxz)).s5066555451437100)).lo, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))((safe_rshift_func_int8_t_s_u((func_34(l_36[4][0], p_446) | 0x816EL), p_446->g_31.y)), l_38, 0L, 9L, ((VECTOR(int32_t, 8))(0x54D1843AL)), ((VECTOR(int32_t, 4))(2L)))).odd)))))).s03)).yxyxxxyxyyyxyyxy)).s9) <= 0L)))), p_446->g_comm_values[p_446->tid], p_446->g_41, p_446)) != 1L), p_446), l_15)), p_446->l_comm_values[(safe_mod_func_uint32_t_u_u(p_446->tid, 88))], 0x57L, 0x12L)).xxxwzzyywxzwxywz)).s27, ((VECTOR(int8_t, 2))(0x60L))))).xxyx, ((VECTOR(int8_t, 4))((-7L)))))).odd)), ((VECTOR(int8_t, 4))(0x3EL)), (-1L), l_38, ((VECTOR(int8_t, 4))((-1L))), 0x74L, 1L, 0L, 0x27L)).s80)).even) < p_446->g_348.s4) && l_15), &p_446->g_5, p_446)));
        (*p_446->g_264) = (*p_446->g_264);
    }
    l_419++;
    for (p_446->g_273 = 19; (p_446->g_273 == 27); ++p_446->g_273)
    { /* block id: 228 */
        int32_t *l_429 = (void*)0;
        int32_t l_443 = 0x04893502L;
        (*p_446->g_264) = func_58((safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_446->local_1_offset, get_local_id(1), 10), l_426)), p_446);
        for (p_446->g_261 = 16; (p_446->g_261 != 40); ++p_446->g_261)
        { /* block id: 232 */
            uint64_t *l_431 = &p_446->g_432[1][1][5];
            int32_t l_442 = 0L;
            int8_t *l_444 = &p_446->g_307;
            (*p_446->g_264) = l_429;
            (*l_417) = (((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(p_446->g_430.wx)), ((VECTOR(int16_t, 16))(0x5703L, 0L, (GROUP_DIVERGE(2, 1) | (((4294967295UL >= ((--(*l_431)) <= p_446->g_348.s4)) | ((VECTOR(int16_t, 16))(l_435.wywxxyzwwyxwwzwx)).s4) , ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 2))(0x7C490B26964DAE98L, 7L))))).even)), 0x2F35L, (-2L), 0x01A8L, (4294967287UL < (((((*l_444) = (0xFCD3D3F69381AE92L ^ ((((safe_lshift_func_int8_t_s_s(((0x35L == ((safe_rshift_func_uint16_t_u_s((p_446->g_432[0][1][1] ^ 0UL), 13)) == l_442)) == l_443), 6)) <= l_442) <= l_442) | l_443))) , 1UL) ^ FAKE_DIVERGE(p_446->local_1_offset, get_local_id(1), 10)) && p_446->g_430.w)), 0L, ((VECTOR(int16_t, 4))(0x5645L)), (-3L), (*p_446->g_205), 4L, (-5L))).s05))).hi <= 0x6687L);
        }
    }
    return l_445;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_8(int16_t  p_9, int32_t  p_10, uint32_t  p_11, int32_t * p_12, struct S1 * p_446)
{ /* block id: 210 */
    if ((atomic_inc(&p_446->l_atomic_input[57]) == 4))
    { /* block id: 212 */
        int32_t l_400 = 0x6BE523E8L;
        int32_t *l_399 = &l_400;
        uint8_t l_401 = 1UL;
        int64_t l_404 = 6L;
        int64_t *l_403 = &l_404;
        int64_t **l_402[6] = {&l_403,&l_403,&l_403,&l_403,&l_403,&l_403};
        int64_t **l_405[2];
        int i;
        for (i = 0; i < 2; i++)
            l_405[i] = &l_403;
        l_399 = (void*)0;
        l_401 |= 0x7343193AL;
        l_405[1] = l_402[2];
        unsigned int result = 0;
        result += l_400;
        result += l_401;
        result += l_404;
        atomic_add(&p_446->l_special_values[57], result);
    }
    else
    { /* block id: 216 */
        (1 + 1);
    }
    return &p_446->g_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_446->g_301 p_446->g_346 p_446->g_40 p_446->g_278 p_446->g_265 p_446->g_5 p_446->g_307
 * writes: p_446->g_301 p_446->g_40 p_446->g_186 p_446->g_307
 */
int16_t  func_24(int32_t  p_25, struct S1 * p_446)
{ /* block id: 191 */
    uint8_t l_369 = 0xEEL;
    int32_t *l_370[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t *l_373 = (void*)0;
    int16_t *l_374 = (void*)0;
    int16_t *l_375 = &p_446->g_40;
    int8_t *l_392 = &p_446->g_307;
    uint8_t l_398 = 255UL;
    int i;
    p_446->g_301.y &= (p_25 |= l_369);
    if ((0L | (((*l_375) |= ((safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_446->group_0_offset, get_group_id(0), 10), p_446->g_346.z)) & p_25)) >= (+p_446->g_278.s6))))
    { /* block id: 195 */
        int32_t **l_377 = (void*)0;
        int32_t ***l_376 = &l_377;
        int32_t **l_378 = &l_370[5];
        p_446->g_186.x = (((void*)0 != l_376) , (-2L));
        (*l_378) = (void*)0;
    }
    else
    { /* block id: 198 */
        uint32_t *l_379 = &p_446->g_261;
        int32_t l_393 = 0x7971F1D6L;
        int32_t **l_394 = &l_370[4];
        (*l_394) = (((l_379 = l_370[5]) == (void*)0) , ((safe_sub_func_int32_t_s_s((l_393 |= (safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u(p_25, (safe_div_func_int32_t_s_s((FAKE_DIVERGE(p_446->group_2_offset, get_group_id(2), 10) >= ((*p_446->g_265) == p_25)), (safe_mod_func_int32_t_s_s((&p_446->g_307 != l_392), (((void*)0 != l_392) | 0xCE08L))))))) || 65528UL), 1L))), 0x0FEA8279L)) , (void*)0));
        for (p_446->g_307 = 0; (p_446->g_307 < (-13)); p_446->g_307 = safe_sub_func_uint64_t_u_u(p_446->g_307, 1))
        { /* block id: 204 */
            int32_t *l_397 = (void*)0;
            l_397 = ((*l_394) = &p_25);
        }
    }
    return l_398;
}


/* ------------------------------------------ */
/* 
 * reads : p_446->g_41 p_446->g_comm_values p_446->g_31 p_446->l_comm_values p_446->g_5 p_446->g_72 p_446->g_96 p_446->g_97 p_446->g_186 p_446->g_89 p_446->g_40 p_446->g_261 p_446->g_264 p_446->g_273 p_446->g_216 p_446->g_301 p_446->g_307 p_446->g_315 p_446->g_322 p_446->g_324 p_446->g_251 p_446->g_280 p_446->g_341 p_446->g_345 p_446->g_346 p_446->g_348 p_446->g_309
 * writes: p_446->g_63 p_446->g_31 p_446->g_72 p_446->g_89 p_446->g_97 p_446->g_201 p_446->g_261 p_446->g_273 p_446->g_96 p_446->g_278 p_446->g_280 p_446->g_265 p_446->g_40 p_446->g_322 p_446->g_309
 */
int16_t  func_26(int16_t  p_27, uint32_t  p_28, int64_t * p_29, struct S1 * p_446)
{ /* block id: 12 */
    int32_t *l_44 = &p_446->g_5;
    int32_t **l_368 = &p_446->g_265;
    for (p_27 = (-18); (p_27 <= 25); p_27++)
    { /* block id: 15 */
        int32_t *l_45[1];
        VECTOR(uint64_t, 4) l_46 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 8UL), 8UL);
        int i;
        for (i = 0; i < 1; i++)
            l_45[i] = (void*)0;
        l_45[0] = l_44;
        p_446->g_31.x = (((VECTOR(uint64_t, 4))(l_46.ywyw)).z , (func_47(p_446->g_41, p_446) , (*l_44)));
    }
    (*l_368) = l_44;
    return p_446->g_348.s5;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_34(int64_t * p_35, struct S1 * p_446)
{ /* block id: 9 */
    int16_t l_37 = 0x0690L;
    return l_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_446->g_comm_values p_446->g_31 p_446->l_comm_values p_446->g_5 p_446->g_72 p_446->g_96 p_446->g_97 p_446->g_186 p_446->g_89 p_446->g_40 p_446->g_261 p_446->g_264 p_446->g_273 p_446->g_216 p_446->g_301 p_446->g_307 p_446->g_315 p_446->g_322 p_446->g_324 p_446->g_251 p_446->g_280 p_446->g_341 p_446->g_345 p_446->g_346 p_446->g_348 p_446->g_309
 * writes: p_446->g_63 p_446->g_31 p_446->g_72 p_446->g_89 p_446->g_97 p_446->g_201 p_446->g_261 p_446->g_273 p_446->g_96 p_446->g_278 p_446->g_280 p_446->g_265 p_446->g_40 p_446->g_322 p_446->g_309
 */
int8_t  func_47(int64_t * p_48, struct S1 * p_446)
{ /* block id: 17 */
    int16_t l_52[2][5] = {{0x19E2L,3L,0L,3L,0x19E2L},{0x19E2L,3L,0L,3L,0x19E2L}};
    int64_t *l_57 = (void*)0;
    uint8_t *l_62 = &p_446->g_63;
    int32_t *l_68[2];
    uint8_t *l_71 = &p_446->g_72;
    int32_t l_285 = 1L;
    int32_t **l_287 = (void*)0;
    int32_t **l_288 = &l_68[0];
    int32_t l_365 = 0x5B8D120CL;
    uint32_t *l_367 = (void*)0;
    uint32_t **l_366 = &l_367;
    int i, j;
    for (i = 0; i < 2; i++)
        l_68[i] = (void*)0;
    l_365 &= (p_446->g_31.y = func_49(l_52[0][0], func_53(l_57, (((*l_288) = func_58((safe_sub_func_uint16_t_u_u((l_52[0][0] <= ((*l_62) = func_34(p_48, p_446))), (func_64(l_68[0], p_446->g_comm_values[p_446->tid], (p_446->g_31.x , ((*l_71) = ((p_446->g_31.y = (safe_div_func_int64_t_s_s(p_446->l_comm_values[(safe_mod_func_uint32_t_u_u(p_446->tid, 88))], 0x88D18043A44ADEF0L))) ^ p_446->g_5))), p_446) == l_285))), p_446)) == &l_285), p_48, p_446), p_446));
    l_366 = l_366;
    return p_446->g_345.x;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_49(int8_t  p_50, int64_t * p_51, struct S1 * p_446)
{ /* block id: 179 */
    int32_t l_355[2][8][9] = {{{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L},{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L},{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L},{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L},{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L},{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L},{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L},{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L}},{{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L},{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L},{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L},{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L},{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L},{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L},{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L},{(-10L),0x55914FFCL,0x322AAA8DL,1L,1L,0x06BDCF93L,0x3ECDC767L,1L,0x1DE39D09L}}};
    int32_t l_356[10] = {0x658A028EL,0x658A028EL,0x658A028EL,0x658A028EL,0x658A028EL,0x658A028EL,0x658A028EL,0x658A028EL,0x658A028EL,0x658A028EL};
    int32_t *l_357 = &l_355[1][6][6];
    int32_t *l_358 = &l_355[1][0][7];
    int32_t *l_359 = (void*)0;
    int32_t *l_360[7] = {&l_355[0][4][6],&l_355[0][4][6],&l_355[0][4][6],&l_355[0][4][6],&l_355[0][4][6],&l_355[0][4][6],&l_355[0][4][6]};
    uint8_t l_361 = 0xEAL;
    int8_t l_364 = 0x59L;
    int i, j, k;
    l_356[9] &= l_355[0][4][6];
    l_361++;
    return l_364;
}


/* ------------------------------------------ */
/* 
 * reads : p_446->g_96 p_446->g_301 p_446->g_72 p_446->g_186 p_446->g_307 p_446->g_comm_values p_446->g_216 p_446->g_315 p_446->g_322 p_446->g_89 p_446->g_261 p_446->g_324 p_446->g_97 p_446->g_251 p_446->g_280 p_446->g_341 p_446->g_345 p_446->g_346 p_446->g_348 p_446->g_309
 * writes: p_446->g_31 p_446->g_265 p_446->g_40 p_446->g_72 p_446->g_322 p_446->g_261 p_446->g_273 p_446->g_309
 */
int64_t * func_53(int64_t * p_54, uint64_t  p_55, int64_t * p_56, struct S1 * p_446)
{ /* block id: 150 */
    uint16_t l_291[8][8] = {{0UL,0UL,0xE069L,0UL,0xD653L,0xE401L,1UL,0xBF03L},{0UL,0UL,0xE069L,0UL,0xD653L,0xE401L,1UL,0xBF03L},{0UL,0UL,0xE069L,0UL,0xD653L,0xE401L,1UL,0xBF03L},{0UL,0UL,0xE069L,0UL,0xD653L,0xE401L,1UL,0xBF03L},{0UL,0UL,0xE069L,0UL,0xD653L,0xE401L,1UL,0xBF03L},{0UL,0UL,0xE069L,0UL,0xD653L,0xE401L,1UL,0xBF03L},{0UL,0UL,0xE069L,0UL,0xD653L,0xE401L,1UL,0xBF03L},{0UL,0UL,0xE069L,0UL,0xD653L,0xE401L,1UL,0xBF03L}};
    VECTOR(int64_t, 16) l_294 = (VECTOR(int64_t, 16))(0x236ACEA4BFB77E27L, (VECTOR(int64_t, 4))(0x236ACEA4BFB77E27L, (VECTOR(int64_t, 2))(0x236ACEA4BFB77E27L, (-5L)), (-5L)), (-5L), 0x236ACEA4BFB77E27L, (-5L), (VECTOR(int64_t, 2))(0x236ACEA4BFB77E27L, (-5L)), (VECTOR(int64_t, 2))(0x236ACEA4BFB77E27L, (-5L)), 0x236ACEA4BFB77E27L, (-5L), 0x236ACEA4BFB77E27L, (-5L));
    int16_t l_297[4] = {0x4C86L,0x4C86L,0x4C86L,0x4C86L};
    uint16_t *l_298 = (void*)0;
    int32_t l_299 = (-7L);
    VECTOR(int32_t, 16) l_300 = (VECTOR(int32_t, 16))(0x7D68F8F4L, (VECTOR(int32_t, 4))(0x7D68F8F4L, (VECTOR(int32_t, 2))(0x7D68F8F4L, 1L), 1L), 1L, 0x7D68F8F4L, 1L, (VECTOR(int32_t, 2))(0x7D68F8F4L, 1L), (VECTOR(int32_t, 2))(0x7D68F8F4L, 1L), 0x7D68F8F4L, 1L, 0x7D68F8F4L, 1L);
    VECTOR(uint32_t, 8) l_302 = (VECTOR(uint32_t, 8))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 1UL), 1UL), 1UL, 4294967291UL, 1UL);
    int32_t *l_308[8][1][3] = {{{&p_446->g_309,&p_446->g_309,&p_446->g_309}},{{&p_446->g_309,&p_446->g_309,&p_446->g_309}},{{&p_446->g_309,&p_446->g_309,&p_446->g_309}},{{&p_446->g_309,&p_446->g_309,&p_446->g_309}},{{&p_446->g_309,&p_446->g_309,&p_446->g_309}},{{&p_446->g_309,&p_446->g_309,&p_446->g_309}},{{&p_446->g_309,&p_446->g_309,&p_446->g_309}},{{&p_446->g_309,&p_446->g_309,&p_446->g_309}}};
    int32_t l_310 = 0L;
    int32_t **l_311 = (void*)0;
    int32_t **l_312 = &p_446->g_265;
    uint8_t l_316 = 0xE1L;
    uint8_t *l_319 = &p_446->g_72;
    uint32_t *l_323 = &p_446->g_261;
    int32_t *l_325 = (void*)0;
    uint16_t *l_330 = &l_291[4][2];
    VECTOR(int16_t, 8) l_344 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 4L), 4L), 4L, (-1L), 4L);
    int16_t l_349 = 0x4EDFL;
    int64_t *l_354 = &p_446->g_96;
    int i, j, k;
    (*l_312) = func_58((((((VECTOR(int32_t, 16))((l_310 = (safe_add_func_uint8_t_u_u((p_446->g_96 & ((+((p_446->g_31.x = l_291[4][2]) > (safe_mul_func_int8_t_s_s((((VECTOR(int64_t, 16))(l_294.s97d11164ea6d074e)).s6 && (0L >= (l_299 = (safe_mod_func_int32_t_s_s((l_294.s2 , p_55), l_297[2]))))), 0x1CL)))) & (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0xD0015765L, 0UL)))), ((VECTOR(uint32_t, 16))(0xA81D5C88L, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(l_300.s74a31de906dd1e35)).s49, ((VECTOR(int32_t, 8))(p_446->g_301.yxyxxyxy)).s21))), 0x73E7F1E8L, 1L))))), 2UL, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0UL, 0x8A1E3802L)).yyyyxyyy)).s14, ((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 8))(6UL, ((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(4294967295UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_302.s3673)), 0UL, ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 16))((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((((VECTOR(int32_t, 16))((((p_446->g_72 & p_55) != l_294.s8) || GROUP_DIVERGE(0, 1)), 0x5469B73EL, 0x1B7C93A2L, 0x7A444388L, 1L, 0x2DD97D36L, ((VECTOR(int32_t, 8))(0x7AEB7259L)), 1L, (-9L))).sa && p_55), p_55)) >= p_55), p_55)), 0UL, ((VECTOR(uint32_t, 2))(0x6F8114C7L)), p_446->g_186.y, ((VECTOR(uint32_t, 2))(0UL)), p_446->g_301.y, p_446->g_307, 0x35ACF67EL, GROUP_DIVERGE(0, 1), ((VECTOR(uint32_t, 2))(7UL)), ((VECTOR(uint32_t, 2))(0x55962D47L)), 4294967293UL)).se4, ((VECTOR(uint32_t, 2))(0UL))))), 0x337ED4D8L)).s1751734263333515, ((VECTOR(uint32_t, 16))(0x3004FE34L)), ((VECTOR(uint32_t, 16))(4294967295UL))))).s6700)))).lo, ((VECTOR(uint32_t, 2))(0x36656CE5L)), ((VECTOR(uint32_t, 2))(0x4E397CADL))))).yyyx)), ((VECTOR(uint32_t, 2))(0xC962C5FEL)), 0x90F40DD3L)).hi, ((VECTOR(uint32_t, 4))(0x68071D06L))))), ((VECTOR(uint32_t, 2))(0x399276B2L)), 0xBD7251C7L)).s5202306763407615, ((VECTOR(uint32_t, 16))(4294967290UL))))).s154c, ((VECTOR(uint32_t, 4))(0x35E44593L))))).odd))), 4294967291UL)), p_446->g_comm_values[p_446->tid], ((VECTOR(uint32_t, 4))(4294967295UL)), 6UL, 0xC56A9507L)).s3d))).xyyx, ((VECTOR(uint32_t, 4))(4294967295UL))))).lo, ((VECTOR(uint32_t, 2))(4294967295UL)), ((VECTOR(uint32_t, 2))(0UL))))), ((VECTOR(uint32_t, 2))(0xF14D71A7L)), ((VECTOR(uint32_t, 2))(0x3E4B69DCL))))).yyxyxyyxxxyyxyxy)).s3 <= 0L))), 0xFBL))), 0L, p_446->g_307, ((VECTOR(int32_t, 4))(0x2BF304ABL)), ((VECTOR(int32_t, 4))(0L)), p_55, ((VECTOR(int32_t, 2))(0x34AEAAADL)), 1L, 0x4F254ADDL)).s4 , 0x22199A4D6B5343FAL) != l_300.s7) ^ p_446->g_216.s6), p_446);
    p_446->g_31.y = (((5UL >= ((&l_311 == (void*)0) , ((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(p_446->g_315.yxyxxyxxyyxxxyxx)).s4, ((((p_55 , ((*l_323) |= (((p_446->g_40 = p_446->g_315.x) == (l_316 != (p_446->g_322[7] |= (l_300.sf < (safe_rshift_func_uint8_t_u_u((--(*l_319)), p_55)))))) <= (p_446->g_89[5][0][0] , 18446744073709551607UL)))) , 9L) , p_446->g_324) , GROUP_DIVERGE(0, 1)))) > 5L))) , &l_316) == &p_446->g_63);
    if ((FAKE_DIVERGE(p_446->global_0_offset, get_global_id(0), 10) , (0x56L <= (((((((((safe_mul_func_int16_t_s_s(((0x1624D6171F85479DL && (safe_sub_func_uint16_t_u_u(0UL, ((*l_330) = p_55)))) <= ((void*)0 != &l_311)), (+(safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((~0x64L) & ((void*)0 != &l_325)), FAKE_DIVERGE(p_446->local_2_offset, get_local_id(2), 10))) == 0x7D0E33ADBBC01CAAL), 7))))) && p_446->g_97) || p_446->g_251.y) < 4294967289UL) , p_55) != p_55) ^ 0x084F4C1FB84D03BDL) || p_446->g_280.y) || p_55))))
    { /* block id: 161 */
        for (l_299 = (-10); (l_299 == (-30)); --l_299)
        { /* block id: 164 */
            uint64_t l_339 = 0xBB254E1739EFE29CL;
            if (l_339)
                break;
        }
        (*l_312) = (void*)0;
    }
    else
    { /* block id: 168 */
        VECTOR(int32_t, 2) l_340 = (VECTOR(int32_t, 2))(0x6A542F5BL, 0L);
        uint64_t l_342[8] = {0x6FDEDEA721B8BF52L,0xFB4BC8B719433418L,0x6FDEDEA721B8BF52L,0x6FDEDEA721B8BF52L,0xFB4BC8B719433418L,0x6FDEDEA721B8BF52L,0x6FDEDEA721B8BF52L,0xFB4BC8B719433418L};
        uint32_t *l_343 = (void*)0;
        VECTOR(int16_t, 4) l_347 = (VECTOR(int16_t, 4))(0x6E70L, (VECTOR(int16_t, 2))(0x6E70L, 0x086CL), 0x086CL);
        VECTOR(int16_t, 2) l_350 = (VECTOR(int16_t, 2))(5L, (-1L));
        int32_t *l_351 = &l_310;
        int i;
        (*l_351) = ((((+((&l_325 == (void*)0) , ((VECTOR(int32_t, 2))(l_340.yy)).hi)) >= FAKE_DIVERGE(p_446->global_0_offset, get_global_id(0), 10)) == (!FAKE_DIVERGE(p_446->local_1_offset, get_local_id(1), 10))) | (p_55 > ((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_446->g_341.s1d)), 0x5D76L, (-1L))).hi)))), 6L, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))((l_342[6] || (p_446->g_273 = p_446->g_251.y)), ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_344.s60)).yxyyxxxxyyyxxxyx)).s61f8))), (-1L), ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_446->g_345.xx)).xyyy)).xzxwywwzyywyxywz)).s4d, ((VECTOR(int16_t, 16))(p_446->g_346.xwywxxxyzwyxwwyx)).s9f))), (-1L))).odd, (int16_t)0L))), ((VECTOR(int16_t, 4))(l_347.zxyz)), ((VECTOR(int16_t, 2))(p_446->g_348.s24)).yyxx))).hi, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(0x4EBFL, l_349, ((VECTOR(int16_t, 4))(l_350.yyxx)), 0x7947L, (-1L))).s75)))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(0x23A7L, ((VECTOR(int16_t, 4))((p_446->g_346.w != 0x483CL), p_446->g_322[7], 0x113CL, 1L)), (-7L), 0L, (-1L))).s44)).xyxx)).xxxyyzxz)).s02))), ((VECTOR(int16_t, 2))((-5L))))))))).yxyxyxxy)).s76)).xyxxyxxxyyxxxxxx)).s1012)).even, (int16_t)p_446->g_348.s1))), ((VECTOR(int16_t, 8))(0x2340L)), 0x0FA0L, p_446->g_345.x, (-1L), 0x5025L, 0x2696L)).s91e4, ((VECTOR(int16_t, 4))(1L))))).hi, ((VECTOR(int16_t, 2))(0x3BE7L))))), 5L, (-10L), (-1L))), ((VECTOR(int16_t, 8))(0x32CCL))))).s2042313306242062))).s5));
        for (p_446->g_309 = (-18); (p_446->g_309 >= (-25)); p_446->g_309 = safe_sub_func_uint8_t_u_u(p_446->g_309, 2))
        { /* block id: 173 */
            if (p_55)
                break;
            return &p_446->g_96;
        }
    }
    return l_354;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_58(uint32_t  p_59, struct S1 * p_446)
{ /* block id: 147 */
    int32_t *l_286[3];
    int i;
    for (i = 0; i < 3; i++)
        l_286[i] = (void*)0;
    return l_286[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_446->g_72 p_446->l_comm_values p_446->g_96 p_446->g_97 p_446->g_31 p_446->g_186 p_446->g_5 p_446->g_89 p_446->g_40 p_446->g_261 p_446->g_264 p_446->g_273 p_446->g_216
 * writes: p_446->g_89 p_446->g_72 p_446->g_97 p_446->g_31 p_446->g_201 p_446->g_261 p_446->g_273 p_446->g_96 p_446->g_278 p_446->g_280
 */
int32_t  func_64(int32_t * p_65, int16_t  p_66, uint8_t  p_67, struct S1 * p_446)
{ /* block id: 21 */
    int32_t *l_73 = (void*)0;
    int32_t *l_74 = (void*)0;
    int32_t *l_75 = (void*)0;
    int32_t l_76[6][1] = {{0L},{0L},{0L},{0L},{0L},{0L}};
    int32_t *l_77 = &l_76[3][0];
    int32_t *l_78[5] = {&l_76[5][0],&l_76[5][0],&l_76[5][0],&l_76[5][0],&l_76[5][0]};
    uint16_t l_79 = 0x0850L;
    uint32_t l_82 = 0xBBC179A0L;
    VECTOR(uint8_t, 4) l_90 = (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 0x77L), 0x77L);
    uint8_t *l_95 = &p_446->g_72;
    VECTOR(int16_t, 2) l_217 = (VECTOR(int16_t, 2))((-1L), 0L);
    uint64_t l_284 = 0x93FC229446AC0456L;
    int i, j;
    l_79++;
    --l_82;
    if (((p_446->g_97 |= (safe_mod_func_int8_t_s_s((((p_446->g_89[5][0][0] = p_67) < (((((((VECTOR(uint8_t, 2))(l_90.xw)).lo || (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0UL, 0x17D6ECED94F1BE2EL)), 0x89C8F552920A84A5L, 0xADF4511BC6CB3F44L)).y, (0x586B99F0C8DDAE6AL < GROUP_DIVERGE(1, 1))))) > ((safe_div_func_uint8_t_u_u(((*l_95) = (((((&p_446->g_40 != &p_446->g_40) && p_446->g_72) | p_67) < 0x60L) || ((p_446->l_comm_values[(safe_mod_func_uint32_t_u_u(p_446->tid, 88))] , (((GROUP_DIVERGE(2, 1) != p_66) != p_67) , p_67)) , (-1L)))), p_67)) > (*l_77))) || p_446->g_96) < p_446->l_comm_values[(safe_mod_func_uint32_t_u_u(p_446->tid, 88))]) > 0UL)) , 0x7BL), p_66))) == p_66))
    { /* block id: 27 */
        uint32_t l_100 = 0UL;
        if ((atomic_inc(&p_446->l_atomic_input[14]) == 9))
        { /* block id: 29 */
            int64_t l_98 = 0x2DB7845B2E7BA114L;
            int32_t l_99 = 1L;
            l_99 ^= l_98;
            unsigned int result = 0;
            result += l_98;
            result += l_99;
            atomic_add(&p_446->l_special_values[14], result);
        }
        else
        { /* block id: 31 */
            (1 + 1);
        }
        if (l_100)
        { /* block id: 34 */
            if ((atomic_inc(&p_446->g_atomic_input[71 * get_linear_group_id() + 28]) == 8))
            { /* block id: 36 */
                uint32_t l_101 = 0x7F21A038L;
                if (l_101)
                { /* block id: 37 */
                    uint8_t l_102[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                    uint8_t l_117 = 0x20L;
                    int i;
                    if (l_102[3])
                    { /* block id: 38 */
                        VECTOR(int32_t, 2) l_103 = (VECTOR(int32_t, 2))(0x55381E52L, 5L);
                        VECTOR(int32_t, 2) l_104 = (VECTOR(int32_t, 2))(1L, 0x03F7990DL);
                        int64_t l_105 = (-1L);
                        VECTOR(int32_t, 16) l_106 = (VECTOR(int32_t, 16))(0x56938820L, (VECTOR(int32_t, 4))(0x56938820L, (VECTOR(int32_t, 2))(0x56938820L, 1L), 1L), 1L, 0x56938820L, 1L, (VECTOR(int32_t, 2))(0x56938820L, 1L), (VECTOR(int32_t, 2))(0x56938820L, 1L), 0x56938820L, 1L, 0x56938820L, 1L);
                        uint64_t l_107[4] = {0x1499A76E9993CBD2L,0x1499A76E9993CBD2L,0x1499A76E9993CBD2L,0x1499A76E9993CBD2L};
                        VECTOR(int32_t, 16) l_108 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
                        uint8_t l_109 = 253UL;
                        VECTOR(int32_t, 8) l_110 = (VECTOR(int32_t, 8))(0x5E42899FL, (VECTOR(int32_t, 4))(0x5E42899FL, (VECTOR(int32_t, 2))(0x5E42899FL, 0x5BE4ED98L), 0x5BE4ED98L), 0x5BE4ED98L, 0x5E42899FL, 0x5BE4ED98L);
                        VECTOR(int32_t, 8) l_111 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-9L)), (-9L)), (-9L), 1L, (-9L));
                        uint8_t l_112 = 255UL;
                        int64_t *l_114 = &l_105;
                        int64_t **l_113[7][4][6] = {{{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114}},{{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114}},{{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114}},{{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114}},{{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114}},{{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114}},{{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114}}};
                        int64_t **l_115[10][5] = {{&l_114,&l_114,&l_114,&l_114,&l_114},{&l_114,&l_114,&l_114,&l_114,&l_114},{&l_114,&l_114,&l_114,&l_114,&l_114},{&l_114,&l_114,&l_114,&l_114,&l_114},{&l_114,&l_114,&l_114,&l_114,&l_114},{&l_114,&l_114,&l_114,&l_114,&l_114},{&l_114,&l_114,&l_114,&l_114,&l_114},{&l_114,&l_114,&l_114,&l_114,&l_114},{&l_114,&l_114,&l_114,&l_114,&l_114},{&l_114,&l_114,&l_114,&l_114,&l_114}};
                        int i, j, k;
                        l_105 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(l_103.xxyyxyyy)).lo, ((VECTOR(int32_t, 16))(l_104.yyxxxyxyyxyyyyxy)).s0aa6))))).zywxyyxy)).s1;
                        l_112 = ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(l_106.sbd)).xyyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x22127DE2L, 9L, l_107[3], 2L, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_108.s81)).yyxyyyxxxxyxxyyx)).s2, 0x4960B144L, 8L, l_109, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(l_110.s0206)), ((VECTOR(int32_t, 2))((-1L), (-1L))).yyxy))), ((VECTOR(int32_t, 4))(l_111.s5266)))).odd)).odd))).x;
                        l_115[5][4] = l_113[2][3][5];
                    }
                    else
                    { /* block id: 42 */
                        int8_t l_116 = (-1L);
                        l_116 ^= 0x57152396L;
                    }
                    if (l_117)
                    { /* block id: 45 */
                        uint16_t l_118 = 0x9DA6L;
                        l_118--;
                    }
                    else
                    { /* block id: 47 */
                        int32_t l_121 = 0x5C08ECFBL;
                        uint32_t l_122 = 0x77A4E5EFL;
                        int32_t *l_123 = (void*)0;
                        int32_t *l_124 = &l_121;
                        uint64_t l_125 = 0x35B3A7F255F038DDL;
                        VECTOR(uint16_t, 2) l_126 = (VECTOR(uint16_t, 2))(0UL, 65526UL);
                        uint16_t l_127 = 0UL;
                        int i;
                        l_122 |= l_121;
                        l_124 = l_123;
                        l_126.x ^= l_125;
                        l_127--;
                    }
                }
                else
                { /* block id: 53 */
                    int32_t *l_130 = (void*)0;
                    int32_t l_132 = 0L;
                    int32_t *l_131[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_131[i] = &l_132;
                    l_131[1] = (l_130 = (void*)0);
                }
                for (l_101 = 0; (l_101 == 53); l_101 = safe_add_func_uint16_t_u_u(l_101, 6))
                { /* block id: 59 */
                    int32_t l_135 = (-1L);
                    uint16_t l_144 = 0x1CA8L;
                    int32_t l_145 = 0x053D1B3AL;
                    for (l_135 = 0; (l_135 < 16); ++l_135)
                    { /* block id: 62 */
                        int16_t l_140 = 0L;
                        int16_t *l_139 = &l_140;
                        int16_t **l_138[5][9][5] = {{{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139}},{{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139}},{{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139}},{{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139}},{{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139},{&l_139,&l_139,(void*)0,&l_139,&l_139}}};
                        int32_t *l_141 = (void*)0;
                        int32_t l_143 = 0x0B5220E9L;
                        int32_t *l_142 = &l_143;
                        int i, j, k;
                        l_138[4][3][3] = l_138[4][3][3];
                        l_142 = l_141;
                    }
                    l_145 = (l_135 = l_144);
                }
                for (l_101 = 0; (l_101 != 41); ++l_101)
                { /* block id: 71 */
                    int32_t l_149 = 4L;
                    int32_t *l_148 = &l_149;
                    int32_t *l_150[7] = {&l_149,&l_149,&l_149,&l_149,&l_149,&l_149,&l_149};
                    int32_t l_156[8][7][2] = {{{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL}},{{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL}},{{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL}},{{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL}},{{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL}},{{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL}},{{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL}},{{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL},{0x722DAFDEL,0x192C6C6DL}}};
                    int32_t l_157 = 0x645E3B42L;
                    uint32_t l_158 = 0xBE70D45CL;
                    int64_t l_159[9][7] = {{1L,1L,(-1L),(-1L),1L,1L,1L},{1L,1L,(-1L),(-1L),1L,1L,1L},{1L,1L,(-1L),(-1L),1L,1L,1L},{1L,1L,(-1L),(-1L),1L,1L,1L},{1L,1L,(-1L),(-1L),1L,1L,1L},{1L,1L,(-1L),(-1L),1L,1L,1L},{1L,1L,(-1L),(-1L),1L,1L,1L},{1L,1L,(-1L),(-1L),1L,1L,1L},{1L,1L,(-1L),(-1L),1L,1L,1L}};
                    int32_t l_160 = 0x5B4B4AAEL;
                    int i, j, k;
                    l_150[2] = l_148;
                    for (l_149 = (-28); (l_149 != (-27)); l_149 = safe_add_func_uint32_t_u_u(l_149, 5))
                    { /* block id: 75 */
                        uint64_t l_153 = 0xDE801AB67E062F4CL;
                        --l_153;
                    }
                    l_157 |= l_156[5][1][1];
                    if ((l_158 , (l_160 ^= l_159[1][6])))
                    { /* block id: 80 */
                        int32_t l_162 = 0x3419A3F2L;
                        int32_t *l_161 = &l_162;
                        int32_t *l_163 = (void*)0;
                        int32_t *l_164 = &l_162;
                        l_164 = (l_163 = (l_148 = (l_150[2] = l_161)));
                    }
                    else
                    { /* block id: 85 */
                        uint32_t l_165 = 4294967294UL;
                        uint16_t l_166 = 0xD4A8L;
                        VECTOR(int64_t, 8) l_167 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x2AA80392AC9F6F6BL), 0x2AA80392AC9F6F6BL), 0x2AA80392AC9F6F6BL, 1L, 0x2AA80392AC9F6F6BL);
                        VECTOR(int16_t, 8) l_168 = (VECTOR(int16_t, 8))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, (-1L)), (-1L)), (-1L), 8L, (-1L));
                        VECTOR(uint16_t, 4) l_169 = (VECTOR(uint16_t, 4))(0xA489L, (VECTOR(uint16_t, 2))(0xA489L, 65535UL), 65535UL);
                        VECTOR(int32_t, 4) l_170 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x419F2FE9L), 0x419F2FE9L);
                        VECTOR(int32_t, 4) l_171 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0L), 0L);
                        VECTOR(int32_t, 8) l_172 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x15D1E8AEL), 0x15D1E8AEL), 0x15D1E8AEL, 0L, 0x15D1E8AEL);
                        VECTOR(int32_t, 16) l_173 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-3L)), (-3L)), (-3L), 6L, (-3L), (VECTOR(int32_t, 2))(6L, (-3L)), (VECTOR(int32_t, 2))(6L, (-3L)), 6L, (-3L), 6L, (-3L));
                        VECTOR(int32_t, 4) l_174 = (VECTOR(int32_t, 4))(0x0E8F597FL, (VECTOR(int32_t, 2))(0x0E8F597FL, 2L), 2L);
                        uint32_t l_175 = 1UL;
                        uint8_t l_176 = 249UL;
                        int16_t l_177 = 1L;
                        int64_t l_178 = 0x61834C530886110FL;
                        int64_t l_179 = 0x1E831240E19525CCL;
                        uint8_t l_180[4][3] = {{1UL,0x77L,0UL},{1UL,0x77L,0UL},{1UL,0x77L,0UL},{1UL,0x77L,0UL}};
                        int16_t **l_181 = (void*)0;
                        int16_t *l_183 = &l_177;
                        int16_t **l_182 = &l_183;
                        int i, j;
                        l_173.s9 = ((*l_148) = ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(6L, 0x70B60398L)), ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(1L, (l_167.s6 = (l_166 = l_165)), ((VECTOR(int16_t, 2))(0x7D36L, (-4L))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_168.s34)), (-1L), (-1L))))).hi)).zzxzxwxy, ((VECTOR(uint16_t, 2))(l_169.yz)).yyxyxyxy))), (-5L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_170.yxxz)).lo)), ((VECTOR(int32_t, 2))(l_171.ww)), 1L)).sd6, ((VECTOR(int32_t, 2))(l_172.s20)), ((VECTOR(int32_t, 2))(l_173.sb0))))).even);
                        l_178 = ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_174.wzwx)).wwwxzywzwzywwyxx)).se , l_175) , (l_177 = l_176));
                        l_182 = ((l_180[1][1] ^= l_179) , l_181);
                    }
                }
                unsigned int result = 0;
                result += l_101;
                atomic_add(&p_446->g_special_values[71 * get_linear_group_id() + 28], result);
            }
            else
            { /* block id: 96 */
                (1 + 1);
            }
            return p_446->g_97;
        }
        else
        { /* block id: 100 */
            int8_t l_197[8] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
            VECTOR(int64_t, 8) l_218 = (VECTOR(int64_t, 8))(0x2ACB86EDECE64AD6L, (VECTOR(int64_t, 4))(0x2ACB86EDECE64AD6L, (VECTOR(int64_t, 2))(0x2ACB86EDECE64AD6L, 0x4C9F59413205A4E5L), 0x4C9F59413205A4E5L), 0x4C9F59413205A4E5L, 0x2ACB86EDECE64AD6L, 0x4C9F59413205A4E5L);
            int32_t l_221 = (-1L);
            int i;
            for (l_79 = (-9); (l_79 > 39); l_79 = safe_add_func_int32_t_s_s(l_79, 3))
            { /* block id: 103 */
                VECTOR(int32_t, 8) l_189 = (VECTOR(int32_t, 8))(0x4B5C31CDL, (VECTOR(int32_t, 4))(0x4B5C31CDL, (VECTOR(int32_t, 2))(0x4B5C31CDL, 2L), 2L), 2L, 0x4B5C31CDL, 2L);
                VECTOR(int64_t, 2) l_190 = (VECTOR(int64_t, 2))((-1L), 0L);
                int32_t *l_223[10] = {&l_76[1][0],&p_446->g_5,(void*)0,&p_446->g_5,&l_76[1][0],&l_76[1][0],&p_446->g_5,(void*)0,&p_446->g_5,&l_76[1][0]};
                uint8_t *l_274 = (void*)0;
                int i;
                p_446->g_31.y |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_446->g_186.xxyy)), 0x490E3653L, (safe_rshift_func_int8_t_s_s(0x74L, 2)), ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))((-5L), 6L, (-2L), 0x6FF4E26BL)).zwxzwyzy, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(0x1986F862L, 0x2F00ECB8L)).xyxy))).ywyyyxxw, ((VECTOR(int32_t, 8))(l_189.s42551716))))), 0L, 0x42055BE1L)).s2;
                if ((((VECTOR(int64_t, 2))(l_190.yx)).lo && (-3L)))
                { /* block id: 105 */
                    int32_t *l_207 = &l_76[3][0];
                    if ((atomic_inc(&p_446->g_atomic_input[71 * get_linear_group_id() + 13]) == 7))
                    { /* block id: 107 */
                        int32_t l_192 = 0x73A3FC10L;
                        int32_t *l_191[10] = {&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192};
                        int32_t *l_193 = &l_192;
                        int64_t l_194 = (-1L);
                        int i;
                        l_193 = l_191[7];
                        l_194 = (GROUP_DIVERGE(2, 1) , 0x4CDB69F8L);
                        unsigned int result = 0;
                        result += l_192;
                        result += l_194;
                        atomic_add(&p_446->g_special_values[71 * get_linear_group_id() + 13], result);
                    }
                    else
                    { /* block id: 110 */
                        (1 + 1);
                    }
                    if (p_446->g_186.x)
                        continue;
                    if ((safe_rshift_func_int16_t_s_u(p_446->g_186.y, 12)))
                    { /* block id: 114 */
                        uint32_t l_198 = 4294967291UL;
                        ++l_198;
                    }
                    else
                    { /* block id: 116 */
                        p_446->g_201[0] = (void*)0;
                    }
                    l_207 = &p_446->g_5;
                }
                else
                { /* block id: 120 */
                    VECTOR(int64_t, 4) l_219 = (VECTOR(int64_t, 4))(0x6B5957E19047CAE5L, (VECTOR(int64_t, 2))(0x6B5957E19047CAE5L, 0x6BA36E7A10DB0B28L), 0x6BA36E7A10DB0B28L);
                    int64_t *l_220 = (void*)0;
                    int32_t **l_222 = &l_78[2];
                    int32_t **l_267 = (void*)0;
                    int32_t ***l_266 = &l_267;
                    int i;
                    (*l_77) = (((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(p_66, 13)), 0)) || (l_100 != (9UL && p_446->g_5))) || ((safe_mul_func_uint8_t_u_u(p_446->g_89[5][0][0], ((safe_div_func_int16_t_s_s((p_446->g_5 , ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(p_446->g_216.s3514276236150245)).sdc, ((VECTOR(int16_t, 8))(l_217.xyyxxyxx)).s74))).hi), p_446->g_31.x)) , ((l_221 ^= ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(0x7390B09115C216B3L, ((VECTOR(int64_t, 2))(5L, 0x07B7AF79196BF7D5L)), (-4L), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_218.s52)).yxyx)))).hi)).lo, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_219.wzxzxzyw)).s37))))).even) != l_100)))) >= p_67));
                    (*l_222) = &l_76[2][0];
                    (*l_222) = l_223[6];
                    for (l_82 = 0; (l_82 > 44); l_82++)
                    { /* block id: 127 */
                        int32_t ***l_254 = &l_222;
                        uint32_t *l_259 = (void*)0;
                        uint32_t *l_260 = &p_446->g_261;
                        uint32_t *l_272 = &p_446->g_273;
                        int8_t *l_275 = &l_197[4];
                        int64_t *l_276[10][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        uint16_t *l_277[3][5] = {{&l_79,(void*)0,&l_79,(void*)0,&l_79},{&l_79,(void*)0,&l_79,(void*)0,&l_79},{&l_79,(void*)0,&l_79,(void*)0,&l_79}};
                        int64_t *l_279 = (void*)0;
                        int64_t *l_281 = (void*)0;
                        int64_t *l_282 = (void*)0;
                        int64_t *l_283[8][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int i, j;
                        (*l_77) ^= (&p_446->g_5 == ((safe_unary_minus_func_uint8_t_u((++(*l_95)))) , ((p_446->g_40 >= p_446->g_89[5][0][0]) , p_65)));
                        (*l_77) = ((((p_446->g_280.w = ((safe_mul_func_uint16_t_u_u((p_446->g_278.s3 = ((0xDEC322C7L & (safe_lshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(((((p_446->g_97 , (safe_mod_func_uint8_t_u_u((((p_446->g_96 = (safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((*l_275) = ((safe_div_func_int64_t_s_s((((0x43FDL && (GROUP_DIVERGE(1, 1) , (safe_mul_func_int8_t_s_s(((((VECTOR(int64_t, 16))(p_446->g_251.xyxyyyxxyyxxxxxy)).sf , (((((((*l_254) = l_222) == ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(0x8BL, 252UL)).even, 3)), 7)) , ((--(*l_260)) , p_446->g_264))) == (l_219.x != 1L)) ^ ((((*l_272) ^= (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))((((l_266 != (((safe_mod_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(p_446->g_216.s3, 8)) != p_446->g_5) , p_67), FAKE_DIVERGE(p_446->local_0_offset, get_local_id(0), 10))) != p_66) , l_254)) >= l_100) >= 1L), 0x6998L, 9L, 0x1BAAL)).odd)).even < p_66)) >= p_66) , p_66)) , (*l_77)) | p_67)) != p_446->g_31.y), 253UL)))) , &p_446->g_97) == l_274), 0x8ACA68AB1516107DL)) < 0UL)), p_446->g_216.s1)) , 0L), 5))) | p_446->g_31.x) & 0x7378L), p_446->g_97))) < 0x01091E14L) & 0x76F10F74F535F542L) , l_100), 7)), 2)) || p_67), p_446->g_40)), (*l_77)))) & l_100)), 0x7FC6L)) >= (-8L))) , l_100) ^ 3UL) & 2L);
                    }
                }
            }
            return l_100;
        }
    }
    else
    { /* block id: 143 */
        p_65 = p_65;
    }
    return l_284;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[71];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 71; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[71];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 71; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[88];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 88; i++)
            l_comm_values[i] = 1;
    struct S1 c_447;
    struct S1* p_446 = &c_447;
    struct S1 c_448 = {
        2L, // p_446->g_2
        0x25043C4AL, // p_446->g_3
        1L, // p_446->g_4
        0x6DCAD208L, // p_446->g_5
        (VECTOR(int32_t, 2))(0x0EF34EA8L, 2L), // p_446->g_31
        1L, // p_446->g_40
        (void*)0, // p_446->g_41
        0xBFL, // p_446->g_63
        0x53L, // p_446->g_72
        {{{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L}},{{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L}},{{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L}},{{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L}},{{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L}},{{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L}},{{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L},{0xB8C4E8C2L}}}, // p_446->g_89
        0L, // p_446->g_96
        0x7CL, // p_446->g_97
        (VECTOR(int32_t, 2))(0x11EB6188L, 0x0513E678L), // p_446->g_186
        0x5561L, // p_446->g_203
        &p_446->g_203, // p_446->g_202
        (void*)0, // p_446->g_204
        (-1L), // p_446->g_206
        &p_446->g_206, // p_446->g_205
        {&p_446->g_205,&p_446->g_205,&p_446->g_205,&p_446->g_205,&p_446->g_205,&p_446->g_205,&p_446->g_205,&p_446->g_205,&p_446->g_205,&p_446->g_205}, // p_446->g_201
        (VECTOR(int16_t, 8))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0x4F43L), 0x4F43L), 0x4F43L, 4L, 0x4F43L), // p_446->g_216
        (VECTOR(int64_t, 2))((-1L), 0x279FF928E1D70941L), // p_446->g_251
        4294967287UL, // p_446->g_261
        (void*)0, // p_446->g_265
        &p_446->g_265, // p_446->g_264
        0UL, // p_446->g_273
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 6UL), 6UL), 6UL, 1UL, 6UL), // p_446->g_278
        (VECTOR(int64_t, 4))(0x15E474987593218EL, (VECTOR(int64_t, 2))(0x15E474987593218EL, 0x26ADEE3C897FB165L), 0x26ADEE3C897FB165L), // p_446->g_280
        (VECTOR(int32_t, 2))(0x70552E89L, 0L), // p_446->g_301
        0x0DL, // p_446->g_307
        0x17C7B480L, // p_446->g_309
        (VECTOR(uint16_t, 2))(0xEFFCL, 0x9670L), // p_446->g_315
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_446->g_322
        0xCB5F9788L, // p_446->g_324
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int16_t, 2))(0L, (-1L)), (VECTOR(int16_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L)), // p_446->g_341
        (VECTOR(int16_t, 2))(0x61EAL, 0x0DBCL), // p_446->g_345
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-6L)), (-6L)), // p_446->g_346
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L)), // p_446->g_348
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x2B68L), 0x2B68L), // p_446->g_430
        {{{18446744073709551611UL,0xB4629F6EBFAE2AE1L,18446744073709551606UL,0UL,0xB4629F6EBFAE2AE1L,0UL,18446744073709551606UL},{18446744073709551611UL,0xB4629F6EBFAE2AE1L,18446744073709551606UL,0UL,0xB4629F6EBFAE2AE1L,0UL,18446744073709551606UL}},{{18446744073709551611UL,0xB4629F6EBFAE2AE1L,18446744073709551606UL,0UL,0xB4629F6EBFAE2AE1L,0UL,18446744073709551606UL},{18446744073709551611UL,0xB4629F6EBFAE2AE1L,18446744073709551606UL,0UL,0xB4629F6EBFAE2AE1L,0UL,18446744073709551606UL}},{{18446744073709551611UL,0xB4629F6EBFAE2AE1L,18446744073709551606UL,0UL,0xB4629F6EBFAE2AE1L,0UL,18446744073709551606UL},{18446744073709551611UL,0xB4629F6EBFAE2AE1L,18446744073709551606UL,0UL,0xB4629F6EBFAE2AE1L,0UL,18446744073709551606UL}},{{18446744073709551611UL,0xB4629F6EBFAE2AE1L,18446744073709551606UL,0UL,0xB4629F6EBFAE2AE1L,0UL,18446744073709551606UL},{18446744073709551611UL,0xB4629F6EBFAE2AE1L,18446744073709551606UL,0UL,0xB4629F6EBFAE2AE1L,0UL,18446744073709551606UL}},{{18446744073709551611UL,0xB4629F6EBFAE2AE1L,18446744073709551606UL,0UL,0xB4629F6EBFAE2AE1L,0UL,18446744073709551606UL},{18446744073709551611UL,0xB4629F6EBFAE2AE1L,18446744073709551606UL,0UL,0xB4629F6EBFAE2AE1L,0UL,18446744073709551606UL}}}, // p_446->g_432
        0, // p_446->v_collective
        sequence_input[get_global_id(0)], // p_446->global_0_offset
        sequence_input[get_global_id(1)], // p_446->global_1_offset
        sequence_input[get_global_id(2)], // p_446->global_2_offset
        sequence_input[get_local_id(0)], // p_446->local_0_offset
        sequence_input[get_local_id(1)], // p_446->local_1_offset
        sequence_input[get_local_id(2)], // p_446->local_2_offset
        sequence_input[get_group_id(0)], // p_446->group_0_offset
        sequence_input[get_group_id(1)], // p_446->group_1_offset
        sequence_input[get_group_id(2)], // p_446->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 88)), permutations[0][get_linear_local_id()])), // p_446->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_447 = c_448;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_446);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_446->g_2, "p_446->g_2", print_hash_value);
    transparent_crc(p_446->g_3, "p_446->g_3", print_hash_value);
    transparent_crc(p_446->g_4, "p_446->g_4", print_hash_value);
    transparent_crc(p_446->g_5, "p_446->g_5", print_hash_value);
    transparent_crc(p_446->g_31.x, "p_446->g_31.x", print_hash_value);
    transparent_crc(p_446->g_31.y, "p_446->g_31.y", print_hash_value);
    transparent_crc(p_446->g_40, "p_446->g_40", print_hash_value);
    transparent_crc(p_446->g_63, "p_446->g_63", print_hash_value);
    transparent_crc(p_446->g_72, "p_446->g_72", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_446->g_89[i][j][k], "p_446->g_89[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_446->g_96, "p_446->g_96", print_hash_value);
    transparent_crc(p_446->g_97, "p_446->g_97", print_hash_value);
    transparent_crc(p_446->g_186.x, "p_446->g_186.x", print_hash_value);
    transparent_crc(p_446->g_186.y, "p_446->g_186.y", print_hash_value);
    transparent_crc(p_446->g_203, "p_446->g_203", print_hash_value);
    transparent_crc(p_446->g_206, "p_446->g_206", print_hash_value);
    transparent_crc(p_446->g_216.s0, "p_446->g_216.s0", print_hash_value);
    transparent_crc(p_446->g_216.s1, "p_446->g_216.s1", print_hash_value);
    transparent_crc(p_446->g_216.s2, "p_446->g_216.s2", print_hash_value);
    transparent_crc(p_446->g_216.s3, "p_446->g_216.s3", print_hash_value);
    transparent_crc(p_446->g_216.s4, "p_446->g_216.s4", print_hash_value);
    transparent_crc(p_446->g_216.s5, "p_446->g_216.s5", print_hash_value);
    transparent_crc(p_446->g_216.s6, "p_446->g_216.s6", print_hash_value);
    transparent_crc(p_446->g_216.s7, "p_446->g_216.s7", print_hash_value);
    transparent_crc(p_446->g_251.x, "p_446->g_251.x", print_hash_value);
    transparent_crc(p_446->g_251.y, "p_446->g_251.y", print_hash_value);
    transparent_crc(p_446->g_261, "p_446->g_261", print_hash_value);
    transparent_crc(p_446->g_273, "p_446->g_273", print_hash_value);
    transparent_crc(p_446->g_278.s0, "p_446->g_278.s0", print_hash_value);
    transparent_crc(p_446->g_278.s1, "p_446->g_278.s1", print_hash_value);
    transparent_crc(p_446->g_278.s2, "p_446->g_278.s2", print_hash_value);
    transparent_crc(p_446->g_278.s3, "p_446->g_278.s3", print_hash_value);
    transparent_crc(p_446->g_278.s4, "p_446->g_278.s4", print_hash_value);
    transparent_crc(p_446->g_278.s5, "p_446->g_278.s5", print_hash_value);
    transparent_crc(p_446->g_278.s6, "p_446->g_278.s6", print_hash_value);
    transparent_crc(p_446->g_278.s7, "p_446->g_278.s7", print_hash_value);
    transparent_crc(p_446->g_280.x, "p_446->g_280.x", print_hash_value);
    transparent_crc(p_446->g_280.y, "p_446->g_280.y", print_hash_value);
    transparent_crc(p_446->g_280.z, "p_446->g_280.z", print_hash_value);
    transparent_crc(p_446->g_280.w, "p_446->g_280.w", print_hash_value);
    transparent_crc(p_446->g_301.x, "p_446->g_301.x", print_hash_value);
    transparent_crc(p_446->g_301.y, "p_446->g_301.y", print_hash_value);
    transparent_crc(p_446->g_307, "p_446->g_307", print_hash_value);
    transparent_crc(p_446->g_309, "p_446->g_309", print_hash_value);
    transparent_crc(p_446->g_315.x, "p_446->g_315.x", print_hash_value);
    transparent_crc(p_446->g_315.y, "p_446->g_315.y", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_446->g_322[i], "p_446->g_322[i]", print_hash_value);

    }
    transparent_crc(p_446->g_324, "p_446->g_324", print_hash_value);
    transparent_crc(p_446->g_341.s0, "p_446->g_341.s0", print_hash_value);
    transparent_crc(p_446->g_341.s1, "p_446->g_341.s1", print_hash_value);
    transparent_crc(p_446->g_341.s2, "p_446->g_341.s2", print_hash_value);
    transparent_crc(p_446->g_341.s3, "p_446->g_341.s3", print_hash_value);
    transparent_crc(p_446->g_341.s4, "p_446->g_341.s4", print_hash_value);
    transparent_crc(p_446->g_341.s5, "p_446->g_341.s5", print_hash_value);
    transparent_crc(p_446->g_341.s6, "p_446->g_341.s6", print_hash_value);
    transparent_crc(p_446->g_341.s7, "p_446->g_341.s7", print_hash_value);
    transparent_crc(p_446->g_341.s8, "p_446->g_341.s8", print_hash_value);
    transparent_crc(p_446->g_341.s9, "p_446->g_341.s9", print_hash_value);
    transparent_crc(p_446->g_341.sa, "p_446->g_341.sa", print_hash_value);
    transparent_crc(p_446->g_341.sb, "p_446->g_341.sb", print_hash_value);
    transparent_crc(p_446->g_341.sc, "p_446->g_341.sc", print_hash_value);
    transparent_crc(p_446->g_341.sd, "p_446->g_341.sd", print_hash_value);
    transparent_crc(p_446->g_341.se, "p_446->g_341.se", print_hash_value);
    transparent_crc(p_446->g_341.sf, "p_446->g_341.sf", print_hash_value);
    transparent_crc(p_446->g_345.x, "p_446->g_345.x", print_hash_value);
    transparent_crc(p_446->g_345.y, "p_446->g_345.y", print_hash_value);
    transparent_crc(p_446->g_346.x, "p_446->g_346.x", print_hash_value);
    transparent_crc(p_446->g_346.y, "p_446->g_346.y", print_hash_value);
    transparent_crc(p_446->g_346.z, "p_446->g_346.z", print_hash_value);
    transparent_crc(p_446->g_346.w, "p_446->g_346.w", print_hash_value);
    transparent_crc(p_446->g_348.s0, "p_446->g_348.s0", print_hash_value);
    transparent_crc(p_446->g_348.s1, "p_446->g_348.s1", print_hash_value);
    transparent_crc(p_446->g_348.s2, "p_446->g_348.s2", print_hash_value);
    transparent_crc(p_446->g_348.s3, "p_446->g_348.s3", print_hash_value);
    transparent_crc(p_446->g_348.s4, "p_446->g_348.s4", print_hash_value);
    transparent_crc(p_446->g_348.s5, "p_446->g_348.s5", print_hash_value);
    transparent_crc(p_446->g_348.s6, "p_446->g_348.s6", print_hash_value);
    transparent_crc(p_446->g_348.s7, "p_446->g_348.s7", print_hash_value);
    transparent_crc(p_446->g_430.x, "p_446->g_430.x", print_hash_value);
    transparent_crc(p_446->g_430.y, "p_446->g_430.y", print_hash_value);
    transparent_crc(p_446->g_430.z, "p_446->g_430.z", print_hash_value);
    transparent_crc(p_446->g_430.w, "p_446->g_430.w", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_446->g_432[i][j][k], "p_446->g_432[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_446->v_collective, "p_446->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 71; i++)
            transparent_crc(p_446->g_special_values[i + 71 * get_linear_group_id()], "p_446->g_special_values[i + 71 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 71; i++)
            transparent_crc(p_446->l_special_values[i], "p_446->l_special_values[i]", print_hash_value);
    transparent_crc(p_446->l_comm_values[get_linear_local_id()], "p_446->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_446->g_comm_values[get_linear_group_id() * 88 + get_linear_local_id()], "p_446->g_comm_values[get_linear_group_id() * 88 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
