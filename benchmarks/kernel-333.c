// --atomics 4 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 63,49,3 -l 1,7,3
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

__constant uint32_t permutations[10][21] = {
{1,6,13,11,12,14,20,16,15,4,17,2,18,5,0,7,10,19,3,9,8}, // permutation 0
{7,15,3,12,20,17,19,1,14,11,4,5,2,10,18,9,8,6,13,16,0}, // permutation 1
{20,5,1,12,14,19,18,13,10,0,2,6,11,17,16,9,8,4,7,15,3}, // permutation 2
{3,5,15,9,14,20,19,16,11,13,2,18,7,6,17,12,10,8,0,1,4}, // permutation 3
{7,15,0,10,5,13,16,17,2,9,19,8,6,14,18,4,1,12,11,20,3}, // permutation 4
{10,17,11,19,18,1,0,12,8,2,9,15,5,6,20,7,3,14,13,16,4}, // permutation 5
{13,0,18,2,19,6,5,9,8,1,12,20,17,10,16,7,14,4,15,3,11}, // permutation 6
{12,8,1,4,2,14,19,16,20,3,6,9,18,11,17,15,5,10,13,0,7}, // permutation 7
{10,15,14,1,8,9,7,6,12,4,16,3,11,13,2,20,17,19,0,5,18}, // permutation 8
{13,9,1,14,15,20,4,19,3,10,0,16,6,8,12,11,17,18,7,2,5} // permutation 9
};

// Seed: 2965619640

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    VECTOR(uint8_t, 2) g_4;
    uint8_t g_10[5];
    VECTOR(uint16_t, 8) g_65;
    volatile uint8_t g_79;
    volatile uint8_t *g_78;
    volatile uint8_t * volatile *g_77;
    volatile uint8_t * volatile ** volatile g_80[1];
    volatile uint8_t * volatile ** volatile g_81[10];
    volatile uint8_t * volatile ** volatile g_82;
    int32_t g_84[3][2];
    int32_t * volatile g_83;
    int32_t * volatile * volatile g_85[3][1][6];
    int32_t g_94;
    volatile VECTOR(uint32_t, 8) g_109;
    volatile VECTOR(uint32_t, 8) g_110;
    volatile VECTOR(uint32_t, 4) g_113;
    volatile VECTOR(uint16_t, 8) g_118;
    int32_t *g_122[5];
    int32_t ** volatile g_121;
    int16_t g_140;
    VECTOR(int16_t, 8) g_145;
    volatile VECTOR(int16_t, 16) g_149;
    int8_t g_171;
    int8_t g_173;
    int64_t g_175[4][4][10];
    int32_t ** volatile g_177;
    volatile VECTOR(int32_t, 2) g_178;
    volatile VECTOR(uint16_t, 4) g_187;
    VECTOR(uint64_t, 4) g_190;
    uint8_t *g_207;
    int32_t g_217;
    VECTOR(int32_t, 8) g_230;
    uint8_t *g_272;
    VECTOR(uint32_t, 2) g_310;
    volatile int8_t g_320;
    int32_t g_322;
    int32_t ** volatile g_329;
    int8_t *g_331[3][7];
    int8_t ** volatile g_330;
    int8_t ** volatile * volatile g_332;
    uint32_t g_340;
    int32_t ** volatile g_421;
    int32_t * volatile g_424;
    int32_t **g_435;
    int32_t ***g_434[3];
    uint8_t * volatile *g_458;
    uint64_t g_471[7][2][4];
    int32_t * volatile g_520;
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
int64_t  func_1(struct S0 * p_556);
int16_t  func_5(int16_t  p_6, int64_t  p_7, struct S0 * p_556);
int16_t  func_11(int64_t  p_12, uint8_t * p_13, uint8_t * p_14, uint8_t * p_15, struct S0 * p_556);
uint8_t * func_17(uint32_t  p_18, uint16_t  p_19, uint64_t  p_20, int32_t  p_21, struct S0 * p_556);
int32_t  func_24(uint8_t * p_25, uint8_t * p_26, struct S0 * p_556);
uint8_t * func_27(uint32_t  p_28, uint8_t * p_29, uint64_t  p_30, uint8_t * p_31, int64_t  p_32, struct S0 * p_556);
uint8_t * func_33(uint8_t * p_34, struct S0 * p_556);
uint8_t * func_35(int64_t  p_36, uint8_t * p_37, struct S0 * p_556);
uint8_t * func_43(int8_t  p_44, int16_t  p_45, struct S0 * p_556);
uint8_t * func_46(uint8_t * p_47, uint8_t  p_48, uint32_t  p_49, struct S0 * p_556);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_556->g_4 p_556->g_comm_values p_556->g_10 p_556->l_comm_values p_556->g_77 p_556->g_82 p_556->g_83 p_556->g_84 p_556->g_94 p_556->g_109 p_556->g_110 p_556->g_113 p_556->g_118 p_556->g_121 p_556->g_140 p_556->g_145 p_556->g_149 p_556->g_78 p_556->g_79 p_556->g_171 p_556->g_65 p_556->g_122 p_556->g_177 p_556->g_178 p_556->g_187 p_556->g_190 p_556->g_207 p_556->g_272 p_556->g_230 p_556->g_175 p_556->g_310 p_556->g_320 p_556->g_329 p_556->g_330 p_556->g_332 p_556->g_331 p_556->g_322 p_556->g_520 p_556->g_435 p_556->g_471
 * writes: p_556->g_10 p_556->g_77 p_556->g_83 p_556->g_94 p_556->g_84 p_556->g_122 p_556->g_171 p_556->g_173 p_556->g_175 p_556->g_140 p_556->g_190 p_556->g_207 p_556->g_272 p_556->g_65 p_556->g_comm_values p_556->l_comm_values p_556->g_322 p_556->g_330
 */
int64_t  func_1(struct S0 * p_556)
{ /* block id: 4 */
    uint8_t *l_8 = (void*)0;
    uint8_t *l_9 = &p_556->g_10[2];
    int32_t l_16[6];
    uint16_t l_40 = 0x169CL;
    uint8_t *l_50 = (void*)0;
    uint8_t **l_206[9][5] = {{&l_8,&l_50,(void*)0,&l_50,&l_8},{&l_8,&l_50,(void*)0,&l_50,&l_8},{&l_8,&l_50,(void*)0,&l_50,&l_8},{&l_8,&l_50,(void*)0,&l_50,&l_8},{&l_8,&l_50,(void*)0,&l_50,&l_8},{&l_8,&l_50,(void*)0,&l_50,&l_8},{&l_8,&l_50,(void*)0,&l_50,&l_8},{&l_8,&l_50,(void*)0,&l_50,&l_8},{&l_8,&l_50,(void*)0,&l_50,&l_8}};
    uint8_t *l_208[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint8_t l_338 = 0UL;
    uint32_t *l_339[4][7] = {{&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340},{&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340},{&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340},{&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340,&p_556->g_340}};
    int32_t l_341 = 0x18B23FD4L;
    int32_t l_342[7][7][1] = {{{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL}},{{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL}},{{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL}},{{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL}},{{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL}},{{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL}},{{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL},{0x4974CA1FL}}};
    VECTOR(int8_t, 2) l_532 = (VECTOR(int8_t, 2))(7L, 1L);
    uint16_t l_549 = 0x1F04L;
    uint32_t l_550 = 4UL;
    uint64_t *l_551 = (void*)0;
    uint64_t *l_552 = (void*)0;
    uint64_t *l_553 = (void*)0;
    VECTOR(int32_t, 16) l_554 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0D326F8AL), 0x0D326F8AL), 0x0D326F8AL, (-1L), 0x0D326F8AL, (VECTOR(int32_t, 2))((-1L), 0x0D326F8AL), (VECTOR(int32_t, 2))((-1L), 0x0D326F8AL), (-1L), 0x0D326F8AL, (-1L), 0x0D326F8AL);
    int8_t l_555 = 0x48L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_16[i] = 0x65C2DD78L;
    (*p_556->g_520) = (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_556->g_4.yx)), 1UL, 9UL)).wzwwyzyy)).s2, (((func_5((((*l_9) = p_556->g_comm_values[p_556->tid]) , func_11(l_16[4], func_17((l_341 = (safe_div_func_uint8_t_u_u((((0x7E936BE8L || func_24(func_27(p_556->g_4.x, &p_556->g_10[2], l_16[4], func_33((p_556->g_272 = func_35((((((safe_mod_func_int32_t_s_s((((++l_40) , func_43(l_16[4], ((p_556->g_207 = func_46(l_50, (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_556->local_0_offset, get_local_id(0), 10), (safe_div_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), (safe_lshift_func_uint8_t_u_u((p_556->g_comm_values[p_556->tid] ^ p_556->g_10[2]), 0)))))), 7)), p_556->g_10[2], p_556)) != l_208[9]), p_556)) == p_556->g_78), l_16[2])) , l_40) | l_16[4]) , (void*)0) != p_556->g_78), p_556->g_272, p_556)), p_556), l_16[5], p_556), p_556->g_331[0][1], p_556)) | 18446744073709551614UL) & l_16[5]), l_338))), p_556->g_310.x, l_342[1][1][0], l_342[2][3][0], p_556), p_556->g_331[2][4], p_556->g_331[2][4], p_556)), p_556->g_4.y, p_556) , (-1L)) && l_342[3][0][0]) , 5UL)));
    for (l_338 = (-29); (l_338 < 53); l_338 = safe_add_func_uint64_t_u_u(l_338, 1))
    { /* block id: 275 */
        int32_t l_523 = 0x6BFFCF77L;
        (**p_556->g_435) &= l_523;
    }
    (**p_556->g_177) = (((l_342[1][1][0] , p_556->g_145.s0) || ((safe_add_func_int8_t_s_s((l_16[4] &= l_40), (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(0x3DE30487BDB027EDL, 9L, 0x7CFC5964F49C9483L, 1L)))).z <= ((VECTOR(uint64_t, 2))(0x27EAAA216377274CL, 0x84BCC445593A5679L)).odd))) , ((safe_mul_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((p_556->g_84[0][0] < ((VECTOR(uint64_t, 2))(5UL, 0x5A2EFD34D9511872L)).lo), ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_532.xx)))), ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 2))(0L, 0x6EL)).xxxxyxxxyyxxyxyy, ((VECTOR(int8_t, 2))(0x1AL, 0x08L)).yyyyxyxxxyyyxyyy))).s4a))).hi)), 3)), (((l_554.s4 |= ((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(4UL, (safe_mul_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((l_341 |= ((VECTOR(int8_t, 16))(((safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s((l_40 >= (*p_556->g_520)), (((safe_mod_func_int32_t_s_s((l_16[2] | 0x06L), l_16[2])) , 0x75A3L) & FAKE_DIVERGE(p_556->group_2_offset, get_group_id(2), 10)))), l_342[1][1][0])) != p_556->g_310.x), (-1L), l_549, ((VECTOR(int8_t, 8))(0x74L)), 1L, ((VECTOR(int8_t, 4))(0x5DL)))).s8) || l_40), (-7L))), l_532.x)) , (*p_556->g_121)) != &l_342[1][1][0]), p_556->g_471[1][1][0])))), 0x1847L)) < l_550)) , l_16[2]) > l_555))) && 0L))) || l_532.x);
    return p_556->g_65.s5;
}


/* ------------------------------------------ */
/* 
 * reads : p_556->g_94
 * writes: p_556->g_94
 */
int16_t  func_5(int16_t  p_6, int64_t  p_7, struct S0 * p_556)
{ /* block id: 145 */
    int32_t *l_423 = (void*)0;
    int32_t l_438 = 0x69FFA678L;
    int64_t *l_439 = (void*)0;
    VECTOR(int32_t, 16) l_453 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2115BC5EL), 0x2115BC5EL), 0x2115BC5EL, 0L, 0x2115BC5EL, (VECTOR(int32_t, 2))(0L, 0x2115BC5EL), (VECTOR(int32_t, 2))(0L, 0x2115BC5EL), 0L, 0x2115BC5EL, 0L, 0x2115BC5EL);
    int32_t *l_478 = &p_556->g_322;
    int i;
    if ((atomic_inc(&p_556->l_atomic_input[2]) == 7))
    { /* block id: 147 */
        uint64_t l_355 = 0x032BECD138F53EC4L;
        uint32_t l_356 = 0x3B31FDA1L;
        uint32_t l_357 = 1UL;
        VECTOR(int64_t, 8) l_358 = (VECTOR(int64_t, 8))(0x19E8AC9FAC7718B6L, (VECTOR(int64_t, 4))(0x19E8AC9FAC7718B6L, (VECTOR(int64_t, 2))(0x19E8AC9FAC7718B6L, 1L), 1L), 1L, 0x19E8AC9FAC7718B6L, 1L);
        int i;
        l_358.s2 |= ((l_356 = l_355) , l_357);
        for (l_356 = (-5); (l_356 > 4); l_356 = safe_add_func_int16_t_s_s(l_356, 1))
        { /* block id: 152 */
            int32_t l_361 = 0x251CAB27L;
            for (l_361 = 0; (l_361 == 18); ++l_361)
            { /* block id: 155 */
                int32_t l_364 = 0L;
                int32_t *l_407 = &l_364;
                int32_t *l_408[6][8][5] = {{{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364}},{{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364}},{{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364}},{{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364}},{{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364}},{{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364},{&l_364,(void*)0,&l_364,&l_364,&l_364}}};
                int32_t *l_409 = &l_364;
                int i, j, k;
                for (l_364 = (-12); (l_364 >= (-2)); ++l_364)
                { /* block id: 158 */
                    int32_t l_367 = (-1L);
                    uint8_t l_373 = 246UL;
                    uint16_t **l_376[5];
                    uint16_t l_379 = 0x64DAL;
                    uint16_t *l_378 = &l_379;
                    uint16_t **l_377[10] = {&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378};
                    uint16_t **l_380[8][4][8] = {{{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378}},{{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378}},{{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378}},{{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378}},{{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378}},{{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378}},{{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378}},{{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378},{(void*)0,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378}}};
                    uint16_t **l_381 = (void*)0;
                    uint16_t l_382 = 0x9EC4L;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_376[i] = (void*)0;
                    for (l_367 = 0; (l_367 >= 6); l_367 = safe_add_func_int64_t_s_s(l_367, 7))
                    { /* block id: 161 */
                        int8_t l_370 = (-9L);
                        int32_t l_371 = 5L;
                        uint16_t l_372 = 0x8849L;
                        l_370 ^= (-5L);
                        l_372 &= l_371;
                    }
                    l_373--;
                    l_381 = (l_380[3][3][4] = (l_377[6] = l_376[2]));
                    if (l_382)
                    { /* block id: 169 */
                        int32_t l_384 = 2L;
                        int32_t *l_383 = &l_384;
                        int32_t *l_385 = (void*)0;
                        uint16_t l_386 = 0x3CEEL;
                        l_385 = l_383;
                        --l_386;
                    }
                    else
                    { /* block id: 172 */
                        uint8_t l_389 = 1UL;
                        uint16_t l_390 = 0x9CC4L;
                        uint16_t l_391 = 0xE379L;
                        VECTOR(int32_t, 16) l_392 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                        VECTOR(int32_t, 16) l_393 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x488879EAL), 0x488879EAL), 0x488879EAL, 6L, 0x488879EAL, (VECTOR(int32_t, 2))(6L, 0x488879EAL), (VECTOR(int32_t, 2))(6L, 0x488879EAL), 6L, 0x488879EAL, 6L, 0x488879EAL);
                        int8_t l_394 = 7L;
                        uint32_t l_395[10][4] = {{0xC069431AL,0xC069431AL,0xF6BFB249L,0x00F75CD2L},{0xC069431AL,0xC069431AL,0xF6BFB249L,0x00F75CD2L},{0xC069431AL,0xC069431AL,0xF6BFB249L,0x00F75CD2L},{0xC069431AL,0xC069431AL,0xF6BFB249L,0x00F75CD2L},{0xC069431AL,0xC069431AL,0xF6BFB249L,0x00F75CD2L},{0xC069431AL,0xC069431AL,0xF6BFB249L,0x00F75CD2L},{0xC069431AL,0xC069431AL,0xF6BFB249L,0x00F75CD2L},{0xC069431AL,0xC069431AL,0xF6BFB249L,0x00F75CD2L},{0xC069431AL,0xC069431AL,0xF6BFB249L,0x00F75CD2L},{0xC069431AL,0xC069431AL,0xF6BFB249L,0x00F75CD2L}};
                        uint8_t l_396[1][10][6] = {{{248UL,248UL,0x21L,0xFBL,0x76L,0xFBL},{248UL,248UL,0x21L,0xFBL,0x76L,0xFBL},{248UL,248UL,0x21L,0xFBL,0x76L,0xFBL},{248UL,248UL,0x21L,0xFBL,0x76L,0xFBL},{248UL,248UL,0x21L,0xFBL,0x76L,0xFBL},{248UL,248UL,0x21L,0xFBL,0x76L,0xFBL},{248UL,248UL,0x21L,0xFBL,0x76L,0xFBL},{248UL,248UL,0x21L,0xFBL,0x76L,0xFBL},{248UL,248UL,0x21L,0xFBL,0x76L,0xFBL},{248UL,248UL,0x21L,0xFBL,0x76L,0xFBL}}};
                        int16_t l_397 = 0x1799L;
                        uint8_t l_398 = 248UL;
                        VECTOR(int32_t, 8) l_399 = (VECTOR(int32_t, 8))(0x74344732L, (VECTOR(int32_t, 4))(0x74344732L, (VECTOR(int32_t, 2))(0x74344732L, (-4L)), (-4L)), (-4L), 0x74344732L, (-4L));
                        uint32_t l_400 = 0x335CE69AL;
                        int32_t l_401 = 0x3F36BC92L;
                        int i, j, k;
                        l_401 = ((l_391 = ((l_389 = (l_357 = 0xC5F8097BL)) , l_390)) , ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(0x603B03F3L, ((VECTOR(int32_t, 4))(l_392.sd42c)), ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(l_393.s8a1e0427c1c30c54)).lo, (int32_t)l_394))).s1, 1L, 0x18FF2707L)), ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((l_392.s6 = l_395[3][2]), (l_396[0][9][5] , (l_367 |= (l_397 , l_398))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(l_399.s4352)).ywwzyxwxxyzxywxx, (int32_t)(l_367 = l_400)))).s97fc)), 0x7FC32161L, (-1L))).odd)), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x447DEA4AL, 0x04C814A6L)), 0x1523CA1EL, (-1L))).even))).xyyx))).yzzwzxzw))).s6);
                        l_367 = (-7L);
                        l_367 &= 6L;
                        l_393.s3 ^= (l_392.s1 = (l_367 = 0x6582BB0FL));
                    }
                }
                for (l_364 = 19; (l_364 == (-10)); --l_364)
                { /* block id: 189 */
                    int32_t l_405 = 0x1092F268L;
                    int32_t *l_404[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_406 = &l_405;
                    int i;
                    l_406 = (l_404[8] = l_404[3]);
                }
                l_409 = (l_408[4][0][1] = l_407);
            }
        }
        for (l_358.s4 = (-14); (l_358.s4 == 24); ++l_358.s4)
        { /* block id: 199 */
            uint64_t l_412 = 18446744073709551614UL;
            uint32_t l_413 = 0x6941FA87L;
            l_413 = l_412;
        }
        unsigned int result = 0;
        result += l_355;
        result += l_356;
        result += l_357;
        result += l_358.s7;
        result += l_358.s6;
        result += l_358.s5;
        result += l_358.s4;
        result += l_358.s3;
        result += l_358.s2;
        result += l_358.s1;
        result += l_358.s0;
        atomic_add(&p_556->l_special_values[2], result);
    }
    else
    { /* block id: 202 */
        (1 + 1);
    }
    for (p_6 = (-23); (p_6 < 24); p_6 = safe_add_func_uint16_t_u_u(p_6, 1))
    { /* block id: 207 */
        VECTOR(uint32_t, 16) l_422 = (VECTOR(uint32_t, 16))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0UL), 0UL), 0UL, 4294967293UL, 0UL, (VECTOR(uint32_t, 2))(4294967293UL, 0UL), (VECTOR(uint32_t, 2))(4294967293UL, 0UL), 4294967293UL, 0UL, 4294967293UL, 0UL);
        int32_t ***l_437 = &p_556->g_435;
        int32_t l_442[3];
        int i;
        for (i = 0; i < 3; i++)
            l_442[i] = (-1L);
        for (p_556->g_94 = (-11); (p_556->g_94 > (-17)); p_556->g_94--)
        { /* block id: 210 */
            int16_t l_418 = 0x069DL;
            int32_t l_474 = 0L;
            (1 + 1);
        }
    }
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_556->g_84
 * writes:
 */
int16_t  func_11(int64_t  p_12, uint8_t * p_13, uint8_t * p_14, uint8_t * p_15, struct S0 * p_556)
{ /* block id: 128 */
    int64_t l_354 = 0x57E1A42C4EBE45EEL;
    for (p_12 = 0; (p_12 != 16); p_12 = safe_add_func_int32_t_s_s(p_12, 4))
    { /* block id: 131 */
        if ((atomic_inc(&p_556->l_atomic_input[1]) == 2))
        { /* block id: 133 */
            uint32_t l_347[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
            uint32_t l_348 = 0UL;
            uint8_t l_349 = 0xB4L;
            uint64_t l_350 = 0xF2087BEF1ED81989L;
            int64_t l_351 = 0x406CD2A6AC009296L;
            int64_t l_352[3];
            uint8_t **l_353 = (void*)0;
            int i;
            for (i = 0; i < 3; i++)
                l_352[i] = 0x4CCCD61FAC696D2CL;
            l_347[6] = (-1L);
            l_352[2] = ((l_349 |= l_348) , (l_351 = l_350));
            l_353 = (void*)0;
            unsigned int result = 0;
            int l_347_i0;
            for (l_347_i0 = 0; l_347_i0 < 8; l_347_i0++) {
                result += l_347[l_347_i0];
            }
            result += l_348;
            result += l_349;
            result += l_350;
            result += l_351;
            int l_352_i0;
            for (l_352_i0 = 0; l_352_i0 < 3; l_352_i0++) {
                result += l_352[l_352_i0];
            }
            atomic_add(&p_556->l_special_values[1], result);
        }
        else
        { /* block id: 139 */
            (1 + 1);
        }
        return p_556->g_84[0][0];
    }
    return l_354;
}


/* ------------------------------------------ */
/* 
 * reads : p_556->g_121 p_556->g_122
 * writes: p_556->g_122
 */
uint8_t * func_17(uint32_t  p_18, uint16_t  p_19, uint64_t  p_20, int32_t  p_21, struct S0 * p_556)
{ /* block id: 124 */
    int32_t **l_343 = &p_556->g_122[4];
    uint8_t *l_344 = (void*)0;
    (*l_343) = (*p_556->g_121);
    (*l_343) = (*p_556->g_121);
    return l_344;
}


/* ------------------------------------------ */
/* 
 * reads : p_556->g_121 p_556->g_122 p_556->g_322 p_556->g_84 p_556->g_94
 * writes:
 */
int32_t  func_24(uint8_t * p_25, uint8_t * p_26, struct S0 * p_556)
{ /* block id: 120 */
    int32_t *l_333[2];
    int8_t l_334[3][6] = {{0x00L,0x00L,0x00L,0x00L,0x00L,0x00L},{0x00L,0x00L,0x00L,0x00L,0x00L,0x00L},{0x00L,0x00L,0x00L,0x00L,0x00L,0x00L}};
    VECTOR(uint8_t, 16) l_335 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 6UL), 6UL), 6UL, 255UL, 6UL, (VECTOR(uint8_t, 2))(255UL, 6UL), (VECTOR(uint8_t, 2))(255UL, 6UL), 255UL, 6UL, 255UL, 6UL);
    int i, j;
    for (i = 0; i < 2; i++)
        l_333[i] = &p_556->g_94;
    l_335.s6++;
    return (**p_556->g_121);
}


/* ------------------------------------------ */
/* 
 * reads : p_556->g_329 p_556->g_330 p_556->g_332
 * writes: p_556->g_122 p_556->g_330
 */
uint8_t * func_27(uint32_t  p_28, uint8_t * p_29, uint64_t  p_30, uint8_t * p_31, int64_t  p_32, struct S0 * p_556)
{ /* block id: 116 */
    int32_t *l_328[6] = {&p_556->g_322,&p_556->g_322,&p_556->g_322,&p_556->g_322,&p_556->g_322,&p_556->g_322};
    int i;
    (*p_556->g_329) = l_328[1];
    (*p_556->g_332) = p_556->g_330;
    return &p_556->g_10[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_556->g_79 p_556->g_84 p_556->l_comm_values p_556->g_230 p_556->g_175 p_556->g_4 p_556->g_207 p_556->g_10 p_556->g_140 p_556->g_65 p_556->g_94 p_556->g_113 p_556->g_310 p_556->g_320 p_556->g_110 p_556->g_comm_values p_556->g_177 p_556->g_122
 * writes: p_556->g_84 p_556->g_190 p_556->g_10 p_556->g_65 p_556->g_94 p_556->g_comm_values p_556->l_comm_values p_556->g_322
 */
uint8_t * func_33(uint8_t * p_34, struct S0 * p_556)
{ /* block id: 103 */
    VECTOR(uint8_t, 8) l_277 = (VECTOR(uint8_t, 8))(0xA0L, (VECTOR(uint8_t, 4))(0xA0L, (VECTOR(uint8_t, 2))(0xA0L, 0UL), 0UL), 0UL, 0xA0L, 0UL);
    VECTOR(uint8_t, 2) l_278 = (VECTOR(uint8_t, 2))(251UL, 0x6EL);
    uint8_t **l_283 = &p_556->g_272;
    VECTOR(int8_t, 8) l_284 = (VECTOR(int8_t, 8))(0x65L, (VECTOR(int8_t, 4))(0x65L, (VECTOR(int8_t, 2))(0x65L, 0x05L), 0x05L), 0x05L, 0x65L, 0x05L);
    uint32_t l_285 = 0x27779FA1L;
    int32_t *l_286 = (void*)0;
    int32_t *l_287 = &p_556->g_84[1][0];
    uint64_t *l_288 = (void*)0;
    uint64_t *l_289 = (void*)0;
    int32_t l_290 = 0L;
    int16_t l_291[6];
    uint16_t *l_292[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint8_t l_293 = 0xD0L;
    int32_t *l_294 = &p_556->g_94;
    int32_t *l_295 = (void*)0;
    int32_t *l_296[10] = {&l_290,&p_556->g_84[2][1],&l_290,&l_290,&p_556->g_84[2][1],&l_290,&l_290,&p_556->g_84[2][1],&l_290,&l_290};
    int8_t l_297 = 0x2AL;
    uint32_t l_298 = 4294967295UL;
    uint32_t l_303 = 0xD9F95C79L;
    int32_t *l_307 = &p_556->g_217;
    int32_t **l_306 = &l_307;
    uint16_t l_311 = 0xF307L;
    int8_t l_312 = 0x29L;
    VECTOR(uint32_t, 4) l_313 = (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0x4242BAB7L), 0x4242BAB7L);
    VECTOR(int32_t, 16) l_318 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x25A3F1FCL), 0x25A3F1FCL), 0x25A3F1FCL, (-10L), 0x25A3F1FCL, (VECTOR(int32_t, 2))((-10L), 0x25A3F1FCL), (VECTOR(int32_t, 2))((-10L), 0x25A3F1FCL), (-10L), 0x25A3F1FCL, (-10L), 0x25A3F1FCL);
    VECTOR(int32_t, 8) l_319 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x159AB813L), 0x159AB813L), 0x159AB813L, 8L, 0x159AB813L);
    int64_t *l_321[7][9][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    int8_t l_323 = 0x2CL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_291[i] = 0x77B7L;
    (*l_294) |= (safe_add_func_uint16_t_u_u((p_556->g_65.s3 |= (safe_lshift_func_uint8_t_u_s(((*p_556->g_207) |= ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 16))(0xCBL, ((VECTOR(uint8_t, 2))(l_277.s40)), ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 2))(0xFFL, 0x22L)).yyyxyyyx, ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(l_278.yyxyxyxxxyyyxxxx)).s7d, (uint8_t)l_277.s7))).yxyyxyyx))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))((((((safe_mul_func_uint8_t_u_u(((l_277.s7 | 1UL) || ((!(safe_lshift_func_int16_t_s_s(((((p_556->g_79 > (65535UL < ((l_277.s2 , (((p_556->g_190.x = (((void*)0 != l_283) > ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(l_284.s3747)), (int8_t)(((*l_287) |= l_285) >= l_285)))).lo)).even)) , (void*)0) == &p_556->g_94)) <= 0x0593E73978AA8153L))) > l_290) | p_556->l_comm_values[(safe_mod_func_uint32_t_u_u(p_556->tid, 21))]) < p_556->g_230.s4), p_556->g_175[1][2][7]))) ^ p_556->g_4.y)), l_277.s5)) > p_556->l_comm_values[(safe_mod_func_uint32_t_u_u(p_556->tid, 21))]) & FAKE_DIVERGE(p_556->group_1_offset, get_group_id(1), 10)) >= l_291[5]) <= 0xBE5E30AFCA1F2281L), 0x0AL, ((VECTOR(uint8_t, 2))(248UL)), ((VECTOR(uint8_t, 2))(0x04L)), 0x0CL, 1UL)).lo, (uint8_t)(*l_287)))))), 0x0CL)).se8, ((VECTOR(uint8_t, 2))(3UL)), ((VECTOR(uint8_t, 2))(255UL))))).xyxyyyyx)).s11)).yxyyyxyxyxyyyyyy)).s3), p_556->g_140))), l_293));
    ++l_298;
    (*l_287) = (((p_556->g_113.x , (!(((safe_lshift_func_int16_t_s_s((*l_294), 13)) , (((l_303 || (safe_rshift_func_uint16_t_u_u((l_306 != &l_307), ((safe_lshift_func_int8_t_s_u(((p_556->g_322 = (((VECTOR(uint32_t, 4))(p_556->g_310.xxxy)).x , ((GROUP_DIVERGE(0, 1) <= ((*l_294) && l_311)) <= (p_556->l_comm_values[(safe_mod_func_uint32_t_u_u(p_556->tid, 21))] ^= ((p_556->g_comm_values[p_556->tid] ^= (l_312 <= (((((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 2))(0x5C873847L, 4UL)).xyxx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(4294967295UL, 0UL)), ((VECTOR(uint32_t, 8))(l_313.yywyyxyz)), (safe_sub_func_uint16_t_u_u((((+(safe_lshift_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), 4))) > ((+((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(l_318.s9b049e0bf1e8d471))))).sa9)).xxxyxxxx, ((VECTOR(int32_t, 8))(l_319.s60730621)))))))).s36, (int32_t)(((*l_294) && p_556->g_320) , (*l_294)), (int32_t)(*l_287))))))).odd) == (*l_294))) >= 0UL), p_556->g_10[0])), ((VECTOR(uint32_t, 2))(0x5D4B49C6L)), ((VECTOR(uint32_t, 2))(4294967292UL)), 0xD3F3E70DL)).even)))).even))), ((VECTOR(uint32_t, 4))(0x206891C9L))))).yxyxwwwwyyyxzyyy, ((VECTOR(uint32_t, 16))(0x21315963L))))), ((VECTOR(uint32_t, 16))(0x63221E98L))))).s7 == p_556->g_175[2][1][9]) , p_556->g_110.s5) , (-8L)))) >= (*l_287)))))) != p_556->g_4.x), 4)) > (*p_556->g_207))))) >= l_323) | p_556->g_140)) < FAKE_DIVERGE(p_556->group_0_offset, get_group_id(0), 10)))) != 0x1FCBE8DEL) == (-2L));
    (**p_556->g_177) = (safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_556->g_175[0][3][7], p_556->g_110.s0)), 0));
    return &p_556->g_10[2];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t * func_35(int64_t  p_36, uint8_t * p_37, struct S0 * p_556)
{ /* block id: 100 */
    return p_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_556->g_171 p_556->g_83 p_556->g_84 p_556->g_207 p_556->g_10 p_556->g_121 p_556->g_122 p_556->g_94 p_556->g_65 p_556->g_comm_values p_556->g_190
 * writes: p_556->g_140 p_556->g_94 p_556->g_84 p_556->g_10 p_556->g_171
 */
uint8_t * func_43(int8_t  p_44, int16_t  p_45, struct S0 * p_556)
{ /* block id: 86 */
    uint16_t l_211[4][10][6] = {{{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L}},{{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L}},{{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L}},{{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L},{1UL,1UL,5UL,5UL,65533UL,0xC576L}}};
    int32_t *l_216 = &p_556->g_217;
    int32_t *l_218 = (void*)0;
    int32_t **l_219 = &l_218;
    int16_t *l_220 = (void*)0;
    int16_t *l_221 = (void*)0;
    int16_t *l_222 = &p_556->g_140;
    uint8_t **l_223[8][3][7] = {{{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207}},{{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207}},{{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207}},{{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207}},{{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207}},{{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207}},{{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207}},{{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207},{&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207,&p_556->g_207}}};
    int64_t *l_224 = (void*)0;
    int64_t **l_225 = &l_224;
    int64_t *l_227 = &p_556->g_175[0][3][7];
    int64_t **l_226 = &l_227;
    int32_t *l_228 = &p_556->g_94;
    int32_t *l_229 = (void*)0;
    int32_t *l_231 = (void*)0;
    int32_t *l_232 = (void*)0;
    int32_t *l_233 = (void*)0;
    int32_t *l_234[2];
    uint32_t l_235 = 0xC816288DL;
    VECTOR(int32_t, 4) l_246 = (VECTOR(int32_t, 4))(0x089A831BL, (VECTOR(int32_t, 2))(0x089A831BL, 0x76975767L), 0x76975767L);
    VECTOR(uint16_t, 8) l_263 = (VECTOR(uint16_t, 8))(0x62D4L, (VECTOR(uint16_t, 4))(0x62D4L, (VECTOR(uint16_t, 2))(0x62D4L, 65531UL), 65531UL), 65531UL, 0x62D4L, 65531UL);
    int8_t *l_268 = &p_556->g_171;
    uint64_t *l_269 = (void*)0;
    uint64_t *l_270 = (void*)0;
    uint64_t *l_271[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_234[i] = (void*)0;
    l_235 &= ((*p_556->g_83) ^= ((*l_228) = ((safe_lshift_func_int16_t_s_s(l_211[0][4][3], (safe_sub_func_int64_t_s_s(((((safe_rshift_func_int8_t_s_s((((l_216 = l_216) == ((*l_219) = l_218)) ^ ((*l_222) = l_211[0][4][3])), ((-9L) < (l_223[5][1][0] == l_223[0][2][2])))) && FAKE_DIVERGE(p_556->group_1_offset, get_group_id(1), 10)) , ((*l_226) = ((*l_225) = l_224))) == &p_556->g_175[0][3][7]), p_556->g_171)))) <= 0x1D4BD023BC67531CL)));
    (*p_556->g_83) = ((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((VECTOR(uint32_t, 4))(0x637CDB33L, 0xF1ACA370L, 4294967295UL, 0xE0FD3B0AL)).y , 0x3A1DL), (safe_mul_func_int16_t_s_s((FAKE_DIVERGE(p_556->global_1_offset, get_global_id(1), 10) || p_44), (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(l_246.zz)), 0x6EA95927L)).zxxzxywy)).s4, (p_44 , (safe_mul_func_int8_t_s_s(((((void*)0 != &p_556->g_173) >= (safe_add_func_uint16_t_u_u((FAKE_DIVERGE(p_556->global_1_offset, get_global_id(1), 10) , ((((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((((((*l_228) = (((*l_268) = (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_263.s0122)).odd)).yxyyyyyxxxyxxxyx)).s2, ((--(*p_556->g_207)) & ((safe_sub_func_int8_t_s_s((0x2AEE43E5L != (**p_556->g_121)), (!((*l_228) & 0x50L)))) , p_556->g_84[0][1])))), 13))) || 0x10L)) == 0L) != 0UL) <= 0x94CAL), p_556->g_65.s0)) >= p_556->g_comm_values[p_556->tid]), p_44)), 5)), p_44)) , l_233) == (void*)0) , p_45)), p_45))) != (-1L)), 0x04L))))))))), p_44)) | 0x199BL), p_45)) & p_556->g_190.y);
    return &p_556->g_10[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_556->l_comm_values p_556->g_comm_values p_556->g_4 p_556->g_10 p_556->g_77 p_556->g_82 p_556->g_83 p_556->g_84 p_556->g_94 p_556->g_109 p_556->g_110 p_556->g_113 p_556->g_118 p_556->g_121 p_556->g_140 p_556->g_145 p_556->g_149 p_556->g_78 p_556->g_79 p_556->g_171 p_556->g_65 p_556->g_122 p_556->g_177 p_556->g_178 p_556->g_187 p_556->g_190
 * writes: p_556->g_77 p_556->g_83 p_556->g_94 p_556->g_84 p_556->g_122 p_556->g_10 p_556->g_171 p_556->g_173 p_556->g_175 p_556->g_140 p_556->g_190
 */
uint8_t * func_46(uint8_t * p_47, uint8_t  p_48, uint32_t  p_49, struct S0 * p_556)
{ /* block id: 7 */
    VECTOR(int32_t, 8) l_95 = (VECTOR(int32_t, 8))(0x3987EDF5L, (VECTOR(int32_t, 4))(0x3987EDF5L, (VECTOR(int32_t, 2))(0x3987EDF5L, (-5L)), (-5L)), (-5L), 0x3987EDF5L, (-5L));
    int32_t *l_176 = (void*)0;
    int32_t l_192 = 0x51562CACL;
    uint32_t l_202[3];
    uint64_t *l_205[9][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_202[i] = 0xE98F465CL;
    for (p_49 = 0; (p_49 <= 54); p_49++)
    { /* block id: 10 */
        int32_t l_72 = 1L;
        l_72 ^= ((safe_mul_func_int16_t_s_s(p_556->l_comm_values[(safe_mod_func_uint32_t_u_u(p_556->tid, 21))], (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(6UL, p_48, 0xC2C6L, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x081BL, 1UL)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(p_556->g_65.s0511124203146056)).sea39)).even)).xyxyyxyxxyxyxxxy)).se8b7)), 0x1456L, 0x4EFCL)), 0UL, 1UL, p_556->g_comm_values[p_556->tid], 0x2E88L, 0x0862L)).s3, (safe_rshift_func_uint8_t_u_u(p_556->g_comm_values[p_556->tid], p_556->g_4.x)))))) && (safe_add_func_uint64_t_u_u((((~18446744073709551615UL) || (&p_48 != (p_47 = &p_48))) < (((safe_add_func_int16_t_s_s(p_556->g_10[0], 0x79A8L)) && p_48) , p_556->l_comm_values[(safe_mod_func_uint32_t_u_u(p_556->tid, 21))])), p_49)));
    }
    for (p_48 = (-18); (p_48 < 25); p_48 = safe_add_func_uint32_t_u_u(p_48, 4))
    { /* block id: 16 */
        int64_t l_92 = 1L;
        uint8_t *l_98 = (void*)0;
        VECTOR(int32_t, 4) l_104 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-1L)), (-1L));
        int32_t l_107 = 7L;
        int32_t l_191 = 2L;
        int32_t l_199 = 0x4D69E2DAL;
        int32_t l_200[9] = {0x5A0C8096L,0x5A0C8096L,0x5A0C8096L,0x5A0C8096L,0x5A0C8096L,0x5A0C8096L,0x5A0C8096L,0x5A0C8096L,0x5A0C8096L};
        int8_t l_201 = (-3L);
        int i;
        for (p_49 = 0; (p_49 == 37); p_49 = safe_add_func_int32_t_s_s(p_49, 1))
        { /* block id: 19 */
            int32_t * volatile *l_86 = &p_556->g_83;
            if (p_556->g_comm_values[p_556->tid])
                break;
            (*p_556->g_82) = p_556->g_77;
            (*l_86) = p_556->g_83;
        }
        for (p_49 = (-18); (p_49 != 52); p_49 = safe_add_func_uint16_t_u_u(p_49, 2))
        { /* block id: 26 */
            uint8_t l_91 = 0x2DL;
            int32_t *l_93 = &p_556->g_94;
            (*l_93) |= (((safe_rshift_func_uint8_t_u_u(0x6FL, l_91)) == (-1L)) , (l_92 && p_556->g_84[0][0]));
        }
        if (((VECTOR(int32_t, 16))(l_95.s5057774426266035)).s2)
        { /* block id: 29 */
            uint8_t *l_99 = &p_556->g_10[2];
            int32_t *l_100 = &p_556->g_84[2][0];
            (*l_100) = (!(((safe_div_func_uint64_t_u_u((p_49 <= p_48), (l_92 | p_49))) , l_98) != l_99));
        }
        else
        { /* block id: 31 */
            int64_t l_103 = 1L;
            int32_t *l_119 = &p_556->g_94;
            uint64_t l_186 = 18446744073709551615UL;
            int32_t *l_195 = &p_556->g_84[0][1];
            int32_t l_196 = 0L;
            int32_t *l_197 = &p_556->g_94;
            int32_t *l_198[8] = {&p_556->g_94,&p_556->g_94,&p_556->g_94,&p_556->g_94,&p_556->g_94,&p_556->g_94,&p_556->g_94,&p_556->g_94};
            int i;
            for (l_92 = (-21); (l_92 != 18); ++l_92)
            { /* block id: 34 */
                int32_t *l_105 = (void*)0;
                int32_t *l_106[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                VECTOR(uint32_t, 8) l_111 = (VECTOR(uint32_t, 8))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0xFFA30257L), 0xFFA30257L), 0xFFA30257L, 4UL, 0xFFA30257L);
                VECTOR(uint32_t, 8) l_112 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967293UL), 4294967293UL), 4294967293UL, 1UL, 4294967293UL);
                int32_t *l_114 = (void*)0;
                int32_t *l_115 = &p_556->g_84[0][0];
                int32_t **l_120 = (void*)0;
                int i, j;
                (*l_115) |= (l_103 == ((l_107 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_104.yx)))).lo) , (safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(p_556->g_109.s54)))), ((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 4))(p_556->g_109.s1, 0xF0658699L, 0xB33379BBL, 0x21833D83L)).odd, ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(0x7357609EL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_556->g_110.s3076765404151332)).s2b)), 4294967295UL, 0x082E2804L)), ((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 8))(((void*)0 == &p_47), ((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 2))(l_111.s62)), ((VECTOR(uint32_t, 2))(3UL, 1UL))))).xxyxyxyy)).s34))), ((void*)0 == &p_556->g_77), ((VECTOR(uint32_t, 2))(1UL, 0xE6DEAED5L)), 0x57EB9077L, 4294967289UL)).s54, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x0172C61BL, 4294967294UL)).xyyx)).lo))), 0UL)).even)))), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0UL, 4294967295UL)), 1UL, 2UL)).zwxzwzzw)).even))).hi)), ((VECTOR(uint32_t, 2))(l_112.s70))))).xxxxxyyy, ((VECTOR(uint32_t, 2))(0xF99D2484L, 0x0A8D4FF7L)).yyyxyyxy, ((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 4))(p_556->g_113.wzzw)).yxxwzwywywyywzwx))).lo))).s02)))))).yyyyyyxy)).s1))));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_556->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 21)), permutations[(safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_556->g_118.s52176054)).s1, 0)), 10))][(safe_mod_func_uint32_t_u_u(p_556->tid, 21))]));
                (*p_556->g_121) = l_119;
            }
            for (p_49 = 26; (p_49 == 40); p_49++)
            { /* block id: 44 */
                uint8_t **l_128[9] = {&l_98,&l_98,&l_98,&l_98,&l_98,&l_98,&l_98,&l_98,&l_98};
                uint8_t ***l_127 = &l_128[2];
                int32_t *l_141[5];
                VECTOR(int16_t, 8) l_144 = (VECTOR(int16_t, 8))(0x59BCL, (VECTOR(int16_t, 4))(0x59BCL, (VECTOR(int16_t, 2))(0x59BCL, 3L), 3L), 3L, 0x59BCL, 3L);
                VECTOR(uint16_t, 2) l_188 = (VECTOR(uint16_t, 2))(1UL, 65535UL);
                int i;
                for (i = 0; i < 5; i++)
                    l_141[i] = (void*)0;
                if ((safe_sub_func_uint16_t_u_u(((FAKE_DIVERGE(p_556->group_2_offset, get_group_id(2), 10) && ((((*l_127) = ((0x7F86792DL == 0x25D92485L) , &p_47)) != &p_47) != 0xB5C0L)) == ((*l_119) != ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x6552L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(0x4E21L, ((VECTOR(int16_t, 2))(0x0600L, 1L)).odd, (((void*)0 != &p_556->g_77) , (safe_lshift_func_uint16_t_u_u((l_107 >= 0xD72C3A22099EBF92L), p_556->g_84[2][1]))), ((VECTOR(int16_t, 2))(0x0606L)), ((VECTOR(int16_t, 2))((-1L))), ((VECTOR(int16_t, 4))(0x7D6EL)), p_556->g_94, ((VECTOR(int16_t, 2))((-6L))), (-5L), 0x5498L)))).s6cbd)), p_48, 0x1D55L, 0x295DL)).even)).z)), 0x6AAEL)))
                { /* block id: 46 */
                    VECTOR(uint32_t, 16) l_146 = (VECTOR(uint32_t, 16))(0x55990644L, (VECTOR(uint32_t, 4))(0x55990644L, (VECTOR(uint32_t, 2))(0x55990644L, 0UL), 0UL), 0UL, 0x55990644L, 0UL, (VECTOR(uint32_t, 2))(0x55990644L, 0UL), (VECTOR(uint32_t, 2))(0x55990644L, 0UL), 0x55990644L, 0UL, 0x55990644L, 0UL);
                    int i;
                    if ((atomic_inc(&p_556->g_atomic_input[4 * get_linear_group_id() + 3]) == 1))
                    { /* block id: 48 */
                        int32_t l_131 = 0x4FECFE75L;
                        uint8_t l_132 = 255UL;
                        VECTOR(uint16_t, 4) l_135 = (VECTOR(uint16_t, 4))(0x98C0L, (VECTOR(uint16_t, 2))(0x98C0L, 0UL), 0UL);
                        int32_t *l_136[9][6][1] = {{{&l_131},{&l_131},{&l_131},{&l_131},{&l_131},{&l_131}},{{&l_131},{&l_131},{&l_131},{&l_131},{&l_131},{&l_131}},{{&l_131},{&l_131},{&l_131},{&l_131},{&l_131},{&l_131}},{{&l_131},{&l_131},{&l_131},{&l_131},{&l_131},{&l_131}},{{&l_131},{&l_131},{&l_131},{&l_131},{&l_131},{&l_131}},{{&l_131},{&l_131},{&l_131},{&l_131},{&l_131},{&l_131}},{{&l_131},{&l_131},{&l_131},{&l_131},{&l_131},{&l_131}},{{&l_131},{&l_131},{&l_131},{&l_131},{&l_131},{&l_131}},{{&l_131},{&l_131},{&l_131},{&l_131},{&l_131},{&l_131}}};
                        int32_t *l_137 = (void*)0;
                        int i, j, k;
                        l_132--;
                        l_137 = (((VECTOR(uint16_t, 4))(l_135.wxzz)).y , (l_136[8][0][0] = (void*)0));
                        unsigned int result = 0;
                        result += l_131;
                        result += l_132;
                        result += l_135.w;
                        result += l_135.z;
                        result += l_135.y;
                        result += l_135.x;
                        atomic_add(&p_556->g_special_values[4 * get_linear_group_id() + 3], result);
                    }
                    else
                    { /* block id: 52 */
                        (1 + 1);
                    }
                    (*l_119) = (safe_rshift_func_int16_t_s_s((p_556->g_113.x & (p_556->g_140 >= p_556->g_comm_values[p_556->tid])), 1));
                    l_107 = ((void*)0 == l_141[0]);
                    for (p_556->g_94 = 0; (p_556->g_94 == 20); ++p_556->g_94)
                    { /* block id: 59 */
                        int32_t **l_166[4][8] = {{&p_556->g_122[1],&l_119,&p_556->g_122[1],&p_556->g_122[1],&l_119,&p_556->g_122[1],&p_556->g_122[1],&l_119},{&p_556->g_122[1],&l_119,&p_556->g_122[1],&p_556->g_122[1],&l_119,&p_556->g_122[1],&p_556->g_122[1],&l_119},{&p_556->g_122[1],&l_119,&p_556->g_122[1],&p_556->g_122[1],&l_119,&p_556->g_122[1],&p_556->g_122[1],&l_119},{&p_556->g_122[1],&l_119,&p_556->g_122[1],&p_556->g_122[1],&l_119,&p_556->g_122[1],&p_556->g_122[1],&l_119}};
                        int32_t ***l_165 = &l_166[0][1];
                        int8_t *l_172 = &p_556->g_173;
                        int64_t *l_174 = &p_556->g_175[0][3][7];
                        int i, j;
                        l_119 = ((((((((*l_174) = ((((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_144.s12)), (-4L), (-1L))).xzxxxxwxxxzwyywz, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_556->g_145.s2335)).even)).yyyyxyxx)), 0x4686L, (p_49 <= ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_146.s68a7)))).z), (safe_rshift_func_int8_t_s_s((*l_119), 0)), 0x7F9DL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_556->g_149.s496d93f2d2c60fb4)).s0517)))).sb6af)).zwzzxyyyxwxwwxzx, ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x7554L, ((safe_rshift_func_uint8_t_u_s((((((*l_172) = (p_556->g_171 &= (safe_rshift_func_int8_t_s_s(p_556->g_145.s5, (~((safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((!((safe_div_func_int16_t_s_s(p_49, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))((((safe_unary_minus_func_int32_t_s(((((safe_div_func_uint32_t_u_u(((((*l_165) = &p_556->g_122[1]) != (void*)0) || ((*l_119) & (++p_556->g_10[1]))), (p_556->g_140 || (safe_add_func_uint8_t_u_u(p_48, l_104.w))))) == (*p_556->g_78)) ^ 8L) < 0x6D71L))) <= 65533UL) != p_556->g_145.s5), l_146.s6, 0x7FD8L, 1L)).odd, (int16_t)(-3L)))).yxyxyxyyxyyyxxyy))))).odd, ((VECTOR(uint16_t, 8))(0UL)), ((VECTOR(uint16_t, 8))(3UL))))))), ((VECTOR(uint16_t, 4))(1UL)), p_556->g_118.s2, 1UL, 0xE13EL, 0x3592L)).se, ((VECTOR(uint16_t, 4))(0xD69CL)), 0xBE70L, 9UL, 1UL)).s4)) < 4294967289UL)), 0x14DCL)), p_49)), 0x2DL)) & 0UL)))))) < p_556->g_65.s4) , l_104.z) || 1L), 6)) , 1L), ((VECTOR(int16_t, 4))(2L)), (-1L), 0x7DB3L)).hi)).odd, ((VECTOR(int16_t, 2))(0x3ED5L)))))))).xxxyyyyyxyyyyxyx))).even, ((VECTOR(int16_t, 8))(0x07FAL))))).s6 ^ p_556->g_145.s4) | GROUP_DIVERGE(0, 1))) , 0UL) , 1L) || 3UL) < p_556->g_comm_values[p_556->tid]) & p_556->g_65.s0) , l_176);
                        return &p_556->g_10[2];
                    }
                }
                else
                { /* block id: 68 */
                    (*p_556->g_177) = (*p_556->g_121);
                    if (p_48)
                        continue;
                }
                (*l_119) = ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(p_556->g_178.xxyxxyxyyyyyxyxx)).s93)), 0x7B32E192L, (-3L))).xzzwzyzywyxwzxwz, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x44D09D3CL, (safe_div_func_uint32_t_u_u(p_556->g_84[0][0], 1L)), 0x5BD8F16DL, ((VECTOR(int32_t, 4))(0x78FD024EL, 0L, 0x78381580L, 1L)), 0x7DD99D97L)), p_49, (safe_mod_func_uint8_t_u_u(246UL, (safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u((((l_186 < (((((((((VECTOR(uint32_t, 4))((0x181DL != ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 8))(p_556->g_187.yxwzwwwz)).odd, ((VECTOR(uint16_t, 8))(l_188.yyxyxxxx)).hi))).x), 0x736A644CL, 0x29F08BABL, 0x84F157AFL)).w , l_92) && (p_49 >= (safe_unary_minus_func_uint8_t_u((((VECTOR(uint64_t, 2))(p_556->g_190.wx)).lo | (p_556->l_comm_values[(safe_mod_func_uint32_t_u_u(p_556->tid, 21))] && p_556->g_171)))))) , 0x436BD08AL) && p_49) , (-10L)) , (*l_119)) & l_191)) , p_556->g_84[0][0]) | p_48))) & (*l_119)), 5)))), l_192, 1L, 0x62AC364AL, 0x1FFC7C3EL, 0x366D9D4BL, 0x69FF9CF0L)))).s709e, ((VECTOR(int32_t, 4))(0x4E212550L)), ((VECTOR(int32_t, 4))(0x3B61917EL))))).yxxzzxyzxzywyyyw))).sf;
                for (p_556->g_140 = 0; (p_556->g_140 >= 21); p_556->g_140++)
                { /* block id: 75 */
                    (*l_119) = p_48;
                }
            }
            l_202[1]++;
        }
    }
    l_95.s6 = ((p_556->g_190.w = 0x8657F93D7C05EB80L) && (p_556->g_4.x < p_49));
    return &p_556->g_10[1];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[21];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 21; i++)
            l_comm_values[i] = 1;
    struct S0 c_557;
    struct S0* p_556 = &c_557;
    struct S0 c_558 = {
        (VECTOR(uint8_t, 2))(0xE0L, 1UL), // p_556->g_4
        {249UL,249UL,249UL,249UL,249UL}, // p_556->g_10
        (VECTOR(uint16_t, 8))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0xCCF5L), 0xCCF5L), 0xCCF5L, 65533UL, 0xCCF5L), // p_556->g_65
        249UL, // p_556->g_79
        &p_556->g_79, // p_556->g_78
        &p_556->g_78, // p_556->g_77
        {(void*)0}, // p_556->g_80
        {(void*)0,&p_556->g_77,(void*)0,(void*)0,&p_556->g_77,(void*)0,(void*)0,&p_556->g_77,(void*)0,(void*)0}, // p_556->g_81
        &p_556->g_77, // p_556->g_82
        {{(-7L),(-7L)},{(-7L),(-7L)},{(-7L),(-7L)}}, // p_556->g_84
        &p_556->g_84[0][0], // p_556->g_83
        {{{(void*)0,&p_556->g_83,&p_556->g_83,&p_556->g_83,&p_556->g_83,&p_556->g_83}},{{(void*)0,&p_556->g_83,&p_556->g_83,&p_556->g_83,&p_556->g_83,&p_556->g_83}},{{(void*)0,&p_556->g_83,&p_556->g_83,&p_556->g_83,&p_556->g_83,&p_556->g_83}}}, // p_556->g_85
        (-7L), // p_556->g_94
        (VECTOR(uint32_t, 8))(0x10F1DDE4L, (VECTOR(uint32_t, 4))(0x10F1DDE4L, (VECTOR(uint32_t, 2))(0x10F1DDE4L, 4294967295UL), 4294967295UL), 4294967295UL, 0x10F1DDE4L, 4294967295UL), // p_556->g_109
        (VECTOR(uint32_t, 8))(0x11437717L, (VECTOR(uint32_t, 4))(0x11437717L, (VECTOR(uint32_t, 2))(0x11437717L, 1UL), 1UL), 1UL, 0x11437717L, 1UL), // p_556->g_110
        (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 4294967295UL), 4294967295UL), // p_556->g_113
        (VECTOR(uint16_t, 8))(0x37C3L, (VECTOR(uint16_t, 4))(0x37C3L, (VECTOR(uint16_t, 2))(0x37C3L, 0UL), 0UL), 0UL, 0x37C3L, 0UL), // p_556->g_118
        {&p_556->g_84[0][0],&p_556->g_84[0][0],&p_556->g_84[0][0],&p_556->g_84[0][0],&p_556->g_84[0][0]}, // p_556->g_122
        &p_556->g_122[1], // p_556->g_121
        0x2BD2L, // p_556->g_140
        (VECTOR(int16_t, 8))(0x0A79L, (VECTOR(int16_t, 4))(0x0A79L, (VECTOR(int16_t, 2))(0x0A79L, (-1L)), (-1L)), (-1L), 0x0A79L, (-1L)), // p_556->g_145
        (VECTOR(int16_t, 16))(0x08C5L, (VECTOR(int16_t, 4))(0x08C5L, (VECTOR(int16_t, 2))(0x08C5L, 0x4159L), 0x4159L), 0x4159L, 0x08C5L, 0x4159L, (VECTOR(int16_t, 2))(0x08C5L, 0x4159L), (VECTOR(int16_t, 2))(0x08C5L, 0x4159L), 0x08C5L, 0x4159L, 0x08C5L, 0x4159L), // p_556->g_149
        1L, // p_556->g_171
        0x23L, // p_556->g_173
        {{{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L},{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L},{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L},{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L}},{{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L},{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L},{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L},{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L}},{{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L},{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L},{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L},{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L}},{{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L},{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L},{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L},{0x4043B8F3440FC8F3L,0x4EF4F58305FE1C8DL,0L,(-3L),(-5L),(-6L),0x24866C57027B00CAL,0L,1L,0x74D477D6962B2ED7L}}}, // p_556->g_175
        &p_556->g_122[1], // p_556->g_177
        (VECTOR(int32_t, 2))(0x03F6A43EL, 0x7F4ED39AL), // p_556->g_178
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x81FCL), 0x81FCL), // p_556->g_187
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x9C1215010C314D70L), 0x9C1215010C314D70L), // p_556->g_190
        &p_556->g_10[0], // p_556->g_207
        (-10L), // p_556->g_217
        (VECTOR(int32_t, 8))(0x5C0335DBL, (VECTOR(int32_t, 4))(0x5C0335DBL, (VECTOR(int32_t, 2))(0x5C0335DBL, 0x175CEA95L), 0x175CEA95L), 0x175CEA95L, 0x5C0335DBL, 0x175CEA95L), // p_556->g_230
        (void*)0, // p_556->g_272
        (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), // p_556->g_310
        0x6EL, // p_556->g_320
        0x53D8A287L, // p_556->g_322
        &p_556->g_122[4], // p_556->g_329
        {{&p_556->g_173,&p_556->g_173,&p_556->g_173,&p_556->g_173,&p_556->g_173,&p_556->g_173,&p_556->g_173},{&p_556->g_173,&p_556->g_173,&p_556->g_173,&p_556->g_173,&p_556->g_173,&p_556->g_173,&p_556->g_173},{&p_556->g_173,&p_556->g_173,&p_556->g_173,&p_556->g_173,&p_556->g_173,&p_556->g_173,&p_556->g_173}}, // p_556->g_331
        &p_556->g_331[2][4], // p_556->g_330
        &p_556->g_330, // p_556->g_332
        0x7F9EC9A9L, // p_556->g_340
        &p_556->g_122[1], // p_556->g_421
        &p_556->g_322, // p_556->g_424
        &p_556->g_122[4], // p_556->g_435
        {&p_556->g_435,&p_556->g_435,&p_556->g_435}, // p_556->g_434
        &p_556->g_207, // p_556->g_458
        {{{7UL,18446744073709551615UL,1UL,0x51EA13C919B5841AL},{7UL,18446744073709551615UL,1UL,0x51EA13C919B5841AL}},{{7UL,18446744073709551615UL,1UL,0x51EA13C919B5841AL},{7UL,18446744073709551615UL,1UL,0x51EA13C919B5841AL}},{{7UL,18446744073709551615UL,1UL,0x51EA13C919B5841AL},{7UL,18446744073709551615UL,1UL,0x51EA13C919B5841AL}},{{7UL,18446744073709551615UL,1UL,0x51EA13C919B5841AL},{7UL,18446744073709551615UL,1UL,0x51EA13C919B5841AL}},{{7UL,18446744073709551615UL,1UL,0x51EA13C919B5841AL},{7UL,18446744073709551615UL,1UL,0x51EA13C919B5841AL}},{{7UL,18446744073709551615UL,1UL,0x51EA13C919B5841AL},{7UL,18446744073709551615UL,1UL,0x51EA13C919B5841AL}},{{7UL,18446744073709551615UL,1UL,0x51EA13C919B5841AL},{7UL,18446744073709551615UL,1UL,0x51EA13C919B5841AL}}}, // p_556->g_471
        &p_556->g_94, // p_556->g_520
        0, // p_556->v_collective
        sequence_input[get_global_id(0)], // p_556->global_0_offset
        sequence_input[get_global_id(1)], // p_556->global_1_offset
        sequence_input[get_global_id(2)], // p_556->global_2_offset
        sequence_input[get_local_id(0)], // p_556->local_0_offset
        sequence_input[get_local_id(1)], // p_556->local_1_offset
        sequence_input[get_local_id(2)], // p_556->local_2_offset
        sequence_input[get_group_id(0)], // p_556->group_0_offset
        sequence_input[get_group_id(1)], // p_556->group_1_offset
        sequence_input[get_group_id(2)], // p_556->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 21)), permutations[0][get_linear_local_id()])), // p_556->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_557 = c_558;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_556);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_556->g_4.x, "p_556->g_4.x", print_hash_value);
    transparent_crc(p_556->g_4.y, "p_556->g_4.y", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_556->g_10[i], "p_556->g_10[i]", print_hash_value);

    }
    transparent_crc(p_556->g_65.s0, "p_556->g_65.s0", print_hash_value);
    transparent_crc(p_556->g_65.s1, "p_556->g_65.s1", print_hash_value);
    transparent_crc(p_556->g_65.s2, "p_556->g_65.s2", print_hash_value);
    transparent_crc(p_556->g_65.s3, "p_556->g_65.s3", print_hash_value);
    transparent_crc(p_556->g_65.s4, "p_556->g_65.s4", print_hash_value);
    transparent_crc(p_556->g_65.s5, "p_556->g_65.s5", print_hash_value);
    transparent_crc(p_556->g_65.s6, "p_556->g_65.s6", print_hash_value);
    transparent_crc(p_556->g_65.s7, "p_556->g_65.s7", print_hash_value);
    transparent_crc(p_556->g_79, "p_556->g_79", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_556->g_84[i][j], "p_556->g_84[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_556->g_94, "p_556->g_94", print_hash_value);
    transparent_crc(p_556->g_109.s0, "p_556->g_109.s0", print_hash_value);
    transparent_crc(p_556->g_109.s1, "p_556->g_109.s1", print_hash_value);
    transparent_crc(p_556->g_109.s2, "p_556->g_109.s2", print_hash_value);
    transparent_crc(p_556->g_109.s3, "p_556->g_109.s3", print_hash_value);
    transparent_crc(p_556->g_109.s4, "p_556->g_109.s4", print_hash_value);
    transparent_crc(p_556->g_109.s5, "p_556->g_109.s5", print_hash_value);
    transparent_crc(p_556->g_109.s6, "p_556->g_109.s6", print_hash_value);
    transparent_crc(p_556->g_109.s7, "p_556->g_109.s7", print_hash_value);
    transparent_crc(p_556->g_110.s0, "p_556->g_110.s0", print_hash_value);
    transparent_crc(p_556->g_110.s1, "p_556->g_110.s1", print_hash_value);
    transparent_crc(p_556->g_110.s2, "p_556->g_110.s2", print_hash_value);
    transparent_crc(p_556->g_110.s3, "p_556->g_110.s3", print_hash_value);
    transparent_crc(p_556->g_110.s4, "p_556->g_110.s4", print_hash_value);
    transparent_crc(p_556->g_110.s5, "p_556->g_110.s5", print_hash_value);
    transparent_crc(p_556->g_110.s6, "p_556->g_110.s6", print_hash_value);
    transparent_crc(p_556->g_110.s7, "p_556->g_110.s7", print_hash_value);
    transparent_crc(p_556->g_113.x, "p_556->g_113.x", print_hash_value);
    transparent_crc(p_556->g_113.y, "p_556->g_113.y", print_hash_value);
    transparent_crc(p_556->g_113.z, "p_556->g_113.z", print_hash_value);
    transparent_crc(p_556->g_113.w, "p_556->g_113.w", print_hash_value);
    transparent_crc(p_556->g_118.s0, "p_556->g_118.s0", print_hash_value);
    transparent_crc(p_556->g_118.s1, "p_556->g_118.s1", print_hash_value);
    transparent_crc(p_556->g_118.s2, "p_556->g_118.s2", print_hash_value);
    transparent_crc(p_556->g_118.s3, "p_556->g_118.s3", print_hash_value);
    transparent_crc(p_556->g_118.s4, "p_556->g_118.s4", print_hash_value);
    transparent_crc(p_556->g_118.s5, "p_556->g_118.s5", print_hash_value);
    transparent_crc(p_556->g_118.s6, "p_556->g_118.s6", print_hash_value);
    transparent_crc(p_556->g_118.s7, "p_556->g_118.s7", print_hash_value);
    transparent_crc(p_556->g_140, "p_556->g_140", print_hash_value);
    transparent_crc(p_556->g_145.s0, "p_556->g_145.s0", print_hash_value);
    transparent_crc(p_556->g_145.s1, "p_556->g_145.s1", print_hash_value);
    transparent_crc(p_556->g_145.s2, "p_556->g_145.s2", print_hash_value);
    transparent_crc(p_556->g_145.s3, "p_556->g_145.s3", print_hash_value);
    transparent_crc(p_556->g_145.s4, "p_556->g_145.s4", print_hash_value);
    transparent_crc(p_556->g_145.s5, "p_556->g_145.s5", print_hash_value);
    transparent_crc(p_556->g_145.s6, "p_556->g_145.s6", print_hash_value);
    transparent_crc(p_556->g_145.s7, "p_556->g_145.s7", print_hash_value);
    transparent_crc(p_556->g_149.s0, "p_556->g_149.s0", print_hash_value);
    transparent_crc(p_556->g_149.s1, "p_556->g_149.s1", print_hash_value);
    transparent_crc(p_556->g_149.s2, "p_556->g_149.s2", print_hash_value);
    transparent_crc(p_556->g_149.s3, "p_556->g_149.s3", print_hash_value);
    transparent_crc(p_556->g_149.s4, "p_556->g_149.s4", print_hash_value);
    transparent_crc(p_556->g_149.s5, "p_556->g_149.s5", print_hash_value);
    transparent_crc(p_556->g_149.s6, "p_556->g_149.s6", print_hash_value);
    transparent_crc(p_556->g_149.s7, "p_556->g_149.s7", print_hash_value);
    transparent_crc(p_556->g_149.s8, "p_556->g_149.s8", print_hash_value);
    transparent_crc(p_556->g_149.s9, "p_556->g_149.s9", print_hash_value);
    transparent_crc(p_556->g_149.sa, "p_556->g_149.sa", print_hash_value);
    transparent_crc(p_556->g_149.sb, "p_556->g_149.sb", print_hash_value);
    transparent_crc(p_556->g_149.sc, "p_556->g_149.sc", print_hash_value);
    transparent_crc(p_556->g_149.sd, "p_556->g_149.sd", print_hash_value);
    transparent_crc(p_556->g_149.se, "p_556->g_149.se", print_hash_value);
    transparent_crc(p_556->g_149.sf, "p_556->g_149.sf", print_hash_value);
    transparent_crc(p_556->g_171, "p_556->g_171", print_hash_value);
    transparent_crc(p_556->g_173, "p_556->g_173", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_556->g_175[i][j][k], "p_556->g_175[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_556->g_178.x, "p_556->g_178.x", print_hash_value);
    transparent_crc(p_556->g_178.y, "p_556->g_178.y", print_hash_value);
    transparent_crc(p_556->g_187.x, "p_556->g_187.x", print_hash_value);
    transparent_crc(p_556->g_187.y, "p_556->g_187.y", print_hash_value);
    transparent_crc(p_556->g_187.z, "p_556->g_187.z", print_hash_value);
    transparent_crc(p_556->g_187.w, "p_556->g_187.w", print_hash_value);
    transparent_crc(p_556->g_190.x, "p_556->g_190.x", print_hash_value);
    transparent_crc(p_556->g_190.y, "p_556->g_190.y", print_hash_value);
    transparent_crc(p_556->g_190.z, "p_556->g_190.z", print_hash_value);
    transparent_crc(p_556->g_190.w, "p_556->g_190.w", print_hash_value);
    transparent_crc(p_556->g_217, "p_556->g_217", print_hash_value);
    transparent_crc(p_556->g_230.s0, "p_556->g_230.s0", print_hash_value);
    transparent_crc(p_556->g_230.s1, "p_556->g_230.s1", print_hash_value);
    transparent_crc(p_556->g_230.s2, "p_556->g_230.s2", print_hash_value);
    transparent_crc(p_556->g_230.s3, "p_556->g_230.s3", print_hash_value);
    transparent_crc(p_556->g_230.s4, "p_556->g_230.s4", print_hash_value);
    transparent_crc(p_556->g_230.s5, "p_556->g_230.s5", print_hash_value);
    transparent_crc(p_556->g_230.s6, "p_556->g_230.s6", print_hash_value);
    transparent_crc(p_556->g_230.s7, "p_556->g_230.s7", print_hash_value);
    transparent_crc(p_556->g_310.x, "p_556->g_310.x", print_hash_value);
    transparent_crc(p_556->g_310.y, "p_556->g_310.y", print_hash_value);
    transparent_crc(p_556->g_320, "p_556->g_320", print_hash_value);
    transparent_crc(p_556->g_322, "p_556->g_322", print_hash_value);
    transparent_crc(p_556->g_340, "p_556->g_340", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_556->g_471[i][j][k], "p_556->g_471[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_556->v_collective, "p_556->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 4; i++)
            transparent_crc(p_556->g_special_values[i + 4 * get_linear_group_id()], "p_556->g_special_values[i + 4 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 4; i++)
            transparent_crc(p_556->l_special_values[i], "p_556->l_special_values[i]", print_hash_value);
    transparent_crc(p_556->l_comm_values[get_linear_local_id()], "p_556->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_556->g_comm_values[get_linear_group_id() * 21 + get_linear_local_id()], "p_556->g_comm_values[get_linear_group_id() * 21 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
