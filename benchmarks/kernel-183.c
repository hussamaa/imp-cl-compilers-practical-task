// --atomics 1 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 42,39,3 -l 6,1,1
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

__constant uint32_t permutations[10][6] = {
{1,3,5,0,4,2}, // permutation 0
{5,0,2,3,1,4}, // permutation 1
{4,3,5,0,2,1}, // permutation 2
{2,3,1,0,4,5}, // permutation 3
{5,4,3,0,2,1}, // permutation 4
{1,0,2,5,4,3}, // permutation 5
{2,3,4,0,1,5}, // permutation 6
{2,0,1,3,4,5}, // permutation 7
{1,3,2,4,5,0}, // permutation 8
{1,5,2,3,0,4} // permutation 9
};

// Seed: 2107161499

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint32_t  f0;
   uint32_t  f1;
   volatile int32_t  f2;
   uint16_t  f3;
   volatile uint32_t  f4;
};

struct S1 {
   uint32_t  f0;
};

struct S2 {
   uint64_t  f0;
   uint16_t  f1;
   int64_t  f2;
   uint16_t  f3;
   uint32_t  f4;
   int64_t  f5;
};

struct S3 {
    int32_t g_6;
    int32_t *g_8;
    int32_t ** volatile g_7;
    uint8_t g_17;
    uint64_t g_40;
    int32_t ** volatile g_60;
    uint8_t g_65;
    uint8_t *g_64[8];
    uint8_t **g_63;
    uint8_t **g_67[2];
    volatile struct S1 g_68[5][10];
    VECTOR(int32_t, 16) g_71;
    uint8_t ***g_90;
    uint8_t ***g_91;
    int32_t g_102[9][6];
    volatile struct S0 g_104;
    volatile struct S0 *g_103[8];
    struct S0 g_111;
    volatile VECTOR(int64_t, 4) g_129;
    volatile VECTOR(int8_t, 2) g_144;
    struct S2 g_168;
    struct S2 * volatile g_169;
    int32_t ** volatile g_170;
    int32_t ** volatile g_197;
    int16_t g_204;
    int16_t *g_203;
    int64_t g_214;
    volatile VECTOR(uint32_t, 8) g_224;
    VECTOR(uint32_t, 2) g_236;
    volatile VECTOR(uint32_t, 8) g_239;
    volatile VECTOR(uint32_t, 4) g_240;
    volatile struct S0 g_245;
    VECTOR(int32_t, 16) g_249;
    VECTOR(int32_t, 16) g_251;
    uint32_t g_256;
    struct S0 *g_279;
    struct S0 **g_278;
    volatile uint8_t g_288;
    volatile uint8_t *g_287;
    volatile uint8_t * volatile *g_286;
    VECTOR(uint8_t, 2) g_296;
    volatile VECTOR(uint16_t, 2) g_299;
    uint16_t *g_309;
    volatile VECTOR(int8_t, 8) g_325;
    uint32_t g_332;
    VECTOR(uint64_t, 16) g_345;
    VECTOR(uint64_t, 2) g_348;
    VECTOR(int8_t, 4) g_355;
    volatile struct S0 g_362;
    VECTOR(uint32_t, 4) g_365;
    VECTOR(int8_t, 16) g_386;
    struct S1 g_401;
    struct S1 *g_403[4][8][8];
    volatile VECTOR(int32_t, 8) g_415;
    VECTOR(int8_t, 8) g_429;
    volatile struct S0 g_440;
    volatile VECTOR(uint32_t, 16) g_445;
    int32_t g_462;
    volatile struct S2 g_484[2];
    volatile struct S2 * volatile g_483;
    volatile struct S2 *g_485;
    volatile struct S2 * volatile *g_482[5];
    volatile int32_t g_491;
    int8_t g_507[3];
    uint32_t g_524;
    uint16_t g_526;
    int32_t g_527[3][7][7];
    uint16_t g_552;
    int32_t * volatile g_553;
    VECTOR(int32_t, 16) g_562;
    int32_t ** volatile g_585;
    struct S0 g_590;
    int16_t g_607;
    uint16_t g_610;
    VECTOR(int8_t, 16) g_614;
    int32_t ** volatile g_620;
    int32_t ** volatile g_635;
    int32_t ** volatile g_636;
    struct S1 **g_648;
    struct S0 g_667;
    int32_t * volatile g_687;
    volatile uint8_t g_698[1];
    int8_t *g_723;
    VECTOR(uint8_t, 4) g_733;
    VECTOR(uint16_t, 16) g_755;
    int32_t ** volatile g_762;
    volatile VECTOR(uint64_t, 16) g_766;
    volatile VECTOR(int64_t, 16) g_767;
    VECTOR(int32_t, 2) g_771;
    volatile VECTOR(int8_t, 16) g_783;
    uint32_t g_816;
    VECTOR(int8_t, 2) g_822;
    struct S1 *g_824;
    struct S1 ** volatile g_823;
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
int8_t  func_1(struct S3 * p_834);
int32_t * func_2(uint64_t  p_3, struct S3 * p_834);
int32_t  func_9(int32_t * p_10, uint8_t  p_11, int32_t * p_12, int64_t  p_13, uint16_t  p_14, struct S3 * p_834);
int32_t * func_20(int32_t  p_21, int64_t  p_22, struct S3 * p_834);
int32_t * func_23(int32_t ** p_24, int32_t ** p_25, int32_t * p_26, uint32_t  p_27, struct S3 * p_834);
int32_t ** func_28(int64_t  p_29, int64_t  p_30, int32_t * p_31, int32_t  p_32, uint32_t  p_33, struct S3 * p_834);
int32_t * func_35(int16_t  p_36, uint64_t  p_37, uint8_t * p_38, uint8_t  p_39, struct S3 * p_834);
uint8_t * func_43(uint8_t  p_44, uint16_t  p_45, struct S3 * p_834);
uint8_t  func_46(int32_t ** p_47, int32_t  p_48, uint8_t * p_49, struct S3 * p_834);
int16_t  func_52(uint64_t  p_53, uint8_t * p_54, int32_t * p_55, struct S3 * p_834);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_834->g_6 p_834->g_7 p_834->g_17 p_834->g_comm_values p_834->g_40 p_834->l_comm_values p_834->g_8 p_834->g_60 p_834->g_63 p_834->g_68 p_834->g_71 p_834->g_102 p_834->g_103 p_834->g_91 p_834->g_67 p_834->g_64 p_834->g_104.f3 p_834->g_111.f4 p_834->g_65 p_834->g_144 p_834->g_168 p_834->g_169 p_834->g_170 p_834->g_104.f2 p_834->g_197 p_834->g_129 p_834->g_111.f1 p_834->g_203 p_834->g_214 p_834->g_104.f0 p_834->g_224 p_834->g_236 p_834->g_239 p_834->g_240 p_834->g_245 p_834->g_249 p_834->g_251 p_834->g_204 p_834->g_278 p_834->g_286 p_834->g_296 p_834->g_299 p_834->g_104.f4 p_834->g_325 p_834->g_111.f3 p_834->g_332 p_834->g_345 p_834->g_348 p_834->g_355 p_834->g_362 p_834->g_309 p_834->g_365 p_834->g_386 p_834->g_415 p_834->g_429 p_834->g_440 p_834->g_279 p_834->g_445 p_834->g_401.f0 p_834->g_462 p_834->g_482 p_834->g_491 p_834->g_484.f3 p_834->g_484.f2 p_834->g_524 p_834->g_526 p_834->g_527 p_834->g_552 p_834->g_553 p_834->g_256 p_834->g_483 p_834->g_585 p_834->g_288 p_834->g_111 p_834->g_607 p_834->g_562 p_834->g_610 p_834->g_614 p_834->g_620 p_834->g_636 p_834->g_648 p_834->g_667 p_834->g_287 p_834->g_698 p_834->g_733 p_834->g_755 p_834->g_762 p_834->g_766 p_834->g_767 p_834->g_771 p_834->g_783 p_834->g_507 p_834->g_822 p_834->g_823
 * writes: p_834->g_6 p_834->g_8 p_834->g_17 p_834->g_40 p_834->g_63 p_834->g_67 p_834->g_71 p_834->g_90 p_834->g_91 p_834->g_102 p_834->g_168 p_834->g_203 p_834->g_214 p_834->g_64 p_834->g_256 p_834->g_65 p_834->g_111.f1 p_834->g_309 p_834->g_332 p_834->g_204 p_834->g_403 p_834->g_386 p_834->g_111 p_834->g_355 p_834->g_251 p_834->g_507 p_834->g_526 p_834->g_527 p_834->g_484 p_834->g_279 p_834->g_590 p_834->g_401.f0 p_834->g_610 p_834->g_236 p_834->g_648 p_834->g_562 p_834->g_698 p_834->g_723 p_834->g_607 p_834->g_816 p_834->g_824
 */
int8_t  func_1(struct S3 * p_834)
{ /* block id: 4 */
    uint32_t l_4 = 1UL;
    VECTOR(uint64_t, 2) l_34 = (VECTOR(uint64_t, 2))(5UL, 0xC4433AC25417612DL);
    uint8_t *l_58[4];
    uint32_t l_167 = 4294967295UL;
    int32_t *l_202 = &p_834->g_6;
    int64_t l_266 = 0x2BABBD7AAF0EE490L;
    VECTOR(int64_t, 4) l_291 = (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), (-8L)), (-8L));
    int16_t l_337 = (-10L);
    VECTOR(uint64_t, 2) l_338 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL);
    VECTOR(uint64_t, 2) l_339 = (VECTOR(uint64_t, 2))(0x1C3F0FED148A94A3L, 0x9EE790F709605DD3L);
    VECTOR(int8_t, 8) l_354 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x2EL), 0x2EL), 0x2EL, 0L, 0x2EL);
    uint32_t l_356 = 4294967288UL;
    struct S2 *l_373 = (void*)0;
    uint8_t **l_389 = &l_58[1];
    struct S1 *l_400 = &p_834->g_401;
    uint16_t l_411 = 0xFC25L;
    int16_t l_414 = 0x54AEL;
    int32_t l_490 = 0x156E4435L;
    VECTOR(int8_t, 8) l_495 = (VECTOR(int8_t, 8))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 1L), 1L), 1L, 6L, 1L);
    int16_t **l_497[1];
    VECTOR(uint64_t, 8) l_515 = (VECTOR(uint64_t, 8))(0x15FDD3AD40FF240CL, (VECTOR(uint64_t, 4))(0x15FDD3AD40FF240CL, (VECTOR(uint64_t, 2))(0x15FDD3AD40FF240CL, 7UL), 7UL), 7UL, 0x15FDD3AD40FF240CL, 7UL);
    int16_t l_525 = 0x087EL;
    uint8_t l_530 = 0xCBL;
    int32_t l_573 = 0x7D5F09C1L;
    VECTOR(int32_t, 8) l_574 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x14D6D40DL), 0x14D6D40DL), 0x14D6D40DL, 9L, 0x14D6D40DL);
    uint8_t ****l_619 = (void*)0;
    VECTOR(uint8_t, 8) l_662 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 3UL), 3UL), 3UL, 1UL, 3UL);
    int32_t l_692 = (-10L);
    int16_t l_693 = (-3L);
    uint32_t l_695 = 0x21648701L;
    uint16_t l_716 = 4UL;
    VECTOR(uint64_t, 4) l_728 = (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 1UL), 1UL);
    int16_t l_740 = 0x6638L;
    VECTOR(int32_t, 8) l_764 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1CCFE65AL), 0x1CCFE65AL), 0x1CCFE65AL, (-1L), 0x1CCFE65AL);
    VECTOR(int32_t, 2) l_772 = (VECTOR(int32_t, 2))((-1L), 0x61C81622L);
    uint32_t l_809 = 4294967295UL;
    int i;
    for (i = 0; i < 4; i++)
        l_58[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_497[i] = &p_834->g_203;
    (*p_834->g_7) = func_2(l_4, p_834);
    if (l_4)
    { /* block id: 9 */
        int32_t *l_15 = (void*)0;
        uint8_t *l_16 = &p_834->g_17;
        uint16_t l_75 = 1UL;
        int32_t **l_166[10][5];
        uint64_t *l_213 = (void*)0;
        int16_t l_215 = 1L;
        uint16_t *l_308 = &l_75;
        int64_t l_322 = 0x36D7EA2F1FBFD773L;
        VECTOR(int32_t, 4) l_404 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x5C54055DL), 0x5C54055DL);
        int32_t l_405 = 0x7D6DF392L;
        int16_t l_407 = (-1L);
        uint16_t l_408 = 6UL;
        int32_t l_437 = 0L;
        struct S1 *l_510 = &p_834->g_401;
        struct S0 *l_513 = &p_834->g_111;
        struct S2 l_514 = {0xEAB66BD4127D366BL,0xB859L,0x0ECBB887663AAF7CL,0xDF06L,0xA552F9DAL,0L};
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 5; j++)
                l_166[i][j] = &p_834->g_8;
        }
        if (func_9(l_15, ((*l_16)--), func_20((p_834->g_comm_values[p_834->tid] && (p_834->g_214 ^= ((l_15 == ((*p_834->g_197) = func_23(&p_834->g_8, func_28(p_834->g_6, l_34.x, ((*p_834->g_7) = func_35(l_34.x, (+(++p_834->g_40)), func_43((l_75 = func_46((((safe_rshift_func_int8_t_s_s(p_834->l_comm_values[(safe_mod_func_uint32_t_u_u(p_834->tid, 6))], 2)) > ((func_52(((safe_mul_func_uint16_t_u_u(6UL, p_834->g_comm_values[p_834->tid])) , p_834->g_comm_values[p_834->tid]), l_58[1], (*p_834->g_7), p_834) >= 1L) > l_34.x)) , (void*)0), p_834->l_comm_values[(safe_mod_func_uint32_t_u_u(p_834->tid, 6))], l_58[1], p_834)), l_34.y, p_834), l_34.y, p_834)), l_34.x, l_167, p_834), l_202, p_834->g_comm_values[p_834->tid], p_834))) | 0x420EFC44F52D5E57L))), l_215, p_834), l_266, p_834->g_251.s8, p_834))
        { /* block id: 106 */
            uint16_t *l_307 = &p_834->g_168.f3;
            uint16_t **l_306[5] = {&l_307,&l_307,&l_307,&l_307,&l_307};
            uint32_t *l_314 = &l_167;
            uint32_t *l_315 = &p_834->g_111.f1;
            int8_t l_318 = 5L;
            int8_t l_319 = 0x07L;
            VECTOR(int16_t, 16) l_353 = (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 4L), 4L), 4L, 8L, 4L, (VECTOR(int16_t, 2))(8L, 4L), (VECTOR(int16_t, 2))(8L, 4L), 8L, 4L, 8L, 4L);
            uint32_t *l_377 = &p_834->g_256;
            uint64_t *l_398 = (void*)0;
            uint64_t *l_399 = &p_834->g_40;
            struct S1 **l_402[10] = {&l_400,&l_400,&l_400,&l_400,&l_400,&l_400,&l_400,&l_400,&l_400,&l_400};
            uint8_t **l_406 = &l_16;
            int i;
            if ((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(FAKE_DIVERGE(p_834->global_2_offset, get_global_id(2), 10), ((((((*p_834->g_169) , p_834->g_286) != ((FAKE_DIVERGE(p_834->group_0_offset, get_group_id(0), 10) | 0x4EL) , &l_16)) , (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 8))(l_291.zwzzxxwx)).s06, (int64_t)(safe_rshift_func_uint16_t_u_s(65535UL, 6)), (int64_t)(safe_add_func_int16_t_s_s(((((VECTOR(uint8_t, 2))(p_834->g_296.xy)).odd != (safe_mod_func_int64_t_s_s((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 8))(p_834->g_299.xxxyyxxy)), (uint16_t)(safe_sub_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((((&l_75 == (p_834->g_309 = (l_308 = p_834->g_203))) >= (safe_mul_func_uint16_t_u_u(((*l_307) = (safe_add_func_uint32_t_u_u(((*l_315) |= ((*l_314) |= p_834->g_104.f4)), (safe_add_func_int64_t_s_s((65535UL <= (*l_202)), p_834->g_168.f4))))), (*p_834->g_203)))) , 0L) < (*p_834->g_203)), 4)), p_834->g_296.y)), 4L))))))).s0 , l_318), 0x78C6065B720071BEL))) <= 0x6926L), 65527UL))))).even, 1L))) & p_834->g_65) == l_318))) && l_319), 2)))
            { /* block id: 112 */
                (*l_202) = (((p_834->g_64[2] != l_16) == (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(65531UL, 65526UL)).yxxyxxxyxyxxxyxx)).sb | ((*l_307)++))) < l_322);
            }
            else
            { /* block id: 115 */
                uint64_t *l_326 = (void*)0;
                uint64_t *l_327 = &p_834->g_40;
                VECTOR(int64_t, 8) l_340 = (VECTOR(int64_t, 8))(0x1CCAE64A78AF4274L, (VECTOR(int64_t, 4))(0x1CCAE64A78AF4274L, (VECTOR(int64_t, 2))(0x1CCAE64A78AF4274L, 0x01570E2E7167F8F8L), 0x01570E2E7167F8F8L), 0x01570E2E7167F8F8L, 0x1CCAE64A78AF4274L, 0x01570E2E7167F8F8L);
                int i;
                p_834->g_71.s2 ^= ((safe_mul_func_uint16_t_u_u((((VECTOR(int8_t, 16))(p_834->g_325.s7241157635551543)).sb > 0x7EL), ((((*p_834->g_203) = (((*l_327) = FAKE_DIVERGE(p_834->local_1_offset, get_local_id(1), 10)) < (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(4294967295UL, 9UL, 0x7721E02EL, 0x24293831L)).x, (safe_div_func_uint64_t_u_u((p_834->g_332 |= p_834->g_111.f3), (safe_mul_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(l_337, (((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_338.yx)).xxxxxyxxxyyyyyxx)).hi, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 8))(p_834->g_6, ((VECTOR(uint64_t, 4))(l_339.xyxy)), ((VECTOR(uint64_t, 2))(18446744073709551611UL, 1UL)), 18446744073709551609UL)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(0x21638EB32B05E8C8L, (-1L), ((VECTOR(int64_t, 4))(l_340.s6351)), (-1L), (safe_sub_func_uint16_t_u_u(0UL, ((p_834->g_251.s2 , (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 4))(p_834->g_345.s2e2a)).even, ((VECTOR(uint64_t, 8))((((*l_202) > 8L) , ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(p_834->g_348.yyxx)).y, (safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_353.s455b)), (-1L), (((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_354.s1727)).yzzxwwwxwzwxywww)).sdf, ((VECTOR(int8_t, 16))(p_834->g_355.wwyyywxwxzwwzzzy)).se1))).odd , 7L), 0x2B49L, 1L)).s21)).odd, (*p_834->g_203))), l_318)))) < p_834->g_102[4][4])), 0x8AE3B0F1512072A0L, 0xD96D00122761FFCBL, 0x67218FBF74A89FFAL, 0UL, 9UL, 2UL, 18446744073709551615UL)).s07))).xxxy, ((VECTOR(uint64_t, 4))(0xD0446784FC927200L))))).x, 0x696AF79EDE54CE6DL))) & p_834->g_296.y))), 2L, ((VECTOR(int64_t, 2))(1L)), ((VECTOR(int64_t, 2))(0L)), ((VECTOR(int64_t, 2))((-1L))), 0x77C0BD759E20A06DL)).s1fa8, ((VECTOR(int64_t, 4))(0L))))).yzyxzxzyzwwwwwyz)).sc2d5, ((VECTOR(int64_t, 4))(0x30FD19336BB5143AL))))).zzxyyyxw)), ((VECTOR(uint64_t, 8))(1UL)))))))))).s2 , 0x0E5178DDL))) > 0x71EEL), l_340.s0)))))))) <= 8UL) & l_318))) || (*l_202));
            }
            if (((*l_202) &= l_356))
            { /* block id: 122 */
                int32_t l_357 = (-1L);
                (*l_202) = l_357;
            }
            else
            { /* block id: 124 */
                int16_t **l_371 = &p_834->g_203;
                int16_t ***l_370 = &l_371;
                int32_t l_372 = 0x3D242E71L;
                struct S2 **l_374 = &l_373;
                (*l_202) = (safe_div_func_int16_t_s_s((safe_add_func_int64_t_s_s(((p_834->g_362 , 0x73B8160FL) ^ (-10L)), ((safe_sub_func_uint16_t_u_u((0xF85FD576F8DA45D3L != ((*p_834->g_309) && ((((VECTOR(uint32_t, 4))(p_834->g_365.wywz)).z ^ (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((((&p_834->g_203 != ((*l_370) = &p_834->g_203)) ^ p_834->g_168.f4) & (((((&p_834->g_8 == &p_834->g_8) >= 4294967295UL) != l_319) | l_319) < l_353.s4)) != 0x890CL), l_372)), 0x54707B15L))) | l_372))), 2L)) == l_353.se))), l_372));
                (*l_374) = l_373;
                return l_372;
            }
            p_834->g_71.sa ^= (((safe_lshift_func_uint8_t_u_s(((((*l_377) = l_319) , (safe_sub_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(p_834->g_386.sd32828c4)).lo)).y, (((safe_mul_func_int8_t_s_s((((l_389 = (void*)0) == ((((safe_lshift_func_int16_t_s_s((*p_834->g_203), 11)) || ((safe_mod_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))((((*l_399) &= (safe_add_func_uint8_t_u_u(l_353.s9, GROUP_DIVERGE(1, 1)))) < (((*l_202) = (((p_834->g_403[2][5][5] = l_400) != (void*)0) , (*p_834->g_309))) >= ((-2L) | (((VECTOR(int32_t, 2))(l_404.zz)).even <= ((*p_834->g_309) , p_834->g_104.f4))))), 0x6F5EFADEL, p_834->g_345.sf, p_834->g_129.x, l_405, ((VECTOR(uint32_t, 2))(0x33DCC85AL)), 4294967289UL)).hi)).y , p_834->g_40) && 0x5DD6CE07A3EC4B03L), l_353.s1)), (*p_834->g_309))) && 0x844B00A7L)) && l_318) , l_406)) & l_319), p_834->g_17)) == (**p_834->g_63)) > l_319))), (*p_834->g_309))), 9)) ^ 0L) >= l_407), (*p_834->g_309)))) | l_408), p_834->g_168.f5)) & 65527UL) == (**p_834->g_63));
        }
        else
        { /* block id: 136 */
            uint64_t l_418 = 6UL;
            int8_t *l_421 = (void*)0;
            int8_t *l_422 = (void*)0;
            int8_t *l_423 = (void*)0;
            int8_t *l_424 = (void*)0;
            int8_t *l_425 = (void*)0;
            int8_t *l_426 = (void*)0;
            int8_t *l_427 = (void*)0;
            int32_t l_428 = 8L;
            int32_t *l_432 = &p_834->g_6;
            int16_t l_492 = 0x333CL;
            int16_t **l_496 = &p_834->g_203;
            int32_t l_506[4][7][6] = {{{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)}},{{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)}},{{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)}},{{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)},{(-5L),9L,(-6L),(-6L),9L,(-5L)}}};
            struct S2 l_509[5] = {{18446744073709551613UL,65529UL,0x257ED3CB57BB43DAL,0xD792L,0x015F3096L,0L},{18446744073709551613UL,65529UL,0x257ED3CB57BB43DAL,0xD792L,0x015F3096L,0L},{18446744073709551613UL,65529UL,0x257ED3CB57BB43DAL,0xD792L,0x015F3096L,0L},{18446744073709551613UL,65529UL,0x257ED3CB57BB43DAL,0xD792L,0x015F3096L,0L},{18446744073709551613UL,65529UL,0x257ED3CB57BB43DAL,0xD792L,0x015F3096L,0L}};
            uint8_t l_533 = 0x17L;
            int i, j, k;
            l_414 ^= (safe_rshift_func_uint8_t_u_u((l_411 >= (safe_mod_func_uint64_t_u_u((0x45L < 1UL), ((*l_202) = FAKE_DIVERGE(p_834->group_1_offset, get_group_id(1), 10))))), 7));
            if (((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(p_834->g_415.s1040)), ((VECTOR(int32_t, 2))(0x66E472A7L, (-10L))).xyxx))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), 0L)).yyxyxxyy)).even))), (int32_t)((VECTOR(int32_t, 4))(((safe_mul_func_uint8_t_u_u(l_418, (safe_rshift_func_int8_t_s_u((l_428 &= p_834->g_168.f5), 1)))) == (((((VECTOR(int8_t, 8))(p_834->g_429.s12024257)).s4 || (safe_mod_func_int16_t_s_s(((p_834->g_240.x ^ ((l_432 = func_2((*l_202), p_834)) != &p_834->g_102[0][3])) , (safe_div_func_int16_t_s_s(((p_834->g_386.sb = p_834->g_111.f1) , (safe_rshift_func_uint16_t_u_u((l_437 <= ((safe_sub_func_int64_t_s_s(((((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x6638L, 0x772CL, 0x47B7L, (*l_202), ((VECTOR(int16_t, 2))((-5L))), (-4L), 0L)).lo)).x & 0L) ^ (*l_202)) == p_834->g_386.s3) && 1UL), p_834->g_362.f3)) , p_834->g_239.s6)), (*l_202)))), p_834->g_251.s6))), (*p_834->g_203)))) , (*p_834->g_60)) != &p_834->g_102[0][3])), ((VECTOR(int32_t, 2))(0x1A0A9618L)), 0x12D8BA11L)).y, (int32_t)0x620934A1L))).w)
            { /* block id: 142 */
                uint64_t l_441 = 7UL;
                int64_t *l_442 = &p_834->g_214;
                VECTOR(int32_t, 8) l_464 = (VECTOR(int32_t, 8))(0x1A6DE0F3L, (VECTOR(int32_t, 4))(0x1A6DE0F3L, (VECTOR(int32_t, 2))(0x1A6DE0F3L, (-1L)), (-1L)), (-1L), 0x1A6DE0F3L, (-1L));
                int i;
                (*p_834->g_279) = p_834->g_440;
                if ((((((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(0x1838AB1AB9C30B06L, 0x7C086CD2EA72E90AL)), (int64_t)(FAKE_DIVERGE(p_834->local_1_offset, get_local_id(1), 10) , ((*l_442) |= l_441))))).even <= p_834->g_65) > p_834->g_249.sc) != ((((void*)0 != &p_834->g_169) == (*l_202)) | p_834->g_168.f0)))
                { /* block id: 145 */
                    (*l_202) = ((*p_834->g_169) , (*l_202));
                }
                else
                { /* block id: 147 */
                    uint32_t l_461 = 4294967289UL;
                    int32_t l_466 = (-1L);
                    int32_t l_489 = 0x02F7D9CAL;
                    for (l_356 = 0; (l_356 >= 60); l_356 = safe_add_func_int8_t_s_s(l_356, 7))
                    { /* block id: 150 */
                        uint8_t l_458 = 246UL;
                        int64_t *l_463 = &p_834->g_168.f2;
                        int32_t l_465 = (-5L);
                        if (p_834->g_445.sf)
                            break;
                        l_464.s7 ^= (safe_mod_func_uint32_t_u_u(((p_834->g_355.x = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((~(*l_202)) >= (safe_add_func_uint32_t_u_u((l_458 >= ((*p_834->g_203) || (safe_add_func_uint32_t_u_u(p_834->g_401.f0, 0x55FD6842L)))), l_461))), p_834->g_462)), (((*l_463) = ((void*)0 != &p_834->g_90)) , l_461))), 7)), 65528UL))) <= FAKE_DIVERGE(p_834->global_2_offset, get_global_id(2), 10)), l_461));
                        l_466 ^= l_465;
                        if (l_465)
                            break;
                    }
                    for (l_461 = 0; (l_461 != 17); ++l_461)
                    { /* block id: 160 */
                        VECTOR(int8_t, 8) l_475 = (VECTOR(int8_t, 8))(0x63L, (VECTOR(int8_t, 4))(0x63L, (VECTOR(int8_t, 2))(0x63L, 0x0BL), 0x0BL), 0x0BL, 0x63L, 0x0BL);
                        int8_t **l_478 = &l_427;
                        int8_t **l_479 = (void*)0;
                        int8_t **l_480 = (void*)0;
                        int8_t **l_481 = &l_423;
                        uint32_t *l_486 = (void*)0;
                        uint32_t *l_487[9] = {&p_834->g_256,&p_834->g_256,&p_834->g_256,&p_834->g_256,&p_834->g_256,&p_834->g_256,&p_834->g_256,&p_834->g_256,&p_834->g_256};
                        int32_t l_488 = 0x2574A75BL;
                        int i;
                        l_489 |= ((l_488 |= ((safe_div_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(65535UL, 8)) || ((safe_mul_func_uint8_t_u_u((0xE8A6L && (((VECTOR(int8_t, 8))(0L, 0x24L, 0x54L, 0L, ((VECTOR(int8_t, 4))(l_475.s6767)))).s1 , (((((p_834->g_65 | (((void*)0 == l_16) > (((((safe_mul_func_uint16_t_u_u((((((((*l_478) = l_426) == ((*l_481) = func_43(l_461, ((((((((((void*)0 != (*l_389)) >= l_441) && p_834->g_204) , (void*)0) == (void*)0) < l_441) != l_464.s1) > p_834->g_362.f2) >= l_475.s3), p_834))) , (void*)0) != p_834->g_482[3]) <= (*p_834->g_203)) == (*p_834->g_203)), (*p_834->g_203))) , GROUP_DIVERGE(1, 1)) , (*l_202)) == l_464.s0) ^ l_464.s2))) >= p_834->g_168.f3) | (*p_834->g_203)) <= p_834->g_251.s6) , 0x0E3EL))), p_834->g_348.y)) || l_466)), p_834->g_comm_values[p_834->tid])) , p_834->g_129.z)) , 0x1AD47817L);
                    }
                }
            }
            else
            { /* block id: 167 */
                uint8_t l_508[10] = {0xC4L,255UL,0xC4L,0xC4L,255UL,0xC4L,0xC4L,255UL,0xC4L,0xC4L};
                int i;
                l_490 ^= (*l_202);
                p_834->g_251.s0 &= (p_834->g_491 | l_492);
                l_510 = (((safe_div_func_uint16_t_u_u((((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 8))(l_495.s75024661)).odd))).x , 0x09CFL), (*p_834->g_203))) == ((((l_496 == l_497[0]) >= (p_834->g_484[1].f3 , (safe_div_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u((7L == ((5UL >= (safe_add_func_int16_t_s_s((p_834->g_507[0] = ((safe_mul_func_uint16_t_u_u(l_506[3][4][2], 65535UL)) ^ p_834->g_401.f0)), p_834->g_362.f0))) ^ 1UL)), l_508[3])) , p_834->g_240.x) != p_834->g_65), 1L)))) , l_509[0]) , 1UL)) , l_400);
                (*p_834->g_60) = func_2((((p_834->g_527[1][1][5] |= (((*l_202) != (((VECTOR(uint32_t, 2))(0x599762B1L, 1UL)).hi < FAKE_DIVERGE(p_834->group_2_offset, get_group_id(2), 10))) < (((((void*)0 == l_513) == (p_834->g_484[1].f2 != (p_834->l_comm_values[(safe_mod_func_uint32_t_u_u(p_834->tid, 6))] < ((p_834->g_526 &= ((*p_834->g_203) ^= (((l_514 , (((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 16))(l_515.s7457523104361076)).sc5b7, ((VECTOR(uint64_t, 8))(18446744073709551612UL, 0x152829E50ED63285L, (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(((0xA7BC83D3L == FAKE_DIVERGE(p_834->group_2_offset, get_group_id(2), 10)) & (safe_mod_func_uint32_t_u_u(p_834->g_348.x, (*l_202)))), p_834->g_524)), FAKE_DIVERGE(p_834->global_2_offset, get_global_id(2), 10))) != p_834->g_168.f2), 0x1C5EL)), 18446744073709551613UL, 18446744073709551612UL, 0xEB44B0E1A48C93D1L, 1UL, 0x4F5E64B7DCB46387L)).hi))).x , l_525)) > p_834->g_40) == (*l_202)))) || (*p_834->g_203))))) & (-1L)) , (*l_202)))) ^ p_834->g_65) <= 0x0DE301C89510DF5FL), p_834);
            }
            for (p_834->g_204 = 0; (p_834->g_204 < 20); p_834->g_204 = safe_add_func_int64_t_s_s(p_834->g_204, 4))
            { /* block id: 179 */
                ++l_530;
            }
            l_533++;
        }
        p_834->g_403[2][5][5] = (void*)0;
        return p_834->g_429.s7;
    }
    else
    { /* block id: 186 */
        struct S1 *l_536[1][6][2] = {{{&p_834->g_401,&p_834->g_401},{&p_834->g_401,&p_834->g_401},{&p_834->g_401,&p_834->g_401},{&p_834->g_401,&p_834->g_401},{&p_834->g_401,&p_834->g_401},{&p_834->g_401,&p_834->g_401}}};
        struct S0 **l_539 = &p_834->g_279;
        uint16_t *l_542 = &p_834->g_526;
        int32_t l_551 = 1L;
        int8_t l_571 = 0x76L;
        int32_t l_572[6][6] = {{0x7B769730L,0x1D2C6BEFL,1L,(-1L),(-1L),0x7B769730L},{0x7B769730L,0x1D2C6BEFL,1L,(-1L),(-1L),0x7B769730L},{0x7B769730L,0x1D2C6BEFL,1L,(-1L),(-1L),0x7B769730L},{0x7B769730L,0x1D2C6BEFL,1L,(-1L),(-1L),0x7B769730L},{0x7B769730L,0x1D2C6BEFL,1L,(-1L),(-1L),0x7B769730L},{0x7B769730L,0x1D2C6BEFL,1L,(-1L),(-1L),0x7B769730L}};
        uint8_t *l_588 = &l_530;
        uint64_t l_632 = 0UL;
        int32_t *l_686 = (void*)0;
        int32_t *l_688 = &p_834->g_527[2][4][5];
        int8_t l_690 = 0x29L;
        int32_t l_691 = 0x3AF4CF65L;
        int32_t l_694 = 0x2AC2FD98L;
        VECTOR(uint16_t, 8) l_732 = (VECTOR(uint16_t, 8))(0x0D72L, (VECTOR(uint16_t, 4))(0x0D72L, (VECTOR(uint16_t, 2))(0x0D72L, 0x790DL), 0x790DL), 0x790DL, 0x0D72L, 0x790DL);
        uint8_t l_742[5];
        int16_t ***l_757[8] = {&l_497[0],&l_497[0],&l_497[0],&l_497[0],&l_497[0],&l_497[0],&l_497[0],&l_497[0]};
        VECTOR(int32_t, 4) l_768 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-1L)), (-1L));
        VECTOR(int32_t, 8) l_770 = (VECTOR(int32_t, 8))(0x1DD15054L, (VECTOR(int32_t, 4))(0x1DD15054L, (VECTOR(int32_t, 2))(0x1DD15054L, 1L), 1L), 1L, 0x1DD15054L, 1L);
        struct S2 *l_782 = (void*)0;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_742[i] = 6UL;
        if ((((void*)0 == l_536[0][0][0]) ^ ((safe_rshift_func_uint16_t_u_s(1UL, ((*p_834->g_203) = 0x4B15L))) <= (((void*)0 == l_539) , ((*l_202) = ((&l_202 != &p_834->g_8) , (safe_sub_func_uint16_t_u_u(((*l_542)++), (safe_mod_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(0x5C8229C5040C9D26L, (-5L))), l_551)) || (*l_202)), 0x1A1F93157FB10955L))))))))))
        { /* block id: 190 */
            struct S1 l_563 = {0x68D268A4L};
            int64_t l_575 = 0x5BADF6645A1A4004L;
            int32_t l_576 = (-6L);
            struct S2 l_580 = {0xDCD3AE9FA2899496L,65528UL,0x09CE9722AC7F24C4L,0x70ACL,0x267D1BFEL,4L};
            struct S2 *l_592 = (void*)0;
            int16_t l_630 = 0x672CL;
            int32_t l_631 = 1L;
            uint32_t *l_642[10][6][3] = {{{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1}},{{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1}},{{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1}},{{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1}},{{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1}},{{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1}},{{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1}},{{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1}},{{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1}},{{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1},{&p_834->g_590.f1,&p_834->g_590.f1,&p_834->g_590.f1}}};
            struct S1 **l_647[8] = {&l_400,&p_834->g_403[3][5][5],&l_400,&l_400,&p_834->g_403[3][5][5],&l_400,&l_400,&p_834->g_403[3][5][5]};
            int i, j, k;
            (*p_834->g_553) = ((*l_202) = p_834->g_552);
            for (p_834->g_111.f1 = (-7); (p_834->g_111.f1 <= 57); p_834->g_111.f1 = safe_add_func_int16_t_s_s(p_834->g_111.f1, 4))
            { /* block id: 195 */
                int8_t l_556 = (-9L);
                struct S1 l_557 = {0UL};
                int32_t l_568 = 0x3B6C7BF1L;
                struct S2 *l_591 = &p_834->g_168;
                (*l_202) = l_556;
                (*p_834->g_170) = (*p_834->g_60);
                if ((l_557 , ((l_568 |= ((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((GROUP_DIVERGE(0, 1) , l_557.f0), (+7L))) && (((0L | ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(p_834->g_562.scc1de6d6be06a0b4)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x198B1A6EL, 0x78F53576L)), (-5L), 0x0BE8CDB9L, (l_563 , (safe_add_func_uint32_t_u_u(4294967292UL, (safe_mod_func_uint32_t_u_u(((*l_389) != ((*p_834->g_63) = func_43((*p_834->g_287), l_551, p_834))), 0xFEBED2FFL))))), 0x08E54C8AL, ((VECTOR(int32_t, 4))((-1L))), 0x6B958F9AL, l_563.f0, 0x7D790D50L, 0x037A9F9DL, 0x097D877BL, 0x61E23CEBL)).sf, 0L, 0x0AB06645L, l_551, 1L, 0L, 0x1147B721L, (-1L)))))).s4567501320547515, (int32_t)(*p_834->g_553)))).hi))).even)).zwzzzyxyxzzwwzxw, (int32_t)l_556))).lo, ((VECTOR(int32_t, 8))((-10L)))))).s3) <= p_834->g_204) != p_834->g_256)), GROUP_DIVERGE(0, 1))) > GROUP_DIVERGE(2, 1))) | l_556)))
                { /* block id: 200 */
                    int32_t *l_569 = &p_834->g_527[1][4][0];
                    int32_t *l_570[6] = {&l_568,&l_568,&l_568,&l_568,&l_568,&l_568};
                    uint16_t l_577 = 0xE227L;
                    struct S2 *l_581[9][8][3] = {{{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168}},{{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168}},{{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168}},{{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168}},{{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168}},{{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168}},{{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168}},{{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168}},{{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168},{&p_834->g_168,&p_834->g_168,&p_834->g_168}}};
                    int i, j, k;
                    l_577--;
                    (*p_834->g_483) = l_580;
                }
                else
                { /* block id: 203 */
                    if ((safe_rshift_func_uint16_t_u_u(l_572[0][3], ((VECTOR(uint16_t, 2))(1UL, 65531UL)).odd)))
                    { /* block id: 204 */
                        VECTOR(int32_t, 4) l_584 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 4L), 4L);
                        int i;
                        (*l_539) = (*p_834->g_278);
                        (*l_202) |= (l_568 , ((VECTOR(int32_t, 8))(l_584.xzwwxxyy)).s3);
                    }
                    else
                    { /* block id: 207 */
                        struct S0 *l_589 = &p_834->g_590;
                        (*p_834->g_585) = (*p_834->g_7);
                        (*l_202) |= 0x7D92F84AL;
                        (*l_589) = ((safe_add_func_int32_t_s_s((((*l_389) = l_588) != (*p_834->g_63)), p_834->g_288)) , (**l_539));
                    }
                }
                l_592 = l_591;
            }
            for (p_834->g_401.f0 = 0; (p_834->g_401.f0 > 51); p_834->g_401.f0 = safe_add_func_uint32_t_u_u(p_834->g_401.f0, 1))
            { /* block id: 218 */
                int32_t l_601 = 0x527D1B4BL;
                int64_t *l_606 = &p_834->g_214;
                uint8_t l_608 = 0x96L;
                uint32_t *l_639[3];
                struct S1 **l_646 = (void*)0;
                struct S1 ***l_645[7][4] = {{&l_646,&l_646,&l_646,&l_646},{&l_646,&l_646,&l_646,&l_646},{&l_646,&l_646,&l_646,&l_646},{&l_646,&l_646,&l_646,&l_646},{&l_646,&l_646,&l_646,&l_646},{&l_646,&l_646,&l_646,&l_646},{&l_646,&l_646,&l_646,&l_646}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_639[i] = &l_356;
                if ((((safe_mod_func_int8_t_s_s((!(l_576 &= (safe_mul_func_uint16_t_u_u((((*l_202) || (safe_mod_func_uint64_t_u_u((p_834->g_440.f2 < (0x22L != ((((-3L) < l_601) <= ((safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s(((~p_834->g_168.f3) , ((*l_606) = (&p_834->g_286 == (void*)0))), p_834->g_552)), p_834->g_296.y)) || l_601)) & p_834->g_607))), p_834->g_345.s6))) < p_834->g_562.sa), 6UL)))), l_608)) || 0x8D49DA34L) || (-1L)))
                { /* block id: 221 */
                    int32_t *l_609[3][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t l_613[8] = {0x204E43E6L,0x204E43E6L,0x204E43E6L,0x204E43E6L,0x204E43E6L,0x204E43E6L,0x204E43E6L,0x204E43E6L};
                    int i, j;
                    ++p_834->g_610;
                    if ((*p_834->g_553))
                    { /* block id: 223 */
                        return l_580.f1;
                    }
                    else
                    { /* block id: 225 */
                        uint64_t l_615 = 0UL;
                        uint8_t **l_618 = (void*)0;
                        if (l_613[5])
                            break;
                        l_572[4][0] &= ((((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_834->g_614.sa883)), (l_615 || (1L <= p_834->g_129.y)), 0x78L, (-3L), (safe_sub_func_uint32_t_u_u(((p_834->g_214 = (0x0DL & GROUP_DIVERGE(1, 1))) >= (~(p_834->g_526 == l_580.f1))), (((*p_834->g_279) , (((void*)0 == l_618) , l_619)) == &p_834->g_90))), 0x36L, p_834->g_355.w, p_834->g_386.s2, ((VECTOR(int8_t, 4))((-1L))), (-1L))).s52, ((VECTOR(int8_t, 2))((-1L)))))).xxxyxxxy, ((VECTOR(int8_t, 8))(0x6BL))))).s7 ^ p_834->g_40) , l_615);
                        if ((*p_834->g_553))
                            break;
                        (*p_834->g_620) = (*p_834->g_60);
                    }
                }
                else
                { /* block id: 232 */
                    int32_t *l_621 = &p_834->g_527[0][2][5];
                    int32_t *l_622 = (void*)0;
                    int32_t *l_623 = &l_572[0][3];
                    int32_t *l_624 = &l_572[1][5];
                    int32_t *l_625 = &l_490;
                    int32_t *l_626 = &l_601;
                    int32_t *l_627 = (void*)0;
                    int32_t *l_628 = &p_834->g_6;
                    int32_t *l_629[4][6] = {{&p_834->g_462,&p_834->g_462,&p_834->g_462,&p_834->g_462,&p_834->g_462,&p_834->g_462},{&p_834->g_462,&p_834->g_462,&p_834->g_462,&p_834->g_462,&p_834->g_462,&p_834->g_462},{&p_834->g_462,&p_834->g_462,&p_834->g_462,&p_834->g_462,&p_834->g_462,&p_834->g_462},{&p_834->g_462,&p_834->g_462,&p_834->g_462,&p_834->g_462,&p_834->g_462,&p_834->g_462}};
                    int i, j;
                    ++l_632;
                    if (l_608)
                        break;
                    (*p_834->g_636) = (*p_834->g_197);
                }
                (*l_202) = (0xBAAF1E1FL == (((((--p_834->g_236.y) ^ 0xAD1CD8D6L) , l_632) > (l_642[3][3][1] != ((((safe_lshift_func_uint8_t_u_u((((&l_536[0][0][0] != (l_647[2] = &p_834->g_403[3][2][7])) , ((p_834->g_648 = &p_834->g_403[2][5][5]) != &p_834->g_403[2][5][5])) , (safe_add_func_int32_t_s_s(((l_631 | (*l_202)) || (**p_834->g_63)), 0xCE7146AEL))), 1)) <= p_834->g_249.s2) , l_580.f4) , (void*)0))) != (*l_202)));
                (*p_834->g_648) = l_536[0][0][0];
            }
        }
        else
        { /* block id: 243 */
            int16_t l_677 = 0x5523L;
            int32_t *l_684 = (void*)0;
            int32_t *l_685[2][2][5] = {{{(void*)0,&l_490,(void*)0,(void*)0,&l_490},{(void*)0,&l_490,(void*)0,(void*)0,&l_490}},{{(void*)0,&l_490,(void*)0,(void*)0,&l_490},{(void*)0,&l_490,(void*)0,(void*)0,&l_490}}};
            int i, j, k;
            (*p_834->g_279) = (*p_834->g_279);
            (*l_202) = ((-5L) && (*p_834->g_553));
            (*l_202) = (safe_unary_minus_func_uint16_t_u((((safe_lshift_func_uint16_t_u_u(((!(safe_sub_func_uint64_t_u_u(((safe_div_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(((void*)0 == &l_542), 15)) || (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 2))(6UL, 255UL)).yxxyyxyxyyyxxyyy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_662.s1152642507543151)).saf)).xxxxxxxxyyyxxxyy))).s2, 0x44L))) == (!(safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((p_834->g_667 , (l_632 & (safe_unary_minus_func_uint32_t_u((safe_div_func_uint64_t_u_u((((l_573 ^= (safe_sub_func_uint8_t_u_u(((p_834->g_562.s9 &= (safe_mul_func_int16_t_s_s((+(safe_div_func_int16_t_s_s((l_677 = (*l_202)), l_571))), ((p_834->g_484[1].f3 , (safe_add_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(p_834->g_386.s6, (**p_834->g_286))), (*l_202))) < p_834->g_526), (*l_202)))) || (*p_834->g_203))))) >= p_834->g_607), 9UL))) <= (-3L)) > l_572[0][3]), (*l_202))))))) && p_834->g_484[1].f3), 13)), (*l_202))))), p_834->g_214)) < (*l_202)), GROUP_DIVERGE(0, 1)))) < 0x75B65B876E36BD59L), (*l_202))) , (*p_834->g_203)) >= FAKE_DIVERGE(p_834->group_2_offset, get_group_id(2), 10))));
        }
        (*l_688) |= (*l_202);
        if (((*l_202) = (*l_202)))
        { /* block id: 253 */
            int32_t *l_689[2];
            int i;
            for (i = 0; i < 2; i++)
                l_689[i] = &l_573;
            l_695++;
            --p_834->g_698[0];
        }
        else
        { /* block id: 256 */
            int32_t *l_703 = &p_834->g_527[0][0][3];
            int32_t l_707 = (-2L);
            int32_t l_708 = 0x429B38B0L;
            int32_t l_709 = (-1L);
            int32_t l_710[2];
            int64_t l_715 = (-7L);
            int8_t *l_721 = (void*)0;
            struct S1 l_734 = {0x3BBF2E91L};
            struct S2 l_744 = {0xD5E54E06FEE02869L,0xE4D0L,0x56473A7D2EA259A5L,0UL,0UL,0x7390049A86509960L};
            VECTOR(int16_t, 4) l_750 = (VECTOR(int16_t, 4))(0x58EFL, (VECTOR(int16_t, 2))(0x58EFL, 0x6059L), 0x6059L);
            int16_t ***l_756 = &l_497[0];
            VECTOR(int32_t, 8) l_763 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 1L), 1L), 1L, (-5L), 1L);
            VECTOR(int64_t, 4) l_777 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L);
            uint32_t l_830 = 0x363DEF4EL;
            int32_t l_833 = 0x201F204CL;
            int i;
            for (i = 0; i < 2; i++)
                l_710[i] = (-6L);
            for (l_411 = 0; (l_411 < 38); ++l_411)
            { /* block id: 259 */
                return p_834->g_362.f3;
            }
            if ((l_703 == (void*)0))
            { /* block id: 262 */
                int32_t *l_704 = &l_572[0][3];
                int32_t l_705 = 0x0F9D8719L;
                int32_t *l_706[1][5];
                uint64_t l_711 = 0x3878ECA9908F5CA3L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_706[i][j] = &p_834->g_6;
                }
                (*p_834->g_620) = (*p_834->g_60);
                l_711--;
            }
            else
            { /* block id: 265 */
                int32_t *l_714[7] = {&l_691,&l_691,&l_691,&l_691,&l_691,&l_691,&l_691};
                int8_t *l_720 = &p_834->g_507[0];
                int8_t **l_719 = &l_720;
                int8_t **l_722 = &l_721;
                int i;
                l_716--;
                (*l_703) &= (((*l_719) = (void*)0) != (p_834->g_723 = ((*l_722) = l_721)));
            }
            for (l_695 = 0; (l_695 <= 30); l_695++)
            { /* block id: 274 */
                int16_t l_731 = (-2L);
                int32_t l_739 = 7L;
                int64_t *l_741 = &p_834->g_214;
                uint32_t *l_743 = &p_834->g_401.f0;
                uint64_t l_749 = 0x9B78E4BAC507FF90L;
                VECTOR(int32_t, 8) l_769 = (VECTOR(int32_t, 8))(0x62982875L, (VECTOR(int32_t, 4))(0x62982875L, (VECTOR(int32_t, 2))(0x62982875L, 0x5B175C19L), 0x5B175C19L), 0x5B175C19L, 0x62982875L, 0x5B175C19L);
                VECTOR(int8_t, 4) l_821 = (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, 0x68L), 0x68L);
                int32_t *l_825 = &p_834->g_102[0][3];
                int32_t *l_826 = &l_573;
                int32_t *l_827 = &l_691;
                int32_t *l_828[1];
                int32_t l_829 = (-1L);
                int i;
                for (i = 0; i < 1; i++)
                    l_828[i] = &l_709;
                atomic_or(&p_834->g_atomic_reduction[get_linear_group_id()], (safe_add_func_uint8_t_u_u(((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 16))(l_728.yzyzzwwyzxzwxzxy)).s861e, ((VECTOR(uint64_t, 8))(0xB567C114F376A65AL, (((VECTOR(uint16_t, 4))(5UL, 65532UL, 0x1D05L, 0xEB4CL)).y ^ (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(0xA57D22E5L, ((*l_743) = ((((safe_div_func_uint8_t_u_u((l_731 && l_731), (*l_688))) && ((*l_741) = ((((*p_834->g_203) & ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_732.s5371705670444621)).lo)).s4) != ((VECTOR(uint8_t, 8))(p_834->g_733.xxwxwxzy)).s0) & (l_734 , ((*l_703) |= (safe_rshift_func_int16_t_s_u(((safe_mod_func_uint64_t_u_u(((*p_834->g_203) , (*l_202)), ((l_734 , (l_731 ^ l_739)) || (*l_202)))) , l_740), p_834->g_168.f3))))))) & (*l_202)) ^ l_742[2])), ((VECTOR(uint32_t, 4))(2UL)), 0x884469CBL, 0x3DFFBB47L)).s5133075167701507)))))).s6 < 0x52358B6BL)), 0x45D933FD430F44CEL, p_834->g_65, 0x662E20941DAE498DL, (*l_703), 8UL, 18446744073709551615UL)).even))), l_731, 0x6492DC1D8A6352B8L, 18446744073709551615UL, p_834->g_332, p_834->g_440.f1, ((VECTOR(uint64_t, 4))(0xDA171494C9B878DBL)), ((VECTOR(uint64_t, 2))(0x24E41AE07ECA7701L)), 0xA41246754233E4C2L)).s6 > 0x3D5068EC9CCFBB4CL) | l_731), l_710[0])));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_834->v_collective += p_834->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                (*l_202) &= ((l_744 , 0L) , (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((((**l_539) , l_749) >= ((*p_834->g_203) = (l_749 < (((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))((-1L), (-8L))).xxyx, ((VECTOR(int64_t, 8))(((*l_741) = 0x43ADEEE2A621AC2DL), ((((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(8L, ((VECTOR(int16_t, 2))(l_750.yw)), (safe_lshift_func_int8_t_s_s((-5L), (4L > (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_834->g_755.sc6bc)).wyzyyzyw)).s2, ((l_756 != l_757[3]) ^ 0xA546E7C72D1D468EL)))))), ((VECTOR(int16_t, 8))(0L)), 0x08BDL, ((VECTOR(int16_t, 2))(4L)), (-1L))).s5e)).yxyxyyyyyyxyyxxx)).even, ((VECTOR(int16_t, 8))((-1L))), ((VECTOR(int16_t, 8))(0L))))).even)))), ((VECTOR(int16_t, 4))(1L)))), ((VECTOR(int16_t, 8))(3L)), ((VECTOR(int16_t, 8))(0L))))).odd)).lo, ((VECTOR(int16_t, 2))(2L)), ((VECTOR(int16_t, 2))((-1L)))))).xxyxyxxyyyxxyyyx)).s4d36, ((VECTOR(int16_t, 4))(0x651EL)), ((VECTOR(int16_t, 4))((-4L)))))).odd, ((VECTOR(int16_t, 2))(0x49DAL))))).hi || 0x6961L) || (-2L)), 0x26CC0E764537965EL, 0x5AF6748DD982B36EL, 0x4AEC3ABF662F86A0L, p_834->g_249.s1, (-8L), (-1L))).lo, ((VECTOR(int64_t, 4))(5L))))).z >= 4UL)))), (*l_703))), (*l_703))));
                for (p_834->g_607 = 27; (p_834->g_607 != (-30)); p_834->g_607--)
                { /* block id: 284 */
                    int64_t l_784 = 0L;
                    VECTOR(int32_t, 4) l_792 = (VECTOR(int32_t, 4))(0x0968E1E6L, (VECTOR(int32_t, 2))(0x0968E1E6L, (-1L)), (-1L));
                    int32_t l_802 = (-1L);
                    int i;
                    for (p_834->g_204 = 0; (p_834->g_204 >= 5); ++p_834->g_204)
                    { /* block id: 287 */
                        struct S2 l_765[5] = {{0x7845D837A2FC5533L,0xCF42L,0L,0UL,4294967289UL,9L},{0x7845D837A2FC5533L,0xCF42L,0L,0UL,4294967289UL,9L},{0x7845D837A2FC5533L,0xCF42L,0L,0UL,4294967289UL,9L},{0x7845D837A2FC5533L,0xCF42L,0L,0UL,4294967289UL,9L},{0x7845D837A2FC5533L,0xCF42L,0L,0UL,4294967289UL,9L}};
                        int8_t *l_785 = (void*)0;
                        int8_t *l_786 = &p_834->g_507[2];
                        int32_t l_787[2][7][8] = {{{0x2BF2AE9EL,0x502FCD9DL,0x502FCD9DL,0x2BF2AE9EL,0x1F222108L,(-5L),1L,0x530FEE69L},{0x2BF2AE9EL,0x502FCD9DL,0x502FCD9DL,0x2BF2AE9EL,0x1F222108L,(-5L),1L,0x530FEE69L},{0x2BF2AE9EL,0x502FCD9DL,0x502FCD9DL,0x2BF2AE9EL,0x1F222108L,(-5L),1L,0x530FEE69L},{0x2BF2AE9EL,0x502FCD9DL,0x502FCD9DL,0x2BF2AE9EL,0x1F222108L,(-5L),1L,0x530FEE69L},{0x2BF2AE9EL,0x502FCD9DL,0x502FCD9DL,0x2BF2AE9EL,0x1F222108L,(-5L),1L,0x530FEE69L},{0x2BF2AE9EL,0x502FCD9DL,0x502FCD9DL,0x2BF2AE9EL,0x1F222108L,(-5L),1L,0x530FEE69L},{0x2BF2AE9EL,0x502FCD9DL,0x502FCD9DL,0x2BF2AE9EL,0x1F222108L,(-5L),1L,0x530FEE69L}},{{0x2BF2AE9EL,0x502FCD9DL,0x502FCD9DL,0x2BF2AE9EL,0x1F222108L,(-5L),1L,0x530FEE69L},{0x2BF2AE9EL,0x502FCD9DL,0x502FCD9DL,0x2BF2AE9EL,0x1F222108L,(-5L),1L,0x530FEE69L},{0x2BF2AE9EL,0x502FCD9DL,0x502FCD9DL,0x2BF2AE9EL,0x1F222108L,(-5L),1L,0x530FEE69L},{0x2BF2AE9EL,0x502FCD9DL,0x502FCD9DL,0x2BF2AE9EL,0x1F222108L,(-5L),1L,0x530FEE69L},{0x2BF2AE9EL,0x502FCD9DL,0x502FCD9DL,0x2BF2AE9EL,0x1F222108L,(-5L),1L,0x530FEE69L},{0x2BF2AE9EL,0x502FCD9DL,0x502FCD9DL,0x2BF2AE9EL,0x1F222108L,(-5L),1L,0x530FEE69L},{0x2BF2AE9EL,0x502FCD9DL,0x502FCD9DL,0x2BF2AE9EL,0x1F222108L,(-5L),1L,0x530FEE69L}}};
                        VECTOR(int32_t, 2) l_797 = (VECTOR(int32_t, 2))(1L, (-9L));
                        uint32_t *l_814 = &p_834->g_256;
                        uint32_t *l_815 = &p_834->g_816;
                        int i, j, k;
                        (*p_834->g_762) = (*p_834->g_636);
                        (*l_202) |= ((VECTOR(int32_t, 16))(3L, 0x50B2AA41L, ((VECTOR(int32_t, 2))(l_763.s50)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_764.s26117074)).s53)), (l_765[0] , ((VECTOR(int32_t, 4))(((*l_688) == (((VECTOR(uint64_t, 4))(p_834->g_766.see5f)).z != FAKE_DIVERGE(p_834->group_0_offset, get_group_id(0), 10))), (((VECTOR(int64_t, 2))(p_834->g_767.s93)).hi , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_768.xwzxwyyz)).s0455730626536047)).s06ad)).zywyxxzwzzxzwzwy, ((VECTOR(int32_t, 2))(1L, 0x58A84337L)).yyyyxyxyyyxyyxyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_769.s54)).yyxyxyxxyyyxyyxy))))).s94)))), ((VECTOR(int32_t, 4))(0x5A2ACDD2L, 0x0C3C6718L, 0x60A747DFL, 9L)).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(l_770.s35)).xxxy))))).even))), 1L, 1L)).z), 0x05DBE80AL, 0x0424D114L)).x), 1L, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(p_834->g_771.xyxx)).zzzxxwxx, ((VECTOR(int32_t, 8))((*p_834->g_553), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_772.xyyx)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))((safe_div_func_uint16_t_u_u((((VECTOR(int64_t, 4))(l_777.wyzw)).w ^ ((*l_688) != (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((void*)0 == l_782), 2)), (((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(p_834->g_783.s4edc)).zxyyywyxxxwzwywy, (int8_t)((*l_786) &= l_784)))).s6 <= (~l_787[0][5][2])))))), (safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u((l_765[0].f5 == (*l_703)), 7)) , (void*)0) == (void*)0), 0x1E68L)))), ((VECTOR(int32_t, 2))((-9L))), 0x07C88308L)).lo, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(1L))))).lo, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 8))(8L)), ((VECTOR(int32_t, 2))((-9L))), ((VECTOR(int32_t, 2))(0x09E70651L)), 1L)).s1269, ((VECTOR(int32_t, 4))((-3L)))))).ywzxwxyzyxyyxwzz)).s77, ((VECTOR(int32_t, 2))(0x50FEA74DL))))), 0x50FDC752L, 6L, ((VECTOR(int32_t, 2))(1L)), 0L))))))).s1;
                        (*l_688) = (((VECTOR(int32_t, 16))(0x579681F6L, (-10L), 0x31D3A62FL, 0x6E778FFBL, 6L, ((VECTOR(int32_t, 8))(l_792.xzwwyyyy)), (((safe_mod_func_int8_t_s_s(((GROUP_DIVERGE(2, 1) > (0x6BD41DD8E70812E0L > 3UL)) , (*l_688)), ((**p_834->g_63)++))) >= (p_834->g_766.s4 < ((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_797.xxxx)).even)).xxyyxyyx)).s0705232257104722, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(1UL, 0x8013BD20L)), 2UL, 0x0907FBA8L)))).zzywwyyxxwyzzxwx))).s4)) ^ (l_769.s2 = p_834->g_667.f1)), 0x587D9BCCL, 8L)).s0 >= ((((((*l_815) = ((*l_814) = (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(((l_802 = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((((*l_743)++) <= (safe_div_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(l_809, (safe_mod_func_uint8_t_u_u(l_731, ((l_739 <= ((safe_rshift_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), 5)) , p_834->g_214)) ^ l_765[0].f0))))), l_739))) != l_765[0].f0), 0x9EC7A19FL, 0x2F6E8A9AL, 0x25E59321L)), 0x53D3734BL, 0x0A000D29L, 0xB9AD223AL, 0x41C7B020L)).s62)).even == 0x67497F15L)) < 0x8F0AL), p_834->g_667.f3)), l_792.y)) != p_834->g_6) || p_834->g_71.sc))) , p_834->g_111.f3) == (*l_703)) & 0x4CB61F865F694617L) || (*l_688)));
                    }
                    (*p_834->g_823) = ((*p_834->g_648) = ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((!1L) <= ((VECTOR(int8_t, 16))(l_821.wyxyzzzxxxxyzyzx)).sf), ((VECTOR(int8_t, 2))(p_834->g_822.yy)).odd)), 4)) , l_400));
                }
                ++l_830;
            }
            return l_833;
        }
    }
    return (*l_202);
}


/* ------------------------------------------ */
/* 
 * reads : p_834->g_6
 * writes: p_834->g_6
 */
int32_t * func_2(uint64_t  p_3, struct S3 * p_834)
{ /* block id: 5 */
    int32_t *l_5[3][8] = {{&p_834->g_6,&p_834->g_6,&p_834->g_6,&p_834->g_6,&p_834->g_6,&p_834->g_6,&p_834->g_6,&p_834->g_6},{&p_834->g_6,&p_834->g_6,&p_834->g_6,&p_834->g_6,&p_834->g_6,&p_834->g_6,&p_834->g_6,&p_834->g_6},{&p_834->g_6,&p_834->g_6,&p_834->g_6,&p_834->g_6,&p_834->g_6,&p_834->g_6,&p_834->g_6,&p_834->g_6}};
    int i, j;
    p_834->g_6 |= 5L;
    return l_5[1][5];
}


/* ------------------------------------------ */
/* 
 * reads : p_834->g_102 p_834->g_278
 * writes: p_834->g_102
 */
int32_t  func_9(int32_t * p_10, uint8_t  p_11, int32_t * p_12, int64_t  p_13, uint16_t  p_14, struct S3 * p_834)
{ /* block id: 100 */
    int32_t *l_267 = (void*)0;
    int32_t *l_268 = (void*)0;
    int32_t *l_269 = &p_834->g_102[0][3];
    int32_t *l_270 = &p_834->g_102[1][3];
    int32_t *l_271 = (void*)0;
    int32_t *l_272 = (void*)0;
    int32_t *l_273[2];
    int16_t l_274[9] = {4L,4L,4L,4L,4L,4L,4L,4L,4L};
    uint8_t l_275 = 0x52L;
    struct S0 **l_280 = (void*)0;
    struct S0 **l_281 = &p_834->g_279;
    int i;
    for (i = 0; i < 2; i++)
        l_273[i] = &p_834->g_102[0][3];
    ++l_275;
    (*l_269) = ((*l_270) , ((*l_269) ^ (((l_281 = (l_280 = p_834->g_278)) != &p_834->g_103[2]) == 0x3390526FL)));
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_834->g_104.f0 p_834->g_63 p_834->g_65 p_834->g_102 p_834->g_169 p_834->g_168 p_834->g_224 p_834->g_236 p_834->g_239 p_834->g_240 p_834->g_245 p_834->g_249 p_834->g_251 p_834->g_71 p_834->g_203 p_834->g_204 p_834->g_111.f1 p_834->g_8
 * writes: p_834->g_64 p_834->g_102 p_834->g_8 p_834->g_256 p_834->g_65 p_834->g_168.f1 p_834->g_111.f1
 */
int32_t * func_20(int32_t  p_21, int64_t  p_22, struct S3 * p_834)
{ /* block id: 78 */
    uint8_t *l_218 = &p_834->g_65;
    int32_t **l_219 = &p_834->g_8;
    VECTOR(uint32_t, 16) l_226 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 3UL), 3UL), 3UL, 0UL, 3UL, (VECTOR(uint32_t, 2))(0UL, 3UL), (VECTOR(uint32_t, 2))(0UL, 3UL), 0UL, 3UL, 0UL, 3UL);
    VECTOR(uint32_t, 4) l_227 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL);
    VECTOR(uint32_t, 2) l_235 = (VECTOR(uint32_t, 2))(1UL, 0UL);
    VECTOR(uint32_t, 8) l_237 = (VECTOR(uint32_t, 8))(0x25F55CE2L, (VECTOR(uint32_t, 4))(0x25F55CE2L, (VECTOR(uint32_t, 2))(0x25F55CE2L, 0xB8AF9111L), 0xB8AF9111L), 0xB8AF9111L, 0x25F55CE2L, 0xB8AF9111L);
    VECTOR(uint32_t, 16) l_238 = (VECTOR(uint32_t, 16))(0x06D479AFL, (VECTOR(uint32_t, 4))(0x06D479AFL, (VECTOR(uint32_t, 2))(0x06D479AFL, 0x36CF51DFL), 0x36CF51DFL), 0x36CF51DFL, 0x06D479AFL, 0x36CF51DFL, (VECTOR(uint32_t, 2))(0x06D479AFL, 0x36CF51DFL), (VECTOR(uint32_t, 2))(0x06D479AFL, 0x36CF51DFL), 0x06D479AFL, 0x36CF51DFL, 0x06D479AFL, 0x36CF51DFL);
    int i;
    (*l_219) = func_35(p_22, (safe_div_func_uint16_t_u_u(p_21, p_834->g_104.f0)), ((*p_834->g_63) = l_218), p_21, p_834);
    for (p_21 = 0; (p_21 < 2); p_21 = safe_add_func_int64_t_s_s(p_21, 7))
    { /* block id: 83 */
        VECTOR(uint32_t, 4) l_225 = (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 4294967295UL), 4294967295UL);
        int8_t l_232 = (-1L);
        int16_t l_233[6];
        VECTOR(uint32_t, 4) l_234 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL);
        VECTOR(uint32_t, 16) l_241 = (VECTOR(uint32_t, 16))(0x01A24F1AL, (VECTOR(uint32_t, 4))(0x01A24F1AL, (VECTOR(uint32_t, 2))(0x01A24F1AL, 0xA7DDDAB3L), 0xA7DDDAB3L), 0xA7DDDAB3L, 0x01A24F1AL, 0xA7DDDAB3L, (VECTOR(uint32_t, 2))(0x01A24F1AL, 0xA7DDDAB3L), (VECTOR(uint32_t, 2))(0x01A24F1AL, 0xA7DDDAB3L), 0x01A24F1AL, 0xA7DDDAB3L, 0x01A24F1AL, 0xA7DDDAB3L);
        VECTOR(uint32_t, 2) l_242 = (VECTOR(uint32_t, 2))(0xAE05FD4DL, 0x6DFACB86L);
        VECTOR(int8_t, 8) l_246 = (VECTOR(int8_t, 8))(0x12L, (VECTOR(int8_t, 4))(0x12L, (VECTOR(int8_t, 2))(0x12L, 0x7AL), 0x7AL), 0x7AL, 0x12L, 0x7AL);
        VECTOR(int32_t, 4) l_250 = (VECTOR(int32_t, 4))(0x7DDE1CF8L, (VECTOR(int32_t, 2))(0x7DDE1CF8L, (-6L)), (-6L));
        VECTOR(int32_t, 4) l_252 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x71B4D7C6L), 0x71B4D7C6L);
        VECTOR(int32_t, 8) l_253 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x66D3141FL), 0x66D3141FL), 0x66D3141FL, 0L, 0x66D3141FL);
        VECTOR(int32_t, 2) l_254 = (VECTOR(int32_t, 2))(0x6088103EL, (-7L));
        uint32_t *l_255[9] = {&p_834->g_256,&p_834->g_256,&p_834->g_256,&p_834->g_256,&p_834->g_256,&p_834->g_256,&p_834->g_256,&p_834->g_256,&p_834->g_256};
        int8_t *l_259 = (void*)0;
        int8_t *l_260 = (void*)0;
        int32_t l_261 = (-2L);
        int i;
        for (i = 0; i < 6; i++)
            l_233[i] = 0x1814L;
        l_261 |= ((l_250.x = ((*p_834->g_169) , ((safe_div_func_uint16_t_u_u((((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_834->g_224.s26)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_225.wyyxywyy)).s35)).xyyxyyxx, ((VECTOR(uint32_t, 2))(1UL, 0x9750C58BL)).xyxyyyyy))))), ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(l_226.s50c7d696)).s51))), FAKE_DIVERGE(p_834->group_2_offset, get_group_id(2), 10), ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 8))(0x727ED881L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_227.xzzxwyxywzywwyyw)).s9c)), (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((l_233[1] = l_232), 0)), 2)), 0x9EFD839DL, 0x93E75EC8L, 0UL, 4294967291UL)).s04))).yxyy, ((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_234.xyyyyxyx)).even)), ((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 16))(l_235.xxyyyyxxxxyxyyyy)), ((VECTOR(uint32_t, 8))(p_834->g_236.xxyxyyyx)).s1212452730572517))), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_237.s27226257)))).s6737661506766750))).sfb, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_238.s5792acdf8459a672)))).sbc))).xxyx))), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x86FD2871L, 1UL)).yxyxxxyyxyxxyyyx)).s46)).yxxx))), ((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 8))(p_834->g_239.s60107753)).s66, ((VECTOR(uint32_t, 2))(p_834->g_240.wx)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(1UL, 0xCB2DD231L)), 0x82641B5CL, 0x74341456L)).even))))).xyyx, ((VECTOR(uint32_t, 2))(4294967287UL, 1UL)).yxxy, ((VECTOR(uint32_t, 16))(l_241.s7f3c10d4e44b14b8)).s8daa))))).s11, ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_242.yyxx)).odd)).yyxy, (uint32_t)(safe_mul_func_int8_t_s_s((p_834->g_245 , ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_246.s7237007722043103)).s34)).yyxyxyxxyyxxyyxy)).s6), ((safe_add_func_int8_t_s_s((FAKE_DIVERGE(p_834->global_2_offset, get_global_id(2), 10) >= (((VECTOR(int32_t, 4))(0x4021CE86L, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x360DEC5EL, 3L)))).yxyyxyyyyyyxxyyy)).s23dc, ((VECTOR(int32_t, 8))(p_834->g_249.sd58d9047)).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(3L, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_250.wxzywxyxyxyxzzxw)), ((VECTOR(int32_t, 8))(p_834->g_251.sa4f48892)).s6762464555612563, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_252.xyyxzzyw)).s45)).yxxyxxxyxxyyxxyy, ((VECTOR(int32_t, 4))(l_253.s7140)).xxzxyzzzwxywxxyw, ((VECTOR(int32_t, 4))(l_254.xyyx)).yyywywzwwxxwwxzw))).sce)).yxxx, (int32_t)p_22))).xwxwwwzyyyyxyzww))).s6d33, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((p_834->g_256 = 0UL) , (p_22 & (safe_mod_func_uint8_t_u_u(((*l_218) = (l_255[5] != (void*)0)), p_834->g_168.f2)))), ((VECTOR(int32_t, 2))(0x7B030CD4L)), (-1L), ((VECTOR(int32_t, 4))(0x53DC8424L)))), ((VECTOR(int32_t, 8))(0x61E47A67L)), ((VECTOR(int32_t, 8))(0x0286035EL))))).hi))), l_241.s6, 0L, 0x1EC4DC05L)))).odd))), (-7L), ((VECTOR(int32_t, 2))(0x287DC643L)), 0x07CC0005L)).hi, (int32_t)0L))), l_234.z, 0L, 1L, (-2L))).s43, ((VECTOR(int32_t, 2))((-3L)))))), (-1L))).x || l_253.s2)), l_233[5])) , p_22)))))).hi))), 0x27AA73DDL)).seb))).even != p_834->g_71.se), l_241.s3)) < (*p_834->g_203)))) , p_22);
    }
    for (p_834->g_168.f1 = 0; (p_834->g_168.f1 < 38); p_834->g_168.f1 = safe_add_func_int8_t_s_s(p_834->g_168.f1, 7))
    { /* block id: 92 */
        for (p_834->g_111.f1 = 13; (p_834->g_111.f1 < 8); p_834->g_111.f1 = safe_sub_func_uint8_t_u_u(p_834->g_111.f1, 1))
        { /* block id: 95 */
            return (*l_219);
        }
    }
    return (*l_219);
}


/* ------------------------------------------ */
/* 
 * reads : p_834->g_203 p_834->g_111.f4 p_834->g_8 p_834->g_104.f2 p_834->g_65 p_834->g_102 p_834->g_60
 * writes: p_834->g_203 p_834->g_102 p_834->g_8
 */
int32_t * func_23(int32_t ** p_24, int32_t ** p_25, int32_t * p_26, uint32_t  p_27, struct S3 * p_834)
{ /* block id: 71 */
    int16_t **l_205[6][1][4] = {{{(void*)0,&p_834->g_203,&p_834->g_203,(void*)0}},{{(void*)0,&p_834->g_203,&p_834->g_203,(void*)0}},{{(void*)0,&p_834->g_203,&p_834->g_203,(void*)0}},{{(void*)0,&p_834->g_203,&p_834->g_203,(void*)0}},{{(void*)0,&p_834->g_203,&p_834->g_203,(void*)0}},{{(void*)0,&p_834->g_203,&p_834->g_203,(void*)0}}};
    VECTOR(int32_t, 2) l_207 = (VECTOR(int32_t, 2))(1L, (-1L));
    int32_t l_208 = 0x15AADE92L;
    int8_t l_211 = 0L;
    uint8_t *l_212 = &p_834->g_65;
    int i, j, k;
    (*p_834->g_60) = func_35((((p_834->g_203 = p_834->g_203) != &p_834->g_204) > ((((safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_207.xxyyxxyxyyxxyxyx)).odd)).s2)) <= ((l_208 = (((FAKE_DIVERGE(p_834->local_0_offset, get_local_id(0), 10) <= p_834->g_111.f4) , l_207.y) && ((void*)0 != (*p_25)))) , p_27)) <= ((safe_lshift_func_int8_t_s_u(((+(0xF4L != 0x36L)) | (-8L)), p_27)) <= 0x5AB06385L)) , p_834->g_104.f2)), l_211, l_212, p_27, p_834);
    return (*p_25);
}


/* ------------------------------------------ */
/* 
 * reads : p_834->g_168 p_834->g_169 p_834->g_60 p_834->g_8 p_834->g_170 p_834->g_104.f3 p_834->g_144 p_834->g_102 p_834->g_104.f2 p_834->g_197 p_834->g_129 p_834->g_111.f1
 * writes: p_834->g_168 p_834->g_8
 */
int32_t ** func_28(int64_t  p_29, int64_t  p_30, int32_t * p_31, int32_t  p_32, uint32_t  p_33, struct S3 * p_834)
{ /* block id: 62 */
    VECTOR(uint32_t, 16) l_171 = (VECTOR(uint32_t, 16))(0x9FB775C3L, (VECTOR(uint32_t, 4))(0x9FB775C3L, (VECTOR(uint32_t, 2))(0x9FB775C3L, 5UL), 5UL), 5UL, 0x9FB775C3L, 5UL, (VECTOR(uint32_t, 2))(0x9FB775C3L, 5UL), (VECTOR(uint32_t, 2))(0x9FB775C3L, 5UL), 0x9FB775C3L, 5UL, 0x9FB775C3L, 5UL);
    VECTOR(uint32_t, 16) l_172 = (VECTOR(uint32_t, 16))(0xEE263D41L, (VECTOR(uint32_t, 4))(0xEE263D41L, (VECTOR(uint32_t, 2))(0xEE263D41L, 0xB1A0FE73L), 0xB1A0FE73L), 0xB1A0FE73L, 0xEE263D41L, 0xB1A0FE73L, (VECTOR(uint32_t, 2))(0xEE263D41L, 0xB1A0FE73L), (VECTOR(uint32_t, 2))(0xEE263D41L, 0xB1A0FE73L), 0xEE263D41L, 0xB1A0FE73L, 0xEE263D41L, 0xB1A0FE73L);
    VECTOR(int32_t, 4) l_173 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x30287E10L), 0x30287E10L);
    int32_t l_190 = 0x11B730C7L;
    int64_t *l_191 = (void*)0;
    int64_t *l_192[2][8] = {{&p_834->g_168.f5,&p_834->g_168.f5,&p_834->g_168.f5,&p_834->g_168.f5,&p_834->g_168.f5,&p_834->g_168.f5,&p_834->g_168.f5,&p_834->g_168.f5},{&p_834->g_168.f5,&p_834->g_168.f5,&p_834->g_168.f5,&p_834->g_168.f5,&p_834->g_168.f5,&p_834->g_168.f5,&p_834->g_168.f5,&p_834->g_168.f5}};
    int32_t l_193 = 0x6B942D21L;
    VECTOR(int16_t, 4) l_194 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L));
    uint16_t *l_195[3];
    int32_t l_196 = 9L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_195[i] = &p_834->g_168.f3;
    (*p_834->g_169) = p_834->g_168;
    (*p_834->g_170) = (*p_834->g_60);
    (*p_834->g_197) = (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_171.s16)), 8UL, 0x389C257DL, ((VECTOR(uint32_t, 4))(0x429A37B7L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 16))(l_172.s17c9ca4c6f4952a9)).sfc2a, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-3L), 0x591F11CCL)), (-5L), ((VECTOR(int32_t, 2))(l_173.xx)), (safe_div_func_uint16_t_u_u((l_196 = (((((safe_add_func_int64_t_s_s((l_193 |= ((safe_lshift_func_uint16_t_u_s((l_172.sa | (safe_mul_func_uint8_t_u_u(0xFCL, (p_834->g_104.f3 && (((safe_rshift_func_uint16_t_u_s(65526UL, 1)) , (((!FAKE_DIVERGE(p_834->group_2_offset, get_group_id(2), 10)) != 0x0EL) , ((safe_add_func_int64_t_s_s(l_171.s1, (p_834->g_144.y > (safe_rshift_func_uint8_t_u_s((l_190 |= (safe_add_func_uint8_t_u_u(248UL, (p_834->g_102[8][4] != (-10L))))), 6))))) | 1UL))) > 65535UL))))), l_173.z)) ^ l_173.x)), l_172.sf)) > p_33) & l_194.x) , 0L) != 0x5DF3L)), (-1L))), 0x399569C6L, 0x7D3FCBE2L)).s34, ((VECTOR(int32_t, 2))(0L))))), ((VECTOR(uint32_t, 2))(0x8F0C7B7BL)), ((VECTOR(uint32_t, 2))(6UL))))).yyxyyxxy)).odd))).even)), 0x16D1FC4DL)), 0UL, 4294967295UL, 0x0052BFA0L, 0xEF0C489AL, 0xAFFB80BBL, p_834->g_104.f2, 0x7A2EF323L, 0UL)).sb , (*p_834->g_60));
    l_190 &= ((safe_sub_func_uint32_t_u_u(p_29, ((safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_834->group_0_offset, get_group_id(0), 10), p_834->g_129.z)) < l_196))) >= p_834->g_111.f1);
    return &p_834->g_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_834->g_60 p_834->g_104.f3 p_834->g_111.f4 p_834->g_65 p_834->g_102 p_834->g_144
 * writes: p_834->g_8 p_834->g_40 p_834->g_102
 */
int32_t * func_35(int16_t  p_36, uint64_t  p_37, uint8_t * p_38, uint8_t  p_39, struct S3 * p_834)
{ /* block id: 32 */
    int32_t *l_108[9][10][2] = {{{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6}},{{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6}},{{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6}},{{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6}},{{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6}},{{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6}},{{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6}},{{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6}},{{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6},{(void*)0,&p_834->g_6}}};
    VECTOR(uint8_t, 2) l_109 = (VECTOR(uint8_t, 2))(0x98L, 0xFCL);
    struct S0 *l_110 = &p_834->g_111;
    struct S0 *l_113 = &p_834->g_111;
    struct S0 **l_112 = &l_113;
    uint8_t l_118 = 0x28L;
    VECTOR(int8_t, 2) l_119 = (VECTOR(int8_t, 2))(6L, 0x39L);
    uint64_t l_122 = 18446744073709551615UL;
    uint64_t *l_125 = &p_834->g_40;
    int16_t l_126 = 0x7FA4L;
    int32_t l_127[7][3][2] = {{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}}};
    int8_t l_128 = 0L;
    uint32_t l_130[7] = {0x572696F3L,0x7466328CL,0x572696F3L,0x572696F3L,0x7466328CL,0x572696F3L,0x572696F3L};
    int16_t *l_139 = (void*)0;
    int16_t *l_140[3][4][3] = {{{&l_126,&l_126,&l_126},{&l_126,&l_126,&l_126},{&l_126,&l_126,&l_126},{&l_126,&l_126,&l_126}},{{&l_126,&l_126,&l_126},{&l_126,&l_126,&l_126},{&l_126,&l_126,&l_126},{&l_126,&l_126,&l_126}},{{&l_126,&l_126,&l_126},{&l_126,&l_126,&l_126},{&l_126,&l_126,&l_126},{&l_126,&l_126,&l_126}}};
    VECTOR(uint16_t, 4) l_141 = (VECTOR(uint16_t, 4))(0x57D3L, (VECTOR(uint16_t, 2))(0x57D3L, 0xD348L), 0xD348L);
    int i, j, k;
    p_834->g_102[0][3] &= ((+((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 8))(((p_37 , l_108[5][5][1]) == ((*p_834->g_60) = l_108[5][5][1])), ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 4))(l_109.xyxy)).yyywwzzx, (uint8_t)((l_110 != ((*l_112) = l_110)) , ((safe_add_func_uint8_t_u_u(7UL, (safe_rshift_func_uint8_t_u_s(l_118, 3)))) , FAKE_DIVERGE(p_834->global_1_offset, get_global_id(1), 10)))))))).s77)))).yxyx, ((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 16))(l_119.yyyxyyyyyyyyyyyy)), ((VECTOR(int8_t, 4))(((safe_div_func_int32_t_s_s(l_122, (safe_div_func_uint64_t_u_u(((*l_125) = (p_834->g_104.f3 | 0x4E85L)), l_126)))) && p_834->g_111.f4), l_127[3][0][1], (-1L), 0x06L)).wzzwwxxyzzyxzwxy))).sbaf1))), ((VECTOR(uint8_t, 2))(0xF9L)), 255UL)).s17, (uint8_t)0x55L, (uint8_t)(*p_38)))), ((VECTOR(uint8_t, 2))(255UL)), ((VECTOR(uint8_t, 2))(0x0DL))))).odd, (*p_38))) && (*p_38))) >= p_39);
    ++l_130[6];
    p_834->g_102[0][3] &= ((&p_834->g_111 == ((*l_112) = (*l_112))) , (safe_mul_func_int8_t_s_s((65535UL < (p_834->g_65 > ((p_39 == p_39) ^ (safe_mul_func_int16_t_s_s((p_36 = 0L), ((VECTOR(uint16_t, 4))(l_141.wxxx)).w))))), (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 2))(p_834->g_144.xx)).odd, 251UL)))));
    if ((atomic_inc(&p_834->l_atomic_input[0]) == 0))
    { /* block id: 42 */
        struct S1 l_145 = {4294967294UL};
        struct S1 l_146[4][5] = {{{1UL},{0UL},{1UL},{1UL},{0UL}},{{1UL},{0UL},{1UL},{1UL},{0UL}},{{1UL},{0UL},{1UL},{1UL},{0UL}},{{1UL},{0UL},{1UL},{1UL},{0UL}}};
        struct S1 l_147 = {0xA7B67DE9L};
        struct S1 l_148 = {0UL};
        struct S1 l_149[5] = {{0x1839EC28L},{0x1839EC28L},{0x1839EC28L},{0x1839EC28L},{0x1839EC28L}};
        VECTOR(uint16_t, 4) l_162 = (VECTOR(uint16_t, 4))(0xAC57L, (VECTOR(uint16_t, 2))(0xAC57L, 65533UL), 65533UL);
        struct S1 l_165[10] = {{0x0CECDE52L},{0x0CECDE52L},{0x0CECDE52L},{0x0CECDE52L},{0x0CECDE52L},{0x0CECDE52L},{0x0CECDE52L},{0x0CECDE52L},{0x0CECDE52L},{0x0CECDE52L}};
        int i, j;
        l_149[0] = (l_148 = (l_147 = (l_146[2][4] = l_145)));
        for (l_148.f0 = 0; (l_148.f0 < 9); l_148.f0 = safe_add_func_uint16_t_u_u(l_148.f0, 4))
        { /* block id: 49 */
            struct S1 l_153 = {4294967287UL};
            struct S1 *l_152 = &l_153;
            int8_t l_154 = 2L;
            int16_t l_155[10] = {0x5BB0L,0x5BB0L,0x5BB0L,0x5BB0L,0x5BB0L,0x5BB0L,0x5BB0L,0x5BB0L,0x5BB0L,0x5BB0L};
            int64_t l_156[3];
            uint8_t l_157[1][6][4] = {{{255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL}}};
            struct S1 l_158 = {4294967288UL};
            int16_t l_159 = 0x2463L;
            struct S2 l_160 = {0xB0D21617112B7E68L,0x0FC3L,1L,0x18B2L,0x49211A30L,-1L};
            struct S2 l_161 = {0x657E0B499DA40672L,9UL,0x33FF2206D238DED4L,4UL,0xD0B477D3L,0L};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_156[i] = 0x24E0C13267D7153FL;
            l_152 = (void*)0;
            l_156[1] &= (l_154 , l_155[1]);
            l_161 = ((l_157[0][4][2] , (l_149[4] = l_158)) , (l_159 , l_160));
        }
        --l_162.y;
        l_165[3] = l_165[9];
        unsigned int result = 0;
        result += l_145.f0;
        int l_146_i0, l_146_i1;
        for (l_146_i0 = 0; l_146_i0 < 4; l_146_i0++) {
            for (l_146_i1 = 0; l_146_i1 < 5; l_146_i1++) {
                result += l_146[l_146_i0][l_146_i1].f0;
            }
        }
        result += l_147.f0;
        result += l_148.f0;
        int l_149_i0;
        for (l_149_i0 = 0; l_149_i0 < 5; l_149_i0++) {
            result += l_149[l_149_i0].f0;
        }
        result += l_162.w;
        result += l_162.z;
        result += l_162.y;
        result += l_162.x;
        int l_165_i0;
        for (l_165_i0 = 0; l_165_i0 < 10; l_165_i0++) {
            result += l_165[l_165_i0].f0;
        }
        atomic_add(&p_834->l_special_values[0], result);
    }
    else
    { /* block id: 57 */
        (1 + 1);
    }
    return l_108[5][5][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_834->l_comm_values p_834->g_71 p_834->g_102 p_834->g_103 p_834->g_91 p_834->g_67 p_834->g_64
 * writes: p_834->g_90 p_834->g_91 p_834->g_102
 */
uint8_t * func_43(uint8_t  p_44, uint16_t  p_45, struct S3 * p_834)
{ /* block id: 25 */
    int32_t l_82 = (-2L);
    uint8_t ***l_87 = (void*)0;
    uint8_t ****l_88[4][8][6] = {{{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0}},{{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0}},{{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0}},{{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0},{&l_87,(void*)0,&l_87,(void*)0,&l_87,(void*)0}}};
    uint8_t ***l_89 = &p_834->g_67[1];
    int64_t l_100 = 0x41C6A88B8388ADF1L;
    int32_t *l_101 = &p_834->g_102[0][3];
    volatile struct S0 *l_105 = &p_834->g_104;
    int i, j, k;
    (*l_101) |= (1L ^ (((safe_add_func_int64_t_s_s((safe_div_func_uint32_t_u_u(p_834->l_comm_values[(safe_mod_func_uint32_t_u_u(p_834->tid, 6))], (safe_rshift_func_int8_t_s_u((9UL != (0xD9L <= l_82)), (safe_rshift_func_uint8_t_u_s(((safe_mod_func_int16_t_s_s(((p_834->g_90 = (l_89 = l_87)) == (p_834->g_91 = &p_834->g_67[1])), p_45)) && (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x3EL, 255UL)).yxyxxyxyxxxxxxyy)).sef)).yxyx))).x, 0)), (safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(l_82, p_45)) , 255UL), 0x70L))))), p_834->g_71.se)))))), l_100)) | p_45) > p_834->l_comm_values[(safe_mod_func_uint32_t_u_u(p_834->tid, 6))]));
    l_105 = p_834->g_103[0];
    return (**p_834->g_91);
}


/* ------------------------------------------ */
/* 
 * reads : p_834->g_60 p_834->g_63 p_834->g_68 p_834->g_71 p_834->g_6
 * writes: p_834->g_8 p_834->g_63 p_834->g_67 p_834->g_71
 */
uint8_t  func_46(int32_t ** p_47, int32_t  p_48, uint8_t * p_49, struct S3 * p_834)
{ /* block id: 14 */
    int32_t *l_59 = &p_834->g_6;
    VECTOR(int32_t, 4) l_69 = (VECTOR(int32_t, 4))(0x38AE633CL, (VECTOR(int32_t, 2))(0x38AE633CL, 0x4C3FC6C0L), 0x4C3FC6C0L);
    int32_t *l_70 = (void*)0;
    int32_t *l_72 = (void*)0;
    int32_t *l_73 = (void*)0;
    int32_t *l_74[3];
    int i;
    for (i = 0; i < 3; i++)
        l_74[i] = (void*)0;
    (*p_834->g_60) = l_59;
    for (p_48 = (-21); (p_48 >= (-13)); p_48++)
    { /* block id: 18 */
        uint8_t ***l_66 = &p_834->g_63;
        p_834->g_67[0] = ((*l_66) = p_834->g_63);
    }
    p_834->g_71.sd &= (p_834->g_68[1][4] , ((VECTOR(int32_t, 16))(l_69.zxwywyxyyxxzxzxx)).s3);
    return (*l_59);
}


/* ------------------------------------------ */
/* 
 * reads : p_834->g_6
 * writes:
 */
int16_t  func_52(uint64_t  p_53, uint8_t * p_54, int32_t * p_55, struct S3 * p_834)
{ /* block id: 12 */
    return p_834->g_6;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
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
    __local int64_t l_comm_values[6];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 6; i++)
            l_comm_values[i] = 1;
    struct S3 c_835;
    struct S3* p_834 = &c_835;
    struct S3 c_836 = {
        0L, // p_834->g_6
        &p_834->g_6, // p_834->g_8
        &p_834->g_8, // p_834->g_7
        2UL, // p_834->g_17
        0x7BBDA73A151CD25BL, // p_834->g_40
        &p_834->g_8, // p_834->g_60
        0x1DL, // p_834->g_65
        {&p_834->g_65,&p_834->g_65,&p_834->g_65,&p_834->g_65,&p_834->g_65,&p_834->g_65,&p_834->g_65,&p_834->g_65}, // p_834->g_64
        &p_834->g_64[2], // p_834->g_63
        {&p_834->g_64[3],&p_834->g_64[3]}, // p_834->g_67
        {{{0x3FD0416CL},{0x29ADD925L},{4294967295UL},{4294967295UL},{0xAEBC5F7CL},{6UL},{0xAED5A0A0L},{4294967295UL},{0x8A82D858L},{1UL}},{{0x3FD0416CL},{0x29ADD925L},{4294967295UL},{4294967295UL},{0xAEBC5F7CL},{6UL},{0xAED5A0A0L},{4294967295UL},{0x8A82D858L},{1UL}},{{0x3FD0416CL},{0x29ADD925L},{4294967295UL},{4294967295UL},{0xAEBC5F7CL},{6UL},{0xAED5A0A0L},{4294967295UL},{0x8A82D858L},{1UL}},{{0x3FD0416CL},{0x29ADD925L},{4294967295UL},{4294967295UL},{0xAEBC5F7CL},{6UL},{0xAED5A0A0L},{4294967295UL},{0x8A82D858L},{1UL}},{{0x3FD0416CL},{0x29ADD925L},{4294967295UL},{4294967295UL},{0xAEBC5F7CL},{6UL},{0xAED5A0A0L},{4294967295UL},{0x8A82D858L},{1UL}}}, // p_834->g_68
        (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x628D16E9L), 0x628D16E9L), 0x628D16E9L, 4L, 0x628D16E9L, (VECTOR(int32_t, 2))(4L, 0x628D16E9L), (VECTOR(int32_t, 2))(4L, 0x628D16E9L), 4L, 0x628D16E9L, 4L, 0x628D16E9L), // p_834->g_71
        &p_834->g_63, // p_834->g_90
        (void*)0, // p_834->g_91
        {{8L,0x69071E3CL,8L,8L,0x69071E3CL,8L},{8L,0x69071E3CL,8L,8L,0x69071E3CL,8L},{8L,0x69071E3CL,8L,8L,0x69071E3CL,8L},{8L,0x69071E3CL,8L,8L,0x69071E3CL,8L},{8L,0x69071E3CL,8L,8L,0x69071E3CL,8L},{8L,0x69071E3CL,8L,8L,0x69071E3CL,8L},{8L,0x69071E3CL,8L,8L,0x69071E3CL,8L},{8L,0x69071E3CL,8L,8L,0x69071E3CL,8L},{8L,0x69071E3CL,8L,8L,0x69071E3CL,8L}}, // p_834->g_102
        {0UL,1UL,5L,65527UL,0xC5867953L}, // p_834->g_104
        {&p_834->g_104,&p_834->g_104,&p_834->g_104,&p_834->g_104,&p_834->g_104,&p_834->g_104,&p_834->g_104,&p_834->g_104}, // p_834->g_103
        {0xBDE1DBEFL,0x3FFF7591L,7L,0x56ADL,4294967295UL}, // p_834->g_111
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L), // p_834->g_129
        (VECTOR(int8_t, 2))(1L, (-1L)), // p_834->g_144
        {0UL,1UL,0x415602398FA38932L,0xEBF8L,4294967295UL,-7L}, // p_834->g_168
        &p_834->g_168, // p_834->g_169
        &p_834->g_8, // p_834->g_170
        &p_834->g_8, // p_834->g_197
        0L, // p_834->g_204
        &p_834->g_204, // p_834->g_203
        (-4L), // p_834->g_214
        (VECTOR(uint32_t, 8))(0xB092D7B6L, (VECTOR(uint32_t, 4))(0xB092D7B6L, (VECTOR(uint32_t, 2))(0xB092D7B6L, 0x5EA0C892L), 0x5EA0C892L), 0x5EA0C892L, 0xB092D7B6L, 0x5EA0C892L), // p_834->g_224
        (VECTOR(uint32_t, 2))(0xF12F4B51L, 0x554228E1L), // p_834->g_236
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967291UL), 4294967291UL), 4294967291UL, 4294967295UL, 4294967291UL), // p_834->g_239
        (VECTOR(uint32_t, 4))(0xC0721CABL, (VECTOR(uint32_t, 2))(0xC0721CABL, 0UL), 0UL), // p_834->g_240
        {0x3DB8F6ADL,0xA6B68875L,0x18F20B76L,1UL,4UL}, // p_834->g_245
        (VECTOR(int32_t, 16))(0x7780B903L, (VECTOR(int32_t, 4))(0x7780B903L, (VECTOR(int32_t, 2))(0x7780B903L, 0x1369EDF5L), 0x1369EDF5L), 0x1369EDF5L, 0x7780B903L, 0x1369EDF5L, (VECTOR(int32_t, 2))(0x7780B903L, 0x1369EDF5L), (VECTOR(int32_t, 2))(0x7780B903L, 0x1369EDF5L), 0x7780B903L, 0x1369EDF5L, 0x7780B903L, 0x1369EDF5L), // p_834->g_249
        (VECTOR(int32_t, 16))(0x5E865EF7L, (VECTOR(int32_t, 4))(0x5E865EF7L, (VECTOR(int32_t, 2))(0x5E865EF7L, 0L), 0L), 0L, 0x5E865EF7L, 0L, (VECTOR(int32_t, 2))(0x5E865EF7L, 0L), (VECTOR(int32_t, 2))(0x5E865EF7L, 0L), 0x5E865EF7L, 0L, 0x5E865EF7L, 0L), // p_834->g_251
        0xF3348115L, // p_834->g_256
        &p_834->g_111, // p_834->g_279
        &p_834->g_279, // p_834->g_278
        0x06L, // p_834->g_288
        &p_834->g_288, // p_834->g_287
        &p_834->g_287, // p_834->g_286
        (VECTOR(uint8_t, 2))(0x67L, 1UL), // p_834->g_296
        (VECTOR(uint16_t, 2))(0x46B2L, 0xD2DEL), // p_834->g_299
        (void*)0, // p_834->g_309
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L), // p_834->g_325
        4294967295UL, // p_834->g_332
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x3D3B314C03FEAD03L), 0x3D3B314C03FEAD03L), 0x3D3B314C03FEAD03L, 1UL, 0x3D3B314C03FEAD03L, (VECTOR(uint64_t, 2))(1UL, 0x3D3B314C03FEAD03L), (VECTOR(uint64_t, 2))(1UL, 0x3D3B314C03FEAD03L), 1UL, 0x3D3B314C03FEAD03L, 1UL, 0x3D3B314C03FEAD03L), // p_834->g_345
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551611UL), // p_834->g_348
        (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, (-10L)), (-10L)), // p_834->g_355
        {0x27EC48BEL,0x329899BCL,0L,0x71D4L,0x67D3ACEEL}, // p_834->g_362
        (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0x148CBAA3L), 0x148CBAA3L), // p_834->g_365
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x0FL), 0x0FL), 0x0FL, 0L, 0x0FL, (VECTOR(int8_t, 2))(0L, 0x0FL), (VECTOR(int8_t, 2))(0L, 0x0FL), 0L, 0x0FL, 0L, 0x0FL), // p_834->g_386
        {0xA1F598D1L}, // p_834->g_401
        {{{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401}},{{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401}},{{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401}},{{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401},{(void*)0,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401,&p_834->g_401}}}, // p_834->g_403
        (VECTOR(int32_t, 8))(0x30E03313L, (VECTOR(int32_t, 4))(0x30E03313L, (VECTOR(int32_t, 2))(0x30E03313L, (-6L)), (-6L)), (-6L), 0x30E03313L, (-6L)), // p_834->g_415
        (VECTOR(int8_t, 8))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x13L), 0x13L), 0x13L, (-7L), 0x13L), // p_834->g_429
        {7UL,7UL,0L,0UL,4294967288UL}, // p_834->g_440
        (VECTOR(uint32_t, 16))(0xF91930C6L, (VECTOR(uint32_t, 4))(0xF91930C6L, (VECTOR(uint32_t, 2))(0xF91930C6L, 1UL), 1UL), 1UL, 0xF91930C6L, 1UL, (VECTOR(uint32_t, 2))(0xF91930C6L, 1UL), (VECTOR(uint32_t, 2))(0xF91930C6L, 1UL), 0xF91930C6L, 1UL, 0xF91930C6L, 1UL), // p_834->g_445
        (-2L), // p_834->g_462
        {{6UL,1UL,0x3D1D4C838F75EE40L,5UL,0xFAB14969L,0L},{6UL,1UL,0x3D1D4C838F75EE40L,5UL,0xFAB14969L,0L}}, // p_834->g_484
        &p_834->g_484[1], // p_834->g_483
        (void*)0, // p_834->g_485
        {&p_834->g_483,&p_834->g_483,&p_834->g_483,&p_834->g_483,&p_834->g_483}, // p_834->g_482
        0L, // p_834->g_491
        {(-10L),(-10L),(-10L)}, // p_834->g_507
        0xB8F02284L, // p_834->g_524
        65534UL, // p_834->g_526
        {{{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L}},{{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L}},{{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L},{0x783D166EL,0x1B0593E5L,(-9L),0x1B0593E5L,0x783D166EL,0x783D166EL,0x1B0593E5L}}}, // p_834->g_527
        0x1E09L, // p_834->g_552
        &p_834->g_527[0][2][0], // p_834->g_553
        (VECTOR(int32_t, 16))(0x3186CC9DL, (VECTOR(int32_t, 4))(0x3186CC9DL, (VECTOR(int32_t, 2))(0x3186CC9DL, (-1L)), (-1L)), (-1L), 0x3186CC9DL, (-1L), (VECTOR(int32_t, 2))(0x3186CC9DL, (-1L)), (VECTOR(int32_t, 2))(0x3186CC9DL, (-1L)), 0x3186CC9DL, (-1L), 0x3186CC9DL, (-1L)), // p_834->g_562
        &p_834->g_8, // p_834->g_585
        {0xC3E45586L,0UL,0x0A581586L,0x70F5L,2UL}, // p_834->g_590
        1L, // p_834->g_607
        65526UL, // p_834->g_610
        (VECTOR(int8_t, 16))(0x51L, (VECTOR(int8_t, 4))(0x51L, (VECTOR(int8_t, 2))(0x51L, 0x6AL), 0x6AL), 0x6AL, 0x51L, 0x6AL, (VECTOR(int8_t, 2))(0x51L, 0x6AL), (VECTOR(int8_t, 2))(0x51L, 0x6AL), 0x51L, 0x6AL, 0x51L, 0x6AL), // p_834->g_614
        &p_834->g_8, // p_834->g_620
        (void*)0, // p_834->g_635
        &p_834->g_8, // p_834->g_636
        &p_834->g_403[3][4][7], // p_834->g_648
        {4UL,0x18DE510DL,0L,0x3019L,0x9AC0652CL}, // p_834->g_667
        (void*)0, // p_834->g_687
        {1UL}, // p_834->g_698
        (void*)0, // p_834->g_723
        (VECTOR(uint8_t, 4))(0xAEL, (VECTOR(uint8_t, 2))(0xAEL, 0x50L), 0x50L), // p_834->g_733
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x1593L), 0x1593L), 0x1593L, 1UL, 0x1593L, (VECTOR(uint16_t, 2))(1UL, 0x1593L), (VECTOR(uint16_t, 2))(1UL, 0x1593L), 1UL, 0x1593L, 1UL, 0x1593L), // p_834->g_755
        &p_834->g_8, // p_834->g_762
        (VECTOR(uint64_t, 16))(0xA928E384E29E7C1CL, (VECTOR(uint64_t, 4))(0xA928E384E29E7C1CL, (VECTOR(uint64_t, 2))(0xA928E384E29E7C1CL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xA928E384E29E7C1CL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0xA928E384E29E7C1CL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0xA928E384E29E7C1CL, 18446744073709551615UL), 0xA928E384E29E7C1CL, 18446744073709551615UL, 0xA928E384E29E7C1CL, 18446744073709551615UL), // p_834->g_766
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int64_t, 2))(0L, (-1L)), (VECTOR(int64_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L)), // p_834->g_767
        (VECTOR(int32_t, 2))(1L, 1L), // p_834->g_771
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int8_t, 2))(1L, (-1L)), (VECTOR(int8_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L)), // p_834->g_783
        0xAF9CBB50L, // p_834->g_816
        (VECTOR(int8_t, 2))(0x45L, 0x27L), // p_834->g_822
        &p_834->g_401, // p_834->g_824
        &p_834->g_824, // p_834->g_823
        0, // p_834->v_collective
        sequence_input[get_global_id(0)], // p_834->global_0_offset
        sequence_input[get_global_id(1)], // p_834->global_1_offset
        sequence_input[get_global_id(2)], // p_834->global_2_offset
        sequence_input[get_local_id(0)], // p_834->local_0_offset
        sequence_input[get_local_id(1)], // p_834->local_1_offset
        sequence_input[get_local_id(2)], // p_834->local_2_offset
        sequence_input[get_group_id(0)], // p_834->group_0_offset
        sequence_input[get_group_id(1)], // p_834->group_1_offset
        sequence_input[get_group_id(2)], // p_834->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 6)), permutations[0][get_linear_local_id()])), // p_834->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_835 = c_836;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_834);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_834->g_6, "p_834->g_6", print_hash_value);
    transparent_crc(p_834->g_17, "p_834->g_17", print_hash_value);
    transparent_crc(p_834->g_40, "p_834->g_40", print_hash_value);
    transparent_crc(p_834->g_65, "p_834->g_65", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_834->g_68[i][j].f0, "p_834->g_68[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_834->g_71.s0, "p_834->g_71.s0", print_hash_value);
    transparent_crc(p_834->g_71.s1, "p_834->g_71.s1", print_hash_value);
    transparent_crc(p_834->g_71.s2, "p_834->g_71.s2", print_hash_value);
    transparent_crc(p_834->g_71.s3, "p_834->g_71.s3", print_hash_value);
    transparent_crc(p_834->g_71.s4, "p_834->g_71.s4", print_hash_value);
    transparent_crc(p_834->g_71.s5, "p_834->g_71.s5", print_hash_value);
    transparent_crc(p_834->g_71.s6, "p_834->g_71.s6", print_hash_value);
    transparent_crc(p_834->g_71.s7, "p_834->g_71.s7", print_hash_value);
    transparent_crc(p_834->g_71.s8, "p_834->g_71.s8", print_hash_value);
    transparent_crc(p_834->g_71.s9, "p_834->g_71.s9", print_hash_value);
    transparent_crc(p_834->g_71.sa, "p_834->g_71.sa", print_hash_value);
    transparent_crc(p_834->g_71.sb, "p_834->g_71.sb", print_hash_value);
    transparent_crc(p_834->g_71.sc, "p_834->g_71.sc", print_hash_value);
    transparent_crc(p_834->g_71.sd, "p_834->g_71.sd", print_hash_value);
    transparent_crc(p_834->g_71.se, "p_834->g_71.se", print_hash_value);
    transparent_crc(p_834->g_71.sf, "p_834->g_71.sf", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_834->g_102[i][j], "p_834->g_102[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_834->g_104.f0, "p_834->g_104.f0", print_hash_value);
    transparent_crc(p_834->g_104.f1, "p_834->g_104.f1", print_hash_value);
    transparent_crc(p_834->g_104.f2, "p_834->g_104.f2", print_hash_value);
    transparent_crc(p_834->g_104.f3, "p_834->g_104.f3", print_hash_value);
    transparent_crc(p_834->g_104.f4, "p_834->g_104.f4", print_hash_value);
    transparent_crc(p_834->g_111.f0, "p_834->g_111.f0", print_hash_value);
    transparent_crc(p_834->g_111.f1, "p_834->g_111.f1", print_hash_value);
    transparent_crc(p_834->g_111.f2, "p_834->g_111.f2", print_hash_value);
    transparent_crc(p_834->g_111.f3, "p_834->g_111.f3", print_hash_value);
    transparent_crc(p_834->g_111.f4, "p_834->g_111.f4", print_hash_value);
    transparent_crc(p_834->g_129.x, "p_834->g_129.x", print_hash_value);
    transparent_crc(p_834->g_129.y, "p_834->g_129.y", print_hash_value);
    transparent_crc(p_834->g_129.z, "p_834->g_129.z", print_hash_value);
    transparent_crc(p_834->g_129.w, "p_834->g_129.w", print_hash_value);
    transparent_crc(p_834->g_144.x, "p_834->g_144.x", print_hash_value);
    transparent_crc(p_834->g_144.y, "p_834->g_144.y", print_hash_value);
    transparent_crc(p_834->g_168.f0, "p_834->g_168.f0", print_hash_value);
    transparent_crc(p_834->g_168.f1, "p_834->g_168.f1", print_hash_value);
    transparent_crc(p_834->g_168.f2, "p_834->g_168.f2", print_hash_value);
    transparent_crc(p_834->g_168.f3, "p_834->g_168.f3", print_hash_value);
    transparent_crc(p_834->g_168.f4, "p_834->g_168.f4", print_hash_value);
    transparent_crc(p_834->g_168.f5, "p_834->g_168.f5", print_hash_value);
    transparent_crc(p_834->g_204, "p_834->g_204", print_hash_value);
    transparent_crc(p_834->g_214, "p_834->g_214", print_hash_value);
    transparent_crc(p_834->g_224.s0, "p_834->g_224.s0", print_hash_value);
    transparent_crc(p_834->g_224.s1, "p_834->g_224.s1", print_hash_value);
    transparent_crc(p_834->g_224.s2, "p_834->g_224.s2", print_hash_value);
    transparent_crc(p_834->g_224.s3, "p_834->g_224.s3", print_hash_value);
    transparent_crc(p_834->g_224.s4, "p_834->g_224.s4", print_hash_value);
    transparent_crc(p_834->g_224.s5, "p_834->g_224.s5", print_hash_value);
    transparent_crc(p_834->g_224.s6, "p_834->g_224.s6", print_hash_value);
    transparent_crc(p_834->g_224.s7, "p_834->g_224.s7", print_hash_value);
    transparent_crc(p_834->g_236.x, "p_834->g_236.x", print_hash_value);
    transparent_crc(p_834->g_236.y, "p_834->g_236.y", print_hash_value);
    transparent_crc(p_834->g_239.s0, "p_834->g_239.s0", print_hash_value);
    transparent_crc(p_834->g_239.s1, "p_834->g_239.s1", print_hash_value);
    transparent_crc(p_834->g_239.s2, "p_834->g_239.s2", print_hash_value);
    transparent_crc(p_834->g_239.s3, "p_834->g_239.s3", print_hash_value);
    transparent_crc(p_834->g_239.s4, "p_834->g_239.s4", print_hash_value);
    transparent_crc(p_834->g_239.s5, "p_834->g_239.s5", print_hash_value);
    transparent_crc(p_834->g_239.s6, "p_834->g_239.s6", print_hash_value);
    transparent_crc(p_834->g_239.s7, "p_834->g_239.s7", print_hash_value);
    transparent_crc(p_834->g_240.x, "p_834->g_240.x", print_hash_value);
    transparent_crc(p_834->g_240.y, "p_834->g_240.y", print_hash_value);
    transparent_crc(p_834->g_240.z, "p_834->g_240.z", print_hash_value);
    transparent_crc(p_834->g_240.w, "p_834->g_240.w", print_hash_value);
    transparent_crc(p_834->g_245.f0, "p_834->g_245.f0", print_hash_value);
    transparent_crc(p_834->g_245.f1, "p_834->g_245.f1", print_hash_value);
    transparent_crc(p_834->g_245.f2, "p_834->g_245.f2", print_hash_value);
    transparent_crc(p_834->g_245.f3, "p_834->g_245.f3", print_hash_value);
    transparent_crc(p_834->g_245.f4, "p_834->g_245.f4", print_hash_value);
    transparent_crc(p_834->g_249.s0, "p_834->g_249.s0", print_hash_value);
    transparent_crc(p_834->g_249.s1, "p_834->g_249.s1", print_hash_value);
    transparent_crc(p_834->g_249.s2, "p_834->g_249.s2", print_hash_value);
    transparent_crc(p_834->g_249.s3, "p_834->g_249.s3", print_hash_value);
    transparent_crc(p_834->g_249.s4, "p_834->g_249.s4", print_hash_value);
    transparent_crc(p_834->g_249.s5, "p_834->g_249.s5", print_hash_value);
    transparent_crc(p_834->g_249.s6, "p_834->g_249.s6", print_hash_value);
    transparent_crc(p_834->g_249.s7, "p_834->g_249.s7", print_hash_value);
    transparent_crc(p_834->g_249.s8, "p_834->g_249.s8", print_hash_value);
    transparent_crc(p_834->g_249.s9, "p_834->g_249.s9", print_hash_value);
    transparent_crc(p_834->g_249.sa, "p_834->g_249.sa", print_hash_value);
    transparent_crc(p_834->g_249.sb, "p_834->g_249.sb", print_hash_value);
    transparent_crc(p_834->g_249.sc, "p_834->g_249.sc", print_hash_value);
    transparent_crc(p_834->g_249.sd, "p_834->g_249.sd", print_hash_value);
    transparent_crc(p_834->g_249.se, "p_834->g_249.se", print_hash_value);
    transparent_crc(p_834->g_249.sf, "p_834->g_249.sf", print_hash_value);
    transparent_crc(p_834->g_251.s0, "p_834->g_251.s0", print_hash_value);
    transparent_crc(p_834->g_251.s1, "p_834->g_251.s1", print_hash_value);
    transparent_crc(p_834->g_251.s2, "p_834->g_251.s2", print_hash_value);
    transparent_crc(p_834->g_251.s3, "p_834->g_251.s3", print_hash_value);
    transparent_crc(p_834->g_251.s4, "p_834->g_251.s4", print_hash_value);
    transparent_crc(p_834->g_251.s5, "p_834->g_251.s5", print_hash_value);
    transparent_crc(p_834->g_251.s6, "p_834->g_251.s6", print_hash_value);
    transparent_crc(p_834->g_251.s7, "p_834->g_251.s7", print_hash_value);
    transparent_crc(p_834->g_251.s8, "p_834->g_251.s8", print_hash_value);
    transparent_crc(p_834->g_251.s9, "p_834->g_251.s9", print_hash_value);
    transparent_crc(p_834->g_251.sa, "p_834->g_251.sa", print_hash_value);
    transparent_crc(p_834->g_251.sb, "p_834->g_251.sb", print_hash_value);
    transparent_crc(p_834->g_251.sc, "p_834->g_251.sc", print_hash_value);
    transparent_crc(p_834->g_251.sd, "p_834->g_251.sd", print_hash_value);
    transparent_crc(p_834->g_251.se, "p_834->g_251.se", print_hash_value);
    transparent_crc(p_834->g_251.sf, "p_834->g_251.sf", print_hash_value);
    transparent_crc(p_834->g_256, "p_834->g_256", print_hash_value);
    transparent_crc(p_834->g_288, "p_834->g_288", print_hash_value);
    transparent_crc(p_834->g_296.x, "p_834->g_296.x", print_hash_value);
    transparent_crc(p_834->g_296.y, "p_834->g_296.y", print_hash_value);
    transparent_crc(p_834->g_299.x, "p_834->g_299.x", print_hash_value);
    transparent_crc(p_834->g_299.y, "p_834->g_299.y", print_hash_value);
    transparent_crc(p_834->g_325.s0, "p_834->g_325.s0", print_hash_value);
    transparent_crc(p_834->g_325.s1, "p_834->g_325.s1", print_hash_value);
    transparent_crc(p_834->g_325.s2, "p_834->g_325.s2", print_hash_value);
    transparent_crc(p_834->g_325.s3, "p_834->g_325.s3", print_hash_value);
    transparent_crc(p_834->g_325.s4, "p_834->g_325.s4", print_hash_value);
    transparent_crc(p_834->g_325.s5, "p_834->g_325.s5", print_hash_value);
    transparent_crc(p_834->g_325.s6, "p_834->g_325.s6", print_hash_value);
    transparent_crc(p_834->g_325.s7, "p_834->g_325.s7", print_hash_value);
    transparent_crc(p_834->g_332, "p_834->g_332", print_hash_value);
    transparent_crc(p_834->g_345.s0, "p_834->g_345.s0", print_hash_value);
    transparent_crc(p_834->g_345.s1, "p_834->g_345.s1", print_hash_value);
    transparent_crc(p_834->g_345.s2, "p_834->g_345.s2", print_hash_value);
    transparent_crc(p_834->g_345.s3, "p_834->g_345.s3", print_hash_value);
    transparent_crc(p_834->g_345.s4, "p_834->g_345.s4", print_hash_value);
    transparent_crc(p_834->g_345.s5, "p_834->g_345.s5", print_hash_value);
    transparent_crc(p_834->g_345.s6, "p_834->g_345.s6", print_hash_value);
    transparent_crc(p_834->g_345.s7, "p_834->g_345.s7", print_hash_value);
    transparent_crc(p_834->g_345.s8, "p_834->g_345.s8", print_hash_value);
    transparent_crc(p_834->g_345.s9, "p_834->g_345.s9", print_hash_value);
    transparent_crc(p_834->g_345.sa, "p_834->g_345.sa", print_hash_value);
    transparent_crc(p_834->g_345.sb, "p_834->g_345.sb", print_hash_value);
    transparent_crc(p_834->g_345.sc, "p_834->g_345.sc", print_hash_value);
    transparent_crc(p_834->g_345.sd, "p_834->g_345.sd", print_hash_value);
    transparent_crc(p_834->g_345.se, "p_834->g_345.se", print_hash_value);
    transparent_crc(p_834->g_345.sf, "p_834->g_345.sf", print_hash_value);
    transparent_crc(p_834->g_348.x, "p_834->g_348.x", print_hash_value);
    transparent_crc(p_834->g_348.y, "p_834->g_348.y", print_hash_value);
    transparent_crc(p_834->g_355.x, "p_834->g_355.x", print_hash_value);
    transparent_crc(p_834->g_355.y, "p_834->g_355.y", print_hash_value);
    transparent_crc(p_834->g_355.z, "p_834->g_355.z", print_hash_value);
    transparent_crc(p_834->g_355.w, "p_834->g_355.w", print_hash_value);
    transparent_crc(p_834->g_362.f0, "p_834->g_362.f0", print_hash_value);
    transparent_crc(p_834->g_362.f1, "p_834->g_362.f1", print_hash_value);
    transparent_crc(p_834->g_362.f2, "p_834->g_362.f2", print_hash_value);
    transparent_crc(p_834->g_362.f3, "p_834->g_362.f3", print_hash_value);
    transparent_crc(p_834->g_362.f4, "p_834->g_362.f4", print_hash_value);
    transparent_crc(p_834->g_365.x, "p_834->g_365.x", print_hash_value);
    transparent_crc(p_834->g_365.y, "p_834->g_365.y", print_hash_value);
    transparent_crc(p_834->g_365.z, "p_834->g_365.z", print_hash_value);
    transparent_crc(p_834->g_365.w, "p_834->g_365.w", print_hash_value);
    transparent_crc(p_834->g_386.s0, "p_834->g_386.s0", print_hash_value);
    transparent_crc(p_834->g_386.s1, "p_834->g_386.s1", print_hash_value);
    transparent_crc(p_834->g_386.s2, "p_834->g_386.s2", print_hash_value);
    transparent_crc(p_834->g_386.s3, "p_834->g_386.s3", print_hash_value);
    transparent_crc(p_834->g_386.s4, "p_834->g_386.s4", print_hash_value);
    transparent_crc(p_834->g_386.s5, "p_834->g_386.s5", print_hash_value);
    transparent_crc(p_834->g_386.s6, "p_834->g_386.s6", print_hash_value);
    transparent_crc(p_834->g_386.s7, "p_834->g_386.s7", print_hash_value);
    transparent_crc(p_834->g_386.s8, "p_834->g_386.s8", print_hash_value);
    transparent_crc(p_834->g_386.s9, "p_834->g_386.s9", print_hash_value);
    transparent_crc(p_834->g_386.sa, "p_834->g_386.sa", print_hash_value);
    transparent_crc(p_834->g_386.sb, "p_834->g_386.sb", print_hash_value);
    transparent_crc(p_834->g_386.sc, "p_834->g_386.sc", print_hash_value);
    transparent_crc(p_834->g_386.sd, "p_834->g_386.sd", print_hash_value);
    transparent_crc(p_834->g_386.se, "p_834->g_386.se", print_hash_value);
    transparent_crc(p_834->g_386.sf, "p_834->g_386.sf", print_hash_value);
    transparent_crc(p_834->g_401.f0, "p_834->g_401.f0", print_hash_value);
    transparent_crc(p_834->g_415.s0, "p_834->g_415.s0", print_hash_value);
    transparent_crc(p_834->g_415.s1, "p_834->g_415.s1", print_hash_value);
    transparent_crc(p_834->g_415.s2, "p_834->g_415.s2", print_hash_value);
    transparent_crc(p_834->g_415.s3, "p_834->g_415.s3", print_hash_value);
    transparent_crc(p_834->g_415.s4, "p_834->g_415.s4", print_hash_value);
    transparent_crc(p_834->g_415.s5, "p_834->g_415.s5", print_hash_value);
    transparent_crc(p_834->g_415.s6, "p_834->g_415.s6", print_hash_value);
    transparent_crc(p_834->g_415.s7, "p_834->g_415.s7", print_hash_value);
    transparent_crc(p_834->g_429.s0, "p_834->g_429.s0", print_hash_value);
    transparent_crc(p_834->g_429.s1, "p_834->g_429.s1", print_hash_value);
    transparent_crc(p_834->g_429.s2, "p_834->g_429.s2", print_hash_value);
    transparent_crc(p_834->g_429.s3, "p_834->g_429.s3", print_hash_value);
    transparent_crc(p_834->g_429.s4, "p_834->g_429.s4", print_hash_value);
    transparent_crc(p_834->g_429.s5, "p_834->g_429.s5", print_hash_value);
    transparent_crc(p_834->g_429.s6, "p_834->g_429.s6", print_hash_value);
    transparent_crc(p_834->g_429.s7, "p_834->g_429.s7", print_hash_value);
    transparent_crc(p_834->g_440.f0, "p_834->g_440.f0", print_hash_value);
    transparent_crc(p_834->g_440.f1, "p_834->g_440.f1", print_hash_value);
    transparent_crc(p_834->g_440.f2, "p_834->g_440.f2", print_hash_value);
    transparent_crc(p_834->g_440.f3, "p_834->g_440.f3", print_hash_value);
    transparent_crc(p_834->g_440.f4, "p_834->g_440.f4", print_hash_value);
    transparent_crc(p_834->g_445.s0, "p_834->g_445.s0", print_hash_value);
    transparent_crc(p_834->g_445.s1, "p_834->g_445.s1", print_hash_value);
    transparent_crc(p_834->g_445.s2, "p_834->g_445.s2", print_hash_value);
    transparent_crc(p_834->g_445.s3, "p_834->g_445.s3", print_hash_value);
    transparent_crc(p_834->g_445.s4, "p_834->g_445.s4", print_hash_value);
    transparent_crc(p_834->g_445.s5, "p_834->g_445.s5", print_hash_value);
    transparent_crc(p_834->g_445.s6, "p_834->g_445.s6", print_hash_value);
    transparent_crc(p_834->g_445.s7, "p_834->g_445.s7", print_hash_value);
    transparent_crc(p_834->g_445.s8, "p_834->g_445.s8", print_hash_value);
    transparent_crc(p_834->g_445.s9, "p_834->g_445.s9", print_hash_value);
    transparent_crc(p_834->g_445.sa, "p_834->g_445.sa", print_hash_value);
    transparent_crc(p_834->g_445.sb, "p_834->g_445.sb", print_hash_value);
    transparent_crc(p_834->g_445.sc, "p_834->g_445.sc", print_hash_value);
    transparent_crc(p_834->g_445.sd, "p_834->g_445.sd", print_hash_value);
    transparent_crc(p_834->g_445.se, "p_834->g_445.se", print_hash_value);
    transparent_crc(p_834->g_445.sf, "p_834->g_445.sf", print_hash_value);
    transparent_crc(p_834->g_462, "p_834->g_462", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_834->g_484[i].f0, "p_834->g_484[i].f0", print_hash_value);
        transparent_crc(p_834->g_484[i].f1, "p_834->g_484[i].f1", print_hash_value);
        transparent_crc(p_834->g_484[i].f2, "p_834->g_484[i].f2", print_hash_value);
        transparent_crc(p_834->g_484[i].f3, "p_834->g_484[i].f3", print_hash_value);
        transparent_crc(p_834->g_484[i].f4, "p_834->g_484[i].f4", print_hash_value);
        transparent_crc(p_834->g_484[i].f5, "p_834->g_484[i].f5", print_hash_value);

    }
    transparent_crc(p_834->g_491, "p_834->g_491", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_834->g_507[i], "p_834->g_507[i]", print_hash_value);

    }
    transparent_crc(p_834->g_524, "p_834->g_524", print_hash_value);
    transparent_crc(p_834->g_526, "p_834->g_526", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_834->g_527[i][j][k], "p_834->g_527[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_834->g_552, "p_834->g_552", print_hash_value);
    transparent_crc(p_834->g_562.s0, "p_834->g_562.s0", print_hash_value);
    transparent_crc(p_834->g_562.s1, "p_834->g_562.s1", print_hash_value);
    transparent_crc(p_834->g_562.s2, "p_834->g_562.s2", print_hash_value);
    transparent_crc(p_834->g_562.s3, "p_834->g_562.s3", print_hash_value);
    transparent_crc(p_834->g_562.s4, "p_834->g_562.s4", print_hash_value);
    transparent_crc(p_834->g_562.s5, "p_834->g_562.s5", print_hash_value);
    transparent_crc(p_834->g_562.s6, "p_834->g_562.s6", print_hash_value);
    transparent_crc(p_834->g_562.s7, "p_834->g_562.s7", print_hash_value);
    transparent_crc(p_834->g_562.s8, "p_834->g_562.s8", print_hash_value);
    transparent_crc(p_834->g_562.s9, "p_834->g_562.s9", print_hash_value);
    transparent_crc(p_834->g_562.sa, "p_834->g_562.sa", print_hash_value);
    transparent_crc(p_834->g_562.sb, "p_834->g_562.sb", print_hash_value);
    transparent_crc(p_834->g_562.sc, "p_834->g_562.sc", print_hash_value);
    transparent_crc(p_834->g_562.sd, "p_834->g_562.sd", print_hash_value);
    transparent_crc(p_834->g_562.se, "p_834->g_562.se", print_hash_value);
    transparent_crc(p_834->g_562.sf, "p_834->g_562.sf", print_hash_value);
    transparent_crc(p_834->g_590.f0, "p_834->g_590.f0", print_hash_value);
    transparent_crc(p_834->g_590.f1, "p_834->g_590.f1", print_hash_value);
    transparent_crc(p_834->g_590.f2, "p_834->g_590.f2", print_hash_value);
    transparent_crc(p_834->g_590.f3, "p_834->g_590.f3", print_hash_value);
    transparent_crc(p_834->g_590.f4, "p_834->g_590.f4", print_hash_value);
    transparent_crc(p_834->g_607, "p_834->g_607", print_hash_value);
    transparent_crc(p_834->g_610, "p_834->g_610", print_hash_value);
    transparent_crc(p_834->g_614.s0, "p_834->g_614.s0", print_hash_value);
    transparent_crc(p_834->g_614.s1, "p_834->g_614.s1", print_hash_value);
    transparent_crc(p_834->g_614.s2, "p_834->g_614.s2", print_hash_value);
    transparent_crc(p_834->g_614.s3, "p_834->g_614.s3", print_hash_value);
    transparent_crc(p_834->g_614.s4, "p_834->g_614.s4", print_hash_value);
    transparent_crc(p_834->g_614.s5, "p_834->g_614.s5", print_hash_value);
    transparent_crc(p_834->g_614.s6, "p_834->g_614.s6", print_hash_value);
    transparent_crc(p_834->g_614.s7, "p_834->g_614.s7", print_hash_value);
    transparent_crc(p_834->g_614.s8, "p_834->g_614.s8", print_hash_value);
    transparent_crc(p_834->g_614.s9, "p_834->g_614.s9", print_hash_value);
    transparent_crc(p_834->g_614.sa, "p_834->g_614.sa", print_hash_value);
    transparent_crc(p_834->g_614.sb, "p_834->g_614.sb", print_hash_value);
    transparent_crc(p_834->g_614.sc, "p_834->g_614.sc", print_hash_value);
    transparent_crc(p_834->g_614.sd, "p_834->g_614.sd", print_hash_value);
    transparent_crc(p_834->g_614.se, "p_834->g_614.se", print_hash_value);
    transparent_crc(p_834->g_614.sf, "p_834->g_614.sf", print_hash_value);
    transparent_crc(p_834->g_667.f0, "p_834->g_667.f0", print_hash_value);
    transparent_crc(p_834->g_667.f1, "p_834->g_667.f1", print_hash_value);
    transparent_crc(p_834->g_667.f2, "p_834->g_667.f2", print_hash_value);
    transparent_crc(p_834->g_667.f3, "p_834->g_667.f3", print_hash_value);
    transparent_crc(p_834->g_667.f4, "p_834->g_667.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_834->g_698[i], "p_834->g_698[i]", print_hash_value);

    }
    transparent_crc(p_834->g_733.x, "p_834->g_733.x", print_hash_value);
    transparent_crc(p_834->g_733.y, "p_834->g_733.y", print_hash_value);
    transparent_crc(p_834->g_733.z, "p_834->g_733.z", print_hash_value);
    transparent_crc(p_834->g_733.w, "p_834->g_733.w", print_hash_value);
    transparent_crc(p_834->g_755.s0, "p_834->g_755.s0", print_hash_value);
    transparent_crc(p_834->g_755.s1, "p_834->g_755.s1", print_hash_value);
    transparent_crc(p_834->g_755.s2, "p_834->g_755.s2", print_hash_value);
    transparent_crc(p_834->g_755.s3, "p_834->g_755.s3", print_hash_value);
    transparent_crc(p_834->g_755.s4, "p_834->g_755.s4", print_hash_value);
    transparent_crc(p_834->g_755.s5, "p_834->g_755.s5", print_hash_value);
    transparent_crc(p_834->g_755.s6, "p_834->g_755.s6", print_hash_value);
    transparent_crc(p_834->g_755.s7, "p_834->g_755.s7", print_hash_value);
    transparent_crc(p_834->g_755.s8, "p_834->g_755.s8", print_hash_value);
    transparent_crc(p_834->g_755.s9, "p_834->g_755.s9", print_hash_value);
    transparent_crc(p_834->g_755.sa, "p_834->g_755.sa", print_hash_value);
    transparent_crc(p_834->g_755.sb, "p_834->g_755.sb", print_hash_value);
    transparent_crc(p_834->g_755.sc, "p_834->g_755.sc", print_hash_value);
    transparent_crc(p_834->g_755.sd, "p_834->g_755.sd", print_hash_value);
    transparent_crc(p_834->g_755.se, "p_834->g_755.se", print_hash_value);
    transparent_crc(p_834->g_755.sf, "p_834->g_755.sf", print_hash_value);
    transparent_crc(p_834->g_766.s0, "p_834->g_766.s0", print_hash_value);
    transparent_crc(p_834->g_766.s1, "p_834->g_766.s1", print_hash_value);
    transparent_crc(p_834->g_766.s2, "p_834->g_766.s2", print_hash_value);
    transparent_crc(p_834->g_766.s3, "p_834->g_766.s3", print_hash_value);
    transparent_crc(p_834->g_766.s4, "p_834->g_766.s4", print_hash_value);
    transparent_crc(p_834->g_766.s5, "p_834->g_766.s5", print_hash_value);
    transparent_crc(p_834->g_766.s6, "p_834->g_766.s6", print_hash_value);
    transparent_crc(p_834->g_766.s7, "p_834->g_766.s7", print_hash_value);
    transparent_crc(p_834->g_766.s8, "p_834->g_766.s8", print_hash_value);
    transparent_crc(p_834->g_766.s9, "p_834->g_766.s9", print_hash_value);
    transparent_crc(p_834->g_766.sa, "p_834->g_766.sa", print_hash_value);
    transparent_crc(p_834->g_766.sb, "p_834->g_766.sb", print_hash_value);
    transparent_crc(p_834->g_766.sc, "p_834->g_766.sc", print_hash_value);
    transparent_crc(p_834->g_766.sd, "p_834->g_766.sd", print_hash_value);
    transparent_crc(p_834->g_766.se, "p_834->g_766.se", print_hash_value);
    transparent_crc(p_834->g_766.sf, "p_834->g_766.sf", print_hash_value);
    transparent_crc(p_834->g_767.s0, "p_834->g_767.s0", print_hash_value);
    transparent_crc(p_834->g_767.s1, "p_834->g_767.s1", print_hash_value);
    transparent_crc(p_834->g_767.s2, "p_834->g_767.s2", print_hash_value);
    transparent_crc(p_834->g_767.s3, "p_834->g_767.s3", print_hash_value);
    transparent_crc(p_834->g_767.s4, "p_834->g_767.s4", print_hash_value);
    transparent_crc(p_834->g_767.s5, "p_834->g_767.s5", print_hash_value);
    transparent_crc(p_834->g_767.s6, "p_834->g_767.s6", print_hash_value);
    transparent_crc(p_834->g_767.s7, "p_834->g_767.s7", print_hash_value);
    transparent_crc(p_834->g_767.s8, "p_834->g_767.s8", print_hash_value);
    transparent_crc(p_834->g_767.s9, "p_834->g_767.s9", print_hash_value);
    transparent_crc(p_834->g_767.sa, "p_834->g_767.sa", print_hash_value);
    transparent_crc(p_834->g_767.sb, "p_834->g_767.sb", print_hash_value);
    transparent_crc(p_834->g_767.sc, "p_834->g_767.sc", print_hash_value);
    transparent_crc(p_834->g_767.sd, "p_834->g_767.sd", print_hash_value);
    transparent_crc(p_834->g_767.se, "p_834->g_767.se", print_hash_value);
    transparent_crc(p_834->g_767.sf, "p_834->g_767.sf", print_hash_value);
    transparent_crc(p_834->g_771.x, "p_834->g_771.x", print_hash_value);
    transparent_crc(p_834->g_771.y, "p_834->g_771.y", print_hash_value);
    transparent_crc(p_834->g_783.s0, "p_834->g_783.s0", print_hash_value);
    transparent_crc(p_834->g_783.s1, "p_834->g_783.s1", print_hash_value);
    transparent_crc(p_834->g_783.s2, "p_834->g_783.s2", print_hash_value);
    transparent_crc(p_834->g_783.s3, "p_834->g_783.s3", print_hash_value);
    transparent_crc(p_834->g_783.s4, "p_834->g_783.s4", print_hash_value);
    transparent_crc(p_834->g_783.s5, "p_834->g_783.s5", print_hash_value);
    transparent_crc(p_834->g_783.s6, "p_834->g_783.s6", print_hash_value);
    transparent_crc(p_834->g_783.s7, "p_834->g_783.s7", print_hash_value);
    transparent_crc(p_834->g_783.s8, "p_834->g_783.s8", print_hash_value);
    transparent_crc(p_834->g_783.s9, "p_834->g_783.s9", print_hash_value);
    transparent_crc(p_834->g_783.sa, "p_834->g_783.sa", print_hash_value);
    transparent_crc(p_834->g_783.sb, "p_834->g_783.sb", print_hash_value);
    transparent_crc(p_834->g_783.sc, "p_834->g_783.sc", print_hash_value);
    transparent_crc(p_834->g_783.sd, "p_834->g_783.sd", print_hash_value);
    transparent_crc(p_834->g_783.se, "p_834->g_783.se", print_hash_value);
    transparent_crc(p_834->g_783.sf, "p_834->g_783.sf", print_hash_value);
    transparent_crc(p_834->g_816, "p_834->g_816", print_hash_value);
    transparent_crc(p_834->g_822.x, "p_834->g_822.x", print_hash_value);
    transparent_crc(p_834->g_822.y, "p_834->g_822.y", print_hash_value);
    transparent_crc(p_834->v_collective, "p_834->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 1; i++)
            transparent_crc(p_834->l_special_values[i], "p_834->l_special_values[i]", print_hash_value);
    transparent_crc(p_834->l_comm_values[get_linear_local_id()], "p_834->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_834->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()], "p_834->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
