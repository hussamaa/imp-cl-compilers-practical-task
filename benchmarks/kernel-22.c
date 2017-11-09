// --atomics 99 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 86,68,1 -l 1,17,1
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

__constant uint32_t permutations[10][17] = {
{16,0,5,15,14,6,8,9,11,7,4,13,1,2,3,12,10}, // permutation 0
{12,7,11,4,14,3,13,9,1,0,2,5,8,6,16,10,15}, // permutation 1
{12,16,0,3,6,1,5,11,8,9,4,7,14,2,10,15,13}, // permutation 2
{2,10,14,1,13,8,11,15,16,0,9,6,3,7,5,12,4}, // permutation 3
{1,5,9,10,6,4,2,3,12,16,8,15,7,11,0,14,13}, // permutation 4
{7,6,9,8,16,15,12,11,1,5,0,3,14,10,13,2,4}, // permutation 5
{1,4,9,5,3,16,15,12,0,7,10,13,2,6,14,8,11}, // permutation 6
{10,12,14,11,6,15,2,4,3,5,1,0,7,8,16,13,9}, // permutation 7
{15,0,11,14,1,8,3,2,13,6,4,12,5,16,7,9,10}, // permutation 8
{3,7,4,11,10,12,14,15,9,2,1,16,6,13,0,5,8} // permutation 9
};

// Seed: 656040246

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   volatile int64_t  f1;
   volatile int32_t  f2;
   volatile int32_t  f3;
};

union U1 {
   int32_t  f0;
   volatile int8_t * f1;
   volatile int8_t * f2;
   int8_t  f3;
   int8_t  f4;
};

union U2 {
   uint32_t  f0;
};

struct S3 {
    volatile int32_t g_2;
    volatile int32_t g_3[7][7];
    int32_t g_4;
    volatile VECTOR(int32_t, 8) g_7;
    VECTOR(int64_t, 2) g_11;
    VECTOR(int64_t, 8) g_12;
    volatile VECTOR(int64_t, 8) g_13;
    int8_t g_23;
    int16_t g_24[9];
    uint32_t g_26;
    uint8_t g_29;
    int32_t g_31;
    struct S0 g_37;
    struct S0 * volatile g_38[10][5];
    struct S0 * volatile g_39;
    int8_t *g_91;
    int8_t **g_90;
    int32_t g_156;
    VECTOR(uint8_t, 2) g_161;
    uint8_t g_163;
    uint64_t g_165;
    volatile struct S0 *g_175;
    volatile struct S0 ** volatile g_174[1][9][10];
    volatile struct S0 ** volatile * volatile g_173;
    int32_t *g_186;
    int32_t ** volatile g_185;
    int64_t g_189;
    VECTOR(uint8_t, 16) g_192;
    VECTOR(int32_t, 4) g_198;
    volatile struct S0 ** volatile *g_204;
    struct S0 g_268;
    union U1 g_271;
    volatile struct S0 g_275;
    int16_t g_286;
    volatile VECTOR(int8_t, 8) g_301;
    VECTOR(int8_t, 2) g_311;
    volatile VECTOR(int8_t, 8) g_321;
    volatile VECTOR(int8_t, 4) g_322;
    VECTOR(int8_t, 2) g_323;
    uint32_t g_334;
    uint32_t *g_333;
    uint32_t **g_332;
    VECTOR(uint16_t, 4) g_366;
    struct S0 g_370[10];
    struct S0 g_371;
    VECTOR(uint32_t, 8) g_381;
    union U2 g_410;
    volatile VECTOR(int8_t, 4) g_424;
    VECTOR(int16_t, 8) g_425;
    VECTOR(int16_t, 16) g_427;
    int8_t g_436;
    int64_t *g_439;
    volatile int64_t g_441;
    volatile int64_t *g_440;
    struct S0 g_442;
    struct S0 g_444;
    VECTOR(int8_t, 2) g_453;
    volatile VECTOR(int8_t, 16) g_456;
    VECTOR(int8_t, 2) g_464;
    VECTOR(int8_t, 8) g_465;
    int32_t g_528;
    VECTOR(uint8_t, 8) g_540;
    volatile VECTOR(uint8_t, 16) g_541;
    VECTOR(uint8_t, 16) g_542;
    int32_t g_550;
    VECTOR(uint8_t, 2) g_563;
    volatile VECTOR(int8_t, 4) g_589;
    int32_t **g_596;
    int32_t ***g_595;
    struct S0 g_601;
    struct S0 * volatile g_602;
    volatile struct S0 g_603;
    struct S0 **g_615;
    struct S0 *** volatile g_614;
    struct S0 g_629;
    uint64_t g_659[2];
    struct S0 g_706;
    struct S0 * volatile g_707;
    volatile VECTOR(int32_t, 8) g_747;
    VECTOR(uint64_t, 8) g_769;
    VECTOR(int64_t, 8) g_774;
    volatile VECTOR(uint32_t, 8) g_775;
    VECTOR(uint64_t, 8) g_776;
    VECTOR(int16_t, 2) g_952;
    VECTOR(int32_t, 8) g_963;
    volatile VECTOR(int8_t, 8) g_965;
    VECTOR(int32_t, 2) g_971;
    struct S0 g_981;
    struct S0 g_982;
    struct S0 g_1003;
    struct S0 g_1004;
    int64_t *g_1039;
    int64_t * volatile *g_1038;
    VECTOR(int8_t, 2) g_1044;
    VECTOR(int8_t, 8) g_1049;
    VECTOR(int8_t, 16) g_1052;
    volatile VECTOR(int32_t, 8) g_1070;
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
int32_t  func_1(struct S3 * p_1082);
uint16_t  func_17(int8_t * p_18, int8_t * p_19, int64_t  p_20, struct S3 * p_1082);
int32_t * func_34(int32_t * p_35, struct S3 * p_1082);
int8_t ** func_63(int8_t ** p_64, int8_t  p_65, int32_t * p_66, int8_t * p_67, struct S3 * p_1082);
union U1  func_71(struct S0 * p_72, int8_t  p_73, int64_t  p_74, struct S3 * p_1082);
struct S0 * func_75(int8_t ** p_76, struct S3 * p_1082);
int8_t ** func_77(uint64_t  p_78, struct S0 * p_79, struct S3 * p_1082);
uint64_t  func_80(struct S0 * p_81, int8_t * p_82, int8_t  p_83, struct S3 * p_1082);
struct S0 * func_84(int8_t ** p_85, uint8_t  p_86, union U1  p_87, struct S3 * p_1082);
int8_t ** func_88(int8_t * p_89, struct S3 * p_1082);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1082->g_4 p_1082->g_37 p_1082->g_39 p_1082->g_596 p_1082->g_185 p_1082->g_186 p_1082->g_444.f0 p_1082->g_550 p_1082->g_332 p_1082->g_333 p_1082->g_334 p_1082->g_453 p_1082->g_952 p_1082->g_23 p_1082->g_192 p_1082->g_464 p_1082->g_comm_values p_1082->g_31 p_1082->g_776 p_1082->g_161 p_1082->g_629.f0 p_1082->g_189 p_1082->g_963 p_1082->g_965 p_1082->g_659 p_1082->g_11 p_1082->g_971 p_1082->g_163 p_1082->g_774 p_1082->g_13 p_1082->g_706.f0 p_1082->g_427 p_1082->g_156 p_1082->g_707 p_1082->g_444 p_1082->g_982 p_1082->g_323 p_1082->g_542 p_1082->g_1003 p_1082->g_198 p_1082->g_595 p_1082->g_286 p_1082->g_442.f0 p_1082->g_629.f2 p_1082->g_1038 p_1082->g_268.f3 p_1082->g_1044 p_1082->g_1049 p_1082->g_1052 p_1082->g_165 p_1082->g_24 p_1082->g_1070 p_1082->g_440 p_1082->g_441 p_1082->g_301
 * writes: p_1082->g_4 p_1082->g_31 p_1082->g_26 p_1082->g_37 p_1082->g_29 p_1082->g_186 p_1082->g_24 p_1082->g_427 p_1082->g_163 p_1082->g_334 p_1082->g_156 p_1082->g_981 p_1082->g_444 p_1082->g_1004 p_1082->g_286 p_1082->g_271.f0
 */
int32_t  func_1(struct S3 * p_1082)
{ /* block id: 4 */
    VECTOR(int64_t, 2) l_10 = (VECTOR(int64_t, 2))((-2L), 0x13F6A08376FBFCC0L);
    int64_t l_21 = (-1L);
    int8_t *l_22 = &p_1082->g_23;
    int32_t *l_36 = (void*)0;
    uint32_t l_958 = 1UL;
    int32_t l_962 = 0x2139F47AL;
    VECTOR(int32_t, 8) l_970 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 1L), 1L), 1L, (-9L), 1L);
    uint32_t l_996 = 0x4E4FA8F2L;
    uint64_t l_1001 = 0x098C61458CCCC203L;
    VECTOR(int8_t, 4) l_1047 = (VECTOR(int8_t, 4))(0x49L, (VECTOR(int8_t, 2))(0x49L, 0L), 0L);
    int32_t **l_1073 = (void*)0;
    int32_t **l_1074 = &l_36;
    VECTOR(int32_t, 4) l_1077 = (VECTOR(int32_t, 4))(0x37FD0CC0L, (VECTOR(int32_t, 2))(0x37FD0CC0L, 1L), 1L);
    int64_t l_1080 = 0x7DECAACFB5E3452BL;
    int32_t *l_1081 = &p_1082->g_271.f0;
    int i;
    for (p_1082->g_4 = (-12); (p_1082->g_4 == 29); ++p_1082->g_4)
    { /* block id: 7 */
        VECTOR(uint16_t, 16) l_16 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65529UL), 65529UL), 65529UL, 1UL, 65529UL, (VECTOR(uint16_t, 2))(1UL, 65529UL), (VECTOR(uint16_t, 2))(1UL, 65529UL), 1UL, 65529UL, 1UL, 65529UL);
        int32_t *l_30 = &p_1082->g_31;
        struct S0 ***l_938[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t *l_967 = (void*)0;
        int32_t l_993[6] = {0L,0L,0L,0L,0L,0L};
        uint32_t l_1027[9][9][3] = {{{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L}},{{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L}},{{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L}},{{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L}},{{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L}},{{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L}},{{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L}},{{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L}},{{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L},{0x5950B546L,4294967295UL,0x3E858CF3L}}};
        VECTOR(int8_t, 2) l_1046 = (VECTOR(int8_t, 2))((-8L), 0L);
        VECTOR(int8_t, 4) l_1048 = (VECTOR(int8_t, 4))(0x32L, (VECTOR(int8_t, 2))(0x32L, 0x29L), 0x29L);
        uint64_t l_1063 = 18446744073709551615UL;
        int16_t l_1067 = (-1L);
        int i, j, k;
        (*l_30) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(1L, 0x0C38EC32L, 1L, ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x3A4D3EC9L, 0x42542929L)).yxyxxyxx)).lo, ((VECTOR(int32_t, 2))(p_1082->g_7.s41)).yxyx))).zxwxyzyw, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 16))(l_10.yyxxyyyyxxxxyyxy)).hi, ((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 16))(p_1082->g_11.yyyyyxyyyyxyyxxx)).odd, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(p_1082->g_12.s35001012)).s65)).yxyyxxxy)))))))).s1612150127420621)).s34)).xyyy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_1082->g_13.s4663)).xywyxwwy)).even))).x, (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_16.sd0)), ((VECTOR(uint16_t, 2))(0x302DL, 0xAAF7L)), l_10.y, (+func_17(((l_21 == 4294967295UL) , (void*)0), l_22, (p_1082->g_12.s6 , p_1082->g_4), p_1082)), 65534UL, 65535UL)).s12)).yxyy)))).even, ((VECTOR(uint16_t, 8))(((p_1082->g_29 , (-1L)) > 0x19E6047311EBC848L), ((VECTOR(uint16_t, 2))(0x7C74L)), 5UL, ((VECTOR(uint16_t, 4))(3UL)))).s45))).odd, l_16.sb)))), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 4))(7L)), 1L)), ((VECTOR(int32_t, 8))(0x10E3A113L))))).s57)).xyyyyxyx, ((VECTOR(int32_t, 8))(1L))))), ((VECTOR(int32_t, 2))(1L)), p_1082->g_11.x, 0L, (-2L))).even)).s3;
        for (p_1082->g_26 = 0; (p_1082->g_26 <= 14); p_1082->g_26 = safe_add_func_uint16_t_u_u(p_1082->g_26, 1))
        { /* block id: 14 */
            int32_t **l_932 = &l_30;
            int32_t l_960 = 0x72156017L;
            uint64_t *l_966[4][1];
            int32_t l_994[5];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_966[i][j] = (void*)0;
            }
            for (i = 0; i < 5; i++)
                l_994[i] = 0x2B1AD975L;
            (*p_1082->g_596) = func_34(l_36, p_1082);
            (*l_932) = ((*p_1082->g_596) = (l_36 = func_34(func_34((*p_1082->g_185), p_1082), p_1082)));
            if ((p_1082->g_444.f0 != 4UL))
            { /* block id: 459 */
                struct S0 ****l_937 = (void*)0;
                VECTOR(uint8_t, 16) l_943 = (VECTOR(uint8_t, 16))(0xDEL, (VECTOR(uint8_t, 4))(0xDEL, (VECTOR(uint8_t, 2))(0xDEL, 255UL), 255UL), 255UL, 0xDEL, 255UL, (VECTOR(uint8_t, 2))(0xDEL, 255UL), (VECTOR(uint8_t, 2))(0xDEL, 255UL), 0xDEL, 255UL, 0xDEL, 255UL);
                int16_t *l_957 = &p_1082->g_24[1];
                int32_t l_959 = 1L;
                uint8_t *l_961 = &p_1082->g_163;
                VECTOR(int32_t, 4) l_973 = (VECTOR(int32_t, 4))(0x43E4606AL, (VECTOR(int32_t, 2))(0x43E4606AL, 0L), 0L);
                int i;
                if ((l_962 = (((safe_rshift_func_uint16_t_u_s(3UL, (safe_lshift_func_uint16_t_u_u(p_1082->g_37.f3, 2)))) , (l_938[0] = &p_1082->g_615)) == (((safe_mod_func_uint8_t_u_u(((*l_961) = (safe_mod_func_int8_t_s_s((((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 16))(((((VECTOR(uint8_t, 16))(1UL, ((VECTOR(uint8_t, 4))(l_943.s4092)), ((p_1082->g_550 ^ (((safe_sub_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((p_1082->g_427.s2 = ((**p_1082->g_332) ^ (safe_lshift_func_int16_t_s_s(((*l_957) = ((safe_add_func_int16_t_s_s(0x6E25L, (p_1082->g_453.x , ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))(p_1082->g_952.xxyx)).zzzyzzwy, ((VECTOR(int16_t, 16))(0x79F8L, (safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((**p_1082->g_332) ^ (((*p_1082->g_333) && (*p_1082->g_333)) , (**p_1082->g_332))), 0x3185L)) < p_1082->g_23), p_1082->g_192.s0)), 3L, 1L, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 2))(0x0232L)), ((VECTOR(int16_t, 2))(0x7BFEL)), 0x1088L, (-9L), 0x4D99L, 0L)).odd))).s0))) , p_1082->g_464.x)), l_958)))) | p_1082->g_comm_values[p_1082->tid]), p_1082->g_31)), 18446744073709551611UL)) == (**p_1082->g_332)) | l_959)) & p_1082->g_776.s1), 0xDDL, 1UL, ((VECTOR(uint8_t, 4))(0xC2L)), p_1082->g_161.x, ((VECTOR(uint8_t, 2))(255UL)), 0UL)).s5 >= p_1082->g_629.f0) ^ l_960), 0x4C5AL, 0x4F14L, 0x7F1BL, ((VECTOR(int16_t, 2))(0x0D39L)), ((VECTOR(int16_t, 4))((-6L))), ((VECTOR(int16_t, 2))(0x4DBEL)), 0x7117L, ((VECTOR(int16_t, 2))(0x1E86L)), 0x6153L)), ((VECTOR(int16_t, 16))(0x15E7L)), ((VECTOR(int16_t, 16))(0x661AL))))))), ((VECTOR(int16_t, 16))(9L))))).sa && 0UL), p_1082->g_464.y))), p_1082->g_189)) < GROUP_DIVERGE(0, 1)) , (void*)0))))
                { /* block id: 465 */
                    VECTOR(int32_t, 4) l_964 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-6L)), (-6L));
                    int32_t ***l_972 = &l_932;
                    int32_t *l_980 = &p_1082->g_156;
                    int i;
                    (*l_980) &= (!((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(p_1082->g_963.s75454675)).even, ((VECTOR(int32_t, 2))(l_964.ww)).yxyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((((**p_1082->g_332) = (((VECTOR(int8_t, 8))(p_1082->g_965.s73730066)).s5 >= (l_966[2][0] == l_967))) & (safe_sub_func_int64_t_s_s(p_1082->g_659[0], p_1082->g_11.y))), 0x7B184CFDL, ((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(l_970.s3256)), ((VECTOR(int32_t, 16))(p_1082->g_971.xxyxyxyyyyxxxyyy)).s0b81))).wwzwxywwxxwxxwwz))).sd7)), ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(9L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(0L, l_959, (-9L), 0x48E19E35L)).hi, ((VECTOR(int32_t, 2))(0x79696870L, 6L))))))), 1L)))), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(0x565DC07EL, 1L)).xxxxyyyxxyxxxxyx, ((VECTOR(int32_t, 8))((&p_1082->g_185 != l_972), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_973.xw)), 0x51751D9FL, 0x120C979CL)).w, ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))((safe_mul_func_uint8_t_u_u(((*l_961)++), 0xB7L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-9L), 4L)), 3L, 0L)), 0x2E6E49B0L, (-3L), ((safe_rshift_func_int16_t_s_s(p_1082->g_774.s5, p_1082->g_13.s6)) > p_1082->g_706.f0), l_964.y, p_1082->g_427.s3, ((VECTOR(int32_t, 2))(0x359F737BL)), 0x23F644DEL, (-1L), 0x3A4F2FFAL, 0x20E542BCL))))), ((VECTOR(int32_t, 16))(0x313C4526L)), ((VECTOR(int32_t, 16))(0x21CB4392L))))).sb, (-1L), 0x088A9F50L)), (-1L), 0x7A17E5B5L, 0x00B8E529L)).s6070624135703044))).s8a, ((VECTOR(int32_t, 2))(0L))))), ((VECTOR(int32_t, 2))(7L))))), 3L, 0x3F847B4CL)).s31, ((VECTOR(int32_t, 2))(0L))))), 0L, 0L, 1L)), l_959, ((VECTOR(int32_t, 2))(0L)), (-3L), 0x558555E1L, 0x0CAFE64AL)))).s462f))))))), (-8L), ((VECTOR(int32_t, 2))(0x0D307CEEL)), 9L)).s6);
                    p_1082->g_981 = (*p_1082->g_707);
                    atomic_add(&p_1082->g_atomic_reduction[get_linear_group_id()], 0x6C983753L);
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1082->v_collective += p_1082->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (l_959)
                        break;
                }
                else
                { /* block id: 472 */
                    uint8_t l_983 = 0xCFL;
                    int32_t *l_984 = &p_1082->g_31;
                    (*p_1082->g_707) = p_1082->g_982;
                    (*l_984) |= l_983;
                    if (l_16.sd)
                        break;
                }
            }
            else
            { /* block id: 477 */
                int8_t l_995 = 0x2FL;
                for (p_1082->g_31 = 23; (p_1082->g_31 != (-26)); p_1082->g_31 = safe_sub_func_uint8_t_u_u(p_1082->g_31, 8))
                { /* block id: 480 */
                    int32_t *l_987 = &p_1082->g_271.f0;
                    int32_t l_988 = 0L;
                    int32_t *l_989 = &p_1082->g_156;
                    int32_t *l_990 = (void*)0;
                    int32_t *l_991 = (void*)0;
                    int32_t *l_992[2][10];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 10; j++)
                            l_992[i][j] = &l_960;
                    }
                    l_996++;
                    return p_1082->g_323.y;
                }
            }
        }
        if (((safe_mul_func_int8_t_s_s((l_1001 , 0x3BL), p_1082->g_542.sf)) | p_1082->g_444.f2))
        { /* block id: 486 */
            uint8_t l_1002 = 0x00L;
            int32_t **l_1005 = &l_30;
            if (l_1002)
                break;
            p_1082->g_1004 = p_1082->g_1003;
            (*l_1005) = (p_1082->g_198.x , ((**p_1082->g_595) = (void*)0));
        }
        else
        { /* block id: 491 */
            int64_t l_1034 = 0x2A222AD9565BD031L;
            uint32_t *l_1035 = (void*)0;
            VECTOR(int8_t, 8) l_1045 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x4AL), 0x4AL), 0x4AL, (-1L), 0x4AL);
            VECTOR(int8_t, 4) l_1051 = (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0L), 0L);
            int32_t l_1064 = 0x7A90A65BL;
            int i;
            l_993[2] ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x43932BFAL, 0L)).xyyxyyxy)).s2;
            for (l_962 = 0; (l_962 >= (-1)); l_962 = safe_sub_func_uint16_t_u_u(l_962, 1))
            { /* block id: 495 */
                uint16_t *l_1019 = (void*)0;
                uint16_t *l_1020 = (void*)0;
                uint16_t *l_1021 = (void*)0;
                uint16_t *l_1022 = (void*)0;
                uint16_t *l_1023 = (void*)0;
                uint16_t *l_1024 = (void*)0;
                int32_t l_1025 = 1L;
                uint16_t *l_1026 = (void*)0;
                uint64_t *l_1050 = &p_1082->g_659[0];
                int16_t *l_1065 = &p_1082->g_286;
                int16_t *l_1066[3][8][7] = {{{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]}},{{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]}},{{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]},{&p_1082->g_24[1],&p_1082->g_24[1],&p_1082->g_24[6],(void*)0,(void*)0,(void*)0,&p_1082->g_24[6]}}};
                int64_t *l_1068 = (void*)0;
                int64_t *l_1069 = &l_1034;
                int i, j, k;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1082->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[(safe_mod_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((65526UL != (0x18536182CCE38EF7L & ((safe_unary_minus_func_uint16_t_u((((safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((l_1027[3][3][2]--), p_1082->g_286)), (((safe_div_func_uint8_t_u_u(p_1082->g_4, (safe_div_func_uint16_t_u_u(p_1082->g_444.f0, l_1034)))) , (!(((l_1035 != (void*)0) | (safe_mul_func_int16_t_s_s(l_1025, p_1082->g_442.f0))) && p_1082->g_629.f2))) ^ 5L))) , (void*)0) != p_1082->g_1038))) >= l_1034))), l_1025)), l_1025)) > l_16.s1), 10))][(safe_mod_func_uint32_t_u_u(p_1082->tid, 17))]));
                (*p_1082->g_596) = func_34(func_34((**p_1082->g_595), p_1082), p_1082);
                l_993[1] ^= ((((safe_mul_func_uint8_t_u_u(p_1082->g_268.f3, 0x5EL)) < (safe_sub_func_uint64_t_u_u((((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(p_1082->g_1044.yxxxyxyyxyxxxxyx)).odd, ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(l_1045.s3522)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_1046.yxxy)), 0x3EL, ((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x76L, 9L)).yyxx)).wzyywwyx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_1047.ywwwyzxzwxxzwzxx)).s1f)).yxxxyyyy, ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_1048.yxzxzyxzxywyyyyy)).s04)).yxxy, ((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(p_1082->g_1049.s1173372057407551)).s6ed5, ((VECTOR(int8_t, 4))(((void*)0 != l_1050), ((void*)0 == l_967), 0x3EL, 0x01L)))))))).even, ((VECTOR(int8_t, 16))(l_1051.ywyzwzzyxwxxwywx)).sd6))).xxxxyyyx))), ((VECTOR(int8_t, 2))(p_1082->g_1052.sc5)), (-9L))).odd)).lo))).zxywxyyz))).s5 & 0x50L), ((*l_1069) |= (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((p_1082->g_427.sa ^= (l_1051.y || (safe_rshift_func_int16_t_s_s(((*l_1065) = (safe_mod_func_uint16_t_u_u((l_1064 = ((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0UL, 0x87EC0A1FL)).xxyxyyyyxyxxyyyy)).se , (~((safe_add_func_int16_t_s_s(p_1082->g_1052.sa, p_1082->g_165)) > l_1025))) , l_1063)), p_1082->g_24[1]))), 13)))) <= l_1067), p_1082->g_706.f0)), FAKE_DIVERGE(p_1082->local_2_offset, get_local_id(2), 10))))))) < GROUP_DIVERGE(1, 1)) == p_1082->g_963.s2);
            }
        }
    }
    (*l_1081) = ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(1L, 0x3998872EL)).xyxxyxxy, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))((-10L), ((VECTOR(int32_t, 2))((-8L), 0L)), 0L)).ywyzxzyxxyywzyzx, (int32_t)l_958))).lo))).lo)), ((VECTOR(int32_t, 16))(p_1082->g_1070.s2771411664660010)).se691, ((VECTOR(int32_t, 8))(0x1FC1D981L, (safe_mul_func_int8_t_s_s((((void*)0 == &p_1082->g_441) < (((*p_1082->g_596) = (*p_1082->g_596)) != ((*l_1074) = func_34(func_34(&l_962, p_1082), p_1082)))), (safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_int32_t_s(p_1082->g_774.s0)))))), (-7L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_1077.zxxyxyzxwzxxwyyz)).sba)), (((((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 8))(0x6FD2E2EFF520C90DL, ((**l_1074) | (*l_36)), 2L, (*p_1082->g_440), (-1L), (-1L), 0x3A452B8174ECD21AL, (-1L))).s1, p_1082->g_1044.x)), ((VECTOR(int16_t, 8))(1L)), 3L, ((VECTOR(int16_t, 4))((-1L))), 0x435DL, 0x6359L)).sa7b1, ((VECTOR(int16_t, 4))(6L))))).lo)), 0x4664L, p_1082->g_301.s7, ((VECTOR(int16_t, 2))(1L)), 4L, 0x6D1CL)).s2 >= GROUP_DIVERGE(2, 1)) > (**l_1074)) >= l_1080) <= GROUP_DIVERGE(1, 1)) || (*l_36)), 0x09D00F2CL, 0x0A45B1F9L)).odd))).y;
    return p_1082->g_189;
}


/* ------------------------------------------ */
/* 
 * reads : p_1082->g_26
 * writes: p_1082->g_26
 */
uint16_t  func_17(int8_t * p_18, int8_t * p_19, int64_t  p_20, struct S3 * p_1082)
{ /* block id: 8 */
    int16_t l_25 = 1L;
    ++p_1082->g_26;
    return l_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_1082->g_37 p_1082->g_39 p_1082->g_29
 * writes: p_1082->g_37 p_1082->g_29
 */
int32_t * func_34(int32_t * p_35, struct S3 * p_1082)
{ /* block id: 15 */
    int8_t l_101[5];
    int32_t *l_520 = (void*)0;
    VECTOR(uint64_t, 4) l_778 = (VECTOR(uint64_t, 4))(0x832503DA1EF12425L, (VECTOR(uint64_t, 2))(0x832503DA1EF12425L, 1UL), 1UL);
    int i;
    for (i = 0; i < 5; i++)
        l_101[i] = 0L;
    (*p_1082->g_39) = p_1082->g_37;
    for (p_1082->g_29 = 0; (p_1082->g_29 >= 9); ++p_1082->g_29)
    { /* block id: 19 */
        uint8_t l_95 = 3UL;
        int8_t *l_521 = (void*)0;
        int8_t **l_761 = &p_1082->g_91;
        VECTOR(int64_t, 2) l_777 = (VECTOR(int64_t, 2))(0x31D99354117804A5L, 0x2E2A144514FA17F3L);
        VECTOR(int32_t, 4) l_785 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x2A0887FCL), 0x2A0887FCL);
        VECTOR(int32_t, 2) l_786 = (VECTOR(int32_t, 2))(0x3718BF98L, 1L);
        int i;
        for (p_1082->g_37.f0 = 0; (p_1082->g_37.f0 < (-11)); p_1082->g_37.f0--)
        { /* block id: 22 */
            return &p_1082->g_4;
        }
        for (p_1082->g_37.f0 = 0; (p_1082->g_37.f0 > (-15)); p_1082->g_37.f0 = safe_sub_func_uint8_t_u_u(p_1082->g_37.f0, 9))
        { /* block id: 27 */
            int8_t *l_69 = &p_1082->g_23;
            int8_t **l_68 = &l_69;
            int32_t l_70 = 0x3026CBAAL;
            VECTOR(uint16_t, 2) l_92 = (VECTOR(uint16_t, 2))(65535UL, 0x2277L);
            VECTOR(int8_t, 2) l_98 = (VECTOR(int8_t, 2))((-1L), (-3L));
            union U1 l_102[8][5][6] = {{{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}}},{{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}}},{{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}}},{{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}}},{{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}}},{{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}}},{{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}}},{{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}},{{-8L},{-8L},{-8L},{-8L},{0x159B8C56L},{-10L}}}};
            struct S0 *l_443 = &p_1082->g_444;
            int8_t ***l_760[4][5][4] = {{{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90}},{{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90}},{{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90}},{{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90},{&p_1082->g_90,&p_1082->g_90,&p_1082->g_90,&p_1082->g_90}}};
            VECTOR(uint64_t, 16) l_770 = (VECTOR(uint64_t, 16))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 18446744073709551611UL, 18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 18446744073709551610UL), (VECTOR(uint64_t, 2))(18446744073709551611UL, 18446744073709551610UL), 18446744073709551611UL, 18446744073709551610UL, 18446744073709551611UL, 18446744073709551610UL);
            VECTOR(uint64_t, 16) l_771 = (VECTOR(uint64_t, 16))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 1UL), 1UL), 1UL, 9UL, 1UL, (VECTOR(uint64_t, 2))(9UL, 1UL), (VECTOR(uint64_t, 2))(9UL, 1UL), 9UL, 1UL, 9UL, 1UL);
            VECTOR(int64_t, 16) l_772 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int64_t, 2))((-1L), 1L), (VECTOR(int64_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
            VECTOR(int64_t, 16) l_773 = (VECTOR(int64_t, 16))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 0x40391CA7BEACD4DCL), 0x40391CA7BEACD4DCL), 0x40391CA7BEACD4DCL, 8L, 0x40391CA7BEACD4DCL, (VECTOR(int64_t, 2))(8L, 0x40391CA7BEACD4DCL), (VECTOR(int64_t, 2))(8L, 0x40391CA7BEACD4DCL), 8L, 0x40391CA7BEACD4DCL, 8L, 0x40391CA7BEACD4DCL);
            uint64_t *l_779 = (void*)0;
            uint64_t *l_780 = &p_1082->g_165;
            int i, j, k;
            if ((atomic_inc(&p_1082->l_atomic_input[39]) == 3))
            { /* block id: 29 */
                int32_t l_46 = 5L;
                uint32_t l_57[2][8][1] = {{{0xCC5DB095L},{0xCC5DB095L},{0xCC5DB095L},{0xCC5DB095L},{0xCC5DB095L},{0xCC5DB095L},{0xCC5DB095L},{0xCC5DB095L}},{{0xCC5DB095L},{0xCC5DB095L},{0xCC5DB095L},{0xCC5DB095L},{0xCC5DB095L},{0xCC5DB095L},{0xCC5DB095L},{0xCC5DB095L}}};
                int32_t *l_60 = &l_46;
                int32_t *l_61 = &l_46;
                uint16_t l_62[4][6][6] = {{{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L}},{{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L}},{{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L}},{{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L},{0x2E1BL,0xD34DL,0UL,0x2E1BL,0UL,0xE680L}}};
                int i, j, k;
                for (l_46 = 0; (l_46 <= (-4)); l_46--)
                { /* block id: 32 */
                    int32_t l_49 = 0x7B75AE7BL;
                    uint32_t l_55 = 0xC26FF553L;
                    VECTOR(uint8_t, 2) l_56 = (VECTOR(uint8_t, 2))(255UL, 6UL);
                    int i;
                    for (l_49 = 0; (l_49 > 7); ++l_49)
                    { /* block id: 35 */
                        uint16_t l_52 = 0UL;
                        uint8_t l_53 = 0xD4L;
                        int8_t l_54 = 0x6FL;
                        l_52 &= 0x289F16C4L;
                        l_54 = (l_53 = 0L);
                    }
                    l_56.x = l_55;
                }
                l_57[1][6][0]--;
                l_61 = l_60;
                l_62[2][3][0] |= 0x1AAD5EABL;
                unsigned int result = 0;
                result += l_46;
                int l_57_i0, l_57_i1, l_57_i2;
                for (l_57_i0 = 0; l_57_i0 < 2; l_57_i0++) {
                    for (l_57_i1 = 0; l_57_i1 < 8; l_57_i1++) {
                        for (l_57_i2 = 0; l_57_i2 < 1; l_57_i2++) {
                            result += l_57[l_57_i0][l_57_i1][l_57_i2];
                        }
                    }
                }
                int l_62_i0, l_62_i1, l_62_i2;
                for (l_62_i0 = 0; l_62_i0 < 4; l_62_i0++) {
                    for (l_62_i1 = 0; l_62_i1 < 6; l_62_i1++) {
                        for (l_62_i2 = 0; l_62_i2 < 6; l_62_i2++) {
                            result += l_62[l_62_i0][l_62_i1][l_62_i2];
                        }
                    }
                }
                atomic_add(&p_1082->l_special_values[39], result);
            }
            else
            { /* block id: 45 */
                (1 + 1);
            }
        }
        if ((atomic_inc(&p_1082->g_atomic_input[99 * get_linear_group_id() + 84]) == 3))
        { /* block id: 361 */
            VECTOR(int32_t, 8) l_787 = (VECTOR(int32_t, 8))(0x6B6BE5B3L, (VECTOR(int32_t, 4))(0x6B6BE5B3L, (VECTOR(int32_t, 2))(0x6B6BE5B3L, (-10L)), (-10L)), (-10L), 0x6B6BE5B3L, (-10L));
            VECTOR(int16_t, 8) l_788 = (VECTOR(int16_t, 8))(0x0073L, (VECTOR(int16_t, 4))(0x0073L, (VECTOR(int16_t, 2))(0x0073L, (-4L)), (-4L)), (-4L), 0x0073L, (-4L));
            uint32_t l_789[2][2][3] = {{{0x9FD334D0L,4294967286UL,4294967286UL},{0x9FD334D0L,4294967286UL,4294967286UL}},{{0x9FD334D0L,4294967286UL,4294967286UL},{0x9FD334D0L,4294967286UL,4294967286UL}}};
            VECTOR(int32_t, 16) l_790 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
            uint32_t l_791 = 0x071DEBFDL;
            uint32_t l_792 = 0xDE8A97A4L;
            uint8_t l_793 = 0x16L;
            VECTOR(int32_t, 16) l_794 = (VECTOR(int32_t, 16))(0x7D6C648EL, (VECTOR(int32_t, 4))(0x7D6C648EL, (VECTOR(int32_t, 2))(0x7D6C648EL, 0L), 0L), 0L, 0x7D6C648EL, 0L, (VECTOR(int32_t, 2))(0x7D6C648EL, 0L), (VECTOR(int32_t, 2))(0x7D6C648EL, 0L), 0x7D6C648EL, 0L, 0x7D6C648EL, 0L);
            uint8_t l_795 = 0xE2L;
            VECTOR(int32_t, 8) l_796 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x2F08CD30L), 0x2F08CD30L), 0x2F08CD30L, (-2L), 0x2F08CD30L);
            union U1 l_825 = {0x4820B76FL};
            uint32_t l_826 = 4294967288UL;
            VECTOR(int32_t, 16) l_827 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 3L), 3L), 3L, 0L, 3L, (VECTOR(int32_t, 2))(0L, 3L), (VECTOR(int32_t, 2))(0L, 3L), 0L, 3L, 0L, 3L);
            int32_t l_828[5];
            uint32_t l_829 = 4294967288UL;
            int64_t l_830 = (-2L);
            int16_t l_831 = 0x36A8L;
            VECTOR(int16_t, 8) l_832 = (VECTOR(int16_t, 8))(0x547EL, (VECTOR(int16_t, 4))(0x547EL, (VECTOR(int16_t, 2))(0x547EL, 8L), 8L), 8L, 0x547EL, 8L);
            VECTOR(int16_t, 4) l_833 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x67F7L), 0x67F7L);
            VECTOR(int16_t, 2) l_834 = (VECTOR(int16_t, 2))(0x6AD6L, 0x34BEL);
            VECTOR(int16_t, 2) l_835 = (VECTOR(int16_t, 2))(0x7C6CL, 0x0348L);
            VECTOR(int16_t, 2) l_836 = (VECTOR(int16_t, 2))((-7L), (-7L));
            VECTOR(int16_t, 16) l_837 = (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 8L), 8L), 8L, (-4L), 8L, (VECTOR(int16_t, 2))((-4L), 8L), (VECTOR(int16_t, 2))((-4L), 8L), (-4L), 8L, (-4L), 8L);
            VECTOR(int16_t, 8) l_838 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x7055L), 0x7055L), 0x7055L, 1L, 0x7055L);
            VECTOR(int32_t, 4) l_839 = (VECTOR(int32_t, 4))(0x74667EFDL, (VECTOR(int32_t, 2))(0x74667EFDL, 0x2210AFD5L), 0x2210AFD5L);
            uint16_t l_840 = 65535UL;
            uint16_t l_841 = 1UL;
            int16_t l_842 = 0x14EDL;
            uint32_t l_843 = 0UL;
            int8_t l_844 = 1L;
            uint32_t l_845 = 0x8A222906L;
            uint64_t l_846 = 0xF329C1BD47CA245BL;
            uint32_t l_847 = 4294967295UL;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_828[i] = 1L;
            l_789[0][1][1] = (l_788.s4 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_787.s25)).yyyxxxxxyyyyyyyx)).sb);
            if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(1L, 0x2ED61DA6L, ((l_793 = (l_790.sa , (l_791 , l_792))) , 0x18FAB552L), ((VECTOR(int32_t, 2))(l_794.s15)), 0x46F2BA09L, l_795, 0x16B1EDB5L, ((VECTOR(int32_t, 2))(0x7402184EL, 0x2307DB81L)), 0x2E6F36D5L, 3L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_796.s64)).yxxx)).w, ((VECTOR(int32_t, 2))((-2L), 3L)), (-1L))).sbcbe)).w)
            { /* block id: 365 */
                int32_t l_797 = 0x58952DE2L;
                for (l_797 = 0; (l_797 != 21); l_797 = safe_add_func_int16_t_s_s(l_797, 1))
                { /* block id: 368 */
                    uint32_t l_800 = 1UL;
                    if (l_800)
                    { /* block id: 369 */
                        struct S0 *l_801 = (void*)0;
                        int32_t l_803 = 0x119AE234L;
                        int32_t *l_802 = &l_803;
                        int32_t *l_804 = (void*)0;
                        int32_t *l_805 = &l_803;
                        l_801 = (void*)0;
                        l_804 = l_802;
                        l_805 = l_805;
                        (*l_805) |= 0x303219AFL;
                    }
                    else
                    { /* block id: 374 */
                        struct S0 l_806 = {1L,0L,1L,0x4186511DL};/* VOLATILE GLOBAL l_806 */
                        struct S0 l_807 = {6L,1L,0x35798C20L,-9L};/* VOLATILE GLOBAL l_807 */
                        l_807 = l_806;
                    }
                }
                for (l_797 = 26; (l_797 >= (-1)); l_797--)
                { /* block id: 380 */
                    union U1 l_810 = {-1L};
                    uint8_t l_811 = 255UL;
                    uint16_t l_819[1];
                    int8_t l_820 = 5L;
                    uint16_t l_821 = 0xE03FL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_819[i] = 7UL;
                    l_811 ^= (l_810 , (l_787.s3 = (-9L)));
                    for (l_810.f4 = 0; (l_810.f4 <= (-8)); --l_810.f4)
                    { /* block id: 385 */
                        struct S0 l_814 = {-1L,0x5740E3BD32D1A65CL,0x00A5FDA4L,-1L};/* VOLATILE GLOBAL l_814 */
                        int32_t *l_815 = (void*)0;
                        VECTOR(int32_t, 8) l_816 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x481DD6ACL), 0x481DD6ACL), 0x481DD6ACL, 0L, 0x481DD6ACL);
                        uint64_t l_817 = 0xD5EAB6A56B636128L;
                        VECTOR(int32_t, 4) l_818 = (VECTOR(int32_t, 4))(0x23F6083DL, (VECTOR(int32_t, 2))(0x23F6083DL, 2L), 2L);
                        int i;
                        l_815 = ((GROUP_DIVERGE(2, 1) , l_814) , (void*)0);
                        l_796.s2 &= ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(0x08C94926L, ((VECTOR(int32_t, 4))(l_816.s3203)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_817, 1L, 0x5FF91593L, (-1L))).yzzxzyzx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_818.zy)).yyxxyxyx)).s4702434321456410)).odd))).s21)), 6L))))).s2;
                    }
                    l_787.s6 ^= (l_819[0] , (l_820 , (l_794.sa = l_821)));
                }
            }
            else
            { /* block id: 392 */
                int32_t l_823 = (-4L);
                int32_t *l_822[7][2][9] = {{{&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,(void*)0},{&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,(void*)0}},{{&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,(void*)0},{&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,(void*)0}},{{&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,(void*)0},{&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,(void*)0}},{{&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,(void*)0},{&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,(void*)0}},{{&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,(void*)0},{&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,(void*)0}},{{&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,(void*)0},{&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,(void*)0}},{{&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,(void*)0},{&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,&l_823,(void*)0}}};
                int32_t *l_824 = &l_823;
                int i, j, k;
                l_824 = (((VECTOR(int8_t, 2))(1L, 0L)).lo , l_822[2][1][0]);
            }
            if ((l_847 = (l_825 , ((VECTOR(int32_t, 8))(0x47B05523L, ((VECTOR(int32_t, 2))(0x5925BF79L, 0L)).even, 0x4B89DBD4L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(l_826, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_827.s91)).yyyy)), l_828[2], 3L, l_829, 1L, l_830, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(l_831, 0x25FBL, 0x0AC5L, ((VECTOR(int16_t, 8))(l_832.s01301613)), (-1L), ((VECTOR(int16_t, 2))(0x0A49L, 0L)), 1L, 0L)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 4))(l_833.zyxz)).zyzxzyyyzzyzxzww, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(1L, ((VECTOR(int16_t, 4))(0x4273L, 0x5193L, 0x1F4CL, 0x51AEL)), 0L, 0x545BL, 0x7DEBL)), ((VECTOR(int16_t, 8))(l_834.xyyyyxyx)))).s43, ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(0x2D28L, ((VECTOR(int16_t, 2))(l_835.xy)), 0x400FL, ((VECTOR(int16_t, 2))(0L, 0L)), 0x756AL, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x5361L, 5L)), 1L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_836.xxxy)))).odd, ((VECTOR(int16_t, 4))(l_837.s64ab)).hi, ((VECTOR(int16_t, 4))(l_838.s3310)).lo))))).yyyyyyyyxyxxyyxy)).s9f0d)).xxwyxxxz)))), ((VECTOR(int16_t, 4))((-3L), l_839.y, (-1L), 0x47C8L)).yxzwxzwy))).odd)).wxxzyzyw, (int16_t)l_840, (int16_t)0L))).s40)), ((VECTOR(int16_t, 2))(0x7924L)), 0x2AA0L)).lo)).yzzzyzwywzywwzyy)).s2961, ((VECTOR(int16_t, 4))(0x2542L))))), l_841, 0x4A48L, ((VECTOR(int16_t, 2))(0x3F89L)), 1L)), ((VECTOR(int16_t, 16))(0x3E29L)), ((VECTOR(int16_t, 16))(0x362CL))))).s6e))), ((VECTOR(int16_t, 2))(0x5FCDL))))).xyxyxxxxxxyyyyxx))).hi))).s1, l_842, 0x22DCL, (-9L), 0x68D2L, 0x2128L, 0x1440L, l_843, l_844, 6L, (-1L), 6L, l_845, 0L, 1L, 0x0008L)), ((VECTOR(int16_t, 16))(0L))))).sdc, ((VECTOR(uint16_t, 2))(0xFEF1L))))), 1L, ((VECTOR(int32_t, 2))(0L)), 0x519395D5L)), ((VECTOR(int32_t, 16))((-6L)))))).sfa, (int32_t)l_846))).xxxyxyxx))).s31)), 0L, 0x2EB8A862L, ((VECTOR(int32_t, 2))(0x32E21D5DL)), 0x224B1809L, 1L)).hi)), (-1L))).s0)))
            { /* block id: 396 */
                int32_t l_848 = 0x5BE186C2L;
                for (l_848 = 0; (l_848 < 8); l_848++)
                { /* block id: 399 */
                    uint8_t l_851 = 0x5BL;
                    int8_t l_880 = 1L;
                    VECTOR(int16_t, 16) l_881 = (VECTOR(int16_t, 16))(0x0E80L, (VECTOR(int16_t, 4))(0x0E80L, (VECTOR(int16_t, 2))(0x0E80L, 0L), 0L), 0L, 0x0E80L, 0L, (VECTOR(int16_t, 2))(0x0E80L, 0L), (VECTOR(int16_t, 2))(0x0E80L, 0L), 0x0E80L, 0L, 0x0E80L, 0L);
                    int32_t l_882 = 0x57BE6815L;
                    VECTOR(uint8_t, 16) l_883 = (VECTOR(uint8_t, 16))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0xC1L), 0xC1L), 0xC1L, 254UL, 0xC1L, (VECTOR(uint8_t, 2))(254UL, 0xC1L), (VECTOR(uint8_t, 2))(254UL, 0xC1L), 254UL, 0xC1L, 254UL, 0xC1L);
                    int64_t l_886 = 7L;
                    int i;
                    if (l_851)
                    { /* block id: 400 */
                        struct S0 **l_852 = (void*)0;
                        struct S0 l_855 = {1L,-10L,-4L,1L};/* VOLATILE GLOBAL l_855 */
                        struct S0 *l_854 = &l_855;
                        struct S0 **l_853 = &l_854;
                        struct S0 *l_856 = &l_855;
                        struct S0 *l_857 = &l_855;
                        int32_t l_859 = (-1L);
                        int32_t *l_858 = &l_859;
                        int32_t *l_860 = &l_859;
                        int32_t *l_861 = (void*)0;
                        l_853 = (GROUP_DIVERGE(2, 1) , l_852);
                        l_857 = l_856;
                        l_861 = (l_860 = l_858);
                    }
                    else
                    { /* block id: 405 */
                        int32_t l_863 = 0x60824699L;
                        int32_t *l_862 = &l_863;
                        int32_t *l_864[2];
                        int32_t *l_865 = &l_863;
                        VECTOR(int16_t, 2) l_866 = (VECTOR(int16_t, 2))(0x2293L, 0x6649L);
                        uint8_t l_867 = 0x90L;
                        uint32_t l_868 = 0x7F660EA4L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_864[i] = &l_863;
                        l_862 = (void*)0;
                        l_865 = l_864[0];
                        l_827.s1 = (((VECTOR(int16_t, 2))(l_866.yx)).even , (l_787.s3 = (l_867 , l_868)));
                    }
                    for (l_851 = (-11); (l_851 < 30); l_851++)
                    { /* block id: 413 */
                        int8_t l_871 = 0x1EL;
                        uint16_t l_872 = 0xAFDBL;
                        uint32_t l_875 = 4294967294UL;
                        uint32_t l_876[6][1][7] = {{{0x7C505713L,4294967295UL,0x7722B25EL,4UL,0x193AD926L,0x193AD926L,4UL}},{{0x7C505713L,4294967295UL,0x7722B25EL,4UL,0x193AD926L,0x193AD926L,4UL}},{{0x7C505713L,4294967295UL,0x7722B25EL,4UL,0x193AD926L,0x193AD926L,4UL}},{{0x7C505713L,4294967295UL,0x7722B25EL,4UL,0x193AD926L,0x193AD926L,4UL}},{{0x7C505713L,4294967295UL,0x7722B25EL,4UL,0x193AD926L,0x193AD926L,4UL}},{{0x7C505713L,4294967295UL,0x7722B25EL,4UL,0x193AD926L,0x193AD926L,4UL}}};
                        int32_t l_878[5];
                        int32_t *l_877 = &l_878[3];
                        int32_t *l_879 = &l_878[3];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_878[i] = (-3L);
                        l_872--;
                        l_827.s0 = l_875;
                        l_879 = (l_876[4][0][0] , l_877);
                    }
                    ++l_883.s7;
                    l_839.x |= l_886;
                }
            }
            else
            { /* block id: 421 */
                int32_t l_887 = 0L;
                struct S0 l_928 = {0x18DC9BDB1B063610L,0x2E31B62461D3F63DL,8L,0x22A642F1L};/* VOLATILE GLOBAL l_928 */
                struct S0 *l_927 = &l_928;
                struct S0 *l_929 = &l_928;
                int32_t *l_930[1];
                int32_t *l_931 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_930[i] = &l_887;
                for (l_887 = 10; (l_887 <= (-6)); l_887 = safe_sub_func_uint8_t_u_u(l_887, 8))
                { /* block id: 424 */
                    int32_t l_890 = 1L;
                    int8_t l_891[10][7] = {{0x65L,(-1L),0x33L,5L,0x46L,0x65L,5L},{0x65L,(-1L),0x33L,5L,0x46L,0x65L,5L},{0x65L,(-1L),0x33L,5L,0x46L,0x65L,5L},{0x65L,(-1L),0x33L,5L,0x46L,0x65L,5L},{0x65L,(-1L),0x33L,5L,0x46L,0x65L,5L},{0x65L,(-1L),0x33L,5L,0x46L,0x65L,5L},{0x65L,(-1L),0x33L,5L,0x46L,0x65L,5L},{0x65L,(-1L),0x33L,5L,0x46L,0x65L,5L},{0x65L,(-1L),0x33L,5L,0x46L,0x65L,5L},{0x65L,(-1L),0x33L,5L,0x46L,0x65L,5L}};
                    int32_t *l_892[1];
                    VECTOR(int32_t, 4) l_893 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x10004EAFL), 0x10004EAFL);
                    int16_t l_894 = 0x2935L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_892[i] = (void*)0;
                    l_794.sf = l_890;
                    l_892[0] = (l_891[2][4] , (void*)0);
                    if ((l_894 = ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(0x1DA0FDD2L, ((VECTOR(int32_t, 2))((-2L), 1L)), 0x3E4497D8L)), ((VECTOR(int32_t, 4))(l_893.zwyx))))).z))
                    { /* block id: 428 */
                        int8_t l_895 = 0x19L;
                        int8_t l_896 = 0x21L;
                        int16_t l_897 = 1L;
                        VECTOR(uint64_t, 16) l_898 = (VECTOR(uint64_t, 16))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 9UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(9UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(9UL, 18446744073709551615UL), 9UL, 18446744073709551615UL, 9UL, 18446744073709551615UL);
                        int64_t l_901 = 0L;
                        VECTOR(int32_t, 16) l_902 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), (-1L)), (-1L)), (-1L), (-8L), (-1L), (VECTOR(int32_t, 2))((-8L), (-1L)), (VECTOR(int32_t, 2))((-8L), (-1L)), (-8L), (-1L), (-8L), (-1L));
                        uint32_t l_903 = 0x95B37770L;
                        uint32_t l_904 = 0x30194196L;
                        int8_t l_905[4] = {0x0AL,0x0AL,0x0AL,0x0AL};
                        int8_t l_906 = 1L;
                        VECTOR(int32_t, 4) l_907 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5ABC889FL), 0x5ABC889FL);
                        VECTOR(int32_t, 16) l_908 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x19AF0AD0L), 0x19AF0AD0L), 0x19AF0AD0L, (-1L), 0x19AF0AD0L, (VECTOR(int32_t, 2))((-1L), 0x19AF0AD0L), (VECTOR(int32_t, 2))((-1L), 0x19AF0AD0L), (-1L), 0x19AF0AD0L, (-1L), 0x19AF0AD0L);
                        uint32_t l_909 = 4294967287UL;
                        uint64_t l_910[8] = {0xE0AF03004CA91EC0L,0xE0AF03004CA91EC0L,0xE0AF03004CA91EC0L,0xE0AF03004CA91EC0L,0xE0AF03004CA91EC0L,0xE0AF03004CA91EC0L,0xE0AF03004CA91EC0L,0xE0AF03004CA91EC0L};
                        uint32_t l_911 = 0xB9658865L;
                        int32_t l_912 = (-1L);
                        uint32_t l_913 = 4294967289UL;
                        int i;
                        l_898.s6++;
                        l_902.sb = (l_901 , (l_912 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_902.sef77)).hi)), (-3L), ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(1L, ((l_825.f3 = (l_891[7][5] |= (l_844 = 0x67L))) , l_903), l_904, 2L, 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((l_905[2] , l_906), (-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_907.zz)), 0x7174923CL, 0x32DD452EL)).zzxxwyyx)).s10)), 9L, 0x79265A2FL, 0L, (-10L))))).s0320607632424343, ((VECTOR(int32_t, 4))(0x375B7B6BL, ((VECTOR(int32_t, 2))(l_908.s68)), 0L)).xyyyyzyzzwywzxww))).sd, (l_910[1] = l_909), l_911, 0x5B2DD8B8L, ((VECTOR(int32_t, 4))(0x6C9E1D11L)))), ((VECTOR(int32_t, 8))(0x4FE0922CL))))))))).s06)), (-1L))).lo, ((VECTOR(int32_t, 4))(0x4B53D292L))))), 0x273E71D8L)).s4));
                        l_907.z |= l_913;
                    }
                    else
                    { /* block id: 437 */
                        struct S0 l_914 = {0x3E005E7C371584F6L,0x60019863E95B7011L,0x6BBB1F66L,0x1F5F7F33L};/* VOLATILE GLOBAL l_914 */
                        uint32_t l_915 = 0xEE2F4C9EL;
                        int64_t l_916[4][4] = {{0x0A090A6310766D87L,0x0A090A6310766D87L,0x0A090A6310766D87L,0x0A090A6310766D87L},{0x0A090A6310766D87L,0x0A090A6310766D87L,0x0A090A6310766D87L,0x0A090A6310766D87L},{0x0A090A6310766D87L,0x0A090A6310766D87L,0x0A090A6310766D87L,0x0A090A6310766D87L},{0x0A090A6310766D87L,0x0A090A6310766D87L,0x0A090A6310766D87L,0x0A090A6310766D87L}};
                        uint32_t l_917 = 4294967286UL;
                        int16_t l_918 = 0x0795L;
                        uint16_t l_919 = 0x9987L;
                        uint32_t l_920 = 4294967292UL;
                        uint32_t l_921[2];
                        int8_t l_922 = 1L;
                        uint64_t l_925[9] = {0x70F200C6B8C01A05L,0x70F200C6B8C01A05L,0x70F200C6B8C01A05L,0x70F200C6B8C01A05L,0x70F200C6B8C01A05L,0x70F200C6B8C01A05L,0x70F200C6B8C01A05L,0x70F200C6B8C01A05L,0x70F200C6B8C01A05L};
                        uint64_t *l_924 = &l_925[7];
                        uint64_t **l_923 = &l_924;
                        uint64_t **l_926 = (void*)0;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_921[i] = 0x5157D479L;
                        l_921[1] = (l_920 = ((l_914 , l_915) , ((((VECTOR(int8_t, 4))((-1L), 0x22L, 0L, 0x7DL)).z , (l_916[1][0] , ((VECTOR(int8_t, 2))(1L, 0x40L)).hi)) , (l_919 = (l_918 = l_917)))));
                        l_914.f2 |= (l_922 = 0x2818F6B1L);
                        l_926 = l_923;
                    }
                }
                l_929 = l_927;
                l_931 = l_930[0];
            }
            unsigned int result = 0;
            result += l_787.s7;
            result += l_787.s6;
            result += l_787.s5;
            result += l_787.s4;
            result += l_787.s3;
            result += l_787.s2;
            result += l_787.s1;
            result += l_787.s0;
            result += l_788.s7;
            result += l_788.s6;
            result += l_788.s5;
            result += l_788.s4;
            result += l_788.s3;
            result += l_788.s2;
            result += l_788.s1;
            result += l_788.s0;
            int l_789_i0, l_789_i1, l_789_i2;
            for (l_789_i0 = 0; l_789_i0 < 2; l_789_i0++) {
                for (l_789_i1 = 0; l_789_i1 < 2; l_789_i1++) {
                    for (l_789_i2 = 0; l_789_i2 < 3; l_789_i2++) {
                        result += l_789[l_789_i0][l_789_i1][l_789_i2];
                    }
                }
            }
            result += l_790.sf;
            result += l_790.se;
            result += l_790.sd;
            result += l_790.sc;
            result += l_790.sb;
            result += l_790.sa;
            result += l_790.s9;
            result += l_790.s8;
            result += l_790.s7;
            result += l_790.s6;
            result += l_790.s5;
            result += l_790.s4;
            result += l_790.s3;
            result += l_790.s2;
            result += l_790.s1;
            result += l_790.s0;
            result += l_791;
            result += l_792;
            result += l_793;
            result += l_794.sf;
            result += l_794.se;
            result += l_794.sd;
            result += l_794.sc;
            result += l_794.sb;
            result += l_794.sa;
            result += l_794.s9;
            result += l_794.s8;
            result += l_794.s7;
            result += l_794.s6;
            result += l_794.s5;
            result += l_794.s4;
            result += l_794.s3;
            result += l_794.s2;
            result += l_794.s1;
            result += l_794.s0;
            result += l_795;
            result += l_796.s7;
            result += l_796.s6;
            result += l_796.s5;
            result += l_796.s4;
            result += l_796.s3;
            result += l_796.s2;
            result += l_796.s1;
            result += l_796.s0;
            result += l_825.f0;
            result += l_825.f1;
            result += l_825.f2;
            result += l_825.f3;
            result += l_825.f4;
            result += l_826;
            result += l_827.sf;
            result += l_827.se;
            result += l_827.sd;
            result += l_827.sc;
            result += l_827.sb;
            result += l_827.sa;
            result += l_827.s9;
            result += l_827.s8;
            result += l_827.s7;
            result += l_827.s6;
            result += l_827.s5;
            result += l_827.s4;
            result += l_827.s3;
            result += l_827.s2;
            result += l_827.s1;
            result += l_827.s0;
            int l_828_i0;
            for (l_828_i0 = 0; l_828_i0 < 5; l_828_i0++) {
                result += l_828[l_828_i0];
            }
            result += l_829;
            result += l_830;
            result += l_831;
            result += l_832.s7;
            result += l_832.s6;
            result += l_832.s5;
            result += l_832.s4;
            result += l_832.s3;
            result += l_832.s2;
            result += l_832.s1;
            result += l_832.s0;
            result += l_833.w;
            result += l_833.z;
            result += l_833.y;
            result += l_833.x;
            result += l_834.y;
            result += l_834.x;
            result += l_835.y;
            result += l_835.x;
            result += l_836.y;
            result += l_836.x;
            result += l_837.sf;
            result += l_837.se;
            result += l_837.sd;
            result += l_837.sc;
            result += l_837.sb;
            result += l_837.sa;
            result += l_837.s9;
            result += l_837.s8;
            result += l_837.s7;
            result += l_837.s6;
            result += l_837.s5;
            result += l_837.s4;
            result += l_837.s3;
            result += l_837.s2;
            result += l_837.s1;
            result += l_837.s0;
            result += l_838.s7;
            result += l_838.s6;
            result += l_838.s5;
            result += l_838.s4;
            result += l_838.s3;
            result += l_838.s2;
            result += l_838.s1;
            result += l_838.s0;
            result += l_839.w;
            result += l_839.z;
            result += l_839.y;
            result += l_839.x;
            result += l_840;
            result += l_841;
            result += l_842;
            result += l_843;
            result += l_844;
            result += l_845;
            result += l_846;
            result += l_847;
            atomic_add(&p_1082->g_special_values[99 * get_linear_group_id() + 84], result);
        }
        else
        { /* block id: 450 */
            (1 + 1);
        }
    }
    return p_35;
}


/* ------------------------------------------ */
/* 
 * reads : p_1082->g_23 p_1082->g_268.f3 p_1082->g_161 p_1082->g_333 p_1082->g_334 p_1082->g_271.f0 p_1082->g_185 p_1082->g_186 p_1082->g_528 p_1082->g_332 p_1082->g_540 p_1082->g_541 p_1082->g_542 p_1082->g_163 p_1082->g_275.f0 p_1082->g_427 p_1082->g_4 p_1082->g_156 p_1082->g_12 p_1082->g_323 p_1082->g_7 p_1082->g_563 p_1082->g_425 p_1082->g_442.f2 p_1082->g_439 p_1082->g_550 p_1082->g_596 p_1082->g_601 p_1082->g_602 p_1082->g_603 p_1082->g_614 p_1082->g_275.f1 p_1082->g_192 p_1082->g_629.f2 p_1082->g_165 p_1082->g_90 p_1082->g_659 p_1082->g_189 p_1082->g_268.f2 p_1082->g_595 p_1082->g_31 p_1082->g_706 p_1082->g_707 p_1082->g_410.f0 p_1082->g_747 p_1082->g_11 p_1082->g_442.f0
 * writes: p_1082->g_165 p_1082->g_90 p_1082->g_161 p_1082->g_23 p_1082->g_271.f0 p_1082->g_186 p_1082->g_334 p_1082->g_163 p_1082->g_550 p_1082->g_425 p_1082->g_439 p_1082->g_370 p_1082->g_603 p_1082->g_444.f0 p_1082->g_615 p_1082->g_410.f0 p_1082->g_192 p_1082->g_659 p_1082->g_189 p_1082->g_31 p_1082->g_444
 */
int8_t ** func_63(int8_t ** p_64, int8_t  p_65, int32_t * p_66, int8_t * p_67, struct S3 * p_1082)
{ /* block id: 220 */
    uint64_t *l_522 = &p_1082->g_165;
    int32_t l_523[6][7][6] = {{{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)}},{{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)}},{{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)}},{{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)}},{{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)}},{{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)},{(-3L),0x1D8DF38BL,0x70955AC6L,1L,(-1L),(-2L)}}};
    int32_t *l_526 = &p_1082->g_271.f0;
    int32_t **l_527[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    union U2 l_531 = {7UL};
    uint8_t *l_545 = (void*)0;
    uint8_t *l_546 = &p_1082->g_163;
    int32_t *l_549 = &p_1082->g_550;
    int16_t *l_551[2][8];
    VECTOR(uint8_t, 8) l_556 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 247UL), 247UL), 247UL, 255UL, 247UL);
    uint16_t l_577 = 65526UL;
    int32_t l_686 = 0x3AEBC602L;
    VECTOR(int32_t, 8) l_748 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x1380316CL), 0x1380316CL), 0x1380316CL, 0L, 0x1380316CL);
    VECTOR(int32_t, 16) l_749 = (VECTOR(int32_t, 16))(0x02041ED4L, (VECTOR(int32_t, 4))(0x02041ED4L, (VECTOR(int32_t, 2))(0x02041ED4L, 9L), 9L), 9L, 0x02041ED4L, 9L, (VECTOR(int32_t, 2))(0x02041ED4L, 9L), (VECTOR(int32_t, 2))(0x02041ED4L, 9L), 0x02041ED4L, 9L, 0x02041ED4L, 9L);
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
            l_551[i][j] = (void*)0;
    }
    (*l_526) ^= (((*l_522) = (FAKE_DIVERGE(p_1082->global_2_offset, get_global_id(2), 10) < (-1L))) | (l_523[5][5][2] == (((((**p_64) , &p_67) == (p_1082->g_90 = &p_67)) , (safe_add_func_uint8_t_u_u((p_1082->g_161.x |= p_1082->g_268.f3), ((**p_64) = 0x0CL)))) , (*p_1082->g_333))));
    (*p_1082->g_185) = (*p_1082->g_185);
    if (((((p_1082->g_528 < ((safe_rshift_func_uint16_t_u_u(((l_531 , (safe_div_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((((p_65 <= ((**p_64) = (((l_531 , ((((++(**p_1082->g_332)) > (p_65 , 1UL)) < (p_1082->g_425.s4 = (safe_div_func_uint32_t_u_u((((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 2))(p_1082->g_540.s46)).yxxyxyxxxyxyyyyx, ((VECTOR(uint8_t, 2))(p_1082->g_541.s33)).yxxyyxyyxyyxxyxy))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(GROUP_DIVERGE(1, 1), ((VECTOR(uint8_t, 4))(p_1082->g_542.s7762)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))((safe_rshift_func_int8_t_s_s((&l_527[7] != (((*l_549) = ((+p_65) || (((*l_546)++) ^ p_65))) , &l_527[8])), p_1082->g_275.f0)), p_1082->g_427.s1, 0x02L, 253UL)).hi)), 0x9EL)).hi)).wzxwzzyxxzzxwzzw))).s17, (uint8_t)p_65))).hi < 9L), (*p_1082->g_186))))) == 18446744073709551610UL)) & p_1082->g_12.s5) == p_1082->g_323.y))) && 4294967295UL) ^ 0x40D483C4L), 5)) & 0xAEA898DA175FD340L), p_65))) || p_65), (*l_526))) == (*l_526))) | (*l_526)) >= 9L) == 0x18L))
    { /* block id: 232 */
        int32_t *l_552 = (void*)0;
        int64_t **l_553 = (void*)0;
        int64_t *l_555 = &p_1082->g_189;
        int64_t **l_554 = &l_555;
        VECTOR(uint8_t, 16) l_557 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL, (VECTOR(uint8_t, 2))(255UL, 1UL), (VECTOR(uint8_t, 2))(255UL, 1UL), 255UL, 1UL, 255UL, 1UL);
        VECTOR(uint8_t, 16) l_558 = (VECTOR(uint8_t, 16))(0x60L, (VECTOR(uint8_t, 4))(0x60L, (VECTOR(uint8_t, 2))(0x60L, 1UL), 1UL), 1UL, 0x60L, 1UL, (VECTOR(uint8_t, 2))(0x60L, 1UL), (VECTOR(uint8_t, 2))(0x60L, 1UL), 0x60L, 1UL, 0x60L, 1UL);
        uint64_t l_561 = 4UL;
        VECTOR(int16_t, 2) l_562 = (VECTOR(int16_t, 2))(1L, 1L);
        VECTOR(uint64_t, 2) l_654 = (VECTOR(uint64_t, 2))(0x76C4EA51E802E6FEL, 0x46D6C0AC6F8FF4A8L);
        int8_t **l_655 = &p_1082->g_91;
        struct S0 *l_691 = &p_1082->g_444;
        int i;
        p_66 = l_552;
        p_66 = (*p_1082->g_185);
        (*l_526) = (l_522 == ((*l_554) = (void*)0));
        if (((*l_526) = ((-1L) | ((**p_64) = (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_556.s54)).xyxx)).even, ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(l_557.s00)), ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_558.se5049a7b)), ((VECTOR(uint8_t, 8))(251UL, ((VECTOR(uint8_t, 2))(0x39L, 0xD7L)), 0xD4L, (safe_sub_func_uint8_t_u_u(((**p_64) , p_65), ((l_561 ^ ((VECTOR(int16_t, 8))(l_562.yyxxyxyy)).s5) ^ (*l_526)))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0x67L, p_1082->g_7.s2, 0xB0L, 0xB0L)))).yxwwzyyx))).s05)), 0xFAL)))).s9a)).yyyx, ((VECTOR(uint8_t, 16))((((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(p_1082->g_563.yxyx)).zxzyzyzx))).s7 == (safe_unary_minus_func_uint8_t_u((safe_sub_func_int64_t_s_s(p_65, (((~(safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((**p_1082->g_332) = (((65535UL < (~((safe_lshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((0xF7L & 0xD5L), p_65)) > 3UL), 6)) == (*p_1082->g_333)))) & l_577) || (*p_1082->g_186))), 0x259EBC3FL)) || 0x42CAL), 4)), p_1082->g_425.s4))) || p_65) , 0x460DC3D406D80EB2L)))))), 0UL, 0x48L, p_1082->g_442.f2, 1UL, ((VECTOR(uint8_t, 8))(0xDDL)), 4UL, 6UL, 0UL)).s0cab, ((VECTOR(uint8_t, 4))(0xB3L)))))))).hi, ((VECTOR(uint8_t, 2))(0UL))))), ((VECTOR(uint8_t, 2))(0UL))))).xyxy, (uint8_t)p_65, (uint8_t)p_65))), ((VECTOR(uint8_t, 4))(1UL))))).even))), 0xB0L, 1UL)).x > p_65)))))
        { /* block id: 240 */
            VECTOR(int32_t, 8) l_588 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 1L), 1L), 1L, (-3L), 1L);
            uint32_t l_600[4][4][5] = {{{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL},{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL},{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL},{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL}},{{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL},{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL},{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL},{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL}},{{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL},{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL},{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL},{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL}},{{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL},{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL},{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL},{4294967295UL,8UL,4294967295UL,0x0A54F1D7L,4294967295UL}}};
            int64_t *l_630 = &p_1082->g_442.f0;
            int i, j, k;
            for (p_1082->g_334 = 18; (p_1082->g_334 == 53); p_1082->g_334++)
            { /* block id: 243 */
                int32_t l_582 = (-3L);
                int32_t l_587 = (-1L);
                int64_t **l_592 = &p_1082->g_439;
                int32_t ****l_597 = &p_1082->g_595;
                int32_t ***l_599 = &p_1082->g_596;
                int32_t ****l_598 = &l_599;
                if ((safe_lshift_func_int8_t_s_s((l_582 = (((VECTOR(int32_t, 2))(3L, (-6L))).odd && (*p_66))), (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(((((((l_587 , (+((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_588.s31)), (-10L), (-3L))))).w)) >= (p_65 <= (*l_526))) < 0xBEL) || (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_1082->g_589.wxww)).even)).hi ^ ((**p_1082->g_332) ^ (safe_rshift_func_int8_t_s_s((+((((((~(((*l_592) = p_1082->g_439) == l_522)) , (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((~(((((*l_598) = ((*l_597) = p_1082->g_595)) != &p_1082->g_596) <= (*p_1082->g_333)) >= l_588.s1)) > 0L), ((VECTOR(uint16_t, 2))(65535UL)), 65533UL)).odd)).yyyy, ((VECTOR(uint16_t, 4))(0x9233L))))).odd)).yxxyyyyyyxyxxxyx)).s9, 0x401DL))) >= p_65) < p_1082->g_550) , (****l_598)) , 0x51L)), 3))))) & l_600[1][1][3]) <= 0x6A65017FL), 0)), (*l_526))))))
                { /* block id: 248 */
                    (*p_1082->g_602) = p_1082->g_601;
                }
                else
                { /* block id: 250 */
                    volatile struct S0 *l_604 = &p_1082->g_603;
                    (*l_604) = p_1082->g_603;
                    if ((atomic_inc(&p_1082->l_atomic_input[60]) == 7))
                    { /* block id: 253 */
                        int32_t *l_605 = (void*)0;
                        int32_t l_607 = 0x6D84F6CAL;
                        int32_t *l_606 = &l_607;
                        uint16_t l_608 = 65530UL;
                        int32_t l_609 = (-1L);
                        int32_t l_610 = 0x72462E8CL;
                        l_606 = l_605;
                        l_609 = l_608;
                        l_610 |= 0x3E81EC7EL;
                        unsigned int result = 0;
                        result += l_607;
                        result += l_608;
                        result += l_609;
                        result += l_610;
                        atomic_add(&p_1082->l_special_values[60], result);
                    }
                    else
                    { /* block id: 257 */
                        (1 + 1);
                    }
                    (**l_599) = p_66;
                }
                if ((*p_1082->g_186))
                    continue;
                for (p_1082->g_444.f0 = 7; (p_1082->g_444.f0 <= (-30)); p_1082->g_444.f0 = safe_sub_func_uint32_t_u_u(p_1082->g_444.f0, 9))
                { /* block id: 265 */
                    struct S0 **l_613 = (void*)0;
                    (*p_1082->g_614) = l_613;
                }
                for (p_1082->g_410.f0 = 0; (p_1082->g_410.f0 >= 51); p_1082->g_410.f0 = safe_add_func_int8_t_s_s(p_1082->g_410.f0, 9))
                { /* block id: 270 */
                    struct S0 *l_628 = &p_1082->g_629;
                    (*l_526) |= (safe_mod_func_int16_t_s_s((((-7L) != ((((safe_sub_func_uint32_t_u_u(9UL, (*p_66))) & (safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(p_1082->g_275.f1, 8)) != (!0x1911L)), ((l_628 != (void*)0) & ((((((VECTOR(int8_t, 2))(0x58L, 8L)).lo <= ((((**p_64) = ((p_1082->g_427.s0 || (((*l_554) = &p_1082->g_189) == l_630)) <= 65535UL)) <= 0x6DL) != 0xF1L)) || 1UL) ^ 0L) , l_600[1][1][3]))))) ^ p_1082->g_540.s3) >= (****l_598))) >= (****l_598)), p_65));
                    if ((**p_1082->g_185))
                        continue;
                    if ((atomic_inc(&p_1082->g_atomic_input[99 * get_linear_group_id() + 66]) == 4))
                    { /* block id: 276 */
                        uint16_t l_631 = 0x15A1L;
                        uint64_t l_634[7][4] = {{8UL,8UL,18446744073709551615UL,1UL},{8UL,8UL,18446744073709551615UL,1UL},{8UL,8UL,18446744073709551615UL,1UL},{8UL,8UL,18446744073709551615UL,1UL},{8UL,8UL,18446744073709551615UL,1UL},{8UL,8UL,18446744073709551615UL,1UL},{8UL,8UL,18446744073709551615UL,1UL}};
                        VECTOR(int32_t, 8) l_637 = (VECTOR(int32_t, 8))(0x56B49E0DL, (VECTOR(int32_t, 4))(0x56B49E0DL, (VECTOR(int32_t, 2))(0x56B49E0DL, (-1L)), (-1L)), (-1L), 0x56B49E0DL, (-1L));
                        VECTOR(int32_t, 8) l_638 = (VECTOR(int32_t, 8))(0x15FEB372L, (VECTOR(int32_t, 4))(0x15FEB372L, (VECTOR(int32_t, 2))(0x15FEB372L, (-1L)), (-1L)), (-1L), 0x15FEB372L, (-1L));
                        VECTOR(int32_t, 16) l_639 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 4L), 4L), 4L, 1L, 4L, (VECTOR(int32_t, 2))(1L, 4L), (VECTOR(int32_t, 2))(1L, 4L), 1L, 4L, 1L, 4L);
                        VECTOR(int32_t, 16) l_640 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
                        VECTOR(int32_t, 4) l_641 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x22949B64L), 0x22949B64L);
                        uint16_t l_642 = 1UL;
                        int i, j;
                        --l_631;
                        l_634[5][2]++;
                        l_642 = ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_637.s21)))), 0L, 0x479C7B07L)).zzzyzxwzxwwxwyxz, ((VECTOR(int32_t, 16))(l_638.s1452224636702543))))), ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(l_639.s23)).xxxyyyyyxxyxxxyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_640.sb9b9)))).even)).yyyyyyyyxyyyxyyy))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_641.yzzxwwxyxwxyzxxw)))).s91)).yxyy)).wzzwzzzxxxwzxzzy))).s2;
                        unsigned int result = 0;
                        result += l_631;
                        int l_634_i0, l_634_i1;
                        for (l_634_i0 = 0; l_634_i0 < 7; l_634_i0++) {
                            for (l_634_i1 = 0; l_634_i1 < 4; l_634_i1++) {
                                result += l_634[l_634_i0][l_634_i1];
                            }
                        }
                        result += l_637.s7;
                        result += l_637.s6;
                        result += l_637.s5;
                        result += l_637.s4;
                        result += l_637.s3;
                        result += l_637.s2;
                        result += l_637.s1;
                        result += l_637.s0;
                        result += l_638.s7;
                        result += l_638.s6;
                        result += l_638.s5;
                        result += l_638.s4;
                        result += l_638.s3;
                        result += l_638.s2;
                        result += l_638.s1;
                        result += l_638.s0;
                        result += l_639.sf;
                        result += l_639.se;
                        result += l_639.sd;
                        result += l_639.sc;
                        result += l_639.sb;
                        result += l_639.sa;
                        result += l_639.s9;
                        result += l_639.s8;
                        result += l_639.s7;
                        result += l_639.s6;
                        result += l_639.s5;
                        result += l_639.s4;
                        result += l_639.s3;
                        result += l_639.s2;
                        result += l_639.s1;
                        result += l_639.s0;
                        result += l_640.sf;
                        result += l_640.se;
                        result += l_640.sd;
                        result += l_640.sc;
                        result += l_640.sb;
                        result += l_640.sa;
                        result += l_640.s9;
                        result += l_640.s8;
                        result += l_640.s7;
                        result += l_640.s6;
                        result += l_640.s5;
                        result += l_640.s4;
                        result += l_640.s3;
                        result += l_640.s2;
                        result += l_640.s1;
                        result += l_640.s0;
                        result += l_641.w;
                        result += l_641.z;
                        result += l_641.y;
                        result += l_641.x;
                        result += l_642;
                        atomic_add(&p_1082->g_special_values[99 * get_linear_group_id() + 66], result);
                    }
                    else
                    { /* block id: 280 */
                        (1 + 1);
                    }
                }
            }
        }
        else
        { /* block id: 285 */
            uint16_t l_650 = 9UL;
            VECTOR(int32_t, 2) l_672 = (VECTOR(int32_t, 2))(6L, 0x44EBF2F3L);
            int64_t *l_687 = (void*)0;
            int32_t l_695 = 0x22F5B9BAL;
            int i;
            for (l_561 = 11; (l_561 < 34); l_561 = safe_add_func_uint8_t_u_u(l_561, 7))
            { /* block id: 288 */
                int32_t l_645 = 0x467B81F6L;
                union U1 l_653 = {-8L};
                uint64_t *l_656 = (void*)0;
                uint64_t *l_657 = (void*)0;
                uint64_t *l_658 = &p_1082->g_659[0];
                uint16_t *l_671 = &l_577;
                struct S0 *l_690[3][9][1] = {{{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268}},{{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268}},{{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268},{&p_1082->g_268}}};
                uint32_t **l_692 = &p_1082->g_333;
                int i, j, k;
                l_650 &= ((p_1082->g_192.sb--) <= (safe_rshift_func_int16_t_s_s(((p_1082->g_629.f2 | l_645) < p_1082->g_165), 4)));
                if (l_650)
                    break;
                l_672.x &= (safe_sub_func_int32_t_s_s((l_653 , ((l_655 = (((**p_64) , ((VECTOR(uint64_t, 16))(l_654.yxyyyxxyyyyxyxyy)).s9) , func_88((*p_1082->g_90), p_1082))) != (((((*l_658) = p_65) , (*p_64)) == (void*)0) , ((safe_mod_func_uint16_t_u_u(((((*l_671) = (safe_div_func_uint32_t_u_u((((((**p_64) <= (safe_lshift_func_uint8_t_u_s(((((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint32_t_u(((void*)0 == l_671))), (*l_526))), p_65)) ^ 0x76L) > p_1082->g_659[0]) ^ (**p_64)), 6))) > p_1082->g_541.s2) <= p_65) | p_65), 0x1BE80E60L))) >= 0UL) & 0x6FEBCE407938CE6EL), l_650)) , (void*)0)))), 0xC5776B69L));
                for (p_1082->g_189 = 0; (p_1082->g_189 > (-18)); p_1082->g_189 = safe_sub_func_uint32_t_u_u(p_1082->g_189, 3))
                { /* block id: 298 */
                    uint16_t l_685[10][7] = {{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL}};
                    int64_t *l_688 = (void*)0;
                    int32_t *l_689 = &l_645;
                    uint32_t **l_693 = &p_1082->g_333;
                    int32_t l_694 = (-1L);
                    int i, j;
                    (*p_1082->g_596) = (*p_1082->g_185);
                    l_695 |= ((*l_526) = (((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(65528UL, (l_653.f0 , (safe_div_func_uint8_t_u_u(((((**p_64) &= (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((l_685[6][4] = l_650) || (l_694 &= ((((((*l_671) |= 0x397EL) || ((l_672.y != ((l_686 , l_687) != l_688)) & ((((*l_689) = p_65) , l_690[2][3][0]) == l_691))) == (**p_1082->g_332)) , l_692) != l_693))), p_1082->g_268.f2)), p_65))) <= p_1082->g_192.sd) , FAKE_DIVERGE(p_1082->global_1_offset, get_global_id(1), 10)), FAKE_DIVERGE(p_1082->local_1_offset, get_local_id(1), 10)))))), p_1082->g_563.x)) | 8L) <= l_653.f0));
                    if ((***p_1082->g_595))
                        break;
                }
            }
        }
    }
    else
    { /* block id: 311 */
        int16_t l_696 = (-1L);
        int32_t l_697[3];
        uint32_t l_698 = 0xE8C62A11L;
        uint32_t *l_743 = (void*)0;
        uint32_t *l_744 = &p_1082->g_410.f0;
        int64_t *l_752 = (void*)0;
        int64_t *l_753 = (void*)0;
        int64_t *l_754 = (void*)0;
        int64_t *l_755 = (void*)0;
        int64_t *l_756 = (void*)0;
        int64_t *l_757 = (void*)0;
        int64_t *l_758[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_759 = 0x113A88E5L;
        int i;
        for (i = 0; i < 3; i++)
            l_697[i] = 5L;
        ++l_698;
        for (p_1082->g_31 = 19; (p_1082->g_31 >= 3); p_1082->g_31 = safe_sub_func_int32_t_s_s(p_1082->g_31, 2))
        { /* block id: 315 */
            int32_t *l_703 = &p_1082->g_4;
            (*p_1082->g_596) = l_703;
            for (l_698 = 0; (l_698 == 53); l_698 = safe_add_func_uint8_t_u_u(l_698, 1))
            { /* block id: 319 */
                (*p_1082->g_707) = p_1082->g_706;
            }
            if ((atomic_inc(&p_1082->l_atomic_input[0]) == 3))
            { /* block id: 323 */
                int32_t l_708 = 0L;
                uint8_t l_736[1][7][1] = {{{250UL},{250UL},{250UL},{250UL},{250UL},{250UL},{250UL}}};
                int i, j, k;
                for (l_708 = (-18); (l_708 < (-5)); l_708++)
                { /* block id: 326 */
                    int32_t l_711 = 0x6898596DL;
                    union U1 l_712 = {8L};
                    int16_t l_713 = 9L;
                    VECTOR(int32_t, 2) l_714 = (VECTOR(int32_t, 2))(0x33692F85L, (-8L));
                    VECTOR(int32_t, 16) l_715 = (VECTOR(int32_t, 16))(0x5EA60662L, (VECTOR(int32_t, 4))(0x5EA60662L, (VECTOR(int32_t, 2))(0x5EA60662L, (-1L)), (-1L)), (-1L), 0x5EA60662L, (-1L), (VECTOR(int32_t, 2))(0x5EA60662L, (-1L)), (VECTOR(int32_t, 2))(0x5EA60662L, (-1L)), 0x5EA60662L, (-1L), 0x5EA60662L, (-1L));
                    uint8_t l_716 = 0xBEL;
                    int32_t l_717 = (-1L);
                    VECTOR(int32_t, 2) l_718 = (VECTOR(int32_t, 2))(0x209E86B8L, 1L);
                    int32_t l_719 = 0x0C828013L;
                    VECTOR(int32_t, 16) l_720 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x64545E9CL), 0x64545E9CL), 0x64545E9CL, 1L, 0x64545E9CL, (VECTOR(int32_t, 2))(1L, 0x64545E9CL), (VECTOR(int32_t, 2))(1L, 0x64545E9CL), 1L, 0x64545E9CL, 1L, 0x64545E9CL);
                    int16_t l_721 = 0x7D86L;
                    int8_t l_722 = 0x3AL;
                    VECTOR(int32_t, 2) l_723 = (VECTOR(int32_t, 2))(0x13AA7F82L, 0x1AF7A210L);
                    VECTOR(uint16_t, 4) l_724 = (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0UL), 0UL);
                    VECTOR(uint16_t, 4) l_725 = (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0UL), 0UL);
                    uint32_t l_726 = 4294967293UL;
                    int64_t l_727 = 0x0C35E44AF56C8089L;
                    uint16_t l_728 = 65535UL;
                    uint64_t l_729[10][9][2] = {{{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL}},{{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL}},{{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL}},{{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL}},{{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL}},{{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL}},{{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL}},{{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL}},{{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL}},{{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL},{0xAC73DCDF0D374D65L,3UL}}};
                    int8_t l_730 = (-4L);
                    int16_t l_731 = 0x68C6L;
                    int i, j, k;
                    l_731 |= (l_711 , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x4A7623B3L, 0x308E9870L, (l_720.s6 = (l_712 , (l_729[4][4][1] ^= (l_728 ^= ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(l_713, ((VECTOR(int32_t, 4))(l_714.yyyy)).z, ((VECTOR(int32_t, 2))(l_715.se0)), (l_717 = (GROUP_DIVERGE(2, 1) , (l_716 = (-1L)))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(l_718.yyyyyyxyxyyyyyyy)), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(6L, l_719, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_720.sa2)), 0x47C47AF6L, 0x2D63B216L)), (int32_t)l_721))), ((VECTOR(int32_t, 4))(0x67F3FB69L, (l_722 = 0x688ED4EDL), (-1L), 0x6562AD44L))))).odd)), ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(l_723.yyyyxxyy)).s62, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(5L, 0x6B32L, 0x007FL, (-4L))).even, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_724.wyzx)).wwwwwzxw)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_725.yzwzwxwzwyxzxwyw)).s66f0)).wyxxwwxx))).s5, l_726, 0xEE59L, 65531UL, 65535UL, 0xEEACL, 0x5E82L, 65528UL)).s71)))))), 0x0E62F257L, (-4L))).yxzxzyzyxwwxwyyx, ((VECTOR(int32_t, 16))(0x28774500L)), ((VECTOR(int32_t, 16))(0L))))).s7bf7, ((VECTOR(int32_t, 4))((-7L))), ((VECTOR(int32_t, 4))((-4L)))))), (-1L), 0x127F4BFFL)), ((VECTOR(int32_t, 4))(9L)), 0x6BE0C8F5L, 0x7CDF665CL)).s5c, ((VECTOR(int32_t, 2))(0x60CE7422L))))), (int32_t)l_727))).xxxyyxyyxxxxxxxx))).s9d)), 0x7CB6ECACL)), ((VECTOR(int32_t, 8))(0x3670B308L))))).s21, ((VECTOR(int32_t, 2))(0x6CF90727L))))).lo)))), ((VECTOR(int32_t, 2))((-1L))), 1L, l_730, ((VECTOR(int32_t, 4))(0x3C82BBEAL)), 0x4ADDDF76L, 0x370B98ABL, 0x770A9F9DL, (-1L), 3L)).s0e11)).y);
                    for (l_723.y = 0; (l_723.y > 23); l_723.y = safe_add_func_uint16_t_u_u(l_723.y, 5))
                    { /* block id: 336 */
                        VECTOR(int32_t, 16) l_734 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 1L), 1L), 1L, (-5L), 1L, (VECTOR(int32_t, 2))((-5L), 1L), (VECTOR(int32_t, 2))((-5L), 1L), (-5L), 1L, (-5L), 1L);
                        int32_t l_735 = 0L;
                        int i;
                        l_712.f0 = (l_718.x = ((VECTOR(int32_t, 16))(l_734.sbcae5acdb4090125)).s7);
                        l_711 = (l_720.s5 = l_735);
                    }
                }
                --l_736[0][5][0];
                unsigned int result = 0;
                result += l_708;
                int l_736_i0, l_736_i1, l_736_i2;
                for (l_736_i0 = 0; l_736_i0 < 1; l_736_i0++) {
                    for (l_736_i1 = 0; l_736_i1 < 7; l_736_i1++) {
                        for (l_736_i2 = 0; l_736_i2 < 1; l_736_i2++) {
                            result += l_736[l_736_i0][l_736_i1][l_736_i2];
                        }
                    }
                }
                atomic_add(&p_1082->l_special_values[0], result);
            }
            else
            { /* block id: 344 */
                (1 + 1);
            }
            if (l_697[0])
                break;
        }
        (*l_526) ^= ((l_531 , (((((l_697[0] = (safe_rshift_func_int8_t_s_s(0x31L, ((((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(1L, (safe_mod_func_uint32_t_u_u(((**p_1082->g_332) = (l_697[0] , (0L >= p_65))), ((*l_744)--))), ((VECTOR(int32_t, 2))(p_1082->g_747.s45)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_748.s7476152647702137)).s9d4f)).y, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x3899D256L, 5L, (p_65 | (p_1082->g_11.x || ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(6L, 0x12D1L)).yxyy)).x)), 0L, ((VECTOR(int32_t, 2))(l_749.sc7)), 8L, 1L)).s74)), 4L)), (!((safe_mul_func_uint16_t_u_u(((l_759 = (0x2EL == p_1082->g_442.f0)) < 0x18D3652354B8845CL), p_65)) && 0UL)), ((VECTOR(int32_t, 4))(0L)), (**p_1082->g_596), (-10L), 9L)).s0bfc, ((VECTOR(int32_t, 4))(0L))))), ((VECTOR(int32_t, 4))(7L))))).hi, ((VECTOR(int32_t, 2))(2L))))).odd , p_65) <= p_65)))) | p_65) ^ (-8L)) , (-6L)) || 0x32608684959A57D9L)) | 0x17224C72L);
    }
    return &p_1082->g_91;
}


/* ------------------------------------------ */
/* 
 * reads : p_1082->g_163 p_1082->g_333 p_1082->g_334 p_1082->g_13 p_1082->g_370.f0 p_1082->g_186 p_1082->g_4 p_1082->g_156 p_1082->g_192
 * writes: p_1082->g_163 p_1082->g_334
 */
union U1  func_71(struct S0 * p_72, int8_t  p_73, int64_t  p_74, struct S3 * p_1082)
{ /* block id: 215 */
    uint16_t l_492[3][8] = {{1UL,0x76BAL,0x76BAL,1UL,1UL,0x76BAL,0x76BAL,1UL},{1UL,0x76BAL,0x76BAL,1UL,1UL,0x76BAL,0x76BAL,1UL},{1UL,0x76BAL,0x76BAL,1UL,1UL,0x76BAL,0x76BAL,1UL}};
    uint8_t *l_499 = (void*)0;
    uint8_t *l_500 = &p_1082->g_163;
    VECTOR(uint16_t, 8) l_508 = (VECTOR(uint16_t, 8))(0x3B72L, (VECTOR(uint16_t, 4))(0x3B72L, (VECTOR(uint16_t, 2))(0x3B72L, 0xDAC5L), 0xDAC5L), 0xDAC5L, 0x3B72L, 0xDAC5L);
    VECTOR(uint16_t, 8) l_515 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x66EFL), 0x66EFL), 0x66EFL, 65535UL, 0x66EFL);
    uint32_t **l_516 = &p_1082->g_333;
    int32_t *l_517 = (void*)0;
    int32_t l_518 = 0L;
    union U1 l_519 = {0x3BE6CE7DL};
    int i, j;
    l_518 |= (safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(p_74, (((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((0x50L >= (l_492[2][7] & l_492[2][7])), 10)), (safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(((~((*p_1082->g_333) &= (safe_rshift_func_int8_t_s_u(p_74, ((*l_500)++))))) == (p_1082->g_13.s4 , p_1082->g_370[3].f0)), (safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_int32_t_s((safe_mod_func_uint32_t_u_u(((((((((VECTOR(uint16_t, 4))(l_508.s6366)).x , ((safe_add_func_uint64_t_u_u(0UL, (safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_515.s7500)).z, (0x788DL & p_73))) <= p_73), l_508.s7)))) , (-4L))) > l_508.s5) <= p_74) , l_516) != l_516) | 18446744073709551615UL), (*p_1082->g_186))))) , p_1082->g_192.sf), 0)))), p_74)))) && (-8L)) ^ 2L))), 5));
    return l_519;
}


/* ------------------------------------------ */
/* 
 * reads : p_1082->g_333 p_1082->g_334 p_1082->g_31
 * writes: p_1082->g_165 p_1082->g_31
 */
struct S0 * func_75(int8_t ** p_76, struct S3 * p_1082)
{ /* block id: 210 */
    int32_t l_470 = 0x1D8E6388L;
    uint64_t *l_471 = &p_1082->g_165;
    struct S0 *l_480 = &p_1082->g_442;
    struct S0 **l_479 = &l_480;
    struct S0 ***l_478 = &l_479;
    uint8_t *l_481[5];
    int32_t l_482[1];
    int32_t *l_483 = &p_1082->g_31;
    int i;
    for (i = 0; i < 5; i++)
        l_481[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_482[i] = 0x12BD8206L;
    (*l_483) ^= (l_470 < (l_482[0] = ((((*l_471) = (((void*)0 != l_471) != FAKE_DIVERGE(p_1082->group_1_offset, get_group_id(1), 10))) < ((((l_470 ^ ((-3L) != (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((*p_1082->g_333), l_470)), 8)))) == l_470) , l_478) == (void*)0)) == 0x75B3L)));
    return &p_1082->g_371;
}


/* ------------------------------------------ */
/* 
 * reads : p_1082->g_410.f0 p_1082->g_332 p_1082->g_333 p_1082->g_334
 * writes: p_1082->g_410.f0 p_1082->g_165 p_1082->g_186
 */
int8_t ** func_77(uint64_t  p_78, struct S0 * p_79, struct S3 * p_1082)
{ /* block id: 202 */
    uint16_t l_452 = 0xE1C9L;
    VECTOR(int8_t, 16) l_454 = (VECTOR(int8_t, 16))(0x3AL, (VECTOR(int8_t, 4))(0x3AL, (VECTOR(int8_t, 2))(0x3AL, (-1L)), (-1L)), (-1L), 0x3AL, (-1L), (VECTOR(int8_t, 2))(0x3AL, (-1L)), (VECTOR(int8_t, 2))(0x3AL, (-1L)), 0x3AL, (-1L), 0x3AL, (-1L));
    VECTOR(int8_t, 16) l_455 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x6BL), 0x6BL), 0x6BL, 0L, 0x6BL, (VECTOR(int8_t, 2))(0L, 0x6BL), (VECTOR(int8_t, 2))(0L, 0x6BL), 0L, 0x6BL, 0L, 0x6BL);
    VECTOR(int16_t, 8) l_459 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
    VECTOR(int16_t, 4) l_460 = (VECTOR(int16_t, 4))(0x5BDAL, (VECTOR(int16_t, 2))(0x5BDAL, 0x17E7L), 0x17E7L);
    VECTOR(int8_t, 2) l_466 = (VECTOR(int8_t, 2))(0x10L, 0x45L);
    int32_t *l_468 = &p_1082->g_4;
    int i;
    for (p_1082->g_410.f0 = 17; (p_1082->g_410.f0 < 20); ++p_1082->g_410.f0)
    { /* block id: 205 */
        uint32_t l_451[8][6][5] = {{{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL}},{{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL}},{{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL}},{{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL}},{{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL}},{{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL}},{{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL}},{{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL},{1UL,0x63AC752FL,0x5AB4B9E5L,5UL,4294967286UL}}};
        VECTOR(int8_t, 16) l_461 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x3CL), 0x3CL), 0x3CL, 0L, 0x3CL, (VECTOR(int8_t, 2))(0L, 0x3CL), (VECTOR(int8_t, 2))(0L, 0x3CL), 0L, 0x3CL, 0L, 0x3CL);
        VECTOR(int8_t, 2) l_462 = (VECTOR(int8_t, 2))(0x7CL, 0x16L);
        VECTOR(int8_t, 16) l_463 = (VECTOR(int8_t, 16))(0x6AL, (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, 0x62L), 0x62L), 0x62L, 0x6AL, 0x62L, (VECTOR(int8_t, 2))(0x6AL, 0x62L), (VECTOR(int8_t, 2))(0x6AL, 0x62L), 0x6AL, 0x62L, 0x6AL, 0x62L);
        uint64_t *l_467 = &p_1082->g_165;
        int32_t **l_469 = &p_1082->g_186;
        int i, j, k;
        (*l_469) = ((((*l_467) = ((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))((safe_sub_func_int64_t_s_s(((l_451[6][5][4] | l_452) == p_78), p_78)), 255UL, 0x1DL, 6UL)).ywywwyyzwxyyxzyx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 2))(p_1082->g_453.yy)), ((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(l_454.s8a29)).wzxwywwzwxxwzzzz, ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_455.s273040d4388baf30)).s803d)), ((VECTOR(int8_t, 4))(p_1082->g_456.sb6e5))))).xxwzwyywwwyyyzxx))).s5e))))).yyxx)).wwxwyyzwyzwxyzww))).s5, (l_452 , ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(0x665AL, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(l_459.s21)).xyyx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_460.yyxwzzwx)).s34)).yxxx, ((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(l_455.s1, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 4))(l_461.s24ae)).zwywwyxx, ((VECTOR(int8_t, 16))(0x22L, 0x08L, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(l_462.xyyyxxyy)).s57, ((VECTOR(int8_t, 4))(l_463.sd9e8)).even))), 0x43L, 0x5DL, 0x67L, 0x0BL, ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_1082->g_464.yxyx)), ((VECTOR(int8_t, 2))(p_1082->g_465.s70)), 0L, 0L)).lo, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_466.xx)).xyyx))))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(0x73L, (p_78 || ((0x616FD3B7E5FB1E76L < p_1082->g_189) <= p_1082->g_366.y)), ((VECTOR(int8_t, 4))(0x69L)), (-1L), 1L)).s62, ((VECTOR(int8_t, 2))((-9L)))))).xxxxxxxx, ((VECTOR(int8_t, 8))(1L))))).s46)), 0x41L, 6L)).hi))).s75)), 0L)), ((VECTOR(int8_t, 4))((-1L)))))).lo)), ((VECTOR(uint8_t, 2))(1UL))))).yxxxxxxxxxxxxyyy)), ((VECTOR(int16_t, 16))(0x21F6L))))).s48f3))).hi)), 0x2859L, ((VECTOR(int16_t, 8))(0x0648L)), 6L, ((VECTOR(int16_t, 2))(8L)), 0x274AL)))).s9, l_462.x)) <= (**p_1082->g_332))))) <= 0L)) == 0x16C0DB6F2181AFE1L) , l_468);
    }
    return &p_1082->g_91;
}


/* ------------------------------------------ */
/* 
 * reads : p_1082->g_186 p_1082->g_301 p_1082->g_410 p_1082->g_24 p_1082->l_comm_values p_1082->g_332 p_1082->g_333 p_1082->g_334 p_1082->g_31 p_1082->g_410.f0 p_1082->g_424 p_1082->g_425 p_1082->g_427 p_1082->g_165 p_1082->g_161 p_1082->g_271.f0 p_1082->g_156 p_1082->g_440 p_1082->g_442
 * writes: p_1082->g_156 p_1082->g_366 p_1082->g_24 p_1082->g_31 p_1082->g_165 p_1082->g_436 p_1082->g_439 p_1082->g_268 p_1082->g_371
 */
uint64_t  func_80(struct S0 * p_81, int8_t * p_82, int8_t  p_83, struct S3 * p_1082)
{ /* block id: 188 */
    VECTOR(uint8_t, 16) l_391 = (VECTOR(uint8_t, 16))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0xD9L), 0xD9L), 0xD9L, 7UL, 0xD9L, (VECTOR(uint8_t, 2))(7UL, 0xD9L), (VECTOR(uint8_t, 2))(7UL, 0xD9L), 7UL, 0xD9L, 7UL, 0xD9L);
    int8_t **l_392 = &p_1082->g_91;
    uint16_t *l_407[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t *l_411 = &p_1082->g_24[7];
    uint16_t l_412 = 65534UL;
    int32_t *l_413 = &p_1082->g_31;
    VECTOR(uint64_t, 16) l_420 = (VECTOR(uint64_t, 16))(0x897BB4D0AD04CC3FL, (VECTOR(uint64_t, 4))(0x897BB4D0AD04CC3FL, (VECTOR(uint64_t, 2))(0x897BB4D0AD04CC3FL, 1UL), 1UL), 1UL, 0x897BB4D0AD04CC3FL, 1UL, (VECTOR(uint64_t, 2))(0x897BB4D0AD04CC3FL, 1UL), (VECTOR(uint64_t, 2))(0x897BB4D0AD04CC3FL, 1UL), 0x897BB4D0AD04CC3FL, 1UL, 0x897BB4D0AD04CC3FL, 1UL);
    VECTOR(uint64_t, 2) l_421 = (VECTOR(uint64_t, 2))(0xF9214763016100B9L, 0xEAFF3A252A0031D7L);
    VECTOR(int16_t, 2) l_426 = (VECTOR(int16_t, 2))((-9L), (-1L));
    VECTOR(uint16_t, 2) l_430 = (VECTOR(uint16_t, 2))(0UL, 0xD8C2L);
    int32_t l_431[9] = {1L,0x32905DFBL,1L,1L,0x32905DFBL,1L,1L,0x32905DFBL,1L};
    int32_t l_434 = 0L;
    uint64_t *l_435 = (void*)0;
    int64_t *l_438[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t **l_437[8][9][3] = {{{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]}},{{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]}},{{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]}},{{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]}},{{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]}},{{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]}},{{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]}},{{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]},{&l_438[2],&l_438[3],&l_438[3]}}};
    int i, j, k;
    (*l_413) ^= (safe_div_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(255UL, 0UL)))).even, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 16))(l_391.s47b1ed3e3549d8bb)).s84, ((VECTOR(uint8_t, 4))((((void*)0 == l_392) || ((((((((*p_1082->g_186) = l_391.s3) | (0xBDBDL <= (l_391.s0 , (safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(0x4CAEDEE1E57EB557L, 0x224E06F0F367BC02L)).odd, (safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s(p_1082->g_301.s1, (((((*l_411) |= (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((!(p_1082->g_366.z = ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(0x9AF5L, 0x0784L)).yxyxyyxx))).s13)).hi)) && ((void*)0 != &p_1082->g_332)), (safe_add_func_uint8_t_u_u(((((p_1082->g_410 , p_81) == p_81) ^ 0x7B8501D7L) , p_83), l_391.sa)))), l_391.sf))) ^ p_1082->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1082->tid, 17))]) < p_83) == 0xFB9A1B0DL))), FAKE_DIVERGE(p_1082->local_1_offset, get_local_id(1), 10))))), 0x14D6CD1FB1966507L))))) < (**p_1082->g_332)) , p_83) != l_412) == 18446744073709551614UL) < p_83)), 255UL, 1UL, 0x72L)).even))))).lo)), GROUP_DIVERGE(0, 1)));
    atomic_min(&p_1082->l_atomic_reduction[0], (FAKE_DIVERGE(p_1082->local_0_offset, get_local_id(0), 10) & (p_83 >= (safe_add_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(p_83, ((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 2))(0UL, 18446744073709551610UL)), ((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(18446744073709551609UL, 18446744073709551615UL)))), ((VECTOR(uint64_t, 2))(l_420.sb4)))))))).odd)) != (((((p_1082->g_410.f0 == ((p_1082->g_439 = ((((~((((VECTOR(uint64_t, 4))(l_421.yyxx)).x , ((p_1082->g_436 = ((safe_mod_func_uint16_t_u_u((l_434 |= ((*l_413) = ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 8))(0x4A20L, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(p_1082->g_424.wxxw)).hi, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x02L, 0xAFL)), 248UL, 0xE4L, 0x37L, 0xFBL, 0xA2L, 0xB1L)).s40))).yyyxyyxx)).even, ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(p_1082->g_425.s17)).yyyyxxyx, ((VECTOR(int16_t, 8))(0x681CL, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(l_426.yxyxyxyyxyxyxxxy)).s34, ((VECTOR(int16_t, 16))(p_1082->g_427.sa720bd1c213781d6)).s05))), (*l_413), 0x3EACL, ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))(0L, 1L)), (int16_t)((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(0x05L, 0x77L, 0x7AL, (-1L))).hi)), (int8_t)(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(0x93D109C56BF9010BL, (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(l_430.xyyyxyyxxxyyyxyy)).s6, (*l_413))), 0UL, ((p_1082->g_165 = (l_431[5] , (((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 0x06D5BABEL)).yyxxyyyy)), (int32_t)((safe_lshift_func_int16_t_s_u(((*l_411) = (p_1082->g_410.f0 < p_1082->g_165)), 1)) ^ ((VECTOR(uint32_t, 8))(0x308A6725L, ((VECTOR(uint32_t, 4))(1UL, 0x399C48B1L, 9UL, 4294967295UL)), 0UL, 5UL, 0x711AC801L)).s6), (int32_t)0x13C8B39CL))).s4 , (*l_413)))) , 4UL), ((VECTOR(uint64_t, 2))(3UL)), 4UL, 2UL)).s2365214225755023)).s5a1a)).x & p_83)))).xxyxyyyyxyxxxxxx))), ((VECTOR(uint8_t, 16))(1UL))))).odd)).s2510607563301450)).s0893, (int16_t)1L))).odd, ((VECTOR(int16_t, 2))(1L))))).hi))), 1L)), ((VECTOR(int16_t, 8))((-5L)))))).even))), ((VECTOR(int16_t, 2))(0x5676L)), 0x32B7L)), ((VECTOR(int16_t, 8))(1L))))))))).s51, ((VECTOR(int16_t, 2))(3L))))).yyyyyyxx, ((VECTOR(uint16_t, 8))(0x28EFL)), ((VECTOR(uint16_t, 8))(0UL))))).odd, ((VECTOR(uint16_t, 4))(0xE249L))))), ((VECTOR(uint16_t, 4))(0x643CL))))).z)), p_1082->g_161.y)) || (*l_413))) <= 0x4FCAF57F61D5CEE5L)) & p_1082->g_271.f0)) < p_1082->g_156) > l_421.x) , l_435)) == p_1082->g_440)) & p_83) != (**p_1082->g_332)) && (*l_413)) ^ p_83)), (*p_82))))));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1082->v_collective += p_1082->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    (*p_81) = p_1082->g_442;
    return p_83;
}


/* ------------------------------------------ */
/* 
 * reads : p_1082->g_31 p_1082->g_11 p_1082->g_185 p_1082->g_156 p_1082->g_192 p_1082->g_186 p_1082->g_37.f2 p_1082->g_3 p_1082->g_268 p_1082->g_271 p_1082->g_275 p_1082->g_90 p_1082->g_91 p_1082->g_24 p_1082->g_286 p_1082->g_2 p_1082->g_366 p_1082->g_311 p_1082->g_370 p_1082->g_4 p_1082->g_381 p_1082->g_39 p_1082->g_37 p_1082->g_334 p_1082->g_163
 * writes: p_1082->g_31 p_1082->g_189 p_1082->g_156 p_1082->g_186 p_1082->g_23 p_1082->g_165 p_1082->g_286 p_1082->g_271.f4 p_1082->g_371 p_1082->g_24
 */
struct S0 * func_84(int8_t ** p_85, uint8_t  p_86, union U1  p_87, struct S3 * p_1082)
{ /* block id: 51 */
    uint16_t l_158[9] = {0x4E88L,0x4E88L,0x4E88L,0x4E88L,0x4E88L,0x4E88L,0x4E88L,0x4E88L,0x4E88L};
    struct S0 *l_172[3];
    struct S0 **l_171 = &l_172[2];
    struct S0 ***l_170 = &l_171;
    int32_t *l_183 = &p_1082->g_4;
    int32_t **l_182[2][5][2] = {{{&l_183,&l_183},{&l_183,&l_183},{&l_183,&l_183},{&l_183,&l_183},{&l_183,&l_183}},{{&l_183,&l_183},{&l_183,&l_183},{&l_183,&l_183},{&l_183,&l_183},{&l_183,&l_183}}};
    int32_t **l_184 = (void*)0;
    int32_t l_197 = 0x1A822638L;
    VECTOR(int32_t, 16) l_203 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x522E32B8L), 0x522E32B8L), 0x522E32B8L, (-1L), 0x522E32B8L, (VECTOR(int32_t, 2))((-1L), 0x522E32B8L), (VECTOR(int32_t, 2))((-1L), 0x522E32B8L), (-1L), 0x522E32B8L, (-1L), 0x522E32B8L);
    VECTOR(uint32_t, 2) l_226 = (VECTOR(uint32_t, 2))(1UL, 3UL);
    uint64_t l_262 = 0x29E4BBC024C7D9B6L;
    VECTOR(uint64_t, 8) l_263 = (VECTOR(uint64_t, 8))(0x46ECEB4F8A2E917EL, (VECTOR(uint64_t, 4))(0x46ECEB4F8A2E917EL, (VECTOR(uint64_t, 2))(0x46ECEB4F8A2E917EL, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 0x46ECEB4F8A2E917EL, 18446744073709551606UL);
    VECTOR(uint32_t, 4) l_307 = (VECTOR(uint32_t, 4))(0x6F61382AL, (VECTOR(uint32_t, 2))(0x6F61382AL, 4294967294UL), 4294967294UL);
    VECTOR(uint8_t, 8) l_352 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 9UL), 9UL), 9UL, 0UL, 9UL);
    VECTOR(int8_t, 2) l_355 = (VECTOR(int8_t, 2))((-1L), 1L);
    VECTOR(uint32_t, 4) l_367 = (VECTOR(uint32_t, 4))(0xC5BE27D4L, (VECTOR(uint32_t, 2))(0xC5BE27D4L, 4UL), 4UL);
    int16_t *l_378 = &p_1082->g_24[1];
    uint16_t l_386 = 0xE66DL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_172[i] = (void*)0;
    for (p_1082->g_31 = 0; (p_1082->g_31 == 5); p_1082->g_31++)
    { /* block id: 54 */
        struct S0 *l_107[4];
        struct S0 **l_106 = &l_107[0];
        struct S0 ***l_105 = &l_106;
        int32_t *l_155 = &p_1082->g_156;
        int32_t *l_157[6][10];
        uint8_t *l_162 = &p_1082->g_163;
        uint64_t *l_164 = &p_1082->g_165;
        uint16_t *l_176 = (void*)0;
        uint16_t *l_177 = &l_158[8];
        VECTOR(uint8_t, 8) l_212 = (VECTOR(uint8_t, 8))(0x41L, (VECTOR(uint8_t, 4))(0x41L, (VECTOR(uint8_t, 2))(0x41L, 255UL), 255UL), 255UL, 0x41L, 255UL);
        VECTOR(uint8_t, 4) l_213 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL);
        uint64_t l_247 = 18446744073709551615UL;
        int32_t l_249[3];
        uint64_t l_253[4][2] = {{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL}};
        VECTOR(int8_t, 2) l_302 = (VECTOR(int8_t, 2))(0x0BL, 0x7BL);
        VECTOR(int8_t, 2) l_303 = (VECTOR(int8_t, 2))(0x19L, 0x43L);
        VECTOR(int8_t, 16) l_305 = (VECTOR(int8_t, 16))(0x62L, (VECTOR(int8_t, 4))(0x62L, (VECTOR(int8_t, 2))(0x62L, (-1L)), (-1L)), (-1L), 0x62L, (-1L), (VECTOR(int8_t, 2))(0x62L, (-1L)), (VECTOR(int8_t, 2))(0x62L, (-1L)), 0x62L, (-1L), 0x62L, (-1L));
        VECTOR(int8_t, 8) l_306 = (VECTOR(int8_t, 8))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, 1L), 1L), 1L, 0x15L, 1L);
        VECTOR(int8_t, 16) l_354 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 3L), 3L), 3L, 1L, 3L, (VECTOR(int8_t, 2))(1L, 3L), (VECTOR(int8_t, 2))(1L, 3L), 1L, 3L, 1L, 3L);
        int i, j;
        for (i = 0; i < 4; i++)
            l_107[i] = &p_1082->g_37;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 10; j++)
                l_157[i][j] = &p_1082->g_156;
        }
        for (i = 0; i < 3; i++)
            l_249[i] = 0x14E9EA8AL;
        (*l_105) = (void*)0;
        if ((atomic_inc(&p_1082->l_atomic_input[44]) == 0))
        { /* block id: 57 */
            int32_t l_108 = 0L;
            for (l_108 = 0; (l_108 >= (-5)); l_108--)
            { /* block id: 60 */
                int64_t l_111 = 0x524E1215561C656CL;
                int32_t l_153 = 0x77D0102AL;
                int32_t *l_152 = &l_153;
                int32_t *l_154[4] = {&l_153,&l_153,&l_153,&l_153};
                int i;
                if (l_111)
                { /* block id: 61 */
                    int64_t l_112[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    uint16_t l_113 = 0UL;
                    int i;
                    l_113 = l_112[3];
                }
                else
                { /* block id: 63 */
                    int32_t l_114[4] = {0x70430796L,0x70430796L,0x70430796L,0x70430796L};
                    int i;
                    for (l_114[1] = 0; (l_114[1] >= (-17)); l_114[1] = safe_sub_func_uint64_t_u_u(l_114[1], 1))
                    { /* block id: 66 */
                        VECTOR(int32_t, 2) l_117 = (VECTOR(int32_t, 2))(0x0C079A21L, 1L);
                        VECTOR(int32_t, 2) l_118 = (VECTOR(int32_t, 2))((-1L), 0x36F82621L);
                        VECTOR(int32_t, 8) l_119 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5EFA8D4CL), 0x5EFA8D4CL), 0x5EFA8D4CL, (-1L), 0x5EFA8D4CL);
                        int8_t l_120 = 0x12L;
                        uint32_t l_121 = 0x5E82407DL;
                        int64_t l_122 = 0L;
                        int i;
                        l_120 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_117.yx)))).yxxx)), 0x1E4D89ECL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(l_118.yxxyyyyx)).s4316114012601571, ((VECTOR(int32_t, 4))(l_119.s5455)).wwzxzwyxxyxxxwxx))).s3d)), 0L)).s2;
                        l_122 |= l_121;
                    }
                }
                for (l_111 = 0; (l_111 < 8); l_111 = safe_add_func_uint8_t_u_u(l_111, 1))
                { /* block id: 73 */
                    int32_t l_125[4][6] = {{0x187148A6L,0x57AF5BD1L,0x187148A6L,0x187148A6L,0x57AF5BD1L,0x187148A6L},{0x187148A6L,0x57AF5BD1L,0x187148A6L,0x187148A6L,0x57AF5BD1L,0x187148A6L},{0x187148A6L,0x57AF5BD1L,0x187148A6L,0x187148A6L,0x57AF5BD1L,0x187148A6L},{0x187148A6L,0x57AF5BD1L,0x187148A6L,0x187148A6L,0x57AF5BD1L,0x187148A6L}};
                    int i, j;
                    for (l_125[0][4] = (-26); (l_125[0][4] >= (-14)); ++l_125[0][4])
                    { /* block id: 76 */
                        int32_t l_130 = 0x772B2449L;
                        int32_t *l_129 = &l_130;
                        int32_t **l_128 = &l_129;
                        int32_t **l_131 = &l_129;
                        l_131 = l_128;
                    }
                }
                for (l_111 = (-30); (l_111 <= (-30)); l_111 = safe_add_func_int8_t_s_s(l_111, 5))
                { /* block id: 82 */
                    uint32_t l_134 = 0UL;
                    uint32_t l_137 = 0UL;
                    uint16_t l_138 = 65535UL;
                    int64_t l_139 = (-9L);
                    int64_t l_140 = (-7L);
                    int64_t l_141 = (-3L);
                    int8_t l_142[3];
                    uint32_t l_143 = 4294967295UL;
                    int16_t l_150 = 0x0CADL;
                    int32_t l_151 = 0x2E0DA6F0L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_142[i] = 0x50L;
                    l_139 ^= (l_138 = ((l_134++) , l_137));
                    --l_143;
                    for (l_142[1] = 0; (l_142[1] <= 3); l_142[1]++)
                    { /* block id: 89 */
                        int64_t l_148 = 0L;
                        VECTOR(int32_t, 2) l_149 = (VECTOR(int32_t, 2))(8L, 0L);
                        int i;
                        l_149.y ^= l_148;
                    }
                    l_151 |= l_150;
                }
                l_154[3] = l_152;
            }
            unsigned int result = 0;
            result += l_108;
            atomic_add(&p_1082->l_special_values[44], result);
        }
        else
        { /* block id: 96 */
            (1 + 1);
        }
        ++l_158[8];
        if (((((*l_177) = ((VECTOR(uint16_t, 8))(p_87.f0, ((((*l_162) |= ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(p_1082->g_161.yy)).yxxyxyyxxxyyyyyx)).s45)).yyxx)).w) != (FAKE_DIVERGE(p_1082->global_1_offset, get_global_id(1), 10) & ((void*)0 != (*p_1082->g_90)))) == (p_1082->g_13.s0 , (((*l_164)--) == p_86))), 0x76E6L, ((safe_sub_func_int8_t_s_s((l_170 == p_1082->g_173), ((VECTOR(int8_t, 8))((-1L), (-1L), (l_158[8] == ((p_86 > p_1082->g_24[1]) ^ p_1082->g_24[1])), 0x58L, 0x30L, ((VECTOR(int8_t, 2))((-1L))), 0x37L)).s1)) || 0xFAL), p_87.f0, 0UL, 65529UL, 0xB291L)).s1) ^ 0x4623L) | GROUP_DIVERGE(1, 1)))
        { /* block id: 103 */
            if (p_1082->g_11.y)
                break;
        }
        else
        { /* block id: 105 */
            int32_t **l_178 = &l_157[2][2];
            int32_t ***l_179 = (void*)0;
            int32_t ***l_180 = (void*)0;
            int32_t ***l_181[3];
            int64_t *l_187 = (void*)0;
            int64_t *l_188 = &p_1082->g_189;
            int32_t *l_207 = (void*)0;
            VECTOR(int32_t, 8) l_221 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x1CF444A0L), 0x1CF444A0L), 0x1CF444A0L, (-8L), 0x1CF444A0L);
            VECTOR(int8_t, 2) l_267 = (VECTOR(int8_t, 2))((-1L), 0x6EL);
            VECTOR(int16_t, 8) l_272 = (VECTOR(int16_t, 8))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0x2E75L), 0x2E75L), 0x2E75L, (-3L), 0x2E75L);
            VECTOR(int8_t, 8) l_283 = (VECTOR(int8_t, 8))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x54L), 0x54L), 0x54L, (-3L), 0x54L);
            VECTOR(int8_t, 2) l_304 = (VECTOR(int8_t, 2))(1L, 0x3EL);
            int16_t l_329 = (-1L);
            struct S0 *l_346 = &p_1082->g_268;
            VECTOR(int8_t, 16) l_356 = (VECTOR(int8_t, 16))(0x3AL, (VECTOR(int8_t, 4))(0x3AL, (VECTOR(int8_t, 2))(0x3AL, (-2L)), (-2L)), (-2L), 0x3AL, (-2L), (VECTOR(int8_t, 2))(0x3AL, (-2L)), (VECTOR(int8_t, 2))(0x3AL, (-2L)), 0x3AL, (-2L), 0x3AL, (-2L));
            int i;
            for (i = 0; i < 3; i++)
                l_181[i] = &l_178;
            if (((*l_155) = (((l_184 = (l_182[0][0][0] = l_178)) != (p_87.f0 , p_1082->g_185)) || ((((*l_188) = 0x37FDB359306392A3L) , ((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(p_1082->g_192.s5010)).w, (safe_lshift_func_int8_t_s_u((((((*l_155) , p_87.f0) , (((safe_add_func_uint16_t_u_u(((**l_170) == (**l_170)), (p_1082->g_156 >= p_1082->g_192.s3))) | 0x6F47C968L) ^ 0L)) && GROUP_DIVERGE(0, 1)) ^ l_197), GROUP_DIVERGE(1, 1))))) != 1L)) < 4294967295UL))))
            { /* block id: 110 */
                uint32_t l_199 = 0x22E11841L;
                VECTOR(int32_t, 8) l_202 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
                int i;
                (*p_1082->g_186) ^= ((VECTOR(int32_t, 4))(p_1082->g_198.zwyx)).z;
                if ((*p_1082->g_186))
                    break;
                (*p_1082->g_185) = (l_199 , (*l_178));
                for (p_1082->g_23 = 3; (p_1082->g_23 > 25); p_1082->g_23 = safe_add_func_int64_t_s_s(p_1082->g_23, 6))
                { /* block id: 116 */
                    p_87.f0 = ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_202.s62131422)).s3250207201440013, ((VECTOR(int32_t, 8))(l_203.s073f3522)).s7604400022174014, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(1L, 0x18A15B14L, (-1L), (((p_1082->g_comm_values[p_1082->tid] = 9L) , p_1082->g_204) != &p_1082->g_174[0][3][9]), 0L, 4L, 0x1ADAEAB5L, (-7L))).lo, (int32_t)(*p_1082->g_186)))), ((VECTOR(int32_t, 2))((-2L), (-3L))).xxyy))).xwxxyyxyzyywxxyw))).s3;
                }
            }
            else
            { /* block id: 120 */
                uint64_t l_208[7][10][3] = {{{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L}},{{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L}},{{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L}},{{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L}},{{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L}},{{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L}},{{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L},{0xE5E5E1387A817542L,18446744073709551615UL,0xA1068222830CF973L}}};
                VECTOR(int8_t, 4) l_211 = (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 2L), 2L);
                VECTOR(uint8_t, 16) l_214 = (VECTOR(uint8_t, 16))(0x5BL, (VECTOR(uint8_t, 4))(0x5BL, (VECTOR(uint8_t, 2))(0x5BL, 0x7FL), 0x7FL), 0x7FL, 0x5BL, 0x7FL, (VECTOR(uint8_t, 2))(0x5BL, 0x7FL), (VECTOR(uint8_t, 2))(0x5BL, 0x7FL), 0x5BL, 0x7FL, 0x5BL, 0x7FL);
                int64_t *l_237 = (void*)0;
                int64_t *l_238 = (void*)0;
                int64_t *l_241 = (void*)0;
                int64_t *l_242 = (void*)0;
                int64_t *l_243 = (void*)0;
                int64_t *l_244 = (void*)0;
                int64_t *l_245 = (void*)0;
                int64_t *l_246[5][2][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                int32_t l_248 = 3L;
                int16_t *l_250 = (void*)0;
                int16_t *l_251 = &p_1082->g_24[1];
                int32_t l_252 = 0L;
                int i, j, k;
                for (p_1082->g_165 = 0; (p_1082->g_165 >= 23); ++p_1082->g_165)
                { /* block id: 123 */
                    l_207 = ((*l_184) = l_157[2][2]);
                    l_208[1][0][1]--;
                    (*l_155) ^= (((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_211.wyyyyzyy)).s3072426213001365))))).sc || l_208[1][0][1]);
                }
                l_252 &= ((((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_212.s52)).xxxxyxxy)).s05)), ((VECTOR(uint8_t, 2))(0xDBL, 1UL)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))((p_87.f0 != GROUP_DIVERGE(1, 1)), 0xECL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_213.zx)).xyyy)), ((VECTOR(uint8_t, 2))(0UL, 0x8DL)), ((VECTOR(uint8_t, 2))(l_214.sfc)), ((VECTOR(uint8_t, 4))(0UL, (safe_sub_func_int16_t_s_s(((*l_251) = (safe_mul_func_uint8_t_u_u(((*l_162) |= ((safe_sub_func_int16_t_s_s(((p_87.f0 = ((VECTOR(int32_t, 2))(l_221.s60)).lo) <= ((**p_1082->g_185) = ((((p_1082->g_23 < (safe_mod_func_int16_t_s_s(p_1082->g_7.s3, (safe_sub_func_uint8_t_u_u(l_226.x, (**l_178)))))) <= (safe_div_func_int32_t_s_s((l_248 ^= (((p_1082->g_29 && ((p_1082->g_161.y > (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((((p_1082->g_12.s6 ^= ((VECTOR(int64_t, 2))(0x2E19C6BE0F0FC9D2L, 0x45E76BDE149198AFL)).even) >= (p_1082->g_11.x = (((safe_lshift_func_uint8_t_u_u((l_211.z > p_86), p_1082->g_165)) && p_86) , p_1082->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1082->tid, 17))]))) || l_247) & p_86), 0x9EL)), p_1082->g_165)) , p_1082->g_198.z), 4))) != (**l_184))) == (-1L)) | p_1082->g_24[5])), 4294967295UL))) != p_86) || l_249[1]))), p_86)) && p_1082->g_7.s1)), GROUP_DIVERGE(2, 1)))), p_1082->g_4)), 0x97L, 0xACL)), 0UL, 0x25L)).hi)).s06))).hi >= p_1082->g_192.s3) | GROUP_DIVERGE(0, 1));
                (*l_178) = (void*)0;
            }
            l_253[3][1]++;
            for (l_197 = 26; (l_197 >= (-14)); --l_197)
            { /* block id: 142 */
                int32_t l_284 = 9L;
                uint32_t *l_308 = (void*)0;
                uint32_t *l_309 = (void*)0;
                uint32_t *l_310[5][2][1];
                uint32_t **l_318 = (void*)0;
                uint32_t **l_319 = (void*)0;
                uint32_t **l_320 = &l_309;
                int64_t *l_328 = (void*)0;
                uint32_t ***l_335 = &l_318;
                int64_t *l_336 = (void*)0;
                int64_t *l_337 = (void*)0;
                int64_t *l_338 = (void*)0;
                int64_t *l_339 = (void*)0;
                int64_t *l_340 = (void*)0;
                int32_t l_341[6][9][4] = {{{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L}},{{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L}},{{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L}},{{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L}},{{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L}},{{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L},{6L,(-1L),0x4A866792L,0x0CFD0680L}}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_310[i][j][k] = (void*)0;
                    }
                }
                for (p_1082->g_156 = (-10); (p_1082->g_156 != 6); p_1082->g_156 = safe_add_func_uint16_t_u_u(p_1082->g_156, 4))
                { /* block id: 145 */
                    (**l_170) = (void*)0;
                }
                if ((safe_add_func_int8_t_s_s(l_262, (p_1082->g_37.f2 , (p_1082->g_3[0][4] < ((VECTOR(uint64_t, 2))(l_263.s45)).even)))))
                { /* block id: 148 */
                    VECTOR(int16_t, 8) l_266 = (VECTOR(int16_t, 8))(0x428CL, (VECTOR(int16_t, 4))(0x428CL, (VECTOR(int16_t, 2))(0x428CL, 0x1B01L), 0x1B01L), 0x1B01L, 0x428CL, 0x1B01L);
                    int16_t *l_285[5][9] = {{&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286},{&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286},{&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286},{&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286},{&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286,&p_1082->g_286}};
                    int32_t l_293 = 0x1D1115B6L;
                    int i, j;
                    p_87.f0 = (((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_266.s2037)).zwyyxwywwwwzxxxy)).sac, ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(l_267.yyxy)).wwzxyyxx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(1UL, 0xB6L)).yyyxyyyy))))).s47))).xyyyxxyyxyxyyyyx)).s4, ((p_1082->g_286 ^= ((p_1082->g_268 , (safe_add_func_int64_t_s_s(((((p_1082->g_271 , ((!(((VECTOR(int16_t, 16))(l_272.s4266250012617224)).s8 & ((safe_mod_func_uint16_t_u_u(0xAF04L, (p_1082->g_275 , (safe_add_func_int64_t_s_s(((0x7B989AA41E3957D0L > (((((*p_1082->g_90) != (void*)0) == (safe_rshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((!((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_283.s73105460)), (((p_1082->g_161.x = ((void*)0 == &p_86)) <= p_1082->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1082->tid, 17))]) , p_86), p_87.f0, 1L, 1L, l_284, p_87.f0, 8L, 0x41L))))).sf1)).hi && 255UL) != p_86)))), 4L)), l_284))) | p_87.f0) , p_86)) >= l_284), p_86))))) <= (-1L)))) ^ p_87.f0)) > 0x6A2D04D0B8DA7C8EL) > p_1082->g_24[5]) <= p_1082->g_192.sf), p_87.f0))) > p_86)) ^ p_1082->g_192.s4))) == (-6L)) <= 8UL);
                    l_284 = (((void*)0 != &p_1082->g_24[3]) , (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_86, p_1082->g_268.f0)), 7)));
                    l_293 ^= (safe_div_func_int32_t_s_s(p_87.f0, (*p_1082->g_186)));
                }
                else
                { /* block id: 154 */
                    int8_t l_294 = 0L;
                    VECTOR(int32_t, 16) l_295 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x71829236L), 0x71829236L), 0x71829236L, (-1L), 0x71829236L, (VECTOR(int32_t, 2))((-1L), 0x71829236L), (VECTOR(int32_t, 2))((-1L), 0x71829236L), (-1L), 0x71829236L, (-1L), 0x71829236L);
                    uint8_t l_296[3][9];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_296[i][j] = 0xADL;
                    }
                    l_296[0][4]++;
                    if (l_284)
                        continue;
                }
                p_87.f0 = (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))((((VECTOR(int16_t, 2))(0x4BDDL, 5L)).even != ((VECTOR(int16_t, 2))(0x7259L, 0x0A33L)).lo), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(0x4FL, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(0x38L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_1082->g_301.s0145136271143655)).sec)), ((VECTOR(int8_t, 4))(l_302.yyxx)), 1L)).even, ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(l_303.xxyyyyxy)).odd, ((VECTOR(int8_t, 4))(l_304.xyxy)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_305.s8c5f)), ((VECTOR(int8_t, 4))(l_306.s4115)))).s6155162577744103)).s79ad)))))).hi)))).even, 3L, ((VECTOR(int8_t, 2))(0x59L, 3L)), p_86, 0x1BL, 0x4CL)).s33, (int8_t)(p_1082->g_4 || (l_284 = ((VECTOR(uint32_t, 4))(l_307.yyzy)).w))))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_1082->g_311.yyxx)).zwywyxxx)))).s64))).yyyyxyyx)), (safe_mul_func_uint8_t_u_u(((safe_div_func_int64_t_s_s(((+(l_341[3][6][3] |= ((safe_mul_func_int8_t_s_s((l_310[4][1][0] != ((*l_320) = l_183)), ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_1082->g_321.s0153)).y, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(p_1082->g_322.yxyzywzyzxwzwxyx)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1082->g_323.yx)), 0x1CL, 1L)).yzyxxzzxzzxwzwwx)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x4AL, 0x03L)), 0x0CL, 0L)), ((VECTOR(int8_t, 2))((-1L), 0x67L)), 4L, 0x49L)).s22, (int8_t)(safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 8))(p_1082->g_37.f0, 1L, ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))((((l_329 = p_1082->g_268.f2) == (((*l_155) |= ((safe_lshift_func_uint8_t_u_s((((*l_335) = p_1082->g_332) != &p_1082->g_333), 0)) , p_1082->g_189)) == l_284)) && 0x31L), ((VECTOR(int16_t, 2))(0x4C64L)), 0L, ((VECTOR(int16_t, 4))(7L)))).s53)).xyxy, (int16_t)0x046BL, (int16_t)p_86))).w, 0x4778L, (-1L), ((VECTOR(int16_t, 2))((-3L))), 0L)).s6365702311612671, ((VECTOR(int16_t, 16))(0x6581L))))).s50)), (-1L), (-7L))).zzyywyxwxxzywwxz, ((VECTOR(int16_t, 16))(0x077BL))))).s9, l_284)), p_1082->g_37.f0)), (int8_t)(*l_155)))).yyxxyyxxyxxxyxxx))))).s2a)), 0x39L, 0x34L, l_284, 0x3EL, 0x13L, (-5L), (-1L), 0x48L, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))((-1L))), 0L)).s26)), ((VECTOR(int8_t, 2))(0x0EL))))).xxxxyyxy)).s24, ((VECTOR(int8_t, 2))(0x72L))))).xyyx, ((VECTOR(int8_t, 4))(0x29L)), ((VECTOR(int8_t, 4))(0x1AL))))).w)) | p_86))) <= p_86), l_284)) ^ p_1082->g_192.sa), p_1082->g_26)), ((VECTOR(int8_t, 2))((-1L))), p_1082->g_13.s5, 0x05L, 0L, (-2L))).s6, p_1082->g_11.y));
                for (l_284 = 0; (l_284 >= 5); ++l_284)
                { /* block id: 167 */
                    struct S0 *l_347 = &p_1082->g_268;
                    VECTOR(uint8_t, 4) l_353 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 6UL), 6UL);
                    VECTOR(int8_t, 16) l_357 = (VECTOR(int8_t, 16))(0x28L, (VECTOR(int8_t, 4))(0x28L, (VECTOR(int8_t, 2))(0x28L, 0x1BL), 0x1BL), 0x1BL, 0x28L, 0x1BL, (VECTOR(int8_t, 2))(0x28L, 0x1BL), (VECTOR(int8_t, 2))(0x28L, 0x1BL), 0x28L, 0x1BL, 0x28L, 0x1BL);
                    VECTOR(int8_t, 8) l_358 = (VECTOR(int8_t, 8))(5L, (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0L), 0L), 0L, 5L, 0L);
                    int8_t *l_359 = &p_1082->g_271.f4;
                    int i, j;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1082->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[(safe_mod_func_uint32_t_u_u((((((VECTOR(int8_t, 4))(0L, (safe_lshift_func_uint16_t_u_u((l_346 == (l_347 = &p_1082->g_37)), (safe_mod_func_uint8_t_u_u(p_87.f0, (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_352.s54)).xyxy)), 0xB2L, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_353.xz)).yxxx)).yzxxwwxy, ((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(l_354.secfca025)), ((VECTOR(int8_t, 2))(1L, 1L)).xyyxyyyy))).s77)).yyyyyxyyyxyxxyxy, ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(0x5BL, 0x06L, 0x51L, 4L)).lo, ((VECTOR(int8_t, 4))(l_355.xyyx)).hi, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_356.s6416301e)).s1234276130032276)).s83))).yxxxyxyyxxxyxyyx)).hi, ((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(l_357.s48)).yxxyxyyyyyyxxxxx, ((VECTOR(int8_t, 4))(l_358.s3316)).xzxzyyzwxzxwxzyz))).even, ((VECTOR(int8_t, 16))(1L, (((((*l_164) = p_1082->g_156) >= p_1082->g_11.y) & ((*l_359) = p_86)) == ((VECTOR(int64_t, 8))(p_1082->g_2, ((safe_add_func_uint16_t_u_u(p_87.f0, (safe_add_func_int16_t_s_s((0x04F2L > (-9L)), 7UL)))) < (*p_1082->g_186)), 0x695C796FD9B35670L, ((VECTOR(int64_t, 4))(0x22D97DEE2A0FCE91L)), 0x4DED3C538AAC0D67L)).s5), p_87.f0, ((VECTOR(int8_t, 2))(1L)), l_358.s4, 0x22L, 3L, ((VECTOR(int8_t, 4))(0x60L)), ((VECTOR(int8_t, 4))(0x08L)))).even))).s7127257004060005, ((VECTOR(int8_t, 16))((-1L)))))).hi, ((VECTOR(int8_t, 8))(0x18L)))))))), 0xB2L, 247UL, 251UL)).s1b59)).odd))).lo, l_353.z)))))), 0x25L, 0x72L)).x == 0x62L) && 0x07908DA9L) , p_87.f0), 10))][(safe_mod_func_uint32_t_u_u(p_1082->tid, 17))]));
                    return &p_1082->g_268;
                }
            }
        }
    }
    (*p_1082->g_186) &= ((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(p_1082->g_366.xzxz)).x, p_1082->g_311.y)) & (l_367.w , ((VECTOR(int8_t, 2))(0L, 3L)).odd));
    for (p_86 = 26; (p_86 >= 57); p_86++)
    { /* block id: 182 */
        p_1082->g_371 = p_1082->g_370[3];
    }
    (*p_1082->g_186) &= ((safe_rshift_func_int8_t_s_u((*l_183), 2)) , (safe_rshift_func_uint16_t_u_u((((((safe_mod_func_int16_t_s_s(((*l_378) = 1L), ((safe_lshift_func_int8_t_s_u(((*l_183) <= 254UL), 6)) , p_86))) , ((VECTOR(uint32_t, 8))(0xC5073A41L, 0x0FD147E8L, ((VECTOR(uint32_t, 4))(p_1082->g_381.s6241)), 0xC9D04DABL, 0x749CAFEEL)).s0) , (0x00L > (2UL >= (+(safe_rshift_func_int16_t_s_u(((*p_1082->g_39) , (safe_add_func_uint32_t_u_u(FAKE_DIVERGE(p_1082->local_2_offset, get_local_id(2), 10), ((p_86 < p_1082->g_334) & p_86)))), 1)))))) ^ p_1082->g_163) >= l_386), 10)));
    return &p_1082->g_371;
}


/* ------------------------------------------ */
/* 
 * reads : p_1082->g_90
 * writes:
 */
int8_t ** func_88(int8_t * p_89, struct S3 * p_1082)
{ /* block id: 49 */
    return p_1082->g_90;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[99];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 99; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[99];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 99; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[17];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 17; i++)
            l_comm_values[i] = 1;
    struct S3 c_1083;
    struct S3* p_1082 = &c_1083;
    struct S3 c_1084 = {
        1L, // p_1082->g_2
        {{0x3989226CL,0x0FA72C25L,(-8L),1L,(-8L),0x0FA72C25L,0x3989226CL},{0x3989226CL,0x0FA72C25L,(-8L),1L,(-8L),0x0FA72C25L,0x3989226CL},{0x3989226CL,0x0FA72C25L,(-8L),1L,(-8L),0x0FA72C25L,0x3989226CL},{0x3989226CL,0x0FA72C25L,(-8L),1L,(-8L),0x0FA72C25L,0x3989226CL},{0x3989226CL,0x0FA72C25L,(-8L),1L,(-8L),0x0FA72C25L,0x3989226CL},{0x3989226CL,0x0FA72C25L,(-8L),1L,(-8L),0x0FA72C25L,0x3989226CL},{0x3989226CL,0x0FA72C25L,(-8L),1L,(-8L),0x0FA72C25L,0x3989226CL}}, // p_1082->g_3
        4L, // p_1082->g_4
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L), // p_1082->g_7
        (VECTOR(int64_t, 2))(0L, 1L), // p_1082->g_11
        (VECTOR(int64_t, 8))((-7L), (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), 0x58F9C328129EC6EAL), 0x58F9C328129EC6EAL), 0x58F9C328129EC6EAL, (-7L), 0x58F9C328129EC6EAL), // p_1082->g_12
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-4L)), (-4L)), (-4L), (-1L), (-4L)), // p_1082->g_13
        0x77L, // p_1082->g_23
        {0L,0L,0L,0L,0L,0L,0L,0L,0L}, // p_1082->g_24
        0xE8F5349DL, // p_1082->g_26
        255UL, // p_1082->g_29
        1L, // p_1082->g_31
        {0L,0L,0x7937B1BDL,-5L}, // p_1082->g_37
        {{&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37},{&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37},{&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37},{&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37},{&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37},{&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37},{&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37},{&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37},{&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37},{&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37,&p_1082->g_37}}, // p_1082->g_38
        &p_1082->g_37, // p_1082->g_39
        (void*)0, // p_1082->g_91
        &p_1082->g_91, // p_1082->g_90
        0x002FB210L, // p_1082->g_156
        (VECTOR(uint8_t, 2))(0UL, 1UL), // p_1082->g_161
        0UL, // p_1082->g_163
        18446744073709551615UL, // p_1082->g_165
        (void*)0, // p_1082->g_175
        {{{&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,(void*)0,(void*)0,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175},{&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,(void*)0,(void*)0,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175},{&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,(void*)0,(void*)0,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175},{&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,(void*)0,(void*)0,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175},{&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,(void*)0,(void*)0,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175},{&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,(void*)0,(void*)0,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175},{&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,(void*)0,(void*)0,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175},{&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,(void*)0,(void*)0,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175},{&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,(void*)0,(void*)0,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175,&p_1082->g_175}}}, // p_1082->g_174
        &p_1082->g_174[0][3][9], // p_1082->g_173
        &p_1082->g_156, // p_1082->g_186
        &p_1082->g_186, // p_1082->g_185
        (-1L), // p_1082->g_189
        (VECTOR(uint8_t, 16))(0xCBL, (VECTOR(uint8_t, 4))(0xCBL, (VECTOR(uint8_t, 2))(0xCBL, 0xBAL), 0xBAL), 0xBAL, 0xCBL, 0xBAL, (VECTOR(uint8_t, 2))(0xCBL, 0xBAL), (VECTOR(uint8_t, 2))(0xCBL, 0xBAL), 0xCBL, 0xBAL, 0xCBL, 0xBAL), // p_1082->g_192
        (VECTOR(int32_t, 4))(0x5322D536L, (VECTOR(int32_t, 2))(0x5322D536L, (-1L)), (-1L)), // p_1082->g_198
        &p_1082->g_174[0][3][9], // p_1082->g_204
        {0x0F3E3AF3374AB6A0L,0x5113E63DB50818E7L,0x5CB55B69L,0x6EA70D4BL}, // p_1082->g_268
        {0x54408C51L}, // p_1082->g_271
        {0x3E0DFA7850B57B05L,1L,0x44E18AC2L,7L}, // p_1082->g_275
        0x4E40L, // p_1082->g_286
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L)), // p_1082->g_301
        (VECTOR(int8_t, 2))(0x6EL, 0x75L), // p_1082->g_311
        (VECTOR(int8_t, 8))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x13L), 0x13L), 0x13L, 6L, 0x13L), // p_1082->g_321
        (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, (-1L)), (-1L)), // p_1082->g_322
        (VECTOR(int8_t, 2))((-1L), (-10L)), // p_1082->g_323
        4UL, // p_1082->g_334
        &p_1082->g_334, // p_1082->g_333
        &p_1082->g_333, // p_1082->g_332
        (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0x951AL), 0x951AL), // p_1082->g_366
        {{1L,-1L,0x51BE027AL,0x05AE64B5L},{-9L,0x16B398815A51B7F4L,1L,-1L},{1L,-1L,0x51BE027AL,0x05AE64B5L},{1L,-1L,0x51BE027AL,0x05AE64B5L},{-9L,0x16B398815A51B7F4L,1L,-1L},{1L,-1L,0x51BE027AL,0x05AE64B5L},{1L,-1L,0x51BE027AL,0x05AE64B5L},{-9L,0x16B398815A51B7F4L,1L,-1L},{1L,-1L,0x51BE027AL,0x05AE64B5L},{1L,-1L,0x51BE027AL,0x05AE64B5L}}, // p_1082->g_370
        {1L,-6L,6L,7L}, // p_1082->g_371
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x56317446L), 0x56317446L), 0x56317446L, 4294967295UL, 0x56317446L), // p_1082->g_381
        {0x6E5A0143L}, // p_1082->g_410
        (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 0x79L), 0x79L), // p_1082->g_424
        (VECTOR(int16_t, 8))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x184FL), 0x184FL), 0x184FL, (-8L), 0x184FL), // p_1082->g_425
        (VECTOR(int16_t, 16))(0x7CF6L, (VECTOR(int16_t, 4))(0x7CF6L, (VECTOR(int16_t, 2))(0x7CF6L, 0x36A1L), 0x36A1L), 0x36A1L, 0x7CF6L, 0x36A1L, (VECTOR(int16_t, 2))(0x7CF6L, 0x36A1L), (VECTOR(int16_t, 2))(0x7CF6L, 0x36A1L), 0x7CF6L, 0x36A1L, 0x7CF6L, 0x36A1L), // p_1082->g_427
        0x2CL, // p_1082->g_436
        (void*)0, // p_1082->g_439
        0x0AF6DE9B35411E07L, // p_1082->g_441
        &p_1082->g_441, // p_1082->g_440
        {0x2887811EE6CA22E5L,-9L,-2L,0x255D3F1FL}, // p_1082->g_442
        {0x0E87C8937B03BD73L,5L,1L,0x6594C264L}, // p_1082->g_444
        (VECTOR(int8_t, 2))(0x4EL, 0x67L), // p_1082->g_453
        (VECTOR(int8_t, 16))(0x13L, (VECTOR(int8_t, 4))(0x13L, (VECTOR(int8_t, 2))(0x13L, 0x58L), 0x58L), 0x58L, 0x13L, 0x58L, (VECTOR(int8_t, 2))(0x13L, 0x58L), (VECTOR(int8_t, 2))(0x13L, 0x58L), 0x13L, 0x58L, 0x13L, 0x58L), // p_1082->g_456
        (VECTOR(int8_t, 2))(0x09L, 0x11L), // p_1082->g_464
        (VECTOR(int8_t, 8))(0x78L, (VECTOR(int8_t, 4))(0x78L, (VECTOR(int8_t, 2))(0x78L, (-1L)), (-1L)), (-1L), 0x78L, (-1L)), // p_1082->g_465
        0x47F302B4L, // p_1082->g_528
        (VECTOR(uint8_t, 8))(0xBAL, (VECTOR(uint8_t, 4))(0xBAL, (VECTOR(uint8_t, 2))(0xBAL, 0x5CL), 0x5CL), 0x5CL, 0xBAL, 0x5CL), // p_1082->g_540
        (VECTOR(uint8_t, 16))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0UL), 0UL), 0UL, 2UL, 0UL, (VECTOR(uint8_t, 2))(2UL, 0UL), (VECTOR(uint8_t, 2))(2UL, 0UL), 2UL, 0UL, 2UL, 0UL), // p_1082->g_541
        (VECTOR(uint8_t, 16))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0UL), 0UL), 0UL, 9UL, 0UL, (VECTOR(uint8_t, 2))(9UL, 0UL), (VECTOR(uint8_t, 2))(9UL, 0UL), 9UL, 0UL, 9UL, 0UL), // p_1082->g_542
        0x22C5623BL, // p_1082->g_550
        (VECTOR(uint8_t, 2))(0xB4L, 6UL), // p_1082->g_563
        (VECTOR(int8_t, 4))(0x10L, (VECTOR(int8_t, 2))(0x10L, (-10L)), (-10L)), // p_1082->g_589
        &p_1082->g_186, // p_1082->g_596
        &p_1082->g_596, // p_1082->g_595
        {0x5A521B7B9DB82E05L,2L,0L,-6L}, // p_1082->g_601
        &p_1082->g_370[3], // p_1082->g_602
        {0x2AFE0D8BE053B131L,-3L,-1L,-1L}, // p_1082->g_603
        (void*)0, // p_1082->g_615
        &p_1082->g_615, // p_1082->g_614
        {1L,0x45DB8EFC5A44C938L,0x77B3674DL,7L}, // p_1082->g_629
        {0UL,0UL}, // p_1082->g_659
        {0x47729E2B45F760F4L,0x22A51C4E68BB09E1L,8L,0x70613379L}, // p_1082->g_706
        &p_1082->g_444, // p_1082->g_707
        (VECTOR(int32_t, 8))(0x40F7E46AL, (VECTOR(int32_t, 4))(0x40F7E46AL, (VECTOR(int32_t, 2))(0x40F7E46AL, (-1L)), (-1L)), (-1L), 0x40F7E46AL, (-1L)), // p_1082->g_747
        (VECTOR(uint64_t, 8))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x11CBDCAB558BBB40L), 0x11CBDCAB558BBB40L), 0x11CBDCAB558BBB40L, 18446744073709551614UL, 0x11CBDCAB558BBB40L), // p_1082->g_769
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x7F3BB562F8E62910L), 0x7F3BB562F8E62910L), 0x7F3BB562F8E62910L, (-1L), 0x7F3BB562F8E62910L), // p_1082->g_774
        (VECTOR(uint32_t, 8))(9UL, (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0xECE0808DL), 0xECE0808DL), 0xECE0808DL, 9UL, 0xECE0808DL), // p_1082->g_775
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xE99284991FE8186AL), 0xE99284991FE8186AL), 0xE99284991FE8186AL, 1UL, 0xE99284991FE8186AL), // p_1082->g_776
        (VECTOR(int16_t, 2))(0x49B1L, (-1L)), // p_1082->g_952
        (VECTOR(int32_t, 8))(0x30EF5F11L, (VECTOR(int32_t, 4))(0x30EF5F11L, (VECTOR(int32_t, 2))(0x30EF5F11L, 0x1F2564B7L), 0x1F2564B7L), 0x1F2564B7L, 0x30EF5F11L, 0x1F2564B7L), // p_1082->g_963
        (VECTOR(int8_t, 8))(0x0BL, (VECTOR(int8_t, 4))(0x0BL, (VECTOR(int8_t, 2))(0x0BL, (-9L)), (-9L)), (-9L), 0x0BL, (-9L)), // p_1082->g_965
        (VECTOR(int32_t, 2))(0x368A533BL, 0x5A08E6B9L), // p_1082->g_971
        {0x1CB5C6C42548362EL,-4L,0x513B7E21L,0x286F7DABL}, // p_1082->g_981
        {1L,0x7C7E718A82770F54L,0x1F8E3370L,2L}, // p_1082->g_982
        {-5L,-1L,0x7572E6FEL,0x70867D91L}, // p_1082->g_1003
        {0x798E5C8C7BA59A27L,0x03A6F72AEC021B7EL,-2L,-6L}, // p_1082->g_1004
        &p_1082->g_268.f0, // p_1082->g_1039
        &p_1082->g_1039, // p_1082->g_1038
        (VECTOR(int8_t, 2))(0x61L, (-3L)), // p_1082->g_1044
        (VECTOR(int8_t, 8))(0x60L, (VECTOR(int8_t, 4))(0x60L, (VECTOR(int8_t, 2))(0x60L, 0x0EL), 0x0EL), 0x0EL, 0x60L, 0x0EL), // p_1082->g_1049
        (VECTOR(int8_t, 16))(0x30L, (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 0x3BL), 0x3BL), 0x3BL, 0x30L, 0x3BL, (VECTOR(int8_t, 2))(0x30L, 0x3BL), (VECTOR(int8_t, 2))(0x30L, 0x3BL), 0x30L, 0x3BL, 0x30L, 0x3BL), // p_1082->g_1052
        (VECTOR(int32_t, 8))(0x78EC71DAL, (VECTOR(int32_t, 4))(0x78EC71DAL, (VECTOR(int32_t, 2))(0x78EC71DAL, (-9L)), (-9L)), (-9L), 0x78EC71DAL, (-9L)), // p_1082->g_1070
        0, // p_1082->v_collective
        sequence_input[get_global_id(0)], // p_1082->global_0_offset
        sequence_input[get_global_id(1)], // p_1082->global_1_offset
        sequence_input[get_global_id(2)], // p_1082->global_2_offset
        sequence_input[get_local_id(0)], // p_1082->local_0_offset
        sequence_input[get_local_id(1)], // p_1082->local_1_offset
        sequence_input[get_local_id(2)], // p_1082->local_2_offset
        sequence_input[get_group_id(0)], // p_1082->group_0_offset
        sequence_input[get_group_id(1)], // p_1082->group_1_offset
        sequence_input[get_group_id(2)], // p_1082->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[0][get_linear_local_id()])), // p_1082->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1083 = c_1084;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1082);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1082->g_2, "p_1082->g_2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1082->g_3[i][j], "p_1082->g_3[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1082->g_4, "p_1082->g_4", print_hash_value);
    transparent_crc(p_1082->g_7.s0, "p_1082->g_7.s0", print_hash_value);
    transparent_crc(p_1082->g_7.s1, "p_1082->g_7.s1", print_hash_value);
    transparent_crc(p_1082->g_7.s2, "p_1082->g_7.s2", print_hash_value);
    transparent_crc(p_1082->g_7.s3, "p_1082->g_7.s3", print_hash_value);
    transparent_crc(p_1082->g_7.s4, "p_1082->g_7.s4", print_hash_value);
    transparent_crc(p_1082->g_7.s5, "p_1082->g_7.s5", print_hash_value);
    transparent_crc(p_1082->g_7.s6, "p_1082->g_7.s6", print_hash_value);
    transparent_crc(p_1082->g_7.s7, "p_1082->g_7.s7", print_hash_value);
    transparent_crc(p_1082->g_11.x, "p_1082->g_11.x", print_hash_value);
    transparent_crc(p_1082->g_11.y, "p_1082->g_11.y", print_hash_value);
    transparent_crc(p_1082->g_12.s0, "p_1082->g_12.s0", print_hash_value);
    transparent_crc(p_1082->g_12.s1, "p_1082->g_12.s1", print_hash_value);
    transparent_crc(p_1082->g_12.s2, "p_1082->g_12.s2", print_hash_value);
    transparent_crc(p_1082->g_12.s3, "p_1082->g_12.s3", print_hash_value);
    transparent_crc(p_1082->g_12.s4, "p_1082->g_12.s4", print_hash_value);
    transparent_crc(p_1082->g_12.s5, "p_1082->g_12.s5", print_hash_value);
    transparent_crc(p_1082->g_12.s6, "p_1082->g_12.s6", print_hash_value);
    transparent_crc(p_1082->g_12.s7, "p_1082->g_12.s7", print_hash_value);
    transparent_crc(p_1082->g_13.s0, "p_1082->g_13.s0", print_hash_value);
    transparent_crc(p_1082->g_13.s1, "p_1082->g_13.s1", print_hash_value);
    transparent_crc(p_1082->g_13.s2, "p_1082->g_13.s2", print_hash_value);
    transparent_crc(p_1082->g_13.s3, "p_1082->g_13.s3", print_hash_value);
    transparent_crc(p_1082->g_13.s4, "p_1082->g_13.s4", print_hash_value);
    transparent_crc(p_1082->g_13.s5, "p_1082->g_13.s5", print_hash_value);
    transparent_crc(p_1082->g_13.s6, "p_1082->g_13.s6", print_hash_value);
    transparent_crc(p_1082->g_13.s7, "p_1082->g_13.s7", print_hash_value);
    transparent_crc(p_1082->g_23, "p_1082->g_23", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1082->g_24[i], "p_1082->g_24[i]", print_hash_value);

    }
    transparent_crc(p_1082->g_26, "p_1082->g_26", print_hash_value);
    transparent_crc(p_1082->g_29, "p_1082->g_29", print_hash_value);
    transparent_crc(p_1082->g_31, "p_1082->g_31", print_hash_value);
    transparent_crc(p_1082->g_37.f0, "p_1082->g_37.f0", print_hash_value);
    transparent_crc(p_1082->g_37.f1, "p_1082->g_37.f1", print_hash_value);
    transparent_crc(p_1082->g_37.f2, "p_1082->g_37.f2", print_hash_value);
    transparent_crc(p_1082->g_37.f3, "p_1082->g_37.f3", print_hash_value);
    transparent_crc(p_1082->g_156, "p_1082->g_156", print_hash_value);
    transparent_crc(p_1082->g_161.x, "p_1082->g_161.x", print_hash_value);
    transparent_crc(p_1082->g_161.y, "p_1082->g_161.y", print_hash_value);
    transparent_crc(p_1082->g_163, "p_1082->g_163", print_hash_value);
    transparent_crc(p_1082->g_165, "p_1082->g_165", print_hash_value);
    transparent_crc(p_1082->g_189, "p_1082->g_189", print_hash_value);
    transparent_crc(p_1082->g_192.s0, "p_1082->g_192.s0", print_hash_value);
    transparent_crc(p_1082->g_192.s1, "p_1082->g_192.s1", print_hash_value);
    transparent_crc(p_1082->g_192.s2, "p_1082->g_192.s2", print_hash_value);
    transparent_crc(p_1082->g_192.s3, "p_1082->g_192.s3", print_hash_value);
    transparent_crc(p_1082->g_192.s4, "p_1082->g_192.s4", print_hash_value);
    transparent_crc(p_1082->g_192.s5, "p_1082->g_192.s5", print_hash_value);
    transparent_crc(p_1082->g_192.s6, "p_1082->g_192.s6", print_hash_value);
    transparent_crc(p_1082->g_192.s7, "p_1082->g_192.s7", print_hash_value);
    transparent_crc(p_1082->g_192.s8, "p_1082->g_192.s8", print_hash_value);
    transparent_crc(p_1082->g_192.s9, "p_1082->g_192.s9", print_hash_value);
    transparent_crc(p_1082->g_192.sa, "p_1082->g_192.sa", print_hash_value);
    transparent_crc(p_1082->g_192.sb, "p_1082->g_192.sb", print_hash_value);
    transparent_crc(p_1082->g_192.sc, "p_1082->g_192.sc", print_hash_value);
    transparent_crc(p_1082->g_192.sd, "p_1082->g_192.sd", print_hash_value);
    transparent_crc(p_1082->g_192.se, "p_1082->g_192.se", print_hash_value);
    transparent_crc(p_1082->g_192.sf, "p_1082->g_192.sf", print_hash_value);
    transparent_crc(p_1082->g_198.x, "p_1082->g_198.x", print_hash_value);
    transparent_crc(p_1082->g_198.y, "p_1082->g_198.y", print_hash_value);
    transparent_crc(p_1082->g_198.z, "p_1082->g_198.z", print_hash_value);
    transparent_crc(p_1082->g_198.w, "p_1082->g_198.w", print_hash_value);
    transparent_crc(p_1082->g_268.f0, "p_1082->g_268.f0", print_hash_value);
    transparent_crc(p_1082->g_268.f1, "p_1082->g_268.f1", print_hash_value);
    transparent_crc(p_1082->g_268.f2, "p_1082->g_268.f2", print_hash_value);
    transparent_crc(p_1082->g_268.f3, "p_1082->g_268.f3", print_hash_value);
    transparent_crc(p_1082->g_271.f0, "p_1082->g_271.f0", print_hash_value);
    transparent_crc(p_1082->g_275.f0, "p_1082->g_275.f0", print_hash_value);
    transparent_crc(p_1082->g_275.f1, "p_1082->g_275.f1", print_hash_value);
    transparent_crc(p_1082->g_275.f2, "p_1082->g_275.f2", print_hash_value);
    transparent_crc(p_1082->g_275.f3, "p_1082->g_275.f3", print_hash_value);
    transparent_crc(p_1082->g_286, "p_1082->g_286", print_hash_value);
    transparent_crc(p_1082->g_301.s0, "p_1082->g_301.s0", print_hash_value);
    transparent_crc(p_1082->g_301.s1, "p_1082->g_301.s1", print_hash_value);
    transparent_crc(p_1082->g_301.s2, "p_1082->g_301.s2", print_hash_value);
    transparent_crc(p_1082->g_301.s3, "p_1082->g_301.s3", print_hash_value);
    transparent_crc(p_1082->g_301.s4, "p_1082->g_301.s4", print_hash_value);
    transparent_crc(p_1082->g_301.s5, "p_1082->g_301.s5", print_hash_value);
    transparent_crc(p_1082->g_301.s6, "p_1082->g_301.s6", print_hash_value);
    transparent_crc(p_1082->g_301.s7, "p_1082->g_301.s7", print_hash_value);
    transparent_crc(p_1082->g_311.x, "p_1082->g_311.x", print_hash_value);
    transparent_crc(p_1082->g_311.y, "p_1082->g_311.y", print_hash_value);
    transparent_crc(p_1082->g_321.s0, "p_1082->g_321.s0", print_hash_value);
    transparent_crc(p_1082->g_321.s1, "p_1082->g_321.s1", print_hash_value);
    transparent_crc(p_1082->g_321.s2, "p_1082->g_321.s2", print_hash_value);
    transparent_crc(p_1082->g_321.s3, "p_1082->g_321.s3", print_hash_value);
    transparent_crc(p_1082->g_321.s4, "p_1082->g_321.s4", print_hash_value);
    transparent_crc(p_1082->g_321.s5, "p_1082->g_321.s5", print_hash_value);
    transparent_crc(p_1082->g_321.s6, "p_1082->g_321.s6", print_hash_value);
    transparent_crc(p_1082->g_321.s7, "p_1082->g_321.s7", print_hash_value);
    transparent_crc(p_1082->g_322.x, "p_1082->g_322.x", print_hash_value);
    transparent_crc(p_1082->g_322.y, "p_1082->g_322.y", print_hash_value);
    transparent_crc(p_1082->g_322.z, "p_1082->g_322.z", print_hash_value);
    transparent_crc(p_1082->g_322.w, "p_1082->g_322.w", print_hash_value);
    transparent_crc(p_1082->g_323.x, "p_1082->g_323.x", print_hash_value);
    transparent_crc(p_1082->g_323.y, "p_1082->g_323.y", print_hash_value);
    transparent_crc(p_1082->g_334, "p_1082->g_334", print_hash_value);
    transparent_crc(p_1082->g_366.x, "p_1082->g_366.x", print_hash_value);
    transparent_crc(p_1082->g_366.y, "p_1082->g_366.y", print_hash_value);
    transparent_crc(p_1082->g_366.z, "p_1082->g_366.z", print_hash_value);
    transparent_crc(p_1082->g_366.w, "p_1082->g_366.w", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1082->g_370[i].f0, "p_1082->g_370[i].f0", print_hash_value);
        transparent_crc(p_1082->g_370[i].f1, "p_1082->g_370[i].f1", print_hash_value);
        transparent_crc(p_1082->g_370[i].f2, "p_1082->g_370[i].f2", print_hash_value);
        transparent_crc(p_1082->g_370[i].f3, "p_1082->g_370[i].f3", print_hash_value);

    }
    transparent_crc(p_1082->g_371.f0, "p_1082->g_371.f0", print_hash_value);
    transparent_crc(p_1082->g_371.f1, "p_1082->g_371.f1", print_hash_value);
    transparent_crc(p_1082->g_371.f2, "p_1082->g_371.f2", print_hash_value);
    transparent_crc(p_1082->g_371.f3, "p_1082->g_371.f3", print_hash_value);
    transparent_crc(p_1082->g_381.s0, "p_1082->g_381.s0", print_hash_value);
    transparent_crc(p_1082->g_381.s1, "p_1082->g_381.s1", print_hash_value);
    transparent_crc(p_1082->g_381.s2, "p_1082->g_381.s2", print_hash_value);
    transparent_crc(p_1082->g_381.s3, "p_1082->g_381.s3", print_hash_value);
    transparent_crc(p_1082->g_381.s4, "p_1082->g_381.s4", print_hash_value);
    transparent_crc(p_1082->g_381.s5, "p_1082->g_381.s5", print_hash_value);
    transparent_crc(p_1082->g_381.s6, "p_1082->g_381.s6", print_hash_value);
    transparent_crc(p_1082->g_381.s7, "p_1082->g_381.s7", print_hash_value);
    transparent_crc(p_1082->g_410.f0, "p_1082->g_410.f0", print_hash_value);
    transparent_crc(p_1082->g_424.x, "p_1082->g_424.x", print_hash_value);
    transparent_crc(p_1082->g_424.y, "p_1082->g_424.y", print_hash_value);
    transparent_crc(p_1082->g_424.z, "p_1082->g_424.z", print_hash_value);
    transparent_crc(p_1082->g_424.w, "p_1082->g_424.w", print_hash_value);
    transparent_crc(p_1082->g_425.s0, "p_1082->g_425.s0", print_hash_value);
    transparent_crc(p_1082->g_425.s1, "p_1082->g_425.s1", print_hash_value);
    transparent_crc(p_1082->g_425.s2, "p_1082->g_425.s2", print_hash_value);
    transparent_crc(p_1082->g_425.s3, "p_1082->g_425.s3", print_hash_value);
    transparent_crc(p_1082->g_425.s4, "p_1082->g_425.s4", print_hash_value);
    transparent_crc(p_1082->g_425.s5, "p_1082->g_425.s5", print_hash_value);
    transparent_crc(p_1082->g_425.s6, "p_1082->g_425.s6", print_hash_value);
    transparent_crc(p_1082->g_425.s7, "p_1082->g_425.s7", print_hash_value);
    transparent_crc(p_1082->g_427.s0, "p_1082->g_427.s0", print_hash_value);
    transparent_crc(p_1082->g_427.s1, "p_1082->g_427.s1", print_hash_value);
    transparent_crc(p_1082->g_427.s2, "p_1082->g_427.s2", print_hash_value);
    transparent_crc(p_1082->g_427.s3, "p_1082->g_427.s3", print_hash_value);
    transparent_crc(p_1082->g_427.s4, "p_1082->g_427.s4", print_hash_value);
    transparent_crc(p_1082->g_427.s5, "p_1082->g_427.s5", print_hash_value);
    transparent_crc(p_1082->g_427.s6, "p_1082->g_427.s6", print_hash_value);
    transparent_crc(p_1082->g_427.s7, "p_1082->g_427.s7", print_hash_value);
    transparent_crc(p_1082->g_427.s8, "p_1082->g_427.s8", print_hash_value);
    transparent_crc(p_1082->g_427.s9, "p_1082->g_427.s9", print_hash_value);
    transparent_crc(p_1082->g_427.sa, "p_1082->g_427.sa", print_hash_value);
    transparent_crc(p_1082->g_427.sb, "p_1082->g_427.sb", print_hash_value);
    transparent_crc(p_1082->g_427.sc, "p_1082->g_427.sc", print_hash_value);
    transparent_crc(p_1082->g_427.sd, "p_1082->g_427.sd", print_hash_value);
    transparent_crc(p_1082->g_427.se, "p_1082->g_427.se", print_hash_value);
    transparent_crc(p_1082->g_427.sf, "p_1082->g_427.sf", print_hash_value);
    transparent_crc(p_1082->g_436, "p_1082->g_436", print_hash_value);
    transparent_crc(p_1082->g_441, "p_1082->g_441", print_hash_value);
    transparent_crc(p_1082->g_442.f0, "p_1082->g_442.f0", print_hash_value);
    transparent_crc(p_1082->g_442.f1, "p_1082->g_442.f1", print_hash_value);
    transparent_crc(p_1082->g_442.f2, "p_1082->g_442.f2", print_hash_value);
    transparent_crc(p_1082->g_442.f3, "p_1082->g_442.f3", print_hash_value);
    transparent_crc(p_1082->g_444.f0, "p_1082->g_444.f0", print_hash_value);
    transparent_crc(p_1082->g_444.f1, "p_1082->g_444.f1", print_hash_value);
    transparent_crc(p_1082->g_444.f2, "p_1082->g_444.f2", print_hash_value);
    transparent_crc(p_1082->g_444.f3, "p_1082->g_444.f3", print_hash_value);
    transparent_crc(p_1082->g_453.x, "p_1082->g_453.x", print_hash_value);
    transparent_crc(p_1082->g_453.y, "p_1082->g_453.y", print_hash_value);
    transparent_crc(p_1082->g_456.s0, "p_1082->g_456.s0", print_hash_value);
    transparent_crc(p_1082->g_456.s1, "p_1082->g_456.s1", print_hash_value);
    transparent_crc(p_1082->g_456.s2, "p_1082->g_456.s2", print_hash_value);
    transparent_crc(p_1082->g_456.s3, "p_1082->g_456.s3", print_hash_value);
    transparent_crc(p_1082->g_456.s4, "p_1082->g_456.s4", print_hash_value);
    transparent_crc(p_1082->g_456.s5, "p_1082->g_456.s5", print_hash_value);
    transparent_crc(p_1082->g_456.s6, "p_1082->g_456.s6", print_hash_value);
    transparent_crc(p_1082->g_456.s7, "p_1082->g_456.s7", print_hash_value);
    transparent_crc(p_1082->g_456.s8, "p_1082->g_456.s8", print_hash_value);
    transparent_crc(p_1082->g_456.s9, "p_1082->g_456.s9", print_hash_value);
    transparent_crc(p_1082->g_456.sa, "p_1082->g_456.sa", print_hash_value);
    transparent_crc(p_1082->g_456.sb, "p_1082->g_456.sb", print_hash_value);
    transparent_crc(p_1082->g_456.sc, "p_1082->g_456.sc", print_hash_value);
    transparent_crc(p_1082->g_456.sd, "p_1082->g_456.sd", print_hash_value);
    transparent_crc(p_1082->g_456.se, "p_1082->g_456.se", print_hash_value);
    transparent_crc(p_1082->g_456.sf, "p_1082->g_456.sf", print_hash_value);
    transparent_crc(p_1082->g_464.x, "p_1082->g_464.x", print_hash_value);
    transparent_crc(p_1082->g_464.y, "p_1082->g_464.y", print_hash_value);
    transparent_crc(p_1082->g_465.s0, "p_1082->g_465.s0", print_hash_value);
    transparent_crc(p_1082->g_465.s1, "p_1082->g_465.s1", print_hash_value);
    transparent_crc(p_1082->g_465.s2, "p_1082->g_465.s2", print_hash_value);
    transparent_crc(p_1082->g_465.s3, "p_1082->g_465.s3", print_hash_value);
    transparent_crc(p_1082->g_465.s4, "p_1082->g_465.s4", print_hash_value);
    transparent_crc(p_1082->g_465.s5, "p_1082->g_465.s5", print_hash_value);
    transparent_crc(p_1082->g_465.s6, "p_1082->g_465.s6", print_hash_value);
    transparent_crc(p_1082->g_465.s7, "p_1082->g_465.s7", print_hash_value);
    transparent_crc(p_1082->g_528, "p_1082->g_528", print_hash_value);
    transparent_crc(p_1082->g_540.s0, "p_1082->g_540.s0", print_hash_value);
    transparent_crc(p_1082->g_540.s1, "p_1082->g_540.s1", print_hash_value);
    transparent_crc(p_1082->g_540.s2, "p_1082->g_540.s2", print_hash_value);
    transparent_crc(p_1082->g_540.s3, "p_1082->g_540.s3", print_hash_value);
    transparent_crc(p_1082->g_540.s4, "p_1082->g_540.s4", print_hash_value);
    transparent_crc(p_1082->g_540.s5, "p_1082->g_540.s5", print_hash_value);
    transparent_crc(p_1082->g_540.s6, "p_1082->g_540.s6", print_hash_value);
    transparent_crc(p_1082->g_540.s7, "p_1082->g_540.s7", print_hash_value);
    transparent_crc(p_1082->g_541.s0, "p_1082->g_541.s0", print_hash_value);
    transparent_crc(p_1082->g_541.s1, "p_1082->g_541.s1", print_hash_value);
    transparent_crc(p_1082->g_541.s2, "p_1082->g_541.s2", print_hash_value);
    transparent_crc(p_1082->g_541.s3, "p_1082->g_541.s3", print_hash_value);
    transparent_crc(p_1082->g_541.s4, "p_1082->g_541.s4", print_hash_value);
    transparent_crc(p_1082->g_541.s5, "p_1082->g_541.s5", print_hash_value);
    transparent_crc(p_1082->g_541.s6, "p_1082->g_541.s6", print_hash_value);
    transparent_crc(p_1082->g_541.s7, "p_1082->g_541.s7", print_hash_value);
    transparent_crc(p_1082->g_541.s8, "p_1082->g_541.s8", print_hash_value);
    transparent_crc(p_1082->g_541.s9, "p_1082->g_541.s9", print_hash_value);
    transparent_crc(p_1082->g_541.sa, "p_1082->g_541.sa", print_hash_value);
    transparent_crc(p_1082->g_541.sb, "p_1082->g_541.sb", print_hash_value);
    transparent_crc(p_1082->g_541.sc, "p_1082->g_541.sc", print_hash_value);
    transparent_crc(p_1082->g_541.sd, "p_1082->g_541.sd", print_hash_value);
    transparent_crc(p_1082->g_541.se, "p_1082->g_541.se", print_hash_value);
    transparent_crc(p_1082->g_541.sf, "p_1082->g_541.sf", print_hash_value);
    transparent_crc(p_1082->g_542.s0, "p_1082->g_542.s0", print_hash_value);
    transparent_crc(p_1082->g_542.s1, "p_1082->g_542.s1", print_hash_value);
    transparent_crc(p_1082->g_542.s2, "p_1082->g_542.s2", print_hash_value);
    transparent_crc(p_1082->g_542.s3, "p_1082->g_542.s3", print_hash_value);
    transparent_crc(p_1082->g_542.s4, "p_1082->g_542.s4", print_hash_value);
    transparent_crc(p_1082->g_542.s5, "p_1082->g_542.s5", print_hash_value);
    transparent_crc(p_1082->g_542.s6, "p_1082->g_542.s6", print_hash_value);
    transparent_crc(p_1082->g_542.s7, "p_1082->g_542.s7", print_hash_value);
    transparent_crc(p_1082->g_542.s8, "p_1082->g_542.s8", print_hash_value);
    transparent_crc(p_1082->g_542.s9, "p_1082->g_542.s9", print_hash_value);
    transparent_crc(p_1082->g_542.sa, "p_1082->g_542.sa", print_hash_value);
    transparent_crc(p_1082->g_542.sb, "p_1082->g_542.sb", print_hash_value);
    transparent_crc(p_1082->g_542.sc, "p_1082->g_542.sc", print_hash_value);
    transparent_crc(p_1082->g_542.sd, "p_1082->g_542.sd", print_hash_value);
    transparent_crc(p_1082->g_542.se, "p_1082->g_542.se", print_hash_value);
    transparent_crc(p_1082->g_542.sf, "p_1082->g_542.sf", print_hash_value);
    transparent_crc(p_1082->g_550, "p_1082->g_550", print_hash_value);
    transparent_crc(p_1082->g_563.x, "p_1082->g_563.x", print_hash_value);
    transparent_crc(p_1082->g_563.y, "p_1082->g_563.y", print_hash_value);
    transparent_crc(p_1082->g_589.x, "p_1082->g_589.x", print_hash_value);
    transparent_crc(p_1082->g_589.y, "p_1082->g_589.y", print_hash_value);
    transparent_crc(p_1082->g_589.z, "p_1082->g_589.z", print_hash_value);
    transparent_crc(p_1082->g_589.w, "p_1082->g_589.w", print_hash_value);
    transparent_crc(p_1082->g_601.f0, "p_1082->g_601.f0", print_hash_value);
    transparent_crc(p_1082->g_601.f1, "p_1082->g_601.f1", print_hash_value);
    transparent_crc(p_1082->g_601.f2, "p_1082->g_601.f2", print_hash_value);
    transparent_crc(p_1082->g_601.f3, "p_1082->g_601.f3", print_hash_value);
    transparent_crc(p_1082->g_603.f0, "p_1082->g_603.f0", print_hash_value);
    transparent_crc(p_1082->g_603.f1, "p_1082->g_603.f1", print_hash_value);
    transparent_crc(p_1082->g_603.f2, "p_1082->g_603.f2", print_hash_value);
    transparent_crc(p_1082->g_603.f3, "p_1082->g_603.f3", print_hash_value);
    transparent_crc(p_1082->g_629.f0, "p_1082->g_629.f0", print_hash_value);
    transparent_crc(p_1082->g_629.f1, "p_1082->g_629.f1", print_hash_value);
    transparent_crc(p_1082->g_629.f2, "p_1082->g_629.f2", print_hash_value);
    transparent_crc(p_1082->g_629.f3, "p_1082->g_629.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1082->g_659[i], "p_1082->g_659[i]", print_hash_value);

    }
    transparent_crc(p_1082->g_706.f0, "p_1082->g_706.f0", print_hash_value);
    transparent_crc(p_1082->g_706.f1, "p_1082->g_706.f1", print_hash_value);
    transparent_crc(p_1082->g_706.f2, "p_1082->g_706.f2", print_hash_value);
    transparent_crc(p_1082->g_706.f3, "p_1082->g_706.f3", print_hash_value);
    transparent_crc(p_1082->g_747.s0, "p_1082->g_747.s0", print_hash_value);
    transparent_crc(p_1082->g_747.s1, "p_1082->g_747.s1", print_hash_value);
    transparent_crc(p_1082->g_747.s2, "p_1082->g_747.s2", print_hash_value);
    transparent_crc(p_1082->g_747.s3, "p_1082->g_747.s3", print_hash_value);
    transparent_crc(p_1082->g_747.s4, "p_1082->g_747.s4", print_hash_value);
    transparent_crc(p_1082->g_747.s5, "p_1082->g_747.s5", print_hash_value);
    transparent_crc(p_1082->g_747.s6, "p_1082->g_747.s6", print_hash_value);
    transparent_crc(p_1082->g_747.s7, "p_1082->g_747.s7", print_hash_value);
    transparent_crc(p_1082->g_769.s0, "p_1082->g_769.s0", print_hash_value);
    transparent_crc(p_1082->g_769.s1, "p_1082->g_769.s1", print_hash_value);
    transparent_crc(p_1082->g_769.s2, "p_1082->g_769.s2", print_hash_value);
    transparent_crc(p_1082->g_769.s3, "p_1082->g_769.s3", print_hash_value);
    transparent_crc(p_1082->g_769.s4, "p_1082->g_769.s4", print_hash_value);
    transparent_crc(p_1082->g_769.s5, "p_1082->g_769.s5", print_hash_value);
    transparent_crc(p_1082->g_769.s6, "p_1082->g_769.s6", print_hash_value);
    transparent_crc(p_1082->g_769.s7, "p_1082->g_769.s7", print_hash_value);
    transparent_crc(p_1082->g_774.s0, "p_1082->g_774.s0", print_hash_value);
    transparent_crc(p_1082->g_774.s1, "p_1082->g_774.s1", print_hash_value);
    transparent_crc(p_1082->g_774.s2, "p_1082->g_774.s2", print_hash_value);
    transparent_crc(p_1082->g_774.s3, "p_1082->g_774.s3", print_hash_value);
    transparent_crc(p_1082->g_774.s4, "p_1082->g_774.s4", print_hash_value);
    transparent_crc(p_1082->g_774.s5, "p_1082->g_774.s5", print_hash_value);
    transparent_crc(p_1082->g_774.s6, "p_1082->g_774.s6", print_hash_value);
    transparent_crc(p_1082->g_774.s7, "p_1082->g_774.s7", print_hash_value);
    transparent_crc(p_1082->g_775.s0, "p_1082->g_775.s0", print_hash_value);
    transparent_crc(p_1082->g_775.s1, "p_1082->g_775.s1", print_hash_value);
    transparent_crc(p_1082->g_775.s2, "p_1082->g_775.s2", print_hash_value);
    transparent_crc(p_1082->g_775.s3, "p_1082->g_775.s3", print_hash_value);
    transparent_crc(p_1082->g_775.s4, "p_1082->g_775.s4", print_hash_value);
    transparent_crc(p_1082->g_775.s5, "p_1082->g_775.s5", print_hash_value);
    transparent_crc(p_1082->g_775.s6, "p_1082->g_775.s6", print_hash_value);
    transparent_crc(p_1082->g_775.s7, "p_1082->g_775.s7", print_hash_value);
    transparent_crc(p_1082->g_776.s0, "p_1082->g_776.s0", print_hash_value);
    transparent_crc(p_1082->g_776.s1, "p_1082->g_776.s1", print_hash_value);
    transparent_crc(p_1082->g_776.s2, "p_1082->g_776.s2", print_hash_value);
    transparent_crc(p_1082->g_776.s3, "p_1082->g_776.s3", print_hash_value);
    transparent_crc(p_1082->g_776.s4, "p_1082->g_776.s4", print_hash_value);
    transparent_crc(p_1082->g_776.s5, "p_1082->g_776.s5", print_hash_value);
    transparent_crc(p_1082->g_776.s6, "p_1082->g_776.s6", print_hash_value);
    transparent_crc(p_1082->g_776.s7, "p_1082->g_776.s7", print_hash_value);
    transparent_crc(p_1082->g_952.x, "p_1082->g_952.x", print_hash_value);
    transparent_crc(p_1082->g_952.y, "p_1082->g_952.y", print_hash_value);
    transparent_crc(p_1082->g_963.s0, "p_1082->g_963.s0", print_hash_value);
    transparent_crc(p_1082->g_963.s1, "p_1082->g_963.s1", print_hash_value);
    transparent_crc(p_1082->g_963.s2, "p_1082->g_963.s2", print_hash_value);
    transparent_crc(p_1082->g_963.s3, "p_1082->g_963.s3", print_hash_value);
    transparent_crc(p_1082->g_963.s4, "p_1082->g_963.s4", print_hash_value);
    transparent_crc(p_1082->g_963.s5, "p_1082->g_963.s5", print_hash_value);
    transparent_crc(p_1082->g_963.s6, "p_1082->g_963.s6", print_hash_value);
    transparent_crc(p_1082->g_963.s7, "p_1082->g_963.s7", print_hash_value);
    transparent_crc(p_1082->g_965.s0, "p_1082->g_965.s0", print_hash_value);
    transparent_crc(p_1082->g_965.s1, "p_1082->g_965.s1", print_hash_value);
    transparent_crc(p_1082->g_965.s2, "p_1082->g_965.s2", print_hash_value);
    transparent_crc(p_1082->g_965.s3, "p_1082->g_965.s3", print_hash_value);
    transparent_crc(p_1082->g_965.s4, "p_1082->g_965.s4", print_hash_value);
    transparent_crc(p_1082->g_965.s5, "p_1082->g_965.s5", print_hash_value);
    transparent_crc(p_1082->g_965.s6, "p_1082->g_965.s6", print_hash_value);
    transparent_crc(p_1082->g_965.s7, "p_1082->g_965.s7", print_hash_value);
    transparent_crc(p_1082->g_971.x, "p_1082->g_971.x", print_hash_value);
    transparent_crc(p_1082->g_971.y, "p_1082->g_971.y", print_hash_value);
    transparent_crc(p_1082->g_981.f0, "p_1082->g_981.f0", print_hash_value);
    transparent_crc(p_1082->g_981.f1, "p_1082->g_981.f1", print_hash_value);
    transparent_crc(p_1082->g_981.f2, "p_1082->g_981.f2", print_hash_value);
    transparent_crc(p_1082->g_981.f3, "p_1082->g_981.f3", print_hash_value);
    transparent_crc(p_1082->g_982.f0, "p_1082->g_982.f0", print_hash_value);
    transparent_crc(p_1082->g_982.f1, "p_1082->g_982.f1", print_hash_value);
    transparent_crc(p_1082->g_982.f2, "p_1082->g_982.f2", print_hash_value);
    transparent_crc(p_1082->g_982.f3, "p_1082->g_982.f3", print_hash_value);
    transparent_crc(p_1082->g_1003.f0, "p_1082->g_1003.f0", print_hash_value);
    transparent_crc(p_1082->g_1003.f1, "p_1082->g_1003.f1", print_hash_value);
    transparent_crc(p_1082->g_1003.f2, "p_1082->g_1003.f2", print_hash_value);
    transparent_crc(p_1082->g_1003.f3, "p_1082->g_1003.f3", print_hash_value);
    transparent_crc(p_1082->g_1004.f0, "p_1082->g_1004.f0", print_hash_value);
    transparent_crc(p_1082->g_1004.f1, "p_1082->g_1004.f1", print_hash_value);
    transparent_crc(p_1082->g_1004.f2, "p_1082->g_1004.f2", print_hash_value);
    transparent_crc(p_1082->g_1004.f3, "p_1082->g_1004.f3", print_hash_value);
    transparent_crc(p_1082->g_1044.x, "p_1082->g_1044.x", print_hash_value);
    transparent_crc(p_1082->g_1044.y, "p_1082->g_1044.y", print_hash_value);
    transparent_crc(p_1082->g_1049.s0, "p_1082->g_1049.s0", print_hash_value);
    transparent_crc(p_1082->g_1049.s1, "p_1082->g_1049.s1", print_hash_value);
    transparent_crc(p_1082->g_1049.s2, "p_1082->g_1049.s2", print_hash_value);
    transparent_crc(p_1082->g_1049.s3, "p_1082->g_1049.s3", print_hash_value);
    transparent_crc(p_1082->g_1049.s4, "p_1082->g_1049.s4", print_hash_value);
    transparent_crc(p_1082->g_1049.s5, "p_1082->g_1049.s5", print_hash_value);
    transparent_crc(p_1082->g_1049.s6, "p_1082->g_1049.s6", print_hash_value);
    transparent_crc(p_1082->g_1049.s7, "p_1082->g_1049.s7", print_hash_value);
    transparent_crc(p_1082->g_1052.s0, "p_1082->g_1052.s0", print_hash_value);
    transparent_crc(p_1082->g_1052.s1, "p_1082->g_1052.s1", print_hash_value);
    transparent_crc(p_1082->g_1052.s2, "p_1082->g_1052.s2", print_hash_value);
    transparent_crc(p_1082->g_1052.s3, "p_1082->g_1052.s3", print_hash_value);
    transparent_crc(p_1082->g_1052.s4, "p_1082->g_1052.s4", print_hash_value);
    transparent_crc(p_1082->g_1052.s5, "p_1082->g_1052.s5", print_hash_value);
    transparent_crc(p_1082->g_1052.s6, "p_1082->g_1052.s6", print_hash_value);
    transparent_crc(p_1082->g_1052.s7, "p_1082->g_1052.s7", print_hash_value);
    transparent_crc(p_1082->g_1052.s8, "p_1082->g_1052.s8", print_hash_value);
    transparent_crc(p_1082->g_1052.s9, "p_1082->g_1052.s9", print_hash_value);
    transparent_crc(p_1082->g_1052.sa, "p_1082->g_1052.sa", print_hash_value);
    transparent_crc(p_1082->g_1052.sb, "p_1082->g_1052.sb", print_hash_value);
    transparent_crc(p_1082->g_1052.sc, "p_1082->g_1052.sc", print_hash_value);
    transparent_crc(p_1082->g_1052.sd, "p_1082->g_1052.sd", print_hash_value);
    transparent_crc(p_1082->g_1052.se, "p_1082->g_1052.se", print_hash_value);
    transparent_crc(p_1082->g_1052.sf, "p_1082->g_1052.sf", print_hash_value);
    transparent_crc(p_1082->g_1070.s0, "p_1082->g_1070.s0", print_hash_value);
    transparent_crc(p_1082->g_1070.s1, "p_1082->g_1070.s1", print_hash_value);
    transparent_crc(p_1082->g_1070.s2, "p_1082->g_1070.s2", print_hash_value);
    transparent_crc(p_1082->g_1070.s3, "p_1082->g_1070.s3", print_hash_value);
    transparent_crc(p_1082->g_1070.s4, "p_1082->g_1070.s4", print_hash_value);
    transparent_crc(p_1082->g_1070.s5, "p_1082->g_1070.s5", print_hash_value);
    transparent_crc(p_1082->g_1070.s6, "p_1082->g_1070.s6", print_hash_value);
    transparent_crc(p_1082->g_1070.s7, "p_1082->g_1070.s7", print_hash_value);
    transparent_crc(p_1082->v_collective, "p_1082->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 99; i++)
            transparent_crc(p_1082->g_special_values[i + 99 * get_linear_group_id()], "p_1082->g_special_values[i + 99 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 99; i++)
            transparent_crc(p_1082->l_special_values[i], "p_1082->l_special_values[i]", print_hash_value);
    transparent_crc(p_1082->l_comm_values[get_linear_local_id()], "p_1082->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1082->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()], "p_1082->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
