// --atomics 33 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 52,85,1 -l 1,5,1
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

__constant uint32_t permutations[10][5] = {
{2,3,1,4,0}, // permutation 0
{4,0,2,3,1}, // permutation 1
{1,0,2,3,4}, // permutation 2
{3,0,1,4,2}, // permutation 3
{3,2,0,1,4}, // permutation 4
{1,4,3,2,0}, // permutation 5
{1,2,4,0,3}, // permutation 6
{4,2,0,3,1}, // permutation 7
{2,0,1,3,4}, // permutation 8
{1,2,4,3,0} // permutation 9
};

// Seed: 2044996959

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint8_t  f0;
};

struct S1 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4;
    int32_t g_5;
    int32_t g_8;
    int32_t g_13;
    uint64_t g_31;
    VECTOR(int32_t, 2) g_32;
    volatile VECTOR(uint16_t, 8) g_80;
    VECTOR(uint32_t, 8) g_86;
    int32_t g_98;
    int32_t g_107;
    VECTOR(uint16_t, 8) g_108;
    uint16_t * volatile g_138[3][7];
    int64_t g_147;
    volatile uint8_t g_148;
    int8_t g_154;
    int32_t *g_159;
    int32_t **g_158;
    int8_t g_165;
    VECTOR(uint8_t, 2) g_179;
    union U0 g_196;
    int16_t g_228[2];
    volatile VECTOR(uint16_t, 8) g_229;
    uint64_t *g_249;
    uint64_t **g_248;
    uint64_t *** volatile g_247;
    union U0 *g_252[4];
    union U0 ** volatile g_251;
    VECTOR(int8_t, 2) g_255;
    int64_t g_314;
    volatile uint8_t g_316;
    volatile VECTOR(uint16_t, 16) g_342;
    volatile VECTOR(int32_t, 8) g_360;
    volatile VECTOR(int32_t, 16) g_361;
    VECTOR(int8_t, 8) g_372;
    volatile VECTOR(uint32_t, 16) g_382;
    VECTOR(int64_t, 2) g_383;
    volatile uint16_t g_389;
    volatile uint16_t g_390;
    volatile uint16_t g_391;
    volatile uint16_t g_392[5];
    volatile uint16_t g_393[10][10];
    volatile uint16_t g_394;
    volatile uint16_t g_395;
    volatile uint16_t g_396;
    volatile uint16_t g_397;
    volatile uint16_t g_398;
    volatile uint16_t g_399;
    volatile uint16_t g_400;
    volatile uint16_t g_401;
    volatile uint16_t g_402;
    volatile uint16_t g_403;
    volatile uint16_t g_404;
    volatile uint16_t g_405;
    volatile uint16_t g_406;
    volatile uint16_t g_407;
    volatile uint16_t g_408;
    volatile uint16_t g_409;
    volatile uint16_t g_410;
    volatile uint16_t g_411;
    volatile uint16_t g_412;
    volatile uint16_t g_413;
    volatile uint16_t g_414[5];
    volatile uint16_t g_415;
    volatile uint16_t g_416;
    volatile uint16_t g_417;
    volatile uint16_t g_418[7][3];
    volatile uint16_t g_419;
    volatile uint16_t g_420;
    volatile uint16_t g_421;
    volatile uint16_t g_422;
    volatile uint16_t g_423;
    volatile uint16_t g_424;
    volatile uint16_t g_425[3];
    volatile uint16_t g_426;
    volatile uint16_t g_427;
    volatile uint16_t g_428;
    volatile uint16_t g_429;
    volatile uint16_t g_430;
    volatile uint16_t g_431;
    volatile uint16_t g_432;
    volatile uint16_t g_433;
    volatile uint16_t g_434;
    volatile uint16_t g_435;
    volatile uint16_t g_436;
    volatile uint16_t g_437;
    volatile uint16_t g_438;
    volatile uint16_t g_439;
    volatile uint16_t g_440;
    volatile uint16_t g_441;
    volatile uint16_t g_442;
    volatile uint16_t g_443;
    volatile uint16_t g_444;
    volatile uint16_t g_445;
    volatile uint16_t g_446;
    volatile uint16_t g_447;
    volatile uint16_t g_448;
    volatile uint16_t g_449;
    volatile uint16_t g_450;
    volatile uint16_t g_451;
    volatile uint16_t g_452;
    volatile uint16_t g_453;
    volatile uint16_t g_454;
    volatile uint16_t g_455;
    volatile uint16_t g_456;
    volatile uint16_t g_457;
    volatile uint16_t g_458;
    volatile uint16_t g_459;
    volatile uint16_t g_460;
    volatile uint16_t g_461;
    volatile uint16_t g_462;
    volatile uint16_t g_463;
    volatile uint16_t g_464;
    volatile uint16_t g_465[4];
    volatile uint16_t g_466;
    volatile uint16_t g_467;
    volatile VECTOR(uint16_t, 8) g_468;
    volatile uint16_t g_469;
    volatile uint16_t g_470;
    volatile uint16_t g_471;
    volatile uint16_t g_472[10][6][3];
    volatile uint16_t g_473[9][2][9];
    volatile uint16_t g_474;
    volatile uint16_t g_475;
    volatile uint16_t g_476;
    volatile uint16_t g_477;
    volatile uint16_t g_478;
    volatile uint16_t g_479;
    volatile uint16_t g_480;
    volatile uint16_t g_481;
    volatile uint16_t g_482;
    volatile uint16_t g_483;
    volatile uint16_t g_484;
    volatile uint16_t g_485[4][7][3];
    volatile uint16_t g_486[6][8][1];
    volatile uint16_t g_487[5][6][5];
    volatile uint16_t *g_388[4][6][10];
    int32_t * volatile g_555;
    int32_t g_572;
    volatile VECTOR(int32_t, 4) g_587;
    volatile int32_t g_589;
    int32_t * volatile g_593;
    VECTOR(int32_t, 16) g_594;
    uint64_t g_618;
    int32_t g_623;
    uint8_t g_649;
    VECTOR(uint8_t, 8) g_653;
    uint64_t g_668[5];
    volatile int8_t g_694;
    volatile int8_t *g_693[9][7][4];
    volatile int8_t ** volatile g_692;
    volatile int8_t ** volatile * volatile g_695;
    volatile int8_t ** volatile * volatile g_696;
    union U0 g_709;
    volatile VECTOR(int8_t, 16) g_749;
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
int32_t  func_1(struct S1 * p_782);
uint16_t  func_35(int64_t  p_36, uint64_t * p_37, int32_t * p_38, uint64_t  p_39, struct S1 * p_782);
int64_t  func_40(uint32_t  p_41, uint64_t * p_42, struct S1 * p_782);
int8_t  func_43(int32_t  p_44, struct S1 * p_782);
uint64_t * func_45(uint64_t * p_46, union U0  p_47, uint64_t * p_48, struct S1 * p_782);
union U0  func_51(uint64_t * p_52, uint64_t  p_53, int64_t  p_54, int64_t  p_55, union U0  p_56, struct S1 * p_782);
uint64_t * func_57(int32_t * p_58, uint16_t  p_59, int16_t  p_60, struct S1 * p_782);
uint8_t  func_61(int32_t  p_62, uint64_t * p_63, struct S1 * p_782);
int32_t  func_64(int32_t  p_65, int32_t * p_66, uint64_t * p_67, uint64_t * p_68, int32_t * p_69, struct S1 * p_782);
int32_t * func_75(uint64_t * p_76, int32_t  p_77, int32_t * p_78, uint64_t * p_79, struct S1 * p_782);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_782->g_5 p_782->g_8 p_782->g_13 p_782->l_comm_values p_782->g_2 p_782->g_32 p_782->g_comm_values p_782->g_4 p_782->g_31 p_782->g_98 p_782->g_138 p_782->g_86 p_782->g_148 p_782->g_154 p_782->g_158 p_782->g_165 p_782->g_179 p_782->g_159 p_782->g_80 p_782->g_108 p_782->g_196 p_782->g_107 p_782->g_316 p_782->g_251 p_782->g_252 p_782->g_342 p_782->g_248 p_782->g_249 p_782->g_147 p_782->g_360 p_782->g_361 p_782->g_372 p_782->g_382 p_782->g_383 p_782->g_388 p_782->g_441 p_782->g_466 p_782->g_314 p_782->g_555 p_782->g_468 p_782->g_572 p_782->g_465 p_782->g_587 p_782->g_589 p_782->g_593 p_782->g_594 p_782->g_425 p_782->g_450 p_782->g_623 p_782->g_653 p_782->g_389 p_782->g_247 p_782->g_692 p_782->g_696 p_782->g_464 p_782->g_649 p_782->g_414 p_782->g_396
 * writes: p_782->g_5 p_782->g_8 p_782->g_13 p_782->g_31 p_782->g_2 p_782->g_107 p_782->g_108 p_782->g_98 p_782->g_4 p_782->g_148 p_782->g_154 p_782->g_165 p_782->g_255 p_782->g_159 p_782->g_316 p_782->g_252 p_782->g_249 p_782->g_147 p_782->g_158 p_782->g_86 p_782->g_572 p_782->g_618 p_782->g_623 p_782->g_228 p_782->g_649 p_782->g_692 p_782->g_196 p_782->g_709 p_782->g_594
 */
int32_t  func_1(struct S1 * p_782)
{ /* block id: 4 */
    uint32_t l_19 = 0xE26C12A7L;
    union U0 l_50[4] = {{0x88L},{0x88L},{0x88L},{0x88L}};
    int i;
    for (p_782->g_5 = 0; (p_782->g_5 != 12); p_782->g_5 = safe_add_func_int64_t_s_s(p_782->g_5, 1))
    { /* block id: 7 */
        uint64_t *l_70 = &p_782->g_31;
        int32_t l_116 = 0x2AA01351L;
        for (p_782->g_8 = 0; (p_782->g_8 >= (-24)); p_782->g_8 = safe_sub_func_uint32_t_u_u(p_782->g_8, 4))
        { /* block id: 10 */
            int32_t *l_11 = (void*)0;
            int32_t *l_12 = &p_782->g_13;
            int32_t *l_14 = &p_782->g_13;
            int32_t l_15 = 0L;
            int32_t *l_16 = &l_15;
            int32_t *l_17 = &l_15;
            int32_t *l_18[9][2] = {{(void*)0,&p_782->g_5},{(void*)0,&p_782->g_5},{(void*)0,&p_782->g_5},{(void*)0,&p_782->g_5},{(void*)0,&p_782->g_5},{(void*)0,&p_782->g_5},{(void*)0,&p_782->g_5},{(void*)0,&p_782->g_5},{(void*)0,&p_782->g_5}};
            VECTOR(int32_t, 8) l_26 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 7L), 7L), 7L, 0L, 7L);
            VECTOR(int32_t, 16) l_27 = (VECTOR(int32_t, 16))(0x3CFCB8F1L, (VECTOR(int32_t, 4))(0x3CFCB8F1L, (VECTOR(int32_t, 2))(0x3CFCB8F1L, 0x3D2F5512L), 0x3D2F5512L), 0x3D2F5512L, 0x3CFCB8F1L, 0x3D2F5512L, (VECTOR(int32_t, 2))(0x3CFCB8F1L, 0x3D2F5512L), (VECTOR(int32_t, 2))(0x3CFCB8F1L, 0x3D2F5512L), 0x3CFCB8F1L, 0x3D2F5512L, 0x3CFCB8F1L, 0x3D2F5512L);
            union U0 l_49 = {0xBFL};
            uint64_t *l_667 = &p_782->g_668[4];
            uint64_t *l_669 = &p_782->g_668[4];
            int i, j;
            l_19--;
            for (p_782->g_13 = (-5); (p_782->g_13 < 3); ++p_782->g_13)
            { /* block id: 14 */
                uint64_t *l_30 = &p_782->g_31;
                uint8_t *l_114 = (void*)0;
                uint8_t *l_115 = &l_49.f0;
                int32_t l_195 = 0x5B5F2B71L;
                int32_t l_781 = 0x10779246L;
                l_781 &= (p_782->l_comm_values[(safe_mod_func_uint32_t_u_u(p_782->tid, 5))] >= (safe_rshift_func_int16_t_s_s((((VECTOR(int64_t, 8))(0x196E86FF18EE85ECL, 2L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_26.s3650)))).ywzxyxxxyxzyzzzy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_27.s6ed4bca9)).hi)).ywwzyzzxyzzzxwzz, ((VECTOR(int32_t, 8))(0x02095D7CL, 0x43F36FC7L, 1L, (safe_add_func_uint64_t_u_u(p_782->g_2, ((*l_30) = 8UL))), ((VECTOR(int32_t, 4))(p_782->g_32.yxyx)))).s4301063446375061))))).s6f, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(4294967289UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(1UL, 4294967295UL)))), 0x9E588CE3L)), 4294967290UL, (safe_sub_func_uint16_t_u_u(func_35(func_40((func_43(p_782->g_comm_values[p_782->tid], p_782) < ((((*p_782->g_248) = func_45(&p_782->g_31, ((l_50[0] = l_49) , (p_782->g_5 , func_51(func_57((((*l_115) = func_61(func_64(((p_782->g_4 > l_50[0].f0) & (-1L)), &p_782->g_8, l_70, &p_782->g_31, &p_782->g_5, p_782), l_70, p_782)) , (void*)0), l_19, l_116, p_782), l_116, p_782->g_comm_values[p_782->tid], l_195, p_782->g_196, p_782))), l_30, p_782)) == l_667) , 0x39L)), l_669, p_782), l_30, &l_15, p_782->g_653.s4, p_782), l_116)), ((VECTOR(uint32_t, 4))(4294967287UL)), 4294967286UL, 8UL, ((VECTOR(uint32_t, 4))(0x31448AD7L)))))).s58cb)).hi)).xyyyyyyy, ((VECTOR(uint32_t, 8))(0x512A7071L)), ((VECTOR(uint32_t, 8))(4294967292UL))))).odd)).yywzxxyywxyzyyww)).s16))).yxxx)), 1L, 0x7C08DF618F01D8E3L)).s5 ^ 0UL), 15)));
                return l_19;
            }
        }
    }
    return (*p_782->g_555);
}


/* ------------------------------------------ */
/* 
 * reads : p_782->g_572 p_782->g_464 p_782->g_555 p_782->g_98 p_782->g_247 p_782->g_248 p_782->g_31 p_782->g_649 p_782->g_594 p_782->g_13 p_782->g_159 p_782->g_653 p_782->g_5 p_782->g_158 p_782->g_414 p_782->g_108 p_782->g_396 p_782->g_138 p_782->g_8 p_782->g_comm_values p_782->g_86 p_782->g_148 p_782->g_154 p_782->g_4 p_782->g_165 p_782->g_80
 * writes: p_782->g_572 p_782->g_196 p_782->g_709 p_782->g_249 p_782->g_594 p_782->g_108 p_782->g_31 p_782->g_98 p_782->g_148 p_782->g_154 p_782->g_165 p_782->g_4 p_782->g_159
 */
uint16_t  func_35(int64_t  p_36, uint64_t * p_37, int32_t * p_38, uint64_t  p_39, struct S1 * p_782)
{ /* block id: 204 */
    union U0 l_706 = {0xFFL};
    int32_t l_723 = 2L;
    uint64_t *l_731 = &p_782->g_668[4];
    uint8_t *l_739 = (void*)0;
    uint8_t **l_738 = &l_739;
    uint8_t ***l_737[10][9][2] = {{{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738}},{{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738}},{{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738}},{{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738}},{{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738}},{{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738}},{{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738}},{{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738}},{{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738}},{{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738},{(void*)0,&l_738}}};
    uint64_t *l_740 = &p_782->g_668[4];
    VECTOR(uint64_t, 8) l_758 = (VECTOR(uint64_t, 8))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 0x7C3E29A08D7E968BL), 0x7C3E29A08D7E968BL), 0x7C3E29A08D7E968BL, 3UL, 0x7C3E29A08D7E968BL);
    VECTOR(uint16_t, 4) l_770 = (VECTOR(uint16_t, 4))(0x9735L, (VECTOR(uint16_t, 2))(0x9735L, 65535UL), 65535UL);
    union U0 ***l_780 = (void*)0;
    int i, j, k;
    for (p_782->g_572 = 0; (p_782->g_572 >= 29); ++p_782->g_572)
    { /* block id: 207 */
        uint8_t l_703 = 0xC5L;
        union U0 *l_707 = &p_782->g_196;
        union U0 *l_708 = &p_782->g_709;
        VECTOR(uint64_t, 16) l_712 = (VECTOR(uint64_t, 16))(0x64704F1270D2BE2BL, (VECTOR(uint64_t, 4))(0x64704F1270D2BE2BL, (VECTOR(uint64_t, 2))(0x64704F1270D2BE2BL, 0xAF97946888C6D6EAL), 0xAF97946888C6D6EAL), 0xAF97946888C6D6EAL, 0x64704F1270D2BE2BL, 0xAF97946888C6D6EAL, (VECTOR(uint64_t, 2))(0x64704F1270D2BE2BL, 0xAF97946888C6D6EAL), (VECTOR(uint64_t, 2))(0x64704F1270D2BE2BL, 0xAF97946888C6D6EAL), 0x64704F1270D2BE2BL, 0xAF97946888C6D6EAL, 0x64704F1270D2BE2BL, 0xAF97946888C6D6EAL);
        uint8_t *l_720 = (void*)0;
        uint8_t **l_719 = &l_720;
        uint8_t **l_722 = &l_720;
        uint8_t ***l_721 = &l_722;
        int16_t l_726 = 0x380EL;
        uint8_t ****l_736[6][10] = {{&l_721,&l_721,(void*)0,(void*)0,&l_721,(void*)0,(void*)0,&l_721,&l_721,&l_721},{&l_721,&l_721,(void*)0,(void*)0,&l_721,(void*)0,(void*)0,&l_721,&l_721,&l_721},{&l_721,&l_721,(void*)0,(void*)0,&l_721,(void*)0,(void*)0,&l_721,&l_721,&l_721},{&l_721,&l_721,(void*)0,(void*)0,&l_721,(void*)0,(void*)0,&l_721,&l_721,&l_721},{&l_721,&l_721,(void*)0,(void*)0,&l_721,(void*)0,(void*)0,&l_721,&l_721,&l_721},{&l_721,&l_721,(void*)0,(void*)0,&l_721,(void*)0,(void*)0,&l_721,&l_721,&l_721}};
        uint32_t *l_741 = (void*)0;
        uint8_t l_742 = 0UL;
        int32_t *l_754 = &p_782->g_5;
        int32_t *l_755[4][6];
        int32_t *l_761 = (void*)0;
        int32_t *l_762[1][4][8] = {{{&p_782->g_13,&p_782->g_572,&p_782->g_13,&p_782->g_13,&p_782->g_572,&p_782->g_13,&p_782->g_13,&p_782->g_572},{&p_782->g_13,&p_782->g_572,&p_782->g_13,&p_782->g_13,&p_782->g_572,&p_782->g_13,&p_782->g_13,&p_782->g_572},{&p_782->g_13,&p_782->g_572,&p_782->g_13,&p_782->g_13,&p_782->g_572,&p_782->g_13,&p_782->g_13,&p_782->g_572},{&p_782->g_13,&p_782->g_572,&p_782->g_13,&p_782->g_13,&p_782->g_572,&p_782->g_13,&p_782->g_13,&p_782->g_572}}};
        VECTOR(int8_t, 2) l_765 = (VECTOR(int8_t, 2))((-1L), 0x72L);
        uint16_t *l_779[6];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 6; j++)
                l_755[i][j] = (void*)0;
        }
        for (i = 0; i < 6; i++)
            l_779[i] = (void*)0;
        (*p_38) = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(l_703, (safe_mul_func_uint16_t_u_u(l_703, p_782->g_464)))), ((((*l_708) = (l_706 = ((*l_707) = l_706))) , (safe_mod_func_uint8_t_u_u(p_39, l_703))) & ((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 8))(l_712.s91b7dd39)).s2571464223464212, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(9UL, 0xEE4825C154EB16C8L, (p_782->g_668[4] ^= ((*p_37) |= ((!((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 0x1B275B76L)).yyyxxxyxyyyyxyxy)).sf5a8, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(1L, 0x4F7F250CL)), (int32_t)(safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(0x4BL, 6)) , l_719) != ((*l_721) = &l_720)), p_39)), p_36))))).xyyy))).y) || GROUP_DIVERGE(0, 1)))), ((VECTOR(uint64_t, 4))(18446744073709551615UL)), 0x7D490F0D7AFEF3C7L)).odd)).wwyzzzxxwyzzxwzx))).se))) & (-10L));
        (*p_38) = (l_723 <= (safe_lshift_func_int16_t_s_s(((*p_782->g_555) && (((void*)0 == p_38) , ((l_726 != (safe_add_func_int8_t_s_s((p_36 < ((safe_sub_func_int16_t_s_s(((p_38 != (l_741 = func_75(((**p_782->g_247) = l_731), (((((safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((((((l_737[8][6][1] = &l_722) == (void*)0) && (*p_37)) , 0x8CL) ^ 1L), p_782->g_649)), l_712.s6)) ^ p_39) , 6L) ^ FAKE_DIVERGE(p_782->local_2_offset, get_local_id(2), 10)) && 0x05C1A97D718C95B6L), p_38, l_740, p_782))) , p_39), p_782->g_594.sf)) ^ l_742)), p_782->g_13))) < FAKE_DIVERGE(p_782->group_1_offset, get_group_id(1), 10)))), 0)));
        p_782->g_594.se ^= ((safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(p_782->g_749.scda02312)).s3, ((~(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 8))((((++(*l_731)) || (safe_rshift_func_int16_t_s_u(((~(((((l_754 != (p_782->g_108.s0 , func_75(((*p_782->g_248) = (void*)0), (l_723 &= l_706.f0), (*p_782->g_158), (((p_39 > ((safe_rshift_func_int8_t_s_u((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_758.s50)))).hi && (safe_add_func_int64_t_s_s((~(0L >= (*p_38))), (~1L)))), p_782->g_108.s6)) != p_39)) < 0L) , p_37), p_782))) == p_39) == l_706.f0) != 2L) & l_758.s1)) | (-9L)), l_706.f0))) ^ p_36), l_758.s0, ((VECTOR(uint32_t, 2))(7UL)), 0UL, ((VECTOR(uint32_t, 2))(1UL)), 0UL)).s5144413440153265, ((VECTOR(uint32_t, 16))(0x94B29CD1L))))).sff)).yxyxyxyxxxxyxyxx, ((VECTOR(uint64_t, 16))(0x091679DD44367876L)), ((VECTOR(uint64_t, 16))(0xF9C61B267DF6A797L))))).sa , FAKE_DIVERGE(p_782->global_2_offset, get_global_id(2), 10))) > (*p_782->g_159)))), (-10L))), p_782->g_653.s3)) == (*l_754));
        (*p_782->g_158) = func_75(func_57((*p_782->g_158), (&p_782->g_251 != (((*p_37) = (safe_sub_func_uint32_t_u_u((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 2))(l_765.yy)).yyxyyxxx))).s70)).hi & l_758.s5), (safe_lshift_func_int8_t_s_s(((((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x68L, (-10L))).hi, p_782->g_414[1])) && ((VECTOR(uint16_t, 4))(l_770.xywz)).w) != (l_723 != (safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((*p_782->g_159), ((p_782->g_108.s4 &= (safe_mod_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(l_706.f0, 0x6B500B2FL)), (*p_37)))) ^ 0x3A2DL))), 6)))) && p_782->g_396), 5))))) , l_780)), p_36, p_782), p_36, p_38, l_740, p_782);
    }
    (*p_782->g_158) = &l_723;
    return p_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_782->g_31 p_782->g_555 p_782->g_98 p_782->g_692 p_782->g_696
 * writes: p_782->g_31 p_782->g_692
 */
int64_t  func_40(uint32_t  p_41, uint64_t * p_42, struct S1 * p_782)
{ /* block id: 195 */
    int8_t l_676[7][3][9] = {{{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L},{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L},{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L}},{{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L},{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L},{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L}},{{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L},{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L},{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L}},{{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L},{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L},{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L}},{{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L},{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L},{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L}},{{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L},{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L},{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L}},{{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L},{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L},{4L,0x2DL,6L,0x57L,0x7DL,4L,0x57L,(-1L),0x57L}}};
    int32_t l_685 = 8L;
    int32_t l_686 = (-4L);
    int32_t l_687 = 0L;
    uint32_t l_688 = 0x8B525169L;
    union U0 l_691[4][2][4] = {{{{0x98L},{3UL},{0x98L},{0x98L}},{{0x98L},{3UL},{0x98L},{0x98L}}},{{{0x98L},{3UL},{0x98L},{0x98L}},{{0x98L},{3UL},{0x98L},{0x98L}}},{{{0x98L},{3UL},{0x98L},{0x98L}},{{0x98L},{3UL},{0x98L},{0x98L}}},{{{0x98L},{3UL},{0x98L},{0x98L}},{{0x98L},{3UL},{0x98L},{0x98L}}}};
    int i, j, k;
    for (p_782->g_31 = 0; (p_782->g_31 > 54); ++p_782->g_31)
    { /* block id: 198 */
        int32_t *l_672 = &p_782->g_98;
        int32_t *l_673 = &p_782->g_98;
        int32_t *l_674 = &p_782->g_98;
        int32_t *l_675 = &p_782->g_572;
        int32_t *l_677 = &p_782->g_98;
        int32_t *l_678 = &p_782->g_572;
        int32_t *l_679 = &p_782->g_98;
        int32_t *l_680 = &p_782->g_98;
        int32_t *l_681 = (void*)0;
        int32_t *l_682 = &p_782->g_98;
        int32_t *l_683 = (void*)0;
        int32_t *l_684[9] = {&p_782->g_572,&p_782->g_572,&p_782->g_572,&p_782->g_572,&p_782->g_572,&p_782->g_572,&p_782->g_572,&p_782->g_572,&p_782->g_572};
        int i;
        if ((*p_782->g_555))
            break;
        l_688++;
        (*p_782->g_696) = (l_691[3][1][3] , (p_782->g_98 , p_782->g_692));
    }
    return p_41;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_43(int32_t  p_44, struct S1 * p_782)
{ /* block id: 16 */
    return p_44;
}


/* ------------------------------------------ */
/* 
 * reads : p_782->g_31 p_782->g_165 p_782->g_468 p_782->g_8 p_782->g_572 p_782->g_158 p_782->g_159 p_782->g_555 p_782->g_314 p_782->g_465 p_782->g_587 p_782->g_589 p_782->g_98 p_782->g_179 p_782->g_593 p_782->g_594 p_782->g_248 p_782->g_425 p_782->g_108 p_782->g_147 p_782->g_138 p_782->g_comm_values p_782->g_86 p_782->g_148 p_782->g_154 p_782->g_4 p_782->g_13 p_782->g_80 p_782->g_316 p_782->g_251 p_782->g_252 p_782->g_249 p_782->g_361 p_782->g_388 p_782->g_441 p_782->g_466 p_782->g_450 p_782->g_372 p_782->g_623 p_782->l_comm_values p_782->g_653 p_782->g_196 p_782->g_389 p_782->g_247
 * writes: p_782->g_31 p_782->g_165 p_782->g_98 p_782->g_572 p_782->g_147 p_782->g_249 p_782->g_107 p_782->g_154 p_782->g_255 p_782->g_148 p_782->g_4 p_782->g_159 p_782->g_316 p_782->g_252 p_782->g_108 p_782->g_158 p_782->g_86 p_782->g_618 p_782->g_623 p_782->g_228 p_782->g_649
 */
uint64_t * func_45(uint64_t * p_46, union U0  p_47, uint64_t * p_48, struct S1 * p_782)
{ /* block id: 161 */
    int8_t l_564 = 1L;
    uint8_t *l_570 = (void*)0;
    uint32_t *l_573 = (void*)0;
    VECTOR(int8_t, 4) l_576 = (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 1L), 1L);
    int32_t l_577 = 0x34D3ED25L;
    VECTOR(int16_t, 4) l_588 = (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), (-1L)), (-1L));
    int64_t *l_590 = (void*)0;
    int64_t *l_591 = &p_782->g_147;
    uint16_t l_612 = 0x82BCL;
    int32_t l_615 = 2L;
    union U0 l_616[6][4] = {{{0x78L},{0x78L},{0xC1L},{9UL}},{{0x78L},{0x78L},{0xC1L},{9UL}},{{0x78L},{0x78L},{0xC1L},{9UL}},{{0x78L},{0x78L},{0xC1L},{9UL}},{{0x78L},{0x78L},{0xC1L},{9UL}},{{0x78L},{0x78L},{0xC1L},{9UL}}};
    VECTOR(uint8_t, 16) l_624 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL, (VECTOR(uint8_t, 2))(255UL, 0UL), (VECTOR(uint8_t, 2))(255UL, 0UL), 255UL, 0UL, 255UL, 0UL);
    VECTOR(uint32_t, 4) l_634 = (VECTOR(uint32_t, 4))(0x997B6C1FL, (VECTOR(uint32_t, 2))(0x997B6C1FL, 8UL), 8UL);
    union U0 **l_663 = &p_782->g_252[0];
    uint8_t l_666 = 0xD9L;
    int i, j;
    for (p_782->g_31 = 0; (p_782->g_31 > 57); p_782->g_31 = safe_add_func_uint16_t_u_u(p_782->g_31, 4))
    { /* block id: 164 */
        int8_t *l_567 = (void*)0;
        int8_t *l_568 = &p_782->g_165;
        int32_t *l_569 = &p_782->g_98;
        int32_t *l_571 = &p_782->g_572;
        (*l_571) ^= (((safe_sub_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((*p_48), (*p_46))), ((+((((((l_564 > ((p_47.f0 < ((safe_add_func_int8_t_s_s(((void*)0 == l_567), (((*l_568) |= p_47.f0) && 0x3BL))) ^ ((*l_569) = (0x308B870F2B8F5A80L <= p_782->g_468.s5)))) , 0L)) != p_47.f0) < p_47.f0) & 0xC5F0BD47L) , (void*)0) != l_570)) > p_782->g_8))) <= 0xD5L) && l_564);
        if ((**p_782->g_158))
            continue;
    }
    atomic_min(&p_782->g_atomic_reduction[get_linear_group_id()], (p_782->g_555 != l_573));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_782->v_collective += p_782->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    l_577 = (p_782->g_314 & (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_576.xyywxwyzzwzyyywz)).s6, FAKE_DIVERGE(p_782->group_1_offset, get_group_id(1), 10))));
    if (((safe_unary_minus_func_int8_t_s(p_47.f0)) || (255UL > (safe_add_func_int16_t_s_s((-1L), (safe_div_func_int64_t_s_s(0x7D576A412FB81BEBL, ((safe_lshift_func_int8_t_s_s(p_782->g_465[0], 3)) , ((*l_591) = (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))((0UL != l_577), 0x316D5E4CL, ((VECTOR(int32_t, 2))((-7L), 0x75E8B3CFL)), ((VECTOR(int32_t, 4))(p_782->g_587.wxyz)))).s47, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(l_588.xzywzxwzwwwxwxzx)).s23, ((VECTOR(uint16_t, 4))(0x6D4FL, ((((l_588.y <= 0UL) && p_47.f0) | 0x7F17L) , p_782->g_589), 0x4802L, 0x39E8L)).hi))).yyxx, ((VECTOR(int32_t, 4))(1L))))).hi))))).xxyyxyyx, ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 8))((-1L)))))).hi)).even)), 0x724BA6ECL, (*p_782->g_555), p_47.f0, 0x0F945BE0L, 1L, (-1L))).s14))), 0x2289BCB4L, (-8L))).hi)).even, p_782->g_179.y)))))))))))
    { /* block id: 173 */
        uint64_t l_592 = 0xCC7A000A2CFEF732L;
        int16_t *l_613[3];
        int32_t l_614 = 0x2419F96DL;
        uint64_t *l_617 = &p_782->g_618;
        int32_t **l_619 = &p_782->g_159;
        int32_t *l_621 = &p_782->g_98;
        int32_t **l_620 = &l_621;
        VECTOR(int32_t, 8) l_622 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
        uint8_t **l_648 = &l_570;
        int i;
        for (i = 0; i < 3; i++)
            l_613[i] = &p_782->g_228[1];
        (*p_782->g_593) |= l_592;
        (*l_620) = ((*l_619) = func_75((((*l_617) = (((((VECTOR(int32_t, 8))(p_782->g_594.s71d5adb1)).s7 != (l_592 <= (safe_mul_func_uint8_t_u_u((func_51(((*p_782->g_248) = p_48), (8L >= (safe_div_func_uint64_t_u_u(((p_782->g_425[2] ^ (safe_div_func_int16_t_s_s((((l_576.w >= ((safe_add_func_int64_t_s_s(((l_615 = (+(p_47.f0 <= (!((((~(l_614 = (safe_unary_minus_func_uint16_t_u((0xBCA97DC431A0C447L > (safe_div_func_int64_t_s_s((l_577 = (safe_add_func_int8_t_s_s(p_47.f0, (safe_sub_func_uint32_t_u_u(l_576.w, p_47.f0))))), l_612))))))) || 0x55F3L) , p_47.f0) && p_782->g_594.s9))))) != p_782->g_108.s5), 0x1A1FC0179DA47F2AL)) >= GROUP_DIVERGE(0, 1))) <= 0L) <= l_592), p_47.f0))) <= 0x614DB638L), p_47.f0))), l_592, p_782->g_147, l_616[5][3], p_782) , p_782->g_450), p_782->g_372.s3)))) == 65533UL) == p_782->g_179.x)) , p_48), p_47.f0, l_573, l_591, p_782));
        (*l_620) = func_75(p_48, (~(((p_782->g_623 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_622.s7023304324235763)).s0b)).yxxxyyxx)).s7) , ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_624.s0d00)).yxwzwywywwxzywww)).s1) != ((safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((((safe_mod_func_int64_t_s_s((*l_621), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((p_47.f0 | (safe_unary_minus_func_uint64_t_u((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 2))(l_634.xy)).yxyx, ((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(0xE11E15A9L, ((VECTOR(uint32_t, 8))(4294967290UL, 0xA3D2BB2DL, (((((((safe_add_func_int16_t_s_s((p_782->g_649 = (((safe_sub_func_int16_t_s_s((p_782->g_228[1] = (1L && ((*l_591) = (18446744073709551612UL && (l_615 = ((safe_mod_func_int64_t_s_s((~(((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_int16_t_s((safe_div_func_uint64_t_u_u(4UL, l_577)))) >= (safe_lshift_func_uint16_t_u_s(l_576.z, 15))), (((*l_648) = l_570) != &p_782->g_316))) ^ l_576.z) && p_47.f0)), 0x4A885673E7C2F96DL)) ^ 0x43B93937L)))))), 0L)) > (*p_782->g_555)) != l_634.y)), 0UL)) && (*l_621)) , FAKE_DIVERGE(p_782->global_2_offset, get_global_id(2), 10)) > l_634.w) || p_782->g_465[0]) | 6L) ^ l_576.z), 1UL, GROUP_DIVERGE(2, 1), p_47.f0, 0x29A1E3D4L, 4294967294UL)), 4294967292UL, 4294967294UL, ((VECTOR(uint32_t, 4))(4294967295UL)), 0x89F4EBA3L)).sd9)), ((VECTOR(uint32_t, 2))(1UL))))).yyyy))).lo)), ((VECTOR(uint32_t, 2))(4294967292UL))))).lo, (*p_48)))))), (-5L), 0x671BC8AF7248E48BL, 1L)).odd)).lo)) | (*p_782->g_249)) && p_47.f0), 11)) < (*p_48)), p_782->l_comm_values[(safe_mod_func_uint32_t_u_u(p_782->tid, 5))])) < p_782->g_8))), (*p_782->g_158), (*p_782->g_248), p_782);
    }
    else
    { /* block id: 189 */
        uint64_t *l_650 = &p_782->g_31;
        int32_t l_654 = 0x323EFC84L;
        union U0 **l_662 = &p_782->g_252[3];
        union U0 ***l_661 = &l_662;
        (*p_782->g_158) = func_75(l_650, ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(p_782->g_653.s30)).even, l_654)) > 1UL), func_75(p_48, (safe_div_func_int32_t_s_s(((((safe_lshift_func_uint16_t_u_s((((*l_661) = &p_782->g_252[1]) == l_663), 4)) >= 0x534F98FDE571D56DL) ^ ((safe_sub_func_int8_t_s_s((-1L), (((!(((**l_663) , p_47.f0) < l_654)) <= l_624.s4) & l_666))) == p_782->g_389)) >= 1UL), 0x11DCE9DAL)), &l_654, (*p_782->g_248), p_782), (*p_782->g_248), p_782);
    }
    return (**p_782->g_247);
}


/* ------------------------------------------ */
/* 
 * reads : p_782->g_107 p_782->g_154 p_782->g_108 p_782->g_159 p_782->g_8 p_782->g_31 p_782->g_138 p_782->g_comm_values p_782->g_86 p_782->g_148 p_782->g_4 p_782->g_165 p_782->g_13 p_782->g_80 p_782->g_158 p_782->g_316 p_782->g_251 p_782->g_252 p_782->g_342 p_782->g_179 p_782->g_248 p_782->g_249 p_782->g_147 p_782->g_360 p_782->g_361 p_782->g_372 p_782->g_382 p_782->g_383 p_782->g_388 p_782->g_441 p_782->g_466 p_782->g_314 p_782->g_555
 * writes: p_782->g_107 p_782->g_154 p_782->g_165 p_782->g_255 p_782->g_31 p_782->g_98 p_782->g_148 p_782->g_4 p_782->g_159 p_782->g_316 p_782->g_252 p_782->g_249 p_782->g_147 p_782->g_108 p_782->g_158 p_782->g_86
 */
union U0  func_51(uint64_t * p_52, uint64_t  p_53, int64_t  p_54, int64_t  p_55, union U0  p_56, struct S1 * p_782)
{ /* block id: 69 */
    int32_t l_223[3][3][9] = {{{1L,0x509FD6BDL,0x5A4D1D7EL,(-10L),0x509FD6BDL,(-10L),0x5A4D1D7EL,0x509FD6BDL,1L},{1L,0x509FD6BDL,0x5A4D1D7EL,(-10L),0x509FD6BDL,(-10L),0x5A4D1D7EL,0x509FD6BDL,1L},{1L,0x509FD6BDL,0x5A4D1D7EL,(-10L),0x509FD6BDL,(-10L),0x5A4D1D7EL,0x509FD6BDL,1L}},{{1L,0x509FD6BDL,0x5A4D1D7EL,(-10L),0x509FD6BDL,(-10L),0x5A4D1D7EL,0x509FD6BDL,1L},{1L,0x509FD6BDL,0x5A4D1D7EL,(-10L),0x509FD6BDL,(-10L),0x5A4D1D7EL,0x509FD6BDL,1L},{1L,0x509FD6BDL,0x5A4D1D7EL,(-10L),0x509FD6BDL,(-10L),0x5A4D1D7EL,0x509FD6BDL,1L}},{{1L,0x509FD6BDL,0x5A4D1D7EL,(-10L),0x509FD6BDL,(-10L),0x5A4D1D7EL,0x509FD6BDL,1L},{1L,0x509FD6BDL,0x5A4D1D7EL,(-10L),0x509FD6BDL,(-10L),0x5A4D1D7EL,0x509FD6BDL,1L},{1L,0x509FD6BDL,0x5A4D1D7EL,(-10L),0x509FD6BDL,(-10L),0x5A4D1D7EL,0x509FD6BDL,1L}}};
    VECTOR(int8_t, 2) l_253 = (VECTOR(int8_t, 2))(3L, 0L);
    int64_t *l_275 = (void*)0;
    int32_t *l_290 = &p_782->g_8;
    int32_t l_312 = 0L;
    int32_t l_313[4][2][7] = {{{0x585B6192L,0x26FEAA3BL,0x0749B269L,0x26FEAA3BL,0x585B6192L,0x585B6192L,0x26FEAA3BL},{0x585B6192L,0x26FEAA3BL,0x0749B269L,0x26FEAA3BL,0x585B6192L,0x585B6192L,0x26FEAA3BL}},{{0x585B6192L,0x26FEAA3BL,0x0749B269L,0x26FEAA3BL,0x585B6192L,0x585B6192L,0x26FEAA3BL},{0x585B6192L,0x26FEAA3BL,0x0749B269L,0x26FEAA3BL,0x585B6192L,0x585B6192L,0x26FEAA3BL}},{{0x585B6192L,0x26FEAA3BL,0x0749B269L,0x26FEAA3BL,0x585B6192L,0x585B6192L,0x26FEAA3BL},{0x585B6192L,0x26FEAA3BL,0x0749B269L,0x26FEAA3BL,0x585B6192L,0x585B6192L,0x26FEAA3BL}},{{0x585B6192L,0x26FEAA3BL,0x0749B269L,0x26FEAA3BL,0x585B6192L,0x585B6192L,0x26FEAA3BL},{0x585B6192L,0x26FEAA3BL,0x0749B269L,0x26FEAA3BL,0x585B6192L,0x585B6192L,0x26FEAA3BL}}};
    VECTOR(int64_t, 8) l_343 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-8L)), (-8L)), (-8L), 1L, (-8L));
    VECTOR(uint32_t, 8) l_378 = (VECTOR(uint32_t, 8))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0xFD14A213L), 0xFD14A213L), 0xFD14A213L, 4294967294UL, 0xFD14A213L);
    VECTOR(int64_t, 16) l_385 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int64_t, 2))((-1L), 0L), (VECTOR(int64_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
    VECTOR(uint16_t, 4) l_542 = (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0UL), 0UL);
    VECTOR(uint16_t, 4) l_544 = (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0xE9ECL), 0xE9ECL);
    int i, j, k;
    for (p_782->g_107 = 2; (p_782->g_107 <= 28); p_782->g_107 = safe_add_func_uint16_t_u_u(p_782->g_107, 1))
    { /* block id: 72 */
        uint32_t l_214[6] = {0UL,4294967295UL,0UL,0UL,4294967295UL,0UL};
        VECTOR(uint16_t, 8) l_230 = (VECTOR(uint16_t, 8))(0xD787L, (VECTOR(uint16_t, 4))(0xD787L, (VECTOR(uint16_t, 2))(0xD787L, 0xC1CCL), 0xC1CCL), 0xC1CCL, 0xD787L, 0xC1CCL);
        uint64_t *l_245 = &p_782->g_31;
        uint64_t **l_244 = &l_245;
        VECTOR(int8_t, 8) l_254 = (VECTOR(int8_t, 8))(0x7BL, (VECTOR(int8_t, 4))(0x7BL, (VECTOR(int8_t, 2))(0x7BL, 4L), 4L), 4L, 0x7BL, 4L);
        int64_t *l_280 = (void*)0;
        int8_t *l_281 = (void*)0;
        int8_t *l_282 = &p_782->g_165;
        VECTOR(uint8_t, 2) l_289 = (VECTOR(uint8_t, 2))(0xA9L, 0xD1L);
        int32_t l_293 = 0x058AA30CL;
        int32_t l_294 = 0x4973A6B7L;
        int i;
        for (p_782->g_154 = 0; (p_782->g_154 > (-28)); p_782->g_154--)
        { /* block id: 75 */
            int32_t *l_201 = &p_782->g_98;
            int32_t *l_202 = &p_782->g_98;
            int32_t *l_203 = (void*)0;
            int32_t *l_204 = &p_782->g_98;
            int32_t *l_205 = (void*)0;
            int32_t *l_206 = &p_782->g_98;
            int32_t *l_207 = &p_782->g_98;
            int32_t *l_208 = (void*)0;
            int32_t *l_209 = &p_782->g_98;
            int32_t *l_210 = &p_782->g_98;
            int32_t *l_211 = &p_782->g_98;
            int32_t *l_212 = &p_782->g_98;
            int32_t *l_213[4];
            uint8_t *l_221 = &p_782->g_196.f0;
            int32_t l_222 = 0x240AD9BBL;
            int64_t *l_224 = &p_782->g_147;
            VECTOR(int32_t, 16) l_250 = (VECTOR(int32_t, 16))(0x55FC095FL, (VECTOR(int32_t, 4))(0x55FC095FL, (VECTOR(int32_t, 2))(0x55FC095FL, 5L), 5L), 5L, 0x55FC095FL, 5L, (VECTOR(int32_t, 2))(0x55FC095FL, 5L), (VECTOR(int32_t, 2))(0x55FC095FL, 5L), 0x55FC095FL, 5L, 0x55FC095FL, 5L);
            VECTOR(int8_t, 2) l_258 = (VECTOR(int8_t, 2))((-4L), 0x12L);
            VECTOR(int8_t, 8) l_259 = (VECTOR(int8_t, 8))(0x2DL, (VECTOR(int8_t, 4))(0x2DL, (VECTOR(int8_t, 2))(0x2DL, (-1L)), (-1L)), (-1L), 0x2DL, (-1L));
            VECTOR(int8_t, 2) l_260 = (VECTOR(int8_t, 2))(7L, 1L);
            uint64_t *l_269[7] = {&p_782->g_31,&p_782->g_31,&p_782->g_31,&p_782->g_31,&p_782->g_31,&p_782->g_31,&p_782->g_31};
            int i;
            for (i = 0; i < 4; i++)
                l_213[i] = &p_782->g_98;
            --l_214[1];
        }
        if ((atomic_inc(&p_782->l_atomic_input[18]) == 9))
        { /* block id: 93 */
            uint32_t l_270 = 0UL;
            int32_t l_272 = (-2L);
            int32_t *l_271 = &l_272;
            int16_t l_273[4] = {8L,8L,8L,8L};
            uint64_t l_274 = 5UL;
            int i;
            l_271 = (l_270 , (void*)0);
            l_274 &= l_273[3];
            unsigned int result = 0;
            result += l_270;
            result += l_272;
            int l_273_i0;
            for (l_273_i0 = 0; l_273_i0 < 4; l_273_i0++) {
                result += l_273[l_273_i0];
            }
            result += l_274;
            atomic_add(&p_782->l_special_values[18], result);
        }
        else
        { /* block id: 96 */
            (1 + 1);
        }
        l_294 &= (!(l_293 = (l_275 == ((!(((**l_244) = (safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((p_782->g_255.y = ((p_54 = (+p_56.f0)) , ((*l_282) = ((void*)0 != &p_52)))), (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(p_782->g_108.s0, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(3L, 0x5423L)).xyyx)).yyyzzwzy)).s7)), (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(l_289.xy)).lo, p_53)))))), l_223[0][2][1]))) != (!((VECTOR(int64_t, 2))(1L, 0x0102901A16205BE9L)).odd))) , func_57(l_290, ((safe_sub_func_int32_t_s_s((*p_782->g_159), 0x8363C87DL)) , p_54), p_53, p_782)))));
    }
    if ((**p_782->g_158))
    { /* block id: 106 */
        (*p_782->g_158) = l_290;
        if ((atomic_inc(&p_782->g_atomic_input[33 * get_linear_group_id() + 7]) == 9))
        { /* block id: 109 */
            int32_t l_295 = 0x0B69F1DDL;
            union U0 l_303 = {255UL};
            union U0 l_304 = {250UL};
            VECTOR(int32_t, 16) l_305 = (VECTOR(int32_t, 16))(0x7F8BC70DL, (VECTOR(int32_t, 4))(0x7F8BC70DL, (VECTOR(int32_t, 2))(0x7F8BC70DL, 0x336E18AEL), 0x336E18AEL), 0x336E18AEL, 0x7F8BC70DL, 0x336E18AEL, (VECTOR(int32_t, 2))(0x7F8BC70DL, 0x336E18AEL), (VECTOR(int32_t, 2))(0x7F8BC70DL, 0x336E18AEL), 0x7F8BC70DL, 0x336E18AEL, 0x7F8BC70DL, 0x336E18AEL);
            int32_t l_306 = 0x1E06772CL;
            int i;
            for (l_295 = 18; (l_295 < 24); l_295 = safe_add_func_uint64_t_u_u(l_295, 5))
            { /* block id: 112 */
                int32_t l_298 = 0x5E71E7B9L;
                for (l_298 = 0; (l_298 != (-29)); l_298 = safe_sub_func_uint32_t_u_u(l_298, 6))
                { /* block id: 115 */
                    VECTOR(int32_t, 4) l_301 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 1L), 1L);
                    uint64_t l_302 = 0x164FB9815F893153L;
                    int i;
                    l_302 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_301.wy)), 8L, (-1L))).y;
                }
            }
            l_306 = ((l_304 = l_303) , ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(0L, 7L)).xxxyxxyx, ((VECTOR(int32_t, 2))(l_305.sf8)).xyyyyxxy))).s4);
            unsigned int result = 0;
            result += l_295;
            result += l_303.f0;
            result += l_304.f0;
            result += l_305.sf;
            result += l_305.se;
            result += l_305.sd;
            result += l_305.sc;
            result += l_305.sb;
            result += l_305.sa;
            result += l_305.s9;
            result += l_305.s8;
            result += l_305.s7;
            result += l_305.s6;
            result += l_305.s5;
            result += l_305.s4;
            result += l_305.s3;
            result += l_305.s2;
            result += l_305.s1;
            result += l_305.s0;
            result += l_306;
            atomic_add(&p_782->g_special_values[33 * get_linear_group_id() + 7], result);
        }
        else
        { /* block id: 121 */
            (1 + 1);
        }
    }
    else
    { /* block id: 124 */
        int64_t l_307 = 6L;
        int32_t *l_308 = &p_782->g_98;
        int32_t *l_309 = &p_782->g_98;
        int32_t *l_310 = &p_782->g_98;
        int32_t *l_311[3];
        int32_t l_315 = 1L;
        int i;
        for (i = 0; i < 3; i++)
            l_311[i] = &p_782->g_98;
        p_782->g_316--;
    }
    for (p_55 = 0; (p_55 < 2); ++p_55)
    { /* block id: 129 */
        union U0 **l_321 = &p_782->g_252[3];
        int32_t l_324 = 0L;
        int32_t l_329 = 0x32D14FDDL;
        int32_t l_330 = 0x600134D5L;
        uint16_t l_331 = 3UL;
        VECTOR(uint8_t, 2) l_355 = (VECTOR(uint8_t, 2))(1UL, 1UL);
        VECTOR(uint32_t, 8) l_379 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), 4294967295UL, 0UL, 4294967295UL);
        VECTOR(uint32_t, 16) l_380 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x1DA54070L), 0x1DA54070L), 0x1DA54070L, 1UL, 0x1DA54070L, (VECTOR(uint32_t, 2))(1UL, 0x1DA54070L), (VECTOR(uint32_t, 2))(1UL, 0x1DA54070L), 1UL, 0x1DA54070L, 1UL, 0x1DA54070L);
        VECTOR(uint32_t, 16) l_381 = (VECTOR(uint32_t, 16))(0x852D7738L, (VECTOR(uint32_t, 4))(0x852D7738L, (VECTOR(uint32_t, 2))(0x852D7738L, 0x3ED0F104L), 0x3ED0F104L), 0x3ED0F104L, 0x852D7738L, 0x3ED0F104L, (VECTOR(uint32_t, 2))(0x852D7738L, 0x3ED0F104L), (VECTOR(uint32_t, 2))(0x852D7738L, 0x3ED0F104L), 0x852D7738L, 0x3ED0F104L, 0x852D7738L, 0x3ED0F104L);
        int i;
        (*l_321) = (*p_782->g_251);
        for (p_54 = 0; (p_54 <= (-16)); p_54 = safe_sub_func_uint64_t_u_u(p_54, 4))
        { /* block id: 133 */
            int32_t *l_325 = (void*)0;
            int32_t *l_326 = (void*)0;
            int32_t *l_327 = &l_313[2][1][4];
            int32_t *l_328[10][2][7] = {{{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0},{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0}},{{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0},{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0}},{{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0},{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0}},{{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0},{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0}},{{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0},{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0}},{{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0},{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0}},{{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0},{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0}},{{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0},{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0}},{{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0},{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0}},{{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0},{&p_782->g_8,&l_313[2][1][4],&p_782->g_98,&p_782->g_8,(void*)0,&p_782->g_5,(void*)0}}};
            uint64_t *l_350 = &p_782->g_31;
            int i, j, k;
            if (p_56.f0)
                break;
            l_331--;
            (*l_327) = (safe_mod_func_uint16_t_u_u((l_331 & (safe_lshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s(((FAKE_DIVERGE(p_782->global_1_offset, get_global_id(1), 10) || ((safe_add_func_uint32_t_u_u((FAKE_DIVERGE(p_782->local_1_offset, get_local_id(1), 10) < ((VECTOR(uint16_t, 2))(p_782->g_342.s62)).hi), ((((((VECTOR(int64_t, 2))(l_343.s26)).even || (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(8L, 4)), GROUP_DIVERGE(2, 1)))) | p_782->g_179.x) && (((p_782->g_179.x < (safe_div_func_uint32_t_u_u((l_350 == ((*p_782->g_248) = (*p_782->g_248))), (0x8FL || (safe_add_func_uint32_t_u_u((&p_52 == &p_52), p_782->g_8)))))) > 9L) >= l_331)) | p_56.f0))) , FAKE_DIVERGE(p_782->local_1_offset, get_local_id(1), 10))) , p_53), 1L)) , FAKE_DIVERGE(p_782->group_1_offset, get_group_id(1), 10)), p_782->g_147))), 0x3DDBL));
        }
        l_330 = 0x4D3EDCB5L;
        for (p_782->g_31 = (-17); (p_782->g_31 <= 9); p_782->g_31++)
        { /* block id: 142 */
            VECTOR(uint8_t, 16) l_356 = (VECTOR(uint8_t, 16))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 255UL), 255UL), 255UL, 248UL, 255UL, (VECTOR(uint8_t, 2))(248UL, 255UL), (VECTOR(uint8_t, 2))(248UL, 255UL), 248UL, 255UL, 248UL, 255UL);
            union U0 **l_359 = &p_782->g_252[3];
            VECTOR(int64_t, 4) l_384 = (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), (-4L)), (-4L));
            uint16_t *l_386[2];
            int32_t l_387 = 0x09CBB5FCL;
            int32_t l_488 = 0x28C79D10L;
            int i;
            for (i = 0; i < 2; i++)
                l_386[i] = &l_331;
            l_329 &= ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(0L, 1L, (-1L), ((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 8))(l_355.yyxxxxyx)).s2331653226743321))).seb)), ((VECTOR(uint8_t, 8))(l_356.s354cc953)).s52))))), 0xD6L, 0x60L)).y != (*l_290)) != (safe_sub_func_uint8_t_u_u(p_782->g_80.s2, l_356.sc))), 4L, 0L, 9L, 0x48016601L)).s7762624323274736, (int32_t)(l_359 != &p_782->g_252[3])))).even, ((VECTOR(int32_t, 2))(p_782->g_360.s22)).yxyxxxxy))).s72)).xyxx, ((VECTOR(int32_t, 2))(p_782->g_361.s6d)).yyxx))).w;
            if ((**p_782->g_158))
                continue;
            l_488 &= (((((((safe_sub_func_uint16_t_u_u((*l_290), (l_329 = (safe_sub_func_int8_t_s_s(((!248UL) ^ (((((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((p_782->g_361.s1 , (safe_sub_func_int8_t_s_s(p_54, (((0x3DL >= (-2L)) >= ((VECTOR(int8_t, 4))(p_782->g_372.s1010)).z) , (safe_unary_minus_func_int8_t_s((((((safe_add_func_uint16_t_u_u((l_387 = ((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(p_55, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 4))(l_378.s5070)).lo, ((VECTOR(uint32_t, 8))(l_379.s21023530)).s13))), 0xC994F669L, 0xAA59686BL)), ((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(1UL, 0UL)), ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4UL, 0x772A14C2L)).yxxyyxxy)).s2206225421642700, ((VECTOR(uint32_t, 2))(0UL, 4294967292UL)).yxyxxyyyxxyxyxxy, ((VECTOR(uint32_t, 16))(l_380.s84f2386890055906))))).even, ((VECTOR(uint32_t, 4))(l_381.s4939)).yywyyyxw))).s33, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_782->g_382.sbb)), 0x47262F44L, 0xDFCE9A92L)).odd))), 4294967295UL)).s1, (((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(p_782->g_383.xxyyxyxxxyxxyyyy)))).s1555, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_384.zwyzwwxzzzyxxxww)).se3)).yxxxyyxx, ((VECTOR(int64_t, 4))(l_385.s4352)).ywzyyyzw))), p_56.f0, 0L, 0x77B733B5EDC1AEA6L, 0x147374AF6C563D74L, 0x5CA3050FEF183300L, 0x7273532767FAD097L, 0x6E021A4C3B13D283L, 0L)).s94e5))).x > (p_56.f0 >= p_54)))) > 0xBECDL)), 65535UL)) , &l_331) != p_782->g_388[3][3][6]) < p_782->g_179.y) | GROUP_DIVERGE(1, 1)))))))) && (*l_290)), FAKE_DIVERGE(p_782->group_1_offset, get_group_id(1), 10))), (-2L))) , (void*)0) != &p_53) || p_782->g_441) || (*p_52))), p_54))))) <= l_355.x) & 0x73F9A14CL) >= l_381.sd) != 1L) < p_54) > p_782->g_86.s7);
        }
    }
    for (p_782->g_147 = 0; (p_782->g_147 >= (-4)); p_782->g_147 = safe_sub_func_int32_t_s_s(p_782->g_147, 1))
    { /* block id: 152 */
        uint16_t *l_497 = (void*)0;
        uint16_t *l_498 = (void*)0;
        uint16_t *l_499 = (void*)0;
        uint16_t *l_500 = (void*)0;
        uint16_t *l_501 = (void*)0;
        uint16_t *l_502 = (void*)0;
        uint16_t *l_503 = (void*)0;
        uint16_t *l_504 = (void*)0;
        uint16_t *l_505 = (void*)0;
        uint16_t *l_506 = (void*)0;
        uint16_t *l_507 = (void*)0;
        uint16_t *l_508 = (void*)0;
        uint16_t *l_509 = (void*)0;
        uint16_t *l_510 = (void*)0;
        uint16_t *l_511 = (void*)0;
        uint16_t *l_512 = (void*)0;
        uint16_t *l_513 = (void*)0;
        uint16_t *l_514 = (void*)0;
        uint16_t *l_515[9][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_516 = 0x66D57E6AL;
        int32_t ***l_521 = &p_782->g_158;
        VECTOR(uint16_t, 8) l_543 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x232EL), 0x232EL), 0x232EL, 65535UL, 0x232EL);
        uint32_t *l_551 = (void*)0;
        uint32_t *l_552[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t *l_553 = &l_516;
        int8_t *l_554 = &p_782->g_154;
        int i, j;
        (*p_782->g_555) = (safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_55, p_782->g_466)), (++p_782->g_108.s0))), (safe_lshift_func_uint8_t_u_s(((-1L) < (((*l_521) = &p_782->g_159) == (void*)0)), ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(((&p_782->g_249 == &p_52) && (((*l_554) = (safe_div_func_int8_t_s_s(((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((*l_290), (safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((*l_553) = (((!(safe_mod_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(l_542.wwzwyzxx)), ((VECTOR(uint16_t, 16))(l_543.s4322167537743446)).odd, ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_544.wy)).xxyxxxyy)).lo))).wzxwzzxw))).s2 , (p_782->g_86.s0 = (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(0xC67DL, 15)) == p_56.f0), 0xB588L)), p_782->g_314)))) == p_782->g_comm_values[p_782->tid]), (*l_290))) >= p_782->g_comm_values[p_782->tid]), p_782->g_179.x))) && (*p_52)) <= GROUP_DIVERGE(1, 1))), FAKE_DIVERGE(p_782->global_0_offset, get_global_id(0), 10))), p_56.f0)))), 0xB662316A3CB14CF6L)) <= 0x26DDE305L), 9UL))) && 0x74L)), 2UL)), 3)), 6)) > (*l_290))))));
    }
    return p_56;
}


/* ------------------------------------------ */
/* 
 * reads : p_782->g_31 p_782->g_138 p_782->g_8 p_782->g_comm_values p_782->g_86 p_782->g_148 p_782->g_154 p_782->g_158 p_782->g_4 p_782->g_165 p_782->g_13 p_782->g_179 p_782->g_32 p_782->g_159 p_782->g_80 p_782->g_108
 * writes: p_782->g_31 p_782->g_98 p_782->g_148 p_782->g_154 p_782->g_165 p_782->g_4
 */
uint64_t * func_57(int32_t * p_58, uint16_t  p_59, int16_t  p_60, struct S1 * p_782)
{ /* block id: 41 */
    uint64_t *l_119 = &p_782->g_31;
    uint16_t *l_134[3];
    int32_t *l_135 = &p_782->g_8;
    uint32_t l_139 = 0UL;
    int32_t l_140[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
    int32_t l_146 = 3L;
    uint8_t l_161 = 0x74L;
    VECTOR(uint16_t, 4) l_162 = (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 65535UL), 65535UL);
    int16_t l_182 = 0x209CL;
    int32_t l_186 = 0x4192606FL;
    VECTOR(int32_t, 8) l_193 = (VECTOR(int32_t, 8))(0x2AA5A505L, (VECTOR(int32_t, 4))(0x2AA5A505L, (VECTOR(int32_t, 2))(0x2AA5A505L, 0x74CB5015L), 0x74CB5015L), 0x74CB5015L, 0x2AA5A505L, 0x74CB5015L);
    int32_t *l_194 = &l_186;
    int i;
    for (i = 0; i < 3; i++)
        l_134[i] = (void*)0;
    p_782->g_98 = ((l_140[8] = (safe_lshift_func_int16_t_s_s((((++(*l_119)) ^ (safe_add_func_int8_t_s_s(((0x6A97DFE4B33A2C9EL < ((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_782->local_2_offset, get_local_id(2), 10), (safe_lshift_func_uint16_t_u_u((!(safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((((0x7AFFF8E3L ^ p_60) , l_134[2]) == l_134[1]) > ((void*)0 == l_135)), ((safe_div_func_uint16_t_u_u(((void*)0 == p_782->g_138[0][4]), p_60)) != (*l_135)))) | (*l_135)), (*l_135))), l_139))), 9)))) >= p_782->g_comm_values[p_782->tid])) > p_60), 0x32L))) && 0L), 4))) || p_782->g_86.s4);
    for (p_60 = 19; (p_60 == 26); p_60 = safe_add_func_uint32_t_u_u(p_60, 7))
    { /* block id: 47 */
        int32_t *l_143 = &l_140[3];
        int32_t *l_144 = &l_140[8];
        int32_t *l_145[8] = {&l_140[5],&l_140[5],&l_140[5],&l_140[5],&l_140[5],&l_140[5],&l_140[5],&l_140[5]};
        int8_t *l_153 = &p_782->g_154;
        VECTOR(uint16_t, 2) l_157 = (VECTOR(uint16_t, 2))(65535UL, 0xE5D1L);
        int32_t **l_160 = &l_135;
        union U0 l_163 = {0x52L};
        int8_t *l_164 = &p_782->g_165;
        VECTOR(int32_t, 8) l_170 = (VECTOR(int32_t, 8))(0x0EE48BECL, (VECTOR(int32_t, 4))(0x0EE48BECL, (VECTOR(int32_t, 2))(0x0EE48BECL, 0x266F28A5L), 0x266F28A5L), 0x266F28A5L, 0x0EE48BECL, 0x266F28A5L);
        uint32_t l_185 = 0xB0F5D29DL;
        int8_t *l_187 = (void*)0;
        int i;
        p_782->g_148++;
        (*l_143) = (p_60 && (safe_rshift_func_uint16_t_u_u(p_59, ((((*l_153) &= (-1L)) , ((((*l_164) = ((*l_153) = (((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 2))(0x73EBL, 65535UL)).xxyxyyxxyyxxxyxx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 8))(65535UL, ((VECTOR(uint16_t, 4))(0x9E70L, 3UL, 0UL, 1UL)), ((VECTOR(uint16_t, 2))(l_157.yx)).hi, 0xAD37L, 0x106FL)).s3123102153553517, ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 2))(65527UL, 0xEACBL)), ((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 4))((*l_135), (&l_143 == (l_160 = p_782->g_158)), 0UL, 65535UL)).zzxzzzxyxyxxxwxy, ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 16))(0xDFBFL, (~(l_161 = ((void*)0 != &p_59))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_162.wy)), 0x9DE4L, 0x2291L)), 1UL, ((VECTOR(uint16_t, 2))(65527UL, 1UL)), (((l_163 , 0xE7DEL) && (-3L)) == 0x470432E41012E1E6L), 65531UL, 0x95ABL, 65535UL, 1UL, 0UL, 1UL)).s04f4, ((VECTOR(uint16_t, 4))(0xF576L))))).zyzyzxyxyzyyyywz, ((VECTOR(uint16_t, 16))(0xF639L)))))))).s49, ((VECTOR(uint16_t, 2))(65527UL))))).yxyy, ((VECTOR(uint16_t, 4))(4UL)), ((VECTOR(uint16_t, 4))(0x35B8L))))), (uint16_t)p_60))).yxzywywzywxzxzyz)))))))).s2, 15)) != 0x154D3D32A36E6C8BL) >= p_782->g_4))) , 1UL) > (*l_143))) | 3L))));
        p_782->g_4 = (((safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((p_782->g_165 == ((l_170.s4 ^ p_60) || ((safe_div_func_uint8_t_u_u(((safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((*l_143) = ((*l_153) = (p_782->g_13 >= ((VECTOR(uint8_t, 16))(5UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_782->g_179.xyxy)).zyyzxxwyxxzxzwwz)).s29)), 0x97L, (p_782->g_32.y == (safe_add_func_uint8_t_u_u((l_182 == ((((*l_135) < p_60) > (~(safe_div_func_uint16_t_u_u(((p_59 ^ l_185) || (*l_135)), 0x7D21L)))) , p_782->g_154)), l_186))), ((VECTOR(uint8_t, 4))(0x35L)), 0x1BL, ((VECTOR(uint8_t, 4))(0x11L)), 255UL, 0x7BL)).s2))), (**l_160))), 3UL)), p_782->g_165)) > p_782->g_31), p_782->g_80.s3)) , p_782->g_108.s3))) < p_59) < p_59), (*l_135))), FAKE_DIVERGE(p_782->group_0_offset, get_group_id(0), 10))) , (*l_135)) == p_59);
        if ((atomic_inc(&p_782->l_atomic_input[16]) == 5))
        { /* block id: 59 */
            int8_t l_188 = 0x79L;
            VECTOR(int32_t, 16) l_189 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x040576B5L), 0x040576B5L), 0x040576B5L, (-10L), 0x040576B5L, (VECTOR(int32_t, 2))((-10L), 0x040576B5L), (VECTOR(int32_t, 2))((-10L), 0x040576B5L), (-10L), 0x040576B5L, (-10L), 0x040576B5L);
            uint32_t l_190 = 0x689637CCL;
            int32_t l_191 = 0x73393BE6L;
            uint64_t l_192[2];
            int i;
            for (i = 0; i < 2; i++)
                l_192[i] = 18446744073709551615UL;
            l_190 = (l_188 , ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))((-1L), 0L)), ((VECTOR(int32_t, 8))(l_189.s9dbca189)).s53))).hi);
            l_192[0] |= (l_191 = 0x428B2817L);
            unsigned int result = 0;
            result += l_188;
            result += l_189.sf;
            result += l_189.se;
            result += l_189.sd;
            result += l_189.sc;
            result += l_189.sb;
            result += l_189.sa;
            result += l_189.s9;
            result += l_189.s8;
            result += l_189.s7;
            result += l_189.s6;
            result += l_189.s5;
            result += l_189.s4;
            result += l_189.s3;
            result += l_189.s2;
            result += l_189.s1;
            result += l_189.s0;
            result += l_190;
            result += l_191;
            int l_192_i0;
            for (l_192_i0 = 0; l_192_i0 < 2; l_192_i0++) {
                result += l_192[l_192_i0];
            }
            atomic_add(&p_782->l_special_values[16], result);
        }
        else
        { /* block id: 63 */
            (1 + 1);
        }
    }
    (*l_194) = ((VECTOR(int32_t, 8))(l_193.s41010371)).s1;
    return l_119;
}


/* ------------------------------------------ */
/* 
 * reads : p_782->g_31 p_782->g_32 p_782->g_comm_values p_782->g_8 p_782->g_5 p_782->g_98 p_782->g_4
 * writes: p_782->g_31 p_782->g_2 p_782->g_107 p_782->g_108 p_782->g_98 p_782->g_4
 */
uint8_t  func_61(int32_t  p_62, uint64_t * p_63, struct S1 * p_782)
{ /* block id: 22 */
    uint8_t l_74 = 0x3FL;
    VECTOR(uint8_t, 2) l_81 = (VECTOR(uint8_t, 2))(1UL, 0UL);
    VECTOR(uint64_t, 2) l_89 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551613UL);
    int32_t *l_94[9][3] = {{&p_782->g_5,&p_782->g_5,&p_782->g_13},{&p_782->g_5,&p_782->g_5,&p_782->g_13},{&p_782->g_5,&p_782->g_5,&p_782->g_13},{&p_782->g_5,&p_782->g_5,&p_782->g_13},{&p_782->g_5,&p_782->g_5,&p_782->g_13},{&p_782->g_5,&p_782->g_5,&p_782->g_13},{&p_782->g_5,&p_782->g_5,&p_782->g_13},{&p_782->g_5,&p_782->g_5,&p_782->g_13},{&p_782->g_5,&p_782->g_5,&p_782->g_13}};
    int32_t *l_97 = &p_782->g_98;
    VECTOR(int32_t, 2) l_100 = (VECTOR(int32_t, 2))(0x205350A1L, (-6L));
    int i, j;
    for (p_782->g_31 = 0; (p_782->g_31 < 54); p_782->g_31 = safe_add_func_int8_t_s_s(p_782->g_31, 8))
    { /* block id: 25 */
        VECTOR(uint16_t, 16) l_82 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), 65535UL, 0UL, 65535UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), (VECTOR(uint16_t, 2))(0UL, 65535UL), 0UL, 65535UL, 0UL, 65535UL);
        VECTOR(int32_t, 4) l_83 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-5L)), (-5L));
        int32_t **l_95 = (void*)0;
        int32_t **l_96 = &l_94[1][0];
        int32_t *l_99[4][3][1] = {{{&p_782->g_8},{&p_782->g_8},{&p_782->g_8}},{{&p_782->g_8},{&p_782->g_8},{&p_782->g_8}},{{&p_782->g_8},{&p_782->g_8},{&p_782->g_8}},{{&p_782->g_8},{&p_782->g_8},{&p_782->g_8}}};
        uint8_t *l_106 = (void*)0;
        uint16_t *l_109 = (void*)0;
        uint16_t *l_110 = (void*)0;
        uint16_t *l_111 = (void*)0;
        uint16_t *l_112 = (void*)0;
        uint16_t *l_113 = (void*)0;
        int i, j, k;
        p_782->g_2 = ((l_74 , func_75(p_63, ((((((((((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 16))(p_782->g_80.s0337417666403147)).sab, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(0xEFL, 251UL, 0x2CL, 0xD4L)).hi)).yxxxxyxx)).s32, ((VECTOR(uint8_t, 8))(l_81.yyxyxyyy)).s30))), 9UL, 0x6EEDL)).zyzzzyzyyxxzwxwx)).sf78f)).xyxyzzww, ((VECTOR(uint16_t, 2))(0xCB34L, 0x3317L)).xxxyyxyy))).odd)).odd, ((VECTOR(uint16_t, 2))(65535UL, 0xA963L)))))))))).xxyy, ((VECTOR(uint16_t, 2))(l_82.sab)).xxyy))).zzxzwxzy, ((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 16))((((VECTOR(int32_t, 16))(l_83.xwzyxzxyxywxzwwy)).s3 & (l_100.y &= ((safe_add_func_uint32_t_u_u(4294967295UL, ((VECTOR(uint32_t, 8))(4294967291UL, ((VECTOR(uint32_t, 2))(p_782->g_86.s42)), (safe_lshift_func_int16_t_s_u(p_782->g_86.s6, 0)), ((VECTOR(uint32_t, 4))(((p_782->l_comm_values[(safe_mod_func_uint32_t_u_u(p_782->tid, 5))] < ((VECTOR(uint64_t, 16))(l_89.yyxyxyyyyxyyxyyx)).s2) & (safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s((((((VECTOR(uint16_t, 8))((p_782->g_32.y , p_782->g_8), 9UL, (((l_97 = ((*l_96) = l_94[1][0])) != (void*)0) , 65535UL), ((VECTOR(uint16_t, 2))(8UL)), 5UL, 0UL, 65529UL)).s1 , p_782->g_86.s0) , p_62) != p_62), 8UL)), 0x4DL))), FAKE_DIVERGE(p_782->group_2_offset, get_group_id(2), 10), 4294967291UL, 4294967288UL)))).s5)) | p_62))), 0UL, 65529UL, ((VECTOR(uint16_t, 4))(0x3C1EL)), ((VECTOR(uint16_t, 2))(1UL)), 0x0F19L, ((VECTOR(uint16_t, 4))(0x62A3L)), 0UL, 0xD449L)), ((VECTOR(uint16_t, 16))(1UL))))).lo))).s3 ^ p_782->g_32.x) != p_782->g_comm_values[p_782->tid]) , 0x3AAC2EC31A0A7665L) > p_782->g_32.y) , p_62) == 0x2F72L) != (-1L)) == (-1L)), &p_782->g_13, p_63, p_782)) != &p_782->g_8);
        p_782->g_98 = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((p_782->g_107 = 0x55L), 7)), (p_782->g_108.s3 = ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(65529UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(p_782->g_108.s75765051)).s62)).odd, 0xCBD7L, 65526UL)))).z)));
        if (p_782->g_8)
            break;
    }
    p_782->g_4 |= ((p_782->g_98 &= p_782->g_5) , p_62);
    return p_62;
}


/* ------------------------------------------ */
/* 
 * reads : p_782->g_31
 * writes:
 */
int32_t  func_64(int32_t  p_65, int32_t * p_66, uint64_t * p_67, uint64_t * p_68, int32_t * p_69, struct S1 * p_782)
{ /* block id: 19 */
    uint32_t l_71 = 0x864EA5F7L;
    l_71 = ((VECTOR(int32_t, 2))(4L, 0x6659E0EAL)).hi;
    return p_782->g_31;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_75(uint64_t * p_76, int32_t  p_77, int32_t * p_78, uint64_t * p_79, struct S1 * p_782)
{ /* block id: 29 */
    int32_t *l_101 = &p_782->g_98;
    return l_101;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[33];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 33; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[33];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 33; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[5];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 5; i++)
            l_comm_values[i] = 1;
    struct S1 c_783;
    struct S1* p_782 = &c_783;
    struct S1 c_784 = {
        (-6L), // p_782->g_2
        9L, // p_782->g_3
        0x14A2A4F4L, // p_782->g_4
        0x31D83293L, // p_782->g_5
        0x2D76715FL, // p_782->g_8
        0x5C660F7EL, // p_782->g_13
        0x4AD1532D49ACB085L, // p_782->g_31
        (VECTOR(int32_t, 2))(0x21241A59L, 0x4BAA6F4EL), // p_782->g_32
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL), 65535UL, 65535UL, 65535UL), // p_782->g_80
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x8A52A621L), 0x8A52A621L), 0x8A52A621L, 4294967295UL, 0x8A52A621L), // p_782->g_86
        (-1L), // p_782->g_98
        0x7BC845C4L, // p_782->g_107
        (VECTOR(uint16_t, 8))(0xBB67L, (VECTOR(uint16_t, 4))(0xBB67L, (VECTOR(uint16_t, 2))(0xBB67L, 1UL), 1UL), 1UL, 0xBB67L, 1UL), // p_782->g_108
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_782->g_138
        1L, // p_782->g_147
        0xA6L, // p_782->g_148
        0x5BL, // p_782->g_154
        &p_782->g_8, // p_782->g_159
        &p_782->g_159, // p_782->g_158
        0x25L, // p_782->g_165
        (VECTOR(uint8_t, 2))(1UL, 0xA9L), // p_782->g_179
        {255UL}, // p_782->g_196
        {0x61D1L,0x61D1L}, // p_782->g_228
        (VECTOR(uint16_t, 8))(0xB532L, (VECTOR(uint16_t, 4))(0xB532L, (VECTOR(uint16_t, 2))(0xB532L, 0xCD9CL), 0xCD9CL), 0xCD9CL, 0xB532L, 0xCD9CL), // p_782->g_229
        (void*)0, // p_782->g_249
        &p_782->g_249, // p_782->g_248
        &p_782->g_248, // p_782->g_247
        {&p_782->g_196,&p_782->g_196,&p_782->g_196,&p_782->g_196}, // p_782->g_252
        &p_782->g_252[3], // p_782->g_251
        (VECTOR(int8_t, 2))(7L, 3L), // p_782->g_255
        0L, // p_782->g_314
        0x4DL, // p_782->g_316
        (VECTOR(uint16_t, 16))(0x9CD1L, (VECTOR(uint16_t, 4))(0x9CD1L, (VECTOR(uint16_t, 2))(0x9CD1L, 0x7DEDL), 0x7DEDL), 0x7DEDL, 0x9CD1L, 0x7DEDL, (VECTOR(uint16_t, 2))(0x9CD1L, 0x7DEDL), (VECTOR(uint16_t, 2))(0x9CD1L, 0x7DEDL), 0x9CD1L, 0x7DEDL, 0x9CD1L, 0x7DEDL), // p_782->g_342
        (VECTOR(int32_t, 8))(0x43469EF6L, (VECTOR(int32_t, 4))(0x43469EF6L, (VECTOR(int32_t, 2))(0x43469EF6L, 0L), 0L), 0L, 0x43469EF6L, 0L), // p_782->g_360
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L)), // p_782->g_361
        (VECTOR(int8_t, 8))(0x2EL, (VECTOR(int8_t, 4))(0x2EL, (VECTOR(int8_t, 2))(0x2EL, (-1L)), (-1L)), (-1L), 0x2EL, (-1L)), // p_782->g_372
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint32_t, 2))(1UL, 0UL), (VECTOR(uint32_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL), // p_782->g_382
        (VECTOR(int64_t, 2))(0x5C451876132E1201L, 4L), // p_782->g_383
        1UL, // p_782->g_389
        7UL, // p_782->g_390
        65528UL, // p_782->g_391
        {0xC1A4L,0xC1A4L,0xC1A4L,0xC1A4L,0xC1A4L}, // p_782->g_392
        {{0xA6F3L,0xA6F3L,7UL,65534UL,65528UL,0xC2C9L,1UL,1UL,1UL,0xC2C9L},{0xA6F3L,0xA6F3L,7UL,65534UL,65528UL,0xC2C9L,1UL,1UL,1UL,0xC2C9L},{0xA6F3L,0xA6F3L,7UL,65534UL,65528UL,0xC2C9L,1UL,1UL,1UL,0xC2C9L},{0xA6F3L,0xA6F3L,7UL,65534UL,65528UL,0xC2C9L,1UL,1UL,1UL,0xC2C9L},{0xA6F3L,0xA6F3L,7UL,65534UL,65528UL,0xC2C9L,1UL,1UL,1UL,0xC2C9L},{0xA6F3L,0xA6F3L,7UL,65534UL,65528UL,0xC2C9L,1UL,1UL,1UL,0xC2C9L},{0xA6F3L,0xA6F3L,7UL,65534UL,65528UL,0xC2C9L,1UL,1UL,1UL,0xC2C9L},{0xA6F3L,0xA6F3L,7UL,65534UL,65528UL,0xC2C9L,1UL,1UL,1UL,0xC2C9L},{0xA6F3L,0xA6F3L,7UL,65534UL,65528UL,0xC2C9L,1UL,1UL,1UL,0xC2C9L},{0xA6F3L,0xA6F3L,7UL,65534UL,65528UL,0xC2C9L,1UL,1UL,1UL,0xC2C9L}}, // p_782->g_393
        1UL, // p_782->g_394
        0UL, // p_782->g_395
        65535UL, // p_782->g_396
        65535UL, // p_782->g_397
        65535UL, // p_782->g_398
        0x62D1L, // p_782->g_399
        1UL, // p_782->g_400
        1UL, // p_782->g_401
        0x9061L, // p_782->g_402
        0xFCADL, // p_782->g_403
        0x4EE7L, // p_782->g_404
        65534UL, // p_782->g_405
        0x5B49L, // p_782->g_406
        65535UL, // p_782->g_407
        0xA3DBL, // p_782->g_408
        8UL, // p_782->g_409
        0UL, // p_782->g_410
        0x3E8FL, // p_782->g_411
        0x2971L, // p_782->g_412
        9UL, // p_782->g_413
        {0x7FE5L,0x7FE5L,0x7FE5L,0x7FE5L,0x7FE5L}, // p_782->g_414
        65530UL, // p_782->g_415
        0UL, // p_782->g_416
        65528UL, // p_782->g_417
        {{0xF010L,1UL,0UL},{0xF010L,1UL,0UL},{0xF010L,1UL,0UL},{0xF010L,1UL,0UL},{0xF010L,1UL,0UL},{0xF010L,1UL,0UL},{0xF010L,1UL,0UL}}, // p_782->g_418
        65529UL, // p_782->g_419
        0xF919L, // p_782->g_420
        65529UL, // p_782->g_421
        0x6157L, // p_782->g_422
        65535UL, // p_782->g_423
        2UL, // p_782->g_424
        {0x83F9L,0x83F9L,0x83F9L}, // p_782->g_425
        0xEB14L, // p_782->g_426
        65535UL, // p_782->g_427
        0xD70AL, // p_782->g_428
        0x15E3L, // p_782->g_429
        0xC285L, // p_782->g_430
        0x821BL, // p_782->g_431
        0xA40DL, // p_782->g_432
        0xB7B4L, // p_782->g_433
        0xCAB8L, // p_782->g_434
        0UL, // p_782->g_435
        0x418BL, // p_782->g_436
        0x5648L, // p_782->g_437
        0xA9D9L, // p_782->g_438
        65533UL, // p_782->g_439
        0xE0A8L, // p_782->g_440
        65526UL, // p_782->g_441
        0xC4D5L, // p_782->g_442
        0xCA10L, // p_782->g_443
        65535UL, // p_782->g_444
        0x9E34L, // p_782->g_445
        0x22B7L, // p_782->g_446
        65534UL, // p_782->g_447
        0x11B8L, // p_782->g_448
        0xEE88L, // p_782->g_449
        0UL, // p_782->g_450
        8UL, // p_782->g_451
        3UL, // p_782->g_452
        1UL, // p_782->g_453
        0xF210L, // p_782->g_454
        5UL, // p_782->g_455
        0xAD79L, // p_782->g_456
        1UL, // p_782->g_457
        65535UL, // p_782->g_458
        1UL, // p_782->g_459
        0x3A4AL, // p_782->g_460
        3UL, // p_782->g_461
        0x7064L, // p_782->g_462
        65535UL, // p_782->g_463
        0UL, // p_782->g_464
        {0UL,0UL,0UL,0UL}, // p_782->g_465
        0xBB2DL, // p_782->g_466
        0x494BL, // p_782->g_467
        (VECTOR(uint16_t, 8))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0x76AEL), 0x76AEL), 0x76AEL, 65529UL, 0x76AEL), // p_782->g_468
        1UL, // p_782->g_469
        0x135AL, // p_782->g_470
        0xDD61L, // p_782->g_471
        {{{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL}},{{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL}},{{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL}},{{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL}},{{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL}},{{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL}},{{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL}},{{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL}},{{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL}},{{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL},{8UL,0xAFFFL,1UL}}}, // p_782->g_472
        {{{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL},{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL}},{{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL},{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL}},{{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL},{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL}},{{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL},{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL}},{{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL},{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL}},{{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL},{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL}},{{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL},{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL}},{{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL},{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL}},{{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL},{3UL,0UL,3UL,0xA1CCL,0x0975L,0x0975L,0xA1CCL,3UL,0UL}}}, // p_782->g_473
        0xD758L, // p_782->g_474
        0xCC29L, // p_782->g_475
        0x9ECEL, // p_782->g_476
        0x55FFL, // p_782->g_477
        2UL, // p_782->g_478
        0x4601L, // p_782->g_479
        0x9B92L, // p_782->g_480
        6UL, // p_782->g_481
        0UL, // p_782->g_482
        0UL, // p_782->g_483
        0x2727L, // p_782->g_484
        {{{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L}},{{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L}},{{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L}},{{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L},{0xCB71L,0x950FL,0xCB71L}}}, // p_782->g_485
        {{{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L}},{{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L}},{{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L}},{{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L}},{{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L}},{{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L},{0x5CB7L}}}, // p_782->g_486
        {{{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L}},{{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L}},{{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L}},{{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L}},{{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L},{0UL,0x4007L,0x490EL,0xB207L,0xEB21L}}}, // p_782->g_487
        {{{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436}},{{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436}},{{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436}},{{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436},{&p_782->g_421,&p_782->g_390,(void*)0,&p_782->g_427,(void*)0,&p_782->g_414[2],&p_782->g_466,(void*)0,&p_782->g_477,&p_782->g_436}}}, // p_782->g_388
        &p_782->g_98, // p_782->g_555
        0x33F0FBA2L, // p_782->g_572
        (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x4414A627L), 0x4414A627L), // p_782->g_587
        0x5EFAD6B3L, // p_782->g_589
        &p_782->g_572, // p_782->g_593
        (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x416E91AFL), 0x416E91AFL), 0x416E91AFL, (-8L), 0x416E91AFL, (VECTOR(int32_t, 2))((-8L), 0x416E91AFL), (VECTOR(int32_t, 2))((-8L), 0x416E91AFL), (-8L), 0x416E91AFL, (-8L), 0x416E91AFL), // p_782->g_594
        1UL, // p_782->g_618
        0x4FD5A5D8L, // p_782->g_623
        3UL, // p_782->g_649
        (VECTOR(uint8_t, 8))(0x8EL, (VECTOR(uint8_t, 4))(0x8EL, (VECTOR(uint8_t, 2))(0x8EL, 8UL), 8UL), 8UL, 0x8EL, 8UL), // p_782->g_653
        {0xAB07FD5C476055A2L,0xAB07FD5C476055A2L,0xAB07FD5C476055A2L,0xAB07FD5C476055A2L,0xAB07FD5C476055A2L}, // p_782->g_668
        0x70L, // p_782->g_694
        {{{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694}},{{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694}},{{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694}},{{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694}},{{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694}},{{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694}},{{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694}},{{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694}},{{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694},{(void*)0,&p_782->g_694,(void*)0,&p_782->g_694}}}, // p_782->g_693
        &p_782->g_693[0][6][2], // p_782->g_692
        (void*)0, // p_782->g_695
        &p_782->g_692, // p_782->g_696
        {0xB6L}, // p_782->g_709
        (VECTOR(int8_t, 16))(0x53L, (VECTOR(int8_t, 4))(0x53L, (VECTOR(int8_t, 2))(0x53L, 0L), 0L), 0L, 0x53L, 0L, (VECTOR(int8_t, 2))(0x53L, 0L), (VECTOR(int8_t, 2))(0x53L, 0L), 0x53L, 0L, 0x53L, 0L), // p_782->g_749
        0, // p_782->v_collective
        sequence_input[get_global_id(0)], // p_782->global_0_offset
        sequence_input[get_global_id(1)], // p_782->global_1_offset
        sequence_input[get_global_id(2)], // p_782->global_2_offset
        sequence_input[get_local_id(0)], // p_782->local_0_offset
        sequence_input[get_local_id(1)], // p_782->local_1_offset
        sequence_input[get_local_id(2)], // p_782->local_2_offset
        sequence_input[get_group_id(0)], // p_782->group_0_offset
        sequence_input[get_group_id(1)], // p_782->group_1_offset
        sequence_input[get_group_id(2)], // p_782->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 5)), permutations[0][get_linear_local_id()])), // p_782->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_783 = c_784;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_782);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_782->g_2, "p_782->g_2", print_hash_value);
    transparent_crc(p_782->g_3, "p_782->g_3", print_hash_value);
    transparent_crc(p_782->g_4, "p_782->g_4", print_hash_value);
    transparent_crc(p_782->g_5, "p_782->g_5", print_hash_value);
    transparent_crc(p_782->g_8, "p_782->g_8", print_hash_value);
    transparent_crc(p_782->g_13, "p_782->g_13", print_hash_value);
    transparent_crc(p_782->g_31, "p_782->g_31", print_hash_value);
    transparent_crc(p_782->g_32.x, "p_782->g_32.x", print_hash_value);
    transparent_crc(p_782->g_32.y, "p_782->g_32.y", print_hash_value);
    transparent_crc(p_782->g_80.s0, "p_782->g_80.s0", print_hash_value);
    transparent_crc(p_782->g_80.s1, "p_782->g_80.s1", print_hash_value);
    transparent_crc(p_782->g_80.s2, "p_782->g_80.s2", print_hash_value);
    transparent_crc(p_782->g_80.s3, "p_782->g_80.s3", print_hash_value);
    transparent_crc(p_782->g_80.s4, "p_782->g_80.s4", print_hash_value);
    transparent_crc(p_782->g_80.s5, "p_782->g_80.s5", print_hash_value);
    transparent_crc(p_782->g_80.s6, "p_782->g_80.s6", print_hash_value);
    transparent_crc(p_782->g_80.s7, "p_782->g_80.s7", print_hash_value);
    transparent_crc(p_782->g_86.s0, "p_782->g_86.s0", print_hash_value);
    transparent_crc(p_782->g_86.s1, "p_782->g_86.s1", print_hash_value);
    transparent_crc(p_782->g_86.s2, "p_782->g_86.s2", print_hash_value);
    transparent_crc(p_782->g_86.s3, "p_782->g_86.s3", print_hash_value);
    transparent_crc(p_782->g_86.s4, "p_782->g_86.s4", print_hash_value);
    transparent_crc(p_782->g_86.s5, "p_782->g_86.s5", print_hash_value);
    transparent_crc(p_782->g_86.s6, "p_782->g_86.s6", print_hash_value);
    transparent_crc(p_782->g_86.s7, "p_782->g_86.s7", print_hash_value);
    transparent_crc(p_782->g_98, "p_782->g_98", print_hash_value);
    transparent_crc(p_782->g_107, "p_782->g_107", print_hash_value);
    transparent_crc(p_782->g_108.s0, "p_782->g_108.s0", print_hash_value);
    transparent_crc(p_782->g_108.s1, "p_782->g_108.s1", print_hash_value);
    transparent_crc(p_782->g_108.s2, "p_782->g_108.s2", print_hash_value);
    transparent_crc(p_782->g_108.s3, "p_782->g_108.s3", print_hash_value);
    transparent_crc(p_782->g_108.s4, "p_782->g_108.s4", print_hash_value);
    transparent_crc(p_782->g_108.s5, "p_782->g_108.s5", print_hash_value);
    transparent_crc(p_782->g_108.s6, "p_782->g_108.s6", print_hash_value);
    transparent_crc(p_782->g_108.s7, "p_782->g_108.s7", print_hash_value);
    transparent_crc(p_782->g_147, "p_782->g_147", print_hash_value);
    transparent_crc(p_782->g_148, "p_782->g_148", print_hash_value);
    transparent_crc(p_782->g_154, "p_782->g_154", print_hash_value);
    transparent_crc(p_782->g_165, "p_782->g_165", print_hash_value);
    transparent_crc(p_782->g_179.x, "p_782->g_179.x", print_hash_value);
    transparent_crc(p_782->g_179.y, "p_782->g_179.y", print_hash_value);
    transparent_crc(p_782->g_196.f0, "p_782->g_196.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_782->g_228[i], "p_782->g_228[i]", print_hash_value);

    }
    transparent_crc(p_782->g_229.s0, "p_782->g_229.s0", print_hash_value);
    transparent_crc(p_782->g_229.s1, "p_782->g_229.s1", print_hash_value);
    transparent_crc(p_782->g_229.s2, "p_782->g_229.s2", print_hash_value);
    transparent_crc(p_782->g_229.s3, "p_782->g_229.s3", print_hash_value);
    transparent_crc(p_782->g_229.s4, "p_782->g_229.s4", print_hash_value);
    transparent_crc(p_782->g_229.s5, "p_782->g_229.s5", print_hash_value);
    transparent_crc(p_782->g_229.s6, "p_782->g_229.s6", print_hash_value);
    transparent_crc(p_782->g_229.s7, "p_782->g_229.s7", print_hash_value);
    transparent_crc(p_782->g_255.x, "p_782->g_255.x", print_hash_value);
    transparent_crc(p_782->g_255.y, "p_782->g_255.y", print_hash_value);
    transparent_crc(p_782->g_314, "p_782->g_314", print_hash_value);
    transparent_crc(p_782->g_316, "p_782->g_316", print_hash_value);
    transparent_crc(p_782->g_342.s0, "p_782->g_342.s0", print_hash_value);
    transparent_crc(p_782->g_342.s1, "p_782->g_342.s1", print_hash_value);
    transparent_crc(p_782->g_342.s2, "p_782->g_342.s2", print_hash_value);
    transparent_crc(p_782->g_342.s3, "p_782->g_342.s3", print_hash_value);
    transparent_crc(p_782->g_342.s4, "p_782->g_342.s4", print_hash_value);
    transparent_crc(p_782->g_342.s5, "p_782->g_342.s5", print_hash_value);
    transparent_crc(p_782->g_342.s6, "p_782->g_342.s6", print_hash_value);
    transparent_crc(p_782->g_342.s7, "p_782->g_342.s7", print_hash_value);
    transparent_crc(p_782->g_342.s8, "p_782->g_342.s8", print_hash_value);
    transparent_crc(p_782->g_342.s9, "p_782->g_342.s9", print_hash_value);
    transparent_crc(p_782->g_342.sa, "p_782->g_342.sa", print_hash_value);
    transparent_crc(p_782->g_342.sb, "p_782->g_342.sb", print_hash_value);
    transparent_crc(p_782->g_342.sc, "p_782->g_342.sc", print_hash_value);
    transparent_crc(p_782->g_342.sd, "p_782->g_342.sd", print_hash_value);
    transparent_crc(p_782->g_342.se, "p_782->g_342.se", print_hash_value);
    transparent_crc(p_782->g_342.sf, "p_782->g_342.sf", print_hash_value);
    transparent_crc(p_782->g_360.s0, "p_782->g_360.s0", print_hash_value);
    transparent_crc(p_782->g_360.s1, "p_782->g_360.s1", print_hash_value);
    transparent_crc(p_782->g_360.s2, "p_782->g_360.s2", print_hash_value);
    transparent_crc(p_782->g_360.s3, "p_782->g_360.s3", print_hash_value);
    transparent_crc(p_782->g_360.s4, "p_782->g_360.s4", print_hash_value);
    transparent_crc(p_782->g_360.s5, "p_782->g_360.s5", print_hash_value);
    transparent_crc(p_782->g_360.s6, "p_782->g_360.s6", print_hash_value);
    transparent_crc(p_782->g_360.s7, "p_782->g_360.s7", print_hash_value);
    transparent_crc(p_782->g_361.s0, "p_782->g_361.s0", print_hash_value);
    transparent_crc(p_782->g_361.s1, "p_782->g_361.s1", print_hash_value);
    transparent_crc(p_782->g_361.s2, "p_782->g_361.s2", print_hash_value);
    transparent_crc(p_782->g_361.s3, "p_782->g_361.s3", print_hash_value);
    transparent_crc(p_782->g_361.s4, "p_782->g_361.s4", print_hash_value);
    transparent_crc(p_782->g_361.s5, "p_782->g_361.s5", print_hash_value);
    transparent_crc(p_782->g_361.s6, "p_782->g_361.s6", print_hash_value);
    transparent_crc(p_782->g_361.s7, "p_782->g_361.s7", print_hash_value);
    transparent_crc(p_782->g_361.s8, "p_782->g_361.s8", print_hash_value);
    transparent_crc(p_782->g_361.s9, "p_782->g_361.s9", print_hash_value);
    transparent_crc(p_782->g_361.sa, "p_782->g_361.sa", print_hash_value);
    transparent_crc(p_782->g_361.sb, "p_782->g_361.sb", print_hash_value);
    transparent_crc(p_782->g_361.sc, "p_782->g_361.sc", print_hash_value);
    transparent_crc(p_782->g_361.sd, "p_782->g_361.sd", print_hash_value);
    transparent_crc(p_782->g_361.se, "p_782->g_361.se", print_hash_value);
    transparent_crc(p_782->g_361.sf, "p_782->g_361.sf", print_hash_value);
    transparent_crc(p_782->g_372.s0, "p_782->g_372.s0", print_hash_value);
    transparent_crc(p_782->g_372.s1, "p_782->g_372.s1", print_hash_value);
    transparent_crc(p_782->g_372.s2, "p_782->g_372.s2", print_hash_value);
    transparent_crc(p_782->g_372.s3, "p_782->g_372.s3", print_hash_value);
    transparent_crc(p_782->g_372.s4, "p_782->g_372.s4", print_hash_value);
    transparent_crc(p_782->g_372.s5, "p_782->g_372.s5", print_hash_value);
    transparent_crc(p_782->g_372.s6, "p_782->g_372.s6", print_hash_value);
    transparent_crc(p_782->g_372.s7, "p_782->g_372.s7", print_hash_value);
    transparent_crc(p_782->g_382.s0, "p_782->g_382.s0", print_hash_value);
    transparent_crc(p_782->g_382.s1, "p_782->g_382.s1", print_hash_value);
    transparent_crc(p_782->g_382.s2, "p_782->g_382.s2", print_hash_value);
    transparent_crc(p_782->g_382.s3, "p_782->g_382.s3", print_hash_value);
    transparent_crc(p_782->g_382.s4, "p_782->g_382.s4", print_hash_value);
    transparent_crc(p_782->g_382.s5, "p_782->g_382.s5", print_hash_value);
    transparent_crc(p_782->g_382.s6, "p_782->g_382.s6", print_hash_value);
    transparent_crc(p_782->g_382.s7, "p_782->g_382.s7", print_hash_value);
    transparent_crc(p_782->g_382.s8, "p_782->g_382.s8", print_hash_value);
    transparent_crc(p_782->g_382.s9, "p_782->g_382.s9", print_hash_value);
    transparent_crc(p_782->g_382.sa, "p_782->g_382.sa", print_hash_value);
    transparent_crc(p_782->g_382.sb, "p_782->g_382.sb", print_hash_value);
    transparent_crc(p_782->g_382.sc, "p_782->g_382.sc", print_hash_value);
    transparent_crc(p_782->g_382.sd, "p_782->g_382.sd", print_hash_value);
    transparent_crc(p_782->g_382.se, "p_782->g_382.se", print_hash_value);
    transparent_crc(p_782->g_382.sf, "p_782->g_382.sf", print_hash_value);
    transparent_crc(p_782->g_383.x, "p_782->g_383.x", print_hash_value);
    transparent_crc(p_782->g_383.y, "p_782->g_383.y", print_hash_value);
    transparent_crc(p_782->g_389, "p_782->g_389", print_hash_value);
    transparent_crc(p_782->g_390, "p_782->g_390", print_hash_value);
    transparent_crc(p_782->g_391, "p_782->g_391", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_782->g_392[i], "p_782->g_392[i]", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_782->g_393[i][j], "p_782->g_393[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_782->g_394, "p_782->g_394", print_hash_value);
    transparent_crc(p_782->g_395, "p_782->g_395", print_hash_value);
    transparent_crc(p_782->g_396, "p_782->g_396", print_hash_value);
    transparent_crc(p_782->g_397, "p_782->g_397", print_hash_value);
    transparent_crc(p_782->g_398, "p_782->g_398", print_hash_value);
    transparent_crc(p_782->g_399, "p_782->g_399", print_hash_value);
    transparent_crc(p_782->g_400, "p_782->g_400", print_hash_value);
    transparent_crc(p_782->g_401, "p_782->g_401", print_hash_value);
    transparent_crc(p_782->g_402, "p_782->g_402", print_hash_value);
    transparent_crc(p_782->g_403, "p_782->g_403", print_hash_value);
    transparent_crc(p_782->g_404, "p_782->g_404", print_hash_value);
    transparent_crc(p_782->g_405, "p_782->g_405", print_hash_value);
    transparent_crc(p_782->g_406, "p_782->g_406", print_hash_value);
    transparent_crc(p_782->g_407, "p_782->g_407", print_hash_value);
    transparent_crc(p_782->g_408, "p_782->g_408", print_hash_value);
    transparent_crc(p_782->g_409, "p_782->g_409", print_hash_value);
    transparent_crc(p_782->g_410, "p_782->g_410", print_hash_value);
    transparent_crc(p_782->g_411, "p_782->g_411", print_hash_value);
    transparent_crc(p_782->g_412, "p_782->g_412", print_hash_value);
    transparent_crc(p_782->g_413, "p_782->g_413", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_782->g_414[i], "p_782->g_414[i]", print_hash_value);

    }
    transparent_crc(p_782->g_415, "p_782->g_415", print_hash_value);
    transparent_crc(p_782->g_416, "p_782->g_416", print_hash_value);
    transparent_crc(p_782->g_417, "p_782->g_417", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_782->g_418[i][j], "p_782->g_418[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_782->g_419, "p_782->g_419", print_hash_value);
    transparent_crc(p_782->g_420, "p_782->g_420", print_hash_value);
    transparent_crc(p_782->g_421, "p_782->g_421", print_hash_value);
    transparent_crc(p_782->g_422, "p_782->g_422", print_hash_value);
    transparent_crc(p_782->g_423, "p_782->g_423", print_hash_value);
    transparent_crc(p_782->g_424, "p_782->g_424", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_782->g_425[i], "p_782->g_425[i]", print_hash_value);

    }
    transparent_crc(p_782->g_426, "p_782->g_426", print_hash_value);
    transparent_crc(p_782->g_427, "p_782->g_427", print_hash_value);
    transparent_crc(p_782->g_428, "p_782->g_428", print_hash_value);
    transparent_crc(p_782->g_429, "p_782->g_429", print_hash_value);
    transparent_crc(p_782->g_430, "p_782->g_430", print_hash_value);
    transparent_crc(p_782->g_431, "p_782->g_431", print_hash_value);
    transparent_crc(p_782->g_432, "p_782->g_432", print_hash_value);
    transparent_crc(p_782->g_433, "p_782->g_433", print_hash_value);
    transparent_crc(p_782->g_434, "p_782->g_434", print_hash_value);
    transparent_crc(p_782->g_435, "p_782->g_435", print_hash_value);
    transparent_crc(p_782->g_436, "p_782->g_436", print_hash_value);
    transparent_crc(p_782->g_437, "p_782->g_437", print_hash_value);
    transparent_crc(p_782->g_438, "p_782->g_438", print_hash_value);
    transparent_crc(p_782->g_439, "p_782->g_439", print_hash_value);
    transparent_crc(p_782->g_440, "p_782->g_440", print_hash_value);
    transparent_crc(p_782->g_441, "p_782->g_441", print_hash_value);
    transparent_crc(p_782->g_442, "p_782->g_442", print_hash_value);
    transparent_crc(p_782->g_443, "p_782->g_443", print_hash_value);
    transparent_crc(p_782->g_444, "p_782->g_444", print_hash_value);
    transparent_crc(p_782->g_445, "p_782->g_445", print_hash_value);
    transparent_crc(p_782->g_446, "p_782->g_446", print_hash_value);
    transparent_crc(p_782->g_447, "p_782->g_447", print_hash_value);
    transparent_crc(p_782->g_448, "p_782->g_448", print_hash_value);
    transparent_crc(p_782->g_449, "p_782->g_449", print_hash_value);
    transparent_crc(p_782->g_450, "p_782->g_450", print_hash_value);
    transparent_crc(p_782->g_451, "p_782->g_451", print_hash_value);
    transparent_crc(p_782->g_452, "p_782->g_452", print_hash_value);
    transparent_crc(p_782->g_453, "p_782->g_453", print_hash_value);
    transparent_crc(p_782->g_454, "p_782->g_454", print_hash_value);
    transparent_crc(p_782->g_455, "p_782->g_455", print_hash_value);
    transparent_crc(p_782->g_456, "p_782->g_456", print_hash_value);
    transparent_crc(p_782->g_457, "p_782->g_457", print_hash_value);
    transparent_crc(p_782->g_458, "p_782->g_458", print_hash_value);
    transparent_crc(p_782->g_459, "p_782->g_459", print_hash_value);
    transparent_crc(p_782->g_460, "p_782->g_460", print_hash_value);
    transparent_crc(p_782->g_461, "p_782->g_461", print_hash_value);
    transparent_crc(p_782->g_462, "p_782->g_462", print_hash_value);
    transparent_crc(p_782->g_463, "p_782->g_463", print_hash_value);
    transparent_crc(p_782->g_464, "p_782->g_464", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_782->g_465[i], "p_782->g_465[i]", print_hash_value);

    }
    transparent_crc(p_782->g_466, "p_782->g_466", print_hash_value);
    transparent_crc(p_782->g_467, "p_782->g_467", print_hash_value);
    transparent_crc(p_782->g_468.s0, "p_782->g_468.s0", print_hash_value);
    transparent_crc(p_782->g_468.s1, "p_782->g_468.s1", print_hash_value);
    transparent_crc(p_782->g_468.s2, "p_782->g_468.s2", print_hash_value);
    transparent_crc(p_782->g_468.s3, "p_782->g_468.s3", print_hash_value);
    transparent_crc(p_782->g_468.s4, "p_782->g_468.s4", print_hash_value);
    transparent_crc(p_782->g_468.s5, "p_782->g_468.s5", print_hash_value);
    transparent_crc(p_782->g_468.s6, "p_782->g_468.s6", print_hash_value);
    transparent_crc(p_782->g_468.s7, "p_782->g_468.s7", print_hash_value);
    transparent_crc(p_782->g_469, "p_782->g_469", print_hash_value);
    transparent_crc(p_782->g_470, "p_782->g_470", print_hash_value);
    transparent_crc(p_782->g_471, "p_782->g_471", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_782->g_472[i][j][k], "p_782->g_472[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_782->g_473[i][j][k], "p_782->g_473[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_782->g_474, "p_782->g_474", print_hash_value);
    transparent_crc(p_782->g_475, "p_782->g_475", print_hash_value);
    transparent_crc(p_782->g_476, "p_782->g_476", print_hash_value);
    transparent_crc(p_782->g_477, "p_782->g_477", print_hash_value);
    transparent_crc(p_782->g_478, "p_782->g_478", print_hash_value);
    transparent_crc(p_782->g_479, "p_782->g_479", print_hash_value);
    transparent_crc(p_782->g_480, "p_782->g_480", print_hash_value);
    transparent_crc(p_782->g_481, "p_782->g_481", print_hash_value);
    transparent_crc(p_782->g_482, "p_782->g_482", print_hash_value);
    transparent_crc(p_782->g_483, "p_782->g_483", print_hash_value);
    transparent_crc(p_782->g_484, "p_782->g_484", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_782->g_485[i][j][k], "p_782->g_485[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_782->g_486[i][j][k], "p_782->g_486[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_782->g_487[i][j][k], "p_782->g_487[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_782->g_572, "p_782->g_572", print_hash_value);
    transparent_crc(p_782->g_587.x, "p_782->g_587.x", print_hash_value);
    transparent_crc(p_782->g_587.y, "p_782->g_587.y", print_hash_value);
    transparent_crc(p_782->g_587.z, "p_782->g_587.z", print_hash_value);
    transparent_crc(p_782->g_587.w, "p_782->g_587.w", print_hash_value);
    transparent_crc(p_782->g_589, "p_782->g_589", print_hash_value);
    transparent_crc(p_782->g_594.s0, "p_782->g_594.s0", print_hash_value);
    transparent_crc(p_782->g_594.s1, "p_782->g_594.s1", print_hash_value);
    transparent_crc(p_782->g_594.s2, "p_782->g_594.s2", print_hash_value);
    transparent_crc(p_782->g_594.s3, "p_782->g_594.s3", print_hash_value);
    transparent_crc(p_782->g_594.s4, "p_782->g_594.s4", print_hash_value);
    transparent_crc(p_782->g_594.s5, "p_782->g_594.s5", print_hash_value);
    transparent_crc(p_782->g_594.s6, "p_782->g_594.s6", print_hash_value);
    transparent_crc(p_782->g_594.s7, "p_782->g_594.s7", print_hash_value);
    transparent_crc(p_782->g_594.s8, "p_782->g_594.s8", print_hash_value);
    transparent_crc(p_782->g_594.s9, "p_782->g_594.s9", print_hash_value);
    transparent_crc(p_782->g_594.sa, "p_782->g_594.sa", print_hash_value);
    transparent_crc(p_782->g_594.sb, "p_782->g_594.sb", print_hash_value);
    transparent_crc(p_782->g_594.sc, "p_782->g_594.sc", print_hash_value);
    transparent_crc(p_782->g_594.sd, "p_782->g_594.sd", print_hash_value);
    transparent_crc(p_782->g_594.se, "p_782->g_594.se", print_hash_value);
    transparent_crc(p_782->g_594.sf, "p_782->g_594.sf", print_hash_value);
    transparent_crc(p_782->g_618, "p_782->g_618", print_hash_value);
    transparent_crc(p_782->g_623, "p_782->g_623", print_hash_value);
    transparent_crc(p_782->g_649, "p_782->g_649", print_hash_value);
    transparent_crc(p_782->g_653.s0, "p_782->g_653.s0", print_hash_value);
    transparent_crc(p_782->g_653.s1, "p_782->g_653.s1", print_hash_value);
    transparent_crc(p_782->g_653.s2, "p_782->g_653.s2", print_hash_value);
    transparent_crc(p_782->g_653.s3, "p_782->g_653.s3", print_hash_value);
    transparent_crc(p_782->g_653.s4, "p_782->g_653.s4", print_hash_value);
    transparent_crc(p_782->g_653.s5, "p_782->g_653.s5", print_hash_value);
    transparent_crc(p_782->g_653.s6, "p_782->g_653.s6", print_hash_value);
    transparent_crc(p_782->g_653.s7, "p_782->g_653.s7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_782->g_668[i], "p_782->g_668[i]", print_hash_value);

    }
    transparent_crc(p_782->g_694, "p_782->g_694", print_hash_value);
    transparent_crc(p_782->g_709.f0, "p_782->g_709.f0", print_hash_value);
    transparent_crc(p_782->g_749.s0, "p_782->g_749.s0", print_hash_value);
    transparent_crc(p_782->g_749.s1, "p_782->g_749.s1", print_hash_value);
    transparent_crc(p_782->g_749.s2, "p_782->g_749.s2", print_hash_value);
    transparent_crc(p_782->g_749.s3, "p_782->g_749.s3", print_hash_value);
    transparent_crc(p_782->g_749.s4, "p_782->g_749.s4", print_hash_value);
    transparent_crc(p_782->g_749.s5, "p_782->g_749.s5", print_hash_value);
    transparent_crc(p_782->g_749.s6, "p_782->g_749.s6", print_hash_value);
    transparent_crc(p_782->g_749.s7, "p_782->g_749.s7", print_hash_value);
    transparent_crc(p_782->g_749.s8, "p_782->g_749.s8", print_hash_value);
    transparent_crc(p_782->g_749.s9, "p_782->g_749.s9", print_hash_value);
    transparent_crc(p_782->g_749.sa, "p_782->g_749.sa", print_hash_value);
    transparent_crc(p_782->g_749.sb, "p_782->g_749.sb", print_hash_value);
    transparent_crc(p_782->g_749.sc, "p_782->g_749.sc", print_hash_value);
    transparent_crc(p_782->g_749.sd, "p_782->g_749.sd", print_hash_value);
    transparent_crc(p_782->g_749.se, "p_782->g_749.se", print_hash_value);
    transparent_crc(p_782->g_749.sf, "p_782->g_749.sf", print_hash_value);
    transparent_crc(p_782->v_collective, "p_782->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 33; i++)
            transparent_crc(p_782->g_special_values[i + 33 * get_linear_group_id()], "p_782->g_special_values[i + 33 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 33; i++)
            transparent_crc(p_782->l_special_values[i], "p_782->l_special_values[i]", print_hash_value);
    transparent_crc(p_782->l_comm_values[get_linear_local_id()], "p_782->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_782->g_comm_values[get_linear_group_id() * 5 + get_linear_local_id()], "p_782->g_comm_values[get_linear_group_id() * 5 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
